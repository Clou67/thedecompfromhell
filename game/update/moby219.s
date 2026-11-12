# game/update/moby219.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M219_002f5a7c:   # 0x2f5a7c, 0x14 bytes
  02f5a7c  lis 3, 128
  02f5a80  lis 4, 1
  02f5a84  addic 3, 3, -4496
  02f5a88  stw 4, 72(3)
  02f5a8c  blr

UpdateMoby_219:   # 0x2f5b08, 0x1b68 bytes
  02f5b08  stdu 1, -688(1)
  02f5b0c  mflr 0
  02f5b10  std 0, 704(1)
  02f5b14  stfd 31, 680(1)
  02f5b18  addi 0, 1, 608
  02f5b1c  stvx 30, 0, 0
  02f5b20  addic 0, 0, 16
  02f5b24  stvx 31, 0, 0
  02f5b28  std 31, 672(1)
  02f5b2c  ori 31, 3, 0
  02f5b30  lis 4, 1
  02f5b34  std 30, 664(1)
  02f5b38  li 5, 0
  02f5b3c  std 29, 656(1)
  02f5b40  std 28, 648(1)
  02f5b44  std 27, 640(1)
  02f5b48  lwz 30, 120(31)
  02f5b4c  bl 0x10675c
  02f5b50  nop
  02f5b54  ori 29, 3, 0
  02f5b58  addic 3, 30, 310
  02f5b5c  bl 0x4fffb4
  02f5b60  nop
  02f5b64  cmpwi 29, 0
  02f5b68  bt 2, 0x2f602c
  02f5b6c  lbz 3, 32(31)
  02f5b70  cmpwi 1, 3, 6
  02f5b74  cmpwi 3, 4
  02f5b78  cror 2, 2, 6
  02f5b7c  bt 2, 0x2f602c
  02f5b80  lhz 3, 310(30)
  02f5b84  cmpwi 3, 0
  02f5b88  bf 2, 0x2f602c
  02f5b8c  li 4, 9
  02f5b90  lis 3, 15363
  02f5b94  lis 5, 47
  02f5b98  lis 6, 14851
  02f5b9c  stw 4, 116(30)
  02f5ba0  ori 3, 3, 4719
  02f5ba4  addi 5, 5, 23184
  02f5ba8  ori 4, 6, 4719
  02f5bac  lis 6, 114
  02f5bb0  stw 3, 96(30)
  02f5bb4  li 3, 0
  02f5bb8  stw 4, 100(30)
  02f5bbc  lfs 1, 0(5)
  02f5bc0  lfs 2, -3052(6)
  02f5bc4  lfs 3, 0(30)
  02f5bc8  fmuls 1, 2, 1
  02f5bcc  stfs 1, 104(30)
  02f5bd0  lfs 1, 4(5)
  02f5bd4  stb 3, 141(30)
  02f5bd8  fmuls 1, 2, 1
  02f5bdc  stfs 1, 108(30)
  02f5be0  lfs 1, 44(29)
  02f5be4  fsubs 1, 3, 1
  02f5be8  stfs 1, 0(30)
  02f5bec  lfs 4, 8(5)
  02f5bf0  fcmpu 0, 1, 4
  02f5bf4  cror 6, 1, 2
  02f5bf8  bt 6, 0x2f5e30
  02f5bfc  lwz 4, 44(29)
  02f5c00  lis 3, 16256
  02f5c04  srawi 5, 4, 31
  02f5c08  srwi 6, 5, 1
  02f5c0c  xor 4, 6, 4
  02f5c10  subc 4, 4, 5
  02f5c14  cmpw 4, 3
  02f5c18  bf 0, 0x2f5c28
  02f5c1c  li 3, 75
  02f5c20  stb 3, 71(30)
  02f5c24  b 0x2f602c
  02f5c28  li 3, 90
  02f5c2c  li 5, 4
  02f5c30  lis 6, 16512
  02f5c34  lis 4, 16656
  02f5c38  lis 7, 151
  02f5c3c  stb 3, 71(30)
  02f5c40  stb 5, 32(31)
  02f5c44  addic 3, 7, -25376
  02f5c48  stw 6, 160(30)
  02f5c4c  stw 4, 164(30)
  02f5c50  lfs 1, 16(31)
  02f5c54  lfs 2, 20(31)
  02f5c58  lfs 3, 128(3)
  02f5c5c  lfs 5, 132(3)
  02f5c60  fsubs 1, 1, 3
  02f5c64  fsubs 2, 2, 5
  02f5c68  lis 4, 115
  02f5c6c  addic 3, 30, 80
  02f5c70  addic 4, 4, 22784
  02f5c74  fabs 3, 1
  02f5c78  fabs 5, 2
  02f5c7c  stfs 1, 304(1)
  02f5c80  stfs 2, 308(1)
  02f5c84  fsubs 1, 3, 5
  02f5c88  stfs 1, 312(1)
  02f5c8c  lwz 5, 304(1)
  02f5c90  lfs 1, 304(1)
  02f5c94  lwz 6, 308(1)
  02f5c98  lfs 2, 308(1)
  02f5c9c  fabs 1, 1
  02f5ca0  lwz 7, 312(1)
  02f5ca4  rlwinm 6, 6, 3, 29, 29
  02f5ca8  lfs 6, 312(1)
  02f5cac  fabs 2, 2
  02f5cb0  rlwimi 6, 7, 2, 30, 30
  02f5cb4  fsub 7, 6, 4
  02f5cb8  fsub 6, 6, 4
  02f5cbc  rlwimi 6, 5, 4, 28, 28
  02f5cc0  ori 5, 4, 0
  02f5cc4  rlwimi 5, 6, 2, 26, 28
  02f5cc8  slwi 6, 6, 2
  02f5ccc  clrldi 5, 5, 32
  02f5cd0  fsel 5, 7, 1, 5
  02f5cd4  lfsx 1, 4, 6
  02f5cd8  fsel 3, 6, 2, 3
  02f5cdc  lfs 2, 4(5)
  02f5ce0  fcmpu 0, 5, 4
  02f5ce4  bt 1, 0x2f5cec
  02f5ce8  b 0x2f5e0c
  02f5cec  fsubs 6, 3, 5
  02f5cf0  fadds 3, 3, 5
  02f5cf4  addic 4, 1, 16
  02f5cf8  li 8, 2
  02f5cfc  addic 6, 4, 572
  02f5d00  addic 5, 4, 556
  02f5d04  mtctr 8
  02f5d08  fdivs 3, 6, 3
  02f5d0c  fmuls 5, 3, 3
  02f5d10  stfs 3, 584(1)
  02f5d14  stfs 3, 576(1)
  02f5d18  stfs 3, 580(1)
  02f5d1c  stfs 3, 572(1)
  02f5d20  lfs 7, 584(1)
  02f5d24  lfs 8, 576(1)
  02f5d28  lfs 9, 580(1)
  02f5d2c  fmuls 6, 5, 5
  02f5d30  fmuls 8, 8, 5
  02f5d34  fmuls 7, 7, 6
  02f5d38  fmuls 3, 6, 6
  02f5d3c  fmuls 6, 9, 6
  02f5d40  stfs 8, 576(1)
  02f5d44  fmuls 5, 7, 5
  02f5d48  stfs 6, 580(1)
  02f5d4c  stfs 5, 584(1)
  02f5d50  lfs 5, 556(4)
  02f5d54  fmuls 5, 5, 3
  02f5d58  stfs 5, 572(4)
  02f5d5c  lfs 5, 4(5)
  02f5d60  addic 5, 5, 8
  02f5d64  fmuls 5, 5, 3
  02f5d68  addic 4, 4, 8
  02f5d6c  stfs 5, 4(6)
  02f5d70  addic 6, 6, 8
  02f5d74  bdnz 0x2f5d50
  02f5d78  li 6, 4
  02f5d7c  ori 4, 1, 0
  02f5d80  mtctr 6
  02f5d84  lis 5, 115
  02f5d88  addic 6, 4, 572
  02f5d8c  addic 5, 5, 22752
  02f5d90  ori 7, 6, 0
  02f5d94  lfs 3, 572(4)
  02f5d98  lfs 5, 0(5)
  02f5d9c  fmuls 3, 3, 5
  02f5da0  lfs 5, 4(5)
  02f5da4  addic 5, 5, 8
  02f5da8  stfs 3, 572(4)
  02f5dac  lfs 3, 4(6)
  02f5db0  addic 4, 4, 8
  02f5db4  fmuls 3, 3, 5
  02f5db8  stfs 3, 4(6)
  02f5dbc  addic 6, 6, 8
  02f5dc0  bdnz 0x2f5d94
  02f5dc4  ori 4, 1, 0
  02f5dc8  mtctr 8
  02f5dcc  lfs 3, 572(4)
  02f5dd0  fadds 3, 4, 3
  02f5dd4  addic 4, 4, 16
  02f5dd8  lfs 4, 4(7)
  02f5ddc  lfs 5, 8(7)
  02f5de0  lfs 6, 12(7)
  02f5de4  addic 7, 7, 16
  02f5de8  fadds 3, 3, 4
  02f5dec  fadds 4, 3, 5
  02f5df0  fadds 4, 4, 6
  02f5df4  bdnz 0x2f5dcc
  02f5df8  lis 4, 47
  02f5dfc  addi 4, 4, 23184
  02f5e00  lfs 3, 12(4)
  02f5e04  fadds 4, 4, 3
  02f5e08  fmadds 4, 4, 1, 2
  02f5e0c  ori 4, 3, 0
  02f5e10  ori 3, 31, 0
  02f5e14  fmr 1, 4
  02f5e18  li 6, 5
  02f5e1c  li 7, 3
  02f5e20  li 8, 0
  02f5e24  bl 0x10ad80
  02f5e28  nop
  02f5e2c  b 0x2f602c
  02f5e30  li 3, 6
  02f5e34  lis 4, 16384
  02f5e38  lis 5, 16640
  02f5e3c  lis 6, 151
  02f5e40  stb 3, 32(31)
  02f5e44  addic 3, 6, -25376
  02f5e48  stw 4, 160(30)
  02f5e4c  stw 5, 164(30)
  02f5e50  lfs 1, 16(31)
  02f5e54  lfs 2, 20(31)
  02f5e58  lfs 3, 128(3)
  02f5e5c  lfs 5, 132(3)
  02f5e60  fsubs 1, 1, 3
  02f5e64  fsubs 2, 2, 5
  02f5e68  lis 4, 115
  02f5e6c  addic 3, 30, 80
  02f5e70  addic 4, 4, 22784
  02f5e74  fabs 3, 1
  02f5e78  fabs 5, 2
  02f5e7c  stfs 1, 292(1)
  02f5e80  stfs 2, 296(1)
  02f5e84  fsubs 1, 3, 5
  02f5e88  stfs 1, 300(1)
  02f5e8c  lwz 5, 292(1)
  02f5e90  lfs 1, 292(1)
  02f5e94  lwz 6, 296(1)
  02f5e98  lfs 2, 296(1)
  02f5e9c  fabs 1, 1
  02f5ea0  lwz 7, 300(1)
  02f5ea4  rlwinm 6, 6, 3, 29, 29
  02f5ea8  lfs 6, 300(1)
  02f5eac  fabs 2, 2
  02f5eb0  rlwimi 6, 7, 2, 30, 30
  02f5eb4  fsub 7, 6, 4
  02f5eb8  fsub 6, 6, 4
  02f5ebc  rlwimi 6, 5, 4, 28, 28
  02f5ec0  ori 5, 4, 0
  02f5ec4  rlwimi 5, 6, 2, 26, 28
  02f5ec8  slwi 6, 6, 2
  02f5ecc  clrldi 5, 5, 32
  02f5ed0  fsel 5, 7, 1, 5
  02f5ed4  lfsx 1, 4, 6
  02f5ed8  fsel 3, 6, 2, 3
  02f5edc  lfs 2, 4(5)
  02f5ee0  fcmpu 0, 5, 4
  02f5ee4  bt 1, 0x2f5eec
  02f5ee8  b 0x2f600c
  02f5eec  fsubs 6, 3, 5
  02f5ef0  fadds 3, 3, 5
  02f5ef4  addic 4, 1, 16
  02f5ef8  li 8, 2
  02f5efc  addic 6, 4, 540
  02f5f00  addic 5, 4, 524
  02f5f04  mtctr 8
  02f5f08  fdivs 3, 6, 3
  02f5f0c  fmuls 5, 3, 3
  02f5f10  stfs 3, 552(1)
  02f5f14  stfs 3, 544(1)
  02f5f18  stfs 3, 548(1)
  02f5f1c  stfs 3, 540(1)
  02f5f20  lfs 7, 552(1)
  02f5f24  lfs 8, 544(1)
  02f5f28  lfs 9, 548(1)
  02f5f2c  fmuls 6, 5, 5
  02f5f30  fmuls 8, 8, 5
  02f5f34  fmuls 7, 7, 6
  02f5f38  fmuls 3, 6, 6
  02f5f3c  fmuls 6, 9, 6
  02f5f40  stfs 8, 544(1)
  02f5f44  fmuls 5, 7, 5
  02f5f48  stfs 6, 548(1)
  02f5f4c  stfs 5, 552(1)
  02f5f50  lfs 5, 524(4)
  02f5f54  fmuls 5, 5, 3
  02f5f58  stfs 5, 540(4)
  02f5f5c  lfs 5, 4(5)
  02f5f60  addic 5, 5, 8
  02f5f64  fmuls 5, 5, 3
  02f5f68  addic 4, 4, 8
  02f5f6c  stfs 5, 4(6)
  02f5f70  addic 6, 6, 8
  02f5f74  bdnz 0x2f5f50
  02f5f78  li 6, 4
  02f5f7c  ori 4, 1, 0
  02f5f80  mtctr 6
  02f5f84  lis 5, 115
  02f5f88  addic 6, 4, 540
  02f5f8c  addic 5, 5, 22752
  02f5f90  ori 7, 6, 0
  02f5f94  lfs 3, 540(4)
  02f5f98  lfs 5, 0(5)
  02f5f9c  fmuls 3, 3, 5
  02f5fa0  lfs 5, 4(5)
  02f5fa4  addic 5, 5, 8
  02f5fa8  stfs 3, 540(4)
  02f5fac  lfs 3, 4(6)
  02f5fb0  addic 4, 4, 8
  02f5fb4  fmuls 3, 3, 5
  02f5fb8  stfs 3, 4(6)
  02f5fbc  addic 6, 6, 8
  02f5fc0  bdnz 0x2f5f94
  02f5fc4  ori 4, 1, 0
  02f5fc8  mtctr 8
  02f5fcc  lfs 3, 540(4)
  02f5fd0  fadds 3, 4, 3
  02f5fd4  addic 4, 4, 16
  02f5fd8  lfs 4, 4(7)
  02f5fdc  lfs 5, 8(7)
  02f5fe0  lfs 6, 12(7)
  02f5fe4  addic 7, 7, 16
  02f5fe8  fadds 3, 3, 4
  02f5fec  fadds 4, 3, 5
  02f5ff0  fadds 4, 4, 6
  02f5ff4  bdnz 0x2f5fcc
  02f5ff8  lis 4, 47
  02f5ffc  addi 4, 4, 23184
  02f6000  lfs 3, 12(4)
  02f6004  fadds 4, 4, 3
  02f6008  fmadds 4, 4, 1, 2
  02f600c  ori 4, 3, 0
  02f6010  ori 3, 31, 0
  02f6014  fmr 1, 4
  02f6018  li 6, 6
  02f601c  li 7, 3
  02f6020  li 8, 0
  02f6024  bl 0x10ad80
  02f6028  nop
  02f602c  li 4, 255
  02f6030  lbz 3, 32(31)
  02f6034  cmpwi 3, 6
  02f6038  stb 4, 164(31)
  02f603c  cmpwi 1, 3, 5
  02f6040  cmpwi 6, 3, 4
  02f6044  cmpwi 7, 3, 3
  02f6048  bt 2, 0x2f75e0
  02f604c  bt 6, 0x2f7374
  02f6050  bt 26, 0x2f72c8
  02f6054  bt 30, 0x2f6af4
  02f6058  cmpwi 3, 2
  02f605c  bt 2, 0x2f6544
  02f6060  cmpwi 3, 1
  02f6064  bt 2, 0x2f60f8
  02f6068  cmpwi 3, 0
  02f606c  bf 2, 0x2f7628
  02f6070  lis 3, 47
  02f6074  addi 29, 3, 23184
  02f6078  lwz 3, 36(31)
  02f607c  lfs 1, 16(29)
  02f6080  lfs 2, 36(3)
  02f6084  addic 3, 30, 176
  02f6088  fmuls 1, 2, 1
  02f608c  stfs 1, 44(31)
  02f6090  bl 0x100f8c
  02f6094  nop
  02f6098  lis 3, 16384
  02f609c  li 4, 909
  02f60a0  lis 5, 114
  02f60a4  stw 3, 188(30)
  02f60a8  stw 3, 184(30)
  02f60ac  stw 4, 176(30)
  02f60b0  lfs 1, 20(29)
  02f60b4  li 3, 0
  02f60b8  lfs 2, -3052(5)
  02f60bc  li 4, 1
  02f60c0  fmuls 1, 2, 1
  02f60c4  sth 3, 310(30)
  02f60c8  stfs 1, 212(30)
  02f60cc  lbz 3, 83(31)
  02f60d0  stb 4, 32(31)
  02f60d4  cmpwi 3, 3
  02f60d8  bt 2, 0x2f7628
  02f60dc  ori 3, 31, 0
  02f60e0  li 4, 3
  02f60e4  li 5, 0
  02f60e8  li 6, 3
  02f60ec  bl 0xfddc0
  02f60f0  nop
  02f60f4  b 0x2f7628
  02f60f8  lis 29, 151
  02f60fc  lfs 1, 16(31)
  02f6100  lfs 2, 20(31)
  02f6104  addic 29, 29, -25376
  02f6108  lis 3, 47
  02f610c  addi 4, 3, 23184
  02f6110  lfs 3, 128(29)
  02f6114  lfs 4, 132(29)
  02f6118  fsubs 1, 3, 1
  02f611c  fsubs 2, 4, 2
  02f6120  lis 3, 115
  02f6124  addic 3, 3, 22784
  02f6128  fabs 3, 1
  02f612c  fabs 4, 2
  02f6130  stfs 1, 280(1)
  02f6134  stfs 2, 284(1)
  02f6138  fsubs 5, 3, 4
  02f613c  stfs 5, 288(1)
  02f6140  lwz 5, 280(1)
  02f6144  lfs 6, 8(4)
  02f6148  lfs 7, 280(1)
  02f614c  lwz 4, 284(1)
  02f6150  fabs 9, 7
  02f6154  lfs 7, 284(1)
  02f6158  lwz 6, 288(1)
  02f615c  rlwinm 4, 4, 3, 29, 29
  02f6160  fabs 8, 7
  02f6164  lfs 7, 288(1)
  02f6168  rlwimi 4, 6, 2, 30, 30
  02f616c  fsub 10, 7, 6
  02f6170  rlwimi 4, 5, 4, 28, 28
  02f6174  fsub 11, 7, 6
  02f6178  ori 5, 3, 0
  02f617c  rlwimi 5, 4, 2, 26, 28
  02f6180  slwi 4, 4, 2
  02f6184  clrldi 5, 5, 32
  02f6188  fsel 9, 10, 9, 4
  02f618c  lfsx 31, 3, 4
  02f6190  lfs 7, 4(5)
  02f6194  fsel 8, 11, 8, 3
  02f6198  fcmpu 0, 9, 6
  02f619c  bt 1, 0x2f61a8
  02f61a0  fmr 31, 6
  02f61a4  b 0x2f62cc
  02f61a8  fsubs 10, 8, 9
  02f61ac  fadds 8, 8, 9
  02f61b0  addic 4, 1, 16
  02f61b4  li 7, 2
  02f61b8  addic 5, 4, 492
  02f61bc  addic 6, 4, 508
  02f61c0  mtctr 7
  02f61c4  fdivs 8, 10, 8
  02f61c8  fmuls 9, 8, 8
  02f61cc  stfs 8, 520(1)
  02f61d0  stfs 8, 512(1)
  02f61d4  stfs 8, 516(1)
  02f61d8  stfs 8, 508(1)
  02f61dc  lfs 11, 520(1)
  02f61e0  lfs 12, 512(1)
  02f61e4  lfs 13, 516(1)
  02f61e8  fmuls 10, 9, 9
  02f61ec  fmuls 12, 12, 9
  02f61f0  fmuls 11, 11, 10
  02f61f4  fmuls 8, 10, 10
  02f61f8  fmuls 10, 13, 10
  02f61fc  stfs 12, 512(1)
  02f6200  fmuls 9, 11, 9
  02f6204  stfs 10, 516(1)
  02f6208  stfs 9, 520(1)
  02f620c  lfs 9, 492(4)
  02f6210  fmuls 9, 9, 8
  02f6214  stfs 9, 508(4)
  02f6218  lfs 9, 4(5)
  02f621c  addic 4, 4, 8
  02f6220  addic 5, 5, 8
  02f6224  fmuls 9, 9, 8
  02f6228  stfs 9, 4(6)
  02f622c  addic 6, 6, 8
  02f6230  bdnz 0x2f620c
  02f6234  li 6, 4
  02f6238  ori 4, 1, 0
  02f623c  mtctr 6
  02f6240  lis 5, 115
  02f6244  addic 6, 4, 508
  02f6248  addic 5, 5, 22752
  02f624c  ori 8, 6, 0
  02f6250  lfs 8, 508(4)
  02f6254  lfs 9, 0(5)
  02f6258  fmuls 8, 8, 9
  02f625c  lfs 9, 4(5)
  02f6260  addic 5, 5, 8
  02f6264  stfs 8, 508(4)
  02f6268  lfs 8, 4(6)
  02f626c  addic 4, 4, 8
  02f6270  fmuls 8, 8, 9
  02f6274  stfs 8, 4(6)
  02f6278  addic 6, 6, 8
  02f627c  bdnz 0x2f6250
  02f6280  fmr 8, 6
  02f6284  ori 4, 1, 0
  02f6288  mtctr 7
  02f628c  lfs 9, 508(4)
  02f6290  fadds 8, 8, 9
  02f6294  addic 4, 4, 16
  02f6298  lfs 9, 4(8)
  02f629c  lfs 10, 8(8)
  02f62a0  lfs 11, 12(8)
  02f62a4  addic 8, 8, 16
  02f62a8  fadds 8, 8, 9
  02f62ac  fadds 8, 8, 10
  02f62b0  fadds 8, 8, 11
  02f62b4  bdnz 0x2f628c
  02f62b8  lis 4, 47
  02f62bc  addi 4, 4, 23184
  02f62c0  lfs 9, 12(4)
  02f62c4  fadds 8, 8, 9
  02f62c8  fmadds 31, 8, 31, 7
  02f62cc  stfs 1, 268(1)
  02f62d0  stfs 5, 276(1)
  02f62d4  stfs 2, 272(1)
  02f62d8  lfs 1, 72(31)
  02f62dc  lwz 4, 268(1)
  02f62e0  fsubs 31, 31, 1
  02f62e4  lwz 5, 276(1)
  02f62e8  lfs 1, 276(1)
  02f62ec  lfs 2, 268(1)
  02f62f0  fsub 5, 1, 6
  02f62f4  fabs 2, 2
  02f62f8  lwz 6, 272(1)
  02f62fc  lfs 7, 272(1)
  02f6300  rlwinm 6, 6, 3, 29, 29
  02f6304  fabs 7, 7
  02f6308  rlwimi 6, 5, 2, 30, 30
  02f630c  rlwimi 6, 4, 4, 28, 28
  02f6310  ori 4, 3, 0
  02f6314  slwi 5, 6, 2
  02f6318  fsel 4, 5, 2, 4
  02f631c  rlwimi 4, 6, 2, 26, 28
  02f6320  fsub 5, 1, 6
  02f6324  clrldi 4, 4, 32
  02f6328  lfsx 1, 3, 5
  02f632c  lfs 2, 4(4)
  02f6330  fcmpu 0, 4, 6
  02f6334  fsel 3, 5, 7, 3
  02f6338  bt 1, 0x2f6340
  02f633c  b 0x2f6460
  02f6340  fsubs 5, 3, 4
  02f6344  fadds 3, 3, 4
  02f6348  addic 3, 1, 16
  02f634c  li 6, 2
  02f6350  addic 4, 3, 460
  02f6354  addic 5, 3, 476
  02f6358  mtctr 6
  02f635c  fdivs 3, 5, 3
  02f6360  fmuls 4, 3, 3
  02f6364  stfs 3, 488(1)
  02f6368  stfs 3, 480(1)
  02f636c  stfs 3, 484(1)
  02f6370  stfs 3, 476(1)
  02f6374  lfs 7, 488(1)
  02f6378  lfs 8, 480(1)
  02f637c  lfs 9, 484(1)
  02f6380  fmuls 5, 4, 4
  02f6384  fmuls 8, 8, 4
  02f6388  fmuls 7, 7, 5
  02f638c  fmuls 3, 5, 5
  02f6390  fmuls 5, 9, 5
  02f6394  stfs 8, 480(1)
  02f6398  fmuls 4, 7, 4
  02f639c  stfs 5, 484(1)
  02f63a0  stfs 4, 488(1)
  02f63a4  lfs 4, 460(3)
  02f63a8  fmuls 4, 4, 3
  02f63ac  stfs 4, 476(3)
  02f63b0  lfs 4, 4(4)
  02f63b4  addic 3, 3, 8
  02f63b8  addic 4, 4, 8
  02f63bc  fmuls 4, 4, 3
  02f63c0  stfs 4, 4(5)
  02f63c4  addic 5, 5, 8
  02f63c8  bdnz 0x2f63a4
  02f63cc  li 5, 4
  02f63d0  ori 3, 1, 0
  02f63d4  mtctr 5
  02f63d8  lis 4, 115
  02f63dc  addic 5, 3, 476
  02f63e0  addic 4, 4, 22752
  02f63e4  ori 7, 5, 0
  02f63e8  lfs 3, 476(3)
  02f63ec  lfs 4, 0(4)
  02f63f0  fmuls 3, 3, 4
  02f63f4  lfs 4, 4(4)
  02f63f8  addic 4, 4, 8
  02f63fc  stfs 3, 476(3)
  02f6400  lfs 3, 4(5)
  02f6404  addic 3, 3, 8
  02f6408  fmuls 3, 3, 4
  02f640c  stfs 3, 4(5)
  02f6410  addic 5, 5, 8
  02f6414  bdnz 0x2f63e8
  02f6418  ori 3, 1, 0
  02f641c  mtctr 6
  02f6420  lfs 3, 476(3)
  02f6424  lfs 4, 4(7)
  02f6428  fadds 3, 6, 3
  02f642c  lfs 5, 8(7)
  02f6430  lfs 6, 12(7)
  02f6434  addic 3, 3, 16
  02f6438  addic 7, 7, 16
  02f643c  fadds 3, 3, 4
  02f6440  fadds 3, 3, 5
  02f6444  fadds 6, 3, 6
  02f6448  bdnz 0x2f6420
  02f644c  lis 3, 47
  02f6450  addi 3, 3, 23184
  02f6454  lfs 3, 12(3)
  02f6458  fadds 6, 6, 3
  02f645c  fmadds 6, 6, 1, 2
  02f6460  lis 3, 47
  02f6464  fmr 1, 6
  02f6468  addic 5, 30, 304
  02f646c  addi 28, 3, 23184
  02f6470  ori 3, 31, 0
  02f6474  lfs 2, 24(28)
  02f6478  lfs 3, 28(28)
  02f647c  lfs 4, 32(28)
  02f6480  bl 0xff2e8
  02f6484  nop
  02f6488  lfs 1, 20(31)
  02f648c  lfs 2, 132(29)
  02f6490  lfs 3, 16(31)
  02f6494  fsubs 1, 1, 2
  02f6498  lfs 2, 128(29)
  02f649c  fsubs 2, 3, 2
  02f64a0  fmuls 1, 1, 1
  02f64a4  fmadds 1, 2, 2, 1
  02f64a8  lfs 2, 36(28)
  02f64ac  fsqrts 1, 1
  02f64b0  fcmpu 0, 1, 2
  02f64b4  cror 6, 1, 2
  02f64b8  bt 6, 0x2f7628
  02f64bc  lis 3, 47
  02f64c0  addi 3, 3, 23184
  02f64c4  lfs 1, 40(3)
  02f64c8  fcmpu 0, 31, 1
  02f64cc  cror 6, 1, 2
  02f64d0  bt 6, 0x2f7628
  02f64d4  lis 3, 47
  02f64d8  addi 3, 3, 23184
  02f64dc  lfs 1, 44(3)
  02f64e0  fcmpu 0, 31, 1
  02f64e4  cror 6, 0, 2
  02f64e8  bt 6, 0x2f7628
  02f64ec  lfs 1, 24(31)
  02f64f0  lfs 2, 136(29)
  02f64f4  lis 3, 47
  02f64f8  fsubs 1, 1, 2
  02f64fc  addi 3, 3, 23184
  02f6500  lfs 2, 48(3)
  02f6504  fabs 1, 1
  02f6508  fcmpu 0, 1, 2
  02f650c  cror 6, 1, 2
  02f6510  bt 6, 0x2f7628
  02f6514  li 3, 2
  02f6518  lbz 4, 83(31)
  02f651c  cmpwi 4, 1
  02f6520  stb 3, 32(31)
  02f6524  bt 2, 0x2f7628
  02f6528  ori 3, 31, 0
  02f652c  li 4, 1
  02f6530  li 5, 0
  02f6534  li 6, 3
  02f6538  bl 0xfddc0
  02f653c  nop
  02f6540  b 0x2f7628
  02f6544  lis 28, 151
  02f6548  lfs 1, 16(31)
  02f654c  addic 28, 28, -25376
  02f6550  lfs 2, 20(31)
  02f6554  lis 3, 47
  02f6558  addi 3, 3, 23184
  02f655c  lfs 3, 128(28)
  02f6560  lfs 4, 132(28)
  02f6564  fsubs 1, 3, 1
  02f6568  fsubs 2, 4, 2
  02f656c  lis 29, 115
  02f6570  addic 29, 29, 22784
  02f6574  fabs 5, 1
  02f6578  fabs 4, 2
  02f657c  stfs 1, 256(1)
  02f6580  stfs 2, 260(1)
  02f6584  fsubs 1, 5, 4
  02f6588  stfs 1, 264(1)
  02f658c  lwz 4, 256(1)
  02f6590  lfs 31, 8(3)
  02f6594  lfs 1, 256(1)
  02f6598  lwz 3, 260(1)
  02f659c  lfs 2, 260(1)
  02f65a0  lwz 5, 264(1)
  02f65a4  rlwinm 3, 3, 3, 29, 29
  02f65a8  lfs 3, 264(1)
  02f65ac  fabs 1, 1
  02f65b0  rlwimi 3, 5, 2, 30, 30
  02f65b4  fabs 2, 2
  02f65b8  fsub 6, 3, 31
  02f65bc  rlwimi 3, 4, 4, 28, 28
  02f65c0  fsub 7, 3, 31
  02f65c4  ori 4, 29, 0
  02f65c8  rlwimi 4, 3, 2, 26, 28
  02f65cc  slwi 3, 3, 2
  02f65d0  clrldi 4, 4, 32
  02f65d4  fsel 4, 6, 1, 4
  02f65d8  lfsx 3, 29, 3
  02f65dc  lfs 1, 4(4)
  02f65e0  fsel 2, 7, 2, 5
  02f65e4  fcmpu 0, 4, 31
  02f65e8  bt 1, 0x2f65f4
  02f65ec  fmr 3, 31
  02f65f0  b 0x2f6718
  02f65f4  fsubs 5, 2, 4
  02f65f8  fadds 2, 2, 4
  02f65fc  addic 3, 1, 16
  02f6600  li 6, 2
  02f6604  addic 5, 3, 444
  02f6608  addic 4, 3, 428
  02f660c  mtctr 6
  02f6610  fdivs 2, 5, 2
  02f6614  fmuls 4, 2, 2
  02f6618  stfs 2, 456(1)
  02f661c  stfs 2, 448(1)
  02f6620  stfs 2, 452(1)
  02f6624  stfs 2, 444(1)
  02f6628  lfs 6, 456(1)
  02f662c  lfs 7, 448(1)
  02f6630  lfs 8, 452(1)
  02f6634  fmuls 5, 4, 4
  02f6638  fmuls 7, 7, 4
  02f663c  fmuls 6, 6, 5
  02f6640  fmuls 2, 5, 5
  02f6644  fmuls 5, 8, 5
  02f6648  stfs 7, 448(1)
  02f664c  fmuls 4, 6, 4
  02f6650  stfs 5, 452(1)
  02f6654  stfs 4, 456(1)
  02f6658  lfs 4, 428(3)
  02f665c  fmuls 4, 4, 2
  02f6660  stfs 4, 444(3)
  02f6664  lfs 4, 4(4)
  02f6668  addic 4, 4, 8
  02f666c  fmuls 4, 4, 2
  02f6670  addic 3, 3, 8
  02f6674  stfs 4, 4(5)
  02f6678  addic 5, 5, 8
  02f667c  bdnz 0x2f6658
  02f6680  li 5, 4
  02f6684  ori 3, 1, 0
  02f6688  mtctr 5
  02f668c  lis 4, 115
  02f6690  addic 5, 3, 444
  02f6694  addic 4, 4, 22752
  02f6698  ori 7, 5, 0
  02f669c  lfs 2, 444(3)
  02f66a0  lfs 4, 0(4)
  02f66a4  fmuls 2, 2, 4
  02f66a8  lfs 4, 4(4)
  02f66ac  addic 4, 4, 8
  02f66b0  stfs 2, 444(3)
  02f66b4  lfs 2, 4(5)
  02f66b8  addic 3, 3, 8
  02f66bc  fmuls 2, 2, 4
  02f66c0  stfs 2, 4(5)
  02f66c4  addic 5, 5, 8
  02f66c8  bdnz 0x2f669c
  02f66cc  ori 3, 1, 0
  02f66d0  fmr 2, 31
  02f66d4  mtctr 6
  02f66d8  lfs 4, 444(3)
  02f66dc  fadds 2, 2, 4
  02f66e0  lfs 4, 4(7)
  02f66e4  addic 3, 3, 16
  02f66e8  lfs 5, 8(7)
  02f66ec  lfs 6, 12(7)
  02f66f0  addic 7, 7, 16
  02f66f4  fadds 2, 2, 4
  02f66f8  fadds 2, 2, 5
  02f66fc  fadds 2, 2, 6
  02f6700  bdnz 0x2f66d8
  02f6704  lis 3, 47
  02f6708  addi 3, 3, 23184
  02f670c  lfs 4, 12(3)
  02f6710  fadds 2, 2, 4
  02f6714  fmadds 3, 2, 3, 1
  02f6718  lis 3, 47
  02f671c  fmr 1, 3
  02f6720  addic 5, 30, 304
  02f6724  addi 27, 3, 23184
  02f6728  ori 3, 31, 0
  02f672c  lfs 5, 28(27)
  02f6730  lfs 2, 24(27)
  02f6734  lfs 4, 32(27)
  02f6738  fmr 3, 5
  02f673c  bl 0xff2e8
  02f6740  nop
  02f6744  lfs 1, 52(27)
  02f6748  lfs 2, 56(27)
  02f674c  lfs 3, 72(31)
  02f6750  lfs 4, 60(27)
  02f6754  fadds 1, 3, 1
  02f6758  fsubs 5, 2, 3
  02f675c  fsubs 6, 4, 3
  02f6760  li 5, 0
  02f6764  addic 4, 30, 176
  02f6768  ori 3, 31, 0
  02f676c  fsubs 2, 2, 1
  02f6770  fsub 7, 3, 5
  02f6774  fsubs 4, 4, 1
  02f6778  addic 6, 1, 128
  02f677c  fsub 9, 1, 2
  02f6780  fsel 3, 7, 5, 3
  02f6784  lfs 5, 64(27)
  02f6788  fsel 1, 9, 2, 1
  02f678c  fsub 2, 6, 3
  02f6790  fsub 8, 4, 1
  02f6794  fsel 2, 2, 6, 3
  02f6798  lfs 3, 68(27)
  02f679c  lfs 6, 72(27)
  02f67a0  lfs 7, 76(27)
  02f67a4  fsel 1, 8, 4, 1
  02f67a8  fmuls 4, 2, 2
  02f67ac  fmuls 8, 1, 1
  02f67b0  fmuls 9, 4, 2
  02f67b4  fmuls 11, 8, 1
  02f67b8  fmuls 12, 4, 9
  02f67bc  fmadds 2, 9, 5, 2
  02f67c0  lfs 9, 48(27)
  02f67c4  stw 5, 120(1)
  02f67c8  addic 5, 1, 112
  02f67cc  fmuls 10, 8, 11
  02f67d0  fmadds 1, 11, 5, 1
  02f67d4  fmuls 5, 4, 12
  02f67d8  fmadds 2, 12, 3, 2
  02f67dc  fmuls 11, 8, 10
  02f67e0  fmadds 1, 10, 3, 1
  02f67e4  fmuls 3, 4, 5
  02f67e8  fmadds 2, 5, 6, 2
  02f67ec  fmuls 4, 8, 11
  02f67f0  fmadds 1, 11, 6, 1
  02f67f4  fmadds 2, 3, 7, 2
  02f67f8  fmadds 1, 4, 7, 1
  02f67fc  fmuls 2, 2, 9
  02f6800  fmuls 3, 1, 9
  02f6804  stfs 2, 116(1)
  02f6808  lfs 1, 80(27)
  02f680c  stfs 3, 112(1)
  02f6810  bl 0x101058
  02f6814  nop
  02f6818  lfs 4, 20(31)
  02f681c  lfs 5, 132(28)
  02f6820  lfs 1, 16(31)
  02f6824  fsubs 3, 4, 5
  02f6828  lfs 2, 128(28)
  02f682c  fsubs 6, 1, 2
  02f6830  lfs 7, 4(27)
  02f6834  fmuls 3, 3, 3
  02f6838  fmadds 3, 6, 6, 3
  02f683c  fsqrts 6, 3
  02f6840  lfs 3, 72(31)
  02f6844  fcmpu 0, 6, 7
  02f6848  cror 6, 1, 2
  02f684c  bt 6, 0x2f6a98
  02f6850  fsubs 1, 2, 1
  02f6854  fsubs 2, 5, 4
  02f6858  fabs 4, 1
  02f685c  fabs 5, 2
  02f6860  stfs 1, 244(1)
  02f6864  stfs 2, 248(1)
  02f6868  fsubs 1, 4, 5
  02f686c  stfs 1, 252(1)
  02f6870  lwz 3, 244(1)
  02f6874  lfs 1, 244(1)
  02f6878  lwz 4, 248(1)
  02f687c  lfs 2, 248(1)
  02f6880  lwz 5, 252(1)
  02f6884  rlwinm 4, 4, 3, 29, 29
  02f6888  fabs 6, 2
  02f688c  lfs 2, 252(1)
  02f6890  fabs 1, 1
  02f6894  rlwimi 4, 5, 2, 30, 30
  02f6898  fsub 7, 2, 31
  02f689c  fsub 8, 2, 31
  02f68a0  rlwimi 4, 3, 4, 28, 28
  02f68a4  ori 3, 29, 0
  02f68a8  rlwimi 3, 4, 2, 26, 28
  02f68ac  slwi 4, 4, 2
  02f68b0  clrldi 3, 3, 32
  02f68b4  fsel 5, 7, 1, 5
  02f68b8  lfsx 1, 29, 4
  02f68bc  fsel 4, 8, 6, 4
  02f68c0  lfs 2, 4(3)
  02f68c4  fcmpu 0, 5, 31
  02f68c8  bt 1, 0x2f68d0
  02f68cc  b 0x2f69f0
  02f68d0  fsubs 6, 4, 5
  02f68d4  fadds 4, 4, 5
  02f68d8  addic 3, 1, 16
  02f68dc  li 7, 2
  02f68e0  addic 4, 3, 396
  02f68e4  addic 5, 3, 412
  02f68e8  mtctr 7
  02f68ec  fdivs 4, 6, 4
  02f68f0  fmuls 5, 4, 4
  02f68f4  stfs 4, 424(1)
  02f68f8  stfs 4, 416(1)
  02f68fc  stfs 4, 420(1)
  02f6900  stfs 4, 412(1)
  02f6904  lfs 7, 424(1)
  02f6908  lfs 8, 416(1)
  02f690c  lfs 9, 420(1)
  02f6910  fmuls 6, 5, 5
  02f6914  fmuls 8, 8, 5
  02f6918  fmuls 7, 7, 6
  02f691c  fmuls 4, 6, 6
  02f6920  fmuls 6, 9, 6
  02f6924  stfs 8, 416(1)
  02f6928  fmuls 5, 7, 5
  02f692c  stfs 6, 420(1)
  02f6930  stfs 5, 424(1)
  02f6934  lfs 5, 396(3)
  02f6938  fmuls 5, 5, 4
  02f693c  stfs 5, 412(3)
  02f6940  lfs 5, 4(4)
  02f6944  addic 3, 3, 8
  02f6948  addic 4, 4, 8
  02f694c  fmuls 5, 5, 4
  02f6950  stfs 5, 4(5)
  02f6954  addic 5, 5, 8
  02f6958  bdnz 0x2f6934
  02f695c  li 5, 4
  02f6960  ori 3, 1, 0
  02f6964  mtctr 5
  02f6968  lis 4, 115
  02f696c  addic 5, 3, 412
  02f6970  addic 4, 4, 22752
  02f6974  ori 6, 5, 0
  02f6978  lfs 4, 412(3)
  02f697c  lfs 5, 0(4)
  02f6980  fmuls 4, 4, 5
  02f6984  lfs 5, 4(4)
  02f6988  addic 4, 4, 8
  02f698c  stfs 4, 412(3)
  02f6990  lfs 4, 4(5)
  02f6994  addic 3, 3, 8
  02f6998  fmuls 4, 4, 5
  02f699c  stfs 4, 4(5)
  02f69a0  addic 5, 5, 8
  02f69a4  bdnz 0x2f6978
  02f69a8  ori 3, 1, 0
  02f69ac  mtctr 7
  02f69b0  lfs 4, 412(3)
  02f69b4  lfs 5, 4(6)
  02f69b8  fadds 4, 31, 4
  02f69bc  lfs 6, 8(6)
  02f69c0  lfs 31, 12(6)
  02f69c4  addic 3, 3, 16
  02f69c8  addic 6, 6, 16
  02f69cc  fadds 4, 4, 5
  02f69d0  fadds 4, 4, 6
  02f69d4  fadds 31, 4, 31
  02f69d8  bdnz 0x2f69b0
  02f69dc  lis 3, 47
  02f69e0  addi 3, 3, 23184
  02f69e4  lfs 4, 12(3)
  02f69e8  fadds 31, 31, 4
  02f69ec  fmadds 31, 31, 1, 2
  02f69f0  fmr 1, 31
  02f69f4  fmr 2, 3
  02f69f8  bl 0x5026a0
  02f69fc  nop
  02f6a00  fmr 3, 1
  02f6a04  lis 3, 47
  02f6a08  lfs 1, 16(31)
  02f6a0c  addi 3, 3, 23184
  02f6a10  lfs 2, 128(28)
  02f6a14  lfs 6, 84(3)
  02f6a18  lfs 4, 20(31)
  02f6a1c  lfs 5, 132(28)
  02f6a20  fcmpu 0, 3, 6
  02f6a24  cror 6, 1, 2
  02f6a28  bt 6, 0x2f6a98
  02f6a2c  lis 3, 47
  02f6a30  li 4, 3
  02f6a34  vspltisw 2, -1
  02f6a38  addi 3, 3, 23184
  02f6a3c  li 5, 88
  02f6a40  lis 6, 114
  02f6a44  stb 4, 32(31)
  02f6a48  li 4, -3056
  02f6a4c  vslw 2, 2, 2
  02f6a50  lvlx 3, 5, 3
  02f6a54  li 3, 308
  02f6a58  vspltw 3, 3, 0
  02f6a5c  lvlx 4, 4, 6
  02f6a60  vmaddfp 2, 4, 3, 2
  02f6a64  vctsxs 2, 2, 0
  02f6a68  vsplth 2, 2, 1
  02f6a6c  stvehx 2, 3, 30
  02f6a70  lbz 3, 83(31)
  02f6a74  cmpwi 3, 4
  02f6a78  bt 2, 0x2f7628
  02f6a7c  ori 3, 31, 0
  02f6a80  li 4, 4
  02f6a84  li 5, 0
  02f6a88  li 6, 3
  02f6a8c  bl 0xfddc0
  02f6a90  nop
  02f6a94  b 0x2f7628
  02f6a98  fsubs 3, 4, 5
  02f6a9c  fsubs 1, 1, 2
  02f6aa0  lis 3, 47
  02f6aa4  addi 3, 3, 23184
  02f6aa8  fmuls 2, 3, 3
  02f6aac  fmadds 1, 1, 1, 2
  02f6ab0  lfs 2, 92(3)
  02f6ab4  fsqrts 1, 1
  02f6ab8  fcmpu 0, 1, 2
  02f6abc  cror 6, 0, 2
  02f6ac0  bt 6, 0x2f7628
  02f6ac4  li 3, 1
  02f6ac8  lbz 4, 83(31)
  02f6acc  cmpwi 4, 3
  02f6ad0  stb 3, 32(31)
  02f6ad4  bt 2, 0x2f7628
  02f6ad8  ori 3, 31, 0
  02f6adc  li 4, 3
  02f6ae0  li 5, 0
  02f6ae4  li 6, 3
  02f6ae8  bl 0xfddc0
  02f6aec  nop
  02f6af0  b 0x2f7628
  02f6af4  lis 28, 151
  02f6af8  lfs 1, 16(31)
  02f6afc  addic 28, 28, -25376
  02f6b00  lfs 2, 20(31)
  02f6b04  lis 3, 47
  02f6b08  addi 3, 3, 23184
  02f6b0c  lfs 3, 128(28)
  02f6b10  lfs 4, 132(28)
  02f6b14  fsubs 1, 3, 1
  02f6b18  fsubs 2, 4, 2
  02f6b1c  lis 29, 115
  02f6b20  addic 29, 29, 22784
  02f6b24  fabs 3, 1
  02f6b28  fabs 4, 2
  02f6b2c  stfs 1, 232(1)
  02f6b30  stfs 2, 236(1)
  02f6b34  fsubs 1, 3, 4
  02f6b38  stfs 1, 240(1)
  02f6b3c  lwz 4, 232(1)
  02f6b40  lfs 31, 8(3)
  02f6b44  lfs 1, 232(1)
  02f6b48  lwz 3, 236(1)
  02f6b4c  lfs 2, 236(1)
  02f6b50  lwz 5, 240(1)
  02f6b54  rlwinm 3, 3, 3, 29, 29
  02f6b58  fabs 5, 2
  02f6b5c  lfs 2, 240(1)
  02f6b60  fabs 1, 1
  02f6b64  rlwimi 3, 5, 2, 30, 30
  02f6b68  fsub 6, 2, 31
  02f6b6c  rlwimi 3, 4, 4, 28, 28
  02f6b70  fsub 7, 2, 31
  02f6b74  ori 4, 29, 0
  02f6b78  rlwimi 4, 3, 2, 26, 28
  02f6b7c  slwi 3, 3, 2
  02f6b80  clrldi 4, 4, 32
  02f6b84  fsel 4, 6, 1, 4
  02f6b88  lfsx 1, 29, 3
  02f6b8c  lfs 2, 4(4)
  02f6b90  fsel 3, 7, 5, 3
  02f6b94  fcmpu 0, 4, 31
  02f6b98  bt 1, 0x2f6ba4
  02f6b9c  fmr 1, 31
  02f6ba0  b 0x2f6cc8
  02f6ba4  fsubs 5, 3, 4
  02f6ba8  fadds 3, 3, 4
  02f6bac  addic 3, 1, 16
  02f6bb0  li 7, 2
  02f6bb4  addic 5, 3, 380
  02f6bb8  addic 4, 3, 364
  02f6bbc  mtctr 7
  02f6bc0  fdivs 3, 5, 3
  02f6bc4  fmuls 4, 3, 3
  02f6bc8  stfs 3, 392(1)
  02f6bcc  stfs 3, 384(1)
  02f6bd0  stfs 3, 388(1)
  02f6bd4  stfs 3, 380(1)
  02f6bd8  lfs 6, 392(1)
  02f6bdc  lfs 7, 384(1)
  02f6be0  lfs 8, 388(1)
  02f6be4  fmuls 5, 4, 4
  02f6be8  fmuls 7, 7, 4
  02f6bec  fmuls 6, 6, 5
  02f6bf0  fmuls 3, 5, 5
  02f6bf4  fmuls 5, 8, 5
  02f6bf8  stfs 7, 384(1)
  02f6bfc  fmuls 4, 6, 4
  02f6c00  stfs 5, 388(1)
  02f6c04  stfs 4, 392(1)
  02f6c08  lfs 4, 364(3)
  02f6c0c  fmuls 4, 4, 3
  02f6c10  stfs 4, 380(3)
  02f6c14  lfs 4, 4(4)
  02f6c18  addic 4, 4, 8
  02f6c1c  fmuls 4, 4, 3
  02f6c20  addic 3, 3, 8
  02f6c24  stfs 4, 4(5)
  02f6c28  addic 5, 5, 8
  02f6c2c  bdnz 0x2f6c08
  02f6c30  li 5, 4
  02f6c34  ori 3, 1, 0
  02f6c38  mtctr 5
  02f6c3c  lis 4, 115
  02f6c40  addic 5, 3, 380
  02f6c44  addic 4, 4, 22752
  02f6c48  ori 6, 5, 0
  02f6c4c  lfs 3, 380(3)
  02f6c50  lfs 4, 0(4)
  02f6c54  fmuls 3, 3, 4
  02f6c58  lfs 4, 4(4)
  02f6c5c  addic 4, 4, 8
  02f6c60  stfs 3, 380(3)
  02f6c64  lfs 3, 4(5)
  02f6c68  addic 3, 3, 8
  02f6c6c  fmuls 3, 3, 4
  02f6c70  stfs 3, 4(5)
  02f6c74  addic 5, 5, 8
  02f6c78  bdnz 0x2f6c4c
  02f6c7c  ori 3, 1, 0
  02f6c80  fmr 3, 31
  02f6c84  mtctr 7
  02f6c88  lfs 4, 380(3)
  02f6c8c  fadds 3, 3, 4
  02f6c90  lfs 4, 4(6)
  02f6c94  addic 3, 3, 16
  02f6c98  lfs 5, 8(6)
  02f6c9c  lfs 6, 12(6)
  02f6ca0  addic 6, 6, 16
  02f6ca4  fadds 3, 3, 4
  02f6ca8  fadds 3, 3, 5
  02f6cac  fadds 3, 3, 6
  02f6cb0  bdnz 0x2f6c88
  02f6cb4  lis 3, 47
  02f6cb8  addi 3, 3, 23184
  02f6cbc  lfs 4, 12(3)
  02f6cc0  fadds 3, 3, 4
  02f6cc4  fmadds 1, 3, 1, 2
  02f6cc8  lis 3, 47
  02f6ccc  addic 5, 30, 304
  02f6cd0  addi 4, 3, 23184
  02f6cd4  ori 3, 31, 0
  02f6cd8  lfs 2, 24(4)
  02f6cdc  lfs 3, 28(4)
  02f6ce0  lfs 4, 32(4)
  02f6ce4  bl 0xff2e8
  02f6ce8  nop
  02f6cec  lbz 3, 80(31)
  02f6cf0  cmpwi 3, 7
  02f6cf4  bf 2, 0x2f6d14
  02f6cf8  addic 3, 30, 308
  02f6cfc  bl 0x4fffb4
  02f6d00  nop
  02f6d04  cmpwi 3, 0
  02f6d08  bf 2, 0x2f6d14
  02f6d0c  li 3, 7
  02f6d10  stb 3, 81(31)
  02f6d14  lbz 3, 82(31)
  02f6d18  lbz 4, 83(31)
  02f6d1c  cmpw 3, 4
  02f6d20  bf 2, 0x2f7288
  02f6d24  ori 3, 31, 0
  02f6d28  bl 0xefe40
  02f6d2c  nop
  02f6d30  lis 3, 47
  02f6d34  addi 3, 3, 23184
  02f6d38  lfs 2, 92(3)
  02f6d3c  fcmpu 0, 1, 2
  02f6d40  bt 0, 0x2f7288
  02f6d44  ori 3, 31, 0
  02f6d48  bl 0xefe40
  02f6d4c  nop
  02f6d50  lis 3, 47
  02f6d54  addi 3, 3, 23184
  02f6d58  lfs 2, 96(3)
  02f6d5c  fcmpu 0, 1, 2
  02f6d60  cror 6, 1, 2
  02f6d64  bt 6, 0x2f7288
  02f6d68  lfs 1, 24(31)
  02f6d6c  lis 3, 47
  02f6d70  lfs 2, 136(28)
  02f6d74  addi 3, 3, 23184
  02f6d78  fsubs 1, 1, 2
  02f6d7c  lfs 2, 40(3)
  02f6d80  fabs 1, 1
  02f6d84  fcmpu 0, 1, 2
  02f6d88  cror 6, 1, 2
  02f6d8c  bt 6, 0x2f7288
  02f6d90  lfs 1, 20(31)
  02f6d94  lfs 3, 132(28)
  02f6d98  lfs 2, 16(31)
  02f6d9c  fsubs 3, 1, 3
  02f6da0  lfs 4, 128(28)
  02f6da4  fsubs 4, 2, 4
  02f6da8  lis 3, 47
  02f6dac  addi 3, 3, 23184
  02f6db0  fmuls 3, 3, 3
  02f6db4  fmadds 3, 4, 4, 3
  02f6db8  lfs 4, 4(3)
  02f6dbc  fsqrts 3, 3
  02f6dc0  fcmpu 0, 3, 4
  02f6dc4  cror 6, 1, 2
  02f6dc8  bt 6, 0x2f7288
  02f6dcc  lis 3, 149
  02f6dd0  addic 3, 3, 5056
  02f6dd4  lfs 3, 320(3)
  02f6dd8  lfs 4, 324(3)
  02f6ddc  fsubs 2, 2, 3
  02f6de0  fsubs 1, 1, 4
  02f6de4  fabs 4, 2
  02f6de8  fabs 5, 1
  02f6dec  stfs 2, 220(1)
  02f6df0  stfs 1, 224(1)
  02f6df4  lfs 1, 344(3)
  02f6df8  fsubs 2, 4, 5
  02f6dfc  stfs 2, 228(1)
  02f6e00  lwz 3, 220(1)
  02f6e04  lfs 2, 220(1)
  02f6e08  lwz 4, 224(1)
  02f6e0c  lfs 3, 224(1)
  02f6e10  lwz 5, 228(1)
  02f6e14  rlwinm 4, 4, 3, 29, 29
  02f6e18  lfs 6, 228(1)
  02f6e1c  fabs 2, 2
  02f6e20  rlwimi 4, 5, 2, 30, 30
  02f6e24  fabs 3, 3
  02f6e28  fsub 7, 6, 31
  02f6e2c  fsub 6, 6, 31
  02f6e30  rlwimi 4, 3, 4, 28, 28
  02f6e34  ori 3, 29, 0
  02f6e38  rlwimi 3, 4, 2, 26, 28
  02f6e3c  slwi 4, 4, 2
  02f6e40  clrldi 3, 3, 32
  02f6e44  fsel 5, 7, 2, 5
  02f6e48  lfsx 2, 29, 4
  02f6e4c  fsel 4, 6, 3, 4
  02f6e50  lfs 3, 4(3)
  02f6e54  fcmpu 0, 5, 31
  02f6e58  bt 1, 0x2f6e64
  02f6e5c  fmr 2, 31
  02f6e60  b 0x2f6f88
  02f6e64  fsubs 6, 4, 5
  02f6e68  fadds 4, 4, 5
  02f6e6c  addic 3, 1, 16
  02f6e70  li 7, 2
  02f6e74  addic 5, 3, 348
  02f6e78  addic 4, 3, 332
  02f6e7c  mtctr 7
  02f6e80  fdivs 4, 6, 4
  02f6e84  fmuls 5, 4, 4
  02f6e88  stfs 4, 360(1)
  02f6e8c  stfs 4, 352(1)
  02f6e90  stfs 4, 356(1)
  02f6e94  stfs 4, 348(1)
  02f6e98  lfs 7, 360(1)
  02f6e9c  lfs 8, 352(1)
  02f6ea0  lfs 9, 356(1)
  02f6ea4  fmuls 6, 5, 5
  02f6ea8  fmuls 8, 8, 5
  02f6eac  fmuls 7, 7, 6
  02f6eb0  fmuls 4, 6, 6
  02f6eb4  fmuls 6, 9, 6
  02f6eb8  stfs 8, 352(1)
  02f6ebc  fmuls 5, 7, 5
  02f6ec0  stfs 6, 356(1)
  02f6ec4  stfs 5, 360(1)
  02f6ec8  lfs 5, 332(3)
  02f6ecc  fmuls 5, 5, 4
  02f6ed0  stfs 5, 348(3)
  02f6ed4  lfs 5, 4(4)
  02f6ed8  addic 4, 4, 8
  02f6edc  fmuls 5, 5, 4
  02f6ee0  addic 3, 3, 8
  02f6ee4  stfs 5, 4(5)
  02f6ee8  addic 5, 5, 8
  02f6eec  bdnz 0x2f6ec8
  02f6ef0  li 5, 4
  02f6ef4  ori 3, 1, 0
  02f6ef8  mtctr 5
  02f6efc  lis 4, 115
  02f6f00  addic 5, 3, 348
  02f6f04  addic 4, 4, 22752
  02f6f08  ori 6, 5, 0
  02f6f0c  lfs 4, 348(3)
  02f6f10  lfs 5, 0(4)
  02f6f14  fmuls 4, 4, 5
  02f6f18  lfs 5, 4(4)
  02f6f1c  addic 4, 4, 8
  02f6f20  stfs 4, 348(3)
  02f6f24  lfs 4, 4(5)
  02f6f28  addic 3, 3, 8
  02f6f2c  fmuls 4, 4, 5
  02f6f30  stfs 4, 4(5)
  02f6f34  addic 5, 5, 8
  02f6f38  bdnz 0x2f6f0c
  02f6f3c  ori 3, 1, 0
  02f6f40  fmr 4, 31
  02f6f44  mtctr 7
  02f6f48  lfs 5, 348(3)
  02f6f4c  fadds 4, 4, 5
  02f6f50  lfs 5, 4(6)
  02f6f54  addic 3, 3, 16
  02f6f58  lfs 6, 8(6)
  02f6f5c  lfs 7, 12(6)
  02f6f60  addic 6, 6, 16
  02f6f64  fadds 4, 4, 5
  02f6f68  fadds 4, 4, 6
  02f6f6c  fadds 4, 4, 7
  02f6f70  bdnz 0x2f6f48
  02f6f74  lis 3, 47
  02f6f78  addi 3, 3, 23184
  02f6f7c  lfs 5, 12(3)
  02f6f80  fadds 4, 4, 5
  02f6f84  fmadds 2, 4, 2, 3
  02f6f88  bl 0x5026a0
  02f6f8c  nop
  02f6f90  fmr 2, 1
  02f6f94  lis 3, 47
  02f6f98  lfs 1, 72(31)
  02f6f9c  addi 3, 3, 23184
  02f6fa0  lfs 3, 100(3)
  02f6fa4  fcmpu 0, 2, 3
  02f6fa8  cror 6, 1, 2
  02f6fac  bt 6, 0x2f7288
  02f6fb0  lfs 2, 128(28)
  02f6fb4  lfs 3, 16(31)
  02f6fb8  lfs 4, 132(28)
  02f6fbc  lfs 5, 20(31)
  02f6fc0  fsubs 2, 2, 3
  02f6fc4  fsubs 3, 4, 5
  02f6fc8  fabs 4, 2
  02f6fcc  fabs 5, 3
  02f6fd0  stfs 2, 208(1)
  02f6fd4  stfs 3, 212(1)
  02f6fd8  fsubs 2, 4, 5
  02f6fdc  stfs 2, 216(1)
  02f6fe0  lwz 3, 208(1)
  02f6fe4  lfs 2, 208(1)
  02f6fe8  lwz 4, 212(1)
  02f6fec  lfs 3, 212(1)
  02f6ff0  lwz 5, 216(1)
  02f6ff4  rlwinm 4, 4, 3, 29, 29
  02f6ff8  fabs 6, 3
  02f6ffc  lfs 3, 216(1)
  02f7000  fabs 2, 2
  02f7004  rlwimi 4, 5, 2, 30, 30
  02f7008  fsub 7, 3, 31
  02f700c  fsub 8, 3, 31
  02f7010  rlwimi 4, 3, 4, 28, 28
  02f7014  ori 3, 29, 0
  02f7018  rlwimi 3, 4, 2, 26, 28
  02f701c  slwi 4, 4, 2
  02f7020  clrldi 3, 3, 32
  02f7024  fsel 5, 7, 2, 5
  02f7028  lfsx 2, 29, 4
  02f702c  fsel 4, 8, 6, 4
  02f7030  lfs 3, 4(3)
  02f7034  fcmpu 0, 5, 31
  02f7038  bt 1, 0x2f7040
  02f703c  b 0x2f7160
  02f7040  fsubs 6, 4, 5
  02f7044  fadds 4, 4, 5
  02f7048  addic 3, 1, 16
  02f704c  li 6, 2
  02f7050  addic 4, 3, 300
  02f7054  addic 5, 3, 316
  02f7058  mtctr 6
  02f705c  fdivs 4, 6, 4
  02f7060  fmuls 5, 4, 4
  02f7064  stfs 4, 328(1)
  02f7068  stfs 4, 320(1)
  02f706c  stfs 4, 324(1)
  02f7070  stfs 4, 316(1)
  02f7074  lfs 7, 328(1)
  02f7078  lfs 8, 320(1)
  02f707c  lfs 9, 324(1)
  02f7080  fmuls 6, 5, 5
  02f7084  fmuls 8, 8, 5
  02f7088  fmuls 7, 7, 6
  02f708c  fmuls 4, 6, 6
  02f7090  fmuls 6, 9, 6
  02f7094  stfs 8, 320(1)
  02f7098  fmuls 5, 7, 5
  02f709c  stfs 6, 324(1)
  02f70a0  stfs 5, 328(1)
  02f70a4  lfs 5, 300(3)
  02f70a8  fmuls 5, 5, 4
  02f70ac  stfs 5, 316(3)
  02f70b0  lfs 5, 4(4)
  02f70b4  addic 3, 3, 8
  02f70b8  addic 4, 4, 8
  02f70bc  fmuls 5, 5, 4
  02f70c0  stfs 5, 4(5)
  02f70c4  addic 5, 5, 8
  02f70c8  bdnz 0x2f70a4
  02f70cc  li 5, 4
  02f70d0  ori 3, 1, 0
  02f70d4  mtctr 5
  02f70d8  lis 4, 115
  02f70dc  addic 5, 3, 316
  02f70e0  addic 4, 4, 22752
  02f70e4  ori 7, 5, 0
  02f70e8  lfs 4, 316(3)
  02f70ec  lfs 5, 0(4)
  02f70f0  fmuls 4, 4, 5
  02f70f4  lfs 5, 4(4)
  02f70f8  addic 4, 4, 8
  02f70fc  stfs 4, 316(3)
  02f7100  lfs 4, 4(5)
  02f7104  addic 3, 3, 8
  02f7108  fmuls 4, 4, 5
  02f710c  stfs 4, 4(5)
  02f7110  addic 5, 5, 8
  02f7114  bdnz 0x2f70e8
  02f7118  ori 3, 1, 0
  02f711c  mtctr 6
  02f7120  lfs 4, 316(3)
  02f7124  lfs 5, 4(7)
  02f7128  fadds 4, 31, 4
  02f712c  lfs 6, 8(7)
  02f7130  lfs 31, 12(7)
  02f7134  addic 3, 3, 16
  02f7138  addic 7, 7, 16
  02f713c  fadds 4, 4, 5
  02f7140  fadds 4, 4, 6
  02f7144  fadds 31, 4, 31
  02f7148  bdnz 0x2f7120
  02f714c  lis 3, 47
  02f7150  addi 3, 3, 23184
  02f7154  lfs 4, 12(3)
  02f7158  fadds 31, 31, 4
  02f715c  fmadds 31, 31, 2, 3
  02f7160  fmr 2, 1
  02f7164  fmr 1, 31
  02f7168  bl 0x5026a0
  02f716c  nop
  02f7170  lis 3, 47
  02f7174  addi 3, 3, 23184
  02f7178  lfs 2, 84(3)
  02f717c  fcmpu 0, 1, 2
  02f7180  cror 6, 1, 2
  02f7184  bt 6, 0x2f7288
  02f7188  lis 3, 47
  02f718c  lfs 1, 72(31)
  02f7190  addi 6, 3, 23184
  02f7194  li 4, 0
  02f7198  lfs 2, 52(6)
  02f719c  lfs 3, 56(6)
  02f71a0  fadds 2, 1, 2
  02f71a4  lfs 4, 60(6)
  02f71a8  fsubs 5, 3, 1
  02f71ac  fsubs 6, 4, 1
  02f71b0  addic 7, 1, 160
  02f71b4  addic 8, 1, 144
  02f71b8  li 5, 1
  02f71bc  fsubs 3, 3, 2
  02f71c0  fsub 7, 1, 5
  02f71c4  fsubs 4, 4, 2
  02f71c8  fsub 8, 2, 3
  02f71cc  fsel 1, 7, 5, 1
  02f71d0  lfs 5, 64(6)
  02f71d4  fsel 2, 8, 3, 2
  02f71d8  fsub 3, 6, 1
  02f71dc  fsub 8, 4, 2
  02f71e0  fsel 1, 3, 6, 1
  02f71e4  lfs 3, 68(6)
  02f71e8  lfs 6, 72(6)
  02f71ec  lfs 9, 76(6)
  02f71f0  lwz 3, 8320(28)
  02f71f4  stw 4, 152(1)
  02f71f8  fsel 2, 8, 4, 2
  02f71fc  fmuls 4, 1, 1
  02f7200  ori 4, 31, 0
  02f7204  fmuls 7, 2, 2
  02f7208  fmuls 8, 4, 1
  02f720c  fmuls 10, 7, 2
  02f7210  fmuls 11, 4, 8
  02f7214  fmadds 1, 8, 5, 1
  02f7218  fmuls 8, 7, 10
  02f721c  fmadds 2, 10, 5, 2
  02f7220  fmuls 5, 4, 11
  02f7224  fmadds 1, 11, 3, 1
  02f7228  fmuls 10, 7, 8
  02f722c  fmadds 2, 8, 3, 2
  02f7230  fmuls 3, 4, 5
  02f7234  fmadds 1, 5, 6, 1
  02f7238  fmuls 4, 7, 10
  02f723c  fmadds 2, 10, 6, 2
  02f7240  fmadds 1, 3, 9, 1
  02f7244  fmadds 2, 4, 9, 2
  02f7248  stfs 1, 148(1)
  02f724c  stfs 2, 144(1)
  02f7250  lfs 1, 16(3)
  02f7254  stfs 1, 160(1)
  02f7258  lfs 1, 20(3)
  02f725c  stfs 1, 164(1)
  02f7260  lfs 1, 24(3)
  02f7264  stfs 1, 168(1)
  02f7268  lfs 2, 28(3)
  02f726c  stfs 2, 172(1)
  02f7270  lfs 2, 104(6)
  02f7274  fadds 1, 1, 2
  02f7278  stfs 1, 168(1)
  02f727c  lfs 1, 80(6)
  02f7280  bl 0x105c08
  02f7284  nop
  02f7288  lbz 3, 112(31)
  02f728c  rlwinm 3, 3, 0, 30, 30
  02f7290  cmpwi 3, 0
  02f7294  bt 2, 0x2f7628
  02f7298  li 3, 1
  02f729c  lbz 4, 83(31)
  02f72a0  cmpwi 4, 3
  02f72a4  stb 3, 32(31)
  02f72a8  bt 2, 0x2f7628
  02f72ac  ori 3, 31, 0
  02f72b0  li 4, 3
  02f72b4  li 5, 0
  02f72b8  li 6, 3
  02f72bc  bl 0xfddc0
  02f72c0  nop
  02f72c4  b 0x2f7628
  02f72c8  ori 3, 31, 0
  02f72cc  addic 4, 30, 80
  02f72d0  bl 0x10b030
  02f72d4  nop
  02f72d8  clrlwi 3, 3, 31
  02f72dc  cmpwi 3, 0
  02f72e0  bt 2, 0x2f7358
  02f72e4  li 3, 0
  02f72e8  sth 3, 308(30)
  02f72ec  lbz 3, 83(31)
  02f72f0  cmpwi 3, 2
  02f72f4  bt 2, 0x2f7310
  02f72f8  ori 3, 31, 0
  02f72fc  li 4, 2
  02f7300  li 5, 10
  02f7304  li 6, 3
  02f7308  bl 0xfddc0
  02f730c  nop
  02f7310  li 4, 5
  02f7314  li 3, 256
  02f7318  stb 4, 32(31)
  02f731c  bl 0xfc620
  02f7320  nop
  02f7324  clrlwi 3, 3, 31
  02f7328  li 4, 0
  02f732c  li 5, -1
  02f7330  subc 3, 4, 3
  02f7334  li 4, 1
  02f7338  cntlzw 3, 3
  02f733c  subc 5, 5, 4
  02f7340  sldi 3, 3, 58
  02f7344  sradi 3, 3, 63
  02f7348  and 3, 3, 5
  02f734c  addc 3, 4, 3
  02f7350  sth 3, 312(30)
  02f7354  b 0x2f7628
  02f7358  lwz 3, 24(31)
  02f735c  cmpwi 3, 0
  02f7360  bf 0, 0x2f7628
  02f7364  ori 3, 31, 0
  02f7368  bl 0xefb38
  02f736c  nop
  02f7370  b 0x2f7638
  02f7374  ori 3, 31, 0
  02f7378  bl 0xefe40
  02f737c  nop
  02f7380  lis 3, 47
  02f7384  addi 3, 3, 23184
  02f7388  lfs 2, 108(3)
  02f738c  lbz 3, 83(31)
  02f7390  fcmpu 0, 1, 2
  02f7394  bt 0, 0x2f75a0
  02f7398  lis 4, 47
  02f739c  addi 4, 4, 23184
  02f73a0  lfs 2, 112(4)
  02f73a4  fcmpu 0, 1, 2
  02f73a8  bt 1, 0x2f75a0
  02f73ac  li 29, 312
  02f73b0  vspltisw 31, -16
  02f73b4  li 28, 72
  02f73b8  addi 3, 29, 16
  02f73bc  li 4, 52
  02f73c0  lvlx 2, 29, 30
  02f73c4  lvrx 3, 3, 30
  02f73c8  lis 3, 47
  02f73cc  vor 2, 2, 3
  02f73d0  addi 7, 3, 23184
  02f73d4  li 3, 116
  02f73d8  lvlx 3, 28, 31
  02f73dc  vsraw 2, 2, 31
  02f73e0  lvlx 4, 3, 7
  02f73e4  vcfsx 2, 2, 0
  02f73e8  li 3, 56
  02f73ec  vspltw 30, 4, 0
  02f73f0  lvlx 4, 4, 7
  02f73f4  li 4, 60
  02f73f8  vspltw 4, 4, 0
  02f73fc  vspltisw 10, -1
  02f7400  vspltisw 11, -1
  02f7404  vspltisw 13, -1
  02f7408  vspltisw 0, -1
  02f740c  vmaddfp 2, 2, 30, 3
  02f7410  lvlx 3, 3, 7
  02f7414  lvlx 5, 4, 7
  02f7418  vspltw 3, 3, 0
  02f741c  vspltw 5, 5, 0
  02f7420  li 3, 64
  02f7424  li 4, 68
  02f7428  vslw 11, 11, 11
  02f742c  vslw 13, 13, 13
  02f7430  vspltisw 14, -1
  02f7434  vaddfp 4, 2, 4
  02f7438  vsubfp 6, 3, 2
  02f743c  vsubfp 7, 5, 2
  02f7440  li 9, 180
  02f7444  li 10, 0
  02f7448  li 8, 176
  02f744c  addic 5, 1, 176
  02f7450  addic 6, 1, 192
  02f7454  vsubfp 3, 3, 4
  02f7458  vsubfp 5, 5, 4
  02f745c  vcmpgtfp 8, 6, 2
  02f7460  vsel 6, 6, 2, 8
  02f7464  lvlx 8, 3, 7
  02f7468  lvlx 12, 4, 7
  02f746c  vspltw 8, 8, 0
  02f7470  li 3, 72
  02f7474  vspltw 12, 12, 0
  02f7478  li 4, 48
  02f747c  vcmpgtfp 9, 3, 4
  02f7480  lvlx 1, 3, 7
  02f7484  vsel 3, 3, 4, 9
  02f7488  vcmpgtfp 9, 6, 7
  02f748c  vsel 6, 7, 6, 9
  02f7490  vcmpgtfp 4, 3, 5
  02f7494  vspltisw 7, -1
  02f7498  vsel 3, 5, 3, 4
  02f749c  vspltisw 4, -1
  02f74a0  vspltisw 5, -1
  02f74a4  vslw 7, 7, 7
  02f74a8  vslw 9, 10, 10
  02f74ac  vslw 4, 4, 4
  02f74b0  vslw 5, 5, 5
  02f74b4  vmaddfp 7, 6, 6, 7
  02f74b8  vspltisw 10, -1
  02f74bc  vmaddfp 4, 3, 3, 4
  02f74c0  li 3, 76
  02f74c4  vslw 10, 10, 10
  02f74c8  vspltw 2, 2, 0
  02f74cc  lvlx 15, 3, 7
  02f74d0  ori 3, 31, 0
  02f74d4  vmaddfp 10, 7, 6, 10
  02f74d8  vmaddfp 5, 4, 3, 5
  02f74dc  vmaddfp 13, 7, 10, 13
  02f74e0  vmaddfp 6, 10, 8, 6
  02f74e4  vmaddfp 9, 4, 5, 9
  02f74e8  vmaddfp 3, 5, 8, 3
  02f74ec  vslw 5, 0, 0
  02f74f0  vspltw 0, 1, 0
  02f74f4  vspltisw 1, -1
  02f74f8  vspltw 8, 15, 0
  02f74fc  lvlx 10, 4, 7
  02f7500  vslw 1, 1, 1
  02f7504  vspltw 10, 10, 0
  02f7508  addic 4, 30, 176
  02f750c  vmaddfp 11, 4, 9, 11
  02f7510  vmaddfp 3, 9, 12, 3
  02f7514  vmaddfp 1, 7, 13, 1
  02f7518  vslw 9, 14, 14
  02f751c  vmaddfp 4, 4, 11, 5
  02f7520  vmaddfp 3, 11, 0, 3
  02f7524  vmaddfp 5, 13, 12, 6
  02f7528  vspltisw 11, -1
  02f752c  vmaddfp 7, 7, 1, 9
  02f7530  vspltisw 6, -1
  02f7534  vslw 6, 6, 6
  02f7538  vmaddfp 3, 4, 8, 3
  02f753c  vmaddfp 4, 1, 0, 5
  02f7540  vslw 5, 11, 11
  02f7544  vmaddfp 3, 3, 10, 6
  02f7548  vmaddfp 4, 7, 8, 4
  02f754c  vspltw 3, 3, 0
  02f7550  vmaddfp 4, 4, 10, 5
  02f7554  vspltw 4, 4, 0
  02f7558  stvewx 4, 9, 1
  02f755c  stw 10, 184(1)
  02f7560  lfs 1, 80(7)
  02f7564  stvewx 3, 8, 1
  02f7568  stvewx 2, 28, 31
  02f756c  bl 0x101058
  02f7570  nop
  02f7574  addi 3, 29, 16
  02f7578  lvlx 2, 29, 30
  02f757c  lvlx 3, 28, 31
  02f7580  lvrx 4, 3, 30
  02f7584  vor 2, 2, 4
  02f7588  vsraw 2, 2, 31
  02f758c  vcfsx 2, 2, 0
  02f7590  vnmsubfp 2, 2, 30, 3
  02f7594  vspltw 2, 2, 0
  02f7598  stvewx 2, 28, 31
  02f759c  b 0x2f7628
  02f75a0  lis 4, 47
  02f75a4  addi 4, 4, 23184
  02f75a8  lfs 2, 112(4)
  02f75ac  fcmpu 0, 1, 2
  02f75b0  bt 0, 0x2f7628
  02f75b4  li 4, 1
  02f75b8  cmpwi 3, 3
  02f75bc  stb 4, 32(31)
  02f75c0  bt 2, 0x2f7628
  02f75c4  ori 3, 31, 0
  02f75c8  li 4, 3
  02f75cc  li 5, 0
  02f75d0  li 6, 3
  02f75d4  bl 0xfddc0
  02f75d8  nop
  02f75dc  b 0x2f7628
  02f75e0  ori 3, 31, 0
  02f75e4  addic 4, 30, 80
  02f75e8  bl 0x10b030
  02f75ec  nop
  02f75f0  rlwinm 3, 3, 0, 25, 25
  02f75f4  cmpwi 3, 0
  02f75f8  bt 2, 0x2f760c
  02f75fc  ori 3, 31, 0
  02f7600  bl 0xefb38
  02f7604  nop
  02f7608  b 0x2f7638
  02f760c  lwz 3, 24(31)
  02f7610  cmpwi 3, 0
  02f7614  bf 0, 0x2f7628
  02f7618  ori 3, 31, 0
  02f761c  bl 0xefb38
  02f7620  nop
  02f7624  b 0x2f7638
  02f7628  addic 4, 30, 64
  02f762c  ori 3, 31, 0
  02f7630  bl 0x10c9a0
  02f7634  nop
  02f7638  li 0, 608
  02f763c  lvx 30, 1, 0
  02f7640  addic 0, 0, 16
  02f7644  lvx 31, 1, 0
  02f7648  ld 0, 704(1)
  02f764c  mtlr 0
  02f7650  lfd 31, 680(1)
  02f7654  ld 27, 640(1)
  02f7658  ld 28, 648(1)
  02f765c  ld 29, 656(1)
  02f7660  ld 30, 664(1)
  02f7664  ld 31, 672(1)
  02f7668  addi 1, 1, 688
  02f766c  blr

M219_002f7670:   # 0x2f7670, 0x14 bytes
  02f7670  lis 3, 128
  02f7674  lis 4, 1
  02f7678  addic 3, 3, -4384
  02f767c  stw 4, 72(3)
  02f7680  blr
