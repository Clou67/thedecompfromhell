# game/update/moby1157.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1157_001e29b4:   # 0x1e29b4, 0x14 bytes
  01e29b4  lis 3, 118
  01e29b8  lis 4, 1
  01e29bc  addic 3, 3, 20028
  01e29c0  stw 4, 72(3)
  01e29c4  blr

M1157_001e29f8:   # 0x1e29f8, 0x488 bytes
  01e29f8  stdu 1, -336(1)
  01e29fc  mflr 0
  01e2a00  std 0, 352(1)
  01e2a04  stfd 14, 192(1)
  01e2a08  stfd 15, 200(1)
  01e2a0c  stfd 16, 208(1)
  01e2a10  stfd 17, 216(1)
  01e2a14  stfd 18, 224(1)
  01e2a18  stfd 19, 232(1)
  01e2a1c  stfd 20, 240(1)
  01e2a20  stfd 21, 248(1)
  01e2a24  stfd 22, 256(1)
  01e2a28  stfd 23, 264(1)
  01e2a2c  stfd 24, 272(1)
  01e2a30  stfd 25, 280(1)
  01e2a34  stfd 26, 288(1)
  01e2a38  stfd 27, 296(1)
  01e2a3c  stfd 28, 304(1)
  01e2a40  stfd 29, 312(1)
  01e2a44  stfd 30, 320(1)
  01e2a48  stfd 31, 328(1)
  01e2a4c  lfs 2, 196(3)
  01e2a50  lfs 3, 212(3)
  01e2a54  fmuls 1, 2, 2
  01e2a58  lfs 4, 192(3)
  01e2a5c  fmuls 5, 3, 3
  01e2a60  lfs 6, 208(3)
  01e2a64  lfs 7, 200(3)
  01e2a68  lfs 8, 216(3)
  01e2a6c  lis 4, 118
  01e2a70  lis 5, 30
  01e2a74  fmadds 1, 4, 4, 1
  01e2a78  std 31, 184(1)
  01e2a7c  fmadds 5, 6, 6, 5
  01e2a80  ori 31, 3, 0
  01e2a84  fmadds 1, 7, 7, 1
  01e2a88  fmadds 5, 8, 8, 5
  01e2a8c  fsqrts 9, 1
  01e2a90  lfs 1, 20136(4)
  01e2a94  lis 4, 118
  01e2a98  lfs 10, 20140(4)
  01e2a9c  addi 4, 5, 10696
  01e2aa0  lfs 29, 0(4)
  01e2aa4  lfs 11, 16(4)
  01e2aa8  lfs 12, 4(4)
  01e2aac  lfs 13, 8(4)
  01e2ab0  lfs 18, 12(4)
  01e2ab4  std 25, 136(1)
  01e2ab8  fsqrts 5, 5
  01e2abc  lwz 25, 120(3)
  01e2ac0  lfs 17, 108(25)
  01e2ac4  fsubs 11, 17, 11
  01e2ac8  fdivs 0, 1, 9
  01e2acc  fmr 1, 13
  01e2ad0  fsub 30, 29, 9
  01e2ad4  fsub 28, 29, 9
  01e2ad8  fsub 31, 29, 9
  01e2adc  fsub 19, 9, 29
  01e2ae0  fsub 20, 9, 29
  01e2ae4  fsub 21, 9, 29
  01e2ae8  fnmsubs 17, 17, 12, 1
  01e2aec  fdivs 10, 10, 5
  01e2af0  fsub 13, 29, 5
  01e2af4  fsub 9, 29, 5
  01e2af8  fsub 27, 29, 5
  01e2afc  fsub 22, 5, 29
  01e2b00  fsub 23, 5, 29
  01e2b04  fsub 24, 5, 29
  01e2b08  fnmsubs 5, 11, 12, 1
  01e2b0c  fcmpu 0, 5, 1
  01e2b10  fcmpu 1, 5, 29
  01e2b14  stfs 5, 112(1)
  01e2b18  fmuls 2, 2, 0
  01e2b1c  fmuls 4, 4, 0
  01e2b20  fmuls 7, 7, 0
  01e2b24  cror 2, 0, 2
  01e2b28  fsel 12, 30, 29, 2
  01e2b2c  fsel 0, 28, 29, 4
  01e2b30  fsel 11, 31, 29, 7
  01e2b34  fsel 20, 20, 12, 2
  01e2b38  fsel 21, 21, 0, 4
  01e2b3c  fsel 19, 19, 11, 7
  01e2b40  fmuls 2, 8, 10
  01e2b44  fmuls 3, 3, 10
  01e2b48  fmuls 4, 6, 10
  01e2b4c  fsel 5, 13, 29, 2
  01e2b50  fsel 6, 9, 29, 3
  01e2b54  fsel 7, 27, 29, 4
  01e2b58  fsel 22, 22, 5, 2
  01e2b5c  fsel 23, 23, 6, 3
  01e2b60  std 30, 176(1)
  01e2b64  std 29, 168(1)
  01e2b68  std 28, 160(1)
  01e2b6c  std 27, 152(1)
  01e2b70  std 26, 144(1)
  01e2b74  fsel 24, 24, 7, 4
  01e2b78  bt 2, 0x1e2b84
  01e2b7c  stfs 1, 112(1)
  01e2b80  b 0x1e2b8c
  01e2b84  bf 4, 0x1e2b8c
  01e2b88  stfs 29, 112(1)
  01e2b8c  li 30, 0
  01e2b90  ori 28, 30, 0
  01e2b94  lis 3, 30
  01e2b98  clrlwi 27, 30, 31
  01e2b9c  addi 3, 3, 10696
  01e2ba0  ori 29, 28, 0
  01e2ba4  ori 26, 25, 0
  01e2ba8  lfs 14, 20(3)
  01e2bac  lfs 15, 24(3)
  01e2bb0  lfs 25, 28(3)
  01e2bb4  lfs 26, 32(3)
  01e2bb8  lfs 27, 36(3)
  01e2bbc  lfs 16, 40(3)
  01e2bc0  lfs 28, 44(3)
  01e2bc4  cmpwi 1, 30, 2
  01e2bc8  lfs 30, 112(1)
  01e2bcc  bf 4, 0x1e2bd8
  01e2bd0  fsub 30, 17, 18
  01e2bd4  fsel 30, 30, 17, 18
  01e2bd8  bf 4, 0x1e2c10
  01e2bdc  lfs 1, 16(31)
  01e2be0  lwz 3, 0(26)
  01e2be4  fadds 1, 1, 21
  01e2be8  stfs 1, 16(3)
  01e2bec  lfs 1, 20(31)
  01e2bf0  fadds 1, 1, 20
  01e2bf4  stfs 1, 20(3)
  01e2bf8  lfs 1, 24(31)
  01e2bfc  fadds 1, 1, 19
  01e2c00  stfs 1, 24(3)
  01e2c04  lfs 1, 28(31)
  01e2c08  stfs 1, 28(3)
  01e2c0c  b 0x1e2c40
  01e2c10  lfs 1, 16(31)
  01e2c14  lwz 3, 0(26)
  01e2c18  fsubs 1, 1, 21
  01e2c1c  stfs 1, 16(3)
  01e2c20  lfs 1, 20(31)
  01e2c24  fsubs 1, 1, 20
  01e2c28  stfs 1, 20(3)
  01e2c2c  lfs 1, 24(31)
  01e2c30  fsubs 1, 1, 19
  01e2c34  stfs 1, 24(3)
  01e2c38  lfs 1, 28(31)
  01e2c3c  stfs 1, 28(3)
  01e2c40  extsw 3, 29
  01e2c44  cmpwi 27, 0
  01e2c48  std 3, 120(1)
  01e2c4c  lfd 1, 120(1)
  01e2c50  fcfid 1, 1
  01e2c54  frsp 1, 1
  01e2c58  fsubs 31, 1, 14
  01e2c5c  fmuls 31, 31, 15
  01e2c60  bt 2, 0x1e2ca4
  01e2c64  lfs 1, 72(31)
  01e2c68  fmr 2, 29
  01e2c6c  bl 0x502578
  01e2c70  nop
  01e2c74  lwz 3, 0(26)
  01e2c78  fmuls 2, 30, 26
  01e2c7c  stfs 1, 72(3)
  01e2c80  fmr 1, 31
  01e2c84  bl 0x502578
  01e2c88  nop
  01e2c8c  fmr 30, 1
  01e2c90  fcmpu 0, 30, 27
  01e2c94  cror 6, 1, 2
  01e2c98  bt 6, 0x1e2ce0
  01e2c9c  fadds 30, 30, 25
  01e2ca0  b 0x1e2ce0
  01e2ca4  lfs 1, 72(31)
  01e2ca8  fmr 2, 16
  01e2cac  bl 0x502578
  01e2cb0  nop
  01e2cb4  lwz 3, 0(26)
  01e2cb8  fmuls 2, 30, 26
  01e2cbc  stfs 1, 72(3)
  01e2cc0  fmr 1, 31
  01e2cc4  bl 0x5025e0
  01e2cc8  nop
  01e2ccc  fmr 30, 1
  01e2cd0  fcmpu 0, 30, 28
  01e2cd4  cror 6, 0, 2
  01e2cd8  bt 6, 0x1e2ce0
  01e2cdc  fsubs 30, 30, 25
  01e2ce0  fcmpu 0, 30, 28
  01e2ce4  fcmpu 1, 30, 27
  01e2ce8  cror 2, 0, 2
  01e2cec  bt 2, 0x1e2cf8
  01e2cf0  fmr 30, 28
  01e2cf4  b 0x1e2d00
  01e2cf8  bf 4, 0x1e2d00
  01e2cfc  fmr 30, 27
  01e2d00  lwz 3, 0(26)
  01e2d04  fmr 2, 30
  01e2d08  lfs 1, 72(3)
  01e2d0c  bl 0x502578
  01e2d10  nop
  01e2d14  lwz 3, 0(26)
  01e2d18  stfs 1, 72(3)
  01e2d1c  lwz 4, 0(26)
  01e2d20  addic 3, 4, 192
  01e2d24  addic 4, 4, 64
  01e2d28  bl 0x500b64
  01e2d2c  nop
  01e2d30  lwz 3, 0(26)
  01e2d34  lis 4, 118
  01e2d38  lfs 1, 212(3)
  01e2d3c  lfs 2, 208(3)
  01e2d40  fmuls 3, 1, 1
  01e2d44  lfs 4, 216(3)
  01e2d48  lfs 5, 20144(4)
  01e2d4c  fneg 5, 5
  01e2d50  fmadds 3, 2, 2, 3
  01e2d54  lfs 6, 16(3)
  01e2d58  cmpwi 27, 0
  01e2d5c  lfs 7, 20(3)
  01e2d60  lfs 8, 24(3)
  01e2d64  fmadds 3, 4, 4, 3
  01e2d68  fsqrts 3, 3
  01e2d6c  fdivs 5, 5, 3
  01e2d70  fsub 9, 29, 3
  01e2d74  fsub 10, 29, 3
  01e2d78  fsub 11, 29, 3
  01e2d7c  fsub 12, 3, 29
  01e2d80  fsub 13, 3, 29
  01e2d84  fsub 0, 3, 29
  01e2d88  fmuls 3, 4, 5
  01e2d8c  fmuls 4, 1, 5
  01e2d90  fmuls 5, 2, 5
  01e2d94  fsel 1, 9, 29, 3
  01e2d98  fsel 2, 10, 29, 4
  01e2d9c  fsel 9, 11, 29, 5
  01e2da0  fsel 3, 12, 1, 3
  01e2da4  fsel 4, 13, 2, 4
  01e2da8  fsel 5, 0, 9, 5
  01e2dac  fsubs 2, 3, 22
  01e2db0  fsubs 1, 4, 23
  01e2db4  fsubs 30, 5, 24
  01e2db8  bt 2, 0x1e2dc8
  01e2dbc  fadds 30, 5, 24
  01e2dc0  fadds 1, 4, 23
  01e2dc4  fadds 2, 3, 22
  01e2dc8  fadds 3, 6, 30
  01e2dcc  fadds 1, 7, 1
  01e2dd0  fadds 2, 8, 2
  01e2dd4  stfs 3, 16(3)
  01e2dd8  stfs 1, 20(3)
  01e2ddc  stfs 2, 24(3)
  01e2de0  lwz 3, 0(26)
  01e2de4  bl 0xf31a8
  01e2de8  nop
  01e2dec  addic 29, 29, 1
  01e2df0  addic 26, 26, 4
  01e2df4  cmpwi 29, 6
  01e2df8  bt 0, 0x1e2bc4
  01e2dfc  addic 30, 30, 1
  01e2e00  addic 25, 25, 24
  01e2e04  cmpwi 30, 4
  01e2e08  bt 0, 0x1e2b94
  01e2e0c  ld 0, 352(1)
  01e2e10  mtlr 0
  01e2e14  lfd 14, 192(1)
  01e2e18  lfd 15, 200(1)
  01e2e1c  lfd 16, 208(1)
  01e2e20  lfd 17, 216(1)
  01e2e24  lfd 18, 224(1)
  01e2e28  lfd 19, 232(1)
  01e2e2c  lfd 20, 240(1)
  01e2e30  lfd 21, 248(1)
  01e2e34  lfd 22, 256(1)
  01e2e38  lfd 23, 264(1)
  01e2e3c  lfd 24, 272(1)
  01e2e40  lfd 25, 280(1)
  01e2e44  lfd 26, 288(1)
  01e2e48  lfd 27, 296(1)
  01e2e4c  lfd 28, 304(1)
  01e2e50  lfd 29, 312(1)
  01e2e54  lfd 30, 320(1)
  01e2e58  lfd 31, 328(1)
  01e2e5c  ld 25, 136(1)
  01e2e60  ld 26, 144(1)
  01e2e64  ld 27, 152(1)
  01e2e68  ld 28, 160(1)
  01e2e6c  ld 29, 168(1)
  01e2e70  ld 30, 176(1)
  01e2e74  ld 31, 184(1)
  01e2e78  addi 1, 1, 336
  01e2e7c  blr

UpdateMoby_1157:   # 0x1e2e88, 0x604 bytes
  01e2e88  stdu 1, -224(1)
  01e2e8c  mflr 0
  01e2e90  std 0, 240(1)
  01e2e94  stfd 31, 216(1)
  01e2e98  std 31, 208(1)
  01e2e9c  ori 31, 3, 0
  01e2ea0  std 30, 200(1)
  01e2ea4  lbz 3, 32(31)
  01e2ea8  lwz 30, 120(31)
  01e2eac  cmpwi 3, 5
  01e2eb0  cmpwi 1, 3, 4
  01e2eb4  cmpwi 6, 3, 3
  01e2eb8  std 29, 192(1)
  01e2ebc  std 28, 184(1)
  01e2ec0  std 27, 176(1)
  01e2ec4  std 26, 168(1)
  01e2ec8  std 25, 160(1)
  01e2ecc  std 24, 152(1)
  01e2ed0  std 23, 144(1)
  01e2ed4  cmpwi 7, 3, 2
  01e2ed8  bt 2, 0x1e344c
  01e2edc  bt 6, 0x1e338c
  01e2ee0  bt 26, 0x1e313c
  01e2ee4  bt 30, 0x1e303c
  01e2ee8  cmpwi 3, 1
  01e2eec  bt 2, 0x1e2fc8
  01e2ef0  cmpwi 3, 0
  01e2ef4  bf 2, 0x1e344c
  01e2ef8  li 23, 0
  01e2efc  lis 27, 151
  01e2f00  ori 29, 30, 0
  01e2f04  ori 25, 23, 0
  01e2f08  li 26, 1
  01e2f0c  addic 27, 27, -25376
  01e2f10  ori 24, 25, 0
  01e2f14  ori 28, 29, 0
  01e2f18  li 3, 1207
  01e2f1c  bl 0xefa28
  01e2f20  nop
  01e2f24  li 4, 64
  01e2f28  stw 3, 0(28)
  01e2f2c  addic 24, 24, 1
  01e2f30  sth 4, 50(3)
  01e2f34  lwz 3, 0(28)
  01e2f38  cmpwi 24, 6
  01e2f3c  stb 26, 49(3)
  01e2f40  lwz 3, 8320(27)
  01e2f44  lwz 4, 0(28)
  01e2f48  ld 3, 56(3)
  01e2f4c  std 3, 56(4)
  01e2f50  lwz 3, 0(28)
  01e2f54  lhz 4, 52(31)
  01e2f58  sth 4, 52(3)
  01e2f5c  lwz 3, 0(28)
  01e2f60  lfs 1, 16(31)
  01e2f64  stfs 1, 16(3)
  01e2f68  lfs 1, 20(31)
  01e2f6c  stfs 1, 20(3)
  01e2f70  lfs 1, 24(31)
  01e2f74  stfs 1, 24(3)
  01e2f78  lfs 1, 28(31)
  01e2f7c  stfs 1, 28(3)
  01e2f80  lwz 3, 0(28)
  01e2f84  lfs 1, 64(31)
  01e2f88  addic 28, 28, 4
  01e2f8c  stfs 1, 64(3)
  01e2f90  lfs 1, 68(31)
  01e2f94  stfs 1, 68(3)
  01e2f98  lfs 1, 72(31)
  01e2f9c  stfs 1, 72(3)
  01e2fa0  lfs 1, 76(31)
  01e2fa4  stfs 1, 76(3)
  01e2fa8  bt 0, 0x1e2f18
  01e2fac  addic 23, 23, 1
  01e2fb0  addic 29, 29, 24
  01e2fb4  cmpwi 23, 4
  01e2fb8  bt 0, 0x1e2f10
  01e2fbc  stw 25, 108(30)
  01e2fc0  stb 26, 32(31)
  01e2fc4  b 0x1e344c
  01e2fc8  lis 3, 164
  01e2fcc  lwz 4, 96(30)
  01e2fd0  slwi 4, 4, 8
  01e2fd4  lwz 3, -28512(3)
  01e2fd8  addc 3, 3, 4
  01e2fdc  clrldi 3, 3, 32
  01e2fe0  lbz 3, 188(3)
  01e2fe4  cmpwi 3, 1
  01e2fe8  cmpwi 1, 3, 2
  01e2fec  bf 2, 0x1e3024
  01e2ff0  li 5, 2
  01e2ff4  lis 6, -16512
  01e2ff8  lis 7, 239
  01e2ffc  li 8, 0
  01e3000  stb 5, 32(31)
  01e3004  li 3, 0
  01e3008  stw 6, 120(30)
  01e300c  li 4, 0
  01e3010  ori 5, 31, 0
  01e3014  stw 8, 10180(7)
  01e3018  bl 0x15d12c
  01e301c  nop
  01e3020  b 0x1e344c
  01e3024  bf 6, 0x1e344c
  01e3028  lis 3, 16256
  01e302c  li 4, 5
  01e3030  stw 3, 108(30)
  01e3034  stb 4, 32(31)
  01e3038  b 0x1e344c
  01e303c  lis 3, 30
  01e3040  addi 4, 3, 11904
  01e3044  lis 3, 114
  01e3048  lfs 1, 0(4)
  01e304c  lfs 2, -3056(3)
  01e3050  lfs 3, 4(4)
  01e3054  fmuls 2, 2, 1
  01e3058  fmr 31, 3
  01e305c  addic 3, 30, 120
  01e3060  lwz 29, 120(30)
  01e3064  fctidz 2, 2
  01e3068  fmr 1, 31
  01e306c  fcfid 2, 2
  01e3070  frsp 2, 2
  01e3074  fdivs 2, 31, 2
  01e3078  bl 0x109af0
  01e307c  nop
  01e3080  lwz 4, 120(30)
  01e3084  lis 5, 150
  01e3088  lfs 1, 120(30)
  01e308c  cmpwi 29, 0
  01e3090  srawi 3, 4, 31
  01e3094  fabs 1, 1
  01e3098  srwi 6, 3, 1
  01e309c  xor 6, 6, 4
  01e30a0  subc 3, 6, 3
  01e30a4  fsubs 1, 31, 1
  01e30a8  stfs 1, -12528(5)
  01e30ac  bf 0, 0x1e3124
  01e30b0  cmpwi 4, 0
  01e30b4  bt 0, 0x1e3124
  01e30b8  lis 3, 164
  01e30bc  lwz 4, 96(30)
  01e30c0  li 5, 114
  01e30c4  slwi 4, 4, 8
  01e30c8  li 6, 1
  01e30cc  lwz 3, -28512(3)
  01e30d0  addc 3, 3, 4
  01e30d4  clrldi 4, 3, 32
  01e30d8  addic 3, 4, 16
  01e30dc  addic 4, 4, 64
  01e30e0  bl 0xa0c38
  01e30e4  nop
  01e30e8  lis 3, 165
  01e30ec  lwz 4, 100(30)
  01e30f0  li 5, 1
  01e30f4  slwi 4, 4, 7
  01e30f8  li 6, 0
  01e30fc  li 7, 0
  01e3100  lwz 3, 7128(3)
  01e3104  addc 3, 3, 4
  01e3108  addic 4, 3, 48
  01e310c  addic 8, 3, 112
  01e3110  clrldi 3, 4, 32
  01e3114  clrldi 4, 8, 32
  01e3118  bl 0x47f74
  01e311c  nop
  01e3120  b 0x1e344c
  01e3124  lis 4, 16256
  01e3128  cmpw 3, 4
  01e312c  bt 0, 0x1e344c
  01e3130  li 3, 3
  01e3134  stb 3, 32(31)
  01e3138  b 0x1e344c
  01e313c  lis 3, 30
  01e3140  lis 4, 118
  01e3144  lfs 1, 108(30)
  01e3148  addi 5, 3, 11904
  01e314c  lis 6, 114
  01e3150  lis 7, 118
  01e3154  stfs 1, 116(30)
  01e3158  lis 8, 118
  01e315c  addic 3, 30, 108
  01e3160  lfs 1, 4(5)
  01e3164  lis 29, 16256
  01e3168  lfs 2, 20152(4)
  01e316c  addic 5, 30, 112
  01e3170  lis 4, 114
  01e3174  lfs 3, -3048(6)
  01e3178  lfs 4, 20156(7)
  01e317c  fmuls 2, 2, 3
  01e3180  lfs 5, 20160(8)
  01e3184  fmuls 3, 4, 3
  01e3188  lfs 4, -3052(4)
  01e318c  fmuls 4, 5, 4
  01e3190  bl 0x109c30
  01e3194  nop
  01e3198  lis 28, 165
  01e319c  lwz 3, 100(30)
  01e31a0  lwz 4, 104(30)
  01e31a4  slwi 5, 3, 7
  01e31a8  slwi 6, 4, 7
  01e31ac  lwz 7, 7128(28)
  01e31b0  lfs 1, 108(30)
  01e31b4  addc 5, 7, 5
  01e31b8  addc 6, 7, 6
  01e31bc  clrldi 5, 5, 32
  01e31c0  clrldi 6, 6, 32
  01e31c4  slwi 4, 4, 7
  01e31c8  slwi 3, 3, 7
  01e31cc  lfs 2, 48(5)
  01e31d0  lfs 3, 48(6)
  01e31d4  lfs 4, 52(6)
  01e31d8  fsubs 3, 3, 2
  01e31dc  lfs 5, 52(5)
  01e31e0  fsubs 4, 4, 5
  01e31e4  addc 4, 7, 4
  01e31e8  lfs 5, 56(6)
  01e31ec  addc 3, 7, 3
  01e31f0  lfs 6, 56(5)
  01e31f4  clrldi 4, 4, 32
  01e31f8  lfs 7, 60(6)
  01e31fc  clrldi 3, 3, 32
  01e3200  fsubs 5, 5, 6
  01e3204  li 6, 0
  01e3208  fmadds 2, 1, 3, 2
  01e320c  stfs 2, 112(1)
  01e3210  lfs 2, 52(5)
  01e3214  fmadds 2, 1, 4, 2
  01e3218  stfs 2, 116(1)
  01e321c  lfs 2, 56(5)
  01e3220  stfs 7, 124(1)
  01e3224  fmadds 1, 1, 5, 2
  01e3228  stw 6, 140(1)
  01e322c  stw 6, 136(1)
  01e3230  stw 6, 132(1)
  01e3234  stw 6, 128(1)
  01e3238  stfs 1, 120(1)
  01e323c  lfs 1, 112(4)
  01e3240  lfs 2, 112(3)
  01e3244  bl 0x5025e0
  01e3248  nop
  01e324c  lfs 2, 108(30)
  01e3250  lwz 3, 100(30)
  01e3254  fmuls 2, 1, 2
  01e3258  slwi 3, 3, 7
  01e325c  lwz 4, 7128(28)
  01e3260  addc 3, 4, 3
  01e3264  clrldi 3, 3, 32
  01e3268  stfs 2, 128(1)
  01e326c  lfs 1, 112(3)
  01e3270  bl 0x502578
  01e3274  nop
  01e3278  lwz 3, 104(30)
  01e327c  lwz 4, 7128(28)
  01e3280  lwz 5, 100(30)
  01e3284  slwi 3, 3, 7
  01e3288  stfs 1, 128(1)
  01e328c  slwi 5, 5, 7
  01e3290  addc 3, 4, 3
  01e3294  addc 4, 4, 5
  01e3298  clrldi 3, 3, 32
  01e329c  clrldi 4, 4, 32
  01e32a0  lfs 1, 116(3)
  01e32a4  lfs 2, 116(4)
  01e32a8  bl 0x5025e0
  01e32ac  nop
  01e32b0  lfs 2, 108(30)
  01e32b4  lwz 3, 100(30)
  01e32b8  fmuls 2, 1, 2
  01e32bc  slwi 3, 3, 7
  01e32c0  lwz 4, 7128(28)
  01e32c4  addc 3, 4, 3
  01e32c8  clrldi 3, 3, 32
  01e32cc  stfs 2, 132(1)
  01e32d0  lfs 1, 116(3)
  01e32d4  bl 0x502578
  01e32d8  nop
  01e32dc  lwz 3, 104(30)
  01e32e0  lwz 4, 7128(28)
  01e32e4  lwz 5, 100(30)
  01e32e8  slwi 3, 3, 7
  01e32ec  stfs 1, 132(1)
  01e32f0  slwi 5, 5, 7
  01e32f4  addc 3, 4, 3
  01e32f8  addc 4, 4, 5
  01e32fc  clrldi 3, 3, 32
  01e3300  clrldi 4, 4, 32
  01e3304  lfs 1, 120(3)
  01e3308  lfs 2, 120(4)
  01e330c  bl 0x5025e0
  01e3310  nop
  01e3314  lfs 2, 108(30)
  01e3318  lwz 3, 100(30)
  01e331c  fmuls 2, 1, 2
  01e3320  slwi 3, 3, 7
  01e3324  lwz 4, 7128(28)
  01e3328  addc 3, 4, 3
  01e332c  clrldi 3, 3, 32
  01e3330  stfs 2, 136(1)
  01e3334  lfs 1, 120(3)
  01e3338  bl 0x502578
  01e333c  nop
  01e3340  addic 3, 1, 112
  01e3344  stfs 1, 136(1)
  01e3348  bl 0x47b98
  01e334c  nop
  01e3350  addic 3, 1, 128
  01e3354  bl 0x47c08
  01e3358  nop
  01e335c  lwz 3, 108(30)
  01e3360  srawi 4, 3, 31
  01e3364  srwi 5, 4, 1
  01e3368  xor 3, 5, 3
  01e336c  subc 3, 3, 4
  01e3370  cmpw 3, 29
  01e3374  bt 0, 0x1e344c
  01e3378  li 3, 4
  01e337c  lis 4, -16512
  01e3380  stb 3, 32(31)
  01e3384  stw 4, 120(30)
  01e3388  b 0x1e344c
  01e338c  lis 3, 30
  01e3390  addi 4, 3, 11904
  01e3394  lis 3, 114
  01e3398  lfs 1, 0(4)
  01e339c  lfs 2, -3056(3)
  01e33a0  lfs 3, 4(4)
  01e33a4  fmuls 2, 2, 1
  01e33a8  fmr 31, 3
  01e33ac  addic 3, 30, 120
  01e33b0  lwz 29, 120(30)
  01e33b4  fctidz 2, 2
  01e33b8  fmr 1, 31
  01e33bc  fcfid 2, 2
  01e33c0  frsp 2, 2
  01e33c4  fdivs 2, 31, 2
  01e33c8  bl 0x109af0
  01e33cc  nop
  01e33d0  lwz 4, 120(30)
  01e33d4  lis 5, 150
  01e33d8  lfs 1, 120(30)
  01e33dc  cmpwi 29, 0
  01e33e0  srawi 3, 4, 31
  01e33e4  fabs 1, 1
  01e33e8  srwi 6, 3, 1
  01e33ec  xor 6, 6, 4
  01e33f0  subc 3, 6, 3
  01e33f4  fsubs 1, 31, 1
  01e33f8  stfs 1, -12528(5)
  01e33fc  bf 0, 0x1e3438
  01e3400  cmpwi 4, 0
  01e3404  bt 0, 0x1e3438
  01e3408  lis 3, 151
  01e340c  li 5, 0
  01e3410  addic 4, 3, -25376
  01e3414  li 6, 1
  01e3418  addic 3, 4, 128
  01e341c  addic 4, 4, 144
  01e3420  bl 0xa0c38
  01e3424  nop
  01e3428  li 3, 3
  01e342c  bl 0x481d0
  01e3430  nop
  01e3434  b 0x1e344c
  01e3438  lis 4, 16256
  01e343c  cmpw 3, 4
  01e3440  bt 0, 0x1e344c
  01e3444  li 3, 5
  01e3448  stb 3, 32(31)
  01e344c  ori 3, 31, 0
  01e3450  bl 0x1e29f8
  01e3454  ld 0, 240(1)
  01e3458  mtlr 0
  01e345c  lfd 31, 216(1)
  01e3460  ld 23, 144(1)
  01e3464  ld 24, 152(1)
  01e3468  ld 25, 160(1)
  01e346c  ld 26, 168(1)
  01e3470  ld 27, 176(1)
  01e3474  ld 28, 184(1)
  01e3478  ld 29, 192(1)
  01e347c  ld 30, 200(1)
  01e3480  ld 31, 208(1)
  01e3484  addi 1, 1, 224
  01e3488  blr
