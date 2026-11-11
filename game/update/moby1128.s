# game/update/moby1128.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1128_001d7850:   # 0x1d7850, 0x14 bytes
  01d7850  lis 3, 118
  01d7854  lis 4, 1
  01d7858  addic 3, 3, 18360
  01d785c  stw 4, 72(3)
  01d7860  blr

UpdateMoby_1128:   # 0x1d7870, 0x6b0 bytes
  01d7870  stdu 1, -224(1)
  01d7874  mflr 0
  01d7878  std 0, 240(1)
  01d787c  stfd 22, 144(1)
  01d7880  stfd 23, 152(1)
  01d7884  stfd 24, 160(1)
  01d7888  stfd 25, 168(1)
  01d788c  stfd 26, 176(1)
  01d7890  stfd 27, 184(1)
  01d7894  stfd 28, 192(1)
  01d7898  stfd 29, 200(1)
  01d789c  stfd 30, 208(1)
  01d78a0  stfd 31, 216(1)
  01d78a4  std 31, 136(1)
  01d78a8  ori 31, 3, 0
  01d78ac  std 30, 128(1)
  01d78b0  lbz 3, 176(31)
  01d78b4  lwz 30, 120(31)
  01d78b8  std 29, 120(1)
  01d78bc  cmpwi 3, 255
  01d78c0  bt 2, 0x1d78fc
  01d78c4  lis 4, 151
  01d78c8  lis 5, 161
  01d78cc  addic 5, 5, -13692
  01d78d0  lwz 4, -25488(4)
  01d78d4  addc 5, 3, 5
  01d78d8  slwi 4, 4, 4
  01d78dc  clrldi 5, 5, 32
  01d78e0  extsw 4, 4
  01d78e4  lbzx 4, 5, 4
  01d78e8  cmpwi 4, 255
  01d78ec  bf 2, 0x1d78fc
  01d78f0  li 3, -1
  01d78f4  stw 3, 16(30)
  01d78f8  lbz 3, 176(31)
  01d78fc  lis 4, 162
  01d7900  ori 5, 3, 0
  01d7904  addic 6, 4, 704
  01d7908  li 3, 0
  01d790c  ori 29, 3, 0
  01d7910  lbzx 5, 6, 5
  01d7914  ori 4, 29, 0
  01d7918  cmpwi 5, 255
  01d791c  bf 2, 0x1d7938
  01d7920  lwz 5, 60(30)
  01d7924  cmpwi 5, 0
  01d7928  bt 2, 0x1d7934
  01d792c  li 3, 1
  01d7930  b 0x1d7938
  01d7934  li 4, 1
  01d7938  lbz 5, 32(31)
  01d793c  cmpwi 5, 4
  01d7940  cmpwi 1, 5, 3
  01d7944  cmpwi 6, 5, 2
  01d7948  cmpwi 7, 5, 1
  01d794c  bt 2, 0x1d7ce8
  01d7950  bt 6, 0x1d7c60
  01d7954  bt 26, 0x1d7a58
  01d7958  cmpwi 6, 4, 0
  01d795c  bt 30, 0x1d79b8
  01d7960  cmpwi 5, 0
  01d7964  bf 2, 0x1d7edc
  01d7968  lfs 1, 16(31)
  01d796c  stfs 1, 0(30)
  01d7970  lfs 1, 20(31)
  01d7974  lwz 3, 56(30)
  01d7978  stfs 1, 4(30)
  01d797c  lfs 1, 24(31)
  01d7980  cmpwi 3, -1
  01d7984  stfs 1, 8(30)
  01d7988  lfs 1, 28(31)
  01d798c  stfs 1, 12(30)
  01d7990  bt 2, 0x1d79a8
  01d7994  lis 4, 162
  01d7998  slwi 3, 3, 2
  01d799c  addic 4, 4, 2088
  01d79a0  extsw 3, 3
  01d79a4  stwx 29, 4, 3
  01d79a8  li 3, 1
  01d79ac  stb 3, 32(31)
  01d79b0  stw 29, 12(30)
  01d79b4  b 0x1d7edc
  01d79b8  cmpwi 1, 3, 0
  01d79bc  bf 26, 0x1d7edc
  01d79c0  bf 6, 0x1d7a0c
  01d79c4  lwz 3, 16(30)
  01d79c8  cmpwi 3, -1
  01d79cc  bt 2, 0x1d7a0c
  01d79d0  lis 4, 164
  01d79d4  slwi 3, 3, 8
  01d79d8  lwz 4, -28512(4)
  01d79dc  addc 3, 4, 3
  01d79e0  cmpwi 3, 0
  01d79e4  bt 2, 0x1d7a0c
  01d79e8  clrldi 3, 3, 32
  01d79ec  lbz 3, 32(3)
  01d79f0  cmpwi 1, 3, 253
  01d79f4  cmpwi 3, 254
  01d79f8  cror 2, 2, 6
  01d79fc  bt 2, 0x1d7a0c
  01d7a00  lwz 4, 20(30)
  01d7a04  cmpw 3, 4
  01d7a08  bf 2, 0x1d7edc
  01d7a0c  lfs 1, 32(30)
  01d7a10  lfs 2, 28(30)
  01d7a14  fmuls 1, 1, 1
  01d7a18  lfs 3, 36(30)
  01d7a1c  fmadds 1, 2, 2, 1
  01d7a20  fmadds 1, 3, 3, 1
  01d7a24  fsqrts 1, 1
  01d7a28  stfs 1, 12(30)
  01d7a2c  lwz 30, 48(30)
  01d7a30  cmpwi 30, -1
  01d7a34  bt 2, 0x1d7a4c
  01d7a38  ori 3, 30, 0
  01d7a3c  li 4, 0
  01d7a40  ori 5, 31, 0
  01d7a44  bl 0x15d12c
  01d7a48  nop
  01d7a4c  li 3, 2
  01d7a50  stb 3, 32(31)
  01d7a54  b 0x1d7edc
  01d7a58  cmpwi 4, 0
  01d7a5c  cmpwi 1, 3, 0
  01d7a60  bf 2, 0x1d7ab0
  01d7a64  bf 6, 0x1d7adc
  01d7a68  lwz 3, 16(30)
  01d7a6c  cmpwi 3, -1
  01d7a70  bt 2, 0x1d7adc
  01d7a74  lis 4, 164
  01d7a78  slwi 3, 3, 8
  01d7a7c  lwz 4, -28512(4)
  01d7a80  addc 3, 4, 3
  01d7a84  cmpwi 3, 0
  01d7a88  bt 2, 0x1d7adc
  01d7a8c  clrldi 3, 3, 32
  01d7a90  lbz 3, 32(3)
  01d7a94  cmpwi 1, 3, 253
  01d7a98  cmpwi 3, 254
  01d7a9c  cror 2, 2, 6
  01d7aa0  bt 2, 0x1d7adc
  01d7aa4  lwz 4, 24(30)
  01d7aa8  cmpw 3, 4
  01d7aac  bf 2, 0x1d7adc
  01d7ab0  lwz 30, 48(30)
  01d7ab4  cmpwi 30, -1
  01d7ab8  bt 2, 0x1d7ad0
  01d7abc  ori 3, 30, 0
  01d7ac0  li 4, 0
  01d7ac4  ori 5, 31, 0
  01d7ac8  bl 0x15d12c
  01d7acc  nop
  01d7ad0  li 3, 4
  01d7ad4  stb 3, 32(31)
  01d7ad8  b 0x1d7edc
  01d7adc  lfs 1, 32(30)
  01d7ae0  lfs 2, 212(31)
  01d7ae4  lfs 3, 28(30)
  01d7ae8  fmuls 2, 2, 1
  01d7aec  lfs 4, 208(31)
  01d7af0  lfs 5, 196(31)
  01d7af4  fmuls 4, 4, 1
  01d7af8  lfs 6, 36(30)
  01d7afc  lfs 7, 192(31)
  01d7b00  lfs 8, 228(31)
  01d7b04  lfs 9, 216(31)
  01d7b08  lfs 10, 224(31)
  01d7b0c  fmuls 1, 9, 1
  01d7b10  fmadds 2, 5, 3, 2
  01d7b14  lfs 5, 200(31)
  01d7b18  fmadds 4, 7, 3, 4
  01d7b1c  lfs 7, 232(31)
  01d7b20  lis 3, 114
  01d7b24  fmadds 1, 5, 3, 1
  01d7b28  fmadds 2, 8, 6, 2
  01d7b2c  fmadds 3, 10, 6, 4
  01d7b30  lfs 5, 40(30)
  01d7b34  fmadds 1, 7, 6, 1
  01d7b38  fmuls 4, 2, 2
  01d7b3c  lfs 6, -3052(3)
  01d7b40  fmuls 5, 5, 6
  01d7b44  lis 4, 29
  01d7b48  fmadds 4, 3, 3, 4
  01d7b4c  addi 4, 4, 30824
  01d7b50  fmadds 4, 1, 1, 4
  01d7b54  lfs 6, 0(4)
  01d7b58  lfs 8, 16(31)
  01d7b5c  lfs 9, 20(31)
  01d7b60  lfs 10, 24(31)
  01d7b64  fsqrts 4, 4
  01d7b68  fdivs 5, 5, 4
  01d7b6c  fsub 7, 6, 4
  01d7b70  fsub 11, 6, 4
  01d7b74  fsub 12, 6, 4
  01d7b78  fsub 13, 4, 6
  01d7b7c  fsub 0, 4, 6
  01d7b80  fsub 4, 4, 6
  01d7b84  fmuls 31, 1, 5
  01d7b88  fmuls 30, 2, 5
  01d7b8c  fmuls 5, 3, 5
  01d7b90  fsel 7, 7, 6, 31
  01d7b94  fsel 11, 11, 6, 30
  01d7b98  fsel 12, 12, 6, 5
  01d7b9c  fsel 7, 13, 7, 31
  01d7ba0  fsel 11, 0, 11, 30
  01d7ba4  fsel 4, 4, 12, 5
  01d7ba8  fadds 5, 10, 7
  01d7bac  fadds 7, 9, 11
  01d7bb0  fadds 4, 8, 4
  01d7bb4  stfs 5, 24(31)
  01d7bb8  stfs 7, 20(31)
  01d7bbc  stfs 4, 16(31)
  01d7bc0  lfs 4, 12(30)
  01d7bc4  lfs 5, 40(30)
  01d7bc8  lfs 7, -3052(3)
  01d7bcc  fnmsubs 4, 5, 7, 4
  01d7bd0  fcmpu 0, 4, 6
  01d7bd4  stfs 4, 12(30)
  01d7bd8  cror 6, 1, 2
  01d7bdc  bt 6, 0x1d7edc
  01d7be0  lfs 4, 0(30)
  01d7be4  fadds 3, 4, 3
  01d7be8  stfs 3, 16(31)
  01d7bec  lfs 3, 4(30)
  01d7bf0  fadds 2, 3, 2
  01d7bf4  stfs 2, 20(31)
  01d7bf8  lfs 2, 8(30)
  01d7bfc  fadds 1, 2, 1
  01d7c00  stfs 1, 24(31)
  01d7c04  lfs 1, 12(30)
  01d7c08  stfs 1, 28(31)
  01d7c0c  stw 29, 12(30)
  01d7c10  lwz 29, 56(30)
  01d7c14  cmpwi 29, -1
  01d7c18  bt 2, 0x1d7c34
  01d7c1c  lis 3, 162
  01d7c20  slwi 4, 29, 2
  01d7c24  addic 3, 3, 2088
  01d7c28  extsw 4, 4
  01d7c2c  li 5, 1
  01d7c30  stwx 5, 3, 4
  01d7c34  li 3, 3
  01d7c38  stb 3, 32(31)
  01d7c3c  lwz 3, 52(30)
  01d7c40  cmpwi 3, -1
  01d7c44  bt 2, 0x1d7edc
  01d7c48  li 4, 0
  01d7c4c  ori 5, 31, 0
  01d7c50  lwz 3, 48(30)
  01d7c54  bl 0x15d12c
  01d7c58  nop
  01d7c5c  b 0x1d7edc
  01d7c60  cmpwi 4, 0
  01d7c64  cmpwi 1, 3, 0
  01d7c68  bf 2, 0x1d7cb8
  01d7c6c  bf 6, 0x1d7edc
  01d7c70  lwz 3, 16(30)
  01d7c74  cmpwi 3, -1
  01d7c78  bt 2, 0x1d7edc
  01d7c7c  lis 4, 164
  01d7c80  slwi 3, 3, 8
  01d7c84  lwz 4, -28512(4)
  01d7c88  addc 3, 4, 3
  01d7c8c  cmpwi 3, 0
  01d7c90  bt 2, 0x1d7edc
  01d7c94  clrldi 3, 3, 32
  01d7c98  lbz 3, 32(3)
  01d7c9c  cmpwi 1, 3, 253
  01d7ca0  cmpwi 3, 254
  01d7ca4  cror 2, 2, 6
  01d7ca8  bt 2, 0x1d7edc
  01d7cac  lwz 4, 24(30)
  01d7cb0  cmpw 3, 4
  01d7cb4  bf 2, 0x1d7edc
  01d7cb8  stw 29, 12(30)
  01d7cbc  lwz 30, 48(30)
  01d7cc0  cmpwi 30, -1
  01d7cc4  bt 2, 0x1d7cdc
  01d7cc8  ori 3, 30, 0
  01d7ccc  li 4, 0
  01d7cd0  ori 5, 31, 0
  01d7cd4  bl 0x15d12c
  01d7cd8  nop
  01d7cdc  li 3, 4
  01d7ce0  stb 3, 32(31)
  01d7ce4  b 0x1d7edc
  01d7ce8  cmpwi 4, 0
  01d7cec  cmpwi 1, 3, 0
  01d7cf0  bf 2, 0x1d7d6c
  01d7cf4  bf 6, 0x1d7d40
  01d7cf8  lwz 3, 16(30)
  01d7cfc  cmpwi 3, -1
  01d7d00  bt 2, 0x1d7d40
  01d7d04  lis 4, 164
  01d7d08  slwi 3, 3, 8
  01d7d0c  lwz 4, -28512(4)
  01d7d10  addc 3, 4, 3
  01d7d14  cmpwi 3, 0
  01d7d18  bt 2, 0x1d7d40
  01d7d1c  clrldi 3, 3, 32
  01d7d20  lbz 3, 32(3)
  01d7d24  cmpwi 1, 3, 253
  01d7d28  cmpwi 3, 254
  01d7d2c  cror 2, 2, 6
  01d7d30  bt 2, 0x1d7d40
  01d7d34  lwz 4, 20(30)
  01d7d38  cmpw 3, 4
  01d7d3c  bf 2, 0x1d7d6c
  01d7d40  lwz 30, 48(30)
  01d7d44  cmpwi 30, -1
  01d7d48  bt 2, 0x1d7d60
  01d7d4c  ori 3, 30, 0
  01d7d50  li 4, 0
  01d7d54  ori 5, 31, 0
  01d7d58  bl 0x15d12c
  01d7d5c  nop
  01d7d60  li 3, 2
  01d7d64  stb 3, 32(31)
  01d7d68  b 0x1d7edc
  01d7d6c  lfs 1, 32(30)
  01d7d70  lfs 2, 28(30)
  01d7d74  fmuls 3, 1, 1
  01d7d78  lfs 4, 36(30)
  01d7d7c  lis 3, 114
  01d7d80  lfs 5, 44(30)
  01d7d84  lis 4, 29
  01d7d88  lfs 6, -3052(3)
  01d7d8c  fmadds 3, 2, 2, 3
  01d7d90  fmuls 5, 5, 6
  01d7d94  addi 4, 4, 30824
  01d7d98  fmadds 3, 4, 4, 3
  01d7d9c  fneg 5, 5
  01d7da0  lfs 6, 0(4)
  01d7da4  lfs 8, 208(31)
  01d7da8  lfs 9, 212(31)
  01d7dac  lfs 7, 216(31)
  01d7db0  fsqrts 3, 3
  01d7db4  lfs 10, 192(31)
  01d7db8  lfs 11, 196(31)
  01d7dbc  lfs 12, 200(31)
  01d7dc0  lfs 13, 224(31)
  01d7dc4  lfs 0, 228(31)
  01d7dc8  lfs 31, 232(31)
  01d7dcc  lfs 30, 16(31)
  01d7dd0  lfs 29, 20(31)
  01d7dd4  lfs 28, 24(31)
  01d7dd8  fdivs 5, 5, 3
  01d7ddc  fsub 27, 6, 3
  01d7de0  fsub 25, 6, 3
  01d7de4  fsub 26, 3, 6
  01d7de8  fsub 24, 6, 3
  01d7dec  fsub 23, 3, 6
  01d7df0  fsub 22, 3, 6
  01d7df4  fmuls 1, 5, 1
  01d7df8  fmuls 2, 5, 2
  01d7dfc  fmuls 4, 5, 4
  01d7e00  fsel 5, 27, 6, 1
  01d7e04  fsel 27, 25, 6, 2
  01d7e08  fsel 6, 24, 6, 4
  01d7e0c  fsel 1, 26, 5, 1
  01d7e10  fsel 2, 23, 27, 2
  01d7e14  fsel 4, 22, 6, 4
  01d7e18  fmuls 5, 8, 1
  01d7e1c  fmuls 6, 9, 1
  01d7e20  fmuls 1, 7, 1
  01d7e24  fmadds 5, 10, 2, 5
  01d7e28  fmadds 6, 11, 2, 6
  01d7e2c  fmadds 1, 12, 2, 1
  01d7e30  fmadds 2, 13, 4, 5
  01d7e34  fmadds 5, 0, 4, 6
  01d7e38  fmadds 1, 31, 4, 1
  01d7e3c  fadds 2, 30, 2
  01d7e40  fadds 4, 29, 5
  01d7e44  fadds 1, 28, 1
  01d7e48  stfs 2, 16(31)
  01d7e4c  stfs 4, 20(31)
  01d7e50  stfs 1, 24(31)
  01d7e54  lfs 1, 12(30)
  01d7e58  lfs 2, 44(30)
  01d7e5c  lfs 4, -3052(3)
  01d7e60  fmadds 1, 2, 4, 1
  01d7e64  fcmpu 0, 1, 3
  01d7e68  stfs 1, 12(30)
  01d7e6c  cror 6, 0, 2
  01d7e70  bt 6, 0x1d7edc
  01d7e74  lfs 1, 0(30)
  01d7e78  stfs 1, 16(31)
  01d7e7c  lfs 1, 4(30)
  01d7e80  lwz 3, 48(30)
  01d7e84  stfs 1, 20(31)
  01d7e88  lfs 1, 8(30)
  01d7e8c  cmpwi 3, -1
  01d7e90  stfs 1, 24(31)
  01d7e94  lfs 1, 12(30)
  01d7e98  stfs 1, 28(31)
  01d7e9c  bt 2, 0x1d7eb4
  01d7ea0  li 4, 0
  01d7ea4  ori 5, 31, 0
  01d7ea8  lwz 3, 52(30)
  01d7eac  bl 0x15d12c
  01d7eb0  nop
  01d7eb4  lwz 30, 56(30)
  01d7eb8  cmpwi 30, -1
  01d7ebc  bt 2, 0x1d7ed4
  01d7ec0  lis 3, 162
  01d7ec4  slwi 4, 30, 2
  01d7ec8  addic 3, 3, 2088
  01d7ecc  extsw 4, 4
  01d7ed0  stwx 29, 3, 4
  01d7ed4  li 3, 1
  01d7ed8  stb 3, 32(31)
  01d7edc  ld 0, 240(1)
  01d7ee0  mtlr 0
  01d7ee4  lfd 22, 144(1)
  01d7ee8  lfd 23, 152(1)
  01d7eec  lfd 24, 160(1)
  01d7ef0  lfd 25, 168(1)
  01d7ef4  lfd 26, 176(1)
  01d7ef8  lfd 27, 184(1)
  01d7efc  lfd 28, 192(1)
  01d7f00  lfd 29, 200(1)
  01d7f04  lfd 30, 208(1)
  01d7f08  lfd 31, 216(1)
  01d7f0c  ld 29, 120(1)
  01d7f10  ld 30, 128(1)
  01d7f14  ld 31, 136(1)
  01d7f18  addi 1, 1, 224
  01d7f1c  blr
