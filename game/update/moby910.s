# game/update/moby910.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M910_004a9d64:   # 0x4a9d64, 0x14 bytes
  04a9d64  lis 3, 143
  04a9d68  lis 4, 1
  04a9d6c  addic 3, 3, 16200
  04a9d70  stw 4, 72(3)
  04a9d74  blr

M910_004a9d90:   # 0x4a9d90, 0x6f8 bytes
  04a9d90  stdu 1, -336(1)
  04a9d94  mflr 0
  04a9d98  std 0, 352(1)
  04a9d9c  stfd 26, 288(1)
  04a9da0  stfd 27, 296(1)
  04a9da4  stfd 28, 304(1)
  04a9da8  stfd 29, 312(1)
  04a9dac  stfd 30, 320(1)
  04a9db0  stfd 31, 328(1)
  04a9db4  std 31, 280(1)
  04a9db8  lis 4, 75
  04a9dbc  std 28, 256(1)
  04a9dc0  lwz 31, 120(3)
  04a9dc4  ori 28, 1, 0
  04a9dc8  std 30, 272(1)
  04a9dcc  addi 4, 4, -25224
  04a9dd0  lbz 30, 33(3)
  04a9dd4  cmpwi 30, 255
  04a9dd8  lfs 31, 0(4)
  04a9ddc  lfs 4, 24(3)
  04a9de0  std 29, 264(1)
  04a9de4  lwz 31, 352(31)
  04a9de8  bf 2, 0x4a9fac
  04a9dec  lfs 1, 16(3)
  04a9df0  lfs 2, 16(31)
  04a9df4  lfs 3, 20(3)
  04a9df8  lfs 4, 20(31)
  04a9dfc  fsubs 1, 1, 2
  04a9e00  lis 3, 75
  04a9e04  fsubs 2, 3, 4
  04a9e08  addi 3, 3, -25224
  04a9e0c  lis 4, 115
  04a9e10  addic 4, 4, 22784
  04a9e14  fabs 3, 1
  04a9e18  fabs 5, 2
  04a9e1c  stfs 1, 136(1)
  04a9e20  stfs 2, 140(1)
  04a9e24  fsubs 1, 3, 5
  04a9e28  stfs 1, 144(1)
  04a9e2c  lwz 5, 136(1)
  04a9e30  lfs 4, 4(3)
  04a9e34  lfs 1, 136(1)
  04a9e38  lwz 3, 140(1)
  04a9e3c  lfs 2, 140(1)
  04a9e40  lwz 6, 144(1)
  04a9e44  rlwinm 3, 3, 3, 29, 29
  04a9e48  fabs 6, 2
  04a9e4c  lfs 2, 144(1)
  04a9e50  fabs 1, 1
  04a9e54  rlwimi 3, 6, 2, 30, 30
  04a9e58  fsub 7, 2, 4
  04a9e5c  rlwimi 3, 5, 4, 28, 28
  04a9e60  fsub 8, 2, 4
  04a9e64  ori 5, 4, 0
  04a9e68  rlwimi 5, 3, 2, 26, 28
  04a9e6c  slwi 3, 3, 2
  04a9e70  clrldi 5, 5, 32
  04a9e74  fsel 5, 7, 1, 5
  04a9e78  lfsx 1, 4, 3
  04a9e7c  lfs 2, 4(5)
  04a9e80  fsel 3, 8, 6, 3
  04a9e84  fcmpu 0, 5, 4
  04a9e88  bt 1, 0x4a9e94
  04a9e8c  fmr 1, 4
  04a9e90  b 0x4a9fa8
  04a9e94  fsubs 6, 3, 5
  04a9e98  fadds 3, 3, 5
  04a9e9c  li 5, 2
  04a9ea0  mtctr 5
  04a9ea4  fdivs 3, 6, 3
  04a9ea8  fmuls 5, 3, 3
  04a9eac  stfs 3, 212(28)
  04a9eb0  stfs 3, 216(28)
  04a9eb4  stfs 3, 220(28)
  04a9eb8  stfs 3, 224(28)
  04a9ebc  lfs 3, 224(1)
  04a9ec0  lfs 6, 216(1)
  04a9ec4  addic 28, 1, 16
  04a9ec8  lfs 8, 220(1)
  04a9ecc  fmuls 7, 5, 5
  04a9ed0  fmuls 6, 6, 5
  04a9ed4  addic 3, 28, 196
  04a9ed8  addic 4, 28, 212
  04a9edc  fmuls 9, 3, 7
  04a9ee0  fmuls 8, 8, 7
  04a9ee4  fmuls 3, 7, 7
  04a9ee8  stfs 6, 216(1)
  04a9eec  fmuls 5, 9, 5
  04a9ef0  stfs 8, 220(1)
  04a9ef4  stfs 5, 224(1)
  04a9ef8  lfs 5, 196(28)
  04a9efc  fmuls 5, 5, 3
  04a9f00  stfs 5, 212(28)
  04a9f04  lfs 5, 4(3)
  04a9f08  addic 3, 3, 8
  04a9f0c  fmuls 5, 5, 3
  04a9f10  addic 28, 28, 8
  04a9f14  stfs 5, 4(4)
  04a9f18  addic 4, 4, 8
  04a9f1c  bdnz 0x4a9ef8
  04a9f20  li 6, 4
  04a9f24  ori 3, 1, 0
  04a9f28  mtctr 6
  04a9f2c  lis 4, 115
  04a9f30  addic 6, 3, 212
  04a9f34  addic 4, 4, 22752
  04a9f38  ori 7, 6, 0
  04a9f3c  lfs 3, 212(3)
  04a9f40  lfs 5, 0(4)
  04a9f44  fmuls 3, 3, 5
  04a9f48  lfs 5, 4(4)
  04a9f4c  addic 4, 4, 8
  04a9f50  stfs 3, 212(3)
  04a9f54  lfs 3, 4(6)
  04a9f58  addic 3, 3, 8
  04a9f5c  fmuls 3, 3, 5
  04a9f60  stfs 3, 4(6)
  04a9f64  addic 6, 6, 8
  04a9f68  bdnz 0x4a9f3c
  04a9f6c  ori 3, 1, 0
  04a9f70  mtctr 5
  04a9f74  lfs 3, 212(3)
  04a9f78  fadds 3, 4, 3
  04a9f7c  addic 3, 3, 16
  04a9f80  lfs 4, 4(7)
  04a9f84  lfs 5, 8(7)
  04a9f88  lfs 6, 12(7)
  04a9f8c  addic 7, 7, 16
  04a9f90  fadds 3, 3, 4
  04a9f94  fadds 4, 3, 5
  04a9f98  fadds 4, 4, 6
  04a9f9c  bdnz 0x4a9f74
  04a9fa0  fadds 3, 4, 31
  04a9fa4  fmadds 1, 3, 1, 2
  04a9fa8  b 0x4aa450
  04a9fac  lfs 27, 16(3)
  04a9fb0  lfs 1, 16(31)
  04a9fb4  lis 4, 75
  04a9fb8  lfs 2, 20(3)
  04a9fbc  lfs 3, 20(31)
  04a9fc0  fsubs 5, 27, 1
  04a9fc4  addi 3, 4, -25224
  04a9fc8  fsubs 6, 2, 3
  04a9fcc  lis 4, 143
  04a9fd0  lis 29, 115
  04a9fd4  lfs 30, 8(3)
  04a9fd8  lfs 29, 12(3)
  04a9fdc  addic 29, 29, 22784
  04a9fe0  fabs 8, 5
  04a9fe4  fabs 9, 6
  04a9fe8  stfs 5, 124(1)
  04a9fec  stfs 6, 128(1)
  04a9ff0  fsubs 5, 8, 9
  04a9ff4  stfs 5, 132(1)
  04a9ff8  lwz 5, 124(1)
  04a9ffc  lfs 26, 4(3)
  04aa000  lfs 5, 124(1)
  04aa004  fabs 7, 5
  04aa008  lfs 5, 16352(4)
  04aa00c  lwz 3, 128(1)
  04aa010  fmuls 30, 5, 30
  04aa014  fmuls 29, 5, 29
  04aa018  lfs 5, 128(1)
  04aa01c  rlwinm 3, 3, 3, 29, 29
  04aa020  lwz 4, 132(1)
  04aa024  lfs 6, 132(1)
  04aa028  rlwimi 3, 4, 2, 30, 30
  04aa02c  fabs 11, 5
  04aa030  fsub 10, 6, 26
  04aa034  ori 4, 29, 0
  04aa038  fsub 6, 6, 26
  04aa03c  rlwimi 3, 5, 4, 28, 28
  04aa040  rlwimi 4, 3, 2, 26, 28
  04aa044  slwi 3, 3, 2
  04aa048  clrldi 4, 4, 32
  04aa04c  lfsx 28, 29, 3
  04aa050  fsel 7, 10, 7, 9
  04aa054  lfs 5, 4(4)
  04aa058  fsel 6, 6, 11, 8
  04aa05c  fcmpu 0, 7, 26
  04aa060  bt 1, 0x4aa06c
  04aa064  fmr 28, 26
  04aa068  b 0x4aa184
  04aa06c  fsubs 8, 6, 7
  04aa070  fadds 6, 6, 7
  04aa074  addic 3, 1, 16
  04aa078  li 6, 2
  04aa07c  addic 5, 3, 180
  04aa080  addic 4, 3, 164
  04aa084  mtctr 6
  04aa088  fdivs 6, 8, 6
  04aa08c  fmuls 7, 6, 6
  04aa090  stfs 6, 180(28)
  04aa094  stfs 6, 184(28)
  04aa098  stfs 6, 188(28)
  04aa09c  stfs 6, 192(28)
  04aa0a0  lfs 6, 192(1)
  04aa0a4  lfs 8, 184(1)
  04aa0a8  lfs 10, 188(1)
  04aa0ac  fmuls 9, 7, 7
  04aa0b0  fmuls 8, 8, 7
  04aa0b4  fmuls 11, 6, 9
  04aa0b8  fmuls 10, 10, 9
  04aa0bc  fmuls 6, 9, 9
  04aa0c0  stfs 8, 184(1)
  04aa0c4  fmuls 7, 11, 7
  04aa0c8  stfs 10, 188(1)
  04aa0cc  stfs 7, 192(1)
  04aa0d0  lfs 7, 164(3)
  04aa0d4  fmuls 7, 7, 6
  04aa0d8  stfs 7, 180(3)
  04aa0dc  lfs 7, 4(4)
  04aa0e0  addic 4, 4, 8
  04aa0e4  fmuls 7, 7, 6
  04aa0e8  addic 3, 3, 8
  04aa0ec  stfs 7, 4(5)
  04aa0f0  addic 5, 5, 8
  04aa0f4  bdnz 0x4aa0d0
  04aa0f8  li 5, 4
  04aa0fc  ori 3, 1, 0
  04aa100  mtctr 5
  04aa104  lis 4, 115
  04aa108  addic 5, 3, 180
  04aa10c  addic 4, 4, 22752
  04aa110  ori 7, 5, 0
  04aa114  lfs 6, 180(3)
  04aa118  lfs 7, 0(4)
  04aa11c  fmuls 6, 6, 7
  04aa120  lfs 7, 4(4)
  04aa124  addic 4, 4, 8
  04aa128  stfs 6, 180(3)
  04aa12c  lfs 6, 4(5)
  04aa130  addic 3, 3, 8
  04aa134  fmuls 6, 6, 7
  04aa138  stfs 6, 4(5)
  04aa13c  addic 5, 5, 8
  04aa140  bdnz 0x4aa114
  04aa144  ori 3, 1, 0
  04aa148  fmr 6, 26
  04aa14c  mtctr 6
  04aa150  lfs 7, 180(3)
  04aa154  fadds 6, 6, 7
  04aa158  lfs 7, 4(7)
  04aa15c  addic 3, 3, 16
  04aa160  lfs 8, 8(7)
  04aa164  lfs 9, 12(7)
  04aa168  addic 7, 7, 16
  04aa16c  fadds 6, 6, 7
  04aa170  fadds 6, 6, 8
  04aa174  fadds 6, 6, 9
  04aa178  bdnz 0x4aa150
  04aa17c  fadds 6, 6, 31
  04aa180  fmadds 28, 6, 28, 5
  04aa184  fsubs 2, 3, 2
  04aa188  fsubs 1, 1, 27
  04aa18c  lfs 3, 24(31)
  04aa190  lis 3, 165
  04aa194  fsubs 3, 3, 4
  04aa198  addic 3, 3, -28284
  04aa19c  rlwinm 4, 30, 2, 22, 29
  04aa1a0  fmuls 2, 2, 2
  04aa1a4  lwzx 30, 3, 4
  04aa1a8  fmadds 1, 1, 1, 2
  04aa1ac  fmadds 27, 3, 3, 1
  04aa1b0  fsqrts 27, 27
  04aa1b4  lis 3, 164
  04aa1b8  lhz 4, 0(30)
  04aa1bc  rlwinm 4, 4, 8, 9, 23
  04aa1c0  lwz 3, -28512(3)
  04aa1c4  addc 3, 3, 4
  04aa1c8  clrldi 3, 3, 32
  04aa1cc  lbz 4, 32(3)
  04aa1d0  cmpwi 4, 5
  04aa1d4  bt 2, 0x4aa218
  04aa1d8  lfs 1, 20(3)
  04aa1dc  lfs 2, 20(31)
  04aa1e0  lfs 3, 16(3)
  04aa1e4  fsubs 1, 1, 2
  04aa1e8  lfs 2, 16(31)
  04aa1ec  fsubs 2, 3, 2
  04aa1f0  lfs 3, 24(3)
  04aa1f4  lfs 4, 24(31)
  04aa1f8  fsubs 3, 3, 4
  04aa1fc  fmuls 1, 1, 1
  04aa200  fmadds 1, 2, 2, 1
  04aa204  fmadds 1, 3, 3, 1
  04aa208  fsqrts 1, 1
  04aa20c  fcmpu 0, 1, 27
  04aa210  cror 6, 1, 2
  04aa214  bt 6, 0x4aa404
  04aa218  lfs 1, 16(3)
  04aa21c  lfs 2, 16(31)
  04aa220  lfs 3, 20(3)
  04aa224  lfs 4, 20(31)
  04aa228  fsubs 1, 1, 2
  04aa22c  fsubs 2, 3, 4
  04aa230  fabs 3, 1
  04aa234  fabs 4, 2
  04aa238  stfs 1, 112(1)
  04aa23c  stfs 2, 116(1)
  04aa240  fsubs 1, 3, 4
  04aa244  stfs 1, 120(1)
  04aa248  lwz 3, 112(1)
  04aa24c  lfs 1, 112(1)
  04aa250  lwz 4, 116(1)
  04aa254  lfs 2, 116(1)
  04aa258  lwz 5, 120(1)
  04aa25c  rlwinm 4, 4, 3, 29, 29
  04aa260  fabs 5, 2
  04aa264  lfs 2, 120(1)
  04aa268  fabs 1, 1
  04aa26c  rlwimi 4, 5, 2, 30, 30
  04aa270  fsub 6, 2, 26
  04aa274  fsub 7, 2, 26
  04aa278  rlwimi 4, 3, 4, 28, 28
  04aa27c  ori 3, 29, 0
  04aa280  rlwimi 3, 4, 2, 26, 28
  04aa284  slwi 4, 4, 2
  04aa288  clrldi 3, 3, 32
  04aa28c  fsel 4, 6, 1, 4
  04aa290  lfsx 1, 29, 4
  04aa294  fsel 3, 7, 5, 3
  04aa298  lfs 2, 4(3)
  04aa29c  fcmpu 0, 4, 26
  04aa2a0  bt 1, 0x4aa2ac
  04aa2a4  fmr 1, 26
  04aa2a8  b 0x4aa3c4
  04aa2ac  fsubs 5, 3, 4
  04aa2b0  fadds 3, 3, 4
  04aa2b4  addic 3, 1, 16
  04aa2b8  li 7, 2
  04aa2bc  addic 5, 3, 148
  04aa2c0  addic 4, 3, 132
  04aa2c4  mtctr 7
  04aa2c8  fdivs 3, 5, 3
  04aa2cc  fmuls 4, 3, 3
  04aa2d0  stfs 3, 148(28)
  04aa2d4  stfs 3, 152(28)
  04aa2d8  stfs 3, 156(28)
  04aa2dc  stfs 3, 160(28)
  04aa2e0  lfs 3, 160(1)
  04aa2e4  lfs 5, 152(1)
  04aa2e8  lfs 7, 156(1)
  04aa2ec  fmuls 6, 4, 4
  04aa2f0  fmuls 5, 5, 4
  04aa2f4  fmuls 8, 3, 6
  04aa2f8  fmuls 7, 7, 6
  04aa2fc  fmuls 3, 6, 6
  04aa300  stfs 5, 152(1)
  04aa304  fmuls 4, 8, 4
  04aa308  stfs 7, 156(1)
  04aa30c  stfs 4, 160(1)
  04aa310  lfs 4, 132(3)
  04aa314  fmuls 4, 4, 3
  04aa318  stfs 4, 148(3)
  04aa31c  lfs 4, 4(4)
  04aa320  addic 4, 4, 8
  04aa324  fmuls 4, 4, 3
  04aa328  addic 3, 3, 8
  04aa32c  stfs 4, 4(5)
  04aa330  addic 5, 5, 8
  04aa334  bdnz 0x4aa310
  04aa338  li 5, 4
  04aa33c  ori 3, 1, 0
  04aa340  mtctr 5
  04aa344  lis 4, 115
  04aa348  addic 5, 3, 148
  04aa34c  addic 4, 4, 22752
  04aa350  ori 6, 5, 0
  04aa354  lfs 3, 148(3)
  04aa358  lfs 4, 0(4)
  04aa35c  fmuls 3, 3, 4
  04aa360  lfs 4, 4(4)
  04aa364  addic 4, 4, 8
  04aa368  stfs 3, 148(3)
  04aa36c  lfs 3, 4(5)
  04aa370  addic 3, 3, 8
  04aa374  fmuls 3, 3, 4
  04aa378  stfs 3, 4(5)
  04aa37c  addic 5, 5, 8
  04aa380  bdnz 0x4aa354
  04aa384  ori 3, 1, 0
  04aa388  fmr 3, 26
  04aa38c  mtctr 7
  04aa390  lfs 4, 148(3)
  04aa394  fadds 3, 3, 4
  04aa398  lfs 4, 4(6)
  04aa39c  addic 3, 3, 16
  04aa3a0  lfs 5, 8(6)
  04aa3a4  lfs 6, 12(6)
  04aa3a8  addic 6, 6, 16
  04aa3ac  fadds 3, 3, 4
  04aa3b0  fadds 3, 3, 5
  04aa3b4  fadds 3, 3, 6
  04aa3b8  bdnz 0x4aa390
  04aa3bc  fadds 3, 3, 31
  04aa3c0  fmadds 1, 3, 1, 2
  04aa3c4  fmr 2, 28
  04aa3c8  bl 0x5025e0
  04aa3cc  nop
  04aa3d0  fcmpu 0, 1, 26
  04aa3d4  cror 6, 0, 2
  04aa3d8  bt 6, 0x4aa3f0
  04aa3dc  fcmpu 0, 29, 1
  04aa3e0  cror 6, 0, 2
  04aa3e4  bt 6, 0x4aa3f0
  04aa3e8  fmr 29, 1
  04aa3ec  b 0x4aa404
  04aa3f0  fcmpu 1, 30, 1
  04aa3f4  fcmpu 0, 1, 26
  04aa3f8  crnand 2, 0, 4
  04aa3fc  bt 2, 0x4aa404
  04aa400  fmr 30, 1
  04aa404  lhz 3, 0(30)
  04aa408  addic 30, 30, 2
  04aa40c  extsh 3, 3
  04aa410  cmpwi 3, 0
  04aa414  bf 0, 0x4aa1b4
  04aa418  fmr 1, 29
  04aa41c  fmr 2, 30
  04aa420  bl 0x5026a0
  04aa424  nop
  04aa428  lis 3, 75
  04aa42c  addi 3, 3, -25224
  04aa430  lfs 2, 16(3)
  04aa434  fmuls 2, 1, 2
  04aa438  fmr 1, 30
  04aa43c  bl 0x502578
  04aa440  nop
  04aa444  fmr 2, 28
  04aa448  bl 0x502578
  04aa44c  nop
  04aa450  ld 0, 352(1)
  04aa454  mtlr 0
  04aa458  lfd 26, 288(1)
  04aa45c  lfd 27, 296(1)
  04aa460  lfd 28, 304(1)
  04aa464  lfd 29, 312(1)
  04aa468  lfd 30, 320(1)
  04aa46c  lfd 31, 328(1)
  04aa470  ld 28, 256(1)
  04aa474  ld 29, 264(1)
  04aa478  ld 30, 272(1)
  04aa47c  ld 31, 280(1)
  04aa480  addi 1, 1, 336
  04aa484  blr

M910_004aa488:   # 0x4aa488, 0x60 bytes
  04aa488  lbz 4, 33(3)
  04aa48c  cmpwi 4, 255
  04aa490  bt 2, 0x4aa4e4
  04aa494  lis 3, 165
  04aa498  rlwinm 5, 4, 2, 22, 29
  04aa49c  addic 6, 3, -28284
  04aa4a0  lis 4, 164
  04aa4a4  li 3, 2
  04aa4a8  lwzx 5, 6, 5
  04aa4ac  lhz 6, 0(5)
  04aa4b0  lwz 7, -28512(4)
  04aa4b4  rlwinm 6, 6, 8, 9, 23
  04aa4b8  addc 6, 7, 6
  04aa4bc  clrldi 6, 6, 32
  04aa4c0  lbz 7, 32(6)
  04aa4c4  cmpwi 7, 1
  04aa4c8  bf 2, 0x4aa4d0
  04aa4cc  stb 3, 32(6)
  04aa4d0  lhz 6, 0(5)
  04aa4d4  addic 5, 5, 2
  04aa4d8  extsh 6, 6
  04aa4dc  cmpwi 6, 0
  04aa4e0  bf 0, 0x4aa4ac
  04aa4e4  blr

M910_004aa510:   # 0x4aa510, 0x7c0 bytes
  04aa510  stdu 1, -240(1)
  04aa514  mflr 0
  04aa518  std 0, 256(1)
  04aa51c  stfd 31, 232(1)
  04aa520  std 30, 216(1)
  04aa524  std 31, 224(1)
  04aa528  lwz 30, 120(3)
  04aa52c  ori 31, 3, 0
  04aa530  lwz 3, 56(30)
  04aa534  std 29, 208(1)
  04aa538  std 28, 200(1)
  04aa53c  std 27, 192(1)
  04aa540  cmpwi 3, 0
  04aa544  bt 2, 0x4aa580
  04aa548  lis 3, 75
  04aa54c  addi 3, 3, -23320
  04aa550  lfs 1, 0(3)
  04aa554  lfs 2, 4(3)
  04aa558  bl 0xfcbe8
  04aa55c  nop
  04aa560  lis 3, 114
  04aa564  lfs 2, -3056(3)
  04aa568  fmuls 1, 1, 2
  04aa56c  bl 0x502758
  04aa570  nop
  04aa574  li 4, 0
  04aa578  stw 3, 428(30)
  04aa57c  stw 4, 56(30)
  04aa580  addic 3, 30, 428
  04aa584  bl 0x4fff60
  04aa588  nop
  04aa58c  lis 3, 75
  04aa590  li 6, 0
  04aa594  addi 7, 3, -23320
  04aa598  ori 3, 31, 0
  04aa59c  lis 4, 51
  04aa5a0  li 5, 0
  04aa5a4  lfs 31, 8(7)
  04aa5a8  stw 6, 116(1)
  04aa5ac  bl 0x10675c
  04aa5b0  nop
  04aa5b4  ori 29, 3, 0
  04aa5b8  ori 3, 31, 0
  04aa5bc  ori 4, 29, 0
  04aa5c0  addic 5, 30, 32
  04aa5c4  li 6, 0
  04aa5c8  addic 7, 1, 112
  04aa5cc  li 9, 0
  04aa5d0  addic 8, 1, 116
  04aa5d4  li 10, 4
  04aa5d8  bl 0x106840
  04aa5dc  nop
  04aa5e0  ori 28, 3, 0
  04aa5e4  lwz 3, 112(1)
  04aa5e8  cmpwi 3, 1
  04aa5ec  bt 2, 0x4aab58
  04aa5f0  lbz 3, 32(31)
  04aa5f4  cmpwi 3, 11
  04aa5f8  bt 2, 0x4aab58
  04aa5fc  lfs 1, 32(30)
  04aa600  lfs 2, 116(1)
  04aa604  fsubs 1, 1, 2
  04aa608  fcmpu 0, 1, 31
  04aa60c  stfs 1, 32(30)
  04aa610  lbz 3, 33(31)
  04aa614  cmpwi 1, 3, 255
  04aa618  bt 1, 0x4aa620
  04aa61c  li 28, 1
  04aa620  bt 6, 0x4aa674
  04aa624  lis 4, 165
  04aa628  rlwinm 3, 3, 2, 22, 29
  04aa62c  addic 4, 4, -28284
  04aa630  lis 5, 164
  04aa634  li 6, 2
  04aa638  lwzx 3, 4, 3
  04aa63c  lhz 4, 0(3)
  04aa640  lwz 7, -28512(5)
  04aa644  rlwinm 4, 4, 8, 9, 23
  04aa648  addc 4, 7, 4
  04aa64c  clrldi 4, 4, 32
  04aa650  lbz 7, 32(4)
  04aa654  cmpwi 7, 1
  04aa658  bf 2, 0x4aa660
  04aa65c  stb 6, 32(4)
  04aa660  lhz 4, 0(3)
  04aa664  addic 3, 3, 2
  04aa668  extsh 4, 4
  04aa66c  cmpwi 4, 0
  04aa670  bf 0, 0x4aa63c
  04aa674  lis 3, 75
  04aa678  addi 27, 3, -23320
  04aa67c  lfs 1, 12(27)
  04aa680  bl 0x502758
  04aa684  nop
  04aa688  lis 4, 16192
  04aa68c  lis 5, 143
  04aa690  lis 6, 114
  04aa694  cmpwi 28, 2
  04aa698  stw 4, 152(30)
  04aa69c  lis 4, 14851
  04aa6a0  lfs 1, 16312(5)
  04aa6a4  lfs 2, -3048(6)
  04aa6a8  ori 4, 4, 4719
  04aa6ac  stw 3, 144(30)
  04aa6b0  fmuls 1, 1, 2
  04aa6b4  li 3, 0
  04aa6b8  li 5, 9
  04aa6bc  stw 4, 132(30)
  04aa6c0  stb 3, 173(30)
  04aa6c4  stw 5, 148(30)
  04aa6c8  stfs 1, 128(30)
  04aa6cc  lfs 4, 16(27)
  04aa6d0  bt 1, 0x4aa6e8
  04aa6d4  cmpwi 28, -1
  04aa6d8  cmpwi 1, 28, 0
  04aa6dc  bf 1, 0x4aab48
  04aa6e0  bf 5, 0x4aab48
  04aa6e4  b 0x4aa924
  04aa6e8  cmpwi 28, 10
  04aa6ec  bt 1, 0x4aab48
  04aa6f0  lis 3, 75
  04aa6f4  vspltisw 2, -1
  04aa6f8  li 4, 10
  04aa6fc  addi 3, 3, -23320
  04aa700  li 6, 20
  04aa704  lis 5, 114
  04aa708  stb 4, 32(31)
  04aa70c  li 4, -3056
  04aa710  vslw 2, 2, 2
  04aa714  <unknown>
  04aa718  lis 3, 143
  04aa71c  vspltw 3, 3, 0
  04aa720  <unknown>
  04aa724  lis 6, 16872
  04aa728  lis 4, 114
  04aa72c  li 5, 38
  04aa730  vmaddfp 2, 4, 3, 2
  04aa734  lfs 1, 16316(3)
  04aa738  lis 3, 143
  04aa73c  lfs 2, -3052(4)
  04aa740  lis 4, 16752
  04aa744  fmuls 1, 1, 2
  04aa748  vctsxs 2, 2, 0
  04aa74c  vsplth 2, 2, 1
  04aa750  stvehx 2, 5, 30
  04aa754  stfs 1, 136(30)
  04aa758  lfs 1, 16320(3)
  04aa75c  stw 4, 192(30)
  04aa760  fmuls 1, 1, 2
  04aa764  stw 6, 196(30)
  04aa768  lis 6, 115
  04aa76c  addic 6, 6, 22784
  04aa770  stfs 1, 140(30)
  04aa774  lwz 4, 16(29)
  04aa778  lwz 3, 20(29)
  04aa77c  lfs 1, 16(29)
  04aa780  lfs 2, 20(29)
  04aa784  fabs 3, 1
  04aa788  fabs 6, 2
  04aa78c  rlwinm 5, 3, 3, 29, 29
  04aa790  addic 3, 30, 112
  04aa794  fsubs 1, 3, 6
  04aa798  stfs 1, 124(1)
  04aa79c  lwz 7, 124(1)
  04aa7a0  lfs 1, 124(1)
  04aa7a4  rlwimi 5, 7, 2, 30, 30
  04aa7a8  fsub 5, 1, 31
  04aa7ac  fsub 7, 1, 31
  04aa7b0  rlwimi 5, 4, 4, 28, 28
  04aa7b4  ori 4, 6, 0
  04aa7b8  rlwimi 4, 5, 2, 26, 28
  04aa7bc  slwi 5, 5, 2
  04aa7c0  clrldi 4, 4, 32
  04aa7c4  fsel 5, 5, 3, 6
  04aa7c8  lfsx 1, 6, 5
  04aa7cc  fsel 3, 7, 6, 3
  04aa7d0  lfs 2, 4(4)
  04aa7d4  fcmpu 0, 5, 31
  04aa7d8  bt 1, 0x4aa7e4
  04aa7dc  fmr 1, 31
  04aa7e0  b 0x4aa8fc
  04aa7e4  fsubs 6, 3, 5
  04aa7e8  fadds 3, 3, 5
  04aa7ec  addic 4, 1, 16
  04aa7f0  li 8, 2
  04aa7f4  addic 6, 4, 160
  04aa7f8  addic 5, 4, 144
  04aa7fc  mtctr 8
  04aa800  fdivs 3, 6, 3
  04aa804  fmuls 5, 3, 3
  04aa808  stfs 3, 172(1)
  04aa80c  stfs 3, 164(1)
  04aa810  stfs 3, 168(1)
  04aa814  stfs 3, 160(1)
  04aa818  lfs 7, 172(1)
  04aa81c  lfs 8, 164(1)
  04aa820  lfs 9, 168(1)
  04aa824  fmuls 6, 5, 5
  04aa828  fmuls 8, 8, 5
  04aa82c  fmuls 7, 7, 6
  04aa830  fmuls 3, 6, 6
  04aa834  fmuls 6, 9, 6
  04aa838  stfs 8, 164(1)
  04aa83c  fmuls 5, 7, 5
  04aa840  stfs 6, 168(1)
  04aa844  stfs 5, 172(1)
  04aa848  lfs 5, 144(4)
  04aa84c  fmuls 5, 5, 3
  04aa850  stfs 5, 160(4)
  04aa854  lfs 5, 4(5)
  04aa858  addic 5, 5, 8
  04aa85c  fmuls 5, 5, 3
  04aa860  addic 4, 4, 8
  04aa864  stfs 5, 4(6)
  04aa868  addic 6, 6, 8
  04aa86c  bdnz 0x4aa848
  04aa870  li 6, 4
  04aa874  ori 4, 1, 0
  04aa878  mtctr 6
  04aa87c  lis 5, 115
  04aa880  addic 6, 4, 160
  04aa884  addic 5, 5, 22752
  04aa888  ori 7, 6, 0
  04aa88c  lfs 3, 160(4)
  04aa890  lfs 5, 0(5)
  04aa894  fmuls 3, 3, 5
  04aa898  lfs 5, 4(5)
  04aa89c  addic 5, 5, 8
  04aa8a0  stfs 3, 160(4)
  04aa8a4  lfs 3, 4(6)
  04aa8a8  addic 4, 4, 8
  04aa8ac  fmuls 3, 3, 5
  04aa8b0  stfs 3, 4(6)
  04aa8b4  addic 6, 6, 8
  04aa8b8  bdnz 0x4aa88c
  04aa8bc  ori 4, 1, 0
  04aa8c0  fmr 3, 31
  04aa8c4  mtctr 8
  04aa8c8  lfs 5, 160(4)
  04aa8cc  fadds 3, 3, 5
  04aa8d0  lfs 5, 4(7)
  04aa8d4  addic 4, 4, 16
  04aa8d8  lfs 6, 8(7)
  04aa8dc  lfs 7, 12(7)
  04aa8e0  addic 7, 7, 16
  04aa8e4  fadds 3, 3, 5
  04aa8e8  fadds 3, 3, 6
  04aa8ec  fadds 3, 3, 7
  04aa8f0  bdnz 0x4aa8c8
  04aa8f4  fadds 3, 3, 4
  04aa8f8  fmadds 1, 3, 1, 2
  04aa8fc  ori 4, 3, 0
  04aa900  ori 3, 31, 0
  04aa904  li 6, 15
  04aa908  li 7, 1
  04aa90c  li 8, 0
  04aa910  bl 0x10ad80
  04aa914  nop
  04aa918  li 3, 250
  04aa91c  stb 3, 103(30)
  04aa920  b 0x4aab48
  04aa924  li 3, 11
  04aa928  li 4, 0
  04aa92c  lhz 6, 52(31)
  04aa930  lis 5, 75
  04aa934  rlwimi 6, 4, 0, 19, 19
  04aa938  addi 5, 5, -23320
  04aa93c  stb 3, 32(31)
  04aa940  lis 3, 114
  04aa944  lis 4, 16856
  04aa948  sth 6, 52(31)
  04aa94c  lfs 1, 24(5)
  04aa950  lfs 2, -3052(3)
  04aa954  lis 3, 16736
  04aa958  fmuls 1, 2, 1
  04aa95c  lis 6, 115
  04aa960  addic 6, 6, 22784
  04aa964  stfs 1, 136(30)
  04aa968  lfs 1, 28(5)
  04aa96c  stw 3, 192(30)
  04aa970  fmuls 1, 2, 1
  04aa974  stw 4, 196(30)
  04aa978  stfs 1, 140(30)
  04aa97c  lwz 4, 16(29)
  04aa980  lwz 3, 20(29)
  04aa984  lfs 1, 16(29)
  04aa988  lfs 2, 20(29)
  04aa98c  fabs 3, 1
  04aa990  fabs 6, 2
  04aa994  rlwinm 5, 3, 3, 29, 29
  04aa998  addic 3, 30, 112
  04aa99c  fsubs 1, 3, 6
  04aa9a0  stfs 1, 120(1)
  04aa9a4  lwz 7, 120(1)
  04aa9a8  lfs 1, 120(1)
  04aa9ac  rlwimi 5, 7, 2, 30, 30
  04aa9b0  fsub 5, 1, 31
  04aa9b4  fsub 7, 1, 31
  04aa9b8  rlwimi 5, 4, 4, 28, 28
  04aa9bc  ori 4, 6, 0
  04aa9c0  rlwimi 4, 5, 2, 26, 28
  04aa9c4  slwi 5, 5, 2
  04aa9c8  clrldi 4, 4, 32
  04aa9cc  fsel 5, 5, 3, 6
  04aa9d0  lfsx 1, 6, 5
  04aa9d4  fsel 3, 7, 6, 3
  04aa9d8  lfs 2, 4(4)
  04aa9dc  fcmpu 0, 5, 31
  04aa9e0  bt 1, 0x4aa9ec
  04aa9e4  fmr 4, 31
  04aa9e8  b 0x4aab04
  04aa9ec  fsubs 6, 3, 5
  04aa9f0  fadds 3, 3, 5
  04aa9f4  addic 4, 1, 16
  04aa9f8  li 8, 2
  04aa9fc  addic 6, 4, 128
  04aaa00  addic 5, 4, 112
  04aaa04  mtctr 8
  04aaa08  fdivs 3, 6, 3
  04aaa0c  fmuls 5, 3, 3
  04aaa10  stfs 3, 140(1)
  04aaa14  stfs 3, 132(1)
  04aaa18  stfs 3, 136(1)
  04aaa1c  stfs 3, 128(1)
  04aaa20  lfs 7, 140(1)
  04aaa24  lfs 8, 132(1)
  04aaa28  lfs 9, 136(1)
  04aaa2c  fmuls 6, 5, 5
  04aaa30  fmuls 8, 8, 5
  04aaa34  fmuls 7, 7, 6
  04aaa38  fmuls 3, 6, 6
  04aaa3c  fmuls 6, 9, 6
  04aaa40  stfs 8, 132(1)
  04aaa44  fmuls 5, 7, 5
  04aaa48  stfs 6, 136(1)
  04aaa4c  stfs 5, 140(1)
  04aaa50  lfs 5, 112(4)
  04aaa54  fmuls 5, 5, 3
  04aaa58  stfs 5, 128(4)
  04aaa5c  lfs 5, 4(5)
  04aaa60  addic 5, 5, 8
  04aaa64  fmuls 5, 5, 3
  04aaa68  addic 4, 4, 8
  04aaa6c  stfs 5, 4(6)
  04aaa70  addic 6, 6, 8
  04aaa74  bdnz 0x4aaa50
  04aaa78  li 6, 4
  04aaa7c  ori 4, 1, 0
  04aaa80  mtctr 6
  04aaa84  lis 5, 115
  04aaa88  addic 6, 4, 128
  04aaa8c  addic 5, 5, 22752
  04aaa90  ori 7, 6, 0
  04aaa94  lfs 3, 128(4)
  04aaa98  lfs 5, 0(5)
  04aaa9c  fmuls 3, 3, 5
  04aaaa0  lfs 5, 4(5)
  04aaaa4  addic 5, 5, 8
  04aaaa8  stfs 3, 128(4)
  04aaaac  lfs 3, 4(6)
  04aaab0  addic 4, 4, 8
  04aaab4  fmuls 3, 3, 5
  04aaab8  stfs 3, 4(6)
  04aaabc  addic 6, 6, 8
  04aaac0  bdnz 0x4aaa94
  04aaac4  ori 4, 1, 0
  04aaac8  fmr 3, 31
  04aaacc  mtctr 8
  04aaad0  lfs 5, 128(4)
  04aaad4  fadds 3, 3, 5
  04aaad8  lfs 5, 4(7)
  04aaadc  addic 4, 4, 16
  04aaae0  lfs 6, 8(7)
  04aaae4  lfs 7, 12(7)
  04aaae8  addic 7, 7, 16
  04aaaec  fadds 3, 3, 5
  04aaaf0  fadds 3, 3, 6
  04aaaf4  fadds 3, 3, 7
  04aaaf8  bdnz 0x4aaad0
  04aaafc  fadds 4, 3, 4
  04aab00  fmadds 4, 4, 1, 2
  04aab04  ori 4, 3, 0
  04aab08  li 6, 15
  04aab0c  fmr 1, 4
  04aab10  ori 3, 31, 0
  04aab14  li 7, 1
  04aab18  li 8, 0
  04aab1c  bl 0x10ad80
  04aab20  nop
  04aab24  li 6, 250
  04aab28  ori 3, 31, 0
  04aab2c  li 4, 2
  04aab30  li 5, 3
  04aab34  stb 6, 103(30)
  04aab38  li 6, 0
  04aab3c  li 7, -1
  04aab40  bl 0xfcd60
  04aab44  nop
  04aab48  addic 4, 30, 96
  04aab4c  ori 3, 31, 0
  04aab50  bl 0x10c808
  04aab54  nop
  04aab58  li 5, 255
  04aab5c  ori 3, 31, 0
  04aab60  addic 4, 30, 96
  04aab64  stb 5, 164(31)
  04aab68  bl 0x10c9a0
  04aab6c  nop
  04aab70  lwz 3, 428(30)
  04aab74  cmpwi 3, 0
  04aab78  bt 2, 0x4aab98
  04aab7c  lis 3, 75
  04aab80  lis 4, 143
  04aab84  addi 3, 3, -23320
  04aab88  lfs 1, 32(3)
  04aab8c  lfs 31, 16344(4)
  04aab90  fadds 31, 31, 1
  04aab94  b 0x4aabe0
  04aab98  lbz 3, 32(31)
  04aab9c  cmpwi 3, 1
  04aaba0  bf 2, 0x4aabd8
  04aaba4  lis 3, 151
  04aaba8  addic 3, 3, -25376
  04aabac  lwz 4, 576(3)
  04aabb0  cmpw 31, 4
  04aabb4  bt 2, 0x4aabc4
  04aabb8  lwz 3, 572(3)
  04aabbc  cmpw 31, 3
  04aabc0  bf 2, 0x4aabd4
  04aabc4  lis 3, 75
  04aabc8  addi 3, 3, -23320
  04aabcc  lfs 31, 32(3)
  04aabd0  b 0x4aabd4
  04aabd4  b 0x4aabe0
  04aabd8  lis 3, 143
  04aabdc  lfs 31, 16344(3)
  04aabe0  lis 3, 165
  04aabe4  fmr 1, 31
  04aabe8  addic 4, 30, 288
  04aabec  addic 5, 3, 7136
  04aabf0  lwz 3, 432(30)
  04aabf4  li 6, 0
  04aabf8  stfs 31, 416(30)
  04aabfc  slwi 3, 3, 2
  04aac00  extsw 7, 3
  04aac04  ori 3, 31, 0
  04aac08  lwzx 5, 5, 7
  04aac0c  li 7, 0
  04aac10  addic 8, 5, 16
  04aac14  lwz 9, 0(5)
  04aac18  extsw 9, 9
  04aac1c  bl 0x111ba0
  04aac20  nop
  04aac24  cmpwi 3, 2
  04aac28  bt 2, 0x4aac8c
  04aac2c  lfs 1, 372(30)
  04aac30  lfs 2, 292(30)
  04aac34  lfs 3, 368(30)
  04aac38  fsubs 1, 1, 2
  04aac3c  lfs 2, 288(30)
  04aac40  fsubs 2, 3, 2
  04aac44  fmuls 1, 1, 1
  04aac48  fmadds 1, 2, 2, 1
  04aac4c  lfs 2, 416(30)
  04aac50  fsqrts 1, 1
  04aac54  fcmpu 0, 1, 2
  04aac58  bt 1, 0x4aac84
  04aac5c  lfs 1, 24(31)
  04aac60  lfs 2, 296(30)
  04aac64  lis 3, 75
  04aac68  fsubs 1, 1, 2
  04aac6c  addi 3, 3, -23320
  04aac70  lfs 2, 36(3)
  04aac74  fabs 1, 1
  04aac78  fcmpu 0, 1, 2
  04aac7c  cror 6, 0, 2
  04aac80  bt 6, 0x4aac8c
  04aac84  li 3, 2
  04aac88  stw 3, 356(30)
  04aac8c  lwz 3, 352(30)
  04aac90  cmpwi 3, 0
  04aac94  bf 2, 0x4aaca8
  04aac98  lis 3, 151
  04aac9c  addic 3, 3, -25376
  04aaca0  lwz 3, 8320(3)
  04aaca4  stw 3, 352(30)
  04aaca8  ld 0, 256(1)
  04aacac  mtlr 0
  04aacb0  lfd 31, 232(1)
  04aacb4  ld 27, 192(1)
  04aacb8  ld 28, 200(1)
  04aacbc  ld 29, 208(1)
  04aacc0  ld 30, 216(1)
  04aacc4  ld 31, 224(1)
  04aacc8  addi 1, 1, 240
  04aaccc  blr

UpdateMoby_910:   # 0x4aad50, 0x1260 bytes
  04aad50  stdu 1, -400(1)
  04aad54  mflr 0
  04aad58  std 0, 416(1)
  04aad5c  stfd 24, 336(1)
  04aad60  stfd 25, 344(1)
  04aad64  stfd 26, 352(1)
  04aad68  stfd 27, 360(1)
  04aad6c  stfd 28, 368(1)
  04aad70  stfd 29, 376(1)
  04aad74  stfd 30, 384(1)
  04aad78  stfd 31, 392(1)
  04aad7c  std 31, 328(1)
  04aad80  std 30, 320(1)
  04aad84  ori 31, 3, 0
  04aad88  std 29, 312(1)
  04aad8c  std 28, 304(1)
  04aad90  std 27, 296(1)
  04aad94  lwz 30, 120(31)
  04aad98  bl 0x4aa510
  04aad9c  lwz 4, 36(31)
  04aada0  lis 5, 143
  04aada4  lwz 29, 352(30)
  04aada8  lbz 3, 32(31)
  04aadac  lis 6, 16204
  04aadb0  cmpwi 3, 5
  04aadb4  lfs 1, 36(4)
  04aadb8  lfs 2, 16308(5)
  04aadbc  ori 4, 6, 52429
  04aadc0  fmuls 1, 1, 2
  04aadc4  stw 4, 88(31)
  04aadc8  stfs 1, 44(31)
  04aadcc  bt 1, 0x4aae04
  04aadd0  cmpwi 3, 5
  04aadd4  bt 2, 0x4ab2d4
  04aadd8  cmpwi 3, 4
  04aaddc  bt 2, 0x4ab244
  04aade0  cmpwi 3, 3
  04aade4  bt 2, 0x4ab1a0
  04aade8  cmpwi 3, 2
  04aadec  bt 2, 0x4aafd0
  04aadf0  cmpwi 3, 1
  04aadf4  bt 2, 0x4aaf0c
  04aadf8  cmpwi 3, 0
  04aadfc  bt 2, 0x4aae30
  04aae00  b 0x4abf6c
  04aae04  cmpwi 3, 11
  04aae08  bt 2, 0x4abf10
  04aae0c  cmpwi 3, 10
  04aae10  bt 2, 0x4abe2c
  04aae14  cmpwi 3, 9
  04aae18  bt 2, 0x4ab920
  04aae1c  cmpwi 3, 8
  04aae20  bt 2, 0x4abbe0
  04aae24  cmpwi 3, 7
  04aae28  bt 2, 0x4ab688
  04aae2c  b 0x4abf6c
  04aae30  lis 4, 16512
  04aae34  li 5, 3
  04aae38  li 6, 4
  04aae3c  addic 3, 30, 208
  04aae40  stw 4, 32(30)
  04aae44  stb 5, 40(30)
  04aae48  sth 6, 36(30)
  04aae4c  lfs 1, 16(31)
  04aae50  lhz 4, 52(31)
  04aae54  stfs 1, 368(30)
  04aae58  lfs 1, 20(31)
  04aae5c  ori 4, 4, 20480
  04aae60  stfs 1, 372(30)
  04aae64  lfs 1, 24(31)
  04aae68  sth 4, 52(31)
  04aae6c  stfs 1, 376(30)
  04aae70  lfs 1, 28(31)
  04aae74  stfs 1, 380(30)
  04aae78  bl 0x100f8c
  04aae7c  nop
  04aae80  lis 5, 75
  04aae84  lis 3, 16128
  04aae88  lis 4, 16384
  04aae8c  addi 5, 5, -21296
  04aae90  lis 29, 143
  04aae94  stw 3, 220(30)
  04aae98  stw 4, 216(30)
  04aae9c  lfs 1, 0(5)
  04aaea0  lfs 2, 16308(29)
  04aaea4  fmuls 1, 2, 1
  04aaea8  bl 0x502758
  04aaeac  nop
  04aaeb0  lis 4, 114
  04aaeb4  lfs 1, 16308(29)
  04aaeb8  lfs 2, 420(30)
  04aaebc  li 5, 1
  04aaec0  stfs 1, 212(30)
  04aaec4  lfs 1, -3052(4)
  04aaec8  stw 3, 208(30)
  04aaecc  fmuls 1, 2, 1
  04aaed0  stfs 1, 244(30)
  04aaed4  lbz 3, 83(31)
  04aaed8  stb 5, 32(31)
  04aaedc  cmpwi 3, 6
  04aaee0  bt 2, 0x4aaefc
  04aaee4  ori 3, 31, 0
  04aaee8  li 4, 6
  04aaeec  li 5, 0
  04aaef0  li 6, 0
  04aaef4  bl 0xfddc0
  04aaef8  nop
  04aaefc  lis 3, 143
  04aaf00  lfs 1, 16344(3)
  04aaf04  stfs 1, 416(30)
  04aaf08  b 0x4abf6c
  04aaf0c  lis 3, 16000
  04aaf10  lwz 4, 356(30)
  04aaf14  cmpwi 4, 2
  04aaf18  stw 3, 88(31)
  04aaf1c  bf 2, 0x4aaf2c
  04aaf20  lwz 3, 436(30)
  04aaf24  cmpwi 3, 0
  04aaf28  bt 2, 0x4abf6c
  04aaf2c  lis 4, 75
  04aaf30  li 3, 2
  04aaf34  vspltisw 2, -1
  04aaf38  addi 4, 4, -21296
  04aaf3c  li 5, 4
  04aaf40  lis 6, 114
  04aaf44  stb 3, 32(31)
  04aaf48  li 7, -3056
  04aaf4c  vslw 2, 2, 2
  04aaf50  <unknown>
  04aaf54  li 4, 424
  04aaf58  vspltw 3, 3, 0
  04aaf5c  <unknown>
  04aaf60  vmaddfp 2, 4, 3, 2
  04aaf64  vctsxs 2, 2, 0
  04aaf68  vspltw 2, 2, 0
  04aaf6c  stvewx 2, 4, 30
  04aaf70  lbz 31, 33(31)
  04aaf74  cmpwi 1, 31, 255
  04aaf78  bt 6, 0x4abf6c
  04aaf7c  bt 6, 0x4abf6c
  04aaf80  lis 4, 165
  04aaf84  slwi 5, 31, 2
  04aaf88  addic 4, 4, -28284
  04aaf8c  lis 31, 164
  04aaf90  lwzx 4, 4, 5
  04aaf94  lhz 5, 0(4)
  04aaf98  lwz 6, -28512(31)
  04aaf9c  rlwinm 5, 5, 8, 9, 23
  04aafa0  addc 5, 6, 5
  04aafa4  clrldi 5, 5, 32
  04aafa8  lbz 6, 32(5)
  04aafac  cmpwi 6, 1
  04aafb0  bf 2, 0x4aafb8
  04aafb4  stb 3, 32(5)
  04aafb8  lhz 5, 0(4)
  04aafbc  addic 4, 4, 2
  04aafc0  extsh 5, 5
  04aafc4  cmpwi 5, 0
  04aafc8  bf 0, 0x4aaf94
  04aafcc  b 0x4abf6c
  04aafd0  lis 3, 16320
  04aafd4  lbz 4, 83(31)
  04aafd8  cmpwi 4, 6
  04aafdc  cmpwi 1, 4, 19
  04aafe0  stw 3, 88(31)
  04aafe4  bf 2, 0x4ab088
  04aafe8  lwz 3, 424(30)
  04aafec  cmpwi 3, 0
  04aaff0  bf 2, 0x4ab028
  04aaff4  lis 3, 75
  04aaff8  addi 3, 3, -21296
  04aaffc  lfs 1, 8(3)
  04ab000  lfs 2, 12(3)
  04ab004  bl 0xfcbe8
  04ab008  nop
  04ab00c  lis 3, 114
  04ab010  lfs 2, -3056(3)
  04ab014  fmuls 1, 1, 2
  04ab018  bl 0x502758
  04ab01c  nop
  04ab020  stw 3, 424(30)
  04ab024  b 0x4abf6c
  04ab028  addic 3, 30, 424
  04ab02c  bl 0x4fff60
  04ab030  nop
  04ab034  cmpwi 3, 0
  04ab038  bt 2, 0x4abf6c
  04ab03c  lbz 3, 83(31)
  04ab040  cmpwi 3, 20
  04ab044  bt 2, 0x4abf6c
  04ab048  lis 3, 75
  04ab04c  lis 4, 114
  04ab050  addi 3, 3, -21296
  04ab054  li 5, 0
  04ab058  lfs 1, 16(3)
  04ab05c  lfs 2, -3056(4)
  04ab060  ori 3, 31, 0
  04ab064  fmuls 1, 2, 1
  04ab068  li 4, 20
  04ab06c  fctiwz 1, 1
  04ab070  stfd 1, 272(1)
  04ab074  lwz 6, 276(1)
  04ab078  extsw 6, 6
  04ab07c  bl 0xfddc0
  04ab080  nop
  04ab084  b 0x4abf6c
  04ab088  lbz 3, 112(31)
  04ab08c  rlwinm 3, 3, 0, 30, 30
  04ab090  cmpwi 3, 0
  04ab094  bt 2, 0x4abf6c
  04ab098  lis 3, 151
  04ab09c  lfs 1, 20(31)
  04ab0a0  lfs 2, 16(31)
  04ab0a4  addic 3, 3, -25376
  04ab0a8  lfs 3, 132(3)
  04ab0ac  lfs 4, 128(3)
  04ab0b0  fsubs 1, 1, 3
  04ab0b4  fsubs 2, 2, 4
  04ab0b8  lis 3, 143
  04ab0bc  fmuls 1, 1, 1
  04ab0c0  fmadds 1, 2, 2, 1
  04ab0c4  lfs 2, 16344(3)
  04ab0c8  fsqrts 1, 1
  04ab0cc  fcmpu 0, 1, 2
  04ab0d0  cror 2, 1, 2
  04ab0d4  bt 2, 0x4ab154
  04ab0d8  lis 4, 75
  04ab0dc  li 3, 5
  04ab0e0  addi 4, 4, -21296
  04ab0e4  stb 3, 32(31)
  04ab0e8  lfs 2, 408(30)
  04ab0ec  lfs 1, 20(4)
  04ab0f0  lfs 3, 24(4)
  04ab0f4  fmuls 1, 2, 1
  04ab0f8  fmuls 2, 2, 3
  04ab0fc  bl 0xfcbe8
  04ab100  nop
  04ab104  stfs 1, 404(30)
  04ab108  lbz 3, 83(31)
  04ab10c  cmpwi 3, 21
  04ab110  bt 2, 0x4abf6c
  04ab114  lis 3, 75
  04ab118  lis 4, 114
  04ab11c  addi 3, 3, -21296
  04ab120  li 5, 0
  04ab124  lfs 1, 16(3)
  04ab128  lfs 2, -3056(4)
  04ab12c  ori 3, 31, 0
  04ab130  li 4, 21
  04ab134  fmuls 1, 2, 1
  04ab138  fctiwz 1, 1
  04ab13c  stfd 1, 272(1)
  04ab140  lwz 6, 276(1)
  04ab144  extsw 6, 6
  04ab148  bl 0xfddc0
  04ab14c  nop
  04ab150  b 0x4abf6c
  04ab154  li 3, 3
  04ab158  stb 3, 32(31)
  04ab15c  bt 6, 0x4abf6c
  04ab160  lis 3, 75
  04ab164  lis 4, 114
  04ab168  addi 3, 3, -21296
  04ab16c  li 5, 0
  04ab170  lfs 1, 16(3)
  04ab174  lfs 2, -3056(4)
  04ab178  ori 3, 31, 0
  04ab17c  fmuls 1, 2, 1
  04ab180  li 4, 19
  04ab184  fctiwz 1, 1
  04ab188  stfd 1, 272(1)
  04ab18c  lwz 6, 276(1)
  04ab190  extsw 6, 6
  04ab194  bl 0xfddc0
  04ab198  nop
  04ab19c  b 0x4abf6c
  04ab1a0  lfs 1, 288(30)
  04ab1a4  lfs 2, 16(31)
  04ab1a8  lfs 3, 292(30)
  04ab1ac  lfs 4, 20(31)
  04ab1b0  fsubs 1, 1, 2
  04ab1b4  fsubs 2, 3, 4
  04ab1b8  bl 0x5e8338
  04ab1bc  nop
  04ab1c0  lis 3, 75
  04ab1c4  lis 6, 114
  04ab1c8  addi 4, 3, -21296
  04ab1cc  ori 3, 31, 0
  04ab1d0  addic 5, 30, 400
  04ab1d4  lfs 4, 36(4)
  04ab1d8  lfs 2, 28(4)
  04ab1dc  lfs 5, 32(4)
  04ab1e0  lfs 6, -3052(6)
  04ab1e4  fmr 3, 5
  04ab1e8  fmuls 4, 6, 4
  04ab1ec  bl 0xff2e8
  04ab1f0  nop
  04ab1f4  lwz 3, 356(30)
  04ab1f8  cmpwi 3, 2
  04ab1fc  bt 2, 0x4abf6c
  04ab200  li 3, 4
  04ab204  lis 4, 75
  04ab208  addi 4, 4, -21296
  04ab20c  stb 3, 32(31)
  04ab210  lwz 3, 440(30)
  04ab214  extsw 3, 3
  04ab218  lfs 1, 8(4)
  04ab21c  std 3, 272(1)
  04ab220  lfd 2, 272(1)
  04ab224  fcfid 2, 2
  04ab228  frsp 2, 2
  04ab22c  bl 0xfcbe8
  04ab230  nop
  04ab234  bl 0x502758
  04ab238  nop
  04ab23c  stw 3, 424(30)
  04ab240  b 0x4abf6c
  04ab244  addic 3, 30, 424
  04ab248  bl 0x4fff60
  04ab24c  nop
  04ab250  cmpwi 3, 0
  04ab254  bt 2, 0x4abf6c
  04ab258  lis 4, 75
  04ab25c  li 3, 5
  04ab260  addi 4, 4, -21296
  04ab264  stb 3, 32(31)
  04ab268  lfs 2, 408(30)
  04ab26c  lfs 1, 20(4)
  04ab270  lfs 3, 24(4)
  04ab274  fmuls 1, 2, 1
  04ab278  fmuls 2, 2, 3
  04ab27c  bl 0xfcbe8
  04ab280  nop
  04ab284  stfs 1, 404(30)
  04ab288  lbz 3, 83(31)
  04ab28c  cmpwi 3, 21
  04ab290  bt 2, 0x4abf6c
  04ab294  lis 3, 75
  04ab298  lis 4, 114
  04ab29c  addi 3, 3, -21296
  04ab2a0  li 5, 0
  04ab2a4  lfs 1, 16(3)
  04ab2a8  lfs 2, -3056(4)
  04ab2ac  ori 3, 31, 0
  04ab2b0  li 4, 21
  04ab2b4  fmuls 1, 2, 1
  04ab2b8  fctiwz 1, 1
  04ab2bc  stfd 1, 272(1)
  04ab2c0  lwz 6, 276(1)
  04ab2c4  extsw 6, 6
  04ab2c8  bl 0xfddc0
  04ab2cc  nop
  04ab2d0  b 0x4abf6c
  04ab2d4  lfs 1, 20(31)
  04ab2d8  lfs 2, 20(29)
  04ab2dc  lfs 3, 16(31)
  04ab2e0  fsubs 1, 1, 2
  04ab2e4  lfs 2, 16(29)
  04ab2e8  fsubs 2, 3, 2
  04ab2ec  lfs 3, 24(31)
  04ab2f0  lfs 4, 24(29)
  04ab2f4  fsubs 3, 3, 4
  04ab2f8  fmuls 1, 1, 1
  04ab2fc  lis 3, 143
  04ab300  fmadds 1, 2, 2, 1
  04ab304  lfs 2, 16328(3)
  04ab308  fmadds 1, 3, 3, 1
  04ab30c  fsqrts 1, 1
  04ab310  fcmpu 0, 2, 1
  04ab314  cror 6, 1, 2
  04ab318  bt 6, 0x4ab354
  04ab31c  lis 3, 75
  04ab320  lis 4, 114
  04ab324  lfs 1, 420(30)
  04ab328  addi 5, 3, -21296
  04ab32c  lis 6, 114
  04ab330  addic 3, 30, 244
  04ab334  lfs 2, -3052(4)
  04ab338  lfs 3, 40(5)
  04ab33c  lfs 4, -3048(6)
  04ab340  fmuls 1, 1, 2
  04ab344  fmuls 2, 4, 3
  04ab348  bl 0x109af0
  04ab34c  nop
  04ab350  b 0x4ab37c
  04ab354  lis 3, 75
  04ab358  lis 5, 114
  04ab35c  addi 4, 3, -21296
  04ab360  addic 3, 30, 244
  04ab364  lfs 3, 12(4)
  04ab368  lfs 1, 8(4)
  04ab36c  lfs 4, -3048(5)
  04ab370  fmuls 2, 4, 3
  04ab374  bl 0x109af0
  04ab378  nop
  04ab37c  lfs 1, 16(29)
  04ab380  lfs 2, 16(31)
  04ab384  lfs 3, 20(29)
  04ab388  lfs 4, 20(31)
  04ab38c  fsubs 1, 1, 2
  04ab390  fsubs 2, 3, 4
  04ab394  bl 0x5e8338
  04ab398  nop
  04ab39c  lis 3, 75
  04ab3a0  lis 4, 114
  04ab3a4  addi 28, 3, -21296
  04ab3a8  ori 3, 31, 0
  04ab3ac  addic 5, 30, 400
  04ab3b0  lfs 4, 36(28)
  04ab3b4  lfs 2, 28(28)
  04ab3b8  lfs 5, 32(28)
  04ab3bc  lfs 6, -3052(4)
  04ab3c0  fmr 3, 5
  04ab3c4  fmuls 4, 6, 4
  04ab3c8  bl 0xff2e8
  04ab3cc  nop
  04ab3d0  ori 3, 31, 0
  04ab3d4  bl 0x4a9d90
  04ab3d8  lfs 31, 44(28)
  04ab3dc  lfs 30, 48(28)
  04ab3e0  fadds 3, 1, 31
  04ab3e4  fsubs 2, 30, 1
  04ab3e8  lfs 29, 52(28)
  04ab3ec  fsubs 7, 29, 1
  04ab3f0  lfs 28, 56(28)
  04ab3f4  lfs 27, 60(28)
  04ab3f8  lis 3, 143
  04ab3fc  lfs 26, 64(28)
  04ab400  lfs 25, 68(28)
  04ab404  fsubs 4, 30, 3
  04ab408  fsub 6, 1, 2
  04ab40c  fsubs 5, 29, 3
  04ab410  fsub 8, 3, 4
  04ab414  fsel 1, 6, 2, 1
  04ab418  fsel 2, 8, 4, 3
  04ab41c  fsub 4, 7, 1
  04ab420  fsub 3, 5, 2
  04ab424  fsel 1, 4, 7, 1
  04ab428  lfs 7, 16328(3)
  04ab42c  lfs 9, 16(29)
  04ab430  fsel 2, 3, 5, 2
  04ab434  fmuls 4, 1, 1
  04ab438  fmuls 3, 2, 2
  04ab43c  fmuls 5, 4, 1
  04ab440  fmuls 8, 3, 2
  04ab444  fmuls 6, 4, 5
  04ab448  fmadds 1, 5, 28, 1
  04ab44c  lfs 5, 20(29)
  04ab450  fmuls 10, 3, 8
  04ab454  fmadds 2, 8, 28, 2
  04ab458  fmuls 8, 4, 6
  04ab45c  fmadds 1, 6, 27, 1
  04ab460  lfs 6, 16(31)
  04ab464  lfs 11, 20(31)
  04ab468  lfs 24, 72(31)
  04ab46c  fmuls 12, 3, 10
  04ab470  fmadds 2, 10, 27, 2
  04ab474  fmuls 4, 4, 8
  04ab478  fmadds 1, 8, 26, 1
  04ab47c  fmuls 3, 3, 12
  04ab480  fmadds 2, 12, 26, 2
  04ab484  fmadds 1, 4, 25, 1
  04ab488  fmadds 2, 3, 25, 2
  04ab48c  fmadds 1, 1, 7, 5
  04ab490  fmadds 3, 2, 7, 9
  04ab494  fsubs 2, 1, 11
  04ab498  fsubs 1, 3, 6
  04ab49c  bl 0x5e8338
  04ab4a0  nop
  04ab4a4  fadds 2, 1, 31
  04ab4a8  fsubs 3, 30, 1
  04ab4ac  fsubs 4, 29, 1
  04ab4b0  li 3, 0
  04ab4b4  addic 4, 30, 208
  04ab4b8  addic 5, 1, 112
  04ab4bc  addic 6, 1, 128
  04ab4c0  fsubs 5, 30, 2
  04ab4c4  fsub 6, 1, 3
  04ab4c8  fsubs 7, 29, 2
  04ab4cc  fsub 8, 2, 5
  04ab4d0  fsel 3, 6, 3, 1
  04ab4d4  fsel 2, 8, 5, 2
  04ab4d8  fsub 5, 4, 3
  04ab4dc  fsub 6, 7, 2
  04ab4e0  fsel 3, 5, 4, 3
  04ab4e4  lfs 4, 72(28)
  04ab4e8  stw 3, 120(1)
  04ab4ec  ori 3, 31, 0
  04ab4f0  fsel 2, 6, 7, 2
  04ab4f4  fmuls 5, 3, 3
  04ab4f8  fmuls 6, 2, 2
  04ab4fc  fmuls 7, 5, 3
  04ab500  fmuls 8, 6, 2
  04ab504  fmuls 9, 5, 7
  04ab508  fmadds 3, 7, 28, 3
  04ab50c  fmuls 7, 6, 8
  04ab510  fmadds 2, 8, 28, 2
  04ab514  fmuls 8, 5, 9
  04ab518  fmadds 3, 9, 27, 3
  04ab51c  fmuls 9, 6, 7
  04ab520  fmadds 2, 7, 27, 2
  04ab524  fmuls 5, 5, 8
  04ab528  fmadds 3, 8, 26, 3
  04ab52c  fmuls 6, 6, 9
  04ab530  fmadds 2, 9, 26, 2
  04ab534  fmadds 3, 5, 25, 3
  04ab538  fmadds 2, 6, 25, 2
  04ab53c  fmuls 3, 3, 4
  04ab540  fmuls 2, 2, 4
  04ab544  stfs 3, 116(1)
  04ab548  lfs 31, 76(28)
  04ab54c  stfs 1, 72(31)
  04ab550  fmr 1, 31
  04ab554  stfs 2, 112(1)
  04ab558  bl 0x101058
  04ab55c  nop
  04ab560  stfs 24, 72(31)
  04ab564  lfs 2, 20(31)
  04ab568  lfs 1, 372(30)
  04ab56c  lfs 3, 16(31)
  04ab570  fsubs 4, 2, 1
  04ab574  lfs 1, 368(30)
  04ab578  fsubs 5, 3, 1
  04ab57c  lfs 1, 24(31)
  04ab580  lfs 6, 376(30)
  04ab584  fsubs 6, 1, 6
  04ab588  fmuls 4, 4, 4
  04ab58c  lis 3, 143
  04ab590  fmadds 4, 5, 5, 4
  04ab594  lfs 5, 16332(3)
  04ab598  fmadds 4, 6, 6, 4
  04ab59c  fsqrts 4, 4
  04ab5a0  fcmpu 0, 4, 5
  04ab5a4  bt 1, 0x4ab5b4
  04ab5a8  lwz 3, 356(30)
  04ab5ac  cmpwi 3, 2
  04ab5b0  bf 2, 0x4ab5c0
  04ab5b4  li 3, 8
  04ab5b8  stb 3, 32(31)
  04ab5bc  b 0x4abf6c
  04ab5c0  lfs 4, 20(29)
  04ab5c4  lfs 5, 16(29)
  04ab5c8  fsubs 2, 2, 4
  04ab5cc  fsubs 3, 3, 5
  04ab5d0  lis 3, 143
  04ab5d4  fmuls 2, 2, 2
  04ab5d8  fmadds 2, 3, 3, 2
  04ab5dc  lfs 3, 16328(3)
  04ab5e0  fsqrts 2, 2
  04ab5e4  fcmpu 0, 2, 3
  04ab5e8  cror 6, 1, 2
  04ab5ec  bt 6, 0x4abf6c
  04ab5f0  lfs 2, 24(29)
  04ab5f4  fsubs 1, 2, 1
  04ab5f8  fabs 1, 1
  04ab5fc  fcmpu 0, 1, 31
  04ab600  cror 6, 1, 2
  04ab604  bt 6, 0x4abf6c
  04ab608  lis 3, 75
  04ab60c  lis 4, 114
  04ab610  addi 3, 3, -21296
  04ab614  lfs 1, 16(3)
  04ab618  lfs 2, -3056(4)
  04ab61c  lis 3, 151
  04ab620  fmuls 2, 2, 1
  04ab624  addic 3, 3, -25376
  04ab628  lwz 3, 448(3)
  04ab62c  fctiwz 2, 2
  04ab630  stfd 2, 272(1)
  04ab634  lwz 4, 276(1)
  04ab638  cmpw 3, 4
  04ab63c  bf 0, 0x4abf6c
  04ab640  li 3, 7
  04ab644  lbz 4, 83(31)
  04ab648  cmpwi 4, 1
  04ab64c  stb 3, 32(31)
  04ab650  bt 2, 0x4abf6c
  04ab654  lis 3, 114
  04ab658  li 4, 1
  04ab65c  li 5, 0
  04ab660  lfs 2, -3056(3)
  04ab664  ori 3, 31, 0
  04ab668  fmuls 1, 2, 1
  04ab66c  fctiwz 1, 1
  04ab670  stfd 1, 272(1)
  04ab674  lwz 6, 276(1)
  04ab678  extsw 6, 6
  04ab67c  bl 0xfddc0
  04ab680  nop
  04ab684  b 0x4abf6c
  04ab688  lfs 1, 16(29)
  04ab68c  lfs 2, 16(31)
  04ab690  lfs 3, 20(29)
  04ab694  lfs 4, 20(31)
  04ab698  fsubs 1, 1, 2
  04ab69c  fsubs 2, 3, 4
  04ab6a0  bl 0x5e8338
  04ab6a4  nop
  04ab6a8  lis 3, 75
  04ab6ac  lis 4, 114
  04ab6b0  addi 29, 3, -21296
  04ab6b4  ori 3, 31, 0
  04ab6b8  addic 5, 30, 400
  04ab6bc  lfs 4, 36(29)
  04ab6c0  lfs 2, 28(29)
  04ab6c4  lfs 5, 32(29)
  04ab6c8  lfs 6, -3052(4)
  04ab6cc  fmr 3, 5
  04ab6d0  fmuls 4, 6, 4
  04ab6d4  bl 0xff2e8
  04ab6d8  nop
  04ab6dc  ori 3, 31, 0
  04ab6e0  bl 0xefe40
  04ab6e4  nop
  04ab6e8  lfs 2, 80(29)
  04ab6ec  fcmpu 0, 1, 2
  04ab6f0  cror 6, 0, 2
  04ab6f4  bt 6, 0x4ab8bc
  04ab6f8  ori 3, 31, 0
  04ab6fc  bl 0xefe40
  04ab700  nop
  04ab704  lis 3, 75
  04ab708  addi 3, 3, -21296
  04ab70c  lfs 2, 84(3)
  04ab710  fcmpu 0, 1, 2
  04ab714  cror 6, 1, 2
  04ab718  bt 6, 0x4ab8bc
  04ab71c  lis 3, 75
  04ab720  lfs 1, 72(31)
  04ab724  addi 30, 3, -21296
  04ab728  li 4, 0
  04ab72c  lfs 2, 44(30)
  04ab730  lfs 3, 48(30)
  04ab734  fadds 2, 1, 2
  04ab738  lfs 4, 52(30)
  04ab73c  fsubs 5, 3, 1
  04ab740  lis 3, 16256
  04ab744  li 5, 1
  04ab748  addic 29, 1, 144
  04ab74c  fsubs 3, 3, 2
  04ab750  fsub 7, 1, 5
  04ab754  fsubs 6, 4, 2
  04ab758  fsubs 4, 4, 1
  04ab75c  fsub 9, 2, 3
  04ab760  fsel 1, 7, 5, 1
  04ab764  lfs 5, 56(30)
  04ab768  lfs 7, 60(30)
  04ab76c  fsel 2, 9, 3, 2
  04ab770  fsub 3, 4, 1
  04ab774  fsub 9, 6, 2
  04ab778  fsel 1, 3, 4, 1
  04ab77c  lfs 3, 64(30)
  04ab780  lfs 4, 68(30)
  04ab784  stw 4, 232(1)
  04ab788  stw 3, 252(1)
  04ab78c  stw 5, 256(1)
  04ab790  ori 3, 31, 0
  04ab794  stw 5, 244(1)
  04ab798  li 4, 0
  04ab79c  fsel 2, 9, 6, 2
  04ab7a0  fmuls 6, 1, 1
  04ab7a4  stw 31, 240(1)
  04ab7a8  ori 5, 29, 0
  04ab7ac  fmuls 8, 2, 2
  04ab7b0  fmuls 9, 6, 1
  04ab7b4  fmuls 10, 8, 2
  04ab7b8  fmuls 11, 6, 9
  04ab7bc  fmadds 1, 9, 5, 1
  04ab7c0  fmuls 9, 8, 10
  04ab7c4  fmadds 2, 10, 5, 2
  04ab7c8  fmuls 5, 6, 11
  04ab7cc  fmadds 1, 11, 7, 1
  04ab7d0  fmuls 10, 8, 9
  04ab7d4  fmadds 2, 9, 7, 2
  04ab7d8  fmuls 6, 6, 5
  04ab7dc  fmadds 1, 5, 3, 1
  04ab7e0  fmuls 5, 8, 10
  04ab7e4  fmadds 2, 10, 3, 2
  04ab7e8  fmadds 1, 6, 4, 1
  04ab7ec  fmadds 2, 5, 4, 2
  04ab7f0  stfs 1, 228(1)
  04ab7f4  stfs 2, 224(1)
  04ab7f8  bl 0xf1114
  04ab7fc  nop
  04ab800  lfs 31, 88(30)
  04ab804  addic 28, 1, 224
  04ab808  ori 3, 29, 0
  04ab80c  li 5, 0
  04ab810  fmr 1, 31
  04ab814  ori 6, 31, 0
  04ab818  ori 7, 28, 0
  04ab81c  bl 0x5e598
  04ab820  nop
  04ab824  ori 3, 31, 0
  04ab828  ori 5, 29, 0
  04ab82c  li 4, 1
  04ab830  bl 0xf1114
  04ab834  nop
  04ab838  ori 3, 29, 0
  04ab83c  fmr 1, 31
  04ab840  li 5, 0
  04ab844  ori 6, 31, 0
  04ab848  ori 7, 28, 0
  04ab84c  bl 0x5e598
  04ab850  nop
  04ab854  ori 3, 31, 0
  04ab858  li 4, 2
  04ab85c  ori 5, 29, 0
  04ab860  bl 0xf1114
  04ab864  nop
  04ab868  lfs 31, 92(30)
  04ab86c  ori 3, 29, 0
  04ab870  li 5, 0
  04ab874  ori 6, 31, 0
  04ab878  fmr 1, 31
  04ab87c  ori 7, 28, 0
  04ab880  bl 0x5e598
  04ab884  nop
  04ab888  ori 3, 31, 0
  04ab88c  ori 5, 29, 0
  04ab890  li 4, 3
  04ab894  bl 0xf1114
  04ab898  nop
  04ab89c  ori 3, 29, 0
  04ab8a0  fmr 1, 31
  04ab8a4  li 5, 0
  04ab8a8  ori 6, 31, 0
  04ab8ac  ori 7, 28, 0
  04ab8b0  bl 0x5e598
  04ab8b4  nop
  04ab8b8  b 0x4abf6c
  04ab8bc  lbz 3, 112(31)
  04ab8c0  rlwinm 3, 3, 0, 30, 30
  04ab8c4  cmpwi 3, 0
  04ab8c8  bt 2, 0x4abf6c
  04ab8cc  li 3, 5
  04ab8d0  lbz 4, 83(31)
  04ab8d4  cmpwi 4, 21
  04ab8d8  stb 3, 32(31)
  04ab8dc  bt 2, 0x4abf6c
  04ab8e0  lis 3, 75
  04ab8e4  lis 4, 114
  04ab8e8  addi 3, 3, -21296
  04ab8ec  li 5, 0
  04ab8f0  lfs 1, 96(3)
  04ab8f4  lfs 2, -3056(4)
  04ab8f8  ori 3, 31, 0
  04ab8fc  li 4, 21
  04ab900  fmuls 1, 2, 1
  04ab904  fctiwz 1, 1
  04ab908  stfd 1, 272(1)
  04ab90c  lwz 6, 276(1)
  04ab910  extsw 6, 6
  04ab914  bl 0xfddc0
  04ab918  nop
  04ab91c  b 0x4abf6c
  04ab920  lis 3, 75
  04ab924  lfs 1, 420(30)
  04ab928  lis 27, 114
  04ab92c  addi 28, 3, -21296
  04ab930  lis 4, 114
  04ab934  addic 3, 30, 244
  04ab938  lfs 2, 100(28)
  04ab93c  lfs 3, 12(28)
  04ab940  fmuls 1, 1, 2
  04ab944  lfs 4, -3052(27)
  04ab948  lfs 5, -3048(4)
  04ab94c  fmuls 2, 5, 3
  04ab950  fmuls 1, 1, 4
  04ab954  bl 0x109af0
  04ab958  nop
  04ab95c  lfs 1, 16(29)
  04ab960  lfs 2, 16(31)
  04ab964  lfs 3, 20(29)
  04ab968  lfs 4, 20(31)
  04ab96c  fsubs 1, 1, 2
  04ab970  fsubs 2, 3, 4
  04ab974  bl 0x5e8338
  04ab978  nop
  04ab97c  lfs 4, 36(28)
  04ab980  addic 5, 30, 400
  04ab984  lfs 2, 28(28)
  04ab988  ori 3, 31, 0
  04ab98c  lfs 5, 32(28)
  04ab990  lfs 6, -3052(27)
  04ab994  fmr 3, 5
  04ab998  fmuls 4, 6, 4
  04ab99c  bl 0xff2e8
  04ab9a0  nop
  04ab9a4  lfs 1, 16(29)
  04ab9a8  lfs 2, 16(31)
  04ab9ac  lfs 31, 72(31)
  04ab9b0  fsubs 1, 1, 2
  04ab9b4  lfs 3, 20(29)
  04ab9b8  lfs 2, 20(31)
  04ab9bc  fsubs 2, 3, 2
  04ab9c0  bl 0x5e8338
  04ab9c4  nop
  04ab9c8  lfs 2, 104(28)
  04ab9cc  bl 0x502578
  04ab9d0  nop
  04ab9d4  lfs 2, 48(28)
  04ab9d8  lfs 3, 44(28)
  04ab9dc  fsubs 5, 2, 1
  04ab9e0  lfs 4, 52(28)
  04ab9e4  fadds 3, 1, 3
  04ab9e8  fsubs 6, 4, 1
  04ab9ec  li 5, 0
  04ab9f0  ori 3, 31, 0
  04ab9f4  addic 4, 30, 208
  04ab9f8  addic 6, 1, 176
  04ab9fc  fsub 7, 1, 5
  04aba00  fsubs 2, 2, 3
  04aba04  fsubs 4, 4, 3
  04aba08  fsel 5, 7, 5, 1
  04aba0c  fsub 9, 3, 2
  04aba10  lfs 7, 56(28)
  04aba14  lfs 8, 60(28)
  04aba18  fsel 2, 9, 2, 3
  04aba1c  fsub 3, 6, 5
  04aba20  fsub 10, 4, 2
  04aba24  fsel 3, 3, 6, 5
  04aba28  lfs 5, 64(28)
  04aba2c  lfs 6, 68(28)
  04aba30  lfs 9, 72(28)
  04aba34  stw 5, 168(1)
  04aba38  addic 5, 1, 160
  04aba3c  fsel 2, 10, 4, 2
  04aba40  fmuls 4, 3, 3
  04aba44  fmuls 10, 2, 2
  04aba48  fmuls 11, 4, 3
  04aba4c  fmuls 12, 10, 2
  04aba50  fmuls 13, 4, 11
  04aba54  fmadds 3, 11, 7, 3
  04aba58  fmuls 11, 10, 12
  04aba5c  fmadds 2, 12, 7, 2
  04aba60  fmuls 7, 4, 13
  04aba64  fmadds 3, 13, 8, 3
  04aba68  fmuls 12, 10, 11
  04aba6c  fmadds 2, 11, 8, 2
  04aba70  fmuls 4, 4, 7
  04aba74  fmadds 3, 7, 5, 3
  04aba78  fmuls 7, 10, 12
  04aba7c  fmadds 2, 12, 5, 2
  04aba80  fmadds 3, 4, 6, 3
  04aba84  fmadds 2, 7, 6, 2
  04aba88  fmuls 3, 3, 9
  04aba8c  fmuls 2, 2, 9
  04aba90  stfs 3, 164(1)
  04aba94  lfs 3, 76(28)
  04aba98  stfs 1, 72(31)
  04aba9c  fmr 1, 3
  04abaa0  stfs 2, 160(1)
  04abaa4  bl 0x101058
  04abaa8  nop
  04abaac  addic 3, 30, 424
  04abab0  stfs 31, 72(31)
  04abab4  bl 0x4fff60
  04abab8  nop
  04ababc  cmpwi 3, 0
  04abac0  bf 2, 0x4abb0c
  04abac4  lfs 1, 20(31)
  04abac8  lfs 2, 20(29)
  04abacc  lfs 3, 16(31)
  04abad0  fsubs 1, 1, 2
  04abad4  lfs 2, 16(29)
  04abad8  fsubs 2, 3, 2
  04abadc  lfs 3, 24(31)
  04abae0  lfs 4, 24(29)
  04abae4  fsubs 3, 3, 4
  04abae8  fmuls 1, 1, 1
  04abaec  lis 3, 143
  04abaf0  fmadds 1, 2, 2, 1
  04abaf4  lfs 2, 16348(3)
  04abaf8  fmadds 1, 3, 3, 1
  04abafc  fsqrts 1, 1
  04abb00  fcmpu 0, 1, 2
  04abb04  cror 6, 0, 2
  04abb08  bt 6, 0x4abf6c
  04abb0c  lis 4, 75
  04abb10  li 3, 7
  04abb14  addi 4, 4, -21296
  04abb18  lis 5, 114
  04abb1c  stb 3, 32(31)
  04abb20  lis 3, 143
  04abb24  lfs 1, 108(4)
  04abb28  lfs 2, -3052(5)
  04abb2c  fmuls 1, 2, 1
  04abb30  stfs 1, 244(30)
  04abb34  lwz 3, 16356(3)
  04abb38  cmpwi 3, 0
  04abb3c  bt 2, 0x4abb94
  04abb40  lbz 3, 83(31)
  04abb44  cmpwi 3, 1
  04abb48  bt 2, 0x4abf6c
  04abb4c  lis 3, 75
  04abb50  lis 4, 114
  04abb54  addi 3, 3, -21296
  04abb58  lis 5, 143
  04abb5c  lfs 1, 112(3)
  04abb60  lfs 2, -3056(4)
  04abb64  lwz 5, 16360(5)
  04abb68  ori 3, 31, 0
  04abb6c  fmuls 1, 2, 1
  04abb70  li 4, 1
  04abb74  extsw 5, 5
  04abb78  fctiwz 1, 1
  04abb7c  stfd 1, 272(1)
  04abb80  lwz 6, 276(1)
  04abb84  extsw 6, 6
  04abb88  bl 0xfddc0
  04abb8c  nop
  04abb90  b 0x4abf6c
  04abb94  lbz 3, 83(31)
  04abb98  cmpwi 3, 1
  04abb9c  bt 2, 0x4abf6c
  04abba0  lis 3, 75
  04abba4  lis 4, 114
  04abba8  addi 3, 3, -21296
  04abbac  li 5, 10
  04abbb0  lfs 1, 16(3)
  04abbb4  lfs 2, -3056(4)
  04abbb8  ori 3, 31, 0
  04abbbc  li 4, 1
  04abbc0  fmuls 1, 2, 1
  04abbc4  fctiwz 1, 1
  04abbc8  stfd 1, 272(1)
  04abbcc  lwz 6, 276(1)
  04abbd0  extsw 6, 6
  04abbd4  bl 0xfddc0
  04abbd8  nop
  04abbdc  b 0x4abf6c
  04abbe0  lis 3, 75
  04abbe4  lis 29, 114
  04abbe8  lfs 1, 420(30)
  04abbec  addi 28, 3, -21296
  04abbf0  lis 4, 114
  04abbf4  addic 3, 30, 244
  04abbf8  lfs 2, -3052(29)
  04abbfc  lfs 3, 40(28)
  04abc00  lfs 4, -3048(4)
  04abc04  fmuls 1, 1, 2
  04abc08  fmuls 2, 4, 3
  04abc0c  bl 0x109af0
  04abc10  nop
  04abc14  lfs 1, 368(30)
  04abc18  lfs 2, 16(31)
  04abc1c  lfs 3, 372(30)
  04abc20  lfs 4, 20(31)
  04abc24  fsubs 1, 1, 2
  04abc28  fsubs 2, 3, 4
  04abc2c  bl 0x5e8338
  04abc30  nop
  04abc34  lfs 4, 36(28)
  04abc38  addic 5, 30, 400
  04abc3c  lfs 2, 28(28)
  04abc40  ori 3, 31, 0
  04abc44  lfs 5, 32(28)
  04abc48  lfs 6, -3052(29)
  04abc4c  fmr 3, 5
  04abc50  fmuls 4, 6, 4
  04abc54  bl 0xff2e8
  04abc58  nop
  04abc5c  lfs 1, 48(28)
  04abc60  lfs 2, 44(28)
  04abc64  lfs 3, 72(31)
  04abc68  lfs 4, 52(28)
  04abc6c  fadds 2, 3, 2
  04abc70  fsubs 5, 1, 3
  04abc74  fsubs 6, 4, 3
  04abc78  li 5, 0
  04abc7c  addic 4, 30, 208
  04abc80  ori 3, 31, 0
  04abc84  addic 6, 1, 208
  04abc88  fsubs 1, 1, 2
  04abc8c  fsub 7, 3, 5
  04abc90  fsubs 4, 4, 2
  04abc94  fsub 9, 2, 1
  04abc98  fsel 3, 7, 5, 3
  04abc9c  lfs 5, 56(28)
  04abca0  lfs 7, 60(28)
  04abca4  fsel 1, 9, 1, 2
  04abca8  fsub 2, 6, 3
  04abcac  fsub 9, 4, 1
  04abcb0  fsel 2, 2, 6, 3
  04abcb4  lfs 3, 64(28)
  04abcb8  lfs 6, 68(28)
  04abcbc  lfs 8, 72(28)
  04abcc0  stw 5, 200(1)
  04abcc4  addic 5, 1, 192
  04abcc8  fsel 1, 9, 4, 1
  04abccc  fmuls 4, 2, 2
  04abcd0  fmuls 9, 1, 1
  04abcd4  fmuls 10, 4, 2
  04abcd8  fmuls 11, 9, 1
  04abcdc  fmuls 12, 4, 10
  04abce0  fmadds 2, 10, 5, 2
  04abce4  fmadds 1, 11, 5, 1
  04abce8  fmuls 5, 4, 12
  04abcec  fmadds 2, 12, 7, 2
  04abcf0  fmuls 10, 9, 11
  04abcf4  fmuls 4, 4, 5
  04abcf8  fmadds 2, 5, 3, 2
  04abcfc  fmuls 11, 9, 10
  04abd00  fmadds 1, 10, 7, 1
  04abd04  fmadds 2, 4, 6, 2
  04abd08  fmuls 5, 9, 11
  04abd0c  fmadds 1, 11, 3, 1
  04abd10  fmuls 2, 2, 8
  04abd14  fmadds 1, 5, 6, 1
  04abd18  fmuls 1, 1, 8
  04abd1c  stfs 2, 196(1)
  04abd20  lfs 2, 76(28)
  04abd24  fmr 31, 2
  04abd28  stfs 1, 192(1)
  04abd2c  fmr 1, 31
  04abd30  bl 0x101058
  04abd34  nop
  04abd38  lfs 1, 20(31)
  04abd3c  lfs 2, 372(30)
  04abd40  lfs 3, 16(31)
  04abd44  fsubs 1, 1, 2
  04abd48  lfs 2, 368(30)
  04abd4c  fsubs 2, 3, 2
  04abd50  lfs 3, 24(31)
  04abd54  lfs 4, 376(30)
  04abd58  fsubs 3, 3, 4
  04abd5c  fmuls 1, 1, 1
  04abd60  fmadds 1, 2, 2, 1
  04abd64  fmadds 1, 3, 3, 1
  04abd68  fsqrts 1, 1
  04abd6c  fcmpu 0, 1, 31
  04abd70  cror 6, 1, 2
  04abd74  bt 6, 0x4abdcc
  04abd78  li 3, 3
  04abd7c  lbz 4, 83(31)
  04abd80  cmpwi 4, 19
  04abd84  stb 3, 32(31)
  04abd88  bt 2, 0x4abf6c
  04abd8c  lis 3, 75
  04abd90  lis 4, 114
  04abd94  addi 3, 3, -21296
  04abd98  li 5, 0
  04abd9c  lfs 1, 96(3)
  04abda0  lfs 2, -3056(4)
  04abda4  ori 3, 31, 0
  04abda8  fmuls 1, 2, 1
  04abdac  li 4, 19
  04abdb0  fctiwz 1, 1
  04abdb4  stfd 1, 272(1)
  04abdb8  lwz 6, 276(1)
  04abdbc  extsw 6, 6
  04abdc0  bl 0xfddc0
  04abdc4  nop
  04abdc8  b 0x4abf6c
  04abdcc  lwz 3, 356(30)
  04abdd0  cmpwi 3, 2
  04abdd4  bt 2, 0x4abf6c
  04abdd8  li 3, 5
  04abddc  lbz 4, 83(31)
  04abde0  cmpwi 4, 21
  04abde4  stb 3, 32(31)
  04abde8  bt 2, 0x4abf6c
  04abdec  lis 3, 75
  04abdf0  lis 4, 114
  04abdf4  addi 3, 3, -21296
  04abdf8  li 5, 0
  04abdfc  lfs 1, 96(3)
  04abe00  lfs 2, -3056(4)
  04abe04  ori 3, 31, 0
  04abe08  fmuls 1, 2, 1
  04abe0c  li 4, 21
  04abe10  fctiwz 1, 1
  04abe14  stfd 1, 272(1)
  04abe18  lwz 6, 276(1)
  04abe1c  extsw 6, 6
  04abe20  bl 0xfddc0
  04abe24  nop
  04abe28  b 0x4abf6c
  04abe2c  addic 4, 30, 112
  04abe30  ori 3, 31, 0
  04abe34  bl 0x10b030
  04abe38  nop
  04abe3c  li 4, 65
  04abe40  and 3, 3, 4
  04abe44  cmpwi 3, 0
  04abe48  bt 2, 0x4abedc
  04abe4c  li 3, 9
  04abe50  lbz 4, 83(31)
  04abe54  cmpwi 4, 21
  04abe58  stb 3, 32(31)
  04abe5c  bt 2, 0x4abe9c
  04abe60  lis 3, 75
  04abe64  lis 4, 114
  04abe68  addi 3, 3, -21296
  04abe6c  li 5, 0
  04abe70  lfs 1, 96(3)
  04abe74  lfs 2, -3056(4)
  04abe78  ori 3, 31, 0
  04abe7c  li 4, 21
  04abe80  fmuls 1, 2, 1
  04abe84  fctiwz 1, 1
  04abe88  stfd 1, 272(1)
  04abe8c  lwz 6, 276(1)
  04abe90  extsw 6, 6
  04abe94  bl 0xfddc0
  04abe98  nop
  04abe9c  lis 3, 75
  04abea0  vspltisw 2, -1
  04abea4  li 5, 116
  04abea8  addi 3, 3, -21296
  04abeac  lis 4, 114
  04abeb0  li 6, -3056
  04abeb4  vslw 2, 2, 2
  04abeb8  <unknown>
  04abebc  li 3, 424
  04abec0  vspltw 3, 3, 0
  04abec4  <unknown>
  04abec8  vmaddfp 2, 4, 3, 2
  04abecc  vctsxs 2, 2, 0
  04abed0  vspltw 2, 2, 0
  04abed4  stvewx 2, 3, 30
  04abed8  b 0x4abf6c
  04abedc  lis 3, 75
  04abee0  lfs 1, 376(30)
  04abee4  addi 3, 3, -21296
  04abee8  lfs 2, 120(3)
  04abeec  lfs 3, 24(31)
  04abef0  fsubs 1, 1, 2
  04abef4  fcmpu 0, 3, 1
  04abef8  cror 6, 1, 2
  04abefc  bt 6, 0x4abf6c
  04abf00  ori 3, 31, 0
  04abf04  bl 0xefb38
  04abf08  nop
  04abf0c  b 0x4abf6c
  04abf10  ori 3, 31, 0
  04abf14  addic 4, 30, 112
  04abf18  bl 0x10b030
  04abf1c  nop
  04abf20  rlwinm 3, 3, 0, 25, 25
  04abf24  cmpwi 3, 0
  04abf28  bt 2, 0x4abf3c
  04abf2c  ori 3, 31, 0
  04abf30  bl 0xefb38
  04abf34  nop
  04abf38  b 0x4abf6c
  04abf3c  lwz 4, 24(31)
  04abf40  lis 3, 16384
  04abf44  srawi 5, 4, 31
  04abf48  srwi 6, 5, 1
  04abf4c  xor 4, 6, 4
  04abf50  subc 4, 4, 5
  04abf54  cmpw 4, 3
  04abf58  bf 0, 0x4abf6c
  04abf5c  ori 3, 31, 0
  04abf60  bl 0xefb38
  04abf64  nop
  04abf68  b 0x4abf6c
  04abf6c  ld 0, 416(1)
  04abf70  mtlr 0
  04abf74  lfd 24, 336(1)
  04abf78  lfd 25, 344(1)
  04abf7c  lfd 26, 352(1)
  04abf80  lfd 27, 360(1)
  04abf84  lfd 28, 368(1)
  04abf88  lfd 29, 376(1)
  04abf8c  lfd 30, 384(1)
  04abf90  lfd 31, 392(1)
  04abf94  ld 27, 296(1)
  04abf98  ld 28, 304(1)
  04abf9c  ld 29, 312(1)
  04abfa0  ld 30, 320(1)
  04abfa4  ld 31, 328(1)
  04abfa8  addi 1, 1, 400
  04abfac  blr
