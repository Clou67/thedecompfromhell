# game/update/moby112.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001d4cb0:   # 0x1d4cb0, 0x48 bytes
  01d4cb0  stdu 1, -112(1)
  01d4cb4  mflr 0
  01d4cb8  std 0, 128(1)
  01d4cbc  lbz 4, 32(3)
  01d4cc0  cmpwi 4, 1
  01d4cc4  bf 2, 0x1d4ce8
  01d4cc8  ori 6, 3, 0
  01d4ccc  li 7, 2
  01d4cd0  li 3, 0
  01d4cd4  li 4, 0
  01d4cd8  ori 5, 6, 0
  01d4cdc  stb 7, 32(6)
  01d4ce0  bl 0x15d12c
  01d4ce4  nop
  01d4ce8  ld 0, 128(1)
  01d4cec  mtlr 0
  01d4cf0  addi 1, 1, 112
  01d4cf4  blr

FUN_001d4cf8:   # 0x1d4cf8, 0x2c bytes
  01d4cf8  lbz 3, 32(3)
  01d4cfc  cmpwi 3, 7
  01d4d00  cmpwi 1, 3, 4
  01d4d04  bf 2, 0x1d4d10
  01d4d08  li 3, 2
  01d4d0c  b 0x1d4d20
  01d4d10  bt 4, 0x1d4d1c
  01d4d14  li 3, 1
  01d4d18  b 0x1d4d20
  01d4d1c  li 3, 0
  01d4d20  blr

M1192_001d4d30:   # 0x1d4d30, 0x44 bytes
  01d4d30  lis 3, 29
  01d4d34  lis 4, 114
  01d4d38  addi 3, 3, 19748
  01d4d3c  lis 5, 118
  01d4d40  lis 6, 239
  01d4d44  lfs 1, 0(3)
  01d4d48  lfs 2, 4(3)
  01d4d4c  lfs 3, -3052(4)
  01d4d50  addic 4, 5, 17676
  01d4d54  fmuls 1, 3, 1
  01d4d58  fmuls 2, 3, 2
  01d4d5c  lis 3, 1
  01d4d60  lis 5, 239
  01d4d64  stw 3, 72(4)
  01d4d68  stfs 1, 9920(6)
  01d4d6c  stfs 2, 9924(5)
  01d4d70  blr

FUN_001d4d88:   # 0x1d4d88, 0x278 bytes
  01d4d88  stdu 1, -272(1)
  01d4d8c  mflr 0
  01d4d90  std 0, 288(1)
  01d4d94  stfd 27, 232(1)
  01d4d98  stfd 28, 240(1)
  01d4d9c  stfd 29, 248(1)
  01d4da0  stfd 30, 256(1)
  01d4da4  stfd 31, 264(1)
  01d4da8  std 25, 176(1)
  01d4dac  lis 6, 0
  01d4db0  ori 25, 3, 0
  01d4db4  fmr 31, 1
  01d4db8  std 31, 224(1)
  01d4dbc  li 3, 112
  01d4dc0  std 30, 216(1)
  01d4dc4  ori 31, 10, 0
  01d4dc8  std 29, 208(1)
  01d4dcc  ori 30, 9, 0
  01d4dd0  std 28, 200(1)
  01d4dd4  ori 29, 8, 0
  01d4dd8  std 27, 192(1)
  01d4ddc  std 23, 160(1)
  01d4de0  ori 28, 7, 0
  01d4de4  ori 27, 5, 0
  01d4de8  std 26, 184(1)
  01d4dec  lwz 23, 388(1)
  01d4df0  std 24, 168(1)
  01d4df4  std 22, 152(1)
  01d4df8  std 21, 144(1)
  01d4dfc  std 20, 136(1)
  01d4e00  ori 26, 4, 0
  01d4e04  bl 0xefa28
  01d4e08  nop
  01d4e0c  ori 24, 3, 0
  01d4e10  cmpwi 24, 0
  01d4e14  bt 2, 0x1d4fa8
  01d4e18  lis 3, 29
  01d4e1c  lwz 21, 120(24)
  01d4e20  addi 22, 3, 19832
  01d4e24  lfs 30, 0(22)
  01d4e28  lfs 29, 4(22)
  01d4e2c  fmr 1, 30
  01d4e30  fmr 2, 29
  01d4e34  bl 0xfcbe8
  01d4e38  nop
  01d4e3c  fmr 28, 1
  01d4e40  fmr 1, 30
  01d4e44  fmr 2, 29
  01d4e48  bl 0xfcbe8
  01d4e4c  nop
  01d4e50  fmr 27, 1
  01d4e54  fmr 1, 30
  01d4e58  fmr 2, 29
  01d4e5c  bl 0xfcbe8
  01d4e60  nop
  01d4e64  li 3, 255
  01d4e68  li 7, 1
  01d4e6c  fmr 30, 1
  01d4e70  li 20, 0
  01d4e74  clrlwi 4, 29, 24
  01d4e78  stb 3, 48(24)
  01d4e7c  clrlwi 5, 30, 24
  01d4e80  sth 3, 50(24)
  01d4e84  clrlwi 6, 31, 24
  01d4e88  stb 7, 49(24)
  01d4e8c  ori 3, 24, 0
  01d4e90  stb 20, 32(24)
  01d4e94  stb 23, 35(24)
  01d4e98  bl 0xf1ec8
  01d4e9c  nop
  01d4ea0  lfs 1, 44(24)
  01d4ea4  li 3, 8
  01d4ea8  fmuls 1, 1, 31
  01d4eac  vspltisw 2, -1
  01d4eb0  lis 4, 114
  01d4eb4  li 5, -3056
  01d4eb8  vslw 2, 2, 2
  01d4ebc  stfs 1, 24(21)
  01d4ec0  stw 20, 44(24)
  01d4ec4  stw 25, 16(21)
  01d4ec8  lfs 1, 0(26)
  01d4ecc  stfs 1, 16(24)
  01d4ed0  lfs 1, 4(26)
  01d4ed4  stfs 1, 20(24)
  01d4ed8  lfs 1, 8(26)
  01d4edc  stfs 1, 24(24)
  01d4ee0  lfs 1, 12(26)
  01d4ee4  stfs 1, 28(24)
  01d4ee8  lfs 1, 0(27)
  01d4eec  stfs 1, 0(21)
  01d4ef0  lfs 1, 4(27)
  01d4ef4  stfs 1, 4(21)
  01d4ef8  lfs 1, 8(27)
  01d4efc  stfs 1, 8(21)
  01d4f00  lfs 1, 12(27)
  01d4f04  stfs 1, 12(21)
  01d4f08  stfs 28, 64(24)
  01d4f0c  stfs 27, 68(24)
  01d4f10  stfs 30, 72(24)
  01d4f14  stw 20, 76(24)
  01d4f18  stw 28, 20(21)
  01d4f1c  <unknown>
  01d4f20  <unknown>
  01d4f24  vspltw 3, 3, 0
  01d4f28  li 4, 28
  01d4f2c  stw 28, 112(1)
  01d4f30  li 0, 112
  01d4f34  stw 28, 116(1)
  01d4f38  stw 28, 120(1)
  01d4f3c  vmaddfp 2, 4, 3, 2
  01d4f40  stw 28, 124(1)
  01d4f44  ori 3, 28, 0
  01d4f48  lvx 3, 1, 0
  01d4f4c  vctsxs 2, 2, 0
  01d4f50  vsubuwm 2, 3, 2
  01d4f54  vsplth 2, 2, 1
  01d4f58  stvehx 2, 4, 21
  01d4f5c  bl 0x502730
  01d4f60  nop
  01d4f64  lhz 3, 28(21)
  01d4f68  lwz 4, 20(21)
  01d4f6c  extsh 3, 3
  01d4f70  fmr 31, 1
  01d4f74  subc 3, 4, 3
  01d4f78  extsw 3, 3
  01d4f7c  bl 0x502730
  01d4f80  nop
  01d4f84  lfs 2, 24(21)
  01d4f88  fmuls 1, 1, 2
  01d4f8c  clrlwi 4, 23, 24
  01d4f90  ori 3, 24, 0
  01d4f94  fdivs 1, 1, 31
  01d4f98  stfs 1, 44(24)
  01d4f9c  sth 4, 30(21)
  01d4fa0  bl 0xf31a8
  01d4fa4  nop
  01d4fa8  ori 3, 24, 0
  01d4fac  ld 0, 288(1)
  01d4fb0  mtlr 0
  01d4fb4  lfd 27, 232(1)
  01d4fb8  lfd 28, 240(1)
  01d4fbc  lfd 29, 248(1)
  01d4fc0  lfd 30, 256(1)
  01d4fc4  lfd 31, 264(1)
  01d4fc8  ld 20, 136(1)
  01d4fcc  ld 21, 144(1)
  01d4fd0  ld 22, 152(1)
  01d4fd4  ld 23, 160(1)
  01d4fd8  ld 24, 168(1)
  01d4fdc  ld 25, 176(1)
  01d4fe0  ld 26, 184(1)
  01d4fe4  ld 27, 192(1)
  01d4fe8  ld 28, 200(1)
  01d4fec  ld 29, 208(1)
  01d4ff0  ld 30, 216(1)
  01d4ff4  ld 31, 224(1)
  01d4ff8  addi 1, 1, 272
  01d4ffc  blr

UpdateMoby_112:   # 0x1d5008, 0x140 bytes
  01d5008  stdu 1, -160(1)
  01d500c  mflr 0
  01d5010  std 0, 176(1)
  01d5014  stfd 31, 152(1)
  01d5018  std 31, 144(1)
  01d501c  std 29, 128(1)
  01d5020  ori 31, 3, 0
  01d5024  lis 3, 29
  01d5028  std 30, 136(1)
  01d502c  addi 29, 3, 20480
  01d5030  lwz 30, 120(31)
  01d5034  lwz 3, 20(30)
  01d5038  std 28, 120(1)
  01d503c  extsw 3, 3
  01d5040  bl 0x502730
  01d5044  nop
  01d5048  lhz 3, 28(30)
  01d504c  lwz 4, 20(30)
  01d5050  extsh 3, 3
  01d5054  fmr 31, 1
  01d5058  subc 3, 4, 3
  01d505c  extsw 3, 3
  01d5060  bl 0x502730
  01d5064  nop
  01d5068  lfs 2, 24(30)
  01d506c  fmuls 1, 1, 2
  01d5070  lis 28, 114
  01d5074  fdivs 2, 1, 31
  01d5078  lfs 1, 64(31)
  01d507c  stfs 2, 44(31)
  01d5080  lfs 31, 0(29)
  01d5084  lfs 3, -3052(28)
  01d5088  fmuls 2, 3, 31
  01d508c  bl 0x502578
  01d5090  nop
  01d5094  stfs 1, 64(31)
  01d5098  lfs 1, 68(31)
  01d509c  lfs 2, -3052(28)
  01d50a0  fmuls 2, 2, 31
  01d50a4  bl 0x502578
  01d50a8  nop
  01d50ac  stfs 1, 68(31)
  01d50b0  lfs 1, 72(31)
  01d50b4  lfs 2, -3052(28)
  01d50b8  fmuls 2, 2, 31
  01d50bc  bl 0x502578
  01d50c0  nop
  01d50c4  addic 3, 30, 28
  01d50c8  stfs 1, 72(31)
  01d50cc  bl 0x4fffb4
  01d50d0  nop
  01d50d4  cmpwi 3, 0
  01d50d8  bt 2, 0x1d50ec
  01d50dc  ori 3, 31, 0
  01d50e0  bl 0xefb38
  01d50e4  nop
  01d50e8  b 0x1d5124
  01d50ec  lwz 3, 20(30)
  01d50f0  lhz 4, 28(30)
  01d50f4  srawi 5, 3, 1
  01d50f8  extsh 4, 4
  01d50fc  addze 5, 5
  01d5100  cmpw 4, 5
  01d5104  bf 0, 0x1d5124
  01d5108  lhz 5, 30(30)
  01d510c  srawi 3, 3, 1
  01d5110  extsh 5, 5
  01d5114  mullw 4, 4, 5
  01d5118  addze 3, 3
  01d511c  divw 3, 4, 3
  01d5120  stb 3, 35(31)
  01d5124  ld 0, 176(1)
  01d5128  mtlr 0
  01d512c  lfd 31, 152(1)
  01d5130  ld 28, 120(1)
  01d5134  ld 29, 128(1)
  01d5138  ld 30, 136(1)
  01d513c  ld 31, 144(1)
  01d5140  addi 1, 1, 160
  01d5144  blr
