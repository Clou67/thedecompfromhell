# game/update/moby1201.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1201_001f956c:   # 0x1f956c, 0x68 bytes
  01f956c  lbz 3, 33(3)
  01f9570  cmpwi 3, 255
  01f9574  bt 2, 0x1f95d0
  01f9578  lis 4, 165
  01f957c  rlwinm 3, 3, 2, 22, 29
  01f9580  addic 4, 4, -28284
  01f9584  lwzx 3, 4, 3
  01f9588  cmpwi 3, 0
  01f958c  bt 2, 0x1f95d0
  01f9590  lis 5, 164
  01f9594  li 4, 2
  01f9598  lhz 6, 0(3)
  01f959c  lwz 7, -28512(5)
  01f95a0  rlwinm 6, 6, 8, 9, 23
  01f95a4  addc 6, 7, 6
  01f95a8  clrldi 6, 6, 32
  01f95ac  lbz 7, 32(6)
  01f95b0  cmpwi 7, 1
  01f95b4  bf 2, 0x1f95bc
  01f95b8  stb 4, 32(6)
  01f95bc  lhz 6, 0(3)
  01f95c0  addic 3, 3, 2
  01f95c4  extsh 6, 6
  01f95c8  cmpwi 6, 0
  01f95cc  bf 0, 0x1f9598
  01f95d0  blr

M1201_001f95d4:   # 0x1f95d4, 0x14 bytes
  01f95d4  lis 3, 118
  01f95d8  lis 4, 1
  01f95dc  addic 3, 3, 25448
  01f95e0  stw 4, 72(3)
  01f95e4  blr

UpdateMoby_1201:   # 0x1f9680, 0x1710 bytes
  01f9680  stdu 1, -544(1)
  01f9684  mflr 0
  01f9688  std 0, 560(1)
  01f968c  stfd 20, 448(1)
  01f9690  stfd 21, 456(1)
  01f9694  stfd 22, 464(1)
  01f9698  stfd 23, 472(1)
  01f969c  stfd 24, 480(1)
  01f96a0  stfd 25, 488(1)
  01f96a4  stfd 26, 496(1)
  01f96a8  stfd 27, 504(1)
  01f96ac  stfd 28, 512(1)
  01f96b0  stfd 29, 520(1)
  01f96b4  stfd 30, 528(1)
  01f96b8  stfd 31, 536(1)
  01f96bc  std 31, 440(1)
  01f96c0  std 25, 392(1)
  01f96c4  ori 31, 3, 0
  01f96c8  lis 3, 32
  01f96cc  std 29, 424(1)
  01f96d0  li 25, 0
  01f96d4  addi 29, 3, -27160
  01f96d8  addic 5, 1, 128
  01f96dc  lhz 6, 52(31)
  01f96e0  std 30, 432(1)
  01f96e4  ori 3, 31, 0
  01f96e8  lwz 30, 120(31)
  01f96ec  li 4, 3
  01f96f0  rlwimi 6, 25, 0, 29, 29
  01f96f4  std 28, 416(1)
  01f96f8  std 27, 408(1)
  01f96fc  std 26, 400(1)
  01f9700  std 24, 384(1)
  01f9704  sth 6, 52(31)
  01f9708  bl 0xf1114
  01f970c  nop
  01f9710  lfs 31, 0(29)
  01f9714  lfs 1, 136(1)
  01f9718  lbz 3, 32(31)
  01f971c  fadds 1, 1, 31
  01f9720  cmpwi 3, 3
  01f9724  stfs 1, 136(1)
  01f9728  bf 1, 0x1f9abc
  01f972c  addic 3, 30, 66
  01f9730  bl 0x4fffb4
  01f9734  nop
  01f9738  lfs 1, 128(1)
  01f973c  cmpwi 3, 0
  01f9740  lfs 2, 132(1)
  01f9744  lfs 3, 136(1)
  01f9748  bt 2, 0x1f997c
  01f974c  lbz 3, 188(31)
  01f9750  cmpwi 3, 1
  01f9754  bf 2, 0x1f997c
  01f9758  lis 29, 151
  01f975c  addic 29, 29, -25376
  01f9760  lwz 3, 8332(29)
  01f9764  cmpwi 1, 3, 7
  01f9768  cmpwi 3, 20
  01f976c  cror 2, 2, 6
  01f9770  bt 2, 0x1f997c
  01f9774  lwz 3, 8324(29)
  01f9778  cmpwi 3, 61
  01f977c  bt 2, 0x1f997c
  01f9780  lfs 2, 132(1)
  01f9784  lis 3, 32
  01f9788  stfs 1, 128(29)
  01f978c  lfs 1, 136(1)
  01f9790  stfs 2, 132(29)
  01f9794  addi 28, 3, -27160
  01f9798  lfs 2, 140(1)
  01f979c  stfs 1, 136(29)
  01f97a0  stfs 2, 140(29)
  01f97a4  lfs 1, 64(31)
  01f97a8  stfs 1, 144(29)
  01f97ac  lfs 1, 68(31)
  01f97b0  stfs 1, 148(29)
  01f97b4  lfs 2, 72(31)
  01f97b8  stfs 2, 152(29)
  01f97bc  lfs 1, 76(31)
  01f97c0  stfs 1, 156(29)
  01f97c4  lfs 1, 4(28)
  01f97c8  bl 0x502578
  01f97cc  nop
  01f97d0  lfs 2, 8(28)
  01f97d4  lfs 3, 12(28)
  01f97d8  fadds 2, 1, 2
  01f97dc  lfs 4, 16(28)
  01f97e0  fsubs 5, 3, 1
  01f97e4  addic 3, 29, 224
  01f97e8  li 4, 144
  01f97ec  fsubs 3, 3, 2
  01f97f0  fsub 7, 1, 5
  01f97f4  fsubs 6, 4, 2
  01f97f8  fsubs 4, 4, 1
  01f97fc  fsub 8, 2, 3
  01f9800  fsel 5, 7, 5, 1
  01f9804  fsel 2, 8, 3, 2
  01f9808  fsub 7, 4, 5
  01f980c  lfs 3, 20(28)
  01f9810  fsub 8, 6, 2
  01f9814  fsel 4, 7, 4, 5
  01f9818  lfs 5, 24(28)
  01f981c  fsel 2, 8, 6, 2
  01f9820  fmuls 7, 4, 4
  01f9824  lfs 6, 28(28)
  01f9828  lfs 9, 32(28)
  01f982c  lfs 11, 128(29)
  01f9830  fmuls 8, 2, 2
  01f9834  fmuls 10, 7, 4
  01f9838  fmuls 12, 8, 2
  01f983c  fmuls 13, 7, 10
  01f9840  fmadds 4, 10, 3, 4
  01f9844  lfs 10, 132(29)
  01f9848  fmuls 0, 8, 12
  01f984c  fmadds 2, 12, 3, 2
  01f9850  fmuls 12, 7, 13
  01f9854  lfs 3, 36(28)
  01f9858  fmadds 4, 13, 5, 4
  01f985c  stfs 1, 152(29)
  01f9860  fmuls 13, 8, 0
  01f9864  fmadds 2, 0, 5, 2
  01f9868  fmuls 5, 7, 12
  01f986c  fmadds 4, 12, 6, 4
  01f9870  fmuls 7, 8, 13
  01f9874  fmadds 2, 13, 6, 2
  01f9878  fmadds 4, 5, 9, 4
  01f987c  fmadds 1, 7, 9, 2
  01f9880  fmadds 2, 4, 3, 10
  01f9884  fmadds 1, 1, 3, 11
  01f9888  stfs 2, 132(29)
  01f988c  stfs 1, 128(29)
  01f9890  bl 0x500250
  01f9894  nop
  01f9898  lis 3, 150
  01f989c  addic 3, 3, 19008
  01f98a0  lwz 3, 164(3)
  01f98a4  rlwinm 3, 3, 0, 27, 27
  01f98a8  cmpwi 3, 0
  01f98ac  bt 2, 0x1f98f8
  01f98b0  li 3, 0
  01f98b4  bl 0x481d0
  01f98b8  nop
  01f98bc  li 4, 1
  01f98c0  li 3, 0
  01f98c4  bl 0xb72b0
  01f98c8  nop
  01f98cc  li 4, 2
  01f98d0  li 5, 4
  01f98d4  ori 3, 31, 0
  01f98d8  li 6, 1
  01f98dc  stb 4, 188(31)
  01f98e0  stb 5, 32(31)
  01f98e4  li 4, 0
  01f98e8  li 5, 0
  01f98ec  bl 0xfddc0
  01f98f0  nop
  01f98f4  b 0x1f9abc
  01f98f8  lbz 3, 32(31)
  01f98fc  cmpwi 3, 5
  01f9900  bt 2, 0x1f9970
  01f9904  li 7, 2
  01f9908  addic 3, 31, 16
  01f990c  addic 4, 31, 64
  01f9910  li 5, 0
  01f9914  sth 7, 82(30)
  01f9918  li 6, 0
  01f991c  li 7, 0
  01f9920  bl 0x47f74
  01f9924  nop
  01f9928  lbz 3, 83(31)
  01f992c  cmpwi 3, 5
  01f9930  bt 2, 0x1f9970
  01f9934  lis 3, 32
  01f9938  lis 4, 114
  01f993c  addi 3, 3, -27160
  01f9940  li 5, 0
  01f9944  lfs 1, 40(3)
  01f9948  lfs 2, -3056(4)
  01f994c  ori 3, 31, 0
  01f9950  li 4, 5
  01f9954  fmuls 1, 2, 1
  01f9958  fctiwz 1, 1
  01f995c  stfd 1, 368(1)
  01f9960  lwz 6, 372(1)
  01f9964  extsw 6, 6
  01f9968  bl 0xfddc0
  01f996c  nop
  01f9970  li 3, 5
  01f9974  stb 3, 32(31)
  01f9978  b 0x1f9abc
  01f997c  lbz 3, 188(31)
  01f9980  cmpwi 3, 2
  01f9984  bf 2, 0x1f9a20
  01f9988  lis 3, 151
  01f998c  addic 3, 3, -25376
  01f9990  lwz 4, 8320(3)
  01f9994  lfs 4, 20(4)
  01f9998  lfs 5, 16(4)
  01f999c  fsubs 2, 2, 4
  01f99a0  fsubs 1, 1, 5
  01f99a4  lfs 4, 24(4)
  01f99a8  fsubs 3, 3, 4
  01f99ac  lis 4, 32
  01f99b0  addi 4, 4, -27160
  01f99b4  fmuls 2, 2, 2
  01f99b8  fmadds 1, 1, 1, 2
  01f99bc  lfs 2, 44(4)
  01f99c0  fmadds 1, 3, 3, 1
  01f99c4  fsqrts 1, 1
  01f99c8  fcmpu 0, 1, 2
  01f99cc  bt 1, 0x1f99dc
  01f99d0  lwz 3, 764(3)
  01f99d4  cmpw 3, 31
  01f99d8  bt 2, 0x1f9abc
  01f99dc  lis 3, 32
  01f99e0  li 4, 48
  01f99e4  vspltisw 2, -1
  01f99e8  addi 3, 3, -27160
  01f99ec  stb 25, 188(31)
  01f99f0  lis 5, 114
  01f99f4  li 6, -3056
  01f99f8  vslw 2, 2, 2
  01f99fc  lvlx 3, 4, 3
  01f9a00  li 3, 66
  01f9a04  vspltw 3, 3, 0
  01f9a08  lvlx 4, 6, 5
  01f9a0c  vmaddfp 2, 4, 3, 2
  01f9a10  vctsxs 2, 2, 0
  01f9a14  vsplth 2, 2, 1
  01f9a18  stvehx 2, 3, 30
  01f9a1c  b 0x1f9abc
  01f9a20  lis 3, 151
  01f9a24  addic 3, 3, -25376
  01f9a28  lwz 4, 8332(3)
  01f9a2c  cmpwi 1, 4, 7
  01f9a30  cmpwi 4, 20
  01f9a34  cror 2, 2, 6
  01f9a38  bt 2, 0x1f9abc
  01f9a3c  lwz 4, 8324(3)
  01f9a40  cmpwi 4, 61
  01f9a44  bt 2, 0x1f9abc
  01f9a48  lwz 4, 764(3)
  01f9a4c  cmpw 4, 31
  01f9a50  bf 2, 0x1f9abc
  01f9a54  lwz 3, 8320(3)
  01f9a58  lfs 4, 20(3)
  01f9a5c  lfs 5, 16(3)
  01f9a60  fsubs 2, 2, 4
  01f9a64  fsubs 1, 1, 5
  01f9a68  lfs 4, 24(3)
  01f9a6c  fsubs 3, 3, 4
  01f9a70  lis 3, 32
  01f9a74  fmuls 2, 2, 2
  01f9a78  addi 3, 3, -27160
  01f9a7c  fmadds 1, 1, 1, 2
  01f9a80  lfs 2, 44(3)
  01f9a84  fmadds 1, 3, 3, 1
  01f9a88  fsqrts 1, 1
  01f9a8c  fcmpu 0, 1, 2
  01f9a90  cror 6, 1, 2
  01f9a94  bt 6, 0x1f9abc
  01f9a98  lhz 3, 66(30)
  01f9a9c  cmpwi 3, 0
  01f9aa0  bf 2, 0x1f9abc
  01f9aa4  li 5, 1
  01f9aa8  li 3, 50
  01f9aac  li 4, 1
  01f9ab0  stb 5, 188(31)
  01f9ab4  bl 0xb72b0
  01f9ab8  nop
  01f9abc  lbz 3, 32(31)
  01f9ac0  cmpwi 3, 3
  01f9ac4  cmpwi 1, 3, 0
  01f9ac8  cmpwi 6, 3, 4
  01f9acc  cmpwi 7, 3, 5
  01f9ad0  bt 1, 0x1f9adc
  01f9ad4  bt 6, 0x1f9ae8
  01f9ad8  b 0x1fad30
  01f9adc  bf 25, 0x1f9b70
  01f9ae0  bf 29, 0x1fa000
  01f9ae4  b 0x1fad30
  01f9ae8  ori 3, 31, 0
  01f9aec  li 4, 0
  01f9af0  ori 5, 30, 0
  01f9af4  bl 0xf0ea8
  01f9af8  nop
  01f9afc  lfs 1, 16(31)
  01f9b00  lfs 2, 24(31)
  01f9b04  ori 3, 31, 0
  01f9b08  stfs 1, 64(1)
  01f9b0c  stfs 2, 72(1)
  01f9b10  lfs 1, 20(31)
  01f9b14  lfs 2, 28(31)
  01f9b18  stfs 1, 68(1)
  01f9b1c  stfs 2, 76(1)
  01f9b20  ld 5, 64(1)
  01f9b24  ld 6, 72(1)
  01f9b28  bl 0x342088
  01f9b2c  nop
  01f9b30  li 3, 4
  01f9b34  lfs 1, 24(31)
  01f9b38  lis 4, 150
  01f9b3c  li 5, -1
  01f9b40  stb 3, 32(31)
  01f9b44  stfs 1, 92(30)
  01f9b48  stw 25, 68(30)
  01f9b4c  addic 3, 4, 14176
  01f9b50  stw 25, 72(31)
  01f9b54  sth 25, 66(30)
  01f9b58  sth 25, 64(30)
  01f9b5c  stw 25, 72(30)
  01f9b60  stw 25, 76(30)
  01f9b64  stw 5, 104(30)
  01f9b68  stw 31, 108(3)
  01f9b6c  b 0x1fad30
  01f9b70  lis 3, 151
  01f9b74  lfs 3, 20(31)
  01f9b78  lfs 2, 16(31)
  01f9b7c  addic 3, 3, -25376
  01f9b80  lis 4, 32
  01f9b84  lfs 1, 132(3)
  01f9b88  lfs 29, 128(3)
  01f9b8c  fsubs 4, 3, 1
  01f9b90  fsubs 5, 2, 29
  01f9b94  addi 4, 4, -27160
  01f9b98  lfs 30, 52(4)
  01f9b9c  fmuls 4, 4, 4
  01f9ba0  fmadds 4, 5, 5, 4
  01f9ba4  fsqrts 4, 4
  01f9ba8  fcmpu 0, 4, 30
  01f9bac  bt 0, 0x1f9bbc
  01f9bb0  lwz 3, 764(3)
  01f9bb4  cmpw 3, 31
  01f9bb8  bf 2, 0x1f9f74
  01f9bbc  fsubs 2, 29, 2
  01f9bc0  fsubs 1, 1, 3
  01f9bc4  lis 3, 32
  01f9bc8  lfs 3, 92(30)
  01f9bcc  addi 3, 3, -27160
  01f9bd0  lis 5, 115
  01f9bd4  lfs 4, 56(3)
  01f9bd8  lfs 5, 24(31)
  01f9bdc  fabs 7, 2
  01f9be0  fabs 8, 1
  01f9be4  lfs 6, 60(3)
  01f9be8  stfs 2, 320(1)
  01f9bec  fsubs 2, 3, 4
  01f9bf0  stfs 1, 324(1)
  01f9bf4  addic 5, 5, 22784
  01f9bf8  fsubs 1, 7, 8
  01f9bfc  fsubs 2, 2, 5
  01f9c00  stfs 1, 328(1)
  01f9c04  fmadds 1, 2, 6, 5
  01f9c08  lwz 4, 320(1)
  01f9c0c  lfs 2, 320(1)
  01f9c10  lwz 6, 324(1)
  01f9c14  fabs 4, 2
  01f9c18  rlwinm 6, 6, 3, 29, 29
  01f9c1c  stfs 1, 24(31)
  01f9c20  lfs 29, 64(3)
  01f9c24  lwz 3, 328(1)
  01f9c28  lfs 1, 328(1)
  01f9c2c  lfs 2, 324(1)
  01f9c30  fsub 3, 1, 29
  01f9c34  rlwimi 6, 3, 2, 30, 30
  01f9c38  fabs 5, 2
  01f9c3c  ori 3, 5, 0
  01f9c40  fsub 6, 1, 29
  01f9c44  rlwimi 6, 4, 4, 28, 28
  01f9c48  rlwimi 3, 6, 2, 26, 28
  01f9c4c  slwi 4, 6, 2
  01f9c50  clrldi 3, 3, 32
  01f9c54  fsel 4, 3, 4, 8
  01f9c58  lfsx 1, 5, 4
  01f9c5c  lfs 2, 4(3)
  01f9c60  fsel 3, 6, 5, 7
  01f9c64  fcmpu 0, 4, 29
  01f9c68  bt 1, 0x1f9c74
  01f9c6c  fmr 1, 29
  01f9c70  b 0x1f9d98
  01f9c74  fsubs 5, 3, 4
  01f9c78  fadds 3, 3, 4
  01f9c7c  addic 3, 1, 16
  01f9c80  li 7, 2
  01f9c84  addic 5, 3, 332
  01f9c88  addic 4, 3, 316
  01f9c8c  mtctr 7
  01f9c90  fdivs 3, 5, 3
  01f9c94  fmuls 4, 3, 3
  01f9c98  stfs 3, 344(1)
  01f9c9c  stfs 3, 336(1)
  01f9ca0  stfs 3, 340(1)
  01f9ca4  stfs 3, 332(1)
  01f9ca8  lfs 6, 344(1)
  01f9cac  lfs 7, 336(1)
  01f9cb0  lfs 8, 340(1)
  01f9cb4  fmuls 5, 4, 4
  01f9cb8  fmuls 7, 7, 4
  01f9cbc  fmuls 6, 6, 5
  01f9cc0  fmuls 3, 5, 5
  01f9cc4  fmuls 5, 8, 5
  01f9cc8  stfs 7, 336(1)
  01f9ccc  fmuls 4, 6, 4
  01f9cd0  stfs 5, 340(1)
  01f9cd4  stfs 4, 344(1)
  01f9cd8  lfs 4, 316(3)
  01f9cdc  fmuls 4, 4, 3
  01f9ce0  stfs 4, 332(3)
  01f9ce4  lfs 4, 4(4)
  01f9ce8  addic 4, 4, 8
  01f9cec  fmuls 4, 4, 3
  01f9cf0  addic 3, 3, 8
  01f9cf4  stfs 4, 4(5)
  01f9cf8  addic 5, 5, 8
  01f9cfc  bdnz 0x1f9cd8
  01f9d00  li 5, 4
  01f9d04  ori 3, 1, 0
  01f9d08  mtctr 5
  01f9d0c  lis 4, 115
  01f9d10  addic 5, 3, 332
  01f9d14  addic 4, 4, 22752
  01f9d18  ori 6, 5, 0
  01f9d1c  lfs 3, 332(3)
  01f9d20  lfs 4, 0(4)
  01f9d24  fmuls 3, 3, 4
  01f9d28  lfs 4, 4(4)
  01f9d2c  addic 4, 4, 8
  01f9d30  stfs 3, 332(3)
  01f9d34  lfs 3, 4(5)
  01f9d38  addic 3, 3, 8
  01f9d3c  fmuls 3, 3, 4
  01f9d40  stfs 3, 4(5)
  01f9d44  addic 5, 5, 8
  01f9d48  bdnz 0x1f9d1c
  01f9d4c  ori 3, 1, 0
  01f9d50  fmr 3, 29
  01f9d54  mtctr 7
  01f9d58  lfs 4, 332(3)
  01f9d5c  fadds 3, 3, 4
  01f9d60  lfs 4, 4(6)
  01f9d64  addic 3, 3, 16
  01f9d68  lfs 5, 8(6)
  01f9d6c  lfs 6, 12(6)
  01f9d70  addic 6, 6, 16
  01f9d74  fadds 3, 3, 4
  01f9d78  fadds 3, 3, 5
  01f9d7c  fadds 3, 3, 6
  01f9d80  bdnz 0x1f9d58
  01f9d84  lis 3, 32
  01f9d88  addi 3, 3, -27160
  01f9d8c  lfs 4, 68(3)
  01f9d90  fadds 3, 3, 4
  01f9d94  fmadds 1, 3, 1, 2
  01f9d98  lfs 2, 72(31)
  01f9d9c  bl 0x5025e0
  01f9da0  nop
  01f9da4  lis 3, 32
  01f9da8  addi 29, 3, -27160
  01f9dac  lfs 2, 4(29)
  01f9db0  bl 0x502578
  01f9db4  nop
  01f9db8  lfs 2, 72(29)
  01f9dbc  lfs 3, 96(30)
  01f9dc0  fmuls 2, 1, 2
  01f9dc4  fmr 1, 3
  01f9dc8  bl 0x502578
  01f9dcc  nop
  01f9dd0  lfs 2, 76(29)
  01f9dd4  fmuls 2, 1, 2
  01f9dd8  stfs 2, 96(30)
  01f9ddc  lfs 1, 72(31)
  01f9de0  bl 0x502578
  01f9de4  nop
  01f9de8  lis 3, 118
  01f9dec  stfs 1, 72(31)
  01f9df0  lfs 1, 208(31)
  01f9df4  addic 4, 3, 25584
  01f9df8  lfs 2, 212(31)
  01f9dfc  lfs 3, 192(31)
  01f9e00  lfs 4, 4(4)
  01f9e04  lfs 5, 25584(3)
  01f9e08  fmuls 1, 1, 4
  01f9e0c  lfs 6, 216(31)
  01f9e10  fmuls 2, 2, 4
  01f9e14  lfs 7, 220(31)
  01f9e18  fmuls 6, 6, 4
  01f9e1c  lfs 8, 196(31)
  01f9e20  fmuls 4, 7, 4
  01f9e24  lfs 7, 200(31)
  01f9e28  lfs 9, 224(31)
  01f9e2c  lfs 10, 204(31)
  01f9e30  lfs 11, 8(4)
  01f9e34  fmadds 1, 3, 5, 1
  01f9e38  fmadds 2, 8, 5, 2
  01f9e3c  lfs 3, 228(31)
  01f9e40  fmadds 6, 7, 5, 6
  01f9e44  fmadds 4, 10, 5, 4
  01f9e48  lfs 5, 232(31)
  01f9e4c  lfs 7, 236(31)
  01f9e50  lfs 8, 12(4)
  01f9e54  fmadds 1, 9, 11, 1
  01f9e58  fmadds 2, 3, 11, 2
  01f9e5c  fmadds 3, 5, 11, 6
  01f9e60  fmadds 4, 7, 11, 4
  01f9e64  lfs 5, 128(1)
  01f9e68  lfs 6, 132(1)
  01f9e6c  lfs 7, 136(1)
  01f9e70  lwz 3, 104(30)
  01f9e74  cmpwi 3, -1
  01f9e78  fadds 1, 1, 5
  01f9e7c  fadds 2, 2, 6
  01f9e80  fadds 3, 3, 7
  01f9e84  fadds 4, 4, 8
  01f9e88  stfs 1, 144(1)
  01f9e8c  stfs 2, 148(1)
  01f9e90  stfs 3, 152(1)
  01f9e94  stfs 4, 156(1)
  01f9e98  bf 2, 0x1f9edc
  01f9e9c  addic 3, 1, 144
  01f9ea0  stw 25, 108(30)
  01f9ea4  fmr 1, 31
  01f9ea8  fmr 2, 29
  01f9eac  fmr 3, 30
  01f9eb0  fmr 4, 30
  01f9eb4  fmr 5, 30
  01f9eb8  bl 0xda4ac
  01f9ebc  nop
  01f9ec0  stw 3, 104(30)
  01f9ec4  li 4, 0
  01f9ec8  li 3, 1
  01f9ecc  ori 5, 31, 0
  01f9ed0  bl 0x15d12c
  01f9ed4  nop
  01f9ed8  b 0x1fad30
  01f9edc  lis 4, 162
  01f9ee0  slwi 3, 3, 5
  01f9ee4  addic 4, 4, -8448
  01f9ee8  addc 3, 4, 3
  01f9eec  clrldi 3, 3, 32
  01f9ef0  stfs 1, 16(3)
  01f9ef4  lfs 1, 148(1)
  01f9ef8  stfs 1, 20(3)
  01f9efc  lfs 1, 152(1)
  01f9f00  stfs 1, 24(3)
  01f9f04  lwz 4, 108(30)
  01f9f08  addic 4, 4, 1
  01f9f0c  cmpwi 4, 40
  01f9f10  cmpwi 1, 4, 24
  01f9f14  stw 4, 108(30)
  01f9f18  bf 1, 0x1f9f34
  01f9f1c  lis 4, 16076
  01f9f20  lis 5, 16512
  01f9f24  ori 4, 4, 52429
  01f9f28  stw 5, 0(3)
  01f9f2c  stw 4, 28(3)
  01f9f30  b 0x1fad30
  01f9f34  rlwinm 5, 4, 0, 29, 29
  01f9f38  cmpwi 5, 0
  01f9f3c  bt 2, 0x1f9f54
  01f9f40  bf 5, 0x1f9f6c
  01f9f44  li 5, 10
  01f9f48  and 4, 4, 5
  01f9f4c  cmpwi 4, 10
  01f9f50  bf 2, 0x1f9f6c
  01f9f54  lis 4, 16076
  01f9f58  lis 5, 16512
  01f9f5c  ori 4, 4, 52429
  01f9f60  stw 5, 0(3)
  01f9f64  stw 4, 28(3)
  01f9f68  b 0x1fad30
  01f9f6c  stw 25, 28(3)
  01f9f70  b 0x1fad30
  01f9f74  lwz 4, 24(31)
  01f9f78  lwz 5, 92(30)
  01f9f7c  srawi 7, 4, 31
  01f9f80  srawi 6, 5, 31
  01f9f84  lfs 2, 24(31)
  01f9f88  srwi 9, 7, 1
  01f9f8c  lfs 1, 92(30)
  01f9f90  srwi 8, 6, 1
  01f9f94  xor 4, 9, 4
  01f9f98  xor 5, 8, 5
  01f9f9c  subc 4, 4, 7
  01f9fa0  subc 5, 5, 6
  01f9fa4  cmpw 4, 5
  01f9fa8  bf 0, 0x1f9fb8
  01f9fac  lis 4, 114
  01f9fb0  lfs 1, -3052(4)
  01f9fb4  fadds 1, 2, 1
  01f9fb8  cmpw 3, 31
  01f9fbc  stfs 1, 24(31)
  01f9fc0  bt 2, 0x1fad30
  01f9fc4  lwz 3, 104(30)
  01f9fc8  cmpwi 3, -1
  01f9fcc  bt 2, 0x1fad30
  01f9fd0  li 3, 2
  01f9fd4  li 4, 0
  01f9fd8  ori 5, 31, 0
  01f9fdc  bl 0x15d12c
  01f9fe0  nop
  01f9fe4  lwz 3, 104(30)
  01f9fe8  extsw 3, 3
  01f9fec  bl 0xda9e8
  01f9ff0  nop
  01f9ff4  li 3, -1
  01f9ff8  stw 3, 104(30)
  01f9ffc  b 0x1fad30
  01fa000  lis 3, 150
  01fa004  lwz 4, 24(31)
  01fa008  lwz 5, 92(30)
  01fa00c  addic 3, 3, 14176
  01fa010  srawi 6, 4, 31
  01fa014  srawi 7, 5, 31
  01fa018  srwi 8, 6, 1
  01fa01c  stw 31, 108(3)
  01fa020  srwi 3, 7, 1
  01fa024  lfs 2, 24(31)
  01fa028  xor 4, 8, 4
  01fa02c  lfs 1, 92(30)
  01fa030  xor 3, 3, 5
  01fa034  lfs 4, 168(1)
  01fa038  subc 4, 4, 6
  01fa03c  subc 3, 3, 7
  01fa040  cmpw 4, 3
  01fa044  bf 0, 0x1fa054
  01fa048  lis 3, 114
  01fa04c  lfs 1, -3052(3)
  01fa050  fadds 1, 2, 1
  01fa054  lis 3, 151
  01fa058  lis 4, 32
  01fa05c  stfs 1, 24(31)
  01fa060  addic 3, 3, -25376
  01fa064  addi 4, 4, -27160
  01fa068  lis 5, 114
  01fa06c  lfs 1, 7456(3)
  01fa070  stfs 1, 160(1)
  01fa074  lfs 2, 80(4)
  01fa078  lfs 31, 7460(3)
  01fa07c  lwz 3, -1224(5)
  01fa080  fmr 22, 2
  01fa084  cmpwi 3, 0
  01fa088  bt 2, 0x1fa098
  01fa08c  lis 3, 32
  01fa090  addi 3, 3, -27160
  01fa094  lfs 2, 56(3)
  01fa098  fmuls 2, 31, 2
  01fa09c  fmr 5, 1
  01fa0a0  lis 3, 32
  01fa0a4  addi 3, 3, -27160
  01fa0a8  fmuls 3, 2, 2
  01fa0ac  fneg 6, 2
  01fa0b0  fneg 3, 3
  01fa0b4  stfs 6, 164(1)
  01fa0b8  lfs 31, 56(3)
  01fa0bc  fneg 3, 3
  01fa0c0  fmadds 3, 5, 5, 3
  01fa0c4  fsqrts 7, 3
  01fa0c8  fcmpu 0, 7, 31
  01fa0cc  cror 6, 0, 2
  01fa0d0  bt 6, 0x1fa130
  01fa0d4  frsqrte 5, 3
  01fa0d8  lis 3, 32
  01fa0dc  addi 3, 3, -27160
  01fa0e0  lfs 6, 84(3)
  01fa0e4  fmuls 7, 3, 5
  01fa0e8  fmuls 8, 6, 5
  01fa0ec  fnmsubs 7, 7, 5, 31
  01fa0f0  fmadds 5, 7, 8, 5
  01fa0f4  fmuls 7, 3, 5
  01fa0f8  fmuls 8, 6, 5
  01fa0fc  fnmsubs 7, 7, 5, 31
  01fa100  fmadds 5, 7, 8, 5
  01fa104  fmuls 3, 3, 5
  01fa108  fmuls 6, 6, 5
  01fa10c  fnmsubs 3, 3, 5, 31
  01fa110  fmadds 3, 3, 6, 5
  01fa114  fmuls 2, 2, 3
  01fa118  fmuls 5, 1, 3
  01fa11c  fmuls 1, 4, 3
  01fa120  fneg 2, 2
  01fa124  stfs 5, 160(1)
  01fa128  stfs 1, 168(1)
  01fa12c  stfs 2, 164(1)
  01fa130  lis 3, 32
  01fa134  addi 29, 3, -27160
  01fa138  lis 3, 114
  01fa13c  lfs 1, 88(29)
  01fa140  lfs 3, -3048(3)
  01fa144  lfs 2, 96(30)
  01fa148  fmuls 1, 3, 1
  01fa14c  lfs 4, 100(30)
  01fa150  fmuls 1, 1, 5
  01fa154  fneg 1, 1
  01fa158  fadds 2, 2, 1
  01fa15c  stfs 2, 96(30)
  01fa160  lfs 1, 68(29)
  01fa164  lfs 5, 164(1)
  01fa168  fmuls 1, 3, 1
  01fa16c  fmuls 1, 1, 5
  01fa170  fneg 1, 1
  01fa174  fadds 1, 4, 1
  01fa178  stfs 1, 100(30)
  01fa17c  lfs 1, 72(31)
  01fa180  bl 0x502578
  01fa184  nop
  01fa188  stfs 1, 72(31)
  01fa18c  lfs 1, 68(30)
  01fa190  lfs 2, 100(30)
  01fa194  bl 0x502578
  01fa198  nop
  01fa19c  fmr 5, 1
  01fa1a0  lfs 2, 96(30)
  01fa1a4  stfs 5, 68(30)
  01fa1a8  lfs 1, 92(29)
  01fa1ac  fcmpu 0, 5, 1
  01fa1b0  cror 6, 1, 2
  01fa1b4  bt 6, 0x1fa1d8
  01fa1b8  lis 3, -16634
  01fa1bc  fmr 5, 1
  01fa1c0  lis 4, 32
  01fa1c4  ori 3, 3, 2706
  01fa1c8  addi 4, 4, -27160
  01fa1cc  stw 3, 68(30)
  01fa1d0  lfs 1, 64(4)
  01fa1d4  b 0x1fa210
  01fa1d8  lis 3, 32
  01fa1dc  addi 3, 3, -27160
  01fa1e0  lfs 3, 96(3)
  01fa1e4  lfs 1, 100(30)
  01fa1e8  fcmpu 0, 5, 3
  01fa1ec  cror 6, 0, 2
  01fa1f0  bt 6, 0x1fa210
  01fa1f4  lis 3, 16134
  01fa1f8  lis 4, 32
  01fa1fc  fmr 5, 3
  01fa200  ori 3, 3, 2706
  01fa204  addi 4, 4, -27160
  01fa208  stw 3, 68(30)
  01fa20c  lfs 1, 64(4)
  01fa210  fmr 3, 1
  01fa214  lis 3, 32
  01fa218  fneg 1, 5
  01fa21c  li 4, 1
  01fa220  addi 3, 3, -27160
  01fa224  lfs 4, 100(3)
  01fa228  addic 3, 30, 16
  01fa22c  fmuls 2, 2, 4
  01fa230  fmuls 3, 3, 4
  01fa234  stfs 2, 96(30)
  01fa238  stfs 3, 100(30)
  01fa23c  bl 0x501980
  01fa240  nop
  01fa244  lis 3, 150
  01fa248  addic 3, 3, 19008
  01fa24c  lwz 4, 160(3)
  01fa250  rlwinm 4, 4, 0, 26, 26
  01fa254  cmpwi 4, 0
  01fa258  bt 2, 0x1fabb8
  01fa25c  lwz 3, 164(3)
  01fa260  rlwinm 3, 3, 0, 26, 26
  01fa264  cmpwi 3, 0
  01fa268  bt 2, 0x1fa2b0
  01fa26c  li 4, 0
  01fa270  lhz 5, 84(30)
  01fa274  li 3, 4
  01fa278  li 7, 3
  01fa27c  subc 4, 4, 5
  01fa280  subc 8, 3, 7
  01fa284  cntlzw 4, 4
  01fa288  ori 3, 31, 0
  01fa28c  sldi 4, 4, 58
  01fa290  li 5, 0
  01fa294  sradi 4, 4, 63
  01fa298  li 6, 1
  01fa29c  and 4, 4, 8
  01fa2a0  addc 4, 7, 4
  01fa2a4  bl 0xfddc0
  01fa2a8  nop
  01fa2ac  b 0x1fabec
  01fa2b0  lbz 3, 82(31)
  01fa2b4  cmpwi 3, 3
  01fa2b8  cmpwi 1, 3, 4
  01fa2bc  bf 2, 0x1fa738
  01fa2c0  ori 3, 31, 0
  01fa2c4  bl 0xefe40
  01fa2c8  nop
  01fa2cc  fsubs 1, 1, 31
  01fa2d0  lis 3, 32
  01fa2d4  addi 3, 3, -27160
  01fa2d8  lfs 2, 104(3)
  01fa2dc  fabs 1, 1
  01fa2e0  fcmpu 0, 1, 2
  01fa2e4  bt 1, 0x1fa70c
  01fa2e8  lis 3, 32
  01fa2ec  lis 28, 114
  01fa2f0  addi 24, 3, -27160
  01fa2f4  lfs 4, 108(24)
  01fa2f8  lfs 3, -3052(28)
  01fa2fc  lfs 1, 4(24)
  01fa300  fmuls 30, 3, 4
  01fa304  lfs 2, 72(31)
  01fa308  bl 0x502578
  01fa30c  nop
  01fa310  fmr 2, 1
  01fa314  lfs 3, 68(30)
  01fa318  addic 3, 1, 176
  01fa31c  fmr 1, 30
  01fa320  bl 0xfe610
  01fa324  nop
  01fa328  addic 27, 1, 192
  01fa32c  ori 3, 31, 0
  01fa330  li 4, 1
  01fa334  ori 5, 27, 0
  01fa338  bl 0xf1114
  01fa33c  nop
  01fa340  lis 26, 114
  01fa344  lfs 1, 112(24)
  01fa348  lfs 2, 192(1)
  01fa34c  ori 3, 31, 0
  01fa350  lfs 3, 200(1)
  01fa354  stfs 2, 64(1)
  01fa358  lfs 2, -3056(26)
  01fa35c  stfs 3, 72(1)
  01fa360  fmuls 1, 2, 1
  01fa364  lfs 3, 176(1)
  01fa368  lfs 4, 184(1)
  01fa36c  stfs 3, 80(1)
  01fa370  stfs 4, 88(1)
  01fa374  lfs 2, 196(1)
  01fa378  lfs 3, 204(1)
  01fa37c  stfs 2, 68(1)
  01fa380  stfs 3, 76(1)
  01fa384  lfs 2, 180(1)
  01fa388  lfs 3, 188(1)
  01fa38c  fctiwz 1, 1
  01fa390  stfs 2, 84(1)
  01fa394  stfs 3, 92(1)
  01fa398  ld 5, 64(1)
  01fa39c  ld 6, 72(1)
  01fa3a0  stfd 1, 368(1)
  01fa3a4  lwz 9, 372(1)
  01fa3a8  ld 7, 80(1)
  01fa3ac  extsw 9, 9
  01fa3b0  ld 8, 88(1)
  01fa3b4  bl 0x229a90
  01fa3b8  nop
  01fa3bc  li 3, 0
  01fa3c0  li 4, 0
  01fa3c4  ori 5, 31, 0
  01fa3c8  bl 0x15d12c
  01fa3cc  nop
  01fa3d0  lis 3, 149
  01fa3d4  vspltisw 2, -1
  01fa3d8  lis 5, 15605
  01fa3dc  addic 3, 3, 5056
  01fa3e0  li 4, 116
  01fa3e4  ori 5, 5, 49807
  01fa3e8  li 6, -3056
  01fa3ec  vslw 2, 2, 2
  01fa3f0  stw 5, 352(3)
  01fa3f4  lvlx 3, 4, 24
  01fa3f8  lvlx 4, 6, 26
  01fa3fc  li 4, 360
  01fa400  vspltw 3, 3, 0
  01fa404  li 6, 120
  01fa408  lfs 30, 116(24)
  01fa40c  li 7, 376
  01fa410  vmaddfp 2, 4, 3, 2
  01fa414  vspltisw 3, -1
  01fa418  ori 29, 25, 0
  01fa41c  vslw 3, 3, 3
  01fa420  vctsxs 2, 2, 0
  01fa424  vspltw 2, 2, 0
  01fa428  stvewx 2, 4, 3
  01fa42c  stw 5, 368(3)
  01fa430  lvlx 2, 6, 24
  01fa434  vspltw 2, 2, 0
  01fa438  lfs 29, 120(24)
  01fa43c  vmaddfp 2, 4, 2, 3
  01fa440  vctsxs 2, 2, 0
  01fa444  vspltw 2, 2, 0
  01fa448  stvewx 2, 7, 3
  01fa44c  sth 25, 84(30)
  01fa450  lfs 28, 64(24)
  01fa454  lfs 27, 124(24)
  01fa458  lfs 26, 128(24)
  01fa45c  lfs 25, 132(24)
  01fa460  lfs 24, 40(24)
  01fa464  lfs 23, 136(24)
  01fa468  fmr 1, 22
  01fa46c  stw 25, 208(1)
  01fa470  stw 25, 212(1)
  01fa474  fmr 2, 31
  01fa478  stw 25, 216(1)
  01fa47c  stw 25, 220(1)
  01fa480  bl 0xfcbe8
  01fa484  nop
  01fa488  stfs 1, 208(1)
  01fa48c  fmr 2, 31
  01fa490  fmr 1, 22
  01fa494  bl 0xfcbe8
  01fa498  nop
  01fa49c  stfs 1, 212(1)
  01fa4a0  fmr 1, 22
  01fa4a4  fmr 2, 31
  01fa4a8  bl 0xfcbe8
  01fa4ac  nop
  01fa4b0  lfs 3, 180(1)
  01fa4b4  lfs 4, 176(1)
  01fa4b8  fmuls 2, 3, 3
  01fa4bc  lfs 5, 212(1)
  01fa4c0  lfs 6, 184(1)
  01fa4c4  fmuls 7, 5, 5
  01fa4c8  lfs 8, 208(1)
  01fa4cc  lis 3, 114
  01fa4d0  fmadds 2, 4, 4, 2
  01fa4d4  fmadds 7, 8, 8, 7
  01fa4d8  lfs 9, -3064(3)
  01fa4dc  fmadds 9, 9, 27, 31
  01fa4e0  fmadds 2, 6, 6, 2
  01fa4e4  fmadds 7, 1, 1, 7
  01fa4e8  stfs 1, 216(1)
  01fa4ec  lfs 10, 188(1)
  01fa4f0  fsqrts 2, 2
  01fa4f4  lfs 11, -3052(28)
  01fa4f8  stfs 10, 220(1)
  01fa4fc  fsqrts 7, 7
  01fa500  fmuls 9, 2, 9
  01fa504  fmuls 2, 11, 25
  01fa508  fdivs 9, 9, 7
  01fa50c  fsub 10, 28, 7
  01fa510  fsub 12, 28, 7
  01fa514  fsub 13, 28, 7
  01fa518  fsub 0, 7, 28
  01fa51c  fsub 21, 7, 28
  01fa520  fsub 7, 7, 28
  01fa524  fmuls 20, 1, 9
  01fa528  fmuls 5, 5, 9
  01fa52c  fmuls 8, 8, 9
  01fa530  fmuls 1, 11, 26
  01fa534  fsel 9, 10, 28, 20
  01fa538  fsel 10, 12, 28, 5
  01fa53c  fsel 11, 13, 28, 8
  01fa540  fsel 9, 0, 9, 20
  01fa544  fsel 5, 21, 10, 5
  01fa548  fsel 7, 7, 11, 8
  01fa54c  fadds 6, 6, 9
  01fa550  fadds 3, 3, 5
  01fa554  fadds 4, 4, 7
  01fa558  stfs 6, 216(1)
  01fa55c  stfs 3, 212(1)
  01fa560  stfs 4, 208(1)
  01fa564  bl 0xfcbe8
  01fa568  nop
  01fa56c  lfs 2, 212(1)
  01fa570  lfs 3, 208(1)
  01fa574  fmuls 4, 2, 2
  01fa578  lfs 5, 216(1)
  01fa57c  lfs 6, -3056(26)
  01fa580  fmuls 7, 6, 24
  01fa584  fmuls 6, 6, 30
  01fa588  fmadds 4, 3, 3, 4
  01fa58c  fctiwz 7, 7
  01fa590  fctiwz 6, 6
  01fa594  fmadds 4, 5, 5, 4
  01fa598  fsqrts 4, 4
  01fa59c  stfd 7, 368(1)
  01fa5a0  lwz 3, 372(1)
  01fa5a4  stfd 6, 368(1)
  01fa5a8  lwz 4, 372(1)
  01fa5ac  extsw 3, 3
  01fa5b0  extsw 4, 4
  01fa5b4  fdivs 1, 1, 4
  01fa5b8  fsub 6, 28, 4
  01fa5bc  fsub 7, 28, 4
  01fa5c0  fsub 8, 28, 4
  01fa5c4  fsub 9, 4, 28
  01fa5c8  fsub 10, 4, 28
  01fa5cc  fsub 4, 4, 28
  01fa5d0  fmuls 3, 3, 1
  01fa5d4  fmuls 2, 2, 1
  01fa5d8  fmuls 1, 5, 1
  01fa5dc  fsel 5, 6, 28, 3
  01fa5e0  fsel 6, 7, 28, 2
  01fa5e4  fsel 7, 8, 28, 1
  01fa5e8  fsel 3, 9, 5, 3
  01fa5ec  fsel 2, 10, 6, 2
  01fa5f0  fsel 1, 4, 7, 1
  01fa5f4  stfs 3, 208(1)
  01fa5f8  stfs 2, 212(1)
  01fa5fc  stfs 1, 216(1)
  01fa600  bl 0xfe484
  01fa604  nop
  01fa608  lis 5, 24367
  01fa60c  fmr 1, 23
  01fa610  ori 6, 3, 0
  01fa614  addic 4, 1, 208
  01fa618  ori 3, 27, 0
  01fa61c  ori 5, 5, 20335
  01fa620  bl 0x128248
  01fa624  nop
  01fa628  addic 29, 29, 1
  01fa62c  cmpwi 29, 5
  01fa630  bt 0, 0x1fa468
  01fa634  lfs 1, 180(1)
  01fa638  lfs 2, 176(1)
  01fa63c  fmuls 3, 1, 1
  01fa640  lfs 4, 184(1)
  01fa644  lis 3, 32
  01fa648  addi 29, 3, -27160
  01fa64c  fmadds 3, 2, 2, 3
  01fa650  lfs 5, 84(29)
  01fa654  lfs 6, -3052(28)
  01fa658  fmuls 5, 6, 5
  01fa65c  fmadds 3, 4, 4, 3
  01fa660  lfs 7, -3056(26)
  01fa664  fmuls 6, 7, 29
  01fa668  fsqrts 3, 3
  01fa66c  fctiwz 6, 6
  01fa670  fdivs 5, 5, 3
  01fa674  fsub 8, 28, 3
  01fa678  fsub 9, 28, 3
  01fa67c  fsub 10, 28, 3
  01fa680  fsub 11, 3, 28
  01fa684  fsub 12, 3, 28
  01fa688  fsub 3, 3, 28
  01fa68c  fmuls 2, 2, 5
  01fa690  fmuls 1, 1, 5
  01fa694  fmuls 4, 4, 5
  01fa698  fsel 5, 8, 28, 2
  01fa69c  fsel 8, 9, 28, 1
  01fa6a0  fsel 9, 10, 28, 4
  01fa6a4  fsel 2, 11, 5, 2
  01fa6a8  fsel 1, 12, 8, 1
  01fa6ac  fsel 3, 3, 9, 4
  01fa6b0  stfs 2, 176(1)
  01fa6b4  stfs 1, 180(1)
  01fa6b8  stfs 3, 184(1)
  01fa6bc  lfs 1, 140(29)
  01fa6c0  fmuls 1, 7, 1
  01fa6c4  fctiwz 1, 1
  01fa6c8  stfd 1, 368(1)
  01fa6cc  lwz 3, 372(1)
  01fa6d0  stfd 6, 368(1)
  01fa6d4  lwz 4, 372(1)
  01fa6d8  extsw 3, 3
  01fa6dc  extsw 4, 4
  01fa6e0  bl 0xfe484
  01fa6e4  nop
  01fa6e8  lis 5, 12111
  01fa6ec  lfs 1, 144(29)
  01fa6f0  ori 6, 3, 0
  01fa6f4  addic 4, 1, 176
  01fa6f8  ori 3, 27, 0
  01fa6fc  ori 5, 5, 32639
  01fa700  bl 0x128248
  01fa704  nop
  01fa708  b 0x1fabec
  01fa70c  lbz 3, 112(31)
  01fa710  rlwinm 3, 3, 0, 30, 30
  01fa714  cmpwi 3, 0
  01fa718  bt 2, 0x1fabec
  01fa71c  ori 3, 31, 0
  01fa720  li 4, 4
  01fa724  li 5, 0
  01fa728  li 6, 1
  01fa72c  bl 0xfddc0
  01fa730  nop
  01fa734  b 0x1fabec
  01fa738  bf 6, 0x1fabec
  01fa73c  ori 3, 31, 0
  01fa740  bl 0xefe40
  01fa744  nop
  01fa748  fsubs 1, 1, 31
  01fa74c  lis 3, 32
  01fa750  addi 3, 3, -27160
  01fa754  lfs 2, 104(3)
  01fa758  fabs 1, 1
  01fa75c  fcmpu 0, 1, 2
  01fa760  bt 1, 0x1fab8c
  01fa764  lis 3, 32
  01fa768  lis 28, 114
  01fa76c  addi 24, 3, -27160
  01fa770  lfs 4, 108(24)
  01fa774  lfs 3, -3052(28)
  01fa778  lfs 1, 4(24)
  01fa77c  fmuls 30, 3, 4
  01fa780  lfs 2, 72(31)
  01fa784  bl 0x502578
  01fa788  nop
  01fa78c  fmr 2, 1
  01fa790  lfs 3, 68(30)
  01fa794  addic 3, 1, 224
  01fa798  fmr 1, 30
  01fa79c  bl 0xfe610
  01fa7a0  nop
  01fa7a4  addic 27, 1, 240
  01fa7a8  ori 3, 31, 0
  01fa7ac  li 4, 2
  01fa7b0  ori 5, 27, 0
  01fa7b4  bl 0xf1114
  01fa7b8  nop
  01fa7bc  lis 26, 114
  01fa7c0  lfs 1, 112(24)
  01fa7c4  ori 3, 31, 0
  01fa7c8  lfs 2, 240(1)
  01fa7cc  lfs 3, 248(1)
  01fa7d0  lfs 4, -3056(26)
  01fa7d4  stfs 2, 64(1)
  01fa7d8  fmuls 1, 4, 1
  01fa7dc  stfs 3, 72(1)
  01fa7e0  lfs 2, 224(1)
  01fa7e4  lfs 3, 232(1)
  01fa7e8  stfs 2, 80(1)
  01fa7ec  stfs 3, 88(1)
  01fa7f0  lfs 2, 244(1)
  01fa7f4  lfs 3, 252(1)
  01fa7f8  stfs 2, 68(1)
  01fa7fc  stfs 3, 76(1)
  01fa800  lfs 2, 228(1)
  01fa804  fctiwz 1, 1
  01fa808  stfs 2, 84(1)
  01fa80c  lfs 2, 236(1)
  01fa810  stfs 2, 92(1)
  01fa814  ld 5, 64(1)
  01fa818  ld 6, 72(1)
  01fa81c  ld 7, 80(1)
  01fa820  stfd 1, 368(1)
  01fa824  lwz 9, 372(1)
  01fa828  ld 8, 88(1)
  01fa82c  extsw 9, 9
  01fa830  bl 0x229a90
  01fa834  nop
  01fa838  li 3, 0
  01fa83c  li 4, 0
  01fa840  ori 5, 31, 0
  01fa844  bl 0x15d12c
  01fa848  nop
  01fa84c  lis 3, 149
  01fa850  lis 4, 15605
  01fa854  vspltisw 2, -1
  01fa858  addic 3, 3, 5056
  01fa85c  li 5, 116
  01fa860  ori 4, 4, 49807
  01fa864  li 6, -3056
  01fa868  vslw 2, 2, 2
  01fa86c  stw 4, 352(3)
  01fa870  lvlx 3, 5, 24
  01fa874  lvlx 4, 6, 26
  01fa878  vspltw 3, 3, 0
  01fa87c  li 5, 360
  01fa880  li 6, 120
  01fa884  lfs 30, 116(24)
  01fa888  vmaddfp 2, 4, 3, 2
  01fa88c  vspltisw 3, -1
  01fa890  li 7, 376
  01fa894  li 8, 1
  01fa898  vslw 3, 3, 3
  01fa89c  ori 29, 25, 0
  01fa8a0  vctsxs 2, 2, 0
  01fa8a4  vspltw 2, 2, 0
  01fa8a8  stvewx 2, 5, 3
  01fa8ac  stw 4, 368(3)
  01fa8b0  lvlx 2, 6, 24
  01fa8b4  vspltw 2, 2, 0
  01fa8b8  lfs 29, 120(24)
  01fa8bc  vmaddfp 2, 4, 2, 3
  01fa8c0  vctsxs 2, 2, 0
  01fa8c4  vspltw 2, 2, 0
  01fa8c8  stvewx 2, 7, 3
  01fa8cc  sth 8, 84(30)
  01fa8d0  lfs 28, 64(24)
  01fa8d4  lfs 27, 124(24)
  01fa8d8  lfs 26, 128(24)
  01fa8dc  lfs 25, 132(24)
  01fa8e0  lfs 24, 40(24)
  01fa8e4  lfs 23, 136(24)
  01fa8e8  fmr 1, 22
  01fa8ec  stw 25, 256(1)
  01fa8f0  stw 25, 260(1)
  01fa8f4  fmr 2, 31
  01fa8f8  stw 25, 264(1)
  01fa8fc  stw 25, 268(1)
  01fa900  bl 0xfcbe8
  01fa904  nop
  01fa908  stfs 1, 256(1)
  01fa90c  fmr 2, 31
  01fa910  fmr 1, 22
  01fa914  bl 0xfcbe8
  01fa918  nop
  01fa91c  stfs 1, 260(1)
  01fa920  fmr 1, 22
  01fa924  fmr 2, 31
  01fa928  bl 0xfcbe8
  01fa92c  nop
  01fa930  lfs 3, 228(1)
  01fa934  lfs 4, 224(1)
  01fa938  fmuls 2, 3, 3
  01fa93c  lfs 5, 260(1)
  01fa940  lfs 6, 232(1)
  01fa944  fmuls 7, 5, 5
  01fa948  lfs 8, 256(1)
  01fa94c  lis 3, 114
  01fa950  fmadds 2, 4, 4, 2
  01fa954  fmadds 7, 8, 8, 7
  01fa958  lfs 9, -3064(3)
  01fa95c  fmadds 9, 9, 27, 31
  01fa960  fmadds 2, 6, 6, 2
  01fa964  fmadds 7, 1, 1, 7
  01fa968  stfs 1, 264(1)
  01fa96c  lfs 10, 236(1)
  01fa970  fsqrts 2, 2
  01fa974  lfs 11, -3052(28)
  01fa978  stfs 10, 268(1)
  01fa97c  fsqrts 7, 7
  01fa980  fmuls 9, 2, 9
  01fa984  fmuls 2, 11, 25
  01fa988  fdivs 9, 9, 7
  01fa98c  fsub 10, 28, 7
  01fa990  fsub 12, 28, 7
  01fa994  fsub 13, 28, 7
  01fa998  fsub 0, 7, 28
  01fa99c  fsub 21, 7, 28
  01fa9a0  fsub 7, 7, 28
  01fa9a4  fmuls 20, 1, 9
  01fa9a8  fmuls 5, 5, 9
  01fa9ac  fmuls 8, 8, 9
  01fa9b0  fmuls 1, 11, 26
  01fa9b4  fsel 9, 10, 28, 20
  01fa9b8  fsel 10, 12, 28, 5
  01fa9bc  fsel 11, 13, 28, 8
  01fa9c0  fsel 9, 0, 9, 20
  01fa9c4  fsel 5, 21, 10, 5
  01fa9c8  fsel 7, 7, 11, 8
  01fa9cc  fadds 6, 6, 9
  01fa9d0  fadds 3, 3, 5
  01fa9d4  fadds 4, 4, 7
  01fa9d8  stfs 6, 264(1)
  01fa9dc  stfs 3, 260(1)
  01fa9e0  stfs 4, 256(1)
  01fa9e4  bl 0xfcbe8
  01fa9e8  nop
  01fa9ec  lfs 2, 260(1)
  01fa9f0  lfs 3, 256(1)
  01fa9f4  fmuls 4, 2, 2
  01fa9f8  lfs 5, 264(1)
  01fa9fc  lfs 6, -3056(26)
  01faa00  fmuls 7, 6, 24
  01faa04  fmuls 6, 6, 30
  01faa08  fmadds 4, 3, 3, 4
  01faa0c  fctiwz 7, 7
  01faa10  fctiwz 6, 6
  01faa14  fmadds 4, 5, 5, 4
  01faa18  fsqrts 4, 4
  01faa1c  stfd 7, 368(1)
  01faa20  lwz 3, 372(1)
  01faa24  stfd 6, 368(1)
  01faa28  lwz 4, 372(1)
  01faa2c  extsw 3, 3
  01faa30  extsw 4, 4
  01faa34  fdivs 1, 1, 4
  01faa38  fsub 6, 28, 4
  01faa3c  fsub 7, 28, 4
  01faa40  fsub 8, 28, 4
  01faa44  fsub 9, 4, 28
  01faa48  fsub 10, 4, 28
  01faa4c  fsub 4, 4, 28
  01faa50  fmuls 3, 3, 1
  01faa54  fmuls 2, 2, 1
  01faa58  fmuls 1, 5, 1
  01faa5c  fsel 5, 6, 28, 3
  01faa60  fsel 6, 7, 28, 2
  01faa64  fsel 7, 8, 28, 1
  01faa68  fsel 3, 9, 5, 3
  01faa6c  fsel 2, 10, 6, 2
  01faa70  fsel 1, 4, 7, 1
  01faa74  stfs 3, 256(1)
  01faa78  stfs 2, 260(1)
  01faa7c  stfs 1, 264(1)
  01faa80  bl 0xfe484
  01faa84  nop
  01faa88  lis 5, 24367
  01faa8c  fmr 1, 23
  01faa90  ori 6, 3, 0
  01faa94  addic 4, 1, 256
  01faa98  ori 3, 27, 0
  01faa9c  ori 5, 5, 20335
  01faaa0  bl 0x128248
  01faaa4  nop
  01faaa8  addic 29, 29, 1
  01faaac  cmpwi 29, 5
  01faab0  bt 0, 0x1fa8e8
  01faab4  lfs 1, 228(1)
  01faab8  lfs 2, 224(1)
  01faabc  fmuls 3, 1, 1
  01faac0  lfs 4, 232(1)
  01faac4  lis 3, 32
  01faac8  addi 29, 3, -27160
  01faacc  fmadds 3, 2, 2, 3
  01faad0  lfs 5, 84(29)
  01faad4  lfs 6, -3052(28)
  01faad8  fmuls 5, 6, 5
  01faadc  fmadds 3, 4, 4, 3
  01faae0  lfs 7, -3056(26)
  01faae4  fmuls 6, 7, 29
  01faae8  fsqrts 3, 3
  01faaec  fctiwz 6, 6
  01faaf0  fdivs 5, 5, 3
  01faaf4  fsub 8, 28, 3
  01faaf8  fsub 9, 28, 3
  01faafc  fsub 10, 28, 3
  01fab00  fsub 11, 3, 28
  01fab04  fsub 12, 3, 28
  01fab08  fsub 3, 3, 28
  01fab0c  fmuls 2, 2, 5
  01fab10  fmuls 1, 1, 5
  01fab14  fmuls 4, 4, 5
  01fab18  fsel 5, 8, 28, 2
  01fab1c  fsel 8, 9, 28, 1
  01fab20  fsel 9, 10, 28, 4
  01fab24  fsel 2, 11, 5, 2
  01fab28  fsel 1, 12, 8, 1
  01fab2c  fsel 3, 3, 9, 4
  01fab30  stfs 2, 224(1)
  01fab34  stfs 1, 228(1)
  01fab38  stfs 3, 232(1)
  01fab3c  lfs 1, 140(29)
  01fab40  fmuls 1, 7, 1
  01fab44  fctiwz 1, 1
  01fab48  stfd 1, 368(1)
  01fab4c  lwz 3, 372(1)
  01fab50  stfd 6, 368(1)
  01fab54  lwz 4, 372(1)
  01fab58  extsw 3, 3
  01fab5c  extsw 4, 4
  01fab60  bl 0xfe484
  01fab64  nop
  01fab68  lis 5, 12111
  01fab6c  lfs 1, 144(29)
  01fab70  ori 6, 3, 0
  01fab74  addic 4, 1, 224
  01fab78  ori 3, 27, 0
  01fab7c  ori 5, 5, 32639
  01fab80  bl 0x128248
  01fab84  nop
  01fab88  b 0x1fabec
  01fab8c  lbz 3, 112(31)
  01fab90  rlwinm 3, 3, 0, 30, 30
  01fab94  cmpwi 3, 0
  01fab98  bt 2, 0x1fabec
  01fab9c  ori 3, 31, 0
  01faba0  li 4, 3
  01faba4  li 5, 0
  01faba8  li 6, 1
  01fabac  bl 0xfddc0
  01fabb0  nop
  01fabb4  b 0x1fabec
  01fabb8  lbz 3, 83(31)
  01fabbc  cmpwi 3, 5
  01fabc0  bt 2, 0x1fabec
  01fabc4  lbz 3, 112(31)
  01fabc8  rlwinm 3, 3, 0, 30, 30
  01fabcc  cmpwi 3, 0
  01fabd0  bt 2, 0x1fabec
  01fabd4  ori 3, 31, 0
  01fabd8  li 4, 5
  01fabdc  li 5, 0
  01fabe0  li 6, 1
  01fabe4  bl 0xfddc0
  01fabe8  nop
  01fabec  addic 3, 30, 82
  01fabf0  bl 0x4fffb4
  01fabf4  nop
  01fabf8  cmpwi 3, 0
  01fabfc  bt 2, 0x1facf4
  01fac00  ori 3, 31, 0
  01fac04  bl 0xf31a8
  01fac08  nop
  01fac0c  lhz 3, 52(31)
  01fac10  ori 3, 3, 4
  01fac14  sth 3, 52(31)
  01fac18  bl 0x48420
  01fac1c  nop
  01fac20  ori 3, 31, 0
  01fac24  addic 5, 1, 160
  01fac28  li 4, 0
  01fac2c  bl 0xf1114
  01fac30  nop
  01fac34  lis 3, 32
  01fac38  lfs 2, 72(31)
  01fac3c  lis 4, 118
  01fac40  addi 3, 3, -27160
  01fac44  lfs 30, 4(3)
  01fac48  lfs 29, 25568(4)
  01fac4c  fmr 1, 30
  01fac50  bl 0x502578
  01fac54  nop
  01fac58  fmr 2, 1
  01fac5c  addic 3, 1, 272
  01fac60  lfs 3, 68(30)
  01fac64  fmr 1, 29
  01fac68  bl 0xfe610
  01fac6c  nop
  01fac70  lis 3, 118
  01fac74  lfs 1, 280(1)
  01fac78  lfs 2, 160(1)
  01fac7c  lfs 3, 272(1)
  01fac80  fadds 2, 2, 3
  01fac84  lfs 4, 25572(3)
  01fac88  lfs 3, 164(1)
  01fac8c  addic 3, 1, 288
  01fac90  fadds 1, 1, 4
  01fac94  lfs 4, 276(1)
  01fac98  lfs 5, 168(1)
  01fac9c  fadds 3, 3, 4
  01faca0  lfs 4, 172(1)
  01faca4  stfs 4, 300(1)
  01faca8  stfs 2, 288(1)
  01facac  fadds 4, 5, 1
  01facb0  stfs 1, 280(1)
  01facb4  stfs 3, 292(1)
  01facb8  stfs 4, 296(1)
  01facbc  bl 0x47b98
  01facc0  nop
  01facc4  stw 25, 304(1)
  01facc8  lfs 1, 68(30)
  01faccc  lfs 2, 72(31)
  01facd0  fneg 3, 1
  01facd4  fmr 1, 30
  01facd8  stfs 3, 308(1)
  01facdc  bl 0x502578
  01face0  nop
  01face4  stfs 1, 312(1)
  01face8  addic 3, 1, 304
  01facec  bl 0x47c08
  01facf0  nop
  01facf4  lis 3, 32
  01facf8  li 5, 4
  01facfc  fmr 1, 31
  01fad00  addi 7, 3, -27160
  01fad04  lis 4, -241
  01fad08  li 6, 0
  01fad0c  ori 3, 31, 0
  01fad10  ori 4, 4, 4095
  01fad14  lfs 2, 64(7)
  01fad18  lfs 3, 148(7)
  01fad1c  li 9, -1
  01fad20  li 7, 13
  01fad24  std 5, 112(1)
  01fad28  bl 0x55284
  01fad2c  nop
  01fad30  ld 0, 560(1)
  01fad34  mtlr 0
  01fad38  lfd 20, 448(1)
  01fad3c  lfd 21, 456(1)
  01fad40  lfd 22, 464(1)
  01fad44  lfd 23, 472(1)
  01fad48  lfd 24, 480(1)
  01fad4c  lfd 25, 488(1)
  01fad50  lfd 26, 496(1)
  01fad54  lfd 27, 504(1)
  01fad58  lfd 28, 512(1)
  01fad5c  lfd 29, 520(1)
  01fad60  lfd 30, 528(1)
  01fad64  lfd 31, 536(1)
  01fad68  ld 24, 384(1)
  01fad6c  ld 25, 392(1)
  01fad70  ld 26, 400(1)
  01fad74  ld 27, 408(1)
  01fad78  ld 28, 416(1)
  01fad7c  ld 29, 424(1)
  01fad80  ld 30, 432(1)
  01fad84  ld 31, 440(1)
  01fad88  addi 1, 1, 544
  01fad8c  blr
