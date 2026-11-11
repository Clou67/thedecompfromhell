# game/update/moby1258.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1258_00229a58:   # 0x229a58, 0x14 bytes
  0229a58  lis 3, 119
  0229a5c  lis 4, 1
  0229a60  addic 3, 3, -11048
  0229a64  stw 4, 72(3)
  0229a68  blr

FUN_00229a90:   # 0x229a90, 0x54c bytes
  0229a90  stdu 1, -272(1)
  0229a94  mflr 0
  0229a98  std 0, 288(1)
  0229a9c  stfd 28, 240(1)
  0229aa0  stfd 29, 248(1)
  0229aa4  stfd 30, 256(1)
  0229aa8  stfd 31, 264(1)
  0229aac  std 31, 232(1)
  0229ab0  lis 4, 0
  0229ab4  std 26, 192(1)
  0229ab8  ori 31, 3, 0
  0229abc  li 26, 272
  0229ac0  li 3, 1258
  0229ac4  std 29, 216(1)
  0229ac8  std 28, 208(1)
  0229acc  addc 26, 1, 26
  0229ad0  ori 28, 9, 0
  0229ad4  std 30, 224(1)
  0229ad8  ori 29, 8, 0
  0229adc  std 27, 200(1)
  0229ae0  ori 30, 7, 0
  0229ae4  std 5, 64(26)
  0229ae8  std 6, 72(26)
  0229aec  bl 0xefa28
  0229af0  nop
  0229af4  ori 27, 3, 0
  0229af8  lfs 8, 64(26)
  0229afc  lfs 9, 72(26)
  0229b00  cmpwi 27, 0
  0229b04  lfs 12, 68(26)
  0229b08  lfs 13, 76(26)
  0229b0c  bt 2, 0x229fa0
  0229b10  ori 3, 31, 0
  0229b14  lwz 31, 120(27)
  0229b18  li 4, 255
  0229b1c  lis 6, 35
  0229b20  li 5, 1
  0229b24  addi 6, 6, -26000
  0229b28  stw 3, 24(31)
  0229b2c  stb 4, 48(27)
  0229b30  sth 4, 50(27)
  0229b34  stb 5, 49(27)
  0229b38  lfs 1, 0(6)
  0229b3c  lfs 2, 44(27)
  0229b40  fmuls 1, 2, 1
  0229b44  li 3, 0
  0229b48  lis 4, 115
  0229b4c  stfs 1, 44(27)
  0229b50  lfs 4, 4(6)
  0229b54  std 30, 80(26)
  0229b58  lfs 6, 84(26)
  0229b5c  std 29, 88(26)
  0229b60  fmuls 1, 6, 6
  0229b64  lfs 5, 80(26)
  0229b68  lfs 7, 88(26)
  0229b6c  stw 3, 64(27)
  0229b70  fabs 10, 7
  0229b74  lfs 0, 92(26)
  0229b78  rldicl 3, 29, 32, 32
  0229b7c  fmadds 1, 5, 5, 1
  0229b80  rlwinm 5, 3, 3, 29, 29
  0229b84  addic 3, 4, 22784
  0229b88  rldicl 4, 30, 32, 32
  0229b8c  fsqrts 1, 1
  0229b90  fabs 3, 1
  0229b94  stfs 1, 116(1)
  0229b98  fsubs 1, 3, 10
  0229b9c  stfs 1, 120(1)
  0229ba0  lwz 7, 116(1)
  0229ba4  lfs 1, 116(1)
  0229ba8  lfs 2, 8(6)
  0229bac  fabs 11, 1
  0229bb0  lwz 6, 120(1)
  0229bb4  lfs 1, 120(1)
  0229bb8  rlwimi 5, 6, 2, 30, 30
  0229bbc  fsub 31, 1, 4
  0229bc0  fsub 30, 1, 4
  0229bc4  rlwimi 5, 7, 4, 28, 28
  0229bc8  ori 6, 3, 0
  0229bcc  rlwimi 6, 5, 2, 26, 28
  0229bd0  slwi 5, 5, 2
  0229bd4  clrldi 6, 6, 32
  0229bd8  fsel 11, 31, 11, 10
  0229bdc  lfsx 1, 3, 5
  0229be0  fsel 10, 30, 10, 3
  0229be4  lfs 3, 4(6)
  0229be8  fcmpu 0, 11, 4
  0229bec  bt 1, 0x229bf8
  0229bf0  fmr 1, 4
  0229bf4  b 0x229d10
  0229bf8  fsubs 31, 10, 11
  0229bfc  fadds 10, 10, 11
  0229c00  addic 5, 1, 16
  0229c04  li 8, 2
  0229c08  addic 6, 5, 140
  0229c0c  addic 7, 5, 156
  0229c10  mtctr 8
  0229c14  fdivs 10, 31, 10
  0229c18  fmuls 11, 10, 10
  0229c1c  stfs 10, 168(1)
  0229c20  stfs 10, 160(1)
  0229c24  stfs 10, 164(1)
  0229c28  stfs 10, 156(1)
  0229c2c  lfs 30, 168(1)
  0229c30  lfs 29, 160(1)
  0229c34  lfs 28, 164(1)
  0229c38  fmuls 31, 11, 11
  0229c3c  fmuls 29, 29, 11
  0229c40  fmuls 30, 30, 31
  0229c44  fmuls 10, 31, 31
  0229c48  fmuls 31, 28, 31
  0229c4c  stfs 29, 160(1)
  0229c50  fmuls 11, 30, 11
  0229c54  stfs 31, 164(1)
  0229c58  stfs 11, 168(1)
  0229c5c  lfs 11, 140(5)
  0229c60  fmuls 11, 11, 10
  0229c64  stfs 11, 156(5)
  0229c68  lfs 11, 4(6)
  0229c6c  addic 5, 5, 8
  0229c70  addic 6, 6, 8
  0229c74  fmuls 11, 11, 10
  0229c78  stfs 11, 4(7)
  0229c7c  addic 7, 7, 8
  0229c80  bdnz 0x229c5c
  0229c84  li 7, 4
  0229c88  ori 5, 1, 0
  0229c8c  mtctr 7
  0229c90  lis 6, 115
  0229c94  addic 7, 5, 156
  0229c98  addic 6, 6, 22752
  0229c9c  ori 9, 7, 0
  0229ca0  lfs 10, 156(5)
  0229ca4  lfs 11, 0(6)
  0229ca8  fmuls 10, 10, 11
  0229cac  lfs 11, 4(6)
  0229cb0  addic 6, 6, 8
  0229cb4  stfs 10, 156(5)
  0229cb8  lfs 10, 4(7)
  0229cbc  addic 5, 5, 8
  0229cc0  fmuls 10, 10, 11
  0229cc4  stfs 10, 4(7)
  0229cc8  addic 7, 7, 8
  0229ccc  bdnz 0x229ca0
  0229cd0  fmr 10, 4
  0229cd4  ori 5, 1, 0
  0229cd8  mtctr 8
  0229cdc  lfs 11, 156(5)
  0229ce0  fadds 10, 10, 11
  0229ce4  addic 5, 5, 16
  0229ce8  lfs 11, 4(9)
  0229cec  lfs 31, 8(9)
  0229cf0  lfs 30, 12(9)
  0229cf4  addic 9, 9, 16
  0229cf8  fadds 10, 10, 11
  0229cfc  fadds 10, 10, 31
  0229d00  fadds 10, 10, 30
  0229d04  bdnz 0x229cdc
  0229d08  fadds 10, 10, 2
  0229d0c  fmadds 1, 10, 1, 3
  0229d10  fabs 10, 5
  0229d14  fabs 31, 6
  0229d18  fneg 1, 1
  0229d1c  rlwinm 5, 30, 3, 29, 29
  0229d20  fsubs 3, 10, 31
  0229d24  stfs 1, 68(27)
  0229d28  stfs 3, 112(1)
  0229d2c  lwz 6, 112(1)
  0229d30  lfs 1, 112(1)
  0229d34  rlwimi 5, 6, 2, 30, 30
  0229d38  fsub 11, 1, 4
  0229d3c  fsub 30, 1, 4
  0229d40  rlwimi 5, 4, 4, 28, 28
  0229d44  ori 4, 3, 0
  0229d48  rlwimi 4, 5, 2, 26, 28
  0229d4c  slwi 5, 5, 2
  0229d50  clrldi 4, 4, 32
  0229d54  fsel 11, 11, 10, 31
  0229d58  lfsx 1, 3, 5
  0229d5c  fsel 10, 30, 31, 10
  0229d60  lfs 3, 4(4)
  0229d64  fcmpu 0, 11, 4
  0229d68  bt 1, 0x229d70
  0229d6c  b 0x229e84
  0229d70  fsubs 31, 10, 11
  0229d74  fadds 10, 10, 11
  0229d78  addic 3, 1, 16
  0229d7c  li 7, 2
  0229d80  addic 4, 3, 108
  0229d84  addic 5, 3, 124
  0229d88  mtctr 7
  0229d8c  fdivs 10, 31, 10
  0229d90  fmuls 11, 10, 10
  0229d94  stfs 10, 136(1)
  0229d98  stfs 10, 128(1)
  0229d9c  stfs 10, 132(1)
  0229da0  stfs 10, 124(1)
  0229da4  lfs 30, 136(1)
  0229da8  lfs 29, 128(1)
  0229dac  lfs 28, 132(1)
  0229db0  fmuls 31, 11, 11
  0229db4  fmuls 29, 29, 11
  0229db8  fmuls 30, 30, 31
  0229dbc  fmuls 10, 31, 31
  0229dc0  fmuls 31, 28, 31
  0229dc4  stfs 29, 128(1)
  0229dc8  fmuls 11, 30, 11
  0229dcc  stfs 31, 132(1)
  0229dd0  stfs 11, 136(1)
  0229dd4  lfs 11, 108(3)
  0229dd8  fmuls 11, 11, 10
  0229ddc  stfs 11, 124(3)
  0229de0  lfs 11, 4(4)
  0229de4  addic 3, 3, 8
  0229de8  addic 4, 4, 8
  0229dec  fmuls 11, 11, 10
  0229df0  stfs 11, 4(5)
  0229df4  addic 5, 5, 8
  0229df8  bdnz 0x229dd4
  0229dfc  li 5, 4
  0229e00  ori 3, 1, 0
  0229e04  mtctr 5
  0229e08  lis 4, 115
  0229e0c  addic 5, 3, 124
  0229e10  addic 4, 4, 22752
  0229e14  ori 6, 5, 0
  0229e18  lfs 10, 124(3)
  0229e1c  lfs 11, 0(4)
  0229e20  fmuls 10, 10, 11
  0229e24  lfs 11, 4(4)
  0229e28  addic 4, 4, 8
  0229e2c  stfs 10, 124(3)
  0229e30  lfs 10, 4(5)
  0229e34  addic 3, 3, 8
  0229e38  fmuls 10, 10, 11
  0229e3c  stfs 10, 4(5)
  0229e40  addic 5, 5, 8
  0229e44  bdnz 0x229e18
  0229e48  ori 3, 1, 0
  0229e4c  mtctr 7
  0229e50  lfs 10, 124(3)
  0229e54  fadds 4, 4, 10
  0229e58  lfs 10, 4(6)
  0229e5c  addic 3, 3, 16
  0229e60  lfs 11, 8(6)
  0229e64  lfs 31, 12(6)
  0229e68  addic 6, 6, 16
  0229e6c  fadds 4, 4, 10
  0229e70  fadds 4, 4, 11
  0229e74  fadds 4, 4, 31
  0229e78  bdnz 0x229e50
  0229e7c  fadds 4, 4, 2
  0229e80  fmadds 4, 4, 1, 3
  0229e84  stfs 4, 72(27)
  0229e88  stfs 8, 16(27)
  0229e8c  lis 3, 35
  0229e90  stfs 12, 20(27)
  0229e94  stfs 9, 24(27)
  0229e98  addi 30, 3, -26000
  0229e9c  stfs 13, 28(27)
  0229ea0  stfs 5, 0(31)
  0229ea4  lis 3, 114
  0229ea8  stfs 6, 4(31)
  0229eac  stfs 7, 8(31)
  0229eb0  stfs 0, 12(31)
  0229eb4  lfs 1, 12(30)
  0229eb8  lfs 2, 16(30)
  0229ebc  lfs 3, -3052(3)
  0229ec0  fmuls 1, 3, 1
  0229ec4  fmuls 2, 3, 2
  0229ec8  bl 0xfcbe8
  0229ecc  nop
  0229ed0  li 3, 0
  0229ed4  stfs 1, 16(31)
  0229ed8  lis 4, 151
  0229edc  sth 28, 28(31)
  0229ee0  sth 28, 30(31)
  0229ee4  addic 4, 4, -25376
  0229ee8  stw 3, 20(31)
  0229eec  lfs 1, 20(27)
  0229ef0  lfs 2, 16(27)
  0229ef4  lfs 3, 132(4)
  0229ef8  lfs 4, 128(4)
  0229efc  fsubs 1, 1, 3
  0229f00  fsubs 2, 2, 4
  0229f04  lfs 3, 24(27)
  0229f08  lfs 4, 136(4)
  0229f0c  fsubs 3, 3, 4
  0229f10  stw 3, 36(31)
  0229f14  li 4, 64
  0229f18  stw 3, 40(31)
  0229f1c  lis 5, 12159
  0229f20  fmuls 1, 1, 1
  0229f24  sldi 3, 28, 2
  0229f28  ori 5, 5, 20303
  0229f2c  addc 3, 28, 3
  0229f30  li 7, -1
  0229f34  srawi 3, 3, 2
  0229f38  addze 6, 3
  0229f3c  fmadds 1, 2, 2, 1
  0229f40  extsw 29, 6
  0229f44  ori 3, 27, 0
  0229f48  ori 6, 29, 0
  0229f4c  fmadds 1, 3, 3, 1
  0229f50  fsqrts 1, 1
  0229f54  stfs 1, 32(31)
  0229f58  lhz 8, 52(27)
  0229f5c  stb 4, 35(27)
  0229f60  ori 4, 8, 512
  0229f64  sth 4, 52(27)
  0229f68  lfs 1, 20(30)
  0229f6c  bl 0x127ea8
  0229f70  nop
  0229f74  lis 5, 20351
  0229f78  ori 3, 27, 0
  0229f7c  lfs 1, 24(30)
  0229f80  ori 5, 5, 32639
  0229f84  ori 6, 29, 0
  0229f88  li 7, -1
  0229f8c  bl 0x127ea8
  0229f90  nop
  0229f94  ori 3, 27, 0
  0229f98  bl 0xf31a8
  0229f9c  nop
  0229fa0  ori 3, 27, 0
  0229fa4  ld 0, 288(1)
  0229fa8  mtlr 0
  0229fac  lfd 28, 240(1)
  0229fb0  lfd 29, 248(1)
  0229fb4  lfd 30, 256(1)
  0229fb8  lfd 31, 264(1)
  0229fbc  ld 26, 192(1)
  0229fc0  ld 27, 200(1)
  0229fc4  ld 28, 208(1)
  0229fc8  ld 29, 216(1)
  0229fcc  ld 30, 224(1)
  0229fd0  ld 31, 232(1)
  0229fd4  addi 1, 1, 272
  0229fd8  blr

UpdateMoby_1258:   # 0x22a010, 0x6f4 bytes
  022a010  stdu 1, -448(1)
  022a014  mflr 0
  022a018  std 0, 464(1)
  022a01c  stfd 22, 368(1)
  022a020  stfd 23, 376(1)
  022a024  stfd 24, 384(1)
  022a028  stfd 25, 392(1)
  022a02c  stfd 26, 400(1)
  022a030  stfd 27, 408(1)
  022a034  stfd 28, 416(1)
  022a038  stfd 29, 424(1)
  022a03c  stfd 30, 432(1)
  022a040  stfd 31, 440(1)
  022a044  std 27, 328(1)
  022a048  std 30, 352(1)
  022a04c  lis 27, 151
  022a050  lwz 30, 120(3)
  022a054  addic 27, 27, -25376
  022a058  std 31, 360(1)
  022a05c  lfs 1, 16(3)
  022a060  ori 31, 3, 0
  022a064  lfs 2, 128(27)
  022a068  lfs 3, 20(3)
  022a06c  lfs 4, 132(27)
  022a070  fsubs 2, 1, 2
  022a074  lfs 5, 24(3)
  022a078  lfs 6, 136(27)
  022a07c  stfs 1, 192(1)
  022a080  fsubs 4, 3, 4
  022a084  lfs 7, 28(3)
  022a088  fsubs 6, 5, 6
  022a08c  stfs 3, 196(1)
  022a090  stfs 5, 200(1)
  022a094  stfs 7, 204(1)
  022a098  lfs 7, 0(30)
  022a09c  lwz 4, 40(30)
  022a0a0  fadds 1, 1, 7
  022a0a4  cmpwi 4, 0
  022a0a8  fmuls 4, 4, 4
  022a0ac  stfs 1, 16(3)
  022a0b0  lfs 1, 4(30)
  022a0b4  fmadds 2, 2, 2, 4
  022a0b8  fadds 1, 3, 1
  022a0bc  fmadds 31, 6, 6, 2
  022a0c0  stfs 1, 20(3)
  022a0c4  lfs 1, 8(30)
  022a0c8  fadds 1, 5, 1
  022a0cc  fsqrts 31, 31
  022a0d0  std 29, 344(1)
  022a0d4  std 28, 336(1)
  022a0d8  std 26, 320(1)
  022a0dc  std 25, 312(1)
  022a0e0  stfs 1, 24(3)
  022a0e4  bf 2, 0x22a138
  022a0e8  lwz 3, 36(30)
  022a0ec  cmpwi 3, 0
  022a0f0  bt 2, 0x22a138
  022a0f4  lfs 1, 32(30)
  022a0f8  fcmpu 0, 31, 1
  022a0fc  cror 6, 0, 2
  022a100  bt 6, 0x22a138
  022a104  lis 3, 35
  022a108  addi 3, 3, -24612
  022a10c  lfs 1, 0(3)
  022a110  fcmpu 0, 31, 1
  022a114  cror 6, 1, 2
  022a118  bt 6, 0x22a138
  022a11c  li 3, 0
  022a120  li 4, 0
  022a124  ori 5, 31, 0
  022a128  bl 0x15d12c
  022a12c  nop
  022a130  li 3, 1
  022a134  stw 3, 40(30)
  022a138  lfs 1, 32(30)
  022a13c  fcmpu 0, 31, 1
  022a140  cror 6, 1, 2
  022a144  bt 6, 0x22a150
  022a148  li 3, 1
  022a14c  stw 3, 36(30)
  022a150  stfs 31, 32(30)
  022a154  lwz 3, 16(31)
  022a158  lis 4, 16384
  022a15c  lfs 31, 16(31)
  022a160  srawi 5, 3, 31
  022a164  srwi 6, 5, 1
  022a168  xor 3, 6, 3
  022a16c  subc 3, 3, 5
  022a170  cmpw 3, 4
  022a174  bt 0, 0x22a228
  022a178  lis 4, 17535
  022a17c  ori 4, 4, 16384
  022a180  cmpw 3, 4
  022a184  bt 1, 0x22a228
  022a188  lwz 5, 20(31)
  022a18c  lis 3, 17535
  022a190  lfs 2, 20(31)
  022a194  srawi 6, 5, 31
  022a198  lis 4, 16384
  022a19c  srwi 7, 6, 1
  022a1a0  ori 3, 3, 16384
  022a1a4  xor 5, 7, 5
  022a1a8  subc 5, 5, 6
  022a1ac  cmpw 1, 5, 3
  022a1b0  cmpw 5, 4
  022a1b4  cror 2, 0, 5
  022a1b8  bt 2, 0x22a228
  022a1bc  lwz 5, 24(31)
  022a1c0  lis 3, 17535
  022a1c4  lis 4, 16384
  022a1c8  srawi 6, 5, 31
  022a1cc  ori 3, 3, 16384
  022a1d0  srwi 7, 6, 1
  022a1d4  xor 5, 7, 5
  022a1d8  subc 5, 5, 6
  022a1dc  cmpw 1, 5, 3
  022a1e0  cmpw 5, 4
  022a1e4  cror 2, 0, 5
  022a1e8  bt 2, 0x22a228
  022a1ec  lis 3, 149
  022a1f0  addic 3, 3, 5056
  022a1f4  lfs 1, 324(3)
  022a1f8  lfs 3, 320(3)
  022a1fc  fsubs 1, 2, 1
  022a200  fsubs 3, 31, 3
  022a204  lis 3, 35
  022a208  addi 3, 3, -24612
  022a20c  fmuls 1, 1, 1
  022a210  fmadds 1, 3, 3, 1
  022a214  lfs 3, 4(3)
  022a218  fsqrts 1, 1
  022a21c  fcmpu 0, 1, 3
  022a220  cror 6, 0, 2
  022a224  bt 6, 0x22a238
  022a228  ori 3, 31, 0
  022a22c  bl 0xefb38
  022a230  nop
  022a234  b 0x22a6b0
  022a238  lbz 3, 188(31)
  022a23c  li 28, 0
  022a240  cmpwi 3, 0
  022a244  ori 29, 28, 0
  022a248  bf 2, 0x22a348
  022a24c  lfs 1, 132(27)
  022a250  lfs 4, 128(27)
  022a254  fsubs 2, 2, 1
  022a258  fsubs 4, 31, 4
  022a25c  lis 3, 16448
  022a260  lis 4, 7
  022a264  li 5, 1
  022a268  stw 3, 268(1)
  022a26c  lfs 1, 0(30)
  022a270  ori 3, 4, 1
  022a274  stw 31, 256(1)
  022a278  fmuls 3, 2, 2
  022a27c  stfs 1, 240(1)
  022a280  lfs 1, 4(30)
  022a284  stw 3, 260(1)
  022a288  lis 3, 35
  022a28c  stfs 1, 244(1)
  022a290  lfs 1, 8(30)
  022a294  addi 3, 3, -24612
  022a298  stw 5, 272(1)
  022a29c  stfs 1, 248(1)
  022a2a0  fmadds 3, 4, 4, 3
  022a2a4  lfs 1, 12(30)
  022a2a8  stfs 4, 240(1)
  022a2ac  stfs 1, 252(1)
  022a2b0  lfs 1, 8(3)
  022a2b4  fmr 31, 1
  022a2b8  fsqrts 5, 3
  022a2bc  fcmpu 0, 5, 31
  022a2c0  bt 2, 0x22a310
  022a2c4  frsqrte 1, 3
  022a2c8  lis 3, 35
  022a2cc  addi 3, 3, -24612
  022a2d0  lfs 5, 12(3)
  022a2d4  lfs 6, 16(3)
  022a2d8  fmuls 7, 3, 1
  022a2dc  fmuls 8, 5, 1
  022a2e0  fnmsubs 7, 7, 1, 6
  022a2e4  fmadds 1, 7, 8, 1
  022a2e8  fmuls 7, 3, 1
  022a2ec  fmuls 8, 5, 1
  022a2f0  fnmsubs 7, 7, 1, 6
  022a2f4  fmadds 1, 7, 8, 1
  022a2f8  fmuls 3, 3, 1
  022a2fc  fmuls 5, 5, 1
  022a300  fnmsubs 3, 3, 1, 6
  022a304  fmadds 1, 3, 5, 1
  022a308  fmuls 31, 4, 1
  022a30c  fmuls 1, 2, 1
  022a310  lis 3, 17839
  022a314  stfs 31, 240(1)
  022a318  lis 5, 16256
  022a31c  stfs 1, 244(1)
  022a320  ori 3, 3, 57190
  022a324  li 4, 1
  022a328  li 6, 3
  022a32c  stw 5, 248(1)
  022a330  stw 3, 252(1)
  022a334  addic 28, 1, 240
  022a338  stb 4, 264(1)
  022a33c  lhz 3, 166(31)
  022a340  stb 6, 265(1)
  022a344  sth 3, 266(1)
  022a348  addic 3, 30, 28
  022a34c  bl 0x4fffb4
  022a350  nop
  022a354  ori 4, 3, 0
  022a358  lbz 3, 188(31)
  022a35c  cmpwi 4, 0
  022a360  bt 2, 0x22a38c
  022a364  cmpwi 3, 0
  022a368  bf 2, 0x22a38c
  022a36c  li 3, 1
  022a370  stb 3, 188(31)
  022a374  lhz 3, 30(30)
  022a378  extsh 3, 3
  022a37c  srawi 3, 3, 2
  022a380  addze 3, 3
  022a384  sth 3, 28(30)
  022a388  b 0x22a3b4
  022a38c  lhz 4, 28(30)
  022a390  extsh 4, 4
  022a394  cmpwi 4, 0
  022a398  bt 1, 0x22a3b4
  022a39c  cmpwi 3, 0
  022a3a0  bt 2, 0x22a3b4
  022a3a4  ori 3, 31, 0
  022a3a8  bl 0xefb38
  022a3ac  nop
  022a3b0  b 0x22a6b0
  022a3b4  addic 26, 31, 16
  022a3b8  lwz 6, 24(30)
  022a3bc  addic 3, 1, 192
  022a3c0  li 5, 0
  022a3c4  ori 4, 26, 0
  022a3c8  ori 7, 28, 0
  022a3cc  bl 0x57820
  022a3d0  nop
  022a3d4  cmpwi 3, 0
  022a3d8  bt 2, 0x22a6b0
  022a3dc  lis 27, 161
  022a3e0  addic 27, 27, 2368
  022a3e4  lfs 1, 32(27)
  022a3e8  stfs 1, 16(31)
  022a3ec  lfs 1, 36(27)
  022a3f0  lbz 3, 188(31)
  022a3f4  stfs 1, 20(31)
  022a3f8  lfs 1, 40(27)
  022a3fc  cmpwi 3, 0
  022a400  stfs 1, 24(31)
  022a404  lfs 1, 44(27)
  022a408  stfs 1, 28(31)
  022a40c  bf 2, 0x22a624
  022a410  lis 3, 35
  022a414  ori 25, 29, 0
  022a418  addi 3, 3, -24612
  022a41c  addic 27, 27, 64
  022a420  lfs 23, 8(3)
  022a424  lfs 24, 20(3)
  022a428  lfs 25, 16(3)
  022a42c  lfs 26, 12(3)
  022a430  lfs 27, 0(3)
  022a434  lfs 28, 24(3)
  022a438  lfs 29, 28(3)
  022a43c  lfs 30, 32(3)
  022a440  lfs 31, 36(3)
  022a444  fmr 1, 24
  022a448  stw 29, 208(1)
  022a44c  stw 29, 212(1)
  022a450  fmr 2, 25
  022a454  stw 29, 216(1)
  022a458  stw 29, 220(1)
  022a45c  bl 0xfcbe8
  022a460  nop
  022a464  stfs 1, 208(1)
  022a468  fmr 2, 25
  022a46c  fmr 1, 24
  022a470  bl 0xfcbe8
  022a474  nop
  022a478  stfs 1, 212(1)
  022a47c  fmr 1, 24
  022a480  fmr 2, 25
  022a484  bl 0xfcbe8
  022a488  nop
  022a48c  stfs 1, 216(1)
  022a490  addic 3, 1, 224
  022a494  ori 4, 30, 0
  022a498  ori 5, 27, 0
  022a49c  bl 0x500608
  022a4a0  nop
  022a4a4  lfs 3, 228(1)
  022a4a8  lfs 4, 224(1)
  022a4ac  fmuls 1, 3, 3
  022a4b0  lfs 5, 212(1)
  022a4b4  lfs 6, 232(1)
  022a4b8  fmuls 2, 5, 5
  022a4bc  lfs 7, 208(1)
  022a4c0  lfs 8, 216(1)
  022a4c4  lis 3, 114
  022a4c8  lfs 9, 236(1)
  022a4cc  fmadds 1, 4, 4, 1
  022a4d0  fmadds 2, 7, 7, 2
  022a4d4  fmadds 1, 6, 6, 1
  022a4d8  fmadds 2, 8, 8, 2
  022a4dc  fsqrts 1, 1
  022a4e0  fsqrts 10, 2
  022a4e4  lfs 2, -3052(3)
  022a4e8  stfs 9, 220(1)
  022a4ec  fmuls 9, 1, 26
  022a4f0  fmuls 1, 2, 27
  022a4f4  fmuls 2, 2, 28
  022a4f8  fdivs 9, 9, 10
  022a4fc  fsub 11, 23, 10
  022a500  fsub 12, 23, 10
  022a504  fsub 13, 23, 10
  022a508  fsub 0, 10, 23
  022a50c  fsub 22, 10, 23
  022a510  fsub 10, 10, 23
  022a514  fmuls 8, 8, 9
  022a518  fmuls 5, 5, 9
  022a51c  fmuls 7, 7, 9
  022a520  fsel 9, 11, 23, 8
  022a524  fsel 11, 12, 23, 5
  022a528  fsel 12, 13, 23, 7
  022a52c  fsel 8, 0, 9, 8
  022a530  fsel 5, 22, 11, 5
  022a534  fsel 7, 10, 12, 7
  022a538  fadds 6, 6, 8
  022a53c  fadds 3, 3, 5
  022a540  fadds 4, 4, 7
  022a544  stfs 6, 216(1)
  022a548  stfs 3, 212(1)
  022a54c  stfs 4, 208(1)
  022a550  bl 0xfcbe8
  022a554  nop
  022a558  lfs 2, 212(1)
  022a55c  lfs 3, 208(1)
  022a560  fmuls 4, 2, 2
  022a564  lfs 5, 216(1)
  022a568  lis 3, 114
  022a56c  fmadds 4, 3, 3, 4
  022a570  lfs 6, -3056(3)
  022a574  fmuls 7, 6, 29
  022a578  fmuls 6, 6, 30
  022a57c  fmadds 4, 5, 5, 4
  022a580  fctiwz 7, 7
  022a584  fctiwz 6, 6
  022a588  fsqrts 4, 4
  022a58c  stfd 7, 288(1)
  022a590  lwz 3, 292(1)
  022a594  stfd 6, 288(1)
  022a598  lwz 4, 292(1)
  022a59c  extsw 3, 3
  022a5a0  extsw 4, 4
  022a5a4  fdivs 1, 1, 4
  022a5a8  fsub 6, 23, 4
  022a5ac  fsub 7, 23, 4
  022a5b0  fsub 8, 23, 4
  022a5b4  fsub 9, 4, 23
  022a5b8  fsub 10, 4, 23
  022a5bc  fsub 4, 4, 23
  022a5c0  fmuls 3, 3, 1
  022a5c4  fmuls 2, 2, 1
  022a5c8  fmuls 1, 5, 1
  022a5cc  fsel 5, 6, 23, 3
  022a5d0  fsel 6, 7, 23, 2
  022a5d4  fsel 7, 8, 23, 1
  022a5d8  fsel 3, 9, 5, 3
  022a5dc  fsel 2, 10, 6, 2
  022a5e0  fsel 1, 4, 7, 1
  022a5e4  stfs 3, 208(1)
  022a5e8  stfs 2, 212(1)
  022a5ec  stfs 1, 216(1)
  022a5f0  bl 0xfe484
  022a5f4  nop
  022a5f8  lis 5, 32559
  022a5fc  ori 6, 3, 0
  022a600  fmr 1, 31
  022a604  addic 4, 1, 208
  022a608  ori 3, 26, 0
  022a60c  ori 5, 5, 20335
  022a610  bl 0x128248
  022a614  nop
  022a618  addic 25, 25, 1
  022a61c  cmpwi 25, 5
  022a620  bt 0, 0x22a444
  022a624  lis 3, 35
  022a628  li 7, -1
  022a62c  addi 4, 3, -24612
  022a630  li 6, 1
  022a634  ori 3, 31, 0
  022a638  li 5, 0
  022a63c  li 8, 4
  022a640  lfs 31, 40(4)
  022a644  lfs 1, 8(4)
  022a648  li 9, 3
  022a64c  lfs 4, 44(4)
  022a650  li 10, 6
  022a654  lfs 5, 16(4)
  022a658  fmr 3, 31
  022a65c  lfs 6, 48(4)
  022a660  fmr 2, 1
  022a664  std 7, 144(1)
  022a668  ori 4, 30, 0
  022a66c  std 29, 160(1)
  022a670  fmr 7, 1
  022a674  std 6, 168(1)
  022a678  std 7, 176(1)
  022a67c  std 29, 184(1)
  022a680  bl 0x10e030
  022a684  nop
  022a688  ori 3, 26, 0
  022a68c  fmr 1, 31
  022a690  li 5, 16
  022a694  ori 6, 31, 0
  022a698  ori 7, 28, 0
  022a69c  bl 0x5e598
  022a6a0  nop
  022a6a4  ori 3, 31, 0
  022a6a8  bl 0xefb38
  022a6ac  nop
  022a6b0  ld 0, 464(1)
  022a6b4  mtlr 0
  022a6b8  lfd 22, 368(1)
  022a6bc  lfd 23, 376(1)
  022a6c0  lfd 24, 384(1)
  022a6c4  lfd 25, 392(1)
  022a6c8  lfd 26, 400(1)
  022a6cc  lfd 27, 408(1)
  022a6d0  lfd 28, 416(1)
  022a6d4  lfd 29, 424(1)
  022a6d8  lfd 30, 432(1)
  022a6dc  lfd 31, 440(1)
  022a6e0  ld 25, 312(1)
  022a6e4  ld 26, 320(1)
  022a6e8  ld 27, 328(1)
  022a6ec  ld 28, 336(1)
  022a6f0  ld 29, 344(1)
  022a6f4  ld 30, 352(1)
  022a6f8  ld 31, 360(1)
  022a6fc  addi 1, 1, 448
  022a700  blr
