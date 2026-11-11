# game/update/moby1054.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1054_001a7c24:   # 0x1a7c24, 0x14 bytes
  01a7c24  lis 3, 116
  01a7c28  lis 4, 1
  01a7c2c  addic 3, 3, 2024
  01a7c30  stw 4, 72(3)
  01a7c34  blr

UpdateMoby_1054:   # 0x1a7c58, 0xb80 bytes
  01a7c58  stdu 1, -288(1)
  01a7c5c  mflr 0
  01a7c60  std 0, 304(1)
  01a7c64  stfd 22, 208(1)
  01a7c68  stfd 23, 216(1)
  01a7c6c  stfd 24, 224(1)
  01a7c70  stfd 25, 232(1)
  01a7c74  stfd 26, 240(1)
  01a7c78  stfd 27, 248(1)
  01a7c7c  stfd 28, 256(1)
  01a7c80  stfd 29, 264(1)
  01a7c84  stfd 30, 272(1)
  01a7c88  stfd 31, 280(1)
  01a7c8c  std 31, 200(1)
  01a7c90  ori 31, 3, 0
  01a7c94  std 30, 192(1)
  01a7c98  lbz 3, 32(31)
  01a7c9c  lwz 30, 120(31)
  01a7ca0  cmpwi 3, 5
  01a7ca4  lfs 24, 68(31)
  01a7ca8  cmpwi 1, 3, 4
  01a7cac  cmpwi 6, 3, 3
  01a7cb0  std 29, 184(1)
  01a7cb4  std 28, 176(1)
  01a7cb8  std 27, 168(1)
  01a7cbc  std 26, 160(1)
  01a7cc0  std 25, 152(1)
  01a7cc4  cmpwi 7, 3, 1
  01a7cc8  bt 2, 0x1a86d0
  01a7ccc  bt 6, 0x1a8248
  01a7cd0  bt 26, 0x1a7ff0
  01a7cd4  bt 30, 0x1a7f40
  01a7cd8  cmpwi 3, 0
  01a7cdc  bf 2, 0x1a8784
  01a7ce0  lfs 1, 16(31)
  01a7ce4  stfs 1, 16(30)
  01a7ce8  lfs 1, 20(31)
  01a7cec  li 3, 1055
  01a7cf0  stfs 1, 20(30)
  01a7cf4  lfs 1, 24(31)
  01a7cf8  stfs 1, 24(30)
  01a7cfc  lfs 1, 28(31)
  01a7d00  stfs 1, 28(30)
  01a7d04  lfs 1, 64(31)
  01a7d08  stfs 1, 32(30)
  01a7d0c  lfs 1, 68(31)
  01a7d10  stfs 1, 36(30)
  01a7d14  lfs 1, 72(31)
  01a7d18  stfs 1, 40(30)
  01a7d1c  lfs 1, 76(31)
  01a7d20  stfs 1, 44(30)
  01a7d24  lfs 1, 224(31)
  01a7d28  stfs 1, 48(30)
  01a7d2c  lfs 1, 228(31)
  01a7d30  stfs 1, 52(30)
  01a7d34  lfs 1, 232(31)
  01a7d38  stfs 1, 56(30)
  01a7d3c  lfs 1, 236(31)
  01a7d40  stfs 1, 60(30)
  01a7d44  bl 0xefa28
  01a7d48  nop
  01a7d4c  li 4, 64
  01a7d50  stw 3, 64(30)
  01a7d54  li 5, 1
  01a7d58  sth 4, 50(3)
  01a7d5c  lwz 3, 64(30)
  01a7d60  stb 5, 49(3)
  01a7d64  lwz 3, 64(30)
  01a7d68  ld 4, 56(31)
  01a7d6c  std 4, 56(3)
  01a7d70  lwz 3, 64(30)
  01a7d74  lhz 4, 52(31)
  01a7d78  sth 4, 52(3)
  01a7d7c  lwz 3, 64(30)
  01a7d80  lfs 1, 16(31)
  01a7d84  stfs 1, 16(3)
  01a7d88  lfs 1, 20(31)
  01a7d8c  stfs 1, 20(3)
  01a7d90  lfs 1, 24(31)
  01a7d94  stfs 1, 24(3)
  01a7d98  lfs 1, 28(31)
  01a7d9c  stfs 1, 28(3)
  01a7da0  lwz 3, 64(30)
  01a7da4  lfs 1, 64(31)
  01a7da8  stfs 1, 64(3)
  01a7dac  lfs 1, 68(31)
  01a7db0  stfs 1, 68(3)
  01a7db4  lfs 1, 72(31)
  01a7db8  stfs 1, 72(3)
  01a7dbc  lfs 1, 76(31)
  01a7dc0  stfs 1, 76(3)
  01a7dc4  lwz 3, 0(30)
  01a7dc8  cmpwi 3, -1
  01a7dcc  bf 1, 0x1a7ddc
  01a7dd0  li 3, 1
  01a7dd4  stb 3, 32(31)
  01a7dd8  b 0x1a8784
  01a7ddc  lwz 3, 4(30)
  01a7de0  cmpwi 3, 2
  01a7de4  bf 2, 0x1a7df4
  01a7de8  li 3, 2
  01a7dec  stb 3, 32(31)
  01a7df0  b 0x1a8784
  01a7df4  lfs 1, 52(30)
  01a7df8  lfs 2, 48(30)
  01a7dfc  fmuls 3, 1, 1
  01a7e00  lfs 4, 56(30)
  01a7e04  lis 3, 116
  01a7e08  lfs 5, 2132(3)
  01a7e0c  fmadds 3, 2, 2, 3
  01a7e10  lis 3, 26
  01a7e14  addi 3, 3, 31800
  01a7e18  fmadds 3, 4, 4, 3
  01a7e1c  lfs 6, 0(3)
  01a7e20  lfs 7, 16(30)
  01a7e24  lwz 4, 64(30)
  01a7e28  fsqrts 3, 3
  01a7e2c  lis 3, 116
  01a7e30  fdivs 5, 5, 3
  01a7e34  fsub 8, 6, 3
  01a7e38  fsub 9, 3, 6
  01a7e3c  fsub 10, 6, 3
  01a7e40  fsub 11, 3, 6
  01a7e44  fsub 12, 6, 3
  01a7e48  fsub 3, 3, 6
  01a7e4c  fmuls 2, 2, 5
  01a7e50  fmuls 1, 1, 5
  01a7e54  fmuls 4, 4, 5
  01a7e58  fsel 5, 8, 6, 2
  01a7e5c  fsel 8, 10, 6, 1
  01a7e60  fsel 10, 12, 6, 4
  01a7e64  fsel 2, 9, 5, 2
  01a7e68  fsel 1, 11, 8, 1
  01a7e6c  fsel 3, 3, 10, 4
  01a7e70  fadds 2, 7, 2
  01a7e74  stfs 2, 16(31)
  01a7e78  lfs 2, 20(30)
  01a7e7c  fadds 1, 2, 1
  01a7e80  stfs 1, 20(31)
  01a7e84  lfs 1, 24(30)
  01a7e88  fadds 1, 1, 3
  01a7e8c  stfs 1, 24(31)
  01a7e90  lfs 1, 28(30)
  01a7e94  stfs 1, 28(31)
  01a7e98  lfs 1, 52(30)
  01a7e9c  lfs 2, 48(30)
  01a7ea0  fmuls 3, 1, 1
  01a7ea4  lfs 4, 56(30)
  01a7ea8  lfs 5, 2136(3)
  01a7eac  fneg 5, 5
  01a7eb0  fmadds 3, 2, 2, 3
  01a7eb4  lfs 7, 16(30)
  01a7eb8  fmadds 3, 4, 4, 3
  01a7ebc  fsqrts 3, 3
  01a7ec0  fdivs 5, 5, 3
  01a7ec4  fsub 8, 6, 3
  01a7ec8  fsub 9, 3, 6
  01a7ecc  fsub 10, 6, 3
  01a7ed0  fsub 11, 3, 6
  01a7ed4  fsub 12, 6, 3
  01a7ed8  fsub 3, 3, 6
  01a7edc  fmuls 2, 2, 5
  01a7ee0  fmuls 1, 1, 5
  01a7ee4  fmuls 4, 4, 5
  01a7ee8  fsel 5, 8, 6, 2
  01a7eec  fsel 8, 10, 6, 1
  01a7ef0  fsel 6, 12, 6, 4
  01a7ef4  fsel 2, 9, 5, 2
  01a7ef8  fsel 1, 11, 8, 1
  01a7efc  fsel 3, 3, 6, 4
  01a7f00  fadds 2, 7, 2
  01a7f04  stfs 2, 16(4)
  01a7f08  lfs 2, 20(30)
  01a7f0c  fadds 1, 2, 1
  01a7f10  stfs 1, 20(4)
  01a7f14  lfs 1, 24(30)
  01a7f18  fadds 1, 1, 3
  01a7f1c  stfs 1, 24(4)
  01a7f20  lfs 1, 28(30)
  01a7f24  stfs 1, 28(4)
  01a7f28  lwz 3, 64(30)
  01a7f2c  bl 0xf31a8
  01a7f30  nop
  01a7f34  li 3, 5
  01a7f38  stb 3, 32(31)
  01a7f3c  b 0x1a8784
  01a7f40  lis 3, 151
  01a7f44  lwz 4, 0(30)
  01a7f48  addic 3, 3, -25248
  01a7f4c  extsw 4, 4
  01a7f50  bl 0x110b70
  01a7f54  nop
  01a7f58  cmpwi 3, 0
  01a7f5c  bt 2, 0x1a8784
  01a7f60  lwz 3, 4(30)
  01a7f64  cmpwi 3, 1
  01a7f68  bf 2, 0x1a7fb4
  01a7f6c  lis 3, 26
  01a7f70  vspltisw 2, -1
  01a7f74  li 4, 4
  01a7f78  addi 3, 3, 31800
  01a7f7c  li 6, 4
  01a7f80  lis 5, 114
  01a7f84  stb 4, 32(31)
  01a7f88  li 4, -3056
  01a7f8c  vslw 2, 2, 2
  01a7f90  <unknown>
  01a7f94  li 3, 76
  01a7f98  vspltw 3, 3, 0
  01a7f9c  <unknown>
  01a7fa0  vmaddfp 2, 4, 3, 2
  01a7fa4  vctsxs 2, 2, 0
  01a7fa8  vspltw 2, 2, 0
  01a7fac  stvewx 2, 3, 30
  01a7fb0  b 0x1a7fd8
  01a7fb4  lbz 3, 33(31)
  01a7fb8  cmpwi 3, 255
  01a7fbc  bt 2, 0x1a7fd0
  01a7fc0  li 4, 3
  01a7fc4  bl 0x1042ec
  01a7fc8  nop
  01a7fcc  b 0x1a7fd8
  01a7fd0  li 3, 3
  01a7fd4  stb 3, 32(31)
  01a7fd8  li 3, 0
  01a7fdc  li 4, 0
  01a7fe0  lwz 5, 64(30)
  01a7fe4  bl 0x15d12c
  01a7fe8  nop
  01a7fec  b 0x1a8784
  01a7ff0  lfs 1, 20(31)
  01a7ff4  lfs 2, 20(30)
  01a7ff8  lfs 3, 16(31)
  01a7ffc  fsubs 1, 1, 2
  01a8000  lfs 4, 16(30)
  01a8004  lfs 5, 24(31)
  01a8008  fsubs 3, 3, 4
  01a800c  lfs 6, 24(30)
  01a8010  fsubs 5, 5, 6
  01a8014  lis 29, 116
  01a8018  fmuls 1, 1, 1
  01a801c  lis 27, 114
  01a8020  lis 26, 114
  01a8024  fmadds 1, 3, 3, 1
  01a8028  lis 3, 26
  01a802c  addic 5, 30, 8
  01a8030  addi 28, 3, 31800
  01a8034  fmadds 1, 5, 5, 1
  01a8038  addic 3, 1, 116
  01a803c  fsqrts 3, 1
  01a8040  lfs 1, 2132(29)
  01a8044  lfs 5, -3048(27)
  01a8048  lfs 7, -3052(26)
  01a804c  stfs 3, 116(1)
  01a8050  lwz 4, 64(30)
  01a8054  lfs 3, 20(4)
  01a8058  lfs 8, 16(4)
  01a805c  fsubs 2, 3, 2
  01a8060  fsubs 3, 8, 4
  01a8064  lfs 4, 24(4)
  01a8068  fsubs 4, 4, 6
  01a806c  fmuls 2, 2, 2
  01a8070  fmadds 2, 3, 3, 2
  01a8074  fmadds 2, 4, 4, 2
  01a8078  fsqrts 2, 2
  01a807c  stfs 2, 112(1)
  01a8080  lfs 31, 8(28)
  01a8084  lfs 30, 12(28)
  01a8088  lfs 29, 16(28)
  01a808c  fmuls 2, 5, 31
  01a8090  fmuls 3, 5, 30
  01a8094  fmuls 4, 7, 29
  01a8098  bl 0x109c30
  01a809c  nop
  01a80a0  lis 4, 116
  01a80a4  lfs 3, -3048(27)
  01a80a8  addic 3, 1, 112
  01a80ac  lfs 4, -3052(26)
  01a80b0  addic 5, 30, 68
  01a80b4  fmuls 2, 3, 31
  01a80b8  fmuls 3, 3, 30
  01a80bc  lfs 1, 2136(4)
  01a80c0  fmuls 4, 4, 29
  01a80c4  bl 0x109c30
  01a80c8  nop
  01a80cc  lfs 1, 52(30)
  01a80d0  lfs 2, 48(30)
  01a80d4  fmuls 3, 1, 1
  01a80d8  lfs 4, 56(30)
  01a80dc  lfs 5, 116(1)
  01a80e0  lfs 6, 0(28)
  01a80e4  lfs 7, 16(30)
  01a80e8  fmadds 3, 2, 2, 3
  01a80ec  lfs 8, 112(1)
  01a80f0  lwz 3, 64(30)
  01a80f4  fmadds 3, 4, 4, 3
  01a80f8  fsqrts 3, 3
  01a80fc  fneg 8, 8
  01a8100  fdivs 5, 5, 3
  01a8104  fsub 9, 6, 3
  01a8108  fsub 10, 3, 6
  01a810c  fsub 11, 6, 3
  01a8110  fsub 12, 3, 6
  01a8114  fsub 13, 6, 3
  01a8118  fsub 3, 3, 6
  01a811c  fmuls 2, 2, 5
  01a8120  fmuls 1, 1, 5
  01a8124  fmuls 4, 4, 5
  01a8128  fsel 5, 9, 6, 2
  01a812c  fsel 9, 11, 6, 1
  01a8130  fsel 11, 13, 6, 4
  01a8134  fsel 2, 10, 5, 2
  01a8138  fsel 1, 12, 9, 1
  01a813c  fsel 3, 3, 11, 4
  01a8140  fadds 2, 7, 2
  01a8144  stfs 2, 16(31)
  01a8148  lfs 2, 20(30)
  01a814c  fadds 1, 2, 1
  01a8150  stfs 1, 20(31)
  01a8154  lfs 1, 24(30)
  01a8158  fadds 1, 1, 3
  01a815c  stfs 1, 24(31)
  01a8160  lfs 1, 28(30)
  01a8164  stfs 1, 28(31)
  01a8168  lfs 1, 52(30)
  01a816c  lfs 2, 48(30)
  01a8170  fmuls 3, 1, 1
  01a8174  lfs 4, 56(30)
  01a8178  lfs 5, 16(30)
  01a817c  fmadds 3, 2, 2, 3
  01a8180  fmadds 3, 4, 4, 3
  01a8184  fsqrts 3, 3
  01a8188  fdivs 7, 8, 3
  01a818c  fsub 8, 6, 3
  01a8190  fsub 9, 3, 6
  01a8194  fsub 10, 6, 3
  01a8198  fsub 11, 3, 6
  01a819c  fsub 12, 6, 3
  01a81a0  fsub 3, 3, 6
  01a81a4  fmuls 2, 2, 7
  01a81a8  fmuls 1, 1, 7
  01a81ac  fmuls 4, 4, 7
  01a81b0  fsel 7, 8, 6, 2
  01a81b4  fsel 8, 10, 6, 1
  01a81b8  fsel 6, 12, 6, 4
  01a81bc  fsel 2, 9, 7, 2
  01a81c0  fsel 1, 11, 8, 1
  01a81c4  fsel 3, 3, 6, 4
  01a81c8  fadds 2, 5, 2
  01a81cc  stfs 2, 16(3)
  01a81d0  lfs 2, 20(30)
  01a81d4  fadds 1, 2, 1
  01a81d8  stfs 1, 20(3)
  01a81dc  lfs 1, 24(30)
  01a81e0  fadds 1, 1, 3
  01a81e4  stfs 1, 24(3)
  01a81e8  lfs 1, 28(30)
  01a81ec  stfs 1, 28(3)
  01a81f0  lwz 3, 64(30)
  01a81f4  bl 0xf31a8
  01a81f8  nop
  01a81fc  lfs 1, 116(1)
  01a8200  lfs 2, 2132(29)
  01a8204  fsubs 2, 1, 2
  01a8208  lfs 1, 20(28)
  01a820c  fabs 2, 2
  01a8210  fcmpu 0, 2, 1
  01a8214  cror 6, 1, 2
  01a8218  bt 6, 0x1a8784
  01a821c  lis 3, 116
  01a8220  lfs 2, 112(1)
  01a8224  lfs 3, 2136(3)
  01a8228  fsubs 2, 2, 3
  01a822c  fabs 2, 2
  01a8230  fcmpu 0, 2, 1
  01a8234  cror 6, 1, 2
  01a8238  bt 6, 0x1a8784
  01a823c  li 3, 5
  01a8240  stb 3, 32(31)
  01a8244  b 0x1a8784
  01a8248  lfs 1, 20(31)
  01a824c  lfs 2, 20(30)
  01a8250  lfs 3, 16(31)
  01a8254  fsubs 1, 1, 2
  01a8258  lfs 4, 16(30)
  01a825c  lfs 5, 24(31)
  01a8260  fsubs 3, 3, 4
  01a8264  lfs 6, 24(30)
  01a8268  fsubs 5, 5, 6
  01a826c  lbz 3, 188(31)
  01a8270  fmuls 1, 1, 1
  01a8274  cmpwi 3, 1
  01a8278  cmpwi 1, 3, 0
  01a827c  fmadds 1, 3, 3, 1
  01a8280  cmpwi 6, 3, 2
  01a8284  fmadds 22, 5, 5, 1
  01a8288  fsqrts 22, 22
  01a828c  stfs 22, 124(1)
  01a8290  lwz 28, 64(30)
  01a8294  lfs 1, 20(28)
  01a8298  lfs 3, 16(28)
  01a829c  fsubs 1, 1, 2
  01a82a0  fsubs 2, 3, 4
  01a82a4  lfs 3, 24(28)
  01a82a8  fsubs 3, 3, 6
  01a82ac  fmuls 1, 1, 1
  01a82b0  fmadds 1, 2, 2, 1
  01a82b4  fmadds 23, 3, 3, 1
  01a82b8  fsqrts 23, 23
  01a82bc  stfs 23, 120(1)
  01a82c0  bt 1, 0x1a82cc
  01a82c4  bf 5, 0x1a82d0
  01a82c8  b 0x1a8310
  01a82cc  bf 25, 0x1a8398
  01a82d0  lis 3, 26
  01a82d4  lis 4, 116
  01a82d8  fmr 25, 24
  01a82dc  addi 3, 3, 31800
  01a82e0  lis 5, 116
  01a82e4  li 28, 1
  01a82e8  li 29, 30
  01a82ec  lfs 26, 8(3)
  01a82f0  lfs 28, 16(3)
  01a82f4  fmr 29, 26
  01a82f8  lfs 22, 2140(4)
  01a82fc  lfs 23, 2144(5)
  01a8300  fmr 31, 28
  01a8304  lfs 27, 12(3)
  01a8308  fmr 30, 29
  01a830c  b 0x1a8438
  01a8310  lis 3, 116
  01a8314  lis 4, 116
  01a8318  lis 6, 116
  01a831c  lis 5, 116
  01a8320  lis 7, 116
  01a8324  lwz 3, 2188(3)
  01a8328  lis 8, 116
  01a832c  lwz 4, 2192(4)
  01a8330  extsw 3, 3
  01a8334  std 3, 128(1)
  01a8338  extsw 3, 4
  01a833c  lis 4, 116
  01a8340  lfs 25, 68(28)
  01a8344  li 28, 2
  01a8348  lfs 26, 2156(4)
  01a834c  lis 4, 116
  01a8350  lfs 27, 2160(6)
  01a8354  lfs 28, 2164(5)
  01a8358  lfs 29, 2168(7)
  01a835c  lfs 30, 2172(8)
  01a8360  lfs 31, 2176(4)
  01a8364  lfd 1, 128(1)
  01a8368  std 3, 128(1)
  01a836c  fcfid 1, 1
  01a8370  frsp 1, 1
  01a8374  lfd 2, 128(1)
  01a8378  fcfid 2, 2
  01a837c  frsp 2, 2
  01a8380  bl 0xfcbe8
  01a8384  nop
  01a8388  bl 0x502758
  01a838c  nop
  01a8390  ori 29, 3, 0
  01a8394  b 0x1a8438
  01a8398  lis 3, 116
  01a839c  lis 4, 116
  01a83a0  lis 6, 116
  01a83a4  lis 5, 116
  01a83a8  lis 8, 116
  01a83ac  lwz 3, 2180(3)
  01a83b0  lis 7, 116
  01a83b4  lwz 4, 2184(4)
  01a83b8  lis 9, 116
  01a83bc  extsw 3, 3
  01a83c0  li 28, 1
  01a83c4  std 3, 128(1)
  01a83c8  extsw 3, 4
  01a83cc  lis 4, 116
  01a83d0  lfs 22, 2140(4)
  01a83d4  lis 4, 116
  01a83d8  lfs 23, 2144(6)
  01a83dc  lis 6, 116
  01a83e0  lfs 25, 2152(5)
  01a83e4  lfs 24, 2148(8)
  01a83e8  lis 5, 116
  01a83ec  lfs 26, 2156(7)
  01a83f0  lis 7, 116
  01a83f4  lfs 27, 2160(4)
  01a83f8  lfs 28, 2164(6)
  01a83fc  lfs 29, 2168(9)
  01a8400  lfs 30, 2172(5)
  01a8404  lfd 1, 128(1)
  01a8408  std 3, 128(1)
  01a840c  lfs 31, 2176(7)
  01a8410  fcfid 1, 1
  01a8414  lfd 2, 128(1)
  01a8418  fcfid 2, 2
  01a841c  frsp 1, 1
  01a8420  frsp 2, 2
  01a8424  bl 0xfcbe8
  01a8428  nop
  01a842c  bl 0x502758
  01a8430  nop
  01a8434  ori 29, 3, 0
  01a8438  lis 27, 114
  01a843c  lis 26, 114
  01a8440  fmr 1, 22
  01a8444  addic 3, 1, 124
  01a8448  addic 5, 30, 8
  01a844c  lfs 3, -3048(27)
  01a8450  lfs 4, -3052(26)
  01a8454  fmuls 2, 3, 26
  01a8458  fmuls 3, 3, 27
  01a845c  fmuls 4, 4, 28
  01a8460  bl 0x109c30
  01a8464  nop
  01a8468  lfs 3, -3048(27)
  01a846c  lfs 4, -3052(26)
  01a8470  addic 3, 1, 120
  01a8474  fmuls 2, 3, 26
  01a8478  addic 5, 30, 68
  01a847c  fmr 1, 23
  01a8480  fmuls 3, 3, 27
  01a8484  fmuls 4, 4, 28
  01a8488  bl 0x109c30
  01a848c  nop
  01a8490  lis 3, 26
  01a8494  lfs 3, -3048(27)
  01a8498  addic 5, 30, 12
  01a849c  addi 25, 3, 31800
  01a84a0  fmr 1, 24
  01a84a4  addic 3, 31, 68
  01a84a8  lfs 2, 24(25)
  01a84ac  lfs 4, -3052(26)
  01a84b0  fmuls 29, 29, 2
  01a84b4  fmuls 30, 30, 2
  01a84b8  fmuls 31, 31, 2
  01a84bc  fmuls 2, 29, 3
  01a84c0  fmuls 3, 30, 3
  01a84c4  fmuls 4, 31, 4
  01a84c8  bl 0x109c30
  01a84cc  nop
  01a84d0  lwz 3, 64(30)
  01a84d4  lfs 3, -3048(27)
  01a84d8  fmr 1, 25
  01a84dc  lfs 4, -3052(26)
  01a84e0  addic 5, 30, 72
  01a84e4  fmuls 2, 29, 3
  01a84e8  addic 3, 3, 68
  01a84ec  fmuls 3, 30, 3
  01a84f0  fmuls 4, 31, 4
  01a84f4  bl 0x109c30
  01a84f8  nop
  01a84fc  lfs 1, 52(30)
  01a8500  lfs 2, 48(30)
  01a8504  fmuls 3, 1, 1
  01a8508  lfs 4, 56(30)
  01a850c  lfs 5, 124(1)
  01a8510  lfs 6, 0(25)
  01a8514  lfs 7, 16(30)
  01a8518  fmadds 3, 2, 2, 3
  01a851c  lfs 8, 120(1)
  01a8520  lwz 3, 64(30)
  01a8524  fmadds 3, 4, 4, 3
  01a8528  fsqrts 3, 3
  01a852c  fneg 8, 8
  01a8530  fdivs 5, 5, 3
  01a8534  fsub 9, 6, 3
  01a8538  fsub 10, 3, 6
  01a853c  fsub 11, 6, 3
  01a8540  fsub 12, 3, 6
  01a8544  fsub 13, 6, 3
  01a8548  fsub 3, 3, 6
  01a854c  fmuls 2, 2, 5
  01a8550  fmuls 1, 1, 5
  01a8554  fmuls 4, 4, 5
  01a8558  fsel 5, 9, 6, 2
  01a855c  fsel 9, 11, 6, 1
  01a8560  fsel 11, 13, 6, 4
  01a8564  fsel 2, 10, 5, 2
  01a8568  fsel 1, 12, 9, 1
  01a856c  fsel 3, 3, 11, 4
  01a8570  fadds 2, 7, 2
  01a8574  stfs 2, 16(31)
  01a8578  lfs 2, 20(30)
  01a857c  fadds 1, 2, 1
  01a8580  stfs 1, 20(31)
  01a8584  lfs 1, 24(30)
  01a8588  fadds 1, 1, 3
  01a858c  stfs 1, 24(31)
  01a8590  lfs 1, 28(30)
  01a8594  stfs 1, 28(31)
  01a8598  lfs 1, 52(30)
  01a859c  lfs 2, 48(30)
  01a85a0  fmuls 3, 1, 1
  01a85a4  lfs 4, 56(30)
  01a85a8  lfs 5, 16(30)
  01a85ac  fmadds 3, 2, 2, 3
  01a85b0  fmadds 3, 4, 4, 3
  01a85b4  fsqrts 3, 3
  01a85b8  fdivs 7, 8, 3
  01a85bc  fsub 8, 6, 3
  01a85c0  fsub 9, 3, 6
  01a85c4  fsub 10, 6, 3
  01a85c8  fsub 11, 3, 6
  01a85cc  fsub 12, 6, 3
  01a85d0  fsub 3, 3, 6
  01a85d4  fmuls 2, 2, 7
  01a85d8  fmuls 1, 1, 7
  01a85dc  fmuls 4, 4, 7
  01a85e0  fsel 7, 8, 6, 2
  01a85e4  fsel 8, 10, 6, 1
  01a85e8  fsel 6, 12, 6, 4
  01a85ec  fsel 2, 9, 7, 2
  01a85f0  fsel 1, 11, 8, 1
  01a85f4  fsel 3, 3, 6, 4
  01a85f8  fadds 2, 5, 2
  01a85fc  stfs 2, 16(3)
  01a8600  lfs 2, 20(30)
  01a8604  fadds 1, 2, 1
  01a8608  stfs 1, 20(3)
  01a860c  lfs 1, 24(30)
  01a8610  fadds 1, 1, 3
  01a8614  stfs 1, 24(3)
  01a8618  lfs 1, 28(30)
  01a861c  stfs 1, 28(3)
  01a8620  lwz 3, 64(30)
  01a8624  bl 0xf31a8
  01a8628  nop
  01a862c  addic 3, 30, 76
  01a8630  bl 0x4fff60
  01a8634  nop
  01a8638  cmpwi 3, 0
  01a863c  bt 2, 0x1a8784
  01a8640  extsw 3, 29
  01a8644  lis 4, 114
  01a8648  std 3, 128(1)
  01a864c  lis 3, 26
  01a8650  stb 28, 188(31)
  01a8654  addi 3, 3, 31800
  01a8658  lis 5, 116
  01a865c  lfs 1, 28(3)
  01a8660  lfs 2, -3056(4)
  01a8664  lfd 3, 128(1)
  01a8668  li 4, 76
  01a866c  fcfid 3, 3
  01a8670  frsp 3, 3
  01a8674  fadds 1, 3, 1
  01a8678  fmuls 1, 2, 1
  01a867c  fctiwz 1, 1
  01a8680  stfiwx 1, 4, 30
  01a8684  lfs 1, 124(1)
  01a8688  lfs 2, 2140(5)
  01a868c  fsubs 2, 1, 2
  01a8690  lfs 1, 20(3)
  01a8694  fabs 2, 2
  01a8698  fcmpu 0, 2, 1
  01a869c  cror 6, 1, 2
  01a86a0  bt 6, 0x1a8784
  01a86a4  lis 3, 116
  01a86a8  lfs 2, 120(1)
  01a86ac  lfs 3, 2144(3)
  01a86b0  fsubs 2, 2, 3
  01a86b4  fabs 2, 2
  01a86b8  fcmpu 0, 2, 1
  01a86bc  cror 6, 1, 2
  01a86c0  bt 6, 0x1a8784
  01a86c4  li 3, 5
  01a86c8  stb 3, 32(31)
  01a86cc  b 0x1a8784
  01a86d0  lis 3, 230
  01a86d4  lwz 3, 8136(3)
  01a86d8  cmpwi 3, 0
  01a86dc  bt 2, 0x1a8784
  01a86e0  li 3, 1
  01a86e4  li 4, 0
  01a86e8  stb 3, 32(31)
  01a86ec  stb 4, 188(31)
  01a86f0  lfs 1, 16(30)
  01a86f4  stfs 1, 16(31)
  01a86f8  lfs 2, 20(30)
  01a86fc  stfs 2, 20(31)
  01a8700  lfs 2, 24(30)
  01a8704  stfs 2, 24(31)
  01a8708  lfs 2, 28(30)
  01a870c  stfs 2, 28(31)
  01a8710  lfs 2, 32(30)
  01a8714  stfs 2, 64(31)
  01a8718  lfs 2, 36(30)
  01a871c  stfs 2, 68(31)
  01a8720  lfs 2, 40(30)
  01a8724  lwz 3, 64(30)
  01a8728  stfs 2, 72(31)
  01a872c  lfs 2, 44(30)
  01a8730  stfs 2, 76(31)
  01a8734  stfs 1, 16(3)
  01a8738  lfs 1, 20(31)
  01a873c  stfs 1, 20(3)
  01a8740  lfs 1, 24(31)
  01a8744  stfs 1, 24(3)
  01a8748  lfs 1, 28(31)
  01a874c  stfs 1, 28(3)
  01a8750  lwz 3, 64(30)
  01a8754  lfs 1, 64(31)
  01a8758  stfs 1, 64(3)
  01a875c  lfs 1, 68(31)
  01a8760  stfs 1, 68(3)
  01a8764  lfs 1, 72(31)
  01a8768  stfs 1, 72(3)
  01a876c  lfs 1, 76(31)
  01a8770  stfs 1, 76(3)
  01a8774  stw 4, 8(30)
  01a8778  stw 4, 12(30)
  01a877c  stw 4, 68(30)
  01a8780  stw 4, 72(30)
  01a8784  ld 0, 304(1)
  01a8788  mtlr 0
  01a878c  lfd 22, 208(1)
  01a8790  lfd 23, 216(1)
  01a8794  lfd 24, 224(1)
  01a8798  lfd 25, 232(1)
  01a879c  lfd 26, 240(1)
  01a87a0  lfd 27, 248(1)
  01a87a4  lfd 28, 256(1)
  01a87a8  lfd 29, 264(1)
  01a87ac  lfd 30, 272(1)
  01a87b0  lfd 31, 280(1)
  01a87b4  ld 25, 152(1)
  01a87b8  ld 26, 160(1)
  01a87bc  ld 27, 168(1)
  01a87c0  ld 28, 176(1)
  01a87c4  ld 29, 184(1)
  01a87c8  ld 30, 192(1)
  01a87cc  ld 31, 200(1)
  01a87d0  addi 1, 1, 288
  01a87d4  blr
