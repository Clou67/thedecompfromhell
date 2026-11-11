# game/update/moby220.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M220_002f7c68:   # 0x2f7c68, 0x14 bytes
  02f7c68  lis 3, 128
  02f7c6c  lis 4, 1
  02f7c70  addic 3, 3, -4268
  02f7c74  stw 4, 72(3)
  02f7c78  blr

UpdateMoby_220:   # 0x2f7cf8, 0xefc bytes
  02f7cf8  stdu 1, -320(1)
  02f7cfc  mflr 0
  02f7d00  std 0, 336(1)
  02f7d04  stfd 26, 272(1)
  02f7d08  stfd 27, 280(1)
  02f7d0c  stfd 28, 288(1)
  02f7d10  stfd 29, 296(1)
  02f7d14  stfd 30, 304(1)
  02f7d18  stfd 31, 312(1)
  02f7d1c  std 31, 264(1)
  02f7d20  ori 31, 3, 0
  02f7d24  lis 4, 1
  02f7d28  std 30, 256(1)
  02f7d2c  li 5, 0
  02f7d30  std 29, 248(1)
  02f7d34  std 28, 240(1)
  02f7d38  lwz 30, 120(31)
  02f7d3c  bl 0x10675c
  02f7d40  nop
  02f7d44  cmpwi 3, 0
  02f7d48  bt 2, 0x2f7e7c
  02f7d4c  lbz 3, 32(31)
  02f7d50  cmpwi 1, 3, 2
  02f7d54  cmpwi 3, 99
  02f7d58  cror 2, 2, 6
  02f7d5c  bt 2, 0x2f7e7c
  02f7d60  li 5, 1
  02f7d64  lis 3, 15363
  02f7d68  lis 4, 47
  02f7d6c  lis 6, 14851
  02f7d70  ori 3, 3, 4719
  02f7d74  stw 5, 36(30)
  02f7d78  addi 4, 4, 31872
  02f7d7c  ori 5, 6, 4719
  02f7d80  lis 6, 114
  02f7d84  stw 3, 16(30)
  02f7d88  stw 5, 20(30)
  02f7d8c  lfs 1, 0(4)
  02f7d90  lfs 2, -3052(6)
  02f7d94  li 5, 0
  02f7d98  lwz 3, 224(30)
  02f7d9c  fmuls 1, 2, 1
  02f7da0  addic 3, 3, -1
  02f7da4  cmpwi 3, 0
  02f7da8  stfs 1, 24(30)
  02f7dac  lfs 1, 4(4)
  02f7db0  stb 5, 61(30)
  02f7db4  fmuls 1, 2, 1
  02f7db8  stw 3, 224(30)
  02f7dbc  stfs 1, 28(30)
  02f7dc0  lfs 1, 8(4)
  02f7dc4  bf 2, 0x2f7e24
  02f7dc8  lfs 2, 24(31)
  02f7dcc  li 3, 99
  02f7dd0  lis 4, 151
  02f7dd4  fadds 1, 2, 1
  02f7dd8  addic 4, 4, -25376
  02f7ddc  stb 3, 32(31)
  02f7de0  lfs 2, 16(31)
  02f7de4  lfs 3, 20(31)
  02f7de8  stfs 1, 24(31)
  02f7dec  lfs 1, 128(4)
  02f7df0  lfs 4, 132(4)
  02f7df4  fsubs 1, 2, 1
  02f7df8  fsubs 2, 3, 4
  02f7dfc  bl 0x5e8338
  02f7e00  nop
  02f7e04  ori 3, 31, 0
  02f7e08  ori 4, 30, 0
  02f7e0c  li 6, 6
  02f7e10  li 7, 3
  02f7e14  li 8, 0
  02f7e18  bl 0x10ad80
  02f7e1c  nop
  02f7e20  b 0x2f7e7c
  02f7e24  lfs 2, 24(31)
  02f7e28  li 3, 2
  02f7e2c  fadds 1, 2, 1
  02f7e30  lis 4, 151
  02f7e34  addic 4, 4, -25376
  02f7e38  stb 3, 32(31)
  02f7e3c  lfs 2, 16(31)
  02f7e40  lfs 3, 20(31)
  02f7e44  stfs 1, 24(31)
  02f7e48  lfs 1, 128(4)
  02f7e4c  lfs 4, 132(4)
  02f7e50  fsubs 1, 2, 1
  02f7e54  fsubs 2, 3, 4
  02f7e58  bl 0x5e8338
  02f7e5c  nop
  02f7e60  ori 3, 31, 0
  02f7e64  ori 4, 30, 0
  02f7e68  li 6, 5
  02f7e6c  li 7, 3
  02f7e70  li 8, 0
  02f7e74  bl 0x10ad80
  02f7e78  nop
  02f7e7c  li 4, 255
  02f7e80  lbz 3, 32(31)
  02f7e84  cmpwi 3, 99
  02f7e88  stb 4, 164(31)
  02f7e8c  cmpwi 1, 3, 6
  02f7e90  cmpwi 6, 3, 5
  02f7e94  cmpwi 7, 3, 4
  02f7e98  bt 2, 0x2f8b90
  02f7e9c  bt 6, 0x2f8984
  02f7ea0  bt 26, 0x2f8494
  02f7ea4  bt 30, 0x2f8590
  02f7ea8  cmpwi 3, 3
  02f7eac  bt 2, 0x2f8068
  02f7eb0  cmpwi 3, 2
  02f7eb4  bt 2, 0x2f8814
  02f7eb8  cmpwi 3, 1
  02f7ebc  bt 2, 0x2f7f60
  02f7ec0  cmpwi 3, 0
  02f7ec4  bf 2, 0x2f8bbc
  02f7ec8  addic 3, 30, 176
  02f7ecc  bl 0x136724
  02f7ed0  nop
  02f7ed4  addic 3, 30, 96
  02f7ed8  bl 0x100f8c
  02f7edc  nop
  02f7ee0  lis 3, 47
  02f7ee4  lis 4, 16384
  02f7ee8  addi 3, 3, 31872
  02f7eec  lis 5, 15948
  02f7ef0  lis 6, 15692
  02f7ef4  ori 5, 5, 52429
  02f7ef8  ori 6, 6, 52429
  02f7efc  lfs 1, 12(3)
  02f7f00  lis 3, 16025
  02f7f04  stw 4, 108(30)
  02f7f08  lis 4, 114
  02f7f0c  stw 5, 164(30)
  02f7f10  ori 3, 3, 39322
  02f7f14  stw 6, 156(30)
  02f7f18  li 5, 909
  02f7f1c  stw 3, 160(30)
  02f7f20  lfs 2, -3052(4)
  02f7f24  li 3, 1
  02f7f28  stw 5, 96(30)
  02f7f2c  fmuls 1, 2, 1
  02f7f30  stfs 1, 132(30)
  02f7f34  lbz 4, 83(31)
  02f7f38  stb 3, 32(31)
  02f7f3c  cmpwi 4, 0
  02f7f40  bt 2, 0x2f8bbc
  02f7f44  ori 3, 31, 0
  02f7f48  li 4, 0
  02f7f4c  li 5, 0
  02f7f50  li 6, 3
  02f7f54  bl 0xfddc0
  02f7f58  nop
  02f7f5c  b 0x2f8bbc
  02f7f60  lwz 3, 192(30)
  02f7f64  lwz 4, 176(30)
  02f7f68  lbz 5, 180(30)
  02f7f6c  extsb 5, 5
  02f7f70  lwz 6, 0(3)
  02f7f74  addc 4, 4, 6
  02f7f78  addc 29, 4, 5
  02f7f7c  divw 4, 29, 6
  02f7f80  mullw 4, 4, 6
  02f7f84  lis 5, 114
  02f7f88  subc 29, 29, 4
  02f7f8c  sldi 4, 29, 4
  02f7f90  addc 3, 3, 4
  02f7f94  lis 4, 47
  02f7f98  clrldi 3, 3, 32
  02f7f9c  addi 4, 4, 31872
  02f7fa0  addic 6, 1, 128
  02f7fa4  lfs 1, 16(3)
  02f7fa8  stfs 1, 112(1)
  02f7fac  lfs 1, 20(3)
  02f7fb0  stfs 1, 116(1)
  02f7fb4  lfs 1, 24(3)
  02f7fb8  stfs 1, 120(1)
  02f7fbc  lfs 1, 28(3)
  02f7fc0  ori 3, 31, 0
  02f7fc4  stfs 1, 124(1)
  02f7fc8  lfs 1, 12(4)
  02f7fcc  lfs 2, -3052(5)
  02f7fd0  addic 4, 30, 96
  02f7fd4  fmuls 1, 2, 1
  02f7fd8  addic 5, 1, 112
  02f7fdc  stfs 1, 132(30)
  02f7fe0  bl 0x101cc0
  02f7fe4  nop
  02f7fe8  cmpwi 3, 0
  02f7fec  bt 2, 0x2f7ff4
  02f7ff0  stw 29, 176(30)
  02f7ff4  lis 3, 151
  02f7ff8  lfs 1, 20(31)
  02f7ffc  addic 3, 3, -25376
  02f8000  lfs 2, 16(31)
  02f8004  lfs 3, 132(3)
  02f8008  lfs 4, 128(3)
  02f800c  fsubs 1, 1, 3
  02f8010  fsubs 2, 2, 4
  02f8014  lis 3, 47
  02f8018  addi 3, 3, 31872
  02f801c  fmuls 1, 1, 1
  02f8020  fmadds 1, 2, 2, 1
  02f8024  lfs 2, 16(3)
  02f8028  fsqrts 1, 1
  02f802c  fcmpu 0, 1, 2
  02f8030  cror 6, 1, 2
  02f8034  bt 6, 0x2f8bbc
  02f8038  li 3, 3
  02f803c  lbz 4, 83(31)
  02f8040  cmpwi 4, 7
  02f8044  stb 3, 32(31)
  02f8048  bt 2, 0x2f8bbc
  02f804c  ori 3, 31, 0
  02f8050  li 4, 7
  02f8054  li 5, 0
  02f8058  li 6, 3
  02f805c  bl 0xfddc0
  02f8060  nop
  02f8064  b 0x2f8bbc
  02f8068  lis 29, 151
  02f806c  lfs 1, 16(31)
  02f8070  lfs 2, 20(31)
  02f8074  addic 29, 29, -25376
  02f8078  lfs 3, 128(29)
  02f807c  lfs 4, 132(29)
  02f8080  fsubs 1, 3, 1
  02f8084  fsubs 2, 4, 2
  02f8088  bl 0x5e8338
  02f808c  nop
  02f8090  lis 3, 47
  02f8094  addic 5, 30, 232
  02f8098  addi 28, 3, 31872
  02f809c  ori 3, 31, 0
  02f80a0  lfs 2, 20(28)
  02f80a4  lfs 3, 24(28)
  02f80a8  lfs 4, 28(28)
  02f80ac  bl 0xff2e8
  02f80b0  nop
  02f80b4  lfs 1, 20(31)
  02f80b8  lfs 2, 132(29)
  02f80bc  lfs 3, 16(31)
  02f80c0  fsubs 1, 1, 2
  02f80c4  lfs 2, 128(29)
  02f80c8  fsubs 2, 3, 2
  02f80cc  fmuls 1, 1, 1
  02f80d0  fmadds 1, 2, 2, 1
  02f80d4  lfs 2, 32(28)
  02f80d8  fsqrts 1, 1
  02f80dc  fcmpu 0, 1, 2
  02f80e0  cror 6, 1, 2
  02f80e4  bt 6, 0x2f8114
  02f80e8  li 3, 4
  02f80ec  lbz 4, 83(31)
  02f80f0  cmpwi 4, 4
  02f80f4  stb 3, 32(31)
  02f80f8  bt 2, 0x2f8114
  02f80fc  ori 3, 31, 0
  02f8100  li 4, 4
  02f8104  li 5, 0
  02f8108  li 6, 3
  02f810c  bl 0xfddc0
  02f8110  nop
  02f8114  lbz 4, 82(31)
  02f8118  lbz 3, 83(31)
  02f811c  cmpw 4, 3
  02f8120  cmpwi 1, 3, 7
  02f8124  cmpwi 6, 3, 8
  02f8128  cmpwi 7, 3, 9
  02f812c  bf 2, 0x2f81a0
  02f8130  lbz 5, 112(31)
  02f8134  rlwinm 5, 5, 0, 30, 30
  02f8138  cmpwi 5, 0
  02f813c  bt 2, 0x2f81a0
  02f8140  bf 6, 0x2f81a0
  02f8144  bt 26, 0x2f8160
  02f8148  ori 3, 31, 0
  02f814c  li 4, 8
  02f8150  li 5, 0
  02f8154  li 6, 3
  02f8158  bl 0xfddc0
  02f815c  nop
  02f8160  lis 3, 47
  02f8164  vspltisw 2, -1
  02f8168  li 5, 36
  02f816c  addi 3, 3, 31872
  02f8170  lis 4, 114
  02f8174  li 6, -3056
  02f8178  vslw 2, 2, 2
  02f817c  <unknown>
  02f8180  li 3, 228
  02f8184  vspltw 3, 3, 0
  02f8188  <unknown>
  02f818c  vmaddfp 2, 4, 3, 2
  02f8190  vctsxs 2, 2, 0
  02f8194  vspltw 2, 2, 0
  02f8198  stvewx 2, 3, 30
  02f819c  b 0x2f8bbc
  02f81a0  xor 3, 4, 3
  02f81a4  cmpwi 3, 0
  02f81a8  bf 2, 0x2f8bbc
  02f81ac  bf 26, 0x2f8414
  02f81b0  lwz 3, 228(30)
  02f81b4  addic 3, 3, -1
  02f81b8  cmpwi 3, 0
  02f81bc  stw 3, 228(30)
  02f81c0  bf 2, 0x2f81e8
  02f81c4  lbz 3, 83(31)
  02f81c8  cmpwi 3, 9
  02f81cc  bt 2, 0x2f81e8
  02f81d0  ori 3, 31, 0
  02f81d4  li 4, 9
  02f81d8  li 5, 0
  02f81dc  li 6, 3
  02f81e0  bl 0xfddc0
  02f81e4  nop
  02f81e8  ori 3, 31, 0
  02f81ec  bl 0xefe40
  02f81f0  nop
  02f81f4  lis 3, 47
  02f81f8  addi 3, 3, 31872
  02f81fc  lfs 2, 40(3)
  02f8200  fcmpu 0, 1, 2
  02f8204  bt 2, 0x2f8230
  02f8208  lis 3, 47
  02f820c  addi 3, 3, 31872
  02f8210  lfs 2, 44(3)
  02f8214  fcmpu 0, 1, 2
  02f8218  bt 2, 0x2f8230
  02f821c  lis 3, 47
  02f8220  addi 3, 3, 31872
  02f8224  lfs 2, 48(3)
  02f8228  fcmpu 0, 1, 2
  02f822c  bf 2, 0x2f8bbc
  02f8230  lis 3, 47
  02f8234  li 6, 0
  02f8238  addi 30, 3, 31872
  02f823c  lis 7, 16256
  02f8240  addic 28, 1, 144
  02f8244  ori 3, 31, 0
  02f8248  li 4, 1
  02f824c  lfs 1, 52(30)
  02f8250  ori 5, 28, 0
  02f8254  stw 6, 160(1)
  02f8258  stw 6, 164(1)
  02f825c  stw 6, 168(1)
  02f8260  fmr 30, 1
  02f8264  stw 7, 172(1)
  02f8268  bl 0xf1114
  02f826c  nop
  02f8270  lfs 1, 56(30)
  02f8274  lfs 2, 132(29)
  02f8278  lfs 3, 148(1)
  02f827c  lfs 4, 152(1)
  02f8280  fsubs 5, 2, 3
  02f8284  lfs 6, 128(29)
  02f8288  fadds 1, 4, 1
  02f828c  lfs 7, 144(1)
  02f8290  lfs 9, 136(29)
  02f8294  fsubs 8, 6, 7
  02f8298  lis 3, 114
  02f829c  fmuls 11, 31, 31
  02f82a0  fmuls 4, 5, 5
  02f82a4  fsubs 10, 9, 1
  02f82a8  stfs 1, 152(1)
  02f82ac  fmadds 11, 31, 31, 11
  02f82b0  stfs 8, 160(1)
  02f82b4  stfs 5, 164(1)
  02f82b8  fmadds 4, 8, 8, 4
  02f82bc  lfs 12, 140(29)
  02f82c0  stfs 10, 168(1)
  02f82c4  stfs 12, 172(1)
  02f82c8  lfs 13, 60(30)
  02f82cc  lfs 0, 260(29)
  02f82d0  fmadds 11, 31, 31, 11
  02f82d4  lfs 29, 256(29)
  02f82d8  fmadds 4, 10, 10, 4
  02f82dc  fmuls 26, 0, 0
  02f82e0  lfs 28, -3052(3)
  02f82e4  lfs 27, 264(29)
  02f82e8  fmuls 31, 28, 13
  02f82ec  fsqrts 11, 11
  02f82f0  stfs 12, 172(1)
  02f82f4  lis 7, 32
  02f82f8  addic 3, 1, 160
  02f82fc  ori 4, 28, 0
  02f8300  ori 6, 31, 0
  02f8304  ori 7, 7, 65535
  02f8308  fsqrts 4, 4
  02f830c  fmadds 26, 29, 29, 26
  02f8310  fsubs 2, 2, 3
  02f8314  fmuls 13, 28, 13
  02f8318  fsubs 6, 6, 7
  02f831c  fsubs 1, 9, 1
  02f8320  fdivs 4, 4, 31
  02f8324  fmadds 31, 27, 27, 26
  02f8328  fmuls 26, 2, 2
  02f832c  fsqrts 31, 31
  02f8330  fmadds 26, 6, 6, 26
  02f8334  fmuls 4, 11, 4
  02f8338  fdivs 3, 4, 31
  02f833c  fsub 4, 30, 31
  02f8340  fsub 7, 30, 31
  02f8344  fsub 9, 30, 31
  02f8348  fsub 11, 31, 30
  02f834c  fsub 12, 31, 30
  02f8350  fsub 31, 31, 30
  02f8354  fmuls 28, 27, 3
  02f8358  fmuls 0, 0, 3
  02f835c  fmuls 3, 29, 3
  02f8360  fsel 4, 4, 30, 28
  02f8364  fsel 7, 7, 30, 0
  02f8368  fsel 9, 9, 30, 3
  02f836c  fsel 4, 11, 4, 28
  02f8370  fsel 7, 12, 7, 0
  02f8374  fsel 3, 31, 9, 3
  02f8378  fadds 4, 10, 4
  02f837c  fadds 5, 5, 7
  02f8380  fadds 3, 8, 3
  02f8384  stfs 4, 168(1)
  02f8388  stfs 5, 164(1)
  02f838c  stfs 3, 160(1)
  02f8390  stfs 6, 160(1)
  02f8394  stfs 2, 164(1)
  02f8398  stfs 1, 168(1)
  02f839c  lfs 3, 64(30)
  02f83a0  fadds 3, 1, 3
  02f83a4  fmadds 1, 3, 3, 26
  02f83a8  stfs 3, 168(1)
  02f83ac  fsqrts 4, 1
  02f83b0  fmr 1, 30
  02f83b4  fdivs 5, 13, 4
  02f83b8  fsub 7, 30, 4
  02f83bc  fsub 8, 30, 4
  02f83c0  fsub 9, 30, 4
  02f83c4  fsub 10, 4, 30
  02f83c8  fsub 11, 4, 30
  02f83cc  fsub 4, 4, 30
  02f83d0  fmuls 6, 6, 5
  02f83d4  fmuls 2, 2, 5
  02f83d8  fmuls 3, 3, 5
  02f83dc  fsel 5, 7, 30, 6
  02f83e0  fsel 7, 8, 30, 2
  02f83e4  fsel 8, 9, 30, 3
  02f83e8  fsel 5, 10, 5, 6
  02f83ec  fsel 2, 11, 7, 2
  02f83f0  fsel 3, 4, 8, 3
  02f83f4  stfs 5, 160(1)
  02f83f8  stfs 2, 164(1)
  02f83fc  stfs 3, 168(1)
  02f8400  bl 0x299400
  02f8404  nop
  02f8408  li 4, 1
  02f840c  stb 4, 32(3)
  02f8410  b 0x2f8bbc
  02f8414  lbz 3, 112(31)
  02f8418  rlwinm 3, 3, 0, 30, 30
  02f841c  cmpwi 3, 0
  02f8420  bt 2, 0x2f8bbc
  02f8424  bf 30, 0x2f8bbc
  02f8428  lis 3, 47
  02f842c  li 4, 36
  02f8430  vspltisw 2, -1
  02f8434  addi 3, 3, 31872
  02f8438  lis 5, 114
  02f843c  li 6, -3056
  02f8440  vslw 2, 2, 2
  02f8444  <unknown>
  02f8448  li 3, 228
  02f844c  vspltw 3, 3, 0
  02f8450  <unknown>
  02f8454  li 4, 5
  02f8458  vmaddfp 2, 4, 3, 2
  02f845c  vctsxs 2, 2, 0
  02f8460  vspltw 2, 2, 0
  02f8464  stvewx 2, 3, 30
  02f8468  lbz 3, 83(31)
  02f846c  stb 4, 32(31)
  02f8470  cmpwi 3, 3
  02f8474  bt 2, 0x2f8bbc
  02f8478  ori 3, 31, 0
  02f847c  li 4, 3
  02f8480  li 5, 0
  02f8484  li 6, 3
  02f8488  bl 0xfddc0
  02f848c  nop
  02f8490  b 0x2f8bbc
  02f8494  lis 3, 151
  02f8498  lfs 1, 20(31)
  02f849c  lfs 2, 16(31)
  02f84a0  addic 3, 3, -25376
  02f84a4  lfs 3, 132(3)
  02f84a8  lfs 4, 128(3)
  02f84ac  fsubs 1, 1, 3
  02f84b0  fsubs 2, 2, 4
  02f84b4  lis 3, 47
  02f84b8  addi 3, 3, 31872
  02f84bc  fmuls 1, 1, 1
  02f84c0  fmadds 1, 2, 2, 1
  02f84c4  lfs 2, 32(3)
  02f84c8  fsqrts 1, 1
  02f84cc  fcmpu 0, 1, 2
  02f84d0  cror 6, 1, 2
  02f84d4  bt 6, 0x2f8508
  02f84d8  li 3, 4
  02f84dc  lbz 4, 83(31)
  02f84e0  cmpwi 4, 4
  02f84e4  stb 3, 32(31)
  02f84e8  bt 2, 0x2f854c
  02f84ec  ori 3, 31, 0
  02f84f0  li 4, 4
  02f84f4  li 5, 0
  02f84f8  li 6, 3
  02f84fc  bl 0xfddc0
  02f8500  nop
  02f8504  b 0x2f854c
  02f8508  lis 3, 47
  02f850c  addi 3, 3, 31872
  02f8510  lfs 2, 68(3)
  02f8514  fcmpu 0, 1, 2
  02f8518  cror 6, 1, 2
  02f851c  bt 6, 0x2f854c
  02f8520  li 3, 1
  02f8524  lbz 4, 83(31)
  02f8528  cmpwi 4, 0
  02f852c  stb 3, 32(31)
  02f8530  bt 2, 0x2f854c
  02f8534  ori 3, 31, 0
  02f8538  li 4, 0
  02f853c  li 5, 0
  02f8540  li 6, 3
  02f8544  bl 0xfddc0
  02f8548  nop
  02f854c  addic 3, 30, 228
  02f8550  bl 0x4fff60
  02f8554  nop
  02f8558  cmpwi 3, 0
  02f855c  bt 2, 0x2f8bbc
  02f8560  li 3, 3
  02f8564  lbz 4, 83(31)
  02f8568  cmpwi 4, 7
  02f856c  stb 3, 32(31)
  02f8570  bt 2, 0x2f8bbc
  02f8574  ori 3, 31, 0
  02f8578  li 4, 7
  02f857c  li 5, 0
  02f8580  li 6, 3
  02f8584  bl 0xfddc0
  02f8588  nop
  02f858c  b 0x2f8bbc
  02f8590  lis 3, 151
  02f8594  ori 29, 30, 0
  02f8598  lfs 1, 16(31)
  02f859c  addic 30, 3, -25376
  02f85a0  lfs 2, 20(31)
  02f85a4  lfs 3, 128(30)
  02f85a8  lfs 4, 132(30)
  02f85ac  fsubs 1, 3, 1
  02f85b0  fsubs 2, 4, 2
  02f85b4  bl 0x5e8338
  02f85b8  nop
  02f85bc  lis 3, 47
  02f85c0  addic 5, 29, 232
  02f85c4  addi 4, 3, 31872
  02f85c8  ori 3, 31, 0
  02f85cc  lfs 2, 20(4)
  02f85d0  lfs 3, 24(4)
  02f85d4  lfs 4, 28(4)
  02f85d8  bl 0xff2e8
  02f85dc  nop
  02f85e0  lbz 3, 82(31)
  02f85e4  lbz 4, 83(31)
  02f85e8  cmpw 3, 4
  02f85ec  bf 2, 0x2f87d4
  02f85f0  ori 3, 31, 0
  02f85f4  bl 0xefe40
  02f85f8  nop
  02f85fc  lis 3, 47
  02f8600  addi 3, 3, 31872
  02f8604  lfs 2, 68(3)
  02f8608  fcmpu 0, 1, 2
  02f860c  bt 0, 0x2f87d4
  02f8610  ori 3, 31, 0
  02f8614  bl 0xefe40
  02f8618  nop
  02f861c  lis 3, 47
  02f8620  addi 3, 3, 31872
  02f8624  lfs 2, 72(3)
  02f8628  fcmpu 0, 1, 2
  02f862c  cror 6, 1, 2
  02f8630  bt 6, 0x2f87d4
  02f8634  lfs 1, 24(31)
  02f8638  lis 3, 47
  02f863c  lfs 2, 136(30)
  02f8640  addi 3, 3, 31872
  02f8644  fsubs 1, 1, 2
  02f8648  lfs 2, 56(3)
  02f864c  fabs 1, 1
  02f8650  fcmpu 0, 1, 2
  02f8654  cror 6, 1, 2
  02f8658  bt 6, 0x2f87d4
  02f865c  lfs 2, 20(31)
  02f8660  lfs 1, 132(30)
  02f8664  lfs 4, 16(31)
  02f8668  fsubs 5, 2, 1
  02f866c  lfs 3, 128(30)
  02f8670  fsubs 6, 4, 3
  02f8674  lis 3, 47
  02f8678  addi 3, 3, 31872
  02f867c  fmuls 5, 5, 5
  02f8680  fmadds 5, 6, 6, 5
  02f8684  lfs 6, 32(3)
  02f8688  fsqrts 5, 5
  02f868c  fcmpu 0, 5, 6
  02f8690  cror 6, 1, 2
  02f8694  bt 6, 0x2f87d4
  02f8698  fsubs 3, 3, 4
  02f869c  fsubs 2, 1, 2
  02f86a0  fmr 1, 3
  02f86a4  bl 0x5e8338
  02f86a8  nop
  02f86ac  lfs 2, 72(31)
  02f86b0  bl 0x5026a0
  02f86b4  nop
  02f86b8  lis 3, 47
  02f86bc  addi 3, 3, 31872
  02f86c0  lfs 2, 76(3)
  02f86c4  fcmpu 0, 1, 2
  02f86c8  cror 6, 1, 2
  02f86cc  bt 6, 0x2f87d4
  02f86d0  lis 3, 47
  02f86d4  lfs 1, 72(31)
  02f86d8  addi 6, 3, 31872
  02f86dc  li 3, 0
  02f86e0  lfs 2, 80(6)
  02f86e4  lfs 3, 84(6)
  02f86e8  fadds 2, 1, 2
  02f86ec  fsubs 5, 3, 1
  02f86f0  lfs 4, 88(6)
  02f86f4  addic 7, 1, 192
  02f86f8  addic 8, 1, 176
  02f86fc  li 5, 1
  02f8700  fsubs 3, 3, 2
  02f8704  fsub 7, 1, 5
  02f8708  fsubs 6, 4, 2
  02f870c  fsubs 4, 4, 1
  02f8710  fsub 8, 2, 3
  02f8714  fsel 1, 7, 5, 1
  02f8718  fsel 2, 8, 3, 2
  02f871c  fsub 5, 4, 1
  02f8720  lfs 3, 92(6)
  02f8724  fsub 7, 6, 2
  02f8728  fsel 1, 5, 4, 1
  02f872c  lfs 4, 96(6)
  02f8730  lfs 5, 100(6)
  02f8734  lfs 9, 104(6)
  02f8738  lwz 4, 8320(30)
  02f873c  stw 3, 184(1)
  02f8740  fsel 2, 7, 6, 2
  02f8744  fmuls 6, 1, 1
  02f8748  ori 3, 4, 0
  02f874c  fmuls 7, 2, 2
  02f8750  fmuls 8, 6, 1
  02f8754  fmuls 10, 7, 2
  02f8758  fmuls 11, 6, 8
  02f875c  fmadds 1, 8, 3, 1
  02f8760  fmuls 8, 7, 10
  02f8764  fmadds 2, 10, 3, 2
  02f8768  fmuls 3, 6, 11
  02f876c  fmadds 1, 11, 4, 1
  02f8770  fmuls 10, 7, 8
  02f8774  fmadds 2, 8, 4, 2
  02f8778  fmuls 4, 6, 3
  02f877c  fmadds 1, 3, 5, 1
  02f8780  fmuls 3, 7, 10
  02f8784  fmadds 2, 10, 5, 2
  02f8788  fmadds 1, 4, 9, 1
  02f878c  fmadds 2, 3, 9, 2
  02f8790  stfs 1, 180(1)
  02f8794  stfs 2, 176(1)
  02f8798  lfs 1, 16(4)
  02f879c  stfs 1, 192(1)
  02f87a0  lfs 1, 20(4)
  02f87a4  stfs 1, 196(1)
  02f87a8  lfs 1, 24(4)
  02f87ac  stfs 1, 200(1)
  02f87b0  lfs 2, 28(4)
  02f87b4  ori 4, 31, 0
  02f87b8  stfs 2, 204(1)
  02f87bc  lfs 2, 108(6)
  02f87c0  fadds 1, 1, 2
  02f87c4  stfs 1, 200(1)
  02f87c8  lfs 1, 112(6)
  02f87cc  bl 0x105c08
  02f87d0  nop
  02f87d4  lbz 3, 112(31)
  02f87d8  rlwinm 3, 3, 0, 30, 30
  02f87dc  cmpwi 3, 0
  02f87e0  bt 2, 0x2f8bbc
  02f87e4  li 3, 6
  02f87e8  lbz 4, 83(31)
  02f87ec  cmpwi 4, 1
  02f87f0  stb 3, 32(31)
  02f87f4  bt 2, 0x2f8bbc
  02f87f8  ori 3, 31, 0
  02f87fc  li 4, 1
  02f8800  li 5, 0
  02f8804  li 6, 3
  02f8808  bl 0xfddc0
  02f880c  nop
  02f8810  b 0x2f8bbc
  02f8814  ori 3, 31, 0
  02f8818  ori 4, 30, 0
  02f881c  bl 0x10b030
  02f8820  nop
  02f8824  rlwinm 3, 3, 0, 25, 25
  02f8828  cmpwi 3, 0
  02f882c  bt 2, 0x2f8bbc
  02f8830  lbz 3, 83(31)
  02f8834  cmpwi 3, 1
  02f8838  bt 2, 0x2f8854
  02f883c  ori 3, 31, 0
  02f8840  li 4, 1
  02f8844  li 5, 0
  02f8848  li 6, 3
  02f884c  bl 0xfddc0
  02f8850  nop
  02f8854  lis 5, 47
  02f8858  li 4, 6
  02f885c  addi 5, 5, 31872
  02f8860  addic 3, 31, 16
  02f8864  stb 4, 32(31)
  02f8868  lwz 4, 192(30)
  02f886c  lfs 1, 52(5)
  02f8870  bl 0x1367d0
  02f8874  nop
  02f8878  lwz 4, 192(30)
  02f887c  stw 3, 176(30)
  02f8880  lbz 5, 180(30)
  02f8884  extsb 5, 5
  02f8888  lwz 4, 0(4)
  02f888c  addc 3, 3, 4
  02f8890  lfs 1, 16(31)
  02f8894  addc 6, 3, 5
  02f8898  lfs 2, 20(31)
  02f889c  subc 3, 3, 5
  02f88a0  divw 7, 6, 4
  02f88a4  divw 5, 3, 4
  02f88a8  mullw 7, 7, 4
  02f88ac  mullw 4, 5, 4
  02f88b0  lis 5, 151
  02f88b4  subc 29, 6, 7
  02f88b8  addic 5, 5, -25376
  02f88bc  subc 28, 3, 4
  02f88c0  lfs 3, 128(5)
  02f88c4  lfs 4, 132(5)
  02f88c8  fsubs 1, 3, 1
  02f88cc  fsubs 2, 4, 2
  02f88d0  bl 0x5e8338
  02f88d4  nop
  02f88d8  sldi 3, 29, 4
  02f88dc  lwz 4, 192(30)
  02f88e0  fmr 31, 1
  02f88e4  addc 3, 4, 3
  02f88e8  lfs 1, 16(31)
  02f88ec  lfs 2, 20(31)
  02f88f0  clrldi 3, 3, 32
  02f88f4  lfs 3, 16(3)
  02f88f8  lfs 4, 20(3)
  02f88fc  fsubs 1, 3, 1
  02f8900  fsubs 2, 4, 2
  02f8904  bl 0x5e8338
  02f8908  nop
  02f890c  lwz 3, 192(30)
  02f8910  sldi 4, 28, 4
  02f8914  fmr 30, 1
  02f8918  addc 3, 3, 4
  02f891c  lfs 1, 16(31)
  02f8920  clrldi 3, 3, 32
  02f8924  lfs 2, 20(31)
  02f8928  lfs 3, 16(3)
  02f892c  lfs 4, 20(3)
  02f8930  fsubs 1, 3, 1
  02f8934  fsubs 2, 4, 2
  02f8938  bl 0x5e8338
  02f893c  nop
  02f8940  fmr 29, 1
  02f8944  fmr 1, 30
  02f8948  fmr 2, 31
  02f894c  bl 0x5026a0
  02f8950  nop
  02f8954  fmr 30, 1
  02f8958  fmr 1, 29
  02f895c  fmr 2, 31
  02f8960  bl 0x5026a0
  02f8964  nop
  02f8968  fcmpu 0, 30, 1
  02f896c  cror 6, 1, 2
  02f8970  bt 6, 0x2f8bbc
  02f8974  lbz 3, 180(30)
  02f8978  neg 3, 3
  02f897c  stb 3, 180(30)
  02f8980  b 0x2f8bbc
  02f8984  lwz 3, 192(30)
  02f8988  lwz 4, 176(30)
  02f898c  lbz 5, 180(30)
  02f8990  extsb 5, 5
  02f8994  lwz 6, 0(3)
  02f8998  addc 4, 4, 6
  02f899c  addc 29, 4, 5
  02f89a0  divw 4, 29, 6
  02f89a4  mullw 4, 4, 6
  02f89a8  lis 5, 114
  02f89ac  subc 29, 29, 4
  02f89b0  sldi 4, 29, 4
  02f89b4  addc 3, 3, 4
  02f89b8  lis 4, 47
  02f89bc  clrldi 3, 3, 32
  02f89c0  addi 4, 4, 31872
  02f89c4  addic 6, 1, 224
  02f89c8  lfs 1, 16(3)
  02f89cc  stfs 1, 208(1)
  02f89d0  lfs 1, 20(3)
  02f89d4  stfs 1, 212(1)
  02f89d8  lfs 1, 24(3)
  02f89dc  stfs 1, 216(1)
  02f89e0  lfs 1, 28(3)
  02f89e4  ori 3, 31, 0
  02f89e8  stfs 1, 220(1)
  02f89ec  lfs 1, 116(4)
  02f89f0  lfs 2, -3052(5)
  02f89f4  addic 4, 30, 96
  02f89f8  fmuls 1, 2, 1
  02f89fc  addic 5, 1, 208
  02f8a00  stfs 1, 132(30)
  02f8a04  bl 0x101cc0
  02f8a08  nop
  02f8a0c  cmpwi 3, 0
  02f8a10  bt 2, 0x2f8b1c
  02f8a14  lwz 3, 192(30)
  02f8a18  stw 29, 176(30)
  02f8a1c  lbz 4, 180(30)
  02f8a20  extsb 4, 4
  02f8a24  lwz 3, 0(3)
  02f8a28  addc 5, 29, 3
  02f8a2c  addc 6, 5, 4
  02f8a30  subc 4, 5, 4
  02f8a34  divw 5, 6, 3
  02f8a38  divw 7, 4, 3
  02f8a3c  mullw 5, 5, 3
  02f8a40  mullw 3, 7, 3
  02f8a44  lis 7, 151
  02f8a48  lfs 1, 16(31)
  02f8a4c  subc 29, 4, 3
  02f8a50  lfs 2, 20(31)
  02f8a54  addic 3, 7, -25376
  02f8a58  subc 28, 6, 5
  02f8a5c  lfs 3, 128(3)
  02f8a60  lfs 4, 132(3)
  02f8a64  fsubs 1, 3, 1
  02f8a68  fsubs 2, 4, 2
  02f8a6c  bl 0x5e8338
  02f8a70  nop
  02f8a74  lwz 3, 192(30)
  02f8a78  sldi 4, 28, 4
  02f8a7c  fmr 31, 1
  02f8a80  addc 3, 3, 4
  02f8a84  lfs 1, 16(31)
  02f8a88  clrldi 3, 3, 32
  02f8a8c  lfs 2, 20(31)
  02f8a90  lfs 3, 16(3)
  02f8a94  lfs 4, 20(3)
  02f8a98  fsubs 1, 3, 1
  02f8a9c  fsubs 2, 4, 2
  02f8aa0  bl 0x5e8338
  02f8aa4  nop
  02f8aa8  sldi 3, 29, 4
  02f8aac  lwz 4, 192(30)
  02f8ab0  fmr 30, 1
  02f8ab4  addc 3, 4, 3
  02f8ab8  lfs 1, 16(31)
  02f8abc  lfs 2, 20(31)
  02f8ac0  clrldi 3, 3, 32
  02f8ac4  lfs 3, 16(3)
  02f8ac8  lfs 4, 20(3)
  02f8acc  fsubs 1, 3, 1
  02f8ad0  fsubs 2, 4, 2
  02f8ad4  bl 0x5e8338
  02f8ad8  nop
  02f8adc  fmr 29, 1
  02f8ae0  fmr 1, 30
  02f8ae4  fmr 2, 31
  02f8ae8  bl 0x5026a0
  02f8aec  nop
  02f8af0  fmr 30, 1
  02f8af4  fmr 1, 29
  02f8af8  fmr 2, 31
  02f8afc  bl 0x5026a0
  02f8b00  nop
  02f8b04  fcmpu 0, 30, 1
  02f8b08  cror 6, 1, 2
  02f8b0c  bt 6, 0x2f8b1c
  02f8b10  lbz 3, 180(30)
  02f8b14  neg 3, 3
  02f8b18  stb 3, 180(30)
  02f8b1c  lis 3, 151
  02f8b20  lfs 1, 20(31)
  02f8b24  lfs 2, 16(31)
  02f8b28  addic 3, 3, -25376
  02f8b2c  lfs 3, 132(3)
  02f8b30  lfs 4, 128(3)
  02f8b34  fsubs 1, 1, 3
  02f8b38  fsubs 2, 2, 4
  02f8b3c  lis 3, 47
  02f8b40  addi 3, 3, 31872
  02f8b44  fmuls 1, 1, 1
  02f8b48  fmadds 1, 2, 2, 1
  02f8b4c  lfs 2, 16(3)
  02f8b50  fsqrts 1, 1
  02f8b54  fcmpu 0, 1, 2
  02f8b58  cror 6, 0, 2
  02f8b5c  bt 6, 0x2f8bbc
  02f8b60  li 3, 1
  02f8b64  lbz 4, 83(31)
  02f8b68  cmpwi 4, 0
  02f8b6c  stb 3, 32(31)
  02f8b70  bt 2, 0x2f8bbc
  02f8b74  ori 3, 31, 0
  02f8b78  li 4, 0
  02f8b7c  li 5, 0
  02f8b80  li 6, 3
  02f8b84  bl 0xfddc0
  02f8b88  nop
  02f8b8c  b 0x2f8bbc
  02f8b90  ori 3, 31, 0
  02f8b94  ori 4, 30, 0
  02f8b98  bl 0x10b030
  02f8b9c  nop
  02f8ba0  rlwinm 3, 3, 0, 25, 25
  02f8ba4  cmpwi 3, 0
  02f8ba8  bt 2, 0x2f8bbc
  02f8bac  ori 3, 31, 0
  02f8bb0  bl 0xefb38
  02f8bb4  nop
  02f8bb8  b 0x2f8bbc
  02f8bbc  ld 0, 336(1)
  02f8bc0  mtlr 0
  02f8bc4  lfd 26, 272(1)
  02f8bc8  lfd 27, 280(1)
  02f8bcc  lfd 28, 288(1)
  02f8bd0  lfd 29, 296(1)
  02f8bd4  lfd 30, 304(1)
  02f8bd8  lfd 31, 312(1)
  02f8bdc  ld 28, 240(1)
  02f8be0  ld 29, 248(1)
  02f8be4  ld 30, 256(1)
  02f8be8  ld 31, 264(1)
  02f8bec  addi 1, 1, 320
  02f8bf0  blr
