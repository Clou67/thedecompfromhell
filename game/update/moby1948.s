# game/update/moby1948.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1948_002e3aa0:   # 0x2e3aa0, 0x21c bytes
  02e3aa0  stdu 1, -64(1)
  02e3aa4  stfd 31, 56(1)
  02e3aa8  cmpwi 3, 0
  02e3aac  li 8, 0
  02e3ab0  bf 1, 0x2e3cb0
  02e3ab4  lis 6, 46
  02e3ab8  ori 9, 7, 0
  02e3abc  addi 10, 6, 14992
  02e3ac0  lis 7, 149
  02e3ac4  ori 6, 5, 0
  02e3ac8  ori 5, 4, 0
  02e3acc  addic 7, 7, 5056
  02e3ad0  lfs 4, 0(10)
  02e3ad4  ori 4, 9, 0
  02e3ad8  lfs 3, 4(10)
  02e3adc  lfs 2, 8(10)
  02e3ae0  lfs 1, 12(10)
  02e3ae4  lfs 9, 4(6)
  02e3ae8  lfs 5, 324(7)
  02e3aec  lfs 10, 0(6)
  02e3af0  fsubs 9, 9, 5
  02e3af4  lfs 5, 320(7)
  02e3af8  lfs 8, 8(6)
  02e3afc  fsubs 10, 10, 5
  02e3b00  lfs 5, 328(7)
  02e3b04  fsubs 8, 8, 5
  02e3b08  fmr 7, 4
  02e3b0c  fmuls 5, 9, 9
  02e3b10  fmr 6, 7
  02e3b14  fmadds 11, 10, 10, 5
  02e3b18  fmr 5, 6
  02e3b1c  fmadds 11, 8, 8, 11
  02e3b20  fsqrts 12, 11
  02e3b24  fcmpu 0, 12, 5
  02e3b28  bt 2, 0x2e3b6c
  02e3b2c  frsqrte 5, 11
  02e3b30  fmuls 6, 11, 5
  02e3b34  fmuls 7, 5, 3
  02e3b38  fnmsubs 6, 6, 5, 2
  02e3b3c  fmadds 5, 6, 7, 5
  02e3b40  fmuls 6, 11, 5
  02e3b44  fmuls 7, 5, 3
  02e3b48  fnmsubs 6, 6, 5, 2
  02e3b4c  fmadds 5, 6, 7, 5
  02e3b50  fmuls 6, 11, 5
  02e3b54  fmuls 7, 5, 3
  02e3b58  fnmsubs 6, 6, 5, 2
  02e3b5c  fmadds 5, 6, 7, 5
  02e3b60  fmuls 7, 10, 5
  02e3b64  fmuls 6, 9, 5
  02e3b68  fmuls 5, 8, 5
  02e3b6c  lfs 13, 4(5)
  02e3b70  lfs 0, 0(5)
  02e3b74  fmuls 8, 13, 13
  02e3b78  lfs 12, 8(5)
  02e3b7c  fmr 10, 4
  02e3b80  fmadds 11, 0, 0, 8
  02e3b84  fmr 9, 10
  02e3b88  fmadds 11, 12, 12, 11
  02e3b8c  fmr 8, 9
  02e3b90  fsqrts 31, 11
  02e3b94  fcmpu 0, 31, 8
  02e3b98  bt 2, 0x2e3bdc
  02e3b9c  frsqrte 8, 11
  02e3ba0  fmuls 9, 11, 8
  02e3ba4  fmuls 10, 8, 3
  02e3ba8  fnmsubs 9, 9, 8, 2
  02e3bac  fmadds 8, 9, 10, 8
  02e3bb0  fmuls 9, 11, 8
  02e3bb4  fmuls 10, 8, 3
  02e3bb8  fnmsubs 9, 9, 8, 2
  02e3bbc  fmadds 8, 9, 10, 8
  02e3bc0  fmuls 9, 11, 8
  02e3bc4  fmuls 10, 8, 3
  02e3bc8  fnmsubs 9, 9, 8, 2
  02e3bcc  fmadds 8, 9, 10, 8
  02e3bd0  fmuls 10, 8, 0
  02e3bd4  fmuls 9, 8, 13
  02e3bd8  fmuls 8, 8, 12
  02e3bdc  fmr 11, 5
  02e3be0  fmuls 5, 6, 9
  02e3be4  fmadds 5, 7, 10, 5
  02e3be8  fmadds 5, 11, 8, 5
  02e3bec  fmuls 12, 5, 1
  02e3bf0  fnmsubs 5, 12, 9, 6
  02e3bf4  fnmsubs 6, 12, 10, 7
  02e3bf8  fnmsubs 7, 12, 8, 11
  02e3bfc  fmr 11, 4
  02e3c00  fmuls 8, 5, 5
  02e3c04  fmr 10, 11
  02e3c08  fmadds 8, 6, 6, 8
  02e3c0c  fmr 9, 10
  02e3c10  fmadds 8, 7, 7, 8
  02e3c14  fsqrts 12, 8
  02e3c18  fcmpu 0, 12, 9
  02e3c1c  bt 2, 0x2e3c60
  02e3c20  frsqrte 9, 8
  02e3c24  fmuls 10, 8, 9
  02e3c28  fmuls 11, 9, 3
  02e3c2c  fnmsubs 10, 10, 9, 2
  02e3c30  fmadds 9, 10, 11, 9
  02e3c34  fmuls 10, 8, 9
  02e3c38  fmuls 11, 9, 3
  02e3c3c  fnmsubs 10, 10, 9, 2
  02e3c40  fmadds 9, 10, 11, 9
  02e3c44  fmuls 8, 8, 9
  02e3c48  fmuls 10, 9, 3
  02e3c4c  fnmsubs 8, 8, 9, 2
  02e3c50  fmadds 9, 8, 10, 9
  02e3c54  fmuls 11, 9, 6
  02e3c58  fmuls 10, 9, 5
  02e3c5c  fmuls 9, 9, 7
  02e3c60  fmuls 5, 10, 10
  02e3c64  fadds 6, 9, 2
  02e3c68  addic 8, 8, 1
  02e3c6c  addic 6, 6, 12
  02e3c70  fmadds 5, 11, 11, 5
  02e3c74  cmpw 8, 3
  02e3c78  addic 5, 5, 12
  02e3c7c  fmadds 5, 6, 6, 5
  02e3c80  fsqrts 5, 5
  02e3c84  fmuls 5, 5, 1
  02e3c88  fdivs 6, 11, 5
  02e3c8c  fdivs 5, 10, 5
  02e3c90  fadds 6, 6, 3
  02e3c94  fmuls 6, 6, 1
  02e3c98  fadds 5, 5, 3
  02e3c9c  stfs 6, 0(4)
  02e3ca0  fmuls 5, 5, 1
  02e3ca4  stfs 5, 4(4)
  02e3ca8  addic 4, 4, 8
  02e3cac  bt 0, 0x2e3ae4
  02e3cb0  lfd 31, 56(1)
  02e3cb4  addi 1, 1, 64
  02e3cb8  blr

M1948_002e3cc0:   # 0x2e3cc0, 0x1dc bytes
  02e3cc0  stdu 1, -192(1)
  02e3cc4  mflr 0
  02e3cc8  std 0, 208(1)
  02e3ccc  stfd 31, 184(1)
  02e3cd0  lis 4, 46
  02e3cd4  std 31, 176(1)
  02e3cd8  li 3, 41
  02e3cdc  std 30, 168(1)
  02e3ce0  std 29, 160(1)
  02e3ce4  std 28, 152(1)
  02e3ce8  std 27, 144(1)
  02e3cec  std 26, 136(1)
  02e3cf0  std 25, 128(1)
  02e3cf4  std 24, 120(1)
  02e3cf8  addi 31, 4, 15548
  02e3cfc  bl 0x685c4
  02e3d00  nop
  02e3d04  ori 4, 3, 0
  02e3d08  li 3, 24
  02e3d0c  bl 0x174f80
  02e3d10  nop
  02e3d14  li 3, 0
  02e3d18  li 4, 1
  02e3d1c  li 5, 2
  02e3d20  li 6, 1
  02e3d24  li 7, 64
  02e3d28  bl 0x502ea8
  02e3d2c  nop
  02e3d30  ori 4, 3, 0
  02e3d34  li 3, 3
  02e3d38  bl 0x174f80
  02e3d3c  nop
  02e3d40  li 3, 0
  02e3d44  li 4, 0
  02e3d48  li 5, 0
  02e3d4c  li 6, 0
  02e3d50  li 7, 0
  02e3d54  li 8, 0
  02e3d58  bl 0x502f08
  02e3d5c  nop
  02e3d60  ori 4, 3, 0
  02e3d64  li 3, 6
  02e3d68  bl 0x174f80
  02e3d6c  nop
  02e3d70  li 3, 0
  02e3d74  lis 9, 0
  02e3d78  li 4, 0
  02e3d7c  li 5, 1
  02e3d80  li 6, 1
  02e3d84  li 7, 1
  02e3d88  li 8, 0
  02e3d8c  ori 9, 9, 65424
  02e3d90  bl 0x502fd4
  02e3d94  nop
  02e3d98  ori 4, 3, 0
  02e3d9c  li 3, 26
  02e3da0  bl 0x174f80
  02e3da4  nop
  02e3da8  bl 0x71170
  02e3dac  nop
  02e3db0  lis 3, 268
  02e3db4  lis 28, 127
  02e3db8  lfs 31, 0(31)
  02e3dbc  lis 30, 128
  02e3dc0  lis 26, 128
  02e3dc4  lis 29, 128
  02e3dc8  lis 27, 128
  02e3dcc  lis 25, 268
  02e3dd0  li 24, 0
  02e3dd4  addic 26, 26, -28504
  02e3dd8  addic 28, 28, 32528
  02e3ddc  addic 30, 30, -28496
  02e3de0  addic 27, 27, -28512
  02e3de4  addic 31, 3, -23120
  02e3de8  addic 29, 29, -28520
  02e3dec  addic 25, 25, -23088
  02e3df0  ori 3, 31, 0
  02e3df4  fmr 1, 31
  02e3df8  bl 0x502910
  02e3dfc  nop
  02e3e00  cmpwi 3, -1
  02e3e04  bt 2, 0x2e3e44
  02e3e08  lwz 3, 0(28)
  02e3e0c  lwz 4, 0(26)
  02e3e10  ori 7, 25, 0
  02e3e14  lwz 5, 0(29)
  02e3e18  extsw 3, 3
  02e3e1c  lwz 6, 0(27)
  02e3e20  bl 0x2e3aa0
  02e3e24  lwz 3, 0(28)
  02e3e28  lwz 4, 0(29)
  02e3e2c  ori 6, 25, 0
  02e3e30  li 7, 9
  02e3e34  lwz 5, 0(30)
  02e3e38  extsw 3, 3
  02e3e3c  bl 0x74604
  02e3e40  nop
  02e3e44  addic 24, 24, 1
  02e3e48  addic 31, 31, 16
  02e3e4c  cmpwi 24, 2
  02e3e50  addic 26, 26, 4
  02e3e54  addic 27, 27, 4
  02e3e58  addic 28, 28, 4
  02e3e5c  addic 29, 29, 4
  02e3e60  addic 30, 30, 4
  02e3e64  bt 0, 0x2e3df0
  02e3e68  ld 0, 208(1)
  02e3e6c  mtlr 0
  02e3e70  lfd 31, 184(1)
  02e3e74  ld 24, 120(1)
  02e3e78  ld 25, 128(1)
  02e3e7c  ld 26, 136(1)
  02e3e80  ld 27, 144(1)
  02e3e84  ld 28, 152(1)
  02e3e88  ld 29, 160(1)
  02e3e8c  ld 30, 168(1)
  02e3e90  ld 31, 176(1)
  02e3e94  addi 1, 1, 192
  02e3e98  blr

UpdateMoby_1948:   # 0x2e3ea8, 0x1f0 bytes
  02e3ea8  stdu 1, -160(1)
  02e3eac  mflr 0
  02e3eb0  std 0, 176(1)
  02e3eb4  stfd 30, 144(1)
  02e3eb8  stfd 31, 152(1)
  02e3ebc  lbz 5, 32(3)
  02e3ec0  lis 4, 46
  02e3ec4  cmpwi 5, 0
  02e3ec8  addi 4, 4, 16028
  02e3ecc  cmpwi 1, 5, 1
  02e3ed0  std 31, 136(1)
  02e3ed4  std 30, 128(1)
  02e3ed8  std 29, 120(1)
  02e3edc  cmpwi 6, 5, -1
  02e3ee0  bt 1, 0x2e3eec
  02e3ee4  bf 25, 0x2e4074
  02e3ee8  b 0x2e3ef4
  02e3eec  bf 5, 0x2e4060
  02e3ef0  b 0x2e4074
  02e3ef4  li 11, 0
  02e3ef8  lfs 4, 0(4)
  02e3efc  lis 5, 268
  02e3f00  ori 9, 11, 0
  02e3f04  lis 6, 127
  02e3f08  lis 7, 128
  02e3f0c  addic 6, 6, 32528
  02e3f10  ori 8, 9, 0
  02e3f14  addic 7, 7, -28520
  02e3f18  addic 5, 5, -23120
  02e3f1c  lfs 6, 4(4)
  02e3f20  lfs 1, 8(4)
  02e3f24  fmr 5, 6
  02e3f28  fmr 2, 1
  02e3f2c  lwz 10, 0(6)
  02e3f30  cmpwi 1, 10, 0
  02e3f34  fmr 7, 5
  02e3f38  fmr 3, 2
  02e3f3c  bf 5, 0x2e3fa0
  02e3f40  ori 31, 9, 0
  02e3f44  ori 12, 10, 0
  02e3f48  lwzx 30, 7, 8
  02e3f4c  addic 12, 12, -1
  02e3f50  addc 29, 30, 31
  02e3f54  cmpwi 12, 0
  02e3f58  clrldi 29, 29, 32
  02e3f5c  lfsx 8, 30, 31
  02e3f60  addic 31, 31, 12
  02e3f64  fsub 9, 5, 8
  02e3f68  fsub 10, 8, 3
  02e3f6c  lfs 11, 4(29)
  02e3f70  lfs 12, 8(29)
  02e3f74  fsub 13, 6, 11
  02e3f78  fsub 0, 7, 12
  02e3f7c  fsub 31, 11, 2
  02e3f80  fsub 30, 12, 1
  02e3f84  fsel 5, 9, 5, 8
  02e3f88  fsel 3, 10, 3, 8
  02e3f8c  fsel 6, 13, 6, 11
  02e3f90  fsel 7, 0, 7, 12
  02e3f94  fsel 2, 31, 2, 11
  02e3f98  fsel 1, 30, 1, 12
  02e3f9c  bt 1, 0x2e3f48
  02e3fa0  fadds 3, 5, 3
  02e3fa4  fadds 2, 6, 2
  02e3fa8  stw 9, 12(5)
  02e3fac  fadds 1, 7, 1
  02e3fb0  ori 31, 9, 0
  02e3fb4  fmuls 3, 3, 4
  02e3fb8  fmuls 2, 2, 4
  02e3fbc  fmuls 1, 1, 4
  02e3fc0  stfs 3, 0(5)
  02e3fc4  stfs 2, 4(5)
  02e3fc8  stfs 1, 8(5)
  02e3fcc  bf 5, 0x2e4030
  02e3fd0  ori 12, 9, 0
  02e3fd4  lfs 5, 12(5)
  02e3fd8  lwzx 30, 7, 8
  02e3fdc  addc 29, 30, 12
  02e3fe0  clrldi 29, 29, 32
  02e3fe4  lfsx 6, 30, 12
  02e3fe8  fsubs 6, 6, 3
  02e3fec  lfs 7, 4(29)
  02e3ff0  lfs 8, 8(29)
  02e3ff4  fsubs 7, 7, 2
  02e3ff8  fsubs 8, 8, 1
  02e3ffc  fmuls 7, 7, 7
  02e4000  fmadds 6, 6, 6, 7
  02e4004  fmadds 6, 8, 8, 6
  02e4008  fsqrts 6, 6
  02e400c  fcmpu 0, 6, 5
  02e4010  cror 6, 0, 2
  02e4014  bt 6, 0x2e4020
  02e4018  fmr 5, 6
  02e401c  stfs 6, 12(5)
  02e4020  addic 31, 31, 1
  02e4024  addic 12, 12, 12
  02e4028  cmpw 31, 10
  02e402c  bt 0, 0x2e3fd8
  02e4030  addic 11, 11, 1
  02e4034  addic 6, 6, 4
  02e4038  cmpwi 11, 2
  02e403c  addic 8, 8, 4
  02e4040  addic 5, 5, 16
  02e4044  bt 0, 0x2e3f1c
  02e4048  li 4, 1
  02e404c  li 5, 255
  02e4050  stb 4, 32(3)
  02e4054  sth 5, 50(3)
  02e4058  stb 5, 48(3)
  02e405c  b 0x2e4074
  02e4060  lis 5, 113
  02e4064  ori 4, 3, 0
  02e4068  addic 3, 5, -18896
  02e406c  bl 0x6d720
  02e4070  nop
  02e4074  ld 0, 176(1)
  02e4078  mtlr 0
  02e407c  lfd 30, 144(1)
  02e4080  lfd 31, 152(1)
  02e4084  ld 29, 120(1)
  02e4088  ld 30, 128(1)
  02e408c  ld 31, 136(1)
  02e4090  addi 1, 1, 160
  02e4094  blr
