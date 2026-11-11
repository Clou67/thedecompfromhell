# game/update/moby638.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M638_003f9d70:   # 0x3f9d70, 0x14 bytes
  03f9d70  lis 3, 133
  03f9d74  lis 4, 1
  03f9d78  addic 3, 3, 17924
  03f9d7c  stw 4, 72(3)
  03f9d80  blr

M638_003f9dc0:   # 0x3f9dc0, 0x3bc bytes
  03f9dc0  stdu 1, -416(1)
  03f9dc4  mflr 0
  03f9dc8  std 0, 432(1)
  03f9dcc  stfd 18, 304(1)
  03f9dd0  stfd 19, 312(1)
  03f9dd4  stfd 20, 320(1)
  03f9dd8  stfd 21, 328(1)
  03f9ddc  stfd 22, 336(1)
  03f9de0  stfd 23, 344(1)
  03f9de4  stfd 24, 352(1)
  03f9de8  stfd 25, 360(1)
  03f9dec  stfd 26, 368(1)
  03f9df0  stfd 27, 376(1)
  03f9df4  stfd 28, 384(1)
  03f9df8  stfd 29, 392(1)
  03f9dfc  stfd 30, 400(1)
  03f9e00  stfd 31, 408(1)
  03f9e04  std 31, 296(1)
  03f9e08  ori 31, 3, 0
  03f9e0c  lbz 3, 49(3)
  03f9e10  std 30, 288(1)
  03f9e14  std 29, 280(1)
  03f9e18  std 28, 272(1)
  03f9e1c  std 27, 264(1)
  03f9e20  std 26, 256(1)
  03f9e24  std 25, 248(1)
  03f9e28  std 24, 240(1)
  03f9e2c  cmpwi 3, 0
  03f9e30  bt 2, 0x3fa114
  03f9e34  lbz 3, 32(31)
  03f9e38  cmpwi 3, 10
  03f9e3c  bt 2, 0x3fa114
  03f9e40  lis 3, 64
  03f9e44  li 29, 0
  03f9e48  addi 3, 3, -25208
  03f9e4c  ori 30, 29, 0
  03f9e50  lfs 18, 0(3)
  03f9e54  lfs 19, 4(3)
  03f9e58  lfs 20, 8(3)
  03f9e5c  lfs 21, 12(3)
  03f9e60  lfs 22, 16(3)
  03f9e64  lfs 23, 20(3)
  03f9e68  lfs 24, 24(3)
  03f9e6c  lfs 25, 28(3)
  03f9e70  lfs 26, 32(3)
  03f9e74  lfs 27, 36(3)
  03f9e78  lfs 28, 40(3)
  03f9e7c  lfs 29, 44(3)
  03f9e80  lfs 30, 48(3)
  03f9e84  lfs 31, 52(3)
  03f9e88  fmr 1, 18
  03f9e8c  fmr 2, 19
  03f9e90  bl 0xfcbe8
  03f9e94  nop
  03f9e98  fcmpu 0, 1, 20
  03f9e9c  bt 1, 0x3fa108
  03f9ea0  addic 4, 29, 4
  03f9ea4  addic 5, 1, 176
  03f9ea8  extsw 4, 4
  03f9eac  ori 3, 31, 0
  03f9eb0  bl 0xf1038
  03f9eb4  nop
  03f9eb8  fmr 1, 21
  03f9ebc  fmr 2, 22
  03f9ec0  bl 0xfcbe8
  03f9ec4  nop
  03f9ec8  lfs 3, 212(1)
  03f9ecc  lfs 4, 208(1)
  03f9ed0  fmuls 2, 3, 3
  03f9ed4  lfs 5, 216(1)
  03f9ed8  fadds 1, 1, 19
  03f9edc  lis 28, 114
  03f9ee0  lfs 6, -3052(28)
  03f9ee4  fmadds 2, 4, 4, 2
  03f9ee8  fmuls 1, 1, 23
  03f9eec  fmadds 2, 5, 5, 2
  03f9ef0  fmuls 6, 1, 6
  03f9ef4  fmr 1, 21
  03f9ef8  fsqrts 7, 2
  03f9efc  lfs 2, 220(1)
  03f9f00  stfs 2, 140(1)
  03f9f04  fmr 2, 22
  03f9f08  fdivs 6, 6, 7
  03f9f0c  fsub 8, 18, 7
  03f9f10  fsub 9, 18, 7
  03f9f14  fsub 10, 18, 7
  03f9f18  fsub 11, 7, 18
  03f9f1c  fsub 12, 7, 18
  03f9f20  fsub 7, 7, 18
  03f9f24  fmuls 4, 4, 6
  03f9f28  fmuls 3, 3, 6
  03f9f2c  fmuls 5, 5, 6
  03f9f30  fsel 6, 8, 18, 4
  03f9f34  fsel 8, 9, 18, 3
  03f9f38  fsel 9, 10, 18, 5
  03f9f3c  fsel 4, 11, 6, 4
  03f9f40  fsel 3, 12, 8, 3
  03f9f44  fsel 5, 7, 9, 5
  03f9f48  stfs 4, 128(1)
  03f9f4c  stfs 3, 132(1)
  03f9f50  stfs 5, 136(1)
  03f9f54  bl 0xfcbe8
  03f9f58  nop
  03f9f5c  fadds 3, 1, 19
  03f9f60  lfs 4, -3052(28)
  03f9f64  fmr 1, 25
  03f9f68  stw 30, 156(1)
  03f9f6c  fmr 2, 26
  03f9f70  stw 30, 148(1)
  03f9f74  stw 30, 144(1)
  03f9f78  fmuls 3, 3, 24
  03f9f7c  fmuls 3, 3, 4
  03f9f80  stfs 3, 152(1)
  03f9f84  bl 0xfcbe8
  03f9f88  nop
  03f9f8c  lfs 2, -3052(28)
  03f9f90  addic 3, 1, 160
  03f9f94  fmuls 1, 1, 2
  03f9f98  fmr 2, 1
  03f9f9c  bl 0xfea60
  03f9fa0  nop
  03f9fa4  lfs 1, 144(1)
  03f9fa8  lfs 2, 160(1)
  03f9fac  lfs 3, 148(1)
  03f9fb0  fadds 4, 1, 2
  03f9fb4  lfs 1, 164(1)
  03f9fb8  lfs 2, 152(1)
  03f9fbc  fadds 3, 3, 1
  03f9fc0  lfs 1, 168(1)
  03f9fc4  fadds 5, 2, 1
  03f9fc8  fmr 1, 22
  03f9fcc  fmr 2, 22
  03f9fd0  stfs 4, 144(1)
  03f9fd4  stfs 3, 148(1)
  03f9fd8  stfs 5, 152(1)
  03f9fdc  bl 0xfcbe8
  03f9fe0  nop
  03f9fe4  stfs 1, 140(1)
  03f9fe8  fmr 1, 27
  03f9fec  fmr 2, 27
  03f9ff0  bl 0xfcbe8
  03f9ff4  nop
  03f9ff8  stfs 1, 156(1)
  03f9ffc  fmr 2, 19
  03fa000  fmr 1, 18
  03fa004  bl 0xfcbe8
  03fa008  nop
  03fa00c  lis 3, -32752
  03fa010  lis 4, -32752
  03fa014  ori 3, 3, 4351
  03fa018  ori 4, 4, 33023
  03fa01c  bl 0x5027bc
  03fa020  nop
  03fa024  ori 28, 3, 0
  03fa028  fmr 1, 18
  03fa02c  fmr 2, 19
  03fa030  bl 0xfcbe8
  03fa034  nop
  03fa038  lis 3, 16384
  03fa03c  lis 4, 16432
  03fa040  ori 3, 3, 192
  03fa044  ori 4, 4, 65535
  03fa048  bl 0x5027bc
  03fa04c  nop
  03fa050  fmr 1, 28
  03fa054  ori 27, 3, 0
  03fa058  fmr 2, 29
  03fa05c  bl 0xfcbe8
  03fa060  nop
  03fa064  fadds 1, 1, 19
  03fa068  lis 26, 114
  03fa06c  lfs 2, -3056(26)
  03fa070  fmuls 1, 1, 30
  03fa074  fmuls 1, 2, 1
  03fa078  bl 0x502758
  03fa07c  nop
  03fa080  fmr 1, 28
  03fa084  ori 25, 3, 0
  03fa088  fmr 2, 29
  03fa08c  bl 0xfcbe8
  03fa090  nop
  03fa094  fadds 1, 1, 19
  03fa098  lfs 2, -3056(26)
  03fa09c  fmuls 1, 1, 31
  03fa0a0  fmuls 1, 2, 1
  03fa0a4  bl 0x502758
  03fa0a8  nop
  03fa0ac  fmr 1, 28
  03fa0b0  ori 24, 3, 0
  03fa0b4  fmr 2, 29
  03fa0b8  bl 0xfcbe8
  03fa0bc  nop
  03fa0c0  fadds 1, 1, 19
  03fa0c4  lfs 2, -3056(26)
  03fa0c8  fmuls 1, 1, 31
  03fa0cc  fmuls 1, 2, 1
  03fa0d0  bl 0x502758
  03fa0d4  nop
  03fa0d8  li 11, -1
  03fa0dc  ori 10, 3, 0
  03fa0e0  ori 6, 28, 0
  03fa0e4  ori 7, 27, 0
  03fa0e8  addic 3, 1, 224
  03fa0ec  std 11, 112(1)
  03fa0f0  ori 8, 25, 0
  03fa0f4  addic 4, 1, 128
  03fa0f8  ori 9, 24, 0
  03fa0fc  addic 5, 1, 144
  03fa100  bl 0x1206e8
  03fa104  nop
  03fa108  addic 29, 29, 1
  03fa10c  cmpwi 29, 2
  03fa110  bt 0, 0x3f9e88
  03fa114  ld 0, 432(1)
  03fa118  mtlr 0
  03fa11c  lfd 18, 304(1)
  03fa120  lfd 19, 312(1)
  03fa124  lfd 20, 320(1)
  03fa128  lfd 21, 328(1)
  03fa12c  lfd 22, 336(1)
  03fa130  lfd 23, 344(1)
  03fa134  lfd 24, 352(1)
  03fa138  lfd 25, 360(1)
  03fa13c  lfd 26, 368(1)
  03fa140  lfd 27, 376(1)
  03fa144  lfd 28, 384(1)
  03fa148  lfd 29, 392(1)
  03fa14c  lfd 30, 400(1)
  03fa150  lfd 31, 408(1)
  03fa154  ld 24, 240(1)
  03fa158  ld 25, 248(1)
  03fa15c  ld 26, 256(1)
  03fa160  ld 27, 264(1)
  03fa164  ld 28, 272(1)
  03fa168  ld 29, 280(1)
  03fa16c  ld 30, 288(1)
  03fa170  ld 31, 296(1)
  03fa174  addi 1, 1, 416
  03fa178  blr

M638_003fa1a8:   # 0x3fa1a8, 0xaac bytes
  03fa1a8  stdu 1, -480(1)
  03fa1ac  mflr 0
  03fa1b0  std 0, 496(1)
  03fa1b4  stfd 19, 376(1)
  03fa1b8  stfd 20, 384(1)
  03fa1bc  stfd 21, 392(1)
  03fa1c0  stfd 22, 400(1)
  03fa1c4  stfd 23, 408(1)
  03fa1c8  stfd 24, 416(1)
  03fa1cc  stfd 25, 424(1)
  03fa1d0  stfd 26, 432(1)
  03fa1d4  stfd 27, 440(1)
  03fa1d8  stfd 28, 448(1)
  03fa1dc  stfd 29, 456(1)
  03fa1e0  stfd 30, 464(1)
  03fa1e4  stfd 31, 472(1)
  03fa1e8  std 30, 360(1)
  03fa1ec  std 31, 368(1)
  03fa1f0  lwz 30, 120(3)
  03fa1f4  ori 31, 3, 0
  03fa1f8  lwz 3, 276(30)
  03fa1fc  std 29, 352(1)
  03fa200  cmpwi 3, 2
  03fa204  bt 2, 0x3fab90
  03fa208  lis 3, 64
  03fa20c  lwz 4, 272(30)
  03fa210  addi 3, 3, -24196
  03fa214  lfs 1, 0(3)
  03fa218  lfs 29, 24(31)
  03fa21c  lfs 31, 16(31)
  03fa220  lfs 30, 20(31)
  03fa224  fadds 29, 29, 1
  03fa228  lhz 3, 166(4)
  03fa22c  cmpwi 3, 0
  03fa230  bf 2, 0x3fa24c
  03fa234  lis 3, 151
  03fa238  addic 3, 3, -25376
  03fa23c  lfs 28, 208(3)
  03fa240  lfs 27, 212(3)
  03fa244  lfs 26, 216(3)
  03fa248  b 0x3fa258
  03fa24c  lfs 28, 208(30)
  03fa250  lfs 27, 212(30)
  03fa254  lfs 26, 216(30)
  03fa258  addic 3, 1, 112
  03fa25c  addic 4, 31, 192
  03fa260  bl 0x5010c0
  03fa264  nop
  03fa268  fsubs 3, 27, 30
  03fa26c  lfs 1, 128(1)
  03fa270  lfs 2, 132(1)
  03fa274  fsubs 4, 28, 31
  03fa278  lfs 5, 112(1)
  03fa27c  fsubs 6, 26, 29
  03fa280  lfs 7, 116(1)
  03fa284  lfs 8, 144(1)
  03fa288  lfs 9, 148(1)
  03fa28c  lis 3, 64
  03fa290  addi 4, 3, -24196
  03fa294  fmuls 1, 1, 3
  03fa298  fmuls 2, 2, 3
  03fa29c  lis 3, 115
  03fa2a0  addic 3, 3, 22784
  03fa2a4  fmadds 1, 5, 4, 1
  03fa2a8  fmadds 2, 7, 4, 2
  03fa2ac  fmadds 1, 8, 6, 1
  03fa2b0  fmadds 2, 9, 6, 2
  03fa2b4  fabs 5, 1
  03fa2b8  fabs 8, 2
  03fa2bc  stfs 1, 212(1)
  03fa2c0  stfs 2, 216(1)
  03fa2c4  lfs 7, 136(1)
  03fa2c8  lfs 10, 120(1)
  03fa2cc  fmuls 3, 7, 3
  03fa2d0  lfs 11, 152(1)
  03fa2d4  fsubs 9, 5, 8
  03fa2d8  fmadds 3, 10, 4, 3
  03fa2dc  stfs 9, 220(1)
  03fa2e0  lwz 5, 212(1)
  03fa2e4  lfs 7, 4(4)
  03fa2e8  lfs 9, 212(1)
  03fa2ec  fmadds 3, 11, 6, 3
  03fa2f0  lwz 6, 216(1)
  03fa2f4  fabs 4, 9
  03fa2f8  lfs 9, 216(1)
  03fa2fc  rlwinm 6, 6, 3, 29, 29
  03fa300  lwz 7, 220(1)
  03fa304  lfs 6, 220(1)
  03fa308  rlwimi 6, 7, 2, 30, 30
  03fa30c  fabs 9, 9
  03fa310  fsub 10, 6, 7
  03fa314  fsub 11, 6, 7
  03fa318  rlwimi 6, 5, 4, 28, 28
  03fa31c  ori 5, 3, 0
  03fa320  rlwimi 5, 6, 2, 26, 28
  03fa324  slwi 6, 6, 2
  03fa328  clrldi 5, 5, 32
  03fa32c  fsel 6, 10, 4, 8
  03fa330  lfsx 10, 3, 6
  03fa334  fsel 5, 11, 9, 5
  03fa338  lfs 4, 4(5)
  03fa33c  lfs 8, 8(4)
  03fa340  fcmpu 0, 6, 7
  03fa344  bt 1, 0x3fa350
  03fa348  fmr 10, 7
  03fa34c  b 0x3fa468
  03fa350  fsubs 9, 5, 6
  03fa354  fadds 5, 5, 6
  03fa358  addic 4, 1, 16
  03fa35c  li 8, 2
  03fa360  addic 5, 4, 304
  03fa364  addic 6, 4, 320
  03fa368  mtctr 8
  03fa36c  fdivs 5, 9, 5
  03fa370  fmuls 6, 5, 5
  03fa374  stfs 5, 332(1)
  03fa378  stfs 5, 324(1)
  03fa37c  stfs 5, 328(1)
  03fa380  stfs 5, 320(1)
  03fa384  lfs 11, 332(1)
  03fa388  lfs 12, 324(1)
  03fa38c  lfs 13, 328(1)
  03fa390  fmuls 9, 6, 6
  03fa394  fmuls 12, 12, 6
  03fa398  fmuls 11, 11, 9
  03fa39c  fmuls 5, 9, 9
  03fa3a0  fmuls 9, 13, 9
  03fa3a4  stfs 12, 324(1)
  03fa3a8  fmuls 6, 11, 6
  03fa3ac  stfs 9, 328(1)
  03fa3b0  stfs 6, 332(1)
  03fa3b4  lfs 6, 304(4)
  03fa3b8  fmuls 6, 6, 5
  03fa3bc  stfs 6, 320(4)
  03fa3c0  lfs 6, 4(5)
  03fa3c4  addic 4, 4, 8
  03fa3c8  addic 5, 5, 8
  03fa3cc  fmuls 6, 6, 5
  03fa3d0  stfs 6, 4(6)
  03fa3d4  addic 6, 6, 8
  03fa3d8  bdnz 0x3fa3b4
  03fa3dc  li 6, 4
  03fa3e0  ori 4, 1, 0
  03fa3e4  mtctr 6
  03fa3e8  lis 5, 115
  03fa3ec  addic 6, 4, 320
  03fa3f0  addic 5, 5, 22752
  03fa3f4  ori 7, 6, 0
  03fa3f8  lfs 5, 320(4)
  03fa3fc  lfs 6, 0(5)
  03fa400  fmuls 5, 5, 6
  03fa404  lfs 6, 4(5)
  03fa408  addic 5, 5, 8
  03fa40c  stfs 5, 320(4)
  03fa410  lfs 5, 4(6)
  03fa414  addic 4, 4, 8
  03fa418  fmuls 5, 5, 6
  03fa41c  stfs 5, 4(6)
  03fa420  addic 6, 6, 8
  03fa424  bdnz 0x3fa3f8
  03fa428  fmr 5, 7
  03fa42c  ori 4, 1, 0
  03fa430  mtctr 8
  03fa434  lfs 6, 320(4)
  03fa438  fadds 5, 5, 6
  03fa43c  addic 4, 4, 16
  03fa440  lfs 6, 4(7)
  03fa444  lfs 9, 8(7)
  03fa448  lfs 11, 12(7)
  03fa44c  addic 7, 7, 16
  03fa450  fadds 5, 5, 6
  03fa454  fadds 5, 5, 9
  03fa458  fadds 5, 5, 11
  03fa45c  bdnz 0x3fa434
  03fa460  fadds 5, 5, 8
  03fa464  fmadds 10, 5, 10, 4
  03fa468  fmuls 2, 2, 2
  03fa46c  stfs 3, 204(1)
  03fa470  fabs 4, 3
  03fa474  fmadds 1, 1, 1, 2
  03fa478  fsqrts 1, 1
  03fa47c  lwz 4, 204(1)
  03fa480  lfs 2, 204(1)
  03fa484  rlwinm 4, 4, 3, 29, 29
  03fa488  fabs 3, 2
  03fa48c  fabs 5, 1
  03fa490  stfs 1, 200(1)
  03fa494  fsubs 1, 5, 4
  03fa498  stfs 1, 208(1)
  03fa49c  lwz 5, 200(1)
  03fa4a0  lfs 1, 200(1)
  03fa4a4  lwz 6, 208(1)
  03fa4a8  lfs 2, 208(1)
  03fa4ac  fabs 1, 1
  03fa4b0  rlwimi 4, 6, 2, 30, 30
  03fa4b4  fsub 6, 2, 7
  03fa4b8  fsub 9, 2, 7
  03fa4bc  rlwimi 4, 5, 4, 28, 28
  03fa4c0  ori 5, 3, 0
  03fa4c4  rlwimi 5, 4, 2, 26, 28
  03fa4c8  slwi 4, 4, 2
  03fa4cc  clrldi 5, 5, 32
  03fa4d0  fsel 4, 6, 1, 4
  03fa4d4  lfsx 1, 3, 4
  03fa4d8  lfs 2, 4(5)
  03fa4dc  fsel 3, 9, 3, 5
  03fa4e0  fcmpu 0, 4, 7
  03fa4e4  bt 1, 0x3fa4f0
  03fa4e8  fmr 1, 7
  03fa4ec  b 0x3fa608
  03fa4f0  fsubs 5, 3, 4
  03fa4f4  fadds 3, 3, 4
  03fa4f8  addic 4, 1, 16
  03fa4fc  li 7, 2
  03fa500  addic 5, 4, 272
  03fa504  addic 6, 4, 288
  03fa508  mtctr 7
  03fa50c  fdivs 3, 5, 3
  03fa510  fmuls 4, 3, 3
  03fa514  stfs 3, 300(1)
  03fa518  stfs 3, 292(1)
  03fa51c  stfs 3, 296(1)
  03fa520  stfs 3, 288(1)
  03fa524  lfs 6, 300(1)
  03fa528  lfs 9, 292(1)
  03fa52c  lfs 11, 296(1)
  03fa530  fmuls 5, 4, 4
  03fa534  fmuls 9, 9, 4
  03fa538  fmuls 6, 6, 5
  03fa53c  fmuls 3, 5, 5
  03fa540  fmuls 5, 11, 5
  03fa544  stfs 9, 292(1)
  03fa548  fmuls 4, 6, 4
  03fa54c  stfs 5, 296(1)
  03fa550  stfs 4, 300(1)
  03fa554  lfs 4, 272(4)
  03fa558  fmuls 4, 4, 3
  03fa55c  stfs 4, 288(4)
  03fa560  lfs 4, 4(5)
  03fa564  addic 4, 4, 8
  03fa568  addic 5, 5, 8
  03fa56c  fmuls 4, 4, 3
  03fa570  stfs 4, 4(6)
  03fa574  addic 6, 6, 8
  03fa578  bdnz 0x3fa554
  03fa57c  li 6, 4
  03fa580  ori 4, 1, 0
  03fa584  mtctr 6
  03fa588  lis 5, 115
  03fa58c  addic 6, 4, 288
  03fa590  addic 5, 5, 22752
  03fa594  ori 8, 6, 0
  03fa598  lfs 3, 288(4)
  03fa59c  lfs 4, 0(5)
  03fa5a0  fmuls 3, 3, 4
  03fa5a4  lfs 4, 4(5)
  03fa5a8  addic 5, 5, 8
  03fa5ac  stfs 3, 288(4)
  03fa5b0  lfs 3, 4(6)
  03fa5b4  addic 4, 4, 8
  03fa5b8  fmuls 3, 3, 4
  03fa5bc  stfs 3, 4(6)
  03fa5c0  addic 6, 6, 8
  03fa5c4  bdnz 0x3fa598
  03fa5c8  fmr 3, 7
  03fa5cc  ori 4, 1, 0
  03fa5d0  mtctr 7
  03fa5d4  lfs 4, 288(4)
  03fa5d8  fadds 3, 3, 4
  03fa5dc  addic 4, 4, 16
  03fa5e0  lfs 4, 4(8)
  03fa5e4  lfs 5, 8(8)
  03fa5e8  lfs 6, 12(8)
  03fa5ec  addic 8, 8, 16
  03fa5f0  fadds 3, 3, 4
  03fa5f4  fadds 3, 3, 5
  03fa5f8  fadds 3, 3, 6
  03fa5fc  bdnz 0x3fa5d4
  03fa600  fadds 3, 3, 8
  03fa604  fmadds 1, 3, 1, 2
  03fa608  fcmpu 0, 10, 8
  03fa60c  fneg 1, 1
  03fa610  cror 6, 0, 2
  03fa614  bt 6, 0x3fa620
  03fa618  fmr 10, 8
  03fa61c  b 0x3fa63c
  03fa620  lis 4, 64
  03fa624  addi 4, 4, -24196
  03fa628  lfs 2, 12(4)
  03fa62c  fcmpu 0, 10, 2
  03fa630  cror 6, 1, 2
  03fa634  bt 6, 0x3fa63c
  03fa638  fmr 10, 2
  03fa63c  fcmpu 0, 1, 8
  03fa640  cror 6, 0, 2
  03fa644  bt 6, 0x3fa650
  03fa648  fmr 1, 8
  03fa64c  b 0x3fa66c
  03fa650  lis 4, 64
  03fa654  addi 4, 4, -24196
  03fa658  lfs 2, 12(4)
  03fa65c  fcmpu 0, 1, 2
  03fa660  cror 6, 1, 2
  03fa664  bt 6, 0x3fa66c
  03fa668  fmr 1, 2
  03fa66c  lis 4, 64
  03fa670  addi 4, 4, -24196
  03fa674  lfs 9, 16(4)
  03fa678  fmuls 2, 10, 9
  03fa67c  fmuls 1, 1, 9
  03fa680  stfs 2, 408(30)
  03fa684  stfs 2, 536(30)
  03fa688  stfs 1, 404(30)
  03fa68c  stfs 1, 532(30)
  03fa690  lbz 4, 32(31)
  03fa694  lfs 10, 112(1)
  03fa698  lfs 11, 128(1)
  03fa69c  cmpwi 4, 5
  03fa6a0  lfs 12, 144(1)
  03fa6a4  cmpwi 1, 4, 4
  03fa6a8  lfs 13, 116(1)
  03fa6ac  lfs 0, 132(1)
  03fa6b0  lfs 25, 148(1)
  03fa6b4  lfs 24, 120(1)
  03fa6b8  lfs 23, 136(1)
  03fa6bc  lfs 22, 152(1)
  03fa6c0  bt 2, 0x3fa6c8
  03fa6c4  bf 6, 0x3fab90
  03fa6c8  lfs 3, 196(31)
  03fa6cc  lfs 2, 192(31)
  03fa6d0  fmuls 1, 3, 3
  03fa6d4  lfs 21, 200(31)
  03fa6d8  fmr 4, 7
  03fa6dc  fmadds 1, 2, 2, 1
  03fa6e0  fmr 5, 4
  03fa6e4  fmadds 1, 21, 21, 1
  03fa6e8  fmr 6, 5
  03fa6ec  fsqrts 20, 1
  03fa6f0  fcmpu 0, 20, 6
  03fa6f4  bt 2, 0x3fa744
  03fa6f8  frsqrte 4, 1
  03fa6fc  lis 4, 64
  03fa700  addi 4, 4, -24196
  03fa704  lfs 5, 20(4)
  03fa708  fmuls 6, 1, 4
  03fa70c  fmuls 20, 9, 4
  03fa710  fnmsubs 6, 6, 4, 5
  03fa714  fmadds 4, 6, 20, 4
  03fa718  fmuls 6, 1, 4
  03fa71c  fmuls 20, 9, 4
  03fa720  fnmsubs 6, 6, 4, 5
  03fa724  fmadds 4, 6, 20, 4
  03fa728  fmuls 1, 1, 4
  03fa72c  fmuls 6, 9, 4
  03fa730  fnmsubs 1, 1, 4, 5
  03fa734  fmadds 6, 1, 6, 4
  03fa738  fmuls 4, 2, 6
  03fa73c  fmuls 5, 3, 6
  03fa740  fmuls 6, 21, 6
  03fa744  lfs 1, 212(31)
  03fa748  lfs 2, 208(31)
  03fa74c  fmuls 3, 1, 1
  03fa750  lfs 21, 216(31)
  03fa754  fadds 4, 4, 31
  03fa758  fadds 5, 5, 30
  03fa75c  fadds 6, 6, 29
  03fa760  fmadds 3, 2, 2, 3
  03fa764  fmadds 3, 21, 21, 3
  03fa768  fsqrts 3, 3
  03fa76c  fdivs 9, 9, 3
  03fa770  fsub 31, 7, 3
  03fa774  fsub 30, 3, 7
  03fa778  fsub 29, 7, 3
  03fa77c  fsub 20, 7, 3
  03fa780  fsub 19, 3, 7
  03fa784  fsub 3, 3, 7
  03fa788  fmuls 1, 1, 9
  03fa78c  fmuls 2, 2, 9
  03fa790  fmuls 9, 21, 9
  03fa794  fsel 31, 31, 7, 1
  03fa798  fsel 29, 29, 7, 2
  03fa79c  fsel 21, 20, 7, 9
  03fa7a0  fsel 1, 30, 31, 1
  03fa7a4  fsel 2, 19, 29, 2
  03fa7a8  fsel 3, 3, 21, 9
  03fa7ac  fadds 1, 5, 1
  03fa7b0  fadds 2, 4, 2
  03fa7b4  fadds 3, 6, 3
  03fa7b8  fsubs 1, 27, 1
  03fa7bc  fsubs 2, 28, 2
  03fa7c0  fsubs 3, 26, 3
  03fa7c4  fmuls 4, 0, 1
  03fa7c8  fmuls 5, 11, 1
  03fa7cc  fmuls 1, 23, 1
  03fa7d0  fmadds 4, 13, 2, 4
  03fa7d4  fmadds 31, 10, 2, 5
  03fa7d8  fmadds 1, 24, 2, 1
  03fa7dc  fmadds 4, 25, 3, 4
  03fa7e0  fmadds 31, 12, 3, 31
  03fa7e4  fmadds 1, 22, 3, 1
  03fa7e8  fmuls 5, 4, 4
  03fa7ec  fabs 10, 1
  03fa7f0  stfs 1, 192(1)
  03fa7f4  fmadds 5, 31, 31, 5
  03fa7f8  fsqrts 2, 5
  03fa7fc  fabs 9, 2
  03fa800  stfs 2, 188(1)
  03fa804  lwz 4, 192(1)
  03fa808  rlwinm 4, 4, 3, 29, 29
  03fa80c  fsubs 1, 9, 10
  03fa810  stfs 1, 196(1)
  03fa814  lwz 5, 188(1)
  03fa818  lfs 1, 188(1)
  03fa81c  lfs 2, 192(1)
  03fa820  lwz 6, 196(1)
  03fa824  lfs 3, 196(1)
  03fa828  fabs 1, 1
  03fa82c  rlwimi 4, 6, 2, 30, 30
  03fa830  fsub 5, 3, 7
  03fa834  fabs 2, 2
  03fa838  fsub 3, 3, 7
  03fa83c  rlwimi 4, 5, 4, 28, 28
  03fa840  ori 5, 3, 0
  03fa844  rlwimi 5, 4, 2, 26, 28
  03fa848  slwi 4, 4, 2
  03fa84c  clrldi 5, 5, 32
  03fa850  fsel 10, 5, 1, 10
  03fa854  lfsx 5, 3, 4
  03fa858  fsel 9, 3, 2, 9
  03fa85c  lfs 6, 4(5)
  03fa860  fcmpu 0, 10, 7
  03fa864  bt 1, 0x3fa870
  03fa868  fmr 5, 7
  03fa86c  b 0x3fa988
  03fa870  fsubs 1, 9, 10
  03fa874  fadds 2, 9, 10
  03fa878  addic 4, 1, 16
  03fa87c  li 7, 2
  03fa880  addic 5, 4, 240
  03fa884  addic 6, 4, 256
  03fa888  mtctr 7
  03fa88c  fdivs 1, 1, 2
  03fa890  fmuls 2, 1, 1
  03fa894  stfs 1, 268(1)
  03fa898  stfs 1, 260(1)
  03fa89c  stfs 1, 264(1)
  03fa8a0  stfs 1, 256(1)
  03fa8a4  lfs 3, 268(1)
  03fa8a8  lfs 10, 260(1)
  03fa8ac  lfs 11, 264(1)
  03fa8b0  fmuls 1, 2, 2
  03fa8b4  fmuls 10, 10, 2
  03fa8b8  fmuls 3, 3, 1
  03fa8bc  fmuls 9, 1, 1
  03fa8c0  fmuls 1, 11, 1
  03fa8c4  stfs 10, 260(1)
  03fa8c8  fmuls 2, 3, 2
  03fa8cc  stfs 1, 264(1)
  03fa8d0  stfs 2, 268(1)
  03fa8d4  lfs 1, 240(4)
  03fa8d8  fmuls 1, 1, 9
  03fa8dc  stfs 1, 256(4)
  03fa8e0  lfs 1, 4(5)
  03fa8e4  addic 4, 4, 8
  03fa8e8  addic 5, 5, 8
  03fa8ec  fmuls 1, 1, 9
  03fa8f0  stfs 1, 4(6)
  03fa8f4  addic 6, 6, 8
  03fa8f8  bdnz 0x3fa8d4
  03fa8fc  li 6, 4
  03fa900  ori 4, 1, 0
  03fa904  mtctr 6
  03fa908  lis 5, 115
  03fa90c  addic 6, 4, 256
  03fa910  addic 5, 5, 22752
  03fa914  ori 8, 6, 0
  03fa918  lfs 1, 256(4)
  03fa91c  lfs 2, 0(5)
  03fa920  fmuls 1, 1, 2
  03fa924  lfs 2, 4(5)
  03fa928  addic 5, 5, 8
  03fa92c  stfs 1, 256(4)
  03fa930  lfs 1, 4(6)
  03fa934  addic 4, 4, 8
  03fa938  fmuls 1, 1, 2
  03fa93c  stfs 1, 4(6)
  03fa940  addic 6, 6, 8
  03fa944  bdnz 0x3fa918
  03fa948  fmr 1, 7
  03fa94c  ori 4, 1, 0
  03fa950  mtctr 7
  03fa954  lfs 2, 256(4)
  03fa958  fadds 1, 1, 2
  03fa95c  addic 4, 4, 16
  03fa960  lfs 2, 4(8)
  03fa964  lfs 3, 8(8)
  03fa968  lfs 9, 12(8)
  03fa96c  addic 8, 8, 16
  03fa970  fadds 1, 1, 2
  03fa974  fadds 1, 1, 3
  03fa978  fadds 1, 1, 9
  03fa97c  bdnz 0x3fa954
  03fa980  fadds 1, 1, 8
  03fa984  fmadds 5, 1, 5, 6
  03fa988  fabs 3, 31
  03fa98c  stfs 31, 176(1)
  03fa990  fabs 2, 4
  03fa994  stfs 4, 180(1)
  03fa998  fneg 1, 5
  03fa99c  fsubs 6, 3, 2
  03fa9a0  stfs 6, 184(1)
  03fa9a4  lwz 4, 176(1)
  03fa9a8  lfs 4, 176(1)
  03fa9ac  lwz 5, 180(1)
  03fa9b0  lfs 5, 180(1)
  03fa9b4  fabs 4, 4
  03fa9b8  lwz 6, 184(1)
  03fa9bc  rlwinm 5, 5, 3, 29, 29
  03fa9c0  lfs 6, 184(1)
  03fa9c4  fabs 5, 5
  03fa9c8  rlwimi 5, 6, 2, 30, 30
  03fa9cc  fsub 9, 6, 7
  03fa9d0  fsub 6, 6, 7
  03fa9d4  rlwimi 5, 4, 4, 28, 28
  03fa9d8  ori 4, 3, 0
  03fa9dc  rlwimi 4, 5, 2, 26, 28
  03fa9e0  slwi 5, 5, 2
  03fa9e4  clrldi 4, 4, 32
  03fa9e8  fsel 4, 9, 4, 2
  03fa9ec  lfsx 31, 3, 5
  03fa9f0  fsel 3, 6, 5, 3
  03fa9f4  lfs 2, 4(4)
  03fa9f8  fcmpu 0, 4, 7
  03fa9fc  bt 1, 0x3faa04
  03faa00  b 0x3fab18
  03faa04  fsubs 5, 3, 4
  03faa08  fadds 3, 3, 4
  03faa0c  addic 3, 1, 16
  03faa10  li 7, 2
  03faa14  addic 5, 3, 224
  03faa18  addic 4, 3, 208
  03faa1c  mtctr 7
  03faa20  fdivs 3, 5, 3
  03faa24  fmuls 4, 3, 3
  03faa28  stfs 3, 236(1)
  03faa2c  stfs 3, 228(1)
  03faa30  stfs 3, 232(1)
  03faa34  stfs 3, 224(1)
  03faa38  lfs 6, 236(1)
  03faa3c  lfs 9, 228(1)
  03faa40  lfs 10, 232(1)
  03faa44  fmuls 5, 4, 4
  03faa48  fmuls 9, 9, 4
  03faa4c  fmuls 6, 6, 5
  03faa50  fmuls 3, 5, 5
  03faa54  fmuls 5, 10, 5
  03faa58  stfs 9, 228(1)
  03faa5c  fmuls 4, 6, 4
  03faa60  stfs 5, 232(1)
  03faa64  stfs 4, 236(1)
  03faa68  lfs 4, 208(3)
  03faa6c  fmuls 4, 4, 3
  03faa70  stfs 4, 224(3)
  03faa74  lfs 4, 4(4)
  03faa78  addic 4, 4, 8
  03faa7c  fmuls 4, 4, 3
  03faa80  addic 3, 3, 8
  03faa84  stfs 4, 4(5)
  03faa88  addic 5, 5, 8
  03faa8c  bdnz 0x3faa68
  03faa90  li 5, 4
  03faa94  ori 3, 1, 0
  03faa98  mtctr 5
  03faa9c  lis 4, 115
  03faaa0  addic 5, 3, 224
  03faaa4  addic 4, 4, 22752
  03faaa8  ori 6, 5, 0
  03faaac  lfs 3, 224(3)
  03faab0  lfs 4, 0(4)
  03faab4  fmuls 3, 3, 4
  03faab8  lfs 4, 4(4)
  03faabc  addic 4, 4, 8
  03faac0  stfs 3, 224(3)
  03faac4  lfs 3, 4(5)
  03faac8  addic 3, 3, 8
  03faacc  fmuls 3, 3, 4
  03faad0  stfs 3, 4(5)
  03faad4  addic 5, 5, 8
  03faad8  bdnz 0x3faaac
  03faadc  ori 3, 1, 0
  03faae0  mtctr 7
  03faae4  lfs 3, 224(3)
  03faae8  lfs 4, 4(6)
  03faaec  fadds 3, 7, 3
  03faaf0  lfs 5, 8(6)
  03faaf4  addic 3, 3, 16
  03faaf8  lfs 7, 12(6)
  03faafc  addic 6, 6, 16
  03fab00  fadds 3, 3, 4
  03fab04  fadds 3, 3, 5
  03fab08  fadds 7, 3, 7
  03fab0c  bdnz 0x3faae4
  03fab10  fadds 7, 7, 8
  03fab14  fmadds 7, 7, 31, 2
  03fab18  fcmpu 0, 1, 8
  03fab1c  fneg 7, 7
  03fab20  cror 6, 0, 2
  03fab24  bt 6, 0x3fab30
  03fab28  fmr 1, 8
  03fab2c  b 0x3fab4c
  03fab30  lis 3, 64
  03fab34  addi 3, 3, -24196
  03fab38  lfs 2, 12(3)
  03fab3c  fcmpu 0, 1, 2
  03fab40  cror 6, 1, 2
  03fab44  bt 6, 0x3fab4c
  03fab48  fmr 1, 2
  03fab4c  lis 3, 64
  03fab50  addi 3, 3, -24196
  03fab54  lfs 2, 24(3)
  03fab58  fcmpu 0, 7, 2
  03fab5c  cror 6, 0, 2
  03fab60  bt 6, 0x3fab6c
  03fab64  fmr 7, 2
  03fab68  b 0x3fab88
  03fab6c  lis 3, 64
  03fab70  addi 3, 3, -24196
  03fab74  lfs 2, 28(3)
  03fab78  fcmpu 0, 7, 2
  03fab7c  cror 6, 1, 2
  03fab80  bt 6, 0x3fab88
  03fab84  fmr 7, 2
  03fab88  stfs 1, 660(30)
  03fab8c  stfs 7, 664(30)
  03fab90  lis 3, 64
  03fab94  lis 29, 114
  03fab98  addi 3, 3, -24196
  03fab9c  addic 4, 30, 304
  03faba0  li 5, 1
  03faba4  lfs 31, 32(3)
  03faba8  lfs 30, 36(3)
  03fabac  lfs 3, -3060(29)
  03fabb0  ori 3, 31, 0
  03fabb4  fmuls 2, 3, 30
  03fabb8  fmuls 1, 3, 31
  03fabbc  bl 0x1167c8
  03fabc0  nop
  03fabc4  lfs 2, -3060(29)
  03fabc8  addic 4, 30, 432
  03fabcc  fmuls 1, 2, 31
  03fabd0  fmuls 2, 2, 30
  03fabd4  ori 3, 31, 0
  03fabd8  li 5, 2
  03fabdc  bl 0x1167c8
  03fabe0  nop
  03fabe4  lfs 2, -3060(29)
  03fabe8  addic 4, 30, 560
  03fabec  fmuls 1, 2, 31
  03fabf0  ori 3, 31, 0
  03fabf4  fmuls 2, 2, 30
  03fabf8  li 5, 3
  03fabfc  bl 0x1167c8
  03fac00  nop
  03fac04  ld 0, 496(1)
  03fac08  mtlr 0
  03fac0c  lfd 19, 376(1)
  03fac10  lfd 20, 384(1)
  03fac14  lfd 21, 392(1)
  03fac18  lfd 22, 400(1)
  03fac1c  lfd 23, 408(1)
  03fac20  lfd 24, 416(1)
  03fac24  lfd 25, 424(1)
  03fac28  lfd 26, 432(1)
  03fac2c  lfd 27, 440(1)
  03fac30  lfd 28, 448(1)
  03fac34  lfd 29, 456(1)
  03fac38  lfd 30, 464(1)
  03fac3c  lfd 31, 472(1)
  03fac40  ld 29, 352(1)
  03fac44  ld 30, 360(1)
  03fac48  ld 31, 368(1)
  03fac4c  addi 1, 1, 480
  03fac50  blr

M638_003fac98:   # 0x3fac98, 0x4d8 bytes
  03fac98  stdu 1, -368(1)
  03fac9c  mflr 0
  03faca0  std 0, 384(1)
  03faca4  stfd 22, 288(1)
  03faca8  stfd 23, 296(1)
  03facac  stfd 24, 304(1)
  03facb0  stfd 25, 312(1)
  03facb4  stfd 26, 320(1)
  03facb8  stfd 27, 328(1)
  03facbc  stfd 28, 336(1)
  03facc0  stfd 29, 344(1)
  03facc4  stfd 30, 352(1)
  03facc8  stfd 31, 360(1)
  03faccc  std 29, 264(1)
  03facd0  lis 4, 64
  03facd4  std 31, 280(1)
  03facd8  addic 29, 1, 144
  03facdc  std 28, 256(1)
  03face0  ori 31, 3, 0
  03face4  addi 28, 4, -21420
  03face8  ori 5, 29, 0
  03facec  std 30, 272(1)
  03facf0  std 27, 248(1)
  03facf4  std 26, 240(1)
  03facf8  std 25, 232(1)
  03facfc  std 24, 224(1)
  03fad00  li 4, 2
  03fad04  bl 0xf1114
  03fad08  nop
  03fad0c  lis 3, 149
  03fad10  lfs 1, 148(1)
  03fad14  addic 3, 3, 5056
  03fad18  lfs 2, 144(1)
  03fad1c  lfs 3, 152(1)
  03fad20  lfs 4, 324(3)
  03fad24  lfs 5, 320(3)
  03fad28  fsubs 1, 4, 1
  03fad2c  fsubs 2, 5, 2
  03fad30  lfs 4, 328(3)
  03fad34  fsubs 3, 4, 3
  03fad38  li 30, 0
  03fad3c  lfs 31, 0(28)
  03fad40  li 27, 10
  03fad44  fmuls 1, 1, 1
  03fad48  stw 30, 140(1)
  03fad4c  stw 30, 136(1)
  03fad50  stw 30, 132(1)
  03fad54  stw 30, 128(1)
  03fad58  lfs 30, 4(28)
  03fad5c  fmadds 1, 2, 2, 1
  03fad60  fmadds 29, 3, 3, 1
  03fad64  fsqrts 29, 29
  03fad68  fcmpu 0, 29, 30
  03fad6c  cror 6, 1, 2
  03fad70  bt 6, 0x3fad84
  03fad74  fmr 1, 29
  03fad78  bl 0x502758
  03fad7c  nop
  03fad80  addic 27, 3, 2
  03fad84  lis 3, 64
  03fad88  cmpwi 27, 0
  03fad8c  addi 3, 3, -21420
  03fad90  lfs 1, 8(3)
  03fad94  fsubs 2, 1, 29
  03fad98  fsub 1, 29, 1
  03fad9c  fsel 31, 1, 31, 2
  03fada0  bf 1, 0x3faf4c
  03fada4  lis 3, 64
  03fada8  ori 28, 30, 0
  03fadac  addi 3, 3, -21420
  03fadb0  lfs 23, 12(3)
  03fadb4  lfs 24, 16(3)
  03fadb8  lfs 25, 20(3)
  03fadbc  lfs 26, 24(3)
  03fadc0  lfs 27, 28(3)
  03fadc4  lfs 28, 32(3)
  03fadc8  fmr 1, 30
  03fadcc  fmr 2, 23
  03fadd0  bl 0xfcbe8
  03fadd4  nop
  03fadd8  lis 3, 114
  03faddc  lis 5, 20224
  03fade0  lis 4, 20224
  03fade4  lis 6, 12287
  03fade8  ori 4, 4, 28671
  03fadec  lfs 2, -3052(3)
  03fadf0  ori 3, 5, 36863
  03fadf4  lis 5, 20224
  03fadf8  ori 6, 6, 65535
  03fadfc  fmuls 3, 2, 31
  03fae00  ori 5, 5, 32767
  03fae04  stw 3, 160(1)
  03fae08  stw 3, 164(1)
  03fae0c  lis 3, 12032
  03fae10  stw 4, 172(1)
  03fae14  lis 4, 12032
  03fae18  stw 6, 176(1)
  03fae1c  ori 3, 3, 24447
  03fae20  stw 5, 168(1)
  03fae24  ori 4, 4, 20351
  03fae28  lis 5, 12032
  03fae2c  stw 6, 180(1)
  03fae30  lis 6, 12032
  03fae34  fmsubs 22, 1, 2, 3
  03fae38  ori 5, 5, 16255
  03fae3c  stw 3, 184(1)
  03fae40  stw 4, 188(1)
  03fae44  li 3, 6
  03fae48  ori 4, 6, 79
  03fae4c  lis 6, 12032
  03fae50  stw 5, 192(1)
  03fae54  lis 5, 16128
  03fae58  stw 4, 196(1)
  03fae5c  stw 6, 200(1)
  03fae60  stw 5, 204(1)
  03fae64  bl 0xfc620
  03fae68  nop
  03fae6c  sldi 3, 3, 2
  03fae70  addc 3, 3, 1
  03fae74  clrldi 4, 3, 32
  03fae78  li 3, 6
  03fae7c  lwz 4, 160(4)
  03fae80  extsw 26, 4
  03fae84  bl 0xfc620
  03fae88  nop
  03fae8c  lis 25, 114
  03fae90  sldi 3, 3, 2
  03fae94  addc 3, 3, 1
  03fae98  lfs 1, -3056(25)
  03fae9c  clrldi 3, 3, 32
  03faea0  fmuls 2, 1, 25
  03faea4  fmuls 1, 1, 26
  03faea8  lwz 3, 184(3)
  03faeac  extsw 24, 3
  03faeb0  fctiwz 2, 2
  03faeb4  fctiwz 1, 1
  03faeb8  stfd 2, 208(1)
  03faebc  lwz 3, 212(1)
  03faec0  stfd 1, 208(1)
  03faec4  lwz 4, 212(1)
  03faec8  extsw 3, 3
  03faecc  extsw 4, 4
  03faed0  bl 0xfe484
  03faed4  nop
  03faed8  lfs 1, -3056(25)
  03faedc  ori 25, 3, 0
  03faee0  fmuls 2, 1, 27
  03faee4  fmuls 1, 1, 28
  03faee8  fctiwz 2, 2
  03faeec  fctiwz 1, 1
  03faef0  stfd 2, 208(1)
  03faef4  lwz 3, 212(1)
  03faef8  stfd 1, 208(1)
  03faefc  extsw 3, 3
  03faf00  lwz 4, 212(1)
  03faf04  extsw 4, 4
  03faf08  bl 0xfe484
  03faf0c  nop
  03faf10  ori 9, 3, 0
  03faf14  std 30, 112(1)
  03faf18  ori 8, 25, 0
  03faf1c  fmr 1, 24
  03faf20  addic 4, 1, 128
  03faf24  fmr 2, 22
  03faf28  ori 3, 29, 0
  03faf2c  std 30, 120(1)
  03faf30  ori 5, 26, 0
  03faf34  ori 6, 24, 0
  03faf38  bl 0x123390
  03faf3c  nop
  03faf40  addic 28, 28, 1
  03faf44  cmpw 28, 27
  03faf48  bt 0, 0x3fadc8
  03faf4c  lis 3, 161
  03faf50  lis 4, 16243
  03faf54  ori 4, 4, 13107
  03faf58  lwz 3, 1812(3)
  03faf5c  srawi 5, 3, 31
  03faf60  srwi 6, 5, 1
  03faf64  xor 3, 6, 3
  03faf68  subc 3, 3, 5
  03faf6c  cmpw 3, 4
  03faf70  bf 0, 0x3fb030
  03faf74  lis 3, 64
  03faf78  addi 3, 3, -21420
  03faf7c  lfs 1, 36(3)
  03faf80  fcmpu 0, 29, 1
  03faf84  cror 6, 0, 2
  03faf88  bt 6, 0x3fb030
  03faf8c  lis 3, 64
  03faf90  lis 28, 114
  03faf94  addi 30, 3, -21420
  03faf98  li 26, 32
  03faf9c  addic 27, 1, 128
  03fafa0  ori 3, 31, 0
  03fafa4  ori 4, 29, 0
  03fafa8  lfs 1, 20(30)
  03fafac  ori 5, 27, 0
  03fafb0  lfs 2, -3056(28)
  03fafb4  li 8, 127
  03fafb8  lfs 3, 40(30)
  03fafbc  li 9, 127
  03fafc0  fmuls 2, 2, 1
  03fafc4  std 26, 112(1)
  03fafc8  fmr 31, 3
  03fafcc  li 10, 127
  03fafd0  fctiwz 2, 2
  03fafd4  fmr 1, 31
  03fafd8  stfd 2, 208(1)
  03fafdc  lwz 7, 212(1)
  03fafe0  extsw 7, 7
  03fafe4  bl 0x1d4d88
  03fafe8  nop
  03fafec  lfs 2, 44(30)
  03faff0  lfs 3, -3056(28)
  03faff4  ori 3, 31, 0
  03faff8  std 26, 112(1)
  03faffc  fmr 1, 31
  03fb000  fmuls 2, 3, 2
  03fb004  ori 4, 29, 0
  03fb008  ori 5, 27, 0
  03fb00c  li 8, 127
  03fb010  li 9, 32
  03fb014  li 10, 0
  03fb018  fctiwz 2, 2
  03fb01c  stfd 2, 208(1)
  03fb020  lwz 7, 212(1)
  03fb024  extsw 7, 7
  03fb028  bl 0x1d4d88
  03fb02c  nop
  03fb030  lis 3, 64
  03fb034  lis 28, 114
  03fb038  addi 30, 3, -21420
  03fb03c  li 6, 48
  03fb040  addic 27, 1, 128
  03fb044  ori 3, 31, 0
  03fb048  ori 4, 29, 0
  03fb04c  lfs 2, 24(30)
  03fb050  lfs 3, -3056(28)
  03fb054  ori 5, 27, 0
  03fb058  lfs 1, 40(30)
  03fb05c  li 8, 127
  03fb060  fmuls 2, 3, 2
  03fb064  std 6, 112(1)
  03fb068  li 9, 64
  03fb06c  li 10, 0
  03fb070  fctiwz 2, 2
  03fb074  stfd 2, 208(1)
  03fb078  lwz 7, 212(1)
  03fb07c  extsw 7, 7
  03fb080  bl 0x1d4d88
  03fb084  nop
  03fb088  lfs 2, 52(30)
  03fb08c  li 6, 64
  03fb090  lfs 3, -3056(28)
  03fb094  ori 3, 31, 0
  03fb098  lfs 1, 48(30)
  03fb09c  ori 4, 29, 0
  03fb0a0  fmuls 2, 3, 2
  03fb0a4  ori 5, 27, 0
  03fb0a8  std 6, 112(1)
  03fb0ac  li 8, 96
  03fb0b0  li 9, 16
  03fb0b4  li 10, 0
  03fb0b8  fctiwz 2, 2
  03fb0bc  stfd 2, 208(1)
  03fb0c0  lwz 7, 212(1)
  03fb0c4  extsw 7, 7
  03fb0c8  bl 0x1d4d88
  03fb0cc  nop
  03fb0d0  lfs 2, 60(30)
  03fb0d4  li 6, 32
  03fb0d8  lfs 3, -3056(28)
  03fb0dc  ori 3, 31, 0
  03fb0e0  lfs 1, 56(30)
  03fb0e4  ori 4, 29, 0
  03fb0e8  fmuls 2, 3, 2
  03fb0ec  ori 5, 27, 0
  03fb0f0  std 6, 112(1)
  03fb0f4  li 8, 32
  03fb0f8  li 9, 0
  03fb0fc  li 10, 0
  03fb100  fctiwz 2, 2
  03fb104  stfd 2, 208(1)
  03fb108  lwz 7, 212(1)
  03fb10c  extsw 7, 7
  03fb110  bl 0x1d4d88
  03fb114  nop
  03fb118  ld 0, 384(1)
  03fb11c  mtlr 0
  03fb120  lfd 22, 288(1)
  03fb124  lfd 23, 296(1)
  03fb128  lfd 24, 304(1)
  03fb12c  lfd 25, 312(1)
  03fb130  lfd 26, 320(1)
  03fb134  lfd 27, 328(1)
  03fb138  lfd 28, 336(1)
  03fb13c  lfd 29, 344(1)
  03fb140  lfd 30, 352(1)
  03fb144  lfd 31, 360(1)
  03fb148  ld 24, 224(1)
  03fb14c  ld 25, 232(1)
  03fb150  ld 26, 240(1)
  03fb154  ld 27, 248(1)
  03fb158  ld 28, 256(1)
  03fb15c  ld 29, 264(1)
  03fb160  ld 30, 272(1)
  03fb164  ld 31, 280(1)
  03fb168  addi 1, 1, 368
  03fb16c  blr

M638_003fb180:   # 0x3fb180, 0x158 bytes
  03fb180  stdu 1, -160(1)
  03fb184  mflr 0
  03fb188  std 0, 176(1)
  03fb18c  stfd 30, 144(1)
  03fb190  stfd 31, 152(1)
  03fb194  std 31, 136(1)
  03fb198  std 30, 128(1)
  03fb19c  ori 31, 4, 0
  03fb1a0  lwz 30, 120(3)
  03fb1a4  lis 5, 114
  03fb1a8  lfs 1, 4(31)
  03fb1ac  lfs 2, 0(31)
  03fb1b0  lfs 3, 708(30)
  03fb1b4  lfs 4, 704(30)
  03fb1b8  fsubs 1, 3, 1
  03fb1bc  fsubs 2, 4, 2
  03fb1c0  lfs 3, 712(30)
  03fb1c4  lfs 4, 8(31)
  03fb1c8  fsubs 3, 3, 4
  03fb1cc  lis 3, 64
  03fb1d0  lis 6, 114
  03fb1d4  addi 4, 3, -20112
  03fb1d8  fmuls 1, 1, 1
  03fb1dc  li 3, 0
  03fb1e0  lfs 30, 0(4)
  03fb1e4  stw 3, 112(1)
  03fb1e8  addic 3, 1, 112
  03fb1ec  fmadds 1, 2, 2, 1
  03fb1f0  fmadds 1, 3, 3, 1
  03fb1f4  fsqrts 31, 1
  03fb1f8  lfs 1, 4(4)
  03fb1fc  lfs 3, -3048(5)
  03fb200  lfs 4, 8(4)
  03fb204  addic 5, 30, 724
  03fb208  lfs 5, -3052(6)
  03fb20c  fmuls 2, 3, 1
  03fb210  fmuls 4, 5, 4
  03fb214  fmr 3, 2
  03fb218  fmr 1, 31
  03fb21c  bl 0x109c30
  03fb220  nop
  03fb224  lfs 1, 4(31)
  03fb228  lfs 2, 708(30)
  03fb22c  lfs 3, 0(31)
  03fb230  fsubs 4, 1, 2
  03fb234  lfs 5, 704(30)
  03fb238  lfs 1, 8(31)
  03fb23c  lfs 6, 712(30)
  03fb240  fsubs 3, 3, 5
  03fb244  fsubs 7, 1, 6
  03fb248  lfs 9, 724(30)
  03fb24c  fmuls 1, 4, 4
  03fb250  fmadds 1, 3, 3, 1
  03fb254  fmadds 1, 7, 7, 1
  03fb258  fsqrts 8, 1
  03fb25c  fmr 1, 31
  03fb260  fdivs 9, 9, 8
  03fb264  fsub 10, 30, 8
  03fb268  fsub 11, 30, 8
  03fb26c  fsub 12, 30, 8
  03fb270  fsub 13, 8, 30
  03fb274  fsub 0, 8, 30
  03fb278  fsub 8, 8, 30
  03fb27c  fmuls 7, 7, 9
  03fb280  fmuls 4, 4, 9
  03fb284  fmuls 3, 3, 9
  03fb288  fsel 9, 10, 30, 7
  03fb28c  fsel 10, 11, 30, 4
  03fb290  fsel 11, 12, 30, 3
  03fb294  fsel 7, 13, 9, 7
  03fb298  fsel 4, 0, 10, 4
  03fb29c  fsel 3, 8, 11, 3
  03fb2a0  fadds 6, 6, 7
  03fb2a4  fadds 2, 2, 4
  03fb2a8  fadds 3, 5, 3
  03fb2ac  stfs 6, 712(30)
  03fb2b0  stfs 2, 708(30)
  03fb2b4  stfs 3, 704(30)
  03fb2b8  ld 0, 176(1)
  03fb2bc  mtlr 0
  03fb2c0  lfd 30, 144(1)
  03fb2c4  lfd 31, 152(1)
  03fb2c8  ld 30, 128(1)
  03fb2cc  ld 31, 136(1)
  03fb2d0  addi 1, 1, 160
  03fb2d4  blr

M638_003fb2e8:   # 0x3fb2e8, 0x370 bytes
  03fb2e8  stdu 1, -208(1)
  03fb2ec  mflr 0
  03fb2f0  std 0, 224(1)
  03fb2f4  stfd 30, 192(1)
  03fb2f8  stfd 31, 200(1)
  03fb2fc  lwz 5, 120(3)
  03fb300  lfs 1, 16(3)
  03fb304  lis 4, 165
  03fb308  addic 4, 4, 7136
  03fb30c  lwz 6, 288(5)
  03fb310  lhz 5, 768(5)
  03fb314  slwi 6, 6, 2
  03fb318  extsh 5, 5
  03fb31c  lfs 2, 20(3)
  03fb320  extsw 6, 6
  03fb324  std 31, 184(1)
  03fb328  sldi 5, 5, 4
  03fb32c  ori 31, 3, 0
  03fb330  lwzx 4, 4, 6
  03fb334  addc 4, 4, 5
  03fb338  clrldi 4, 4, 32
  03fb33c  lis 5, 64
  03fb340  lfs 3, 16(4)
  03fb344  lfs 4, 20(4)
  03fb348  fsubs 1, 3, 1
  03fb34c  fsubs 2, 4, 2
  03fb350  addi 4, 5, -19752
  03fb354  lis 5, 115
  03fb358  addic 5, 5, 22784
  03fb35c  fabs 5, 1
  03fb360  fabs 4, 2
  03fb364  stfs 1, 112(1)
  03fb368  stfs 2, 116(1)
  03fb36c  fsubs 1, 5, 4
  03fb370  stfs 1, 120(1)
  03fb374  lwz 6, 112(1)
  03fb378  lfs 31, 0(4)
  03fb37c  lfs 1, 112(1)
  03fb380  lwz 7, 116(1)
  03fb384  fabs 2, 1
  03fb388  lfs 1, 116(1)
  03fb38c  rlwinm 7, 7, 3, 29, 29
  03fb390  fabs 6, 1
  03fb394  lfs 1, 72(3)
  03fb398  lwz 3, 120(1)
  03fb39c  lfs 3, 120(1)
  03fb3a0  rlwimi 7, 3, 2, 30, 30
  03fb3a4  fsub 7, 3, 31
  03fb3a8  ori 3, 5, 0
  03fb3ac  fsub 8, 3, 31
  03fb3b0  rlwimi 7, 6, 4, 28, 28
  03fb3b4  rlwimi 3, 7, 2, 26, 28
  03fb3b8  slwi 6, 7, 2
  03fb3bc  clrldi 3, 3, 32
  03fb3c0  lfsx 3, 5, 6
  03fb3c4  fsel 4, 7, 2, 4
  03fb3c8  lfs 2, 4(3)
  03fb3cc  fsel 5, 8, 6, 5
  03fb3d0  lfs 30, 4(4)
  03fb3d4  fcmpu 0, 4, 31
  03fb3d8  bt 1, 0x3fb3e4
  03fb3dc  fmr 3, 31
  03fb3e0  b 0x3fb500
  03fb3e4  fsubs 6, 5, 4
  03fb3e8  fadds 4, 5, 4
  03fb3ec  addic 6, 1, 16
  03fb3f0  li 3, 2
  03fb3f4  addic 5, 6, 108
  03fb3f8  addic 4, 6, 124
  03fb3fc  mtctr 3
  03fb400  fdivs 4, 6, 4
  03fb404  fmuls 6, 4, 4
  03fb408  stfs 4, 136(1)
  03fb40c  stfs 4, 128(1)
  03fb410  stfs 4, 132(1)
  03fb414  stfs 4, 124(1)
  03fb418  lfs 7, 136(1)
  03fb41c  lfs 8, 128(1)
  03fb420  lfs 9, 132(1)
  03fb424  fmuls 4, 6, 6
  03fb428  fmuls 8, 8, 6
  03fb42c  fmuls 7, 7, 4
  03fb430  fmuls 5, 4, 4
  03fb434  fmuls 4, 9, 4
  03fb438  stfs 8, 128(1)
  03fb43c  fmuls 6, 7, 6
  03fb440  stfs 4, 132(1)
  03fb444  stfs 6, 136(1)
  03fb448  lfs 4, 108(6)
  03fb44c  fmuls 4, 4, 5
  03fb450  stfs 4, 124(6)
  03fb454  lfs 4, 4(5)
  03fb458  addic 6, 6, 8
  03fb45c  addic 5, 5, 8
  03fb460  fmuls 4, 4, 5
  03fb464  stfs 4, 4(4)
  03fb468  addic 4, 4, 8
  03fb46c  bdnz 0x3fb448
  03fb470  ori 7, 1, 0
  03fb474  lis 6, 115
  03fb478  li 8, 4
  03fb47c  addic 5, 7, 124
  03fb480  addic 6, 6, 22752
  03fb484  ori 4, 5, 0
  03fb488  mtctr 8
  03fb48c  lfs 4, 124(7)
  03fb490  lfs 5, 0(6)
  03fb494  fmuls 4, 4, 5
  03fb498  lfs 5, 4(6)
  03fb49c  addic 6, 6, 8
  03fb4a0  stfs 4, 124(7)
  03fb4a4  lfs 4, 4(5)
  03fb4a8  addic 7, 7, 8
  03fb4ac  fmuls 4, 4, 5
  03fb4b0  stfs 4, 4(5)
  03fb4b4  addic 5, 5, 8
  03fb4b8  bdnz 0x3fb48c
  03fb4bc  ori 5, 3, 0
  03fb4c0  fmr 4, 31
  03fb4c4  ori 3, 1, 0
  03fb4c8  mtctr 5
  03fb4cc  lfs 5, 124(3)
  03fb4d0  fadds 4, 4, 5
  03fb4d4  lfs 5, 4(4)
  03fb4d8  addic 3, 3, 16
  03fb4dc  lfs 6, 8(4)
  03fb4e0  lfs 7, 12(4)
  03fb4e4  addic 4, 4, 16
  03fb4e8  fadds 4, 4, 5
  03fb4ec  fadds 4, 4, 6
  03fb4f0  fadds 4, 4, 7
  03fb4f4  bdnz 0x3fb4cc
  03fb4f8  fadds 4, 4, 30
  03fb4fc  fmadds 3, 4, 3, 2
  03fb500  fmr 2, 1
  03fb504  fmr 1, 3
  03fb508  bl 0x5025e0
  03fb50c  nop
  03fb510  lis 3, 64
  03fb514  lis 4, 114
  03fb518  fmr 3, 1
  03fb51c  addi 3, 3, -19752
  03fb520  lfs 1, 8(3)
  03fb524  lfs 2, -3056(4)
  03fb528  lhz 4, 52(31)
  03fb52c  fmuls 1, 2, 1
  03fb530  fcmpu 0, 3, 30
  03fb534  lbz 3, 83(31)
  03fb538  fctiwz 1, 1
  03fb53c  cror 6, 1, 2
  03fb540  stfd 1, 160(1)
  03fb544  lwz 5, 164(1)
  03fb548  extsw 5, 5
  03fb54c  bt 6, 0x3fb58c
  03fb550  lis 6, 64
  03fb554  addi 6, 6, -19752
  03fb558  lfs 1, 12(6)
  03fb55c  fcmpu 0, 3, 1
  03fb560  cror 6, 0, 2
  03fb564  bt 6, 0x3fb58c
  03fb568  cmpwi 3, 1
  03fb56c  bt 2, 0x3fb63c
  03fb570  ori 6, 5, 0
  03fb574  ori 3, 31, 0
  03fb578  li 4, 1
  03fb57c  li 5, 0
  03fb580  bl 0xfddc0
  03fb584  nop
  03fb588  b 0x3fb63c
  03fb58c  fcmpu 0, 3, 31
  03fb590  cror 6, 1, 2
  03fb594  bt 6, 0x3fb5ec
  03fb598  rlwinm 4, 4, 0, 16, 16
  03fb59c  cmpwi 4, 0
  03fb5a0  bt 2, 0x3fb5c8
  03fb5a4  cmpwi 3, 4
  03fb5a8  bt 2, 0x3fb63c
  03fb5ac  ori 6, 5, 0
  03fb5b0  ori 3, 31, 0
  03fb5b4  li 4, 4
  03fb5b8  li 5, 0
  03fb5bc  bl 0xfddc0
  03fb5c0  nop
  03fb5c4  b 0x3fb63c
  03fb5c8  cmpwi 3, 5
  03fb5cc  bt 2, 0x3fb63c
  03fb5d0  ori 6, 5, 0
  03fb5d4  ori 3, 31, 0
  03fb5d8  li 4, 5
  03fb5dc  li 5, 0
  03fb5e0  bl 0xfddc0
  03fb5e4  nop
  03fb5e8  b 0x3fb63c
  03fb5ec  rlwinm 4, 4, 0, 16, 16
  03fb5f0  cmpwi 4, 0
  03fb5f4  bt 2, 0x3fb61c
  03fb5f8  cmpwi 3, 5
  03fb5fc  bt 2, 0x3fb63c
  03fb600  ori 6, 5, 0
  03fb604  ori 3, 31, 0
  03fb608  li 4, 5
  03fb60c  li 5, 0
  03fb610  bl 0xfddc0
  03fb614  nop
  03fb618  b 0x3fb63c
  03fb61c  cmpwi 3, 4
  03fb620  bt 2, 0x3fb63c
  03fb624  ori 6, 5, 0
  03fb628  ori 3, 31, 0
  03fb62c  li 4, 4
  03fb630  li 5, 0
  03fb634  bl 0xfddc0
  03fb638  nop
  03fb63c  ld 0, 224(1)
  03fb640  mtlr 0
  03fb644  lfd 30, 192(1)
  03fb648  lfd 31, 200(1)
  03fb64c  ld 31, 184(1)
  03fb650  addi 1, 1, 208
  03fb654  blr

M638_003fb658:   # 0x3fb658, 0x140 bytes
  03fb658  stdu 1, -160(1)
  03fb65c  mflr 0
  03fb660  std 0, 176(1)
  03fb664  stfd 30, 144(1)
  03fb668  stfd 31, 152(1)
  03fb66c  std 31, 136(1)
  03fb670  ori 31, 3, 0
  03fb674  ori 3, 5, 0
  03fb678  ori 5, 31, 0
  03fb67c  lbz 31, 33(31)
  03fb680  std 30, 128(1)
  03fb684  cmpwi 31, 255
  03fb688  bf 2, 0x3fb6dc
  03fb68c  extsw 4, 4
  03fb690  extsw 3, 3
  03fb694  std 4, 112(1)
  03fb698  lwz 31, 120(5)
  03fb69c  lfd 1, 112(1)
  03fb6a0  std 3, 112(1)
  03fb6a4  fcfid 1, 1
  03fb6a8  frsp 1, 1
  03fb6ac  lfd 2, 112(1)
  03fb6b0  fcfid 2, 2
  03fb6b4  frsp 2, 2
  03fb6b8  bl 0xfcbe8
  03fb6bc  nop
  03fb6c0  lis 3, 114
  03fb6c4  lfs 2, -3056(3)
  03fb6c8  fmuls 1, 1, 2
  03fb6cc  bl 0x502758
  03fb6d0  nop
  03fb6d4  stw 3, 736(31)
  03fb6d8  b 0x3fb778
  03fb6dc  extsw 4, 4
  03fb6e0  rlwinm 5, 31, 2, 22, 29
  03fb6e4  extsw 3, 3
  03fb6e8  std 4, 112(1)
  03fb6ec  lis 4, 165
  03fb6f0  addic 4, 4, -28284
  03fb6f4  lwzx 31, 4, 5
  03fb6f8  lfd 1, 112(1)
  03fb6fc  std 3, 112(1)
  03fb700  fcfid 30, 1
  03fb704  frsp 30, 30
  03fb708  lfd 1, 112(1)
  03fb70c  fcfid 31, 1
  03fb710  frsp 31, 31
  03fb714  lis 3, 164
  03fb718  lhz 4, 0(31)
  03fb71c  rlwinm 4, 4, 8, 9, 23
  03fb720  lwz 3, -28512(3)
  03fb724  addc 3, 3, 4
  03fb728  clrldi 3, 3, 32
  03fb72c  lbz 4, 32(3)
  03fb730  cmpwi 4, 128
  03fb734  bf 0, 0x3fb764
  03fb738  fmr 1, 30
  03fb73c  lwz 30, 120(3)
  03fb740  fmr 2, 31
  03fb744  bl 0xfcbe8
  03fb748  nop
  03fb74c  lis 3, 114
  03fb750  lfs 2, -3056(3)
  03fb754  fmuls 1, 1, 2
  03fb758  bl 0x502758
  03fb75c  nop
  03fb760  stw 3, 736(30)
  03fb764  lhz 3, 0(31)
  03fb768  addic 31, 31, 2
  03fb76c  extsh 3, 3
  03fb770  cmpwi 3, 0
  03fb774  bf 0, 0x3fb714
  03fb778  ld 0, 176(1)
  03fb77c  mtlr 0
  03fb780  lfd 30, 144(1)
  03fb784  lfd 31, 152(1)
  03fb788  ld 30, 128(1)
  03fb78c  ld 31, 136(1)
  03fb790  addi 1, 1, 160
  03fb794  blr

M638_003fb7c8:   # 0x3fb7c8, 0x980 bytes
  03fb7c8  stdu 1, -288(1)
  03fb7cc  mflr 0
  03fb7d0  std 0, 304(1)
  03fb7d4  stfd 29, 264(1)
  03fb7d8  stfd 30, 272(1)
  03fb7dc  stfd 31, 280(1)
  03fb7e0  std 31, 256(1)
  03fb7e4  ori 31, 3, 0
  03fb7e8  lis 3, 64
  03fb7ec  li 8, 0
  03fb7f0  addi 6, 3, -18536
  03fb7f4  ori 3, 31, 0
  03fb7f8  lwz 7, 36(31)
  03fb7fc  std 27, 224(1)
  03fb800  lis 4, 51
  03fb804  lwz 27, 120(31)
  03fb808  li 5, 0
  03fb80c  lfs 1, 36(7)
  03fb810  stfs 1, 44(31)
  03fb814  lfs 31, 0(6)
  03fb818  std 30, 248(1)
  03fb81c  std 29, 240(1)
  03fb820  std 28, 232(1)
  03fb824  std 26, 216(1)
  03fb828  stw 8, 116(1)
  03fb82c  bl 0x10675c
  03fb830  nop
  03fb834  ori 30, 3, 0
  03fb838  cmpwi 30, 0
  03fb83c  bt 2, 0x3fb85c
  03fb840  lwz 3, 32(30)
  03fb844  cmpwi 3, 0
  03fb848  bt 2, 0x3fb85c
  03fb84c  lhz 3, 166(3)
  03fb850  cmpwi 3, 49
  03fb854  bf 2, 0x3fb85c
  03fb858  li 30, 0
  03fb85c  ori 4, 30, 0
  03fb860  addic 5, 27, 32
  03fb864  li 6, 0
  03fb868  addic 7, 1, 112
  03fb86c  li 9, 0
  03fb870  addic 8, 1, 116
  03fb874  ori 3, 31, 0
  03fb878  li 10, 4
  03fb87c  bl 0x106840
  03fb880  nop
  03fb884  lwz 4, 112(1)
  03fb888  ori 29, 3, 0
  03fb88c  cmpwi 4, 1
  03fb890  bt 2, 0x3fbfa0
  03fb894  lbz 3, 32(31)
  03fb898  cmpwi 3, 9
  03fb89c  bt 2, 0x3fbfa0
  03fb8a0  lbz 28, 33(31)
  03fb8a4  cmpwi 28, 255
  03fb8a8  bf 2, 0x3fb8e4
  03fb8ac  lis 3, 64
  03fb8b0  lwz 28, 120(31)
  03fb8b4  addi 3, 3, -18536
  03fb8b8  lfs 1, 4(3)
  03fb8bc  lfs 2, 8(3)
  03fb8c0  bl 0xfcbe8
  03fb8c4  nop
  03fb8c8  lis 3, 114
  03fb8cc  lfs 2, -3056(3)
  03fb8d0  fmuls 1, 1, 2
  03fb8d4  bl 0x502758
  03fb8d8  nop
  03fb8dc  stw 3, 736(28)
  03fb8e0  b 0x3fb968
  03fb8e4  lis 3, 165
  03fb8e8  lis 5, 64
  03fb8ec  rlwinm 4, 28, 2, 22, 29
  03fb8f0  addic 3, 3, -28284
  03fb8f4  addi 5, 5, -18536
  03fb8f8  lwzx 28, 3, 4
  03fb8fc  lfs 30, 4(5)
  03fb900  lfs 29, 8(5)
  03fb904  lis 3, 164
  03fb908  lhz 4, 0(28)
  03fb90c  rlwinm 4, 4, 8, 9, 23
  03fb910  lwz 3, -28512(3)
  03fb914  addc 3, 3, 4
  03fb918  clrldi 3, 3, 32
  03fb91c  lbz 4, 32(3)
  03fb920  cmpwi 4, 128
  03fb924  bf 0, 0x3fb954
  03fb928  fmr 1, 30
  03fb92c  lwz 26, 120(3)
  03fb930  fmr 2, 29
  03fb934  bl 0xfcbe8
  03fb938  nop
  03fb93c  lis 3, 114
  03fb940  lfs 2, -3056(3)
  03fb944  fmuls 1, 1, 2
  03fb948  bl 0x502758
  03fb94c  nop
  03fb950  stw 3, 736(26)
  03fb954  lhz 3, 0(28)
  03fb958  addic 28, 28, 2
  03fb95c  extsh 3, 3
  03fb960  cmpwi 3, 0
  03fb964  bf 0, 0x3fb904
  03fb968  cmpwi 30, 0
  03fb96c  bt 2, 0x3fb990
  03fb970  lwz 3, 32(30)
  03fb974  cmpwi 3, 0
  03fb978  bt 2, 0x3fb990
  03fb97c  lhz 3, 166(3)
  03fb980  cmpwi 3, 71
  03fb984  bt 2, 0x3fb990
  03fb988  li 3, 0
  03fb98c  stw 3, 776(27)
  03fb990  lfs 1, 32(27)
  03fb994  lfs 2, 116(1)
  03fb998  fsubs 1, 1, 2
  03fb99c  fcmpu 0, 1, 31
  03fb9a0  stfs 1, 32(27)
  03fb9a4  bt 1, 0x3fb9ac
  03fb9a8  li 29, 1
  03fb9ac  lis 3, 64
  03fb9b0  addi 28, 3, -18536
  03fb9b4  lfs 1, 12(28)
  03fb9b8  bl 0x502758
  03fb9bc  nop
  03fb9c0  stw 3, 144(27)
  03fb9c4  lis 3, 16128
  03fb9c8  lis 4, 114
  03fb9cc  cmpwi 29, 2
  03fb9d0  stw 3, 152(27)
  03fb9d4  lfs 30, 16(28)
  03fb9d8  li 3, 0
  03fb9dc  lfs 1, -3048(4)
  03fb9e0  li 4, 1
  03fb9e4  fmuls 1, 1, 30
  03fb9e8  stw 3, 132(27)
  03fb9ec  stb 3, 173(27)
  03fb9f0  stw 4, 148(27)
  03fb9f4  stfs 1, 128(27)
  03fb9f8  bt 1, 0x3fba10
  03fb9fc  cmpwi 29, -1
  03fba00  cmpwi 1, 29, 0
  03fba04  bf 1, 0x3fbf90
  03fba08  bf 5, 0x3fbf90
  03fba0c  b 0x3fbc88
  03fba10  cmpwi 29, 10
  03fba14  cmpwi 1, 29, 8
  03fba18  bt 1, 0x3fbf90
  03fba1c  bf 5, 0x3fba2c
  03fba20  li 3, 250
  03fba24  stb 3, 103(27)
  03fba28  b 0x3fbf90
  03fba2c  lis 3, 64
  03fba30  lis 4, 114
  03fba34  addi 3, 3, -18536
  03fba38  lfs 1, 20(3)
  03fba3c  lfs 2, -3052(4)
  03fba40  lis 3, -16512
  03fba44  fmuls 1, 2, 1
  03fba48  stw 3, 192(27)
  03fba4c  stw 3, 196(27)
  03fba50  stfs 1, 136(27)
  03fba54  stfs 1, 140(27)
  03fba58  lwz 3, 32(30)
  03fba5c  lfs 1, 16(31)
  03fba60  lfs 2, 20(31)
  03fba64  lfs 3, 16(3)
  03fba68  lfs 4, 20(3)
  03fba6c  fsubs 1, 1, 3
  03fba70  fsubs 2, 2, 4
  03fba74  lis 3, 115
  03fba78  addic 3, 3, 22784
  03fba7c  fabs 3, 1
  03fba80  fabs 4, 2
  03fba84  stfs 1, 140(1)
  03fba88  stfs 2, 144(1)
  03fba8c  fsubs 1, 3, 4
  03fba90  stfs 1, 148(1)
  03fba94  lwz 4, 140(1)
  03fba98  lfs 1, 140(1)
  03fba9c  lwz 5, 144(1)
  03fbaa0  lfs 2, 144(1)
  03fbaa4  lwz 6, 148(1)
  03fbaa8  rlwinm 5, 5, 3, 29, 29
  03fbaac  lfs 5, 148(1)
  03fbab0  fabs 1, 1
  03fbab4  rlwimi 5, 6, 2, 30, 30
  03fbab8  fabs 2, 2
  03fbabc  fsub 6, 5, 31
  03fbac0  fsub 5, 5, 31
  03fbac4  rlwimi 5, 4, 4, 28, 28
  03fbac8  ori 4, 3, 0
  03fbacc  rlwimi 4, 5, 2, 26, 28
  03fbad0  slwi 5, 5, 2
  03fbad4  clrldi 4, 4, 32
  03fbad8  fsel 4, 6, 1, 4
  03fbadc  lfsx 1, 3, 5
  03fbae0  fsel 3, 5, 2, 3
  03fbae4  lfs 2, 4(4)
  03fbae8  fcmpu 0, 4, 31
  03fbaec  bt 1, 0x3fbaf4
  03fbaf0  b 0x3fbc14
  03fbaf4  fsubs 5, 3, 4
  03fbaf8  fadds 3, 3, 4
  03fbafc  addic 3, 1, 16
  03fbb00  li 6, 2
  03fbb04  addic 4, 3, 168
  03fbb08  addic 5, 3, 184
  03fbb0c  mtctr 6
  03fbb10  fdivs 3, 5, 3
  03fbb14  fmuls 4, 3, 3
  03fbb18  stfs 3, 196(1)
  03fbb1c  stfs 3, 188(1)
  03fbb20  stfs 3, 192(1)
  03fbb24  stfs 3, 184(1)
  03fbb28  lfs 6, 196(1)
  03fbb2c  lfs 7, 188(1)
  03fbb30  lfs 8, 192(1)
  03fbb34  fmuls 5, 4, 4
  03fbb38  fmuls 7, 7, 4
  03fbb3c  fmuls 6, 6, 5
  03fbb40  fmuls 3, 5, 5
  03fbb44  fmuls 5, 8, 5
  03fbb48  stfs 7, 188(1)
  03fbb4c  fmuls 4, 6, 4
  03fbb50  stfs 5, 192(1)
  03fbb54  stfs 4, 196(1)
  03fbb58  lfs 4, 168(3)
  03fbb5c  fmuls 4, 4, 3
  03fbb60  stfs 4, 184(3)
  03fbb64  lfs 4, 4(4)
  03fbb68  addic 3, 3, 8
  03fbb6c  addic 4, 4, 8
  03fbb70  fmuls 4, 4, 3
  03fbb74  stfs 4, 4(5)
  03fbb78  addic 5, 5, 8
  03fbb7c  bdnz 0x3fbb58
  03fbb80  li 5, 4
  03fbb84  ori 3, 1, 0
  03fbb88  mtctr 5
  03fbb8c  lis 4, 115
  03fbb90  addic 5, 3, 184
  03fbb94  addic 4, 4, 22752
  03fbb98  ori 7, 5, 0
  03fbb9c  lfs 3, 184(3)
  03fbba0  lfs 4, 0(4)
  03fbba4  fmuls 3, 3, 4
  03fbba8  lfs 4, 4(4)
  03fbbac  addic 4, 4, 8
  03fbbb0  stfs 3, 184(3)
  03fbbb4  lfs 3, 4(5)
  03fbbb8  addic 3, 3, 8
  03fbbbc  fmuls 3, 3, 4
  03fbbc0  stfs 3, 4(5)
  03fbbc4  addic 5, 5, 8
  03fbbc8  bdnz 0x3fbb9c
  03fbbcc  ori 3, 1, 0
  03fbbd0  mtctr 6
  03fbbd4  lfs 3, 184(3)
  03fbbd8  lfs 4, 4(7)
  03fbbdc  fadds 3, 31, 3
  03fbbe0  lfs 5, 8(7)
  03fbbe4  lfs 31, 12(7)
  03fbbe8  addic 3, 3, 16
  03fbbec  addic 7, 7, 16
  03fbbf0  fadds 3, 3, 4
  03fbbf4  fadds 3, 3, 5
  03fbbf8  fadds 31, 3, 31
  03fbbfc  bdnz 0x3fbbd4
  03fbc00  lis 3, 64
  03fbc04  addi 3, 3, -18536
  03fbc08  lfs 3, 24(3)
  03fbc0c  fadds 31, 31, 3
  03fbc10  fmadds 31, 31, 1, 2
  03fbc14  stfs 31, 120(1)
  03fbc18  addic 5, 1, 120
  03fbc1c  lfs 1, 16(30)
  03fbc20  addic 6, 27, 136
  03fbc24  lfs 2, 24(30)
  03fbc28  addic 7, 27, 140
  03fbc2c  stfs 1, 48(1)
  03fbc30  stfs 2, 56(1)
  03fbc34  lfs 1, 20(30)
  03fbc38  lfs 2, 28(30)
  03fbc3c  stfs 1, 52(1)
  03fbc40  stfs 2, 60(1)
  03fbc44  ld 3, 48(1)
  03fbc48  ld 4, 56(1)
  03fbc4c  bl 0x107de8
  03fbc50  nop
  03fbc54  ori 3, 31, 0
  03fbc58  lfs 1, 120(1)
  03fbc5c  addic 4, 27, 112
  03fbc60  li 6, 6
  03fbc64  li 7, 1
  03fbc68  li 8, 0
  03fbc6c  bl 0x10ad80
  03fbc70  nop
  03fbc74  li 3, 8
  03fbc78  li 4, 120
  03fbc7c  stb 3, 32(31)
  03fbc80  stb 4, 103(27)
  03fbc84  b 0x3fbf90
  03fbc88  lis 3, 151
  03fbc8c  lwz 3, -25488(3)
  03fbc90  cmpwi 3, 18
  03fbc94  bf 2, 0x3fbcc8
  03fbc98  lwz 3, 776(27)
  03fbc9c  cmpwi 3, 0
  03fbca0  bt 2, 0x3fbcc8
  03fbca4  lis 3, 151
  03fbca8  lwz 4, -13832(3)
  03fbcac  addic 4, 4, 1
  03fbcb0  cmpwi 4, 10
  03fbcb4  stw 4, -13832(3)
  03fbcb8  bt 0, 0x3fbcc8
  03fbcbc  li 3, 29
  03fbcc0  bl 0x11b728
  03fbcc4  nop
  03fbcc8  lis 3, 114
  03fbccc  lis 5, 151
  03fbcd0  li 4, 0
  03fbcd4  lfs 1, -3048(3)
  03fbcd8  addic 3, 5, -25376
  03fbcdc  fmuls 1, 1, 30
  03fbce0  lhz 5, 52(31)
  03fbce4  rlwimi 5, 4, 0, 19, 19
  03fbce8  lis 4, 64
  03fbcec  addi 4, 4, -18536
  03fbcf0  sth 5, 52(31)
  03fbcf4  stfs 1, 128(27)
  03fbcf8  lbz 3, 8356(3)
  03fbcfc  lfs 30, 28(4)
  03fbd00  cmpwi 3, 2
  03fbd04  bf 2, 0x3fbd28
  03fbd08  lis 4, 64
  03fbd0c  lis 3, 16128
  03fbd10  lis 5, 114
  03fbd14  addi 4, 4, -18536
  03fbd18  stw 3, 88(31)
  03fbd1c  lfs 2, -3052(5)
  03fbd20  lfs 1, 32(4)
  03fbd24  b 0x3fbd34
  03fbd28  lis 3, 114
  03fbd2c  fmr 1, 30
  03fbd30  lfs 2, -3052(3)
  03fbd34  fmuls 3, 2, 30
  03fbd38  lis 3, -16512
  03fbd3c  fmuls 1, 2, 1
  03fbd40  stw 3, 192(27)
  03fbd44  stw 3, 196(27)
  03fbd48  stfs 3, 140(27)
  03fbd4c  stfs 1, 136(27)
  03fbd50  lwz 3, 32(30)
  03fbd54  lfs 1, 16(31)
  03fbd58  lfs 2, 20(31)
  03fbd5c  lfs 3, 16(3)
  03fbd60  lfs 4, 20(3)
  03fbd64  fsubs 1, 1, 3
  03fbd68  fsubs 2, 2, 4
  03fbd6c  lis 3, 115
  03fbd70  addic 3, 3, 22784
  03fbd74  fabs 4, 1
  03fbd78  fabs 3, 2
  03fbd7c  stfs 1, 128(1)
  03fbd80  stfs 2, 132(1)
  03fbd84  fsubs 1, 4, 3
  03fbd88  stfs 1, 136(1)
  03fbd8c  lwz 4, 128(1)
  03fbd90  lfs 1, 128(1)
  03fbd94  lwz 5, 132(1)
  03fbd98  lfs 2, 132(1)
  03fbd9c  lwz 6, 136(1)
  03fbda0  rlwinm 5, 5, 3, 29, 29
  03fbda4  lfs 5, 136(1)
  03fbda8  fabs 1, 1
  03fbdac  rlwimi 5, 6, 2, 30, 30
  03fbdb0  fabs 2, 2
  03fbdb4  fsub 6, 5, 31
  03fbdb8  fsub 5, 5, 31
  03fbdbc  rlwimi 5, 4, 4, 28, 28
  03fbdc0  ori 4, 3, 0
  03fbdc4  rlwimi 4, 5, 2, 26, 28
  03fbdc8  slwi 5, 5, 2
  03fbdcc  clrldi 4, 4, 32
  03fbdd0  fsel 3, 6, 1, 3
  03fbdd4  lfsx 30, 3, 5
  03fbdd8  fsel 2, 5, 2, 4
  03fbddc  lfs 1, 4(4)
  03fbde0  fcmpu 0, 3, 31
  03fbde4  bt 1, 0x3fbdec
  03fbde8  b 0x3fbf0c
  03fbdec  fsubs 4, 2, 3
  03fbdf0  fadds 2, 2, 3
  03fbdf4  addic 3, 1, 16
  03fbdf8  li 6, 2
  03fbdfc  addic 4, 3, 136
  03fbe00  addic 5, 3, 152
  03fbe04  mtctr 6
  03fbe08  fdivs 2, 4, 2
  03fbe0c  fmuls 3, 2, 2
  03fbe10  stfs 2, 164(1)
  03fbe14  stfs 2, 156(1)
  03fbe18  stfs 2, 160(1)
  03fbe1c  stfs 2, 152(1)
  03fbe20  lfs 5, 164(1)
  03fbe24  lfs 6, 156(1)
  03fbe28  lfs 7, 160(1)
  03fbe2c  fmuls 4, 3, 3
  03fbe30  fmuls 6, 6, 3
  03fbe34  fmuls 5, 5, 4
  03fbe38  fmuls 2, 4, 4
  03fbe3c  fmuls 4, 7, 4
  03fbe40  stfs 6, 156(1)
  03fbe44  fmuls 3, 5, 3
  03fbe48  stfs 4, 160(1)
  03fbe4c  stfs 3, 164(1)
  03fbe50  lfs 3, 136(3)
  03fbe54  fmuls 3, 3, 2
  03fbe58  stfs 3, 152(3)
  03fbe5c  lfs 3, 4(4)
  03fbe60  addic 3, 3, 8
  03fbe64  addic 4, 4, 8
  03fbe68  fmuls 3, 3, 2
  03fbe6c  stfs 3, 4(5)
  03fbe70  addic 5, 5, 8
  03fbe74  bdnz 0x3fbe50
  03fbe78  li 5, 4
  03fbe7c  ori 3, 1, 0
  03fbe80  mtctr 5
  03fbe84  lis 4, 115
  03fbe88  addic 5, 3, 152
  03fbe8c  addic 4, 4, 22752
  03fbe90  ori 7, 5, 0
  03fbe94  lfs 2, 152(3)
  03fbe98  lfs 3, 0(4)
  03fbe9c  fmuls 2, 2, 3
  03fbea0  lfs 3, 4(4)
  03fbea4  addic 4, 4, 8
  03fbea8  stfs 2, 152(3)
  03fbeac  lfs 2, 4(5)
  03fbeb0  addic 3, 3, 8
  03fbeb4  fmuls 2, 2, 3
  03fbeb8  stfs 2, 4(5)
  03fbebc  addic 5, 5, 8
  03fbec0  bdnz 0x3fbe94
  03fbec4  ori 3, 1, 0
  03fbec8  mtctr 6
  03fbecc  lfs 2, 152(3)
  03fbed0  lfs 3, 4(7)
  03fbed4  fadds 2, 31, 2
  03fbed8  lfs 4, 8(7)
  03fbedc  lfs 31, 12(7)
  03fbee0  addic 3, 3, 16
  03fbee4  addic 7, 7, 16
  03fbee8  fadds 2, 2, 3
  03fbeec  fadds 2, 2, 4
  03fbef0  fadds 31, 2, 31
  03fbef4  bdnz 0x3fbecc
  03fbef8  lis 3, 64
  03fbefc  addi 3, 3, -18536
  03fbf00  lfs 2, 24(3)
  03fbf04  fadds 31, 31, 2
  03fbf08  fmadds 31, 31, 30, 1
  03fbf0c  stfs 31, 124(1)
  03fbf10  addic 5, 1, 124
  03fbf14  lfs 1, 16(30)
  03fbf18  addic 6, 27, 136
  03fbf1c  lfs 2, 24(30)
  03fbf20  addic 7, 27, 140
  03fbf24  stfs 1, 48(1)
  03fbf28  stfs 2, 56(1)
  03fbf2c  lfs 1, 20(30)
  03fbf30  lfs 2, 28(30)
  03fbf34  stfs 1, 52(1)
  03fbf38  stfs 2, 60(1)
  03fbf3c  ld 3, 48(1)
  03fbf40  ld 4, 56(1)
  03fbf44  bl 0x107de8
  03fbf48  nop
  03fbf4c  addic 4, 27, 112
  03fbf50  lfs 1, 124(1)
  03fbf54  ori 3, 31, 0
  03fbf58  li 6, 7
  03fbf5c  li 7, 1
  03fbf60  li 8, 0
  03fbf64  bl 0x10ad80
  03fbf68  nop
  03fbf6c  li 4, 9
  03fbf70  li 5, 240
  03fbf74  ori 3, 31, 0
  03fbf78  stb 4, 32(31)
  03fbf7c  stb 5, 103(27)
  03fbf80  li 4, 0
  03fbf84  li 5, -1
  03fbf88  bl 0xfd8d0
  03fbf8c  nop
  03fbf90  addic 4, 27, 96
  03fbf94  ori 3, 31, 0
  03fbf98  bl 0x10c808
  03fbf9c  nop
  03fbfa0  li 5, 255
  03fbfa4  ori 3, 31, 0
  03fbfa8  addic 4, 27, 96
  03fbfac  stb 5, 164(31)
  03fbfb0  bl 0x10c9a0
  03fbfb4  nop
  03fbfb8  addic 3, 27, 736
  03fbfbc  bl 0x4fff60
  03fbfc0  nop
  03fbfc4  lwz 3, 56(27)
  03fbfc8  cmpwi 3, 0
  03fbfcc  lwz 3, 736(27)
  03fbfd0  bt 2, 0x3fc004
  03fbfd4  lis 3, 64
  03fbfd8  addi 3, 3, -18536
  03fbfdc  lfs 1, 36(3)
  03fbfe0  lfs 2, 40(3)
  03fbfe4  bl 0xfcbe8
  03fbfe8  nop
  03fbfec  lis 3, 114
  03fbff0  lfs 2, -3056(3)
  03fbff4  fmuls 1, 1, 2
  03fbff8  bl 0x502758
  03fbffc  nop
  03fc000  stw 3, 736(27)
  03fc004  lis 4, 64
  03fc008  li 5, 0
  03fc00c  addi 4, 4, -18536
  03fc010  cmpwi 3, 0
  03fc014  stw 5, 56(27)
  03fc018  lfs 31, 44(4)
  03fc01c  bf 2, 0x3fc024
  03fc020  lfs 31, 292(27)
  03fc024  lis 30, 151
  03fc028  addic 30, 30, -25376
  03fc02c  lwz 4, 8332(30)
  03fc030  cmpwi 4, 22
  03fc034  bf 2, 0x3fc044
  03fc038  li 3, 2
  03fc03c  stw 3, 276(27)
  03fc040  b 0x3fc0c8
  03fc044  ori 4, 3, 0
  03fc048  addic 3, 27, 208
  03fc04c  cmpwi 1, 4, 0
  03fc050  lwz 4, 300(27)
  03fc054  cmpwi 4, -1
  03fc058  crnand 2, 1, 6
  03fc05c  bt 2, 0x3fc0ac
  03fc060  ori 5, 3, 0
  03fc064  lis 3, 165
  03fc068  slwi 4, 4, 2
  03fc06c  addic 7, 3, 7136
  03fc070  extsw 4, 4
  03fc074  lis 6, 64
  03fc078  ori 3, 31, 0
  03fc07c  addi 6, 6, -18536
  03fc080  lwzx 7, 7, 4
  03fc084  ori 4, 5, 0
  03fc088  addic 8, 7, 16
  03fc08c  lfs 1, 32(6)
  03fc090  li 6, 0
  03fc094  lwz 9, 0(7)
  03fc098  li 7, 0
  03fc09c  extsw 9, 9
  03fc0a0  bl 0x111ba0
  03fc0a4  nop
  03fc0a8  b 0x3fc0c8
  03fc0ac  lis 4, 64
  03fc0b0  ori 5, 3, 0
  03fc0b4  addi 4, 4, -18536
  03fc0b8  ori 3, 31, 0
  03fc0bc  lfs 1, 32(4)
  03fc0c0  bl 0x1118d8
  03fc0c4  nop
  03fc0c8  lfs 1, 20(31)
  03fc0cc  lfs 2, 212(27)
  03fc0d0  lfs 3, 16(31)
  03fc0d4  fsubs 1, 1, 2
  03fc0d8  lfs 2, 208(27)
  03fc0dc  fsubs 2, 3, 2
  03fc0e0  fmuls 1, 1, 1
  03fc0e4  fmadds 1, 2, 2, 1
  03fc0e8  fsqrts 1, 1
  03fc0ec  fcmpu 0, 1, 31
  03fc0f0  cror 6, 0, 2
  03fc0f4  bt 6, 0x3fc100
  03fc0f8  li 3, 2
  03fc0fc  stw 3, 276(27)
  03fc100  lwz 3, 272(27)
  03fc104  cmpwi 3, 0
  03fc108  bf 2, 0x3fc114
  03fc10c  lwz 3, 8320(30)
  03fc110  stw 3, 272(27)
  03fc114  ld 0, 304(1)
  03fc118  mtlr 0
  03fc11c  lfd 29, 264(1)
  03fc120  lfd 30, 272(1)
  03fc124  lfd 31, 280(1)
  03fc128  ld 26, 216(1)
  03fc12c  ld 27, 224(1)
  03fc130  ld 28, 232(1)
  03fc134  ld 29, 240(1)
  03fc138  ld 30, 248(1)
  03fc13c  ld 31, 256(1)
  03fc140  addi 1, 1, 288
  03fc144  blr

UpdateMoby_638:   # 0x3fc1c0, 0x1718 bytes
  03fc1c0  stdu 1, -384(1)
  03fc1c4  mflr 0
  03fc1c8  std 0, 400(1)
  03fc1cc  stfd 27, 344(1)
  03fc1d0  stfd 28, 352(1)
  03fc1d4  stfd 29, 360(1)
  03fc1d8  stfd 30, 368(1)
  03fc1dc  stfd 31, 376(1)
  03fc1e0  std 31, 336(1)
  03fc1e4  std 30, 328(1)
  03fc1e8  ori 31, 3, 0
  03fc1ec  std 29, 320(1)
  03fc1f0  std 28, 312(1)
  03fc1f4  lwz 30, 120(31)
  03fc1f8  bl 0x3fb7c8
  03fc1fc  lwz 3, 272(30)
  03fc200  lhz 4, 166(3)
  03fc204  cmpwi 4, 0
  03fc208  bt 2, 0x3fc214
  03fc20c  cmpwi 4, 419
  03fc210  bf 2, 0x3fc230
  03fc214  lis 3, 151
  03fc218  addic 3, 3, -25376
  03fc21c  lfs 31, 192(3)
  03fc220  lfs 30, 196(3)
  03fc224  lfs 29, 200(3)
  03fc228  lfs 28, 204(3)
  03fc22c  b 0x3fc240
  03fc230  lfs 31, 16(3)
  03fc234  lfs 30, 20(3)
  03fc238  lfs 29, 24(3)
  03fc23c  lfs 28, 28(3)
  03fc240  lis 3, 151
  03fc244  addic 3, 3, -16268
  03fc248  lbz 3, 7(3)
  03fc24c  cmpwi 3, 0
  03fc250  bt 2, 0x3fc26c
  03fc254  lis 4, 64
  03fc258  addic 3, 30, 304
  03fc25c  addi 4, 4, -16056
  03fc260  lfs 1, 0(4)
  03fc264  bl 0x119ac0
  03fc268  nop
  03fc26c  lbz 3, 32(31)
  03fc270  cmpwi 3, 4
  03fc274  cmpwi 1, 3, 1
  03fc278  cmpwi 6, 3, -1
  03fc27c  cmpwi 7, 3, 0
  03fc280  bt 1, 0x3fc2a8
  03fc284  bt 5, 0x3fc294
  03fc288  bf 25, 0x3fd5ec
  03fc28c  bf 29, 0x3fc2d4
  03fc290  b 0x3fc688
  03fc294  cmpwi 3, 2
  03fc298  bf 1, 0x3fc9c8
  03fc29c  cmpwi 3, 3
  03fc2a0  bf 1, 0x3fcb54
  03fc2a4  b 0x3fccc8
  03fc2a8  cmpwi 3, 10
  03fc2ac  bt 2, 0x3fc5b0
  03fc2b0  cmpwi 3, 9
  03fc2b4  bt 2, 0x3fd558
  03fc2b8  cmpwi 3, 8
  03fc2bc  bt 2, 0x3fd458
  03fc2c0  cmpwi 3, 7
  03fc2c4  bt 2, 0x3fd314
  03fc2c8  cmpwi 3, 5
  03fc2cc  bt 2, 0x3fcf24
  03fc2d0  b 0x3fd5ec
  03fc2d4  lis 3, 16448
  03fc2d8  li 4, 3
  03fc2dc  li 5, 2
  03fc2e0  lis 7, 64
  03fc2e4  lis 6, 16320
  03fc2e8  stw 3, 32(30)
  03fc2ec  addi 29, 7, -16056
  03fc2f0  li 3, 1
  03fc2f4  sth 4, 36(30)
  03fc2f8  stb 5, 40(30)
  03fc2fc  li 4, 0
  03fc300  stw 6, 48(30)
  03fc304  stb 3, 41(30)
  03fc308  lfs 31, 4(29)
  03fc30c  stw 4, 748(30)
  03fc310  bl 0xfcc68
  03fc314  nop
  03fc318  stfs 1, 756(30)
  03fc31c  bl 0xfcc68
  03fc320  nop
  03fc324  stfs 1, 764(30)
  03fc328  bl 0xfcc68
  03fc32c  nop
  03fc330  stfs 1, 744(30)
  03fc334  lfs 30, 8(29)
  03fc338  lfs 29, 12(29)
  03fc33c  fmr 1, 30
  03fc340  fmr 2, 29
  03fc344  bl 0xfcbe8
  03fc348  nop
  03fc34c  lfs 28, 16(29)
  03fc350  lis 28, 114
  03fc354  fmr 2, 29
  03fc358  fmuls 4, 1, 28
  03fc35c  fmr 1, 30
  03fc360  lfs 3, -3052(28)
  03fc364  fmuls 3, 4, 3
  03fc368  stfs 3, 752(30)
  03fc36c  bl 0xfcbe8
  03fc370  nop
  03fc374  fmuls 3, 1, 28
  03fc378  lfs 4, -3052(28)
  03fc37c  fmr 1, 30
  03fc380  fmr 2, 29
  03fc384  fmuls 3, 3, 4
  03fc388  stfs 3, 760(30)
  03fc38c  bl 0xfcbe8
  03fc390  nop
  03fc394  fmuls 2, 1, 28
  03fc398  lfs 3, -3052(28)
  03fc39c  fmr 1, 29
  03fc3a0  fmuls 2, 2, 3
  03fc3a4  stfs 2, 740(30)
  03fc3a8  lfs 2, 20(29)
  03fc3ac  bl 0xfcbe8
  03fc3b0  nop
  03fc3b4  lis 3, 114
  03fc3b8  lfs 2, -3056(3)
  03fc3bc  fmuls 1, 1, 2
  03fc3c0  bl 0x502758
  03fc3c4  nop
  03fc3c8  sth 3, 770(30)
  03fc3cc  li 3, 2
  03fc3d0  bl 0xfc620
  03fc3d4  nop
  03fc3d8  cmpwi 3, 0
  03fc3dc  bt 2, 0x3fc3f4
  03fc3e0  lis 3, 0
  03fc3e4  lhz 4, 52(31)
  03fc3e8  ori 3, 3, 32768
  03fc3ec  or 3, 4, 3
  03fc3f0  b 0x3fc400
  03fc3f4  li 5, 0
  03fc3f8  lhz 3, 52(31)
  03fc3fc  rlwimi 3, 5, 0, 16, 16
  03fc400  sth 3, 52(31)
  03fc404  lwz 3, 288(30)
  03fc408  cmpwi 3, -1
  03fc40c  bf 1, 0x3fc498
  03fc410  lis 4, 165
  03fc414  slwi 3, 3, 2
  03fc418  addic 29, 4, 7136
  03fc41c  extsw 3, 3
  03fc420  fmr 1, 31
  03fc424  lwzx 3, 29, 3
  03fc428  lwz 3, 0(3)
  03fc42c  addic 3, 3, -1
  03fc430  extsw 3, 3
  03fc434  std 3, 296(1)
  03fc438  lfd 2, 296(1)
  03fc43c  fcfid 2, 2
  03fc440  frsp 2, 2
  03fc444  bl 0xfcbe8
  03fc448  nop
  03fc44c  bl 0x502758
  03fc450  nop
  03fc454  lwz 4, 288(30)
  03fc458  extsh 5, 3
  03fc45c  sth 3, 768(30)
  03fc460  slwi 4, 4, 2
  03fc464  sldi 5, 5, 4
  03fc468  extsw 4, 4
  03fc46c  lwzx 3, 29, 4
  03fc470  addc 3, 3, 5
  03fc474  clrldi 3, 3, 32
  03fc478  lfs 1, 16(3)
  03fc47c  stfs 1, 16(31)
  03fc480  lfs 1, 20(3)
  03fc484  stfs 1, 20(31)
  03fc488  lfs 1, 24(3)
  03fc48c  stfs 1, 24(31)
  03fc490  lfs 1, 28(3)
  03fc494  stfs 1, 28(31)
  03fc498  lfs 1, 16(31)
  03fc49c  li 3, 1
  03fc4a0  stfs 1, 704(30)
  03fc4a4  lfs 1, 20(31)
  03fc4a8  stfs 1, 708(30)
  03fc4ac  lfs 1, 24(31)
  03fc4b0  stfs 1, 712(30)
  03fc4b4  lfs 1, 28(31)
  03fc4b8  stw 3, 776(30)
  03fc4bc  stfs 1, 716(30)
  03fc4c0  lfs 1, 16(31)
  03fc4c4  stfs 1, 688(30)
  03fc4c8  lfs 1, 20(31)
  03fc4cc  lwz 3, 296(30)
  03fc4d0  stfs 1, 692(30)
  03fc4d4  lfs 1, 24(31)
  03fc4d8  cmpwi 3, 0
  03fc4dc  stfs 1, 696(30)
  03fc4e0  lfs 1, 28(31)
  03fc4e4  stfs 1, 700(30)
  03fc4e8  bt 2, 0x3fc55c
  03fc4ec  li 3, 10
  03fc4f0  lhz 5, 52(31)
  03fc4f4  li 4, 0
  03fc4f8  stb 3, 32(31)
  03fc4fc  ori 3, 5, 1
  03fc500  lbz 5, 83(31)
  03fc504  rlwimi 3, 4, 0, 19, 19
  03fc508  stb 4, 49(31)
  03fc50c  cmpwi 5, 1
  03fc510  stw 4, 148(31)
  03fc514  sth 3, 52(31)
  03fc518  bt 2, 0x3fd5ec
  03fc51c  lis 3, 64
  03fc520  lis 4, 114
  03fc524  addi 3, 3, -16056
  03fc528  li 5, 0
  03fc52c  lfs 1, 24(3)
  03fc530  lfs 2, -3056(4)
  03fc534  ori 3, 31, 0
  03fc538  li 4, 1
  03fc53c  fmuls 1, 2, 1
  03fc540  fctiwz 1, 1
  03fc544  stfd 1, 296(1)
  03fc548  lwz 6, 300(1)
  03fc54c  extsw 6, 6
  03fc550  bl 0xfddc0
  03fc554  nop
  03fc558  b 0x3fd5ec
  03fc55c  li 3, 2
  03fc560  lbz 4, 83(31)
  03fc564  cmpwi 4, 0
  03fc568  stb 3, 32(31)
  03fc56c  bt 2, 0x3fd5ec
  03fc570  lis 3, 64
  03fc574  lis 4, 114
  03fc578  addi 3, 3, -16056
  03fc57c  li 5, 0
  03fc580  lfs 1, 28(3)
  03fc584  lfs 2, -3056(4)
  03fc588  ori 3, 31, 0
  03fc58c  fmuls 1, 2, 1
  03fc590  li 4, 0
  03fc594  fctiwz 1, 1
  03fc598  stfd 1, 296(1)
  03fc59c  lwz 6, 300(1)
  03fc5a0  extsw 6, 6
  03fc5a4  bl 0xfddc0
  03fc5a8  nop
  03fc5ac  b 0x3fd5ec
  03fc5b0  lwz 3, 720(30)
  03fc5b4  cmpwi 3, 0
  03fc5b8  bt 2, 0x3fd5ec
  03fc5bc  li 3, 1
  03fc5c0  lhz 4, 52(31)
  03fc5c4  rlwinm 4, 4, 0, 0, 30
  03fc5c8  stb 3, 49(31)
  03fc5cc  lwz 3, 720(30)
  03fc5d0  lfs 1, 708(30)
  03fc5d4  sth 4, 52(31)
  03fc5d8  lfs 2, 208(3)
  03fc5dc  lfs 3, 192(3)
  03fc5e0  fmuls 2, 2, 1
  03fc5e4  lfs 4, 704(30)
  03fc5e8  lfs 5, 212(3)
  03fc5ec  lfs 6, 224(3)
  03fc5f0  fmuls 5, 5, 1
  03fc5f4  lfs 7, 712(30)
  03fc5f8  lfs 8, 196(3)
  03fc5fc  lfs 9, 216(3)
  03fc600  fmuls 9, 9, 1
  03fc604  fmadds 2, 3, 4, 2
  03fc608  lfs 3, 228(3)
  03fc60c  lfs 10, 220(3)
  03fc610  fmadds 5, 8, 4, 5
  03fc614  lfs 8, 16(3)
  03fc618  fmuls 1, 10, 1
  03fc61c  lfs 10, 200(3)
  03fc620  lfs 11, 204(3)
  03fc624  fmadds 2, 6, 7, 2
  03fc628  fmadds 6, 10, 4, 9
  03fc62c  lfs 9, 232(3)
  03fc630  fmadds 3, 3, 7, 5
  03fc634  lfs 5, 236(3)
  03fc638  fmadds 1, 11, 4, 1
  03fc63c  lfs 4, 716(30)
  03fc640  fadds 2, 2, 8
  03fc644  fmadds 6, 9, 7, 6
  03fc648  fmadds 1, 5, 7, 1
  03fc64c  stfs 2, 16(31)
  03fc650  lfs 2, 20(3)
  03fc654  fadds 2, 3, 2
  03fc658  fadds 1, 1, 4
  03fc65c  stfs 2, 20(31)
  03fc660  lfs 2, 24(3)
  03fc664  stfs 1, 28(31)
  03fc668  fadds 2, 6, 2
  03fc66c  stfs 2, 24(31)
  03fc670  lfs 1, 72(3)
  03fc674  lfs 2, 716(30)
  03fc678  bl 0x502578
  03fc67c  nop
  03fc680  stfs 1, 72(31)
  03fc684  b 0x3fd5ec
  03fc688  addic 3, 30, 732
  03fc68c  bl 0x4fffb4
  03fc690  nop
  03fc694  lfs 7, 16(31)
  03fc698  cmpwi 3, 0
  03fc69c  lfs 8, 20(31)
  03fc6a0  lfs 9, 24(31)
  03fc6a4  bf 2, 0x3fc750
  03fc6a8  lfs 4, 196(31)
  03fc6ac  lfs 3, 192(31)
  03fc6b0  fmuls 1, 4, 4
  03fc6b4  lfs 5, 200(31)
  03fc6b8  lhz 3, 732(30)
  03fc6bc  extsh 3, 3
  03fc6c0  extsw 3, 3
  03fc6c4  fmadds 1, 3, 3, 1
  03fc6c8  std 3, 296(1)
  03fc6cc  lis 3, 64
  03fc6d0  addi 3, 3, -16056
  03fc6d4  fmadds 2, 5, 5, 1
  03fc6d8  lfs 6, 4(3)
  03fc6dc  lfs 1, 32(3)
  03fc6e0  lfd 10, 296(1)
  03fc6e4  fcfid 10, 10
  03fc6e8  fsqrts 2, 2
  03fc6ec  frsp 10, 10
  03fc6f0  fmuls 1, 10, 1
  03fc6f4  fcmpu 0, 2, 6
  03fc6f8  bf 2, 0x3fc70c
  03fc6fc  fmr 2, 6
  03fc700  lfs 3, 204(31)
  03fc704  fmr 1, 2
  03fc708  b 0x3fc720
  03fc70c  fdivs 2, 1, 2
  03fc710  fmuls 6, 3, 2
  03fc714  fmuls 1, 4, 2
  03fc718  lfs 3, 204(31)
  03fc71c  fmuls 2, 5, 2
  03fc720  fadds 4, 6, 7
  03fc724  stfs 3, 124(1)
  03fc728  fadds 1, 1, 8
  03fc72c  addic 4, 1, 112
  03fc730  fadds 2, 2, 9
  03fc734  ori 3, 31, 0
  03fc738  li 5, 1
  03fc73c  stfs 4, 112(1)
  03fc740  stfs 1, 116(1)
  03fc744  stfs 2, 120(1)
  03fc748  bl 0x3fb180
  03fc74c  b 0x3fd5ec
  03fc750  lfs 1, 688(30)
  03fc754  lfs 2, 692(30)
  03fc758  lis 3, 64
  03fc75c  fsubs 1, 1, 7
  03fc760  fsubs 2, 2, 8
  03fc764  addi 4, 3, -16056
  03fc768  lis 5, 115
  03fc76c  addic 3, 31, 72
  03fc770  addic 5, 5, 22784
  03fc774  fabs 3, 1
  03fc778  fabs 4, 2
  03fc77c  stfs 1, 184(1)
  03fc780  stfs 2, 188(1)
  03fc784  fsubs 1, 3, 4
  03fc788  stfs 1, 192(1)
  03fc78c  lwz 6, 184(1)
  03fc790  lfs 2, 4(4)
  03fc794  lfs 1, 184(1)
  03fc798  lwz 4, 188(1)
  03fc79c  lfs 5, 188(1)
  03fc7a0  fabs 1, 1
  03fc7a4  lwz 7, 192(1)
  03fc7a8  rlwinm 4, 4, 3, 29, 29
  03fc7ac  lfs 6, 192(1)
  03fc7b0  fabs 5, 5
  03fc7b4  rlwimi 4, 7, 2, 30, 30
  03fc7b8  fsub 7, 6, 2
  03fc7bc  rlwimi 4, 6, 4, 28, 28
  03fc7c0  fsub 6, 6, 2
  03fc7c4  ori 6, 5, 0
  03fc7c8  rlwimi 6, 4, 2, 26, 28
  03fc7cc  slwi 4, 4, 2
  03fc7d0  clrldi 6, 6, 32
  03fc7d4  fsel 4, 7, 1, 4
  03fc7d8  lfsx 7, 5, 4
  03fc7dc  lfs 1, 4(6)
  03fc7e0  fsel 3, 6, 5, 3
  03fc7e4  fcmpu 0, 4, 2
  03fc7e8  bt 1, 0x3fc7f0
  03fc7ec  b 0x3fc910
  03fc7f0  fsubs 5, 3, 4
  03fc7f4  fadds 3, 3, 4
  03fc7f8  addic 4, 1, 16
  03fc7fc  li 8, 2
  03fc800  addic 6, 4, 260
  03fc804  addic 5, 4, 244
  03fc808  mtctr 8
  03fc80c  fdivs 3, 5, 3
  03fc810  fmuls 4, 3, 3
  03fc814  stfs 3, 272(1)
  03fc818  stfs 3, 264(1)
  03fc81c  stfs 3, 268(1)
  03fc820  stfs 3, 260(1)
  03fc824  lfs 6, 272(1)
  03fc828  lfs 8, 264(1)
  03fc82c  lfs 9, 268(1)
  03fc830  fmuls 5, 4, 4
  03fc834  fmuls 8, 8, 4
  03fc838  fmuls 6, 6, 5
  03fc83c  fmuls 3, 5, 5
  03fc840  fmuls 5, 9, 5
  03fc844  stfs 8, 264(1)
  03fc848  fmuls 4, 6, 4
  03fc84c  stfs 5, 268(1)
  03fc850  stfs 4, 272(1)
  03fc854  lfs 4, 244(4)
  03fc858  fmuls 4, 4, 3
  03fc85c  stfs 4, 260(4)
  03fc860  lfs 4, 4(5)
  03fc864  addic 5, 5, 8
  03fc868  fmuls 4, 4, 3
  03fc86c  addic 4, 4, 8
  03fc870  stfs 4, 4(6)
  03fc874  addic 6, 6, 8
  03fc878  bdnz 0x3fc854
  03fc87c  li 6, 4
  03fc880  ori 4, 1, 0
  03fc884  mtctr 6
  03fc888  lis 5, 115
  03fc88c  addic 6, 4, 260
  03fc890  addic 5, 5, 22752
  03fc894  ori 7, 6, 0
  03fc898  lfs 3, 260(4)
  03fc89c  lfs 4, 0(5)
  03fc8a0  fmuls 3, 3, 4
  03fc8a4  lfs 4, 4(5)
  03fc8a8  addic 5, 5, 8
  03fc8ac  stfs 3, 260(4)
  03fc8b0  lfs 3, 4(6)
  03fc8b4  addic 4, 4, 8
  03fc8b8  fmuls 3, 3, 4
  03fc8bc  stfs 3, 4(6)
  03fc8c0  addic 6, 6, 8
  03fc8c4  bdnz 0x3fc898
  03fc8c8  ori 4, 1, 0
  03fc8cc  mtctr 8
  03fc8d0  lfs 3, 260(4)
  03fc8d4  fadds 2, 2, 3
  03fc8d8  addic 4, 4, 16
  03fc8dc  lfs 3, 4(7)
  03fc8e0  lfs 4, 8(7)
  03fc8e4  lfs 5, 12(7)
  03fc8e8  addic 7, 7, 16
  03fc8ec  fadds 2, 2, 3
  03fc8f0  fadds 2, 2, 4
  03fc8f4  fadds 2, 2, 5
  03fc8f8  bdnz 0x3fc8d0
  03fc8fc  lis 4, 64
  03fc900  addi 4, 4, -16056
  03fc904  lfs 3, 36(4)
  03fc908  fadds 2, 2, 3
  03fc90c  fmadds 2, 2, 7, 1
  03fc910  lis 4, 64
  03fc914  lis 5, 114
  03fc918  fmr 1, 2
  03fc91c  addi 4, 4, -16056
  03fc920  lfs 4, 40(4)
  03fc924  lfs 3, -3048(5)
  03fc928  lis 4, 114
  03fc92c  addic 5, 30, 728
  03fc930  fmuls 3, 3, 4
  03fc934  lfs 2, -3052(4)
  03fc938  fmuls 4, 2, 4
  03fc93c  fmr 2, 3
  03fc940  bl 0x10a2e0
  03fc944  nop
  03fc948  ori 3, 31, 0
  03fc94c  addic 4, 30, 688
  03fc950  li 5, 1
  03fc954  bl 0x3fb180
  03fc958  lbz 3, 83(31)
  03fc95c  fmr 31, 1
  03fc960  cmpwi 3, 0
  03fc964  bt 2, 0x3fc9a4
  03fc968  lis 3, 64
  03fc96c  lis 4, 114
  03fc970  addi 3, 3, -16056
  03fc974  li 5, 0
  03fc978  lfs 1, 28(3)
  03fc97c  lfs 2, -3056(4)
  03fc980  ori 3, 31, 0
  03fc984  fmuls 1, 2, 1
  03fc988  li 4, 0
  03fc98c  fctiwz 1, 1
  03fc990  stfd 1, 296(1)
  03fc994  lwz 6, 300(1)
  03fc998  extsw 6, 6
  03fc99c  bl 0xfddc0
  03fc9a0  nop
  03fc9a4  lis 3, 64
  03fc9a8  addi 3, 3, -16056
  03fc9ac  lfs 1, 44(3)
  03fc9b0  fcmpu 0, 31, 1
  03fc9b4  cror 6, 1, 2
  03fc9b8  bt 6, 0x3fd5ec
  03fc9bc  li 3, 2
  03fc9c0  stb 3, 32(31)
  03fc9c4  b 0x3fd5ec
  03fc9c8  addic 3, 30, 732
  03fc9cc  bl 0x4fffb4
  03fc9d0  nop
  03fc9d4  lwz 3, 276(30)
  03fc9d8  cmpwi 3, 2
  03fc9dc  bt 2, 0x3fcac4
  03fc9e0  lhz 3, 732(30)
  03fc9e4  cmpwi 3, 0
  03fc9e8  bf 2, 0x3fd5ec
  03fc9ec  lwz 3, 288(30)
  03fc9f0  cmpwi 3, -1
  03fc9f4  bf 1, 0x3fca5c
  03fc9f8  lis 3, 64
  03fc9fc  li 4, 7
  03fca00  addi 3, 3, -16056
  03fca04  stb 4, 32(31)
  03fca08  lfs 1, 48(3)
  03fca0c  lfs 2, 8(3)
  03fca10  bl 0xfcbe8
  03fca14  nop
  03fca18  lis 3, 114
  03fca1c  lfs 2, -3056(3)
  03fca20  fmuls 1, 1, 2
  03fca24  bl 0x502758
  03fca28  nop
  03fca2c  lhz 4, 768(30)
  03fca30  sth 3, 732(30)
  03fca34  extsh 4, 4
  03fca38  addic 4, 4, 1
  03fca3c  srawi 3, 4, 1
  03fca40  addze 3, 3
  03fca44  sldi 5, 3, 1
  03fca48  ori 3, 31, 0
  03fca4c  subc 4, 4, 5
  03fca50  sth 4, 768(30)
  03fca54  bl 0x3fb2e8
  03fca58  b 0x3fd5ec
  03fca5c  li 3, 20
  03fca60  bl 0xfc620
  03fca64  nop
  03fca68  cmpwi 3, 0
  03fca6c  bf 2, 0x3fd5ec
  03fca70  li 3, 4
  03fca74  lbz 4, 83(31)
  03fca78  cmpwi 4, 2
  03fca7c  stb 3, 32(31)
  03fca80  bt 2, 0x3fd5ec
  03fca84  lis 3, 64
  03fca88  lis 4, 114
  03fca8c  addi 3, 3, -16056
  03fca90  li 5, 0
  03fca94  lfs 1, 28(3)
  03fca98  lfs 2, -3056(4)
  03fca9c  ori 3, 31, 0
  03fcaa0  fmuls 1, 2, 1
  03fcaa4  li 4, 2
  03fcaa8  fctiwz 1, 1
  03fcaac  stfd 1, 296(1)
  03fcab0  lwz 6, 300(1)
  03fcab4  extsw 6, 6
  03fcab8  bl 0xfddc0
  03fcabc  nop
  03fcac0  b 0x3fd5ec
  03fcac4  addic 3, 30, 770
  03fcac8  bl 0x4fffb4
  03fcacc  nop
  03fcad0  cmpwi 3, 0
  03fcad4  bt 2, 0x3fd5ec
  03fcad8  lwz 3, 288(30)
  03fcadc  cmpwi 3, -1
  03fcae0  bf 1, 0x3fd5ec
  03fcae4  lhz 5, 768(30)
  03fcae8  lis 3, 64
  03fcaec  li 4, 3
  03fcaf0  vspltisw 2, -1
  03fcaf4  extsh 5, 5
  03fcaf8  addi 3, 3, -16056
  03fcafc  addic 5, 5, 1
  03fcb00  li 7, 52
  03fcb04  srawi 6, 5, 1
  03fcb08  vslw 2, 2, 2
  03fcb0c  li 8, -3056
  03fcb10  addze 6, 6
  03fcb14  sldi 6, 6, 1
  03fcb18  subc 5, 5, 6
  03fcb1c  lis 6, 114
  03fcb20  sth 5, 768(30)
  03fcb24  stb 4, 32(31)
  03fcb28  <unknown>
  03fcb2c  <unknown>
  03fcb30  li 4, 770
  03fcb34  vspltw 3, 3, 0
  03fcb38  ori 3, 31, 0
  03fcb3c  vmaddfp 2, 4, 3, 2
  03fcb40  vctsxs 2, 2, 0
  03fcb44  vsplth 2, 2, 1
  03fcb48  stvehx 2, 4, 30
  03fcb4c  bl 0x3fb2e8
  03fcb50  b 0x3fd5ec
  03fcb54  lwz 5, 288(30)
  03fcb58  lis 3, 165
  03fcb5c  lhz 6, 768(30)
  03fcb60  slwi 5, 5, 2
  03fcb64  addic 4, 3, 7136
  03fcb68  extsw 7, 5
  03fcb6c  extsh 6, 6
  03fcb70  ori 3, 31, 0
  03fcb74  sldi 6, 6, 4
  03fcb78  li 5, 1
  03fcb7c  lwzx 4, 4, 7
  03fcb80  addc 4, 4, 6
  03fcb84  addic 4, 4, 16
  03fcb88  clrldi 4, 4, 32
  03fcb8c  bl 0x3fb180
  03fcb90  fmr 31, 1
  03fcb94  lis 3, 64
  03fcb98  addi 3, 3, -16056
  03fcb9c  lfs 1, 56(3)
  03fcba0  fcmpu 0, 31, 1
  03fcba4  bt 0, 0x3fcbbc
  03fcba8  addic 3, 30, 770
  03fcbac  bl 0x4fffb4
  03fcbb0  nop
  03fcbb4  cmpwi 3, 0
  03fcbb8  bt 2, 0x3fcc3c
  03fcbbc  li 3, 2
  03fcbc0  lbz 4, 83(31)
  03fcbc4  cmpwi 4, 0
  03fcbc8  stb 3, 32(31)
  03fcbcc  bt 2, 0x3fcc0c
  03fcbd0  lis 3, 64
  03fcbd4  lis 4, 114
  03fcbd8  addi 3, 3, -16056
  03fcbdc  li 5, 0
  03fcbe0  lfs 1, 28(3)
  03fcbe4  lfs 2, -3056(4)
  03fcbe8  ori 3, 31, 0
  03fcbec  li 4, 0
  03fcbf0  fmuls 1, 2, 1
  03fcbf4  fctiwz 1, 1
  03fcbf8  stfd 1, 296(1)
  03fcbfc  lwz 6, 300(1)
  03fcc00  extsw 6, 6
  03fcc04  bl 0xfddc0
  03fcc08  nop
  03fcc0c  lis 3, 64
  03fcc10  addi 3, 3, -16056
  03fcc14  lfs 1, 12(3)
  03fcc18  lfs 2, 20(3)
  03fcc1c  bl 0xfcbe8
  03fcc20  nop
  03fcc24  lis 3, 114
  03fcc28  lfs 2, -3056(3)
  03fcc2c  fmuls 1, 1, 2
  03fcc30  bl 0x502758
  03fcc34  nop
  03fcc38  sth 3, 770(30)
  03fcc3c  lis 3, 64
  03fcc40  lis 4, 114
  03fcc44  addi 3, 3, -16056
  03fcc48  lfs 1, 60(3)
  03fcc4c  lfs 2, -3052(4)
  03fcc50  lfs 3, 724(30)
  03fcc54  fmuls 1, 2, 1
  03fcc58  fcmpu 0, 3, 1
  03fcc5c  cror 6, 1, 2
  03fcc60  bt 6, 0x3fd5ec
  03fcc64  lis 3, 64
  03fcc68  addi 3, 3, -16056
  03fcc6c  lfs 1, 64(3)
  03fcc70  fcmpu 0, 31, 1
  03fcc74  cror 6, 1, 2
  03fcc78  bt 6, 0x3fd5ec
  03fcc7c  lbz 3, 83(31)
  03fcc80  cmpwi 3, 0
  03fcc84  bt 2, 0x3fd5ec
  03fcc88  lis 3, 64
  03fcc8c  lis 4, 114
  03fcc90  addi 3, 3, -16056
  03fcc94  li 5, 0
  03fcc98  lfs 1, 68(3)
  03fcc9c  lfs 2, -3056(4)
  03fcca0  ori 3, 31, 0
  03fcca4  li 4, 0
  03fcca8  fmuls 1, 2, 1
  03fccac  fctiwz 1, 1
  03fccb0  stfd 1, 296(1)
  03fccb4  lwz 6, 300(1)
  03fccb8  extsw 6, 6
  03fccbc  bl 0xfddc0
  03fccc0  nop
  03fccc4  b 0x3fd5ec
  03fccc8  lfs 1, 16(31)
  03fcccc  lfs 2, 20(31)
  03fccd0  lis 3, 64
  03fccd4  fsubs 1, 31, 1
  03fccd8  fsubs 2, 30, 2
  03fccdc  addi 4, 3, -16056
  03fcce0  lis 5, 115
  03fcce4  addic 3, 31, 72
  03fcce8  addic 5, 5, 22784
  03fccec  fabs 3, 1
  03fccf0  fabs 4, 2
  03fccf4  stfs 1, 172(1)
  03fccf8  stfs 2, 176(1)
  03fccfc  fsubs 1, 3, 4
  03fcd00  stfs 1, 180(1)
  03fcd04  lwz 6, 172(1)
  03fcd08  lfs 2, 4(4)
  03fcd0c  lfs 1, 172(1)
  03fcd10  lwz 4, 176(1)
  03fcd14  lfs 5, 176(1)
  03fcd18  fabs 1, 1
  03fcd1c  lwz 7, 180(1)
  03fcd20  rlwinm 4, 4, 3, 29, 29
  03fcd24  lfs 6, 180(1)
  03fcd28  fabs 5, 5
  03fcd2c  rlwimi 4, 7, 2, 30, 30
  03fcd30  fsub 7, 6, 2
  03fcd34  rlwimi 4, 6, 4, 28, 28
  03fcd38  fsub 6, 6, 2
  03fcd3c  ori 6, 5, 0
  03fcd40  rlwimi 6, 4, 2, 26, 28
  03fcd44  slwi 4, 4, 2
  03fcd48  clrldi 6, 6, 32
  03fcd4c  fsel 4, 7, 1, 4
  03fcd50  lfsx 31, 5, 4
  03fcd54  lfs 1, 4(6)
  03fcd58  fsel 3, 6, 5, 3
  03fcd5c  fcmpu 0, 4, 2
  03fcd60  bt 1, 0x3fcd68
  03fcd64  b 0x3fce88
  03fcd68  fsubs 5, 3, 4
  03fcd6c  fadds 3, 3, 4
  03fcd70  addic 4, 1, 16
  03fcd74  li 7, 2
  03fcd78  addic 6, 4, 228
  03fcd7c  addic 5, 4, 212
  03fcd80  mtctr 7
  03fcd84  fdivs 3, 5, 3
  03fcd88  fmuls 4, 3, 3
  03fcd8c  stfs 3, 240(1)
  03fcd90  stfs 3, 232(1)
  03fcd94  stfs 3, 236(1)
  03fcd98  stfs 3, 228(1)
  03fcd9c  lfs 6, 240(1)
  03fcda0  lfs 7, 232(1)
  03fcda4  lfs 8, 236(1)
  03fcda8  fmuls 5, 4, 4
  03fcdac  fmuls 7, 7, 4
  03fcdb0  fmuls 6, 6, 5
  03fcdb4  fmuls 3, 5, 5
  03fcdb8  fmuls 5, 8, 5
  03fcdbc  stfs 7, 232(1)
  03fcdc0  fmuls 4, 6, 4
  03fcdc4  stfs 5, 236(1)
  03fcdc8  stfs 4, 240(1)
  03fcdcc  lfs 4, 212(4)
  03fcdd0  fmuls 4, 4, 3
  03fcdd4  stfs 4, 228(4)
  03fcdd8  lfs 4, 4(5)
  03fcddc  addic 5, 5, 8
  03fcde0  fmuls 4, 4, 3
  03fcde4  addic 4, 4, 8
  03fcde8  stfs 4, 4(6)
  03fcdec  addic 6, 6, 8
  03fcdf0  bdnz 0x3fcdcc
  03fcdf4  li 6, 4
  03fcdf8  ori 4, 1, 0
  03fcdfc  mtctr 6
  03fce00  lis 5, 115
  03fce04  addic 6, 4, 228
  03fce08  addic 5, 5, 22752
  03fce0c  ori 8, 6, 0
  03fce10  lfs 3, 228(4)
  03fce14  lfs 4, 0(5)
  03fce18  fmuls 3, 3, 4
  03fce1c  lfs 4, 4(5)
  03fce20  addic 5, 5, 8
  03fce24  stfs 3, 228(4)
  03fce28  lfs 3, 4(6)
  03fce2c  addic 4, 4, 8
  03fce30  fmuls 3, 3, 4
  03fce34  stfs 3, 4(6)
  03fce38  addic 6, 6, 8
  03fce3c  bdnz 0x3fce10
  03fce40  ori 4, 1, 0
  03fce44  mtctr 7
  03fce48  lfs 3, 228(4)
  03fce4c  fadds 2, 2, 3
  03fce50  addic 4, 4, 16
  03fce54  lfs 3, 4(8)
  03fce58  lfs 4, 8(8)
  03fce5c  lfs 5, 12(8)
  03fce60  addic 8, 8, 16
  03fce64  fadds 2, 2, 3
  03fce68  fadds 2, 2, 4
  03fce6c  fadds 2, 2, 5
  03fce70  bdnz 0x3fce48
  03fce74  lis 4, 64
  03fce78  addi 4, 4, -16056
  03fce7c  lfs 3, 36(4)
  03fce80  fadds 2, 2, 3
  03fce84  fmadds 2, 2, 31, 1
  03fce88  lis 4, 64
  03fce8c  lis 5, 114
  03fce90  fmr 1, 2
  03fce94  addi 4, 4, -16056
  03fce98  lfs 4, 40(4)
  03fce9c  lfs 3, -3048(5)
  03fcea0  lis 4, 114
  03fcea4  addic 5, 30, 728
  03fcea8  fmuls 3, 3, 4
  03fceac  lfs 2, -3052(4)
  03fceb0  fmuls 4, 2, 4
  03fceb4  fmr 2, 3
  03fceb8  bl 0x10a2e0
  03fcebc  nop
  03fcec0  lbz 3, 112(31)
  03fcec4  rlwinm 3, 3, 0, 30, 30
  03fcec8  cmpwi 3, 0
  03fcecc  bt 2, 0x3fd5ec
  03fced0  li 3, 5
  03fced4  lbz 4, 83(31)
  03fced8  cmpwi 4, 3
  03fcedc  stb 3, 32(31)
  03fcee0  bt 2, 0x3fd5ec
  03fcee4  lis 3, 64
  03fcee8  lis 4, 114
  03fceec  addi 3, 3, -16056
  03fcef0  li 5, 0
  03fcef4  lfs 1, 28(3)
  03fcef8  lfs 2, -3056(4)
  03fcefc  ori 3, 31, 0
  03fcf00  fmuls 1, 2, 1
  03fcf04  li 4, 3
  03fcf08  fctiwz 1, 1
  03fcf0c  stfd 1, 296(1)
  03fcf10  lwz 6, 300(1)
  03fcf14  extsw 6, 6
  03fcf18  bl 0xfddc0
  03fcf1c  nop
  03fcf20  b 0x3fd5ec
  03fcf24  lfs 1, 16(31)
  03fcf28  lis 3, 64
  03fcf2c  lfs 2, 20(31)
  03fcf30  fsubs 1, 31, 1
  03fcf34  fsubs 2, 30, 2
  03fcf38  addi 4, 3, -16056
  03fcf3c  lis 5, 115
  03fcf40  addic 3, 31, 72
  03fcf44  addic 5, 5, 22784
  03fcf48  fabs 3, 1
  03fcf4c  fabs 4, 2
  03fcf50  stfs 1, 160(1)
  03fcf54  stfs 2, 164(1)
  03fcf58  fsubs 1, 3, 4
  03fcf5c  stfs 1, 168(1)
  03fcf60  lwz 6, 160(1)
  03fcf64  lfs 27, 4(4)
  03fcf68  lfs 1, 160(1)
  03fcf6c  lwz 4, 164(1)
  03fcf70  lfs 2, 164(1)
  03fcf74  lwz 7, 168(1)
  03fcf78  rlwinm 4, 4, 3, 29, 29
  03fcf7c  fabs 5, 2
  03fcf80  lfs 2, 168(1)
  03fcf84  fabs 1, 1
  03fcf88  rlwimi 4, 7, 2, 30, 30
  03fcf8c  fsub 6, 2, 27
  03fcf90  rlwimi 4, 6, 4, 28, 28
  03fcf94  fsub 7, 2, 27
  03fcf98  ori 6, 5, 0
  03fcf9c  rlwimi 6, 4, 2, 26, 28
  03fcfa0  slwi 4, 4, 2
  03fcfa4  clrldi 6, 6, 32
  03fcfa8  fsel 4, 6, 1, 4
  03fcfac  lfsx 1, 5, 4
  03fcfb0  lfs 2, 4(6)
  03fcfb4  fsel 3, 7, 5, 3
  03fcfb8  fcmpu 0, 4, 27
  03fcfbc  bt 1, 0x3fcfc8
  03fcfc0  fmr 1, 27
  03fcfc4  b 0x3fd0ec
  03fcfc8  fsubs 5, 3, 4
  03fcfcc  fadds 3, 3, 4
  03fcfd0  addic 4, 1, 16
  03fcfd4  li 8, 2
  03fcfd8  addic 6, 4, 196
  03fcfdc  addic 5, 4, 180
  03fcfe0  mtctr 8
  03fcfe4  fdivs 3, 5, 3
  03fcfe8  fmuls 4, 3, 3
  03fcfec  stfs 3, 208(1)
  03fcff0  stfs 3, 200(1)
  03fcff4  stfs 3, 204(1)
  03fcff8  stfs 3, 196(1)
  03fcffc  lfs 6, 208(1)
  03fd000  lfs 7, 200(1)
  03fd004  lfs 8, 204(1)
  03fd008  fmuls 5, 4, 4
  03fd00c  fmuls 7, 7, 4
  03fd010  fmuls 6, 6, 5
  03fd014  fmuls 3, 5, 5
  03fd018  fmuls 5, 8, 5
  03fd01c  stfs 7, 200(1)
  03fd020  fmuls 4, 6, 4
  03fd024  stfs 5, 204(1)
  03fd028  stfs 4, 208(1)
  03fd02c  lfs 4, 180(4)
  03fd030  fmuls 4, 4, 3
  03fd034  stfs 4, 196(4)
  03fd038  lfs 4, 4(5)
  03fd03c  addic 5, 5, 8
  03fd040  fmuls 4, 4, 3
  03fd044  addic 4, 4, 8
  03fd048  stfs 4, 4(6)
  03fd04c  addic 6, 6, 8
  03fd050  bdnz 0x3fd02c
  03fd054  li 6, 4
  03fd058  ori 4, 1, 0
  03fd05c  mtctr 6
  03fd060  lis 5, 115
  03fd064  addic 6, 4, 196
  03fd068  addic 5, 5, 22752
  03fd06c  ori 7, 6, 0
  03fd070  lfs 3, 196(4)
  03fd074  lfs 4, 0(5)
  03fd078  fmuls 3, 3, 4
  03fd07c  lfs 4, 4(5)
  03fd080  addic 5, 5, 8
  03fd084  stfs 3, 196(4)
  03fd088  lfs 3, 4(6)
  03fd08c  addic 4, 4, 8
  03fd090  fmuls 3, 3, 4
  03fd094  stfs 3, 4(6)
  03fd098  addic 6, 6, 8
  03fd09c  bdnz 0x3fd070
  03fd0a0  ori 4, 1, 0
  03fd0a4  fmr 3, 27
  03fd0a8  mtctr 8
  03fd0ac  lfs 4, 196(4)
  03fd0b0  fadds 3, 3, 4
  03fd0b4  lfs 4, 4(7)
  03fd0b8  addic 4, 4, 16
  03fd0bc  lfs 5, 8(7)
  03fd0c0  lfs 6, 12(7)
  03fd0c4  addic 7, 7, 16
  03fd0c8  fadds 3, 3, 4
  03fd0cc  fadds 3, 3, 5
  03fd0d0  fadds 3, 3, 6
  03fd0d4  bdnz 0x3fd0ac
  03fd0d8  lis 4, 64
  03fd0dc  addi 4, 4, -16056
  03fd0e0  lfs 4, 36(4)
  03fd0e4  fadds 3, 3, 4
  03fd0e8  fmadds 1, 3, 1, 2
  03fd0ec  lis 4, 64
  03fd0f0  lis 6, 114
  03fd0f4  addi 29, 4, -16056
  03fd0f8  lis 4, 114
  03fd0fc  addic 5, 30, 728
  03fd100  lfs 4, 40(29)
  03fd104  lfs 3, -3048(4)
  03fd108  lfs 5, -3052(6)
  03fd10c  fmuls 2, 3, 4
  03fd110  fmuls 4, 5, 4
  03fd114  fmr 3, 2
  03fd118  bl 0x10a2e0
  03fd11c  nop
  03fd120  ori 3, 31, 0
  03fd124  lfs 1, 60(29)
  03fd128  bl 0x113e88
  03fd12c  nop
  03fd130  cmpwi 3, 0
  03fd134  bf 2, 0x3fd178
  03fd138  lis 3, 64
  03fd13c  addi 4, 3, -16056
  03fd140  ori 3, 31, 0
  03fd144  lfs 1, 72(4)
  03fd148  bl 0x113e88
  03fd14c  nop
  03fd150  cmpwi 3, 0
  03fd154  bf 2, 0x3fd178
  03fd158  lis 3, 64
  03fd15c  addi 4, 3, -16056
  03fd160  ori 3, 31, 0
  03fd164  lfs 1, 76(4)
  03fd168  bl 0x113e88
  03fd16c  nop
  03fd170  cmpwi 3, 0
  03fd174  bt 2, 0x3fd244
  03fd178  addic 29, 1, 128
  03fd17c  ori 3, 31, 0
  03fd180  li 4, 0
  03fd184  ori 5, 29, 0
  03fd188  bl 0xf1114
  03fd18c  nop
  03fd190  lfs 1, 132(1)
  03fd194  lfs 2, 128(1)
  03fd198  fsubs 1, 30, 1
  03fd19c  fsubs 2, 31, 2
  03fd1a0  lfs 3, 136(1)
  03fd1a4  fsubs 3, 29, 3
  03fd1a8  lis 3, 64
  03fd1ac  lis 4, 114
  03fd1b0  addi 3, 3, -16056
  03fd1b4  fmuls 4, 1, 1
  03fd1b8  stfs 2, 144(1)
  03fd1bc  stfs 1, 148(1)
  03fd1c0  stfs 3, 152(1)
  03fd1c4  stfs 28, 156(1)
  03fd1c8  lfs 5, 80(3)
  03fd1cc  fmadds 4, 2, 2, 4
  03fd1d0  lfs 6, -3052(4)
  03fd1d4  fmuls 5, 6, 5
  03fd1d8  addic 4, 1, 144
  03fd1dc  ori 3, 31, 0
  03fd1e0  fmadds 4, 3, 3, 4
  03fd1e4  ori 5, 29, 0
  03fd1e8  fsqrts 4, 4
  03fd1ec  fdivs 5, 5, 4
  03fd1f0  fsub 6, 27, 4
  03fd1f4  fsub 7, 27, 4
  03fd1f8  fsub 8, 27, 4
  03fd1fc  fsub 9, 4, 27
  03fd200  fsub 10, 4, 27
  03fd204  fsub 4, 4, 27
  03fd208  fmuls 2, 2, 5
  03fd20c  fmuls 1, 1, 5
  03fd210  fmuls 3, 3, 5
  03fd214  fsel 5, 6, 27, 2
  03fd218  fsel 6, 7, 27, 1
  03fd21c  fsel 7, 8, 27, 3
  03fd220  fsel 2, 9, 5, 2
  03fd224  fsel 1, 10, 6, 1
  03fd228  fsel 3, 4, 7, 3
  03fd22c  stfs 2, 144(1)
  03fd230  stfs 1, 148(1)
  03fd234  stfs 3, 152(1)
  03fd238  bl 0x3a01e0
  03fd23c  nop
  03fd240  b 0x3fd5ec
  03fd244  lis 3, 64
  03fd248  addi 4, 3, -16056
  03fd24c  ori 3, 31, 0
  03fd250  lfs 1, 84(4)
  03fd254  bl 0x113e88
  03fd258  nop
  03fd25c  cmpwi 3, 0
  03fd260  bt 2, 0x3fd5ec
  03fd264  lhz 3, 734(30)
  03fd268  addic 3, 3, 1
  03fd26c  extsh 4, 3
  03fd270  cmpwi 4, 3
  03fd274  sth 3, 734(30)
  03fd278  bt 0, 0x3fd5ec
  03fd27c  li 3, 2
  03fd280  lbz 4, 83(31)
  03fd284  cmpwi 4, 0
  03fd288  stb 3, 32(31)
  03fd28c  bt 2, 0x3fd2cc
  03fd290  lis 3, 64
  03fd294  lis 4, 114
  03fd298  addi 3, 3, -16056
  03fd29c  li 5, 0
  03fd2a0  lfs 1, 28(3)
  03fd2a4  lfs 2, -3056(4)
  03fd2a8  ori 3, 31, 0
  03fd2ac  li 4, 0
  03fd2b0  fmuls 1, 2, 1
  03fd2b4  fctiwz 1, 1
  03fd2b8  stfd 1, 296(1)
  03fd2bc  lwz 6, 300(1)
  03fd2c0  extsw 6, 6
  03fd2c4  bl 0xfddc0
  03fd2c8  nop
  03fd2cc  lis 3, 64
  03fd2d0  vspltisw 2, -1
  03fd2d4  li 5, 88
  03fd2d8  addi 3, 3, -16056
  03fd2dc  lis 4, 114
  03fd2e0  li 6, -3056
  03fd2e4  vslw 2, 2, 2
  03fd2e8  <unknown>
  03fd2ec  li 3, 732
  03fd2f0  vspltw 3, 3, 0
  03fd2f4  <unknown>
  03fd2f8  li 4, 0
  03fd2fc  vmaddfp 2, 4, 3, 2
  03fd300  vctsxs 2, 2, 0
  03fd304  vsplth 2, 2, 1
  03fd308  stvehx 2, 3, 30
  03fd30c  sth 4, 734(30)
  03fd310  b 0x3fd5ec
  03fd314  lis 3, 165
  03fd318  addic 4, 3, 7136
  03fd31c  lwz 3, 288(30)
  03fd320  lhz 5, 768(30)
  03fd324  slwi 3, 3, 2
  03fd328  extsh 5, 5
  03fd32c  extsw 6, 3
  03fd330  sldi 7, 5, 4
  03fd334  ori 3, 31, 0
  03fd338  li 5, 1
  03fd33c  lwzx 4, 4, 6
  03fd340  addc 4, 4, 7
  03fd344  addic 4, 4, 16
  03fd348  clrldi 4, 4, 32
  03fd34c  bl 0x3fb180
  03fd350  fmr 31, 1
  03fd354  addic 3, 30, 732
  03fd358  bl 0x4fffb4
  03fd35c  nop
  03fd360  lis 3, 64
  03fd364  addi 3, 3, -16056
  03fd368  lfs 1, 56(3)
  03fd36c  lbz 3, 83(31)
  03fd370  fcmpu 0, 31, 1
  03fd374  bt 0, 0x3fd384
  03fd378  lhz 4, 732(30)
  03fd37c  cmpwi 4, 0
  03fd380  bf 2, 0x3fd3d4
  03fd384  li 4, 4
  03fd388  cmpwi 3, 2
  03fd38c  stb 4, 32(31)
  03fd390  bt 2, 0x3fd3d4
  03fd394  lis 3, 64
  03fd398  lis 4, 114
  03fd39c  addi 3, 3, -16056
  03fd3a0  li 5, 0
  03fd3a4  lfs 1, 68(3)
  03fd3a8  lfs 2, -3056(4)
  03fd3ac  ori 3, 31, 0
  03fd3b0  li 4, 2
  03fd3b4  fmuls 1, 2, 1
  03fd3b8  fctiwz 1, 1
  03fd3bc  stfd 1, 296(1)
  03fd3c0  lwz 6, 300(1)
  03fd3c4  extsw 6, 6
  03fd3c8  bl 0xfddc0
  03fd3cc  nop
  03fd3d0  lbz 3, 83(31)
  03fd3d4  lis 4, 64
  03fd3d8  addi 4, 4, -16056
  03fd3dc  lfs 1, 64(4)
  03fd3e0  fcmpu 0, 31, 1
  03fd3e4  cror 6, 1, 2
  03fd3e8  bt 6, 0x3fd5ec
  03fd3ec  lis 4, 64
  03fd3f0  lis 5, 114
  03fd3f4  addi 4, 4, -16056
  03fd3f8  cmpwi 1, 3, 2
  03fd3fc  lfs 1, 60(4)
  03fd400  lfs 2, -3052(5)
  03fd404  lfs 3, 724(30)
  03fd408  fmuls 1, 2, 1
  03fd40c  fcmpu 0, 3, 1
  03fd410  crorc 2, 6, 0
  03fd414  bt 2, 0x3fd5ec
  03fd418  lis 3, 64
  03fd41c  lis 4, 114
  03fd420  addi 3, 3, -16056
  03fd424  li 5, 0
  03fd428  lfs 1, 68(3)
  03fd42c  lfs 2, -3056(4)
  03fd430  ori 3, 31, 0
  03fd434  fmuls 1, 2, 1
  03fd438  li 4, 2
  03fd43c  fctiwz 1, 1
  03fd440  stfd 1, 296(1)
  03fd444  lwz 6, 300(1)
  03fd448  extsw 6, 6
  03fd44c  bl 0xfddc0
  03fd450  nop
  03fd454  b 0x3fd5ec
  03fd458  lbz 3, 112(31)
  03fd45c  rlwinm 3, 3, 0, 30, 30
  03fd460  cmpwi 3, 0
  03fd464  bt 2, 0x3fd4bc
  03fd468  li 3, 2
  03fd46c  lbz 4, 83(31)
  03fd470  cmpwi 4, 0
  03fd474  stb 3, 32(31)
  03fd478  bt 2, 0x3fd5ec
  03fd47c  lis 3, 64
  03fd480  lis 4, 114
  03fd484  addi 3, 3, -16056
  03fd488  li 5, 0
  03fd48c  lfs 1, 28(3)
  03fd490  lfs 2, -3056(4)
  03fd494  ori 3, 31, 0
  03fd498  li 4, 0
  03fd49c  fmuls 1, 2, 1
  03fd4a0  fctiwz 1, 1
  03fd4a4  stfd 1, 296(1)
  03fd4a8  lwz 6, 300(1)
  03fd4ac  extsw 6, 6
  03fd4b0  bl 0xfddc0
  03fd4b4  nop
  03fd4b8  b 0x3fd5ec
  03fd4bc  lfs 1, 196(31)
  03fd4c0  lfs 2, 192(31)
  03fd4c4  fmuls 3, 1, 1
  03fd4c8  lfs 4, 200(31)
  03fd4cc  lis 3, 114
  03fd4d0  lfs 5, -3052(3)
  03fd4d4  fmadds 3, 2, 2, 3
  03fd4d8  fneg 5, 5
  03fd4dc  lis 3, 64
  03fd4e0  addi 3, 3, -16056
  03fd4e4  fmadds 3, 4, 4, 3
  03fd4e8  lfs 6, 4(3)
  03fd4ec  lfs 7, 16(31)
  03fd4f0  lfs 8, 20(31)
  03fd4f4  lfs 9, 24(31)
  03fd4f8  fsqrts 3, 3
  03fd4fc  fdivs 5, 5, 3
  03fd500  fsub 10, 6, 3
  03fd504  fsub 11, 6, 3
  03fd508  fsub 12, 6, 3
  03fd50c  fsub 13, 3, 6
  03fd510  fsub 0, 3, 6
  03fd514  fsub 3, 3, 6
  03fd518  fmuls 4, 4, 5
  03fd51c  fmuls 1, 1, 5
  03fd520  fmuls 2, 2, 5
  03fd524  fsel 5, 10, 6, 4
  03fd528  fsel 10, 11, 6, 1
  03fd52c  fsel 6, 12, 6, 2
  03fd530  fsel 4, 13, 5, 4
  03fd534  fsel 1, 0, 10, 1
  03fd538  fsel 2, 3, 6, 2
  03fd53c  fadds 3, 9, 4
  03fd540  fadds 1, 8, 1
  03fd544  fadds 2, 7, 2
  03fd548  stfs 3, 24(31)
  03fd54c  stfs 1, 20(31)
  03fd550  stfs 2, 16(31)
  03fd554  b 0x3fd5ec
  03fd558  lfs 31, 16(31)
  03fd55c  addic 4, 30, 112
  03fd560  lfs 30, 20(31)
  03fd564  ori 3, 31, 0
  03fd568  lfs 29, 24(31)
  03fd56c  bl 0x10b030
  03fd570  nop
  03fd574  li 4, 352
  03fd578  and 3, 3, 4
  03fd57c  cmpwi 3, 0
  03fd580  bt 2, 0x3fd5b0
  03fd584  ori 3, 31, 0
  03fd588  bl 0x3fac98
  03fd58c  li 3, 0
  03fd590  li 4, 0
  03fd594  ori 5, 31, 0
  03fd598  bl 0x15d12c
  03fd59c  nop
  03fd5a0  ori 3, 31, 0
  03fd5a4  bl 0xefb38
  03fd5a8  nop
  03fd5ac  b 0x3fd8a4
  03fd5b0  lfs 1, 16(31)
  03fd5b4  lfs 2, 20(31)
  03fd5b8  fsubs 1, 1, 31
  03fd5bc  lfs 3, 24(31)
  03fd5c0  fsubs 2, 2, 30
  03fd5c4  lfs 4, 704(30)
  03fd5c8  fsubs 3, 3, 29
  03fd5cc  lfs 5, 708(30)
  03fd5d0  lfs 6, 712(30)
  03fd5d4  fadds 1, 4, 1
  03fd5d8  fadds 2, 5, 2
  03fd5dc  fadds 3, 6, 3
  03fd5e0  stfs 1, 704(30)
  03fd5e4  stfs 2, 708(30)
  03fd5e8  stfs 3, 712(30)
  03fd5ec  lis 3, 133
  03fd5f0  lwz 3, 18032(3)
  03fd5f4  cmpwi 3, 0
  03fd5f8  bt 2, 0x3fd818
  03fd5fc  lfs 1, 24(31)
  03fd600  stfs 1, 700(30)
  03fd604  lbz 3, 32(31)
  03fd608  cmpwi 1, 3, 10
  03fd60c  cmpwi 3, 0
  03fd610  cror 2, 2, 6
  03fd614  bt 2, 0x3fd790
  03fd618  lis 3, 64
  03fd61c  lis 4, 114
  03fd620  addi 29, 3, -16056
  03fd624  addic 3, 30, 748
  03fd628  lfs 1, 92(29)
  03fd62c  lfs 2, -3052(4)
  03fd630  fmuls 2, 2, 1
  03fd634  bl 0x109af0
  03fd638  nop
  03fd63c  lfs 1, 756(30)
  03fd640  lfs 2, 752(30)
  03fd644  bl 0x502578
  03fd648  nop
  03fd64c  lfs 2, 764(30)
  03fd650  stfs 1, 756(30)
  03fd654  fmr 1, 2
  03fd658  lfs 3, 760(30)
  03fd65c  fmr 2, 3
  03fd660  bl 0x502578
  03fd664  nop
  03fd668  lfs 2, 744(30)
  03fd66c  stfs 1, 764(30)
  03fd670  lfs 3, 740(30)
  03fd674  fmr 1, 2
  03fd678  fmr 2, 3
  03fd67c  bl 0x502578
  03fd680  nop
  03fd684  lfs 2, 96(29)
  03fd688  lfs 3, 756(30)
  03fd68c  lfs 4, 100(29)
  03fd690  fsubs 5, 2, 3
  03fd694  fsubs 6, 4, 3
  03fd698  fsub 7, 3, 5
  03fd69c  fsel 3, 7, 5, 3
  03fd6a0  lfs 5, 104(29)
  03fd6a4  lfs 7, 108(29)
  03fd6a8  fsub 8, 6, 3
  03fd6ac  fsel 3, 8, 6, 3
  03fd6b0  lfs 6, 112(29)
  03fd6b4  lfs 8, 116(29)
  03fd6b8  lfs 9, 704(30)
  03fd6bc  lfs 11, 748(30)
  03fd6c0  stfs 1, 744(30)
  03fd6c4  fmuls 10, 3, 3
  03fd6c8  fmuls 12, 10, 3
  03fd6cc  fmuls 1, 10, 12
  03fd6d0  fmadds 3, 12, 5, 3
  03fd6d4  fmuls 12, 10, 1
  03fd6d8  fmadds 1, 1, 7, 3
  03fd6dc  fmuls 3, 10, 12
  03fd6e0  fmadds 1, 12, 6, 1
  03fd6e4  fmadds 1, 3, 8, 1
  03fd6e8  fmadds 1, 11, 1, 9
  03fd6ec  stfs 1, 16(31)
  03fd6f0  lfs 1, 764(30)
  03fd6f4  fsubs 3, 2, 1
  03fd6f8  fsubs 9, 4, 1
  03fd6fc  fsub 10, 1, 3
  03fd700  fsel 1, 10, 3, 1
  03fd704  lfs 10, 708(30)
  03fd708  fsub 3, 9, 1
  03fd70c  fsel 1, 3, 9, 1
  03fd710  lfs 3, 748(30)
  03fd714  fmuls 9, 1, 1
  03fd718  fmuls 11, 9, 1
  03fd71c  fmuls 12, 9, 11
  03fd720  fmadds 1, 11, 5, 1
  03fd724  fmuls 11, 9, 12
  03fd728  fmadds 1, 12, 7, 1
  03fd72c  fmuls 9, 9, 11
  03fd730  fmadds 1, 11, 6, 1
  03fd734  fmadds 1, 9, 8, 1
  03fd738  fmadds 1, 3, 1, 10
  03fd73c  stfs 1, 20(31)
  03fd740  lfs 1, 744(30)
  03fd744  fsubs 2, 2, 1
  03fd748  fsubs 3, 4, 1
  03fd74c  fsub 4, 1, 2
  03fd750  fsel 1, 4, 2, 1
  03fd754  lfs 4, 712(30)
  03fd758  fsub 2, 3, 1
  03fd75c  fsel 1, 2, 3, 1
  03fd760  lfs 2, 748(30)
  03fd764  fmuls 3, 1, 1
  03fd768  fmuls 9, 3, 1
  03fd76c  fmuls 10, 3, 9
  03fd770  fmadds 1, 9, 5, 1
  03fd774  fmuls 5, 3, 10
  03fd778  fmadds 1, 10, 7, 1
  03fd77c  fmuls 3, 3, 5
  03fd780  fmadds 1, 5, 6, 1
  03fd784  fmadds 1, 3, 8, 1
  03fd788  fmadds 1, 2, 1, 4
  03fd78c  stfs 1, 24(31)
  03fd790  lis 3, 149
  03fd794  lfs 1, 20(31)
  03fd798  lfs 2, 16(31)
  03fd79c  addic 3, 3, 5056
  03fd7a0  lfs 3, 324(3)
  03fd7a4  lfs 4, 320(3)
  03fd7a8  fsubs 1, 1, 3
  03fd7ac  fsubs 2, 2, 4
  03fd7b0  lfs 3, 24(31)
  03fd7b4  lfs 4, 328(3)
  03fd7b8  fsubs 3, 3, 4
  03fd7bc  lis 3, 64
  03fd7c0  fmuls 1, 1, 1
  03fd7c4  addi 3, 3, -16056
  03fd7c8  fmadds 1, 2, 2, 1
  03fd7cc  lfs 2, 76(3)
  03fd7d0  fmadds 1, 3, 3, 1
  03fd7d4  fsqrts 1, 1
  03fd7d8  fcmpu 0, 1, 2
  03fd7dc  cror 6, 1, 2
  03fd7e0  bt 6, 0x3fd818
  03fd7e4  ori 3, 31, 0
  03fd7e8  lwz 4, 772(30)
  03fd7ec  extsw 4, 4
  03fd7f0  bl 0x15cc7c
  03fd7f4  nop
  03fd7f8  cmpwi 3, 0
  03fd7fc  bf 2, 0x3fd818
  03fd800  li 3, 7
  03fd804  li 4, 4
  03fd808  ori 5, 31, 0
  03fd80c  bl 0x15d12c
  03fd810  nop
  03fd814  stw 3, 772(30)
  03fd818  lis 3, 133
  03fd81c  lwz 3, 18036(3)
  03fd820  cmpwi 3, 0
  03fd824  bt 2, 0x3fd830
  03fd828  ori 3, 31, 0
  03fd82c  bl 0x3fa1a8
  03fd830  lis 3, 133
  03fd834  lwz 3, 18040(3)
  03fd838  cmpwi 3, 0
  03fd83c  bt 2, 0x3fd85c
  03fd840  lis 3, 151
  03fd844  addic 3, 3, -25376
  03fd848  lwz 3, 8332(3)
  03fd84c  cmpwi 3, 22
  03fd850  bt 2, 0x3fd85c
  03fd854  ori 3, 31, 0
  03fd858  bl 0x3f9dc0
  03fd85c  lis 3, 151
  03fd860  lwz 3, -25488(3)
  03fd864  cmpwi 3, 18
  03fd868  bf 2, 0x3fd8a4
  03fd86c  lis 3, 161
  03fd870  lwz 3, 1800(3)
  03fd874  cmpwi 3, 2
  03fd878  bf 2, 0x3fd8a4
  03fd87c  lis 3, 150
  03fd880  addic 3, 3, -12976
  03fd884  lwz 3, 48(3)
  03fd888  cmpwi 1, 3, 5
  03fd88c  cmpwi 3, 3
  03fd890  cror 2, 0, 5
  03fd894  bt 2, 0x3fd8a4
  03fd898  ori 3, 31, 0
  03fd89c  bl 0xefb38
  03fd8a0  nop
  03fd8a4  ld 0, 400(1)
  03fd8a8  mtlr 0
  03fd8ac  lfd 27, 344(1)
  03fd8b0  lfd 28, 352(1)
  03fd8b4  lfd 29, 360(1)
  03fd8b8  lfd 30, 368(1)
  03fd8bc  lfd 31, 376(1)
  03fd8c0  ld 28, 312(1)
  03fd8c4  ld 29, 320(1)
  03fd8c8  ld 30, 328(1)
  03fd8cc  ld 31, 336(1)
  03fd8d0  addi 1, 1, 384
  03fd8d4  blr
