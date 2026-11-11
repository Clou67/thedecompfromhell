# game/update/moby18.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M18_002b9d00:   # 0x2b9d00, 0x314 bytes
  02b9d00  stdu 1, -256(1)
  02b9d04  mflr 0
  02b9d08  std 0, 272(1)
  02b9d0c  stfd 25, 200(1)
  02b9d10  stfd 26, 208(1)
  02b9d14  stfd 27, 216(1)
  02b9d18  stfd 28, 224(1)
  02b9d1c  stfd 29, 232(1)
  02b9d20  stfd 30, 240(1)
  02b9d24  stfd 31, 248(1)
  02b9d28  addi 0, 1, 144
  02b9d2c  stvx 31, 0, 0
  02b9d30  lis 5, 149
  02b9d34  lfs 1, 20(3)
  02b9d38  lis 4, 44
  02b9d3c  addic 5, 5, 5056
  02b9d40  lfs 2, 24(3)
  02b9d44  addi 4, 4, -25368
  02b9d48  lfs 3, 324(5)
  02b9d4c  lfs 25, 0(4)
  02b9d50  fsubs 3, 3, 1
  02b9d54  lfs 4, 320(5)
  02b9d58  fadds 2, 2, 25
  02b9d5c  lfs 5, 16(3)
  02b9d60  lfs 6, 328(5)
  02b9d64  fsubs 4, 4, 5
  02b9d68  fmuls 7, 3, 3
  02b9d6c  fsubs 6, 6, 2
  02b9d70  stfs 4, 112(1)
  02b9d74  stfs 3, 116(1)
  02b9d78  fmadds 7, 4, 4, 7
  02b9d7c  lfs 8, 332(5)
  02b9d80  stfs 6, 120(1)
  02b9d84  stfs 8, 124(1)
  02b9d88  lfs 8, 8(4)
  02b9d8c  fmadds 7, 6, 6, 7
  02b9d90  lfs 26, 4(4)
  02b9d94  fsubs 31, 2, 25
  02b9d98  fsqrts 7, 7
  02b9d9c  std 29, 176(1)
  02b9da0  lfs 9, 12(4)
  02b9da4  li 5, 20
  02b9da8  std 30, 184(1)
  02b9dac  li 29, 0
  02b9db0  lwz 30, 120(3)
  02b9db4  std 31, 192(1)
  02b9db8  stfs 31, 24(3)
  02b9dbc  addic 31, 30, 48
  02b9dc0  fdivs 8, 8, 7
  02b9dc4  fsub 10, 26, 7
  02b9dc8  fsub 11, 26, 7
  02b9dcc  fsub 0, 26, 7
  02b9dd0  fsub 12, 7, 26
  02b9dd4  fsub 13, 7, 26
  02b9dd8  fsub 7, 7, 26
  02b9ddc  fmuls 3, 3, 8
  02b9de0  fmuls 4, 4, 8
  02b9de4  fmuls 6, 6, 8
  02b9de8  fsel 8, 10, 26, 3
  02b9dec  fsel 10, 11, 26, 4
  02b9df0  fsel 11, 0, 26, 6
  02b9df4  fsel 3, 12, 8, 3
  02b9df8  fsel 4, 13, 10, 4
  02b9dfc  fsel 6, 7, 11, 6
  02b9e00  fmuls 7, 3, 3
  02b9e04  fadds 5, 4, 5
  02b9e08  fadds 1, 3, 1
  02b9e0c  fadds 2, 6, 2
  02b9e10  fmadds 7, 4, 4, 7
  02b9e14  stfs 5, 112(1)
  02b9e18  stfs 1, 116(1)
  02b9e1c  fmadds 7, 6, 6, 7
  02b9e20  stfs 2, 120(1)
  02b9e24  lfs 27, 16(4)
  02b9e28  <unknown>
  02b9e2c  lfs 28, 20(4)
  02b9e30  fsqrts 7, 7
  02b9e34  vspltw 31, 31, 0
  02b9e38  fdivs 1, 9, 7
  02b9e3c  fsub 5, 26, 7
  02b9e40  fsub 2, 26, 7
  02b9e44  fsub 8, 26, 7
  02b9e48  fsub 29, 7, 26
  02b9e4c  fsub 30, 7, 26
  02b9e50  fsub 31, 7, 26
  02b9e54  fmuls 6, 6, 1
  02b9e58  fmuls 3, 3, 1
  02b9e5c  fmuls 1, 4, 1
  02b9e60  fsel 2, 2, 26, 6
  02b9e64  fsel 4, 5, 26, 3
  02b9e68  fsel 5, 8, 26, 1
  02b9e6c  fsel 29, 29, 2, 6
  02b9e70  std 28, 168(1)
  02b9e74  fsel 30, 30, 4, 3
  02b9e78  fsel 31, 31, 5, 1
  02b9e7c  lfs 1, 16(30)
  02b9e80  lfs 2, 32(30)
  02b9e84  fadds 1, 1, 2
  02b9e88  fcmpu 0, 1, 27
  02b9e8c  fcmpu 1, 1, 26
  02b9e90  stfs 1, 16(30)
  02b9e94  bt 0, 0x2b9ea4
  02b9e98  fsubs 1, 1, 27
  02b9e9c  stfs 1, 16(30)
  02b9ea0  b 0x2b9eb0
  02b9ea4  bt 5, 0x2b9eb0
  02b9ea8  fadds 1, 1, 27
  02b9eac  stfs 1, 16(30)
  02b9eb0  addic 3, 30, 48
  02b9eb4  bl 0x4fff60
  02b9eb8  nop
  02b9ebc  lis 4, 114
  02b9ec0  li 5, -3056
  02b9ec4  ori 6, 3, 0
  02b9ec8  lwz 3, 48(30)
  02b9ecc  cmpwi 6, 0
  02b9ed0  lfs 1, -3056(4)
  02b9ed4  <unknown>
  02b9ed8  bt 2, 0x2b9f04
  02b9edc  vspltisw 3, -1
  02b9ee0  fmuls 2, 1, 28
  02b9ee4  vslw 3, 3, 3
  02b9ee8  vmaddfp 2, 2, 31, 3
  02b9eec  fctiwz 2, 2
  02b9ef0  vctsxs 2, 2, 0
  02b9ef4  stfd 2, 128(1)
  02b9ef8  lwz 3, 132(1)
  02b9efc  vspltw 2, 2, 0
  02b9f00  stvewx 2, 0, 31
  02b9f04  fmuls 1, 1, 28
  02b9f08  fctiwz 1, 1
  02b9f0c  stfd 1, 128(1)
  02b9f10  lwz 4, 132(1)
  02b9f14  subc 3, 4, 3
  02b9f18  extsw 3, 3
  02b9f1c  bl 0x502730
  02b9f20  nop
  02b9f24  lis 3, 114
  02b9f28  lfs 2, -3056(3)
  02b9f2c  fmuls 2, 2, 28
  02b9f30  lis 3, 16448
  02b9f34  lis 4, 4160
  02b9f38  ori 3, 3, 65535
  02b9f3c  ori 4, 4, 65535
  02b9f40  fctidz 2, 2
  02b9f44  fcfid 2, 2
  02b9f48  frsp 2, 2
  02b9f4c  fdivs 1, 1, 2
  02b9f50  fsubs 1, 25, 1
  02b9f54  fabs 1, 1
  02b9f58  bl 0x5027bc
  02b9f5c  nop
  02b9f60  lfs 1, 16(30)
  02b9f64  ori 28, 3, 0
  02b9f68  bl 0x502758
  02b9f6c  nop
  02b9f70  clrlwi 5, 3, 24
  02b9f74  lfs 1, 64(30)
  02b9f78  addic 3, 1, 112
  02b9f7c  ori 4, 28, 0
  02b9f80  li 6, 53
  02b9f84  li 7, 1
  02b9f88  li 8, 2
  02b9f8c  li 10, 0
  02b9f90  bl 0x130ed0
  02b9f94  nop
  02b9f98  lfs 1, 112(1)
  02b9f9c  lfs 2, 116(1)
  02b9fa0  addic 29, 29, 1
  02b9fa4  fadds 1, 1, 31
  02b9fa8  lfs 3, 120(1)
  02b9fac  fadds 2, 2, 30
  02b9fb0  cmpwi 29, 4
  02b9fb4  fadds 3, 3, 29
  02b9fb8  addic 31, 31, 4
  02b9fbc  addic 30, 30, 4
  02b9fc0  stfs 1, 112(1)
  02b9fc4  stfs 2, 116(1)
  02b9fc8  stfs 3, 120(1)
  02b9fcc  bt 0, 0x2b9e7c
  02b9fd0  li 0, 144
  02b9fd4  lvx 31, 1, 0
  02b9fd8  ld 0, 272(1)
  02b9fdc  mtlr 0
  02b9fe0  lfd 25, 200(1)
  02b9fe4  lfd 26, 208(1)
  02b9fe8  lfd 27, 216(1)
  02b9fec  lfd 28, 224(1)
  02b9ff0  lfd 29, 232(1)
  02b9ff4  lfd 30, 240(1)
  02b9ff8  lfd 31, 248(1)
  02b9ffc  ld 28, 168(1)
  02ba000  ld 29, 176(1)
  02ba004  ld 30, 184(1)
  02ba008  ld 31, 192(1)
  02ba00c  addi 1, 1, 256
  02ba010  blr

M18_002ba020:   # 0x2ba020, 0x120 bytes
  02ba020  stdu 1, -160(1)
  02ba024  mflr 0
  02ba028  std 0, 176(1)
  02ba02c  std 29, 136(1)
  02ba030  std 31, 152(1)
  02ba034  lwz 31, 120(3)
  02ba038  std 30, 144(1)
  02ba03c  li 29, 0
  02ba040  ori 30, 31, 0
  02ba044  li 3, 255
  02ba048  bl 0xfc620
  02ba04c  nop
  02ba050  extsw 3, 3
  02ba054  addic 29, 29, 1
  02ba058  std 3, 112(1)
  02ba05c  cmpwi 29, 4
  02ba060  lfd 1, 112(1)
  02ba064  fcfid 1, 1
  02ba068  frsp 1, 1
  02ba06c  stfs 1, 16(30)
  02ba070  addic 30, 30, 4
  02ba074  bt 0, 0x2ba044
  02ba078  lis 3, -16512
  02ba07c  lis 4, -16368
  02ba080  vspltisw 4, 0
  02ba084  lis 5, 16288
  02ba088  lis 6, 44
  02ba08c  stw 3, 32(31)
  02ba090  lis 7, 114
  02ba094  stw 4, 36(31)
  02ba098  lis 3, 16416
  02ba09c  addi 4, 6, -24556
  02ba0a0  stw 5, 40(31)
  02ba0a4  li 5, -3056
  02ba0a8  li 6, 4
  02ba0ac  li 8, 8
  02ba0b0  stw 3, 44(31)
  02ba0b4  li 9, 4
  02ba0b8  <unknown>
  02ba0bc  <unknown>
  02ba0c0  addic 3, 31, 48
  02ba0c4  <unknown>
  02ba0c8  mtctr 9
  02ba0cc  <unknown>
  02ba0d0  vspltw 6, 6, 0
  02ba0d4  vspltw 3, 3, 0
  02ba0d8  vspltw 2, 2, 0
  02ba0dc  vadduwm 7, 4, 3
  02ba0e0  vspltisw 8, -1
  02ba0e4  vadduwm 4, 4, 2
  02ba0e8  vcfsx 7, 7, 0
  02ba0ec  vslw 8, 8, 8
  02ba0f0  vaddfp 7, 7, 6
  02ba0f4  vmaddfp 7, 7, 5, 8
  02ba0f8  vctsxs 7, 7, 0
  02ba0fc  vspltw 7, 7, 0
  02ba100  stvewx 7, 0, 3
  02ba104  addic 3, 3, 4
  02ba108  bdnz 0x2ba0dc
  02ba10c  lis 3, 16416
  02ba110  lis 4, 16448
  02ba114  stw 3, 64(31)
  02ba118  stw 4, 68(31)
  02ba11c  stw 4, 72(31)
  02ba120  stw 3, 76(31)
  02ba124  ld 0, 176(1)
  02ba128  mtlr 0
  02ba12c  ld 29, 136(1)
  02ba130  ld 30, 144(1)
  02ba134  ld 31, 152(1)
  02ba138  addi 1, 1, 160
  02ba13c  blr

UpdateMoby_18:   # 0x2ba158, 0x240 bytes
  02ba158  stdu 1, -128(1)
  02ba15c  mflr 0
  02ba160  std 0, 144(1)
  02ba164  lis 4, 44
  02ba168  lis 5, 114
  02ba16c  std 31, 120(1)
  02ba170  addi 4, 4, -24256
  02ba174  ori 31, 3, 0
  02ba178  lfs 3, 0(4)
  02ba17c  lfs 2, -3052(5)
  02ba180  std 30, 112(1)
  02ba184  lfs 1, 72(31)
  02ba188  lwz 30, 120(31)
  02ba18c  fmuls 2, 2, 3
  02ba190  bl 0x502578
  02ba194  nop
  02ba198  lbz 3, 32(31)
  02ba19c  stfs 1, 72(31)
  02ba1a0  cmpwi 3, 1
  02ba1a4  bt 1, 0x2ba1bc
  02ba1a8  cmpwi 3, -1
  02ba1ac  bf 1, 0x2ba380
  02ba1b0  cmpwi 3, 0
  02ba1b4  bf 1, 0x2ba1d0
  02ba1b8  b 0x2ba230
  02ba1bc  cmpwi 3, 2
  02ba1c0  bf 1, 0x2ba2d8
  02ba1c4  cmpwi 3, 3
  02ba1c8  bf 1, 0x2ba370
  02ba1cc  b 0x2ba380
  02ba1d0  ori 3, 31, 0
  02ba1d4  bl 0x2ba020
  02ba1d8  lis 3, 151
  02ba1dc  addic 3, 3, -16027
  02ba1e0  lbz 3, 28(3)
  02ba1e4  cmpwi 3, 0
  02ba1e8  bt 2, 0x2ba1fc
  02ba1ec  ori 3, 31, 0
  02ba1f0  bl 0xefb38
  02ba1f4  nop
  02ba1f8  b 0x2ba380
  02ba1fc  lis 3, 44
  02ba200  lfs 1, 24(31)
  02ba204  li 4, 1
  02ba208  addi 3, 3, -24256
  02ba20c  lfs 2, 4(3)
  02ba210  lfs 3, 44(31)
  02ba214  fadds 1, 1, 2
  02ba218  stfs 1, 24(31)
  02ba21c  lfs 1, 8(3)
  02ba220  stb 4, 32(31)
  02ba224  fmuls 1, 3, 1
  02ba228  stfs 1, 44(31)
  02ba22c  b 0x2ba380
  02ba230  ori 3, 31, 0
  02ba234  bl 0x2b9d00
  02ba238  lis 3, 151
  02ba23c  lfs 1, 20(31)
  02ba240  addic 3, 3, -25376
  02ba244  lfs 2, 16(31)
  02ba248  lis 4, 44
  02ba24c  lfs 3, 132(3)
  02ba250  lfs 4, 128(3)
  02ba254  fsubs 1, 1, 3
  02ba258  fsubs 2, 2, 4
  02ba25c  addi 4, 4, -24256
  02ba260  fmuls 1, 1, 1
  02ba264  fmadds 1, 2, 2, 1
  02ba268  lfs 2, 12(4)
  02ba26c  fsqrts 1, 1
  02ba270  fcmpu 0, 1, 2
  02ba274  cror 6, 1, 2
  02ba278  bt 6, 0x2ba380
  02ba27c  lfs 1, 24(31)
  02ba280  lis 4, 44
  02ba284  lfs 2, 136(3)
  02ba288  addi 4, 4, -24256
  02ba28c  fsubs 1, 1, 2
  02ba290  lfs 2, 16(4)
  02ba294  fabs 1, 1
  02ba298  fcmpu 0, 1, 2
  02ba29c  cror 6, 1, 2
  02ba2a0  bt 6, 0x2ba380
  02ba2a4  lwz 3, 8872(3)
  02ba2a8  cmpwi 3, 0
  02ba2ac  bt 2, 0x2ba380
  02ba2b0  lhz 5, 52(31)
  02ba2b4  li 3, 2
  02ba2b8  ori 5, 5, 65
  02ba2bc  li 4, 0
  02ba2c0  sth 5, 52(31)
  02ba2c4  bl 0x167e60
  02ba2c8  nop
  02ba2cc  li 3, 2
  02ba2d0  stb 3, 32(31)
  02ba2d4  b 0x2ba380
  02ba2d8  lis 3, 161
  02ba2dc  lwz 3, 1800(3)
  02ba2e0  cmpwi 3, 2
  02ba2e4  bt 2, 0x2ba380
  02ba2e8  li 3, 10011
  02ba2ec  li 4, -1
  02ba2f0  bl 0x112a38
  02ba2f4  nop
  02ba2f8  lis 5, 161
  02ba2fc  li 6, 180
  02ba300  li 3, 28
  02ba304  li 4, 1
  02ba308  stw 6, 23680(5)
  02ba30c  bl 0x112e18
  02ba310  nop
  02ba314  li 3, 25
  02ba318  bl 0x112dc0
  02ba31c  nop
  02ba320  lwz 30, 4(30)
  02ba324  cmpwi 30, -1
  02ba328  bt 2, 0x2ba354
  02ba32c  lis 3, 164
  02ba330  slwi 4, 30, 8
  02ba334  lwz 3, -28512(3)
  02ba338  addc 3, 3, 4
  02ba33c  addic 4, 3, 16
  02ba340  addic 5, 3, 64
  02ba344  clrldi 3, 4, 32
  02ba348  clrldi 4, 5, 32
  02ba34c  bl 0x151e70
  02ba350  nop
  02ba354  li 3, 0
  02ba358  li 4, -1
  02ba35c  bl 0xe8aa4
  02ba360  nop
  02ba364  li 3, 3
  02ba368  stb 3, 32(31)
  02ba36c  b 0x2ba380
  02ba370  ori 3, 31, 0
  02ba374  bl 0xefb38
  02ba378  nop
  02ba37c  b 0x2ba380
  02ba380  ld 0, 144(1)
  02ba384  mtlr 0
  02ba388  ld 30, 112(1)
  02ba38c  ld 31, 120(1)
  02ba390  addi 1, 1, 128
  02ba394  blr
