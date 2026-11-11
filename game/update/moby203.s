# game/update/moby203.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1900_002e68e0:   # 0x2e68e0, 0x61c bytes
  02e68e0  stdu 1, -576(1)
  02e68e4  mflr 0
  02e68e8  std 0, 592(1)
  02e68ec  stfd 30, 560(1)
  02e68f0  stfd 31, 568(1)
  02e68f4  lis 4, 161
  02e68f8  std 31, 552(1)
  02e68fc  lwz 4, 1800(4)
  02e6900  lwz 31, 120(3)
  02e6904  std 30, 544(1)
  02e6908  std 29, 536(1)
  02e690c  std 28, 528(1)
  02e6910  std 27, 520(1)
  02e6914  std 26, 512(1)
  02e6918  cmpwi 4, 2
  02e691c  bt 2, 0x2e6ecc
  02e6920  li 30, 0
  02e6924  ori 28, 30, 0
  02e6928  lfs 1, 56(31)
  02e692c  lfs 2, 48(31)
  02e6930  fmuls 1, 1, 1
  02e6934  lis 3, 46
  02e6938  lwz 4, 52(31)
  02e693c  addi 3, 3, 26816
  02e6940  lis 29, 115
  02e6944  rlwinm 4, 4, 3, 29, 29
  02e6948  addic 29, 29, 22784
  02e694c  fmadds 1, 2, 2, 1
  02e6950  lfs 2, 52(31)
  02e6954  fabs 3, 2
  02e6958  fsqrts 1, 1
  02e695c  fabs 2, 1
  02e6960  stfs 1, 420(1)
  02e6964  fsubs 1, 2, 3
  02e6968  stfs 1, 424(1)
  02e696c  lwz 5, 420(1)
  02e6970  lfs 30, 0(3)
  02e6974  lfs 1, 420(1)
  02e6978  lfs 31, 4(3)
  02e697c  fabs 4, 1
  02e6980  lwz 3, 424(1)
  02e6984  lfs 1, 424(1)
  02e6988  rlwimi 4, 3, 2, 30, 30
  02e698c  fsub 5, 1, 30
  02e6990  fsub 6, 1, 30
  02e6994  rlwimi 4, 5, 4, 28, 28
  02e6998  ori 3, 29, 0
  02e699c  rlwimi 3, 4, 2, 26, 28
  02e69a0  slwi 4, 4, 2
  02e69a4  clrldi 3, 3, 32
  02e69a8  fsel 4, 5, 4, 3
  02e69ac  lfsx 1, 29, 4
  02e69b0  fsel 3, 6, 3, 2
  02e69b4  lfs 2, 4(3)
  02e69b8  fcmpu 0, 4, 30
  02e69bc  bt 1, 0x2e69c8
  02e69c0  fmr 1, 30
  02e69c4  b 0x2e6ae0
  02e69c8  fsubs 5, 3, 4
  02e69cc  fadds 3, 3, 4
  02e69d0  addic 3, 1, 16
  02e69d4  li 6, 2
  02e69d8  addic 4, 3, 444
  02e69dc  addic 5, 3, 460
  02e69e0  mtctr 6
  02e69e4  fdivs 3, 5, 3
  02e69e8  fmuls 4, 3, 3
  02e69ec  stfs 3, 472(1)
  02e69f0  stfs 3, 464(1)
  02e69f4  stfs 3, 468(1)
  02e69f8  stfs 3, 460(1)
  02e69fc  lfs 6, 472(1)
  02e6a00  lfs 7, 464(1)
  02e6a04  lfs 8, 468(1)
  02e6a08  fmuls 5, 4, 4
  02e6a0c  fmuls 7, 7, 4
  02e6a10  fmuls 6, 6, 5
  02e6a14  fmuls 3, 5, 5
  02e6a18  fmuls 5, 8, 5
  02e6a1c  stfs 7, 464(1)
  02e6a20  fmuls 4, 6, 4
  02e6a24  stfs 5, 468(1)
  02e6a28  stfs 4, 472(1)
  02e6a2c  lfs 4, 444(3)
  02e6a30  fmuls 4, 4, 3
  02e6a34  stfs 4, 460(3)
  02e6a38  lfs 4, 4(4)
  02e6a3c  addic 3, 3, 8
  02e6a40  addic 4, 4, 8
  02e6a44  fmuls 4, 4, 3
  02e6a48  stfs 4, 4(5)
  02e6a4c  addic 5, 5, 8
  02e6a50  bdnz 0x2e6a2c
  02e6a54  li 5, 4
  02e6a58  ori 3, 1, 0
  02e6a5c  mtctr 5
  02e6a60  lis 4, 115
  02e6a64  addic 5, 3, 460
  02e6a68  addic 4, 4, 22752
  02e6a6c  ori 7, 5, 0
  02e6a70  lfs 3, 460(3)
  02e6a74  lfs 4, 0(4)
  02e6a78  fmuls 3, 3, 4
  02e6a7c  lfs 4, 4(4)
  02e6a80  addic 4, 4, 8
  02e6a84  stfs 3, 460(3)
  02e6a88  lfs 3, 4(5)
  02e6a8c  addic 3, 3, 8
  02e6a90  fmuls 3, 3, 4
  02e6a94  stfs 3, 4(5)
  02e6a98  addic 5, 5, 8
  02e6a9c  bdnz 0x2e6a70
  02e6aa0  fmr 3, 30
  02e6aa4  ori 3, 1, 0
  02e6aa8  mtctr 6
  02e6aac  lfs 4, 460(3)
  02e6ab0  fadds 3, 3, 4
  02e6ab4  addic 3, 3, 16
  02e6ab8  lfs 4, 4(7)
  02e6abc  lfs 5, 8(7)
  02e6ac0  lfs 6, 12(7)
  02e6ac4  addic 7, 7, 16
  02e6ac8  fadds 3, 3, 4
  02e6acc  fadds 3, 3, 5
  02e6ad0  fadds 3, 3, 6
  02e6ad4  bdnz 0x2e6aac
  02e6ad8  fadds 3, 3, 31
  02e6adc  fmadds 1, 3, 1, 2
  02e6ae0  lis 3, 46
  02e6ae4  fneg 1, 1
  02e6ae8  addi 3, 3, 26816
  02e6aec  lfs 2, 8(3)
  02e6af0  bl 0x502578
  02e6af4  nop
  02e6af8  stfs 1, 112(1)
  02e6afc  lwz 3, 56(31)
  02e6b00  lwz 4, 48(31)
  02e6b04  lfs 1, 56(31)
  02e6b08  lfs 2, 48(31)
  02e6b0c  fabs 3, 1
  02e6b10  fabs 5, 2
  02e6b14  rlwinm 4, 4, 3, 29, 29
  02e6b18  fsubs 1, 3, 5
  02e6b1c  stfs 1, 416(1)
  02e6b20  lwz 5, 416(1)
  02e6b24  lfs 1, 416(1)
  02e6b28  rlwimi 4, 5, 2, 30, 30
  02e6b2c  fsub 4, 1, 30
  02e6b30  fsub 6, 1, 30
  02e6b34  rlwimi 4, 3, 4, 28, 28
  02e6b38  ori 3, 29, 0
  02e6b3c  rlwimi 3, 4, 2, 26, 28
  02e6b40  slwi 4, 4, 2
  02e6b44  clrldi 3, 3, 32
  02e6b48  fsel 4, 4, 3, 5
  02e6b4c  lfsx 1, 29, 4
  02e6b50  lfs 2, 4(3)
  02e6b54  fsel 3, 6, 5, 3
  02e6b58  fcmpu 0, 4, 30
  02e6b5c  bt 1, 0x2e6b64
  02e6b60  b 0x2e6c78
  02e6b64  fsubs 5, 3, 4
  02e6b68  fadds 3, 3, 4
  02e6b6c  addic 3, 1, 16
  02e6b70  li 6, 2
  02e6b74  addic 5, 3, 428
  02e6b78  addic 4, 3, 412
  02e6b7c  mtctr 6
  02e6b80  fdivs 3, 5, 3
  02e6b84  fmuls 4, 3, 3
  02e6b88  stfs 3, 440(1)
  02e6b8c  stfs 3, 432(1)
  02e6b90  stfs 3, 436(1)
  02e6b94  stfs 3, 428(1)
  02e6b98  lfs 6, 440(1)
  02e6b9c  lfs 7, 432(1)
  02e6ba0  lfs 8, 436(1)
  02e6ba4  fmuls 5, 4, 4
  02e6ba8  fmuls 7, 7, 4
  02e6bac  fmuls 6, 6, 5
  02e6bb0  fmuls 3, 5, 5
  02e6bb4  fmuls 5, 8, 5
  02e6bb8  stfs 7, 432(1)
  02e6bbc  fmuls 4, 6, 4
  02e6bc0  stfs 5, 436(1)
  02e6bc4  stfs 4, 440(1)
  02e6bc8  lfs 4, 412(3)
  02e6bcc  fmuls 4, 4, 3
  02e6bd0  stfs 4, 428(3)
  02e6bd4  lfs 4, 4(4)
  02e6bd8  addic 4, 4, 8
  02e6bdc  fmuls 4, 4, 3
  02e6be0  addic 3, 3, 8
  02e6be4  stfs 4, 4(5)
  02e6be8  addic 5, 5, 8
  02e6bec  bdnz 0x2e6bc8
  02e6bf0  li 5, 4
  02e6bf4  ori 3, 1, 0
  02e6bf8  mtctr 5
  02e6bfc  lis 4, 115
  02e6c00  addic 5, 3, 428
  02e6c04  addic 4, 4, 22752
  02e6c08  ori 7, 5, 0
  02e6c0c  lfs 3, 428(3)
  02e6c10  lfs 4, 0(4)
  02e6c14  fmuls 3, 3, 4
  02e6c18  lfs 4, 4(4)
  02e6c1c  addic 4, 4, 8
  02e6c20  stfs 3, 428(3)
  02e6c24  lfs 3, 4(5)
  02e6c28  addic 3, 3, 8
  02e6c2c  fmuls 3, 3, 4
  02e6c30  stfs 3, 4(5)
  02e6c34  addic 5, 5, 8
  02e6c38  bdnz 0x2e6c0c
  02e6c3c  ori 3, 1, 0
  02e6c40  mtctr 6
  02e6c44  lfs 3, 428(3)
  02e6c48  lfs 4, 4(7)
  02e6c4c  fadds 3, 30, 3
  02e6c50  lfs 5, 8(7)
  02e6c54  addic 3, 3, 16
  02e6c58  lfs 30, 12(7)
  02e6c5c  addic 7, 7, 16
  02e6c60  fadds 3, 3, 4
  02e6c64  fadds 3, 3, 5
  02e6c68  fadds 30, 3, 30
  02e6c6c  bdnz 0x2e6c44
  02e6c70  fadds 30, 30, 31
  02e6c74  fmadds 30, 30, 1, 2
  02e6c78  lis 3, 46
  02e6c7c  stfs 30, 116(1)
  02e6c80  lis 29, 114
  02e6c84  stw 28, 120(1)
  02e6c88  addi 27, 3, 26816
  02e6c8c  stw 28, 124(1)
  02e6c90  stw 28, 128(1)
  02e6c94  lis 3, 161
  02e6c98  lfs 1, 12(27)
  02e6c9c  lfs 2, -3056(29)
  02e6ca0  lwz 3, 1808(3)
  02e6ca4  fmuls 1, 2, 1
  02e6ca8  fctiwz 1, 1
  02e6cac  stfd 1, 496(1)
  02e6cb0  lwz 4, 500(1)
  02e6cb4  divw 5, 3, 4
  02e6cb8  mullw 4, 5, 4
  02e6cbc  subc 3, 3, 4
  02e6cc0  extsw 3, 3
  02e6cc4  bl 0x502730
  02e6cc8  nop
  02e6ccc  lfs 2, 16(27)
  02e6cd0  lfs 3, 20(27)
  02e6cd4  lfs 4, -3056(29)
  02e6cd8  fmuls 1, 1, 2
  02e6cdc  fmuls 2, 4, 3
  02e6ce0  fdivs 1, 1, 2
  02e6ce4  bl 0x502648
  02e6ce8  nop
  02e6cec  clrlwi 29, 30, 31
  02e6cf0  cmpwi 29, 0
  02e6cf4  fmr 30, 1
  02e6cf8  lfs 1, 24(27)
  02e6cfc  fmr 31, 1
  02e6d00  bt 2, 0x2e6d10
  02e6d04  lis 3, 46
  02e6d08  addi 3, 3, 26816
  02e6d0c  lfs 1, 28(3)
  02e6d10  fmuls 1, 30, 1
  02e6d14  addic 27, 1, 208
  02e6d18  stw 28, 136(1)
  02e6d1c  addic 4, 1, 128
  02e6d20  stw 28, 140(1)
  02e6d24  ori 3, 27, 0
  02e6d28  stfs 1, 132(1)
  02e6d2c  bl 0x500ca4
  02e6d30  nop
  02e6d34  addic 26, 1, 144
  02e6d38  addic 4, 1, 112
  02e6d3c  ori 3, 26, 0
  02e6d40  bl 0x500ca4
  02e6d44  nop
  02e6d48  ori 3, 26, 0
  02e6d4c  ori 4, 26, 0
  02e6d50  ori 5, 27, 0
  02e6d54  bl 0x50162c
  02e6d58  nop
  02e6d5c  li 3, 0
  02e6d60  lfs 1, 32(31)
  02e6d64  lis 4, -32640
  02e6d68  subc 3, 3, 29
  02e6d6c  stfs 1, 192(1)
  02e6d70  cntlzw 3, 3
  02e6d74  lfs 1, 36(31)
  02e6d78  li 5, 17
  02e6d7c  li 6, 18
  02e6d80  sldi 3, 3, 58
  02e6d84  stfs 1, 196(1)
  02e6d88  lfs 1, 40(31)
  02e6d8c  ori 4, 4, 32896
  02e6d90  subc 5, 5, 6
  02e6d94  sradi 3, 3, 63
  02e6d98  stfs 1, 200(1)
  02e6d9c  and 3, 3, 5
  02e6da0  lfs 1, 44(31)
  02e6da4  stw 4, 336(1)
  02e6da8  addc 3, 6, 3
  02e6dac  stfs 1, 204(1)
  02e6db0  stw 4, 340(1)
  02e6db4  stw 4, 344(1)
  02e6db8  stw 4, 348(1)
  02e6dbc  bl 0x685c4
  02e6dc0  nop
  02e6dc4  std 3, 392(1)
  02e6dc8  li 3, 0
  02e6dcc  lis 9, 0
  02e6dd0  li 4, 0
  02e6dd4  li 5, 1
  02e6dd8  li 6, 1
  02e6ddc  li 7, 1
  02e6de0  li 8, 0
  02e6de4  ori 9, 9, 65424
  02e6de8  bl 0x502fd4
  02e6dec  nop
  02e6df0  std 3, 400(1)
  02e6df4  li 4, 0
  02e6df8  li 3, 0
  02e6dfc  li 5, 0
  02e6e00  li 6, 0
  02e6e04  li 7, 0
  02e6e08  li 8, 0
  02e6e0c  bl 0x502f08
  02e6e10  nop
  02e6e14  std 3, 384(1)
  02e6e18  li 3, 0
  02e6e1c  li 4, 2
  02e6e20  li 5, 0
  02e6e24  li 6, 1
  02e6e28  li 7, 128
  02e6e2c  bl 0x502ea8
  02e6e30  nop
  02e6e34  lis 4, -16512
  02e6e38  std 3, 408(1)
  02e6e3c  li 5, 1
  02e6e40  stw 28, 276(1)
  02e6e44  lis 3, 161
  02e6e48  li 7, 9
  02e6e4c  stw 4, 272(1)
  02e6e50  stfs 31, 280(1)
  02e6e54  addic 6, 3, 24396
  02e6e58  stfs 31, 284(1)
  02e6e5c  addic 3, 1, 272
  02e6e60  stfs 31, 288(1)
  02e6e64  stw 28, 292(1)
  02e6e68  stfs 31, 296(1)
  02e6e6c  stfs 31, 300(1)
  02e6e70  stw 4, 304(1)
  02e6e74  stw 28, 308(1)
  02e6e78  stw 4, 312(1)
  02e6e7c  stfs 31, 316(1)
  02e6e80  stfs 31, 320(1)
  02e6e84  stw 28, 324(1)
  02e6e88  stw 4, 328(1)
  02e6e8c  stfs 31, 332(1)
  02e6e90  stw 28, 352(1)
  02e6e94  ori 4, 26, 0
  02e6e98  stfs 31, 356(1)
  02e6e9c  stfs 31, 360(1)
  02e6ea0  stfs 31, 364(1)
  02e6ea4  stw 28, 368(1)
  02e6ea8  stw 28, 372(1)
  02e6eac  stfs 31, 376(1)
  02e6eb0  stw 28, 380(1)
  02e6eb4  lwz 6, 28(6)
  02e6eb8  bl 0x72280
  02e6ebc  nop
  02e6ec0  addic 30, 30, 1
  02e6ec4  cmpwi 30, 2
  02e6ec8  bt 0, 0x2e6928
  02e6ecc  ld 0, 592(1)
  02e6ed0  mtlr 0
  02e6ed4  lfd 30, 560(1)
  02e6ed8  lfd 31, 568(1)
  02e6edc  ld 26, 512(1)
  02e6ee0  ld 27, 520(1)
  02e6ee4  ld 28, 528(1)
  02e6ee8  ld 29, 536(1)
  02e6eec  ld 30, 544(1)
  02e6ef0  ld 31, 552(1)
  02e6ef4  addi 1, 1, 576
  02e6ef8  blr

M1900_002e6f18:   # 0x2e6f18, 0x210 bytes
  02e6f18  stdu 1, -240(1)
  02e6f1c  mflr 0
  02e6f20  std 0, 256(1)
  02e6f24  stfd 25, 184(1)
  02e6f28  stfd 26, 192(1)
  02e6f2c  stfd 27, 200(1)
  02e6f30  stfd 28, 208(1)
  02e6f34  stfd 29, 216(1)
  02e6f38  stfd 30, 224(1)
  02e6f3c  stfd 31, 232(1)
  02e6f40  std 30, 168(1)
  02e6f44  lis 4, 46
  02e6f48  li 30, 0
  02e6f4c  std 31, 176(1)
  02e6f50  addi 4, 4, 28412
  02e6f54  ori 31, 3, 0
  02e6f58  lfs 26, 0(4)
  02e6f5c  lfs 27, 4(4)
  02e6f60  lfs 28, 8(4)
  02e6f64  lfs 29, 12(4)
  02e6f68  std 29, 160(1)
  02e6f6c  std 28, 152(1)
  02e6f70  std 27, 144(1)
  02e6f74  lfs 30, 16(4)
  02e6f78  lfs 31, 20(4)
  02e6f7c  fmr 1, 26
  02e6f80  lfs 3, 16(31)
  02e6f84  fmr 2, 27
  02e6f88  lfs 4, 20(31)
  02e6f8c  stfs 3, 112(1)
  02e6f90  lfs 3, 24(31)
  02e6f94  stfs 4, 116(1)
  02e6f98  lfs 4, 28(31)
  02e6f9c  stfs 3, 120(1)
  02e6fa0  stfs 4, 124(1)
  02e6fa4  bl 0xfcbe8
  02e6fa8  nop
  02e6fac  lfs 2, 112(1)
  02e6fb0  fadds 3, 2, 1
  02e6fb4  fmr 1, 26
  02e6fb8  fmr 2, 27
  02e6fbc  stfs 3, 112(1)
  02e6fc0  bl 0xfcbe8
  02e6fc4  nop
  02e6fc8  lfs 2, 116(1)
  02e6fcc  fadds 3, 2, 1
  02e6fd0  fmr 1, 26
  02e6fd4  fmr 2, 27
  02e6fd8  stfs 3, 116(1)
  02e6fdc  bl 0xfcbe8
  02e6fe0  nop
  02e6fe4  lfs 2, 120(1)
  02e6fe8  fadds 1, 2, 1
  02e6fec  stfs 1, 120(1)
  02e6ff0  bl 0x5c8318
  02e6ff4  nop
  02e6ff8  addic 29, 3, 48
  02e6ffc  bl 0x5c8318
  02e7000  nop
  02e7004  addic 28, 3, 32
  02e7008  bl 0x5c8318
  02e700c  nop
  02e7010  fmr 1, 28
  02e7014  li 4, 47
  02e7018  clrlwi 29, 29, 26
  02e701c  fmr 2, 29
  02e7020  and 27, 3, 4
  02e7024  clrlwi 28, 28, 26
  02e7028  bl 0xfcbe8
  02e702c  nop
  02e7030  fmr 25, 1
  02e7034  bl 0x5c8318
  02e7038  nop
  02e703c  lis 4, 26214
  02e7040  ori 4, 4, 26215
  02e7044  mulhw 4, 4, 3
  02e7048  srawi 4, 4, 4
  02e704c  srwi 5, 4, 31
  02e7050  addc 4, 4, 5
  02e7054  sldi 5, 4, 5
  02e7058  sldi 4, 4, 3
  02e705c  addc 4, 5, 4
  02e7060  subc 3, 3, 4
  02e7064  addic 3, 3, 10
  02e7068  extsw 3, 3
  02e706c  fmr 1, 25
  02e7070  ori 6, 27, 0
  02e7074  fmr 2, 31
  02e7078  std 3, 128(1)
  02e707c  lis 3, 114
  02e7080  ori 4, 29, 0
  02e7084  ori 5, 28, 0
  02e7088  lfs 3, -3056(3)
  02e708c  lfd 4, 128(1)
  02e7090  fcfid 4, 4
  02e7094  addic 3, 1, 112
  02e7098  frsp 4, 4
  02e709c  fadds 4, 4, 30
  02e70a0  fmuls 3, 3, 4
  02e70a4  fctiwz 3, 3
  02e70a8  stfd 3, 128(1)
  02e70ac  lwz 8, 132(1)
  02e70b0  extsw 8, 8
  02e70b4  bl 0x121a40
  02e70b8  nop
  02e70bc  addic 30, 30, 1
  02e70c0  cmpwi 30, 10
  02e70c4  bt 0, 0x2e6f7c
  02e70c8  lis 4, 165
  02e70cc  ori 3, 31, 0
  02e70d0  addic 4, 4, 8040
  02e70d4  bl 0x110798
  02e70d8  nop
  02e70dc  ori 3, 31, 0
  02e70e0  bl 0xefb38
  02e70e4  nop
  02e70e8  ld 0, 256(1)
  02e70ec  mtlr 0
  02e70f0  lfd 25, 184(1)
  02e70f4  lfd 26, 192(1)
  02e70f8  lfd 27, 200(1)
  02e70fc  lfd 28, 208(1)
  02e7100  lfd 29, 216(1)
  02e7104  lfd 30, 224(1)
  02e7108  lfd 31, 232(1)
  02e710c  ld 27, 144(1)
  02e7110  ld 28, 152(1)
  02e7114  ld 29, 160(1)
  02e7118  ld 30, 168(1)
  02e711c  ld 31, 176(1)
  02e7120  addi 1, 1, 240
  02e7124  blr

FUN_002e7140:   # 0x2e7140, 0x334 bytes
  02e7140  stdu 1, -192(1)
  02e7144  mflr 0
  02e7148  std 0, 208(1)
  02e714c  stfd 31, 184(1)
  02e7150  std 27, 144(1)
  02e7154  std 29, 160(1)
  02e7158  lis 27, 151
  02e715c  ori 29, 5, 0
  02e7160  std 30, 168(1)
  02e7164  addic 27, 27, -25432
  02e7168  li 7, 0
  02e716c  std 31, 176(1)
  02e7170  ori 30, 4, 0
  02e7174  ori 31, 3, 0
  02e7178  li 6, 203
  02e717c  lbz 5, 25(27)
  02e7180  li 3, 1900
  02e7184  subc 4, 7, 5
  02e7188  subc 5, 6, 3
  02e718c  cntlzw 4, 4
  02e7190  sldi 4, 4, 58
  02e7194  sradi 4, 4, 63
  02e7198  and 4, 4, 5
  02e719c  std 28, 152(1)
  02e71a0  std 26, 136(1)
  02e71a4  addc 3, 3, 4
  02e71a8  bl 0xefa28
  02e71ac  nop
  02e71b0  ori 28, 3, 0
  02e71b4  cmpwi 28, 0
  02e71b8  bt 2, 0x2e7444
  02e71bc  ori 3, 30, 0
  02e71c0  li 30, 0
  02e71c4  li 4, 255
  02e71c8  li 5, 1
  02e71cc  ori 6, 31, 0
  02e71d0  stb 30, 32(28)
  02e71d4  stb 4, 48(28)
  02e71d8  stb 5, 49(28)
  02e71dc  lfs 1, 0(3)
  02e71e0  lwz 31, 120(28)
  02e71e4  stfs 1, 16(28)
  02e71e8  lfs 1, 4(3)
  02e71ec  stfs 1, 20(28)
  02e71f0  lfs 1, 8(3)
  02e71f4  stfs 1, 24(28)
  02e71f8  lfs 1, 12(3)
  02e71fc  sth 4, 50(28)
  02e7200  lis 3, 46
  02e7204  stfs 1, 28(28)
  02e7208  lfs 1, 0(29)
  02e720c  addi 26, 3, 28968
  02e7210  stfs 1, 16(31)
  02e7214  lfs 1, 4(29)
  02e7218  lis 3, 114
  02e721c  stfs 1, 20(31)
  02e7220  lfs 1, 8(29)
  02e7224  stw 6, 64(31)
  02e7228  stfs 1, 24(31)
  02e722c  lfs 1, 12(29)
  02e7230  sth 30, 68(31)
  02e7234  stfs 1, 28(31)
  02e7238  stw 30, 84(31)
  02e723c  lfs 1, 0(26)
  02e7240  lfs 31, 4(26)
  02e7244  lfs 3, -3064(3)
  02e7248  lwz 3, 36(28)
  02e724c  fmadds 1, 3, 1, 31
  02e7250  lfs 2, 36(3)
  02e7254  fmuls 1, 2, 1
  02e7258  stfs 1, 44(28)
  02e725c  lbz 3, 25(27)
  02e7260  bl 0x502730
  02e7264  nop
  02e7268  fadds 1, 1, 31
  02e726c  lfs 2, 8(26)
  02e7270  fmuls 1, 1, 2
  02e7274  stfs 1, 72(31)
  02e7278  lbz 3, 83(28)
  02e727c  cmpwi 3, 0
  02e7280  bt 2, 0x2e72c0
  02e7284  lis 3, 46
  02e7288  lis 4, 114
  02e728c  addi 3, 3, 28968
  02e7290  li 5, 0
  02e7294  lfs 1, 12(3)
  02e7298  lfs 2, -3056(4)
  02e729c  ori 3, 28, 0
  02e72a0  fmuls 1, 2, 1
  02e72a4  li 4, 0
  02e72a8  fctiwz 1, 1
  02e72ac  stfd 1, 112(1)
  02e72b0  lwz 6, 116(1)
  02e72b4  extsw 6, 6
  02e72b8  bl 0xfddc0
  02e72bc  nop
  02e72c0  lis 3, 46
  02e72c4  li 4, -1
  02e72c8  stw 30, 148(28)
  02e72cc  addi 3, 3, 28968
  02e72d0  stw 4, 152(28)
  02e72d4  lfs 1, 16(3)
  02e72d8  lfs 2, 20(3)
  02e72dc  bl 0xfcbe8
  02e72e0  nop
  02e72e4  lis 27, 165
  02e72e8  stfs 1, 72(28)
  02e72ec  stw 30, 88(31)
  02e72f0  stw 30, 92(31)
  02e72f4  lhz 8, 8040(27)
  02e72f8  ori 6, 8, 0
  02e72fc  extsh 3, 6
  02e7300  cmpwi 3, 5
  02e7304  bf 1, 0x2e73c8
  02e7308  addic 26, 27, 8040
  02e730c  extsh 6, 6
  02e7310  cmpwi 6, 1
  02e7314  bt 0, 0x2e73b8
  02e7318  ori 29, 30, 0
  02e731c  li 4, 1
  02e7320  ori 3, 29, 0
  02e7324  addic 9, 26, 2
  02e7328  lis 5, 164
  02e732c  lhz 7, 0(9)
  02e7330  extsh 7, 7
  02e7334  lwz 5, -28512(5)
  02e7338  sldi 7, 7, 8
  02e733c  addc 5, 5, 7
  02e7340  clrldi 5, 5, 32
  02e7344  cmpwi 5, 0
  02e7348  bt 2, 0x2e7384
  02e734c  lhz 7, 166(5)
  02e7350  cmpwi 7, 203
  02e7354  cmpwi 1, 7, 1900
  02e7358  bt 2, 0x2e7360
  02e735c  bf 6, 0x2e7384
  02e7360  lbz 7, 32(5)
  02e7364  cmpwi 7, 5
  02e7368  bf 0, 0x2e7384
  02e736c  lwz 7, 120(5)
  02e7370  lwz 7, 84(7)
  02e7374  cmpw 7, 3
  02e7378  bt 0, 0x2e7384
  02e737c  ori 29, 5, 0
  02e7380  ori 3, 7, 0
  02e7384  addic 4, 4, 1
  02e7388  addic 9, 9, 2
  02e738c  cmpw 4, 6
  02e7390  bf 1, 0x2e7328
  02e7394  cmpwi 29, 0
  02e7398  bt 2, 0x2e73b8
  02e739c  ori 3, 29, 0
  02e73a0  ori 4, 26, 0
  02e73a4  bl 0x110798
  02e73a8  nop
  02e73ac  li 3, 6
  02e73b0  stb 3, 32(29)
  02e73b4  lhz 8, 8040(27)
  02e73b8  ori 6, 8, 0
  02e73bc  extsh 3, 6
  02e73c0  cmpwi 3, 5
  02e73c4  bt 1, 0x2e730c
  02e73c8  ori 3, 28, 0
  02e73cc  bl 0xf31a8
  02e73d0  nop
  02e73d4  ori 3, 28, 0
  02e73d8  bl 0x10c000
  02e73dc  nop
  02e73e0  li 3, 128
  02e73e4  sth 30, 0(31)
  02e73e8  li 5, 4
  02e73ec  stb 30, 8(31)
  02e73f0  li 6, 15
  02e73f4  stb 30, 9(31)
  02e73f8  addic 4, 27, 8040
  02e73fc  stb 3, 7(31)
  02e7400  sth 5, 12(31)
  02e7404  sth 6, 14(31)
  02e7408  ori 3, 28, 0
  02e740c  li 5, 31
  02e7410  bl 0x110724
  02e7414  nop
  02e7418  lis 31, 151
  02e741c  addic 31, 31, -25376
  02e7420  lbz 3, 8357(31)
  02e7424  cmpwi 3, 0
  02e7428  bf 2, 0x2e7438
  02e742c  lbz 3, 8367(31)
  02e7430  cmpwi 3, 0
  02e7434  bt 2, 0x2e7444
  02e7438  lhz 3, 52(28)
  02e743c  ori 3, 3, 65
  02e7440  sth 3, 52(28)
  02e7444  ori 3, 28, 0
  02e7448  ld 0, 208(1)
  02e744c  mtlr 0
  02e7450  lfd 31, 184(1)
  02e7454  ld 26, 136(1)
  02e7458  ld 27, 144(1)
  02e745c  ld 28, 152(1)
  02e7460  ld 29, 160(1)
  02e7464  ld 30, 168(1)
  02e7468  ld 31, 176(1)
  02e746c  addi 1, 1, 192
  02e7470  blr

FUN_002e74a8:   # 0x2e74a8, 0x71c bytes
  02e74a8  stdu 1, -272(1)
  02e74ac  mflr 0
  02e74b0  std 0, 288(1)
  02e74b4  stfd 30, 256(1)
  02e74b8  stfd 31, 264(1)
  02e74bc  std 28, 224(1)
  02e74c0  std 29, 232(1)
  02e74c4  lis 28, 151
  02e74c8  std 31, 248(1)
  02e74cc  lwz 29, 120(4)
  02e74d0  ori 31, 3, 0
  02e74d4  addic 28, 28, -25376
  02e74d8  std 30, 240(1)
  02e74dc  lfs 1, 0(5)
  02e74e0  ori 30, 4, 0
  02e74e4  lwz 3, 764(28)
  02e74e8  stfs 1, 16(29)
  02e74ec  lfs 1, 4(5)
  02e74f0  cmpwi 3, 0
  02e74f4  stfs 1, 20(29)
  02e74f8  lfs 1, 8(5)
  02e74fc  stfs 1, 24(29)
  02e7500  lfs 1, 12(5)
  02e7504  stfs 1, 28(29)
  02e7508  bt 2, 0x2e754c
  02e750c  bl 0x1122ac
  02e7510  nop
  02e7514  cmpwi 3, 0
  02e7518  bt 2, 0x2e754c
  02e751c  lfs 1, 16(29)
  02e7520  lfs 2, 256(28)
  02e7524  fadds 1, 1, 2
  02e7528  lfs 2, 20(29)
  02e752c  lfs 3, 24(29)
  02e7530  stfs 1, 16(29)
  02e7534  lfs 1, 260(28)
  02e7538  fadds 1, 2, 1
  02e753c  stfs 1, 20(29)
  02e7540  lfs 1, 264(28)
  02e7544  fadds 1, 3, 1
  02e7548  stfs 1, 24(29)
  02e754c  lfs 1, 0(31)
  02e7550  stfs 1, 16(30)
  02e7554  lfs 1, 4(31)
  02e7558  lwz 6, 8320(28)
  02e755c  stfs 1, 20(30)
  02e7560  lfs 1, 8(31)
  02e7564  stfs 1, 24(30)
  02e7568  lfs 1, 12(31)
  02e756c  stfs 1, 28(30)
  02e7570  lfs 1, 16(6)
  02e7574  stfs 1, 112(1)
  02e7578  lfs 2, 20(6)
  02e757c  lfs 3, 4(31)
  02e7580  lfs 4, 0(31)
  02e7584  fsubs 3, 3, 2
  02e7588  fsubs 4, 4, 1
  02e758c  lfs 5, 8(31)
  02e7590  fsubs 6, 5, 5
  02e7594  stfs 2, 116(1)
  02e7598  lfs 8, 24(6)
  02e759c  lis 3, 46
  02e75a0  stfs 8, 120(1)
  02e75a4  addi 3, 3, 29812
  02e75a8  fmuls 7, 3, 3
  02e75ac  lfs 8, 28(6)
  02e75b0  stfs 8, 124(1)
  02e75b4  stfs 5, 120(1)
  02e75b8  lfs 8, 0(3)
  02e75bc  fmadds 7, 4, 4, 7
  02e75c0  lfs 31, 4(3)
  02e75c4  ori 4, 31, 0
  02e75c8  addic 3, 1, 112
  02e75cc  li 5, 0
  02e75d0  fmadds 7, 6, 6, 7
  02e75d4  li 7, 0
  02e75d8  fsqrts 7, 7
  02e75dc  fadds 8, 7, 8
  02e75e0  fsub 9, 31, 7
  02e75e4  fsub 10, 31, 7
  02e75e8  fsub 11, 31, 7
  02e75ec  fsub 12, 7, 31
  02e75f0  fsub 13, 7, 31
  02e75f4  fdivs 8, 8, 7
  02e75f8  fsub 7, 7, 31
  02e75fc  fmuls 6, 6, 8
  02e7600  fmuls 3, 3, 8
  02e7604  fmuls 4, 4, 8
  02e7608  fsel 8, 9, 31, 6
  02e760c  fsel 9, 10, 31, 3
  02e7610  fsel 10, 11, 31, 4
  02e7614  fsel 6, 12, 8, 6
  02e7618  fsel 3, 13, 9, 3
  02e761c  fsel 4, 7, 10, 4
  02e7620  fadds 5, 6, 5
  02e7624  fadds 2, 3, 2
  02e7628  fadds 1, 4, 1
  02e762c  stfs 5, 8(31)
  02e7630  stfs 2, 4(31)
  02e7634  stfs 1, 0(31)
  02e7638  bl 0x57820
  02e763c  nop
  02e7640  cmpwi 3, 0
  02e7644  bt 2, 0x2e7b94
  02e7648  lis 3, 161
  02e764c  vspltisw 3, -1
  02e7650  li 4, 0
  02e7654  addic 3, 3, 2368
  02e7658  li 6, 17
  02e765c  li 7, 18
  02e7660  li 5, 19
  02e7664  vslw 3, 3, 3
  02e7668  li 8, 21
  02e766c  lfs 1, 32(3)
  02e7670  li 9, 22
  02e7674  stfs 1, 16(30)
  02e7678  lfs 1, 36(3)
  02e767c  li 10, 23
  02e7680  stfs 1, 20(30)
  02e7684  lfs 1, 40(3)
  02e7688  stfs 1, 24(30)
  02e768c  lfs 1, 44(3)
  02e7690  stfs 1, 28(30)
  02e7694  stb 4, 16(29)
  02e7698  stbx 4, 29, 6
  02e769c  stbx 4, 29, 7
  02e76a0  stbx 4, 29, 5
  02e76a4  li 6, 25
  02e76a8  stb 4, 20(29)
  02e76ac  li 7, 26
  02e76b0  stbx 4, 29, 8
  02e76b4  li 5, 27
  02e76b8  stbx 4, 29, 9
  02e76bc  li 8, 29
  02e76c0  stbx 4, 29, 10
  02e76c4  li 9, 30
  02e76c8  stb 4, 24(29)
  02e76cc  li 10, 31
  02e76d0  stbx 4, 29, 6
  02e76d4  lis 6, 46
  02e76d8  stbx 4, 29, 7
  02e76dc  stbx 4, 29, 5
  02e76e0  li 7, 4
  02e76e4  stb 4, 28(29)
  02e76e8  addi 6, 6, 29812
  02e76ec  stbx 4, 29, 8
  02e76f0  li 5, 8
  02e76f4  stbx 4, 29, 9
  02e76f8  stbx 4, 29, 10
  02e76fc  lis 8, 114
  02e7700  li 9, -3056
  02e7704  stb 7, 32(30)
  02e7708  li 4, 68
  02e770c  <unknown>
  02e7710  vspltw 2, 2, 0
  02e7714  <unknown>
  02e7718  lfs 1, 72(30)
  02e771c  vmaddfp 2, 4, 2, 3
  02e7720  vctsxs 2, 2, 0
  02e7724  vsplth 2, 2, 1
  02e7728  stvehx 2, 4, 29
  02e772c  lfs 2, 12(6)
  02e7730  lfs 3, 16(6)
  02e7734  fadds 2, 1, 2
  02e7738  fsubs 5, 3, 1
  02e773c  lfs 4, 20(6)
  02e7740  fsubs 6, 4, 1
  02e7744  fsubs 3, 3, 2
  02e7748  fsub 7, 1, 5
  02e774c  fsubs 4, 4, 2
  02e7750  fsub 9, 2, 3
  02e7754  fsel 1, 7, 5, 1
  02e7758  lfs 5, 24(6)
  02e775c  lfs 7, 28(6)
  02e7760  fsel 2, 9, 3, 2
  02e7764  fsub 3, 6, 1
  02e7768  fsub 9, 4, 2
  02e776c  fsel 3, 3, 6, 1
  02e7770  lfs 6, 32(6)
  02e7774  lfs 8, 68(3)
  02e7778  lfs 12, 36(6)
  02e777c  fsel 2, 9, 4, 2
  02e7780  fmuls 4, 3, 3
  02e7784  lfs 9, 64(3)
  02e7788  lwz 5, 72(3)
  02e778c  lfs 1, 72(3)
  02e7790  fmuls 10, 2, 2
  02e7794  fmuls 11, 4, 3
  02e7798  fmuls 13, 10, 2
  02e779c  fmuls 0, 4, 11
  02e77a0  fmadds 3, 11, 5, 3
  02e77a4  fmuls 11, 10, 13
  02e77a8  fmadds 2, 13, 5, 2
  02e77ac  fmuls 5, 4, 0
  02e77b0  fmadds 3, 0, 7, 3
  02e77b4  fmuls 13, 10, 11
  02e77b8  fmadds 2, 11, 7, 2
  02e77bc  fmuls 4, 4, 5
  02e77c0  fmadds 3, 5, 6, 3
  02e77c4  fmuls 5, 10, 13
  02e77c8  fmadds 2, 13, 6, 2
  02e77cc  fmadds 3, 4, 12, 3
  02e77d0  fmuls 4, 1, 1
  02e77d4  fmadds 5, 5, 12, 2
  02e77d8  fmuls 2, 8, 3
  02e77dc  fmuls 3, 9, 3
  02e77e0  fmadds 2, 9, 5, 2
  02e77e4  fmsubs 3, 8, 5, 3
  02e77e8  lfs 5, 40(3)
  02e77ec  lis 3, 115
  02e77f0  addic 3, 3, 22784
  02e77f4  fmadds 4, 2, 2, 4
  02e77f8  fabs 7, 3
  02e77fc  stfs 3, 140(1)
  02e7800  stfs 5, 24(30)
  02e7804  lwz 4, 140(1)
  02e7808  lfs 3, 140(1)
  02e780c  fsqrts 4, 4
  02e7810  rlwinm 4, 4, 3, 29, 29
  02e7814  fabs 6, 3
  02e7818  fabs 5, 4
  02e781c  stfs 4, 136(1)
  02e7820  fsubs 3, 5, 7
  02e7824  stfs 3, 144(1)
  02e7828  lwz 7, 136(1)
  02e782c  lfs 3, 136(1)
  02e7830  lfs 4, 40(6)
  02e7834  lwz 6, 144(1)
  02e7838  lfs 8, 144(1)
  02e783c  fabs 3, 3
  02e7840  rlwimi 4, 6, 2, 30, 30
  02e7844  fsub 9, 8, 31
  02e7848  fsub 8, 8, 31
  02e784c  rlwimi 4, 7, 4, 28, 28
  02e7850  ori 7, 3, 0
  02e7854  slwi 6, 4, 2
  02e7858  rlwimi 7, 4, 2, 26, 28
  02e785c  clrldi 4, 7, 32
  02e7860  fsel 7, 9, 3, 7
  02e7864  lfsx 3, 3, 6
  02e7868  fsel 6, 8, 6, 5
  02e786c  lfs 5, 4(4)
  02e7870  fcmpu 0, 7, 31
  02e7874  bt 1, 0x2e7880
  02e7878  fmr 3, 31
  02e787c  b 0x2e7998
  02e7880  fsubs 8, 6, 7
  02e7884  fadds 6, 6, 7
  02e7888  addic 4, 1, 16
  02e788c  li 9, 2
  02e7890  addic 6, 4, 164
  02e7894  addic 7, 4, 180
  02e7898  mtctr 9
  02e789c  fdivs 6, 8, 6
  02e78a0  fmuls 7, 6, 6
  02e78a4  stfs 6, 192(1)
  02e78a8  stfs 6, 184(1)
  02e78ac  stfs 6, 188(1)
  02e78b0  stfs 6, 180(1)
  02e78b4  lfs 9, 192(1)
  02e78b8  lfs 10, 184(1)
  02e78bc  lfs 11, 188(1)
  02e78c0  fmuls 8, 7, 7
  02e78c4  fmuls 10, 10, 7
  02e78c8  fmuls 9, 9, 8
  02e78cc  fmuls 6, 8, 8
  02e78d0  fmuls 8, 11, 8
  02e78d4  stfs 10, 184(1)
  02e78d8  fmuls 7, 9, 7
  02e78dc  stfs 8, 188(1)
  02e78e0  stfs 7, 192(1)
  02e78e4  lfs 7, 164(4)
  02e78e8  fmuls 7, 7, 6
  02e78ec  stfs 7, 180(4)
  02e78f0  lfs 7, 4(6)
  02e78f4  addic 4, 4, 8
  02e78f8  addic 6, 6, 8
  02e78fc  fmuls 7, 7, 6
  02e7900  stfs 7, 4(7)
  02e7904  addic 7, 7, 8
  02e7908  bdnz 0x2e78e4
  02e790c  li 7, 4
  02e7910  ori 4, 1, 0
  02e7914  mtctr 7
  02e7918  lis 6, 115
  02e791c  addic 7, 4, 180
  02e7920  addic 6, 6, 22752
  02e7924  ori 8, 7, 0
  02e7928  lfs 6, 180(4)
  02e792c  lfs 7, 0(6)
  02e7930  fmuls 6, 6, 7
  02e7934  lfs 7, 4(6)
  02e7938  addic 6, 6, 8
  02e793c  stfs 6, 180(4)
  02e7940  lfs 6, 4(7)
  02e7944  addic 4, 4, 8
  02e7948  fmuls 6, 6, 7
  02e794c  stfs 6, 4(7)
  02e7950  addic 7, 7, 8
  02e7954  bdnz 0x2e7928
  02e7958  fmr 6, 31
  02e795c  ori 4, 1, 0
  02e7960  mtctr 9
  02e7964  lfs 7, 180(4)
  02e7968  fadds 6, 6, 7
  02e796c  addic 4, 4, 16
  02e7970  lfs 7, 4(8)
  02e7974  lfs 8, 8(8)
  02e7978  lfs 9, 12(8)
  02e797c  addic 8, 8, 16
  02e7980  fadds 6, 6, 7
  02e7984  fadds 6, 6, 8
  02e7988  fadds 6, 6, 9
  02e798c  bdnz 0x2e7964
  02e7990  fadds 6, 6, 4
  02e7994  fmadds 3, 6, 3, 5
  02e7998  fabs 5, 1
  02e799c  fabs 6, 2
  02e79a0  fneg 3, 3
  02e79a4  fsubs 1, 5, 6
  02e79a8  stfs 3, 76(29)
  02e79ac  stfs 2, 128(1)
  02e79b0  stfs 1, 132(1)
  02e79b4  lwz 4, 128(1)
  02e79b8  lfs 1, 128(1)
  02e79bc  lwz 6, 132(1)
  02e79c0  lfs 2, 132(1)
  02e79c4  rlwinm 4, 4, 3, 29, 29
  02e79c8  fabs 8, 1
  02e79cc  fsub 7, 2, 31
  02e79d0  rlwimi 4, 6, 2, 30, 30
  02e79d4  fsub 9, 2, 31
  02e79d8  rlwimi 4, 5, 4, 28, 28
  02e79dc  ori 5, 3, 0
  02e79e0  rlwimi 5, 4, 2, 26, 28
  02e79e4  slwi 4, 4, 2
  02e79e8  clrldi 5, 5, 32
  02e79ec  fsel 6, 7, 5, 6
  02e79f0  fsel 5, 9, 8, 5
  02e79f4  lfsx 1, 3, 4
  02e79f8  lfs 2, 4(5)
  02e79fc  fcmpu 0, 6, 31
  02e7a00  bt 1, 0x2e7a08
  02e7a04  b 0x2e7b1c
  02e7a08  fsubs 7, 5, 6
  02e7a0c  fadds 5, 5, 6
  02e7a10  addic 3, 1, 16
  02e7a14  li 6, 2
  02e7a18  addic 4, 3, 132
  02e7a1c  addic 5, 3, 148
  02e7a20  mtctr 6
  02e7a24  fdivs 5, 7, 5
  02e7a28  fmuls 6, 5, 5
  02e7a2c  stfs 5, 160(1)
  02e7a30  stfs 5, 152(1)
  02e7a34  stfs 5, 156(1)
  02e7a38  stfs 5, 148(1)
  02e7a3c  lfs 8, 160(1)
  02e7a40  lfs 9, 152(1)
  02e7a44  lfs 10, 156(1)
  02e7a48  fmuls 7, 6, 6
  02e7a4c  fmuls 9, 9, 6
  02e7a50  fmuls 8, 8, 7
  02e7a54  fmuls 5, 7, 7
  02e7a58  fmuls 7, 10, 7
  02e7a5c  stfs 9, 152(1)
  02e7a60  fmuls 6, 8, 6
  02e7a64  stfs 7, 156(1)
  02e7a68  stfs 6, 160(1)
  02e7a6c  lfs 6, 132(3)
  02e7a70  fmuls 6, 6, 5
  02e7a74  stfs 6, 148(3)
  02e7a78  lfs 6, 4(4)
  02e7a7c  addic 3, 3, 8
  02e7a80  addic 4, 4, 8
  02e7a84  fmuls 6, 6, 5
  02e7a88  stfs 6, 4(5)
  02e7a8c  addic 5, 5, 8
  02e7a90  bdnz 0x2e7a6c
  02e7a94  li 5, 4
  02e7a98  ori 3, 1, 0
  02e7a9c  mtctr 5
  02e7aa0  lis 4, 115
  02e7aa4  addic 5, 3, 148
  02e7aa8  addic 4, 4, 22752
  02e7aac  ori 7, 5, 0
  02e7ab0  lfs 5, 148(3)
  02e7ab4  lfs 6, 0(4)
  02e7ab8  fmuls 5, 5, 6
  02e7abc  lfs 6, 4(4)
  02e7ac0  addic 4, 4, 8
  02e7ac4  stfs 5, 148(3)
  02e7ac8  lfs 5, 4(5)
  02e7acc  addic 3, 3, 8
  02e7ad0  fmuls 5, 5, 6
  02e7ad4  stfs 5, 4(5)
  02e7ad8  addic 5, 5, 8
  02e7adc  bdnz 0x2e7ab0
  02e7ae0  ori 3, 1, 0
  02e7ae4  mtctr 6
  02e7ae8  lfs 5, 148(3)
  02e7aec  lfs 6, 4(7)
  02e7af0  fadds 5, 31, 5
  02e7af4  lfs 7, 8(7)
  02e7af8  lfs 31, 12(7)
  02e7afc  addic 3, 3, 16
  02e7b00  addic 7, 7, 16
  02e7b04  fadds 5, 5, 6
  02e7b08  fadds 5, 5, 7
  02e7b0c  fadds 31, 5, 31
  02e7b10  bdnz 0x2e7ae8
  02e7b14  fadds 31, 31, 4
  02e7b18  fmadds 31, 31, 1, 2
  02e7b1c  stfs 31, 80(29)
  02e7b20  lfs 31, 64(30)
  02e7b24  fmr 1, 3
  02e7b28  fmr 2, 31
  02e7b2c  bl 0x5025e0
  02e7b30  nop
  02e7b34  lis 3, 46
  02e7b38  lis 31, 114
  02e7b3c  addi 3, 3, 29812
  02e7b40  lfs 30, 44(3)
  02e7b44  lfs 3, -3064(31)
  02e7b48  fmuls 2, 3, 30
  02e7b4c  fmuls 2, 2, 1
  02e7b50  fmr 1, 31
  02e7b54  bl 0x502578
  02e7b58  nop
  02e7b5c  stfs 1, 64(30)
  02e7b60  lfs 31, 68(30)
  02e7b64  lfs 1, 80(29)
  02e7b68  fmr 2, 31
  02e7b6c  bl 0x5025e0
  02e7b70  nop
  02e7b74  lfs 2, -3064(31)
  02e7b78  fmuls 2, 2, 30
  02e7b7c  fmuls 2, 2, 1
  02e7b80  fmr 1, 31
  02e7b84  bl 0x502578
  02e7b88  nop
  02e7b8c  stfs 1, 68(30)
  02e7b90  b 0x2e7b9c
  02e7b94  li 3, 2
  02e7b98  stb 3, 32(30)
  02e7b9c  ld 0, 288(1)
  02e7ba0  mtlr 0
  02e7ba4  lfd 30, 256(1)
  02e7ba8  lfd 31, 264(1)
  02e7bac  ld 28, 224(1)
  02e7bb0  ld 29, 232(1)
  02e7bb4  ld 30, 240(1)
  02e7bb8  ld 31, 248(1)
  02e7bbc  addi 1, 1, 272
  02e7bc0  blr

M1900_002e7c08:   # 0x2e7c08, 0xa84 bytes
  02e7c08  stdu 1, -432(1)
  02e7c0c  mflr 0
  02e7c10  std 0, 448(1)
  02e7c14  stfd 22, 352(1)
  02e7c18  stfd 23, 360(1)
  02e7c1c  stfd 24, 368(1)
  02e7c20  stfd 25, 376(1)
  02e7c24  stfd 26, 384(1)
  02e7c28  stfd 27, 392(1)
  02e7c2c  stfd 28, 400(1)
  02e7c30  stfd 29, 408(1)
  02e7c34  stfd 30, 416(1)
  02e7c38  stfd 31, 424(1)
  02e7c3c  std 25, 296(1)
  02e7c40  std 31, 344(1)
  02e7c44  lis 25, 151
  02e7c48  std 26, 304(1)
  02e7c4c  ori 31, 3, 0
  02e7c50  addic 25, 25, -25376
  02e7c54  std 28, 320(1)
  02e7c58  lis 26, 46
  02e7c5c  li 28, 0
  02e7c60  std 30, 336(1)
  02e7c64  addi 26, 26, 31684
  02e7c68  std 24, 288(1)
  02e7c6c  ori 30, 4, 0
  02e7c70  lwz 3, 8324(25)
  02e7c74  std 29, 328(1)
  02e7c78  ori 24, 28, 0
  02e7c7c  ori 29, 5, 0
  02e7c80  std 27, 312(1)
  02e7c84  cmpwi 3, 114
  02e7c88  bt 2, 0x2e7c9c
  02e7c8c  lis 3, 161
  02e7c90  lwz 3, 1800(3)
  02e7c94  cmpwi 3, 0
  02e7c98  bt 2, 0x2e7ca4
  02e7c9c  ori 3, 28, 0
  02e7ca0  b 0x2e8634
  02e7ca4  lfs 31, 16(30)
  02e7ca8  lfs 1, 20(30)
  02e7cac  stfs 31, 128(1)
  02e7cb0  lfs 2, 24(30)
  02e7cb4  stfs 1, 132(1)
  02e7cb8  lfs 3, 28(30)
  02e7cbc  lbz 3, 32(30)
  02e7cc0  stfs 2, 136(1)
  02e7cc4  cmpwi 3, 1
  02e7cc8  stfs 3, 140(1)
  02e7ccc  bf 2, 0x2e8184
  02e7cd0  lwz 3, 1648(25)
  02e7cd4  lwz 4, 1652(25)
  02e7cd8  lfs 1, 1648(25)
  02e7cdc  lfs 2, 1652(25)
  02e7ce0  fabs 3, 1
  02e7ce4  fabs 2, 2
  02e7ce8  lfs 31, 0(26)
  02e7cec  rlwinm 4, 4, 3, 29, 29
  02e7cf0  lis 27, 115
  02e7cf4  addic 27, 27, 22784
  02e7cf8  fsubs 1, 3, 2
  02e7cfc  stfs 1, 200(1)
  02e7d00  lfs 22, 4(26)
  02e7d04  lfs 23, 8(26)
  02e7d08  lwz 5, 200(1)
  02e7d0c  lfs 1, 200(1)
  02e7d10  rlwimi 4, 5, 2, 30, 30
  02e7d14  fsub 4, 1, 22
  02e7d18  fsub 5, 1, 22
  02e7d1c  rlwimi 4, 3, 4, 28, 28
  02e7d20  ori 3, 27, 0
  02e7d24  rlwimi 3, 4, 2, 26, 28
  02e7d28  slwi 4, 4, 2
  02e7d2c  clrldi 3, 3, 32
  02e7d30  fsel 4, 4, 3, 2
  02e7d34  lfsx 1, 27, 4
  02e7d38  fsel 3, 5, 2, 3
  02e7d3c  lfs 2, 4(3)
  02e7d40  fcmpu 0, 4, 22
  02e7d44  bt 1, 0x2e7d50
  02e7d48  fmr 1, 22
  02e7d4c  b 0x2e7e68
  02e7d50  fsubs 5, 3, 4
  02e7d54  fadds 3, 3, 4
  02e7d58  addic 3, 1, 16
  02e7d5c  li 6, 2
  02e7d60  addic 5, 3, 236
  02e7d64  addic 4, 3, 220
  02e7d68  mtctr 6
  02e7d6c  fdivs 3, 5, 3
  02e7d70  fmuls 4, 3, 3
  02e7d74  stfs 3, 248(1)
  02e7d78  stfs 3, 240(1)
  02e7d7c  stfs 3, 244(1)
  02e7d80  stfs 3, 236(1)
  02e7d84  lfs 6, 248(1)
  02e7d88  lfs 7, 240(1)
  02e7d8c  lfs 8, 244(1)
  02e7d90  fmuls 5, 4, 4
  02e7d94  fmuls 7, 7, 4
  02e7d98  fmuls 6, 6, 5
  02e7d9c  fmuls 3, 5, 5
  02e7da0  fmuls 5, 8, 5
  02e7da4  stfs 7, 240(1)
  02e7da8  fmuls 4, 6, 4
  02e7dac  stfs 5, 244(1)
  02e7db0  stfs 4, 248(1)
  02e7db4  lfs 4, 220(3)
  02e7db8  fmuls 4, 4, 3
  02e7dbc  stfs 4, 236(3)
  02e7dc0  lfs 4, 4(4)
  02e7dc4  addic 4, 4, 8
  02e7dc8  fmuls 4, 4, 3
  02e7dcc  addic 3, 3, 8
  02e7dd0  stfs 4, 4(5)
  02e7dd4  addic 5, 5, 8
  02e7dd8  bdnz 0x2e7db4
  02e7ddc  li 5, 4
  02e7de0  ori 3, 1, 0
  02e7de4  mtctr 5
  02e7de8  lis 4, 115
  02e7dec  addic 5, 3, 236
  02e7df0  addic 4, 4, 22752
  02e7df4  ori 7, 5, 0
  02e7df8  lfs 3, 236(3)
  02e7dfc  lfs 4, 0(4)
  02e7e00  fmuls 3, 3, 4
  02e7e04  lfs 4, 4(4)
  02e7e08  addic 4, 4, 8
  02e7e0c  stfs 3, 236(3)
  02e7e10  lfs 3, 4(5)
  02e7e14  addic 3, 3, 8
  02e7e18  fmuls 3, 3, 4
  02e7e1c  stfs 3, 4(5)
  02e7e20  addic 5, 5, 8
  02e7e24  bdnz 0x2e7df8
  02e7e28  ori 3, 1, 0
  02e7e2c  fmr 3, 22
  02e7e30  mtctr 6
  02e7e34  lfs 4, 236(3)
  02e7e38  fadds 3, 3, 4
  02e7e3c  lfs 4, 4(7)
  02e7e40  addic 3, 3, 16
  02e7e44  lfs 5, 8(7)
  02e7e48  lfs 6, 12(7)
  02e7e4c  addic 7, 7, 16
  02e7e50  fadds 3, 3, 4
  02e7e54  fadds 3, 3, 5
  02e7e58  fadds 3, 3, 6
  02e7e5c  bdnz 0x2e7e34
  02e7e60  fadds 3, 3, 23
  02e7e64  fmadds 1, 3, 1, 2
  02e7e68  fmr 2, 1
  02e7e6c  fmr 1, 31
  02e7e70  bl 0x502578
  02e7e74  nop
  02e7e78  lfs 2, 12(26)
  02e7e7c  lfs 30, 16(26)
  02e7e80  fadds 1, 1, 2
  02e7e84  lfs 29, 20(26)
  02e7e88  lwz 3, 1648(25)
  02e7e8c  lfs 4, 1648(25)
  02e7e90  lwz 4, 1652(25)
  02e7e94  lfs 6, 1652(25)
  02e7e98  fabs 7, 4
  02e7e9c  lfs 28, 24(26)
  02e7ea0  fabs 6, 6
  02e7ea4  lfs 27, 28(26)
  02e7ea8  fsubs 2, 30, 1
  02e7eac  fsubs 3, 29, 1
  02e7eb0  lfs 26, 32(26)
  02e7eb4  lfs 25, 36(26)
  02e7eb8  lfs 24, 40(26)
  02e7ebc  rlwinm 4, 4, 3, 29, 29
  02e7ec0  fsub 5, 1, 2
  02e7ec4  fsel 1, 5, 2, 1
  02e7ec8  fsubs 2, 7, 6
  02e7ecc  fsub 4, 3, 1
  02e7ed0  stfs 2, 196(1)
  02e7ed4  fsel 1, 4, 3, 1
  02e7ed8  fmuls 2, 1, 1
  02e7edc  lwz 5, 196(1)
  02e7ee0  lfs 5, 196(1)
  02e7ee4  rlwimi 4, 5, 2, 30, 30
  02e7ee8  rlwimi 4, 3, 4, 28, 28
  02e7eec  fmuls 3, 2, 1
  02e7ef0  ori 3, 27, 0
  02e7ef4  rlwimi 3, 4, 2, 26, 28
  02e7ef8  slwi 4, 4, 2
  02e7efc  clrldi 3, 3, 32
  02e7f00  fmuls 4, 2, 3
  02e7f04  fmadds 1, 3, 28, 1
  02e7f08  fsub 3, 5, 22
  02e7f0c  fmuls 8, 2, 4
  02e7f10  fmadds 1, 4, 27, 1
  02e7f14  fsel 4, 3, 7, 6
  02e7f18  fsub 3, 5, 22
  02e7f1c  fmuls 2, 2, 8
  02e7f20  fmadds 1, 8, 26, 1
  02e7f24  fcmpu 0, 4, 22
  02e7f28  fsel 3, 3, 6, 7
  02e7f2c  fmadds 1, 2, 25, 1
  02e7f30  fmuls 1, 1, 24
  02e7f34  stfs 1, 112(1)
  02e7f38  lfsx 1, 27, 4
  02e7f3c  lfs 2, 4(3)
  02e7f40  bt 1, 0x2e7f48
  02e7f44  b 0x2e805c
  02e7f48  fsubs 5, 3, 4
  02e7f4c  fadds 3, 3, 4
  02e7f50  addic 3, 1, 16
  02e7f54  li 6, 2
  02e7f58  addic 5, 3, 204
  02e7f5c  addic 4, 3, 188
  02e7f60  mtctr 6
  02e7f64  fdivs 3, 5, 3
  02e7f68  fmuls 4, 3, 3
  02e7f6c  stfs 3, 216(1)
  02e7f70  stfs 3, 208(1)
  02e7f74  stfs 3, 212(1)
  02e7f78  stfs 3, 204(1)
  02e7f7c  lfs 6, 216(1)
  02e7f80  lfs 7, 208(1)
  02e7f84  lfs 8, 212(1)
  02e7f88  fmuls 5, 4, 4
  02e7f8c  fmuls 7, 7, 4
  02e7f90  fmuls 6, 6, 5
  02e7f94  fmuls 3, 5, 5
  02e7f98  fmuls 5, 8, 5
  02e7f9c  stfs 7, 208(1)
  02e7fa0  fmuls 4, 6, 4
  02e7fa4  stfs 5, 212(1)
  02e7fa8  stfs 4, 216(1)
  02e7fac  lfs 4, 188(3)
  02e7fb0  fmuls 4, 4, 3
  02e7fb4  stfs 4, 204(3)
  02e7fb8  lfs 4, 4(4)
  02e7fbc  addic 4, 4, 8
  02e7fc0  fmuls 4, 4, 3
  02e7fc4  addic 3, 3, 8
  02e7fc8  stfs 4, 4(5)
  02e7fcc  addic 5, 5, 8
  02e7fd0  bdnz 0x2e7fac
  02e7fd4  li 5, 4
  02e7fd8  ori 3, 1, 0
  02e7fdc  mtctr 5
  02e7fe0  lis 4, 115
  02e7fe4  addic 5, 3, 204
  02e7fe8  addic 4, 4, 22752
  02e7fec  ori 7, 5, 0
  02e7ff0  lfs 3, 204(3)
  02e7ff4  lfs 4, 0(4)
  02e7ff8  fmuls 3, 3, 4
  02e7ffc  lfs 4, 4(4)
  02e8000  addic 4, 4, 8
  02e8004  stfs 3, 204(3)
  02e8008  lfs 3, 4(5)
  02e800c  addic 3, 3, 8
  02e8010  fmuls 3, 3, 4
  02e8014  stfs 3, 4(5)
  02e8018  addic 5, 5, 8
  02e801c  bdnz 0x2e7ff0
  02e8020  ori 3, 1, 0
  02e8024  mtctr 6
  02e8028  lfs 3, 204(3)
  02e802c  lfs 4, 4(7)
  02e8030  fadds 3, 22, 3
  02e8034  lfs 5, 8(7)
  02e8038  addic 3, 3, 16
  02e803c  lfs 22, 12(7)
  02e8040  addic 7, 7, 16
  02e8044  fadds 3, 3, 4
  02e8048  fadds 3, 3, 5
  02e804c  fadds 22, 3, 22
  02e8050  bdnz 0x2e8028
  02e8054  fadds 22, 22, 23
  02e8058  fmadds 22, 22, 1, 2
  02e805c  fmr 1, 31
  02e8060  fmr 2, 22
  02e8064  bl 0x502578
  02e8068  nop
  02e806c  fsubs 2, 30, 1
  02e8070  fsubs 3, 29, 1
  02e8074  fsub 4, 1, 2
  02e8078  fsel 1, 4, 2, 1
  02e807c  fsub 2, 3, 1
  02e8080  fsel 1, 2, 3, 1
  02e8084  lfs 3, 112(1)
  02e8088  lfs 5, 128(25)
  02e808c  lfs 6, 132(25)
  02e8090  fadds 3, 3, 5
  02e8094  stw 28, 120(1)
  02e8098  fmuls 2, 1, 1
  02e809c  stfs 3, 112(1)
  02e80a0  lfs 31, 16(31)
  02e80a4  fmuls 4, 2, 1
  02e80a8  lfs 30, 20(31)
  02e80ac  lfs 29, 24(31)
  02e80b0  fmuls 7, 2, 4
  02e80b4  fmadds 1, 4, 28, 1
  02e80b8  fmuls 4, 2, 7
  02e80bc  fmadds 1, 7, 27, 1
  02e80c0  fmuls 2, 2, 4
  02e80c4  fmadds 1, 4, 26, 1
  02e80c8  fmadds 1, 2, 25, 1
  02e80cc  lfs 2, 136(25)
  02e80d0  lwz 3, 8332(25)
  02e80d4  cmpwi 3, 15
  02e80d8  fmuls 1, 1, 24
  02e80dc  fadds 3, 1, 6
  02e80e0  stfs 1, 116(1)
  02e80e4  lwz 3, 764(25)
  02e80e8  stfs 3, 116(1)
  02e80ec  lfs 1, 44(26)
  02e80f0  fadds 1, 2, 1
  02e80f4  stfs 1, 120(1)
  02e80f8  bf 2, 0x2e8114
  02e80fc  lfs 1, 256(25)
  02e8100  lfs 2, 260(25)
  02e8104  fadds 31, 31, 1
  02e8108  lfs 1, 264(25)
  02e810c  fadds 30, 30, 2
  02e8110  fadds 29, 29, 1
  02e8114  cmpwi 3, 0
  02e8118  bt 2, 0x2e814c
  02e811c  bl 0x1122ac
  02e8120  nop
  02e8124  cmpwi 3, 0
  02e8128  bt 2, 0x2e814c
  02e812c  cmpwi 29, 0
  02e8130  bt 2, 0x2e814c
  02e8134  lfs 1, 256(25)
  02e8138  lfs 2, 260(25)
  02e813c  fadds 31, 31, 1
  02e8140  lfs 1, 264(25)
  02e8144  fadds 30, 30, 2
  02e8148  fadds 29, 29, 1
  02e814c  li 3, 48
  02e8150  vspltisw 2, -1
  02e8154  lis 4, 114
  02e8158  li 5, -3056
  02e815c  vslw 2, 2, 2
  02e8160  <unknown>
  02e8164  li 3, 192
  02e8168  vspltw 3, 3, 0
  02e816c  <unknown>
  02e8170  vmaddfp 2, 4, 3, 2
  02e8174  vctsxs 2, 2, 0
  02e8178  vspltw 2, 2, 0
  02e817c  stvewx 2, 3, 1
  02e8180  b 0x2e81cc
  02e8184  lwz 3, 64(31)
  02e8188  lhz 4, 68(31)
  02e818c  lfs 4, 16(31)
  02e8190  extsh 4, 4
  02e8194  lwz 3, 120(3)
  02e8198  stfs 31, 112(1)
  02e819c  stfs 1, 116(1)
  02e81a0  fmr 31, 4
  02e81a4  stfs 2, 120(1)
  02e81a8  stfs 3, 124(1)
  02e81ac  lfs 30, 20(31)
  02e81b0  lfs 29, 24(31)
  02e81b4  stw 4, 192(1)
  02e81b8  lwz 3, 80(3)
  02e81bc  cmpwi 3, 0
  02e81c0  bt 2, 0x2e81cc
  02e81c4  li 3, 1
  02e81c8  sth 3, 70(31)
  02e81cc  lis 3, 114
  02e81d0  lwz 8, 8320(25)
  02e81d4  lfs 28, 52(26)
  02e81d8  li 7, 0
  02e81dc  addic 4, 1, 112
  02e81e0  li 5, 16
  02e81e4  ori 6, 8, 0
  02e81e8  lfs 1, -3052(3)
  02e81ec  lfs 2, 16(8)
  02e81f0  addic 3, 1, 144
  02e81f4  fnmsubs 29, 1, 28, 29
  02e81f8  stfs 2, 144(1)
  02e81fc  lfs 2, 20(8)
  02e8200  stfs 2, 148(1)
  02e8204  lfs 2, 24(8)
  02e8208  lfs 3, 120(1)
  02e820c  stfs 2, 152(1)
  02e8210  lfs 1, 28(8)
  02e8214  stfs 3, 152(1)
  02e8218  stfs 1, 156(1)
  02e821c  bl 0x57820
  02e8220  nop
  02e8224  cmpwi 3, 0
  02e8228  bt 2, 0x2e835c
  02e822c  bl 0x60780
  02e8230  nop
  02e8234  cmpwi 3, 0
  02e8238  lwz 3, 8320(25)
  02e823c  lwz 5, 192(1)
  02e8240  bf 2, 0x2e8254
  02e8244  lfs 1, 4(26)
  02e8248  fcmpu 0, 29, 1
  02e824c  cror 6, 0, 2
  02e8250  bt 6, 0x2e835c
  02e8254  lis 4, 161
  02e8258  ori 6, 3, 0
  02e825c  addic 4, 4, 2368
  02e8260  lwz 3, 24(4)
  02e8264  cmpwi 3, 0
  02e8268  cmpw 1, 3, 6
  02e826c  bt 2, 0x2e832c
  02e8270  lwz 6, 28(4)
  02e8274  cmpwi 6, 0
  02e8278  bt 1, 0x2e832c
  02e827c  bt 6, 0x2e828c
  02e8280  lwz 6, 64(31)
  02e8284  cmpw 3, 6
  02e8288  bf 2, 0x2e82c8
  02e828c  lis 3, 114
  02e8290  lfs 1, 48(26)
  02e8294  lfs 2, -3056(3)
  02e8298  fmuls 1, 2, 1
  02e829c  fctiwz 1, 1
  02e82a0  stfd 1, 272(1)
  02e82a4  lfs 1, 56(26)
  02e82a8  lwz 3, 276(1)
  02e82ac  fmuls 1, 2, 1
  02e82b0  fctiwz 1, 1
  02e82b4  stfd 1, 272(1)
  02e82b8  lwz 6, 276(1)
  02e82bc  subc 3, 3, 6
  02e82c0  cmpw 5, 3
  02e82c4  bf 0, 0x2e835c
  02e82c8  lis 3, 16128
  02e82cc  lwz 4, 24(4)
  02e82d0  stw 28, 160(1)
  02e82d4  stw 28, 164(1)
  02e82d8  stw 3, 168(1)
  02e82dc  stw 28, 172(1)
  02e82e0  addic 3, 1, 160
  02e82e4  lfs 1, 16(4)
  02e82e8  stfs 1, 32(31)
  02e82ec  lfs 2, 20(4)
  02e82f0  stfs 2, 36(31)
  02e82f4  lfs 3, 24(4)
  02e82f8  fadds 4, 28, 3
  02e82fc  stfs 3, 40(31)
  02e8300  lfs 3, 28(4)
  02e8304  stfs 1, 160(1)
  02e8308  li 4, 0
  02e830c  stfs 3, 44(31)
  02e8310  fmr 1, 28
  02e8314  stfs 2, 164(1)
  02e8318  stfs 4, 168(1)
  02e831c  bl 0xffb70
  02e8320  nop
  02e8324  li 28, 1
  02e8328  b 0x2e835c
  02e832c  lwz 3, 28(4)
  02e8330  cmpwi 3, 0
  02e8334  bf 1, 0x2e835c
  02e8338  lfs 1, 32(4)
  02e833c  li 28, 1
  02e8340  stfs 1, 32(31)
  02e8344  lfs 1, 36(4)
  02e8348  stfs 1, 36(31)
  02e834c  lfs 1, 40(4)
  02e8350  stfs 1, 40(31)
  02e8354  lfs 1, 44(4)
  02e8358  stfs 1, 44(31)
  02e835c  addic 3, 1, 192
  02e8360  bl 0x4fff60
  02e8364  nop
  02e8368  or 3, 3, 28
  02e836c  cmpwi 3, 0
  02e8370  bf 2, 0x2e8510
  02e8374  lfs 2, 112(1)
  02e8378  li 4, 10
  02e837c  lfs 3, 116(1)
  02e8380  lis 3, 114
  02e8384  lfs 4, 120(1)
  02e8388  mtctr 4
  02e838c  lfs 1, 124(1)
  02e8390  stfs 1, 140(1)
  02e8394  stfs 2, 128(1)
  02e8398  stfs 3, 132(1)
  02e839c  stfs 4, 136(1)
  02e83a0  lfs 1, 60(26)
  02e83a4  fadds 2, 2, 31
  02e83a8  lfs 5, -3048(3)
  02e83ac  fadds 3, 3, 30
  02e83b0  fadds 4, 4, 29
  02e83b4  fnmsubs 29, 5, 1, 29
  02e83b8  stfs 2, 112(1)
  02e83bc  stfs 3, 116(1)
  02e83c0  stfs 4, 120(1)
  02e83c4  bdnz 0x2e83a4
  02e83c8  addic 3, 1, 128
  02e83cc  addic 4, 1, 112
  02e83d0  li 5, 16
  02e83d4  ori 6, 30, 0
  02e83d8  li 7, 0
  02e83dc  bl 0x57820
  02e83e0  nop
  02e83e4  cmpwi 3, 0
  02e83e8  bt 2, 0x2e835c
  02e83ec  bl 0x60780
  02e83f0  nop
  02e83f4  cmpwi 3, 0
  02e83f8  lwz 3, 8320(25)
  02e83fc  lwz 5, 192(1)
  02e8400  bf 2, 0x2e8410
  02e8404  lfs 1, 4(26)
  02e8408  fcmpu 0, 29, 1
  02e840c  bt 1, 0x2e835c
  02e8410  lis 4, 161
  02e8414  ori 6, 3, 0
  02e8418  addic 4, 4, 2368
  02e841c  lwz 3, 24(4)
  02e8420  cmpwi 3, 0
  02e8424  cmpw 1, 3, 6
  02e8428  bt 2, 0x2e84e4
  02e842c  lwz 6, 28(4)
  02e8430  cmpwi 6, 0
  02e8434  bt 1, 0x2e84e4
  02e8438  bt 6, 0x2e8448
  02e843c  lwz 6, 64(31)
  02e8440  cmpw 3, 6
  02e8444  bf 2, 0x2e8484
  02e8448  lis 3, 114
  02e844c  lfs 1, 48(26)
  02e8450  lfs 2, -3056(3)
  02e8454  fmuls 1, 2, 1
  02e8458  fctiwz 1, 1
  02e845c  stfd 1, 272(1)
  02e8460  lfs 1, 56(26)
  02e8464  lwz 3, 276(1)
  02e8468  fmuls 1, 2, 1
  02e846c  fctiwz 1, 1
  02e8470  stfd 1, 272(1)
  02e8474  lwz 6, 276(1)
  02e8478  subc 3, 3, 6
  02e847c  cmpw 5, 3
  02e8480  bf 0, 0x2e835c
  02e8484  lis 5, 16128
  02e8488  lwz 4, 24(4)
  02e848c  stw 24, 176(1)
  02e8490  addic 3, 1, 176
  02e8494  stw 24, 180(1)
  02e8498  stw 5, 184(1)
  02e849c  stw 24, 188(1)
  02e84a0  lfs 1, 16(4)
  02e84a4  stfs 1, 32(31)
  02e84a8  lfs 2, 20(4)
  02e84ac  stfs 2, 36(31)
  02e84b0  lfs 3, 24(4)
  02e84b4  fadds 4, 28, 3
  02e84b8  stfs 3, 40(31)
  02e84bc  lfs 3, 28(4)
  02e84c0  stfs 1, 176(1)
  02e84c4  stfs 3, 44(31)
  02e84c8  li 4, 0
  02e84cc  stfs 2, 180(1)
  02e84d0  fmr 1, 28
  02e84d4  stfs 4, 184(1)
  02e84d8  bl 0xffb70
  02e84dc  nop
  02e84e0  b 0x2e8510
  02e84e4  lwz 3, 28(4)
  02e84e8  cmpwi 3, 0
  02e84ec  bf 1, 0x2e835c
  02e84f0  lfs 1, 32(4)
  02e84f4  stfs 1, 32(31)
  02e84f8  lfs 1, 36(4)
  02e84fc  stfs 1, 36(31)
  02e8500  lfs 1, 40(4)
  02e8504  stfs 1, 40(31)
  02e8508  lfs 1, 44(4)
  02e850c  stfs 1, 44(31)
  02e8510  lwz 3, 192(1)
  02e8514  cmpwi 3, 0
  02e8518  bt 2, 0x2e8630
  02e851c  cmpwi 29, 0
  02e8520  bf 2, 0x2e8548
  02e8524  lis 3, 161
  02e8528  addic 3, 3, 2368
  02e852c  lwz 3, 24(3)
  02e8530  cmpwi 3, 0
  02e8534  bt 2, 0x2e8630
  02e8538  bl 0x1122ac
  02e853c  nop
  02e8540  cmpwi 3, 0
  02e8544  bt 2, 0x2e8630
  02e8548  cmpwi 29, 2
  02e854c  bf 2, 0x2e8574
  02e8550  lis 3, 161
  02e8554  addic 3, 3, 2368
  02e8558  lwz 3, 24(3)
  02e855c  cmpwi 3, 0
  02e8560  bt 2, 0x2e8574
  02e8564  bl 0x1122ac
  02e8568  nop
  02e856c  cmpwi 3, 0
  02e8570  bf 2, 0x2e8588
  02e8574  lis 3, 113
  02e8578  ori 4, 30, 0
  02e857c  addic 3, 3, -18744
  02e8580  bl 0x6d720
  02e8584  nop
  02e8588  lis 3, 161
  02e858c  lis 4, 149
  02e8590  addic 3, 3, 2368
  02e8594  addic 4, 4, 5056
  02e8598  lfs 1, 64(3)
  02e859c  stfs 1, 48(31)
  02e85a0  lfs 1, 68(3)
  02e85a4  stfs 1, 52(31)
  02e85a8  lfs 1, 72(3)
  02e85ac  lfs 2, 32(31)
  02e85b0  stfs 1, 56(31)
  02e85b4  lfs 1, 76(3)
  02e85b8  lfs 3, 36(31)
  02e85bc  stfs 1, 60(31)
  02e85c0  lfs 1, 320(4)
  02e85c4  lfs 4, 324(4)
  02e85c8  fsubs 2, 2, 1
  02e85cc  fsubs 3, 3, 4
  02e85d0  lfs 4, 44(31)
  02e85d4  stfs 4, 140(1)
  02e85d8  lfs 4, 40(31)
  02e85dc  lfs 5, 328(4)
  02e85e0  li 3, 1
  02e85e4  fsubs 4, 4, 5
  02e85e8  stfs 2, 128(1)
  02e85ec  stfs 3, 132(1)
  02e85f0  lfs 6, 64(26)
  02e85f4  fmuls 2, 2, 6
  02e85f8  fmuls 3, 3, 6
  02e85fc  fmuls 4, 4, 6
  02e8600  fadds 1, 2, 1
  02e8604  stfs 2, 128(1)
  02e8608  stfs 3, 132(1)
  02e860c  stfs 4, 136(1)
  02e8610  stfs 1, 32(31)
  02e8614  lfs 1, 324(4)
  02e8618  fadds 1, 3, 1
  02e861c  stfs 1, 36(31)
  02e8620  lfs 1, 328(4)
  02e8624  fadds 1, 4, 1
  02e8628  stfs 1, 40(31)
  02e862c  b 0x2e8634
  02e8630  ori 3, 24, 0
  02e8634  ld 0, 448(1)
  02e8638  mtlr 0
  02e863c  lfd 22, 352(1)
  02e8640  lfd 23, 360(1)
  02e8644  lfd 24, 368(1)
  02e8648  lfd 25, 376(1)
  02e864c  lfd 26, 384(1)
  02e8650  lfd 27, 392(1)
  02e8654  lfd 28, 400(1)
  02e8658  lfd 29, 408(1)
  02e865c  lfd 30, 416(1)
  02e8660  lfd 31, 424(1)
  02e8664  ld 24, 288(1)
  02e8668  ld 25, 296(1)
  02e866c  ld 26, 304(1)
  02e8670  ld 27, 312(1)
  02e8674  ld 28, 320(1)
  02e8678  ld 29, 328(1)
  02e867c  ld 30, 336(1)
  02e8680  ld 31, 344(1)
  02e8684  addi 1, 1, 432
  02e8688  blr

M1900_002e86b8:   # 0x2e86b8, 0x334 bytes
  02e86b8  stdu 1, -176(1)
  02e86bc  mflr 0
  02e86c0  std 0, 192(1)
  02e86c4  stfd 30, 160(1)
  02e86c8  stfd 31, 168(1)
  02e86cc  std 31, 152(1)
  02e86d0  ori 31, 3, 0
  02e86d4  lis 3, 151
  02e86d8  std 30, 144(1)
  02e86dc  addic 3, 3, -25376
  02e86e0  lwz 30, 120(31)
  02e86e4  lhz 4, 482(3)
  02e86e8  lwz 5, 104(30)
  02e86ec  extsh 4, 4
  02e86f0  or 6, 5, 4
  02e86f4  cmpwi 1, 4, 0
  02e86f8  cmpwi 6, 0
  02e86fc  std 29, 136(1)
  02e8700  cmpwi 6, 5, 0
  02e8704  bt 2, 0x2e89c8
  02e8708  bf 26, 0x2e8778
  02e870c  lfs 1, 132(3)
  02e8710  lfs 2, 20(31)
  02e8714  lfs 3, 128(3)
  02e8718  fsubs 1, 1, 2
  02e871c  lfs 2, 16(31)
  02e8720  fsubs 2, 3, 2
  02e8724  lis 4, 47
  02e8728  addi 4, 4, -31092
  02e872c  fmuls 1, 1, 1
  02e8730  fmadds 1, 2, 2, 1
  02e8734  lfs 2, 0(4)
  02e8738  fsqrts 1, 1
  02e873c  fcmpu 0, 1, 2
  02e8740  cror 2, 1, 2
  02e8744  bt 2, 0x2e89c8
  02e8748  lfs 1, 136(3)
  02e874c  lfs 2, 24(31)
  02e8750  lis 4, 47
  02e8754  fsubs 1, 1, 2
  02e8758  addi 4, 4, -31092
  02e875c  lfs 2, 4(4)
  02e8760  fabs 1, 1
  02e8764  fcmpu 0, 1, 2
  02e8768  cror 2, 1, 2
  02e876c  bt 2, 0x2e89c8
  02e8770  li 4, 1
  02e8774  stw 4, 104(30)
  02e8778  lfs 1, 20(31)
  02e877c  lfs 2, 132(3)
  02e8780  lfs 3, 16(31)
  02e8784  fsubs 1, 1, 2
  02e8788  lfs 2, 128(3)
  02e878c  lfs 4, 28(31)
  02e8790  fsubs 2, 3, 2
  02e8794  lis 3, 47
  02e8798  li 4, 0
  02e879c  addi 3, 3, -31092
  02e87a0  fmuls 3, 1, 1
  02e87a4  stfs 2, 112(1)
  02e87a8  stfs 1, 116(1)
  02e87ac  stfs 4, 124(1)
  02e87b0  fmadds 3, 2, 2, 3
  02e87b4  lfs 31, 8(3)
  02e87b8  stw 4, 120(1)
  02e87bc  lfs 2, 12(3)
  02e87c0  fsqrts 1, 3
  02e87c4  fsubs 1, 1, 2
  02e87c8  fcmpu 0, 1, 31
  02e87cc  stfs 1, 128(1)
  02e87d0  cror 2, 0, 2
  02e87d4  bt 2, 0x2e87e0
  02e87d8  li 3, 0
  02e87dc  stw 3, 128(1)
  02e87e0  bf 6, 0x2e87ec
  02e87e4  li 3, 0
  02e87e8  stw 3, 128(1)
  02e87ec  lis 3, 47
  02e87f0  fmr 1, 31
  02e87f4  lis 6, 114
  02e87f8  addi 4, 3, -31092
  02e87fc  lis 7, 114
  02e8800  addic 3, 1, 128
  02e8804  addic 5, 30, 96
  02e8808  lfs 30, 16(4)
  02e880c  lfs 3, 20(4)
  02e8810  lfs 5, 24(4)
  02e8814  lfs 4, -3060(6)
  02e8818  lfs 6, -3052(7)
  02e881c  fmuls 2, 4, 30
  02e8820  fmuls 3, 4, 3
  02e8824  fmuls 4, 6, 5
  02e8828  bl 0x109b40
  02e882c  nop
  02e8830  lwz 3, 128(1)
  02e8834  cmpwi 3, 0
  02e8838  bf 2, 0x2e8884
  02e883c  lwz 3, 96(30)
  02e8840  cmpwi 3, 0
  02e8844  bf 2, 0x2e8884
  02e8848  lis 4, 47
  02e884c  addic 3, 31, 16
  02e8850  addi 5, 4, -31092
  02e8854  li 4, 0
  02e8858  lfs 1, 28(5)
  02e885c  bl 0xffb70
  02e8860  nop
  02e8864  lfs 2, 24(31)
  02e8868  fsubs 1, 2, 1
  02e886c  fabs 1, 1
  02e8870  fcmpu 0, 1, 30
  02e8874  cror 6, 1, 2
  02e8878  bt 6, 0x2e8884
  02e887c  li 3, 0
  02e8880  stw 3, 104(30)
  02e8884  lfs 2, 116(1)
  02e8888  lfs 3, 112(1)
  02e888c  fmuls 4, 2, 2
  02e8890  lfs 1, 120(1)
  02e8894  fmadds 4, 3, 3, 4
  02e8898  fmadds 5, 1, 1, 4
  02e889c  lfs 4, 96(30)
  02e88a0  fsqrts 5, 5
  02e88a4  fcmpu 0, 4, 5
  02e88a8  cror 6, 0, 2
  02e88ac  bt 6, 0x2e88c4
  02e88b0  stfs 5, 96(30)
  02e88b4  lfs 3, 112(1)
  02e88b8  fmr 4, 5
  02e88bc  lfs 2, 116(1)
  02e88c0  lfs 1, 120(1)
  02e88c4  fcmpu 0, 5, 4
  02e88c8  cror 6, 0, 2
  02e88cc  bt 6, 0x2e892c
  02e88d0  fmuls 5, 2, 2
  02e88d4  fmadds 5, 3, 3, 5
  02e88d8  fmadds 5, 1, 1, 5
  02e88dc  fsqrts 5, 5
  02e88e0  fdivs 4, 4, 5
  02e88e4  fsub 6, 31, 5
  02e88e8  fsub 7, 31, 5
  02e88ec  fsub 8, 31, 5
  02e88f0  fsub 9, 5, 31
  02e88f4  fsub 10, 5, 31
  02e88f8  fsub 5, 5, 31
  02e88fc  fmuls 3, 3, 4
  02e8900  fmuls 2, 2, 4
  02e8904  fmuls 1, 1, 4
  02e8908  fsel 4, 6, 31, 3
  02e890c  fsel 6, 7, 31, 2
  02e8910  fsel 7, 8, 31, 1
  02e8914  fsel 3, 9, 4, 3
  02e8918  fsel 2, 10, 6, 2
  02e891c  fsel 1, 5, 7, 1
  02e8920  stfs 3, 112(1)
  02e8924  stfs 2, 116(1)
  02e8928  stfs 1, 120(1)
  02e892c  lis 4, 47
  02e8930  fmr 3, 31
  02e8934  ori 3, 31, 0
  02e8938  addi 29, 4, -31092
  02e893c  addic 4, 1, 112
  02e8940  li 8, 0
  02e8944  lfs 1, 28(29)
  02e8948  lfs 2, 32(29)
  02e894c  bl 0x1009b0
  02e8950  nop
  02e8954  lfs 1, 28(29)
  02e8958  addic 3, 31, 16
  02e895c  li 4, 0
  02e8960  bl 0xffb70
  02e8964  nop
  02e8968  fmr 31, 1
  02e896c  lfs 1, 24(31)
  02e8970  fcmpu 0, 1, 31
  02e8974  cror 6, 1, 2
  02e8978  bt 6, 0x2e898c
  02e897c  li 3, 0
  02e8980  stfs 31, 24(31)
  02e8984  stw 3, 100(30)
  02e8988  b 0x2e89c8
  02e898c  lis 3, 47
  02e8990  lfs 1, 100(30)
  02e8994  lis 4, 114
  02e8998  addi 3, 3, -31092
  02e899c  lfs 2, 36(3)
  02e89a0  lfs 3, -3048(4)
  02e89a4  fnmsubs 1, 3, 2, 1
  02e89a8  stfs 1, 100(30)
  02e89ac  lfs 2, 24(31)
  02e89b0  fadds 1, 2, 1
  02e89b4  fcmpu 0, 1, 31
  02e89b8  stfs 1, 24(31)
  02e89bc  cror 6, 1, 2
  02e89c0  bt 6, 0x2e89c8
  02e89c4  stfs 31, 24(31)
  02e89c8  ld 0, 192(1)
  02e89cc  mtlr 0
  02e89d0  lfd 30, 160(1)
  02e89d4  lfd 31, 168(1)
  02e89d8  ld 29, 136(1)
  02e89dc  ld 30, 144(1)
  02e89e0  ld 31, 152(1)
  02e89e4  addi 1, 1, 176
  02e89e8  blr

M1900_002e89ec:   # 0x2e89ec, 0x7c bytes
  02e89ec  stdu 1, -128(1)
  02e89f0  mflr 0
  02e89f4  std 0, 144(1)
  02e89f8  std 31, 120(1)
  02e89fc  ori 31, 3, 0
  02e8a00  bl 0x60780
  02e8a04  nop
  02e8a08  cmpwi 3, 3
  02e8a0c  bt 1, 0x2e8a30
  02e8a10  cmpwi 3, 1
  02e8a14  bt 1, 0x2e8a24
  02e8a18  cmpwi 3, -1
  02e8a1c  bf 1, 0x2e8a54
  02e8a20  b 0x2e8a4c
  02e8a24  cmpwi 3, 2
  02e8a28  bf 1, 0x2e8a54
  02e8a2c  b 0x2e8a4c
  02e8a30  cmpwi 3, 10
  02e8a34  bt 1, 0x2e8a44
  02e8a38  cmpwi 3, 8
  02e8a3c  bt 2, 0x2e8a4c
  02e8a40  b 0x2e8a54
  02e8a44  cmpwi 3, 13
  02e8a48  bt 1, 0x2e8a54
  02e8a4c  ori 3, 31, 0
  02e8a50  bl 0x2e6f18
  02e8a54  ld 0, 144(1)
  02e8a58  mtlr 0
  02e8a5c  ld 31, 120(1)
  02e8a60  addi 1, 1, 128
  02e8a64  blr

UpdateMoby_203:   # 0x2e8af8, 0x1c40 bytes
  02e8af8  stdu 1, -640(1)
  02e8afc  mflr 0
  02e8b00  std 0, 656(1)
  02e8b04  stfd 28, 608(1)
  02e8b08  stfd 29, 616(1)
  02e8b0c  stfd 30, 624(1)
  02e8b10  stfd 31, 632(1)
  02e8b14  std 31, 600(1)
  02e8b18  ori 31, 3, 0
  02e8b1c  lis 3, 151
  02e8b20  li 5, 203
  02e8b24  addic 3, 3, -25432
  02e8b28  lis 6, 47
  02e8b2c  std 28, 576(1)
  02e8b30  lhz 4, 166(31)
  02e8b34  addi 28, 6, -30104
  02e8b38  std 29, 584(1)
  02e8b3c  subc 4, 5, 4
  02e8b40  lbz 29, 25(3)
  02e8b44  std 30, 592(1)
  02e8b48  cntlzw 3, 4
  02e8b4c  lwz 30, 120(31)
  02e8b50  li 4, 0
  02e8b54  sldi 3, 3, 58
  02e8b58  subc 4, 4, 29
  02e8b5c  sradi 3, 3, 63
  02e8b60  and 3, 3, 4
  02e8b64  addc 29, 29, 3
  02e8b68  std 27, 568(1)
  02e8b6c  std 26, 560(1)
  02e8b70  std 25, 552(1)
  02e8b74  std 24, 544(1)
  02e8b78  std 23, 536(1)
  02e8b7c  ori 3, 29, 0
  02e8b80  bl 0x502730
  02e8b84  nop
  02e8b88  lwz 4, 16(31)
  02e8b8c  lis 6, 16384
  02e8b90  lfs 30, 0(28)
  02e8b94  srawi 5, 4, 31
  02e8b98  fmr 31, 1
  02e8b9c  lbz 3, 32(31)
  02e8ba0  srwi 7, 5, 1
  02e8ba4  xor 4, 7, 4
  02e8ba8  subc 4, 4, 5
  02e8bac  cmpw 4, 6
  02e8bb0  bt 0, 0x2e8c24
  02e8bb4  lis 5, 17535
  02e8bb8  ori 5, 5, 16384
  02e8bbc  cmpw 4, 5
  02e8bc0  bt 1, 0x2e8c24
  02e8bc4  lwz 6, 20(31)
  02e8bc8  lis 4, 17535
  02e8bcc  lis 5, 16384
  02e8bd0  srawi 7, 6, 31
  02e8bd4  ori 4, 4, 16384
  02e8bd8  srwi 8, 7, 1
  02e8bdc  xor 6, 8, 6
  02e8be0  subc 6, 6, 7
  02e8be4  cmpw 1, 6, 4
  02e8be8  cmpw 6, 5
  02e8bec  cror 2, 0, 5
  02e8bf0  bt 2, 0x2e8c24
  02e8bf4  lwz 6, 24(31)
  02e8bf8  lis 4, 17535
  02e8bfc  lis 5, 16384
  02e8c00  srawi 7, 6, 31
  02e8c04  ori 4, 4, 16384
  02e8c08  srwi 8, 7, 1
  02e8c0c  xor 6, 8, 6
  02e8c10  subc 6, 6, 7
  02e8c14  cmpw 6, 5
  02e8c18  cmpw 1, 6, 4
  02e8c1c  bt 0, 0x2e8c24
  02e8c20  bf 5, 0x2e8c48
  02e8c24  lis 4, 165
  02e8c28  ori 3, 31, 0
  02e8c2c  addic 4, 4, 8040
  02e8c30  bl 0x110798
  02e8c34  nop
  02e8c38  ori 3, 31, 0
  02e8c3c  bl 0xefb38
  02e8c40  nop
  02e8c44  b 0x2ea6f4
  02e8c48  lis 27, 151
  02e8c4c  addic 27, 27, -25376
  02e8c50  lwz 4, 4240(27)
  02e8c54  cmpwi 4, 0
  02e8c58  bt 2, 0x2e8c68
  02e8c5c  lhz 4, 166(4)
  02e8c60  cmpwi 4, 562
  02e8c64  bt 2, 0x2e8c94
  02e8c68  cmpwi 3, 1
  02e8c6c  bf 2, 0x2e8c94
  02e8c70  lis 4, 165
  02e8c74  ori 3, 31, 0
  02e8c78  addic 4, 4, 8040
  02e8c7c  bl 0x110798
  02e8c80  nop
  02e8c84  ori 3, 31, 0
  02e8c88  bl 0xefb38
  02e8c8c  nop
  02e8c90  b 0x2ea6f4
  02e8c94  lbz 4, 8356(27)
  02e8c98  cmpwi 4, 0
  02e8c9c  bt 2, 0x2e8ccc
  02e8ca0  cmpwi 3, 1
  02e8ca4  bf 2, 0x2e8ccc
  02e8ca8  lis 4, 165
  02e8cac  ori 3, 31, 0
  02e8cb0  addic 4, 4, 8040
  02e8cb4  bl 0x110798
  02e8cb8  nop
  02e8cbc  ori 3, 31, 0
  02e8cc0  bl 0xefb38
  02e8cc4  nop
  02e8cc8  b 0x2ea6f4
  02e8ccc  lwz 3, 84(30)
  02e8cd0  addic 4, 3, 1
  02e8cd4  lhz 3, 52(31)
  02e8cd8  stw 4, 84(30)
  02e8cdc  lbz 4, 8357(27)
  02e8ce0  cmpwi 4, 0
  02e8ce4  bt 2, 0x2e8cfc
  02e8ce8  lbz 4, 32(31)
  02e8cec  cmpwi 4, 2
  02e8cf0  bf 0, 0x2e8cfc
  02e8cf4  ori 3, 3, 65
  02e8cf8  b 0x2e8d04
  02e8cfc  li 4, -66
  02e8d00  and 3, 3, 4
  02e8d04  lwz 4, 64(30)
  02e8d08  sth 3, 52(31)
  02e8d0c  lhz 3, 166(4)
  02e8d10  cmpwi 3, 562
  02e8d14  bf 2, 0x2e8da0
  02e8d18  lhz 3, 70(30)
  02e8d1c  cmpwi 3, 0
  02e8d20  bf 2, 0x2e8da0
  02e8d24  addic 3, 30, 16
  02e8d28  bl 0x5e8030
  02e8d2c  nop
  02e8d30  lis 3, 47
  02e8d34  addi 3, 3, -30104
  02e8d38  lfs 2, 4(3)
  02e8d3c  fcmpu 0, 1, 2
  02e8d40  cror 6, 0, 2
  02e8d44  bt 6, 0x2e8da0
  02e8d48  lwz 3, 764(27)
  02e8d4c  cmpwi 3, 0
  02e8d50  bt 2, 0x2e8d64
  02e8d54  bl 0x1122ac
  02e8d58  nop
  02e8d5c  cmpwi 3, 0
  02e8d60  bf 2, 0x2e8d78
  02e8d64  ori 3, 30, 0
  02e8d68  ori 4, 31, 0
  02e8d6c  li 5, 1
  02e8d70  bl 0x2e7c08
  02e8d74  b 0x2e8da0
  02e8d78  ori 3, 30, 0
  02e8d7c  ori 4, 31, 0
  02e8d80  li 5, 0
  02e8d84  bl 0x2e7c08
  02e8d88  cmpwi 3, 0
  02e8d8c  bf 2, 0x2e8da0
  02e8d90  ori 3, 30, 0
  02e8d94  ori 4, 31, 0
  02e8d98  li 5, 2
  02e8d9c  bl 0x2e7c08
  02e8da0  lbz 3, 32(31)
  02e8da4  cmpwi 3, 2
  02e8da8  cmpwi 1, 3, 0
  02e8dac  cmpwi 6, 3, -1
  02e8db0  cmpwi 7, 3, 1
  02e8db4  bt 1, 0x2e8dcc
  02e8db8  bt 5, 0x2e8dc4
  02e8dbc  bf 25, 0x2ea6ec
  02e8dc0  b 0x2e8dec
  02e8dc4  bf 29, 0x2e8e10
  02e8dc8  b 0x2e8e70
  02e8dcc  cmpwi 3, 5
  02e8dd0  bt 1, 0x2e8de0
  02e8dd4  cmpwi 3, 4
  02e8dd8  bf 1, 0x2e9aa0
  02e8ddc  b 0x2ea594
  02e8de0  cmpwi 3, 6
  02e8de4  bf 1, 0x2ea63c
  02e8de8  b 0x2ea6ec
  02e8dec  li 3, 1
  02e8df0  li 4, 0
  02e8df4  li 5, -1
  02e8df8  stb 3, 32(31)
  02e8dfc  sth 4, 68(30)
  02e8e00  stw 5, 152(31)
  02e8e04  sth 4, 108(30)
  02e8e08  stb 4, 110(30)
  02e8e0c  b 0x2ea6f4
  02e8e10  li 3, 0
  02e8e14  sth 3, 68(30)
  02e8e18  lwz 30, 64(30)
  02e8e1c  lwz 3, 4240(27)
  02e8e20  cmpwi 30, 0
  02e8e24  cmpwi 1, 3, 0
  02e8e28  bt 2, 0x2e8e4c
  02e8e2c  lbz 4, 32(30)
  02e8e30  rlwinm 4, 4, 0, 24, 27
  02e8e34  cmpwi 4, 240
  02e8e38  bt 2, 0x2e8e4c
  02e8e3c  bt 6, 0x2e8e4c
  02e8e40  lhz 3, 166(3)
  02e8e44  cmpwi 3, 562
  02e8e48  bt 2, 0x2ea6f4
  02e8e4c  lis 4, 165
  02e8e50  ori 3, 31, 0
  02e8e54  addic 4, 4, 8040
  02e8e58  bl 0x110798
  02e8e5c  nop
  02e8e60  ori 3, 31, 0
  02e8e64  bl 0xefb38
  02e8e68  nop
  02e8e6c  b 0x2ea6f4
  02e8e70  lwz 3, 36(31)
  02e8e74  lwz 4, 44(31)
  02e8e78  lfs 1, 44(31)
  02e8e7c  srawi 5, 4, 31
  02e8e80  lwz 3, 36(3)
  02e8e84  srwi 6, 5, 1
  02e8e88  srawi 7, 3, 31
  02e8e8c  xor 4, 6, 4
  02e8e90  srwi 6, 7, 1
  02e8e94  subc 4, 4, 5
  02e8e98  xor 3, 6, 3
  02e8e9c  subc 3, 3, 7
  02e8ea0  cmpw 4, 3
  02e8ea4  bf 0, 0x2e8ec4
  02e8ea8  lis 3, 47
  02e8eac  lis 4, 114
  02e8eb0  addi 3, 3, -30104
  02e8eb4  lfs 2, 8(3)
  02e8eb8  lfs 3, -3064(4)
  02e8ebc  fmadds 1, 3, 2, 1
  02e8ec0  stfs 1, 44(31)
  02e8ec4  lis 3, 47
  02e8ec8  lis 4, 114
  02e8ecc  lfs 1, 24(30)
  02e8ed0  addi 3, 3, -30104
  02e8ed4  lis 28, 165
  02e8ed8  li 29, 1
  02e8edc  lfs 2, 12(3)
  02e8ee0  lfs 3, -3048(4)
  02e8ee4  fnmsubs 1, 3, 2, 1
  02e8ee8  stfs 1, 24(30)
  02e8eec  lhz 3, 8040(28)
  02e8ef0  extsh 3, 3
  02e8ef4  cmpwi 3, 1
  02e8ef8  bt 0, 0x2e8ff4
  02e8efc  lis 3, 47
  02e8f00  addic 24, 28, 8040
  02e8f04  addi 3, 3, -30104
  02e8f08  addic 26, 31, 16
  02e8f0c  addic 25, 30, 16
  02e8f10  addic 24, 24, 2
  02e8f14  lfs 31, 16(3)
  02e8f18  lfs 30, 20(3)
  02e8f1c  lis 3, 164
  02e8f20  lhz 4, 0(24)
  02e8f24  extsh 4, 4
  02e8f28  lwz 3, -28512(3)
  02e8f2c  sldi 4, 4, 8
  02e8f30  addc 3, 3, 4
  02e8f34  clrldi 3, 3, 32
  02e8f38  cmpw 3, 31
  02e8f3c  cmpwi 6, 3, 0
  02e8f40  bt 2, 0x2e8fdc
  02e8f44  lbz 4, 32(3)
  02e8f48  cmpwi 4, 2
  02e8f4c  cmpwi 1, 4, 254
  02e8f50  cmpwi 7, 4, 253
  02e8f54  bt 0, 0x2e8fdc
  02e8f58  bt 26, 0x2e8fdc
  02e8f5c  bt 6, 0x2e8fdc
  02e8f60  bt 30, 0x2e8fdc
  02e8f64  addic 23, 1, 192
  02e8f68  addic 5, 3, 16
  02e8f6c  ori 4, 26, 0
  02e8f70  ori 3, 23, 0
  02e8f74  bl 0x5e81f0
  02e8f78  nop
  02e8f7c  li 4, 0
  02e8f80  ori 3, 23, 0
  02e8f84  stw 4, 200(1)
  02e8f88  bl 0x5e8030
  02e8f8c  nop
  02e8f90  fcmpu 0, 1, 31
  02e8f94  cror 6, 1, 2
  02e8f98  bt 6, 0x2e8fdc
  02e8f9c  fsubs 1, 31, 1
  02e8fa0  lfs 2, 192(1)
  02e8fa4  addic 5, 1, 192
  02e8fa8  lfs 3, 196(1)
  02e8fac  ori 3, 25, 0
  02e8fb0  lfs 4, 200(1)
  02e8fb4  ori 4, 25, 0
  02e8fb8  fmuls 1, 1, 30
  02e8fbc  fmuls 2, 2, 1
  02e8fc0  fmuls 3, 3, 1
  02e8fc4  fmuls 1, 4, 1
  02e8fc8  stfs 2, 192(1)
  02e8fcc  stfs 3, 196(1)
  02e8fd0  stfs 1, 200(1)
  02e8fd4  bl 0x5e7f54
  02e8fd8  nop
  02e8fdc  lhz 3, 8040(28)
  02e8fe0  addic 29, 29, 1
  02e8fe4  extsh 3, 3
  02e8fe8  addic 24, 24, 2
  02e8fec  cmpw 29, 3
  02e8ff0  bf 1, 0x2e8f1c
  02e8ff4  lwz 3, 8324(27)
  02e8ff8  cmpwi 3, 30
  02e8ffc  bf 2, 0x2e900c
  02e9000  lwz 4, 8320(27)
  02e9004  li 3, 0
  02e9008  stw 3, 148(4)
  02e900c  lis 3, 47
  02e9010  addic 29, 30, 16
  02e9014  addi 5, 3, -30104
  02e9018  ori 3, 31, 0
  02e901c  ori 4, 29, 0
  02e9020  li 8, 0
  02e9024  lfs 31, 24(5)
  02e9028  lfs 30, 4(5)
  02e902c  fmr 1, 31
  02e9030  fmr 2, 31
  02e9034  fmr 3, 30
  02e9038  bl 0x1009b0
  02e903c  nop
  02e9040  clrlwi 3, 3, 31
  02e9044  cmpwi 3, 0
  02e9048  bt 2, 0x2e9a80
  02e904c  lfs 1, 24(31)
  02e9050  lis 4, 47
  02e9054  lfs 2, 16(31)
  02e9058  fadds 1, 1, 31
  02e905c  lfs 3, 20(31)
  02e9060  addi 4, 4, -30104
  02e9064  stfs 2, 208(1)
  02e9068  lfs 2, 28(31)
  02e906c  addic 3, 1, 208
  02e9070  stfs 3, 212(1)
  02e9074  li 5, 0
  02e9078  stfs 2, 220(1)
  02e907c  ori 6, 31, 0
  02e9080  stfs 1, 216(1)
  02e9084  lfs 1, 28(4)
  02e9088  bl 0x59e20
  02e908c  nop
  02e9090  cmpwi 3, 0
  02e9094  bt 2, 0x2e9a80
  02e9098  lwz 3, 24(30)
  02e909c  cmpwi 3, 0
  02e90a0  bf 0, 0x2e9144
  02e90a4  addic 3, 1, 224
  02e90a8  addic 4, 31, 16
  02e90ac  addic 5, 27, 128
  02e90b0  bl 0x5e81f0
  02e90b4  nop
  02e90b8  lfs 3, 228(1)
  02e90bc  lfs 2, 224(1)
  02e90c0  fmuls 1, 3, 3
  02e90c4  li 3, 0
  02e90c8  lis 4, 47
  02e90cc  stw 3, 232(1)
  02e90d0  addi 3, 4, -30104
  02e90d4  fmadds 1, 2, 2, 1
  02e90d8  lfs 4, 16(3)
  02e90dc  fsqrts 1, 1
  02e90e0  fcmpu 0, 1, 4
  02e90e4  cror 6, 1, 2
  02e90e8  bt 6, 0x2e9144
  02e90ec  fsubs 1, 4, 1
  02e90f0  lis 3, 47
  02e90f4  addi 3, 3, -30104
  02e90f8  lfs 4, 20(3)
  02e90fc  li 3, 0
  02e9100  fmuls 1, 1, 4
  02e9104  stw 3, 232(1)
  02e9108  fmuls 3, 3, 1
  02e910c  fmuls 1, 2, 1
  02e9110  stfs 3, 228(1)
  02e9114  stfs 1, 224(1)
  02e9118  lfs 2, 16(30)
  02e911c  fadds 1, 2, 1
  02e9120  lfs 2, 20(30)
  02e9124  lfs 3, 24(30)
  02e9128  stfs 1, 16(30)
  02e912c  lfs 1, 228(1)
  02e9130  fadds 1, 2, 1
  02e9134  stfs 1, 20(30)
  02e9138  lfs 1, 232(1)
  02e913c  fadds 1, 3, 1
  02e9140  stfs 1, 24(30)
  02e9144  lis 26, 161
  02e9148  ori 3, 29, 0
  02e914c  addic 26, 26, 2368
  02e9150  ori 4, 29, 0
  02e9154  addic 5, 26, 64
  02e9158  bl 0x500608
  02e915c  nop
  02e9160  lwz 3, 24(26)
  02e9164  cmpwi 3, 0
  02e9168  bt 2, 0x2e9194
  02e916c  lwz 3, 28(26)
  02e9170  cmpwi 3, 0
  02e9174  bt 1, 0x2e9194
  02e9178  lis 3, 47
  02e917c  lfs 31, 16(30)
  02e9180  lfs 1, 20(30)
  02e9184  addi 3, 3, -30104
  02e9188  lfs 3, 32(3)
  02e918c  lfs 2, 24(30)
  02e9190  b 0x2e91a4
  02e9194  fmr 3, 31
  02e9198  lfs 31, 16(30)
  02e919c  lfs 1, 20(30)
  02e91a0  lfs 2, 24(30)
  02e91a4  fmuls 1, 1, 3
  02e91a8  fmuls 4, 31, 3
  02e91ac  fmuls 2, 2, 3
  02e91b0  lis 3, 47
  02e91b4  lis 4, 114
  02e91b8  addi 3, 3, -30104
  02e91bc  fmuls 3, 1, 1
  02e91c0  stfs 4, 16(30)
  02e91c4  stfs 1, 20(30)
  02e91c8  stfs 2, 24(30)
  02e91cc  lfs 31, 36(3)
  02e91d0  fmadds 3, 4, 4, 3
  02e91d4  fmadds 3, 2, 2, 3
  02e91d8  lfs 2, -3064(4)
  02e91dc  fmuls 2, 2, 31
  02e91e0  fsqrts 1, 3
  02e91e4  fcmpu 0, 1, 2
  02e91e8  bt 0, 0x2e9258
  02e91ec  lwz 3, 764(27)
  02e91f0  cmpwi 3, 0
  02e91f4  bt 2, 0x2e99fc
  02e91f8  bl 0x1122ac
  02e91fc  nop
  02e9200  cmpwi 3, 0
  02e9204  bt 2, 0x2e99fc
  02e9208  lfs 1, 260(27)
  02e920c  lfs 2, 20(30)
  02e9210  fmuls 1, 1, 1
  02e9214  lfs 3, 256(27)
  02e9218  fmuls 2, 2, 2
  02e921c  lfs 4, 16(30)
  02e9220  lfs 5, 264(27)
  02e9224  lfs 6, 24(30)
  02e9228  lis 3, 114
  02e922c  fmadds 1, 3, 3, 1
  02e9230  fmadds 2, 4, 4, 2
  02e9234  lfs 3, -3064(3)
  02e9238  fmadds 1, 5, 5, 1
  02e923c  fmadds 2, 6, 6, 2
  02e9240  fsqrts 1, 1
  02e9244  fsqrts 2, 2
  02e9248  fmadds 1, 3, 31, 1
  02e924c  fcmpu 0, 2, 1
  02e9250  cror 6, 1, 2
  02e9254  bt 6, 0x2e99fc
  02e9258  lfs 1, 68(26)
  02e925c  lfs 2, 64(26)
  02e9260  fmuls 1, 1, 1
  02e9264  lwz 3, 72(26)
  02e9268  lis 28, 115
  02e926c  addic 28, 28, 22784
  02e9270  fmadds 1, 2, 2, 1
  02e9274  lfs 2, 72(26)
  02e9278  fabs 3, 2
  02e927c  fsqrts 1, 1
  02e9280  fabs 4, 1
  02e9284  stfs 1, 344(1)
  02e9288  fsubs 1, 3, 4
  02e928c  stfs 1, 348(1)
  02e9290  lwz 4, 344(1)
  02e9294  lfs 1, 344(1)
  02e9298  lwz 5, 348(1)
  02e929c  rlwinm 4, 4, 3, 29, 29
  02e92a0  fabs 2, 1
  02e92a4  lfs 1, 348(1)
  02e92a8  rlwimi 4, 5, 2, 30, 30
  02e92ac  fsub 5, 1, 30
  02e92b0  fsub 6, 1, 30
  02e92b4  rlwimi 4, 3, 4, 28, 28
  02e92b8  ori 3, 28, 0
  02e92bc  rlwimi 3, 4, 2, 26, 28
  02e92c0  slwi 4, 4, 2
  02e92c4  clrldi 3, 3, 32
  02e92c8  fsel 4, 5, 3, 4
  02e92cc  lfsx 1, 28, 4
  02e92d0  fsel 3, 6, 2, 3
  02e92d4  lfs 2, 4(3)
  02e92d8  fcmpu 0, 4, 30
  02e92dc  bt 1, 0x2e92e8
  02e92e0  fmr 1, 30
  02e92e4  b 0x2e940c
  02e92e8  fsubs 5, 3, 4
  02e92ec  fadds 3, 3, 4
  02e92f0  addic 3, 1, 16
  02e92f4  li 6, 2
  02e92f8  addic 4, 3, 464
  02e92fc  addic 5, 3, 480
  02e9300  mtctr 6
  02e9304  fdivs 3, 5, 3
  02e9308  fmuls 4, 3, 3
  02e930c  stfs 3, 492(1)
  02e9310  stfs 3, 484(1)
  02e9314  stfs 3, 488(1)
  02e9318  stfs 3, 480(1)
  02e931c  lfs 6, 492(1)
  02e9320  lfs 7, 484(1)
  02e9324  lfs 8, 488(1)
  02e9328  fmuls 5, 4, 4
  02e932c  fmuls 7, 7, 4
  02e9330  fmuls 6, 6, 5
  02e9334  fmuls 3, 5, 5
  02e9338  fmuls 5, 8, 5
  02e933c  stfs 7, 484(1)
  02e9340  fmuls 4, 6, 4
  02e9344  stfs 5, 488(1)
  02e9348  stfs 4, 492(1)
  02e934c  lfs 4, 464(3)
  02e9350  fmuls 4, 4, 3
  02e9354  stfs 4, 480(3)
  02e9358  lfs 4, 4(4)
  02e935c  addic 3, 3, 8
  02e9360  addic 4, 4, 8
  02e9364  fmuls 4, 4, 3
  02e9368  stfs 4, 4(5)
  02e936c  addic 5, 5, 8
  02e9370  bdnz 0x2e934c
  02e9374  li 5, 4
  02e9378  ori 3, 1, 0
  02e937c  mtctr 5
  02e9380  lis 4, 115
  02e9384  addic 5, 3, 480
  02e9388  addic 4, 4, 22752
  02e938c  ori 7, 5, 0
  02e9390  lfs 3, 480(3)
  02e9394  lfs 4, 0(4)
  02e9398  fmuls 3, 3, 4
  02e939c  lfs 4, 4(4)
  02e93a0  addic 4, 4, 8
  02e93a4  stfs 3, 480(3)
  02e93a8  lfs 3, 4(5)
  02e93ac  addic 3, 3, 8
  02e93b0  fmuls 3, 3, 4
  02e93b4  stfs 3, 4(5)
  02e93b8  addic 5, 5, 8
  02e93bc  bdnz 0x2e9390
  02e93c0  fmr 3, 30
  02e93c4  ori 3, 1, 0
  02e93c8  mtctr 6
  02e93cc  lfs 4, 480(3)
  02e93d0  fadds 3, 3, 4
  02e93d4  addic 3, 3, 16
  02e93d8  lfs 4, 4(7)
  02e93dc  lfs 5, 8(7)
  02e93e0  lfs 6, 12(7)
  02e93e4  addic 7, 7, 16
  02e93e8  fadds 3, 3, 4
  02e93ec  fadds 3, 3, 5
  02e93f0  fadds 3, 3, 6
  02e93f4  bdnz 0x2e93cc
  02e93f8  lis 3, 47
  02e93fc  addi 3, 3, -30104
  02e9400  lfs 4, 40(3)
  02e9404  fadds 3, 3, 4
  02e9408  fmadds 1, 3, 1, 2
  02e940c  lis 3, 47
  02e9410  addi 3, 3, -30104
  02e9414  lfs 2, 44(3)
  02e9418  fcmpu 0, 1, 2
  02e941c  cror 6, 1, 2
  02e9420  bt 6, 0x2e99fc
  02e9424  lhz 3, 68(30)
  02e9428  addic 3, 3, 1
  02e942c  sth 3, 68(30)
  02e9430  lwz 4, 24(26)
  02e9434  lbz 5, 83(31)
  02e9438  cmpwi 4, 0
  02e943c  cmpwi 1, 5, 1
  02e9440  bt 2, 0x2e9480
  02e9444  lwz 4, 28(26)
  02e9448  cmpwi 4, 0
  02e944c  bt 1, 0x2e9480
  02e9450  lis 4, 47
  02e9454  lis 5, 114
  02e9458  addi 4, 4, -30104
  02e945c  extsh 3, 3
  02e9460  lfs 1, 48(4)
  02e9464  lfs 2, -3056(5)
  02e9468  fmuls 1, 2, 1
  02e946c  fctiwz 1, 1
  02e9470  stfd 1, 512(1)
  02e9474  lwz 4, 516(1)
  02e9478  cmpw 3, 4
  02e947c  bf 1, 0x2e99fc
  02e9480  bt 6, 0x2e94c0
  02e9484  lis 3, 47
  02e9488  lis 4, 114
  02e948c  addi 3, 3, -30104
  02e9490  li 5, 0
  02e9494  lfs 1, 52(3)
  02e9498  lfs 2, -3056(4)
  02e949c  ori 3, 31, 0
  02e94a0  li 4, 1
  02e94a4  fmuls 1, 2, 1
  02e94a8  fctiwz 1, 1
  02e94ac  stfd 1, 512(1)
  02e94b0  lwz 6, 516(1)
  02e94b4  extsw 6, 6
  02e94b8  bl 0xfddc0
  02e94bc  nop
  02e94c0  lwz 7, 36(31)
  02e94c4  li 3, 0
  02e94c8  li 5, 17
  02e94cc  vspltisw 3, -1
  02e94d0  li 8, 18
  02e94d4  li 4, 19
  02e94d8  li 6, 21
  02e94dc  lwz 7, 16(7)
  02e94e0  stw 3, 152(31)
  02e94e4  li 9, 22
  02e94e8  stw 7, 148(31)
  02e94ec  li 10, 25
  02e94f0  stb 3, 16(30)
  02e94f4  li 7, 26
  02e94f8  stbx 3, 30, 5
  02e94fc  li 5, 23
  02e9500  stbx 3, 30, 8
  02e9504  stbx 3, 30, 4
  02e9508  stb 3, 20(30)
  02e950c  li 4, 27
  02e9510  stbx 3, 30, 6
  02e9514  li 8, 31
  02e9518  stbx 3, 30, 9
  02e951c  li 6, 29
  02e9520  stbx 3, 30, 5
  02e9524  lis 9, 47
  02e9528  stb 3, 24(30)
  02e952c  li 5, 30
  02e9530  stbx 3, 30, 10
  02e9534  stbx 3, 30, 7
  02e9538  stbx 3, 30, 4
  02e953c  li 7, 3
  02e9540  addi 4, 9, -30104
  02e9544  stb 3, 28(30)
  02e9548  li 9, 56
  02e954c  stbx 3, 30, 6
  02e9550  stbx 3, 30, 5
  02e9554  lis 6, 114
  02e9558  stbx 3, 30, 8
  02e955c  li 5, -3056
  02e9560  stb 7, 32(31)
  02e9564  li 3, 68
  02e9568  vslw 3, 3, 3
  02e956c  <unknown>
  02e9570  vspltw 2, 2, 0
  02e9574  <unknown>
  02e9578  vmaddfp 2, 4, 2, 3
  02e957c  vctsxs 2, 2, 0
  02e9580  vsplth 2, 2, 1
  02e9584  stvehx 2, 3, 30
  02e9588  lfs 1, 60(4)
  02e958c  lfs 2, 64(4)
  02e9590  lfs 3, 72(31)
  02e9594  lfs 4, 68(4)
  02e9598  fadds 1, 3, 1
  02e959c  fsubs 5, 2, 3
  02e95a0  fsubs 6, 4, 3
  02e95a4  fsubs 2, 2, 1
  02e95a8  fsub 7, 3, 5
  02e95ac  fsubs 4, 4, 1
  02e95b0  fsub 9, 1, 2
  02e95b4  fsel 3, 7, 5, 3
  02e95b8  lfs 5, 72(4)
  02e95bc  lfs 7, 76(4)
  02e95c0  fsel 1, 9, 2, 1
  02e95c4  fsub 2, 6, 3
  02e95c8  fsub 9, 4, 1
  02e95cc  fsel 2, 2, 6, 3
  02e95d0  lfs 6, 80(4)
  02e95d4  lfs 8, 68(26)
  02e95d8  lfs 12, 84(4)
  02e95dc  fsel 1, 9, 4, 1
  02e95e0  fmuls 4, 2, 2
  02e95e4  lfs 9, 64(26)
  02e95e8  lwz 3, 72(26)
  02e95ec  lfs 3, 72(26)
  02e95f0  fmuls 10, 1, 1
  02e95f4  fmuls 11, 4, 2
  02e95f8  fmuls 13, 10, 1
  02e95fc  fmuls 0, 4, 11
  02e9600  fmadds 2, 11, 5, 2
  02e9604  fmuls 11, 10, 13
  02e9608  fmadds 1, 13, 5, 1
  02e960c  fmuls 5, 4, 0
  02e9610  fmadds 2, 0, 7, 2
  02e9614  fmuls 13, 10, 11
  02e9618  fmadds 1, 11, 7, 1
  02e961c  fmuls 4, 4, 5
  02e9620  fmadds 2, 5, 6, 2
  02e9624  fmuls 5, 10, 13
  02e9628  fmadds 1, 13, 6, 1
  02e962c  fmadds 2, 4, 12, 2
  02e9630  fmuls 4, 3, 3
  02e9634  fmadds 5, 5, 12, 1
  02e9638  fmuls 1, 8, 2
  02e963c  fmuls 2, 9, 2
  02e9640  fmadds 1, 9, 5, 1
  02e9644  fmsubs 2, 8, 5, 2
  02e9648  lfs 5, 40(26)
  02e964c  fmadds 4, 1, 1, 4
  02e9650  fabs 6, 2
  02e9654  stfs 2, 336(1)
  02e9658  stfs 5, 24(31)
  02e965c  lwz 4, 336(1)
  02e9660  lfs 2, 336(1)
  02e9664  fsqrts 4, 4
  02e9668  rlwinm 4, 4, 3, 29, 29
  02e966c  fabs 5, 2
  02e9670  fabs 7, 4
  02e9674  stfs 4, 332(1)
  02e9678  fsubs 2, 7, 6
  02e967c  stfs 2, 340(1)
  02e9680  lwz 5, 332(1)
  02e9684  lfs 2, 332(1)
  02e9688  lwz 6, 340(1)
  02e968c  lfs 4, 340(1)
  02e9690  fabs 2, 2
  02e9694  rlwimi 4, 6, 2, 30, 30
  02e9698  fsub 8, 4, 30
  02e969c  ori 6, 28, 0
  02e96a0  fsub 4, 4, 30
  02e96a4  rlwimi 4, 5, 4, 28, 28
  02e96a8  rlwimi 6, 4, 2, 26, 28
  02e96ac  slwi 5, 4, 2
  02e96b0  clrldi 4, 6, 32
  02e96b4  fsel 6, 8, 2, 6
  02e96b8  lfsx 2, 28, 5
  02e96bc  fsel 5, 4, 5, 7
  02e96c0  lfs 4, 4(4)
  02e96c4  fcmpu 0, 6, 30
  02e96c8  bt 1, 0x2e96d4
  02e96cc  fmr 2, 30
  02e96d0  b 0x2e97f8
  02e96d4  fsubs 7, 5, 6
  02e96d8  fadds 5, 5, 6
  02e96dc  addic 4, 1, 16
  02e96e0  li 7, 2
  02e96e4  addic 6, 4, 448
  02e96e8  addic 5, 4, 432
  02e96ec  mtctr 7
  02e96f0  fdivs 5, 7, 5
  02e96f4  fmuls 6, 5, 5
  02e96f8  stfs 5, 460(1)
  02e96fc  stfs 5, 452(1)
  02e9700  stfs 5, 456(1)
  02e9704  stfs 5, 448(1)
  02e9708  lfs 8, 460(1)
  02e970c  lfs 9, 452(1)
  02e9710  lfs 10, 456(1)
  02e9714  fmuls 7, 6, 6
  02e9718  fmuls 9, 9, 6
  02e971c  fmuls 8, 8, 7
  02e9720  fmuls 5, 7, 7
  02e9724  fmuls 7, 10, 7
  02e9728  stfs 9, 452(1)
  02e972c  fmuls 6, 8, 6
  02e9730  stfs 7, 456(1)
  02e9734  stfs 6, 460(1)
  02e9738  lfs 6, 432(4)
  02e973c  fmuls 6, 6, 5
  02e9740  stfs 6, 448(4)
  02e9744  lfs 6, 4(5)
  02e9748  addic 5, 5, 8
  02e974c  fmuls 6, 6, 5
  02e9750  addic 4, 4, 8
  02e9754  stfs 6, 4(6)
  02e9758  addic 6, 6, 8
  02e975c  bdnz 0x2e9738
  02e9760  li 6, 4
  02e9764  ori 4, 1, 0
  02e9768  mtctr 6
  02e976c  lis 5, 115
  02e9770  addic 6, 4, 448
  02e9774  addic 5, 5, 22752
  02e9778  ori 8, 6, 0
  02e977c  lfs 5, 448(4)
  02e9780  lfs 6, 0(5)
  02e9784  fmuls 5, 5, 6
  02e9788  lfs 6, 4(5)
  02e978c  addic 5, 5, 8
  02e9790  stfs 5, 448(4)
  02e9794  lfs 5, 4(6)
  02e9798  addic 4, 4, 8
  02e979c  fmuls 5, 5, 6
  02e97a0  stfs 5, 4(6)
  02e97a4  addic 6, 6, 8
  02e97a8  bdnz 0x2e977c
  02e97ac  ori 4, 1, 0
  02e97b0  fmr 5, 30
  02e97b4  mtctr 7
  02e97b8  lfs 6, 448(4)
  02e97bc  fadds 5, 5, 6
  02e97c0  lfs 6, 4(8)
  02e97c4  addic 4, 4, 16
  02e97c8  lfs 7, 8(8)
  02e97cc  lfs 8, 12(8)
  02e97d0  addic 8, 8, 16
  02e97d4  fadds 5, 5, 6
  02e97d8  fadds 5, 5, 7
  02e97dc  fadds 5, 5, 8
  02e97e0  bdnz 0x2e97b8
  02e97e4  lis 4, 47
  02e97e8  addi 4, 4, -30104
  02e97ec  lfs 6, 40(4)
  02e97f0  fadds 5, 5, 6
  02e97f4  fmadds 2, 5, 2, 4
  02e97f8  fabs 4, 3
  02e97fc  fabs 5, 1
  02e9800  fneg 2, 2
  02e9804  fsubs 3, 4, 5
  02e9808  stfs 2, 76(30)
  02e980c  stfs 1, 324(1)
  02e9810  stfs 3, 328(1)
  02e9814  lwz 4, 324(1)
  02e9818  lfs 1, 324(1)
  02e981c  lwz 5, 328(1)
  02e9820  lfs 3, 328(1)
  02e9824  rlwinm 4, 4, 3, 29, 29
  02e9828  fabs 7, 1
  02e982c  fsub 6, 3, 30
  02e9830  rlwimi 4, 5, 2, 30, 30
  02e9834  fsub 8, 3, 30
  02e9838  rlwimi 4, 3, 4, 28, 28
  02e983c  ori 3, 28, 0
  02e9840  rlwimi 3, 4, 2, 26, 28
  02e9844  slwi 4, 4, 2
  02e9848  clrldi 3, 3, 32
  02e984c  fsel 5, 6, 4, 5
  02e9850  fsel 4, 8, 7, 4
  02e9854  lfsx 1, 28, 4
  02e9858  lfs 3, 4(3)
  02e985c  fcmpu 0, 5, 30
  02e9860  bt 1, 0x2e9868
  02e9864  b 0x2e9988
  02e9868  fsubs 6, 4, 5
  02e986c  fadds 4, 4, 5
  02e9870  addic 3, 1, 16
  02e9874  li 7, 2
  02e9878  addic 4, 3, 400
  02e987c  addic 5, 3, 416
  02e9880  mtctr 7
  02e9884  fdivs 4, 6, 4
  02e9888  fmuls 5, 4, 4
  02e988c  stfs 4, 428(1)
  02e9890  stfs 4, 420(1)
  02e9894  stfs 4, 424(1)
  02e9898  stfs 4, 416(1)
  02e989c  lfs 7, 428(1)
  02e98a0  lfs 8, 420(1)
  02e98a4  lfs 9, 424(1)
  02e98a8  fmuls 6, 5, 5
  02e98ac  fmuls 8, 8, 5
  02e98b0  fmuls 7, 7, 6
  02e98b4  fmuls 4, 6, 6
  02e98b8  fmuls 6, 9, 6
  02e98bc  stfs 8, 420(1)
  02e98c0  fmuls 5, 7, 5
  02e98c4  stfs 6, 424(1)
  02e98c8  stfs 5, 428(1)
  02e98cc  lfs 5, 400(3)
  02e98d0  fmuls 5, 5, 4
  02e98d4  stfs 5, 416(3)
  02e98d8  lfs 5, 4(4)
  02e98dc  addic 3, 3, 8
  02e98e0  addic 4, 4, 8
  02e98e4  fmuls 5, 5, 4
  02e98e8  stfs 5, 4(5)
  02e98ec  addic 5, 5, 8
  02e98f0  bdnz 0x2e98cc
  02e98f4  li 5, 4
  02e98f8  ori 3, 1, 0
  02e98fc  mtctr 5
  02e9900  lis 4, 115
  02e9904  addic 5, 3, 416
  02e9908  addic 4, 4, 22752
  02e990c  ori 6, 5, 0
  02e9910  lfs 4, 416(3)
  02e9914  lfs 5, 0(4)
  02e9918  fmuls 4, 4, 5
  02e991c  lfs 5, 4(4)
  02e9920  addic 4, 4, 8
  02e9924  stfs 4, 416(3)
  02e9928  lfs 4, 4(5)
  02e992c  addic 3, 3, 8
  02e9930  fmuls 4, 4, 5
  02e9934  stfs 4, 4(5)
  02e9938  addic 5, 5, 8
  02e993c  bdnz 0x2e9910
  02e9940  ori 3, 1, 0
  02e9944  mtctr 7
  02e9948  lfs 4, 416(3)
  02e994c  lfs 5, 4(6)
  02e9950  fadds 4, 30, 4
  02e9954  lfs 6, 8(6)
  02e9958  lfs 30, 12(6)
  02e995c  addic 3, 3, 16
  02e9960  addic 6, 6, 16
  02e9964  fadds 4, 4, 5
  02e9968  fadds 4, 4, 6
  02e996c  fadds 30, 4, 30
  02e9970  bdnz 0x2e9948
  02e9974  lis 3, 47
  02e9978  addi 3, 3, -30104
  02e997c  lfs 4, 40(3)
  02e9980  fadds 30, 30, 4
  02e9984  fmadds 30, 30, 1, 3
  02e9988  stfs 30, 80(30)
  02e998c  fmr 1, 2
  02e9990  lfs 31, 64(31)
  02e9994  fmr 2, 31
  02e9998  bl 0x5025e0
  02e999c  nop
  02e99a0  lis 3, 47
  02e99a4  lis 28, 114
  02e99a8  addi 3, 3, -30104
  02e99ac  lfs 30, 88(3)
  02e99b0  lfs 3, -3064(28)
  02e99b4  fmuls 2, 3, 30
  02e99b8  fmuls 2, 2, 1
  02e99bc  fmr 1, 31
  02e99c0  bl 0x502578
  02e99c4  nop
  02e99c8  stfs 1, 64(31)
  02e99cc  lfs 31, 68(31)
  02e99d0  lfs 1, 80(30)
  02e99d4  fmr 2, 31
  02e99d8  bl 0x5025e0
  02e99dc  nop
  02e99e0  lfs 2, -3064(28)
  02e99e4  fmuls 2, 2, 30
  02e99e8  fmuls 2, 2, 1
  02e99ec  fmr 1, 31
  02e99f0  bl 0x502578
  02e99f4  nop
  02e99f8  stfs 1, 68(31)
  02e99fc  ori 3, 31, 0
  02e9a00  bl 0x2e89ec
  02e9a04  addic 3, 30, 111
  02e9a08  bl 0x5000b4
  02e9a0c  nop
  02e9a10  cmpwi 3, 0
  02e9a14  bt 2, 0x2e9a6c
  02e9a18  li 3, 0
  02e9a1c  li 4, 0
  02e9a20  ori 5, 31, 0
  02e9a24  bl 0x15d12c
  02e9a28  nop
  02e9a2c  lis 3, 47
  02e9a30  vspltisw 2, -1
  02e9a34  li 5, 92
  02e9a38  addi 3, 3, -30104
  02e9a3c  lis 4, 114
  02e9a40  li 6, -3056
  02e9a44  vslw 2, 2, 2
  02e9a48  <unknown>
  02e9a4c  li 3, 111
  02e9a50  vspltw 3, 3, 0
  02e9a54  <unknown>
  02e9a58  vmaddfp 2, 4, 3, 2
  02e9a5c  vctsxs 2, 2, 0
  02e9a60  vspltb 2, 2, 3
  02e9a64  stvebx 2, 3, 30
  02e9a68  b 0x2e9a80
  02e9a6c  lis 4, 114
  02e9a70  ori 3, 29, 0
  02e9a74  lfs 1, -3052(4)
  02e9a78  bl 0x110950
  02e9a7c  nop
  02e9a80  lwz 3, 8324(27)
  02e9a84  cmpwi 3, 30
  02e9a88  bf 2, 0x2ea6f4
  02e9a8c  lwz 3, 8320(27)
  02e9a90  lwz 4, 36(3)
  02e9a94  lwz 4, 16(4)
  02e9a98  stw 4, 148(3)
  02e9a9c  b 0x2ea6f4
  02e9aa0  lwz 3, 8324(27)
  02e9aa4  cmpwi 3, 49
  02e9aa8  bf 2, 0x2e9b0c
  02e9aac  lfs 1, 20(31)
  02e9ab0  lfs 2, 132(27)
  02e9ab4  lfs 3, 16(31)
  02e9ab8  fsubs 1, 1, 2
  02e9abc  lfs 2, 128(27)
  02e9ac0  fsubs 2, 3, 2
  02e9ac4  lis 3, 47
  02e9ac8  addi 3, 3, -30104
  02e9acc  fmuls 1, 1, 1
  02e9ad0  fmadds 1, 2, 2, 1
  02e9ad4  lfs 2, 96(3)
  02e9ad8  fsqrts 1, 1
  02e9adc  fcmpu 0, 1, 2
  02e9ae0  cror 6, 1, 2
  02e9ae4  bt 6, 0x2e9b0c
  02e9ae8  lis 3, 47
  02e9aec  addic 7, 27, 128
  02e9af0  addi 5, 3, -30104
  02e9af4  ori 3, 31, 0
  02e9af8  ori 4, 31, 0
  02e9afc  lfs 1, 100(5)
  02e9b00  lis 5, 1
  02e9b04  bl 0x105d2c
  02e9b08  nop
  02e9b0c  lis 4, 3
  02e9b10  ori 3, 31, 0
  02e9b14  ori 4, 4, 1
  02e9b18  li 5, 0
  02e9b1c  bl 0x10675c
  02e9b20  nop
  02e9b24  lfs 29, 64(31)
  02e9b28  ori 28, 3, 0
  02e9b2c  lfs 1, 76(30)
  02e9b30  fmr 2, 29
  02e9b34  bl 0x5025e0
  02e9b38  nop
  02e9b3c  lis 3, 47
  02e9b40  lis 27, 114
  02e9b44  addi 3, 3, -30104
  02e9b48  lfs 28, 88(3)
  02e9b4c  lfs 3, -3064(27)
  02e9b50  fmuls 2, 3, 28
  02e9b54  fmuls 2, 2, 1
  02e9b58  fmr 1, 29
  02e9b5c  bl 0x502578
  02e9b60  nop
  02e9b64  stfs 1, 64(31)
  02e9b68  lfs 29, 68(31)
  02e9b6c  lfs 1, 80(30)
  02e9b70  fmr 2, 29
  02e9b74  bl 0x5025e0
  02e9b78  nop
  02e9b7c  lfs 2, -3064(27)
  02e9b80  fmuls 2, 2, 28
  02e9b84  fmuls 2, 2, 1
  02e9b88  fmr 1, 29
  02e9b8c  bl 0x502578
  02e9b90  nop
  02e9b94  ori 3, 31, 0
  02e9b98  stfs 1, 68(31)
  02e9b9c  bl 0x2e86b8
  02e9ba0  addic 3, 30, 92
  02e9ba4  bl 0x4fff60
  02e9ba8  nop
  02e9bac  addic 3, 30, 108
  02e9bb0  bl 0x4fffb4
  02e9bb4  nop
  02e9bb8  cmpwi 28, 0
  02e9bbc  bt 2, 0x2e9e1c
  02e9bc0  lwz 3, 32(28)
  02e9bc4  lwz 4, 88(30)
  02e9bc8  cmpw 3, 4
  02e9bcc  bf 2, 0x2e9bdc
  02e9bd0  lwz 4, 92(30)
  02e9bd4  cmpwi 4, 0
  02e9bd8  bt 1, 0x2e9e1c
  02e9bdc  lis 4, 47
  02e9be0  li 5, 104
  02e9be4  vspltisw 2, -1
  02e9be8  addi 4, 4, -30104
  02e9bec  stw 3, 88(30)
  02e9bf0  lis 6, 114
  02e9bf4  li 7, -3056
  02e9bf8  vslw 4, 2, 2
  02e9bfc  li 3, 92
  02e9c00  <unknown>
  02e9c04  vspltw 3, 3, 0
  02e9c08  <unknown>
  02e9c0c  lhz 4, 108(30)
  02e9c10  vmaddfp 3, 2, 3, 4
  02e9c14  cmpwi 4, 0
  02e9c18  vctsxs 3, 3, 0
  02e9c1c  vspltw 3, 3, 0
  02e9c20  stvewx 3, 3, 30
  02e9c24  bf 2, 0x2e9e1c
  02e9c28  lbz 3, 40(28)
  02e9c2c  cmpwi 3, 1
  02e9c30  bf 2, 0x2e9c88
  02e9c34  lbz 3, 41(28)
  02e9c38  cmpwi 3, 1
  02e9c3c  bf 2, 0x2e9c88
  02e9c40  lbz 3, 110(30)
  02e9c44  cmpwi 3, 0
  02e9c48  bf 2, 0x2e9c88
  02e9c4c  lis 3, 47
  02e9c50  li 4, 108
  02e9c54  vspltisw 3, -1
  02e9c58  addi 3, 3, -30104
  02e9c5c  vslw 3, 3, 3
  02e9c60  <unknown>
  02e9c64  li 3, 108
  02e9c68  vspltw 4, 4, 0
  02e9c6c  li 4, 1
  02e9c70  vmaddfp 2, 2, 4, 3
  02e9c74  vctsxs 2, 2, 0
  02e9c78  vsplth 2, 2, 1
  02e9c7c  stvehx 2, 3, 30
  02e9c80  stb 4, 110(30)
  02e9c84  b 0x2e9c90
  02e9c88  li 3, 0
  02e9c8c  stb 3, 110(30)
  02e9c90  li 3, 0
  02e9c94  li 4, 0
  02e9c98  ori 5, 31, 0
  02e9c9c  bl 0x15d12c
  02e9ca0  nop
  02e9ca4  lfs 1, 72(30)
  02e9ca8  lfs 2, 44(28)
  02e9cac  li 5, 250
  02e9cb0  ori 3, 31, 0
  02e9cb4  fsubs 1, 1, 2
  02e9cb8  ori 4, 30, 0
  02e9cbc  stb 5, 7(30)
  02e9cc0  stfs 1, 72(30)
  02e9cc4  bl 0x10c808
  02e9cc8  nop
  02e9ccc  lis 3, 47
  02e9cd0  addi 3, 3, -30104
  02e9cd4  lwz 4, 72(30)
  02e9cd8  cmpwi 4, 0
  02e9cdc  lfs 29, 4(3)
  02e9ce0  bf 0, 0x2e9e1c
  02e9ce4  li 3, 0
  02e9ce8  lis 4, 47
  02e9cec  fmr 28, 29
  02e9cf0  addi 30, 4, -30104
  02e9cf4  stw 3, 240(1)
  02e9cf8  lis 4, 114
  02e9cfc  stw 3, 244(1)
  02e9d00  stw 3, 248(1)
  02e9d04  stw 3, 252(1)
  02e9d08  lfs 1, 112(30)
  02e9d0c  addic 28, 1, 240
  02e9d10  lfs 2, -3064(4)
  02e9d14  ori 3, 28, 0
  02e9d18  fmuls 3, 2, 1
  02e9d1c  fmuls 4, 2, 1
  02e9d20  fmuls 1, 2, 1
  02e9d24  stfs 3, 240(1)
  02e9d28  stfs 4, 244(1)
  02e9d2c  lfs 3, 116(30)
  02e9d30  fmuls 2, 2, 3
  02e9d34  stfs 2, 248(1)
  02e9d38  bl 0x110950
  02e9d3c  nop
  02e9d40  lfs 29, 124(30)
  02e9d44  li 6, 2
  02e9d48  lfs 3, 120(30)
  02e9d4c  li 7, 1
  02e9d50  lfs 5, 12(30)
  02e9d54  li 11, -1
  02e9d58  lfs 6, 128(30)
  02e9d5c  ori 3, 31, 0
  02e9d60  lfs 7, 132(30)
  02e9d64  ori 4, 28, 0
  02e9d68  std 6, 144(1)
  02e9d6c  li 5, 0
  02e9d70  std 7, 160(1)
  02e9d74  fmr 1, 28
  02e9d78  std 7, 168(1)
  02e9d7c  li 8, 0
  02e9d80  std 11, 176(1)
  02e9d84  fmr 2, 28
  02e9d88  li 9, 0
  02e9d8c  fmr 4, 29
  02e9d90  li 10, 0
  02e9d94  std 29, 184(1)
  02e9d98  bl 0x10e030
  02e9d9c  nop
  02e9da0  cmpwi 29, 0
  02e9da4  bt 2, 0x2e9df8
  02e9da8  addic 30, 1, 256
  02e9dac  fmuls 1, 31, 30
  02e9db0  ori 4, 31, 0
  02e9db4  ori 3, 30, 0
  02e9db8  lis 5, 129
  02e9dbc  bl 0x1057f4
  02e9dc0  nop
  02e9dc4  li 4, 2
  02e9dc8  li 8, 1
  02e9dcc  lhz 9, 166(31)
  02e9dd0  ori 7, 30, 0
  02e9dd4  fmuls 1, 31, 29
  02e9dd8  addic 3, 31, 16
  02e9ddc  stb 4, 280(1)
  02e9de0  stb 8, 281(1)
  02e9de4  li 5, 16
  02e9de8  ori 6, 31, 0
  02e9dec  sth 9, 282(1)
  02e9df0  bl 0x5e598
  02e9df4  nop
  02e9df8  lis 4, 165
  02e9dfc  ori 3, 31, 0
  02e9e00  addic 4, 4, 8040
  02e9e04  bl 0x110798
  02e9e08  nop
  02e9e0c  ori 3, 31, 0
  02e9e10  bl 0xefb38
  02e9e14  nop
  02e9e18  b 0x2ea6f4
  02e9e1c  li 5, 255
  02e9e20  ori 3, 31, 0
  02e9e24  ori 4, 30, 0
  02e9e28  stb 5, 164(31)
  02e9e2c  bl 0x10c9a0
  02e9e30  nop
  02e9e34  lbz 3, 112(31)
  02e9e38  rlwinm 3, 3, 0, 30, 30
  02e9e3c  cmpwi 3, 0
  02e9e40  bt 2, 0x2e9ea8
  02e9e44  lbz 3, 83(31)
  02e9e48  cmpwi 3, 2
  02e9e4c  bt 2, 0x2e9e8c
  02e9e50  lis 3, 47
  02e9e54  lis 4, 114
  02e9e58  addi 3, 3, -30104
  02e9e5c  li 5, 0
  02e9e60  lfs 1, 52(3)
  02e9e64  lfs 2, -3056(4)
  02e9e68  ori 3, 31, 0
  02e9e6c  li 4, 2
  02e9e70  fmuls 1, 2, 1
  02e9e74  fctiwz 1, 1
  02e9e78  stfd 1, 512(1)
  02e9e7c  lwz 6, 516(1)
  02e9e80  extsw 6, 6
  02e9e84  bl 0xfddc0
  02e9e88  nop
  02e9e8c  lis 3, 47
  02e9e90  addi 3, 3, -30104
  02e9e94  lfs 1, 116(3)
  02e9e98  lfs 2, 32(3)
  02e9e9c  bl 0xfcbe8
  02e9ea0  nop
  02e9ea4  stfs 1, 88(31)
  02e9ea8  lbz 3, 32(31)
  02e9eac  cmpwi 3, 4
  02e9eb0  bt 2, 0x2ea4c4
  02e9eb4  lis 3, 47
  02e9eb8  addic 29, 31, 16
  02e9ebc  addi 28, 3, -30104
  02e9ec0  li 4, 0
  02e9ec4  ori 3, 29, 0
  02e9ec8  lfs 30, 112(28)
  02e9ecc  fmr 1, 30
  02e9ed0  bl 0xffb70
  02e9ed4  nop
  02e9ed8  fmr 31, 1
  02e9edc  lfs 29, 4(28)
  02e9ee0  fcmpu 0, 31, 29
  02e9ee4  bt 2, 0x2ea6f4
  02e9ee8  ori 3, 31, 0
  02e9eec  bl 0x2e89ec
  02e9ef0  lis 3, 47
  02e9ef4  lfs 1, 24(31)
  02e9ef8  addi 3, 3, -30104
  02e9efc  lfs 2, 8(3)
  02e9f00  fadds 2, 31, 2
  02e9f04  fcmpu 0, 1, 2
  02e9f08  cror 6, 0, 2
  02e9f0c  bt 6, 0x2ea418
  02e9f10  lis 3, 47
  02e9f14  lfs 1, 24(30)
  02e9f18  lis 4, 114
  02e9f1c  addi 3, 3, -30104
  02e9f20  lfs 2, 136(3)
  02e9f24  lfs 3, -3048(4)
  02e9f28  lfs 4, 16(30)
  02e9f2c  fnmsubs 2, 3, 2, 1
  02e9f30  fmr 1, 30
  02e9f34  ori 3, 29, 0
  02e9f38  li 4, 0
  02e9f3c  stfs 2, 24(30)
  02e9f40  lfs 2, 16(31)
  02e9f44  lfs 3, 20(31)
  02e9f48  fadds 2, 2, 4
  02e9f4c  lfs 4, 24(31)
  02e9f50  stfs 2, 16(31)
  02e9f54  lfs 2, 20(30)
  02e9f58  fadds 2, 3, 2
  02e9f5c  stfs 2, 20(31)
  02e9f60  lfs 2, 24(30)
  02e9f64  fadds 2, 4, 2
  02e9f68  stfs 2, 24(31)
  02e9f6c  bl 0xffb70
  02e9f70  nop
  02e9f74  fmr 30, 1
  02e9f78  lfs 1, 24(31)
  02e9f7c  fcmpu 0, 30, 1
  02e9f80  cror 6, 0, 2
  02e9f84  bt 6, 0x2ea48c
  02e9f88  li 3, 0
  02e9f8c  stfs 30, 24(31)
  02e9f90  li 5, 17
  02e9f94  li 7, 18
  02e9f98  li 4, 19
  02e9f9c  li 6, 21
  02e9fa0  stb 3, 16(30)
  02e9fa4  li 8, 22
  02e9fa8  stbx 3, 30, 5
  02e9fac  li 9, 27
  02e9fb0  li 5, 23
  02e9fb4  stbx 3, 30, 7
  02e9fb8  stbx 3, 30, 4
  02e9fbc  li 7, 25
  02e9fc0  stb 3, 20(30)
  02e9fc4  li 4, 26
  02e9fc8  stbx 3, 30, 6
  02e9fcc  stbx 3, 30, 8
  02e9fd0  stbx 3, 30, 5
  02e9fd4  li 6, 29
  02e9fd8  stb 3, 24(30)
  02e9fdc  li 8, 30
  02e9fe0  stbx 3, 30, 7
  02e9fe4  li 5, 31
  02e9fe8  stbx 3, 30, 4
  02e9fec  lis 4, 47
  02e9ff0  stbx 3, 30, 9
  02e9ff4  addi 4, 4, -30104
  02e9ff8  stb 3, 28(30)
  02e9ffc  stbx 3, 30, 6
  02ea000  stbx 3, 30, 8
  02ea004  stbx 3, 30, 5
  02ea008  lfs 1, 60(4)
  02ea00c  lfs 2, 64(4)
  02ea010  lfs 3, 72(31)
  02ea014  lfs 4, 68(4)
  02ea018  fadds 1, 3, 1
  02ea01c  fsubs 5, 2, 3
  02ea020  fsubs 6, 4, 3
  02ea024  lis 3, 161
  02ea028  addic 3, 3, 2368
  02ea02c  fsubs 2, 2, 1
  02ea030  fsub 7, 3, 5
  02ea034  fsubs 4, 4, 1
  02ea038  fsub 9, 1, 2
  02ea03c  fsel 3, 7, 5, 3
  02ea040  lfs 5, 72(4)
  02ea044  lfs 7, 76(4)
  02ea048  fsel 1, 9, 2, 1
  02ea04c  fsub 2, 6, 3
  02ea050  fsub 8, 4, 1
  02ea054  fsel 2, 2, 6, 3
  02ea058  lfs 3, 80(4)
  02ea05c  lfs 6, 68(3)
  02ea060  fsel 1, 8, 4, 1
  02ea064  fmuls 4, 2, 2
  02ea068  lfs 8, 84(4)
  02ea06c  lfs 9, 64(3)
  02ea070  lwz 5, 72(3)
  02ea074  lfs 30, 72(3)
  02ea078  fmuls 10, 1, 1
  02ea07c  fmuls 11, 4, 2
  02ea080  lis 3, 115
  02ea084  fmuls 12, 10, 1
  02ea088  fmuls 13, 4, 11
  02ea08c  fmadds 2, 11, 5, 2
  02ea090  addic 3, 3, 22784
  02ea094  fmuls 11, 10, 12
  02ea098  fmadds 1, 12, 5, 1
  02ea09c  fmuls 5, 4, 13
  02ea0a0  fmadds 2, 13, 7, 2
  02ea0a4  fmuls 12, 10, 11
  02ea0a8  fmadds 1, 11, 7, 1
  02ea0ac  fmuls 4, 4, 5
  02ea0b0  fmadds 2, 5, 3, 2
  02ea0b4  fmuls 5, 10, 12
  02ea0b8  fmadds 1, 12, 3, 1
  02ea0bc  fmuls 3, 30, 30
  02ea0c0  fmadds 2, 4, 8, 2
  02ea0c4  fmadds 4, 5, 8, 1
  02ea0c8  fmuls 1, 6, 2
  02ea0cc  fmuls 2, 9, 2
  02ea0d0  fmadds 1, 9, 4, 1
  02ea0d4  fmsubs 2, 6, 4, 2
  02ea0d8  fmadds 3, 1, 1, 3
  02ea0dc  fabs 5, 2
  02ea0e0  stfs 2, 316(1)
  02ea0e4  fsqrts 3, 3
  02ea0e8  lwz 4, 316(1)
  02ea0ec  lfs 2, 316(1)
  02ea0f0  fabs 4, 2
  02ea0f4  rlwinm 4, 4, 3, 29, 29
  02ea0f8  fabs 6, 3
  02ea0fc  stfs 3, 312(1)
  02ea100  fsubs 2, 6, 5
  02ea104  stfs 2, 320(1)
  02ea108  lwz 6, 312(1)
  02ea10c  lfs 2, 312(1)
  02ea110  lwz 7, 320(1)
  02ea114  lfs 3, 320(1)
  02ea118  fabs 2, 2
  02ea11c  rlwimi 4, 7, 2, 30, 30
  02ea120  fsub 7, 3, 29
  02ea124  fsub 3, 3, 29
  02ea128  rlwimi 4, 6, 4, 28, 28
  02ea12c  ori 6, 3, 0
  02ea130  rlwimi 6, 4, 2, 26, 28
  02ea134  slwi 4, 4, 2
  02ea138  clrldi 6, 6, 32
  02ea13c  fsel 5, 7, 2, 5
  02ea140  lfsx 2, 3, 4
  02ea144  fsel 4, 3, 4, 6
  02ea148  lfs 3, 4(6)
  02ea14c  fcmpu 0, 5, 29
  02ea150  bt 1, 0x2ea15c
  02ea154  fmr 2, 29
  02ea158  b 0x2ea280
  02ea15c  fsubs 6, 4, 5
  02ea160  fadds 4, 4, 5
  02ea164  addic 4, 1, 16
  02ea168  li 9, 2
  02ea16c  addic 7, 4, 384
  02ea170  addic 6, 4, 368
  02ea174  mtctr 9
  02ea178  fdivs 4, 6, 4
  02ea17c  fmuls 5, 4, 4
  02ea180  stfs 4, 396(1)
  02ea184  stfs 4, 388(1)
  02ea188  stfs 4, 392(1)
  02ea18c  stfs 4, 384(1)
  02ea190  lfs 7, 396(1)
  02ea194  lfs 8, 388(1)
  02ea198  lfs 9, 392(1)
  02ea19c  fmuls 6, 5, 5
  02ea1a0  fmuls 8, 8, 5
  02ea1a4  fmuls 7, 7, 6
  02ea1a8  fmuls 4, 6, 6
  02ea1ac  fmuls 6, 9, 6
  02ea1b0  stfs 8, 388(1)
  02ea1b4  fmuls 5, 7, 5
  02ea1b8  stfs 6, 392(1)
  02ea1bc  stfs 5, 396(1)
  02ea1c0  lfs 5, 368(4)
  02ea1c4  fmuls 5, 5, 4
  02ea1c8  stfs 5, 384(4)
  02ea1cc  lfs 5, 4(6)
  02ea1d0  addic 6, 6, 8
  02ea1d4  fmuls 5, 5, 4
  02ea1d8  addic 4, 4, 8
  02ea1dc  stfs 5, 4(7)
  02ea1e0  addic 7, 7, 8
  02ea1e4  bdnz 0x2ea1c0
  02ea1e8  li 7, 4
  02ea1ec  ori 4, 1, 0
  02ea1f0  mtctr 7
  02ea1f4  lis 6, 115
  02ea1f8  addic 7, 4, 384
  02ea1fc  addic 6, 6, 22752
  02ea200  ori 8, 7, 0
  02ea204  lfs 4, 384(4)
  02ea208  lfs 5, 0(6)
  02ea20c  fmuls 4, 4, 5
  02ea210  lfs 5, 4(6)
  02ea214  addic 6, 6, 8
  02ea218  stfs 4, 384(4)
  02ea21c  lfs 4, 4(7)
  02ea220  addic 4, 4, 8
  02ea224  fmuls 4, 4, 5
  02ea228  stfs 4, 4(7)
  02ea22c  addic 7, 7, 8
  02ea230  bdnz 0x2ea204
  02ea234  ori 4, 1, 0
  02ea238  fmr 4, 29
  02ea23c  mtctr 9
  02ea240  lfs 5, 384(4)
  02ea244  fadds 4, 4, 5
  02ea248  lfs 5, 4(8)
  02ea24c  addic 4, 4, 16
  02ea250  lfs 6, 8(8)
  02ea254  lfs 7, 12(8)
  02ea258  addic 8, 8, 16
  02ea25c  fadds 4, 4, 5
  02ea260  fadds 4, 4, 6
  02ea264  fadds 4, 4, 7
  02ea268  bdnz 0x2ea240
  02ea26c  lis 4, 47
  02ea270  addi 4, 4, -30104
  02ea274  lfs 5, 40(4)
  02ea278  fadds 4, 4, 5
  02ea27c  fmadds 2, 4, 2, 3
  02ea280  fabs 4, 30
  02ea284  fabs 3, 1
  02ea288  fneg 2, 2
  02ea28c  fsubs 5, 4, 3
  02ea290  stfs 2, 76(30)
  02ea294  stfs 1, 304(1)
  02ea298  stfs 5, 308(1)
  02ea29c  lwz 4, 304(1)
  02ea2a0  lfs 1, 304(1)
  02ea2a4  lwz 6, 308(1)
  02ea2a8  lfs 2, 308(1)
  02ea2ac  rlwinm 4, 4, 3, 29, 29
  02ea2b0  fabs 6, 1
  02ea2b4  fsub 5, 2, 29
  02ea2b8  rlwimi 4, 6, 2, 30, 30
  02ea2bc  fsub 2, 2, 29
  02ea2c0  rlwimi 4, 5, 4, 28, 28
  02ea2c4  ori 5, 3, 0
  02ea2c8  rlwimi 5, 4, 2, 26, 28
  02ea2cc  slwi 4, 4, 2
  02ea2d0  clrldi 5, 5, 32
  02ea2d4  fsel 3, 5, 4, 3
  02ea2d8  fsel 2, 2, 6, 4
  02ea2dc  lfsx 30, 3, 4
  02ea2e0  lfs 1, 4(5)
  02ea2e4  fcmpu 0, 3, 29
  02ea2e8  bt 1, 0x2ea2f0
  02ea2ec  b 0x2ea410
  02ea2f0  fsubs 4, 2, 3
  02ea2f4  fadds 2, 2, 3
  02ea2f8  addic 3, 1, 16
  02ea2fc  li 6, 2
  02ea300  addic 4, 3, 336
  02ea304  addic 5, 3, 352
  02ea308  mtctr 6
  02ea30c  fdivs 2, 4, 2
  02ea310  fmuls 3, 2, 2
  02ea314  stfs 2, 364(1)
  02ea318  stfs 2, 356(1)
  02ea31c  stfs 2, 360(1)
  02ea320  stfs 2, 352(1)
  02ea324  lfs 5, 364(1)
  02ea328  lfs 6, 356(1)
  02ea32c  lfs 7, 360(1)
  02ea330  fmuls 4, 3, 3
  02ea334  fmuls 6, 6, 3
  02ea338  fmuls 5, 5, 4
  02ea33c  fmuls 2, 4, 4
  02ea340  fmuls 4, 7, 4
  02ea344  stfs 6, 356(1)
  02ea348  fmuls 3, 5, 3
  02ea34c  stfs 4, 360(1)
  02ea350  stfs 3, 364(1)
  02ea354  lfs 3, 336(3)
  02ea358  fmuls 3, 3, 2
  02ea35c  stfs 3, 352(3)
  02ea360  lfs 3, 4(4)
  02ea364  addic 3, 3, 8
  02ea368  addic 4, 4, 8
  02ea36c  fmuls 3, 3, 2
  02ea370  stfs 3, 4(5)
  02ea374  addic 5, 5, 8
  02ea378  bdnz 0x2ea354
  02ea37c  li 5, 4
  02ea380  ori 3, 1, 0
  02ea384  mtctr 5
  02ea388  lis 4, 115
  02ea38c  addic 5, 3, 352
  02ea390  addic 4, 4, 22752
  02ea394  ori 7, 5, 0
  02ea398  lfs 2, 352(3)
  02ea39c  lfs 3, 0(4)
  02ea3a0  fmuls 2, 2, 3
  02ea3a4  lfs 3, 4(4)
  02ea3a8  addic 4, 4, 8
  02ea3ac  stfs 2, 352(3)
  02ea3b0  lfs 2, 4(5)
  02ea3b4  addic 3, 3, 8
  02ea3b8  fmuls 2, 2, 3
  02ea3bc  stfs 2, 4(5)
  02ea3c0  addic 5, 5, 8
  02ea3c4  bdnz 0x2ea398
  02ea3c8  ori 3, 1, 0
  02ea3cc  mtctr 6
  02ea3d0  lfs 2, 352(3)
  02ea3d4  lfs 3, 4(7)
  02ea3d8  fadds 2, 29, 2
  02ea3dc  lfs 4, 8(7)
  02ea3e0  lfs 29, 12(7)
  02ea3e4  addic 3, 3, 16
  02ea3e8  addic 7, 7, 16
  02ea3ec  fadds 2, 2, 3
  02ea3f0  fadds 2, 2, 4
  02ea3f4  fadds 29, 2, 29
  02ea3f8  bdnz 0x2ea3d0
  02ea3fc  lis 3, 47
  02ea400  addi 3, 3, -30104
  02ea404  lfs 2, 40(3)
  02ea408  fadds 29, 29, 2
  02ea40c  fmadds 29, 29, 30, 1
  02ea410  stfs 29, 80(30)
  02ea414  b 0x2ea48c
  02ea418  li 3, 0
  02ea41c  li 5, 17
  02ea420  li 7, 18
  02ea424  li 4, 19
  02ea428  li 6, 21
  02ea42c  stb 3, 16(30)
  02ea430  li 8, 22
  02ea434  stbx 3, 30, 5
  02ea438  li 9, 23
  02ea43c  stbx 3, 30, 7
  02ea440  stbx 3, 30, 4
  02ea444  li 5, 25
  02ea448  stb 3, 20(30)
  02ea44c  li 7, 26
  02ea450  stbx 3, 30, 6
  02ea454  li 4, 27
  02ea458  stbx 3, 30, 8
  02ea45c  li 6, 29
  02ea460  stbx 3, 30, 9
  02ea464  li 8, 30
  02ea468  stb 3, 24(30)
  02ea46c  li 9, 31
  02ea470  stbx 3, 30, 5
  02ea474  stbx 3, 30, 7
  02ea478  stbx 3, 30, 4
  02ea47c  stb 3, 28(30)
  02ea480  stbx 3, 30, 6
  02ea484  stbx 3, 30, 8
  02ea488  stbx 3, 30, 9
  02ea48c  lis 3, 161
  02ea490  addic 3, 3, 2368
  02ea494  lwz 3, 24(3)
  02ea498  cmpwi 3, 0
  02ea49c  bt 2, 0x2ea6f4
  02ea4a0  addic 6, 31, 64
  02ea4a4  ori 4, 3, 0
  02ea4a8  ori 3, 31, 0
  02ea4ac  ori 5, 29, 0
  02ea4b0  ori 7, 29, 0
  02ea4b4  ori 8, 6, 0
  02ea4b8  bl 0x1122e0
  02ea4bc  nop
  02ea4c0  b 0x2ea6f4
  02ea4c4  lwz 3, 36(31)
  02ea4c8  lwz 4, 44(31)
  02ea4cc  srawi 5, 4, 31
  02ea4d0  lwz 3, 36(3)
  02ea4d4  srwi 6, 5, 1
  02ea4d8  lfs 1, 44(31)
  02ea4dc  srawi 7, 3, 31
  02ea4e0  xor 4, 6, 4
  02ea4e4  srwi 6, 7, 1
  02ea4e8  subc 4, 4, 5
  02ea4ec  xor 3, 6, 3
  02ea4f0  subc 3, 3, 7
  02ea4f4  cmpw 4, 3
  02ea4f8  bf 0, 0x2ea518
  02ea4fc  lis 3, 47
  02ea500  lis 4, 114
  02ea504  addi 3, 3, -30104
  02ea508  lfs 2, 8(3)
  02ea50c  lfs 3, -3064(4)
  02ea510  fmadds 1, 3, 2, 1
  02ea514  stfs 1, 44(31)
  02ea518  addic 3, 30, 68
  02ea51c  bl 0x4fffb4
  02ea520  nop
  02ea524  cmpwi 3, 0
  02ea528  bt 2, 0x2ea6f4
  02ea52c  lbz 3, 83(31)
  02ea530  cmpwi 3, 0
  02ea534  bt 2, 0x2ea574
  02ea538  lis 3, 47
  02ea53c  lis 4, 114
  02ea540  addi 3, 3, -30104
  02ea544  li 5, 0
  02ea548  lfs 1, 140(3)
  02ea54c  lfs 2, -3056(4)
  02ea550  ori 3, 31, 0
  02ea554  fmuls 1, 2, 1
  02ea558  li 4, 0
  02ea55c  fctiwz 1, 1
  02ea560  stfd 1, 512(1)
  02ea564  lwz 6, 516(1)
  02ea568  extsw 6, 6
  02ea56c  bl 0xfddc0
  02ea570  nop
  02ea574  lis 4, 165
  02ea578  ori 3, 31, 0
  02ea57c  addic 4, 4, 8040
  02ea580  bl 0x110798
  02ea584  nop
  02ea588  li 3, 5
  02ea58c  stb 3, 32(31)
  02ea590  b 0x2ea6f4
  02ea594  lis 3, 47
  02ea598  addic 29, 31, 16
  02ea59c  addi 28, 3, -30104
  02ea5a0  ori 3, 29, 0
  02ea5a4  li 4, 0
  02ea5a8  lfs 1, 112(28)
  02ea5ac  bl 0xffb70
  02ea5b0  nop
  02ea5b4  lfs 2, 4(28)
  02ea5b8  fcmpu 0, 1, 2
  02ea5bc  bt 2, 0x2ea5f4
  02ea5c0  lis 3, 161
  02ea5c4  addic 3, 3, 2368
  02ea5c8  lwz 3, 24(3)
  02ea5cc  cmpwi 3, 0
  02ea5d0  bt 2, 0x2ea5f4
  02ea5d4  addic 6, 31, 64
  02ea5d8  ori 4, 3, 0
  02ea5dc  ori 3, 31, 0
  02ea5e0  ori 5, 29, 0
  02ea5e4  ori 7, 29, 0
  02ea5e8  ori 8, 6, 0
  02ea5ec  bl 0x1122e0
  02ea5f0  nop
  02ea5f4  lbz 3, 112(31)
  02ea5f8  rlwinm 3, 3, 0, 30, 30
  02ea5fc  cmpwi 3, 0
  02ea600  bt 2, 0x2ea60c
  02ea604  li 3, 0
  02ea608  stw 3, 88(31)
  02ea60c  addic 3, 30, 68
  02ea610  bl 0x4fffb4
  02ea614  nop
  02ea618  cmpwi 3, 0
  02ea61c  bf 2, 0x2ea630
  02ea620  lbz 3, 112(31)
  02ea624  rlwinm 3, 3, 0, 30, 30
  02ea628  cmpwi 3, 0
  02ea62c  bt 2, 0x2ea6f4
  02ea630  li 3, 6
  02ea634  stb 3, 32(31)
  02ea638  b 0x2ea6f4
  02ea63c  lis 3, 47
  02ea640  addic 30, 31, 16
  02ea644  addi 29, 3, -30104
  02ea648  ori 3, 30, 0
  02ea64c  li 4, 0
  02ea650  lfs 1, 112(29)
  02ea654  bl 0xffb70
  02ea658  nop
  02ea65c  lfs 2, 4(29)
  02ea660  fcmpu 0, 1, 2
  02ea664  bt 2, 0x2ea69c
  02ea668  lis 3, 161
  02ea66c  addic 3, 3, 2368
  02ea670  lwz 3, 24(3)
  02ea674  cmpwi 3, 0
  02ea678  bt 2, 0x2ea69c
  02ea67c  addic 6, 31, 64
  02ea680  ori 4, 3, 0
  02ea684  ori 3, 31, 0
  02ea688  ori 5, 30, 0
  02ea68c  ori 7, 30, 0
  02ea690  ori 8, 6, 0
  02ea694  bl 0x1122e0
  02ea698  nop
  02ea69c  lis 3, 47
  02ea6a0  lis 4, 114
  02ea6a4  addi 3, 3, -30104
  02ea6a8  lfs 1, 8(3)
  02ea6ac  lfs 2, -3064(4)
  02ea6b0  lfs 3, 44(31)
  02ea6b4  fmuls 1, 2, 1
  02ea6b8  lwz 4, 36(31)
  02ea6bc  fnmsubs 1, 1, 3, 3
  02ea6c0  stfs 1, 44(31)
  02ea6c4  lfs 2, 88(3)
  02ea6c8  lfs 3, 36(4)
  02ea6cc  fmuls 2, 3, 2
  02ea6d0  fcmpu 0, 1, 2
  02ea6d4  cror 6, 1, 2
  02ea6d8  bt 6, 0x2ea6f4
  02ea6dc  ori 3, 31, 0
  02ea6e0  bl 0xefb38
  02ea6e4  nop
  02ea6e8  b 0x2ea6f4
  02ea6ec  li 3, 0
  02ea6f0  stb 3, 32(31)
  02ea6f4  ld 0, 656(1)
  02ea6f8  mtlr 0
  02ea6fc  lfd 28, 608(1)
  02ea700  lfd 29, 616(1)
  02ea704  lfd 30, 624(1)
  02ea708  lfd 31, 632(1)
  02ea70c  ld 23, 536(1)
  02ea710  ld 24, 544(1)
  02ea714  ld 25, 552(1)
  02ea718  ld 26, 560(1)
  02ea71c  ld 27, 568(1)
  02ea720  ld 28, 576(1)
  02ea724  ld 29, 584(1)
  02ea728  ld 30, 592(1)
  02ea72c  ld 31, 600(1)
  02ea730  addi 1, 1, 640
  02ea734  blr

M1900_002ea73c:   # 0x2ea73c, 0x14 bytes
  02ea73c  lis 3, 128
  02ea740  lis 4, 1
  02ea744  addic 3, 3, -5564
  02ea748  stw 4, 72(3)
  02ea74c  blr
