# game/update/moby1906.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1906_002d5ad0:   # 0x2d5ad0, 0x14 bytes
  02d5ad0  lis 3, 126
  02d5ad4  lis 4, 1
  02d5ad8  addic 3, 3, -30668
  02d5adc  stw 4, 72(3)
  02d5ae0  blr

M1906_002d5b20:   # 0x2d5b20, 0x3f4 bytes
  02d5b20  stdu 1, -256(1)
  02d5b24  mflr 0
  02d5b28  std 0, 272(1)
  02d5b2c  stfd 29, 232(1)
  02d5b30  stfd 30, 240(1)
  02d5b34  stfd 31, 248(1)
  02d5b38  lfs 1, 16(3)
  02d5b3c  li 4, 256
  02d5b40  std 31, 224(1)
  02d5b44  addc 4, 1, 4
  02d5b48  ori 31, 3, 0
  02d5b4c  std 5, 64(4)
  02d5b50  lfs 30, 68(4)
  02d5b54  lfs 2, 20(3)
  02d5b58  lis 5, 45
  02d5b5c  lfs 29, 64(4)
  02d5b60  fsubs 2, 30, 2
  02d5b64  fsubs 1, 29, 1
  02d5b68  addi 5, 5, 23272
  02d5b6c  lis 4, 115
  02d5b70  addic 4, 4, 22784
  02d5b74  fabs 4, 2
  02d5b78  fabs 5, 1
  02d5b7c  stfs 2, 136(1)
  02d5b80  std 30, 216(1)
  02d5b84  stfs 1, 132(1)
  02d5b88  lwz 30, 120(3)
  02d5b8c  lwz 6, 136(1)
  02d5b90  rlwinm 6, 6, 3, 29, 29
  02d5b94  fsubs 1, 5, 4
  02d5b98  stfs 1, 140(1)
  02d5b9c  lwz 7, 132(1)
  02d5ba0  lfs 31, 0(5)
  02d5ba4  lfs 1, 132(1)
  02d5ba8  fabs 2, 1
  02d5bac  lfs 1, 136(1)
  02d5bb0  fabs 6, 1
  02d5bb4  lfs 1, 492(30)
  02d5bb8  lwz 3, 140(1)
  02d5bbc  lfs 3, 140(1)
  02d5bc0  rlwimi 6, 3, 2, 30, 30
  02d5bc4  fsub 7, 3, 31
  02d5bc8  fsub 8, 3, 31
  02d5bcc  rlwimi 6, 7, 4, 28, 28
  02d5bd0  ori 3, 4, 0
  02d5bd4  slwi 5, 6, 2
  02d5bd8  rlwimi 3, 6, 2, 26, 28
  02d5bdc  clrldi 3, 3, 32
  02d5be0  lfsx 3, 4, 5
  02d5be4  fsel 4, 7, 2, 4
  02d5be8  lfs 2, 4(3)
  02d5bec  fsel 5, 8, 6, 5
  02d5bf0  std 29, 208(1)
  02d5bf4  std 28, 200(1)
  02d5bf8  std 27, 192(1)
  02d5bfc  std 26, 184(1)
  02d5c00  fcmpu 0, 4, 31
  02d5c04  bt 1, 0x2d5c10
  02d5c08  fmr 3, 31
  02d5c0c  b 0x2d5d38
  02d5c10  fsubs 6, 5, 4
  02d5c14  fadds 4, 5, 4
  02d5c18  addic 6, 1, 16
  02d5c1c  li 3, 2
  02d5c20  addic 5, 6, 128
  02d5c24  addic 4, 6, 144
  02d5c28  mtctr 3
  02d5c2c  fdivs 4, 6, 4
  02d5c30  fmuls 6, 4, 4
  02d5c34  stfs 4, 156(1)
  02d5c38  stfs 4, 148(1)
  02d5c3c  stfs 4, 152(1)
  02d5c40  stfs 4, 144(1)
  02d5c44  lfs 7, 156(1)
  02d5c48  lfs 8, 148(1)
  02d5c4c  lfs 9, 152(1)
  02d5c50  fmuls 4, 6, 6
  02d5c54  fmuls 8, 8, 6
  02d5c58  fmuls 7, 7, 4
  02d5c5c  fmuls 5, 4, 4
  02d5c60  fmuls 4, 9, 4
  02d5c64  stfs 8, 148(1)
  02d5c68  fmuls 6, 7, 6
  02d5c6c  stfs 4, 152(1)
  02d5c70  stfs 6, 156(1)
  02d5c74  lfs 4, 128(6)
  02d5c78  fmuls 4, 4, 5
  02d5c7c  stfs 4, 144(6)
  02d5c80  lfs 4, 4(5)
  02d5c84  addic 6, 6, 8
  02d5c88  addic 5, 5, 8
  02d5c8c  fmuls 4, 4, 5
  02d5c90  stfs 4, 4(4)
  02d5c94  addic 4, 4, 8
  02d5c98  bdnz 0x2d5c74
  02d5c9c  ori 7, 1, 0
  02d5ca0  lis 6, 115
  02d5ca4  li 8, 4
  02d5ca8  addic 5, 7, 144
  02d5cac  addic 6, 6, 22752
  02d5cb0  ori 4, 5, 0
  02d5cb4  mtctr 8
  02d5cb8  lfs 4, 144(7)
  02d5cbc  lfs 5, 0(6)
  02d5cc0  fmuls 4, 4, 5
  02d5cc4  lfs 5, 4(6)
  02d5cc8  addic 6, 6, 8
  02d5ccc  stfs 4, 144(7)
  02d5cd0  lfs 4, 4(5)
  02d5cd4  addic 7, 7, 8
  02d5cd8  fmuls 4, 4, 5
  02d5cdc  stfs 4, 4(5)
  02d5ce0  addic 5, 5, 8
  02d5ce4  bdnz 0x2d5cb8
  02d5ce8  ori 5, 3, 0
  02d5cec  fmr 4, 31
  02d5cf0  ori 3, 1, 0
  02d5cf4  mtctr 5
  02d5cf8  lfs 5, 144(3)
  02d5cfc  fadds 4, 4, 5
  02d5d00  lfs 5, 4(4)
  02d5d04  addic 3, 3, 16
  02d5d08  lfs 6, 8(4)
  02d5d0c  lfs 7, 12(4)
  02d5d10  addic 4, 4, 16
  02d5d14  fadds 4, 4, 5
  02d5d18  fadds 4, 4, 6
  02d5d1c  fadds 4, 4, 7
  02d5d20  bdnz 0x2d5cf8
  02d5d24  lis 3, 45
  02d5d28  addi 3, 3, 23272
  02d5d2c  lfs 5, 4(3)
  02d5d30  fadds 4, 4, 5
  02d5d34  fmadds 3, 4, 3, 2
  02d5d38  fmr 2, 1
  02d5d3c  fmr 1, 3
  02d5d40  bl 0x502578
  02d5d44  nop
  02d5d48  lis 3, 45
  02d5d4c  lis 28, 114
  02d5d50  addi 29, 3, 23272
  02d5d54  lis 27, 114
  02d5d58  addic 3, 31, 72
  02d5d5c  addic 5, 30, 488
  02d5d60  lfs 4, 8(29)
  02d5d64  lfs 3, -3048(28)
  02d5d68  lfs 5, -3052(27)
  02d5d6c  fmuls 2, 3, 4
  02d5d70  fmuls 4, 5, 4
  02d5d74  fmr 3, 2
  02d5d78  bl 0x10a2e0
  02d5d7c  nop
  02d5d80  lfs 1, 20(31)
  02d5d84  lfs 2, 16(31)
  02d5d88  fsubs 1, 1, 30
  02d5d8c  fsubs 2, 2, 29
  02d5d90  li 26, 0
  02d5d94  addic 3, 1, 128
  02d5d98  addic 5, 30, 496
  02d5d9c  stw 26, 128(1)
  02d5da0  fmuls 1, 1, 1
  02d5da4  fmadds 1, 2, 2, 1
  02d5da8  lfs 2, 12(29)
  02d5dac  fsqrts 30, 1
  02d5db0  lfs 1, -3048(28)
  02d5db4  lfs 3, 16(29)
  02d5db8  lfs 4, -3052(27)
  02d5dbc  fmuls 2, 1, 2
  02d5dc0  fmuls 4, 4, 3
  02d5dc4  fmr 3, 2
  02d5dc8  fmr 1, 30
  02d5dcc  bl 0x109c30
  02d5dd0  nop
  02d5dd4  lfs 1, 20(29)
  02d5dd8  lfs 2, 72(31)
  02d5ddc  lfs 3, 24(29)
  02d5de0  fadds 1, 2, 1
  02d5de4  lfs 4, 28(29)
  02d5de8  fsubs 5, 3, 2
  02d5dec  ori 3, 31, 0
  02d5df0  addic 4, 1, 112
  02d5df4  li 8, 0
  02d5df8  fsubs 3, 3, 1
  02d5dfc  fsub 7, 2, 5
  02d5e00  fsubs 6, 4, 1
  02d5e04  fsubs 4, 4, 2
  02d5e08  fsub 8, 1, 3
  02d5e0c  fsel 2, 7, 5, 2
  02d5e10  fsel 1, 8, 3, 1
  02d5e14  fsub 7, 4, 2
  02d5e18  lfs 3, 32(29)
  02d5e1c  lfs 5, 36(29)
  02d5e20  fsub 8, 6, 1
  02d5e24  fsel 2, 7, 4, 2
  02d5e28  lfs 4, 40(29)
  02d5e2c  fsel 1, 8, 6, 1
  02d5e30  fmuls 6, 2, 2
  02d5e34  lfs 8, 44(29)
  02d5e38  lfs 9, 496(30)
  02d5e3c  fmuls 7, 1, 1
  02d5e40  fmuls 10, 6, 2
  02d5e44  fmuls 11, 7, 1
  02d5e48  fmuls 12, 6, 10
  02d5e4c  fmadds 2, 10, 3, 2
  02d5e50  fmuls 10, 7, 11
  02d5e54  fmadds 1, 11, 3, 1
  02d5e58  fmuls 3, 6, 12
  02d5e5c  fmadds 2, 12, 5, 2
  02d5e60  fmuls 11, 7, 10
  02d5e64  fmadds 1, 10, 5, 1
  02d5e68  fmuls 5, 6, 3
  02d5e6c  fmadds 2, 3, 4, 2
  02d5e70  fmuls 3, 7, 11
  02d5e74  fmadds 1, 11, 4, 1
  02d5e78  lfs 4, -3052(27)
  02d5e7c  fmadds 2, 5, 8, 2
  02d5e80  fmadds 1, 3, 8, 1
  02d5e84  fmr 3, 31
  02d5e88  fmuls 1, 1, 9
  02d5e8c  stfs 1, 112(1)
  02d5e90  lfs 1, 496(30)
  02d5e94  stw 26, 120(1)
  02d5e98  fmuls 1, 2, 1
  02d5e9c  stfs 1, 116(1)
  02d5ea0  lfs 1, 48(29)
  02d5ea4  fmuls 1, 4, 1
  02d5ea8  stfs 1, 120(1)
  02d5eac  lfs 31, 52(29)
  02d5eb0  fmr 1, 31
  02d5eb4  fmr 2, 31
  02d5eb8  bl 0x1009b0
  02d5ebc  nop
  02d5ec0  addic 5, 31, 16
  02d5ec4  lwz 3, 480(30)
  02d5ec8  fmr 1, 31
  02d5ecc  ori 6, 5, 0
  02d5ed0  extsw 3, 3
  02d5ed4  bl 0x1145d8
  02d5ed8  nop
  02d5edc  fmr 1, 30
  02d5ee0  ld 0, 272(1)
  02d5ee4  mtlr 0
  02d5ee8  lfd 29, 232(1)
  02d5eec  lfd 30, 240(1)
  02d5ef0  lfd 31, 248(1)
  02d5ef4  ld 26, 184(1)
  02d5ef8  ld 27, 192(1)
  02d5efc  ld 28, 200(1)
  02d5f00  ld 29, 208(1)
  02d5f04  ld 30, 216(1)
  02d5f08  ld 31, 224(1)
  02d5f0c  addi 1, 1, 256
  02d5f10  blr

M1906_002d5f48:   # 0x2d5f48, 0x514 bytes
  02d5f48  stdu 1, -192(1)
  02d5f4c  mflr 0
  02d5f50  std 0, 208(1)
  02d5f54  stfd 31, 184(1)
  02d5f58  std 31, 176(1)
  02d5f5c  ori 31, 3, 0
  02d5f60  std 30, 168(1)
  02d5f64  lbz 3, 32(31)
  02d5f68  lwz 30, 120(31)
  02d5f6c  cmpwi 3, 0
  02d5f70  std 29, 160(1)
  02d5f74  std 28, 152(1)
  02d5f78  std 27, 144(1)
  02d5f7c  cmpwi 6, 3, 8
  02d5f80  bt 2, 0x2d6434
  02d5f84  cmpwi 1, 3, 7
  02d5f88  bt 26, 0x2d6434
  02d5f8c  bt 6, 0x2d5fcc
  02d5f90  lis 4, 267
  02d5f94  lis 5, 161
  02d5f98  lwz 6, 28660(4)
  02d5f9c  lwz 4, 1808(5)
  02d5fa0  cmpw 6, 4
  02d5fa4  bt 2, 0x2d5fcc
  02d5fa8  lis 6, 267
  02d5fac  ori 5, 4, 0
  02d5fb0  lis 3, 113
  02d5fb4  ori 4, 31, 0
  02d5fb8  addic 3, 3, -19536
  02d5fbc  stw 5, 28660(6)
  02d5fc0  bl 0x6d720
  02d5fc4  nop
  02d5fc8  lbz 3, 32(31)
  02d5fcc  lis 4, 126
  02d5fd0  cmpwi 3, 4
  02d5fd4  cmpwi 1, 3, 5
  02d5fd8  lfs 1, -30536(4)
  02d5fdc  bt 2, 0x2d5fe4
  02d5fe0  bf 6, 0x2d5fec
  02d5fe4  lis 3, 126
  02d5fe8  lfs 1, -30532(3)
  02d5fec  fmr 2, 1
  02d5ff0  lis 3, 45
  02d5ff4  addi 29, 3, 24340
  02d5ff8  lis 3, 114
  02d5ffc  lfs 3, 0(29)
  02d6000  lfs 1, 504(30)
  02d6004  fmuls 2, 2, 3
  02d6008  lfs 4, -3052(3)
  02d600c  fmuls 2, 2, 4
  02d6010  bl 0x502578
  02d6014  nop
  02d6018  lfs 2, 4(29)
  02d601c  lfs 3, 8(29)
  02d6020  fsubs 2, 2, 1
  02d6024  fsubs 3, 3, 1
  02d6028  lis 3, 126
  02d602c  lis 4, 126
  02d6030  fsub 4, 1, 2
  02d6034  fsel 2, 4, 2, 1
  02d6038  lfs 4, 12(29)
  02d603c  lfs 5, 16(29)
  02d6040  fsub 6, 3, 2
  02d6044  fsel 2, 6, 3, 2
  02d6048  lfs 3, 20(29)
  02d604c  lfs 6, 24(29)
  02d6050  lfs 8, 28(29)
  02d6054  lwz 3, -30544(3)
  02d6058  lwz 4, -30540(4)
  02d605c  stfs 1, 504(30)
  02d6060  extsw 3, 3
  02d6064  fmuls 7, 2, 2
  02d6068  extsw 4, 4
  02d606c  fmuls 9, 7, 2
  02d6070  fmuls 10, 7, 9
  02d6074  fmadds 2, 9, 4, 2
  02d6078  fmuls 1, 7, 10
  02d607c  fmadds 2, 10, 5, 2
  02d6080  fmuls 4, 7, 1
  02d6084  fmadds 1, 1, 3, 2
  02d6088  fmadds 1, 4, 6, 1
  02d608c  fmadds 1, 1, 8, 8
  02d6090  bl 0x5027bc
  02d6094  nop
  02d6098  lwz 5, 24(31)
  02d609c  lis 8, 17096
  02d60a0  stw 3, 144(31)
  02d60a4  srawi 6, 5, 31
  02d60a8  lwz 7, 36(31)
  02d60ac  srwi 9, 6, 1
  02d60b0  lbz 4, 32(31)
  02d60b4  xor 5, 9, 5
  02d60b8  lbz 3, 83(31)
  02d60bc  subc 5, 5, 6
  02d60c0  lfs 1, 36(7)
  02d60c4  cmpw 5, 8
  02d60c8  bf 0, 0x2d60dc
  02d60cc  cmpwi 4, 7
  02d60d0  bt 2, 0x2d60dc
  02d60d4  li 4, 6
  02d60d8  stb 4, 32(31)
  02d60dc  lis 5, 126
  02d60e0  lis 29, 151
  02d60e4  addic 29, 29, -25376
  02d60e8  lfs 2, -30548(5)
  02d60ec  fmuls 1, 1, 2
  02d60f0  lwz 5, 8324(29)
  02d60f4  cmpwi 5, 114
  02d60f8  stfs 1, 44(31)
  02d60fc  bt 2, 0x2d6110
  02d6100  lis 5, 161
  02d6104  lwz 5, 1800(5)
  02d6108  cmpwi 5, 2
  02d610c  bf 2, 0x2d6180
  02d6110  cmpwi 4, 7
  02d6114  bt 2, 0x2d6180
  02d6118  li 4, 8
  02d611c  cmpwi 3, 0
  02d6120  stb 4, 32(31)
  02d6124  bt 2, 0x2d6164
  02d6128  lis 3, 45
  02d612c  lis 4, 114
  02d6130  addi 3, 3, 24340
  02d6134  li 5, 0
  02d6138  lfs 1, 32(3)
  02d613c  lfs 2, -3056(4)
  02d6140  ori 3, 31, 0
  02d6144  fmuls 1, 2, 1
  02d6148  li 4, 0
  02d614c  fctiwz 1, 1
  02d6150  stfd 1, 128(1)
  02d6154  lwz 6, 132(1)
  02d6158  extsw 6, 6
  02d615c  bl 0xfddc0
  02d6160  nop
  02d6164  lhz 4, 52(31)
  02d6168  li 3, 0
  02d616c  ori 4, 4, 65
  02d6170  rlwimi 4, 3, 0, 19, 19
  02d6174  stw 3, 148(31)
  02d6178  sth 4, 52(31)
  02d617c  b 0x2d6434
  02d6180  lis 3, 45
  02d6184  li 6, 0
  02d6188  addi 7, 3, 24340
  02d618c  ori 3, 31, 0
  02d6190  lis 4, 51
  02d6194  li 5, 0
  02d6198  lfs 31, 36(7)
  02d619c  stw 6, 116(1)
  02d61a0  bl 0x10675c
  02d61a4  nop
  02d61a8  ori 28, 3, 0
  02d61ac  ori 3, 31, 0
  02d61b0  ori 4, 28, 0
  02d61b4  addic 5, 30, 32
  02d61b8  li 6, 0
  02d61bc  addic 7, 1, 112
  02d61c0  li 9, 0
  02d61c4  addic 8, 1, 116
  02d61c8  li 10, 4
  02d61cc  bl 0x106840
  02d61d0  nop
  02d61d4  lwz 3, 112(1)
  02d61d8  cmpwi 3, 1
  02d61dc  bt 2, 0x2d6350
  02d61e0  lbz 3, 32(31)
  02d61e4  cmpwi 3, 6
  02d61e8  bt 2, 0x2d6350
  02d61ec  lwz 3, 116(1)
  02d61f0  lfs 1, 116(1)
  02d61f4  cmpwi 3, 0
  02d61f8  bt 2, 0x2d6350
  02d61fc  lfs 2, 32(30)
  02d6200  fsubs 1, 2, 1
  02d6204  fcmpu 0, 1, 31
  02d6208  stfs 1, 32(30)
  02d620c  bt 1, 0x2d6350
  02d6210  li 3, 2
  02d6214  bl 0xfc620
  02d6218  nop
  02d621c  cmpwi 3, 0
  02d6220  bt 2, 0x2d6230
  02d6224  li 3, 6
  02d6228  stb 3, 32(31)
  02d622c  b 0x2d6350
  02d6230  lis 3, 16128
  02d6234  lis 4, 126
  02d6238  lis 5, 114
  02d623c  li 7, 512
  02d6240  stw 3, 152(30)
  02d6244  lis 3, 126
  02d6248  lfs 1, -30528(4)
  02d624c  lfs 2, -3048(5)
  02d6250  lis 4, 126
  02d6254  lis 5, 114
  02d6258  fmuls 1, 1, 2
  02d625c  lis 6, 126
  02d6260  lis 8, 45
  02d6264  li 27, 0
  02d6268  stfs 1, 128(30)
  02d626c  lfs 1, -30524(3)
  02d6270  stw 7, 144(30)
  02d6274  fmuls 1, 1, 2
  02d6278  addi 3, 8, 24340
  02d627c  addic 7, 30, 140
  02d6280  stfs 1, 132(30)
  02d6284  lfs 1, -30520(4)
  02d6288  lfs 2, -3052(5)
  02d628c  fmuls 1, 1, 2
  02d6290  li 4, 41
  02d6294  addic 5, 1, 120
  02d6298  stfs 1, 136(30)
  02d629c  lfs 1, -30516(6)
  02d62a0  stb 27, 173(30)
  02d62a4  fmuls 1, 1, 2
  02d62a8  addic 6, 30, 136
  02d62ac  stfs 1, 140(30)
  02d62b0  lfs 1, 40(3)
  02d62b4  stw 4, 148(30)
  02d62b8  fmuls 1, 2, 1
  02d62bc  lhz 3, 52(31)
  02d62c0  rlwimi 3, 27, 0, 19, 19
  02d62c4  sth 3, 52(31)
  02d62c8  stfs 1, 188(30)
  02d62cc  lfs 1, 16(28)
  02d62d0  lfs 2, 24(28)
  02d62d4  stfs 1, 48(1)
  02d62d8  stfs 2, 56(1)
  02d62dc  lfs 1, 20(28)
  02d62e0  lfs 2, 28(28)
  02d62e4  stfs 1, 52(1)
  02d62e8  stfs 2, 60(1)
  02d62ec  ld 3, 48(1)
  02d62f0  ld 4, 56(1)
  02d62f4  bl 0x107de8
  02d62f8  nop
  02d62fc  ori 3, 31, 0
  02d6300  lfs 1, 120(1)
  02d6304  addic 4, 30, 112
  02d6308  li 6, 3
  02d630c  li 7, 1
  02d6310  li 8, 0
  02d6314  bl 0x10ad80
  02d6318  nop
  02d631c  lis 3, 16624
  02d6320  lis 6, 16752
  02d6324  li 7, 5
  02d6328  li 5, 120
  02d632c  stw 3, 192(30)
  02d6330  addic 4, 30, 96
  02d6334  stw 27, 148(31)
  02d6338  ori 3, 31, 0
  02d633c  stw 6, 196(30)
  02d6340  stb 7, 32(31)
  02d6344  stb 5, 103(30)
  02d6348  bl 0x10c808
  02d634c  nop
  02d6350  li 5, 255
  02d6354  addic 4, 30, 96
  02d6358  ori 3, 31, 0
  02d635c  stb 5, 164(31)
  02d6360  bl 0x10c9a0
  02d6364  nop
  02d6368  lwz 4, 480(30)
  02d636c  lis 3, 165
  02d6370  slwi 4, 4, 2
  02d6374  addic 6, 3, 7136
  02d6378  extsw 7, 4
  02d637c  lis 5, 45
  02d6380  ori 3, 31, 0
  02d6384  addi 5, 5, 24340
  02d6388  addic 4, 30, 384
  02d638c  lwzx 9, 6, 7
  02d6390  li 6, 0
  02d6394  addic 8, 9, 16
  02d6398  lfs 1, 44(5)
  02d639c  li 7, 0
  02d63a0  lwz 9, 0(9)
  02d63a4  extsw 9, 9
  02d63a8  bl 0x111ba0
  02d63ac  nop
  02d63b0  lwz 3, 452(30)
  02d63b4  lwz 31, 448(30)
  02d63b8  cmpwi 3, 2
  02d63bc  bf 2, 0x2d6424
  02d63c0  lwz 3, 8332(29)
  02d63c4  cmpwi 3, 15
  02d63c8  bf 2, 0x2d6404
  02d63cc  lwz 3, 1376(29)
  02d63d0  lwz 4, 0(3)
  02d63d4  slwi 4, 4, 4
  02d63d8  addc 3, 3, 4
  02d63dc  clrldi 3, 3, 32
  02d63e0  lfs 1, 0(3)
  02d63e4  stfs 1, 384(30)
  02d63e8  lfs 1, 4(3)
  02d63ec  stfs 1, 388(30)
  02d63f0  lfs 1, 8(3)
  02d63f4  stfs 1, 392(30)
  02d63f8  lfs 1, 12(3)
  02d63fc  stfs 1, 396(30)
  02d6400  b 0x2d6424
  02d6404  lfs 1, 128(29)
  02d6408  stfs 1, 384(30)
  02d640c  lfs 1, 132(29)
  02d6410  stfs 1, 388(30)
  02d6414  lfs 1, 136(29)
  02d6418  stfs 1, 392(30)
  02d641c  lfs 1, 140(29)
  02d6420  stfs 1, 396(30)
  02d6424  cmpwi 31, 0
  02d6428  bf 2, 0x2d6434
  02d642c  lwz 3, 8320(29)
  02d6430  stw 3, 448(30)
  02d6434  ld 0, 208(1)
  02d6438  mtlr 0
  02d643c  lfd 31, 184(1)
  02d6440  ld 27, 144(1)
  02d6444  ld 28, 152(1)
  02d6448  ld 29, 160(1)
  02d644c  ld 30, 168(1)
  02d6450  ld 31, 176(1)
  02d6454  addi 1, 1, 192
  02d6458  blr

UpdateMoby_1906:   # 0x2d6498, 0xa7c bytes
  02d6498  stdu 1, -336(1)
  02d649c  mflr 0
  02d64a0  std 0, 352(1)
  02d64a4  std 31, 328(1)
  02d64a8  std 30, 320(1)
  02d64ac  ori 31, 3, 0
  02d64b0  std 29, 312(1)
  02d64b4  lwz 30, 120(31)
  02d64b8  bl 0x2d5f48
  02d64bc  lbz 4, 32(31)
  02d64c0  lbz 3, 83(31)
  02d64c4  cmpwi 4, 7
  02d64c8  bt 2, 0x2d66d0
  02d64cc  cmpwi 4, 6
  02d64d0  bt 2, 0x2d6d24
  02d64d4  cmpwi 4, 5
  02d64d8  bt 2, 0x2d6c0c
  02d64dc  cmpwi 4, 4
  02d64e0  bt 2, 0x2d68b8
  02d64e4  cmpwi 4, 3
  02d64e8  bt 2, 0x2d6794
  02d64ec  cmpwi 4, 2
  02d64f0  bt 2, 0x2d66fc
  02d64f4  cmpwi 4, 1
  02d64f8  bt 2, 0x2d65bc
  02d64fc  cmpwi 4, 0
  02d6500  bf 2, 0x2d6e18
  02d6504  li 4, 8
  02d6508  li 3, 2
  02d650c  stb 4, 32(31)
  02d6510  bl 0xfc620
  02d6514  nop
  02d6518  cmpwi 3, 0
  02d651c  bt 2, 0x2d6534
  02d6520  lis 3, 0
  02d6524  lhz 4, 52(31)
  02d6528  ori 3, 3, 32768
  02d652c  or 3, 4, 3
  02d6530  b 0x2d6540
  02d6534  li 5, 0
  02d6538  lhz 3, 52(31)
  02d653c  rlwimi 3, 5, 0, 16, 16
  02d6540  lis 4, 267
  02d6544  ori 3, 3, 256
  02d6548  lis 7, 126
  02d654c  lis 5, 16256
  02d6550  addic 7, 7, -30560
  02d6554  lwz 4, 28664(4)
  02d6558  li 6, 1
  02d655c  sth 3, 52(31)
  02d6560  li 3, 8
  02d6564  stb 4, 115(31)
  02d6568  stw 5, 32(30)
  02d656c  lis 8, 16128
  02d6570  stw 7, 320(30)
  02d6574  sth 6, 36(30)
  02d6578  stb 3, 88(30)
  02d657c  stb 6, 92(30)
  02d6580  stw 8, 48(30)
  02d6584  bl 0xfcc68
  02d6588  nop
  02d658c  li 3, 255
  02d6590  lhz 4, 52(31)
  02d6594  li 5, 0
  02d6598  stfs 1, 504(30)
  02d659c  ori 4, 4, 1
  02d65a0  stb 3, 48(31)
  02d65a4  rlwimi 4, 5, 0, 19, 19
  02d65a8  sth 3, 50(31)
  02d65ac  stb 5, 49(31)
  02d65b0  stw 5, 148(31)
  02d65b4  sth 4, 52(31)
  02d65b8  b 0x2d6e18
  02d65bc  lis 3, 45
  02d65c0  lfs 1, 472(30)
  02d65c4  addi 5, 3, 25692
  02d65c8  lis 3, 114
  02d65cc  li 4, 0
  02d65d0  lfs 2, 0(5)
  02d65d4  lfs 3, -3048(3)
  02d65d8  lfs 4, 464(30)
  02d65dc  fnmsubs 1, 3, 2, 1
  02d65e0  addic 3, 1, 192
  02d65e4  stfs 1, 472(30)
  02d65e8  lfs 1, 16(31)
  02d65ec  lfs 2, 20(31)
  02d65f0  fadds 1, 1, 4
  02d65f4  lfs 3, 24(31)
  02d65f8  lfs 4, 28(31)
  02d65fc  stfs 1, 16(31)
  02d6600  lfs 5, 468(30)
  02d6604  fadds 2, 2, 5
  02d6608  stfs 2, 20(31)
  02d660c  lfs 5, 472(30)
  02d6610  stfs 1, 192(1)
  02d6614  fadds 3, 3, 5
  02d6618  stfs 2, 196(1)
  02d661c  stfs 4, 204(1)
  02d6620  stfs 3, 24(31)
  02d6624  lfs 1, 4(5)
  02d6628  fadds 1, 3, 1
  02d662c  stfs 1, 200(1)
  02d6630  lfs 1, 8(5)
  02d6634  bl 0xffb70
  02d6638  nop
  02d663c  lwz 3, 24(31)
  02d6640  lfs 2, 24(31)
  02d6644  srawi 4, 3, 31
  02d6648  fcmpu 0, 2, 1
  02d664c  srwi 5, 4, 1
  02d6650  xor 3, 5, 3
  02d6654  subc 3, 3, 4
  02d6658  cror 6, 1, 2
  02d665c  bt 6, 0x2d66b8
  02d6660  li 3, 2
  02d6664  lbz 4, 83(31)
  02d6668  stfs 1, 24(31)
  02d666c  cmpwi 4, 0
  02d6670  stb 3, 32(31)
  02d6674  bt 2, 0x2d6e18
  02d6678  lis 3, 45
  02d667c  lis 4, 114
  02d6680  addi 3, 3, 25692
  02d6684  li 5, 0
  02d6688  lfs 1, 12(3)
  02d668c  lfs 2, -3056(4)
  02d6690  ori 3, 31, 0
  02d6694  fmuls 1, 2, 1
  02d6698  li 4, 0
  02d669c  fctiwz 1, 1
  02d66a0  stfd 1, 288(1)
  02d66a4  lwz 6, 292(1)
  02d66a8  extsw 6, 6
  02d66ac  bl 0xfddc0
  02d66b0  nop
  02d66b4  b 0x2d6e18
  02d66b8  lis 4, 16672
  02d66bc  cmpw 3, 4
  02d66c0  bf 0, 0x2d6e18
  02d66c4  li 3, 6
  02d66c8  stb 3, 32(31)
  02d66cc  b 0x2d6e18
  02d66d0  ori 3, 31, 0
  02d66d4  addic 4, 30, 112
  02d66d8  bl 0x48c188
  02d66dc  nop
  02d66e0  cmpwi 3, 0
  02d66e4  bt 2, 0x2d6e18
  02d66e8  li 3, 2
  02d66ec  li 4, 0
  02d66f0  stb 3, 32(31)
  02d66f4  sth 4, 312(30)
  02d66f8  b 0x2d6e18
  02d66fc  lwz 4, 452(30)
  02d6700  cmpwi 4, 2
  02d6704  bf 2, 0x2d6744
  02d6708  lfs 1, 20(31)
  02d670c  lfs 2, 388(30)
  02d6710  lfs 3, 16(31)
  02d6714  fsubs 1, 1, 2
  02d6718  lfs 2, 384(30)
  02d671c  fsubs 2, 3, 2
  02d6720  lis 4, 45
  02d6724  addi 4, 4, 25692
  02d6728  fmuls 1, 1, 1
  02d672c  fmadds 1, 2, 2, 1
  02d6730  lfs 2, 0(4)
  02d6734  fsqrts 1, 1
  02d6738  fcmpu 0, 1, 2
  02d673c  cror 6, 0, 2
  02d6740  bt 6, 0x2d6e18
  02d6744  li 4, 3
  02d6748  cmpwi 3, 1
  02d674c  stb 4, 32(31)
  02d6750  bt 2, 0x2d6e18
  02d6754  lis 3, 45
  02d6758  lis 4, 114
  02d675c  addi 3, 3, 25692
  02d6760  li 5, 0
  02d6764  lfs 1, 12(3)
  02d6768  lfs 2, -3056(4)
  02d676c  ori 3, 31, 0
  02d6770  li 4, 1
  02d6774  fmuls 1, 2, 1
  02d6778  fctiwz 1, 1
  02d677c  stfd 1, 288(1)
  02d6780  lwz 6, 292(1)
  02d6784  extsw 6, 6
  02d6788  bl 0xfddc0
  02d678c  nop
  02d6790  b 0x2d6e18
  02d6794  lfs 1, 384(30)
  02d6798  lfs 2, 392(30)
  02d679c  ori 3, 31, 0
  02d67a0  stfs 1, 64(1)
  02d67a4  stfs 2, 72(1)
  02d67a8  lfs 1, 388(30)
  02d67ac  lfs 2, 396(30)
  02d67b0  stfs 1, 68(1)
  02d67b4  stfs 2, 76(1)
  02d67b8  ld 5, 64(1)
  02d67bc  ld 6, 72(1)
  02d67c0  bl 0x2d5b20
  02d67c4  lwz 4, 452(30)
  02d67c8  lbz 3, 83(31)
  02d67cc  cmpwi 4, 2
  02d67d0  bf 2, 0x2d683c
  02d67d4  lis 4, 45
  02d67d8  addi 4, 4, 25692
  02d67dc  lfs 2, 16(4)
  02d67e0  fcmpu 0, 1, 2
  02d67e4  cror 6, 1, 2
  02d67e8  bt 6, 0x2d683c
  02d67ec  li 4, 2
  02d67f0  cmpwi 3, 0
  02d67f4  stb 4, 32(31)
  02d67f8  bt 2, 0x2d6e18
  02d67fc  lis 3, 45
  02d6800  lis 4, 114
  02d6804  addi 3, 3, 25692
  02d6808  li 5, 0
  02d680c  lfs 1, 12(3)
  02d6810  lfs 2, -3056(4)
  02d6814  ori 3, 31, 0
  02d6818  fmuls 1, 2, 1
  02d681c  li 4, 0
  02d6820  fctiwz 1, 1
  02d6824  stfd 1, 288(1)
  02d6828  lwz 6, 292(1)
  02d682c  extsw 6, 6
  02d6830  bl 0xfddc0
  02d6834  nop
  02d6838  b 0x2d6e18
  02d683c  lis 4, 45
  02d6840  addi 4, 4, 25692
  02d6844  lfs 2, 20(4)
  02d6848  fcmpu 0, 1, 2
  02d684c  cror 6, 1, 2
  02d6850  bt 6, 0x2d6e18
  02d6854  li 4, 4
  02d6858  cmpwi 3, 2
  02d685c  stb 4, 32(31)
  02d6860  bt 2, 0x2d6e18
  02d6864  lis 3, 267
  02d6868  lis 4, 45
  02d686c  addi 4, 4, 25692
  02d6870  lfs 1, 28656(3)
  02d6874  lis 3, 114
  02d6878  fctiwz 1, 1
  02d687c  lfs 2, -3056(3)
  02d6880  ori 3, 31, 0
  02d6884  stfd 1, 288(1)
  02d6888  lfs 1, 24(4)
  02d688c  lwz 5, 292(1)
  02d6890  li 4, 2
  02d6894  fmuls 1, 2, 1
  02d6898  extsw 5, 5
  02d689c  fctiwz 1, 1
  02d68a0  stfd 1, 288(1)
  02d68a4  lwz 6, 292(1)
  02d68a8  extsw 6, 6
  02d68ac  bl 0xfddc0
  02d68b0  nop
  02d68b4  b 0x2d6e18
  02d68b8  lfs 1, 384(30)
  02d68bc  lfs 2, 16(31)
  02d68c0  lfs 3, 388(30)
  02d68c4  lfs 4, 20(31)
  02d68c8  fsubs 1, 1, 2
  02d68cc  lis 3, 45
  02d68d0  fsubs 2, 3, 4
  02d68d4  addi 3, 3, 25692
  02d68d8  lis 5, 115
  02d68dc  addic 4, 31, 72
  02d68e0  addic 5, 5, 22784
  02d68e4  fabs 5, 1
  02d68e8  fabs 4, 2
  02d68ec  stfs 1, 240(1)
  02d68f0  stfs 2, 244(1)
  02d68f4  fsubs 1, 5, 4
  02d68f8  stfs 1, 248(1)
  02d68fc  lwz 6, 240(1)
  02d6900  lfs 1, 28(3)
  02d6904  lfs 2, 240(1)
  02d6908  lwz 3, 244(1)
  02d690c  lfs 3, 244(1)
  02d6910  fabs 2, 2
  02d6914  lwz 7, 248(1)
  02d6918  rlwinm 3, 3, 3, 29, 29
  02d691c  fabs 6, 3
  02d6920  lfs 3, 248(1)
  02d6924  rlwimi 3, 7, 2, 30, 30
  02d6928  fsub 7, 3, 1
  02d692c  rlwimi 3, 6, 4, 28, 28
  02d6930  fsub 8, 3, 1
  02d6934  ori 6, 5, 0
  02d6938  rlwimi 6, 3, 2, 26, 28
  02d693c  slwi 3, 3, 2
  02d6940  clrldi 6, 6, 32
  02d6944  fsel 4, 7, 2, 4
  02d6948  lfsx 3, 5, 3
  02d694c  lfs 2, 4(6)
  02d6950  fsel 5, 8, 6, 5
  02d6954  fcmpu 0, 4, 1
  02d6958  bt 1, 0x2d6960
  02d695c  b 0x2d6a84
  02d6960  fsubs 6, 5, 4
  02d6964  fadds 4, 5, 4
  02d6968  addic 7, 1, 16
  02d696c  li 3, 2
  02d6970  addic 5, 7, 252
  02d6974  addic 6, 7, 236
  02d6978  mtctr 3
  02d697c  fdivs 4, 6, 4
  02d6980  fmuls 6, 4, 4
  02d6984  stfs 4, 264(1)
  02d6988  stfs 4, 256(1)
  02d698c  stfs 4, 260(1)
  02d6990  stfs 4, 252(1)
  02d6994  lfs 7, 264(1)
  02d6998  lfs 8, 256(1)
  02d699c  lfs 9, 260(1)
  02d69a0  fmuls 4, 6, 6
  02d69a4  fmuls 8, 8, 6
  02d69a8  fmuls 7, 7, 4
  02d69ac  fmuls 5, 4, 4
  02d69b0  fmuls 4, 9, 4
  02d69b4  stfs 8, 256(1)
  02d69b8  fmuls 6, 7, 6
  02d69bc  stfs 4, 260(1)
  02d69c0  stfs 6, 264(1)
  02d69c4  lfs 4, 236(7)
  02d69c8  fmuls 4, 4, 5
  02d69cc  stfs 4, 252(7)
  02d69d0  lfs 4, 4(6)
  02d69d4  addic 6, 6, 8
  02d69d8  fmuls 4, 4, 5
  02d69dc  addic 7, 7, 8
  02d69e0  stfs 4, 4(5)
  02d69e4  addic 5, 5, 8
  02d69e8  bdnz 0x2d69c4
  02d69ec  ori 8, 1, 0
  02d69f0  li 5, 4
  02d69f4  lis 7, 115
  02d69f8  addic 6, 8, 252
  02d69fc  mtctr 5
  02d6a00  addic 7, 7, 22752
  02d6a04  ori 5, 6, 0
  02d6a08  lfs 4, 252(8)
  02d6a0c  lfs 5, 0(7)
  02d6a10  fmuls 4, 4, 5
  02d6a14  lfs 5, 4(7)
  02d6a18  addic 7, 7, 8
  02d6a1c  stfs 4, 252(8)
  02d6a20  lfs 4, 4(6)
  02d6a24  addic 8, 8, 8
  02d6a28  fmuls 4, 4, 5
  02d6a2c  stfs 4, 4(6)
  02d6a30  addic 6, 6, 8
  02d6a34  bdnz 0x2d6a08
  02d6a38  ori 6, 3, 0
  02d6a3c  ori 3, 1, 0
  02d6a40  mtctr 6
  02d6a44  lfs 4, 252(3)
  02d6a48  fadds 1, 1, 4
  02d6a4c  lfs 4, 4(5)
  02d6a50  addic 3, 3, 16
  02d6a54  lfs 5, 8(5)
  02d6a58  lfs 6, 12(5)
  02d6a5c  addic 5, 5, 16
  02d6a60  fadds 1, 1, 4
  02d6a64  fadds 1, 1, 5
  02d6a68  fadds 1, 1, 6
  02d6a6c  bdnz 0x2d6a44
  02d6a70  lis 3, 45
  02d6a74  addi 3, 3, 25692
  02d6a78  lfs 4, 32(3)
  02d6a7c  fadds 1, 1, 4
  02d6a80  fmadds 1, 1, 3, 2
  02d6a84  lis 3, 45
  02d6a88  lis 6, 114
  02d6a8c  addi 29, 3, 25692
  02d6a90  lis 3, 114
  02d6a94  addic 5, 30, 488
  02d6a98  lfs 4, 36(29)
  02d6a9c  lfs 3, -3048(3)
  02d6aa0  lfs 5, -3052(6)
  02d6aa4  fmuls 2, 3, 4
  02d6aa8  ori 3, 4, 0
  02d6aac  fmuls 4, 5, 4
  02d6ab0  fmr 3, 2
  02d6ab4  bl 0x10a2e0
  02d6ab8  nop
  02d6abc  ori 3, 31, 0
  02d6ac0  lfs 1, 40(29)
  02d6ac4  bl 0x113e88
  02d6ac8  nop
  02d6acc  cmpwi 3, 0
  02d6ad0  bt 2, 0x2d6b0c
  02d6ad4  lis 3, 45
  02d6ad8  li 5, 0
  02d6adc  addi 4, 3, 25692
  02d6ae0  li 10, 1
  02d6ae4  ori 3, 31, 0
  02d6ae8  li 6, 1
  02d6aec  li 9, 0
  02d6af0  lfs 2, 4(4)
  02d6af4  lfs 1, 8(4)
  02d6af8  li 4, 1
  02d6afc  std 5, 112(1)
  02d6b00  fmr 3, 2
  02d6b04  bl 0x1059f0
  02d6b08  nop
  02d6b0c  lbz 3, 112(31)
  02d6b10  rlwinm 3, 3, 0, 30, 30
  02d6b14  cmpwi 3, 0
  02d6b18  bt 2, 0x2d6e18
  02d6b1c  lwz 3, 452(30)
  02d6b20  cmpwi 3, 2
  02d6b24  bf 2, 0x2d6b7c
  02d6b28  li 3, 2
  02d6b2c  lbz 4, 83(31)
  02d6b30  cmpwi 4, 0
  02d6b34  stb 3, 32(31)
  02d6b38  bt 2, 0x2d6e18
  02d6b3c  lis 3, 45
  02d6b40  lis 4, 114
  02d6b44  addi 3, 3, 25692
  02d6b48  li 5, 0
  02d6b4c  lfs 1, 12(3)
  02d6b50  lfs 2, -3056(4)
  02d6b54  ori 3, 31, 0
  02d6b58  fmuls 1, 2, 1
  02d6b5c  li 4, 0
  02d6b60  fctiwz 1, 1
  02d6b64  stfd 1, 288(1)
  02d6b68  lwz 6, 292(1)
  02d6b6c  extsw 6, 6
  02d6b70  bl 0xfddc0
  02d6b74  nop
  02d6b78  b 0x2d6e18
  02d6b7c  lfs 1, 20(31)
  02d6b80  lfs 2, 388(30)
  02d6b84  lfs 3, 16(31)
  02d6b88  fsubs 1, 1, 2
  02d6b8c  lfs 2, 384(30)
  02d6b90  fsubs 2, 3, 2
  02d6b94  lis 3, 45
  02d6b98  addi 3, 3, 25692
  02d6b9c  fmuls 1, 1, 1
  02d6ba0  fmadds 1, 2, 2, 1
  02d6ba4  lfs 2, 44(3)
  02d6ba8  fsqrts 1, 1
  02d6bac  fcmpu 0, 1, 2
  02d6bb0  cror 6, 0, 2
  02d6bb4  bt 6, 0x2d6e18
  02d6bb8  li 3, 3
  02d6bbc  lbz 4, 83(31)
  02d6bc0  cmpwi 4, 1
  02d6bc4  stb 3, 32(31)
  02d6bc8  bt 2, 0x2d6e18
  02d6bcc  lis 3, 45
  02d6bd0  lis 4, 114
  02d6bd4  addi 3, 3, 25692
  02d6bd8  li 5, 0
  02d6bdc  lfs 1, 12(3)
  02d6be0  lfs 2, -3056(4)
  02d6be4  ori 3, 31, 0
  02d6be8  fmuls 1, 2, 1
  02d6bec  li 4, 1
  02d6bf0  fctiwz 1, 1
  02d6bf4  stfd 1, 288(1)
  02d6bf8  lwz 6, 292(1)
  02d6bfc  extsw 6, 6
  02d6c00  bl 0xfddc0
  02d6c04  nop
  02d6c08  b 0x2d6e18
  02d6c0c  addic 4, 30, 112
  02d6c10  ori 3, 31, 0
  02d6c14  bl 0x10b030
  02d6c18  nop
  02d6c1c  li 4, 320
  02d6c20  and 3, 3, 4
  02d6c24  cmpwi 3, 0
  02d6c28  bt 2, 0x2d6e18
  02d6c2c  lis 3, 45
  02d6c30  lfs 1, 16(31)
  02d6c34  lfs 2, 20(31)
  02d6c38  li 7, 4
  02d6c3c  addi 6, 3, 25692
  02d6c40  stfs 1, 208(1)
  02d6c44  lfs 1, 28(31)
  02d6c48  li 11, 0
  02d6c4c  stfs 2, 212(1)
  02d6c50  li 12, 1
  02d6c54  stfs 1, 220(1)
  02d6c58  li 29, -1
  02d6c5c  ori 3, 31, 0
  02d6c60  lfs 4, 8(6)
  02d6c64  lfs 1, 24(31)
  02d6c68  addic 4, 30, 64
  02d6c6c  std 7, 144(1)
  02d6c70  addic 5, 1, 208
  02d6c74  fadds 1, 1, 4
  02d6c78  std 11, 160(1)
  02d6c7c  std 12, 168(1)
  02d6c80  li 8, 5
  02d6c84  std 29, 176(1)
  02d6c88  li 9, 2
  02d6c8c  std 11, 184(1)
  02d6c90  li 10, 4
  02d6c94  fmr 6, 4
  02d6c98  stfs 1, 216(1)
  02d6c9c  lfs 1, 28(6)
  02d6ca0  lfs 3, 4(6)
  02d6ca4  lfs 5, 48(6)
  02d6ca8  fmr 2, 1
  02d6cac  fmr 7, 1
  02d6cb0  bl 0x10e030
  02d6cb4  nop
  02d6cb8  li 3, 8
  02d6cbc  lbz 4, 83(31)
  02d6cc0  cmpwi 4, 0
  02d6cc4  stb 3, 32(31)
  02d6cc8  bt 2, 0x2d6d08
  02d6ccc  lis 3, 45
  02d6cd0  lis 4, 114
  02d6cd4  addi 3, 3, 25692
  02d6cd8  li 5, 0
  02d6cdc  lfs 1, 12(3)
  02d6ce0  lfs 2, -3056(4)
  02d6ce4  ori 3, 31, 0
  02d6ce8  fmuls 1, 2, 1
  02d6cec  li 4, 0
  02d6cf0  fctiwz 1, 1
  02d6cf4  stfd 1, 288(1)
  02d6cf8  lwz 6, 292(1)
  02d6cfc  extsw 6, 6
  02d6d00  bl 0xfddc0
  02d6d04  nop
  02d6d08  lhz 4, 52(31)
  02d6d0c  li 3, 0
  02d6d10  ori 4, 4, 65
  02d6d14  rlwimi 4, 3, 0, 19, 19
  02d6d18  stw 3, 148(31)
  02d6d1c  sth 4, 52(31)
  02d6d20  b 0x2d6e18
  02d6d24  lis 3, 45
  02d6d28  lfs 1, 16(31)
  02d6d2c  lfs 2, 20(31)
  02d6d30  li 7, 4
  02d6d34  addi 6, 3, 25692
  02d6d38  stfs 1, 224(1)
  02d6d3c  lfs 1, 28(31)
  02d6d40  li 11, 0
  02d6d44  stfs 2, 228(1)
  02d6d48  li 12, 1
  02d6d4c  stfs 1, 236(1)
  02d6d50  li 29, -1
  02d6d54  ori 3, 31, 0
  02d6d58  lfs 4, 8(6)
  02d6d5c  lfs 1, 24(31)
  02d6d60  addic 4, 30, 64
  02d6d64  std 7, 144(1)
  02d6d68  addic 5, 1, 224
  02d6d6c  fadds 1, 1, 4
  02d6d70  std 11, 160(1)
  02d6d74  std 12, 168(1)
  02d6d78  li 8, 5
  02d6d7c  std 29, 176(1)
  02d6d80  li 9, 2
  02d6d84  std 11, 184(1)
  02d6d88  li 10, 4
  02d6d8c  fmr 6, 4
  02d6d90  stfs 1, 232(1)
  02d6d94  lfs 1, 28(6)
  02d6d98  lfs 3, 4(6)
  02d6d9c  lfs 5, 48(6)
  02d6da0  fmr 2, 1
  02d6da4  fmr 7, 1
  02d6da8  bl 0x10e030
  02d6dac  nop
  02d6db0  li 3, 8
  02d6db4  lbz 4, 83(31)
  02d6db8  cmpwi 4, 0
  02d6dbc  stb 3, 32(31)
  02d6dc0  bt 2, 0x2d6e00
  02d6dc4  lis 3, 45
  02d6dc8  lis 4, 114
  02d6dcc  addi 3, 3, 25692
  02d6dd0  li 5, 0
  02d6dd4  lfs 1, 12(3)
  02d6dd8  lfs 2, -3056(4)
  02d6ddc  ori 3, 31, 0
  02d6de0  fmuls 1, 2, 1
  02d6de4  li 4, 0
  02d6de8  fctiwz 1, 1
  02d6dec  stfd 1, 288(1)
  02d6df0  lwz 6, 292(1)
  02d6df4  extsw 6, 6
  02d6df8  bl 0xfddc0
  02d6dfc  nop
  02d6e00  lhz 4, 52(31)
  02d6e04  li 3, 0
  02d6e08  ori 4, 4, 65
  02d6e0c  rlwimi 4, 3, 0, 19, 19
  02d6e10  stw 3, 148(31)
  02d6e14  sth 4, 52(31)
  02d6e18  addic 3, 31, 192
  02d6e1c  addic 4, 31, 64
  02d6e20  bl 0x500b64
  02d6e24  nop
  02d6e28  lis 3, 45
  02d6e2c  lwz 4, 500(30)
  02d6e30  addi 3, 3, 25692
  02d6e34  cmpwi 4, 0
  02d6e38  lfs 1, 28(3)
  02d6e3c  bt 2, 0x2d6ef8
  02d6e40  lis 3, 45
  02d6e44  lis 4, 114
  02d6e48  addi 29, 3, 25692
  02d6e4c  addic 3, 30, 500
  02d6e50  lfs 2, 52(29)
  02d6e54  lfs 3, -3052(4)
  02d6e58  fmuls 2, 3, 2
  02d6e5c  bl 0x109af0
  02d6e60  nop
  02d6e64  lfs 1, 4(29)
  02d6e68  lfs 2, 500(30)
  02d6e6c  lfs 3, 224(31)
  02d6e70  fadds 2, 2, 1
  02d6e74  lfs 4, 228(31)
  02d6e78  lfs 5, 232(31)
  02d6e7c  lfs 6, 192(31)
  02d6e80  lfs 7, 196(31)
  02d6e84  lfs 8, 200(31)
  02d6e88  lfs 9, 208(31)
  02d6e8c  lfs 10, 212(31)
  02d6e90  lis 3, 113
  02d6e94  ori 4, 31, 0
  02d6e98  fmuls 3, 3, 2
  02d6e9c  fmuls 4, 4, 2
  02d6ea0  fmuls 2, 5, 2
  02d6ea4  lfs 5, 216(31)
  02d6ea8  addic 3, 3, -19544
  02d6eac  stfs 3, 224(31)
  02d6eb0  stfs 4, 228(31)
  02d6eb4  stfs 2, 232(31)
  02d6eb8  lfs 2, 500(30)
  02d6ebc  fsubs 1, 1, 2
  02d6ec0  fmuls 2, 6, 1
  02d6ec4  fmuls 3, 7, 1
  02d6ec8  fmuls 4, 8, 1
  02d6ecc  fmuls 6, 9, 1
  02d6ed0  fmuls 7, 10, 1
  02d6ed4  fmuls 1, 5, 1
  02d6ed8  stfs 2, 192(31)
  02d6edc  stfs 3, 196(31)
  02d6ee0  stfs 4, 200(31)
  02d6ee4  stfs 6, 208(31)
  02d6ee8  stfs 7, 212(31)
  02d6eec  stfs 1, 216(31)
  02d6ef0  bl 0x6d720
  02d6ef4  nop
  02d6ef8  ld 0, 352(1)
  02d6efc  mtlr 0
  02d6f00  ld 29, 312(1)
  02d6f04  ld 30, 320(1)
  02d6f08  ld 31, 328(1)
  02d6f0c  addi 1, 1, 336
  02d6f10  blr
