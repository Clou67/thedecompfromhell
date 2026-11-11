# game/update/moby1108.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1108_001c9528:   # 0x1c9528, 0x168 bytes
  01c9528  stdu 1, -128(1)
  01c952c  mflr 0
  01c9530  std 0, 144(1)
  01c9534  lis 5, 151
  01c9538  li 6, 0
  01c953c  cmpwi 4, 0
  01c9540  cmpwi 1, 4, 2
  01c9544  cmpwi 6, 4, 1
  01c9548  lwz 5, -25484(5)
  01c954c  std 30, 112(1)
  01c9550  cmpwi 7, 4, -1
  01c9554  lwz 30, 120(3)
  01c9558  std 31, 120(1)
  01c955c  subc 6, 6, 5
  01c9560  addic 31, 5, -1
  01c9564  cntlzw 6, 6
  01c9568  subc 5, 5, 31
  01c956c  sldi 3, 6, 58
  01c9570  sradi 3, 3, 63
  01c9574  and 3, 3, 5
  01c9578  addc 31, 31, 3
  01c957c  bt 1, 0x1c9588
  01c9580  bf 29, 0x1c9678
  01c9584  b 0x1c9594
  01c9588  bf 25, 0x1c95a8
  01c958c  bf 5, 0x1c9650
  01c9590  b 0x1c9678
  01c9594  sldi 3, 31, 2
  01c9598  addc 3, 30, 3
  01c959c  clrldi 3, 3, 32
  01c95a0  lwz 30, 56(3)
  01c95a4  b 0x1c9660
  01c95a8  li 3, 3
  01c95ac  bl 0xfc620
  01c95b0  nop
  01c95b4  li 7, 0
  01c95b8  lis 4, 239
  01c95bc  ori 5, 7, 0
  01c95c0  addic 4, 4, 6744
  01c95c4  sldi 6, 3, 2
  01c95c8  cmpwi 1, 7, 2
  01c95cc  extsw 6, 6
  01c95d0  lwzx 8, 4, 6
  01c95d4  cmpwi 8, 0
  01c95d8  bf 2, 0x1c95e8
  01c95dc  li 5, 1
  01c95e0  stwx 5, 4, 6
  01c95e4  b 0x1c962c
  01c95e8  lis 6, 21845
  01c95ec  addic 3, 3, 1
  01c95f0  ori 6, 6, 21846
  01c95f4  mulhw 6, 6, 3
  01c95f8  srwi 8, 6, 31
  01c95fc  addc 6, 6, 8
  01c9600  addc 8, 6, 6
  01c9604  addc 6, 6, 8
  01c9608  subc 3, 3, 6
  01c960c  bf 6, 0x1c9620
  01c9610  lis 6, 239
  01c9614  stw 5, 6744(6)
  01c9618  stw 5, 4(4)
  01c961c  stw 5, 8(4)
  01c9620  addic 7, 7, 1
  01c9624  cmpwi 7, 4
  01c9628  bt 0, 0x1c95c4
  01c962c  sldi 3, 3, 3
  01c9630  sldi 4, 31, 2
  01c9634  addc 5, 3, 3
  01c9638  addc 3, 3, 5
  01c963c  addc 3, 30, 3
  01c9640  addc 3, 3, 4
  01c9644  clrldi 3, 3, 32
  01c9648  lwz 30, 104(3)
  01c964c  b 0x1c9660
  01c9650  sldi 3, 31, 2
  01c9654  addc 3, 30, 3
  01c9658  clrldi 3, 3, 32
  01c965c  lwz 30, 80(3)
  01c9660  cmpwi 30, -1
  01c9664  bt 2, 0x1c9678
  01c9668  lis 3, 150
  01c966c  addic 4, 30, 20000
  01c9670  addic 3, 3, 14024
  01c9674  stw 4, 28(3)
  01c9678  ld 0, 144(1)
  01c967c  mtlr 0
  01c9680  ld 30, 112(1)
  01c9684  ld 31, 120(1)
  01c9688  addi 1, 1, 128
  01c968c  blr

UpdateMoby_1108:   # 0x1c96c0, 0xed4 bytes
  01c96c0  stdu 1, -416(1)
  01c96c4  mflr 0
  01c96c8  std 0, 432(1)
  01c96cc  stfd 31, 408(1)
  01c96d0  std 31, 400(1)
  01c96d4  ori 31, 3, 0
  01c96d8  std 30, 392(1)
  01c96dc  lbz 3, 32(31)
  01c96e0  lwz 30, 120(31)
  01c96e4  cmpwi 3, 5
  01c96e8  cmpwi 1, 3, 4
  01c96ec  cmpwi 6, 3, 3
  01c96f0  std 29, 384(1)
  01c96f4  std 28, 376(1)
  01c96f8  cmpwi 7, 3, 2
  01c96fc  bt 2, 0x1ca4f4
  01c9700  bt 6, 0x1ca2a0
  01c9704  bt 26, 0x1c9dc8
  01c9708  bt 30, 0x1c9818
  01c970c  cmpwi 3, 1
  01c9710  bt 2, 0x1c97a0
  01c9714  cmpwi 3, 0
  01c9718  bf 2, 0x1ca570
  01c971c  lis 3, 151
  01c9720  lbz 5, 176(31)
  01c9724  lis 4, 161
  01c9728  addic 4, 4, -13692
  01c972c  lwz 3, -25488(3)
  01c9730  addc 4, 5, 4
  01c9734  slwi 3, 3, 4
  01c9738  clrldi 4, 4, 32
  01c973c  extsw 3, 3
  01c9740  lbzx 3, 4, 3
  01c9744  cmpwi 3, 0
  01c9748  bt 2, 0x1c975c
  01c974c  ori 3, 31, 0
  01c9750  bl 0xefb38
  01c9754  nop
  01c9758  b 0x1ca570
  01c975c  lwz 3, 0(30)
  01c9760  extsw 3, 3
  01c9764  bl 0x4ad2bc
  01c9768  nop
  01c976c  lwz 3, 4(30)
  01c9770  extsw 3, 3
  01c9774  bl 0x1a1e24
  01c9778  nop
  01c977c  lwz 3, 8(30)
  01c9780  extsw 3, 3
  01c9784  bl 0x1a1e24
  01c9788  nop
  01c978c  li 3, 1
  01c9790  li 4, 255
  01c9794  stb 3, 32(31)
  01c9798  stb 4, 48(31)
  01c979c  b 0x1ca570
  01c97a0  lwz 3, 28(30)
  01c97a4  li 4, -1
  01c97a8  extsw 3, 3
  01c97ac  bl 0x104214
  01c97b0  nop
  01c97b4  cmpwi 3, 0
  01c97b8  bf 2, 0x1ca570
  01c97bc  lis 29, 164
  01c97c0  lwz 3, 44(30)
  01c97c4  slwi 3, 3, 8
  01c97c8  lwz 4, -28512(29)
  01c97cc  addc 3, 4, 3
  01c97d0  clrldi 3, 3, 32
  01c97d4  bl 0x1d4cb0
  01c97d8  nop
  01c97dc  lwz 3, 44(30)
  01c97e0  lwz 4, -28512(29)
  01c97e4  slwi 3, 3, 8
  01c97e8  addc 3, 4, 3
  01c97ec  clrldi 3, 3, 32
  01c97f0  bl 0x1d4cf8
  01c97f4  nop
  01c97f8  cmpwi 3, 1
  01c97fc  bf 2, 0x1ca570
  01c9800  li 5, 2
  01c9804  ori 3, 31, 0
  01c9808  li 4, 0
  01c980c  stb 5, 32(31)
  01c9810  bl 0x1c9528
  01c9814  b 0x1ca570
  01c9818  lis 3, 164
  01c981c  lwz 4, 44(30)
  01c9820  slwi 4, 4, 8
  01c9824  lwz 3, -28512(3)
  01c9828  addc 3, 3, 4
  01c982c  clrldi 3, 3, 32
  01c9830  bl 0x1d4cf8
  01c9834  nop
  01c9838  cmpwi 3, 2
  01c983c  bf 2, 0x1ca570
  01c9840  li 5, 3
  01c9844  li 6, 1
  01c9848  li 3, 6
  01c984c  li 4, 9
  01c9850  stb 5, 32(31)
  01c9854  stw 6, 176(30)
  01c9858  bl 0x11ccc8
  01c985c  nop
  01c9860  lis 3, 150
  01c9864  addic 3, 3, 14024
  01c9868  lhz 3, 102(3)
  01c986c  cmpwi 3, 3
  01c9870  bf 2, 0x1c987c
  01c9874  bl 0x11c830
  01c9878  nop
  01c987c  lwz 3, 16(30)
  01c9880  extsw 3, 3
  01c9884  bl 0x1b22f4
  01c9888  nop
  01c988c  lwz 3, 20(30)
  01c9890  extsw 3, 3
  01c9894  bl 0x47cbc8
  01c9898  nop
  01c989c  lwz 3, 24(30)
  01c98a0  extsw 3, 3
  01c98a4  bl 0x47cbc8
  01c98a8  nop
  01c98ac  lwz 3, 0(30)
  01c98b0  extsw 3, 3
  01c98b4  bl 0x4ad264
  01c98b8  nop
  01c98bc  lwz 3, 4(30)
  01c98c0  extsw 3, 3
  01c98c4  bl 0x1a1e90
  01c98c8  nop
  01c98cc  lwz 3, 8(30)
  01c98d0  extsw 3, 3
  01c98d4  bl 0x1a1e90
  01c98d8  nop
  01c98dc  lis 3, 164
  01c98e0  lwz 4, 32(30)
  01c98e4  slwi 4, 4, 8
  01c98e8  lwz 3, -28512(3)
  01c98ec  addc 3, 3, 4
  01c98f0  clrldi 3, 3, 32
  01c98f4  bl 0x1a87d8
  01c98f8  nop
  01c98fc  lis 3, 165
  01c9900  lwz 4, 12(30)
  01c9904  lis 5, 29
  01c9908  slwi 4, 4, 7
  01c990c  addi 5, 5, -26992
  01c9910  lwz 3, 7128(3)
  01c9914  addc 3, 3, 4
  01c9918  lis 4, 165
  01c991c  clrldi 3, 3, 32
  01c9920  lfs 1, 0(5)
  01c9924  addic 4, 4, 7136
  01c9928  lfs 2, 56(3)
  01c992c  fadds 1, 2, 1
  01c9930  stfs 1, 56(3)
  01c9934  lwz 3, 36(30)
  01c9938  slwi 6, 3, 2
  01c993c  slwi 3, 3, 2
  01c9940  extsw 6, 6
  01c9944  extsw 3, 3
  01c9948  lwzx 6, 4, 6
  01c994c  lfs 1, 32(6)
  01c9950  stfs 1, 112(1)
  01c9954  lfs 2, 36(6)
  01c9958  stfs 2, 116(1)
  01c995c  lfs 3, 40(6)
  01c9960  lwzx 3, 4, 3
  01c9964  stfs 3, 120(1)
  01c9968  lfs 4, 44(6)
  01c996c  li 4, 0
  01c9970  stfs 4, 124(1)
  01c9974  lfs 4, 16(3)
  01c9978  lfs 5, 20(3)
  01c997c  fsubs 7, 4, 1
  01c9980  fsubs 8, 5, 2
  01c9984  lfs 6, 24(3)
  01c9988  lfs 10, 4(5)
  01c998c  lis 3, 115
  01c9990  addic 3, 3, 22784
  01c9994  fabs 9, 7
  01c9998  fabs 11, 8
  01c999c  stfs 7, 212(1)
  01c99a0  stfs 8, 216(1)
  01c99a4  fsubs 7, 9, 11
  01c99a8  stfs 7, 220(1)
  01c99ac  lwz 5, 212(1)
  01c99b0  lfs 7, 212(1)
  01c99b4  lwz 6, 216(1)
  01c99b8  stw 4, 140(1)
  01c99bc  fabs 7, 7
  01c99c0  stw 4, 128(1)
  01c99c4  rlwinm 6, 6, 3, 29, 29
  01c99c8  lfs 8, 216(1)
  01c99cc  lwz 4, 220(1)
  01c99d0  lfs 12, 220(1)
  01c99d4  fabs 8, 8
  01c99d8  rlwimi 6, 4, 2, 30, 30
  01c99dc  fsub 13, 12, 10
  01c99e0  fsub 12, 12, 10
  01c99e4  rlwimi 6, 5, 4, 28, 28
  01c99e8  ori 4, 3, 0
  01c99ec  slwi 5, 6, 2
  01c99f0  rlwimi 4, 6, 2, 26, 28
  01c99f4  clrldi 4, 4, 32
  01c99f8  fsel 11, 13, 7, 11
  01c99fc  lfsx 7, 3, 5
  01c9a00  fsel 9, 12, 8, 9
  01c9a04  lfs 8, 4(4)
  01c9a08  fcmpu 0, 11, 10
  01c9a0c  bt 1, 0x1c9a18
  01c9a10  fmr 7, 10
  01c9a14  b 0x1c9b3c
  01c9a18  fsubs 12, 9, 11
  01c9a1c  fadds 9, 9, 11
  01c9a20  addic 4, 1, 16
  01c9a24  li 7, 2
  01c9a28  addic 5, 4, 304
  01c9a2c  addic 6, 4, 320
  01c9a30  mtctr 7
  01c9a34  fdivs 9, 12, 9
  01c9a38  fmuls 11, 9, 9
  01c9a3c  stfs 9, 332(1)
  01c9a40  stfs 9, 324(1)
  01c9a44  stfs 9, 328(1)
  01c9a48  stfs 9, 320(1)
  01c9a4c  lfs 13, 332(1)
  01c9a50  lfs 0, 324(1)
  01c9a54  lfs 31, 328(1)
  01c9a58  fmuls 12, 11, 11
  01c9a5c  fmuls 0, 0, 11
  01c9a60  fmuls 13, 13, 12
  01c9a64  fmuls 9, 12, 12
  01c9a68  fmuls 12, 31, 12
  01c9a6c  stfs 0, 324(1)
  01c9a70  fmuls 11, 13, 11
  01c9a74  stfs 12, 328(1)
  01c9a78  stfs 11, 332(1)
  01c9a7c  lfs 11, 304(4)
  01c9a80  fmuls 11, 11, 9
  01c9a84  stfs 11, 320(4)
  01c9a88  lfs 11, 4(5)
  01c9a8c  addic 4, 4, 8
  01c9a90  addic 5, 5, 8
  01c9a94  fmuls 11, 11, 9
  01c9a98  stfs 11, 4(6)
  01c9a9c  addic 6, 6, 8
  01c9aa0  bdnz 0x1c9a7c
  01c9aa4  li 6, 4
  01c9aa8  ori 4, 1, 0
  01c9aac  mtctr 6
  01c9ab0  lis 5, 115
  01c9ab4  addic 6, 4, 320
  01c9ab8  addic 5, 5, 22752
  01c9abc  ori 8, 6, 0
  01c9ac0  lfs 9, 320(4)
  01c9ac4  lfs 11, 0(5)
  01c9ac8  fmuls 9, 9, 11
  01c9acc  lfs 11, 4(5)
  01c9ad0  addic 5, 5, 8
  01c9ad4  stfs 9, 320(4)
  01c9ad8  lfs 9, 4(6)
  01c9adc  addic 4, 4, 8
  01c9ae0  fmuls 9, 9, 11
  01c9ae4  stfs 9, 4(6)
  01c9ae8  addic 6, 6, 8
  01c9aec  bdnz 0x1c9ac0
  01c9af0  fmr 9, 10
  01c9af4  ori 4, 1, 0
  01c9af8  mtctr 7
  01c9afc  lfs 11, 320(4)
  01c9b00  fadds 9, 9, 11
  01c9b04  addic 4, 4, 16
  01c9b08  lfs 11, 4(8)
  01c9b0c  lfs 12, 8(8)
  01c9b10  lfs 13, 12(8)
  01c9b14  addic 8, 8, 16
  01c9b18  fadds 9, 9, 11
  01c9b1c  fadds 9, 9, 12
  01c9b20  fadds 9, 9, 13
  01c9b24  bdnz 0x1c9afc
  01c9b28  lis 4, 29
  01c9b2c  addi 4, 4, -26992
  01c9b30  lfs 11, 8(4)
  01c9b34  fadds 9, 9, 11
  01c9b38  fmadds 7, 9, 7, 8
  01c9b3c  fsubs 2, 2, 5
  01c9b40  fsubs 1, 1, 4
  01c9b44  stfs 7, 136(1)
  01c9b48  fmuls 2, 2, 2
  01c9b4c  fmadds 1, 1, 1, 2
  01c9b50  fsubs 2, 6, 3
  01c9b54  fsqrts 1, 1
  01c9b58  stfs 2, 204(1)
  01c9b5c  fabs 4, 2
  01c9b60  fabs 3, 1
  01c9b64  stfs 1, 200(1)
  01c9b68  lwz 4, 204(1)
  01c9b6c  lfs 2, 204(1)
  01c9b70  rlwinm 4, 4, 3, 29, 29
  01c9b74  fabs 5, 2
  01c9b78  fsubs 1, 3, 4
  01c9b7c  stfs 1, 208(1)
  01c9b80  lwz 5, 200(1)
  01c9b84  lfs 1, 200(1)
  01c9b88  lwz 6, 208(1)
  01c9b8c  lfs 2, 208(1)
  01c9b90  fabs 1, 1
  01c9b94  rlwimi 4, 6, 2, 30, 30
  01c9b98  fsub 6, 2, 10
  01c9b9c  fsub 7, 2, 10
  01c9ba0  rlwimi 4, 5, 4, 28, 28
  01c9ba4  ori 5, 3, 0
  01c9ba8  rlwimi 5, 4, 2, 26, 28
  01c9bac  slwi 4, 4, 2
  01c9bb0  clrldi 5, 5, 32
  01c9bb4  fsel 4, 6, 1, 4
  01c9bb8  lfsx 1, 3, 4
  01c9bbc  fsel 3, 7, 5, 3
  01c9bc0  lfs 2, 4(5)
  01c9bc4  fcmpu 0, 4, 10
  01c9bc8  bt 1, 0x1c9bd0
  01c9bcc  b 0x1c9cf0
  01c9bd0  fsubs 5, 3, 4
  01c9bd4  fadds 3, 3, 4
  01c9bd8  addic 3, 1, 16
  01c9bdc  li 7, 2
  01c9be0  addic 4, 3, 272
  01c9be4  addic 5, 3, 288
  01c9be8  mtctr 7
  01c9bec  fdivs 3, 5, 3
  01c9bf0  fmuls 4, 3, 3
  01c9bf4  stfs 3, 300(1)
  01c9bf8  stfs 3, 292(1)
  01c9bfc  stfs 3, 296(1)
  01c9c00  stfs 3, 288(1)
  01c9c04  lfs 6, 300(1)
  01c9c08  lfs 7, 292(1)
  01c9c0c  lfs 8, 296(1)
  01c9c10  fmuls 5, 4, 4
  01c9c14  fmuls 7, 7, 4
  01c9c18  fmuls 6, 6, 5
  01c9c1c  fmuls 3, 5, 5
  01c9c20  fmuls 5, 8, 5
  01c9c24  stfs 7, 292(1)
  01c9c28  fmuls 4, 6, 4
  01c9c2c  stfs 5, 296(1)
  01c9c30  stfs 4, 300(1)
  01c9c34  lfs 4, 272(3)
  01c9c38  fmuls 4, 4, 3
  01c9c3c  stfs 4, 288(3)
  01c9c40  lfs 4, 4(4)
  01c9c44  addic 3, 3, 8
  01c9c48  addic 4, 4, 8
  01c9c4c  fmuls 4, 4, 3
  01c9c50  stfs 4, 4(5)
  01c9c54  addic 5, 5, 8
  01c9c58  bdnz 0x1c9c34
  01c9c5c  li 5, 4
  01c9c60  ori 3, 1, 0
  01c9c64  mtctr 5
  01c9c68  lis 4, 115
  01c9c6c  addic 5, 3, 288
  01c9c70  addic 4, 4, 22752
  01c9c74  ori 6, 5, 0
  01c9c78  lfs 3, 288(3)
  01c9c7c  lfs 4, 0(4)
  01c9c80  fmuls 3, 3, 4
  01c9c84  lfs 4, 4(4)
  01c9c88  addic 4, 4, 8
  01c9c8c  stfs 3, 288(3)
  01c9c90  lfs 3, 4(5)
  01c9c94  addic 3, 3, 8
  01c9c98  fmuls 3, 3, 4
  01c9c9c  stfs 3, 4(5)
  01c9ca0  addic 5, 5, 8
  01c9ca4  bdnz 0x1c9c78
  01c9ca8  ori 3, 1, 0
  01c9cac  mtctr 7
  01c9cb0  lfs 3, 288(3)
  01c9cb4  lfs 4, 4(6)
  01c9cb8  fadds 3, 10, 3
  01c9cbc  lfs 5, 8(6)
  01c9cc0  lfs 10, 12(6)
  01c9cc4  addic 3, 3, 16
  01c9cc8  addic 6, 6, 16
  01c9ccc  fadds 3, 3, 4
  01c9cd0  fadds 3, 3, 5
  01c9cd4  fadds 10, 3, 10
  01c9cd8  bdnz 0x1c9cb0
  01c9cdc  lis 3, 29
  01c9ce0  addi 3, 3, -26992
  01c9ce4  lfs 3, 8(3)
  01c9ce8  fadds 10, 10, 3
  01c9cec  fmadds 10, 10, 1, 2
  01c9cf0  fneg 1, 10
  01c9cf4  lis 3, 29
  01c9cf8  lis 4, 114
  01c9cfc  addi 3, 3, -26992
  01c9d00  addic 31, 1, 112
  01c9d04  addic 29, 1, 128
  01c9d08  li 5, 2
  01c9d0c  lfs 2, -3056(4)
  01c9d10  ori 4, 29, 0
  01c9d14  li 7, 0
  01c9d18  stfs 1, 132(1)
  01c9d1c  lfs 1, 12(3)
  01c9d20  ori 3, 31, 0
  01c9d24  fmuls 1, 2, 1
  01c9d28  fctiwz 1, 1
  01c9d2c  stfd 1, 352(1)
  01c9d30  lwz 6, 356(1)
  01c9d34  extsw 6, 6
  01c9d38  bl 0x47f74
  01c9d3c  nop
  01c9d40  lis 3, 118
  01c9d44  lis 4, 118
  01c9d48  lis 5, 239
  01c9d4c  lis 6, 239
  01c9d50  lis 7, 118
  01c9d54  lfs 1, 16848(3)
  01c9d58  lis 3, 118
  01c9d5c  lfs 2, 16852(4)
  01c9d60  lfs 6, 6740(5)
  01c9d64  lfs 3, 6736(6)
  01c9d68  lfs 4, 16856(7)
  01c9d6c  lfs 5, 16860(3)
  01c9d70  bl 0x47f48
  01c9d74  nop
  01c9d78  ori 3, 31, 0
  01c9d7c  bl 0x47b98
  01c9d80  nop
  01c9d84  ori 3, 29, 0
  01c9d88  bl 0x47c08
  01c9d8c  nop
  01c9d90  lis 3, 165
  01c9d94  lwz 4, 40(30)
  01c9d98  li 6, 0
  01c9d9c  slwi 4, 4, 7
  01c9da0  li 5, 114
  01c9da4  lwz 3, 7128(3)
  01c9da8  addc 3, 3, 4
  01c9dac  addic 4, 3, 48
  01c9db0  addic 7, 3, 112
  01c9db4  clrldi 3, 4, 32
  01c9db8  clrldi 4, 7, 32
  01c9dbc  bl 0xa0c38
  01c9dc0  nop
  01c9dc4  b 0x1ca570
  01c9dc8  lwz 3, 36(30)
  01c9dcc  lis 29, 165
  01c9dd0  lwz 5, 176(30)
  01c9dd4  slwi 4, 3, 2
  01c9dd8  addic 29, 29, 7136
  01c9ddc  extsw 4, 4
  01c9de0  slwi 6, 5, 4
  01c9de4  slwi 3, 3, 2
  01c9de8  addic 5, 5, 1
  01c9dec  extsw 3, 3
  01c9df0  lwzx 4, 29, 4
  01c9df4  addc 4, 4, 6
  01c9df8  clrldi 4, 4, 32
  01c9dfc  lfs 1, 16(4)
  01c9e00  stfs 1, 160(1)
  01c9e04  lfs 1, 20(4)
  01c9e08  stfs 1, 164(1)
  01c9e0c  lfs 1, 24(4)
  01c9e10  lwzx 3, 29, 3
  01c9e14  stfs 1, 168(1)
  01c9e18  lfs 1, 28(4)
  01c9e1c  stw 5, 176(30)
  01c9e20  stfs 1, 172(1)
  01c9e24  lwz 3, 0(3)
  01c9e28  addic 3, 3, -1
  01c9e2c  cmpw 5, 3
  01c9e30  bf 2, 0x1c9e94
  01c9e34  li 5, 4
  01c9e38  ori 3, 31, 0
  01c9e3c  li 4, 1
  01c9e40  stb 5, 32(31)
  01c9e44  bl 0x1c9528
  01c9e48  lis 3, 118
  01c9e4c  lis 4, 114
  01c9e50  lfs 1, 16864(3)
  01c9e54  lfs 2, -3056(4)
  01c9e58  fmuls 1, 1, 2
  01c9e5c  bl 0x502758
  01c9e60  nop
  01c9e64  stw 3, 180(30)
  01c9e68  li 3, 2
  01c9e6c  bl 0x481d0
  01c9e70  nop
  01c9e74  li 3, 0
  01c9e78  li 4, 1
  01c9e7c  bl 0xb72b0
  01c9e80  nop
  01c9e84  lis 3, 150
  01c9e88  li 4, 0
  01c9e8c  stw 4, -12480(3)
  01c9e90  b 0x1ca570
  01c9e94  lwz 3, 52(30)
  01c9e98  extsw 3, 3
  01c9e9c  bl 0x290158
  01c9ea0  nop
  01c9ea4  lwz 3, 176(30)
  01c9ea8  li 5, 0
  01c9eac  lwz 4, 36(30)
  01c9eb0  addic 3, 3, -30
  01c9eb4  slwi 4, 4, 2
  01c9eb8  lfs 8, 160(1)
  01c9ebc  extsw 6, 3
  01c9ec0  lfs 9, 164(1)
  01c9ec4  extsw 4, 4
  01c9ec8  subc 5, 6, 5
  01c9ecc  li 6, 0
  01c9ed0  sradi 5, 5, 63
  01c9ed4  subc 6, 6, 3
  01c9ed8  lwzx 4, 29, 4
  01c9edc  and 5, 5, 6
  01c9ee0  addc 3, 3, 5
  01c9ee4  sldi 3, 3, 4
  01c9ee8  addc 3, 4, 3
  01c9eec  lis 4, 29
  01c9ef0  clrldi 3, 3, 32
  01c9ef4  addi 4, 4, -26992
  01c9ef8  lis 30, 115
  01c9efc  lfs 1, 16(3)
  01c9f00  lfs 2, 20(3)
  01c9f04  fsubs 4, 1, 8
  01c9f08  lfs 3, 24(3)
  01c9f0c  fsubs 5, 2, 9
  01c9f10  lfs 7, 4(4)
  01c9f14  li 3, 0
  01c9f18  addic 30, 30, 22784
  01c9f1c  fabs 6, 4
  01c9f20  fabs 11, 5
  01c9f24  stfs 4, 188(1)
  01c9f28  stfs 5, 192(1)
  01c9f2c  lfs 10, 168(1)
  01c9f30  fsubs 4, 6, 11
  01c9f34  stfs 4, 196(1)
  01c9f38  lwz 4, 188(1)
  01c9f3c  lfs 4, 188(1)
  01c9f40  lwz 5, 192(1)
  01c9f44  stw 3, 156(1)
  01c9f48  fabs 4, 4
  01c9f4c  stw 3, 144(1)
  01c9f50  rlwinm 5, 5, 3, 29, 29
  01c9f54  lfs 5, 192(1)
  01c9f58  lwz 3, 196(1)
  01c9f5c  fabs 12, 5
  01c9f60  lfs 5, 196(1)
  01c9f64  rlwimi 5, 3, 2, 30, 30
  01c9f68  fsub 13, 5, 7
  01c9f6c  fsub 0, 5, 7
  01c9f70  rlwimi 5, 4, 4, 28, 28
  01c9f74  ori 3, 30, 0
  01c9f78  slwi 4, 5, 2
  01c9f7c  rlwimi 3, 5, 2, 26, 28
  01c9f80  clrldi 3, 3, 32
  01c9f84  fsel 11, 13, 4, 11
  01c9f88  lfsx 4, 30, 4
  01c9f8c  lfs 5, 4(3)
  01c9f90  fsel 6, 0, 12, 6
  01c9f94  fcmpu 0, 11, 7
  01c9f98  bt 1, 0x1c9fa4
  01c9f9c  fmr 4, 7
  01c9fa0  b 0x1ca0c8
  01c9fa4  fsubs 12, 6, 11
  01c9fa8  fadds 6, 6, 11
  01c9fac  addic 3, 1, 16
  01c9fb0  li 6, 2
  01c9fb4  addic 4, 3, 240
  01c9fb8  addic 5, 3, 256
  01c9fbc  mtctr 6
  01c9fc0  fdivs 6, 12, 6
  01c9fc4  fmuls 11, 6, 6
  01c9fc8  stfs 6, 268(1)
  01c9fcc  stfs 6, 260(1)
  01c9fd0  stfs 6, 264(1)
  01c9fd4  stfs 6, 256(1)
  01c9fd8  lfs 13, 268(1)
  01c9fdc  lfs 0, 260(1)
  01c9fe0  lfs 31, 264(1)
  01c9fe4  fmuls 12, 11, 11
  01c9fe8  fmuls 0, 0, 11
  01c9fec  fmuls 13, 13, 12
  01c9ff0  fmuls 6, 12, 12
  01c9ff4  fmuls 12, 31, 12
  01c9ff8  stfs 0, 260(1)
  01c9ffc  fmuls 11, 13, 11
  01ca000  stfs 12, 264(1)
  01ca004  stfs 11, 268(1)
  01ca008  lfs 11, 240(3)
  01ca00c  fmuls 11, 11, 6
  01ca010  stfs 11, 256(3)
  01ca014  lfs 11, 4(4)
  01ca018  addic 3, 3, 8
  01ca01c  addic 4, 4, 8
  01ca020  fmuls 11, 11, 6
  01ca024  stfs 11, 4(5)
  01ca028  addic 5, 5, 8
  01ca02c  bdnz 0x1ca008
  01ca030  li 5, 4
  01ca034  ori 3, 1, 0
  01ca038  mtctr 5
  01ca03c  lis 4, 115
  01ca040  addic 5, 3, 256
  01ca044  addic 4, 4, 22752
  01ca048  ori 7, 5, 0
  01ca04c  lfs 6, 256(3)
  01ca050  lfs 11, 0(4)
  01ca054  fmuls 6, 6, 11
  01ca058  lfs 11, 4(4)
  01ca05c  addic 4, 4, 8
  01ca060  stfs 6, 256(3)
  01ca064  lfs 6, 4(5)
  01ca068  addic 3, 3, 8
  01ca06c  fmuls 6, 6, 11
  01ca070  stfs 6, 4(5)
  01ca074  addic 5, 5, 8
  01ca078  bdnz 0x1ca04c
  01ca07c  fmr 6, 7
  01ca080  ori 3, 1, 0
  01ca084  mtctr 6
  01ca088  lfs 11, 256(3)
  01ca08c  fadds 6, 6, 11
  01ca090  addic 3, 3, 16
  01ca094  lfs 11, 4(7)
  01ca098  lfs 12, 8(7)
  01ca09c  lfs 13, 12(7)
  01ca0a0  addic 7, 7, 16
  01ca0a4  fadds 6, 6, 11
  01ca0a8  fadds 6, 6, 12
  01ca0ac  fadds 6, 6, 13
  01ca0b0  bdnz 0x1ca088
  01ca0b4  lis 3, 29
  01ca0b8  addi 3, 3, -26992
  01ca0bc  lfs 11, 8(3)
  01ca0c0  fadds 6, 6, 11
  01ca0c4  fmadds 4, 6, 4, 5
  01ca0c8  fsubs 2, 9, 2
  01ca0cc  fsubs 1, 8, 1
  01ca0d0  stfs 4, 152(1)
  01ca0d4  fmuls 2, 2, 2
  01ca0d8  fmadds 1, 1, 1, 2
  01ca0dc  fsubs 2, 3, 10
  01ca0e0  fsqrts 1, 1
  01ca0e4  stfs 2, 180(1)
  01ca0e8  fabs 4, 2
  01ca0ec  fabs 3, 1
  01ca0f0  stfs 1, 176(1)
  01ca0f4  lwz 3, 180(1)
  01ca0f8  lfs 2, 180(1)
  01ca0fc  rlwinm 3, 3, 3, 29, 29
  01ca100  fabs 5, 2
  01ca104  fsubs 1, 3, 4
  01ca108  stfs 1, 184(1)
  01ca10c  lwz 4, 176(1)
  01ca110  lfs 1, 176(1)
  01ca114  lwz 5, 184(1)
  01ca118  lfs 2, 184(1)
  01ca11c  fabs 1, 1
  01ca120  rlwimi 3, 5, 2, 30, 30
  01ca124  fsub 6, 2, 7
  01ca128  fsub 8, 2, 7
  01ca12c  rlwimi 3, 4, 4, 28, 28
  01ca130  ori 4, 30, 0
  01ca134  rlwimi 4, 3, 2, 26, 28
  01ca138  slwi 3, 3, 2
  01ca13c  clrldi 4, 4, 32
  01ca140  fsel 4, 6, 1, 4
  01ca144  lfsx 1, 30, 3
  01ca148  fsel 3, 8, 5, 3
  01ca14c  lfs 2, 4(4)
  01ca150  fcmpu 0, 4, 7
  01ca154  bt 1, 0x1ca15c
  01ca158  b 0x1ca27c
  01ca15c  fsubs 5, 3, 4
  01ca160  fadds 3, 3, 4
  01ca164  addic 3, 1, 16
  01ca168  li 6, 2
  01ca16c  addic 4, 3, 208
  01ca170  addic 5, 3, 224
  01ca174  mtctr 6
  01ca178  fdivs 3, 5, 3
  01ca17c  fmuls 4, 3, 3
  01ca180  stfs 3, 236(1)
  01ca184  stfs 3, 228(1)
  01ca188  stfs 3, 232(1)
  01ca18c  stfs 3, 224(1)
  01ca190  lfs 6, 236(1)
  01ca194  lfs 8, 228(1)
  01ca198  lfs 9, 232(1)
  01ca19c  fmuls 5, 4, 4
  01ca1a0  fmuls 8, 8, 4
  01ca1a4  fmuls 6, 6, 5
  01ca1a8  fmuls 3, 5, 5
  01ca1ac  fmuls 5, 9, 5
  01ca1b0  stfs 8, 228(1)
  01ca1b4  fmuls 4, 6, 4
  01ca1b8  stfs 5, 232(1)
  01ca1bc  stfs 4, 236(1)
  01ca1c0  lfs 4, 208(3)
  01ca1c4  fmuls 4, 4, 3
  01ca1c8  stfs 4, 224(3)
  01ca1cc  lfs 4, 4(4)
  01ca1d0  addic 3, 3, 8
  01ca1d4  addic 4, 4, 8
  01ca1d8  fmuls 4, 4, 3
  01ca1dc  stfs 4, 4(5)
  01ca1e0  addic 5, 5, 8
  01ca1e4  bdnz 0x1ca1c0
  01ca1e8  li 5, 4
  01ca1ec  ori 3, 1, 0
  01ca1f0  mtctr 5
  01ca1f4  lis 4, 115
  01ca1f8  addic 5, 3, 224
  01ca1fc  addic 4, 4, 22752
  01ca200  ori 7, 5, 0
  01ca204  lfs 3, 224(3)
  01ca208  lfs 4, 0(4)
  01ca20c  fmuls 3, 3, 4
  01ca210  lfs 4, 4(4)
  01ca214  addic 4, 4, 8
  01ca218  stfs 3, 224(3)
  01ca21c  lfs 3, 4(5)
  01ca220  addic 3, 3, 8
  01ca224  fmuls 3, 3, 4
  01ca228  stfs 3, 4(5)
  01ca22c  addic 5, 5, 8
  01ca230  bdnz 0x1ca204
  01ca234  ori 3, 1, 0
  01ca238  mtctr 6
  01ca23c  lfs 3, 224(3)
  01ca240  lfs 4, 4(7)
  01ca244  fadds 3, 7, 3
  01ca248  lfs 5, 8(7)
  01ca24c  lfs 7, 12(7)
  01ca250  addic 3, 3, 16
  01ca254  addic 7, 7, 16
  01ca258  fadds 3, 3, 4
  01ca25c  fadds 3, 3, 5
  01ca260  fadds 7, 3, 7
  01ca264  bdnz 0x1ca23c
  01ca268  lis 3, 29
  01ca26c  addi 3, 3, -26992
  01ca270  lfs 3, 8(3)
  01ca274  fadds 7, 7, 3
  01ca278  fmadds 7, 7, 1, 2
  01ca27c  fneg 1, 7
  01ca280  addic 3, 1, 160
  01ca284  stfs 1, 148(1)
  01ca288  bl 0x47b98
  01ca28c  nop
  01ca290  addic 3, 1, 144
  01ca294  bl 0x47c08
  01ca298  nop
  01ca29c  b 0x1ca570
  01ca2a0  lis 3, 29
  01ca2a4  lis 4, 114
  01ca2a8  addi 3, 3, -26992
  01ca2ac  lfs 2, 16(3)
  01ca2b0  lfs 1, -3056(4)
  01ca2b4  lwz 3, 180(30)
  01ca2b8  fmuls 2, 1, 2
  01ca2bc  fctiwz 2, 2
  01ca2c0  stfd 2, 352(1)
  01ca2c4  lwz 4, 356(1)
  01ca2c8  cmpw 3, 4
  01ca2cc  bf 2, 0x1ca2f0
  01ca2d0  lis 3, 150
  01ca2d4  addic 3, 3, 14024
  01ca2d8  lhz 3, 102(3)
  01ca2dc  cmpwi 3, 3
  01ca2e0  bf 2, 0x1ca364
  01ca2e4  bl 0x11c830
  01ca2e8  nop
  01ca2ec  b 0x1ca364
  01ca2f0  lis 4, 29
  01ca2f4  addi 4, 4, -26992
  01ca2f8  lfs 2, 20(4)
  01ca2fc  fmuls 2, 1, 2
  01ca300  fctiwz 2, 2
  01ca304  stfd 2, 352(1)
  01ca308  lwz 4, 356(1)
  01ca30c  cmpw 3, 4
  01ca310  bf 2, 0x1ca324
  01ca314  ori 3, 31, 0
  01ca318  li 4, 2
  01ca31c  bl 0x1c9528
  01ca320  b 0x1ca364
  01ca324  lis 4, 29
  01ca328  addi 4, 4, -26992
  01ca32c  lfs 2, 12(4)
  01ca330  fmuls 1, 1, 2
  01ca334  fctiwz 1, 1
  01ca338  stfd 1, 352(1)
  01ca33c  lwz 4, 356(1)
  01ca340  cmpw 3, 4
  01ca344  bf 2, 0x1ca364
  01ca348  lis 3, 150
  01ca34c  addic 3, 3, 14024
  01ca350  lhz 3, 102(3)
  01ca354  cmpwi 3, 3
  01ca358  bf 2, 0x1ca364
  01ca35c  bl 0x11c830
  01ca360  nop
  01ca364  addic 3, 30, 192
  01ca368  bl 0x4fff60
  01ca36c  nop
  01ca370  cmpwi 3, 0
  01ca374  bt 2, 0x1ca408
  01ca378  lis 3, 151
  01ca37c  li 4, 0
  01ca380  addic 5, 3, -25376
  01ca384  li 3, 0
  01ca388  lwz 5, 8320(5)
  01ca38c  bl 0x15d380
  01ca390  nop
  01ca394  lis 3, 29
  01ca398  addi 29, 3, -26992
  01ca39c  lfs 1, 24(29)
  01ca3a0  lfs 2, 28(29)
  01ca3a4  bl 0xfcbe8
  01ca3a8  nop
  01ca3ac  lis 28, 114
  01ca3b0  lfs 2, -3056(28)
  01ca3b4  fmuls 1, 1, 2
  01ca3b8  bl 0x502758
  01ca3bc  nop
  01ca3c0  lis 4, 149
  01ca3c4  stw 3, 192(30)
  01ca3c8  lis 3, 16076
  01ca3cc  vspltisw 2, -1
  01ca3d0  addic 4, 4, 5056
  01ca3d4  ori 3, 3, 52429
  01ca3d8  li 5, 32
  01ca3dc  li 6, -3056
  01ca3e0  vslw 2, 2, 2
  01ca3e4  stw 3, 352(4)
  01ca3e8  <unknown>
  01ca3ec  li 3, 360
  01ca3f0  <unknown>
  01ca3f4  vspltw 3, 3, 0
  01ca3f8  vmaddfp 2, 4, 3, 2
  01ca3fc  vctsxs 2, 2, 0
  01ca400  vspltw 2, 2, 0
  01ca404  stvewx 2, 3, 4
  01ca408  lis 3, 161
  01ca40c  lwz 3, 1800(3)
  01ca410  cmpwi 3, 0
  01ca414  bf 2, 0x1ca434
  01ca418  lis 3, 113
  01ca41c  ori 4, 31, 0
  01ca420  addic 3, 3, -29480
  01ca424  bl 0x6d720
  01ca428  nop
  01ca42c  lis 3, 161
  01ca430  lwz 3, 1800(3)
  01ca434  lis 29, 151
  01ca438  cmpwi 1, 3, 0
  01ca43c  addic 29, 29, -25376
  01ca440  lwz 3, 8324(29)
  01ca444  cmpwi 3, 114
  01ca448  bf 2, 0x1ca458
  01ca44c  li 3, 6
  01ca450  stb 3, 32(31)
  01ca454  b 0x1ca570
  01ca458  bf 6, 0x1ca570
  01ca45c  addic 3, 30, 180
  01ca460  bl 0x4fff60
  01ca464  nop
  01ca468  cmpwi 3, 0
  01ca46c  bt 2, 0x1ca570
  01ca470  lis 3, 29
  01ca474  vspltisw 2, -1
  01ca478  li 4, 5
  01ca47c  addi 3, 3, -26992
  01ca480  li 6, 36
  01ca484  li 5, -3056
  01ca488  stb 4, 32(31)
  01ca48c  lis 4, 114
  01ca490  vslw 2, 2, 2
  01ca494  <unknown>
  01ca498  li 3, 188
  01ca49c  vspltw 3, 3, 0
  01ca4a0  <unknown>
  01ca4a4  li 4, 0
  01ca4a8  lis 5, 164
  01ca4ac  lwz 6, 48(30)
  01ca4b0  vmaddfp 2, 4, 3, 2
  01ca4b4  slwi 6, 6, 8
  01ca4b8  vctsxs 2, 2, 0
  01ca4bc  vspltw 2, 2, 0
  01ca4c0  stvewx 2, 3, 30
  01ca4c4  stw 4, 184(30)
  01ca4c8  lwz 3, -28512(5)
  01ca4cc  addc 3, 3, 6
  01ca4d0  clrldi 3, 3, 32
  01ca4d4  bl 0x1ce0fc
  01ca4d8  nop
  01ca4dc  lwz 5, 8320(29)
  01ca4e0  li 3, 1
  01ca4e4  li 4, 0
  01ca4e8  bl 0x15d380
  01ca4ec  nop
  01ca4f0  b 0x1ca570
  01ca4f4  lis 3, 29
  01ca4f8  lis 4, 16256
  01ca4fc  lwz 5, 184(30)
  01ca500  addi 3, 3, -26992
  01ca504  cmpw 5, 4
  01ca508  lfs 31, 40(3)
  01ca50c  bf 2, 0x1ca528
  01ca510  bl 0x83950
  01ca514  nop
  01ca518  lis 3, 150
  01ca51c  li 4, 0
  01ca520  stw 4, -12524(3)
  01ca524  b 0x1ca570
  01ca528  addic 3, 30, 188
  01ca52c  bl 0x4fff60
  01ca530  nop
  01ca534  cmpwi 3, 0
  01ca538  bt 2, 0x1ca570
  01ca53c  lis 3, 29
  01ca540  lis 5, 114
  01ca544  fmr 1, 31
  01ca548  addi 4, 3, -26992
  01ca54c  addic 3, 30, 184
  01ca550  lfs 2, 44(4)
  01ca554  lfs 3, -3052(5)
  01ca558  fmuls 2, 3, 2
  01ca55c  bl 0x109af0
  01ca560  nop
  01ca564  lis 3, 150
  01ca568  lfs 1, 184(30)
  01ca56c  stfs 1, -12524(3)
  01ca570  ld 0, 432(1)
  01ca574  mtlr 0
  01ca578  lfd 31, 408(1)
  01ca57c  ld 28, 376(1)
  01ca580  ld 29, 384(1)
  01ca584  ld 30, 392(1)
  01ca588  ld 31, 400(1)
  01ca58c  addi 1, 1, 416
  01ca590  blr
