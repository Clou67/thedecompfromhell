# game/update/moby1073.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1073_001b4cdc:   # 0x1b4cdc, 0x30 bytes
  01b4cdc  stdu 1, -112(1)
  01b4ce0  mflr 0
  01b4ce4  std 0, 128(1)
  01b4ce8  lis 3, 230
  01b4cec  li 4, 128
  01b4cf0  addic 3, 3, 10304
  01b4cf4  bl 0x17cfdc
  01b4cf8  nop
  01b4cfc  ld 0, 128(1)
  01b4d00  mtlr 0
  01b4d04  addi 1, 1, 112
  01b4d08  blr

M1073_001b4d0c:   # 0x1b4d0c, 0x14 bytes
  01b4d0c  lis 3, 117
  01b4d10  lis 4, 1
  01b4d14  addic 3, 3, 32224
  01b4d18  stw 4, 72(3)
  01b4d1c  blr

UpdateMoby_1073:   # 0x1b4d38, 0x520 bytes
  01b4d38  stdu 1, -3520(1)
  01b4d3c  mflr 0
  01b4d40  std 0, 3536(1)
  01b4d44  stfd 31, 3512(1)
  01b4d48  std 27, 3472(1)
  01b4d4c  addi 0, 1, 3312
  01b4d50  stvx 28, 0, 0
  01b4d54  addic 0, 0, 16
  01b4d58  stvx 29, 0, 0
  01b4d5c  addic 0, 0, 16
  01b4d60  stvx 30, 0, 0
  01b4d64  addic 0, 0, 16
  01b4d68  stvx 31, 0, 0
  01b4d6c  lbz 4, 32(3)
  01b4d70  std 31, 3504(1)
  01b4d74  lis 27, 27
  01b4d78  lwz 31, 120(3)
  01b4d7c  cmpwi 4, 0
  01b4d80  addi 27, 27, 19744
  01b4d84  cmpwi 1, 4, 1
  01b4d88  std 30, 3496(1)
  01b4d8c  std 29, 3488(1)
  01b4d90  std 28, 3480(1)
  01b4d94  std 26, 3464(1)
  01b4d98  std 25, 3456(1)
  01b4d9c  std 24, 3448(1)
  01b4da0  std 23, 3440(1)
  01b4da4  std 22, 3432(1)
  01b4da8  std 21, 3424(1)
  01b4dac  std 20, 3416(1)
  01b4db0  std 19, 3408(1)
  01b4db4  std 18, 3400(1)
  01b4db8  std 17, 3392(1)
  01b4dbc  std 16, 3384(1)
  01b4dc0  cmpwi 6, 4, -1
  01b4dc4  bt 1, 0x1b4dd0
  01b4dc8  bf 25, 0x1b51e4
  01b4dcc  b 0x1b4dd8
  01b4dd0  bf 5, 0x1b4ea8
  01b4dd4  b 0x1b51e4
  01b4dd8  lis 4, 151
  01b4ddc  lwz 4, -25488(4)
  01b4de0  cmpwi 4, 10
  01b4de4  bf 2, 0x1b4e08
  01b4de8  lis 4, 151
  01b4dec  addic 4, 4, -25376
  01b4df0  lbz 4, 8356(4)
  01b4df4  cmpwi 4, 1
  01b4df8  bf 2, 0x1b4e08
  01b4dfc  bl 0xefb38
  01b4e00  nop
  01b4e04  b 0x1b51e4
  01b4e08  lis 4, 239
  01b4e0c  li 5, 22
  01b4e10  lis 6, 239
  01b4e14  li 8, 45
  01b4e18  li 7, 10
  01b4e1c  stw 5, -1660(4)
  01b4e20  li 4, 0
  01b4e24  mtctr 7
  01b4e28  stw 8, -1664(6)
  01b4e2c  lis 5, 26214
  01b4e30  lis 6, 1
  01b4e34  ori 5, 5, 26215
  01b4e38  mulhw 5, 5, 4
  01b4e3c  ori 6, 6, 11264
  01b4e40  srawi 5, 5, 2
  01b4e44  addc 6, 31, 6
  01b4e48  srwi 8, 5, 31
  01b4e4c  lis 7, 1
  01b4e50  addc 5, 5, 8
  01b4e54  lis 8, 1
  01b4e58  ori 7, 7, 11504
  01b4e5c  ori 8, 8, 11384
  01b4e60  lis 9, 1
  01b4e64  stw 5, 0(6)
  01b4e68  addc 6, 31, 8
  01b4e6c  addc 7, 31, 7
  01b4e70  ori 8, 9, 11624
  01b4e74  addic 10, 5, 23
  01b4e78  addic 11, 5, 11
  01b4e7c  addc 8, 31, 8
  01b4e80  addic 5, 5, 34
  01b4e84  stw 10, 0(7)
  01b4e88  stw 11, 0(6)
  01b4e8c  addic 4, 4, 45
  01b4e90  addic 31, 31, 4
  01b4e94  stw 5, 0(8)
  01b4e98  bdnz 0x1b4e2c
  01b4e9c  li 4, 1
  01b4ea0  stb 4, 32(3)
  01b4ea4  b 0x1b51e4
  01b4ea8  lis 3, 1
  01b4eac  lis 4, 117
  01b4eb0  ori 3, 3, 11744
  01b4eb4  lis 5, 114
  01b4eb8  lfs 1, 32340(4)
  01b4ebc  lfsx 2, 31, 3
  01b4ec0  lfs 3, -3052(5)
  01b4ec4  fmadds 1, 1, 3, 2
  01b4ec8  stfsx 1, 31, 3
  01b4ecc  lfs 2, 0(27)
  01b4ed0  fcmpu 0, 1, 2
  01b4ed4  cror 6, 0, 2
  01b4ed8  bt 6, 0x1b4eec
  01b4edc  fsubs 1, 1, 2
  01b4ee0  lis 3, 1
  01b4ee4  ori 3, 3, 11744
  01b4ee8  stfsx 1, 31, 3
  01b4eec  li 30, 0
  01b4ef0  ori 24, 30, 0
  01b4ef4  ori 29, 24, 0
  01b4ef8  addic 18, 1, -48
  01b4efc  ori 25, 29, 0
  01b4f00  addic 17, 1, 112
  01b4f04  addic 16, 1, 272
  01b4f08  ori 22, 25, 0
  01b4f0c  sldi 3, 30, 7
  01b4f10  sldi 4, 30, 3
  01b4f14  lis 5, 1
  01b4f18  subc 3, 3, 4
  01b4f1c  ori 4, 5, 11264
  01b4f20  addc 26, 3, 31
  01b4f24  addc 26, 26, 25
  01b4f28  addc 3, 26, 4
  01b4f2c  clrldi 3, 3, 32
  01b4f30  bl 0x4fff60
  01b4f34  nop
  01b4f38  cmpwi 3, 0
  01b4f3c  bt 2, 0x1b5138
  01b4f40  mulli 3, 30, 9600
  01b4f44  li 4, 8
  01b4f48  addc 23, 3, 31
  01b4f4c  lfs 31, 4(27)
  01b4f50  li 3, 12
  01b4f54  vspltisw 29, 0
  01b4f58  li 5, 16
  01b4f5c  addc 23, 23, 22
  01b4f60  <unknown>
  01b4f64  ori 28, 24, 0
  01b4f68  addc 4, 1, 22
  01b4f6c  <unknown>
  01b4f70  addic 20, 4, 112
  01b4f74  <unknown>
  01b4f78  clrldi 21, 23, 32
  01b4f7c  vspltw 31, 31, 0
  01b4f80  clrldi 20, 20, 32
  01b4f84  vspltw 30, 30, 0
  01b4f88  addic 19, 21, 4
  01b4f8c  vspltw 28, 28, 0
  01b4f90  vspltisw 2, -1
  01b4f94  lis 3, 117
  01b4f98  vspltisw 4, -1
  01b4f9c  li 4, 32336
  01b4fa0  stw 24, 8(21)
  01b4fa4  vcfsx 3, 29, 0
  01b4fa8  stw 24, 0(21)
  01b4fac  vslw 2, 2, 2
  01b4fb0  vslw 4, 4, 4
  01b4fb4  <unknown>
  01b4fb8  vmaddfp 2, 5, 31, 2
  01b4fbc  vmaddfp 4, 5, 30, 4
  01b4fc0  lis 4, 16256
  01b4fc4  fmr 1, 31
  01b4fc8  lis 5, 117
  01b4fcc  lis 6, 114
  01b4fd0  ori 3, 20, 0
  01b4fd4  vnmsubfp 2, 3, 2, 4
  01b4fd8  vxor 2, 2, 28
  01b4fdc  vspltw 2, 2, 0
  01b4fe0  stvewx 2, 0, 19
  01b4fe4  stw 4, 12(21)
  01b4fe8  lfs 2, 32332(5)
  01b4fec  lfs 3, -3052(6)
  01b4ff0  fmuls 2, 2, 3
  01b4ff4  bl 0xfea60
  01b4ff8  nop
  01b4ffc  vspltisw 2, 1
  01b5000  addic 28, 28, 1
  01b5004  addic 19, 19, 320
  01b5008  cmpwi 28, 20
  01b500c  addic 21, 21, 320
  01b5010  addic 20, 20, 160
  01b5014  vadduwm 29, 29, 2
  01b5018  bt 0, 0x1b4f90
  01b501c  addic 4, 23, 320
  01b5020  lis 3, 0
  01b5024  lfs 1, 20(27)
  01b5028  lis 6, 0
  01b502c  lis 8, 0
  01b5030  ori 7, 3, 38412
  01b5034  clrldi 4, 4, 32
  01b5038  li 9, 18
  01b503c  ori 10, 6, 38404
  01b5040  ori 8, 8, 38408
  01b5044  addc 6, 4, 7
  01b5048  addic 23, 18, 160
  01b504c  addic 3, 17, 160
  01b5050  addic 5, 16, 160
  01b5054  addc 7, 4, 10
  01b5058  addc 8, 4, 8
  01b505c  mtctr 9
  01b5060  lfs 2, 0(23)
  01b5064  lis 9, 0
  01b5068  lfs 3, 0(3)
  01b506c  ori 9, 9, 38400
  01b5070  fadds 2, 2, 3
  01b5074  addc 9, 4, 9
  01b5078  addic 4, 4, 320
  01b507c  stfs 2, 0(9)
  01b5080  lfs 2, 4(23)
  01b5084  lfs 3, 4(3)
  01b5088  fadds 2, 2, 3
  01b508c  stfs 2, 0(7)
  01b5090  lfs 2, 8(23)
  01b5094  lfs 3, 8(3)
  01b5098  fadds 2, 2, 3
  01b509c  addic 3, 3, 160
  01b50a0  stfs 2, 0(8)
  01b50a4  lfs 2, 12(23)
  01b50a8  stfs 2, 0(6)
  01b50ac  lfs 2, 0(9)
  01b50b0  lfs 3, 0(5)
  01b50b4  fadds 2, 2, 3
  01b50b8  addic 6, 6, 320
  01b50bc  addic 23, 23, 160
  01b50c0  stfs 2, 0(9)
  01b50c4  lfs 2, 0(7)
  01b50c8  lfs 3, 4(5)
  01b50cc  fadds 2, 2, 3
  01b50d0  stfs 2, 0(7)
  01b50d4  lfs 2, 0(8)
  01b50d8  lfs 3, 8(5)
  01b50dc  fadds 2, 2, 3
  01b50e0  addic 5, 5, 160
  01b50e4  stfs 2, 0(8)
  01b50e8  lfs 2, 0(9)
  01b50ec  fmuls 2, 2, 1
  01b50f0  stfs 2, 0(9)
  01b50f4  lfs 2, 0(7)
  01b50f8  fmuls 2, 2, 1
  01b50fc  stfs 2, 0(7)
  01b5100  lfs 2, 0(8)
  01b5104  addic 7, 7, 320
  01b5108  fmuls 2, 2, 1
  01b510c  stfs 2, 0(8)
  01b5110  addic 8, 8, 320
  01b5114  bdnz 0x1b5060
  01b5118  lis 4, 1
  01b511c  lis 3, 239
  01b5120  clrldi 5, 26, 32
  01b5124  ori 4, 4, 11264
  01b5128  addc 4, 5, 4
  01b512c  lwz 3, -1664(3)
  01b5130  stw 3, 0(4)
  01b5134  b 0x1b51b8
  01b5138  mulli 3, 30, 9600
  01b513c  li 5, 18
  01b5140  addc 3, 3, 31
  01b5144  mtctr 5
  01b5148  addc 3, 3, 22
  01b514c  lis 4, 0
  01b5150  addic 3, 3, 320
  01b5154  lis 5, 0
  01b5158  clrldi 3, 3, 32
  01b515c  ori 4, 4, 38404
  01b5160  ori 5, 5, 38408
  01b5164  addc 4, 3, 4
  01b5168  addc 5, 3, 5
  01b516c  lis 6, 0
  01b5170  lfs 1, 0(3)
  01b5174  ori 6, 6, 38400
  01b5178  lfs 2, 4(3)
  01b517c  addc 6, 3, 6
  01b5180  lfs 3, 0(6)
  01b5184  fadds 1, 1, 3
  01b5188  lfs 3, 8(3)
  01b518c  stfs 1, 0(3)
  01b5190  lfs 1, 0(4)
  01b5194  addic 4, 4, 320
  01b5198  fadds 1, 2, 1
  01b519c  stfs 1, 4(3)
  01b51a0  lfs 1, 0(5)
  01b51a4  addic 5, 5, 320
  01b51a8  fadds 1, 3, 1
  01b51ac  stfs 1, 8(3)
  01b51b0  addic 3, 3, 320
  01b51b4  bdnz 0x1b516c
  01b51b8  addic 29, 29, 1
  01b51bc  addic 22, 22, 16
  01b51c0  cmpwi 29, 10
  01b51c4  addic 25, 25, 4
  01b51c8  addic 18, 18, 16
  01b51cc  addic 17, 17, 16
  01b51d0  addic 16, 16, 16
  01b51d4  bt 0, 0x1b4f0c
  01b51d8  addic 30, 30, 1
  01b51dc  cmpwi 30, 4
  01b51e0  bt 0, 0x1b4ef4
  01b51e4  li 0, 3312
  01b51e8  lvx 28, 1, 0
  01b51ec  addic 0, 0, 16
  01b51f0  lvx 29, 1, 0
  01b51f4  addic 0, 0, 16
  01b51f8  lvx 30, 1, 0
  01b51fc  addic 0, 0, 16
  01b5200  lvx 31, 1, 0
  01b5204  ld 0, 3536(1)
  01b5208  mtlr 0
  01b520c  lfd 31, 3512(1)
  01b5210  ld 16, 3384(1)
  01b5214  ld 17, 3392(1)
  01b5218  ld 18, 3400(1)
  01b521c  ld 19, 3408(1)
  01b5220  ld 20, 3416(1)
  01b5224  ld 21, 3424(1)
  01b5228  ld 22, 3432(1)
  01b522c  ld 23, 3440(1)
  01b5230  ld 24, 3448(1)
  01b5234  ld 25, 3456(1)
  01b5238  ld 26, 3464(1)
  01b523c  ld 27, 3472(1)
  01b5240  ld 28, 3480(1)
  01b5244  ld 29, 3488(1)
  01b5248  ld 30, 3496(1)
  01b524c  ld 31, 3504(1)
  01b5250  addi 1, 1, 3520
  01b5254  blr
