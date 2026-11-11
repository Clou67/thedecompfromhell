# game/update/moby1919.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1919_002d9678:   # 0x2d9678, 0xf0 bytes
  02d9678  stdu 1, -176(1)
  02d967c  mflr 0
  02d9680  std 0, 192(1)
  02d9684  std 25, 120(1)
  02d9688  std 30, 160(1)
  02d968c  std 28, 144(1)
  02d9690  lis 25, 268
  02d9694  lis 30, 127
  02d9698  std 31, 168(1)
  02d969c  lis 28, 127
  02d96a0  std 29, 152(1)
  02d96a4  lis 31, 127
  02d96a8  std 26, 128(1)
  02d96ac  std 24, 112(1)
  02d96b0  lis 29, 126
  02d96b4  lis 26, 268
  02d96b8  std 27, 136(1)
  02d96bc  li 24, 0
  02d96c0  sldi 27, 3, 3
  02d96c4  addic 25, 25, -29584
  02d96c8  addic 28, 28, 6068
  02d96cc  addic 30, 30, 6000
  02d96d0  addic 29, 29, 16272
  02d96d4  addic 31, 31, 6204
  02d96d8  addic 26, 26, -29640
  02d96dc  lwz 4, 0(28)
  02d96e0  addc 6, 27, 26
  02d96e4  lwz 5, 0(29)
  02d96e8  ori 3, 25, 0
  02d96ec  clrldi 6, 6, 32
  02d96f0  extsw 5, 5
  02d96f4  bl 0xe915c
  02d96f8  nop
  02d96fc  lwz 3, 0(29)
  02d9700  lwz 4, 0(30)
  02d9704  ori 6, 25, 0
  02d9708  li 7, 9
  02d970c  lwz 5, 0(31)
  02d9710  extsw 3, 3
  02d9714  bl 0x74604
  02d9718  nop
  02d971c  addic 24, 24, 1
  02d9720  addic 28, 28, 4
  02d9724  cmpwi 24, 17
  02d9728  addic 29, 29, 4
  02d972c  addic 30, 30, 4
  02d9730  addic 31, 31, 4
  02d9734  bt 0, 0x2d96dc
  02d9738  ld 0, 192(1)
  02d973c  mtlr 0
  02d9740  ld 24, 112(1)
  02d9744  ld 25, 120(1)
  02d9748  ld 26, 128(1)
  02d974c  ld 27, 136(1)
  02d9750  ld 28, 144(1)
  02d9754  ld 29, 152(1)
  02d9758  ld 30, 160(1)
  02d975c  ld 31, 168(1)
  02d9760  addi 1, 1, 176
  02d9764  blr

M1919_002d9768:   # 0x2d9768, 0xf0 bytes
  02d9768  stdu 1, -176(1)
  02d976c  mflr 0
  02d9770  std 0, 192(1)
  02d9774  std 25, 120(1)
  02d9778  std 30, 160(1)
  02d977c  std 28, 144(1)
  02d9780  lis 25, 268
  02d9784  lis 30, 126
  02d9788  std 31, 168(1)
  02d978c  lis 28, 126
  02d9790  std 29, 152(1)
  02d9794  lis 31, 126
  02d9798  std 26, 128(1)
  02d979c  std 24, 112(1)
  02d97a0  lis 29, 126
  02d97a4  lis 26, 268
  02d97a8  std 27, 136(1)
  02d97ac  li 24, 0
  02d97b0  sldi 27, 3, 3
  02d97b4  addic 25, 25, -29584
  02d97b8  addic 28, 28, 16164
  02d97bc  addic 30, 30, 16128
  02d97c0  addic 29, 29, -12824
  02d97c4  addic 31, 31, 16236
  02d97c8  addic 26, 26, -29616
  02d97cc  lwz 4, 0(28)
  02d97d0  addc 6, 27, 26
  02d97d4  lwz 5, 0(29)
  02d97d8  ori 3, 25, 0
  02d97dc  clrldi 6, 6, 32
  02d97e0  extsw 5, 5
  02d97e4  bl 0xe915c
  02d97e8  nop
  02d97ec  lwz 3, 0(29)
  02d97f0  lwz 4, 0(30)
  02d97f4  ori 6, 25, 0
  02d97f8  li 7, 9
  02d97fc  lwz 5, 0(31)
  02d9800  extsw 3, 3
  02d9804  bl 0x74604
  02d9808  nop
  02d980c  addic 24, 24, 1
  02d9810  addic 28, 28, 4
  02d9814  cmpwi 24, 9
  02d9818  addic 29, 29, 4
  02d981c  addic 30, 30, 4
  02d9820  addic 31, 31, 4
  02d9824  bt 0, 0x2d97cc
  02d9828  ld 0, 192(1)
  02d982c  mtlr 0
  02d9830  ld 24, 112(1)
  02d9834  ld 25, 120(1)
  02d9838  ld 26, 128(1)
  02d983c  ld 27, 136(1)
  02d9840  ld 28, 144(1)
  02d9844  ld 29, 152(1)
  02d9848  ld 30, 160(1)
  02d984c  ld 31, 168(1)
  02d9850  addi 1, 1, 176
  02d9854  blr

M1919_002d9858:   # 0x2d9858, 0xf0 bytes
  02d9858  stdu 1, -176(1)
  02d985c  mflr 0
  02d9860  std 0, 192(1)
  02d9864  std 25, 120(1)
  02d9868  std 30, 160(1)
  02d986c  std 28, 144(1)
  02d9870  lis 25, 268
  02d9874  lis 30, 127
  02d9878  std 31, 168(1)
  02d987c  lis 28, 127
  02d9880  std 29, 152(1)
  02d9884  lis 31, 127
  02d9888  std 26, 128(1)
  02d988c  std 24, 112(1)
  02d9890  lis 29, 127
  02d9894  lis 26, 268
  02d9898  std 27, 136(1)
  02d989c  li 24, 0
  02d98a0  sldi 27, 3, 3
  02d98a4  addic 25, 25, -29584
  02d98a8  addic 28, 28, 15628
  02d98ac  addic 30, 30, 15608
  02d98b0  addic 29, 29, 6272
  02d98b4  addic 31, 31, 15668
  02d98b8  addic 26, 26, -29600
  02d98bc  lwz 4, 0(28)
  02d98c0  addc 6, 27, 26
  02d98c4  lwz 5, 0(29)
  02d98c8  ori 3, 25, 0
  02d98cc  clrldi 6, 6, 32
  02d98d0  extsw 5, 5
  02d98d4  bl 0xe915c
  02d98d8  nop
  02d98dc  lwz 3, 0(29)
  02d98e0  lwz 4, 0(30)
  02d98e4  ori 6, 25, 0
  02d98e8  li 7, 9
  02d98ec  lwz 5, 0(31)
  02d98f0  extsw 3, 3
  02d98f4  bl 0x74604
  02d98f8  nop
  02d98fc  addic 24, 24, 1
  02d9900  addic 28, 28, 4
  02d9904  cmpwi 24, 5
  02d9908  addic 29, 29, 4
  02d990c  addic 30, 30, 4
  02d9910  addic 31, 31, 4
  02d9914  bt 0, 0x2d98bc
  02d9918  ld 0, 192(1)
  02d991c  mtlr 0
  02d9920  ld 24, 112(1)
  02d9924  ld 25, 120(1)
  02d9928  ld 26, 128(1)
  02d992c  ld 27, 136(1)
  02d9930  ld 28, 144(1)
  02d9934  ld 29, 152(1)
  02d9938  ld 30, 160(1)
  02d993c  ld 31, 168(1)
  02d9940  addi 1, 1, 176
  02d9944  blr

M1919_002d9948:   # 0x2d9948, 0x72c bytes
  02d9948  stdu 1, -240(1)
  02d994c  mflr 0
  02d9950  std 0, 256(1)
  02d9954  std 30, 224(1)
  02d9958  std 31, 232(1)
  02d995c  lwz 30, 120(3)
  02d9960  li 31, 0
  02d9964  li 3, 0
  02d9968  li 4, 1
  02d996c  std 28, 208(1)
  02d9970  li 5, 0
  02d9974  ori 28, 31, 0
  02d9978  li 6, 1
  02d997c  std 29, 216(1)
  02d9980  std 27, 200(1)
  02d9984  std 26, 192(1)
  02d9988  std 25, 184(1)
  02d998c  std 24, 176(1)
  02d9990  std 23, 168(1)
  02d9994  std 22, 160(1)
  02d9998  std 21, 152(1)
  02d999c  std 20, 144(1)
  02d99a0  std 19, 136(1)
  02d99a4  std 18, 128(1)
  02d99a8  std 17, 120(1)
  02d99ac  li 7, 128
  02d99b0  bl 0x502ea8
  02d99b4  nop
  02d99b8  ori 4, 3, 0
  02d99bc  li 3, 3
  02d99c0  bl 0x174f80
  02d99c4  nop
  02d99c8  li 3, 0
  02d99cc  li 4, 0
  02d99d0  li 5, 0
  02d99d4  li 6, 0
  02d99d8  li 7, 0
  02d99dc  li 8, 0
  02d99e0  bl 0x502f08
  02d99e4  nop
  02d99e8  ori 4, 3, 0
  02d99ec  li 3, 6
  02d99f0  bl 0x174f80
  02d99f4  nop
  02d99f8  li 3, 0
  02d99fc  lis 9, 0
  02d9a00  li 4, 0
  02d9a04  li 5, 1
  02d9a08  li 6, 1
  02d9a0c  li 7, 1
  02d9a10  li 8, 0
  02d9a14  ori 9, 9, 65424
  02d9a18  bl 0x502fd4
  02d9a1c  nop
  02d9a20  ori 4, 3, 0
  02d9a24  li 3, 26
  02d9a28  bl 0x174f80
  02d9a2c  nop
  02d9a30  li 3, 1
  02d9a34  li 4, 0
  02d9a38  li 10, 2
  02d9a3c  li 5, 63
  02d9a40  li 6, 1
  02d9a44  li 7, 0
  02d9a48  li 8, 0
  02d9a4c  li 9, 1
  02d9a50  bl 0x502f7c
  02d9a54  nop
  02d9a58  ori 4, 3, 0
  02d9a5c  li 3, 22
  02d9a60  bl 0x174f80
  02d9a64  nop
  02d9a68  lis 3, 144
  02d9a6c  lis 4, 161
  02d9a70  addic 5, 3, -23532
  02d9a74  addic 4, 4, 24396
  02d9a78  li 3, 22
  02d9a7c  lwz 29, 8(5)
  02d9a80  lwz 27, 28(4)
  02d9a84  bl 0x685c4
  02d9a88  nop
  02d9a8c  sldi 4, 3, 5
  02d9a90  sldi 3, 3, 2
  02d9a94  addc 4, 4, 3
  02d9a98  ori 3, 29, 0
  02d9a9c  addc 5, 27, 4
  02d9aa0  li 4, 0
  02d9aa4  clrldi 5, 5, 32
  02d9aa8  bl 0x4d6bb0
  02d9aac  nop
  02d9ab0  bl 0x71170
  02d9ab4  nop
  02d9ab8  lis 29, 149
  02d9abc  lis 3, 17279
  02d9ac0  addic 29, 29, 5056
  02d9ac4  lwz 4, 328(29)
  02d9ac8  srawi 5, 4, 31
  02d9acc  srwi 6, 5, 1
  02d9ad0  xor 4, 6, 4
  02d9ad4  subc 4, 4, 5
  02d9ad8  cmpw 4, 3
  02d9adc  bt 1, 0x2d9b38
  02d9ae0  addic 29, 29, 320
  02d9ae4  lwz 4, 0(30)
  02d9ae8  ori 3, 29, 0
  02d9aec  extsw 4, 4
  02d9af0  bl 0x110b70
  02d9af4  nop
  02d9af8  cmpwi 3, 0
  02d9afc  bf 2, 0x2d9b38
  02d9b00  ori 3, 29, 0
  02d9b04  lwz 4, 4(30)
  02d9b08  extsw 4, 4
  02d9b0c  bl 0x110b70
  02d9b10  nop
  02d9b14  cmpwi 3, 0
  02d9b18  bf 2, 0x2d9b38
  02d9b1c  ori 3, 29, 0
  02d9b20  lwz 4, 8(30)
  02d9b24  extsw 4, 4
  02d9b28  bl 0x110b70
  02d9b2c  nop
  02d9b30  cmpwi 3, 0
  02d9b34  bt 2, 0x2d9c14
  02d9b38  li 3, 44
  02d9b3c  li 31, 1
  02d9b40  bl 0x685c4
  02d9b44  nop
  02d9b48  ori 4, 3, 0
  02d9b4c  li 3, 24
  02d9b50  bl 0x174f80
  02d9b54  nop
  02d9b58  lis 7, 126
  02d9b5c  li 3, 0
  02d9b60  li 4, 1
  02d9b64  li 5, 0
  02d9b68  li 6, 1
  02d9b6c  lwz 7, -12896(7)
  02d9b70  bl 0x502ea8
  02d9b74  nop
  02d9b78  ori 4, 3, 0
  02d9b7c  li 3, 3
  02d9b80  bl 0x174f80
  02d9b84  nop
  02d9b88  lis 29, 268
  02d9b8c  lis 24, 127
  02d9b90  lis 23, 127
  02d9b94  lis 26, 127
  02d9b98  lis 25, 126
  02d9b9c  lis 27, 268
  02d9ba0  ori 30, 28, 0
  02d9ba4  addic 24, 24, 6000
  02d9ba8  addic 29, 29, -29584
  02d9bac  addic 26, 26, 6068
  02d9bb0  addic 23, 23, 6204
  02d9bb4  addic 25, 25, 16272
  02d9bb8  addic 27, 27, -29640
  02d9bbc  lwz 4, 0(26)
  02d9bc0  ori 3, 29, 0
  02d9bc4  lwz 5, 0(25)
  02d9bc8  ori 6, 27, 0
  02d9bcc  extsw 5, 5
  02d9bd0  bl 0xe915c
  02d9bd4  nop
  02d9bd8  lwz 3, 0(25)
  02d9bdc  lwz 4, 0(24)
  02d9be0  ori 6, 29, 0
  02d9be4  li 7, 9
  02d9be8  lwz 5, 0(23)
  02d9bec  extsw 3, 3
  02d9bf0  bl 0x74604
  02d9bf4  nop
  02d9bf8  addic 30, 30, 1
  02d9bfc  addic 26, 26, 4
  02d9c00  cmpwi 30, 17
  02d9c04  addic 25, 25, 4
  02d9c08  addic 24, 24, 4
  02d9c0c  addic 23, 23, 4
  02d9c10  bt 0, 0x2d9bbc
  02d9c14  lis 3, 268
  02d9c18  cmpwi 1, 31, 0
  02d9c1c  lbz 3, -29648(3)
  02d9c20  cmpwi 3, 0
  02d9c24  crorc 2, 6, 1
  02d9c28  bt 2, 0x2d9dd0
  02d9c2c  li 3, 41
  02d9c30  bl 0x685c4
  02d9c34  nop
  02d9c38  ori 4, 3, 0
  02d9c3c  li 3, 24
  02d9c40  bl 0x174f80
  02d9c44  nop
  02d9c48  lis 29, 126
  02d9c4c  lis 3, 268
  02d9c50  addic 29, 29, -12896
  02d9c54  li 5, 2
  02d9c58  li 6, 1
  02d9c5c  lbz 3, -29648(3)
  02d9c60  lwz 4, 4(29)
  02d9c64  mullw 3, 4, 3
  02d9c68  li 4, 2
  02d9c6c  srawi 7, 3, 8
  02d9c70  li 3, 0
  02d9c74  clrldi 7, 7, 32
  02d9c78  bl 0x502ea8
  02d9c7c  nop
  02d9c80  ori 4, 3, 0
  02d9c84  li 3, 3
  02d9c88  bl 0x174f80
  02d9c8c  nop
  02d9c90  lis 24, 127
  02d9c94  lis 22, 127
  02d9c98  lis 21, 127
  02d9c9c  lis 23, 126
  02d9ca0  lis 26, 268
  02d9ca4  lis 27, 268
  02d9ca8  addic 22, 22, 6000
  02d9cac  addic 24, 24, 6068
  02d9cb0  addic 21, 21, 6204
  02d9cb4  addic 23, 23, 16272
  02d9cb8  addic 26, 26, -29640
  02d9cbc  ori 30, 28, 0
  02d9cc0  addic 27, 27, -29584
  02d9cc4  ori 19, 22, 0
  02d9cc8  ori 17, 24, 0
  02d9ccc  ori 20, 23, 0
  02d9cd0  ori 18, 21, 0
  02d9cd4  addic 25, 26, 8
  02d9cd8  lwz 4, 0(24)
  02d9cdc  lwz 5, 0(23)
  02d9ce0  ori 3, 27, 0
  02d9ce4  ori 6, 25, 0
  02d9ce8  extsw 5, 5
  02d9cec  bl 0xe915c
  02d9cf0  nop
  02d9cf4  lwz 3, 0(23)
  02d9cf8  ori 6, 27, 0
  02d9cfc  lwz 4, 0(22)
  02d9d00  li 7, 9
  02d9d04  lwz 5, 0(21)
  02d9d08  extsw 3, 3
  02d9d0c  bl 0x74604
  02d9d10  nop
  02d9d14  addic 30, 30, 1
  02d9d18  addic 24, 24, 4
  02d9d1c  cmpwi 30, 17
  02d9d20  addic 23, 23, 4
  02d9d24  addic 22, 22, 4
  02d9d28  addic 21, 21, 4
  02d9d2c  bt 0, 0x2d9cd8
  02d9d30  lis 5, 268
  02d9d34  lwz 6, 4(29)
  02d9d38  li 3, 2
  02d9d3c  li 4, 0
  02d9d40  lbz 5, -29648(5)
  02d9d44  mullw 6, 6, 5
  02d9d48  li 5, 2
  02d9d4c  srawi 7, 6, 8
  02d9d50  li 6, 1
  02d9d54  clrldi 7, 7, 32
  02d9d58  bl 0x502ea8
  02d9d5c  nop
  02d9d60  ori 4, 3, 0
  02d9d64  li 3, 3
  02d9d68  bl 0x174f80
  02d9d6c  nop
  02d9d70  ori 29, 28, 0
  02d9d74  addic 30, 26, 16
  02d9d78  lwz 4, 0(17)
  02d9d7c  lwz 5, 0(20)
  02d9d80  ori 3, 27, 0
  02d9d84  ori 6, 30, 0
  02d9d88  extsw 5, 5
  02d9d8c  bl 0xe915c
  02d9d90  nop
  02d9d94  lwz 3, 0(20)
  02d9d98  ori 6, 27, 0
  02d9d9c  lwz 4, 0(19)
  02d9da0  li 7, 9
  02d9da4  lwz 5, 0(18)
  02d9da8  extsw 3, 3
  02d9dac  bl 0x74604
  02d9db0  nop
  02d9db4  addic 29, 29, 1
  02d9db8  addic 17, 17, 4
  02d9dbc  cmpwi 29, 17
  02d9dc0  addic 20, 20, 4
  02d9dc4  addic 19, 19, 4
  02d9dc8  addic 18, 18, 4
  02d9dcc  bt 0, 0x2d9d78
  02d9dd0  li 3, 42
  02d9dd4  bl 0x685c4
  02d9dd8  nop
  02d9ddc  ori 4, 3, 0
  02d9de0  li 3, 24
  02d9de4  bl 0x174f80
  02d9de8  nop
  02d9dec  lis 6, 126
  02d9df0  li 3, 0
  02d9df4  li 4, 2
  02d9df8  li 5, 0
  02d9dfc  lwz 7, -12844(6)
  02d9e00  li 6, 1
  02d9e04  bl 0x502ea8
  02d9e08  nop
  02d9e0c  ori 4, 3, 0
  02d9e10  li 3, 3
  02d9e14  bl 0x174f80
  02d9e18  nop
  02d9e1c  lis 26, 126
  02d9e20  lis 24, 126
  02d9e24  lis 25, 126
  02d9e28  lis 23, 126
  02d9e2c  lis 29, 268
  02d9e30  lis 27, 268
  02d9e34  addic 26, 26, 16164
  02d9e38  addic 24, 24, 16128
  02d9e3c  addic 25, 25, -12824
  02d9e40  addic 23, 23, 16236
  02d9e44  ori 30, 28, 0
  02d9e48  addic 29, 29, -29584
  02d9e4c  addic 27, 27, -29616
  02d9e50  ori 20, 26, 0
  02d9e54  ori 19, 24, 0
  02d9e58  ori 22, 25, 0
  02d9e5c  ori 21, 23, 0
  02d9e60  lwz 4, 0(26)
  02d9e64  lwz 5, 0(25)
  02d9e68  ori 3, 29, 0
  02d9e6c  ori 6, 27, 0
  02d9e70  extsw 5, 5
  02d9e74  bl 0xe915c
  02d9e78  nop
  02d9e7c  lwz 3, 0(25)
  02d9e80  ori 6, 29, 0
  02d9e84  lwz 4, 0(24)
  02d9e88  li 7, 9
  02d9e8c  lwz 5, 0(23)
  02d9e90  extsw 3, 3
  02d9e94  bl 0x74604
  02d9e98  nop
  02d9e9c  addic 30, 30, 1
  02d9ea0  addic 26, 26, 4
  02d9ea4  cmpwi 30, 9
  02d9ea8  addic 25, 25, 4
  02d9eac  addic 24, 24, 4
  02d9eb0  addic 23, 23, 4
  02d9eb4  bt 0, 0x2d9e60
  02d9eb8  lis 3, 126
  02d9ebc  li 4, 2
  02d9ec0  addic 6, 3, -12844
  02d9ec4  li 3, 0
  02d9ec8  li 5, 0
  02d9ecc  lwz 7, 4(6)
  02d9ed0  li 6, 1
  02d9ed4  bl 0x502ea8
  02d9ed8  nop
  02d9edc  ori 4, 3, 0
  02d9ee0  li 3, 3
  02d9ee4  bl 0x174f80
  02d9ee8  nop
  02d9eec  lis 3, 268
  02d9ef0  ori 27, 22, 0
  02d9ef4  ori 30, 28, 0
  02d9ef8  addic 22, 3, -29608
  02d9efc  lwz 4, 0(20)
  02d9f00  ori 3, 29, 0
  02d9f04  lwz 5, 0(27)
  02d9f08  ori 6, 22, 0
  02d9f0c  extsw 5, 5
  02d9f10  bl 0xe915c
  02d9f14  nop
  02d9f18  lwz 3, 0(27)
  02d9f1c  lwz 4, 0(19)
  02d9f20  ori 6, 29, 0
  02d9f24  li 7, 9
  02d9f28  lwz 5, 0(21)
  02d9f2c  extsw 3, 3
  02d9f30  bl 0x74604
  02d9f34  nop
  02d9f38  addic 30, 30, 1
  02d9f3c  addic 20, 20, 4
  02d9f40  cmpwi 30, 9
  02d9f44  addic 27, 27, 4
  02d9f48  addic 19, 19, 4
  02d9f4c  addic 21, 21, 4
  02d9f50  bt 0, 0x2d9efc
  02d9f54  cmpwi 31, 0
  02d9f58  bt 2, 0x2da028
  02d9f5c  li 3, 43
  02d9f60  bl 0x685c4
  02d9f64  nop
  02d9f68  ori 4, 3, 0
  02d9f6c  li 3, 24
  02d9f70  bl 0x174f80
  02d9f74  nop
  02d9f78  lis 7, 126
  02d9f7c  li 3, 0
  02d9f80  li 4, 2
  02d9f84  li 5, 0
  02d9f88  li 6, 1
  02d9f8c  lwz 7, -12828(7)
  02d9f90  bl 0x502ea8
  02d9f94  nop
  02d9f98  ori 4, 3, 0
  02d9f9c  li 3, 3
  02d9fa0  bl 0x174f80
  02d9fa4  nop
  02d9fa8  lis 30, 127
  02d9fac  lis 25, 127
  02d9fb0  lis 27, 127
  02d9fb4  lis 31, 268
  02d9fb8  lis 26, 127
  02d9fbc  addic 30, 30, 15628
  02d9fc0  addic 25, 25, 15668
  02d9fc4  addic 27, 27, 6272
  02d9fc8  addic 31, 31, -29600
  02d9fcc  addic 26, 26, 15608
  02d9fd0  lwz 4, 0(30)
  02d9fd4  lwz 5, 0(27)
  02d9fd8  ori 3, 29, 0
  02d9fdc  ori 6, 31, 0
  02d9fe0  extsw 5, 5
  02d9fe4  bl 0xe915c
  02d9fe8  nop
  02d9fec  lwz 3, 0(27)
  02d9ff0  ori 6, 29, 0
  02d9ff4  lwz 4, 0(26)
  02d9ff8  li 7, 9
  02d9ffc  lwz 5, 0(25)
  02da000  extsw 3, 3
  02da004  bl 0x74604
  02da008  nop
  02da00c  addic 28, 28, 1
  02da010  addic 30, 30, 4
  02da014  cmpwi 28, 5
  02da018  addic 27, 27, 4
  02da01c  addic 26, 26, 4
  02da020  addic 25, 25, 4
  02da024  bt 0, 0x2d9fd0
  02da028  ld 0, 256(1)
  02da02c  mtlr 0
  02da030  ld 17, 120(1)
  02da034  ld 18, 128(1)
  02da038  ld 19, 136(1)
  02da03c  ld 20, 144(1)
  02da040  ld 21, 152(1)
  02da044  ld 22, 160(1)
  02da048  ld 23, 168(1)
  02da04c  ld 24, 176(1)
  02da050  ld 25, 184(1)
  02da054  ld 26, 192(1)
  02da058  ld 27, 200(1)
  02da05c  ld 28, 208(1)
  02da060  ld 29, 216(1)
  02da064  ld 30, 224(1)
  02da068  ld 31, 232(1)
  02da06c  addi 1, 1, 240
  02da070  blr

M1919_002da078:   # 0x2da078, 0x220 bytes
  02da078  stdu 1, -288(1)
  02da07c  mflr 0
  02da080  std 0, 304(1)
  02da084  stfd 24, 224(1)
  02da088  stfd 25, 232(1)
  02da08c  stfd 26, 240(1)
  02da090  stfd 27, 248(1)
  02da094  stfd 28, 256(1)
  02da098  stfd 29, 264(1)
  02da09c  stfd 30, 272(1)
  02da0a0  stfd 31, 280(1)
  02da0a4  std 19, 120(1)
  02da0a8  li 19, 0
  02da0ac  cmpwi 4, 0
  02da0b0  std 28, 192(1)
  02da0b4  fmr 28, 1
  02da0b8  std 25, 168(1)
  02da0bc  ori 28, 3, 0
  02da0c0  fmr 29, 2
  02da0c4  std 29, 200(1)
  02da0c8  ori 25, 19, 0
  02da0cc  fmr 30, 3
  02da0d0  std 30, 208(1)
  02da0d4  ori 29, 4, 0
  02da0d8  fmr 31, 4
  02da0dc  std 31, 216(1)
  02da0e0  ori 30, 5, 0
  02da0e4  std 27, 184(1)
  02da0e8  std 26, 176(1)
  02da0ec  std 24, 160(1)
  02da0f0  std 23, 152(1)
  02da0f4  std 22, 144(1)
  02da0f8  std 21, 136(1)
  02da0fc  std 20, 128(1)
  02da100  ori 31, 10, 0
  02da104  bf 1, 0x2da234
  02da108  lis 3, 46
  02da10c  ori 26, 30, 0
  02da110  addi 3, 3, -24460
  02da114  ori 27, 19, 0
  02da118  lfs 24, 0(3)
  02da11c  lwz 3, 0(26)
  02da120  ori 20, 25, 0
  02da124  cmpwi 3, 0
  02da128  bf 1, 0x2da220
  02da12c  ori 24, 25, 0
  02da130  lwzx 3, 28, 27
  02da134  cmpwi 31, 0
  02da138  lwzx 23, 3, 24
  02da13c  clrlwi 3, 23, 24
  02da140  rlwinm 21, 23, 24, 24, 31
  02da144  rlwinm 22, 23, 16, 24, 31
  02da148  srwi 23, 23, 24
  02da14c  bf 2, 0x2da18c
  02da150  bl 0x502730
  02da154  nop
  02da158  ori 3, 21, 0
  02da15c  fmr 27, 1
  02da160  bl 0x502730
  02da164  nop
  02da168  ori 3, 22, 0
  02da16c  fmr 25, 1
  02da170  bl 0x502730
  02da174  nop
  02da178  fmr 26, 1
  02da17c  ori 3, 23, 0
  02da180  bl 0x502730
  02da184  nop
  02da188  b 0x2da1a4
  02da18c  ori 3, 23, 0
  02da190  bl 0x502730
  02da194  nop
  02da198  fmr 25, 24
  02da19c  fmr 26, 25
  02da1a0  fmr 27, 26
  02da1a4  fmuls 2, 27, 28
  02da1a8  fmuls 27, 1, 31
  02da1ac  fmuls 26, 26, 30
  02da1b0  fmuls 25, 25, 29
  02da1b4  fmr 1, 2
  02da1b8  bl 0x502758
  02da1bc  nop
  02da1c0  ori 23, 3, 0
  02da1c4  fmr 1, 27
  02da1c8  bl 0x502758
  02da1cc  nop
  02da1d0  ori 22, 3, 0
  02da1d4  fmr 1, 26
  02da1d8  bl 0x502758
  02da1dc  nop
  02da1e0  slwi 4, 22, 24
  02da1e4  slwi 3, 3, 16
  02da1e8  fmr 1, 25
  02da1ec  addc 22, 4, 3
  02da1f0  bl 0x502758
  02da1f4  nop
  02da1f8  slwi 3, 3, 8
  02da1fc  lwzx 4, 28, 27
  02da200  addic 20, 20, 1
  02da204  addc 3, 22, 3
  02da208  addc 3, 3, 23
  02da20c  stwx 3, 4, 24
  02da210  lwzx 3, 30, 27
  02da214  addic 24, 24, 4
  02da218  cmpw 20, 3
  02da21c  bt 0, 0x2da130
  02da220  addic 19, 19, 1
  02da224  addic 26, 26, 4
  02da228  cmpw 19, 29
  02da22c  addic 27, 27, 4
  02da230  bt 0, 0x2da11c
  02da234  ld 0, 304(1)
  02da238  mtlr 0
  02da23c  lfd 24, 224(1)
  02da240  lfd 25, 232(1)
  02da244  lfd 26, 240(1)
  02da248  lfd 27, 248(1)
  02da24c  lfd 28, 256(1)
  02da250  lfd 29, 264(1)
  02da254  lfd 30, 272(1)
  02da258  lfd 31, 280(1)
  02da25c  ld 19, 120(1)
  02da260  ld 20, 128(1)
  02da264  ld 21, 136(1)
  02da268  ld 22, 144(1)
  02da26c  ld 23, 152(1)
  02da270  ld 24, 160(1)
  02da274  ld 25, 168(1)
  02da278  ld 26, 176(1)
  02da27c  ld 27, 184(1)
  02da280  ld 28, 192(1)
  02da284  ld 29, 200(1)
  02da288  ld 30, 208(1)
  02da28c  ld 31, 216(1)
  02da290  addi 1, 1, 288
  02da294  blr

M1919_002da2c0:   # 0x2da2c0, 0x14c bytes
  02da2c0  lis 5, 114
  02da2c4  lfs 5, 0(6)
  02da2c8  lis 4, 46
  02da2cc  addi 4, 4, -23912
  02da2d0  lfs 4, -3036(5)
  02da2d4  fmadds 5, 4, 1, 5
  02da2d8  lfs 1, 4(6)
  02da2dc  stfs 5, 0(6)
  02da2e0  lfs 4, 0(4)
  02da2e4  fcmpu 0, 5, 4
  02da2e8  cror 6, 0, 2
  02da2ec  bt 6, 0x2da2fc
  02da2f0  lfs 6, 4(4)
  02da2f4  fsubs 5, 5, 6
  02da2f8  stfs 5, 0(6)
  02da2fc  lfs 6, 8(4)
  02da300  fcmpu 0, 5, 6
  02da304  cror 6, 1, 2
  02da308  bt 6, 0x2da318
  02da30c  lfs 7, 4(4)
  02da310  fadds 5, 5, 7
  02da314  stfs 5, 0(6)
  02da318  lis 5, 114
  02da31c  lfs 7, -3036(5)
  02da320  fmadds 1, 7, 2, 1
  02da324  fcmpu 0, 1, 4
  02da328  stfs 1, 4(6)
  02da32c  cror 6, 0, 2
  02da330  bt 6, 0x2da340
  02da334  lfs 2, 4(4)
  02da338  fsubs 1, 1, 2
  02da33c  stfs 1, 4(6)
  02da340  fcmpu 0, 1, 6
  02da344  cror 6, 1, 2
  02da348  bt 6, 0x2da358
  02da34c  lfs 2, 4(4)
  02da350  fadds 1, 1, 2
  02da354  stfs 1, 4(6)
  02da358  lfs 1, 12(4)
  02da35c  lfs 2, 16(4)
  02da360  fmuls 5, 5, 1
  02da364  lfs 4, 20(4)
  02da368  lfs 8, 24(4)
  02da36c  fsubs 6, 2, 5
  02da370  fsubs 7, 4, 5
  02da374  fsub 9, 5, 6
  02da378  fsel 5, 9, 6, 5
  02da37c  lfs 6, 28(4)
  02da380  fsub 9, 7, 5
  02da384  fsel 5, 9, 7, 5
  02da388  lfs 7, 32(4)
  02da38c  lfs 9, 36(4)
  02da390  fmuls 10, 5, 5
  02da394  fmuls 11, 10, 5
  02da398  fmuls 12, 10, 11
  02da39c  fmadds 5, 11, 8, 5
  02da3a0  fmuls 11, 10, 12
  02da3a4  fmadds 5, 12, 6, 5
  02da3a8  fmuls 10, 10, 11
  02da3ac  fmadds 5, 11, 7, 5
  02da3b0  fmadds 5, 10, 9, 5
  02da3b4  fmuls 5, 5, 3
  02da3b8  stfs 5, 0(3)
  02da3bc  lfs 5, 4(6)
  02da3c0  fmuls 1, 5, 1
  02da3c4  fsubs 2, 2, 1
  02da3c8  fsubs 4, 4, 1
  02da3cc  fsub 5, 1, 2
  02da3d0  fsel 1, 5, 2, 1
  02da3d4  fsub 2, 4, 1
  02da3d8  fsel 1, 2, 4, 1
  02da3dc  fmuls 2, 1, 1
  02da3e0  fmuls 4, 2, 1
  02da3e4  fmuls 5, 2, 4
  02da3e8  fmadds 1, 4, 8, 1
  02da3ec  fmuls 4, 2, 5
  02da3f0  fmadds 1, 5, 6, 1
  02da3f4  fmuls 2, 2, 4
  02da3f8  fmadds 1, 4, 7, 1
  02da3fc  fmadds 1, 2, 9, 1
  02da400  fmuls 1, 1, 3
  02da404  stfs 1, 4(3)
  02da408  blr

M1919_002da418:   # 0x2da418, 0xb8 bytes
  02da418  lis 4, 268
  02da41c  sldi 3, 3, 3
  02da420  lis 5, 114
  02da424  lis 6, 126
  02da428  addic 4, 4, -29640
  02da42c  extsw 3, 3
  02da430  addic 6, 6, -12884
  02da434  lfs 3, -3036(5)
  02da438  lis 5, 46
  02da43c  lfsx 4, 4, 3
  02da440  lfsx 1, 6, 3
  02da444  addi 5, 5, -23540
  02da448  fmadds 4, 1, 3, 4
  02da44c  stfsx 4, 4, 3
  02da450  lfs 2, 0(5)
  02da454  fcmpu 0, 4, 2
  02da458  cror 6, 0, 2
  02da45c  bt 6, 0x2da468
  02da460  fsubs 4, 4, 2
  02da464  stfsx 4, 4, 3
  02da468  lis 5, 46
  02da46c  addi 5, 5, -23540
  02da470  lfs 1, 4(5)
  02da474  fcmpu 0, 4, 1
  02da478  cror 6, 1, 2
  02da47c  bt 6, 0x2da488
  02da480  fadds 4, 4, 2
  02da484  stfsx 4, 4, 3
  02da488  lis 5, 126
  02da48c  addc 4, 4, 3
  02da490  addic 5, 5, -12880
  02da494  lfs 4, 4(4)
  02da498  lfsx 5, 5, 3
  02da49c  fmadds 3, 5, 3, 4
  02da4a0  fcmpu 0, 3, 2
  02da4a4  stfs 3, 4(4)
  02da4a8  cror 6, 0, 2
  02da4ac  bt 6, 0x2da4b8
  02da4b0  fsubs 3, 3, 2
  02da4b4  stfs 3, 4(4)
  02da4b8  fcmpu 0, 3, 1
  02da4bc  cror 6, 1, 2
  02da4c0  bt 6, 0x2da4cc
  02da4c4  fadds 1, 3, 2
  02da4c8  stfs 1, 4(4)
  02da4cc  blr

M1919_002da4d8:   # 0x2da4d8, 0xb8 bytes
  02da4d8  lis 4, 268
  02da4dc  sldi 3, 3, 3
  02da4e0  lis 5, 114
  02da4e4  lis 6, 126
  02da4e8  addic 4, 4, -29616
  02da4ec  extsw 3, 3
  02da4f0  addic 6, 6, -12860
  02da4f4  lfs 3, -3036(5)
  02da4f8  lis 5, 46
  02da4fc  lfsx 4, 4, 3
  02da500  lfsx 1, 6, 3
  02da504  addi 5, 5, -23344
  02da508  fmadds 4, 1, 3, 4
  02da50c  stfsx 4, 4, 3
  02da510  lfs 2, 0(5)
  02da514  fcmpu 0, 4, 2
  02da518  cror 6, 0, 2
  02da51c  bt 6, 0x2da528
  02da520  fsubs 4, 4, 2
  02da524  stfsx 4, 4, 3
  02da528  lis 5, 46
  02da52c  addi 5, 5, -23344
  02da530  lfs 1, 4(5)
  02da534  fcmpu 0, 4, 1
  02da538  cror 6, 1, 2
  02da53c  bt 6, 0x2da548
  02da540  fadds 4, 4, 2
  02da544  stfsx 4, 4, 3
  02da548  lis 5, 126
  02da54c  addc 4, 4, 3
  02da550  addic 5, 5, -12856
  02da554  lfs 4, 4(4)
  02da558  lfsx 5, 5, 3
  02da55c  fmadds 3, 5, 3, 4
  02da560  fcmpu 0, 3, 2
  02da564  stfs 3, 4(4)
  02da568  cror 6, 0, 2
  02da56c  bt 6, 0x2da578
  02da570  fsubs 3, 3, 2
  02da574  stfs 3, 4(4)
  02da578  fcmpu 0, 3, 1
  02da57c  cror 6, 1, 2
  02da580  bt 6, 0x2da58c
  02da584  fadds 1, 3, 2
  02da588  stfs 1, 4(4)
  02da58c  blr

M1919_002da598:   # 0x2da598, 0xb8 bytes
  02da598  lis 4, 268
  02da59c  sldi 3, 3, 3
  02da5a0  lis 5, 114
  02da5a4  lis 6, 126
  02da5a8  addic 4, 4, -29600
  02da5ac  extsw 3, 3
  02da5b0  addic 6, 6, -12836
  02da5b4  lfs 3, -3036(5)
  02da5b8  lis 5, 46
  02da5bc  lfsx 4, 4, 3
  02da5c0  lfsx 1, 6, 3
  02da5c4  addi 5, 5, -23152
  02da5c8  fmadds 4, 1, 3, 4
  02da5cc  stfsx 4, 4, 3
  02da5d0  lfs 2, 0(5)
  02da5d4  fcmpu 0, 4, 2
  02da5d8  cror 6, 0, 2
  02da5dc  bt 6, 0x2da5e8
  02da5e0  fsubs 4, 4, 2
  02da5e4  stfsx 4, 4, 3
  02da5e8  lis 5, 46
  02da5ec  addi 5, 5, -23152
  02da5f0  lfs 1, 4(5)
  02da5f4  fcmpu 0, 4, 1
  02da5f8  cror 6, 1, 2
  02da5fc  bt 6, 0x2da608
  02da600  fadds 4, 4, 2
  02da604  stfsx 4, 4, 3
  02da608  lis 5, 126
  02da60c  addc 4, 4, 3
  02da610  addic 5, 5, -12832
  02da614  lfs 4, 4(4)
  02da618  lfsx 5, 5, 3
  02da61c  fmadds 3, 5, 3, 4
  02da620  fcmpu 0, 3, 2
  02da624  stfs 3, 4(4)
  02da628  cror 6, 0, 2
  02da62c  bt 6, 0x2da638
  02da630  fsubs 3, 3, 2
  02da634  stfs 3, 4(4)
  02da638  fcmpu 0, 3, 1
  02da63c  cror 6, 1, 2
  02da640  bt 6, 0x2da64c
  02da644  fadds 1, 3, 2
  02da648  stfs 1, 4(4)
  02da64c  blr

UpdateMoby_1919:   # 0x2da688, 0x350 bytes
  02da688  stdu 1, -176(1)
  02da68c  mflr 0
  02da690  std 0, 192(1)
  02da694  stfd 29, 152(1)
  02da698  stfd 30, 160(1)
  02da69c  stfd 31, 168(1)
  02da6a0  std 31, 144(1)
  02da6a4  ori 31, 3, 0
  02da6a8  lbz 3, 32(3)
  02da6ac  cmpwi 3, 0
  02da6b0  cmpwi 1, 3, 1
  02da6b4  std 30, 136(1)
  02da6b8  std 29, 128(1)
  02da6bc  cmpwi 6, 3, -1
  02da6c0  bt 1, 0x2da6cc
  02da6c4  bf 25, 0x2da9b0
  02da6c8  b 0x2da6d4
  02da6cc  bf 5, 0x2da81c
  02da6d0  b 0x2da9b0
  02da6d4  lis 3, 268
  02da6d8  lwz 3, -29644(3)
  02da6dc  cmpwi 3, 0
  02da6e0  bf 2, 0x2da788
  02da6e4  lis 3, 46
  02da6e8  lis 5, 126
  02da6ec  addi 30, 3, -22960
  02da6f0  lis 3, 127
  02da6f4  addic 5, 5, 16272
  02da6f8  addic 3, 3, 6204
  02da6fc  li 4, 17
  02da700  lfs 31, 0(30)
  02da704  li 10, 1
  02da708  lfs 30, 4(30)
  02da70c  lfs 29, 12(30)
  02da710  lfs 3, 8(30)
  02da714  fmr 1, 31
  02da718  fmr 2, 30
  02da71c  fmr 4, 29
  02da720  bl 0x2da078
  02da724  lis 3, 127
  02da728  fmr 1, 29
  02da72c  lis 5, 127
  02da730  fmr 2, 29
  02da734  addic 3, 3, 15668
  02da738  fmr 3, 29
  02da73c  li 4, 5
  02da740  fmr 4, 30
  02da744  li 10, 1
  02da748  addic 5, 5, 6272
  02da74c  bl 0x2da078
  02da750  lis 3, 126
  02da754  lfs 1, 16(30)
  02da758  lis 5, 126
  02da75c  fmr 4, 31
  02da760  addic 3, 3, 16236
  02da764  fmr 2, 1
  02da768  li 10, 1
  02da76c  fmr 3, 1
  02da770  addic 5, 5, -12824
  02da774  li 4, 9
  02da778  bl 0x2da078
  02da77c  lis 3, 268
  02da780  li 4, 1
  02da784  stw 4, -29644(3)
  02da788  lis 3, 268
  02da78c  li 8, 1
  02da790  vspltisw 2, 0
  02da794  li 4, 0
  02da798  addic 6, 3, -29640
  02da79c  lis 5, 268
  02da7a0  stb 8, 32(31)
  02da7a4  stw 4, -29640(3)
  02da7a8  addic 9, 5, -29592
  02da7ac  lis 7, 268
  02da7b0  stw 4, 4(6)
  02da7b4  stw 4, 8(6)
  02da7b8  lis 10, 268
  02da7bc  stw 4, 12(6)
  02da7c0  li 11, -29612
  02da7c4  lis 3, 46
  02da7c8  stw 4, 16(6)
  02da7cc  addic 8, 7, -29616
  02da7d0  stw 4, 20(6)
  02da7d4  addi 3, 3, -22960
  02da7d8  stw 4, -29592(5)
  02da7dc  li 31, 20
  02da7e0  stw 4, 4(9)
  02da7e4  stw 4, -29616(7)
  02da7e8  addic 12, 10, -29612
  02da7ec  stvewx 2, 11, 10
  02da7f0  lis 6, 268
  02da7f4  stw 4, 8(8)
  02da7f8  addic 5, 12, 8
  02da7fc  li 7, -29596
  02da800  <unknown>
  02da804  lis 3, 268
  02da808  vspltw 3, 3, 0
  02da80c  stvewx 3, 0, 5
  02da810  stw 4, -29600(6)
  02da814  stvewx 2, 7, 3
  02da818  b 0x2da9b0
  02da81c  lis 29, 149
  02da820  lis 3, 17194
  02da824  addic 29, 29, 5056
  02da828  lwz 4, 328(29)
  02da82c  srawi 5, 4, 31
  02da830  srwi 6, 5, 1
  02da834  xor 4, 6, 4
  02da838  subc 4, 4, 5
  02da83c  cmpw 4, 3
  02da840  bt 0, 0x2da9b0
  02da844  lis 3, 126
  02da848  lis 4, 46
  02da84c  addic 30, 3, -12912
  02da850  addi 4, 4, -22960
  02da854  lfs 1, -12912(3)
  02da858  addic 3, 1, 112
  02da85c  lfs 2, 4(30)
  02da860  stfs 1, 112(1)
  02da864  lfs 1, 8(30)
  02da868  stfs 2, 116(1)
  02da86c  lfs 2, 12(30)
  02da870  stfs 1, 120(1)
  02da874  stfs 2, 124(1)
  02da878  lfs 1, 24(4)
  02da87c  bl 0x502910
  02da880  nop
  02da884  cmpwi 3, 0
  02da888  bt 0, 0x2da9b0
  02da88c  lwz 4, 328(29)
  02da890  lis 3, 17204
  02da894  lfs 30, 328(29)
  02da898  srawi 5, 4, 31
  02da89c  srwi 6, 5, 1
  02da8a0  xor 4, 6, 4
  02da8a4  subc 4, 4, 5
  02da8a8  cmpw 4, 3
  02da8ac  bf 1, 0x2da9b0
  02da8b0  lfs 1, 4(30)
  02da8b4  lfs 2, 324(29)
  02da8b8  lis 3, 126
  02da8bc  fsubs 1, 2, 1
  02da8c0  lfs 3, -12912(3)
  02da8c4  lfs 2, 320(29)
  02da8c8  lfs 4, 8(30)
  02da8cc  fsubs 2, 2, 3
  02da8d0  fsubs 3, 30, 4
  02da8d4  fmuls 1, 1, 1
  02da8d8  lis 3, 46
  02da8dc  addi 3, 3, -22960
  02da8e0  fmadds 1, 2, 2, 1
  02da8e4  lfs 31, 28(3)
  02da8e8  fmadds 30, 3, 3, 1
  02da8ec  fsqrts 30, 30
  02da8f0  fcmpu 0, 30, 31
  02da8f4  bt 1, 0x2da984
  02da8f8  li 3, 0
  02da8fc  bl 0x2da418
  02da900  lis 3, 46
  02da904  lis 4, 268
  02da908  addi 30, 3, -22960
  02da90c  addic 3, 4, -29640
  02da910  lis 6, 268
  02da914  addic 3, 3, 8
  02da918  addic 6, 6, -29592
  02da91c  lfs 1, 32(30)
  02da920  lfs 2, 36(30)
  02da924  lfs 3, 40(30)
  02da928  bl 0x2da2c0
  02da92c  li 3, 2
  02da930  bl 0x2da418
  02da934  lfs 1, 44(30)
  02da938  li 3, 255
  02da93c  fcmpu 0, 30, 1
  02da940  bt 0, 0x2da97c
  02da944  fcmpu 0, 30, 31
  02da948  li 3, 0
  02da94c  cror 6, 1, 2
  02da950  bt 6, 0x2da97c
  02da954  lis 3, 46
  02da958  fsubs 1, 30, 1
  02da95c  addi 3, 3, -22960
  02da960  lfs 2, 48(3)
  02da964  lfs 3, 4(3)
  02da968  lfs 4, 52(3)
  02da96c  fnmsubs 1, 1, 2, 3
  02da970  fmuls 1, 1, 4
  02da974  bl 0x502758
  02da978  nop
  02da97c  lis 4, 268
  02da980  stb 3, -29648(4)
  02da984  li 3, 0
  02da988  bl 0x2da598
  02da98c  li 3, 0
  02da990  bl 0x2da4d8
  02da994  li 3, 1
  02da998  bl 0x2da4d8
  02da99c  lis 3, 113
  02da9a0  ori 4, 31, 0
  02da9a4  addic 3, 3, -19288
  02da9a8  bl 0x6d720
  02da9ac  nop
  02da9b0  ld 0, 192(1)
  02da9b4  mtlr 0
  02da9b8  lfd 29, 152(1)
  02da9bc  lfd 30, 160(1)
  02da9c0  lfd 31, 168(1)
  02da9c4  ld 29, 128(1)
  02da9c8  ld 30, 136(1)
  02da9cc  ld 31, 144(1)
  02da9d0  addi 1, 1, 176
  02da9d4  blr

M1919_002da9d8:   # 0x2da9d8, 0x14 bytes
  02da9d8  lis 3, 127
  02da9dc  lis 4, 1
  02da9e0  addic 3, 3, 15692
  02da9e4  stw 4, 72(3)
  02da9e8  blr
