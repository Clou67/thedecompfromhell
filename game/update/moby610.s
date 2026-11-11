# game/update/moby610.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M610_003d94e4:   # 0x3d94e4, 0x14 bytes
  03d94e4  lis 3, 133
  03d94e8  lis 4, 1
  03d94ec  addic 3, 3, 14300
  03d94f0  stw 4, 72(3)
  03d94f4  blr

M610_003d9508:   # 0x3d9508, 0x228 bytes
  03d9508  stdu 1, -208(1)
  03d950c  mflr 0
  03d9510  std 0, 224(1)
  03d9514  stfd 26, 160(1)
  03d9518  stfd 27, 168(1)
  03d951c  stfd 28, 176(1)
  03d9520  stfd 29, 184(1)
  03d9524  stfd 30, 192(1)
  03d9528  stfd 31, 200(1)
  03d952c  std 31, 152(1)
  03d9530  lis 6, 62
  03d9534  std 29, 136(1)
  03d9538  ori 31, 4, 0
  03d953c  lwz 29, 120(3)
  03d9540  lis 4, 165
  03d9544  std 30, 144(1)
  03d9548  lfs 31, 0(5)
  03d954c  addi 30, 6, -27400
  03d9550  sldi 3, 31, 4
  03d9554  addc 3, 29, 3
  03d9558  lwz 4, 7128(4)
  03d955c  std 28, 128(1)
  03d9560  lfs 29, 0(30)
  03d9564  clrldi 28, 3, 32
  03d9568  lfs 30, 4(5)
  03d956c  lwz 6, 1284(29)
  03d9570  lfs 28, 8(5)
  03d9574  slwi 3, 6, 7
  03d9578  addc 3, 4, 3
  03d957c  clrldi 3, 3, 32
  03d9580  lfs 1, 48(3)
  03d9584  lfs 2, 52(3)
  03d9588  stfs 1, 32(28)
  03d958c  lfs 1, 56(3)
  03d9590  stfs 2, 36(28)
  03d9594  lfs 2, 60(3)
  03d9598  stfs 1, 40(28)
  03d959c  fmr 1, 29
  03d95a0  stfs 2, 44(28)
  03d95a4  lfs 2, 24(29)
  03d95a8  lfs 27, 20(29)
  03d95ac  bl 0xfe4f0
  03d95b0  nop
  03d95b4  lfs 2, 28(29)
  03d95b8  fmr 26, 1
  03d95bc  fmr 1, 29
  03d95c0  bl 0xfe4f0
  03d95c4  nop
  03d95c8  fmuls 2, 27, 31
  03d95cc  lfs 6, 32(28)
  03d95d0  fmuls 3, 27, 30
  03d95d4  lfs 7, 36(28)
  03d95d8  fmuls 4, 27, 28
  03d95dc  lfs 8, 40(28)
  03d95e0  fmuls 5, 30, 26
  03d95e4  lis 3, 133
  03d95e8  lis 4, 133
  03d95ec  fneg 2, 2
  03d95f0  fneg 3, 3
  03d95f4  fneg 4, 4
  03d95f8  fneg 5, 5
  03d95fc  fadds 2, 6, 2
  03d9600  fadds 3, 7, 3
  03d9604  fadds 4, 8, 4
  03d9608  fadds 2, 2, 5
  03d960c  fmadds 3, 31, 26, 3
  03d9610  fadds 1, 4, 1
  03d9614  stfs 2, 32(28)
  03d9618  stfs 3, 36(28)
  03d961c  stfs 1, 40(28)
  03d9620  lfs 1, 14572(3)
  03d9624  lfs 2, 14576(4)
  03d9628  bl 0xfcbe8
  03d962c  nop
  03d9630  lis 3, 133
  03d9634  stfs 1, 44(28)
  03d9638  lis 4, 133
  03d963c  lwz 3, 14564(3)
  03d9640  lwz 4, 14568(4)
  03d9644  extsw 3, 3
  03d9648  extsw 4, 4
  03d964c  std 3, 112(1)
  03d9650  lfd 1, 112(1)
  03d9654  std 4, 112(1)
  03d9658  fcfid 1, 1
  03d965c  frsp 1, 1
  03d9660  lfd 2, 112(1)
  03d9664  fcfid 2, 2
  03d9668  frsp 2, 2
  03d966c  bl 0xfcbe8
  03d9670  nop
  03d9674  lis 3, 114
  03d9678  sldi 4, 31, 2
  03d967c  addc 4, 29, 4
  03d9680  lfs 2, -3052(3)
  03d9684  clrldi 3, 4, 32
  03d9688  fmuls 1, 1, 2
  03d968c  lfs 2, 20(29)
  03d9690  stfs 1, 1088(3)
  03d9694  lfs 3, 4(30)
  03d9698  fmuls 2, 2, 3
  03d969c  fdivs 1, 2, 1
  03d96a0  bl 0x502758
  03d96a4  nop
  03d96a8  extsw 3, 3
  03d96ac  sldi 4, 31, 1
  03d96b0  std 3, 112(1)
  03d96b4  lis 3, 114
  03d96b8  lfs 1, 8(30)
  03d96bc  lfs 2, -3056(3)
  03d96c0  lfd 3, 112(1)
  03d96c4  addc 3, 29, 4
  03d96c8  fcfid 3, 3
  03d96cc  clrldi 3, 3, 32
  03d96d0  li 4, 0
  03d96d4  frsp 3, 3
  03d96d8  fadds 1, 3, 1
  03d96dc  fmuls 1, 2, 1
  03d96e0  fctiwz 1, 1
  03d96e4  stfd 1, 112(1)
  03d96e8  lwz 5, 116(1)
  03d96ec  sth 4, 992(3)
  03d96f0  sth 5, 800(3)
  03d96f4  sth 5, 896(3)
  03d96f8  ld 0, 224(1)
  03d96fc  mtlr 0
  03d9700  lfd 26, 160(1)
  03d9704  lfd 27, 168(1)
  03d9708  lfd 28, 176(1)
  03d970c  lfd 29, 184(1)
  03d9710  lfd 30, 192(1)
  03d9714  lfd 31, 200(1)
  03d9718  ld 28, 128(1)
  03d971c  ld 29, 136(1)
  03d9720  ld 30, 144(1)
  03d9724  ld 31, 152(1)
  03d9728  addi 1, 1, 208
  03d972c  blr

M610_003d9760:   # 0x3d9760, 0x428 bytes
  03d9760  stdu 1, -320(1)
  03d9764  mflr 0
  03d9768  std 0, 336(1)
  03d976c  stfd 27, 280(1)
  03d9770  stfd 28, 288(1)
  03d9774  stfd 29, 296(1)
  03d9778  stfd 30, 304(1)
  03d977c  stfd 31, 312(1)
  03d9780  addi 0, 1, 160
  03d9784  stvx 31, 0, 0
  03d9788  std 31, 272(1)
  03d978c  lis 4, 62
  03d9790  std 23, 208(1)
  03d9794  ori 31, 3, 0
  03d9798  addi 23, 4, -26832
  03d979c  lis 3, 151
  03d97a0  lfs 1, 0(23)
  03d97a4  lfs 2, 72(31)
  03d97a8  lfs 3, 4(23)
  03d97ac  fadds 1, 2, 1
  03d97b0  lfs 4, 8(23)
  03d97b4  fsubs 5, 3, 2
  03d97b8  fsubs 6, 4, 2
  03d97bc  std 22, 200(1)
  03d97c0  addic 3, 3, -25376
  03d97c4  li 22, 0
  03d97c8  fsubs 3, 3, 1
  03d97cc  fsub 7, 2, 5
  03d97d0  fsubs 4, 4, 1
  03d97d4  fsub 8, 1, 3
  03d97d8  fsel 2, 7, 5, 2
  03d97dc  lfs 5, 12(23)
  03d97e0  fsel 1, 8, 3, 1
  03d97e4  fsub 3, 6, 2
  03d97e8  fsub 8, 4, 1
  03d97ec  fsel 2, 3, 6, 2
  03d97f0  lfs 3, 16(23)
  03d97f4  lfs 6, 20(23)
  03d97f8  std 28, 248(1)
  03d97fc  lfs 9, 24(23)
  03d9800  lwz 28, 120(31)
  03d9804  stw 22, 120(1)
  03d9808  fsel 1, 8, 4, 1
  03d980c  fmuls 4, 2, 2
  03d9810  fmuls 7, 1, 1
  03d9814  fmuls 8, 4, 2
  03d9818  fmuls 10, 7, 1
  03d981c  fmuls 11, 4, 8
  03d9820  fmadds 2, 8, 5, 2
  03d9824  fmuls 8, 7, 10
  03d9828  fmadds 1, 10, 5, 1
  03d982c  fmuls 5, 4, 11
  03d9830  fmadds 2, 11, 3, 2
  03d9834  fmuls 10, 7, 8
  03d9838  fmadds 1, 8, 3, 1
  03d983c  fmuls 3, 4, 5
  03d9840  fmadds 2, 5, 6, 2
  03d9844  fmuls 4, 7, 10
  03d9848  fmadds 1, 10, 6, 1
  03d984c  fmadds 2, 3, 9, 2
  03d9850  lfs 3, 128(3)
  03d9854  fmadds 1, 4, 9, 1
  03d9858  lfs 4, 132(3)
  03d985c  stfs 2, 116(1)
  03d9860  stfs 3, 128(1)
  03d9864  lfs 2, 136(3)
  03d9868  stfs 4, 132(1)
  03d986c  lfs 3, 140(3)
  03d9870  stfs 2, 136(1)
  03d9874  stfs 3, 140(1)
  03d9878  addic 3, 1, 128
  03d987c  stfs 1, 112(1)
  03d9880  lfs 1, 28(23)
  03d9884  lwz 4, 1284(28)
  03d9888  fadds 1, 2, 1
  03d988c  extsw 4, 4
  03d9890  std 30, 264(1)
  03d9894  std 29, 256(1)
  03d9898  std 27, 240(1)
  03d989c  std 26, 232(1)
  03d98a0  std 25, 224(1)
  03d98a4  std 24, 216(1)
  03d98a8  std 21, 192(1)
  03d98ac  std 20, 184(1)
  03d98b0  std 19, 176(1)
  03d98b4  stfs 1, 136(1)
  03d98b8  bl 0x110b70
  03d98bc  nop
  03d98c0  ori 21, 3, 0
  03d98c4  lfs 29, 32(23)
  03d98c8  li 3, 40
  03d98cc  lfs 30, 36(23)
  03d98d0  lis 29, 149
  03d98d4  addic 24, 28, 800
  03d98d8  addic 30, 28, 36
  03d98dc  addic 25, 28, 896
  03d98e0  <unknown>
  03d98e4  addic 26, 28, 992
  03d98e8  addic 27, 28, 1088
  03d98ec  lfs 31, 40(23)
  03d98f0  addic 28, 28, 32
  03d98f4  vspltw 31, 31, 0
  03d98f8  addic 29, 29, 5056
  03d98fc  slwi 19, 22, 1
  03d9900  addc 23, 19, 24
  03d9904  clrldi 23, 23, 32
  03d9908  ori 3, 23, 0
  03d990c  bl 0x4fffb4
  03d9910  nop
  03d9914  cmpwi 3, 0
  03d9918  bt 2, 0x3d9940
  03d991c  cmpwi 21, 0
  03d9920  cmpwi 1, 22, 24
  03d9924  bt 2, 0x3d992c
  03d9928  bf 4, 0x3d9b04
  03d992c  addic 5, 1, 112
  03d9930  ori 3, 31, 0
  03d9934  ori 4, 22, 0
  03d9938  bl 0x3d9508
  03d993c  b 0x3d9b04
  03d9940  lis 3, 133
  03d9944  addc 20, 19, 25
  03d9948  addc 19, 19, 26
  03d994c  clrldi 20, 20, 32
  03d9950  clrldi 19, 19, 32
  03d9954  lwz 3, 14532(3)
  03d9958  extsw 3, 3
  03d995c  std 3, 144(1)
  03d9960  lis 3, 133
  03d9964  lhz 4, 0(23)
  03d9968  lhz 5, 0(20)
  03d996c  extsh 4, 4
  03d9970  lwz 6, 14560(3)
  03d9974  lfd 1, 144(1)
  03d9978  extsh 3, 5
  03d997c  fcfid 28, 1
  03d9980  subc 5, 3, 6
  03d9984  cmpw 4, 5
  03d9988  frsp 28, 28
  03d998c  bf 1, 0x3d99cc
  03d9990  subc 3, 3, 4
  03d9994  bl 0x502730
  03d9998  nop
  03d999c  fmr 27, 1
  03d99a0  lis 3, 133
  03d99a4  lwz 3, 14560(3)
  03d99a8  extsw 3, 3
  03d99ac  bl 0x502730
  03d99b0  nop
  03d99b4  fdivs 1, 27, 1
  03d99b8  fmuls 1, 28, 1
  03d99bc  bl 0x502758
  03d99c0  nop
  03d99c4  sth 3, 0(19)
  03d99c8  b 0x3d9a10
  03d99cc  ori 3, 4, 0
  03d99d0  bl 0x502730
  03d99d4  nop
  03d99d8  fmr 27, 1
  03d99dc  lis 3, 133
  03d99e0  lhz 4, 0(20)
  03d99e4  extsh 4, 4
  03d99e8  lwz 3, 14560(3)
  03d99ec  subc 3, 4, 3
  03d99f0  extsw 3, 3
  03d99f4  bl 0x502730
  03d99f8  nop
  03d99fc  fdivs 1, 27, 1
  03d9a00  fmuls 1, 28, 1
  03d9a04  bl 0x502758
  03d9a08  nop
  03d9a0c  sth 3, 0(19)
  03d9a10  slwi 3, 22, 4
  03d9a14  slwi 4, 22, 2
  03d9a18  lfs 1, 112(1)
  03d9a1c  addc 5, 3, 28
  03d9a20  lfs 2, 116(1)
  03d9a24  addc 4, 4, 27
  03d9a28  lfs 3, 120(1)
  03d9a2c  clrldi 5, 5, 32
  03d9a30  clrldi 4, 4, 32
  03d9a34  cmpwi 21, 0
  03d9a38  lfs 4, 0(5)
  03d9a3c  lfs 5, 0(4)
  03d9a40  lfs 6, 4(5)
  03d9a44  fmadds 1, 1, 5, 4
  03d9a48  lfs 4, 8(5)
  03d9a4c  fmadds 2, 2, 5, 6
  03d9a50  fmadds 3, 3, 5, 4
  03d9a54  stfs 1, 0(5)
  03d9a58  stfs 2, 4(5)
  03d9a5c  stfs 3, 8(5)
  03d9a60  bt 2, 0x3d9b04
  03d9a64  lfs 2, 320(29)
  03d9a68  fsubs 1, 1, 2
  03d9a6c  fabs 1, 1
  03d9a70  fcmpu 0, 1, 29
  03d9a74  cror 6, 1, 2
  03d9a78  bt 6, 0x3d9b04
  03d9a7c  addc 3, 3, 30
  03d9a80  lfs 1, 324(29)
  03d9a84  clrldi 3, 3, 32
  03d9a88  lfs 2, 0(3)
  03d9a8c  fsubs 1, 2, 1
  03d9a90  fabs 1, 1
  03d9a94  fcmpu 0, 1, 29
  03d9a98  cror 6, 1, 2
  03d9a9c  bt 6, 0x3d9b04
  03d9aa0  lfs 1, 72(31)
  03d9aa4  lfs 2, 344(29)
  03d9aa8  bl 0x5026a0
  03d9aac  nop
  03d9ab0  fcmpu 0, 1, 30
  03d9ab4  cror 6, 0, 2
  03d9ab8  bt 6, 0x3d9b04
  03d9abc  lis 3, 114
  03d9ac0  vspltisw 2, -1
  03d9ac4  li 4, -3056
  03d9ac8  vslw 2, 2, 2
  03d9acc  lfs 1, -3056(3)
  03d9ad0  <unknown>
  03d9ad4  fmuls 1, 1, 31
  03d9ad8  vmaddfp 2, 3, 31, 2
  03d9adc  lhz 3, 0(23)
  03d9ae0  extsh 3, 3
  03d9ae4  fctiwz 1, 1
  03d9ae8  vctsxs 2, 2, 0
  03d9aec  stfd 1, 144(1)
  03d9af0  lwz 4, 148(1)
  03d9af4  cmpw 3, 4
  03d9af8  bf 1, 0x3d9b04
  03d9afc  vsplth 2, 2, 1
  03d9b00  stvehx 2, 0, 23
  03d9b04  addic 22, 22, 1
  03d9b08  extsw 22, 22
  03d9b0c  cmpwi 22, 48
  03d9b10  bt 0, 0x3d98fc
  03d9b14  lis 3, 113
  03d9b18  ori 4, 31, 0
  03d9b1c  addic 3, 3, -10032
  03d9b20  bl 0x6d7e0
  03d9b24  nop
  03d9b28  li 0, 160
  03d9b2c  lvx 31, 1, 0
  03d9b30  ld 0, 336(1)
  03d9b34  mtlr 0
  03d9b38  lfd 27, 280(1)
  03d9b3c  lfd 28, 288(1)
  03d9b40  lfd 29, 296(1)
  03d9b44  lfd 30, 304(1)
  03d9b48  lfd 31, 312(1)
  03d9b4c  ld 19, 176(1)
  03d9b50  ld 20, 184(1)
  03d9b54  ld 21, 192(1)
  03d9b58  ld 22, 200(1)
  03d9b5c  ld 23, 208(1)
  03d9b60  ld 24, 216(1)
  03d9b64  ld 25, 224(1)
  03d9b68  ld 26, 232(1)
  03d9b6c  ld 27, 240(1)
  03d9b70  ld 28, 248(1)
  03d9b74  ld 29, 256(1)
  03d9b78  ld 30, 264(1)
  03d9b7c  ld 31, 272(1)
  03d9b80  addi 1, 1, 320
  03d9b84  blr

UpdateMoby_610_WindControl:   # 0x3d9bb8, 0x8b4 bytes
  03d9bb8  stdu 1, -240(1)
  03d9bbc  mflr 0
  03d9bc0  std 0, 256(1)
  03d9bc4  stfd 24, 176(1)
  03d9bc8  stfd 25, 184(1)
  03d9bcc  stfd 26, 192(1)
  03d9bd0  stfd 27, 200(1)
  03d9bd4  stfd 28, 208(1)
  03d9bd8  stfd 29, 216(1)
  03d9bdc  stfd 30, 224(1)
  03d9be0  stfd 31, 232(1)
  03d9be4  std 31, 168(1)
  03d9be8  lbz 4, 32(3)
  03d9bec  std 30, 160(1)
  03d9bf0  ori 31, 3, 0
  03d9bf4  lwz 30, 120(3)
  03d9bf8  std 29, 152(1)
  03d9bfc  std 28, 144(1)
  03d9c00  cmpwi 4, 0
  03d9c04  bf 2, 0x3d9ea8
  03d9c08  li 3, 1
  03d9c0c  stb 3, 32(31)
  03d9c10  lwz 3, 0(30)
  03d9c14  cmpwi 3, 0
  03d9c18  bf 0, 0x3d9c44
  03d9c1c  lis 3, 101
  03d9c20  lhz 4, 178(31)
  03d9c24  addic 3, 3, 27684
  03d9c28  extsh 4, 4
  03d9c2c  bl 0x5cd098
  03d9c30  nop
  03d9c34  ori 3, 31, 0
  03d9c38  bl 0xefb38
  03d9c3c  nop
  03d9c40  b 0x3da42c
  03d9c44  lwz 3, 1284(30)
  03d9c48  cmpwi 3, 0
  03d9c4c  bf 0, 0x3d9c78
  03d9c50  lis 3, 101
  03d9c54  lhz 4, 178(31)
  03d9c58  addic 3, 3, 27780
  03d9c5c  extsh 4, 4
  03d9c60  bl 0x5cd098
  03d9c64  nop
  03d9c68  ori 3, 31, 0
  03d9c6c  bl 0xefb38
  03d9c70  nop
  03d9c74  b 0x3da42c
  03d9c78  lwz 4, 1280(30)
  03d9c7c  cmpwi 4, 0
  03d9c80  bf 0, 0x3d9cac
  03d9c84  lis 3, 101
  03d9c88  lhz 4, 178(31)
  03d9c8c  addic 3, 3, 27868
  03d9c90  extsh 4, 4
  03d9c94  bl 0x5cd098
  03d9c98  nop
  03d9c9c  ori 3, 31, 0
  03d9ca0  bl 0xefb38
  03d9ca4  nop
  03d9ca8  b 0x3da42c
  03d9cac  lis 4, 165
  03d9cb0  slwi 3, 3, 7
  03d9cb4  li 29, 0
  03d9cb8  lwz 4, 7128(4)
  03d9cbc  sth 29, 14(30)
  03d9cc0  addc 3, 4, 3
  03d9cc4  clrldi 3, 3, 32
  03d9cc8  lis 4, 62
  03d9ccc  lfs 1, 4(3)
  03d9cd0  lfs 2, 0(3)
  03d9cd4  fmuls 1, 1, 1
  03d9cd8  lfs 3, 8(3)
  03d9cdc  addi 28, 4, -25720
  03d9ce0  li 5, 1288
  03d9ce4  fmadds 1, 2, 2, 1
  03d9ce8  lfs 2, 0(28)
  03d9cec  lhz 4, 1288(30)
  03d9cf0  addi 6, 5, 16
  03d9cf4  fmadds 1, 3, 3, 1
  03d9cf8  extsh 4, 4
  03d9cfc  extsw 4, 4
  03d9d00  fsqrts 1, 1
  03d9d04  vspltisw 2, -16
  03d9d08  vspltisw 3, -1
  03d9d0c  lis 7, 114
  03d9d10  li 8, -3056
  03d9d14  li 9, 1290
  03d9d18  vslw 3, 3, 3
  03d9d1c  fmuls 1, 1, 2
  03d9d20  stfs 1, 20(30)
  03d9d24  lfs 1, 20(3)
  03d9d28  lfs 2, 16(3)
  03d9d2c  fmuls 1, 1, 1
  03d9d30  lfs 3, 24(3)
  03d9d34  std 4, 128(1)
  03d9d38  <unknown>
  03d9d3c  <unknown>
  03d9d40  fmadds 1, 2, 2, 1
  03d9d44  vor 4, 4, 5
  03d9d48  li 4, 4
  03d9d4c  fmadds 1, 3, 3, 1
  03d9d50  vsraw 2, 4, 2
  03d9d54  fsqrts 1, 1
  03d9d58  vcfsx 2, 2, 0
  03d9d5c  stfs 1, 24(30)
  03d9d60  lfs 1, 36(3)
  03d9d64  lfs 2, 32(3)
  03d9d68  fmuls 1, 1, 1
  03d9d6c  lfs 3, 40(3)
  03d9d70  fmadds 1, 2, 2, 1
  03d9d74  fmadds 1, 3, 3, 1
  03d9d78  fsqrts 1, 1
  03d9d7c  stfs 1, 28(30)
  03d9d80  lfd 1, 128(1)
  03d9d84  lfs 2, 4(28)
  03d9d88  fcfid 1, 1
  03d9d8c  <unknown>
  03d9d90  <unknown>
  03d9d94  vspltw 4, 4, 0
  03d9d98  lfs 3, -3056(7)
  03d9d9c  vaddfp 2, 2, 4
  03d9da0  frsp 1, 1
  03d9da4  vmaddfp 2, 5, 2, 3
  03d9da8  fadds 1, 1, 2
  03d9dac  fmuls 1, 3, 1
  03d9db0  vctsxs 2, 2, 0
  03d9db4  fctiwz 1, 1
  03d9db8  vsplth 2, 2, 1
  03d9dbc  stfd 1, 128(1)
  03d9dc0  lwz 3, 132(1)
  03d9dc4  stvehx 2, 9, 30
  03d9dc8  extsh 3, 3
  03d9dcc  bl 0x502730
  03d9dd0  nop
  03d9dd4  lfs 2, 8(28)
  03d9dd8  fdivs 1, 2, 1
  03d9ddc  stfs 1, 1292(30)
  03d9de0  lfs 1, 12(28)
  03d9de4  lfs 2, 72(31)
  03d9de8  lfs 3, 16(28)
  03d9dec  fadds 1, 2, 1
  03d9df0  fsubs 5, 3, 2
  03d9df4  lfs 4, 20(28)
  03d9df8  fsubs 3, 3, 1
  03d9dfc  fsub 7, 2, 5
  03d9e00  fsubs 6, 4, 1
  03d9e04  fsubs 4, 4, 2
  03d9e08  fsub 8, 1, 3
  03d9e0c  fsel 2, 7, 5, 2
  03d9e10  fsel 1, 8, 3, 1
  03d9e14  fsub 5, 4, 2
  03d9e18  lfs 3, 24(28)
  03d9e1c  fsub 7, 6, 1
  03d9e20  fsel 2, 5, 4, 2
  03d9e24  lfs 4, 28(28)
  03d9e28  lfs 5, 32(28)
  03d9e2c  lfs 9, 36(28)
  03d9e30  stw 29, 120(1)
  03d9e34  fsel 1, 7, 6, 1
  03d9e38  fmuls 6, 2, 2
  03d9e3c  fmuls 7, 1, 1
  03d9e40  fmuls 8, 6, 2
  03d9e44  fmuls 10, 7, 1
  03d9e48  fmuls 11, 6, 8
  03d9e4c  fmadds 2, 8, 3, 2
  03d9e50  fmuls 8, 7, 10
  03d9e54  fmadds 1, 10, 3, 1
  03d9e58  fmuls 3, 6, 11
  03d9e5c  fmadds 2, 11, 4, 2
  03d9e60  fmuls 10, 7, 8
  03d9e64  fmadds 1, 8, 4, 1
  03d9e68  fmuls 4, 6, 3
  03d9e6c  fmadds 2, 3, 5, 2
  03d9e70  fmuls 3, 7, 10
  03d9e74  fmadds 1, 10, 5, 1
  03d9e78  fmadds 2, 4, 9, 2
  03d9e7c  fmadds 1, 3, 9, 1
  03d9e80  stfs 2, 116(1)
  03d9e84  stfs 1, 112(1)
  03d9e88  ori 4, 29, 0
  03d9e8c  addic 5, 1, 112
  03d9e90  ori 3, 31, 0
  03d9e94  bl 0x3d9508
  03d9e98  addic 29, 29, 1
  03d9e9c  extsw 29, 29
  03d9ea0  cmpwi 29, 48
  03d9ea4  bt 0, 0x3d9e88
  03d9ea8  lis 29, 151
  03d9eac  lwz 4, 1280(30)
  03d9eb0  addic 29, 29, -25376
  03d9eb4  extsw 4, 4
  03d9eb8  addic 28, 29, 128
  03d9ebc  ori 3, 28, 0
  03d9ec0  bl 0x110b70
  03d9ec4  nop
  03d9ec8  cmpwi 3, 0
  03d9ecc  bt 2, 0x3da184
  03d9ed0  lis 3, 62
  03d9ed4  lfs 1, 72(31)
  03d9ed8  addi 4, 3, -25720
  03d9edc  lis 3, 114
  03d9ee0  lis 5, 133
  03d9ee4  lfs 24, 12(4)
  03d9ee8  lfs 25, 16(4)
  03d9eec  fadds 1, 1, 24
  03d9ef0  lfs 26, 20(4)
  03d9ef4  lfs 27, 24(4)
  03d9ef8  lfs 28, 28(4)
  03d9efc  lfs 29, 32(4)
  03d9f00  lfs 30, 36(4)
  03d9f04  fsubs 2, 25, 1
  03d9f08  fsubs 3, 26, 1
  03d9f0c  lis 7, 250
  03d9f10  fsub 4, 1, 2
  03d9f14  lis 6, 16256
  03d9f18  fsel 1, 4, 2, 1
  03d9f1c  lfs 4, -3052(3)
  03d9f20  lfs 5, 14420(5)
  03d9f24  fmuls 4, 4, 5
  03d9f28  lis 3, 250
  03d9f2c  fsub 2, 3, 1
  03d9f30  addic 5, 3, 17248
  03d9f34  fsel 1, 2, 3, 1
  03d9f38  fmuls 2, 1, 1
  03d9f3c  fmuls 3, 2, 1
  03d9f40  fmuls 5, 2, 3
  03d9f44  fmadds 1, 3, 27, 1
  03d9f48  fmuls 3, 2, 5
  03d9f4c  fmadds 1, 5, 28, 1
  03d9f50  fmuls 2, 2, 3
  03d9f54  fmadds 1, 3, 29, 1
  03d9f58  fmadds 1, 2, 30, 1
  03d9f5c  fmuls 1, 4, 1
  03d9f60  stfs 1, 17248(3)
  03d9f64  lfs 1, 72(31)
  03d9f68  fsubs 2, 25, 1
  03d9f6c  fsubs 3, 26, 1
  03d9f70  li 3, 0
  03d9f74  stw 3, 8(5)
  03d9f78  ori 3, 31, 0
  03d9f7c  fsub 5, 1, 2
  03d9f80  fsel 1, 5, 2, 1
  03d9f84  fsub 2, 3, 1
  03d9f88  fsel 1, 2, 3, 1
  03d9f8c  fmuls 2, 1, 1
  03d9f90  fmuls 3, 2, 1
  03d9f94  fmuls 5, 2, 3
  03d9f98  fmadds 1, 3, 27, 1
  03d9f9c  fmuls 3, 2, 5
  03d9fa0  fmadds 1, 5, 28, 1
  03d9fa4  fmuls 2, 2, 3
  03d9fa8  fmadds 1, 3, 29, 1
  03d9fac  fmadds 1, 2, 30, 1
  03d9fb0  fmuls 1, 4, 1
  03d9fb4  stfs 1, 4(5)
  03d9fb8  lfs 31, 8(4)
  03d9fbc  stw 6, 17264(7)
  03d9fc0  bl 0x3d9760
  03d9fc4  lhz 3, 776(29)
  03d9fc8  cmpwi 3, 0
  03d9fcc  bf 2, 0x3da184
  03d9fd0  lwz 3, 8836(29)
  03d9fd4  cmpwi 3, 13
  03d9fd8  bt 2, 0x3da184
  03d9fdc  lbz 3, 4834(29)
  03d9fe0  cmpwi 3, 0
  03d9fe4  bf 2, 0x3d9ff4
  03d9fe8  lhz 3, 780(29)
  03d9fec  cmpwi 3, 0
  03d9ff0  bt 2, 0x3da184
  03d9ff4  ori 3, 28, 0
  03d9ff8  lwz 4, 0(30)
  03d9ffc  extsw 4, 4
  03da000  bl 0x110b70
  03da004  nop
  03da008  cmpwi 3, 0
  03da00c  bt 2, 0x3da184
  03da010  addic 3, 30, 1290
  03da014  bl 0x4fffb4
  03da018  nop
  03da01c  lhz 3, 1290(30)
  03da020  extsh 3, 3
  03da024  bl 0x502730
  03da028  nop
  03da02c  lfs 2, 72(31)
  03da030  fadds 3, 2, 24
  03da034  fsubs 4, 25, 2
  03da038  fsubs 5, 26, 2
  03da03c  lis 3, 114
  03da040  li 4, 1
  03da044  vspltisw 3, -1
  03da048  li 6, -3056
  03da04c  fsubs 6, 25, 3
  03da050  fsub 7, 2, 4
  03da054  fsubs 8, 26, 3
  03da058  vslw 3, 3, 3
  03da05c  fsub 9, 3, 6
  03da060  fsel 2, 7, 4, 2
  03da064  fsel 3, 9, 6, 3
  03da068  fsub 4, 5, 2
  03da06c  lfs 6, 1292(30)
  03da070  fnmsubs 1, 1, 6, 31
  03da074  fsub 7, 8, 3
  03da078  fsel 2, 4, 5, 2
  03da07c  lfs 4, 8(30)
  03da080  lfs 5, -3052(3)
  03da084  fmuls 4, 4, 5
  03da088  lis 3, 133
  03da08c  fsel 3, 7, 8, 3
  03da090  fmuls 6, 2, 2
  03da094  fmuls 1, 4, 1
  03da098  lfs 4, 240(29)
  03da09c  lfs 8, 244(29)
  03da0a0  fmuls 5, 3, 3
  03da0a4  fmuls 7, 6, 2
  03da0a8  lwz 5, 14416(3)
  03da0ac  sth 4, 14(30)
  03da0b0  extsw 5, 5
  03da0b4  li 4, 14416
  03da0b8  std 5, 128(1)
  03da0bc  fmuls 9, 5, 3
  03da0c0  fmuls 10, 6, 7
  03da0c4  fmadds 2, 7, 27, 2
  03da0c8  <unknown>
  03da0cc  lis 5, 114
  03da0d0  lis 3, 62
  03da0d4  vcfsx 2, 2, 0
  03da0d8  addi 3, 3, -25720
  03da0dc  li 4, 4
  03da0e0  fmuls 7, 5, 9
  03da0e4  fmadds 3, 9, 27, 3
  03da0e8  fmuls 9, 6, 10
  03da0ec  fmadds 2, 10, 28, 2
  03da0f0  fmuls 10, 5, 7
  03da0f4  fmadds 3, 7, 28, 3
  03da0f8  fmuls 6, 6, 9
  03da0fc  fmadds 2, 9, 29, 2
  03da100  fmuls 5, 5, 10
  03da104  fmadds 3, 10, 29, 3
  03da108  fmadds 2, 6, 30, 2
  03da10c  fmadds 3, 5, 30, 3
  03da110  fmadds 2, 2, 1, 8
  03da114  fmadds 1, 3, 1, 4
  03da118  stfs 2, 244(29)
  03da11c  stfs 1, 240(29)
  03da120  lfd 1, 128(1)
  03da124  lfs 2, 4(3)
  03da128  fcfid 1, 1
  03da12c  <unknown>
  03da130  <unknown>
  03da134  vspltw 4, 4, 0
  03da138  lfs 3, -3056(5)
  03da13c  li 3, 12
  03da140  vaddfp 2, 2, 4
  03da144  frsp 1, 1
  03da148  vmaddfp 2, 5, 2, 3
  03da14c  fadds 1, 1, 2
  03da150  fmuls 1, 3, 1
  03da154  vctsxs 2, 2, 0
  03da158  fctiwz 1, 1
  03da15c  vsplth 2, 2, 1
  03da160  stfd 1, 128(1)
  03da164  lwz 4, 132(1)
  03da168  stvehx 2, 3, 30
  03da16c  extsh 3, 4
  03da170  bl 0x502730
  03da174  nop
  03da178  fdivs 1, 31, 1
  03da17c  stfs 1, 16(30)
  03da180  b 0x3da42c
  03da184  lhz 3, 14(30)
  03da188  cmpwi 3, 0
  03da18c  bt 2, 0x3da42c
  03da190  lhz 3, 12(30)
  03da194  cmpwi 3, 0
  03da198  bt 2, 0x3da42c
  03da19c  addic 3, 30, 12
  03da1a0  bl 0x4fffb4
  03da1a4  nop
  03da1a8  cmpwi 3, 0
  03da1ac  bt 2, 0x3da268
  03da1b0  li 3, 1288
  03da1b4  li 4, 0
  03da1b8  lhz 6, 1288(30)
  03da1bc  addi 5, 3, 16
  03da1c0  vspltisw 4, -1
  03da1c4  extsh 6, 6
  03da1c8  <unknown>
  03da1cc  lis 3, 62
  03da1d0  <unknown>
  03da1d4  extsw 6, 6
  03da1d8  sth 4, 14(30)
  03da1dc  vor 2, 2, 3
  03da1e0  addi 28, 3, -25720
  03da1e4  vspltisw 3, -16
  03da1e8  li 4, 4
  03da1ec  lis 3, 114
  03da1f0  vslw 4, 4, 4
  03da1f4  std 6, 128(1)
  03da1f8  vsraw 2, 2, 3
  03da1fc  lfs 1, 4(28)
  03da200  <unknown>
  03da204  lfd 2, 128(1)
  03da208  li 4, -3056
  03da20c  vcfsx 2, 2, 0
  03da210  vspltw 3, 3, 0
  03da214  fcfid 2, 2
  03da218  frsp 2, 2
  03da21c  vaddfp 2, 2, 3
  03da220  <unknown>
  03da224  lfs 3, -3056(3)
  03da228  li 3, 1290
  03da22c  fadds 1, 2, 1
  03da230  vmaddfp 2, 3, 2, 4
  03da234  fmuls 1, 3, 1
  03da238  vctsxs 2, 2, 0
  03da23c  fctiwz 1, 1
  03da240  vsplth 2, 2, 1
  03da244  stfd 1, 128(1)
  03da248  lwz 4, 132(1)
  03da24c  stvehx 2, 3, 30
  03da250  extsh 3, 4
  03da254  bl 0x502730
  03da258  nop
  03da25c  lfs 2, 8(28)
  03da260  fdivs 1, 2, 1
  03da264  stfs 1, 1292(30)
  03da268  lhz 3, 776(29)
  03da26c  cmpwi 3, 0
  03da270  bf 2, 0x3da280
  03da274  lbz 3, 4834(29)
  03da278  cmpwi 3, 0
  03da27c  bf 2, 0x3da344
  03da280  lis 3, 62
  03da284  lis 4, 114
  03da288  vspltisw 3, -1
  03da28c  addi 3, 3, -25720
  03da290  li 5, 40
  03da294  li 6, -3056
  03da298  vslw 3, 3, 3
  03da29c  lfs 1, 40(3)
  03da2a0  lfs 2, -3056(4)
  03da2a4  <unknown>
  03da2a8  fmuls 1, 2, 1
  03da2ac  vspltw 2, 2, 0
  03da2b0  <unknown>
  03da2b4  lhz 3, 12(30)
  03da2b8  vmaddfp 2, 4, 2, 3
  03da2bc  extsh 3, 3
  03da2c0  fctiwz 1, 1
  03da2c4  vctsxs 2, 2, 0
  03da2c8  stfd 1, 128(1)
  03da2cc  lwz 4, 132(1)
  03da2d0  cmpw 3, 4
  03da2d4  bf 1, 0x3da344
  03da2d8  vspltisw 3, -16
  03da2dc  vsplth 4, 2, 1
  03da2e0  lis 4, 62
  03da2e4  li 3, 12
  03da2e8  addi 4, 4, -25720
  03da2ec  vslw 2, 2, 3
  03da2f0  vspltisw 6, -1
  03da2f4  stvehx 4, 3, 30
  03da2f8  vsraw 2, 2, 3
  03da2fc  <unknown>
  03da300  vspltisw 4, -1
  03da304  vspltw 3, 3, 0
  03da308  vcfsx 2, 2, 0
  03da30c  vslw 6, 6, 6
  03da310  vslw 4, 4, 4
  03da314  vspltisw 8, -1
  03da318  li 3, 16
  03da31c  vrefp 5, 2
  03da320  vnmsubfp 7, 5, 2, 3
  03da324  vmaddfp 4, 5, 7, 4
  03da328  vslw 5, 8, 8
  03da32c  vnmsubfp 7, 4, 2, 3
  03da330  vmaddfp 4, 4, 7, 6
  03da334  vnmsubfp 2, 4, 2, 3
  03da338  vmaddfp 2, 4, 2, 5
  03da33c  vspltw 2, 2, 0
  03da340  stvewx 2, 3, 30
  03da344  lhz 3, 12(30)
  03da348  extsh 3, 3
  03da34c  bl 0x502730
  03da350  nop
  03da354  lis 3, 62
  03da358  lfs 2, 72(31)
  03da35c  addi 3, 3, -25720
  03da360  lis 4, 114
  03da364  lfs 3, 12(3)
  03da368  lfs 4, 16(3)
  03da36c  fadds 3, 2, 3
  03da370  lfs 5, 20(3)
  03da374  fsubs 6, 4, 2
  03da378  fsubs 4, 4, 3
  03da37c  fsub 8, 2, 6
  03da380  fsubs 7, 5, 3
  03da384  fsubs 5, 5, 2
  03da388  fsub 9, 3, 4
  03da38c  fsel 2, 8, 6, 2
  03da390  lfs 6, 24(3)
  03da394  fsel 3, 9, 4, 3
  03da398  fsub 4, 5, 2
  03da39c  fsub 8, 7, 3
  03da3a0  fsel 2, 4, 5, 2
  03da3a4  lfs 4, 16(30)
  03da3a8  lfs 5, 8(30)
  03da3ac  fmuls 1, 1, 4
  03da3b0  lfs 4, 28(3)
  03da3b4  lfs 9, -3052(4)
  03da3b8  fmuls 5, 5, 9
  03da3bc  fsel 3, 8, 7, 3
  03da3c0  fmuls 8, 2, 2
  03da3c4  lfs 10, 32(3)
  03da3c8  fmuls 1, 5, 1
  03da3cc  fmuls 7, 3, 3
  03da3d0  fmuls 9, 8, 2
  03da3d4  fmuls 5, 7, 3
  03da3d8  fmuls 12, 8, 9
  03da3dc  fmadds 2, 9, 6, 2
  03da3e0  lfs 9, 36(3)
  03da3e4  lfs 11, 240(29)
  03da3e8  lfs 13, 244(29)
  03da3ec  fmuls 0, 7, 5
  03da3f0  fmadds 3, 5, 6, 3
  03da3f4  fmuls 5, 8, 12
  03da3f8  fmadds 2, 12, 4, 2
  03da3fc  fmuls 6, 7, 0
  03da400  fmadds 3, 0, 4, 3
  03da404  fmuls 4, 8, 5
  03da408  fmadds 2, 5, 10, 2
  03da40c  fmuls 5, 7, 6
  03da410  fmadds 3, 6, 10, 3
  03da414  fmadds 2, 4, 9, 2
  03da418  fmadds 3, 5, 9, 3
  03da41c  fmadds 2, 2, 1, 13
  03da420  fmadds 1, 3, 1, 11
  03da424  stfs 2, 244(29)
  03da428  stfs 1, 240(29)
  03da42c  ld 0, 256(1)
  03da430  mtlr 0
  03da434  lfd 24, 176(1)
  03da438  lfd 25, 184(1)
  03da43c  lfd 26, 192(1)
  03da440  lfd 27, 200(1)
  03da444  lfd 28, 208(1)
  03da448  lfd 29, 216(1)
  03da44c  lfd 30, 224(1)
  03da450  lfd 31, 232(1)
  03da454  ld 28, 144(1)
  03da458  ld 29, 152(1)
  03da45c  ld 30, 160(1)
  03da460  ld 31, 168(1)
  03da464  addi 1, 1, 240
  03da468  blr
