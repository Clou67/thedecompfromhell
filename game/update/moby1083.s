# game/update/moby1083.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1083_001b971c:   # 0x1b971c, 0x4 bytes
  01b971c  blr

M1083_001b9730:   # 0x1b9730, 0x2a4 bytes
  01b9730  stdu 1, -224(1)
  01b9734  mflr 0
  01b9738  std 0, 240(1)
  01b973c  stfd 23, 152(1)
  01b9740  stfd 24, 160(1)
  01b9744  stfd 25, 168(1)
  01b9748  stfd 26, 176(1)
  01b974c  stfd 27, 184(1)
  01b9750  stfd 28, 192(1)
  01b9754  stfd 29, 200(1)
  01b9758  stfd 30, 208(1)
  01b975c  stfd 31, 216(1)
  01b9760  std 30, 136(1)
  01b9764  lfs 26, 0(3)
  01b9768  ori 30, 3, 0
  01b976c  fmr 30, 1
  01b9770  std 31, 144(1)
  01b9774  fcmpu 0, 26, 4
  01b9778  ori 31, 5, 0
  01b977c  fmr 31, 2
  01b9780  fmr 28, 3
  01b9784  fmr 27, 4
  01b9788  fmr 29, 5
  01b978c  std 29, 128(1)
  01b9790  cror 6, 0, 2
  01b9794  bt 6, 0x1b97a4
  01b9798  fmr 26, 27
  01b979c  stfs 27, 0(30)
  01b97a0  b 0x1b97bc
  01b97a4  fneg 1, 27
  01b97a8  fcmpu 0, 26, 1
  01b97ac  cror 6, 1, 2
  01b97b0  bt 6, 0x1b97bc
  01b97b4  fmr 26, 1
  01b97b8  stfs 1, 0(30)
  01b97bc  fmr 1, 30
  01b97c0  fmr 25, 27
  01b97c4  fmr 2, 26
  01b97c8  bl 0x5025e0
  01b97cc  nop
  01b97d0  lis 3, 28
  01b97d4  lfs 3, 0(31)
  01b97d8  fmr 26, 1
  01b97dc  addi 29, 3, -26848
  01b97e0  fneg 4, 25
  01b97e4  lfs 27, 0(29)
  01b97e8  lfs 2, 0(30)
  01b97ec  fsub 1, 27, 3
  01b97f0  fsel 25, 1, 4, 25
  01b97f4  fmr 1, 25
  01b97f8  bl 0x5025e0
  01b97fc  nop
  01b9800  lfs 2, 0(31)
  01b9804  fmuls 3, 2, 2
  01b9808  fmr 23, 1
  01b980c  lfs 1, 4(29)
  01b9810  fdivs 3, 3, 31
  01b9814  fabs 24, 23
  01b9818  fmuls 3, 3, 1
  01b981c  fcmpu 0, 3, 24
  01b9820  cror 6, 0, 2
  01b9824  bt 6, 0x1b9878
  01b9828  fmr 2, 31
  01b982c  ori 3, 31, 0
  01b9830  fmr 1, 27
  01b9834  bl 0x109af0
  01b9838  nop
  01b983c  lfs 31, 0(31)
  01b9840  fabs 1, 31
  01b9844  fcmpu 0, 24, 1
  01b9848  cror 6, 0, 2
  01b984c  bt 6, 0x1b986c
  01b9850  fmr 1, 31
  01b9854  lfs 2, 0(30)
  01b9858  bl 0x502578
  01b985c  nop
  01b9860  stfs 1, 0(30)
  01b9864  lfs 1, 0(31)
  01b9868  b 0x1b9994
  01b986c  fmr 1, 23
  01b9870  stfs 25, 0(30)
  01b9874  b 0x1b9994
  01b9878  fadds 2, 2, 29
  01b987c  fmuls 3, 2, 26
  01b9880  stfs 2, 112(1)
  01b9884  fcmpu 0, 3, 27
  01b9888  bt 0, 0x1b993c
  01b988c  fcmpu 0, 26, 27
  01b9890  bt 2, 0x1b993c
  01b9894  fmuls 2, 2, 2
  01b9898  fabs 3, 26
  01b989c  fdivs 2, 2, 31
  01b98a0  fmuls 1, 2, 1
  01b98a4  fcmpu 0, 1, 3
  01b98a8  cror 6, 0, 2
  01b98ac  bt 6, 0x1b98d4
  01b98b0  fmr 1, 27
  01b98b4  addic 3, 1, 112
  01b98b8  fmr 2, 31
  01b98bc  bl 0x109af0
  01b98c0  nop
  01b98c4  lfs 1, 112(1)
  01b98c8  fsubs 1, 1, 29
  01b98cc  stfs 1, 0(31)
  01b98d0  b 0x1b995c
  01b98d4  lis 3, 28
  01b98d8  addi 3, 3, -26848
  01b98dc  fcmpu 0, 26, 27
  01b98e0  lfs 1, 8(3)
  01b98e4  fmuls 1, 31, 1
  01b98e8  cror 6, 1, 2
  01b98ec  fmuls 1, 1, 26
  01b98f0  fsqrts 1, 1
  01b98f4  fsubs 1, 1, 29
  01b98f8  fsub 2, 28, 1
  01b98fc  fsel 28, 2, 1, 28
  01b9900  bt 6, 0x1b9920
  01b9904  ori 3, 31, 0
  01b9908  fneg 1, 28
  01b990c  li 6, 0
  01b9910  fmr 2, 31
  01b9914  bl 0x109ec0
  01b9918  nop
  01b991c  b 0x1b995c
  01b9920  fmr 1, 28
  01b9924  ori 3, 31, 0
  01b9928  fmr 2, 31
  01b992c  li 6, 0
  01b9930  bl 0x109ec0
  01b9934  nop
  01b9938  b 0x1b995c
  01b993c  fmr 1, 27
  01b9940  addic 3, 1, 112
  01b9944  fmr 2, 31
  01b9948  bl 0x109af0
  01b994c  nop
  01b9950  lfs 1, 112(1)
  01b9954  fsubs 1, 1, 29
  01b9958  stfs 1, 0(31)
  01b995c  lfs 1, 0(31)
  01b9960  fabs 2, 26
  01b9964  fabs 3, 1
  01b9968  fcmpu 0, 2, 3
  01b996c  cror 6, 0, 2
  01b9970  bt 6, 0x1b998c
  01b9974  lfs 2, 0(30)
  01b9978  bl 0x502578
  01b997c  nop
  01b9980  stfs 1, 0(30)
  01b9984  lfs 1, 0(31)
  01b9988  b 0x1b9994
  01b998c  fmr 1, 26
  01b9990  stfs 30, 0(30)
  01b9994  ld 0, 240(1)
  01b9998  mtlr 0
  01b999c  lfd 23, 152(1)
  01b99a0  lfd 24, 160(1)
  01b99a4  lfd 25, 168(1)
  01b99a8  lfd 26, 176(1)
  01b99ac  lfd 27, 184(1)
  01b99b0  lfd 28, 192(1)
  01b99b4  lfd 29, 200(1)
  01b99b8  lfd 30, 208(1)
  01b99bc  lfd 31, 216(1)
  01b99c0  ld 29, 128(1)
  01b99c4  ld 30, 136(1)
  01b99c8  ld 31, 144(1)
  01b99cc  addi 1, 1, 224
  01b99d0  blr

M1083_001b99d4:   # 0x1b99d4, 0x14 bytes
  01b99d4  lis 3, 118
  01b99d8  lis 4, 1
  01b99dc  addic 3, 3, -32644
  01b99e0  stw 4, 72(3)
  01b99e4  blr

M1083_001b9a20:   # 0x1b9a20, 0x30c bytes
  01b9a20  stdu 1, -288(1)
  01b9a24  mflr 0
  01b9a28  std 0, 304(1)
  01b9a2c  stfd 14, 144(1)
  01b9a30  stfd 15, 152(1)
  01b9a34  stfd 16, 160(1)
  01b9a38  stfd 17, 168(1)
  01b9a3c  stfd 18, 176(1)
  01b9a40  stfd 19, 184(1)
  01b9a44  stfd 20, 192(1)
  01b9a48  stfd 21, 200(1)
  01b9a4c  stfd 22, 208(1)
  01b9a50  stfd 23, 216(1)
  01b9a54  stfd 24, 224(1)
  01b9a58  stfd 25, 232(1)
  01b9a5c  stfd 26, 240(1)
  01b9a60  stfd 27, 248(1)
  01b9a64  stfd 28, 256(1)
  01b9a68  stfd 29, 264(1)
  01b9a6c  stfd 30, 272(1)
  01b9a70  stfd 31, 280(1)
  01b9a74  std 31, 136(1)
  01b9a78  std 30, 128(1)
  01b9a7c  ori 31, 3, 0
  01b9a80  ori 30, 4, 0
  01b9a84  li 5, 0
  01b9a88  li 3, 1084
  01b9a8c  lwz 4, 120(31)
  01b9a90  stw 5, 4(4)
  01b9a94  bl 0xefa28
  01b9a98  nop
  01b9a9c  li 4, 64
  01b9aa0  ld 5, 56(31)
  01b9aa4  li 6, 1
  01b9aa8  std 5, 56(3)
  01b9aac  sth 4, 50(3)
  01b9ab0  stb 6, 49(3)
  01b9ab4  lhz 4, 52(31)
  01b9ab8  lfs 1, 16(31)
  01b9abc  sth 4, 52(3)
  01b9ac0  lfs 2, 20(31)
  01b9ac4  stfs 1, 16(3)
  01b9ac8  lfs 1, 24(31)
  01b9acc  stfs 2, 20(3)
  01b9ad0  lfs 2, 28(31)
  01b9ad4  stfs 1, 24(3)
  01b9ad8  lfs 1, 64(31)
  01b9adc  stfs 2, 28(3)
  01b9ae0  lfs 2, 68(31)
  01b9ae4  stfs 1, 64(3)
  01b9ae8  lfs 1, 72(31)
  01b9aec  stfs 2, 68(3)
  01b9af0  lfs 2, 76(31)
  01b9af4  stfs 1, 72(3)
  01b9af8  lfs 1, 44(31)
  01b9afc  stfs 2, 76(3)
  01b9b00  stfs 1, 44(3)
  01b9b04  bl 0xf31a8
  01b9b08  nop
  01b9b0c  lhz 3, 52(31)
  01b9b10  cmpwi 30, 0
  01b9b14  ori 3, 3, 1
  01b9b18  sth 3, 52(31)
  01b9b1c  bt 2, 0x1b9ccc
  01b9b20  lis 3, 28
  01b9b24  li 30, 0
  01b9b28  addi 3, 3, -26136
  01b9b2c  lfs 19, 0(3)
  01b9b30  lfs 20, 4(3)
  01b9b34  lfs 21, 8(3)
  01b9b38  lfs 22, 12(3)
  01b9b3c  lfs 23, 16(3)
  01b9b40  lfs 24, 20(3)
  01b9b44  lfs 25, 24(3)
  01b9b48  lfs 26, 28(3)
  01b9b4c  lfs 27, 32(3)
  01b9b50  lfs 28, 36(3)
  01b9b54  lfs 29, 40(3)
  01b9b58  lfs 30, 44(3)
  01b9b5c  lfs 31, 48(3)
  01b9b60  fmr 1, 19
  01b9b64  fmr 2, 20
  01b9b68  bl 0xfcbe8
  01b9b6c  nop
  01b9b70  lis 3, 114
  01b9b74  lfs 2, -3052(3)
  01b9b78  fmuls 18, 1, 2
  01b9b7c  bl 0xfcc68
  01b9b80  nop
  01b9b84  fadds 2, 1, 21
  01b9b88  fsubs 3, 22, 1
  01b9b8c  fsubs 4, 23, 1
  01b9b90  lis 3, 118
  01b9b94  lfs 17, 16(31)
  01b9b98  lfs 16, 20(31)
  01b9b9c  lfs 15, 24(31)
  01b9ba0  fsubs 5, 22, 2
  01b9ba4  fsub 6, 1, 3
  01b9ba8  fsubs 7, 23, 2
  01b9bac  fsub 8, 2, 5
  01b9bb0  fsel 1, 6, 3, 1
  01b9bb4  lfs 6, -32520(3)
  01b9bb8  lfs 14, 28(31)
  01b9bbc  stfs 30, 116(1)
  01b9bc0  stfs 31, 112(1)
  01b9bc4  fsel 2, 8, 5, 2
  01b9bc8  fsub 3, 4, 1
  01b9bcc  fsub 5, 7, 2
  01b9bd0  fsel 1, 3, 4, 1
  01b9bd4  fsel 2, 5, 7, 2
  01b9bd8  fmuls 3, 1, 1
  01b9bdc  fmuls 4, 2, 2
  01b9be0  fmuls 5, 3, 1
  01b9be4  fmuls 7, 4, 2
  01b9be8  fmuls 8, 3, 5
  01b9bec  fmadds 1, 5, 24, 1
  01b9bf0  fmuls 5, 4, 7
  01b9bf4  fmadds 2, 7, 24, 2
  01b9bf8  fmuls 7, 3, 8
  01b9bfc  fmadds 1, 8, 25, 1
  01b9c00  fmuls 8, 4, 5
  01b9c04  fmadds 2, 5, 25, 2
  01b9c08  fmuls 3, 3, 7
  01b9c0c  fmadds 5, 7, 26, 1
  01b9c10  fadds 1, 6, 30
  01b9c14  fmuls 4, 4, 8
  01b9c18  fmadds 7, 8, 26, 2
  01b9c1c  fadds 2, 6, 31
  01b9c20  fmadds 3, 3, 27, 5
  01b9c24  fmadds 4, 4, 27, 7
  01b9c28  fmuls 31, 3, 28
  01b9c2c  fmuls 30, 4, 28
  01b9c30  bl 0xfcbe8
  01b9c34  nop
  01b9c38  fmuls 2, 31, 31
  01b9c3c  stfs 29, 88(1)
  01b9c40  fadds 1, 15, 1
  01b9c44  stfs 14, 76(1)
  01b9c48  fadds 3, 17, 30
  01b9c4c  fadds 4, 16, 31
  01b9c50  fmadds 2, 30, 30, 2
  01b9c54  stfs 1, 72(1)
  01b9c58  stfs 3, 64(1)
  01b9c5c  fsqrts 2, 2
  01b9c60  stfs 4, 68(1)
  01b9c64  ld 5, 64(1)
  01b9c68  ld 6, 72(1)
  01b9c6c  fdivs 1, 18, 2
  01b9c70  fsub 3, 29, 2
  01b9c74  fsub 5, 29, 2
  01b9c78  fsub 4, 2, 29
  01b9c7c  fsub 2, 2, 29
  01b9c80  fmuls 6, 30, 1
  01b9c84  fmuls 1, 31, 1
  01b9c88  fsel 3, 3, 29, 6
  01b9c8c  fsel 5, 5, 29, 1
  01b9c90  fsel 3, 4, 3, 6
  01b9c94  fsel 1, 2, 5, 1
  01b9c98  stfs 3, 80(1)
  01b9c9c  stfs 1, 84(1)
  01b9ca0  stfs 1, 92(1)
  01b9ca4  ld 8, 88(1)
  01b9ca8  ori 3, 31, 0
  01b9cac  ld 7, 80(1)
  01b9cb0  bl 0x1bb4e0
  01b9cb4  nop
  01b9cb8  addic 30, 30, 1
  01b9cbc  lfs 31, 112(1)
  01b9cc0  cmpwi 30, 50
  01b9cc4  lfs 30, 116(1)
  01b9cc8  bt 0, 0x1b9b60
  01b9ccc  ld 0, 304(1)
  01b9cd0  mtlr 0
  01b9cd4  lfd 14, 144(1)
  01b9cd8  lfd 15, 152(1)
  01b9cdc  lfd 16, 160(1)
  01b9ce0  lfd 17, 168(1)
  01b9ce4  lfd 18, 176(1)
  01b9ce8  lfd 19, 184(1)
  01b9cec  lfd 20, 192(1)
  01b9cf0  lfd 21, 200(1)
  01b9cf4  lfd 22, 208(1)
  01b9cf8  lfd 23, 216(1)
  01b9cfc  lfd 24, 224(1)
  01b9d00  lfd 25, 232(1)
  01b9d04  lfd 26, 240(1)
  01b9d08  lfd 27, 248(1)
  01b9d0c  lfd 28, 256(1)
  01b9d10  lfd 29, 264(1)
  01b9d14  lfd 30, 272(1)
  01b9d18  lfd 31, 280(1)
  01b9d1c  ld 30, 128(1)
  01b9d20  ld 31, 136(1)
  01b9d24  addi 1, 1, 288
  01b9d28  blr

UpdateMoby_1083:   # 0x1b9d68, 0xa2c bytes
  01b9d68  stdu 1, -400(1)
  01b9d6c  mflr 0
  01b9d70  std 0, 416(1)
  01b9d74  stfd 19, 296(1)
  01b9d78  stfd 20, 304(1)
  01b9d7c  stfd 21, 312(1)
  01b9d80  stfd 22, 320(1)
  01b9d84  stfd 23, 328(1)
  01b9d88  stfd 24, 336(1)
  01b9d8c  stfd 25, 344(1)
  01b9d90  stfd 26, 352(1)
  01b9d94  stfd 27, 360(1)
  01b9d98  stfd 28, 368(1)
  01b9d9c  stfd 29, 376(1)
  01b9da0  stfd 30, 384(1)
  01b9da4  stfd 31, 392(1)
  01b9da8  std 31, 288(1)
  01b9dac  ori 31, 3, 0
  01b9db0  lis 3, 118
  01b9db4  lwz 4, 36(31)
  01b9db8  std 30, 280(1)
  01b9dbc  lfs 1, -32524(3)
  01b9dc0  lwz 30, 120(31)
  01b9dc4  lfs 2, 36(4)
  01b9dc8  lbz 3, 32(31)
  01b9dcc  fmuls 1, 2, 1
  01b9dd0  cmpwi 3, 4
  01b9dd4  cmpwi 1, 3, 0
  01b9dd8  cmpwi 6, 3, 1
  01b9ddc  cmpwi 7, 3, 2
  01b9de0  std 29, 272(1)
  01b9de4  std 28, 264(1)
  01b9de8  std 27, 256(1)
  01b9dec  std 26, 248(1)
  01b9df0  stfs 1, 44(31)
  01b9df4  bt 2, 0x1ba608
  01b9df8  cmpwi 3, 3
  01b9dfc  bt 2, 0x1ba288
  01b9e00  bt 30, 0x1b9f08
  01b9e04  bt 26, 0x1b9e1c
  01b9e08  bf 6, 0x1ba6b8
  01b9e0c  li 3, 1
  01b9e10  stw 3, 4(30)
  01b9e14  stb 3, 32(31)
  01b9e18  b 0x1ba6b8
  01b9e1c  lwz 3, 8(30)
  01b9e20  cmpwi 3, -1
  01b9e24  bf 1, 0x1b9e48
  01b9e28  lis 4, 164
  01b9e2c  slwi 3, 3, 8
  01b9e30  lwz 4, -28512(4)
  01b9e34  addc 3, 4, 3
  01b9e38  clrldi 3, 3, 32
  01b9e3c  lbz 3, 188(3)
  01b9e40  cmpwi 3, 0
  01b9e44  bf 2, 0x1b9e54
  01b9e48  lwz 3, 32(30)
  01b9e4c  cmpwi 3, -1
  01b9e50  bf 2, 0x1ba6b8
  01b9e54  lis 3, 151
  01b9e58  lfs 1, 20(31)
  01b9e5c  lfs 2, 16(31)
  01b9e60  addic 3, 3, -25376
  01b9e64  lfs 3, 132(3)
  01b9e68  lfs 4, 128(3)
  01b9e6c  fsubs 1, 1, 3
  01b9e70  fsubs 2, 2, 4
  01b9e74  lis 3, 28
  01b9e78  addi 3, 3, -25300
  01b9e7c  fmuls 1, 1, 1
  01b9e80  fmadds 1, 2, 2, 1
  01b9e84  lfs 2, 0(3)
  01b9e88  fsqrts 1, 1
  01b9e8c  fcmpu 0, 1, 2
  01b9e90  cror 6, 1, 2
  01b9e94  bt 6, 0x1b9ee0
  01b9e98  lis 3, 28
  01b9e9c  li 4, 2
  01b9ea0  vspltisw 2, -1
  01b9ea4  addi 3, 3, -25300
  01b9ea8  li 5, 4
  01b9eac  lis 6, 114
  01b9eb0  stb 4, 32(31)
  01b9eb4  li 4, -3056
  01b9eb8  vslw 2, 2, 2
  01b9ebc  lvlx 3, 5, 3
  01b9ec0  li 3, 36
  01b9ec4  vspltw 3, 3, 0
  01b9ec8  lvlx 4, 4, 6
  01b9ecc  vmaddfp 2, 4, 3, 2
  01b9ed0  vctsxs 2, 2, 0
  01b9ed4  vspltw 2, 2, 0
  01b9ed8  stvewx 2, 3, 30
  01b9edc  b 0x1ba6b8
  01b9ee0  lwz 4, 32(30)
  01b9ee4  ori 3, 31, 0
  01b9ee8  addic 4, 4, 1
  01b9eec  cntlzw 4, 4
  01b9ef0  rlwinm 4, 4, 27, 31, 31
  01b9ef4  xori 4, 4, 1
  01b9ef8  bl 0x1b9a20
  01b9efc  li 3, 4
  01b9f00  stb 3, 32(31)
  01b9f04  b 0x1ba6b8
  01b9f08  addic 3, 30, 36
  01b9f0c  bl 0x4fff60
  01b9f10  nop
  01b9f14  cmpwi 3, 0
  01b9f18  bt 2, 0x1ba22c
  01b9f1c  li 3, 3
  01b9f20  lis 4, 150
  01b9f24  lis 29, 165
  01b9f28  li 5, 1
  01b9f2c  lis 6, 150
  01b9f30  stb 3, 32(31)
  01b9f34  li 3, 18
  01b9f38  stw 5, -12480(4)
  01b9f3c  lwz 4, 7128(29)
  01b9f40  stw 3, -12476(6)
  01b9f44  lwz 3, 20(30)
  01b9f48  slwi 5, 3, 7
  01b9f4c  slwi 3, 3, 7
  01b9f50  addc 5, 4, 5
  01b9f54  addc 3, 4, 3
  01b9f58  clrldi 5, 5, 32
  01b9f5c  clrldi 3, 3, 32
  01b9f60  lis 4, 28
  01b9f64  addi 28, 4, -25300
  01b9f68  lfs 1, 48(5)
  01b9f6c  lis 4, 114
  01b9f70  stfs 1, 112(1)
  01b9f74  lfs 1, 52(5)
  01b9f78  stfs 1, 116(1)
  01b9f7c  lfs 1, 56(5)
  01b9f80  stfs 1, 120(1)
  01b9f84  lfs 1, 60(5)
  01b9f88  stfs 1, 124(1)
  01b9f8c  lfs 1, 112(3)
  01b9f90  stfs 1, 128(1)
  01b9f94  lfs 1, 116(3)
  01b9f98  stfs 1, 132(1)
  01b9f9c  lfs 1, 120(3)
  01b9fa0  stfs 1, 136(1)
  01b9fa4  addic 27, 1, 112
  01b9fa8  lfs 1, 124(3)
  01b9fac  addic 26, 1, 128
  01b9fb0  ori 3, 27, 0
  01b9fb4  stfs 1, 140(1)
  01b9fb8  lfs 1, 8(28)
  01b9fbc  li 5, 1
  01b9fc0  lfs 2, -3056(4)
  01b9fc4  li 7, 0
  01b9fc8  ori 4, 26, 0
  01b9fcc  fmuls 1, 2, 1
  01b9fd0  fctiwz 1, 1
  01b9fd4  stfd 1, 224(1)
  01b9fd8  lwz 6, 228(1)
  01b9fdc  extsw 6, 6
  01b9fe0  bl 0x47f74
  01b9fe4  nop
  01b9fe8  lfs 1, 12(28)
  01b9fec  lfs 2, 16(28)
  01b9ff0  fmr 4, 1
  01b9ff4  fmr 3, 2
  01b9ff8  fmr 5, 2
  01b9ffc  fmr 6, 2
  01ba000  bl 0x47f48
  01ba004  nop
  01ba008  ori 3, 27, 0
  01ba00c  bl 0x47b98
  01ba010  nop
  01ba014  ori 3, 26, 0
  01ba018  bl 0x47c08
  01ba01c  nop
  01ba020  li 3, 0
  01ba024  lfs 4, 20(28)
  01ba028  lwz 4, 16(30)
  01ba02c  slwi 4, 4, 7
  01ba030  stw 3, 24(30)
  01ba034  lwz 3, 7128(29)
  01ba038  lfs 1, 16(31)
  01ba03c  addc 5, 3, 4
  01ba040  lfs 2, 20(31)
  01ba044  clrldi 5, 5, 32
  01ba048  lis 4, 115
  01ba04c  lfs 3, 48(5)
  01ba050  lfs 5, 52(5)
  01ba054  fsubs 1, 1, 3
  01ba058  fsubs 2, 2, 5
  01ba05c  addic 4, 4, 22784
  01ba060  fabs 3, 1
  01ba064  fabs 5, 2
  01ba068  stfs 1, 176(1)
  01ba06c  stfs 2, 180(1)
  01ba070  fsubs 1, 3, 5
  01ba074  stfs 1, 184(1)
  01ba078  lwz 6, 176(1)
  01ba07c  lfs 1, 176(1)
  01ba080  lwz 7, 180(1)
  01ba084  lfs 2, 180(1)
  01ba088  lwz 8, 184(1)
  01ba08c  rlwinm 7, 7, 3, 29, 29
  01ba090  fabs 6, 2
  01ba094  lfs 2, 184(1)
  01ba098  fabs 1, 1
  01ba09c  rlwimi 7, 8, 2, 30, 30
  01ba0a0  fsub 7, 2, 4
  01ba0a4  fsub 8, 2, 4
  01ba0a8  rlwimi 7, 6, 4, 28, 28
  01ba0ac  ori 6, 4, 0
  01ba0b0  rlwimi 6, 7, 2, 26, 28
  01ba0b4  slwi 7, 7, 2
  01ba0b8  clrldi 6, 6, 32
  01ba0bc  fsel 5, 7, 1, 5
  01ba0c0  lfsx 1, 4, 7
  01ba0c4  fsel 3, 8, 6, 3
  01ba0c8  lfs 2, 4(6)
  01ba0cc  fcmpu 0, 5, 4
  01ba0d0  bt 1, 0x1ba0d8
  01ba0d4  b 0x1ba1f8
  01ba0d8  fsubs 6, 3, 5
  01ba0dc  fadds 3, 3, 5
  01ba0e0  addic 4, 1, 16
  01ba0e4  li 8, 2
  01ba0e8  addic 6, 4, 172
  01ba0ec  addic 7, 4, 188
  01ba0f0  mtctr 8
  01ba0f4  fdivs 3, 6, 3
  01ba0f8  fmuls 5, 3, 3
  01ba0fc  stfs 3, 200(1)
  01ba100  stfs 3, 192(1)
  01ba104  stfs 3, 196(1)
  01ba108  stfs 3, 188(1)
  01ba10c  lfs 7, 200(1)
  01ba110  lfs 8, 192(1)
  01ba114  lfs 9, 196(1)
  01ba118  fmuls 6, 5, 5
  01ba11c  fmuls 8, 8, 5
  01ba120  fmuls 7, 7, 6
  01ba124  fmuls 3, 6, 6
  01ba128  fmuls 6, 9, 6
  01ba12c  stfs 8, 192(1)
  01ba130  fmuls 5, 7, 5
  01ba134  stfs 6, 196(1)
  01ba138  stfs 5, 200(1)
  01ba13c  lfs 5, 172(4)
  01ba140  fmuls 5, 5, 3
  01ba144  stfs 5, 188(4)
  01ba148  lfs 5, 4(6)
  01ba14c  addic 4, 4, 8
  01ba150  addic 6, 6, 8
  01ba154  fmuls 5, 5, 3
  01ba158  stfs 5, 4(7)
  01ba15c  addic 7, 7, 8
  01ba160  bdnz 0x1ba13c
  01ba164  li 7, 4
  01ba168  ori 4, 1, 0
  01ba16c  mtctr 7
  01ba170  lis 6, 115
  01ba174  addic 7, 4, 188
  01ba178  addic 6, 6, 22752
  01ba17c  ori 9, 7, 0
  01ba180  lfs 3, 188(4)
  01ba184  lfs 5, 0(6)
  01ba188  fmuls 3, 3, 5
  01ba18c  lfs 5, 4(6)
  01ba190  addic 6, 6, 8
  01ba194  stfs 3, 188(4)
  01ba198  lfs 3, 4(7)
  01ba19c  addic 4, 4, 8
  01ba1a0  fmuls 3, 3, 5
  01ba1a4  stfs 3, 4(7)
  01ba1a8  addic 7, 7, 8
  01ba1ac  bdnz 0x1ba180
  01ba1b0  ori 4, 1, 0
  01ba1b4  mtctr 8
  01ba1b8  lfs 3, 188(4)
  01ba1bc  fadds 3, 4, 3
  01ba1c0  lfs 4, 4(9)
  01ba1c4  addic 4, 4, 16
  01ba1c8  lfs 5, 8(9)
  01ba1cc  lfs 6, 12(9)
  01ba1d0  addic 9, 9, 16
  01ba1d4  fadds 3, 3, 4
  01ba1d8  fadds 4, 3, 5
  01ba1dc  fadds 4, 4, 6
  01ba1e0  bdnz 0x1ba1b8
  01ba1e4  lis 4, 28
  01ba1e8  addi 4, 4, -25300
  01ba1ec  lfs 3, 24(4)
  01ba1f0  fadds 4, 4, 3
  01ba1f4  fmadds 4, 4, 1, 2
  01ba1f8  ori 4, 5, 0
  01ba1fc  li 5, 114
  01ba200  li 6, 0
  01ba204  stfs 4, 120(4)
  01ba208  lwz 4, 16(30)
  01ba20c  slwi 4, 4, 7
  01ba210  addc 3, 3, 4
  01ba214  addic 4, 3, 48
  01ba218  addic 7, 3, 112
  01ba21c  clrldi 3, 4, 32
  01ba220  clrldi 4, 7, 32
  01ba224  bl 0xa0c38
  01ba228  nop
  01ba22c  lis 4, 118
  01ba230  lwz 3, 36(30)
  01ba234  lwz 4, -32528(4)
  01ba238  cmpw 3, 4
  01ba23c  bf 0, 0x1ba6b8
  01ba240  extsw 3, 3
  01ba244  bl 0x502730
  01ba248  nop
  01ba24c  lis 3, 118
  01ba250  lis 4, 150
  01ba254  lwz 3, -32528(3)
  01ba258  extsw 3, 3
  01ba25c  std 3, 224(1)
  01ba260  lis 3, 28
  01ba264  addi 3, 3, -25300
  01ba268  lfs 2, 16(3)
  01ba26c  lfd 3, 224(1)
  01ba270  fcfid 3, 3
  01ba274  frsp 3, 3
  01ba278  fdivs 1, 1, 3
  01ba27c  fsubs 1, 2, 1
  01ba280  stfs 1, -12528(4)
  01ba284  b 0x1ba6b8
  01ba288  lis 4, 118
  01ba28c  lwz 3, 36(30)
  01ba290  lwz 4, -32528(4)
  01ba294  cmpw 3, 4
  01ba298  bf 0, 0x1ba2e8
  01ba29c  addic 4, 3, 1
  01ba2a0  extsw 3, 4
  01ba2a4  stw 4, 36(30)
  01ba2a8  bl 0x502730
  01ba2ac  nop
  01ba2b0  lis 3, 118
  01ba2b4  lis 4, 150
  01ba2b8  lwz 3, -32528(3)
  01ba2bc  extsw 3, 3
  01ba2c0  std 3, 224(1)
  01ba2c4  lis 3, 28
  01ba2c8  addi 3, 3, -25300
  01ba2cc  lfs 2, 16(3)
  01ba2d0  lfd 3, 224(1)
  01ba2d4  fcfid 3, 3
  01ba2d8  frsp 3, 3
  01ba2dc  fdivs 1, 1, 3
  01ba2e0  fsubs 1, 2, 1
  01ba2e4  stfs 1, -12528(4)
  01ba2e8  lis 3, 16255
  01ba2ec  ori 4, 3, 65368
  01ba2f0  lwz 3, 24(30)
  01ba2f4  srawi 5, 3, 31
  01ba2f8  srwi 6, 5, 1
  01ba2fc  xor 3, 6, 3
  01ba300  subc 3, 3, 5
  01ba304  cmpw 3, 4
  01ba308  bt 0, 0x1ba340
  01ba30c  li 5, 5
  01ba310  li 3, 0
  01ba314  li 4, 0
  01ba318  stb 5, 32(31)
  01ba31c  bl 0xb72b0
  01ba320  nop
  01ba324  li 3, 2
  01ba328  bl 0x481d0
  01ba32c  nop
  01ba330  lis 3, 150
  01ba334  li 4, 0
  01ba338  stw 4, -12480(3)
  01ba33c  b 0x1ba6b8
  01ba340  lis 4, 15692
  01ba344  ori 4, 4, 52429
  01ba348  cmpw 3, 4
  01ba34c  bt 0, 0x1ba3c8
  01ba350  lwz 3, 12(30)
  01ba354  cmpwi 3, -1
  01ba358  bf 1, 0x1ba3c8
  01ba35c  lis 4, 165
  01ba360  slwi 3, 3, 7
  01ba364  lis 5, 151
  01ba368  lis 6, 28
  01ba36c  addic 5, 5, -25376
  01ba370  lwz 4, 7128(4)
  01ba374  addi 6, 6, -25300
  01ba378  addc 3, 4, 3
  01ba37c  clrldi 3, 3, 32
  01ba380  lfs 1, 128(5)
  01ba384  stfs 1, 48(3)
  01ba388  lfs 1, 132(5)
  01ba38c  stfs 1, 52(3)
  01ba390  lfs 1, 136(5)
  01ba394  stfs 1, 56(3)
  01ba398  lfs 1, 140(5)
  01ba39c  stfs 1, 60(3)
  01ba3a0  lwz 3, 12(30)
  01ba3a4  lfs 1, 28(6)
  01ba3a8  slwi 3, 3, 7
  01ba3ac  addc 3, 4, 3
  01ba3b0  li 4, -1
  01ba3b4  clrldi 3, 3, 32
  01ba3b8  lfs 2, 56(3)
  01ba3bc  fsubs 1, 2, 1
  01ba3c0  stfs 1, 56(3)
  01ba3c4  stw 4, 12(30)
  01ba3c8  lwz 3, 4(30)
  01ba3cc  cmpwi 3, 1
  01ba3d0  bf 2, 0x1ba448
  01ba3d4  lis 3, 164
  01ba3d8  lwz 4, 32(30)
  01ba3dc  slwi 4, 4, 8
  01ba3e0  lwz 3, -28512(3)
  01ba3e4  lfs 1, 20(31)
  01ba3e8  addc 3, 3, 4
  01ba3ec  lfs 2, 16(31)
  01ba3f0  clrldi 3, 3, 32
  01ba3f4  lfs 3, 20(3)
  01ba3f8  lfs 4, 16(3)
  01ba3fc  fsubs 1, 1, 3
  01ba400  fsubs 2, 2, 4
  01ba404  lis 3, 28
  01ba408  addi 3, 3, -25300
  01ba40c  fmuls 1, 1, 1
  01ba410  fmadds 1, 2, 2, 1
  01ba414  lfs 2, 32(3)
  01ba418  fsqrts 1, 1
  01ba41c  fcmpu 0, 1, 2
  01ba420  cror 6, 0, 2
  01ba424  bt 6, 0x1ba448
  01ba428  li 3, 0
  01ba42c  li 4, 0
  01ba430  ori 5, 31, 0
  01ba434  bl 0x15d12c
  01ba438  nop
  01ba43c  ori 3, 31, 0
  01ba440  li 4, 1
  01ba444  bl 0x1b9a20
  01ba448  lis 3, 28
  01ba44c  lis 4, 114
  01ba450  addi 29, 3, -25300
  01ba454  lis 6, 114
  01ba458  addic 3, 30, 24
  01ba45c  addic 5, 30, 28
  01ba460  lfs 4, 36(29)
  01ba464  lfs 1, 16(29)
  01ba468  lfs 3, -3048(4)
  01ba46c  lfs 5, -3052(6)
  01ba470  fmr 2, 3
  01ba474  fmuls 4, 5, 4
  01ba478  bl 0x109c30
  01ba47c  nop
  01ba480  lis 3, 151
  01ba484  lwz 6, 20(30)
  01ba488  lis 5, 165
  01ba48c  addic 4, 3, -25376
  01ba490  lfs 1, -25376(3)
  01ba494  lfs 2, 4(4)
  01ba498  lwz 5, 7128(5)
  01ba49c  fmuls 3, 2, 2
  01ba4a0  lfs 4, 8(4)
  01ba4a4  slwi 3, 6, 7
  01ba4a8  slwi 6, 6, 7
  01ba4ac  addc 3, 5, 3
  01ba4b0  addc 5, 5, 6
  01ba4b4  clrldi 3, 3, 32
  01ba4b8  clrldi 5, 5, 32
  01ba4bc  fmadds 3, 1, 1, 3
  01ba4c0  lfs 5, 48(3)
  01ba4c4  stfs 5, 144(1)
  01ba4c8  lfs 6, 52(3)
  01ba4cc  stfs 6, 148(1)
  01ba4d0  lfs 7, 56(3)
  01ba4d4  stfs 7, 152(1)
  01ba4d8  fmadds 3, 4, 4, 3
  01ba4dc  lfs 8, 60(3)
  01ba4e0  lis 3, 118
  01ba4e4  stfs 8, 156(1)
  01ba4e8  lfs 8, 112(5)
  01ba4ec  stfs 8, 160(1)
  01ba4f0  lfs 8, 116(5)
  01ba4f4  fsqrts 3, 3
  01ba4f8  stfs 8, 164(1)
  01ba4fc  lfs 9, 120(5)
  01ba500  stfs 9, 168(1)
  01ba504  lfs 10, 124(5)
  01ba508  stfs 10, 172(1)
  01ba50c  lfs 10, 40(29)
  01ba510  lfs 11, -32516(3)
  01ba514  lfs 12, 136(4)
  01ba518  lfs 13, 128(4)
  01ba51c  addic 3, 1, 144
  01ba520  fmuls 10, 11, 10
  01ba524  fsubs 19, 8, 8
  01ba528  stfs 10, 160(1)
  01ba52c  lfs 11, 44(29)
  01ba530  lfs 0, 20(29)
  01ba534  lfs 31, 132(4)
  01ba538  lfs 30, 48(29)
  01ba53c  lfs 29, 144(4)
  01ba540  lfs 28, 152(4)
  01ba544  lfs 27, 24(30)
  01ba548  lfs 26, 140(4)
  01ba54c  lfs 20, 156(4)
  01ba550  stfs 26, 156(1)
  01ba554  fsubs 29, 29, 10
  01ba558  fsubs 28, 28, 9
  01ba55c  fdivs 11, 11, 3
  01ba560  fsub 25, 0, 3
  01ba564  fsub 23, 0, 3
  01ba568  fsub 22, 0, 3
  01ba56c  fsub 24, 3, 0
  01ba570  fsub 21, 3, 0
  01ba574  fsub 3, 3, 0
  01ba578  fmuls 4, 4, 11
  01ba57c  fmuls 2, 2, 11
  01ba580  fmuls 1, 1, 11
  01ba584  fsel 11, 25, 0, 4
  01ba588  fsel 26, 23, 0, 2
  01ba58c  fsel 0, 22, 0, 1
  01ba590  fsel 4, 24, 11, 4
  01ba594  fsel 2, 21, 26, 2
  01ba598  fsel 1, 3, 0, 1
  01ba59c  fadds 3, 12, 4
  01ba5a0  fadds 2, 31, 2
  01ba5a4  fadds 1, 13, 1
  01ba5a8  fadds 3, 3, 30
  01ba5ac  fsubs 2, 2, 6
  01ba5b0  fsubs 1, 1, 5
  01ba5b4  fsubs 3, 3, 7
  01ba5b8  fmadds 2, 27, 2, 6
  01ba5bc  fmadds 1, 27, 1, 5
  01ba5c0  fmadds 3, 27, 3, 7
  01ba5c4  stfs 2, 148(1)
  01ba5c8  stfs 1, 144(1)
  01ba5cc  stfs 3, 152(1)
  01ba5d0  lfs 1, 24(30)
  01ba5d4  stfs 20, 172(1)
  01ba5d8  fmadds 2, 1, 29, 10
  01ba5dc  fmadds 3, 1, 19, 8
  01ba5e0  fmadds 1, 1, 28, 9
  01ba5e4  stfs 2, 160(1)
  01ba5e8  stfs 3, 164(1)
  01ba5ec  stfs 1, 168(1)
  01ba5f0  bl 0x47b98
  01ba5f4  nop
  01ba5f8  addic 3, 1, 160
  01ba5fc  bl 0x47c08
  01ba600  nop
  01ba604  b 0x1ba6b8
  01ba608  lis 3, 151
  01ba60c  lfs 2, 20(31)
  01ba610  addic 3, 3, -25376
  01ba614  lfs 3, 16(31)
  01ba618  lis 4, 28
  01ba61c  lfs 4, 132(3)
  01ba620  lfs 1, 128(3)
  01ba624  fsubs 2, 2, 4
  01ba628  fsubs 3, 3, 1
  01ba62c  addi 4, 4, -25300
  01ba630  fmuls 2, 2, 2
  01ba634  fmadds 2, 3, 3, 2
  01ba638  lfs 3, 52(4)
  01ba63c  fsqrts 2, 2
  01ba640  fcmpu 0, 2, 3
  01ba644  cror 6, 1, 2
  01ba648  bt 6, 0x1ba6b8
  01ba64c  lis 4, 165
  01ba650  lwz 6, 12(30)
  01ba654  lis 5, 28
  01ba658  slwi 6, 6, 7
  01ba65c  addi 5, 5, -25300
  01ba660  lwz 4, 7128(4)
  01ba664  addc 6, 4, 6
  01ba668  clrldi 6, 6, 32
  01ba66c  stfs 1, 48(6)
  01ba670  lfs 1, 132(3)
  01ba674  stfs 1, 52(6)
  01ba678  lfs 1, 136(3)
  01ba67c  stfs 1, 56(6)
  01ba680  lfs 1, 140(3)
  01ba684  stfs 1, 60(6)
  01ba688  lwz 3, 12(30)
  01ba68c  lfs 1, 28(5)
  01ba690  slwi 3, 3, 7
  01ba694  li 5, 5
  01ba698  addc 3, 4, 3
  01ba69c  li 4, -1
  01ba6a0  clrldi 3, 3, 32
  01ba6a4  lfs 2, 56(3)
  01ba6a8  fsubs 1, 2, 1
  01ba6ac  stfs 1, 56(3)
  01ba6b0  stw 4, 12(30)
  01ba6b4  stb 5, 32(31)
  01ba6b8  lwz 3, 4(30)
  01ba6bc  cmpwi 3, 0
  01ba6c0  bt 2, 0x1ba700
  01ba6c4  lwz 3, 0(30)
  01ba6c8  cmpwi 3, 0
  01ba6cc  bt 2, 0x1ba6e8
  01ba6d0  lis 3, 113
  01ba6d4  ori 4, 31, 0
  01ba6d8  addic 3, 3, -30056
  01ba6dc  bl 0x6d720
  01ba6e0  nop
  01ba6e4  b 0x1ba738
  01ba6e8  lis 3, 113
  01ba6ec  ori 4, 31, 0
  01ba6f0  addic 3, 3, -30048
  01ba6f4  bl 0x6d720
  01ba6f8  nop
  01ba6fc  b 0x1ba738
  01ba700  lwz 3, 0(30)
  01ba704  cmpwi 3, 0
  01ba708  bt 2, 0x1ba724
  01ba70c  lis 3, 113
  01ba710  ori 4, 31, 0
  01ba714  addic 3, 3, -30072
  01ba718  bl 0x6d720
  01ba71c  nop
  01ba720  b 0x1ba738
  01ba724  lis 3, 113
  01ba728  ori 4, 31, 0
  01ba72c  addic 3, 3, -30064
  01ba730  bl 0x6d720
  01ba734  nop
  01ba738  ld 0, 416(1)
  01ba73c  mtlr 0
  01ba740  lfd 19, 296(1)
  01ba744  lfd 20, 304(1)
  01ba748  lfd 21, 312(1)
  01ba74c  lfd 22, 320(1)
  01ba750  lfd 23, 328(1)
  01ba754  lfd 24, 336(1)
  01ba758  lfd 25, 344(1)
  01ba75c  lfd 26, 352(1)
  01ba760  lfd 27, 360(1)
  01ba764  lfd 28, 368(1)
  01ba768  lfd 29, 376(1)
  01ba76c  lfd 30, 384(1)
  01ba770  lfd 31, 392(1)
  01ba774  ld 26, 248(1)
  01ba778  ld 27, 256(1)
  01ba77c  ld 28, 264(1)
  01ba780  ld 29, 272(1)
  01ba784  ld 30, 280(1)
  01ba788  ld 31, 288(1)
  01ba78c  addi 1, 1, 400
  01ba790  blr
