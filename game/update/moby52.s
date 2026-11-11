# game/update/moby52.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M52_003a9af8:   # 0x3a9af8, 0xa68 bytes
  03a9af8  stdu 1, -288(1)
  03a9afc  mflr 0
  03a9b00  std 0, 304(1)
  03a9b04  stfd 31, 280(1)
  03a9b08  std 31, 272(1)
  03a9b0c  lbz 4, 32(3)
  03a9b10  std 30, 264(1)
  03a9b14  ori 31, 3, 0
  03a9b18  lwz 30, 120(3)
  03a9b1c  std 29, 256(1)
  03a9b20  std 28, 248(1)
  03a9b24  std 27, 240(1)
  03a9b28  cmpwi 4, 0
  03a9b2c  bt 2, 0x3aa538
  03a9b30  lis 4, 59
  03a9b34  lwz 5, 36(31)
  03a9b38  lis 3, 132
  03a9b3c  lfs 1, 44(31)
  03a9b40  addi 4, 4, -25928
  03a9b44  lfs 2, 14004(3)
  03a9b48  lfs 3, 0(4)
  03a9b4c  addic 3, 30, 388
  03a9b50  lfs 4, 36(5)
  03a9b54  fmsubs 2, 4, 2, 1
  03a9b58  fmadds 1, 2, 3, 1
  03a9b5c  stfs 1, 44(31)
  03a9b60  bl 0x4fff60
  03a9b64  nop
  03a9b68  cmpwi 3, 2
  03a9b6c  bf 2, 0x3a9b7c
  03a9b70  li 3, 7
  03a9b74  stb 3, 32(31)
  03a9b78  b 0x3aa538
  03a9b7c  lis 3, 59
  03a9b80  lis 4, 114
  03a9b84  addi 3, 3, -25928
  03a9b88  lfs 2, 4(3)
  03a9b8c  lfs 1, -3056(4)
  03a9b90  lwz 3, 388(30)
  03a9b94  fmuls 2, 1, 2
  03a9b98  fctiwz 2, 2
  03a9b9c  stfd 2, 216(1)
  03a9ba0  lwz 4, 220(1)
  03a9ba4  cmpw 3, 4
  03a9ba8  bt 2, 0x3a9c60
  03a9bac  lis 4, 59
  03a9bb0  addi 4, 4, -25928
  03a9bb4  lfs 2, 8(4)
  03a9bb8  fmuls 2, 1, 2
  03a9bbc  fctiwz 2, 2
  03a9bc0  stfd 2, 216(1)
  03a9bc4  lwz 4, 220(1)
  03a9bc8  cmpw 3, 4
  03a9bcc  bt 2, 0x3a9c60
  03a9bd0  lis 4, 59
  03a9bd4  addi 4, 4, -25928
  03a9bd8  lfs 2, 12(4)
  03a9bdc  fmuls 2, 1, 2
  03a9be0  fctiwz 2, 2
  03a9be4  stfd 2, 216(1)
  03a9be8  lwz 4, 220(1)
  03a9bec  cmpw 3, 4
  03a9bf0  bt 2, 0x3a9c60
  03a9bf4  lis 4, 59
  03a9bf8  addi 4, 4, -25928
  03a9bfc  lfs 2, 16(4)
  03a9c00  fmuls 2, 1, 2
  03a9c04  fctiwz 2, 2
  03a9c08  stfd 2, 216(1)
  03a9c0c  lwz 4, 220(1)
  03a9c10  cmpw 3, 4
  03a9c14  bt 2, 0x3a9c60
  03a9c18  lis 4, 59
  03a9c1c  addi 4, 4, -25928
  03a9c20  lfs 2, 20(4)
  03a9c24  fmuls 2, 1, 2
  03a9c28  fctiwz 2, 2
  03a9c2c  stfd 2, 216(1)
  03a9c30  lwz 4, 220(1)
  03a9c34  cmpw 3, 4
  03a9c38  bt 2, 0x3a9c60
  03a9c3c  lis 4, 59
  03a9c40  addi 4, 4, -25928
  03a9c44  lfs 2, 24(4)
  03a9c48  fmuls 1, 1, 2
  03a9c4c  fctiwz 1, 1
  03a9c50  stfd 1, 216(1)
  03a9c54  lwz 4, 220(1)
  03a9c58  cmpw 3, 4
  03a9c5c  bf 2, 0x3a9c78
  03a9c60  li 5, 240
  03a9c64  addic 4, 30, 96
  03a9c68  ori 3, 31, 0
  03a9c6c  stb 5, 103(30)
  03a9c70  bl 0x10c808
  03a9c74  nop
  03a9c78  lis 3, 59
  03a9c7c  li 6, 0
  03a9c80  addi 7, 3, -25928
  03a9c84  ori 3, 31, 0
  03a9c88  lis 4, 51
  03a9c8c  li 5, 0
  03a9c90  lfs 31, 28(7)
  03a9c94  stw 6, 116(1)
  03a9c98  bl 0x10675c
  03a9c9c  nop
  03a9ca0  ori 29, 3, 0
  03a9ca4  ori 3, 31, 0
  03a9ca8  ori 4, 29, 0
  03a9cac  addic 5, 30, 32
  03a9cb0  li 6, 0
  03a9cb4  addic 7, 1, 112
  03a9cb8  li 9, 0
  03a9cbc  addic 8, 1, 116
  03a9cc0  li 10, 4
  03a9cc4  bl 0x106840
  03a9cc8  nop
  03a9ccc  ori 28, 3, 0
  03a9cd0  lwz 3, 112(1)
  03a9cd4  cmpwi 3, 1
  03a9cd8  bt 2, 0x3aa2cc
  03a9cdc  lbz 3, 32(31)
  03a9ce0  cmpwi 3, 6
  03a9ce4  bt 2, 0x3aa2cc
  03a9ce8  lfs 1, 32(30)
  03a9cec  lfs 2, 116(1)
  03a9cf0  fsubs 1, 1, 2
  03a9cf4  fcmpu 0, 1, 31
  03a9cf8  stfs 1, 32(30)
  03a9cfc  bt 1, 0x3a9d04
  03a9d00  li 28, 1
  03a9d04  lis 3, 59
  03a9d08  addi 27, 3, -25928
  03a9d0c  lfs 1, 32(27)
  03a9d10  bl 0x502758
  03a9d14  nop
  03a9d18  li 6, 0
  03a9d1c  lis 4, 132
  03a9d20  lis 5, 114
  03a9d24  li 7, 1
  03a9d28  stw 6, 152(30)
  03a9d2c  lfs 1, 13984(4)
  03a9d30  lfs 2, -3048(5)
  03a9d34  stw 3, 144(30)
  03a9d38  li 4, 0
  03a9d3c  fmuls 1, 1, 2
  03a9d40  li 3, 8
  03a9d44  ori 5, 31, 0
  03a9d48  stfs 1, 128(30)
  03a9d4c  lfs 1, 36(27)
  03a9d50  stb 6, 173(30)
  03a9d54  fmuls 1, 2, 1
  03a9d58  stw 7, 148(30)
  03a9d5c  stfs 1, 132(30)
  03a9d60  bl 0x15d12c
  03a9d64  nop
  03a9d68  cmpwi 28, 2
  03a9d6c  bt 1, 0x3a9d84
  03a9d70  cmpwi 28, -1
  03a9d74  cmpwi 1, 28, 0
  03a9d78  bf 1, 0x3aa2bc
  03a9d7c  bf 5, 0x3aa2bc
  03a9d80  b 0x3aa01c
  03a9d84  cmpwi 28, 10
  03a9d88  cmpwi 1, 28, 8
  03a9d8c  bt 1, 0x3aa2bc
  03a9d90  bf 5, 0x3a9da0
  03a9d94  li 3, 250
  03a9d98  stb 3, 103(30)
  03a9d9c  b 0x3aa2bc
  03a9da0  lis 3, 132
  03a9da4  lis 4, 114
  03a9da8  li 5, 0
  03a9dac  lfs 1, 13992(3)
  03a9db0  lfs 2, -3052(4)
  03a9db4  lis 3, 16448
  03a9db8  stw 5, 140(30)
  03a9dbc  fmuls 1, 1, 2
  03a9dc0  lis 4, 16576
  03a9dc4  stw 3, 192(30)
  03a9dc8  stw 4, 196(30)
  03a9dcc  stfs 1, 136(30)
  03a9dd0  lwz 3, 32(29)
  03a9dd4  lfs 1, 16(31)
  03a9dd8  lfs 2, 20(31)
  03a9ddc  lfs 3, 16(3)
  03a9de0  lfs 4, 20(3)
  03a9de4  fsubs 1, 1, 3
  03a9de8  fsubs 2, 2, 4
  03a9dec  lis 3, 115
  03a9df0  addic 3, 3, 22784
  03a9df4  fabs 3, 1
  03a9df8  fabs 4, 2
  03a9dfc  stfs 1, 140(1)
  03a9e00  stfs 2, 144(1)
  03a9e04  fsubs 1, 3, 4
  03a9e08  stfs 1, 148(1)
  03a9e0c  lwz 4, 140(1)
  03a9e10  lfs 1, 140(1)
  03a9e14  lwz 5, 144(1)
  03a9e18  lfs 2, 144(1)
  03a9e1c  lwz 6, 148(1)
  03a9e20  rlwinm 5, 5, 3, 29, 29
  03a9e24  fabs 5, 2
  03a9e28  lfs 2, 148(1)
  03a9e2c  fabs 1, 1
  03a9e30  rlwimi 5, 6, 2, 30, 30
  03a9e34  fsub 6, 2, 31
  03a9e38  fsub 7, 2, 31
  03a9e3c  rlwimi 5, 4, 4, 28, 28
  03a9e40  ori 4, 3, 0
  03a9e44  rlwimi 4, 5, 2, 26, 28
  03a9e48  slwi 5, 5, 2
  03a9e4c  clrldi 4, 4, 32
  03a9e50  fsel 4, 6, 1, 4
  03a9e54  lfsx 1, 3, 5
  03a9e58  fsel 3, 7, 5, 3
  03a9e5c  lfs 2, 4(4)
  03a9e60  fcmpu 0, 4, 31
  03a9e64  bt 1, 0x3a9e6c
  03a9e68  b 0x3a9f8c
  03a9e6c  fsubs 5, 3, 4
  03a9e70  fadds 3, 3, 4
  03a9e74  addic 3, 1, 16
  03a9e78  li 6, 2
  03a9e7c  addic 4, 3, 168
  03a9e80  addic 5, 3, 184
  03a9e84  mtctr 6
  03a9e88  fdivs 3, 5, 3
  03a9e8c  fmuls 4, 3, 3
  03a9e90  stfs 3, 196(1)
  03a9e94  stfs 3, 188(1)
  03a9e98  stfs 3, 192(1)
  03a9e9c  stfs 3, 184(1)
  03a9ea0  lfs 6, 196(1)
  03a9ea4  lfs 7, 188(1)
  03a9ea8  lfs 8, 192(1)
  03a9eac  fmuls 5, 4, 4
  03a9eb0  fmuls 7, 7, 4
  03a9eb4  fmuls 6, 6, 5
  03a9eb8  fmuls 3, 5, 5
  03a9ebc  fmuls 5, 8, 5
  03a9ec0  stfs 7, 188(1)
  03a9ec4  fmuls 4, 6, 4
  03a9ec8  stfs 5, 192(1)
  03a9ecc  stfs 4, 196(1)
  03a9ed0  lfs 4, 168(3)
  03a9ed4  fmuls 4, 4, 3
  03a9ed8  stfs 4, 184(3)
  03a9edc  lfs 4, 4(4)
  03a9ee0  addic 3, 3, 8
  03a9ee4  addic 4, 4, 8
  03a9ee8  fmuls 4, 4, 3
  03a9eec  stfs 4, 4(5)
  03a9ef0  addic 5, 5, 8
  03a9ef4  bdnz 0x3a9ed0
  03a9ef8  li 5, 4
  03a9efc  ori 3, 1, 0
  03a9f00  mtctr 5
  03a9f04  lis 4, 115
  03a9f08  addic 5, 3, 184
  03a9f0c  addic 4, 4, 22752
  03a9f10  ori 7, 5, 0
  03a9f14  lfs 3, 184(3)
  03a9f18  lfs 4, 0(4)
  03a9f1c  fmuls 3, 3, 4
  03a9f20  lfs 4, 4(4)
  03a9f24  addic 4, 4, 8
  03a9f28  stfs 3, 184(3)
  03a9f2c  lfs 3, 4(5)
  03a9f30  addic 3, 3, 8
  03a9f34  fmuls 3, 3, 4
  03a9f38  stfs 3, 4(5)
  03a9f3c  addic 5, 5, 8
  03a9f40  bdnz 0x3a9f14
  03a9f44  ori 3, 1, 0
  03a9f48  mtctr 6
  03a9f4c  lfs 3, 184(3)
  03a9f50  lfs 4, 4(7)
  03a9f54  fadds 3, 31, 3
  03a9f58  lfs 5, 8(7)
  03a9f5c  lfs 31, 12(7)
  03a9f60  addic 3, 3, 16
  03a9f64  addic 7, 7, 16
  03a9f68  fadds 3, 3, 4
  03a9f6c  fadds 3, 3, 5
  03a9f70  fadds 31, 3, 31
  03a9f74  bdnz 0x3a9f4c
  03a9f78  lis 3, 59
  03a9f7c  addi 3, 3, -25928
  03a9f80  lfs 3, 40(3)
  03a9f84  fadds 31, 31, 3
  03a9f88  fmadds 31, 31, 1, 2
  03a9f8c  stfs 31, 120(1)
  03a9f90  addic 5, 1, 120
  03a9f94  lfs 1, 16(29)
  03a9f98  addic 6, 30, 136
  03a9f9c  lfs 2, 24(29)
  03a9fa0  addic 7, 30, 140
  03a9fa4  stfs 1, 48(1)
  03a9fa8  stfs 2, 56(1)
  03a9fac  lfs 1, 20(29)
  03a9fb0  lfs 2, 28(29)
  03a9fb4  stfs 1, 52(1)
  03a9fb8  stfs 2, 60(1)
  03a9fbc  ld 3, 48(1)
  03a9fc0  ld 4, 56(1)
  03a9fc4  bl 0x107de8
  03a9fc8  nop
  03a9fcc  ori 3, 31, 0
  03a9fd0  lfs 1, 120(1)
  03a9fd4  addic 4, 30, 112
  03a9fd8  li 6, 4
  03a9fdc  li 7, 1
  03a9fe0  li 8, 0
  03a9fe4  bl 0x10ad80
  03a9fe8  nop
  03a9fec  li 3, 5
  03a9ff0  lbz 29, 33(31)
  03a9ff4  cmpwi 29, 255
  03a9ff8  stb 3, 32(31)
  03a9ffc  bt 2, 0x3aa010
  03aa000  ori 3, 29, 0
  03aa004  li 4, 1
  03aa008  bl 0x104298
  03aa00c  nop
  03aa010  li 3, 120
  03aa014  stb 3, 103(30)
  03aa018  b 0x3aa2bc
  03aa01c  lis 3, 132
  03aa020  lis 4, 114
  03aa024  lis 5, 132
  03aa028  lis 6, 114
  03aa02c  lis 7, 132
  03aa030  lfs 1, 13984(3)
  03aa034  lfs 2, -3048(4)
  03aa038  li 3, 0
  03aa03c  lhz 4, 52(31)
  03aa040  fmuls 1, 1, 2
  03aa044  rlwimi 4, 3, 0, 19, 19
  03aa048  lis 3, 16736
  03aa04c  sth 4, 52(31)
  03aa050  lis 4, 16864
  03aa054  stfs 1, 128(30)
  03aa058  lfs 1, 14000(5)
  03aa05c  lfs 2, -3052(6)
  03aa060  fmuls 1, 1, 2
  03aa064  stfs 1, 136(30)
  03aa068  lfs 1, 13996(7)
  03aa06c  stw 3, 192(30)
  03aa070  fmuls 1, 1, 2
  03aa074  stw 4, 196(30)
  03aa078  stfs 1, 140(30)
  03aa07c  lwz 3, 32(29)
  03aa080  lfs 1, 16(31)
  03aa084  lfs 2, 20(31)
  03aa088  lfs 3, 16(3)
  03aa08c  lfs 4, 20(3)
  03aa090  fsubs 1, 1, 3
  03aa094  fsubs 2, 2, 4
  03aa098  lis 3, 115
  03aa09c  addic 3, 3, 22784
  03aa0a0  fabs 3, 1
  03aa0a4  fabs 4, 2
  03aa0a8  stfs 1, 128(1)
  03aa0ac  stfs 2, 132(1)
  03aa0b0  fsubs 1, 3, 4
  03aa0b4  stfs 1, 136(1)
  03aa0b8  lwz 4, 128(1)
  03aa0bc  lfs 1, 128(1)
  03aa0c0  lwz 5, 132(1)
  03aa0c4  lfs 2, 132(1)
  03aa0c8  fabs 1, 1
  03aa0cc  lwz 6, 136(1)
  03aa0d0  rlwinm 5, 5, 3, 29, 29
  03aa0d4  lfs 5, 136(1)
  03aa0d8  fabs 2, 2
  03aa0dc  rlwimi 5, 6, 2, 30, 30
  03aa0e0  fsub 6, 5, 31
  03aa0e4  fsub 5, 5, 31
  03aa0e8  rlwimi 5, 4, 4, 28, 28
  03aa0ec  ori 4, 3, 0
  03aa0f0  rlwimi 4, 5, 2, 26, 28
  03aa0f4  slwi 5, 5, 2
  03aa0f8  clrldi 4, 4, 32
  03aa0fc  fsel 4, 6, 1, 4
  03aa100  lfsx 1, 3, 5
  03aa104  fsel 3, 5, 2, 3
  03aa108  lfs 2, 4(4)
  03aa10c  fcmpu 0, 4, 31
  03aa110  bt 1, 0x3aa118
  03aa114  b 0x3aa238
  03aa118  fsubs 5, 3, 4
  03aa11c  fadds 3, 3, 4
  03aa120  addic 3, 1, 16
  03aa124  li 6, 2
  03aa128  addic 5, 3, 152
  03aa12c  addic 4, 3, 136
  03aa130  mtctr 6
  03aa134  fdivs 3, 5, 3
  03aa138  fmuls 4, 3, 3
  03aa13c  stfs 3, 164(1)
  03aa140  stfs 3, 156(1)
  03aa144  stfs 3, 160(1)
  03aa148  stfs 3, 152(1)
  03aa14c  lfs 6, 164(1)
  03aa150  lfs 7, 156(1)
  03aa154  lfs 8, 160(1)
  03aa158  fmuls 5, 4, 4
  03aa15c  fmuls 7, 7, 4
  03aa160  fmuls 6, 6, 5
  03aa164  fmuls 3, 5, 5
  03aa168  fmuls 5, 8, 5
  03aa16c  stfs 7, 156(1)
  03aa170  fmuls 4, 6, 4
  03aa174  stfs 5, 160(1)
  03aa178  stfs 4, 164(1)
  03aa17c  lfs 4, 136(3)
  03aa180  fmuls 4, 4, 3
  03aa184  stfs 4, 152(3)
  03aa188  lfs 4, 4(4)
  03aa18c  addic 4, 4, 8
  03aa190  fmuls 4, 4, 3
  03aa194  addic 3, 3, 8
  03aa198  stfs 4, 4(5)
  03aa19c  addic 5, 5, 8
  03aa1a0  bdnz 0x3aa17c
  03aa1a4  li 5, 4
  03aa1a8  ori 3, 1, 0
  03aa1ac  mtctr 5
  03aa1b0  lis 4, 115
  03aa1b4  addic 5, 3, 152
  03aa1b8  addic 4, 4, 22752
  03aa1bc  ori 7, 5, 0
  03aa1c0  lfs 3, 152(3)
  03aa1c4  lfs 4, 0(4)
  03aa1c8  fmuls 3, 3, 4
  03aa1cc  lfs 4, 4(4)
  03aa1d0  addic 4, 4, 8
  03aa1d4  stfs 3, 152(3)
  03aa1d8  lfs 3, 4(5)
  03aa1dc  addic 3, 3, 8
  03aa1e0  fmuls 3, 3, 4
  03aa1e4  stfs 3, 4(5)
  03aa1e8  addic 5, 5, 8
  03aa1ec  bdnz 0x3aa1c0
  03aa1f0  ori 3, 1, 0
  03aa1f4  mtctr 6
  03aa1f8  lfs 3, 152(3)
  03aa1fc  lfs 4, 4(7)
  03aa200  fadds 3, 31, 3
  03aa204  lfs 5, 8(7)
  03aa208  addic 3, 3, 16
  03aa20c  lfs 31, 12(7)
  03aa210  addic 7, 7, 16
  03aa214  fadds 3, 3, 4
  03aa218  fadds 3, 3, 5
  03aa21c  fadds 31, 3, 31
  03aa220  bdnz 0x3aa1f8
  03aa224  lis 3, 59
  03aa228  addi 3, 3, -25928
  03aa22c  lfs 3, 40(3)
  03aa230  fadds 31, 31, 3
  03aa234  fmadds 31, 31, 1, 2
  03aa238  stfs 31, 124(1)
  03aa23c  lfs 1, 16(29)
  03aa240  addic 5, 1, 124
  03aa244  lfs 2, 24(29)
  03aa248  addic 6, 30, 136
  03aa24c  stfs 1, 48(1)
  03aa250  addic 7, 30, 140
  03aa254  stfs 2, 56(1)
  03aa258  lfs 1, 20(29)
  03aa25c  lfs 2, 28(29)
  03aa260  stfs 1, 52(1)
  03aa264  stfs 2, 60(1)
  03aa268  ld 3, 48(1)
  03aa26c  ld 4, 56(1)
  03aa270  bl 0x107de8
  03aa274  nop
  03aa278  ori 3, 31, 0
  03aa27c  addic 4, 30, 112
  03aa280  lfs 1, 124(1)
  03aa284  li 6, 4
  03aa288  li 7, 1
  03aa28c  li 8, 0
  03aa290  bl 0x10ad80
  03aa294  nop
  03aa298  ori 3, 31, 0
  03aa29c  li 4, 0
  03aa2a0  li 5, -1
  03aa2a4  bl 0xfd8d0
  03aa2a8  nop
  03aa2ac  li 3, 6
  03aa2b0  li 4, 240
  03aa2b4  stb 3, 32(31)
  03aa2b8  stb 4, 103(30)
  03aa2bc  addic 4, 30, 96
  03aa2c0  ori 3, 31, 0
  03aa2c4  bl 0x10c808
  03aa2c8  nop
  03aa2cc  li 5, 255
  03aa2d0  ori 3, 31, 0
  03aa2d4  addic 4, 30, 96
  03aa2d8  stb 5, 164(31)
  03aa2dc  bl 0x10c9a0
  03aa2e0  nop
  03aa2e4  lwz 3, 56(30)
  03aa2e8  cmpwi 3, 0
  03aa2ec  bf 2, 0x3aa2fc
  03aa2f0  lbz 3, 188(31)
  03aa2f4  cmpwi 3, 1
  03aa2f8  bf 2, 0x3aa338
  03aa2fc  lis 3, 59
  03aa300  addi 3, 3, -25928
  03aa304  lfs 1, 44(3)
  03aa308  lfs 2, 48(3)
  03aa30c  bl 0xfcbe8
  03aa310  nop
  03aa314  lis 3, 114
  03aa318  lfs 2, -3056(3)
  03aa31c  fmuls 1, 1, 2
  03aa320  bl 0x502758
  03aa324  nop
  03aa328  li 4, 0
  03aa32c  stw 3, 400(30)
  03aa330  stw 4, 56(30)
  03aa334  stb 4, 188(31)
  03aa338  addic 3, 30, 400
  03aa33c  bl 0x4fff60
  03aa340  nop
  03aa344  li 3, 4
  03aa348  bl 0xfc620
  03aa34c  nop
  03aa350  cmpwi 3, 0
  03aa354  bf 2, 0x3aa4c8
  03aa358  lwz 3, 400(30)
  03aa35c  cmpwi 3, 0
  03aa360  bt 2, 0x3aa400
  03aa364  lis 3, 59
  03aa368  lis 6, 16832
  03aa36c  addi 4, 3, -25928
  03aa370  ori 3, 31, 0
  03aa374  addic 5, 30, 288
  03aa378  lfs 1, 52(4)
  03aa37c  stw 6, 392(30)
  03aa380  bl 0x1118d8
  03aa384  nop
  03aa388  cmpwi 3, 2
  03aa38c  bt 2, 0x3aa51c
  03aa390  lwz 3, 400(30)
  03aa394  cmpwi 3, 0
  03aa398  bf 2, 0x3aa51c
  03aa39c  lfs 1, 20(31)
  03aa3a0  lfs 2, 292(30)
  03aa3a4  lfs 3, 16(31)
  03aa3a8  fsubs 1, 1, 2
  03aa3ac  lfs 2, 288(30)
  03aa3b0  fsubs 2, 3, 2
  03aa3b4  fmuls 1, 1, 1
  03aa3b8  fmadds 1, 2, 2, 1
  03aa3bc  lfs 2, 392(30)
  03aa3c0  fsqrts 1, 1
  03aa3c4  fcmpu 0, 1, 2
  03aa3c8  bt 1, 0x3aa3f4
  03aa3cc  lfs 1, 24(31)
  03aa3d0  lis 3, 59
  03aa3d4  lfs 2, 296(30)
  03aa3d8  addi 3, 3, -25928
  03aa3dc  fsubs 1, 1, 2
  03aa3e0  lfs 2, 56(3)
  03aa3e4  fabs 1, 1
  03aa3e8  fcmpu 0, 1, 2
  03aa3ec  cror 6, 0, 2
  03aa3f0  bt 6, 0x3aa51c
  03aa3f4  li 3, 2
  03aa3f8  stw 3, 356(30)
  03aa3fc  b 0x3aa51c
  03aa400  lis 4, 165
  03aa404  lis 3, 59
  03aa408  addic 5, 4, 7136
  03aa40c  lwz 4, 384(30)
  03aa410  addi 3, 3, -25928
  03aa414  lis 6, 16704
  03aa418  slwi 4, 4, 2
  03aa41c  extsw 7, 4
  03aa420  lfs 1, 60(3)
  03aa424  stw 6, 392(30)
  03aa428  ori 3, 31, 0
  03aa42c  addic 4, 30, 288
  03aa430  li 6, 0
  03aa434  lwzx 5, 5, 7
  03aa438  li 7, 0
  03aa43c  addic 8, 5, 16
  03aa440  lwz 9, 0(5)
  03aa444  extsw 9, 9
  03aa448  bl 0x111ba0
  03aa44c  nop
  03aa450  cmpwi 3, 2
  03aa454  bt 2, 0x3aa51c
  03aa458  lwz 3, 400(30)
  03aa45c  cmpwi 3, 0
  03aa460  bf 2, 0x3aa51c
  03aa464  lfs 1, 20(31)
  03aa468  lfs 2, 292(30)
  03aa46c  lfs 3, 16(31)
  03aa470  fsubs 1, 1, 2
  03aa474  lfs 2, 288(30)
  03aa478  fsubs 2, 3, 2
  03aa47c  fmuls 1, 1, 1
  03aa480  fmadds 1, 2, 2, 1
  03aa484  lfs 2, 392(30)
  03aa488  fsqrts 1, 1
  03aa48c  fcmpu 0, 1, 2
  03aa490  bt 1, 0x3aa4bc
  03aa494  lfs 1, 24(31)
  03aa498  lis 3, 59
  03aa49c  lfs 2, 296(30)
  03aa4a0  addi 3, 3, -25928
  03aa4a4  fsubs 1, 1, 2
  03aa4a8  lfs 2, 56(3)
  03aa4ac  fabs 1, 1
  03aa4b0  fcmpu 0, 1, 2
  03aa4b4  cror 6, 0, 2
  03aa4b8  bt 6, 0x3aa51c
  03aa4bc  li 3, 2
  03aa4c0  stw 3, 356(30)
  03aa4c4  b 0x3aa51c
  03aa4c8  lwz 3, 352(30)
  03aa4cc  cmpwi 3, 0
  03aa4d0  bt 2, 0x3aa50c
  03aa4d4  lbz 4, 32(3)
  03aa4d8  cmpwi 1, 4, 253
  03aa4dc  cmpwi 4, 254
  03aa4e0  cror 2, 2, 6
  03aa4e4  bt 2, 0x3aa50c
  03aa4e8  lfs 1, 16(3)
  03aa4ec  stfs 1, 288(30)
  03aa4f0  lfs 1, 20(3)
  03aa4f4  stfs 1, 292(30)
  03aa4f8  lfs 1, 24(3)
  03aa4fc  stfs 1, 296(30)
  03aa500  lfs 1, 28(3)
  03aa504  stfs 1, 300(30)
  03aa508  b 0x3aa51c
  03aa50c  li 3, 0
  03aa510  li 4, 2
  03aa514  stw 3, 352(30)
  03aa518  stw 4, 356(30)
  03aa51c  lwz 3, 352(30)
  03aa520  cmpwi 3, 0
  03aa524  bf 2, 0x3aa538
  03aa528  lis 3, 151
  03aa52c  addic 3, 3, -25376
  03aa530  lwz 3, 8320(3)
  03aa534  stw 3, 352(30)
  03aa538  ld 0, 304(1)
  03aa53c  mtlr 0
  03aa540  lfd 31, 280(1)
  03aa544  ld 27, 240(1)
  03aa548  ld 28, 248(1)
  03aa54c  ld 29, 256(1)
  03aa550  ld 30, 264(1)
  03aa554  ld 31, 272(1)
  03aa558  addi 1, 1, 288
  03aa55c  blr

UpdateMoby_52:   # 0x3aa5f0, 0xea8 bytes
  03aa5f0  stdu 1, -416(1)
  03aa5f4  mflr 0
  03aa5f8  std 0, 432(1)
  03aa5fc  stfd 30, 400(1)
  03aa600  stfd 31, 408(1)
  03aa604  addi 0, 1, 352
  03aa608  stvx 31, 0, 0
  03aa60c  std 31, 392(1)
  03aa610  ori 31, 3, 0
  03aa614  std 29, 376(1)
  03aa618  lis 3, 59
  03aa61c  addi 29, 3, -23200
  03aa620  std 30, 384(1)
  03aa624  ori 3, 31, 0
  03aa628  std 28, 368(1)
  03aa62c  lwz 30, 120(31)
  03aa630  bl 0x3a9af8
  03aa634  lfs 1, 0(29)
  03aa638  ori 3, 31, 0
  03aa63c  lwz 29, 352(30)
  03aa640  addic 5, 30, 640
  03aa644  li 4, 0
  03aa648  bl 0x119a18
  03aa64c  nop
  03aa650  lbz 3, 49(31)
  03aa654  cmpwi 3, 0
  03aa658  bt 2, 0x3aa6c4
  03aa65c  lis 3, 149
  03aa660  lfs 1, 20(31)
  03aa664  lfs 2, 16(31)
  03aa668  addic 3, 3, 5056
  03aa66c  lfs 3, 324(3)
  03aa670  lfs 4, 320(3)
  03aa674  fsubs 1, 1, 3
  03aa678  fsubs 2, 2, 4
  03aa67c  lfs 3, 24(31)
  03aa680  lfs 4, 328(3)
  03aa684  fsubs 3, 3, 4
  03aa688  lis 3, 59
  03aa68c  fmuls 1, 1, 1
  03aa690  addi 3, 3, -23200
  03aa694  fmadds 1, 2, 2, 1
  03aa698  lfs 2, 4(3)
  03aa69c  fmadds 1, 3, 3, 1
  03aa6a0  fsqrts 1, 1
  03aa6a4  fcmpu 0, 1, 2
  03aa6a8  cror 6, 1, 2
  03aa6ac  bt 6, 0x3aa6c4
  03aa6b0  ori 3, 31, 0
  03aa6b4  bl 0x106360
  03aa6b8  nop
  03aa6bc  li 3, 23
  03aa6c0  stb 3, 127(31)
  03aa6c4  lis 3, 161
  03aa6c8  lwz 3, 1800(3)
  03aa6cc  cmpwi 3, 2
  03aa6d0  bt 2, 0x3ab468
  03aa6d4  lbz 3, 32(31)
  03aa6d8  cmpwi 3, 7
  03aa6dc  cmpwi 1, 3, 6
  03aa6e0  cmpwi 6, 3, 5
  03aa6e4  cmpwi 7, 3, 4
  03aa6e8  bt 2, 0x3ab388
  03aa6ec  bt 6, 0x3ab2e0
  03aa6f0  bt 26, 0x3ab208
  03aa6f4  bt 30, 0x3aac40
  03aa6f8  cmpwi 3, 3
  03aa6fc  bt 2, 0x3aab50
  03aa700  cmpwi 3, 2
  03aa704  bt 2, 0x3aac40
  03aa708  cmpwi 3, 1
  03aa70c  bt 2, 0x3aa814
  03aa710  cmpwi 3, 0
  03aa714  bf 2, 0x3ab468
  03aa718  lis 3, 16448
  03aa71c  li 4, 3
  03aa720  li 5, 2
  03aa724  li 6, 6
  03aa728  stw 3, 32(30)
  03aa72c  sth 4, 36(30)
  03aa730  li 7, 8
  03aa734  stb 5, 40(30)
  03aa738  lwz 3, 384(30)
  03aa73c  stb 6, 90(30)
  03aa740  cmpwi 3, -1
  03aa744  stb 7, 88(30)
  03aa748  bf 2, 0x3aa774
  03aa74c  lis 3, 101
  03aa750  lhz 4, 178(31)
  03aa754  addic 3, 3, 27144
  03aa758  extsh 4, 4
  03aa75c  bl 0x5cd098
  03aa760  nop
  03aa764  ori 3, 31, 0
  03aa768  bl 0xefb38
  03aa76c  nop
  03aa770  b 0x3ab468
  03aa774  addic 3, 30, 208
  03aa778  bl 0x100f8c
  03aa77c  nop
  03aa780  lis 4, 59
  03aa784  lis 3, 16128
  03aa788  addi 29, 4, -23200
  03aa78c  stw 3, 220(30)
  03aa790  stw 3, 216(30)
  03aa794  lfs 1, 8(29)
  03aa798  bl 0x502758
  03aa79c  nop
  03aa7a0  stw 3, 208(30)
  03aa7a4  lis 3, 114
  03aa7a8  lfs 1, 12(29)
  03aa7ac  lfs 2, -3052(3)
  03aa7b0  li 3, 1
  03aa7b4  fmuls 1, 2, 1
  03aa7b8  stfs 1, 244(30)
  03aa7bc  lbz 4, 83(31)
  03aa7c0  stb 3, 32(31)
  03aa7c4  cmpwi 4, 1
  03aa7c8  bt 2, 0x3aa808
  03aa7cc  lis 3, 59
  03aa7d0  lis 4, 114
  03aa7d4  addi 3, 3, -23200
  03aa7d8  li 5, 0
  03aa7dc  lfs 1, 16(3)
  03aa7e0  lfs 2, -3056(4)
  03aa7e4  ori 3, 31, 0
  03aa7e8  fmuls 1, 2, 1
  03aa7ec  li 4, 1
  03aa7f0  fctiwz 1, 1
  03aa7f4  stfd 1, 328(1)
  03aa7f8  lwz 6, 332(1)
  03aa7fc  extsw 6, 6
  03aa800  bl 0xfddc0
  03aa804  nop
  03aa808  li 3, -1
  03aa80c  stw 3, 404(30)
  03aa810  b 0x3ab468
  03aa814  lis 3, 59
  03aa818  li 4, 0
  03aa81c  addi 28, 3, -23200
  03aa820  addic 3, 31, 16
  03aa824  lfs 31, 20(28)
  03aa828  fmr 1, 31
  03aa82c  bl 0xffb70
  03aa830  nop
  03aa834  fadds 1, 1, 31
  03aa838  lfs 2, 24(31)
  03aa83c  lfs 3, 24(28)
  03aa840  lfs 4, 16(31)
  03aa844  lfs 5, 20(31)
  03aa848  lis 4, 115
  03aa84c  addic 3, 31, 72
  03aa850  addic 4, 4, 22784
  03aa854  fsubs 1, 1, 2
  03aa858  fmadds 1, 1, 3, 2
  03aa85c  stfs 1, 24(31)
  03aa860  lfs 1, 16(29)
  03aa864  lfs 2, 20(29)
  03aa868  fsubs 1, 1, 4
  03aa86c  fsubs 2, 2, 5
  03aa870  fabs 3, 1
  03aa874  fabs 5, 2
  03aa878  stfs 1, 252(1)
  03aa87c  stfs 2, 256(1)
  03aa880  fsubs 1, 3, 5
  03aa884  stfs 1, 260(1)
  03aa888  lwz 5, 252(1)
  03aa88c  lfs 4, 28(28)
  03aa890  lfs 1, 252(1)
  03aa894  lwz 6, 256(1)
  03aa898  lfs 2, 256(1)
  03aa89c  lwz 7, 260(1)
  03aa8a0  rlwinm 6, 6, 3, 29, 29
  03aa8a4  lfs 6, 260(1)
  03aa8a8  fabs 1, 1
  03aa8ac  rlwimi 6, 7, 2, 30, 30
  03aa8b0  fabs 2, 2
  03aa8b4  fsub 7, 6, 4
  03aa8b8  fsub 6, 6, 4
  03aa8bc  rlwimi 6, 5, 4, 28, 28
  03aa8c0  ori 5, 4, 0
  03aa8c4  rlwimi 5, 6, 2, 26, 28
  03aa8c8  slwi 6, 6, 2
  03aa8cc  clrldi 5, 5, 32
  03aa8d0  fsel 5, 7, 1, 5
  03aa8d4  lfsx 1, 4, 6
  03aa8d8  fsel 3, 6, 2, 3
  03aa8dc  lfs 2, 4(5)
  03aa8e0  fcmpu 0, 5, 4
  03aa8e4  bt 1, 0x3aa8ec
  03aa8e8  b 0x3aaa0c
  03aa8ec  fsubs 6, 3, 5
  03aa8f0  fadds 3, 3, 5
  03aa8f4  addic 4, 1, 16
  03aa8f8  li 8, 2
  03aa8fc  addic 5, 4, 280
  03aa900  addic 6, 4, 296
  03aa904  mtctr 8
  03aa908  fdivs 3, 6, 3
  03aa90c  fmuls 5, 3, 3
  03aa910  stfs 3, 308(1)
  03aa914  stfs 3, 300(1)
  03aa918  stfs 3, 304(1)
  03aa91c  stfs 3, 296(1)
  03aa920  lfs 7, 308(1)
  03aa924  lfs 8, 300(1)
  03aa928  lfs 9, 304(1)
  03aa92c  fmuls 6, 5, 5
  03aa930  fmuls 8, 8, 5
  03aa934  fmuls 7, 7, 6
  03aa938  fmuls 3, 6, 6
  03aa93c  fmuls 6, 9, 6
  03aa940  stfs 8, 300(1)
  03aa944  fmuls 5, 7, 5
  03aa948  stfs 6, 304(1)
  03aa94c  stfs 5, 308(1)
  03aa950  lfs 5, 280(4)
  03aa954  fmuls 5, 5, 3
  03aa958  stfs 5, 296(4)
  03aa95c  lfs 5, 4(5)
  03aa960  addic 4, 4, 8
  03aa964  addic 5, 5, 8
  03aa968  fmuls 5, 5, 3
  03aa96c  stfs 5, 4(6)
  03aa970  addic 6, 6, 8
  03aa974  bdnz 0x3aa950
  03aa978  li 6, 4
  03aa97c  ori 4, 1, 0
  03aa980  mtctr 6
  03aa984  lis 5, 115
  03aa988  addic 6, 4, 296
  03aa98c  addic 5, 5, 22752
  03aa990  ori 7, 6, 0
  03aa994  lfs 3, 296(4)
  03aa998  lfs 5, 0(5)
  03aa99c  fmuls 3, 3, 5
  03aa9a0  lfs 5, 4(5)
  03aa9a4  addic 5, 5, 8
  03aa9a8  stfs 3, 296(4)
  03aa9ac  lfs 3, 4(6)
  03aa9b0  addic 4, 4, 8
  03aa9b4  fmuls 3, 3, 5
  03aa9b8  stfs 3, 4(6)
  03aa9bc  addic 6, 6, 8
  03aa9c0  bdnz 0x3aa994
  03aa9c4  ori 4, 1, 0
  03aa9c8  mtctr 8
  03aa9cc  lfs 3, 296(4)
  03aa9d0  fadds 3, 4, 3
  03aa9d4  lfs 4, 4(7)
  03aa9d8  addic 4, 4, 16
  03aa9dc  lfs 5, 8(7)
  03aa9e0  lfs 6, 12(7)
  03aa9e4  addic 7, 7, 16
  03aa9e8  fadds 3, 3, 4
  03aa9ec  fadds 4, 3, 5
  03aa9f0  fadds 4, 4, 6
  03aa9f4  bdnz 0x3aa9cc
  03aa9f8  lis 4, 59
  03aa9fc  addi 4, 4, -23200
  03aaa00  lfs 3, 32(4)
  03aaa04  fadds 4, 4, 3
  03aaa08  fmadds 4, 4, 1, 2
  03aaa0c  lis 4, 59
  03aaa10  fmr 1, 4
  03aaa14  lis 6, 114
  03aaa18  addi 4, 4, -23200
  03aaa1c  lis 5, 114
  03aaa20  lfs 3, 36(4)
  03aaa24  lfs 6, 40(4)
  03aaa28  lfs 5, -3048(6)
  03aaa2c  lfs 7, -3052(5)
  03aaa30  fmuls 2, 5, 3
  03aaa34  addic 5, 30, 396
  03aaa38  fmuls 4, 7, 6
  03aaa3c  fmr 3, 2
  03aaa40  bl 0x10a2e0
  03aaa44  nop
  03aaa48  lbz 3, 112(31)
  03aaa4c  rlwinm 3, 3, 0, 30, 30
  03aaa50  cmpwi 3, 0
  03aaa54  bt 2, 0x3aaaf4
  03aaa58  li 3, 19
  03aaa5c  bl 0xfc620
  03aaa60  nop
  03aaa64  cmpwi 3, 0
  03aaa68  bf 2, 0x3aaaa4
  03aaa6c  lbz 3, 83(31)
  03aaa70  cmpwi 3, 2
  03aaa74  bt 2, 0x3aaad8
  03aaa78  li 3, 7
  03aaa7c  li 4, 12
  03aaa80  bl 0xfe484
  03aaa84  nop
  03aaa88  ori 6, 3, 0
  03aaa8c  ori 3, 31, 0
  03aaa90  li 4, 2
  03aaa94  li 5, 0
  03aaa98  bl 0xfddc0
  03aaa9c  nop
  03aaaa0  b 0x3aaad8
  03aaaa4  lbz 3, 83(31)
  03aaaa8  cmpwi 3, 1
  03aaaac  bt 2, 0x3aaad8
  03aaab0  li 3, 7
  03aaab4  li 4, 14
  03aaab8  bl 0xfe484
  03aaabc  nop
  03aaac0  ori 6, 3, 0
  03aaac4  ori 3, 31, 0
  03aaac8  li 4, 1
  03aaacc  li 5, 0
  03aaad0  bl 0xfddc0
  03aaad4  nop
  03aaad8  lis 3, 59
  03aaadc  addi 3, 3, -23200
  03aaae0  lfs 1, 44(3)
  03aaae4  lfs 2, 48(3)
  03aaae8  bl 0xfcbe8
  03aaaec  nop
  03aaaf0  stfs 1, 88(31)
  03aaaf4  lwz 3, 356(30)
  03aaaf8  cmpwi 3, 2
  03aaafc  bt 2, 0x3ab468
  03aab00  lbz 3, 33(31)
  03aab04  cmpwi 3, 255
  03aab08  bt 2, 0x3aab18
  03aab0c  li 4, 1
  03aab10  bl 0x104298
  03aab14  nop
  03aab18  lwz 3, 404(30)
  03aab1c  cmpwi 3, -1
  03aab20  bf 2, 0x3aab3c
  03aab24  li 3, 1
  03aab28  li 4, 4
  03aab2c  ori 5, 31, 0
  03aab30  bl 0x15d12c
  03aab34  nop
  03aab38  stw 3, 404(30)
  03aab3c  li 3, 1
  03aab40  li 4, 2
  03aab44  stw 3, 408(30)
  03aab48  stb 4, 32(31)
  03aab4c  b 0x3ab468
  03aab50  lbz 3, 112(31)
  03aab54  rlwinm 3, 3, 0, 30, 30
  03aab58  cmpwi 3, 0
  03aab5c  bt 2, 0x3ab468
  03aab60  lbz 3, 33(31)
  03aab64  cmpwi 3, 255
  03aab68  bt 2, 0x3aab78
  03aab6c  li 4, 1
  03aab70  bl 0x104298
  03aab74  nop
  03aab78  li 3, 1
  03aab7c  li 4, 4
  03aab80  stw 3, 408(30)
  03aab84  stb 4, 32(31)
  03aab88  lwz 3, 404(30)
  03aab8c  cmpwi 3, -1
  03aab90  bf 2, 0x3aabac
  03aab94  li 3, 1
  03aab98  li 4, 4
  03aab9c  ori 5, 31, 0
  03aaba0  bl 0x15d12c
  03aaba4  nop
  03aaba8  stw 3, 404(30)
  03aabac  lbz 3, 83(31)
  03aabb0  cmpwi 3, 4
  03aabb4  bt 2, 0x3aabf4
  03aabb8  lis 3, 59
  03aabbc  lis 4, 114
  03aabc0  addi 3, 3, -23200
  03aabc4  li 5, 0
  03aabc8  lfs 1, 16(3)
  03aabcc  lfs 2, -3056(4)
  03aabd0  ori 3, 31, 0
  03aabd4  li 4, 4
  03aabd8  fmuls 1, 2, 1
  03aabdc  fctiwz 1, 1
  03aabe0  stfd 1, 328(1)
  03aabe4  lwz 6, 332(1)
  03aabe8  extsw 6, 6
  03aabec  bl 0xfddc0
  03aabf0  nop
  03aabf4  lwz 3, 388(30)
  03aabf8  cmpwi 3, 0
  03aabfc  bf 2, 0x3ab468
  03aac00  lis 3, 59
  03aac04  li 4, 52
  03aac08  vspltisw 2, -1
  03aac0c  addi 3, 3, -23200
  03aac10  lis 5, 114
  03aac14  li 6, -3056
  03aac18  vslw 2, 2, 2
  03aac1c  <unknown>
  03aac20  li 3, 388
  03aac24  vspltw 3, 3, 0
  03aac28  <unknown>
  03aac2c  vmaddfp 2, 4, 3, 2
  03aac30  vctsxs 2, 2, 0
  03aac34  vspltw 2, 2, 0
  03aac38  stvewx 2, 3, 30
  03aac3c  b 0x3ab468
  03aac40  lfs 1, 16(29)
  03aac44  lfs 2, 16(31)
  03aac48  lfs 3, 20(29)
  03aac4c  lfs 4, 20(31)
  03aac50  fsubs 1, 1, 2
  03aac54  lis 3, 59
  03aac58  fsubs 2, 3, 4
  03aac5c  addi 4, 3, -23200
  03aac60  li 5, 24
  03aac64  lis 6, 115
  03aac68  addic 3, 31, 72
  03aac6c  fabs 3, 1
  03aac70  fabs 4, 2
  03aac74  stfs 1, 240(1)
  03aac78  stfs 2, 244(1)
  03aac7c  fsubs 1, 3, 4
  03aac80  stfs 1, 248(1)
  03aac84  lwz 7, 240(1)
  03aac88  lfs 30, 28(4)
  03aac8c  lfs 1, 240(1)
  03aac90  lwz 4, 244(1)
  03aac94  <unknown>
  03aac98  lfs 2, 244(1)
  03aac9c  addic 5, 6, 22784
  03aaca0  fabs 1, 1
  03aaca4  fabs 5, 2
  03aaca8  rlwinm 4, 4, 3, 29, 29
  03aacac  lwz 6, 248(1)
  03aacb0  lfs 2, 248(1)
  03aacb4  rlwimi 4, 6, 2, 30, 30
  03aacb8  fsub 6, 2, 30
  03aacbc  fsub 7, 2, 30
  03aacc0  rlwimi 4, 7, 4, 28, 28
  03aacc4  ori 6, 5, 0
  03aacc8  rlwimi 6, 4, 2, 26, 28
  03aaccc  slwi 4, 4, 2
  03aacd0  clrldi 6, 6, 32
  03aacd4  fsel 4, 6, 1, 4
  03aacd8  lfsx 1, 5, 4
  03aacdc  lfs 2, 4(6)
  03aace0  fsel 3, 7, 5, 3
  03aace4  fcmpu 0, 4, 30
  03aace8  bt 1, 0x3aacf4
  03aacec  fmr 1, 30
  03aacf0  b 0x3aae18
  03aacf4  fsubs 5, 3, 4
  03aacf8  fadds 3, 3, 4
  03aacfc  addic 4, 1, 16
  03aad00  li 7, 2
  03aad04  addic 5, 4, 248
  03aad08  addic 6, 4, 264
  03aad0c  mtctr 7
  03aad10  fdivs 3, 5, 3
  03aad14  fmuls 4, 3, 3
  03aad18  stfs 3, 276(1)
  03aad1c  stfs 3, 268(1)
  03aad20  stfs 3, 272(1)
  03aad24  stfs 3, 264(1)
  03aad28  lfs 6, 276(1)
  03aad2c  lfs 7, 268(1)
  03aad30  lfs 8, 272(1)
  03aad34  fmuls 5, 4, 4
  03aad38  fmuls 7, 7, 4
  03aad3c  fmuls 6, 6, 5
  03aad40  fmuls 3, 5, 5
  03aad44  fmuls 5, 8, 5
  03aad48  stfs 7, 268(1)
  03aad4c  fmuls 4, 6, 4
  03aad50  stfs 5, 272(1)
  03aad54  stfs 4, 276(1)
  03aad58  lfs 4, 248(4)
  03aad5c  fmuls 4, 4, 3
  03aad60  stfs 4, 264(4)
  03aad64  lfs 4, 4(5)
  03aad68  addic 4, 4, 8
  03aad6c  addic 5, 5, 8
  03aad70  fmuls 4, 4, 3
  03aad74  stfs 4, 4(6)
  03aad78  addic 6, 6, 8
  03aad7c  bdnz 0x3aad58
  03aad80  li 6, 4
  03aad84  ori 4, 1, 0
  03aad88  mtctr 6
  03aad8c  lis 5, 115
  03aad90  addic 6, 4, 264
  03aad94  addic 5, 5, 22752
  03aad98  ori 8, 6, 0
  03aad9c  lfs 3, 264(4)
  03aada0  lfs 4, 0(5)
  03aada4  fmuls 3, 3, 4
  03aada8  lfs 4, 4(5)
  03aadac  addic 5, 5, 8
  03aadb0  stfs 3, 264(4)
  03aadb4  lfs 3, 4(6)
  03aadb8  addic 4, 4, 8
  03aadbc  fmuls 3, 3, 4
  03aadc0  stfs 3, 4(6)
  03aadc4  addic 6, 6, 8
  03aadc8  bdnz 0x3aad9c
  03aadcc  fmr 3, 30
  03aadd0  ori 4, 1, 0
  03aadd4  mtctr 7
  03aadd8  lfs 4, 264(4)
  03aaddc  fadds 3, 3, 4
  03aade0  addic 4, 4, 16
  03aade4  lfs 4, 4(8)
  03aade8  lfs 5, 8(8)
  03aadec  lfs 6, 12(8)
  03aadf0  addic 8, 8, 16
  03aadf4  fadds 3, 3, 4
  03aadf8  fadds 3, 3, 5
  03aadfc  fadds 3, 3, 6
  03aae00  bdnz 0x3aadd8
  03aae04  lis 4, 59
  03aae08  addi 4, 4, -23200
  03aae0c  lfs 4, 32(4)
  03aae10  fadds 3, 3, 4
  03aae14  fmadds 1, 3, 1, 2
  03aae18  lis 4, 59
  03aae1c  lis 6, 114
  03aae20  addi 28, 4, -23200
  03aae24  lis 4, 114
  03aae28  addic 5, 30, 396
  03aae2c  lfs 2, 36(28)
  03aae30  lfs 3, -3048(4)
  03aae34  lfs 4, 40(28)
  03aae38  fmuls 2, 3, 2
  03aae3c  lfs 5, -3052(6)
  03aae40  fmuls 4, 5, 4
  03aae44  fmr 3, 2
  03aae48  bl 0x10a2e0
  03aae4c  nop
  03aae50  lfs 1, 20(31)
  03aae54  lfs 2, 20(29)
  03aae58  lfs 3, 16(31)
  03aae5c  fsubs 1, 1, 2
  03aae60  lfs 2, 16(29)
  03aae64  fsubs 2, 3, 2
  03aae68  fmuls 1, 1, 1
  03aae6c  fmadds 31, 2, 2, 1
  03aae70  lfs 1, 56(28)
  03aae74  lwz 29, 408(30)
  03aae78  fsqrts 31, 31
  03aae7c  fcmpu 0, 31, 1
  03aae80  cror 6, 0, 2
  03aae84  bt 6, 0x3aae90
  03aae88  li 29, 1
  03aae8c  stw 29, 408(30)
  03aae90  lis 3, 59
  03aae94  cmpwi 1, 29, 0
  03aae98  addi 3, 3, -23200
  03aae9c  lfs 1, 60(3)
  03aaea0  fcmpu 0, 31, 1
  03aaea4  cror 2, 1, 2
  03aaea8  bt 2, 0x3aaeb8
  03aaeac  li 3, 0
  03aaeb0  stw 3, 408(30)
  03aaeb4  b 0x3ab080
  03aaeb8  bt 6, 0x3ab080
  03aaebc  lis 3, 59
  03aaec0  lfs 1, 72(31)
  03aaec4  addi 3, 3, -23200
  03aaec8  lfs 2, 64(3)
  03aaecc  lfs 3, 68(3)
  03aaed0  fadds 2, 1, 2
  03aaed4  fsubs 5, 3, 1
  03aaed8  lfs 4, 72(3)
  03aaedc  li 4, 0
  03aaee0  vspltisw 3, -1
  03aaee4  li 9, 24
  03aaee8  li 6, 92
  03aaeec  lis 5, 151
  03aaef0  fsubs 3, 3, 2
  03aaef4  fsub 7, 1, 5
  03aaef8  fsubs 6, 4, 2
  03aaefc  fsubs 4, 4, 1
  03aaf00  addic 5, 5, -25376
  03aaf04  li 7, 136
  03aaf08  vslw 3, 3, 3
  03aaf0c  li 8, 24
  03aaf10  fsub 8, 2, 3
  03aaf14  fsel 1, 7, 5, 1
  03aaf18  li 10, 96
  03aaf1c  vspltisw 4, -1
  03aaf20  fsel 2, 8, 3, 2
  03aaf24  fsub 5, 4, 1
  03aaf28  lfs 3, 76(3)
  03aaf2c  lfs 7, 80(3)
  03aaf30  vslw 4, 4, 4
  03aaf34  fsub 8, 6, 2
  03aaf38  fsel 1, 5, 4, 1
  03aaf3c  lfs 4, 84(3)
  03aaf40  fsel 2, 8, 6, 2
  03aaf44  fmuls 5, 1, 1
  03aaf48  lfs 6, 88(3)
  03aaf4c  fmuls 8, 2, 2
  03aaf50  fmuls 9, 5, 1
  03aaf54  fmuls 10, 8, 2
  03aaf58  fmuls 11, 5, 9
  03aaf5c  fmadds 1, 9, 3, 1
  03aaf60  fmuls 9, 8, 10
  03aaf64  fmadds 2, 10, 3, 2
  03aaf68  fmuls 3, 5, 11
  03aaf6c  fmadds 1, 11, 7, 1
  03aaf70  lfs 10, 244(30)
  03aaf74  fmuls 11, 8, 9
  03aaf78  fmadds 2, 9, 7, 2
  03aaf7c  fmuls 5, 5, 3
  03aaf80  fmadds 1, 3, 4, 1
  03aaf84  fmuls 3, 8, 11
  03aaf88  fmadds 2, 11, 4, 2
  03aaf8c  fmadds 1, 5, 6, 1
  03aaf90  fmadds 2, 3, 6, 2
  03aaf94  fmuls 2, 2, 10
  03aaf98  stfs 2, 192(1)
  03aaf9c  lfs 2, 244(30)
  03aafa0  stw 4, 200(1)
  03aafa4  fmuls 1, 1, 2
  03aafa8  <unknown>
  03aafac  li 4, 200
  03aafb0  stfs 1, 196(1)
  03aafb4  <unknown>
  03aafb8  <unknown>
  03aafbc  vspltw 5, 5, 0
  03aafc0  lis 6, 114
  03aafc4  <unknown>
  03aafc8  li 7, -3064
  03aafcc  li 5, 100
  03aafd0  vspltw 7, 7, 0
  03aafd4  vaddfp 5, 6, 5
  03aafd8  <unknown>
  03aafdc  vspltw 6, 6, 0
  03aafe0  vsubfp 8, 5, 31
  03aafe4  vcmpgtfp 2, 5, 2
  03aafe8  <unknown>
  03aafec  vsel 2, 6, 7, 2
  03aaff0  vmaddfp 3, 8, 2, 3
  03aaff4  vspltw 3, 3, 0
  03aaff8  stvewx 3, 4, 1
  03aaffc  <unknown>
  03ab000  vspltw 2, 2, 0
  03ab004  vmaddfp 2, 31, 2, 4
  03ab008  vspltw 2, 2, 0
  03ab00c  vcmpgtfp. 4, 3, 2
  03ab010  bt 26, 0x3ab020
  03ab014  li 3, 200
  03ab018  stvewx 2, 3, 1
  03ab01c  b 0x3ab054
  03ab020  lis 3, 59
  03ab024  li 4, 104
  03ab028  vspltisw 2, -1
  03ab02c  addi 3, 3, -23200
  03ab030  vslw 2, 2, 2
  03ab034  <unknown>
  03ab038  vspltw 4, 4, 0
  03ab03c  vmaddfp 31, 31, 4, 2
  03ab040  vspltw 31, 31, 0
  03ab044  vcmpgefp. 2, 3, 31
  03ab048  bf 26, 0x3ab054
  03ab04c  li 3, 200
  03ab050  stvewx 31, 3, 1
  03ab054  lis 4, 59
  03ab058  fmr 1, 30
  03ab05c  ori 3, 31, 0
  03ab060  fmr 3, 30
  03ab064  addi 5, 4, -23200
  03ab068  li 8, 0
  03ab06c  addic 4, 1, 192
  03ab070  lfs 2, 20(5)
  03ab074  bl 0x1009b0
  03ab078  nop
  03ab07c  b 0x3ab190
  03ab080  vspltisw 2, 0
  03ab084  lis 4, 59
  03ab088  vspltisw 6, -1
  03ab08c  li 3, 208
  03ab090  addi 4, 4, -23200
  03ab094  li 6, 108
  03ab098  lis 5, 151
  03ab09c  li 7, 136
  03ab0a0  addic 5, 5, -25376
  03ab0a4  stvx 2, 3, 1
  03ab0a8  <unknown>
  03ab0ac  li 3, 24
  03ab0b0  vspltw 2, 2, 0
  03ab0b4  <unknown>
  03ab0b8  li 6, 96
  03ab0bc  li 5, 24
  03ab0c0  vaddfp 2, 3, 2
  03ab0c4  <unknown>
  03ab0c8  li 7, -3064
  03ab0cc  li 3, 216
  03ab0d0  <unknown>
  03ab0d4  <unknown>
  03ab0d8  li 5, 100
  03ab0dc  vspltw 3, 3, 0
  03ab0e0  lis 6, 114
  03ab0e4  vspltw 5, 5, 0
  03ab0e8  vsubfp 7, 2, 31
  03ab0ec  vcmpgtfp 2, 2, 4
  03ab0f0  <unknown>
  03ab0f4  vslw 4, 6, 6
  03ab0f8  vsel 2, 5, 3, 2
  03ab0fc  vspltisw 3, -1
  03ab100  vmaddfp 2, 7, 2, 4
  03ab104  vslw 4, 3, 3
  03ab108  vspltw 3, 2, 0
  03ab10c  stvewx 3, 3, 1
  03ab110  <unknown>
  03ab114  vspltw 2, 2, 0
  03ab118  vmaddfp 2, 31, 2, 4
  03ab11c  vspltw 2, 2, 0
  03ab120  vcmpgtfp. 4, 3, 2
  03ab124  bt 26, 0x3ab134
  03ab128  li 3, 216
  03ab12c  stvewx 2, 3, 1
  03ab130  b 0x3ab168
  03ab134  lis 3, 59
  03ab138  vspltisw 2, -1
  03ab13c  li 4, 104
  03ab140  addi 3, 3, -23200
  03ab144  vslw 2, 2, 2
  03ab148  <unknown>
  03ab14c  vspltw 4, 4, 0
  03ab150  vmaddfp 31, 31, 4, 2
  03ab154  vspltw 31, 31, 0
  03ab158  vcmpgefp. 2, 3, 31
  03ab15c  bf 26, 0x3ab168
  03ab160  li 3, 216
  03ab164  stvewx 31, 3, 1
  03ab168  lis 3, 59
  03ab16c  li 8, 0
  03ab170  fmr 1, 30
  03ab174  addi 5, 3, -23200
  03ab178  fmr 3, 30
  03ab17c  addic 4, 1, 208
  03ab180  ori 3, 31, 0
  03ab184  lfs 2, 20(5)
  03ab188  bl 0x1009b0
  03ab18c  nop
  03ab190  lis 3, 59
  03ab194  addi 3, 3, -23200
  03ab198  lfs 1, 112(3)
  03ab19c  fcmpu 0, 31, 1
  03ab1a0  cror 6, 1, 2
  03ab1a4  bt 6, 0x3ab468
  03ab1a8  lbz 3, 32(31)
  03ab1ac  cmpwi 3, 2
  03ab1b0  bf 2, 0x3ab468
  03ab1b4  li 3, 3
  03ab1b8  lbz 4, 83(31)
  03ab1bc  cmpwi 4, 3
  03ab1c0  stb 3, 32(31)
  03ab1c4  bt 2, 0x3ab468
  03ab1c8  lis 3, 59
  03ab1cc  lis 4, 114
  03ab1d0  addi 3, 3, -23200
  03ab1d4  li 5, 0
  03ab1d8  lfs 1, 16(3)
  03ab1dc  lfs 2, -3056(4)
  03ab1e0  ori 3, 31, 0
  03ab1e4  li 4, 3
  03ab1e8  fmuls 1, 2, 1
  03ab1ec  fctiwz 1, 1
  03ab1f0  stfd 1, 328(1)
  03ab1f4  lwz 6, 332(1)
  03ab1f8  extsw 6, 6
  03ab1fc  bl 0xfddc0
  03ab200  nop
  03ab204  b 0x3ab468
  03ab208  lfs 31, 24(31)
  03ab20c  addic 4, 30, 112
  03ab210  ori 3, 31, 0
  03ab214  bl 0x10b030
  03ab218  nop
  03ab21c  stfs 31, 24(31)
  03ab220  lfs 1, 116(30)
  03ab224  lfs 2, 112(30)
  03ab228  fmuls 1, 1, 1
  03ab22c  li 3, 0
  03ab230  lis 4, 59
  03ab234  addi 4, 4, -23200
  03ab238  stw 3, 120(30)
  03ab23c  lis 3, 114
  03ab240  fmadds 1, 2, 2, 1
  03ab244  lfs 2, 116(4)
  03ab248  lfs 3, -3052(3)
  03ab24c  fmuls 2, 3, 2
  03ab250  fsqrts 1, 1
  03ab254  fcmpu 0, 1, 2
  03ab258  cror 6, 1, 2
  03ab25c  bt 6, 0x3ab468
  03ab260  lwz 3, 404(30)
  03ab264  cmpwi 3, -1
  03ab268  bf 2, 0x3ab284
  03ab26c  li 3, 1
  03ab270  li 4, 4
  03ab274  ori 5, 31, 0
  03ab278  bl 0x15d12c
  03ab27c  nop
  03ab280  stw 3, 404(30)
  03ab284  li 3, 1
  03ab288  li 4, 4
  03ab28c  stw 3, 408(30)
  03ab290  stb 4, 32(31)
  03ab294  lwz 3, 388(30)
  03ab298  cmpwi 3, 0
  03ab29c  bf 2, 0x3ab468
  03ab2a0  lis 3, 59
  03ab2a4  li 4, 52
  03ab2a8  vspltisw 2, -1
  03ab2ac  addi 3, 3, -23200
  03ab2b0  lis 5, 114
  03ab2b4  li 6, -3056
  03ab2b8  vslw 2, 2, 2
  03ab2bc  <unknown>
  03ab2c0  li 3, 388
  03ab2c4  vspltw 3, 3, 0
  03ab2c8  <unknown>
  03ab2cc  vmaddfp 2, 4, 3, 2
  03ab2d0  vctsxs 2, 2, 0
  03ab2d4  vspltw 2, 2, 0
  03ab2d8  stvewx 2, 3, 30
  03ab2dc  b 0x3ab468
  03ab2e0  lwz 3, 404(30)
  03ab2e4  cmpwi 3, -1
  03ab2e8  bt 2, 0x3ab32c
  03ab2ec  sldi 4, 3, 7
  03ab2f0  sldi 6, 3, 4
  03ab2f4  lis 5, 150
  03ab2f8  subc 4, 4, 6
  03ab2fc  addic 5, 5, 14176
  03ab300  extsw 4, 4
  03ab304  addc 4, 5, 4
  03ab308  lwz 5, 136(4)
  03ab30c  cmpw 5, 31
  03ab310  bf 2, 0x3ab32c
  03ab314  lbz 4, 116(4)
  03ab318  cmpwi 4, 0
  03ab31c  bt 2, 0x3ab32c
  03ab320  extsw 3, 3
  03ab324  bl 0x15cdb0
  03ab328  nop
  03ab32c  li 5, -1
  03ab330  addic 4, 30, 112
  03ab334  ori 3, 31, 0
  03ab338  stw 5, 404(30)
  03ab33c  bl 0x10b030
  03ab340  nop
  03ab344  li 4, 289
  03ab348  and 3, 3, 4
  03ab34c  cmpwi 3, 0
  03ab350  bt 2, 0x3ab468
  03ab354  lis 4, 59
  03ab358  ori 3, 31, 0
  03ab35c  addi 5, 4, -23200
  03ab360  li 6, 0
  03ab364  addic 4, 31, 16
  03ab368  lfs 1, 20(5)
  03ab36c  lfs 2, 120(5)
  03ab370  bl 0x10fb28
  03ab374  nop
  03ab378  ori 3, 31, 0
  03ab37c  bl 0xefb38
  03ab380  nop
  03ab384  b 0x3ab468
  03ab388  ori 3, 31, 0
  03ab38c  li 4, 0
  03ab390  li 5, -1
  03ab394  bl 0xfd8d0
  03ab398  nop
  03ab39c  lwz 3, 404(30)
  03ab3a0  cmpwi 3, -1
  03ab3a4  bt 2, 0x3ab3e8
  03ab3a8  sldi 4, 3, 7
  03ab3ac  sldi 6, 3, 4
  03ab3b0  lis 5, 150
  03ab3b4  subc 4, 4, 6
  03ab3b8  addic 5, 5, 14176
  03ab3bc  extsw 4, 4
  03ab3c0  addc 4, 5, 4
  03ab3c4  lwz 5, 136(4)
  03ab3c8  cmpw 5, 31
  03ab3cc  bf 2, 0x3ab3e8
  03ab3d0  lbz 4, 116(4)
  03ab3d4  cmpwi 4, 0
  03ab3d8  bt 2, 0x3ab3e8
  03ab3dc  extsw 3, 3
  03ab3e0  bl 0x15cdb0
  03ab3e4  nop
  03ab3e8  li 6, -1
  03ab3ec  li 7, 0
  03ab3f0  lis 3, 59
  03ab3f4  addic 4, 1, 224
  03ab3f8  addi 8, 3, -23200
  03ab3fc  stw 6, 404(30)
  03ab400  stw 7, 236(1)
  03ab404  ori 3, 31, 0
  03ab408  stw 7, 232(1)
  03ab40c  addic 5, 31, 16
  03ab410  stw 7, 228(1)
  03ab414  li 9, 3
  03ab418  stw 7, 224(1)
  03ab41c  li 10, 16
  03ab420  lfs 1, 116(8)
  03ab424  lfs 2, 132(8)
  03ab428  lfs 3, 124(8)
  03ab42c  fmr 4, 1
  03ab430  lfs 5, 128(8)
  03ab434  fmr 6, 2
  03ab438  lfs 7, 136(8)
  03ab43c  std 7, 144(1)
  03ab440  std 7, 160(1)
  03ab444  li 8, 10
  03ab448  std 7, 168(1)
  03ab44c  std 6, 176(1)
  03ab450  std 7, 184(1)
  03ab454  bl 0x10e030
  03ab458  nop
  03ab45c  ori 3, 31, 0
  03ab460  bl 0xefb38
  03ab464  nop
  03ab468  li 0, 352
  03ab46c  lvx 31, 1, 0
  03ab470  ld 0, 432(1)
  03ab474  mtlr 0
  03ab478  lfd 30, 400(1)
  03ab47c  lfd 31, 408(1)
  03ab480  ld 28, 368(1)
  03ab484  ld 29, 376(1)
  03ab488  ld 30, 384(1)
  03ab48c  ld 31, 392(1)
  03ab490  addi 1, 1, 416
  03ab494  blr
