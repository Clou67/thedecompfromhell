# game/update/moby924.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M924_004b7b74:   # 0x4b7b74, 0x14 bytes
  04b7b74  lis 3, 143
  04b7b78  lis 4, 1
  04b7b7c  addic 3, 3, 17948
  04b7b80  stw 4, 72(3)
  04b7b84  blr

M924_004b7b88:   # 0x4b7b88, 0xf4 bytes
  04b7b88  stdu 1, -160(1)
  04b7b8c  mflr 0
  04b7b90  std 0, 176(1)
  04b7b94  std 31, 152(1)
  04b7b98  lis 4, 161
  04b7b9c  ori 31, 3, 0
  04b7ba0  lwz 3, 1800(4)
  04b7ba4  std 30, 144(1)
  04b7ba8  std 29, 136(1)
  04b7bac  std 28, 128(1)
  04b7bb0  std 27, 120(1)
  04b7bb4  cmpwi 3, 2
  04b7bb8  bf 2, 0x4b7c58
  04b7bbc  lis 3, 151
  04b7bc0  lbz 3, -16268(3)
  04b7bc4  cmpwi 3, 0
  04b7bc8  bt 2, 0x4b7c58
  04b7bcc  lis 28, 150
  04b7bd0  li 27, 0
  04b7bd4  addic 28, 28, -12976
  04b7bd8  lhz 3, 68(28)
  04b7bdc  extsh 4, 3
  04b7be0  cmpwi 4, 0
  04b7be4  bf 1, 0x4b7c58
  04b7be8  lis 29, 162
  04b7bec  ori 30, 28, 0
  04b7bf0  addic 29, 29, -16512
  04b7bf4  lwz 4, 376(30)
  04b7bf8  lhz 5, 166(31)
  04b7bfc  extsh 5, 5
  04b7c00  lhz 6, 166(4)
  04b7c04  extsh 6, 6
  04b7c08  cmpw 6, 5
  04b7c0c  bf 2, 0x4b7c44
  04b7c10  lbz 5, 1(29)
  04b7c14  cmpwi 5, 0
  04b7c18  bf 2, 0x4b7c44
  04b7c1c  ori 3, 4, 0
  04b7c20  li 4, 0
  04b7c24  ori 5, 29, 0
  04b7c28  bl 0xf0ea8
  04b7c2c  nop
  04b7c30  lis 4, 16432
  04b7c34  lhz 3, 68(28)
  04b7c38  stw 4, 32(29)
  04b7c3c  stw 4, 36(29)
  04b7c40  stw 4, 40(29)
  04b7c44  extsh 4, 3
  04b7c48  addic 27, 27, 1
  04b7c4c  addic 30, 30, 4
  04b7c50  cmpw 27, 4
  04b7c54  bt 0, 0x4b7bf4
  04b7c58  ld 0, 176(1)
  04b7c5c  mtlr 0
  04b7c60  ld 27, 120(1)
  04b7c64  ld 28, 128(1)
  04b7c68  ld 29, 136(1)
  04b7c6c  ld 30, 144(1)
  04b7c70  ld 31, 152(1)
  04b7c74  addi 1, 1, 160
  04b7c78  blr

UpdateMoby_924:   # 0x4b7ce0, 0xce8 bytes
  04b7ce0  stdu 1, -336(1)
  04b7ce4  mflr 0
  04b7ce8  std 0, 352(1)
  04b7cec  stfd 27, 296(1)
  04b7cf0  stfd 28, 304(1)
  04b7cf4  stfd 29, 312(1)
  04b7cf8  stfd 30, 320(1)
  04b7cfc  stfd 31, 328(1)
  04b7d00  std 31, 288(1)
  04b7d04  lis 4, 161
  04b7d08  ori 31, 3, 0
  04b7d0c  std 30, 280(1)
  04b7d10  lwz 4, 1800(4)
  04b7d14  lwz 30, 120(3)
  04b7d18  std 29, 272(1)
  04b7d1c  std 28, 264(1)
  04b7d20  std 27, 256(1)
  04b7d24  std 26, 248(1)
  04b7d28  cmpwi 4, 2
  04b7d2c  bf 2, 0x4b7dc8
  04b7d30  lis 3, 151
  04b7d34  lbz 3, -16268(3)
  04b7d38  cmpwi 3, 0
  04b7d3c  bt 2, 0x4b7dc8
  04b7d40  lis 28, 150
  04b7d44  li 29, 0
  04b7d48  addic 28, 28, -12976
  04b7d4c  lhz 4, 68(28)
  04b7d50  extsh 3, 4
  04b7d54  cmpwi 3, 0
  04b7d58  bf 1, 0x4b7dc8
  04b7d5c  lis 27, 162
  04b7d60  ori 26, 28, 0
  04b7d64  addic 27, 27, -16512
  04b7d68  lwz 3, 376(26)
  04b7d6c  lhz 5, 166(31)
  04b7d70  extsh 5, 5
  04b7d74  lhz 6, 166(3)
  04b7d78  extsh 6, 6
  04b7d7c  cmpw 6, 5
  04b7d80  bf 2, 0x4b7db4
  04b7d84  lbz 5, 1(27)
  04b7d88  cmpwi 5, 0
  04b7d8c  bf 2, 0x4b7db4
  04b7d90  li 4, 0
  04b7d94  ori 5, 27, 0
  04b7d98  bl 0xf0ea8
  04b7d9c  nop
  04b7da0  lis 3, 16432
  04b7da4  lhz 4, 68(28)
  04b7da8  stw 3, 32(27)
  04b7dac  stw 3, 36(27)
  04b7db0  stw 3, 40(27)
  04b7db4  extsh 3, 4
  04b7db8  addic 29, 29, 1
  04b7dbc  addic 26, 26, 4
  04b7dc0  cmpw 29, 3
  04b7dc4  bt 0, 0x4b7d68
  04b7dc8  lbz 3, 32(31)
  04b7dcc  cmpwi 3, 1
  04b7dd0  cmpwi 1, 3, 3
  04b7dd4  cmpwi 6, 3, 2
  04b7dd8  cmpwi 7, 3, 0
  04b7ddc  bt 1, 0x4b7df0
  04b7de0  cmpwi 3, -1
  04b7de4  bf 1, 0x4b8108
  04b7de8  bf 29, 0x4b7dfc
  04b7dec  b 0x4b7ef4
  04b7df0  bf 25, 0x4b803c
  04b7df4  bf 5, 0x4b802c
  04b7df8  b 0x4b8108
  04b7dfc  lis 3, 151
  04b7e00  addic 3, 3, -13812
  04b7e04  lbz 3, 15(3)
  04b7e08  cmpwi 3, 0
  04b7e0c  bt 2, 0x4b7e20
  04b7e10  ori 3, 31, 0
  04b7e14  bl 0xefb38
  04b7e18  nop
  04b7e1c  b 0x4b898c
  04b7e20  lis 3, 165
  04b7e24  addic 5, 3, 17860
  04b7e28  lhz 3, 178(31)
  04b7e2c  extsh 4, 3
  04b7e30  lbzx 5, 5, 4
  04b7e34  cmpwi 5, 0
  04b7e38  bf 2, 0x4b7e80
  04b7e3c  lis 6, 151
  04b7e40  lis 5, 161
  04b7e44  srawi 4, 4, 5
  04b7e48  addic 5, 5, -13028
  04b7e4c  sldi 4, 4, 2
  04b7e50  lwz 6, -25488(6)
  04b7e54  clrlwi 3, 3, 27
  04b7e58  addc 4, 4, 5
  04b7e5c  slwi 5, 6, 8
  04b7e60  clrldi 4, 4, 32
  04b7e64  extsw 5, 5
  04b7e68  li 6, 1
  04b7e6c  slw 3, 6, 3
  04b7e70  lwzx 4, 4, 5
  04b7e74  and 3, 4, 3
  04b7e78  cmpwi 3, 0
  04b7e7c  bt 2, 0x4b7e90
  04b7e80  ori 3, 31, 0
  04b7e84  bl 0xefb38
  04b7e88  nop
  04b7e8c  b 0x4b898c
  04b7e90  lwz 3, 68(30)
  04b7e94  cmpwi 3, -1
  04b7e98  bf 2, 0x4b7eac
  04b7e9c  ori 3, 31, 0
  04b7ea0  bl 0xefb38
  04b7ea4  nop
  04b7ea8  b 0x4b898c
  04b7eac  lwz 3, 72(30)
  04b7eb0  cmpwi 3, -1
  04b7eb4  bf 2, 0x4b7ec8
  04b7eb8  ori 3, 31, 0
  04b7ebc  bl 0xefb38
  04b7ec0  nop
  04b7ec4  b 0x4b898c
  04b7ec8  lis 4, 102
  04b7ecc  ori 3, 31, 0
  04b7ed0  addic 5, 4, -29572
  04b7ed4  ori 4, 30, 0
  04b7ed8  stw 5, 32(30)
  04b7edc  bl 0x4d3720
  04b7ee0  nop
  04b7ee4  li 3, 1
  04b7ee8  stb 3, 32(31)
  04b7eec  stb 3, 8(30)
  04b7ef0  b 0x4b8108
  04b7ef4  lbz 3, 8(30)
  04b7ef8  cmpwi 3, 1
  04b7efc  bf 2, 0x4b7f98
  04b7f00  lis 3, 151
  04b7f04  lwz 4, 64(30)
  04b7f08  addic 3, 3, -25376
  04b7f0c  extsw 4, 4
  04b7f10  addic 3, 3, 128
  04b7f14  bl 0x110b70
  04b7f18  nop
  04b7f1c  cmpwi 3, 0
  04b7f20  bt 2, 0x4b7f98
  04b7f24  lis 4, 151
  04b7f28  lis 3, 161
  04b7f2c  addic 5, 3, -13692
  04b7f30  lbz 3, 176(31)
  04b7f34  lwz 4, -25488(4)
  04b7f38  addc 5, 3, 5
  04b7f3c  slwi 4, 4, 4
  04b7f40  clrldi 5, 5, 32
  04b7f44  extsw 4, 4
  04b7f48  lbzx 4, 5, 4
  04b7f4c  cmpwi 4, 255
  04b7f50  bt 2, 0x4b7f88
  04b7f54  bl 0xf1e50
  04b7f58  nop
  04b7f5c  lis 3, 165
  04b7f60  lwz 4, 68(30)
  04b7f64  slwi 4, 4, 7
  04b7f68  lwz 3, 7128(3)
  04b7f6c  addc 3, 3, 4
  04b7f70  addic 4, 3, 48
  04b7f74  addic 5, 3, 112
  04b7f78  clrldi 3, 4, 32
  04b7f7c  clrldi 4, 5, 32
  04b7f80  bl 0x151e70
  04b7f84  nop
  04b7f88  lis 3, 75
  04b7f8c  addi 3, 3, 31868
  04b7f90  lfs 1, 0(3)
  04b7f94  b 0x4b7fa4
  04b7f98  lis 3, 75
  04b7f9c  addi 3, 3, 31868
  04b7fa0  lfs 1, 4(3)
  04b7fa4  ori 3, 31, 0
  04b7fa8  ori 4, 30, 0
  04b7fac  stfs 1, 12(30)
  04b7fb0  bl 0x4d3870
  04b7fb4  nop
  04b7fb8  cmpwi 3, 0
  04b7fbc  bt 2, 0x4b8108
  04b7fc0  lis 3, 165
  04b7fc4  lwz 6, 72(30)
  04b7fc8  lis 4, 150
  04b7fcc  slwi 6, 6, 7
  04b7fd0  addic 4, 4, -12976
  04b7fd4  li 5, 1
  04b7fd8  lwz 3, 7128(3)
  04b7fdc  addc 3, 3, 6
  04b7fe0  stb 5, 74(4)
  04b7fe4  li 6, 2
  04b7fe8  clrldi 3, 3, 32
  04b7fec  li 5, 0
  04b7ff0  lfs 1, 48(3)
  04b7ff4  stfs 1, 16(4)
  04b7ff8  lfs 1, 52(3)
  04b7ffc  stfs 1, 20(4)
  04b8000  lfs 1, 56(3)
  04b8004  stfs 1, 24(4)
  04b8008  lfs 1, 60(3)
  04b800c  stw 5, 44(4)
  04b8010  stfs 1, 28(4)
  04b8014  stw 5, 36(4)
  04b8018  stw 5, 32(4)
  04b801c  lfs 1, 120(3)
  04b8020  stfs 1, 40(4)
  04b8024  stb 6, 32(31)
  04b8028  b 0x4b8108
  04b802c  ori 3, 31, 0
  04b8030  bl 0xefb38
  04b8034  nop
  04b8038  b 0x4b898c
  04b803c  lis 3, 161
  04b8040  lwz 3, 1800(3)
  04b8044  cmpwi 3, 2
  04b8048  bt 2, 0x4b8108
  04b804c  li 3, 1
  04b8050  stb 3, 32(31)
  04b8054  lhz 3, 4(30)
  04b8058  cmpwi 3, 4
  04b805c  bf 2, 0x4b8108
  04b8060  li 3, 15
  04b8064  bl 0x112c20
  04b8068  nop
  04b806c  li 3, 15
  04b8070  bl 0x112af0
  04b8074  nop
  04b8078  lhz 3, 178(31)
  04b807c  lis 5, 151
  04b8080  lis 4, 161
  04b8084  extsh 6, 3
  04b8088  addic 4, 4, -13028
  04b808c  srawi 6, 6, 5
  04b8090  lwz 5, -25488(5)
  04b8094  lis 7, 165
  04b8098  sldi 6, 6, 2
  04b809c  slwi 5, 5, 8
  04b80a0  addc 4, 6, 4
  04b80a4  extsw 5, 5
  04b80a8  clrldi 4, 4, 32
  04b80ac  extsh 6, 3
  04b80b0  clrlwi 8, 3, 27
  04b80b4  srawi 6, 6, 5
  04b80b8  li 9, 1
  04b80bc  addic 7, 7, 19920
  04b80c0  sldi 6, 6, 2
  04b80c4  lwzx 10, 4, 5
  04b80c8  slw 8, 9, 8
  04b80cc  clrlwi 3, 3, 27
  04b80d0  or 8, 10, 8
  04b80d4  slw 9, 9, 3
  04b80d8  lwzx 10, 7, 6
  04b80dc  li 3, 0
  04b80e0  stwx 8, 4, 5
  04b80e4  or 5, 10, 9
  04b80e8  li 4, -1
  04b80ec  stwx 5, 7, 6
  04b80f0  bl 0xe8aa4
  04b80f4  nop
  04b80f8  ori 3, 31, 0
  04b80fc  bl 0xefb38
  04b8100  nop
  04b8104  b 0x4b898c
  04b8108  lis 3, 75
  04b810c  lbz 4, 83(31)
  04b8110  addi 3, 3, 31868
  04b8114  cmpwi 4, 0
  04b8118  lfs 31, 8(3)
  04b811c  bf 2, 0x4b8924
  04b8120  lis 29, 151
  04b8124  lfs 2, 20(31)
  04b8128  addic 29, 29, -25376
  04b812c  lfs 1, 16(31)
  04b8130  lis 3, 75
  04b8134  lfs 3, 132(29)
  04b8138  lfs 4, 128(29)
  04b813c  fsubs 3, 2, 3
  04b8140  fsubs 4, 1, 4
  04b8144  addi 3, 3, 31868
  04b8148  fmuls 3, 3, 3
  04b814c  fmadds 3, 4, 4, 3
  04b8150  lfs 4, 12(3)
  04b8154  fsqrts 3, 3
  04b8158  fcmpu 0, 3, 4
  04b815c  cror 6, 1, 2
  04b8160  bt 6, 0x4b83d0
  04b8164  lfs 3, 208(29)
  04b8168  lis 3, 75
  04b816c  lfs 4, 212(29)
  04b8170  fsubs 1, 3, 1
  04b8174  fsubs 2, 4, 2
  04b8178  addi 3, 3, 31868
  04b817c  lis 4, 115
  04b8180  addic 4, 4, 22784
  04b8184  fabs 5, 1
  04b8188  fabs 6, 2
  04b818c  stfs 1, 136(1)
  04b8190  stfs 2, 140(1)
  04b8194  lfs 3, 72(31)
  04b8198  fsubs 1, 5, 6
  04b819c  stfs 1, 144(1)
  04b81a0  lwz 5, 136(1)
  04b81a4  lfs 4, 16(3)
  04b81a8  lfs 1, 136(1)
  04b81ac  lwz 3, 140(1)
  04b81b0  lfs 2, 140(1)
  04b81b4  lwz 6, 144(1)
  04b81b8  rlwinm 3, 3, 3, 29, 29
  04b81bc  fabs 7, 2
  04b81c0  lfs 2, 144(1)
  04b81c4  fabs 1, 1
  04b81c8  rlwimi 3, 6, 2, 30, 30
  04b81cc  fsub 8, 2, 4
  04b81d0  rlwimi 3, 5, 4, 28, 28
  04b81d4  fsub 9, 2, 4
  04b81d8  ori 5, 4, 0
  04b81dc  rlwimi 5, 3, 2, 26, 28
  04b81e0  slwi 3, 3, 2
  04b81e4  clrldi 5, 5, 32
  04b81e8  fsel 6, 8, 1, 6
  04b81ec  lfsx 1, 4, 3
  04b81f0  lfs 2, 4(5)
  04b81f4  fsel 5, 9, 7, 5
  04b81f8  fcmpu 0, 6, 4
  04b81fc  bt 1, 0x4b8204
  04b8200  b 0x4b8324
  04b8204  fsubs 7, 5, 6
  04b8208  fadds 5, 5, 6
  04b820c  addic 3, 1, 16
  04b8210  li 6, 2
  04b8214  addic 4, 3, 196
  04b8218  addic 5, 3, 212
  04b821c  mtctr 6
  04b8220  fdivs 5, 7, 5
  04b8224  fmuls 6, 5, 5
  04b8228  stfs 5, 224(1)
  04b822c  stfs 5, 216(1)
  04b8230  stfs 5, 220(1)
  04b8234  stfs 5, 212(1)
  04b8238  lfs 8, 224(1)
  04b823c  lfs 9, 216(1)
  04b8240  lfs 10, 220(1)
  04b8244  fmuls 7, 6, 6
  04b8248  fmuls 9, 9, 6
  04b824c  fmuls 8, 8, 7
  04b8250  fmuls 5, 7, 7
  04b8254  fmuls 7, 10, 7
  04b8258  stfs 9, 216(1)
  04b825c  fmuls 6, 8, 6
  04b8260  stfs 7, 220(1)
  04b8264  stfs 6, 224(1)
  04b8268  lfs 6, 196(3)
  04b826c  fmuls 6, 6, 5
  04b8270  stfs 6, 212(3)
  04b8274  lfs 6, 4(4)
  04b8278  addic 3, 3, 8
  04b827c  addic 4, 4, 8
  04b8280  fmuls 6, 6, 5
  04b8284  stfs 6, 4(5)
  04b8288  addic 5, 5, 8
  04b828c  bdnz 0x4b8268
  04b8290  li 5, 4
  04b8294  ori 3, 1, 0
  04b8298  mtctr 5
  04b829c  lis 4, 115
  04b82a0  addic 5, 3, 212
  04b82a4  addic 4, 4, 22752
  04b82a8  ori 7, 5, 0
  04b82ac  lfs 5, 212(3)
  04b82b0  lfs 6, 0(4)
  04b82b4  fmuls 5, 5, 6
  04b82b8  lfs 6, 4(4)
  04b82bc  addic 4, 4, 8
  04b82c0  stfs 5, 212(3)
  04b82c4  lfs 5, 4(5)
  04b82c8  addic 3, 3, 8
  04b82cc  fmuls 5, 5, 6
  04b82d0  stfs 5, 4(5)
  04b82d4  addic 5, 5, 8
  04b82d8  bdnz 0x4b82ac
  04b82dc  ori 3, 1, 0
  04b82e0  mtctr 6
  04b82e4  lfs 5, 212(3)
  04b82e8  fadds 4, 4, 5
  04b82ec  lfs 5, 4(7)
  04b82f0  addic 3, 3, 16
  04b82f4  lfs 6, 8(7)
  04b82f8  lfs 7, 12(7)
  04b82fc  addic 7, 7, 16
  04b8300  fadds 4, 4, 5
  04b8304  fadds 4, 4, 6
  04b8308  fadds 4, 4, 7
  04b830c  bdnz 0x4b82e4
  04b8310  lis 3, 75
  04b8314  addi 3, 3, 31868
  04b8318  lfs 5, 20(3)
  04b831c  fadds 4, 4, 5
  04b8320  fmadds 4, 4, 1, 2
  04b8324  fmr 1, 3
  04b8328  fmr 2, 4
  04b832c  bl 0x5026a0
  04b8330  nop
  04b8334  lis 3, 75
  04b8338  addi 3, 3, 31868
  04b833c  lfs 2, 24(3)
  04b8340  fcmpu 0, 1, 2
  04b8344  cror 6, 1, 2
  04b8348  bt 6, 0x4b83d0
  04b834c  lfs 1, 260(29)
  04b8350  lfs 2, 256(29)
  04b8354  fmuls 1, 1, 1
  04b8358  lfs 3, 264(29)
  04b835c  lis 3, 75
  04b8360  addi 3, 3, 31868
  04b8364  fmadds 1, 2, 2, 1
  04b8368  lfs 2, 28(3)
  04b836c  fmadds 1, 3, 3, 1
  04b8370  fsqrts 1, 1
  04b8374  fcmpu 0, 1, 2
  04b8378  cror 6, 0, 2
  04b837c  bt 6, 0x4b83c0
  04b8380  lis 3, 75
  04b8384  li 4, 32
  04b8388  vspltisw 2, -1
  04b838c  addi 3, 3, 31868
  04b8390  lis 5, 114
  04b8394  li 6, -3056
  04b8398  vslw 2, 2, 2
  04b839c  lvlx 3, 4, 3
  04b83a0  li 3, 352
  04b83a4  vspltw 3, 3, 0
  04b83a8  lvlx 4, 6, 5
  04b83ac  vmaddfp 2, 4, 3, 2
  04b83b0  vctsxs 2, 2, 0
  04b83b4  vspltw 2, 2, 0
  04b83b8  stvewx 2, 3, 30
  04b83bc  b 0x4b8404
  04b83c0  addic 3, 30, 352
  04b83c4  bl 0x4fff60
  04b83c8  nop
  04b83cc  b 0x4b8404
  04b83d0  lwz 3, 352(30)
  04b83d4  cmpwi 3, 0
  04b83d8  bt 2, 0x4b8404
  04b83dc  li 3, 0
  04b83e0  stw 3, 352(30)
  04b83e4  lfs 1, 208(29)
  04b83e8  stfs 1, 336(30)
  04b83ec  lfs 1, 212(29)
  04b83f0  stfs 1, 340(30)
  04b83f4  lfs 1, 216(29)
  04b83f8  stfs 1, 344(30)
  04b83fc  lfs 1, 220(29)
  04b8400  stfs 1, 348(30)
  04b8404  addic 3, 30, 356
  04b8408  bl 0x4fff60
  04b840c  nop
  04b8410  cmpwi 3, 0
  04b8414  bt 2, 0x4b84cc
  04b8418  lis 3, 75
  04b841c  addi 28, 3, 31868
  04b8420  lfs 1, 36(28)
  04b8424  lfs 2, 40(28)
  04b8428  bl 0xfcbe8
  04b842c  nop
  04b8430  lis 3, 114
  04b8434  lfs 2, -3056(3)
  04b8438  fmuls 1, 1, 2
  04b843c  bl 0x502758
  04b8440  nop
  04b8444  stw 3, 356(30)
  04b8448  lfs 1, 44(28)
  04b844c  lfs 30, 72(31)
  04b8450  lfs 2, 48(28)
  04b8454  bl 0xfcbe8
  04b8458  nop
  04b845c  lfs 29, 52(28)
  04b8460  fmuls 2, 1, 29
  04b8464  fmr 1, 30
  04b8468  bl 0x502578
  04b846c  nop
  04b8470  fmr 30, 1
  04b8474  lfs 1, 16(28)
  04b8478  lfs 2, 56(28)
  04b847c  bl 0xfcbe8
  04b8480  nop
  04b8484  fmuls 3, 1, 29
  04b8488  addic 3, 30, 336
  04b848c  lfs 1, 60(28)
  04b8490  fmr 2, 30
  04b8494  bl 0xfe610
  04b8498  nop
  04b849c  lfs 1, 336(30)
  04b84a0  lfs 2, 16(31)
  04b84a4  fadds 1, 1, 2
  04b84a8  lfs 2, 340(30)
  04b84ac  lfs 3, 344(30)
  04b84b0  stfs 1, 336(30)
  04b84b4  lfs 1, 20(31)
  04b84b8  fadds 1, 2, 1
  04b84bc  stfs 1, 340(30)
  04b84c0  lfs 1, 24(31)
  04b84c4  fadds 1, 3, 1
  04b84c8  stfs 1, 344(30)
  04b84cc  lwz 3, 352(30)
  04b84d0  cmpwi 3, 0
  04b84d4  bt 2, 0x4b84f4
  04b84d8  lis 3, 75
  04b84dc  lfs 30, 208(29)
  04b84e0  addi 3, 3, 31868
  04b84e4  lfs 29, 212(29)
  04b84e8  lfs 28, 216(29)
  04b84ec  lfs 31, 64(3)
  04b84f0  b 0x4b8500
  04b84f4  lfs 30, 336(30)
  04b84f8  lfs 29, 340(30)
  04b84fc  lfs 28, 344(30)
  04b8500  lfs 1, 16(31)
  04b8504  lfs 2, 20(31)
  04b8508  lis 3, 75
  04b850c  fsubs 30, 30, 1
  04b8510  fsubs 29, 29, 2
  04b8514  addi 3, 3, 31868
  04b8518  lis 29, 115
  04b851c  addic 29, 29, 22784
  04b8520  lfs 1, 68(3)
  04b8524  fabs 3, 30
  04b8528  fabs 4, 29
  04b852c  stfs 30, 124(1)
  04b8530  stfs 29, 128(1)
  04b8534  lfs 5, 24(31)
  04b8538  fadds 1, 5, 1
  04b853c  fsubs 2, 3, 4
  04b8540  fsubs 28, 28, 1
  04b8544  stfs 2, 132(1)
  04b8548  lwz 4, 124(1)
  04b854c  lfs 27, 16(3)
  04b8550  lfs 2, 124(1)
  04b8554  lwz 3, 128(1)
  04b8558  lfs 5, 128(1)
  04b855c  lwz 5, 132(1)
  04b8560  rlwinm 3, 3, 3, 29, 29
  04b8564  lfs 1, 132(1)
  04b8568  fabs 2, 2
  04b856c  rlwimi 3, 5, 2, 30, 30
  04b8570  fabs 5, 5
  04b8574  fsub 6, 1, 27
  04b8578  fsub 7, 1, 27
  04b857c  rlwimi 3, 4, 4, 28, 28
  04b8580  ori 4, 29, 0
  04b8584  rlwimi 4, 3, 2, 26, 28
  04b8588  slwi 3, 3, 2
  04b858c  clrldi 4, 4, 32
  04b8590  fsel 4, 6, 2, 4
  04b8594  lfsx 1, 29, 3
  04b8598  fsel 3, 7, 5, 3
  04b859c  lfs 2, 4(4)
  04b85a0  fcmpu 0, 4, 27
  04b85a4  bt 1, 0x4b85b0
  04b85a8  fmr 1, 27
  04b85ac  b 0x4b86d4
  04b85b0  fsubs 5, 3, 4
  04b85b4  fadds 3, 3, 4
  04b85b8  addic 3, 1, 16
  04b85bc  li 7, 2
  04b85c0  addic 5, 3, 180
  04b85c4  addic 4, 3, 164
  04b85c8  mtctr 7
  04b85cc  fdivs 3, 5, 3
  04b85d0  fmuls 4, 3, 3
  04b85d4  stfs 3, 192(1)
  04b85d8  stfs 3, 184(1)
  04b85dc  stfs 3, 188(1)
  04b85e0  stfs 3, 180(1)
  04b85e4  lfs 6, 192(1)
  04b85e8  lfs 7, 184(1)
  04b85ec  lfs 8, 188(1)
  04b85f0  fmuls 5, 4, 4
  04b85f4  fmuls 7, 7, 4
  04b85f8  fmuls 6, 6, 5
  04b85fc  fmuls 3, 5, 5
  04b8600  fmuls 5, 8, 5
  04b8604  stfs 7, 184(1)
  04b8608  fmuls 4, 6, 4
  04b860c  stfs 5, 188(1)
  04b8610  stfs 4, 192(1)
  04b8614  lfs 4, 164(3)
  04b8618  fmuls 4, 4, 3
  04b861c  stfs 4, 180(3)
  04b8620  lfs 4, 4(4)
  04b8624  addic 4, 4, 8
  04b8628  fmuls 4, 4, 3
  04b862c  addic 3, 3, 8
  04b8630  stfs 4, 4(5)
  04b8634  addic 5, 5, 8
  04b8638  bdnz 0x4b8614
  04b863c  li 5, 4
  04b8640  ori 3, 1, 0
  04b8644  mtctr 5
  04b8648  lis 4, 115
  04b864c  addic 5, 3, 180
  04b8650  addic 4, 4, 22752
  04b8654  ori 6, 5, 0
  04b8658  lfs 3, 180(3)
  04b865c  lfs 4, 0(4)
  04b8660  fmuls 3, 3, 4
  04b8664  lfs 4, 4(4)
  04b8668  addic 4, 4, 8
  04b866c  stfs 3, 180(3)
  04b8670  lfs 3, 4(5)
  04b8674  addic 3, 3, 8
  04b8678  fmuls 3, 3, 4
  04b867c  stfs 3, 4(5)
  04b8680  addic 5, 5, 8
  04b8684  bdnz 0x4b8658
  04b8688  ori 3, 1, 0
  04b868c  fmr 3, 27
  04b8690  mtctr 7
  04b8694  lfs 4, 180(3)
  04b8698  fadds 3, 3, 4
  04b869c  lfs 4, 4(6)
  04b86a0  addic 3, 3, 16
  04b86a4  lfs 5, 8(6)
  04b86a8  lfs 6, 12(6)
  04b86ac  addic 6, 6, 16
  04b86b0  fadds 3, 3, 4
  04b86b4  fadds 3, 3, 5
  04b86b8  fadds 3, 3, 6
  04b86bc  bdnz 0x4b8694
  04b86c0  lis 3, 75
  04b86c4  addi 3, 3, 31868
  04b86c8  lfs 4, 20(3)
  04b86cc  fadds 3, 3, 4
  04b86d0  fmadds 1, 3, 1, 2
  04b86d4  lfs 2, 72(31)
  04b86d8  bl 0x5025e0
  04b86dc  nop
  04b86e0  fmuls 2, 29, 29
  04b86e4  stfs 28, 116(1)
  04b86e8  fabs 4, 28
  04b86ec  fmadds 2, 30, 30, 2
  04b86f0  fsqrts 2, 2
  04b86f4  lwz 3, 116(1)
  04b86f8  lfs 3, 116(1)
  04b86fc  rlwinm 3, 3, 3, 29, 29
  04b8700  fabs 3, 3
  04b8704  fabs 5, 2
  04b8708  stfs 2, 112(1)
  04b870c  fsubs 2, 5, 4
  04b8710  stfs 2, 120(1)
  04b8714  lwz 4, 112(1)
  04b8718  lfs 2, 112(1)
  04b871c  lwz 5, 120(1)
  04b8720  lfs 6, 120(1)
  04b8724  fabs 2, 2
  04b8728  rlwimi 3, 5, 2, 30, 30
  04b872c  fsub 7, 6, 27
  04b8730  fsub 6, 6, 27
  04b8734  rlwimi 3, 4, 4, 28, 28
  04b8738  ori 4, 29, 0
  04b873c  rlwimi 4, 3, 2, 26, 28
  04b8740  slwi 3, 3, 2
  04b8744  clrldi 4, 4, 32
  04b8748  fsel 4, 7, 2, 4
  04b874c  lfsx 30, 29, 3
  04b8750  fsel 3, 6, 3, 5
  04b8754  lfs 2, 4(4)
  04b8758  fcmpu 0, 4, 27
  04b875c  bt 1, 0x4b8764
  04b8760  b 0x4b8884
  04b8764  fsubs 5, 3, 4
  04b8768  fadds 3, 3, 4
  04b876c  addic 3, 1, 16
  04b8770  li 6, 2
  04b8774  addic 4, 3, 132
  04b8778  addic 5, 3, 148
  04b877c  mtctr 6
  04b8780  fdivs 3, 5, 3
  04b8784  fmuls 4, 3, 3
  04b8788  stfs 3, 160(1)
  04b878c  stfs 3, 152(1)
  04b8790  stfs 3, 156(1)
  04b8794  stfs 3, 148(1)
  04b8798  lfs 6, 160(1)
  04b879c  lfs 7, 152(1)
  04b87a0  lfs 8, 156(1)
  04b87a4  fmuls 5, 4, 4
  04b87a8  fmuls 7, 7, 4
  04b87ac  fmuls 6, 6, 5
  04b87b0  fmuls 3, 5, 5
  04b87b4  fmuls 5, 8, 5
  04b87b8  stfs 7, 152(1)
  04b87bc  fmuls 4, 6, 4
  04b87c0  stfs 5, 156(1)
  04b87c4  stfs 4, 160(1)
  04b87c8  lfs 4, 132(3)
  04b87cc  fmuls 4, 4, 3
  04b87d0  stfs 4, 148(3)
  04b87d4  lfs 4, 4(4)
  04b87d8  addic 3, 3, 8
  04b87dc  addic 4, 4, 8
  04b87e0  fmuls 4, 4, 3
  04b87e4  stfs 4, 4(5)
  04b87e8  addic 5, 5, 8
  04b87ec  bdnz 0x4b87c8
  04b87f0  li 5, 4
  04b87f4  ori 3, 1, 0
  04b87f8  mtctr 5
  04b87fc  lis 4, 115
  04b8800  addic 5, 3, 148
  04b8804  addic 4, 4, 22752
  04b8808  ori 7, 5, 0
  04b880c  lfs 3, 148(3)
  04b8810  lfs 4, 0(4)
  04b8814  fmuls 3, 3, 4
  04b8818  lfs 4, 4(4)
  04b881c  addic 4, 4, 8
  04b8820  stfs 3, 148(3)
  04b8824  lfs 3, 4(5)
  04b8828  addic 3, 3, 8
  04b882c  fmuls 3, 3, 4
  04b8830  stfs 3, 4(5)
  04b8834  addic 5, 5, 8
  04b8838  bdnz 0x4b880c
  04b883c  ori 3, 1, 0
  04b8840  mtctr 6
  04b8844  lfs 3, 148(3)
  04b8848  lfs 4, 4(7)
  04b884c  fadds 3, 27, 3
  04b8850  lfs 5, 8(7)
  04b8854  lfs 27, 12(7)
  04b8858  addic 3, 3, 16
  04b885c  addic 7, 7, 16
  04b8860  fadds 3, 3, 4
  04b8864  fadds 3, 3, 5
  04b8868  fadds 27, 3, 27
  04b886c  bdnz 0x4b8844
  04b8870  lis 3, 75
  04b8874  addi 3, 3, 31868
  04b8878  lfs 3, 20(3)
  04b887c  fadds 27, 27, 3
  04b8880  fmadds 27, 27, 30, 2
  04b8884  lis 3, 75
  04b8888  fneg 27, 27
  04b888c  addi 3, 3, 31868
  04b8890  lfs 2, 24(3)
  04b8894  fcmpu 0, 1, 2
  04b8898  cror 6, 0, 2
  04b889c  bt 6, 0x4b88a8
  04b88a0  fmr 1, 2
  04b88a4  b 0x4b88c4
  04b88a8  lis 3, 75
  04b88ac  addi 3, 3, 31868
  04b88b0  lfs 2, 72(3)
  04b88b4  fcmpu 0, 1, 2
  04b88b8  cror 6, 1, 2
  04b88bc  bt 6, 0x4b88c4
  04b88c0  fmr 1, 2
  04b88c4  lis 3, 75
  04b88c8  addi 3, 3, 31868
  04b88cc  lfs 2, 76(3)
  04b88d0  fcmpu 0, 27, 2
  04b88d4  cror 6, 0, 2
  04b88d8  bt 6, 0x4b88e4
  04b88dc  fmr 27, 2
  04b88e0  b 0x4b8900
  04b88e4  lis 3, 75
  04b88e8  addi 3, 3, 31868
  04b88ec  lfs 2, 80(3)
  04b88f0  fcmpu 0, 27, 2
  04b88f4  cror 6, 1, 2
  04b88f8  bt 6, 0x4b8900
  04b88fc  fmr 27, 2
  04b8900  lis 3, 75
  04b8904  addi 3, 3, 31868
  04b8908  lfs 2, 84(3)
  04b890c  fmuls 2, 1, 2
  04b8910  stfs 2, 184(30)
  04b8914  lfs 2, 88(3)
  04b8918  stfs 27, 180(30)
  04b891c  fmuls 1, 1, 2
  04b8920  stfs 1, 312(30)
  04b8924  lis 3, 151
  04b8928  lbz 3, -16268(3)
  04b892c  cmpwi 3, 0
  04b8930  bt 2, 0x4b893c
  04b8934  lis 3, 16432
  04b8938  stw 3, 192(30)
  04b893c  lis 3, 75
  04b8940  lis 29, 114
  04b8944  addi 3, 3, 31868
  04b8948  addic 4, 30, 80
  04b894c  li 5, 0
  04b8950  lfs 30, 92(3)
  04b8954  lfs 2, -3060(29)
  04b8958  ori 3, 31, 0
  04b895c  fmuls 1, 2, 31
  04b8960  fmuls 2, 2, 30
  04b8964  bl 0x1167c8
  04b8968  nop
  04b896c  lfs 2, -3060(29)
  04b8970  addic 4, 30, 208
  04b8974  ori 3, 31, 0
  04b8978  fmuls 1, 2, 31
  04b897c  li 5, 1
  04b8980  fmuls 2, 2, 30
  04b8984  bl 0x1167c8
  04b8988  nop
  04b898c  ld 0, 352(1)
  04b8990  mtlr 0
  04b8994  lfd 27, 296(1)
  04b8998  lfd 28, 304(1)
  04b899c  lfd 29, 312(1)
  04b89a0  lfd 30, 320(1)
  04b89a4  lfd 31, 328(1)
  04b89a8  ld 26, 248(1)
  04b89ac  ld 27, 256(1)
  04b89b0  ld 28, 264(1)
  04b89b4  ld 29, 272(1)
  04b89b8  ld 30, 280(1)
  04b89bc  ld 31, 288(1)
  04b89c0  addi 1, 1, 336
  04b89c4  blr
