# game/update/moby322.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_322:   # 0x341da8, 0x2e0 bytes
  0341da8  stdu 1, -304(1)
  0341dac  mflr 0
  0341db0  std 0, 320(1)
  0341db4  stfd 14, 160(1)
  0341db8  stfd 15, 168(1)
  0341dbc  stfd 16, 176(1)
  0341dc0  stfd 17, 184(1)
  0341dc4  stfd 18, 192(1)
  0341dc8  stfd 19, 200(1)
  0341dcc  stfd 20, 208(1)
  0341dd0  stfd 21, 216(1)
  0341dd4  stfd 22, 224(1)
  0341dd8  stfd 23, 232(1)
  0341ddc  stfd 24, 240(1)
  0341de0  stfd 25, 248(1)
  0341de4  stfd 26, 256(1)
  0341de8  stfd 27, 264(1)
  0341dec  stfd 28, 272(1)
  0341df0  stfd 29, 280(1)
  0341df4  stfd 30, 288(1)
  0341df8  stfd 31, 296(1)
  0341dfc  std 31, 152(1)
  0341e00  ori 31, 3, 0
  0341e04  lis 4, 4
  0341e08  std 30, 144(1)
  0341e0c  std 29, 136(1)
  0341e10  li 5, 0
  0341e14  bl 0x10675c
  0341e18  nop
  0341e1c  ori 30, 3, 0
  0341e20  cmpwi 30, 0
  0341e24  bt 2, 0x342024
  0341e28  lis 3, 52
  0341e2c  lfs 20, 24(31)
  0341e30  li 4, 0
  0341e34  addi 29, 3, 7552
  0341e38  li 3, 0
  0341e3c  ori 5, 31, 0
  0341e40  lfs 1, 0(29)
  0341e44  lfs 29, 0(30)
  0341e48  lfs 30, 4(30)
  0341e4c  lfs 31, 8(30)
  0341e50  fadds 20, 20, 1
  0341e54  lfs 18, 16(31)
  0341e58  lfs 19, 20(31)
  0341e5c  bl 0x15d12c
  0341e60  nop
  0341e64  lfs 21, 4(29)
  0341e68  li 30, 0
  0341e6c  lfs 22, 8(29)
  0341e70  fsubs 29, 18, 29
  0341e74  lfs 23, 12(29)
  0341e78  fsubs 30, 19, 30
  0341e7c  lfs 24, 16(29)
  0341e80  fsubs 31, 20, 31
  0341e84  lfs 25, 20(29)
  0341e88  lfs 26, 24(29)
  0341e8c  lfs 27, 28(29)
  0341e90  lfs 28, 32(29)
  0341e94  fmr 1, 22
  0341e98  fmr 2, 23
  0341e9c  bl 0xfcbe8
  0341ea0  nop
  0341ea4  fmr 17, 1
  0341ea8  fmr 1, 22
  0341eac  fmr 2, 23
  0341eb0  bl 0xfcbe8
  0341eb4  nop
  0341eb8  fmr 16, 1
  0341ebc  fmr 2, 23
  0341ec0  fmr 1, 21
  0341ec4  bl 0xfcbe8
  0341ec8  nop
  0341ecc  fmuls 2, 16, 16
  0341ed0  fmadds 2, 17, 17, 2
  0341ed4  fmadds 2, 1, 1, 2
  0341ed8  stfs 28, 124(1)
  0341edc  fsqrts 3, 2
  0341ee0  stfs 30, 116(1)
  0341ee4  stfs 29, 120(1)
  0341ee8  stfs 31, 112(1)
  0341eec  fmr 2, 28
  0341ef0  fdivs 4, 24, 3
  0341ef4  fsub 5, 21, 3
  0341ef8  fsub 6, 3, 21
  0341efc  fsub 7, 21, 3
  0341f00  fsub 8, 21, 3
  0341f04  fsub 9, 3, 21
  0341f08  fsub 3, 3, 21
  0341f0c  fmuls 10, 16, 4
  0341f10  fmuls 11, 17, 4
  0341f14  fmuls 1, 1, 4
  0341f18  fsel 4, 5, 21, 10
  0341f1c  fsel 5, 7, 21, 11
  0341f20  fsel 7, 8, 21, 1
  0341f24  fsel 4, 6, 4, 10
  0341f28  fsel 5, 9, 5, 11
  0341f2c  fsel 1, 3, 7, 1
  0341f30  fadds 17, 4, 30
  0341f34  fadds 16, 5, 29
  0341f38  fadds 15, 1, 31
  0341f3c  fadds 29, 1, 20
  0341f40  fmr 1, 27
  0341f44  fadds 31, 5, 18
  0341f48  fmuls 3, 17, 17
  0341f4c  fadds 30, 4, 19
  0341f50  fmadds 3, 16, 16, 3
  0341f54  fmadds 3, 15, 15, 3
  0341f58  fsqrts 14, 3
  0341f5c  fsubs 3, 25, 14
  0341f60  fabs 3, 3
  0341f64  fmuls 28, 3, 26
  0341f68  bl 0xfcbe8
  0341f6c  nop
  0341f70  lis 3, 114
  0341f74  fsub 3, 21, 14
  0341f78  lfs 2, -3052(3)
  0341f7c  fmuls 1, 1, 2
  0341f80  stfs 31, 64(1)
  0341f84  fsub 2, 21, 14
  0341f88  stfs 29, 72(1)
  0341f8c  fsub 6, 21, 14
  0341f90  stfs 30, 68(1)
  0341f94  fsub 4, 14, 21
  0341f98  stfs 21, 76(1)
  0341f9c  fsub 5, 14, 21
  0341fa0  stfs 21, 92(1)
  0341fa4  fsub 7, 14, 21
  0341fa8  ori 3, 31, 0
  0341fac  ld 5, 64(1)
  0341fb0  fmuls 1, 1, 28
  0341fb4  ld 6, 72(1)
  0341fb8  fdivs 1, 1, 14
  0341fbc  fmuls 8, 15, 1
  0341fc0  fmuls 9, 16, 1
  0341fc4  fmuls 1, 17, 1
  0341fc8  fsel 2, 2, 21, 8
  0341fcc  fsel 3, 3, 21, 9
  0341fd0  fsel 6, 6, 21, 1
  0341fd4  fsel 2, 4, 2, 8
  0341fd8  fsel 3, 5, 3, 9
  0341fdc  fsel 1, 7, 6, 1
  0341fe0  stfs 2, 88(1)
  0341fe4  stfs 3, 80(1)
  0341fe8  stfs 1, 84(1)
  0341fec  ld 8, 88(1)
  0341ff0  ld 7, 80(1)
  0341ff4  bl 0x33f5c0
  0341ff8  nop
  0341ffc  addic 30, 30, 1
  0342000  lfs 31, 112(1)
  0342004  lfs 30, 116(1)
  0342008  cmpwi 30, 40
  034200c  lfs 29, 120(1)
  0342010  lfs 28, 124(1)
  0342014  bt 0, 0x341e94
  0342018  ori 3, 31, 0
  034201c  bl 0xefb38
  0342020  nop
  0342024  ld 0, 320(1)
  0342028  mtlr 0
  034202c  lfd 14, 160(1)
  0342030  lfd 15, 168(1)
  0342034  lfd 16, 176(1)
  0342038  lfd 17, 184(1)
  034203c  lfd 18, 192(1)
  0342040  lfd 19, 200(1)
  0342044  lfd 20, 208(1)
  0342048  lfd 21, 216(1)
  034204c  lfd 22, 224(1)
  0342050  lfd 23, 232(1)
  0342054  lfd 24, 240(1)
  0342058  lfd 25, 248(1)
  034205c  lfd 26, 256(1)
  0342060  lfd 27, 264(1)
  0342064  lfd 28, 272(1)
  0342068  lfd 29, 280(1)
  034206c  lfd 30, 288(1)
  0342070  lfd 31, 296(1)
  0342074  ld 29, 136(1)
  0342078  ld 30, 144(1)
  034207c  ld 31, 152(1)
  0342080  addi 1, 1, 304
  0342084  blr
