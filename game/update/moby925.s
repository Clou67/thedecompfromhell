# game/update/moby925.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M925_004b89c8:   # 0x4b89c8, 0x14 bytes
  04b89c8  lis 3, 143
  04b89cc  lis 4, 1
  04b89d0  addic 3, 3, 18060
  04b89d4  stw 4, 72(3)
  04b89d8  blr

M925_004b89e0:   # 0x4b89e0, 0xf4 bytes
  04b89e0  stdu 1, -160(1)
  04b89e4  mflr 0
  04b89e8  std 0, 176(1)
  04b89ec  std 31, 152(1)
  04b89f0  lis 4, 161
  04b89f4  ori 31, 3, 0
  04b89f8  lwz 3, 1800(4)
  04b89fc  std 30, 144(1)
  04b8a00  std 29, 136(1)
  04b8a04  std 28, 128(1)
  04b8a08  std 27, 120(1)
  04b8a0c  cmpwi 3, 2
  04b8a10  bf 2, 0x4b8ab0
  04b8a14  lis 3, 151
  04b8a18  lbz 3, -16268(3)
  04b8a1c  cmpwi 3, 0
  04b8a20  bt 2, 0x4b8ab0
  04b8a24  lis 28, 150
  04b8a28  li 27, 0
  04b8a2c  addic 28, 28, -12976
  04b8a30  lhz 3, 68(28)
  04b8a34  extsh 4, 3
  04b8a38  cmpwi 4, 0
  04b8a3c  bf 1, 0x4b8ab0
  04b8a40  lis 29, 162
  04b8a44  ori 30, 28, 0
  04b8a48  addic 29, 29, -16512
  04b8a4c  lwz 4, 376(30)
  04b8a50  lhz 5, 166(31)
  04b8a54  extsh 5, 5
  04b8a58  lhz 6, 166(4)
  04b8a5c  extsh 6, 6
  04b8a60  cmpw 6, 5
  04b8a64  bf 2, 0x4b8a9c
  04b8a68  lbz 5, 1(29)
  04b8a6c  cmpwi 5, 0
  04b8a70  bf 2, 0x4b8a9c
  04b8a74  ori 3, 4, 0
  04b8a78  li 4, 0
  04b8a7c  ori 5, 29, 0
  04b8a80  bl 0xf0ea8
  04b8a84  nop
  04b8a88  lis 4, 16432
  04b8a8c  lhz 3, 68(28)
  04b8a90  stw 4, 32(29)
  04b8a94  stw 4, 36(29)
  04b8a98  stw 4, 40(29)
  04b8a9c  extsh 4, 3
  04b8aa0  addic 27, 27, 1
  04b8aa4  addic 30, 30, 4
  04b8aa8  cmpw 27, 4
  04b8aac  bt 0, 0x4b8a4c
  04b8ab0  ld 0, 176(1)
  04b8ab4  mtlr 0
  04b8ab8  ld 27, 120(1)
  04b8abc  ld 28, 128(1)
  04b8ac0  ld 29, 136(1)
  04b8ac4  ld 30, 144(1)
  04b8ac8  ld 31, 152(1)
  04b8acc  addi 1, 1, 160
  04b8ad0  blr

UpdateMoby_925:   # 0x4b8b48, 0xc38 bytes
  04b8b48  stdu 1, -352(1)
  04b8b4c  mflr 0
  04b8b50  std 0, 368(1)
  04b8b54  stfd 27, 312(1)
  04b8b58  stfd 28, 320(1)
  04b8b5c  stfd 29, 328(1)
  04b8b60  stfd 30, 336(1)
  04b8b64  stfd 31, 344(1)
  04b8b68  std 31, 304(1)
  04b8b6c  lis 4, 161
  04b8b70  ori 31, 3, 0
  04b8b74  std 30, 296(1)
  04b8b78  lwz 4, 1800(4)
  04b8b7c  lwz 30, 120(3)
  04b8b80  std 29, 288(1)
  04b8b84  std 28, 280(1)
  04b8b88  std 27, 272(1)
  04b8b8c  std 26, 264(1)
  04b8b90  cmpwi 4, 2
  04b8b94  bf 2, 0x4b8c30
  04b8b98  lis 3, 151
  04b8b9c  lbz 3, -16268(3)
  04b8ba0  cmpwi 3, 0
  04b8ba4  bt 2, 0x4b8c30
  04b8ba8  lis 28, 150
  04b8bac  li 29, 0
  04b8bb0  addic 28, 28, -12976
  04b8bb4  lhz 4, 68(28)
  04b8bb8  extsh 3, 4
  04b8bbc  cmpwi 3, 0
  04b8bc0  bf 1, 0x4b8c30
  04b8bc4  lis 27, 162
  04b8bc8  ori 26, 28, 0
  04b8bcc  addic 27, 27, -16512
  04b8bd0  lwz 3, 376(26)
  04b8bd4  lhz 5, 166(31)
  04b8bd8  extsh 5, 5
  04b8bdc  lhz 6, 166(3)
  04b8be0  extsh 6, 6
  04b8be4  cmpw 6, 5
  04b8be8  bf 2, 0x4b8c1c
  04b8bec  lbz 5, 1(27)
  04b8bf0  cmpwi 5, 0
  04b8bf4  bf 2, 0x4b8c1c
  04b8bf8  li 4, 0
  04b8bfc  ori 5, 27, 0
  04b8c00  bl 0xf0ea8
  04b8c04  nop
  04b8c08  lis 3, 16432
  04b8c0c  lhz 4, 68(28)
  04b8c10  stw 3, 32(27)
  04b8c14  stw 3, 36(27)
  04b8c18  stw 3, 40(27)
  04b8c1c  extsh 3, 4
  04b8c20  addic 29, 29, 1
  04b8c24  addic 26, 26, 4
  04b8c28  cmpw 29, 3
  04b8c2c  bt 0, 0x4b8bd0
  04b8c30  lbz 3, 49(31)
  04b8c34  cmpwi 3, 0
  04b8c38  bt 2, 0x4b8ca4
  04b8c3c  lis 3, 149
  04b8c40  lfs 1, 20(31)
  04b8c44  lfs 2, 16(31)
  04b8c48  addic 3, 3, 5056
  04b8c4c  lfs 3, 324(3)
  04b8c50  lfs 4, 320(3)
  04b8c54  fsubs 1, 1, 3
  04b8c58  fsubs 2, 2, 4
  04b8c5c  lfs 3, 24(31)
  04b8c60  lfs 4, 328(3)
  04b8c64  fsubs 3, 3, 4
  04b8c68  lis 3, 76
  04b8c6c  fmuls 1, 1, 1
  04b8c70  addi 3, 3, -29996
  04b8c74  fmadds 1, 2, 2, 1
  04b8c78  lfs 2, 0(3)
  04b8c7c  fmadds 1, 3, 3, 1
  04b8c80  fsqrts 1, 1
  04b8c84  fcmpu 0, 1, 2
  04b8c88  cror 6, 1, 2
  04b8c8c  bt 6, 0x4b8ca4
  04b8c90  ori 3, 31, 0
  04b8c94  bl 0x106360
  04b8c98  nop
  04b8c9c  li 3, 32
  04b8ca0  stb 3, 127(31)
  04b8ca4  lbz 3, 32(31)
  04b8ca8  cmpwi 3, 0
  04b8cac  cmpwi 1, 3, 1
  04b8cb0  cmpwi 6, 3, -1
  04b8cb4  bt 1, 0x4b8cc0
  04b8cb8  bf 25, 0x4b8ec0
  04b8cbc  b 0x4b8cc8
  04b8cc0  bf 5, 0x4b8d40
  04b8cc4  b 0x4b8ec0
  04b8cc8  lis 3, 151
  04b8ccc  addic 3, 3, -16064
  04b8cd0  lbz 3, 23(3)
  04b8cd4  cmpwi 3, 0
  04b8cd8  bt 2, 0x4b8cec
  04b8cdc  ori 3, 31, 0
  04b8ce0  bl 0xefb38
  04b8ce4  nop
  04b8ce8  b 0x4b9744
  04b8cec  lis 3, 76
  04b8cf0  lfs 2, 24(31)
  04b8cf4  li 4, 0
  04b8cf8  addi 3, 3, -29996
  04b8cfc  lfs 1, 4(3)
  04b8d00  addic 3, 31, 16
  04b8d04  fadds 2, 2, 1
  04b8d08  stfs 2, 24(31)
  04b8d0c  bl 0xffb70
  04b8d10  nop
  04b8d14  lis 3, 102
  04b8d18  li 5, 1
  04b8d1c  stfs 1, 24(31)
  04b8d20  addic 6, 3, -29548
  04b8d24  ori 3, 31, 0
  04b8d28  ori 4, 30, 0
  04b8d2c  stw 6, 32(30)
  04b8d30  stb 5, 32(31)
  04b8d34  bl 0x4d3720
  04b8d38  nop
  04b8d3c  b 0x4b8ec0
  04b8d40  ori 3, 31, 0
  04b8d44  ori 4, 30, 0
  04b8d48  bl 0x4d3870
  04b8d4c  nop
  04b8d50  cmpwi 3, 0
  04b8d54  bt 2, 0x4b8d70
  04b8d58  lis 3, 76
  04b8d5c  addi 4, 3, -29996
  04b8d60  ori 3, 31, 0
  04b8d64  lfs 1, 8(4)
  04b8d68  bl 0x119488
  04b8d6c  nop
  04b8d70  lhz 3, 4(30)
  04b8d74  cmpwi 3, 3
  04b8d78  cmpwi 1, 3, 4
  04b8d7c  bt 2, 0x4b8d84
  04b8d80  bf 6, 0x4b8dd0
  04b8d84  li 3, 23
  04b8d88  li 4, 1
  04b8d8c  bl 0x112e18
  04b8d90  nop
  04b8d94  li 3, 6
  04b8d98  bl 0x112dc0
  04b8d9c  nop
  04b8da0  li 3, 5014
  04b8da4  li 4, -1
  04b8da8  bl 0x112a38
  04b8dac  nop
  04b8db0  li 3, 0
  04b8db4  li 4, -1
  04b8db8  bl 0xe8aa4
  04b8dbc  nop
  04b8dc0  ori 3, 31, 0
  04b8dc4  bl 0xefb38
  04b8dc8  nop
  04b8dcc  b 0x4b9744
  04b8dd0  lis 3, 76
  04b8dd4  addi 3, 3, -29996
  04b8dd8  lfs 31, 12(3)
  04b8ddc  lbz 3, 83(31)
  04b8de0  cmpwi 3, 0
  04b8de4  bf 2, 0x4b8e70
  04b8de8  addic 3, 30, 340
  04b8dec  bl 0x4fff60
  04b8df0  nop
  04b8df4  cmpwi 3, 0
  04b8df8  lbz 3, 83(31)
  04b8dfc  bt 2, 0x4b8e70
  04b8e00  lis 3, 76
  04b8e04  addi 3, 3, -29996
  04b8e08  lfs 1, 16(3)
  04b8e0c  lfs 2, 20(3)
  04b8e10  bl 0xfcbe8
  04b8e14  nop
  04b8e18  lis 3, 114
  04b8e1c  lfs 2, -3056(3)
  04b8e20  fmuls 1, 1, 2
  04b8e24  bl 0x502758
  04b8e28  nop
  04b8e2c  stw 3, 340(30)
  04b8e30  lbz 3, 83(31)
  04b8e34  cmpwi 3, 1
  04b8e38  bt 2, 0x4b8ec0
  04b8e3c  lis 3, 114
  04b8e40  li 4, 1
  04b8e44  li 5, 0
  04b8e48  lfs 1, -3056(3)
  04b8e4c  ori 3, 31, 0
  04b8e50  fmuls 1, 1, 31
  04b8e54  fctiwz 1, 1
  04b8e58  stfd 1, 248(1)
  04b8e5c  lwz 6, 252(1)
  04b8e60  extsw 6, 6
  04b8e64  bl 0xfddc0
  04b8e68  nop
  04b8e6c  b 0x4b8ec0
  04b8e70  cmpwi 3, 1
  04b8e74  bf 2, 0x4b8ec0
  04b8e78  cmpwi 1, 3, 0
  04b8e7c  lbz 3, 112(31)
  04b8e80  rlwinm 3, 3, 0, 30, 30
  04b8e84  cmpwi 3, 0
  04b8e88  cror 2, 2, 6
  04b8e8c  bt 2, 0x4b8ec0
  04b8e90  lis 3, 114
  04b8e94  li 4, 0
  04b8e98  li 5, 0
  04b8e9c  lfs 1, -3056(3)
  04b8ea0  ori 3, 31, 0
  04b8ea4  fmuls 1, 1, 31
  04b8ea8  fctiwz 1, 1
  04b8eac  stfd 1, 248(1)
  04b8eb0  lwz 6, 252(1)
  04b8eb4  extsw 6, 6
  04b8eb8  bl 0xfddc0
  04b8ebc  nop
  04b8ec0  lis 3, 76
  04b8ec4  lbz 4, 83(31)
  04b8ec8  addi 3, 3, -29996
  04b8ecc  cmpwi 4, 0
  04b8ed0  lfs 31, 24(3)
  04b8ed4  bf 2, 0x4b96dc
  04b8ed8  lis 29, 151
  04b8edc  lfs 2, 20(31)
  04b8ee0  addic 29, 29, -25376
  04b8ee4  lfs 1, 16(31)
  04b8ee8  lis 3, 76
  04b8eec  lfs 3, 132(29)
  04b8ef0  lfs 4, 128(29)
  04b8ef4  fsubs 3, 2, 3
  04b8ef8  fsubs 4, 1, 4
  04b8efc  addi 3, 3, -29996
  04b8f00  fmuls 3, 3, 3
  04b8f04  fmadds 3, 4, 4, 3
  04b8f08  lfs 4, 28(3)
  04b8f0c  fsqrts 3, 3
  04b8f10  fcmpu 0, 3, 4
  04b8f14  cror 6, 1, 2
  04b8f18  bt 6, 0x4b9188
  04b8f1c  lfs 3, 208(29)
  04b8f20  lis 3, 76
  04b8f24  lfs 4, 212(29)
  04b8f28  fsubs 1, 3, 1
  04b8f2c  fsubs 2, 4, 2
  04b8f30  addi 3, 3, -29996
  04b8f34  lis 4, 115
  04b8f38  addic 4, 4, 22784
  04b8f3c  fabs 5, 1
  04b8f40  fabs 6, 2
  04b8f44  stfs 1, 136(1)
  04b8f48  stfs 2, 140(1)
  04b8f4c  lfs 3, 72(31)
  04b8f50  fsubs 1, 5, 6
  04b8f54  stfs 1, 144(1)
  04b8f58  lwz 5, 136(1)
  04b8f5c  lfs 4, 32(3)
  04b8f60  lfs 1, 136(1)
  04b8f64  lwz 3, 140(1)
  04b8f68  lfs 2, 140(1)
  04b8f6c  lwz 6, 144(1)
  04b8f70  rlwinm 3, 3, 3, 29, 29
  04b8f74  fabs 7, 2
  04b8f78  lfs 2, 144(1)
  04b8f7c  fabs 1, 1
  04b8f80  rlwimi 3, 6, 2, 30, 30
  04b8f84  fsub 8, 2, 4
  04b8f88  rlwimi 3, 5, 4, 28, 28
  04b8f8c  fsub 9, 2, 4
  04b8f90  ori 5, 4, 0
  04b8f94  rlwimi 5, 3, 2, 26, 28
  04b8f98  slwi 3, 3, 2
  04b8f9c  clrldi 5, 5, 32
  04b8fa0  fsel 6, 8, 1, 6
  04b8fa4  lfsx 1, 4, 3
  04b8fa8  lfs 2, 4(5)
  04b8fac  fsel 5, 9, 7, 5
  04b8fb0  fcmpu 0, 6, 4
  04b8fb4  bt 1, 0x4b8fbc
  04b8fb8  b 0x4b90dc
  04b8fbc  fsubs 7, 5, 6
  04b8fc0  fadds 5, 5, 6
  04b8fc4  addic 3, 1, 16
  04b8fc8  li 6, 2
  04b8fcc  addic 4, 3, 196
  04b8fd0  addic 5, 3, 212
  04b8fd4  mtctr 6
  04b8fd8  fdivs 5, 7, 5
  04b8fdc  fmuls 6, 5, 5
  04b8fe0  stfs 5, 224(1)
  04b8fe4  stfs 5, 216(1)
  04b8fe8  stfs 5, 220(1)
  04b8fec  stfs 5, 212(1)
  04b8ff0  lfs 8, 224(1)
  04b8ff4  lfs 9, 216(1)
  04b8ff8  lfs 10, 220(1)
  04b8ffc  fmuls 7, 6, 6
  04b9000  fmuls 9, 9, 6
  04b9004  fmuls 8, 8, 7
  04b9008  fmuls 5, 7, 7
  04b900c  fmuls 7, 10, 7
  04b9010  stfs 9, 216(1)
  04b9014  fmuls 6, 8, 6
  04b9018  stfs 7, 220(1)
  04b901c  stfs 6, 224(1)
  04b9020  lfs 6, 196(3)
  04b9024  fmuls 6, 6, 5
  04b9028  stfs 6, 212(3)
  04b902c  lfs 6, 4(4)
  04b9030  addic 3, 3, 8
  04b9034  addic 4, 4, 8
  04b9038  fmuls 6, 6, 5
  04b903c  stfs 6, 4(5)
  04b9040  addic 5, 5, 8
  04b9044  bdnz 0x4b9020
  04b9048  li 5, 4
  04b904c  ori 3, 1, 0
  04b9050  mtctr 5
  04b9054  lis 4, 115
  04b9058  addic 5, 3, 212
  04b905c  addic 4, 4, 22752
  04b9060  ori 7, 5, 0
  04b9064  lfs 5, 212(3)
  04b9068  lfs 6, 0(4)
  04b906c  fmuls 5, 5, 6
  04b9070  lfs 6, 4(4)
  04b9074  addic 4, 4, 8
  04b9078  stfs 5, 212(3)
  04b907c  lfs 5, 4(5)
  04b9080  addic 3, 3, 8
  04b9084  fmuls 5, 5, 6
  04b9088  stfs 5, 4(5)
  04b908c  addic 5, 5, 8
  04b9090  bdnz 0x4b9064
  04b9094  ori 3, 1, 0
  04b9098  mtctr 6
  04b909c  lfs 5, 212(3)
  04b90a0  fadds 4, 4, 5
  04b90a4  lfs 5, 4(7)
  04b90a8  addic 3, 3, 16
  04b90ac  lfs 6, 8(7)
  04b90b0  lfs 7, 12(7)
  04b90b4  addic 7, 7, 16
  04b90b8  fadds 4, 4, 5
  04b90bc  fadds 4, 4, 6
  04b90c0  fadds 4, 4, 7
  04b90c4  bdnz 0x4b909c
  04b90c8  lis 3, 76
  04b90cc  addi 3, 3, -29996
  04b90d0  lfs 5, 36(3)
  04b90d4  fadds 4, 4, 5
  04b90d8  fmadds 4, 4, 1, 2
  04b90dc  fmr 1, 3
  04b90e0  fmr 2, 4
  04b90e4  bl 0x5026a0
  04b90e8  nop
  04b90ec  lis 3, 76
  04b90f0  addi 3, 3, -29996
  04b90f4  lfs 2, 40(3)
  04b90f8  fcmpu 0, 1, 2
  04b90fc  cror 6, 1, 2
  04b9100  bt 6, 0x4b9188
  04b9104  lfs 1, 260(29)
  04b9108  lfs 2, 256(29)
  04b910c  fmuls 1, 1, 1
  04b9110  lfs 3, 264(29)
  04b9114  lis 3, 76
  04b9118  addi 3, 3, -29996
  04b911c  fmadds 1, 2, 2, 1
  04b9120  lfs 2, 44(3)
  04b9124  fmadds 1, 3, 3, 1
  04b9128  fsqrts 1, 1
  04b912c  fcmpu 0, 1, 2
  04b9130  cror 6, 0, 2
  04b9134  bt 6, 0x4b9178
  04b9138  lis 3, 76
  04b913c  li 4, 48
  04b9140  vspltisw 2, -1
  04b9144  addi 3, 3, -29996
  04b9148  lis 5, 114
  04b914c  li 6, -3056
  04b9150  vslw 2, 2, 2
  04b9154  lvlx 3, 4, 3
  04b9158  li 3, 344
  04b915c  vspltw 3, 3, 0
  04b9160  lvlx 4, 6, 5
  04b9164  vmaddfp 2, 4, 3, 2
  04b9168  vctsxs 2, 2, 0
  04b916c  vspltw 2, 2, 0
  04b9170  stvewx 2, 3, 30
  04b9174  b 0x4b91bc
  04b9178  addic 3, 30, 344
  04b917c  bl 0x4fff60
  04b9180  nop
  04b9184  b 0x4b91bc
  04b9188  lwz 3, 344(30)
  04b918c  cmpwi 3, 0
  04b9190  bt 2, 0x4b91bc
  04b9194  li 3, 0
  04b9198  stw 3, 344(30)
  04b919c  lfs 1, 208(29)
  04b91a0  stfs 1, 320(30)
  04b91a4  lfs 1, 212(29)
  04b91a8  stfs 1, 324(30)
  04b91ac  lfs 1, 216(29)
  04b91b0  stfs 1, 328(30)
  04b91b4  lfs 1, 220(29)
  04b91b8  stfs 1, 332(30)
  04b91bc  addic 3, 30, 348
  04b91c0  bl 0x4fff60
  04b91c4  nop
  04b91c8  cmpwi 3, 0
  04b91cc  bt 2, 0x4b9284
  04b91d0  lis 3, 76
  04b91d4  addi 28, 3, -29996
  04b91d8  lfs 1, 52(28)
  04b91dc  lfs 2, 56(28)
  04b91e0  bl 0xfcbe8
  04b91e4  nop
  04b91e8  lis 3, 114
  04b91ec  lfs 2, -3056(3)
  04b91f0  fmuls 1, 1, 2
  04b91f4  bl 0x502758
  04b91f8  nop
  04b91fc  stw 3, 348(30)
  04b9200  lfs 1, 60(28)
  04b9204  lfs 30, 72(31)
  04b9208  lfs 2, 64(28)
  04b920c  bl 0xfcbe8
  04b9210  nop
  04b9214  lfs 29, 68(28)
  04b9218  fmuls 2, 1, 29
  04b921c  fmr 1, 30
  04b9220  bl 0x502578
  04b9224  nop
  04b9228  fmr 30, 1
  04b922c  lfs 1, 32(28)
  04b9230  lfs 2, 72(28)
  04b9234  bl 0xfcbe8
  04b9238  nop
  04b923c  fmuls 3, 1, 29
  04b9240  addic 3, 30, 320
  04b9244  lfs 1, 76(28)
  04b9248  fmr 2, 30
  04b924c  bl 0xfe610
  04b9250  nop
  04b9254  lfs 1, 320(30)
  04b9258  lfs 2, 16(31)
  04b925c  fadds 1, 1, 2
  04b9260  lfs 2, 324(30)
  04b9264  lfs 3, 328(30)
  04b9268  stfs 1, 320(30)
  04b926c  lfs 1, 20(31)
  04b9270  fadds 1, 2, 1
  04b9274  stfs 1, 324(30)
  04b9278  lfs 1, 24(31)
  04b927c  fadds 1, 3, 1
  04b9280  stfs 1, 328(30)
  04b9284  lwz 3, 344(30)
  04b9288  cmpwi 3, 0
  04b928c  bt 2, 0x4b92ac
  04b9290  lis 3, 76
  04b9294  lfs 30, 208(29)
  04b9298  addi 3, 3, -29996
  04b929c  lfs 29, 212(29)
  04b92a0  lfs 28, 216(29)
  04b92a4  lfs 31, 80(3)
  04b92a8  b 0x4b92b8
  04b92ac  lfs 30, 320(30)
  04b92b0  lfs 29, 324(30)
  04b92b4  lfs 28, 328(30)
  04b92b8  lfs 1, 16(31)
  04b92bc  lfs 2, 20(31)
  04b92c0  lis 3, 76
  04b92c4  fsubs 30, 30, 1
  04b92c8  fsubs 29, 29, 2
  04b92cc  addi 3, 3, -29996
  04b92d0  lis 29, 115
  04b92d4  addic 29, 29, 22784
  04b92d8  lfs 1, 84(3)
  04b92dc  fabs 3, 30
  04b92e0  fabs 4, 29
  04b92e4  stfs 30, 124(1)
  04b92e8  stfs 29, 128(1)
  04b92ec  lfs 5, 24(31)
  04b92f0  fadds 1, 5, 1
  04b92f4  fsubs 2, 3, 4
  04b92f8  fsubs 28, 28, 1
  04b92fc  stfs 2, 132(1)
  04b9300  lwz 4, 124(1)
  04b9304  lfs 27, 32(3)
  04b9308  lfs 2, 124(1)
  04b930c  lwz 3, 128(1)
  04b9310  lfs 5, 128(1)
  04b9314  lwz 5, 132(1)
  04b9318  rlwinm 3, 3, 3, 29, 29
  04b931c  lfs 1, 132(1)
  04b9320  fabs 2, 2
  04b9324  rlwimi 3, 5, 2, 30, 30
  04b9328  fabs 5, 5
  04b932c  fsub 6, 1, 27
  04b9330  fsub 7, 1, 27
  04b9334  rlwimi 3, 4, 4, 28, 28
  04b9338  ori 4, 29, 0
  04b933c  rlwimi 4, 3, 2, 26, 28
  04b9340  slwi 3, 3, 2
  04b9344  clrldi 4, 4, 32
  04b9348  fsel 4, 6, 2, 4
  04b934c  lfsx 1, 29, 3
  04b9350  fsel 3, 7, 5, 3
  04b9354  lfs 2, 4(4)
  04b9358  fcmpu 0, 4, 27
  04b935c  bt 1, 0x4b9368
  04b9360  fmr 1, 27
  04b9364  b 0x4b948c
  04b9368  fsubs 5, 3, 4
  04b936c  fadds 3, 3, 4
  04b9370  addic 3, 1, 16
  04b9374  li 7, 2
  04b9378  addic 5, 3, 180
  04b937c  addic 4, 3, 164
  04b9380  mtctr 7
  04b9384  fdivs 3, 5, 3
  04b9388  fmuls 4, 3, 3
  04b938c  stfs 3, 192(1)
  04b9390  stfs 3, 184(1)
  04b9394  stfs 3, 188(1)
  04b9398  stfs 3, 180(1)
  04b939c  lfs 6, 192(1)
  04b93a0  lfs 7, 184(1)
  04b93a4  lfs 8, 188(1)
  04b93a8  fmuls 5, 4, 4
  04b93ac  fmuls 7, 7, 4
  04b93b0  fmuls 6, 6, 5
  04b93b4  fmuls 3, 5, 5
  04b93b8  fmuls 5, 8, 5
  04b93bc  stfs 7, 184(1)
  04b93c0  fmuls 4, 6, 4
  04b93c4  stfs 5, 188(1)
  04b93c8  stfs 4, 192(1)
  04b93cc  lfs 4, 164(3)
  04b93d0  fmuls 4, 4, 3
  04b93d4  stfs 4, 180(3)
  04b93d8  lfs 4, 4(4)
  04b93dc  addic 4, 4, 8
  04b93e0  fmuls 4, 4, 3
  04b93e4  addic 3, 3, 8
  04b93e8  stfs 4, 4(5)
  04b93ec  addic 5, 5, 8
  04b93f0  bdnz 0x4b93cc
  04b93f4  li 5, 4
  04b93f8  ori 3, 1, 0
  04b93fc  mtctr 5
  04b9400  lis 4, 115
  04b9404  addic 5, 3, 180
  04b9408  addic 4, 4, 22752
  04b940c  ori 6, 5, 0
  04b9410  lfs 3, 180(3)
  04b9414  lfs 4, 0(4)
  04b9418  fmuls 3, 3, 4
  04b941c  lfs 4, 4(4)
  04b9420  addic 4, 4, 8
  04b9424  stfs 3, 180(3)
  04b9428  lfs 3, 4(5)
  04b942c  addic 3, 3, 8
  04b9430  fmuls 3, 3, 4
  04b9434  stfs 3, 4(5)
  04b9438  addic 5, 5, 8
  04b943c  bdnz 0x4b9410
  04b9440  ori 3, 1, 0
  04b9444  fmr 3, 27
  04b9448  mtctr 7
  04b944c  lfs 4, 180(3)
  04b9450  fadds 3, 3, 4
  04b9454  lfs 4, 4(6)
  04b9458  addic 3, 3, 16
  04b945c  lfs 5, 8(6)
  04b9460  lfs 6, 12(6)
  04b9464  addic 6, 6, 16
  04b9468  fadds 3, 3, 4
  04b946c  fadds 3, 3, 5
  04b9470  fadds 3, 3, 6
  04b9474  bdnz 0x4b944c
  04b9478  lis 3, 76
  04b947c  addi 3, 3, -29996
  04b9480  lfs 4, 36(3)
  04b9484  fadds 3, 3, 4
  04b9488  fmadds 1, 3, 1, 2
  04b948c  lfs 2, 72(31)
  04b9490  bl 0x5025e0
  04b9494  nop
  04b9498  fmuls 2, 29, 29
  04b949c  stfs 28, 116(1)
  04b94a0  fabs 4, 28
  04b94a4  fmadds 2, 30, 30, 2
  04b94a8  fsqrts 2, 2
  04b94ac  lwz 3, 116(1)
  04b94b0  lfs 3, 116(1)
  04b94b4  rlwinm 3, 3, 3, 29, 29
  04b94b8  fabs 3, 3
  04b94bc  fabs 5, 2
  04b94c0  stfs 2, 112(1)
  04b94c4  fsubs 2, 5, 4
  04b94c8  stfs 2, 120(1)
  04b94cc  lwz 4, 112(1)
  04b94d0  lfs 2, 112(1)
  04b94d4  lwz 5, 120(1)
  04b94d8  lfs 6, 120(1)
  04b94dc  fabs 2, 2
  04b94e0  rlwimi 3, 5, 2, 30, 30
  04b94e4  fsub 7, 6, 27
  04b94e8  fsub 6, 6, 27
  04b94ec  rlwimi 3, 4, 4, 28, 28
  04b94f0  ori 4, 29, 0
  04b94f4  rlwimi 4, 3, 2, 26, 28
  04b94f8  slwi 3, 3, 2
  04b94fc  clrldi 4, 4, 32
  04b9500  fsel 4, 7, 2, 4
  04b9504  lfsx 30, 29, 3
  04b9508  fsel 3, 6, 3, 5
  04b950c  lfs 2, 4(4)
  04b9510  fcmpu 0, 4, 27
  04b9514  bt 1, 0x4b951c
  04b9518  b 0x4b963c
  04b951c  fsubs 5, 3, 4
  04b9520  fadds 3, 3, 4
  04b9524  addic 3, 1, 16
  04b9528  li 6, 2
  04b952c  addic 4, 3, 132
  04b9530  addic 5, 3, 148
  04b9534  mtctr 6
  04b9538  fdivs 3, 5, 3
  04b953c  fmuls 4, 3, 3
  04b9540  stfs 3, 160(1)
  04b9544  stfs 3, 152(1)
  04b9548  stfs 3, 156(1)
  04b954c  stfs 3, 148(1)
  04b9550  lfs 6, 160(1)
  04b9554  lfs 7, 152(1)
  04b9558  lfs 8, 156(1)
  04b955c  fmuls 5, 4, 4
  04b9560  fmuls 7, 7, 4
  04b9564  fmuls 6, 6, 5
  04b9568  fmuls 3, 5, 5
  04b956c  fmuls 5, 8, 5
  04b9570  stfs 7, 152(1)
  04b9574  fmuls 4, 6, 4
  04b9578  stfs 5, 156(1)
  04b957c  stfs 4, 160(1)
  04b9580  lfs 4, 132(3)
  04b9584  fmuls 4, 4, 3
  04b9588  stfs 4, 148(3)
  04b958c  lfs 4, 4(4)
  04b9590  addic 3, 3, 8
  04b9594  addic 4, 4, 8
  04b9598  fmuls 4, 4, 3
  04b959c  stfs 4, 4(5)
  04b95a0  addic 5, 5, 8
  04b95a4  bdnz 0x4b9580
  04b95a8  li 5, 4
  04b95ac  ori 3, 1, 0
  04b95b0  mtctr 5
  04b95b4  lis 4, 115
  04b95b8  addic 5, 3, 148
  04b95bc  addic 4, 4, 22752
  04b95c0  ori 7, 5, 0
  04b95c4  lfs 3, 148(3)
  04b95c8  lfs 4, 0(4)
  04b95cc  fmuls 3, 3, 4
  04b95d0  lfs 4, 4(4)
  04b95d4  addic 4, 4, 8
  04b95d8  stfs 3, 148(3)
  04b95dc  lfs 3, 4(5)
  04b95e0  addic 3, 3, 8
  04b95e4  fmuls 3, 3, 4
  04b95e8  stfs 3, 4(5)
  04b95ec  addic 5, 5, 8
  04b95f0  bdnz 0x4b95c4
  04b95f4  ori 3, 1, 0
  04b95f8  mtctr 6
  04b95fc  lfs 3, 148(3)
  04b9600  lfs 4, 4(7)
  04b9604  fadds 3, 27, 3
  04b9608  lfs 5, 8(7)
  04b960c  lfs 27, 12(7)
  04b9610  addic 3, 3, 16
  04b9614  addic 7, 7, 16
  04b9618  fadds 3, 3, 4
  04b961c  fadds 3, 3, 5
  04b9620  fadds 27, 3, 27
  04b9624  bdnz 0x4b95fc
  04b9628  lis 3, 76
  04b962c  addi 3, 3, -29996
  04b9630  lfs 3, 36(3)
  04b9634  fadds 27, 27, 3
  04b9638  fmadds 27, 27, 30, 2
  04b963c  lis 3, 76
  04b9640  fneg 27, 27
  04b9644  addi 3, 3, -29996
  04b9648  lfs 2, 40(3)
  04b964c  fcmpu 0, 1, 2
  04b9650  cror 6, 0, 2
  04b9654  bt 6, 0x4b9660
  04b9658  fmr 1, 2
  04b965c  b 0x4b967c
  04b9660  lis 3, 76
  04b9664  addi 3, 3, -29996
  04b9668  lfs 2, 88(3)
  04b966c  fcmpu 0, 1, 2
  04b9670  cror 6, 1, 2
  04b9674  bt 6, 0x4b967c
  04b9678  fmr 1, 2
  04b967c  lis 3, 76
  04b9680  addi 3, 3, -29996
  04b9684  lfs 2, 92(3)
  04b9688  fcmpu 0, 27, 2
  04b968c  cror 6, 0, 2
  04b9690  bt 6, 0x4b969c
  04b9694  fmr 27, 2
  04b9698  b 0x4b96b8
  04b969c  lis 3, 76
  04b96a0  addi 3, 3, -29996
  04b96a4  lfs 2, 96(3)
  04b96a8  fcmpu 0, 27, 2
  04b96ac  cror 6, 1, 2
  04b96b0  bt 6, 0x4b96b8
  04b96b4  fmr 27, 2
  04b96b8  lis 3, 76
  04b96bc  addi 3, 3, -29996
  04b96c0  lfs 2, 100(3)
  04b96c4  fmuls 2, 1, 2
  04b96c8  stfs 2, 168(30)
  04b96cc  lfs 2, 104(3)
  04b96d0  stfs 27, 164(30)
  04b96d4  fmuls 1, 1, 2
  04b96d8  stfs 1, 296(30)
  04b96dc  lis 3, 151
  04b96e0  lbz 3, -16268(3)
  04b96e4  cmpwi 3, 0
  04b96e8  bt 2, 0x4b96f4
  04b96ec  lis 3, 16432
  04b96f0  stw 3, 176(30)
  04b96f4  lis 3, 76
  04b96f8  lis 29, 114
  04b96fc  addi 3, 3, -29996
  04b9700  addic 4, 30, 64
  04b9704  li 5, 0
  04b9708  lfs 30, 108(3)
  04b970c  lfs 2, -3060(29)
  04b9710  ori 3, 31, 0
  04b9714  fmuls 1, 2, 31
  04b9718  fmuls 2, 2, 30
  04b971c  bl 0x1167c8
  04b9720  nop
  04b9724  lfs 2, -3060(29)
  04b9728  addic 4, 30, 192
  04b972c  ori 3, 31, 0
  04b9730  fmuls 1, 2, 31
  04b9734  li 5, 1
  04b9738  fmuls 2, 2, 30
  04b973c  bl 0x1167c8
  04b9740  nop
  04b9744  ld 0, 368(1)
  04b9748  mtlr 0
  04b974c  lfd 27, 312(1)
  04b9750  lfd 28, 320(1)
  04b9754  lfd 29, 328(1)
  04b9758  lfd 30, 336(1)
  04b975c  lfd 31, 344(1)
  04b9760  ld 26, 264(1)
  04b9764  ld 27, 272(1)
  04b9768  ld 28, 280(1)
  04b976c  ld 29, 288(1)
  04b9770  ld 30, 296(1)
  04b9774  ld 31, 304(1)
  04b9778  addi 1, 1, 352
  04b977c  blr
