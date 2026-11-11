# game/update/moby927.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M927_004b98ac:   # 0x4b98ac, 0x14 bytes
  04b98ac  lis 3, 143
  04b98b0  lis 4, 1
  04b98b4  addic 3, 3, 18284
  04b98b8  stw 4, 72(3)
  04b98bc  blr

M927_004b98e0:   # 0x4b98e0, 0x7d4 bytes
  04b98e0  stdu 1, -256(1)
  04b98e4  mflr 0
  04b98e8  std 0, 272(1)
  04b98ec  stfd 31, 248(1)
  04b98f0  std 31, 240(1)
  04b98f4  lis 4, 76
  04b98f8  ori 31, 3, 0
  04b98fc  addi 5, 4, -26432
  04b9900  li 6, 0
  04b9904  std 30, 232(1)
  04b9908  lis 4, 51
  04b990c  lwz 30, 120(31)
  04b9910  lfs 31, 0(5)
  04b9914  li 5, 0
  04b9918  std 29, 224(1)
  04b991c  std 28, 216(1)
  04b9920  stw 6, 116(1)
  04b9924  bl 0x10675c
  04b9928  nop
  04b992c  ori 29, 3, 0
  04b9930  ori 3, 31, 0
  04b9934  ori 4, 29, 0
  04b9938  addic 5, 30, 32
  04b993c  li 6, 0
  04b9940  addic 7, 1, 112
  04b9944  li 9, 0
  04b9948  addic 8, 1, 116
  04b994c  li 10, 4
  04b9950  bl 0x106840
  04b9954  nop
  04b9958  ori 28, 3, 0
  04b995c  lwz 3, 112(1)
  04b9960  cmpwi 3, 1
  04b9964  bt 2, 0x4b9f3c
  04b9968  lbz 3, 32(31)
  04b996c  cmpwi 3, 9
  04b9970  bt 2, 0x4b9f3c
  04b9974  lfs 1, 32(30)
  04b9978  lfs 2, 116(1)
  04b997c  fsubs 1, 1, 2
  04b9980  fcmpu 0, 1, 31
  04b9984  stfs 1, 32(30)
  04b9988  bt 1, 0x4b9990
  04b998c  li 28, 1
  04b9990  lis 3, 76
  04b9994  addi 3, 3, -26432
  04b9998  lfs 1, 4(3)
  04b999c  bl 0x502758
  04b99a0  nop
  04b99a4  lis 4, 16128
  04b99a8  lis 5, 143
  04b99ac  lis 6, 114
  04b99b0  cmpwi 28, 2
  04b99b4  stw 4, 152(30)
  04b99b8  lis 4, 14851
  04b99bc  lfs 1, 18392(5)
  04b99c0  lfs 2, -3048(6)
  04b99c4  ori 4, 4, 4719
  04b99c8  stw 3, 144(30)
  04b99cc  fmuls 1, 1, 2
  04b99d0  li 3, 0
  04b99d4  li 5, 9
  04b99d8  stw 4, 132(30)
  04b99dc  stb 3, 173(30)
  04b99e0  stw 5, 148(30)
  04b99e4  stfs 1, 128(30)
  04b99e8  bt 1, 0x4b9a00
  04b99ec  cmpwi 28, -1
  04b99f0  cmpwi 1, 28, 0
  04b99f4  bf 1, 0x4b9f2c
  04b99f8  bf 5, 0x4b9f2c
  04b99fc  b 0x4b9c84
  04b9a00  cmpwi 28, 10
  04b9a04  cmpwi 1, 28, 8
  04b9a08  bt 1, 0x4b9f2c
  04b9a0c  bf 5, 0x4b9a1c
  04b9a10  li 3, 250
  04b9a14  stb 3, 103(30)
  04b9a18  b 0x4b9f2c
  04b9a1c  lis 3, 143
  04b9a20  lis 4, 114
  04b9a24  lis 5, 143
  04b9a28  lfs 1, 18400(3)
  04b9a2c  lfs 2, -3052(4)
  04b9a30  lis 3, 16448
  04b9a34  lis 4, 16576
  04b9a38  fmuls 1, 1, 2
  04b9a3c  stfs 1, 136(30)
  04b9a40  lfs 1, 18396(5)
  04b9a44  stw 3, 192(30)
  04b9a48  fmuls 1, 1, 2
  04b9a4c  stw 4, 196(30)
  04b9a50  stfs 1, 140(30)
  04b9a54  lwz 3, 32(29)
  04b9a58  lfs 1, 16(31)
  04b9a5c  lfs 2, 20(31)
  04b9a60  lfs 3, 16(3)
  04b9a64  lfs 4, 20(3)
  04b9a68  fsubs 1, 1, 3
  04b9a6c  fsubs 2, 2, 4
  04b9a70  lis 3, 115
  04b9a74  addic 3, 3, 22784
  04b9a78  fabs 3, 1
  04b9a7c  fabs 4, 2
  04b9a80  stfs 1, 140(1)
  04b9a84  stfs 2, 144(1)
  04b9a88  fsubs 1, 3, 4
  04b9a8c  stfs 1, 148(1)
  04b9a90  lwz 4, 140(1)
  04b9a94  lfs 1, 140(1)
  04b9a98  lwz 5, 144(1)
  04b9a9c  lfs 2, 144(1)
  04b9aa0  fabs 1, 1
  04b9aa4  lwz 6, 148(1)
  04b9aa8  rlwinm 5, 5, 3, 29, 29
  04b9aac  lfs 5, 148(1)
  04b9ab0  fabs 2, 2
  04b9ab4  rlwimi 5, 6, 2, 30, 30
  04b9ab8  fsub 6, 5, 31
  04b9abc  fsub 5, 5, 31
  04b9ac0  rlwimi 5, 4, 4, 28, 28
  04b9ac4  ori 4, 3, 0
  04b9ac8  rlwimi 4, 5, 2, 26, 28
  04b9acc  slwi 5, 5, 2
  04b9ad0  clrldi 4, 4, 32
  04b9ad4  fsel 4, 6, 1, 4
  04b9ad8  lfsx 1, 3, 5
  04b9adc  fsel 3, 5, 2, 3
  04b9ae0  lfs 2, 4(4)
  04b9ae4  fcmpu 0, 4, 31
  04b9ae8  bt 1, 0x4b9af0
  04b9aec  b 0x4b9c10
  04b9af0  fsubs 5, 3, 4
  04b9af4  fadds 3, 3, 4
  04b9af8  addic 3, 1, 16
  04b9afc  li 6, 2
  04b9b00  addic 5, 3, 184
  04b9b04  addic 4, 3, 168
  04b9b08  mtctr 6
  04b9b0c  fdivs 3, 5, 3
  04b9b10  fmuls 4, 3, 3
  04b9b14  stfs 3, 196(1)
  04b9b18  stfs 3, 188(1)
  04b9b1c  stfs 3, 192(1)
  04b9b20  stfs 3, 184(1)
  04b9b24  lfs 6, 196(1)
  04b9b28  lfs 7, 188(1)
  04b9b2c  lfs 8, 192(1)
  04b9b30  fmuls 5, 4, 4
  04b9b34  fmuls 7, 7, 4
  04b9b38  fmuls 6, 6, 5
  04b9b3c  fmuls 3, 5, 5
  04b9b40  fmuls 5, 8, 5
  04b9b44  stfs 7, 188(1)
  04b9b48  fmuls 4, 6, 4
  04b9b4c  stfs 5, 192(1)
  04b9b50  stfs 4, 196(1)
  04b9b54  lfs 4, 168(3)
  04b9b58  fmuls 4, 4, 3
  04b9b5c  stfs 4, 184(3)
  04b9b60  lfs 4, 4(4)
  04b9b64  addic 4, 4, 8
  04b9b68  fmuls 4, 4, 3
  04b9b6c  addic 3, 3, 8
  04b9b70  stfs 4, 4(5)
  04b9b74  addic 5, 5, 8
  04b9b78  bdnz 0x4b9b54
  04b9b7c  li 5, 4
  04b9b80  ori 3, 1, 0
  04b9b84  mtctr 5
  04b9b88  lis 4, 115
  04b9b8c  addic 5, 3, 184
  04b9b90  addic 4, 4, 22752
  04b9b94  ori 7, 5, 0
  04b9b98  lfs 3, 184(3)
  04b9b9c  lfs 4, 0(4)
  04b9ba0  fmuls 3, 3, 4
  04b9ba4  lfs 4, 4(4)
  04b9ba8  addic 4, 4, 8
  04b9bac  stfs 3, 184(3)
  04b9bb0  lfs 3, 4(5)
  04b9bb4  addic 3, 3, 8
  04b9bb8  fmuls 3, 3, 4
  04b9bbc  stfs 3, 4(5)
  04b9bc0  addic 5, 5, 8
  04b9bc4  bdnz 0x4b9b98
  04b9bc8  ori 3, 1, 0
  04b9bcc  mtctr 6
  04b9bd0  lfs 3, 184(3)
  04b9bd4  lfs 4, 4(7)
  04b9bd8  fadds 3, 31, 3
  04b9bdc  lfs 5, 8(7)
  04b9be0  addic 3, 3, 16
  04b9be4  lfs 31, 12(7)
  04b9be8  addic 7, 7, 16
  04b9bec  fadds 3, 3, 4
  04b9bf0  fadds 3, 3, 5
  04b9bf4  fadds 31, 3, 31
  04b9bf8  bdnz 0x4b9bd0
  04b9bfc  lis 3, 76
  04b9c00  addi 3, 3, -26432
  04b9c04  lfs 3, 8(3)
  04b9c08  fadds 31, 31, 3
  04b9c0c  fmadds 31, 31, 1, 2
  04b9c10  stfs 31, 120(1)
  04b9c14  lfs 1, 16(29)
  04b9c18  addic 5, 1, 120
  04b9c1c  lfs 2, 24(29)
  04b9c20  addic 6, 30, 136
  04b9c24  stfs 1, 48(1)
  04b9c28  addic 7, 30, 140
  04b9c2c  stfs 2, 56(1)
  04b9c30  lfs 1, 20(29)
  04b9c34  lfs 2, 28(29)
  04b9c38  stfs 1, 52(1)
  04b9c3c  stfs 2, 60(1)
  04b9c40  ld 3, 48(1)
  04b9c44  ld 4, 56(1)
  04b9c48  bl 0x107de8
  04b9c4c  nop
  04b9c50  ori 3, 31, 0
  04b9c54  addic 4, 30, 112
  04b9c58  lfs 1, 120(1)
  04b9c5c  li 6, 9
  04b9c60  li 7, 1
  04b9c64  li 8, 0
  04b9c68  bl 0x10ad80
  04b9c6c  nop
  04b9c70  li 3, 8
  04b9c74  li 4, 120
  04b9c78  stb 3, 32(31)
  04b9c7c  stb 4, 103(30)
  04b9c80  b 0x4b9f2c
  04b9c84  lis 3, 143
  04b9c88  lis 4, 114
  04b9c8c  lis 5, 143
  04b9c90  lis 6, 114
  04b9c94  lis 7, 143
  04b9c98  lfs 1, 18392(3)
  04b9c9c  lfs 2, -3048(4)
  04b9ca0  li 3, 0
  04b9ca4  lhz 4, 52(31)
  04b9ca8  fmuls 1, 1, 2
  04b9cac  rlwimi 4, 3, 0, 19, 19
  04b9cb0  lis 3, 16736
  04b9cb4  sth 4, 52(31)
  04b9cb8  lis 4, 16864
  04b9cbc  stfs 1, 128(30)
  04b9cc0  lfs 1, 18408(5)
  04b9cc4  lfs 2, -3052(6)
  04b9cc8  fmuls 1, 1, 2
  04b9ccc  stfs 1, 136(30)
  04b9cd0  lfs 1, 18404(7)
  04b9cd4  stw 3, 192(30)
  04b9cd8  fmuls 1, 1, 2
  04b9cdc  stw 4, 196(30)
  04b9ce0  stfs 1, 140(30)
  04b9ce4  lwz 3, 32(29)
  04b9ce8  lfs 1, 16(31)
  04b9cec  lfs 2, 20(31)
  04b9cf0  lfs 3, 16(3)
  04b9cf4  lfs 4, 20(3)
  04b9cf8  fsubs 1, 1, 3
  04b9cfc  fsubs 2, 2, 4
  04b9d00  lis 3, 115
  04b9d04  addic 3, 3, 22784
  04b9d08  fabs 3, 1
  04b9d0c  fabs 4, 2
  04b9d10  stfs 1, 128(1)
  04b9d14  stfs 2, 132(1)
  04b9d18  fsubs 1, 3, 4
  04b9d1c  stfs 1, 136(1)
  04b9d20  lwz 4, 128(1)
  04b9d24  lfs 1, 128(1)
  04b9d28  lwz 5, 132(1)
  04b9d2c  lfs 2, 132(1)
  04b9d30  fabs 1, 1
  04b9d34  lwz 6, 136(1)
  04b9d38  rlwinm 5, 5, 3, 29, 29
  04b9d3c  lfs 5, 136(1)
  04b9d40  fabs 2, 2
  04b9d44  rlwimi 5, 6, 2, 30, 30
  04b9d48  fsub 6, 5, 31
  04b9d4c  fsub 5, 5, 31
  04b9d50  rlwimi 5, 4, 4, 28, 28
  04b9d54  ori 4, 3, 0
  04b9d58  rlwimi 4, 5, 2, 26, 28
  04b9d5c  slwi 5, 5, 2
  04b9d60  clrldi 4, 4, 32
  04b9d64  fsel 4, 6, 1, 4
  04b9d68  lfsx 1, 3, 5
  04b9d6c  fsel 3, 5, 2, 3
  04b9d70  lfs 2, 4(4)
  04b9d74  fcmpu 0, 4, 31
  04b9d78  bt 1, 0x4b9d80
  04b9d7c  b 0x4b9ea0
  04b9d80  fsubs 5, 3, 4
  04b9d84  fadds 3, 3, 4
  04b9d88  addic 3, 1, 16
  04b9d8c  li 7, 2
  04b9d90  addic 5, 3, 152
  04b9d94  addic 4, 3, 136
  04b9d98  mtctr 7
  04b9d9c  fdivs 3, 5, 3
  04b9da0  fmuls 4, 3, 3
  04b9da4  stfs 3, 164(1)
  04b9da8  stfs 3, 156(1)
  04b9dac  stfs 3, 160(1)
  04b9db0  stfs 3, 152(1)
  04b9db4  lfs 6, 164(1)
  04b9db8  lfs 7, 156(1)
  04b9dbc  lfs 8, 160(1)
  04b9dc0  fmuls 5, 4, 4
  04b9dc4  fmuls 7, 7, 4
  04b9dc8  fmuls 6, 6, 5
  04b9dcc  fmuls 3, 5, 5
  04b9dd0  fmuls 5, 8, 5
  04b9dd4  stfs 7, 156(1)
  04b9dd8  fmuls 4, 6, 4
  04b9ddc  stfs 5, 160(1)
  04b9de0  stfs 4, 164(1)
  04b9de4  lfs 4, 136(3)
  04b9de8  fmuls 4, 4, 3
  04b9dec  stfs 4, 152(3)
  04b9df0  lfs 4, 4(4)
  04b9df4  addic 4, 4, 8
  04b9df8  fmuls 4, 4, 3
  04b9dfc  addic 3, 3, 8
  04b9e00  stfs 4, 4(5)
  04b9e04  addic 5, 5, 8
  04b9e08  bdnz 0x4b9de4
  04b9e0c  li 5, 4
  04b9e10  ori 3, 1, 0
  04b9e14  mtctr 5
  04b9e18  lis 4, 115
  04b9e1c  addic 5, 3, 152
  04b9e20  addic 4, 4, 22752
  04b9e24  ori 6, 5, 0
  04b9e28  lfs 3, 152(3)
  04b9e2c  lfs 4, 0(4)
  04b9e30  fmuls 3, 3, 4
  04b9e34  lfs 4, 4(4)
  04b9e38  addic 4, 4, 8
  04b9e3c  stfs 3, 152(3)
  04b9e40  lfs 3, 4(5)
  04b9e44  addic 3, 3, 8
  04b9e48  fmuls 3, 3, 4
  04b9e4c  stfs 3, 4(5)
  04b9e50  addic 5, 5, 8
  04b9e54  bdnz 0x4b9e28
  04b9e58  ori 3, 1, 0
  04b9e5c  mtctr 7
  04b9e60  lfs 3, 152(3)
  04b9e64  lfs 4, 4(6)
  04b9e68  fadds 3, 31, 3
  04b9e6c  lfs 5, 8(6)
  04b9e70  addic 3, 3, 16
  04b9e74  lfs 31, 12(6)
  04b9e78  addic 6, 6, 16
  04b9e7c  fadds 3, 3, 4
  04b9e80  fadds 3, 3, 5
  04b9e84  fadds 31, 3, 31
  04b9e88  bdnz 0x4b9e60
  04b9e8c  lis 3, 76
  04b9e90  addi 3, 3, -26432
  04b9e94  lfs 3, 8(3)
  04b9e98  fadds 31, 31, 3
  04b9e9c  fmadds 31, 31, 1, 2
  04b9ea0  stfs 31, 124(1)
  04b9ea4  lfs 1, 16(29)
  04b9ea8  addic 5, 1, 124
  04b9eac  lfs 2, 24(29)
  04b9eb0  addic 6, 30, 136
  04b9eb4  stfs 1, 48(1)
  04b9eb8  addic 7, 30, 140
  04b9ebc  stfs 2, 56(1)
  04b9ec0  lfs 1, 20(29)
  04b9ec4  lfs 2, 28(29)
  04b9ec8  stfs 1, 52(1)
  04b9ecc  stfs 2, 60(1)
  04b9ed0  ld 3, 48(1)
  04b9ed4  ld 4, 56(1)
  04b9ed8  bl 0x107de8
  04b9edc  nop
  04b9ee0  addic 4, 30, 112
  04b9ee4  lfs 1, 124(1)
  04b9ee8  ori 3, 31, 0
  04b9eec  li 6, 11
  04b9ef0  li 7, 1
  04b9ef4  li 8, 0
  04b9ef8  bl 0x10ad80
  04b9efc  nop
  04b9f00  li 5, 9
  04b9f04  li 6, 240
  04b9f08  ori 3, 31, 0
  04b9f0c  li 4, 2
  04b9f10  stb 5, 32(31)
  04b9f14  stb 6, 103(30)
  04b9f18  li 5, 3
  04b9f1c  li 6, 0
  04b9f20  li 7, -1
  04b9f24  bl 0xfcd60
  04b9f28  nop
  04b9f2c  addic 4, 30, 96
  04b9f30  ori 3, 31, 0
  04b9f34  bl 0x10c808
  04b9f38  nop
  04b9f3c  li 5, 255
  04b9f40  ori 3, 31, 0
  04b9f44  addic 4, 30, 96
  04b9f48  stb 5, 164(31)
  04b9f4c  bl 0x10c9a0
  04b9f50  nop
  04b9f54  lwz 3, 56(30)
  04b9f58  cmpwi 3, 0
  04b9f5c  bt 2, 0x4b9f98
  04b9f60  lis 3, 76
  04b9f64  addi 3, 3, -26432
  04b9f68  lfs 1, 12(3)
  04b9f6c  lfs 2, 16(3)
  04b9f70  bl 0xfcbe8
  04b9f74  nop
  04b9f78  lis 3, 114
  04b9f7c  lfs 2, -3056(3)
  04b9f80  fmuls 1, 1, 2
  04b9f84  bl 0x502758
  04b9f88  nop
  04b9f8c  stw 3, 404(30)
  04b9f90  li 3, 0
  04b9f94  stw 3, 56(30)
  04b9f98  addic 3, 30, 404
  04b9f9c  bl 0x4fff60
  04b9fa0  nop
  04b9fa4  lwz 4, 404(30)
  04b9fa8  lwz 3, 384(30)
  04b9fac  cmpwi 4, 0
  04b9fb0  bt 2, 0x4b9fcc
  04b9fb4  lis 4, 76
  04b9fb8  lfs 1, 396(30)
  04b9fbc  addi 4, 4, -26432
  04b9fc0  lfs 2, 20(4)
  04b9fc4  fadds 1, 1, 2
  04b9fc8  b 0x4b9fd0
  04b9fcc  lfs 1, 396(30)
  04b9fd0  lis 4, 165
  04b9fd4  slwi 3, 3, 2
  04b9fd8  stfs 1, 408(30)
  04b9fdc  addic 5, 4, 7136
  04b9fe0  extsw 7, 3
  04b9fe4  ori 3, 31, 0
  04b9fe8  addic 4, 30, 288
  04b9fec  li 6, 0
  04b9ff0  lwzx 5, 5, 7
  04b9ff4  li 7, 0
  04b9ff8  addic 8, 5, 16
  04b9ffc  lwz 9, 0(5)
  04ba000  extsw 9, 9
  04ba004  bl 0x111ba0
  04ba008  nop
  04ba00c  cmpwi 3, 2
  04ba010  bt 2, 0x4ba074
  04ba014  lfs 1, 20(31)
  04ba018  lfs 2, 292(30)
  04ba01c  lfs 3, 16(31)
  04ba020  fsubs 1, 1, 2
  04ba024  lfs 2, 288(30)
  04ba028  fsubs 2, 3, 2
  04ba02c  fmuls 1, 1, 1
  04ba030  fmadds 1, 2, 2, 1
  04ba034  lfs 2, 408(30)
  04ba038  fsqrts 1, 1
  04ba03c  fcmpu 0, 1, 2
  04ba040  bt 1, 0x4ba06c
  04ba044  lfs 1, 24(31)
  04ba048  lis 3, 76
  04ba04c  lfs 2, 296(30)
  04ba050  addi 3, 3, -26432
  04ba054  fsubs 1, 1, 2
  04ba058  lfs 2, 24(3)
  04ba05c  fabs 1, 1
  04ba060  fcmpu 0, 1, 2
  04ba064  cror 6, 0, 2
  04ba068  bt 6, 0x4ba074
  04ba06c  li 3, 2
  04ba070  stw 3, 356(30)
  04ba074  lwz 3, 352(30)
  04ba078  cmpwi 3, 0
  04ba07c  bf 2, 0x4ba090
  04ba080  lis 3, 151
  04ba084  addic 3, 3, -25376
  04ba088  lwz 3, 8320(3)
  04ba08c  stw 3, 352(30)
  04ba090  ld 0, 272(1)
  04ba094  mtlr 0
  04ba098  lfd 31, 248(1)
  04ba09c  ld 28, 216(1)
  04ba0a0  ld 29, 224(1)
  04ba0a4  ld 30, 232(1)
  04ba0a8  ld 31, 240(1)
  04ba0ac  addi 1, 1, 256
  04ba0b0  blr

UpdateMoby_927:   # 0x4ba118, 0x12bc bytes
  04ba118  stdu 1, -432(1)
  04ba11c  mflr 0
  04ba120  std 0, 448(1)
  04ba124  stfd 31, 424(1)
  04ba128  std 31, 416(1)
  04ba12c  lis 4, 76
  04ba130  ori 31, 3, 0
  04ba134  addi 4, 4, -24396
  04ba138  std 30, 408(1)
  04ba13c  lis 5, 16256
  04ba140  lwz 30, 120(31)
  04ba144  lfs 31, 0(4)
  04ba148  std 29, 400(1)
  04ba14c  stw 5, 88(31)
  04ba150  bl 0x4b98e0
  04ba154  lbz 4, 32(31)
  04ba158  lwz 3, 352(30)
  04ba15c  cmpwi 4, 3
  04ba160  bt 1, 0x4ba18c
  04ba164  cmpwi 4, 0
  04ba168  bt 1, 0x4ba178
  04ba16c  cmpwi 4, -1
  04ba170  bf 1, 0x4bb3b4
  04ba174  b 0x4ba1bc
  04ba178  cmpwi 4, 1
  04ba17c  bf 1, 0x4ba2e4
  04ba180  cmpwi 4, 2
  04ba184  bf 1, 0x4ba704
  04ba188  b 0x4ba8ac
  04ba18c  cmpwi 4, 7
  04ba190  bt 1, 0x4ba1a8
  04ba194  cmpwi 4, 4
  04ba198  bf 1, 0x4bac2c
  04ba19c  cmpwi 4, 5
  04ba1a0  bf 1, 0x4baf64
  04ba1a4  b 0x4ba620
  04ba1a8  cmpwi 4, 8
  04ba1ac  bf 1, 0x4bb2b4
  04ba1b0  cmpwi 4, 9
  04ba1b4  bf 1, 0x4bb360
  04ba1b8  b 0x4bb3b4
  04ba1bc  lis 4, 16448
  04ba1c0  li 5, 2
  04ba1c4  li 6, 3
  04ba1c8  addic 3, 30, 208
  04ba1cc  stw 4, 32(30)
  04ba1d0  stb 5, 40(30)
  04ba1d4  lfs 1, 16(31)
  04ba1d8  sth 6, 36(30)
  04ba1dc  stfs 1, 368(30)
  04ba1e0  lfs 1, 20(31)
  04ba1e4  stfs 1, 372(30)
  04ba1e8  lfs 1, 24(31)
  04ba1ec  stfs 1, 376(30)
  04ba1f0  lfs 1, 28(31)
  04ba1f4  stfs 1, 380(30)
  04ba1f8  bl 0x100f8c
  04ba1fc  nop
  04ba200  lis 4, 76
  04ba204  lis 3, 16128
  04ba208  addi 29, 4, -24396
  04ba20c  stw 3, 220(30)
  04ba210  stw 3, 216(30)
  04ba214  lfs 1, 4(29)
  04ba218  bl 0x502758
  04ba21c  nop
  04ba220  stw 3, 208(30)
  04ba224  lis 3, 114
  04ba228  lfs 1, 8(29)
  04ba22c  lfs 2, -3052(3)
  04ba230  fmuls 1, 2, 1
  04ba234  stfs 1, 244(30)
  04ba238  bl 0x5c8318
  04ba23c  nop
  04ba240  clrlwi 4, 3, 31
  04ba244  lbz 3, 83(31)
  04ba248  cmpwi 4, 0
  04ba24c  bt 2, 0x4ba264
  04ba250  lis 4, 0
  04ba254  lhz 5, 52(31)
  04ba258  ori 4, 4, 32768
  04ba25c  or 4, 5, 4
  04ba260  sth 4, 52(31)
  04ba264  lwz 4, 392(30)
  04ba268  cmpwi 4, 0
  04ba26c  bt 2, 0x4ba2b8
  04ba270  li 3, 1
  04ba274  lis 4, 165
  04ba278  addic 4, 4, 7136
  04ba27c  stb 3, 32(31)
  04ba280  lwz 3, 388(30)
  04ba284  slwi 3, 3, 2
  04ba288  extsw 3, 3
  04ba28c  lwzx 3, 4, 3
  04ba290  lfs 1, 16(3)
  04ba294  stfs 1, 16(31)
  04ba298  lfs 1, 20(3)
  04ba29c  stfs 1, 20(31)
  04ba2a0  lfs 1, 24(3)
  04ba2a4  lfs 2, 28(3)
  04ba2a8  fsubs 1, 1, 31
  04ba2ac  stfs 2, 28(31)
  04ba2b0  stfs 1, 24(31)
  04ba2b4  b 0x4bb3b4
  04ba2b8  li 4, 2
  04ba2bc  cmpwi 3, 1
  04ba2c0  stb 4, 32(31)
  04ba2c4  bt 2, 0x4bb3b4
  04ba2c8  ori 3, 31, 0
  04ba2cc  li 4, 1
  04ba2d0  li 5, 0
  04ba2d4  li 6, 5
  04ba2d8  bl 0xfddc0
  04ba2dc  nop
  04ba2e0  b 0x4bb3b4
  04ba2e4  lwz 3, 388(30)
  04ba2e8  lis 29, 165
  04ba2ec  lfs 1, 16(31)
  04ba2f0  slwi 3, 3, 2
  04ba2f4  addic 29, 29, 7136
  04ba2f8  lfs 2, 20(31)
  04ba2fc  extsw 3, 3
  04ba300  lis 4, 115
  04ba304  lwzx 3, 29, 3
  04ba308  addic 4, 4, 22784
  04ba30c  lfs 3, 32(3)
  04ba310  lfs 4, 36(3)
  04ba314  fsubs 1, 3, 1
  04ba318  lis 3, 76
  04ba31c  fsubs 2, 4, 2
  04ba320  addi 3, 3, -24396
  04ba324  fabs 3, 1
  04ba328  fabs 4, 2
  04ba32c  stfs 1, 244(1)
  04ba330  stfs 2, 248(1)
  04ba334  fsubs 1, 3, 4
  04ba338  stfs 1, 252(1)
  04ba33c  lwz 5, 244(1)
  04ba340  lfs 31, 12(3)
  04ba344  lfs 1, 244(1)
  04ba348  lwz 3, 248(1)
  04ba34c  lfs 2, 248(1)
  04ba350  fabs 1, 1
  04ba354  lwz 6, 252(1)
  04ba358  rlwinm 3, 3, 3, 29, 29
  04ba35c  fabs 5, 2
  04ba360  lfs 2, 252(1)
  04ba364  rlwimi 3, 6, 2, 30, 30
  04ba368  fsub 6, 2, 31
  04ba36c  rlwimi 3, 5, 4, 28, 28
  04ba370  fsub 7, 2, 31
  04ba374  ori 5, 4, 0
  04ba378  rlwimi 5, 3, 2, 26, 28
  04ba37c  slwi 3, 3, 2
  04ba380  clrldi 5, 5, 32
  04ba384  fsel 4, 6, 1, 4
  04ba388  lfsx 1, 4, 3
  04ba38c  lfs 2, 4(5)
  04ba390  fsel 3, 7, 5, 3
  04ba394  fcmpu 0, 4, 31
  04ba398  bt 1, 0x4ba3a4
  04ba39c  fmr 1, 31
  04ba3a0  b 0x4ba4c8
  04ba3a4  fsubs 5, 3, 4
  04ba3a8  fadds 3, 3, 4
  04ba3ac  addic 3, 1, 16
  04ba3b0  li 7, 2
  04ba3b4  addic 4, 3, 336
  04ba3b8  addic 5, 3, 352
  04ba3bc  mtctr 7
  04ba3c0  fdivs 3, 5, 3
  04ba3c4  fmuls 4, 3, 3
  04ba3c8  stfs 3, 364(1)
  04ba3cc  stfs 3, 356(1)
  04ba3d0  stfs 3, 360(1)
  04ba3d4  stfs 3, 352(1)
  04ba3d8  lfs 6, 364(1)
  04ba3dc  lfs 7, 356(1)
  04ba3e0  lfs 8, 360(1)
  04ba3e4  fmuls 5, 4, 4
  04ba3e8  fmuls 7, 7, 4
  04ba3ec  fmuls 6, 6, 5
  04ba3f0  fmuls 3, 5, 5
  04ba3f4  fmuls 5, 8, 5
  04ba3f8  stfs 7, 356(1)
  04ba3fc  fmuls 4, 6, 4
  04ba400  stfs 5, 360(1)
  04ba404  stfs 4, 364(1)
  04ba408  lfs 4, 336(3)
  04ba40c  fmuls 4, 4, 3
  04ba410  stfs 4, 352(3)
  04ba414  lfs 4, 4(4)
  04ba418  addic 3, 3, 8
  04ba41c  addic 4, 4, 8
  04ba420  fmuls 4, 4, 3
  04ba424  stfs 4, 4(5)
  04ba428  addic 5, 5, 8
  04ba42c  bdnz 0x4ba408
  04ba430  li 5, 4
  04ba434  ori 3, 1, 0
  04ba438  mtctr 5
  04ba43c  lis 4, 115
  04ba440  addic 5, 3, 352
  04ba444  addic 4, 4, 22752
  04ba448  ori 6, 5, 0
  04ba44c  lfs 3, 352(3)
  04ba450  lfs 4, 0(4)
  04ba454  fmuls 3, 3, 4
  04ba458  lfs 4, 4(4)
  04ba45c  addic 4, 4, 8
  04ba460  stfs 3, 352(3)
  04ba464  lfs 3, 4(5)
  04ba468  addic 3, 3, 8
  04ba46c  fmuls 3, 3, 4
  04ba470  stfs 3, 4(5)
  04ba474  addic 5, 5, 8
  04ba478  bdnz 0x4ba44c
  04ba47c  fmr 3, 31
  04ba480  ori 3, 1, 0
  04ba484  mtctr 7
  04ba488  lfs 4, 352(3)
  04ba48c  fadds 3, 3, 4
  04ba490  addic 3, 3, 16
  04ba494  lfs 4, 4(6)
  04ba498  lfs 5, 8(6)
  04ba49c  lfs 6, 12(6)
  04ba4a0  addic 6, 6, 16
  04ba4a4  fadds 3, 3, 4
  04ba4a8  fadds 3, 3, 5
  04ba4ac  fadds 3, 3, 6
  04ba4b0  bdnz 0x4ba488
  04ba4b4  lis 3, 76
  04ba4b8  addi 3, 3, -24396
  04ba4bc  lfs 4, 16(3)
  04ba4c0  fadds 3, 3, 4
  04ba4c4  fmadds 1, 3, 1, 2
  04ba4c8  lis 3, 76
  04ba4cc  lis 4, 114
  04ba4d0  addi 3, 3, -24396
  04ba4d4  lis 6, 114
  04ba4d8  addic 5, 30, 416
  04ba4dc  lfs 2, 20(3)
  04ba4e0  lfs 3, -3048(4)
  04ba4e4  lfs 4, 24(3)
  04ba4e8  fmuls 2, 3, 2
  04ba4ec  lfs 5, -3052(6)
  04ba4f0  addic 3, 31, 72
  04ba4f4  fmuls 4, 5, 4
  04ba4f8  fmr 3, 2
  04ba4fc  bl 0x10a2e0
  04ba500  nop
  04ba504  lwz 3, 356(30)
  04ba508  cmpwi 3, 2
  04ba50c  bt 2, 0x4bb3b4
  04ba510  li 3, 9
  04ba514  bl 0xfc620
  04ba518  nop
  04ba51c  cmpwi 3, 0
  04ba520  bf 2, 0x4bb3b4
  04ba524  li 3, 6
  04ba528  lbz 4, 83(31)
  04ba52c  cmpwi 4, 0
  04ba530  stb 3, 32(31)
  04ba534  bt 2, 0x4ba550
  04ba538  ori 3, 31, 0
  04ba53c  li 4, 0
  04ba540  li 5, 0
  04ba544  li 6, 5
  04ba548  bl 0xfddc0
  04ba54c  nop
  04ba550  lwz 3, 388(30)
  04ba554  lfs 1, 16(31)
  04ba558  slwi 3, 3, 2
  04ba55c  extsw 3, 3
  04ba560  lis 5, 114
  04ba564  lwzx 4, 29, 3
  04ba568  lis 3, 143
  04ba56c  lfs 2, 32(4)
  04ba570  fsubs 2, 2, 1
  04ba574  lis 6, 114
  04ba578  li 7, 0
  04ba57c  stfs 2, 64(30)
  04ba580  lfs 1, 36(4)
  04ba584  lfs 3, 20(31)
  04ba588  fsubs 3, 1, 3
  04ba58c  fmuls 1, 3, 3
  04ba590  stfs 3, 68(30)
  04ba594  lfs 4, 40(4)
  04ba598  lfs 5, 24(31)
  04ba59c  fsubs 4, 4, 5
  04ba5a0  fmadds 1, 2, 2, 1
  04ba5a4  stfs 4, 72(30)
  04ba5a8  fsqrts 5, 1
  04ba5ac  lfs 1, 44(4)
  04ba5b0  stfs 1, 76(30)
  04ba5b4  lfs 1, 18420(3)
  04ba5b8  lfs 4, -3052(5)
  04ba5bc  lis 5, 143
  04ba5c0  addic 3, 31, 16
  04ba5c4  addic 4, 4, 32
  04ba5c8  fmuls 1, 1, 4
  04ba5cc  fdivs 4, 1, 5
  04ba5d0  fsub 6, 31, 5
  04ba5d4  fsub 7, 31, 5
  04ba5d8  fsub 8, 5, 31
  04ba5dc  fsub 5, 5, 31
  04ba5e0  fmuls 2, 2, 4
  04ba5e4  fmuls 3, 3, 4
  04ba5e8  fsel 4, 6, 31, 2
  04ba5ec  fsel 6, 7, 31, 3
  04ba5f0  fsel 2, 8, 4, 2
  04ba5f4  fsel 3, 5, 6, 3
  04ba5f8  stfs 2, 64(30)
  04ba5fc  stfs 3, 68(30)
  04ba600  lfs 2, 18424(5)
  04ba604  lfs 3, -3048(6)
  04ba608  fmuls 2, 2, 3
  04ba60c  fneg 2, 2
  04ba610  bl 0x108180
  04ba614  nop
  04ba618  stfs 1, 72(30)
  04ba61c  b 0x4bb3b4
  04ba620  lfs 1, 16(31)
  04ba624  lfs 2, 64(30)
  04ba628  lis 3, 143
  04ba62c  fadds 1, 1, 2
  04ba630  lfs 2, 20(31)
  04ba634  lfs 3, 24(31)
  04ba638  lis 4, 114
  04ba63c  lis 5, 76
  04ba640  addi 5, 5, -24396
  04ba644  stfs 1, 16(31)
  04ba648  lfs 1, 68(30)
  04ba64c  fadds 1, 2, 1
  04ba650  stfs 1, 20(31)
  04ba654  lfs 1, 72(30)
  04ba658  fadds 1, 3, 1
  04ba65c  stfs 1, 24(31)
  04ba660  lfs 1, 72(30)
  04ba664  lfs 2, 18424(3)
  04ba668  lfs 3, -3048(4)
  04ba66c  fnmsubs 1, 2, 3, 1
  04ba670  stfs 1, 72(30)
  04ba674  lfs 2, 12(5)
  04ba678  fcmpu 0, 1, 2
  04ba67c  cror 6, 1, 2
  04ba680  bt 6, 0x4bb3b4
  04ba684  lfs 1, 24(31)
  04ba688  lis 3, 76
  04ba68c  lfs 2, 16(31)
  04ba690  li 4, 0
  04ba694  fadds 1, 1, 31
  04ba698  lfs 3, 20(31)
  04ba69c  addi 5, 3, -24396
  04ba6a0  stfs 2, 128(1)
  04ba6a4  lfs 2, 28(31)
  04ba6a8  addic 3, 1, 128
  04ba6ac  stfs 3, 132(1)
  04ba6b0  stfs 2, 140(1)
  04ba6b4  stfs 1, 136(1)
  04ba6b8  lfs 1, 28(5)
  04ba6bc  bl 0xffb70
  04ba6c0  nop
  04ba6c4  lfs 2, 24(31)
  04ba6c8  fcmpu 0, 1, 2
  04ba6cc  cror 6, 0, 2
  04ba6d0  bt 6, 0x4bb3b4
  04ba6d4  lbz 3, 32(31)
  04ba6d8  cmpwi 3, 6
  04ba6dc  bf 2, 0x4ba6f0
  04ba6e0  li 3, 2
  04ba6e4  stfs 1, 24(31)
  04ba6e8  stb 3, 32(31)
  04ba6ec  b 0x4bb3b4
  04ba6f0  fsubs 1, 1, 31
  04ba6f4  li 3, 1
  04ba6f8  stb 3, 32(31)
  04ba6fc  stfs 1, 24(31)
  04ba700  b 0x4bb3b4
  04ba704  lwz 3, 356(30)
  04ba708  cmpwi 1, 3, 2
  04ba70c  bt 6, 0x4ba78c
  04ba710  lis 3, 143
  04ba714  lfs 2, 18416(3)
  04ba718  fneg 1, 2
  04ba71c  bl 0xfcbe8
  04ba720  nop
  04ba724  lis 3, 76
  04ba728  li 4, 3
  04ba72c  addi 3, 3, -24396
  04ba730  lfs 2, 32(3)
  04ba734  fmuls 1, 1, 2
  04ba738  stfs 1, 412(30)
  04ba73c  lbz 3, 83(31)
  04ba740  stb 4, 32(31)
  04ba744  cmpwi 3, 3
  04ba748  bt 2, 0x4bb3b4
  04ba74c  lis 3, 76
  04ba750  lis 4, 114
  04ba754  addi 3, 3, -24396
  04ba758  li 5, 0
  04ba75c  lfs 1, 36(3)
  04ba760  lfs 2, -3056(4)
  04ba764  ori 3, 31, 0
  04ba768  fmuls 1, 2, 1
  04ba76c  li 4, 3
  04ba770  fctiwz 1, 1
  04ba774  stfd 1, 384(1)
  04ba778  lwz 6, 388(1)
  04ba77c  extsw 6, 6
  04ba780  bl 0xfddc0
  04ba784  nop
  04ba788  b 0x4bb3b4
  04ba78c  bf 6, 0x4bb3b4
  04ba790  lwz 3, 392(30)
  04ba794  cmpwi 3, 0
  04ba798  bt 2, 0x4bb3b4
  04ba79c  li 3, 7
  04ba7a0  lbz 4, 83(31)
  04ba7a4  cmpwi 4, 0
  04ba7a8  stb 3, 32(31)
  04ba7ac  bt 2, 0x4ba7c8
  04ba7b0  ori 3, 31, 0
  04ba7b4  li 4, 0
  04ba7b8  li 5, 0
  04ba7bc  li 6, 5
  04ba7c0  bl 0xfddc0
  04ba7c4  nop
  04ba7c8  lwz 4, 388(30)
  04ba7cc  lis 3, 165
  04ba7d0  lfs 1, 16(31)
  04ba7d4  slwi 4, 4, 2
  04ba7d8  addic 3, 3, 7136
  04ba7dc  extsw 4, 4
  04ba7e0  lis 5, 114
  04ba7e4  lwzx 4, 3, 4
  04ba7e8  lis 3, 143
  04ba7ec  lfs 2, 16(4)
  04ba7f0  fsubs 2, 2, 1
  04ba7f4  lis 6, 114
  04ba7f8  li 7, 0
  04ba7fc  stfs 2, 64(30)
  04ba800  lfs 1, 20(4)
  04ba804  lfs 3, 20(31)
  04ba808  fsubs 3, 1, 3
  04ba80c  fmuls 1, 3, 3
  04ba810  stfs 3, 68(30)
  04ba814  lfs 4, 24(4)
  04ba818  lfs 5, 24(31)
  04ba81c  fsubs 4, 4, 5
  04ba820  fmadds 1, 2, 2, 1
  04ba824  stfs 4, 72(30)
  04ba828  fsqrts 5, 1
  04ba82c  lfs 1, 28(4)
  04ba830  stfs 1, 76(30)
  04ba834  lfs 1, 18420(3)
  04ba838  lfs 4, -3052(5)
  04ba83c  lis 3, 76
  04ba840  addi 3, 3, -24396
  04ba844  lis 5, 143
  04ba848  addic 4, 4, 16
  04ba84c  fmuls 1, 1, 4
  04ba850  lfs 4, 12(3)
  04ba854  addic 3, 31, 16
  04ba858  fdivs 6, 1, 5
  04ba85c  fsub 7, 4, 5
  04ba860  fsub 8, 4, 5
  04ba864  fsub 9, 5, 4
  04ba868  fsub 5, 5, 4
  04ba86c  fmuls 2, 2, 6
  04ba870  fmuls 3, 3, 6
  04ba874  fsel 6, 7, 4, 2
  04ba878  fsel 4, 8, 4, 3
  04ba87c  fsel 2, 9, 6, 2
  04ba880  fsel 3, 5, 4, 3
  04ba884  stfs 2, 64(30)
  04ba888  stfs 3, 68(30)
  04ba88c  lfs 2, 18424(5)
  04ba890  lfs 3, -3048(6)
  04ba894  fmuls 2, 2, 3
  04ba898  fneg 2, 2
  04ba89c  bl 0x108180
  04ba8a0  nop
  04ba8a4  stfs 1, 72(30)
  04ba8a8  b 0x4bb3b4
  04ba8ac  lfs 3, 20(31)
  04ba8b0  lfs 4, 20(3)
  04ba8b4  lfs 1, 16(31)
  04ba8b8  fsubs 5, 3, 4
  04ba8bc  lfs 2, 16(3)
  04ba8c0  fsubs 6, 1, 2
  04ba8c4  lis 3, 143
  04ba8c8  fmuls 5, 5, 5
  04ba8cc  fmadds 5, 6, 6, 5
  04ba8d0  lfs 6, 18412(3)
  04ba8d4  fsqrts 5, 5
  04ba8d8  fcmpu 0, 5, 6
  04ba8dc  cror 6, 1, 2
  04ba8e0  bt 6, 0x4ba940
  04ba8e4  li 3, 4
  04ba8e8  lbz 4, 83(31)
  04ba8ec  cmpwi 4, 6
  04ba8f0  stb 3, 32(31)
  04ba8f4  bt 2, 0x4bac14
  04ba8f8  lis 3, 76
  04ba8fc  lis 4, 114
  04ba900  addi 3, 3, -24396
  04ba904  lis 5, 143
  04ba908  lfs 1, 40(3)
  04ba90c  lfs 2, -3056(4)
  04ba910  ori 3, 31, 0
  04ba914  lwz 5, 18428(5)
  04ba918  li 4, 6
  04ba91c  fmuls 1, 2, 1
  04ba920  extsw 5, 5
  04ba924  fctiwz 1, 1
  04ba928  stfd 1, 384(1)
  04ba92c  lwz 6, 388(1)
  04ba930  extsw 6, 6
  04ba934  bl 0xfddc0
  04ba938  nop
  04ba93c  b 0x4bac14
  04ba940  fsubs 1, 2, 1
  04ba944  fsubs 2, 4, 3
  04ba948  lis 3, 76
  04ba94c  addi 3, 3, -24396
  04ba950  lis 4, 115
  04ba954  addic 4, 4, 22784
  04ba958  fabs 4, 1
  04ba95c  fabs 5, 2
  04ba960  stfs 1, 232(1)
  04ba964  stfs 2, 236(1)
  04ba968  fsubs 1, 4, 5
  04ba96c  stfs 1, 240(1)
  04ba970  lwz 5, 232(1)
  04ba974  lfs 3, 12(3)
  04ba978  lfs 1, 232(1)
  04ba97c  lwz 3, 236(1)
  04ba980  lfs 2, 236(1)
  04ba984  lwz 6, 240(1)
  04ba988  rlwinm 3, 3, 3, 29, 29
  04ba98c  fabs 6, 2
  04ba990  lfs 2, 240(1)
  04ba994  fabs 1, 1
  04ba998  rlwimi 3, 6, 2, 30, 30
  04ba99c  fsub 7, 2, 3
  04ba9a0  rlwimi 3, 5, 4, 28, 28
  04ba9a4  fsub 8, 2, 3
  04ba9a8  ori 5, 4, 0
  04ba9ac  rlwimi 5, 3, 2, 26, 28
  04ba9b0  slwi 3, 3, 2
  04ba9b4  clrldi 5, 5, 32
  04ba9b8  fsel 5, 7, 1, 5
  04ba9bc  lfsx 1, 4, 3
  04ba9c0  lfs 2, 4(5)
  04ba9c4  fsel 4, 8, 6, 4
  04ba9c8  fcmpu 0, 5, 3
  04ba9cc  bt 1, 0x4ba9d4
  04ba9d0  b 0x4baaf4
  04ba9d4  fsubs 6, 4, 5
  04ba9d8  fadds 4, 4, 5
  04ba9dc  addic 3, 1, 16
  04ba9e0  li 7, 2
  04ba9e4  addic 4, 3, 304
  04ba9e8  addic 5, 3, 320
  04ba9ec  mtctr 7
  04ba9f0  fdivs 4, 6, 4
  04ba9f4  fmuls 5, 4, 4
  04ba9f8  stfs 4, 332(1)
  04ba9fc  stfs 4, 324(1)
  04baa00  stfs 4, 328(1)
  04baa04  stfs 4, 320(1)
  04baa08  lfs 7, 332(1)
  04baa0c  lfs 8, 324(1)
  04baa10  lfs 9, 328(1)
  04baa14  fmuls 6, 5, 5
  04baa18  fmuls 8, 8, 5
  04baa1c  fmuls 7, 7, 6
  04baa20  fmuls 4, 6, 6
  04baa24  fmuls 6, 9, 6
  04baa28  stfs 8, 324(1)
  04baa2c  fmuls 5, 7, 5
  04baa30  stfs 6, 328(1)
  04baa34  stfs 5, 332(1)
  04baa38  lfs 5, 304(3)
  04baa3c  fmuls 5, 5, 4
  04baa40  stfs 5, 320(3)
  04baa44  lfs 5, 4(4)
  04baa48  addic 3, 3, 8
  04baa4c  addic 4, 4, 8
  04baa50  fmuls 5, 5, 4
  04baa54  stfs 5, 4(5)
  04baa58  addic 5, 5, 8
  04baa5c  bdnz 0x4baa38
  04baa60  li 5, 4
  04baa64  ori 3, 1, 0
  04baa68  mtctr 5
  04baa6c  lis 4, 115
  04baa70  addic 5, 3, 320
  04baa74  addic 4, 4, 22752
  04baa78  ori 6, 5, 0
  04baa7c  lfs 4, 320(3)
  04baa80  lfs 5, 0(4)
  04baa84  fmuls 4, 4, 5
  04baa88  lfs 5, 4(4)
  04baa8c  addic 4, 4, 8
  04baa90  stfs 4, 320(3)
  04baa94  lfs 4, 4(5)
  04baa98  addic 3, 3, 8
  04baa9c  fmuls 4, 4, 5
  04baaa0  stfs 4, 4(5)
  04baaa4  addic 5, 5, 8
  04baaa8  bdnz 0x4baa7c
  04baaac  ori 3, 1, 0
  04baab0  mtctr 7
  04baab4  lfs 4, 320(3)
  04baab8  fadds 3, 3, 4
  04baabc  lfs 4, 4(6)
  04baac0  addic 3, 3, 16
  04baac4  lfs 5, 8(6)
  04baac8  lfs 6, 12(6)
  04baacc  addic 6, 6, 16
  04baad0  fadds 3, 3, 4
  04baad4  fadds 3, 3, 5
  04baad8  fadds 3, 3, 6
  04baadc  bdnz 0x4baab4
  04baae0  lis 3, 76
  04baae4  addi 3, 3, -24396
  04baae8  lfs 4, 16(3)
  04baaec  fadds 3, 3, 4
  04baaf0  fmadds 3, 3, 1, 2
  04baaf4  fmr 1, 3
  04baaf8  lfs 2, 412(30)
  04baafc  bl 0x502578
  04bab00  nop
  04bab04  lis 3, 76
  04bab08  lis 4, 114
  04bab0c  addi 29, 3, -24396
  04bab10  lis 3, 114
  04bab14  addic 5, 30, 416
  04bab18  lfs 2, 20(29)
  04bab1c  lfs 3, -3048(3)
  04bab20  lfs 4, 24(29)
  04bab24  fmuls 2, 3, 2
  04bab28  lfs 5, -3052(4)
  04bab2c  addic 3, 31, 72
  04bab30  fmuls 4, 5, 4
  04bab34  fmr 3, 2
  04bab38  bl 0x10a2e0
  04bab3c  nop
  04bab40  lfs 1, 44(29)
  04bab44  lfs 2, 72(31)
  04bab48  lfs 3, 48(29)
  04bab4c  fadds 1, 2, 1
  04bab50  lfs 4, 52(29)
  04bab54  fsubs 5, 3, 2
  04bab58  li 3, 0
  04bab5c  addic 4, 30, 208
  04bab60  addic 5, 1, 144
  04bab64  addic 6, 1, 160
  04bab68  fsubs 3, 3, 1
  04bab6c  fsub 7, 2, 5
  04bab70  fsubs 6, 4, 1
  04bab74  fsubs 4, 4, 2
  04bab78  fsub 8, 1, 3
  04bab7c  fsel 2, 7, 5, 2
  04bab80  fsel 1, 8, 3, 1
  04bab84  fsub 5, 4, 2
  04bab88  lfs 3, 56(29)
  04bab8c  fsub 7, 6, 1
  04bab90  fsel 2, 5, 4, 2
  04bab94  lfs 4, 60(29)
  04bab98  lfs 5, 64(29)
  04bab9c  lfs 8, 68(29)
  04baba0  fsel 1, 7, 6, 1
  04baba4  fmuls 6, 2, 2
  04baba8  fmuls 7, 1, 1
  04babac  fmuls 9, 6, 2
  04babb0  fmuls 10, 7, 1
  04babb4  fmuls 11, 6, 9
  04babb8  fmadds 2, 9, 3, 2
  04babbc  lfs 9, 72(29)
  04babc0  stw 3, 152(1)
  04babc4  ori 3, 31, 0
  04babc8  fmuls 12, 7, 10
  04babcc  fmadds 1, 10, 3, 1
  04babd0  fmuls 3, 6, 11
  04babd4  fmadds 2, 11, 4, 2
  04babd8  fmuls 10, 7, 12
  04babdc  fmadds 1, 12, 4, 1
  04babe0  fmuls 4, 6, 3
  04babe4  fmadds 2, 3, 5, 2
  04babe8  fmuls 3, 7, 10
  04babec  fmadds 1, 10, 5, 1
  04babf0  fmadds 2, 4, 8, 2
  04babf4  fmadds 3, 3, 8, 1
  04babf8  fmr 1, 31
  04babfc  fmuls 2, 2, 9
  04bac00  fmuls 3, 3, 9
  04bac04  stfs 2, 148(1)
  04bac08  stfs 3, 144(1)
  04bac0c  bl 0x101058
  04bac10  nop
  04bac14  lwz 3, 356(30)
  04bac18  cmpwi 3, 2
  04bac1c  bf 2, 0x4bb3b4
  04bac20  li 3, 5
  04bac24  stb 3, 32(31)
  04bac28  b 0x4bb3b4
  04bac2c  lfs 1, 16(3)
  04bac30  lfs 2, 16(31)
  04bac34  lfs 3, 20(3)
  04bac38  lfs 4, 20(31)
  04bac3c  fsubs 1, 1, 2
  04bac40  lis 3, 76
  04bac44  fsubs 2, 3, 4
  04bac48  addi 3, 3, -24396
  04bac4c  lis 4, 115
  04bac50  addic 4, 4, 22784
  04bac54  fabs 3, 1
  04bac58  fabs 5, 2
  04bac5c  stfs 1, 220(1)
  04bac60  stfs 2, 224(1)
  04bac64  fsubs 1, 3, 5
  04bac68  stfs 1, 228(1)
  04bac6c  lwz 5, 220(1)
  04bac70  lfs 4, 12(3)
  04bac74  lfs 1, 220(1)
  04bac78  lwz 3, 224(1)
  04bac7c  lfs 2, 224(1)
  04bac80  fabs 1, 1
  04bac84  lwz 6, 228(1)
  04bac88  rlwinm 3, 3, 3, 29, 29
  04bac8c  fabs 6, 2
  04bac90  lfs 2, 228(1)
  04bac94  rlwimi 3, 6, 2, 30, 30
  04bac98  fsub 7, 2, 4
  04bac9c  rlwimi 3, 5, 4, 28, 28
  04baca0  fsub 8, 2, 4
  04baca4  ori 5, 4, 0
  04baca8  rlwimi 5, 3, 2, 26, 28
  04bacac  slwi 3, 3, 2
  04bacb0  clrldi 5, 5, 32
  04bacb4  fsel 5, 7, 1, 5
  04bacb8  lfsx 1, 4, 3
  04bacbc  lfs 2, 4(5)
  04bacc0  fsel 3, 8, 6, 3
  04bacc4  fcmpu 0, 5, 4
  04bacc8  bt 1, 0x4bacd0
  04baccc  b 0x4badf0
  04bacd0  fsubs 6, 3, 5
  04bacd4  fadds 3, 3, 5
  04bacd8  addic 3, 1, 16
  04bacdc  li 6, 2
  04bace0  addic 5, 3, 288
  04bace4  addic 4, 3, 272
  04bace8  mtctr 6
  04bacec  fdivs 3, 6, 3
  04bacf0  fmuls 5, 3, 3
  04bacf4  stfs 3, 300(1)
  04bacf8  stfs 3, 292(1)
  04bacfc  stfs 3, 296(1)
  04bad00  stfs 3, 288(1)
  04bad04  lfs 7, 300(1)
  04bad08  lfs 8, 292(1)
  04bad0c  lfs 9, 296(1)
  04bad10  fmuls 6, 5, 5
  04bad14  fmuls 8, 8, 5
  04bad18  fmuls 7, 7, 6
  04bad1c  fmuls 3, 6, 6
  04bad20  fmuls 6, 9, 6
  04bad24  stfs 8, 292(1)
  04bad28  fmuls 5, 7, 5
  04bad2c  stfs 6, 296(1)
  04bad30  stfs 5, 300(1)
  04bad34  lfs 5, 272(3)
  04bad38  fmuls 5, 5, 3
  04bad3c  stfs 5, 288(3)
  04bad40  lfs 5, 4(4)
  04bad44  addic 4, 4, 8
  04bad48  fmuls 5, 5, 3
  04bad4c  addic 3, 3, 8
  04bad50  stfs 5, 4(5)
  04bad54  addic 5, 5, 8
  04bad58  bdnz 0x4bad34
  04bad5c  li 5, 4
  04bad60  ori 3, 1, 0
  04bad64  mtctr 5
  04bad68  lis 4, 115
  04bad6c  addic 5, 3, 288
  04bad70  addic 4, 4, 22752
  04bad74  ori 7, 5, 0
  04bad78  lfs 3, 288(3)
  04bad7c  lfs 5, 0(4)
  04bad80  fmuls 3, 3, 5
  04bad84  lfs 5, 4(4)
  04bad88  addic 4, 4, 8
  04bad8c  stfs 3, 288(3)
  04bad90  lfs 3, 4(5)
  04bad94  addic 3, 3, 8
  04bad98  fmuls 3, 3, 5
  04bad9c  stfs 3, 4(5)
  04bada0  addic 5, 5, 8
  04bada4  bdnz 0x4bad78
  04bada8  ori 3, 1, 0
  04badac  mtctr 6
  04badb0  lfs 3, 288(3)
  04badb4  fadds 3, 4, 3
  04badb8  addic 3, 3, 16
  04badbc  lfs 4, 4(7)
  04badc0  lfs 5, 8(7)
  04badc4  lfs 6, 12(7)
  04badc8  addic 7, 7, 16
  04badcc  fadds 3, 3, 4
  04badd0  fadds 4, 3, 5
  04badd4  fadds 4, 4, 6
  04badd8  bdnz 0x4badb0
  04baddc  lis 3, 76
  04bade0  addi 3, 3, -24396
  04bade4  lfs 3, 16(3)
  04bade8  fadds 4, 4, 3
  04badec  fmadds 4, 4, 1, 2
  04badf0  lis 3, 76
  04badf4  lis 4, 114
  04badf8  fmr 1, 4
  04badfc  addi 29, 3, -24396
  04bae00  lis 3, 114
  04bae04  addic 5, 30, 416
  04bae08  lfs 3, 20(29)
  04bae0c  lfs 5, 24(29)
  04bae10  lfs 2, -3048(4)
  04bae14  lfs 6, -3052(3)
  04bae18  fmuls 2, 2, 3
  04bae1c  addic 3, 31, 72
  04bae20  fmuls 4, 6, 5
  04bae24  fmr 3, 2
  04bae28  bl 0x10a2e0
  04bae2c  nop
  04bae30  ori 3, 31, 0
  04bae34  bl 0xefe40
  04bae38  nop
  04bae3c  fmr 4, 1
  04bae40  lfs 1, 76(29)
  04bae44  lbz 30, 112(31)
  04bae48  lbz 3, 83(31)
  04bae4c  fcmpu 0, 4, 1
  04bae50  bt 0, 0x4baea4
  04bae54  lis 4, 76
  04bae58  addi 4, 4, -24396
  04bae5c  lfs 1, 80(4)
  04bae60  fcmpu 0, 4, 1
  04bae64  bt 1, 0x4baea4
  04bae68  lis 3, 76
  04bae6c  li 5, 0
  04bae70  fmr 2, 31
  04bae74  addi 7, 3, -24396
  04bae78  fmr 3, 31
  04bae7c  ori 3, 31, 0
  04bae80  li 4, 1
  04bae84  std 5, 112(1)
  04bae88  li 6, 1
  04bae8c  li 9, 0
  04bae90  lfs 1, 84(7)
  04bae94  li 10, 1
  04bae98  bl 0x1059f0
  04bae9c  nop
  04baea0  b 0x4bb3b4
  04baea4  lis 4, 76
  04baea8  addi 4, 4, -24396
  04baeac  lfs 1, 88(4)
  04baeb0  fcmpu 0, 4, 1
  04baeb4  bt 0, 0x4baf08
  04baeb8  lis 4, 76
  04baebc  addi 4, 4, -24396
  04baec0  lfs 1, 92(4)
  04baec4  fcmpu 0, 4, 1
  04baec8  bt 1, 0x4baf08
  04baecc  lis 4, 76
  04baed0  fmr 2, 31
  04baed4  li 7, 0
  04baed8  fmr 3, 31
  04baedc  addi 5, 4, -24396
  04baee0  ori 3, 31, 0
  04baee4  li 4, 0
  04baee8  li 9, 0
  04baeec  li 6, 1
  04baef0  lfs 1, 84(5)
  04baef4  li 10, 1
  04baef8  std 7, 112(1)
  04baefc  bl 0x1059f0
  04baf00  nop
  04baf04  b 0x4bb3b4
  04baf08  rlwinm 4, 30, 0, 30, 30
  04baf0c  cmpwi 4, 0
  04baf10  bt 2, 0x4bb3b4
  04baf14  li 4, 3
  04baf18  cmpwi 3, 3
  04baf1c  stb 4, 32(31)
  04baf20  bt 2, 0x4bb3b4
  04baf24  lis 3, 76
  04baf28  lis 4, 114
  04baf2c  addi 3, 3, -24396
  04baf30  li 5, 0
  04baf34  lfs 1, 36(3)
  04baf38  lfs 2, -3056(4)
  04baf3c  ori 3, 31, 0
  04baf40  fmuls 1, 2, 1
  04baf44  li 4, 3
  04baf48  fctiwz 1, 1
  04baf4c  stfd 1, 384(1)
  04baf50  lwz 6, 388(1)
  04baf54  extsw 6, 6
  04baf58  bl 0xfddc0
  04baf5c  nop
  04baf60  b 0x4bb3b4
  04baf64  lfs 3, 20(31)
  04baf68  lfs 4, 372(30)
  04baf6c  lfs 1, 16(31)
  04baf70  fsubs 5, 3, 4
  04baf74  lfs 2, 368(30)
  04baf78  fsubs 6, 1, 2
  04baf7c  fmuls 5, 5, 5
  04baf80  fmadds 5, 6, 6, 5
  04baf84  fsqrts 5, 5
  04baf88  fcmpu 0, 5, 31
  04baf8c  cror 6, 1, 2
  04baf90  bt 6, 0x4bafe8
  04baf94  li 3, 2
  04baf98  lbz 4, 83(31)
  04baf9c  cmpwi 4, 1
  04bafa0  stb 3, 32(31)
  04bafa4  bt 2, 0x4bb3b4
  04bafa8  lis 3, 76
  04bafac  lis 4, 114
  04bafb0  addi 3, 3, -24396
  04bafb4  li 5, 0
  04bafb8  lfs 1, 36(3)
  04bafbc  lfs 2, -3056(4)
  04bafc0  ori 3, 31, 0
  04bafc4  li 4, 1
  04bafc8  fmuls 1, 2, 1
  04bafcc  fctiwz 1, 1
  04bafd0  stfd 1, 384(1)
  04bafd4  lwz 6, 388(1)
  04bafd8  extsw 6, 6
  04bafdc  bl 0xfddc0
  04bafe0  nop
  04bafe4  b 0x4bb3b4
  04bafe8  fsubs 1, 2, 1
  04bafec  fsubs 2, 4, 3
  04baff0  lis 3, 76
  04baff4  addi 3, 3, -24396
  04baff8  lis 4, 115
  04baffc  addic 4, 4, 22784
  04bb000  fabs 4, 1
  04bb004  fabs 5, 2
  04bb008  stfs 1, 208(1)
  04bb00c  stfs 2, 212(1)
  04bb010  fsubs 1, 4, 5
  04bb014  stfs 1, 216(1)
  04bb018  lwz 5, 208(1)
  04bb01c  lfs 3, 12(3)
  04bb020  lfs 1, 208(1)
  04bb024  lwz 3, 212(1)
  04bb028  lfs 2, 212(1)
  04bb02c  lwz 6, 216(1)
  04bb030  rlwinm 3, 3, 3, 29, 29
  04bb034  fabs 6, 2
  04bb038  lfs 2, 216(1)
  04bb03c  fabs 1, 1
  04bb040  rlwimi 3, 6, 2, 30, 30
  04bb044  fsub 7, 2, 3
  04bb048  rlwimi 3, 5, 4, 28, 28
  04bb04c  fsub 8, 2, 3
  04bb050  ori 5, 4, 0
  04bb054  rlwimi 5, 3, 2, 26, 28
  04bb058  slwi 3, 3, 2
  04bb05c  clrldi 5, 5, 32
  04bb060  fsel 5, 7, 1, 5
  04bb064  lfsx 1, 4, 3
  04bb068  lfs 2, 4(5)
  04bb06c  fsel 4, 8, 6, 4
  04bb070  fcmpu 0, 5, 3
  04bb074  bt 1, 0x4bb07c
  04bb078  b 0x4bb19c
  04bb07c  fsubs 6, 4, 5
  04bb080  fadds 4, 4, 5
  04bb084  addic 3, 1, 16
  04bb088  li 6, 2
  04bb08c  addic 4, 3, 240
  04bb090  addic 5, 3, 256
  04bb094  mtctr 6
  04bb098  fdivs 4, 6, 4
  04bb09c  fmuls 5, 4, 4
  04bb0a0  stfs 4, 268(1)
  04bb0a4  stfs 4, 260(1)
  04bb0a8  stfs 4, 264(1)
  04bb0ac  stfs 4, 256(1)
  04bb0b0  lfs 7, 268(1)
  04bb0b4  lfs 8, 260(1)
  04bb0b8  lfs 9, 264(1)
  04bb0bc  fmuls 6, 5, 5
  04bb0c0  fmuls 8, 8, 5
  04bb0c4  fmuls 7, 7, 6
  04bb0c8  fmuls 4, 6, 6
  04bb0cc  fmuls 6, 9, 6
  04bb0d0  stfs 8, 260(1)
  04bb0d4  fmuls 5, 7, 5
  04bb0d8  stfs 6, 264(1)
  04bb0dc  stfs 5, 268(1)
  04bb0e0  lfs 5, 240(3)
  04bb0e4  fmuls 5, 5, 4
  04bb0e8  stfs 5, 256(3)
  04bb0ec  lfs 5, 4(4)
  04bb0f0  addic 3, 3, 8
  04bb0f4  addic 4, 4, 8
  04bb0f8  fmuls 5, 5, 4
  04bb0fc  stfs 5, 4(5)
  04bb100  addic 5, 5, 8
  04bb104  bdnz 0x4bb0e0
  04bb108  li 5, 4
  04bb10c  ori 3, 1, 0
  04bb110  mtctr 5
  04bb114  lis 4, 115
  04bb118  addic 5, 3, 256
  04bb11c  addic 4, 4, 22752
  04bb120  ori 7, 5, 0
  04bb124  lfs 4, 256(3)
  04bb128  lfs 5, 0(4)
  04bb12c  fmuls 4, 4, 5
  04bb130  lfs 5, 4(4)
  04bb134  addic 4, 4, 8
  04bb138  stfs 4, 256(3)
  04bb13c  lfs 4, 4(5)
  04bb140  addic 3, 3, 8
  04bb144  fmuls 4, 4, 5
  04bb148  stfs 4, 4(5)
  04bb14c  addic 5, 5, 8
  04bb150  bdnz 0x4bb124
  04bb154  ori 3, 1, 0
  04bb158  mtctr 6
  04bb15c  lfs 4, 256(3)
  04bb160  fadds 3, 3, 4
  04bb164  lfs 4, 4(7)
  04bb168  addic 3, 3, 16
  04bb16c  lfs 5, 8(7)
  04bb170  lfs 6, 12(7)
  04bb174  addic 7, 7, 16
  04bb178  fadds 3, 3, 4
  04bb17c  fadds 3, 3, 5
  04bb180  fadds 3, 3, 6
  04bb184  bdnz 0x4bb15c
  04bb188  lis 3, 76
  04bb18c  addi 3, 3, -24396
  04bb190  lfs 4, 16(3)
  04bb194  fadds 3, 3, 4
  04bb198  fmadds 3, 3, 1, 2
  04bb19c  lis 3, 76
  04bb1a0  fmr 1, 3
  04bb1a4  lis 4, 114
  04bb1a8  addi 29, 3, -24396
  04bb1ac  lis 6, 114
  04bb1b0  addic 3, 31, 72
  04bb1b4  addic 5, 30, 416
  04bb1b8  lfs 4, 20(29)
  04bb1bc  lfs 2, -3048(4)
  04bb1c0  lfs 6, 24(29)
  04bb1c4  fmuls 2, 2, 4
  04bb1c8  lfs 5, -3052(6)
  04bb1cc  fmuls 4, 5, 6
  04bb1d0  fmr 3, 2
  04bb1d4  bl 0x10a2e0
  04bb1d8  nop
  04bb1dc  lfs 1, 44(29)
  04bb1e0  lfs 2, 72(31)
  04bb1e4  lfs 3, 48(29)
  04bb1e8  fadds 1, 2, 1
  04bb1ec  fsubs 5, 3, 2
  04bb1f0  lfs 4, 52(29)
  04bb1f4  li 3, 0
  04bb1f8  addic 4, 30, 208
  04bb1fc  addic 5, 1, 176
  04bb200  addic 6, 1, 192
  04bb204  fsubs 3, 3, 1
  04bb208  fsub 7, 2, 5
  04bb20c  fsubs 6, 4, 1
  04bb210  fsubs 4, 4, 2
  04bb214  fsub 8, 1, 3
  04bb218  fsel 2, 7, 5, 2
  04bb21c  lfs 5, 56(29)
  04bb220  fsel 1, 8, 3, 1
  04bb224  fsub 3, 4, 2
  04bb228  fsub 8, 6, 1
  04bb22c  fsel 2, 3, 4, 2
  04bb230  lfs 3, 60(29)
  04bb234  lfs 4, 64(29)
  04bb238  lfs 9, 68(29)
  04bb23c  fsel 1, 8, 6, 1
  04bb240  fmuls 6, 2, 2
  04bb244  fmuls 7, 1, 1
  04bb248  fmuls 8, 6, 2
  04bb24c  fmuls 10, 7, 1
  04bb250  fmuls 11, 6, 8
  04bb254  fmadds 2, 8, 5, 2
  04bb258  lfs 8, 72(29)
  04bb25c  stw 3, 184(1)
  04bb260  ori 3, 31, 0
  04bb264  fmuls 12, 7, 10
  04bb268  fmadds 1, 10, 5, 1
  04bb26c  fmuls 5, 6, 11
  04bb270  fmadds 2, 11, 3, 2
  04bb274  fmuls 10, 7, 12
  04bb278  fmadds 1, 12, 3, 1
  04bb27c  fmuls 3, 6, 5
  04bb280  fmadds 2, 5, 4, 2
  04bb284  fmuls 5, 7, 10
  04bb288  fmadds 1, 10, 4, 1
  04bb28c  fmadds 2, 3, 9, 2
  04bb290  fmadds 3, 5, 9, 1
  04bb294  fmr 1, 31
  04bb298  fmuls 2, 2, 8
  04bb29c  fmuls 3, 3, 8
  04bb2a0  stfs 2, 180(1)
  04bb2a4  stfs 3, 176(1)
  04bb2a8  bl 0x101058
  04bb2ac  nop
  04bb2b0  b 0x4bb3b4
  04bb2b4  ori 3, 31, 0
  04bb2b8  addic 4, 30, 112
  04bb2bc  bl 0x10b030
  04bb2c0  nop
  04bb2c4  rlwinm 4, 3, 0, 25, 25
  04bb2c8  cmpwi 4, 0
  04bb2cc  bt 2, 0x4bb324
  04bb2d0  li 3, 2
  04bb2d4  lbz 4, 83(31)
  04bb2d8  cmpwi 4, 1
  04bb2dc  stb 3, 32(31)
  04bb2e0  bt 2, 0x4bb3b4
  04bb2e4  lis 3, 76
  04bb2e8  lis 4, 114
  04bb2ec  addi 3, 3, -24396
  04bb2f0  li 5, 0
  04bb2f4  lfs 1, 36(3)
  04bb2f8  lfs 2, -3056(4)
  04bb2fc  ori 3, 31, 0
  04bb300  fmuls 1, 2, 1
  04bb304  li 4, 1
  04bb308  fctiwz 1, 1
  04bb30c  stfd 1, 384(1)
  04bb310  lwz 6, 388(1)
  04bb314  extsw 6, 6
  04bb318  bl 0xfddc0
  04bb31c  nop
  04bb320  b 0x4bb3b4
  04bb324  li 4, 288
  04bb328  and 3, 3, 4
  04bb32c  cmpwi 3, 0
  04bb330  bt 2, 0x4bb344
  04bb334  ori 3, 31, 0
  04bb338  bl 0xefb38
  04bb33c  nop
  04bb340  b 0x4bb3b4
  04bb344  lhz 3, 174(30)
  04bb348  cmpwi 3, 2
  04bb34c  bf 2, 0x4bb3b4
  04bb350  lis 3, 143
  04bb354  lfs 1, 18432(3)
  04bb358  stfs 1, 88(31)
  04bb35c  b 0x4bb3b4
  04bb360  addic 4, 30, 112
  04bb364  ori 3, 31, 0
  04bb368  bl 0x10b030
  04bb36c  nop
  04bb370  li 4, 352
  04bb374  and 3, 3, 4
  04bb378  cmpwi 3, 0
  04bb37c  bt 2, 0x4bb3b4
  04bb380  lis 4, 76
  04bb384  ori 3, 31, 0
  04bb388  addi 5, 4, -24396
  04bb38c  li 6, -1
  04bb390  addic 4, 31, 16
  04bb394  lfs 1, 28(5)
  04bb398  lfs 2, 96(5)
  04bb39c  bl 0x10fb28
  04bb3a0  nop
  04bb3a4  ori 3, 31, 0
  04bb3a8  bl 0xefb38
  04bb3ac  nop
  04bb3b0  b 0x4bb3b4
  04bb3b4  ld 0, 448(1)
  04bb3b8  mtlr 0
  04bb3bc  lfd 31, 424(1)
  04bb3c0  ld 29, 400(1)
  04bb3c4  ld 30, 408(1)
  04bb3c8  ld 31, 416(1)
  04bb3cc  addi 1, 1, 432
  04bb3d0  blr
