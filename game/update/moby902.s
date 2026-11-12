# game/update/moby902.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M977_004a56cc:   # 0x4a56cc, 0x14 bytes
  04a56cc  lis 3, 141
  04a56d0  lis 4, 1
  04a56d4  addic 3, 3, -15932
  04a56d8  stw 4, 72(3)
  04a56dc  blr

M977_004a56e8:   # 0x4a56e8, 0x1a0 bytes
  04a56e8  mulli 8, 3, 4512
  04a56ec  lis 4, 74
  04a56f0  lis 7, 141
  04a56f4  addi 5, 4, 22240
  04a56f8  addic 7, 7, -15744
  04a56fc  extsw 8, 8
  04a5700  li 10, 255
  04a5704  addc 4, 7, 8
  04a5708  lfs 2, 0(5)
  04a570c  ori 6, 7, 0
  04a5710  lfs 1, 4(5)
  04a5714  li 9, 0
  04a5718  addic 5, 6, 4
  04a571c  stb 10, 12(4)
  04a5720  stb 10, 14(4)
  04a5724  stb 10, 13(4)
  04a5728  stb 10, 15(4)
  04a572c  stb 10, 16(4)
  04a5730  stb 10, 17(4)
  04a5734  stb 10, 18(4)
  04a5738  stb 10, 19(4)
  04a573c  cmpw 3, 9
  04a5740  bt 2, 0x4a5870
  04a5744  lfsx 4, 7, 8
  04a5748  lfs 3, 0(6)
  04a574c  fsubs 4, 4, 3
  04a5750  lfs 3, 4(4)
  04a5754  lfs 5, 0(5)
  04a5758  fsubs 3, 3, 5
  04a575c  fabs 5, 4
  04a5760  fcmpu 0, 5, 2
  04a5764  cror 6, 1, 2
  04a5768  bt 6, 0x4a57a0
  04a576c  fsubs 4, 3, 1
  04a5770  fabs 4, 4
  04a5774  fcmpu 0, 4, 2
  04a5778  cror 6, 1, 2
  04a577c  bt 6, 0x4a5784
  04a5780  stb 9, 12(4)
  04a5784  fadds 3, 3, 1
  04a5788  fabs 3, 3
  04a578c  fcmpu 0, 3, 2
  04a5790  cror 6, 1, 2
  04a5794  bt 6, 0x4a5870
  04a5798  stb 9, 14(4)
  04a579c  b 0x4a5870
  04a57a0  fabs 5, 3
  04a57a4  fcmpu 0, 5, 2
  04a57a8  cror 6, 1, 2
  04a57ac  bt 6, 0x4a57e4
  04a57b0  fsubs 3, 4, 1
  04a57b4  fabs 3, 3
  04a57b8  fcmpu 0, 3, 2
  04a57bc  cror 6, 1, 2
  04a57c0  bt 6, 0x4a57c8
  04a57c4  stb 9, 13(4)
  04a57c8  fadds 3, 4, 1
  04a57cc  fabs 3, 3
  04a57d0  fcmpu 0, 3, 2
  04a57d4  cror 6, 1, 2
  04a57d8  bt 6, 0x4a5870
  04a57dc  stb 9, 15(4)
  04a57e0  b 0x4a5870
  04a57e4  fadds 5, 4, 1
  04a57e8  fabs 5, 5
  04a57ec  fcmpu 0, 5, 2
  04a57f0  cror 6, 1, 2
  04a57f4  bt 6, 0x4a582c
  04a57f8  fsubs 4, 3, 1
  04a57fc  fabs 4, 4
  04a5800  fcmpu 0, 4, 2
  04a5804  cror 6, 1, 2
  04a5808  bt 6, 0x4a5810
  04a580c  stb 9, 17(4)
  04a5810  fadds 3, 3, 1
  04a5814  fabs 3, 3
  04a5818  fcmpu 0, 3, 2
  04a581c  cror 6, 1, 2
  04a5820  bt 6, 0x4a5870
  04a5824  stb 9, 19(4)
  04a5828  b 0x4a5870
  04a582c  fsubs 4, 4, 1
  04a5830  fabs 4, 4
  04a5834  fcmpu 0, 4, 2
  04a5838  cror 6, 1, 2
  04a583c  bt 6, 0x4a5870
  04a5840  fsubs 4, 3, 1
  04a5844  fabs 4, 4
  04a5848  fcmpu 0, 4, 2
  04a584c  cror 6, 1, 2
  04a5850  bt 6, 0x4a5858
  04a5854  stb 9, 16(4)
  04a5858  fadds 3, 3, 1
  04a585c  fabs 3, 3
  04a5860  fcmpu 0, 3, 2
  04a5864  cror 6, 1, 2
  04a5868  bt 6, 0x4a5870
  04a586c  stb 9, 18(4)
  04a5870  addic 9, 9, 1
  04a5874  addic 6, 6, 4512
  04a5878  cmpwi 9, 36
  04a587c  addic 5, 5, 4512
  04a5880  bt 0, 0x4a573c
  04a5884  blr

UpdateMoby_902:   # 0x4a58e8, 0xc30 bytes
  04a58e8  stdu 1, -256(1)
  04a58ec  mflr 0
  04a58f0  std 0, 272(1)
  04a58f4  stfd 27, 216(1)
  04a58f8  stfd 28, 224(1)
  04a58fc  stfd 29, 232(1)
  04a5900  stfd 30, 240(1)
  04a5904  stfd 31, 248(1)
  04a5908  std 30, 200(1)
  04a590c  std 31, 208(1)
  04a5910  lwz 30, 120(3)
  04a5914  ori 31, 3, 0
  04a5918  std 29, 192(1)
  04a591c  std 28, 184(1)
  04a5920  std 27, 176(1)
  04a5924  std 26, 168(1)
  04a5928  std 25, 160(1)
  04a592c  std 24, 152(1)
  04a5930  cmpwi 30, 0
  04a5934  bt 2, 0x4a64d4
  04a5938  lis 3, 270
  04a593c  lwz 3, 18304(3)
  04a5940  cmpwi 3, 0
  04a5944  bt 2, 0x4a5964
  04a5948  lis 3, 151
  04a594c  lis 4, 151
  04a5950  addic 3, 3, -16064
  04a5954  li 5, 0
  04a5958  addic 4, 4, -16027
  04a595c  stb 5, 4(3)
  04a5960  stb 5, 4(4)
  04a5964  lbz 3, 32(31)
  04a5968  cmpwi 3, 7
  04a596c  cmpwi 1, 3, 6
  04a5970  cmpwi 6, 3, 5
  04a5974  cmpwi 7, 3, 4
  04a5978  bt 2, 0x4a62b0
  04a597c  bt 6, 0x4a6278
  04a5980  bt 26, 0x4a6238
  04a5984  bt 30, 0x4a61dc
  04a5988  cmpwi 3, 3
  04a598c  bt 2, 0x4a6198
  04a5990  cmpwi 3, 2
  04a5994  bt 2, 0x4a5ed8
  04a5998  cmpwi 3, 1
  04a599c  bt 2, 0x4a6038
  04a59a0  cmpwi 3, 0
  04a59a4  bf 2, 0x4a6310
  04a59a8  lhz 3, 52(31)
  04a59ac  lwz 4, 20(30)
  04a59b0  ori 3, 3, 129
  04a59b4  cmpwi 4, 0
  04a59b8  sth 3, 52(31)
  04a59bc  bf 2, 0x4a5e00
  04a59c0  lis 28, 141
  04a59c4  li 4, 36
  04a59c8  addic 28, 28, -15744
  04a59cc  ori 3, 28, 0
  04a59d0  bl 0x17b230
  04a59d4  nop
  04a59d8  lis 3, 74
  04a59dc  addi 27, 3, 22664
  04a59e0  lfs 1, 0(27)
  04a59e4  bl 0x17b780
  04a59e8  nop
  04a59ec  lis 3, 162
  04a59f0  lis 5, 116
  04a59f4  addic 3, 3, -9472
  04a59f8  lis 4, 16768
  04a59fc  addic 29, 5, -22016
  04a5a00  lis 8, 16230
  04a5a04  lis 9, 15820
  04a5a08  lwz 6, 16(3)
  04a5a0c  lwz 7, 20(3)
  04a5a10  ori 8, 8, 26214
  04a5a14  lfs 1, 16(3)
  04a5a18  lfs 2, 20(3)
  04a5a1c  fabs 3, 1
  04a5a20  lis 3, -16128
  04a5a24  fabs 6, 2
  04a5a28  stw 4, -22016(5)
  04a5a2c  lis 5, 16256
  04a5a30  stw 4, 4(29)
  04a5a34  ori 4, 9, 52429
  04a5a38  stw 3, 8(29)
  04a5a3c  stw 3, 12(29)
  04a5a40  stw 5, 16(29)
  04a5a44  stw 5, 20(29)
  04a5a48  stw 8, 24(29)
  04a5a4c  stw 4, 32(29)
  04a5a50  rlwinm 3, 7, 3, 29, 29
  04a5a54  fsubs 1, 3, 6
  04a5a58  lis 4, 115
  04a5a5c  addic 4, 4, 22784
  04a5a60  stfs 1, 112(1)
  04a5a64  lfs 4, 4(27)
  04a5a68  lwz 5, 112(1)
  04a5a6c  lfs 1, 112(1)
  04a5a70  rlwimi 3, 5, 2, 30, 30
  04a5a74  fsub 5, 1, 4
  04a5a78  ori 5, 4, 0
  04a5a7c  fsub 7, 1, 4
  04a5a80  rlwimi 3, 6, 4, 28, 28
  04a5a84  rlwimi 5, 3, 2, 26, 28
  04a5a88  slwi 3, 3, 2
  04a5a8c  clrldi 5, 5, 32
  04a5a90  lfsx 1, 4, 3
  04a5a94  fsel 5, 5, 3, 6
  04a5a98  lfs 2, 4(5)
  04a5a9c  fsel 3, 7, 6, 3
  04a5aa0  fcmpu 0, 5, 4
  04a5aa4  bt 1, 0x4a5aac
  04a5aa8  b 0x4a5bcc
  04a5aac  fsubs 6, 3, 5
  04a5ab0  fadds 3, 3, 5
  04a5ab4  addic 3, 1, 16
  04a5ab8  li 7, 2
  04a5abc  addic 4, 3, 100
  04a5ac0  addic 5, 3, 116
  04a5ac4  mtctr 7
  04a5ac8  fdivs 3, 6, 3
  04a5acc  fmuls 5, 3, 3
  04a5ad0  stfs 3, 128(1)
  04a5ad4  stfs 3, 120(1)
  04a5ad8  stfs 3, 124(1)
  04a5adc  stfs 3, 116(1)
  04a5ae0  lfs 7, 128(1)
  04a5ae4  lfs 8, 120(1)
  04a5ae8  lfs 9, 124(1)
  04a5aec  fmuls 6, 5, 5
  04a5af0  fmuls 8, 8, 5
  04a5af4  fmuls 7, 7, 6
  04a5af8  fmuls 3, 6, 6
  04a5afc  fmuls 6, 9, 6
  04a5b00  stfs 8, 120(1)
  04a5b04  fmuls 5, 7, 5
  04a5b08  stfs 6, 124(1)
  04a5b0c  stfs 5, 128(1)
  04a5b10  lfs 5, 100(3)
  04a5b14  fmuls 5, 5, 3
  04a5b18  stfs 5, 116(3)
  04a5b1c  lfs 5, 4(4)
  04a5b20  addic 3, 3, 8
  04a5b24  addic 4, 4, 8
  04a5b28  fmuls 5, 5, 3
  04a5b2c  stfs 5, 4(5)
  04a5b30  addic 5, 5, 8
  04a5b34  bdnz 0x4a5b10
  04a5b38  li 5, 4
  04a5b3c  ori 3, 1, 0
  04a5b40  mtctr 5
  04a5b44  lis 4, 115
  04a5b48  addic 5, 3, 116
  04a5b4c  addic 4, 4, 22752
  04a5b50  ori 6, 5, 0
  04a5b54  lfs 3, 116(3)
  04a5b58  lfs 5, 0(4)
  04a5b5c  fmuls 3, 3, 5
  04a5b60  lfs 5, 4(4)
  04a5b64  addic 4, 4, 8
  04a5b68  stfs 3, 116(3)
  04a5b6c  lfs 3, 4(5)
  04a5b70  addic 3, 3, 8
  04a5b74  fmuls 3, 3, 5
  04a5b78  stfs 3, 4(5)
  04a5b7c  addic 5, 5, 8
  04a5b80  bdnz 0x4a5b54
  04a5b84  ori 3, 1, 0
  04a5b88  mtctr 7
  04a5b8c  lfs 3, 116(3)
  04a5b90  fadds 3, 4, 3
  04a5b94  lfs 4, 4(6)
  04a5b98  addic 3, 3, 16
  04a5b9c  lfs 5, 8(6)
  04a5ba0  lfs 6, 12(6)
  04a5ba4  addic 6, 6, 16
  04a5ba8  fadds 3, 3, 4
  04a5bac  fadds 4, 3, 5
  04a5bb0  fadds 4, 4, 6
  04a5bb4  bdnz 0x4a5b8c
  04a5bb8  lis 3, 74
  04a5bbc  addi 3, 3, 22664
  04a5bc0  lfs 3, 8(3)
  04a5bc4  fadds 4, 4, 3
  04a5bc8  fmadds 4, 4, 1, 2
  04a5bcc  lis 3, 74
  04a5bd0  addi 3, 3, 22664
  04a5bd4  lfs 1, 12(3)
  04a5bd8  lfs 2, 16(3)
  04a5bdc  fadds 1, 4, 1
  04a5be0  lfs 3, 20(3)
  04a5be4  fsubs 5, 2, 4
  04a5be8  li 4, 40
  04a5bec  li 6, 41
  04a5bf0  li 7, 64
  04a5bf4  lis 5, 230
  04a5bf8  lis 25, 270
  04a5bfc  li 24, 0
  04a5c00  fsubs 2, 2, 1
  04a5c04  fsub 7, 4, 5
  04a5c08  fsubs 6, 3, 1
  04a5c0c  fsubs 3, 3, 4
  04a5c10  addic 25, 25, 17728
  04a5c14  lis 27, 143
  04a5c18  ori 26, 28, 0
  04a5c1c  addic 27, 27, 15616
  04a5c20  fsub 8, 1, 2
  04a5c24  fsel 4, 7, 5, 4
  04a5c28  fsel 1, 8, 2, 1
  04a5c2c  fsub 5, 3, 4
  04a5c30  lfs 2, 24(3)
  04a5c34  fsub 7, 6, 1
  04a5c38  fsel 3, 5, 3, 4
  04a5c3c  lfs 4, 28(3)
  04a5c40  lfs 5, 32(3)
  04a5c44  lfs 8, 36(3)
  04a5c48  lfs 11, 40(3)
  04a5c4c  lis 3, -16621
  04a5c50  fsel 1, 7, 6, 1
  04a5c54  fmuls 6, 3, 3
  04a5c58  ori 3, 3, 52534
  04a5c5c  stw 3, 56(29)
  04a5c60  stw 4, 40(29)
  04a5c64  lis 3, 230
  04a5c68  stw 6, 44(29)
  04a5c6c  fmuls 7, 1, 1
  04a5c70  fmuls 9, 6, 3
  04a5c74  stb 7, 60(29)
  04a5c78  lis 4, 230
  04a5c7c  stb 7, 61(29)
  04a5c80  li 6, 36
  04a5c84  lis 7, 230
  04a5c88  fmuls 10, 7, 1
  04a5c8c  fmuls 12, 6, 9
  04a5c90  fmadds 3, 9, 2, 3
  04a5c94  fmuls 9, 7, 10
  04a5c98  fmadds 1, 10, 2, 1
  04a5c9c  fmuls 2, 6, 12
  04a5ca0  fmadds 3, 12, 4, 3
  04a5ca4  fmr 10, 11
  04a5ca8  fmuls 11, 7, 9
  04a5cac  fmadds 1, 9, 4, 1
  04a5cb0  fmuls 4, 6, 2
  04a5cb4  fmadds 2, 2, 5, 3
  04a5cb8  fmuls 3, 7, 11
  04a5cbc  fmadds 1, 11, 5, 1
  04a5cc0  fmadds 2, 4, 8, 2
  04a5cc4  fmadds 1, 3, 8, 1
  04a5cc8  fmuls 2, 2, 10
  04a5ccc  fmuls 1, 1, 10
  04a5cd0  stfs 2, 52(29)
  04a5cd4  stw 28, -21888(5)
  04a5cd8  lis 5, 116
  04a5cdc  stw 25, -21884(3)
  04a5ce0  lis 3, 18176
  04a5ce4  stw 6, -21880(4)
  04a5ce8  lis 4, 116
  04a5cec  lis 6, 17279
  04a5cf0  stfs 1, 48(29)
  04a5cf4  stw 24, -21856(7)
  04a5cf8  ori 29, 24, 0
  04a5cfc  lis 7, 116
  04a5d00  stw 3, -22168(5)
  04a5d04  lis 3, 16960
  04a5d08  stw 6, -22164(4)
  04a5d0c  stw 3, -22160(7)
  04a5d10  ori 3, 26, 0
  04a5d14  ori 4, 25, 0
  04a5d18  bl 0x17b4b0
  04a5d1c  nop
  04a5d20  lwz 3, 20(30)
  04a5d24  mulli 4, 3, 4512
  04a5d28  slwi 3, 3, 1
  04a5d2c  extsw 4, 4
  04a5d30  extsw 3, 3
  04a5d34  addc 4, 4, 28
  04a5d38  addic 29, 29, 1
  04a5d3c  addic 26, 26, 4512
  04a5d40  cmpwi 29, 36
  04a5d44  lhzx 3, 27, 3
  04a5d48  addic 25, 25, 16
  04a5d4c  sth 3, 30(4)
  04a5d50  bt 0, 0x4a5d10
  04a5d54  lis 3, 74
  04a5d58  ori 29, 24, 0
  04a5d5c  addi 3, 3, 22664
  04a5d60  ori 26, 29, 0
  04a5d64  ori 25, 28, 0
  04a5d68  lfs 31, 44(3)
  04a5d6c  lfs 30, 48(3)
  04a5d70  lfs 29, 52(3)
  04a5d74  lfs 28, 56(3)
  04a5d78  ori 27, 24, 0
  04a5d7c  fmr 1, 31
  04a5d80  fmr 2, 30
  04a5d84  bl 0xfcbe8
  04a5d88  nop
  04a5d8c  lfsx 3, 28, 26
  04a5d90  fmr 2, 30
  04a5d94  fadds 27, 3, 1
  04a5d98  fmr 1, 31
  04a5d9c  bl 0xfcbe8
  04a5da0  nop
  04a5da4  lfs 2, 4(25)
  04a5da8  ori 3, 28, 0
  04a5dac  fmr 3, 29
  04a5db0  li 4, 36
  04a5db4  fadds 2, 2, 1
  04a5db8  fmr 1, 27
  04a5dbc  fmr 4, 28
  04a5dc0  bl 0x17c3b0
  04a5dc4  nop
  04a5dc8  addic 27, 27, 1
  04a5dcc  cmpwi 27, 2
  04a5dd0  bt 0, 0x4a5d7c
  04a5dd4  addic 29, 29, 1
  04a5dd8  addic 25, 25, 4512
  04a5ddc  cmpwi 29, 36
  04a5de0  addic 26, 26, 4512
  04a5de4  bt 0, 0x4a5d78
  04a5de8  ori 3, 24, 0
  04a5dec  bl 0x4a56e8
  04a5df0  addic 24, 24, 1
  04a5df4  extsw 24, 24
  04a5df8  cmpwi 24, 36
  04a5dfc  bt 0, 0x4a5de8
  04a5e00  lwz 3, 12(30)
  04a5e04  cmpwi 3, 0
  04a5e08  bt 2, 0x4a5ea4
  04a5e0c  lis 3, 74
  04a5e10  vspltisw 2, -1
  04a5e14  li 4, 3
  04a5e18  addi 3, 3, 22664
  04a5e1c  li 6, 60
  04a5e20  lis 5, 114
  04a5e24  stb 4, 32(31)
  04a5e28  li 4, -3056
  04a5e2c  vslw 2, 2, 2
  04a5e30  lvlx 3, 6, 3
  04a5e34  li 3, 24
  04a5e38  vspltw 3, 3, 0
  04a5e3c  lvlx 4, 4, 5
  04a5e40  lwz 4, 4(30)
  04a5e44  vmaddfp 2, 4, 3, 2
  04a5e48  srawi 5, 4, 31
  04a5e4c  srwi 6, 5, 1
  04a5e50  xor 4, 6, 4
  04a5e54  subc 4, 4, 5
  04a5e58  vctsxs 2, 2, 0
  04a5e5c  vspltw 2, 2, 0
  04a5e60  stvewx 2, 3, 30
  04a5e64  lwz 3, 24(31)
  04a5e68  srawi 5, 3, 31
  04a5e6c  srwi 6, 5, 1
  04a5e70  xor 3, 6, 3
  04a5e74  subc 3, 3, 5
  04a5e78  cmpw 3, 4
  04a5e7c  bf 0, 0x4a6310
  04a5e80  lwz 5, 20(30)
  04a5e84  mulli 5, 5, 4512
  04a5e88  lis 3, 141
  04a5e8c  extsw 5, 5
  04a5e90  addic 3, 3, -15744
  04a5e94  li 4, 0
  04a5e98  addc 3, 3, 5
  04a5e9c  sth 4, 30(3)
  04a5ea0  b 0x4a6310
  04a5ea4  li 3, 0
  04a5ea8  lwz 6, 8(30)
  04a5eac  li 4, 2
  04a5eb0  subc 3, 3, 6
  04a5eb4  li 5, 1
  04a5eb8  cntlzw 3, 3
  04a5ebc  subc 4, 4, 5
  04a5ec0  sldi 3, 3, 58
  04a5ec4  sradi 3, 3, 63
  04a5ec8  and 3, 3, 4
  04a5ecc  addc 3, 5, 3
  04a5ed0  stb 3, 32(31)
  04a5ed4  b 0x4a6310
  04a5ed8  lbz 3, 188(31)
  04a5edc  rlwinm 3, 3, 0, 29, 29
  04a5ee0  cmpwi 3, 0
  04a5ee4  bt 2, 0x4a5efc
  04a5ee8  li 4, 1
  04a5eec  lbz 3, 33(31)
  04a5ef0  bl 0x1042ec
  04a5ef4  nop
  04a5ef8  b 0x4a5f98
  04a5efc  ori 3, 31, 0
  04a5f00  lbz 4, 33(31)
  04a5f04  li 5, 1
  04a5f08  li 6, 0
  04a5f0c  bl 0x104a28
  04a5f10  nop
  04a5f14  ori 4, 3, 0
  04a5f18  lbz 3, 188(31)
  04a5f1c  cmpwi 4, 0
  04a5f20  bt 2, 0x4a5f68
  04a5f24  cmpwi 3, 1
  04a5f28  bt 2, 0x4a5f68
  04a5f2c  lis 3, 74
  04a5f30  lfs 1, 4(30)
  04a5f34  lis 5, 114
  04a5f38  addi 4, 3, 22664
  04a5f3c  addic 3, 31, 24
  04a5f40  lfs 2, 64(4)
  04a5f44  lfs 3, -3052(5)
  04a5f48  fmuls 2, 3, 2
  04a5f4c  bl 0x109af0
  04a5f50  nop
  04a5f54  lbz 3, 33(31)
  04a5f58  li 4, 1
  04a5f5c  bl 0x104298
  04a5f60  nop
  04a5f64  b 0x4a5f98
  04a5f68  cmpwi 3, 1
  04a5f6c  bf 2, 0x4a5f98
  04a5f70  lis 3, 74
  04a5f74  lis 5, 114
  04a5f78  lfs 1, 4(30)
  04a5f7c  addi 4, 3, 22664
  04a5f80  addic 3, 31, 24
  04a5f84  lfs 2, 64(4)
  04a5f88  lfs 3, -3052(5)
  04a5f8c  fmuls 2, 3, 2
  04a5f90  bl 0x109af0
  04a5f94  nop
  04a5f98  li 3, 200
  04a5f9c  bl 0xfc620
  04a5fa0  nop
  04a5fa4  cmpwi 3, 0
  04a5fa8  bf 2, 0x4a6310
  04a5fac  lis 3, 74
  04a5fb0  addi 29, 3, 22664
  04a5fb4  lfs 31, 68(29)
  04a5fb8  lfs 30, 64(29)
  04a5fbc  fmr 1, 31
  04a5fc0  fmr 2, 30
  04a5fc4  bl 0xfcbe8
  04a5fc8  nop
  04a5fcc  lwz 3, 20(30)
  04a5fd0  lis 4, 141
  04a5fd4  mulli 3, 3, 4512
  04a5fd8  addic 28, 4, -15744
  04a5fdc  extsw 3, 3
  04a5fe0  fmr 2, 30
  04a5fe4  lfsx 3, 28, 3
  04a5fe8  fadds 30, 3, 1
  04a5fec  fmr 1, 31
  04a5ff0  bl 0xfcbe8
  04a5ff4  nop
  04a5ff8  lwz 3, 20(30)
  04a5ffc  mulli 3, 3, 4512
  04a6000  lfs 3, 0(29)
  04a6004  extsw 5, 3
  04a6008  lfs 4, 72(29)
  04a600c  addc 3, 28, 3
  04a6010  addc 5, 28, 5
  04a6014  li 4, 1
  04a6018  li 9, 1
  04a601c  clrldi 3, 3, 32
  04a6020  lfs 2, 4(5)
  04a6024  fadds 2, 2, 1
  04a6028  fmr 1, 30
  04a602c  bl 0x17bd90
  04a6030  nop
  04a6034  b 0x4a6310
  04a6038  lbz 3, 188(31)
  04a603c  rlwinm 3, 3, 0, 28, 28
  04a6040  cmpwi 3, 0
  04a6044  bt 2, 0x4a605c
  04a6048  li 4, 2
  04a604c  lbz 3, 33(31)
  04a6050  bl 0x1042ec
  04a6054  nop
  04a6058  b 0x4a60f8
  04a605c  ori 3, 31, 0
  04a6060  lbz 4, 33(31)
  04a6064  li 5, 1
  04a6068  li 6, 0
  04a606c  bl 0x104a28
  04a6070  nop
  04a6074  ori 4, 3, 0
  04a6078  lbz 3, 188(31)
  04a607c  cmpwi 4, 0
  04a6080  bt 2, 0x4a60c8
  04a6084  cmpwi 3, 2
  04a6088  bt 2, 0x4a60c8
  04a608c  lis 3, 74
  04a6090  lfs 1, 0(30)
  04a6094  lis 5, 114
  04a6098  addi 4, 3, 22664
  04a609c  addic 3, 31, 24
  04a60a0  lfs 2, 64(4)
  04a60a4  lfs 3, -3052(5)
  04a60a8  fmuls 2, 3, 2
  04a60ac  bl 0x109af0
  04a60b0  nop
  04a60b4  lbz 3, 33(31)
  04a60b8  li 4, 2
  04a60bc  bl 0x104298
  04a60c0  nop
  04a60c4  b 0x4a60f8
  04a60c8  cmpwi 3, 2
  04a60cc  bf 2, 0x4a60f8
  04a60d0  lis 3, 74
  04a60d4  lis 5, 114
  04a60d8  lfs 1, 0(30)
  04a60dc  addi 4, 3, 22664
  04a60e0  addic 3, 31, 24
  04a60e4  lfs 2, 64(4)
  04a60e8  lfs 3, -3052(5)
  04a60ec  fmuls 2, 3, 2
  04a60f0  bl 0x109af0
  04a60f4  nop
  04a60f8  li 3, 200
  04a60fc  bl 0xfc620
  04a6100  nop
  04a6104  cmpwi 3, 0
  04a6108  bf 2, 0x4a6310
  04a610c  lis 3, 74
  04a6110  addi 29, 3, 22664
  04a6114  lfs 31, 68(29)
  04a6118  lfs 30, 64(29)
  04a611c  fmr 1, 31
  04a6120  fmr 2, 30
  04a6124  bl 0xfcbe8
  04a6128  nop
  04a612c  lwz 3, 20(30)
  04a6130  lis 4, 141
  04a6134  mulli 3, 3, 4512
  04a6138  addic 28, 4, -15744
  04a613c  extsw 3, 3
  04a6140  fmr 2, 30
  04a6144  lfsx 3, 28, 3
  04a6148  fadds 30, 3, 1
  04a614c  fmr 1, 31
  04a6150  bl 0xfcbe8
  04a6154  nop
  04a6158  lwz 3, 20(30)
  04a615c  mulli 3, 3, 4512
  04a6160  lfs 3, 0(29)
  04a6164  extsw 5, 3
  04a6168  lfs 4, 72(29)
  04a616c  addc 3, 28, 3
  04a6170  addc 5, 28, 5
  04a6174  li 4, 1
  04a6178  li 9, 1
  04a617c  clrldi 3, 3, 32
  04a6180  lfs 2, 4(5)
  04a6184  fadds 2, 2, 1
  04a6188  fmr 1, 30
  04a618c  bl 0x17bd90
  04a6190  nop
  04a6194  b 0x4a6310
  04a6198  lwz 3, 16(30)
  04a619c  cmpwi 3, -1
  04a61a0  bf 1, 0x4a6310
  04a61a4  lis 5, 151
  04a61a8  extsw 4, 3
  04a61ac  addic 3, 5, -25248
  04a61b0  bl 0x110b70
  04a61b4  nop
  04a61b8  cmpwi 3, 0
  04a61bc  bt 2, 0x4a6310
  04a61c0  li 3, 0
  04a61c4  li 4, 4
  04a61c8  stw 3, 28(30)
  04a61cc  lbz 3, 33(31)
  04a61d0  bl 0x1042ec
  04a61d4  nop
  04a61d8  b 0x4a6310
  04a61dc  addic 3, 30, 24
  04a61e0  bl 0x4fff60
  04a61e4  nop
  04a61e8  cmpwi 3, 0
  04a61ec  bt 2, 0x4a6310
  04a61f0  lis 3, 74
  04a61f4  li 4, 76
  04a61f8  vspltisw 2, -1
  04a61fc  addi 3, 3, 22664
  04a6200  lis 5, 114
  04a6204  li 6, -3056
  04a6208  vslw 2, 2, 2
  04a620c  lvlx 3, 4, 3
  04a6210  li 3, 24
  04a6214  vspltw 3, 3, 0
  04a6218  li 4, 5
  04a621c  lvlx 4, 6, 5
  04a6220  vmaddfp 2, 4, 3, 2
  04a6224  vctsxs 2, 2, 0
  04a6228  vspltw 2, 2, 0
  04a622c  stvewx 2, 3, 30
  04a6230  stb 4, 32(31)
  04a6234  b 0x4a6310
  04a6238  lis 3, 74
  04a623c  lis 4, 114
  04a6240  lfs 1, 24(31)
  04a6244  addi 3, 3, 22664
  04a6248  lfs 2, 80(3)
  04a624c  lfs 3, -3052(4)
  04a6250  addic 3, 30, 24
  04a6254  fmadds 1, 3, 2, 1
  04a6258  stfs 1, 24(31)
  04a625c  bl 0x4fff60
  04a6260  nop
  04a6264  cmpwi 3, 0
  04a6268  bt 2, 0x4a6310
  04a626c  li 3, 6
  04a6270  stb 3, 32(31)
  04a6274  b 0x4a6310
  04a6278  lis 3, 74
  04a627c  lis 4, 114
  04a6280  lfs 1, 24(31)
  04a6284  addi 3, 3, 22664
  04a6288  lfs 2, 84(3)
  04a628c  lfs 3, -3052(4)
  04a6290  fmadds 1, 3, 2, 1
  04a6294  stfs 1, 24(31)
  04a6298  lfs 2, 88(3)
  04a629c  fcmpu 0, 1, 2
  04a62a0  bt 0, 0x4a6310
  04a62a4  li 3, 7
  04a62a8  stb 3, 32(31)
  04a62ac  b 0x4a6310
  04a62b0  lwz 3, 0(30)
  04a62b4  lwz 4, 24(31)
  04a62b8  srawi 6, 3, 31
  04a62bc  srawi 5, 4, 31
  04a62c0  srwi 8, 6, 1
  04a62c4  srwi 7, 5, 1
  04a62c8  xor 3, 8, 3
  04a62cc  xor 4, 7, 4
  04a62d0  subc 3, 3, 6
  04a62d4  subc 4, 4, 5
  04a62d8  cmpw 3, 4
  04a62dc  bf 0, 0x4a6310
  04a62e0  lwz 5, 20(30)
  04a62e4  mulli 5, 5, 4512
  04a62e8  lis 3, 141
  04a62ec  extsw 5, 5
  04a62f0  addic 3, 3, -15744
  04a62f4  li 4, 0
  04a62f8  addc 5, 3, 5
  04a62fc  ori 3, 31, 0
  04a6300  sth 4, 30(5)
  04a6304  bl 0xefb38
  04a6308  nop
  04a630c  b 0x4a64d4
  04a6310  lwz 3, 20(30)
  04a6314  cmpwi 3, -1
  04a6318  bf 1, 0x4a64d4
  04a631c  mulli 3, 3, 4512
  04a6320  lis 4, 74
  04a6324  lis 5, 116
  04a6328  lis 29, 141
  04a632c  addi 4, 4, 22664
  04a6330  extsw 3, 3
  04a6334  addic 5, 5, -22016
  04a6338  addic 29, 29, -15744
  04a633c  addc 3, 29, 3
  04a6340  lfs 31, 4(4)
  04a6344  lbz 4, 60(5)
  04a6348  fmr 30, 31
  04a634c  stb 4, 28(3)
  04a6350  lwz 3, 20(30)
  04a6354  mulli 3, 3, 4512
  04a6358  lbz 4, 61(5)
  04a635c  extsw 3, 3
  04a6360  addc 3, 29, 3
  04a6364  stb 4, 29(3)
  04a6368  lwz 3, 20(30)
  04a636c  mulli 3, 3, 4512
  04a6370  lfs 1, 24(31)
  04a6374  extsw 3, 3
  04a6378  lwz 4, 148(31)
  04a637c  addc 3, 29, 3
  04a6380  cmpwi 4, 0
  04a6384  stfs 1, 8(3)
  04a6388  bt 2, 0x4a6428
  04a638c  lis 3, 74
  04a6390  addi 4, 3, 22664
  04a6394  ori 3, 31, 0
  04a6398  lfs 1, 92(4)
  04a639c  bl 0x1129d0
  04a63a0  nop
  04a63a4  cmpwi 3, -1
  04a63a8  bt 2, 0x4a6428
  04a63ac  lbz 3, 32(31)
  04a63b0  cmpwi 1, 3, 7
  04a63b4  cmpwi 3, 3
  04a63b8  cror 2, 0, 5
  04a63bc  bt 2, 0x4a641c
  04a63c0  lwz 3, 24(31)
  04a63c4  lwz 4, 4(30)
  04a63c8  srawi 5, 3, 31
  04a63cc  srawi 6, 4, 31
  04a63d0  srwi 7, 5, 1
  04a63d4  srwi 8, 6, 1
  04a63d8  xor 3, 7, 3
  04a63dc  xor 4, 8, 4
  04a63e0  subc 3, 3, 5
  04a63e4  subc 4, 4, 6
  04a63e8  cmpw 3, 4
  04a63ec  bf 1, 0x4a6428
  04a63f0  lwz 4, 0(30)
  04a63f4  srawi 5, 4, 31
  04a63f8  srwi 6, 5, 1
  04a63fc  xor 4, 6, 4
  04a6400  subc 4, 4, 5
  04a6404  cmpw 3, 4
  04a6408  bf 0, 0x4a6428
  04a640c  lis 3, 74
  04a6410  addi 3, 3, 22664
  04a6414  lfs 31, 0(3)
  04a6418  b 0x4a6428
  04a641c  lis 3, 74
  04a6420  addi 3, 3, 22664
  04a6424  lfs 31, 0(3)
  04a6428  fcmpu 0, 31, 30
  04a642c  li 3, 0
  04a6430  bt 2, 0x4a644c
  04a6434  lwz 4, 20(30)
  04a6438  lis 3, 143
  04a643c  slwi 4, 4, 1
  04a6440  addic 3, 3, 15616
  04a6444  extsw 4, 4
  04a6448  lhzx 3, 3, 4
  04a644c  lwz 4, 20(30)
  04a6450  mulli 5, 4, 4512
  04a6454  extsw 5, 5
  04a6458  addc 5, 29, 5
  04a645c  sth 3, 30(5)
  04a6460  ori 3, 4, 0
  04a6464  cmpwi 3, 0
  04a6468  bf 2, 0x4a6494
  04a646c  ori 3, 29, 0
  04a6470  li 4, 36
  04a6474  bl 0x17b8b8
  04a6478  nop
  04a647c  lis 3, 113
  04a6480  ori 4, 31, 0
  04a6484  addic 3, 3, -2992
  04a6488  bl 0x6d720
  04a648c  nop
  04a6490  lwz 3, 20(30)
  04a6494  lis 4, 141
  04a6498  lwz 4, -15808(4)
  04a649c  cmpw 3, 4
  04a64a0  bf 2, 0x4a64d4
  04a64a4  mulli 3, 3, 4512
  04a64a8  lwz 5, 20(30)
  04a64ac  lis 4, 141
  04a64b0  extsw 3, 3
  04a64b4  lis 6, 143
  04a64b8  slwi 5, 5, 1
  04a64bc  addc 3, 29, 3
  04a64c0  addic 6, 6, 15616
  04a64c4  lwz 4, -15804(4)
  04a64c8  extsw 5, 5
  04a64cc  sth 4, 30(3)
  04a64d0  sthx 4, 6, 5
  04a64d4  ld 0, 272(1)
  04a64d8  mtlr 0
  04a64dc  lfd 27, 216(1)
  04a64e0  lfd 28, 224(1)
  04a64e4  lfd 29, 232(1)
  04a64e8  lfd 30, 240(1)
  04a64ec  lfd 31, 248(1)
  04a64f0  ld 24, 152(1)
  04a64f4  ld 25, 160(1)
  04a64f8  ld 26, 168(1)
  04a64fc  ld 27, 176(1)
  04a6500  ld 28, 184(1)
  04a6504  ld 29, 192(1)
  04a6508  ld 30, 200(1)
  04a650c  ld 31, 208(1)
  04a6510  addi 1, 1, 256
  04a6514  blr

M977_004a6518:   # 0x4a6518, 0x30 bytes
  04a6518  stdu 1, -112(1)
  04a651c  mflr 0
  04a6520  std 0, 128(1)
  04a6524  lis 3, 141
  04a6528  li 4, 36
  04a652c  addic 3, 3, -15744
  04a6530  bl 0x17cfdc
  04a6534  nop
  04a6538  ld 0, 128(1)
  04a653c  mtlr 0
  04a6540  addi 1, 1, 112
  04a6544  blr

M977_004a6548:   # 0x4a6548, 0x14 bytes
  04a6548  lis 3, 143
  04a654c  lis 4, 1
  04a6550  addic 3, 3, 15692
  04a6554  stw 4, 72(3)
  04a6558  blr
