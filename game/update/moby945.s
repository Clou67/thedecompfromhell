# game/update/moby945.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M945_004c6b80:   # 0x4c6b80, 0x4dc bytes
  04c6b80  stdu 1, -432(1)
  04c6b84  mflr 0
  04c6b88  std 0, 448(1)
  04c6b8c  stfd 29, 408(1)
  04c6b90  stfd 30, 416(1)
  04c6b94  stfd 31, 424(1)
  04c6b98  std 31, 400(1)
  04c6b9c  ori 31, 3, 0
  04c6ba0  lis 4, 76
  04c6ba4  std 29, 384(1)
  04c6ba8  std 28, 376(1)
  04c6bac  addic 3, 1, 128
  04c6bb0  addi 28, 4, 27472
  04c6bb4  std 30, 392(1)
  04c6bb8  lwz 29, 120(31)
  04c6bbc  std 27, 368(1)
  04c6bc0  std 26, 360(1)
  04c6bc4  std 25, 352(1)
  04c6bc8  lwz 30, 352(29)
  04c6bcc  bl 0x500af8
  04c6bd0  nop
  04c6bd4  li 3, 14
  04c6bd8  bl 0x685c4
  04c6bdc  nop
  04c6be0  std 3, 312(1)
  04c6be4  lis 9, 0
  04c6be8  li 3, 0
  04c6bec  li 4, 0
  04c6bf0  li 5, 1
  04c6bf4  li 6, 1
  04c6bf8  li 7, 1
  04c6bfc  li 8, 0
  04c6c00  ori 9, 9, 65424
  04c6c04  bl 0x502fd4
  04c6c08  nop
  04c6c0c  std 3, 320(1)
  04c6c10  li 3, 0
  04c6c14  li 4, 0
  04c6c18  li 5, 0
  04c6c1c  li 6, 0
  04c6c20  li 7, 0
  04c6c24  li 8, 0
  04c6c28  bl 0x502f08
  04c6c2c  nop
  04c6c30  std 3, 304(1)
  04c6c34  lis 4, 270
  04c6c38  lis 3, 270
  04c6c3c  lis 5, 143
  04c6c40  lis 6, 143
  04c6c44  li 7, 128
  04c6c48  lwz 8, 18388(3)
  04c6c4c  lwz 3, 18384(4)
  04c6c50  lwz 4, 19856(5)
  04c6c54  lwz 6, 19860(6)
  04c6c58  ori 5, 8, 0
  04c6c5c  bl 0x502ea8
  04c6c60  nop
  04c6c64  lwz 4, 408(29)
  04c6c68  std 3, 328(1)
  04c6c6c  extsw 3, 4
  04c6c70  bl 0x502730
  04c6c74  nop
  04c6c78  lis 3, 114
  04c6c7c  lfs 2, 0(28)
  04c6c80  lis 4, 143
  04c6c84  lfs 3, -3056(3)
  04c6c88  fmuls 30, 3, 2
  04c6c8c  lis 3, 143
  04c6c90  lwz 3, 19848(3)
  04c6c94  lwz 4, 19852(4)
  04c6c98  extsw 3, 3
  04c6c9c  fdivs 30, 1, 30
  04c6ca0  extsw 4, 4
  04c6ca4  fmr 1, 30
  04c6ca8  bl 0x5027bc
  04c6cac  nop
  04c6cb0  stw 3, 268(1)
  04c6cb4  ori 7, 1, 0
  04c6cb8  stw 3, 264(1)
  04c6cbc  lis 6, 143
  04c6cc0  stw 3, 260(1)
  04c6cc4  lis 5, 143
  04c6cc8  stw 3, 256(1)
  04c6ccc  li 8, 2
  04c6cd0  lfs 7, 16(31)
  04c6cd4  addic 6, 6, 19872
  04c6cd8  lfs 6, 20(31)
  04c6cdc  addic 5, 5, 19876
  04c6ce0  lfs 5, 24(31)
  04c6ce4  addic 4, 7, 272
  04c6ce8  lfs 31, 28(31)
  04c6cec  addic 3, 7, 276
  04c6cf0  lfs 4, 16(30)
  04c6cf4  mtctr 8
  04c6cf8  lfs 3, 20(30)
  04c6cfc  lfs 2, 24(30)
  04c6d00  lfs 1, 28(30)
  04c6d04  lfs 8, 0(6)
  04c6d08  lfs 9, 0(5)
  04c6d0c  stfs 8, 272(7)
  04c6d10  lfs 8, 8(6)
  04c6d14  stfs 9, 276(7)
  04c6d18  lfs 9, 8(5)
  04c6d1c  addic 6, 6, 16
  04c6d20  stfs 8, 8(4)
  04c6d24  addic 5, 5, 16
  04c6d28  stfs 9, 8(3)
  04c6d2c  addic 4, 4, 16
  04c6d30  addic 3, 3, 16
  04c6d34  addic 7, 7, 16
  04c6d38  bdnz 0x4c6d04
  04c6d3c  lis 3, 76
  04c6d40  stfs 7, 192(1)
  04c6d44  addi 28, 3, 27472
  04c6d48  stfs 6, 196(1)
  04c6d4c  stfs 31, 204(1)
  04c6d50  lis 3, 161
  04c6d54  lfs 8, 4(28)
  04c6d58  stfs 7, 208(1)
  04c6d5c  stfs 6, 212(1)
  04c6d60  fadds 6, 5, 8
  04c6d64  stfs 31, 220(1)
  04c6d68  addic 25, 3, 24396
  04c6d6c  addic 27, 1, 192
  04c6d70  addic 26, 1, 128
  04c6d74  ori 3, 27, 0
  04c6d78  ori 4, 26, 0
  04c6d7c  li 5, 0
  04c6d80  li 7, 9
  04c6d84  stfs 6, 200(1)
  04c6d88  lfs 6, 8(28)
  04c6d8c  stfs 4, 224(1)
  04c6d90  fadds 5, 5, 6
  04c6d94  stfs 3, 228(1)
  04c6d98  stfs 1, 236(1)
  04c6d9c  stfs 5, 216(1)
  04c6da0  lfs 31, 12(28)
  04c6da4  stfs 4, 240(1)
  04c6da8  stfs 3, 244(1)
  04c6dac  stfs 1, 252(1)
  04c6db0  fadds 1, 2, 31
  04c6db4  lwz 6, 28(25)
  04c6db8  stfs 1, 232(1)
  04c6dbc  lfs 1, 16(28)
  04c6dc0  fadds 1, 2, 1
  04c6dc4  stfs 1, 248(1)
  04c6dc8  bl 0x72280
  04c6dcc  nop
  04c6dd0  lfs 1, 20(30)
  04c6dd4  lfs 2, 20(31)
  04c6dd8  lfs 4, 16(30)
  04c6ddc  fsubs 3, 1, 2
  04c6de0  lfs 5, 16(31)
  04c6de4  fsubs 6, 4, 5
  04c6de8  lfs 8, 24(28)
  04c6dec  fmuls 7, 3, 3
  04c6df0  lfs 29, 20(28)
  04c6df4  lfs 10, 24(30)
  04c6df8  lfs 11, 28(30)
  04c6dfc  lfs 12, 28(31)
  04c6e00  fneg 7, 7
  04c6e04  lfs 13, 24(31)
  04c6e08  stfs 12, 204(1)
  04c6e0c  lfs 9, 28(28)
  04c6e10  stfs 12, 220(1)
  04c6e14  fadds 9, 13, 9
  04c6e18  fneg 7, 7
  04c6e1c  stfs 11, 236(1)
  04c6e20  lwz 6, 28(25)
  04c6e24  ori 3, 27, 0
  04c6e28  ori 4, 26, 0
  04c6e2c  fmadds 7, 6, 6, 7
  04c6e30  stfs 9, 200(1)
  04c6e34  stfs 9, 216(1)
  04c6e38  fsqrts 7, 7
  04c6e3c  li 5, 0
  04c6e40  li 7, 9
  04c6e44  fdivs 8, 8, 7
  04c6e48  fsub 9, 29, 7
  04c6e4c  fsub 12, 29, 7
  04c6e50  fsub 13, 7, 29
  04c6e54  fsub 7, 7, 29
  04c6e58  fmuls 3, 3, 8
  04c6e5c  fmuls 6, 6, 8
  04c6e60  fneg 3, 3
  04c6e64  fsel 8, 9, 29, 6
  04c6e68  fsel 9, 12, 29, 3
  04c6e6c  fsel 6, 13, 8, 6
  04c6e70  fsel 3, 7, 9, 3
  04c6e74  fadds 7, 2, 6
  04c6e78  fsubs 2, 2, 6
  04c6e7c  fadds 8, 1, 6
  04c6e80  fsubs 1, 1, 6
  04c6e84  fadds 9, 5, 3
  04c6e88  fsubs 5, 5, 3
  04c6e8c  stfs 7, 196(1)
  04c6e90  stfs 2, 212(1)
  04c6e94  fadds 2, 4, 3
  04c6e98  fsubs 3, 4, 3
  04c6e9c  stfs 9, 192(1)
  04c6ea0  stfs 5, 208(1)
  04c6ea4  lfs 4, 32(28)
  04c6ea8  stfs 2, 224(1)
  04c6eac  stfs 8, 228(1)
  04c6eb0  stfs 11, 252(1)
  04c6eb4  stfs 3, 240(1)
  04c6eb8  stfs 1, 244(1)
  04c6ebc  fadds 1, 10, 4
  04c6ec0  stfs 1, 232(1)
  04c6ec4  stfs 1, 248(1)
  04c6ec8  bl 0x72280
  04c6ecc  nop
  04c6ed0  lfs 1, 228(1)
  04c6ed4  lfs 2, 196(1)
  04c6ed8  lfs 3, 224(1)
  04c6edc  fsubs 1, 1, 2
  04c6ee0  lfs 4, 192(1)
  04c6ee4  lfs 5, 232(1)
  04c6ee8  fsubs 3, 3, 4
  04c6eec  lfs 6, 200(1)
  04c6ef0  fsubs 5, 5, 6
  04c6ef4  lfs 8, 236(1)
  04c6ef8  fmuls 7, 1, 1
  04c6efc  stfs 8, 124(1)
  04c6f00  lfs 8, 36(28)
  04c6f04  lis 3, 114
  04c6f08  fmadds 7, 3, 3, 7
  04c6f0c  lfs 9, -3056(3)
  04c6f10  lwz 29, 408(29)
  04c6f14  fmadds 7, 5, 5, 7
  04c6f18  fsqrts 7, 7
  04c6f1c  fdivs 8, 8, 7
  04c6f20  fsub 10, 29, 7
  04c6f24  fsub 11, 29, 7
  04c6f28  fsub 12, 29, 7
  04c6f2c  fsub 13, 7, 29
  04c6f30  fsub 0, 7, 29
  04c6f34  fsub 7, 7, 29
  04c6f38  fmuls 5, 5, 8
  04c6f3c  fmuls 1, 1, 8
  04c6f40  fmuls 3, 3, 8
  04c6f44  fsel 8, 10, 29, 5
  04c6f48  fsel 10, 11, 29, 1
  04c6f4c  fsel 11, 12, 29, 3
  04c6f50  fsel 5, 13, 8, 5
  04c6f54  fsel 1, 0, 10, 1
  04c6f58  fsel 3, 7, 11, 3
  04c6f5c  fadds 5, 5, 6
  04c6f60  fadds 1, 1, 2
  04c6f64  fadds 2, 3, 4
  04c6f68  stfs 5, 120(1)
  04c6f6c  stfs 1, 116(1)
  04c6f70  stfs 2, 112(1)
  04c6f74  lfs 1, 40(28)
  04c6f78  fmuls 1, 9, 1
  04c6f7c  fctiwz 1, 1
  04c6f80  stfd 1, 336(1)
  04c6f84  lwz 3, 340(1)
  04c6f88  cmpw 29, 3
  04c6f8c  bf 0, 0x4c6ff4
  04c6f90  extsw 3, 29
  04c6f94  bl 0x502730
  04c6f98  nop
  04c6f9c  lis 3, 76
  04c6fa0  lis 4, 114
  04c6fa4  addi 3, 3, 27472
  04c6fa8  lfs 2, 44(3)
  04c6fac  lfs 3, -3056(4)
  04c6fb0  fmuls 2, 3, 2
  04c6fb4  fdivs 1, 1, 2
  04c6fb8  lfs 2, 112(1)
  04c6fbc  lfs 3, 240(1)
  04c6fc0  lfs 4, 116(1)
  04c6fc4  lfs 5, 244(1)
  04c6fc8  lfs 6, 120(1)
  04c6fcc  lfs 7, 248(1)
  04c6fd0  fsubs 2, 2, 3
  04c6fd4  fsubs 4, 4, 5
  04c6fd8  fsubs 6, 6, 7
  04c6fdc  fmadds 2, 1, 2, 3
  04c6fe0  fmadds 3, 1, 4, 5
  04c6fe4  fmadds 1, 1, 6, 7
  04c6fe8  stfs 2, 112(1)
  04c6fec  stfs 3, 116(1)
  04c6ff0  stfs 1, 120(1)
  04c6ff4  lis 3, -32768
  04c6ff8  fsubs 1, 31, 30
  04c6ffc  ori 4, 31, 0
  04c7000  ori 5, 3, 128
  04c7004  addic 3, 1, 112
  04c7008  clrldi 6, 5, 32
  04c700c  li 5, 0
  04c7010  li 8, 127
  04c7014  li 9, 2
  04c7018  li 10, 255
  04c701c  bl 0x12d0e8
  04c7020  nop
  04c7024  ld 0, 448(1)
  04c7028  mtlr 0
  04c702c  lfd 29, 408(1)
  04c7030  lfd 30, 416(1)
  04c7034  lfd 31, 424(1)
  04c7038  ld 25, 352(1)
  04c703c  ld 26, 360(1)
  04c7040  ld 27, 368(1)
  04c7044  ld 28, 376(1)
  04c7048  ld 29, 384(1)
  04c704c  ld 30, 392(1)
  04c7050  ld 31, 400(1)
  04c7054  addi 1, 1, 432
  04c7058  blr

M945_004c705c:   # 0x4c705c, 0x4 bytes
  04c705c  blr

M945_004c7060:   # 0x4c7060, 0x3c bytes
  04c7060  lwz 4, 120(3)
  04c7064  lwz 5, 420(4)
  04c7068  lwz 5, 0(5)
  04c706c  cmpw 5, 3
  04c7070  bf 2, 0x4c707c
  04c7074  li 3, 1
  04c7078  b 0x4c7098
  04c707c  lwz 4, 424(4)
  04c7080  lwz 4, 0(4)
  04c7084  cmpw 4, 3
  04c7088  bf 2, 0x4c7094
  04c708c  li 3, 1
  04c7090  b 0x4c7098
  04c7094  li 3, 0
  04c7098  blr

M945_004c709c:   # 0x4c709c, 0x14 bytes
  04c709c  lis 3, 143
  04c70a0  lis 4, 1
  04c70a4  addic 3, 3, 19908
  04c70a8  stw 4, 72(3)
  04c70ac  blr

UpdateMoby_945:   # 0x4c70b0, 0x4 bytes
  04c70b0  blr
