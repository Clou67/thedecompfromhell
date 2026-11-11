# game/update/moby42.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1340_003a8068:   # 0x3a8068, 0xe0 bytes
  03a8068  stdu 1, -160(1)
  03a806c  mflr 0
  03a8070  std 0, 176(1)
  03a8074  stfd 30, 144(1)
  03a8078  stfd 31, 152(1)
  03a807c  std 31, 136(1)
  03a8080  std 30, 128(1)
  03a8084  ori 31, 3, 0
  03a8088  std 29, 120(1)
  03a808c  lwz 30, 120(31)
  03a8090  bl 0x10af88
  03a8094  nop
  03a8098  cmpwi 3, 0
  03a809c  bf 2, 0x3a80a8
  03a80a0  li 3, 0
  03a80a4  b 0x3a8124
  03a80a8  ori 3, 31, 0
  03a80ac  lwz 31, 160(30)
  03a80b0  li 29, 0
  03a80b4  cmpwi 31, 0
  03a80b8  bt 2, 0x3a8120
  03a80bc  lis 4, 59
  03a80c0  addi 4, 4, -32672
  03a80c4  lfs 30, 0(4)
  03a80c8  lfs 31, 4(4)
  03a80cc  lfs 2, 24(31)
  03a80d0  lfs 3, 24(3)
  03a80d4  lfs 1, 176(30)
  03a80d8  fsubs 2, 2, 3
  03a80dc  fmuls 3, 1, 30
  03a80e0  fcmpu 0, 2, 3
  03a80e4  bt 0, 0x3a8120
  03a80e8  fadds 1, 1, 31
  03a80ec  fcmpu 0, 2, 1
  03a80f0  bt 1, 0x3a8120
  03a80f4  bl 0x10af88
  03a80f8  nop
  03a80fc  cmpwi 3, 0
  03a8100  bt 2, 0x3a8120
  03a8104  ori 3, 31, 0
  03a8108  addic 29, 29, 1
  03a810c  extsw 29, 29
  03a8110  lwz 4, 120(3)
  03a8114  lwz 31, 160(4)
  03a8118  cmpwi 31, 0
  03a811c  bf 2, 0x3a80cc
  03a8120  ori 3, 29, 0
  03a8124  ld 0, 176(1)
  03a8128  mtlr 0
  03a812c  lfd 30, 144(1)
  03a8130  lfd 31, 152(1)
  03a8134  ld 29, 120(1)
  03a8138  ld 30, 128(1)
  03a813c  ld 31, 136(1)
  03a8140  addi 1, 1, 160
  03a8144  blr

M1340_003a8148:   # 0x3a8148, 0x14 bytes
  03a8148  lis 3, 132
  03a814c  lis 4, 1
  03a8150  addic 3, 3, 13764
  03a8154  stw 4, 72(3)
  03a8158  blr

M1340_003a8168:   # 0x3a8168, 0xe4 bytes
  03a8168  stdu 1, -192(1)
  03a816c  mflr 0
  03a8170  std 0, 208(1)
  03a8174  std 30, 176(1)
  03a8178  std 31, 184(1)
  03a817c  lwz 30, 120(3)
  03a8180  ori 31, 4, 0
  03a8184  lwz 4, 304(30)
  03a8188  cmpwi 4, 0
  03a818c  bf 2, 0x3a819c
  03a8190  lwz 4, 308(30)
  03a8194  cmpwi 4, 0
  03a8198  bt 2, 0x3a8234
  03a819c  addic 5, 1, 112
  03a81a0  addic 4, 3, 64
  03a81a4  ori 3, 5, 0
  03a81a8  bl 0x500ca4
  03a81ac  nop
  03a81b0  lis 3, 59
  03a81b4  lfs 1, 120(1)
  03a81b8  lfs 2, 112(1)
  03a81bc  addi 3, 3, -32416
  03a81c0  fmuls 5, 2, 1
  03a81c4  lfs 3, 0(3)
  03a81c8  lfs 4, 116(1)
  03a81cc  fsubs 3, 1, 3
  03a81d0  fmuls 6, 4, 2
  03a81d4  lfs 7, 304(30)
  03a81d8  lfs 8, 0(31)
  03a81dc  lfs 10, 4(31)
  03a81e0  lfs 11, 8(31)
  03a81e4  fmuls 9, 3, 4
  03a81e8  fmsubs 6, 2, 4, 6
  03a81ec  fmsubs 3, 3, 2, 5
  03a81f0  fmsubs 9, 4, 1, 9
  03a81f4  fmuls 5, 6, 4
  03a81f8  fmuls 12, 3, 2
  03a81fc  fmadds 10, 3, 7, 10
  03a8200  fmadds 11, 6, 7, 11
  03a8204  fmadds 7, 9, 7, 8
  03a8208  fmsubs 3, 3, 1, 5
  03a820c  fmuls 1, 9, 1
  03a8210  fmsubs 4, 9, 4, 12
  03a8214  lfs 5, 308(30)
  03a8218  fmadds 3, 3, 5, 7
  03a821c  fmsubs 1, 6, 2, 1
  03a8220  fmadds 2, 4, 5, 11
  03a8224  fmadds 1, 1, 5, 10
  03a8228  stfs 2, 8(31)
  03a822c  stfs 3, 0(31)
  03a8230  stfs 1, 4(31)
  03a8234  ld 0, 208(1)
  03a8238  mtlr 0
  03a823c  ld 30, 176(1)
  03a8240  ld 31, 184(1)
  03a8244  addi 1, 1, 192
  03a8248  blr

UpdateMoby_42:   # 0x3a82b8, 0x17ec bytes
  03a82b8  stdu 1, -576(1)
  03a82bc  mflr 0
  03a82c0  std 0, 592(1)
  03a82c4  stfd 20, 480(1)
  03a82c8  stfd 21, 488(1)
  03a82cc  stfd 22, 496(1)
  03a82d0  stfd 23, 504(1)
  03a82d4  stfd 24, 512(1)
  03a82d8  stfd 25, 520(1)
  03a82dc  stfd 26, 528(1)
  03a82e0  stfd 27, 536(1)
  03a82e4  stfd 28, 544(1)
  03a82e8  stfd 29, 552(1)
  03a82ec  stfd 30, 560(1)
  03a82f0  stfd 31, 568(1)
  03a82f4  std 29, 456(1)
  03a82f8  addi 0, 1, 384
  03a82fc  stvx 31, 0, 0
  03a8300  lhz 4, 166(3)
  03a8304  std 30, 464(1)
  03a8308  li 29, 0
  03a830c  lwz 30, 120(3)
  03a8310  std 31, 472(1)
  03a8314  cmpwi 4, 822
  03a8318  std 22, 400(1)
  03a831c  ori 31, 3, 0
  03a8320  std 28, 448(1)
  03a8324  std 27, 440(1)
  03a8328  std 26, 432(1)
  03a832c  std 25, 424(1)
  03a8330  std 24, 416(1)
  03a8334  std 23, 408(1)
  03a8338  ori 22, 29, 0
  03a833c  bt 2, 0x3a8368
  03a8340  lhz 3, 50(31)
  03a8344  extsh 3, 3
  03a8348  bl 0x502730
  03a834c  nop
  03a8350  ori 3, 31, 0
  03a8354  bl 0x1129d0
  03a8358  nop
  03a835c  cmpwi 3, -1
  03a8360  bf 2, 0x3a8368
  03a8364  li 29, 1
  03a8368  cmpwi 30, 0
  03a836c  bt 2, 0x3a9a34
  03a8370  lis 3, 269
  03a8374  lwz 3, -28052(3)
  03a8378  cmpwi 3, 0
  03a837c  bf 2, 0x3a9a34
  03a8380  lbz 27, 33(31)
  03a8384  cmpwi 27, 255
  03a8388  bt 2, 0x3a84a4
  03a838c  lbz 3, 32(31)
  03a8390  cmpwi 1, 3, 3
  03a8394  cmpwi 3, 0
  03a8398  cror 2, 2, 6
  03a839c  bt 2, 0x3a84a4
  03a83a0  addic 28, 1, 352
  03a83a4  ori 4, 27, 0
  03a83a8  ori 3, 28, 0
  03a83ac  li 5, 0
  03a83b0  li 6, 0
  03a83b4  bl 0x104800
  03a83b8  nop
  03a83bc  lwz 27, 352(1)
  03a83c0  cmpw 27, 31
  03a83c4  bf 2, 0x3a84a4
  03a83c8  cmpwi 27, 0
  03a83cc  bt 2, 0x3a8418
  03a83d0  lhz 3, 50(27)
  03a83d4  extsh 3, 3
  03a83d8  bl 0x502730
  03a83dc  nop
  03a83e0  ori 3, 27, 0
  03a83e4  bl 0x1129d0
  03a83e8  nop
  03a83ec  cmpwi 3, -1
  03a83f0  bf 2, 0x3a84a4
  03a83f4  lwz 4, 352(1)
  03a83f8  ori 3, 28, 0
  03a83fc  li 5, 0
  03a8400  li 6, 0
  03a8404  bl 0x10466c
  03a8408  nop
  03a840c  lwz 27, 352(1)
  03a8410  cmpwi 27, 0
  03a8414  bf 2, 0x3a83d0
  03a8418  ori 3, 28, 0
  03a841c  lbz 4, 33(31)
  03a8420  li 5, 0
  03a8424  li 6, 0
  03a8428  bl 0x104800
  03a842c  nop
  03a8430  lwz 3, 352(1)
  03a8434  cmpwi 3, 0
  03a8438  bt 2, 0x3a84a4
  03a843c  lis 4, 59
  03a8440  addi 4, 4, -32180
  03a8444  <unknown>
  03a8448  vspltw 31, 31, 0
  03a844c  vspltisw 2, -1
  03a8450  li 4, 3
  03a8454  lis 5, 114
  03a8458  li 6, -3056
  03a845c  vslw 2, 2, 2
  03a8460  stb 4, 32(3)
  03a8464  li 4, 284
  03a8468  <unknown>
  03a846c  lwz 7, 120(3)
  03a8470  vmaddfp 2, 3, 31, 2
  03a8474  ori 3, 28, 0
  03a8478  li 5, 0
  03a847c  li 6, 0
  03a8480  vctsxs 2, 2, 0
  03a8484  vsplth 2, 2, 1
  03a8488  stvehx 2, 4, 7
  03a848c  lwz 4, 352(1)
  03a8490  bl 0x10466c
  03a8494  nop
  03a8498  lwz 3, 352(1)
  03a849c  cmpwi 3, 0
  03a84a0  bf 2, 0x3a844c
  03a84a4  lhz 3, 166(31)
  03a84a8  cmpwi 1, 3, 1130
  03a84ac  cmpwi 3, 51
  03a84b0  cror 2, 2, 6
  03a84b4  bt 2, 0x3a84c8
  03a84b8  cmpwi 3, 1139
  03a84bc  bt 2, 0x3a84c8
  03a84c0  cmpwi 3, 1140
  03a84c4  bf 2, 0x3a8534
  03a84c8  lis 3, 161
  03a84cc  srawi 4, 31, 8
  03a84d0  lwz 3, 1808(3)
  03a84d4  xor 3, 3, 4
  03a84d8  clrlwi 3, 3, 29
  03a84dc  cmpwi 3, 0
  03a84e0  bf 2, 0x3a8534
  03a84e4  lhz 3, 314(30)
  03a84e8  extsh 3, 3
  03a84ec  cmpwi 3, 0
  03a84f0  bt 1, 0x3a8534
  03a84f4  lbz 3, 32(31)
  03a84f8  cmpwi 3, 0
  03a84fc  bt 2, 0x3a8534
  03a8500  ori 3, 31, 0
  03a8504  lhz 4, 286(30)
  03a8508  extsh 4, 4
  03a850c  bl 0x15cc7c
  03a8510  nop
  03a8514  cmpwi 3, 0
  03a8518  bf 2, 0x3a8534
  03a851c  li 3, 0
  03a8520  li 4, 4
  03a8524  ori 5, 31, 0
  03a8528  bl 0x15d12c
  03a852c  nop
  03a8530  sth 3, 286(30)
  03a8534  lhz 3, 166(31)
  03a8538  extsh 3, 3
  03a853c  cmpwi 3, 74
  03a8540  cmpwi 1, 3, 68
  03a8544  cmpwi 6, 3, 64
  03a8548  cmpwi 7, 3, 60
  03a854c  bt 2, 0x3a8564
  03a8550  bt 6, 0x3a86b0
  03a8554  bt 26, 0x3a86b0
  03a8558  bt 30, 0x3a8564
  03a855c  cmpwi 3, 51
  03a8560  bf 2, 0x3a87d8
  03a8564  lhz 3, 312(30)
  03a8568  extsh 3, 3
  03a856c  cmpwi 3, -1
  03a8570  bf 2, 0x3a85d4
  03a8574  lhz 3, 316(30)
  03a8578  lhz 4, 318(30)
  03a857c  extsh 3, 3
  03a8580  extsh 4, 4
  03a8584  addc 4, 3, 4
  03a8588  bl 0xfe484
  03a858c  nop
  03a8590  extsw 3, 3
  03a8594  lis 4, 59
  03a8598  std 3, 360(1)
  03a859c  addi 3, 4, -32180
  03a85a0  lis 4, 114
  03a85a4  lfs 1, 4(3)
  03a85a8  lfs 2, -3056(4)
  03a85ac  lfd 3, 360(1)
  03a85b0  fcfid 3, 3
  03a85b4  frsp 3, 3
  03a85b8  fadds 1, 3, 1
  03a85bc  fmuls 1, 2, 1
  03a85c0  fctiwz 1, 1
  03a85c4  stfd 1, 360(1)
  03a85c8  lwz 3, 364(1)
  03a85cc  sth 3, 312(30)
  03a85d0  b 0x3a87d8
  03a85d4  addic 3, 30, 312
  03a85d8  bl 0x4fffb4
  03a85dc  nop
  03a85e0  cmpwi 3, 0
  03a85e4  bt 2, 0x3a87d8
  03a85e8  lis 3, 149
  03a85ec  lfs 1, 20(31)
  03a85f0  addic 3, 3, 5056
  03a85f4  lfs 2, 324(3)
  03a85f8  lfs 3, 16(31)
  03a85fc  fsubs 1, 1, 2
  03a8600  lfs 2, 320(3)
  03a8604  fsubs 2, 3, 2
  03a8608  lfs 3, 24(31)
  03a860c  lfs 4, 328(3)
  03a8610  fsubs 3, 3, 4
  03a8614  fmuls 1, 1, 1
  03a8618  lis 3, 59
  03a861c  addi 3, 3, -32180
  03a8620  fmadds 1, 2, 2, 1
  03a8624  lfs 2, 8(3)
  03a8628  fmadds 1, 3, 3, 1
  03a862c  fsqrts 1, 1
  03a8630  fcmpu 0, 1, 2
  03a8634  cror 6, 1, 2
  03a8638  bt 6, 0x3a8650
  03a863c  li 3, 1
  03a8640  li 4, 0
  03a8644  ori 5, 31, 0
  03a8648  bl 0x15d12c
  03a864c  nop
  03a8650  lhz 3, 316(30)
  03a8654  lhz 4, 318(30)
  03a8658  extsh 3, 3
  03a865c  extsh 4, 4
  03a8660  addc 4, 3, 4
  03a8664  bl 0xfe484
  03a8668  nop
  03a866c  extsw 3, 3
  03a8670  lis 4, 114
  03a8674  std 3, 360(1)
  03a8678  lis 3, 59
  03a867c  addi 3, 3, -32180
  03a8680  lfs 1, 4(3)
  03a8684  lfs 2, -3056(4)
  03a8688  lfd 3, 360(1)
  03a868c  fcfid 3, 3
  03a8690  frsp 3, 3
  03a8694  fadds 1, 3, 1
  03a8698  fmuls 1, 2, 1
  03a869c  fctiwz 1, 1
  03a86a0  stfd 1, 360(1)
  03a86a4  lwz 3, 364(1)
  03a86a8  sth 3, 312(30)
  03a86ac  b 0x3a87d8
  03a86b0  lhz 3, 312(30)
  03a86b4  extsh 3, 3
  03a86b8  cmpwi 3, -1
  03a86bc  bf 2, 0x3a8720
  03a86c0  lhz 3, 316(30)
  03a86c4  lhz 4, 318(30)
  03a86c8  extsh 3, 3
  03a86cc  extsh 4, 4
  03a86d0  addc 4, 3, 4
  03a86d4  bl 0xfe484
  03a86d8  nop
  03a86dc  extsw 3, 3
  03a86e0  lis 4, 114
  03a86e4  std 3, 360(1)
  03a86e8  lis 3, 59
  03a86ec  addi 3, 3, -32180
  03a86f0  lfs 1, 4(3)
  03a86f4  lfs 2, -3056(4)
  03a86f8  lfd 3, 360(1)
  03a86fc  fcfid 3, 3
  03a8700  frsp 3, 3
  03a8704  fadds 1, 3, 1
  03a8708  fmuls 1, 2, 1
  03a870c  fctiwz 1, 1
  03a8710  stfd 1, 360(1)
  03a8714  lwz 3, 364(1)
  03a8718  sth 3, 312(30)
  03a871c  b 0x3a87d8
  03a8720  addic 3, 30, 312
  03a8724  bl 0x4fffb4
  03a8728  nop
  03a872c  cmpwi 3, 0
  03a8730  bt 2, 0x3a87d8
  03a8734  li 3, 100
  03a8738  bl 0xfc620
  03a873c  nop
  03a8740  clrlwi 3, 3, 31
  03a8744  li 4, 0
  03a8748  li 6, 2
  03a874c  subc 3, 4, 3
  03a8750  li 7, 1
  03a8754  cntlzw 3, 3
  03a8758  subc 6, 6, 7
  03a875c  sldi 3, 3, 58
  03a8760  li 4, 0
  03a8764  sradi 3, 3, 63
  03a8768  ori 5, 31, 0
  03a876c  and 3, 3, 6
  03a8770  addc 3, 7, 3
  03a8774  bl 0x15d12c
  03a8778  nop
  03a877c  lhz 3, 316(30)
  03a8780  lhz 4, 318(30)
  03a8784  extsh 3, 3
  03a8788  extsh 4, 4
  03a878c  addc 4, 3, 4
  03a8790  bl 0xfe484
  03a8794  nop
  03a8798  extsw 3, 3
  03a879c  lis 4, 59
  03a87a0  std 3, 360(1)
  03a87a4  addi 3, 4, -32180
  03a87a8  lis 4, 114
  03a87ac  lfs 1, 4(3)
  03a87b0  lfs 2, -3056(4)
  03a87b4  lfd 3, 360(1)
  03a87b8  fcfid 3, 3
  03a87bc  frsp 3, 3
  03a87c0  fadds 1, 3, 1
  03a87c4  fmuls 1, 2, 1
  03a87c8  fctiwz 1, 1
  03a87cc  stfd 1, 360(1)
  03a87d0  lwz 3, 364(1)
  03a87d4  sth 3, 312(30)
  03a87d8  lbz 3, 32(31)
  03a87dc  addic 28, 30, 96
  03a87e0  cmpwi 3, 1
  03a87e4  cmpwi 1, 3, -1
  03a87e8  cmpwi 6, 3, 0
  03a87ec  cmpwi 7, 3, 2
  03a87f0  bt 1, 0x3a8800
  03a87f4  bf 5, 0x3a9a34
  03a87f8  bf 25, 0x3a8810
  03a87fc  b 0x3a8f20
  03a8800  bf 29, 0x3a8e94
  03a8804  cmpwi 3, 3
  03a8808  bf 1, 0x3a8efc
  03a880c  b 0x3a9a34
  03a8810  lwz 3, 116(30)
  03a8814  cmpwi 3, -1
  03a8818  bt 2, 0x3a8898
  03a881c  lis 4, 165
  03a8820  slwi 3, 3, 2
  03a8824  addic 4, 4, 7136
  03a8828  extsw 3, 3
  03a882c  lwzx 3, 4, 3
  03a8830  lwz 4, 0(3)
  03a8834  lfs 1, 20(3)
  03a8838  slwi 5, 4, 4
  03a883c  lfs 2, 16(3)
  03a8840  lfs 3, 24(3)
  03a8844  addc 5, 3, 5
  03a8848  clrldi 5, 5, 32
  03a884c  lfs 4, 4(5)
  03a8850  lfs 5, 0(5)
  03a8854  fsubs 1, 1, 4
  03a8858  fsubs 2, 2, 5
  03a885c  lfs 4, 8(5)
  03a8860  fsubs 3, 3, 4
  03a8864  lis 5, 59
  03a8868  addi 5, 5, -32180
  03a886c  fmuls 1, 1, 1
  03a8870  fmadds 1, 2, 2, 1
  03a8874  lfs 2, 4(5)
  03a8878  fmadds 1, 3, 3, 1
  03a887c  fsqrts 1, 1
  03a8880  fcmpu 0, 1, 2
  03a8884  cror 6, 1, 2
  03a8888  bt 6, 0x3a88ec
  03a888c  addic 4, 4, -1
  03a8890  stw 4, 0(3)
  03a8894  b 0x3a88ec
  03a8898  lis 3, 164
  03a889c  lwz 3, -28512(3)
  03a88a0  subc 3, 31, 3
  03a88a4  srawi 3, 3, 8
  03a88a8  addze 3, 3
  03a88ac  extsw 3, 3
  03a88b0  std 3, 360(1)
  03a88b4  lhz 4, 166(31)
  03a88b8  lfd 1, 360(1)
  03a88bc  lis 3, 101
  03a88c0  extsh 27, 4
  03a88c4  fcfid 1, 1
  03a88c8  addic 29, 3, 27088
  03a88cc  frsp 1, 1
  03a88d0  bl 0x502758
  03a88d4  nop
  03a88d8  ori 5, 3, 0
  03a88dc  ori 3, 29, 0
  03a88e0  ori 4, 27, 0
  03a88e4  bl 0x5cd098
  03a88e8  nop
  03a88ec  li 3, 255
  03a88f0  li 4, -1
  03a88f4  lis 5, 17402
  03a88f8  stb 3, 48(31)
  03a88fc  lwz 3, 304(30)
  03a8900  sth 4, 286(30)
  03a8904  srawi 4, 3, 31
  03a8908  srwi 6, 4, 1
  03a890c  xor 3, 6, 3
  03a8910  subc 3, 3, 4
  03a8914  cmpw 3, 5
  03a8918  bf 1, 0x3a8948
  03a891c  lis 3, 59
  03a8920  addi 29, 3, -32180
  03a8924  lfs 1, 12(29)
  03a8928  lfs 2, 16(29)
  03a892c  bl 0xfcbe8
  03a8930  nop
  03a8934  lfs 2, 304(30)
  03a8938  fmuls 1, 1, 2
  03a893c  lfs 2, 20(29)
  03a8940  fmuls 1, 1, 2
  03a8944  stfs 1, 304(30)
  03a8948  lwz 4, 308(30)
  03a894c  lis 3, 17402
  03a8950  srawi 5, 4, 31
  03a8954  srwi 6, 5, 1
  03a8958  xor 4, 6, 4
  03a895c  subc 4, 4, 5
  03a8960  cmpw 4, 3
  03a8964  bf 1, 0x3a8994
  03a8968  lis 3, 59
  03a896c  addi 29, 3, -32180
  03a8970  lfs 1, 12(29)
  03a8974  lfs 2, 16(29)
  03a8978  bl 0xfcbe8
  03a897c  nop
  03a8980  lfs 2, 308(30)
  03a8984  fmuls 1, 1, 2
  03a8988  lfs 2, 20(29)
  03a898c  fmuls 1, 1, 2
  03a8990  stfs 1, 308(30)
  03a8994  lwz 3, 116(30)
  03a8998  cmpwi 3, -1
  03a899c  bf 2, 0x3a89ac
  03a89a0  li 3, 2
  03a89a4  stb 3, 32(31)
  03a89a8  b 0x3a9a34
  03a89ac  lis 3, 164
  03a89b0  lis 4, -28087
  03a89b4  ori 4, 4, 9363
  03a89b8  lwz 3, -28512(3)
  03a89bc  subc 3, 31, 3
  03a89c0  srawi 3, 3, 8
  03a89c4  addze 3, 3
  03a89c8  srawi 3, 3, 1
  03a89cc  addze 5, 3
  03a89d0  mulhw 3, 4, 5
  03a89d4  addc 3, 3, 5
  03a89d8  srawi 3, 3, 2
  03a89dc  srwi 4, 3, 31
  03a89e0  addc 4, 3, 4
  03a89e4  ori 3, 28, 0
  03a89e8  sldi 6, 4, 3
  03a89ec  subc 4, 6, 4
  03a89f0  subc 4, 5, 4
  03a89f4  stb 4, 289(30)
  03a89f8  bl 0x136724
  03a89fc  nop
  03a8a00  lbz 3, 101(30)
  03a8a04  cmpwi 3, 0
  03a8a08  bf 2, 0x3a8af8
  03a8a0c  lwz 4, 96(30)
  03a8a10  cmpwi 4, 0
  03a8a14  bt 1, 0x3a8a70
  03a8a18  lis 4, 59
  03a8a1c  addic 3, 31, 16
  03a8a20  addi 4, 4, -32180
  03a8a24  lfs 1, 24(4)
  03a8a28  lwz 5, 112(30)
  03a8a2c  ori 4, 5, 0
  03a8a30  bl 0x1367d0
  03a8a34  nop
  03a8a38  lbz 4, 100(30)
  03a8a3c  stw 3, 96(30)
  03a8a40  extsb 5, 4
  03a8a44  ori 4, 3, 0
  03a8a48  cmpwi 5, 0
  03a8a4c  ori 3, 22, 0
  03a8a50  bt 0, 0x3a8a60
  03a8a54  lwz 3, 112(30)
  03a8a58  lwz 3, 0(3)
  03a8a5c  addic 3, 3, -1
  03a8a60  cmpw 4, 3
  03a8a64  bf 2, 0x3a8a70
  03a8a68  ori 4, 22, 0
  03a8a6c  stw 22, 96(30)
  03a8a70  slwi 3, 4, 4
  03a8a74  lwz 5, 112(30)
  03a8a78  lfs 1, 20(31)
  03a8a7c  addc 3, 5, 3
  03a8a80  lfs 2, 16(31)
  03a8a84  clrldi 3, 3, 32
  03a8a88  lfs 3, 24(31)
  03a8a8c  lfs 4, 20(3)
  03a8a90  lfs 5, 16(3)
  03a8a94  fsubs 1, 1, 4
  03a8a98  fsubs 2, 2, 5
  03a8a9c  lfs 4, 24(3)
  03a8aa0  fsubs 3, 3, 4
  03a8aa4  sldi 3, 4, 4
  03a8aa8  addc 3, 5, 3
  03a8aac  fmuls 1, 1, 1
  03a8ab0  clrldi 3, 3, 32
  03a8ab4  fmadds 1, 2, 2, 1
  03a8ab8  fmadds 1, 3, 3, 1
  03a8abc  fsqrts 1, 1
  03a8ac0  stfs 1, 108(30)
  03a8ac4  lfs 1, 16(3)
  03a8ac8  lfs 2, 16(31)
  03a8acc  lfs 3, 20(3)
  03a8ad0  fsubs 1, 1, 2
  03a8ad4  lfs 4, 20(31)
  03a8ad8  fsubs 2, 3, 4
  03a8adc  bl 0x5e8338
  03a8ae0  nop
  03a8ae4  li 3, 2
  03a8ae8  stfs 1, 120(30)
  03a8aec  stw 22, 104(30)
  03a8af0  stw 22, 124(30)
  03a8af4  stb 3, 101(30)
  03a8af8  lwz 4, 96(30)
  03a8afc  lis 3, 59
  03a8b00  lwz 5, 112(30)
  03a8b04  li 7, 0
  03a8b08  slwi 4, 4, 4
  03a8b0c  addi 29, 3, -32180
  03a8b10  addc 4, 5, 4
  03a8b14  lis 5, 16256
  03a8b18  clrldi 4, 4, 32
  03a8b1c  addic 3, 30, 160
  03a8b20  lfs 1, 16(4)
  03a8b24  stfs 1, 224(30)
  03a8b28  lfs 1, 20(4)
  03a8b2c  stfs 1, 228(30)
  03a8b30  lfs 1, 24(4)
  03a8b34  stfs 1, 232(30)
  03a8b38  lfs 1, 28(4)
  03a8b3c  lfs 2, 244(30)
  03a8b40  stfs 1, 236(30)
  03a8b44  ori 4, 28, 0
  03a8b48  lfs 31, 16(29)
  03a8b4c  fmr 1, 2
  03a8b50  stw 5, 240(30)
  03a8b54  lfs 3, 248(30)
  03a8b58  fmr 2, 3
  03a8b5c  bl 0x139fc0
  03a8b60  nop
  03a8b64  lwz 3, 96(30)
  03a8b68  lwz 4, 112(30)
  03a8b6c  slwi 3, 3, 4
  03a8b70  addc 3, 4, 3
  03a8b74  clrldi 3, 3, 32
  03a8b78  lfs 1, 16(3)
  03a8b7c  stfs 1, 192(30)
  03a8b80  lfs 2, 20(3)
  03a8b84  stfs 2, 196(30)
  03a8b88  lfs 3, 24(3)
  03a8b8c  stfs 3, 200(30)
  03a8b90  lfs 4, 28(3)
  03a8b94  stfs 1, 176(30)
  03a8b98  stfs 4, 204(30)
  03a8b9c  stfs 2, 180(30)
  03a8ba0  stfs 3, 184(30)
  03a8ba4  stfs 4, 188(30)
  03a8ba8  lfs 30, 24(29)
  03a8bac  stw 22, 64(31)
  03a8bb0  lfs 1, 164(30)
  03a8bb4  lfs 3, 160(30)
  03a8bb8  fmuls 1, 1, 1
  03a8bbc  lfs 2, 168(30)
  03a8bc0  fmadds 1, 3, 3, 1
  03a8bc4  fsqrts 1, 1
  03a8bc8  bl 0x5e8338
  03a8bcc  nop
  03a8bd0  fneg 1, 1
  03a8bd4  stfs 1, 68(31)
  03a8bd8  lfs 1, 160(30)
  03a8bdc  lfs 2, 164(30)
  03a8be0  bl 0x5e8338
  03a8be4  nop
  03a8be8  stfs 1, 72(31)
  03a8bec  ori 3, 31, 0
  03a8bf0  stw 22, 260(30)
  03a8bf4  addic 4, 31, 16
  03a8bf8  lfs 1, 224(30)
  03a8bfc  stw 22, 268(30)
  03a8c00  stfs 1, 16(31)
  03a8c04  lfs 1, 228(30)
  03a8c08  stfs 1, 20(31)
  03a8c0c  lfs 1, 232(30)
  03a8c10  stfs 1, 24(31)
  03a8c14  lfs 1, 236(30)
  03a8c18  stfs 1, 28(31)
  03a8c1c  bl 0x3a8168
  03a8c20  lwz 3, 300(30)
  03a8c24  lis 6, 16585
  03a8c28  lfs 1, 300(30)
  03a8c2c  srawi 4, 3, 31
  03a8c30  li 5, 7
  03a8c34  srwi 7, 4, 1
  03a8c38  ori 6, 6, 4059
  03a8c3c  xor 7, 7, 3
  03a8c40  stb 5, 289(30)
  03a8c44  subc 4, 7, 4
  03a8c48  cmpw 4, 6
  03a8c4c  bf 1, 0x3a8c68
  03a8c50  lis 3, 59
  03a8c54  addi 3, 3, -32180
  03a8c58  lfs 2, 28(3)
  03a8c5c  fmuls 1, 1, 2
  03a8c60  stfs 1, 300(30)
  03a8c64  b 0x3a8c8c
  03a8c68  lwz 4, 292(30)
  03a8c6c  cmpwi 4, 0
  03a8c70  bt 2, 0x3a8c8c
  03a8c74  lis 4, -16512
  03a8c78  cmpw 3, 4
  03a8c7c  bf 2, 0x3a8c8c
  03a8c80  bl 0xfcc68
  03a8c84  nop
  03a8c88  stfs 1, 300(30)
  03a8c8c  lfs 1, 192(30)
  03a8c90  ori 3, 28, 0
  03a8c94  lfs 2, 196(30)
  03a8c98  ori 7, 31, 0
  03a8c9c  stfs 1, 208(30)
  03a8ca0  lfs 1, 200(30)
  03a8ca4  stfs 2, 212(30)
  03a8ca8  lfs 2, 204(30)
  03a8cac  stfs 1, 216(30)
  03a8cb0  lfs 1, 244(30)
  03a8cb4  lfs 3, 248(30)
  03a8cb8  stfs 2, 220(30)
  03a8cbc  lbz 6, 288(30)
  03a8cc0  fmr 2, 3
  03a8cc4  rlwinm 6, 6, 0, 26, 26
  03a8cc8  bl 0x13a440
  03a8ccc  nop
  03a8cd0  lbz 28, 288(30)
  03a8cd4  rlwinm 3, 28, 0, 27, 30
  03a8cd8  cmpwi 3, 0
  03a8cdc  bt 2, 0x3a8e50
  03a8ce0  clrlwi 3, 28, 31
  03a8ce4  cmpwi 3, 0
  03a8ce8  bf 2, 0x3a8e50
  03a8cec  lis 3, 59
  03a8cf0  ori 29, 22, 0
  03a8cf4  addi 3, 3, -32180
  03a8cf8  addic 25, 30, 320
  03a8cfc  lfs 29, 4(3)
  03a8d00  li 3, 2
  03a8d04  lbz 4, 288(30)
  03a8d08  slw 3, 3, 29
  03a8d0c  and 3, 4, 3
  03a8d10  cmpwi 3, 0
  03a8d14  bt 2, 0x3a8e40
  03a8d18  slwi 3, 29, 2
  03a8d1c  addc 3, 3, 25
  03a8d20  clrldi 28, 3, 32
  03a8d24  lwz 28, 0(28)
  03a8d28  cmpwi 28, -1
  03a8d2c  bt 2, 0x3a8e40
  03a8d30  lis 3, 164
  03a8d34  slwi 4, 28, 8
  03a8d38  lwz 3, -28512(3)
  03a8d3c  addc 28, 3, 4
  03a8d40  clrldi 28, 28, 32
  03a8d44  cmpwi 28, 0
  03a8d48  bt 2, 0x3a8e40
  03a8d4c  lwz 27, 120(28)
  03a8d50  cmpwi 27, 0
  03a8d54  bt 2, 0x3a8e40
  03a8d58  slwi 3, 29, 4
  03a8d5c  addic 4, 1, 288
  03a8d60  addc 26, 3, 4
  03a8d64  lwz 3, 112(27)
  03a8d68  ori 4, 29, 0
  03a8d6c  clrldi 26, 26, 32
  03a8d70  ori 6, 3, 4096
  03a8d74  ori 3, 31, 0
  03a8d78  ori 5, 26, 0
  03a8d7c  stw 6, 112(27)
  03a8d80  bl 0xf1114
  03a8d84  nop
  03a8d88  lfs 4, 4(26)
  03a8d8c  lfs 2, 20(31)
  03a8d90  lfs 1, 0(26)
  03a8d94  fsubs 4, 4, 2
  03a8d98  lfs 2, 16(31)
  03a8d9c  lfs 6, 8(26)
  03a8da0  lfs 3, 24(31)
  03a8da4  fsubs 2, 1, 2
  03a8da8  fsubs 6, 6, 3
  03a8dac  fmuls 3, 4, 4
  03a8db0  lfs 8, 12(26)
  03a8db4  fmadds 9, 2, 2, 3
  03a8db8  fmr 3, 30
  03a8dbc  fmadds 9, 6, 6, 9
  03a8dc0  fmr 5, 3
  03a8dc4  fsqrts 10, 9
  03a8dc8  fmr 7, 5
  03a8dcc  fcmpu 0, 10, 7
  03a8dd0  bt 2, 0x3a8e14
  03a8dd4  frsqrte 3, 9
  03a8dd8  fmuls 5, 9, 3
  03a8ddc  fmuls 7, 3, 29
  03a8de0  fnmsubs 5, 5, 3, 31
  03a8de4  fmadds 3, 5, 7, 3
  03a8de8  fmuls 5, 9, 3
  03a8dec  fmuls 7, 3, 29
  03a8df0  fnmsubs 5, 5, 3, 31
  03a8df4  fmadds 3, 5, 7, 3
  03a8df8  fmuls 5, 9, 3
  03a8dfc  fmuls 7, 3, 29
  03a8e00  fnmsubs 5, 5, 3, 31
  03a8e04  fmadds 7, 5, 7, 3
  03a8e08  fmuls 3, 2, 7
  03a8e0c  fmuls 5, 4, 7
  03a8e10  fmuls 7, 6, 7
  03a8e14  stfs 1, 16(28)
  03a8e18  lfs 1, 4(26)
  03a8e1c  stfs 1, 20(28)
  03a8e20  lfs 1, 8(26)
  03a8e24  stfs 1, 24(28)
  03a8e28  lfs 1, 12(26)
  03a8e2c  stfs 1, 28(28)
  03a8e30  stfs 3, 128(27)
  03a8e34  stfs 5, 132(27)
  03a8e38  stfs 7, 136(27)
  03a8e3c  stfs 8, 140(27)
  03a8e40  addic 29, 29, 1
  03a8e44  extsw 29, 29
  03a8e48  cmpwi 29, 4
  03a8e4c  bt 0, 0x3a8d00
  03a8e50  lhz 3, 284(30)
  03a8e54  extsh 3, 3
  03a8e58  cmpwi 3, 0
  03a8e5c  bf 1, 0x3a8e6c
  03a8e60  li 3, 3
  03a8e64  stb 3, 32(31)
  03a8e68  b 0x3a9a34
  03a8e6c  lis 3, 151
  03a8e70  lwz 3, -25488(3)
  03a8e74  cmpwi 3, 3
  03a8e78  cmpwi 1, 3, 9
  03a8e7c  bt 2, 0x3a8e84
  03a8e80  bf 6, 0x3a8e88
  03a8e84  sth 22, 314(30)
  03a8e88  li 3, 1
  03a8e8c  stb 3, 32(31)
  03a8e90  b 0x3a9a34
  03a8e94  lwz 3, 116(30)
  03a8e98  cmpwi 3, -1
  03a8e9c  bt 2, 0x3a9a34
  03a8ea0  stb 22, 32(31)
  03a8ea4  lhz 22, 286(30)
  03a8ea8  extsh 22, 22
  03a8eac  cmpwi 22, -1
  03a8eb0  bt 2, 0x3a8ef0
  03a8eb4  lis 3, 150
  03a8eb8  sldi 4, 22, 7
  03a8ebc  sldi 5, 22, 4
  03a8ec0  addic 3, 3, 14176
  03a8ec4  subc 4, 4, 5
  03a8ec8  addc 3, 3, 4
  03a8ecc  lwz 4, 136(3)
  03a8ed0  cmpw 4, 31
  03a8ed4  bf 2, 0x3a8ef0
  03a8ed8  lbz 3, 116(3)
  03a8edc  cmpwi 3, 0
  03a8ee0  bt 2, 0x3a8ef0
  03a8ee4  ori 3, 22, 0
  03a8ee8  bl 0x15cdb0
  03a8eec  nop
  03a8ef0  li 3, -1
  03a8ef4  sth 3, 286(30)
  03a8ef8  b 0x3a9a34
  03a8efc  addic 3, 30, 284
  03a8f00  bl 0x4fffb4
  03a8f04  nop
  03a8f08  cmpwi 3, 0
  03a8f0c  bt 2, 0x3a9a34
  03a8f10  li 3, 1
  03a8f14  sth 22, 284(30)
  03a8f18  stb 3, 32(31)
  03a8f1c  b 0x3a9a34
  03a8f20  lfs 1, 16(31)
  03a8f24  lis 3, 59
  03a8f28  stfs 1, 192(1)
  03a8f2c  lfs 1, 20(31)
  03a8f30  addi 3, 3, -32180
  03a8f34  lis 6, 16256
  03a8f38  stfs 1, 196(1)
  03a8f3c  lfs 1, 24(31)
  03a8f40  stfs 1, 200(1)
  03a8f44  lfs 1, 28(31)
  03a8f48  stfs 1, 204(1)
  03a8f4c  lwz 4, 240(30)
  03a8f50  lfs 1, 240(30)
  03a8f54  srawi 5, 4, 31
  03a8f58  lfs 31, 16(3)
  03a8f5c  srwi 3, 5, 1
  03a8f60  xor 3, 3, 4
  03a8f64  subc 3, 3, 5
  03a8f68  cmpw 3, 6
  03a8f6c  bt 0, 0x3a9028
  03a8f70  fsubs 1, 1, 31
  03a8f74  ori 3, 28, 0
  03a8f78  stfs 1, 240(30)
  03a8f7c  bl 0x139f58
  03a8f80  nop
  03a8f84  lfs 1, 160(30)
  03a8f88  ori 27, 3, 0
  03a8f8c  lfs 2, 164(30)
  03a8f90  addic 3, 30, 160
  03a8f94  stfs 1, 144(30)
  03a8f98  ori 4, 28, 0
  03a8f9c  lfs 1, 168(30)
  03a8fa0  li 7, 1
  03a8fa4  stfs 2, 148(30)
  03a8fa8  lfs 2, 172(30)
  03a8fac  stfs 1, 152(30)
  03a8fb0  lfs 1, 244(30)
  03a8fb4  stfs 2, 156(30)
  03a8fb8  lfs 2, 248(30)
  03a8fbc  bl 0x139fc0
  03a8fc0  nop
  03a8fc4  lfs 1, 192(30)
  03a8fc8  addic 4, 27, 1
  03a8fcc  lfs 2, 196(30)
  03a8fd0  ori 3, 28, 0
  03a8fd4  stfs 1, 176(30)
  03a8fd8  extsw 4, 4
  03a8fdc  lfs 1, 200(30)
  03a8fe0  stfs 2, 180(30)
  03a8fe4  lfs 2, 204(30)
  03a8fe8  stfs 1, 184(30)
  03a8fec  stfs 2, 188(30)
  03a8ff0  bl 0x139ef8
  03a8ff4  nop
  03a8ff8  sldi 3, 3, 4
  03a8ffc  lwz 4, 112(30)
  03a9000  addc 3, 4, 3
  03a9004  clrldi 3, 3, 32
  03a9008  lfs 1, 16(3)
  03a900c  stfs 1, 192(30)
  03a9010  lfs 1, 20(3)
  03a9014  stfs 1, 196(30)
  03a9018  lfs 1, 24(3)
  03a901c  stfs 1, 200(30)
  03a9020  lfs 1, 28(3)
  03a9024  stfs 1, 204(30)
  03a9028  lis 3, 59
  03a902c  lfs 1, 300(30)
  03a9030  addi 3, 3, -32180
  03a9034  lis 28, 114
  03a9038  lfs 30, 32(3)
  03a903c  lfs 29, 36(3)
  03a9040  fsubs 2, 30, 1
  03a9044  fsubs 3, 29, 1
  03a9048  lfs 28, 40(3)
  03a904c  lfs 27, 44(3)
  03a9050  lfs 26, 48(3)
  03a9054  lfs 25, 52(3)
  03a9058  lfs 24, 252(30)
  03a905c  lfs 5, 292(30)
  03a9060  lfs 6, -3064(28)
  03a9064  fsub 4, 1, 2
  03a9068  lfs 23, 188(30)
  03a906c  fsel 2, 4, 2, 1
  03a9070  fsub 4, 3, 2
  03a9074  fsel 2, 4, 3, 2
  03a9078  fmuls 3, 2, 2
  03a907c  fmuls 4, 3, 2
  03a9080  fmuls 7, 3, 4
  03a9084  fmadds 2, 4, 28, 2
  03a9088  fmuls 4, 5, 6
  03a908c  fmuls 5, 3, 7
  03a9090  fmadds 2, 7, 27, 2
  03a9094  fmuls 3, 3, 5
  03a9098  fmadds 2, 5, 26, 2
  03a909c  fmadds 2, 3, 25, 2
  03a90a0  fmuls 2, 4, 2
  03a90a4  fmadds 24, 2, 6, 24
  03a90a8  lfs 2, 296(30)
  03a90ac  lfs 22, 28(3)
  03a90b0  fmuls 2, 2, 6
  03a90b4  fdivs 23, 24, 23
  03a90b8  fmuls 2, 2, 22
  03a90bc  bl 0x502578
  03a90c0  nop
  03a90c4  lfs 2, 208(30)
  03a90c8  addic 27, 30, 208
  03a90cc  stfs 1, 300(30)
  03a90d0  addic 26, 30, 176
  03a90d4  lfs 1, 212(30)
  03a90d8  addic 25, 30, 192
  03a90dc  stfs 2, 224(30)
  03a90e0  addic 24, 30, 144
  03a90e4  lfs 2, 216(30)
  03a90e8  addic 23, 30, 160
  03a90ec  stfs 1, 228(30)
  03a90f0  ori 3, 27, 0
  03a90f4  lfs 1, 220(30)
  03a90f8  ori 4, 26, 0
  03a90fc  stfs 2, 232(30)
  03a9100  ori 5, 25, 0
  03a9104  stfs 1, 236(30)
  03a9108  ori 6, 24, 0
  03a910c  lfs 1, 240(30)
  03a9110  ori 7, 23, 0
  03a9114  fadds 1, 1, 23
  03a9118  bl 0x13a290
  03a911c  nop
  03a9120  lbz 3, 288(30)
  03a9124  rlwinm 3, 3, 0, 25, 25
  03a9128  cmpwi 3, 0
  03a912c  bf 2, 0x3a91a4
  03a9130  lfs 1, 228(30)
  03a9134  lfs 2, 212(30)
  03a9138  lfs 3, 224(30)
  03a913c  fsubs 1, 1, 2
  03a9140  lfs 2, 208(30)
  03a9144  fsubs 2, 3, 2
  03a9148  lfs 3, 232(30)
  03a914c  lfs 4, 216(30)
  03a9150  fsubs 3, 3, 4
  03a9154  fmuls 1, 1, 1
  03a9158  lis 3, 59
  03a915c  addi 3, 3, -32180
  03a9160  fmadds 1, 2, 2, 1
  03a9164  lfs 2, 24(3)
  03a9168  fmadds 1, 3, 3, 1
  03a916c  fsqrts 1, 1
  03a9170  fcmpu 0, 1, 2
  03a9174  bt 2, 0x3a91a4
  03a9178  fdivs 1, 24, 1
  03a917c  lfs 2, 240(30)
  03a9180  ori 3, 27, 0
  03a9184  ori 4, 26, 0
  03a9188  ori 5, 25, 0
  03a918c  ori 6, 24, 0
  03a9190  ori 7, 23, 0
  03a9194  fmuls 23, 23, 1
  03a9198  fadds 1, 2, 23
  03a919c  bl 0x13a290
  03a91a0  nop
  03a91a4  cmpwi 29, 0
  03a91a8  bf 2, 0x3a934c
  03a91ac  lhz 3, 290(30)
  03a91b0  extsh 3, 3
  03a91b4  extsw 3, 3
  03a91b8  std 3, 360(1)
  03a91bc  lfs 1, 72(31)
  03a91c0  lfd 2, 360(1)
  03a91c4  fcfid 2, 2
  03a91c8  frsp 2, 2
  03a91cc  fmuls 24, 2, 22
  03a91d0  fmr 2, 24
  03a91d4  bl 0x5025e0
  03a91d8  nop
  03a91dc  lfs 1, 208(30)
  03a91e0  lfs 2, 224(30)
  03a91e4  lfs 3, 212(30)
  03a91e8  lfs 4, 228(30)
  03a91ec  fsubs 1, 1, 2
  03a91f0  fsubs 2, 3, 4
  03a91f4  bl 0x5e8338
  03a91f8  nop
  03a91fc  fmr 2, 24
  03a9200  bl 0x502578
  03a9204  nop
  03a9208  lfs 2, 72(31)
  03a920c  bl 0x5025e0
  03a9210  nop
  03a9214  lfs 2, 272(30)
  03a9218  fdivs 3, 31, 2
  03a921c  lfs 4, -3064(28)
  03a9220  lfs 2, 72(31)
  03a9224  fmuls 3, 3, 4
  03a9228  fmuls 24, 3, 1
  03a922c  fmr 1, 24
  03a9230  bl 0x502578
  03a9234  nop
  03a9238  stfs 1, 72(31)
  03a923c  lfs 1, 212(30)
  03a9240  lfs 2, 228(30)
  03a9244  lfs 3, 208(30)
  03a9248  fsubs 1, 1, 2
  03a924c  lfs 2, 224(30)
  03a9250  fsubs 3, 3, 2
  03a9254  lfs 2, 216(30)
  03a9258  lfs 4, 232(30)
  03a925c  fsubs 2, 2, 4
  03a9260  fmuls 1, 1, 1
  03a9264  fmadds 1, 3, 3, 1
  03a9268  fsqrts 1, 1
  03a926c  bl 0x5e8338
  03a9270  nop
  03a9274  lis 3, 59
  03a9278  lfs 3, 264(30)
  03a927c  lis 27, 114
  03a9280  addi 3, 3, -32180
  03a9284  fmuls 5, 3, 22
  03a9288  lis 26, 114
  03a928c  addic 5, 30, 268
  03a9290  lfs 21, 56(3)
  03a9294  lfs 20, 60(3)
  03a9298  fmuls 4, 3, 21
  03a929c  fmuls 3, 3, 20
  03a92a0  fmuls 4, 4, 22
  03a92a4  fneg 2, 1
  03a92a8  lfs 1, 68(31)
  03a92ac  lfs 6, -3048(27)
  03a92b0  lfs 7, -3052(26)
  03a92b4  fmuls 5, 5, 7
  03a92b8  fmuls 7, 3, 22
  03a92bc  fmuls 3, 4, 6
  03a92c0  fmuls 4, 7, 6
  03a92c4  bl 0xff190
  03a92c8  nop
  03a92cc  stfs 1, 68(31)
  03a92d0  lfs 1, 276(30)
  03a92d4  fmuls 1, 24, 1
  03a92d8  bl 0x10de78
  03a92dc  nop
  03a92e0  lfs 3, 64(31)
  03a92e4  fmr 2, 1
  03a92e8  fmr 1, 3
  03a92ec  bl 0x5025e0
  03a92f0  nop
  03a92f4  lfs 2, 280(30)
  03a92f8  fmuls 1, 1, 2
  03a92fc  bl 0x10de78
  03a9300  nop
  03a9304  lfs 2, 256(30)
  03a9308  addic 5, 30, 260
  03a930c  lfs 6, -3048(27)
  03a9310  fmuls 3, 2, 21
  03a9314  fmuls 4, 2, 20
  03a9318  lfs 7, -3052(26)
  03a931c  fmuls 5, 2, 22
  03a9320  fmr 2, 1
  03a9324  lfs 1, 64(31)
  03a9328  fmuls 3, 3, 22
  03a932c  fmuls 4, 4, 22
  03a9330  fmuls 5, 5, 7
  03a9334  fmuls 3, 3, 6
  03a9338  fmuls 4, 4, 6
  03a933c  bl 0xff190
  03a9340  nop
  03a9344  stfs 1, 64(31)
  03a9348  b 0x3a9380
  03a934c  stw 22, 76(31)
  03a9350  stw 22, 72(31)
  03a9354  stw 22, 68(31)
  03a9358  stw 22, 64(31)
  03a935c  lfs 1, 208(30)
  03a9360  lfs 2, 224(30)
  03a9364  lfs 3, 212(30)
  03a9368  fsubs 1, 1, 2
  03a936c  lfs 4, 228(30)
  03a9370  fsubs 2, 3, 4
  03a9374  bl 0x5e8338
  03a9378  nop
  03a937c  stfs 1, 72(31)
  03a9380  lfs 1, 240(30)
  03a9384  lfs 2, 224(30)
  03a9388  cmpwi 29, 0
  03a938c  fadds 1, 1, 23
  03a9390  stfs 1, 240(30)
  03a9394  stfs 2, 16(31)
  03a9398  lfs 1, 228(30)
  03a939c  stfs 1, 20(31)
  03a93a0  lfs 1, 232(30)
  03a93a4  stfs 1, 24(31)
  03a93a8  lfs 1, 236(30)
  03a93ac  stfs 1, 28(31)
  03a93b0  bf 2, 0x3a93c0
  03a93b4  addic 4, 31, 16
  03a93b8  ori 3, 31, 0
  03a93bc  bl 0x3a8168
  03a93c0  lbz 3, 288(30)
  03a93c4  clrlwi 3, 3, 27
  03a93c8  cmpwi 3, 0
  03a93cc  bt 2, 0x3a970c
  03a93d0  lis 3, 59
  03a93d4  ori 26, 22, 0
  03a93d8  addi 3, 3, -32180
  03a93dc  ori 25, 30, 0
  03a93e0  ori 27, 26, 0
  03a93e4  lfs 24, 24(3)
  03a93e8  lfs 23, 4(3)
  03a93ec  lfs 22, 64(3)
  03a93f0  lfs 21, 68(3)
  03a93f4  li 3, 1
  03a93f8  lbz 4, 288(30)
  03a93fc  slw 3, 3, 26
  03a9400  and 3, 4, 3
  03a9404  cmpwi 3, 0
  03a9408  bt 2, 0x3a9698
  03a940c  addic 5, 1, 208
  03a9410  ori 3, 31, 0
  03a9414  ori 4, 27, 0
  03a9418  bl 0xf1114
  03a941c  nop
  03a9420  lfs 1, 208(1)
  03a9424  addic 27, 27, 1
  03a9428  lfs 2, 16(31)
  03a942c  lfs 3, 212(1)
  03a9430  fsubs 1, 1, 2
  03a9434  extsw 27, 27
  03a9438  lfs 2, 20(31)
  03a943c  lfs 4, 216(1)
  03a9440  fsubs 2, 3, 2
  03a9444  lfs 3, 24(31)
  03a9448  fsubs 3, 4, 3
  03a944c  lfs 4, 220(1)
  03a9450  stfs 4, 236(1)
  03a9454  stfs 1, 224(1)
  03a9458  stfs 2, 228(1)
  03a945c  stfs 3, 232(1)
  03a9460  lbz 3, 288(30)
  03a9464  clrlwi 3, 3, 31
  03a9468  cmpwi 3, 0
  03a946c  bf 2, 0x3a9564
  03a9470  lwz 3, 316(25)
  03a9474  cmpwi 3, -1
  03a9478  bt 2, 0x3a9698
  03a947c  lis 4, 164
  03a9480  slwi 3, 3, 8
  03a9484  lwz 4, -28512(4)
  03a9488  addc 3, 4, 3
  03a948c  clrldi 3, 3, 32
  03a9490  cmpwi 3, 0
  03a9494  bt 2, 0x3a9698
  03a9498  lwz 4, 120(3)
  03a949c  cmpwi 4, 0
  03a94a0  bt 2, 0x3a9698
  03a94a4  fmuls 4, 2, 2
  03a94a8  fmr 5, 24
  03a94ac  fmadds 4, 1, 1, 4
  03a94b0  fmr 6, 5
  03a94b4  fmadds 4, 3, 3, 4
  03a94b8  fmr 7, 6
  03a94bc  fsqrts 8, 4
  03a94c0  fcmpu 0, 8, 7
  03a94c4  bt 2, 0x3a9508
  03a94c8  frsqrte 5, 4
  03a94cc  fmuls 6, 4, 5
  03a94d0  fmuls 7, 5, 23
  03a94d4  fnmsubs 6, 6, 5, 31
  03a94d8  fmadds 5, 6, 7, 5
  03a94dc  fmuls 6, 4, 5
  03a94e0  fmuls 7, 5, 23
  03a94e4  fnmsubs 6, 6, 5, 31
  03a94e8  fmadds 5, 6, 7, 5
  03a94ec  fmuls 4, 4, 5
  03a94f0  fmuls 6, 5, 23
  03a94f4  fnmsubs 4, 4, 5, 31
  03a94f8  fmadds 5, 4, 6, 5
  03a94fc  fmuls 7, 1, 5
  03a9500  fmuls 6, 2, 5
  03a9504  fmuls 5, 3, 5
  03a9508  stfs 7, 224(1)
  03a950c  stfs 6, 228(1)
  03a9510  stfs 5, 232(1)
  03a9514  lwz 5, 112(4)
  03a9518  ori 5, 5, 4096
  03a951c  stw 5, 112(4)
  03a9520  lfs 1, 208(1)
  03a9524  stfs 1, 16(3)
  03a9528  lfs 1, 212(1)
  03a952c  stfs 1, 20(3)
  03a9530  lfs 1, 216(1)
  03a9534  stfs 1, 24(3)
  03a9538  lfs 1, 220(1)
  03a953c  stfs 1, 28(3)
  03a9540  lfs 1, 224(1)
  03a9544  stfs 1, 128(4)
  03a9548  lfs 1, 228(1)
  03a954c  stfs 1, 132(4)
  03a9550  lfs 1, 232(1)
  03a9554  stfs 1, 136(4)
  03a9558  lfs 1, 236(1)
  03a955c  stfs 1, 140(4)
  03a9560  b 0x3a9698
  03a9564  lbz 3, 289(30)
  03a9568  cmpwi 3, 0
  03a956c  bt 1, 0x3a9698
  03a9570  fmr 2, 21
  03a9574  fmr 1, 22
  03a9578  bl 0xfcbe8
  03a957c  nop
  03a9580  lfs 2, 228(1)
  03a9584  lfs 3, 224(1)
  03a9588  fmuls 4, 2, 2
  03a958c  lfs 5, 232(1)
  03a9590  lfs 6, -3064(28)
  03a9594  fmuls 1, 1, 6
  03a9598  fmadds 4, 3, 3, 4
  03a959c  addic 24, 1, 208
  03a95a0  addic 23, 1, 224
  03a95a4  ori 3, 24, 0
  03a95a8  ori 4, 23, 0
  03a95ac  fmadds 4, 5, 5, 4
  03a95b0  fsqrts 4, 4
  03a95b4  fdivs 1, 1, 4
  03a95b8  fsub 6, 24, 4
  03a95bc  fsub 7, 24, 4
  03a95c0  fsub 8, 24, 4
  03a95c4  fsub 9, 4, 24
  03a95c8  fsub 10, 4, 24
  03a95cc  fsub 4, 4, 24
  03a95d0  fmuls 3, 3, 1
  03a95d4  fmuls 2, 2, 1
  03a95d8  fmuls 1, 5, 1
  03a95dc  fsel 5, 6, 24, 3
  03a95e0  fsel 6, 7, 24, 2
  03a95e4  fsel 7, 8, 24, 1
  03a95e8  fsel 3, 9, 5, 3
  03a95ec  fsel 2, 10, 6, 2
  03a95f0  fsel 1, 4, 7, 1
  03a95f4  stfs 3, 224(1)
  03a95f8  stfs 2, 228(1)
  03a95fc  stfs 1, 232(1)
  03a9600  bl 0x123048
  03a9604  nop
  03a9608  fmr 2, 21
  03a960c  fmr 1, 22
  03a9610  bl 0xfcbe8
  03a9614  nop
  03a9618  lfs 2, 228(1)
  03a961c  lfs 3, 224(1)
  03a9620  fmuls 4, 2, 2
  03a9624  lfs 5, 232(1)
  03a9628  lfs 6, -3064(28)
  03a962c  fmuls 1, 1, 6
  03a9630  fmadds 4, 3, 3, 4
  03a9634  ori 3, 24, 0
  03a9638  ori 4, 23, 0
  03a963c  fmadds 4, 5, 5, 4
  03a9640  fsqrts 4, 4
  03a9644  fdivs 1, 1, 4
  03a9648  fsub 6, 24, 4
  03a964c  fsub 7, 24, 4
  03a9650  fsub 8, 24, 4
  03a9654  fsub 9, 4, 24
  03a9658  fsub 10, 4, 24
  03a965c  fsub 4, 4, 24
  03a9660  fmuls 3, 3, 1
  03a9664  fmuls 2, 2, 1
  03a9668  fmuls 1, 5, 1
  03a966c  fsel 5, 6, 24, 3
  03a9670  fsel 6, 7, 24, 2
  03a9674  fsel 7, 8, 24, 1
  03a9678  fsel 3, 9, 5, 3
  03a967c  fsel 2, 10, 6, 2
  03a9680  fsel 1, 4, 7, 1
  03a9684  stfs 3, 224(1)
  03a9688  stfs 2, 228(1)
  03a968c  stfs 1, 232(1)
  03a9690  bl 0x123048
  03a9694  nop
  03a9698  addic 26, 26, 1
  03a969c  addic 25, 25, 4
  03a96a0  cmpwi 26, 5
  03a96a4  bt 0, 0x3a93f4
  03a96a8  li 3, 289
  03a96ac  vspltisw 2, -8
  03a96b0  <unknown>
  03a96b4  lbz 3, 289(30)
  03a96b8  vsrw 2, 3, 2
  03a96bc  cmpwi 3, 0
  03a96c0  bt 1, 0x3a96f4
  03a96c4  lis 3, 59
  03a96c8  li 4, 72
  03a96cc  vspltisw 2, -1
  03a96d0  addi 3, 3, -32180
  03a96d4  lis 5, 114
  03a96d8  li 6, -3056
  03a96dc  vslw 2, 2, 2
  03a96e0  <unknown>
  03a96e4  vspltw 3, 3, 0
  03a96e8  <unknown>
  03a96ec  vmaddfp 2, 4, 3, 2
  03a96f0  vctsxs 2, 2, 0
  03a96f4  vspltw 2, 2, 0
  03a96f8  vspltisw 3, 1
  03a96fc  li 3, 289
  03a9700  vsubuwm 2, 2, 3
  03a9704  vspltb 2, 2, 3
  03a9708  stvebx 2, 3, 30
  03a970c  lis 3, 151
  03a9710  lwz 3, -25488(3)
  03a9714  cmpwi 3, 3
  03a9718  cmpwi 1, 3, 9
  03a971c  bt 2, 0x3a9724
  03a9720  bf 6, 0x3a9a34
  03a9724  ori 3, 31, 0
  03a9728  lis 4, 33
  03a972c  li 5, 0
  03a9730  bl 0x10675c
  03a9734  nop
  03a9738  cmpwi 3, 0
  03a973c  lhz 4, 166(31)
  03a9740  lfs 1, 72(31)
  03a9744  bt 2, 0x3a9964
  03a9748  lbz 5, 40(3)
  03a974c  cmpwi 5, 2
  03a9750  bf 2, 0x3a9760
  03a9754  lbz 3, 41(3)
  03a9758  cmpwi 3, 1
  03a975c  bt 2, 0x3a9964
  03a9760  lis 3, 59
  03a9764  extsh 4, 4
  03a9768  addi 3, 3, -32180
  03a976c  cmpwi 4, 51
  03a9770  lfs 31, 24(3)
  03a9774  stw 22, 252(1)
  03a9778  stw 22, 248(1)
  03a977c  stw 22, 244(1)
  03a9780  stw 22, 240(1)
  03a9784  bf 2, 0x3a9828
  03a9788  lis 3, 59
  03a978c  fsubs 3, 30, 1
  03a9790  fsubs 4, 29, 1
  03a9794  addi 3, 3, -32180
  03a9798  lfs 2, 76(3)
  03a979c  fadds 2, 1, 2
  03a97a0  fsub 5, 1, 3
  03a97a4  fsubs 6, 30, 2
  03a97a8  fsel 1, 5, 3, 1
  03a97ac  fsubs 7, 29, 2
  03a97b0  fsub 3, 2, 6
  03a97b4  fsub 5, 4, 1
  03a97b8  fsel 2, 3, 6, 2
  03a97bc  fsel 1, 5, 4, 1
  03a97c0  fsub 3, 7, 2
  03a97c4  fmuls 4, 1, 1
  03a97c8  fsel 2, 3, 7, 2
  03a97cc  fmuls 3, 4, 1
  03a97d0  fmuls 5, 2, 2
  03a97d4  fmuls 6, 4, 3
  03a97d8  fmadds 1, 3, 28, 1
  03a97dc  fmuls 3, 5, 2
  03a97e0  fmuls 8, 4, 6
  03a97e4  fmadds 1, 6, 27, 1
  03a97e8  lfs 6, 80(3)
  03a97ec  stw 22, 248(1)
  03a97f0  fmuls 7, 5, 3
  03a97f4  fmadds 2, 3, 28, 2
  03a97f8  fmuls 3, 4, 8
  03a97fc  fmadds 1, 8, 26, 1
  03a9800  fmuls 4, 5, 7
  03a9804  fmadds 2, 7, 27, 2
  03a9808  fmadds 1, 3, 25, 1
  03a980c  fmuls 3, 5, 4
  03a9810  fmadds 2, 4, 26, 2
  03a9814  fmuls 1, 1, 6
  03a9818  fmadds 2, 3, 25, 2
  03a981c  stfs 1, 244(1)
  03a9820  fmuls 1, 2, 6
  03a9824  stfs 1, 240(1)
  03a9828  addic 3, 1, 272
  03a982c  addic 4, 31, 16
  03a9830  addic 5, 1, 192
  03a9834  bl 0x502a64
  03a9838  nop
  03a983c  lis 3, 59
  03a9840  lfs 1, 284(1)
  03a9844  li 4, 84
  03a9848  addi 3, 3, -32180
  03a984c  vspltisw 2, -1
  03a9850  stfs 1, 268(1)
  03a9854  lis 5, 114
  03a9858  lfs 1, 272(1)
  03a985c  li 6, -3056
  03a9860  lfs 2, 276(1)
  03a9864  lfs 3, 280(1)
  03a9868  lfs 4, 4(3)
  03a986c  lfs 5, 240(1)
  03a9870  lfs 6, 16(31)
  03a9874  fmuls 1, 1, 4
  03a9878  lfs 7, 244(1)
  03a987c  fmuls 2, 2, 4
  03a9880  fadds 5, 5, 6
  03a9884  vslw 2, 2, 2
  03a9888  lfs 6, 20(31)
  03a988c  fmuls 3, 3, 4
  03a9890  lfs 8, 248(1)
  03a9894  fadds 6, 7, 6
  03a9898  lfs 7, 24(31)
  03a989c  fadds 4, 8, 7
  03a98a0  stfs 5, 240(1)
  03a98a4  stfs 6, 244(1)
  03a98a8  stfs 1, 256(1)
  03a98ac  stfs 2, 260(1)
  03a98b0  stfs 3, 264(1)
  03a98b4  stfs 4, 248(1)
  03a98b8  <unknown>
  03a98bc  <unknown>
  03a98c0  vspltw 3, 3, 0
  03a98c4  li 4, 314
  03a98c8  li 3, -1
  03a98cc  vmaddfp 2, 4, 3, 2
  03a98d0  ori 5, 3, 0
  03a98d4  vctsxs 2, 2, 0
  03a98d8  vsplth 2, 2, 1
  03a98dc  stvehx 2, 4, 30
  03a98e0  lhz 4, 166(31)
  03a98e4  cmpwi 4, 1330
  03a98e8  bt 2, 0x3a98fc
  03a98ec  cmpwi 4, 1339
  03a98f0  bt 2, 0x3a98fc
  03a98f4  cmpwi 4, 1340
  03a98f8  bf 2, 0x3a9900
  03a98fc  li 3, 1
  03a9900  ori 6, 3, 0
  03a9904  fmr 1, 31
  03a9908  lis 3, 59
  03a990c  fmr 2, 31
  03a9910  li 11, 1
  03a9914  addi 10, 3, -32180
  03a9918  ori 7, 5, 0
  03a991c  addic 4, 1, 256
  03a9920  addic 5, 1, 240
  03a9924  li 8, 20
  03a9928  lfs 3, 88(10)
  03a992c  ori 3, 31, 0
  03a9930  lfs 4, 92(10)
  03a9934  li 9, 3
  03a9938  lfs 5, 96(10)
  03a993c  lfs 6, 100(10)
  03a9940  lfs 7, 104(10)
  03a9944  std 6, 144(1)
  03a9948  std 11, 160(1)
  03a994c  li 10, 4
  03a9950  std 11, 168(1)
  03a9954  std 7, 176(1)
  03a9958  std 22, 184(1)
  03a995c  bl 0x10e030
  03a9960  nop
  03a9964  lis 3, 113
  03a9968  lis 4, 115
  03a996c  addic 3, 3, -12200
  03a9970  li 5, 255
  03a9974  stw 3, 23808(4)
  03a9978  stb 5, 164(31)
  03a997c  lhz 3, 314(30)
  03a9980  cmpwi 3, 0
  03a9984  bt 2, 0x3a9a34
  03a9988  addic 3, 30, 314
  03a998c  bl 0x4fffb4
  03a9990  nop
  03a9994  ori 4, 3, 0
  03a9998  lhz 3, 52(31)
  03a999c  cmpwi 4, 0
  03a99a0  bt 2, 0x3a99cc
  03a99a4  cmpwi 29, 0
  03a99a8  bt 2, 0x3a99cc
  03a99ac  li 4, -66
  03a99b0  and 3, 3, 4
  03a99b4  lwz 4, 36(31)
  03a99b8  ori 3, 3, 4096
  03a99bc  lwz 4, 16(4)
  03a99c0  sth 3, 52(31)
  03a99c4  stw 4, 148(31)
  03a99c8  b 0x3a9a34
  03a99cc  ori 3, 3, 65
  03a99d0  sth 3, 52(31)
  03a99d4  lhz 3, 286(30)
  03a99d8  stw 22, 148(31)
  03a99dc  extsh 3, 3
  03a99e0  cmpwi 3, -1
  03a99e4  bt 2, 0x3a9a20
  03a99e8  lis 4, 150
  03a99ec  sldi 5, 3, 7
  03a99f0  sldi 6, 3, 4
  03a99f4  addic 4, 4, 14176
  03a99f8  subc 5, 5, 6
  03a99fc  addc 4, 4, 5
  03a9a00  lwz 5, 136(4)
  03a9a04  cmpw 5, 31
  03a9a08  bf 2, 0x3a9a20
  03a9a0c  lbz 4, 116(4)
  03a9a10  cmpwi 4, 0
  03a9a14  bt 2, 0x3a9a20
  03a9a18  bl 0x15cdb0
  03a9a1c  nop
  03a9a20  li 3, -1
  03a9a24  sth 3, 286(30)
  03a9a28  lhz 3, 52(31)
  03a9a2c  rlwimi 3, 22, 0, 19, 19
  03a9a30  sth 3, 52(31)
  03a9a34  li 0, 384
  03a9a38  lvx 31, 1, 0
  03a9a3c  ld 0, 592(1)
  03a9a40  mtlr 0
  03a9a44  lfd 20, 480(1)
  03a9a48  lfd 21, 488(1)
  03a9a4c  lfd 22, 496(1)
  03a9a50  lfd 23, 504(1)
  03a9a54  lfd 24, 512(1)
  03a9a58  lfd 25, 520(1)
  03a9a5c  lfd 26, 528(1)
  03a9a60  lfd 27, 536(1)
  03a9a64  lfd 28, 544(1)
  03a9a68  lfd 29, 552(1)
  03a9a6c  lfd 30, 560(1)
  03a9a70  lfd 31, 568(1)
  03a9a74  ld 22, 400(1)
  03a9a78  ld 23, 408(1)
  03a9a7c  ld 24, 416(1)
  03a9a80  ld 25, 424(1)
  03a9a84  ld 26, 432(1)
  03a9a88  ld 27, 440(1)
  03a9a8c  ld 28, 448(1)
  03a9a90  ld 29, 456(1)
  03a9a94  ld 30, 464(1)
  03a9a98  ld 31, 472(1)
  03a9a9c  addi 1, 1, 576
  03a9aa0  blr

M1340_003a9aa4:   # 0x3a9aa4, 0x14 bytes
  03a9aa4  lis 3, 132
  03a9aa8  lis 4, 1
  03a9aac  addic 3, 3, 13876
  03a9ab0  stw 4, 72(3)
  03a9ab4  blr
