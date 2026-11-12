# game/update/moby921.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M921_004b390c:   # 0x4b390c, 0x14 bytes
  04b390c  lis 3, 143
  04b3910  lis 4, 1
  04b3914  addic 3, 3, 17596
  04b3918  stw 4, 72(3)
  04b391c  blr

M921_004b3950:   # 0x4b3950, 0x6b4 bytes
  04b3950  stdu 1, -400(1)
  04b3954  mflr 0
  04b3958  std 0, 416(1)
  04b395c  stfd 19, 296(1)
  04b3960  stfd 20, 304(1)
  04b3964  stfd 21, 312(1)
  04b3968  stfd 22, 320(1)
  04b396c  stfd 23, 328(1)
  04b3970  stfd 24, 336(1)
  04b3974  stfd 25, 344(1)
  04b3978  stfd 26, 352(1)
  04b397c  stfd 27, 360(1)
  04b3980  stfd 28, 368(1)
  04b3984  stfd 29, 376(1)
  04b3988  stfd 30, 384(1)
  04b398c  stfd 31, 392(1)
  04b3990  std 31, 288(1)
  04b3994  addi 0, 1, 144
  04b3998  stvx 30, 0, 0
  04b399c  addic 0, 0, 16
  04b39a0  stvx 31, 0, 0
  04b39a4  ori 31, 3, 0
  04b39a8  lbz 3, 32(3)
  04b39ac  cmpwi 6, 3, 3
  04b39b0  cmpwi 3, 0
  04b39b4  cror 2, 2, 26
  04b39b8  std 30, 280(1)
  04b39bc  std 29, 272(1)
  04b39c0  std 28, 264(1)
  04b39c4  std 27, 256(1)
  04b39c8  std 26, 248(1)
  04b39cc  std 25, 240(1)
  04b39d0  std 24, 232(1)
  04b39d4  std 23, 224(1)
  04b39d8  std 22, 216(1)
  04b39dc  std 21, 208(1)
  04b39e0  std 20, 200(1)
  04b39e4  std 19, 192(1)
  04b39e8  std 18, 184(1)
  04b39ec  cmpwi 1, 3, 1
  04b39f0  bt 2, 0x4b3f78
  04b39f4  bt 6, 0x4b3f78
  04b39f8  lis 3, 143
  04b39fc  lfs 1, 192(31)
  04b3a00  lis 4, 143
  04b3a04  li 30, 0
  04b3a08  lis 25, 161
  04b3a0c  lfs 2, 17704(3)
  04b3a10  lfs 3, 196(31)
  04b3a14  lfs 4, 200(31)
  04b3a18  lis 3, 143
  04b3a1c  lfs 5, 16(31)
  04b3a20  lfs 6, 20(31)
  04b3a24  fmadds 1, 1, 2, 5
  04b3a28  lfs 5, 24(31)
  04b3a2c  fmadds 3, 3, 2, 6
  04b3a30  lfs 30, 224(31)
  04b3a34  fmadds 2, 4, 2, 5
  04b3a38  lfs 28, 17712(4)
  04b3a3c  lfs 29, 228(31)
  04b3a40  li 4, 16
  04b3a44  lfs 4, 232(31)
  04b3a48  ori 28, 30, 0
  04b3a4c  lfs 5, 208(31)
  04b3a50  addic 26, 1, 112
  04b3a54  lfs 6, 17708(3)
  04b3a58  addic 25, 25, 23856
  04b3a5c  lis 3, 75
  04b3a60  fmadds 30, 30, 28, 1
  04b3a64  addi 3, 3, 14624
  04b3a68  fmadds 29, 29, 28, 3
  04b3a6c  fmadds 28, 4, 28, 2
  04b3a70  stfs 1, 112(1)
  04b3a74  stfs 3, 116(1)
  04b3a78  lis 24, 114
  04b3a7c  lfs 1, 212(31)
  04b3a80  li 23, 2
  04b3a84  stfs 2, 120(1)
  04b3a88  li 22, -3056
  04b3a8c  lfs 2, 216(31)
  04b3a90  li 21, 10
  04b3a94  lfs 31, 28(31)
  04b3a98  li 20, 43
  04b3a9c  fmadds 3, 5, 6, 30
  04b3aa0  stfs 31, 124(1)
  04b3aa4  fmadds 1, 1, 6, 29
  04b3aa8  stfs 30, 112(1)
  04b3aac  fmadds 2, 2, 6, 28
  04b3ab0  stfs 29, 116(1)
  04b3ab4  stfs 28, 120(1)
  04b3ab8  stfs 3, 112(1)
  04b3abc  stfs 1, 116(1)
  04b3ac0  stfs 2, 120(1)
  04b3ac4  lfs 25, 0(3)
  04b3ac8  lfs 24, 4(3)
  04b3acc  lfs 23, 8(3)
  04b3ad0  lfs 22, 12(3)
  04b3ad4  lvlx 31, 4, 3
  04b3ad8  vspltw 31, 31, 0
  04b3adc  li 3, 16
  04b3ae0  bl 0xfc620
  04b3ae4  nop
  04b3ae8  ori 29, 3, 0
  04b3aec  li 3, 2
  04b3af0  bl 0xfc620
  04b3af4  nop
  04b3af8  li 4, 0
  04b3afc  lis 5, 143
  04b3b00  fmr 1, 25
  04b3b04  subc 3, 4, 3
  04b3b08  fmr 2, 24
  04b3b0c  neg 7, 29
  04b3b10  fmr 3, 23
  04b3b14  cntlzw 3, 3
  04b3b18  fmr 4, 22
  04b3b1c  subc 4, 29, 7
  04b3b20  sldi 3, 3, 58
  04b3b24  lwz 10, 17724(5)
  04b3b28  ori 8, 25, 0
  04b3b2c  sradi 3, 3, 63
  04b3b30  extsw 10, 10
  04b3b34  and 4, 3, 4
  04b3b38  ori 3, 26, 0
  04b3b3c  addc 7, 7, 4
  04b3b40  bl 0x126f50
  04b3b44  nop
  04b3b48  cmpwi 3, 0
  04b3b4c  bt 2, 0x4b3b80
  04b3b50  vspltisw 2, -1
  04b3b54  lvlx 3, 22, 24
  04b3b58  li 4, 127
  04b3b5c  vslw 2, 2, 2
  04b3b60  vmaddfp 2, 3, 31, 2
  04b3b64  vctsxs 2, 2, 0
  04b3b68  vsplth 3, 2, 1
  04b3b6c  vspltb 2, 2, 3
  04b3b70  stvehx 3, 21, 3
  04b3b74  stw 23, 36(3)
  04b3b78  stb 4, 42(3)
  04b3b7c  stvebx 2, 20, 3
  04b3b80  addic 30, 30, 1
  04b3b84  cmpwi 30, 2
  04b3b88  bt 0, 0x4b3adc
  04b3b8c  lis 3, 143
  04b3b90  lfs 1, 192(31)
  04b3b94  lis 4, 75
  04b3b98  li 18, 16
  04b3b9c  ori 30, 28, 0
  04b3ba0  lfs 2, 17716(3)
  04b3ba4  lfs 3, 196(31)
  04b3ba8  addi 3, 4, 14624
  04b3bac  lfs 4, 200(31)
  04b3bb0  lfs 5, 112(1)
  04b3bb4  lfs 6, 116(1)
  04b3bb8  fmadds 1, 1, 2, 5
  04b3bbc  lfs 5, 120(1)
  04b3bc0  fmadds 3, 3, 2, 6
  04b3bc4  fmadds 2, 4, 2, 5
  04b3bc8  lfs 4, -3056(24)
  04b3bcc  ori 27, 18, 0
  04b3bd0  stfs 1, 112(1)
  04b3bd4  stfs 3, 116(1)
  04b3bd8  stfs 2, 120(1)
  04b3bdc  lfs 27, 20(3)
  04b3be0  fmuls 1, 4, 27
  04b3be4  fctiwz 1, 1
  04b3be8  stfd 1, 128(1)
  04b3bec  lfs 19, 24(3)
  04b3bf0  lwz 19, 132(1)
  04b3bf4  lfs 21, 28(3)
  04b3bf8  fmr 26, 19
  04b3bfc  lfs 20, 32(3)
  04b3c00  ori 3, 26, 0
  04b3c04  lis 10, 32767
  04b3c08  fmr 1, 21
  04b3c0c  ori 7, 18, 0
  04b3c10  fmr 2, 24
  04b3c14  fmr 3, 24
  04b3c18  ori 8, 25, 0
  04b3c1c  fmr 4, 19
  04b3c20  ori 10, 10, 65535
  04b3c24  bl 0x126f50
  04b3c28  nop
  04b3c2c  ori 29, 3, 0
  04b3c30  cmpwi 29, 0
  04b3c34  bt 2, 0x4b3c60
  04b3c38  li 3, 255
  04b3c3c  sth 19, 10(29)
  04b3c40  bl 0xfc620
  04b3c44  nop
  04b3c48  li 4, 127
  04b3c4c  stb 3, 8(29)
  04b3c50  stw 23, 36(29)
  04b3c54  lhz 3, 10(29)
  04b3c58  stb 4, 42(29)
  04b3c5c  stb 3, 43(29)
  04b3c60  addic 30, 30, 1
  04b3c64  fsubs 19, 19, 20
  04b3c68  neg 18, 18
  04b3c6c  cmpwi 30, 3
  04b3c70  sldi 19, 19, 1
  04b3c74  bt 0, 0x4b3c00
  04b3c78  lis 4, 143
  04b3c7c  lfs 1, 192(31)
  04b3c80  li 3, 64
  04b3c84  lfs 2, 17720(4)
  04b3c88  lfs 3, 196(31)
  04b3c8c  lfs 4, 200(31)
  04b3c90  fmadds 1, 1, 2, 30
  04b3c94  fmadds 3, 3, 2, 29
  04b3c98  stfs 31, 124(1)
  04b3c9c  fmadds 2, 4, 2, 28
  04b3ca0  li 4, 128
  04b3ca4  stfs 1, 112(1)
  04b3ca8  stfs 3, 116(1)
  04b3cac  stfs 2, 120(1)
  04b3cb0  bl 0xfe484
  04b3cb4  nop
  04b3cb8  slwi 4, 3, 8
  04b3cbc  slwi 5, 3, 16
  04b3cc0  or 3, 4, 3
  04b3cc4  or 4, 3, 5
  04b3cc8  li 3, 3
  04b3ccc  oris 30, 4, 32512
  04b3cd0  extsw 30, 30
  04b3cd4  bl 0xfc620
  04b3cd8  nop
  04b3cdc  cmpwi 3, 0
  04b3ce0  bt 2, 0x4b3dd0
  04b3ce4  li 3, 4
  04b3ce8  bl 0xfc620
  04b3cec  nop
  04b3cf0  ori 29, 3, 0
  04b3cf4  li 3, 2
  04b3cf8  bl 0xfc620
  04b3cfc  nop
  04b3d00  li 4, 0
  04b3d04  neg 7, 29
  04b3d08  fmr 1, 21
  04b3d0c  subc 3, 4, 3
  04b3d10  fmr 2, 24
  04b3d14  lis 5, 75
  04b3d18  fmr 3, 24
  04b3d1c  cntlzw 3, 3
  04b3d20  subc 4, 29, 7
  04b3d24  sldi 3, 3, 58
  04b3d28  addi 5, 5, 14624
  04b3d2c  sradi 3, 3, 63
  04b3d30  ori 10, 30, 0
  04b3d34  and 4, 3, 4
  04b3d38  ori 3, 26, 0
  04b3d3c  ori 8, 25, 0
  04b3d40  lfs 4, 36(5)
  04b3d44  addc 7, 7, 4
  04b3d48  bl 0x126f50
  04b3d4c  nop
  04b3d50  ori 30, 3, 0
  04b3d54  cmpwi 30, 0
  04b3d58  bt 2, 0x4b3dd0
  04b3d5c  lis 3, 75
  04b3d60  vspltisw 2, -1
  04b3d64  li 4, 40
  04b3d68  lvlx 3, 22, 24
  04b3d6c  addi 3, 3, 14624
  04b3d70  vslw 2, 2, 2
  04b3d74  lvlx 30, 4, 3
  04b3d78  vspltw 30, 30, 0
  04b3d7c  li 3, 2
  04b3d80  vmaddfp 2, 3, 30, 2
  04b3d84  vctsxs 2, 2, 0
  04b3d88  vsplth 2, 2, 1
  04b3d8c  stvehx 2, 21, 30
  04b3d90  bl 0xfc620
  04b3d94  nop
  04b3d98  cmpwi 3, 0
  04b3d9c  bt 2, 0x4b3da8
  04b3da0  li 3, 68
  04b3da4  stb 3, 3(30)
  04b3da8  li 3, 64
  04b3dac  vspltisw 2, -1
  04b3db0  stb 3, 42(30)
  04b3db4  vslw 2, 2, 2
  04b3db8  stw 23, 36(30)
  04b3dbc  lvlx 3, 22, 24
  04b3dc0  vmaddfp 2, 3, 30, 2
  04b3dc4  vctsxs 2, 2, 0
  04b3dc8  vspltb 2, 2, 3
  04b3dcc  stvebx 2, 20, 30
  04b3dd0  lis 3, 143
  04b3dd4  lfs 1, 208(31)
  04b3dd8  ori 30, 28, 0
  04b3ddc  lfs 2, 17708(3)
  04b3de0  lfs 3, 212(31)
  04b3de4  lfs 4, 216(31)
  04b3de8  fnmsubs 1, 1, 2, 30
  04b3dec  fnmsubs 3, 3, 2, 29
  04b3df0  stfs 31, 124(1)
  04b3df4  fnmsubs 2, 4, 2, 28
  04b3df8  stfs 1, 112(1)
  04b3dfc  stfs 3, 116(1)
  04b3e00  stfs 2, 120(1)
  04b3e04  li 3, 16
  04b3e08  bl 0xfc620
  04b3e0c  nop
  04b3e10  ori 29, 3, 0
  04b3e14  li 3, 2
  04b3e18  bl 0xfc620
  04b3e1c  nop
  04b3e20  li 4, 0
  04b3e24  lis 5, 143
  04b3e28  fmr 1, 25
  04b3e2c  subc 3, 4, 3
  04b3e30  fmr 2, 24
  04b3e34  neg 7, 29
  04b3e38  fmr 3, 23
  04b3e3c  cntlzw 3, 3
  04b3e40  fmr 4, 22
  04b3e44  subc 4, 29, 7
  04b3e48  sldi 3, 3, 58
  04b3e4c  lwz 10, 17724(5)
  04b3e50  ori 8, 25, 0
  04b3e54  sradi 3, 3, 63
  04b3e58  extsw 10, 10
  04b3e5c  and 4, 3, 4
  04b3e60  ori 3, 26, 0
  04b3e64  addc 7, 7, 4
  04b3e68  bl 0x126f50
  04b3e6c  nop
  04b3e70  cmpwi 3, 0
  04b3e74  bt 2, 0x4b3ea8
  04b3e78  vspltisw 2, -1
  04b3e7c  lvlx 3, 22, 24
  04b3e80  li 4, 127
  04b3e84  vslw 2, 2, 2
  04b3e88  vmaddfp 2, 3, 31, 2
  04b3e8c  vctsxs 2, 2, 0
  04b3e90  vsplth 3, 2, 1
  04b3e94  vspltb 2, 2, 3
  04b3e98  stvehx 3, 21, 3
  04b3e9c  stw 23, 36(3)
  04b3ea0  stb 4, 42(3)
  04b3ea4  stvebx 2, 20, 3
  04b3ea8  addic 30, 30, 1
  04b3eac  cmpwi 30, 2
  04b3eb0  bt 0, 0x4b3e04
  04b3eb4  lis 3, 143
  04b3eb8  lfs 1, -3056(24)
  04b3ebc  lfs 2, 192(31)
  04b3ec0  fmuls 1, 1, 27
  04b3ec4  lfs 3, 17716(3)
  04b3ec8  lfs 4, 196(31)
  04b3ecc  lfs 5, 200(31)
  04b3ed0  lfs 6, 112(1)
  04b3ed4  lfs 7, 116(1)
  04b3ed8  fmadds 2, 2, 3, 6
  04b3edc  lfs 6, 120(1)
  04b3ee0  fmadds 4, 4, 3, 7
  04b3ee4  fctiwz 1, 1
  04b3ee8  fmadds 3, 5, 3, 6
  04b3eec  stfs 2, 112(1)
  04b3ef0  stfs 4, 116(1)
  04b3ef4  stfs 3, 120(1)
  04b3ef8  stfd 1, 128(1)
  04b3efc  lwz 31, 132(1)
  04b3f00  ori 3, 26, 0
  04b3f04  lis 10, 32767
  04b3f08  fmr 1, 21
  04b3f0c  ori 7, 27, 0
  04b3f10  fmr 2, 24
  04b3f14  fmr 3, 24
  04b3f18  ori 8, 25, 0
  04b3f1c  fmr 4, 26
  04b3f20  ori 10, 10, 65535
  04b3f24  bl 0x126f50
  04b3f28  nop
  04b3f2c  ori 30, 3, 0
  04b3f30  cmpwi 30, 0
  04b3f34  bt 2, 0x4b3f60
  04b3f38  li 3, 255
  04b3f3c  sth 31, 10(30)
  04b3f40  bl 0xfc620
  04b3f44  nop
  04b3f48  li 4, 127
  04b3f4c  stb 3, 8(30)
  04b3f50  stw 23, 36(30)
  04b3f54  lhz 3, 10(30)
  04b3f58  stb 4, 42(30)
  04b3f5c  stb 3, 43(30)
  04b3f60  addic 28, 28, 1
  04b3f64  fsubs 26, 26, 20
  04b3f68  neg 27, 27
  04b3f6c  cmpwi 28, 3
  04b3f70  sldi 31, 31, 1
  04b3f74  bt 0, 0x4b3f00
  04b3f78  li 0, 144
  04b3f7c  lvx 30, 1, 0
  04b3f80  addic 0, 0, 16
  04b3f84  lvx 31, 1, 0
  04b3f88  ld 0, 416(1)
  04b3f8c  mtlr 0
  04b3f90  lfd 19, 296(1)
  04b3f94  lfd 20, 304(1)
  04b3f98  lfd 21, 312(1)
  04b3f9c  lfd 22, 320(1)
  04b3fa0  lfd 23, 328(1)
  04b3fa4  lfd 24, 336(1)
  04b3fa8  lfd 25, 344(1)
  04b3fac  lfd 26, 352(1)
  04b3fb0  lfd 27, 360(1)
  04b3fb4  lfd 28, 368(1)
  04b3fb8  lfd 29, 376(1)
  04b3fbc  lfd 30, 384(1)
  04b3fc0  lfd 31, 392(1)
  04b3fc4  ld 18, 184(1)
  04b3fc8  ld 19, 192(1)
  04b3fcc  ld 20, 200(1)
  04b3fd0  ld 21, 208(1)
  04b3fd4  ld 22, 216(1)
  04b3fd8  ld 23, 224(1)
  04b3fdc  ld 24, 232(1)
  04b3fe0  ld 25, 240(1)
  04b3fe4  ld 26, 248(1)
  04b3fe8  ld 27, 256(1)
  04b3fec  ld 28, 264(1)
  04b3ff0  ld 29, 272(1)
  04b3ff4  ld 30, 280(1)
  04b3ff8  ld 31, 288(1)
  04b3ffc  addi 1, 1, 400
  04b4000  blr

M921_004b4020:   # 0x4b4020, 0x644 bytes
  04b4020  stdu 1, -320(1)
  04b4024  mflr 0
  04b4028  std 0, 336(1)
  04b402c  stfd 24, 256(1)
  04b4030  stfd 25, 264(1)
  04b4034  stfd 26, 272(1)
  04b4038  stfd 27, 280(1)
  04b403c  stfd 28, 288(1)
  04b4040  stfd 29, 296(1)
  04b4044  stfd 30, 304(1)
  04b4048  stfd 31, 312(1)
  04b404c  std 31, 248(1)
  04b4050  ori 31, 3, 0
  04b4054  lis 4, 114
  04b4058  lis 3, 165
  04b405c  lis 5, 143
  04b4060  std 30, 240(1)
  04b4064  addic 3, 3, 7136
  04b4068  lwz 30, 120(31)
  04b406c  lfs 1, -3052(4)
  04b4070  addic 6, 30, 100
  04b4074  lwz 4, 104(30)
  04b4078  lfs 2, 17728(5)
  04b407c  slwi 4, 4, 2
  04b4080  lwz 8, 140(30)
  04b4084  addic 5, 30, 96
  04b4088  extsw 7, 4
  04b408c  fmuls 1, 1, 2
  04b4090  addic 4, 1, 112
  04b4094  srwi 8, 8, 31
  04b4098  std 29, 232(1)
  04b409c  std 28, 224(1)
  04b40a0  std 27, 216(1)
  04b40a4  lwzx 3, 3, 7
  04b40a8  bl 0x10ce18
  04b40ac  nop
  04b40b0  lwz 4, 140(30)
  04b40b4  lfs 31, 112(1)
  04b40b8  cmpwi 4, 0
  04b40bc  bt 2, 0x4b415c
  04b40c0  cmpwi 3, 0
  04b40c4  bf 2, 0x4b40e0
  04b40c8  lis 3, 149
  04b40cc  addic 3, 3, 5056
  04b40d0  lwz 3, 384(3)
  04b40d4  lhz 3, 134(3)
  04b40d8  cmpwi 3, 19
  04b40dc  bt 2, 0x4b415c
  04b40e0  lwz 3, 144(30)
  04b40e4  extsw 3, 3
  04b40e8  bl 0x3fbd4
  04b40ec  nop
  04b40f0  lwz 3, 108(30)
  04b40f4  cmpwi 3, -1
  04b40f8  bt 2, 0x4b4140
  04b40fc  sldi 4, 3, 7
  04b4100  sldi 6, 3, 4
  04b4104  lis 5, 150
  04b4108  subc 4, 4, 6
  04b410c  addic 5, 5, 14312
  04b4110  extsw 4, 4
  04b4114  lwzx 5, 5, 4
  04b4118  cmpw 5, 31
  04b411c  bf 2, 0x4b4140
  04b4120  lis 5, 150
  04b4124  addic 5, 5, 14292
  04b4128  lbzx 4, 5, 4
  04b412c  cmpwi 4, 0
  04b4130  bt 2, 0x4b4140
  04b4134  extsw 3, 3
  04b4138  bl 0x15cdb0
  04b413c  nop
  04b4140  li 4, -1
  04b4144  ori 3, 31, 0
  04b4148  stw 4, 108(30)
  04b414c  bl 0xefb38
  04b4150  nop
  04b4154  li 3, 1
  04b4158  b 0x4b4620
  04b415c  lis 3, 75
  04b4160  lis 29, 143
  04b4164  fmr 1, 31
  04b4168  addi 28, 3, 16388
  04b416c  lis 27, 143
  04b4170  addic 3, 31, 16
  04b4174  addic 5, 30, 112
  04b4178  lfs 2, 17732(29)
  04b417c  lfs 25, 0(28)
  04b4180  lfs 3, 17736(27)
  04b4184  fmr 4, 25
  04b4188  bl 0x109b40
  04b418c  nop
  04b4190  lfs 1, 116(1)
  04b4194  addic 3, 31, 20
  04b4198  lfs 2, 17732(29)
  04b419c  addic 5, 30, 116
  04b41a0  lfs 3, 17736(27)
  04b41a4  fmr 4, 25
  04b41a8  bl 0x109b40
  04b41ac  nop
  04b41b0  lfs 1, 120(1)
  04b41b4  addic 3, 31, 24
  04b41b8  lfs 2, 17732(29)
  04b41bc  addic 5, 30, 120
  04b41c0  lfs 3, 17736(27)
  04b41c4  fmr 4, 25
  04b41c8  bl 0x109b40
  04b41cc  nop
  04b41d0  lfs 30, 112(1)
  04b41d4  lfs 1, 16(31)
  04b41d8  lfs 2, 4(28)
  04b41dc  fsubs 30, 30, 1
  04b41e0  lfs 29, 116(1)
  04b41e4  lfs 1, 20(31)
  04b41e8  lfs 31, 120(1)
  04b41ec  fsubs 29, 29, 1
  04b41f0  lfs 28, 24(31)
  04b41f4  lfs 1, 72(31)
  04b41f8  fabs 26, 30
  04b41fc  fcmpu 0, 26, 2
  04b4200  cror 6, 0, 2
  04b4204  bt 6, 0x4b461c
  04b4208  fmr 3, 2
  04b420c  fabs 2, 29
  04b4210  fcmpu 0, 2, 3
  04b4214  cror 6, 0, 2
  04b4218  bt 6, 0x4b461c
  04b421c  fsubs 3, 26, 2
  04b4220  stfs 30, 140(1)
  04b4224  stfs 29, 144(1)
  04b4228  lis 29, 115
  04b422c  lis 5, 75
  04b4230  addic 29, 29, 22784
  04b4234  addi 5, 5, 16388
  04b4238  stfs 3, 148(1)
  04b423c  lwz 3, 140(1)
  04b4240  lfs 3, 140(1)
  04b4244  lwz 4, 144(1)
  04b4248  fabs 4, 3
  04b424c  lfs 3, 144(1)
  04b4250  lwz 6, 148(1)
  04b4254  rlwinm 4, 4, 3, 29, 29
  04b4258  lfs 5, 148(1)
  04b425c  fabs 3, 3
  04b4260  rlwimi 4, 6, 2, 30, 30
  04b4264  fsub 6, 5, 25
  04b4268  fsub 5, 5, 25
  04b426c  rlwimi 4, 3, 4, 28, 28
  04b4270  ori 3, 29, 0
  04b4274  rlwimi 3, 4, 2, 26, 28
  04b4278  slwi 4, 4, 2
  04b427c  clrldi 3, 3, 32
  04b4280  fsel 4, 6, 4, 2
  04b4284  lfsx 27, 29, 4
  04b4288  lfs 2, 4(3)
  04b428c  fsel 3, 5, 3, 26
  04b4290  lfs 26, 8(5)
  04b4294  fcmpu 0, 4, 25
  04b4298  bt 1, 0x4b42a4
  04b429c  fmr 27, 25
  04b42a0  b 0x4b43bc
  04b42a4  fsubs 5, 3, 4
  04b42a8  fadds 3, 3, 4
  04b42ac  addic 3, 1, 16
  04b42b0  li 6, 2
  04b42b4  addic 5, 3, 184
  04b42b8  addic 4, 3, 168
  04b42bc  mtctr 6
  04b42c0  fdivs 3, 5, 3
  04b42c4  fmuls 4, 3, 3
  04b42c8  stfs 3, 196(1)
  04b42cc  stfs 3, 188(1)
  04b42d0  stfs 3, 192(1)
  04b42d4  stfs 3, 184(1)
  04b42d8  lfs 6, 196(1)
  04b42dc  lfs 7, 188(1)
  04b42e0  lfs 8, 192(1)
  04b42e4  fmuls 5, 4, 4
  04b42e8  fmuls 7, 7, 4
  04b42ec  fmuls 6, 6, 5
  04b42f0  fmuls 3, 5, 5
  04b42f4  fmuls 5, 8, 5
  04b42f8  stfs 7, 188(1)
  04b42fc  fmuls 4, 6, 4
  04b4300  stfs 5, 192(1)
  04b4304  stfs 4, 196(1)
  04b4308  lfs 4, 168(3)
  04b430c  fmuls 4, 4, 3
  04b4310  stfs 4, 184(3)
  04b4314  lfs 4, 4(4)
  04b4318  addic 4, 4, 8
  04b431c  fmuls 4, 4, 3
  04b4320  addic 3, 3, 8
  04b4324  stfs 4, 4(5)
  04b4328  addic 5, 5, 8
  04b432c  bdnz 0x4b4308
  04b4330  li 5, 4
  04b4334  ori 3, 1, 0
  04b4338  mtctr 5
  04b433c  lis 4, 115
  04b4340  addic 5, 3, 184
  04b4344  addic 4, 4, 22752
  04b4348  ori 7, 5, 0
  04b434c  lfs 3, 184(3)
  04b4350  lfs 4, 0(4)
  04b4354  fmuls 3, 3, 4
  04b4358  lfs 4, 4(4)
  04b435c  addic 4, 4, 8
  04b4360  stfs 3, 184(3)
  04b4364  lfs 3, 4(5)
  04b4368  addic 3, 3, 8
  04b436c  fmuls 3, 3, 4
  04b4370  stfs 3, 4(5)
  04b4374  addic 5, 5, 8
  04b4378  bdnz 0x4b434c
  04b437c  ori 3, 1, 0
  04b4380  fmr 3, 25
  04b4384  mtctr 6
  04b4388  lfs 4, 184(3)
  04b438c  fadds 3, 3, 4
  04b4390  lfs 4, 4(7)
  04b4394  addic 3, 3, 16
  04b4398  lfs 5, 8(7)
  04b439c  lfs 6, 12(7)
  04b43a0  addic 7, 7, 16
  04b43a4  fadds 3, 3, 4
  04b43a8  fadds 3, 3, 5
  04b43ac  fadds 3, 3, 6
  04b43b0  bdnz 0x4b4388
  04b43b4  fadds 3, 3, 26
  04b43b8  fmadds 27, 3, 27, 2
  04b43bc  fmr 24, 31
  04b43c0  fmr 2, 27
  04b43c4  bl 0x5025e0
  04b43c8  nop
  04b43cc  lis 28, 143
  04b43d0  lis 27, 143
  04b43d4  fmr 31, 1
  04b43d8  fmr 1, 27
  04b43dc  addic 5, 30, 136
  04b43e0  ori 3, 31, 0
  04b43e4  fmr 4, 25
  04b43e8  lfs 2, 17732(28)
  04b43ec  lfs 3, 17736(27)
  04b43f0  bl 0xff2e8
  04b43f4  nop
  04b43f8  fmuls 1, 29, 29
  04b43fc  lfs 3, 17732(28)
  04b4400  fsubs 2, 24, 28
  04b4404  lfs 4, 17736(27)
  04b4408  fmadds 1, 30, 30, 1
  04b440c  fabs 6, 2
  04b4410  stfs 2, 132(1)
  04b4414  fsqrts 1, 1
  04b4418  fabs 5, 1
  04b441c  stfs 1, 128(1)
  04b4420  lwz 3, 132(1)
  04b4424  rlwinm 3, 3, 3, 29, 29
  04b4428  fsubs 1, 5, 6
  04b442c  stfs 1, 136(1)
  04b4430  lwz 4, 128(1)
  04b4434  lfs 1, 128(1)
  04b4438  lfs 2, 132(1)
  04b443c  lwz 5, 136(1)
  04b4440  lfs 7, 136(1)
  04b4444  fabs 1, 1
  04b4448  rlwimi 3, 5, 2, 30, 30
  04b444c  fabs 2, 2
  04b4450  fsub 8, 7, 25
  04b4454  fsub 7, 7, 25
  04b4458  rlwimi 3, 4, 4, 28, 28
  04b445c  ori 4, 29, 0
  04b4460  rlwimi 4, 3, 2, 26, 28
  04b4464  slwi 3, 3, 2
  04b4468  clrldi 4, 4, 32
  04b446c  fsel 6, 8, 1, 6
  04b4470  lfsx 1, 29, 3
  04b4474  fsel 5, 7, 2, 5
  04b4478  lfs 2, 4(4)
  04b447c  fcmpu 0, 6, 25
  04b4480  bt 1, 0x4b448c
  04b4484  fmr 26, 25
  04b4488  b 0x4b45a4
  04b448c  fsubs 7, 5, 6
  04b4490  fadds 5, 5, 6
  04b4494  addic 3, 1, 16
  04b4498  li 7, 2
  04b449c  addic 5, 3, 152
  04b44a0  addic 4, 3, 136
  04b44a4  mtctr 7
  04b44a8  fdivs 5, 7, 5
  04b44ac  fmuls 6, 5, 5
  04b44b0  stfs 5, 164(1)
  04b44b4  stfs 5, 156(1)
  04b44b8  stfs 5, 160(1)
  04b44bc  stfs 5, 152(1)
  04b44c0  lfs 8, 164(1)
  04b44c4  lfs 9, 156(1)
  04b44c8  lfs 10, 160(1)
  04b44cc  fmuls 7, 6, 6
  04b44d0  fmuls 9, 9, 6
  04b44d4  fmuls 8, 8, 7
  04b44d8  fmuls 5, 7, 7
  04b44dc  fmuls 7, 10, 7
  04b44e0  stfs 9, 156(1)
  04b44e4  fmuls 6, 8, 6
  04b44e8  stfs 7, 160(1)
  04b44ec  stfs 6, 164(1)
  04b44f0  lfs 6, 136(3)
  04b44f4  fmuls 6, 6, 5
  04b44f8  stfs 6, 152(3)
  04b44fc  lfs 6, 4(4)
  04b4500  addic 4, 4, 8
  04b4504  fmuls 6, 6, 5
  04b4508  addic 3, 3, 8
  04b450c  stfs 6, 4(5)
  04b4510  addic 5, 5, 8
  04b4514  bdnz 0x4b44f0
  04b4518  li 5, 4
  04b451c  ori 3, 1, 0
  04b4520  mtctr 5
  04b4524  lis 4, 115
  04b4528  addic 5, 3, 152
  04b452c  addic 4, 4, 22752
  04b4530  ori 6, 5, 0
  04b4534  lfs 5, 152(3)
  04b4538  lfs 6, 0(4)
  04b453c  fmuls 5, 5, 6
  04b4540  lfs 6, 4(4)
  04b4544  addic 4, 4, 8
  04b4548  stfs 5, 152(3)
  04b454c  lfs 5, 4(5)
  04b4550  addic 3, 3, 8
  04b4554  fmuls 5, 5, 6
  04b4558  stfs 5, 4(5)
  04b455c  addic 5, 5, 8
  04b4560  bdnz 0x4b4534
  04b4564  ori 3, 1, 0
  04b4568  fmr 5, 25
  04b456c  mtctr 7
  04b4570  lfs 6, 152(3)
  04b4574  fadds 5, 5, 6
  04b4578  lfs 6, 4(6)
  04b457c  addic 3, 3, 16
  04b4580  lfs 7, 8(6)
  04b4584  lfs 8, 12(6)
  04b4588  addic 6, 6, 16
  04b458c  fadds 5, 5, 6
  04b4590  fadds 5, 5, 7
  04b4594  fadds 5, 5, 8
  04b4598  bdnz 0x4b4570
  04b459c  fadds 26, 5, 26
  04b45a0  fmadds 26, 26, 1, 2
  04b45a4  fmr 2, 3
  04b45a8  addic 3, 31, 68
  04b45ac  fmr 3, 4
  04b45b0  fneg 1, 26
  04b45b4  addic 5, 30, 132
  04b45b8  fmr 4, 25
  04b45bc  bl 0x109b40
  04b45c0  nop
  04b45c4  lis 3, 143
  04b45c8  lis 4, 143
  04b45cc  fmr 4, 25
  04b45d0  lfs 1, 17744(3)
  04b45d4  fdivs 1, 31, 1
  04b45d8  lis 3, 75
  04b45dc  addi 3, 3, 16388
  04b45e0  lis 6, 143
  04b45e4  addic 5, 30, 128
  04b45e8  lfs 5, 12(3)
  04b45ec  lfs 6, 16(3)
  04b45f0  lfs 2, 20(3)
  04b45f4  lfs 3, 17736(4)
  04b45f8  lfs 7, 17740(6)
  04b45fc  addic 3, 31, 64
  04b4600  fsub 8, 5, 1
  04b4604  fsel 1, 8, 1, 5
  04b4608  fsub 5, 1, 6
  04b460c  fsel 1, 5, 1, 6
  04b4610  fmuls 1, 7, 1
  04b4614  bl 0x109b40
  04b4618  nop
  04b461c  li 3, 0
  04b4620  ld 0, 336(1)
  04b4624  mtlr 0
  04b4628  lfd 24, 256(1)
  04b462c  lfd 25, 264(1)
  04b4630  lfd 26, 272(1)
  04b4634  lfd 27, 280(1)
  04b4638  lfd 28, 288(1)
  04b463c  lfd 29, 296(1)
  04b4640  lfd 30, 304(1)
  04b4644  lfd 31, 312(1)
  04b4648  ld 27, 216(1)
  04b464c  ld 28, 224(1)
  04b4650  ld 29, 232(1)
  04b4654  ld 30, 240(1)
  04b4658  ld 31, 248(1)
  04b465c  addi 1, 1, 320
  04b4660  blr

M921_004b4670:   # 0x4b4670, 0x298 bytes
  04b4670  stdu 1, -96(1)
  04b4674  lwz 5, 120(3)
  04b4678  lis 4, 165
  04b467c  li 7, 0
  04b4680  addic 8, 4, 7136
  04b4684  lwz 4, 104(5)
  04b4688  slwi 4, 4, 2
  04b468c  extsw 6, 4
  04b4690  ori 4, 7, 0
  04b4694  lwzx 8, 8, 6
  04b4698  lwz 6, 0(8)
  04b469c  addic 6, 6, -1
  04b46a0  cmpwi 6, 0
  04b46a4  bf 1, 0x4b46fc
  04b46a8  ori 6, 8, 0
  04b46ac  lfs 1, 20(6)
  04b46b0  lfs 2, 36(6)
  04b46b4  lfs 3, 16(6)
  04b46b8  fsubs 1, 1, 2
  04b46bc  lfs 2, 32(6)
  04b46c0  fsubs 2, 3, 2
  04b46c4  lfs 3, 24(6)
  04b46c8  lfs 4, 40(6)
  04b46cc  fsubs 3, 3, 4
  04b46d0  fmuls 1, 1, 1
  04b46d4  lwz 9, 0(8)
  04b46d8  addic 7, 7, 1
  04b46dc  addic 9, 9, -1
  04b46e0  cmpw 7, 9
  04b46e4  fmadds 1, 2, 2, 1
  04b46e8  fmadds 1, 3, 3, 1
  04b46ec  fsqrts 1, 1
  04b46f0  stfs 1, 28(6)
  04b46f4  addic 6, 6, 16
  04b46f8  bt 0, 0x4b46ac
  04b46fc  lis 6, 75
  04b4700  stw 4, 96(5)
  04b4704  addi 6, 6, 18020
  04b4708  lfs 1, 0(6)
  04b470c  stw 4, 100(5)
  04b4710  lfs 2, 16(8)
  04b4714  stfs 2, 16(3)
  04b4718  lfs 3, 20(8)
  04b471c  stfs 3, 20(3)
  04b4720  lfs 4, 24(8)
  04b4724  stfs 4, 24(3)
  04b4728  lfs 4, 28(8)
  04b472c  stfs 4, 28(3)
  04b4730  lfs 4, 32(8)
  04b4734  lfs 5, 36(8)
  04b4738  fsubs 2, 4, 2
  04b473c  fsubs 3, 5, 3
  04b4740  lis 6, 115
  04b4744  addic 6, 6, 22784
  04b4748  fabs 5, 2
  04b474c  fabs 4, 3
  04b4750  stfs 2, 48(1)
  04b4754  stfs 3, 52(1)
  04b4758  fsubs 2, 5, 4
  04b475c  stfs 2, 56(1)
  04b4760  lwz 7, 48(1)
  04b4764  lfs 2, 48(1)
  04b4768  lwz 8, 52(1)
  04b476c  lfs 3, 52(1)
  04b4770  fabs 2, 2
  04b4774  lwz 9, 56(1)
  04b4778  rlwinm 8, 8, 3, 29, 29
  04b477c  fabs 6, 3
  04b4780  lfs 3, 56(1)
  04b4784  rlwimi 8, 9, 2, 30, 30
  04b4788  fsub 7, 3, 1
  04b478c  fsub 8, 3, 1
  04b4790  rlwimi 8, 7, 4, 28, 28
  04b4794  ori 7, 6, 0
  04b4798  rlwimi 7, 8, 2, 26, 28
  04b479c  slwi 8, 8, 2
  04b47a0  clrldi 7, 7, 32
  04b47a4  fsel 4, 7, 2, 4
  04b47a8  lfsx 3, 6, 8
  04b47ac  lfs 2, 4(7)
  04b47b0  fsel 5, 8, 6, 5
  04b47b4  fcmpu 0, 4, 1
  04b47b8  bt 1, 0x4b47c0
  04b47bc  b 0x4b48e4
  04b47c0  fsubs 6, 5, 4
  04b47c4  fadds 4, 5, 4
  04b47c8  addic 9, 1, 16
  04b47cc  li 6, 2
  04b47d0  addic 7, 9, 60
  04b47d4  addic 8, 9, 44
  04b47d8  mtctr 6
  04b47dc  fdivs 4, 6, 4
  04b47e0  fmuls 6, 4, 4
  04b47e4  stfs 4, 72(1)
  04b47e8  stfs 4, 64(1)
  04b47ec  stfs 4, 68(1)
  04b47f0  stfs 4, 60(1)
  04b47f4  lfs 7, 72(1)
  04b47f8  lfs 8, 64(1)
  04b47fc  lfs 9, 68(1)
  04b4800  fmuls 4, 6, 6
  04b4804  fmuls 8, 8, 6
  04b4808  fmuls 7, 7, 4
  04b480c  fmuls 5, 4, 4
  04b4810  fmuls 4, 9, 4
  04b4814  stfs 8, 64(1)
  04b4818  fmuls 6, 7, 6
  04b481c  stfs 4, 68(1)
  04b4820  stfs 6, 72(1)
  04b4824  lfs 4, 44(9)
  04b4828  fmuls 4, 4, 5
  04b482c  stfs 4, 60(9)
  04b4830  lfs 4, 4(8)
  04b4834  addic 8, 8, 8
  04b4838  fmuls 4, 4, 5
  04b483c  addic 9, 9, 8
  04b4840  stfs 4, 4(7)
  04b4844  addic 7, 7, 8
  04b4848  bdnz 0x4b4824
  04b484c  ori 10, 1, 0
  04b4850  li 7, 4
  04b4854  lis 9, 115
  04b4858  addic 8, 10, 60
  04b485c  mtctr 7
  04b4860  addic 9, 9, 22752
  04b4864  ori 7, 8, 0
  04b4868  lfs 4, 60(10)
  04b486c  lfs 5, 0(9)
  04b4870  fmuls 4, 4, 5
  04b4874  lfs 5, 4(9)
  04b4878  addic 9, 9, 8
  04b487c  stfs 4, 60(10)
  04b4880  lfs 4, 4(8)
  04b4884  addic 10, 10, 8
  04b4888  fmuls 4, 4, 5
  04b488c  stfs 4, 4(8)
  04b4890  addic 8, 8, 8
  04b4894  bdnz 0x4b4868
  04b4898  ori 8, 6, 0
  04b489c  ori 6, 1, 0
  04b48a0  mtctr 8
  04b48a4  lfs 4, 60(6)
  04b48a8  fadds 1, 1, 4
  04b48ac  lfs 4, 4(7)
  04b48b0  addic 6, 6, 16
  04b48b4  lfs 5, 8(7)
  04b48b8  lfs 6, 12(7)
  04b48bc  addic 7, 7, 16
  04b48c0  fadds 1, 1, 4
  04b48c4  fadds 1, 1, 5
  04b48c8  fadds 1, 1, 6
  04b48cc  bdnz 0x4b48a4
  04b48d0  lis 6, 75
  04b48d4  addi 6, 6, 18020
  04b48d8  lfs 4, 4(6)
  04b48dc  fadds 1, 1, 4
  04b48e0  fmadds 1, 1, 3, 2
  04b48e4  stfs 1, 72(3)
  04b48e8  stw 4, 120(5)
  04b48ec  stw 4, 116(5)
  04b48f0  stw 4, 112(5)
  04b48f4  stw 4, 136(5)
  04b48f8  stw 4, 132(5)
  04b48fc  stw 4, 128(5)
  04b4900  addi 1, 1, 96
  04b4904  blr

UpdateMoby_921:   # 0x4b4930, 0xd9c bytes
  04b4930  stdu 1, -336(1)
  04b4934  mflr 0
  04b4938  std 0, 352(1)
  04b493c  stfd 30, 320(1)
  04b4940  stfd 31, 328(1)
  04b4944  std 31, 312(1)
  04b4948  lbz 4, 32(3)
  04b494c  std 30, 304(1)
  04b4950  ori 31, 3, 0
  04b4954  lwz 30, 120(3)
  04b4958  std 29, 296(1)
  04b495c  std 28, 288(1)
  04b4960  std 27, 280(1)
  04b4964  std 26, 272(1)
  04b4968  cmpwi 4, 0
  04b496c  bf 2, 0x4b4a00
  04b4970  lis 3, 165
  04b4974  addic 5, 3, 17860
  04b4978  lhz 3, 178(31)
  04b497c  extsh 4, 3
  04b4980  lbzx 5, 5, 4
  04b4984  cmpwi 5, 0
  04b4988  bf 2, 0x4b49d0
  04b498c  lis 6, 151
  04b4990  lis 5, 161
  04b4994  srawi 4, 4, 5
  04b4998  addic 5, 5, -13028
  04b499c  sldi 4, 4, 2
  04b49a0  lwz 6, -25488(6)
  04b49a4  clrlwi 3, 3, 27
  04b49a8  addc 4, 4, 5
  04b49ac  slwi 5, 6, 8
  04b49b0  clrldi 4, 4, 32
  04b49b4  extsw 5, 5
  04b49b8  li 6, 1
  04b49bc  slw 3, 6, 3
  04b49c0  lwzx 4, 4, 5
  04b49c4  and 3, 4, 3
  04b49c8  cmpwi 3, 0
  04b49cc  bt 2, 0x4b4a00
  04b49d0  lis 3, 164
  04b49d4  lwz 4, 140(30)
  04b49d8  slwi 4, 4, 8
  04b49dc  lwz 3, -28512(3)
  04b49e0  addc 3, 3, 4
  04b49e4  clrldi 3, 3, 32
  04b49e8  bl 0x4b6304
  04b49ec  nop
  04b49f0  ori 3, 31, 0
  04b49f4  bl 0xefb38
  04b49f8  nop
  04b49fc  b 0x4b569c
  04b4a00  lis 4, 128
  04b4a04  ori 3, 31, 0
  04b4a08  li 5, 0
  04b4a0c  bl 0x10675c
  04b4a10  nop
  04b4a14  li 4, 255
  04b4a18  cmpwi 3, 0
  04b4a1c  stb 4, 164(31)
  04b4a20  bt 2, 0x4b4b08
  04b4a24  lwz 3, 140(30)
  04b4a28  cmpwi 3, -1
  04b4a2c  bf 2, 0x4b4b08
  04b4a30  lbz 3, 32(31)
  04b4a34  cmpwi 3, 3
  04b4a38  bt 2, 0x4b4b08
  04b4a3c  lis 3, 151
  04b4a40  lwz 3, -25488(3)
  04b4a44  cmpwi 3, 14
  04b4a48  bf 2, 0x4b4a70
  04b4a4c  lis 3, 151
  04b4a50  lwz 4, -13840(3)
  04b4a54  addic 4, 4, 1
  04b4a58  cmpwi 4, 3
  04b4a5c  stw 4, -13840(3)
  04b4a60  bt 0, 0x4b4a70
  04b4a64  li 3, 24
  04b4a68  bl 0x11b728
  04b4a6c  nop
  04b4a70  lis 5, 75
  04b4a74  li 3, 3
  04b4a78  addi 5, 5, 18696
  04b4a7c  addic 4, 31, 16
  04b4a80  li 6, -1
  04b4a84  stb 3, 32(31)
  04b4a88  ori 3, 31, 0
  04b4a8c  lfs 1, 0(5)
  04b4a90  lfs 2, 4(5)
  04b4a94  bl 0x10fb28
  04b4a98  nop
  04b4a9c  lhz 4, 52(31)
  04b4aa0  li 5, 0
  04b4aa4  lwz 3, 108(30)
  04b4aa8  ori 4, 4, 65
  04b4aac  cmpwi 3, -1
  04b4ab0  stw 5, 148(31)
  04b4ab4  sth 4, 52(31)
  04b4ab8  bt 2, 0x4b4b00
  04b4abc  sldi 4, 3, 7
  04b4ac0  sldi 6, 3, 4
  04b4ac4  lis 5, 150
  04b4ac8  subc 4, 4, 6
  04b4acc  addic 5, 5, 14312
  04b4ad0  extsw 4, 4
  04b4ad4  lwzx 5, 5, 4
  04b4ad8  cmpw 5, 31
  04b4adc  bf 2, 0x4b4b00
  04b4ae0  lis 5, 150
  04b4ae4  addic 5, 5, 14292
  04b4ae8  lbzx 4, 5, 4
  04b4aec  cmpwi 4, 0
  04b4af0  bt 2, 0x4b4b00
  04b4af4  extsw 3, 3
  04b4af8  bl 0x15cdb0
  04b4afc  nop
  04b4b00  li 3, -1
  04b4b04  stw 3, 108(30)
  04b4b08  lbz 3, 32(31)
  04b4b0c  cmpwi 3, 1
  04b4b10  cmpwi 1, 3, -1
  04b4b14  cmpwi 6, 3, 0
  04b4b18  cmpwi 7, 3, 2
  04b4b1c  bt 1, 0x4b4b2c
  04b4b20  bf 5, 0x4b5644
  04b4b24  bf 25, 0x4b4b3c
  04b4b28  b 0x4b4cc4
  04b4b2c  bf 29, 0x4b5284
  04b4b30  cmpwi 3, 3
  04b4b34  bf 1, 0x4b53a0
  04b4b38  b 0x4b5644
  04b4b3c  lwz 3, 104(30)
  04b4b40  cmpwi 3, -1
  04b4b44  bf 2, 0x4b4b70
  04b4b48  lis 3, 102
  04b4b4c  lhz 4, 178(31)
  04b4b50  addic 3, 3, -30036
  04b4b54  extsh 4, 4
  04b4b58  bl 0x5cd098
  04b4b5c  nop
  04b4b60  ori 3, 31, 0
  04b4b64  bl 0xefb38
  04b4b68  nop
  04b4b6c  b 0x4b569c
  04b4b70  lis 4, 165
  04b4b74  slwi 3, 3, 2
  04b4b78  addic 4, 4, 7136
  04b4b7c  extsw 3, 3
  04b4b80  lwzx 3, 4, 3
  04b4b84  lwz 3, 0(3)
  04b4b88  cmpwi 3, 0
  04b4b8c  bf 2, 0x4b4bb8
  04b4b90  lis 3, 102
  04b4b94  lhz 4, 178(31)
  04b4b98  addic 3, 3, -29980
  04b4b9c  extsh 4, 4
  04b4ba0  bl 0x5cd098
  04b4ba4  nop
  04b4ba8  ori 3, 31, 0
  04b4bac  bl 0xefb38
  04b4bb0  nop
  04b4bb4  b 0x4b569c
  04b4bb8  lwz 3, 152(30)
  04b4bbc  cmpwi 3, 0
  04b4bc0  bt 0, 0x4b4bdc
  04b4bc4  lwz 3, 156(30)
  04b4bc8  cmpwi 3, 0
  04b4bcc  bt 0, 0x4b4bdc
  04b4bd0  lwz 3, 160(30)
  04b4bd4  cmpwi 3, 0
  04b4bd8  bf 0, 0x4b4bec
  04b4bdc  ori 3, 31, 0
  04b4be0  bl 0xefb38
  04b4be4  nop
  04b4be8  b 0x4b569c
  04b4bec  ori 3, 31, 0
  04b4bf0  bl 0x4b4670
  04b4bf4  lwz 3, 140(30)
  04b4bf8  cmpwi 3, 0
  04b4bfc  bt 2, 0x4b4c50
  04b4c00  li 3, 1
  04b4c04  li 4, 255
  04b4c08  lis 5, 164
  04b4c0c  li 6, 0
  04b4c10  stb 3, 32(31)
  04b4c14  stb 4, 48(31)
  04b4c18  lhz 3, 52(31)
  04b4c1c  lwz 4, 140(30)
  04b4c20  ori 3, 3, 65
  04b4c24  lwz 5, -28512(5)
  04b4c28  slwi 4, 4, 8
  04b4c2c  stw 6, 148(31)
  04b4c30  addc 4, 5, 4
  04b4c34  sth 3, 52(31)
  04b4c38  clrldi 3, 4, 32
  04b4c3c  lhz 4, 52(3)
  04b4c40  ori 4, 4, 65
  04b4c44  sth 4, 52(3)
  04b4c48  stw 6, 148(30)
  04b4c4c  b 0x4b4c60
  04b4c50  li 3, 2
  04b4c54  li 4, 128
  04b4c58  stb 3, 32(31)
  04b4c5c  stb 4, 48(31)
  04b4c60  li 3, -1
  04b4c64  lis 4, 143
  04b4c68  vspltisw 4, -1
  04b4c6c  li 5, 17748
  04b4c70  li 6, 128
  04b4c74  stw 3, 108(30)
  04b4c78  li 7, 8
  04b4c7c  lis 3, 75
  04b4c80  vslw 4, 4, 4
  04b4c84  lvlx 2, 5, 4
  04b4c88  addi 3, 3, 18696
  04b4c8c  sth 6, 50(31)
  04b4c90  li 4, -3056
  04b4c94  vcfsx 2, 2, 0
  04b4c98  lvlx 3, 7, 3
  04b4c9c  lis 3, 114
  04b4ca0  vspltw 3, 3, 0
  04b4ca4  vaddfp 2, 2, 3
  04b4ca8  lvlx 3, 4, 3
  04b4cac  li 3, 124
  04b4cb0  vmaddfp 2, 3, 2, 4
  04b4cb4  vctsxs 2, 2, 0
  04b4cb8  vspltw 2, 2, 0
  04b4cbc  stvewx 2, 3, 30
  04b4cc0  b 0x4b5644
  04b4cc4  lis 4, 151
  04b4cc8  lwz 5, 152(30)
  04b4ccc  lis 3, 161
  04b4cd0  addic 3, 3, -13692
  04b4cd4  lwz 4, -25488(4)
  04b4cd8  addc 5, 5, 3
  04b4cdc  slwi 4, 4, 4
  04b4ce0  clrldi 5, 5, 32
  04b4ce4  extsw 4, 4
  04b4ce8  lbzx 5, 5, 4
  04b4cec  cmpwi 5, 255
  04b4cf0  bf 2, 0x4b5644
  04b4cf4  lwz 5, 156(30)
  04b4cf8  addc 5, 5, 3
  04b4cfc  clrldi 5, 5, 32
  04b4d00  lbzx 5, 5, 4
  04b4d04  cmpwi 5, 255
  04b4d08  bf 2, 0x4b5644
  04b4d0c  lwz 5, 160(30)
  04b4d10  addc 3, 5, 3
  04b4d14  clrldi 3, 3, 32
  04b4d18  lbzx 3, 3, 4
  04b4d1c  cmpwi 3, 255
  04b4d20  bf 2, 0x4b5644
  04b4d24  lis 3, 151
  04b4d28  addic 3, 3, -25376
  04b4d2c  lhz 4, 780(3)
  04b4d30  cmpwi 4, 0
  04b4d34  bf 2, 0x4b5644
  04b4d38  lwz 4, 764(3)
  04b4d3c  cmpwi 4, 0
  04b4d40  bf 2, 0x4b5644
  04b4d44  addic 3, 3, 128
  04b4d48  lwz 4, 164(30)
  04b4d4c  extsw 4, 4
  04b4d50  bl 0x110b70
  04b4d54  nop
  04b4d58  cmpwi 3, 0
  04b4d5c  bt 2, 0x4b5644
  04b4d60  lis 3, 164
  04b4d64  lwz 4, 140(30)
  04b4d68  lis 27, 149
  04b4d6c  slwi 4, 4, 8
  04b4d70  lwz 3, -28512(3)
  04b4d74  addc 28, 3, 4
  04b4d78  lis 4, 75
  04b4d7c  clrldi 28, 28, 32
  04b4d80  addi 4, 4, 18696
  04b4d84  addic 27, 27, 5056
  04b4d88  lwz 5, 120(28)
  04b4d8c  lwz 5, 4(5)
  04b4d90  slwi 5, 5, 8
  04b4d94  addc 29, 3, 5
  04b4d98  clrldi 29, 29, 32
  04b4d9c  lfs 1, 16(29)
  04b4da0  stfs 1, 112(1)
  04b4da4  lfs 2, 20(29)
  04b4da8  stfs 2, 116(1)
  04b4dac  lfs 3, 24(29)
  04b4db0  stfs 3, 120(1)
  04b4db4  lfs 4, 28(29)
  04b4db8  stfs 4, 124(1)
  04b4dbc  lfs 4, 12(4)
  04b4dc0  fadds 3, 3, 4
  04b4dc4  lis 26, 115
  04b4dc8  addic 26, 26, 22784
  04b4dcc  stfs 3, 120(1)
  04b4dd0  lfs 4, 324(27)
  04b4dd4  lfs 5, 320(27)
  04b4dd8  fsubs 2, 4, 2
  04b4ddc  fsubs 1, 5, 1
  04b4de0  fmuls 2, 2, 2
  04b4de4  fmadds 1, 1, 1, 2
  04b4de8  lfs 2, 328(27)
  04b4dec  lfs 31, 340(27)
  04b4df0  fsubs 2, 3, 2
  04b4df4  fsqrts 1, 1
  04b4df8  stfs 2, 156(1)
  04b4dfc  fabs 4, 2
  04b4e00  fabs 3, 1
  04b4e04  stfs 1, 152(1)
  04b4e08  lwz 3, 156(1)
  04b4e0c  lfs 2, 156(1)
  04b4e10  rlwinm 3, 3, 3, 29, 29
  04b4e14  fabs 5, 2
  04b4e18  fsubs 1, 3, 4
  04b4e1c  stfs 1, 160(1)
  04b4e20  lwz 5, 152(1)
  04b4e24  lfs 30, 16(4)
  04b4e28  lfs 1, 152(1)
  04b4e2c  lwz 4, 160(1)
  04b4e30  lfs 2, 160(1)
  04b4e34  fabs 1, 1
  04b4e38  rlwimi 3, 4, 2, 30, 30
  04b4e3c  fsub 6, 2, 30
  04b4e40  ori 4, 26, 0
  04b4e44  fsub 7, 2, 30
  04b4e48  rlwimi 3, 5, 4, 28, 28
  04b4e4c  rlwimi 4, 3, 2, 26, 28
  04b4e50  slwi 3, 3, 2
  04b4e54  clrldi 4, 4, 32
  04b4e58  fsel 4, 6, 1, 4
  04b4e5c  lfsx 1, 26, 3
  04b4e60  fsel 3, 7, 5, 3
  04b4e64  lfs 2, 4(4)
  04b4e68  fcmpu 0, 4, 30
  04b4e6c  bt 1, 0x4b4e78
  04b4e70  fmr 1, 30
  04b4e74  b 0x4b4f9c
  04b4e78  fsubs 5, 3, 4
  04b4e7c  fadds 3, 3, 4
  04b4e80  addic 3, 1, 16
  04b4e84  li 6, 2
  04b4e88  addic 5, 3, 228
  04b4e8c  addic 4, 3, 212
  04b4e90  mtctr 6
  04b4e94  fdivs 3, 5, 3
  04b4e98  fmuls 4, 3, 3
  04b4e9c  stfs 3, 240(1)
  04b4ea0  stfs 3, 232(1)
  04b4ea4  stfs 3, 236(1)
  04b4ea8  stfs 3, 228(1)
  04b4eac  lfs 6, 240(1)
  04b4eb0  lfs 7, 232(1)
  04b4eb4  lfs 8, 236(1)
  04b4eb8  fmuls 5, 4, 4
  04b4ebc  fmuls 7, 7, 4
  04b4ec0  fmuls 6, 6, 5
  04b4ec4  fmuls 3, 5, 5
  04b4ec8  fmuls 5, 8, 5
  04b4ecc  stfs 7, 232(1)
  04b4ed0  fmuls 4, 6, 4
  04b4ed4  stfs 5, 236(1)
  04b4ed8  stfs 4, 240(1)
  04b4edc  lfs 4, 212(3)
  04b4ee0  fmuls 4, 4, 3
  04b4ee4  stfs 4, 228(3)
  04b4ee8  lfs 4, 4(4)
  04b4eec  addic 4, 4, 8
  04b4ef0  fmuls 4, 4, 3
  04b4ef4  addic 3, 3, 8
  04b4ef8  stfs 4, 4(5)
  04b4efc  addic 5, 5, 8
  04b4f00  bdnz 0x4b4edc
  04b4f04  li 5, 4
  04b4f08  ori 3, 1, 0
  04b4f0c  mtctr 5
  04b4f10  lis 4, 115
  04b4f14  addic 5, 3, 228
  04b4f18  addic 4, 4, 22752
  04b4f1c  ori 7, 5, 0
  04b4f20  lfs 3, 228(3)
  04b4f24  lfs 4, 0(4)
  04b4f28  fmuls 3, 3, 4
  04b4f2c  lfs 4, 4(4)
  04b4f30  addic 4, 4, 8
  04b4f34  stfs 3, 228(3)
  04b4f38  lfs 3, 4(5)
  04b4f3c  addic 3, 3, 8
  04b4f40  fmuls 3, 3, 4
  04b4f44  stfs 3, 4(5)
  04b4f48  addic 5, 5, 8
  04b4f4c  bdnz 0x4b4f20
  04b4f50  ori 3, 1, 0
  04b4f54  fmr 3, 30
  04b4f58  mtctr 6
  04b4f5c  lfs 4, 228(3)
  04b4f60  fadds 3, 3, 4
  04b4f64  lfs 4, 4(7)
  04b4f68  addic 3, 3, 16
  04b4f6c  lfs 5, 8(7)
  04b4f70  lfs 6, 12(7)
  04b4f74  addic 7, 7, 16
  04b4f78  fadds 3, 3, 4
  04b4f7c  fadds 3, 3, 5
  04b4f80  fadds 3, 3, 6
  04b4f84  bdnz 0x4b4f5c
  04b4f88  lis 3, 75
  04b4f8c  addi 3, 3, 18696
  04b4f90  lfs 4, 20(3)
  04b4f94  fadds 3, 3, 4
  04b4f98  fmadds 1, 3, 1, 2
  04b4f9c  fneg 2, 1
  04b4fa0  fmr 1, 31
  04b4fa4  bl 0x5026a0
  04b4fa8  nop
  04b4fac  lfs 2, 16(29)
  04b4fb0  lfs 3, 320(27)
  04b4fb4  lfs 4, 20(29)
  04b4fb8  lfs 5, 324(27)
  04b4fbc  fsubs 2, 2, 3
  04b4fc0  fsubs 3, 4, 5
  04b4fc4  fmr 31, 1
  04b4fc8  fabs 4, 2
  04b4fcc  fabs 5, 3
  04b4fd0  stfs 2, 140(1)
  04b4fd4  stfs 3, 144(1)
  04b4fd8  fsubs 2, 4, 5
  04b4fdc  stfs 2, 148(1)
  04b4fe0  lwz 3, 140(1)
  04b4fe4  lfs 1, 140(1)
  04b4fe8  lwz 4, 144(1)
  04b4fec  lfs 2, 144(1)
  04b4ff0  fabs 1, 1
  04b4ff4  lwz 5, 148(1)
  04b4ff8  rlwinm 4, 4, 3, 29, 29
  04b4ffc  fabs 6, 2
  04b5000  lfs 2, 148(1)
  04b5004  rlwimi 4, 5, 2, 30, 30
  04b5008  fsub 3, 2, 30
  04b500c  rlwimi 4, 3, 4, 28, 28
  04b5010  fsub 7, 2, 30
  04b5014  ori 3, 26, 0
  04b5018  rlwimi 3, 4, 2, 26, 28
  04b501c  slwi 4, 4, 2
  04b5020  clrldi 3, 3, 32
  04b5024  fsel 5, 3, 1, 5
  04b5028  lfsx 2, 26, 4
  04b502c  lfs 3, 4(3)
  04b5030  fsel 4, 7, 6, 4
  04b5034  lfs 1, 344(27)
  04b5038  fcmpu 0, 5, 30
  04b503c  bt 1, 0x4b5044
  04b5040  b 0x4b5164
  04b5044  fsubs 6, 4, 5
  04b5048  fadds 4, 4, 5
  04b504c  addic 3, 1, 16
  04b5050  li 6, 2
  04b5054  addic 4, 3, 180
  04b5058  addic 5, 3, 196
  04b505c  mtctr 6
  04b5060  fdivs 4, 6, 4
  04b5064  fmuls 5, 4, 4
  04b5068  stfs 4, 208(1)
  04b506c  stfs 4, 200(1)
  04b5070  stfs 4, 204(1)
  04b5074  stfs 4, 196(1)
  04b5078  lfs 7, 208(1)
  04b507c  lfs 8, 200(1)
  04b5080  lfs 9, 204(1)
  04b5084  fmuls 6, 5, 5
  04b5088  fmuls 8, 8, 5
  04b508c  fmuls 7, 7, 6
  04b5090  fmuls 4, 6, 6
  04b5094  fmuls 6, 9, 6
  04b5098  stfs 8, 200(1)
  04b509c  fmuls 5, 7, 5
  04b50a0  stfs 6, 204(1)
  04b50a4  stfs 5, 208(1)
  04b50a8  lfs 5, 180(3)
  04b50ac  fmuls 5, 5, 4
  04b50b0  stfs 5, 196(3)
  04b50b4  lfs 5, 4(4)
  04b50b8  addic 3, 3, 8
  04b50bc  addic 4, 4, 8
  04b50c0  fmuls 5, 5, 4
  04b50c4  stfs 5, 4(5)
  04b50c8  addic 5, 5, 8
  04b50cc  bdnz 0x4b50a8
  04b50d0  li 5, 4
  04b50d4  ori 3, 1, 0
  04b50d8  mtctr 5
  04b50dc  lis 4, 115
  04b50e0  addic 5, 3, 196
  04b50e4  addic 4, 4, 22752
  04b50e8  ori 7, 5, 0
  04b50ec  lfs 4, 196(3)
  04b50f0  lfs 5, 0(4)
  04b50f4  fmuls 4, 4, 5
  04b50f8  lfs 5, 4(4)
  04b50fc  addic 4, 4, 8
  04b5100  stfs 4, 196(3)
  04b5104  lfs 4, 4(5)
  04b5108  addic 3, 3, 8
  04b510c  fmuls 4, 4, 5
  04b5110  stfs 4, 4(5)
  04b5114  addic 5, 5, 8
  04b5118  bdnz 0x4b50ec
  04b511c  ori 3, 1, 0
  04b5120  mtctr 6
  04b5124  lfs 4, 196(3)
  04b5128  lfs 5, 4(7)
  04b512c  fadds 4, 30, 4
  04b5130  lfs 6, 8(7)
  04b5134  lfs 30, 12(7)
  04b5138  addic 3, 3, 16
  04b513c  addic 7, 7, 16
  04b5140  fadds 4, 4, 5
  04b5144  fadds 4, 4, 6
  04b5148  fadds 30, 4, 30
  04b514c  bdnz 0x4b5124
  04b5150  lis 3, 75
  04b5154  addi 3, 3, 18696
  04b5158  lfs 4, 20(3)
  04b515c  fadds 30, 30, 4
  04b5160  fmadds 30, 30, 2, 3
  04b5164  fmr 2, 30
  04b5168  bl 0x5026a0
  04b516c  nop
  04b5170  lis 3, 75
  04b5174  addi 3, 3, 18696
  04b5178  lfs 2, 24(3)
  04b517c  fcmpu 0, 1, 2
  04b5180  cror 6, 1, 2
  04b5184  bt 6, 0x4b5644
  04b5188  lis 3, 75
  04b518c  addi 3, 3, 18696
  04b5190  lfs 1, 28(3)
  04b5194  fcmpu 0, 31, 1
  04b5198  cror 6, 1, 2
  04b519c  bt 6, 0x4b5644
  04b51a0  addic 3, 27, 320
  04b51a4  addic 4, 1, 112
  04b51a8  li 5, 18
  04b51ac  ori 6, 29, 0
  04b51b0  li 7, 0
  04b51b4  bl 0x57820
  04b51b8  nop
  04b51bc  cmpwi 3, 0
  04b51c0  bf 2, 0x4b5644
  04b51c4  lhz 6, 178(31)
  04b51c8  lis 4, 151
  04b51cc  lis 3, 161
  04b51d0  extsh 7, 6
  04b51d4  addic 3, 3, -13028
  04b51d8  srawi 7, 7, 5
  04b51dc  lwz 4, -25488(4)
  04b51e0  lis 5, 165
  04b51e4  sldi 7, 7, 2
  04b51e8  slwi 4, 4, 8
  04b51ec  addc 3, 7, 3
  04b51f0  extsw 4, 4
  04b51f4  clrldi 3, 3, 32
  04b51f8  extsh 7, 6
  04b51fc  clrlwi 8, 6, 27
  04b5200  srawi 7, 7, 5
  04b5204  li 9, 1
  04b5208  addic 5, 5, 19920
  04b520c  sldi 7, 7, 2
  04b5210  lwzx 10, 3, 4
  04b5214  slw 8, 9, 8
  04b5218  lhz 11, 52(31)
  04b521c  clrlwi 6, 6, 27
  04b5220  or 8, 10, 8
  04b5224  slw 6, 9, 6
  04b5228  li 9, -66
  04b522c  lwzx 10, 5, 7
  04b5230  and 11, 11, 9
  04b5234  stwx 8, 3, 4
  04b5238  or 3, 10, 6
  04b523c  lwz 4, 36(31)
  04b5240  li 6, 2
  04b5244  sth 11, 52(31)
  04b5248  stwx 3, 5, 7
  04b524c  lwz 3, 16(4)
  04b5250  stw 3, 148(31)
  04b5254  lhz 3, 52(28)
  04b5258  and 3, 3, 9
  04b525c  sth 3, 52(28)
  04b5260  stb 6, 32(31)
  04b5264  lwz 3, 144(30)
  04b5268  extsw 3, 3
  04b526c  bl 0x3fba8
  04b5270  nop
  04b5274  li 3, 255
  04b5278  sth 3, 50(29)
  04b527c  stb 3, 48(29)
  04b5280  b 0x4b5644
  04b5284  ori 3, 31, 0
  04b5288  bl 0x4b4020
  04b528c  cmpwi 3, 0
  04b5290  bf 2, 0x4b569c
  04b5294  lwz 3, 140(30)
  04b5298  cmpwi 3, 0
  04b529c  bt 2, 0x4b5644
  04b52a0  lwz 4, 148(30)
  04b52a4  cmpwi 4, 2
  04b52a8  cmpwi 1, 4, 0
  04b52ac  bf 0, 0x4b5644
  04b52b0  bf 6, 0x4b52c8
  04b52b4  lwz 4, 96(30)
  04b52b8  cmpwi 4, 56
  04b52bc  bt 0, 0x4b52c8
  04b52c0  li 4, 1
  04b52c4  stw 4, 148(30)
  04b52c8  lis 4, 75
  04b52cc  lfs 1, 224(31)
  04b52d0  addi 4, 4, 18696
  04b52d4  slwi 3, 3, 8
  04b52d8  lfs 2, 36(4)
  04b52dc  lfs 3, 32(4)
  04b52e0  lfs 4, 228(31)
  04b52e4  fmuls 1, 1, 2
  04b52e8  lfs 5, 232(31)
  04b52ec  lis 4, 164
  04b52f0  fmuls 4, 4, 2
  04b52f4  lfs 6, 192(31)
  04b52f8  fmuls 2, 5, 2
  04b52fc  lfs 7, 196(31)
  04b5300  lfs 8, 200(31)
  04b5304  lfs 9, 16(31)
  04b5308  lfs 5, 20(31)
  04b530c  lfs 10, 24(31)
  04b5310  lwz 4, -28512(4)
  04b5314  lfs 11, 28(31)
  04b5318  fmadds 1, 6, 3, 1
  04b531c  addc 3, 4, 3
  04b5320  fmadds 4, 7, 3, 4
  04b5324  clrldi 3, 3, 32
  04b5328  fmadds 2, 8, 3, 2
  04b532c  stfs 11, 28(3)
  04b5330  fadds 1, 9, 1
  04b5334  fadds 3, 5, 4
  04b5338  fadds 2, 10, 2
  04b533c  stfs 1, 16(3)
  04b5340  stfs 3, 20(3)
  04b5344  stfs 2, 24(3)
  04b5348  lfs 1, 64(31)
  04b534c  stfs 1, 64(3)
  04b5350  lfs 1, 68(31)
  04b5354  stfs 1, 68(3)
  04b5358  lfs 1, 72(31)
  04b535c  stfs 1, 72(3)
  04b5360  lfs 1, 76(31)
  04b5364  stfs 1, 76(3)
  04b5368  lwz 3, 148(30)
  04b536c  cmpwi 3, 1
  04b5370  bf 2, 0x4b5644
  04b5374  lis 3, 164
  04b5378  lwz 4, 140(30)
  04b537c  slwi 4, 4, 8
  04b5380  lwz 3, -28512(3)
  04b5384  addc 3, 3, 4
  04b5388  clrldi 3, 3, 32
  04b538c  bl 0x4b62f8
  04b5390  nop
  04b5394  li 3, 2
  04b5398  stw 3, 148(30)
  04b539c  b 0x4b5644
  04b53a0  addic 3, 30, 124
  04b53a4  bl 0x4fff60
  04b53a8  nop
  04b53ac  cmpwi 3, 0
  04b53b0  bt 2, 0x4b5644
  04b53b4  lis 5, 143
  04b53b8  li 6, 17748
  04b53bc  lwz 7, 104(30)
  04b53c0  li 4, -66
  04b53c4  lhz 8, 52(31)
  04b53c8  lis 3, 165
  04b53cc  lwz 9, 36(31)
  04b53d0  and 4, 8, 4
  04b53d4  vspltisw 4, -1
  04b53d8  slwi 7, 7, 2
  04b53dc  lvlx 2, 6, 5
  04b53e0  addic 3, 3, 7136
  04b53e4  extsw 7, 7
  04b53e8  lis 5, 75
  04b53ec  sth 4, 52(31)
  04b53f0  vcfsx 2, 2, 0
  04b53f4  li 6, 8
  04b53f8  addi 4, 5, 18696
  04b53fc  vslw 4, 4, 4
  04b5400  lwz 5, 16(9)
  04b5404  lwzx 3, 3, 7
  04b5408  stw 5, 148(31)
  04b540c  lis 5, 114
  04b5410  lvlx 3, 6, 4
  04b5414  li 6, -3056
  04b5418  vspltw 3, 3, 0
  04b541c  li 7, 0
  04b5420  vaddfp 2, 2, 3
  04b5424  lvlx 5, 6, 5
  04b5428  li 5, 124
  04b542c  li 6, 2
  04b5430  vmaddfp 2, 5, 2, 4
  04b5434  vctsxs 2, 2, 0
  04b5438  vspltw 2, 2, 0
  04b543c  stvewx 2, 5, 30
  04b5440  stb 6, 32(31)
  04b5444  stw 7, 96(30)
  04b5448  lfs 4, 16(4)
  04b544c  stw 7, 100(30)
  04b5450  lfs 1, 16(3)
  04b5454  stfs 1, 16(31)
  04b5458  lfs 2, 20(3)
  04b545c  stfs 2, 20(31)
  04b5460  lfs 3, 24(3)
  04b5464  stfs 3, 24(31)
  04b5468  lfs 3, 28(3)
  04b546c  stfs 3, 28(31)
  04b5470  lfs 3, 32(3)
  04b5474  lfs 5, 36(3)
  04b5478  fsubs 1, 3, 1
  04b547c  fsubs 2, 5, 2
  04b5480  lis 3, 115
  04b5484  addic 3, 3, 22784
  04b5488  fabs 3, 1
  04b548c  fabs 5, 2
  04b5490  stfs 1, 128(1)
  04b5494  stfs 2, 132(1)
  04b5498  fsubs 1, 3, 5
  04b549c  stfs 1, 136(1)
  04b54a0  lwz 4, 128(1)
  04b54a4  lfs 1, 128(1)
  04b54a8  lwz 5, 132(1)
  04b54ac  lfs 2, 132(1)
  04b54b0  lwz 6, 136(1)
  04b54b4  rlwinm 5, 5, 3, 29, 29
  04b54b8  lfs 6, 136(1)
  04b54bc  fabs 1, 1
  04b54c0  rlwimi 5, 6, 2, 30, 30
  04b54c4  fabs 2, 2
  04b54c8  fsub 7, 6, 4
  04b54cc  fsub 6, 6, 4
  04b54d0  rlwimi 5, 4, 4, 28, 28
  04b54d4  ori 4, 3, 0
  04b54d8  rlwimi 4, 5, 2, 26, 28
  04b54dc  slwi 5, 5, 2
  04b54e0  clrldi 4, 4, 32
  04b54e4  fsel 5, 7, 1, 5
  04b54e8  lfsx 1, 3, 5
  04b54ec  fsel 3, 6, 2, 3
  04b54f0  lfs 2, 4(4)
  04b54f4  fcmpu 0, 5, 4
  04b54f8  bt 1, 0x4b5500
  04b54fc  b 0x4b5624
  04b5500  fsubs 6, 3, 5
  04b5504  fadds 3, 3, 5
  04b5508  addic 3, 1, 16
  04b550c  li 6, 2
  04b5510  addic 4, 3, 148
  04b5514  addic 5, 3, 164
  04b5518  mtctr 6
  04b551c  fdivs 3, 6, 3
  04b5520  fmuls 5, 3, 3
  04b5524  stfs 3, 176(1)
  04b5528  stfs 3, 168(1)
  04b552c  stfs 3, 172(1)
  04b5530  stfs 3, 164(1)
  04b5534  lfs 7, 176(1)
  04b5538  lfs 8, 168(1)
  04b553c  lfs 9, 172(1)
  04b5540  fmuls 6, 5, 5
  04b5544  fmuls 8, 8, 5
  04b5548  fmuls 7, 7, 6
  04b554c  fmuls 3, 6, 6
  04b5550  fmuls 6, 9, 6
  04b5554  stfs 8, 168(1)
  04b5558  fmuls 5, 7, 5
  04b555c  stfs 6, 172(1)
  04b5560  stfs 5, 176(1)
  04b5564  lfs 5, 148(3)
  04b5568  fmuls 5, 5, 3
  04b556c  stfs 5, 164(3)
  04b5570  lfs 5, 4(4)
  04b5574  addic 3, 3, 8
  04b5578  addic 4, 4, 8
  04b557c  fmuls 5, 5, 3
  04b5580  stfs 5, 4(5)
  04b5584  addic 5, 5, 8
  04b5588  bdnz 0x4b5564
  04b558c  li 5, 4
  04b5590  ori 3, 1, 0
  04b5594  mtctr 5
  04b5598  lis 4, 115
  04b559c  addic 5, 3, 164
  04b55a0  addic 4, 4, 22752
  04b55a4  ori 6, 5, 0
  04b55a8  lfs 3, 164(3)
  04b55ac  lfs 5, 0(4)
  04b55b0  fmuls 3, 3, 5
  04b55b4  lfs 5, 4(4)
  04b55b8  addic 4, 4, 8
  04b55bc  stfs 3, 164(3)
  04b55c0  lfs 3, 4(5)
  04b55c4  addic 3, 3, 8
  04b55c8  fmuls 3, 3, 5
  04b55cc  stfs 3, 4(5)
  04b55d0  addic 5, 5, 8
  04b55d4  bdnz 0x4b55a8
  04b55d8  li 4, 2
  04b55dc  ori 3, 1, 0
  04b55e0  mtctr 4
  04b55e4  lfs 3, 164(3)
  04b55e8  fadds 3, 4, 3
  04b55ec  addic 3, 3, 16
  04b55f0  lfs 4, 4(6)
  04b55f4  lfs 5, 8(6)
  04b55f8  lfs 6, 12(6)
  04b55fc  addic 6, 6, 16
  04b5600  fadds 3, 3, 4
  04b5604  fadds 4, 3, 5
  04b5608  fadds 4, 4, 6
  04b560c  bdnz 0x4b55e4
  04b5610  lis 3, 75
  04b5614  addi 3, 3, 18696
  04b5618  lfs 3, 20(3)
  04b561c  fadds 4, 4, 3
  04b5620  fmadds 4, 4, 1, 2
  04b5624  li 3, 0
  04b5628  stfs 4, 72(31)
  04b562c  stw 3, 120(30)
  04b5630  stw 3, 116(30)
  04b5634  stw 3, 112(30)
  04b5638  stw 3, 136(30)
  04b563c  stw 3, 132(30)
  04b5640  stw 3, 128(30)
  04b5644  ori 3, 31, 0
  04b5648  bl 0x4b3950
  04b564c  lbz 3, 32(31)
  04b5650  cmpwi 3, 0
  04b5654  bt 2, 0x4b569c
  04b5658  cmpwi 3, 3
  04b565c  bt 2, 0x4b569c
  04b5660  cmpwi 3, 1
  04b5664  bt 2, 0x4b569c
  04b5668  ori 3, 31, 0
  04b566c  lwz 4, 108(30)
  04b5670  extsw 4, 4
  04b5674  bl 0x15cc7c
  04b5678  nop
  04b567c  cmpwi 3, 0
  04b5680  bf 2, 0x4b569c
  04b5684  li 3, 0
  04b5688  li 4, 4
  04b568c  ori 5, 31, 0
  04b5690  bl 0x15d12c
  04b5694  nop
  04b5698  stw 3, 108(30)
  04b569c  ld 0, 352(1)
  04b56a0  mtlr 0
  04b56a4  lfd 30, 320(1)
  04b56a8  lfd 31, 328(1)
  04b56ac  ld 26, 272(1)
  04b56b0  ld 27, 280(1)
  04b56b4  ld 28, 288(1)
  04b56b8  ld 29, 296(1)
  04b56bc  ld 30, 304(1)
  04b56c0  ld 31, 312(1)
  04b56c4  addi 1, 1, 336
  04b56c8  blr
