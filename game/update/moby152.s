# game/update/moby152.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_152:   # 0x291970, 0x85c bytes
  0291970  stdu 1, -288(1)
  0291974  mflr 0
  0291978  std 0, 304(1)
  029197c  stfd 23, 216(1)
  0291980  stfd 24, 224(1)
  0291984  stfd 25, 232(1)
  0291988  stfd 26, 240(1)
  029198c  stfd 27, 248(1)
  0291990  stfd 28, 256(1)
  0291994  stfd 29, 264(1)
  0291998  stfd 30, 272(1)
  029199c  stfd 31, 280(1)
  02919a0  std 31, 208(1)
  02919a4  std 30, 200(1)
  02919a8  ori 31, 3, 0
  02919ac  std 29, 192(1)
  02919b0  lwz 30, 120(31)
  02919b4  lwz 29, 120(31)
  02919b8  lfs 27, 16(31)
  02919bc  lwz 3, 40(30)
  02919c0  lfs 26, 20(31)
  02919c4  addic 3, 3, 1
  02919c8  lfs 25, 24(31)
  02919cc  lfs 24, 28(31)
  02919d0  stw 3, 40(30)
  02919d4  lbz 3, 32(31)
  02919d8  cmpwi 3, 0
  02919dc  cmpwi 1, 3, 4
  02919e0  cmpwi 6, 3, 3
  02919e4  std 28, 184(1)
  02919e8  cmpwi 7, 3, 2
  02919ec  bt 2, 0x2919f8
  02919f0  lfs 25, 8(30)
  02919f4  stfs 25, 24(31)
  02919f8  bt 6, 0x292098
  02919fc  bt 26, 0x2920bc
  0291a00  bt 30, 0x291eb4
  0291a04  cmpwi 3, 1
  0291a08  bt 2, 0x291aa4
  0291a0c  cmpwi 3, 0
  0291a10  bf 2, 0x2920bc
  0291a14  lis 3, 16134
  0291a18  li 28, 0
  0291a1c  lis 4, 123
  0291a20  ori 3, 3, 2706
  0291a24  lis 5, 123
  0291a28  stw 28, 64(31)
  0291a2c  stw 28, 72(31)
  0291a30  stw 3, 68(31)
  0291a34  lfs 1, -19360(4)
  0291a38  lfs 2, -19356(5)
  0291a3c  bl 0xfcbe8
  0291a40  nop
  0291a44  stfs 1, 12(29)
  0291a48  ori 3, 31, 0
  0291a4c  stw 28, 40(29)
  0291a50  lfs 1, 24(31)
  0291a54  stfs 1, 8(29)
  0291a58  bl 0x10c000
  0291a5c  nop
  0291a60  ori 3, 31, 0
  0291a64  bl 0x12bfd8
  0291a68  nop
  0291a6c  stw 3, 36(29)
  0291a70  li 5, 2
  0291a74  li 3, 0
  0291a78  lwz 4, 44(30)
  0291a7c  li 6, 1
  0291a80  subc 3, 3, 4
  0291a84  subc 4, 5, 6
  0291a88  cntlzw 3, 3
  0291a8c  sldi 3, 3, 58
  0291a90  sradi 3, 3, 63
  0291a94  and 3, 3, 4
  0291a98  addc 3, 6, 3
  0291a9c  stb 3, 32(31)
  0291aa0  b 0x2920bc
  0291aa4  lis 3, 41
  0291aa8  lfs 1, 20(30)
  0291aac  lis 4, 114
  0291ab0  lfs 6, 16(30)
  0291ab4  addi 3, 3, 6464
  0291ab8  fmuls 5, 1, 1
  0291abc  lfs 2, 0(3)
  0291ac0  lfs 3, 24(30)
  0291ac4  lfs 4, -3048(4)
  0291ac8  fnmsubs 3, 4, 2, 3
  0291acc  fmadds 2, 6, 6, 5
  0291ad0  lis 4, 123
  0291ad4  fmadds 23, 3, 3, 2
  0291ad8  stfs 3, 24(30)
  0291adc  lfs 4, 4(3)
  0291ae0  lfs 2, -19380(4)
  0291ae4  lis 3, 114
  0291ae8  fmuls 4, 2, 4
  0291aec  fsqrts 23, 23
  0291af0  lfs 5, -3064(3)
  0291af4  fmuls 4, 4, 5
  0291af8  fcmpu 0, 23, 4
  0291afc  cror 6, 0, 2
  0291b00  bt 6, 0x291b60
  0291b04  fdivs 5, 4, 23
  0291b08  lis 3, 41
  0291b0c  addi 3, 3, 6464
  0291b10  lfs 7, 8(3)
  0291b14  fsub 8, 7, 23
  0291b18  fsub 9, 7, 23
  0291b1c  fsub 10, 7, 23
  0291b20  fsub 11, 23, 7
  0291b24  fsub 12, 23, 7
  0291b28  fsub 13, 23, 7
  0291b2c  fmr 23, 4
  0291b30  fmuls 6, 6, 5
  0291b34  fmuls 1, 1, 5
  0291b38  fmuls 3, 3, 5
  0291b3c  fsel 4, 8, 7, 6
  0291b40  fsel 5, 9, 7, 1
  0291b44  fsel 7, 10, 7, 3
  0291b48  fsel 6, 11, 4, 6
  0291b4c  fsel 1, 12, 5, 1
  0291b50  fsel 3, 13, 7, 3
  0291b54  stfs 6, 16(30)
  0291b58  stfs 1, 20(30)
  0291b5c  stfs 3, 24(30)
  0291b60  fmuls 4, 1, 1
  0291b64  fadds 30, 26, 1
  0291b68  lis 3, 41
  0291b6c  fadds 29, 25, 3
  0291b70  addi 3, 3, 6464
  0291b74  fadds 31, 27, 6
  0291b78  fmadds 1, 6, 6, 4
  0291b7c  lfs 28, 8(3)
  0291b80  fmr 5, 28
  0291b84  fmadds 1, 3, 3, 1
  0291b88  fmr 4, 5
  0291b8c  fsqrts 1, 1
  0291b90  fmr 3, 4
  0291b94  fcmpu 0, 1, 3
  0291b98  bt 2, 0x291bbc
  0291b9c  fdivs 5, 2, 1
  0291ba0  fmuls 3, 6, 5
  0291ba4  stfs 3, 128(1)
  0291ba8  lfs 4, 20(30)
  0291bac  fmuls 4, 4, 5
  0291bb0  stfs 4, 132(1)
  0291bb4  lfs 1, 24(30)
  0291bb8  fmuls 5, 1, 5
  0291bbc  fsubs 1, 27, 3
  0291bc0  stfs 24, 140(1)
  0291bc4  fsubs 2, 26, 4
  0291bc8  fsubs 3, 25, 5
  0291bcc  lis 3, 123
  0291bd0  stfs 1, 128(1)
  0291bd4  stfs 2, 132(1)
  0291bd8  stfs 3, 136(1)
  0291bdc  lfs 1, 20(30)
  0291be0  lfs 2, 16(30)
  0291be4  fmuls 1, 1, 1
  0291be8  lfs 3, 24(30)
  0291bec  fmadds 1, 2, 2, 1
  0291bf0  fmadds 1, 3, 3, 1
  0291bf4  lfs 3, -19380(3)
  0291bf8  fadds 3, 3, 23
  0291bfc  fsqrts 1, 1
  0291c00  fcmpu 0, 1, 28
  0291c04  bf 2, 0x291c30
  0291c08  fmr 3, 28
  0291c0c  stfs 2, 144(1)
  0291c10  lfs 1, 20(30)
  0291c14  stfs 1, 148(1)
  0291c18  lfs 2, 24(30)
  0291c1c  stfs 2, 152(1)
  0291c20  lfs 4, 28(30)
  0291c24  fmr 1, 3
  0291c28  fmr 2, 1
  0291c2c  b 0x291c58
  0291c30  fdivs 3, 3, 1
  0291c34  fmuls 2, 2, 3
  0291c38  stfs 2, 144(1)
  0291c3c  lfs 1, 20(30)
  0291c40  fmuls 1, 1, 3
  0291c44  stfs 1, 148(1)
  0291c48  lfs 4, 24(30)
  0291c4c  fmuls 3, 4, 3
  0291c50  stfs 3, 152(1)
  0291c54  lfs 4, 28(30)
  0291c58  lis 3, 164
  0291c5c  lis 4, 161
  0291c60  fadds 2, 2, 27
  0291c64  fadds 1, 1, 26
  0291c68  fadds 3, 3, 25
  0291c6c  lwz 3, -28512(3)
  0291c70  lwz 4, 1808(4)
  0291c74  subc 3, 31, 3
  0291c78  stfs 4, 156(1)
  0291c7c  srawi 5, 4, 1
  0291c80  addze 5, 5
  0291c84  srawi 3, 3, 8
  0291c88  sldi 5, 5, 1
  0291c8c  addze 3, 3
  0291c90  stfs 2, 144(1)
  0291c94  subc 4, 4, 5
  0291c98  stfs 1, 148(1)
  0291c9c  srawi 6, 3, 1
  0291ca0  stfs 3, 152(1)
  0291ca4  addze 6, 6
  0291ca8  sldi 5, 6, 1
  0291cac  subc 3, 3, 5
  0291cb0  cmpw 4, 3
  0291cb4  bf 2, 0x291ea0
  0291cb8  addic 4, 1, 144
  0291cbc  addic 3, 1, 128
  0291cc0  li 5, 2
  0291cc4  li 6, 0
  0291cc8  li 7, 0
  0291ccc  bl 0x55ab8
  0291cd0  nop
  0291cd4  lis 4, 123
  0291cd8  cmpwi 3, 0
  0291cdc  lfs 1, -19380(4)
  0291ce0  bt 2, 0x291ea0
  0291ce4  lis 3, 161
  0291ce8  addic 3, 3, 2368
  0291cec  lwz 4, 24(3)
  0291cf0  cmpwi 4, 0
  0291cf4  bt 2, 0x291d0c
  0291cf8  lwz 4, 40(30)
  0291cfc  cmpwi 4, 10
  0291d00  bf 0, 0x291d0c
  0291d04  fmr 28, 24
  0291d08  b 0x291ea4
  0291d0c  lis 4, 251
  0291d10  lfs 2, -9372(4)
  0291d14  fcmpu 0, 2, 23
  0291d18  cror 6, 0, 2
  0291d1c  bt 6, 0x291d58
  0291d20  li 4, 0
  0291d24  stw 4, 28(30)
  0291d28  stw 4, 24(30)
  0291d2c  stw 4, 20(30)
  0291d30  stw 4, 16(30)
  0291d34  lfs 31, 32(3)
  0291d38  lfs 30, 36(3)
  0291d3c  lfs 29, 40(3)
  0291d40  lfs 28, 44(3)
  0291d44  lwz 3, 24(3)
  0291d48  fadds 29, 1, 29
  0291d4c  cmpwi 3, 0
  0291d50  bt 2, 0x291e80
  0291d54  b 0x291ea4
  0291d58  lfs 30, 36(3)
  0291d5c  lfs 31, 32(3)
  0291d60  fsubs 2, 26, 30
  0291d64  fsubs 3, 27, 31
  0291d68  lfs 29, 40(3)
  0291d6c  fsubs 4, 25, 29
  0291d70  fmr 27, 28
  0291d74  fmuls 5, 2, 2
  0291d78  addic 6, 1, 112
  0291d7c  lfs 28, 44(3)
  0291d80  addic 5, 3, 64
  0291d84  addic 4, 30, 16
  0291d88  ori 3, 6, 0
  0291d8c  fmadds 5, 3, 3, 5
  0291d90  fmadds 5, 4, 4, 5
  0291d94  fsqrts 5, 5
  0291d98  fdivs 1, 1, 5
  0291d9c  fsub 6, 27, 5
  0291da0  fsub 7, 27, 5
  0291da4  fsub 8, 27, 5
  0291da8  fsub 9, 5, 27
  0291dac  fsub 10, 5, 27
  0291db0  fsub 5, 5, 27
  0291db4  fmuls 4, 1, 4
  0291db8  fmuls 2, 1, 2
  0291dbc  fmuls 1, 1, 3
  0291dc0  fsel 3, 6, 27, 4
  0291dc4  fsel 6, 7, 27, 2
  0291dc8  fsel 7, 8, 27, 1
  0291dcc  fsel 3, 9, 3, 4
  0291dd0  fsel 2, 10, 6, 2
  0291dd4  fsel 1, 5, 7, 1
  0291dd8  fadds 29, 29, 3
  0291ddc  fadds 30, 30, 2
  0291de0  fadds 31, 31, 1
  0291de4  bl 0x500608
  0291de8  nop
  0291dec  lfs 1, 116(1)
  0291df0  lfs 2, 112(1)
  0291df4  fmuls 1, 1, 1
  0291df8  lfs 3, 120(1)
  0291dfc  lis 3, 123
  0291e00  fmadds 1, 2, 2, 1
  0291e04  fmadds 1, 3, 3, 1
  0291e08  lfs 3, -19372(3)
  0291e0c  fsqrts 1, 1
  0291e10  fsubs 3, 1, 3
  0291e14  fcmpu 0, 1, 27
  0291e18  fsub 4, 3, 27
  0291e1c  fsel 3, 4, 3, 27
  0291e20  bf 2, 0x291e50
  0291e24  stfs 2, 16(30)
  0291e28  li 3, 0
  0291e2c  lfs 1, 116(1)
  0291e30  stfs 1, 20(30)
  0291e34  lfs 1, 120(1)
  0291e38  stfs 1, 24(30)
  0291e3c  lfs 2, 124(1)
  0291e40  stw 3, 24(30)
  0291e44  stw 3, 20(30)
  0291e48  stw 3, 16(30)
  0291e4c  b 0x291e78
  0291e50  fdivs 1, 3, 1
  0291e54  fmuls 2, 2, 1
  0291e58  stfs 2, 16(30)
  0291e5c  lfs 2, 116(1)
  0291e60  fmuls 2, 2, 1
  0291e64  stfs 2, 20(30)
  0291e68  lfs 2, 120(1)
  0291e6c  fmuls 1, 2, 1
  0291e70  stfs 1, 24(30)
  0291e74  lfs 2, 124(1)
  0291e78  stfs 2, 28(30)
  0291e7c  b 0x291ea4
  0291e80  li 3, 0
  0291e84  li 4, 2
  0291e88  stw 3, 28(30)
  0291e8c  stw 3, 24(30)
  0291e90  stw 3, 20(30)
  0291e94  stw 3, 16(30)
  0291e98  stb 4, 32(31)
  0291e9c  b 0x291ea4
  0291ea0  fmr 28, 24
  0291ea4  stfs 31, 16(31)
  0291ea8  stfs 30, 20(31)
  0291eac  stfs 29, 24(31)
  0291eb0  stfs 28, 28(31)
  0291eb4  lfs 1, 72(31)
  0291eb8  lfs 2, 12(30)
  0291ebc  bl 0x502578
  0291ec0  nop
  0291ec4  lis 4, 151
  0291ec8  stfs 1, 72(31)
  0291ecc  li 3, 0
  0291ed0  addic 4, 4, -25376
  0291ed4  ori 5, 3, 0
  0291ed8  lwz 6, 8332(4)
  0291edc  lfs 4, 1312(4)
  0291ee0  lfs 5, 1316(4)
  0291ee4  cmpwi 6, 15
  0291ee8  lfs 6, 1328(4)
  0291eec  lfs 7, 1332(4)
  0291ef0  bf 2, 0x291f7c
  0291ef4  lfs 1, 1300(4)
  0291ef8  lfs 2, 20(31)
  0291efc  lfs 3, 1296(4)
  0291f00  fsubs 8, 1, 2
  0291f04  lfs 1, 16(31)
  0291f08  fsubs 3, 3, 1
  0291f0c  lis 4, 41
  0291f10  addi 4, 4, 6464
  0291f14  fmuls 8, 8, 8
  0291f18  fmadds 3, 3, 3, 8
  0291f1c  fsqrts 8, 3
  0291f20  lfs 3, 12(4)
  0291f24  fcmpu 0, 8, 3
  0291f28  cror 6, 1, 2
  0291f2c  bt 6, 0x291f34
  0291f30  li 3, 1
  0291f34  fsubs 5, 5, 2
  0291f38  fsubs 4, 4, 1
  0291f3c  fmuls 5, 5, 5
  0291f40  fmadds 4, 4, 4, 5
  0291f44  fsqrts 4, 4
  0291f48  fcmpu 0, 4, 3
  0291f4c  cror 6, 1, 2
  0291f50  bt 6, 0x291f58
  0291f54  li 3, 1
  0291f58  fsubs 2, 7, 2
  0291f5c  fsubs 1, 6, 1
  0291f60  cmpwi 1, 3, 0
  0291f64  fmuls 2, 2, 2
  0291f68  fmadds 1, 1, 1, 2
  0291f6c  fsqrts 1, 1
  0291f70  fcmpu 0, 1, 3
  0291f74  bt 0, 0x291fd4
  0291f78  b 0x291fd0
  0291f7c  lfs 1, 20(31)
  0291f80  lfs 2, 132(4)
  0291f84  lfs 3, 16(31)
  0291f88  fsubs 1, 1, 2
  0291f8c  lfs 2, 128(4)
  0291f90  fsubs 2, 3, 2
  0291f94  fmuls 1, 1, 1
  0291f98  fmadds 1, 2, 2, 1
  0291f9c  lfs 2, 8840(4)
  0291fa0  fsqrts 1, 1
  0291fa4  fcmpu 0, 1, 2
  0291fa8  cror 6, 1, 2
  0291fac  bt 6, 0x2920bc
  0291fb0  lfs 1, 24(31)
  0291fb4  lfs 2, 136(4)
  0291fb8  fsubs 1, 1, 2
  0291fbc  lfs 2, 8844(4)
  0291fc0  fabs 1, 1
  0291fc4  fcmpu 0, 1, 2
  0291fc8  bt 0, 0x291fd4
  0291fcc  b 0x2920bc
  0291fd0  bt 6, 0x2920bc
  0291fd4  lwz 3, 36(30)
  0291fd8  cmpwi 3, 0
  0291fdc  bt 2, 0x291fe4
  0291fe0  sth 5, 10(3)
  0291fe4  lis 4, 151
  0291fe8  lwz 3, 32(30)
  0291fec  cmpwi 3, 0
  0291ff0  lwz 5, -25440(4)
  0291ff4  addc 5, 5, 3
  0291ff8  stw 5, -25440(4)
  0291ffc  bt 0, 0x292014
  0292000  lis 4, 151
  0292004  lwz 5, -13820(4)
  0292008  addc 3, 5, 3
  029200c  stw 3, -13820(4)
  0292010  lwz 3, 32(30)
  0292014  ori 6, 3, 0
  0292018  lis 3, 151
  029201c  lis 4, 161
  0292020  ori 5, 31, 0
  0292024  addic 7, 4, -2332
  0292028  li 4, 0
  029202c  lwz 3, -25488(3)
  0292030  slwi 3, 3, 2
  0292034  extsw 8, 3
  0292038  li 3, 0
  029203c  lwzx 9, 7, 8
  0292040  addc 6, 9, 6
  0292044  stwx 6, 7, 8
  0292048  bl 0x15d12c
  029204c  nop
  0292050  lis 5, 112
  0292054  lis 9, 152
  0292058  lis 6, 112
  029205c  lis 7, 112
  0292060  lis 8, 151
  0292064  li 3, 2
  0292068  addic 5, 5, 22544
  029206c  li 4, 30030
  0292070  ori 9, 9, 38527
  0292074  addic 6, 6, 22552
  0292078  addic 7, 7, 22560
  029207c  addic 8, 8, -25440
  0292080  bl 0xc8444
  0292084  nop
  0292088  ori 3, 31, 0
  029208c  bl 0xefb38
  0292090  nop
  0292094  b 0x292188
  0292098  lwz 30, 36(30)
  029209c  cmpwi 30, 0
  02920a0  bt 2, 0x2920ac
  02920a4  li 3, 0
  02920a8  sth 3, 10(30)
  02920ac  ori 3, 31, 0
  02920b0  bl 0xefb38
  02920b4  nop
  02920b8  b 0x292188
  02920bc  lis 3, 123
  02920c0  lwz 4, 40(30)
  02920c4  lwz 3, -19368(3)
  02920c8  divw 5, 4, 3
  02920cc  mullw 5, 5, 3
  02920d0  addic 3, 3, -1
  02920d4  subc 4, 4, 5
  02920d8  extsw 3, 3
  02920dc  extsw 4, 4
  02920e0  std 4, 160(1)
  02920e4  lis 4, 41
  02920e8  addi 4, 4, 6464
  02920ec  lfd 1, 160(1)
  02920f0  std 3, 160(1)
  02920f4  fcfid 1, 1
  02920f8  lis 3, 123
  02920fc  frsp 1, 1
  0292100  lfd 2, 160(1)
  0292104  fcfid 2, 2
  0292108  lfs 3, 16(4)
  029210c  frsp 2, 2
  0292110  fdivs 1, 1, 2
  0292114  lfs 2, 20(4)
  0292118  lfs 4, 24(4)
  029211c  lfs 5, 28(4)
  0292120  lfs 6, 32(4)
  0292124  lfs 7, 36(4)
  0292128  lfs 8, 40(4)
  029212c  lfs 9, 44(4)
  0292130  lfs 10, 24(31)
  0292134  lfs 11, -19364(3)
  0292138  stfs 10, 8(30)
  029213c  lfs 10, 24(31)
  0292140  fmsubs 1, 1, 3, 2
  0292144  fsubs 2, 4, 1
  0292148  fsubs 3, 5, 1
  029214c  fsub 4, 1, 2
  0292150  fsel 1, 4, 2, 1
  0292154  fsub 2, 3, 1
  0292158  fsel 1, 2, 3, 1
  029215c  fmuls 2, 1, 1
  0292160  fmuls 3, 2, 1
  0292164  fmuls 4, 2, 3
  0292168  fmadds 1, 3, 6, 1
  029216c  fmuls 3, 2, 4
  0292170  fmadds 1, 4, 7, 1
  0292174  fmuls 2, 2, 3
  0292178  fmadds 1, 3, 8, 1
  029217c  fmadds 1, 2, 9, 1
  0292180  fmadds 1, 11, 1, 10
  0292184  stfs 1, 24(31)
  0292188  ld 0, 304(1)
  029218c  mtlr 0
  0292190  lfd 23, 216(1)
  0292194  lfd 24, 224(1)
  0292198  lfd 25, 232(1)
  029219c  lfd 26, 240(1)
  02921a0  lfd 27, 248(1)
  02921a4  lfd 28, 256(1)
  02921a8  lfd 29, 264(1)
  02921ac  lfd 30, 272(1)
  02921b0  lfd 31, 280(1)
  02921b4  ld 28, 184(1)
  02921b8  ld 29, 192(1)
  02921bc  ld 30, 200(1)
  02921c0  ld 31, 208(1)
  02921c4  addi 1, 1, 288
  02921c8  blr
