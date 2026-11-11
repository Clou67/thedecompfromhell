# game/update/moby1077.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001b67d0:   # 0x1b67d0, 0xa0 bytes
  01b67d0  stdu 1, -128(1)
  01b67d4  mflr 0
  01b67d8  std 0, 144(1)
  01b67dc  lbz 4, 32(3)
  01b67e0  cmpwi 4, 1
  01b67e4  bf 2, 0x1b685c
  01b67e8  lis 4, 151
  01b67ec  addic 4, 4, -25376
  01b67f0  lwz 5, 764(4)
  01b67f4  cmpw 5, 3
  01b67f8  bf 2, 0x1b685c
  01b67fc  lhz 4, 782(4)
  01b6800  cmpwi 4, 0
  01b6804  bf 2, 0x1b685c
  01b6808  li 4, 2
  01b680c  lbz 5, 83(3)
  01b6810  cmpwi 5, 0
  01b6814  stb 4, 32(3)
  01b6818  bt 2, 0x1b6854
  01b681c  lis 4, 27
  01b6820  lis 5, 114
  01b6824  addi 4, 4, 26568
  01b6828  lfs 1, 0(4)
  01b682c  lfs 2, -3056(5)
  01b6830  li 4, 0
  01b6834  fmuls 1, 2, 1
  01b6838  li 5, 0
  01b683c  fctiwz 1, 1
  01b6840  stfd 1, 112(1)
  01b6844  lwz 6, 116(1)
  01b6848  extsw 6, 6
  01b684c  bl 0xfddc0
  01b6850  nop
  01b6854  li 3, 1
  01b6858  b 0x1b6860
  01b685c  li 3, 0
  01b6860  ld 0, 144(1)
  01b6864  mtlr 0
  01b6868  addi 1, 1, 128
  01b686c  blr

FUN_001b6870:   # 0x1b6870, 0x1c bytes
  01b6870  lbz 3, 32(3)
  01b6874  cmpwi 3, 5
  01b6878  bf 2, 0x1b6884
  01b687c  li 3, 1
  01b6880  b 0x1b6888
  01b6884  li 3, 0
  01b6888  blr

M1077_001b688c:   # 0x1b688c, 0x10 bytes
  01b688c  lwz 3, 120(3)
  01b6890  li 4, 1
  01b6894  stw 4, 184(3)
  01b6898  blr

M1077_001b689c:   # 0x1b689c, 0x14 bytes
  01b689c  lis 3, 117
  01b68a0  lis 4, 1
  01b68a4  addic 3, 3, 32492
  01b68a8  stw 4, 72(3)
  01b68ac  blr

UpdateMoby_1077:   # 0x1b6918, 0x708 bytes
  01b6918  stdu 1, -400(1)
  01b691c  mflr 0
  01b6920  std 0, 416(1)
  01b6924  stfd 21, 312(1)
  01b6928  stfd 22, 320(1)
  01b692c  stfd 23, 328(1)
  01b6930  stfd 24, 336(1)
  01b6934  stfd 25, 344(1)
  01b6938  stfd 26, 352(1)
  01b693c  stfd 27, 360(1)
  01b6940  stfd 28, 368(1)
  01b6944  stfd 29, 376(1)
  01b6948  stfd 30, 384(1)
  01b694c  stfd 31, 392(1)
  01b6950  std 31, 304(1)
  01b6954  std 30, 296(1)
  01b6958  ori 31, 3, 0
  01b695c  lwz 30, 120(31)
  01b6960  std 29, 288(1)
  01b6964  std 28, 280(1)
  01b6968  std 27, 272(1)
  01b696c  std 26, 264(1)
  01b6970  std 25, 256(1)
  01b6974  std 24, 248(1)
  01b6978  std 23, 240(1)
  01b697c  addic 3, 30, 16
  01b6980  bl 0x4fff60
  01b6984  nop
  01b6988  cmpwi 3, 0
  01b698c  bt 2, 0x1b69a0
  01b6990  ori 3, 31, 0
  01b6994  bl 0xefb38
  01b6998  nop
  01b699c  b 0x1b6fc0
  01b69a0  lis 3, 27
  01b69a4  addi 29, 3, 26800
  01b69a8  lfs 30, 0(29)
  01b69ac  lfs 2, 4(29)
  01b69b0  fmr 1, 30
  01b69b4  bl 0xfcbe8
  01b69b8  nop
  01b69bc  lis 3, 114
  01b69c0  lfs 2, -3052(3)
  01b69c4  fmuls 29, 1, 2
  01b69c8  bl 0xfcc68
  01b69cc  nop
  01b69d0  lfs 5, 8(29)
  01b69d4  lfs 6, 12(29)
  01b69d8  lfs 3, 228(31)
  01b69dc  fadds 5, 1, 5
  01b69e0  lfs 2, 224(31)
  01b69e4  fmuls 7, 3, 3
  01b69e8  lfs 4, 232(31)
  01b69ec  lfs 1, 16(29)
  01b69f0  fsubs 6, 6, 5
  01b69f4  fmadds 7, 2, 2, 7
  01b69f8  fsubs 8, 1, 5
  01b69fc  fmadds 1, 4, 4, 7
  01b6a00  fsub 7, 5, 6
  01b6a04  fsqrts 1, 1
  01b6a08  fsel 5, 7, 6, 5
  01b6a0c  lfs 6, 20(29)
  01b6a10  lfs 7, 24(29)
  01b6a14  lfs 10, 28(29)
  01b6a18  fsub 9, 8, 5
  01b6a1c  fsel 5, 9, 8, 5
  01b6a20  lfs 8, 32(29)
  01b6a24  fmuls 9, 5, 5
  01b6a28  fmuls 11, 9, 5
  01b6a2c  fcmpu 0, 1, 30
  01b6a30  fmuls 12, 9, 11
  01b6a34  fmadds 5, 11, 6, 5
  01b6a38  fmuls 6, 9, 12
  01b6a3c  fmadds 5, 12, 7, 5
  01b6a40  fmuls 7, 9, 6
  01b6a44  fmadds 5, 6, 10, 5
  01b6a48  fmadds 5, 7, 8, 5
  01b6a4c  fmuls 29, 29, 5
  01b6a50  bf 2, 0x1b6a68
  01b6a54  fmr 1, 30
  01b6a58  lfs 29, 236(31)
  01b6a5c  fmr 2, 1
  01b6a60  fmr 3, 2
  01b6a64  b 0x1b6a80
  01b6a68  fdivs 1, 29, 1
  01b6a6c  lfs 29, 236(31)
  01b6a70  fmr 5, 3
  01b6a74  fmuls 3, 2, 1
  01b6a78  fmuls 2, 5, 1
  01b6a7c  fmuls 1, 4, 1
  01b6a80  lis 3, 27
  01b6a84  stfs 3, 144(1)
  01b6a88  lis 27, 114
  01b6a8c  addi 3, 3, 26800
  01b6a90  stfs 2, 148(1)
  01b6a94  stfs 1, 152(1)
  01b6a98  lis 4, 117
  01b6a9c  stfs 29, 156(1)
  01b6aa0  lis 5, 117
  01b6aa4  addic 28, 31, 16
  01b6aa8  lfs 29, 36(3)
  01b6aac  lfs 1, -3056(27)
  01b6ab0  lis 3, 117
  01b6ab4  fmuls 2, 1, 29
  01b6ab8  lwz 3, 32608(3)
  01b6abc  lwz 4, 32612(4)
  01b6ac0  lfs 1, 32600(5)
  01b6ac4  extsw 29, 3
  01b6ac8  extsw 26, 4
  01b6acc  fctiwz 2, 2
  01b6ad0  stfd 2, 224(1)
  01b6ad4  lwz 3, 228(1)
  01b6ad8  extsw 25, 3
  01b6adc  bl 0x502758
  01b6ae0  nop
  01b6ae4  lis 4, 117
  01b6ae8  ori 24, 3, 0
  01b6aec  lfs 1, 32604(4)
  01b6af0  bl 0x502758
  01b6af4  nop
  01b6af8  ori 9, 3, 0
  01b6afc  ori 3, 28, 0
  01b6b00  li 10, 1
  01b6b04  addic 4, 1, 144
  01b6b08  ori 5, 29, 0
  01b6b0c  ori 6, 26, 0
  01b6b10  ori 7, 25, 0
  01b6b14  ori 8, 24, 0
  01b6b18  bl 0x121740
  01b6b1c  nop
  01b6b20  lfs 1, 16(31)
  01b6b24  lfs 2, 20(31)
  01b6b28  stfs 1, 128(1)
  01b6b2c  lfs 3, 24(31)
  01b6b30  stfs 2, 132(1)
  01b6b34  lfs 4, 28(31)
  01b6b38  stfs 3, 136(1)
  01b6b3c  stfs 4, 140(1)
  01b6b40  lfs 4, 0(30)
  01b6b44  fadds 1, 1, 4
  01b6b48  addic 3, 1, 128
  01b6b4c  ori 4, 28, 0
  01b6b50  li 5, 0
  01b6b54  ori 6, 31, 0
  01b6b58  li 7, 0
  01b6b5c  stfs 1, 16(31)
  01b6b60  lfs 1, 4(30)
  01b6b64  fadds 1, 2, 1
  01b6b68  stfs 1, 20(31)
  01b6b6c  lfs 1, 8(30)
  01b6b70  fadds 1, 3, 1
  01b6b74  stfs 1, 24(31)
  01b6b78  bl 0x57820
  01b6b7c  nop
  01b6b80  cmpwi 3, 0
  01b6b84  bt 2, 0x1b6fc0
  01b6b88  lis 3, 149
  01b6b8c  lfs 1, 20(31)
  01b6b90  addic 3, 3, 5056
  01b6b94  li 26, 0
  01b6b98  lfs 2, 324(3)
  01b6b9c  lfs 3, 320(3)
  01b6ba0  fsubs 1, 2, 1
  01b6ba4  lfs 2, 16(31)
  01b6ba8  fsubs 2, 3, 2
  01b6bac  lfs 3, 328(3)
  01b6bb0  lfs 4, 24(31)
  01b6bb4  fsubs 3, 3, 4
  01b6bb8  fmuls 1, 1, 1
  01b6bbc  lis 3, 27
  01b6bc0  stw 26, 172(1)
  01b6bc4  stw 26, 168(1)
  01b6bc8  li 30, 10
  01b6bcc  addi 3, 3, 26800
  01b6bd0  stw 26, 164(1)
  01b6bd4  stw 26, 160(1)
  01b6bd8  fmadds 1, 2, 2, 1
  01b6bdc  lfs 28, 40(3)
  01b6be0  fmadds 31, 3, 3, 1
  01b6be4  fsqrts 31, 31
  01b6be8  fcmpu 0, 31, 28
  01b6bec  cror 6, 1, 2
  01b6bf0  bt 6, 0x1b6c04
  01b6bf4  fmr 1, 31
  01b6bf8  bl 0x502758
  01b6bfc  nop
  01b6c00  addic 30, 3, 2
  01b6c04  lis 3, 27
  01b6c08  cmpwi 30, 0
  01b6c0c  addi 3, 3, 26800
  01b6c10  lfs 1, 44(3)
  01b6c14  fsubs 22, 1, 31
  01b6c18  fsub 1, 31, 1
  01b6c1c  fsel 22, 1, 30, 22
  01b6c20  bf 1, 0x1b6dc4
  01b6c24  lis 3, 27
  01b6c28  ori 29, 26, 0
  01b6c2c  addi 3, 3, 26800
  01b6c30  lfs 27, 48(3)
  01b6c34  lfs 26, 52(3)
  01b6c38  lfs 25, 56(3)
  01b6c3c  lfs 24, 60(3)
  01b6c40  lfs 23, 64(3)
  01b6c44  fmr 1, 28
  01b6c48  fmr 2, 27
  01b6c4c  bl 0xfcbe8
  01b6c50  nop
  01b6c54  lis 3, 114
  01b6c58  lis 5, 20224
  01b6c5c  lis 4, 20224
  01b6c60  lis 6, 12287
  01b6c64  ori 4, 4, 28671
  01b6c68  lfs 2, -3052(3)
  01b6c6c  ori 3, 5, 36863
  01b6c70  lis 5, 20224
  01b6c74  ori 6, 6, 65535
  01b6c78  fmuls 3, 2, 22
  01b6c7c  ori 5, 5, 32767
  01b6c80  stw 3, 176(1)
  01b6c84  stw 3, 180(1)
  01b6c88  lis 3, 12032
  01b6c8c  stw 4, 188(1)
  01b6c90  lis 4, 12032
  01b6c94  stw 6, 192(1)
  01b6c98  ori 3, 3, 24447
  01b6c9c  stw 5, 184(1)
  01b6ca0  ori 4, 4, 20351
  01b6ca4  lis 5, 12032
  01b6ca8  stw 6, 196(1)
  01b6cac  lis 6, 12032
  01b6cb0  fmsubs 21, 1, 2, 3
  01b6cb4  ori 5, 5, 16255
  01b6cb8  stw 3, 200(1)
  01b6cbc  stw 4, 204(1)
  01b6cc0  li 3, 6
  01b6cc4  ori 4, 6, 79
  01b6cc8  lis 6, 12032
  01b6ccc  stw 5, 208(1)
  01b6cd0  lis 5, 16128
  01b6cd4  stw 4, 212(1)
  01b6cd8  stw 6, 216(1)
  01b6cdc  stw 5, 220(1)
  01b6ce0  bl 0xfc620
  01b6ce4  nop
  01b6ce8  sldi 3, 3, 2
  01b6cec  addc 3, 3, 1
  01b6cf0  clrldi 4, 3, 32
  01b6cf4  li 3, 6
  01b6cf8  lwz 4, 176(4)
  01b6cfc  extsw 25, 4
  01b6d00  bl 0xfc620
  01b6d04  nop
  01b6d08  lfs 1, -3056(27)
  01b6d0c  sldi 3, 3, 2
  01b6d10  fmuls 2, 1, 25
  01b6d14  fmuls 1, 1, 29
  01b6d18  addc 3, 3, 1
  01b6d1c  clrldi 3, 3, 32
  01b6d20  lwz 3, 200(3)
  01b6d24  fctiwz 2, 2
  01b6d28  extsw 24, 3
  01b6d2c  fctiwz 1, 1
  01b6d30  stfd 2, 224(1)
  01b6d34  lwz 3, 228(1)
  01b6d38  stfd 1, 224(1)
  01b6d3c  lwz 4, 228(1)
  01b6d40  extsw 3, 3
  01b6d44  extsw 4, 4
  01b6d48  bl 0xfe484
  01b6d4c  nop
  01b6d50  lfs 1, -3056(27)
  01b6d54  ori 23, 3, 0
  01b6d58  fmuls 2, 1, 24
  01b6d5c  fmuls 1, 1, 23
  01b6d60  fctiwz 2, 2
  01b6d64  fctiwz 1, 1
  01b6d68  stfd 2, 224(1)
  01b6d6c  lwz 3, 228(1)
  01b6d70  stfd 1, 224(1)
  01b6d74  lwz 4, 228(1)
  01b6d78  extsw 3, 3
  01b6d7c  extsw 4, 4
  01b6d80  bl 0xfe484
  01b6d84  nop
  01b6d88  ori 9, 3, 0
  01b6d8c  std 26, 112(1)
  01b6d90  addic 4, 1, 160
  01b6d94  ori 8, 23, 0
  01b6d98  fmr 1, 26
  01b6d9c  ori 3, 28, 0
  01b6da0  fmr 2, 21
  01b6da4  ori 5, 25, 0
  01b6da8  std 26, 120(1)
  01b6dac  ori 6, 24, 0
  01b6db0  bl 0x123390
  01b6db4  nop
  01b6db8  addic 29, 29, 1
  01b6dbc  cmpw 29, 30
  01b6dc0  bt 0, 0x1b6c44
  01b6dc4  lis 3, 161
  01b6dc8  lis 4, 27
  01b6dcc  lis 5, 16243
  01b6dd0  addi 4, 4, 26800
  01b6dd4  ori 5, 5, 13107
  01b6dd8  lwz 3, 1812(3)
  01b6ddc  srawi 6, 3, 31
  01b6de0  lfs 28, 68(4)
  01b6de4  srwi 7, 6, 1
  01b6de8  xor 3, 7, 3
  01b6dec  subc 3, 3, 6
  01b6df0  cmpw 3, 5
  01b6df4  bf 0, 0x1b6ea8
  01b6df8  lis 3, 27
  01b6dfc  addi 3, 3, 26800
  01b6e00  lfs 1, 72(3)
  01b6e04  fcmpu 0, 31, 1
  01b6e08  cror 6, 0, 2
  01b6e0c  bt 6, 0x1b6ea8
  01b6e10  lis 3, 27
  01b6e14  lfs 2, -3056(27)
  01b6e18  li 25, 32
  01b6e1c  addi 30, 3, 26800
  01b6e20  fmr 1, 28
  01b6e24  addic 29, 1, 160
  01b6e28  ori 3, 31, 0
  01b6e2c  li 8, 127
  01b6e30  ori 4, 28, 0
  01b6e34  lfs 3, 56(30)
  01b6e38  ori 5, 29, 0
  01b6e3c  std 25, 112(1)
  01b6e40  li 9, 127
  01b6e44  fmuls 2, 2, 3
  01b6e48  li 10, 127
  01b6e4c  fctiwz 2, 2
  01b6e50  stfd 2, 224(1)
  01b6e54  lwz 7, 228(1)
  01b6e58  extsw 7, 7
  01b6e5c  bl 0x1d4d88
  01b6e60  nop
  01b6e64  lfs 2, 76(30)
  01b6e68  ori 5, 29, 0
  01b6e6c  lfs 3, -3056(27)
  01b6e70  ori 3, 31, 0
  01b6e74  std 25, 112(1)
  01b6e78  fmr 1, 28
  01b6e7c  fmuls 2, 3, 2
  01b6e80  ori 4, 28, 0
  01b6e84  li 8, 127
  01b6e88  li 9, 32
  01b6e8c  li 10, 0
  01b6e90  fctiwz 2, 2
  01b6e94  stfd 2, 224(1)
  01b6e98  lwz 7, 228(1)
  01b6e9c  extsw 7, 7
  01b6ea0  bl 0x1d4d88
  01b6ea4  nop
  01b6ea8  lfs 1, -3056(27)
  01b6eac  li 6, 48
  01b6eb0  fmuls 2, 1, 29
  01b6eb4  addic 30, 1, 160
  01b6eb8  fmr 1, 28
  01b6ebc  ori 3, 31, 0
  01b6ec0  std 6, 112(1)
  01b6ec4  li 8, 127
  01b6ec8  ori 4, 28, 0
  01b6ecc  ori 5, 30, 0
  01b6ed0  li 9, 64
  01b6ed4  li 10, 0
  01b6ed8  fctiwz 2, 2
  01b6edc  stfd 2, 224(1)
  01b6ee0  lwz 7, 228(1)
  01b6ee4  extsw 7, 7
  01b6ee8  bl 0x1d4d88
  01b6eec  nop
  01b6ef0  lis 3, 27
  01b6ef4  lfs 2, -3056(27)
  01b6ef8  li 6, 64
  01b6efc  addi 29, 3, 26800
  01b6f00  ori 3, 31, 0
  01b6f04  ori 4, 28, 0
  01b6f08  ori 5, 30, 0
  01b6f0c  li 8, 96
  01b6f10  lfs 3, 84(29)
  01b6f14  lfs 1, 80(29)
  01b6f18  li 9, 16
  01b6f1c  fmuls 2, 2, 3
  01b6f20  std 6, 112(1)
  01b6f24  li 10, 0
  01b6f28  fctiwz 2, 2
  01b6f2c  stfd 2, 224(1)
  01b6f30  lwz 7, 228(1)
  01b6f34  extsw 7, 7
  01b6f38  bl 0x1d4d88
  01b6f3c  nop
  01b6f40  lfs 2, 92(29)
  01b6f44  lfs 3, -3056(27)
  01b6f48  li 6, 32
  01b6f4c  lfs 1, 88(29)
  01b6f50  ori 3, 31, 0
  01b6f54  fmuls 2, 3, 2
  01b6f58  ori 4, 28, 0
  01b6f5c  ori 5, 30, 0
  01b6f60  std 6, 112(1)
  01b6f64  li 8, 32
  01b6f68  li 9, 0
  01b6f6c  li 10, 0
  01b6f70  fctiwz 2, 2
  01b6f74  stfd 2, 224(1)
  01b6f78  lwz 7, 228(1)
  01b6f7c  extsw 7, 7
  01b6f80  bl 0x1d4d88
  01b6f84  nop
  01b6f88  lfs 1, 96(29)
  01b6f8c  lfs 2, 100(29)
  01b6f90  ori 3, 31, 0
  01b6f94  ori 4, 28, 0
  01b6f98  fmr 3, 30
  01b6f9c  li 6, 1
  01b6fa0  std 26, 112(1)
  01b6fa4  li 9, 0
  01b6fa8  li 10, 1
  01b6fac  bl 0x105870
  01b6fb0  nop
  01b6fb4  ori 3, 31, 0
  01b6fb8  bl 0xefb38
  01b6fbc  nop
  01b6fc0  ld 0, 416(1)
  01b6fc4  mtlr 0
  01b6fc8  lfd 21, 312(1)
  01b6fcc  lfd 22, 320(1)
  01b6fd0  lfd 23, 328(1)
  01b6fd4  lfd 24, 336(1)
  01b6fd8  lfd 25, 344(1)
  01b6fdc  lfd 26, 352(1)
  01b6fe0  lfd 27, 360(1)
  01b6fe4  lfd 28, 368(1)
  01b6fe8  lfd 29, 376(1)
  01b6fec  lfd 30, 384(1)
  01b6ff0  lfd 31, 392(1)
  01b6ff4  ld 23, 240(1)
  01b6ff8  ld 24, 248(1)
  01b6ffc  ld 25, 256(1)
  01b7000  ld 26, 264(1)
  01b7004  ld 27, 272(1)
  01b7008  ld 28, 280(1)
  01b700c  ld 29, 288(1)
  01b7010  ld 30, 296(1)
  01b7014  ld 31, 304(1)
  01b7018  addi 1, 1, 400
  01b701c  blr
