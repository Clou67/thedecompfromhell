# game/update/moby108.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1131_001b7a68:   # 0x1b7a68, 0xd0 bytes
  01b7a68  stdu 1, -144(1)
  01b7a6c  mflr 0
  01b7a70  std 0, 160(1)
  01b7a74  stfd 31, 136(1)
  01b7a78  std 31, 128(1)
  01b7a7c  lis 4, 27
  01b7a80  ori 31, 3, 0
  01b7a84  addi 5, 4, 31328
  01b7a88  li 6, 0
  01b7a8c  std 30, 120(1)
  01b7a90  lis 4, 51
  01b7a94  lwz 30, 120(31)
  01b7a98  lfs 31, 0(5)
  01b7a9c  li 5, 0
  01b7aa0  stw 6, 116(1)
  01b7aa4  bl 0x10675c
  01b7aa8  nop
  01b7aac  ori 4, 3, 0
  01b7ab0  ori 3, 31, 0
  01b7ab4  li 6, 0
  01b7ab8  addic 5, 30, 32
  01b7abc  li 9, 0
  01b7ac0  addic 7, 1, 112
  01b7ac4  li 10, 4
  01b7ac8  addic 8, 1, 116
  01b7acc  bl 0x106840
  01b7ad0  nop
  01b7ad4  lwz 3, 112(1)
  01b7ad8  cmpwi 3, 1
  01b7adc  bt 2, 0x1b7b14
  01b7ae0  lbz 3, 32(31)
  01b7ae4  cmpwi 1, 3, 8
  01b7ae8  cmpwi 3, 7
  01b7aec  cror 2, 2, 6
  01b7af0  bt 2, 0x1b7b14
  01b7af4  lfs 1, 32(30)
  01b7af8  lfs 2, 116(1)
  01b7afc  fsubs 1, 1, 2
  01b7b00  fcmpu 0, 1, 31
  01b7b04  stfs 1, 32(30)
  01b7b08  bt 1, 0x1b7b14
  01b7b0c  li 3, 7
  01b7b10  stb 3, 32(31)
  01b7b14  li 3, 255
  01b7b18  stb 3, 164(31)
  01b7b1c  ld 0, 160(1)
  01b7b20  mtlr 0
  01b7b24  lfd 31, 136(1)
  01b7b28  ld 30, 120(1)
  01b7b2c  ld 31, 128(1)
  01b7b30  addi 1, 1, 144
  01b7b34  blr

UpdateMoby_108:   # 0x1b7b60, 0x848 bytes
  01b7b60  stdu 1, -320(1)
  01b7b64  mflr 0
  01b7b68  std 0, 336(1)
  01b7b6c  stfd 31, 312(1)
  01b7b70  std 31, 304(1)
  01b7b74  lis 4, 27
  01b7b78  ori 31, 3, 0
  01b7b7c  addi 5, 4, 31544
  01b7b80  li 6, 0
  01b7b84  std 30, 296(1)
  01b7b88  lis 4, 51
  01b7b8c  lwz 30, 120(31)
  01b7b90  lfs 31, 0(5)
  01b7b94  li 5, 0
  01b7b98  std 29, 288(1)
  01b7b9c  stw 6, 224(1)
  01b7ba0  bl 0x10675c
  01b7ba4  nop
  01b7ba8  ori 4, 3, 0
  01b7bac  ori 3, 31, 0
  01b7bb0  li 6, 0
  01b7bb4  addic 5, 30, 32
  01b7bb8  li 9, 0
  01b7bbc  addic 7, 1, 220
  01b7bc0  li 10, 4
  01b7bc4  addic 8, 1, 224
  01b7bc8  bl 0x106840
  01b7bcc  nop
  01b7bd0  lwz 3, 220(1)
  01b7bd4  cmpwi 3, 1
  01b7bd8  bt 2, 0x1b7c10
  01b7bdc  lbz 3, 32(31)
  01b7be0  cmpwi 1, 3, 8
  01b7be4  cmpwi 3, 7
  01b7be8  cror 2, 2, 6
  01b7bec  bt 2, 0x1b7c10
  01b7bf0  lfs 1, 32(30)
  01b7bf4  lfs 2, 224(1)
  01b7bf8  fsubs 1, 1, 2
  01b7bfc  fcmpu 0, 1, 31
  01b7c00  stfs 1, 32(30)
  01b7c04  bt 1, 0x1b7c10
  01b7c08  li 3, 7
  01b7c0c  stb 3, 32(31)
  01b7c10  li 3, 255
  01b7c14  lis 4, 165
  01b7c18  addic 29, 4, 7136
  01b7c1c  stb 3, 164(31)
  01b7c20  lwz 3, 112(30)
  01b7c24  slwi 4, 3, 2
  01b7c28  lbz 3, 32(31)
  01b7c2c  extsw 4, 4
  01b7c30  cmpwi 3, 4
  01b7c34  cmpwi 1, 3, 1
  01b7c38  cmpwi 6, 3, -1
  01b7c3c  cmpwi 7, 3, 0
  01b7c40  lwzx 29, 29, 4
  01b7c44  bt 1, 0x1b7c6c
  01b7c48  bt 5, 0x1b7c58
  01b7c4c  bf 25, 0x1b8388
  01b7c50  bf 29, 0x1b7c9c
  01b7c54  b 0x1b7cd0
  01b7c58  cmpwi 3, 2
  01b7c5c  bf 1, 0x1b7d54
  01b7c60  cmpwi 3, 3
  01b7c64  bf 1, 0x1b7db8
  01b7c68  b 0x1b7e78
  01b7c6c  cmpwi 3, 7
  01b7c70  bt 1, 0x1b7c88
  01b7c74  cmpwi 3, 5
  01b7c78  bf 1, 0x1b8388
  01b7c7c  cmpwi 3, 6
  01b7c80  bf 1, 0x1b7f9c
  01b7c84  b 0x1b8214
  01b7c88  cmpwi 3, 8
  01b7c8c  bf 1, 0x1b82c8
  01b7c90  cmpwi 3, 9
  01b7c94  bf 1, 0x1b8350
  01b7c98  b 0x1b8388
  01b7c9c  li 3, 1
  01b7ca0  lfs 1, 16(31)
  01b7ca4  stb 3, 32(31)
  01b7ca8  stfs 1, 128(30)
  01b7cac  lfs 1, 20(31)
  01b7cb0  stfs 1, 132(30)
  01b7cb4  lfs 1, 24(31)
  01b7cb8  stfs 1, 136(30)
  01b7cbc  lfs 1, 28(31)
  01b7cc0  stfs 1, 140(30)
  01b7cc4  lfs 1, 72(31)
  01b7cc8  stfs 1, 140(30)
  01b7ccc  b 0x1b8388
  01b7cd0  lis 3, 151
  01b7cd4  lwz 4, 144(30)
  01b7cd8  addic 3, 3, -25168
  01b7cdc  extsw 4, 4
  01b7ce0  bl 0x110b70
  01b7ce4  nop
  01b7ce8  cmpwi 3, 0
  01b7cec  bt 2, 0x1b8388
  01b7cf0  li 3, 120
  01b7cf4  vspltisw 4, -1
  01b7cf8  li 4, 2
  01b7cfc  addi 5, 3, 16
  01b7d00  li 6, 4
  01b7d04  vslw 4, 4, 4
  01b7d08  stb 4, 32(31)
  01b7d0c  <unknown>
  01b7d10  <unknown>
  01b7d14  lis 4, 27
  01b7d18  vor 2, 2, 3
  01b7d1c  addi 3, 4, 31544
  01b7d20  li 4, -3056
  01b7d24  vcfsx 2, 2, 0
  01b7d28  <unknown>
  01b7d2c  lis 3, 114
  01b7d30  vspltw 3, 3, 0
  01b7d34  <unknown>
  01b7d38  li 3, 160
  01b7d3c  vaddfp 2, 2, 3
  01b7d40  vmaddfp 2, 5, 2, 4
  01b7d44  vctsxs 2, 2, 0
  01b7d48  vspltw 2, 2, 0
  01b7d4c  stvewx 2, 3, 30
  01b7d50  b 0x1b8388
  01b7d54  addic 3, 30, 160
  01b7d58  bl 0x4fff60
  01b7d5c  nop
  01b7d60  cmpwi 3, 0
  01b7d64  bt 2, 0x1b8388
  01b7d68  lis 3, 27
  01b7d6c  vspltisw 2, -1
  01b7d70  li 4, 3
  01b7d74  addi 3, 3, 31544
  01b7d78  li 6, 8
  01b7d7c  lis 5, 114
  01b7d80  stb 4, 32(31)
  01b7d84  li 4, -3056
  01b7d88  vslw 2, 2, 2
  01b7d8c  <unknown>
  01b7d90  li 3, 160
  01b7d94  vspltw 3, 3, 0
  01b7d98  <unknown>
  01b7d9c  vmaddfp 2, 4, 3, 2
  01b7da0  vctsxs 2, 2, 0
  01b7da4  vspltw 2, 2, 0
  01b7da8  stvewx 2, 3, 30
  01b7dac  lfs 1, 72(31)
  01b7db0  stfs 1, 164(30)
  01b7db4  b 0x1b8388
  01b7db8  lwz 5, 160(30)
  01b7dbc  lis 3, 27
  01b7dc0  lis 4, 114
  01b7dc4  addic 5, 5, -1
  01b7dc8  addi 3, 3, 31544
  01b7dcc  extsw 6, 5
  01b7dd0  stw 5, 160(30)
  01b7dd4  std 6, 264(1)
  01b7dd8  lfs 1, 8(3)
  01b7ddc  lfs 2, -3056(4)
  01b7de0  ori 3, 31, 0
  01b7de4  fmuls 1, 2, 1
  01b7de8  lfd 2, 264(1)
  01b7dec  addic 4, 30, 128
  01b7df0  addic 5, 29, 16
  01b7df4  fcfid 2, 2
  01b7df8  fctidz 3, 1
  01b7dfc  frsp 1, 2
  01b7e00  fcfid 2, 3
  01b7e04  frsp 2, 2
  01b7e08  bl 0x1b78c0
  01b7e0c  lwz 3, 160(30)
  01b7e10  cmpwi 3, 0
  01b7e14  bf 2, 0x1b8388
  01b7e18  li 3, 1
  01b7e1c  li 4, 0
  01b7e20  vspltisw 3, -1
  01b7e24  lis 7, 27
  01b7e28  li 5, 8
  01b7e2c  stw 3, 152(30)
  01b7e30  li 6, 6
  01b7e34  addi 3, 7, 31544
  01b7e38  lfs 1, 72(31)
  01b7e3c  stw 4, 156(30)
  01b7e40  li 7, -3056
  01b7e44  stfs 1, 164(30)
  01b7e48  lis 4, 114
  01b7e4c  stb 6, 32(31)
  01b7e50  vslw 3, 3, 3
  01b7e54  <unknown>
  01b7e58  li 3, 160
  01b7e5c  vspltw 2, 2, 0
  01b7e60  <unknown>
  01b7e64  vmaddfp 2, 4, 2, 3
  01b7e68  vctsxs 2, 2, 0
  01b7e6c  vspltw 2, 2, 0
  01b7e70  stvewx 2, 3, 30
  01b7e74  b 0x1b8388
  01b7e78  lwz 4, 160(30)
  01b7e7c  lis 3, 27
  01b7e80  addic 4, 4, -1
  01b7e84  addi 3, 3, 31544
  01b7e88  extsw 5, 4
  01b7e8c  stw 4, 160(30)
  01b7e90  lis 4, 114
  01b7e94  std 5, 264(1)
  01b7e98  lfs 1, 12(3)
  01b7e9c  lfs 2, -3056(4)
  01b7ea0  lwz 3, 156(30)
  01b7ea4  fmuls 1, 2, 1
  01b7ea8  lwz 4, 152(30)
  01b7eac  lfd 2, 264(1)
  01b7eb0  slwi 3, 3, 4
  01b7eb4  slwi 4, 4, 4
  01b7eb8  fcfid 2, 2
  01b7ebc  addc 3, 29, 3
  01b7ec0  addc 4, 29, 4
  01b7ec4  addic 3, 3, 16
  01b7ec8  addic 5, 4, 16
  01b7ecc  clrldi 4, 3, 32
  01b7ed0  fctidz 3, 1
  01b7ed4  ori 3, 31, 0
  01b7ed8  clrldi 5, 5, 32
  01b7edc  frsp 1, 2
  01b7ee0  fcfid 2, 3
  01b7ee4  frsp 2, 2
  01b7ee8  bl 0x1b78c0
  01b7eec  lwz 3, 160(30)
  01b7ef0  cmpwi 3, 0
  01b7ef4  bf 2, 0x1b8388
  01b7ef8  lwz 4, 156(30)
  01b7efc  lwz 3, 152(30)
  01b7f00  cmpw 4, 3
  01b7f04  bf 0, 0x1b7f2c
  01b7f08  addic 3, 3, 1
  01b7f0c  addic 5, 4, 1
  01b7f10  stw 3, 152(30)
  01b7f14  stw 5, 156(30)
  01b7f18  lwz 5, 0(29)
  01b7f1c  cmpw 3, 5
  01b7f20  bf 2, 0x1b7f4c
  01b7f24  stw 4, 152(30)
  01b7f28  b 0x1b7f4c
  01b7f2c  addic 3, 3, -1
  01b7f30  addic 4, 4, -1
  01b7f34  cmpwi 3, -1
  01b7f38  stw 3, 152(30)
  01b7f3c  stw 4, 156(30)
  01b7f40  bf 2, 0x1b7f4c
  01b7f44  li 3, 1
  01b7f48  stw 3, 152(30)
  01b7f4c  lis 3, 27
  01b7f50  li 4, 6
  01b7f54  vspltisw 2, -1
  01b7f58  addi 3, 3, 31544
  01b7f5c  li 5, 8
  01b7f60  li 6, -3056
  01b7f64  stb 4, 32(31)
  01b7f68  lis 4, 114
  01b7f6c  vslw 2, 2, 2
  01b7f70  <unknown>
  01b7f74  li 3, 160
  01b7f78  vspltw 3, 3, 0
  01b7f7c  <unknown>
  01b7f80  vmaddfp 2, 4, 3, 2
  01b7f84  vctsxs 2, 2, 0
  01b7f88  vspltw 2, 2, 0
  01b7f8c  stvewx 2, 3, 30
  01b7f90  lfs 1, 72(31)
  01b7f94  stfs 1, 164(30)
  01b7f98  b 0x1b8388
  01b7f9c  lwz 3, 152(30)
  01b7fa0  lwz 4, 160(30)
  01b7fa4  slwi 5, 3, 4
  01b7fa8  addic 3, 4, -1
  01b7fac  addc 4, 29, 5
  01b7fb0  clrldi 4, 4, 32
  01b7fb4  stw 3, 160(30)
  01b7fb8  lfs 1, 16(31)
  01b7fbc  lfs 2, 20(31)
  01b7fc0  lfs 3, 16(4)
  01b7fc4  lfs 4, 20(4)
  01b7fc8  fsubs 1, 3, 1
  01b7fcc  fsubs 2, 4, 2
  01b7fd0  lis 4, 115
  01b7fd4  addic 4, 4, 22784
  01b7fd8  fabs 4, 1
  01b7fdc  fabs 3, 2
  01b7fe0  stfs 1, 208(1)
  01b7fe4  stfs 2, 212(1)
  01b7fe8  fsubs 1, 4, 3
  01b7fec  stfs 1, 216(1)
  01b7ff0  lwz 5, 208(1)
  01b7ff4  lfs 1, 208(1)
  01b7ff8  lwz 6, 212(1)
  01b7ffc  lfs 2, 212(1)
  01b8000  lwz 7, 216(1)
  01b8004  rlwinm 6, 6, 3, 29, 29
  01b8008  fabs 5, 2
  01b800c  lfs 2, 216(1)
  01b8010  fabs 1, 1
  01b8014  rlwimi 6, 7, 2, 30, 30
  01b8018  fsub 6, 2, 31
  01b801c  fsub 7, 2, 31
  01b8020  rlwimi 6, 5, 4, 28, 28
  01b8024  ori 5, 4, 0
  01b8028  rlwimi 5, 6, 2, 26, 28
  01b802c  slwi 6, 6, 2
  01b8030  clrldi 5, 5, 32
  01b8034  fsel 3, 6, 1, 3
  01b8038  lfsx 2, 4, 6
  01b803c  fsel 4, 7, 5, 4
  01b8040  lfs 1, 4(5)
  01b8044  fcmpu 0, 3, 31
  01b8048  bt 1, 0x1b8050
  01b804c  b 0x1b8174
  01b8050  fsubs 5, 4, 3
  01b8054  fadds 3, 4, 3
  01b8058  addic 7, 1, 16
  01b805c  li 4, 2
  01b8060  addic 6, 7, 212
  01b8064  addic 5, 7, 228
  01b8068  mtctr 4
  01b806c  fdivs 3, 5, 3
  01b8070  fmuls 5, 3, 3
  01b8074  stfs 3, 240(1)
  01b8078  stfs 3, 232(1)
  01b807c  stfs 3, 236(1)
  01b8080  stfs 3, 228(1)
  01b8084  lfs 6, 240(1)
  01b8088  lfs 7, 232(1)
  01b808c  lfs 8, 236(1)
  01b8090  fmuls 3, 5, 5
  01b8094  fmuls 7, 7, 5
  01b8098  fmuls 6, 6, 3
  01b809c  fmuls 4, 3, 3
  01b80a0  fmuls 3, 8, 3
  01b80a4  stfs 7, 232(1)
  01b80a8  fmuls 5, 6, 5
  01b80ac  stfs 3, 236(1)
  01b80b0  stfs 5, 240(1)
  01b80b4  lfs 3, 212(7)
  01b80b8  fmuls 3, 3, 4
  01b80bc  stfs 3, 228(7)
  01b80c0  lfs 3, 4(6)
  01b80c4  addic 7, 7, 8
  01b80c8  addic 6, 6, 8
  01b80cc  fmuls 3, 3, 4
  01b80d0  stfs 3, 4(5)
  01b80d4  addic 5, 5, 8
  01b80d8  bdnz 0x1b80b4
  01b80dc  ori 8, 1, 0
  01b80e0  lis 7, 115
  01b80e4  li 9, 4
  01b80e8  addic 6, 8, 228
  01b80ec  addic 7, 7, 22752
  01b80f0  ori 5, 6, 0
  01b80f4  mtctr 9
  01b80f8  lfs 3, 228(8)
  01b80fc  lfs 4, 0(7)
  01b8100  fmuls 3, 3, 4
  01b8104  lfs 4, 4(7)
  01b8108  addic 7, 7, 8
  01b810c  stfs 3, 228(8)
  01b8110  lfs 3, 4(6)
  01b8114  addic 8, 8, 8
  01b8118  fmuls 3, 3, 4
  01b811c  stfs 3, 4(6)
  01b8120  addic 6, 6, 8
  01b8124  bdnz 0x1b80f8
  01b8128  ori 6, 4, 0
  01b812c  ori 4, 1, 0
  01b8130  mtctr 6
  01b8134  lfs 3, 228(4)
  01b8138  lfs 4, 4(5)
  01b813c  fadds 3, 31, 3
  01b8140  lfs 5, 8(5)
  01b8144  addic 4, 4, 16
  01b8148  lfs 31, 12(5)
  01b814c  addic 5, 5, 16
  01b8150  fadds 3, 3, 4
  01b8154  fadds 3, 3, 5
  01b8158  fadds 31, 3, 31
  01b815c  bdnz 0x1b8134
  01b8160  lis 4, 27
  01b8164  addi 4, 4, 31544
  01b8168  lfs 3, 16(4)
  01b816c  fadds 31, 31, 3
  01b8170  fmadds 31, 31, 2, 1
  01b8174  lis 4, 27
  01b8178  extsw 3, 3
  01b817c  addi 4, 4, 31544
  01b8180  lis 5, 114
  01b8184  fmr 2, 31
  01b8188  std 3, 264(1)
  01b818c  lfs 1, 8(4)
  01b8190  lfs 3, -3056(5)
  01b8194  ori 3, 31, 0
  01b8198  fmuls 3, 3, 1
  01b819c  lfs 1, 164(30)
  01b81a0  lfd 4, 264(1)
  01b81a4  fcfid 4, 4
  01b81a8  fctidz 5, 3
  01b81ac  frsp 3, 4
  01b81b0  fcfid 4, 5
  01b81b4  frsp 4, 4
  01b81b8  bl 0x1b77f0
  01b81bc  stfs 1, 72(31)
  01b81c0  lwz 3, 160(30)
  01b81c4  cmpwi 3, 0
  01b81c8  bf 2, 0x1b8388
  01b81cc  lis 3, 27
  01b81d0  vspltisw 2, -1
  01b81d4  li 4, 4
  01b81d8  addi 3, 3, 31544
  01b81dc  li 6, 12
  01b81e0  li 5, -3056
  01b81e4  stb 4, 32(31)
  01b81e8  lis 4, 114
  01b81ec  vslw 2, 2, 2
  01b81f0  <unknown>
  01b81f4  li 3, 160
  01b81f8  vspltw 3, 3, 0
  01b81fc  <unknown>
  01b8200  vmaddfp 2, 4, 3, 2
  01b8204  vctsxs 2, 2, 0
  01b8208  vspltw 2, 2, 0
  01b820c  stvewx 2, 3, 30
  01b8210  b 0x1b8388
  01b8214  lis 3, 27
  01b8218  lfs 1, 16(31)
  01b821c  lfs 2, 20(31)
  01b8220  li 11, -1
  01b8224  addi 6, 3, 31544
  01b8228  stfs 1, 192(1)
  01b822c  lfs 1, 28(31)
  01b8230  li 30, 0
  01b8234  stfs 2, 196(1)
  01b8238  li 7, 7
  01b823c  stfs 1, 204(1)
  01b8240  lis 4, 161
  01b8244  ori 3, 31, 0
  01b8248  lfs 1, 20(6)
  01b824c  lfs 2, 24(31)
  01b8250  addic 5, 1, 192
  01b8254  std 11, 144(1)
  01b8258  addic 4, 4, 23856
  01b825c  fadds 3, 2, 1
  01b8260  std 30, 160(1)
  01b8264  std 7, 168(1)
  01b8268  li 8, 7
  01b826c  std 11, 176(1)
  01b8270  fmr 1, 31
  01b8274  std 30, 184(1)
  01b8278  li 9, 10
  01b827c  fmr 2, 31
  01b8280  li 10, 20
  01b8284  stfs 3, 200(1)
  01b8288  lfs 3, 24(6)
  01b828c  lfs 4, 4(6)
  01b8290  lfs 7, 28(6)
  01b8294  fmr 5, 3
  01b8298  fmr 6, 4
  01b829c  bl 0x10e030
  01b82a0  nop
  01b82a4  lhz 3, 52(31)
  01b82a8  li 4, 8
  01b82ac  stb 30, 49(31)
  01b82b0  rlwimi 3, 30, 0, 19, 19
  01b82b4  stw 30, 148(31)
  01b82b8  ori 3, 3, 1
  01b82bc  stb 4, 32(31)
  01b82c0  sth 3, 52(31)
  01b82c4  b 0x1b8388
  01b82c8  lwz 3, 116(30)
  01b82cc  cmpwi 3, 0
  01b82d0  bt 2, 0x1b8388
  01b82d4  addic 3, 3, -1
  01b82d8  lfs 1, 128(30)
  01b82dc  lis 4, 27
  01b82e0  li 6, 1
  01b82e4  li 7, 9
  01b82e8  stw 3, 116(30)
  01b82ec  stfs 1, 16(31)
  01b82f0  addi 3, 4, 31544
  01b82f4  lfs 1, 132(30)
  01b82f8  li 4, 0
  01b82fc  stfs 1, 20(31)
  01b8300  lfs 1, 136(30)
  01b8304  stfs 1, 24(31)
  01b8308  lfs 2, 140(30)
  01b830c  stfs 2, 28(31)
  01b8310  lfs 2, 140(30)
  01b8314  stfs 2, 72(31)
  01b8318  lfs 2, 32(3)
  01b831c  lhz 3, 52(31)
  01b8320  fsubs 1, 1, 2
  01b8324  ori 3, 3, 4096
  01b8328  lwz 5, 36(31)
  01b832c  rlwinm 3, 3, 0, 16, 30
  01b8330  sth 3, 52(31)
  01b8334  stfs 1, 24(31)
  01b8338  stw 4, 152(30)
  01b833c  stb 6, 49(31)
  01b8340  lwz 3, 16(5)
  01b8344  stb 7, 32(31)
  01b8348  stw 3, 148(31)
  01b834c  b 0x1b8388
  01b8350  lis 3, 27
  01b8354  lis 5, 114
  01b8358  lfs 1, 136(30)
  01b835c  addi 4, 3, 31544
  01b8360  addic 3, 31, 24
  01b8364  lfs 2, 36(4)
  01b8368  lfs 3, -3052(5)
  01b836c  fmuls 2, 3, 2
  01b8370  bl 0x109af0
  01b8374  nop
  01b8378  fcmpu 0, 1, 31
  01b837c  bf 2, 0x1b8388
  01b8380  li 3, 1
  01b8384  stb 3, 32(31)
  01b8388  ld 0, 336(1)
  01b838c  mtlr 0
  01b8390  lfd 31, 312(1)
  01b8394  ld 29, 288(1)
  01b8398  ld 30, 296(1)
  01b839c  ld 31, 304(1)
  01b83a0  addi 1, 1, 320
  01b83a4  blr
