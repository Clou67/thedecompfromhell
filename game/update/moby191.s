# game/update/moby191.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_191:   # 0x2d8058, 0x5a8 bytes
  02d8058  stdu 1, -256(1)
  02d805c  mflr 0
  02d8060  std 0, 272(1)
  02d8064  stfd 30, 240(1)
  02d8068  stfd 31, 248(1)
  02d806c  std 31, 232(1)
  02d8070  ori 31, 3, 0
  02d8074  lbz 5, 32(31)
  02d8078  lwz 3, 120(31)
  02d807c  cmpwi 5, 0
  02d8080  lhz 4, 52(31)
  02d8084  cmpwi 1, 5, -1
  02d8088  cmpwi 6, 5, 1
  02d808c  std 30, 224(1)
  02d8090  std 29, 216(1)
  02d8094  cmpwi 7, 5, 2
  02d8098  bt 1, 0x2d80a4
  02d809c  bf 5, 0x2d85dc
  02d80a0  b 0x2d80b0
  02d80a4  bf 25, 0x2d8144
  02d80a8  bf 29, 0x2d8554
  02d80ac  b 0x2d85dc
  02d80b0  lwz 5, 48(3)
  02d80b4  cmpwi 5, -1
  02d80b8  bf 2, 0x2d80f8
  02d80bc  lwz 3, 60(3)
  02d80c0  cmpwi 3, -1
  02d80c4  bt 2, 0x2d8114
  02d80c8  lis 5, 164
  02d80cc  slwi 3, 3, 8
  02d80d0  lwz 5, -28512(5)
  02d80d4  addc 3, 5, 3
  02d80d8  cmpwi 3, 0
  02d80dc  bt 2, 0x2d8114
  02d80e0  clrldi 3, 3, 32
  02d80e4  lbz 3, 32(3)
  02d80e8  cmpwi 3, 254
  02d80ec  cmpwi 1, 3, 253
  02d80f0  bt 2, 0x2d8114
  02d80f4  bt 6, 0x2d8114
  02d80f8  li 3, 255
  02d80fc  ori 4, 4, 65
  02d8100  li 5, 2
  02d8104  stb 3, 48(31)
  02d8108  sth 4, 52(31)
  02d810c  stb 5, 32(31)
  02d8110  b 0x2d85dc
  02d8114  ori 3, 31, 0
  02d8118  li 4, 192
  02d811c  li 5, 192
  02d8120  li 6, 192
  02d8124  bl 0xf1ec8
  02d8128  nop
  02d812c  ori 3, 31, 0
  02d8130  bl 0x4afb4
  02d8134  nop
  02d8138  li 3, 1
  02d813c  stb 3, 32(31)
  02d8140  b 0x2d85dc
  02d8144  lhz 4, 166(31)
  02d8148  cmpwi 4, 803
  02d814c  bf 2, 0x2d8530
  02d8150  lis 4, 151
  02d8154  lfs 1, 16(31)
  02d8158  addic 4, 4, -25376
  02d815c  lfs 2, 20(31)
  02d8160  lis 6, 115
  02d8164  lfs 3, 128(4)
  02d8168  lfs 4, 132(4)
  02d816c  fsubs 1, 3, 1
  02d8170  lis 4, 46
  02d8174  fsubs 2, 4, 2
  02d8178  addi 5, 4, -32704
  02d817c  addic 6, 6, 22784
  02d8180  addic 4, 31, 72
  02d8184  fabs 4, 1
  02d8188  fabs 3, 2
  02d818c  stfs 1, 144(1)
  02d8190  stfs 2, 148(1)
  02d8194  fsubs 1, 4, 3
  02d8198  stfs 1, 152(1)
  02d819c  lwz 7, 144(1)
  02d81a0  lfs 31, 0(5)
  02d81a4  lfs 1, 144(1)
  02d81a8  lwz 5, 148(1)
  02d81ac  lfs 2, 148(1)
  02d81b0  fabs 1, 1
  02d81b4  lwz 8, 152(1)
  02d81b8  rlwinm 5, 5, 3, 29, 29
  02d81bc  lfs 5, 152(1)
  02d81c0  fabs 2, 2
  02d81c4  rlwimi 5, 8, 2, 30, 30
  02d81c8  fsub 6, 5, 31
  02d81cc  rlwimi 5, 7, 4, 28, 28
  02d81d0  fsub 5, 5, 31
  02d81d4  ori 7, 6, 0
  02d81d8  rlwimi 7, 5, 2, 26, 28
  02d81dc  slwi 5, 5, 2
  02d81e0  clrldi 7, 7, 32
  02d81e4  fsel 3, 6, 1, 3
  02d81e8  lfsx 6, 6, 5
  02d81ec  lfs 1, 4(7)
  02d81f0  fsel 2, 5, 2, 4
  02d81f4  fcmpu 0, 3, 31
  02d81f8  bt 1, 0x2d8204
  02d81fc  fmr 6, 31
  02d8200  b 0x2d8328
  02d8204  fsubs 4, 2, 3
  02d8208  fadds 2, 2, 3
  02d820c  addic 5, 1, 16
  02d8210  li 9, 2
  02d8214  addic 6, 5, 140
  02d8218  addic 7, 5, 156
  02d821c  mtctr 9
  02d8220  fdivs 2, 4, 2
  02d8224  fmuls 3, 2, 2
  02d8228  stfs 2, 168(1)
  02d822c  stfs 2, 160(1)
  02d8230  stfs 2, 164(1)
  02d8234  stfs 2, 156(1)
  02d8238  lfs 5, 168(1)
  02d823c  lfs 7, 160(1)
  02d8240  lfs 8, 164(1)
  02d8244  fmuls 4, 3, 3
  02d8248  fmuls 7, 7, 3
  02d824c  fmuls 5, 5, 4
  02d8250  fmuls 2, 4, 4
  02d8254  fmuls 4, 8, 4
  02d8258  stfs 7, 160(1)
  02d825c  fmuls 3, 5, 3
  02d8260  stfs 4, 164(1)
  02d8264  stfs 3, 168(1)
  02d8268  lfs 3, 140(5)
  02d826c  fmuls 3, 3, 2
  02d8270  stfs 3, 156(5)
  02d8274  lfs 3, 4(6)
  02d8278  addic 5, 5, 8
  02d827c  addic 6, 6, 8
  02d8280  fmuls 3, 3, 2
  02d8284  stfs 3, 4(7)
  02d8288  addic 7, 7, 8
  02d828c  bdnz 0x2d8268
  02d8290  ori 5, 1, 0
  02d8294  lis 6, 115
  02d8298  li 10, 4
  02d829c  addic 7, 5, 156
  02d82a0  addic 6, 6, 22752
  02d82a4  ori 8, 7, 0
  02d82a8  mtctr 10
  02d82ac  lfs 2, 156(5)
  02d82b0  lfs 3, 0(6)
  02d82b4  fmuls 2, 2, 3
  02d82b8  lfs 3, 4(6)
  02d82bc  addic 6, 6, 8
  02d82c0  stfs 2, 156(5)
  02d82c4  lfs 2, 4(7)
  02d82c8  addic 5, 5, 8
  02d82cc  fmuls 2, 2, 3
  02d82d0  stfs 2, 4(7)
  02d82d4  addic 7, 7, 8
  02d82d8  bdnz 0x2d82ac
  02d82dc  fmr 2, 31
  02d82e0  ori 5, 1, 0
  02d82e4  mtctr 9
  02d82e8  lfs 3, 156(5)
  02d82ec  fadds 2, 2, 3
  02d82f0  addic 5, 5, 16
  02d82f4  lfs 3, 4(8)
  02d82f8  lfs 4, 8(8)
  02d82fc  lfs 5, 12(8)
  02d8300  addic 8, 8, 16
  02d8304  fadds 2, 2, 3
  02d8308  fadds 2, 2, 4
  02d830c  fadds 2, 2, 5
  02d8310  bdnz 0x2d82e8
  02d8314  lis 5, 46
  02d8318  addi 5, 5, -32704
  02d831c  lfs 3, 4(5)
  02d8320  fadds 2, 2, 3
  02d8324  fmadds 6, 2, 6, 1
  02d8328  lis 5, 46
  02d832c  lis 6, 114
  02d8330  fmr 1, 6
  02d8334  addi 5, 5, -32704
  02d8338  lis 7, 114
  02d833c  lfs 3, 8(5)
  02d8340  lfs 2, -3048(6)
  02d8344  lfs 4, 12(5)
  02d8348  fmuls 2, 2, 3
  02d834c  addic 5, 3, 56
  02d8350  lfs 5, -3052(7)
  02d8354  ori 3, 4, 0
  02d8358  fmuls 4, 5, 4
  02d835c  fmr 3, 2
  02d8360  bl 0x10a2e0
  02d8364  nop
  02d8368  lis 3, 161
  02d836c  lfs 6, 16(31)
  02d8370  lfs 7, 20(31)
  02d8374  lfs 8, 24(31)
  02d8378  lwz 3, 1808(3)
  02d837c  clrlwi 4, 3, 31
  02d8380  cmpwi 4, 0
  02d8384  bt 2, 0x2d8530
  02d8388  lbz 4, 49(31)
  02d838c  cmpwi 4, 0
  02d8390  bt 2, 0x2d8530
  02d8394  lfs 4, 212(31)
  02d8398  lfs 3, 208(31)
  02d839c  fmuls 1, 4, 4
  02d83a0  lfs 5, 216(31)
  02d83a4  rlwinm 3, 3, 0, 29, 29
  02d83a8  li 4, 0
  02d83ac  li 5, -1
  02d83b0  subc 3, 4, 3
  02d83b4  li 4, 1
  02d83b8  cntlzw 3, 3
  02d83bc  subc 4, 4, 5
  02d83c0  fmadds 1, 3, 3, 1
  02d83c4  sldi 3, 3, 58
  02d83c8  sradi 3, 3, 63
  02d83cc  and 3, 3, 4
  02d83d0  addc 3, 5, 3
  02d83d4  fmadds 2, 5, 5, 1
  02d83d8  extsw 3, 3
  02d83dc  std 3, 192(1)
  02d83e0  lis 3, 126
  02d83e4  fsqrts 2, 2
  02d83e8  lfs 1, -25924(3)
  02d83ec  lfd 9, 192(1)
  02d83f0  fcfid 9, 9
  02d83f4  frsp 9, 9
  02d83f8  fmuls 1, 1, 9
  02d83fc  fcmpu 0, 2, 31
  02d8400  bf 2, 0x2d8418
  02d8404  fmr 2, 31
  02d8408  lfs 1, 220(31)
  02d840c  fmr 3, 2
  02d8410  fmr 4, 3
  02d8414  b 0x2d8430
  02d8418  fdivs 2, 1, 2
  02d841c  lfs 1, 220(31)
  02d8420  fmr 9, 4
  02d8424  fmuls 4, 3, 2
  02d8428  fmuls 3, 9, 2
  02d842c  fmuls 2, 5, 2
  02d8430  fmuls 5, 3, 3
  02d8434  lis 3, 126
  02d8438  stfs 4, 112(1)
  02d843c  lis 4, 114
  02d8440  stfs 3, 116(1)
  02d8444  stfs 2, 120(1)
  02d8448  lis 5, 46
  02d844c  stfs 1, 124(1)
  02d8450  addi 5, 5, -32704
  02d8454  lfs 9, -25936(3)
  02d8458  lfs 10, -3056(4)
  02d845c  fmuls 12, 9, 10
  02d8460  fmadds 5, 4, 4, 5
  02d8464  lfs 11, 16(5)
  02d8468  fadds 6, 4, 6
  02d846c  lis 4, 126
  02d8470  stfs 1, 140(1)
  02d8474  lis 3, 126
  02d8478  fadds 7, 3, 7
  02d847c  fadds 8, 2, 8
  02d8480  fdivs 11, 11, 12
  02d8484  lfs 30, -25928(4)
  02d8488  fmadds 5, 2, 2, 5
  02d848c  lwz 3, -25932(3)
  02d8490  stfs 6, 112(1)
  02d8494  stfs 7, 116(1)
  02d8498  fmuls 1, 9, 10
  02d849c  stfs 8, 120(1)
  02d84a0  extsw 30, 3
  02d84a4  fsqrts 5, 5
  02d84a8  fdivs 6, 11, 5
  02d84ac  fsub 7, 31, 5
  02d84b0  fsub 8, 31, 5
  02d84b4  fsub 9, 31, 5
  02d84b8  fsub 10, 5, 31
  02d84bc  fsub 11, 5, 31
  02d84c0  fsub 5, 5, 31
  02d84c4  fmuls 4, 4, 6
  02d84c8  fmuls 3, 3, 6
  02d84cc  fmuls 2, 2, 6
  02d84d0  fsel 6, 7, 31, 4
  02d84d4  fsel 7, 8, 31, 3
  02d84d8  fsel 8, 9, 31, 2
  02d84dc  fsel 4, 10, 6, 4
  02d84e0  fsel 3, 11, 7, 3
  02d84e4  fsel 2, 5, 8, 2
  02d84e8  stfs 4, 128(1)
  02d84ec  stfs 3, 132(1)
  02d84f0  stfs 2, 136(1)
  02d84f4  bl 0x502758
  02d84f8  nop
  02d84fc  clrlwi 29, 3, 24
  02d8500  li 3, 255
  02d8504  bl 0xfc620
  02d8508  nop
  02d850c  clrlwi 8, 3, 24
  02d8510  fmr 1, 30
  02d8514  addic 3, 1, 112
  02d8518  addic 4, 1, 128
  02d851c  ori 5, 30, 0
  02d8520  ori 7, 29, 0
  02d8524  li 9, 0
  02d8528  bl 0x131100
  02d852c  nop
  02d8530  lis 3, 151
  02d8534  addic 3, 3, -25376
  02d8538  lwz 3, 8324(3)
  02d853c  cmpwi 3, 44
  02d8540  bt 2, 0x2d85dc
  02d8544  ori 3, 31, 0
  02d8548  bl 0x4b0e0
  02d854c  nop
  02d8550  b 0x2d85dc
  02d8554  lis 5, 151
  02d8558  lwz 7, 48(3)
  02d855c  lis 6, 161
  02d8560  addic 6, 6, -13692
  02d8564  lwz 5, -25488(5)
  02d8568  addc 6, 7, 6
  02d856c  slwi 5, 5, 4
  02d8570  clrldi 6, 6, 32
  02d8574  extsw 5, 5
  02d8578  lbzx 5, 6, 5
  02d857c  cmpwi 5, 0
  02d8580  bf 2, 0x2d85c0
  02d8584  lwz 5, 60(3)
  02d8588  cmpwi 5, -1
  02d858c  bt 2, 0x2d85dc
  02d8590  lis 6, 164
  02d8594  slwi 5, 5, 8
  02d8598  lwz 6, -28512(6)
  02d859c  addc 5, 6, 5
  02d85a0  cmpwi 5, 0
  02d85a4  bt 2, 0x2d85c0
  02d85a8  clrldi 5, 5, 32
  02d85ac  lbz 5, 32(5)
  02d85b0  cmpwi 5, 254
  02d85b4  cmpwi 1, 5, 253
  02d85b8  bt 2, 0x2d85c0
  02d85bc  bf 6, 0x2d85dc
  02d85c0  li 5, -66
  02d85c4  li 6, -1
  02d85c8  and 4, 4, 5
  02d85cc  li 5, 0
  02d85d0  stw 6, 48(3)
  02d85d4  sth 4, 52(31)
  02d85d8  stb 5, 32(31)
  02d85dc  ld 0, 272(1)
  02d85e0  mtlr 0
  02d85e4  lfd 30, 240(1)
  02d85e8  lfd 31, 248(1)
  02d85ec  ld 29, 216(1)
  02d85f0  ld 30, 224(1)
  02d85f4  ld 31, 232(1)
  02d85f8  addi 1, 1, 256
  02d85fc  blr
