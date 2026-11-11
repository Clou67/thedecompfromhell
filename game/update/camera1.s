# game/update/camera1.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA1:   # 0x34ce0, 0x14 bytes
  0034ce0  lis 3, 114
  0034ce4  lis 4, 1
  0034ce8  addic 3, 3, -10864
  0034cec  stw 4, 72(3)
  0034cf0  blr

Cam1_InitPosRot:   # 0x34cf8, 0x15c bytes
  0034cf8  stdu 1, -208(1)
  0034cfc  mflr 0
  0034d00  std 0, 224(1)
  0034d04  std 31, 200(1)
  0034d08  ori 31, 3, 0
  0034d0c  lis 4, 15820
  0034d10  lis 3, 149
  0034d14  ori 5, 4, 52429
  0034d18  li 6, 0
  0034d1c  lwz 4, 112(31)
  0034d20  lis 7, 16320
  0034d24  lhz 8, 132(31)
  0034d28  lis 9, 15523
  0034d2c  lwz 3, 16468(3)
  0034d30  extsh 8, 8
  0034d34  stw 6, 80(4)
  0034d38  sldi 10, 8, 5
  0034d3c  stw 7, 92(4)
  0034d40  stw 6, 128(4)
  0034d44  addc 3, 3, 10
  0034d48  stw 5, 8(4)
  0034d4c  ori 7, 9, 55050
  0034d50  clrldi 5, 3, 32
  0034d54  stw 7, 4(4)
  0034d58  stw 6, 12(4)
  0034d5c  lwz 3, 28(5)
  0034d60  twlti 8, 0
  0034d64  cmpwi 8, 0
  0034d68  bt 0, 0x34d78
  0034d6c  lfs 1, 24(3)
  0034d70  stfs 1, 92(4)
  0034d74  lwz 3, 28(5)
  0034d78  lwz 7, 0(5)
  0034d7c  lwz 8, 4(5)
  0034d80  ori 6, 3, 0
  0034d84  lwz 9, 8(5)
  0034d88  addic 4, 1, 112
  0034d8c  lwz 10, 12(5)
  0034d90  addic 3, 1, 128
  0034d94  stw 7, 48(31)
  0034d98  stw 8, 52(31)
  0034d9c  stw 9, 56(31)
  0034da0  stw 10, 60(31)
  0034da4  lwz 7, 16(5)
  0034da8  lwz 8, 20(5)
  0034dac  lwz 5, 24(5)
  0034db0  stw 7, 112(1)
  0034db4  stw 8, 116(1)
  0034db8  stw 5, 120(1)
  0034dbc  stw 6, 124(1)
  0034dc0  bl 0x500ca4
  0034dc4  nop
  0034dc8  lfs 1, 128(1)
  0034dcc  lfs 2, 132(1)
  0034dd0  li 3, 0
  0034dd4  stfs 1, 0(31)
  0034dd8  lfs 3, 136(1)
  0034ddc  stfs 2, 4(31)
  0034de0  lfs 4, 140(1)
  0034de4  stfs 3, 8(31)
  0034de8  lfs 5, 144(1)
  0034dec  stfs 4, 12(31)
  0034df0  lfs 6, 148(1)
  0034df4  stfs 5, 16(31)
  0034df8  lfs 5, 152(1)
  0034dfc  stfs 6, 20(31)
  0034e00  lfs 6, 156(1)
  0034e04  stfs 5, 24(31)
  0034e08  lfs 5, 160(1)
  0034e0c  stfs 6, 28(31)
  0034e10  lfs 6, 164(1)
  0034e14  stfs 5, 32(31)
  0034e18  lfs 5, 168(1)
  0034e1c  stfs 6, 36(31)
  0034e20  lfs 6, 172(1)
  0034e24  stfs 5, 40(31)
  0034e28  stfs 6, 44(31)
  0034e2c  stfs 1, 64(31)
  0034e30  stfs 2, 68(31)
  0034e34  stfs 3, 72(31)
  0034e38  stfs 4, 76(31)
  0034e3c  sth 3, 126(31)
  0034e40  ld 0, 224(1)
  0034e44  mtlr 0
  0034e48  ld 31, 200(1)
  0034e4c  addi 1, 1, 208
  0034e50  blr

Cam1_UpdateCam:   # 0x34e68, 0x368 bytes
  0034e68  stdu 1, -160(1)
  0034e6c  mflr 0
  0034e70  std 0, 176(1)
  0034e74  stfd 30, 144(1)
  0034e78  stfd 31, 152(1)
  0034e7c  std 31, 136(1)
  0034e80  ori 31, 3, 0
  0034e84  lis 3, 151
  0034e88  addic 4, 3, -25376
  0034e8c  lwz 3, 112(31)
  0034e90  lfs 9, 52(31)
  0034e94  lfs 1, 132(4)
  0034e98  lfs 8, 128(4)
  0034e9c  fsubs 9, 1, 9
  0034ea0  lfs 1, 136(4)
  0034ea4  lfs 2, 92(3)
  0034ea8  lfs 3, 48(31)
  0034eac  fadds 10, 1, 2
  0034eb0  fsubs 8, 8, 3
  0034eb4  lfs 1, 56(31)
  0034eb8  lis 5, 3
  0034ebc  fmuls 2, 9, 9
  0034ec0  addi 5, 5, 20052
  0034ec4  fsubs 10, 10, 1
  0034ec8  lfs 1, 140(4)
  0034ecc  stfs 1, 124(1)
  0034ed0  fmadds 7, 8, 8, 2
  0034ed4  lfs 31, 0(5)
  0034ed8  fmr 4, 31
  0034edc  lfs 1, 0(31)
  0034ee0  lfs 2, 4(31)
  0034ee4  lfs 3, 8(31)
  0034ee8  fmadds 7, 10, 10, 7
  0034eec  fmr 5, 4
  0034ef0  fsqrts 11, 7
  0034ef4  fmr 6, 5
  0034ef8  fcmpu 0, 11, 6
  0034efc  bt 2, 0x34f50
  0034f00  frsqrte 4, 7
  0034f04  lis 4, 3
  0034f08  addi 4, 4, 20052
  0034f0c  lfs 5, 4(4)
  0034f10  lfs 6, 8(4)
  0034f14  fmuls 11, 7, 4
  0034f18  fmuls 12, 5, 4
  0034f1c  fnmsubs 11, 11, 4, 6
  0034f20  fmadds 4, 11, 12, 4
  0034f24  fmuls 11, 7, 4
  0034f28  fmuls 12, 5, 4
  0034f2c  fnmsubs 11, 11, 4, 6
  0034f30  fmadds 4, 11, 12, 4
  0034f34  fmuls 7, 7, 4
  0034f38  fmuls 5, 5, 4
  0034f3c  fnmsubs 6, 7, 4, 6
  0034f40  fmadds 4, 6, 5, 4
  0034f44  fmuls 6, 8, 4
  0034f48  fmuls 5, 9, 4
  0034f4c  fmuls 4, 10, 4
  0034f50  fmuls 2, 5, 2
  0034f54  lis 4, 3
  0034f58  stfs 6, 112(1)
  0034f5c  stfs 5, 116(1)
  0034f60  lis 5, 115
  0034f64  addi 4, 4, 20052
  0034f68  stfs 4, 120(1)
  0034f6c  addic 6, 5, 22720
  0034f70  lfs 30, 8(4)
  0034f74  fmadds 1, 6, 1, 2
  0034f78  lfs 6, 22720(5)
  0034f7c  lfs 7, 4(6)
  0034f80  ori 5, 3, 0
  0034f84  fmadds 1, 4, 3, 1
  0034f88  fabs 2, 1
  0034f8c  fsub 3, 1, 31
  0034f90  fsel 2, 3, 1, 2
  0034f94  fsubs 3, 30, 2
  0034f98  fmuls 4, 2, 2
  0034f9c  fsub 5, 3, 31
  0034fa0  fmuls 8, 4, 2
  0034fa4  fmadds 2, 2, 7, 6
  0034fa8  fsub 6, 1, 31
  0034fac  fmr 1, 31
  0034fb0  fsel 3, 5, 3, 31
  0034fb4  lfs 5, 8(6)
  0034fb8  fmadds 2, 4, 5, 2
  0034fbc  lfs 5, 12(4)
  0034fc0  lfs 9, 12(6)
  0034fc4  lfs 13, 16(4)
  0034fc8  fsel 6, 6, 30, 5
  0034fcc  lfs 10, 4(3)
  0034fd0  fsqrts 7, 3
  0034fd4  lfs 11, 8(3)
  0034fd8  lfs 12, 12(3)
  0034fdc  fmadds 2, 8, 9, 2
  0034fe0  fmr 3, 10
  0034fe4  fmr 4, 11
  0034fe8  fmr 5, 12
  0034fec  fnmsubs 2, 2, 7, 13
  0034ff0  fnmsubs 2, 2, 6, 13
  0034ff4  bl 0x50288
  0034ff8  nop
  0034ffc  addic 4, 31, 64
  0035000  addic 5, 1, 112
  0035004  ori 3, 31, 0
  0035008  li 7, 1
  003500c  bl 0x1115c8
  0035010  nop
  0035014  lfs 3, 4(31)
  0035018  lfs 2, 0(31)
  003501c  fmuls 1, 3, 3
  0035020  lfs 4, 8(31)
  0035024  fmadds 1, 2, 2, 1
  0035028  fmadds 1, 4, 4, 1
  003502c  fsqrts 5, 1
  0035030  fcmpu 0, 5, 31
  0035034  bf 2, 0x35068
  0035038  fmr 7, 31
  003503c  lfs 1, 0(31)
  0035040  lfs 2, 4(31)
  0035044  stfs 1, 64(31)
  0035048  lfs 1, 8(31)
  003504c  stfs 2, 68(31)
  0035050  lfs 2, 12(31)
  0035054  stfs 1, 72(31)
  0035058  fmr 1, 2
  003505c  fmr 8, 7
  0035060  fmr 9, 8
  0035064  b 0x350bc
  0035068  frsqrte 5, 1
  003506c  lis 3, 3
  0035070  addi 3, 3, 20052
  0035074  lfs 6, 4(3)
  0035078  lfs 9, 12(31)
  003507c  fmuls 7, 1, 5
  0035080  fmuls 8, 6, 5
  0035084  fnmsubs 7, 7, 5, 30
  0035088  fmadds 5, 7, 8, 5
  003508c  fmuls 7, 1, 5
  0035090  fmuls 8, 6, 5
  0035094  fnmsubs 7, 7, 5, 30
  0035098  fmadds 5, 7, 8, 5
  003509c  fmuls 7, 1, 5
  00350a0  fmuls 6, 6, 5
  00350a4  fmr 1, 9
  00350a8  fnmsubs 7, 7, 5, 30
  00350ac  fmadds 7, 7, 6, 5
  00350b0  fmuls 9, 2, 7
  00350b4  fmuls 8, 3, 7
  00350b8  fmuls 7, 4, 7
  00350bc  stfs 9, 64(31)
  00350c0  lis 3, 149
  00350c4  stfs 8, 68(31)
  00350c8  stfs 7, 72(31)
  00350cc  addic 3, 3, 5056
  00350d0  stfs 1, 76(31)
  00350d4  stfs 9, 0(31)
  00350d8  stfs 8, 4(31)
  00350dc  stfs 7, 8(31)
  00350e0  stfs 1, 12(31)
  00350e4  lfs 4, 432(3)
  00350e8  lfs 3, 440(3)
  00350ec  fmuls 1, 4, 7
  00350f0  lfs 2, 436(3)
  00350f4  fmuls 5, 3, 8
  00350f8  fmuls 6, 2, 9
  00350fc  li 3, 0
  0035100  fmsubs 3, 3, 9, 1
  0035104  fmsubs 2, 2, 7, 5
  0035108  fmsubs 4, 4, 8, 6
  003510c  fmr 5, 31
  0035110  stw 3, 28(31)
  0035114  fmuls 1, 3, 3
  0035118  fmr 6, 5
  003511c  fmadds 1, 2, 2, 1
  0035120  fmadds 1, 4, 4, 1
  0035124  fsqrts 10, 1
  0035128  fcmpu 0, 10, 6
  003512c  bt 2, 0x3517c
  0035130  frsqrte 5, 1
  0035134  lis 3, 3
  0035138  addi 3, 3, 20052
  003513c  lfs 6, 4(3)
  0035140  fmuls 10, 1, 5
  0035144  fmuls 11, 6, 5
  0035148  fnmsubs 10, 10, 5, 30
  003514c  fmadds 5, 10, 11, 5
  0035150  fmuls 10, 1, 5
  0035154  fmuls 11, 6, 5
  0035158  fnmsubs 10, 10, 5, 30
  003515c  fmadds 5, 10, 11, 5
  0035160  fmuls 1, 1, 5
  0035164  fmuls 6, 6, 5
  0035168  fnmsubs 1, 1, 5, 30
  003516c  fmadds 31, 1, 6, 5
  0035170  fmuls 6, 2, 31
  0035174  fmuls 5, 3, 31
  0035178  fmuls 31, 4, 31
  003517c  fmuls 1, 7, 5
  0035180  li 3, 0
  0035184  fmuls 2, 9, 31
  0035188  stfs 6, 16(31)
  003518c  fmuls 3, 8, 6
  0035190  stfs 5, 20(31)
  0035194  stfs 31, 24(31)
  0035198  stw 3, 44(31)
  003519c  fmsubs 1, 8, 31, 1
  00351a0  fmsubs 2, 7, 6, 2
  00351a4  fmsubs 3, 9, 5, 3
  00351a8  stfs 1, 32(31)
  00351ac  stfs 2, 36(31)
  00351b0  stfs 3, 40(31)
  00351b4  ld 0, 176(1)
  00351b8  mtlr 0
  00351bc  lfd 30, 144(1)
  00351c0  lfd 31, 152(1)
  00351c4  ld 31, 136(1)
  00351c8  addi 1, 1, 160
  00351cc  blr

ActivateCamera_1:   # 0x351d0, 0xf4 bytes
  00351d0  stdu 1, -128(1)
  00351d4  mflr 0
  00351d8  std 0, 144(1)
  00351dc  lis 5, 149
  00351e0  lhz 6, 132(3)
  00351e4  extsh 6, 6
  00351e8  lwz 5, 16468(5)
  00351ec  sldi 6, 6, 5
  00351f0  lwz 7, 116(3)
  00351f4  addc 5, 5, 6
  00351f8  std 31, 120(1)
  00351fc  cmpwi 7, 4
  0035200  clrldi 31, 5, 32
  0035204  lwz 31, 28(31)
  0035208  bf 2, 0x352ac
  003520c  cmpwi 4, 0
  0035210  bt 2, 0x35230
  0035214  lhz 5, 126(4)
  0035218  cmpwi 5, 0
  003521c  bf 2, 0x35230
  0035220  lbz 3, 124(3)
  0035224  lbz 4, 124(4)
  0035228  cmpw 3, 4
  003522c  bf 1, 0x352ac
  0035230  lis 3, 151
  0035234  lwz 4, 12(31)
  0035238  addic 3, 3, -25248
  003523c  extsw 4, 4
  0035240  bl 0x110b70
  0035244  nop
  0035248  cmpwi 3, 0
  003524c  bt 2, 0x352ac
  0035250  ori 3, 31, 0
  0035254  lis 31, 149
  0035258  addic 31, 31, 5056
  003525c  lwz 4, 12(3)
  0035260  addic 3, 31, 320
  0035264  extsw 4, 4
  0035268  bl 0x110b70
  003526c  nop
  0035270  cmpwi 3, 0
  0035274  bt 2, 0x35280
  0035278  li 3, 1
  003527c  b 0x352b0
  0035280  li 4, 0
  0035284  lwz 7, 384(31)
  0035288  lis 6, 15507
  003528c  li 5, 2
  0035290  ori 6, 6, 29884
  0035294  stb 4, 627(31)
  0035298  li 3, 1
  003529c  sth 5, 126(7)
  00352a0  stw 6, 660(31)
  00352a4  stw 6, 648(31)
  00352a8  b 0x352b0
  00352ac  li 3, 0
  00352b0  ld 0, 144(1)
  00352b4  mtlr 0
  00352b8  ld 31, 120(1)
  00352bc  addi 1, 1, 128
  00352c0  blr

InitCamera_1:   # 0x352c4, 0x20 bytes
  00352c4  stdu 1, -112(1)
  00352c8  mflr 0
  00352cc  std 0, 128(1)
  00352d0  bl 0x34cf8
  00352d4  ld 0, 128(1)
  00352d8  mtlr 0
  00352dc  addi 1, 1, 112
  00352e0  blr

UpdateCamera_1:   # 0x352e4, 0x20 bytes
  00352e4  stdu 1, -112(1)
  00352e8  mflr 0
  00352ec  std 0, 128(1)
  00352f0  bl 0x34e68
  00352f4  ld 0, 128(1)
  00352f8  mtlr 0
  00352fc  addi 1, 1, 112
  0035300  blr

ExitCamera_1:   # 0x35304, 0x80 bytes
  0035304  stdu 1, -128(1)
  0035308  mflr 0
  003530c  std 0, 144(1)
  0035310  std 31, 120(1)
  0035314  ori 31, 3, 0
  0035318  lis 3, 149
  003531c  lhz 4, 132(31)
  0035320  lwz 3, 16468(3)
  0035324  extsh 4, 4
  0035328  lwz 5, 116(31)
  003532c  sldi 4, 4, 5
  0035330  cmpwi 5, 4
  0035334  addc 3, 3, 4
  0035338  clrldi 3, 3, 32
  003533c  lwz 3, 28(3)
  0035340  bf 2, 0x35370
  0035344  ori 4, 3, 0
  0035348  lis 3, 151
  003534c  addic 3, 3, -25248
  0035350  lwz 4, 12(4)
  0035354  extsw 4, 4
  0035358  bl 0x110b70
  003535c  nop
  0035360  cmpwi 3, 0
  0035364  bf 2, 0x35370
  0035368  li 3, 3
  003536c  sth 3, 126(31)
  0035370  ld 0, 144(1)
  0035374  mtlr 0
  0035378  ld 31, 120(1)
  003537c  addi 1, 1, 128
  0035380  blr
