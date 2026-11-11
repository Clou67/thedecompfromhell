# game/update/moby908.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M908_004a79c0:   # 0x4a79c0, 0x5e4 bytes
  04a79c0  stdu 1, -352(1)
  04a79c4  mflr 0
  04a79c8  std 0, 368(1)
  04a79cc  stfd 18, 240(1)
  04a79d0  stfd 19, 248(1)
  04a79d4  stfd 20, 256(1)
  04a79d8  stfd 21, 264(1)
  04a79dc  stfd 22, 272(1)
  04a79e0  stfd 23, 280(1)
  04a79e4  stfd 24, 288(1)
  04a79e8  stfd 25, 296(1)
  04a79ec  stfd 26, 304(1)
  04a79f0  stfd 27, 312(1)
  04a79f4  stfd 28, 320(1)
  04a79f8  stfd 29, 328(1)
  04a79fc  stfd 30, 336(1)
  04a7a00  stfd 31, 344(1)
  04a7a04  std 31, 232(1)
  04a7a08  addi 0, 1, 144
  04a7a0c  stvx 31, 0, 0
  04a7a10  ori 31, 3, 0
  04a7a14  lbz 3, 32(3)
  04a7a18  cmpwi 1, 3, 2
  04a7a1c  cmpwi 3, 0
  04a7a20  std 30, 224(1)
  04a7a24  std 29, 216(1)
  04a7a28  std 28, 208(1)
  04a7a2c  std 27, 200(1)
  04a7a30  std 26, 192(1)
  04a7a34  std 25, 184(1)
  04a7a38  std 24, 176(1)
  04a7a3c  std 23, 168(1)
  04a7a40  cror 2, 2, 6
  04a7a44  bt 2, 0x4a7f30
  04a7a48  lbz 3, 49(31)
  04a7a4c  cmpwi 3, 0
  04a7a50  bt 2, 0x4a7f30
  04a7a54  lis 3, 143
  04a7a58  lfs 1, 192(31)
  04a7a5c  lis 4, 143
  04a7a60  li 26, 0
  04a7a64  lis 30, 161
  04a7a68  lfs 2, 16032(3)
  04a7a6c  lfs 3, 196(31)
  04a7a70  lis 3, 143
  04a7a74  lfs 4, 200(31)
  04a7a78  lfs 5, 16(31)
  04a7a7c  lfs 6, 20(31)
  04a7a80  fmadds 1, 1, 2, 5
  04a7a84  lfs 5, 24(31)
  04a7a88  fmadds 3, 3, 2, 6
  04a7a8c  lfs 20, 224(31)
  04a7a90  fmadds 2, 4, 2, 5
  04a7a94  lfs 22, 16040(4)
  04a7a98  lfs 21, 228(31)
  04a7a9c  lfs 4, 232(31)
  04a7aa0  li 4, 16
  04a7aa4  lfs 5, 208(31)
  04a7aa8  ori 28, 26, 0
  04a7aac  lis 29, 114
  04a7ab0  fmadds 20, 20, 22, 1
  04a7ab4  fmadds 21, 21, 22, 3
  04a7ab8  addic 30, 30, 23856
  04a7abc  stfs 1, 112(1)
  04a7ac0  fmadds 22, 4, 22, 2
  04a7ac4  stfs 3, 116(1)
  04a7ac8  lfs 1, 16036(3)
  04a7acc  lfs 3, 212(31)
  04a7ad0  lis 3, 74
  04a7ad4  stfs 2, 120(1)
  04a7ad8  lfs 2, 216(31)
  04a7adc  lfs 18, 28(31)
  04a7ae0  addi 3, 3, 31128
  04a7ae4  fmadds 4, 5, 1, 20
  04a7ae8  fmadds 3, 3, 1, 21
  04a7aec  stfs 18, 124(1)
  04a7af0  fmadds 1, 2, 1, 22
  04a7af4  stfs 20, 112(1)
  04a7af8  stfs 21, 116(1)
  04a7afc  stfs 22, 120(1)
  04a7b00  stfs 4, 112(1)
  04a7b04  stfs 3, 116(1)
  04a7b08  stfs 1, 120(1)
  04a7b0c  lfs 25, 0(3)
  04a7b10  lfs 26, 4(3)
  04a7b14  lfs 27, 8(3)
  04a7b18  lfs 28, 12(3)
  04a7b1c  lfs 29, 20(3)
  04a7b20  <unknown>
  04a7b24  vspltw 31, 31, 0
  04a7b28  li 3, 16
  04a7b2c  bl 0xfc620
  04a7b30  nop
  04a7b34  ori 27, 3, 0
  04a7b38  li 3, 2
  04a7b3c  bl 0xfc620
  04a7b40  nop
  04a7b44  li 4, 0
  04a7b48  fmr 1, 25
  04a7b4c  lis 5, 143
  04a7b50  fmr 2, 26
  04a7b54  subc 3, 4, 3
  04a7b58  fmr 3, 27
  04a7b5c  neg 7, 27
  04a7b60  fmr 4, 28
  04a7b64  cntlzw 3, 3
  04a7b68  subc 4, 27, 7
  04a7b6c  sldi 3, 3, 58
  04a7b70  lwz 10, 16052(5)
  04a7b74  ori 8, 30, 0
  04a7b78  sradi 3, 3, 63
  04a7b7c  extsw 10, 10
  04a7b80  and 4, 3, 4
  04a7b84  addic 3, 1, 112
  04a7b88  addc 7, 7, 4
  04a7b8c  bl 0x126f50
  04a7b90  nop
  04a7b94  ori 27, 3, 0
  04a7b98  cmpwi 27, 0
  04a7b9c  bt 2, 0x4a7c00
  04a7ba0  vspltisw 2, -1
  04a7ba4  li 3, -3056
  04a7ba8  fmr 1, 29
  04a7bac  vslw 2, 2, 2
  04a7bb0  <unknown>
  04a7bb4  li 3, 10
  04a7bb8  vmaddfp 2, 3, 31, 2
  04a7bbc  vctsxs 2, 2, 0
  04a7bc0  vsplth 2, 2, 1
  04a7bc4  stvehx 2, 3, 27
  04a7bc8  bl 0x502758
  04a7bcc  nop
  04a7bd0  lhz 4, 50(31)
  04a7bd4  li 5, 2
  04a7bd8  lhz 7, 10(27)
  04a7bdc  extsh 4, 4
  04a7be0  li 6, 127
  04a7be4  srawi 4, 4, 5
  04a7be8  stw 5, 36(27)
  04a7bec  slwi 4, 4, 4
  04a7bf0  stb 6, 42(27)
  04a7bf4  addc 3, 4, 3
  04a7bf8  stb 7, 43(27)
  04a7bfc  stb 3, 9(27)
  04a7c00  addic 26, 26, 1
  04a7c04  cmpwi 26, 2
  04a7c08  bt 0, 0x4a7b28
  04a7c0c  lis 3, 143
  04a7c10  lfs 1, 192(31)
  04a7c14  lis 4, 74
  04a7c18  li 25, 16
  04a7c1c  ori 23, 28, 0
  04a7c20  lfs 2, 16044(3)
  04a7c24  lfs 3, 196(31)
  04a7c28  addi 3, 4, 31128
  04a7c2c  lfs 4, 200(31)
  04a7c30  lfs 5, 112(1)
  04a7c34  lfs 6, 116(1)
  04a7c38  fmadds 1, 1, 2, 5
  04a7c3c  lfs 5, 120(1)
  04a7c40  fmadds 3, 3, 2, 6
  04a7c44  fmadds 2, 4, 2, 5
  04a7c48  lfs 4, -3056(29)
  04a7c4c  ori 27, 25, 0
  04a7c50  stfs 1, 112(1)
  04a7c54  stfs 3, 116(1)
  04a7c58  stfs 2, 120(1)
  04a7c5c  lfs 23, 24(3)
  04a7c60  fmuls 1, 4, 23
  04a7c64  fctiwz 1, 1
  04a7c68  stfd 1, 128(1)
  04a7c6c  lfs 19, 28(3)
  04a7c70  lwz 26, 132(1)
  04a7c74  lfs 30, 32(3)
  04a7c78  fmr 24, 19
  04a7c7c  lfs 31, 36(3)
  04a7c80  addic 3, 1, 112
  04a7c84  lis 10, 32767
  04a7c88  fmr 1, 30
  04a7c8c  ori 7, 25, 0
  04a7c90  fmr 2, 26
  04a7c94  fmr 3, 26
  04a7c98  ori 8, 30, 0
  04a7c9c  fmr 4, 19
  04a7ca0  ori 10, 10, 65535
  04a7ca4  bl 0x126f50
  04a7ca8  nop
  04a7cac  ori 24, 3, 0
  04a7cb0  cmpwi 24, 0
  04a7cb4  bt 2, 0x4a7d08
  04a7cb8  fmr 1, 29
  04a7cbc  bl 0x502758
  04a7cc0  nop
  04a7cc4  lhz 4, 50(31)
  04a7cc8  sth 26, 10(24)
  04a7ccc  extsh 4, 4
  04a7cd0  srawi 4, 4, 5
  04a7cd4  slwi 4, 4, 4
  04a7cd8  addc 4, 4, 3
  04a7cdc  li 3, 255
  04a7ce0  stb 4, 9(24)
  04a7ce4  bl 0xfc620
  04a7ce8  nop
  04a7cec  stb 3, 8(24)
  04a7cf0  li 4, 127
  04a7cf4  li 3, 2
  04a7cf8  lhz 5, 10(24)
  04a7cfc  stb 5, 43(24)
  04a7d00  stw 3, 36(24)
  04a7d04  stb 4, 42(24)
  04a7d08  addic 23, 23, 1
  04a7d0c  fsubs 19, 19, 31
  04a7d10  neg 25, 25
  04a7d14  cmpwi 23, 3
  04a7d18  sldi 26, 26, 1
  04a7d1c  bt 0, 0x4a7c80
  04a7d20  lis 3, 143
  04a7d24  lfs 1, 208(31)
  04a7d28  ori 26, 28, 0
  04a7d2c  lfs 2, 16036(3)
  04a7d30  lfs 3, 212(31)
  04a7d34  lfs 4, 216(31)
  04a7d38  fnmsubs 1, 1, 2, 20
  04a7d3c  fnmsubs 3, 3, 2, 21
  04a7d40  stfs 18, 124(1)
  04a7d44  fnmsubs 2, 4, 2, 22
  04a7d48  stfs 1, 112(1)
  04a7d4c  stfs 3, 116(1)
  04a7d50  stfs 2, 120(1)
  04a7d54  li 3, 16
  04a7d58  bl 0xfc620
  04a7d5c  nop
  04a7d60  ori 25, 3, 0
  04a7d64  li 3, 2
  04a7d68  bl 0xfc620
  04a7d6c  nop
  04a7d70  li 4, 0
  04a7d74  lis 5, 143
  04a7d78  fmr 1, 25
  04a7d7c  subc 3, 4, 3
  04a7d80  fmr 2, 26
  04a7d84  neg 7, 25
  04a7d88  fmr 3, 27
  04a7d8c  cntlzw 3, 3
  04a7d90  fmr 4, 28
  04a7d94  subc 4, 25, 7
  04a7d98  sldi 3, 3, 58
  04a7d9c  lwz 10, 16052(5)
  04a7da0  ori 8, 30, 0
  04a7da4  sradi 3, 3, 63
  04a7da8  extsw 10, 10
  04a7dac  and 4, 3, 4
  04a7db0  addic 3, 1, 112
  04a7db4  addc 7, 7, 4
  04a7db8  bl 0x126f50
  04a7dbc  nop
  04a7dc0  ori 25, 3, 0
  04a7dc4  cmpwi 25, 0
  04a7dc8  bt 2, 0x4a7e30
  04a7dcc  fmr 1, 29
  04a7dd0  bl 0x502758
  04a7dd4  nop
  04a7dd8  lhz 4, 50(31)
  04a7ddc  vspltisw 2, -1
  04a7de0  li 5, -3056
  04a7de4  extsh 4, 4
  04a7de8  srawi 4, 4, 5
  04a7dec  vslw 2, 2, 2
  04a7df0  slwi 4, 4, 4
  04a7df4  addc 3, 4, 3
  04a7df8  li 4, 43
  04a7dfc  li 6, 127
  04a7e00  stb 3, 9(25)
  04a7e04  <unknown>
  04a7e08  li 3, 10
  04a7e0c  li 5, 2
  04a7e10  vmaddfp 2, 3, 31, 2
  04a7e14  vctsxs 2, 2, 0
  04a7e18  vsplth 3, 2, 1
  04a7e1c  vspltb 2, 2, 3
  04a7e20  stvehx 3, 3, 25
  04a7e24  stw 5, 36(25)
  04a7e28  stb 6, 42(25)
  04a7e2c  stvebx 2, 4, 25
  04a7e30  addic 26, 26, 1
  04a7e34  cmpwi 26, 2
  04a7e38  bt 0, 0x4a7d54
  04a7e3c  lis 3, 143
  04a7e40  lfs 1, -3056(29)
  04a7e44  lfs 2, 192(31)
  04a7e48  ori 25, 27, 0
  04a7e4c  fmuls 1, 1, 23
  04a7e50  fmr 19, 24
  04a7e54  lfs 3, 16044(3)
  04a7e58  lfs 4, 196(31)
  04a7e5c  lfs 5, 200(31)
  04a7e60  lfs 6, 112(1)
  04a7e64  lfs 7, 116(1)
  04a7e68  fmadds 2, 2, 3, 6
  04a7e6c  lfs 6, 120(1)
  04a7e70  fmadds 4, 4, 3, 7
  04a7e74  fctiwz 1, 1
  04a7e78  fmadds 3, 5, 3, 6
  04a7e7c  stfs 2, 112(1)
  04a7e80  stfs 4, 116(1)
  04a7e84  stfs 3, 120(1)
  04a7e88  stfd 1, 128(1)
  04a7e8c  lwz 26, 132(1)
  04a7e90  addic 3, 1, 112
  04a7e94  lis 10, 32767
  04a7e98  fmr 1, 30
  04a7e9c  ori 7, 25, 0
  04a7ea0  fmr 2, 26
  04a7ea4  fmr 3, 26
  04a7ea8  ori 8, 30, 0
  04a7eac  fmr 4, 19
  04a7eb0  ori 10, 10, 65535
  04a7eb4  bl 0x126f50
  04a7eb8  nop
  04a7ebc  ori 29, 3, 0
  04a7ec0  cmpwi 29, 0
  04a7ec4  bt 2, 0x4a7f18
  04a7ec8  fmr 1, 29
  04a7ecc  bl 0x502758
  04a7ed0  nop
  04a7ed4  lhz 4, 50(31)
  04a7ed8  sth 26, 10(29)
  04a7edc  extsh 4, 4
  04a7ee0  srawi 4, 4, 5
  04a7ee4  slwi 4, 4, 4
  04a7ee8  addc 4, 4, 3
  04a7eec  li 3, 255
  04a7ef0  stb 4, 9(29)
  04a7ef4  bl 0xfc620
  04a7ef8  nop
  04a7efc  stb 3, 8(29)
  04a7f00  li 4, 127
  04a7f04  li 3, 2
  04a7f08  lhz 5, 10(29)
  04a7f0c  stb 5, 43(29)
  04a7f10  stw 3, 36(29)
  04a7f14  stb 4, 42(29)
  04a7f18  addic 28, 28, 1
  04a7f1c  fsubs 19, 19, 31
  04a7f20  neg 25, 25
  04a7f24  cmpwi 28, 3
  04a7f28  sldi 26, 26, 1
  04a7f2c  bt 0, 0x4a7e90
  04a7f30  li 0, 144
  04a7f34  lvx 31, 1, 0
  04a7f38  ld 0, 368(1)
  04a7f3c  mtlr 0
  04a7f40  lfd 18, 240(1)
  04a7f44  lfd 19, 248(1)
  04a7f48  lfd 20, 256(1)
  04a7f4c  lfd 21, 264(1)
  04a7f50  lfd 22, 272(1)
  04a7f54  lfd 23, 280(1)
  04a7f58  lfd 24, 288(1)
  04a7f5c  lfd 25, 296(1)
  04a7f60  lfd 26, 304(1)
  04a7f64  lfd 27, 312(1)
  04a7f68  lfd 28, 320(1)
  04a7f6c  lfd 29, 328(1)
  04a7f70  lfd 30, 336(1)
  04a7f74  lfd 31, 344(1)
  04a7f78  ld 23, 168(1)
  04a7f7c  ld 24, 176(1)
  04a7f80  ld 25, 184(1)
  04a7f84  ld 26, 192(1)
  04a7f88  ld 27, 200(1)
  04a7f8c  ld 28, 208(1)
  04a7f90  ld 29, 216(1)
  04a7f94  ld 30, 224(1)
  04a7f98  ld 31, 232(1)
  04a7f9c  addi 1, 1, 352
  04a7fa0  blr

M908_004a7fc0:   # 0x4a7fc0, 0x590 bytes
  04a7fc0  stdu 1, -320(1)
  04a7fc4  mflr 0
  04a7fc8  std 0, 336(1)
  04a7fcc  stfd 24, 256(1)
  04a7fd0  stfd 25, 264(1)
  04a7fd4  stfd 26, 272(1)
  04a7fd8  stfd 27, 280(1)
  04a7fdc  stfd 28, 288(1)
  04a7fe0  stfd 29, 296(1)
  04a7fe4  stfd 30, 304(1)
  04a7fe8  stfd 31, 312(1)
  04a7fec  std 31, 248(1)
  04a7ff0  ori 31, 3, 0
  04a7ff4  lis 4, 114
  04a7ff8  lis 3, 74
  04a7ffc  lis 5, 165
  04a8000  std 30, 240(1)
  04a8004  lis 6, 143
  04a8008  std 29, 232(1)
  04a800c  lwz 30, 120(31)
  04a8010  addi 29, 3, 32676
  04a8014  lfs 1, -3052(4)
  04a8018  addic 3, 5, 7136
  04a801c  li 8, 1
  04a8020  addic 5, 30, 96
  04a8024  lwz 4, 104(30)
  04a8028  lfs 2, 16056(6)
  04a802c  slwi 4, 4, 2
  04a8030  fmuls 1, 1, 2
  04a8034  extsw 7, 4
  04a8038  addic 4, 1, 112
  04a803c  addic 6, 30, 100
  04a8040  std 28, 224(1)
  04a8044  std 27, 216(1)
  04a8048  lwzx 3, 3, 7
  04a804c  bl 0x10ce18
  04a8050  nop
  04a8054  lis 28, 143
  04a8058  lfs 25, 0(29)
  04a805c  lis 27, 143
  04a8060  lfs 1, 112(1)
  04a8064  addic 3, 31, 16
  04a8068  fmr 4, 25
  04a806c  addic 5, 30, 112
  04a8070  lfs 2, 16060(28)
  04a8074  lfs 3, 16064(27)
  04a8078  bl 0x109b40
  04a807c  nop
  04a8080  lfs 1, 116(1)
  04a8084  lfs 2, 16060(28)
  04a8088  addic 3, 31, 20
  04a808c  lfs 3, 16064(27)
  04a8090  addic 5, 30, 116
  04a8094  fmr 4, 25
  04a8098  bl 0x109b40
  04a809c  nop
  04a80a0  lfs 1, 120(1)
  04a80a4  lfs 2, 16060(28)
  04a80a8  addic 3, 31, 24
  04a80ac  lfs 3, 16064(27)
  04a80b0  addic 5, 30, 120
  04a80b4  fmr 4, 25
  04a80b8  bl 0x109b40
  04a80bc  nop
  04a80c0  lfs 30, 112(1)
  04a80c4  lfs 1, 16(31)
  04a80c8  lfs 2, 4(29)
  04a80cc  fsubs 30, 30, 1
  04a80d0  lfs 29, 116(1)
  04a80d4  lfs 1, 20(31)
  04a80d8  lfs 31, 120(1)
  04a80dc  fsubs 29, 29, 1
  04a80e0  lfs 28, 24(31)
  04a80e4  lfs 1, 72(31)
  04a80e8  fabs 26, 30
  04a80ec  fcmpu 0, 26, 2
  04a80f0  cror 6, 0, 2
  04a80f4  bt 6, 0x4a850c
  04a80f8  fmr 3, 2
  04a80fc  fabs 2, 29
  04a8100  fcmpu 0, 2, 3
  04a8104  cror 6, 0, 2
  04a8108  bt 6, 0x4a850c
  04a810c  fsubs 3, 26, 2
  04a8110  stfs 30, 140(1)
  04a8114  stfs 29, 144(1)
  04a8118  lis 29, 115
  04a811c  lis 3, 74
  04a8120  addic 29, 29, 22784
  04a8124  addi 3, 3, 32676
  04a8128  stfs 3, 148(1)
  04a812c  lwz 4, 140(1)
  04a8130  lfs 3, 140(1)
  04a8134  lwz 5, 144(1)
  04a8138  fabs 4, 3
  04a813c  lfs 3, 144(1)
  04a8140  rlwinm 5, 5, 3, 29, 29
  04a8144  lwz 6, 148(1)
  04a8148  lfs 5, 148(1)
  04a814c  rlwimi 5, 6, 2, 30, 30
  04a8150  fabs 3, 3
  04a8154  fsub 6, 5, 25
  04a8158  fsub 5, 5, 25
  04a815c  rlwimi 5, 4, 4, 28, 28
  04a8160  ori 4, 29, 0
  04a8164  rlwimi 4, 5, 2, 26, 28
  04a8168  slwi 5, 5, 2
  04a816c  clrldi 4, 4, 32
  04a8170  fsel 4, 6, 4, 2
  04a8174  lfsx 27, 29, 5
  04a8178  fsel 3, 5, 3, 26
  04a817c  lfs 2, 4(4)
  04a8180  lfs 26, 8(3)
  04a8184  fcmpu 0, 4, 25
  04a8188  bt 1, 0x4a8194
  04a818c  fmr 27, 25
  04a8190  b 0x4a82ac
  04a8194  fsubs 5, 3, 4
  04a8198  fadds 3, 3, 4
  04a819c  addic 3, 1, 16
  04a81a0  li 6, 2
  04a81a4  addic 4, 3, 168
  04a81a8  addic 5, 3, 184
  04a81ac  mtctr 6
  04a81b0  fdivs 3, 5, 3
  04a81b4  fmuls 4, 3, 3
  04a81b8  stfs 3, 196(1)
  04a81bc  stfs 3, 188(1)
  04a81c0  stfs 3, 192(1)
  04a81c4  stfs 3, 184(1)
  04a81c8  lfs 6, 196(1)
  04a81cc  lfs 7, 188(1)
  04a81d0  lfs 8, 192(1)
  04a81d4  fmuls 5, 4, 4
  04a81d8  fmuls 7, 7, 4
  04a81dc  fmuls 6, 6, 5
  04a81e0  fmuls 3, 5, 5
  04a81e4  fmuls 5, 8, 5
  04a81e8  stfs 7, 188(1)
  04a81ec  fmuls 4, 6, 4
  04a81f0  stfs 5, 192(1)
  04a81f4  stfs 4, 196(1)
  04a81f8  lfs 4, 168(3)
  04a81fc  fmuls 4, 4, 3
  04a8200  stfs 4, 184(3)
  04a8204  lfs 4, 4(4)
  04a8208  addic 3, 3, 8
  04a820c  addic 4, 4, 8
  04a8210  fmuls 4, 4, 3
  04a8214  stfs 4, 4(5)
  04a8218  addic 5, 5, 8
  04a821c  bdnz 0x4a81f8
  04a8220  li 5, 4
  04a8224  ori 3, 1, 0
  04a8228  mtctr 5
  04a822c  lis 4, 115
  04a8230  addic 5, 3, 184
  04a8234  addic 4, 4, 22752
  04a8238  ori 7, 5, 0
  04a823c  lfs 3, 184(3)
  04a8240  lfs 4, 0(4)
  04a8244  fmuls 3, 3, 4
  04a8248  lfs 4, 4(4)
  04a824c  addic 4, 4, 8
  04a8250  stfs 3, 184(3)
  04a8254  lfs 3, 4(5)
  04a8258  addic 3, 3, 8
  04a825c  fmuls 3, 3, 4
  04a8260  stfs 3, 4(5)
  04a8264  addic 5, 5, 8
  04a8268  bdnz 0x4a823c
  04a826c  fmr 3, 25
  04a8270  ori 3, 1, 0
  04a8274  mtctr 6
  04a8278  lfs 4, 184(3)
  04a827c  fadds 3, 3, 4
  04a8280  addic 3, 3, 16
  04a8284  lfs 4, 4(7)
  04a8288  lfs 5, 8(7)
  04a828c  lfs 6, 12(7)
  04a8290  addic 7, 7, 16
  04a8294  fadds 3, 3, 4
  04a8298  fadds 3, 3, 5
  04a829c  fadds 3, 3, 6
  04a82a0  bdnz 0x4a8278
  04a82a4  fadds 3, 3, 26
  04a82a8  fmadds 27, 3, 27, 2
  04a82ac  fmr 24, 31
  04a82b0  fmr 2, 27
  04a82b4  bl 0x5025e0
  04a82b8  nop
  04a82bc  lis 28, 143
  04a82c0  fmr 31, 1
  04a82c4  lis 27, 143
  04a82c8  fmr 1, 27
  04a82cc  addic 5, 30, 136
  04a82d0  fmr 4, 25
  04a82d4  ori 3, 31, 0
  04a82d8  lfs 2, 16060(28)
  04a82dc  lfs 3, 16064(27)
  04a82e0  bl 0xff2e8
  04a82e4  nop
  04a82e8  fmuls 1, 29, 29
  04a82ec  fsubs 2, 24, 28
  04a82f0  lfs 3, 16060(28)
  04a82f4  lfs 4, 16064(27)
  04a82f8  fmadds 1, 30, 30, 1
  04a82fc  fabs 6, 2
  04a8300  stfs 2, 132(1)
  04a8304  fsqrts 1, 1
  04a8308  fabs 5, 1
  04a830c  stfs 1, 128(1)
  04a8310  lwz 3, 132(1)
  04a8314  lfs 2, 132(1)
  04a8318  rlwinm 3, 3, 3, 29, 29
  04a831c  fabs 7, 2
  04a8320  fsubs 1, 5, 6
  04a8324  stfs 1, 136(1)
  04a8328  lwz 4, 128(1)
  04a832c  lfs 1, 128(1)
  04a8330  lwz 5, 136(1)
  04a8334  lfs 2, 136(1)
  04a8338  fabs 1, 1
  04a833c  rlwimi 3, 5, 2, 30, 30
  04a8340  fsub 8, 2, 25
  04a8344  fsub 9, 2, 25
  04a8348  rlwimi 3, 4, 4, 28, 28
  04a834c  ori 4, 29, 0
  04a8350  rlwimi 4, 3, 2, 26, 28
  04a8354  slwi 3, 3, 2
  04a8358  clrldi 4, 4, 32
  04a835c  fsel 6, 8, 1, 6
  04a8360  lfsx 1, 29, 3
  04a8364  lfs 2, 4(4)
  04a8368  fsel 5, 9, 7, 5
  04a836c  fcmpu 0, 6, 25
  04a8370  bt 1, 0x4a837c
  04a8374  fmr 26, 25
  04a8378  b 0x4a8494
  04a837c  fsubs 7, 5, 6
  04a8380  fadds 5, 5, 6
  04a8384  addic 3, 1, 16
  04a8388  li 6, 2
  04a838c  addic 4, 3, 136
  04a8390  addic 5, 3, 152
  04a8394  mtctr 6
  04a8398  fdivs 5, 7, 5
  04a839c  fmuls 6, 5, 5
  04a83a0  stfs 5, 164(1)
  04a83a4  stfs 5, 156(1)
  04a83a8  stfs 5, 160(1)
  04a83ac  stfs 5, 152(1)
  04a83b0  lfs 8, 164(1)
  04a83b4  lfs 9, 156(1)
  04a83b8  lfs 10, 160(1)
  04a83bc  fmuls 7, 6, 6
  04a83c0  fmuls 9, 9, 6
  04a83c4  fmuls 8, 8, 7
  04a83c8  fmuls 5, 7, 7
  04a83cc  fmuls 7, 10, 7
  04a83d0  stfs 9, 156(1)
  04a83d4  fmuls 6, 8, 6
  04a83d8  stfs 7, 160(1)
  04a83dc  stfs 6, 164(1)
  04a83e0  lfs 6, 136(3)
  04a83e4  fmuls 6, 6, 5
  04a83e8  stfs 6, 152(3)
  04a83ec  lfs 6, 4(4)
  04a83f0  addic 3, 3, 8
  04a83f4  addic 4, 4, 8
  04a83f8  fmuls 6, 6, 5
  04a83fc  stfs 6, 4(5)
  04a8400  addic 5, 5, 8
  04a8404  bdnz 0x4a83e0
  04a8408  li 5, 4
  04a840c  ori 3, 1, 0
  04a8410  mtctr 5
  04a8414  lis 4, 115
  04a8418  addic 5, 3, 152
  04a841c  addic 4, 4, 22752
  04a8420  ori 7, 5, 0
  04a8424  lfs 5, 152(3)
  04a8428  lfs 6, 0(4)
  04a842c  fmuls 5, 5, 6
  04a8430  lfs 6, 4(4)
  04a8434  addic 4, 4, 8
  04a8438  stfs 5, 152(3)
  04a843c  lfs 5, 4(5)
  04a8440  addic 3, 3, 8
  04a8444  fmuls 5, 5, 6
  04a8448  stfs 5, 4(5)
  04a844c  addic 5, 5, 8
  04a8450  bdnz 0x4a8424
  04a8454  fmr 5, 25
  04a8458  ori 3, 1, 0
  04a845c  mtctr 6
  04a8460  lfs 6, 152(3)
  04a8464  fadds 5, 5, 6
  04a8468  addic 3, 3, 16
  04a846c  lfs 6, 4(7)
  04a8470  lfs 7, 8(7)
  04a8474  lfs 8, 12(7)
  04a8478  addic 7, 7, 16
  04a847c  fadds 5, 5, 6
  04a8480  fadds 5, 5, 7
  04a8484  fadds 5, 5, 8
  04a8488  bdnz 0x4a8460
  04a848c  fadds 26, 5, 26
  04a8490  fmadds 26, 26, 1, 2
  04a8494  fmr 2, 3
  04a8498  addic 3, 31, 68
  04a849c  fmr 3, 4
  04a84a0  addic 5, 30, 132
  04a84a4  fneg 1, 26
  04a84a8  fmr 4, 25
  04a84ac  bl 0x109b40
  04a84b0  nop
  04a84b4  lis 3, 143
  04a84b8  fmr 4, 25
  04a84bc  lis 5, 143
  04a84c0  lfs 1, 16072(3)
  04a84c4  fdivs 1, 31, 1
  04a84c8  lis 3, 74
  04a84cc  addi 4, 3, 32676
  04a84d0  lis 3, 143
  04a84d4  lfs 5, 12(4)
  04a84d8  lfs 6, 16(4)
  04a84dc  lfs 3, 16064(3)
  04a84e0  lfs 7, 16068(5)
  04a84e4  addic 3, 31, 64
  04a84e8  lfs 2, 20(4)
  04a84ec  addic 5, 30, 128
  04a84f0  fsub 8, 5, 1
  04a84f4  fsel 1, 8, 1, 5
  04a84f8  fsub 5, 1, 6
  04a84fc  fsel 1, 5, 1, 6
  04a8500  fmuls 1, 7, 1
  04a8504  bl 0x109b40
  04a8508  nop
  04a850c  ld 0, 336(1)
  04a8510  mtlr 0
  04a8514  lfd 24, 256(1)
  04a8518  lfd 25, 264(1)
  04a851c  lfd 26, 272(1)
  04a8520  lfd 27, 280(1)
  04a8524  lfd 28, 288(1)
  04a8528  lfd 29, 296(1)
  04a852c  lfd 30, 304(1)
  04a8530  lfd 31, 312(1)
  04a8534  ld 27, 216(1)
  04a8538  ld 28, 224(1)
  04a853c  ld 29, 232(1)
  04a8540  ld 30, 240(1)
  04a8544  ld 31, 248(1)
  04a8548  addi 1, 1, 320
  04a854c  blr

M908_004a8558:   # 0x4a8558, 0x298 bytes
  04a8558  stdu 1, -96(1)
  04a855c  lwz 5, 120(3)
  04a8560  lis 4, 165
  04a8564  li 7, 0
  04a8568  addic 8, 4, 7136
  04a856c  lwz 4, 104(5)
  04a8570  slwi 4, 4, 2
  04a8574  extsw 6, 4
  04a8578  ori 4, 7, 0
  04a857c  lwzx 8, 8, 6
  04a8580  lwz 6, 0(8)
  04a8584  addic 6, 6, -1
  04a8588  cmpwi 6, 0
  04a858c  bf 1, 0x4a85e4
  04a8590  ori 6, 8, 0
  04a8594  lfs 1, 20(6)
  04a8598  lfs 2, 36(6)
  04a859c  lfs 3, 16(6)
  04a85a0  fsubs 1, 1, 2
  04a85a4  lfs 2, 32(6)
  04a85a8  fsubs 2, 3, 2
  04a85ac  lfs 3, 24(6)
  04a85b0  lfs 4, 40(6)
  04a85b4  fsubs 3, 3, 4
  04a85b8  fmuls 1, 1, 1
  04a85bc  lwz 9, 0(8)
  04a85c0  addic 7, 7, 1
  04a85c4  addic 9, 9, -1
  04a85c8  cmpw 7, 9
  04a85cc  fmadds 1, 2, 2, 1
  04a85d0  fmadds 1, 3, 3, 1
  04a85d4  fsqrts 1, 1
  04a85d8  stfs 1, 28(6)
  04a85dc  addic 6, 6, 16
  04a85e0  bt 0, 0x4a8594
  04a85e4  lis 6, 75
  04a85e8  stw 4, 96(5)
  04a85ec  addi 6, 6, -31408
  04a85f0  lfs 1, 0(6)
  04a85f4  stw 4, 100(5)
  04a85f8  lfs 2, 16(8)
  04a85fc  stfs 2, 16(3)
  04a8600  lfs 3, 20(8)
  04a8604  stfs 3, 20(3)
  04a8608  lfs 4, 24(8)
  04a860c  stfs 4, 24(3)
  04a8610  lfs 4, 28(8)
  04a8614  stfs 4, 28(3)
  04a8618  lfs 4, 32(8)
  04a861c  lfs 5, 36(8)
  04a8620  fsubs 2, 4, 2
  04a8624  fsubs 3, 5, 3
  04a8628  lis 6, 115
  04a862c  addic 6, 6, 22784
  04a8630  fabs 5, 2
  04a8634  fabs 4, 3
  04a8638  stfs 2, 48(1)
  04a863c  stfs 3, 52(1)
  04a8640  fsubs 2, 5, 4
  04a8644  stfs 2, 56(1)
  04a8648  lwz 7, 48(1)
  04a864c  lfs 2, 48(1)
  04a8650  lwz 8, 52(1)
  04a8654  lfs 3, 52(1)
  04a8658  fabs 2, 2
  04a865c  lwz 9, 56(1)
  04a8660  rlwinm 8, 8, 3, 29, 29
  04a8664  fabs 6, 3
  04a8668  lfs 3, 56(1)
  04a866c  rlwimi 8, 9, 2, 30, 30
  04a8670  fsub 7, 3, 1
  04a8674  fsub 8, 3, 1
  04a8678  rlwimi 8, 7, 4, 28, 28
  04a867c  ori 7, 6, 0
  04a8680  rlwimi 7, 8, 2, 26, 28
  04a8684  slwi 8, 8, 2
  04a8688  clrldi 7, 7, 32
  04a868c  fsel 4, 7, 2, 4
  04a8690  lfsx 3, 6, 8
  04a8694  lfs 2, 4(7)
  04a8698  fsel 5, 8, 6, 5
  04a869c  fcmpu 0, 4, 1
  04a86a0  bt 1, 0x4a86a8
  04a86a4  b 0x4a87cc
  04a86a8  fsubs 6, 5, 4
  04a86ac  fadds 4, 5, 4
  04a86b0  addic 9, 1, 16
  04a86b4  li 6, 2
  04a86b8  addic 7, 9, 60
  04a86bc  addic 8, 9, 44
  04a86c0  mtctr 6
  04a86c4  fdivs 4, 6, 4
  04a86c8  fmuls 6, 4, 4
  04a86cc  stfs 4, 72(1)
  04a86d0  stfs 4, 64(1)
  04a86d4  stfs 4, 68(1)
  04a86d8  stfs 4, 60(1)
  04a86dc  lfs 7, 72(1)
  04a86e0  lfs 8, 64(1)
  04a86e4  lfs 9, 68(1)
  04a86e8  fmuls 4, 6, 6
  04a86ec  fmuls 8, 8, 6
  04a86f0  fmuls 7, 7, 4
  04a86f4  fmuls 5, 4, 4
  04a86f8  fmuls 4, 9, 4
  04a86fc  stfs 8, 64(1)
  04a8700  fmuls 6, 7, 6
  04a8704  stfs 4, 68(1)
  04a8708  stfs 6, 72(1)
  04a870c  lfs 4, 44(9)
  04a8710  fmuls 4, 4, 5
  04a8714  stfs 4, 60(9)
  04a8718  lfs 4, 4(8)
  04a871c  addic 8, 8, 8
  04a8720  fmuls 4, 4, 5
  04a8724  addic 9, 9, 8
  04a8728  stfs 4, 4(7)
  04a872c  addic 7, 7, 8
  04a8730  bdnz 0x4a870c
  04a8734  ori 10, 1, 0
  04a8738  li 7, 4
  04a873c  lis 9, 115
  04a8740  addic 8, 10, 60
  04a8744  mtctr 7
  04a8748  addic 9, 9, 22752
  04a874c  ori 7, 8, 0
  04a8750  lfs 4, 60(10)
  04a8754  lfs 5, 0(9)
  04a8758  fmuls 4, 4, 5
  04a875c  lfs 5, 4(9)
  04a8760  addic 9, 9, 8
  04a8764  stfs 4, 60(10)
  04a8768  lfs 4, 4(8)
  04a876c  addic 10, 10, 8
  04a8770  fmuls 4, 4, 5
  04a8774  stfs 4, 4(8)
  04a8778  addic 8, 8, 8
  04a877c  bdnz 0x4a8750
  04a8780  ori 8, 6, 0
  04a8784  ori 6, 1, 0
  04a8788  mtctr 8
  04a878c  lfs 4, 60(6)
  04a8790  fadds 1, 1, 4
  04a8794  lfs 4, 4(7)
  04a8798  addic 6, 6, 16
  04a879c  lfs 5, 8(7)
  04a87a0  lfs 6, 12(7)
  04a87a4  addic 7, 7, 16
  04a87a8  fadds 1, 1, 4
  04a87ac  fadds 1, 1, 5
  04a87b0  fadds 1, 1, 6
  04a87b4  bdnz 0x4a878c
  04a87b8  lis 6, 75
  04a87bc  addi 6, 6, -31408
  04a87c0  lfs 4, 4(6)
  04a87c4  fadds 1, 1, 4
  04a87c8  fmadds 1, 1, 3, 2
  04a87cc  stfs 1, 72(3)
  04a87d0  stw 4, 120(5)
  04a87d4  stw 4, 116(5)
  04a87d8  stw 4, 112(5)
  04a87dc  stw 4, 136(5)
  04a87e0  stw 4, 132(5)
  04a87e4  stw 4, 128(5)
  04a87e8  addi 1, 1, 96
  04a87ec  blr

UpdateMoby_908:   # 0x4a8808, 0x54c bytes
  04a8808  stdu 1, -176(1)
  04a880c  mflr 0
  04a8810  std 0, 192(1)
  04a8814  std 31, 168(1)
  04a8818  ori 31, 3, 0
  04a881c  lis 4, 128
  04a8820  std 30, 160(1)
  04a8824  li 5, 0
  04a8828  lwz 30, 120(31)
  04a882c  bl 0x10675c
  04a8830  nop
  04a8834  li 4, 255
  04a8838  cmpwi 3, 0
  04a883c  stb 4, 164(31)
  04a8840  bt 2, 0x4a891c
  04a8844  lbz 3, 32(31)
  04a8848  cmpwi 3, 2
  04a884c  bt 2, 0x4a891c
  04a8850  lis 3, 151
  04a8854  lwz 3, -25488(3)
  04a8858  cmpwi 3, 14
  04a885c  bf 2, 0x4a8884
  04a8860  lis 3, 151
  04a8864  lwz 4, -13840(3)
  04a8868  addic 4, 4, 1
  04a886c  cmpwi 4, 3
  04a8870  stw 4, -13840(3)
  04a8874  bt 0, 0x4a8884
  04a8878  li 3, 24
  04a887c  bl 0x11b728
  04a8880  nop
  04a8884  lis 5, 75
  04a8888  li 4, 2
  04a888c  addi 5, 5, -30736
  04a8890  ori 3, 31, 0
  04a8894  li 6, -1
  04a8898  stb 4, 32(31)
  04a889c  addic 4, 31, 16
  04a88a0  lfs 1, 0(5)
  04a88a4  lfs 2, 4(5)
  04a88a8  bl 0x10fb28
  04a88ac  nop
  04a88b0  lhz 3, 52(31)
  04a88b4  li 5, 0
  04a88b8  lwz 4, 108(30)
  04a88bc  ori 3, 3, 65
  04a88c0  cmpwi 4, -1
  04a88c4  stw 5, 148(31)
  04a88c8  sth 3, 52(31)
  04a88cc  bt 2, 0x4a8914
  04a88d0  sldi 3, 4, 7
  04a88d4  sldi 6, 4, 4
  04a88d8  lis 5, 150
  04a88dc  subc 3, 3, 6
  04a88e0  addic 5, 5, 14312
  04a88e4  extsw 3, 3
  04a88e8  lwzx 5, 5, 3
  04a88ec  cmpw 5, 31
  04a88f0  bf 2, 0x4a8914
  04a88f4  lis 5, 150
  04a88f8  addic 5, 5, 14292
  04a88fc  lbzx 3, 5, 3
  04a8900  cmpwi 3, 0
  04a8904  bt 2, 0x4a8914
  04a8908  extsw 3, 4
  04a890c  bl 0x15cdb0
  04a8910  nop
  04a8914  li 3, -1
  04a8918  stw 3, 108(30)
  04a891c  lbz 3, 32(31)
  04a8920  cmpwi 3, 0
  04a8924  cmpwi 1, 3, 2
  04a8928  cmpwi 6, 3, 1
  04a892c  cmpwi 7, 3, -1
  04a8930  bt 1, 0x4a893c
  04a8934  bf 29, 0x4a8cec
  04a8938  b 0x4a8948
  04a893c  bf 25, 0x4a8a3c
  04a8940  bf 5, 0x4a8a48
  04a8944  b 0x4a8cec
  04a8948  lwz 3, 104(30)
  04a894c  cmpwi 3, -1
  04a8950  bf 2, 0x4a897c
  04a8954  lis 3, 102
  04a8958  lhz 4, 178(31)
  04a895c  addic 3, 3, -30436
  04a8960  extsh 4, 4
  04a8964  bl 0x5cd098
  04a8968  nop
  04a896c  ori 3, 31, 0
  04a8970  bl 0xefb38
  04a8974  nop
  04a8978  b 0x4a8d3c
  04a897c  lis 4, 165
  04a8980  slwi 3, 3, 2
  04a8984  addic 4, 4, 7136
  04a8988  extsw 3, 3
  04a898c  lwzx 3, 4, 3
  04a8990  lwz 3, 0(3)
  04a8994  cmpwi 3, 0
  04a8998  bf 2, 0x4a89c4
  04a899c  lis 3, 102
  04a89a0  lhz 4, 178(31)
  04a89a4  addic 3, 3, -30380
  04a89a8  extsh 4, 4
  04a89ac  bl 0x5cd098
  04a89b0  nop
  04a89b4  ori 3, 31, 0
  04a89b8  bl 0xefb38
  04a89bc  nop
  04a89c0  b 0x4a8d3c
  04a89c4  ori 3, 31, 0
  04a89c8  bl 0x4a8558
  04a89cc  li 3, 1
  04a89d0  vspltisw 4, -1
  04a89d4  li 5, 255
  04a89d8  li 6, -1
  04a89dc  lis 4, 143
  04a89e0  stb 3, 32(31)
  04a89e4  li 3, 16076
  04a89e8  stb 5, 48(31)
  04a89ec  stw 6, 108(30)
  04a89f0  lis 7, 75
  04a89f4  sth 5, 50(31)
  04a89f8  li 6, 8
  04a89fc  addi 5, 7, -30736
  04a8a00  vslw 4, 4, 4
  04a8a04  <unknown>
  04a8a08  lis 3, 114
  04a8a0c  vcfsx 2, 2, 0
  04a8a10  li 4, -3056
  04a8a14  <unknown>
  04a8a18  vspltw 3, 3, 0
  04a8a1c  <unknown>
  04a8a20  li 3, 124
  04a8a24  vaddfp 2, 2, 3
  04a8a28  vmaddfp 2, 5, 2, 4
  04a8a2c  vctsxs 2, 2, 0
  04a8a30  vspltw 2, 2, 0
  04a8a34  stvewx 2, 3, 30
  04a8a38  b 0x4a8cec
  04a8a3c  ori 3, 31, 0
  04a8a40  bl 0x4a7fc0
  04a8a44  b 0x4a8cec
  04a8a48  addic 3, 30, 124
  04a8a4c  bl 0x4fff60
  04a8a50  nop
  04a8a54  cmpwi 3, 0
  04a8a58  bt 2, 0x4a8cec
  04a8a5c  lis 5, 143
  04a8a60  li 6, 16076
  04a8a64  lwz 7, 104(30)
  04a8a68  li 4, -66
  04a8a6c  lhz 8, 52(31)
  04a8a70  lis 3, 165
  04a8a74  lwz 9, 36(31)
  04a8a78  and 4, 8, 4
  04a8a7c  vspltisw 4, -1
  04a8a80  slwi 7, 7, 2
  04a8a84  <unknown>
  04a8a88  addic 3, 3, 7136
  04a8a8c  extsw 7, 7
  04a8a90  lis 5, 75
  04a8a94  sth 4, 52(31)
  04a8a98  vcfsx 2, 2, 0
  04a8a9c  li 6, 8
  04a8aa0  addi 4, 5, -30736
  04a8aa4  vslw 4, 4, 4
  04a8aa8  lwz 5, 16(9)
  04a8aac  lwzx 3, 3, 7
  04a8ab0  stw 5, 148(31)
  04a8ab4  lis 5, 114
  04a8ab8  <unknown>
  04a8abc  li 6, -3056
  04a8ac0  vspltw 3, 3, 0
  04a8ac4  li 7, 0
  04a8ac8  vaddfp 2, 2, 3
  04a8acc  <unknown>
  04a8ad0  li 5, 124
  04a8ad4  li 6, 1
  04a8ad8  vmaddfp 2, 5, 2, 4
  04a8adc  vctsxs 2, 2, 0
  04a8ae0  vspltw 2, 2, 0
  04a8ae4  stvewx 2, 5, 30
  04a8ae8  stb 6, 32(31)
  04a8aec  stw 7, 96(30)
  04a8af0  lfs 1, 12(4)
  04a8af4  stw 7, 100(30)
  04a8af8  lfs 2, 16(3)
  04a8afc  stfs 2, 16(31)
  04a8b00  lfs 3, 20(3)
  04a8b04  stfs 3, 20(31)
  04a8b08  lfs 4, 24(3)
  04a8b0c  stfs 4, 24(31)
  04a8b10  lfs 4, 28(3)
  04a8b14  stfs 4, 28(31)
  04a8b18  lfs 4, 32(3)
  04a8b1c  lfs 5, 36(3)
  04a8b20  fsubs 2, 4, 2
  04a8b24  fsubs 3, 5, 3
  04a8b28  lis 3, 115
  04a8b2c  addic 3, 3, 22784
  04a8b30  fabs 5, 2
  04a8b34  fabs 4, 3
  04a8b38  stfs 2, 112(1)
  04a8b3c  stfs 3, 116(1)
  04a8b40  fsubs 2, 5, 4
  04a8b44  stfs 2, 120(1)
  04a8b48  lwz 4, 112(1)
  04a8b4c  lfs 2, 112(1)
  04a8b50  lwz 5, 116(1)
  04a8b54  lfs 3, 116(1)
  04a8b58  lwz 6, 120(1)
  04a8b5c  rlwinm 5, 5, 3, 29, 29
  04a8b60  fabs 6, 3
  04a8b64  lfs 3, 120(1)
  04a8b68  fabs 2, 2
  04a8b6c  rlwimi 5, 6, 2, 30, 30
  04a8b70  fsub 7, 3, 1
  04a8b74  fsub 8, 3, 1
  04a8b78  rlwimi 5, 4, 4, 28, 28
  04a8b7c  ori 4, 3, 0
  04a8b80  rlwimi 4, 5, 2, 26, 28
  04a8b84  slwi 5, 5, 2
  04a8b88  clrldi 4, 4, 32
  04a8b8c  fsel 4, 7, 2, 4
  04a8b90  lfsx 3, 3, 5
  04a8b94  fsel 5, 8, 6, 5
  04a8b98  lfs 2, 4(4)
  04a8b9c  fcmpu 0, 4, 1
  04a8ba0  bt 1, 0x4a8ba8
  04a8ba4  b 0x4a8ccc
  04a8ba8  fsubs 6, 5, 4
  04a8bac  fadds 4, 5, 4
  04a8bb0  addic 6, 1, 16
  04a8bb4  li 3, 2
  04a8bb8  addic 5, 6, 108
  04a8bbc  addic 4, 6, 124
  04a8bc0  mtctr 3
  04a8bc4  fdivs 4, 6, 4
  04a8bc8  fmuls 6, 4, 4
  04a8bcc  stfs 4, 136(1)
  04a8bd0  stfs 4, 128(1)
  04a8bd4  stfs 4, 132(1)
  04a8bd8  stfs 4, 124(1)
  04a8bdc  lfs 7, 136(1)
  04a8be0  lfs 8, 128(1)
  04a8be4  lfs 9, 132(1)
  04a8be8  fmuls 4, 6, 6
  04a8bec  fmuls 8, 8, 6
  04a8bf0  fmuls 7, 7, 4
  04a8bf4  fmuls 5, 4, 4
  04a8bf8  fmuls 4, 9, 4
  04a8bfc  stfs 8, 128(1)
  04a8c00  fmuls 6, 7, 6
  04a8c04  stfs 4, 132(1)
  04a8c08  stfs 6, 136(1)
  04a8c0c  lfs 4, 108(6)
  04a8c10  fmuls 4, 4, 5
  04a8c14  stfs 4, 124(6)
  04a8c18  lfs 4, 4(5)
  04a8c1c  addic 6, 6, 8
  04a8c20  addic 5, 5, 8
  04a8c24  fmuls 4, 4, 5
  04a8c28  stfs 4, 4(4)
  04a8c2c  addic 4, 4, 8
  04a8c30  bdnz 0x4a8c0c
  04a8c34  ori 7, 1, 0
  04a8c38  lis 6, 115
  04a8c3c  li 8, 4
  04a8c40  addic 5, 7, 124
  04a8c44  addic 6, 6, 22752
  04a8c48  ori 4, 5, 0
  04a8c4c  mtctr 8
  04a8c50  lfs 4, 124(7)
  04a8c54  lfs 5, 0(6)
  04a8c58  fmuls 4, 4, 5
  04a8c5c  lfs 5, 4(6)
  04a8c60  addic 6, 6, 8
  04a8c64  stfs 4, 124(7)
  04a8c68  lfs 4, 4(5)
  04a8c6c  addic 7, 7, 8
  04a8c70  fmuls 4, 4, 5
  04a8c74  stfs 4, 4(5)
  04a8c78  addic 5, 5, 8
  04a8c7c  bdnz 0x4a8c50
  04a8c80  ori 5, 3, 0
  04a8c84  ori 3, 1, 0
  04a8c88  mtctr 5
  04a8c8c  lfs 4, 124(3)
  04a8c90  fadds 1, 1, 4
  04a8c94  addic 3, 3, 16
  04a8c98  lfs 4, 4(4)
  04a8c9c  lfs 5, 8(4)
  04a8ca0  lfs 6, 12(4)
  04a8ca4  addic 4, 4, 16
  04a8ca8  fadds 1, 1, 4
  04a8cac  fadds 1, 1, 5
  04a8cb0  fadds 1, 1, 6
  04a8cb4  bdnz 0x4a8c8c
  04a8cb8  lis 3, 75
  04a8cbc  addi 3, 3, -30736
  04a8cc0  lfs 4, 16(3)
  04a8cc4  fadds 1, 1, 4
  04a8cc8  fmadds 1, 1, 3, 2
  04a8ccc  li 3, 0
  04a8cd0  stfs 1, 72(31)
  04a8cd4  stw 3, 120(30)
  04a8cd8  stw 3, 116(30)
  04a8cdc  stw 3, 112(30)
  04a8ce0  stw 3, 136(30)
  04a8ce4  stw 3, 132(30)
  04a8ce8  stw 3, 128(30)
  04a8cec  ori 3, 31, 0
  04a8cf0  bl 0x4a79c0
  04a8cf4  lbz 3, 32(31)
  04a8cf8  cmpwi 3, 0
  04a8cfc  bt 2, 0x4a8d3c
  04a8d00  cmpwi 3, 2
  04a8d04  bt 2, 0x4a8d3c
  04a8d08  ori 3, 31, 0
  04a8d0c  lwz 4, 108(30)
  04a8d10  extsw 4, 4
  04a8d14  bl 0x15cc7c
  04a8d18  nop
  04a8d1c  cmpwi 3, 0
  04a8d20  bf 2, 0x4a8d3c
  04a8d24  li 3, 0
  04a8d28  li 4, 4
  04a8d2c  ori 5, 31, 0
  04a8d30  bl 0x15d12c
  04a8d34  nop
  04a8d38  stw 3, 108(30)
  04a8d3c  ld 0, 192(1)
  04a8d40  mtlr 0
  04a8d44  ld 30, 160(1)
  04a8d48  ld 31, 168(1)
  04a8d4c  addi 1, 1, 176
  04a8d50  blr
