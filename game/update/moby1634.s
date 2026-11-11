# game/update/moby1634.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1634_002a5770:   # 0x2a5770, 0x14 bytes
  02a5770  lis 3, 123
  02a5774  lis 4, 1
  02a5778  addic 3, 3, -13948
  02a577c  stw 4, 72(3)
  02a5780  blr

M1634_002a57a0:   # 0x2a57a0, 0x1c4 bytes
  02a57a0  stdu 1, -176(1)
  02a57a4  mflr 0
  02a57a8  std 0, 192(1)
  02a57ac  stfd 30, 160(1)
  02a57b0  stfd 31, 168(1)
  02a57b4  std 28, 128(1)
  02a57b8  ori 28, 3, 0
  02a57bc  std 31, 152(1)
  02a57c0  li 3, 1634
  02a57c4  std 30, 144(1)
  02a57c8  ori 31, 6, 0
  02a57cc  std 29, 136(1)
  02a57d0  ori 30, 5, 0
  02a57d4  std 27, 120(1)
  02a57d8  std 26, 112(1)
  02a57dc  ori 29, 4, 0
  02a57e0  bl 0xefa28
  02a57e4  nop
  02a57e8  ori 27, 3, 0
  02a57ec  cmpwi 27, 0
  02a57f0  bt 2, 0x2a5930
  02a57f4  li 5, 255
  02a57f8  ori 26, 30, 0
  02a57fc  li 3, 64
  02a5800  li 6, 1
  02a5804  lwz 30, 120(27)
  02a5808  stb 5, 48(27)
  02a580c  li 4, 128
  02a5810  sth 5, 50(27)
  02a5814  stb 6, 49(27)
  02a5818  bl 0xfe484
  02a581c  nop
  02a5820  stb 3, 35(27)
  02a5824  li 4, 32
  02a5828  ori 3, 27, 0
  02a582c  li 5, 96
  02a5830  li 6, 16
  02a5834  bl 0xf1ec8
  02a5838  nop
  02a583c  lfs 1, 0(28)
  02a5840  lis 3, 42
  02a5844  stfs 1, 16(27)
  02a5848  lfs 1, 4(28)
  02a584c  addi 3, 3, 22408
  02a5850  stfs 1, 20(27)
  02a5854  lfs 1, 8(28)
  02a5858  stfs 1, 24(27)
  02a585c  lfs 1, 12(28)
  02a5860  lis 28, 114
  02a5864  stfs 1, 28(27)
  02a5868  lfs 1, 0(29)
  02a586c  stfs 1, 0(30)
  02a5870  lfs 1, 4(29)
  02a5874  stfs 1, 4(30)
  02a5878  lfs 1, 8(29)
  02a587c  stfs 1, 8(30)
  02a5880  lfs 1, 12(29)
  02a5884  stfs 1, 12(30)
  02a5888  lfs 31, 0(3)
  02a588c  lfs 30, 4(3)
  02a5890  lfs 3, -3052(28)
  02a5894  fmuls 1, 3, 31
  02a5898  fmuls 2, 3, 30
  02a589c  bl 0xfcbe8
  02a58a0  nop
  02a58a4  stfs 1, 16(30)
  02a58a8  lfs 2, -3052(28)
  02a58ac  fmuls 1, 2, 31
  02a58b0  fmuls 2, 2, 30
  02a58b4  bl 0xfcbe8
  02a58b8  nop
  02a58bc  stfs 1, 20(30)
  02a58c0  sth 26, 24(30)
  02a58c4  cmpwi 31, 0
  02a58c8  sth 26, 26(30)
  02a58cc  lfs 1, 44(27)
  02a58d0  bf 2, 0x2a58f8
  02a58d4  lis 3, 42
  02a58d8  addi 3, 3, 22408
  02a58dc  lfs 1, 8(3)
  02a58e0  lfs 2, 12(3)
  02a58e4  bl 0xfcbe8
  02a58e8  nop
  02a58ec  lfs 2, 44(27)
  02a58f0  fmuls 1, 2, 1
  02a58f4  stfs 1, 44(27)
  02a58f8  lis 3, 42
  02a58fc  stfs 1, 28(30)
  02a5900  addi 3, 3, 22408
  02a5904  lfs 1, 16(3)
  02a5908  lfs 2, 20(3)
  02a590c  bl 0xfcbe8
  02a5910  nop
  02a5914  lfs 2, 44(27)
  02a5918  stb 31, 188(27)
  02a591c  ori 3, 27, 0
  02a5920  fmuls 1, 2, 1
  02a5924  stfs 1, 44(27)
  02a5928  bl 0xf31a8
  02a592c  nop
  02a5930  ori 3, 27, 0
  02a5934  ld 0, 192(1)
  02a5938  mtlr 0
  02a593c  lfd 30, 160(1)
  02a5940  lfd 31, 168(1)
  02a5944  ld 26, 112(1)
  02a5948  ld 27, 120(1)
  02a594c  ld 28, 128(1)
  02a5950  ld 29, 136(1)
  02a5954  ld 30, 144(1)
  02a5958  ld 31, 152(1)
  02a595c  addi 1, 1, 176
  02a5960  blr

M1634_002a5988:   # 0x2a5988, 0x1c8 bytes
  02a5988  stdu 1, -192(1)
  02a598c  mflr 0
  02a5990  std 0, 208(1)
  02a5994  stfd 28, 160(1)
  02a5998  stfd 29, 168(1)
  02a599c  stfd 30, 176(1)
  02a59a0  stfd 31, 184(1)
  02a59a4  std 31, 152(1)
  02a59a8  lis 4, 42
  02a59ac  std 30, 144(1)
  02a59b0  ori 31, 3, 0
  02a59b4  std 29, 136(1)
  02a59b8  addi 30, 4, 22884
  02a59bc  bl 0xfcc68
  02a59c0  nop
  02a59c4  lfs 31, 0(30)
  02a59c8  fmr 30, 1
  02a59cc  lis 3, 123
  02a59d0  fmr 1, 31
  02a59d4  lfs 2, -13724(3)
  02a59d8  bl 0xfcbe8
  02a59dc  nop
  02a59e0  fmr 29, 1
  02a59e4  fmr 1, 31
  02a59e8  lis 29, 123
  02a59ec  lfs 2, -13740(29)
  02a59f0  bl 0xfcbe8
  02a59f4  nop
  02a59f8  lis 3, 123
  02a59fc  fmr 31, 1
  02a5a00  lfs 1, -13740(29)
  02a5a04  lfs 2, -13736(3)
  02a5a08  bl 0xfcbe8
  02a5a0c  nop
  02a5a10  lis 3, 123
  02a5a14  lis 4, 123
  02a5a18  fmr 28, 1
  02a5a1c  lwz 3, -13732(3)
  02a5a20  lwz 4, -13728(4)
  02a5a24  extsw 3, 3
  02a5a28  extsw 4, 4
  02a5a2c  bl 0xfe484
  02a5a30  nop
  02a5a34  lfs 1, 4(30)
  02a5a38  lfs 2, 8(30)
  02a5a3c  fadds 1, 30, 1
  02a5a40  lfs 3, 12(30)
  02a5a44  fsubs 4, 2, 30
  02a5a48  lis 4, 123
  02a5a4c  lis 5, 123
  02a5a50  ori 8, 3, 0
  02a5a54  addic 3, 1, 112
  02a5a58  fsubs 2, 2, 1
  02a5a5c  fsub 6, 30, 4
  02a5a60  fsubs 5, 3, 1
  02a5a64  fsubs 3, 3, 30
  02a5a68  fsub 7, 1, 2
  02a5a6c  fsel 4, 6, 4, 30
  02a5a70  lfs 6, 16(30)
  02a5a74  fsel 1, 7, 2, 1
  02a5a78  fsub 2, 3, 4
  02a5a7c  fsub 8, 5, 1
  02a5a80  fsel 2, 2, 3, 4
  02a5a84  lfs 3, 20(30)
  02a5a88  lfs 4, 24(30)
  02a5a8c  lfs 9, 28(30)
  02a5a90  lfs 10, 16(31)
  02a5a94  fsel 1, 8, 5, 1
  02a5a98  fmuls 5, 2, 2
  02a5a9c  fmuls 7, 1, 1
  02a5aa0  fmuls 8, 5, 2
  02a5aa4  fmuls 11, 7, 1
  02a5aa8  fmuls 12, 5, 8
  02a5aac  fmadds 2, 8, 6, 2
  02a5ab0  lfs 8, 20(31)
  02a5ab4  fmuls 13, 7, 11
  02a5ab8  fmadds 1, 11, 6, 1
  02a5abc  fmuls 6, 5, 12
  02a5ac0  fmadds 2, 12, 3, 2
  02a5ac4  fmuls 11, 7, 13
  02a5ac8  fmadds 1, 13, 3, 1
  02a5acc  fmuls 3, 5, 6
  02a5ad0  fmadds 2, 6, 4, 2
  02a5ad4  lfs 5, 24(31)
  02a5ad8  fmuls 6, 7, 11
  02a5adc  fmadds 1, 11, 4, 1
  02a5ae0  fmadds 2, 3, 9, 2
  02a5ae4  fmadds 1, 6, 9, 1
  02a5ae8  fmadds 2, 2, 29, 8
  02a5aec  fmadds 1, 1, 29, 10
  02a5af0  stfs 2, 116(1)
  02a5af4  lwz 4, -13748(4)
  02a5af8  lwz 5, -13744(5)
  02a5afc  extsw 4, 4
  02a5b00  fmr 2, 28
  02a5b04  extsw 5, 5
  02a5b08  stfs 1, 112(1)
  02a5b0c  lfs 3, 32(30)
  02a5b10  fmr 1, 31
  02a5b14  fadds 3, 5, 3
  02a5b18  stfs 3, 120(1)
  02a5b1c  bl 0x12f6b0
  02a5b20  nop
  02a5b24  ld 0, 208(1)
  02a5b28  mtlr 0
  02a5b2c  lfd 28, 160(1)
  02a5b30  lfd 29, 168(1)
  02a5b34  lfd 30, 176(1)
  02a5b38  lfd 31, 184(1)
  02a5b3c  ld 29, 136(1)
  02a5b40  ld 30, 144(1)
  02a5b44  ld 31, 152(1)
  02a5b48  addi 1, 1, 192
  02a5b4c  blr

UpdateMoby_1634:   # 0x2a5ba8, 0xe44 bytes
  02a5ba8  stdu 1, -560(1)
  02a5bac  mflr 0
  02a5bb0  std 0, 576(1)
  02a5bb4  stfd 17, 440(1)
  02a5bb8  stfd 18, 448(1)
  02a5bbc  stfd 19, 456(1)
  02a5bc0  stfd 20, 464(1)
  02a5bc4  stfd 21, 472(1)
  02a5bc8  stfd 22, 480(1)
  02a5bcc  stfd 23, 488(1)
  02a5bd0  stfd 24, 496(1)
  02a5bd4  stfd 25, 504(1)
  02a5bd8  stfd 26, 512(1)
  02a5bdc  stfd 27, 520(1)
  02a5be0  stfd 28, 528(1)
  02a5be4  stfd 29, 536(1)
  02a5be8  stfd 30, 544(1)
  02a5bec  stfd 31, 552(1)
  02a5bf0  lfs 1, 16(3)
  02a5bf4  std 31, 432(1)
  02a5bf8  lfs 2, 20(3)
  02a5bfc  ori 31, 3, 0
  02a5c00  std 27, 400(1)
  02a5c04  lfs 3, 24(3)
  02a5c08  lis 27, 42
  02a5c0c  std 30, 424(1)
  02a5c10  lfs 4, 28(3)
  02a5c14  lwz 30, 120(3)
  02a5c18  lbz 3, 188(3)
  02a5c1c  addi 27, 27, 23376
  02a5c20  stfs 1, 128(1)
  02a5c24  stfs 2, 132(1)
  02a5c28  cmpwi 3, 1
  02a5c2c  stfs 3, 136(1)
  02a5c30  std 29, 416(1)
  02a5c34  std 28, 408(1)
  02a5c38  std 26, 392(1)
  02a5c3c  std 25, 384(1)
  02a5c40  std 24, 376(1)
  02a5c44  std 23, 368(1)
  02a5c48  std 22, 360(1)
  02a5c4c  std 21, 352(1)
  02a5c50  stfs 4, 140(1)
  02a5c54  bf 2, 0x2a6808
  02a5c58  lis 3, 123
  02a5c5c  lis 4, 123
  02a5c60  li 29, 0
  02a5c64  ori 26, 29, 0
  02a5c68  lfs 5, -13764(3)
  02a5c6c  lfs 6, -13760(4)
  02a5c70  stfs 5, 172(1)
  02a5c74  stfs 6, 188(1)
  02a5c78  stfs 1, 144(1)
  02a5c7c  stfs 2, 148(1)
  02a5c80  stfs 3, 152(1)
  02a5c84  stfs 4, 156(1)
  02a5c88  lfs 31, 0(27)
  02a5c8c  lfs 30, 4(27)
  02a5c90  fmr 1, 31
  02a5c94  fmr 2, 30
  02a5c98  bl 0xfcbe8
  02a5c9c  nop
  02a5ca0  lfs 2, 144(1)
  02a5ca4  fadds 3, 2, 1
  02a5ca8  fmr 1, 31
  02a5cac  fmr 2, 30
  02a5cb0  stfs 3, 144(1)
  02a5cb4  bl 0xfcbe8
  02a5cb8  nop
  02a5cbc  lfs 2, 148(1)
  02a5cc0  fadds 3, 2, 1
  02a5cc4  fmr 1, 31
  02a5cc8  fmr 2, 30
  02a5ccc  stfs 3, 148(1)
  02a5cd0  bl 0xfcbe8
  02a5cd4  nop
  02a5cd8  lfs 2, 152(1)
  02a5cdc  li 3, 160
  02a5ce0  vspltisw 2, 0
  02a5ce4  lis 4, 123
  02a5ce8  fadds 1, 2, 1
  02a5cec  lis 5, 114
  02a5cf0  stfs 1, 152(1)
  02a5cf4  stvx 2, 3, 1
  02a5cf8  lfs 1, -13804(4)
  02a5cfc  lfs 2, -3052(5)
  02a5d00  lfs 29, 8(27)
  02a5d04  fmuls 2, 1, 2
  02a5d08  lfs 28, 12(27)
  02a5d0c  fmuls 1, 2, 29
  02a5d10  fmuls 2, 2, 28
  02a5d14  bl 0xfcbe8
  02a5d18  nop
  02a5d1c  lis 3, 123
  02a5d20  stfs 1, 168(1)
  02a5d24  lfs 2, -13776(3)
  02a5d28  fneg 1, 2
  02a5d2c  bl 0xfcbe8
  02a5d30  nop
  02a5d34  lwz 3, 0(30)
  02a5d38  lwz 4, 4(30)
  02a5d3c  lfs 2, 0(30)
  02a5d40  lfs 3, 4(30)
  02a5d44  fabs 2, 2
  02a5d48  fabs 3, 3
  02a5d4c  lfs 27, 16(27)
  02a5d50  rlwinm 4, 4, 3, 29, 29
  02a5d54  fmuls 31, 1, 27
  02a5d58  lis 28, 115
  02a5d5c  addic 28, 28, 22784
  02a5d60  fsubs 4, 2, 3
  02a5d64  stfs 4, 220(1)
  02a5d68  lfs 26, 20(27)
  02a5d6c  lfs 30, 24(27)
  02a5d70  lwz 5, 220(1)
  02a5d74  lfs 1, 220(1)
  02a5d78  rlwimi 4, 5, 2, 30, 30
  02a5d7c  fsub 4, 1, 26
  02a5d80  fsub 5, 1, 26
  02a5d84  rlwimi 4, 3, 4, 28, 28
  02a5d88  ori 3, 28, 0
  02a5d8c  rlwimi 3, 4, 2, 26, 28
  02a5d90  slwi 4, 4, 2
  02a5d94  clrldi 3, 3, 32
  02a5d98  fsel 4, 4, 2, 3
  02a5d9c  lfsx 1, 28, 4
  02a5da0  fsel 3, 5, 3, 2
  02a5da4  lfs 2, 4(3)
  02a5da8  fcmpu 0, 4, 26
  02a5dac  bt 1, 0x2a5db8
  02a5db0  fmr 1, 26
  02a5db4  b 0x2a5ed0
  02a5db8  fsubs 5, 3, 4
  02a5dbc  fadds 3, 3, 4
  02a5dc0  addic 3, 1, 16
  02a5dc4  li 7, 2
  02a5dc8  addic 4, 3, 304
  02a5dcc  addic 5, 3, 320
  02a5dd0  mtctr 7
  02a5dd4  fdivs 3, 5, 3
  02a5dd8  fmuls 4, 3, 3
  02a5ddc  stfs 3, 332(1)
  02a5de0  stfs 3, 324(1)
  02a5de4  stfs 3, 328(1)
  02a5de8  stfs 3, 320(1)
  02a5dec  lfs 6, 332(1)
  02a5df0  lfs 7, 324(1)
  02a5df4  lfs 8, 328(1)
  02a5df8  fmuls 5, 4, 4
  02a5dfc  fmuls 7, 7, 4
  02a5e00  fmuls 6, 6, 5
  02a5e04  fmuls 3, 5, 5
  02a5e08  fmuls 5, 8, 5
  02a5e0c  stfs 7, 324(1)
  02a5e10  fmuls 4, 6, 4
  02a5e14  stfs 5, 328(1)
  02a5e18  stfs 4, 332(1)
  02a5e1c  lfs 4, 304(3)
  02a5e20  fmuls 4, 4, 3
  02a5e24  stfs 4, 320(3)
  02a5e28  lfs 4, 4(4)
  02a5e2c  addic 3, 3, 8
  02a5e30  addic 4, 4, 8
  02a5e34  fmuls 4, 4, 3
  02a5e38  stfs 4, 4(5)
  02a5e3c  addic 5, 5, 8
  02a5e40  bdnz 0x2a5e1c
  02a5e44  li 5, 4
  02a5e48  ori 3, 1, 0
  02a5e4c  mtctr 5
  02a5e50  lis 4, 115
  02a5e54  addic 5, 3, 320
  02a5e58  addic 4, 4, 22752
  02a5e5c  ori 6, 5, 0
  02a5e60  lfs 3, 320(3)
  02a5e64  lfs 4, 0(4)
  02a5e68  fmuls 3, 3, 4
  02a5e6c  lfs 4, 4(4)
  02a5e70  addic 4, 4, 8
  02a5e74  stfs 3, 320(3)
  02a5e78  lfs 3, 4(5)
  02a5e7c  addic 3, 3, 8
  02a5e80  fmuls 3, 3, 4
  02a5e84  stfs 3, 4(5)
  02a5e88  addic 5, 5, 8
  02a5e8c  bdnz 0x2a5e60
  02a5e90  fmr 3, 26
  02a5e94  ori 3, 1, 0
  02a5e98  mtctr 7
  02a5e9c  lfs 4, 320(3)
  02a5ea0  fadds 3, 3, 4
  02a5ea4  addic 3, 3, 16
  02a5ea8  lfs 4, 4(6)
  02a5eac  lfs 5, 8(6)
  02a5eb0  lfs 6, 12(6)
  02a5eb4  addic 6, 6, 16
  02a5eb8  fadds 3, 3, 4
  02a5ebc  fadds 3, 3, 5
  02a5ec0  fadds 3, 3, 6
  02a5ec4  bdnz 0x2a5e9c
  02a5ec8  fadds 3, 3, 30
  02a5ecc  fmadds 1, 3, 1, 2
  02a5ed0  fmr 2, 31
  02a5ed4  bl 0x502578
  02a5ed8  nop
  02a5edc  lfs 25, 28(27)
  02a5ee0  lfs 24, 32(27)
  02a5ee4  fadds 1, 1, 25
  02a5ee8  lfs 23, 36(27)
  02a5eec  lis 3, 114
  02a5ef0  lfs 22, 40(27)
  02a5ef4  lfs 21, 44(27)
  02a5ef8  lfs 20, 48(27)
  02a5efc  fsubs 2, 24, 1
  02a5f00  fsubs 3, 23, 1
  02a5f04  fsub 4, 1, 2
  02a5f08  fsel 1, 4, 2, 1
  02a5f0c  fsub 2, 3, 1
  02a5f10  fsel 1, 2, 3, 1
  02a5f14  lfs 2, -3052(3)
  02a5f18  lis 3, 123
  02a5f1c  lfs 19, 52(27)
  02a5f20  lfs 5, -13816(3)
  02a5f24  fmuls 2, 5, 2
  02a5f28  fmuls 3, 1, 1
  02a5f2c  fmuls 4, 3, 1
  02a5f30  fmuls 5, 3, 4
  02a5f34  fmadds 1, 4, 22, 1
  02a5f38  fmuls 4, 3, 5
  02a5f3c  fmadds 1, 5, 21, 1
  02a5f40  fmuls 3, 3, 4
  02a5f44  fmadds 1, 4, 20, 1
  02a5f48  fmadds 1, 3, 19, 1
  02a5f4c  fmuls 1, 2, 1
  02a5f50  stfs 1, 176(1)
  02a5f54  lwz 3, 0(30)
  02a5f58  lwz 4, 4(30)
  02a5f5c  lfs 1, 0(30)
  02a5f60  lfs 2, 4(30)
  02a5f64  fabs 3, 1
  02a5f68  fabs 2, 2
  02a5f6c  rlwinm 4, 4, 3, 29, 29
  02a5f70  fsubs 1, 3, 2
  02a5f74  stfs 1, 216(1)
  02a5f78  lwz 5, 216(1)
  02a5f7c  lfs 1, 216(1)
  02a5f80  rlwimi 4, 5, 2, 30, 30
  02a5f84  fsub 4, 1, 26
  02a5f88  fsub 5, 1, 26
  02a5f8c  rlwimi 4, 3, 4, 28, 28
  02a5f90  ori 3, 28, 0
  02a5f94  rlwimi 3, 4, 2, 26, 28
  02a5f98  slwi 4, 4, 2
  02a5f9c  clrldi 3, 3, 32
  02a5fa0  fsel 4, 4, 3, 2
  02a5fa4  lfsx 1, 28, 4
  02a5fa8  fsel 3, 5, 2, 3
  02a5fac  lfs 2, 4(3)
  02a5fb0  fcmpu 0, 4, 26
  02a5fb4  bt 1, 0x2a5fc0
  02a5fb8  fmr 1, 26
  02a5fbc  b 0x2a60d8
  02a5fc0  fsubs 5, 3, 4
  02a5fc4  fadds 3, 3, 4
  02a5fc8  addic 3, 1, 16
  02a5fcc  li 7, 2
  02a5fd0  addic 4, 3, 272
  02a5fd4  addic 5, 3, 288
  02a5fd8  mtctr 7
  02a5fdc  fdivs 3, 5, 3
  02a5fe0  fmuls 4, 3, 3
  02a5fe4  stfs 3, 300(1)
  02a5fe8  stfs 3, 292(1)
  02a5fec  stfs 3, 296(1)
  02a5ff0  stfs 3, 288(1)
  02a5ff4  lfs 6, 300(1)
  02a5ff8  lfs 7, 292(1)
  02a5ffc  lfs 8, 296(1)
  02a6000  fmuls 5, 4, 4
  02a6004  fmuls 7, 7, 4
  02a6008  fmuls 6, 6, 5
  02a600c  fmuls 3, 5, 5
  02a6010  fmuls 5, 8, 5
  02a6014  stfs 7, 292(1)
  02a6018  fmuls 4, 6, 4
  02a601c  stfs 5, 296(1)
  02a6020  stfs 4, 300(1)
  02a6024  lfs 4, 272(3)
  02a6028  fmuls 4, 4, 3
  02a602c  stfs 4, 288(3)
  02a6030  lfs 4, 4(4)
  02a6034  addic 3, 3, 8
  02a6038  addic 4, 4, 8
  02a603c  fmuls 4, 4, 3
  02a6040  stfs 4, 4(5)
  02a6044  addic 5, 5, 8
  02a6048  bdnz 0x2a6024
  02a604c  li 5, 4
  02a6050  ori 3, 1, 0
  02a6054  mtctr 5
  02a6058  lis 4, 115
  02a605c  addic 5, 3, 288
  02a6060  addic 4, 4, 22752
  02a6064  ori 6, 5, 0
  02a6068  lfs 3, 288(3)
  02a606c  lfs 4, 0(4)
  02a6070  fmuls 3, 3, 4
  02a6074  lfs 4, 4(4)
  02a6078  addic 4, 4, 8
  02a607c  stfs 3, 288(3)
  02a6080  lfs 3, 4(5)
  02a6084  addic 3, 3, 8
  02a6088  fmuls 3, 3, 4
  02a608c  stfs 3, 4(5)
  02a6090  addic 5, 5, 8
  02a6094  bdnz 0x2a6068
  02a6098  fmr 3, 26
  02a609c  ori 3, 1, 0
  02a60a0  mtctr 7
  02a60a4  lfs 4, 288(3)
  02a60a8  fadds 3, 3, 4
  02a60ac  addic 3, 3, 16
  02a60b0  lfs 4, 4(6)
  02a60b4  lfs 5, 8(6)
  02a60b8  lfs 6, 12(6)
  02a60bc  addic 6, 6, 16
  02a60c0  fadds 3, 3, 4
  02a60c4  fadds 3, 3, 5
  02a60c8  fadds 3, 3, 6
  02a60cc  bdnz 0x2a60a4
  02a60d0  fadds 3, 3, 30
  02a60d4  fmadds 1, 3, 1, 2
  02a60d8  fmr 2, 31
  02a60dc  bl 0x502578
  02a60e0  nop
  02a60e4  fsubs 2, 24, 1
  02a60e8  fsubs 3, 23, 1
  02a60ec  lis 3, 123
  02a60f0  lis 4, 114
  02a60f4  fsub 4, 1, 2
  02a60f8  fsel 1, 4, 2, 1
  02a60fc  lfs 4, -13816(3)
  02a6100  lfs 5, -3052(4)
  02a6104  lis 3, 123
  02a6108  lfs 6, -13812(3)
  02a610c  fsub 2, 3, 1
  02a6110  stw 26, 184(1)
  02a6114  fsel 1, 2, 3, 1
  02a6118  fmuls 3, 4, 5
  02a611c  fmuls 4, 1, 1
  02a6120  fmuls 2, 4, 1
  02a6124  fmuls 7, 4, 2
  02a6128  fmadds 1, 2, 22, 1
  02a612c  fmuls 2, 6, 5
  02a6130  fmuls 5, 4, 7
  02a6134  fmadds 6, 7, 21, 1
  02a6138  fmuls 1, 2, 29
  02a613c  fmuls 2, 2, 28
  02a6140  fmuls 4, 4, 5
  02a6144  fmadds 5, 5, 20, 6
  02a6148  fmadds 4, 4, 19, 5
  02a614c  fmuls 3, 3, 4
  02a6150  stfs 3, 180(1)
  02a6154  bl 0xfcbe8
  02a6158  nop
  02a615c  lis 3, 123
  02a6160  lis 4, 123
  02a6164  stfs 1, 184(1)
  02a6168  lis 5, 251
  02a616c  lfs 31, 56(27)
  02a6170  lwz 3, -13840(3)
  02a6174  lwz 4, -13836(4)
  02a6178  lfs 1, -6048(5)
  02a617c  extsw 25, 3
  02a6180  extsw 24, 4
  02a6184  fmuls 2, 1, 31
  02a6188  bl 0xfcbe8
  02a618c  nop
  02a6190  lis 23, 114
  02a6194  lfs 2, -3056(23)
  02a6198  fmuls 1, 1, 2
  02a619c  bl 0x502758
  02a61a0  nop
  02a61a4  lis 4, 123
  02a61a8  lfs 29, 60(27)
  02a61ac  ori 22, 3, 0
  02a61b0  lfs 1, -13824(4)
  02a61b4  fmuls 2, 1, 29
  02a61b8  bl 0xfcbe8
  02a61bc  nop
  02a61c0  lfs 2, -3056(23)
  02a61c4  fmuls 1, 1, 2
  02a61c8  bl 0x502758
  02a61cc  nop
  02a61d0  lis 4, 123
  02a61d4  ori 21, 3, 0
  02a61d8  lfs 1, -13820(4)
  02a61dc  fmuls 2, 1, 29
  02a61e0  bl 0xfcbe8
  02a61e4  nop
  02a61e8  lfs 2, -3056(23)
  02a61ec  fmuls 1, 1, 2
  02a61f0  bl 0x502758
  02a61f4  nop
  02a61f8  li 6, -1
  02a61fc  ori 10, 3, 0
  02a6200  addic 5, 1, 176
  02a6204  ori 7, 24, 0
  02a6208  std 6, 112(1)
  02a620c  addic 4, 1, 160
  02a6210  ori 9, 21, 0
  02a6214  addic 3, 1, 144
  02a6218  ori 6, 25, 0
  02a621c  ori 8, 22, 0
  02a6220  bl 0x1206e8
  02a6224  nop
  02a6228  addic 29, 29, 1
  02a622c  lfs 1, 16(31)
  02a6230  lfs 2, 20(31)
  02a6234  cmpwi 29, 2
  02a6238  lfs 3, 24(31)
  02a623c  lfs 4, 28(31)
  02a6240  bt 0, 0x2a5c78
  02a6244  lis 3, 123
  02a6248  lis 4, 123
  02a624c  ori 29, 26, 0
  02a6250  lfs 5, -13756(3)
  02a6254  lfs 6, -13752(4)
  02a6258  stfs 5, 172(1)
  02a625c  stfs 6, 188(1)
  02a6260  stfs 1, 192(1)
  02a6264  stfs 2, 196(1)
  02a6268  stfs 3, 200(1)
  02a626c  stfs 4, 204(1)
  02a6270  lfs 28, 64(27)
  02a6274  lfs 18, 68(27)
  02a6278  fmr 1, 28
  02a627c  fmr 2, 18
  02a6280  bl 0xfcbe8
  02a6284  nop
  02a6288  lfs 2, 192(1)
  02a628c  fadds 3, 2, 1
  02a6290  fmr 1, 28
  02a6294  fmr 2, 18
  02a6298  stfs 3, 192(1)
  02a629c  bl 0xfcbe8
  02a62a0  nop
  02a62a4  lfs 2, 196(1)
  02a62a8  fadds 3, 2, 1
  02a62ac  fmr 1, 28
  02a62b0  fmr 2, 18
  02a62b4  stfs 3, 196(1)
  02a62b8  bl 0xfcbe8
  02a62bc  nop
  02a62c0  lfs 2, 200(1)
  02a62c4  lis 3, 123
  02a62c8  fadds 3, 2, 1
  02a62cc  lfs 2, -13768(3)
  02a62d0  fneg 1, 2
  02a62d4  stfs 3, 200(1)
  02a62d8  bl 0xfcbe8
  02a62dc  nop
  02a62e0  vspltisw 2, 0
  02a62e4  li 3, 160
  02a62e8  lis 4, 123
  02a62ec  lis 5, 114
  02a62f0  stvx 2, 3, 1
  02a62f4  lfs 1, -13788(4)
  02a62f8  lfs 2, -3052(5)
  02a62fc  lfs 18, 72(27)
  02a6300  fmuls 2, 1, 2
  02a6304  lfs 17, 76(27)
  02a6308  fmuls 1, 2, 18
  02a630c  fmuls 2, 2, 17
  02a6310  bl 0xfcbe8
  02a6314  nop
  02a6318  lis 3, 123
  02a631c  stfs 1, 168(1)
  02a6320  lfs 2, -13772(3)
  02a6324  fneg 1, 2
  02a6328  bl 0xfcbe8
  02a632c  nop
  02a6330  lwz 3, 0(30)
  02a6334  lwz 4, 4(30)
  02a6338  lfs 2, 0(30)
  02a633c  lfs 3, 4(30)
  02a6340  fabs 2, 2
  02a6344  fabs 3, 3
  02a6348  fmuls 28, 1, 27
  02a634c  rlwinm 4, 4, 3, 29, 29
  02a6350  fsubs 4, 2, 3
  02a6354  stfs 4, 212(1)
  02a6358  lwz 5, 212(1)
  02a635c  lfs 1, 212(1)
  02a6360  rlwimi 4, 5, 2, 30, 30
  02a6364  fsub 4, 1, 26
  02a6368  fsub 5, 1, 26
  02a636c  rlwimi 4, 3, 4, 28, 28
  02a6370  ori 3, 28, 0
  02a6374  rlwimi 3, 4, 2, 26, 28
  02a6378  slwi 4, 4, 2
  02a637c  clrldi 3, 3, 32
  02a6380  fsel 4, 4, 2, 3
  02a6384  lfsx 1, 28, 4
  02a6388  fsel 3, 5, 3, 2
  02a638c  lfs 2, 4(3)
  02a6390  fcmpu 0, 4, 26
  02a6394  bt 1, 0x2a63a0
  02a6398  fmr 1, 26
  02a639c  b 0x2a64b8
  02a63a0  fsubs 5, 3, 4
  02a63a4  fadds 3, 3, 4
  02a63a8  addic 3, 1, 16
  02a63ac  li 6, 2
  02a63b0  addic 4, 3, 240
  02a63b4  addic 5, 3, 256
  02a63b8  mtctr 6
  02a63bc  fdivs 3, 5, 3
  02a63c0  fmuls 4, 3, 3
  02a63c4  stfs 3, 268(1)
  02a63c8  stfs 3, 260(1)
  02a63cc  stfs 3, 264(1)
  02a63d0  stfs 3, 256(1)
  02a63d4  lfs 6, 268(1)
  02a63d8  lfs 7, 260(1)
  02a63dc  lfs 8, 264(1)
  02a63e0  fmuls 5, 4, 4
  02a63e4  fmuls 7, 7, 4
  02a63e8  fmuls 6, 6, 5
  02a63ec  fmuls 3, 5, 5
  02a63f0  fmuls 5, 8, 5
  02a63f4  stfs 7, 260(1)
  02a63f8  fmuls 4, 6, 4
  02a63fc  stfs 5, 264(1)
  02a6400  stfs 4, 268(1)
  02a6404  lfs 4, 240(3)
  02a6408  fmuls 4, 4, 3
  02a640c  stfs 4, 256(3)
  02a6410  lfs 4, 4(4)
  02a6414  addic 3, 3, 8
  02a6418  addic 4, 4, 8
  02a641c  fmuls 4, 4, 3
  02a6420  stfs 4, 4(5)
  02a6424  addic 5, 5, 8
  02a6428  bdnz 0x2a6404
  02a642c  li 5, 4
  02a6430  ori 3, 1, 0
  02a6434  mtctr 5
  02a6438  lis 4, 115
  02a643c  addic 5, 3, 256
  02a6440  addic 4, 4, 22752
  02a6444  ori 7, 5, 0
  02a6448  lfs 3, 256(3)
  02a644c  lfs 4, 0(4)
  02a6450  fmuls 3, 3, 4
  02a6454  lfs 4, 4(4)
  02a6458  addic 4, 4, 8
  02a645c  stfs 3, 256(3)
  02a6460  lfs 3, 4(5)
  02a6464  addic 3, 3, 8
  02a6468  fmuls 3, 3, 4
  02a646c  stfs 3, 4(5)
  02a6470  addic 5, 5, 8
  02a6474  bdnz 0x2a6448
  02a6478  fmr 3, 26
  02a647c  ori 3, 1, 0
  02a6480  mtctr 6
  02a6484  lfs 4, 256(3)
  02a6488  fadds 3, 3, 4
  02a648c  addic 3, 3, 16
  02a6490  lfs 4, 4(7)
  02a6494  lfs 5, 8(7)
  02a6498  lfs 6, 12(7)
  02a649c  addic 7, 7, 16
  02a64a0  fadds 3, 3, 4
  02a64a4  fadds 3, 3, 5
  02a64a8  fadds 3, 3, 6
  02a64ac  bdnz 0x2a6484
  02a64b0  fadds 3, 3, 30
  02a64b4  fmadds 1, 3, 1, 2
  02a64b8  fmr 2, 28
  02a64bc  bl 0x502578
  02a64c0  nop
  02a64c4  fadds 1, 1, 25
  02a64c8  lis 3, 114
  02a64cc  fsubs 2, 24, 1
  02a64d0  fsubs 3, 23, 1
  02a64d4  fsub 4, 1, 2
  02a64d8  fsel 1, 4, 2, 1
  02a64dc  lfs 4, -3052(3)
  02a64e0  lis 3, 123
  02a64e4  fsub 2, 3, 1
  02a64e8  fsel 1, 2, 3, 1
  02a64ec  lfs 3, -13784(3)
  02a64f0  fmuls 3, 3, 4
  02a64f4  fmuls 2, 1, 1
  02a64f8  fmuls 4, 2, 1
  02a64fc  fmuls 5, 2, 4
  02a6500  fmadds 1, 4, 22, 1
  02a6504  fmuls 4, 2, 5
  02a6508  fmadds 1, 5, 21, 1
  02a650c  fmuls 2, 2, 4
  02a6510  fmadds 1, 4, 20, 1
  02a6514  fmadds 1, 2, 19, 1
  02a6518  fmuls 1, 3, 1
  02a651c  stfs 1, 176(1)
  02a6520  lwz 3, 0(30)
  02a6524  lwz 4, 4(30)
  02a6528  lfs 1, 0(30)
  02a652c  lfs 2, 4(30)
  02a6530  fabs 3, 1
  02a6534  fabs 2, 2
  02a6538  rlwinm 4, 4, 3, 29, 29
  02a653c  fsubs 1, 3, 2
  02a6540  stfs 1, 208(1)
  02a6544  lwz 5, 208(1)
  02a6548  lfs 1, 208(1)
  02a654c  rlwimi 4, 5, 2, 30, 30
  02a6550  fsub 4, 1, 26
  02a6554  fsub 5, 1, 26
  02a6558  rlwimi 4, 3, 4, 28, 28
  02a655c  ori 3, 28, 0
  02a6560  rlwimi 3, 4, 2, 26, 28
  02a6564  slwi 4, 4, 2
  02a6568  clrldi 3, 3, 32
  02a656c  fsel 4, 4, 3, 2
  02a6570  lfsx 1, 28, 4
  02a6574  fsel 3, 5, 2, 3
  02a6578  lfs 2, 4(3)
  02a657c  fcmpu 0, 4, 26
  02a6580  bt 1, 0x2a658c
  02a6584  fmr 1, 26
  02a6588  b 0x2a66a4
  02a658c  fsubs 5, 3, 4
  02a6590  fadds 3, 3, 4
  02a6594  addic 3, 1, 16
  02a6598  li 7, 2
  02a659c  addic 5, 3, 224
  02a65a0  addic 4, 3, 208
  02a65a4  mtctr 7
  02a65a8  fdivs 3, 5, 3
  02a65ac  fmuls 4, 3, 3
  02a65b0  stfs 3, 236(1)
  02a65b4  stfs 3, 228(1)
  02a65b8  stfs 3, 232(1)
  02a65bc  stfs 3, 224(1)
  02a65c0  lfs 6, 236(1)
  02a65c4  lfs 7, 228(1)
  02a65c8  lfs 8, 232(1)
  02a65cc  fmuls 5, 4, 4
  02a65d0  fmuls 7, 7, 4
  02a65d4  fmuls 6, 6, 5
  02a65d8  fmuls 3, 5, 5
  02a65dc  fmuls 5, 8, 5
  02a65e0  stfs 7, 228(1)
  02a65e4  fmuls 4, 6, 4
  02a65e8  stfs 5, 232(1)
  02a65ec  stfs 4, 236(1)
  02a65f0  lfs 4, 208(3)
  02a65f4  fmuls 4, 4, 3
  02a65f8  stfs 4, 224(3)
  02a65fc  lfs 4, 4(4)
  02a6600  addic 4, 4, 8
  02a6604  fmuls 4, 4, 3
  02a6608  addic 3, 3, 8
  02a660c  stfs 4, 4(5)
  02a6610  addic 5, 5, 8
  02a6614  bdnz 0x2a65f0
  02a6618  li 5, 4
  02a661c  ori 3, 1, 0
  02a6620  mtctr 5
  02a6624  lis 4, 115
  02a6628  addic 5, 3, 224
  02a662c  addic 4, 4, 22752
  02a6630  ori 6, 5, 0
  02a6634  lfs 3, 224(3)
  02a6638  lfs 4, 0(4)
  02a663c  fmuls 3, 3, 4
  02a6640  lfs 4, 4(4)
  02a6644  addic 4, 4, 8
  02a6648  stfs 3, 224(3)
  02a664c  lfs 3, 4(5)
  02a6650  addic 3, 3, 8
  02a6654  fmuls 3, 3, 4
  02a6658  stfs 3, 4(5)
  02a665c  addic 5, 5, 8
  02a6660  bdnz 0x2a6634
  02a6664  ori 3, 1, 0
  02a6668  fmr 3, 26
  02a666c  mtctr 7
  02a6670  lfs 4, 224(3)
  02a6674  fadds 3, 3, 4
  02a6678  lfs 4, 4(6)
  02a667c  addic 3, 3, 16
  02a6680  lfs 5, 8(6)
  02a6684  lfs 6, 12(6)
  02a6688  addic 6, 6, 16
  02a668c  fadds 3, 3, 4
  02a6690  fadds 3, 3, 5
  02a6694  fadds 3, 3, 6
  02a6698  bdnz 0x2a6670
  02a669c  fadds 3, 3, 30
  02a66a0  fmadds 1, 3, 1, 2
  02a66a4  fmr 2, 28
  02a66a8  bl 0x502578
  02a66ac  nop
  02a66b0  fsubs 2, 24, 1
  02a66b4  fsubs 3, 23, 1
  02a66b8  lis 3, 123
  02a66bc  lis 4, 114
  02a66c0  fsub 4, 1, 2
  02a66c4  fsel 1, 4, 2, 1
  02a66c8  lfs 4, -13784(3)
  02a66cc  lis 3, 123
  02a66d0  fsub 2, 3, 1
  02a66d4  fsel 1, 2, 3, 1
  02a66d8  lfs 2, -3052(4)
  02a66dc  lfs 6, -13780(3)
  02a66e0  fmuls 4, 4, 2
  02a66e4  fmuls 2, 6, 2
  02a66e8  stw 26, 184(1)
  02a66ec  fmuls 3, 1, 1
  02a66f0  fmuls 5, 3, 1
  02a66f4  fmuls 6, 3, 5
  02a66f8  fmadds 5, 5, 22, 1
  02a66fc  fmuls 1, 2, 18
  02a6700  fmuls 2, 2, 17
  02a6704  fmuls 7, 3, 6
  02a6708  fmadds 5, 6, 21, 5
  02a670c  fmuls 3, 3, 7
  02a6710  fmadds 5, 7, 20, 5
  02a6714  fmadds 3, 3, 19, 5
  02a6718  fmuls 3, 4, 3
  02a671c  stfs 3, 180(1)
  02a6720  bl 0xfcbe8
  02a6724  nop
  02a6728  lis 3, 123
  02a672c  stfs 1, 184(1)
  02a6730  lis 4, 123
  02a6734  lis 5, 251
  02a6738  lwz 3, -13832(3)
  02a673c  lwz 4, -13828(4)
  02a6740  lfs 1, -6044(5)
  02a6744  extsw 25, 3
  02a6748  extsw 24, 4
  02a674c  fmuls 2, 1, 31
  02a6750  bl 0xfcbe8
  02a6754  nop
  02a6758  lis 23, 114
  02a675c  lfs 2, -3056(23)
  02a6760  fmuls 1, 1, 2
  02a6764  bl 0x502758
  02a6768  nop
  02a676c  lis 4, 123
  02a6770  ori 22, 3, 0
  02a6774  lfs 1, -13800(4)
  02a6778  fmuls 2, 1, 29
  02a677c  bl 0xfcbe8
  02a6780  nop
  02a6784  lfs 2, -3056(23)
  02a6788  fmuls 1, 1, 2
  02a678c  bl 0x502758
  02a6790  nop
  02a6794  lis 4, 123
  02a6798  ori 21, 3, 0
  02a679c  lfs 1, -13796(4)
  02a67a0  fmuls 2, 1, 29
  02a67a4  bl 0xfcbe8
  02a67a8  nop
  02a67ac  lfs 2, -3056(23)
  02a67b0  fmuls 1, 1, 2
  02a67b4  bl 0x502758
  02a67b8  nop
  02a67bc  li 9, -1
  02a67c0  ori 10, 3, 0
  02a67c4  ori 6, 25, 0
  02a67c8  ori 7, 24, 0
  02a67cc  std 9, 112(1)
  02a67d0  addic 4, 1, 160
  02a67d4  ori 8, 22, 0
  02a67d8  addic 5, 1, 176
  02a67dc  addic 3, 1, 192
  02a67e0  ori 9, 21, 0
  02a67e4  bl 0x1206e8
  02a67e8  nop
  02a67ec  addic 29, 29, 1
  02a67f0  lfs 1, 16(31)
  02a67f4  lfs 2, 20(31)
  02a67f8  cmpwi 29, 2
  02a67fc  lfs 3, 24(31)
  02a6800  lfs 4, 28(31)
  02a6804  bt 0, 0x2a6260
  02a6808  lfs 1, 64(31)
  02a680c  lfs 2, 16(30)
  02a6810  bl 0x502578
  02a6814  nop
  02a6818  stfs 1, 64(31)
  02a681c  lfs 1, 68(31)
  02a6820  lfs 2, 20(30)
  02a6824  bl 0x502578
  02a6828  nop
  02a682c  stfs 1, 68(31)
  02a6830  lfs 1, 16(31)
  02a6834  lfs 2, 0(30)
  02a6838  fadds 1, 1, 2
  02a683c  lfs 2, 20(31)
  02a6840  lfs 3, 24(31)
  02a6844  lis 3, 114
  02a6848  stfs 1, 16(31)
  02a684c  lfs 1, 4(30)
  02a6850  fadds 1, 2, 1
  02a6854  stfs 1, 20(31)
  02a6858  lfs 1, 8(30)
  02a685c  fadds 1, 3, 1
  02a6860  stfs 1, 24(31)
  02a6864  lfs 1, 80(27)
  02a6868  lfs 2, 8(30)
  02a686c  lfs 3, -3048(3)
  02a6870  fnmsubs 1, 3, 1, 2
  02a6874  stfs 1, 8(30)
  02a6878  lwz 3, 16(31)
  02a687c  cmpwi 3, 0
  02a6880  bt 0, 0x2a689c
  02a6884  lwz 3, 20(31)
  02a6888  cmpwi 3, 0
  02a688c  bt 0, 0x2a689c
  02a6890  lwz 3, 24(31)
  02a6894  cmpwi 3, 0
  02a6898  bf 0, 0x2a68ac
  02a689c  ori 3, 31, 0
  02a68a0  bl 0xefb38
  02a68a4  nop
  02a68a8  b 0x2a6974
  02a68ac  lhz 3, 26(30)
  02a68b0  lhz 4, 24(30)
  02a68b4  extsh 3, 3
  02a68b8  extsh 4, 4
  02a68bc  srawi 5, 3, 2
  02a68c0  addze 5, 5
  02a68c4  cmpw 4, 5
  02a68c8  bf 0, 0x2a6904
  02a68cc  srawi 3, 3, 2
  02a68d0  addze 3, 3
  02a68d4  extsw 3, 3
  02a68d8  bl 0x502730
  02a68dc  nop
  02a68e0  lhz 3, 24(30)
  02a68e4  fmr 31, 1
  02a68e8  extsh 3, 3
  02a68ec  bl 0x502730
  02a68f0  nop
  02a68f4  lfs 2, 28(30)
  02a68f8  fmuls 1, 2, 1
  02a68fc  fdivs 1, 1, 31
  02a6900  stfs 1, 44(31)
  02a6904  addic 3, 30, 24
  02a6908  bl 0x4fffb4
  02a690c  nop
  02a6910  cmpwi 3, 0
  02a6914  bt 2, 0x2a6928
  02a6918  ori 3, 31, 0
  02a691c  bl 0xefb38
  02a6920  nop
  02a6924  b 0x2a6974
  02a6928  lbz 3, 188(31)
  02a692c  cmpwi 3, 1
  02a6930  bf 2, 0x2a6974
  02a6934  lis 4, 151
  02a6938  addic 3, 1, 128
  02a693c  addic 6, 4, -25376
  02a6940  addic 4, 31, 16
  02a6944  li 5, 2
  02a6948  li 7, 0
  02a694c  lwz 6, 8320(6)
  02a6950  bl 0x57820
  02a6954  nop
  02a6958  cmpwi 3, 0
  02a695c  bt 2, 0x2a6974
  02a6960  ori 3, 31, 0
  02a6964  bl 0x2a5988
  02a6968  ori 3, 31, 0
  02a696c  bl 0xefb38
  02a6970  nop
  02a6974  ld 0, 576(1)
  02a6978  mtlr 0
  02a697c  lfd 17, 440(1)
  02a6980  lfd 18, 448(1)
  02a6984  lfd 19, 456(1)
  02a6988  lfd 20, 464(1)
  02a698c  lfd 21, 472(1)
  02a6990  lfd 22, 480(1)
  02a6994  lfd 23, 488(1)
  02a6998  lfd 24, 496(1)
  02a699c  lfd 25, 504(1)
  02a69a0  lfd 26, 512(1)
  02a69a4  lfd 27, 520(1)
  02a69a8  lfd 28, 528(1)
  02a69ac  lfd 29, 536(1)
  02a69b0  lfd 30, 544(1)
  02a69b4  lfd 31, 552(1)
  02a69b8  ld 21, 352(1)
  02a69bc  ld 22, 360(1)
  02a69c0  ld 23, 368(1)
  02a69c4  ld 24, 376(1)
  02a69c8  ld 25, 384(1)
  02a69cc  ld 26, 392(1)
  02a69d0  ld 27, 400(1)
  02a69d4  ld 28, 408(1)
  02a69d8  ld 29, 416(1)
  02a69dc  ld 30, 424(1)
  02a69e0  ld 31, 432(1)
  02a69e4  addi 1, 1, 560
  02a69e8  blr

M1634_002a69ec:   # 0x2a69ec, 0x14 bytes
  02a69ec  lis 3, 123
  02a69f0  lis 4, 1
  02a69f4  addic 3, 3, -13716
  02a69f8  stw 4, 72(3)
  02a69fc  blr
