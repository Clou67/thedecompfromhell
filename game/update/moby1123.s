# game/update/moby1123.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1123_001d590c:   # 0x1d590c, 0x14 bytes
  01d590c  lis 3, 118
  01d5910  lis 4, 1
  01d5914  addic 3, 3, 17900
  01d5918  stw 4, 72(3)
  01d591c  blr

M1123_001d5928:   # 0x1d5928, 0x370 bytes
  01d5928  stdu 1, -320(1)
  01d592c  mflr 0
  01d5930  std 0, 336(1)
  01d5934  stfd 24, 256(1)
  01d5938  stfd 25, 264(1)
  01d593c  stfd 26, 272(1)
  01d5940  stfd 27, 280(1)
  01d5944  stfd 28, 288(1)
  01d5948  stfd 29, 296(1)
  01d594c  stfd 30, 304(1)
  01d5950  stfd 31, 312(1)
  01d5954  std 31, 248(1)
  01d5958  lis 4, 29
  01d595c  ori 31, 3, 0
  01d5960  std 30, 240(1)
  01d5964  addi 6, 4, 22816
  01d5968  addic 30, 1, 144
  01d596c  ori 4, 31, 0
  01d5970  ori 3, 30, 0
  01d5974  lis 5, 1
  01d5978  std 29, 232(1)
  01d597c  std 28, 224(1)
  01d5980  std 27, 216(1)
  01d5984  std 26, 208(1)
  01d5988  std 25, 200(1)
  01d598c  lfs 1, 0(6)
  01d5990  bl 0x1057f4
  01d5994  nop
  01d5998  lis 29, 118
  01d599c  lis 28, 118
  01d59a0  lfs 1, 192(31)
  01d59a4  lis 27, 118
  01d59a8  lfs 2, 18276(29)
  01d59ac  lfs 3, 18272(28)
  01d59b0  lfs 4, 196(31)
  01d59b4  lfs 5, 220(31)
  01d59b8  fmuls 29, 3, 1
  01d59bc  lfs 6, 200(31)
  01d59c0  fmuls 27, 3, 4
  01d59c4  fmuls 7, 5, 2
  01d59c8  lfs 8, 204(31)
  01d59cc  lfs 9, 208(31)
  01d59d0  fmuls 25, 3, 6
  01d59d4  lfs 10, 18280(27)
  01d59d8  lfs 12, 212(31)
  01d59dc  lfs 13, 216(31)
  01d59e0  fmuls 11, 9, 2
  01d59e4  fmuls 0, 12, 2
  01d59e8  lfs 30, 236(31)
  01d59ec  fmuls 31, 13, 2
  01d59f0  lfs 28, 224(31)
  01d59f4  lfs 26, 228(31)
  01d59f8  addic 26, 1, 112
  01d59fc  fmadds 7, 8, 3, 7
  01d5a00  fmuls 8, 3, 8
  01d5a04  addic 25, 1, 128
  01d5a08  fmadds 1, 1, 3, 11
  01d5a0c  lfs 11, 124(1)
  01d5a10  fmadds 4, 4, 3, 0
  01d5a14  fmadds 6, 6, 3, 31
  01d5a18  lfs 0, 232(31)
  01d5a1c  fneg 31, 29
  01d5a20  stfs 3, 112(1)
  01d5a24  fneg 29, 27
  01d5a28  stfs 2, 116(1)
  01d5a2c  fneg 27, 3
  01d5a30  stfs 10, 120(1)
  01d5a34  fmadds 7, 30, 10, 7
  01d5a38  stfs 2, 132(1)
  01d5a3c  fneg 3, 25
  01d5a40  fneg 8, 8
  01d5a44  fmadds 1, 28, 10, 1
  01d5a48  fmadds 4, 26, 10, 4
  01d5a4c  fmadds 6, 0, 10, 6
  01d5a50  fmadds 9, 9, 2, 31
  01d5a54  ori 3, 26, 0
  01d5a58  fadds 7, 7, 11
  01d5a5c  fmadds 11, 12, 2, 29
  01d5a60  stfs 27, 128(1)
  01d5a64  fmadds 3, 13, 2, 3
  01d5a68  fmadds 2, 5, 2, 8
  01d5a6c  lfs 5, 140(1)
  01d5a70  ori 4, 25, 0
  01d5a74  li 5, 0
  01d5a78  ori 6, 31, 0
  01d5a7c  fmadds 9, 28, 10, 9
  01d5a80  ori 7, 30, 0
  01d5a84  fmadds 11, 26, 10, 11
  01d5a88  stfs 7, 124(1)
  01d5a8c  lfs 7, 16(31)
  01d5a90  fmadds 2, 30, 10, 2
  01d5a94  lfs 8, 20(31)
  01d5a98  fmadds 3, 0, 10, 3
  01d5a9c  fadds 1, 1, 7
  01d5aa0  lfs 12, 24(31)
  01d5aa4  fadds 4, 4, 8
  01d5aa8  fadds 6, 6, 12
  01d5aac  fadds 3, 3, 12
  01d5ab0  stfs 1, 112(1)
  01d5ab4  fadds 1, 2, 5
  01d5ab8  stfs 4, 116(1)
  01d5abc  fadds 2, 9, 7
  01d5ac0  stfs 6, 120(1)
  01d5ac4  fadds 4, 11, 8
  01d5ac8  stfs 1, 140(1)
  01d5acc  stfs 2, 128(1)
  01d5ad0  stfs 4, 132(1)
  01d5ad4  stfs 3, 136(1)
  01d5ad8  bl 0x57820
  01d5adc  nop
  01d5ae0  lfs 1, 18276(29)
  01d5ae4  lfs 2, 18272(28)
  01d5ae8  lfs 3, 220(31)
  01d5aec  lfs 4, 192(31)
  01d5af0  fmuls 5, 1, 3
  01d5af4  lfs 6, 208(31)
  01d5af8  fmuls 29, 2, 4
  01d5afc  lfs 7, 196(31)
  01d5b00  fneg 24, 2
  01d5b04  lfs 9, 212(31)
  01d5b08  fmuls 8, 1, 6
  01d5b0c  lfs 10, 200(31)
  01d5b10  fmuls 27, 2, 7
  01d5b14  lfs 12, 216(31)
  01d5b18  fmuls 11, 1, 9
  01d5b1c  lfs 13, 18280(27)
  01d5b20  fmuls 26, 2, 10
  01d5b24  fmuls 0, 1, 12
  01d5b28  lfs 31, 204(31)
  01d5b2c  lfs 30, 236(31)
  01d5b30  fmuls 6, 1, 6
  01d5b34  lfs 28, 224(31)
  01d5b38  fmuls 9, 1, 9
  01d5b3c  fneg 5, 5
  01d5b40  fmuls 12, 1, 12
  01d5b44  fneg 29, 29
  01d5b48  fneg 8, 8
  01d5b4c  fneg 11, 11
  01d5b50  fneg 0, 0
  01d5b54  fneg 9, 9
  01d5b58  fmadds 5, 31, 2, 5
  01d5b5c  fmuls 31, 2, 31
  01d5b60  fneg 12, 12
  01d5b64  fmadds 4, 4, 2, 8
  01d5b68  lfs 8, 228(31)
  01d5b6c  fmadds 7, 7, 2, 11
  01d5b70  lfs 11, 232(31)
  01d5b74  fmadds 10, 10, 2, 0
  01d5b78  lfs 25, 124(1)
  01d5b7c  fneg 0, 1
  01d5b80  stfs 2, 112(1)
  01d5b84  fneg 2, 1
  01d5b88  stfs 13, 120(1)
  01d5b8c  fmadds 5, 30, 13, 5
  01d5b90  fmuls 1, 1, 3
  01d5b94  fneg 3, 6
  01d5b98  fneg 6, 27
  01d5b9c  fneg 27, 26
  01d5ba0  fmadds 4, 28, 13, 4
  01d5ba4  fmadds 7, 8, 13, 7
  01d5ba8  ori 3, 26, 0
  01d5bac  ori 4, 25, 0
  01d5bb0  li 5, 0
  01d5bb4  fadds 5, 5, 25
  01d5bb8  stfs 0, 116(1)
  01d5bbc  fneg 0, 31
  01d5bc0  stfs 24, 128(1)
  01d5bc4  fneg 1, 1
  01d5bc8  stfs 2, 132(1)
  01d5bcc  fmadds 2, 11, 13, 10
  01d5bd0  fadds 3, 29, 3
  01d5bd4  fadds 6, 6, 9
  01d5bd8  fadds 9, 27, 12
  01d5bdc  ori 6, 31, 0
  01d5be0  ori 7, 30, 0
  01d5be4  stfs 5, 124(1)
  01d5be8  fadds 1, 0, 1
  01d5bec  lfs 5, 16(31)
  01d5bf0  lfs 10, 20(31)
  01d5bf4  fadds 4, 4, 5
  01d5bf8  lfs 12, 24(31)
  01d5bfc  fadds 7, 7, 10
  01d5c00  lfs 0, 140(1)
  01d5c04  fadds 2, 2, 12
  01d5c08  fmadds 3, 28, 13, 3
  01d5c0c  fmadds 6, 8, 13, 6
  01d5c10  fmadds 8, 11, 13, 9
  01d5c14  fmadds 1, 30, 13, 1
  01d5c18  stfs 4, 112(1)
  01d5c1c  stfs 7, 116(1)
  01d5c20  fadds 3, 3, 5
  01d5c24  stfs 2, 120(1)
  01d5c28  fadds 2, 6, 10
  01d5c2c  fadds 4, 8, 12
  01d5c30  fadds 1, 1, 0
  01d5c34  stfs 3, 128(1)
  01d5c38  stfs 2, 132(1)
  01d5c3c  stfs 4, 136(1)
  01d5c40  stfs 1, 140(1)
  01d5c44  bl 0x57820
  01d5c48  nop
  01d5c4c  ld 0, 336(1)
  01d5c50  mtlr 0
  01d5c54  lfd 24, 256(1)
  01d5c58  lfd 25, 264(1)
  01d5c5c  lfd 26, 272(1)
  01d5c60  lfd 27, 280(1)
  01d5c64  lfd 28, 288(1)
  01d5c68  lfd 29, 296(1)
  01d5c6c  lfd 30, 304(1)
  01d5c70  lfd 31, 312(1)
  01d5c74  ld 25, 200(1)
  01d5c78  ld 26, 208(1)
  01d5c7c  ld 27, 216(1)
  01d5c80  ld 28, 224(1)
  01d5c84  ld 29, 232(1)
  01d5c88  ld 30, 240(1)
  01d5c8c  ld 31, 248(1)
  01d5c90  addi 1, 1, 320
  01d5c94  blr

UpdateMoby_1123:   # 0x1d5cc0, 0x7e8 bytes
  01d5cc0  stdu 1, -912(1)
  01d5cc4  mflr 0
  01d5cc8  std 0, 928(1)
  01d5ccc  stfd 27, 872(1)
  01d5cd0  stfd 28, 880(1)
  01d5cd4  stfd 29, 888(1)
  01d5cd8  stfd 30, 896(1)
  01d5cdc  stfd 31, 904(1)
  01d5ce0  std 31, 864(1)
  01d5ce4  addi 0, 1, 768
  01d5ce8  stvx 31, 0, 0
  01d5cec  std 27, 832(1)
  01d5cf0  ori 31, 3, 0
  01d5cf4  lis 27, 29
  01d5cf8  addi 27, 27, 23704
  01d5cfc  std 30, 856(1)
  01d5d00  lbz 3, 32(31)
  01d5d04  lwz 30, 120(31)
  01d5d08  cmpwi 3, 1
  01d5d0c  lwz 4, 36(31)
  01d5d10  cmpwi 1, 3, 3
  01d5d14  cmpwi 6, 3, 2
  01d5d18  std 29, 848(1)
  01d5d1c  std 28, 840(1)
  01d5d20  std 26, 824(1)
  01d5d24  std 25, 816(1)
  01d5d28  std 24, 808(1)
  01d5d2c  std 23, 800(1)
  01d5d30  std 22, 792(1)
  01d5d34  cmpwi 7, 3, 0
  01d5d38  bt 1, 0x1d5d4c
  01d5d3c  cmpwi 3, -1
  01d5d40  bf 1, 0x1d6454
  01d5d44  bf 29, 0x1d5d58
  01d5d48  b 0x1d5dd8
  01d5d4c  bf 25, 0x1d5e1c
  01d5d50  bf 5, 0x1d6150
  01d5d54  b 0x1d6454
  01d5d58  lis 3, 118
  01d5d5c  lfs 1, 36(4)
  01d5d60  lis 5, 239
  01d5d64  li 6, 22
  01d5d68  lis 4, 239
  01d5d6c  li 7, 0
  01d5d70  lfs 2, 18308(3)
  01d5d74  li 3, 45
  01d5d78  stw 6, 9952(5)
  01d5d7c  fmuls 1, 1, 2
  01d5d80  li 5, 11
  01d5d84  stw 3, 9948(4)
  01d5d88  li 3, 23
  01d5d8c  lwz 6, 3856(30)
  01d5d90  li 4, 34
  01d5d94  stw 7, 3840(30)
  01d5d98  li 7, -1
  01d5d9c  stw 5, 3844(30)
  01d5da0  cmpwi 6, -1
  01d5da4  stw 3, 3848(30)
  01d5da8  stw 4, 3852(30)
  01d5dac  stw 7, 3864(30)
  01d5db0  stfs 1, 44(31)
  01d5db4  bt 2, 0x1d5dcc
  01d5db8  li 3, 1
  01d5dbc  li 4, 0
  01d5dc0  stb 3, 32(31)
  01d5dc4  stw 4, 148(31)
  01d5dc8  b 0x1d6454
  01d5dcc  li 3, 2
  01d5dd0  stb 3, 32(31)
  01d5dd4  b 0x1d6454
  01d5dd8  lis 3, 164
  01d5ddc  lwz 5, 3856(30)
  01d5de0  slwi 5, 5, 8
  01d5de4  lwz 3, -28512(3)
  01d5de8  addc 30, 3, 5
  01d5dec  clrldi 30, 30, 32
  01d5df0  lhz 3, 166(30)
  01d5df4  cmpwi 3, 1123
  01d5df8  bf 2, 0x1d5e08
  01d5dfc  lbz 3, 32(30)
  01d5e00  cmpwi 3, 3
  01d5e04  bt 0, 0x1d6454
  01d5e08  li 3, 2
  01d5e0c  stb 3, 32(31)
  01d5e10  lwz 3, 16(4)
  01d5e14  stw 3, 148(31)
  01d5e18  b 0x1d6454
  01d5e1c  ori 3, 31, 0
  01d5e20  lwz 4, 3864(30)
  01d5e24  extsw 4, 4
  01d5e28  bl 0x15cc7c
  01d5e2c  nop
  01d5e30  cmpwi 3, 0
  01d5e34  bf 2, 0x1d5e50
  01d5e38  li 3, 0
  01d5e3c  li 4, 4
  01d5e40  ori 5, 31, 0
  01d5e44  bl 0x15d12c
  01d5e48  nop
  01d5e4c  stw 3, 3864(30)
  01d5e50  ori 3, 31, 0
  01d5e54  bl 0x1d5928
  01d5e58  lis 3, 118
  01d5e5c  lis 4, 114
  01d5e60  lis 5, 239
  01d5e64  lfs 1, 18288(3)
  01d5e68  lfs 2, -3052(4)
  01d5e6c  lfs 3, 9944(5)
  01d5e70  fmadds 1, 1, 2, 3
  01d5e74  stfs 1, 9944(5)
  01d5e78  lfs 2, 0(27)
  01d5e7c  fcmpu 0, 1, 2
  01d5e80  cror 6, 0, 2
  01d5e84  bt 6, 0x1d5e94
  01d5e88  fsubs 1, 1, 2
  01d5e8c  lis 3, 239
  01d5e90  stfs 1, 9944(3)
  01d5e94  lis 3, 118
  01d5e98  lfs 31, 8(27)
  01d5e9c  li 29, 0
  01d5ea0  ori 26, 30, 0
  01d5ea4  ori 25, 29, 0
  01d5ea8  ori 22, 26, 0
  01d5eac  lfs 30, 18296(3)
  01d5eb0  lfs 29, 4(27)
  01d5eb4  fmuls 31, 30, 31
  01d5eb8  lwz 3, 3840(26)
  01d5ebc  cmpwi 3, 0
  01d5ec0  bf 2, 0x1d5fdc
  01d5ec4  ori 28, 25, 0
  01d5ec8  addic 23, 1, 272
  01d5ecc  lfs 28, 12(27)
  01d5ed0  ori 24, 22, 0
  01d5ed4  lis 4, 16256
  01d5ed8  lis 5, 118
  01d5edc  stw 25, 8(24)
  01d5ee0  lis 6, 114
  01d5ee4  stw 25, 4(24)
  01d5ee8  fmr 1, 28
  01d5eec  ori 3, 23, 0
  01d5ef0  stw 4, 12(24)
  01d5ef4  stfs 31, 0(24)
  01d5ef8  lfs 2, 18292(5)
  01d5efc  fmadds 31, 30, 29, 31
  01d5f00  lfs 3, -3052(6)
  01d5f04  fmuls 2, 2, 3
  01d5f08  bl 0xfea60
  01d5f0c  nop
  01d5f10  addic 28, 28, 1
  01d5f14  addic 24, 24, 16
  01d5f18  cmpwi 28, 30
  01d5f1c  addic 23, 23, 16
  01d5f20  bt 0, 0x1d5ed4
  01d5f24  addic 4, 1, 256
  01d5f28  addic 6, 1, 288
  01d5f2c  lfs 1, 16(27)
  01d5f30  li 7, 28
  01d5f34  addic 3, 22, 1936
  01d5f38  addic 4, 4, 16
  01d5f3c  addic 5, 1, 288
  01d5f40  addic 6, 6, 16
  01d5f44  mtctr 7
  01d5f48  lfs 2, 0(4)
  01d5f4c  lfs 3, 0(5)
  01d5f50  fadds 2, 2, 3
  01d5f54  stfs 2, 0(3)
  01d5f58  lfs 3, 4(4)
  01d5f5c  lfs 4, 4(5)
  01d5f60  fadds 3, 3, 4
  01d5f64  stfs 3, 4(3)
  01d5f68  lfs 4, 8(4)
  01d5f6c  lfs 5, 8(5)
  01d5f70  fadds 4, 4, 5
  01d5f74  addic 5, 5, 16
  01d5f78  stfs 4, 8(3)
  01d5f7c  lfs 5, 12(4)
  01d5f80  stfs 5, 12(3)
  01d5f84  lfs 6, 0(6)
  01d5f88  fadds 2, 2, 6
  01d5f8c  addic 4, 4, 16
  01d5f90  stfs 2, 0(3)
  01d5f94  lfs 6, 4(6)
  01d5f98  fmuls 2, 2, 1
  01d5f9c  fadds 3, 3, 6
  01d5fa0  stfs 3, 4(3)
  01d5fa4  lfs 6, 8(6)
  01d5fa8  fmuls 3, 3, 1
  01d5fac  stfs 2, 0(3)
  01d5fb0  fadds 4, 4, 6
  01d5fb4  stfs 5, 12(3)
  01d5fb8  addic 6, 6, 16
  01d5fbc  fmuls 2, 4, 1
  01d5fc0  stfs 3, 4(3)
  01d5fc4  stfs 2, 8(3)
  01d5fc8  addic 3, 3, 16
  01d5fcc  bdnz 0x1d5f48
  01d5fd0  lis 3, 239
  01d5fd4  lwz 3, 9948(3)
  01d5fd8  b 0x1d6030
  01d5fdc  li 5, 28
  01d5fe0  addic 3, 22, 16
  01d5fe4  addic 4, 22, 1936
  01d5fe8  mtctr 5
  01d5fec  lfs 1, 0(3)
  01d5ff0  lfs 2, 0(4)
  01d5ff4  fadds 1, 1, 2
  01d5ff8  lfs 2, 4(3)
  01d5ffc  lfs 3, 8(3)
  01d6000  stfs 1, 0(3)
  01d6004  lfs 1, 4(4)
  01d6008  fadds 1, 2, 1
  01d600c  stfs 1, 4(3)
  01d6010  lfs 1, 8(4)
  01d6014  addic 4, 4, 16
  01d6018  fadds 1, 3, 1
  01d601c  stfs 1, 8(3)
  01d6020  addic 3, 3, 16
  01d6024  bdnz 0x1d5fec
  01d6028  lwz 3, 3840(26)
  01d602c  addic 3, 3, -1
  01d6030  addic 29, 29, 1
  01d6034  stw 3, 3840(26)
  01d6038  addic 22, 22, 480
  01d603c  cmpwi 29, 4
  01d6040  addic 26, 26, 4
  01d6044  bt 0, 0x1d5eb8
  01d6048  lis 3, 149
  01d604c  lfs 1, 20(31)
  01d6050  lfs 2, 16(31)
  01d6054  addic 3, 3, 5056
  01d6058  lfs 3, 324(3)
  01d605c  lfs 4, 320(3)
  01d6060  fsubs 1, 1, 3
  01d6064  fsubs 2, 2, 4
  01d6068  lfs 3, 24(31)
  01d606c  lfs 4, 328(3)
  01d6070  fsubs 3, 3, 4
  01d6074  fmuls 1, 1, 1
  01d6078  fmadds 1, 2, 2, 1
  01d607c  lfs 2, 20(27)
  01d6080  fmadds 1, 3, 3, 1
  01d6084  fsqrts 1, 1
  01d6088  fcmpu 0, 1, 2
  01d608c  cror 6, 1, 2
  01d6090  bt 6, 0x1d60a8
  01d6094  lis 3, 113
  01d6098  ori 4, 31, 0
  01d609c  addic 3, 3, -29104
  01d60a0  bl 0x6d720
  01d60a4  nop
  01d60a8  lwz 3, 3860(30)
  01d60ac  cmpwi 3, -1
  01d60b0  bf 1, 0x1d6454
  01d60b4  lis 4, 164
  01d60b8  slwi 3, 3, 8
  01d60bc  lwz 4, -28512(4)
  01d60c0  addc 3, 4, 3
  01d60c4  clrldi 3, 3, 32
  01d60c8  lbz 3, 188(3)
  01d60cc  cmpwi 3, 0
  01d60d0  bt 2, 0x1d6454
  01d60d4  li 3, 3
  01d60d8  stw 25, 148(31)
  01d60dc  stb 3, 32(31)
  01d60e0  lwz 25, 3864(30)
  01d60e4  cmpwi 25, -1
  01d60e8  bt 2, 0x1d6130
  01d60ec  sldi 3, 25, 7
  01d60f0  sldi 5, 25, 4
  01d60f4  lis 4, 150
  01d60f8  subc 3, 3, 5
  01d60fc  addic 4, 4, 14312
  01d6100  extsw 3, 3
  01d6104  lwzx 4, 4, 3
  01d6108  cmpw 4, 31
  01d610c  bf 2, 0x1d6130
  01d6110  lis 4, 150
  01d6114  addic 4, 4, 14292
  01d6118  lbzx 3, 4, 3
  01d611c  cmpwi 3, 0
  01d6120  bt 2, 0x1d6130
  01d6124  extsw 3, 25
  01d6128  bl 0x15cdb0
  01d612c  nop
  01d6130  li 6, -1
  01d6134  li 3, 1
  01d6138  li 4, 0
  01d613c  ori 5, 31, 0
  01d6140  stw 6, 3864(30)
  01d6144  bl 0x15d12c
  01d6148  nop
  01d614c  b 0x1d6454
  01d6150  addic 30, 1, 144
  01d6154  addic 4, 31, 64
  01d6158  ori 3, 30, 0
  01d615c  bl 0x500ca4
  01d6160  nop
  01d6164  lis 4, 118
  01d6168  addic 29, 1, 208
  01d616c  ori 3, 29, 0
  01d6170  lfs 1, 18300(4)
  01d6174  bl 0x500b30
  01d6178  nop
  01d617c  ori 3, 30, 0
  01d6180  ori 4, 30, 0
  01d6184  ori 5, 29, 0
  01d6188  bl 0x50162c
  01d618c  nop
  01d6190  li 30, 0
  01d6194  vspltisw 31, 0
  01d6198  ori 26, 30, 0
  01d619c  ori 28, 26, 0
  01d61a0  lis 3, 118
  01d61a4  addic 29, 1, 208
  01d61a8  addic 4, 3, 18208
  01d61ac  ori 3, 29, 0
  01d61b0  addc 4, 4, 28
  01d61b4  clrldi 4, 4, 32
  01d61b8  bl 0x500ca4
  01d61bc  nop
  01d61c0  addic 4, 1, 144
  01d61c4  ori 3, 29, 0
  01d61c8  ori 5, 29, 0
  01d61cc  bl 0x50162c
  01d61d0  nop
  01d61d4  lfs 1, 256(1)
  01d61d8  lfs 2, 16(31)
  01d61dc  li 3, 264
  01d61e0  lfs 3, 260(1)
  01d61e4  li 5, 24
  01d61e8  fadds 1, 1, 2
  01d61ec  li 4, 24
  01d61f0  lfs 2, 20(31)
  01d61f4  vcfsx 2, 31, 0
  01d61f8  li 6, 28
  01d61fc  fadds 2, 3, 2
  01d6200  <unknown>
  01d6204  <unknown>
  01d6208  vaddfp 3, 3, 4
  01d620c  ori 29, 26, 0
  01d6210  stfs 1, 256(1)
  01d6214  stfs 2, 260(1)
  01d6218  <unknown>
  01d621c  <unknown>
  01d6220  vspltw 4, 4, 0
  01d6224  vspltw 5, 5, 0
  01d6228  lis 4, 16256
  01d622c  vmaddfp 2, 2, 4, 5
  01d6230  vaddfp 2, 2, 3
  01d6234  vspltw 2, 2, 0
  01d6238  stvewx 2, 3, 1
  01d623c  lfs 31, 0(27)
  01d6240  stw 4, 268(1)
  01d6244  lfs 30, 12(27)
  01d6248  lfs 29, 32(27)
  01d624c  lfs 28, 36(27)
  01d6250  lis 3, 118
  01d6254  fmr 1, 30
  01d6258  lfs 2, 18296(3)
  01d625c  fmuls 2, 2, 29
  01d6260  bl 0xfe4f0
  01d6264  nop
  01d6268  lfs 3, 212(1)
  01d626c  lfs 4, 208(1)
  01d6270  fmuls 2, 3, 3
  01d6274  lfs 5, 216(1)
  01d6278  lfs 7, 256(1)
  01d627c  lis 3, 118
  01d6280  lfs 8, 260(1)
  01d6284  lis 4, 118
  01d6288  lfs 9, 264(1)
  01d628c  fmadds 2, 4, 4, 2
  01d6290  fmadds 2, 5, 5, 2
  01d6294  fsqrts 6, 2
  01d6298  lfs 2, 220(1)
  01d629c  stfs 2, 124(1)
  01d62a0  lwz 3, 18312(3)
  01d62a4  lwz 4, 18316(4)
  01d62a8  extsw 25, 3
  01d62ac  fmr 2, 31
  01d62b0  extsw 24, 4
  01d62b4  fdivs 10, 1, 6
  01d62b8  fsub 11, 30, 6
  01d62bc  fsub 12, 30, 6
  01d62c0  fsub 13, 30, 6
  01d62c4  fsub 0, 6, 30
  01d62c8  fsub 27, 6, 30
  01d62cc  fsub 6, 6, 30
  01d62d0  fmr 1, 30
  01d62d4  fmuls 5, 5, 10
  01d62d8  fmuls 3, 3, 10
  01d62dc  fmuls 4, 4, 10
  01d62e0  fsel 10, 11, 30, 5
  01d62e4  fsel 11, 12, 30, 3
  01d62e8  fsel 12, 13, 30, 4
  01d62ec  fsel 5, 0, 10, 5
  01d62f0  fsel 3, 27, 11, 3
  01d62f4  fsel 4, 6, 12, 4
  01d62f8  fadds 5, 5, 9
  01d62fc  fadds 3, 3, 8
  01d6300  fadds 4, 4, 7
  01d6304  stfs 5, 120(1)
  01d6308  stfs 3, 116(1)
  01d630c  stfs 4, 112(1)
  01d6310  bl 0xfcbe8
  01d6314  nop
  01d6318  ori 4, 24, 0
  01d631c  ori 3, 25, 0
  01d6320  bl 0x5027bc
  01d6324  nop
  01d6328  lis 4, 118
  01d632c  lis 5, 118
  01d6330  ori 25, 3, 0
  01d6334  lfs 1, 18320(4)
  01d6338  lfs 2, 18324(5)
  01d633c  bl 0xfcbe8
  01d6340  nop
  01d6344  lis 3, 118
  01d6348  lis 4, 118
  01d634c  fmr 27, 1
  01d6350  lwz 3, 18328(3)
  01d6354  lwz 4, 18332(4)
  01d6358  extsw 3, 3
  01d635c  extsw 4, 4
  01d6360  std 3, 752(1)
  01d6364  lfd 1, 752(1)
  01d6368  std 4, 752(1)
  01d636c  fcfid 1, 1
  01d6370  frsp 1, 1
  01d6374  lfd 2, 752(1)
  01d6378  fcfid 2, 2
  01d637c  frsp 2, 2
  01d6380  bl 0xfcbe8
  01d6384  nop
  01d6388  bl 0x502758
  01d638c  nop
  01d6390  lis 4, 118
  01d6394  lis 5, 114
  01d6398  lis 6, 118
  01d639c  addic 24, 1, 128
  01d63a0  ori 23, 3, 0
  01d63a4  lfs 1, 18336(4)
  01d63a8  lfs 2, -3052(5)
  01d63ac  ori 3, 24, 0
  01d63b0  lfs 3, 18340(6)
  01d63b4  fmuls 1, 1, 2
  01d63b8  fmuls 2, 3, 2
  01d63bc  bl 0xfea60
  01d63c0  nop
  01d63c4  extsw 3, 23
  01d63c8  std 3, 752(1)
  01d63cc  lis 3, 114
  01d63d0  lfs 1, -3056(3)
  01d63d4  lfd 2, 752(1)
  01d63d8  fcfid 2, 2
  01d63dc  li 3, 255
  01d63e0  frsp 2, 2
  01d63e4  fadds 2, 2, 28
  01d63e8  fmuls 1, 1, 2
  01d63ec  fctiwz 1, 1
  01d63f0  stfd 1, 752(1)
  01d63f4  lwz 4, 756(1)
  01d63f8  clrlwi 23, 4, 24
  01d63fc  bl 0xfc620
  01d6400  nop
  01d6404  clrlwi 8, 3, 24
  01d6408  fmr 1, 27
  01d640c  addic 3, 1, 112
  01d6410  ori 4, 24, 0
  01d6414  ori 5, 25, 0
  01d6418  ori 7, 23, 0
  01d641c  li 9, 0
  01d6420  bl 0x131100
  01d6424  nop
  01d6428  addic 29, 29, 1
  01d642c  cmpwi 29, 50
  01d6430  bt 0, 0x1d6250
  01d6434  vspltisw 2, 1
  01d6438  addic 30, 30, 1
  01d643c  addic 28, 28, 16
  01d6440  cmpwi 30, 4
  01d6444  vadduwm 31, 31, 2
  01d6448  bt 0, 0x1d61a0
  01d644c  li 3, 4
  01d6450  stb 3, 32(31)
  01d6454  li 0, 768
  01d6458  lvx 31, 1, 0
  01d645c  ld 0, 928(1)
  01d6460  mtlr 0
  01d6464  lfd 27, 872(1)
  01d6468  lfd 28, 880(1)
  01d646c  lfd 29, 888(1)
  01d6470  lfd 30, 896(1)
  01d6474  lfd 31, 904(1)
  01d6478  ld 22, 792(1)
  01d647c  ld 23, 800(1)
  01d6480  ld 24, 808(1)
  01d6484  ld 25, 816(1)
  01d6488  ld 26, 824(1)
  01d648c  ld 27, 832(1)
  01d6490  ld 28, 840(1)
  01d6494  ld 29, 848(1)
  01d6498  ld 30, 856(1)
  01d649c  ld 31, 864(1)
  01d64a0  addi 1, 1, 912
  01d64a4  blr
