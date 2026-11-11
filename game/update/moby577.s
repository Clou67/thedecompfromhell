# game/update/moby577.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M577_003c8180:   # 0x3c8180, 0x1d4 bytes
  03c8180  stdu 1, -144(1)
  03c8184  mflr 0
  03c8188  std 0, 160(1)
  03c818c  lis 6, 165
  03c8190  sldi 3, 3, 2
  03c8194  addic 6, 6, -28284
  03c8198  extsw 7, 3
  03c819c  lis 8, 164
  03c81a0  ori 3, 5, 0
  03c81a4  lwzx 6, 6, 7
  03c81a8  lwz 5, -28512(8)
  03c81ac  std 31, 136(1)
  03c81b0  std 30, 128(1)
  03c81b4  std 29, 120(1)
  03c81b8  cmpwi 6, 0
  03c81bc  bt 2, 0x3c8334
  03c81c0  lhz 7, 0(6)
  03c81c4  rlwinm 7, 7, 8, 9, 23
  03c81c8  addc 7, 5, 7
  03c81cc  clrldi 7, 7, 32
  03c81d0  lhz 8, 166(7)
  03c81d4  cmpwi 8, 576
  03c81d8  bf 2, 0x3c8320
  03c81dc  lbz 8, 32(7)
  03c81e0  cmpwi 8, 7
  03c81e4  bf 2, 0x3c8320
  03c81e8  ori 5, 3, 0
  03c81ec  li 31, 1
  03c81f0  lhz 3, 52(7)
  03c81f4  lwz 6, 36(7)
  03c81f8  rlwinm 3, 3, 0, 0, 30
  03c81fc  fmr 2, 1
  03c8200  stb 31, 49(7)
  03c8204  lwz 30, 120(7)
  03c8208  ori 3, 3, 4096
  03c820c  lwz 6, 16(6)
  03c8210  stw 6, 148(7)
  03c8214  sth 3, 52(7)
  03c8218  lfs 1, 0(4)
  03c821c  lis 3, 16256
  03c8220  stfs 1, 16(7)
  03c8224  lfs 1, 4(4)
  03c8228  stfs 1, 20(7)
  03c822c  lfs 1, 8(4)
  03c8230  stfs 1, 24(7)
  03c8234  lfs 1, 12(4)
  03c8238  stb 31, 32(7)
  03c823c  stfs 1, 28(7)
  03c8240  stw 3, 500(30)
  03c8244  lfs 1, 0(5)
  03c8248  lfs 3, 0(4)
  03c824c  fsubs 3, 1, 3
  03c8250  lis 3, 61
  03c8254  addi 29, 3, -32408
  03c8258  li 6, 0
  03c825c  lis 8, 114
  03c8260  stfs 3, 464(30)
  03c8264  lfs 1, 4(5)
  03c8268  lfs 4, 4(4)
  03c826c  fsubs 4, 1, 4
  03c8270  ori 3, 4, 0
  03c8274  li 7, 0
  03c8278  fmuls 1, 4, 4
  03c827c  stfs 4, 468(30)
  03c8280  fmadds 1, 3, 3, 1
  03c8284  fsqrts 5, 1
  03c8288  lfs 1, 8(5)
  03c828c  lfs 6, 8(4)
  03c8290  ori 4, 5, 0
  03c8294  fsubs 1, 1, 6
  03c8298  stfs 1, 472(30)
  03c829c  lfs 1, 12(5)
  03c82a0  stfs 1, 476(30)
  03c82a4  fmr 1, 2
  03c82a8  lfs 6, 0(29)
  03c82ac  stw 6, 472(30)
  03c82b0  fdivs 2, 2, 5
  03c82b4  fsub 7, 6, 5
  03c82b8  fsub 8, 6, 5
  03c82bc  fsub 9, 5, 6
  03c82c0  fsub 5, 5, 6
  03c82c4  fmuls 3, 3, 2
  03c82c8  fmuls 2, 4, 2
  03c82cc  fsel 4, 7, 6, 3
  03c82d0  fsel 6, 8, 6, 2
  03c82d4  fsel 3, 9, 4, 3
  03c82d8  fsel 2, 5, 6, 2
  03c82dc  stfs 3, 464(30)
  03c82e0  stfs 2, 468(30)
  03c82e4  lfs 2, 4(29)
  03c82e8  lfs 3, -3048(8)
  03c82ec  fmuls 2, 3, 2
  03c82f0  bl 0x108180
  03c82f4  nop
  03c82f8  stfs 1, 472(30)
  03c82fc  lfs 1, 8(29)
  03c8300  lfs 2, 12(29)
  03c8304  bl 0xfe4f0
  03c8308  nop
  03c830c  lfs 2, 16(29)
  03c8310  ori 3, 31, 0
  03c8314  fmuls 1, 1, 2
  03c8318  stfs 1, 492(30)
  03c831c  b 0x3c8338
  03c8320  lhz 7, 0(6)
  03c8324  addic 6, 6, 2
  03c8328  extsh 7, 7
  03c832c  cmpwi 7, 0
  03c8330  bf 0, 0x3c81c0
  03c8334  li 3, 0
  03c8338  ld 0, 160(1)
  03c833c  mtlr 0
  03c8340  ld 29, 120(1)
  03c8344  ld 30, 128(1)
  03c8348  ld 31, 136(1)
  03c834c  addi 1, 1, 144
  03c8350  blr

M577_003c8354:   # 0x3c8354, 0x7c bytes
  03c8354  lis 4, 165
  03c8358  sldi 3, 3, 2
  03c835c  addic 4, 4, -28284
  03c8360  extsw 3, 3
  03c8364  lwzx 3, 4, 3
  03c8368  cmpwi 3, 0
  03c836c  bf 2, 0x3c8378
  03c8370  li 3, 0
  03c8374  b 0x3c83cc
  03c8378  lis 4, 164
  03c837c  li 6, 0
  03c8380  lwz 4, -28512(4)
  03c8384  lhz 5, 0(3)
  03c8388  rlwinm 5, 5, 8, 9, 23
  03c838c  addc 5, 4, 5
  03c8390  clrldi 5, 5, 32
  03c8394  lhz 7, 166(5)
  03c8398  cmpwi 7, 576
  03c839c  bf 2, 0x3c83b4
  03c83a0  lbz 5, 32(5)
  03c83a4  cmpwi 5, 7
  03c83a8  bt 2, 0x3c83b4
  03c83ac  addic 6, 6, 1
  03c83b0  extsh 6, 6
  03c83b4  lhz 5, 0(3)
  03c83b8  addic 3, 3, 2
  03c83bc  extsh 5, 5
  03c83c0  cmpwi 5, 0
  03c83c4  bf 0, 0x3c8384
  03c83c8  ori 3, 6, 0
  03c83cc  blr

M577_003c83e0:   # 0x3c83e0, 0x328 bytes
  03c83e0  stdu 1, -352(1)
  03c83e4  mflr 0
  03c83e8  std 0, 368(1)
  03c83ec  stfd 30, 336(1)
  03c83f0  stfd 31, 344(1)
  03c83f4  std 31, 328(1)
  03c83f8  lis 4, 61
  03c83fc  lwz 31, 120(3)
  03c8400  lis 5, 132
  03c8404  addi 4, 4, -31792
  03c8408  lfs 30, 0(4)
  03c840c  lfs 1, 500(31)
  03c8410  lfs 2, 24820(5)
  03c8414  fadds 5, 1, 30
  03c8418  lis 5, 149
  03c841c  lfs 3, 16(3)
  03c8420  addic 5, 5, 5056
  03c8424  lfs 4, 20(3)
  03c8428  lfs 6, 320(5)
  03c842c  lfs 7, 324(5)
  03c8430  fsubs 6, 6, 3
  03c8434  fadds 2, 5, 2
  03c8438  fsubs 5, 7, 4
  03c843c  lis 5, 132
  03c8440  fsubs 1, 30, 1
  03c8444  lfs 13, 24824(5)
  03c8448  lis 5, 132
  03c844c  fmuls 7, 2, 6
  03c8450  fmuls 5, 2, 5
  03c8454  std 30, 320(1)
  03c8458  fadds 1, 1, 13
  03c845c  li 30, 0
  03c8460  fmuls 8, 2, 7
  03c8464  fmuls 10, 5, 5
  03c8468  fmuls 9, 5, 2
  03c846c  fmuls 11, 8, 8
  03c8470  fneg 10, 10
  03c8474  fneg 12, 9
  03c8478  fneg 11, 11
  03c847c  fneg 10, 10
  03c8480  fneg 11, 11
  03c8484  fmadds 10, 7, 7, 10
  03c8488  fmadds 11, 12, 12, 11
  03c848c  lfs 12, 24(3)
  03c8490  stfs 3, 160(1)
  03c8494  fsqrts 10, 10
  03c8498  stfs 4, 164(1)
  03c849c  lfs 3, 28(3)
  03c84a0  lfs 4, 24816(5)
  03c84a4  stfs 12, 168(1)
  03c84a8  stfs 3, 172(1)
  03c84ac  lis 3, 132
  03c84b0  fsqrts 3, 11
  03c84b4  fsubs 4, 12, 4
  03c84b8  fdivs 11, 1, 10
  03c84bc  stfs 4, 168(1)
  03c84c0  lfs 31, 4(4)
  03c84c4  stw 30, 156(1)
  03c84c8  stw 30, 148(1)
  03c84cc  stw 30, 144(1)
  03c84d0  stfs 2, 152(1)
  03c84d4  stfs 6, 112(1)
  03c84d8  stw 30, 136(1)
  03c84dc  stw 30, 120(1)
  03c84e0  stw 30, 124(1)
  03c84e4  stw 30, 140(1)
  03c84e8  fsub 13, 31, 10
  03c84ec  fsub 12, 31, 10
  03c84f0  fsub 0, 10, 31
  03c84f4  fsub 10, 10, 31
  03c84f8  lwz 3, 24812(3)
  03c84fc  extsw 3, 3
  03c8500  fdivs 1, 1, 3
  03c8504  fsub 2, 31, 3
  03c8508  fsub 4, 31, 3
  03c850c  fsub 6, 3, 31
  03c8510  fsub 3, 3, 31
  03c8514  fmuls 5, 5, 11
  03c8518  fmuls 7, 7, 11
  03c851c  fneg 5, 5
  03c8520  fsel 11, 13, 31, 7
  03c8524  fsel 12, 12, 31, 5
  03c8528  fsel 7, 10, 11, 7
  03c852c  fsel 5, 0, 12, 5
  03c8530  fmuls 8, 8, 1
  03c8534  fmuls 1, 9, 1
  03c8538  stfs 7, 132(1)
  03c853c  fneg 8, 8
  03c8540  fneg 1, 1
  03c8544  stfs 5, 128(1)
  03c8548  fsel 2, 2, 31, 8
  03c854c  fsel 4, 4, 31, 1
  03c8550  fsel 2, 6, 2, 8
  03c8554  fsel 1, 3, 4, 1
  03c8558  stfs 2, 112(1)
  03c855c  stfs 1, 116(1)
  03c8560  bl 0x685c4
  03c8564  nop
  03c8568  std 3, 296(1)
  03c856c  lis 9, 0
  03c8570  li 3, 0
  03c8574  li 4, 0
  03c8578  li 5, 1
  03c857c  li 6, 1
  03c8580  li 7, 1
  03c8584  li 8, 0
  03c8588  ori 9, 9, 65424
  03c858c  bl 0x502fd4
  03c8590  nop
  03c8594  std 3, 304(1)
  03c8598  li 3, 0
  03c859c  li 4, 0
  03c85a0  li 5, 0
  03c85a4  li 6, 0
  03c85a8  li 7, 0
  03c85ac  li 8, 0
  03c85b0  bl 0x502f08
  03c85b4  nop
  03c85b8  std 3, 288(1)
  03c85bc  lis 4, 269
  03c85c0  lis 3, 269
  03c85c4  lis 5, 132
  03c85c8  lis 6, 132
  03c85cc  li 7, 128
  03c85d0  lwz 8, -24732(3)
  03c85d4  lwz 3, -24736(4)
  03c85d8  lwz 4, 24796(5)
  03c85dc  lwz 6, 24800(6)
  03c85e0  ori 5, 8, 0
  03c85e4  bl 0x502ea8
  03c85e8  nop
  03c85ec  lis 4, 132
  03c85f0  std 3, 312(1)
  03c85f4  lis 3, 132
  03c85f8  lfs 1, 500(31)
  03c85fc  lwz 4, 24804(4)
  03c8600  lwz 5, 24808(3)
  03c8604  extsw 3, 4
  03c8608  extsw 4, 5
  03c860c  bl 0x5027bc
  03c8610  nop
  03c8614  lis 5, 132
  03c8618  lis 4, 132
  03c861c  ori 10, 3, 0
  03c8620  ori 8, 1, 0
  03c8624  addic 3, 1, 176
  03c8628  ori 9, 30, 0
  03c862c  ori 7, 1, 0
  03c8630  ori 6, 1, 0
  03c8634  addic 5, 5, 24828
  03c8638  addic 4, 4, 24832
  03c863c  li 11, 0
  03c8640  lfs 1, 0(5)
  03c8644  clrlwi 12, 9, 31
  03c8648  lfs 2, 0(4)
  03c864c  cmpwi 1, 9, 2
  03c8650  stfs 1, 256(8)
  03c8654  cmpwi 12, 0
  03c8658  stfs 2, 260(8)
  03c865c  fmr 1, 31
  03c8660  stw 11, 12(3)
  03c8664  stw 11, 8(3)
  03c8668  stw 11, 4(3)
  03c866c  stw 11, 0(3)
  03c8670  bt 2, 0x3c8678
  03c8674  fmr 1, 30
  03c8678  lis 11, 61
  03c867c  stfs 1, 184(7)
  03c8680  addi 11, 11, -31792
  03c8684  lfs 1, 8(11)
  03c8688  bf 4, 0x3c8690
  03c868c  fmr 1, 30
  03c8690  lis 11, 16256
  03c8694  stfs 1, 180(7)
  03c8698  addic 9, 9, 1
  03c869c  addic 5, 5, 8
  03c86a0  cmpwi 9, 4
  03c86a4  stw 11, 188(7)
  03c86a8  stw 10, 240(6)
  03c86ac  addic 4, 4, 8
  03c86b0  addic 3, 3, 16
  03c86b4  addic 8, 8, 8
  03c86b8  addic 7, 7, 16
  03c86bc  addic 6, 6, 4
  03c86c0  bt 0, 0x3c863c
  03c86c4  lis 4, 161
  03c86c8  addic 3, 1, 176
  03c86cc  addic 6, 4, 24396
  03c86d0  addic 4, 1, 112
  03c86d4  li 5, 0
  03c86d8  li 7, 9
  03c86dc  lwz 6, 28(6)
  03c86e0  bl 0x72280
  03c86e4  nop
  03c86e8  ld 0, 368(1)
  03c86ec  mtlr 0
  03c86f0  lfd 30, 336(1)
  03c86f4  lfd 31, 344(1)
  03c86f8  ld 30, 320(1)
  03c86fc  ld 31, 328(1)
  03c8700  addi 1, 1, 352
  03c8704  blr

M577_003c8708:   # 0x3c8708, 0x58 bytes
  03c8708  stdu 1, -128(1)
  03c870c  mflr 0
  03c8710  std 0, 144(1)
  03c8714  std 31, 120(1)
  03c8718  ori 31, 3, 0
  03c871c  bl 0x48a718
  03c8720  nop
  03c8724  cmpwi 3, 0
  03c8728  bt 2, 0x3c8738
  03c872c  li 4, 6
  03c8730  stb 4, 32(31)
  03c8734  b 0x3c874c
  03c8738  lbz 4, 32(31)
  03c873c  cmpwi 4, 6
  03c8740  bf 2, 0x3c874c
  03c8744  li 4, 2
  03c8748  stb 4, 32(31)
  03c874c  ld 0, 144(1)
  03c8750  mtlr 0
  03c8754  ld 31, 120(1)
  03c8758  addi 1, 1, 128
  03c875c  blr

M577_003c8760:   # 0x3c8760, 0x58 bytes
  03c8760  stdu 1, -128(1)
  03c8764  mflr 0
  03c8768  std 0, 144(1)
  03c876c  std 31, 120(1)
  03c8770  ori 31, 3, 0
  03c8774  bl 0x48aa70
  03c8778  nop
  03c877c  cmpwi 3, 0
  03c8780  bt 2, 0x3c8790
  03c8784  li 4, 6
  03c8788  stb 4, 32(31)
  03c878c  b 0x3c87a4
  03c8790  lbz 4, 32(31)
  03c8794  cmpwi 4, 6
  03c8798  bf 2, 0x3c87a4
  03c879c  li 4, 2
  03c87a0  stb 4, 32(31)
  03c87a4  ld 0, 144(1)
  03c87a8  mtlr 0
  03c87ac  ld 31, 120(1)
  03c87b0  addi 1, 1, 128
  03c87b4  blr

M577_003c87b8:   # 0x3c87b8, 0x58 bytes
  03c87b8  stdu 1, -128(1)
  03c87bc  mflr 0
  03c87c0  std 0, 144(1)
  03c87c4  std 31, 120(1)
  03c87c8  ori 31, 3, 0
  03c87cc  bl 0x48acb8
  03c87d0  nop
  03c87d4  cmpwi 3, 0
  03c87d8  bt 2, 0x3c87e8
  03c87dc  li 4, 6
  03c87e0  stb 4, 32(31)
  03c87e4  b 0x3c87fc
  03c87e8  lbz 4, 32(31)
  03c87ec  cmpwi 4, 6
  03c87f0  bf 2, 0x3c87fc
  03c87f4  li 4, 2
  03c87f8  stb 4, 32(31)
  03c87fc  ld 0, 144(1)
  03c8800  mtlr 0
  03c8804  ld 31, 120(1)
  03c8808  addi 1, 1, 128
  03c880c  blr

M577_003c8810:   # 0x3c8810, 0x38 bytes
  03c8810  stdu 1, -128(1)
  03c8814  mflr 0
  03c8818  std 0, 144(1)
  03c881c  std 31, 120(1)
  03c8820  ori 31, 3, 0
  03c8824  bl 0x48afe8
  03c8828  nop
  03c882c  li 4, 6
  03c8830  stb 4, 32(31)
  03c8834  ld 0, 144(1)
  03c8838  mtlr 0
  03c883c  ld 31, 120(1)
  03c8840  addi 1, 1, 128
  03c8844  blr

M577_003c8848:   # 0x3c8848, 0x40 bytes
  03c8848  cmpwi 3, 0
  03c884c  bt 2, 0x3c8880
  03c8850  li 4, 0
  03c8854  lwz 3, 120(3)
  03c8858  li 5, 0
  03c885c  subc 4, 4, 3
  03c8860  addic 3, 3, 208
  03c8864  cntlzw 4, 4
  03c8868  subc 5, 5, 3
  03c886c  sldi 4, 4, 58
  03c8870  sradi 4, 4, 63
  03c8874  and 4, 4, 5
  03c8878  addc 3, 3, 4
  03c887c  b 0x3c8884
  03c8880  li 3, 0
  03c8884  blr

M577_003c8890:   # 0x3c8890, 0x94 bytes
  03c8890  stdu 1, -144(1)
  03c8894  mflr 0
  03c8898  std 0, 160(1)
  03c889c  li 4, 7
  03c88a0  std 31, 136(1)
  03c88a4  lbz 5, 83(3)
  03c88a8  ori 31, 3, 0
  03c88ac  cmpwi 5, 0
  03c88b0  stb 4, 32(3)
  03c88b4  bt 2, 0x3c88f4
  03c88b8  lis 3, 61
  03c88bc  lis 4, 114
  03c88c0  addi 3, 3, -30584
  03c88c4  li 5, 0
  03c88c8  lfs 1, 0(3)
  03c88cc  lfs 2, -3056(4)
  03c88d0  ori 3, 31, 0
  03c88d4  li 4, 0
  03c88d8  fmuls 1, 2, 1
  03c88dc  fctiwz 1, 1
  03c88e0  stfd 1, 112(1)
  03c88e4  lwz 6, 116(1)
  03c88e8  extsw 6, 6
  03c88ec  bl 0xfddc0
  03c88f0  nop
  03c88f4  lhz 4, 52(31)
  03c88f8  li 3, 0
  03c88fc  ori 4, 4, 1
  03c8900  rlwimi 4, 3, 0, 19, 19
  03c8904  stb 3, 49(31)
  03c8908  stw 3, 148(31)
  03c890c  sth 4, 52(31)
  03c8910  ld 0, 160(1)
  03c8914  mtlr 0
  03c8918  ld 31, 136(1)
  03c891c  addi 1, 1, 144
  03c8920  blr

M577_003c8924:   # 0x3c8924, 0x14 bytes
  03c8924  lis 3, 132
  03c8928  lis 4, 1
  03c892c  addic 3, 3, 24864
  03c8930  stw 4, 72(3)
  03c8934  blr

M577_003c8938:   # 0x3c8938, 0x50 bytes
  03c8938  addic 4, 4, -1
  03c893c  extsw 4, 4
  03c8940  cmpwi 4, 0
  03c8944  bt 0, 0x3c8980
  03c8948  lis 6, 161
  03c894c  lwz 6, 1808(6)
  03c8950  sldi 7, 4, 2
  03c8954  extsw 7, 7
  03c8958  lwzx 8, 3, 7
  03c895c  cmpw 6, 8
  03c8960  bf 1, 0x3c8970
  03c8964  addc 5, 5, 6
  03c8968  stwx 5, 3, 7
  03c896c  b 0x3c8980
  03c8970  addic 4, 4, -1
  03c8974  extsw 4, 4
  03c8978  cmpwi 4, 0
  03c897c  bf 0, 0x3c8950
  03c8980  ori 3, 4, 0
  03c8984  blr

UpdateMoby_577:   # 0x3c8a10, 0x2594 bytes
  03c8a10  stdu 1, -688(1)
  03c8a14  mflr 0
  03c8a18  std 0, 704(1)
  03c8a1c  stfd 26, 640(1)
  03c8a20  stfd 27, 648(1)
  03c8a24  stfd 28, 656(1)
  03c8a28  stfd 29, 664(1)
  03c8a2c  stfd 30, 672(1)
  03c8a30  stfd 31, 680(1)
  03c8a34  std 31, 632(1)
  03c8a38  lis 4, 61
  03c8a3c  ori 31, 3, 0
  03c8a40  addi 5, 4, -30328
  03c8a44  li 4, 0
  03c8a48  std 30, 624(1)
  03c8a4c  lfs 30, 0(5)
  03c8a50  lwz 30, 120(31)
  03c8a54  fmr 1, 30
  03c8a58  std 29, 616(1)
  03c8a5c  std 28, 608(1)
  03c8a60  std 27, 600(1)
  03c8a64  std 26, 592(1)
  03c8a68  addic 5, 30, 560
  03c8a6c  bl 0x119a18
  03c8a70  nop
  03c8a74  lis 3, 161
  03c8a78  lwz 3, 1800(3)
  03c8a7c  cmpwi 3, 2
  03c8a80  bf 2, 0x3c8a9c
  03c8a84  li 3, 0
  03c8a88  lhz 4, 52(31)
  03c8a8c  stw 3, 148(31)
  03c8a90  ori 3, 4, 65
  03c8a94  sth 3, 52(31)
  03c8a98  b 0x3caf64
  03c8a9c  lwz 5, 36(31)
  03c8aa0  li 3, -66
  03c8aa4  lis 4, 61
  03c8aa8  lhz 6, 52(31)
  03c8aac  addi 4, 4, -30328
  03c8ab0  and 3, 6, 3
  03c8ab4  lwz 5, 16(5)
  03c8ab8  stw 5, 148(31)
  03c8abc  sth 3, 52(31)
  03c8ac0  addic 5, 1, 480
  03c8ac4  lfs 29, 4(4)
  03c8ac8  ori 3, 31, 0
  03c8acc  lfs 1, 508(30)
  03c8ad0  fadds 1, 1, 29
  03c8ad4  bl 0x1118d8
  03c8ad8  nop
  03c8adc  addic 27, 31, 16
  03c8ae0  lwz 29, 544(1)
  03c8ae4  addic 3, 1, 128
  03c8ae8  ori 4, 27, 0
  03c8aec  bl 0x5e7e98
  03c8af0  nop
  03c8af4  lwz 3, 56(30)
  03c8af8  cmpwi 3, 0
  03c8afc  bt 2, 0x3c8b10
  03c8b00  li 3, 240
  03c8b04  bl 0x5e7e18
  03c8b08  nop
  03c8b0c  sth 3, 532(30)
  03c8b10  li 4, 0
  03c8b14  addic 3, 30, 520
  03c8b18  stw 4, 56(30)
  03c8b1c  bl 0x4fffb4
  03c8b20  nop
  03c8b24  addic 3, 30, 532
  03c8b28  bl 0x4fffb4
  03c8b2c  nop
  03c8b30  lis 4, 61
  03c8b34  cmpwi 3, 0
  03c8b38  addi 4, 4, -30328
  03c8b3c  lfs 31, 8(4)
  03c8b40  bt 2, 0x3c8b50
  03c8b44  lis 3, 61
  03c8b48  addi 3, 3, -30328
  03c8b4c  lfs 31, 12(3)
  03c8b50  lis 3, 61
  03c8b54  li 6, 0
  03c8b58  stfs 31, 508(30)
  03c8b5c  addi 7, 3, -30328
  03c8b60  ori 3, 31, 0
  03c8b64  lis 4, 51
  03c8b68  li 5, 0
  03c8b6c  lfs 31, 16(7)
  03c8b70  stw 6, 564(1)
  03c8b74  bl 0x10675c
  03c8b78  nop
  03c8b7c  ori 28, 3, 0
  03c8b80  ori 3, 31, 0
  03c8b84  ori 4, 28, 0
  03c8b88  addic 5, 30, 32
  03c8b8c  li 6, 0
  03c8b90  addic 7, 1, 560
  03c8b94  li 9, 0
  03c8b98  addic 8, 1, 564
  03c8b9c  li 10, 4
  03c8ba0  bl 0x106840
  03c8ba4  nop
  03c8ba8  addic 3, 30, 38
  03c8bac  bl 0x4fffb4
  03c8bb0  nop
  03c8bb4  lhz 4, 38(30)
  03c8bb8  li 3, 45
  03c8bbc  extsh 26, 4
  03c8bc0  bl 0x5e7e18
  03c8bc4  nop
  03c8bc8  cmpw 26, 3
  03c8bcc  bf 0, 0x3c8e38
  03c8bd0  cmpwi 28, 0
  03c8bd4  bt 2, 0x3c8e38
  03c8bd8  lbz 3, 32(31)
  03c8bdc  cmpwi 3, 99
  03c8be0  bt 2, 0x3c8e38
  03c8be4  lwz 3, 32(28)
  03c8be8  lhz 3, 166(3)
  03c8bec  cmpwi 3, 176
  03c8bf0  cmpwi 1, 3, 177
  03c8bf4  bt 2, 0x3c8bfc
  03c8bf8  bf 6, 0x3c8c10
  03c8bfc  lhz 3, 38(30)
  03c8c00  cmpwi 3, 0
  03c8c04  bt 2, 0x3c8c10
  03c8c08  li 3, 0
  03c8c0c  stw 3, 44(28)
  03c8c10  lbz 3, 33(31)
  03c8c14  cmpwi 3, 255
  03c8c18  bt 2, 0x3c8c28
  03c8c1c  li 4, 1
  03c8c20  bl 0x104298
  03c8c24  nop
  03c8c28  lwz 3, 44(28)
  03c8c2c  cmpwi 3, 0
  03c8c30  bt 2, 0x3c8e38
  03c8c34  lfs 1, 16(31)
  03c8c38  lfs 2, 480(1)
  03c8c3c  lfs 3, 20(31)
  03c8c40  fsubs 1, 1, 2
  03c8c44  lfs 4, 484(1)
  03c8c48  fsubs 2, 3, 4
  03c8c4c  bl 0x5e8338
  03c8c50  nop
  03c8c54  stfs 1, 568(1)
  03c8c58  lis 3, 15363
  03c8c5c  lfs 1, 32(30)
  03c8c60  lis 4, 14851
  03c8c64  lfs 2, 44(28)
  03c8c68  ori 3, 3, 4719
  03c8c6c  ori 4, 4, 4719
  03c8c70  fsubs 1, 1, 2
  03c8c74  lis 5, 132
  03c8c78  lis 6, 114
  03c8c7c  stw 3, 304(30)
  03c8c80  lis 7, 132
  03c8c84  stw 4, 308(30)
  03c8c88  addic 3, 30, 312
  03c8c8c  addic 4, 30, 316
  03c8c90  fcmpu 0, 1, 31
  03c8c94  stfs 1, 32(30)
  03c8c98  lfs 2, 24976(5)
  03c8c9c  lfs 3, -3052(6)
  03c8ca0  li 5, 0
  03c8ca4  li 6, 9
  03c8ca8  fmuls 2, 2, 3
  03c8cac  stw 6, 324(30)
  03c8cb0  stfs 2, 312(30)
  03c8cb4  lfs 1, 24972(7)
  03c8cb8  stb 5, 349(30)
  03c8cbc  fmuls 1, 1, 3
  03c8cc0  stfs 1, 316(30)
  03c8cc4  bt 1, 0x3c8d9c
  03c8cc8  li 5, 0
  03c8ccc  lis 6, 61
  03c8cd0  lhz 7, 52(31)
  03c8cd4  lis 8, 114
  03c8cd8  addi 6, 6, -30328
  03c8cdc  rlwimi 7, 5, 0, 19, 19
  03c8ce0  addic 5, 1, 568
  03c8ce4  sth 7, 52(31)
  03c8ce8  lfs 1, 20(6)
  03c8cec  lfs 2, -3052(8)
  03c8cf0  ori 6, 3, 0
  03c8cf4  ori 7, 4, 0
  03c8cf8  fmuls 1, 2, 1
  03c8cfc  stfs 1, 312(30)
  03c8d00  stfs 1, 316(30)
  03c8d04  lfs 1, 16(28)
  03c8d08  lfs 2, 24(28)
  03c8d0c  stfs 1, 48(1)
  03c8d10  stfs 2, 56(1)
  03c8d14  lfs 1, 20(28)
  03c8d18  lfs 2, 28(28)
  03c8d1c  stfs 1, 52(1)
  03c8d20  stfs 2, 60(1)
  03c8d24  ld 3, 48(1)
  03c8d28  ld 4, 56(1)
  03c8d2c  bl 0x107de8
  03c8d30  nop
  03c8d34  ori 3, 31, 0
  03c8d38  lfs 1, 568(1)
  03c8d3c  addic 4, 30, 288
  03c8d40  li 6, 7
  03c8d44  li 7, 1
  03c8d48  li 8, 0
  03c8d4c  bl 0x10ad80
  03c8d50  nop
  03c8d54  lis 3, 16688
  03c8d58  lis 6, 16784
  03c8d5c  li 7, 99
  03c8d60  li 5, 120
  03c8d64  stw 3, 368(30)
  03c8d68  addic 4, 30, 272
  03c8d6c  stw 6, 372(30)
  03c8d70  ori 3, 31, 0
  03c8d74  stb 7, 32(31)
  03c8d78  stb 5, 279(30)
  03c8d7c  bl 0x10c808
  03c8d80  nop
  03c8d84  ori 3, 31, 0
  03c8d88  li 4, 0
  03c8d8c  li 5, -1
  03c8d90  bl 0xfd8d0
  03c8d94  nop
  03c8d98  b 0x3c8e38
  03c8d9c  lfs 1, 16(28)
  03c8da0  ori 6, 3, 0
  03c8da4  lfs 2, 24(28)
  03c8da8  ori 7, 4, 0
  03c8dac  stfs 1, 48(1)
  03c8db0  addic 5, 1, 568
  03c8db4  stfs 2, 56(1)
  03c8db8  lfs 1, 20(28)
  03c8dbc  lfs 2, 28(28)
  03c8dc0  stfs 1, 52(1)
  03c8dc4  stfs 2, 60(1)
  03c8dc8  ld 3, 48(1)
  03c8dcc  ld 4, 56(1)
  03c8dd0  bl 0x107de8
  03c8dd4  nop
  03c8dd8  ori 3, 31, 0
  03c8ddc  addic 4, 30, 288
  03c8de0  lfs 1, 568(1)
  03c8de4  li 6, 6
  03c8de8  li 7, 1
  03c8dec  li 8, 0
  03c8df0  bl 0x10ad80
  03c8df4  nop
  03c8df8  lis 3, 16544
  03c8dfc  lis 5, 16672
  03c8e00  li 6, 6
  03c8e04  li 4, 250
  03c8e08  stw 3, 368(30)
  03c8e0c  li 3, 60
  03c8e10  stw 5, 372(30)
  03c8e14  stb 6, 32(31)
  03c8e18  stb 4, 279(30)
  03c8e1c  bl 0x5e7e18
  03c8e20  nop
  03c8e24  sth 3, 38(30)
  03c8e28  addic 4, 30, 272
  03c8e2c  ori 3, 31, 0
  03c8e30  bl 0x10c808
  03c8e34  nop
  03c8e38  li 4, 255
  03c8e3c  lbz 3, 32(31)
  03c8e40  cmpwi 3, 9
  03c8e44  stb 4, 164(31)
  03c8e48  cmpwi 1, 3, 3
  03c8e4c  cmpwi 6, 3, 0
  03c8e50  cmpwi 7, 3, -1
  03c8e54  bt 1, 0x3c8eac
  03c8e58  bt 5, 0x3c8e7c
  03c8e5c  bt 25, 0x3c8e68
  03c8e60  bf 29, 0x3caf48
  03c8e64  b 0x3c8f04
  03c8e68  cmpwi 3, 1
  03c8e6c  bf 1, 0x3c9534
  03c8e70  cmpwi 3, 2
  03c8e74  bf 1, 0x3c9a6c
  03c8e78  b 0x3c9d64
  03c8e7c  cmpwi 3, 6
  03c8e80  bt 1, 0x3c8e98
  03c8e84  cmpwi 3, 4
  03c8e88  bf 1, 0x3ca0a0
  03c8e8c  cmpwi 3, 5
  03c8e90  bf 1, 0x3ca2f4
  03c8e94  b 0x3ca5d4
  03c8e98  cmpwi 3, 7
  03c8e9c  bf 1, 0x3ca670
  03c8ea0  cmpwi 3, 8
  03c8ea4  bf 1, 0x3c9720
  03c8ea8  b 0x3caf48
  03c8eac  cmpwi 3, 14
  03c8eb0  bt 1, 0x3c8edc
  03c8eb4  cmpwi 3, 11
  03c8eb8  bt 1, 0x3c8ec8
  03c8ebc  cmpwi 3, 10
  03c8ec0  bf 1, 0x3c97e8
  03c8ec4  b 0x3c996c
  03c8ec8  cmpwi 3, 12
  03c8ecc  bf 1, 0x3ca8f0
  03c8ed0  cmpwi 3, 13
  03c8ed4  bf 1, 0x3cac50
  03c8ed8  b 0x3c9034
  03c8edc  cmpwi 3, 17
  03c8ee0  bt 1, 0x3c8ef8
  03c8ee4  cmpwi 3, 15
  03c8ee8  bf 1, 0x3c9220
  03c8eec  cmpwi 3, 16
  03c8ef0  bf 1, 0x3c949c
  03c8ef4  b 0x3c9314
  03c8ef8  cmpwi 3, 99
  03c8efc  bt 2, 0x3ca6d0
  03c8f00  b 0x3caf48
  03c8f04  ori 4, 27, 0
  03c8f08  addic 3, 30, 464
  03c8f0c  bl 0x5e7e98
  03c8f10  nop
  03c8f14  li 4, 0
  03c8f18  lhz 3, 522(30)
  03c8f1c  cmpwi 3, 0
  03c8f20  stb 4, 41(30)
  03c8f24  bt 2, 0x3c8f58
  03c8f28  li 3, 1
  03c8f2c  lbz 4, 83(31)
  03c8f30  cmpwi 4, 4
  03c8f34  stb 3, 32(31)
  03c8f38  bt 2, 0x3c8f9c
  03c8f3c  ori 3, 31, 0
  03c8f40  li 4, 4
  03c8f44  li 5, 0
  03c8f48  li 6, 0
  03c8f4c  bl 0xfddc0
  03c8f50  nop
  03c8f54  b 0x3c8f9c
  03c8f58  lis 3, 61
  03c8f5c  lfs 1, 24(31)
  03c8f60  li 4, 14
  03c8f64  addi 3, 3, -30328
  03c8f68  lfs 2, 24(3)
  03c8f6c  stb 4, 32(31)
  03c8f70  fadds 1, 1, 2
  03c8f74  lbz 3, 83(31)
  03c8f78  cmpwi 3, 0
  03c8f7c  stfs 1, 24(31)
  03c8f80  bt 2, 0x3c8f9c
  03c8f84  ori 3, 31, 0
  03c8f88  li 4, 0
  03c8f8c  li 5, 0
  03c8f90  li 6, 0
  03c8f94  bl 0xfddc0
  03c8f98  nop
  03c8f9c  lis 4, 16256
  03c8fa0  li 6, 1
  03c8fa4  li 8, 0
  03c8fa8  li 5, 8
  03c8fac  stw 4, 32(30)
  03c8fb0  li 7, 4
  03c8fb4  sth 6, 36(30)
  03c8fb8  addic 3, 30, 384
  03c8fbc  sth 8, 532(30)
  03c8fc0  sth 8, 520(30)
  03c8fc4  stb 5, 88(30)
  03c8fc8  stb 7, 90(30)
  03c8fcc  bl 0x100f8c
  03c8fd0  nop
  03c8fd4  lis 3, 16384
  03c8fd8  lfs 1, 516(30)
  03c8fdc  lis 4, 114
  03c8fe0  li 5, 909
  03c8fe4  stw 3, 396(30)
  03c8fe8  stw 3, 392(30)
  03c8fec  lfs 2, -3052(4)
  03c8ff0  stw 5, 384(30)
  03c8ff4  fmuls 1, 1, 2
  03c8ff8  stfs 1, 420(30)
  03c8ffc  bl 0x5c8318
  03c9000  nop
  03c9004  clrlwi 3, 3, 31
  03c9008  cmpwi 3, 0
  03c900c  bt 2, 0x3c9024
  03c9010  lis 3, 0
  03c9014  lhz 4, 52(31)
  03c9018  ori 3, 3, 32768
  03c901c  or 3, 4, 3
  03c9020  sth 3, 52(31)
  03c9024  lis 3, 132
  03c9028  addic 3, 3, 24988
  03c902c  stw 3, 208(30)
  03c9030  b 0x3caf48
  03c9034  addic 3, 1, 144
  03c9038  addic 4, 1, 480
  03c903c  ori 5, 27, 0
  03c9040  bl 0x5e81f0
  03c9044  nop
  03c9048  addic 3, 30, 552
  03c904c  bl 0x4fff60
  03c9050  nop
  03c9054  cmpwi 3, 0
  03c9058  bt 2, 0x3c90c4
  03c905c  addic 3, 1, 144
  03c9060  bl 0x5e8030
  03c9064  nop
  03c9068  lfs 2, 508(30)
  03c906c  fadds 2, 2, 29
  03c9070  fcmpu 0, 1, 2
  03c9074  cror 6, 1, 2
  03c9078  bt 6, 0x3c90c4
  03c907c  lfs 1, 24(31)
  03c9080  lis 3, 61
  03c9084  lfs 2, 488(1)
  03c9088  addi 3, 3, -30328
  03c908c  fsubs 1, 1, 2
  03c9090  lfs 2, 28(3)
  03c9094  fabs 1, 1
  03c9098  fcmpu 0, 1, 2
  03c909c  cror 6, 1, 2
  03c90a0  bt 6, 0x3c90c4
  03c90a4  li 3, 19
  03c90a8  bl 0xfc620
  03c90ac  nop
  03c90b0  cmpwi 3, 0
  03c90b4  bf 2, 0x3c90c4
  03c90b8  li 3, 17
  03c90bc  stb 3, 32(31)
  03c90c0  b 0x3caf48
  03c90c4  lwz 3, 552(30)
  03c90c8  cmpwi 3, 0
  03c90cc  bf 2, 0x3c9174
  03c90d0  lbz 3, 188(31)
  03c90d4  cmpwi 3, 1
  03c90d8  bf 2, 0x3c9174
  03c90dc  li 3, 19
  03c90e0  bl 0xfc620
  03c90e4  nop
  03c90e8  cmpwi 3, 0
  03c90ec  bf 2, 0x3c9174
  03c90f0  li 3, 256
  03c90f4  bl 0xfc620
  03c90f8  nop
  03c90fc  clrlwi 3, 3, 31
  03c9100  lfs 1, 504(30)
  03c9104  cmpwi 3, 0
  03c9108  bt 2, 0x3c9114
  03c910c  fneg 1, 1
  03c9110  stfs 1, 504(30)
  03c9114  lis 3, 61
  03c9118  addi 3, 3, -30328
  03c911c  lfs 2, 32(3)
  03c9120  fmuls 1, 1, 2
  03c9124  stfs 1, 500(30)
  03c9128  lfs 1, 36(3)
  03c912c  lfs 2, 40(3)
  03c9130  bl 0xfcbe8
  03c9134  nop
  03c9138  fctiwz 1, 1
  03c913c  stfd 1, 576(1)
  03c9140  lwz 3, 580(1)
  03c9144  extsw 3, 3
  03c9148  bl 0x5e7e18
  03c914c  nop
  03c9150  li 4, 17
  03c9154  stw 3, 528(30)
  03c9158  addic 3, 30, 64
  03c915c  stb 4, 32(31)
  03c9160  bl 0x5e7e70
  03c9164  nop
  03c9168  li 3, 0
  03c916c  stb 3, 188(31)
  03c9170  b 0x3caf48
  03c9174  addic 3, 30, 524
  03c9178  bl 0x4fff60
  03c917c  nop
  03c9180  cmpwi 3, 0
  03c9184  bt 2, 0x3caf48
  03c9188  li 3, 120
  03c918c  bl 0x5e7e18
  03c9190  nop
  03c9194  fmr 1, 31
  03c9198  lis 4, 61
  03c919c  stw 3, 524(30)
  03c91a0  addi 29, 4, -30328
  03c91a4  lfs 2, 44(29)
  03c91a8  bl 0xfcbe8
  03c91ac  nop
  03c91b0  fmr 31, 1
  03c91b4  bl 0xfcc68
  03c91b8  nop
  03c91bc  fmr 30, 1
  03c91c0  bl 0x5e8078
  03c91c4  nop
  03c91c8  fmuls 2, 1, 31
  03c91cc  fmr 1, 30
  03c91d0  stfs 2, 160(1)
  03c91d4  bl 0x5e8128
  03c91d8  nop
  03c91dc  fmuls 1, 1, 31
  03c91e0  li 3, 0
  03c91e4  stw 3, 168(1)
  03c91e8  stfs 1, 164(1)
  03c91ec  lfs 1, 48(29)
  03c91f0  lfs 2, 52(29)
  03c91f4  bl 0xfcbe8
  03c91f8  nop
  03c91fc  addic 3, 30, 480
  03c9200  stfs 1, 168(1)
  03c9204  addic 4, 1, 160
  03c9208  addic 5, 30, 464
  03c920c  bl 0x5e7f54
  03c9210  nop
  03c9214  li 3, 15
  03c9218  stb 3, 32(31)
  03c921c  b 0x3caf48
  03c9220  lfs 1, 480(30)
  03c9224  lfs 2, 16(31)
  03c9228  lfs 3, 484(30)
  03c922c  lfs 4, 20(31)
  03c9230  fsubs 1, 1, 2
  03c9234  fsubs 2, 3, 4
  03c9238  bl 0x5e8338
  03c923c  nop
  03c9240  lis 3, 61
  03c9244  addic 5, 30, 496
  03c9248  addi 28, 3, -30328
  03c924c  ori 3, 31, 0
  03c9250  lfs 2, 56(28)
  03c9254  lfs 3, 60(28)
  03c9258  lfs 4, 64(28)
  03c925c  bl 0xff2e8
  03c9260  nop
  03c9264  addic 29, 30, 64
  03c9268  addic 4, 30, 480
  03c926c  ori 3, 29, 0
  03c9270  ori 5, 27, 0
  03c9274  bl 0x5e81f0
  03c9278  nop
  03c927c  lis 4, 114
  03c9280  ori 3, 29, 0
  03c9284  lfs 1, -3052(4)
  03c9288  fmuls 1, 1, 29
  03c928c  bl 0x110488
  03c9290  nop
  03c9294  addic 26, 1, 176
  03c9298  ori 4, 29, 0
  03c929c  ori 3, 26, 0
  03c92a0  ori 5, 27, 0
  03c92a4  bl 0x5e7f54
  03c92a8  nop
  03c92ac  ori 3, 26, 0
  03c92b0  lfs 1, 68(28)
  03c92b4  li 5, 0
  03c92b8  ori 6, 31, 0
  03c92bc  bl 0x59e20
  03c92c0  nop
  03c92c4  cmpwi 3, 0
  03c92c8  bt 2, 0x3c92e4
  03c92cc  ori 3, 29, 0
  03c92d0  bl 0x5e7e70
  03c92d4  nop
  03c92d8  li 3, 14
  03c92dc  stb 3, 32(31)
  03c92e0  b 0x3c92f4
  03c92e4  addic 4, 1, 176
  03c92e8  ori 3, 27, 0
  03c92ec  bl 0x5e7e98
  03c92f0  nop
  03c92f4  ori 3, 29, 0
  03c92f8  bl 0x5e8030
  03c92fc  nop
  03c9300  fcmpu 0, 1, 31
  03c9304  bf 2, 0x3caf48
  03c9308  li 3, 14
  03c930c  stb 3, 32(31)
  03c9310  b 0x3caf48
  03c9314  lis 3, 61
  03c9318  li 4, 0
  03c931c  addi 29, 3, -30328
  03c9320  ori 3, 27, 0
  03c9324  lfs 1, 72(29)
  03c9328  bl 0xffb70
  03c932c  nop
  03c9330  lis 4, 114
  03c9334  lis 5, 114
  03c9338  lfs 2, 76(29)
  03c933c  lfs 3, 80(29)
  03c9340  fmr 31, 1
  03c9344  addic 3, 30, 72
  03c9348  lfs 1, -3052(4)
  03c934c  lfs 4, -3048(5)
  03c9350  fmuls 1, 1, 2
  03c9354  fmuls 2, 4, 3
  03c9358  bl 0x109af0
  03c935c  nop
  03c9360  lfs 1, 24(31)
  03c9364  lfs 2, 72(30)
  03c9368  lbz 27, 83(31)
  03c936c  fadds 1, 1, 2
  03c9370  cmpwi 27, 1
  03c9374  stfs 1, 24(31)
  03c9378  bt 2, 0x3c93e4
  03c937c  lis 3, 61
  03c9380  fsubs 2, 1, 31
  03c9384  lis 5, 114
  03c9388  addi 3, 3, -30328
  03c938c  lis 4, 114
  03c9390  lfs 3, 28(3)
  03c9394  lfs 4, 84(3)
  03c9398  lfs 5, -3052(5)
  03c939c  lfs 6, -3056(4)
  03c93a0  fmuls 3, 5, 3
  03c93a4  fmuls 4, 6, 4
  03c93a8  fmuls 3, 3, 4
  03c93ac  fcmpu 0, 2, 3
  03c93b0  bt 1, 0x3c93e4
  03c93b4  cmpwi 27, 1
  03c93b8  bt 2, 0x3c93e4
  03c93bc  li 3, 5
  03c93c0  bl 0x5e7e18
  03c93c4  nop
  03c93c8  ori 6, 3, 0
  03c93cc  ori 3, 31, 0
  03c93d0  li 4, 1
  03c93d4  li 5, 0
  03c93d8  bl 0xfddc0
  03c93dc  nop
  03c93e0  lfs 1, 24(31)
  03c93e4  fcmpu 0, 1, 31
  03c93e8  bt 1, 0x3caf48
  03c93ec  li 3, 256
  03c93f0  stfs 31, 24(31)
  03c93f4  bl 0xfc620
  03c93f8  nop
  03c93fc  clrlwi 3, 3, 31
  03c9400  lfs 31, 504(30)
  03c9404  cmpwi 3, 0
  03c9408  bt 2, 0x3c9414
  03c940c  fneg 31, 31
  03c9410  stfs 31, 504(30)
  03c9414  lis 3, 61
  03c9418  addi 3, 3, -30328
  03c941c  lfs 1, 32(3)
  03c9420  fmuls 1, 31, 1
  03c9424  stfs 1, 500(30)
  03c9428  lfs 1, 36(3)
  03c942c  lfs 2, 40(3)
  03c9430  bl 0xfcbe8
  03c9434  nop
  03c9438  fctiwz 1, 1
  03c943c  stfd 1, 576(1)
  03c9440  lwz 3, 580(1)
  03c9444  extsw 3, 3
  03c9448  bl 0x5e7e18
  03c944c  nop
  03c9450  li 4, 3
  03c9454  stw 3, 528(30)
  03c9458  addic 3, 30, 64
  03c945c  stb 4, 32(31)
  03c9460  bl 0x5e7e70
  03c9464  nop
  03c9468  lbz 3, 83(31)
  03c946c  cmpwi 3, 2
  03c9470  bt 2, 0x3caf48
  03c9474  li 3, 3
  03c9478  bl 0x5e7e18
  03c947c  nop
  03c9480  ori 6, 3, 0
  03c9484  ori 3, 31, 0
  03c9488  li 4, 2
  03c948c  li 5, 0
  03c9490  bl 0xfddc0
  03c9494  nop
  03c9498  b 0x3caf48
  03c949c  lis 3, 61
  03c94a0  li 4, 0
  03c94a4  addi 29, 3, -30328
  03c94a8  ori 3, 27, 0
  03c94ac  lfs 1, 72(29)
  03c94b0  bl 0xffb70
  03c94b4  nop
  03c94b8  lis 4, 114
  03c94bc  lis 5, 114
  03c94c0  lfs 2, 28(29)
  03c94c4  lfs 3, 80(29)
  03c94c8  fmr 31, 1
  03c94cc  addic 3, 30, 72
  03c94d0  lfs 1, -3052(4)
  03c94d4  lfs 4, -3048(5)
  03c94d8  fmuls 1, 1, 2
  03c94dc  fmuls 2, 4, 3
  03c94e0  bl 0x109af0
  03c94e4  nop
  03c94e8  lfs 1, 24(31)
  03c94ec  lfs 2, 72(30)
  03c94f0  fadds 2, 1, 2
  03c94f4  stfs 2, 24(31)
  03c94f8  lfs 1, 24(29)
  03c94fc  fadds 1, 31, 1
  03c9500  fcmpu 0, 2, 1
  03c9504  bt 0, 0x3caf48
  03c9508  li 4, 14
  03c950c  li 3, 180
  03c9510  stfs 1, 24(31)
  03c9514  stb 4, 32(31)
  03c9518  bl 0x5e7e18
  03c951c  nop
  03c9520  stw 3, 552(30)
  03c9524  addic 3, 30, 64
  03c9528  bl 0x5e7e70
  03c952c  nop
  03c9530  b 0x3caf48
  03c9534  addic 29, 1, 192
  03c9538  addic 4, 1, 480
  03c953c  ori 3, 29, 0
  03c9540  ori 5, 27, 0
  03c9544  bl 0x5e81f0
  03c9548  nop
  03c954c  ori 3, 29, 0
  03c9550  bl 0x5e8030
  03c9554  nop
  03c9558  lfs 2, 508(30)
  03c955c  fadds 2, 2, 29
  03c9560  fcmpu 0, 1, 2
  03c9564  cror 6, 1, 2
  03c9568  bt 6, 0x3c95e4
  03c956c  lfs 1, 24(31)
  03c9570  lis 3, 61
  03c9574  lfs 2, 488(1)
  03c9578  addi 3, 3, -30328
  03c957c  fsubs 1, 1, 2
  03c9580  lfs 2, 28(3)
  03c9584  fabs 1, 1
  03c9588  fcmpu 0, 1, 2
  03c958c  cror 6, 1, 2
  03c9590  bt 6, 0x3c95e4
  03c9594  li 3, 19
  03c9598  bl 0xfc620
  03c959c  nop
  03c95a0  cmpwi 3, 0
  03c95a4  bf 2, 0x3c95e4
  03c95a8  li 3, 2
  03c95ac  lbz 4, 83(31)
  03c95b0  cmpwi 4, 5
  03c95b4  stb 3, 32(31)
  03c95b8  bt 2, 0x3caf48
  03c95bc  li 3, 3
  03c95c0  bl 0x5e7e18
  03c95c4  nop
  03c95c8  ori 6, 3, 0
  03c95cc  ori 3, 31, 0
  03c95d0  li 4, 5
  03c95d4  li 5, 0
  03c95d8  bl 0xfddc0
  03c95dc  nop
  03c95e0  b 0x3caf48
  03c95e4  lbz 3, 188(31)
  03c95e8  cmpwi 3, 1
  03c95ec  bf 2, 0x3c96ac
  03c95f0  li 3, 19
  03c95f4  bl 0xfc620
  03c95f8  nop
  03c95fc  cmpwi 3, 0
  03c9600  bf 2, 0x3c96ac
  03c9604  li 3, 256
  03c9608  bl 0xfc620
  03c960c  nop
  03c9610  clrlwi 3, 3, 31
  03c9614  lfs 1, 504(30)
  03c9618  cmpwi 3, 0
  03c961c  bt 2, 0x3c9628
  03c9620  fneg 1, 1
  03c9624  stfs 1, 504(30)
  03c9628  lis 3, 61
  03c962c  addi 3, 3, -30328
  03c9630  lfs 2, 32(3)
  03c9634  fmuls 1, 1, 2
  03c9638  stfs 1, 500(30)
  03c963c  lfs 1, 36(3)
  03c9640  lfs 2, 40(3)
  03c9644  bl 0xfcbe8
  03c9648  nop
  03c964c  fctiwz 1, 1
  03c9650  stfd 1, 576(1)
  03c9654  lwz 3, 580(1)
  03c9658  extsw 3, 3
  03c965c  bl 0x5e7e18
  03c9660  nop
  03c9664  li 4, 3
  03c9668  stw 3, 528(30)
  03c966c  lbz 3, 83(31)
  03c9670  cmpwi 3, 2
  03c9674  stb 4, 32(31)
  03c9678  bt 2, 0x3c96a0
  03c967c  li 3, 3
  03c9680  bl 0x5e7e18
  03c9684  nop
  03c9688  ori 6, 3, 0
  03c968c  ori 3, 31, 0
  03c9690  li 4, 2
  03c9694  li 5, 0
  03c9698  bl 0xfddc0
  03c969c  nop
  03c96a0  li 3, 0
  03c96a4  stb 3, 188(31)
  03c96a8  b 0x3caf48
  03c96ac  addic 3, 1, 192
  03c96b0  bl 0x5e8030
  03c96b4  nop
  03c96b8  lis 3, 61
  03c96bc  lfs 2, 508(30)
  03c96c0  addi 3, 3, -30328
  03c96c4  lfs 3, 24(3)
  03c96c8  fadds 2, 2, 3
  03c96cc  fcmpu 0, 1, 2
  03c96d0  cror 6, 0, 2
  03c96d4  bt 6, 0x3caf48
  03c96d8  lhz 3, 522(30)
  03c96dc  cmpwi 3, 0
  03c96e0  bf 2, 0x3caf48
  03c96e4  li 3, 16
  03c96e8  lbz 4, 83(31)
  03c96ec  cmpwi 4, 0
  03c96f0  stb 3, 32(31)
  03c96f4  bt 2, 0x3caf48
  03c96f8  li 3, 3
  03c96fc  bl 0x5e7e18
  03c9700  nop
  03c9704  ori 6, 3, 0
  03c9708  ori 3, 31, 0
  03c970c  li 4, 0
  03c9710  li 5, 0
  03c9714  bl 0xfddc0
  03c9718  nop
  03c971c  b 0x3caf48
  03c9720  addic 29, 1, 208
  03c9724  addic 4, 1, 480
  03c9728  ori 3, 29, 0
  03c972c  ori 5, 27, 0
  03c9730  bl 0x5e81f0
  03c9734  nop
  03c9738  ori 3, 29, 0
  03c973c  bl 0x5e8030
  03c9740  nop
  03c9744  lfs 2, 508(30)
  03c9748  fsubs 2, 2, 29
  03c974c  fcmpu 0, 1, 2
  03c9750  cror 6, 1, 2
  03c9754  bt 6, 0x3caf48
  03c9758  lfs 1, 24(31)
  03c975c  lfs 2, 488(1)
  03c9760  lis 3, 61
  03c9764  fsubs 1, 1, 2
  03c9768  addi 3, 3, -30328
  03c976c  lfs 2, 28(3)
  03c9770  fabs 1, 1
  03c9774  fcmpu 0, 1, 2
  03c9778  cror 6, 1, 2
  03c977c  bt 6, 0x3caf48
  03c9780  li 3, 19
  03c9784  bl 0xfc620
  03c9788  nop
  03c978c  cmpwi 3, 0
  03c9790  bf 2, 0x3caf48
  03c9794  lis 3, 61
  03c9798  lfs 1, 24(31)
  03c979c  addi 3, 3, -30328
  03c97a0  lfs 2, 88(3)
  03c97a4  li 3, 2
  03c97a8  lbz 4, 83(31)
  03c97ac  fadds 1, 1, 2
  03c97b0  cmpwi 4, 5
  03c97b4  stb 3, 32(31)
  03c97b8  stfs 1, 24(31)
  03c97bc  bt 2, 0x3caf48
  03c97c0  li 3, 3
  03c97c4  bl 0x5e7e18
  03c97c8  nop
  03c97cc  ori 6, 3, 0
  03c97d0  ori 3, 31, 0
  03c97d4  li 4, 5
  03c97d8  li 5, 0
  03c97dc  bl 0xfddc0
  03c97e0  nop
  03c97e4  b 0x3caf48
  03c97e8  lfs 1, 464(30)
  03c97ec  lfs 2, 16(31)
  03c97f0  lfs 3, 468(30)
  03c97f4  lfs 4, 20(31)
  03c97f8  fsubs 1, 1, 2
  03c97fc  fsubs 2, 3, 4
  03c9800  bl 0x5e8338
  03c9804  nop
  03c9808  lis 3, 61
  03c980c  addic 5, 30, 496
  03c9810  addi 4, 3, -30328
  03c9814  ori 3, 31, 0
  03c9818  lfs 2, 56(4)
  03c981c  lfs 3, 60(4)
  03c9820  lfs 4, 64(4)
  03c9824  bl 0xff2e8
  03c9828  nop
  03c982c  addic 28, 1, 224
  03c9830  addic 29, 30, 464
  03c9834  ori 3, 28, 0
  03c9838  addic 4, 1, 480
  03c983c  ori 5, 29, 0
  03c9840  bl 0x5e81f0
  03c9844  nop
  03c9848  ori 3, 28, 0
  03c984c  bl 0x5e8030
  03c9850  nop
  03c9854  lfs 2, 508(30)
  03c9858  fcmpu 0, 1, 2
  03c985c  cror 6, 1, 2
  03c9860  bt 6, 0x3c9888
  03c9864  lfs 1, 472(30)
  03c9868  lis 3, 61
  03c986c  lfs 2, 488(1)
  03c9870  addi 3, 3, -30328
  03c9874  fsubs 1, 1, 2
  03c9878  lfs 2, 28(3)
  03c987c  fabs 1, 1
  03c9880  fcmpu 0, 1, 2
  03c9884  bt 0, 0x3c9894
  03c9888  lbz 3, 188(31)
  03c988c  cmpwi 3, 2
  03c9890  bf 2, 0x3caf48
  03c9894  lbz 3, 33(31)
  03c9898  cmpwi 3, 255
  03c989c  bt 2, 0x3c98ac
  03c98a0  li 4, 2
  03c98a4  bl 0x104298
  03c98a8  nop
  03c98ac  lbz 3, 83(31)
  03c98b0  cmpwi 3, 6
  03c98b4  bt 2, 0x3c98dc
  03c98b8  li 3, 3
  03c98bc  bl 0x5e7e18
  03c98c0  nop
  03c98c4  ori 6, 3, 0
  03c98c8  ori 3, 31, 0
  03c98cc  li 4, 6
  03c98d0  li 5, 0
  03c98d4  bl 0xfddc0
  03c98d8  nop
  03c98dc  lis 3, 132
  03c98e0  li 28, 0
  03c98e4  lis 4, 132
  03c98e8  lis 5, 114
  03c98ec  addic 7, 1, 572
  03c98f0  lfs 2, 24984(3)
  03c98f4  stw 28, 308(30)
  03c98f8  ori 3, 27, 0
  03c98fc  stfs 2, 304(30)
  03c9900  lfs 1, 24980(4)
  03c9904  lfs 3, -3052(5)
  03c9908  fneg 2, 2
  03c990c  ori 4, 29, 0
  03c9910  fmuls 1, 1, 3
  03c9914  stfs 1, 312(30)
  03c9918  bl 0x108180
  03c991c  nop
  03c9920  li 5, 13
  03c9924  stfs 1, 316(30)
  03c9928  ori 3, 31, 0
  03c992c  stb 28, 349(30)
  03c9930  addic 4, 30, 288
  03c9934  lfs 1, 72(31)
  03c9938  li 6, 6
  03c993c  stw 5, 324(30)
  03c9940  li 7, 1
  03c9944  li 8, 0
  03c9948  bl 0x10ad80
  03c994c  nop
  03c9950  lis 3, 16544
  03c9954  lis 4, 16672
  03c9958  li 5, 11
  03c995c  stw 3, 368(30)
  03c9960  stw 4, 372(30)
  03c9964  stb 5, 32(31)
  03c9968  b 0x3caf48
  03c996c  ori 3, 31, 0
  03c9970  addic 4, 30, 288
  03c9974  bl 0x10b030
  03c9978  nop
  03c997c  clrlwi 3, 3, 31
  03c9980  cmpwi 3, 0
  03c9984  bt 2, 0x3c9a28
  03c9988  li 4, 3
  03c998c  li 3, 256
  03c9990  stb 4, 32(31)
  03c9994  bl 0xfc620
  03c9998  nop
  03c999c  clrlwi 3, 3, 31
  03c99a0  lfs 1, 504(30)
  03c99a4  cmpwi 3, 0
  03c99a8  bt 2, 0x3c99b4
  03c99ac  fneg 1, 1
  03c99b0  stfs 1, 504(30)
  03c99b4  lis 3, 61
  03c99b8  addi 3, 3, -30328
  03c99bc  lfs 2, 32(3)
  03c99c0  fmuls 1, 1, 2
  03c99c4  stfs 1, 500(30)
  03c99c8  lfs 1, 36(3)
  03c99cc  lfs 2, 40(3)
  03c99d0  bl 0xfcbe8
  03c99d4  nop
  03c99d8  fctiwz 1, 1
  03c99dc  stfd 1, 576(1)
  03c99e0  lwz 3, 580(1)
  03c99e4  extsw 3, 3
  03c99e8  bl 0x5e7e18
  03c99ec  nop
  03c99f0  stw 3, 528(30)
  03c99f4  lbz 3, 83(31)
  03c99f8  cmpwi 3, 2
  03c99fc  bt 2, 0x3caf64
  03c9a00  li 3, 3
  03c9a04  bl 0x5e7e18
  03c9a08  nop
  03c9a0c  ori 6, 3, 0
  03c9a10  ori 3, 31, 0
  03c9a14  li 4, 2
  03c9a18  li 5, 8
  03c9a1c  bl 0xfddc0
  03c9a20  nop
  03c9a24  b 0x3caf64
  03c9a28  lwz 4, 24(31)
  03c9a2c  lis 3, 16544
  03c9a30  srawi 5, 4, 31
  03c9a34  srwi 6, 5, 1
  03c9a38  xor 4, 6, 4
  03c9a3c  subc 4, 4, 5
  03c9a40  cmpw 4, 3
  03c9a44  bf 0, 0x3caf48
  03c9a48  ori 3, 31, 0
  03c9a4c  li 4, 0
  03c9a50  li 5, -1
  03c9a54  bl 0xfd8d0
  03c9a58  nop
  03c9a5c  ori 3, 31, 0
  03c9a60  bl 0xefb38
  03c9a64  nop
  03c9a68  b 0x3caf64
  03c9a6c  lfs 1, 16(31)
  03c9a70  lfs 2, 480(1)
  03c9a74  lfs 3, 20(31)
  03c9a78  lfs 4, 484(1)
  03c9a7c  fsubs 1, 1, 2
  03c9a80  fsubs 2, 3, 4
  03c9a84  bl 0x5e8338
  03c9a88  nop
  03c9a8c  lis 3, 61
  03c9a90  addic 5, 30, 496
  03c9a94  addi 4, 3, -30328
  03c9a98  ori 3, 31, 0
  03c9a9c  lfs 2, 92(4)
  03c9aa0  lfs 3, 60(4)
  03c9aa4  lfs 4, 96(4)
  03c9aa8  bl 0xff2e8
  03c9aac  nop
  03c9ab0  addic 29, 1, 240
  03c9ab4  addic 4, 1, 480
  03c9ab8  ori 3, 29, 0
  03c9abc  ori 5, 27, 0
  03c9ac0  bl 0x5e81f0
  03c9ac4  nop
  03c9ac8  ori 3, 29, 0
  03c9acc  bl 0x5e8030
  03c9ad0  nop
  03c9ad4  lfs 2, 508(30)
  03c9ad8  fcmpu 0, 1, 2
  03c9adc  cror 6, 1, 2
  03c9ae0  bt 6, 0x3c9be0
  03c9ae4  lfs 1, 24(31)
  03c9ae8  lfs 2, 488(1)
  03c9aec  lis 3, 61
  03c9af0  fsubs 1, 1, 2
  03c9af4  addi 3, 3, -30328
  03c9af8  lfs 2, 28(3)
  03c9afc  fabs 1, 1
  03c9b00  fcmpu 0, 1, 2
  03c9b04  cror 6, 1, 2
  03c9b08  bt 6, 0x3c9be0
  03c9b0c  li 3, 19
  03c9b10  bl 0xfc620
  03c9b14  nop
  03c9b18  cmpwi 3, 0
  03c9b1c  bf 2, 0x3c9be0
  03c9b20  lbz 3, 33(31)
  03c9b24  cmpwi 3, 255
  03c9b28  bt 2, 0x3c9b38
  03c9b2c  li 4, 1
  03c9b30  bl 0x104298
  03c9b34  nop
  03c9b38  li 3, 256
  03c9b3c  bl 0xfc620
  03c9b40  nop
  03c9b44  clrlwi 3, 3, 31
  03c9b48  lfs 1, 504(30)
  03c9b4c  cmpwi 3, 0
  03c9b50  bt 2, 0x3c9b5c
  03c9b54  fneg 1, 1
  03c9b58  stfs 1, 504(30)
  03c9b5c  lis 3, 61
  03c9b60  addi 3, 3, -30328
  03c9b64  lfs 2, 32(3)
  03c9b68  fmuls 1, 1, 2
  03c9b6c  stfs 1, 500(30)
  03c9b70  lfs 1, 36(3)
  03c9b74  lfs 2, 40(3)
  03c9b78  bl 0xfcbe8
  03c9b7c  nop
  03c9b80  fctiwz 1, 1
  03c9b84  stfd 1, 576(1)
  03c9b88  lwz 3, 580(1)
  03c9b8c  extsw 3, 3
  03c9b90  bl 0x5e7e18
  03c9b94  nop
  03c9b98  li 4, 3
  03c9b9c  stw 3, 528(30)
  03c9ba0  lbz 3, 83(31)
  03c9ba4  cmpwi 3, 2
  03c9ba8  stb 4, 32(31)
  03c9bac  bt 2, 0x3c9bd4
  03c9bb0  li 3, 3
  03c9bb4  bl 0x5e7e18
  03c9bb8  nop
  03c9bbc  ori 6, 3, 0
  03c9bc0  ori 3, 31, 0
  03c9bc4  li 4, 2
  03c9bc8  li 5, 0
  03c9bcc  bl 0xfddc0
  03c9bd0  nop
  03c9bd4  li 3, 0
  03c9bd8  stb 3, 188(31)
  03c9bdc  b 0x3c9d18
  03c9be0  lbz 3, 188(31)
  03c9be4  cmpwi 3, 1
  03c9be8  bf 2, 0x3c9ca8
  03c9bec  li 3, 19
  03c9bf0  bl 0xfc620
  03c9bf4  nop
  03c9bf8  cmpwi 3, 0
  03c9bfc  bf 2, 0x3c9ca8
  03c9c00  li 3, 256
  03c9c04  bl 0xfc620
  03c9c08  nop
  03c9c0c  clrlwi 3, 3, 31
  03c9c10  lfs 1, 504(30)
  03c9c14  cmpwi 3, 0
  03c9c18  bt 2, 0x3c9c24
  03c9c1c  fneg 1, 1
  03c9c20  stfs 1, 504(30)
  03c9c24  lis 3, 61
  03c9c28  addi 3, 3, -30328
  03c9c2c  lfs 2, 32(3)
  03c9c30  fmuls 1, 1, 2
  03c9c34  stfs 1, 500(30)
  03c9c38  lfs 1, 36(3)
  03c9c3c  lfs 2, 40(3)
  03c9c40  bl 0xfcbe8
  03c9c44  nop
  03c9c48  fctiwz 1, 1
  03c9c4c  stfd 1, 576(1)
  03c9c50  lwz 3, 580(1)
  03c9c54  extsw 3, 3
  03c9c58  bl 0x5e7e18
  03c9c5c  nop
  03c9c60  li 4, 3
  03c9c64  stw 3, 528(30)
  03c9c68  lbz 3, 83(31)
  03c9c6c  cmpwi 3, 2
  03c9c70  stb 4, 32(31)
  03c9c74  bt 2, 0x3c9c9c
  03c9c78  li 3, 3
  03c9c7c  bl 0x5e7e18
  03c9c80  nop
  03c9c84  ori 6, 3, 0
  03c9c88  ori 3, 31, 0
  03c9c8c  li 4, 2
  03c9c90  li 5, 0
  03c9c94  bl 0xfddc0
  03c9c98  nop
  03c9c9c  li 3, 0
  03c9ca0  stb 3, 188(31)
  03c9ca4  b 0x3c9d18
  03c9ca8  addic 3, 1, 240
  03c9cac  bl 0x5e8030
  03c9cb0  nop
  03c9cb4  lis 3, 61
  03c9cb8  lfs 2, 508(30)
  03c9cbc  addi 3, 3, -30328
  03c9cc0  lfs 3, 24(3)
  03c9cc4  fadds 2, 2, 3
  03c9cc8  fcmpu 0, 1, 2
  03c9ccc  cror 6, 0, 2
  03c9cd0  bt 6, 0x3c9d18
  03c9cd4  lhz 3, 522(30)
  03c9cd8  cmpwi 3, 0
  03c9cdc  bf 2, 0x3c9d18
  03c9ce0  li 3, 16
  03c9ce4  lbz 4, 83(31)
  03c9ce8  cmpwi 4, 0
  03c9cec  stb 3, 32(31)
  03c9cf0  bt 2, 0x3c9d18
  03c9cf4  li 3, 3
  03c9cf8  bl 0x5e7e18
  03c9cfc  nop
  03c9d00  ori 6, 3, 0
  03c9d04  ori 3, 31, 0
  03c9d08  li 4, 0
  03c9d0c  li 5, 0
  03c9d10  bl 0xfddc0
  03c9d14  nop
  03c9d18  lbz 3, 83(31)
  03c9d1c  cmpwi 3, 5
  03c9d20  cmpwi 1, 3, 4
  03c9d24  bf 2, 0x3caf48
  03c9d28  lbz 3, 112(31)
  03c9d2c  rlwinm 3, 3, 0, 30, 30
  03c9d30  cmpwi 3, 0
  03c9d34  bt 2, 0x3caf48
  03c9d38  bt 6, 0x3caf48
  03c9d3c  li 3, 3
  03c9d40  bl 0x5e7e18
  03c9d44  nop
  03c9d48  ori 6, 3, 0
  03c9d4c  ori 3, 31, 0
  03c9d50  li 4, 4
  03c9d54  li 5, 0
  03c9d58  bl 0xfddc0
  03c9d5c  nop
  03c9d60  b 0x3caf48
  03c9d64  lfs 1, 24(31)
  03c9d68  lfs 2, 488(1)
  03c9d6c  ori 3, 27, 0
  03c9d70  addic 4, 1, 480
  03c9d74  fsubs 1, 1, 2
  03c9d78  fabs 31, 1
  03c9d7c  bl 0x5e8588
  03c9d80  nop
  03c9d84  lwz 3, 540(30)
  03c9d88  fdivs 31, 31, 1
  03c9d8c  cmpwi 3, -1
  03c9d90  bt 2, 0x3c9dc0
  03c9d94  lis 4, 165
  03c9d98  slwi 3, 3, 2
  03c9d9c  addic 4, 4, 7136
  03c9da0  extsw 7, 3
  03c9da4  addic 5, 1, 480
  03c9da8  addic 6, 1, 272
  03c9dac  ori 3, 31, 0
  03c9db0  lwzx 4, 4, 7
  03c9db4  bl 0x1385d0
  03c9db8  nop
  03c9dbc  b 0x3c9dd0
  03c9dc0  addic 4, 1, 480
  03c9dc4  addic 3, 1, 272
  03c9dc8  bl 0x5e7e98
  03c9dcc  nop
  03c9dd0  lfs 1, 272(1)
  03c9dd4  lfs 2, 16(31)
  03c9dd8  lfs 3, 276(1)
  03c9ddc  fsubs 1, 1, 2
  03c9de0  lfs 4, 20(31)
  03c9de4  fsubs 2, 3, 4
  03c9de8  bl 0x5e8338
  03c9dec  nop
  03c9df0  lis 3, 61
  03c9df4  lfs 2, 500(30)
  03c9df8  addic 5, 30, 496
  03c9dfc  addi 29, 3, -30328
  03c9e00  fadds 1, 1, 2
  03c9e04  ori 3, 31, 0
  03c9e08  lfs 2, 56(29)
  03c9e0c  lfs 3, 60(29)
  03c9e10  lfs 4, 64(29)
  03c9e14  bl 0xff2e8
  03c9e18  nop
  03c9e1c  lfs 1, 72(31)
  03c9e20  bl 0x5e8078
  03c9e24  nop
  03c9e28  lfs 28, 100(29)
  03c9e2c  lfs 2, 72(31)
  03c9e30  fmuls 3, 1, 28
  03c9e34  fmr 1, 2
  03c9e38  stfs 3, 256(1)
  03c9e3c  bl 0x5e8128
  03c9e40  nop
  03c9e44  fmuls 1, 1, 28
  03c9e48  li 5, 0
  03c9e4c  ori 3, 31, 0
  03c9e50  addic 4, 30, 384
  03c9e54  addic 6, 1, 272
  03c9e58  stw 5, 264(1)
  03c9e5c  addic 5, 1, 256
  03c9e60  stfs 1, 260(1)
  03c9e64  lfs 28, 88(29)
  03c9e68  fmr 1, 28
  03c9e6c  bl 0x101058
  03c9e70  nop
  03c9e74  ori 29, 3, 0
  03c9e78  addic 3, 30, 528
  03c9e7c  bl 0x4fff60
  03c9e80  nop
  03c9e84  cmpwi 3, 0
  03c9e88  bt 2, 0x3c9ecc
  03c9e8c  lis 3, 61
  03c9e90  addi 3, 3, -30328
  03c9e94  lfs 1, 36(3)
  03c9e98  lfs 2, 40(3)
  03c9e9c  bl 0xfcbe8
  03c9ea0  nop
  03c9ea4  fctiwz 1, 1
  03c9ea8  stfd 1, 576(1)
  03c9eac  lwz 3, 580(1)
  03c9eb0  extsw 3, 3
  03c9eb4  bl 0x5e7e18
  03c9eb8  nop
  03c9ebc  lfs 1, 500(30)
  03c9ec0  stw 3, 528(30)
  03c9ec4  fneg 1, 1
  03c9ec8  stfs 1, 500(30)
  03c9ecc  addic 28, 1, 480
  03c9ed0  addic 3, 1, 288
  03c9ed4  ori 4, 28, 0
  03c9ed8  addic 5, 30, 464
  03c9edc  bl 0x5e81f0
  03c9ee0  nop
  03c9ee4  ori 3, 27, 0
  03c9ee8  ori 4, 28, 0
  03c9eec  bl 0x5e8588
  03c9ef0  nop
  03c9ef4  fmr 3, 1
  03c9ef8  lfs 1, 128(1)
  03c9efc  lfs 2, 132(1)
  03c9f00  lbz 3, 83(31)
  03c9f04  fcmpu 0, 3, 30
  03c9f08  cror 6, 1, 2
  03c9f0c  bt 6, 0x3c9f54
  03c9f10  rlwinm 4, 29, 0, 30, 30
  03c9f14  cmpwi 4, 0
  03c9f18  bf 2, 0x3c9f54
  03c9f1c  li 4, 4
  03c9f20  cmpwi 3, 3
  03c9f24  stb 4, 32(31)
  03c9f28  bt 2, 0x3ca020
  03c9f2c  li 3, 3
  03c9f30  bl 0x5e7e18
  03c9f34  nop
  03c9f38  ori 6, 3, 0
  03c9f3c  ori 3, 31, 0
  03c9f40  li 4, 3
  03c9f44  li 5, 0
  03c9f48  bl 0xfddc0
  03c9f4c  nop
  03c9f50  b 0x3ca020
  03c9f54  fcmpu 0, 31, 28
  03c9f58  bt 1, 0x3c9f68
  03c9f5c  rlwinm 4, 29, 0, 30, 30
  03c9f60  cmpwi 4, 0
  03c9f64  bt 2, 0x3c9fa8
  03c9f68  li 4, 12
  03c9f6c  stfs 1, 16(31)
  03c9f70  cmpwi 3, 5
  03c9f74  stfs 2, 20(31)
  03c9f78  stb 4, 32(31)
  03c9f7c  bt 2, 0x3ca020
  03c9f80  li 3, 3
  03c9f84  bl 0x5e7e18
  03c9f88  nop
  03c9f8c  ori 6, 3, 0
  03c9f90  ori 3, 31, 0
  03c9f94  li 4, 5
  03c9f98  li 5, 0
  03c9f9c  bl 0xfddc0
  03c9fa0  nop
  03c9fa4  b 0x3ca020
  03c9fa8  addic 3, 1, 288
  03c9fac  bl 0x5e8030
  03c9fb0  nop
  03c9fb4  lfs 2, 508(30)
  03c9fb8  fadds 2, 2, 29
  03c9fbc  fcmpu 0, 1, 2
  03c9fc0  cror 6, 1, 2
  03c9fc4  bt 6, 0x3ca00c
  03c9fc8  lfs 1, 24(31)
  03c9fcc  lis 3, 61
  03c9fd0  lfs 2, 488(1)
  03c9fd4  addi 3, 3, -30328
  03c9fd8  fsubs 1, 1, 2
  03c9fdc  lfs 2, 28(3)
  03c9fe0  fabs 1, 1
  03c9fe4  fcmpu 0, 1, 2
  03c9fe8  cror 6, 1, 2
  03c9fec  bt 6, 0x3ca00c
  03c9ff0  lbz 3, 33(31)
  03c9ff4  cmpwi 3, 255
  03c9ff8  bt 2, 0x3ca020
  03c9ffc  li 4, 1
  03ca000  bl 0x104298
  03ca004  nop
  03ca008  b 0x3ca020
  03ca00c  lbz 3, 188(31)
  03ca010  cmpwi 3, 1
  03ca014  bt 2, 0x3ca020
  03ca018  li 3, 5
  03ca01c  stb 3, 32(31)
  03ca020  lis 3, 61
  03ca024  li 4, 0
  03ca028  addi 5, 3, -30328
  03ca02c  ori 3, 27, 0
  03ca030  lfs 1, 72(5)
  03ca034  bl 0xffb70
  03ca038  nop
  03ca03c  bl 0x60780
  03ca040  nop
  03ca044  cmpwi 3, 0
  03ca048  bt 2, 0x3ca05c
  03ca04c  bl 0x60780
  03ca050  nop
  03ca054  cmpwi 3, 8
  03ca058  bf 2, 0x3ca094
  03ca05c  li 3, 16
  03ca060  lbz 4, 83(31)
  03ca064  cmpwi 4, 0
  03ca068  stb 3, 32(31)
  03ca06c  bt 2, 0x3ca094
  03ca070  li 3, 3
  03ca074  bl 0x5e7e18
  03ca078  nop
  03ca07c  ori 6, 3, 0
  03ca080  ori 3, 31, 0
  03ca084  li 4, 0
  03ca088  li 5, 0
  03ca08c  bl 0xfddc0
  03ca090  nop
  03ca094  li 3, 0
  03ca098  stb 3, 188(31)
  03ca09c  b 0x3caf48
  03ca0a0  lfs 1, 480(1)
  03ca0a4  lfs 2, 16(31)
  03ca0a8  lfs 3, 484(1)
  03ca0ac  lfs 4, 20(31)
  03ca0b0  fsubs 1, 1, 2
  03ca0b4  fsubs 2, 3, 4
  03ca0b8  bl 0x5e8338
  03ca0bc  nop
  03ca0c0  lis 3, 61
  03ca0c4  addic 5, 30, 496
  03ca0c8  addi 4, 3, -30328
  03ca0cc  ori 3, 31, 0
  03ca0d0  lfs 31, 64(4)
  03ca0d4  lfs 2, 56(4)
  03ca0d8  lfs 3, 60(4)
  03ca0dc  fmr 4, 31
  03ca0e0  bl 0xff2e8
  03ca0e4  nop
  03ca0e8  lbz 3, 82(31)
  03ca0ec  lbz 4, 83(31)
  03ca0f0  cmpw 3, 4
  03ca0f4  bf 2, 0x3ca234
  03ca0f8  ori 3, 31, 0
  03ca0fc  bl 0xefe40
  03ca100  nop
  03ca104  lis 3, 61
  03ca108  addi 3, 3, -30328
  03ca10c  lfs 2, 104(3)
  03ca110  fcmpu 0, 1, 2
  03ca114  bf 2, 0x3ca234
  03ca118  lfs 1, 24(31)
  03ca11c  lis 3, 61
  03ca120  lfs 2, 488(1)
  03ca124  addi 3, 3, -30328
  03ca128  fsubs 1, 1, 2
  03ca12c  lfs 2, 72(3)
  03ca130  fabs 1, 1
  03ca134  fcmpu 0, 1, 2
  03ca138  cror 6, 1, 2
  03ca13c  bt 6, 0x3ca234
  03ca140  ori 3, 27, 0
  03ca144  addic 4, 1, 480
  03ca148  bl 0x5e8588
  03ca14c  nop
  03ca150  lis 3, 61
  03ca154  addi 3, 3, -30328
  03ca158  lfs 2, 100(3)
  03ca15c  fcmpu 0, 1, 2
  03ca160  cror 6, 1, 2
  03ca164  bt 6, 0x3ca234
  03ca168  lfs 1, 480(1)
  03ca16c  lfs 2, 16(31)
  03ca170  lfs 3, 484(1)
  03ca174  lfs 4, 20(31)
  03ca178  fsubs 1, 1, 2
  03ca17c  fsubs 2, 3, 4
  03ca180  bl 0x5e8338
  03ca184  nop
  03ca188  lfs 2, 72(31)
  03ca18c  bl 0x5026a0
  03ca190  nop
  03ca194  lis 3, 61
  03ca198  addi 3, 3, -30328
  03ca19c  lfs 2, 108(3)
  03ca1a0  fcmpu 0, 1, 2
  03ca1a4  cror 6, 1, 2
  03ca1a8  bt 6, 0x3ca234
  03ca1ac  lfs 1, 72(31)
  03ca1b0  bl 0x5e8078
  03ca1b4  nop
  03ca1b8  fmuls 2, 1, 31
  03ca1bc  lfs 1, 72(31)
  03ca1c0  stfs 2, 304(1)
  03ca1c4  bl 0x5e8128
  03ca1c8  nop
  03ca1cc  fmuls 1, 1, 31
  03ca1d0  li 5, 0
  03ca1d4  addic 3, 1, 320
  03ca1d8  addic 4, 1, 480
  03ca1dc  stw 5, 312(1)
  03ca1e0  stfs 1, 308(1)
  03ca1e4  bl 0x5e7e98
  03ca1e8  nop
  03ca1ec  lis 3, 61
  03ca1f0  lfs 1, 328(1)
  03ca1f4  cmpwi 29, 0
  03ca1f8  addi 3, 3, -30328
  03ca1fc  lfs 2, 112(3)
  03ca200  fadds 1, 1, 2
  03ca204  stfs 1, 328(1)
  03ca208  bt 2, 0x3ca234
  03ca20c  lis 3, 61
  03ca210  li 5, 1
  03ca214  addi 3, 3, -30328
  03ca218  addic 8, 1, 304
  03ca21c  addic 7, 1, 320
  03ca220  ori 4, 31, 0
  03ca224  lfs 1, 88(3)
  03ca228  ori 3, 29, 0
  03ca22c  bl 0x105c08
  03ca230  nop
  03ca234  lbz 3, 112(31)
  03ca238  rlwinm 3, 3, 0, 30, 30
  03ca23c  cmpwi 3, 0
  03ca240  bt 2, 0x3ca298
  03ca244  addic 4, 1, 480
  03ca248  ori 3, 27, 0
  03ca24c  bl 0x5e8588
  03ca250  nop
  03ca254  fcmpu 0, 1, 30
  03ca258  cror 6, 0, 2
  03ca25c  bt 6, 0x3ca298
  03ca260  li 3, 3
  03ca264  lbz 4, 83(31)
  03ca268  cmpwi 4, 2
  03ca26c  stb 3, 32(31)
  03ca270  bt 2, 0x3ca298
  03ca274  li 3, 3
  03ca278  bl 0x5e7e18
  03ca27c  nop
  03ca280  ori 6, 3, 0
  03ca284  ori 3, 31, 0
  03ca288  li 4, 2
  03ca28c  li 5, 0
  03ca290  bl 0xfddc0
  03ca294  nop
  03ca298  lis 3, 61
  03ca29c  li 4, 0
  03ca2a0  addi 29, 3, -30328
  03ca2a4  ori 3, 27, 0
  03ca2a8  lfs 1, 72(29)
  03ca2ac  bl 0xffb70
  03ca2b0  nop
  03ca2b4  lis 3, 114
  03ca2b8  lfs 2, 116(29)
  03ca2bc  lfs 3, 408(30)
  03ca2c0  lfs 4, -3048(3)
  03ca2c4  fnmsubs 2, 4, 2, 3
  03ca2c8  stfs 2, 408(30)
  03ca2cc  lfs 3, 24(31)
  03ca2d0  fadds 2, 3, 2
  03ca2d4  fcmpu 0, 2, 1
  03ca2d8  stfs 2, 24(31)
  03ca2dc  cror 6, 1, 2
  03ca2e0  bt 6, 0x3caf48
  03ca2e4  li 3, 0
  03ca2e8  stw 3, 408(30)
  03ca2ec  stfs 1, 24(31)
  03ca2f0  b 0x3caf48
  03ca2f4  lwz 3, 540(30)
  03ca2f8  cmpwi 3, -1
  03ca2fc  bt 2, 0x3ca32c
  03ca300  lis 4, 165
  03ca304  slwi 3, 3, 2
  03ca308  addic 4, 4, 7136
  03ca30c  extsw 7, 3
  03ca310  addic 5, 30, 464
  03ca314  addic 6, 1, 352
  03ca318  ori 3, 31, 0
  03ca31c  lwzx 4, 4, 7
  03ca320  bl 0x1385d0
  03ca324  nop
  03ca328  b 0x3ca33c
  03ca32c  addic 4, 30, 464
  03ca330  addic 3, 1, 352
  03ca334  bl 0x5e7e98
  03ca338  nop
  03ca33c  lfs 1, 352(1)
  03ca340  lfs 2, 16(31)
  03ca344  lfs 3, 356(1)
  03ca348  lfs 4, 20(31)
  03ca34c  fsubs 1, 1, 2
  03ca350  fsubs 2, 3, 4
  03ca354  bl 0x5e8338
  03ca358  nop
  03ca35c  lis 3, 61
  03ca360  addic 5, 30, 496
  03ca364  addi 29, 3, -30328
  03ca368  ori 3, 31, 0
  03ca36c  lfs 2, 92(29)
  03ca370  lfs 3, 60(29)
  03ca374  lfs 4, 96(29)
  03ca378  bl 0xff2e8
  03ca37c  nop
  03ca380  lfs 1, 72(31)
  03ca384  bl 0x5e8078
  03ca388  nop
  03ca38c  lfs 31, 100(29)
  03ca390  lfs 2, 72(31)
  03ca394  fmuls 3, 1, 31
  03ca398  fmr 1, 2
  03ca39c  stfs 3, 336(1)
  03ca3a0  bl 0x5e8128
  03ca3a4  nop
  03ca3a8  fmuls 1, 1, 31
  03ca3ac  li 5, 0
  03ca3b0  ori 3, 31, 0
  03ca3b4  addic 4, 30, 384
  03ca3b8  addic 6, 1, 352
  03ca3bc  stw 5, 344(1)
  03ca3c0  addic 5, 1, 336
  03ca3c4  stfs 1, 340(1)
  03ca3c8  lfs 1, 88(29)
  03ca3cc  bl 0x101058
  03ca3d0  nop
  03ca3d4  addic 28, 30, 464
  03ca3d8  ori 29, 3, 0
  03ca3dc  ori 4, 28, 0
  03ca3e0  ori 3, 27, 0
  03ca3e4  bl 0x5e8588
  03ca3e8  nop
  03ca3ec  fcmpu 0, 1, 31
  03ca3f0  cror 6, 1, 2
  03ca3f4  bt 6, 0x3ca430
  03ca3f8  li 3, 1
  03ca3fc  lbz 4, 83(31)
  03ca400  cmpwi 4, 4
  03ca404  stb 3, 32(31)
  03ca408  bt 2, 0x3ca430
  03ca40c  li 3, 3
  03ca410  bl 0x5e7e18
  03ca414  nop
  03ca418  ori 6, 3, 0
  03ca41c  ori 3, 31, 0
  03ca420  li 4, 4
  03ca424  li 5, 0
  03ca428  bl 0xfddc0
  03ca42c  nop
  03ca430  addic 26, 1, 368
  03ca434  addic 4, 1, 480
  03ca438  ori 3, 26, 0
  03ca43c  ori 5, 28, 0
  03ca440  bl 0x5e81f0
  03ca444  nop
  03ca448  ori 3, 26, 0
  03ca44c  bl 0x5e8030
  03ca450  nop
  03ca454  lfs 2, 508(30)
  03ca458  fcmpu 0, 1, 2
  03ca45c  cror 6, 1, 2
  03ca460  bt 6, 0x3ca4b8
  03ca464  lbz 3, 33(31)
  03ca468  cmpwi 3, 255
  03ca46c  bt 2, 0x3ca47c
  03ca470  li 4, 1
  03ca474  bl 0x104298
  03ca478  nop
  03ca47c  li 3, 3
  03ca480  lbz 4, 83(31)
  03ca484  cmpwi 4, 2
  03ca488  stb 3, 32(31)
  03ca48c  bt 2, 0x3ca554
  03ca490  li 3, 3
  03ca494  bl 0x5e7e18
  03ca498  nop
  03ca49c  ori 6, 3, 0
  03ca4a0  ori 3, 31, 0
  03ca4a4  li 4, 2
  03ca4a8  li 5, 0
  03ca4ac  bl 0xfddc0
  03ca4b0  nop
  03ca4b4  b 0x3ca554
  03ca4b8  lbz 3, 188(31)
  03ca4bc  cmpwi 3, 1
  03ca4c0  bf 2, 0x3ca500
  03ca4c4  li 3, 3
  03ca4c8  lbz 4, 83(31)
  03ca4cc  cmpwi 4, 2
  03ca4d0  stb 3, 32(31)
  03ca4d4  bt 2, 0x3ca554
  03ca4d8  li 3, 3
  03ca4dc  bl 0x5e7e18
  03ca4e0  nop
  03ca4e4  ori 6, 3, 0
  03ca4e8  ori 3, 31, 0
  03ca4ec  li 4, 2
  03ca4f0  li 5, 0
  03ca4f4  bl 0xfddc0
  03ca4f8  nop
  03ca4fc  b 0x3ca554
  03ca500  rlwinm 3, 29, 0, 30, 30
  03ca504  cmpwi 3, 0
  03ca508  bt 2, 0x3ca554
  03ca50c  lfs 1, 128(1)
  03ca510  lfs 2, 132(1)
  03ca514  li 3, 12
  03ca518  stfs 1, 16(31)
  03ca51c  lbz 4, 83(31)
  03ca520  stfs 2, 20(31)
  03ca524  cmpwi 4, 5
  03ca528  stb 3, 32(31)
  03ca52c  bt 2, 0x3ca554
  03ca530  li 3, 3
  03ca534  bl 0x5e7e18
  03ca538  nop
  03ca53c  ori 6, 3, 0
  03ca540  ori 3, 31, 0
  03ca544  li 4, 5
  03ca548  li 5, 0
  03ca54c  bl 0xfddc0
  03ca550  nop
  03ca554  lis 3, 61
  03ca558  li 4, 0
  03ca55c  addi 5, 3, -30328
  03ca560  ori 3, 27, 0
  03ca564  lfs 1, 72(5)
  03ca568  bl 0xffb70
  03ca56c  nop
  03ca570  bl 0x60780
  03ca574  nop
  03ca578  cmpwi 3, 0
  03ca57c  bt 2, 0x3ca590
  03ca580  bl 0x60780
  03ca584  nop
  03ca588  cmpwi 3, 8
  03ca58c  bf 2, 0x3ca5c8
  03ca590  li 3, 16
  03ca594  lbz 4, 83(31)
  03ca598  cmpwi 4, 0
  03ca59c  stb 3, 32(31)
  03ca5a0  bt 2, 0x3ca5c8
  03ca5a4  li 3, 3
  03ca5a8  bl 0x5e7e18
  03ca5ac  nop
  03ca5b0  ori 6, 3, 0
  03ca5b4  ori 3, 31, 0
  03ca5b8  li 4, 0
  03ca5bc  li 5, 0
  03ca5c0  bl 0xfddc0
  03ca5c4  nop
  03ca5c8  li 3, 0
  03ca5cc  stb 3, 188(31)
  03ca5d0  b 0x3caf48
  03ca5d4  ori 3, 31, 0
  03ca5d8  addic 4, 30, 288
  03ca5dc  bl 0x10b030
  03ca5e0  nop
  03ca5e4  clrlwi 3, 3, 31
  03ca5e8  cmpwi 3, 0
  03ca5ec  bt 2, 0x3ca62c
  03ca5f0  li 3, 3
  03ca5f4  lbz 4, 83(31)
  03ca5f8  cmpwi 4, 2
  03ca5fc  stb 3, 32(31)
  03ca600  bt 2, 0x3caf64
  03ca604  li 3, 3
  03ca608  bl 0x5e7e18
  03ca60c  nop
  03ca610  ori 6, 3, 0
  03ca614  ori 3, 31, 0
  03ca618  li 4, 2
  03ca61c  li 5, 0
  03ca620  bl 0xfddc0
  03ca624  nop
  03ca628  b 0x3caf64
  03ca62c  lwz 4, 24(31)
  03ca630  lis 3, 16544
  03ca634  srawi 5, 4, 31
  03ca638  srwi 6, 5, 1
  03ca63c  xor 4, 6, 4
  03ca640  subc 4, 4, 5
  03ca644  cmpw 4, 3
  03ca648  bf 0, 0x3caf48
  03ca64c  ori 3, 31, 0
  03ca650  li 4, 0
  03ca654  li 5, -1
  03ca658  bl 0xfd8d0
  03ca65c  nop
  03ca660  ori 3, 31, 0
  03ca664  bl 0xefb38
  03ca668  nop
  03ca66c  b 0x3caf64
  03ca670  ori 3, 31, 0
  03ca674  addic 4, 30, 288
  03ca678  bl 0x48c188
  03ca67c  nop
  03ca680  cmpwi 3, 0
  03ca684  bt 2, 0x3caf48
  03ca688  li 4, 14
  03ca68c  li 3, 180
  03ca690  stb 4, 32(31)
  03ca694  bl 0x5e7e18
  03ca698  nop
  03ca69c  stw 3, 552(30)
  03ca6a0  lbz 3, 83(31)
  03ca6a4  cmpwi 3, 0
  03ca6a8  bt 2, 0x3ca6c4
  03ca6ac  ori 3, 31, 0
  03ca6b0  li 4, 0
  03ca6b4  li 5, 0
  03ca6b8  li 6, 0
  03ca6bc  bl 0xfddc0
  03ca6c0  nop
  03ca6c4  li 3, 0
  03ca6c8  sth 3, 200(30)
  03ca6cc  b 0x3caf48
  03ca6d0  li 5, 0
  03ca6d4  lhz 6, 52(31)
  03ca6d8  addic 4, 30, 288
  03ca6dc  ori 3, 31, 0
  03ca6e0  rlwimi 6, 5, 0, 19, 19
  03ca6e4  sth 6, 52(31)
  03ca6e8  bl 0x10b030
  03ca6ec  nop
  03ca6f0  li 4, 320
  03ca6f4  and 3, 3, 4
  03ca6f8  cmpwi 3, 0
  03ca6fc  bt 2, 0x3ca838
  03ca700  addic 3, 1, 384
  03ca704  bl 0x5e7e70
  03ca708  nop
  03ca70c  lis 4, 269
  03ca710  li 3, 1
  03ca714  addic 30, 4, -24728
  03ca718  bl 0x5e7e18
  03ca71c  nop
  03ca720  extsw 3, 3
  03ca724  li 4, 3
  03ca728  std 3, 576(1)
  03ca72c  lis 3, 61
  03ca730  addi 3, 3, -30328
  03ca734  lfs 1, 120(3)
  03ca738  lfd 2, 576(1)
  03ca73c  fcfid 2, 2
  03ca740  ori 3, 30, 0
  03ca744  frsp 2, 2
  03ca748  fmuls 1, 2, 1
  03ca74c  fctiwz 1, 1
  03ca750  stfd 1, 576(1)
  03ca754  lwz 5, 580(1)
  03ca758  extsw 5, 5
  03ca75c  bl 0x3c8938
  03ca760  cmpwi 3, 0
  03ca764  bt 0, 0x3ca78c
  03ca768  lis 4, 61
  03ca76c  ori 3, 31, 0
  03ca770  addi 5, 4, -30328
  03ca774  ori 4, 27, 0
  03ca778  li 6, 4
  03ca77c  lfs 1, 72(5)
  03ca780  lfs 2, 104(5)
  03ca784  bl 0x10fb28
  03ca788  nop
  03ca78c  lis 4, 161
  03ca790  addic 30, 31, 64
  03ca794  fmr 1, 31
  03ca798  addic 29, 4, 23856
  03ca79c  ori 3, 31, 0
  03ca7a0  ori 10, 29, 0
  03ca7a4  li 4, 1747
  03ca7a8  std 29, 112(1)
  03ca7ac  ori 5, 27, 0
  03ca7b0  std 29, 120(1)
  03ca7b4  ori 6, 30, 0
  03ca7b8  li 7, 0
  03ca7bc  li 8, 0
  03ca7c0  bl 0x11a560
  03ca7c4  nop
  03ca7c8  std 29, 112(1)
  03ca7cc  ori 3, 31, 0
  03ca7d0  std 29, 120(1)
  03ca7d4  ori 10, 29, 0
  03ca7d8  li 4, 1748
  03ca7dc  fmr 1, 31
  03ca7e0  ori 5, 27, 0
  03ca7e4  ori 6, 30, 0
  03ca7e8  li 7, 0
  03ca7ec  li 8, 0
  03ca7f0  bl 0x11a560
  03ca7f4  nop
  03ca7f8  ori 3, 31, 0
  03ca7fc  std 29, 112(1)
  03ca800  ori 10, 29, 0
  03ca804  fmr 1, 31
  03ca808  li 4, 1749
  03ca80c  std 29, 120(1)
  03ca810  ori 5, 27, 0
  03ca814  ori 6, 30, 0
  03ca818  li 7, 0
  03ca81c  li 8, 0
  03ca820  bl 0x11a560
  03ca824  nop
  03ca828  ori 3, 31, 0
  03ca82c  bl 0xefb38
  03ca830  nop
  03ca834  b 0x3caf64
  03ca838  lwz 3, 24(31)
  03ca83c  cmpwi 3, 0
  03ca840  bf 0, 0x3caf48
  03ca844  lis 4, 161
  03ca848  fmr 1, 31
  03ca84c  addic 29, 31, 64
  03ca850  addic 30, 4, 23856
  03ca854  ori 3, 31, 0
  03ca858  li 4, 1747
  03ca85c  ori 10, 30, 0
  03ca860  std 30, 112(1)
  03ca864  std 30, 120(1)
  03ca868  ori 5, 27, 0
  03ca86c  ori 6, 29, 0
  03ca870  li 7, 0
  03ca874  li 8, 0
  03ca878  bl 0x11a560
  03ca87c  nop
  03ca880  std 30, 112(1)
  03ca884  ori 3, 31, 0
  03ca888  std 30, 120(1)
  03ca88c  li 4, 1748
  03ca890  fmr 1, 31
  03ca894  ori 10, 30, 0
  03ca898  ori 5, 27, 0
  03ca89c  ori 6, 29, 0
  03ca8a0  li 7, 0
  03ca8a4  li 8, 0
  03ca8a8  bl 0x11a560
  03ca8ac  nop
  03ca8b0  ori 3, 31, 0
  03ca8b4  std 30, 112(1)
  03ca8b8  li 4, 1749
  03ca8bc  ori 10, 30, 0
  03ca8c0  fmr 1, 31
  03ca8c4  ori 5, 27, 0
  03ca8c8  std 30, 120(1)
  03ca8cc  ori 6, 29, 0
  03ca8d0  li 7, 0
  03ca8d4  li 8, 0
  03ca8d8  bl 0x11a560
  03ca8dc  nop
  03ca8e0  ori 3, 31, 0
  03ca8e4  bl 0xefb38
  03ca8e8  nop
  03ca8ec  b 0x3caf64
  03ca8f0  lfs 1, 24(31)
  03ca8f4  ori 3, 27, 0
  03ca8f8  lfs 2, 488(1)
  03ca8fc  addic 4, 1, 480
  03ca900  fsubs 1, 1, 2
  03ca904  fabs 31, 1
  03ca908  bl 0x5e8588
  03ca90c  nop
  03ca910  lwz 3, 540(30)
  03ca914  fdivs 31, 31, 1
  03ca918  cmpwi 3, -1
  03ca91c  bt 2, 0x3ca94c
  03ca920  lis 4, 165
  03ca924  slwi 3, 3, 2
  03ca928  addic 4, 4, 7136
  03ca92c  extsw 7, 3
  03ca930  addic 5, 30, 464
  03ca934  addic 6, 1, 416
  03ca938  ori 3, 31, 0
  03ca93c  lwzx 4, 4, 7
  03ca940  bl 0x1385d0
  03ca944  nop
  03ca948  b 0x3ca95c
  03ca94c  addic 4, 30, 464
  03ca950  addic 3, 1, 416
  03ca954  bl 0x5e7e98
  03ca958  nop
  03ca95c  lfs 1, 416(1)
  03ca960  lfs 2, 16(31)
  03ca964  fmr 29, 30
  03ca968  lfs 3, 420(1)
  03ca96c  lfs 4, 20(31)
  03ca970  fsubs 1, 1, 2
  03ca974  fsubs 2, 3, 4
  03ca978  bl 0x5e8338
  03ca97c  nop
  03ca980  lis 3, 61
  03ca984  addic 5, 30, 496
  03ca988  addi 29, 3, -30328
  03ca98c  ori 3, 31, 0
  03ca990  lfs 2, 56(29)
  03ca994  lfs 3, 60(29)
  03ca998  lfs 4, 64(29)
  03ca99c  bl 0xff2e8
  03ca9a0  nop
  03ca9a4  lfs 1, 72(31)
  03ca9a8  bl 0x5e8078
  03ca9ac  nop
  03ca9b0  lfs 30, 100(29)
  03ca9b4  lfs 2, 72(31)
  03ca9b8  fmuls 3, 1, 30
  03ca9bc  fmr 1, 2
  03ca9c0  stfs 3, 400(1)
  03ca9c4  bl 0x5e8128
  03ca9c8  nop
  03ca9cc  fmuls 1, 1, 30
  03ca9d0  li 4, 0
  03ca9d4  ori 3, 31, 0
  03ca9d8  addic 5, 1, 400
  03ca9dc  addic 6, 1, 416
  03ca9e0  stw 4, 408(1)
  03ca9e4  addic 4, 30, 384
  03ca9e8  stfs 1, 404(1)
  03ca9ec  lfs 30, 88(29)
  03ca9f0  fmr 1, 30
  03ca9f4  bl 0x101058
  03ca9f8  nop
  03ca9fc  addic 28, 1, 480
  03caa00  ori 29, 3, 0
  03caa04  addic 3, 1, 432
  03caa08  ori 4, 28, 0
  03caa0c  addic 5, 30, 464
  03caa10  bl 0x5e81f0
  03caa14  nop
  03caa18  ori 3, 27, 0
  03caa1c  ori 4, 28, 0
  03caa20  bl 0x5e8588
  03caa24  nop
  03caa28  fcmpu 0, 1, 29
  03caa2c  lbz 3, 83(31)
  03caa30  cror 6, 1, 2
  03caa34  bt 6, 0x3caa78
  03caa38  fcmpu 0, 31, 30
  03caa3c  bt 1, 0x3caa78
  03caa40  li 4, 4
  03caa44  cmpwi 3, 3
  03caa48  stb 4, 32(31)
  03caa4c  bt 2, 0x3cabb8
  03caa50  li 3, 3
  03caa54  bl 0x5e7e18
  03caa58  nop
  03caa5c  ori 6, 3, 0
  03caa60  ori 3, 31, 0
  03caa64  li 4, 3
  03caa68  li 5, 0
  03caa6c  bl 0xfddc0
  03caa70  nop
  03caa74  b 0x3cabb8
  03caa78  fcmpu 0, 31, 30
  03caa7c  bt 1, 0x3caac4
  03caa80  rlwinm 4, 29, 0, 30, 30
  03caa84  cmpwi 4, 0
  03caa88  bf 2, 0x3caac4
  03caa8c  li 4, 5
  03caa90  cmpwi 3, 2
  03caa94  stb 4, 32(31)
  03caa98  bt 2, 0x3cabb8
  03caa9c  li 3, 3
  03caaa0  bl 0x5e7e18
  03caaa4  nop
  03caaa8  ori 6, 3, 0
  03caaac  ori 3, 31, 0
  03caab0  li 4, 2
  03caab4  li 5, 0
  03caab8  bl 0xfddc0
  03caabc  nop
  03caac0  b 0x3cabb8
  03caac4  ori 3, 27, 0
  03caac8  addic 4, 1, 480
  03caacc  bl 0x5e8588
  03caad0  nop
  03caad4  lis 3, 61
  03caad8  lfs 2, 508(30)
  03caadc  addi 3, 3, -30328
  03caae0  lfs 3, 24(3)
  03caae4  fadds 2, 2, 3
  03caae8  fcmpu 0, 1, 2
  03caaec  cror 6, 0, 2
  03caaf0  bt 6, 0x3cab30
  03caaf4  li 3, 16
  03caaf8  lbz 4, 83(31)
  03caafc  cmpwi 4, 0
  03cab00  stb 3, 32(31)
  03cab04  bt 2, 0x3cabb8
  03cab08  li 3, 3
  03cab0c  bl 0x5e7e18
  03cab10  nop
  03cab14  ori 6, 3, 0
  03cab18  ori 3, 31, 0
  03cab1c  li 4, 0
  03cab20  li 5, 0
  03cab24  bl 0xfddc0
  03cab28  nop
  03cab2c  b 0x3cabb8
  03cab30  lbz 3, 112(31)
  03cab34  rlwinm 3, 3, 0, 30, 30
  03cab38  cmpwi 3, 0
  03cab3c  bt 2, 0x3cabb8
  03cab40  li 3, 4
  03cab44  bl 0xfc620
  03cab48  nop
  03cab4c  li 3, 4
  03cab50  bl 0xfc620
  03cab54  nop
  03cab58  lis 4, 61
  03cab5c  lis 5, 114
  03cab60  addi 4, 4, -30328
  03cab64  li 6, 0
  03cab68  subc 3, 6, 3
  03cab6c  li 6, 4
  03cab70  lfs 1, 124(4)
  03cab74  cntlzw 3, 3
  03cab78  lfs 2, -3056(5)
  03cab7c  li 4, 5
  03cab80  sldi 3, 3, 58
  03cab84  fmuls 1, 2, 1
  03cab88  sradi 5, 3, 63
  03cab8c  subc 4, 4, 6
  03cab90  ori 3, 31, 0
  03cab94  and 4, 5, 4
  03cab98  li 5, 0
  03cab9c  addc 4, 6, 4
  03caba0  fctiwz 1, 1
  03caba4  stfd 1, 576(1)
  03caba8  lwz 6, 580(1)
  03cabac  extsw 6, 6
  03cabb0  bl 0xfddc0
  03cabb4  nop
  03cabb8  lis 3, 61
  03cabbc  li 4, 0
  03cabc0  addi 5, 3, -30328
  03cabc4  ori 3, 27, 0
  03cabc8  lfs 1, 72(5)
  03cabcc  bl 0xffb70
  03cabd0  nop
  03cabd4  bl 0x60780
  03cabd8  nop
  03cabdc  cmpwi 3, 0
  03cabe0  bt 2, 0x3cabf4
  03cabe4  bl 0x60780
  03cabe8  nop
  03cabec  cmpwi 3, 8
  03cabf0  bf 2, 0x3cac44
  03cabf4  li 3, 16
  03cabf8  lbz 4, 83(31)
  03cabfc  cmpwi 4, 0
  03cac00  stb 3, 32(31)
  03cac04  bt 2, 0x3cac44
  03cac08  lis 3, 61
  03cac0c  lis 4, 114
  03cac10  addi 3, 3, -30328
  03cac14  li 5, 0
  03cac18  lfs 1, 124(3)
  03cac1c  lfs 2, -3056(4)
  03cac20  ori 3, 31, 0
  03cac24  fmuls 1, 2, 1
  03cac28  li 4, 0
  03cac2c  fctiwz 1, 1
  03cac30  stfd 1, 576(1)
  03cac34  lwz 6, 580(1)
  03cac38  extsw 6, 6
  03cac3c  bl 0xfddc0
  03cac40  nop
  03cac44  li 3, 0
  03cac48  stb 3, 188(31)
  03cac4c  b 0x3caf48
  03cac50  lbz 3, 82(31)
  03cac54  cmpwi 3, 2
  03cac58  bt 2, 0x3caca4
  03cac5c  lbz 3, 83(31)
  03cac60  cmpwi 3, 2
  03cac64  bt 2, 0x3caca4
  03cac68  lis 3, 61
  03cac6c  lis 4, 114
  03cac70  addi 3, 3, -30328
  03cac74  li 5, 0
  03cac78  lfs 1, 124(3)
  03cac7c  lfs 2, -3056(4)
  03cac80  ori 3, 31, 0
  03cac84  fmuls 1, 2, 1
  03cac88  li 4, 2
  03cac8c  fctiwz 1, 1
  03cac90  stfd 1, 576(1)
  03cac94  lwz 6, 580(1)
  03cac98  extsw 6, 6
  03cac9c  bl 0xfddc0
  03caca0  nop
  03caca4  lfs 1, 72(31)
  03caca8  bl 0x5e8078
  03cacac  nop
  03cacb0  lis 29, 114
  03cacb4  lfs 2, 516(30)
  03cacb8  lfs 3, -3052(29)
  03cacbc  fmuls 2, 2, 3
  03cacc0  lfs 3, 72(31)
  03cacc4  fmuls 2, 2, 1
  03cacc8  fmr 1, 3
  03caccc  stfs 2, 448(1)
  03cacd0  bl 0x5e8128
  03cacd4  nop
  03cacd8  lfs 2, 516(30)
  03cacdc  li 6, 0
  03cace0  lfs 3, -3052(29)
  03cace4  addic 3, 1, 464
  03cace8  addic 5, 1, 448
  03cacec  fmuls 2, 2, 3
  03cacf0  stw 6, 456(1)
  03cacf4  ori 4, 27, 0
  03cacf8  fmuls 1, 2, 1
  03cacfc  stfs 1, 452(1)
  03cad00  bl 0x5e7f54
  03cad04  nop
  03cad08  lis 3, 164
  03cad0c  lwz 29, -28500(3)
  03cad10  cmpwi 29, 0
  03cad14  bt 2, 0x3cae3c
  03cad18  lis 3, 61
  03cad1c  addi 3, 3, -30328
  03cad20  lfs 29, 100(3)
  03cad24  lfs 28, 128(3)
  03cad28  lfs 27, 132(3)
  03cad2c  cmpw 29, 31
  03cad30  bt 2, 0x3cae30
  03cad34  lbz 3, 32(29)
  03cad38  cmpwi 3, 128
  03cad3c  bf 0, 0x3cae30
  03cad40  lhz 3, 166(29)
  03cad44  cmpwi 3, 0
  03cad48  cmpwi 1, 3, 577
  03cad4c  bt 2, 0x3cad54
  03cad50  bf 6, 0x3cae30
  03cad54  addic 28, 29, 16
  03cad58  addic 3, 1, 464
  03cad5c  ori 4, 28, 0
  03cad60  bl 0x5e8588
  03cad64  nop
  03cad68  fcmpu 0, 1, 29
  03cad6c  cror 6, 1, 2
  03cad70  bt 6, 0x3cae30
  03cad74  lfs 1, 16(29)
  03cad78  lfs 26, 72(31)
  03cad7c  lfs 30, 24(31)
  03cad80  lfs 2, 16(31)
  03cad84  lfs 3, 20(29)
  03cad88  fsubs 1, 1, 2
  03cad8c  lfs 4, 20(31)
  03cad90  fsubs 2, 3, 4
  03cad94  bl 0x5e8338
  03cad98  nop
  03cad9c  fmr 2, 1
  03cada0  fmr 1, 26
  03cada4  bl 0x5025e0
  03cada8  nop
  03cadac  fmr 2, 1
  03cadb0  lfs 1, 72(31)
  03cadb4  fcmpu 0, 2, 31
  03cadb8  cror 6, 0, 2
  03cadbc  bt 6, 0x3cadd0
  03cadc0  lis 3, 114
  03cadc4  fmr 3, 28
  03cadc8  lfs 2, -3052(3)
  03cadcc  b 0x3caddc
  03cadd0  lis 3, 114
  03cadd4  fmr 3, 27
  03cadd8  lfs 2, -3052(3)
  03caddc  fmuls 2, 2, 3
  03cade0  bl 0x502578
  03cade4  nop
  03cade8  addic 26, 1, 464
  03cadec  stfs 1, 72(31)
  03cadf0  ori 4, 27, 0
  03cadf4  ori 3, 26, 0
  03cadf8  ori 5, 28, 0
  03cadfc  bl 0x5e81f0
  03cae00  nop
  03cae04  ori 3, 26, 0
  03cae08  ori 4, 26, 0
  03cae0c  fmr 1, 29
  03cae10  bl 0x5e7f98
  03cae14  nop
  03cae18  ori 3, 26, 0
  03cae1c  ori 4, 26, 0
  03cae20  ori 5, 28, 0
  03cae24  bl 0x5e7f54
  03cae28  nop
  03cae2c  stfs 30, 472(1)
  03cae30  lwz 29, 40(29)
  03cae34  cmpwi 29, 0
  03cae38  bf 2, 0x3cad2c
  03cae3c  lfs 1, 464(1)
  03cae40  lis 3, 61
  03cae44  lfs 2, 468(1)
  03cae48  stfs 1, 16(31)
  03cae4c  li 4, 0
  03cae50  addi 29, 3, -30328
  03cae54  lfs 1, 472(1)
  03cae58  stfs 2, 20(31)
  03cae5c  ori 3, 27, 0
  03cae60  lfs 2, 476(1)
  03cae64  stfs 1, 24(31)
  03cae68  stfs 2, 28(31)
  03cae6c  lfs 1, 72(29)
  03cae70  bl 0xffb70
  03cae74  nop
  03cae78  lis 3, 114
  03cae7c  lfs 2, 116(29)
  03cae80  lfs 3, 408(30)
  03cae84  lfs 4, -3048(3)
  03cae88  fnmsubs 2, 4, 2, 3
  03cae8c  stfs 2, 408(30)
  03cae90  lfs 3, 24(31)
  03cae94  fadds 2, 3, 2
  03cae98  fcmpu 0, 2, 1
  03cae9c  stfs 2, 24(31)
  03caea0  cror 6, 1, 2
  03caea4  bt 6, 0x3caeb4
  03caea8  li 3, 0
  03caeac  stw 3, 408(30)
  03caeb0  stfs 1, 24(31)
  03caeb4  lwz 3, 536(30)
  03caeb8  cmpwi 3, 0
  03caebc  bt 2, 0x3caef0
  03caec0  addic 4, 3, 16
  03caec4  ori 3, 27, 0
  03caec8  bl 0x5e8588
  03caecc  nop
  03caed0  fmr 31, 1
  03caed4  lhz 3, 534(30)
  03caed8  extsh 3, 3
  03caedc  bl 0x502730
  03caee0  nop
  03caee4  fcmpu 0, 31, 1
  03caee8  cror 6, 0, 2
  03caeec  bt 6, 0x3caf40
  03caef0  li 3, 5
  03caef4  lbz 4, 83(31)
  03caef8  cmpwi 4, 2
  03caefc  stb 3, 32(31)
  03caf00  bt 2, 0x3caf40
  03caf04  lis 3, 61
  03caf08  lis 4, 114
  03caf0c  addi 3, 3, -30328
  03caf10  li 5, 0
  03caf14  lfs 1, 124(3)
  03caf18  lfs 2, -3056(4)
  03caf1c  ori 3, 31, 0
  03caf20  li 4, 2
  03caf24  fmuls 1, 2, 1
  03caf28  fctiwz 1, 1
  03caf2c  stfd 1, 576(1)
  03caf30  lwz 6, 580(1)
  03caf34  extsw 6, 6
  03caf38  bl 0xfddc0
  03caf3c  nop
  03caf40  li 3, 0
  03caf44  stb 3, 188(31)
  03caf48  ori 3, 31, 0
  03caf4c  addic 4, 30, 272
  03caf50  bl 0x10c9a0
  03caf54  nop
  03caf58  ori 3, 31, 0
  03caf5c  bl 0x106360
  03caf60  nop
  03caf64  ld 0, 704(1)
  03caf68  mtlr 0
  03caf6c  lfd 26, 640(1)
  03caf70  lfd 27, 648(1)
  03caf74  lfd 28, 656(1)
  03caf78  lfd 29, 664(1)
  03caf7c  lfd 30, 672(1)
  03caf80  lfd 31, 680(1)
  03caf84  ld 26, 592(1)
  03caf88  ld 27, 600(1)
  03caf8c  ld 28, 608(1)
  03caf90  ld 29, 616(1)
  03caf94  ld 30, 624(1)
  03caf98  ld 31, 632(1)
  03caf9c  addi 1, 1, 688
  03cafa0  blr
