# game/update/moby625.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003e7fc8:   # 0x3e7fc8, 0x2b0 bytes
  03e7fc8  stdu 1, -192(1)
  03e7fcc  mflr 0
  03e7fd0  std 0, 208(1)
  03e7fd4  stfd 30, 176(1)
  03e7fd8  stfd 31, 184(1)
  03e7fdc  std 29, 152(1)
  03e7fe0  ori 29, 3, 0
  03e7fe4  li 3, 624
  03e7fe8  std 31, 168(1)
  03e7fec  fmr 31, 2
  03e7ff0  ori 31, 7, 0
  03e7ff4  std 30, 160(1)
  03e7ff8  fmr 30, 1
  03e7ffc  ori 30, 4, 0
  03e8000  bl 0xefa28
  03e8004  nop
  03e8008  cmpwi 3, 0
  03e800c  bt 2, 0x3e8254
  03e8010  li 4, 255
  03e8014  li 5, 1
  03e8018  li 6, 0
  03e801c  lis 7, 133
  03e8020  stb 4, 48(3)
  03e8024  stb 5, 49(3)
  03e8028  stb 6, 32(3)
  03e802c  lfs 1, 44(3)
  03e8030  lfs 2, 16008(7)
  03e8034  sth 4, 50(3)
  03e8038  fmuls 1, 1, 2
  03e803c  lis 4, 133
  03e8040  lhz 5, 52(3)
  03e8044  ori 5, 5, 16
  03e8048  lis 7, 62
  03e804c  lwz 4, 16012(4)
  03e8050  addi 7, 7, 32704
  03e8054  stw 4, 144(3)
  03e8058  sth 5, 52(3)
  03e805c  stfs 1, 44(3)
  03e8060  lfs 1, 0(29)
  03e8064  stfs 1, 16(3)
  03e8068  lfs 1, 4(29)
  03e806c  stfs 1, 20(3)
  03e8070  lfs 1, 8(29)
  03e8074  stfs 1, 24(3)
  03e8078  lfs 1, 12(29)
  03e807c  stfs 1, 28(3)
  03e8080  lwz 5, 0(30)
  03e8084  lwz 6, 4(30)
  03e8088  lfs 1, 0(30)
  03e808c  lfs 2, 4(30)
  03e8090  fabs 5, 1
  03e8094  fabs 6, 2
  03e8098  lwz 4, 120(3)
  03e809c  rlwinm 6, 6, 3, 29, 29
  03e80a0  lis 8, 115
  03e80a4  addic 8, 8, 22784
  03e80a8  fsubs 1, 5, 6
  03e80ac  stfs 1, 112(1)
  03e80b0  lfs 1, 0(7)
  03e80b4  lwz 7, 112(1)
  03e80b8  lfs 2, 112(1)
  03e80bc  rlwimi 6, 7, 2, 30, 30
  03e80c0  fsub 4, 2, 1
  03e80c4  fsub 7, 2, 1
  03e80c8  rlwimi 6, 5, 4, 28, 28
  03e80cc  ori 5, 8, 0
  03e80d0  rlwimi 5, 6, 2, 26, 28
  03e80d4  slwi 6, 6, 2
  03e80d8  clrldi 5, 5, 32
  03e80dc  fsel 4, 4, 5, 6
  03e80e0  lfsx 3, 8, 6
  03e80e4  lfs 2, 4(5)
  03e80e8  fsel 5, 7, 6, 5
  03e80ec  fcmpu 0, 4, 1
  03e80f0  bt 1, 0x3e80f8
  03e80f4  b 0x3e821c
  03e80f8  fsubs 6, 5, 4
  03e80fc  fadds 4, 5, 4
  03e8100  addic 8, 1, 16
  03e8104  li 5, 2
  03e8108  addic 6, 8, 116
  03e810c  addic 7, 8, 100
  03e8110  mtctr 5
  03e8114  fdivs 4, 6, 4
  03e8118  fmuls 6, 4, 4
  03e811c  stfs 4, 128(1)
  03e8120  stfs 4, 120(1)
  03e8124  stfs 4, 124(1)
  03e8128  stfs 4, 116(1)
  03e812c  lfs 7, 128(1)
  03e8130  lfs 8, 120(1)
  03e8134  lfs 9, 124(1)
  03e8138  fmuls 4, 6, 6
  03e813c  fmuls 8, 8, 6
  03e8140  fmuls 7, 7, 4
  03e8144  fmuls 5, 4, 4
  03e8148  fmuls 4, 9, 4
  03e814c  stfs 8, 120(1)
  03e8150  fmuls 6, 7, 6
  03e8154  stfs 4, 124(1)
  03e8158  stfs 6, 128(1)
  03e815c  lfs 4, 100(8)
  03e8160  fmuls 4, 4, 5
  03e8164  stfs 4, 116(8)
  03e8168  lfs 4, 4(7)
  03e816c  addic 7, 7, 8
  03e8170  fmuls 4, 4, 5
  03e8174  addic 8, 8, 8
  03e8178  stfs 4, 4(6)
  03e817c  addic 6, 6, 8
  03e8180  bdnz 0x3e815c
  03e8184  ori 9, 1, 0
  03e8188  li 6, 4
  03e818c  lis 8, 115
  03e8190  addic 7, 9, 116
  03e8194  mtctr 6
  03e8198  addic 8, 8, 22752
  03e819c  ori 6, 7, 0
  03e81a0  lfs 4, 116(9)
  03e81a4  lfs 5, 0(8)
  03e81a8  fmuls 4, 4, 5
  03e81ac  lfs 5, 4(8)
  03e81b0  addic 8, 8, 8
  03e81b4  stfs 4, 116(9)
  03e81b8  lfs 4, 4(7)
  03e81bc  addic 9, 9, 8
  03e81c0  fmuls 4, 4, 5
  03e81c4  stfs 4, 4(7)
  03e81c8  addic 7, 7, 8
  03e81cc  bdnz 0x3e81a0
  03e81d0  ori 7, 5, 0
  03e81d4  ori 5, 1, 0
  03e81d8  mtctr 7
  03e81dc  lfs 4, 116(5)
  03e81e0  fadds 1, 1, 4
  03e81e4  lfs 4, 4(6)
  03e81e8  addic 5, 5, 16
  03e81ec  lfs 5, 8(6)
  03e81f0  lfs 6, 12(6)
  03e81f4  addic 6, 6, 16
  03e81f8  fadds 1, 1, 4
  03e81fc  fadds 1, 1, 5
  03e8200  fadds 1, 1, 6
  03e8204  bdnz 0x3e81dc
  03e8208  lis 5, 62
  03e820c  addi 5, 5, 32704
  03e8210  lfs 4, 4(5)
  03e8214  fadds 1, 1, 4
  03e8218  fmadds 1, 1, 3, 2
  03e821c  stfs 1, 72(3)
  03e8220  li 5, 0
  03e8224  lfs 1, 0(30)
  03e8228  stfs 1, 0(4)
  03e822c  lfs 1, 4(30)
  03e8230  stfs 1, 4(4)
  03e8234  lfs 1, 8(30)
  03e8238  stfs 1, 8(4)
  03e823c  lfs 1, 12(30)
  03e8240  stfs 30, 40(4)
  03e8244  stfs 1, 12(4)
  03e8248  stfs 31, 32(4)
  03e824c  stw 5, 48(4)
  03e8250  stw 31, 52(4)
  03e8254  ld 0, 208(1)
  03e8258  mtlr 0
  03e825c  lfd 30, 176(1)
  03e8260  lfd 31, 184(1)
  03e8264  ld 29, 152(1)
  03e8268  ld 30, 160(1)
  03e826c  ld 31, 168(1)
  03e8270  addi 1, 1, 192
  03e8274  blr

M625_003e82b0:   # 0x3e82b0, 0x5d4 bytes
  03e82b0  stdu 1, -1040(1)
  03e82b4  mflr 0
  03e82b8  std 0, 1056(1)
  03e82bc  stfd 19, 936(1)
  03e82c0  stfd 20, 944(1)
  03e82c4  stfd 21, 952(1)
  03e82c8  stfd 22, 960(1)
  03e82cc  stfd 23, 968(1)
  03e82d0  stfd 24, 976(1)
  03e82d4  stfd 25, 984(1)
  03e82d8  stfd 26, 992(1)
  03e82dc  stfd 27, 1000(1)
  03e82e0  stfd 28, 1008(1)
  03e82e4  stfd 29, 1016(1)
  03e82e8  stfd 30, 1024(1)
  03e82ec  stfd 31, 1032(1)
  03e82f0  std 31, 928(1)
  03e82f4  std 29, 912(1)
  03e82f8  ori 31, 3, 0
  03e82fc  lis 29, 63
  03e8300  addic 3, 1, 176
  03e8304  std 19, 832(1)
  03e8308  addi 29, 29, -32136
  03e830c  std 30, 920(1)
  03e8310  std 28, 904(1)
  03e8314  std 27, 896(1)
  03e8318  std 26, 888(1)
  03e831c  std 25, 880(1)
  03e8320  std 24, 872(1)
  03e8324  std 23, 864(1)
  03e8328  std 22, 856(1)
  03e832c  std 21, 848(1)
  03e8330  std 20, 840(1)
  03e8334  lwz 19, 120(31)
  03e8338  bl 0x500af8
  03e833c  nop
  03e8340  lis 3, 133
  03e8344  lfs 1, 24(31)
  03e8348  lfs 2, 16(31)
  03e834c  lis 4, 16256
  03e8350  lfs 3, 20(31)
  03e8354  li 20, 0
  03e8358  stfs 2, 224(1)
  03e835c  ori 28, 1, 0
  03e8360  ori 30, 20, 0
  03e8364  lfs 2, 16144(3)
  03e8368  stfs 3, 228(1)
  03e836c  fadds 2, 1, 2
  03e8370  lfs 3, 28(31)
  03e8374  stfs 1, 232(1)
  03e8378  stfs 3, 236(1)
  03e837c  stfs 2, 232(1)
  03e8380  lfs 30, 0(29)
  03e8384  stw 4, 236(1)
  03e8388  li 3, 14
  03e838c  bl 0x685c4
  03e8390  nop
  03e8394  std 3, 360(28)
  03e8398  li 3, 0
  03e839c  lis 9, 0
  03e83a0  li 4, 0
  03e83a4  li 5, 1
  03e83a8  li 6, 1
  03e83ac  li 7, 1
  03e83b0  li 8, 0
  03e83b4  ori 9, 9, 65424
  03e83b8  bl 0x502fd4
  03e83bc  nop
  03e83c0  std 3, 368(28)
  03e83c4  li 4, 0
  03e83c8  li 3, 0
  03e83cc  li 5, 0
  03e83d0  li 6, 0
  03e83d4  li 7, 0
  03e83d8  li 8, 0
  03e83dc  bl 0x502f08
  03e83e0  nop
  03e83e4  std 3, 352(28)
  03e83e8  lis 3, 269
  03e83ec  lis 4, 269
  03e83f0  lis 5, 133
  03e83f4  lis 6, 133
  03e83f8  li 7, 128
  03e83fc  lwz 8, -17484(3)
  03e8400  lwz 3, -17488(4)
  03e8404  lwz 4, 16088(5)
  03e8408  lwz 6, 16092(6)
  03e840c  ori 5, 8, 0
  03e8410  bl 0x502ea8
  03e8414  nop
  03e8418  extsw 4, 20
  03e841c  std 3, 376(28)
  03e8420  lis 3, 133
  03e8424  std 4, 816(1)
  03e8428  lis 4, 133
  03e842c  lfs 27, 4(29)
  03e8430  lfs 1, 36(19)
  03e8434  lfs 2, 16156(3)
  03e8438  lfs 28, 16152(4)
  03e843c  lfd 3, 816(1)
  03e8440  fcfid 3, 3
  03e8444  frsp 3, 3
  03e8448  fmuls 27, 3, 27
  03e844c  fmadds 28, 28, 3, 1
  03e8450  fmadds 29, 1, 2, 27
  03e8454  fmr 1, 29
  03e8458  bl 0x502758
  03e845c  nop
  03e8460  extsw 3, 3
  03e8464  lis 4, 133
  03e8468  std 3, 816(1)
  03e846c  lis 3, 133
  03e8470  lwz 3, 16100(3)
  03e8474  lwz 4, 16104(4)
  03e8478  lfd 1, 816(1)
  03e847c  extsw 3, 3
  03e8480  extsw 4, 4
  03e8484  fcfid 1, 1
  03e8488  frsp 1, 1
  03e848c  fsubs 29, 29, 1
  03e8490  fmr 1, 29
  03e8494  bl 0x5027bc
  03e8498  nop
  03e849c  lis 5, 133
  03e84a0  ori 4, 3, 0
  03e84a4  clrlwi 3, 4, 8
  03e84a8  lfs 1, 16160(5)
  03e84ac  fmuls 1, 1, 29
  03e84b0  fsub 2, 30, 1
  03e84b4  fsel 1, 2, 1, 30
  03e84b8  bl 0x5027bc
  03e84bc  nop
  03e84c0  lis 4, 133
  03e84c4  lfs 1, 40(19)
  03e84c8  lis 5, 114
  03e84cc  lfs 2, 36(19)
  03e84d0  fsubs 31, 1, 2
  03e84d4  lfs 3, 16164(4)
  03e84d8  lfs 4, -3056(5)
  03e84dc  lfs 2, 32(19)
  03e84e0  fmuls 1, 3, 4
  03e84e4  ori 21, 3, 0
  03e84e8  fmuls 1, 1, 2
  03e84ec  fdivs 31, 31, 1
  03e84f0  fcmpu 0, 31, 30
  03e84f4  cror 6, 0, 2
  03e84f8  bt 6, 0x3e8504
  03e84fc  fmr 31, 30
  03e8500  b 0x3e8518
  03e8504  lfs 1, 8(29)
  03e8508  fcmpu 0, 31, 1
  03e850c  cror 6, 1, 2
  03e8510  bt 6, 0x3e8518
  03e8514  fmr 31, 1
  03e8518  fmr 1, 31
  03e851c  clrlwi 3, 21, 8
  03e8520  ori 4, 21, 0
  03e8524  bl 0x5027bc
  03e8528  nop
  03e852c  lfs 31, 12(29)
  03e8530  lfs 19, 16(29)
  03e8534  ori 25, 28, 0
  03e8538  lfs 20, 20(29)
  03e853c  lis 23, 133
  03e8540  lfs 21, 24(29)
  03e8544  lis 24, 133
  03e8548  lfs 22, 28(29)
  03e854c  ori 26, 25, 0
  03e8550  lfs 23, 32(29)
  03e8554  ori 21, 3, 0
  03e8558  lfs 24, 36(29)
  03e855c  ori 22, 30, 0
  03e8560  lfs 25, 40(29)
  03e8564  lis 31, 133
  03e8568  lfs 26, 44(29)
  03e856c  addic 23, 23, 16112
  03e8570  addic 24, 24, 16116
  03e8574  fmuls 27, 27, 31
  03e8578  ori 27, 26, 0
  03e857c  clrlwi 3, 22, 31
  03e8580  lfs 1, 0(23)
  03e8584  lfs 2, 0(24)
  03e8588  cmpwi 3, 0
  03e858c  stfs 1, 320(25)
  03e8590  stfs 2, 324(25)
  03e8594  bt 2, 0x3e85a8
  03e8598  lis 3, 133
  03e859c  lfs 1, 16148(3)
  03e85a0  fmuls 1, 1, 29
  03e85a4  b 0x3e85b8
  03e85a8  lis 3, 133
  03e85ac  lfs 1, 16148(3)
  03e85b0  fmuls 1, 1, 29
  03e85b4  fneg 1, 1
  03e85b8  srawi 3, 22, 1
  03e85bc  extsw 3, 3
  03e85c0  std 3, 816(1)
  03e85c4  stfs 1, 248(26)
  03e85c8  lfs 2, 16108(31)
  03e85cc  lfd 3, 816(1)
  03e85d0  fmuls 1, 2, 31
  03e85d4  fcfid 3, 3
  03e85d8  fmuls 2, 2, 27
  03e85dc  frsp 3, 3
  03e85e0  fmsubs 1, 1, 3, 19
  03e85e4  bl 0x502578
  03e85e8  nop
  03e85ec  fadds 2, 1, 20
  03e85f0  fsubs 3, 21, 1
  03e85f4  fsubs 4, 22, 1
  03e85f8  lis 3, 16256
  03e85fc  stw 21, 304(27)
  03e8600  addic 22, 22, 1
  03e8604  addic 23, 23, 8
  03e8608  fsubs 5, 21, 2
  03e860c  fsub 6, 1, 3
  03e8610  fsubs 7, 22, 2
  03e8614  stw 3, 252(26)
  03e8618  cmpwi 22, 4
  03e861c  addic 25, 25, 8
  03e8620  addic 24, 24, 8
  03e8624  addic 27, 27, 4
  03e8628  fsub 8, 2, 5
  03e862c  fsel 1, 6, 3, 1
  03e8630  fsel 2, 8, 5, 2
  03e8634  fsub 3, 4, 1
  03e8638  fsub 5, 7, 2
  03e863c  fsel 1, 3, 4, 1
  03e8640  fsel 2, 5, 7, 2
  03e8644  fmuls 3, 1, 1
  03e8648  fmuls 4, 2, 2
  03e864c  fmuls 5, 3, 1
  03e8650  fmuls 6, 4, 2
  03e8654  fmuls 7, 3, 5
  03e8658  fmadds 1, 5, 23, 1
  03e865c  fmuls 5, 4, 6
  03e8660  fmadds 2, 6, 23, 2
  03e8664  fmuls 6, 3, 7
  03e8668  fmadds 1, 7, 24, 1
  03e866c  fmuls 7, 4, 5
  03e8670  fmadds 2, 5, 24, 2
  03e8674  fmuls 3, 3, 6
  03e8678  fmadds 1, 6, 25, 1
  03e867c  fmuls 4, 4, 7
  03e8680  fmadds 2, 7, 25, 2
  03e8684  fmadds 1, 3, 26, 1
  03e8688  fmadds 2, 4, 26, 2
  03e868c  fmuls 1, 1, 28
  03e8690  fmuls 2, 2, 28
  03e8694  stfs 1, 244(26)
  03e8698  stfs 2, 240(26)
  03e869c  addic 26, 26, 16
  03e86a0  bt 0, 0x3e857c
  03e86a4  addic 20, 20, 1
  03e86a8  addic 28, 28, 144
  03e86ac  cmpwi 20, 4
  03e86b0  bt 0, 0x3e8388
  03e86b4  lfs 1, 16108(31)
  03e86b8  stw 30, 120(1)
  03e86bc  addic 3, 1, 128
  03e86c0  fmuls 1, 1, 31
  03e86c4  stw 30, 124(1)
  03e86c8  stw 30, 116(1)
  03e86cc  addic 4, 1, 112
  03e86d0  stw 30, 112(1)
  03e86d4  stfs 1, 120(1)
  03e86d8  bl 0x500b64
  03e86dc  nop
  03e86e0  li 3, 16108
  03e86e4  vspltisw 5, -1
  03e86e8  li 4, 52
  03e86ec  vspltisw 7, -1
  03e86f0  vspltisw 8, -1
  03e86f4  vslw 5, 5, 5
  03e86f8  <unknown>
  03e86fc  <unknown>
  03e8700  vrefp 3, 2
  03e8704  vspltw 4, 4, 0
  03e8708  vslw 7, 7, 7
  03e870c  li 3, 48
  03e8710  vspltisw 10, 0
  03e8714  vnmsubfp 6, 3, 2, 4
  03e8718  vmaddfp 3, 3, 6, 5
  03e871c  vslw 6, 8, 8
  03e8720  vspltisw 8, -1
  03e8724  <unknown>
  03e8728  vspltw 5, 5, 0
  03e872c  vslw 8, 8, 8
  03e8730  lfs 31, 48(29)
  03e8734  vnmsubfp 9, 3, 2, 4
  03e8738  vmaddfp 3, 3, 9, 7
  03e873c  vnmsubfp 2, 3, 2, 4
  03e8740  vmaddfp 2, 3, 2, 6
  03e8744  vmaddfp 2, 2, 5, 8
  03e8748  vspltw 2, 2, 0
  03e874c  vcmpgefp. 2, 10, 2
  03e8750  bf 26, 0x3e880c
  03e8754  lis 29, 161
  03e8758  addic 29, 29, 24396
  03e875c  addic 28, 1, 176
  03e8760  addic 3, 1, 240
  03e8764  lwz 6, 28(29)
  03e8768  ori 4, 28, 0
  03e876c  li 5, 0
  03e8770  li 7, 9
  03e8774  bl 0x72280
  03e8778  nop
  03e877c  lwz 6, 28(29)
  03e8780  addic 3, 1, 384
  03e8784  ori 4, 28, 0
  03e8788  li 5, 0
  03e878c  li 7, 9
  03e8790  bl 0x72280
  03e8794  nop
  03e8798  lwz 6, 28(29)
  03e879c  addic 3, 1, 528
  03e87a0  ori 4, 28, 0
  03e87a4  li 5, 0
  03e87a8  li 7, 9
  03e87ac  bl 0x72280
  03e87b0  nop
  03e87b4  lwz 6, 28(29)
  03e87b8  addic 3, 1, 672
  03e87bc  ori 4, 28, 0
  03e87c0  li 5, 0
  03e87c4  li 7, 9
  03e87c8  bl 0x72280
  03e87cc  nop
  03e87d0  addic 5, 1, 128
  03e87d4  ori 3, 28, 0
  03e87d8  ori 4, 28, 0
  03e87dc  bl 0x5014d4
  03e87e0  nop
  03e87e4  lfs 1, 16108(31)
  03e87e8  addic 30, 30, 1
  03e87ec  fdivs 1, 31, 1
  03e87f0  extsw 3, 30
  03e87f4  std 3, 816(1)
  03e87f8  lfd 2, 816(1)
  03e87fc  fcfid 2, 2
  03e8800  frsp 2, 2
  03e8804  fcmpu 0, 2, 1
  03e8808  bt 0, 0x3e875c
  03e880c  ld 0, 1056(1)
  03e8810  mtlr 0
  03e8814  lfd 19, 936(1)
  03e8818  lfd 20, 944(1)
  03e881c  lfd 21, 952(1)
  03e8820  lfd 22, 960(1)
  03e8824  lfd 23, 968(1)
  03e8828  lfd 24, 976(1)
  03e882c  lfd 25, 984(1)
  03e8830  lfd 26, 992(1)
  03e8834  lfd 27, 1000(1)
  03e8838  lfd 28, 1008(1)
  03e883c  lfd 29, 1016(1)
  03e8840  lfd 30, 1024(1)
  03e8844  lfd 31, 1032(1)
  03e8848  ld 19, 832(1)
  03e884c  ld 20, 840(1)
  03e8850  ld 21, 848(1)
  03e8854  ld 22, 856(1)
  03e8858  ld 23, 864(1)
  03e885c  ld 24, 872(1)
  03e8860  ld 25, 880(1)
  03e8864  ld 26, 888(1)
  03e8868  ld 27, 896(1)
  03e886c  ld 28, 904(1)
  03e8870  ld 29, 912(1)
  03e8874  ld 30, 920(1)
  03e8878  ld 31, 928(1)
  03e887c  addi 1, 1, 1040
  03e8880  blr

M625_003e8884:   # 0x3e8884, 0x14 bytes
  03e8884  lis 3, 133
  03e8888  lis 4, 1
  03e888c  addic 3, 3, 16196
  03e8890  stw 4, 72(3)
  03e8894  blr

M625_003e88a8:   # 0x3e88a8, 0x18c bytes
  03e88a8  stdu 1, -192(1)
  03e88ac  mflr 0
  03e88b0  std 0, 208(1)
  03e88b4  stfd 31, 184(1)
  03e88b8  std 31, 176(1)
  03e88bc  std 29, 160(1)
  03e88c0  ori 31, 3, 0
  03e88c4  li 4, 0
  03e88c8  std 30, 168(1)
  03e88cc  ori 29, 4, 0
  03e88d0  lwz 30, 120(31)
  03e88d4  ori 3, 30, 0
  03e88d8  lwz 5, 416(3)
  03e88dc  cmpwi 5, 0
  03e88e0  bt 2, 0x3e8908
  03e88e4  lbz 6, 0(5)
  03e88e8  cmpwi 6, 2
  03e88ec  bt 2, 0x3e88f8
  03e88f0  stw 29, 416(3)
  03e88f4  b 0x3e8908
  03e88f8  lhz 5, 50(5)
  03e88fc  cmpwi 5, 0
  03e8900  bf 2, 0x3e8908
  03e8904  stw 29, 416(3)
  03e8908  addic 4, 4, 1
  03e890c  addic 3, 3, 4
  03e8910  cmpwi 4, 8
  03e8914  bt 0, 0x3e88d8
  03e8918  lis 3, 151
  03e891c  addic 3, 3, -25376
  03e8920  lwz 4, 4440(3)
  03e8924  cmpwi 4, 6
  03e8928  bt 2, 0x3e8a14
  03e892c  lfs 1, 132(3)
  03e8930  lfs 2, 20(31)
  03e8934  lfs 3, 128(3)
  03e8938  fsubs 1, 1, 2
  03e893c  lfs 2, 16(31)
  03e8940  fsubs 2, 3, 2
  03e8944  li 4, 1
  03e8948  lwz 3, 144(1)
  03e894c  lis 6, 63
  03e8950  stw 31, 128(1)
  03e8954  lis 5, 16256
  03e8958  ori 3, 3, 1
  03e895c  stw 4, 132(1)
  03e8960  fmuls 3, 1, 1
  03e8964  stw 3, 144(1)
  03e8968  addi 3, 6, -30568
  03e896c  stw 5, 140(1)
  03e8970  stfs 2, 112(1)
  03e8974  lfs 4, 4(3)
  03e8978  fmadds 3, 2, 2, 3
  03e897c  lfs 5, 0(3)
  03e8980  lis 6, 17839
  03e8984  stw 5, 120(1)
  03e8988  stb 29, 136(1)
  03e898c  ori 5, 6, 57190
  03e8990  stb 4, 137(1)
  03e8994  fsqrts 3, 3
  03e8998  stw 5, 124(1)
  03e899c  lhz 4, 166(31)
  03e89a0  sth 4, 138(1)
  03e89a4  fdivs 4, 4, 3
  03e89a8  fsub 6, 5, 3
  03e89ac  fsub 7, 5, 3
  03e89b0  fsub 8, 3, 5
  03e89b4  fsub 3, 3, 5
  03e89b8  fmuls 2, 2, 4
  03e89bc  fmuls 1, 1, 4
  03e89c0  fsel 4, 6, 5, 2
  03e89c4  fsel 5, 7, 5, 1
  03e89c8  fsel 2, 8, 4, 2
  03e89cc  fsel 1, 3, 5, 1
  03e89d0  stfs 2, 112(1)
  03e89d4  stfs 1, 116(1)
  03e89d8  lfs 31, 8(3)
  03e89dc  lwz 3, 416(30)
  03e89e0  cmpwi 3, 0
  03e89e4  bt 2, 0x3e8a04
  03e89e8  fmr 1, 31
  03e89ec  addic 3, 3, 16
  03e89f0  addic 7, 1, 112
  03e89f4  li 5, 0
  03e89f8  ori 6, 31, 0
  03e89fc  bl 0x5e598
  03e8a00  nop
  03e8a04  addic 29, 29, 1
  03e8a08  addic 30, 30, 4
  03e8a0c  cmpwi 29, 8
  03e8a10  bt 0, 0x3e89dc
  03e8a14  ld 0, 208(1)
  03e8a18  mtlr 0
  03e8a1c  lfd 31, 184(1)
  03e8a20  ld 29, 160(1)
  03e8a24  ld 30, 168(1)
  03e8a28  ld 31, 176(1)
  03e8a2c  addi 1, 1, 192
  03e8a30  blr

M625_003e8a88:   # 0x3e8a88, 0xb68 bytes
  03e8a88  stdu 1, -480(1)
  03e8a8c  mflr 0
  03e8a90  std 0, 496(1)
  03e8a94  stfd 14, 336(1)
  03e8a98  stfd 15, 344(1)
  03e8a9c  stfd 16, 352(1)
  03e8aa0  stfd 17, 360(1)
  03e8aa4  stfd 18, 368(1)
  03e8aa8  stfd 19, 376(1)
  03e8aac  stfd 20, 384(1)
  03e8ab0  stfd 21, 392(1)
  03e8ab4  stfd 22, 400(1)
  03e8ab8  stfd 23, 408(1)
  03e8abc  stfd 24, 416(1)
  03e8ac0  stfd 25, 424(1)
  03e8ac4  stfd 26, 432(1)
  03e8ac8  stfd 27, 440(1)
  03e8acc  stfd 28, 448(1)
  03e8ad0  stfd 29, 456(1)
  03e8ad4  stfd 30, 464(1)
  03e8ad8  stfd 31, 472(1)
  03e8adc  std 31, 328(1)
  03e8ae0  ori 31, 3, 0
  03e8ae4  std 28, 304(1)
  03e8ae8  lis 3, 63
  03e8aec  li 28, 0
  03e8af0  addi 6, 3, -30156
  03e8af4  std 30, 320(1)
  03e8af8  ori 3, 31, 0
  03e8afc  lwz 30, 120(31)
  03e8b00  lis 4, 33
  03e8b04  li 5, 0
  03e8b08  lfs 14, 0(6)
  03e8b0c  std 29, 312(1)
  03e8b10  std 27, 296(1)
  03e8b14  std 26, 288(1)
  03e8b18  std 25, 280(1)
  03e8b1c  std 24, 272(1)
  03e8b20  stw 28, 212(1)
  03e8b24  bl 0x10675c
  03e8b28  nop
  03e8b2c  ori 29, 3, 0
  03e8b30  lwz 3, 388(30)
  03e8b34  cmpwi 3, 0
  03e8b38  bt 2, 0x3e8b50
  03e8b3c  lis 4, 33
  03e8b40  li 5, 0
  03e8b44  bl 0x10675c
  03e8b48  nop
  03e8b4c  ori 28, 3, 0
  03e8b50  lwz 4, 392(30)
  03e8b54  li 3, 0
  03e8b58  cmpwi 4, 0
  03e8b5c  bt 2, 0x3e8b74
  03e8b60  ori 3, 4, 0
  03e8b64  lis 4, 33
  03e8b68  li 5, 0
  03e8b6c  bl 0x10675c
  03e8b70  nop
  03e8b74  ori 5, 3, 0
  03e8b78  ori 3, 29, 0
  03e8b7c  ori 4, 28, 0
  03e8b80  li 6, 0
  03e8b84  bl 0x11050c
  03e8b88  nop
  03e8b8c  ori 29, 3, 0
  03e8b90  cmpwi 29, 0
  03e8b94  bt 2, 0x3e8be0
  03e8b98  lwz 4, 32(29)
  03e8b9c  li 3, 0
  03e8ba0  subc 4, 31, 4
  03e8ba4  subc 3, 3, 29
  03e8ba8  cntlzw 4, 4
  03e8bac  sldi 4, 4, 58
  03e8bb0  sradi 4, 4, 63
  03e8bb4  and 3, 4, 3
  03e8bb8  addc 29, 29, 3
  03e8bbc  lwz 3, 32(29)
  03e8bc0  cmpwi 3, 0
  03e8bc4  bt 2, 0x3e8be0
  03e8bc8  lhz 3, 166(3)
  03e8bcc  cmpwi 3, 71
  03e8bd0  cmpwi 1, 3, 0
  03e8bd4  bt 2, 0x3e8bdc
  03e8bd8  bf 6, 0x3e8be0
  03e8bdc  li 29, 0
  03e8be0  ori 3, 31, 0
  03e8be4  addic 5, 30, 32
  03e8be8  li 6, 0
  03e8bec  addic 7, 1, 208
  03e8bf0  li 9, 0
  03e8bf4  addic 8, 1, 212
  03e8bf8  ori 4, 29, 0
  03e8bfc  li 10, 4
  03e8c00  bl 0x106840
  03e8c04  nop
  03e8c08  lwz 3, 208(1)
  03e8c0c  cmpwi 3, 1
  03e8c10  bt 2, 0x3e9160
  03e8c14  lbz 3, 32(31)
  03e8c18  cmpwi 3, 3
  03e8c1c  bt 2, 0x3e9160
  03e8c20  lwz 3, 212(1)
  03e8c24  lfs 1, 32(30)
  03e8c28  lfs 2, 212(1)
  03e8c2c  cmpwi 1, 3, 0
  03e8c30  fsubs 1, 1, 2
  03e8c34  fcmpu 0, 1, 14
  03e8c38  stfs 1, 32(30)
  03e8c3c  crnand 2, 1, 5
  03e8c40  bt 2, 0x3e8c74
  03e8c44  ori 5, 31, 0
  03e8c48  li 3, 2
  03e8c4c  li 4, 0
  03e8c50  bl 0x15d12c
  03e8c54  nop
  03e8c58  li 5, 200
  03e8c5c  addic 4, 30, 96
  03e8c60  ori 3, 31, 0
  03e8c64  stb 5, 103(30)
  03e8c68  bl 0x10c808
  03e8c6c  nop
  03e8c70  b 0x3e9160
  03e8c74  li 3, 3
  03e8c78  li 4, 0
  03e8c7c  ori 5, 31, 0
  03e8c80  bl 0x15d12c
  03e8c84  nop
  03e8c88  ori 3, 31, 0
  03e8c8c  li 4, 0
  03e8c90  li 5, -1
  03e8c94  bl 0xfd8d0
  03e8c98  nop
  03e8c9c  lis 3, 63
  03e8ca0  lfs 1, 16(31)
  03e8ca4  li 25, -1
  03e8ca8  addi 29, 3, -30156
  03e8cac  lfs 2, 20(31)
  03e8cb0  stfs 1, 192(1)
  03e8cb4  li 27, 1
  03e8cb8  lfs 1, 28(31)
  03e8cbc  li 24, 0
  03e8cc0  stfs 2, 196(1)
  03e8cc4  addic 28, 30, 64
  03e8cc8  stfs 1, 204(1)
  03e8ccc  addic 26, 1, 192
  03e8cd0  lfs 1, 4(29)
  03e8cd4  ori 3, 31, 0
  03e8cd8  lfs 2, 24(31)
  03e8cdc  li 8, 20
  03e8ce0  std 25, 144(1)
  03e8ce4  ori 4, 28, 0
  03e8ce8  fadds 3, 2, 1
  03e8cec  ori 5, 26, 0
  03e8cf0  fmr 1, 14
  03e8cf4  li 9, 8
  03e8cf8  fmr 2, 14
  03e8cfc  li 10, 20
  03e8d00  stfs 3, 200(1)
  03e8d04  lfs 31, 8(29)
  03e8d08  lfs 30, 12(29)
  03e8d0c  lfs 29, 16(29)
  03e8d10  lfs 28, 20(29)
  03e8d14  fmr 3, 31
  03e8d18  lfs 27, 24(29)
  03e8d1c  fmr 4, 30
  03e8d20  std 27, 160(1)
  03e8d24  fmr 5, 29
  03e8d28  std 27, 168(1)
  03e8d2c  fmr 6, 28
  03e8d30  std 25, 176(1)
  03e8d34  fmr 7, 27
  03e8d38  std 24, 184(1)
  03e8d3c  bl 0x10e030
  03e8d40  nop
  03e8d44  lfs 26, 28(29)
  03e8d48  lfs 2, 72(31)
  03e8d4c  lfs 25, 32(29)
  03e8d50  fadds 1, 2, 26
  03e8d54  lfs 24, 36(29)
  03e8d58  fsubs 3, 25, 2
  03e8d5c  fsubs 7, 24, 2
  03e8d60  lfs 23, 40(29)
  03e8d64  lfs 22, 44(29)
  03e8d68  lfs 21, 48(29)
  03e8d6c  ori 3, 31, 0
  03e8d70  fsubs 4, 25, 1
  03e8d74  fsub 6, 2, 3
  03e8d78  fsubs 5, 24, 1
  03e8d7c  ori 4, 28, 0
  03e8d80  ori 5, 26, 0
  03e8d84  li 8, 20
  03e8d88  li 9, 8
  03e8d8c  li 10, 20
  03e8d90  fsub 8, 1, 4
  03e8d94  fsel 2, 6, 3, 2
  03e8d98  fsel 1, 8, 4, 1
  03e8d9c  fsub 4, 7, 2
  03e8da0  fsub 3, 5, 1
  03e8da4  fsel 2, 4, 7, 2
  03e8da8  fsel 1, 3, 5, 1
  03e8dac  fmuls 4, 2, 2
  03e8db0  lfs 5, 16(31)
  03e8db4  lfs 7, 20(31)
  03e8db8  lfs 20, 52(29)
  03e8dbc  fmuls 3, 1, 1
  03e8dc0  fmuls 6, 4, 2
  03e8dc4  fmuls 9, 3, 1
  03e8dc8  fmuls 8, 4, 6
  03e8dcc  fmadds 2, 6, 23, 2
  03e8dd0  lfs 6, 24(31)
  03e8dd4  fmuls 10, 3, 9
  03e8dd8  fmadds 1, 9, 23, 1
  03e8ddc  fmuls 9, 4, 8
  03e8de0  fmadds 2, 8, 22, 2
  03e8de4  lfs 8, 28(31)
  03e8de8  stfs 8, 204(1)
  03e8dec  stfs 6, 200(1)
  03e8df0  std 25, 144(1)
  03e8df4  fmr 6, 28
  03e8df8  fmuls 11, 3, 10
  03e8dfc  fmadds 1, 10, 22, 1
  03e8e00  fmuls 4, 4, 9
  03e8e04  fmadds 2, 9, 21, 2
  03e8e08  std 27, 160(1)
  03e8e0c  fmuls 3, 3, 11
  03e8e10  fmadds 1, 11, 21, 1
  03e8e14  fmadds 2, 4, 20, 2
  03e8e18  fmr 4, 30
  03e8e1c  fmadds 3, 3, 20, 1
  03e8e20  fmr 1, 14
  03e8e24  fmadds 7, 2, 30, 7
  03e8e28  fmr 2, 14
  03e8e2c  fmadds 8, 3, 30, 5
  03e8e30  fmr 3, 31
  03e8e34  fmr 5, 29
  03e8e38  stfs 7, 196(1)
  03e8e3c  std 27, 168(1)
  03e8e40  std 25, 176(1)
  03e8e44  fmr 7, 27
  03e8e48  std 24, 184(1)
  03e8e4c  stfs 8, 192(1)
  03e8e50  bl 0x10e030
  03e8e54  nop
  03e8e58  lfs 19, 16(31)
  03e8e5c  lfs 1, 20(31)
  03e8e60  stfs 19, 192(1)
  03e8e64  lfs 2, 24(31)
  03e8e68  stfs 1, 196(1)
  03e8e6c  lfs 1, 28(31)
  03e8e70  stfs 2, 200(1)
  03e8e74  stfs 1, 204(1)
  03e8e78  lfs 18, 56(29)
  03e8e7c  lfs 1, 72(31)
  03e8e80  fmr 2, 18
  03e8e84  bl 0x502578
  03e8e88  nop
  03e8e8c  fadds 1, 1, 26
  03e8e90  fsubs 2, 25, 1
  03e8e94  fsubs 3, 24, 1
  03e8e98  fsub 4, 1, 2
  03e8e9c  fsel 1, 4, 2, 1
  03e8ea0  fsub 2, 3, 1
  03e8ea4  fsel 2, 2, 3, 1
  03e8ea8  lfs 1, 72(31)
  03e8eac  lfs 26, 196(1)
  03e8eb0  fmuls 3, 2, 2
  03e8eb4  fmuls 4, 3, 2
  03e8eb8  fmuls 5, 3, 4
  03e8ebc  fmadds 4, 4, 23, 2
  03e8ec0  fmr 2, 18
  03e8ec4  fmuls 6, 3, 5
  03e8ec8  fmadds 4, 5, 22, 4
  03e8ecc  fmuls 3, 3, 6
  03e8ed0  fmadds 4, 6, 21, 4
  03e8ed4  fmadds 3, 3, 20, 4
  03e8ed8  fmadds 3, 3, 30, 19
  03e8edc  stfs 3, 192(1)
  03e8ee0  bl 0x502578
  03e8ee4  nop
  03e8ee8  fsubs 2, 25, 1
  03e8eec  fsubs 3, 24, 1
  03e8ef0  std 25, 144(1)
  03e8ef4  ori 3, 31, 0
  03e8ef8  std 27, 160(1)
  03e8efc  ori 4, 28, 0
  03e8f00  std 27, 168(1)
  03e8f04  ori 5, 26, 0
  03e8f08  std 25, 176(1)
  03e8f0c  li 8, 20
  03e8f10  std 24, 184(1)
  03e8f14  li 9, 8
  03e8f18  fsub 4, 1, 2
  03e8f1c  li 10, 20
  03e8f20  fmr 7, 27
  03e8f24  fsel 1, 4, 2, 1
  03e8f28  fsub 2, 3, 1
  03e8f2c  fsel 1, 2, 3, 1
  03e8f30  fmuls 4, 1, 1
  03e8f34  fmuls 2, 4, 1
  03e8f38  fmuls 3, 4, 2
  03e8f3c  fmadds 2, 2, 23, 1
  03e8f40  fmr 1, 14
  03e8f44  fmuls 5, 4, 3
  03e8f48  fmadds 6, 3, 22, 2
  03e8f4c  fmr 2, 14
  03e8f50  fmr 3, 31
  03e8f54  fmuls 8, 4, 5
  03e8f58  fmadds 9, 5, 21, 6
  03e8f5c  fmr 4, 30
  03e8f60  fmr 5, 29
  03e8f64  fmr 6, 28
  03e8f68  fmadds 8, 8, 20, 9
  03e8f6c  fmadds 8, 8, 30, 26
  03e8f70  stfs 8, 196(1)
  03e8f74  bl 0x10e030
  03e8f78  nop
  03e8f7c  lis 3, 133
  03e8f80  li 4, 16436
  03e8f84  vspltisw 4, -1
  03e8f88  li 5, 60
  03e8f8c  fmr 1, 14
  03e8f90  li 9, 414
  03e8f94  vslw 4, 4, 4
  03e8f98  <unknown>
  03e8f9c  <unknown>
  03e8fa0  vcfsx 2, 2, 0
  03e8fa4  lis 3, 114
  03e8fa8  vspltw 3, 3, 0
  03e8fac  li 4, -3056
  03e8fb0  lis 5, 161
  03e8fb4  li 11, 3
  03e8fb8  addic 28, 5, 23856
  03e8fbc  <unknown>
  03e8fc0  addic 29, 31, 16
  03e8fc4  addic 27, 31, 64
  03e8fc8  ori 3, 31, 0
  03e8fcc  li 4, 1757
  03e8fd0  vaddfp 2, 2, 3
  03e8fd4  ori 10, 28, 0
  03e8fd8  ori 5, 29, 0
  03e8fdc  ori 6, 27, 0
  03e8fe0  li 7, 0
  03e8fe4  li 8, 0
  03e8fe8  vmaddfp 2, 5, 2, 4
  03e8fec  vctsxs 2, 2, 0
  03e8ff0  vsplth 2, 2, 1
  03e8ff4  stvehx 2, 9, 30
  03e8ff8  stb 11, 32(31)
  03e8ffc  std 28, 112(1)
  03e9000  std 28, 120(1)
  03e9004  bl 0x11a560
  03e9008  nop
  03e900c  std 28, 112(1)
  03e9010  std 28, 120(1)
  03e9014  ori 3, 31, 0
  03e9018  li 4, 1759
  03e901c  fmr 1, 14
  03e9020  ori 10, 28, 0
  03e9024  ori 5, 29, 0
  03e9028  ori 6, 27, 0
  03e902c  li 7, 0
  03e9030  li 8, 0
  03e9034  bl 0x11a560
  03e9038  nop
  03e903c  std 28, 112(1)
  03e9040  std 28, 120(1)
  03e9044  ori 3, 31, 0
  03e9048  li 4, 1760
  03e904c  fmr 1, 14
  03e9050  ori 10, 28, 0
  03e9054  ori 5, 29, 0
  03e9058  ori 6, 27, 0
  03e905c  li 7, 0
  03e9060  li 8, 0
  03e9064  bl 0x11a560
  03e9068  nop
  03e906c  std 28, 112(1)
  03e9070  std 28, 120(1)
  03e9074  ori 3, 31, 0
  03e9078  li 4, 1790
  03e907c  fmr 1, 14
  03e9080  ori 10, 28, 0
  03e9084  ori 5, 29, 0
  03e9088  ori 6, 27, 0
  03e908c  li 7, 0
  03e9090  li 8, 0
  03e9094  bl 0x11a560
  03e9098  nop
  03e909c  std 28, 112(1)
  03e90a0  std 28, 120(1)
  03e90a4  ori 3, 31, 0
  03e90a8  li 4, 1790
  03e90ac  fmr 1, 14
  03e90b0  ori 10, 28, 0
  03e90b4  ori 5, 29, 0
  03e90b8  ori 6, 27, 0
  03e90bc  li 7, 0
  03e90c0  li 8, 0
  03e90c4  bl 0x11a560
  03e90c8  nop
  03e90cc  std 28, 112(1)
  03e90d0  std 28, 120(1)
  03e90d4  ori 3, 31, 0
  03e90d8  li 4, 1791
  03e90dc  fmr 1, 14
  03e90e0  ori 10, 28, 0
  03e90e4  ori 5, 29, 0
  03e90e8  ori 6, 27, 0
  03e90ec  li 7, 0
  03e90f0  li 8, 0
  03e90f4  bl 0x11a560
  03e90f8  nop
  03e90fc  std 28, 112(1)
  03e9100  std 28, 120(1)
  03e9104  ori 3, 31, 0
  03e9108  li 4, 1791
  03e910c  fmr 1, 14
  03e9110  ori 10, 28, 0
  03e9114  ori 5, 29, 0
  03e9118  ori 6, 27, 0
  03e911c  li 7, 0
  03e9120  li 8, 0
  03e9124  bl 0x11a560
  03e9128  nop
  03e912c  std 28, 112(1)
  03e9130  ori 3, 31, 0
  03e9134  fmr 1, 14
  03e9138  li 4, 1791
  03e913c  std 28, 120(1)
  03e9140  ori 10, 28, 0
  03e9144  ori 5, 29, 0
  03e9148  ori 6, 27, 0
  03e914c  li 7, 0
  03e9150  li 8, 0
  03e9154  bl 0x11a560
  03e9158  nop
  03e915c  b 0x3e9578
  03e9160  li 3, 255
  03e9164  stb 3, 164(31)
  03e9168  lwz 3, 388(30)
  03e916c  cmpwi 3, 0
  03e9170  bt 2, 0x3e917c
  03e9174  li 4, 255
  03e9178  stb 4, 164(3)
  03e917c  lwz 3, 392(30)
  03e9180  cmpwi 3, 0
  03e9184  bt 2, 0x3e9190
  03e9188  li 4, 255
  03e918c  stb 4, 164(3)
  03e9190  lwz 3, 56(30)
  03e9194  cmpwi 3, 0
  03e9198  bt 2, 0x3e93e4
  03e919c  lwz 3, 376(30)
  03e91a0  cmpwi 3, 0
  03e91a4  bf 2, 0x3e93e4
  03e91a8  lis 3, 63
  03e91ac  li 4, 64
  03e91b0  vspltisw 2, -1
  03e91b4  addi 3, 3, -30156
  03e91b8  lis 5, 114
  03e91bc  li 6, -3056
  03e91c0  vslw 2, 2, 2
  03e91c4  <unknown>
  03e91c8  lis 4, 151
  03e91cc  vspltw 3, 3, 0
  03e91d0  li 3, 376
  03e91d4  <unknown>
  03e91d8  addic 4, 4, -25376
  03e91dc  li 5, 0
  03e91e0  vmaddfp 2, 4, 3, 2
  03e91e4  vctsxs 2, 2, 0
  03e91e8  vspltw 2, 2, 0
  03e91ec  stvewx 2, 3, 30
  03e91f0  lfs 1, 128(4)
  03e91f4  lfs 2, 16(31)
  03e91f8  lfs 3, 132(4)
  03e91fc  lfs 4, 20(31)
  03e9200  fsubs 1, 1, 2
  03e9204  stw 5, 56(30)
  03e9208  fsubs 2, 3, 4
  03e920c  lis 3, 115
  03e9210  addic 3, 3, 22784
  03e9214  fabs 3, 1
  03e9218  fabs 5, 2
  03e921c  stfs 1, 216(1)
  03e9220  stfs 2, 220(1)
  03e9224  lfs 4, 72(31)
  03e9228  fsubs 1, 3, 5
  03e922c  stfs 1, 224(1)
  03e9230  lwz 4, 216(1)
  03e9234  lfs 1, 216(1)
  03e9238  lwz 5, 220(1)
  03e923c  lfs 2, 220(1)
  03e9240  fabs 1, 1
  03e9244  lwz 6, 224(1)
  03e9248  rlwinm 5, 5, 3, 29, 29
  03e924c  lfs 6, 224(1)
  03e9250  fabs 2, 2
  03e9254  rlwimi 5, 6, 2, 30, 30
  03e9258  fsub 7, 6, 14
  03e925c  fsub 6, 6, 14
  03e9260  rlwimi 5, 4, 4, 28, 28
  03e9264  ori 4, 3, 0
  03e9268  rlwimi 4, 5, 2, 26, 28
  03e926c  slwi 5, 5, 2
  03e9270  clrldi 4, 4, 32
  03e9274  fsel 5, 7, 1, 5
  03e9278  lfsx 1, 3, 5
  03e927c  fsel 3, 6, 2, 3
  03e9280  lfs 2, 4(4)
  03e9284  fcmpu 0, 5, 14
  03e9288  bt 1, 0x3e9290
  03e928c  b 0x3e93b0
  03e9290  fsubs 6, 3, 5
  03e9294  fadds 3, 3, 5
  03e9298  addic 3, 1, 16
  03e929c  li 7, 2
  03e92a0  addic 5, 3, 228
  03e92a4  addic 4, 3, 212
  03e92a8  mtctr 7
  03e92ac  fdivs 3, 6, 3
  03e92b0  fmuls 5, 3, 3
  03e92b4  stfs 3, 240(1)
  03e92b8  stfs 3, 232(1)
  03e92bc  stfs 3, 236(1)
  03e92c0  stfs 3, 228(1)
  03e92c4  lfs 7, 240(1)
  03e92c8  lfs 8, 232(1)
  03e92cc  lfs 9, 236(1)
  03e92d0  fmuls 6, 5, 5
  03e92d4  fmuls 8, 8, 5
  03e92d8  fmuls 7, 7, 6
  03e92dc  fmuls 3, 6, 6
  03e92e0  fmuls 6, 9, 6
  03e92e4  stfs 8, 232(1)
  03e92e8  fmuls 5, 7, 5
  03e92ec  stfs 6, 236(1)
  03e92f0  stfs 5, 240(1)
  03e92f4  lfs 5, 212(3)
  03e92f8  fmuls 5, 5, 3
  03e92fc  stfs 5, 228(3)
  03e9300  lfs 5, 4(4)
  03e9304  addic 4, 4, 8
  03e9308  fmuls 5, 5, 3
  03e930c  addic 3, 3, 8
  03e9310  stfs 5, 4(5)
  03e9314  addic 5, 5, 8
  03e9318  bdnz 0x3e92f4
  03e931c  li 5, 4
  03e9320  ori 3, 1, 0
  03e9324  mtctr 5
  03e9328  lis 4, 115
  03e932c  addic 5, 3, 228
  03e9330  addic 4, 4, 22752
  03e9334  ori 6, 5, 0
  03e9338  lfs 3, 228(3)
  03e933c  lfs 5, 0(4)
  03e9340  fmuls 3, 3, 5
  03e9344  lfs 5, 4(4)
  03e9348  addic 4, 4, 8
  03e934c  stfs 3, 228(3)
  03e9350  lfs 3, 4(5)
  03e9354  addic 3, 3, 8
  03e9358  fmuls 3, 3, 5
  03e935c  stfs 3, 4(5)
  03e9360  addic 5, 5, 8
  03e9364  bdnz 0x3e9338
  03e9368  ori 3, 1, 0
  03e936c  mtctr 7
  03e9370  lfs 3, 228(3)
  03e9374  lfs 5, 4(6)
  03e9378  fadds 3, 14, 3
  03e937c  lfs 6, 8(6)
  03e9380  addic 3, 3, 16
  03e9384  lfs 14, 12(6)
  03e9388  addic 6, 6, 16
  03e938c  fadds 3, 3, 5
  03e9390  fadds 3, 3, 6
  03e9394  fadds 14, 3, 14
  03e9398  bdnz 0x3e9370
  03e939c  lis 3, 63
  03e93a0  addi 3, 3, -30156
  03e93a4  lfs 3, 68(3)
  03e93a8  fadds 14, 14, 3
  03e93ac  fmadds 14, 14, 1, 2
  03e93b0  fmr 1, 4
  03e93b4  fmr 2, 14
  03e93b8  bl 0x5026a0
  03e93bc  nop
  03e93c0  lis 3, 63
  03e93c4  addi 3, 3, -30156
  03e93c8  lfs 2, 72(3)
  03e93cc  fcmpu 0, 1, 2
  03e93d0  cror 6, 0, 2
  03e93d4  bt 6, 0x3e93e4
  03e93d8  lbz 3, 196(30)
  03e93dc  neg 3, 3
  03e93e0  stb 3, 196(30)
  03e93e4  addic 3, 30, 376
  03e93e8  bl 0x4fff60
  03e93ec  nop
  03e93f0  lis 4, 63
  03e93f4  ori 5, 3, 0
  03e93f8  addi 4, 4, -30156
  03e93fc  lwz 3, 388(30)
  03e9400  cmpwi 5, 0
  03e9404  lfs 1, 76(4)
  03e9408  bt 2, 0x3e9418
  03e940c  lis 4, 63
  03e9410  addi 4, 4, -30156
  03e9414  lfs 1, 80(4)
  03e9418  cmpwi 3, 0
  03e941c  stfs 1, 372(30)
  03e9420  bt 2, 0x3e94c0
  03e9424  lfs 1, 68(30)
  03e9428  lfs 2, 64(30)
  03e942c  fmuls 1, 1, 1
  03e9430  lfs 3, 72(30)
  03e9434  lis 4, 133
  03e9438  lis 5, 114
  03e943c  fmadds 1, 2, 2, 1
  03e9440  lfs 2, 16304(4)
  03e9444  lis 4, 133
  03e9448  fmadds 1, 3, 3, 1
  03e944c  lfs 3, -3052(5)
  03e9450  fmuls 2, 2, 3
  03e9454  fsqrts 1, 1
  03e9458  fdivs 1, 1, 2
  03e945c  stfs 1, 88(3)
  03e9460  lwz 3, 388(30)
  03e9464  lfs 1, 132(30)
  03e9468  lfs 2, 16308(4)
  03e946c  lfs 3, 88(3)
  03e9470  fmadds 1, 1, 2, 3
  03e9474  stfs 1, 88(3)
  03e9478  lwz 3, 388(30)
  03e947c  lfs 1, 64(31)
  03e9480  stfs 1, 64(3)
  03e9484  lfs 1, 68(31)
  03e9488  stfs 1, 68(3)
  03e948c  lfs 1, 72(31)
  03e9490  stfs 1, 72(3)
  03e9494  lfs 1, 76(31)
  03e9498  stfs 1, 76(3)
  03e949c  lwz 3, 388(30)
  03e94a0  lfs 1, 16(31)
  03e94a4  stfs 1, 16(3)
  03e94a8  lfs 1, 20(31)
  03e94ac  stfs 1, 20(3)
  03e94b0  lfs 1, 24(31)
  03e94b4  stfs 1, 24(3)
  03e94b8  lfs 1, 28(31)
  03e94bc  stfs 1, 28(3)
  03e94c0  lwz 3, 392(30)
  03e94c4  cmpwi 3, 0
  03e94c8  bt 2, 0x3e9568
  03e94cc  lfs 1, 68(30)
  03e94d0  lfs 2, 64(30)
  03e94d4  fmuls 1, 1, 1
  03e94d8  lfs 3, 72(30)
  03e94dc  lis 4, 133
  03e94e0  lis 5, 114
  03e94e4  fmadds 1, 2, 2, 1
  03e94e8  lfs 2, 16304(4)
  03e94ec  lis 4, 133
  03e94f0  fmadds 1, 3, 3, 1
  03e94f4  lfs 3, -3052(5)
  03e94f8  fmuls 2, 2, 3
  03e94fc  fsqrts 1, 1
  03e9500  fdivs 1, 1, 2
  03e9504  stfs 1, 88(3)
  03e9508  lwz 3, 392(30)
  03e950c  lfs 1, 132(30)
  03e9510  lfs 2, 16308(4)
  03e9514  lfs 3, 88(3)
  03e9518  fnmsubs 1, 1, 2, 3
  03e951c  stfs 1, 88(3)
  03e9520  lwz 3, 392(30)
  03e9524  lfs 1, 64(31)
  03e9528  stfs 1, 64(3)
  03e952c  lfs 1, 68(31)
  03e9530  stfs 1, 68(3)
  03e9534  lfs 1, 72(31)
  03e9538  stfs 1, 72(3)
  03e953c  lfs 1, 76(31)
  03e9540  stfs 1, 76(3)
  03e9544  lwz 3, 392(30)
  03e9548  lfs 1, 16(31)
  03e954c  stfs 1, 16(3)
  03e9550  lfs 1, 20(31)
  03e9554  stfs 1, 20(3)
  03e9558  lfs 1, 24(31)
  03e955c  stfs 1, 24(3)
  03e9560  lfs 1, 28(31)
  03e9564  stfs 1, 28(3)
  03e9568  addic 4, 30, 96
  03e956c  ori 3, 31, 0
  03e9570  bl 0x10c9a0
  03e9574  nop
  03e9578  ld 0, 496(1)
  03e957c  mtlr 0
  03e9580  lfd 14, 336(1)
  03e9584  lfd 15, 344(1)
  03e9588  lfd 16, 352(1)
  03e958c  lfd 17, 360(1)
  03e9590  lfd 18, 368(1)
  03e9594  lfd 19, 376(1)
  03e9598  lfd 20, 384(1)
  03e959c  lfd 21, 392(1)
  03e95a0  lfd 22, 400(1)
  03e95a4  lfd 23, 408(1)
  03e95a8  lfd 24, 416(1)
  03e95ac  lfd 25, 424(1)
  03e95b0  lfd 26, 432(1)
  03e95b4  lfd 27, 440(1)
  03e95b8  lfd 28, 448(1)
  03e95bc  lfd 29, 456(1)
  03e95c0  lfd 30, 464(1)
  03e95c4  lfd 31, 472(1)
  03e95c8  ld 24, 272(1)
  03e95cc  ld 25, 280(1)
  03e95d0  ld 26, 288(1)
  03e95d4  ld 27, 296(1)
  03e95d8  ld 28, 304(1)
  03e95dc  ld 29, 312(1)
  03e95e0  ld 30, 320(1)
  03e95e4  ld 31, 328(1)
  03e95e8  addi 1, 1, 480
  03e95ec  blr

UpdateMoby_625:   # 0x3e9668, 0x15c0 bytes
  03e9668  stdu 1, -544(1)
  03e966c  mflr 0
  03e9670  std 0, 560(1)
  03e9674  stfd 16, 416(1)
  03e9678  stfd 17, 424(1)
  03e967c  stfd 18, 432(1)
  03e9680  stfd 19, 440(1)
  03e9684  stfd 20, 448(1)
  03e9688  stfd 21, 456(1)
  03e968c  stfd 22, 464(1)
  03e9690  stfd 23, 472(1)
  03e9694  stfd 24, 480(1)
  03e9698  stfd 25, 488(1)
  03e969c  stfd 26, 496(1)
  03e96a0  stfd 27, 504(1)
  03e96a4  stfd 28, 512(1)
  03e96a8  stfd 29, 520(1)
  03e96ac  stfd 30, 528(1)
  03e96b0  stfd 31, 536(1)
  03e96b4  std 31, 408(1)
  03e96b8  std 27, 376(1)
  03e96bc  ori 31, 3, 0
  03e96c0  lis 27, 63
  03e96c4  std 30, 400(1)
  03e96c8  addi 27, 27, -27152
  03e96cc  std 29, 392(1)
  03e96d0  std 28, 384(1)
  03e96d4  std 26, 368(1)
  03e96d8  std 25, 360(1)
  03e96dc  std 24, 352(1)
  03e96e0  std 23, 344(1)
  03e96e4  std 22, 336(1)
  03e96e8  lwz 30, 120(31)
  03e96ec  bl 0x3e8a88
  03e96f0  ori 3, 31, 0
  03e96f4  bl 0x3e88a8
  03e96f8  lbz 3, 46(30)
  03e96fc  cmpwi 3, 2
  03e9700  bf 2, 0x3e9740
  03e9704  lwz 3, 388(30)
  03e9708  cmpwi 3, 0
  03e970c  bt 2, 0x3e9718
  03e9710  bl 0xefb38
  03e9714  nop
  03e9718  lwz 30, 392(30)
  03e971c  cmpwi 30, 0
  03e9720  bt 2, 0x3e9730
  03e9724  ori 3, 30, 0
  03e9728  bl 0xefb38
  03e972c  nop
  03e9730  ori 3, 31, 0
  03e9734  bl 0xefb38
  03e9738  nop
  03e973c  b 0x3eabb0
  03e9740  lbz 3, 49(31)
  03e9744  cmpwi 3, 0
  03e9748  bt 2, 0x3e97ac
  03e974c  lis 3, 149
  03e9750  lfs 1, 20(31)
  03e9754  addic 3, 3, 5056
  03e9758  lfs 2, 16(31)
  03e975c  lfs 3, 324(3)
  03e9760  lfs 4, 320(3)
  03e9764  fsubs 1, 1, 3
  03e9768  fsubs 2, 2, 4
  03e976c  lfs 3, 24(31)
  03e9770  lfs 4, 328(3)
  03e9774  fsubs 3, 3, 4
  03e9778  fmuls 1, 1, 1
  03e977c  fmadds 1, 2, 2, 1
  03e9780  lfs 2, 0(27)
  03e9784  fmadds 1, 3, 3, 1
  03e9788  fsqrts 1, 1
  03e978c  fcmpu 0, 1, 2
  03e9790  cror 6, 1, 2
  03e9794  bt 6, 0x3e97ac
  03e9798  ori 3, 31, 0
  03e979c  bl 0x106360
  03e97a0  nop
  03e97a4  li 3, 21
  03e97a8  stb 3, 127(31)
  03e97ac  lbz 3, 32(31)
  03e97b0  cmpwi 3, 1
  03e97b4  cmpwi 1, 3, -1
  03e97b8  cmpwi 6, 3, 0
  03e97bc  cmpwi 7, 3, 2
  03e97c0  bt 1, 0x3e97d0
  03e97c4  bf 5, 0x3eabb0
  03e97c8  bf 25, 0x3e97e0
  03e97cc  b 0x3e9adc
  03e97d0  bf 29, 0x3e9fa0
  03e97d4  cmpwi 3, 3
  03e97d8  bf 1, 0x3eab74
  03e97dc  b 0x3eabb0
  03e97e0  lwz 3, 388(30)
  03e97e4  cmpwi 3, 0
  03e97e8  bf 2, 0x3e9878
  03e97ec  li 3, 872
  03e97f0  bl 0xefa28
  03e97f4  nop
  03e97f8  li 4, 64
  03e97fc  stw 3, 388(30)
  03e9800  lis 6, 151
  03e9804  li 5, 1
  03e9808  stb 4, 48(3)
  03e980c  lwz 8, 388(30)
  03e9810  addic 3, 6, -25376
  03e9814  li 6, 16384
  03e9818  li 7, 0
  03e981c  sth 4, 50(8)
  03e9820  lwz 4, 388(30)
  03e9824  stb 5, 49(4)
  03e9828  lwz 3, 8320(3)
  03e982c  lwz 4, 388(30)
  03e9830  ld 3, 56(3)
  03e9834  std 3, 56(4)
  03e9838  lwz 3, 388(30)
  03e983c  sth 6, 52(3)
  03e9840  lwz 3, 388(30)
  03e9844  lfs 1, 16(31)
  03e9848  stfs 1, 16(3)
  03e984c  lfs 1, 20(31)
  03e9850  stfs 1, 20(3)
  03e9854  lfs 1, 24(31)
  03e9858  stfs 1, 24(3)
  03e985c  lfs 1, 28(31)
  03e9860  stfs 1, 28(3)
  03e9864  lwz 3, 388(30)
  03e9868  stw 7, 148(3)
  03e986c  lwz 3, 388(30)
  03e9870  bl 0xf31a8
  03e9874  nop
  03e9878  lwz 3, 392(30)
  03e987c  cmpwi 3, 0
  03e9880  bf 2, 0x3e9910
  03e9884  li 3, 873
  03e9888  bl 0xefa28
  03e988c  nop
  03e9890  li 4, 64
  03e9894  stw 3, 392(30)
  03e9898  lis 6, 151
  03e989c  li 5, 1
  03e98a0  stb 4, 48(3)
  03e98a4  lwz 8, 392(30)
  03e98a8  addic 3, 6, -25376
  03e98ac  li 6, 16384
  03e98b0  li 7, 0
  03e98b4  sth 4, 50(8)
  03e98b8  lwz 4, 392(30)
  03e98bc  stb 5, 49(4)
  03e98c0  lwz 3, 8320(3)
  03e98c4  lwz 4, 392(30)
  03e98c8  ld 3, 56(3)
  03e98cc  std 3, 56(4)
  03e98d0  lwz 3, 392(30)
  03e98d4  sth 6, 52(3)
  03e98d8  lwz 3, 392(30)
  03e98dc  lfs 1, 16(31)
  03e98e0  stfs 1, 16(3)
  03e98e4  lfs 1, 20(31)
  03e98e8  stfs 1, 20(3)
  03e98ec  lfs 1, 24(31)
  03e98f0  stfs 1, 24(3)
  03e98f4  lfs 1, 28(31)
  03e98f8  stfs 1, 28(3)
  03e98fc  lwz 3, 392(30)
  03e9900  stw 7, 148(3)
  03e9904  lwz 3, 392(30)
  03e9908  bl 0xf31a8
  03e990c  nop
  03e9910  li 4, 0
  03e9914  addic 5, 30, 240
  03e9918  ori 3, 31, 0
  03e991c  bl 0xf0ea8
  03e9920  nop
  03e9924  li 4, 1
  03e9928  addic 5, 30, 304
  03e992c  ori 3, 31, 0
  03e9930  bl 0xf0ea8
  03e9934  nop
  03e9938  lis 4, 151
  03e993c  lhz 3, 52(31)
  03e9940  addic 4, 4, -25376
  03e9944  ori 5, 3, 4096
  03e9948  addic 3, 30, 112
  03e994c  lwz 4, 8320(4)
  03e9950  sth 5, 52(31)
  03e9954  ld 4, 56(4)
  03e9958  std 4, 56(31)
  03e995c  bl 0x100f8c
  03e9960  nop
  03e9964  lis 3, 16384
  03e9968  lwz 4, 212(30)
  03e996c  lis 5, 16512
  03e9970  lis 6, 15395
  03e9974  lis 7, 165
  03e9978  stw 3, 124(30)
  03e997c  ori 6, 6, 55050
  03e9980  li 3, 909
  03e9984  stw 5, 120(30)
  03e9988  lis 5, 16025
  03e998c  slwi 4, 4, 2
  03e9990  ori 5, 5, 39322
  03e9994  stw 3, 112(30)
  03e9998  addic 3, 7, 7136
  03e999c  stw 6, 172(30)
  03e99a0  lis 7, 15820
  03e99a4  extsw 4, 4
  03e99a8  ori 6, 7, 52429
  03e99ac  stw 5, 176(30)
  03e99b0  li 7, 1
  03e99b4  stw 6, 180(30)
  03e99b8  lwzx 3, 3, 4
  03e99bc  stw 7, 192(30)
  03e99c0  stw 3, 208(30)
  03e99c4  lfs 1, 16(3)
  03e99c8  stfs 1, 16(31)
  03e99cc  lfs 1, 20(3)
  03e99d0  stfs 1, 20(31)
  03e99d4  lfs 1, 24(3)
  03e99d8  lbz 4, 83(31)
  03e99dc  stfs 1, 24(31)
  03e99e0  lfs 1, 28(3)
  03e99e4  cmpwi 4, 0
  03e99e8  stb 7, 32(31)
  03e99ec  stfs 1, 28(31)
  03e99f0  bt 2, 0x3e9a0c
  03e99f4  ori 3, 31, 0
  03e99f8  li 4, 0
  03e99fc  li 5, 0
  03e9a00  li 6, 0
  03e9a04  bl 0xfddc0
  03e9a08  nop
  03e9a0c  lis 3, 133
  03e9a10  lis 4, 114
  03e9a14  vspltisw 3, -1
  03e9a18  lis 5, 16576
  03e9a1c  li 6, 6
  03e9a20  li 7, 1
  03e9a24  lfs 1, 16312(3)
  03e9a28  lfs 2, -3052(4)
  03e9a2c  li 3, 0
  03e9a30  lhz 4, 62(30)
  03e9a34  li 8, 4
  03e9a38  fmuls 1, 1, 2
  03e9a3c  stw 5, 32(30)
  03e9a40  li 5, 3
  03e9a44  vslw 3, 3, 3
  03e9a48  stw 3, 76(30)
  03e9a4c  ori 4, 4, 2
  03e9a50  stw 3, 72(30)
  03e9a54  lis 9, 114
  03e9a58  stw 3, 68(30)
  03e9a5c  stw 3, 64(30)
  03e9a60  sth 6, 36(30)
  03e9a64  stb 5, 40(30)
  03e9a68  sth 4, 62(30)
  03e9a6c  li 6, -3056
  03e9a70  li 4, 384
  03e9a74  lis 5, 133
  03e9a78  stfs 1, 148(30)
  03e9a7c  stb 3, 41(30)
  03e9a80  stb 7, 46(30)
  03e9a84  <unknown>
  03e9a88  <unknown>
  03e9a8c  vspltw 2, 2, 0
  03e9a90  vmaddfp 2, 4, 2, 3
  03e9a94  vctsxs 2, 2, 0
  03e9a98  vspltw 2, 2, 0
  03e9a9c  stvewx 2, 4, 30
  03e9aa0  stw 3, 408(30)
  03e9aa4  lfs 1, 72(31)
  03e9aa8  stfs 1, 404(30)
  03e9aac  lfs 1, 16440(5)
  03e9ab0  bl 0x502758
  03e9ab4  nop
  03e9ab8  stb 3, 88(30)
  03e9abc  lis 3, 133
  03e9ac0  lfs 1, 8(27)
  03e9ac4  lfs 2, 16444(3)
  03e9ac8  fmuls 1, 2, 1
  03e9acc  bl 0x502758
  03e9ad0  nop
  03e9ad4  stb 3, 90(30)
  03e9ad8  b 0x3eabb0
  03e9adc  lwz 3, 208(30)
  03e9ae0  lwz 4, 192(30)
  03e9ae4  lbz 5, 196(30)
  03e9ae8  extsb 5, 5
  03e9aec  lwz 6, 0(3)
  03e9af0  addc 4, 4, 6
  03e9af4  addc 29, 4, 5
  03e9af8  divw 4, 29, 6
  03e9afc  mullw 4, 4, 6
  03e9b00  li 7, 0
  03e9b04  subc 29, 29, 4
  03e9b08  subc 5, 5, 7
  03e9b0c  addic 28, 6, -1
  03e9b10  sradi 4, 5, 63
  03e9b14  li 5, 0
  03e9b18  sldi 26, 29, 4
  03e9b1c  subc 5, 5, 28
  03e9b20  addc 7, 3, 26
  03e9b24  and 4, 4, 5
  03e9b28  addic 5, 7, 16
  03e9b2c  ori 3, 31, 0
  03e9b30  addc 28, 28, 4
  03e9b34  addic 6, 30, 64
  03e9b38  addic 4, 30, 112
  03e9b3c  clrldi 5, 5, 32
  03e9b40  bl 0x101cc0
  03e9b44  nop
  03e9b48  lwz 3, 208(30)
  03e9b4c  lfs 3, 20(31)
  03e9b50  addc 4, 3, 26
  03e9b54  lfs 2, 16(31)
  03e9b58  clrldi 4, 4, 32
  03e9b5c  lfs 1, 20(4)
  03e9b60  lfs 4, 16(4)
  03e9b64  fsubs 1, 3, 1
  03e9b68  fsubs 4, 2, 4
  03e9b6c  fmuls 1, 1, 1
  03e9b70  fmadds 1, 4, 4, 1
  03e9b74  lfs 4, 12(27)
  03e9b78  fsqrts 1, 1
  03e9b7c  fcmpu 0, 1, 4
  03e9b80  cror 6, 1, 2
  03e9b84  bt 6, 0x3e9bfc
  03e9b88  cmpw 29, 28
  03e9b8c  bf 2, 0x3e9bf0
  03e9b90  lwz 4, 0(3)
  03e9b94  lfs 1, 20(3)
  03e9b98  slwi 4, 4, 4
  03e9b9c  lfs 2, 16(3)
  03e9ba0  lfs 3, 24(3)
  03e9ba4  addc 4, 3, 4
  03e9ba8  clrldi 4, 4, 32
  03e9bac  lfs 4, 4(4)
  03e9bb0  lfs 5, 0(4)
  03e9bb4  fsubs 1, 4, 1
  03e9bb8  fsubs 2, 5, 2
  03e9bbc  lfs 4, 8(4)
  03e9bc0  fsubs 3, 4, 3
  03e9bc4  fmuls 1, 1, 1
  03e9bc8  fmadds 1, 2, 2, 1
  03e9bcc  lfs 2, 16(27)
  03e9bd0  fmadds 1, 3, 3, 1
  03e9bd4  fsqrts 1, 1
  03e9bd8  fcmpu 0, 1, 2
  03e9bdc  cror 6, 0, 2
  03e9be0  bt 6, 0x3e9bf0
  03e9be4  lbz 3, 196(30)
  03e9be8  neg 3, 3
  03e9bec  stb 3, 196(30)
  03e9bf0  stw 29, 192(30)
  03e9bf4  lfs 2, 16(31)
  03e9bf8  lfs 3, 20(31)
  03e9bfc  lis 29, 151
  03e9c00  addic 29, 29, -25376
  03e9c04  lfs 1, 132(29)
  03e9c08  lfs 4, 128(29)
  03e9c0c  fsubs 1, 3, 1
  03e9c10  fsubs 4, 2, 4
  03e9c14  fmuls 1, 1, 1
  03e9c18  fmadds 1, 4, 4, 1
  03e9c1c  lfs 4, 372(30)
  03e9c20  fsqrts 1, 1
  03e9c24  fcmpu 0, 1, 4
  03e9c28  cror 6, 1, 2
  03e9c2c  bt 6, 0x3e9d08
  03e9c30  lfs 1, 24(31)
  03e9c34  lfs 4, 136(29)
  03e9c38  lfs 5, 20(27)
  03e9c3c  fsubs 4, 1, 4
  03e9c40  fabs 4, 4
  03e9c44  fcmpu 0, 4, 5
  03e9c48  cror 6, 1, 2
  03e9c4c  bt 6, 0x3e9d08
  03e9c50  lwz 3, 400(30)
  03e9c54  cmpwi 3, -1
  03e9c58  bt 2, 0x3e9c9c
  03e9c5c  lis 4, 165
  03e9c60  slwi 3, 3, 2
  03e9c64  addic 4, 4, 7136
  03e9c68  extsw 3, 3
  03e9c6c  lwzx 6, 4, 3
  03e9c70  addic 3, 29, 128
  03e9c74  addic 4, 6, 16
  03e9c78  lwz 5, 0(6)
  03e9c7c  extsw 5, 5
  03e9c80  bl 0x104e44
  03e9c84  nop
  03e9c88  cmpwi 3, 0
  03e9c8c  bt 2, 0x3e9d08
  03e9c90  lfs 1, 24(31)
  03e9c94  lfs 2, 16(31)
  03e9c98  lfs 3, 20(31)
  03e9c9c  lfs 4, 28(31)
  03e9ca0  stfs 2, 128(1)
  03e9ca4  addic 3, 1, 128
  03e9ca8  stfs 3, 132(1)
  03e9cac  addic 4, 29, 208
  03e9cb0  stfs 4, 140(1)
  03e9cb4  li 5, 2
  03e9cb8  lfs 2, 24(27)
  03e9cbc  ori 6, 31, 0
  03e9cc0  li 7, 0
  03e9cc4  fadds 1, 1, 2
  03e9cc8  stfs 1, 136(1)
  03e9ccc  bl 0x57820
  03e9cd0  nop
  03e9cd4  cmpwi 3, 0
  03e9cd8  bf 2, 0x3e9d08
  03e9cdc  lbz 3, 83(31)
  03e9ce0  cmpwi 3, 0
  03e9ce4  bt 2, 0x3e9d00
  03e9ce8  ori 3, 31, 0
  03e9cec  li 4, 0
  03e9cf0  li 5, 0
  03e9cf4  li 6, 3
  03e9cf8  bl 0xfddc0
  03e9cfc  nop
  03e9d00  li 3, 2
  03e9d04  stb 3, 32(31)
  03e9d08  lfs 3, 20(31)
  03e9d0c  lfs 4, 132(29)
  03e9d10  lfs 1, 16(31)
  03e9d14  fsubs 5, 3, 4
  03e9d18  lfs 2, 128(29)
  03e9d1c  fsubs 6, 1, 2
  03e9d20  fmuls 5, 5, 5
  03e9d24  fmadds 5, 6, 6, 5
  03e9d28  lfs 6, 28(27)
  03e9d2c  fsqrts 5, 5
  03e9d30  fcmpu 0, 5, 6
  03e9d34  cror 6, 1, 2
  03e9d38  bt 6, 0x3e9f24
  03e9d3c  fsubs 1, 2, 1
  03e9d40  fsubs 2, 4, 3
  03e9d44  lis 3, 115
  03e9d48  addic 3, 3, 22784
  03e9d4c  fabs 4, 1
  03e9d50  fabs 5, 2
  03e9d54  stfs 1, 252(1)
  03e9d58  stfs 2, 256(1)
  03e9d5c  fsubs 1, 4, 5
  03e9d60  stfs 1, 260(1)
  03e9d64  lwz 4, 252(1)
  03e9d68  lfs 3, 32(27)
  03e9d6c  lfs 1, 252(1)
  03e9d70  lwz 5, 256(1)
  03e9d74  lfs 2, 256(1)
  03e9d78  lwz 6, 260(1)
  03e9d7c  rlwinm 5, 5, 3, 29, 29
  03e9d80  lfs 6, 260(1)
  03e9d84  fabs 1, 1
  03e9d88  rlwimi 5, 6, 2, 30, 30
  03e9d8c  fabs 2, 2
  03e9d90  fsub 7, 6, 3
  03e9d94  fsub 6, 6, 3
  03e9d98  rlwimi 5, 4, 4, 28, 28
  03e9d9c  ori 4, 3, 0
  03e9da0  rlwimi 4, 5, 2, 26, 28
  03e9da4  slwi 5, 5, 2
  03e9da8  clrldi 4, 4, 32
  03e9dac  fsel 5, 7, 1, 5
  03e9db0  lfsx 1, 3, 5
  03e9db4  fsel 4, 6, 2, 4
  03e9db8  lfs 2, 4(4)
  03e9dbc  fcmpu 0, 5, 3
  03e9dc0  bt 1, 0x3e9dc8
  03e9dc4  b 0x3e9ee0
  03e9dc8  fsubs 6, 4, 5
  03e9dcc  fadds 4, 4, 5
  03e9dd0  addic 3, 1, 16
  03e9dd4  li 7, 2
  03e9dd8  addic 4, 3, 280
  03e9ddc  addic 5, 3, 296
  03e9de0  mtctr 7
  03e9de4  fdivs 4, 6, 4
  03e9de8  fmuls 5, 4, 4
  03e9dec  stfs 4, 308(1)
  03e9df0  stfs 4, 300(1)
  03e9df4  stfs 4, 304(1)
  03e9df8  stfs 4, 296(1)
  03e9dfc  lfs 7, 308(1)
  03e9e00  lfs 8, 300(1)
  03e9e04  lfs 9, 304(1)
  03e9e08  fmuls 6, 5, 5
  03e9e0c  fmuls 8, 8, 5
  03e9e10  fmuls 7, 7, 6
  03e9e14  fmuls 4, 6, 6
  03e9e18  fmuls 6, 9, 6
  03e9e1c  stfs 8, 300(1)
  03e9e20  fmuls 5, 7, 5
  03e9e24  stfs 6, 304(1)
  03e9e28  stfs 5, 308(1)
  03e9e2c  lfs 5, 280(3)
  03e9e30  fmuls 5, 5, 4
  03e9e34  stfs 5, 296(3)
  03e9e38  lfs 5, 4(4)
  03e9e3c  addic 3, 3, 8
  03e9e40  addic 4, 4, 8
  03e9e44  fmuls 5, 5, 4
  03e9e48  stfs 5, 4(5)
  03e9e4c  addic 5, 5, 8
  03e9e50  bdnz 0x3e9e2c
  03e9e54  li 5, 4
  03e9e58  ori 3, 1, 0
  03e9e5c  mtctr 5
  03e9e60  lis 4, 115
  03e9e64  addic 5, 3, 296
  03e9e68  addic 4, 4, 22752
  03e9e6c  ori 6, 5, 0
  03e9e70  lfs 4, 296(3)
  03e9e74  lfs 5, 0(4)
  03e9e78  fmuls 4, 4, 5
  03e9e7c  lfs 5, 4(4)
  03e9e80  addic 4, 4, 8
  03e9e84  stfs 4, 296(3)
  03e9e88  lfs 4, 4(5)
  03e9e8c  addic 3, 3, 8
  03e9e90  fmuls 4, 4, 5
  03e9e94  stfs 4, 4(5)
  03e9e98  addic 5, 5, 8
  03e9e9c  bdnz 0x3e9e70
  03e9ea0  ori 3, 1, 0
  03e9ea4  mtctr 7
  03e9ea8  lfs 4, 296(3)
  03e9eac  fadds 3, 3, 4
  03e9eb0  lfs 4, 4(6)
  03e9eb4  addic 3, 3, 16
  03e9eb8  lfs 5, 8(6)
  03e9ebc  lfs 6, 12(6)
  03e9ec0  addic 6, 6, 16
  03e9ec4  fadds 3, 3, 4
  03e9ec8  fadds 3, 3, 5
  03e9ecc  fadds 3, 3, 6
  03e9ed0  bdnz 0x3e9ea8
  03e9ed4  lfs 4, 36(27)
  03e9ed8  fadds 3, 3, 4
  03e9edc  fmadds 3, 3, 1, 2
  03e9ee0  lis 29, 114
  03e9ee4  fmr 1, 3
  03e9ee8  lfs 31, 40(27)
  03e9eec  li 6, 0
  03e9ef0  addic 3, 30, 404
  03e9ef4  lfs 3, -3052(29)
  03e9ef8  fmuls 2, 3, 31
  03e9efc  bl 0x109ec0
  03e9f00  nop
  03e9f04  lfs 1, 44(27)
  03e9f08  lfs 2, -3052(29)
  03e9f0c  addic 3, 30, 408
  03e9f10  li 6, 0
  03e9f14  fmuls 2, 2, 31
  03e9f18  bl 0x109ec0
  03e9f1c  nop
  03e9f20  b 0x3e9f64
  03e9f24  lis 29, 114
  03e9f28  lfs 31, 40(27)
  03e9f2c  addic 3, 30, 404
  03e9f30  lfs 1, 72(31)
  03e9f34  li 6, 0
  03e9f38  lfs 3, -3052(29)
  03e9f3c  fmuls 2, 3, 31
  03e9f40  bl 0x109ec0
  03e9f44  nop
  03e9f48  lfs 1, 32(27)
  03e9f4c  addic 3, 30, 408
  03e9f50  lfs 2, -3052(29)
  03e9f54  li 6, 0
  03e9f58  fmuls 2, 2, 31
  03e9f5c  bl 0x109ec0
  03e9f60  nop
  03e9f64  addic 3, 30, 320
  03e9f68  li 4, 1
  03e9f6c  lfs 1, 408(30)
  03e9f70  bl 0x501980
  03e9f74  nop
  03e9f78  addic 29, 30, 256
  03e9f7c  lfs 1, 404(30)
  03e9f80  lfs 2, 72(31)
  03e9f84  bl 0x5025e0
  03e9f88  nop
  03e9f8c  ori 3, 29, 0
  03e9f90  li 4, 2
  03e9f94  bl 0x501980
  03e9f98  nop
  03e9f9c  b 0x3eabb0
  03e9fa0  lwz 3, 208(30)
  03e9fa4  lwz 4, 192(30)
  03e9fa8  lbz 5, 196(30)
  03e9fac  li 7, 0
  03e9fb0  extsb 5, 5
  03e9fb4  lwz 6, 0(3)
  03e9fb8  addc 4, 4, 6
  03e9fbc  addc 29, 4, 5
  03e9fc0  divw 4, 29, 6
  03e9fc4  mullw 4, 4, 6
  03e9fc8  addic 26, 6, -1
  03e9fcc  subc 29, 29, 4
  03e9fd0  subc 5, 5, 7
  03e9fd4  sldi 25, 29, 4
  03e9fd8  li 4, 0
  03e9fdc  addc 3, 3, 25
  03e9fe0  subc 6, 4, 26
  03e9fe4  addic 3, 3, 16
  03e9fe8  sradi 7, 5, 63
  03e9fec  clrldi 5, 3, 32
  03e9ff0  and 3, 7, 6
  03e9ff4  addic 4, 30, 112
  03e9ff8  addc 26, 26, 3
  03e9ffc  ori 3, 31, 0
  03ea000  li 28, 0
  03ea004  addic 6, 30, 64
  03ea008  bl 0x101cc0
  03ea00c  nop
  03ea010  lwz 3, 208(30)
  03ea014  lfs 1, 20(31)
  03ea018  addc 4, 3, 25
  03ea01c  lfs 2, 16(31)
  03ea020  clrldi 4, 4, 32
  03ea024  lfs 3, 20(4)
  03ea028  lfs 4, 16(4)
  03ea02c  fsubs 1, 1, 3
  03ea030  fsubs 2, 2, 4
  03ea034  fmuls 1, 1, 1
  03ea038  fmadds 1, 2, 2, 1
  03ea03c  lfs 2, 12(27)
  03ea040  fsqrts 1, 1
  03ea044  fcmpu 0, 1, 2
  03ea048  cror 6, 1, 2
  03ea04c  bt 6, 0x3ea0bc
  03ea050  cmpw 29, 26
  03ea054  bf 2, 0x3ea0b8
  03ea058  lwz 4, 0(3)
  03ea05c  lfs 1, 20(3)
  03ea060  slwi 4, 4, 4
  03ea064  lfs 2, 16(3)
  03ea068  lfs 3, 24(3)
  03ea06c  addc 4, 3, 4
  03ea070  clrldi 4, 4, 32
  03ea074  lfs 4, 4(4)
  03ea078  lfs 5, 0(4)
  03ea07c  fsubs 1, 4, 1
  03ea080  fsubs 2, 5, 2
  03ea084  lfs 4, 8(4)
  03ea088  fsubs 3, 4, 3
  03ea08c  fmuls 1, 1, 1
  03ea090  fmadds 1, 2, 2, 1
  03ea094  lfs 2, 16(27)
  03ea098  fmadds 1, 3, 3, 1
  03ea09c  fsqrts 1, 1
  03ea0a0  fcmpu 0, 1, 2
  03ea0a4  cror 6, 0, 2
  03ea0a8  bt 6, 0x3ea0b8
  03ea0ac  lbz 3, 196(30)
  03ea0b0  neg 3, 3
  03ea0b4  stb 3, 196(30)
  03ea0b8  stw 29, 192(30)
  03ea0bc  lis 6, 133
  03ea0c0  lis 7, 133
  03ea0c4  addic 5, 1, 144
  03ea0c8  ori 3, 31, 0
  03ea0cc  li 4, 2
  03ea0d0  lfs 1, 16368(6)
  03ea0d4  lfs 2, 16372(7)
  03ea0d8  stfs 1, 172(1)
  03ea0dc  stfs 2, 188(1)
  03ea0e0  bl 0xf1114
  03ea0e4  nop
  03ea0e8  ori 29, 28, 0
  03ea0ec  lfs 1, 144(1)
  03ea0f0  lfs 2, 148(1)
  03ea0f4  stfs 1, 208(1)
  03ea0f8  lfs 1, 152(1)
  03ea0fc  stfs 2, 212(1)
  03ea100  lfs 2, 156(1)
  03ea104  stfs 1, 216(1)
  03ea108  stfs 2, 220(1)
  03ea10c  lfs 31, 48(27)
  03ea110  lfs 30, 52(27)
  03ea114  fmr 1, 31
  03ea118  fmr 2, 30
  03ea11c  bl 0xfcbe8
  03ea120  nop
  03ea124  lfs 2, 208(1)
  03ea128  fadds 3, 2, 1
  03ea12c  fmr 1, 31
  03ea130  fmr 2, 30
  03ea134  stfs 3, 208(1)
  03ea138  bl 0xfcbe8
  03ea13c  nop
  03ea140  lfs 2, 212(1)
  03ea144  fadds 3, 2, 1
  03ea148  fmr 1, 31
  03ea14c  fmr 2, 30
  03ea150  stfs 3, 212(1)
  03ea154  bl 0xfcbe8
  03ea158  nop
  03ea15c  lfs 2, 216(1)
  03ea160  fadds 1, 2, 1
  03ea164  lis 3, 133
  03ea168  lis 26, 114
  03ea16c  stfs 1, 216(1)
  03ea170  lfs 31, 56(27)
  03ea174  lfs 1, 404(30)
  03ea178  lfs 30, 60(27)
  03ea17c  fadds 1, 1, 31
  03ea180  lfs 29, 64(27)
  03ea184  lfs 28, 68(27)
  03ea188  lfs 27, 72(27)
  03ea18c  lfs 26, 76(27)
  03ea190  lfs 25, 80(27)
  03ea194  fsubs 2, 30, 1
  03ea198  fsubs 3, 29, 1
  03ea19c  fsub 4, 1, 2
  03ea1a0  fsel 1, 4, 2, 1
  03ea1a4  fsub 2, 3, 1
  03ea1a8  fsel 1, 2, 3, 1
  03ea1ac  lfs 3, 16352(3)
  03ea1b0  lfs 5, -3052(26)
  03ea1b4  fmuls 6, 3, 5
  03ea1b8  fmuls 2, 1, 1
  03ea1bc  lis 3, 133
  03ea1c0  fmuls 4, 2, 1
  03ea1c4  fmuls 7, 2, 4
  03ea1c8  fmadds 1, 4, 28, 1
  03ea1cc  fmuls 4, 2, 7
  03ea1d0  fmadds 1, 7, 27, 1
  03ea1d4  fmuls 2, 2, 4
  03ea1d8  fmadds 1, 4, 26, 1
  03ea1dc  fmadds 1, 2, 25, 1
  03ea1e0  fmuls 1, 6, 1
  03ea1e4  stfs 1, 160(1)
  03ea1e8  lfs 1, 404(30)
  03ea1ec  fsubs 2, 30, 1
  03ea1f0  fsubs 4, 29, 1
  03ea1f4  stw 28, 168(1)
  03ea1f8  fsub 6, 1, 2
  03ea1fc  fsel 1, 6, 2, 1
  03ea200  fsub 2, 4, 1
  03ea204  fsel 1, 2, 4, 1
  03ea208  fmuls 2, 3, 5
  03ea20c  fmuls 3, 1, 1
  03ea210  fmuls 4, 3, 1
  03ea214  fmuls 6, 3, 4
  03ea218  fmadds 1, 4, 28, 1
  03ea21c  lfs 4, 16356(3)
  03ea220  fmuls 4, 4, 5
  03ea224  fmuls 7, 3, 6
  03ea228  fmadds 1, 6, 27, 1
  03ea22c  fmuls 3, 3, 7
  03ea230  fmadds 1, 7, 26, 1
  03ea234  fmadds 1, 3, 25, 1
  03ea238  fmuls 1, 2, 1
  03ea23c  stfs 1, 164(1)
  03ea240  lfs 23, 84(27)
  03ea244  lfs 22, 88(27)
  03ea248  fmuls 1, 4, 23
  03ea24c  fmuls 2, 4, 22
  03ea250  bl 0xfcbe8
  03ea254  nop
  03ea258  lis 3, 133
  03ea25c  stfs 1, 168(1)
  03ea260  lfs 2, 16376(3)
  03ea264  fneg 1, 2
  03ea268  bl 0xfcbe8
  03ea26c  nop
  03ea270  lfs 24, 92(27)
  03ea274  fmuls 21, 1, 24
  03ea278  lfs 1, 404(30)
  03ea27c  fmr 2, 21
  03ea280  bl 0x502578
  03ea284  nop
  03ea288  fadds 1, 1, 31
  03ea28c  lis 25, 133
  03ea290  fsubs 2, 30, 1
  03ea294  fsubs 3, 29, 1
  03ea298  fsub 4, 1, 2
  03ea29c  fsel 1, 4, 2, 1
  03ea2a0  lfs 2, -3052(26)
  03ea2a4  fsub 4, 3, 1
  03ea2a8  fsel 1, 4, 3, 1
  03ea2ac  lfs 3, 16360(25)
  03ea2b0  fmuls 3, 3, 2
  03ea2b4  fmuls 4, 1, 1
  03ea2b8  fmuls 2, 4, 1
  03ea2bc  fmuls 5, 4, 2
  03ea2c0  fmadds 1, 2, 28, 1
  03ea2c4  fmr 2, 21
  03ea2c8  fmuls 6, 4, 5
  03ea2cc  fmadds 1, 5, 27, 1
  03ea2d0  fmuls 4, 4, 6
  03ea2d4  fmadds 1, 6, 26, 1
  03ea2d8  fmadds 1, 4, 25, 1
  03ea2dc  fmuls 1, 3, 1
  03ea2e0  stfs 1, 176(1)
  03ea2e4  lfs 1, 404(30)
  03ea2e8  bl 0x502578
  03ea2ec  nop
  03ea2f0  fsubs 2, 30, 1
  03ea2f4  fsubs 3, 29, 1
  03ea2f8  lis 3, 133
  03ea2fc  fsub 4, 1, 2
  03ea300  fsel 1, 4, 2, 1
  03ea304  lfs 2, 16360(25)
  03ea308  lfs 5, -3052(26)
  03ea30c  fsub 4, 3, 1
  03ea310  fsel 1, 4, 3, 1
  03ea314  fmuls 3, 2, 5
  03ea318  lfs 2, 16364(3)
  03ea31c  fmuls 2, 2, 5
  03ea320  stw 28, 184(1)
  03ea324  fmuls 4, 1, 1
  03ea328  fmuls 6, 4, 1
  03ea32c  fmuls 5, 4, 6
  03ea330  fmadds 6, 6, 28, 1
  03ea334  fmuls 1, 2, 23
  03ea338  fmuls 2, 2, 22
  03ea33c  fmuls 7, 4, 5
  03ea340  fmadds 5, 5, 27, 6
  03ea344  fmuls 4, 4, 7
  03ea348  fmadds 5, 7, 26, 5
  03ea34c  fmadds 4, 4, 25, 5
  03ea350  fmuls 3, 3, 4
  03ea354  stfs 3, 180(1)
  03ea358  bl 0xfcbe8
  03ea35c  nop
  03ea360  lis 3, 133
  03ea364  stfs 1, 184(1)
  03ea368  lis 4, 133
  03ea36c  lfs 23, 96(27)
  03ea370  lis 5, 133
  03ea374  lwz 3, 16332(3)
  03ea378  lwz 4, 16336(4)
  03ea37c  lfs 1, 16340(5)
  03ea380  extsw 26, 3
  03ea384  extsw 25, 4
  03ea388  fmuls 2, 1, 23
  03ea38c  bl 0xfcbe8
  03ea390  nop
  03ea394  lis 24, 114
  03ea398  lfs 2, -3056(24)
  03ea39c  fmuls 1, 1, 2
  03ea3a0  bl 0x502758
  03ea3a4  nop
  03ea3a8  lis 4, 133
  03ea3ac  lfs 22, 100(27)
  03ea3b0  ori 23, 3, 0
  03ea3b4  lfs 1, 16344(4)
  03ea3b8  fmuls 2, 1, 22
  03ea3bc  bl 0xfcbe8
  03ea3c0  nop
  03ea3c4  lfs 2, -3056(24)
  03ea3c8  fmuls 1, 1, 2
  03ea3cc  bl 0x502758
  03ea3d0  nop
  03ea3d4  lis 4, 133
  03ea3d8  ori 22, 3, 0
  03ea3dc  lfs 1, 16348(4)
  03ea3e0  fmuls 2, 1, 22
  03ea3e4  bl 0xfcbe8
  03ea3e8  nop
  03ea3ec  lfs 2, -3056(24)
  03ea3f0  fmuls 1, 1, 2
  03ea3f4  bl 0x502758
  03ea3f8  nop
  03ea3fc  li 6, -1
  03ea400  addic 4, 1, 160
  03ea404  ori 10, 3, 0
  03ea408  ori 8, 23, 0
  03ea40c  std 6, 112(1)
  03ea410  addic 3, 1, 208
  03ea414  addic 5, 1, 176
  03ea418  ori 6, 26, 0
  03ea41c  ori 7, 25, 0
  03ea420  ori 9, 22, 0
  03ea424  bl 0x1206e8
  03ea428  nop
  03ea42c  lis 4, 161
  03ea430  lwz 4, 1808(4)
  03ea434  clrlwi 4, 4, 29
  03ea438  cmpwi 4, 0
  03ea43c  bf 2, 0x3ea48c
  03ea440  cmpwi 1, 29, 0
  03ea444  cmpwi 3, 0
  03ea448  crorc 2, 2, 6
  03ea44c  bt 2, 0x3ea48c
  03ea450  ori 4, 28, 0
  03ea454  ori 5, 30, 0
  03ea458  lwz 6, 416(5)
  03ea45c  cmpwi 6, 0
  03ea460  bf 2, 0x3ea47c
  03ea464  slwi 4, 4, 2
  03ea468  addic 5, 30, 416
  03ea46c  addc 4, 4, 5
  03ea470  clrldi 4, 4, 32
  03ea474  stw 3, 0(4)
  03ea478  b 0x3ea48c
  03ea47c  addic 4, 4, 1
  03ea480  addic 5, 5, 4
  03ea484  cmpwi 4, 8
  03ea488  bt 0, 0x3ea458
  03ea48c  addic 29, 29, 1
  03ea490  cmpwi 29, 2
  03ea494  bt 0, 0x3ea0ec
  03ea498  lis 3, 133
  03ea49c  lfs 17, 32(27)
  03ea4a0  lis 4, 133
  03ea4a4  ori 29, 28, 0
  03ea4a8  lfs 1, 16416(3)
  03ea4ac  lfs 2, 16420(4)
  03ea4b0  stfs 1, 172(1)
  03ea4b4  stfs 2, 188(1)
  03ea4b8  lfs 21, 104(27)
  03ea4bc  lfs 20, 108(27)
  03ea4c0  lfs 19, 112(27)
  03ea4c4  lfs 18, 116(27)
  03ea4c8  fmr 1, 21
  03ea4cc  lfs 3, 144(1)
  03ea4d0  lfs 4, 148(1)
  03ea4d4  fmr 2, 20
  03ea4d8  stfs 3, 224(1)
  03ea4dc  lfs 3, 152(1)
  03ea4e0  stfs 4, 228(1)
  03ea4e4  lfs 4, 156(1)
  03ea4e8  stfs 3, 232(1)
  03ea4ec  stfs 4, 236(1)
  03ea4f0  bl 0xfcbe8
  03ea4f4  nop
  03ea4f8  lfs 2, 224(1)
  03ea4fc  fadds 3, 2, 1
  03ea500  fmr 1, 21
  03ea504  fmr 2, 20
  03ea508  stfs 3, 224(1)
  03ea50c  bl 0xfcbe8
  03ea510  nop
  03ea514  lfs 2, 228(1)
  03ea518  fadds 3, 2, 1
  03ea51c  fmr 1, 21
  03ea520  fmr 2, 20
  03ea524  stfs 3, 228(1)
  03ea528  bl 0xfcbe8
  03ea52c  nop
  03ea530  lis 3, 133
  03ea534  lfs 2, 232(1)
  03ea538  fadds 3, 2, 1
  03ea53c  lfs 2, 16428(3)
  03ea540  fneg 1, 2
  03ea544  stfs 3, 232(1)
  03ea548  bl 0xfcbe8
  03ea54c  nop
  03ea550  fmuls 16, 1, 24
  03ea554  lfs 1, 404(30)
  03ea558  fmr 2, 16
  03ea55c  bl 0x502578
  03ea560  nop
  03ea564  fadds 1, 1, 31
  03ea568  lis 26, 133
  03ea56c  lis 25, 114
  03ea570  fsubs 2, 30, 1
  03ea574  fsubs 3, 29, 1
  03ea578  fsub 4, 1, 2
  03ea57c  fsel 1, 4, 2, 1
  03ea580  lfs 4, 16400(26)
  03ea584  lfs 5, -3052(25)
  03ea588  fsub 2, 3, 1
  03ea58c  fsel 1, 2, 3, 1
  03ea590  fmuls 3, 4, 5
  03ea594  fmuls 4, 1, 1
  03ea598  fmuls 2, 4, 1
  03ea59c  fmuls 5, 4, 2
  03ea5a0  fmadds 1, 2, 28, 1
  03ea5a4  fmr 2, 16
  03ea5a8  fmuls 6, 4, 5
  03ea5ac  fmadds 1, 5, 27, 1
  03ea5b0  fmuls 4, 4, 6
  03ea5b4  fmadds 1, 6, 26, 1
  03ea5b8  fmadds 1, 4, 25, 1
  03ea5bc  fmuls 1, 3, 1
  03ea5c0  stfs 1, 160(1)
  03ea5c4  lfs 1, 404(30)
  03ea5c8  bl 0x502578
  03ea5cc  nop
  03ea5d0  fsubs 2, 30, 1
  03ea5d4  fsubs 3, 29, 1
  03ea5d8  lis 3, 133
  03ea5dc  fsub 4, 1, 2
  03ea5e0  fsel 1, 4, 2, 1
  03ea5e4  lfs 2, 16400(26)
  03ea5e8  lfs 5, -3052(25)
  03ea5ec  fsub 4, 3, 1
  03ea5f0  fsel 1, 4, 3, 1
  03ea5f4  fmuls 3, 2, 5
  03ea5f8  lfs 2, 16404(3)
  03ea5fc  fmuls 2, 2, 5
  03ea600  stw 28, 168(1)
  03ea604  fmuls 4, 1, 1
  03ea608  fmuls 6, 4, 1
  03ea60c  fmuls 5, 4, 6
  03ea610  fmadds 6, 6, 28, 1
  03ea614  fmuls 1, 2, 19
  03ea618  fmuls 2, 2, 18
  03ea61c  fmuls 7, 4, 5
  03ea620  fmadds 5, 5, 27, 6
  03ea624  fmuls 4, 4, 7
  03ea628  fmadds 5, 7, 26, 5
  03ea62c  fmadds 4, 4, 25, 5
  03ea630  fmuls 3, 3, 4
  03ea634  stfs 3, 164(1)
  03ea638  bl 0xfcbe8
  03ea63c  nop
  03ea640  lis 3, 133
  03ea644  stfs 1, 168(1)
  03ea648  lfs 2, 16424(3)
  03ea64c  fneg 1, 2
  03ea650  bl 0xfcbe8
  03ea654  nop
  03ea658  fmuls 16, 1, 24
  03ea65c  lfs 1, 404(30)
  03ea660  fmr 2, 16
  03ea664  bl 0x502578
  03ea668  nop
  03ea66c  fadds 1, 1, 31
  03ea670  lis 26, 133
  03ea674  fsubs 2, 30, 1
  03ea678  fsubs 3, 29, 1
  03ea67c  fsub 4, 1, 2
  03ea680  fsel 1, 4, 2, 1
  03ea684  lfs 4, 16408(26)
  03ea688  lfs 5, -3052(25)
  03ea68c  fsub 2, 3, 1
  03ea690  fsel 1, 2, 3, 1
  03ea694  fmuls 3, 4, 5
  03ea698  fmuls 4, 1, 1
  03ea69c  fmuls 2, 4, 1
  03ea6a0  fmuls 5, 4, 2
  03ea6a4  fmadds 1, 2, 28, 1
  03ea6a8  fmr 2, 16
  03ea6ac  fmuls 6, 4, 5
  03ea6b0  fmadds 1, 5, 27, 1
  03ea6b4  fmuls 4, 4, 6
  03ea6b8  fmadds 1, 6, 26, 1
  03ea6bc  fmadds 1, 4, 25, 1
  03ea6c0  fmuls 1, 3, 1
  03ea6c4  stfs 1, 176(1)
  03ea6c8  lfs 1, 404(30)
  03ea6cc  bl 0x502578
  03ea6d0  nop
  03ea6d4  fsubs 2, 30, 1
  03ea6d8  fsubs 3, 29, 1
  03ea6dc  lis 3, 133
  03ea6e0  fsub 4, 1, 2
  03ea6e4  fsel 1, 4, 2, 1
  03ea6e8  lfs 2, 16408(26)
  03ea6ec  lfs 5, -3052(25)
  03ea6f0  fsub 4, 3, 1
  03ea6f4  fsel 1, 4, 3, 1
  03ea6f8  fmuls 3, 2, 5
  03ea6fc  lfs 2, 16412(3)
  03ea700  fmuls 2, 2, 5
  03ea704  stw 28, 184(1)
  03ea708  fmuls 4, 1, 1
  03ea70c  fmuls 6, 4, 1
  03ea710  fmuls 5, 4, 6
  03ea714  fmadds 6, 6, 28, 1
  03ea718  fmuls 1, 2, 19
  03ea71c  fmuls 2, 2, 18
  03ea720  fmuls 7, 4, 5
  03ea724  fmadds 5, 5, 27, 6
  03ea728  fmuls 4, 4, 7
  03ea72c  fmadds 5, 7, 26, 5
  03ea730  fmadds 4, 4, 25, 5
  03ea734  fmuls 3, 3, 4
  03ea738  stfs 3, 180(1)
  03ea73c  bl 0xfcbe8
  03ea740  nop
  03ea744  lis 3, 133
  03ea748  lis 4, 133
  03ea74c  stfs 1, 184(1)
  03ea750  lis 5, 133
  03ea754  lwz 3, 16380(3)
  03ea758  lwz 4, 16384(4)
  03ea75c  lfs 1, 16388(5)
  03ea760  extsw 26, 3
  03ea764  extsw 25, 4
  03ea768  fmuls 2, 1, 23
  03ea76c  bl 0xfcbe8
  03ea770  nop
  03ea774  lis 24, 114
  03ea778  lfs 2, -3056(24)
  03ea77c  fmuls 1, 1, 2
  03ea780  bl 0x502758
  03ea784  nop
  03ea788  lis 4, 133
  03ea78c  ori 23, 3, 0
  03ea790  lfs 1, 16392(4)
  03ea794  fmuls 2, 1, 22
  03ea798  bl 0xfcbe8
  03ea79c  nop
  03ea7a0  lfs 2, -3056(24)
  03ea7a4  fmuls 1, 1, 2
  03ea7a8  bl 0x502758
  03ea7ac  nop
  03ea7b0  lis 4, 133
  03ea7b4  ori 22, 3, 0
  03ea7b8  lfs 1, 16396(4)
  03ea7bc  fmuls 2, 1, 22
  03ea7c0  bl 0xfcbe8
  03ea7c4  nop
  03ea7c8  lfs 2, -3056(24)
  03ea7cc  fmuls 1, 1, 2
  03ea7d0  bl 0x502758
  03ea7d4  nop
  03ea7d8  li 8, -1
  03ea7dc  ori 10, 3, 0
  03ea7e0  ori 6, 26, 0
  03ea7e4  addic 4, 1, 160
  03ea7e8  std 8, 112(1)
  03ea7ec  ori 7, 25, 0
  03ea7f0  addic 5, 1, 176
  03ea7f4  ori 9, 22, 0
  03ea7f8  addic 3, 1, 224
  03ea7fc  ori 8, 23, 0
  03ea800  bl 0x1206e8
  03ea804  nop
  03ea808  addic 29, 29, 1
  03ea80c  cmpwi 29, 2
  03ea810  bt 0, 0x3ea4c8
  03ea814  lis 29, 151
  03ea818  lfs 1, 20(31)
  03ea81c  addic 29, 29, -25376
  03ea820  lfs 2, 16(31)
  03ea824  lfs 3, 132(29)
  03ea828  lfs 4, 128(29)
  03ea82c  fsubs 3, 1, 3
  03ea830  fsubs 4, 2, 4
  03ea834  stfs 2, 192(1)
  03ea838  fmuls 2, 3, 3
  03ea83c  lfs 3, 28(31)
  03ea840  stfs 1, 196(1)
  03ea844  stfs 3, 204(1)
  03ea848  lfs 3, 24(27)
  03ea84c  lfs 1, 24(31)
  03ea850  fadds 3, 1, 3
  03ea854  fmadds 2, 4, 4, 2
  03ea858  fsqrts 2, 2
  03ea85c  stfs 3, 200(1)
  03ea860  lfs 3, 372(30)
  03ea864  fcmpu 0, 2, 3
  03ea868  bt 1, 0x3ea8c8
  03ea86c  lfs 2, 136(29)
  03ea870  fsubs 1, 1, 2
  03ea874  lfs 2, 20(27)
  03ea878  fabs 1, 1
  03ea87c  fcmpu 0, 1, 2
  03ea880  cror 6, 1, 2
  03ea884  bt 6, 0x3ea8c8
  03ea888  lwz 3, 400(30)
  03ea88c  cmpwi 3, -1
  03ea890  bt 2, 0x3ea8f8
  03ea894  lis 4, 165
  03ea898  slwi 3, 3, 2
  03ea89c  addic 4, 4, 7136
  03ea8a0  extsw 3, 3
  03ea8a4  lwzx 6, 4, 3
  03ea8a8  addic 3, 29, 128
  03ea8ac  addic 4, 6, 16
  03ea8b0  lwz 5, 0(6)
  03ea8b4  extsw 5, 5
  03ea8b8  bl 0x104e44
  03ea8bc  nop
  03ea8c0  cmpwi 3, 0
  03ea8c4  bf 2, 0x3ea8f8
  03ea8c8  lbz 3, 83(31)
  03ea8cc  cmpwi 3, 0
  03ea8d0  bt 2, 0x3ea8ec
  03ea8d4  ori 3, 31, 0
  03ea8d8  li 4, 0
  03ea8dc  li 5, 0
  03ea8e0  li 6, 3
  03ea8e4  bl 0xfddc0
  03ea8e8  nop
  03ea8ec  li 3, 1
  03ea8f0  stb 3, 32(31)
  03ea8f4  b 0x3ea948
  03ea8f8  addic 3, 1, 192
  03ea8fc  addic 4, 29, 208
  03ea900  li 5, 2
  03ea904  ori 6, 31, 0
  03ea908  li 7, 0
  03ea90c  bl 0x57820
  03ea910  nop
  03ea914  cmpwi 3, 0
  03ea918  bt 2, 0x3ea948
  03ea91c  lbz 3, 83(31)
  03ea920  cmpwi 3, 0
  03ea924  bt 2, 0x3ea940
  03ea928  ori 3, 31, 0
  03ea92c  li 4, 0
  03ea930  li 5, 0
  03ea934  li 6, 3
  03ea938  bl 0xfddc0
  03ea93c  nop
  03ea940  li 3, 1
  03ea944  stb 3, 32(31)
  03ea948  lfs 1, 128(29)
  03ea94c  lfs 2, 16(31)
  03ea950  lfs 3, 132(29)
  03ea954  lfs 4, 20(31)
  03ea958  fsubs 1, 1, 2
  03ea95c  fsubs 2, 3, 4
  03ea960  lis 3, 115
  03ea964  addic 3, 3, 22784
  03ea968  fabs 3, 1
  03ea96c  fabs 4, 2
  03ea970  stfs 1, 240(1)
  03ea974  stfs 2, 244(1)
  03ea978  fsubs 1, 3, 4
  03ea97c  stfs 1, 248(1)
  03ea980  lwz 4, 240(1)
  03ea984  lfs 1, 240(1)
  03ea988  lwz 5, 244(1)
  03ea98c  lfs 2, 244(1)
  03ea990  lwz 6, 248(1)
  03ea994  rlwinm 5, 5, 3, 29, 29
  03ea998  fabs 5, 2
  03ea99c  lfs 2, 248(1)
  03ea9a0  fabs 1, 1
  03ea9a4  rlwimi 5, 6, 2, 30, 30
  03ea9a8  fsub 6, 2, 17
  03ea9ac  fsub 7, 2, 17
  03ea9b0  rlwimi 5, 4, 4, 28, 28
  03ea9b4  ori 4, 3, 0
  03ea9b8  rlwimi 4, 5, 2, 26, 28
  03ea9bc  slwi 5, 5, 2
  03ea9c0  clrldi 4, 4, 32
  03ea9c4  fsel 4, 6, 1, 4
  03ea9c8  lfsx 1, 3, 5
  03ea9cc  fsel 3, 7, 5, 3
  03ea9d0  lfs 2, 4(4)
  03ea9d4  fcmpu 0, 4, 17
  03ea9d8  bt 1, 0x3ea9e0
  03ea9dc  b 0x3eaaf8
  03ea9e0  fsubs 5, 3, 4
  03ea9e4  fadds 3, 3, 4
  03ea9e8  addic 3, 1, 16
  03ea9ec  li 6, 2
  03ea9f0  addic 4, 3, 248
  03ea9f4  addic 5, 3, 264
  03ea9f8  mtctr 6
  03ea9fc  fdivs 3, 5, 3
  03eaa00  fmuls 4, 3, 3
  03eaa04  stfs 3, 276(1)
  03eaa08  stfs 3, 268(1)
  03eaa0c  stfs 3, 272(1)
  03eaa10  stfs 3, 264(1)
  03eaa14  lfs 6, 276(1)
  03eaa18  lfs 7, 268(1)
  03eaa1c  lfs 8, 272(1)
  03eaa20  fmuls 5, 4, 4
  03eaa24  fmuls 7, 7, 4
  03eaa28  fmuls 6, 6, 5
  03eaa2c  fmuls 3, 5, 5
  03eaa30  fmuls 5, 8, 5
  03eaa34  stfs 7, 268(1)
  03eaa38  fmuls 4, 6, 4
  03eaa3c  stfs 5, 272(1)
  03eaa40  stfs 4, 276(1)
  03eaa44  lfs 4, 248(3)
  03eaa48  fmuls 4, 4, 3
  03eaa4c  stfs 4, 264(3)
  03eaa50  lfs 4, 4(4)
  03eaa54  addic 3, 3, 8
  03eaa58  addic 4, 4, 8
  03eaa5c  fmuls 4, 4, 3
  03eaa60  stfs 4, 4(5)
  03eaa64  addic 5, 5, 8
  03eaa68  bdnz 0x3eaa44
  03eaa6c  li 5, 4
  03eaa70  ori 3, 1, 0
  03eaa74  mtctr 5
  03eaa78  lis 4, 115
  03eaa7c  addic 5, 3, 264
  03eaa80  addic 4, 4, 22752
  03eaa84  ori 7, 5, 0
  03eaa88  lfs 3, 264(3)
  03eaa8c  lfs 4, 0(4)
  03eaa90  fmuls 3, 3, 4
  03eaa94  lfs 4, 4(4)
  03eaa98  addic 4, 4, 8
  03eaa9c  stfs 3, 264(3)
  03eaaa0  lfs 3, 4(5)
  03eaaa4  addic 3, 3, 8
  03eaaa8  fmuls 3, 3, 4
  03eaaac  stfs 3, 4(5)
  03eaab0  addic 5, 5, 8
  03eaab4  bdnz 0x3eaa88
  03eaab8  ori 3, 1, 0
  03eaabc  mtctr 6
  03eaac0  lfs 3, 264(3)
  03eaac4  lfs 4, 4(7)
  03eaac8  fadds 3, 17, 3
  03eaacc  lfs 5, 8(7)
  03eaad0  lfs 17, 12(7)
  03eaad4  addic 3, 3, 16
  03eaad8  addic 7, 7, 16
  03eaadc  fadds 3, 3, 4
  03eaae0  fadds 3, 3, 5
  03eaae4  fadds 17, 3, 17
  03eaae8  bdnz 0x3eaac0
  03eaaec  lfs 3, 36(27)
  03eaaf0  fadds 17, 17, 3
  03eaaf4  fmadds 17, 17, 1, 2
  03eaaf8  lis 29, 114
  03eaafc  lfs 31, 40(27)
  03eab00  fmr 1, 17
  03eab04  li 6, 0
  03eab08  addic 3, 30, 404
  03eab0c  lfs 3, -3052(29)
  03eab10  fmuls 2, 3, 31
  03eab14  bl 0x109ec0
  03eab18  nop
  03eab1c  lfs 1, 44(27)
  03eab20  lfs 2, -3052(29)
  03eab24  addic 3, 30, 408
  03eab28  li 6, 0
  03eab2c  fmuls 2, 2, 31
  03eab30  bl 0x109ec0
  03eab34  nop
  03eab38  lfs 1, 408(30)
  03eab3c  addic 3, 30, 320
  03eab40  li 4, 1
  03eab44  bl 0x501980
  03eab48  nop
  03eab4c  lfs 1, 404(30)
  03eab50  addic 30, 30, 256
  03eab54  lfs 2, 72(31)
  03eab58  bl 0x5025e0
  03eab5c  nop
  03eab60  ori 3, 30, 0
  03eab64  li 4, 2
  03eab68  bl 0x501980
  03eab6c  nop
  03eab70  b 0x3eabb0
  03eab74  lwz 3, 388(30)
  03eab78  cmpwi 3, 0
  03eab7c  bt 2, 0x3eab88
  03eab80  bl 0xefb38
  03eab84  nop
  03eab88  lwz 30, 392(30)
  03eab8c  cmpwi 30, 0
  03eab90  bt 2, 0x3eaba0
  03eab94  ori 3, 30, 0
  03eab98  bl 0xefb38
  03eab9c  nop
  03eaba0  ori 3, 31, 0
  03eaba4  bl 0xefb38
  03eaba8  nop
  03eabac  b 0x3eabb0
  03eabb0  ld 0, 560(1)
  03eabb4  mtlr 0
  03eabb8  lfd 16, 416(1)
  03eabbc  lfd 17, 424(1)
  03eabc0  lfd 18, 432(1)
  03eabc4  lfd 19, 440(1)
  03eabc8  lfd 20, 448(1)
  03eabcc  lfd 21, 456(1)
  03eabd0  lfd 22, 464(1)
  03eabd4  lfd 23, 472(1)
  03eabd8  lfd 24, 480(1)
  03eabdc  lfd 25, 488(1)
  03eabe0  lfd 26, 496(1)
  03eabe4  lfd 27, 504(1)
  03eabe8  lfd 28, 512(1)
  03eabec  lfd 29, 520(1)
  03eabf0  lfd 30, 528(1)
  03eabf4  lfd 31, 536(1)
  03eabf8  ld 22, 336(1)
  03eabfc  ld 23, 344(1)
  03eac00  ld 24, 352(1)
  03eac04  ld 25, 360(1)
  03eac08  ld 26, 368(1)
  03eac0c  ld 27, 376(1)
  03eac10  ld 28, 384(1)
  03eac14  ld 29, 392(1)
  03eac18  ld 30, 400(1)
  03eac1c  ld 31, 408(1)
  03eac20  addi 1, 1, 544
  03eac24  blr
