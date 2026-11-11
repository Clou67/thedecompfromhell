# game/update/moby1859.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1859:   # 0x2c9754, 0xf8 bytes
  02c9754  stdu 1, -128(1)
  02c9758  mflr 0
  02c975c  std 0, 144(1)
  02c9760  std 31, 120(1)
  02c9764  ori 31, 3, 0
  02c9768  lis 4, 1
  02c976c  li 5, 0
  02c9770  bl 0x10675c
  02c9774  nop
  02c9778  ori 4, 3, 0
  02c977c  lbz 3, 32(31)
  02c9780  cmpwi 3, 0
  02c9784  bt 1, 0x2c9794
  02c9788  cmpwi 3, -1
  02c978c  bf 1, 0x2c9838
  02c9790  b 0x2c97a8
  02c9794  cmpwi 3, 1
  02c9798  bf 1, 0x2c97b4
  02c979c  cmpwi 3, 2
  02c97a0  bf 1, 0x2c97d4
  02c97a4  b 0x2c9838
  02c97a8  li 3, 1
  02c97ac  stb 3, 32(31)
  02c97b0  b 0x2c9838
  02c97b4  cmpwi 4, 0
  02c97b8  bt 2, 0x2c9838
  02c97bc  lwz 3, 44(4)
  02c97c0  cmpwi 3, 0
  02c97c4  bf 1, 0x2c9838
  02c97c8  li 3, 2
  02c97cc  stb 3, 32(31)
  02c97d0  b 0x2c9838
  02c97d4  li 3, 0
  02c97d8  li 4, 0
  02c97dc  ori 5, 31, 0
  02c97e0  bl 0x15d12c
  02c97e4  nop
  02c97e8  ori 3, 31, 0
  02c97ec  bl 0x11a100
  02c97f0  nop
  02c97f4  ori 3, 31, 0
  02c97f8  li 9, 2
  02c97fc  li 4, 1861
  02c9800  li 5, 1
  02c9804  li 6, 1861
  02c9808  li 7, 1
  02c980c  li 8, 11
  02c9810  bl 0x11aa78
  02c9814  nop
  02c9818  ori 3, 31, 0
  02c981c  li 4, 1860
  02c9820  bl 0x11ad48
  02c9824  nop
  02c9828  ori 3, 31, 0
  02c982c  bl 0xefb38
  02c9830  nop
  02c9834  b 0x2c9838
  02c9838  ld 0, 144(1)
  02c983c  mtlr 0
  02c9840  ld 31, 120(1)
  02c9844  addi 1, 1, 128
  02c9848  blr

M186_002c9860:   # 0x2c9860, 0x104 bytes
  02c9860  stdu 1, -176(1)
  02c9864  mflr 0
  02c9868  std 0, 192(1)
  02c986c  stfd 30, 160(1)
  02c9870  stfd 31, 168(1)
  02c9874  lis 6, 151
  02c9878  lis 7, 45
  02c987c  std 28, 128(1)
  02c9880  addic 6, 6, -25432
  02c9884  std 30, 144(1)
  02c9888  std 29, 136(1)
  02c988c  addi 28, 7, -26544
  02c9890  ori 30, 3, 0
  02c9894  std 31, 152(1)
  02c9898  ori 29, 5, 0
  02c989c  ori 31, 4, 0
  02c98a0  lbz 3, 20(6)
  02c98a4  bl 0x502730
  02c98a8  nop
  02c98ac  lfs 30, 0(28)
  02c98b0  lfs 2, 4(28)
  02c98b4  cmpwi 29, 0
  02c98b8  fmadds 30, 1, 30, 2
  02c98bc  bt 2, 0x2c98d4
  02c98c0  lfs 31, 0(29)
  02c98c4  lfs 1, 4(29)
  02c98c8  lfs 3, 8(29)
  02c98cc  lfs 2, 12(29)
  02c98d0  b 0x2c98e4
  02c98d4  lfs 31, 16(30)
  02c98d8  lfs 1, 20(30)
  02c98dc  lfs 3, 24(30)
  02c98e0  lfs 2, 28(30)
  02c98e4  lis 3, 45
  02c98e8  stfs 31, 112(1)
  02c98ec  ori 5, 31, 0
  02c98f0  addi 4, 3, -26544
  02c98f4  stfs 1, 116(1)
  02c98f8  stfs 2, 124(1)
  02c98fc  addic 3, 1, 112
  02c9900  ori 6, 30, 0
  02c9904  lfs 31, 8(4)
  02c9908  fmadds 1, 30, 31, 3
  02c990c  stfs 1, 120(1)
  02c9910  lfs 1, 12(4)
  02c9914  fmuls 1, 30, 1
  02c9918  bl 0x59e20
  02c991c  nop
  02c9920  cmpwi 3, 0
  02c9924  bt 2, 0x2c993c
  02c9928  lis 4, 161
  02c992c  addic 4, 4, 2368
  02c9930  lfs 1, 56(4)
  02c9934  fnmsubs 1, 30, 31, 1
  02c9938  stfs 1, 56(4)
  02c993c  ld 0, 192(1)
  02c9940  mtlr 0
  02c9944  lfd 30, 160(1)
  02c9948  lfd 31, 168(1)
  02c994c  ld 28, 128(1)
  02c9950  ld 29, 136(1)
  02c9954  ld 30, 144(1)
  02c9958  ld 31, 152(1)
  02c995c  addi 1, 1, 176
  02c9960  blr

M1859_002c9964:   # 0x2c9964, 0x34 bytes
  02c9964  lis 4, 151
  02c9968  lfs 1, 64(3)
  02c996c  addic 4, 4, -25376
  02c9970  stfs 1, 7888(4)
  02c9974  lfs 1, 68(3)
  02c9978  lwz 5, 76(3)
  02c997c  stfs 1, 7892(4)
  02c9980  lfs 1, 72(3)
  02c9984  stw 5, 7944(4)
  02c9988  stfs 1, 7896(4)
  02c998c  lfs 1, 92(3)
  02c9990  stfs 1, 7908(4)
  02c9994  blr

M1859_002c9998:   # 0x2c9998, 0x34 bytes
  02c9998  lis 4, 151
  02c999c  addic 4, 4, -25376
  02c99a0  lfs 1, 7888(4)
  02c99a4  stfs 1, 64(3)
  02c99a8  lfs 1, 7892(4)
  02c99ac  lwz 5, 7944(4)
  02c99b0  stfs 1, 68(3)
  02c99b4  lfs 1, 7896(4)
  02c99b8  stw 5, 76(3)
  02c99bc  stfs 1, 72(3)
  02c99c0  lfs 1, 7908(4)
  02c99c4  stfs 1, 92(3)
  02c99c8  blr

M1859_002c99cc:   # 0x2c99cc, 0x54 bytes
  02c99cc  lis 4, 151
  02c99d0  lfs 1, 80(3)
  02c99d4  addic 4, 4, -25376
  02c99d8  stfs 1, 7968(4)
  02c99dc  lfs 1, 84(3)
  02c99e0  stfs 1, 7972(4)
  02c99e4  lfs 1, 88(3)
  02c99e8  stfs 1, 7976(4)
  02c99ec  lbz 5, 104(3)
  02c99f0  stb 5, 7999(4)
  02c99f4  lfs 1, 68(3)
  02c99f8  stfs 1, 8000(4)
  02c99fc  lfs 1, 0(3)
  02c9a00  stfs 1, 7952(4)
  02c9a04  lfs 1, 4(3)
  02c9a08  stfs 1, 7956(4)
  02c9a0c  lfs 1, 8(3)
  02c9a10  stfs 1, 7960(4)
  02c9a14  lfs 1, 12(3)
  02c9a18  stfs 1, 7964(4)
  02c9a1c  blr

M1859_002c9a20:   # 0x2c9a20, 0x34 bytes
  02c9a20  lis 4, 151
  02c9a24  addic 4, 4, -25376
  02c9a28  lfs 1, 7968(4)
  02c9a2c  stfs 1, 80(3)
  02c9a30  lfs 1, 7972(4)
  02c9a34  stfs 1, 84(3)
  02c9a38  lfs 1, 7976(4)
  02c9a3c  stfs 1, 88(3)
  02c9a40  lbz 5, 7999(4)
  02c9a44  stb 5, 104(3)
  02c9a48  lfs 1, 8000(4)
  02c9a4c  stfs 1, 68(3)
  02c9a50  blr

M1859_002c9a68:   # 0x2c9a68, 0x144 bytes
  02c9a68  stdu 1, -160(1)
  02c9a6c  mflr 0
  02c9a70  std 0, 176(1)
  02c9a74  lfs 1, 0(3)
  02c9a78  lis 5, 45
  02c9a7c  stfs 1, 112(1)
  02c9a80  lfs 2, 4(3)
  02c9a84  addi 8, 5, -26028
  02c9a88  stfs 2, 116(1)
  02c9a8c  lfs 3, 12(3)
  02c9a90  lfs 4, 8(3)
  02c9a94  stfs 3, 124(1)
  02c9a98  stfs 1, 128(1)
  02c9a9c  stfs 2, 132(1)
  02c9aa0  stfs 3, 140(1)
  02c9aa4  lfs 1, 0(8)
  02c9aa8  lfs 2, 4(8)
  02c9aac  fsubs 1, 4, 1
  02c9ab0  addic 3, 1, 128
  02c9ab4  ori 6, 4, 0
  02c9ab8  addic 4, 1, 112
  02c9abc  li 5, 6
  02c9ac0  li 7, 0
  02c9ac4  fsub 3, 1, 2
  02c9ac8  fsel 1, 3, 1, 2
  02c9acc  stfs 1, 120(1)
  02c9ad0  lfs 2, 8(8)
  02c9ad4  fadds 1, 1, 2
  02c9ad8  std 31, 152(1)
  02c9adc  stfs 1, 136(1)
  02c9ae0  bl 0x57820
  02c9ae4  nop
  02c9ae8  cmpwi 3, 0
  02c9aec  bt 2, 0x2c9b8c
  02c9af0  lis 31, 161
  02c9af4  addic 31, 31, 2368
  02c9af8  lwz 3, 24(31)
  02c9afc  cmpwi 3, 0
  02c9b00  bt 2, 0x2c9b28
  02c9b04  lwz 3, 36(3)
  02c9b08  cmpwi 3, 0
  02c9b0c  bt 2, 0x2c9b28
  02c9b10  lhz 3, 70(3)
  02c9b14  extsh 3, 3
  02c9b18  cmpwi 3, 5
  02c9b1c  bf 2, 0x2c9b28
  02c9b20  lfs 1, 40(31)
  02c9b24  b 0x2c9b98
  02c9b28  bl 0x60780
  02c9b2c  nop
  02c9b30  cmpwi 3, 3
  02c9b34  lfs 1, 40(31)
  02c9b38  bt 1, 0x2c9b5c
  02c9b3c  cmpwi 3, 1
  02c9b40  bt 1, 0x2c9b50
  02c9b44  cmpwi 3, -1
  02c9b48  bf 1, 0x2c9b88
  02c9b4c  b 0x2c9b78
  02c9b50  cmpwi 3, 2
  02c9b54  bf 1, 0x2c9b88
  02c9b58  b 0x2c9b78
  02c9b5c  cmpwi 3, 10
  02c9b60  bt 1, 0x2c9b70
  02c9b64  cmpwi 3, 8
  02c9b68  bt 2, 0x2c9b78
  02c9b6c  b 0x2c9b88
  02c9b70  cmpwi 3, 13
  02c9b74  bt 1, 0x2c9b88
  02c9b78  lis 3, 45
  02c9b7c  addi 3, 3, -26028
  02c9b80  lfs 1, 12(3)
  02c9b84  b 0x2c9b98
  02c9b88  b 0x2c9b98
  02c9b8c  lis 3, 45
  02c9b90  addi 3, 3, -26028
  02c9b94  lfs 1, 12(3)
  02c9b98  ld 0, 176(1)
  02c9b9c  mtlr 0
  02c9ba0  ld 31, 152(1)
  02c9ba4  addi 1, 1, 160
  02c9ba8  blr

M186_002c9be0:   # 0x2c9be0, 0x640 bytes
  02c9be0  stdu 1, -352(1)
  02c9be4  mflr 0
  02c9be8  std 0, 368(1)
  02c9bec  stfd 28, 320(1)
  02c9bf0  stfd 29, 328(1)
  02c9bf4  stfd 30, 336(1)
  02c9bf8  stfd 31, 344(1)
  02c9bfc  std 22, 240(1)
  02c9c00  lis 22, 45
  02c9c04  lis 6, 165
  02c9c08  std 26, 272(1)
  02c9c0c  std 25, 264(1)
  02c9c10  addi 22, 22, -25680
  02c9c14  li 26, 1
  02c9c18  std 31, 312(1)
  02c9c1c  li 25, 0
  02c9c20  std 27, 280(1)
  02c9c24  ori 31, 3, 0
  02c9c28  ori 27, 25, 0
  02c9c2c  std 24, 256(1)
  02c9c30  std 20, 224(1)
  02c9c34  lfs 31, 0(22)
  02c9c38  ori 20, 26, 0
  02c9c3c  std 30, 304(1)
  02c9c40  lwz 24, -27836(6)
  02c9c44  std 29, 296(1)
  02c9c48  ori 30, 4, 0
  02c9c4c  ori 29, 5, 0
  02c9c50  std 28, 288(1)
  02c9c54  cmpwi 24, 0
  02c9c58  std 23, 248(1)
  02c9c5c  std 21, 232(1)
  02c9c60  ori 28, 7, 0
  02c9c64  bt 2, 0x2ca18c
  02c9c68  ori 21, 25, 0
  02c9c6c  lwz 3, 36(24)
  02c9c70  cmpwi 3, 0
  02c9c74  bt 2, 0x2ca168
  02c9c78  lhz 3, 70(3)
  02c9c7c  extsh 3, 3
  02c9c80  cmpwi 3, 5
  02c9c84  bf 2, 0x2ca168
  02c9c88  lfs 3, 4(30)
  02c9c8c  lfs 1, 20(24)
  02c9c90  lfs 2, 0(30)
  02c9c94  fsubs 4, 3, 1
  02c9c98  lfs 1, 16(24)
  02c9c9c  lfs 6, 8(30)
  02c9ca0  fsubs 5, 2, 1
  02c9ca4  lfs 7, 24(24)
  02c9ca8  fsubs 6, 6, 7
  02c9cac  fmuls 4, 4, 4
  02c9cb0  fmadds 4, 5, 5, 4
  02c9cb4  fmadds 30, 6, 6, 4
  02c9cb8  lfs 4, 4(22)
  02c9cbc  fsqrts 30, 30
  02c9cc0  fcmpu 0, 30, 4
  02c9cc4  bt 1, 0x2ca168
  02c9cc8  lfs 4, 8(22)
  02c9ccc  fcmpu 0, 30, 4
  02c9cd0  cror 6, 0, 2
  02c9cd4  bt 6, 0x2c9cdc
  02c9cd8  ori 26, 25, 0
  02c9cdc  fsubs 2, 1, 2
  02c9ce0  stfs 1, 112(1)
  02c9ce4  lfs 1, 20(24)
  02c9ce8  fsubs 3, 1, 3
  02c9cec  stfs 1, 116(1)
  02c9cf0  lfs 1, 24(24)
  02c9cf4  lis 23, 115
  02c9cf8  stfs 1, 120(1)
  02c9cfc  lfs 4, 28(24)
  02c9d00  fabs 6, 2
  02c9d04  stfs 4, 124(1)
  02c9d08  lfs 4, 12(22)
  02c9d0c  stfs 2, 140(1)
  02c9d10  fabs 5, 3
  02c9d14  addic 23, 23, 22784
  02c9d18  stfs 3, 144(1)
  02c9d1c  fadds 3, 1, 4
  02c9d20  lfs 1, 8(29)
  02c9d24  fsubs 2, 6, 5
  02c9d28  stfs 2, 148(1)
  02c9d2c  stfs 3, 120(1)
  02c9d30  lwz 3, 140(1)
  02c9d34  lfs 28, 16(22)
  02c9d38  lfs 2, 140(1)
  02c9d3c  lwz 4, 144(1)
  02c9d40  lfs 3, 144(1)
  02c9d44  fabs 2, 2
  02c9d48  lfs 29, 20(22)
  02c9d4c  rlwinm 4, 4, 3, 29, 29
  02c9d50  fabs 4, 3
  02c9d54  lwz 5, 148(1)
  02c9d58  lfs 3, 148(1)
  02c9d5c  rlwimi 4, 5, 2, 30, 30
  02c9d60  fsub 7, 3, 28
  02c9d64  fsub 3, 3, 28
  02c9d68  rlwimi 4, 3, 4, 28, 28
  02c9d6c  ori 3, 23, 0
  02c9d70  rlwimi 3, 4, 2, 26, 28
  02c9d74  slwi 4, 4, 2
  02c9d78  clrldi 3, 3, 32
  02c9d7c  fsel 5, 7, 2, 5
  02c9d80  lfsx 2, 23, 4
  02c9d84  fsel 4, 3, 4, 6
  02c9d88  lfs 3, 4(3)
  02c9d8c  fcmpu 0, 5, 28
  02c9d90  bt 1, 0x2c9d9c
  02c9d94  fmr 2, 28
  02c9d98  b 0x2c9eb4
  02c9d9c  fsubs 6, 4, 5
  02c9da0  fadds 4, 4, 5
  02c9da4  addic 3, 1, 16
  02c9da8  li 7, 2
  02c9dac  addic 5, 3, 184
  02c9db0  addic 4, 3, 168
  02c9db4  mtctr 7
  02c9db8  fdivs 4, 6, 4
  02c9dbc  fmuls 5, 4, 4
  02c9dc0  stfs 4, 196(1)
  02c9dc4  stfs 4, 188(1)
  02c9dc8  stfs 4, 192(1)
  02c9dcc  stfs 4, 184(1)
  02c9dd0  lfs 7, 196(1)
  02c9dd4  lfs 8, 188(1)
  02c9dd8  lfs 9, 192(1)
  02c9ddc  fmuls 6, 5, 5
  02c9de0  fmuls 8, 8, 5
  02c9de4  fmuls 7, 7, 6
  02c9de8  fmuls 4, 6, 6
  02c9dec  fmuls 6, 9, 6
  02c9df0  stfs 8, 188(1)
  02c9df4  fmuls 5, 7, 5
  02c9df8  stfs 6, 192(1)
  02c9dfc  stfs 5, 196(1)
  02c9e00  lfs 5, 168(3)
  02c9e04  fmuls 5, 5, 4
  02c9e08  stfs 5, 184(3)
  02c9e0c  lfs 5, 4(4)
  02c9e10  addic 4, 4, 8
  02c9e14  fmuls 5, 5, 4
  02c9e18  addic 3, 3, 8
  02c9e1c  stfs 5, 4(5)
  02c9e20  addic 5, 5, 8
  02c9e24  bdnz 0x2c9e00
  02c9e28  li 5, 4
  02c9e2c  ori 3, 1, 0
  02c9e30  mtctr 5
  02c9e34  lis 4, 115
  02c9e38  addic 5, 3, 184
  02c9e3c  addic 4, 4, 22752
  02c9e40  ori 6, 5, 0
  02c9e44  lfs 4, 184(3)
  02c9e48  lfs 5, 0(4)
  02c9e4c  fmuls 4, 4, 5
  02c9e50  lfs 5, 4(4)
  02c9e54  addic 4, 4, 8
  02c9e58  stfs 4, 184(3)
  02c9e5c  lfs 4, 4(5)
  02c9e60  addic 3, 3, 8
  02c9e64  fmuls 4, 4, 5
  02c9e68  stfs 4, 4(5)
  02c9e6c  addic 5, 5, 8
  02c9e70  bdnz 0x2c9e44
  02c9e74  ori 3, 1, 0
  02c9e78  fmr 4, 28
  02c9e7c  mtctr 7
  02c9e80  lfs 5, 184(3)
  02c9e84  fadds 4, 4, 5
  02c9e88  lfs 5, 4(6)
  02c9e8c  addic 3, 3, 16
  02c9e90  lfs 6, 8(6)
  02c9e94  lfs 7, 12(6)
  02c9e98  addic 6, 6, 16
  02c9e9c  fadds 4, 4, 5
  02c9ea0  fadds 4, 4, 6
  02c9ea4  fadds 4, 4, 7
  02c9ea8  bdnz 0x2c9e80
  02c9eac  fadds 4, 4, 29
  02c9eb0  fmadds 2, 4, 2, 3
  02c9eb4  bl 0x5026a0
  02c9eb8  nop
  02c9ebc  lfs 2, 120(1)
  02c9ec0  lfs 3, 8(30)
  02c9ec4  fabs 4, 30
  02c9ec8  stfs 30, 128(1)
  02c9ecc  fsubs 2, 2, 3
  02c9ed0  fmr 30, 1
  02c9ed4  fabs 5, 2
  02c9ed8  stfs 2, 132(1)
  02c9edc  lwz 3, 128(1)
  02c9ee0  lfs 3, 128(1)
  02c9ee4  fabs 3, 3
  02c9ee8  fsubs 2, 4, 5
  02c9eec  stfs 2, 136(1)
  02c9ef0  lwz 4, 132(1)
  02c9ef4  lfs 1, 132(1)
  02c9ef8  rlwinm 4, 4, 3, 29, 29
  02c9efc  fabs 6, 1
  02c9f00  lfs 1, 4(29)
  02c9f04  lwz 5, 136(1)
  02c9f08  lfs 2, 136(1)
  02c9f0c  rlwimi 4, 5, 2, 30, 30
  02c9f10  fsub 7, 2, 28
  02c9f14  fsub 8, 2, 28
  02c9f18  rlwimi 4, 3, 4, 28, 28
  02c9f1c  ori 3, 23, 0
  02c9f20  rlwimi 3, 4, 2, 26, 28
  02c9f24  slwi 4, 4, 2
  02c9f28  clrldi 3, 3, 32
  02c9f2c  fsel 5, 7, 3, 5
  02c9f30  lfsx 2, 23, 4
  02c9f34  fsel 4, 8, 6, 4
  02c9f38  lfs 3, 4(3)
  02c9f3c  fcmpu 0, 5, 28
  02c9f40  bt 1, 0x2c9f4c
  02c9f44  fmr 29, 28
  02c9f48  b 0x2ca064
  02c9f4c  fsubs 6, 4, 5
  02c9f50  fadds 4, 4, 5
  02c9f54  addic 3, 1, 16
  02c9f58  li 6, 2
  02c9f5c  addic 5, 3, 152
  02c9f60  addic 4, 3, 136
  02c9f64  mtctr 6
  02c9f68  fdivs 4, 6, 4
  02c9f6c  fmuls 5, 4, 4
  02c9f70  stfs 4, 164(1)
  02c9f74  stfs 4, 156(1)
  02c9f78  stfs 4, 160(1)
  02c9f7c  stfs 4, 152(1)
  02c9f80  lfs 7, 164(1)
  02c9f84  lfs 8, 156(1)
  02c9f88  lfs 9, 160(1)
  02c9f8c  fmuls 6, 5, 5
  02c9f90  fmuls 8, 8, 5
  02c9f94  fmuls 7, 7, 6
  02c9f98  fmuls 4, 6, 6
  02c9f9c  fmuls 6, 9, 6
  02c9fa0  stfs 8, 156(1)
  02c9fa4  fmuls 5, 7, 5
  02c9fa8  stfs 6, 160(1)
  02c9fac  stfs 5, 164(1)
  02c9fb0  lfs 5, 136(3)
  02c9fb4  fmuls 5, 5, 4
  02c9fb8  stfs 5, 152(3)
  02c9fbc  lfs 5, 4(4)
  02c9fc0  addic 4, 4, 8
  02c9fc4  fmuls 5, 5, 4
  02c9fc8  addic 3, 3, 8
  02c9fcc  stfs 5, 4(5)
  02c9fd0  addic 5, 5, 8
  02c9fd4  bdnz 0x2c9fb0
  02c9fd8  li 5, 4
  02c9fdc  ori 3, 1, 0
  02c9fe0  mtctr 5
  02c9fe4  lis 4, 115
  02c9fe8  addic 5, 3, 152
  02c9fec  addic 4, 4, 22752
  02c9ff0  ori 7, 5, 0
  02c9ff4  lfs 4, 152(3)
  02c9ff8  lfs 5, 0(4)
  02c9ffc  fmuls 4, 4, 5
  02ca000  lfs 5, 4(4)
  02ca004  addic 4, 4, 8
  02ca008  stfs 4, 152(3)
  02ca00c  lfs 4, 4(5)
  02ca010  addic 3, 3, 8
  02ca014  fmuls 4, 4, 5
  02ca018  stfs 4, 4(5)
  02ca01c  addic 5, 5, 8
  02ca020  bdnz 0x2c9ff4
  02ca024  ori 3, 1, 0
  02ca028  fmr 4, 28
  02ca02c  mtctr 6
  02ca030  lfs 5, 152(3)
  02ca034  fadds 4, 4, 5
  02ca038  lfs 5, 4(7)
  02ca03c  addic 3, 3, 16
  02ca040  lfs 6, 8(7)
  02ca044  lfs 7, 12(7)
  02ca048  addic 7, 7, 16
  02ca04c  fadds 4, 4, 5
  02ca050  fadds 4, 4, 6
  02ca054  fadds 4, 4, 7
  02ca058  bdnz 0x2ca030
  02ca05c  fadds 29, 4, 29
  02ca060  fmadds 29, 29, 2, 3
  02ca064  fmr 2, 29
  02ca068  bl 0x5026a0
  02ca06c  nop
  02ca070  cmpwi 26, 0
  02ca074  fmr 29, 1
  02ca078  bt 2, 0x2ca0c8
  02ca07c  lfs 1, 24(24)
  02ca080  lfs 2, 24(31)
  02ca084  ori 3, 20, 0
  02ca088  fsubs 1, 1, 2
  02ca08c  lfs 2, 24(22)
  02ca090  fabs 1, 1
  02ca094  fcmpu 0, 1, 2
  02ca098  bt 1, 0x2ca0c4
  02ca09c  ori 3, 30, 0
  02ca0a0  addic 4, 1, 112
  02ca0a4  li 5, 6
  02ca0a8  ori 6, 24, 0
  02ca0ac  li 7, 0
  02ca0b0  bl 0x57820
  02ca0b4  nop
  02ca0b8  cntlzw 3, 3
  02ca0bc  rlwinm 3, 3, 27, 31, 31
  02ca0c0  xori 3, 3, 1
  02ca0c4  b 0x2ca0d4
  02ca0c8  lbz 3, 49(24)
  02ca0cc  cntlzw 3, 3
  02ca0d0  rlwinm 3, 3, 27, 31, 31
  02ca0d4  clrlwi 4, 28, 24
  02ca0d8  cmpwi 1, 3, 0
  02ca0dc  cmpwi 4, 0
  02ca0e0  bf 2, 0x2ca0e8
  02ca0e4  bf 6, 0x2ca168
  02ca0e8  lfs 1, 4(30)
  02ca0ec  lfs 2, 116(1)
  02ca0f0  lfs 3, 0(30)
  02ca0f4  fsubs 1, 1, 2
  02ca0f8  lfs 2, 112(1)
  02ca0fc  fsubs 2, 3, 2
  02ca100  lfs 3, 8(30)
  02ca104  lfs 4, 120(1)
  02ca108  fsubs 3, 3, 4
  02ca10c  fmuls 1, 1, 1
  02ca110  cmpwi 3, 0
  02ca114  fmadds 1, 2, 2, 1
  02ca118  lfs 2, 24(24)
  02ca11c  fmadds 1, 3, 3, 1
  02ca120  lfs 3, 24(31)
  02ca124  fsubs 2, 2, 3
  02ca128  lfs 3, 28(22)
  02ca12c  lfs 4, 32(22)
  02ca130  fsqrts 1, 1
  02ca134  fsub 2, 3, 2
  02ca138  fadds 3, 1, 4
  02ca13c  fsel 1, 2, 1, 3
  02ca140  bt 2, 0x2ca148
  02ca144  lfs 28, 36(22)
  02ca148  fadds 1, 28, 1
  02ca14c  fmadds 1, 29, 29, 1
  02ca150  fmadds 1, 30, 30, 1
  02ca154  fcmpu 0, 31, 1
  02ca158  cror 6, 0, 2
  02ca15c  bt 6, 0x2ca168
  02ca160  fmr 31, 1
  02ca164  ori 27, 24, 0
  02ca168  lis 3, 165
  02ca16c  addic 21, 21, 4
  02ca170  addic 3, 3, -27836
  02ca174  extsw 4, 21
  02ca178  lwzx 24, 3, 4
  02ca17c  cmpwi 24, 0
  02ca180  bf 2, 0x2c9c6c
  02ca184  cmpwi 27, 0
  02ca188  bf 2, 0x2ca1cc
  02ca18c  lis 3, 151
  02ca190  lfs 1, 20(31)
  02ca194  addic 3, 3, -25376
  02ca198  lfs 2, 16(31)
  02ca19c  lfs 3, 132(3)
  02ca1a0  lfs 4, 128(3)
  02ca1a4  fsubs 1, 1, 3
  02ca1a8  fsubs 2, 2, 4
  02ca1ac  fmuls 1, 1, 1
  02ca1b0  fmadds 1, 2, 2, 1
  02ca1b4  lfs 2, 40(22)
  02ca1b8  fsqrts 1, 1
  02ca1bc  fcmpu 0, 1, 2
  02ca1c0  cror 6, 0, 2
  02ca1c4  bt 6, 0x2ca1cc
  02ca1c8  lwz 27, 8320(3)
  02ca1cc  ori 3, 27, 0
  02ca1d0  ld 0, 368(1)
  02ca1d4  mtlr 0
  02ca1d8  lfd 28, 320(1)
  02ca1dc  lfd 29, 328(1)
  02ca1e0  lfd 30, 336(1)
  02ca1e4  lfd 31, 344(1)
  02ca1e8  ld 20, 224(1)
  02ca1ec  ld 21, 232(1)
  02ca1f0  ld 22, 240(1)
  02ca1f4  ld 23, 248(1)
  02ca1f8  ld 24, 256(1)
  02ca1fc  ld 25, 264(1)
  02ca200  ld 26, 272(1)
  02ca204  ld 27, 280(1)
  02ca208  ld 28, 288(1)
  02ca20c  ld 29, 296(1)
  02ca210  ld 30, 304(1)
  02ca214  ld 31, 312(1)
  02ca218  addi 1, 1, 352
  02ca21c  blr

M186_002ca268:   # 0x2ca268, 0xc38 bytes
  02ca268  stdu 1, -432(1)
  02ca26c  mflr 0
  02ca270  std 0, 448(1)
  02ca274  stfd 14, 288(1)
  02ca278  stfd 15, 296(1)
  02ca27c  stfd 16, 304(1)
  02ca280  stfd 17, 312(1)
  02ca284  stfd 18, 320(1)
  02ca288  stfd 19, 328(1)
  02ca28c  stfd 20, 336(1)
  02ca290  stfd 21, 344(1)
  02ca294  stfd 22, 352(1)
  02ca298  stfd 23, 360(1)
  02ca29c  stfd 24, 368(1)
  02ca2a0  stfd 25, 376(1)
  02ca2a4  stfd 26, 384(1)
  02ca2a8  stfd 27, 392(1)
  02ca2ac  stfd 28, 400(1)
  02ca2b0  stfd 29, 408(1)
  02ca2b4  stfd 30, 416(1)
  02ca2b8  stfd 31, 424(1)
  02ca2bc  fmr 30, 2
  02ca2c0  lis 5, 45
  02ca2c4  fmr 19, 1
  02ca2c8  lis 6, 0
  02ca2cc  fmr 18, 6
  02ca2d0  addi 5, 5, -24032
  02ca2d4  fmr 25, 5
  02ca2d8  std 31, 280(1)
  02ca2dc  fmr 17, 4
  02ca2e0  ori 31, 3, 0
  02ca2e4  std 30, 272(1)
  02ca2e8  fmr 1, 3
  02ca2ec  std 26, 240(1)
  02ca2f0  ori 30, 4, 0
  02ca2f4  ori 26, 10, 0
  02ca2f8  fdivs 2, 30, 3
  02ca2fc  lfs 29, 4(5)
  02ca300  std 29, 264(1)
  02ca304  lfs 28, 0(5)
  02ca308  lwz 29, 556(1)
  02ca30c  fmr 26, 19
  02ca310  fmr 14, 29
  02ca314  std 28, 256(1)
  02ca318  std 27, 248(1)
  02ca31c  std 25, 232(1)
  02ca320  std 24, 224(1)
  02ca324  std 23, 216(1)
  02ca328  stfd 2, 192(1)
  02ca32c  bl 0x502758
  02ca330  nop
  02ca334  li 4, 0
  02ca338  lwz 27, 120(31)
  02ca33c  cmpwi 26, 0
  02ca340  ori 28, 3, 0
  02ca344  fmr 27, 19
  02ca348  stw 4, 0(29)
  02ca34c  bt 2, 0x2ca510
  02ca350  lfs 1, 0(26)
  02ca354  lfs 2, 16(31)
  02ca358  lfs 3, 4(26)
  02ca35c  lfs 4, 20(31)
  02ca360  fsubs 1, 1, 2
  02ca364  fsubs 2, 3, 4
  02ca368  lis 3, 115
  02ca36c  addic 3, 3, 22784
  02ca370  fabs 3, 1
  02ca374  fabs 4, 2
  02ca378  stfs 1, 144(1)
  02ca37c  stfs 2, 148(1)
  02ca380  fsubs 1, 3, 4
  02ca384  stfs 1, 152(1)
  02ca388  lwz 4, 144(1)
  02ca38c  lfs 1, 144(1)
  02ca390  lwz 5, 148(1)
  02ca394  lfs 2, 148(1)
  02ca398  lwz 6, 152(1)
  02ca39c  rlwinm 5, 5, 3, 29, 29
  02ca3a0  fabs 5, 2
  02ca3a4  lfs 2, 152(1)
  02ca3a8  fabs 1, 1
  02ca3ac  rlwimi 5, 6, 2, 30, 30
  02ca3b0  fsub 6, 2, 29
  02ca3b4  fsub 7, 2, 29
  02ca3b8  rlwimi 5, 4, 4, 28, 28
  02ca3bc  ori 4, 3, 0
  02ca3c0  rlwimi 4, 5, 2, 26, 28
  02ca3c4  slwi 5, 5, 2
  02ca3c8  clrldi 4, 4, 32
  02ca3cc  fsel 4, 6, 1, 4
  02ca3d0  lfsx 1, 3, 5
  02ca3d4  fsel 3, 7, 5, 3
  02ca3d8  lfs 2, 4(4)
  02ca3dc  fcmpu 0, 4, 29
  02ca3e0  bt 1, 0x2ca3ec
  02ca3e4  fmr 27, 29
  02ca3e8  b 0x2ca510
  02ca3ec  fsubs 5, 3, 4
  02ca3f0  fadds 3, 3, 4
  02ca3f4  addic 3, 1, 16
  02ca3f8  li 6, 2
  02ca3fc  addic 5, 3, 156
  02ca400  addic 4, 3, 140
  02ca404  mtctr 6
  02ca408  fdivs 3, 5, 3
  02ca40c  fmuls 4, 3, 3
  02ca410  stfs 3, 168(1)
  02ca414  stfs 3, 160(1)
  02ca418  stfs 3, 164(1)
  02ca41c  stfs 3, 156(1)
  02ca420  lfs 6, 168(1)
  02ca424  lfs 7, 160(1)
  02ca428  lfs 8, 164(1)
  02ca42c  fmuls 5, 4, 4
  02ca430  fmuls 7, 7, 4
  02ca434  fmuls 6, 6, 5
  02ca438  fmuls 3, 5, 5
  02ca43c  fmuls 5, 8, 5
  02ca440  stfs 7, 160(1)
  02ca444  fmuls 4, 6, 4
  02ca448  stfs 5, 164(1)
  02ca44c  stfs 4, 168(1)
  02ca450  lfs 4, 140(3)
  02ca454  fmuls 4, 4, 3
  02ca458  stfs 4, 156(3)
  02ca45c  lfs 4, 4(4)
  02ca460  addic 4, 4, 8
  02ca464  fmuls 4, 4, 3
  02ca468  addic 3, 3, 8
  02ca46c  stfs 4, 4(5)
  02ca470  addic 5, 5, 8
  02ca474  bdnz 0x2ca450
  02ca478  li 5, 4
  02ca47c  ori 3, 1, 0
  02ca480  mtctr 5
  02ca484  lis 4, 115
  02ca488  addic 5, 3, 156
  02ca48c  addic 4, 4, 22752
  02ca490  ori 7, 5, 0
  02ca494  lfs 3, 156(3)
  02ca498  lfs 4, 0(4)
  02ca49c  fmuls 3, 3, 4
  02ca4a0  lfs 4, 4(4)
  02ca4a4  addic 4, 4, 8
  02ca4a8  stfs 3, 156(3)
  02ca4ac  lfs 3, 4(5)
  02ca4b0  addic 3, 3, 8
  02ca4b4  fmuls 3, 3, 4
  02ca4b8  stfs 3, 4(5)
  02ca4bc  addic 5, 5, 8
  02ca4c0  bdnz 0x2ca494
  02ca4c4  ori 3, 1, 0
  02ca4c8  fmr 27, 29
  02ca4cc  mtctr 6
  02ca4d0  lfs 3, 156(3)
  02ca4d4  lfs 4, 4(7)
  02ca4d8  fadds 3, 27, 3
  02ca4dc  lfs 5, 8(7)
  02ca4e0  lfs 27, 12(7)
  02ca4e4  addic 3, 3, 16
  02ca4e8  addic 7, 7, 16
  02ca4ec  fadds 3, 3, 4
  02ca4f0  fadds 3, 3, 5
  02ca4f4  fadds 27, 3, 27
  02ca4f8  bdnz 0x2ca4d0
  02ca4fc  lis 3, 45
  02ca500  addi 3, 3, -24032
  02ca504  lfs 3, 8(3)
  02ca508  fadds 27, 27, 3
  02ca50c  fmadds 27, 27, 1, 2
  02ca510  lis 3, 45
  02ca514  fmr 1, 19
  02ca518  addi 26, 3, -24032
  02ca51c  lfs 2, 12(26)
  02ca520  fmuls 31, 30, 2
  02ca524  stfs 2, 200(1)
  02ca528  fmr 2, 31
  02ca52c  bl 0x502578
  02ca530  nop
  02ca534  fmr 1, 19
  02ca538  fmr 2, 31
  02ca53c  bl 0x5025e0
  02ca540  nop
  02ca544  lfs 19, 16(26)
  02ca548  lfs 16, 40(26)
  02ca54c  fsubs 3, 19, 27
  02ca550  lfs 20, 20(26)
  02ca554  fadds 2, 27, 16
  02ca558  fsubs 4, 20, 27
  02ca55c  lfs 21, 24(26)
  02ca560  fmr 30, 1
  02ca564  lfs 22, 28(26)
  02ca568  lfs 23, 32(26)
  02ca56c  lfs 24, 36(26)
  02ca570  fsub 6, 27, 3
  02ca574  fsubs 5, 19, 2
  02ca578  fsubs 7, 20, 2
  02ca57c  addic 25, 1, 112
  02ca580  addic 24, 1, 128
  02ca584  ori 3, 25, 0
  02ca588  fsel 3, 6, 3, 27
  02ca58c  fsub 8, 2, 5
  02ca590  ori 4, 24, 0
  02ca594  li 5, 4
  02ca598  ori 6, 31, 0
  02ca59c  li 7, 0
  02ca5a0  fsel 2, 8, 5, 2
  02ca5a4  fsub 5, 4, 3
  02ca5a8  fsub 6, 7, 2
  02ca5ac  fsel 3, 5, 4, 3
  02ca5b0  lfs 4, 0(30)
  02ca5b4  fsel 2, 6, 7, 2
  02ca5b8  fmuls 5, 3, 3
  02ca5bc  lfs 6, 4(30)
  02ca5c0  lfs 7, 8(30)
  02ca5c4  lfs 10, 12(30)
  02ca5c8  fmuls 8, 2, 2
  02ca5cc  fmuls 9, 5, 3
  02ca5d0  fmuls 11, 8, 2
  02ca5d4  fmuls 12, 5, 9
  02ca5d8  fmadds 3, 9, 21, 3
  02ca5dc  fmuls 9, 8, 11
  02ca5e0  fmadds 2, 11, 21, 2
  02ca5e4  fmuls 11, 5, 12
  02ca5e8  fmadds 3, 12, 22, 3
  02ca5ec  fmuls 1, 8, 9
  02ca5f0  fmadds 2, 9, 22, 2
  02ca5f4  fmuls 5, 5, 11
  02ca5f8  fmadds 3, 11, 23, 3
  02ca5fc  fmuls 8, 8, 1
  02ca600  fmadds 1, 1, 23, 2
  02ca604  fmadds 2, 5, 24, 3
  02ca608  fadds 3, 7, 17
  02ca60c  fmadds 1, 8, 24, 1
  02ca610  fmadds 5, 2, 18, 6
  02ca614  fmadds 2, 2, 25, 6
  02ca618  fmadds 6, 1, 25, 4
  02ca61c  fmadds 1, 1, 18, 4
  02ca620  stfs 6, 128(1)
  02ca624  lfs 15, 44(26)
  02ca628  stfs 2, 132(1)
  02ca62c  stfs 10, 140(1)
  02ca630  stfs 3, 120(1)
  02ca634  stfs 1, 112(1)
  02ca638  fmadds 1, 17, 15, 7
  02ca63c  stfs 5, 116(1)
  02ca640  stfs 10, 124(1)
  02ca644  stfs 1, 136(1)
  02ca648  bl 0x57820
  02ca64c  nop
  02ca650  lfs 1, 112(1)
  02ca654  cmpwi 3, 0
  02ca658  lfs 2, 116(1)
  02ca65c  lfs 3, 120(1)
  02ca660  bf 2, 0x2ca688
  02ca664  ori 3, 24, 0
  02ca668  ori 4, 31, 0
  02ca66c  bl 0x2c9a68
  02ca670  fcmpu 0, 1, 29
  02ca674  bt 2, 0x2ca718
  02ca678  fmr 29, 25
  02ca67c  fmr 26, 27
  02ca680  stfs 29, 0(29)
  02ca684  b 0x2ca718
  02ca688  lis 4, 161
  02ca68c  lwz 5, 56(27)
  02ca690  addic 4, 4, 2368
  02ca694  lwz 3, 24(4)
  02ca698  cmpw 3, 5
  02ca69c  cmpwi 1, 3, 0
  02ca6a0  bt 2, 0x2ca6c4
  02ca6a4  bt 6, 0x2ca6d4
  02ca6a8  lwz 3, 36(3)
  02ca6ac  cmpwi 3, 0
  02ca6b0  bt 2, 0x2ca6d4
  02ca6b4  lhz 3, 70(3)
  02ca6b8  extsh 3, 3
  02ca6bc  cmpwi 3, 5
  02ca6c0  bf 2, 0x2ca6d4
  02ca6c4  lis 3, 17096
  02ca6c8  fmr 1, 27
  02ca6cc  stw 3, 0(29)
  02ca6d0  b 0x2cae24
  02ca6d4  lfs 4, 36(4)
  02ca6d8  lfs 5, 32(4)
  02ca6dc  fsubs 2, 2, 4
  02ca6e0  fsubs 1, 1, 5
  02ca6e4  lfs 4, 40(4)
  02ca6e8  fsubs 3, 3, 4
  02ca6ec  fmr 26, 27
  02ca6f0  fmr 28, 14
  02ca6f4  fmuls 2, 2, 2
  02ca6f8  fmadds 1, 1, 1, 2
  02ca6fc  fmadds 29, 3, 3, 1
  02ca700  lfs 1, 0(29)
  02ca704  fsqrts 29, 29
  02ca708  fcmpu 0, 29, 1
  02ca70c  cror 6, 0, 2
  02ca710  bt 6, 0x2ca718
  02ca714  stfs 29, 0(29)
  02ca718  cmpwi 28, 0
  02ca71c  bf 1, 0x2ca984
  02ca720  lis 23, 161
  02ca724  li 26, 0
  02ca728  addic 23, 23, 2368
  02ca72c  fsubs 1, 19, 30
  02ca730  fadds 2, 30, 16
  02ca734  fsubs 3, 20, 30
  02ca738  ori 3, 25, 0
  02ca73c  ori 4, 24, 0
  02ca740  li 5, 4
  02ca744  ori 6, 31, 0
  02ca748  fsub 4, 30, 1
  02ca74c  fsubs 5, 19, 2
  02ca750  fsubs 6, 20, 2
  02ca754  li 7, 0
  02ca758  fsel 1, 4, 1, 30
  02ca75c  fsub 4, 2, 5
  02ca760  fsub 7, 3, 1
  02ca764  fsel 2, 4, 5, 2
  02ca768  lfs 4, 0(30)
  02ca76c  fsel 1, 7, 3, 1
  02ca770  fsub 3, 6, 2
  02ca774  fmuls 5, 1, 1
  02ca778  fsel 2, 3, 6, 2
  02ca77c  lfs 3, 4(30)
  02ca780  lfs 6, 8(30)
  02ca784  lfs 9, 12(30)
  02ca788  stfs 9, 140(1)
  02ca78c  fmuls 7, 5, 1
  02ca790  fmuls 8, 2, 2
  02ca794  fmuls 10, 5, 7
  02ca798  fmuls 11, 8, 2
  02ca79c  fmadds 1, 7, 21, 1
  02ca7a0  fadds 7, 6, 17
  02ca7a4  fmadds 6, 17, 15, 6
  02ca7a8  fmuls 12, 5, 10
  02ca7ac  fmadds 2, 11, 21, 2
  02ca7b0  fmuls 11, 8, 11
  02ca7b4  fmadds 1, 10, 22, 1
  02ca7b8  stfs 7, 120(1)
  02ca7bc  stfs 6, 136(1)
  02ca7c0  stfs 9, 124(1)
  02ca7c4  fmuls 5, 5, 12
  02ca7c8  fmuls 10, 8, 11
  02ca7cc  fmadds 2, 11, 22, 2
  02ca7d0  fmadds 1, 12, 23, 1
  02ca7d4  fmuls 6, 8, 10
  02ca7d8  fmadds 2, 10, 23, 2
  02ca7dc  fmadds 1, 5, 24, 1
  02ca7e0  fmadds 2, 6, 24, 2
  02ca7e4  fmadds 5, 1, 18, 3
  02ca7e8  fmadds 1, 1, 25, 3
  02ca7ec  fmadds 3, 2, 18, 4
  02ca7f0  fmadds 2, 2, 25, 4
  02ca7f4  stfs 5, 116(1)
  02ca7f8  stfs 1, 132(1)
  02ca7fc  stfs 3, 112(1)
  02ca800  stfs 2, 128(1)
  02ca804  bl 0x57820
  02ca808  nop
  02ca80c  lfs 5, 112(1)
  02ca810  cmpwi 3, 0
  02ca814  lfs 4, 32(23)
  02ca818  lfs 3, 116(1)
  02ca81c  lfs 2, 36(23)
  02ca820  lfs 1, 120(1)
  02ca824  lfs 31, 40(23)
  02ca828  bf 2, 0x2ca888
  02ca82c  ori 3, 24, 0
  02ca830  ori 4, 31, 0
  02ca834  bl 0x2c9a68
  02ca838  fcmpu 0, 1, 14
  02ca83c  bt 2, 0x2ca964
  02ca840  fmr 1, 30
  02ca844  fmr 2, 27
  02ca848  bl 0x5026a0
  02ca84c  nop
  02ca850  fcmpu 0, 28, 1
  02ca854  bt 1, 0x2ca864
  02ca858  fcmpu 0, 29, 25
  02ca85c  cror 6, 1, 2
  02ca860  bt 6, 0x2ca964
  02ca864  fmr 29, 25
  02ca868  fmr 28, 1
  02ca86c  lfs 1, 0(29)
  02ca870  fmr 26, 30
  02ca874  fcmpu 0, 29, 1
  02ca878  cror 6, 0, 2
  02ca87c  bt 6, 0x2ca964
  02ca880  stfs 29, 0(29)
  02ca884  b 0x2ca964
  02ca888  lwz 3, 24(23)
  02ca88c  lwz 4, 56(27)
  02ca890  cmpwi 1, 3, 0
  02ca894  cmpw 3, 4
  02ca898  bt 2, 0x2ca8bc
  02ca89c  bt 6, 0x2ca8cc
  02ca8a0  lwz 3, 36(3)
  02ca8a4  cmpwi 3, 0
  02ca8a8  bt 2, 0x2ca8cc
  02ca8ac  lhz 3, 70(3)
  02ca8b0  extsh 3, 3
  02ca8b4  cmpwi 3, 5
  02ca8b8  bf 2, 0x2ca8cc
  02ca8bc  lis 3, 17096
  02ca8c0  fmr 1, 30
  02ca8c4  stw 3, 0(29)
  02ca8c8  b 0x2cae24
  02ca8cc  fsubs 2, 3, 2
  02ca8d0  fsubs 3, 5, 4
  02ca8d4  fsubs 1, 1, 31
  02ca8d8  fmuls 2, 2, 2
  02ca8dc  fmadds 2, 3, 3, 2
  02ca8e0  fmadds 31, 1, 1, 2
  02ca8e4  fsqrts 31, 31
  02ca8e8  fcmpu 1, 29, 31
  02ca8ec  bf 4, 0x2ca924
  02ca8f0  fmr 26, 30
  02ca8f4  fmr 29, 31
  02ca8f8  fmr 2, 27
  02ca8fc  fmr 1, 26
  02ca900  bl 0x5026a0
  02ca904  nop
  02ca908  lfs 2, 0(29)
  02ca90c  fmr 28, 1
  02ca910  fcmpu 0, 29, 2
  02ca914  cror 6, 0, 2
  02ca918  bt 6, 0x2ca964
  02ca91c  stfs 29, 0(29)
  02ca920  b 0x2ca964
  02ca924  bf 6, 0x2ca964
  02ca928  fmr 1, 30
  02ca92c  fmr 2, 27
  02ca930  bl 0x5026a0
  02ca934  nop
  02ca938  fcmpu 0, 28, 1
  02ca93c  cror 6, 0, 2
  02ca940  bt 6, 0x2ca964
  02ca944  fmr 29, 31
  02ca948  fmr 28, 1
  02ca94c  lfs 1, 0(29)
  02ca950  fmr 26, 30
  02ca954  fcmpu 0, 29, 1
  02ca958  cror 6, 0, 2
  02ca95c  bt 6, 0x2ca964
  02ca960  stfs 29, 0(29)
  02ca964  fmr 1, 30
  02ca968  lfd 2, 192(1)
  02ca96c  bl 0x502578
  02ca970  nop
  02ca974  addic 26, 26, 1
  02ca978  fmr 30, 1
  02ca97c  cmpw 26, 28
  02ca980  bt 0, 0x2ca72c
  02ca984  fmr 1, 26
  02ca988  lis 3, 45
  02ca98c  addi 29, 3, -24032
  02ca990  lfs 2, 48(29)
  02ca994  bl 0x5025e0
  02ca998  nop
  02ca99c  fmr 31, 1
  02ca9a0  fadds 1, 26, 16
  02ca9a4  fsubs 10, 19, 26
  02ca9a8  ori 3, 25, 0
  02ca9ac  ori 4, 24, 0
  02ca9b0  li 5, 4
  02ca9b4  fadds 2, 31, 16
  02ca9b8  fsubs 3, 19, 31
  02ca9bc  fsubs 4, 19, 1
  02ca9c0  fsubs 5, 20, 31
  02ca9c4  ori 6, 31, 0
  02ca9c8  li 7, 0
  02ca9cc  fsubs 6, 19, 2
  02ca9d0  fsub 8, 31, 3
  02ca9d4  fsub 9, 1, 4
  02ca9d8  fsubs 7, 20, 2
  02ca9dc  fsub 11, 2, 6
  02ca9e0  fsel 3, 8, 3, 31
  02ca9e4  fsel 4, 9, 4, 1
  02ca9e8  fsubs 1, 20, 1
  02ca9ec  fsub 8, 26, 10
  02ca9f0  fsel 2, 11, 6, 2
  02ca9f4  fsub 6, 5, 3
  02ca9f8  fsub 9, 1, 4
  02ca9fc  fsub 11, 7, 2
  02caa00  fsel 3, 6, 5, 3
  02caa04  fsel 5, 8, 10, 26
  02caa08  fsubs 6, 20, 26
  02caa0c  fsel 1, 9, 1, 4
  02caa10  fsel 2, 11, 7, 2
  02caa14  fmuls 7, 3, 3
  02caa18  lfs 11, 0(30)
  02caa1c  fsub 4, 6, 5
  02caa20  fmuls 10, 1, 1
  02caa24  fmuls 8, 2, 2
  02caa28  fmuls 9, 7, 3
  02caa2c  fsel 4, 4, 6, 5
  02caa30  fmuls 5, 8, 2
  02caa34  fmuls 6, 7, 9
  02caa38  fmadds 3, 9, 21, 3
  02caa3c  fmuls 9, 10, 1
  02caa40  fmuls 12, 4, 4
  02caa44  fmuls 13, 8, 5
  02caa48  fmadds 2, 5, 21, 2
  02caa4c  fmuls 5, 7, 6
  02caa50  fmadds 3, 6, 22, 3
  02caa54  fmuls 6, 10, 9
  02caa58  fmadds 1, 9, 21, 1
  02caa5c  fmuls 9, 12, 4
  02caa60  fmuls 0, 8, 13
  02caa64  fmadds 2, 13, 22, 2
  02caa68  fmuls 7, 7, 5
  02caa6c  fmadds 3, 5, 23, 3
  02caa70  fmuls 30, 10, 6
  02caa74  fmadds 1, 6, 22, 1
  02caa78  lfs 5, 4(30)
  02caa7c  fmuls 6, 12, 9
  02caa80  lfs 13, 8(30)
  02caa84  fmadds 4, 9, 21, 4
  02caa88  lfs 28, 12(30)
  02caa8c  fmuls 8, 8, 0
  02caa90  fmadds 2, 0, 23, 2
  02caa94  fmadds 3, 7, 24, 3
  02caa98  fmuls 9, 10, 30
  02caa9c  fmadds 1, 30, 23, 1
  02caaa0  lfs 7, 52(29)
  02caaa4  fmuls 10, 12, 6
  02caaa8  fmadds 4, 6, 22, 4
  02caaac  fmr 30, 7
  02caab0  fmadds 2, 8, 24, 2
  02caab4  fmadds 3, 3, 18, 5
  02caab8  fmadds 1, 9, 24, 1
  02caabc  fmuls 5, 12, 10
  02caac0  fmadds 4, 10, 23, 4
  02caac4  fmadds 6, 17, 30, 13
  02caac8  fmadds 2, 2, 18, 11
  02caacc  fmadds 4, 5, 24, 4
  02caad0  fmadds 1, 1, 25, 2
  02caad4  fmadds 4, 4, 25, 3
  02caad8  stfs 1, 128(1)
  02caadc  lfs 29, 56(29)
  02caae0  stfs 28, 140(1)
  02caae4  fadds 1, 6, 29
  02caae8  stfs 6, 120(1)
  02caaec  stfs 2, 112(1)
  02caaf0  stfs 3, 116(1)
  02caaf4  stfs 28, 124(1)
  02caaf8  stfs 4, 132(1)
  02caafc  stfs 1, 136(1)
  02cab00  bl 0x57820
  02cab04  nop
  02cab08  lfs 1, 112(1)
  02cab0c  cmpwi 3, 0
  02cab10  lfs 2, 116(1)
  02cab14  lfs 3, 120(1)
  02cab18  bt 2, 0x2cabb0
  02cab1c  lis 4, 161
  02cab20  lwz 5, 56(27)
  02cab24  addic 4, 4, 2368
  02cab28  lwz 3, 24(4)
  02cab2c  cmpw 3, 5
  02cab30  cmpwi 1, 3, 0
  02cab34  bt 2, 0x2cabb0
  02cab38  bt 6, 0x2cab58
  02cab3c  lwz 3, 36(3)
  02cab40  cmpwi 3, 0
  02cab44  bt 2, 0x2cab58
  02cab48  lhz 3, 70(3)
  02cab4c  extsh 3, 3
  02cab50  cmpwi 3, 5
  02cab54  bt 2, 0x2cabb0
  02cab58  lfs 4, 36(4)
  02cab5c  lfs 5, 32(4)
  02cab60  fsubs 2, 2, 4
  02cab64  fsubs 1, 1, 5
  02cab68  lfs 4, 40(4)
  02cab6c  fsubs 3, 3, 4
  02cab70  lis 3, 45
  02cab74  addi 3, 3, -24032
  02cab78  fmuls 2, 2, 2
  02cab7c  lfs 4, 60(3)
  02cab80  fmadds 1, 1, 1, 2
  02cab84  fmadds 1, 3, 3, 1
  02cab88  lfs 3, 64(3)
  02cab8c  fmuls 3, 25, 3
  02cab90  fsqrts 2, 1
  02cab94  fmr 1, 26
  02cab98  fsubs 2, 25, 2
  02cab9c  fmuls 2, 2, 4
  02caba0  fdivs 2, 2, 3
  02caba4  bl 0x502578
  02caba8  nop
  02cabac  fmr 26, 1
  02cabb0  lis 3, 45
  02cabb4  fmr 1, 31
  02cabb8  addi 3, 3, -24032
  02cabbc  lfs 31, 60(3)
  02cabc0  fmr 2, 31
  02cabc4  bl 0x502578
  02cabc8  nop
  02cabcc  fsubs 2, 19, 1
  02cabd0  fadds 3, 1, 16
  02cabd4  fsubs 5, 19, 26
  02cabd8  fadds 6, 26, 16
  02cabdc  fsubs 4, 20, 1
  02cabe0  ori 3, 25, 0
  02cabe4  ori 4, 24, 0
  02cabe8  fsub 7, 1, 2
  02cabec  fsubs 8, 19, 3
  02cabf0  fsub 10, 26, 5
  02cabf4  fsubs 11, 19, 6
  02cabf8  fsubs 9, 20, 3
  02cabfc  li 5, 4
  02cac00  fsel 1, 7, 2, 1
  02cac04  fsub 2, 3, 8
  02cac08  fsubs 7, 20, 26
  02cac0c  fsel 5, 10, 5, 26
  02cac10  fsub 10, 6, 11
  02cac14  ori 6, 31, 0
  02cac18  li 7, 0
  02cac1c  fsub 12, 4, 1
  02cac20  fsel 2, 2, 8, 3
  02cac24  fsubs 3, 20, 6
  02cac28  fsub 8, 7, 5
  02cac2c  fsel 6, 10, 11, 6
  02cac30  fsel 1, 12, 4, 1
  02cac34  fsub 4, 9, 2
  02cac38  fsel 5, 8, 7, 5
  02cac3c  fsub 7, 3, 6
  02cac40  fmuls 8, 1, 1
  02cac44  fsel 2, 4, 9, 2
  02cac48  fmuls 4, 5, 5
  02cac4c  fsel 3, 7, 3, 6
  02cac50  lfs 9, 0(30)
  02cac54  lfs 12, 4(30)
  02cac58  fmuls 6, 8, 1
  02cac5c  fmuls 7, 2, 2
  02cac60  fmuls 10, 4, 5
  02cac64  fmuls 11, 3, 3
  02cac68  fmuls 13, 8, 6
  02cac6c  fmuls 0, 7, 2
  02cac70  fmadds 1, 6, 21, 1
  02cac74  fmuls 28, 4, 10
  02cac78  lfs 6, 8(30)
  02cac7c  fmadds 5, 10, 21, 5
  02cac80  fmuls 27, 11, 3
  02cac84  fmadds 6, 17, 30, 6
  02cac88  fmuls 10, 8, 13
  02cac8c  fmuls 20, 7, 0
  02cac90  fmadds 2, 0, 21, 2
  02cac94  fmadds 1, 13, 22, 1
  02cac98  fmuls 13, 4, 28
  02cac9c  fmadds 5, 28, 22, 5
  02caca0  fmuls 0, 11, 27
  02caca4  fmadds 3, 27, 21, 3
  02caca8  fmuls 8, 8, 10
  02cacac  fmuls 28, 7, 20
  02cacb0  fmadds 2, 20, 22, 2
  02cacb4  fmadds 1, 10, 23, 1
  02cacb8  fmuls 4, 4, 13
  02cacbc  fmadds 5, 13, 23, 5
  02cacc0  lfs 10, 12(30)
  02cacc4  fmuls 27, 11, 0
  02cacc8  fmadds 3, 0, 22, 3
  02caccc  stfs 10, 140(1)
  02cacd0  stfs 6, 120(1)
  02cacd4  fmuls 7, 7, 28
  02cacd8  fmadds 2, 28, 23, 2
  02cacdc  fmadds 1, 8, 24, 1
  02cace0  fmadds 4, 4, 24, 5
  02cace4  fmuls 8, 11, 27
  02cace8  fmadds 3, 27, 23, 3
  02cacec  fadds 5, 6, 29
  02cacf0  fmadds 2, 7, 24, 2
  02cacf4  fmadds 1, 1, 18, 12
  02cacf8  fmadds 3, 8, 24, 3
  02cacfc  stfs 5, 136(1)
  02cad00  fmadds 2, 2, 18, 9
  02cad04  fmadds 4, 4, 25, 1
  02cad08  stfs 1, 116(1)
  02cad0c  stfs 10, 124(1)
  02cad10  fmadds 1, 3, 25, 2
  02cad14  stfs 2, 112(1)
  02cad18  stfs 4, 132(1)
  02cad1c  stfs 1, 128(1)
  02cad20  bl 0x57820
  02cad24  nop
  02cad28  lfs 17, 112(1)
  02cad2c  cmpwi 3, 0
  02cad30  lfs 1, 116(1)
  02cad34  lfs 2, 120(1)
  02cad38  bt 2, 0x2cadcc
  02cad3c  lis 4, 161
  02cad40  lwz 5, 56(27)
  02cad44  addic 4, 4, 2368
  02cad48  lwz 3, 24(4)
  02cad4c  cmpw 3, 5
  02cad50  cmpwi 1, 3, 0
  02cad54  bt 2, 0x2cadcc
  02cad58  bt 6, 0x2cad78
  02cad5c  lwz 3, 36(3)
  02cad60  cmpwi 3, 0
  02cad64  bt 2, 0x2cad78
  02cad68  lhz 3, 70(3)
  02cad6c  extsh 3, 3
  02cad70  cmpwi 3, 5
  02cad74  bt 2, 0x2cadcc
  02cad78  lfs 3, 36(4)
  02cad7c  lfs 4, 32(4)
  02cad80  fsubs 1, 1, 3
  02cad84  fsubs 3, 17, 4
  02cad88  lfs 4, 40(4)
  02cad8c  fsubs 2, 2, 4
  02cad90  lis 3, 45
  02cad94  addi 3, 3, -24032
  02cad98  fmuls 1, 1, 1
  02cad9c  fmadds 1, 3, 3, 1
  02cada0  lfs 3, 64(3)
  02cada4  fmuls 3, 25, 3
  02cada8  fmadds 1, 2, 2, 1
  02cadac  fsqrts 2, 1
  02cadb0  fmr 1, 26
  02cadb4  fsubs 2, 25, 2
  02cadb8  fmuls 2, 2, 31
  02cadbc  fdivs 2, 2, 3
  02cadc0  bl 0x5025e0
  02cadc4  nop
  02cadc8  fmr 26, 1
  02cadcc  fmr 1, 26
  02cadd0  lfs 2, 72(31)
  02cadd4  bl 0x5026a0
  02cadd8  nop
  02caddc  lis 3, 45
  02cade0  addi 3, 3, -24032
  02cade4  lfs 2, 68(3)
  02cade8  fcmpu 0, 1, 2
  02cadec  cror 6, 0, 2
  02cadf0  bt 6, 0x2cae20
  02cadf4  fmr 1, 26
  02cadf8  lfs 2, 72(31)
  02cadfc  lfs 31, 200(1)
  02cae00  bl 0x5025e0
  02cae04  nop
  02cae08  lfs 3, 72(31)
  02cae0c  fmuls 2, 1, 31
  02cae10  fmr 1, 3
  02cae14  bl 0x502578
  02cae18  nop
  02cae1c  fmr 26, 1
  02cae20  fmr 1, 26
  02cae24  ld 0, 448(1)
  02cae28  mtlr 0
  02cae2c  lfd 14, 288(1)
  02cae30  lfd 15, 296(1)
  02cae34  lfd 16, 304(1)
  02cae38  lfd 17, 312(1)
  02cae3c  lfd 18, 320(1)
  02cae40  lfd 19, 328(1)
  02cae44  lfd 20, 336(1)
  02cae48  lfd 21, 344(1)
  02cae4c  lfd 22, 352(1)
  02cae50  lfd 23, 360(1)
  02cae54  lfd 24, 368(1)
  02cae58  lfd 25, 376(1)
  02cae5c  lfd 26, 384(1)
  02cae60  lfd 27, 392(1)
  02cae64  lfd 28, 400(1)
  02cae68  lfd 29, 408(1)
  02cae6c  lfd 30, 416(1)
  02cae70  lfd 31, 424(1)
  02cae74  ld 23, 216(1)
  02cae78  ld 24, 224(1)
  02cae7c  ld 25, 232(1)
  02cae80  ld 26, 240(1)
  02cae84  ld 27, 248(1)
  02cae88  ld 28, 256(1)
  02cae8c  ld 29, 264(1)
  02cae90  ld 30, 272(1)
  02cae94  ld 31, 280(1)
  02cae98  addi 1, 1, 432
  02cae9c  blr
