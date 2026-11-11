# game/update/moby224.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002f9610:   # 0x2f9610, 0xa4 bytes
  02f9610  stdu 1, -128(1)
  02f9614  mflr 0
  02f9618  std 0, 144(1)
  02f961c  std 31, 120(1)
  02f9620  ori 31, 3, 0
  02f9624  std 30, 112(1)
  02f9628  ori 3, 4, 0
  02f962c  bl 0xefa28
  02f9630  nop
  02f9634  ori 30, 3, 0
  02f9638  cmpwi 30, 0
  02f963c  bt 2, 0x2f9698
  02f9640  li 4, 255
  02f9644  li 5, 1
  02f9648  li 6, 0
  02f964c  ori 3, 30, 0
  02f9650  stb 4, 48(30)
  02f9654  stb 5, 49(30)
  02f9658  stb 6, 32(30)
  02f965c  stb 6, 188(30)
  02f9660  lfs 1, 0(31)
  02f9664  sth 4, 50(30)
  02f9668  stfs 1, 16(30)
  02f966c  lfs 1, 4(31)
  02f9670  stfs 1, 20(30)
  02f9674  lfs 1, 8(31)
  02f9678  stfs 1, 24(30)
  02f967c  lfs 1, 12(31)
  02f9680  stfs 1, 28(30)
  02f9684  bl 0xf31a8
  02f9688  nop
  02f968c  ori 3, 30, 0
  02f9690  bl 0x10c000
  02f9694  nop
  02f9698  ori 3, 30, 0
  02f969c  ld 0, 144(1)
  02f96a0  mtlr 0
  02f96a4  ld 30, 112(1)
  02f96a8  ld 31, 120(1)
  02f96ac  addi 1, 1, 128
  02f96b0  blr

UpdateMoby_224:   # 0x2f96f8, 0x838 bytes
  02f96f8  stdu 1, -192(1)
  02f96fc  mflr 0
  02f9700  std 0, 208(1)
  02f9704  stfd 31, 184(1)
  02f9708  std 31, 176(1)
  02f970c  ori 31, 3, 0
  02f9710  std 28, 152(1)
  02f9714  lis 4, 48
  02f9718  lis 28, 151
  02f971c  addi 4, 4, -26956
  02f9720  std 30, 168(1)
  02f9724  addic 28, 28, -25376
  02f9728  std 29, 160(1)
  02f972c  lwz 30, 120(31)
  02f9730  li 29, 0
  02f9734  std 26, 136(1)
  02f9738  lbz 3, 32(31)
  02f973c  ori 26, 29, 0
  02f9740  lfs 31, 0(4)
  02f9744  cmpwi 3, 6
  02f9748  std 27, 144(1)
  02f974c  cmpwi 1, 3, 5
  02f9750  lwz 27, 5616(28)
  02f9754  cmpwi 6, 3, 4
  02f9758  std 25, 128(1)
  02f975c  cmpwi 7, 3, 3
  02f9760  bt 2, 0x2f9d80
  02f9764  bt 6, 0x2f9d0c
  02f9768  bt 26, 0x2f9904
  02f976c  bt 30, 0x2f9880
  02f9770  cmpwi 3, 2
  02f9774  bt 2, 0x2f981c
  02f9778  cmpwi 3, 1
  02f977c  bt 2, 0x2f97e8
  02f9780  cmpwi 3, 0
  02f9784  bf 2, 0x2f9de0
  02f9788  lbz 3, 12(30)
  02f978c  cmpwi 3, 0
  02f9790  bt 2, 0x2f97ac
  02f9794  lwz 4, 36(31)
  02f9798  li 3, 4
  02f979c  lfs 1, 36(4)
  02f97a0  stb 3, 32(31)
  02f97a4  stfs 1, 44(31)
  02f97a8  b 0x2f9de0
  02f97ac  lis 3, 48
  02f97b0  lhz 4, 52(31)
  02f97b4  stw 29, 148(31)
  02f97b8  addi 3, 3, -26956
  02f97bc  stb 29, 49(31)
  02f97c0  ori 4, 4, 1
  02f97c4  lwz 5, 36(31)
  02f97c8  sth 4, 52(31)
  02f97cc  lfs 1, 4(3)
  02f97d0  lfs 2, 36(5)
  02f97d4  li 3, 1
  02f97d8  fmuls 1, 2, 1
  02f97dc  stb 3, 32(31)
  02f97e0  stfs 1, 44(31)
  02f97e4  b 0x2f9de0
  02f97e8  li 3, -1
  02f97ec  lwz 6, 0(30)
  02f97f0  li 4, 3
  02f97f4  subc 3, 3, 6
  02f97f8  li 5, 2
  02f97fc  cntlzw 3, 3
  02f9800  subc 4, 4, 5
  02f9804  sldi 3, 3, 58
  02f9808  sradi 3, 3, 63
  02f980c  and 3, 3, 4
  02f9810  addc 3, 5, 3
  02f9814  stb 3, 32(31)
  02f9818  b 0x2f9de0
  02f981c  lis 3, 164
  02f9820  lwz 5, 0(30)
  02f9824  li 4, 3
  02f9828  slwi 5, 5, 8
  02f982c  lwz 3, -28512(3)
  02f9830  addc 3, 3, 5
  02f9834  clrldi 3, 3, 32
  02f9838  cmpwi 3, 0
  02f983c  bt 2, 0x2f9854
  02f9840  lbz 3, 32(3)
  02f9844  cmpwi 3, 254
  02f9848  cmpwi 1, 3, 253
  02f984c  bt 2, 0x2f9854
  02f9850  bf 6, 0x2f985c
  02f9854  stb 4, 32(31)
  02f9858  b 0x2f9de0
  02f985c  lwz 5, 4(30)
  02f9860  cmpwi 5, -1
  02f9864  cmpw 1, 3, 5
  02f9868  bf 2, 0x2f9874
  02f986c  stb 4, 32(31)
  02f9870  b 0x2f9de0
  02f9874  bf 6, 0x2f9de0
  02f9878  stb 4, 32(31)
  02f987c  b 0x2f9de0
  02f9880  lwz 3, 8(30)
  02f9884  cmpwi 3, -1
  02f9888  bf 2, 0x2f9898
  02f988c  li 3, 4
  02f9890  stb 3, 32(31)
  02f9894  b 0x2f98c8
  02f9898  addic 3, 30, 16
  02f989c  bl 0x4fff60
  02f98a0  nop
  02f98a4  ori 4, 3, 0
  02f98a8  lbz 3, 32(31)
  02f98ac  cmpwi 4, 0
  02f98b0  bt 2, 0x2f98c0
  02f98b4  li 3, 4
  02f98b8  stb 3, 32(31)
  02f98bc  b 0x2f98c8
  02f98c0  cmpwi 3, 4
  02f98c4  bf 2, 0x2f9de0
  02f98c8  lwz 5, 36(31)
  02f98cc  li 3, 1
  02f98d0  lis 4, 48
  02f98d4  lhz 6, 52(31)
  02f98d8  addi 4, 4, -26956
  02f98dc  rlwinm 6, 6, 0, 0, 30
  02f98e0  lwz 7, 16(5)
  02f98e4  stb 3, 49(31)
  02f98e8  stw 7, 148(31)
  02f98ec  sth 6, 52(31)
  02f98f0  lfs 1, 4(4)
  02f98f4  lfs 2, 36(5)
  02f98f8  fmuls 1, 2, 1
  02f98fc  stfs 1, 44(31)
  02f9900  b 0x2f9de0
  02f9904  lis 3, 48
  02f9908  lfs 1, 72(31)
  02f990c  addi 25, 3, -26956
  02f9910  lis 3, 114
  02f9914  lfs 2, 8(25)
  02f9918  lfs 3, -3052(3)
  02f991c  fmuls 2, 3, 2
  02f9920  bl 0x502578
  02f9924  nop
  02f9928  lwz 3, 16(31)
  02f992c  lis 5, 16800
  02f9930  stfs 1, 72(31)
  02f9934  srawi 4, 3, 31
  02f9938  lwz 6, 20(31)
  02f993c  srwi 7, 4, 1
  02f9940  lfs 2, 16(31)
  02f9944  srawi 8, 6, 31
  02f9948  xor 3, 7, 3
  02f994c  lwz 9, 24(31)
  02f9950  srwi 7, 8, 1
  02f9954  lfs 1, 12(25)
  02f9958  subc 3, 3, 4
  02f995c  lfs 3, 20(31)
  02f9960  srawi 10, 9, 31
  02f9964  lfs 4, 24(31)
  02f9968  xor 4, 7, 6
  02f996c  srwi 6, 10, 1
  02f9970  cmpw 3, 5
  02f9974  xor 6, 6, 9
  02f9978  subc 4, 4, 8
  02f997c  subc 3, 6, 10
  02f9980  bf 0, 0x2f9990
  02f9984  lis 5, 16800
  02f9988  fmr 2, 1
  02f998c  stw 5, 16(31)
  02f9990  fmr 5, 2
  02f9994  lis 5, 48
  02f9998  addi 5, 5, -26956
  02f999c  lfs 2, 16(5)
  02f99a0  fcmpu 0, 5, 2
  02f99a4  cror 6, 0, 2
  02f99a8  bt 6, 0x2f99b8
  02f99ac  lis 5, 17530
  02f99b0  ori 5, 5, 49152
  02f99b4  stw 5, 16(31)
  02f99b8  lis 5, 16800
  02f99bc  cmpw 4, 5
  02f99c0  bf 0, 0x2f99d0
  02f99c4  lis 4, 16800
  02f99c8  fmr 3, 1
  02f99cc  stw 4, 20(31)
  02f99d0  fcmpu 0, 3, 2
  02f99d4  cror 6, 0, 2
  02f99d8  bt 6, 0x2f99e8
  02f99dc  lis 4, 17530
  02f99e0  ori 4, 4, 49152
  02f99e4  stw 4, 20(31)
  02f99e8  lis 4, 16800
  02f99ec  fmr 3, 4
  02f99f0  cmpw 3, 4
  02f99f4  bf 0, 0x2f9a04
  02f99f8  lis 3, 16800
  02f99fc  fmr 3, 1
  02f9a00  stw 3, 24(31)
  02f9a04  fcmpu 0, 3, 2
  02f9a08  cror 6, 0, 2
  02f9a0c  bt 6, 0x2f9a1c
  02f9a10  lis 3, 17530
  02f9a14  ori 3, 3, 49152
  02f9a18  stw 3, 24(31)
  02f9a1c  addic 25, 1, 112
  02f9a20  li 4, 0
  02f9a24  ori 3, 31, 0
  02f9a28  ori 5, 25, 0
  02f9a2c  bl 0xf1114
  02f9a30  nop
  02f9a34  lwz 4, 36(31)
  02f9a38  lfs 1, 44(31)
  02f9a3c  lis 5, 48
  02f9a40  ori 3, 25, 0
  02f9a44  addi 7, 5, -26956
  02f9a48  li 5, 1
  02f9a4c  lfs 2, 36(4)
  02f9a50  ori 6, 31, 0
  02f9a54  fsubs 2, 2, 1
  02f9a58  lfs 3, 4(7)
  02f9a5c  fmadds 1, 2, 3, 1
  02f9a60  stfs 1, 44(31)
  02f9a64  lfs 1, 20(7)
  02f9a68  bl 0x59e20
  02f9a6c  nop
  02f9a70  cmpwi 3, 0
  02f9a74  bt 2, 0x2f9aac
  02f9a78  lis 3, 161
  02f9a7c  addic 3, 3, 2368
  02f9a80  lwz 3, 24(3)
  02f9a84  cmpwi 3, 0
  02f9a88  bt 2, 0x2f9aac
  02f9a8c  lhz 3, 166(3)
  02f9a90  cmpwi 1, 3, 69
  02f9a94  cmpwi 3, 1242
  02f9a98  cror 2, 2, 6
  02f9a9c  bt 2, 0x2f9aa8
  02f9aa0  cmpwi 3, 1379
  02f9aa4  bf 2, 0x2f9aac
  02f9aa8  li 29, 1
  02f9aac  lwz 3, 8324(28)
  02f9ab0  cmpwi 3, 50
  02f9ab4  bf 2, 0x2f9b24
  02f9ab8  cmpwi 27, 0
  02f9abc  bt 2, 0x2f9b24
  02f9ac0  lbz 3, 32(27)
  02f9ac4  cmpwi 1, 3, 253
  02f9ac8  cmpwi 3, 254
  02f9acc  cror 2, 2, 6
  02f9ad0  bt 2, 0x2f9b24
  02f9ad4  lhz 3, 166(27)
  02f9ad8  cmpwi 1, 3, 69
  02f9adc  cmpwi 3, 1242
  02f9ae0  cror 2, 2, 6
  02f9ae4  bt 2, 0x2f9af0
  02f9ae8  cmpwi 3, 1379
  02f9aec  bf 2, 0x2f9b24
  02f9af0  lfs 1, 20(27)
  02f9af4  lfs 2, 20(31)
  02f9af8  lfs 3, 16(27)
  02f9afc  fsubs 1, 1, 2
  02f9b00  lfs 2, 16(31)
  02f9b04  fsubs 2, 3, 2
  02f9b08  lfs 3, 24(27)
  02f9b0c  lfs 4, 24(31)
  02f9b10  fsubs 3, 3, 4
  02f9b14  fmuls 1, 1, 1
  02f9b18  fmadds 1, 2, 2, 1
  02f9b1c  fmadds 31, 3, 3, 1
  02f9b20  fsqrts 31, 31
  02f9b24  cmpwi 29, 0
  02f9b28  bf 2, 0x2f9b44
  02f9b2c  lis 3, 48
  02f9b30  addi 3, 3, -26956
  02f9b34  lfs 1, 24(3)
  02f9b38  fcmpu 0, 31, 1
  02f9b3c  cror 6, 1, 2
  02f9b40  bt 6, 0x2f9c40
  02f9b44  lhz 3, 166(31)
  02f9b48  stw 26, 148(31)
  02f9b4c  extsh 3, 3
  02f9b50  cmpwi 3, 224
  02f9b54  cmpwi 1, 3, 223
  02f9b58  cmpwi 6, 3, 228
  02f9b5c  bt 1, 0x2f9b68
  02f9b60  bf 5, 0x2f9c34
  02f9b64  b 0x2f9b70
  02f9b68  bt 26, 0x2f9bcc
  02f9b6c  b 0x2f9c34
  02f9b70  lbz 4, 5622(28)
  02f9b74  lwz 3, 5616(28)
  02f9b78  addic 4, 4, 5
  02f9b7c  cmpwi 3, 0
  02f9b80  stb 4, 5622(28)
  02f9b84  bt 2, 0x2f9bb4
  02f9b88  lbz 5, 32(3)
  02f9b8c  cmpwi 1, 5, 253
  02f9b90  cmpwi 5, 254
  02f9b94  cror 2, 2, 6
  02f9b98  bt 2, 0x2f9bb4
  02f9b9c  ori 5, 3, 0
  02f9ba0  li 4, 0
  02f9ba4  li 3, 4
  02f9ba8  bl 0x15d12c
  02f9bac  nop
  02f9bb0  lbz 4, 5622(28)
  02f9bb4  clrlwi 3, 4, 24
  02f9bb8  lbz 4, 5623(28)
  02f9bbc  cmpw 3, 4
  02f9bc0  bf 1, 0x2f9c34
  02f9bc4  stb 4, 5622(28)
  02f9bc8  b 0x2f9c34
  02f9bcc  lis 3, 48
  02f9bd0  lfs 1, 5628(28)
  02f9bd4  addi 3, 3, -26956
  02f9bd8  lfs 2, 28(3)
  02f9bdc  lwz 3, 5616(28)
  02f9be0  fadds 1, 1, 2
  02f9be4  cmpwi 3, 0
  02f9be8  stfs 1, 5628(28)
  02f9bec  bt 2, 0x2f9c1c
  02f9bf0  lbz 4, 32(3)
  02f9bf4  cmpwi 1, 4, 253
  02f9bf8  cmpwi 4, 254
  02f9bfc  cror 2, 2, 6
  02f9c00  bt 2, 0x2f9c1c
  02f9c04  ori 5, 3, 0
  02f9c08  li 3, 5
  02f9c0c  li 4, 0
  02f9c10  bl 0x15d12c
  02f9c14  nop
  02f9c18  lfs 1, 5628(28)
  02f9c1c  fmr 2, 1
  02f9c20  lfs 1, 5632(28)
  02f9c24  fcmpu 0, 2, 1
  02f9c28  cror 6, 0, 2
  02f9c2c  bt 6, 0x2f9c34
  02f9c30  stfs 1, 5628(28)
  02f9c34  li 3, 5
  02f9c38  stb 3, 32(31)
  02f9c3c  b 0x2f9de0
  02f9c40  lis 3, 48
  02f9c44  addi 3, 3, -26956
  02f9c48  lfs 1, 32(3)
  02f9c4c  fcmpu 0, 31, 1
  02f9c50  cror 6, 1, 2
  02f9c54  bt 6, 0x2f9de0
  02f9c58  lbz 3, 49(31)
  02f9c5c  cmpwi 3, 0
  02f9c60  bt 2, 0x2f9de0
  02f9c64  fsqrts 1, 31
  02f9c68  lfs 2, 20(27)
  02f9c6c  lfs 3, 20(31)
  02f9c70  lfs 4, 16(27)
  02f9c74  lis 3, 48
  02f9c78  lfs 5, 16(31)
  02f9c7c  lfs 6, 24(27)
  02f9c80  lfs 7, 24(31)
  02f9c84  addi 3, 3, -26956
  02f9c88  lfs 8, 36(3)
  02f9c8c  fsubs 2, 2, 3
  02f9c90  fsubs 4, 4, 5
  02f9c94  fsubs 6, 6, 7
  02f9c98  fmuls 9, 2, 2
  02f9c9c  fmadds 9, 4, 4, 9
  02f9ca0  fmadds 9, 6, 6, 9
  02f9ca4  fdivs 1, 8, 1
  02f9ca8  fsqrts 8, 9
  02f9cac  lfs 9, 40(3)
  02f9cb0  fdivs 1, 1, 8
  02f9cb4  fsub 10, 9, 8
  02f9cb8  fsub 11, 9, 8
  02f9cbc  fsub 12, 9, 8
  02f9cc0  fsub 13, 8, 9
  02f9cc4  fsub 0, 8, 9
  02f9cc8  fsub 8, 8, 9
  02f9ccc  fmuls 6, 1, 6
  02f9cd0  fmuls 2, 1, 2
  02f9cd4  fmuls 1, 1, 4
  02f9cd8  fsel 4, 10, 9, 6
  02f9cdc  fsel 10, 11, 9, 2
  02f9ce0  fsel 9, 12, 9, 1
  02f9ce4  fsel 4, 13, 4, 6
  02f9ce8  fsel 2, 0, 10, 2
  02f9cec  fsel 1, 8, 9, 1
  02f9cf0  fadds 4, 7, 4
  02f9cf4  fadds 2, 3, 2
  02f9cf8  fadds 1, 5, 1
  02f9cfc  stfs 4, 24(31)
  02f9d00  stfs 2, 20(31)
  02f9d04  stfs 1, 16(31)
  02f9d08  b 0x2f9de0
  02f9d0c  lis 3, 48
  02f9d10  addi 29, 3, -26956
  02f9d14  lwz 3, 36(31)
  02f9d18  lfs 1, 44(31)
  02f9d1c  lfs 2, 20(29)
  02f9d20  lfs 3, 72(31)
  02f9d24  lfs 4, 36(3)
  02f9d28  fsubs 4, 4, 1
  02f9d2c  fmr 1, 3
  02f9d30  fmuls 2, 4, 2
  02f9d34  bl 0x502578
  02f9d38  nop
  02f9d3c  stfs 1, 72(31)
  02f9d40  lfs 1, 44(29)
  02f9d44  lwz 3, 36(31)
  02f9d48  lfs 2, 44(31)
  02f9d4c  lfs 3, 48(29)
  02f9d50  lfs 4, 36(3)
  02f9d54  fmsubs 1, 4, 1, 2
  02f9d58  fmadds 1, 1, 3, 2
  02f9d5c  stfs 1, 44(31)
  02f9d60  lfs 2, 52(29)
  02f9d64  fmuls 2, 4, 2
  02f9d68  fcmpu 0, 1, 2
  02f9d6c  cror 6, 1, 2
  02f9d70  bt 6, 0x2f9de0
  02f9d74  li 3, 6
  02f9d78  stb 3, 32(31)
  02f9d7c  b 0x2f9de0
  02f9d80  lbz 3, 13(30)
  02f9d84  cmpwi 3, 0
  02f9d88  bt 2, 0x2f9dd0
  02f9d8c  lis 3, 48
  02f9d90  lhz 4, 52(31)
  02f9d94  stw 29, 148(31)
  02f9d98  addi 3, 3, -26956
  02f9d9c  stb 29, 49(31)
  02f9da0  ori 4, 4, 1
  02f9da4  lwz 5, 36(31)
  02f9da8  sth 4, 52(31)
  02f9dac  lfs 1, 4(3)
  02f9db0  lfs 2, 36(5)
  02f9db4  li 4, 1
  02f9db8  lwz 3, 8(30)
  02f9dbc  fmuls 1, 2, 1
  02f9dc0  stfs 1, 44(31)
  02f9dc4  stw 3, 16(30)
  02f9dc8  stb 4, 32(31)
  02f9dcc  b 0x2f9de0
  02f9dd0  ori 3, 31, 0
  02f9dd4  bl 0xefb38
  02f9dd8  nop
  02f9ddc  b 0x2f9f00
  02f9de0  lis 3, 48
  02f9de4  lis 6, 114
  02f9de8  addi 29, 3, -26956
  02f9dec  ori 3, 31, 0
  02f9df0  addic 4, 30, 24
  02f9df4  addic 5, 30, 20
  02f9df8  lfs 3, 60(29)
  02f9dfc  lfs 1, 56(29)
  02f9e00  lfs 4, -3052(6)
  02f9e04  fmuls 2, 4, 3
  02f9e08  bl 0x116a68
  02f9e0c  nop
  02f9e10  lwz 3, 16(31)
  02f9e14  lwz 4, 20(31)
  02f9e18  lis 9, 16800
  02f9e1c  srawi 5, 3, 31
  02f9e20  lfs 2, 16(31)
  02f9e24  srawi 8, 4, 31
  02f9e28  lwz 7, 24(31)
  02f9e2c  srwi 6, 5, 1
  02f9e30  lfs 1, 12(29)
  02f9e34  srawi 30, 7, 31
  02f9e38  lfs 3, 20(31)
  02f9e3c  xor 3, 6, 3
  02f9e40  lfs 4, 24(31)
  02f9e44  srwi 6, 8, 1
  02f9e48  subc 5, 3, 5
  02f9e4c  xor 3, 6, 4
  02f9e50  srwi 4, 30, 1
  02f9e54  cmpw 5, 9
  02f9e58  xor 4, 4, 7
  02f9e5c  subc 3, 3, 8
  02f9e60  subc 30, 4, 30
  02f9e64  bf 0, 0x2f9e74
  02f9e68  lis 4, 16800
  02f9e6c  fmr 2, 1
  02f9e70  stw 4, 16(31)
  02f9e74  fmr 5, 2
  02f9e78  lis 4, 48
  02f9e7c  addi 4, 4, -26956
  02f9e80  lfs 2, 16(4)
  02f9e84  fcmpu 0, 5, 2
  02f9e88  cror 6, 0, 2
  02f9e8c  bt 6, 0x2f9e9c
  02f9e90  lis 4, 17530
  02f9e94  ori 4, 4, 49152
  02f9e98  stw 4, 16(31)
  02f9e9c  lis 4, 16800
  02f9ea0  cmpw 3, 4
  02f9ea4  bf 0, 0x2f9eb4
  02f9ea8  lis 3, 16800
  02f9eac  fmr 3, 1
  02f9eb0  stw 3, 20(31)
  02f9eb4  fcmpu 0, 3, 2
  02f9eb8  cror 6, 0, 2
  02f9ebc  bt 6, 0x2f9ecc
  02f9ec0  lis 3, 17530
  02f9ec4  ori 3, 3, 49152
  02f9ec8  stw 3, 20(31)
  02f9ecc  lis 3, 16800
  02f9ed0  fmr 3, 4
  02f9ed4  cmpw 30, 3
  02f9ed8  bf 0, 0x2f9ee8
  02f9edc  lis 3, 16800
  02f9ee0  fmr 3, 1
  02f9ee4  stw 3, 24(31)
  02f9ee8  fcmpu 0, 3, 2
  02f9eec  cror 6, 0, 2
  02f9ef0  bt 6, 0x2f9f00
  02f9ef4  lis 3, 17530
  02f9ef8  ori 3, 3, 49152
  02f9efc  stw 3, 24(31)
  02f9f00  ld 0, 208(1)
  02f9f04  mtlr 0
  02f9f08  lfd 31, 184(1)
  02f9f0c  ld 25, 128(1)
  02f9f10  ld 26, 136(1)
  02f9f14  ld 27, 144(1)
  02f9f18  ld 28, 152(1)
  02f9f1c  ld 29, 160(1)
  02f9f20  ld 30, 168(1)
  02f9f24  ld 31, 176(1)
  02f9f28  addi 1, 1, 192
  02f9f2c  blr

M228_002f9f30:   # 0x2f9f30, 0x14 bytes
  02f9f30  lis 3, 128
  02f9f34  lis 4, 1
  02f9f38  addic 3, 3, -4016
  02f9f3c  stw 4, 72(3)
  02f9f40  blr

M228_002f9f70:   # 0x2f9f70, 0x284 bytes
  02f9f70  stdu 1, -144(1)
  02f9f74  mflr 0
  02f9f78  std 0, 160(1)
  02f9f7c  std 31, 136(1)
  02f9f80  lwz 31, 120(3)
  02f9f84  lbz 3, 177(31)
  02f9f88  cmpwi 3, 1
  02f9f8c  bf 2, 0x2fa1e0
  02f9f90  li 3, 312
  02f9f94  addi 4, 3, 16
  02f9f98  <unknown>
  02f9f9c  lwz 3, 312(31)
  02f9fa0  <unknown>
  02f9fa4  cmpwi 3, 0
  02f9fa8  vor 2, 2, 3
  02f9fac  bt 2, 0x2fa1e0
  02f9fb0  extsw 3, 3
  02f9fb4  lis 4, 268
  02f9fb8  li 5, -19384
  02f9fbc  std 3, 112(1)
  02f9fc0  lwz 3, -19384(4)
  02f9fc4  <unknown>
  02f9fc8  lis 4, 48
  02f9fcc  vcfsx 3, 3, 0
  02f9fd0  extsw 3, 3
  02f9fd4  li 5, 4
  02f9fd8  lfd 1, 112(1)
  02f9fdc  addi 4, 4, -24760
  02f9fe0  vspltisw 4, -1
  02f9fe4  std 3, 112(1)
  02f9fe8  vspltisw 8, -1
  02f9fec  vslw 4, 4, 4
  02f9ff0  <unknown>
  02f9ff4  lfs 2, 0(4)
  02f9ff8  vspltw 6, 6, 0
  02f9ffc  lfd 3, 112(1)
  02fa000  vrefp 5, 3
  02fa004  fcfid 3, 3
  02fa008  vspltisw 10, -1
  02fa00c  <unknown>
  02fa010  li 3, 8
  02fa014  fcfid 1, 1
  02fa018  vspltisw 11, -1
  02fa01c  vspltw 9, 9, 0
  02fa020  vcfsx 2, 2, 0
  02fa024  vslw 10, 10, 10
  02fa028  vslw 11, 11, 11
  02fa02c  frsp 3, 3
  02fa030  vnmsubfp 7, 5, 3, 6
  02fa034  frsp 1, 1
  02fa038  li 5, -3904
  02fa03c  fdivs 2, 2, 3
  02fa040  lfs 3, 8(4)
  02fa044  li 6, 32
  02fa048  vmaddfp 4, 5, 7, 4
  02fa04c  vslw 5, 8, 8
  02fa050  vspltisw 8, -1
  02fa054  vslw 8, 8, 8
  02fa058  vnmsubfp 7, 4, 3, 6
  02fa05c  vmaddfp 4, 4, 7, 5
  02fa060  <unknown>
  02fa064  li 3, 12
  02fa068  lfs 4, 12(4)
  02fa06c  vspltw 5, 5, 0
  02fa070  vspltisw 7, -1
  02fa074  vslw 7, 7, 7
  02fa078  vnmsubfp 3, 4, 3, 6
  02fa07c  vmaddfp 3, 4, 3, 8
  02fa080  <unknown>
  02fa084  vspltw 4, 4, 0
  02fa088  li 3, 16
  02fa08c  fmuls 1, 1, 2
  02fa090  <unknown>
  02fa094  li 3, 20
  02fa098  vmaddfp 3, 3, 9, 10
  02fa09c  vspltw 6, 6, 0
  02fa0a0  vspltisw 9, -1
  02fa0a4  fsubs 2, 3, 1
  02fa0a8  fsubs 3, 4, 1
  02fa0ac  vmaddfp 2, 2, 3, 11
  02fa0b0  fsub 4, 1, 2
  02fa0b4  vsubfp 3, 5, 2
  02fa0b8  vsubfp 4, 4, 2
  02fa0bc  fsel 1, 4, 2, 1
  02fa0c0  vcmpgtfp 5, 3, 2
  02fa0c4  fsub 2, 3, 1
  02fa0c8  vsel 2, 3, 2, 5
  02fa0cc  vspltisw 5, -1
  02fa0d0  vcmpgtfp 3, 2, 4
  02fa0d4  vslw 5, 5, 5
  02fa0d8  vsel 2, 4, 2, 3
  02fa0dc  vspltisw 3, -1
  02fa0e0  vspltisw 4, -1
  02fa0e4  fsel 1, 2, 3, 1
  02fa0e8  vslw 3, 3, 3
  02fa0ec  vslw 4, 4, 4
  02fa0f0  lfs 2, 16(4)
  02fa0f4  vmaddfp 3, 2, 2, 3
  02fa0f8  <unknown>
  02fa0fc  li 3, 24
  02fa100  lfs 4, 20(4)
  02fa104  vspltw 8, 8, 0
  02fa108  fmuls 3, 1, 1
  02fa10c  vmaddfp 4, 3, 2, 4
  02fa110  fmuls 5, 3, 1
  02fa114  vmaddfp 5, 3, 4, 5
  02fa118  vmaddfp 2, 4, 6, 2
  02fa11c  <unknown>
  02fa120  vslw 4, 9, 9
  02fa124  fmadds 1, 5, 2, 1
  02fa128  li 3, 28
  02fa12c  fmuls 7, 3, 5
  02fa130  lfs 6, 24(4)
  02fa134  fmr 2, 6
  02fa138  vmaddfp 7, 3, 5, 7
  02fa13c  vmaddfp 2, 5, 8, 2
  02fa140  vspltw 5, 6, 0
  02fa144  fmuls 5, 3, 7
  02fa148  fmadds 1, 7, 4, 1
  02fa14c  vmaddfp 3, 3, 7, 4
  02fa150  vmaddfp 2, 7, 5, 2
  02fa154  <unknown>
  02fa158  lis 3, 128
  02fa15c  vspltw 4, 4, 0
  02fa160  fmuls 3, 3, 5
  02fa164  fmadds 1, 5, 2, 1
  02fa168  lfs 4, 28(4)
  02fa16c  vmaddfp 2, 3, 4, 2
  02fa170  vspltisw 3, -1
  02fa174  <unknown>
  02fa178  fmadds 1, 3, 4, 1
  02fa17c  <unknown>
  02fa180  li 5, 308
  02fa184  vslw 3, 3, 3
  02fa188  li 6, 304
  02fa18c  lfs 2, -3904(3)
  02fa190  li 4, 1
  02fa194  addic 3, 31, 256
  02fa198  vmaddfp 2, 4, 2, 3
  02fa19c  vspltw 3, 5, 0
  02fa1a0  fmuls 1, 2, 1
  02fa1a4  fneg 1, 1
  02fa1a8  vxor 2, 3, 2
  02fa1ac  vspltw 2, 2, 0
  02fa1b0  stvewx 2, 5, 31
  02fa1b4  stvewx 2, 6, 31
  02fa1b8  bl 0x501980
  02fa1bc  nop
  02fa1c0  addic 3, 31, 192
  02fa1c4  lfs 1, 304(31)
  02fa1c8  li 4, 1
  02fa1cc  bl 0x501980
  02fa1d0  nop
  02fa1d4  addic 3, 31, 312
  02fa1d8  bl 0x4fff60
  02fa1dc  nop
  02fa1e0  ld 0, 160(1)
  02fa1e4  mtlr 0
  02fa1e8  ld 31, 136(1)
  02fa1ec  addi 1, 1, 144
  02fa1f0  blr
