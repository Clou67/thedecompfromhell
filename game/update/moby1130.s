# game/update/moby1130.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1130_001d7f20:   # 0x1d7f20, 0x14 bytes
  01d7f20  lis 3, 118
  01d7f24  lis 4, 1
  01d7f28  addic 3, 3, 18472
  01d7f2c  stw 4, 72(3)
  01d7f30  blr

M1130_001d7f38:   # 0x1d7f38, 0xf4 bytes
  01d7f38  stdu 1, -160(1)
  01d7f3c  mflr 0
  01d7f40  std 0, 176(1)
  01d7f44  std 31, 152(1)
  01d7f48  lis 4, 161
  01d7f4c  ori 31, 3, 0
  01d7f50  lwz 3, 1800(4)
  01d7f54  std 30, 144(1)
  01d7f58  std 29, 136(1)
  01d7f5c  std 28, 128(1)
  01d7f60  std 27, 120(1)
  01d7f64  cmpwi 3, 2
  01d7f68  bf 2, 0x1d8008
  01d7f6c  lis 3, 151
  01d7f70  lbz 3, -16268(3)
  01d7f74  cmpwi 3, 0
  01d7f78  bt 2, 0x1d8008
  01d7f7c  lis 28, 150
  01d7f80  li 27, 0
  01d7f84  addic 28, 28, -12976
  01d7f88  lhz 3, 68(28)
  01d7f8c  extsh 4, 3
  01d7f90  cmpwi 4, 0
  01d7f94  bf 1, 0x1d8008
  01d7f98  lis 29, 162
  01d7f9c  ori 30, 28, 0
  01d7fa0  addic 29, 29, -16512
  01d7fa4  lwz 4, 376(30)
  01d7fa8  lhz 5, 166(31)
  01d7fac  extsh 5, 5
  01d7fb0  lhz 6, 166(4)
  01d7fb4  extsh 6, 6
  01d7fb8  cmpw 6, 5
  01d7fbc  bf 2, 0x1d7ff4
  01d7fc0  lbz 5, 1(29)
  01d7fc4  cmpwi 5, 0
  01d7fc8  bf 2, 0x1d7ff4
  01d7fcc  ori 3, 4, 0
  01d7fd0  li 4, 0
  01d7fd4  ori 5, 29, 0
  01d7fd8  bl 0xf0ea8
  01d7fdc  nop
  01d7fe0  lis 4, 16432
  01d7fe4  lhz 3, 68(28)
  01d7fe8  stw 4, 32(29)
  01d7fec  stw 4, 36(29)
  01d7ff0  stw 4, 40(29)
  01d7ff4  extsh 4, 3
  01d7ff8  addic 27, 27, 1
  01d7ffc  addic 30, 30, 4
  01d8000  cmpw 27, 4
  01d8004  bt 0, 0x1d7fa4
  01d8008  ld 0, 176(1)
  01d800c  mtlr 0
  01d8010  ld 27, 120(1)
  01d8014  ld 28, 128(1)
  01d8018  ld 29, 136(1)
  01d801c  ld 30, 144(1)
  01d8020  ld 31, 152(1)
  01d8024  addi 1, 1, 160
  01d8028  blr

UpdateMoby_1130:   # 0x1d8090, 0xda4 bytes
  01d8090  stdu 1, -352(1)
  01d8094  mflr 0
  01d8098  std 0, 368(1)
  01d809c  stfd 27, 312(1)
  01d80a0  stfd 28, 320(1)
  01d80a4  stfd 29, 328(1)
  01d80a8  stfd 30, 336(1)
  01d80ac  stfd 31, 344(1)
  01d80b0  std 31, 304(1)
  01d80b4  lis 4, 161
  01d80b8  ori 31, 3, 0
  01d80bc  std 30, 296(1)
  01d80c0  lwz 4, 1800(4)
  01d80c4  lwz 30, 120(3)
  01d80c8  std 29, 288(1)
  01d80cc  std 28, 280(1)
  01d80d0  std 27, 272(1)
  01d80d4  std 26, 264(1)
  01d80d8  cmpwi 4, 2
  01d80dc  bf 2, 0x1d8178
  01d80e0  lis 3, 151
  01d80e4  lbz 3, -16268(3)
  01d80e8  cmpwi 3, 0
  01d80ec  bt 2, 0x1d8178
  01d80f0  lis 28, 150
  01d80f4  li 29, 0
  01d80f8  addic 28, 28, -12976
  01d80fc  lhz 4, 68(28)
  01d8100  extsh 3, 4
  01d8104  cmpwi 3, 0
  01d8108  bf 1, 0x1d8178
  01d810c  lis 27, 162
  01d8110  ori 26, 28, 0
  01d8114  addic 27, 27, -16512
  01d8118  lwz 3, 376(26)
  01d811c  lhz 5, 166(31)
  01d8120  extsh 5, 5
  01d8124  lhz 6, 166(3)
  01d8128  extsh 6, 6
  01d812c  cmpw 6, 5
  01d8130  bf 2, 0x1d8164
  01d8134  lbz 5, 1(27)
  01d8138  cmpwi 5, 0
  01d813c  bf 2, 0x1d8164
  01d8140  li 4, 0
  01d8144  ori 5, 27, 0
  01d8148  bl 0xf0ea8
  01d814c  nop
  01d8150  lis 3, 16432
  01d8154  lhz 4, 68(28)
  01d8158  stw 3, 32(27)
  01d815c  stw 3, 36(27)
  01d8160  stw 3, 40(27)
  01d8164  extsh 3, 4
  01d8168  addic 29, 29, 1
  01d816c  addic 26, 26, 4
  01d8170  cmpw 29, 3
  01d8174  bt 0, 0x1d8118
  01d8178  lbz 3, 49(31)
  01d817c  cmpwi 3, 0
  01d8180  bt 2, 0x1d8214
  01d8184  lis 3, 149
  01d8188  lfs 1, 20(31)
  01d818c  lfs 2, 16(31)
  01d8190  addic 3, 3, 5056
  01d8194  lfs 3, 324(3)
  01d8198  lfs 4, 320(3)
  01d819c  fsubs 1, 1, 3
  01d81a0  fsubs 2, 2, 4
  01d81a4  lfs 3, 24(31)
  01d81a8  lfs 4, 328(3)
  01d81ac  fsubs 3, 3, 4
  01d81b0  lis 3, 118
  01d81b4  fmuls 1, 1, 1
  01d81b8  lwz 3, 18580(3)
  01d81bc  extsw 3, 3
  01d81c0  std 3, 248(1)
  01d81c4  fmadds 1, 2, 2, 1
  01d81c8  fmadds 1, 3, 3, 1
  01d81cc  lfd 2, 248(1)
  01d81d0  fsqrts 1, 1
  01d81d4  fcfid 2, 2
  01d81d8  frsp 2, 2
  01d81dc  fcmpu 0, 1, 2
  01d81e0  cror 6, 1, 2
  01d81e4  bt 6, 0x1d8214
  01d81e8  ori 3, 31, 0
  01d81ec  bl 0x106360
  01d81f0  nop
  01d81f4  lis 3, 118
  01d81f8  lwz 3, 18580(3)
  01d81fc  sldi 4, 3, 4
  01d8200  subc 4, 4, 3
  01d8204  subc 4, 4, 3
  01d8208  subc 3, 4, 3
  01d820c  srawi 3, 3, 4
  01d8210  stb 3, 127(31)
  01d8214  lbz 3, 32(31)
  01d8218  cmpwi 3, 1
  01d821c  cmpwi 1, 3, 3
  01d8220  cmpwi 6, 3, 2
  01d8224  cmpwi 7, 3, 0
  01d8228  bt 1, 0x1d823c
  01d822c  cmpwi 3, -1
  01d8230  bf 1, 0x1d8574
  01d8234  bf 29, 0x1d8248
  01d8238  b 0x1d83a0
  01d823c  bf 25, 0x1d8438
  01d8240  bf 5, 0x1d84ec
  01d8244  b 0x1d8574
  01d8248  li 3, 255
  01d824c  lbz 4, 83(31)
  01d8250  cmpwi 4, 1
  01d8254  stb 3, 48(31)
  01d8258  bt 2, 0x1d8298
  01d825c  lis 3, 30
  01d8260  lis 4, 114
  01d8264  addi 3, 3, -32724
  01d8268  li 5, 0
  01d826c  lfs 1, 0(3)
  01d8270  lfs 2, -3056(4)
  01d8274  ori 3, 31, 0
  01d8278  fmuls 1, 2, 1
  01d827c  li 4, 1
  01d8280  fctiwz 1, 1
  01d8284  stfd 1, 248(1)
  01d8288  lwz 6, 252(1)
  01d828c  extsw 6, 6
  01d8290  bl 0xfddc0
  01d8294  nop
  01d8298  lis 3, 151
  01d829c  addic 3, 3, -13812
  01d82a0  lbz 3, 10(3)
  01d82a4  cmpwi 3, 0
  01d82a8  bt 2, 0x1d82ec
  01d82ac  lis 3, 151
  01d82b0  lbz 5, 176(31)
  01d82b4  lis 4, 161
  01d82b8  addic 4, 4, -13692
  01d82bc  lwz 3, -25488(3)
  01d82c0  addc 4, 5, 4
  01d82c4  slwi 3, 3, 4
  01d82c8  clrldi 4, 4, 32
  01d82cc  extsw 3, 3
  01d82d0  lbzx 3, 4, 3
  01d82d4  cmpwi 3, 255
  01d82d8  bf 2, 0x1d82ec
  01d82dc  ori 3, 31, 0
  01d82e0  bl 0xefb38
  01d82e4  nop
  01d82e8  b 0x1d8df8
  01d82ec  lis 3, 101
  01d82f0  lis 5, 151
  01d82f4  lis 4, 16448
  01d82f8  addic 3, 3, 18204
  01d82fc  addic 5, 5, -16400
  01d8300  stw 4, 44(30)
  01d8304  stw 3, 64(30)
  01d8308  lbz 3, 44(5)
  01d830c  cmpwi 3, 0
  01d8310  bf 2, 0x1d8320
  01d8314  li 3, 1
  01d8318  stb 3, 32(31)
  01d831c  b 0x1d838c
  01d8320  lis 3, 165
  01d8324  lwz 4, 384(30)
  01d8328  slwi 5, 4, 7
  01d832c  slwi 4, 4, 7
  01d8330  lwz 3, 7128(3)
  01d8334  addc 5, 3, 5
  01d8338  addc 3, 3, 4
  01d833c  clrldi 5, 5, 32
  01d8340  clrldi 3, 3, 32
  01d8344  li 4, 2
  01d8348  lfs 1, 48(5)
  01d834c  stfs 1, 16(31)
  01d8350  lfs 1, 52(5)
  01d8354  stfs 1, 20(31)
  01d8358  lfs 1, 56(5)
  01d835c  stfs 1, 24(31)
  01d8360  lfs 1, 60(5)
  01d8364  stfs 1, 28(31)
  01d8368  lfs 1, 112(3)
  01d836c  stfs 1, 64(31)
  01d8370  lfs 1, 116(3)
  01d8374  stfs 1, 68(31)
  01d8378  lfs 1, 120(3)
  01d837c  stfs 1, 72(31)
  01d8380  lfs 1, 124(3)
  01d8384  stb 4, 32(31)
  01d8388  stfs 1, 76(31)
  01d838c  addic 4, 30, 32
  01d8390  ori 3, 31, 0
  01d8394  bl 0x4d3720
  01d8398  nop
  01d839c  b 0x1d8574
  01d83a0  ori 3, 31, 0
  01d83a4  addic 4, 30, 32
  01d83a8  bl 0x4d3870
  01d83ac  nop
  01d83b0  cmpwi 3, 0
  01d83b4  bt 2, 0x1d8574
  01d83b8  lis 3, 165
  01d83bc  lwz 4, 384(30)
  01d83c0  li 6, 1
  01d83c4  slwi 5, 4, 7
  01d83c8  slwi 4, 4, 7
  01d83cc  lwz 3, 7128(3)
  01d83d0  addc 5, 3, 5
  01d83d4  addc 3, 3, 4
  01d83d8  clrldi 5, 5, 32
  01d83dc  clrldi 3, 3, 32
  01d83e0  li 4, 2
  01d83e4  lfs 1, 48(5)
  01d83e8  stfs 1, 16(31)
  01d83ec  lfs 1, 52(5)
  01d83f0  stfs 1, 20(31)
  01d83f4  lfs 1, 56(5)
  01d83f8  stfs 1, 24(31)
  01d83fc  lfs 1, 60(5)
  01d8400  lis 5, 151
  01d8404  stfs 1, 28(31)
  01d8408  lfs 1, 112(3)
  01d840c  addic 5, 5, -16400
  01d8410  stfs 1, 64(31)
  01d8414  lfs 1, 116(3)
  01d8418  stfs 1, 68(31)
  01d841c  lfs 1, 120(3)
  01d8420  stfs 1, 72(31)
  01d8424  lfs 1, 124(3)
  01d8428  stb 4, 32(31)
  01d842c  stfs 1, 76(31)
  01d8430  stb 6, 44(5)
  01d8434  b 0x1d8574
  01d8438  lbz 3, 112(31)
  01d843c  rlwinm 3, 3, 0, 30, 30
  01d8440  cmpwi 3, 0
  01d8444  bt 2, 0x1d84b0
  01d8448  li 3, 2
  01d844c  lbz 29, 83(31)
  01d8450  bl 0xfc620
  01d8454  nop
  01d8458  addic 3, 3, 1
  01d845c  cmpw 29, 3
  01d8460  bt 2, 0x1d84b0
  01d8464  li 3, 2
  01d8468  bl 0xfc620
  01d846c  nop
  01d8470  lis 4, 30
  01d8474  lis 5, 114
  01d8478  addi 4, 4, -32724
  01d847c  lfs 1, 4(4)
  01d8480  lfs 2, -3056(5)
  01d8484  addic 4, 3, 1
  01d8488  ori 3, 31, 0
  01d848c  fmuls 1, 2, 1
  01d8490  extsw 4, 4
  01d8494  li 5, 0
  01d8498  fctiwz 1, 1
  01d849c  stfd 1, 248(1)
  01d84a0  lwz 6, 252(1)
  01d84a4  extsw 6, 6
  01d84a8  bl 0xfddc0
  01d84ac  nop
  01d84b0  ori 3, 31, 0
  01d84b4  addic 4, 30, 32
  01d84b8  bl 0x4d3870
  01d84bc  nop
  01d84c0  cmpwi 3, 0
  01d84c4  bt 2, 0x1d8574
  01d84c8  lis 3, 30
  01d84cc  li 4, 3
  01d84d0  addi 5, 3, -32724
  01d84d4  ori 3, 31, 0
  01d84d8  stb 4, 32(31)
  01d84dc  lfs 1, 8(5)
  01d84e0  bl 0x119488
  01d84e4  nop
  01d84e8  b 0x1d8574
  01d84ec  lis 3, 161
  01d84f0  lwz 3, 1800(3)
  01d84f4  cmpwi 3, 2
  01d84f8  bt 2, 0x1d8574
  01d84fc  li 3, 1
  01d8500  lhz 4, 36(30)
  01d8504  cmpwi 4, 3
  01d8508  stb 3, 40(30)
  01d850c  bf 2, 0x1d856c
  01d8510  li 3, 10
  01d8514  bl 0x112c20
  01d8518  nop
  01d851c  li 3, 10
  01d8520  bl 0x112af0
  01d8524  nop
  01d8528  lbz 3, 176(31)
  01d852c  bl 0xf1e50
  01d8530  nop
  01d8534  lis 3, 151
  01d8538  addic 4, 3, -25376
  01d853c  addic 3, 4, 128
  01d8540  addic 4, 4, 144
  01d8544  bl 0x151e70
  01d8548  nop
  01d854c  li 3, 0
  01d8550  li 4, -1
  01d8554  bl 0xe8aa4
  01d8558  nop
  01d855c  ori 3, 31, 0
  01d8560  bl 0xefb38
  01d8564  nop
  01d8568  b 0x1d8df8
  01d856c  li 3, 2
  01d8570  stb 3, 32(31)
  01d8574  lis 3, 30
  01d8578  lbz 4, 83(31)
  01d857c  addi 3, 3, -32724
  01d8580  cmpwi 4, 1
  01d8584  lfs 31, 12(3)
  01d8588  bf 2, 0x1d8d90
  01d858c  lis 29, 151
  01d8590  lfs 2, 20(31)
  01d8594  addic 29, 29, -25376
  01d8598  lfs 1, 16(31)
  01d859c  lis 3, 30
  01d85a0  lfs 3, 132(29)
  01d85a4  lfs 4, 128(29)
  01d85a8  fsubs 3, 2, 3
  01d85ac  fsubs 4, 1, 4
  01d85b0  addi 3, 3, -32724
  01d85b4  fmuls 3, 3, 3
  01d85b8  fmadds 3, 4, 4, 3
  01d85bc  lfs 4, 16(3)
  01d85c0  fsqrts 3, 3
  01d85c4  fcmpu 0, 3, 4
  01d85c8  cror 6, 1, 2
  01d85cc  bt 6, 0x1d883c
  01d85d0  lfs 3, 208(29)
  01d85d4  lis 3, 30
  01d85d8  lfs 4, 212(29)
  01d85dc  fsubs 1, 3, 1
  01d85e0  fsubs 2, 4, 2
  01d85e4  addi 3, 3, -32724
  01d85e8  lis 4, 115
  01d85ec  addic 4, 4, 22784
  01d85f0  fabs 5, 1
  01d85f4  fabs 6, 2
  01d85f8  stfs 1, 136(1)
  01d85fc  stfs 2, 140(1)
  01d8600  lfs 3, 72(31)
  01d8604  fsubs 1, 5, 6
  01d8608  stfs 1, 144(1)
  01d860c  lwz 5, 136(1)
  01d8610  lfs 4, 20(3)
  01d8614  lfs 1, 136(1)
  01d8618  lwz 3, 140(1)
  01d861c  lfs 2, 140(1)
  01d8620  lwz 6, 144(1)
  01d8624  rlwinm 3, 3, 3, 29, 29
  01d8628  fabs 7, 2
  01d862c  lfs 2, 144(1)
  01d8630  fabs 1, 1
  01d8634  rlwimi 3, 6, 2, 30, 30
  01d8638  fsub 8, 2, 4
  01d863c  rlwimi 3, 5, 4, 28, 28
  01d8640  fsub 9, 2, 4
  01d8644  ori 5, 4, 0
  01d8648  rlwimi 5, 3, 2, 26, 28
  01d864c  slwi 3, 3, 2
  01d8650  clrldi 5, 5, 32
  01d8654  fsel 6, 8, 1, 6
  01d8658  lfsx 1, 4, 3
  01d865c  lfs 2, 4(5)
  01d8660  fsel 5, 9, 7, 5
  01d8664  fcmpu 0, 6, 4
  01d8668  bt 1, 0x1d8670
  01d866c  b 0x1d8790
  01d8670  fsubs 7, 5, 6
  01d8674  fadds 5, 5, 6
  01d8678  addic 3, 1, 16
  01d867c  li 6, 2
  01d8680  addic 4, 3, 196
  01d8684  addic 5, 3, 212
  01d8688  mtctr 6
  01d868c  fdivs 5, 7, 5
  01d8690  fmuls 6, 5, 5
  01d8694  stfs 5, 224(1)
  01d8698  stfs 5, 216(1)
  01d869c  stfs 5, 220(1)
  01d86a0  stfs 5, 212(1)
  01d86a4  lfs 8, 224(1)
  01d86a8  lfs 9, 216(1)
  01d86ac  lfs 10, 220(1)
  01d86b0  fmuls 7, 6, 6
  01d86b4  fmuls 9, 9, 6
  01d86b8  fmuls 8, 8, 7
  01d86bc  fmuls 5, 7, 7
  01d86c0  fmuls 7, 10, 7
  01d86c4  stfs 9, 216(1)
  01d86c8  fmuls 6, 8, 6
  01d86cc  stfs 7, 220(1)
  01d86d0  stfs 6, 224(1)
  01d86d4  lfs 6, 196(3)
  01d86d8  fmuls 6, 6, 5
  01d86dc  stfs 6, 212(3)
  01d86e0  lfs 6, 4(4)
  01d86e4  addic 3, 3, 8
  01d86e8  addic 4, 4, 8
  01d86ec  fmuls 6, 6, 5
  01d86f0  stfs 6, 4(5)
  01d86f4  addic 5, 5, 8
  01d86f8  bdnz 0x1d86d4
  01d86fc  li 5, 4
  01d8700  ori 3, 1, 0
  01d8704  mtctr 5
  01d8708  lis 4, 115
  01d870c  addic 5, 3, 212
  01d8710  addic 4, 4, 22752
  01d8714  ori 7, 5, 0
  01d8718  lfs 5, 212(3)
  01d871c  lfs 6, 0(4)
  01d8720  fmuls 5, 5, 6
  01d8724  lfs 6, 4(4)
  01d8728  addic 4, 4, 8
  01d872c  stfs 5, 212(3)
  01d8730  lfs 5, 4(5)
  01d8734  addic 3, 3, 8
  01d8738  fmuls 5, 5, 6
  01d873c  stfs 5, 4(5)
  01d8740  addic 5, 5, 8
  01d8744  bdnz 0x1d8718
  01d8748  ori 3, 1, 0
  01d874c  mtctr 6
  01d8750  lfs 5, 212(3)
  01d8754  fadds 4, 4, 5
  01d8758  lfs 5, 4(7)
  01d875c  addic 3, 3, 16
  01d8760  lfs 6, 8(7)
  01d8764  lfs 7, 12(7)
  01d8768  addic 7, 7, 16
  01d876c  fadds 4, 4, 5
  01d8770  fadds 4, 4, 6
  01d8774  fadds 4, 4, 7
  01d8778  bdnz 0x1d8750
  01d877c  lis 3, 30
  01d8780  addi 3, 3, -32724
  01d8784  lfs 5, 24(3)
  01d8788  fadds 4, 4, 5
  01d878c  fmadds 4, 4, 1, 2
  01d8790  fmr 1, 3
  01d8794  fmr 2, 4
  01d8798  bl 0x5026a0
  01d879c  nop
  01d87a0  lis 3, 30
  01d87a4  addi 3, 3, -32724
  01d87a8  lfs 2, 28(3)
  01d87ac  fcmpu 0, 1, 2
  01d87b0  cror 6, 1, 2
  01d87b4  bt 6, 0x1d883c
  01d87b8  lfs 1, 260(29)
  01d87bc  lfs 2, 256(29)
  01d87c0  fmuls 1, 1, 1
  01d87c4  lfs 3, 264(29)
  01d87c8  lis 3, 30
  01d87cc  addi 3, 3, -32724
  01d87d0  fmadds 1, 2, 2, 1
  01d87d4  lfs 2, 32(3)
  01d87d8  fmadds 1, 3, 3, 1
  01d87dc  fsqrts 1, 1
  01d87e0  fcmpu 0, 1, 2
  01d87e4  cror 6, 0, 2
  01d87e8  bt 6, 0x1d882c
  01d87ec  lis 3, 30
  01d87f0  li 4, 36
  01d87f4  vspltisw 2, -1
  01d87f8  addi 3, 3, -32724
  01d87fc  lis 5, 114
  01d8800  li 6, -3056
  01d8804  vslw 2, 2, 2
  01d8808  lvlx 3, 4, 3
  01d880c  li 3, 392
  01d8810  vspltw 3, 3, 0
  01d8814  lvlx 4, 6, 5
  01d8818  vmaddfp 2, 4, 3, 2
  01d881c  vctsxs 2, 2, 0
  01d8820  vspltw 2, 2, 0
  01d8824  stvewx 2, 3, 30
  01d8828  b 0x1d8870
  01d882c  addic 3, 30, 392
  01d8830  bl 0x4fff60
  01d8834  nop
  01d8838  b 0x1d8870
  01d883c  lwz 3, 392(30)
  01d8840  cmpwi 3, 0
  01d8844  bt 2, 0x1d8870
  01d8848  li 3, 0
  01d884c  stw 3, 392(30)
  01d8850  lfs 1, 208(29)
  01d8854  stfs 1, 352(30)
  01d8858  lfs 1, 212(29)
  01d885c  stfs 1, 356(30)
  01d8860  lfs 1, 216(29)
  01d8864  stfs 1, 360(30)
  01d8868  lfs 1, 220(29)
  01d886c  stfs 1, 364(30)
  01d8870  addic 3, 30, 396
  01d8874  bl 0x4fff60
  01d8878  nop
  01d887c  cmpwi 3, 0
  01d8880  bt 2, 0x1d8938
  01d8884  lis 3, 30
  01d8888  addi 28, 3, -32724
  01d888c  lfs 1, 40(28)
  01d8890  lfs 2, 44(28)
  01d8894  bl 0xfcbe8
  01d8898  nop
  01d889c  lis 3, 114
  01d88a0  lfs 2, -3056(3)
  01d88a4  fmuls 1, 1, 2
  01d88a8  bl 0x502758
  01d88ac  nop
  01d88b0  stw 3, 396(30)
  01d88b4  lfs 1, 48(28)
  01d88b8  lfs 30, 72(31)
  01d88bc  lfs 2, 52(28)
  01d88c0  bl 0xfcbe8
  01d88c4  nop
  01d88c8  lfs 29, 56(28)
  01d88cc  fmuls 2, 1, 29
  01d88d0  fmr 1, 30
  01d88d4  bl 0x502578
  01d88d8  nop
  01d88dc  fmr 30, 1
  01d88e0  lfs 1, 20(28)
  01d88e4  lfs 2, 60(28)
  01d88e8  bl 0xfcbe8
  01d88ec  nop
  01d88f0  fmuls 3, 1, 29
  01d88f4  addic 3, 30, 352
  01d88f8  lfs 1, 64(28)
  01d88fc  fmr 2, 30
  01d8900  bl 0xfe610
  01d8904  nop
  01d8908  lfs 1, 352(30)
  01d890c  lfs 2, 16(31)
  01d8910  fadds 1, 1, 2
  01d8914  lfs 2, 356(30)
  01d8918  lfs 3, 360(30)
  01d891c  stfs 1, 352(30)
  01d8920  lfs 1, 20(31)
  01d8924  fadds 1, 2, 1
  01d8928  stfs 1, 356(30)
  01d892c  lfs 1, 24(31)
  01d8930  fadds 1, 3, 1
  01d8934  stfs 1, 360(30)
  01d8938  lwz 3, 392(30)
  01d893c  cmpwi 3, 0
  01d8940  bt 2, 0x1d8960
  01d8944  lis 3, 30
  01d8948  lfs 30, 208(29)
  01d894c  addi 3, 3, -32724
  01d8950  lfs 29, 212(29)
  01d8954  lfs 28, 216(29)
  01d8958  lfs 31, 68(3)
  01d895c  b 0x1d896c
  01d8960  lfs 30, 352(30)
  01d8964  lfs 29, 356(30)
  01d8968  lfs 28, 360(30)
  01d896c  lfs 1, 16(31)
  01d8970  lfs 2, 20(31)
  01d8974  lis 3, 30
  01d8978  fsubs 30, 30, 1
  01d897c  fsubs 29, 29, 2
  01d8980  addi 3, 3, -32724
  01d8984  lis 29, 115
  01d8988  addic 29, 29, 22784
  01d898c  lfs 1, 72(3)
  01d8990  fabs 3, 30
  01d8994  fabs 4, 29
  01d8998  stfs 30, 124(1)
  01d899c  stfs 29, 128(1)
  01d89a0  lfs 5, 24(31)
  01d89a4  fadds 1, 5, 1
  01d89a8  fsubs 2, 3, 4
  01d89ac  fsubs 28, 28, 1
  01d89b0  stfs 2, 132(1)
  01d89b4  lwz 4, 124(1)
  01d89b8  lfs 27, 20(3)
  01d89bc  lfs 2, 124(1)
  01d89c0  lwz 3, 128(1)
  01d89c4  lfs 5, 128(1)
  01d89c8  lwz 5, 132(1)
  01d89cc  rlwinm 3, 3, 3, 29, 29
  01d89d0  lfs 1, 132(1)
  01d89d4  fabs 2, 2
  01d89d8  rlwimi 3, 5, 2, 30, 30
  01d89dc  fabs 5, 5
  01d89e0  fsub 6, 1, 27
  01d89e4  fsub 7, 1, 27
  01d89e8  rlwimi 3, 4, 4, 28, 28
  01d89ec  ori 4, 29, 0
  01d89f0  rlwimi 4, 3, 2, 26, 28
  01d89f4  slwi 3, 3, 2
  01d89f8  clrldi 4, 4, 32
  01d89fc  fsel 4, 6, 2, 4
  01d8a00  lfsx 1, 29, 3
  01d8a04  fsel 3, 7, 5, 3
  01d8a08  lfs 2, 4(4)
  01d8a0c  fcmpu 0, 4, 27
  01d8a10  bt 1, 0x1d8a1c
  01d8a14  fmr 1, 27
  01d8a18  b 0x1d8b40
  01d8a1c  fsubs 5, 3, 4
  01d8a20  fadds 3, 3, 4
  01d8a24  addic 3, 1, 16
  01d8a28  li 6, 2
  01d8a2c  addic 5, 3, 180
  01d8a30  addic 4, 3, 164
  01d8a34  mtctr 6
  01d8a38  fdivs 3, 5, 3
  01d8a3c  fmuls 4, 3, 3
  01d8a40  stfs 3, 192(1)
  01d8a44  stfs 3, 184(1)
  01d8a48  stfs 3, 188(1)
  01d8a4c  stfs 3, 180(1)
  01d8a50  lfs 6, 192(1)
  01d8a54  lfs 7, 184(1)
  01d8a58  lfs 8, 188(1)
  01d8a5c  fmuls 5, 4, 4
  01d8a60  fmuls 7, 7, 4
  01d8a64  fmuls 6, 6, 5
  01d8a68  fmuls 3, 5, 5
  01d8a6c  fmuls 5, 8, 5
  01d8a70  stfs 7, 184(1)
  01d8a74  fmuls 4, 6, 4
  01d8a78  stfs 5, 188(1)
  01d8a7c  stfs 4, 192(1)
  01d8a80  lfs 4, 164(3)
  01d8a84  fmuls 4, 4, 3
  01d8a88  stfs 4, 180(3)
  01d8a8c  lfs 4, 4(4)
  01d8a90  addic 4, 4, 8
  01d8a94  fmuls 4, 4, 3
  01d8a98  addic 3, 3, 8
  01d8a9c  stfs 4, 4(5)
  01d8aa0  addic 5, 5, 8
  01d8aa4  bdnz 0x1d8a80
  01d8aa8  li 5, 4
  01d8aac  ori 3, 1, 0
  01d8ab0  mtctr 5
  01d8ab4  lis 4, 115
  01d8ab8  addic 5, 3, 180
  01d8abc  addic 4, 4, 22752
  01d8ac0  ori 7, 5, 0
  01d8ac4  lfs 3, 180(3)
  01d8ac8  lfs 4, 0(4)
  01d8acc  fmuls 3, 3, 4
  01d8ad0  lfs 4, 4(4)
  01d8ad4  addic 4, 4, 8
  01d8ad8  stfs 3, 180(3)
  01d8adc  lfs 3, 4(5)
  01d8ae0  addic 3, 3, 8
  01d8ae4  fmuls 3, 3, 4
  01d8ae8  stfs 3, 4(5)
  01d8aec  addic 5, 5, 8
  01d8af0  bdnz 0x1d8ac4
  01d8af4  ori 3, 1, 0
  01d8af8  fmr 3, 27
  01d8afc  mtctr 6
  01d8b00  lfs 4, 180(3)
  01d8b04  fadds 3, 3, 4
  01d8b08  lfs 4, 4(7)
  01d8b0c  addic 3, 3, 16
  01d8b10  lfs 5, 8(7)
  01d8b14  lfs 6, 12(7)
  01d8b18  addic 7, 7, 16
  01d8b1c  fadds 3, 3, 4
  01d8b20  fadds 3, 3, 5
  01d8b24  fadds 3, 3, 6
  01d8b28  bdnz 0x1d8b00
  01d8b2c  lis 3, 30
  01d8b30  addi 3, 3, -32724
  01d8b34  lfs 4, 24(3)
  01d8b38  fadds 3, 3, 4
  01d8b3c  fmadds 1, 3, 1, 2
  01d8b40  lfs 2, 72(31)
  01d8b44  bl 0x5025e0
  01d8b48  nop
  01d8b4c  fmuls 2, 29, 29
  01d8b50  stfs 28, 116(1)
  01d8b54  fabs 4, 28
  01d8b58  fmadds 2, 30, 30, 2
  01d8b5c  fsqrts 2, 2
  01d8b60  lwz 3, 116(1)
  01d8b64  lfs 3, 116(1)
  01d8b68  rlwinm 3, 3, 3, 29, 29
  01d8b6c  fabs 3, 3
  01d8b70  fabs 5, 2
  01d8b74  stfs 2, 112(1)
  01d8b78  fsubs 2, 5, 4
  01d8b7c  stfs 2, 120(1)
  01d8b80  lwz 4, 112(1)
  01d8b84  lfs 2, 112(1)
  01d8b88  lwz 5, 120(1)
  01d8b8c  lfs 6, 120(1)
  01d8b90  fabs 2, 2
  01d8b94  rlwimi 3, 5, 2, 30, 30
  01d8b98  fsub 7, 6, 27
  01d8b9c  fsub 6, 6, 27
  01d8ba0  rlwimi 3, 4, 4, 28, 28
  01d8ba4  ori 4, 29, 0
  01d8ba8  rlwimi 4, 3, 2, 26, 28
  01d8bac  slwi 3, 3, 2
  01d8bb0  clrldi 4, 4, 32
  01d8bb4  fsel 4, 7, 2, 4
  01d8bb8  lfsx 30, 29, 3
  01d8bbc  fsel 3, 6, 3, 5
  01d8bc0  lfs 2, 4(4)
  01d8bc4  fcmpu 0, 4, 27
  01d8bc8  bt 1, 0x1d8bd0
  01d8bcc  b 0x1d8cf0
  01d8bd0  fsubs 5, 3, 4
  01d8bd4  fadds 3, 3, 4
  01d8bd8  addic 3, 1, 16
  01d8bdc  li 6, 2
  01d8be0  addic 4, 3, 132
  01d8be4  addic 5, 3, 148
  01d8be8  mtctr 6
  01d8bec  fdivs 3, 5, 3
  01d8bf0  fmuls 4, 3, 3
  01d8bf4  stfs 3, 160(1)
  01d8bf8  stfs 3, 152(1)
  01d8bfc  stfs 3, 156(1)
  01d8c00  stfs 3, 148(1)
  01d8c04  lfs 6, 160(1)
  01d8c08  lfs 7, 152(1)
  01d8c0c  lfs 8, 156(1)
  01d8c10  fmuls 5, 4, 4
  01d8c14  fmuls 7, 7, 4
  01d8c18  fmuls 6, 6, 5
  01d8c1c  fmuls 3, 5, 5
  01d8c20  fmuls 5, 8, 5
  01d8c24  stfs 7, 152(1)
  01d8c28  fmuls 4, 6, 4
  01d8c2c  stfs 5, 156(1)
  01d8c30  stfs 4, 160(1)
  01d8c34  lfs 4, 132(3)
  01d8c38  fmuls 4, 4, 3
  01d8c3c  stfs 4, 148(3)
  01d8c40  lfs 4, 4(4)
  01d8c44  addic 3, 3, 8
  01d8c48  addic 4, 4, 8
  01d8c4c  fmuls 4, 4, 3
  01d8c50  stfs 4, 4(5)
  01d8c54  addic 5, 5, 8
  01d8c58  bdnz 0x1d8c34
  01d8c5c  li 5, 4
  01d8c60  ori 3, 1, 0
  01d8c64  mtctr 5
  01d8c68  lis 4, 115
  01d8c6c  addic 5, 3, 148
  01d8c70  addic 4, 4, 22752
  01d8c74  ori 7, 5, 0
  01d8c78  lfs 3, 148(3)
  01d8c7c  lfs 4, 0(4)
  01d8c80  fmuls 3, 3, 4
  01d8c84  lfs 4, 4(4)
  01d8c88  addic 4, 4, 8
  01d8c8c  stfs 3, 148(3)
  01d8c90  lfs 3, 4(5)
  01d8c94  addic 3, 3, 8
  01d8c98  fmuls 3, 3, 4
  01d8c9c  stfs 3, 4(5)
  01d8ca0  addic 5, 5, 8
  01d8ca4  bdnz 0x1d8c78
  01d8ca8  ori 3, 1, 0
  01d8cac  mtctr 6
  01d8cb0  lfs 3, 148(3)
  01d8cb4  lfs 4, 4(7)
  01d8cb8  fadds 3, 27, 3
  01d8cbc  lfs 5, 8(7)
  01d8cc0  lfs 27, 12(7)
  01d8cc4  addic 3, 3, 16
  01d8cc8  addic 7, 7, 16
  01d8ccc  fadds 3, 3, 4
  01d8cd0  fadds 3, 3, 5
  01d8cd4  fadds 27, 3, 27
  01d8cd8  bdnz 0x1d8cb0
  01d8cdc  lis 3, 30
  01d8ce0  addi 3, 3, -32724
  01d8ce4  lfs 3, 24(3)
  01d8ce8  fadds 27, 27, 3
  01d8cec  fmadds 27, 27, 30, 2
  01d8cf0  lis 3, 30
  01d8cf4  fneg 27, 27
  01d8cf8  addi 3, 3, -32724
  01d8cfc  lfs 2, 28(3)
  01d8d00  fcmpu 0, 1, 2
  01d8d04  cror 6, 0, 2
  01d8d08  bt 6, 0x1d8d14
  01d8d0c  fmr 1, 2
  01d8d10  b 0x1d8d30
  01d8d14  lis 3, 30
  01d8d18  addi 3, 3, -32724
  01d8d1c  lfs 2, 76(3)
  01d8d20  fcmpu 0, 1, 2
  01d8d24  cror 6, 1, 2
  01d8d28  bt 6, 0x1d8d30
  01d8d2c  fmr 1, 2
  01d8d30  lis 3, 30
  01d8d34  addi 3, 3, -32724
  01d8d38  lfs 2, 80(3)
  01d8d3c  fcmpu 0, 27, 2
  01d8d40  cror 6, 0, 2
  01d8d44  bt 6, 0x1d8d50
  01d8d48  fmr 27, 2
  01d8d4c  b 0x1d8d6c
  01d8d50  lis 3, 30
  01d8d54  addi 3, 3, -32724
  01d8d58  lfs 2, 84(3)
  01d8d5c  fcmpu 0, 27, 2
  01d8d60  cror 6, 1, 2
  01d8d64  bt 6, 0x1d8d6c
  01d8d68  fmr 27, 2
  01d8d6c  lis 3, 30
  01d8d70  addi 3, 3, -32724
  01d8d74  lfs 2, 88(3)
  01d8d78  fmuls 2, 1, 2
  01d8d7c  stfs 2, 200(30)
  01d8d80  lfs 2, 92(3)
  01d8d84  stfs 27, 196(30)
  01d8d88  fmuls 1, 1, 2
  01d8d8c  stfs 1, 328(30)
  01d8d90  lis 3, 151
  01d8d94  lbz 3, -16268(3)
  01d8d98  cmpwi 3, 0
  01d8d9c  bt 2, 0x1d8da8
  01d8da0  lis 3, 16432
  01d8da4  stw 3, 208(30)
  01d8da8  lis 3, 30
  01d8dac  lis 29, 114
  01d8db0  addi 3, 3, -32724
  01d8db4  addic 4, 30, 96
  01d8db8  li 5, 0
  01d8dbc  lfs 30, 96(3)
  01d8dc0  lfs 2, -3060(29)
  01d8dc4  ori 3, 31, 0
  01d8dc8  fmuls 1, 2, 31
  01d8dcc  fmuls 2, 2, 30
  01d8dd0  bl 0x1167c8
  01d8dd4  nop
  01d8dd8  lfs 2, -3060(29)
  01d8ddc  addic 4, 30, 224
  01d8de0  ori 3, 31, 0
  01d8de4  fmuls 1, 2, 31
  01d8de8  li 5, 1
  01d8dec  fmuls 2, 2, 30
  01d8df0  bl 0x1167c8
  01d8df4  nop
  01d8df8  ld 0, 368(1)
  01d8dfc  mtlr 0
  01d8e00  lfd 27, 312(1)
  01d8e04  lfd 28, 320(1)
  01d8e08  lfd 29, 328(1)
  01d8e0c  lfd 30, 336(1)
  01d8e10  lfd 31, 344(1)
  01d8e14  ld 26, 264(1)
  01d8e18  ld 27, 272(1)
  01d8e1c  ld 28, 280(1)
  01d8e20  ld 29, 288(1)
  01d8e24  ld 30, 296(1)
  01d8e28  ld 31, 304(1)
  01d8e2c  addi 1, 1, 352
  01d8e30  blr
