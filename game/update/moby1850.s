# game/update/moby1850.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1850_002c7fb8:   # 0x2c7fb8, 0x4a4 bytes
  02c7fb8  stdu 1, -400(1)
  02c7fbc  mflr 0
  02c7fc0  std 0, 416(1)
  02c7fc4  stfd 18, 288(1)
  02c7fc8  stfd 19, 296(1)
  02c7fcc  stfd 20, 304(1)
  02c7fd0  stfd 21, 312(1)
  02c7fd4  stfd 22, 320(1)
  02c7fd8  stfd 23, 328(1)
  02c7fdc  stfd 24, 336(1)
  02c7fe0  stfd 25, 344(1)
  02c7fe4  stfd 26, 352(1)
  02c7fe8  stfd 27, 360(1)
  02c7fec  stfd 28, 368(1)
  02c7ff0  stfd 29, 376(1)
  02c7ff4  stfd 30, 384(1)
  02c7ff8  stfd 31, 392(1)
  02c7ffc  std 31, 280(1)
  02c8000  ori 31, 3, 0
  02c8004  li 3, 11
  02c8008  std 30, 272(1)
  02c800c  lis 4, 44
  02c8010  std 29, 264(1)
  02c8014  std 28, 256(1)
  02c8018  addi 30, 4, 32676
  02c801c  bl 0x685c4
  02c8020  nop
  02c8024  std 3, 232(1)
  02c8028  li 3, 0
  02c802c  li 4, 2
  02c8030  li 5, 0
  02c8034  li 6, 1
  02c8038  li 7, 128
  02c803c  bl 0x502ea8
  02c8040  nop
  02c8044  std 3, 248(1)
  02c8048  li 3, 0
  02c804c  lis 9, 0
  02c8050  li 4, 0
  02c8054  li 5, 1
  02c8058  li 6, 1
  02c805c  li 7, 1
  02c8060  li 8, 0
  02c8064  ori 9, 9, 65424
  02c8068  bl 0x502fd4
  02c806c  nop
  02c8070  std 3, 240(1)
  02c8074  li 4, 0
  02c8078  li 3, 0
  02c807c  li 5, 0
  02c8080  li 6, 0
  02c8084  li 7, 0
  02c8088  li 8, 0
  02c808c  bl 0x502f08
  02c8090  nop
  02c8094  li 4, 0
  02c8098  std 3, 224(1)
  02c809c  lfs 29, 0(30)
  02c80a0  lis 3, 16256
  02c80a4  stw 4, 192(1)
  02c80a8  stw 4, 196(1)
  02c80ac  stw 4, 200(1)
  02c80b0  lfs 2, 4(30)
  02c80b4  stw 3, 204(1)
  02c80b8  stw 3, 208(1)
  02c80bc  stw 4, 212(1)
  02c80c0  stw 3, 216(1)
  02c80c4  stw 3, 220(1)
  02c80c8  lfs 1, 212(31)
  02c80cc  lfs 3, 208(31)
  02c80d0  fmuls 4, 1, 1
  02c80d4  lfs 5, 216(31)
  02c80d8  lis 3, 124
  02c80dc  lis 5, 149
  02c80e0  lfs 6, -11192(3)
  02c80e4  fmadds 4, 3, 3, 4
  02c80e8  lis 3, 266
  02c80ec  addic 4, 3, 4288
  02c80f0  fmadds 4, 5, 5, 4
  02c80f4  lfs 21, 4288(3)
  02c80f8  lfs 22, 4(4)
  02c80fc  addic 3, 5, 5056
  02c8100  lfs 23, 8(4)
  02c8104  fsqrts 4, 4
  02c8108  lfs 7, 324(3)
  02c810c  lfs 8, 320(3)
  02c8110  lfs 9, 328(3)
  02c8114  lis 5, 124
  02c8118  fmr 26, 29
  02c811c  lwz 5, -11188(5)
  02c8120  stw 5, 188(1)
  02c8124  stw 5, 184(1)
  02c8128  stw 5, 180(1)
  02c812c  stw 5, 176(1)
  02c8130  lfs 31, 12(4)
  02c8134  lfs 30, 332(3)
  02c8138  fmr 25, 26
  02c813c  fmr 24, 25
  02c8140  fdivs 6, 6, 4
  02c8144  fsub 10, 29, 4
  02c8148  fsub 12, 29, 4
  02c814c  fsub 13, 29, 4
  02c8150  fsub 11, 4, 29
  02c8154  fsub 0, 4, 29
  02c8158  fsub 4, 4, 29
  02c815c  fmuls 1, 1, 6
  02c8160  fmuls 3, 3, 6
  02c8164  fmuls 5, 5, 6
  02c8168  fsel 6, 10, 29, 1
  02c816c  fsel 10, 12, 29, 3
  02c8170  fsel 12, 13, 29, 5
  02c8174  fsel 1, 11, 6, 1
  02c8178  fsel 3, 0, 10, 3
  02c817c  fsel 4, 4, 12, 5
  02c8180  fadds 22, 22, 1
  02c8184  fadds 21, 21, 3
  02c8188  fadds 23, 23, 4
  02c818c  fsubs 4, 7, 22
  02c8190  fsubs 3, 8, 21
  02c8194  fsubs 5, 9, 23
  02c8198  fmuls 1, 4, 4
  02c819c  fmadds 1, 3, 3, 1
  02c81a0  fmadds 1, 5, 5, 1
  02c81a4  fsqrts 6, 1
  02c81a8  fcmpu 0, 6, 24
  02c81ac  bt 2, 0x2c81fc
  02c81b0  frsqrte 6, 1
  02c81b4  lis 3, 44
  02c81b8  addi 3, 3, 32676
  02c81bc  lfs 7, 8(3)
  02c81c0  fmuls 8, 1, 6
  02c81c4  fmuls 9, 7, 6
  02c81c8  fnmsubs 8, 8, 6, 2
  02c81cc  fmadds 6, 8, 9, 6
  02c81d0  fmuls 8, 1, 6
  02c81d4  fmuls 9, 7, 6
  02c81d8  fnmsubs 8, 8, 6, 2
  02c81dc  fmadds 6, 8, 9, 6
  02c81e0  fmuls 1, 1, 6
  02c81e4  fmuls 7, 7, 6
  02c81e8  fnmsubs 1, 1, 6, 2
  02c81ec  fmadds 26, 1, 7, 6
  02c81f0  fmuls 24, 26, 3
  02c81f4  fmuls 25, 26, 4
  02c81f8  fmuls 26, 26, 5
  02c81fc  lis 3, 151
  02c8200  addic 3, 3, -25376
  02c8204  lfs 1, 656(3)
  02c8208  lfs 2, 664(3)
  02c820c  fmuls 3, 1, 26
  02c8210  fmuls 4, 2, 25
  02c8214  lfs 5, 660(3)
  02c8218  fmuls 6, 5, 24
  02c821c  lis 3, 44
  02c8220  addi 3, 3, 32676
  02c8224  fmsubs 2, 2, 24, 3
  02c8228  fmsubs 3, 5, 26, 4
  02c822c  fmsubs 1, 1, 25, 6
  02c8230  lfs 5, 12(3)
  02c8234  fmuls 4, 2, 2
  02c8238  lis 31, 124
  02c823c  addic 30, 1, 112
  02c8240  addic 31, 31, -11264
  02c8244  fmadds 4, 3, 3, 4
  02c8248  li 29, 4
  02c824c  ori 5, 30, 0
  02c8250  lis 3, 124
  02c8254  fmadds 4, 1, 1, 4
  02c8258  ori 4, 31, 0
  02c825c  mtctr 29
  02c8260  fsqrts 4, 4
  02c8264  fdivs 5, 5, 4
  02c8268  fsub 6, 29, 4
  02c826c  fsub 7, 29, 4
  02c8270  fsub 8, 29, 4
  02c8274  fsub 20, 4, 29
  02c8278  fsub 19, 4, 29
  02c827c  fsub 18, 4, 29
  02c8280  fmuls 3, 3, 5
  02c8284  fmuls 2, 2, 5
  02c8288  fmuls 1, 1, 5
  02c828c  fsel 4, 6, 29, 3
  02c8290  fsel 5, 7, 29, 2
  02c8294  fsel 6, 8, 29, 1
  02c8298  fsel 20, 20, 4, 3
  02c829c  fsel 19, 19, 5, 2
  02c82a0  fsel 18, 18, 6, 1
  02c82a4  fmuls 29, 25, 20
  02c82a8  fmuls 27, 26, 19
  02c82ac  fmuls 28, 24, 18
  02c82b0  fmsubs 29, 24, 19, 29
  02c82b4  fmsubs 27, 25, 18, 27
  02c82b8  fmsubs 28, 26, 20, 28
  02c82bc  lfs 1, -11200(3)
  02c82c0  lfs 2, 4(4)
  02c82c4  lfs 3, 0(4)
  02c82c8  fmuls 2, 2, 1
  02c82cc  lfs 4, 8(4)
  02c82d0  fmuls 3, 3, 1
  02c82d4  fmuls 1, 4, 1
  02c82d8  lfs 4, 12(4)
  02c82dc  addic 4, 4, 16
  02c82e0  fmuls 5, 2, 20
  02c82e4  fmuls 6, 2, 19
  02c82e8  fmuls 2, 2, 18
  02c82ec  fmuls 7, 3, 30
  02c82f0  fmadds 5, 3, 24, 5
  02c82f4  fmadds 6, 3, 25, 6
  02c82f8  fmadds 2, 3, 26, 2
  02c82fc  fmadds 3, 4, 31, 7
  02c8300  fmadds 5, 1, 27, 5
  02c8304  fmadds 6, 1, 28, 6
  02c8308  fmadds 1, 1, 29, 2
  02c830c  stfs 3, 12(5)
  02c8310  fmadds 2, 4, 21, 5
  02c8314  fmadds 3, 4, 22, 6
  02c8318  fmadds 1, 4, 23, 1
  02c831c  stfs 2, 0(5)
  02c8320  stfs 3, 4(5)
  02c8324  stfs 1, 8(5)
  02c8328  addic 5, 5, 16
  02c832c  bdnz 0x2c82bc
  02c8330  lis 3, 161
  02c8334  li 4, 0
  02c8338  addic 28, 3, 24396
  02c833c  li 5, 0
  02c8340  addic 3, 1, 112
  02c8344  li 7, 9
  02c8348  lwz 6, 28(28)
  02c834c  bl 0x72280
  02c8350  nop
  02c8354  li 4, -1
  02c8358  lwz 3, 28(28)
  02c835c  mtctr 29
  02c8360  stw 4, 188(1)
  02c8364  stw 4, 184(1)
  02c8368  stw 4, 180(1)
  02c836c  stw 4, 176(1)
  02c8370  lis 4, 124
  02c8374  lfs 1, -11196(4)
  02c8378  lfs 2, 4(31)
  02c837c  lfs 3, 0(31)
  02c8380  fmuls 2, 2, 1
  02c8384  lfs 4, 8(31)
  02c8388  fmuls 3, 3, 1
  02c838c  fmuls 1, 4, 1
  02c8390  lfs 4, 12(31)
  02c8394  addic 31, 31, 16
  02c8398  fmuls 5, 2, 20
  02c839c  fmuls 6, 2, 19
  02c83a0  fmuls 2, 2, 18
  02c83a4  fmuls 7, 3, 30
  02c83a8  fmadds 5, 3, 24, 5
  02c83ac  fmadds 6, 3, 25, 6
  02c83b0  fmadds 2, 3, 26, 2
  02c83b4  fmadds 3, 4, 31, 7
  02c83b8  fmadds 5, 1, 27, 5
  02c83bc  fmadds 6, 1, 28, 6
  02c83c0  fmadds 1, 1, 29, 2
  02c83c4  stfs 3, 12(30)
  02c83c8  fmadds 2, 4, 21, 5
  02c83cc  fmadds 3, 4, 22, 6
  02c83d0  fmadds 1, 4, 23, 1
  02c83d4  stfs 2, 0(30)
  02c83d8  stfs 3, 4(30)
  02c83dc  stfs 1, 8(30)
  02c83e0  addic 30, 30, 16
  02c83e4  bdnz 0x2c8370
  02c83e8  ori 6, 3, 0
  02c83ec  addic 3, 1, 112
  02c83f0  li 4, 0
  02c83f4  li 5, 0
  02c83f8  li 7, 9
  02c83fc  bl 0x72280
  02c8400  nop
  02c8404  ld 0, 416(1)
  02c8408  mtlr 0
  02c840c  lfd 18, 288(1)
  02c8410  lfd 19, 296(1)
  02c8414  lfd 20, 304(1)
  02c8418  lfd 21, 312(1)
  02c841c  lfd 22, 320(1)
  02c8420  lfd 23, 328(1)
  02c8424  lfd 24, 336(1)
  02c8428  lfd 25, 344(1)
  02c842c  lfd 26, 352(1)
  02c8430  lfd 27, 360(1)
  02c8434  lfd 28, 368(1)
  02c8438  lfd 29, 376(1)
  02c843c  lfd 30, 384(1)
  02c8440  lfd 31, 392(1)
  02c8444  ld 28, 256(1)
  02c8448  ld 29, 264(1)
  02c844c  ld 30, 272(1)
  02c8450  ld 31, 280(1)
  02c8454  addi 1, 1, 400
  02c8458  blr

M1850_002c8468:   # 0x2c8468, 0x390 bytes
  02c8468  stdu 1, -368(1)
  02c846c  mflr 0
  02c8470  std 0, 384(1)
  02c8474  stfd 23, 296(1)
  02c8478  stfd 24, 304(1)
  02c847c  stfd 25, 312(1)
  02c8480  stfd 26, 320(1)
  02c8484  stfd 27, 328(1)
  02c8488  stfd 28, 336(1)
  02c848c  stfd 29, 344(1)
  02c8490  stfd 30, 352(1)
  02c8494  stfd 31, 360(1)
  02c8498  li 3, 8
  02c849c  std 31, 288(1)
  02c84a0  lis 4, 45
  02c84a4  std 30, 280(1)
  02c84a8  std 29, 272(1)
  02c84ac  std 28, 264(1)
  02c84b0  addi 31, 4, -31652
  02c84b4  bl 0x685c4
  02c84b8  nop
  02c84bc  std 3, 232(1)
  02c84c0  li 4, 2
  02c84c4  li 3, 0
  02c84c8  li 5, 0
  02c84cc  li 6, 1
  02c84d0  li 7, 128
  02c84d4  bl 0x502ea8
  02c84d8  nop
  02c84dc  std 3, 248(1)
  02c84e0  lis 9, 0
  02c84e4  li 3, 0
  02c84e8  li 4, 0
  02c84ec  li 5, 1
  02c84f0  li 6, 1
  02c84f4  li 7, 1
  02c84f8  li 8, 0
  02c84fc  ori 9, 9, 65424
  02c8500  bl 0x502fd4
  02c8504  nop
  02c8508  std 3, 240(1)
  02c850c  li 3, 0
  02c8510  li 4, 0
  02c8514  li 5, 0
  02c8518  li 6, 0
  02c851c  li 7, 0
  02c8520  li 8, 0
  02c8524  bl 0x502f08
  02c8528  nop
  02c852c  std 3, 224(1)
  02c8530  lis 4, 151
  02c8534  li 3, 0
  02c8538  lfs 31, 0(31)
  02c853c  lis 5, 16256
  02c8540  addic 4, 4, -25432
  02c8544  stw 3, 192(1)
  02c8548  stw 3, 196(1)
  02c854c  stw 3, 200(1)
  02c8550  lfs 30, 4(31)
  02c8554  stw 5, 204(1)
  02c8558  stw 5, 208(1)
  02c855c  stw 3, 212(1)
  02c8560  lbz 3, 21(4)
  02c8564  stw 5, 216(1)
  02c8568  cmpwi 3, 0
  02c856c  stw 5, 220(1)
  02c8570  bt 2, 0x2c8580
  02c8574  lis 3, 124
  02c8578  lwz 31, -11340(3)
  02c857c  b 0x2c8588
  02c8580  lis 3, 124
  02c8584  lwz 31, -11344(3)
  02c8588  li 30, 0
  02c858c  lis 3, 266
  02c8590  addic 3, 3, 8880
  02c8594  lbzx 3, 3, 30
  02c8598  cmpwi 3, 0
  02c859c  bt 2, 0x2c87a4
  02c85a0  lis 3, 266
  02c85a4  slwi 29, 30, 2
  02c85a8  addic 3, 3, 8844
  02c85ac  extsw 29, 29
  02c85b0  clrlwi 28, 31, 8
  02c85b4  lfsx 1, 3, 29
  02c85b8  bl 0x502758
  02c85bc  nop
  02c85c0  lis 5, 266
  02c85c4  slwi 4, 30, 4
  02c85c8  addic 5, 5, 8784
  02c85cc  lis 6, 151
  02c85d0  addc 5, 5, 4
  02c85d4  addic 6, 6, -25376
  02c85d8  clrldi 5, 5, 32
  02c85dc  lfs 1, 656(6)
  02c85e0  lfs 5, 0(5)
  02c85e4  lfs 7, 8(5)
  02c85e8  lfs 2, 664(6)
  02c85ec  fmuls 8, 1, 7
  02c85f0  lfs 6, 4(5)
  02c85f4  fmuls 3, 2, 5
  02c85f8  lfs 4, 660(6)
  02c85fc  fmuls 1, 1, 6
  02c8600  fmuls 9, 4, 7
  02c8604  fmuls 4, 4, 5
  02c8608  fmuls 2, 2, 6
  02c860c  fmr 10, 31
  02c8610  lis 6, 266
  02c8614  fneg 0, 3
  02c8618  fneg 3, 8
  02c861c  fneg 29, 1
  02c8620  fneg 1, 4
  02c8624  fneg 13, 9
  02c8628  fneg 2, 2
  02c862c  fmr 11, 10
  02c8630  addic 6, 6, 8736
  02c8634  rlwimi 28, 3, 24, 0, 7
  02c8638  fsubs 0, 0, 3
  02c863c  fsubs 29, 29, 1
  02c8640  fsubs 13, 13, 2
  02c8644  fmr 12, 11
  02c8648  addc 3, 6, 4
  02c864c  stw 28, 188(1)
  02c8650  fmuls 1, 0, 0
  02c8654  clrldi 3, 3, 32
  02c8658  stw 28, 184(1)
  02c865c  stw 28, 180(1)
  02c8660  stw 28, 176(1)
  02c8664  fmadds 9, 13, 13, 1
  02c8668  lfs 1, 0(3)
  02c866c  lfs 2, 4(3)
  02c8670  lfs 3, 8(3)
  02c8674  lfs 4, 12(3)
  02c8678  lfs 8, 12(5)
  02c867c  fmadds 9, 29, 29, 9
  02c8680  fsqrts 28, 9
  02c8684  fcmpu 0, 28, 12
  02c8688  bt 2, 0x2c86d8
  02c868c  frsqrte 10, 9
  02c8690  lis 3, 45
  02c8694  addi 3, 3, -31652
  02c8698  lfs 11, 8(3)
  02c869c  fmuls 12, 9, 10
  02c86a0  fmuls 28, 11, 10
  02c86a4  fnmsubs 12, 12, 10, 30
  02c86a8  fmadds 10, 12, 28, 10
  02c86ac  fmuls 12, 9, 10
  02c86b0  fmuls 28, 11, 10
  02c86b4  fnmsubs 12, 12, 10, 30
  02c86b8  fmadds 10, 12, 28, 10
  02c86bc  fmuls 9, 9, 10
  02c86c0  fmuls 11, 11, 10
  02c86c4  fnmsubs 9, 9, 10, 30
  02c86c8  fmadds 10, 9, 11, 10
  02c86cc  fmuls 12, 13, 10
  02c86d0  fmuls 11, 0, 10
  02c86d4  fmuls 10, 29, 10
  02c86d8  fmuls 9, 7, 11
  02c86dc  fmuls 13, 5, 10
  02c86e0  li 5, 4
  02c86e4  fmuls 0, 6, 12
  02c86e8  lis 4, 124
  02c86ec  lis 3, 266
  02c86f0  mtctr 5
  02c86f4  addic 3, 3, 8868
  02c86f8  addic 4, 4, -11264
  02c86fc  addic 5, 1, 112
  02c8700  fmsubs 9, 6, 10, 9
  02c8704  fmsubs 13, 7, 12, 13
  02c8708  fmsubs 0, 5, 11, 0
  02c870c  lfsx 29, 3, 29
  02c8710  lfs 28, 4(4)
  02c8714  lfs 27, 0(4)
  02c8718  fmuls 28, 28, 29
  02c871c  fmuls 27, 27, 29
  02c8720  lfs 26, 8(4)
  02c8724  fmuls 29, 26, 29
  02c8728  lfs 26, 12(4)
  02c872c  addic 4, 4, 16
  02c8730  fmuls 25, 28, 12
  02c8734  fmuls 24, 28, 11
  02c8738  fmuls 28, 28, 10
  02c873c  fmuls 23, 27, 8
  02c8740  fmadds 25, 27, 5, 25
  02c8744  fmadds 24, 27, 6, 24
  02c8748  fmadds 28, 27, 7, 28
  02c874c  fmadds 27, 26, 4, 23
  02c8750  fmadds 25, 9, 29, 25
  02c8754  fmadds 24, 13, 29, 24
  02c8758  fmadds 29, 0, 29, 28
  02c875c  stfs 27, 12(5)
  02c8760  fmadds 28, 26, 1, 25
  02c8764  fmadds 27, 26, 2, 24
  02c8768  fmadds 29, 26, 3, 29
  02c876c  stfs 28, 0(5)
  02c8770  stfs 27, 4(5)
  02c8774  stfs 29, 8(5)
  02c8778  addic 5, 5, 16
  02c877c  bdnz 0x2c870c
  02c8780  lis 4, 161
  02c8784  addic 3, 1, 112
  02c8788  addic 6, 4, 24396
  02c878c  li 4, 0
  02c8790  li 5, 0
  02c8794  li 7, 9
  02c8798  lwz 6, 28(6)
  02c879c  bl 0x72280
  02c87a0  nop
  02c87a4  addic 30, 30, 1
  02c87a8  extsw 30, 30
  02c87ac  cmpwi 30, 3
  02c87b0  bt 0, 0x2c858c
  02c87b4  ld 0, 384(1)
  02c87b8  mtlr 0
  02c87bc  lfd 23, 296(1)
  02c87c0  lfd 24, 304(1)
  02c87c4  lfd 25, 312(1)
  02c87c8  lfd 26, 320(1)
  02c87cc  lfd 27, 328(1)
  02c87d0  lfd 28, 336(1)
  02c87d4  lfd 29, 344(1)
  02c87d8  lfd 30, 352(1)
  02c87dc  lfd 31, 360(1)
  02c87e0  ld 28, 264(1)
  02c87e4  ld 29, 272(1)
  02c87e8  ld 30, 280(1)
  02c87ec  ld 31, 288(1)
  02c87f0  addi 1, 1, 368
  02c87f4  blr

M1850_002c8808:   # 0x2c8808, 0x7d8 bytes
  02c8808  stdu 1, -576(1)
  02c880c  mflr 0
  02c8810  std 0, 592(1)
  02c8814  stfd 21, 488(1)
  02c8818  stfd 22, 496(1)
  02c881c  stfd 23, 504(1)
  02c8820  stfd 24, 512(1)
  02c8824  stfd 25, 520(1)
  02c8828  stfd 26, 528(1)
  02c882c  stfd 27, 536(1)
  02c8830  stfd 28, 544(1)
  02c8834  stfd 29, 552(1)
  02c8838  stfd 30, 560(1)
  02c883c  stfd 31, 568(1)
  02c8840  std 31, 480(1)
  02c8844  lis 6, 124
  02c8848  ori 31, 3, 0
  02c884c  std 27, 448(1)
  02c8850  fmr 24, 3
  02c8854  ori 27, 5, 0
  02c8858  fmr 21, 2
  02c885c  std 29, 464(1)
  02c8860  lis 5, 45
  02c8864  ori 29, 10, 0
  02c8868  std 30, 472(1)
  02c886c  lwz 6, -11284(6)
  02c8870  std 28, 456(1)
  02c8874  ori 30, 9, 0
  02c8878  ori 28, 4, 0
  02c887c  std 26, 440(1)
  02c8880  extsw 3, 6
  02c8884  std 25, 432(1)
  02c8888  std 24, 424(1)
  02c888c  std 23, 416(1)
  02c8890  std 22, 408(1)
  02c8894  std 21, 400(1)
  02c8898  addi 26, 5, -30728
  02c889c  bl 0x685c4
  02c88a0  nop
  02c88a4  std 3, 232(1)
  02c88a8  li 3, 0
  02c88ac  li 4, 2
  02c88b0  li 5, 0
  02c88b4  li 6, 1
  02c88b8  li 7, 128
  02c88bc  bl 0x502ea8
  02c88c0  nop
  02c88c4  std 3, 248(1)
  02c88c8  li 3, 0
  02c88cc  lis 9, 0
  02c88d0  li 4, 0
  02c88d4  li 5, 1
  02c88d8  li 6, 1
  02c88dc  li 7, 1
  02c88e0  li 8, 0
  02c88e4  ori 9, 9, 65424
  02c88e8  bl 0x502fd4
  02c88ec  nop
  02c88f0  std 3, 240(1)
  02c88f4  li 4, 0
  02c88f8  li 3, 0
  02c88fc  li 5, 0
  02c8900  li 6, 0
  02c8904  li 7, 0
  02c8908  li 8, 0
  02c890c  bl 0x502f08
  02c8910  nop
  02c8914  lis 4, 124
  02c8918  lis 5, 124
  02c891c  std 3, 224(1)
  02c8920  slwi 28, 28, 24
  02c8924  lwz 3, -11312(4)
  02c8928  or 28, 3, 28
  02c892c  lwz 3, -11280(5)
  02c8930  extsw 3, 3
  02c8934  stw 28, 188(1)
  02c8938  stw 28, 184(1)
  02c893c  stw 28, 180(1)
  02c8940  stw 28, 176(1)
  02c8944  bl 0x685c4
  02c8948  nop
  02c894c  slwi 27, 27, 24
  02c8950  std 3, 376(1)
  02c8954  li 4, 0
  02c8958  or 27, 29, 27
  02c895c  ld 3, 248(1)
  02c8960  ld 5, 240(1)
  02c8964  lis 24, 149
  02c8968  std 3, 392(1)
  02c896c  addic 24, 24, 5056
  02c8970  stw 27, 332(1)
  02c8974  stw 27, 328(1)
  02c8978  stw 27, 324(1)
  02c897c  stw 27, 320(1)
  02c8980  ld 3, 224(1)
  02c8984  std 5, 384(1)
  02c8988  std 3, 368(1)
  02c898c  lis 5, 16256
  02c8990  lfs 22, 0(26)
  02c8994  lis 3, 266
  02c8998  stw 4, 336(1)
  02c899c  stw 4, 340(1)
  02c89a0  stw 4, 344(1)
  02c89a4  lfs 25, 4(26)
  02c89a8  stw 4, 356(1)
  02c89ac  lfs 1, 8888(3)
  02c89b0  stw 5, 348(1)
  02c89b4  stw 5, 352(1)
  02c89b8  fadds 2, 1, 25
  02c89bc  lfs 26, 320(24)
  02c89c0  fadds 3, 1, 25
  02c89c4  stw 5, 360(1)
  02c89c8  stw 5, 364(1)
  02c89cc  stfs 1, 192(1)
  02c89d0  stw 4, 196(1)
  02c89d4  stfs 1, 200(1)
  02c89d8  stw 5, 204(1)
  02c89dc  fmr 1, 26
  02c89e0  stw 4, 212(1)
  02c89e4  stw 5, 220(1)
  02c89e8  lfs 28, 328(24)
  02c89ec  lfs 27, 324(24)
  02c89f0  stfs 2, 208(1)
  02c89f4  stfs 3, 216(1)
  02c89f8  lfs 5, 0(31)
  02c89fc  fmr 3, 28
  02c8a00  lfs 7, 8(31)
  02c8a04  lfs 6, 4(31)
  02c8a08  lfs 2, 24(31)
  02c8a0c  fsubs 11, 5, 1
  02c8a10  fsubs 9, 2, 7
  02c8a14  lfs 2, 16(31)
  02c8a18  lfs 4, 20(31)
  02c8a1c  fsubs 8, 2, 5
  02c8a20  fsubs 4, 4, 6
  02c8a24  fsubs 10, 7, 3
  02c8a28  fmr 2, 27
  02c8a2c  fmuls 12, 11, 9
  02c8a30  fmuls 0, 10, 4
  02c8a34  fsubs 13, 6, 2
  02c8a38  fmsubs 10, 10, 8, 12
  02c8a3c  fmuls 8, 13, 8
  02c8a40  fmsubs 9, 13, 9, 0
  02c8a44  fmuls 12, 10, 10
  02c8a48  fmsubs 11, 11, 4, 8
  02c8a4c  fmadds 12, 9, 9, 12
  02c8a50  lfs 8, 12(31)
  02c8a54  fmadds 12, 11, 11, 12
  02c8a58  fsqrts 4, 12
  02c8a5c  fcmpu 0, 4, 22
  02c8a60  bt 2, 0x2c8aa4
  02c8a64  frsqrte 4, 12
  02c8a68  lis 3, 45
  02c8a6c  addi 3, 3, -30728
  02c8a70  lfs 13, 8(3)
  02c8a74  fmuls 0, 12, 4
  02c8a78  fmuls 31, 13, 4
  02c8a7c  fnmsubs 0, 0, 4, 25
  02c8a80  fmadds 4, 0, 31, 4
  02c8a84  fmuls 0, 12, 4
  02c8a88  fmuls 31, 13, 4
  02c8a8c  fnmsubs 0, 0, 4, 25
  02c8a90  fmadds 4, 0, 31, 4
  02c8a94  fmuls 12, 12, 4
  02c8a98  fmuls 13, 13, 4
  02c8a9c  fnmsubs 12, 12, 4, 25
  02c8aa0  fmadds 4, 12, 13, 4
  02c8aa4  lis 3, 124
  02c8aa8  addic 26, 30, -1
  02c8aac  li 21, 1
  02c8ab0  cmpwi 26, 1
  02c8ab4  lfs 12, -11324(3)
  02c8ab8  stfs 8, 124(1)
  02c8abc  fmuls 4, 12, 4
  02c8ac0  stfs 8, 140(1)
  02c8ac4  fmadds 8, 9, 4, 5
  02c8ac8  fmadds 12, 10, 4, 6
  02c8acc  fmadds 13, 11, 4, 7
  02c8ad0  fnmsubs 5, 9, 4, 5
  02c8ad4  fnmsubs 6, 10, 4, 6
  02c8ad8  fnmsubs 4, 11, 4, 7
  02c8adc  stfs 8, 112(1)
  02c8ae0  stfs 12, 116(1)
  02c8ae4  stfs 13, 120(1)
  02c8ae8  stfs 5, 128(1)
  02c8aec  stfs 6, 132(1)
  02c8af0  stfs 4, 136(1)
  02c8af4  bf 1, 0x2c8cbc
  02c8af8  lis 3, 45
  02c8afc  lis 22, 161
  02c8b00  addi 3, 3, -30728
  02c8b04  addic 23, 30, -2
  02c8b08  addic 25, 31, 16
  02c8b0c  addic 22, 22, 24396
  02c8b10  lfs 31, 8(3)
  02c8b14  lfs 4, 0(25)
  02c8b18  lfs 6, 8(25)
  02c8b1c  fsubs 7, 4, 1
  02c8b20  lfs 1, 24(25)
  02c8b24  fsubs 3, 6, 3
  02c8b28  lfs 5, 4(25)
  02c8b2c  fsubs 1, 1, 6
  02c8b30  lfs 8, 16(25)
  02c8b34  fsubs 10, 5, 2
  02c8b38  lfs 9, 20(25)
  02c8b3c  fsubs 8, 8, 4
  02c8b40  fsubs 9, 9, 5
  02c8b44  cmpwi 1, 21, 1
  02c8b48  fmuls 2, 7, 1
  02c8b4c  fmuls 12, 10, 8
  02c8b50  fmuls 11, 3, 9
  02c8b54  fmsubs 2, 3, 8, 2
  02c8b58  fmsubs 3, 7, 9, 12
  02c8b5c  fmsubs 1, 10, 1, 11
  02c8b60  fmuls 7, 2, 2
  02c8b64  fmadds 9, 1, 1, 7
  02c8b68  lfs 7, 12(25)
  02c8b6c  fmadds 9, 3, 3, 9
  02c8b70  fsqrts 8, 9
  02c8b74  fcmpu 0, 8, 22
  02c8b78  bt 2, 0x2c8bb0
  02c8b7c  frsqrte 8, 9
  02c8b80  fmuls 10, 9, 8
  02c8b84  fmuls 11, 8, 31
  02c8b88  fnmsubs 10, 10, 8, 25
  02c8b8c  fmadds 8, 10, 11, 8
  02c8b90  fmuls 10, 9, 8
  02c8b94  fmuls 11, 8, 31
  02c8b98  fnmsubs 10, 10, 8, 25
  02c8b9c  fmadds 8, 10, 11, 8
  02c8ba0  fmuls 9, 9, 8
  02c8ba4  fmuls 10, 8, 31
  02c8ba8  fnmsubs 9, 9, 8, 25
  02c8bac  fmadds 8, 9, 10, 8
  02c8bb0  lis 3, 124
  02c8bb4  cmpw 6, 21, 23
  02c8bb8  lfs 9, -11324(3)
  02c8bbc  stfs 7, 156(1)
  02c8bc0  fmuls 8, 9, 8
  02c8bc4  stfs 7, 172(1)
  02c8bc8  fmadds 7, 1, 8, 4
  02c8bcc  fmadds 9, 2, 8, 5
  02c8bd0  fmadds 10, 3, 8, 6
  02c8bd4  fnmsubs 1, 1, 8, 4
  02c8bd8  fnmsubs 2, 2, 8, 5
  02c8bdc  fnmsubs 3, 3, 8, 6
  02c8be0  stfs 7, 144(1)
  02c8be4  stfs 9, 148(1)
  02c8be8  stfs 10, 152(1)
  02c8bec  stfs 1, 160(1)
  02c8bf0  stfs 2, 164(1)
  02c8bf4  stfs 3, 168(1)
  02c8bf8  bf 6, 0x2c8c10
  02c8bfc  lis 3, 124
  02c8c00  lwz 3, -11312(3)
  02c8c04  stw 3, 180(1)
  02c8c08  stw 3, 176(1)
  02c8c0c  b 0x2c8c38
  02c8c10  cmpwi 1, 21, 2
  02c8c14  bf 26, 0x2c8c2c
  02c8c18  lis 3, 124
  02c8c1c  lwz 3, -11312(3)
  02c8c20  stw 3, 188(1)
  02c8c24  stw 3, 184(1)
  02c8c28  b 0x2c8c38
  02c8c2c  bf 6, 0x2c8c38
  02c8c30  stw 28, 180(1)
  02c8c34  stw 28, 176(1)
  02c8c38  lwz 6, 28(22)
  02c8c3c  addic 3, 1, 112
  02c8c40  li 4, 0
  02c8c44  li 5, 0
  02c8c48  li 7, 9
  02c8c4c  bl 0x72280
  02c8c50  nop
  02c8c54  lfs 1, 144(1)
  02c8c58  lfs 2, 148(1)
  02c8c5c  addic 21, 21, 1
  02c8c60  stfs 1, 112(1)
  02c8c64  addic 25, 25, 16
  02c8c68  lfs 1, 152(1)
  02c8c6c  cmpw 21, 26
  02c8c70  stfs 2, 116(1)
  02c8c74  lfs 2, 156(1)
  02c8c78  stfs 1, 120(1)
  02c8c7c  lfs 1, 160(1)
  02c8c80  stfs 2, 124(1)
  02c8c84  lfs 2, 164(1)
  02c8c88  stfs 1, 128(1)
  02c8c8c  lfs 1, 168(1)
  02c8c90  stfs 2, 132(1)
  02c8c94  lfs 2, 172(1)
  02c8c98  stfs 1, 136(1)
  02c8c9c  lfs 1, 320(24)
  02c8ca0  stfs 2, 140(1)
  02c8ca4  lfs 2, 324(24)
  02c8ca8  lfs 3, 328(24)
  02c8cac  fmr 26, 1
  02c8cb0  fmr 27, 2
  02c8cb4  fmr 28, 3
  02c8cb8  bt 0, 0x2c8b14
  02c8cbc  cmpwi 26, 0
  02c8cc0  bf 1, 0x2c8f40
  02c8cc4  lis 3, 45
  02c8cc8  lis 28, 161
  02c8ccc  fmr 31, 28
  02c8cd0  addi 3, 3, -30728
  02c8cd4  fmr 30, 27
  02c8cd8  ori 25, 31, 0
  02c8cdc  fmr 29, 26
  02c8ce0  li 31, 0
  02c8ce4  addic 30, 30, -2
  02c8ce8  addic 28, 28, 24396
  02c8cec  lfs 23, 8(3)
  02c8cf0  lfs 13, 4(25)
  02c8cf4  lfs 3, 20(25)
  02c8cf8  fsubs 13, 13, 30
  02c8cfc  lfs 0, 0(25)
  02c8d00  fsubs 3, 3, 30
  02c8d04  lfs 11, 16(25)
  02c8d08  fsubs 0, 0, 29
  02c8d0c  lfs 12, 8(25)
  02c8d10  fsubs 11, 11, 29
  02c8d14  lfs 2, 24(25)
  02c8d18  fsubs 12, 12, 31
  02c8d1c  fsubs 2, 2, 31
  02c8d20  addic 25, 25, 16
  02c8d24  fmuls 1, 13, 13
  02c8d28  fmuls 4, 3, 3
  02c8d2c  fmadds 1, 0, 0, 1
  02c8d30  fmadds 4, 11, 11, 4
  02c8d34  fmadds 1, 12, 12, 1
  02c8d38  fmadds 4, 2, 2, 4
  02c8d3c  fsqrts 1, 1
  02c8d40  fsqrts 4, 4
  02c8d44  fcmpu 6, 1, 22
  02c8d48  fcmpu 0, 4, 1
  02c8d4c  fcmpu 1, 4, 22
  02c8d50  cror 2, 1, 2
  02c8d54  bt 2, 0x2c8d80
  02c8d58  bf 6, 0x2c8d6c
  02c8d5c  fmr 11, 0
  02c8d60  fmr 3, 13
  02c8d64  fmr 2, 12
  02c8d68  b 0x2c8da4
  02c8d6c  fdivs 1, 1, 4
  02c8d70  fmuls 11, 11, 1
  02c8d74  fmuls 3, 3, 1
  02c8d78  fmuls 2, 2, 1
  02c8d7c  b 0x2c8da4
  02c8d80  bf 26, 0x2c8d94
  02c8d84  fmr 0, 11
  02c8d88  fmr 13, 3
  02c8d8c  fmr 12, 2
  02c8d90  b 0x2c8da4
  02c8d94  fdivs 1, 4, 1
  02c8d98  fmuls 0, 0, 1
  02c8d9c  fmuls 13, 13, 1
  02c8da0  fmuls 12, 12, 1
  02c8da4  fadds 31, 31, 12
  02c8da8  fadds 1, 28, 2
  02c8dac  fadds 29, 29, 0
  02c8db0  fadds 4, 26, 11
  02c8db4  fadds 30, 30, 13
  02c8db8  fadds 5, 27, 3
  02c8dbc  lfs 13, 332(24)
  02c8dc0  fsubs 6, 1, 31
  02c8dc4  fsubs 7, 4, 29
  02c8dc8  fsubs 8, 5, 30
  02c8dcc  cmpwi 1, 31, 0
  02c8dd0  fnmsubs 31, 6, 24, 31
  02c8dd4  fnmsubs 29, 7, 24, 29
  02c8dd8  fnmsubs 30, 8, 24, 30
  02c8ddc  fsubs 12, 28, 31
  02c8de0  fsubs 11, 26, 29
  02c8de4  fsubs 3, 27, 30
  02c8de8  fmadds 26, 7, 24, 4
  02c8dec  fmuls 2, 7, 12
  02c8df0  fmuls 10, 8, 11
  02c8df4  fmuls 9, 6, 3
  02c8df8  fmadds 27, 8, 24, 5
  02c8dfc  fmsubs 11, 6, 11, 2
  02c8e00  fmsubs 3, 7, 3, 10
  02c8e04  fmsubs 12, 8, 12, 9
  02c8e08  fmadds 28, 6, 24, 1
  02c8e0c  fmuls 2, 11, 11
  02c8e10  fmadds 2, 12, 12, 2
  02c8e14  fmadds 2, 3, 3, 2
  02c8e18  fsqrts 0, 2
  02c8e1c  fcmpu 0, 0, 22
  02c8e20  bt 2, 0x2c8e58
  02c8e24  frsqrte 1, 2
  02c8e28  fmuls 4, 2, 1
  02c8e2c  fmuls 5, 1, 23
  02c8e30  fnmsubs 4, 4, 1, 25
  02c8e34  fmadds 1, 4, 5, 1
  02c8e38  fmuls 4, 2, 1
  02c8e3c  fmuls 5, 1, 23
  02c8e40  fnmsubs 4, 4, 1, 25
  02c8e44  fmadds 0, 4, 5, 1
  02c8e48  fmuls 1, 2, 0
  02c8e4c  fmuls 2, 0, 23
  02c8e50  fnmsubs 1, 1, 0, 25
  02c8e54  fmadds 0, 1, 2, 0
  02c8e58  fmuls 1, 0, 21
  02c8e5c  stfs 13, 268(1)
  02c8e60  stfs 13, 284(1)
  02c8e64  cmpw 6, 31, 30
  02c8e68  fmadds 2, 12, 1, 29
  02c8e6c  fmadds 4, 11, 1, 30
  02c8e70  fmadds 5, 3, 1, 31
  02c8e74  fnmsubs 6, 12, 1, 29
  02c8e78  fnmsubs 7, 11, 1, 30
  02c8e7c  fnmsubs 8, 3, 1, 31
  02c8e80  fmadds 9, 12, 1, 26
  02c8e84  fmadds 10, 11, 1, 27
  02c8e88  fmadds 0, 3, 1, 28
  02c8e8c  fnmsubs 12, 12, 1, 26
  02c8e90  fnmsubs 11, 11, 1, 27
  02c8e94  fnmsubs 1, 3, 1, 28
  02c8e98  stfs 2, 256(1)
  02c8e9c  stfs 4, 260(1)
  02c8ea0  stfs 5, 264(1)
  02c8ea4  stfs 6, 272(1)
  02c8ea8  stfs 7, 276(1)
  02c8eac  stfs 8, 280(1)
  02c8eb0  stfs 9, 288(1)
  02c8eb4  stfs 10, 292(1)
  02c8eb8  stfs 0, 296(1)
  02c8ebc  stfs 13, 300(1)
  02c8ec0  stfs 12, 304(1)
  02c8ec4  stfs 11, 308(1)
  02c8ec8  stfs 1, 312(1)
  02c8ecc  stfs 13, 316(1)
  02c8ed0  bf 6, 0x2c8ee0
  02c8ed4  stw 29, 324(1)
  02c8ed8  stw 29, 320(1)
  02c8edc  b 0x2c8f00
  02c8ee0  cmpwi 1, 31, 1
  02c8ee4  bf 26, 0x2c8ef4
  02c8ee8  stw 29, 332(1)
  02c8eec  stw 29, 328(1)
  02c8ef0  b 0x2c8f00
  02c8ef4  bf 6, 0x2c8f00
  02c8ef8  stw 27, 324(1)
  02c8efc  stw 27, 320(1)
  02c8f00  lwz 6, 28(28)
  02c8f04  addic 3, 1, 256
  02c8f08  li 4, 0
  02c8f0c  li 5, 0
  02c8f10  li 7, 9
  02c8f14  bl 0x72280
  02c8f18  nop
  02c8f1c  lfs 29, 320(24)
  02c8f20  lfs 30, 324(24)
  02c8f24  addic 31, 31, 1
  02c8f28  lfs 31, 328(24)
  02c8f2c  fmr 26, 29
  02c8f30  cmpw 31, 26
  02c8f34  fmr 27, 30
  02c8f38  fmr 28, 31
  02c8f3c  bt 0, 0x2c8cf0
  02c8f40  li 3, 1
  02c8f44  li 4, 5
  02c8f48  li 8, 0
  02c8f4c  li 10, 2
  02c8f50  li 5, 96
  02c8f54  li 6, 3
  02c8f58  li 7, 0
  02c8f5c  li 9, 1
  02c8f60  bl 0x502f7c
  02c8f64  nop
  02c8f68  ori 4, 3, 0
  02c8f6c  li 3, 22
  02c8f70  bl 0x174f80
  02c8f74  nop
  02c8f78  ld 0, 592(1)
  02c8f7c  mtlr 0
  02c8f80  lfd 21, 488(1)
  02c8f84  lfd 22, 496(1)
  02c8f88  lfd 23, 504(1)
  02c8f8c  lfd 24, 512(1)
  02c8f90  lfd 25, 520(1)
  02c8f94  lfd 26, 528(1)
  02c8f98  lfd 27, 536(1)
  02c8f9c  lfd 28, 544(1)
  02c8fa0  lfd 29, 552(1)
  02c8fa4  lfd 30, 560(1)
  02c8fa8  lfd 31, 568(1)
  02c8fac  ld 21, 400(1)
  02c8fb0  ld 22, 408(1)
  02c8fb4  ld 23, 416(1)
  02c8fb8  ld 24, 424(1)
  02c8fbc  ld 25, 432(1)
  02c8fc0  ld 26, 440(1)
  02c8fc4  ld 27, 448(1)
  02c8fc8  ld 28, 456(1)
  02c8fcc  ld 29, 464(1)
  02c8fd0  ld 30, 472(1)
  02c8fd4  ld 31, 480(1)
  02c8fd8  addi 1, 1, 576
  02c8fdc  blr

M1850_002c8ff8:   # 0x2c8ff8, 0x584 bytes
  02c8ff8  stdu 1, -432(1)
  02c8ffc  mflr 0
  02c9000  std 0, 448(1)
  02c9004  stfd 26, 384(1)
  02c9008  stfd 27, 392(1)
  02c900c  stfd 28, 400(1)
  02c9010  stfd 29, 408(1)
  02c9014  stfd 30, 416(1)
  02c9018  stfd 31, 424(1)
  02c901c  lis 4, 114
  02c9020  lis 5, 124
  02c9024  std 31, 376(1)
  02c9028  lis 6, 266
  02c902c  lis 31, 45
  02c9030  lfs 1, -3064(4)
  02c9034  lfs 2, -11300(5)
  02c9038  addi 31, 31, -28704
  02c903c  std 30, 368(1)
  02c9040  lfs 3, 8888(6)
  02c9044  ori 30, 3, 0
  02c9048  fnmsubs 1, 1, 2, 3
  02c904c  stfs 1, 8888(6)
  02c9050  lfs 31, 0(31)
  02c9054  std 29, 360(1)
  02c9058  std 28, 352(1)
  02c905c  std 27, 344(1)
  02c9060  std 26, 336(1)
  02c9064  std 25, 328(1)
  02c9068  std 24, 320(1)
  02c906c  std 23, 312(1)
  02c9070  std 22, 304(1)
  02c9074  std 21, 296(1)
  02c9078  std 20, 288(1)
  02c907c  std 19, 280(1)
  02c9080  std 18, 272(1)
  02c9084  std 17, 264(1)
  02c9088  fcmpu 0, 1, 31
  02c908c  bt 1, 0x2c90a0
  02c9090  lfs 2, 4(31)
  02c9094  lis 3, 266
  02c9098  fadds 1, 1, 2
  02c909c  stfs 1, 8888(3)
  02c90a0  lis 29, 124
  02c90a4  lis 28, 124
  02c90a8  lis 27, 124
  02c90ac  lis 26, 124
  02c90b0  lis 6, 124
  02c90b4  lwz 4, -11332(29)
  02c90b8  lis 25, 124
  02c90bc  lwz 5, -11328(28)
  02c90c0  lis 3, 266
  02c90c4  lfs 1, -11324(27)
  02c90c8  extsw 4, 4
  02c90cc  lfs 2, -11320(26)
  02c90d0  addic 3, 3, 4480
  02c90d4  lwz 10, -11308(6)
  02c90d8  extsw 5, 5
  02c90dc  lfs 3, -11316(25)
  02c90e0  li 9, 12
  02c90e4  extsw 10, 10
  02c90e8  bl 0x2c8808
  02c90ec  lwz 4, -11332(29)
  02c90f0  lis 6, 124
  02c90f4  lwz 5, -11328(28)
  02c90f8  lfs 1, -11324(27)
  02c90fc  lis 3, 266
  02c9100  lfs 2, -11320(26)
  02c9104  extsw 4, 4
  02c9108  lfs 3, -11316(25)
  02c910c  addic 3, 3, 4672
  02c9110  extsw 5, 5
  02c9114  lwz 10, -11304(6)
  02c9118  li 9, 12
  02c911c  extsw 10, 10
  02c9120  bl 0x2c8808
  02c9124  ori 3, 30, 0
  02c9128  bl 0x2c8468
  02c912c  ori 3, 30, 0
  02c9130  bl 0x2c7fb8
  02c9134  lis 3, 151
  02c9138  addic 3, 3, -25432
  02c913c  lbz 3, 21(3)
  02c9140  cmpwi 3, 0
  02c9144  bt 2, 0x2c9154
  02c9148  lis 3, 124
  02c914c  lwz 30, -11292(3)
  02c9150  b 0x2c915c
  02c9154  lis 3, 124
  02c9158  lwz 30, -11296(3)
  02c915c  lis 3, 124
  02c9160  fmr 30, 31
  02c9164  lwz 3, -11288(3)
  02c9168  extsw 3, 3
  02c916c  bl 0x685c4
  02c9170  nop
  02c9174  std 3, 232(1)
  02c9178  lis 9, 0
  02c917c  li 3, 0
  02c9180  li 4, 0
  02c9184  li 5, 1
  02c9188  li 6, 1
  02c918c  li 7, 1
  02c9190  li 8, 0
  02c9194  ori 9, 9, 65424
  02c9198  bl 0x502fd4
  02c919c  nop
  02c91a0  std 3, 240(1)
  02c91a4  li 3, 0
  02c91a8  li 4, 0
  02c91ac  li 5, 0
  02c91b0  li 6, 0
  02c91b4  li 7, 0
  02c91b8  li 8, 0
  02c91bc  bl 0x502f08
  02c91c0  nop
  02c91c4  std 3, 224(1)
  02c91c8  li 4, 2
  02c91cc  li 3, 0
  02c91d0  li 5, 0
  02c91d4  li 6, 1
  02c91d8  li 7, 128
  02c91dc  bl 0x502ea8
  02c91e0  nop
  02c91e4  lis 4, 266
  02c91e8  lis 5, 114
  02c91ec  lis 6, 124
  02c91f0  lfs 31, 8720(4)
  02c91f4  lfs 1, -3064(5)
  02c91f8  lfs 2, -11404(6)
  02c91fc  std 3, 248(1)
  02c9200  fnmsubs 2, 1, 2, 31
  02c9204  stw 30, 188(1)
  02c9208  stw 30, 184(1)
  02c920c  stw 30, 180(1)
  02c9210  stw 30, 176(1)
  02c9214  fcmpu 0, 2, 30
  02c9218  stfs 2, 8720(4)
  02c921c  bt 1, 0x2c9230
  02c9220  lfs 3, 4(31)
  02c9224  lis 3, 266
  02c9228  fadds 2, 2, 3
  02c922c  stfs 2, 8720(3)
  02c9230  lis 3, 124
  02c9234  lis 20, 266
  02c9238  lfs 2, -11400(3)
  02c923c  lfs 3, 8724(20)
  02c9240  fnmsubs 3, 1, 2, 3
  02c9244  stfs 3, 8724(20)
  02c9248  lfs 4, 8(31)
  02c924c  fcmpu 0, 3, 4
  02c9250  bt 1, 0x2c9260
  02c9254  lfs 4, 12(31)
  02c9258  fadds 3, 3, 4
  02c925c  stfs 3, 8724(20)
  02c9260  lis 21, 266
  02c9264  lfs 3, 8728(21)
  02c9268  fmadds 2, 1, 2, 3
  02c926c  stfs 2, 8728(21)
  02c9270  lfs 1, 16(31)
  02c9274  fcmpu 0, 2, 1
  02c9278  bt 0, 0x2c9284
  02c927c  fsubs 1, 2, 1
  02c9280  stfs 1, 8728(21)
  02c9284  li 19, 2
  02c9288  li 28, 640
  02c928c  lis 23, 266
  02c9290  lfs 28, 8724(20)
  02c9294  lis 27, 161
  02c9298  lfs 29, 8728(21)
  02c929c  addic 23, 23, 4880
  02c92a0  lfs 30, 20(31)
  02c92a4  lis 25, 149
  02c92a8  addic 24, 23, -320
  02c92ac  addc 29, 23, 28
  02c92b0  addc 30, 24, 28
  02c92b4  lis 26, 124
  02c92b8  li 22, 0
  02c92bc  addic 25, 25, 5056
  02c92c0  addic 27, 27, 24396
  02c92c4  clrldi 29, 29, 32
  02c92c8  clrldi 30, 30, 32
  02c92cc  lis 3, 26214
  02c92d0  lfs 1, 0(29)
  02c92d4  addic 22, 22, 1
  02c92d8  ori 3, 3, 26215
  02c92dc  mulhw 3, 3, 22
  02c92e0  stfs 1, 112(1)
  02c92e4  srawi 3, 3, 3
  02c92e8  lfs 2, 4(29)
  02c92ec  srwi 4, 3, 31
  02c92f0  stfs 2, 116(1)
  02c92f4  lfs 3, 8(29)
  02c92f8  addc 3, 3, 4
  02c92fc  stfs 3, 120(1)
  02c9300  sldi 4, 3, 4
  02c9304  sldi 3, 3, 2
  02c9308  lfs 4, 12(29)
  02c930c  addc 3, 4, 3
  02c9310  stfs 4, 124(1)
  02c9314  subc 3, 22, 3
  02c9318  sldi 3, 3, 4
  02c931c  addc 4, 3, 23
  02c9320  addc 4, 4, 28
  02c9324  clrldi 4, 4, 32
  02c9328  addc 3, 3, 24
  02c932c  lfs 4, 0(4)
  02c9330  stfs 4, 128(1)
  02c9334  lfs 5, 4(4)
  02c9338  fsubs 1, 1, 4
  02c933c  stfs 5, 132(1)
  02c9340  fsubs 2, 2, 5
  02c9344  lfs 6, 8(4)
  02c9348  stfs 6, 136(1)
  02c934c  lfs 7, 12(4)
  02c9350  fsubs 3, 3, 6
  02c9354  stfs 7, 140(1)
  02c9358  lfs 7, 0(30)
  02c935c  stfs 7, 144(1)
  02c9360  lfs 8, 4(30)
  02c9364  fsubs 7, 7, 4
  02c9368  stfs 8, 148(1)
  02c936c  lfs 9, 8(30)
  02c9370  fsubs 8, 8, 5
  02c9374  lfs 11, 324(25)
  02c9378  fsubs 10, 9, 6
  02c937c  fsubs 5, 5, 11
  02c9380  lfs 12, 320(25)
  02c9384  lfs 0, 328(25)
  02c9388  fsubs 4, 4, 12
  02c938c  fsubs 6, 6, 0
  02c9390  addc 3, 3, 28
  02c9394  fmuls 13, 2, 7
  02c9398  clrldi 3, 3, 32
  02c939c  fmuls 12, 3, 8
  02c93a0  stfs 9, 152(1)
  02c93a4  fmuls 11, 1, 10
  02c93a8  lfs 9, 12(30)
  02c93ac  cmpwi 1, 19, 11
  02c93b0  stfs 9, 156(1)
  02c93b4  fmsubs 1, 1, 8, 13
  02c93b8  fmsubs 2, 2, 10, 12
  02c93bc  fmsubs 3, 3, 7, 11
  02c93c0  fmuls 3, 3, 5
  02c93c4  lfs 5, 0(3)
  02c93c8  stfs 5, 160(1)
  02c93cc  lfs 5, 4(3)
  02c93d0  stfs 5, 164(1)
  02c93d4  lfs 5, 8(3)
  02c93d8  fmadds 2, 2, 4, 3
  02c93dc  stfs 5, 168(1)
  02c93e0  lfs 3, 12(3)
  02c93e4  stfs 3, 172(1)
  02c93e8  fmadds 1, 1, 6, 2
  02c93ec  fcmpu 0, 1, 30
  02c93f0  bt 0, 0x2c9404
  02c93f4  lis 3, 124
  02c93f8  lfs 2, -11408(3)
  02c93fc  fmr 1, 2
  02c9400  b 0x2c94e8
  02c9404  bf 6, 0x2c941c
  02c9408  lis 3, 124
  02c940c  lwz 3, -11296(3)
  02c9410  clrlwi 3, 3, 8
  02c9414  stw 3, 180(1)
  02c9418  stw 3, 176(1)
  02c941c  lis 18, 124
  02c9420  stfs 31, 192(1)
  02c9424  stfs 28, 196(1)
  02c9428  stfs 31, 200(1)
  02c942c  lfs 1, -11408(18)
  02c9430  addic 17, 1, 112
  02c9434  fadds 1, 1, 28
  02c9438  li 4, 0
  02c943c  ori 3, 17, 0
  02c9440  li 5, 0
  02c9444  li 7, 9
  02c9448  stfs 1, 204(1)
  02c944c  lfs 1, -11412(26)
  02c9450  stfs 28, 212(1)
  02c9454  fsubs 1, 31, 1
  02c9458  stfs 1, 208(1)
  02c945c  lfs 1, -11412(26)
  02c9460  fsubs 1, 31, 1
  02c9464  stfs 1, 216(1)
  02c9468  lfs 1, -11408(18)
  02c946c  fadds 1, 1, 28
  02c9470  stfs 1, 220(1)
  02c9474  lwz 6, 28(27)
  02c9478  lfs 27, -11408(18)
  02c947c  bl 0x72280
  02c9480  nop
  02c9484  stfs 31, 192(1)
  02c9488  stfs 29, 196(1)
  02c948c  stfs 31, 200(1)
  02c9490  lfs 1, -11408(18)
  02c9494  lwz 6, 28(27)
  02c9498  fadds 1, 1, 29
  02c949c  ori 3, 17, 0
  02c94a0  li 4, 0
  02c94a4  li 5, 0
  02c94a8  li 7, 9
  02c94ac  stfs 1, 204(1)
  02c94b0  lfs 1, -11412(26)
  02c94b4  stfs 29, 212(1)
  02c94b8  fsubs 1, 31, 1
  02c94bc  stfs 1, 208(1)
  02c94c0  lfs 1, -11412(26)
  02c94c4  fsubs 1, 31, 1
  02c94c8  stfs 1, 216(1)
  02c94cc  lfs 26, -11408(18)
  02c94d0  fadds 1, 26, 29
  02c94d4  stfs 1, 220(1)
  02c94d8  bl 0x72280
  02c94dc  nop
  02c94e0  fmr 2, 27
  02c94e4  fmr 1, 26
  02c94e8  cmpwi 22, 20
  02c94ec  fadds 28, 2, 28
  02c94f0  addic 29, 29, 16
  02c94f4  fadds 29, 1, 29
  02c94f8  addic 30, 30, 16
  02c94fc  bt 0, 0x2c92cc
  02c9500  addic 19, 19, 1
  02c9504  lfs 1, -11412(26)
  02c9508  addic 28, 28, 320
  02c950c  cmpwi 19, 12
  02c9510  fadds 31, 1, 31
  02c9514  bt 0, 0x2c928c
  02c9518  ld 0, 448(1)
  02c951c  mtlr 0
  02c9520  lfd 26, 384(1)
  02c9524  lfd 27, 392(1)
  02c9528  lfd 28, 400(1)
  02c952c  lfd 29, 408(1)
  02c9530  lfd 30, 416(1)
  02c9534  lfd 31, 424(1)
  02c9538  ld 17, 264(1)
  02c953c  ld 18, 272(1)
  02c9540  ld 19, 280(1)
  02c9544  ld 20, 288(1)
  02c9548  ld 21, 296(1)
  02c954c  ld 22, 304(1)
  02c9550  ld 23, 312(1)
  02c9554  ld 24, 320(1)
  02c9558  ld 25, 328(1)
  02c955c  ld 26, 336(1)
  02c9560  ld 27, 344(1)
  02c9564  ld 28, 352(1)
  02c9568  ld 29, 360(1)
  02c956c  ld 30, 368(1)
  02c9570  ld 31, 376(1)
  02c9574  addi 1, 1, 432
  02c9578  blr

M1850_002c957c:   # 0x2c957c, 0x14 bytes
  02c957c  lis 3, 124
  02c9580  lis 4, 1
  02c9584  addic 3, 3, -11180
  02c9588  stw 4, 72(3)
  02c958c  blr

UpdateMoby_1850:   # 0x2c9590, 0x4 bytes
  02c9590  blr
