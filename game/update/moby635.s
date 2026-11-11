# game/update/moby635.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1382_003f5b10:   # 0x3f5b10, 0x238 bytes
  03f5b10  stdu 1, -272(1)
  03f5b14  mflr 0
  03f5b18  std 0, 288(1)
  03f5b1c  stfd 31, 264(1)
  03f5b20  std 30, 248(1)
  03f5b24  ori 30, 3, 0
  03f5b28  std 31, 256(1)
  03f5b2c  lbz 3, 32(4)
  03f5b30  ori 31, 4, 0
  03f5b34  fmr 31, 1
  03f5b38  std 29, 240(1)
  03f5b3c  std 28, 232(1)
  03f5b40  std 27, 224(1)
  03f5b44  std 26, 216(1)
  03f5b48  cmpwi 3, 3
  03f5b4c  bf 2, 0x3f5b58
  03f5b50  li 3, 0
  03f5b54  b 0x3f5d1c
  03f5b58  lwz 4, 120(31)
  03f5b5c  addic 3, 1, 128
  03f5b60  addic 4, 4, 16
  03f5b64  bl 0x500ca4
  03f5b68  nop
  03f5b6c  lfs 5, 20(31)
  03f5b70  lfs 1, 20(30)
  03f5b74  lfs 6, 16(31)
  03f5b78  fsubs 5, 5, 1
  03f5b7c  lfs 1, 16(30)
  03f5b80  lfs 4, 24(31)
  03f5b84  fsubs 6, 6, 1
  03f5b88  lfs 1, 24(30)
  03f5b8c  fsubs 4, 4, 1
  03f5b90  lis 3, 63
  03f5b94  fmuls 1, 5, 5
  03f5b98  addi 3, 3, 23288
  03f5b9c  lfs 3, 0(3)
  03f5ba0  fmadds 7, 6, 6, 1
  03f5ba4  fmr 2, 3
  03f5ba8  lfs 10, 160(1)
  03f5bac  lfs 9, 164(1)
  03f5bb0  lfs 8, 168(1)
  03f5bb4  lwz 29, 120(31)
  03f5bb8  fmadds 7, 4, 4, 7
  03f5bbc  fmr 1, 2
  03f5bc0  fsqrts 11, 7
  03f5bc4  fcmpu 0, 11, 1
  03f5bc8  bt 2, 0x3f5c1c
  03f5bcc  frsqrte 1, 7
  03f5bd0  lis 3, 63
  03f5bd4  addi 3, 3, 23288
  03f5bd8  lfs 2, 4(3)
  03f5bdc  lfs 3, 8(3)
  03f5be0  fmuls 11, 7, 1
  03f5be4  fmuls 12, 2, 1
  03f5be8  fnmsubs 11, 11, 1, 3
  03f5bec  fmadds 1, 11, 12, 1
  03f5bf0  fmuls 11, 7, 1
  03f5bf4  fmuls 12, 2, 1
  03f5bf8  fnmsubs 11, 11, 1, 3
  03f5bfc  fmadds 1, 11, 12, 1
  03f5c00  fmuls 7, 7, 1
  03f5c04  fmuls 2, 2, 1
  03f5c08  fnmsubs 3, 7, 1, 3
  03f5c0c  fmadds 3, 3, 2, 1
  03f5c10  fmuls 1, 6, 3
  03f5c14  fmuls 2, 5, 3
  03f5c18  fmuls 3, 4, 3
  03f5c1c  fmuls 4, 3, 9
  03f5c20  fmuls 5, 1, 8
  03f5c24  li 28, 0
  03f5c28  fmuls 6, 2, 10
  03f5c2c  lis 3, 63
  03f5c30  lis 5, 133
  03f5c34  addi 27, 3, 23288
  03f5c38  stw 28, 124(1)
  03f5c3c  lis 26, 114
  03f5c40  ori 3, 29, 0
  03f5c44  addic 4, 1, 112
  03f5c48  fmsubs 2, 2, 8, 4
  03f5c4c  fmsubs 3, 3, 10, 5
  03f5c50  fmsubs 1, 1, 9, 6
  03f5c54  stfs 2, 112(1)
  03f5c58  stfs 3, 116(1)
  03f5c5c  stfs 1, 120(1)
  03f5c60  lfs 1, 12(27)
  03f5c64  lfs 2, 17512(5)
  03f5c68  lfs 3, -3052(26)
  03f5c6c  fmuls 1, 2, 1
  03f5c70  fmuls 1, 1, 3
  03f5c74  bl 0x110e18
  03f5c78  nop
  03f5c7c  lhz 3, 52(31)
  03f5c80  ori 3, 3, 256
  03f5c84  lis 4, 269
  03f5c88  sth 3, 52(31)
  03f5c8c  stw 28, 76(29)
  03f5c90  stw 28, 68(29)
  03f5c94  lis 3, 16128
  03f5c98  stw 28, 64(29)
  03f5c9c  lfs 1, 16(27)
  03f5ca0  lfs 2, -3052(26)
  03f5ca4  stw 28, 116(29)
  03f5ca8  fmuls 1, 2, 1
  03f5cac  stw 30, 120(29)
  03f5cb0  stfs 31, 100(29)
  03f5cb4  lis 30, 161
  03f5cb8  stw 3, 124(29)
  03f5cbc  lis 3, 114
  03f5cc0  stfs 1, 72(29)
  03f5cc4  stfs 1, 112(29)
  03f5cc8  lfs 1, 20(27)
  03f5ccc  lfs 2, -3056(3)
  03f5cd0  lwz 30, 1808(30)
  03f5cd4  fmuls 1, 2, 1
  03f5cd8  lwz 3, -17452(4)
  03f5cdc  fctiwz 1, 1
  03f5ce0  stfd 1, 192(1)
  03f5ce4  lwz 4, 196(1)
  03f5ce8  addc 3, 3, 4
  03f5cec  cmpw 30, 3
  03f5cf0  bf 1, 0x3f5d10
  03f5cf4  lis 6, 269
  03f5cf8  li 3, 0
  03f5cfc  li 4, 32
  03f5d00  ori 5, 31, 0
  03f5d04  stw 30, -17452(6)
  03f5d08  bl 0x15d12c
  03f5d0c  nop
  03f5d10  li 4, 3
  03f5d14  li 3, 1
  03f5d18  stb 4, 32(31)
  03f5d1c  ld 0, 288(1)
  03f5d20  mtlr 0
  03f5d24  lfd 31, 264(1)
  03f5d28  ld 26, 216(1)
  03f5d2c  ld 27, 224(1)
  03f5d30  ld 28, 232(1)
  03f5d34  ld 29, 240(1)
  03f5d38  ld 30, 248(1)
  03f5d3c  ld 31, 256(1)
  03f5d40  addi 1, 1, 272
  03f5d44  blr

M1382_003f5d90:   # 0x3f5d90, 0x7e0 bytes
  03f5d90  stdu 1, -368(1)
  03f5d94  mflr 0
  03f5d98  std 0, 384(1)
  03f5d9c  stfd 14, 224(1)
  03f5da0  stfd 15, 232(1)
  03f5da4  stfd 16, 240(1)
  03f5da8  stfd 17, 248(1)
  03f5dac  stfd 18, 256(1)
  03f5db0  stfd 19, 264(1)
  03f5db4  stfd 20, 272(1)
  03f5db8  stfd 21, 280(1)
  03f5dbc  stfd 22, 288(1)
  03f5dc0  stfd 23, 296(1)
  03f5dc4  stfd 24, 304(1)
  03f5dc8  stfd 25, 312(1)
  03f5dcc  stfd 26, 320(1)
  03f5dd0  stfd 27, 328(1)
  03f5dd4  stfd 28, 336(1)
  03f5dd8  stfd 29, 344(1)
  03f5ddc  stfd 30, 352(1)
  03f5de0  stfd 31, 360(1)
  03f5de4  std 31, 216(1)
  03f5de8  std 30, 208(1)
  03f5dec  lwz 31, 120(3)
  03f5df0  ori 30, 3, 0
  03f5df4  lhz 3, 108(31)
  03f5df8  std 29, 200(1)
  03f5dfc  std 28, 192(1)
  03f5e00  std 27, 184(1)
  03f5e04  cmpwi 3, 0
  03f5e08  bt 2, 0x3f6504
  03f5e0c  lfs 1, 228(30)
  03f5e10  lfs 2, 224(30)
  03f5e14  fmuls 3, 1, 1
  03f5e18  lfs 4, 232(30)
  03f5e1c  lfs 5, 196(30)
  03f5e20  lfs 6, 192(30)
  03f5e24  fmuls 7, 5, 5
  03f5e28  lfs 8, 200(30)
  03f5e2c  lis 3, 133
  03f5e30  fmadds 3, 2, 2, 3
  03f5e34  fmadds 7, 6, 6, 7
  03f5e38  lfs 9, 17456(3)
  03f5e3c  lis 3, 133
  03f5e40  fmadds 3, 4, 4, 3
  03f5e44  fmadds 7, 8, 8, 7
  03f5e48  lfs 10, 17460(3)
  03f5e4c  lis 3, 63
  03f5e50  fsqrts 3, 3
  03f5e54  addi 29, 3, 23880
  03f5e58  lis 3, 149
  03f5e5c  addic 3, 3, 5056
  03f5e60  lfs 11, 0(29)
  03f5e64  lfs 12, 20(30)
  03f5e68  lfs 13, 16(30)
  03f5e6c  lfs 0, 24(30)
  03f5e70  lfs 31, 4(29)
  03f5e74  lfs 30, 324(3)
  03f5e78  lfs 29, 320(3)
  03f5e7c  lfs 28, 328(3)
  03f5e80  lfs 23, 92(3)
  03f5e84  lis 4, 150
  03f5e88  addic 28, 4, -12416
  03f5e8c  fsqrts 7, 7
  03f5e90  fdivs 9, 9, 3
  03f5e94  fsub 27, 11, 3
  03f5e98  fsub 25, 11, 3
  03f5e9c  fsub 24, 11, 3
  03f5ea0  fsub 26, 3, 11
  03f5ea4  fsub 22, 3, 11
  03f5ea8  fsub 3, 3, 11
  03f5eac  fdivs 10, 10, 7
  03f5eb0  fsub 21, 11, 7
  03f5eb4  fsub 20, 7, 11
  03f5eb8  fsub 19, 11, 7
  03f5ebc  fsub 18, 11, 7
  03f5ec0  fsub 17, 7, 11
  03f5ec4  fsub 7, 7, 11
  03f5ec8  fmuls 1, 1, 9
  03f5ecc  fmuls 2, 2, 9
  03f5ed0  fmuls 4, 4, 9
  03f5ed4  fsel 9, 27, 11, 1
  03f5ed8  fsel 27, 25, 11, 2
  03f5edc  fsel 25, 24, 11, 4
  03f5ee0  fsel 1, 26, 9, 1
  03f5ee4  fsel 2, 22, 27, 2
  03f5ee8  fsel 3, 3, 25, 4
  03f5eec  fadds 1, 12, 1
  03f5ef0  fmuls 4, 5, 10
  03f5ef4  fmuls 5, 6, 10
  03f5ef8  fmuls 6, 8, 10
  03f5efc  fadds 2, 13, 2
  03f5f00  fadds 3, 0, 3
  03f5f04  fsel 8, 21, 11, 4
  03f5f08  fsel 9, 19, 11, 5
  03f5f0c  fsel 10, 18, 11, 6
  03f5f10  fsel 4, 20, 8, 4
  03f5f14  fsel 5, 17, 9, 5
  03f5f18  fsel 6, 7, 10, 6
  03f5f1c  fadds 1, 1, 4
  03f5f20  fadds 2, 2, 5
  03f5f24  fadds 3, 3, 6
  03f5f28  lfs 4, 76(3)
  03f5f2c  lfs 8, 108(3)
  03f5f30  lfs 9, 124(3)
  03f5f34  fsubs 1, 1, 30
  03f5f38  fsubs 2, 2, 29
  03f5f3c  fsubs 3, 3, 28
  03f5f40  fmuls 5, 1, 31
  03f5f44  fmuls 1, 1, 1
  03f5f48  fmuls 6, 2, 31
  03f5f4c  fmuls 7, 3, 31
  03f5f50  fmuls 10, 23, 5
  03f5f54  fmadds 1, 2, 2, 1
  03f5f58  lfs 2, 528(28)
  03f5f5c  fmadds 4, 4, 6, 10
  03f5f60  fmadds 14, 3, 3, 1
  03f5f64  lfs 10, 80(3)
  03f5f68  fmuls 3, 10, 5
  03f5f6c  fmadds 1, 8, 7, 4
  03f5f70  fsqrts 14, 14
  03f5f74  lfs 4, 64(3)
  03f5f78  lfs 8, 84(3)
  03f5f7c  lfs 10, 68(3)
  03f5f80  lfs 11, 88(3)
  03f5f84  lfs 12, 96(3)
  03f5f88  lfs 13, 72(3)
  03f5f8c  lfs 0, 100(3)
  03f5f90  lfs 30, 112(3)
  03f5f94  lfs 29, 116(3)
  03f5f98  lfs 28, 104(3)
  03f5f9c  lfs 27, 120(3)
  03f5fa0  lfs 31, 8(29)
  03f5fa4  fadds 1, 1, 9
  03f5fa8  fmuls 8, 8, 5
  03f5fac  fmadds 3, 4, 6, 3
  03f5fb0  fmuls 4, 11, 5
  03f5fb4  fdivs 1, 2, 1
  03f5fb8  fmadds 2, 10, 6, 8
  03f5fbc  fmadds 4, 13, 6, 4
  03f5fc0  fmadds 3, 12, 7, 3
  03f5fc4  fmadds 2, 0, 7, 2
  03f5fc8  fmadds 4, 28, 7, 4
  03f5fcc  fadds 3, 3, 30
  03f5fd0  fadds 2, 2, 29
  03f5fd4  fadds 4, 4, 27
  03f5fd8  fmuls 3, 3, 1
  03f5fdc  fmuls 30, 2, 1
  03f5fe0  fmuls 29, 4, 1
  03f5fe4  fmuls 1, 3, 31
  03f5fe8  bl 0x502758
  03f5fec  nop
  03f5ff0  lis 4, 0
  03f5ff4  fmuls 1, 30, 31
  03f5ff8  ori 27, 4, 32768
  03f5ffc  addc 30, 3, 27
  03f6000  bl 0x502758
  03f6004  nop
  03f6008  lfs 1, 12(29)
  03f600c  addc 29, 3, 27
  03f6010  lfs 2, 424(28)
  03f6014  sldi 29, 29, 16
  03f6018  fmadds 1, 29, 1, 2
  03f601c  bl 0x502758
  03f6020  nop
  03f6024  fcmpu 0, 14, 31
  03f6028  sldi 28, 3, 32
  03f602c  lwz 3, 120(31)
  03f6030  cror 6, 0, 2
  03f6034  bt 6, 0x3f6040
  03f6038  fmr 14, 31
  03f603c  b 0x3f605c
  03f6040  lis 4, 63
  03f6044  addi 4, 4, 23880
  03f6048  lfs 1, 16(4)
  03f604c  fcmpu 0, 14, 1
  03f6050  cror 6, 1, 2
  03f6054  bt 6, 0x3f605c
  03f6058  fmr 14, 1
  03f605c  srawi 3, 3, 24
  03f6060  addic 3, 3, 16
  03f6064  extsw 3, 3
  03f6068  bl 0x502730
  03f606c  nop
  03f6070  lis 3, 63
  03f6074  lfs 2, 116(31)
  03f6078  addi 27, 3, 23880
  03f607c  lfs 31, 32(27)
  03f6080  lfs 30, 56(27)
  03f6084  fsubs 3, 31, 2
  03f6088  lfs 29, 36(27)
  03f608c  fadds 4, 2, 30
  03f6090  lfs 28, 40(27)
  03f6094  fsubs 5, 29, 2
  03f6098  lfs 10, 20(27)
  03f609c  fmuls 1, 1, 10
  03f60a0  fsub 6, 2, 3
  03f60a4  fsubs 7, 31, 4
  03f60a8  fsubs 8, 29, 4
  03f60ac  fsel 3, 6, 3, 2
  03f60b0  fsub 6, 4, 7
  03f60b4  fsub 12, 5, 3
  03f60b8  fsel 4, 6, 7, 4
  03f60bc  lfs 6, 24(27)
  03f60c0  lfs 11, 28(27)
  03f60c4  fmr 9, 11
  03f60c8  lfs 27, 44(27)
  03f60cc  lfs 26, 48(27)
  03f60d0  lfs 24, 52(27)
  03f60d4  fsel 3, 12, 5, 3
  03f60d8  fsub 5, 8, 4
  03f60dc  lfs 23, 60(27)
  03f60e0  fnmsubs 6, 14, 6, 9
  03f60e4  fmuls 7, 3, 3
  03f60e8  fsel 4, 5, 8, 4
  03f60ec  fmuls 25, 1, 6
  03f60f0  fmuls 1, 7, 3
  03f60f4  fmuls 5, 4, 4
  03f60f8  fmuls 8, 7, 1
  03f60fc  fmadds 1, 1, 28, 3
  03f6100  fmuls 3, 5, 4
  03f6104  fmuls 6, 7, 8
  03f6108  fmadds 1, 8, 27, 1
  03f610c  fmuls 8, 5, 3
  03f6110  fmadds 3, 3, 28, 4
  03f6114  fmuls 4, 7, 6
  03f6118  fmadds 6, 6, 26, 1
  03f611c  fmuls 7, 5, 8
  03f6120  fmadds 3, 8, 27, 3
  03f6124  fmr 1, 2
  03f6128  fmr 2, 23
  03f612c  fmadds 4, 4, 24, 6
  03f6130  fmuls 5, 5, 7
  03f6134  fmadds 3, 7, 26, 3
  03f6138  fmuls 22, 25, 4
  03f613c  fmadds 3, 5, 24, 3
  03f6140  fmuls 21, 25, 3
  03f6144  bl 0x502578
  03f6148  nop
  03f614c  fsubs 2, 31, 1
  03f6150  fsubs 3, 29, 1
  03f6154  fsub 4, 1, 2
  03f6158  fsel 1, 4, 2, 1
  03f615c  fsub 2, 3, 1
  03f6160  fsel 3, 2, 3, 1
  03f6164  lfs 1, 116(31)
  03f6168  fmr 2, 23
  03f616c  fmuls 5, 3, 3
  03f6170  fmuls 4, 5, 3
  03f6174  fmuls 6, 5, 4
  03f6178  fmadds 3, 4, 28, 3
  03f617c  fmuls 4, 5, 6
  03f6180  fmadds 3, 6, 27, 3
  03f6184  fmuls 5, 5, 4
  03f6188  fmadds 3, 4, 26, 3
  03f618c  fmadds 3, 5, 24, 3
  03f6190  fmuls 23, 25, 3
  03f6194  bl 0x502578
  03f6198  nop
  03f619c  fadds 1, 1, 30
  03f61a0  fsubs 2, 31, 1
  03f61a4  fsubs 3, 29, 1
  03f61a8  fsub 4, 1, 2
  03f61ac  fsel 1, 4, 2, 1
  03f61b0  fsub 2, 3, 1
  03f61b4  fsel 3, 2, 3, 1
  03f61b8  lfs 1, 116(31)
  03f61bc  lfs 20, 64(27)
  03f61c0  fmr 2, 20
  03f61c4  fmuls 5, 3, 3
  03f61c8  fmuls 6, 5, 3
  03f61cc  fmuls 4, 5, 6
  03f61d0  fmadds 3, 6, 28, 3
  03f61d4  fmuls 6, 5, 4
  03f61d8  fmadds 3, 4, 27, 3
  03f61dc  fmuls 4, 5, 6
  03f61e0  fmadds 3, 6, 26, 3
  03f61e4  fmadds 3, 4, 24, 3
  03f61e8  fmuls 19, 25, 3
  03f61ec  bl 0x502578
  03f61f0  nop
  03f61f4  fsubs 2, 31, 1
  03f61f8  fsubs 3, 29, 1
  03f61fc  fsub 4, 1, 2
  03f6200  fsel 1, 4, 2, 1
  03f6204  fsub 2, 3, 1
  03f6208  fsel 3, 2, 3, 1
  03f620c  lfs 1, 116(31)
  03f6210  fmr 2, 20
  03f6214  fmuls 4, 3, 3
  03f6218  fmuls 5, 4, 3
  03f621c  fmuls 6, 4, 5
  03f6220  fmadds 3, 5, 28, 3
  03f6224  fmuls 5, 4, 6
  03f6228  fmadds 3, 6, 27, 3
  03f622c  fmuls 4, 4, 5
  03f6230  fmadds 3, 5, 26, 3
  03f6234  fmadds 3, 4, 24, 3
  03f6238  fmuls 20, 25, 3
  03f623c  bl 0x502578
  03f6240  nop
  03f6244  fadds 1, 1, 30
  03f6248  fsubs 2, 31, 1
  03f624c  fsubs 3, 29, 1
  03f6250  fsub 4, 1, 2
  03f6254  fsel 1, 4, 2, 1
  03f6258  fsub 2, 3, 1
  03f625c  fsel 3, 2, 3, 1
  03f6260  lfs 1, 116(31)
  03f6264  lfs 18, 68(27)
  03f6268  fmr 2, 18
  03f626c  fmuls 4, 3, 3
  03f6270  fmuls 5, 4, 3
  03f6274  fmuls 6, 4, 5
  03f6278  fmadds 3, 5, 28, 3
  03f627c  fmuls 5, 4, 6
  03f6280  fmadds 3, 6, 27, 3
  03f6284  fmuls 4, 4, 5
  03f6288  fmadds 3, 5, 26, 3
  03f628c  fmadds 3, 4, 24, 3
  03f6290  fmuls 17, 25, 3
  03f6294  bl 0x502578
  03f6298  nop
  03f629c  fsubs 2, 31, 1
  03f62a0  fsubs 3, 29, 1
  03f62a4  fsub 4, 1, 2
  03f62a8  fsel 1, 4, 2, 1
  03f62ac  fsub 2, 3, 1
  03f62b0  fsel 3, 2, 3, 1
  03f62b4  lfs 1, 116(31)
  03f62b8  fmr 2, 18
  03f62bc  fmuls 5, 3, 3
  03f62c0  fmuls 4, 5, 3
  03f62c4  fmuls 6, 5, 4
  03f62c8  fmadds 3, 4, 28, 3
  03f62cc  fmuls 4, 5, 6
  03f62d0  fmadds 3, 6, 27, 3
  03f62d4  fmuls 5, 5, 4
  03f62d8  fmadds 3, 4, 26, 3
  03f62dc  fmadds 3, 5, 24, 3
  03f62e0  fmuls 18, 25, 3
  03f62e4  bl 0x502578
  03f62e8  nop
  03f62ec  fadds 1, 1, 30
  03f62f0  li 3, 0
  03f62f4  li 4, 512
  03f62f8  lis 5, 512
  03f62fc  lis 6, 512
  03f6300  stw 3, 160(1)
  03f6304  ori 3, 5, 512
  03f6308  stw 4, 164(1)
  03f630c  fsubs 2, 31, 1
  03f6310  fsubs 3, 29, 1
  03f6314  stw 6, 168(1)
  03f6318  stw 3, 172(1)
  03f631c  lwz 3, 120(31)
  03f6320  stw 3, 156(1)
  03f6324  fsub 4, 1, 2
  03f6328  stw 3, 152(1)
  03f632c  stw 3, 148(1)
  03f6330  stw 3, 144(1)
  03f6334  std 28, 136(1)
  03f6338  std 28, 128(1)
  03f633c  std 28, 120(1)
  03f6340  std 28, 112(1)
  03f6344  fsel 1, 4, 2, 1
  03f6348  fsub 2, 3, 1
  03f634c  fsel 1, 2, 3, 1
  03f6350  fmuls 2, 1, 1
  03f6354  fmuls 3, 2, 1
  03f6358  fmuls 4, 2, 3
  03f635c  fmadds 1, 3, 28, 1
  03f6360  fmuls 3, 2, 4
  03f6364  fmadds 4, 4, 27, 1
  03f6368  fmr 1, 21
  03f636c  fmuls 2, 2, 3
  03f6370  fmadds 3, 3, 26, 4
  03f6374  fmadds 2, 2, 24, 3
  03f6378  fmuls 31, 25, 2
  03f637c  bl 0x502758
  03f6380  nop
  03f6384  slwi 3, 3, 20
  03f6388  fmr 1, 22
  03f638c  addc 3, 3, 29
  03f6390  extsw 3, 3
  03f6394  addc 31, 28, 3
  03f6398  std 31, 112(1)
  03f639c  bl 0x502758
  03f63a0  nop
  03f63a4  slwi 3, 3, 4
  03f63a8  ld 28, 120(1)
  03f63ac  fmr 1, 19
  03f63b0  addc 3, 3, 30
  03f63b4  extsw 3, 3
  03f63b8  addc 3, 31, 3
  03f63bc  std 3, 112(1)
  03f63c0  bl 0x502758
  03f63c4  nop
  03f63c8  slwi 3, 3, 20
  03f63cc  fmr 1, 23
  03f63d0  addc 3, 3, 29
  03f63d4  extsw 3, 3
  03f63d8  addc 31, 28, 3
  03f63dc  std 31, 120(1)
  03f63e0  bl 0x502758
  03f63e4  nop
  03f63e8  slwi 3, 3, 4
  03f63ec  ld 28, 128(1)
  03f63f0  addc 3, 3, 30
  03f63f4  fmr 1, 17
  03f63f8  extsw 3, 3
  03f63fc  addc 3, 31, 3
  03f6400  std 3, 120(1)
  03f6404  bl 0x502758
  03f6408  nop
  03f640c  slwi 3, 3, 20
  03f6410  fmr 1, 20
  03f6414  addc 3, 3, 29
  03f6418  extsw 3, 3
  03f641c  addc 31, 28, 3
  03f6420  std 31, 128(1)
  03f6424  bl 0x502758
  03f6428  nop
  03f642c  slwi 3, 3, 4
  03f6430  ld 28, 136(1)
  03f6434  fmr 1, 31
  03f6438  addc 3, 3, 30
  03f643c  extsw 3, 3
  03f6440  addc 3, 31, 3
  03f6444  std 3, 128(1)
  03f6448  bl 0x502758
  03f644c  nop
  03f6450  slwi 3, 3, 20
  03f6454  fmr 1, 18
  03f6458  addc 3, 3, 29
  03f645c  extsw 3, 3
  03f6460  addc 31, 28, 3
  03f6464  std 31, 136(1)
  03f6468  bl 0x502758
  03f646c  nop
  03f6470  slwi 3, 3, 4
  03f6474  li 4, 2
  03f6478  addc 3, 3, 30
  03f647c  li 5, 0
  03f6480  extsw 6, 3
  03f6484  li 3, 0
  03f6488  addc 8, 31, 6
  03f648c  li 6, 1
  03f6490  li 7, 128
  03f6494  std 8, 136(1)
  03f6498  bl 0x502ea8
  03f649c  nop
  03f64a0  ori 4, 3, 0
  03f64a4  li 3, 3
  03f64a8  bl 0x174f80
  03f64ac  nop
  03f64b0  li 3, 19
  03f64b4  bl 0x685c4
  03f64b8  nop
  03f64bc  ori 6, 3, 0
  03f64c0  addic 3, 1, 112
  03f64c4  addic 4, 1, 160
  03f64c8  addic 5, 1, 144
  03f64cc  li 7, 1
  03f64d0  bl 0x6ecf8
  03f64d4  nop
  03f64d8  li 3, 0
  03f64dc  li 4, 1
  03f64e0  li 5, 0
  03f64e4  li 6, 1
  03f64e8  li 7, 128
  03f64ec  bl 0x502ea8
  03f64f0  nop
  03f64f4  ori 4, 3, 0
  03f64f8  li 3, 3
  03f64fc  bl 0x174f80
  03f6500  nop
  03f6504  ld 0, 384(1)
  03f6508  mtlr 0
  03f650c  lfd 14, 224(1)
  03f6510  lfd 15, 232(1)
  03f6514  lfd 16, 240(1)
  03f6518  lfd 17, 248(1)
  03f651c  lfd 18, 256(1)
  03f6520  lfd 19, 264(1)
  03f6524  lfd 20, 272(1)
  03f6528  lfd 21, 280(1)
  03f652c  lfd 22, 288(1)
  03f6530  lfd 23, 296(1)
  03f6534  lfd 24, 304(1)
  03f6538  lfd 25, 312(1)
  03f653c  lfd 26, 320(1)
  03f6540  lfd 27, 328(1)
  03f6544  lfd 28, 336(1)
  03f6548  lfd 29, 344(1)
  03f654c  lfd 30, 352(1)
  03f6550  lfd 31, 360(1)
  03f6554  ld 27, 184(1)
  03f6558  ld 28, 192(1)
  03f655c  ld 29, 200(1)
  03f6560  ld 30, 208(1)
  03f6564  ld 31, 216(1)
  03f6568  addi 1, 1, 368
  03f656c  blr

M1382_003f65a0:   # 0x3f65a0, 0x338 bytes
  03f65a0  stdu 1, -176(1)
  03f65a4  mflr 0
  03f65a8  std 0, 192(1)
  03f65ac  stfd 31, 168(1)
  03f65b0  cmpwi 5, 5
  03f65b4  std 30, 152(1)
  03f65b8  cmpwi 1, 5, 4
  03f65bc  cmpwi 6, 5, 10
  03f65c0  std 31, 160(1)
  03f65c4  ori 30, 3, 0
  03f65c8  std 29, 144(1)
  03f65cc  std 28, 136(1)
  03f65d0  std 27, 128(1)
  03f65d4  ori 31, 4, 0
  03f65d8  bt 1, 0x3f65e4
  03f65dc  bf 5, 0x3f6610
  03f65e0  b 0x3f65fc
  03f65e4  bf 26, 0x3f6610
  03f65e8  li 3, 989
  03f65ec  bl 0xefa28
  03f65f0  nop
  03f65f4  ori 28, 3, 0
  03f65f8  b 0x3f6620
  03f65fc  li 3, 988
  03f6600  bl 0xefa28
  03f6604  nop
  03f6608  ori 28, 3, 0
  03f660c  b 0x3f6620
  03f6610  li 3, 633
  03f6614  bl 0xefa28
  03f6618  nop
  03f661c  ori 28, 3, 0
  03f6620  cmpwi 28, 0
  03f6624  bt 2, 0x3f68ac
  03f6628  ori 3, 30, 0
  03f662c  cmpwi 3, 0
  03f6630  bt 2, 0x3f6650
  03f6634  lwz 4, 184(3)
  03f6638  cmpwi 4, 0
  03f663c  bt 2, 0x3f6650
  03f6640  lwz 3, 184(3)
  03f6644  lwz 4, 184(3)
  03f6648  cmpwi 4, 0
  03f664c  bf 2, 0x3f6640
  03f6650  lhz 4, 166(28)
  03f6654  lwz 29, 120(28)
  03f6658  extsh 4, 4
  03f665c  cmpwi 4, 987
  03f6660  cmpwi 1, 4, 633
  03f6664  cmpwi 6, 4, 988
  03f6668  cmpwi 7, 4, 989
  03f666c  bt 1, 0x3f6678
  03f6670  bt 6, 0x3f6684
  03f6674  b 0x3f66d4
  03f6678  bf 25, 0x3f66a0
  03f667c  bf 29, 0x3f66bc
  03f6680  b 0x3f66d4
  03f6684  lis 4, 133
  03f6688  lwz 5, 36(28)
  03f668c  lfs 1, 17544(4)
  03f6690  lfs 2, 36(5)
  03f6694  fmuls 1, 2, 1
  03f6698  stfs 1, 44(28)
  03f669c  b 0x3f66d4
  03f66a0  lis 4, 133
  03f66a4  lwz 5, 36(28)
  03f66a8  lfs 1, 17548(4)
  03f66ac  lfs 2, 36(5)
  03f66b0  fmuls 1, 2, 1
  03f66b4  stfs 1, 44(28)
  03f66b8  b 0x3f66d4
  03f66bc  lis 4, 133
  03f66c0  lwz 5, 36(28)
  03f66c4  lfs 1, 17552(4)
  03f66c8  lfs 2, 36(5)
  03f66cc  fmuls 1, 2, 1
  03f66d0  stfs 1, 44(28)
  03f66d4  li 4, 32
  03f66d8  ori 27, 30, 0
  03f66dc  stw 3, 184(28)
  03f66e0  li 5, 64
  03f66e4  li 6, 1
  03f66e8  lis 30, 151
  03f66ec  stb 4, 48(28)
  03f66f0  li 3, 4
  03f66f4  addic 30, 30, -25376
  03f66f8  sth 5, 50(28)
  03f66fc  stb 6, 49(28)
  03f6700  stb 3, 32(28)
  03f6704  lhz 3, 52(28)
  03f6708  lwz 4, 8320(30)
  03f670c  ori 3, 3, 256
  03f6710  ld 4, 56(4)
  03f6714  sth 3, 52(28)
  03f6718  std 4, 56(28)
  03f671c  bl 0xfcc68
  03f6720  nop
  03f6724  stfs 1, 64(28)
  03f6728  bl 0xfcc68
  03f672c  nop
  03f6730  stfs 1, 72(28)
  03f6734  addic 3, 28, 192
  03f6738  addic 4, 28, 64
  03f673c  bl 0x500b64
  03f6740  nop
  03f6744  lfs 1, 16(27)
  03f6748  stfs 1, 16(28)
  03f674c  lfs 1, 20(27)
  03f6750  stfs 1, 20(28)
  03f6754  lfs 1, 24(27)
  03f6758  stfs 1, 24(28)
  03f675c  lfs 1, 28(27)
  03f6760  stfs 1, 28(28)
  03f6764  bl 0xfcc68
  03f6768  nop
  03f676c  lis 3, 63
  03f6770  addi 5, 3, 25968
  03f6774  li 3, 0
  03f6778  lfs 2, 0(5)
  03f677c  lfs 3, 4(5)
  03f6780  fadds 2, 1, 2
  03f6784  lfs 4, 8(5)
  03f6788  fsubs 5, 3, 1
  03f678c  fsubs 6, 4, 1
  03f6790  lis 6, 133
  03f6794  lis 7, 114
  03f6798  addic 4, 1, 112
  03f679c  fsubs 3, 3, 2
  03f67a0  fsub 7, 1, 5
  03f67a4  fsubs 4, 4, 2
  03f67a8  fsub 8, 2, 3
  03f67ac  fsel 1, 7, 5, 1
  03f67b0  lfs 5, 12(5)
  03f67b4  fsel 2, 8, 3, 2
  03f67b8  fsub 3, 6, 1
  03f67bc  fsub 8, 4, 2
  03f67c0  fsel 1, 3, 6, 1
  03f67c4  lfs 3, 16(5)
  03f67c8  lfs 6, 20(5)
  03f67cc  lfs 9, 24(5)
  03f67d0  stw 3, 120(1)
  03f67d4  stw 3, 124(1)
  03f67d8  ori 3, 29, 0
  03f67dc  fsel 2, 8, 4, 2
  03f67e0  fmuls 4, 1, 1
  03f67e4  fmuls 7, 2, 2
  03f67e8  fmuls 8, 4, 1
  03f67ec  fmuls 10, 7, 2
  03f67f0  fmuls 11, 4, 8
  03f67f4  fmadds 1, 8, 5, 1
  03f67f8  fmuls 8, 7, 10
  03f67fc  fmadds 2, 10, 5, 2
  03f6800  fmuls 5, 4, 11
  03f6804  fmadds 1, 11, 3, 1
  03f6808  fmuls 10, 7, 8
  03f680c  fmadds 2, 8, 3, 2
  03f6810  fmuls 3, 4, 5
  03f6814  fmadds 1, 5, 6, 1
  03f6818  fmuls 4, 7, 10
  03f681c  fmadds 2, 10, 6, 2
  03f6820  fmadds 1, 3, 9, 1
  03f6824  fnmadds 2, 4, 9, 2
  03f6828  stfs 1, 112(1)
  03f682c  stfs 2, 116(1)
  03f6830  lfs 31, 28(5)
  03f6834  lfs 1, 17516(6)
  03f6838  lfs 2, -3052(7)
  03f683c  fmuls 1, 1, 31
  03f6840  fmuls 1, 1, 2
  03f6844  bl 0x110e18
  03f6848  nop
  03f684c  rlwinm 3, 31, 0, 30, 30
  03f6850  lfs 1, 24(28)
  03f6854  cmpwi 3, 0
  03f6858  stfs 1, 96(29)
  03f685c  bt 2, 0x3f68a0
  03f6860  lis 3, 63
  03f6864  rlwinm 4, 31, 0, 27, 27
  03f6868  addi 3, 3, 25968
  03f686c  cmpwi 4, 0
  03f6870  lfs 1, 32(3)
  03f6874  bt 2, 0x3f6894
  03f6878  lis 3, 63
  03f687c  addi 3, 3, 25968
  03f6880  lfs 1, 36(3)
  03f6884  lfs 2, 40(3)
  03f6888  bl 0xfcbe8
  03f688c  nop
  03f6890  fmuls 1, 1, 31
  03f6894  ori 4, 28, 0
  03f6898  lwz 3, 8320(30)
  03f689c  bl 0x3f5b10
  03f68a0  ori 3, 28, 0
  03f68a4  bl 0xf31a8
  03f68a8  nop
  03f68ac  ori 3, 28, 0
  03f68b0  ld 0, 192(1)
  03f68b4  mtlr 0
  03f68b8  lfd 31, 168(1)
  03f68bc  ld 27, 128(1)
  03f68c0  ld 28, 136(1)
  03f68c4  ld 29, 144(1)
  03f68c8  ld 30, 152(1)
  03f68cc  ld 31, 160(1)
  03f68d0  addi 1, 1, 176
  03f68d4  blr

M1382_003f68d8:   # 0x3f68d8, 0x14 bytes
  03f68d8  lis 3, 133
  03f68dc  lis 4, 1
  03f68e0  addic 3, 3, 17576
  03f68e4  stw 4, 72(3)
  03f68e8  blr

M1382_003f6930:   # 0x3f6930, 0x3c0 bytes
  03f6930  stdu 1, -240(1)
  03f6934  mflr 0
  03f6938  std 0, 256(1)
  03f693c  stfd 30, 224(1)
  03f6940  stfd 31, 232(1)
  03f6944  std 30, 208(1)
  03f6948  ori 30, 3, 0
  03f694c  lfs 2, 0(5)
  03f6950  lis 3, 63
  03f6954  std 31, 216(1)
  03f6958  fmr 31, 1
  03f695c  ori 31, 5, 0
  03f6960  addi 4, 3, 26864
  03f6964  lfs 3, 16(30)
  03f6968  lfs 4, 4(5)
  03f696c  lfs 5, 20(30)
  03f6970  fsubs 2, 2, 3
  03f6974  fsubs 3, 4, 5
  03f6978  lis 6, 115
  03f697c  addic 3, 30, 72
  03f6980  addic 6, 6, 22784
  03f6984  fabs 4, 2
  03f6988  fabs 5, 3
  03f698c  stfs 2, 128(1)
  03f6990  std 29, 200(1)
  03f6994  stfs 3, 132(1)
  03f6998  lwz 29, 120(30)
  03f699c  fsubs 2, 4, 5
  03f69a0  stfs 2, 136(1)
  03f69a4  lwz 7, 128(1)
  03f69a8  lfs 30, 0(4)
  03f69ac  lfs 1, 128(1)
  03f69b0  lwz 4, 132(1)
  03f69b4  fabs 3, 1
  03f69b8  lfs 1, 132(1)
  03f69bc  lwz 5, 136(1)
  03f69c0  rlwinm 4, 4, 3, 29, 29
  03f69c4  fabs 6, 1
  03f69c8  lfs 1, 136(1)
  03f69cc  rlwimi 4, 5, 2, 30, 30
  03f69d0  fsub 2, 1, 30
  03f69d4  fsub 7, 1, 30
  03f69d8  rlwimi 4, 7, 4, 28, 28
  03f69dc  ori 5, 6, 0
  03f69e0  rlwimi 5, 4, 2, 26, 28
  03f69e4  slwi 4, 4, 2
  03f69e8  clrldi 5, 5, 32
  03f69ec  fsel 3, 2, 3, 5
  03f69f0  lfsx 2, 6, 4
  03f69f4  lfs 1, 4(5)
  03f69f8  fsel 4, 7, 6, 4
  03f69fc  std 28, 192(1)
  03f6a00  std 27, 184(1)
  03f6a04  std 26, 176(1)
  03f6a08  fcmpu 0, 3, 30
  03f6a0c  bt 1, 0x3f6a18
  03f6a10  fmr 2, 30
  03f6a14  b 0x3f6b40
  03f6a18  fsubs 5, 4, 3
  03f6a1c  fadds 3, 4, 3
  03f6a20  addic 7, 1, 16
  03f6a24  li 4, 2
  03f6a28  addic 6, 7, 124
  03f6a2c  addic 5, 7, 140
  03f6a30  mtctr 4
  03f6a34  fdivs 3, 5, 3
  03f6a38  fmuls 5, 3, 3
  03f6a3c  stfs 3, 152(1)
  03f6a40  stfs 3, 144(1)
  03f6a44  stfs 3, 148(1)
  03f6a48  stfs 3, 140(1)
  03f6a4c  lfs 6, 152(1)
  03f6a50  lfs 7, 144(1)
  03f6a54  lfs 8, 148(1)
  03f6a58  fmuls 3, 5, 5
  03f6a5c  fmuls 7, 7, 5
  03f6a60  fmuls 6, 6, 3
  03f6a64  fmuls 4, 3, 3
  03f6a68  fmuls 3, 8, 3
  03f6a6c  stfs 7, 144(1)
  03f6a70  fmuls 5, 6, 5
  03f6a74  stfs 3, 148(1)
  03f6a78  stfs 5, 152(1)
  03f6a7c  lfs 3, 124(7)
  03f6a80  fmuls 3, 3, 4
  03f6a84  stfs 3, 140(7)
  03f6a88  lfs 3, 4(6)
  03f6a8c  addic 7, 7, 8
  03f6a90  addic 6, 6, 8
  03f6a94  fmuls 3, 3, 4
  03f6a98  stfs 3, 4(5)
  03f6a9c  addic 5, 5, 8
  03f6aa0  bdnz 0x3f6a7c
  03f6aa4  ori 8, 1, 0
  03f6aa8  lis 7, 115
  03f6aac  li 9, 4
  03f6ab0  addic 6, 8, 140
  03f6ab4  addic 7, 7, 22752
  03f6ab8  ori 5, 6, 0
  03f6abc  mtctr 9
  03f6ac0  lfs 3, 140(8)
  03f6ac4  lfs 4, 0(7)
  03f6ac8  fmuls 3, 3, 4
  03f6acc  lfs 4, 4(7)
  03f6ad0  addic 7, 7, 8
  03f6ad4  stfs 3, 140(8)
  03f6ad8  lfs 3, 4(6)
  03f6adc  addic 8, 8, 8
  03f6ae0  fmuls 3, 3, 4
  03f6ae4  stfs 3, 4(6)
  03f6ae8  addic 6, 6, 8
  03f6aec  bdnz 0x3f6ac0
  03f6af0  ori 6, 4, 0
  03f6af4  fmr 3, 30
  03f6af8  ori 4, 1, 0
  03f6afc  mtctr 6
  03f6b00  lfs 4, 140(4)
  03f6b04  fadds 3, 3, 4
  03f6b08  lfs 4, 4(5)
  03f6b0c  addic 4, 4, 16
  03f6b10  lfs 5, 8(5)
  03f6b14  lfs 6, 12(5)
  03f6b18  addic 5, 5, 16
  03f6b1c  fadds 3, 3, 4
  03f6b20  fadds 3, 3, 5
  03f6b24  fadds 3, 3, 6
  03f6b28  bdnz 0x3f6b00
  03f6b2c  lis 4, 63
  03f6b30  addi 4, 4, 26864
  03f6b34  lfs 4, 4(4)
  03f6b38  fadds 3, 3, 4
  03f6b3c  fmadds 2, 3, 2, 1
  03f6b40  lis 4, 63
  03f6b44  fmr 1, 2
  03f6b48  lis 27, 114
  03f6b4c  addi 28, 4, 26864
  03f6b50  lis 26, 114
  03f6b54  addic 5, 29, 476
  03f6b58  lfs 4, 8(28)
  03f6b5c  lfs 3, -3048(27)
  03f6b60  lfs 6, 12(28)
  03f6b64  fmuls 3, 3, 4
  03f6b68  lfs 5, -3052(26)
  03f6b6c  fmuls 4, 5, 6
  03f6b70  fmr 2, 3
  03f6b74  bl 0x10a2e0
  03f6b78  nop
  03f6b7c  lfs 3, 16(28)
  03f6b80  lfs 2, -3048(27)
  03f6b84  fmr 1, 31
  03f6b88  addic 3, 29, 472
  03f6b8c  fmuls 2, 2, 3
  03f6b90  bl 0x109af0
  03f6b94  nop
  03f6b98  lfs 1, 20(28)
  03f6b9c  lfs 2, 72(30)
  03f6ba0  lfs 3, 24(28)
  03f6ba4  fadds 1, 2, 1
  03f6ba8  fsubs 5, 3, 2
  03f6bac  lfs 4, 28(28)
  03f6bb0  addic 4, 1, 112
  03f6bb4  ori 3, 30, 0
  03f6bb8  li 8, 0
  03f6bbc  fsubs 3, 3, 1
  03f6bc0  fsub 7, 2, 5
  03f6bc4  fsubs 6, 4, 1
  03f6bc8  fsubs 4, 4, 2
  03f6bcc  fsub 8, 1, 3
  03f6bd0  fsel 2, 7, 5, 2
  03f6bd4  fsel 1, 8, 3, 1
  03f6bd8  fsub 5, 4, 2
  03f6bdc  lfs 3, 32(28)
  03f6be0  lfs 7, 36(28)
  03f6be4  fsub 8, 6, 1
  03f6be8  fsel 2, 5, 4, 2
  03f6bec  lfs 4, 40(28)
  03f6bf0  fsel 1, 8, 6, 1
  03f6bf4  fmuls 5, 2, 2
  03f6bf8  lfs 6, 44(28)
  03f6bfc  lfs 9, 472(29)
  03f6c00  fmuls 8, 1, 1
  03f6c04  fmuls 10, 5, 2
  03f6c08  fmuls 11, 8, 1
  03f6c0c  fmuls 12, 5, 10
  03f6c10  fmadds 2, 10, 3, 2
  03f6c14  fmuls 10, 8, 11
  03f6c18  fmadds 1, 11, 3, 1
  03f6c1c  fmuls 3, 5, 12
  03f6c20  fmadds 2, 12, 7, 2
  03f6c24  fmuls 11, 8, 10
  03f6c28  fmadds 1, 10, 7, 1
  03f6c2c  fmuls 5, 5, 3
  03f6c30  fmadds 2, 3, 4, 2
  03f6c34  fmuls 3, 8, 11
  03f6c38  fmadds 1, 11, 4, 1
  03f6c3c  lfs 4, -3052(26)
  03f6c40  fmadds 2, 5, 6, 2
  03f6c44  fmadds 1, 3, 6, 1
  03f6c48  fmr 3, 30
  03f6c4c  fmuls 1, 1, 9
  03f6c50  stfs 1, 112(1)
  03f6c54  lfs 1, 472(29)
  03f6c58  li 29, 0
  03f6c5c  fmuls 1, 2, 1
  03f6c60  stw 29, 120(1)
  03f6c64  stfs 1, 116(1)
  03f6c68  lfs 1, 48(28)
  03f6c6c  fmuls 1, 4, 1
  03f6c70  stfs 1, 120(1)
  03f6c74  lfs 1, 52(28)
  03f6c78  fmr 2, 1
  03f6c7c  bl 0x1009b0
  03f6c80  nop
  03f6c84  lfs 1, 20(30)
  03f6c88  lfs 2, 4(31)
  03f6c8c  lfs 3, 16(30)
  03f6c90  fsubs 1, 1, 2
  03f6c94  lfs 2, 0(31)
  03f6c98  fsubs 2, 3, 2
  03f6c9c  fmuls 1, 1, 1
  03f6ca0  fmadds 1, 2, 2, 1
  03f6ca4  lfs 2, 56(28)
  03f6ca8  fsqrts 1, 1
  03f6cac  fcmpu 0, 1, 2
  03f6cb0  cror 6, 1, 2
  03f6cb4  bt 6, 0x3f6cbc
  03f6cb8  li 29, 1
  03f6cbc  ori 3, 29, 0
  03f6cc0  ld 0, 256(1)
  03f6cc4  mtlr 0
  03f6cc8  lfd 30, 224(1)
  03f6ccc  lfd 31, 232(1)
  03f6cd0  ld 26, 176(1)
  03f6cd4  ld 27, 184(1)
  03f6cd8  ld 28, 192(1)
  03f6cdc  ld 29, 200(1)
  03f6ce0  ld 30, 208(1)
  03f6ce4  ld 31, 216(1)
  03f6ce8  addi 1, 1, 240
  03f6cec  blr

M1382_003f6d30:   # 0x3f6d30, 0x2e8 bytes
  03f6d30  stdu 1, -192(1)
  03f6d34  mflr 0
  03f6d38  std 0, 208(1)
  03f6d3c  stfd 31, 184(1)
  03f6d40  lis 4, 63
  03f6d44  lis 5, 114
  03f6d48  std 31, 176(1)
  03f6d4c  std 28, 152(1)
  03f6d50  addi 4, 4, 27888
  03f6d54  ori 31, 3, 0
  03f6d58  std 30, 168(1)
  03f6d5c  li 28, 0
  03f6d60  ori 30, 28, 0
  03f6d64  lfs 2, 0(4)
  03f6d68  lfs 1, -3056(5)
  03f6d6c  lbz 3, 32(31)
  03f6d70  std 29, 160(1)
  03f6d74  fmuls 2, 1, 2
  03f6d78  lwz 29, 120(31)
  03f6d7c  cmpwi 3, 6
  03f6d80  cmpwi 1, 3, 3
  03f6d84  cmpwi 6, 3, 12
  03f6d88  cmpwi 7, 3, 11
  03f6d8c  fctiwz 2, 2
  03f6d90  std 27, 144(1)
  03f6d94  stfd 2, 112(1)
  03f6d98  lwz 27, 116(1)
  03f6d9c  std 26, 136(1)
  03f6da0  extsw 27, 27
  03f6da4  bt 1, 0x3f6db0
  03f6da8  bf 5, 0x3f6e14
  03f6dac  b 0x3f6dc8
  03f6db0  bt 25, 0x3f6dbc
  03f6db4  bf 29, 0x3f6df0
  03f6db8  b 0x3f6fec
  03f6dbc  cmpwi 3, 15
  03f6dc0  bf 1, 0x3f6df0
  03f6dc4  b 0x3f6e14
  03f6dc8  lis 3, 63
  03f6dcc  addi 3, 3, 27888
  03f6dd0  li 28, 1
  03f6dd4  lfs 2, 4(3)
  03f6dd8  fmuls 1, 1, 2
  03f6ddc  fctiwz 1, 1
  03f6de0  stfd 1, 112(1)
  03f6de4  lwz 27, 116(1)
  03f6de8  extsw 27, 27
  03f6dec  b 0x3f6e14
  03f6df0  lis 3, 63
  03f6df4  addi 3, 3, 27888
  03f6df8  li 28, 2
  03f6dfc  lfs 2, 8(3)
  03f6e00  fmuls 1, 1, 2
  03f6e04  fctiwz 1, 1
  03f6e08  stfd 1, 112(1)
  03f6e0c  lwz 27, 116(1)
  03f6e10  extsw 27, 27
  03f6e14  ori 3, 27, 0
  03f6e18  bl 0x502730
  03f6e1c  nop
  03f6e20  lis 3, 161
  03f6e24  lwz 3, 1808(3)
  03f6e28  divw 4, 3, 27
  03f6e2c  mullw 4, 4, 27
  03f6e30  subc 3, 3, 4
  03f6e34  extsw 3, 3
  03f6e38  std 3, 112(1)
  03f6e3c  lis 3, 63
  03f6e40  addi 27, 3, 27888
  03f6e44  lfs 2, 12(27)
  03f6e48  lfd 3, 112(1)
  03f6e4c  fcfid 3, 3
  03f6e50  frsp 3, 3
  03f6e54  fdivs 1, 3, 1
  03f6e58  lfs 3, 16(27)
  03f6e5c  lfs 4, 20(27)
  03f6e60  lfs 5, 24(27)
  03f6e64  lfs 6, 28(27)
  03f6e68  lfs 7, 32(27)
  03f6e6c  lfs 8, 36(27)
  03f6e70  lfs 9, 40(27)
  03f6e74  lfs 10, 44(27)
  03f6e78  lfs 11, 48(27)
  03f6e7c  fmuls 1, 1, 2
  03f6e80  fmadds 1, 1, 3, 4
  03f6e84  fsubs 2, 5, 1
  03f6e88  fsubs 3, 6, 1
  03f6e8c  fsub 4, 1, 2
  03f6e90  fsel 1, 4, 2, 1
  03f6e94  fsub 2, 3, 1
  03f6e98  fsel 1, 2, 3, 1
  03f6e9c  fmuls 2, 1, 1
  03f6ea0  fmuls 3, 2, 1
  03f6ea4  fmuls 4, 2, 3
  03f6ea8  fmadds 1, 3, 7, 1
  03f6eac  fmuls 3, 2, 4
  03f6eb0  fmadds 1, 4, 8, 1
  03f6eb4  fmuls 2, 2, 3
  03f6eb8  fmadds 1, 3, 9, 1
  03f6ebc  fmadds 31, 2, 10, 1
  03f6ec0  fmuls 1, 31, 11
  03f6ec4  bl 0x502758
  03f6ec8  nop
  03f6ecc  lfs 1, 52(27)
  03f6ed0  ori 26, 3, 0
  03f6ed4  fmuls 1, 31, 1
  03f6ed8  bl 0x502758
  03f6edc  nop
  03f6ee0  lfs 1, 56(27)
  03f6ee4  ori 27, 3, 0
  03f6ee8  fmuls 1, 31, 1
  03f6eec  bl 0x502758
  03f6ef0  nop
  03f6ef4  addic 4, 26, 50
  03f6ef8  addic 7, 27, 180
  03f6efc  extsw 6, 4
  03f6f00  lwz 27, 144(31)
  03f6f04  li 8, 255
  03f6f08  li 5, 255
  03f6f0c  extsw 10, 7
  03f6f10  subc 6, 8, 6
  03f6f14  li 9, 255
  03f6f18  li 8, 255
  03f6f1c  subc 5, 5, 10
  03f6f20  subc 9, 9, 4
  03f6f24  subc 8, 8, 7
  03f6f28  sradi 6, 6, 63
  03f6f2c  sradi 5, 5, 63
  03f6f30  and 6, 6, 9
  03f6f34  addic 3, 3, 20
  03f6f38  and 5, 5, 8
  03f6f3c  cmpwi 28, 2
  03f6f40  addc 4, 4, 6
  03f6f44  slwi 3, 3, 16
  03f6f48  addc 5, 7, 5
  03f6f4c  bf 2, 0x3f6f5c
  03f6f50  srawi 4, 4, 1
  03f6f54  addze 4, 4
  03f6f58  b 0x3f6f80
  03f6f5c  cmpwi 28, 0
  03f6f60  ori 7, 4, 0
  03f6f64  ori 6, 5, 0
  03f6f68  bt 2, 0x3f6f78
  03f6f6c  srawi 6, 4, 1
  03f6f70  ori 7, 5, 0
  03f6f74  addze 6, 6
  03f6f78  ori 5, 7, 0
  03f6f7c  ori 4, 6, 0
  03f6f80  slwi 4, 4, 8
  03f6f84  lis 6, 63
  03f6f88  or 4, 4, 5
  03f6f8c  addi 5, 6, 27888
  03f6f90  or 4, 4, 3
  03f6f94  extsw 3, 27
  03f6f98  lis 7, -32768
  03f6f9c  or 4, 4, 7
  03f6fa0  lfs 1, 60(5)
  03f6fa4  extsw 4, 4
  03f6fa8  bl 0x5027bc
  03f6fac  nop
  03f6fb0  stw 3, 144(31)
  03f6fb4  addic 30, 30, 1
  03f6fb8  addic 5, 29, 512
  03f6fbc  ori 3, 31, 0
  03f6fc0  extsw 4, 30
  03f6fc4  bl 0xf1114
  03f6fc8  nop
  03f6fcc  cmpwi 30, 3
  03f6fd0  addic 29, 29, 16
  03f6fd4  bt 0, 0x3f6fb4
  03f6fd8  lis 3, 113
  03f6fdc  ori 4, 31, 0
  03f6fe0  addic 3, 3, -9008
  03f6fe4  bl 0x6d720
  03f6fe8  nop
  03f6fec  ld 0, 208(1)
  03f6ff0  mtlr 0
  03f6ff4  lfd 31, 184(1)
  03f6ff8  ld 26, 136(1)
  03f6ffc  ld 27, 144(1)
  03f7000  ld 28, 152(1)
  03f7004  ld 29, 160(1)
  03f7008  ld 30, 168(1)
  03f700c  ld 31, 176(1)
  03f7010  addi 1, 1, 192
  03f7014  blr

M1382_003f7040:   # 0x3f7040, 0x4a8 bytes
  03f7040  stdu 1, -272(1)
  03f7044  mflr 0
  03f7048  std 0, 288(1)
  03f704c  stfd 26, 224(1)
  03f7050  stfd 27, 232(1)
  03f7054  stfd 28, 240(1)
  03f7058  stfd 29, 248(1)
  03f705c  stfd 30, 256(1)
  03f7060  stfd 31, 264(1)
  03f7064  lis 4, 151
  03f7068  lfs 30, 16(3)
  03f706c  lis 5, 63
  03f7070  addic 4, 4, -25376
  03f7074  lfs 29, 20(3)
  03f7078  std 31, 216(1)
  03f707c  addi 5, 5, 28696
  03f7080  ori 31, 3, 0
  03f7084  lfs 1, 208(4)
  03f7088  lfs 2, 212(4)
  03f708c  fsubs 30, 1, 30
  03f7090  fsubs 29, 2, 29
  03f7094  std 29, 200(1)
  03f7098  lfs 1, 0(5)
  03f709c  lis 29, 115
  03f70a0  addic 29, 29, 22784
  03f70a4  fabs 4, 30
  03f70a8  fabs 5, 29
  03f70ac  stfs 30, 124(1)
  03f70b0  stfs 29, 128(1)
  03f70b4  std 30, 208(1)
  03f70b8  lfs 31, 24(3)
  03f70bc  lwz 30, 120(3)
  03f70c0  fadds 31, 31, 1
  03f70c4  fsubs 2, 4, 5
  03f70c8  stfs 2, 132(1)
  03f70cc  lwz 6, 124(1)
  03f70d0  lfs 26, 4(5)
  03f70d4  lfs 2, 124(1)
  03f70d8  lwz 7, 128(1)
  03f70dc  lfs 28, 216(4)
  03f70e0  fabs 3, 2
  03f70e4  lfs 1, 128(1)
  03f70e8  rlwinm 7, 7, 3, 29, 29
  03f70ec  lfs 2, 72(3)
  03f70f0  fabs 6, 1
  03f70f4  lwz 3, 132(1)
  03f70f8  lfs 1, 132(1)
  03f70fc  rlwimi 7, 3, 2, 30, 30
  03f7100  fsub 7, 1, 26
  03f7104  fsub 8, 1, 26
  03f7108  rlwimi 7, 6, 4, 28, 28
  03f710c  ori 3, 29, 0
  03f7110  slwi 4, 7, 2
  03f7114  rlwimi 3, 7, 2, 26, 28
  03f7118  clrldi 3, 3, 32
  03f711c  lfsx 1, 29, 4
  03f7120  fsel 5, 7, 3, 5
  03f7124  lfs 3, 4(3)
  03f7128  fsel 4, 8, 6, 4
  03f712c  lfs 27, 8(5)
  03f7130  fcmpu 0, 5, 26
  03f7134  bt 1, 0x3f7140
  03f7138  fmr 1, 26
  03f713c  b 0x3f7258
  03f7140  fsubs 6, 4, 5
  03f7144  fadds 4, 4, 5
  03f7148  addic 3, 1, 16
  03f714c  li 6, 2
  03f7150  addic 5, 3, 168
  03f7154  addic 4, 3, 152
  03f7158  mtctr 6
  03f715c  fdivs 4, 6, 4
  03f7160  fmuls 5, 4, 4
  03f7164  stfs 4, 180(1)
  03f7168  stfs 4, 172(1)
  03f716c  stfs 4, 176(1)
  03f7170  stfs 4, 168(1)
  03f7174  lfs 7, 180(1)
  03f7178  lfs 8, 172(1)
  03f717c  lfs 9, 176(1)
  03f7180  fmuls 6, 5, 5
  03f7184  fmuls 8, 8, 5
  03f7188  fmuls 7, 7, 6
  03f718c  fmuls 4, 6, 6
  03f7190  fmuls 6, 9, 6
  03f7194  stfs 8, 172(1)
  03f7198  fmuls 5, 7, 5
  03f719c  stfs 6, 176(1)
  03f71a0  stfs 5, 180(1)
  03f71a4  lfs 5, 152(3)
  03f71a8  fmuls 5, 5, 4
  03f71ac  stfs 5, 168(3)
  03f71b0  lfs 5, 4(4)
  03f71b4  addic 4, 4, 8
  03f71b8  fmuls 5, 5, 4
  03f71bc  addic 3, 3, 8
  03f71c0  stfs 5, 4(5)
  03f71c4  addic 5, 5, 8
  03f71c8  bdnz 0x3f71a4
  03f71cc  li 5, 4
  03f71d0  ori 3, 1, 0
  03f71d4  mtctr 5
  03f71d8  lis 4, 115
  03f71dc  addic 5, 3, 168
  03f71e0  addic 4, 4, 22752
  03f71e4  ori 7, 5, 0
  03f71e8  lfs 4, 168(3)
  03f71ec  lfs 5, 0(4)
  03f71f0  fmuls 4, 4, 5
  03f71f4  lfs 5, 4(4)
  03f71f8  addic 4, 4, 8
  03f71fc  stfs 4, 168(3)
  03f7200  lfs 4, 4(5)
  03f7204  addic 3, 3, 8
  03f7208  fmuls 4, 4, 5
  03f720c  stfs 4, 4(5)
  03f7210  addic 5, 5, 8
  03f7214  bdnz 0x3f71e8
  03f7218  ori 3, 1, 0
  03f721c  fmr 4, 26
  03f7220  mtctr 6
  03f7224  lfs 5, 168(3)
  03f7228  fadds 4, 4, 5
  03f722c  lfs 5, 4(7)
  03f7230  addic 3, 3, 16
  03f7234  lfs 6, 8(7)
  03f7238  lfs 7, 12(7)
  03f723c  addic 7, 7, 16
  03f7240  fadds 4, 4, 5
  03f7244  fadds 4, 4, 6
  03f7248  fadds 4, 4, 7
  03f724c  bdnz 0x3f7224
  03f7250  fadds 4, 4, 27
  03f7254  fmadds 1, 4, 1, 3
  03f7258  bl 0x5025e0
  03f725c  nop
  03f7260  fmuls 2, 29, 29
  03f7264  fsubs 3, 28, 31
  03f7268  fmadds 2, 30, 30, 2
  03f726c  fabs 4, 3
  03f7270  stfs 3, 116(1)
  03f7274  fsqrts 2, 2
  03f7278  fabs 3, 2
  03f727c  stfs 2, 112(1)
  03f7280  lwz 3, 116(1)
  03f7284  lfs 5, 116(1)
  03f7288  rlwinm 3, 3, 3, 29, 29
  03f728c  fabs 5, 5
  03f7290  fsubs 2, 3, 4
  03f7294  stfs 2, 120(1)
  03f7298  lwz 4, 112(1)
  03f729c  lfs 2, 112(1)
  03f72a0  lwz 5, 120(1)
  03f72a4  lfs 6, 120(1)
  03f72a8  fabs 2, 2
  03f72ac  rlwimi 3, 5, 2, 30, 30
  03f72b0  fsub 7, 6, 26
  03f72b4  fsub 6, 6, 26
  03f72b8  rlwimi 3, 4, 4, 28, 28
  03f72bc  ori 4, 29, 0
  03f72c0  rlwimi 4, 3, 2, 26, 28
  03f72c4  slwi 3, 3, 2
  03f72c8  clrldi 4, 4, 32
  03f72cc  fsel 4, 7, 2, 4
  03f72d0  lfsx 31, 29, 3
  03f72d4  lfs 2, 4(4)
  03f72d8  fsel 3, 6, 5, 3
  03f72dc  fcmpu 0, 4, 26
  03f72e0  bt 1, 0x3f72e8
  03f72e4  b 0x3f73fc
  03f72e8  fsubs 5, 3, 4
  03f72ec  fadds 3, 3, 4
  03f72f0  addic 3, 1, 16
  03f72f4  li 7, 2
  03f72f8  addic 5, 3, 136
  03f72fc  addic 4, 3, 120
  03f7300  mtctr 7
  03f7304  fdivs 3, 5, 3
  03f7308  fmuls 4, 3, 3
  03f730c  stfs 3, 148(1)
  03f7310  stfs 3, 140(1)
  03f7314  stfs 3, 144(1)
  03f7318  stfs 3, 136(1)
  03f731c  lfs 6, 148(1)
  03f7320  lfs 7, 140(1)
  03f7324  lfs 8, 144(1)
  03f7328  fmuls 5, 4, 4
  03f732c  fmuls 7, 7, 4
  03f7330  fmuls 6, 6, 5
  03f7334  fmuls 3, 5, 5
  03f7338  fmuls 5, 8, 5
  03f733c  stfs 7, 140(1)
  03f7340  fmuls 4, 6, 4
  03f7344  stfs 5, 144(1)
  03f7348  stfs 4, 148(1)
  03f734c  lfs 4, 120(3)
  03f7350  fmuls 4, 4, 3
  03f7354  stfs 4, 136(3)
  03f7358  lfs 4, 4(4)
  03f735c  addic 4, 4, 8
  03f7360  fmuls 4, 4, 3
  03f7364  addic 3, 3, 8
  03f7368  stfs 4, 4(5)
  03f736c  addic 5, 5, 8
  03f7370  bdnz 0x3f734c
  03f7374  li 5, 4
  03f7378  ori 3, 1, 0
  03f737c  mtctr 5
  03f7380  lis 4, 115
  03f7384  addic 5, 3, 136
  03f7388  addic 4, 4, 22752
  03f738c  ori 6, 5, 0
  03f7390  lfs 3, 136(3)
  03f7394  lfs 4, 0(4)
  03f7398  fmuls 3, 3, 4
  03f739c  lfs 4, 4(4)
  03f73a0  addic 4, 4, 8
  03f73a4  stfs 3, 136(3)
  03f73a8  lfs 3, 4(5)
  03f73ac  addic 3, 3, 8
  03f73b0  fmuls 3, 3, 4
  03f73b4  stfs 3, 4(5)
  03f73b8  addic 5, 5, 8
  03f73bc  bdnz 0x3f7390
  03f73c0  ori 3, 1, 0
  03f73c4  mtctr 7
  03f73c8  lfs 3, 136(3)
  03f73cc  lfs 4, 4(6)
  03f73d0  fadds 3, 26, 3
  03f73d4  lfs 5, 8(6)
  03f73d8  addic 3, 3, 16
  03f73dc  lfs 26, 12(6)
  03f73e0  addic 6, 6, 16
  03f73e4  fadds 3, 3, 4
  03f73e8  fadds 3, 3, 5
  03f73ec  fadds 26, 3, 26
  03f73f0  bdnz 0x3f73c8
  03f73f4  fadds 26, 26, 27
  03f73f8  fmadds 26, 26, 31, 2
  03f73fc  lis 3, 63
  03f7400  fneg 26, 26
  03f7404  addi 3, 3, 28696
  03f7408  lfs 2, 12(3)
  03f740c  fcmpu 0, 1, 2
  03f7410  cror 6, 0, 2
  03f7414  bt 6, 0x3f7420
  03f7418  fmr 1, 2
  03f741c  b 0x3f743c
  03f7420  lis 3, 63
  03f7424  addi 3, 3, 28696
  03f7428  lfs 2, 16(3)
  03f742c  fcmpu 0, 1, 2
  03f7430  cror 6, 1, 2
  03f7434  bt 6, 0x3f743c
  03f7438  fmr 1, 2
  03f743c  lis 3, 63
  03f7440  addi 3, 3, 28696
  03f7444  lfs 2, 20(3)
  03f7448  fcmpu 0, 26, 2
  03f744c  cror 6, 0, 2
  03f7450  bt 6, 0x3f745c
  03f7454  fmr 26, 2
  03f7458  b 0x3f7478
  03f745c  lis 3, 63
  03f7460  addi 3, 3, 28696
  03f7464  lfs 2, 24(3)
  03f7468  fcmpu 0, 26, 2
  03f746c  cror 6, 1, 2
  03f7470  bt 6, 0x3f7478
  03f7474  fmr 26, 2
  03f7478  lis 3, 63
  03f747c  lis 5, 114
  03f7480  stfs 1, 664(30)
  03f7484  addi 3, 3, 28696
  03f7488  stfs 26, 660(30)
  03f748c  addic 4, 30, 560
  03f7490  lfs 1, 28(3)
  03f7494  lfs 2, 32(3)
  03f7498  lfs 3, -3060(5)
  03f749c  ori 3, 31, 0
  03f74a0  li 5, 0
  03f74a4  fmuls 1, 3, 1
  03f74a8  fmuls 2, 3, 2
  03f74ac  bl 0x1167c8
  03f74b0  nop
  03f74b4  ld 0, 288(1)
  03f74b8  mtlr 0
  03f74bc  lfd 26, 224(1)
  03f74c0  lfd 27, 232(1)
  03f74c4  lfd 28, 240(1)
  03f74c8  lfd 29, 248(1)
  03f74cc  lfd 30, 256(1)
  03f74d0  lfd 31, 264(1)
  03f74d4  ld 29, 200(1)
  03f74d8  ld 30, 208(1)
  03f74dc  ld 31, 216(1)
  03f74e0  addi 1, 1, 272
  03f74e4  blr

M1382_003f7518:   # 0x3f7518, 0x6c8 bytes
  03f7518  stdu 1, -288(1)
  03f751c  mflr 0
  03f7520  std 0, 304(1)
  03f7524  stfd 31, 280(1)
  03f7528  std 30, 264(1)
  03f752c  ori 30, 4, 0
  03f7530  std 31, 272(1)
  03f7534  lbz 4, 32(3)
  03f7538  std 29, 256(1)
  03f753c  ori 31, 3, 0
  03f7540  lwz 29, 120(3)
  03f7544  std 28, 248(1)
  03f7548  cmpwi 4, 0
  03f754c  bt 2, 0x3f7bbc
  03f7550  lwz 3, 56(29)
  03f7554  cmpwi 3, 0
  03f7558  bt 2, 0x3f75a8
  03f755c  lis 3, 63
  03f7560  addi 3, 3, 29928
  03f7564  lfs 1, 0(3)
  03f7568  lfs 2, 4(3)
  03f756c  bl 0xfcbe8
  03f7570  nop
  03f7574  lis 3, 114
  03f7578  lfs 2, -3056(3)
  03f757c  fmuls 1, 1, 2
  03f7580  bl 0x502758
  03f7584  nop
  03f7588  extsw 3, 3
  03f758c  std 3, 232(1)
  03f7590  li 3, 0
  03f7594  lfd 1, 232(1)
  03f7598  stw 3, 56(29)
  03f759c  fcfid 1, 1
  03f75a0  frsp 1, 1
  03f75a4  stfs 1, 468(29)
  03f75a8  addic 3, 29, 468
  03f75ac  bl 0x500108
  03f75b0  nop
  03f75b4  lis 4, 63
  03f75b8  li 7, 0
  03f75bc  addi 6, 4, 29928
  03f75c0  ori 3, 31, 0
  03f75c4  lis 4, 51
  03f75c8  li 5, 0
  03f75cc  lfs 31, 8(6)
  03f75d0  stw 7, 132(1)
  03f75d4  bl 0x10675c
  03f75d8  nop
  03f75dc  ori 28, 3, 0
  03f75e0  ori 3, 31, 0
  03f75e4  addic 5, 29, 32
  03f75e8  li 6, 0
  03f75ec  addic 7, 1, 128
  03f75f0  li 9, 0
  03f75f4  addic 8, 1, 132
  03f75f8  ori 4, 28, 0
  03f75fc  li 10, 4
  03f7600  bl 0x106840
  03f7604  nop
  03f7608  lwz 3, 128(1)
  03f760c  cmpwi 3, 1
  03f7610  bt 2, 0x3f78f4
  03f7614  lbz 3, 32(31)
  03f7618  cmpwi 3, 15
  03f761c  bt 2, 0x3f78f4
  03f7620  lfs 1, 32(29)
  03f7624  lfs 2, 132(1)
  03f7628  lis 3, 63
  03f762c  lis 4, 114
  03f7630  fsubs 1, 1, 2
  03f7634  addi 3, 3, 29928
  03f7638  li 5, 0
  03f763c  li 6, 9
  03f7640  lis 7, 114
  03f7644  stfs 1, 32(29)
  03f7648  lfs 1, 12(3)
  03f764c  lfs 2, -3048(4)
  03f7650  fmuls 1, 2, 1
  03f7654  lis 4, -16512
  03f7658  stfs 1, 304(29)
  03f765c  lfs 1, 16(3)
  03f7660  stb 5, 349(29)
  03f7664  fmuls 1, 2, 1
  03f7668  stw 6, 324(29)
  03f766c  addic 5, 1, 136
  03f7670  addic 6, 29, 312
  03f7674  stfs 1, 308(29)
  03f7678  lfs 1, 20(3)
  03f767c  lfs 2, -3052(7)
  03f7680  fmuls 1, 2, 1
  03f7684  addic 7, 29, 316
  03f7688  stfs 1, 316(29)
  03f768c  lfs 1, 24(3)
  03f7690  stw 4, 368(29)
  03f7694  fmuls 1, 2, 1
  03f7698  stw 4, 372(29)
  03f769c  stfs 1, 312(29)
  03f76a0  lfs 1, 16(28)
  03f76a4  lfs 2, 24(28)
  03f76a8  stfs 1, 48(1)
  03f76ac  stfs 2, 56(1)
  03f76b0  lfs 1, 20(28)
  03f76b4  lfs 2, 28(28)
  03f76b8  stfs 1, 52(1)
  03f76bc  stfs 2, 60(1)
  03f76c0  ld 3, 48(1)
  03f76c4  ld 4, 56(1)
  03f76c8  bl 0x107de8
  03f76cc  nop
  03f76d0  cmpwi 28, 0
  03f76d4  bt 2, 0x3f78b4
  03f76d8  lwz 28, 32(28)
  03f76dc  cmpwi 28, 0
  03f76e0  bt 2, 0x3f78b4
  03f76e4  lhz 3, 166(28)
  03f76e8  cmpwi 3, 99
  03f76ec  bf 2, 0x3f78b4
  03f76f0  lfs 1, 496(29)
  03f76f4  lfs 2, 16(31)
  03f76f8  lfs 3, 500(29)
  03f76fc  lfs 4, 20(31)
  03f7700  fsubs 1, 1, 2
  03f7704  fsubs 2, 3, 4
  03f7708  lis 3, 115
  03f770c  addic 3, 3, 22784
  03f7710  fabs 3, 1
  03f7714  fabs 4, 2
  03f7718  stfs 1, 152(1)
  03f771c  stfs 2, 156(1)
  03f7720  fsubs 1, 3, 4
  03f7724  stfs 1, 160(1)
  03f7728  lwz 4, 152(1)
  03f772c  lfs 1, 152(1)
  03f7730  lwz 5, 156(1)
  03f7734  lfs 2, 156(1)
  03f7738  fabs 1, 1
  03f773c  lwz 6, 160(1)
  03f7740  rlwinm 5, 5, 3, 29, 29
  03f7744  lfs 5, 160(1)
  03f7748  fabs 2, 2
  03f774c  rlwimi 5, 6, 2, 30, 30
  03f7750  fsub 6, 5, 31
  03f7754  fsub 5, 5, 31
  03f7758  rlwimi 5, 4, 4, 28, 28
  03f775c  ori 4, 3, 0
  03f7760  rlwimi 4, 5, 2, 26, 28
  03f7764  slwi 5, 5, 2
  03f7768  clrldi 4, 4, 32
  03f776c  fsel 4, 6, 1, 4
  03f7770  lfsx 1, 3, 5
  03f7774  fsel 3, 5, 2, 3
  03f7778  lfs 2, 4(4)
  03f777c  fcmpu 0, 4, 31
  03f7780  bt 1, 0x3f778c
  03f7784  fmr 1, 31
  03f7788  b 0x3f78b0
  03f778c  fsubs 5, 3, 4
  03f7790  fadds 3, 3, 4
  03f7794  addic 3, 1, 16
  03f7798  li 7, 2
  03f779c  addic 4, 3, 180
  03f77a0  addic 5, 3, 196
  03f77a4  mtctr 7
  03f77a8  fdivs 3, 5, 3
  03f77ac  fmuls 4, 3, 3
  03f77b0  stfs 3, 208(1)
  03f77b4  stfs 3, 200(1)
  03f77b8  stfs 3, 204(1)
  03f77bc  stfs 3, 196(1)
  03f77c0  lfs 6, 208(1)
  03f77c4  lfs 7, 200(1)
  03f77c8  lfs 8, 204(1)
  03f77cc  fmuls 5, 4, 4
  03f77d0  fmuls 7, 7, 4
  03f77d4  fmuls 6, 6, 5
  03f77d8  fmuls 3, 5, 5
  03f77dc  fmuls 5, 8, 5
  03f77e0  stfs 7, 200(1)
  03f77e4  fmuls 4, 6, 4
  03f77e8  stfs 5, 204(1)
  03f77ec  stfs 4, 208(1)
  03f77f0  lfs 4, 180(3)
  03f77f4  fmuls 4, 4, 3
  03f77f8  stfs 4, 196(3)
  03f77fc  lfs 4, 4(4)
  03f7800  addic 3, 3, 8
  03f7804  addic 4, 4, 8
  03f7808  fmuls 4, 4, 3
  03f780c  stfs 4, 4(5)
  03f7810  addic 5, 5, 8
  03f7814  bdnz 0x3f77f0
  03f7818  li 5, 4
  03f781c  ori 3, 1, 0
  03f7820  mtctr 5
  03f7824  lis 4, 115
  03f7828  addic 5, 3, 196
  03f782c  addic 4, 4, 22752
  03f7830  ori 6, 5, 0
  03f7834  lfs 3, 196(3)
  03f7838  lfs 4, 0(4)
  03f783c  fmuls 3, 3, 4
  03f7840  lfs 4, 4(4)
  03f7844  addic 4, 4, 8
  03f7848  stfs 3, 196(3)
  03f784c  lfs 3, 4(5)
  03f7850  addic 3, 3, 8
  03f7854  fmuls 3, 3, 4
  03f7858  stfs 3, 4(5)
  03f785c  addic 5, 5, 8
  03f7860  bdnz 0x3f7834
  03f7864  fmr 3, 31
  03f7868  ori 3, 1, 0
  03f786c  mtctr 7
  03f7870  lfs 4, 196(3)
  03f7874  fadds 3, 3, 4
  03f7878  addic 3, 3, 16
  03f787c  lfs 4, 4(6)
  03f7880  lfs 5, 8(6)
  03f7884  lfs 6, 12(6)
  03f7888  addic 6, 6, 16
  03f788c  fadds 3, 3, 4
  03f7890  fadds 3, 3, 5
  03f7894  fadds 3, 3, 6
  03f7898  bdnz 0x3f7870
  03f789c  lis 3, 63
  03f78a0  addi 3, 3, 29928
  03f78a4  lfs 4, 28(3)
  03f78a8  fadds 3, 3, 4
  03f78ac  fmadds 1, 3, 1, 2
  03f78b0  stfs 1, 136(1)
  03f78b4  ori 3, 31, 0
  03f78b8  lfs 1, 136(1)
  03f78bc  addic 4, 29, 288
  03f78c0  li 6, 11
  03f78c4  li 7, 1
  03f78c8  li 8, 0
  03f78cc  bl 0x10ad80
  03f78d0  nop
  03f78d4  li 3, 15
  03f78d8  li 5, 240
  03f78dc  addic 4, 29, 272
  03f78e0  stb 3, 32(31)
  03f78e4  ori 3, 31, 0
  03f78e8  stb 5, 279(29)
  03f78ec  bl 0x10c808
  03f78f0  nop
  03f78f4  li 3, 255
  03f78f8  cmpwi 30, 0
  03f78fc  stb 3, 164(31)
  03f7900  bf 2, 0x3f7bbc
  03f7904  lis 4, 63
  03f7908  ori 3, 31, 0
  03f790c  addi 5, 4, 29928
  03f7910  li 6, 0
  03f7914  addic 4, 29, 384
  03f7918  li 7, 0
  03f791c  li 8, 0
  03f7920  lfs 1, 32(5)
  03f7924  li 9, 0
  03f7928  bl 0x111ba0
  03f792c  nop
  03f7930  cmpwi 3, 2
  03f7934  bt 2, 0x3f7bbc
  03f7938  lfs 1, 20(31)
  03f793c  lfs 3, 436(29)
  03f7940  lfs 2, 16(31)
  03f7944  fsubs 3, 1, 3
  03f7948  lfs 4, 432(29)
  03f794c  lfs 5, 24(31)
  03f7950  fsubs 4, 2, 4
  03f7954  lfs 6, 440(29)
  03f7958  fsubs 5, 5, 6
  03f795c  lis 3, 63
  03f7960  fmuls 3, 3, 3
  03f7964  addi 3, 3, 29928
  03f7968  fmadds 3, 4, 4, 3
  03f796c  lfs 4, 36(3)
  03f7970  fmadds 3, 5, 5, 3
  03f7974  fsqrts 3, 3
  03f7978  fcmpu 0, 3, 4
  03f797c  cror 6, 1, 2
  03f7980  bt 6, 0x3f7bbc
  03f7984  lfs 3, 384(29)
  03f7988  lfs 4, 388(29)
  03f798c  fsubs 2, 3, 2
  03f7990  fsubs 1, 4, 1
  03f7994  lis 3, 115
  03f7998  addic 3, 3, 22784
  03f799c  fabs 4, 2
  03f79a0  fabs 5, 1
  03f79a4  stfs 2, 140(1)
  03f79a8  stfs 1, 144(1)
  03f79ac  lfs 1, 72(31)
  03f79b0  fsubs 2, 4, 5
  03f79b4  stfs 2, 148(1)
  03f79b8  lwz 4, 140(1)
  03f79bc  lfs 2, 140(1)
  03f79c0  lwz 5, 144(1)
  03f79c4  lfs 3, 144(1)
  03f79c8  fabs 2, 2
  03f79cc  lwz 6, 148(1)
  03f79d0  rlwinm 5, 5, 3, 29, 29
  03f79d4  fabs 6, 3
  03f79d8  lfs 3, 148(1)
  03f79dc  rlwimi 5, 6, 2, 30, 30
  03f79e0  fsub 7, 3, 31
  03f79e4  fsub 8, 3, 31
  03f79e8  rlwimi 5, 4, 4, 28, 28
  03f79ec  ori 4, 3, 0
  03f79f0  rlwimi 4, 5, 2, 26, 28
  03f79f4  slwi 5, 5, 2
  03f79f8  clrldi 4, 4, 32
  03f79fc  fsel 5, 7, 2, 5
  03f7a00  lfsx 2, 3, 5
  03f7a04  lfs 3, 4(4)
  03f7a08  fsel 4, 8, 6, 4
  03f7a0c  fcmpu 0, 5, 31
  03f7a10  bt 1, 0x3f7a18
  03f7a14  b 0x3f7b38
  03f7a18  fsubs 6, 4, 5
  03f7a1c  fadds 4, 4, 5
  03f7a20  addic 3, 1, 16
  03f7a24  li 7, 2
  03f7a28  addic 5, 3, 164
  03f7a2c  addic 4, 3, 148
  03f7a30  mtctr 7
  03f7a34  fdivs 4, 6, 4
  03f7a38  fmuls 5, 4, 4
  03f7a3c  stfs 4, 176(1)
  03f7a40  stfs 4, 168(1)
  03f7a44  stfs 4, 172(1)
  03f7a48  stfs 4, 164(1)
  03f7a4c  lfs 7, 176(1)
  03f7a50  lfs 8, 168(1)
  03f7a54  lfs 9, 172(1)
  03f7a58  fmuls 6, 5, 5
  03f7a5c  fmuls 8, 8, 5
  03f7a60  fmuls 7, 7, 6
  03f7a64  fmuls 4, 6, 6
  03f7a68  fmuls 6, 9, 6
  03f7a6c  stfs 8, 168(1)
  03f7a70  fmuls 5, 7, 5
  03f7a74  stfs 6, 172(1)
  03f7a78  stfs 5, 176(1)
  03f7a7c  lfs 5, 148(3)
  03f7a80  fmuls 5, 5, 4
  03f7a84  stfs 5, 164(3)
  03f7a88  lfs 5, 4(4)
  03f7a8c  addic 4, 4, 8
  03f7a90  fmuls 5, 5, 4
  03f7a94  addic 3, 3, 8
  03f7a98  stfs 5, 4(5)
  03f7a9c  addic 5, 5, 8
  03f7aa0  bdnz 0x3f7a7c
  03f7aa4  li 5, 4
  03f7aa8  ori 3, 1, 0
  03f7aac  mtctr 5
  03f7ab0  lis 4, 115
  03f7ab4  addic 5, 3, 164
  03f7ab8  addic 4, 4, 22752
  03f7abc  ori 6, 5, 0
  03f7ac0  lfs 4, 164(3)
  03f7ac4  lfs 5, 0(4)
  03f7ac8  fmuls 4, 4, 5
  03f7acc  lfs 5, 4(4)
  03f7ad0  addic 4, 4, 8
  03f7ad4  stfs 4, 164(3)
  03f7ad8  lfs 4, 4(5)
  03f7adc  addic 3, 3, 8
  03f7ae0  fmuls 4, 4, 5
  03f7ae4  stfs 4, 4(5)
  03f7ae8  addic 5, 5, 8
  03f7aec  bdnz 0x3f7ac0
  03f7af0  ori 3, 1, 0
  03f7af4  mtctr 7
  03f7af8  lfs 4, 164(3)
  03f7afc  lfs 5, 4(6)
  03f7b00  fadds 4, 31, 4
  03f7b04  lfs 6, 8(6)
  03f7b08  addic 3, 3, 16
  03f7b0c  lfs 31, 12(6)
  03f7b10  addic 6, 6, 16
  03f7b14  fadds 4, 4, 5
  03f7b18  fadds 4, 4, 6
  03f7b1c  fadds 31, 4, 31
  03f7b20  bdnz 0x3f7af8
  03f7b24  lis 3, 63
  03f7b28  addi 3, 3, 29928
  03f7b2c  lfs 4, 28(3)
  03f7b30  fadds 31, 31, 4
  03f7b34  fmadds 31, 31, 2, 3
  03f7b38  fmr 2, 31
  03f7b3c  bl 0x5026a0
  03f7b40  nop
  03f7b44  lis 3, 63
  03f7b48  lfs 2, 16(31)
  03f7b4c  lfs 3, 20(31)
  03f7b50  fmr 31, 1
  03f7b54  addi 30, 3, 29928
  03f7b58  stfs 2, 112(1)
  03f7b5c  lfs 2, 28(31)
  03f7b60  lis 4, 151
  03f7b64  stfs 3, 116(1)
  03f7b68  addic 3, 1, 112
  03f7b6c  stfs 2, 124(1)
  03f7b70  addic 4, 4, -25168
  03f7b74  li 5, 2
  03f7b78  lfs 2, 40(30)
  03f7b7c  lfs 3, 24(31)
  03f7b80  li 6, 0
  03f7b84  li 7, 0
  03f7b88  fadds 1, 3, 2
  03f7b8c  stfs 1, 120(1)
  03f7b90  bl 0x57820
  03f7b94  nop
  03f7b98  cntlzw 31, 3
  03f7b9c  rlwinm 3, 31, 27, 31, 31
  03f7ba0  stb 3, 484(29)
  03f7ba4  lfs 1, 44(30)
  03f7ba8  fcmpu 0, 31, 1
  03f7bac  cror 6, 1, 2
  03f7bb0  bt 6, 0x3f7bbc
  03f7bb4  rlwinm 3, 31, 28, 30, 30
  03f7bb8  stb 3, 484(29)
  03f7bbc  ld 0, 304(1)
  03f7bc0  mtlr 0
  03f7bc4  lfd 31, 280(1)
  03f7bc8  ld 28, 248(1)
  03f7bcc  ld 29, 256(1)
  03f7bd0  ld 30, 264(1)
  03f7bd4  ld 31, 272(1)
  03f7bd8  addi 1, 1, 288
  03f7bdc  blr

UpdateMoby_635:   # 0x3f7c78, 0x1b18 bytes
  03f7c78  stdu 1, -368(1)
  03f7c7c  mflr 0
  03f7c80  std 0, 384(1)
  03f7c84  stfd 31, 360(1)
  03f7c88  std 29, 336(1)
  03f7c8c  lbz 4, 32(3)
  03f7c90  std 30, 344(1)
  03f7c94  li 29, 0
  03f7c98  lwz 30, 120(3)
  03f7c9c  std 31, 352(1)
  03f7ca0  std 27, 320(1)
  03f7ca4  cmpwi 4, 12
  03f7ca8  ori 31, 3, 0
  03f7cac  std 28, 328(1)
  03f7cb0  ori 27, 29, 0
  03f7cb4  bt 2, 0x3f7d64
  03f7cb8  lwz 3, 688(30)
  03f7cbc  cmpwi 3, -1
  03f7cc0  bt 2, 0x3f7d14
  03f7cc4  lis 5, 149
  03f7cc8  extsw 4, 3
  03f7ccc  addic 28, 5, 5056
  03f7cd0  addic 28, 28, 320
  03f7cd4  ori 3, 28, 0
  03f7cd8  bl 0x110b70
  03f7cdc  nop
  03f7ce0  cntlzw 29, 3
  03f7ce4  lwz 3, 692(30)
  03f7ce8  rlwinm 29, 29, 27, 31, 31
  03f7cec  cmpwi 3, -1
  03f7cf0  bt 2, 0x3f7d64
  03f7cf4  extsw 4, 3
  03f7cf8  ori 3, 28, 0
  03f7cfc  bl 0x110b70
  03f7d00  nop
  03f7d04  cntlzw 3, 3
  03f7d08  rlwinm 3, 3, 27, 31, 31
  03f7d0c  and 29, 29, 3
  03f7d10  b 0x3f7d64
  03f7d14  lwz 4, 696(30)
  03f7d18  cmpwi 4, -1
  03f7d1c  bt 2, 0x3f7d64
  03f7d20  lis 5, 149
  03f7d24  extsw 4, 3
  03f7d28  addic 28, 5, 5056
  03f7d2c  addic 28, 28, 320
  03f7d30  ori 3, 28, 0
  03f7d34  bl 0x110b70
  03f7d38  nop
  03f7d3c  ori 29, 3, 0
  03f7d40  lwz 3, 700(30)
  03f7d44  cmpwi 3, -1
  03f7d48  bt 2, 0x3f7d64
  03f7d4c  extsw 4, 3
  03f7d50  ori 3, 28, 0
  03f7d54  bl 0x110b70
  03f7d58  nop
  03f7d5c  or 29, 29, 3
  03f7d60  extsw 29, 29
  03f7d64  ori 28, 29, 0
  03f7d68  ori 3, 31, 0
  03f7d6c  ori 4, 28, 0
  03f7d70  bl 0x3f7518
  03f7d74  cmpwi 28, 0
  03f7d78  lhz 29, 52(31)
  03f7d7c  bt 2, 0x3f7d9c
  03f7d80  lbz 3, 32(31)
  03f7d84  cmpwi 3, 15
  03f7d88  bt 2, 0x3f7d9c
  03f7d8c  ori 3, 29, 1
  03f7d90  sth 3, 52(31)
  03f7d94  stb 27, 49(31)
  03f7d98  b 0x3f9768
  03f7d9c  rlwinm 4, 29, 0, 16, 30
  03f7da0  li 5, 1
  03f7da4  ori 3, 31, 0
  03f7da8  sth 4, 52(31)
  03f7dac  stb 5, 49(31)
  03f7db0  bl 0x3f7040
  03f7db4  ori 3, 31, 0
  03f7db8  bl 0x3f6d30
  03f7dbc  lis 4, 63
  03f7dc0  lwz 29, 448(30)
  03f7dc4  addic 3, 30, 560
  03f7dc8  addi 4, 4, 31712
  03f7dcc  lfs 1, 0(4)
  03f7dd0  bl 0x119ac0
  03f7dd4  nop
  03f7dd8  lbz 3, 49(31)
  03f7ddc  cmpwi 3, 0
  03f7de0  bt 2, 0x3f7e4c
  03f7de4  lis 3, 149
  03f7de8  lfs 1, 20(31)
  03f7dec  addic 3, 3, 5056
  03f7df0  lfs 2, 16(31)
  03f7df4  lfs 3, 324(3)
  03f7df8  lfs 4, 320(3)
  03f7dfc  fsubs 1, 1, 3
  03f7e00  fsubs 2, 2, 4
  03f7e04  lfs 3, 24(31)
  03f7e08  lfs 4, 328(3)
  03f7e0c  fsubs 3, 3, 4
  03f7e10  lis 3, 63
  03f7e14  fmuls 1, 1, 1
  03f7e18  addi 3, 3, 31712
  03f7e1c  fmadds 1, 2, 2, 1
  03f7e20  lfs 2, 4(3)
  03f7e24  fmadds 1, 3, 3, 1
  03f7e28  fsqrts 1, 1
  03f7e2c  fcmpu 0, 1, 2
  03f7e30  cror 6, 1, 2
  03f7e34  bt 6, 0x3f7e4c
  03f7e38  ori 3, 31, 0
  03f7e3c  bl 0x106360
  03f7e40  nop
  03f7e44  li 3, 23
  03f7e48  stb 3, 127(31)
  03f7e4c  lbz 3, 32(31)
  03f7e50  cmpwi 3, 7
  03f7e54  cmpwi 1, 3, 2
  03f7e58  cmpwi 6, 3, 0
  03f7e5c  cmpwi 7, 3, -1
  03f7e60  bt 1, 0x3f7ea0
  03f7e64  bt 5, 0x3f7e80
  03f7e68  bt 25, 0x3f7e74
  03f7e6c  bf 29, 0x3f9768
  03f7e70  b 0x3f7ed4
  03f7e74  cmpwi 3, 1
  03f7e78  bf 1, 0x3f7fc8
  03f7e7c  b 0x3f803c
  03f7e80  cmpwi 3, 4
  03f7e84  bt 1, 0x3f7e94
  03f7e88  cmpwi 3, 3
  03f7e8c  bf 1, 0x3f877c
  03f7e90  b 0x3f9524
  03f7e94  cmpwi 3, 5
  03f7e98  bf 1, 0x3f820c
  03f7e9c  b 0x3f87f8
  03f7ea0  cmpwi 3, 15
  03f7ea4  bt 2, 0x3f961c
  03f7ea8  cmpwi 3, 12
  03f7eac  bt 2, 0x3f7fa4
  03f7eb0  cmpwi 3, 11
  03f7eb4  bt 2, 0x3f92f4
  03f7eb8  cmpwi 3, 10
  03f7ebc  bt 2, 0x3f8ef4
  03f7ec0  cmpwi 3, 9
  03f7ec4  bt 2, 0x3f8d7c
  03f7ec8  cmpwi 3, 8
  03f7ecc  bt 2, 0x3f8a80
  03f7ed0  b 0x3f9768
  03f7ed4  lfs 1, 16(31)
  03f7ed8  lhz 6, 52(31)
  03f7edc  lis 3, 133
  03f7ee0  stfs 1, 496(30)
  03f7ee4  lis 4, 16256
  03f7ee8  ori 6, 6, 4096
  03f7eec  lfs 1, 20(31)
  03f7ef0  addic 3, 3, 17684
  03f7ef4  stfs 1, 500(30)
  03f7ef8  lfs 1, 24(31)
  03f7efc  li 29, 1
  03f7f00  sth 6, 52(31)
  03f7f04  li 5, 8
  03f7f08  stfs 1, 504(30)
  03f7f0c  lis 6, 63
  03f7f10  lfs 1, 28(31)
  03f7f14  li 7, 7
  03f7f18  stw 3, 208(30)
  03f7f1c  addi 6, 6, 31712
  03f7f20  stfs 1, 508(30)
  03f7f24  lis 3, 114
  03f7f28  stw 4, 32(30)
  03f7f2c  sth 29, 36(30)
  03f7f30  stb 5, 88(30)
  03f7f34  stb 7, 90(30)
  03f7f38  stb 27, 41(30)
  03f7f3c  lfs 1, 8(6)
  03f7f40  lfs 2, 12(6)
  03f7f44  lfs 3, -3052(3)
  03f7f48  fmuls 1, 3, 1
  03f7f4c  fmuls 2, 3, 2
  03f7f50  bl 0xfcbe8
  03f7f54  nop
  03f7f58  lwz 3, 36(31)
  03f7f5c  stfs 1, 492(30)
  03f7f60  stb 29, 32(31)
  03f7f64  lwz 3, 72(3)
  03f7f68  lbz 3, 16(3)
  03f7f6c  bl 0xfc620
  03f7f70  nop
  03f7f74  ori 5, 3, 0
  03f7f78  ori 3, 31, 0
  03f7f7c  li 4, 0
  03f7f80  li 6, 0
  03f7f84  bl 0xfddc0
  03f7f88  nop
  03f7f8c  lwz 3, 488(30)
  03f7f90  cmpwi 3, -1
  03f7f94  bf 2, 0x3f9768
  03f7f98  lwz 3, 464(30)
  03f7f9c  stw 3, 488(30)
  03f7fa0  b 0x3f9768
  03f7fa4  ori 3, 31, 0
  03f7fa8  addic 4, 30, 288
  03f7fac  bl 0x48c188
  03f7fb0  nop
  03f7fb4  cmpwi 3, 0
  03f7fb8  bt 2, 0x3f9768
  03f7fbc  stb 27, 32(31)
  03f7fc0  sth 27, 200(30)
  03f7fc4  b 0x3f9768
  03f7fc8  lbz 3, 484(30)
  03f7fcc  cmpwi 3, 0
  03f7fd0  bt 2, 0x3f9768
  03f7fd4  li 3, 31
  03f7fd8  bl 0xfc620
  03f7fdc  nop
  03f7fe0  cmpwi 3, 0
  03f7fe4  bf 2, 0x3f9768
  03f7fe8  li 3, 2
  03f7fec  lbz 4, 83(31)
  03f7ff0  cmpwi 4, 1
  03f7ff4  stb 3, 32(31)
  03f7ff8  bt 2, 0x3f9768
  03f7ffc  lis 3, 63
  03f8000  lis 4, 114
  03f8004  addi 3, 3, 31712
  03f8008  li 5, 0
  03f800c  lfs 1, 16(3)
  03f8010  lfs 2, -3056(4)
  03f8014  ori 3, 31, 0
  03f8018  li 4, 1
  03f801c  fmuls 1, 2, 1
  03f8020  fctiwz 1, 1
  03f8024  stfd 1, 296(1)
  03f8028  lwz 6, 300(1)
  03f802c  extsw 6, 6
  03f8030  bl 0xfddc0
  03f8034  nop
  03f8038  b 0x3f9768
  03f803c  lbz 3, 112(31)
  03f8040  rlwinm 3, 3, 0, 30, 30
  03f8044  cmpwi 3, 0
  03f8048  bt 2, 0x3f9768
  03f804c  lbz 3, 484(30)
  03f8050  cmpwi 3, 2
  03f8054  bf 2, 0x3f8174
  03f8058  li 3, 3
  03f805c  bl 0xfc620
  03f8060  nop
  03f8064  cmpwi 3, 0
  03f8068  bt 2, 0x3f80b8
  03f806c  lbz 3, 83(31)
  03f8070  cmpwi 3, 2
  03f8074  bt 2, 0x3f9768
  03f8078  lis 3, 63
  03f807c  lis 4, 114
  03f8080  addi 3, 3, 31712
  03f8084  li 5, 0
  03f8088  lfs 1, 16(3)
  03f808c  lfs 2, -3056(4)
  03f8090  ori 3, 31, 0
  03f8094  fmuls 1, 2, 1
  03f8098  li 4, 2
  03f809c  fctiwz 1, 1
  03f80a0  stfd 1, 296(1)
  03f80a4  lwz 6, 300(1)
  03f80a8  extsw 6, 6
  03f80ac  bl 0xfddc0
  03f80b0  nop
  03f80b4  b 0x3f9768
  03f80b8  lis 3, 151
  03f80bc  addic 3, 3, -25376
  03f80c0  lbz 3, 8356(3)
  03f80c4  cmpwi 3, 3
  03f80c8  bt 2, 0x3f8120
  03f80cc  li 3, 7
  03f80d0  lbz 4, 83(31)
  03f80d4  cmpwi 4, 8
  03f80d8  stb 3, 32(31)
  03f80dc  bt 2, 0x3f9768
  03f80e0  lis 3, 63
  03f80e4  lis 4, 114
  03f80e8  addi 3, 3, 31712
  03f80ec  li 5, 0
  03f80f0  lfs 1, 16(3)
  03f80f4  lfs 2, -3056(4)
  03f80f8  ori 3, 31, 0
  03f80fc  fmuls 1, 2, 1
  03f8100  li 4, 8
  03f8104  fctiwz 1, 1
  03f8108  stfd 1, 296(1)
  03f810c  lwz 6, 300(1)
  03f8110  extsw 6, 6
  03f8114  bl 0xfddc0
  03f8118  nop
  03f811c  b 0x3f9768
  03f8120  li 3, 6
  03f8124  lbz 4, 83(31)
  03f8128  cmpwi 4, 7
  03f812c  stb 3, 32(31)
  03f8130  bt 2, 0x3f9768
  03f8134  lis 3, 63
  03f8138  lis 4, 114
  03f813c  addi 3, 3, 31712
  03f8140  li 5, 0
  03f8144  lfs 1, 16(3)
  03f8148  lfs 2, -3056(4)
  03f814c  ori 3, 31, 0
  03f8150  li 4, 7
  03f8154  fmuls 1, 2, 1
  03f8158  fctiwz 1, 1
  03f815c  stfd 1, 296(1)
  03f8160  lwz 6, 300(1)
  03f8164  extsw 6, 6
  03f8168  bl 0xfddc0
  03f816c  nop
  03f8170  b 0x3f9768
  03f8174  li 3, 5
  03f8178  lbz 4, 83(31)
  03f817c  cmpwi 4, 3
  03f8180  stb 3, 32(31)
  03f8184  bt 2, 0x3f81c4
  03f8188  lis 3, 63
  03f818c  lis 4, 114
  03f8190  addi 3, 3, 31712
  03f8194  li 5, 0
  03f8198  lfs 1, 16(3)
  03f819c  lfs 2, -3056(4)
  03f81a0  ori 3, 31, 0
  03f81a4  fmuls 1, 2, 1
  03f81a8  li 4, 3
  03f81ac  fctiwz 1, 1
  03f81b0  stfd 1, 296(1)
  03f81b4  lwz 6, 300(1)
  03f81b8  extsw 6, 6
  03f81bc  bl 0xfddc0
  03f81c0  nop
  03f81c4  lis 3, 63
  03f81c8  li 4, 20
  03f81cc  vspltisw 2, -1
  03f81d0  addi 3, 3, 31712
  03f81d4  lis 5, 114
  03f81d8  li 6, -3056
  03f81dc  vslw 2, 2, 2
  03f81e0  <unknown>
  03f81e4  li 3, 480
  03f81e8  vspltw 3, 3, 0
  03f81ec  li 4, 482
  03f81f0  <unknown>
  03f81f4  vmaddfp 2, 4, 3, 2
  03f81f8  vctsxs 2, 2, 0
  03f81fc  vsplth 2, 2, 1
  03f8200  stvehx 2, 3, 30
  03f8204  stvehx 2, 4, 30
  03f8208  b 0x3f9768
  03f820c  cmpwi 29, 0
  03f8210  bt 2, 0x3f8700
  03f8214  lfs 1, 16(29)
  03f8218  lfs 2, 16(31)
  03f821c  lfs 3, 20(29)
  03f8220  lfs 4, 20(31)
  03f8224  fsubs 1, 1, 2
  03f8228  lis 3, 63
  03f822c  fsubs 2, 3, 4
  03f8230  addi 4, 3, 31712
  03f8234  lis 5, 115
  03f8238  addic 3, 31, 72
  03f823c  addic 5, 5, 22784
  03f8240  fabs 3, 1
  03f8244  fabs 5, 2
  03f8248  stfs 1, 184(1)
  03f824c  stfs 2, 188(1)
  03f8250  fsubs 1, 3, 5
  03f8254  stfs 1, 192(1)
  03f8258  lwz 6, 184(1)
  03f825c  lfs 4, 24(4)
  03f8260  lfs 1, 184(1)
  03f8264  lwz 4, 188(1)
  03f8268  lfs 2, 188(1)
  03f826c  fabs 1, 1
  03f8270  lwz 7, 192(1)
  03f8274  rlwinm 4, 4, 3, 29, 29
  03f8278  fabs 6, 2
  03f827c  lfs 2, 192(1)
  03f8280  rlwimi 4, 7, 2, 30, 30
  03f8284  fsub 7, 2, 4
  03f8288  rlwimi 4, 6, 4, 28, 28
  03f828c  fsub 8, 2, 4
  03f8290  ori 6, 5, 0
  03f8294  rlwimi 6, 4, 2, 26, 28
  03f8298  slwi 4, 4, 2
  03f829c  clrldi 6, 6, 32
  03f82a0  fsel 5, 7, 1, 5
  03f82a4  lfsx 1, 5, 4
  03f82a8  lfs 2, 4(6)
  03f82ac  fsel 3, 8, 6, 3
  03f82b0  fcmpu 0, 5, 4
  03f82b4  bt 1, 0x3f82bc
  03f82b8  b 0x3f83dc
  03f82bc  fsubs 6, 3, 5
  03f82c0  fadds 3, 3, 5
  03f82c4  addic 4, 1, 16
  03f82c8  li 8, 2
  03f82cc  addic 6, 4, 260
  03f82d0  addic 5, 4, 244
  03f82d4  mtctr 8
  03f82d8  fdivs 3, 6, 3
  03f82dc  fmuls 5, 3, 3
  03f82e0  stfs 3, 272(1)
  03f82e4  stfs 3, 264(1)
  03f82e8  stfs 3, 268(1)
  03f82ec  stfs 3, 260(1)
  03f82f0  lfs 7, 272(1)
  03f82f4  lfs 8, 264(1)
  03f82f8  lfs 9, 268(1)
  03f82fc  fmuls 6, 5, 5
  03f8300  fmuls 8, 8, 5
  03f8304  fmuls 7, 7, 6
  03f8308  fmuls 3, 6, 6
  03f830c  fmuls 6, 9, 6
  03f8310  stfs 8, 264(1)
  03f8314  fmuls 5, 7, 5
  03f8318  stfs 6, 268(1)
  03f831c  stfs 5, 272(1)
  03f8320  lfs 5, 244(4)
  03f8324  fmuls 5, 5, 3
  03f8328  stfs 5, 260(4)
  03f832c  lfs 5, 4(5)
  03f8330  addic 5, 5, 8
  03f8334  fmuls 5, 5, 3
  03f8338  addic 4, 4, 8
  03f833c  stfs 5, 4(6)
  03f8340  addic 6, 6, 8
  03f8344  bdnz 0x3f8320
  03f8348  li 6, 4
  03f834c  ori 4, 1, 0
  03f8350  mtctr 6
  03f8354  lis 5, 115
  03f8358  addic 6, 4, 260
  03f835c  addic 5, 5, 22752
  03f8360  ori 7, 6, 0
  03f8364  lfs 3, 260(4)
  03f8368  lfs 5, 0(5)
  03f836c  fmuls 3, 3, 5
  03f8370  lfs 5, 4(5)
  03f8374  addic 5, 5, 8
  03f8378  stfs 3, 260(4)
  03f837c  lfs 3, 4(6)
  03f8380  addic 4, 4, 8
  03f8384  fmuls 3, 3, 5
  03f8388  stfs 3, 4(6)
  03f838c  addic 6, 6, 8
  03f8390  bdnz 0x3f8364
  03f8394  ori 4, 1, 0
  03f8398  mtctr 8
  03f839c  lfs 3, 260(4)
  03f83a0  fadds 3, 4, 3
  03f83a4  addic 4, 4, 16
  03f83a8  lfs 4, 4(7)
  03f83ac  lfs 5, 8(7)
  03f83b0  lfs 6, 12(7)
  03f83b4  addic 7, 7, 16
  03f83b8  fadds 3, 3, 4
  03f83bc  fadds 4, 3, 5
  03f83c0  fadds 4, 4, 6
  03f83c4  bdnz 0x3f839c
  03f83c8  lis 4, 63
  03f83cc  addi 4, 4, 31712
  03f83d0  lfs 3, 28(4)
  03f83d4  fadds 4, 4, 3
  03f83d8  fmadds 4, 4, 1, 2
  03f83dc  lis 4, 63
  03f83e0  lis 28, 114
  03f83e4  fmr 1, 4
  03f83e8  addi 29, 4, 31712
  03f83ec  lis 4, 114
  03f83f0  addic 5, 30, 476
  03f83f4  lfs 3, 32(29)
  03f83f8  lfs 5, 36(29)
  03f83fc  lfs 2, -3048(4)
  03f8400  lfs 6, -3052(28)
  03f8404  fmuls 2, 2, 3
  03f8408  fmuls 4, 6, 5
  03f840c  fmr 3, 2
  03f8410  bl 0x10a2e0
  03f8414  nop
  03f8418  lfs 1, 40(29)
  03f841c  lwz 3, 476(30)
  03f8420  lfs 2, 476(30)
  03f8424  lfs 3, -3052(28)
  03f8428  fabs 2, 2
  03f842c  fmuls 1, 3, 1
  03f8430  fcmpu 0, 2, 1
  03f8434  cror 6, 0, 2
  03f8438  bt 6, 0x3f84dc
  03f843c  cmpwi 3, 0
  03f8440  bf 0, 0x3f8490
  03f8444  lbz 3, 83(31)
  03f8448  cmpwi 3, 4
  03f844c  bt 2, 0x3f8524
  03f8450  lis 3, 63
  03f8454  lis 4, 114
  03f8458  addi 3, 3, 31712
  03f845c  li 5, 0
  03f8460  lfs 1, 16(3)
  03f8464  lfs 2, -3056(4)
  03f8468  ori 3, 31, 0
  03f846c  fmuls 1, 2, 1
  03f8470  li 4, 4
  03f8474  fctiwz 1, 1
  03f8478  stfd 1, 296(1)
  03f847c  lwz 6, 300(1)
  03f8480  extsw 6, 6
  03f8484  bl 0xfddc0
  03f8488  nop
  03f848c  b 0x3f8524
  03f8490  lbz 3, 83(31)
  03f8494  cmpwi 3, 5
  03f8498  bt 2, 0x3f8524
  03f849c  lis 3, 63
  03f84a0  lis 4, 114
  03f84a4  addi 3, 3, 31712
  03f84a8  li 5, 0
  03f84ac  lfs 1, 16(3)
  03f84b0  lfs 2, -3056(4)
  03f84b4  ori 3, 31, 0
  03f84b8  li 4, 5
  03f84bc  fmuls 1, 2, 1
  03f84c0  fctiwz 1, 1
  03f84c4  stfd 1, 296(1)
  03f84c8  lwz 6, 300(1)
  03f84cc  extsw 6, 6
  03f84d0  bl 0xfddc0
  03f84d4  nop
  03f84d8  b 0x3f8524
  03f84dc  lbz 3, 83(31)
  03f84e0  cmpwi 3, 3
  03f84e4  bt 2, 0x3f8524
  03f84e8  lis 3, 63
  03f84ec  lis 4, 114
  03f84f0  addi 3, 3, 31712
  03f84f4  li 5, 0
  03f84f8  lfs 1, 16(3)
  03f84fc  lfs 2, -3056(4)
  03f8500  ori 3, 31, 0
  03f8504  fmuls 1, 2, 1
  03f8508  li 4, 3
  03f850c  fctiwz 1, 1
  03f8510  stfd 1, 296(1)
  03f8514  lwz 6, 300(1)
  03f8518  extsw 6, 6
  03f851c  bl 0xfddc0
  03f8520  nop
  03f8524  lis 3, 16345
  03f8528  ori 3, 3, 39322
  03f852c  stw 3, 88(31)
  03f8530  lbz 3, 484(30)
  03f8534  cmpwi 3, 2
  03f8538  bf 2, 0x3f8680
  03f853c  addic 3, 30, 482
  03f8540  bl 0x4fffb4
  03f8544  nop
  03f8548  cmpwi 3, 0
  03f854c  bf 2, 0x3f8564
  03f8550  lis 3, 151
  03f8554  addic 3, 3, -25376
  03f8558  lbz 3, 8356(3)
  03f855c  cmpwi 3, 3
  03f8560  bt 2, 0x3f8680
  03f8564  li 3, 3
  03f8568  bl 0xfc620
  03f856c  nop
  03f8570  cmpwi 3, 0
  03f8574  bf 2, 0x3f85c4
  03f8578  lbz 3, 83(31)
  03f857c  cmpwi 3, 2
  03f8580  bt 2, 0x3f9768
  03f8584  lis 3, 63
  03f8588  lis 4, 114
  03f858c  addi 3, 3, 31712
  03f8590  li 5, 0
  03f8594  lfs 1, 16(3)
  03f8598  lfs 2, -3056(4)
  03f859c  ori 3, 31, 0
  03f85a0  li 4, 2
  03f85a4  fmuls 1, 2, 1
  03f85a8  fctiwz 1, 1
  03f85ac  stfd 1, 296(1)
  03f85b0  lwz 6, 300(1)
  03f85b4  extsw 6, 6
  03f85b8  bl 0xfddc0
  03f85bc  nop
  03f85c0  b 0x3f9768
  03f85c4  lis 3, 151
  03f85c8  addic 3, 3, -25376
  03f85cc  lbz 3, 8356(3)
  03f85d0  cmpwi 3, 3
  03f85d4  bt 2, 0x3f862c
  03f85d8  li 3, 7
  03f85dc  lbz 4, 83(31)
  03f85e0  cmpwi 4, 8
  03f85e4  stb 3, 32(31)
  03f85e8  bt 2, 0x3f9768
  03f85ec  lis 3, 63
  03f85f0  lis 4, 114
  03f85f4  addi 3, 3, 31712
  03f85f8  li 5, 0
  03f85fc  lfs 1, 16(3)
  03f8600  lfs 2, -3056(4)
  03f8604  ori 3, 31, 0
  03f8608  li 4, 8
  03f860c  fmuls 1, 2, 1
  03f8610  fctiwz 1, 1
  03f8614  stfd 1, 296(1)
  03f8618  lwz 6, 300(1)
  03f861c  extsw 6, 6
  03f8620  bl 0xfddc0
  03f8624  nop
  03f8628  b 0x3f9768
  03f862c  li 3, 6
  03f8630  lbz 4, 83(31)
  03f8634  cmpwi 4, 7
  03f8638  stb 3, 32(31)
  03f863c  bt 2, 0x3f9768
  03f8640  lis 3, 63
  03f8644  lis 4, 114
  03f8648  addi 3, 3, 31712
  03f864c  li 5, 0
  03f8650  lfs 1, 16(3)
  03f8654  lfs 2, -3056(4)
  03f8658  ori 3, 31, 0
  03f865c  fmuls 1, 2, 1
  03f8660  li 4, 7
  03f8664  fctiwz 1, 1
  03f8668  stfd 1, 296(1)
  03f866c  lwz 6, 300(1)
  03f8670  extsw 6, 6
  03f8674  bl 0xfddc0
  03f8678  nop
  03f867c  b 0x3f9768
  03f8680  lbz 3, 484(30)
  03f8684  cmpwi 3, 0
  03f8688  bf 2, 0x3f9768
  03f868c  lhz 3, 480(30)
  03f8690  cmpwi 3, 0
  03f8694  bf 2, 0x3f9768
  03f8698  li 3, 3
  03f869c  lbz 4, 83(31)
  03f86a0  cmpwi 4, 0
  03f86a4  stb 3, 32(31)
  03f86a8  bt 2, 0x3f9768
  03f86ac  lwz 3, 36(31)
  03f86b0  lwz 3, 72(3)
  03f86b4  lbz 3, 16(3)
  03f86b8  bl 0xfc620
  03f86bc  nop
  03f86c0  lis 5, 63
  03f86c4  lis 6, 114
  03f86c8  addi 5, 5, 31712
  03f86cc  li 4, 0
  03f86d0  lfs 1, 16(5)
  03f86d4  lfs 2, -3056(6)
  03f86d8  ori 5, 3, 0
  03f86dc  fmuls 1, 2, 1
  03f86e0  ori 3, 31, 0
  03f86e4  fctiwz 1, 1
  03f86e8  stfd 1, 296(1)
  03f86ec  lwz 6, 300(1)
  03f86f0  extsw 6, 6
  03f86f4  bl 0xfddc0
  03f86f8  nop
  03f86fc  b 0x3f9768
  03f8700  li 3, 31
  03f8704  bl 0xfc620
  03f8708  nop
  03f870c  cmpwi 3, 0
  03f8710  bf 2, 0x3f9768
  03f8714  li 3, 3
  03f8718  lbz 4, 83(31)
  03f871c  cmpwi 4, 0
  03f8720  stb 3, 32(31)
  03f8724  bt 2, 0x3f9768
  03f8728  lwz 3, 36(31)
  03f872c  lwz 3, 72(3)
  03f8730  lbz 3, 16(3)
  03f8734  bl 0xfc620
  03f8738  nop
  03f873c  lis 4, 63
  03f8740  lis 5, 114
  03f8744  addi 4, 4, 31712
  03f8748  lfs 1, 16(4)
  03f874c  lfs 2, -3056(5)
  03f8750  ori 5, 3, 0
  03f8754  fmuls 1, 2, 1
  03f8758  ori 3, 31, 0
  03f875c  li 4, 0
  03f8760  fctiwz 1, 1
  03f8764  stfd 1, 296(1)
  03f8768  lwz 6, 300(1)
  03f876c  extsw 6, 6
  03f8770  bl 0xfddc0
  03f8774  nop
  03f8778  b 0x3f9768
  03f877c  lbz 3, 112(31)
  03f8780  rlwinm 3, 3, 0, 30, 30
  03f8784  cmpwi 3, 0
  03f8788  bt 2, 0x3f9768
  03f878c  li 3, 1
  03f8790  lbz 4, 83(31)
  03f8794  cmpwi 4, 0
  03f8798  stb 3, 32(31)
  03f879c  bt 2, 0x3f9768
  03f87a0  lwz 3, 36(31)
  03f87a4  lwz 3, 72(3)
  03f87a8  lbz 3, 16(3)
  03f87ac  addic 3, 3, -1
  03f87b0  bl 0xfc620
  03f87b4  nop
  03f87b8  lis 4, 63
  03f87bc  lis 5, 114
  03f87c0  addi 4, 4, 31712
  03f87c4  lfs 1, 16(4)
  03f87c8  lfs 2, -3056(5)
  03f87cc  li 4, 0
  03f87d0  ori 5, 3, 0
  03f87d4  fmuls 1, 2, 1
  03f87d8  ori 3, 31, 0
  03f87dc  fctiwz 1, 1
  03f87e0  stfd 1, 296(1)
  03f87e4  lwz 6, 300(1)
  03f87e8  extsw 6, 6
  03f87ec  bl 0xfddc0
  03f87f0  nop
  03f87f4  b 0x3f9768
  03f87f8  lbz 3, 484(30)
  03f87fc  cmpwi 3, 2
  03f8800  bt 2, 0x3f88b0
  03f8804  li 3, 20
  03f8808  bl 0xfc620
  03f880c  nop
  03f8810  cmpwi 3, 0
  03f8814  bf 2, 0x3f9768
  03f8818  li 3, 5
  03f881c  lbz 4, 83(31)
  03f8820  cmpwi 4, 3
  03f8824  stb 3, 32(31)
  03f8828  bt 2, 0x3f8868
  03f882c  lis 3, 63
  03f8830  lis 4, 114
  03f8834  addi 3, 3, 31712
  03f8838  li 5, 0
  03f883c  lfs 1, 16(3)
  03f8840  lfs 2, -3056(4)
  03f8844  ori 3, 31, 0
  03f8848  li 4, 3
  03f884c  fmuls 1, 2, 1
  03f8850  fctiwz 1, 1
  03f8854  stfd 1, 296(1)
  03f8858  lwz 6, 300(1)
  03f885c  extsw 6, 6
  03f8860  bl 0xfddc0
  03f8864  nop
  03f8868  lis 3, 63
  03f886c  vspltisw 2, -1
  03f8870  li 5, 20
  03f8874  addi 3, 3, 31712
  03f8878  lis 4, 114
  03f887c  li 6, -3056
  03f8880  vslw 2, 2, 2
  03f8884  <unknown>
  03f8888  li 3, 482
  03f888c  vspltw 3, 3, 0
  03f8890  <unknown>
  03f8894  li 4, 480
  03f8898  vmaddfp 2, 4, 3, 2
  03f889c  vctsxs 2, 2, 0
  03f88a0  vsplth 2, 2, 1
  03f88a4  stvehx 2, 3, 30
  03f88a8  stvehx 2, 4, 30
  03f88ac  b 0x3f9768
  03f88b0  lwz 3, 468(30)
  03f88b4  cmpwi 3, 0
  03f88b8  bf 2, 0x3f88fc
  03f88bc  lis 3, 165
  03f88c0  lis 4, 151
  03f88c4  addic 5, 3, 7136
  03f88c8  lwz 3, 464(30)
  03f88cc  addic 4, 4, -25376
  03f88d0  slwi 3, 3, 2
  03f88d4  extsw 6, 3
  03f88d8  addic 3, 4, 128
  03f88dc  lwzx 5, 5, 6
  03f88e0  addic 4, 5, 16
  03f88e4  lwz 5, 0(5)
  03f88e8  extsw 5, 5
  03f88ec  bl 0x104e44
  03f88f0  nop
  03f88f4  cmpwi 3, 0
  03f88f8  bt 2, 0x3f8964
  03f88fc  li 3, 20
  03f8900  bl 0xfc620
  03f8904  nop
  03f8908  cmpwi 3, 0
  03f890c  bf 2, 0x3f9768
  03f8910  li 3, 8
  03f8914  lbz 4, 83(31)
  03f8918  cmpwi 4, 1
  03f891c  stb 3, 32(31)
  03f8920  bt 2, 0x3f9768
  03f8924  lis 3, 63
  03f8928  lis 4, 114
  03f892c  addi 3, 3, 31712
  03f8930  li 5, 0
  03f8934  lfs 1, 16(3)
  03f8938  lfs 2, -3056(4)
  03f893c  ori 3, 31, 0
  03f8940  li 4, 1
  03f8944  fmuls 1, 2, 1
  03f8948  fctiwz 1, 1
  03f894c  stfd 1, 296(1)
  03f8950  lwz 6, 300(1)
  03f8954  extsw 6, 6
  03f8958  bl 0xfddc0
  03f895c  nop
  03f8960  b 0x3f9768
  03f8964  lbz 3, 112(31)
  03f8968  rlwinm 3, 3, 0, 30, 30
  03f896c  cmpwi 3, 0
  03f8970  bt 2, 0x3f9768
  03f8974  li 3, 3
  03f8978  bl 0xfc620
  03f897c  nop
  03f8980  cmpwi 3, 0
  03f8984  bf 2, 0x3f89d4
  03f8988  lbz 3, 83(31)
  03f898c  cmpwi 3, 2
  03f8990  bt 2, 0x3f9768
  03f8994  lis 3, 63
  03f8998  lis 4, 114
  03f899c  addi 3, 3, 31712
  03f89a0  li 5, 0
  03f89a4  lfs 1, 16(3)
  03f89a8  lfs 2, -3056(4)
  03f89ac  ori 3, 31, 0
  03f89b0  li 4, 2
  03f89b4  fmuls 1, 2, 1
  03f89b8  fctiwz 1, 1
  03f89bc  stfd 1, 296(1)
  03f89c0  lwz 6, 300(1)
  03f89c4  extsw 6, 6
  03f89c8  bl 0xfddc0
  03f89cc  nop
  03f89d0  b 0x3f9768
  03f89d4  li 3, 7
  03f89d8  bl 0xfc620
  03f89dc  nop
  03f89e0  cmpwi 3, 0
  03f89e4  bf 2, 0x3f8a34
  03f89e8  lbz 3, 83(31)
  03f89ec  cmpwi 3, 8
  03f89f0  bt 2, 0x3f9768
  03f89f4  lis 3, 63
  03f89f8  lis 4, 114
  03f89fc  addi 3, 3, 31712
  03f8a00  li 5, 0
  03f8a04  lfs 1, 16(3)
  03f8a08  lfs 2, -3056(4)
  03f8a0c  ori 3, 31, 0
  03f8a10  li 4, 8
  03f8a14  fmuls 1, 2, 1
  03f8a18  fctiwz 1, 1
  03f8a1c  stfd 1, 296(1)
  03f8a20  lwz 6, 300(1)
  03f8a24  extsw 6, 6
  03f8a28  bl 0xfddc0
  03f8a2c  nop
  03f8a30  b 0x3f9768
  03f8a34  lbz 3, 83(31)
  03f8a38  cmpwi 3, 7
  03f8a3c  bt 2, 0x3f9768
  03f8a40  lis 3, 63
  03f8a44  lis 4, 114
  03f8a48  addi 3, 3, 31712
  03f8a4c  li 5, 0
  03f8a50  lfs 1, 16(3)
  03f8a54  lfs 2, -3056(4)
  03f8a58  ori 3, 31, 0
  03f8a5c  fmuls 1, 2, 1
  03f8a60  li 4, 7
  03f8a64  fctiwz 1, 1
  03f8a68  stfd 1, 296(1)
  03f8a6c  lwz 6, 300(1)
  03f8a70  extsw 6, 6
  03f8a74  bl 0xfddc0
  03f8a78  nop
  03f8a7c  b 0x3f9768
  03f8a80  lfs 1, 384(30)
  03f8a84  lfs 2, 16(31)
  03f8a88  lfs 3, 388(30)
  03f8a8c  lis 3, 63
  03f8a90  lfs 4, 20(31)
  03f8a94  fsubs 1, 1, 2
  03f8a98  addi 3, 3, 31712
  03f8a9c  fsubs 2, 3, 4
  03f8aa0  lis 4, 115
  03f8aa4  addic 4, 4, 22784
  03f8aa8  fabs 3, 1
  03f8aac  fabs 5, 2
  03f8ab0  stfs 1, 172(1)
  03f8ab4  stfs 2, 176(1)
  03f8ab8  fsubs 1, 3, 5
  03f8abc  stfs 1, 180(1)
  03f8ac0  lwz 5, 172(1)
  03f8ac4  lfs 4, 24(3)
  03f8ac8  lfs 1, 172(1)
  03f8acc  lwz 3, 176(1)
  03f8ad0  lfs 2, 176(1)
  03f8ad4  fabs 1, 1
  03f8ad8  lwz 6, 180(1)
  03f8adc  rlwinm 3, 3, 3, 29, 29
  03f8ae0  fabs 6, 2
  03f8ae4  lfs 2, 180(1)
  03f8ae8  rlwimi 3, 6, 2, 30, 30
  03f8aec  fsub 7, 2, 4
  03f8af0  rlwimi 3, 5, 4, 28, 28
  03f8af4  fsub 8, 2, 4
  03f8af8  ori 5, 4, 0
  03f8afc  rlwimi 5, 3, 2, 26, 28
  03f8b00  slwi 3, 3, 2
  03f8b04  clrldi 5, 5, 32
  03f8b08  fsel 5, 7, 1, 5
  03f8b0c  lfsx 1, 4, 3
  03f8b10  lfs 2, 4(5)
  03f8b14  fsel 3, 8, 6, 3
  03f8b18  fcmpu 0, 5, 4
  03f8b1c  bt 1, 0x3f8b24
  03f8b20  b 0x3f8c44
  03f8b24  fsubs 6, 3, 5
  03f8b28  fadds 3, 3, 5
  03f8b2c  addic 3, 1, 16
  03f8b30  li 7, 2
  03f8b34  addic 5, 3, 228
  03f8b38  addic 4, 3, 212
  03f8b3c  mtctr 7
  03f8b40  fdivs 3, 6, 3
  03f8b44  fmuls 5, 3, 3
  03f8b48  stfs 3, 240(1)
  03f8b4c  stfs 3, 232(1)
  03f8b50  stfs 3, 236(1)
  03f8b54  stfs 3, 228(1)
  03f8b58  lfs 7, 240(1)
  03f8b5c  lfs 8, 232(1)
  03f8b60  lfs 9, 236(1)
  03f8b64  fmuls 6, 5, 5
  03f8b68  fmuls 8, 8, 5
  03f8b6c  fmuls 7, 7, 6
  03f8b70  fmuls 3, 6, 6
  03f8b74  fmuls 6, 9, 6
  03f8b78  stfs 8, 232(1)
  03f8b7c  fmuls 5, 7, 5
  03f8b80  stfs 6, 236(1)
  03f8b84  stfs 5, 240(1)
  03f8b88  lfs 5, 212(3)
  03f8b8c  fmuls 5, 5, 3
  03f8b90  stfs 5, 228(3)
  03f8b94  lfs 5, 4(4)
  03f8b98  addic 4, 4, 8
  03f8b9c  fmuls 5, 5, 3
  03f8ba0  addic 3, 3, 8
  03f8ba4  stfs 5, 4(5)
  03f8ba8  addic 5, 5, 8
  03f8bac  bdnz 0x3f8b88
  03f8bb0  li 5, 4
  03f8bb4  ori 3, 1, 0
  03f8bb8  mtctr 5
  03f8bbc  lis 4, 115
  03f8bc0  addic 5, 3, 228
  03f8bc4  addic 4, 4, 22752
  03f8bc8  ori 6, 5, 0
  03f8bcc  lfs 3, 228(3)
  03f8bd0  lfs 5, 0(4)
  03f8bd4  fmuls 3, 3, 5
  03f8bd8  lfs 5, 4(4)
  03f8bdc  addic 4, 4, 8
  03f8be0  stfs 3, 228(3)
  03f8be4  lfs 3, 4(5)
  03f8be8  addic 3, 3, 8
  03f8bec  fmuls 3, 3, 5
  03f8bf0  stfs 3, 4(5)
  03f8bf4  addic 5, 5, 8
  03f8bf8  bdnz 0x3f8bcc
  03f8bfc  ori 3, 1, 0
  03f8c00  mtctr 7
  03f8c04  lfs 3, 228(3)
  03f8c08  fadds 3, 4, 3
  03f8c0c  addic 3, 3, 16
  03f8c10  lfs 4, 4(6)
  03f8c14  lfs 5, 8(6)
  03f8c18  lfs 6, 12(6)
  03f8c1c  addic 6, 6, 16
  03f8c20  fadds 3, 3, 4
  03f8c24  fadds 4, 3, 5
  03f8c28  fadds 4, 4, 6
  03f8c2c  bdnz 0x3f8c04
  03f8c30  lis 3, 63
  03f8c34  addi 3, 3, 31712
  03f8c38  lfs 3, 28(3)
  03f8c3c  fadds 4, 4, 3
  03f8c40  fmadds 4, 4, 1, 2
  03f8c44  lis 3, 63
  03f8c48  fmr 1, 4
  03f8c4c  addic 5, 30, 476
  03f8c50  addi 4, 3, 31712
  03f8c54  lis 3, 114
  03f8c58  lfs 6, 52(4)
  03f8c5c  lfs 5, -3052(3)
  03f8c60  lfs 2, 44(4)
  03f8c64  ori 3, 31, 0
  03f8c68  lfs 3, 48(4)
  03f8c6c  fmuls 4, 5, 6
  03f8c70  bl 0xff2e8
  03f8c74  nop
  03f8c78  lbz 3, 112(31)
  03f8c7c  rlwinm 3, 3, 0, 30, 30
  03f8c80  cmpwi 3, 0
  03f8c84  bt 2, 0x3f9768
  03f8c88  lwz 3, 468(30)
  03f8c8c  cmpwi 3, 0
  03f8c90  bf 2, 0x3f8d28
  03f8c94  lis 3, 165
  03f8c98  lis 4, 151
  03f8c9c  addic 5, 3, 7136
  03f8ca0  lwz 3, 464(30)
  03f8ca4  addic 4, 4, -25376
  03f8ca8  slwi 3, 3, 2
  03f8cac  extsw 6, 3
  03f8cb0  addic 3, 4, 128
  03f8cb4  lwzx 5, 5, 6
  03f8cb8  addic 4, 5, 16
  03f8cbc  lwz 5, 0(5)
  03f8cc0  extsw 5, 5
  03f8cc4  bl 0x104e44
  03f8cc8  nop
  03f8ccc  cmpwi 3, 0
  03f8cd0  bf 2, 0x3f8d28
  03f8cd4  li 3, 11
  03f8cd8  lbz 4, 83(31)
  03f8cdc  cmpwi 4, 9
  03f8ce0  stb 3, 32(31)
  03f8ce4  bt 2, 0x3f9768
  03f8ce8  lis 3, 63
  03f8cec  lis 4, 114
  03f8cf0  addi 3, 3, 31712
  03f8cf4  li 5, 0
  03f8cf8  lfs 1, 16(3)
  03f8cfc  lfs 2, -3056(4)
  03f8d00  ori 3, 31, 0
  03f8d04  fmuls 1, 2, 1
  03f8d08  li 4, 9
  03f8d0c  fctiwz 1, 1
  03f8d10  stfd 1, 296(1)
  03f8d14  lwz 6, 300(1)
  03f8d18  extsw 6, 6
  03f8d1c  bl 0xfddc0
  03f8d20  nop
  03f8d24  b 0x3f9768
  03f8d28  li 3, 9
  03f8d2c  lbz 4, 83(31)
  03f8d30  cmpwi 4, 9
  03f8d34  stb 3, 32(31)
  03f8d38  bt 2, 0x3f9768
  03f8d3c  lis 3, 63
  03f8d40  lis 4, 114
  03f8d44  addi 3, 3, 31712
  03f8d48  li 5, 0
  03f8d4c  lfs 1, 16(3)
  03f8d50  lfs 2, -3056(4)
  03f8d54  ori 3, 31, 0
  03f8d58  li 4, 9
  03f8d5c  fmuls 1, 2, 1
  03f8d60  fctiwz 1, 1
  03f8d64  stfd 1, 296(1)
  03f8d68  lwz 6, 300(1)
  03f8d6c  extsw 6, 6
  03f8d70  bl 0xfddc0
  03f8d74  nop
  03f8d78  b 0x3f9768
  03f8d7c  ori 3, 31, 0
  03f8d80  addic 5, 30, 384
  03f8d84  lfs 1, 492(30)
  03f8d88  bl 0x3f6930
  03f8d8c  lis 3, 63
  03f8d90  lwz 4, 464(30)
  03f8d94  lis 5, 165
  03f8d98  addi 3, 3, 31712
  03f8d9c  lis 6, 16358
  03f8da0  slwi 4, 4, 2
  03f8da4  addic 5, 5, 7136
  03f8da8  extsw 4, 4
  03f8dac  lfs 31, 56(3)
  03f8db0  ori 3, 6, 26214
  03f8db4  lis 6, 151
  03f8db8  addic 6, 6, -25376
  03f8dbc  stw 3, 88(31)
  03f8dc0  lwzx 5, 5, 4
  03f8dc4  addic 3, 6, 128
  03f8dc8  addic 4, 5, 16
  03f8dcc  lwz 5, 0(5)
  03f8dd0  extsw 5, 5
  03f8dd4  bl 0x104e44
  03f8dd8  nop
  03f8ddc  lfs 2, 16(31)
  03f8de0  cmpwi 3, 0
  03f8de4  lfs 1, 20(31)
  03f8de8  lbz 3, 83(31)
  03f8dec  lfs 3, 24(31)
  03f8df0  bf 2, 0x3f8e0c
  03f8df4  lwz 4, 468(30)
  03f8df8  cmpwi 4, 0
  03f8dfc  bf 2, 0x3f8e0c
  03f8e00  li 3, 11
  03f8e04  stb 3, 32(31)
  03f8e08  b 0x3f9768
  03f8e0c  fmr 4, 1
  03f8e10  lfs 1, 384(30)
  03f8e14  fsubs 5, 2, 1
  03f8e18  lfs 2, 388(30)
  03f8e1c  fsubs 4, 4, 2
  03f8e20  fmuls 4, 4, 4
  03f8e24  fmadds 4, 5, 5, 4
  03f8e28  fsqrts 4, 4
  03f8e2c  fcmpu 0, 4, 31
  03f8e30  cror 6, 1, 2
  03f8e34  bt 6, 0x3f8e88
  03f8e38  li 4, 10
  03f8e3c  cmpwi 3, 10
  03f8e40  stb 4, 32(31)
  03f8e44  bt 2, 0x3f9768
  03f8e48  lis 3, 63
  03f8e4c  lis 4, 114
  03f8e50  addi 3, 3, 31712
  03f8e54  li 5, 5
  03f8e58  lfs 1, 16(3)
  03f8e5c  lfs 2, -3056(4)
  03f8e60  ori 3, 31, 0
  03f8e64  li 4, 10
  03f8e68  fmuls 1, 2, 1
  03f8e6c  fctiwz 1, 1
  03f8e70  stfd 1, 296(1)
  03f8e74  lwz 6, 300(1)
  03f8e78  extsw 6, 6
  03f8e7c  bl 0xfddc0
  03f8e80  nop
  03f8e84  b 0x3f9768
  03f8e88  lfs 4, 500(30)
  03f8e8c  lfs 5, 496(30)
  03f8e90  fsubs 2, 2, 4
  03f8e94  fsubs 4, 1, 5
  03f8e98  lfs 5, 504(30)
  03f8e9c  lfs 1, 392(30)
  03f8ea0  fsubs 5, 1, 5
  03f8ea4  lis 3, 63
  03f8ea8  fmuls 2, 2, 2
  03f8eac  addi 3, 3, 31712
  03f8eb0  fmadds 2, 4, 4, 2
  03f8eb4  lfs 4, 60(3)
  03f8eb8  fmadds 2, 5, 5, 2
  03f8ebc  fsqrts 2, 2
  03f8ec0  fcmpu 0, 2, 4
  03f8ec4  bt 1, 0x3f8ee8
  03f8ec8  fsubs 1, 1, 3
  03f8ecc  lis 3, 63
  03f8ed0  addi 3, 3, 31712
  03f8ed4  lfs 2, 64(3)
  03f8ed8  fabs 1, 1
  03f8edc  fcmpu 0, 1, 2
  03f8ee0  cror 6, 0, 2
  03f8ee4  bt 6, 0x3f9768
  03f8ee8  li 3, 11
  03f8eec  stb 3, 32(31)
  03f8ef0  b 0x3f9768
  03f8ef4  lbz 3, 112(31)
  03f8ef8  rlwinm 3, 3, 0, 30, 30
  03f8efc  cmpwi 3, 0
  03f8f00  bt 2, 0x3f8f58
  03f8f04  li 3, 11
  03f8f08  lbz 4, 83(31)
  03f8f0c  cmpwi 4, 9
  03f8f10  stb 3, 32(31)
  03f8f14  bt 2, 0x3f9768
  03f8f18  lis 3, 63
  03f8f1c  lis 4, 114
  03f8f20  addi 3, 3, 31712
  03f8f24  li 5, 0
  03f8f28  lfs 1, 16(3)
  03f8f2c  lfs 2, -3056(4)
  03f8f30  ori 3, 31, 0
  03f8f34  li 4, 9
  03f8f38  fmuls 1, 2, 1
  03f8f3c  fctiwz 1, 1
  03f8f40  stfd 1, 296(1)
  03f8f44  lwz 6, 300(1)
  03f8f48  extsw 6, 6
  03f8f4c  bl 0xfddc0
  03f8f50  nop
  03f8f54  b 0x3f9768
  03f8f58  ori 3, 31, 0
  03f8f5c  bl 0xefe40
  03f8f60  nop
  03f8f64  lis 3, 63
  03f8f68  addi 3, 3, 31712
  03f8f6c  lfs 2, 68(3)
  03f8f70  lfs 3, 72(3)
  03f8f74  fsubs 1, 1, 2
  03f8f78  lfs 5, 72(31)
  03f8f7c  fabs 1, 1
  03f8f80  fcmpu 0, 1, 3
  03f8f84  bt 1, 0x3f9768
  03f8f88  lfs 1, 392(30)
  03f8f8c  lfs 2, 24(31)
  03f8f90  lis 3, 63
  03f8f94  fsubs 1, 1, 2
  03f8f98  addi 3, 3, 31712
  03f8f9c  lfs 31, 76(3)
  03f8fa0  fabs 1, 1
  03f8fa4  fcmpu 0, 1, 31
  03f8fa8  cror 6, 1, 2
  03f8fac  bt 6, 0x3f9768
  03f8fb0  lfs 1, 384(30)
  03f8fb4  lfs 2, 16(31)
  03f8fb8  lfs 3, 388(30)
  03f8fbc  lfs 4, 20(31)
  03f8fc0  fsubs 1, 1, 2
  03f8fc4  lis 3, 63
  03f8fc8  fsubs 2, 3, 4
  03f8fcc  addi 3, 3, 31712
  03f8fd0  lis 4, 115
  03f8fd4  addic 4, 4, 22784
  03f8fd8  fabs 3, 1
  03f8fdc  fabs 6, 2
  03f8fe0  stfs 1, 160(1)
  03f8fe4  stfs 2, 164(1)
  03f8fe8  fsubs 1, 3, 6
  03f8fec  stfs 1, 168(1)
  03f8ff0  lwz 5, 160(1)
  03f8ff4  lfs 4, 24(3)
  03f8ff8  lfs 1, 160(1)
  03f8ffc  lwz 3, 164(1)
  03f9000  lfs 2, 164(1)
  03f9004  lwz 6, 168(1)
  03f9008  rlwinm 3, 3, 3, 29, 29
  03f900c  fabs 7, 2
  03f9010  lfs 2, 168(1)
  03f9014  fabs 1, 1
  03f9018  rlwimi 3, 6, 2, 30, 30
  03f901c  fsub 8, 2, 4
  03f9020  rlwimi 3, 5, 4, 28, 28
  03f9024  fsub 9, 2, 4
  03f9028  ori 5, 4, 0
  03f902c  rlwimi 5, 3, 2, 26, 28
  03f9030  slwi 3, 3, 2
  03f9034  clrldi 5, 5, 32
  03f9038  fsel 6, 8, 1, 6
  03f903c  lfsx 1, 4, 3
  03f9040  lfs 2, 4(5)
  03f9044  fsel 3, 9, 7, 3
  03f9048  fcmpu 0, 6, 4
  03f904c  bt 1, 0x3f9054
  03f9050  b 0x3f9174
  03f9054  fsubs 7, 3, 6
  03f9058  fadds 3, 3, 6
  03f905c  addic 3, 1, 16
  03f9060  li 6, 2
  03f9064  addic 4, 3, 180
  03f9068  addic 5, 3, 196
  03f906c  mtctr 6
  03f9070  fdivs 3, 7, 3
  03f9074  fmuls 6, 3, 3
  03f9078  stfs 3, 208(1)
  03f907c  stfs 3, 200(1)
  03f9080  stfs 3, 204(1)
  03f9084  stfs 3, 196(1)
  03f9088  lfs 8, 208(1)
  03f908c  lfs 9, 200(1)
  03f9090  lfs 10, 204(1)
  03f9094  fmuls 7, 6, 6
  03f9098  fmuls 9, 9, 6
  03f909c  fmuls 8, 8, 7
  03f90a0  fmuls 3, 7, 7
  03f90a4  fmuls 7, 10, 7
  03f90a8  stfs 9, 200(1)
  03f90ac  fmuls 6, 8, 6
  03f90b0  stfs 7, 204(1)
  03f90b4  stfs 6, 208(1)
  03f90b8  lfs 6, 180(3)
  03f90bc  fmuls 6, 6, 3
  03f90c0  stfs 6, 196(3)
  03f90c4  lfs 6, 4(4)
  03f90c8  addic 3, 3, 8
  03f90cc  addic 4, 4, 8
  03f90d0  fmuls 6, 6, 3
  03f90d4  stfs 6, 4(5)
  03f90d8  addic 5, 5, 8
  03f90dc  bdnz 0x3f90b8
  03f90e0  li 5, 4
  03f90e4  ori 3, 1, 0
  03f90e8  mtctr 5
  03f90ec  lis 4, 115
  03f90f0  addic 5, 3, 196
  03f90f4  addic 4, 4, 22752
  03f90f8  ori 7, 5, 0
  03f90fc  lfs 3, 196(3)
  03f9100  lfs 6, 0(4)
  03f9104  fmuls 3, 3, 6
  03f9108  lfs 6, 4(4)
  03f910c  addic 4, 4, 8
  03f9110  stfs 3, 196(3)
  03f9114  lfs 3, 4(5)
  03f9118  addic 3, 3, 8
  03f911c  fmuls 3, 3, 6
  03f9120  stfs 3, 4(5)
  03f9124  addic 5, 5, 8
  03f9128  bdnz 0x3f90fc
  03f912c  ori 3, 1, 0
  03f9130  mtctr 6
  03f9134  lfs 3, 196(3)
  03f9138  fadds 3, 4, 3
  03f913c  lfs 4, 4(7)
  03f9140  addic 3, 3, 16
  03f9144  lfs 6, 8(7)
  03f9148  lfs 7, 12(7)
  03f914c  addic 7, 7, 16
  03f9150  fadds 3, 3, 4
  03f9154  fadds 4, 3, 6
  03f9158  fadds 4, 4, 7
  03f915c  bdnz 0x3f9134
  03f9160  lis 3, 63
  03f9164  addi 3, 3, 31712
  03f9168  lfs 3, 28(3)
  03f916c  fadds 4, 4, 3
  03f9170  fmadds 4, 4, 1, 2
  03f9174  fmr 1, 4
  03f9178  fmr 2, 5
  03f917c  bl 0x5026a0
  03f9180  nop
  03f9184  lis 3, 63
  03f9188  addi 3, 3, 31712
  03f918c  lfs 2, 80(3)
  03f9190  fcmpu 0, 1, 2
  03f9194  cror 6, 1, 2
  03f9198  bt 6, 0x3f9768
  03f919c  lwz 3, 448(30)
  03f91a0  cmpwi 3, 0
  03f91a4  bt 2, 0x3f9768
  03f91a8  lfs 1, 20(31)
  03f91ac  lfs 2, 388(30)
  03f91b0  lfs 3, 16(31)
  03f91b4  fsubs 1, 1, 2
  03f91b8  lfs 2, 384(30)
  03f91bc  fsubs 2, 3, 2
  03f91c0  lis 3, 63
  03f91c4  addi 3, 3, 31712
  03f91c8  fmuls 1, 1, 1
  03f91cc  fmadds 1, 2, 2, 1
  03f91d0  lfs 2, 84(3)
  03f91d4  fsqrts 1, 1
  03f91d8  fcmpu 0, 1, 2
  03f91dc  cror 6, 1, 2
  03f91e0  bt 6, 0x3f9768
  03f91e4  lis 3, 63
  03f91e8  lfs 1, 72(31)
  03f91ec  addi 3, 3, 31712
  03f91f0  lfs 2, 88(3)
  03f91f4  lfs 3, 92(3)
  03f91f8  fadds 2, 1, 2
  03f91fc  fsubs 5, 3, 1
  03f9200  lfs 4, 96(3)
  03f9204  addic 7, 1, 144
  03f9208  addic 8, 1, 128
  03f920c  li 5, 1
  03f9210  fsubs 3, 3, 2
  03f9214  fsub 7, 1, 5
  03f9218  fsubs 6, 4, 2
  03f921c  fsubs 4, 4, 1
  03f9220  fsub 8, 2, 3
  03f9224  fsel 1, 7, 5, 1
  03f9228  lfs 5, 100(3)
  03f922c  fsel 2, 8, 3, 2
  03f9230  fsub 3, 4, 1
  03f9234  fsub 8, 6, 2
  03f9238  fsel 1, 3, 4, 1
  03f923c  lfs 3, 104(3)
  03f9240  lfs 4, 108(3)
  03f9244  lfs 9, 112(3)
  03f9248  fsel 2, 8, 6, 2
  03f924c  fmuls 6, 1, 1
  03f9250  fmuls 7, 2, 2
  03f9254  fmuls 8, 6, 1
  03f9258  fmuls 10, 7, 2
  03f925c  fmuls 11, 6, 8
  03f9260  fmadds 1, 8, 5, 1
  03f9264  lfs 8, 116(3)
  03f9268  stw 27, 136(1)
  03f926c  fmuls 12, 7, 10
  03f9270  fmadds 2, 10, 5, 2
  03f9274  fmuls 5, 6, 11
  03f9278  fmadds 1, 11, 3, 1
  03f927c  fmuls 10, 7, 12
  03f9280  fmadds 2, 12, 3, 2
  03f9284  fmuls 3, 6, 5
  03f9288  fmadds 1, 5, 4, 1
  03f928c  fmuls 5, 7, 10
  03f9290  fmadds 2, 10, 4, 2
  03f9294  fmadds 1, 3, 9, 1
  03f9298  fmadds 2, 5, 9, 2
  03f929c  fmuls 1, 1, 8
  03f92a0  fmuls 2, 2, 8
  03f92a4  stfs 1, 132(1)
  03f92a8  lwz 4, 448(30)
  03f92ac  stfs 2, 128(1)
  03f92b0  lfs 1, 384(30)
  03f92b4  stfs 1, 144(1)
  03f92b8  lfs 1, 388(30)
  03f92bc  stfs 1, 148(1)
  03f92c0  lfs 2, 392(30)
  03f92c4  stfs 2, 152(1)
  03f92c8  lfs 1, 396(30)
  03f92cc  stfs 1, 156(1)
  03f92d0  lfs 3, 120(3)
  03f92d4  ori 3, 4, 0
  03f92d8  fmr 1, 31
  03f92dc  fadds 2, 2, 3
  03f92e0  ori 4, 31, 0
  03f92e4  stfs 2, 152(1)
  03f92e8  bl 0x105c08
  03f92ec  nop
  03f92f0  b 0x3f9768
  03f92f4  lis 3, 63
  03f92f8  lis 28, 114
  03f92fc  addi 29, 3, 31712
  03f9300  ori 3, 31, 0
  03f9304  addic 5, 30, 496
  03f9308  lfs 1, 124(29)
  03f930c  lfs 2, -3052(28)
  03f9310  fmuls 1, 2, 1
  03f9314  bl 0x3f6930
  03f9318  lis 3, 16300
  03f931c  lfs 3, 20(31)
  03f9320  lfs 2, 16(31)
  03f9324  ori 3, 3, 52429
  03f9328  stw 3, 88(31)
  03f932c  lfs 1, 500(30)
  03f9330  lfs 4, 496(30)
  03f9334  fsubs 1, 3, 1
  03f9338  fsubs 4, 2, 4
  03f933c  lfs 5, 128(29)
  03f9340  fmuls 1, 1, 1
  03f9344  fmadds 1, 4, 4, 1
  03f9348  lfs 4, -3052(28)
  03f934c  lbz 3, 112(31)
  03f9350  fsqrts 1, 1
  03f9354  fcmpu 0, 1, 5
  03f9358  cror 6, 1, 2
  03f935c  bt 6, 0x3f936c
  03f9360  rlwinm 4, 3, 0, 30, 30
  03f9364  cmpwi 4, 0
  03f9368  bf 2, 0x3f9384
  03f936c  lis 4, 63
  03f9370  addi 4, 4, 31712
  03f9374  lfs 5, 48(4)
  03f9378  fcmpu 0, 1, 5
  03f937c  cror 6, 1, 2
  03f9380  bt 6, 0x3f941c
  03f9384  li 3, 5
  03f9388  lbz 4, 83(31)
  03f938c  cmpwi 4, 3
  03f9390  stb 3, 32(31)
  03f9394  bt 2, 0x3f93d4
  03f9398  lis 3, 63
  03f939c  lis 4, 114
  03f93a0  addi 3, 3, 31712
  03f93a4  li 5, 0
  03f93a8  lfs 1, 16(3)
  03f93ac  lfs 2, -3056(4)
  03f93b0  ori 3, 31, 0
  03f93b4  fmuls 1, 2, 1
  03f93b8  li 4, 3
  03f93bc  fctiwz 1, 1
  03f93c0  stfd 1, 296(1)
  03f93c4  lwz 6, 300(1)
  03f93c8  extsw 6, 6
  03f93cc  bl 0xfddc0
  03f93d0  nop
  03f93d4  lis 3, 63
  03f93d8  li 4, 20
  03f93dc  vspltisw 2, -1
  03f93e0  addi 3, 3, 31712
  03f93e4  lis 5, 114
  03f93e8  li 6, -3056
  03f93ec  vslw 2, 2, 2
  03f93f0  <unknown>
  03f93f4  li 3, 482
  03f93f8  vspltw 3, 3, 0
  03f93fc  li 4, 480
  03f9400  <unknown>
  03f9404  vmaddfp 2, 4, 3, 2
  03f9408  vctsxs 2, 2, 0
  03f940c  vsplth 2, 2, 1
  03f9410  stvehx 2, 3, 30
  03f9414  stvehx 2, 4, 30
  03f9418  b 0x3f9768
  03f941c  rlwinm 3, 3, 0, 30, 30
  03f9420  cmpwi 3, 0
  03f9424  bt 2, 0x3f9768
  03f9428  lfs 1, 388(30)
  03f942c  lfs 5, 384(30)
  03f9430  fsubs 1, 3, 1
  03f9434  fsubs 2, 2, 5
  03f9438  lis 3, 63
  03f943c  lis 4, 114
  03f9440  addi 3, 3, 31712
  03f9444  fmuls 1, 1, 1
  03f9448  lfs 3, 132(3)
  03f944c  lfs 5, 140(3)
  03f9450  lfs 6, 472(30)
  03f9454  fmuls 4, 6, 4
  03f9458  fmadds 1, 2, 2, 1
  03f945c  lfs 2, -3056(4)
  03f9460  fmuls 3, 2, 3
  03f9464  fmuls 2, 2, 5
  03f9468  lfs 5, 136(3)
  03f946c  lfs 6, 144(3)
  03f9470  fsqrts 1, 1
  03f9474  fmuls 3, 4, 3
  03f9478  fmuls 2, 4, 2
  03f947c  fmadds 2, 3, 5, 2
  03f9480  fadds 2, 2, 6
  03f9484  fcmpu 0, 1, 2
  03f9488  cror 6, 1, 2
  03f948c  bt 6, 0x3f9768
  03f9490  lis 3, 165
  03f9494  lis 4, 151
  03f9498  addic 5, 3, 7136
  03f949c  addic 3, 4, -25376
  03f94a0  lwz 4, 464(30)
  03f94a4  addic 3, 3, 128
  03f94a8  slwi 4, 4, 2
  03f94ac  extsw 4, 4
  03f94b0  lwzx 5, 5, 4
  03f94b4  addic 4, 5, 16
  03f94b8  lwz 5, 0(5)
  03f94bc  extsw 5, 5
  03f94c0  bl 0x104e44
  03f94c4  nop
  03f94c8  cmpwi 3, 0
  03f94cc  bt 2, 0x3f9768
  03f94d0  li 3, 10
  03f94d4  lbz 4, 83(31)
  03f94d8  cmpwi 4, 10
  03f94dc  stb 3, 32(31)
  03f94e0  bt 2, 0x3f9768
  03f94e4  lis 3, 63
  03f94e8  lis 4, 114
  03f94ec  addi 3, 3, 31712
  03f94f0  li 5, 0
  03f94f4  lfs 1, 16(3)
  03f94f8  lfs 2, -3056(4)
  03f94fc  ori 3, 31, 0
  03f9500  li 4, 10
  03f9504  fmuls 1, 2, 1
  03f9508  fctiwz 1, 1
  03f950c  stfd 1, 296(1)
  03f9510  lwz 6, 300(1)
  03f9514  extsw 6, 6
  03f9518  bl 0xfddc0
  03f951c  nop
  03f9520  b 0x3f9768
  03f9524  ori 3, 31, 0
  03f9528  addic 4, 30, 288
  03f952c  bl 0x10b030
  03f9530  nop
  03f9534  rlwinm 3, 3, 0, 25, 26
  03f9538  cmpwi 3, 0
  03f953c  bt 2, 0x3f95d8
  03f9540  li 3, 5
  03f9544  lbz 4, 83(31)
  03f9548  cmpwi 4, 3
  03f954c  stb 3, 32(31)
  03f9550  bt 2, 0x3f9590
  03f9554  lis 3, 63
  03f9558  lis 4, 114
  03f955c  addi 3, 3, 31712
  03f9560  li 5, 0
  03f9564  lfs 1, 16(3)
  03f9568  lfs 2, -3056(4)
  03f956c  ori 3, 31, 0
  03f9570  li 4, 3
  03f9574  fmuls 1, 2, 1
  03f9578  fctiwz 1, 1
  03f957c  stfd 1, 296(1)
  03f9580  lwz 6, 300(1)
  03f9584  extsw 6, 6
  03f9588  bl 0xfddc0
  03f958c  nop
  03f9590  lis 3, 63
  03f9594  vspltisw 2, -1
  03f9598  li 5, 20
  03f959c  addi 3, 3, 31712
  03f95a0  lis 4, 114
  03f95a4  li 6, -3056
  03f95a8  vslw 2, 2, 2
  03f95ac  <unknown>
  03f95b0  li 3, 482
  03f95b4  vspltw 3, 3, 0
  03f95b8  <unknown>
  03f95bc  li 4, 480
  03f95c0  vmaddfp 2, 4, 3, 2
  03f95c4  vctsxs 2, 2, 0
  03f95c8  vsplth 2, 2, 1
  03f95cc  stvehx 2, 3, 30
  03f95d0  stvehx 2, 4, 30
  03f95d4  b 0x3f9768
  03f95d8  lwz 4, 24(31)
  03f95dc  lis 3, 16384
  03f95e0  srawi 5, 4, 31
  03f95e4  srwi 6, 5, 1
  03f95e8  xor 4, 6, 4
  03f95ec  subc 4, 4, 5
  03f95f0  cmpw 4, 3
  03f95f4  bf 0, 0x3f9768
  03f95f8  ori 3, 31, 0
  03f95fc  li 4, 0
  03f9600  li 5, -1
  03f9604  bl 0xfd8d0
  03f9608  nop
  03f960c  ori 3, 31, 0
  03f9610  bl 0xefb38
  03f9614  nop
  03f9618  b 0x3f9768
  03f961c  lhz 5, 52(31)
  03f9620  ori 3, 31, 0
  03f9624  addic 4, 30, 288
  03f9628  rlwimi 5, 27, 0, 19, 19
  03f962c  sth 5, 52(31)
  03f9630  bl 0x10b030
  03f9634  nop
  03f9638  rlwinm 3, 3, 0, 25, 26
  03f963c  cmpwi 3, 0
  03f9640  bt 2, 0x3f9724
  03f9644  lis 3, 63
  03f9648  addic 30, 31, 16
  03f964c  addi 29, 3, 31712
  03f9650  ori 3, 31, 0
  03f9654  ori 4, 30, 0
  03f9658  li 6, -1
  03f965c  lfs 1, 136(29)
  03f9660  lfs 2, 148(29)
  03f9664  bl 0x10fb28
  03f9668  nop
  03f966c  lis 3, 161
  03f9670  lfs 31, 24(29)
  03f9674  addic 29, 31, 64
  03f9678  addic 28, 3, 23856
  03f967c  ori 3, 31, 0
  03f9680  fmr 1, 31
  03f9684  li 8, 0
  03f9688  ori 10, 28, 0
  03f968c  std 28, 112(1)
  03f9690  li 4, 1742
  03f9694  std 28, 120(1)
  03f9698  ori 5, 30, 0
  03f969c  ori 6, 29, 0
  03f96a0  li 7, 0
  03f96a4  bl 0x11a560
  03f96a8  nop
  03f96ac  ori 3, 31, 0
  03f96b0  std 28, 112(1)
  03f96b4  li 4, 1743
  03f96b8  fmr 1, 31
  03f96bc  ori 10, 28, 0
  03f96c0  std 28, 120(1)
  03f96c4  ori 5, 30, 0
  03f96c8  ori 6, 29, 0
  03f96cc  li 7, 0
  03f96d0  li 8, 0
  03f96d4  bl 0x11a560
  03f96d8  nop
  03f96dc  ori 3, 31, 0
  03f96e0  li 4, 1917
  03f96e4  li 5, 1
  03f96e8  li 6, 1917
  03f96ec  li 7, 1
  03f96f0  li 8, 3
  03f96f4  li 9, 2
  03f96f8  bl 0x11aa78
  03f96fc  nop
  03f9700  ori 3, 31, 0
  03f9704  li 4, 0
  03f9708  li 5, -1
  03f970c  bl 0xfd8d0
  03f9710  nop
  03f9714  ori 3, 31, 0
  03f9718  bl 0xefb38
  03f971c  nop
  03f9720  b 0x3f9768
  03f9724  lwz 4, 24(31)
  03f9728  lis 3, 16384
  03f972c  srawi 5, 4, 31
  03f9730  srwi 6, 5, 1
  03f9734  xor 4, 6, 4
  03f9738  subc 4, 4, 5
  03f973c  cmpw 4, 3
  03f9740  bf 0, 0x3f9768
  03f9744  ori 3, 31, 0
  03f9748  li 4, 0
  03f974c  li 5, -1
  03f9750  bl 0xfd8d0
  03f9754  nop
  03f9758  ori 3, 31, 0
  03f975c  bl 0xefb38
  03f9760  nop
  03f9764  b 0x3f9768
  03f9768  ld 0, 384(1)
  03f976c  mtlr 0
  03f9770  lfd 31, 360(1)
  03f9774  ld 27, 320(1)
  03f9778  ld 28, 328(1)
  03f977c  ld 29, 336(1)
  03f9780  ld 30, 344(1)
  03f9784  ld 31, 352(1)
  03f9788  addi 1, 1, 368
  03f978c  blr

M1382_003f9798:   # 0x3f9798, 0xb0 bytes
  03f9798  stdu 1, -144(1)
  03f979c  mflr 0
  03f97a0  std 0, 160(1)
  03f97a4  std 31, 136(1)
  03f97a8  std 30, 128(1)
  03f97ac  ori 31, 3, 0
  03f97b0  bl 0x48a718
  03f97b4  nop
  03f97b8  ori 30, 3, 0
  03f97bc  cmpwi 30, 0
  03f97c0  bt 2, 0x3f97d0
  03f97c4  li 3, 12
  03f97c8  stb 3, 32(31)
  03f97cc  b 0x3f982c
  03f97d0  lbz 3, 32(31)
  03f97d4  cmpwi 3, 12
  03f97d8  bf 2, 0x3f982c
  03f97dc  li 3, 6
  03f97e0  lbz 4, 83(31)
  03f97e4  cmpwi 4, 7
  03f97e8  stb 3, 32(31)
  03f97ec  bt 2, 0x3f982c
  03f97f0  lis 3, 64
  03f97f4  lis 4, 114
  03f97f8  addi 3, 3, -26736
  03f97fc  li 5, 0
  03f9800  lfs 1, 0(3)
  03f9804  lfs 2, -3056(4)
  03f9808  ori 3, 31, 0
  03f980c  fmuls 1, 2, 1
  03f9810  li 4, 7
  03f9814  fctiwz 1, 1
  03f9818  stfd 1, 112(1)
  03f981c  lwz 6, 116(1)
  03f9820  extsw 6, 6
  03f9824  bl 0xfddc0
  03f9828  nop
  03f982c  ori 3, 30, 0
  03f9830  ld 0, 160(1)
  03f9834  mtlr 0
  03f9838  ld 30, 128(1)
  03f983c  ld 31, 136(1)
  03f9840  addi 1, 1, 144
  03f9844  blr

M1382_003f9850:   # 0x3f9850, 0xb0 bytes
  03f9850  stdu 1, -144(1)
  03f9854  mflr 0
  03f9858  std 0, 160(1)
  03f985c  std 31, 136(1)
  03f9860  std 30, 128(1)
  03f9864  ori 31, 3, 0
  03f9868  bl 0x48aa70
  03f986c  nop
  03f9870  ori 30, 3, 0
  03f9874  cmpwi 30, 0
  03f9878  bt 2, 0x3f9888
  03f987c  li 3, 12
  03f9880  stb 3, 32(31)
  03f9884  b 0x3f98e4
  03f9888  lbz 3, 32(31)
  03f988c  cmpwi 3, 12
  03f9890  bf 2, 0x3f98e4
  03f9894  li 3, 6
  03f9898  lbz 4, 83(31)
  03f989c  cmpwi 4, 7
  03f98a0  stb 3, 32(31)
  03f98a4  bt 2, 0x3f98e4
  03f98a8  lis 3, 64
  03f98ac  lis 4, 114
  03f98b0  addi 3, 3, -26552
  03f98b4  li 5, 0
  03f98b8  lfs 1, 0(3)
  03f98bc  lfs 2, -3056(4)
  03f98c0  ori 3, 31, 0
  03f98c4  fmuls 1, 2, 1
  03f98c8  li 4, 7
  03f98cc  fctiwz 1, 1
  03f98d0  stfd 1, 112(1)
  03f98d4  lwz 6, 116(1)
  03f98d8  extsw 6, 6
  03f98dc  bl 0xfddc0
  03f98e0  nop
  03f98e4  ori 3, 30, 0
  03f98e8  ld 0, 160(1)
  03f98ec  mtlr 0
  03f98f0  ld 30, 128(1)
  03f98f4  ld 31, 136(1)
  03f98f8  addi 1, 1, 144
  03f98fc  blr

M1382_003f9908:   # 0x3f9908, 0xb0 bytes
  03f9908  stdu 1, -144(1)
  03f990c  mflr 0
  03f9910  std 0, 160(1)
  03f9914  std 31, 136(1)
  03f9918  std 30, 128(1)
  03f991c  ori 31, 3, 0
  03f9920  bl 0x48acb8
  03f9924  nop
  03f9928  ori 30, 3, 0
  03f992c  cmpwi 30, 0
  03f9930  bt 2, 0x3f9940
  03f9934  li 3, 12
  03f9938  stb 3, 32(31)
  03f993c  b 0x3f999c
  03f9940  lbz 3, 32(31)
  03f9944  cmpwi 3, 12
  03f9948  bf 2, 0x3f999c
  03f994c  li 3, 6
  03f9950  lbz 4, 83(31)
  03f9954  cmpwi 4, 7
  03f9958  stb 3, 32(31)
  03f995c  bt 2, 0x3f999c
  03f9960  lis 3, 64
  03f9964  lis 4, 114
  03f9968  addi 3, 3, -26368
  03f996c  li 5, 0
  03f9970  lfs 1, 0(3)
  03f9974  lfs 2, -3056(4)
  03f9978  ori 3, 31, 0
  03f997c  fmuls 1, 2, 1
  03f9980  li 4, 7
  03f9984  fctiwz 1, 1
  03f9988  stfd 1, 112(1)
  03f998c  lwz 6, 116(1)
  03f9990  extsw 6, 6
  03f9994  bl 0xfddc0
  03f9998  nop
  03f999c  ori 3, 30, 0
  03f99a0  ld 0, 160(1)
  03f99a4  mtlr 0
  03f99a8  ld 30, 128(1)
  03f99ac  ld 31, 136(1)
  03f99b0  addi 1, 1, 144
  03f99b4  blr

M1382_003f99b8:   # 0x3f99b8, 0x38 bytes
  03f99b8  stdu 1, -128(1)
  03f99bc  mflr 0
  03f99c0  std 0, 144(1)
  03f99c4  std 31, 120(1)
  03f99c8  ori 31, 3, 0
  03f99cc  bl 0x48afe8
  03f99d0  nop
  03f99d4  li 4, 12
  03f99d8  stb 4, 32(31)
  03f99dc  ld 0, 144(1)
  03f99e0  mtlr 0
  03f99e4  ld 31, 120(1)
  03f99e8  addi 1, 1, 128
  03f99ec  blr

M1382_003f99f0:   # 0x3f99f0, 0x40 bytes
  03f99f0  cmpwi 3, 0
  03f99f4  bt 2, 0x3f9a28
  03f99f8  li 4, 0
  03f99fc  lwz 3, 120(3)
  03f9a00  li 5, 0
  03f9a04  subc 4, 4, 3
  03f9a08  addic 3, 3, 96
  03f9a0c  cntlzw 4, 4
  03f9a10  subc 5, 5, 3
  03f9a14  sldi 4, 4, 58
  03f9a18  sradi 4, 4, 63
  03f9a1c  and 4, 4, 5
  03f9a20  addc 3, 3, 4
  03f9a24  b 0x3f9a2c
  03f9a28  li 3, 0
  03f9a2c  blr

M1382_003f9a38:   # 0x3f9a38, 0x90 bytes
  03f9a38  stdu 1, -160(1)
  03f9a3c  mflr 0
  03f9a40  std 0, 176(1)
  03f9a44  stfd 30, 144(1)
  03f9a48  stfd 31, 152(1)
  03f9a4c  std 31, 136(1)
  03f9a50  lis 4, 64
  03f9a54  lwz 31, 120(3)
  03f9a58  std 29, 120(1)
  03f9a5c  li 5, 48
  03f9a60  addi 4, 4, -26064
  03f9a64  std 30, 128(1)
  03f9a68  lwz 29, 144(3)
  03f9a6c  li 30, 0
  03f9a70  rlwimi 29, 5, 24, 0, 7
  03f9a74  lfs 30, 0(4)
  03f9a78  lfs 31, 4(4)
  03f9a7c  fmr 1, 30
  03f9a80  addic 3, 31, 512
  03f9a84  fmr 2, 31
  03f9a88  ori 4, 29, 0
  03f9a8c  bl 0x119028
  03f9a90  nop
  03f9a94  addic 30, 30, 1
  03f9a98  addic 31, 31, 16
  03f9a9c  cmpwi 30, 3
  03f9aa0  bt 0, 0x3f9a7c
  03f9aa4  ld 0, 176(1)
  03f9aa8  mtlr 0
  03f9aac  lfd 30, 144(1)
  03f9ab0  lfd 31, 152(1)
  03f9ab4  ld 29, 120(1)
  03f9ab8  ld 30, 128(1)
  03f9abc  ld 31, 136(1)
  03f9ac0  addi 1, 1, 160
  03f9ac4  blr

M1382_003f9ac8:   # 0x3f9ac8, 0x14 bytes
  03f9ac8  lis 3, 133
  03f9acc  lis 4, 1
  03f9ad0  addic 3, 3, 17700
  03f9ad4  stw 4, 72(3)
  03f9ad8  blr

M1382_003f9ae0:   # 0x3f9ae0, 0xcc bytes
  03f9ae0  stdu 1, -144(1)
  03f9ae4  mflr 0
  03f9ae8  std 0, 160(1)
  03f9aec  std 30, 128(1)
  03f9af0  ori 30, 3, 0
  03f9af4  std 31, 136(1)
  03f9af8  li 3, 636
  03f9afc  std 29, 120(1)
  03f9b00  ori 31, 4, 0
  03f9b04  bl 0xefa28
  03f9b08  nop
  03f9b0c  ori 29, 3, 0
  03f9b10  cmpwi 29, 0
  03f9b14  bt 2, 0x3f9b8c
  03f9b18  li 3, 32
  03f9b1c  li 4, 1
  03f9b20  li 5, 64
  03f9b24  stb 3, 48(29)
  03f9b28  stb 4, 49(29)
  03f9b2c  lfs 1, 0(30)
  03f9b30  ori 3, 29, 0
  03f9b34  lwz 4, 120(29)
  03f9b38  stfs 1, 16(29)
  03f9b3c  lfs 1, 4(30)
  03f9b40  stfs 1, 20(29)
  03f9b44  lfs 1, 8(30)
  03f9b48  stfs 1, 24(29)
  03f9b4c  lfs 1, 12(30)
  03f9b50  sth 5, 50(29)
  03f9b54  stfs 1, 28(29)
  03f9b58  lfs 1, 0(31)
  03f9b5c  stfs 1, 0(4)
  03f9b60  lfs 1, 4(31)
  03f9b64  stfs 1, 4(4)
  03f9b68  lfs 1, 8(31)
  03f9b6c  stfs 1, 8(4)
  03f9b70  lfs 1, 12(31)
  03f9b74  stfs 1, 12(4)
  03f9b78  bl 0x10c000
  03f9b7c  nop
  03f9b80  ori 3, 29, 0
  03f9b84  bl 0xf31a8
  03f9b88  nop
  03f9b8c  ori 3, 29, 0
  03f9b90  ld 0, 160(1)
  03f9b94  mtlr 0
  03f9b98  ld 29, 120(1)
  03f9b9c  ld 30, 128(1)
  03f9ba0  ld 31, 136(1)
  03f9ba4  addi 1, 1, 144
  03f9ba8  blr
