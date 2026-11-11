# game/update/moby500.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003a4858:   # 0x3a4858, 0x4f0 bytes
  03a4858  stdu 1, -272(1)
  03a485c  mflr 0
  03a4860  std 0, 288(1)
  03a4864  stfd 30, 256(1)
  03a4868  stfd 31, 264(1)
  03a486c  std 31, 248(1)
  03a4870  ori 31, 3, 0
  03a4874  std 27, 216(1)
  03a4878  li 3, 50
  03a487c  std 29, 232(1)
  03a4880  std 28, 224(1)
  03a4884  ori 27, 7, 0
  03a4888  ori 28, 6, 0
  03a488c  std 30, 240(1)
  03a4890  ori 29, 5, 0
  03a4894  std 26, 208(1)
  03a4898  std 25, 200(1)
  03a489c  std 24, 192(1)
  03a48a0  ori 30, 4, 0
  03a48a4  bl 0xefa28
  03a48a8  nop
  03a48ac  ori 26, 3, 0
  03a48b0  cmpwi 26, 0
  03a48b4  bt 2, 0x3a4d0c
  03a48b8  li 3, 255
  03a48bc  li 4, 1
  03a48c0  lis 5, 58
  03a48c4  li 25, 0
  03a48c8  stb 3, 48(26)
  03a48cc  addi 24, 5, 18504
  03a48d0  sth 3, 50(26)
  03a48d4  stb 4, 49(26)
  03a48d8  ld 3, 56(31)
  03a48dc  stb 25, 32(26)
  03a48e0  std 3, 56(26)
  03a48e4  lfs 1, 0(24)
  03a48e8  lfs 2, 44(26)
  03a48ec  lwz 31, 120(26)
  03a48f0  fmuls 1, 2, 1
  03a48f4  lis 3, 132
  03a48f8  stfs 1, 44(26)
  03a48fc  lfs 1, 0(29)
  03a4900  stfs 1, 16(26)
  03a4904  lfs 1, 4(29)
  03a4908  stfs 1, 20(26)
  03a490c  lfs 1, 8(29)
  03a4910  stfs 1, 24(26)
  03a4914  lfs 1, 12(29)
  03a4918  stfs 1, 28(26)
  03a491c  lfs 1, 0(30)
  03a4920  stfs 1, 0(31)
  03a4924  lfs 1, 4(30)
  03a4928  stfs 1, 4(31)
  03a492c  lfs 1, 8(30)
  03a4930  stfs 1, 8(31)
  03a4934  lfs 1, 12(30)
  03a4938  stfs 1, 12(31)
  03a493c  lfs 1, 0(28)
  03a4940  stfs 1, 16(31)
  03a4944  lfs 1, 4(28)
  03a4948  stfs 1, 20(31)
  03a494c  lfs 1, 8(28)
  03a4950  stfs 1, 24(31)
  03a4954  lfs 1, 12(28)
  03a4958  stw 27, 48(31)
  03a495c  stfs 1, 28(31)
  03a4960  stw 27, 32(31)
  03a4964  lfs 1, 4(30)
  03a4968  lfs 2, 0(30)
  03a496c  fmuls 1, 1, 1
  03a4970  lfs 3, 8(30)
  03a4974  fmadds 1, 2, 2, 1
  03a4978  fmadds 1, 3, 3, 1
  03a497c  fsqrts 1, 1
  03a4980  stfs 1, 36(31)
  03a4984  lfs 2, 13372(3)
  03a4988  fneg 1, 2
  03a498c  bl 0xfcbe8
  03a4990  nop
  03a4994  lfs 30, 4(24)
  03a4998  lis 3, 132
  03a499c  fmuls 1, 1, 30
  03a49a0  stfs 1, 40(31)
  03a49a4  lfs 31, 8(24)
  03a49a8  lfs 2, 13376(3)
  03a49ac  fmr 1, 31
  03a49b0  bl 0xfcbe8
  03a49b4  nop
  03a49b8  fmuls 1, 1, 30
  03a49bc  stw 25, 52(31)
  03a49c0  stfs 1, 44(31)
  03a49c4  lwz 4, 0(30)
  03a49c8  lwz 3, 4(30)
  03a49cc  lfs 1, 0(30)
  03a49d0  lfs 2, 4(30)
  03a49d4  rlwinm 5, 3, 3, 29, 29
  03a49d8  fabs 4, 1
  03a49dc  fabs 3, 2
  03a49e0  lis 31, 115
  03a49e4  addic 31, 31, 22784
  03a49e8  fsubs 1, 4, 3
  03a49ec  stfs 1, 120(1)
  03a49f0  lhz 3, 52(26)
  03a49f4  lfs 2, 12(24)
  03a49f8  lwz 6, 120(1)
  03a49fc  lfs 1, 120(1)
  03a4a00  rlwimi 5, 6, 2, 30, 30
  03a4a04  fsub 5, 1, 31
  03a4a08  fsub 6, 1, 31
  03a4a0c  rlwimi 5, 4, 4, 28, 28
  03a4a10  ori 4, 31, 0
  03a4a14  rlwimi 4, 5, 2, 26, 28
  03a4a18  slwi 5, 5, 2
  03a4a1c  clrldi 4, 4, 32
  03a4a20  fsel 5, 5, 4, 3
  03a4a24  lfsx 1, 31, 5
  03a4a28  fsel 4, 6, 3, 4
  03a4a2c  lfs 3, 4(4)
  03a4a30  fcmpu 0, 5, 31
  03a4a34  bt 1, 0x3a4a40
  03a4a38  fmr 1, 31
  03a4a3c  b 0x3a4b58
  03a4a40  fsubs 6, 4, 5
  03a4a44  fadds 4, 4, 5
  03a4a48  addic 4, 1, 16
  03a4a4c  li 8, 2
  03a4a50  addic 5, 4, 140
  03a4a54  addic 6, 4, 156
  03a4a58  mtctr 8
  03a4a5c  fdivs 4, 6, 4
  03a4a60  fmuls 5, 4, 4
  03a4a64  stfs 4, 168(1)
  03a4a68  stfs 4, 160(1)
  03a4a6c  stfs 4, 164(1)
  03a4a70  stfs 4, 156(1)
  03a4a74  lfs 7, 168(1)
  03a4a78  lfs 8, 160(1)
  03a4a7c  lfs 9, 164(1)
  03a4a80  fmuls 6, 5, 5
  03a4a84  fmuls 8, 8, 5
  03a4a88  fmuls 7, 7, 6
  03a4a8c  fmuls 4, 6, 6
  03a4a90  fmuls 6, 9, 6
  03a4a94  stfs 8, 160(1)
  03a4a98  fmuls 5, 7, 5
  03a4a9c  stfs 6, 164(1)
  03a4aa0  stfs 5, 168(1)
  03a4aa4  lfs 5, 140(4)
  03a4aa8  fmuls 5, 5, 4
  03a4aac  stfs 5, 156(4)
  03a4ab0  lfs 5, 4(5)
  03a4ab4  addic 4, 4, 8
  03a4ab8  addic 5, 5, 8
  03a4abc  fmuls 5, 5, 4
  03a4ac0  stfs 5, 4(6)
  03a4ac4  addic 6, 6, 8
  03a4ac8  bdnz 0x3a4aa4
  03a4acc  ori 4, 1, 0
  03a4ad0  lis 5, 115
  03a4ad4  li 9, 4
  03a4ad8  addic 6, 4, 156
  03a4adc  addic 5, 5, 22752
  03a4ae0  ori 7, 6, 0
  03a4ae4  mtctr 9
  03a4ae8  lfs 4, 156(4)
  03a4aec  lfs 5, 0(5)
  03a4af0  fmuls 4, 4, 5
  03a4af4  lfs 5, 4(5)
  03a4af8  addic 5, 5, 8
  03a4afc  stfs 4, 156(4)
  03a4b00  lfs 4, 4(6)
  03a4b04  addic 4, 4, 8
  03a4b08  fmuls 4, 4, 5
  03a4b0c  stfs 4, 4(6)
  03a4b10  addic 6, 6, 8
  03a4b14  bdnz 0x3a4ae8
  03a4b18  fmr 4, 31
  03a4b1c  ori 4, 1, 0
  03a4b20  mtctr 8
  03a4b24  lfs 5, 156(4)
  03a4b28  fadds 4, 4, 5
  03a4b2c  addic 4, 4, 16
  03a4b30  lfs 5, 4(7)
  03a4b34  lfs 6, 8(7)
  03a4b38  lfs 7, 12(7)
  03a4b3c  addic 7, 7, 16
  03a4b40  fadds 4, 4, 5
  03a4b44  fadds 4, 4, 6
  03a4b48  fadds 4, 4, 7
  03a4b4c  bdnz 0x3a4b24
  03a4b50  fadds 4, 4, 2
  03a4b54  fmadds 1, 4, 1, 3
  03a4b58  stfs 1, 72(26)
  03a4b5c  lfs 1, 4(30)
  03a4b60  lfs 3, 0(30)
  03a4b64  fmuls 1, 1, 1
  03a4b68  lwz 4, 8(30)
  03a4b6c  rlwinm 4, 4, 3, 29, 29
  03a4b70  fmadds 1, 3, 3, 1
  03a4b74  lfs 3, 8(30)
  03a4b78  fabs 4, 3
  03a4b7c  fsqrts 1, 1
  03a4b80  fabs 6, 1
  03a4b84  stfs 1, 112(1)
  03a4b88  fsubs 1, 6, 4
  03a4b8c  stfs 1, 116(1)
  03a4b90  lwz 5, 112(1)
  03a4b94  lfs 1, 112(1)
  03a4b98  lwz 6, 116(1)
  03a4b9c  fabs 5, 1
  03a4ba0  lfs 1, 116(1)
  03a4ba4  rlwimi 4, 6, 2, 30, 30
  03a4ba8  fsub 3, 1, 31
  03a4bac  rlwimi 4, 5, 4, 28, 28
  03a4bb0  fsub 7, 1, 31
  03a4bb4  ori 5, 31, 0
  03a4bb8  rlwimi 5, 4, 2, 26, 28
  03a4bbc  slwi 4, 4, 2
  03a4bc0  clrldi 5, 5, 32
  03a4bc4  lfsx 1, 31, 4
  03a4bc8  fsel 5, 3, 5, 4
  03a4bcc  lfs 3, 4(5)
  03a4bd0  fsel 4, 7, 4, 6
  03a4bd4  fcmpu 0, 5, 31
  03a4bd8  bt 1, 0x3a4be0
  03a4bdc  b 0x3a4cf4
  03a4be0  fsubs 6, 4, 5
  03a4be4  fadds 4, 4, 5
  03a4be8  addic 4, 1, 16
  03a4bec  li 8, 2
  03a4bf0  addic 5, 4, 108
  03a4bf4  addic 6, 4, 124
  03a4bf8  mtctr 8
  03a4bfc  fdivs 4, 6, 4
  03a4c00  fmuls 5, 4, 4
  03a4c04  stfs 4, 136(1)
  03a4c08  stfs 4, 128(1)
  03a4c0c  stfs 4, 132(1)
  03a4c10  stfs 4, 124(1)
  03a4c14  lfs 7, 136(1)
  03a4c18  lfs 8, 128(1)
  03a4c1c  lfs 9, 132(1)
  03a4c20  fmuls 6, 5, 5
  03a4c24  fmuls 8, 8, 5
  03a4c28  fmuls 7, 7, 6
  03a4c2c  fmuls 4, 6, 6
  03a4c30  fmuls 6, 9, 6
  03a4c34  stfs 8, 128(1)
  03a4c38  fmuls 5, 7, 5
  03a4c3c  stfs 6, 132(1)
  03a4c40  stfs 5, 136(1)
  03a4c44  lfs 5, 108(4)
  03a4c48  fmuls 5, 5, 4
  03a4c4c  stfs 5, 124(4)
  03a4c50  lfs 5, 4(5)
  03a4c54  addic 4, 4, 8
  03a4c58  addic 5, 5, 8
  03a4c5c  fmuls 5, 5, 4
  03a4c60  stfs 5, 4(6)
  03a4c64  addic 6, 6, 8
  03a4c68  bdnz 0x3a4c44
  03a4c6c  ori 4, 1, 0
  03a4c70  lis 5, 115
  03a4c74  li 9, 4
  03a4c78  addic 6, 4, 124
  03a4c7c  addic 5, 5, 22752
  03a4c80  ori 7, 6, 0
  03a4c84  mtctr 9
  03a4c88  lfs 4, 124(4)
  03a4c8c  lfs 5, 0(5)
  03a4c90  fmuls 4, 4, 5
  03a4c94  lfs 5, 4(5)
  03a4c98  addic 5, 5, 8
  03a4c9c  stfs 4, 124(4)
  03a4ca0  lfs 4, 4(6)
  03a4ca4  addic 4, 4, 8
  03a4ca8  fmuls 4, 4, 5
  03a4cac  stfs 4, 4(6)
  03a4cb0  addic 6, 6, 8
  03a4cb4  bdnz 0x3a4c88
  03a4cb8  ori 4, 1, 0
  03a4cbc  mtctr 8
  03a4cc0  lfs 4, 124(4)
  03a4cc4  lfs 5, 4(7)
  03a4cc8  fadds 4, 31, 4
  03a4ccc  lfs 6, 8(7)
  03a4cd0  lfs 31, 12(7)
  03a4cd4  addic 4, 4, 16
  03a4cd8  addic 7, 7, 16
  03a4cdc  fadds 4, 4, 5
  03a4ce0  fadds 4, 4, 6
  03a4ce4  fadds 31, 4, 31
  03a4ce8  bdnz 0x3a4cc0
  03a4cec  fadds 31, 31, 2
  03a4cf0  fmadds 31, 31, 1, 3
  03a4cf4  fneg 1, 31
  03a4cf8  ori 3, 3, 1
  03a4cfc  li 4, 0
  03a4d00  sth 3, 52(26)
  03a4d04  stb 4, 49(26)
  03a4d08  stfs 1, 68(26)
  03a4d0c  ori 3, 26, 0
  03a4d10  ld 0, 288(1)
  03a4d14  mtlr 0
  03a4d18  lfd 30, 256(1)
  03a4d1c  lfd 31, 264(1)
  03a4d20  ld 24, 192(1)
  03a4d24  ld 25, 200(1)
  03a4d28  ld 26, 208(1)
  03a4d2c  ld 27, 216(1)
  03a4d30  ld 28, 224(1)
  03a4d34  ld 29, 232(1)
  03a4d38  ld 30, 240(1)
  03a4d3c  ld 31, 248(1)
  03a4d40  addi 1, 1, 272
  03a4d44  blr

M511_003a4d48:   # 0x3a4d48, 0x14 bytes
  03a4d48  lis 3, 132
  03a4d4c  lis 4, 1
  03a4d50  addic 3, 3, 13440
  03a4d54  stw 4, 72(3)
  03a4d58  blr

M511_003a4da0:   # 0x3a4da0, 0x63c bytes
  03a4da0  stdu 1, -400(1)
  03a4da4  mflr 0
  03a4da8  std 0, 416(1)
  03a4dac  stfd 19, 296(1)
  03a4db0  stfd 20, 304(1)
  03a4db4  stfd 21, 312(1)
  03a4db8  stfd 22, 320(1)
  03a4dbc  stfd 23, 328(1)
  03a4dc0  stfd 24, 336(1)
  03a4dc4  stfd 25, 344(1)
  03a4dc8  stfd 26, 352(1)
  03a4dcc  stfd 27, 360(1)
  03a4dd0  stfd 28, 368(1)
  03a4dd4  stfd 29, 376(1)
  03a4dd8  stfd 30, 384(1)
  03a4ddc  stfd 31, 392(1)
  03a4de0  std 29, 272(1)
  03a4de4  lwz 29, 120(3)
  03a4de8  std 31, 288(1)
  03a4dec  lhz 4, 166(3)
  03a4df0  ori 31, 3, 0
  03a4df4  std 30, 280(1)
  03a4df8  lfs 2, 16(3)
  03a4dfc  lis 30, 58
  03a4e00  cmpwi 6, 4, 501
  03a4e04  addi 30, 30, 19808
  03a4e08  lhz 4, 198(29)
  03a4e0c  lfs 1, 20(3)
  03a4e10  cmpwi 1, 4, 0
  03a4e14  cntlzw 4, 4
  03a4e18  rlwinm 3, 4, 27, 31, 31
  03a4e1c  std 28, 264(1)
  03a4e20  std 27, 256(1)
  03a4e24  std 26, 248(1)
  03a4e28  std 25, 240(1)
  03a4e2c  std 24, 232(1)
  03a4e30  std 23, 224(1)
  03a4e34  std 22, 216(1)
  03a4e38  std 21, 208(1)
  03a4e3c  stw 3, 176(1)
  03a4e40  bf 26, 0x3a4e50
  03a4e44  li 3, 0
  03a4e48  stw 3, 176(1)
  03a4e4c  b 0x3a4f28
  03a4e50  bf 6, 0x3a4f28
  03a4e54  lwz 3, 240(29)
  03a4e58  cmpwi 3, 0
  03a4e5c  bt 2, 0x3a4e9c
  03a4e60  cmpwi 31, 0
  03a4e64  bt 2, 0x3a4e74
  03a4e68  li 3, 32640
  03a4e6c  sth 3, 54(31)
  03a4e70  lwz 3, 240(29)
  03a4e74  ori 4, 3, 0
  03a4e78  addic 5, 31, 16
  03a4e7c  addic 6, 31, 64
  03a4e80  addic 7, 1, 112
  03a4e84  addic 8, 1, 128
  03a4e88  ori 3, 31, 0
  03a4e8c  bl 0x1122e0
  03a4e90  nop
  03a4e94  lfs 2, 16(31)
  03a4e98  lfs 1, 20(31)
  03a4e9c  lis 3, 151
  03a4ea0  lwz 3, -25488(3)
  03a4ea4  cmpwi 3, 15
  03a4ea8  bf 2, 0x3a4f0c
  03a4eac  lfs 3, 0(30)
  03a4eb0  fsubs 3, 2, 3
  03a4eb4  lfs 2, 4(30)
  03a4eb8  fabs 3, 3
  03a4ebc  fcmpu 0, 3, 2
  03a4ec0  cror 6, 1, 2
  03a4ec4  bt 6, 0x3a4f0c
  03a4ec8  lfs 3, 8(30)
  03a4ecc  fsubs 1, 1, 3
  03a4ed0  fabs 1, 1
  03a4ed4  fcmpu 0, 1, 2
  03a4ed8  cror 6, 1, 2
  03a4edc  bt 6, 0x3a4f0c
  03a4ee0  lis 30, 161
  03a4ee4  li 6, 0
  03a4ee8  ori 3, 31, 0
  03a4eec  li 4, 256
  03a4ef0  li 5, -1
  03a4ef4  lwz 31, 24364(30)
  03a4ef8  stw 6, 24364(30)
  03a4efc  bl 0xfd8d0
  03a4f00  nop
  03a4f04  stw 31, 24364(30)
  03a4f08  b 0x3a536c
  03a4f0c  lwz 5, 192(29)
  03a4f10  ori 3, 31, 0
  03a4f14  li 4, 256
  03a4f18  extsw 5, 5
  03a4f1c  bl 0xfd8d0
  03a4f20  nop
  03a4f24  b 0x3a536c
  03a4f28  bt 26, 0x3a5344
  03a4f2c  lbz 3, 203(29)
  03a4f30  cmpwi 3, 5
  03a4f34  cmpwi 1, 3, 2
  03a4f38  cmpwi 6, 3, 0
  03a4f3c  cmpwi 7, 3, 1
  03a4f40  bt 1, 0x3a4f68
  03a4f44  bt 5, 0x3a4f54
  03a4f48  bf 25, 0x3a5020
  03a4f4c  bf 29, 0x3a4f9c
  03a4f50  b 0x3a4fcc
  03a4f54  cmpwi 3, 3
  03a4f58  bf 1, 0x3a4fc0
  03a4f5c  cmpwi 3, 4
  03a4f60  bf 1, 0x3a4ff0
  03a4f64  b 0x3a4fd8
  03a4f68  cmpwi 3, 11
  03a4f6c  bt 2, 0x3a4ffc
  03a4f70  cmpwi 3, 10
  03a4f74  bt 2, 0x3a4fe4
  03a4f78  cmpwi 3, 9
  03a4f7c  bt 2, 0x3a5014
  03a4f80  cmpwi 3, 8
  03a4f84  bt 2, 0x3a4fb4
  03a4f88  cmpwi 3, 7
  03a4f8c  bt 2, 0x3a5008
  03a4f90  cmpwi 3, 6
  03a4f94  bt 2, 0x3a4fa8
  03a4f98  b 0x3a5020
  03a4f9c  li 3, 10
  03a4fa0  stw 3, 176(1)
  03a4fa4  b 0x3a5028
  03a4fa8  li 3, 11
  03a4fac  stw 3, 176(1)
  03a4fb0  b 0x3a5028
  03a4fb4  li 3, 13
  03a4fb8  stw 3, 176(1)
  03a4fbc  b 0x3a5028
  03a4fc0  li 3, 15
  03a4fc4  stw 3, 176(1)
  03a4fc8  b 0x3a5028
  03a4fcc  li 3, 16
  03a4fd0  stw 3, 176(1)
  03a4fd4  b 0x3a5028
  03a4fd8  li 3, 17
  03a4fdc  stw 3, 176(1)
  03a4fe0  b 0x3a5028
  03a4fe4  li 3, 19
  03a4fe8  stw 3, 176(1)
  03a4fec  b 0x3a5028
  03a4ff0  li 3, 20
  03a4ff4  stw 3, 176(1)
  03a4ff8  b 0x3a5028
  03a4ffc  li 3, 23
  03a5000  stw 3, 176(1)
  03a5004  b 0x3a5028
  03a5008  li 3, 24
  03a500c  stw 3, 176(1)
  03a5010  b 0x3a5028
  03a5014  li 3, 25
  03a5018  stw 3, 176(1)
  03a501c  b 0x3a5028
  03a5020  li 3, -1
  03a5024  stw 3, 176(1)
  03a5028  ori 3, 31, 0
  03a502c  addic 4, 1, 176
  03a5030  bl 0xfc668
  03a5034  nop
  03a5038  ori 22, 3, 0
  03a503c  li 23, 0
  03a5040  cmpwi 22, 0
  03a5044  ori 28, 23, 0
  03a5048  bf 1, 0x3a5344
  03a504c  lfs 20, 12(30)
  03a5050  lfs 21, 16(30)
  03a5054  lis 27, 165
  03a5058  lfs 22, 20(30)
  03a505c  addic 26, 31, 16
  03a5060  lfs 23, 24(30)
  03a5064  addic 27, 27, 7136
  03a5068  lfs 24, 28(30)
  03a506c  lfs 25, 32(30)
  03a5070  lfs 26, 36(30)
  03a5074  lfs 27, 40(30)
  03a5078  lfs 28, 44(30)
  03a507c  lfs 29, 48(30)
  03a5080  lfs 30, 52(30)
  03a5084  lfs 31, 56(30)
  03a5088  ori 3, 26, 0
  03a508c  lwz 4, 176(1)
  03a5090  li 5, -1
  03a5094  li 6, 0
  03a5098  extsw 4, 4
  03a509c  bl 0x2ea758
  03a50a0  nop
  03a50a4  ori 24, 3, 0
  03a50a8  cmpwi 24, 0
  03a50ac  bt 2, 0x3a5344
  03a50b0  lwz 25, 120(24)
  03a50b4  lhz 3, 196(29)
  03a50b8  sth 3, 4(25)
  03a50bc  bl 0xfcc68
  03a50c0  nop
  03a50c4  fmr 19, 1
  03a50c8  lis 3, 132
  03a50cc  fmr 1, 20
  03a50d0  lfs 2, 13552(3)
  03a50d4  bl 0xfcbe8
  03a50d8  nop
  03a50dc  fadds 2, 19, 21
  03a50e0  fsubs 3, 22, 19
  03a50e4  lis 21, 114
  03a50e8  fsubs 4, 23, 19
  03a50ec  lis 3, 132
  03a50f0  lis 4, 132
  03a50f4  fsubs 5, 22, 2
  03a50f8  fsub 6, 19, 3
  03a50fc  fsubs 7, 23, 2
  03a5100  fsub 8, 2, 5
  03a5104  fsel 3, 6, 3, 19
  03a5108  fsel 2, 8, 5, 2
  03a510c  fsub 5, 4, 3
  03a5110  fsub 6, 7, 2
  03a5114  fsel 3, 5, 4, 3
  03a5118  lfs 5, -3052(21)
  03a511c  fmuls 5, 1, 5
  03a5120  fsel 2, 6, 7, 2
  03a5124  fmuls 4, 3, 3
  03a5128  fmuls 1, 2, 2
  03a512c  fmuls 6, 4, 3
  03a5130  fmuls 7, 1, 2
  03a5134  fmuls 8, 4, 6
  03a5138  fmadds 3, 6, 24, 3
  03a513c  lfs 6, 13556(3)
  03a5140  fmuls 9, 1, 7
  03a5144  fmadds 2, 7, 24, 2
  03a5148  fmuls 7, 4, 8
  03a514c  fmadds 3, 8, 25, 3
  03a5150  lfs 8, 13560(4)
  03a5154  stw 28, 24(25)
  03a5158  fmuls 10, 1, 9
  03a515c  fmadds 2, 9, 25, 2
  03a5160  fmuls 4, 4, 7
  03a5164  fmadds 3, 7, 26, 3
  03a5168  fmuls 7, 1, 10
  03a516c  fmadds 9, 10, 26, 2
  03a5170  fmr 1, 6
  03a5174  fmadds 3, 4, 27, 3
  03a5178  fmr 2, 8
  03a517c  fmadds 4, 7, 27, 9
  03a5180  fmuls 3, 3, 5
  03a5184  fmuls 4, 4, 5
  03a5188  stfs 3, 20(25)
  03a518c  stfs 4, 16(25)
  03a5190  bl 0xfcbe8
  03a5194  nop
  03a5198  lfs 2, -3052(21)
  03a519c  fmuls 1, 1, 2
  03a51a0  stfs 1, 24(25)
  03a51a4  lwz 3, 192(29)
  03a51a8  cmpwi 3, -1
  03a51ac  bf 1, 0x3a5338
  03a51b0  lis 4, 114
  03a51b4  slwi 3, 3, 2
  03a51b8  addic 6, 1, 180
  03a51bc  extsw 3, 3
  03a51c0  addic 7, 1, 184
  03a51c4  lfs 2, -3048(4)
  03a51c8  fmuls 2, 2, 28
  03a51cc  lwzx 3, 27, 3
  03a51d0  lfs 3, 24(24)
  03a51d4  lfs 4, 24(3)
  03a51d8  fsubs 3, 3, 4
  03a51dc  fmuls 4, 2, 29
  03a51e0  fsubs 2, 1, 4
  03a51e4  fmr 1, 4
  03a51e8  bl 0xfcb40
  03a51ec  nop
  03a51f0  extsw 3, 3
  03a51f4  std 3, 192(1)
  03a51f8  lfd 1, 192(1)
  03a51fc  fcfid 1, 1
  03a5200  frsp 1, 1
  03a5204  fcmpu 0, 1, 30
  03a5208  bt 0, 0x3a523c
  03a520c  lwz 4, 180(1)
  03a5210  lis 3, 17136
  03a5214  lfs 19, 180(1)
  03a5218  srawi 5, 4, 31
  03a521c  cmpwi 4, 0
  03a5220  srwi 6, 5, 1
  03a5224  xor 4, 6, 4
  03a5228  subc 4, 4, 5
  03a522c  cmpw 1, 4, 3
  03a5230  crnand 2, 1, 4
  03a5234  bt 2, 0x3a523c
  03a5238  b 0x3a5240
  03a523c  lfs 19, 60(30)
  03a5240  lfs 1, 16(25)
  03a5244  lfs 2, 16(31)
  03a5248  fmuls 1, 1, 19
  03a524c  lfs 3, 20(31)
  03a5250  lfs 4, 24(31)
  03a5254  lwz 3, 192(29)
  03a5258  addic 5, 1, 144
  03a525c  addic 6, 1, 160
  03a5260  extsw 3, 3
  03a5264  ori 4, 26, 0
  03a5268  stfs 1, 144(1)
  03a526c  lfs 5, 20(25)
  03a5270  fadds 1, 1, 2
  03a5274  fmuls 5, 5, 19
  03a5278  fadds 3, 5, 3
  03a527c  stfs 5, 148(1)
  03a5280  lfs 2, 24(25)
  03a5284  fmuls 2, 2, 19
  03a5288  fadds 4, 2, 4
  03a528c  stfs 2, 152(1)
  03a5290  lfs 2, 28(25)
  03a5294  stfs 1, 144(1)
  03a5298  stfs 2, 156(1)
  03a529c  stfs 3, 148(1)
  03a52a0  stfs 4, 152(1)
  03a52a4  bl 0xfc948
  03a52a8  nop
  03a52ac  lfs 1, 160(1)
  03a52b0  lfs 2, 16(24)
  03a52b4  fsubs 1, 1, 2
  03a52b8  lfs 2, 164(1)
  03a52bc  lis 3, -32768
  03a52c0  stfs 1, 144(1)
  03a52c4  lfs 3, 20(24)
  03a52c8  fsubs 2, 2, 3
  03a52cc  lfs 4, 172(1)
  03a52d0  stfs 4, 156(1)
  03a52d4  fdivs 4, 30, 19
  03a52d8  stw 3, 152(1)
  03a52dc  fmuls 3, 2, 2
  03a52e0  fmadds 3, 1, 1, 3
  03a52e4  fsqrts 3, 3
  03a52e8  fdivs 5, 31, 3
  03a52ec  fsub 6, 20, 3
  03a52f0  fsub 8, 20, 3
  03a52f4  fsub 7, 3, 20
  03a52f8  fsub 3, 3, 20
  03a52fc  fmuls 9, 2, 5
  03a5300  fmuls 5, 1, 5
  03a5304  fsel 6, 6, 20, 9
  03a5308  fsel 8, 8, 20, 5
  03a530c  fsel 6, 7, 6, 9
  03a5310  fsel 3, 3, 8, 5
  03a5314  fsubs 2, 2, 6
  03a5318  fsubs 1, 1, 3
  03a531c  fmuls 2, 2, 4
  03a5320  fmuls 1, 1, 4
  03a5324  stfs 2, 148(1)
  03a5328  stfs 1, 144(1)
  03a532c  stfs 1, 16(25)
  03a5330  lfs 1, 148(1)
  03a5334  stfs 1, 20(25)
  03a5338  addic 23, 23, 1
  03a533c  cmpw 23, 22
  03a5340  bt 0, 0x3a5088
  03a5344  lhz 3, 180(31)
  03a5348  cmpwi 3, 0
  03a534c  bt 2, 0x3a5358
  03a5350  li 3, 0
  03a5354  sth 3, 180(31)
  03a5358  ori 3, 31, 0
  03a535c  li 4, 256
  03a5360  li 5, -1
  03a5364  bl 0xfd8d0
  03a5368  nop
  03a536c  ld 0, 416(1)
  03a5370  mtlr 0
  03a5374  lfd 19, 296(1)
  03a5378  lfd 20, 304(1)
  03a537c  lfd 21, 312(1)
  03a5380  lfd 22, 320(1)
  03a5384  lfd 23, 328(1)
  03a5388  lfd 24, 336(1)
  03a538c  lfd 25, 344(1)
  03a5390  lfd 26, 352(1)
  03a5394  lfd 27, 360(1)
  03a5398  lfd 28, 368(1)
  03a539c  lfd 29, 376(1)
  03a53a0  lfd 30, 384(1)
  03a53a4  lfd 31, 392(1)
  03a53a8  ld 21, 208(1)
  03a53ac  ld 22, 216(1)
  03a53b0  ld 23, 224(1)
  03a53b4  ld 24, 232(1)
  03a53b8  ld 25, 240(1)
  03a53bc  ld 26, 248(1)
  03a53c0  ld 27, 256(1)
  03a53c4  ld 28, 264(1)
  03a53c8  ld 29, 272(1)
  03a53cc  ld 30, 280(1)
  03a53d0  ld 31, 288(1)
  03a53d4  addi 1, 1, 400
  03a53d8  blr

M511_003a5468:   # 0x3a5468, 0xf14 bytes
  03a5468  stdu 1, -640(1)
  03a546c  mflr 0
  03a5470  std 0, 656(1)
  03a5474  stfd 22, 560(1)
  03a5478  stfd 23, 568(1)
  03a547c  stfd 24, 576(1)
  03a5480  stfd 25, 584(1)
  03a5484  stfd 26, 592(1)
  03a5488  stfd 27, 600(1)
  03a548c  stfd 28, 608(1)
  03a5490  stfd 29, 616(1)
  03a5494  stfd 30, 624(1)
  03a5498  stfd 31, 632(1)
  03a549c  lis 5, 161
  03a54a0  std 31, 552(1)
  03a54a4  lis 6, 269
  03a54a8  std 30, 544(1)
  03a54ac  ori 31, 3, 0
  03a54b0  clrlwi 30, 4, 24
  03a54b4  li 7, 0
  03a54b8  std 28, 528(1)
  03a54bc  lwz 3, 1808(5)
  03a54c0  li 28, 0
  03a54c4  std 29, 536(1)
  03a54c8  lwz 5, -28060(6)
  03a54cc  lwz 29, 120(31)
  03a54d0  std 22, 480(1)
  03a54d4  subc 5, 3, 5
  03a54d8  ori 22, 28, 0
  03a54dc  extsw 4, 5
  03a54e0  neg 5, 4
  03a54e4  subc 6, 4, 7
  03a54e8  subc 5, 5, 4
  03a54ec  sradi 6, 6, 63
  03a54f0  and 5, 6, 5
  03a54f4  addc 4, 4, 5
  03a54f8  std 27, 520(1)
  03a54fc  std 26, 512(1)
  03a5500  std 25, 504(1)
  03a5504  std 24, 496(1)
  03a5508  std 23, 488(1)
  03a550c  std 21, 472(1)
  03a5510  std 20, 464(1)
  03a5514  std 19, 456(1)
  03a5518  cmpwi 4, 1
  03a551c  bf 1, 0x3a5570
  03a5520  lhz 3, 166(31)
  03a5524  extsh 3, 3
  03a5528  cmpwi 3, 506
  03a552c  bf 2, 0x3a554c
  03a5530  li 3, 0
  03a5534  li 4, 0
  03a5538  ori 5, 31, 0
  03a553c  li 6, 500
  03a5540  bl 0x15d204
  03a5544  nop
  03a5548  b 0x3a5560
  03a554c  li 3, 0
  03a5550  li 4, 0
  03a5554  ori 5, 31, 0
  03a5558  bl 0x15d12c
  03a555c  nop
  03a5560  lis 3, 161
  03a5564  lis 4, 269
  03a5568  lwz 3, 1808(3)
  03a556c  stw 3, -28060(4)
  03a5570  lis 4, 269
  03a5574  li 5, 0
  03a5578  lwz 4, -28056(4)
  03a557c  subc 4, 3, 4
  03a5580  extsw 4, 4
  03a5584  neg 6, 4
  03a5588  subc 5, 4, 5
  03a558c  subc 6, 6, 4
  03a5590  sradi 5, 5, 63
  03a5594  and 5, 5, 6
  03a5598  addc 4, 4, 5
  03a559c  cmpwi 4, 1
  03a55a0  bf 1, 0x3a55b0
  03a55a4  lis 4, 269
  03a55a8  stw 3, -28056(4)
  03a55ac  b 0x3a55b4
  03a55b0  li 28, 1
  03a55b4  lwz 3, 160(29)
  03a55b8  cmpwi 3, 0
  03a55bc  bt 2, 0x3a55e0
  03a55c0  lwz 3, 120(3)
  03a55c4  lwz 4, 164(29)
  03a55c8  stw 4, 164(3)
  03a55cc  lwz 3, 160(29)
  03a55d0  lwz 3, 120(3)
  03a55d4  lwz 4, 172(3)
  03a55d8  ori 4, 4, 4
  03a55dc  stw 4, 172(3)
  03a55e0  lwz 3, 164(29)
  03a55e4  cmpwi 3, 0
  03a55e8  bt 2, 0x3a5624
  03a55ec  lwz 3, 120(3)
  03a55f0  lwz 3, 160(3)
  03a55f4  bl 0x10af88
  03a55f8  nop
  03a55fc  tweqi 3, 0
  03a5600  lwz 3, 160(29)
  03a5604  lwz 4, 164(29)
  03a5608  lwz 4, 120(4)
  03a560c  stw 3, 160(4)
  03a5610  lwz 3, 164(29)
  03a5614  lwz 3, 120(3)
  03a5618  lwz 4, 172(3)
  03a561c  ori 4, 4, 4
  03a5620  stw 4, 172(3)
  03a5624  lis 3, 58
  03a5628  lfs 1, 16(31)
  03a562c  lfs 2, 20(31)
  03a5630  lis 10, 16512
  03a5634  addi 26, 3, 21468
  03a5638  stfs 1, 128(1)
  03a563c  lfs 1, 28(31)
  03a5640  addic 3, 1, 128
  03a5644  stfs 2, 132(1)
  03a5648  li 7, 1
  03a564c  stfs 1, 140(1)
  03a5650  ori 10, 10, 32896
  03a5654  lfs 31, 0(26)
  03a5658  lfs 1, 24(31)
  03a565c  fadds 2, 1, 31
  03a5660  fmr 1, 31
  03a5664  stfs 2, 136(1)
  03a5668  lfs 30, 4(26)
  03a566c  lfs 29, 12(26)
  03a5670  lfs 28, 16(26)
  03a5674  lfs 3, 8(26)
  03a5678  fmr 2, 30
  03a567c  fmr 4, 29
  03a5680  fmr 5, 28
  03a5684  bl 0x1246b8
  03a5688  nop
  03a568c  ori 27, 22, 0
  03a5690  lfs 27, 20(26)
  03a5694  lis 10, 16512
  03a5698  fmr 1, 31
  03a569c  addic 3, 1, 128
  03a56a0  fmr 2, 30
  03a56a4  li 7, 1
  03a56a8  fmr 3, 27
  03a56ac  fmr 4, 29
  03a56b0  ori 10, 10, 32896
  03a56b4  fmr 5, 28
  03a56b8  bl 0x1246b8
  03a56bc  nop
  03a56c0  addic 27, 27, 1
  03a56c4  cmpwi 27, 5
  03a56c8  bt 0, 0x3a5694
  03a56cc  lhz 3, 166(31)
  03a56d0  extsh 3, 3
  03a56d4  cmpwi 3, 503
  03a56d8  cmpwi 1, 3, 500
  03a56dc  cmpwi 6, 3, 499
  03a56e0  cmpwi 7, 3, 501
  03a56e4  bt 1, 0x3a5704
  03a56e8  bt 5, 0x3a56f4
  03a56ec  bf 25, 0x3a5774
  03a56f0  b 0x3a574c
  03a56f4  bf 29, 0x3a5734
  03a56f8  cmpwi 3, 502
  03a56fc  bf 1, 0x3a5744
  03a5700  b 0x3a573c
  03a5704  cmpwi 3, 506
  03a5708  bt 1, 0x3a5720
  03a570c  cmpwi 3, 504
  03a5710  bf 1, 0x3a5754
  03a5714  cmpwi 3, 505
  03a5718  bf 1, 0x3a575c
  03a571c  b 0x3a5764
  03a5720  cmpwi 3, 510
  03a5724  bf 1, 0x3a576c
  03a5728  cmpwi 3, 511
  03a572c  bf 1, 0x3a574c
  03a5730  b 0x3a5774
  03a5734  li 27, 348
  03a5738  b 0x3a5778
  03a573c  li 27, 351
  03a5740  b 0x3a5778
  03a5744  li 27, 354
  03a5748  b 0x3a5778
  03a574c  li 27, 357
  03a5750  b 0x3a5778
  03a5754  li 27, 360
  03a5758  b 0x3a5778
  03a575c  li 27, 363
  03a5760  b 0x3a5778
  03a5764  li 27, 366
  03a5768  b 0x3a5778
  03a576c  li 27, 369
  03a5770  b 0x3a5778
  03a5774  li 27, 149
  03a5778  lis 3, 165
  03a577c  lwz 3, -9488(3)
  03a5780  cmpwi 3, 200
  03a5784  cmpwi 1, 3, 150
  03a5788  cmpwi 6, 3, 100
  03a578c  cmpwi 7, 3, 50
  03a5790  bf 1, 0x3a57a0
  03a5794  li 26, 4
  03a5798  ori 25, 26, 0
  03a579c  b 0x3a57d8
  03a57a0  bf 5, 0x3a57b0
  03a57a4  li 26, 2
  03a57a8  ori 25, 26, 0
  03a57ac  b 0x3a57d8
  03a57b0  bf 25, 0x3a57c0
  03a57b4  li 26, 2
  03a57b8  li 25, 1
  03a57bc  b 0x3a57d8
  03a57c0  bf 29, 0x3a57d0
  03a57c4  li 26, 1
  03a57c8  ori 25, 22, 0
  03a57cc  b 0x3a57d8
  03a57d0  li 26, 1
  03a57d4  ori 25, 22, 0
  03a57d8  lis 23, 149
  03a57dc  lfs 1, 16(31)
  03a57e0  addic 23, 23, 5056
  03a57e4  lfs 2, 20(31)
  03a57e8  lis 3, 58
  03a57ec  addi 3, 3, 21468
  03a57f0  lfs 3, 320(23)
  03a57f4  lfs 4, 324(23)
  03a57f8  fsubs 1, 3, 1
  03a57fc  fsubs 2, 4, 2
  03a5800  lis 4, 115
  03a5804  addic 4, 4, 22784
  03a5808  fabs 3, 1
  03a580c  fabs 4, 2
  03a5810  stfs 1, 336(1)
  03a5814  stfs 2, 340(1)
  03a5818  fsubs 1, 3, 4
  03a581c  stfs 1, 344(1)
  03a5820  lwz 5, 336(1)
  03a5824  lfs 23, 24(3)
  03a5828  lfs 1, 336(1)
  03a582c  lwz 3, 340(1)
  03a5830  lfs 2, 340(1)
  03a5834  lwz 6, 344(1)
  03a5838  rlwinm 3, 3, 3, 29, 29
  03a583c  fabs 5, 2
  03a5840  lfs 2, 344(1)
  03a5844  fabs 1, 1
  03a5848  rlwimi 3, 6, 2, 30, 30
  03a584c  fsub 6, 2, 23
  03a5850  rlwimi 3, 5, 4, 28, 28
  03a5854  fsub 7, 2, 23
  03a5858  ori 5, 4, 0
  03a585c  rlwimi 5, 3, 2, 26, 28
  03a5860  slwi 3, 3, 2
  03a5864  clrldi 5, 5, 32
  03a5868  fsel 4, 6, 1, 4
  03a586c  lfsx 1, 4, 3
  03a5870  lfs 2, 4(5)
  03a5874  fsel 3, 7, 5, 3
  03a5878  fcmpu 0, 4, 23
  03a587c  bt 1, 0x3a5888
  03a5880  fmr 1, 23
  03a5884  b 0x3a59ac
  03a5888  fsubs 5, 3, 4
  03a588c  fadds 3, 3, 4
  03a5890  addic 3, 1, 16
  03a5894  li 6, 2
  03a5898  addic 5, 3, 396
  03a589c  addic 4, 3, 380
  03a58a0  mtctr 6
  03a58a4  fdivs 3, 5, 3
  03a58a8  fmuls 4, 3, 3
  03a58ac  stfs 3, 408(1)
  03a58b0  stfs 3, 400(1)
  03a58b4  stfs 3, 404(1)
  03a58b8  stfs 3, 396(1)
  03a58bc  lfs 6, 408(1)
  03a58c0  lfs 7, 400(1)
  03a58c4  lfs 8, 404(1)
  03a58c8  fmuls 5, 4, 4
  03a58cc  fmuls 7, 7, 4
  03a58d0  fmuls 6, 6, 5
  03a58d4  fmuls 3, 5, 5
  03a58d8  fmuls 5, 8, 5
  03a58dc  stfs 7, 400(1)
  03a58e0  fmuls 4, 6, 4
  03a58e4  stfs 5, 404(1)
  03a58e8  stfs 4, 408(1)
  03a58ec  lfs 4, 380(3)
  03a58f0  fmuls 4, 4, 3
  03a58f4  stfs 4, 396(3)
  03a58f8  lfs 4, 4(4)
  03a58fc  addic 4, 4, 8
  03a5900  fmuls 4, 4, 3
  03a5904  addic 3, 3, 8
  03a5908  stfs 4, 4(5)
  03a590c  addic 5, 5, 8
  03a5910  bdnz 0x3a58ec
  03a5914  li 5, 4
  03a5918  ori 3, 1, 0
  03a591c  mtctr 5
  03a5920  lis 4, 115
  03a5924  addic 5, 3, 396
  03a5928  addic 4, 4, 22752
  03a592c  ori 7, 5, 0
  03a5930  lfs 3, 396(3)
  03a5934  lfs 4, 0(4)
  03a5938  fmuls 3, 3, 4
  03a593c  lfs 4, 4(4)
  03a5940  addic 4, 4, 8
  03a5944  stfs 3, 396(3)
  03a5948  lfs 3, 4(5)
  03a594c  addic 3, 3, 8
  03a5950  fmuls 3, 3, 4
  03a5954  stfs 3, 4(5)
  03a5958  addic 5, 5, 8
  03a595c  bdnz 0x3a5930
  03a5960  ori 3, 1, 0
  03a5964  fmr 3, 23
  03a5968  mtctr 6
  03a596c  lfs 4, 396(3)
  03a5970  fadds 3, 3, 4
  03a5974  lfs 4, 4(7)
  03a5978  addic 3, 3, 16
  03a597c  lfs 5, 8(7)
  03a5980  lfs 6, 12(7)
  03a5984  addic 7, 7, 16
  03a5988  fadds 3, 3, 4
  03a598c  fadds 3, 3, 5
  03a5990  fadds 3, 3, 6
  03a5994  bdnz 0x3a596c
  03a5998  lis 3, 58
  03a599c  addi 3, 3, 21468
  03a59a0  lfs 4, 28(3)
  03a59a4  fadds 3, 3, 4
  03a59a8  fmadds 1, 3, 1, 2
  03a59ac  lfs 2, 72(31)
  03a59b0  bl 0x5025e0
  03a59b4  nop
  03a59b8  lis 3, 58
  03a59bc  addi 24, 3, 21468
  03a59c0  lfs 2, 32(24)
  03a59c4  lfs 3, 36(24)
  03a59c8  fadds 1, 1, 2
  03a59cc  fmuls 1, 1, 3
  03a59d0  bl 0x502758
  03a59d4  nop
  03a59d8  extsw 3, 3
  03a59dc  std 3, 432(1)
  03a59e0  lfs 1, 40(24)
  03a59e4  lfd 2, 432(1)
  03a59e8  fcfid 2, 2
  03a59ec  frsp 2, 2
  03a59f0  fmuls 1, 2, 1
  03a59f4  bl 0x502648
  03a59f8  nop
  03a59fc  stw 22, 156(1)
  03a5a00  addic 3, 1, 288
  03a5a04  stw 22, 148(1)
  03a5a08  addic 4, 1, 144
  03a5a0c  stw 22, 144(1)
  03a5a10  stfs 1, 152(1)
  03a5a14  bl 0x500b64
  03a5a18  nop
  03a5a1c  cmpwi 26, 0
  03a5a20  ori 19, 22, 0
  03a5a24  bf 1, 0x3a5c78
  03a5a28  lis 3, 58
  03a5a2c  lis 21, 132
  03a5a30  addi 3, 3, 21468
  03a5a34  lis 20, 132
  03a5a38  addic 21, 21, 13568
  03a5a3c  addic 20, 20, 13664
  03a5a40  lfs 31, 44(3)
  03a5a44  lfs 30, 48(3)
  03a5a48  lfs 29, 52(3)
  03a5a4c  lfs 28, 56(3)
  03a5a50  lfs 1, 4(21)
  03a5a54  lfs 2, 0(21)
  03a5a58  lfs 3, 316(1)
  03a5a5c  lfs 4, 304(1)
  03a5a60  fmuls 3, 3, 1
  03a5a64  lfs 5, 308(1)
  03a5a68  fmuls 4, 4, 1
  03a5a6c  lfs 6, 300(1)
  03a5a70  lfs 7, 8(21)
  03a5a74  lfs 8, 288(1)
  03a5a78  fmuls 5, 5, 1
  03a5a7c  lfs 9, 312(1)
  03a5a80  lfs 10, 292(1)
  03a5a84  fmuls 1, 9, 1
  03a5a88  lfs 9, 296(1)
  03a5a8c  fmadds 3, 6, 2, 3
  03a5a90  lfs 6, 332(1)
  03a5a94  fmadds 4, 8, 2, 4
  03a5a98  lfs 8, 320(1)
  03a5a9c  fmadds 5, 10, 2, 5
  03a5aa0  lfs 10, 324(1)
  03a5aa4  lfs 11, 328(1)
  03a5aa8  fmadds 1, 9, 2, 1
  03a5aac  lfs 12, 12(21)
  03a5ab0  fmadds 2, 6, 7, 3
  03a5ab4  fmadds 3, 8, 7, 4
  03a5ab8  fmadds 4, 10, 7, 5
  03a5abc  fmadds 1, 11, 7, 1
  03a5ac0  fadds 5, 2, 12
  03a5ac4  lfs 2, 152(1)
  03a5ac8  stfs 5, 188(1)
  03a5acc  lfs 5, 16(31)
  03a5ad0  lfs 6, 20(31)
  03a5ad4  fadds 3, 3, 5
  03a5ad8  lfs 5, 24(31)
  03a5adc  fadds 4, 4, 6
  03a5ae0  fadds 1, 1, 5
  03a5ae4  stfs 3, 176(1)
  03a5ae8  stfs 4, 180(1)
  03a5aec  stfs 1, 184(1)
  03a5af0  lfs 1, 0(20)
  03a5af4  stfs 1, 192(1)
  03a5af8  lfs 1, 4(20)
  03a5afc  stfs 1, 196(1)
  03a5b00  lfs 1, 8(20)
  03a5b04  stfs 1, 200(1)
  03a5b08  lfs 3, 12(20)
  03a5b0c  stfs 3, 204(1)
  03a5b10  bl 0x502578
  03a5b14  nop
  03a5b18  lfs 2, 176(1)
  03a5b1c  lfs 3, 16(31)
  03a5b20  lfs 4, 180(1)
  03a5b24  fsubs 3, 2, 3
  03a5b28  lfs 2, 20(31)
  03a5b2c  stfs 1, 200(1)
  03a5b30  fsubs 4, 4, 2
  03a5b34  lfs 5, 188(1)
  03a5b38  fmr 1, 31
  03a5b3c  stw 22, 168(1)
  03a5b40  fmr 2, 30
  03a5b44  stfs 5, 172(1)
  03a5b48  stfs 3, 160(1)
  03a5b4c  stfs 4, 164(1)
  03a5b50  bl 0xfcbe8
  03a5b54  nop
  03a5b58  lis 24, 114
  03a5b5c  lfs 3, 164(1)
  03a5b60  lfs 4, 160(1)
  03a5b64  fmuls 2, 3, 3
  03a5b68  lfs 5, 168(1)
  03a5b6c  fmadds 2, 4, 4, 2
  03a5b70  fmadds 2, 5, 5, 2
  03a5b74  fsqrts 6, 2
  03a5b78  lfs 2, -3052(24)
  03a5b7c  fmuls 7, 1, 2
  03a5b80  fmr 1, 29
  03a5b84  fmr 2, 28
  03a5b88  fdivs 7, 7, 6
  03a5b8c  fsub 8, 23, 6
  03a5b90  fsub 9, 23, 6
  03a5b94  fsub 10, 23, 6
  03a5b98  fsub 11, 6, 23
  03a5b9c  fsub 12, 6, 23
  03a5ba0  fsub 6, 6, 23
  03a5ba4  fmuls 4, 4, 7
  03a5ba8  fmuls 3, 3, 7
  03a5bac  fmuls 5, 5, 7
  03a5bb0  fsel 7, 8, 23, 4
  03a5bb4  fsel 8, 9, 23, 3
  03a5bb8  fsel 9, 10, 23, 5
  03a5bbc  fsel 4, 11, 7, 4
  03a5bc0  fsel 3, 12, 8, 3
  03a5bc4  fsel 5, 6, 9, 5
  03a5bc8  stfs 4, 160(1)
  03a5bcc  stfs 3, 164(1)
  03a5bd0  stfs 5, 168(1)
  03a5bd4  bl 0xfcbe8
  03a5bd8  nop
  03a5bdc  lfs 2, -3052(24)
  03a5be0  li 3, 2
  03a5be4  fmuls 1, 1, 2
  03a5be8  stfs 1, 168(1)
  03a5bec  bl 0xfc620
  03a5bf0  nop
  03a5bf4  ori 10, 3, 0
  03a5bf8  fmr 1, 31
  03a5bfc  ori 3, 31, 0
  03a5c00  fmr 2, 31
  03a5c04  ori 7, 27, 0
  03a5c08  addic 4, 1, 160
  03a5c0c  addic 5, 1, 176
  03a5c10  addic 6, 1, 192
  03a5c14  bl 0x28cce0
  03a5c18  nop
  03a5c1c  ori 24, 3, 0
  03a5c20  cmpwi 24, 0
  03a5c24  bt 2, 0x3a5c64
  03a5c28  lfs 1, 0(20)
  03a5c2c  stfs 1, 64(24)
  03a5c30  lfs 1, 4(20)
  03a5c34  stfs 1, 68(24)
  03a5c38  lfs 1, 8(20)
  03a5c3c  stfs 1, 72(24)
  03a5c40  lfs 2, 12(20)
  03a5c44  stfs 2, 76(24)
  03a5c48  lfs 2, 152(1)
  03a5c4c  bl 0x502578
  03a5c50  nop
  03a5c54  stfs 1, 72(24)
  03a5c58  ori 3, 24, 0
  03a5c5c  bl 0xf31a8
  03a5c60  nop
  03a5c64  addic 19, 19, 1
  03a5c68  addic 21, 21, 16
  03a5c6c  cmpw 19, 26
  03a5c70  addic 20, 20, 16
  03a5c74  bt 0, 0x3a5a50
  03a5c78  cmpwi 25, 0
  03a5c7c  ori 26, 22, 0
  03a5c80  bf 1, 0x3a5dd8
  03a5c84  lis 3, 58
  03a5c88  addic 27, 27, 1
  03a5c8c  addi 3, 3, 21468
  03a5c90  lfs 31, 60(3)
  03a5c94  lfs 30, 64(3)
  03a5c98  lfs 29, 44(3)
  03a5c9c  lfs 28, 68(3)
  03a5ca0  lfs 27, 72(3)
  03a5ca4  lfs 26, 76(3)
  03a5ca8  lfs 25, 80(3)
  03a5cac  fmr 1, 31
  03a5cb0  fmr 2, 30
  03a5cb4  bl 0xfcbe8
  03a5cb8  nop
  03a5cbc  stfs 1, 224(1)
  03a5cc0  fmr 2, 30
  03a5cc4  fmr 1, 31
  03a5cc8  bl 0xfcbe8
  03a5ccc  nop
  03a5cd0  stfs 1, 228(1)
  03a5cd4  fmr 1, 23
  03a5cd8  fmr 2, 29
  03a5cdc  bl 0xfcbe8
  03a5ce0  nop
  03a5ce4  lfs 2, 224(1)
  03a5ce8  lfs 3, 16(31)
  03a5cec  lfs 4, 228(1)
  03a5cf0  fadds 3, 2, 3
  03a5cf4  lfs 2, 20(31)
  03a5cf8  lfs 5, 24(31)
  03a5cfc  fadds 4, 4, 2
  03a5d00  fadds 5, 1, 5
  03a5d04  fmr 1, 28
  03a5d08  fmr 2, 27
  03a5d0c  stfs 3, 224(1)
  03a5d10  stfs 4, 228(1)
  03a5d14  stfs 5, 232(1)
  03a5d18  bl 0xfcbe8
  03a5d1c  nop
  03a5d20  lis 4, 114
  03a5d24  addic 3, 1, 208
  03a5d28  lfs 2, -3052(4)
  03a5d2c  fmuls 1, 1, 2
  03a5d30  fmr 2, 1
  03a5d34  bl 0xfea60
  03a5d38  nop
  03a5d3c  lwz 3, 216(1)
  03a5d40  lfs 1, 216(1)
  03a5d44  cmpwi 3, 0
  03a5d48  bf 0, 0x3a5d54
  03a5d4c  fneg 1, 1
  03a5d50  stfs 1, 216(1)
  03a5d54  bl 0xfcc68
  03a5d58  nop
  03a5d5c  stfs 1, 240(1)
  03a5d60  stw 22, 244(1)
  03a5d64  bl 0xfcc68
  03a5d68  nop
  03a5d6c  li 3, 6
  03a5d70  stfs 1, 248(1)
  03a5d74  li 24, 1
  03a5d78  bl 0xfc620
  03a5d7c  nop
  03a5d80  cmpwi 3, 0
  03a5d84  bf 2, 0x3a5da4
  03a5d88  fmr 1, 26
  03a5d8c  fmr 2, 28
  03a5d90  bl 0xfcbe8
  03a5d94  nop
  03a5d98  bl 0x502758
  03a5d9c  nop
  03a5da0  ori 24, 3, 0
  03a5da4  addic 4, 1, 208
  03a5da8  fmr 1, 25
  03a5dac  ori 10, 24, 0
  03a5db0  fmr 2, 30
  03a5db4  addic 5, 1, 224
  03a5db8  addic 6, 1, 240
  03a5dbc  ori 3, 31, 0
  03a5dc0  ori 7, 27, 0
  03a5dc4  bl 0x28cce0
  03a5dc8  nop
  03a5dcc  addic 26, 26, 1
  03a5dd0  cmpw 26, 25
  03a5dd4  bt 0, 0x3a5cac
  03a5dd8  li 3, 3
  03a5ddc  lis 4, 58
  03a5de0  lhz 7, 52(31)
  03a5de4  li 6, 84
  03a5de8  vspltisw 2, -1
  03a5dec  addi 4, 4, 21468
  03a5df0  stb 3, 32(31)
  03a5df4  ori 3, 7, 1
  03a5df8  stw 22, 148(31)
  03a5dfc  ori 5, 30, 0
  03a5e00  vslw 2, 2, 2
  03a5e04  lis 30, 114
  03a5e08  li 7, -3056
  03a5e0c  sth 3, 52(31)
  03a5e10  <unknown>
  03a5e14  li 3, 188
  03a5e18  vspltw 3, 3, 0
  03a5e1c  <unknown>
  03a5e20  cmpwi 5, 0
  03a5e24  lfs 30, 84(4)
  03a5e28  vmaddfp 2, 4, 3, 2
  03a5e2c  vctsxs 2, 2, 0
  03a5e30  vspltb 2, 2, 3
  03a5e34  stvebx 2, 3, 31
  03a5e38  bt 2, 0x3a6310
  03a5e3c  lis 3, 151
  03a5e40  vspltisw 2, 1
  03a5e44  addic 3, 3, -25376
  03a5e48  lwz 3, 8332(3)
  03a5e4c  cmpwi 3, 22
  03a5e50  bf 2, 0x3a5e80
  03a5e54  lis 3, 58
  03a5e58  vspltisw 2, -1
  03a5e5c  li 4, -3056
  03a5e60  addi 3, 3, 21468
  03a5e64  li 5, 88
  03a5e68  vslw 2, 2, 2
  03a5e6c  <unknown>
  03a5e70  <unknown>
  03a5e74  vspltw 4, 4, 0
  03a5e78  vmaddfp 2, 3, 4, 2
  03a5e7c  vctsxs 2, 2, 0
  03a5e80  vspltb 2, 2, 3
  03a5e84  li 3, 202
  03a5e88  stvebx 2, 3, 29
  03a5e8c  lfs 4, 228(31)
  03a5e90  lfs 2, 224(31)
  03a5e94  fmuls 1, 4, 4
  03a5e98  lfs 6, 232(31)
  03a5e9c  fmadds 1, 2, 2, 1
  03a5ea0  fmadds 31, 6, 6, 1
  03a5ea4  lfs 1, 16(31)
  03a5ea8  lfs 3, 20(31)
  03a5eac  lfs 5, 24(31)
  03a5eb0  fsqrts 31, 31
  03a5eb4  fcmpu 0, 31, 23
  03a5eb8  bf 2, 0x3a5ed0
  03a5ebc  fmr 4, 23
  03a5ec0  lfs 6, 236(31)
  03a5ec4  fmr 2, 4
  03a5ec8  fmr 31, 2
  03a5ecc  b 0x3a5ef4
  03a5ed0  lis 3, 58
  03a5ed4  addi 3, 3, 21468
  03a5ed8  lfs 7, 64(3)
  03a5edc  fdivs 7, 7, 31
  03a5ee0  lfs 8, 236(31)
  03a5ee4  fmuls 31, 2, 7
  03a5ee8  fmuls 2, 4, 7
  03a5eec  fmuls 4, 6, 7
  03a5ef0  fmr 6, 8
  03a5ef4  lfs 7, 324(23)
  03a5ef8  fadds 2, 2, 3
  03a5efc  lfs 8, 320(23)
  03a5f00  fsubs 7, 7, 3
  03a5f04  fsubs 8, 8, 1
  03a5f08  lfs 9, 328(23)
  03a5f0c  fadds 1, 31, 1
  03a5f10  fsubs 9, 9, 5
  03a5f14  fadds 4, 4, 5
  03a5f18  stfs 6, 268(1)
  03a5f1c  lis 3, 58
  03a5f20  li 29, 10
  03a5f24  fmuls 7, 7, 7
  03a5f28  addi 3, 3, 21468
  03a5f2c  stfs 1, 256(1)
  03a5f30  stfs 2, 260(1)
  03a5f34  stfs 4, 264(1)
  03a5f38  stw 22, 284(1)
  03a5f3c  fmadds 3, 8, 8, 7
  03a5f40  stw 22, 280(1)
  03a5f44  stw 22, 276(1)
  03a5f48  stw 22, 272(1)
  03a5f4c  lfs 29, 92(3)
  03a5f50  fmadds 31, 9, 9, 3
  03a5f54  fsqrts 31, 31
  03a5f58  fcmpu 0, 31, 29
  03a5f5c  cror 6, 1, 2
  03a5f60  bt 6, 0x3a5f74
  03a5f64  fmr 1, 31
  03a5f68  bl 0x502758
  03a5f6c  nop
  03a5f70  addic 29, 3, 2
  03a5f74  lis 3, 58
  03a5f78  cmpwi 28, 0
  03a5f7c  addi 3, 3, 21468
  03a5f80  cmpwi 1, 29, 6
  03a5f84  lfs 1, 96(3)
  03a5f88  fsubs 2, 1, 31
  03a5f8c  fsub 1, 31, 1
  03a5f90  fsel 23, 1, 23, 2
  03a5f94  bt 2, 0x3a5fa0
  03a5f98  bf 5, 0x3a5fa0
  03a5f9c  li 29, 6
  03a5fa0  cmpwi 29, 0
  03a5fa4  ori 27, 22, 0
  03a5fa8  bf 1, 0x3a6148
  03a5fac  lis 3, 58
  03a5fb0  addi 3, 3, 21468
  03a5fb4  lfs 28, 100(3)
  03a5fb8  lfs 27, 104(3)
  03a5fbc  lfs 26, 108(3)
  03a5fc0  lfs 25, 112(3)
  03a5fc4  lfs 24, 116(3)
  03a5fc8  fmr 1, 29
  03a5fcc  fmr 2, 28
  03a5fd0  bl 0xfcbe8
  03a5fd4  nop
  03a5fd8  lis 3, 114
  03a5fdc  lis 4, 20224
  03a5fe0  lis 6, 20224
  03a5fe4  lis 5, 12287
  03a5fe8  lis 7, 12032
  03a5fec  lfs 2, -3052(3)
  03a5ff0  ori 5, 5, 65535
  03a5ff4  ori 3, 4, 36863
  03a5ff8  lis 4, 20224
  03a5ffc  fmuls 3, 2, 23
  03a6000  ori 4, 4, 32767
  03a6004  stw 3, 348(1)
  03a6008  stw 3, 352(1)
  03a600c  ori 3, 6, 28671
  03a6010  lis 6, 12032
  03a6014  stw 4, 356(1)
  03a6018  lis 4, 12032
  03a601c  stw 3, 360(1)
  03a6020  ori 3, 6, 24447
  03a6024  lis 6, 12032
  03a6028  stw 5, 364(1)
  03a602c  ori 4, 4, 20351
  03a6030  stw 5, 368(1)
  03a6034  ori 5, 6, 16255
  03a6038  fmsubs 22, 1, 2, 3
  03a603c  stw 3, 372(1)
  03a6040  ori 6, 7, 79
  03a6044  lis 7, 12032
  03a6048  stw 4, 376(1)
  03a604c  lis 4, 16128
  03a6050  stw 5, 380(1)
  03a6054  stw 6, 384(1)
  03a6058  li 3, 6
  03a605c  stw 7, 388(1)
  03a6060  stw 4, 392(1)
  03a6064  bl 0xfc620
  03a6068  nop
  03a606c  sldi 4, 3, 2
  03a6070  li 3, 6
  03a6074  addc 4, 4, 1
  03a6078  clrldi 4, 4, 32
  03a607c  lwz 4, 348(4)
  03a6080  extsw 26, 4
  03a6084  bl 0xfc620
  03a6088  nop
  03a608c  lfs 1, -3056(30)
  03a6090  sldi 3, 3, 2
  03a6094  fmuls 2, 1, 30
  03a6098  addc 3, 3, 1
  03a609c  fmuls 1, 1, 26
  03a60a0  clrldi 3, 3, 32
  03a60a4  lwz 3, 372(3)
  03a60a8  extsw 25, 3
  03a60ac  fctiwz 2, 2
  03a60b0  fctiwz 1, 1
  03a60b4  stfd 2, 432(1)
  03a60b8  lwz 3, 436(1)
  03a60bc  stfd 1, 432(1)
  03a60c0  lwz 4, 436(1)
  03a60c4  extsw 3, 3
  03a60c8  extsw 4, 4
  03a60cc  bl 0xfe484
  03a60d0  nop
  03a60d4  lfs 1, -3056(30)
  03a60d8  ori 24, 3, 0
  03a60dc  fmuls 2, 1, 25
  03a60e0  fmuls 1, 1, 24
  03a60e4  fctiwz 2, 2
  03a60e8  fctiwz 1, 1
  03a60ec  stfd 2, 432(1)
  03a60f0  lwz 3, 436(1)
  03a60f4  stfd 1, 432(1)
  03a60f8  extsw 3, 3
  03a60fc  lwz 4, 436(1)
  03a6100  extsw 4, 4
  03a6104  bl 0xfe484
  03a6108  nop
  03a610c  ori 9, 3, 0
  03a6110  std 22, 112(1)
  03a6114  ori 8, 24, 0
  03a6118  fmr 1, 27
  03a611c  addic 3, 1, 256
  03a6120  fmr 2, 22
  03a6124  addic 4, 1, 272
  03a6128  std 22, 120(1)
  03a612c  ori 5, 26, 0
  03a6130  ori 6, 25, 0
  03a6134  bl 0x123390
  03a6138  nop
  03a613c  addic 27, 27, 1
  03a6140  cmpw 27, 29
  03a6144  bt 0, 0x3a5fc8
  03a6148  lis 3, 161
  03a614c  lis 4, 16243
  03a6150  ori 4, 4, 13107
  03a6154  lwz 3, 1812(3)
  03a6158  srawi 5, 3, 31
  03a615c  srwi 6, 5, 1
  03a6160  xor 3, 6, 3
  03a6164  subc 3, 3, 5
  03a6168  cmpw 3, 4
  03a616c  bf 0, 0x3a6270
  03a6170  lis 3, 58
  03a6174  cmpwi 1, 28, 0
  03a6178  addi 3, 3, 21468
  03a617c  lfs 1, 56(3)
  03a6180  fcmpu 0, 31, 1
  03a6184  crnand 2, 1, 6
  03a6188  bt 2, 0x3a6270
  03a618c  lfs 1, -3056(30)
  03a6190  lis 3, 58
  03a6194  li 26, 32
  03a6198  fmuls 1, 1, 30
  03a619c  addi 29, 3, 21468
  03a61a0  addic 28, 1, 256
  03a61a4  addic 27, 1, 272
  03a61a8  li 9, 127
  03a61ac  ori 3, 31, 0
  03a61b0  lfs 31, 52(29)
  03a61b4  std 26, 112(1)
  03a61b8  li 10, 127
  03a61bc  ori 4, 28, 0
  03a61c0  ori 5, 27, 0
  03a61c4  fctiwz 2, 1
  03a61c8  li 8, 127
  03a61cc  fmr 1, 31
  03a61d0  stfd 2, 432(1)
  03a61d4  lwz 7, 436(1)
  03a61d8  extsw 7, 7
  03a61dc  bl 0x1d4d88
  03a61e0  nop
  03a61e4  lfs 2, 120(29)
  03a61e8  fmr 1, 31
  03a61ec  lfs 3, -3056(30)
  03a61f0  ori 3, 31, 0
  03a61f4  std 26, 112(1)
  03a61f8  ori 4, 28, 0
  03a61fc  fmuls 2, 3, 2
  03a6200  ori 5, 27, 0
  03a6204  li 8, 127
  03a6208  li 9, 32
  03a620c  li 10, 0
  03a6210  fctiwz 2, 2
  03a6214  stfd 2, 432(1)
  03a6218  lwz 7, 436(1)
  03a621c  extsw 7, 7
  03a6220  bl 0x1d4d88
  03a6224  nop
  03a6228  lfs 2, 108(29)
  03a622c  lfs 3, -3056(30)
  03a6230  li 6, 48
  03a6234  ori 4, 28, 0
  03a6238  fmr 1, 31
  03a623c  fmuls 2, 3, 2
  03a6240  ori 3, 31, 0
  03a6244  ori 5, 27, 0
  03a6248  std 6, 112(1)
  03a624c  li 8, 127
  03a6250  li 9, 64
  03a6254  li 10, 0
  03a6258  fctiwz 2, 2
  03a625c  stfd 2, 432(1)
  03a6260  lwz 7, 436(1)
  03a6264  extsw 7, 7
  03a6268  bl 0x1d4d88
  03a626c  nop
  03a6270  lis 3, 58
  03a6274  lfs 2, -3056(30)
  03a6278  li 5, 64
  03a627c  addi 29, 3, 21468
  03a6280  addic 28, 1, 256
  03a6284  addic 27, 1, 272
  03a6288  ori 3, 31, 0
  03a628c  ori 4, 28, 0
  03a6290  lfs 3, 128(29)
  03a6294  lfs 1, 124(29)
  03a6298  li 8, 96
  03a629c  fmuls 2, 2, 3
  03a62a0  std 5, 112(1)
  03a62a4  ori 5, 27, 0
  03a62a8  li 9, 16
  03a62ac  li 10, 0
  03a62b0  fctiwz 2, 2
  03a62b4  stfd 2, 432(1)
  03a62b8  lwz 7, 436(1)
  03a62bc  extsw 7, 7
  03a62c0  bl 0x1d4d88
  03a62c4  nop
  03a62c8  lfs 2, 132(29)
  03a62cc  lfs 3, -3056(30)
  03a62d0  li 6, 32
  03a62d4  lfs 1, 76(29)
  03a62d8  ori 3, 31, 0
  03a62dc  fmuls 2, 3, 2
  03a62e0  ori 4, 28, 0
  03a62e4  ori 5, 27, 0
  03a62e8  std 6, 112(1)
  03a62ec  li 8, 32
  03a62f0  li 9, 0
  03a62f4  li 10, 0
  03a62f8  fctiwz 2, 2
  03a62fc  stfd 2, 432(1)
  03a6300  lwz 7, 436(1)
  03a6304  extsw 7, 7
  03a6308  bl 0x1d4d88
  03a630c  nop
  03a6310  ld 0, 656(1)
  03a6314  mtlr 0
  03a6318  lfd 22, 560(1)
  03a631c  lfd 23, 568(1)
  03a6320  lfd 24, 576(1)
  03a6324  lfd 25, 584(1)
  03a6328  lfd 26, 592(1)
  03a632c  lfd 27, 600(1)
  03a6330  lfd 28, 608(1)
  03a6334  lfd 29, 616(1)
  03a6338  lfd 30, 624(1)
  03a633c  lfd 31, 632(1)
  03a6340  ld 19, 456(1)
  03a6344  ld 20, 464(1)
  03a6348  ld 21, 472(1)
  03a634c  ld 22, 480(1)
  03a6350  ld 23, 488(1)
  03a6354  ld 24, 496(1)
  03a6358  ld 25, 504(1)
  03a635c  ld 26, 512(1)
  03a6360  ld 27, 520(1)
  03a6364  ld 28, 528(1)
  03a6368  ld 29, 536(1)
  03a636c  ld 30, 544(1)
  03a6370  ld 31, 552(1)
  03a6374  addi 1, 1, 640
  03a6378  blr

M511_003a6388:   # 0x3a6388, 0x994 bytes
  03a6388  stdu 1, -256(1)
  03a638c  mflr 0
  03a6390  std 0, 272(1)
  03a6394  stfd 30, 240(1)
  03a6398  stfd 31, 248(1)
  03a639c  std 31, 232(1)
  03a63a0  std 28, 208(1)
  03a63a4  stw 3, 176(1)
  03a63a8  lwz 31, 120(3)
  03a63ac  std 30, 224(1)
  03a63b0  lis 28, 58
  03a63b4  lbz 30, 33(3)
  03a63b8  addi 28, 28, 25468
  03a63bc  cmpwi 30, 255
  03a63c0  lwz 4, 172(31)
  03a63c4  ori 4, 4, 4
  03a63c8  std 29, 216(1)
  03a63cc  std 27, 200(1)
  03a63d0  std 26, 192(1)
  03a63d4  stw 4, 172(31)
  03a63d8  bf 2, 0x3a65d4
  03a63dc  lhz 3, 166(3)
  03a63e0  cmpwi 3, 500
  03a63e4  bf 2, 0x3a6430
  03a63e8  li 3, 2
  03a63ec  bl 0xfc620
  03a63f0  nop
  03a63f4  cmpwi 3, 0
  03a63f8  bt 2, 0x3a6430
  03a63fc  lwz 3, 176(1)
  03a6400  lwz 4, 64(3)
  03a6404  cmpwi 4, 0
  03a6408  bf 2, 0x3a6430
  03a640c  lwz 4, 68(3)
  03a6410  cmpwi 4, 0
  03a6414  bf 2, 0x3a6430
  03a6418  lfs 1, 72(3)
  03a641c  lfs 2, 0(28)
  03a6420  bl 0x502578
  03a6424  nop
  03a6428  lwz 3, 176(1)
  03a642c  stfs 1, 72(3)
  03a6430  lwz 3, 176(1)
  03a6434  lhz 4, 166(3)
  03a6438  cmpwi 4, 501
  03a643c  bf 2, 0x3a6474
  03a6440  lbz 4, 176(3)
  03a6444  cmpwi 4, 255
  03a6448  bt 2, 0x3a6474
  03a644c  lis 5, 161
  03a6450  rlwinm 4, 4, 2, 22, 29
  03a6454  lwz 6, 248(31)
  03a6458  addic 5, 5, -812
  03a645c  lwzx 4, 5, 4
  03a6460  cmpw 6, 4
  03a6464  bf 1, 0x3a6474
  03a6468  bl 0xefb38
  03a646c  nop
  03a6470  b 0x3a6cec
  03a6474  lis 4, 16256
  03a6478  li 7, 0
  03a647c  stw 4, 176(31)
  03a6480  lfs 1, 16(3)
  03a6484  stfs 1, 112(1)
  03a6488  lfs 1, 20(3)
  03a648c  stfs 1, 116(1)
  03a6490  lfs 1, 24(3)
  03a6494  lwz 4, 172(31)
  03a6498  stfs 1, 120(1)
  03a649c  lfs 2, 28(3)
  03a64a0  ori 4, 4, 1
  03a64a4  lwz 5, 168(3)
  03a64a8  stfs 2, 124(1)
  03a64ac  lfs 2, 16(3)
  03a64b0  sth 5, 196(31)
  03a64b4  stfs 2, 128(1)
  03a64b8  li 5, 2
  03a64bc  lfs 2, 20(3)
  03a64c0  stw 4, 172(31)
  03a64c4  stfs 2, 132(1)
  03a64c8  addic 4, 1, 128
  03a64cc  lfs 2, 24(3)
  03a64d0  stfs 2, 136(1)
  03a64d4  lfs 2, 28(3)
  03a64d8  lis 3, 15820
  03a64dc  stfs 2, 140(1)
  03a64e0  lfs 2, 4(28)
  03a64e4  lfs 3, 176(31)
  03a64e8  ori 6, 3, 52429
  03a64ec  addic 3, 1, 112
  03a64f0  fmadds 1, 3, 2, 1
  03a64f4  stw 6, 136(1)
  03a64f8  li 6, 0
  03a64fc  stfs 1, 120(1)
  03a6500  bl 0x57820
  03a6504  nop
  03a6508  cmpwi 3, 0
  03a650c  bf 2, 0x3a651c
  03a6510  li 3, 0
  03a6514  stw 3, 164(31)
  03a6518  b 0x3a6cec
  03a651c  lis 30, 161
  03a6520  addic 30, 30, 2368
  03a6524  lwz 3, 24(30)
  03a6528  cmpwi 3, 0
  03a652c  bf 2, 0x3a6548
  03a6530  li 3, 0
  03a6534  lwz 4, 176(1)
  03a6538  lfs 1, 40(30)
  03a653c  stw 3, 164(31)
  03a6540  stfs 1, 24(4)
  03a6544  b 0x3a6cec
  03a6548  bl 0x10af88
  03a654c  nop
  03a6550  cmpwi 3, 0
  03a6554  bf 2, 0x3a6cec
  03a6558  li 3, 0
  03a655c  lwz 4, 172(31)
  03a6560  ori 4, 4, 8
  03a6564  stw 3, 164(31)
  03a6568  lwz 3, 24(30)
  03a656c  stw 4, 172(31)
  03a6570  bl 0x1122ac
  03a6574  nop
  03a6578  ori 4, 3, 0
  03a657c  lwz 3, 24(30)
  03a6580  cmpwi 4, 0
  03a6584  bt 2, 0x3a6cec
  03a6588  lwz 4, 176(1)
  03a658c  cmpwi 4, 0
  03a6590  bt 2, 0x3a65a0
  03a6594  li 5, 32640
  03a6598  sth 5, 54(4)
  03a659c  lwz 4, 176(1)
  03a65a0  addic 5, 4, 16
  03a65a4  addic 6, 4, 64
  03a65a8  ori 4, 3, 0
  03a65ac  lwz 3, 180(1)
  03a65b0  addic 7, 31, 208
  03a65b4  addic 8, 31, 224
  03a65b8  bl 0x1124c0
  03a65bc  nop
  03a65c0  li 3, 0
  03a65c4  lwz 4, 24(30)
  03a65c8  stw 4, 240(31)
  03a65cc  stw 3, 244(31)
  03a65d0  b 0x3a6cec
  03a65d4  addic 29, 1, 176
  03a65d8  ori 4, 30, 0
  03a65dc  ori 3, 29, 0
  03a65e0  li 5, 0
  03a65e4  li 6, 0
  03a65e8  bl 0x104800
  03a65ec  nop
  03a65f0  lwz 3, 176(1)
  03a65f4  cmpwi 3, 0
  03a65f8  bt 2, 0x3a68f0
  03a65fc  lis 27, 161
  03a6600  lfs 31, 0(28)
  03a6604  lis 26, 161
  03a6608  lfs 30, 4(28)
  03a660c  addic 27, 27, -812
  03a6610  addic 26, 26, 2368
  03a6614  lwz 31, 120(3)
  03a6618  bl 0x10af88
  03a661c  nop
  03a6620  cmpwi 3, 0
  03a6624  bt 2, 0x3a68cc
  03a6628  lwz 3, 176(1)
  03a662c  lhz 3, 166(3)
  03a6630  cmpwi 3, 500
  03a6634  bf 2, 0x3a6680
  03a6638  li 3, 2
  03a663c  bl 0xfc620
  03a6640  nop
  03a6644  cmpwi 3, 0
  03a6648  bt 2, 0x3a6680
  03a664c  lwz 3, 176(1)
  03a6650  lwz 4, 64(3)
  03a6654  cmpwi 4, 0
  03a6658  bf 2, 0x3a6680
  03a665c  lwz 4, 68(3)
  03a6660  cmpwi 4, 0
  03a6664  bf 2, 0x3a6680
  03a6668  lfs 1, 72(3)
  03a666c  fmr 2, 31
  03a6670  bl 0x502578
  03a6674  nop
  03a6678  lwz 3, 176(1)
  03a667c  stfs 1, 72(3)
  03a6680  lwz 3, 176(1)
  03a6684  lhz 4, 166(3)
  03a6688  cmpwi 4, 501
  03a668c  bf 2, 0x3a66bc
  03a6690  lbz 4, 176(3)
  03a6694  cmpwi 4, 255
  03a6698  bt 2, 0x3a66bc
  03a669c  rlwinm 4, 4, 2, 22, 29
  03a66a0  lwz 5, 248(31)
  03a66a4  lwzx 4, 27, 4
  03a66a8  cmpw 5, 4
  03a66ac  bf 1, 0x3a66bc
  03a66b0  bl 0xefb38
  03a66b4  nop
  03a66b8  b 0x3a68cc
  03a66bc  lis 4, 16256
  03a66c0  li 7, 0
  03a66c4  li 6, 0
  03a66c8  stw 4, 176(31)
  03a66cc  lfs 1, 16(3)
  03a66d0  stfs 1, 112(1)
  03a66d4  lfs 1, 20(3)
  03a66d8  stfs 1, 116(1)
  03a66dc  lfs 1, 24(3)
  03a66e0  stfs 1, 120(1)
  03a66e4  lfs 2, 28(3)
  03a66e8  stfs 2, 124(1)
  03a66ec  lfs 2, 16(3)
  03a66f0  stfs 2, 128(1)
  03a66f4  lfs 2, 20(3)
  03a66f8  lwz 4, 172(31)
  03a66fc  stfs 2, 132(1)
  03a6700  lfs 2, 24(3)
  03a6704  lwz 5, 168(3)
  03a6708  ori 4, 4, 1
  03a670c  stfs 2, 136(1)
  03a6710  lfs 2, 28(3)
  03a6714  sth 5, 196(31)
  03a6718  lis 3, 15820
  03a671c  stfs 2, 140(1)
  03a6720  lfs 2, 176(31)
  03a6724  ori 5, 3, 52429
  03a6728  stw 4, 172(31)
  03a672c  fmadds 1, 2, 30, 1
  03a6730  addic 3, 1, 112
  03a6734  addic 4, 1, 128
  03a6738  stw 5, 136(1)
  03a673c  li 5, 2
  03a6740  stfs 1, 120(1)
  03a6744  bl 0x57820
  03a6748  nop
  03a674c  cmpwi 3, 0
  03a6750  bf 2, 0x3a6760
  03a6754  li 3, 0
  03a6758  stw 3, 164(31)
  03a675c  b 0x3a68cc
  03a6760  lwz 3, 24(26)
  03a6764  cmpwi 3, 0
  03a6768  bf 2, 0x3a6784
  03a676c  li 3, 0
  03a6770  lwz 4, 176(1)
  03a6774  lfs 1, 40(26)
  03a6778  stw 3, 164(31)
  03a677c  stfs 1, 24(4)
  03a6780  b 0x3a68cc
  03a6784  bl 0x10af88
  03a6788  nop
  03a678c  ori 4, 3, 0
  03a6790  lwz 3, 176(1)
  03a6794  cmpwi 4, 0
  03a6798  lwz 4, 24(26)
  03a679c  bf 2, 0x3a67d4
  03a67a0  lhz 5, 166(4)
  03a67a4  cmpwi 1, 5, 297
  03a67a8  cmpwi 5, 296
  03a67ac  cror 2, 2, 6
  03a67b0  bt 2, 0x3a67d4
  03a67b4  li 4, 0
  03a67b8  li 5, 255
  03a67bc  stw 4, 164(31)
  03a67c0  stb 5, 48(3)
  03a67c4  lwz 3, 172(31)
  03a67c8  ori 3, 3, 8
  03a67cc  stw 3, 172(31)
  03a67d0  b 0x3a68cc
  03a67d4  lwz 5, 120(4)
  03a67d8  cmpwi 5, 0
  03a67dc  bf 2, 0x3a67ec
  03a67e0  li 3, 0
  03a67e4  stw 3, 164(31)
  03a67e8  b 0x3a68cc
  03a67ec  lbz 5, 33(4)
  03a67f0  lbz 3, 33(3)
  03a67f4  cmpw 5, 3
  03a67f8  bt 2, 0x3a6808
  03a67fc  li 3, 0
  03a6800  stw 3, 164(31)
  03a6804  b 0x3a68cc
  03a6808  ori 3, 4, 0
  03a680c  bl 0x10af88
  03a6810  nop
  03a6814  cmpwi 3, 0
  03a6818  bt 2, 0x3a68b4
  03a681c  lwz 3, 24(26)
  03a6820  stw 3, 164(31)
  03a6824  lwz 3, 24(26)
  03a6828  lwz 4, 176(1)
  03a682c  lfs 1, 16(3)
  03a6830  stfs 1, 16(4)
  03a6834  lfs 1, 20(3)
  03a6838  stfs 1, 20(4)
  03a683c  lfs 1, 24(3)
  03a6840  stfs 1, 24(4)
  03a6844  lfs 1, 28(3)
  03a6848  stfs 1, 28(4)
  03a684c  lwz 4, 176(1)
  03a6850  lfs 1, 224(3)
  03a6854  lfs 2, 16(4)
  03a6858  fadds 1, 2, 1
  03a685c  lfs 2, 20(4)
  03a6860  lfs 3, 24(4)
  03a6864  lwz 31, 120(3)
  03a6868  stfs 1, 16(4)
  03a686c  lfs 1, 228(3)
  03a6870  fadds 1, 2, 1
  03a6874  stfs 1, 20(4)
  03a6878  lfs 1, 232(3)
  03a687c  fadds 1, 3, 1
  03a6880  stfs 1, 24(4)
  03a6884  lwz 3, 176(1)
  03a6888  bl 0x10af88
  03a688c  nop
  03a6890  cmpwi 3, 0
  03a6894  bt 2, 0x3a68a4
  03a6898  lwz 3, 176(1)
  03a689c  stw 3, 160(31)
  03a68a0  b 0x3a68cc
  03a68a4  trap
  03a68a8  li 3, 0
  03a68ac  stw 3, 160(31)
  03a68b0  b 0x3a68cc
  03a68b4  li 3, 0
  03a68b8  stw 3, 164(31)
  03a68bc  stw 3, 204(31)
  03a68c0  lwz 3, 176(1)
  03a68c4  lfs 1, 40(26)
  03a68c8  stfs 1, 24(3)
  03a68cc  ori 3, 29, 0
  03a68d0  lwz 4, 176(1)
  03a68d4  li 5, 0
  03a68d8  li 6, 0
  03a68dc  bl 0x10466c
  03a68e0  nop
  03a68e4  lwz 3, 176(1)
  03a68e8  cmpwi 3, 0
  03a68ec  bf 2, 0x3a6614
  03a68f0  addic 3, 1, 180
  03a68f4  ori 4, 30, 0
  03a68f8  li 5, 0
  03a68fc  li 6, 0
  03a6900  bl 0x104800
  03a6904  nop
  03a6908  lwz 3, 180(1)
  03a690c  cmpwi 3, 0
  03a6910  bt 2, 0x3a6c3c
  03a6914  lwz 31, 120(3)
  03a6918  bl 0x10af88
  03a691c  nop
  03a6920  cmpwi 3, 0
  03a6924  bt 2, 0x3a6c18
  03a6928  lwz 3, 164(31)
  03a692c  cmpwi 3, 0
  03a6930  bf 2, 0x3a6c18
  03a6934  lwz 3, 180(1)
  03a6938  li 7, 0
  03a693c  addic 4, 1, 160
  03a6940  li 5, 2
  03a6944  lfs 1, 16(3)
  03a6948  stfs 1, 144(1)
  03a694c  lfs 1, 20(3)
  03a6950  stfs 1, 148(1)
  03a6954  lfs 1, 24(3)
  03a6958  stfs 1, 152(1)
  03a695c  lfs 2, 28(3)
  03a6960  stfs 2, 156(1)
  03a6964  lfs 2, 16(3)
  03a6968  stfs 2, 160(1)
  03a696c  lfs 2, 20(3)
  03a6970  stfs 2, 164(1)
  03a6974  lfs 2, 24(3)
  03a6978  stfs 2, 168(1)
  03a697c  lfs 2, 28(3)
  03a6980  lis 3, 15820
  03a6984  stfs 2, 172(1)
  03a6988  lfs 2, 4(28)
  03a698c  lfs 3, 176(31)
  03a6990  ori 6, 3, 52429
  03a6994  addic 3, 1, 144
  03a6998  fmadds 1, 3, 2, 1
  03a699c  stw 6, 168(1)
  03a69a0  li 6, 0
  03a69a4  stfs 1, 152(1)
  03a69a8  bl 0x57820
  03a69ac  nop
  03a69b0  cmpwi 3, 0
  03a69b4  bt 2, 0x3a6a34
  03a69b8  lis 27, 161
  03a69bc  addic 27, 27, 2368
  03a69c0  lwz 3, 24(27)
  03a69c4  cmpwi 3, 0
  03a69c8  bt 2, 0x3a6a34
  03a69cc  bl 0x1122ac
  03a69d0  nop
  03a69d4  ori 4, 3, 0
  03a69d8  lwz 3, 24(27)
  03a69dc  cmpwi 4, 0
  03a69e0  bt 2, 0x3a6a34
  03a69e4  lwz 4, 176(1)
  03a69e8  cmpwi 4, 0
  03a69ec  bt 2, 0x3a69f8
  03a69f0  li 5, 32640
  03a69f4  sth 5, 54(4)
  03a69f8  ori 4, 3, 0
  03a69fc  lwz 3, 180(1)
  03a6a00  addic 7, 31, 208
  03a6a04  addic 8, 31, 224
  03a6a08  addic 5, 3, 16
  03a6a0c  addic 6, 3, 64
  03a6a10  bl 0x1124c0
  03a6a14  nop
  03a6a18  lwz 3, 172(31)
  03a6a1c  li 4, 0
  03a6a20  lwz 5, 24(27)
  03a6a24  ori 3, 3, 8
  03a6a28  stw 5, 240(31)
  03a6a2c  stw 4, 244(31)
  03a6a30  stw 3, 172(31)
  03a6a34  lwz 5, 180(1)
  03a6a38  cmpwi 5, 0
  03a6a3c  stw 5, 176(1)
  03a6a40  bt 2, 0x3a6c18
  03a6a44  lis 9, 165
  03a6a48  lfs 1, 8(28)
  03a6a4c  li 7, 0
  03a6a50  li 10, -1
  03a6a54  li 8, 255
  03a6a58  li 11, 17
  03a6a5c  addic 9, 9, 7136
  03a6a60  ori 6, 5, 0
  03a6a64  lwz 3, 120(6)
  03a6a68  lwz 4, 164(3)
  03a6a6c  cmpwi 4, 0
  03a6a70  bt 2, 0x3a6afc
  03a6a74  lwz 4, 120(4)
  03a6a78  cmpwi 4, 0
  03a6a7c  bt 2, 0x3a6afc
  03a6a80  lwz 12, 204(4)
  03a6a84  stw 12, 204(3)
  03a6a88  lwz 12, 240(4)
  03a6a8c  cmpwi 12, 0
  03a6a90  bt 2, 0x3a6afc
  03a6a94  stb 8, 48(5)
  03a6a98  lfs 2, 208(4)
  03a6a9c  stfs 2, 208(3)
  03a6aa0  lfs 2, 212(4)
  03a6aa4  stfs 2, 212(3)
  03a6aa8  lfs 2, 216(4)
  03a6aac  stfs 2, 216(3)
  03a6ab0  lfs 2, 220(4)
  03a6ab4  stfs 2, 220(3)
  03a6ab8  lfs 2, 224(4)
  03a6abc  stfs 2, 224(3)
  03a6ac0  lfs 2, 228(4)
  03a6ac4  lwz 5, 172(3)
  03a6ac8  stfs 2, 228(3)
  03a6acc  lfs 2, 232(4)
  03a6ad0  ori 5, 5, 8
  03a6ad4  stfs 2, 232(3)
  03a6ad8  lfs 2, 236(4)
  03a6adc  stw 5, 172(3)
  03a6ae0  stfs 2, 236(3)
  03a6ae4  lfs 2, 244(4)
  03a6ae8  lwz 4, 240(4)
  03a6aec  fadds 2, 2, 1
  03a6af0  stw 4, 240(3)
  03a6af4  stfs 2, 244(3)
  03a6af8  lwz 6, 176(1)
  03a6afc  lhz 4, 198(3)
  03a6b00  cmpwi 4, 0
  03a6b04  bf 2, 0x3a6b14
  03a6b08  lhz 4, 166(6)
  03a6b0c  cmpwi 4, 501
  03a6b10  bf 2, 0x3a6c08
  03a6b14  lwz 4, 160(3)
  03a6b18  cmpwi 4, 0
  03a6b1c  bt 2, 0x3a6c08
  03a6b20  lwz 5, 192(3)
  03a6b24  cmpwi 5, -1
  03a6b28  bt 2, 0x3a6c08
  03a6b2c  slwi 4, 5, 2
  03a6b30  extsw 5, 4
  03a6b34  lwzx 5, 9, 5
  03a6b38  lwz 6, 0(5)
  03a6b3c  cmpwi 6, 0
  03a6b40  bf 2, 0x3a6b4c
  03a6b44  stw 10, 192(3)
  03a6b48  b 0x3a6c08
  03a6b4c  lwz 4, 28(5)
  03a6b50  cmpwi 4, 1
  03a6b54  cmpwi 1, 4, 3
  03a6b58  cmpwi 6, 4, 273
  03a6b5c  cmpwi 7, 4, 16
  03a6b60  bt 2, 0x3a6b68
  03a6b64  bf 6, 0x3a6b70
  03a6b68  stw 10, 192(3)
  03a6b6c  b 0x3a6c08
  03a6b70  bf 26, 0x3a6b7c
  03a6b74  stw 10, 192(3)
  03a6b78  b 0x3a6c08
  03a6b7c  bf 29, 0x3a6ba4
  03a6b80  bf 24, 0x3a6ba4
  03a6b84  addic 12, 4, -16
  03a6b88  cmpw 12, 6
  03a6b8c  bt 0, 0x3a6b98
  03a6b90  stw 10, 192(3)
  03a6b94  b 0x3a6c08
  03a6b98  addic 4, 4, 1
  03a6b9c  stw 4, 28(5)
  03a6ba0  b 0x3a6c08
  03a6ba4  stw 11, 28(5)
  03a6ba8  lwz 4, 192(3)
  03a6bac  slwi 5, 4, 2
  03a6bb0  extsw 6, 5
  03a6bb4  ori 5, 7, 0
  03a6bb8  lwzx 6, 9, 6
  03a6bbc  lwz 6, 0(6)
  03a6bc0  cmpwi 6, 0
  03a6bc4  bf 1, 0x3a6c08
  03a6bc8  ori 6, 7, 0
  03a6bcc  slwi 4, 4, 2
  03a6bd0  addic 5, 5, 1
  03a6bd4  extsw 12, 4
  03a6bd8  lwz 4, 192(3)
  03a6bdc  slwi 31, 4, 2
  03a6be0  lwzx 12, 9, 12
  03a6be4  extsw 31, 31
  03a6be8  addc 12, 12, 6
  03a6bec  addic 6, 6, 16
  03a6bf0  clrldi 12, 12, 32
  03a6bf4  lwzx 31, 9, 31
  03a6bf8  stw 7, 28(12)
  03a6bfc  lwz 12, 0(31)
  03a6c00  cmpw 5, 12
  03a6c04  bt 0, 0x3a6bcc
  03a6c08  lwz 5, 160(3)
  03a6c0c  cmpwi 5, 0
  03a6c10  stw 5, 176(1)
  03a6c14  bf 2, 0x3a6a60
  03a6c18  addic 3, 1, 180
  03a6c1c  lwz 4, 180(1)
  03a6c20  li 5, 0
  03a6c24  li 6, 0
  03a6c28  bl 0x10466c
  03a6c2c  nop
  03a6c30  lwz 3, 180(1)
  03a6c34  cmpwi 3, 0
  03a6c38  bf 2, 0x3a6914
  03a6c3c  ori 4, 30, 0
  03a6c40  ori 3, 29, 0
  03a6c44  li 5, 0
  03a6c48  li 6, 0
  03a6c4c  bl 0x104800
  03a6c50  nop
  03a6c54  lwz 30, 176(1)
  03a6c58  cmpwi 30, 0
  03a6c5c  bt 2, 0x3a6cec
  03a6c60  addic 31, 1, 184
  03a6c64  ori 3, 30, 0
  03a6c68  bl 0x10af88
  03a6c6c  nop
  03a6c70  cmpwi 3, 0
  03a6c74  bt 2, 0x3a6cc8
  03a6c78  ori 3, 31, 0
  03a6c7c  lwz 4, 176(1)
  03a6c80  li 5, 0
  03a6c84  li 6, 0
  03a6c88  bl 0x10466c
  03a6c8c  nop
  03a6c90  lwz 3, 184(1)
  03a6c94  cmpwi 3, 0
  03a6c98  bt 2, 0x3a6cc8
  03a6c9c  bl 0x10af88
  03a6ca0  nop
  03a6ca4  lwz 4, 184(1)
  03a6ca8  ori 3, 31, 0
  03a6cac  li 5, 0
  03a6cb0  li 6, 0
  03a6cb4  bl 0x10466c
  03a6cb8  nop
  03a6cbc  lwz 3, 184(1)
  03a6cc0  cmpwi 3, 0
  03a6cc4  bf 2, 0x3a6c9c
  03a6cc8  lwz 4, 176(1)
  03a6ccc  ori 3, 29, 0
  03a6cd0  li 5, 0
  03a6cd4  li 6, 0
  03a6cd8  bl 0x10466c
  03a6cdc  nop
  03a6ce0  lwz 30, 176(1)
  03a6ce4  cmpwi 30, 0
  03a6ce8  bf 2, 0x3a6c64
  03a6cec  ld 0, 272(1)
  03a6cf0  mtlr 0
  03a6cf4  lfd 30, 240(1)
  03a6cf8  lfd 31, 248(1)
  03a6cfc  ld 26, 192(1)
  03a6d00  ld 27, 200(1)
  03a6d04  ld 28, 208(1)
  03a6d08  ld 29, 216(1)
  03a6d0c  ld 30, 224(1)
  03a6d10  ld 31, 232(1)
  03a6d14  addi 1, 1, 256
  03a6d18  blr

M511_003a6d40:   # 0x3a6d40, 0x5e0 bytes
  03a6d40  stdu 1, -320(1)
  03a6d44  mflr 0
  03a6d48  std 0, 336(1)
  03a6d4c  stfd 20, 224(1)
  03a6d50  stfd 21, 232(1)
  03a6d54  stfd 22, 240(1)
  03a6d58  stfd 23, 248(1)
  03a6d5c  stfd 24, 256(1)
  03a6d60  stfd 25, 264(1)
  03a6d64  stfd 26, 272(1)
  03a6d68  stfd 27, 280(1)
  03a6d6c  stfd 28, 288(1)
  03a6d70  stfd 29, 296(1)
  03a6d74  stfd 30, 304(1)
  03a6d78  stfd 31, 312(1)
  03a6d7c  lis 4, 161
  03a6d80  std 27, 184(1)
  03a6d84  lwz 5, 120(3)
  03a6d88  lis 27, 151
  03a6d8c  addic 27, 27, -25376
  03a6d90  lwz 4, 1808(4)
  03a6d94  lwz 5, 180(5)
  03a6d98  std 31, 216(1)
  03a6d9c  std 30, 208(1)
  03a6da0  std 29, 200(1)
  03a6da4  std 28, 192(1)
  03a6da8  std 26, 176(1)
  03a6dac  cmpw 5, 4
  03a6db0  bt 2, 0x3a72c8
  03a6db4  ori 30, 3, 0
  03a6db8  lwz 3, 120(30)
  03a6dbc  lwz 3, 164(3)
  03a6dc0  cmpwi 3, 0
  03a6dc4  bf 2, 0x3a6db4
  03a6dc8  lis 3, 58
  03a6dcc  lis 26, 161
  03a6dd0  addi 3, 3, 27932
  03a6dd4  addic 26, 26, 2368
  03a6dd8  lfs 31, 0(3)
  03a6ddc  lfs 30, 4(3)
  03a6de0  lfs 29, 8(3)
  03a6de4  lfs 28, 12(3)
  03a6de8  lfs 27, 16(3)
  03a6dec  lfs 26, 20(3)
  03a6df0  lfs 25, 24(3)
  03a6df4  lfs 24, 28(3)
  03a6df8  lfs 23, 32(3)
  03a6dfc  ori 29, 30, 0
  03a6e00  li 3, 0
  03a6e04  li 4, 0
  03a6e08  lwz 31, 120(29)
  03a6e0c  lwz 5, 172(31)
  03a6e10  lwz 30, 160(31)
  03a6e14  rlwinm 6, 5, 0, 29, 29
  03a6e18  ori 7, 5, 0
  03a6e1c  subc 3, 3, 6
  03a6e20  rlwimi 7, 4, 0, 27, 27
  03a6e24  cntlzw 3, 3
  03a6e28  subc 6, 7, 5
  03a6e2c  sldi 3, 3, 58
  03a6e30  sradi 3, 3, 63
  03a6e34  and 3, 3, 6
  03a6e38  addc 5, 5, 3
  03a6e3c  ori 3, 29, 0
  03a6e40  rlwimi 5, 4, 0, 29, 29
  03a6e44  stw 5, 172(31)
  03a6e48  bl 0x10af88
  03a6e4c  nop
  03a6e50  cmpwi 3, 0
  03a6e54  bt 2, 0x3a72c8
  03a6e58  lwz 3, 172(31)
  03a6e5c  rlwinm 3, 3, 0, 30, 30
  03a6e60  cmpwi 3, 0
  03a6e64  bf 2, 0x3a72c8
  03a6e68  lis 3, 161
  03a6e6c  lwz 3, 1808(3)
  03a6e70  stw 3, 180(31)
  03a6e74  lbz 3, 32(29)
  03a6e78  cmpwi 3, 0
  03a6e7c  cmpwi 1, 3, 5
  03a6e80  cmpwi 6, 3, 1
  03a6e84  bt 2, 0x3a72c0
  03a6e88  lfs 1, 132(27)
  03a6e8c  lfs 2, 20(29)
  03a6e90  lfs 3, 128(27)
  03a6e94  fsubs 1, 1, 2
  03a6e98  lfs 2, 16(29)
  03a6e9c  lfs 5, 208(29)
  03a6ea0  fsubs 3, 3, 2
  03a6ea4  lfs 4, 136(27)
  03a6ea8  lfs 2, 24(29)
  03a6eac  lfs 6, 192(29)
  03a6eb0  fsubs 4, 4, 2
  03a6eb4  lfs 7, 224(29)
  03a6eb8  fmuls 2, 5, 1
  03a6ebc  lfs 5, 216(29)
  03a6ec0  lfs 8, 200(29)
  03a6ec4  fmuls 5, 5, 1
  03a6ec8  lfs 9, 212(29)
  03a6ecc  lfs 10, 232(29)
  03a6ed0  fmuls 1, 9, 1
  03a6ed4  lfs 9, 196(29)
  03a6ed8  fmadds 6, 6, 3, 2
  03a6edc  lfs 2, 228(29)
  03a6ee0  fmadds 5, 8, 3, 5
  03a6ee4  fmadds 1, 9, 3, 1
  03a6ee8  fmadds 6, 7, 4, 6
  03a6eec  fmadds 3, 10, 4, 5
  03a6ef0  fabs 5, 6
  03a6ef4  fcmpu 7, 3, 30
  03a6ef8  fcmpu 0, 5, 31
  03a6efc  cror 2, 1, 2
  03a6f00  bt 2, 0x3a6f64
  03a6f04  fmadds 1, 2, 4, 1
  03a6f08  fabs 1, 1
  03a6f0c  fcmpu 0, 1, 31
  03a6f10  cror 2, 1, 2
  03a6f14  bt 2, 0x3a6f64
  03a6f18  bf 28, 0x3a6f64
  03a6f1c  lfs 1, 544(27)
  03a6f20  lfs 2, 564(27)
  03a6f24  fadds 1, 1, 2
  03a6f28  fneg 1, 1
  03a6f2c  fcmpu 0, 3, 1
  03a6f30  cror 2, 0, 2
  03a6f34  bt 2, 0x3a6f64
  03a6f38  bt 26, 0x3a6f40
  03a6f3c  bf 6, 0x3a6f64
  03a6f40  lhz 4, 166(29)
  03a6f44  ori 3, 29, 0
  03a6f48  addic 4, 4, -505
  03a6f4c  li 5, 0
  03a6f50  cntlzw 4, 4
  03a6f54  rlwinm 4, 4, 27, 31, 31
  03a6f58  bl 0x3a5468
  03a6f5c  ori 3, 29, 0
  03a6f60  bl 0x3a4da0
  03a6f64  lis 3, 114
  03a6f68  lfs 1, 72(31)
  03a6f6c  lfs 2, -3048(3)
  03a6f70  fnmsubs 1, 2, 29, 1
  03a6f74  lwz 3, 240(31)
  03a6f78  cmpwi 3, 0
  03a6f7c  fsub 3, 1, 28
  03a6f80  fsel 1, 3, 1, 28
  03a6f84  fsub 3, 27, 1
  03a6f88  fsel 1, 3, 1, 27
  03a6f8c  stfs 1, 72(31)
  03a6f90  bt 2, 0x3a7124
  03a6f94  lwz 3, 164(31)
  03a6f98  cmpwi 3, 0
  03a6f9c  bf 2, 0x3a6fd4
  03a6fa0  lfs 3, 76(31)
  03a6fa4  fmr 1, 30
  03a6fa8  addic 3, 31, 244
  03a6fac  fnmsubs 3, 2, 26, 3
  03a6fb0  fabs 2, 3
  03a6fb4  stfs 3, 76(31)
  03a6fb8  bl 0x109af0
  03a6fbc  nop
  03a6fc0  fcmpu 0, 1, 30
  03a6fc4  bf 2, 0x3a7010
  03a6fc8  li 3, 0
  03a6fcc  stw 3, 76(31)
  03a6fd0  b 0x3a7010
  03a6fd4  lfs 1, 76(31)
  03a6fd8  ori 4, 3, 0
  03a6fdc  addic 3, 31, 244
  03a6fe0  fnmsubs 1, 2, 26, 1
  03a6fe4  fabs 2, 1
  03a6fe8  stfs 1, 76(31)
  03a6fec  lwz 4, 120(4)
  03a6ff0  lfs 1, 244(4)
  03a6ff4  fadds 1, 1, 25
  03a6ff8  bl 0x109af0
  03a6ffc  nop
  03a7000  fcmpu 0, 1, 30
  03a7004  bf 2, 0x3a7010
  03a7008  li 3, 0
  03a700c  stw 3, 76(31)
  03a7010  lfs 1, 208(31)
  03a7014  cmpwi 29, 0
  03a7018  stfs 1, 144(1)
  03a701c  lfs 1, 212(31)
  03a7020  stfs 1, 148(1)
  03a7024  lfs 1, 216(31)
  03a7028  stfs 1, 152(1)
  03a702c  lfs 2, 220(31)
  03a7030  stfs 2, 156(1)
  03a7034  lfs 2, 244(31)
  03a7038  fadds 1, 1, 2
  03a703c  stfs 1, 152(1)
  03a7040  lfs 22, 16(29)
  03a7044  lfs 21, 20(29)
  03a7048  lfs 20, 24(29)
  03a704c  lfs 1, 64(29)
  03a7050  bt 2, 0x3a705c
  03a7054  li 3, 32640
  03a7058  sth 3, 54(29)
  03a705c  stfs 1, 160(1)
  03a7060  addic 28, 29, 64
  03a7064  lfs 1, 68(29)
  03a7068  ori 3, 29, 0
  03a706c  addic 6, 31, 224
  03a7070  stfs 1, 164(1)
  03a7074  lfs 1, 72(29)
  03a7078  addic 7, 29, 16
  03a707c  addic 5, 1, 144
  03a7080  stfs 1, 168(1)
  03a7084  lfs 1, 76(29)
  03a7088  ori 8, 28, 0
  03a708c  stfs 1, 172(1)
  03a7090  lwz 4, 240(31)
  03a7094  bl 0x112678
  03a7098  nop
  03a709c  lwz 3, 240(31)
  03a70a0  bl 0x1122ac
  03a70a4  nop
  03a70a8  lwz 3, 60(3)
  03a70ac  rlwinm 3, 3, 0, 29, 29
  03a70b0  cmpwi 3, 0
  03a70b4  bt 2, 0x3a70e4
  03a70b8  lfs 1, 144(1)
  03a70bc  stfs 1, 208(31)
  03a70c0  lfs 1, 148(1)
  03a70c4  lfs 2, 244(31)
  03a70c8  stfs 1, 212(31)
  03a70cc  lfs 1, 152(1)
  03a70d0  fsubs 2, 1, 2
  03a70d4  stfs 1, 216(31)
  03a70d8  lfs 1, 156(1)
  03a70dc  stfs 1, 220(31)
  03a70e0  stfs 2, 216(31)
  03a70e4  lfs 1, 16(29)
  03a70e8  addic 3, 31, 96
  03a70ec  lfs 2, 20(29)
  03a70f0  addic 4, 31, 64
  03a70f4  fsubs 1, 1, 22
  03a70f8  lfs 3, 24(29)
  03a70fc  fsubs 2, 2, 21
  03a7100  addic 5, 1, 160
  03a7104  fsubs 3, 3, 20
  03a7108  ori 6, 28, 0
  03a710c  stfs 1, 64(31)
  03a7110  stfs 2, 68(31)
  03a7114  stfs 3, 72(31)
  03a7118  bl 0x112900
  03a711c  nop
  03a7120  b 0x3a72c0
  03a7124  lwz 3, 164(31)
  03a7128  cmpwi 3, 0
  03a712c  bf 2, 0x3a71ac
  03a7130  lfs 1, 16(29)
  03a7134  stfs 1, 112(1)
  03a7138  lfs 1, 20(29)
  03a713c  stfs 1, 116(1)
  03a7140  lfs 1, 24(29)
  03a7144  stfs 1, 120(1)
  03a7148  lfs 2, 28(29)
  03a714c  stfs 2, 124(1)
  03a7150  lfs 2, 16(29)
  03a7154  stfs 2, 128(1)
  03a7158  lfs 2, 20(29)
  03a715c  stfs 2, 132(1)
  03a7160  lfs 2, 24(29)
  03a7164  stfs 2, 136(1)
  03a7168  lfs 3, 28(29)
  03a716c  stfs 3, 140(1)
  03a7170  lfs 3, 176(31)
  03a7174  addic 3, 1, 112
  03a7178  fmadds 1, 3, 24, 1
  03a717c  addic 4, 1, 128
  03a7180  li 5, 2
  03a7184  li 6, 0
  03a7188  li 7, 0
  03a718c  stfs 1, 120(1)
  03a7190  lfs 1, 72(31)
  03a7194  fadds 1, 2, 1
  03a7198  stfs 1, 136(1)
  03a719c  bl 0x57820
  03a71a0  nop
  03a71a4  lfs 1, 40(26)
  03a71a8  b 0x3a71d4
  03a71ac  fmr 2, 1
  03a71b0  lfs 1, 24(3)
  03a71b4  lfs 3, 24(29)
  03a71b8  li 3, 0
  03a71bc  fadds 1, 1, 25
  03a71c0  fadds 2, 3, 2
  03a71c4  fcmpu 0, 1, 2
  03a71c8  cror 6, 0, 2
  03a71cc  bt 6, 0x3a71d4
  03a71d0  li 3, 1
  03a71d4  cmpwi 3, 0
  03a71d8  bt 2, 0x3a7284
  03a71dc  lfs 2, 68(31)
  03a71e0  lfs 3, 64(31)
  03a71e4  fmuls 2, 2, 2
  03a71e8  lfs 4, 72(31)
  03a71ec  lis 3, 114
  03a71f0  fmadds 2, 3, 3, 2
  03a71f4  lfs 3, -3052(3)
  03a71f8  fmuls 3, 3, 23
  03a71fc  fmadds 2, 4, 4, 2
  03a7200  fsqrts 2, 2
  03a7204  fcmpu 0, 2, 3
  03a7208  cror 6, 0, 2
  03a720c  bt 6, 0x3a7274
  03a7210  lhz 3, 166(29)
  03a7214  cmpwi 3, 505
  03a7218  bf 2, 0x3a723c
  03a721c  lbz 3, 32(29)
  03a7220  cmpwi 3, 1
  03a7224  bf 2, 0x3a723c
  03a7228  li 3, 5
  03a722c  li 4, 0
  03a7230  stb 3, 32(29)
  03a7234  stb 4, 188(29)
  03a7238  b 0x3a7274
  03a723c  lwz 3, 164(31)
  03a7240  cmpwi 3, 0
  03a7244  bt 2, 0x3a7274
  03a7248  lhz 4, 166(3)
  03a724c  cmpwi 4, 505
  03a7250  bf 2, 0x3a7274
  03a7254  lbz 4, 32(3)
  03a7258  cmpwi 4, 1
  03a725c  bf 2, 0x3a7274
  03a7260  li 4, 5
  03a7264  li 5, 0
  03a7268  stb 4, 32(3)
  03a726c  lwz 3, 164(31)
  03a7270  stb 5, 188(3)
  03a7274  li 3, 0
  03a7278  stfs 1, 24(29)
  03a727c  stw 3, 72(31)
  03a7280  b 0x3a72c0
  03a7284  lwz 3, 172(31)
  03a7288  lfs 1, 64(31)
  03a728c  ori 3, 3, 4
  03a7290  stw 3, 172(31)
  03a7294  lfs 2, 16(29)
  03a7298  fadds 1, 2, 1
  03a729c  lfs 2, 20(29)
  03a72a0  lfs 3, 24(29)
  03a72a4  stfs 1, 16(29)
  03a72a8  lfs 1, 68(31)
  03a72ac  fadds 1, 2, 1
  03a72b0  stfs 1, 20(29)
  03a72b4  lfs 1, 72(31)
  03a72b8  fadds 1, 3, 1
  03a72bc  stfs 1, 24(29)
  03a72c0  cmpwi 30, 0
  03a72c4  bf 2, 0x3a6dfc
  03a72c8  ld 0, 336(1)
  03a72cc  mtlr 0
  03a72d0  lfd 20, 224(1)
  03a72d4  lfd 21, 232(1)
  03a72d8  lfd 22, 240(1)
  03a72dc  lfd 23, 248(1)
  03a72e0  lfd 24, 256(1)
  03a72e4  lfd 25, 264(1)
  03a72e8  lfd 26, 272(1)
  03a72ec  lfd 27, 280(1)
  03a72f0  lfd 28, 288(1)
  03a72f4  lfd 29, 296(1)
  03a72f8  lfd 30, 304(1)
  03a72fc  lfd 31, 312(1)
  03a7300  ld 26, 176(1)
  03a7304  ld 27, 184(1)
  03a7308  ld 28, 192(1)
  03a730c  ld 29, 200(1)
  03a7310  ld 30, 208(1)
  03a7314  ld 31, 216(1)
  03a7318  addi 1, 1, 320
  03a731c  blr

UpdateMoby_500:   # 0x3a7360, 0xd00 bytes
  03a7360  stdu 1, -304(1)
  03a7364  mflr 0
  03a7368  std 0, 320(1)
  03a736c  stfd 29, 280(1)
  03a7370  stfd 30, 288(1)
  03a7374  stfd 31, 296(1)
  03a7378  std 31, 272(1)
  03a737c  std 30, 264(1)
  03a7380  ori 31, 3, 0
  03a7384  lwz 30, 120(31)
  03a7388  lwz 3, 160(30)
  03a738c  std 29, 256(1)
  03a7390  std 28, 248(1)
  03a7394  std 27, 240(1)
  03a7398  std 26, 232(1)
  03a739c  cmpwi 3, 0
  03a73a0  bt 2, 0x3a73bc
  03a73a4  bl 0x10af88
  03a73a8  nop
  03a73ac  cmpwi 3, 0
  03a73b0  bf 2, 0x3a73bc
  03a73b4  li 3, 0
  03a73b8  stw 3, 160(30)
  03a73bc  lwz 3, 164(30)
  03a73c0  cmpwi 3, 0
  03a73c4  bt 2, 0x3a73e0
  03a73c8  bl 0x10af88
  03a73cc  nop
  03a73d0  cmpwi 3, 0
  03a73d4  bf 2, 0x3a73e0
  03a73d8  li 3, 0
  03a73dc  stw 3, 164(30)
  03a73e0  lis 4, 161
  03a73e4  addic 29, 30, 32
  03a73e8  lwz 4, 1808(4)
  03a73ec  lwz 3, 160(30)
  03a73f0  stw 4, 252(30)
  03a73f4  cmpwi 3, 0
  03a73f8  bf 2, 0x3a7408
  03a73fc  lhz 3, 62(30)
  03a7400  ori 3, 3, 1
  03a7404  b 0x3a7410
  03a7408  lhz 3, 62(30)
  03a740c  rlwinm 3, 3, 0, 0, 30
  03a7410  lwz 5, 180(30)
  03a7414  sth 3, 62(30)
  03a7418  cmpw 5, 4
  03a741c  bt 2, 0x3a7444
  03a7420  lbz 3, 32(31)
  03a7424  cmpwi 3, 0
  03a7428  bt 2, 0x3a7444
  03a742c  lwz 3, 172(30)
  03a7430  rlwinm 3, 3, 0, 28, 29
  03a7434  cmpwi 3, 0
  03a7438  bt 2, 0x3a7444
  03a743c  ori 3, 31, 0
  03a7440  bl 0x3a6d40
  03a7444  li 28, 0
  03a7448  ori 3, 31, 0
  03a744c  ori 26, 28, 0
  03a7450  lis 4, 387
  03a7454  li 5, 0
  03a7458  bl 0x10675c
  03a745c  nop
  03a7460  ori 27, 3, 0
  03a7464  lhz 3, 166(31)
  03a7468  cmpwi 27, 0
  03a746c  bt 2, 0x3a7488
  03a7470  lis 4, 256
  03a7474  lwz 5, 36(27)
  03a7478  cmpw 5, 4
  03a747c  bf 2, 0x3a7488
  03a7480  ori 27, 28, 0
  03a7484  li 28, 1
  03a7488  extsh 3, 3
  03a748c  cmpwi 1, 3, 509
  03a7490  cmpwi 3, 507
  03a7494  cror 2, 0, 5
  03a7498  bt 2, 0x3a74c4
  03a749c  addic 7, 1, 192
  03a74a0  addic 8, 1, 200
  03a74a4  li 6, 0
  03a74a8  addic 9, 1, 196
  03a74ac  ori 3, 31, 0
  03a74b0  ori 4, 27, 0
  03a74b4  ori 5, 29, 0
  03a74b8  li 10, 4
  03a74bc  bl 0x106840
  03a74c0  nop
  03a74c4  lbz 3, 32(31)
  03a74c8  cmpwi 3, 6
  03a74cc  cmpwi 1, 3, 5
  03a74d0  cmpwi 6, 3, 4
  03a74d4  cmpwi 7, 3, 3
  03a74d8  bt 2, 0x3a7aac
  03a74dc  bt 6, 0x3a7db8
  03a74e0  bt 26, 0x3a7ffc
  03a74e4  bt 30, 0x3a78a0
  03a74e8  cmpwi 3, 2
  03a74ec  bt 2, 0x3a7880
  03a74f0  cmpwi 3, 1
  03a74f4  bt 2, 0x3a75bc
  03a74f8  cmpwi 3, 0
  03a74fc  bf 2, 0x3a8024
  03a7500  lis 3, 151
  03a7504  stw 26, 76(30)
  03a7508  lwz 3, -25488(3)
  03a750c  stw 26, 72(30)
  03a7510  stw 26, 68(30)
  03a7514  cmpwi 3, 18
  03a7518  stw 26, 64(30)
  03a751c  bf 2, 0x3a7558
  03a7520  lhz 3, 166(31)
  03a7524  cmpwi 3, 511
  03a7528  bf 2, 0x3a7558
  03a752c  lbz 3, 200(30)
  03a7530  cmpwi 3, 0
  03a7534  bt 2, 0x3a7558
  03a7538  lhz 4, 52(31)
  03a753c  li 3, 6
  03a7540  stw 26, 148(31)
  03a7544  ori 4, 4, 65
  03a7548  rlwimi 4, 26, 0, 19, 19
  03a754c  stb 3, 32(31)
  03a7550  sth 4, 52(31)
  03a7554  b 0x3a7560
  03a7558  li 3, 1
  03a755c  stb 3, 32(31)
  03a7560  lwz 3, 172(30)
  03a7564  stw 26, 168(30)
  03a7568  ori 26, 3, 0
  03a756c  clrlwi 3, 26, 31
  03a7570  cmpwi 3, 0
  03a7574  bf 2, 0x3a7584
  03a7578  ori 3, 31, 0
  03a757c  bl 0x3a6388
  03a7580  lwz 26, 172(30)
  03a7584  ori 3, 26, 20
  03a7588  lhz 4, 166(31)
  03a758c  cmpwi 4, 511
  03a7590  cmpwi 1, 4, 501
  03a7594  stw 3, 172(30)
  03a7598  bf 2, 0x3a75a8
  03a759c  li 3, 100
  03a75a0  sth 3, 198(30)
  03a75a4  b 0x3a8024
  03a75a8  bf 6, 0x3a8024
  03a75ac  ori 3, 31, 0
  03a75b0  bl 0x4660c4
  03a75b4  nop
  03a75b8  b 0x3a8024
  03a75bc  lhz 5, 166(31)
  03a75c0  cmpwi 5, 505
  03a75c4  bf 2, 0x3a7624
  03a75c8  lis 3, 151
  03a75cc  addic 3, 3, -25376
  03a75d0  lwz 4, 576(3)
  03a75d4  cmpw 4, 31
  03a75d8  bt 2, 0x3a7614
  03a75dc  lwz 4, 572(3)
  03a75e0  cmpw 4, 31
  03a75e4  bt 2, 0x3a7614
  03a75e8  lwz 4, 764(3)
  03a75ec  cmpw 4, 31
  03a75f0  bf 2, 0x3a7600
  03a75f4  lhz 4, 782(3)
  03a75f8  cmpwi 4, 0
  03a75fc  bt 2, 0x3a7614
  03a7600  lwz 3, 1272(3)
  03a7604  cmpwi 1, 28, 0
  03a7608  cmpw 3, 31
  03a760c  bt 2, 0x3a7614
  03a7610  bt 6, 0x3a7624
  03a7614  li 3, 5
  03a7618  stb 3, 32(31)
  03a761c  stb 26, 188(31)
  03a7620  b 0x3a8024
  03a7624  cmpwi 27, 0
  03a7628  bt 2, 0x3a8024
  03a762c  lwz 3, 44(27)
  03a7630  cmpwi 1, 5, 502
  03a7634  cmpwi 3, 0
  03a7638  bf 1, 0x3a8024
  03a763c  li 3, 1
  03a7640  ori 4, 3, 0
  03a7644  bf 6, 0x3a765c
  03a7648  lwz 6, 36(27)
  03a764c  rlwinm 6, 6, 0, 14, 14
  03a7650  cmpwi 6, 0
  03a7654  bf 2, 0x3a765c
  03a7658  ori 3, 26, 0
  03a765c  cmpwi 5, 505
  03a7660  bf 2, 0x3a76c0
  03a7664  li 5, 5
  03a7668  ori 3, 4, 0
  03a766c  stb 5, 32(31)
  03a7670  lwz 4, 36(27)
  03a7674  rlwinm 4, 4, 0, 14, 14
  03a7678  cmpwi 4, 0
  03a767c  bf 2, 0x3a76ac
  03a7680  lis 3, 58
  03a7684  addi 3, 3, 29472
  03a7688  lfs 1, 0(3)
  03a768c  lfs 2, 4(3)
  03a7690  bl 0xfcbe8
  03a7694  nop
  03a7698  lis 3, 114
  03a769c  lfs 2, -3056(3)
  03a76a0  fmuls 1, 1, 2
  03a76a4  bl 0x502758
  03a76a8  nop
  03a76ac  stb 3, 188(31)
  03a76b0  ld 4, 56(31)
  03a76b4  ori 3, 26, 0
  03a76b8  std 4, 184(30)
  03a76bc  lhz 5, 166(31)
  03a76c0  ori 4, 5, 0
  03a76c4  ori 7, 4, 0
  03a76c8  extsh 6, 7
  03a76cc  cmpwi 1, 6, 509
  03a76d0  cmpwi 6, 507
  03a76d4  cror 2, 0, 5
  03a76d8  bt 2, 0x3a7800
  03a76dc  lwz 4, 36(27)
  03a76e0  rlwinm 6, 4, 0, 14, 14
  03a76e4  cmpwi 6, 0
  03a76e8  bt 2, 0x3a76f8
  03a76ec  li 5, 510
  03a76f0  ori 7, 5, 0
  03a76f4  sth 5, 166(31)
  03a76f8  lwz 6, 192(1)
  03a76fc  cmpwi 6, 3
  03a7700  bf 2, 0x3a7710
  03a7704  li 5, 510
  03a7708  ori 7, 5, 0
  03a770c  sth 5, 166(31)
  03a7710  rlwinm 9, 4, 0, 11, 11
  03a7714  ori 8, 7, 0
  03a7718  cmpwi 9, 0
  03a771c  ori 6, 5, 0
  03a7720  bf 2, 0x3a773c
  03a7724  rlwinm 4, 4, 0, 9, 9
  03a7728  cmpwi 4, 0
  03a772c  bf 2, 0x3a773c
  03a7730  lwz 4, 196(1)
  03a7734  cmpwi 4, 180
  03a7738  bf 2, 0x3a776c
  03a773c  extsh 4, 5
  03a7740  li 5, 510
  03a7744  addic 4, 4, 1
  03a7748  li 6, 510
  03a774c  addic 7, 7, 1
  03a7750  subc 4, 5, 4
  03a7754  subc 6, 6, 7
  03a7758  sradi 4, 4, 63
  03a775c  and 6, 4, 6
  03a7760  addc 6, 7, 6
  03a7764  ori 8, 6, 0
  03a7768  sth 6, 166(31)
  03a776c  clrlwi 5, 6, 16
  03a7770  ori 4, 8, 0
  03a7774  cmpwi 5, 510
  03a7778  bt 2, 0x3a7800
  03a777c  addic 3, 8, 1
  03a7780  lis 4, 163
  03a7784  extsh 5, 3
  03a7788  addic 4, 4, 21696
  03a778c  sth 3, 166(31)
  03a7790  lis 3, 163
  03a7794  lbzx 4, 4, 5
  03a7798  addic 5, 3, 19456
  03a779c  stb 4, 34(31)
  03a77a0  ori 3, 31, 0
  03a77a4  rlwinm 4, 4, 2, 22, 29
  03a77a8  lwzx 4, 5, 4
  03a77ac  stw 4, 36(31)
  03a77b0  bl 0xef74c
  03a77b4  nop
  03a77b8  lis 3, 58
  03a77bc  li 4, 2
  03a77c0  vspltisw 2, -1
  03a77c4  addi 3, 3, 29472
  03a77c8  li 5, 8
  03a77cc  lis 6, 114
  03a77d0  stb 4, 32(31)
  03a77d4  li 4, -3056
  03a77d8  vslw 2, 2, 2
  03a77dc  <unknown>
  03a77e0  li 3, 188
  03a77e4  vspltw 3, 3, 0
  03a77e8  <unknown>
  03a77ec  vmaddfp 2, 4, 3, 2
  03a77f0  vctsxs 2, 2, 0
  03a77f4  vspltb 2, 2, 3
  03a77f8  stvebx 2, 3, 31
  03a77fc  b 0x3a8024
  03a7800  cmpwi 3, 0
  03a7804  bt 2, 0x3a8024
  03a7808  clrlwi 3, 4, 16
  03a780c  ori 5, 27, 0
  03a7810  addic 4, 3, -505
  03a7814  ori 3, 31, 0
  03a7818  cntlzw 4, 4
  03a781c  rlwinm 4, 4, 27, 31, 31
  03a7820  bl 0x3a5468
  03a7824  lbz 3, 200(30)
  03a7828  cmpwi 3, 0
  03a782c  bt 2, 0x3a7874
  03a7830  lwz 27, 32(27)
  03a7834  cmpwi 27, 0
  03a7838  bt 2, 0x3a7868
  03a783c  lhz 3, 166(27)
  03a7840  cmpwi 3, 717
  03a7844  cmpwi 1, 3, 556
  03a7848  bt 2, 0x3a7850
  03a784c  bf 6, 0x3a7868
  03a7850  lhz 30, 180(31)
  03a7854  ori 3, 31, 0
  03a7858  sth 26, 180(31)
  03a785c  bl 0x3a4da0
  03a7860  sth 30, 180(31)
  03a7864  b 0x3a8024
  03a7868  ori 3, 31, 0
  03a786c  bl 0x3a4da0
  03a7870  b 0x3a8024
  03a7874  ori 3, 31, 0
  03a7878  bl 0x3a4da0
  03a787c  b 0x3a8024
  03a7880  lbz 3, 188(31)
  03a7884  addic 4, 3, -1
  03a7888  cmpwi 3, 0
  03a788c  stb 4, 188(31)
  03a7890  bf 2, 0x3a8024
  03a7894  li 3, 1
  03a7898  stb 3, 32(31)
  03a789c  b 0x3a8024
  03a78a0  lhz 3, 166(31)
  03a78a4  cmpwi 3, 505
  03a78a8  bf 2, 0x3a7a1c
  03a78ac  lis 3, 58
  03a78b0  lis 4, 114
  03a78b4  addi 3, 3, 29472
  03a78b8  lfs 1, 12(3)
  03a78bc  lfs 2, -3056(4)
  03a78c0  lbz 3, 202(30)
  03a78c4  fmuls 1, 2, 1
  03a78c8  fctiwz 1, 1
  03a78cc  stfd 1, 208(1)
  03a78d0  lwz 4, 212(1)
  03a78d4  cmpw 3, 4
  03a78d8  bt 1, 0x3a7a1c
  03a78dc  lfs 4, 228(31)
  03a78e0  lfs 3, 224(31)
  03a78e4  fmuls 1, 4, 4
  03a78e8  lfs 5, 232(31)
  03a78ec  lis 3, 58
  03a78f0  stw 31, 160(1)
  03a78f4  lis 4, 16384
  03a78f8  addi 3, 3, 29472
  03a78fc  fmadds 1, 3, 3, 1
  03a7900  lfs 31, 16(3)
  03a7904  stw 4, 172(1)
  03a7908  lfs 2, 20(3)
  03a790c  stw 26, 156(1)
  03a7910  stw 26, 152(1)
  03a7914  stw 26, 148(1)
  03a7918  stw 26, 144(1)
  03a791c  fmadds 1, 5, 5, 1
  03a7920  stw 26, 176(1)
  03a7924  fsqrts 1, 1
  03a7928  fcmpu 0, 1, 2
  03a792c  bf 2, 0x3a7940
  03a7930  fmr 3, 2
  03a7934  lfs 4, 236(31)
  03a7938  fmr 1, 3
  03a793c  b 0x3a7960
  03a7940  lis 3, 58
  03a7944  addi 3, 3, 29472
  03a7948  lfs 2, 24(3)
  03a794c  fdivs 6, 2, 1
  03a7950  fmuls 1, 4, 6
  03a7954  fmuls 2, 3, 6
  03a7958  lfs 4, 236(31)
  03a795c  fmuls 3, 5, 6
  03a7960  lfs 5, 16(31)
  03a7964  lfs 6, 20(31)
  03a7968  fadds 2, 2, 5
  03a796c  lfs 5, 24(31)
  03a7970  fadds 1, 1, 6
  03a7974  stfs 4, 124(1)
  03a7978  fadds 3, 3, 5
  03a797c  stfs 2, 112(1)
  03a7980  stfs 1, 116(1)
  03a7984  stfs 3, 120(1)
  03a7988  lbz 3, 202(30)
  03a798c  bl 0x502730
  03a7990  nop
  03a7994  lis 3, 58
  03a7998  addi 28, 3, 29472
  03a799c  lis 3, 114
  03a79a0  addic 29, 1, 112
  03a79a4  lfs 2, 28(28)
  03a79a8  lfs 3, -3056(3)
  03a79ac  fmuls 2, 3, 2
  03a79b0  li 3, 1
  03a79b4  addic 27, 1, 144
  03a79b8  li 5, 16
  03a79bc  ori 6, 31, 0
  03a79c0  stw 3, 164(1)
  03a79c4  ori 3, 29, 0
  03a79c8  ori 7, 27, 0
  03a79cc  fdivs 30, 1, 2
  03a79d0  fmuls 1, 30, 31
  03a79d4  bl 0x5e598
  03a79d8  nop
  03a79dc  lis 4, 151
  03a79e0  lis 3, 3
  03a79e4  addic 4, 4, -25376
  03a79e8  li 5, 16
  03a79ec  ori 7, 27, 0
  03a79f0  stw 3, 164(1)
  03a79f4  lfs 1, 32(28)
  03a79f8  ori 3, 29, 0
  03a79fc  lwz 6, 8320(4)
  03a7a00  fmuls 1, 30, 1
  03a7a04  bl 0x5e598
  03a7a08  nop
  03a7a0c  lbz 3, 202(30)
  03a7a10  addic 3, 3, 1
  03a7a14  stb 3, 202(30)
  03a7a18  b 0x3a8024
  03a7a1c  lbz 3, 200(30)
  03a7a20  cmpwi 3, 0
  03a7a24  bt 2, 0x3a7a9c
  03a7a28  lhz 3, 52(31)
  03a7a2c  lhz 4, 180(31)
  03a7a30  ori 3, 3, 1
  03a7a34  extsh 4, 4
  03a7a38  stw 26, 148(31)
  03a7a3c  rlwimi 3, 26, 0, 19, 19
  03a7a40  stb 26, 49(31)
  03a7a44  cmpwi 4, 1
  03a7a48  sth 3, 52(31)
  03a7a4c  bf 1, 0x3a7a58
  03a7a50  li 3, 1
  03a7a54  sth 3, 180(31)
  03a7a58  li 3, 6
  03a7a5c  lis 4, 151
  03a7a60  stb 3, 32(31)
  03a7a64  lwz 3, -25488(4)
  03a7a68  cmpwi 3, 18
  03a7a6c  bf 2, 0x3a7a84
  03a7a70  li 3, 300
  03a7a74  li 4, 720
  03a7a78  bl 0xfe484
  03a7a7c  nop
  03a7a80  b 0x3a7a94
  03a7a84  li 3, 30
  03a7a88  li 4, 60
  03a7a8c  bl 0xfe484
  03a7a90  nop
  03a7a94  stb 3, 201(30)
  03a7a98  b 0x3a8024
  03a7a9c  ori 3, 31, 0
  03a7aa0  bl 0xefb38
  03a7aa4  nop
  03a7aa8  b 0x3a802c
  03a7aac  lis 3, 58
  03a7ab0  lfs 1, 16(31)
  03a7ab4  lis 6, 16256
  03a7ab8  addi 4, 3, 29472
  03a7abc  lfs 2, 20(31)
  03a7ac0  stfs 1, 128(1)
  03a7ac4  stfs 2, 132(1)
  03a7ac8  lfs 31, 24(4)
  03a7acc  lfs 1, 24(31)
  03a7ad0  lhz 3, 50(31)
  03a7ad4  fadds 1, 1, 31
  03a7ad8  extsh 3, 3
  03a7adc  extsw 5, 3
  03a7ae0  addic 3, 1, 128
  03a7ae4  stfs 1, 136(1)
  03a7ae8  lfs 30, 36(4)
  03a7aec  std 5, 208(1)
  03a7af0  stw 6, 140(1)
  03a7af4  lfd 1, 208(1)
  03a7af8  fcfid 1, 1
  03a7afc  frsp 1, 1
  03a7b00  bl 0x502910
  03a7b04  nop
  03a7b08  cmpwi 3, -1
  03a7b0c  bf 2, 0x3a8024
  03a7b10  addic 3, 30, 201
  03a7b14  bl 0x5000b4
  03a7b18  nop
  03a7b1c  cmpwi 3, 0
  03a7b20  bt 2, 0x3a8024
  03a7b24  lbz 6, 33(31)
  03a7b28  cmpwi 6, 255
  03a7b2c  bf 2, 0x3a7b5c
  03a7b30  li 3, 1
  03a7b34  lhz 4, 52(31)
  03a7b38  lwz 5, 36(31)
  03a7b3c  rlwinm 4, 4, 0, 0, 30
  03a7b40  stb 3, 32(31)
  03a7b44  ori 4, 4, 4096
  03a7b48  stb 3, 49(31)
  03a7b4c  lwz 3, 16(5)
  03a7b50  stw 3, 148(31)
  03a7b54  sth 4, 52(31)
  03a7b58  b 0x3a8024
  03a7b5c  lis 3, 151
  03a7b60  li 29, 1
  03a7b64  lwz 3, -25488(3)
  03a7b68  cmpwi 3, 18
  03a7b6c  bf 2, 0x3a7c5c
  03a7b70  lis 3, 58
  03a7b74  vspltisw 4, -16
  03a7b78  li 8, 40
  03a7b7c  addi 9, 3, 29472
  03a7b80  ori 4, 26, 0
  03a7b84  lis 7, 151
  03a7b88  ori 5, 4, 0
  03a7b8c  lis 10, 115
  03a7b90  lis 11, 151
  03a7b94  <unknown>
  03a7b98  ori 3, 5, 0
  03a7b9c  addic 7, 7, -16064
  03a7ba0  addic 8, 10, 32062
  03a7ba4  vspltw 3, 3, 0
  03a7ba8  addic 9, 11, -16212
  03a7bac  lbzx 10, 7, 5
  03a7bb0  cmpwi 10, 0
  03a7bb4  bt 2, 0x3a7c2c
  03a7bb8  sldi 10, 5, 3
  03a7bbc  addic 4, 4, 1
  03a7bc0  addc 11, 10, 10
  03a7bc4  addc 10, 10, 11
  03a7bc8  extsw 10, 10
  03a7bcc  addi 11, 10, 16
  03a7bd0  <unknown>
  03a7bd4  lhzx 10, 8, 10
  03a7bd8  <unknown>
  03a7bdc  cmpwi 10, 0
  03a7be0  vor 2, 2, 5
  03a7be4  vsrw 2, 2, 4
  03a7be8  bt 2, 0x3a7c2c
  03a7bec  slwi 10, 5, 2
  03a7bf0  vcfux 2, 2, 0
  03a7bf4  vspltisw 5, -1
  03a7bf8  extsw 10, 10
  03a7bfc  addi 11, 10, 16
  03a7c00  vslw 5, 5, 5
  03a7c04  <unknown>
  03a7c08  <unknown>
  03a7c0c  vor 6, 6, 7
  03a7c10  vmaddfp 2, 2, 3, 5
  03a7c14  vcfsx 5, 6, 0
  03a7c18  vspltw 2, 2, 0
  03a7c1c  vspltw 5, 5, 0
  03a7c20  vcmpgefp. 2, 5, 2
  03a7c24  bf 26, 0x3a7c2c
  03a7c28  addic 3, 3, 1
  03a7c2c  addic 5, 5, 1
  03a7c30  extsw 5, 5
  03a7c34  cmpwi 5, 37
  03a7c38  bt 0, 0x3a7bac
  03a7c3c  cmpwi 3, 3
  03a7c40  cmpwi 1, 4, 3
  03a7c44  bf 0, 0x3a7c4c
  03a7c48  bf 4, 0x3a8024
  03a7c4c  cmpwi 4, 3
  03a7c50  cmpw 1, 3, 4
  03a7c54  bf 0, 0x3a7c5c
  03a7c58  bf 6, 0x3a8024
  03a7c5c  ori 4, 6, 0
  03a7c60  li 6, 0
  03a7c64  addic 3, 1, 204
  03a7c68  li 5, 0
  03a7c6c  bl 0x104800
  03a7c70  nop
  03a7c74  lwz 6, 204(1)
  03a7c78  cmpwi 6, 0
  03a7c7c  bt 2, 0x3a7d64
  03a7c80  lis 3, 58
  03a7c84  addi 3, 3, 29472
  03a7c88  lfs 29, 44(3)
  03a7c8c  cmpw 31, 6
  03a7c90  bt 2, 0x3a7d40
  03a7c94  lfs 1, 20(31)
  03a7c98  lfs 2, 20(6)
  03a7c9c  lfs 3, 16(31)
  03a7ca0  fsubs 2, 1, 2
  03a7ca4  lfs 1, 16(6)
  03a7ca8  fsubs 3, 3, 1
  03a7cac  fmuls 2, 2, 2
  03a7cb0  fmadds 2, 3, 3, 2
  03a7cb4  fsqrts 2, 2
  03a7cb8  fcmpu 0, 2, 29
  03a7cbc  bt 1, 0x3a7d40
  03a7cc0  lbz 3, 32(6)
  03a7cc4  cmpwi 3, 1
  03a7cc8  bf 2, 0x3a7d40
  03a7ccc  lwz 3, 120(6)
  03a7cd0  lwz 4, 160(3)
  03a7cd4  cmpwi 4, 0
  03a7cd8  bf 2, 0x3a7d40
  03a7cdc  stfs 1, 16(31)
  03a7ce0  lfs 1, 20(6)
  03a7ce4  stfs 1, 20(31)
  03a7ce8  lfs 1, 24(6)
  03a7cec  fadds 2, 1, 30
  03a7cf0  stfs 1, 24(31)
  03a7cf4  lfs 1, 28(6)
  03a7cf8  stfs 1, 28(31)
  03a7cfc  stfs 2, 24(31)
  03a7d00  stw 31, 160(3)
  03a7d04  stw 6, 164(30)
  03a7d08  stw 26, 160(30)
  03a7d0c  lhz 3, 52(31)
  03a7d10  stb 29, 32(31)
  03a7d14  stb 29, 49(31)
  03a7d18  rlwinm 3, 3, 0, 0, 30
  03a7d1c  lwz 4, 36(31)
  03a7d20  lwz 5, 172(30)
  03a7d24  ori 3, 3, 4096
  03a7d28  ori 5, 5, 4
  03a7d2c  lwz 4, 16(4)
  03a7d30  sth 3, 52(31)
  03a7d34  stw 4, 148(31)
  03a7d38  stw 5, 172(30)
  03a7d3c  b 0x3a7d64
  03a7d40  ori 4, 6, 0
  03a7d44  li 6, 0
  03a7d48  addic 3, 1, 204
  03a7d4c  li 5, 0
  03a7d50  bl 0x10466c
  03a7d54  nop
  03a7d58  lwz 6, 204(1)
  03a7d5c  cmpwi 6, 0
  03a7d60  bf 2, 0x3a7c8c
  03a7d64  lbz 3, 32(31)
  03a7d68  cmpwi 3, 1
  03a7d6c  bt 2, 0x3a8024
  03a7d70  fmr 1, 31
  03a7d74  addic 3, 31, 16
  03a7d78  li 4, 0
  03a7d7c  bl 0xffb70
  03a7d80  nop
  03a7d84  stb 29, 32(31)
  03a7d88  stw 26, 160(30)
  03a7d8c  stw 26, 164(30)
  03a7d90  lhz 3, 52(31)
  03a7d94  stfs 1, 24(31)
  03a7d98  lwz 4, 36(31)
  03a7d9c  rlwinm 3, 3, 0, 0, 30
  03a7da0  stb 29, 49(31)
  03a7da4  ori 3, 3, 4096
  03a7da8  lwz 4, 16(4)
  03a7dac  sth 3, 52(31)
  03a7db0  stw 4, 148(31)
  03a7db4  b 0x3a8024
  03a7db8  lbz 3, 188(31)
  03a7dbc  cmpwi 3, 0
  03a7dc0  bf 2, 0x3a7e38
  03a7dc4  lis 3, 58
  03a7dc8  li 4, 48
  03a7dcc  vspltisw 2, -1
  03a7dd0  addi 3, 3, 29472
  03a7dd4  vspltisw 5, 0
  03a7dd8  lis 5, 114
  03a7ddc  li 6, -3056
  03a7de0  vslw 2, 2, 2
  03a7de4  <unknown>
  03a7de8  vspltw 3, 3, 0
  03a7dec  <unknown>
  03a7df0  vspltisw 7, 1
  03a7df4  li 3, 188
  03a7df8  vmaddfp 2, 4, 3, 2
  03a7dfc  vspltisw 3, 3
  03a7e00  vspltisw 4, -16
  03a7e04  ld 4, 56(31)
  03a7e08  vrlw 6, 3, 4
  03a7e0c  vctsxs 2, 2, 0
  03a7e10  vmsumshm 5, 2, 6, 5
  03a7e14  vmulouh 2, 2, 3
  03a7e18  vslw 3, 5, 4
  03a7e1c  vadduwm 2, 3, 2
  03a7e20  vsubuwm 2, 2, 7
  03a7e24  vspltb 2, 2, 3
  03a7e28  stvebx 2, 3, 31
  03a7e2c  std 4, 184(30)
  03a7e30  lbz 3, 188(31)
  03a7e34  b 0x3a7e9c
  03a7e38  lis 4, 58
  03a7e3c  lis 5, 114
  03a7e40  addi 4, 4, 29472
  03a7e44  cmpwi 1, 27, 0
  03a7e48  lfs 1, 8(4)
  03a7e4c  lfs 2, -3056(5)
  03a7e50  fmuls 1, 2, 1
  03a7e54  fctiwz 1, 1
  03a7e58  stfd 1, 208(1)
  03a7e5c  lwz 4, 212(1)
  03a7e60  cmpw 3, 4
  03a7e64  crorc 2, 6, 1
  03a7e68  bt 2, 0x3a7e9c
  03a7e6c  lis 3, 58
  03a7e70  addi 3, 3, 29472
  03a7e74  lfs 1, 0(3)
  03a7e78  lfs 2, 4(3)
  03a7e7c  bl 0xfcbe8
  03a7e80  nop
  03a7e84  lis 3, 114
  03a7e88  lfs 2, -3056(3)
  03a7e8c  fmuls 1, 1, 2
  03a7e90  bl 0x502758
  03a7e94  nop
  03a7e98  stb 3, 188(31)
  03a7e9c  lis 4, 58
  03a7ea0  lis 5, 114
  03a7ea4  addi 4, 4, 29472
  03a7ea8  lfs 1, -3056(5)
  03a7eac  lfs 31, 48(4)
  03a7eb0  clrlwi 4, 3, 24
  03a7eb4  fmuls 2, 1, 31
  03a7eb8  fctiwz 2, 2
  03a7ebc  stfd 2, 208(1)
  03a7ec0  lwz 5, 212(1)
  03a7ec4  divw 6, 4, 5
  03a7ec8  mullw 6, 6, 5
  03a7ecc  addic 5, 5, -3
  03a7ed0  subc 6, 4, 6
  03a7ed4  cmpw 6, 5
  03a7ed8  bt 2, 0x3a7f00
  03a7edc  lis 5, 58
  03a7ee0  addi 5, 5, 29472
  03a7ee4  lfs 2, 52(5)
  03a7ee8  fmuls 2, 1, 2
  03a7eec  fctiwz 2, 2
  03a7ef0  stfd 2, 208(1)
  03a7ef4  lwz 5, 212(1)
  03a7ef8  cmpw 4, 5
  03a7efc  bf 2, 0x3a7f20
  03a7f00  li 4, 32
  03a7f04  li 3, 1
  03a7f08  ori 5, 31, 0
  03a7f0c  bl 0x15d12c
  03a7f10  nop
  03a7f14  lis 4, 114
  03a7f18  lbz 3, 188(31)
  03a7f1c  lfs 1, -3056(4)
  03a7f20  fmuls 2, 1, 31
  03a7f24  lis 4, 58
  03a7f28  clrlwi 3, 3, 24
  03a7f2c  addi 4, 4, 29472
  03a7f30  fctiwz 2, 2
  03a7f34  stfd 2, 208(1)
  03a7f38  lwz 5, 212(1)
  03a7f3c  lfs 2, 56(4)
  03a7f40  divw 4, 3, 5
  03a7f44  fmuls 2, 1, 2
  03a7f48  mullw 4, 4, 5
  03a7f4c  fctiwz 2, 2
  03a7f50  subc 4, 3, 4
  03a7f54  stfd 2, 208(1)
  03a7f58  lwz 5, 212(1)
  03a7f5c  cmpw 4, 5
  03a7f60  bt 1, 0x3a7f88
  03a7f64  lis 4, 58
  03a7f68  addi 4, 4, 29472
  03a7f6c  lfs 2, 8(4)
  03a7f70  fmuls 1, 1, 2
  03a7f74  fctiwz 1, 1
  03a7f78  stfd 1, 208(1)
  03a7f7c  lwz 4, 212(1)
  03a7f80  cmpw 3, 4
  03a7f84  bf 0, 0x3a7fa8
  03a7f88  ori 3, 31, 0
  03a7f8c  li 4, 200
  03a7f90  li 5, 64
  03a7f94  li 6, 64
  03a7f98  bl 0xf1ec8
  03a7f9c  nop
  03a7fa0  lbz 3, 188(31)
  03a7fa4  b 0x3a7fb0
  03a7fa8  ld 4, 184(30)
  03a7fac  std 4, 56(31)
  03a7fb0  cmpwi 3, 1
  03a7fb4  bt 2, 0x3a7fcc
  03a7fb8  lis 4, 151
  03a7fbc  addic 4, 4, -25376
  03a7fc0  lwz 4, 8332(4)
  03a7fc4  cmpwi 4, 22
  03a7fc8  bf 2, 0x3a7ff0
  03a7fcc  ld 6, 184(30)
  03a7fd0  ori 3, 31, 0
  03a7fd4  li 4, 1
  03a7fd8  li 5, 0
  03a7fdc  std 6, 56(31)
  03a7fe0  bl 0x3a5468
  03a7fe4  ori 3, 31, 0
  03a7fe8  bl 0x3a4da0
  03a7fec  lbz 3, 188(31)
  03a7ff0  addic 3, 3, -1
  03a7ff4  stb 3, 188(31)
  03a7ff8  b 0x3a8024
  03a7ffc  addic 3, 31, 188
  03a8000  bl 0x500060
  03a8004  nop
  03a8008  cmpwi 3, 0
  03a800c  bt 2, 0x3a8024
  03a8010  li 3, 1
  03a8014  lhz 4, 52(31)
  03a8018  stb 3, 32(31)
  03a801c  rlwinm 3, 4, 0, 0, 30
  03a8020  sth 3, 52(31)
  03a8024  li 3, 255
  03a8028  stb 3, 164(31)
  03a802c  ld 0, 320(1)
  03a8030  mtlr 0
  03a8034  lfd 29, 280(1)
  03a8038  lfd 30, 288(1)
  03a803c  lfd 31, 296(1)
  03a8040  ld 26, 232(1)
  03a8044  ld 27, 240(1)
  03a8048  ld 28, 248(1)
  03a804c  ld 29, 256(1)
  03a8050  ld 30, 264(1)
  03a8054  ld 31, 272(1)
  03a8058  addi 1, 1, 304
  03a805c  blr
