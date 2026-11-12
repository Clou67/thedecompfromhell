# idol/mathfunc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cosf:   # 0x5e8078, 0x94 bytes
  05e8078  lis 3, 95
  05e807c  addi 3, 3, -32680
  05e8080  lfs 2, 0(3)
  05e8084  lfs 3, 4(3)
  05e8088  fadds 2, 1, 2
  05e808c  fmr 1, 2
  05e8090  fsubs 3, 3, 1
  05e8094  fcmpu 0, 1, 3
  05e8098  bt 0, 0x5e80a0
  05e809c  fmr 1, 3
  05e80a0  lis 3, 95
  05e80a4  addi 3, 3, -32680
  05e80a8  lfs 3, 8(3)
  05e80ac  fsubs 2, 3, 2
  05e80b0  fcmpu 0, 1, 2
  05e80b4  bt 1, 0x5e80bc
  05e80b8  fmr 1, 2
  05e80bc  fmuls 2, 1, 1
  05e80c0  lis 3, 95
  05e80c4  addi 3, 3, -32680
  05e80c8  lfs 3, 12(3)
  05e80cc  lfs 5, 16(3)
  05e80d0  fmuls 4, 2, 1
  05e80d4  lfs 6, 20(3)
  05e80d8  fmuls 3, 4, 3
  05e80dc  fmuls 8, 2, 4
  05e80e0  lfs 4, 24(3)
  05e80e4  fadds 1, 1, 3
  05e80e8  fmuls 7, 2, 8
  05e80ec  fmuls 3, 8, 5
  05e80f0  fmuls 2, 2, 7
  05e80f4  fmuls 5, 7, 6
  05e80f8  fadds 1, 1, 3
  05e80fc  fmuls 2, 2, 4
  05e8100  fadds 1, 1, 5
  05e8104  fadds 1, 1, 2
  05e8108  blr

FUN_005e8128:   # 0x5e8128, 0x94 bytes
  05e8128  lis 3, 95
  05e812c  fmr 2, 1
  05e8130  addi 3, 3, -32496
  05e8134  lfs 3, 0(3)
  05e8138  fsubs 3, 3, 1
  05e813c  fcmpu 0, 1, 3
  05e8140  bt 0, 0x5e8148
  05e8144  fmr 2, 3
  05e8148  fmr 3, 1
  05e814c  lis 3, 95
  05e8150  fmr 1, 2
  05e8154  addi 3, 3, -32496
  05e8158  lfs 2, 4(3)
  05e815c  fsubs 2, 2, 3
  05e8160  fcmpu 0, 1, 2
  05e8164  bt 1, 0x5e816c
  05e8168  fmr 1, 2
  05e816c  fmuls 2, 1, 1
  05e8170  lis 3, 95
  05e8174  addi 3, 3, -32496
  05e8178  lfs 3, 8(3)
  05e817c  lfs 5, 12(3)
  05e8180  fmuls 4, 2, 1
  05e8184  lfs 6, 16(3)
  05e8188  fmuls 3, 4, 3
  05e818c  fmuls 8, 2, 4
  05e8190  lfs 4, 20(3)
  05e8194  fadds 1, 1, 3
  05e8198  fmuls 7, 2, 8
  05e819c  fmuls 3, 8, 5
  05e81a0  fmuls 2, 2, 7
  05e81a4  fmuls 5, 7, 6
  05e81a8  fadds 1, 1, 3
  05e81ac  fmuls 2, 2, 4
  05e81b0  fadds 1, 1, 5
  05e81b4  fadds 1, 1, 2
  05e81b8  blr

FUN_005e81c0:   # 0x5e81c0, 0x30 bytes
  05e81c0  lfs 1, 0(3)
  05e81c4  lfs 2, 0(4)
  05e81c8  lfs 3, 4(3)
  05e81cc  lfs 4, 4(4)
  05e81d0  fmuls 1, 1, 2
  05e81d4  fmuls 2, 3, 4
  05e81d8  lfs 3, 8(3)
  05e81dc  lfs 4, 8(4)
  05e81e0  fmuls 3, 3, 4
  05e81e4  fadds 1, 1, 2
  05e81e8  fadds 1, 1, 3
  05e81ec  blr

FUN_005e81f0:   # 0x5e81f0, 0x3c bytes
  05e81f0  lfs 1, 0(4)
  05e81f4  lfs 2, 0(5)
  05e81f8  lfs 3, 4(4)
  05e81fc  fsubs 1, 1, 2
  05e8200  lfs 2, 4(5)
  05e8204  lfs 4, 8(4)
  05e8208  fsubs 2, 3, 2
  05e820c  lfs 3, 8(5)
  05e8210  fsubs 3, 4, 3
  05e8214  lfs 4, 12(4)
  05e8218  stfs 4, 12(3)
  05e821c  stfs 1, 0(3)
  05e8220  stfs 2, 4(3)
  05e8224  stfs 3, 8(3)
  05e8228  blr

FUN_005e822c:   # 0x5e822c, 0x30 bytes
  05e822c  lfs 2, 0(4)
  05e8230  fmuls 2, 2, 1
  05e8234  stfs 2, 0(3)
  05e8238  lfs 2, 4(4)
  05e823c  fmuls 2, 2, 1
  05e8240  stfs 2, 4(3)
  05e8244  lfs 2, 8(4)
  05e8248  fmuls 1, 2, 1
  05e824c  stfs 1, 8(3)
  05e8250  lfs 1, 12(4)
  05e8254  stfs 1, 12(3)
  05e8258  blr

FUN_005e825c:   # 0x5e825c, 0xd4 bytes
  05e825c  lfs 1, 0(5)
  05e8260  lfs 2, 0(4)
  05e8264  lfs 3, 16(5)
  05e8268  lfs 4, 4(4)
  05e826c  fmuls 1, 1, 2
  05e8270  lfs 5, 4(5)
  05e8274  fmuls 3, 3, 4
  05e8278  lfs 6, 20(5)
  05e827c  lfs 7, 32(5)
  05e8280  fmuls 5, 5, 2
  05e8284  fmuls 6, 6, 4
  05e8288  lfs 8, 8(4)
  05e828c  lfs 9, 8(5)
  05e8290  lfs 10, 24(5)
  05e8294  lfs 11, 36(5)
  05e8298  fmuls 9, 9, 2
  05e829c  lfs 12, 12(5)
  05e82a0  fmuls 10, 10, 4
  05e82a4  fmuls 7, 7, 8
  05e82a8  fmuls 2, 12, 2
  05e82ac  fmuls 11, 11, 8
  05e82b0  fadds 1, 1, 3
  05e82b4  lfs 3, 28(5)
  05e82b8  lfs 13, 48(5)
  05e82bc  fmuls 3, 3, 4
  05e82c0  fadds 5, 5, 6
  05e82c4  lfs 6, 12(4)
  05e82c8  lfs 4, 40(5)
  05e82cc  fmuls 12, 13, 6
  05e82d0  lfs 13, 52(5)
  05e82d4  lfs 0, 44(5)
  05e82d8  fmuls 4, 4, 8
  05e82dc  fadds 9, 9, 10
  05e82e0  fmuls 8, 0, 8
  05e82e4  fadds 1, 1, 7
  05e82e8  fadds 2, 2, 3
  05e82ec  lfs 7, 56(5)
  05e82f0  fmuls 13, 13, 6
  05e82f4  fadds 5, 5, 11
  05e82f8  lfs 3, 60(5)
  05e82fc  fmuls 7, 7, 6
  05e8300  fmuls 3, 3, 6
  05e8304  fadds 4, 9, 4
  05e8308  fadds 1, 1, 12
  05e830c  fadds 2, 2, 8
  05e8310  fadds 5, 5, 13
  05e8314  fadds 4, 4, 7
  05e8318  fadds 2, 2, 3
  05e831c  stfs 1, 0(3)
  05e8320  stfs 5, 4(3)
  05e8324  stfs 4, 8(3)
  05e8328  stfs 2, 12(3)
  05e832c  blr

FUN_005e8338:   # 0x5e8338, 0x180 bytes
  05e8338  stdu 1, -96(1)
  05e833c  fabs 5, 1
  05e8340  stfs 2, 52(1)
  05e8344  fabs 4, 2
  05e8348  stfs 1, 48(1)
  05e834c  lis 3, 95
  05e8350  lis 4, 115
  05e8354  addi 3, 3, -31952
  05e8358  addic 4, 4, 22784
  05e835c  addic 5, 4, 4
  05e8360  fsubs 1, 5, 4
  05e8364  stfs 1, 56(1)
  05e8368  lfs 1, 0(3)
  05e836c  lwz 3, 52(1)
  05e8370  lwz 6, 48(1)
  05e8374  lwz 7, 56(1)
  05e8378  rlwinm 3, 3, 3, 29, 29
  05e837c  lfs 2, 56(1)
  05e8380  rlwimi 3, 7, 2, 30, 30
  05e8384  fcmpu 0, 2, 1
  05e8388  rlwimi 3, 6, 4, 28, 28
  05e838c  slwi 3, 3, 2
  05e8390  addc 5, 5, 3
  05e8394  clrldi 5, 5, 32
  05e8398  lfsx 3, 4, 3
  05e839c  lfs 2, 0(5)
  05e83a0  bt 0, 0x5e83b4
  05e83a4  lfs 5, 52(1)
  05e83a8  lfs 4, 48(1)
  05e83ac  fabs 5, 5
  05e83b0  fabs 4, 4
  05e83b4  fcmpu 0, 4, 1
  05e83b8  bt 1, 0x5e83c0
  05e83bc  b 0x5e84b0
  05e83c0  fsubs 6, 5, 4
  05e83c4  fadds 5, 5, 4
  05e83c8  li 4, 4
  05e83cc  ori 5, 1, 0
  05e83d0  ori 3, 4, 0
  05e83d4  fdivs 5, 6, 5
  05e83d8  addic 4, 4, -1
  05e83dc  stfs 5, 60(5)
  05e83e0  cmpwi 4, 0
  05e83e4  addic 5, 5, 4
  05e83e8  bf 2, 0x5e83d8
  05e83ec  fmuls 4, 5, 5
  05e83f0  addic 4, 1, 16
  05e83f4  lfs 5, 72(1)
  05e83f8  lfs 6, 64(1)
  05e83fc  lfs 8, 68(1)
  05e8400  fmuls 7, 4, 4
  05e8404  fmuls 6, 6, 4
  05e8408  fmuls 9, 5, 7
  05e840c  fmuls 8, 8, 7
  05e8410  fmuls 5, 7, 7
  05e8414  stfs 6, 64(1)
  05e8418  fmuls 4, 9, 4
  05e841c  stfs 8, 68(1)
  05e8420  stfs 4, 72(1)
  05e8424  lfs 4, 44(4)
  05e8428  addic 3, 3, -1
  05e842c  fmuls 4, 4, 5
  05e8430  cmpwi 3, 0
  05e8434  stfs 4, 60(4)
  05e8438  addic 4, 4, 4
  05e843c  bf 2, 0x5e8424
  05e8440  lis 7, 115
  05e8444  li 4, 8
  05e8448  addic 7, 7, 22752
  05e844c  li 6, 0
  05e8450  ori 5, 1, 0
  05e8454  ori 3, 4, 0
  05e8458  lfs 4, 60(5)
  05e845c  lfsx 5, 7, 6
  05e8460  addic 4, 4, -1
  05e8464  addic 6, 6, 4
  05e8468  fmuls 4, 4, 5
  05e846c  cmpwi 4, 0
  05e8470  stfs 4, 60(5)
  05e8474  addic 5, 5, 4
  05e8478  bf 2, 0x5e8458
  05e847c  ori 4, 1, 0
  05e8480  addic 3, 3, -1
  05e8484  lfs 4, 60(4)
  05e8488  cmpwi 3, 0
  05e848c  addic 4, 4, 4
  05e8490  fadds 1, 1, 4
  05e8494  bf 2, 0x5e8480
  05e8498  lis 3, 95
  05e849c  addi 3, 3, -31952
  05e84a0  lfs 4, 4(3)
  05e84a4  fadds 1, 1, 4
  05e84a8  fmuls 1, 1, 3
  05e84ac  fadds 1, 1, 2
  05e84b0  addi 1, 1, 96
  05e84b4  blr

FUN_005e84c0:   # 0x5e84c0, 0x84 bytes
  05e84c0  lfs 4, 0(4)
  05e84c4  lfs 2, 4(4)
  05e84c8  fmuls 3, 4, 4
  05e84cc  fmuls 2, 2, 2
  05e84d0  lis 5, 95
  05e84d4  addi 5, 5, -31560
  05e84d8  fadds 3, 3, 2
  05e84dc  lfs 2, 0(5)
  05e84e0  fsqrts 3, 3
  05e84e4  fcmpu 0, 3, 2
  05e84e8  bf 2, 0x5e8518
  05e84ec  lfs 1, 0(4)
  05e84f0  stfs 1, 0(3)
  05e84f4  lfs 1, 4(4)
  05e84f8  stfs 1, 4(3)
  05e84fc  lfs 1, 8(4)
  05e8500  stfs 1, 8(3)
  05e8504  lfs 1, 12(4)
  05e8508  stfs 2, 4(3)
  05e850c  stfs 1, 12(3)
  05e8510  stfs 2, 0(3)
  05e8514  b 0x5e8540
  05e8518  fdivs 1, 1, 3
  05e851c  fmuls 2, 4, 1
  05e8520  stfs 2, 0(3)
  05e8524  lfs 2, 4(4)
  05e8528  fmuls 1, 2, 1
  05e852c  stfs 1, 4(3)
  05e8530  lfs 1, 8(4)
  05e8534  stfs 1, 8(3)
  05e8538  lfs 1, 12(4)
  05e853c  stfs 1, 12(3)
  05e8540  blr

FUN_005e8548:   # 0x5e8548, 0x40 bytes
  05e8548  lfs 1, 0(3)
  05e854c  lfs 2, 0(4)
  05e8550  lfs 3, 4(3)
  05e8554  lfs 4, 4(4)
  05e8558  fsubs 1, 1, 2
  05e855c  fsubs 2, 3, 4
  05e8560  lfs 3, 8(3)
  05e8564  lfs 4, 8(4)
  05e8568  fsubs 3, 3, 4
  05e856c  fmuls 1, 1, 1
  05e8570  fmuls 2, 2, 2
  05e8574  fmuls 3, 3, 3
  05e8578  fadds 1, 1, 2
  05e857c  fadds 1, 1, 3
  05e8580  fsqrts 1, 1
  05e8584  blr

FUN_005e8588:   # 0x5e8588, 0x2c bytes
  05e8588  lfs 1, 0(3)
  05e858c  lfs 2, 0(4)
  05e8590  lfs 3, 4(3)
  05e8594  lfs 4, 4(4)
  05e8598  fsubs 1, 1, 2
  05e859c  fsubs 2, 3, 4
  05e85a0  fmuls 1, 1, 1
  05e85a4  fmuls 2, 2, 2
  05e85a8  fadds 1, 1, 2
  05e85ac  fsqrts 1, 1
  05e85b0  blr

FUN_005e85b4:   # 0x5e85b4, 0x3c bytes
  05e85b4  slwi 4, 4, 2
  05e85b8  slwi 8, 8, 16
  05e85bc  slwi 7, 7, 8
  05e85c0  slwi 6, 6, 4
  05e85c4  addic 4, 4, 5952
  05e85c8  or 7, 8, 7
  05e85cc  lwz 8, 8(3)
  05e85d0  oris 4, 4, 4
  05e85d4  or 6, 7, 6
  05e85d8  addic 7, 8, 8
  05e85dc  or 5, 6, 5
  05e85e0  stw 4, 0(8)
  05e85e4  stw 7, 8(3)
  05e85e8  stw 5, 4(8)
  05e85ec  blr

FUN_005e85f0:   # 0x5e85f0, 0x20 bytes
  05e85f0  lis 5, 4
  05e85f4  lwz 6, 8(3)
  05e85f8  ori 5, 5, 772
  05e85fc  addic 7, 6, 8
  05e8600  stw 5, 0(6)
  05e8604  stw 4, 4(6)
  05e8608  stw 7, 8(3)
  05e860c  blr

FUN_005e8610:   # 0x5e8610, 0x28 bytes
  05e8610  slwi 4, 4, 2
  05e8614  lwz 6, 8(3)
  05e8618  li 5, 2
  05e861c  addic 4, 4, 5952
  05e8620  addic 7, 6, 8
  05e8624  oris 4, 4, 4
  05e8628  stw 4, 0(6)
  05e862c  stw 5, 4(6)
  05e8630  stw 7, 8(3)
  05e8634  blr

FUN_005e8638:   # 0x5e8638, 0x54 bytes
  05e8638  lis 5, 144
  05e863c  lbz 5, 11928(5)
  05e8640  cmpwi 5, 0
  05e8644  bt 2, 0x5e8684
  05e8648  lis 6, 345
  05e864c  lwz 3, 1052(3)
  05e8650  rlwinm 5, 4, 24, 24, 31
  05e8654  clrlwi 4, 4, 24
  05e8658  lbz 6, 13136(6)
  05e865c  lbzx 3, 3, 5
  05e8660  cmpwi 6, 0
  05e8664  and 3, 3, 4
  05e8668  cntlzw 3, 3
  05e866c  rlwinm 3, 3, 27, 24, 31
  05e8670  bt 2, 0x5e8680
  05e8674  cntlzw 3, 3
  05e8678  rlwinm 3, 3, 27, 24, 31
  05e867c  b 0x5e8688
  05e8680  b 0x5e8688
  05e8684  li 3, 0
  05e8688  blr

FUN_005e868c:   # 0x5e868c, 0x1c bytes
  05e868c  lfs 1, 0(4)
  05e8690  stfs 1, 0(3)
  05e8694  lfs 1, 4(4)
  05e8698  stfs 1, 4(3)
  05e869c  lfs 1, 8(4)
  05e86a0  stfs 1, 8(3)
  05e86a4  blr

FUN_005e86a8:   # 0x5e86a8, 0x28 bytes
  05e86a8  lfs 2, 0(4)
  05e86ac  lfs 3, 4(4)
  05e86b0  lfs 4, 8(4)
  05e86b4  fdivs 2, 2, 1
  05e86b8  fdivs 3, 3, 1
  05e86bc  fdivs 1, 4, 1
  05e86c0  stfs 2, 0(3)
  05e86c4  stfs 3, 4(3)
  05e86c8  stfs 1, 8(3)
  05e86cc  blr

FUN_005e86d8:   # 0x5e86d8, 0xfc bytes
  05e86d8  ori 9, 3, 0
  05e86dc  rldicl 6, 4, 32, 32
  05e86e0  li 8, 0
  05e86e4  lis 7, 95
  05e86e8  addc 3, 1, 8
  05e86ec  addic 4, 8, 48
  05e86f0  addic 5, 8, 56
  05e86f4  li 8, 0
  05e86f8  addi 7, 7, -31024
  05e86fc  std 9, 48(3)
  05e8700  stw 6, 56(3)
  05e8704  lfs 5, 48(1)
  05e8708  ori 6, 8, 0
  05e870c  lfs 4, 52(3)
  05e8710  lfs 3, 56(1)
  05e8714  lis 9, 162
  05e8718  slwi 10, 8, 4
  05e871c  addic 9, 9, 17832
  05e8720  addc 9, 9, 10
  05e8724  clrldi 9, 9, 32
  05e8728  lfs 6, 0(9)
  05e872c  lfs 7, 4(9)
  05e8730  fmuls 6, 6, 5
  05e8734  fmuls 7, 7, 4
  05e8738  lfs 8, 8(9)
  05e873c  lfs 9, 12(9)
  05e8740  fmuls 8, 8, 3
  05e8744  fadds 6, 6, 7
  05e8748  lfs 7, 0(7)
  05e874c  fadds 6, 6, 8
  05e8750  fadds 6, 6, 9
  05e8754  fadds 6, 6, 1
  05e8758  fcmpu 0, 6, 7
  05e875c  cror 6, 1, 2
  05e8760  bt 6, 0x5e876c
  05e8764  ori 3, 6, 0
  05e8768  b 0x5e87d0
  05e876c  addic 8, 8, 1
  05e8770  cmpwi 8, 5
  05e8774  bt 0, 0x5e8714
  05e8778  lis 7, 162
  05e877c  lfsx 3, 1, 4
  05e8780  lfs 4, 52(3)
  05e8784  fadds 1, 2, 1
  05e8788  addic 8, 7, 17928
  05e878c  lfs 5, 17928(7)
  05e8790  lfs 6, 4(8)
  05e8794  fsubs 3, 3, 5
  05e8798  lfsx 5, 1, 5
  05e879c  fsubs 4, 4, 6
  05e87a0  lfs 6, 8(8)
  05e87a4  ori 3, 6, 0
  05e87a8  fmuls 1, 1, 1
  05e87ac  fsubs 5, 5, 6
  05e87b0  fmuls 2, 3, 3
  05e87b4  fmuls 3, 4, 4
  05e87b8  fmuls 4, 5, 5
  05e87bc  fadds 2, 2, 3
  05e87c0  fadds 2, 2, 4
  05e87c4  fcmpu 0, 2, 1
  05e87c8  bt 1, 0x5e87d0
  05e87cc  li 3, 1
  05e87d0  blr

FUN_005e87d8:   # 0x5e87d8, 0x10 bytes
  05e87d8  stfs 1, 0(3)
  05e87dc  stfs 2, 4(3)
  05e87e0  stfs 3, 8(3)
  05e87e4  blr

FUN_005e87e8:   # 0x5e87e8, 0x60 bytes
  05e87e8  rldicl 4, 4, 32, 32
  05e87ec  li 7, 0
  05e87f0  rldicl 6, 6, 32, 32
  05e87f4  addc 7, 1, 7
  05e87f8  std 3, 48(7)
  05e87fc  std 5, 64(7)
  05e8800  stw 4, 56(7)
  05e8804  stw 6, 72(7)
  05e8808  lfs 1, 52(7)
  05e880c  lfs 2, 68(7)
  05e8810  fsubs 1, 1, 2
  05e8814  lfs 2, 48(7)
  05e8818  lfs 3, 64(7)
  05e881c  lfs 4, 56(7)
  05e8820  fsubs 2, 2, 3
  05e8824  lfs 3, 72(7)
  05e8828  fsubs 3, 4, 3
  05e882c  fmuls 1, 1, 1
  05e8830  fmuls 2, 2, 2
  05e8834  fmuls 3, 3, 3
  05e8838  fadds 1, 2, 1
  05e883c  fadds 1, 1, 3
  05e8840  fsqrts 1, 1
  05e8844  blr

FUN_005e8848:   # 0x5e8848, 0x14 bytes
  05e8848  stfs 1, 0(3)
  05e884c  stfs 2, 4(3)
  05e8850  stfs 3, 8(3)
  05e8854  stfs 4, 12(3)
  05e8858  blr

FUN_005e885c:   # 0x5e885c, 0x54 bytes
  05e885c  stdu 1, -112(1)
  05e8860  stfs 1, 96(1)
  05e8864  addic 4, 1, 48
  05e8868  stfs 1, 100(1)
  05e886c  stfs 1, 104(1)
  05e8870  stfs 1, 108(1)
  05e8874  addic 5, 1, 64
  05e8878  lvx 2, 0, 3
  05e887c  li 0, 96
  05e8880  vspltisw 3, 0
  05e8884  addic 3, 1, 80
  05e8888  lvx 4, 1, 0
  05e888c  stvx 4, 0, 4
  05e8890  lvx 4, 0, 4
  05e8894  stvx 4, 0, 5
  05e8898  lvx 4, 0, 5
  05e889c  vmaddfp 2, 2, 4, 3
  05e88a0  stvx 2, 0, 3
  05e88a4  lvx 2, 0, 3
  05e88a8  addi 1, 1, 112
  05e88ac  blr

FUN_005e88f0:   # 0x5e88f0, 0x44 bytes
  05e88f0  lis 4, 95
  05e88f4  li 7, 16
  05e88f8  addi 4, 4, -30544
  05e88fc  li 5, 16
  05e8900  li 6, 32
  05e8904  li 9, 32
  05e8908  li 10, 48
  05e890c  lvx 2, 0, 4
  05e8910  li 8, 48
  05e8914  stvx 2, 0, 3
  05e8918  lvx 2, 7, 4
  05e891c  stvx 2, 5, 3
  05e8920  lvx 2, 6, 4
  05e8924  stvx 2, 9, 3
  05e8928  lvx 2, 10, 4
  05e892c  stvx 2, 8, 3
  05e8930  blr

FUN_005e8940:   # 0x5e8940, 0x30 bytes
  05e8940  li 5, 16
  05e8944  lvx 2, 0, 4
  05e8948  li 7, 32
  05e894c  stvx 2, 0, 3
  05e8950  li 6, 48
  05e8954  lvx 2, 5, 4
  05e8958  stvx 2, 5, 3
  05e895c  lvx 2, 7, 4
  05e8960  stvx 2, 7, 3
  05e8964  lvx 2, 6, 4
  05e8968  stvx 2, 6, 3
  05e896c  blr

FUN_005e8970:   # 0x5e8970, 0x2c bytes
  05e8970  slwi 4, 4, 2
  05e8974  lis 6, -32768
  05e8978  addic 4, 4, 5760
  05e897c  or 5, 5, 6
  05e8980  lwz 6, 8(3)
  05e8984  oris 4, 4, 4
  05e8988  addic 7, 6, 8
  05e898c  stw 4, 0(6)
  05e8990  stw 5, 4(6)
  05e8994  stw 7, 8(3)
  05e8998  blr

FUN_005e899c:   # 0x5e899c, 0x28 bytes
  05e899c  lis 5, 8
  05e89a0  lwz 7, 8(3)
  05e89a4  li 6, 17
  05e89a8  ori 5, 5, 6172
  05e89ac  addic 8, 7, 12
  05e89b0  stw 5, 0(7)
  05e89b4  stw 4, 4(7)
  05e89b8  stw 6, 8(7)
  05e89bc  stw 8, 8(3)
  05e89c0  blr

FUN_005e89c4:   # 0x5e89c4, 0x30 bytes
  05e89c4  li 5, 16
  05e89c8  lvx 2, 0, 4
  05e89cc  li 7, 32
  05e89d0  stvx 2, 0, 3
  05e89d4  li 6, 48
  05e89d8  lvx 2, 5, 4
  05e89dc  stvx 2, 5, 3
  05e89e0  lvx 2, 7, 4
  05e89e4  stvx 2, 7, 3
  05e89e8  lvx 2, 6, 4
  05e89ec  stvx 2, 6, 3
  05e89f0  blr

FUN_005e89f4:   # 0x5e89f4, 0xa0 bytes
  05e89f4  stdu 1, -144(1)
  05e89f8  stfs 1, 128(1)
  05e89fc  li 9, 32
  05e8a00  stfs 1, 132(1)
  05e8a04  li 10, 16
  05e8a08  stfs 1, 136(1)
  05e8a0c  li 11, 48
  05e8a10  stfs 1, 140(1)
  05e8a14  addic 4, 1, 48
  05e8a18  lvx 2, 0, 3
  05e8a1c  addic 5, 1, 112
  05e8a20  li 0, 128
  05e8a24  vspltisw 3, 0
  05e8a28  addic 6, 1, 96
  05e8a2c  addic 8, 1, 80
  05e8a30  addic 7, 1, 64
  05e8a34  lvx 4, 1, 0
  05e8a38  stvx 4, 0, 4
  05e8a3c  lvx 4, 10, 3
  05e8a40  lvx 5, 9, 3
  05e8a44  lvx 6, 11, 3
  05e8a48  lvx 7, 0, 4
  05e8a4c  stvx 7, 0, 5
  05e8a50  stvx 7, 0, 6
  05e8a54  stvx 7, 0, 8
  05e8a58  stvx 7, 0, 7
  05e8a5c  lvx 7, 0, 5
  05e8a60  lvx 8, 0, 6
  05e8a64  vmaddfp 2, 2, 7, 3
  05e8a68  vmaddfp 4, 4, 8, 3
  05e8a6c  lvx 7, 0, 8
  05e8a70  lvx 8, 0, 7
  05e8a74  vmaddfp 5, 5, 7, 3
  05e8a78  vmaddfp 3, 6, 8, 3
  05e8a7c  stvx 2, 0, 3
  05e8a80  stvx 4, 10, 3
  05e8a84  stvx 5, 9, 3
  05e8a88  stvx 3, 11, 3
  05e8a8c  addi 1, 1, 144
  05e8a90  blr

FUN_005e8a94:   # 0x5e8a94, 0x7c bytes
  05e8a94  stdu 1, -80(1)
  05e8a98  addic 5, 1, 48
  05e8a9c  lvx 2, 0, 4
  05e8aa0  addic 7, 4, 32
  05e8aa4  addic 6, 1, 64
  05e8aa8  li 8, 16
  05e8aac  li 9, 48
  05e8ab0  stvx 2, 0, 5
  05e8ab4  lvx 3, 0, 7
  05e8ab8  addic 7, 4, 16
  05e8abc  addic 4, 4, 48
  05e8ac0  stvx 3, 0, 6
  05e8ac4  vmrglw 2, 2, 3
  05e8ac8  lvx 3, 0, 7
  05e8acc  lvx 4, 0, 4
  05e8ad0  li 4, 32
  05e8ad4  vmrghw 5, 3, 4
  05e8ad8  vmrglw 3, 3, 4
  05e8adc  vmrghw 4, 2, 3
  05e8ae0  vmrglw 2, 2, 3
  05e8ae4  lvx 3, 0, 5
  05e8ae8  lvx 6, 0, 6
  05e8aec  vmrghw 3, 3, 6
  05e8af0  vmrghw 6, 3, 5
  05e8af4  vmrglw 3, 3, 5
  05e8af8  stvx 6, 0, 3
  05e8afc  stvx 3, 8, 3
  05e8b00  stvx 4, 4, 3
  05e8b04  stvx 2, 9, 3
  05e8b08  addi 1, 1, 80
  05e8b0c  blr

FUN_005e8b10:   # 0x5e8b10, 0x10 bytes
  05e8b10  stfs 1, 0(3)
  05e8b14  stfs 2, 4(3)
  05e8b18  stfs 3, 8(3)
  05e8b1c  blr

FUN_005e8b20:   # 0x5e8b20, 0x3c bytes
  05e8b20  lis 5, 16396
  05e8b24  lwz 8, 8(3)
  05e8b28  li 6, 0
  05e8b2c  ori 5, 5, 5908
  05e8b30  lis 7, 4
  05e8b34  addic 9, 8, 24
  05e8b38  ori 7, 7, 6152
  05e8b3c  stw 5, 0(8)
  05e8b40  stw 6, 4(8)
  05e8b44  stw 6, 8(8)
  05e8b48  stw 6, 12(8)
  05e8b4c  stw 7, 16(8)
  05e8b50  stw 4, 20(8)
  05e8b54  stw 9, 8(3)
  05e8b58  blr

FUN_005e8b5c:   # 0x5e8b5c, 0x108 bytes
  05e8b5c  ori 6, 3, 0
  05e8b60  ori 3, 4, 0
  05e8b64  li 4, 256
  05e8b68  clrlwi 7, 3, 24
  05e8b6c  subc 7, 4, 7
  05e8b70  subc 4, 5, 7
  05e8b74  srawi 8, 4, 31
  05e8b78  and 4, 4, 8
  05e8b7c  ori 8, 6, 0
  05e8b80  addc 7, 7, 4
  05e8b84  subc 4, 5, 7
  05e8b88  cmpwi 7, 0
  05e8b8c  srawi 5, 4, 31
  05e8b90  not 5, 5
  05e8b94  and 6, 4, 5
  05e8b98  cntlzw 4, 7
  05e8b9c  rlwinm 5, 6, 0, 0, 23
  05e8ba0  srwi 9, 4, 5
  05e8ba4  subc 5, 6, 5
  05e8ba8  addic 4, 8, 8
  05e8bac  cntlzw 10, 5
  05e8bb0  srwi 6, 6, 8
  05e8bb4  srwi 8, 10, 5
  05e8bb8  xori 9, 9, 1
  05e8bbc  xori 8, 8, 1
  05e8bc0  lwz 10, 0(4)
  05e8bc4  cmpwi 1, 5, 0
  05e8bc8  addc 8, 6, 8
  05e8bcc  addc 8, 8, 9
  05e8bd0  addic 9, 10, 4
  05e8bd4  slwi 8, 8, 18
  05e8bd8  ori 8, 8, 6180
  05e8bdc  oris 8, 8, 16384
  05e8be0  stw 8, 0(10)
  05e8be4  stw 9, 0(4)
  05e8be8  bt 2, 0x5e8c0c
  05e8bec  addic 8, 7, -1
  05e8bf0  slwi 8, 8, 24
  05e8bf4  or 8, 3, 8
  05e8bf8  addc 3, 7, 3
  05e8bfc  lwz 7, 0(4)
  05e8c00  addic 9, 7, 4
  05e8c04  stw 8, 0(7)
  05e8c08  stw 9, 0(4)
  05e8c0c  li 7, 0
  05e8c10  cmplw 6, 7
  05e8c14  bf 1, 0x5e8c40
  05e8c18  lis 8, -256
  05e8c1c  lwz 9, 0(4)
  05e8c20  addic 7, 7, 1
  05e8c24  or 8, 3, 8
  05e8c28  addic 10, 9, 4
  05e8c2c  cmplw 7, 6
  05e8c30  addic 3, 3, 256
  05e8c34  stw 8, 0(9)
  05e8c38  stw 10, 0(4)
  05e8c3c  bt 0, 0x5e8c18
  05e8c40  bt 6, 0x5e8c60
  05e8c44  addic 5, 5, -1
  05e8c48  slwi 5, 5, 24
  05e8c4c  or 3, 3, 5
  05e8c50  lwz 5, 0(4)
  05e8c54  addic 6, 5, 4
  05e8c58  stw 3, 0(5)
  05e8c5c  stw 6, 0(4)
  05e8c60  blr

FUN_005e8c64:   # 0x5e8c64, 0x190 bytes
  05e8c64  stdu 1, -256(1)
  05e8c68  mflr 0
  05e8c6c  std 0, 272(1)
  05e8c70  stfd 24, 192(1)
  05e8c74  stfd 25, 200(1)
  05e8c78  stfd 26, 208(1)
  05e8c7c  stfd 27, 216(1)
  05e8c80  stfd 28, 224(1)
  05e8c84  stfd 29, 232(1)
  05e8c88  stfd 30, 240(1)
  05e8c8c  stfd 31, 248(1)
  05e8c90  std 31, 184(1)
  05e8c94  std 30, 176(1)
  05e8c98  ori 31, 4, 0
  05e8c9c  ori 30, 3, 0
  05e8ca0  li 4, 0
  05e8ca4  lfs 1, 0(31)
  05e8ca8  bl 0x5dd914
  05e8cac  nop
  05e8cb0  lfs 2, 0(31)
  05e8cb4  fmr 31, 1
  05e8cb8  li 4, 1
  05e8cbc  fmr 1, 2
  05e8cc0  bl 0x5dd914
  05e8cc4  nop
  05e8cc8  lfs 2, 4(31)
  05e8ccc  fmr 30, 1
  05e8cd0  li 4, 0
  05e8cd4  fmr 1, 2
  05e8cd8  bl 0x5dd914
  05e8cdc  nop
  05e8ce0  lfs 2, 4(31)
  05e8ce4  fmr 29, 1
  05e8ce8  li 4, 1
  05e8cec  fmr 1, 2
  05e8cf0  bl 0x5dd914
  05e8cf4  nop
  05e8cf8  lfs 2, 8(31)
  05e8cfc  fmr 28, 1
  05e8d00  li 4, 0
  05e8d04  fmr 1, 2
  05e8d08  bl 0x5dd914
  05e8d0c  nop
  05e8d10  lfs 2, 8(31)
  05e8d14  fmr 27, 1
  05e8d18  li 4, 1
  05e8d1c  fmr 1, 2
  05e8d20  bl 0x5dd914
  05e8d24  nop
  05e8d28  fmr 26, 1
  05e8d2c  addic 31, 1, 112
  05e8d30  fmuls 25, 29, 27
  05e8d34  lis 4, 115
  05e8d38  ori 3, 31, 0
  05e8d3c  addic 4, 4, 19200
  05e8d40  li 5, 64
  05e8d44  fmuls 24, 26, 29
  05e8d48  bl 0x5c5ad0
  05e8d4c  nop
  05e8d50  fmuls 1, 30, 27
  05e8d54  fmuls 2, 30, 26
  05e8d58  ori 3, 30, 0
  05e8d5c  fmuls 3, 31, 27
  05e8d60  ori 4, 31, 0
  05e8d64  fmuls 6, 26, 31
  05e8d68  li 5, 64
  05e8d6c  fmuls 4, 28, 26
  05e8d70  fmuls 5, 28, 27
  05e8d74  fneg 7, 29
  05e8d78  fmuls 8, 28, 31
  05e8d7c  fmuls 9, 30, 28
  05e8d80  fmsubs 1, 31, 24, 1
  05e8d84  fmadds 2, 31, 25, 2
  05e8d88  fmadds 3, 30, 24, 3
  05e8d8c  fmsubs 6, 30, 25, 6
  05e8d90  stfs 4, 112(1)
  05e8d94  stfs 5, 116(1)
  05e8d98  stfs 7, 120(1)
  05e8d9c  stfs 8, 136(1)
  05e8da0  stfs 9, 152(1)
  05e8da4  stfs 1, 128(1)
  05e8da8  stfs 2, 132(1)
  05e8dac  stfs 3, 144(1)
  05e8db0  stfs 6, 148(1)
  05e8db4  bl 0x5c5ad0
  05e8db8  nop
  05e8dbc  ld 0, 272(1)
  05e8dc0  mtlr 0
  05e8dc4  lfd 24, 192(1)
  05e8dc8  lfd 25, 200(1)
  05e8dcc  lfd 26, 208(1)
  05e8dd0  lfd 27, 216(1)
  05e8dd4  lfd 28, 224(1)
  05e8dd8  lfd 29, 232(1)
  05e8ddc  lfd 30, 240(1)
  05e8de0  lfd 31, 248(1)
  05e8de4  ld 30, 176(1)
  05e8de8  ld 31, 184(1)
  05e8dec  addi 1, 1, 256
  05e8df0  blr

STUB_005e8df4:   # 0x5e8df4, 0x4 bytes
  05e8df4  blr

FUN_005e8e08:   # 0x5e8e08, 0x74 bytes
  05e8e08  lis 3, 95
  05e8e0c  fabs 2, 1
  05e8e10  addi 3, 3, -29192
  05e8e14  lis 4, 115
  05e8e18  lfs 3, 4(3)
  05e8e1c  lfs 4, 0(3)
  05e8e20  fsub 5, 1, 3
  05e8e24  addic 5, 4, 22720
  05e8e28  lfs 7, 22720(4)
  05e8e2c  lfs 9, 4(5)
  05e8e30  fsel 2, 5, 1, 2
  05e8e34  fsub 1, 1, 3
  05e8e38  fsubs 5, 4, 2
  05e8e3c  fmuls 6, 2, 2
  05e8e40  fsub 8, 5, 3
  05e8e44  fmuls 10, 6, 2
  05e8e48  fmadds 2, 2, 9, 7
  05e8e4c  lfs 7, 8(5)
  05e8e50  fsel 5, 8, 5, 3
  05e8e54  fmadds 2, 6, 7, 2
  05e8e58  lfs 7, 8(3)
  05e8e5c  fsel 1, 1, 4, 7
  05e8e60  fsqrts 3, 5
  05e8e64  lfs 5, 12(5)
  05e8e68  fmadds 2, 10, 5, 2
  05e8e6c  lfs 5, 12(3)
  05e8e70  fnmsubs 2, 2, 3, 5
  05e8e74  fmuls 1, 2, 1
  05e8e78  blr

FUN_005e8e80:   # 0x5e8e80, 0x84 bytes
  05e8e80  lfs 3, 4(4)
  05e8e84  lfs 2, 0(4)
  05e8e88  fmuls 3, 3, 3
  05e8e8c  lfs 4, 8(4)
  05e8e90  fmadds 3, 2, 2, 3
  05e8e94  fmadds 3, 4, 4, 3
  05e8e98  fsqrts 3, 3
  05e8e9c  fcmpu 0, 1, 3
  05e8ea0  cror 6, 1, 2
  05e8ea4  bt 6, 0x5e8edc
  05e8ea8  fdivs 1, 1, 3
  05e8eac  fmuls 2, 2, 1
  05e8eb0  stfs 2, 0(3)
  05e8eb4  lfs 2, 4(4)
  05e8eb8  fmuls 2, 2, 1
  05e8ebc  stfs 2, 4(3)
  05e8ec0  lfs 2, 8(4)
  05e8ec4  fmuls 1, 2, 1
  05e8ec8  stfs 1, 8(3)
  05e8ecc  lfs 1, 12(4)
  05e8ed0  stfs 1, 12(3)
  05e8ed4  li 3, 1
  05e8ed8  b 0x5e8f00
  05e8edc  lfs 1, 0(4)
  05e8ee0  stfs 1, 0(3)
  05e8ee4  lfs 1, 4(4)
  05e8ee8  stfs 1, 4(3)
  05e8eec  lfs 1, 8(4)
  05e8ef0  stfs 1, 8(3)
  05e8ef4  lfs 1, 12(4)
  05e8ef8  stfs 1, 12(3)
  05e8efc  li 3, 0
  05e8f00  blr

FUN_005e8f04:   # 0x5e8f04, 0x48 bytes
  05e8f04  lfs 2, 0(5)
  05e8f08  lfs 3, 0(4)
  05e8f0c  lfs 4, 4(5)
  05e8f10  lfs 5, 4(4)
  05e8f14  lfs 6, 8(5)
  05e8f18  fsubs 2, 2, 3
  05e8f1c  lfs 7, 8(4)
  05e8f20  fsubs 4, 4, 5
  05e8f24  lfs 8, 12(5)
  05e8f28  fsubs 6, 6, 7
  05e8f2c  stfs 8, 12(3)
  05e8f30  fmadds 2, 1, 2, 3
  05e8f34  fmadds 3, 1, 4, 5
  05e8f38  fmadds 1, 1, 6, 7
  05e8f3c  stfs 2, 0(3)
  05e8f40  stfs 3, 4(3)
  05e8f44  stfs 1, 8(3)
  05e8f48  blr

FUN_005e8f4c:   # 0x5e8f4c, 0x48 bytes
  05e8f4c  lfs 1, 4(5)
  05e8f50  lfs 2, 8(4)
  05e8f54  lfs 3, 8(5)
  05e8f58  lfs 4, 4(4)
  05e8f5c  lfs 5, 0(4)
  05e8f60  fmuls 6, 3, 4
  05e8f64  lfs 7, 0(5)
  05e8f68  fmuls 8, 1, 5
  05e8f6c  li 4, 0
  05e8f70  fmuls 9, 7, 2
  05e8f74  stw 4, 12(3)
  05e8f78  fmsubs 1, 1, 2, 6
  05e8f7c  fmsubs 2, 7, 4, 8
  05e8f80  fmsubs 3, 3, 5, 9
  05e8f84  stfs 1, 0(3)
  05e8f88  stfs 2, 8(3)
  05e8f8c  stfs 3, 4(3)
  05e8f90  blr

FUN_005e9008:   # 0x5e9008, 0x1a0 bytes
  05e9008  vspltisw 3, 0
  05e900c  lis 7, 95
  05e9010  lvx 2, 0, 6
  05e9014  lvx 4, 0, 4
  05e9018  lvx 5, 0, 5
  05e901c  addi 7, 7, -28768
  05e9020  vmaddfp 6, 2, 2, 3
  05e9024  li 4, 16
  05e9028  vsubfp 5, 5, 4
  05e902c  li 5, 36
  05e9030  lvx 7, 0, 7
  05e9034  lvx 9, 4, 7
  05e9038  vperm 8, 2, 2, 7
  05e903c  vperm 10, 2, 2, 9
  05e9040  li 4, 32
  05e9044  vmaddfp 6, 8, 8, 6
  05e9048  vmaddfp 8, 5, 5, 3
  05e904c  vperm 11, 5, 5, 7
  05e9050  vperm 12, 5, 5, 9
  05e9054  vmaddfp 6, 10, 10, 6
  05e9058  vmaddfp 8, 11, 11, 8
  05e905c  lvlx 10, 4, 7
  05e9060  lvlx 11, 5, 7
  05e9064  vspltw 10, 10, 0
  05e9068  vspltw 11, 11, 0
  05e906c  li 4, 48
  05e9070  li 5, 64
  05e9074  vspltw 6, 6, 0
  05e9078  vmaddfp 8, 12, 12, 8
  05e907c  vrsqrtefp 12, 6
  05e9080  lvx 14, 4, 7
  05e9084  lvx 15, 5, 7
  05e9088  vspltw 8, 8, 0
  05e908c  vrsqrtefp 13, 8
  05e9090  vmaddfp 6, 12, 6, 3
  05e9094  vmaddfp 0, 12, 10, 3
  05e9098  li 4, 96
  05e909c  vnmsubfp 6, 12, 6, 11
  05e90a0  vmaddfp 8, 13, 8, 3
  05e90a4  vmaddfp 1, 13, 10, 3
  05e90a8  vmaddfp 6, 6, 0, 12
  05e90ac  vnmsubfp 8, 13, 8, 11
  05e90b0  li 5, 16
  05e90b4  vcmpeqfp 0, 6, 6
  05e90b8  vmaddfp 8, 8, 1, 13
  05e90bc  vsel 6, 12, 6, 0
  05e90c0  vmaddfp 2, 2, 6, 3
  05e90c4  vcmpeqfp 1, 8, 8
  05e90c8  vsel 8, 13, 8, 1
  05e90cc  vperm 6, 2, 2, 15
  05e90d0  vmaddfp 5, 5, 8, 3
  05e90d4  vperm 2, 2, 2, 14
  05e90d8  li 6, 48
  05e90dc  vperm 8, 5, 5, 14
  05e90e0  vperm 12, 5, 5, 15
  05e90e4  vmaddfp 6, 8, 6, 3
  05e90e8  vnmsubfp 2, 12, 2, 6
  05e90ec  vmaddfp 6, 2, 2, 3
  05e90f0  vperm 13, 2, 2, 7
  05e90f4  vperm 0, 2, 2, 9
  05e90f8  vmaddfp 6, 13, 13, 6
  05e90fc  vmaddfp 6, 0, 0, 6
  05e9100  vspltw 6, 6, 0
  05e9104  vrsqrtefp 13, 6
  05e9108  vmaddfp 6, 13, 6, 3
  05e910c  vmaddfp 0, 13, 10, 3
  05e9110  vnmsubfp 6, 13, 6, 11
  05e9114  vmaddfp 6, 6, 0, 13
  05e9118  vcmpeqfp 0, 6, 6
  05e911c  vsel 6, 13, 6, 0
  05e9120  vmaddfp 2, 2, 6, 3
  05e9124  vperm 6, 2, 2, 14
  05e9128  vperm 13, 2, 2, 15
  05e912c  vmaddfp 6, 6, 12, 3
  05e9130  vnmsubfp 6, 13, 8, 6
  05e9134  vmaddfp 8, 6, 6, 3
  05e9138  vperm 7, 6, 6, 7
  05e913c  vperm 9, 6, 6, 9
  05e9140  vmaddfp 7, 7, 7, 8
  05e9144  vmaddfp 7, 9, 9, 7
  05e9148  lvlx 9, 4, 7
  05e914c  li 4, 80
  05e9150  vspltw 9, 9, 0
  05e9154  lvx 12, 4, 7
  05e9158  vperm 2, 2, 3, 12
  05e915c  li 4, 32
  05e9160  vspltw 7, 7, 0
  05e9164  vxor 5, 5, 9
  05e9168  vrsqrtefp 8, 7
  05e916c  stvx 2, 0, 3
  05e9170  vperm 5, 5, 3, 12
  05e9174  vperm 4, 4, 11, 12
  05e9178  vmaddfp 7, 8, 7, 3
  05e917c  vmaddfp 10, 8, 10, 3
  05e9180  vnmsubfp 7, 8, 7, 11
  05e9184  vmaddfp 2, 7, 10, 8
  05e9188  vcmpeqfp 7, 2, 2
  05e918c  vsel 2, 8, 2, 7
  05e9190  vmaddfp 2, 6, 2, 3
  05e9194  vperm 2, 2, 3, 12
  05e9198  stvx 2, 5, 3
  05e919c  stvx 5, 4, 3
  05e91a0  stvx 4, 6, 3
  05e91a4  blr

FUN_005e91b0:   # 0x5e91b0, 0x4 bytes
  05e91b0  blr

FUN_005e91b4:   # 0x5e91b4, 0x4 bytes
  05e91b4  blr

FUN_005e91b8:   # 0x5e91b8, 0x38 bytes
  05e91b8  li 4, 0
  05e91bc  lis 5, 102
  05e91c0  addic 5, 5, 5948
  05e91c4  stw 4, 0(3)
  05e91c8  stw 4, 4(3)
  05e91cc  stw 4, 8(3)
  05e91d0  stw 4, 12(3)
  05e91d4  stb 4, 16(3)
  05e91d8  stb 4, 17(3)
  05e91dc  stw 4, 20(3)
  05e91e0  stw 5, 24(3)
  05e91e4  stw 4, 28(3)
  05e91e8  stw 4, 32(3)
  05e91ec  blr

FUN_005e91f0:   # 0x5e91f0, 0xc bytes
  05e91f0  li 4, 32
  05e91f4  stvx 2, 4, 3
  05e91f8  blr

FUN_005e91fc:   # 0x5e91fc, 0x40 bytes
  05e91fc  stdu 1, -112(1)
  05e9200  mflr 0
  05e9204  std 0, 128(1)
  05e9208  ori 4, 3, 0
  05e920c  cmpwi 4, 0
  05e9210  bt 2, 0x5e922c
  05e9214  lis 5, 102
  05e9218  ori 4, 3, 0
  05e921c  addic 5, 5, 5904
  05e9220  stw 5, 0(4)
  05e9224  bl 0x5e387c
  05e9228  nop
  05e922c  ld 0, 128(1)
  05e9230  mtlr 0
  05e9234  addi 1, 1, 112
  05e9238  blr

FUN_005e923c:   # 0x5e923c, 0x40 bytes
  05e923c  stdu 1, -112(1)
  05e9240  mflr 0
  05e9244  std 0, 128(1)
  05e9248  ori 4, 3, 0
  05e924c  cmpwi 4, 0
  05e9250  bt 2, 0x5e926c
  05e9254  lis 5, 102
  05e9258  ori 4, 3, 0
  05e925c  addic 5, 5, 5960
  05e9260  stw 5, 0(4)
  05e9264  bl 0x5e387c
  05e9268  nop
  05e926c  ld 0, 128(1)
  05e9270  mtlr 0
  05e9274  addi 1, 1, 112
  05e9278  blr

FUN_005e927c:   # 0x5e927c, 0x40 bytes
  05e927c  stdu 1, -112(1)
  05e9280  mflr 0
  05e9284  std 0, 128(1)
  05e9288  ori 4, 3, 0
  05e928c  cmpwi 4, 0
  05e9290  bt 2, 0x5e92ac
  05e9294  lis 5, 102
  05e9298  ori 4, 3, 0
  05e929c  addic 5, 5, 25616
  05e92a0  stw 5, 0(4)
  05e92a4  bl 0x5e387c
  05e92a8  nop
  05e92ac  ld 0, 128(1)
  05e92b0  mtlr 0
  05e92b4  addi 1, 1, 112
  05e92b8  blr

FUN_005e92bc:   # 0x5e92bc, 0x18 bytes
  05e92bc  lis 4, 102
  05e92c0  li 5, 0
  05e92c4  addic 4, 4, 6368
  05e92c8  stb 5, 4(3)
  05e92cc  stw 4, 0(3)
  05e92d0  blr

FUN_005e92d4:   # 0x5e92d4, 0x48 bytes
  05e92d4  stdu 1, -112(1)
  05e92d8  mflr 0
  05e92dc  std 0, 128(1)
  05e92e0  ori 4, 3, 0
  05e92e4  cmpwi 4, 0
  05e92e8  bt 2, 0x5e930c
  05e92ec  lis 5, 102
  05e92f0  ori 4, 3, 0
  05e92f4  addic 5, 5, 6368
  05e92f8  li 6, 0
  05e92fc  stw 5, 0(4)
  05e9300  stb 6, 4(4)
  05e9304  bl 0x5e387c
  05e9308  nop
  05e930c  ld 0, 128(1)
  05e9310  mtlr 0
  05e9314  addi 1, 1, 112
  05e9318  blr

FUN_005e931c:   # 0x5e931c, 0x18 bytes
  05e931c  lis 4, 102
  05e9320  li 5, 0
  05e9324  addic 4, 4, 6368
  05e9328  stb 5, 4(3)
  05e932c  stw 4, 0(3)
  05e9330  blr

FUN_005e9334:   # 0x5e9334, 0x48 bytes
  05e9334  stdu 1, -112(1)
  05e9338  mflr 0
  05e933c  std 0, 128(1)
  05e9340  ori 4, 3, 0
  05e9344  cmpwi 4, 0
  05e9348  bt 2, 0x5e936c
  05e934c  lis 5, 102
  05e9350  ori 4, 3, 0
  05e9354  addic 5, 5, 6368
  05e9358  li 6, 0
  05e935c  stw 5, 0(4)
  05e9360  stb 6, 4(4)
  05e9364  bl 0x5e387c
  05e9368  nop
  05e936c  ld 0, 128(1)
  05e9370  mtlr 0
  05e9374  addi 1, 1, 112
  05e9378  blr

FUN_005e937c:   # 0x5e937c, 0x40 bytes
  05e937c  stdu 1, -112(1)
  05e9380  mflr 0
  05e9384  std 0, 128(1)
  05e9388  ori 4, 3, 0
  05e938c  cmpwi 4, 0
  05e9390  bt 2, 0x5e93ac
  05e9394  lis 5, 102
  05e9398  ori 4, 3, 0
  05e939c  addic 5, 5, 5984
  05e93a0  stw 5, 0(4)
  05e93a4  bl 0x5e387c
  05e93a8  nop
  05e93ac  ld 0, 128(1)
  05e93b0  mtlr 0
  05e93b4  addi 1, 1, 112
  05e93b8  blr

FUN_005e93bc:   # 0x5e93bc, 0x4 bytes
  05e93bc  blr

FUN_005e93c0:   # 0x5e93c0, 0x4 bytes
  05e93c0  blr

FUN_005e93c4:   # 0x5e93c4, 0x4 bytes
  05e93c4  blr

FUN_005e93c8:   # 0x5e93c8, 0x4 bytes
  05e93c8  blr

FUN_005e93cc:   # 0x5e93cc, 0x4 bytes
  05e93cc  blr

FUN_005e93d0:   # 0x5e93d0, 0x4 bytes
  05e93d0  blr

FUN_005e93d4:   # 0x5e93d4, 0x40 bytes
  05e93d4  stdu 1, -112(1)
  05e93d8  mflr 0
  05e93dc  std 0, 128(1)
  05e93e0  ori 4, 3, 0
  05e93e4  cmpwi 4, 0
  05e93e8  bt 2, 0x5e9404
  05e93ec  lis 5, 102
  05e93f0  ori 4, 3, 0
  05e93f4  addic 5, 5, 6012
  05e93f8  stw 5, 0(4)
  05e93fc  bl 0x5e387c
  05e9400  nop
  05e9404  ld 0, 128(1)
  05e9408  mtlr 0
  05e940c  addi 1, 1, 112
  05e9410  blr

FUN_005e9414:   # 0x5e9414, 0x34 bytes
  05e9414  lis 0, 1
  05e9418  cmpw 7, 4, 0
  05e941c  bf 29, 0x5e9424
  05e9420  lis 4, 1
  05e9424  extsw 0, 4
  05e9428  std 0, -16(1)
  05e942c  lfd 13, -16(1)
  05e9430  fcfid 13, 13
  05e9434  frsp 0, 13
  05e9438  lfs 13, -32616(2)
  05e943c  fmuls 0, 0, 13
  05e9440  stfs 0, 92(3)
  05e9444  blr

FUN_005e9448:   # 0x5e9448, 0xc bytes
  05e9448  stw 4, 140(3)
  05e944c  mr 3, 4
  05e9450  blr

FUN_005e9454:   # 0x5e9454, 0x30 bytes
  05e9454  cmplwi 7, 3, 2
  05e9458  mr 0, 3
  05e945c  bt 29, 0x5e9470
  05e9460  lwz 9, -32612(2)
  05e9464  lwz 3, -32608(2)
  05e9468  stw 0, 0(9)
  05e946c  blr
  05e9470  lwz 9, -32612(2)
  05e9474  li 0, 8
  05e9478  lwz 3, -32608(2)
  05e947c  stw 0, 0(9)
  05e9480  blr

FUN_005e9484:   # 0x5e9484, 0xd8 bytes
  05e9484  cmpwi 7, 4, 0
  05e9488  mflr 0
  05e948c  stdu 1, -128(1)
  05e9490  std 30, 112(1)
  05e9494  std 31, 120(1)
  05e9498  std 0, 144(1)
  05e949c  mr 31, 4
  05e94a0  mr 30, 3
  05e94a4  addi 9, 3, 88
  05e94a8  bf 30, 0x5e94d8
  05e94ac  lwz 0, 60(9)
  05e94b0  cmpwi 7, 0, 0
  05e94b4  bt 30, 0x5e9510
  05e94b8  stw 31, 52(30)
  05e94bc  ld 0, 144(1)
  05e94c0  extsw 3, 31
  05e94c4  ld 30, 112(1)
  05e94c8  ld 31, 120(1)
  05e94cc  mtlr 0
  05e94d0  addi 1, 1, 128
  05e94d4  blr
  05e94d8  lwz 0, 60(9)
  05e94dc  cmpwi 7, 0, 0
  05e94e0  bf 30, 0x5e94b8
  05e94e4  lwz 0, 64(9)
  05e94e8  cmpwi 7, 0, 0
  05e94ec  bf 30, 0x5e94b8
  05e94f0  lwz 0, 52(3)
  05e94f4  cmpwi 7, 0, 0
  05e94f8  bf 30, 0x5e94b8
  05e94fc  lwz 9, -32612(2)
  05e9500  lwz 11, 8(9)
  05e9504  lwz 0, 0(11)
  05e9508  stw 0, 12(9)
  05e950c  b 0x5e94b8
  05e9510  lwz 0, 64(9)
  05e9514  li 4, 0
  05e9518  cmpwi 7, 0, 0
  05e951c  bf 30, 0x5e94b8
  05e9520  lwz 11, -32612(2)
  05e9524  lwz 9, 0(11)
  05e9528  lwz 3, 4(11)
  05e952c  xori 9, 9, 2
  05e9530  srawi 11, 9, 31
  05e9534  xor 0, 11, 9
  05e9538  sub 0, 11, 0
  05e953c  srawi 0, 0, 31
  05e9540  rlwinm 5, 0, 0, 15, 16
  05e9544  addis 5, 5, 1
  05e9548  addi 5, 5, -32768
  05e954c  clrldi 5, 5, 32
  05e9550  bl 0x5d0140
  05e9554  nop
  05e9558  b 0x5e94b8

FUN_005e9560:   # 0x5e9560, 0x94 bytes
  05e9560  cmplwi 7, 5, 8
  05e9564  mr 10, 3
  05e9568  addi 11, 3, 88
  05e956c  bf 29, 0x5e9574
  05e9570  li 5, 8
  05e9574  mr 9, 10
  05e9578  li 0, 0
  05e957c  cmpwi 7, 5, 0
  05e9580  stwu 0, 96(9)
  05e9584  stw 0, 28(9)
  05e9588  stw 0, 4(9)
  05e958c  stw 0, 8(9)
  05e9590  stw 0, 12(9)
  05e9594  stw 0, 16(9)
  05e9598  stw 0, 20(9)
  05e959c  stw 0, 24(9)
  05e95a0  lwz 3, 40(3)
  05e95a4  bclr 12, 30
  05e95a8  clrldi 5, 5, 32
  05e95ac  addi 3, 3, -1
  05e95b0  mr 10, 11
  05e95b4  mtctr 5
  05e95b8  li 8, 0
  05e95bc  nop
  05e95c0  and 0, 3, 8
  05e95c4  slw 9, 8, 3
  05e95c8  clrldi 11, 10, 32
  05e95cc  add 9, 9, 0
  05e95d0  addi 8, 8, 1
  05e95d4  slwi 9, 9, 2
  05e95d8  addi 10, 10, 4
  05e95dc  add 9, 9, 4
  05e95e0  clrldi 9, 9, 32
  05e95e4  lfs 0, 0(9)
  05e95e8  stfs 0, 8(11)
  05e95ec  bdnz 0x5e95c0
  05e95f0  blr

FUN_005e95f8:   # 0x5e95f8, 0x250 bytes
  05e95f8  stdu 1, -240(1)
  05e95fc  mflr 0
  05e9600  std 27, 200(1)
  05e9604  mr 27, 4
  05e9608  std 30, 224(1)
  05e960c  std 31, 232(1)
  05e9610  mr 30, 3
  05e9614  mr 31, 3
  05e9618  li 4, 0
  05e961c  clrldi 3, 3, 32
  05e9620  li 5, 384
  05e9624  std 25, 184(1)
  05e9628  std 26, 192(1)
  05e962c  std 28, 208(1)
  05e9630  mr 26, 8
  05e9634  mr 28, 6
  05e9638  std 29, 216(1)
  05e963c  std 0, 256(1)
  05e9640  bl 0x5d0140
  05e9644  nop
  05e9648  lwz 25, -32612(2)
  05e964c  slwi 8, 27, 4
  05e9650  slwi 29, 27, 2
  05e9654  lis 10, 4194
  05e9658  sub 8, 8, 29
  05e965c  ori 10, 10, 19923
  05e9660  li 0, 0
  05e9664  addi 12, 31, 88
  05e9668  stw 0, 80(31)
  05e966c  li 0, 16
  05e9670  lis 7, 16256
  05e9674  stw 0, 36(31)
  05e9678  li 9, -5
  05e967c  lis 0, 16128
  05e9680  stw 9, 76(31)
  05e9684  stw 27, 32(31)
  05e9688  stw 28, 40(31)
  05e968c  mullw 11, 28, 8
  05e9690  mulhwu 11, 11, 10
  05e9694  srwi 11, 11, 6
  05e9698  stw 11, 44(31)
  05e969c  stw 26, 56(12)
  05e96a0  stw 0, 4(12)
  05e96a4  stw 7, 0(12)
  05e96a8  stw 7, 8(12)
  05e96ac  stw 7, 12(12)
  05e96b0  lwz 28, 0(25)
  05e96b4  cmplwi 7, 28, 5
  05e96b8  bf 29, 0x5e96d0
  05e96bc  cmplwi 7, 28, 7
  05e96c0  stw 7, 24(12)
  05e96c4  stw 7, 28(12)
  05e96c8  bt 29, 0x5e979c
  05e96cc  nop
  05e96d0  lis 9, -20797
  05e96d4  lwz 10, -32604(2)
  05e96d8  li 29, 0
  05e96dc  lwz 8, -32600(2)
  05e96e0  ori 9, 9, 15903
  05e96e4  lwz 7, -32596(2)
  05e96e8  stw 29, 52(12)
  05e96ec  sldi 9, 9, 32
  05e96f0  lwz 11, 32(31)
  05e96f4  li 0, 1
  05e96f8  lwz 6, -32592(2)
  05e96fc  oris 9, 9, 26389
  05e9700  lwz 5, -32588(2)
  05e9704  sldi 11, 11, 16
  05e9708  lwz 4, -32584(2)
  05e970c  ori 9, 9, 10661
  05e9710  lwz 3, -32580(2)
  05e9714  stw 0, 52(31)
  05e9718  li 0, 32
  05e971c  stw 10, 356(31)
  05e9720  stw 8, 360(31)
  05e9724  stw 7, 364(31)
  05e9728  stw 6, 368(31)
  05e972c  stw 5, 372(31)
  05e9730  stw 4, 376(31)
  05e9734  stw 3, 380(31)
  05e9738  stw 0, 56(31)
  05e973c  stw 29, 60(12)
  05e9740  mulhdu 11, 11, 9
  05e9744  rldicl 11, 11, 49, 15
  05e9748  stw 11, 40(12)
  05e974c  lwz 31, 16(25)
  05e9750  cmpwi 7, 31, 0
  05e9754  stw 31, 64(12)
  05e9758  bt 30, 0x5e97a8
  05e975c  clrldi 9, 31, 32
  05e9760  li 3, 1
  05e9764  stw 30, 148(9)
  05e9768  stw 30, 16(25)
  05e976c  ld 0, 256(1)
  05e9770  extsw 3, 3
  05e9774  ld 25, 184(1)
  05e9778  ld 26, 192(1)
  05e977c  mtlr 0
  05e9780  ld 27, 200(1)
  05e9784  ld 28, 208(1)
  05e9788  ld 29, 216(1)
  05e978c  ld 30, 224(1)
  05e9790  ld 31, 232(1)
  05e9794  addi 1, 1, 240
  05e9798  blr
  05e979c  stw 7, 36(12)
  05e97a0  stw 7, 32(12)
  05e97a4  b 0x5e96d0
  05e97a8  xori 0, 28, 2
  05e97ac  lwz 29, -32576(2)
  05e97b0  addi 3, 1, 112
  05e97b4  srawi 11, 0, 31
  05e97b8  mr 4, 29
  05e97bc  xor 9, 11, 0
  05e97c0  li 0, 16
  05e97c4  sub 9, 11, 9
  05e97c8  li 11, 0
  05e97cc  srawi 9, 9, 31
  05e97d0  ori 11, 11, 65535
  05e97d4  extsw 9, 9
  05e97d8  std 0, 120(1)
  05e97dc  rlwinm 9, 9, 0, 29, 30
  05e97e0  lis 0, 16256
  05e97e4  addi 9, 9, 2
  05e97e8  stw 11, 0(29)
  05e97ec  std 9, 112(1)
  05e97f0  li 9, 4096
  05e97f4  stw 31, 20(25)
  05e97f8  std 9, 128(1)
  05e97fc  stw 0, 136(1)
  05e9800  bl 0x64fe44
  05e9804  ld 2, 40(1)
  05e9808  cmpwi 7, 3, 0
  05e980c  li 3, 0
  05e9810  bf 30, 0x5e976c
  05e9814  lwz 3, 0(29)
  05e9818  addi 4, 1, 144
  05e981c  stw 31, 144(1)
  05e9820  bl 0x64fe04
  05e9824  ld 2, 40(1)
  05e9828  lwz 9, 144(1)
  05e982c  lwz 0, 172(1)
  05e9830  addi 9, 9, 4
  05e9834  li 3, 1
  05e9838  stw 30, 16(25)
  05e983c  stw 0, 4(25)
  05e9840  stw 9, 8(25)
  05e9844  b 0x5e976c

FUN_005e9848:   # 0x5e9848, 0x144 bytes
  05e9848  mr 9, 3
  05e984c  mflr 0
  05e9850  stdu 1, -144(1)
  05e9854  std 28, 112(1)
  05e9858  std 29, 120(1)
  05e985c  std 30, 128(1)
  05e9860  std 31, 136(1)
  05e9864  std 0, 160(1)
  05e9868  lwz 11, 372(9)
  05e986c  li 4, 0
  05e9870  mr 29, 3
  05e9874  clrldi 3, 3, 32
  05e9878  addi 31, 9, 88
  05e987c  li 28, 0
  05e9880  lwz 0, 0(11)
  05e9884  std 2, 40(1)
  05e9888  mtctr 0
  05e988c  lwz 2, 4(11)
  05e9890  ori 28, 28, 65535
  05e9894  bctrl
  05e9898  ld 2, 40(1)
  05e989c  li 4, 0
  05e98a0  lwz 30, -32612(2)
  05e98a4  lwz 9, 0(30)
  05e98a8  lwz 3, 4(30)
  05e98ac  xori 9, 9, 2
  05e98b0  srawi 11, 9, 31
  05e98b4  xor 0, 11, 9
  05e98b8  sub 0, 11, 0
  05e98bc  srawi 0, 0, 31
  05e98c0  rlwinm 5, 0, 0, 15, 16
  05e98c4  addis 5, 5, 1
  05e98c8  addi 5, 5, -32768
  05e98cc  clrldi 5, 5, 32
  05e98d0  bl 0x5d0140
  05e98d4  nop
  05e98d8  lwz 0, 16(30)
  05e98dc  cmpw 7, 29, 0
  05e98e0  bt 30, 0x5e9980
  05e98e4  lwz 9, 60(31)
  05e98e8  cmpwi 7, 9, 0
  05e98ec  clrldi 11, 9, 32
  05e98f0  bt 30, 0x5e98fc
  05e98f4  lwz 0, 64(31)
  05e98f8  stw 0, 152(11)
  05e98fc  lwz 0, 64(31)
  05e9900  cmpwi 7, 0, 0
  05e9904  clrldi 11, 0, 32
  05e9908  bt 30, 0x5e9910
  05e990c  stw 9, 148(11)
  05e9910  lwz 31, 16(30)
  05e9914  cmpwi 7, 31, 0
  05e9918  bt 30, 0x5e993c
  05e991c  ld 0, 160(1)
  05e9920  ld 28, 112(1)
  05e9924  ld 29, 120(1)
  05e9928  mtlr 0
  05e992c  ld 30, 128(1)
  05e9930  ld 31, 136(1)
  05e9934  addi 1, 1, 144
  05e9938  blr
  05e993c  lwz 29, -32576(2)
  05e9940  lwz 0, 0(29)
  05e9944  cmpw 7, 0, 28
  05e9948  clrldi 3, 0, 32
  05e994c  bt 30, 0x5e991c
  05e9950  bl 0x64fde4
  05e9954  ld 2, 40(1)
  05e9958  stw 28, 0(29)
  05e995c  stw 31, 20(30)
  05e9960  ld 0, 160(1)
  05e9964  ld 28, 112(1)
  05e9968  ld 29, 120(1)
  05e996c  mtlr 0
  05e9970  ld 30, 128(1)
  05e9974  ld 31, 136(1)
  05e9978  addi 1, 1, 144
  05e997c  blr
  05e9980  lwz 0, 64(31)
  05e9984  stw 0, 16(30)
  05e9988  b 0x5e98e4

FUN_005e998c:   # 0x5e998c, 0x68 bytes
  05e998c  stdu 1, -144(1)
  05e9990  mflr 0
  05e9994  std 31, 136(1)
  05e9998  std 0, 160(1)
  05e999c  li 0, 0
  05e99a0  mr 31, 3
  05e99a4  ori 0, 0, 65535
  05e99a8  cmpw 7, 4, 0
  05e99ac  bf 29, 0x5e99b4
  05e99b0  mr 4, 0
  05e99b4  extsw 0, 4
  05e99b8  lfs 0, -32572(2)
  05e99bc  lfs 2, -32568(2)
  05e99c0  std 0, 112(1)
  05e99c4  lfd 13, 112(1)
  05e99c8  fcfid 13, 13
  05e99cc  frsp 1, 13
  05e99d0  fmuls 1, 1, 0
  05e99d4  bl 0x5dcbd8
  05e99d8  nop
  05e99dc  stfs 1, 88(31)
  05e99e0  ld 0, 160(1)
  05e99e4  ld 31, 136(1)
  05e99e8  addi 1, 1, 144
  05e99ec  mtlr 0
  05e99f0  blr

FUN_005e99f8:   # 0x5e99f8, 0x908 bytes
  05e99f8  li 0, 176
  05e99fc  stdu 1, -336(1)
  05e9a00  stvx 30, 1, 0
  05e9a04  li 0, 192
  05e9a08  stvx 31, 1, 0
  05e9a0c  mflr 0
  05e9a10  std 25, 272(1)
  05e9a14  lwz 25, -32612(2)
  05e9a18  stfd 31, 328(1)
  05e9a1c  std 19, 224(1)
  05e9a20  std 20, 232(1)
  05e9a24  std 21, 240(1)
  05e9a28  std 22, 248(1)
  05e9a2c  std 23, 256(1)
  05e9a30  std 24, 264(1)
  05e9a34  std 26, 280(1)
  05e9a38  std 27, 288(1)
  05e9a3c  std 28, 296(1)
  05e9a40  std 29, 304(1)
  05e9a44  std 30, 312(1)
  05e9a48  std 31, 320(1)
  05e9a4c  std 0, 352(1)
  05e9a50  lwz 10, 16(25)
  05e9a54  cmpwi 7, 10, 0
  05e9a58  bt 30, 0x5e9c8c
  05e9a5c  lwz 9, -32564(2)
  05e9a60  addi 0, 1, 112
  05e9a64  lwz 11, -32560(2)
  05e9a68  mr 31, 25
  05e9a6c  clrldi 19, 0, 32
  05e9a70  lvx 31, 0, 9
  05e9a74  lvx 30, 0, 11
  05e9a78  b 0x5e9a94
  05e9a7c  lwz 0, 44(11)
  05e9a80  cmpw 7, 9, 0
  05e9a84  bt 29, 0x5e9ac8
  05e9a88  lwz 10, 64(10)
  05e9a8c  cmpwi 7, 10, 0
  05e9a90  bt 30, 0x5e9c8c
  05e9a94  clrldi 11, 10, 32
  05e9a98  addi 0, 10, 88
  05e9a9c  clrldi 10, 0, 32
  05e9aa0  lwz 9, 0(11)
  05e9aa4  lwz 0, 24(11)
  05e9aa8  sub 9, 9, 0
  05e9aac  cmpwi 7, 9, 0
  05e9ab0  bf 28, 0x5e9a7c
  05e9ab4  lwz 0, 8(11)
  05e9ab8  add 9, 9, 0
  05e9abc  lwz 0, 44(11)
  05e9ac0  cmpw 7, 9, 0
  05e9ac4  bf 29, 0x5e9a88
  05e9ac8  lwz 0, 20(25)
  05e9acc  cmpwi 7, 0, 0
  05e9ad0  bf 30, 0x5ea0fc
  05e9ad4  lwz 9, -32576(2)
  05e9ad8  lwz 3, 0(9)
  05e9adc  bl 0x64fe24
  05e9ae0  ld 2, 40(1)
  05e9ae4  cmpwi 7, 3, 0
  05e9ae8  bt 30, 0x5ea2dc
  05e9aec  bl 0x5f5090
  05e9af0  nop
  05e9af4  lwz 9, 8(25)
  05e9af8  lwz 11, 12(25)
  05e9afc  mr 22, 3
  05e9b00  lwz 23, 0(9)
  05e9b04  sub 0, 11, 23
  05e9b08  clrlwi 0, 0, 28
  05e9b0c  cmplwi 7, 0, 5
  05e9b10  bt 29, 0x5e9c2c
  05e9b14  mr 21, 31
  05e9b18  lfs 31, -32556(2)
  05e9b1c  li 20, 144
  05e9b20  lwz 0, 16(25)
  05e9b24  clrlwi 9, 11, 28
  05e9b28  cmpwi 7, 0, 0
  05e9b2c  stw 9, 12(25)
  05e9b30  bt 30, 0x5e9c10
  05e9b34  lwz 0, 0(25)
  05e9b38  cmpwi 7, 0, 2
  05e9b3c  bt 30, 0x5e9d78
  05e9b40  slwi 0, 9, 13
  05e9b44  lwz 9, 4(21)
  05e9b48  li 4, 0
  05e9b4c  add 31, 0, 9
  05e9b50  li 5, 8192
  05e9b54  clrldi 30, 31, 32
  05e9b58  li 24, 0
  05e9b5c  mr 3, 30
  05e9b60  bl 0x5d0140
  05e9b64  nop
  05e9b68  lwz 9, 16(21)
  05e9b6c  cmpwi 7, 9, 0
  05e9b70  addi 11, 9, 88
  05e9b74  bt 30, 0x5e9c10
  05e9b78  clrldi 29, 9, 32
  05e9b7c  lwz 0, 0(29)
  05e9b80  lwz 9, 24(29)
  05e9b84  sub 9, 0, 9
  05e9b88  cmpwi 7, 9, 0
  05e9b8c  bt 28, 0x5e9d6c
  05e9b90  lwz 0, 44(29)
  05e9b94  cmpw 7, 9, 0
  05e9b98  bf 28, 0x5e9d1c
  05e9b9c  clrldi 4, 11, 32
  05e9ba0  lwz 10, 56(4)
  05e9ba4  b 0x5e9bb4
  05e9ba8  lwz 0, 56(4)
  05e9bac  cmpw 7, 10, 0
  05e9bb0  bf 30, 0x5e9b78
  05e9bb4  lwz 9, 64(4)
  05e9bb8  cmpwi 7, 9, 0
  05e9bbc  addi 11, 9, 88
  05e9bc0  clrldi 4, 11, 32
  05e9bc4  bf 30, 0x5e9ba8
  05e9bc8  cmpwi 7, 24, 0
  05e9bcc  bt 30, 0x5e9c10
  05e9bd0  addi 0, 31, 8192
  05e9bd4  lfs 12, -32548(2)
  05e9bd8  lfs 11, -32544(2)
  05e9bdc  cmplw 7, 31, 0
  05e9be0  bf- 28, 0x5e9c10
  05e9be4  nop
  05e9be8  lfs 0, 0(30)
  05e9bec  fadds 13, 0, 12
  05e9bf0  fsel 13, 13, 0, 11
  05e9bf4  fsubs 0, 0, 12
  05e9bf8  fsel 0, 0, 12, 13
  05e9bfc  addi 31, 31, 4
  05e9c00  stfs 0, 0(30)
  05e9c04  cmplw 7, 0, 31
  05e9c08  clrldi 30, 31, 32
  05e9c0c  bt+ 29, 0x5e9be8
  05e9c10  lwz 9, 12(25)
  05e9c14  addi 11, 9, 1
  05e9c18  sub 0, 11, 23
  05e9c1c  stw 11, 12(25)
  05e9c20  clrlwi 0, 0, 28
  05e9c24  cmplwi 7, 0, 5
  05e9c28  bf 29, 0x5e9b20
  05e9c2c  stw 22, 24(25)
  05e9c30  li 0, 176
  05e9c34  ld 19, 224(1)
  05e9c38  li 3, 0
  05e9c3c  ld 20, 232(1)
  05e9c40  ld 21, 240(1)
  05e9c44  ld 22, 248(1)
  05e9c48  ld 23, 256(1)
  05e9c4c  lvx 30, 1, 0
  05e9c50  li 0, 192
  05e9c54  ld 24, 264(1)
  05e9c58  ld 25, 272(1)
  05e9c5c  ld 26, 280(1)
  05e9c60  ld 27, 288(1)
  05e9c64  lvx 31, 1, 0
  05e9c68  ld 0, 352(1)
  05e9c6c  ld 28, 296(1)
  05e9c70  ld 29, 304(1)
  05e9c74  mtlr 0
  05e9c78  ld 30, 312(1)
  05e9c7c  ld 31, 320(1)
  05e9c80  lfd 31, 328(1)
  05e9c84  addi 1, 1, 336
  05e9c88  blr
  05e9c8c  lwz 0, 20(25)
  05e9c90  cmpwi 7, 0, 0
  05e9c94  bt 30, 0x5e9c30
  05e9c98  lwz 9, 8(25)
  05e9c9c  lwz 3, 12(25)
  05e9ca0  lwz 31, 0(9)
  05e9ca4  sub 0, 3, 31
  05e9ca8  clrlwi 0, 0, 28
  05e9cac  cmplwi 7, 0, 5
  05e9cb0  bt 29, 0x5e9c30
  05e9cb4  lwz 0, 0(25)
  05e9cb8  clrlwi 3, 3, 28
  05e9cbc  li 4, 0
  05e9cc0  cmpwi 7, 0, 2
  05e9cc4  stw 3, 12(25)
  05e9cc8  li 9, 2048
  05e9ccc  li 5, 2048
  05e9cd0  bt 30, 0x5e9cdc
  05e9cd4  li 9, 8192
  05e9cd8  li 5, 8192
  05e9cdc  lwz 0, 4(25)
  05e9ce0  li 11, 10240
  05e9ce4  mullw 3, 3, 9
  05e9ce8  add 3, 3, 0
  05e9cec  and 5, 5, 11
  05e9cf0  clrldi 3, 3, 32
  05e9cf4  bl 0x5d0140
  05e9cf8  nop
  05e9cfc  lwz 9, 12(25)
  05e9d00  addi 3, 9, 1
  05e9d04  sub 0, 3, 31
  05e9d08  stw 3, 12(25)
  05e9d0c  clrlwi 0, 0, 28
  05e9d10  cmplwi 7, 0, 5
  05e9d14  bf 29, 0x5e9cb4
  05e9d18  b 0x5e9c30
  05e9d1c  clrldi 4, 11, 32
  05e9d20  lwz 0, 52(4)
  05e9d24  cmpwi 7, 0, 0
  05e9d28  bf 30, 0x5e9d44
  05e9d2c  lwz 0, 52(29)
  05e9d30  cmpwi 7, 0, 0
  05e9d34  bt 30, 0x5e9d44
  05e9d38  lwz 0, 44(29)
  05e9d3c  cmpw 7, 9, 0
  05e9d40  bt 29, 0x5e9fbc
  05e9d44  lwz 9, 64(4)
  05e9d48  cmpwi 7, 9, 0
  05e9d4c  bt 30, 0x5e9bc8
  05e9d50  clrldi 29, 9, 32
  05e9d54  addi 11, 9, 88
  05e9d58  lwz 0, 0(29)
  05e9d5c  lwz 9, 24(29)
  05e9d60  sub 9, 0, 9
  05e9d64  cmpwi 7, 9, 0
  05e9d68  bf 28, 0x5e9b90
  05e9d6c  lwz 0, 8(29)
  05e9d70  add 9, 9, 0
  05e9d74  b 0x5e9b90
  05e9d78  slwi 0, 9, 11
  05e9d7c  lwz 9, 4(25)
  05e9d80  li 4, 0
  05e9d84  add 31, 0, 9
  05e9d88  li 5, 2048
  05e9d8c  clrldi 30, 31, 32
  05e9d90  li 26, 0
  05e9d94  mr 3, 30
  05e9d98  bl 0x5d0140
  05e9d9c  nop
  05e9da0  lwz 9, 16(25)
  05e9da4  cmpwi 7, 9, 0
  05e9da8  addi 11, 9, 88
  05e9dac  bt 30, 0x5e9c10
  05e9db0  clrldi 28, 9, 32
  05e9db4  lwz 0, 0(28)
  05e9db8  lwz 9, 24(28)
  05e9dbc  sub 9, 0, 9
  05e9dc0  cmpwi 7, 9, 0
  05e9dc4  bt 28, 0x5e9fb0
  05e9dc8  lwz 0, 44(28)
  05e9dcc  cmpw 7, 9, 0
  05e9dd0  bf 28, 0x5e9e68
  05e9dd4  clrldi 12, 11, 32
  05e9dd8  lwz 10, 56(12)
  05e9ddc  b 0x5e9dec
  05e9de0  lwz 0, 56(12)
  05e9de4  cmpw 7, 10, 0
  05e9de8  bf 30, 0x5e9db0
  05e9dec  lwz 9, 64(12)
  05e9df0  cmpwi 7, 9, 0
  05e9df4  addi 11, 9, 88
  05e9df8  clrldi 12, 11, 32
  05e9dfc  bf 30, 0x5e9de0
  05e9e00  cmpwi 7, 26, 0
  05e9e04  bt 30, 0x5e9c10
  05e9e08  addi 0, 31, 2048
  05e9e0c  lfs 12, -32548(2)
  05e9e10  lfs 11, -32544(2)
  05e9e14  cmplw 7, 31, 0
  05e9e18  bf- 28, 0x5e9c10
  05e9e1c  nop
  05e9e20  lfs 0, 0(30)
  05e9e24  fadds 13, 0, 12
  05e9e28  fsel 13, 13, 0, 11
  05e9e2c  fsubs 0, 0, 12
  05e9e30  fsel 0, 0, 12, 13
  05e9e34  addi 31, 31, 4
  05e9e38  stfs 0, 0(30)
  05e9e3c  cmplw 7, 0, 31
  05e9e40  clrldi 30, 31, 32
  05e9e44  bt+ 29, 0x5e9e20
  05e9e48  lwz 9, 12(25)
  05e9e4c  addi 11, 9, 1
  05e9e50  sub 0, 11, 23
  05e9e54  stw 11, 12(25)
  05e9e58  clrlwi 0, 0, 28
  05e9e5c  cmplwi 7, 0, 5
  05e9e60  bf 29, 0x5e9b20
  05e9e64  b 0x5e9c2c
  05e9e68  clrldi 12, 11, 32
  05e9e6c  lwz 0, 52(12)
  05e9e70  cmpwi 7, 0, 0
  05e9e74  bf 30, 0x5e9f88
  05e9e78  lwz 0, 52(28)
  05e9e7c  cmpwi 7, 0, 0
  05e9e80  bt 30, 0x5e9f88
  05e9e84  lwz 0, 44(28)
  05e9e88  cmpw 7, 9, 0
  05e9e8c  bt 28, 0x5e9f88
  05e9e90  lfs 0, -32552(2)
  05e9e94  lfs 9, 4(12)
  05e9e98  fcmpu 7, 9, 0
  05e9e9c  lfs 12, 0(12)
  05e9ea0  lfs 13, 8(12)
  05e9ea4  lfs 0, 12(12)
  05e9ea8  fmuls 11, 12, 13
  05e9eac  fmuls 10, 12, 0
  05e9eb0  lwz 10, 24(28)
  05e9eb4  lwz 29, 16(28)
  05e9eb8  lwz 3, 44(12)
  05e9ebc  lwz 27, 40(12)
  05e9ec0  bf 28, 0x5ea2b8
  05e9ec4  fadds 0, 10, 10
  05e9ec8  fmuls 10, 9, 0
  05e9ecc  lwz 0, 40(28)
  05e9ed0  li 4, 256
  05e9ed4  mr 11, 31
  05e9ed8  cmpwi 7, 0, 1
  05e9edc  mtctr 4
  05e9ee0  mr 7, 31
  05e9ee4  bt 30, 0x5ea240
  05e9ee8  cmplw 7, 10, 29
  05e9eec  addi 0, 7, 4
  05e9ef0  add 9, 3, 27
  05e9ef4  clrldi 5, 7, 32
  05e9ef8  clrldi 4, 0, 32
  05e9efc  rlwinm 6, 9, 18, 14, 29
  05e9f00  addi 7, 7, 8
  05e9f04  sub 8, 10, 29
  05e9f08  clrlwi 3, 9, 16
  05e9f0c  bt 28, 0x5e9f18
  05e9f10  lwz 0, 12(28)
  05e9f14  add 10, 0, 8
  05e9f18  clrldi 9, 10, 32
  05e9f1c  lfs 12, 0(5)
  05e9f20  addi 11, 10, 2
  05e9f24  add 10, 10, 6
  05e9f28  clrldi 11, 11, 32
  05e9f2c  lhz 0, 0(9)
  05e9f30  extsh 0, 0
  05e9f34  lhz 9, 0(11)
  05e9f38  std 0, 160(1)
  05e9f3c  lfd 9, 160(1)
  05e9f40  extsh 9, 9
  05e9f44  fcfid 9, 9
  05e9f48  std 9, 160(1)
  05e9f4c  frsp 0, 9
  05e9f50  lfd 9, 160(1)
  05e9f54  fcfid 9, 9
  05e9f58  fmuls 0, 0, 31
  05e9f5c  frsp 13, 9
  05e9f60  fmadds 0, 11, 0, 12
  05e9f64  fmuls 13, 13, 31
  05e9f68  stfs 0, 0(5)
  05e9f6c  lfs 12, 0(4)
  05e9f70  fmadds 13, 10, 13, 12
  05e9f74  stfs 13, 0(4)
  05e9f78  bdnz+ 0x5e9ee8
  05e9f7c  addi 26, 26, 1
  05e9f80  stw 3, 44(12)
  05e9f84  stw 10, 24(28)
  05e9f88  lwz 9, 64(12)
  05e9f8c  cmpwi 7, 9, 0
  05e9f90  bt 30, 0x5e9e00
  05e9f94  clrldi 28, 9, 32
  05e9f98  addi 11, 9, 88
  05e9f9c  lwz 0, 0(28)
  05e9fa0  lwz 9, 24(28)
  05e9fa4  sub 9, 0, 9
  05e9fa8  cmpwi 7, 9, 0
  05e9fac  bf 28, 0x5e9dc8
  05e9fb0  lwz 0, 8(28)
  05e9fb4  add 9, 9, 0
  05e9fb8  b 0x5e9dc8
  05e9fbc  addi 9, 11, 8
  05e9fc0  lfs 11, 0(4)
  05e9fc4  lwz 6, 24(29)
  05e9fc8  mr 5, 31
  05e9fcc  clrldi 9, 9, 32
  05e9fd0  lwz 12, 16(29)
  05e9fd4  lwz 3, 44(4)
  05e9fd8  lwz 26, 40(4)
  05e9fdc  lfs 0, -32552(2)
  05e9fe0  lwz 0, 0(9)
  05e9fe4  lwz 11, 4(9)
  05e9fe8  lwz 10, 8(9)
  05e9fec  lwz 8, 12(9)
  05e9ff0  stw 0, 112(1)
  05e9ff4  stw 11, 116(1)
  05e9ff8  stw 10, 120(1)
  05e9ffc  stw 8, 124(1)
  05ea000  lwz 7, 28(9)
  05ea004  lwz 0, 16(9)
  05ea008  lwz 11, 20(9)
  05ea00c  lwz 10, 24(9)
  05ea010  stw 0, 128(1)
  05ea014  stw 11, 132(1)
  05ea018  stw 10, 136(1)
  05ea01c  stw 7, 140(1)
  05ea020  lfs 12, 4(4)
  05ea024  fcmpu 7, 12, 0
  05ea028  bf 28, 0x5ea16c
  05ea02c  fadds 0, 11, 11
  05ea030  fmr 13, 11
  05ea034  fmuls 12, 12, 0
  05ea038  lwz 0, 40(29)
  05ea03c  cmpwi 7, 0, 1
  05ea040  bt 30, 0x5ea190
  05ea044  li 9, 16
  05ea048  stfs 13, 152(1)
  05ea04c  stfs 12, 156(1)
  05ea050  addi 28, 31, 8160
  05ea054  stfs 13, 144(1)
  05ea058  vxor 10, 10, 10
  05ea05c  stfs 12, 148(1)
  05ea060  li 27, 16
  05ea064  vsldoi 5, 31, 31, 0
  05ea068  vsldoi 6, 30, 30, 0
  05ea06c  lvx 7, 9, 19
  05ea070  lvx 8, 1, 20
  05ea074  lvx 9, 0, 19
  05ea078  cmplw 7, 12, 6
  05ea07c  add 8, 26, 3
  05ea080  clrldi 10, 5, 32
  05ea084  cmpw 6, 28, 5
  05ea088  rlwinm 7, 8, 18, 14, 29
  05ea08c  addi 5, 5, 32
  05ea090  sub 11, 6, 12
  05ea094  bt 29, 0x5ea0a0
  05ea098  lwz 0, 12(29)
  05ea09c  add 6, 0, 11
  05ea0a0  clrldi 9, 6, 32
  05ea0a4  lvx 11, 0, 10
  05ea0a8  lvx 12, 27, 10
  05ea0ac  clrlwi 3, 8, 16
  05ea0b0  add 6, 6, 7
  05ea0b4  lvlx 0, 0, 9
  05ea0b8  vspltw 0, 0, 0
  05ea0bc  vupkhsh 0, 0
  05ea0c0  vcfsx 0, 0, 15
  05ea0c4  vmaddfp 0, 8, 0, 10
  05ea0c8  vmaddfp 1, 0, 5, 10
  05ea0cc  vmaddfp 0, 0, 7, 12
  05ea0d0  vmaddfp 13, 1, 9, 10
  05ea0d4  vperm 1, 1, 1, 6
  05ea0d8  stvx 0, 27, 10
  05ea0dc  vmaddfp 1, 1, 9, 13
  05ea0e0  vaddfp 1, 1, 11
  05ea0e4  stvx 1, 0, 10
  05ea0e8  bf+ 26, 0x5ea078
  05ea0ec  addi 24, 24, 1
  05ea0f0  stw 3, 44(4)
  05ea0f4  stw 6, 24(29)
  05ea0f8  b 0x5e9d44
  05ea0fc  bl 0x5f5090
  05ea100  nop
  05ea104  lwz 0, 24(25)
  05ea108  sub 0, 3, 0
  05ea10c  cmplwi 7, 0, 25
  05ea110  bf 29, 0x5e9aec
  05ea114  lwz 9, 8(25)
  05ea118  lwz 11, 16(25)
  05ea11c  stw 3, 24(25)
  05ea120  cmpwi 7, 11, 0
  05ea124  lwz 0, 0(9)
  05ea128  stw 0, 12(25)
  05ea12c  bt 30, 0x5e9aec
  05ea130  li 8, 1
  05ea134  addi 0, 11, 88
  05ea138  clrldi 10, 11, 32
  05ea13c  clrldi 11, 0, 32
  05ea140  lwz 9, 52(11)
  05ea144  cmpwi 7, 9, 0
  05ea148  bf 30, 0x5ea15c
  05ea14c  lwz 0, 52(10)
  05ea150  cmpwi 7, 0, 0
  05ea154  bt 30, 0x5ea15c
  05ea158  stw 8, 80(10)
  05ea15c  lwz 11, 64(11)
  05ea160  cmpwi 7, 11, 0
  05ea164  bf 30, 0x5ea134
  05ea168  b 0x5e9aec
  05ea16c  bf 29, 0x5ea2d0
  05ea170  lfs 0, -32548(2)
  05ea174  fadds 13, 11, 11
  05ea178  fsubs 0, 0, 12
  05ea17c  lwz 0, 40(29)
  05ea180  fmr 12, 11
  05ea184  cmpwi 7, 0, 1
  05ea188  fmuls 13, 0, 13
  05ea18c  bf 30, 0x5ea044
  05ea190  li 9, 16
  05ea194  stfs 11, 156(1)
  05ea198  stfs 11, 152(1)
  05ea19c  addi 28, 31, 8160
  05ea1a0  stfs 13, 144(1)
  05ea1a4  vxor 11, 11, 11
  05ea1a8  stfs 12, 148(1)
  05ea1ac  li 27, 16
  05ea1b0  lvx 7, 1, 20
  05ea1b4  stfs 13, 152(1)
  05ea1b8  stfs 12, 156(1)
  05ea1bc  lvx 8, 9, 19
  05ea1c0  lvx 9, 1, 20
  05ea1c4  lvx 10, 0, 19
  05ea1c8  cmplw 7, 12, 6
  05ea1cc  add 8, 26, 3
  05ea1d0  clrldi 11, 5, 32
  05ea1d4  cmpw 6, 28, 5
  05ea1d8  rlwinm 7, 8, 17, 15, 30
  05ea1dc  addi 5, 5, 32
  05ea1e0  sub 10, 6, 12
  05ea1e4  bt 29, 0x5ea1f0
  05ea1e8  lwz 0, 12(29)
  05ea1ec  add 6, 0, 10
  05ea1f0  clrldi 9, 6, 32
  05ea1f4  lvx 12, 0, 11
  05ea1f8  lvx 13, 27, 11
  05ea1fc  clrlwi 3, 8, 16
  05ea200  add 6, 6, 7
  05ea204  lvlx 0, 0, 9
  05ea208  vsplth 0, 0, 0
  05ea20c  vupkhsh 0, 0
  05ea210  vcfsx 0, 0, 15
  05ea214  vmaddfp 1, 9, 0, 11
  05ea218  vmaddfp 0, 7, 0, 11
  05ea21c  vmaddfp 1, 1, 8, 13
  05ea220  vmaddfp 0, 0, 10, 12
  05ea224  stvx 1, 27, 11
  05ea228  stvx 0, 0, 11
  05ea22c  bf+ 26, 0x5ea1c8
  05ea230  addi 24, 24, 1
  05ea234  stw 3, 44(4)
  05ea238  stw 6, 24(29)
  05ea23c  b 0x5e9d44
  05ea240  cmplw 7, 10, 29
  05ea244  addi 0, 11, 4
  05ea248  add 9, 3, 27
  05ea24c  clrldi 6, 11, 32
  05ea250  clrldi 5, 0, 32
  05ea254  rlwinm 7, 9, 17, 15, 30
  05ea258  addi 11, 11, 8
  05ea25c  sub 8, 10, 29
  05ea260  clrlwi 3, 9, 16
  05ea264  bt 28, 0x5ea270
  05ea268  lwz 0, 12(28)
  05ea26c  add 10, 0, 8
  05ea270  clrldi 9, 10, 32
  05ea274  lfs 12, 0(6)
  05ea278  addic. 4, 4, -1
  05ea27c  add 10, 10, 7
  05ea280  lhz 0, 0(9)
  05ea284  extsh 0, 0
  05ea288  std 0, 160(1)
  05ea28c  lfd 9, 160(1)
  05ea290  fcfid 9, 9
  05ea294  frsp 0, 9
  05ea298  fmuls 0, 0, 31
  05ea29c  fmadds 12, 11, 0, 12
  05ea2a0  stfs 12, 0(6)
  05ea2a4  lfs 13, 0(5)
  05ea2a8  fmadds 0, 10, 0, 13
  05ea2ac  stfs 0, 0(5)
  05ea2b0  bf+ 2, 0x5ea240
  05ea2b4  b 0x5e9f7c
  05ea2b8  bf 29, 0x5e9ecc
  05ea2bc  lfs 0, -32548(2)
  05ea2c0  fadds 13, 11, 11
  05ea2c4  fsubs 0, 0, 9
  05ea2c8  fmuls 11, 0, 13
  05ea2cc  b 0x5e9ecc
  05ea2d0  fmr 12, 11
  05ea2d4  fmr 13, 11
  05ea2d8  b 0x5ea038
  05ea2dc  bl 0x5f5090
  05ea2e0  nop
  05ea2e4  lwz 9, 8(25)
  05ea2e8  li 0, 1
  05ea2ec  stw 3, 24(25)
  05ea2f0  stw 0, 20(25)
  05ea2f4  lwz 0, 0(9)
  05ea2f8  stw 0, 12(25)
  05ea2fc  b 0x5e9aec

FUN_005ea300:   # 0x5ea300, 0x44 bytes
  05ea300  lwz 9, -32540(2)
  05ea304  li 0, 254
  05ea308  mtctr 0
  05ea30c  lbz 0, 0(3)
  05ea310  mr 11, 9
  05ea314  stb 0, 0(9)
  05ea318  lbz 0, 0(3)
  05ea31c  addi 11, 11, 1
  05ea320  cmpwi 7, 0, 0
  05ea324  clrldi 9, 11, 32
  05ea328  bclr 12, 30
  05ea32c  lbzu 0, 1(3)
  05ea330  stb 0, 0(9)
  05ea334  bdnz+ 0x5ea318
  05ea338  li 0, 0
  05ea33c  stb 0, 0(9)
  05ea340  blr

FUN_005ea348:   # 0x5ea348, 0x8 bytes
  05ea348  lwz 3, -32540(2)
  05ea34c  blr

FUN_005ea350:   # 0x5ea350, 0x14 bytes
  05ea350  lwz 9, -32540(2)
  05ea354  lwz 11, -32536(2)
  05ea358  stw 4, 256(9)
  05ea35c  stw 3, 0(11)
  05ea360  blr

FUN_005ea364:   # 0x5ea364, 0xc bytes
  05ea364  lwz 9, -32540(2)
  05ea368  std 3, 264(9)
  05ea36c  blr

FUN_005ea370:   # 0x5ea370, 0xc bytes
  05ea370  lwz 9, -32536(2)
  05ea374  stw 3, 4(9)
  05ea378  blr

FUN_005ea37c:   # 0x5ea37c, 0xc bytes
  05ea37c  lwz 9, -32540(2)
  05ea380  stw 3, 272(9)
  05ea384  blr

FUN_005ea388:   # 0x5ea388, 0xc bytes
  05ea388  lwz 9, -32536(2)
  05ea38c  stw 3, 8(9)
  05ea390  blr

FUN_005ea398:   # 0x5ea398, 0x50 bytes
  05ea398  cmplwi 7, 3, 32
  05ea39c  bf 29, 0x5ea3a4
  05ea3a0  li 3, 32
  05ea3a4  lwz 9, -32536(2)
  05ea3a8  cmpwi 7, 3, 0
  05ea3ac  stw 3, 12(9)
  05ea3b0  bclr 12, 30
  05ea3b4  lwz 9, -32540(2)
  05ea3b8  clrldi 3, 3, 32
  05ea3bc  addi 10, 9, 276
  05ea3c0  mtctr 3
  05ea3c4  nop
  05ea3c8  clrldi 9, 4, 32
  05ea3cc  clrldi 11, 10, 32
  05ea3d0  addi 4, 4, 4
  05ea3d4  addi 10, 10, 4
  05ea3d8  lwz 0, 0(9)
  05ea3dc  stw 0, 0(11)
  05ea3e0  bdnz 0x5ea3c8
  05ea3e4  blr

FUN_005ea3e8:   # 0x5ea3e8, 0xf4 bytes
  05ea3e8  cmpdi 3, 0
  05ea3ec  bclr 12, 2
  05ea3f0  cmpwi 7, 4, 0
  05ea3f4  li 10, 0
  05ea3f8  li 8, 1
  05ea3fc  bclr 12, 30
  05ea400  stw 10, 20(4)
  05ea404  lwz 9, 360(3)
  05ea408  addi 9, 9, 7
  05ea40c  rlwinm 9, 9, 0, 0, 28
  05ea410  stw 9, 4(4)
  05ea414  lwz 11, 364(3)
  05ea418  addi 11, 11, 7
  05ea41c  rlwinm 11, 11, 0, 0, 28
  05ea420  stw 11, 8(4)
  05ea424  lwz 9, 360(3)
  05ea428  addi 9, 9, 1
  05ea42c  srwi 9, 9, 1
  05ea430  addi 9, 9, 7
  05ea434  rlwinm 9, 9, 0, 0, 28
  05ea438  stw 9, 12(4)
  05ea43c  lwz 11, 364(3)
  05ea440  stw 8, 24(4)
  05ea444  addi 11, 11, 1
  05ea448  stw 8, 36(4)
  05ea44c  srwi 11, 11, 1
  05ea450  stw 8, 48(4)
  05ea454  addi 11, 11, 7
  05ea458  rlwinm 11, 11, 0, 0, 28
  05ea45c  stw 11, 16(4)
  05ea460  lwz 0, 32(3)
  05ea464  stw 10, 28(4)
  05ea468  rldicl 9, 0, 44, 63
  05ea46c  stw 10, 40(4)
  05ea470  stw 9, 60(4)
  05ea474  stw 10, 52(4)
  05ea478  stw 10, 64(4)
  05ea47c  stw 10, 32(4)
  05ea480  stw 10, 44(4)
  05ea484  stw 10, 56(4)
  05ea488  stw 10, 68(4)
  05ea48c  lwz 0, 8(3)
  05ea490  cmpwi 7, 0, 1
  05ea494  bt 30, 0x5ea4d4
  05ea498  li 0, 2
  05ea49c  stw 8, 96(4)
  05ea4a0  stw 0, 0(4)
  05ea4a4  stw 8, 72(4)
  05ea4a8  stw 10, 76(4)
  05ea4ac  stw 10, 80(4)
  05ea4b0  stw 8, 84(4)
  05ea4b4  stw 10, 88(4)
  05ea4b8  stw 10, 92(4)
  05ea4bc  stw 10, 100(4)
  05ea4c0  stw 10, 104(4)
  05ea4c4  stw 9, 108(4)
  05ea4c8  stw 10, 116(4)
  05ea4cc  stw 10, 112(4)
  05ea4d0  blr
  05ea4d4  stw 8, 0(4)
  05ea4d8  blr

FUN_005ea4dc:   # 0x5ea4dc, 0x18 bytes
  05ea4dc  cmpdi 3, 0
  05ea4e0  bclr 12, 2
  05ea4e4  cmpwi 7, 4, 0
  05ea4e8  bclr 12, 30
  05ea4ec  stw 4, 208(3)
  05ea4f0  blr

FUN_005ea4f8:   # 0x5ea4f8, 0x20c bytes
  05ea4f8  cmpdi 3, 0
  05ea4fc  mr 8, 3
  05ea500  mr 3, 4
  05ea504  bt 2, 0x5ea63c
  05ea508  rlwinm 0, 5, 0, 24, 24
  05ea50c  cmpwi 7, 0, 0
  05ea510  bt 30, 0x5ea5ac
  05ea514  clrlwi 0, 5, 25
  05ea518  cmpwi 7, 0, 1
  05ea51c  bt 30, 0x5ea5dc
  05ea520  cmpwi 7, 0, 2
  05ea524  bt 30, 0x5ea648
  05ea528  cmpwi 7, 0, 0
  05ea52c  bf 30, 0x5ea63c
  05ea530  addi 11, 3, -2
  05ea534  cmpwi 7, 11, 0
  05ea538  bf 29, 0x5ea5a0
  05ea53c  lwz 10, 344(8)
  05ea540  slwi 9, 11, 2
  05ea544  add 9, 9, 10
  05ea548  clrldi 9, 9, 32
  05ea54c  lwz 0, 0(9)
  05ea550  clrlwi 0, 0, 31
  05ea554  cmpwi 7, 0, 0
  05ea558  bf 30, 0x5ea5a0
  05ea55c  addi 0, 3, -3
  05ea560  slwi 9, 3, 2
  05ea564  cmpwi 7, 0, 0
  05ea568  add 9, 10, 9
  05ea56c  clrldi 0, 11, 32
  05ea570  addi 3, 9, -12
  05ea574  mtctr 0
  05ea578  bf+ 28, 0x5ea590
  05ea57c  b 0x5ea6ec
  05ea580  lwz 0, 0(9)
  05ea584  clrlwi 0, 0, 31
  05ea588  cmpwi 7, 0, 0
  05ea58c  bf 30, 0x5ea5a0
  05ea590  clrldi 9, 3, 32
  05ea594  addi 11, 11, -1
  05ea598  addi 3, 3, -4
  05ea59c  bdnz 0x5ea580
  05ea5a0  addi 3, 11, 1
  05ea5a4  clrldi 3, 3, 32
  05ea5a8  blr
  05ea5ac  lwz 0, 344(8)
  05ea5b0  slwi 9, 4, 2
  05ea5b4  add 9, 9, 0
  05ea5b8  addi 9, 9, -4
  05ea5bc  clrldi 9, 9, 32
  05ea5c0  lwz 0, 0(9)
  05ea5c4  clrlwi 0, 0, 31
  05ea5c8  cmpwi 7, 0, 0
  05ea5cc  bf 30, 0x5ea640
  05ea5d0  clrlwi 0, 5, 25
  05ea5d4  cmpwi 7, 0, 1
  05ea5d8  bf 30, 0x5ea520
  05ea5dc  lwz 0, 8(8)
  05ea5e0  sub 9, 0, 3
  05ea5e4  cmplw 7, 3, 0
  05ea5e8  addi 9, 9, 1
  05ea5ec  slwi 3, 3, 2
  05ea5f0  clrldi 9, 9, 32
  05ea5f4  mtctr 9
  05ea5f8  bt- 29, 0x5ea6f8
  05ea5fc  cmpwi 7, 0, 0
  05ea600  bt- 30, 0x5ea6f8
  05ea604  nop
  05ea608  addi 4, 4, 1
  05ea60c  bdz 0x5ea63c
  05ea610  lwz 9, 344(8)
  05ea614  add 9, 3, 9
  05ea618  addi 3, 3, 4
  05ea61c  clrldi 9, 9, 32
  05ea620  lwz 0, 0(9)
  05ea624  clrlwi 0, 0, 31
  05ea628  cmpwi 7, 0, 0
  05ea62c  bt 30, 0x5ea608
  05ea630  mr 3, 4
  05ea634  clrldi 3, 3, 32
  05ea638  blr
  05ea63c  li 3, 0
  05ea640  clrldi 3, 3, 32
  05ea644  blr
  05ea648  slwi 9, 3, 2
  05ea64c  addi 3, 3, -2
  05ea650  addi 11, 9, -8
  05ea654  b 0x5ea6a4
  05ea658  lwz 9, 344(8)
  05ea65c  add 0, 10, 9
  05ea660  add 9, 9, 11
  05ea664  clrldi 10, 0, 32
  05ea668  clrldi 9, 9, 32
  05ea66c  lwz 0, 0(9)
  05ea670  clrlwi 0, 0, 31
  05ea674  cmpwi 7, 0, 0
  05ea678  bf 30, 0x5ea6e4
  05ea67c  lwz 0, 8(8)
  05ea680  cmplw 7, 0, 4
  05ea684  bf 29, 0x5ea69c
  05ea688  lwz 0, 0(10)
  05ea68c  addi 4, 4, 1
  05ea690  clrlwi 0, 0, 31
  05ea694  cmpwi 7, 0, 0
  05ea698  bf 30, 0x5ea630
  05ea69c  addi 3, 3, -1
  05ea6a0  addi 11, 11, -4
  05ea6a4  cmpwi 7, 3, 0
  05ea6a8  slwi 10, 4, 2
  05ea6ac  bf 28, 0x5ea658
  05ea6b0  lwz 0, 8(8)
  05ea6b4  cmplw 7, 0, 4
  05ea6b8  addi 4, 4, 1
  05ea6bc  bf 29, 0x5ea63c
  05ea6c0  lwz 9, 344(8)
  05ea6c4  add 9, 10, 9
  05ea6c8  clrldi 9, 9, 32
  05ea6cc  lwz 0, 0(9)
  05ea6d0  clrlwi 0, 0, 31
  05ea6d4  cmpwi 7, 0, 0
  05ea6d8  bt 30, 0x5ea69c
  05ea6dc  mr 3, 4
  05ea6e0  b 0x5ea634
  05ea6e4  addi 3, 3, 1
  05ea6e8  b 0x5ea640
  05ea6ec  li 0, 1
  05ea6f0  mtctr 0
  05ea6f4  b 0x5ea590
  05ea6f8  li 0, 1
  05ea6fc  mtctr 0
  05ea700  b 0x5ea608

FUN_005ea708:   # 0x5ea708, 0x2a8 bytes
  05ea708  std 30, -16(1)
  05ea70c  std 27, -40(1)
  05ea710  std 28, -32(1)
  05ea714  std 29, -24(1)
  05ea718  std 31, -8(1)
  05ea71c  lwz 12, 12(6)
  05ea720  mr 30, 3
  05ea724  lwz 28, 8(6)
  05ea728  srawi 8, 12, 4
  05ea72c  addze 8, 8
  05ea730  lwz 27, 0(6)
  05ea734  lwz 31, 4(6)
  05ea738  srawi 3, 28, 4
  05ea73c  addze 3, 3
  05ea740  cmpwi 7, 8, 0
  05ea744  bf 29, 0x5ea9a0
  05ea748  srawi 9, 31, 4
  05ea74c  addze 9, 9
  05ea750  srawi 0, 27, 4
  05ea754  addze 0, 0
  05ea758  li 7, 0
  05ea75c  add 0, 0, 4
  05ea760  cmpwi 6, 3, 0
  05ea764  mullw 9, 9, 5
  05ea768  add 4, 0, 9
  05ea76c  mr 10, 4
  05ea770  bf 25, 0x5ea7b0
  05ea774  clrldi 9, 10, 32
  05ea778  lbz 0, 0(9)
  05ea77c  cmpwi 7, 0, 0
  05ea780  bf 30, 0x5ea7c4
  05ea784  clrldi 0, 3, 32
  05ea788  li 11, 0
  05ea78c  mtctr 0
  05ea790  b 0x5ea7a8
  05ea794  add 9, 11, 10
  05ea798  clrldi 9, 9, 32
  05ea79c  lbz 0, 0(9)
  05ea7a0  cmpwi 7, 0, 0
  05ea7a4  bf 30, 0x5ea7c4
  05ea7a8  addi 11, 11, 1
  05ea7ac  bdnz 0x5ea794
  05ea7b0  addi 7, 7, 1
  05ea7b4  cmpw 7, 8, 7
  05ea7b8  bt 30, 0x5ea9a0
  05ea7bc  add 10, 10, 5
  05ea7c0  b 0x5ea770
  05ea7c4  slwi 0, 7, 4
  05ea7c8  sub 6, 8, 7
  05ea7cc  sub 8, 12, 0
  05ea7d0  add 0, 31, 0
  05ea7d4  cmpwi 7, 8, 1
  05ea7d8  stw 0, 4(30)
  05ea7dc  stw 8, 12(30)
  05ea7e0  mullw 0, 5, 7
  05ea7e4  add 4, 4, 0
  05ea7e8  bf 29, 0x5ea87c
  05ea7ec  cmpwi 7, 6, 0
  05ea7f0  li 31, 0
  05ea7f4  li 0, 0
  05ea7f8  bf 29, 0x5ea870
  05ea7fc  addi 0, 6, -1
  05ea800  neg 29, 5
  05ea804  li 7, 0
  05ea808  mullw 0, 5, 0
  05ea80c  add 12, 4, 0
  05ea810  mr 10, 12
  05ea814  add 9, 7, 12
  05ea818  clrldi 9, 9, 32
  05ea81c  lbz 0, 0(9)
  05ea820  cmpwi 7, 0, 0
  05ea824  bf 30, 0x5ea86c
  05ea828  clrldi 0, 3, 32
  05ea82c  li 11, 0
  05ea830  mtctr 0
  05ea834  b 0x5ea84c
  05ea838  add 9, 11, 10
  05ea83c  clrldi 9, 9, 32
  05ea840  lbz 0, 0(9)
  05ea844  cmpwi 7, 0, 0
  05ea848  bf 30, 0x5ea86c
  05ea84c  addi 11, 11, 1
  05ea850  bdnz 0x5ea838
  05ea854  addi 31, 31, 1
  05ea858  add 7, 7, 29
  05ea85c  cmpw 7, 6, 31
  05ea860  bt 30, 0x5ea9a8
  05ea864  add 10, 10, 29
  05ea868  b 0x5ea814
  05ea86c  slwi 0, 31, 4
  05ea870  sub 0, 8, 0
  05ea874  sub 6, 6, 31
  05ea878  stw 0, 12(30)
  05ea87c  add 10, 4, 5
  05ea880  li 7, 0
  05ea884  cmpwi 6, 6, 0
  05ea888  bf 25, 0x5ea8c8
  05ea88c  add 8, 4, 7
  05ea890  clrldi 9, 8, 32
  05ea894  lbz 0, 0(9)
  05ea898  cmpwi 7, 0, 0
  05ea89c  bf 30, 0x5ea8dc
  05ea8a0  clrldi 0, 6, 32
  05ea8a4  mr 9, 10
  05ea8a8  mtctr 0
  05ea8ac  b 0x5ea8bc
  05ea8b0  lbz 0, 0(11)
  05ea8b4  cmpwi 7, 0, 0
  05ea8b8  bf 30, 0x5ea8dc
  05ea8bc  clrldi 11, 9, 32
  05ea8c0  add 9, 9, 5
  05ea8c4  bdnz 0x5ea8b0
  05ea8c8  addi 7, 7, 1
  05ea8cc  addi 10, 10, 1
  05ea8d0  cmpw 7, 3, 7
  05ea8d4  bf 30, 0x5ea888
  05ea8d8  add 8, 3, 4
  05ea8dc  slwi 0, 7, 4
  05ea8e0  li 11, 1
  05ea8e4  sub 12, 28, 0
  05ea8e8  add 0, 0, 27
  05ea8ec  cmpwi 7, 12, 1
  05ea8f0  stw 0, 0(30)
  05ea8f4  stw 12, 8(30)
  05ea8f8  bf 29, 0x5ea984
  05ea8fc  sub 4, 3, 7
  05ea900  addi 7, 4, -1
  05ea904  cmpwi 7, 7, 0
  05ea908  bt 28, 0x5ea96c
  05ea90c  add 9, 8, 4
  05ea910  add 11, 9, 5
  05ea914  addi 8, 9, -1
  05ea918  addi 11, 11, -1
  05ea91c  bf 25, 0x5ea958
  05ea920  clrldi 9, 8, 32
  05ea924  lbz 0, 0(9)
  05ea928  cmpwi 7, 0, 0
  05ea92c  bf 30, 0x5ea96c
  05ea930  clrldi 0, 6, 32
  05ea934  mr 9, 11
  05ea938  mtctr 0
  05ea93c  b 0x5ea94c
  05ea940  lbz 0, 0(10)
  05ea944  cmpwi 7, 0, 0
  05ea948  bf 30, 0x5ea96c
  05ea94c  clrldi 10, 9, 32
  05ea950  add 9, 9, 5
  05ea954  bdnz 0x5ea940
  05ea958  cmpwi 7, 7, 0
  05ea95c  addi 11, 11, -1
  05ea960  addi 8, 8, -1
  05ea964  addi 7, 7, -1
  05ea968  bf 30, 0x5ea91c
  05ea96c  sub 9, 7, 4
  05ea970  li 11, 1
  05ea974  slwi 9, 9, 4
  05ea978  add 9, 12, 9
  05ea97c  addi 9, 9, 16
  05ea980  stw 9, 8(30)
  05ea984  extsw 3, 11
  05ea988  ld 27, -40(1)
  05ea98c  ld 28, -32(1)
  05ea990  ld 29, -24(1)
  05ea994  ld 30, -16(1)
  05ea998  ld 31, -8(1)
  05ea99c  blr
  05ea9a0  li 11, 0
  05ea9a4  b 0x5ea984
  05ea9a8  slwi 0, 6, 4
  05ea9ac  b 0x5ea870

FUN_005ea9b0:   # 0x5ea9b0, 0x28c bytes
  05ea9b0  stdu 1, -240(1)
  05ea9b4  mflr 0
  05ea9b8  std 22, 160(1)
  05ea9bc  std 23, 168(1)
  05ea9c0  std 25, 184(1)
  05ea9c4  std 30, 224(1)
  05ea9c8  std 31, 232(1)
  05ea9cc  std 24, 176(1)
  05ea9d0  std 26, 192(1)
  05ea9d4  std 27, 200(1)
  05ea9d8  std 28, 208(1)
  05ea9dc  std 29, 216(1)
  05ea9e0  std 0, 256(1)
  05ea9e4  lwz 29, 8(5)
  05ea9e8  mr 31, 5
  05ea9ec  mr 30, 3
  05ea9f0  cmpwi 7, 29, 31
  05ea9f4  mr 25, 4
  05ea9f8  mr 23, 6
  05ea9fc  mr 22, 7
  05eaa00  bt 29, 0x5eab80
  05eaa04  li 24, 0
  05eaa08  lwz 29, 12(5)
  05eaa0c  cmpwi 7, 29, 31
  05eaa10  bt 29, 0x5eaa54
  05eaa14  mr 3, 24
  05eaa18  ld 0, 256(1)
  05eaa1c  ld 22, 160(1)
  05eaa20  extsw 3, 3
  05eaa24  ld 23, 168(1)
  05eaa28  ld 24, 176(1)
  05eaa2c  mtlr 0
  05eaa30  ld 25, 184(1)
  05eaa34  ld 26, 192(1)
  05eaa38  ld 27, 200(1)
  05eaa3c  ld 28, 208(1)
  05eaa40  ld 29, 216(1)
  05eaa44  ld 30, 224(1)
  05eaa48  ld 31, 232(1)
  05eaa4c  addi 1, 1, 240
  05eaa50  blr
  05eaa54  srawi 29, 29, 1
  05eaa58  addze 29, 29
  05eaa5c  lwz 11, 0(31)
  05eaa60  lwz 0, 4(31)
  05eaa64  addi 28, 1, 144
  05eaa68  lwz 9, 8(31)
  05eaa6c  clrldi 27, 23, 32
  05eaa70  clrldi 28, 28, 32
  05eaa74  extsw 26, 22
  05eaa78  addi 29, 29, 15
  05eaa7c  mr 4, 27
  05eaa80  rlwinm 29, 29, 0, 0, 27
  05eaa84  mr 5, 26
  05eaa88  mr 6, 28
  05eaa8c  addi 3, 1, 112
  05eaa90  stw 11, 144(1)
  05eaa94  stw 0, 148(1)
  05eaa98  stw 9, 152(1)
  05eaa9c  stw 29, 156(1)
  05eaaa0  bl 0x5ea708
  05eaaa4  lwz 10, 4(31)
  05eaaa8  mr 5, 26
  05eaaac  lwz 0, 12(31)
  05eaab0  mr 6, 28
  05eaab4  lwz 9, 0(31)
  05eaab8  add 10, 10, 29
  05eaabc  lwz 11, 8(31)
  05eaac0  sub 0, 0, 29
  05eaac4  mr 4, 27
  05eaac8  addi 3, 1, 128
  05eaacc  stw 9, 144(1)
  05eaad0  stw 11, 152(1)
  05eaad4  stw 0, 156(1)
  05eaad8  stw 10, 148(1)
  05eaadc  bl 0x5ea708
  05eaae0  lwz 0, 12(31)
  05eaae4  lwz 9, 8(31)
  05eaae8  lwz 6, 120(1)
  05eaaec  lwz 8, 124(1)
  05eaaf0  lwz 5, 136(1)
  05eaaf4  lwz 7, 140(1)
  05eaaf8  mullw 11, 6, 8
  05eaafc  mullw 9, 9, 0
  05eab00  sub 9, 9, 11
  05eab04  mullw 0, 5, 7
  05eab08  sub 3, 9, 0
  05eab0c  cmpw 7, 24, 3
  05eab10  bf 28, 0x5eaa14
  05eab14  lwz 0, 112(1)
  05eab18  extsw 3, 3
  05eab1c  lwz 9, 116(1)
  05eab20  lwz 11, 128(1)
  05eab24  lwz 10, 132(1)
  05eab28  stw 8, 12(30)
  05eab2c  stw 0, 0(30)
  05eab30  stw 9, 4(30)
  05eab34  stw 6, 8(30)
  05eab38  stw 7, 12(25)
  05eab3c  stw 11, 0(25)
  05eab40  stw 10, 4(25)
  05eab44  stw 5, 8(25)
  05eab48  ld 0, 256(1)
  05eab4c  ld 22, 160(1)
  05eab50  ld 23, 168(1)
  05eab54  mtlr 0
  05eab58  ld 24, 176(1)
  05eab5c  ld 25, 184(1)
  05eab60  ld 26, 192(1)
  05eab64  ld 27, 200(1)
  05eab68  ld 28, 208(1)
  05eab6c  ld 29, 216(1)
  05eab70  ld 30, 224(1)
  05eab74  ld 31, 232(1)
  05eab78  addi 1, 1, 240
  05eab7c  blr
  05eab80  srawi 29, 29, 1
  05eab84  addze 29, 29
  05eab88  lwz 11, 0(5)
  05eab8c  lwz 0, 4(5)
  05eab90  addi 28, 1, 144
  05eab94  lwz 9, 12(5)
  05eab98  extsw 26, 7
  05eab9c  clrldi 27, 6, 32
  05eaba0  clrldi 28, 28, 32
  05eaba4  addi 29, 29, 15
  05eaba8  mr 4, 27
  05eabac  rlwinm 29, 29, 0, 0, 27
  05eabb0  mr 5, 26
  05eabb4  mr 6, 28
  05eabb8  clrldi 3, 3, 32
  05eabbc  stw 11, 144(1)
  05eabc0  stw 0, 148(1)
  05eabc4  stw 9, 156(1)
  05eabc8  stw 29, 152(1)
  05eabcc  bl 0x5ea708
  05eabd0  lwz 10, 0(31)
  05eabd4  clrldi 3, 25, 32
  05eabd8  lwz 11, 8(31)
  05eabdc  mr 4, 27
  05eabe0  lwz 0, 4(31)
  05eabe4  add 10, 10, 29
  05eabe8  lwz 9, 12(31)
  05eabec  sub 11, 11, 29
  05eabf0  mr 5, 26
  05eabf4  mr 6, 28
  05eabf8  stw 0, 148(1)
  05eabfc  stw 9, 156(1)
  05eac00  stw 11, 152(1)
  05eac04  stw 10, 144(1)
  05eac08  bl 0x5ea708
  05eac0c  lwz 11, 8(31)
  05eac10  lwz 29, 12(31)
  05eac14  lwz 0, 8(30)
  05eac18  lwz 8, 12(30)
  05eac1c  lwz 9, 8(25)
  05eac20  lwz 10, 12(25)
  05eac24  mullw 0, 0, 8
  05eac28  mullw 9, 9, 10
  05eac2c  mullw 11, 11, 29
  05eac30  sub 11, 11, 0
  05eac34  sub 24, 11, 9
  05eac38  b 0x5eaa0c

FUN_005eac3c:   # 0x5eac3c, 0xfc bytes
  05eac3c  cmpdi 3, 0
  05eac40  mflr 0
  05eac44  stdu 1, -112(1)
  05eac48  std 0, 128(1)
  05eac4c  bt 2, 0x5eaccc
  05eac50  lwz 9, 292(3)
  05eac54  cmpwi 7, 9, 0
  05eac58  bt 30, 0x5eaccc
  05eac5c  bf 29, 0x5eaccc
  05eac60  lwz 0, 236(3)
  05eac64  clrldi 9, 9, 32
  05eac68  lwz 8, 376(3)
  05eac6c  li 7, 0
  05eac70  clrldi 11, 0, 32
  05eac74  mtctr 9
  05eac78  mr 10, 0
  05eac7c  lwz 9, 0(11)
  05eac80  li 11, 0
  05eac84  slwi 9, 9, 2
  05eac88  add 9, 9, 8
  05eac8c  clrldi 9, 9, 32
  05eac90  lwz 0, 0(9)
  05eac94  cmpw 7, 0, 4
  05eac98  bf 30, 0x5eacbc
  05eac9c  b 0x5eacf0
  05eaca0  lwz 9, 0(9)
  05eaca4  slwi 9, 9, 2
  05eaca8  add 9, 9, 8
  05eacac  clrldi 9, 9, 32
  05eacb0  lwz 0, 0(9)
  05eacb4  cmpw 7, 0, 4
  05eacb8  bt 30, 0x5eacdc
  05eacbc  addi 10, 10, 4
  05eacc0  addi 11, 11, 1
  05eacc4  clrldi 9, 10, 32
  05eacc8  bdnz 0x5eaca0
  05eaccc  ld 0, 128(1)
  05eacd0  addi 1, 1, 112
  05eacd4  mtlr 0
  05eacd8  blr
  05eacdc  cmpwi 7, 11, -1
  05eace0  bt 30, 0x5eaccc
  05eace4  slwi 9, 11, 9
  05eace8  slwi 0, 11, 7
  05eacec  sub 7, 9, 0
  05eacf0  lwz 0, 340(3)
  05eacf4  add 0, 7, 0
  05eacf8  clrldi 3, 0, 32
  05eacfc  lwz 9, 364(3)
  05ead00  cmpwi 7, 9, 0
  05ead04  bt 30, 0x5eaccc
  05ead08  clrldi 9, 9, 32
  05ead0c  extsw 4, 5
  05ead10  lwz 0, 0(9)
  05ead14  std 2, 40(1)
  05ead18  mtctr 0
  05ead1c  lwz 2, 4(9)
  05ead20  bctrl
  05ead24  ld 2, 40(1)
  05ead28  ld 0, 128(1)
  05ead2c  addi 1, 1, 112
  05ead30  mtlr 0
  05ead34  blr

FUN_005ead38:   # 0x5ead38, 0x28 bytes
  05ead38  cmpdi 3, 0
  05ead3c  li 9, 0
  05ead40  slwi 4, 4, 2
  05ead44  bt 2, 0x5ead58
  05ead48  lwz 9, 372(3)
  05ead4c  add 9, 4, 9
  05ead50  clrldi 9, 9, 32
  05ead54  lwz 9, 0(9)
  05ead58  clrldi 3, 9, 32
  05ead5c  blr

FUN_005ead60:   # 0x5ead60, 0x2c bytes
  05ead60  cmpdi 3, 0
  05ead64  li 9, 0
  05ead68  slwi 4, 4, 2
  05ead6c  bt 2, 0x5ead84
  05ead70  lwz 9, 368(3)
  05ead74  add 9, 4, 9
  05ead78  clrldi 9, 9, 32
  05ead7c  lwz 11, 0(9)
  05ead80  addi 9, 11, 512
  05ead84  clrldi 3, 9, 32
  05ead88  blr

FUN_005ead8c:   # 0x5ead8c, 0x28 bytes
  05ead8c  cmpdi 3, 0
  05ead90  li 9, 0
  05ead94  slwi 4, 4, 2
  05ead98  bt 2, 0x5eadac
  05ead9c  lwz 9, 376(3)
  05eada0  add 9, 4, 9
  05eada4  clrldi 9, 9, 32
  05eada8  lwz 9, 0(9)
  05eadac  clrldi 3, 9, 32
  05eadb0  blr

FUN_005eadb4:   # 0x5eadb4, 0x1c bytes
  05eadb4  cmpdi 3, 0
  05eadb8  mr 9, 3
  05eadbc  mr 3, 4
  05eadc0  bt 2, 0x5eadc8
  05eadc4  stw 4, 276(9)
  05eadc8  extsw 3, 3
  05eadcc  blr

FUN_005eadd0:   # 0x5eadd0, 0x34 bytes
  05eadd0  cmpdi 3, 0
  05eadd4  cmpwi 7, 4, 0
  05eadd8  bclr 12, 2
  05eaddc  bf 30, 0x5eadf4
  05eade0  lwz 0, 32(3)
  05eade4  rlwinm 0, 0, 24, 1, 31
  05eade8  rotlwi 0, 0, 8
  05eadec  stw 0, 32(3)
  05eadf0  blr
  05eadf4  lwz 0, 32(3)
  05eadf8  ori 0, 0, 128
  05eadfc  stw 0, 32(3)
  05eae00  blr

FUN_005eae04:   # 0x5eae04, 0x24 bytes
  05eae04  stdu 1, -112(1)
  05eae08  mflr 0
  05eae0c  std 0, 128(1)
  05eae10  bl 0x5f515c
  05eae14  nop
  05eae18  ld 0, 128(1)
  05eae1c  addi 1, 1, 112
  05eae20  mtlr 0
  05eae24  blr

FUN_005eae28:   # 0x5eae28, 0x290 bytes
  05eae28  stdu 1, -176(1)
  05eae2c  mflr 0
  05eae30  std 27, 136(1)
  05eae34  mr 27, 4
  05eae38  li 4, 0
  05eae3c  std 28, 144(1)
  05eae40  std 29, 152(1)
  05eae44  std 30, 160(1)
  05eae48  std 31, 168(1)
  05eae4c  std 26, 128(1)
  05eae50  std 0, 192(1)
  05eae54  mr 31, 3
  05eae58  mr 28, 5
  05eae5c  mr 30, 6
  05eae60  mr 29, 7
  05eae64  bl 0x5fc20c
  05eae68  nop
  05eae6c  cmpwi 7, 3, 0
  05eae70  bt 30, 0x5eaef8
  05eae74  lwz 9, -32532(2)
  05eae78  lwz 9, 0(9)
  05eae7c  cmpwi 7, 9, 0
  05eae80  bt 30, 0x5eb088
  05eae84  clrldi 9, 9, 32
  05eae88  lwz 8, -32540(2)
  05eae8c  mr 4, 31
  05eae90  mr 3, 9
  05eae94  clrldi 6, 30, 32
  05eae98  clrldi 7, 29, 32
  05eae9c  lwz 11, 108(9)
  05eaea0  clrldi 10, 28, 32
  05eaea4  lwz 9, -32528(2)
  05eaea8  addi 8, 8, 404
  05eaeac  li 5, 2
  05eaeb0  lwz 0, 0(11)
  05eaeb4  std 2, 40(1)
  05eaeb8  mtctr 0
  05eaebc  lwz 2, 4(11)
  05eaec0  bctrl
  05eaec4  ld 2, 40(1)
  05eaec8  ld 0, 192(1)
  05eaecc  li 3, 1
  05eaed0  ld 26, 128(1)
  05eaed4  mtlr 0
  05eaed8  extsw 3, 3
  05eaedc  ld 27, 136(1)
  05eaee0  ld 28, 144(1)
  05eaee4  ld 29, 152(1)
  05eaee8  ld 30, 160(1)
  05eaeec  ld 31, 168(1)
  05eaef0  addi 1, 1, 176
  05eaef4  blr
  05eaef8  cmpwi 7, 27, 0
  05eaefc  bt 30, 0x5eafe4
  05eaf00  lwz 26, -32532(2)
  05eaf04  lwz 3, 0(26)
  05eaf08  cmpwi 7, 3, 0
  05eaf0c  bt 30, 0x5eaf58
  05eaf10  clrldi 3, 3, 32
  05eaf14  lwz 9, -32540(2)
  05eaf18  clrldi 0, 28, 32
  05eaf1c  lwz 10, -32524(2)
  05eaf20  addi 9, 9, 408
  05eaf24  std 0, 112(1)
  05eaf28  li 4, 0
  05eaf2c  lwz 11, 96(3)
  05eaf30  li 5, 0
  05eaf34  clrldi 6, 30, 32
  05eaf38  clrldi 7, 29, 32
  05eaf3c  mr 8, 31
  05eaf40  lwz 0, 0(11)
  05eaf44  std 2, 40(1)
  05eaf48  mtctr 0
  05eaf4c  lwz 2, 4(11)
  05eaf50  bctrl
  05eaf54  ld 2, 40(1)
  05eaf58  clrldi 4, 27, 32
  05eaf5c  mr 3, 31
  05eaf60  bl 0x5fc20c
  05eaf64  nop
  05eaf68  cmpwi 7, 3, 0
  05eaf6c  bf 30, 0x5eb014
  05eaf70  lwz 9, 0(26)
  05eaf74  cmpwi 7, 9, 0
  05eaf78  bt 30, 0x5eafe4
  05eaf7c  clrldi 9, 9, 32
  05eaf80  clrldi 5, 30, 32
  05eaf84  mr 3, 9
  05eaf88  extsw 6, 29
  05eaf8c  mr 7, 31
  05eaf90  lwz 11, 100(9)
  05eaf94  li 4, 0
  05eaf98  li 8, 1
  05eaf9c  lwz 0, 0(11)
  05eafa0  std 2, 40(1)
  05eafa4  mtctr 0
  05eafa8  lwz 2, 4(11)
  05eafac  bctrl
  05eafb0  ld 2, 40(1)
  05eafb4  ld 0, 192(1)
  05eafb8  li 3, 0
  05eafbc  ld 26, 128(1)
  05eafc0  mtlr 0
  05eafc4  extsw 3, 3
  05eafc8  ld 27, 136(1)
  05eafcc  ld 28, 144(1)
  05eafd0  ld 29, 152(1)
  05eafd4  ld 30, 160(1)
  05eafd8  ld 31, 168(1)
  05eafdc  addi 1, 1, 176
  05eafe0  blr
  05eafe4  ld 0, 192(1)
  05eafe8  li 3, 0
  05eafec  ld 26, 128(1)
  05eaff0  extsw 3, 3
  05eaff4  ld 27, 136(1)
  05eaff8  ld 28, 144(1)
  05eaffc  mtlr 0
  05eb000  ld 29, 152(1)
  05eb004  ld 30, 160(1)
  05eb008  ld 31, 168(1)
  05eb00c  addi 1, 1, 176
  05eb010  blr
  05eb014  lwz 9, 0(26)
  05eb018  cmpwi 7, 9, 0
  05eb01c  bt 30, 0x5eb088
  05eb020  clrldi 9, 9, 32
  05eb024  clrldi 5, 30, 32
  05eb028  mr 3, 9
  05eb02c  extsw 6, 29
  05eb030  mr 7, 31
  05eb034  lwz 11, 100(9)
  05eb038  li 4, 0
  05eb03c  li 8, 0
  05eb040  lwz 0, 0(11)
  05eb044  std 2, 40(1)
  05eb048  mtctr 0
  05eb04c  lwz 2, 4(11)
  05eb050  bctrl
  05eb054  ld 2, 40(1)
  05eb058  ld 0, 192(1)
  05eb05c  li 3, 1
  05eb060  ld 26, 128(1)
  05eb064  mtlr 0
  05eb068  extsw 3, 3
  05eb06c  ld 27, 136(1)
  05eb070  ld 28, 144(1)
  05eb074  ld 29, 152(1)
  05eb078  ld 30, 160(1)
  05eb07c  ld 31, 168(1)
  05eb080  addi 1, 1, 176
  05eb084  blr
  05eb088  ld 0, 192(1)
  05eb08c  li 3, 1
  05eb090  ld 26, 128(1)
  05eb094  extsw 3, 3
  05eb098  ld 27, 136(1)
  05eb09c  ld 28, 144(1)
  05eb0a0  mtlr 0
  05eb0a4  ld 29, 152(1)
  05eb0a8  ld 30, 160(1)
  05eb0ac  ld 31, 168(1)
  05eb0b0  addi 1, 1, 176
  05eb0b4  blr

FUN_005eb0b8:   # 0x5eb0b8, 0x3c bytes
  05eb0b8  addi 9, 3, -400
  05eb0bc  addi 3, 3, 416
  05eb0c0  clrldi 9, 9, 32
  05eb0c4  li 4, 0
  05eb0c8  clrldi 3, 3, 32
  05eb0cc  li 7, 1414
  05eb0d0  lwz 0, 32(9)
  05eb0d4  rlwinm 0, 0, 0, 4, 4
  05eb0d8  cmpwi 7, 0, 0
  05eb0dc  bt 30, 0x5eb0e8
  05eb0e0  li 3, 1
  05eb0e4  blr
  05eb0e8  lwz 6, -32516(2)
  05eb0ec  lwz 5, -32520(2)
  05eb0f0  b 0x5eae28

FUN_005eb0f8:   # 0x5eb0f8, 0x1b4 bytes
  05eb0f8  stdu 1, -176(1)
  05eb0fc  mflr 0
  05eb100  std 27, 136(1)
  05eb104  mr 27, 4
  05eb108  li 4, 0
  05eb10c  std 29, 152(1)
  05eb110  std 30, 160(1)
  05eb114  std 31, 168(1)
  05eb118  std 28, 144(1)
  05eb11c  std 0, 192(1)
  05eb120  mr 31, 3
  05eb124  mr 30, 5
  05eb128  mr 29, 6
  05eb12c  bl 0x5fc20c
  05eb130  nop
  05eb134  cmpwi 7, 3, 0
  05eb138  bf 30, 0x5eb234
  05eb13c  lwz 28, -32532(2)
  05eb140  clrldi 11, 27, 32
  05eb144  clrldi 6, 30, 32
  05eb148  clrldi 7, 29, 32
  05eb14c  mr 8, 31
  05eb150  li 4, 0
  05eb154  lwz 0, 0(28)
  05eb158  li 5, 0
  05eb15c  cmpwi 7, 0, 0
  05eb160  clrldi 9, 0, 32
  05eb164  mr 3, 9
  05eb168  bt 30, 0x5eb198
  05eb16c  std 11, 112(1)
  05eb170  lwz 11, 96(9)
  05eb174  lwz 9, -32540(2)
  05eb178  lwz 10, -32512(2)
  05eb17c  addi 9, 9, 412
  05eb180  lwz 0, 0(11)
  05eb184  std 2, 40(1)
  05eb188  mtctr 0
  05eb18c  lwz 2, 4(11)
  05eb190  bctrl
  05eb194  ld 2, 40(1)
  05eb198  mr 3, 31
  05eb19c  bl 0x5fc1d8
  05eb1a0  nop
  05eb1a4  lwz 0, 0(28)
  05eb1a8  cmpwi 7, 0, 0
  05eb1ac  clrldi 9, 0, 32
  05eb1b0  li 4, 0
  05eb1b4  clrldi 5, 30, 32
  05eb1b8  mr 3, 9
  05eb1bc  extsw 6, 29
  05eb1c0  mr 7, 31
  05eb1c4  li 8, 0
  05eb1c8  bt 30, 0x5eb210
  05eb1cc  lwz 9, 100(9)
  05eb1d0  lwz 0, 0(9)
  05eb1d4  std 2, 40(1)
  05eb1d8  mtctr 0
  05eb1dc  lwz 2, 4(9)
  05eb1e0  bctrl
  05eb1e4  ld 2, 40(1)
  05eb1e8  lwz 0, 0(28)
  05eb1ec  mr 4, 31
  05eb1f0  cmpwi 7, 0, 0
  05eb1f4  clrldi 9, 0, 32
  05eb1f8  clrldi 6, 30, 32
  05eb1fc  clrldi 7, 29, 32
  05eb200  clrldi 10, 27, 32
  05eb204  li 5, 2
  05eb208  mr 3, 9
  05eb20c  bf 30, 0x5eb260
  05eb210  ld 0, 192(1)
  05eb214  ld 27, 136(1)
  05eb218  ld 28, 144(1)
  05eb21c  mtlr 0
  05eb220  ld 29, 152(1)
  05eb224  ld 30, 160(1)
  05eb228  ld 31, 168(1)
  05eb22c  addi 1, 1, 176
  05eb230  blr
  05eb234  lwz 28, -32532(2)
  05eb238  mr 4, 31
  05eb23c  clrldi 6, 30, 32
  05eb240  clrldi 7, 29, 32
  05eb244  clrldi 10, 27, 32
  05eb248  li 5, 2
  05eb24c  lwz 0, 0(28)
  05eb250  cmpwi 7, 0, 0
  05eb254  clrldi 9, 0, 32
  05eb258  mr 3, 9
  05eb25c  bt 30, 0x5eb210
  05eb260  lwz 11, 108(9)
  05eb264  lwz 8, -32540(2)
  05eb268  lwz 9, -32512(2)
  05eb26c  addi 8, 8, 416
  05eb270  lwz 0, 0(11)
  05eb274  std 2, 40(1)
  05eb278  mtctr 0
  05eb27c  lwz 2, 4(11)
  05eb280  bctrl
  05eb284  ld 2, 40(1)
  05eb288  ld 0, 192(1)
  05eb28c  ld 27, 136(1)
  05eb290  mtlr 0
  05eb294  ld 28, 144(1)
  05eb298  ld 29, 152(1)
  05eb29c  ld 30, 160(1)
  05eb2a0  ld 31, 168(1)
  05eb2a4  addi 1, 1, 176
  05eb2a8  blr

FUN_005eb2b0:   # 0x5eb2b0, 0x30 bytes
  05eb2b0  addi 9, 3, -400
  05eb2b4  addi 3, 3, 416
  05eb2b8  clrldi 9, 9, 32
  05eb2bc  li 6, 1405
  05eb2c0  clrldi 3, 3, 32
  05eb2c4  lwz 0, 32(9)
  05eb2c8  rlwinm 0, 0, 0, 4, 4
  05eb2cc  cmpwi 7, 0, 0
  05eb2d0  bclr 4, 30
  05eb2d4  lwz 5, -32516(2)
  05eb2d8  lwz 4, -32520(2)
  05eb2dc  b 0x5eb0f8

FUN_005eb2e0:   # 0x5eb2e0, 0x94 bytes
  05eb2e0  lwz 9, -32532(2)
  05eb2e4  mflr 0
  05eb2e8  stdu 1, -128(1)
  05eb2ec  std 31, 120(1)
  05eb2f0  std 0, 144(1)
  05eb2f4  mr 8, 3
  05eb2f8  lwz 0, 0(9)
  05eb2fc  mr 11, 5
  05eb300  mr 7, 6
  05eb304  cmpwi 7, 0, 0
  05eb308  clrldi 9, 0, 32
  05eb30c  clrldi 10, 4, 32
  05eb310  li 5, 1
  05eb314  mr 3, 9
  05eb318  clrldi 6, 11, 32
  05eb31c  clrldi 7, 7, 32
  05eb320  clrldi 31, 8, 32
  05eb324  bt 30, 0x5eb354
  05eb328  lwz 11, 108(9)
  05eb32c  mr 4, 31
  05eb330  lwz 8, -32540(2)
  05eb334  lwz 9, -32508(2)
  05eb338  addi 8, 8, 420
  05eb33c  lwz 0, 0(11)
  05eb340  std 2, 40(1)
  05eb344  mtctr 0
  05eb348  lwz 2, 4(11)
  05eb34c  bctrl
  05eb350  ld 2, 40(1)
  05eb354  mr 3, 31
  05eb358  bl 0x5fc2bc
  05eb35c  nop
  05eb360  ld 0, 144(1)
  05eb364  ld 31, 120(1)
  05eb368  mtlr 0
  05eb36c  addi 1, 1, 128
  05eb370  blr

FUN_005eb374:   # 0x5eb374, 0xa8 bytes
  05eb374  addi 9, 3, -400
  05eb378  mflr 0
  05eb37c  stdu 1, -144(1)
  05eb380  clrldi 9, 9, 32
  05eb384  std 31, 136(1)
  05eb388  std 28, 112(1)
  05eb38c  std 29, 120(1)
  05eb390  std 0, 160(1)
  05eb394  lwz 0, 32(9)
  05eb398  addi 3, 3, 416
  05eb39c  li 4, 1
  05eb3a0  rlwinm 0, 0, 0, 4, 4
  05eb3a4  clrldi 31, 3, 32
  05eb3a8  cmpwi 7, 0, 0
  05eb3ac  li 7, 1432
  05eb3b0  mr 3, 31
  05eb3b4  bt 30, 0x5eb3d4
  05eb3b8  ld 0, 160(1)
  05eb3bc  ld 28, 112(1)
  05eb3c0  ld 29, 120(1)
  05eb3c4  mtlr 0
  05eb3c8  ld 31, 136(1)
  05eb3cc  addi 1, 1, 144
  05eb3d0  blr
  05eb3d4  lwz 29, -32516(2)
  05eb3d8  lwz 28, -32520(2)
  05eb3dc  mr 6, 29
  05eb3e0  mr 5, 28
  05eb3e4  bl 0x5eae28
  05eb3e8  mr 4, 28
  05eb3ec  cmpwi 7, 3, 0
  05eb3f0  mr 5, 29
  05eb3f4  mr 3, 31
  05eb3f8  li 6, 1433
  05eb3fc  bt 30, 0x5eb3b8
  05eb400  ld 0, 160(1)
  05eb404  ld 28, 112(1)
  05eb408  ld 29, 120(1)
  05eb40c  mtlr 0
  05eb410  ld 31, 136(1)
  05eb414  addi 1, 1, 144
  05eb418  b 0x5eb2e0

FUN_005eb41c:   # 0x5eb41c, 0x30 bytes
  05eb41c  addi 9, 3, -400
  05eb420  addi 3, 3, 416
  05eb424  clrldi 9, 9, 32
  05eb428  li 6, 1423
  05eb42c  clrldi 3, 3, 32
  05eb430  lwz 0, 32(9)
  05eb434  rlwinm 0, 0, 0, 4, 4
  05eb438  cmpwi 7, 0, 0
  05eb43c  bclr 4, 30
  05eb440  lwz 5, -32516(2)
  05eb444  lwz 4, -32520(2)
  05eb448  b 0x5eb2e0

FUN_005eb450:   # 0x5eb450, 0x200 bytes
  05eb450  stdu 1, -192(1)
  05eb454  mflr 0
  05eb458  std 28, 160(1)
  05eb45c  std 31, 184(1)
  05eb460  std 25, 136(1)
  05eb464  std 26, 144(1)
  05eb468  std 27, 152(1)
  05eb46c  std 29, 168(1)
  05eb470  std 30, 176(1)
  05eb474  std 0, 208(1)
  05eb478  lwz 0, 280(3)
  05eb47c  mr 31, 3
  05eb480  mr 28, 3
  05eb484  cmpwi 7, 0, 0
  05eb488  bt 30, 0x5eb588
  05eb48c  lwz 25, -32532(2)
  05eb490  lwz 3, 0(25)
  05eb494  cmpwi 7, 3, 0
  05eb498  bt 30, 0x5eb5b4
  05eb49c  clrldi 3, 3, 32
  05eb4a0  lwz 0, -32504(2)
  05eb4a4  lwz 29, -32516(2)
  05eb4a8  li 4, 0
  05eb4ac  std 0, 112(1)
  05eb4b0  lwz 26, -32540(2)
  05eb4b4  li 5, 0
  05eb4b8  li 6, 0
  05eb4bc  lwz 11, 80(3)
  05eb4c0  li 7, 1
  05eb4c4  mr 8, 29
  05eb4c8  li 9, 776
  05eb4cc  addi 10, 26, 424
  05eb4d0  lwz 0, 0(11)
  05eb4d4  std 2, 40(1)
  05eb4d8  mtctr 0
  05eb4dc  lwz 2, 4(11)
  05eb4e0  bctrl
  05eb4e4  ld 2, 40(1)
  05eb4e8  addi 0, 28, 688
  05eb4ec  mr 5, 29
  05eb4f0  clrldi 30, 0, 32
  05eb4f4  lwz 27, -32500(2)
  05eb4f8  li 6, 779
  05eb4fc  mr 4, 27
  05eb500  mr 3, 30
  05eb504  bl 0x5eb0f8
  05eb508  lwz 0, 280(31)
  05eb50c  cmpwi 7, 0, 0
  05eb510  bf 30, 0x5eb5e8
  05eb514  mr 3, 30
  05eb518  mr 4, 27
  05eb51c  mr 5, 29
  05eb520  li 6, 792
  05eb524  bl 0x5eb2e0
  05eb528  lwz 9, 0(25)
  05eb52c  cmpwi 7, 9, 0
  05eb530  bt 30, 0x5eb568
  05eb534  clrldi 9, 9, 32
  05eb538  mr 6, 29
  05eb53c  mr 3, 9
  05eb540  li 4, 0
  05eb544  li 5, 0
  05eb548  lwz 11, 84(9)
  05eb54c  li 7, 795
  05eb550  lwz 0, 0(11)
  05eb554  std 2, 40(1)
  05eb558  mtctr 0
  05eb55c  lwz 2, 4(11)
  05eb560  bctrl
  05eb564  ld 2, 40(1)
  05eb568  lwz 0, 428(26)
  05eb56c  cmpwi 7, 0, 0
  05eb570  bt 30, 0x5eb588
  05eb574  addi 3, 26, 432
  05eb578  li 4, 1
  05eb57c  bl 0x5fc190
  05eb580  nop
  05eb584  nop
  05eb588  ld 0, 208(1)
  05eb58c  ld 25, 136(1)
  05eb590  ld 26, 144(1)
  05eb594  mtlr 0
  05eb598  ld 27, 152(1)
  05eb59c  ld 28, 160(1)
  05eb5a0  ld 29, 168(1)
  05eb5a4  ld 30, 176(1)
  05eb5a8  ld 31, 184(1)
  05eb5ac  addi 1, 1, 192
  05eb5b0  blr
  05eb5b4  addi 0, 28, 688
  05eb5b8  lwz 29, -32516(2)
  05eb5bc  lwz 27, -32500(2)
  05eb5c0  li 6, 779
  05eb5c4  clrldi 30, 0, 32
  05eb5c8  lwz 26, -32540(2)
  05eb5cc  mr 4, 27
  05eb5d0  mr 3, 30
  05eb5d4  mr 5, 29
  05eb5d8  bl 0x5eb0f8
  05eb5dc  lwz 0, 280(31)
  05eb5e0  cmpwi 7, 0, 0
  05eb5e4  bt 30, 0x5eb514
  05eb5e8  lwz 9, 404(31)
  05eb5ec  addi 3, 28, 400
  05eb5f0  lwz 5, 392(31)
  05eb5f4  clrldi 3, 3, 32
  05eb5f8  extsw 5, 5
  05eb5fc  lwz 0, 0(9)
  05eb600  std 2, 40(1)
  05eb604  mtctr 0
  05eb608  lwz 2, 4(9)
  05eb60c  lwz 4, 396(31)
  05eb610  lwz 6, 232(31)
  05eb614  lwz 7, 284(31)
  05eb618  bctrl
  05eb61c  ld 2, 40(1)
  05eb620  lwz 11, 464(31)
  05eb624  lwz 9, 284(31)
  05eb628  cmpwi 7, 11, 0
  05eb62c  lwz 0, 392(31)
  05eb630  add 0, 0, 9
  05eb634  li 9, 0
  05eb638  stw 0, 1240(31)
  05eb63c  stw 9, 280(31)
  05eb640  bt 30, 0x5eb514
  05eb644  li 0, 1
  05eb648  stw 0, 28(31)
  05eb64c  b 0x5eb514

FUN_005eb650:   # 0x5eb650, 0xec bytes
  05eb650  stdu 1, -160(1)
  05eb654  mflr 0
  05eb658  std 27, 120(1)
  05eb65c  std 28, 128(1)
  05eb660  std 29, 136(1)
  05eb664  std 30, 144(1)
  05eb668  std 31, 152(1)
  05eb66c  mr 27, 3
  05eb670  lwz 31, -32516(2)
  05eb674  mr 28, 4
  05eb678  mr 29, 5
  05eb67c  mr 30, 6
  05eb680  std 0, 176(1)
  05eb684  b 0x5eb6d4
  05eb688  bl 0x5eb2e0
  05eb68c  mr 3, 29
  05eb690  mr 4, 30
  05eb694  mr 5, 31
  05eb698  li 6, 313
  05eb69c  bl 0x5eb0f8
  05eb6a0  mr 5, 28
  05eb6a4  mr 6, 31
  05eb6a8  li 4, 0
  05eb6ac  li 7, 314
  05eb6b0  mr 3, 27
  05eb6b4  bl 0x5eae28
  05eb6b8  mr 4, 30
  05eb6bc  cmpwi 7, 3, 0
  05eb6c0  mr 5, 31
  05eb6c4  li 6, 316
  05eb6c8  mr 3, 29
  05eb6cc  bf 30, 0x5eb718
  05eb6d0  bl 0x5eb2e0
  05eb6d4  mr 3, 27
  05eb6d8  mr 4, 28
  05eb6dc  mr 5, 31
  05eb6e0  li 6, 308
  05eb6e4  bl 0x5eb0f8
  05eb6e8  mr 5, 30
  05eb6ec  mr 6, 31
  05eb6f0  li 4, 0
  05eb6f4  li 7, 309
  05eb6f8  mr 3, 29
  05eb6fc  bl 0x5eae28
  05eb700  mr 4, 28
  05eb704  cmpwi 7, 3, 0
  05eb708  mr 5, 31
  05eb70c  li 6, 311
  05eb710  mr 3, 27
  05eb714  bt 30, 0x5eb688
  05eb718  ld 0, 176(1)
  05eb71c  ld 27, 120(1)
  05eb720  ld 28, 128(1)
  05eb724  mtlr 0
  05eb728  ld 29, 136(1)
  05eb72c  ld 30, 144(1)
  05eb730  ld 31, 152(1)
  05eb734  addi 1, 1, 160
  05eb738  blr

FUN_005eb740:   # 0x5eb740, 0x22c bytes
  05eb740  cmpdi 3, 0
  05eb744  mflr 0
  05eb748  stdu 1, -192(1)
  05eb74c  std 28, 160(1)
  05eb750  std 30, 176(1)
  05eb754  std 25, 136(1)
  05eb758  std 26, 144(1)
  05eb75c  std 27, 152(1)
  05eb760  std 29, 168(1)
  05eb764  std 31, 184(1)
  05eb768  std 0, 208(1)
  05eb76c  mr 28, 3
  05eb770  mr 30, 4
  05eb774  bt 2, 0x5eb930
  05eb778  cmpwi 7, 4, 0
  05eb77c  bt 30, 0x5eb930
  05eb780  lwz 9, 16(3)
  05eb784  mr 3, 9
  05eb788  lwz 31, 232(9)
  05eb78c  stw 31, 112(1)
  05eb790  lwz 29, 284(9)
  05eb794  bl 0x5eb450
  05eb798  lwz 8, 16(28)
  05eb79c  lwz 0, 28(8)
  05eb7a0  cmpwi 7, 0, 0
  05eb7a4  bf 30, 0x5eb930
  05eb7a8  lwz 0, 56(8)
  05eb7ac  cmpwi 7, 0, 0
  05eb7b0  bf 29, 0x5eb930
  05eb7b4  lwz 9, 112(1)
  05eb7b8  add 6, 31, 29
  05eb7bc  addi 11, 9, 4
  05eb7c0  clrldi 9, 9, 32
  05eb7c4  cmplw 7, 6, 11
  05eb7c8  lwz 10, 0(9)
  05eb7cc  bt 28, 0x5eb930
  05eb7d0  stw 11, 112(1)
  05eb7d4  lwz 0, 232(8)
  05eb7d8  cmplw 7, 0, 11
  05eb7dc  bt 29, 0x5eb930
  05eb7e0  add 9, 10, 11
  05eb7e4  cmplw 7, 6, 9
  05eb7e8  bt 28, 0x5eb930
  05eb7ec  addi 0, 1, 112
  05eb7f0  lwz 4, 24(28)
  05eb7f4  mr 5, 8
  05eb7f8  clrldi 27, 0, 32
  05eb7fc  li 8, 0
  05eb800  addi 25, 1, 116
  05eb804  b 0x5eb844
  05eb808  stw 9, 112(1)
  05eb80c  lwz 0, 56(5)
  05eb810  addi 11, 9, 4
  05eb814  cmpw 7, 0, 8
  05eb818  cmplw 6, 6, 11
  05eb81c  bf 29, 0x5eb930
  05eb820  lwz 10, 0(7)
  05eb824  bt 24, 0x5eb930
  05eb828  stw 11, 112(1)
  05eb82c  lwz 0, 232(5)
  05eb830  add 9, 11, 10
  05eb834  cmplw 7, 0, 11
  05eb838  cmplw 6, 6, 9
  05eb83c  bt 29, 0x5eb930
  05eb840  bt 24, 0x5eb930
  05eb844  cmpw 7, 4, 8
  05eb848  clrldi 7, 9, 32
  05eb84c  addi 8, 8, 1
  05eb850  cmpwi 6, 10, 0
  05eb854  bf 30, 0x5eb808
  05eb858  bt 26, 0x5eb808
  05eb85c  clrldi 9, 11, 32
  05eb860  addi 0, 11, 4
  05eb864  add 8, 0, 10
  05eb868  lwz 29, 0(9)
  05eb86c  cmpwi 7, 29, 0
  05eb870  bt 30, 0x5eb930
  05eb874  clrldi 26, 8, 32
  05eb878  li 31, 0
  05eb87c  stw 0, 112(1)
  05eb880  addi 9, 30, 15
  05eb884  lwz 3, 20(28)
  05eb888  mr 7, 27
  05eb88c  lwz 6, 112(1)
  05eb890  rlwinm 9, 9, 0, 0, 27
  05eb894  clrldi 4, 30, 32
  05eb898  clrldi 5, 25, 32
  05eb89c  mr 8, 26
  05eb8a0  li 10, 0
  05eb8a4  bl 0x5f5398
  05eb8a8  nop
  05eb8ac  lwz 7, 116(1)
  05eb8b0  cmplw 7, 7, 29
  05eb8b4  bf 29, 0x5eb8c0
  05eb8b8  mr 7, 29
  05eb8bc  stw 29, 116(1)
  05eb8c0  lwz 0, 4(28)
  05eb8c4  sub 29, 29, 7
  05eb8c8  cmpwi 7, 0, 16
  05eb8cc  bt 30, 0x5eb91c
  05eb8d0  srwi 7, 7, 1
  05eb8d4  cmpwi 7, 7, 0
  05eb8d8  stw 7, 116(1)
  05eb8dc  bt 30, 0x5eb964
  05eb8e0  li 6, 0
  05eb8e4  mr 8, 30
  05eb8e8  clrldi 10, 8, 32
  05eb8ec  lwz 7, 116(1)
  05eb8f0  add 11, 6, 30
  05eb8f4  addi 6, 6, 1
  05eb8f8  clrldi 11, 11, 32
  05eb8fc  cmplw 7, 7, 6
  05eb900  lhz 9, 0(10)
  05eb904  addi 8, 8, 2
  05eb908  extsh 9, 9
  05eb90c  srawi 9, 9, 8
  05eb910  addi 9, 9, -128
  05eb914  stb 9, 0(11)
  05eb918  bt 29, 0x5eb8e8
  05eb91c  cmpwi 7, 29, 0
  05eb920  add 31, 31, 7
  05eb924  bt 30, 0x5eb934
  05eb928  add 30, 7, 30
  05eb92c  b 0x5eb880
  05eb930  li 31, 0
  05eb934  ld 0, 208(1)
  05eb938  clrldi 3, 31, 32
  05eb93c  ld 25, 136(1)
  05eb940  ld 26, 144(1)
  05eb944  mtlr 0
  05eb948  ld 27, 152(1)
  05eb94c  ld 28, 160(1)
  05eb950  ld 29, 168(1)
  05eb954  ld 30, 176(1)
  05eb958  ld 31, 184(1)
  05eb95c  addi 1, 1, 192
  05eb960  blr
  05eb964  lwz 7, 116(1)
  05eb968  b 0x5eb91c

FUN_005eb970:   # 0x5eb970, 0x3c bytes
  05eb970  mr 9, 3
  05eb974  mflr 0
  05eb978  stdu 1, -112(1)
  05eb97c  cmpwi 7, 9, 0
  05eb980  std 0, 128(1)
  05eb984  clrldi 3, 3, 32
  05eb988  bt 30, 0x5eb99c
  05eb98c  li 0, 0
  05eb990  stw 0, 20(9)
  05eb994  bl 0x5f516c
  05eb998  nop
  05eb99c  ld 0, 128(1)
  05eb9a0  addi 1, 1, 112
  05eb9a4  mtlr 0
  05eb9a8  blr

FUN_005eb9ac:   # 0x5eb9ac, 0x114 bytes
  05eb9ac  stdu 1, -144(1)
  05eb9b0  mflr 0
  05eb9b4  std 31, 136(1)
  05eb9b8  mr 31, 3
  05eb9bc  std 29, 120(1)
  05eb9c0  std 30, 128(1)
  05eb9c4  std 0, 160(1)
  05eb9c8  lwz 3, 24(3)
  05eb9cc  li 29, 0
  05eb9d0  lwz 0, 0(31)
  05eb9d4  sub 9, 0, 3
  05eb9d8  cmpwi 7, 9, 0
  05eb9dc  bt 28, 0x5ebab4
  05eb9e0  lwz 0, 72(31)
  05eb9e4  cmpw 7, 9, 0
  05eb9e8  sub 8, 0, 9
  05eb9ec  sub 7, 3, 8
  05eb9f0  bf 28, 0x5eba44
  05eb9f4  lwz 9, 36(31)
  05eb9f8  li 4, 0
  05eb9fc  lwz 0, 32(31)
  05eba00  clrldi 3, 7, 32
  05eba04  lwz 10, 40(31)
  05eba08  clrldi 5, 8, 32
  05eba0c  mulli 11, 8, 1000
  05eba10  lwz 6, 12(31)
  05eba14  stw 7, 24(31)
  05eba18  cmplw 7, 7, 6
  05eba1c  sub 30, 6, 7
  05eba20  mullw 0, 0, 9
  05eba24  sub 9, 8, 30
  05eba28  mullw 0, 0, 10
  05eba2c  srwi 0, 0, 3
  05eba30  divwu 29, 11, 0
  05eba34  bt 28, 0x5eba64
  05eba38  li 4, 0
  05eba3c  bl 0x5d0140
  05eba40  nop
  05eba44  ld 0, 160(1)
  05eba48  clrldi 3, 29, 32
  05eba4c  ld 30, 128(1)
  05eba50  ld 29, 120(1)
  05eba54  mtlr 0
  05eba58  ld 31, 136(1)
  05eba5c  addi 1, 1, 144
  05eba60  blr
  05eba64  lwz 0, 8(31)
  05eba68  clrldi 5, 9, 32
  05eba6c  clrldi 3, 6, 32
  05eba70  add 0, 7, 0
  05eba74  stw 0, 24(31)
  05eba78  bl 0x5d0140
  05eba7c  nop
  05eba80  lwz 3, 24(31)
  05eba84  clrldi 5, 30, 32
  05eba88  li 4, 0
  05eba8c  bl 0x5d0140
  05eba90  nop
  05eba94  ld 0, 160(1)
  05eba98  ld 30, 128(1)
  05eba9c  clrldi 3, 29, 32
  05ebaa0  ld 31, 136(1)
  05ebaa4  ld 29, 120(1)
  05ebaa8  mtlr 0
  05ebaac  addi 1, 1, 144
  05ebab0  blr
  05ebab4  lwz 0, 8(31)
  05ebab8  add 9, 9, 0
  05ebabc  b 0x5eb9e0

FUN_005ebac0:   # 0x5ebac0, 0x490 bytes
  05ebac0  stdu 1, -208(1)
  05ebac4  mflr 0
  05ebac8  std 29, 184(1)
  05ebacc  std 0, 224(1)
  05ebad0  std 22, 128(1)
  05ebad4  std 23, 136(1)
  05ebad8  std 24, 144(1)
  05ebadc  std 25, 152(1)
  05ebae0  std 26, 160(1)
  05ebae4  std 27, 168(1)
  05ebae8  std 28, 176(1)
  05ebaec  std 30, 192(1)
  05ebaf0  std 31, 200(1)
  05ebaf4  lwz 11, 292(3)
  05ebaf8  mr 29, 3
  05ebafc  lwz 10, 340(3)
  05ebb00  mr 8, 3
  05ebb04  slwi 0, 11, 7
  05ebb08  slwi 9, 11, 9
  05ebb0c  sub 9, 9, 0
  05ebb10  add 9, 9, 10
  05ebb14  addi 9, 9, -384
  05ebb18  clrldi 9, 9, 32
  05ebb1c  lwz 0, 348(9)
  05ebb20  cmpwi 7, 0, 0
  05ebb24  bt 30, 0x5ebb54
  05ebb28  lwz 0, 1120(3)
  05ebb2c  cmpwi 7, 0, 0
  05ebb30  bt 30, 0x5ebb54
  05ebb34  cmpwi 7, 11, 0
  05ebb38  bt 30, 0x5ebb54
  05ebb3c  clrldi 9, 10, 32
  05ebb40  lwz 9, 76(9)
  05ebb44  cmpwi 7, 9, 0
  05ebb48  bf 29, 0x5ebb8c
  05ebb4c  cmpwi 7, 9, 2
  05ebb50  bt 30, 0x5ebb8c
  05ebb54  ld 0, 224(1)
  05ebb58  ld 22, 128(1)
  05ebb5c  ld 23, 136(1)
  05ebb60  mtlr 0
  05ebb64  ld 24, 144(1)
  05ebb68  ld 25, 152(1)
  05ebb6c  ld 26, 160(1)
  05ebb70  ld 27, 168(1)
  05ebb74  ld 28, 176(1)
  05ebb78  ld 29, 184(1)
  05ebb7c  ld 30, 192(1)
  05ebb80  ld 31, 200(1)
  05ebb84  addi 1, 1, 208
  05ebb88  blr
  05ebb8c  addi 0, 8, 944
  05ebb90  lwz 24, -32496(2)
  05ebb94  lwz 23, -32516(2)
  05ebb98  li 4, 0
  05ebb9c  clrldi 22, 0, 32
  05ebba0  mr 5, 24
  05ebba4  mr 3, 22
  05ebba8  mr 6, 23
  05ebbac  li 7, 639
  05ebbb0  bl 0x5eae28
  05ebbb4  cmpwi 7, 3, 0
  05ebbb8  bt 30, 0x5ebb54
  05ebbbc  lwz 0, 292(29)
  05ebbc0  cmpwi 7, 0, 0
  05ebbc4  bt 30, 0x5ebb54
  05ebbc8  li 25, 0
  05ebbcc  li 26, 0
  05ebbd0  addi 27, 1, 112
  05ebbd4  addi 28, 1, 116
  05ebbd8  lwz 0, 340(29)
  05ebbdc  add 0, 26, 0
  05ebbe0  clrldi 30, 0, 32
  05ebbe4  mr 3, 30
  05ebbe8  lwz 9, 348(30)
  05ebbec  lwz 0, 0(9)
  05ebbf0  std 2, 40(1)
  05ebbf4  mtctr 0
  05ebbf8  lwz 2, 4(9)
  05ebbfc  bctrl
  05ebc00  ld 2, 40(1)
  05ebc04  cmpwi 7, 3, 0
  05ebc08  bt 30, 0x5ebe10
  05ebc0c  nop
  05ebc10  lwz 0, 0(30)
  05ebc14  lwz 9, 24(30)
  05ebc18  sub 31, 0, 9
  05ebc1c  cmpwi 7, 31, 0
  05ebc20  bt 28, 0x5ebf08
  05ebc24  lwz 0, 44(30)
  05ebc28  cmpw 7, 0, 31
  05ebc2c  bt 28, 0x5ebc48
  05ebc30  lwz 0, 12(29)
  05ebc34  lwz 9, 64(30)
  05ebc38  cmpw 7, 0, 9
  05ebc3c  bf 29, 0x5ebe10
  05ebc40  cmpwi 7, 31, 0
  05ebc44  bt 30, 0x5ebe10
  05ebc48  lwz 9, 352(30)
  05ebc4c  mr 3, 30
  05ebc50  clrldi 4, 27, 32
  05ebc54  clrldi 5, 28, 32
  05ebc58  lwz 0, 0(9)
  05ebc5c  std 2, 40(1)
  05ebc60  mtctr 0
  05ebc64  lwz 2, 4(9)
  05ebc68  bctrl
  05ebc6c  ld 2, 40(1)
  05ebc70  cmpwi 7, 3, 0
  05ebc74  bt 30, 0x5ebe10
  05ebc78  lwz 0, 84(30)
  05ebc7c  cmpwi 7, 0, 0
  05ebc80  bt 30, 0x5ebed4
  05ebc84  lwz 4, 116(1)
  05ebc88  slwi 4, 4, 1
  05ebc8c  stw 4, 116(1)
  05ebc90  cmplw 7, 31, 4
  05ebc94  bf 28, 0x5ebca0
  05ebc98  mr 4, 31
  05ebc9c  stw 31, 116(1)
  05ebca0  lwz 0, 12(29)
  05ebca4  lwz 9, 64(30)
  05ebca8  cmpw 7, 0, 9
  05ebcac  bt 29, 0x5ebcc4
  05ebcb0  lwz 0, 48(30)
  05ebcb4  lwz 9, 84(30)
  05ebcb8  slw 0, 0, 9
  05ebcbc  and 4, 4, 0
  05ebcc0  stw 4, 116(1)
  05ebcc4  lwz 9, 24(30)
  05ebcc8  lwz 0, 16(30)
  05ebccc  sub 31, 0, 9
  05ebcd0  cmplw 7, 31, 4
  05ebcd4  bf 28, 0x5ebe5c
  05ebcd8  cmpwi 7, 31, 0
  05ebcdc  bt 30, 0x5ebedc
  05ebce0  lwz 0, 84(30)
  05ebce4  cmpwi 7, 0, 0
  05ebce8  bt 30, 0x5ebf2c
  05ebcec  srwi 0, 31, 1
  05ebcf0  lwz 3, 112(1)
  05ebcf4  cmpwi 7, 0, 0
  05ebcf8  bt 30, 0x5ebd40
  05ebcfc  mr 4, 9
  05ebd00  clrldi 9, 0, 32
  05ebd04  mr 8, 3
  05ebd08  mtctr 9
  05ebd0c  nop
  05ebd10  clrldi 9, 4, 32
  05ebd14  clrldi 10, 8, 32
  05ebd18  addi 4, 4, 2
  05ebd1c  addi 8, 8, 1
  05ebd20  lhz 11, 0(9)
  05ebd24  extsh 11, 11
  05ebd28  srawi 11, 11, 8
  05ebd2c  addi 11, 11, -128
  05ebd30  stb 11, 0(10)
  05ebd34  bdnz 0x5ebd10
  05ebd38  add 3, 3, 0
  05ebd3c  lwz 4, 116(1)
  05ebd40  stw 3, 112(1)
  05ebd44  lwz 0, 84(30)
  05ebd48  cmpwi 7, 0, 0
  05ebd4c  bt 30, 0x5ebeec
  05ebd50  sub 0, 4, 31
  05ebd54  lwz 9, 12(30)
  05ebd58  srwi 0, 0, 1
  05ebd5c  cmpwi 7, 0, 0
  05ebd60  bt 30, 0x5ebd9c
  05ebd64  clrldi 0, 0, 32
  05ebd68  mr 8, 9
  05ebd6c  mtctr 0
  05ebd70  clrldi 9, 8, 32
  05ebd74  clrldi 10, 3, 32
  05ebd78  addi 8, 8, 2
  05ebd7c  addi 3, 3, 1
  05ebd80  lhz 11, 0(9)
  05ebd84  extsh 11, 11
  05ebd88  srawi 11, 11, 8
  05ebd8c  addi 11, 11, -128
  05ebd90  stb 11, 0(10)
  05ebd94  bdnz 0x5ebd70
  05ebd98  lwz 4, 116(1)
  05ebd9c  sub 9, 4, 31
  05ebda0  lwz 0, 12(30)
  05ebda4  add 0, 0, 9
  05ebda8  stw 0, 24(30)
  05ebdac  lwz 0, 84(30)
  05ebdb0  cmpwi 7, 0, 0
  05ebdb4  bt 30, 0x5ebecc
  05ebdb8  lwz 4, 116(1)
  05ebdbc  srwi 4, 4, 1
  05ebdc0  stw 4, 116(1)
  05ebdc4  lwz 9, 356(30)
  05ebdc8  clrldi 4, 4, 32
  05ebdcc  mr 3, 30
  05ebdd0  lwz 0, 0(9)
  05ebdd4  std 2, 40(1)
  05ebdd8  mtctr 0
  05ebddc  lwz 2, 4(9)
  05ebde0  bctrl
  05ebde4  ld 2, 40(1)
  05ebde8  lwz 9, 348(30)
  05ebdec  mr 3, 30
  05ebdf0  lwz 0, 0(9)
  05ebdf4  std 2, 40(1)
  05ebdf8  mtctr 0
  05ebdfc  lwz 2, 4(9)
  05ebe00  bctrl
  05ebe04  ld 2, 40(1)
  05ebe08  cmpwi 7, 3, 0
  05ebe0c  bf 30, 0x5ebc10
  05ebe10  addi 25, 25, 1
  05ebe14  lwz 0, 292(29)
  05ebe18  addi 26, 26, 384
  05ebe1c  cmplw 7, 0, 25
  05ebe20  bt 29, 0x5ebbd8
  05ebe24  cmpwi 7, 0, 0
  05ebe28  bt 30, 0x5ebb54
  05ebe2c  lwz 9, 340(29)
  05ebe30  lwz 3, 76(9)
  05ebe34  cmpwi 7, 3, 0
  05ebe38  bf 29, 0x5ebe44
  05ebe3c  cmpwi 7, 3, 2
  05ebe40  bf 30, 0x5ebb54
  05ebe44  mr 3, 22
  05ebe48  mr 4, 24
  05ebe4c  mr 5, 23
  05ebe50  li 6, 653
  05ebe54  bl 0x5eb2e0
  05ebe58  b 0x5ebb54
  05ebe5c  lwz 0, 84(30)
  05ebe60  cmpwi 7, 0, 0
  05ebe64  bt 30, 0x5ebf14
  05ebe68  srwi 0, 4, 1
  05ebe6c  lwz 8, 112(1)
  05ebe70  cmpwi 7, 0, 0
  05ebe74  bt 30, 0x5ebeb4
  05ebe78  clrldi 0, 0, 32
  05ebe7c  mr 4, 9
  05ebe80  mtctr 0
  05ebe84  nop
  05ebe88  clrldi 9, 4, 32
  05ebe8c  clrldi 10, 8, 32
  05ebe90  addi 4, 4, 2
  05ebe94  addi 8, 8, 1
  05ebe98  lhz 11, 0(9)
  05ebe9c  extsh 11, 11
  05ebea0  srawi 11, 11, 8
  05ebea4  addi 11, 11, -128
  05ebea8  stb 11, 0(10)
  05ebeac  bdnz 0x5ebe88
  05ebeb0  lwz 4, 116(1)
  05ebeb4  lwz 0, 24(30)
  05ebeb8  add 0, 0, 4
  05ebebc  stw 0, 24(30)
  05ebec0  lwz 0, 84(30)
  05ebec4  cmpwi 7, 0, 0
  05ebec8  bf 30, 0x5ebdb8
  05ebecc  lwz 4, 116(1)
  05ebed0  b 0x5ebdc4
  05ebed4  lwz 4, 116(1)
  05ebed8  b 0x5ebc90
  05ebedc  lwz 0, 84(30)
  05ebee0  lwz 3, 112(1)
  05ebee4  cmpwi 7, 0, 0
  05ebee8  bf 30, 0x5ebd50
  05ebeec  sub 5, 4, 31
  05ebef0  lwz 4, 12(30)
  05ebef4  clrldi 3, 3, 32
  05ebef8  clrldi 5, 5, 32
  05ebefc  bl 0x5c6094
  05ebf00  nop
  05ebf04  b 0x5ebd98
  05ebf08  lwz 0, 8(30)
  05ebf0c  add 31, 31, 0
  05ebf10  b 0x5ebc24
  05ebf14  clrldi 5, 4, 32
  05ebf18  lwz 3, 112(1)
  05ebf1c  clrldi 4, 9, 32
  05ebf20  bl 0x5c6094
  05ebf24  nop
  05ebf28  b 0x5ebeb0
  05ebf2c  clrldi 4, 9, 32
  05ebf30  lwz 3, 112(1)
  05ebf34  clrldi 5, 31, 32
  05ebf38  bl 0x5c6094
  05ebf3c  nop
  05ebf40  lwz 3, 112(1)
  05ebf44  lwz 4, 116(1)
  05ebf48  add 3, 3, 31
  05ebf4c  b 0x5ebd40

FUN_005ebf50:   # 0x5ebf50, 0xbc bytes
  05ebf50  cmpwi 7, 3, 0
  05ebf54  mflr 0
  05ebf58  stdu 1, -128(1)
  05ebf5c  std 30, 112(1)
  05ebf60  std 31, 120(1)
  05ebf64  mr 30, 3
  05ebf68  mr 31, 3
  05ebf6c  std 0, 144(1)
  05ebf70  clrldi 3, 3, 32
  05ebf74  bt 30, 0x5ebf90
  05ebf78  lwz 0, 292(31)
  05ebf7c  cmpwi 7, 0, 0
  05ebf80  bf 30, 0x5ebfa8
  05ebf84  lwz 0, 380(31)
  05ebf88  cmpwi 7, 0, 0
  05ebf8c  bt 30, 0x5ebfc0
  05ebf90  ld 0, 144(1)
  05ebf94  ld 30, 112(1)
  05ebf98  ld 31, 120(1)
  05ebf9c  mtlr 0
  05ebfa0  addi 1, 1, 128
  05ebfa4  blr
  05ebfa8  lwz 9, 340(31)
  05ebfac  lwz 0, 76(9)
  05ebfb0  cmpwi 7, 0, 1
  05ebfb4  bf 30, 0x5ebf84
  05ebfb8  bl 0x5ebac0
  05ebfbc  b 0x5ebf84
  05ebfc0  lwz 0, 32(31)
  05ebfc4  addi 3, 30, 400
  05ebfc8  rlwinm 0, 0, 0, 4, 4
  05ebfcc  clrldi 3, 3, 32
  05ebfd0  cmpwi 7, 0, 0
  05ebfd4  bt 30, 0x5ebf90
  05ebfd8  lwz 9, 416(31)
  05ebfdc  lwz 0, 0(9)
  05ebfe0  std 2, 40(1)
  05ebfe4  mtctr 0
  05ebfe8  lwz 2, 4(9)
  05ebfec  bctrl
  05ebff0  ld 2, 40(1)
  05ebff4  ld 0, 144(1)
  05ebff8  ld 30, 112(1)
  05ebffc  mtlr 0
  05ec000  ld 31, 120(1)
  05ec004  addi 1, 1, 128
  05ec008  blr

FUN_005ec00c:   # 0x5ec00c, 0x28 bytes
  05ec00c  stdu 1, -112(1)
  05ec010  mflr 0
  05ec014  std 0, 128(1)
  05ec018  bl 0x5f5090
  05ec01c  nop
  05ec020  ld 0, 128(1)
  05ec024  clrldi 3, 3, 32
  05ec028  mtlr 0
  05ec02c  addi 1, 1, 112
  05ec030  blr

FUN_005ec034:   # 0x5ec034, 0xac bytes
  05ec034  cmpwi 7, 3, 1
  05ec038  mflr 0
  05ec03c  stdu 1, -112(1)
  05ec040  std 0, 128(1)
  05ec044  cmpwi 6, 3, 2
  05ec048  bt 30, 0x5ec0ac
  05ec04c  bt 26, 0x5ec068
  05ec050  li 0, 0
  05ec054  extsw 3, 0
  05ec058  ld 0, 128(1)
  05ec05c  addi 1, 1, 112
  05ec060  mtlr 0
  05ec064  blr
  05ec068  lwz 9, -32540(2)
  05ec06c  clrldi 4, 4, 32
  05ec070  addi 3, 9, 756
  05ec074  lwz 0, 428(9)
  05ec078  cmpwi 7, 0, 0
  05ec07c  bt 30, 0x5ec050
  05ec080  bl 0x5fcc50
  05ec084  nop
  05ec088  srawi 9, 3, 31
  05ec08c  xor 0, 9, 3
  05ec090  sub 0, 9, 0
  05ec094  srwi 0, 0, 31
  05ec098  extsw 3, 0
  05ec09c  ld 0, 128(1)
  05ec0a0  addi 1, 1, 112
  05ec0a4  mtlr 0
  05ec0a8  blr
  05ec0ac  lwz 9, -32540(2)
  05ec0b0  clrldi 4, 4, 32
  05ec0b4  addi 3, 9, 500
  05ec0b8  lwz 0, 496(9)
  05ec0bc  cmpwi 7, 0, 0
  05ec0c0  bt 30, 0x5ec050
  05ec0c4  bl 0x5fcc50
  05ec0c8  nop
  05ec0cc  srawi 9, 3, 31
  05ec0d0  xor 0, 9, 3
  05ec0d4  sub 0, 9, 0
  05ec0d8  srwi 0, 0, 31
  05ec0dc  b 0x5ec098

FUN_005ec0e0:   # 0x5ec0e0, 0xf4 bytes
  05ec0e0  stdu 1, -160(1)
  05ec0e4  mflr 0
  05ec0e8  std 31, 152(1)
  05ec0ec  lwz 31, -32540(2)
  05ec0f0  li 6, 1363
  05ec0f4  std 0, 176(1)
  05ec0f8  addi 0, 31, 1012
  05ec0fc  std 26, 112(1)
  05ec100  std 27, 120(1)
  05ec104  std 28, 128(1)
  05ec108  lwz 26, -32516(2)
  05ec10c  clrldi 28, 0, 32
  05ec110  lwz 27, -32492(2)
  05ec114  mr 3, 28
  05ec118  mr 4, 27
  05ec11c  mr 5, 26
  05ec120  std 30, 144(1)
  05ec124  std 29, 136(1)
  05ec128  bl 0x5eb0f8
  05ec12c  addi 0, 31, 432
  05ec130  li 4, 4
  05ec134  clrldi 30, 0, 32
  05ec138  lwz 0, 428(31)
  05ec13c  cmpwi 7, 0, 0
  05ec140  mr 3, 30
  05ec144  bt 30, 0x5ec19c
  05ec148  li 0, 1
  05ec14c  addi 29, 31, 756
  05ec150  stw 0, 1140(31)
  05ec154  bl 0x5fc190
  05ec158  nop
  05ec15c  clrldi 29, 29, 32
  05ec160  li 4, -1
  05ec164  li 5, 0
  05ec168  clrldi 4, 4, 32
  05ec16c  mr 3, 29
  05ec170  bl 0x5fc2ec
  05ec174  nop
  05ec178  mr 3, 29
  05ec17c  bl 0x5fd4d0
  05ec180  nop
  05ec184  mr 3, 30
  05ec188  bl 0x5fc098
  05ec18c  nop
  05ec190  li 0, 0
  05ec194  stw 0, 1144(31)
  05ec198  stw 0, 428(31)
  05ec19c  ld 0, 176(1)
  05ec1a0  mr 3, 28
  05ec1a4  mr 4, 27
  05ec1a8  ld 28, 128(1)
  05ec1ac  mr 5, 26
  05ec1b0  ld 27, 120(1)
  05ec1b4  ld 26, 112(1)
  05ec1b8  li 6, 1379
  05ec1bc  ld 29, 136(1)
  05ec1c0  mtlr 0
  05ec1c4  ld 30, 144(1)
  05ec1c8  ld 31, 152(1)
  05ec1cc  addi 1, 1, 160
  05ec1d0  b 0x5eb2e0

FUN_005ec1d4:   # 0x5ec1d4, 0xf4 bytes
  05ec1d4  stdu 1, -160(1)
  05ec1d8  mflr 0
  05ec1dc  std 31, 152(1)
  05ec1e0  lwz 31, -32540(2)
  05ec1e4  li 6, 600
  05ec1e8  std 0, 176(1)
  05ec1ec  addi 0, 31, 1148
  05ec1f0  std 26, 112(1)
  05ec1f4  std 27, 120(1)
  05ec1f8  std 28, 128(1)
  05ec1fc  lwz 26, -32516(2)
  05ec200  clrldi 28, 0, 32
  05ec204  lwz 27, -32488(2)
  05ec208  mr 3, 28
  05ec20c  mr 4, 27
  05ec210  mr 5, 26
  05ec214  std 30, 144(1)
  05ec218  std 29, 136(1)
  05ec21c  bl 0x5eb0f8
  05ec220  addi 0, 31, 1280
  05ec224  li 4, 4
  05ec228  clrldi 30, 0, 32
  05ec22c  lwz 0, 496(31)
  05ec230  cmpwi 7, 0, 0
  05ec234  mr 3, 30
  05ec238  bt 30, 0x5ec290
  05ec23c  li 0, 1
  05ec240  addi 29, 31, 500
  05ec244  stw 0, 1276(31)
  05ec248  bl 0x5fc190
  05ec24c  nop
  05ec250  clrldi 29, 29, 32
  05ec254  li 4, -1
  05ec258  li 5, 0
  05ec25c  clrldi 4, 4, 32
  05ec260  mr 3, 29
  05ec264  bl 0x5fc2ec
  05ec268  nop
  05ec26c  mr 3, 29
  05ec270  bl 0x5fd4d0
  05ec274  nop
  05ec278  mr 3, 30
  05ec27c  bl 0x5fc098
  05ec280  nop
  05ec284  li 0, 0
  05ec288  stw 0, 1344(31)
  05ec28c  stw 0, 496(31)
  05ec290  ld 0, 176(1)
  05ec294  mr 3, 28
  05ec298  mr 4, 27
  05ec29c  ld 28, 128(1)
  05ec2a0  mr 5, 26
  05ec2a4  ld 27, 120(1)
  05ec2a8  ld 26, 112(1)
  05ec2ac  li 6, 615
  05ec2b0  ld 29, 136(1)
  05ec2b4  mtlr 0
  05ec2b8  ld 30, 144(1)
  05ec2bc  ld 31, 152(1)
  05ec2c0  addi 1, 1, 160
  05ec2c4  b 0x5eb2e0

FUN_005ec2c8:   # 0x5ec2c8, 0x28 bytes
  05ec2c8  stdu 1, -112(1)
  05ec2cc  mflr 0
  05ec2d0  std 0, 128(1)
  05ec2d4  bl 0x5fbef8
  05ec2d8  nop
  05ec2dc  ld 0, 128(1)
  05ec2e0  clrldi 3, 3, 32
  05ec2e4  mtlr 0
  05ec2e8  addi 1, 1, 112
  05ec2ec  blr

FUN_005ec2f0:   # 0x5ec2f0, 0xd4 bytes
  05ec2f0  addi 3, 3, -400
  05ec2f4  mflr 0
  05ec2f8  stdu 1, -160(1)
  05ec2fc  std 30, 144(1)
  05ec300  clrldi 30, 3, 32
  05ec304  std 27, 120(1)
  05ec308  std 28, 128(1)
  05ec30c  std 29, 136(1)
  05ec310  std 31, 152(1)
  05ec314  std 0, 176(1)
  05ec318  lwz 29, 384(30)
  05ec31c  mr 28, 4
  05ec320  mr 27, 5
  05ec324  cmpwi 7, 29, 0
  05ec328  bf 29, 0x5ec3a0
  05ec32c  bl 0x5f5090
  05ec330  nop
  05ec334  clrldi 0, 28, 32
  05ec338  lwz 10, 388(30)
  05ec33c  extsw 9, 29
  05ec340  sub 11, 3, 27
  05ec344  mr 31, 3
  05ec348  mulli 0, 0, 1000
  05ec34c  divdu 0, 0, 9
  05ec350  sub 0, 0, 11
  05ec354  add 0, 0, 10
  05ec358  cmpwi 7, 0, 0
  05ec35c  stw 0, 388(30)
  05ec360  bf 29, 0x5ec3a0
  05ec364  nop
  05ec368  li 3, 1
  05ec36c  bl 0x5fbf74
  05ec370  nop
  05ec374  bl 0x5f5090
  05ec378  nop
  05ec37c  lwz 0, 388(30)
  05ec380  sub 9, 3, 31
  05ec384  cmpw 7, 9, 0
  05ec388  sub 11, 0, 9
  05ec38c  cmpwi 6, 11, 0
  05ec390  bt 28, 0x5ec368
  05ec394  stw 11, 388(30)
  05ec398  mr 31, 3
  05ec39c  bt 25, 0x5ec368
  05ec3a0  ld 0, 176(1)
  05ec3a4  ld 27, 120(1)
  05ec3a8  ld 28, 128(1)
  05ec3ac  mtlr 0
  05ec3b0  ld 29, 136(1)
  05ec3b4  ld 30, 144(1)
  05ec3b8  ld 31, 152(1)
  05ec3bc  addi 1, 1, 160
  05ec3c0  blr

FUN_005ec3c8:   # 0x5ec3c8, 0x258 bytes
  05ec3c8  stdu 1, -160(1)
  05ec3cc  mflr 0
  05ec3d0  std 30, 144(1)
  05ec3d4  std 31, 152(1)
  05ec3d8  lwz 30, -32540(2)
  05ec3dc  li 31, 0
  05ec3e0  std 27, 120(1)
  05ec3e4  std 28, 128(1)
  05ec3e8  std 29, 136(1)
  05ec3ec  std 0, 176(1)
  05ec3f0  addi 29, 30, 1348
  05ec3f4  li 4, 1
  05ec3f8  clrldi 29, 29, 32
  05ec3fc  mr 3, 29
  05ec400  bl 0x5fbef8
  05ec404  nop
  05ec408  li 4, -1
  05ec40c  cmpwi 7, 3, 0
  05ec410  mr 3, 29
  05ec414  bt 30, 0x5ec474
  05ec418  bl 0x5fbef8
  05ec41c  nop
  05ec420  bl 0x5fbfc8
  05ec424  nop
  05ec428  cmpwi 7, 31, 511
  05ec42c  addi 31, 31, 1
  05ec430  cmplwi 6, 31, 1023
  05ec434  bt 30, 0x5ec4b4
  05ec438  li 3, 1
  05ec43c  bf 25, 0x5ec3f0
  05ec440  addi 29, 30, 1348
  05ec444  bl 0x5fbf74
  05ec448  nop
  05ec44c  clrldi 29, 29, 32
  05ec450  li 4, 1
  05ec454  mr 3, 29
  05ec458  li 31, 0
  05ec45c  bl 0x5fbef8
  05ec460  nop
  05ec464  li 4, -1
  05ec468  cmpwi 7, 3, 0
  05ec46c  mr 3, 29
  05ec470  bf 30, 0x5ec418
  05ec474  lwz 0, 1352(30)
  05ec478  cmpwi 7, 0, 0
  05ec47c  bt 30, 0x5ec4c0
  05ec480  addi 3, 30, 1348
  05ec484  li 4, -1
  05ec488  bl 0x5fbef8
  05ec48c  nop
  05ec490  ld 0, 176(1)
  05ec494  ld 27, 120(1)
  05ec498  ld 28, 128(1)
  05ec49c  mtlr 0
  05ec4a0  ld 29, 136(1)
  05ec4a4  ld 30, 144(1)
  05ec4a8  ld 31, 152(1)
  05ec4ac  addi 1, 1, 160
  05ec4b0  blr
  05ec4b4  bl 0x5fbfac
  05ec4b8  nop
  05ec4bc  b 0x5ec3f0
  05ec4c0  addi 0, 30, 1356
  05ec4c4  li 4, 2
  05ec4c8  clrldi 29, 0, 32
  05ec4cc  mr 3, 29
  05ec4d0  bl 0x5fc508
  05ec4d4  nop
  05ec4d8  cmpwi 7, 3, 0
  05ec4dc  bf 30, 0x5ec4e4
  05ec4e0  twu 1, 1
  05ec4e4  addi 0, 30, 1148
  05ec4e8  li 4, 1
  05ec4ec  clrldi 28, 0, 32
  05ec4f0  mr 3, 28
  05ec4f4  bl 0x5fc508
  05ec4f8  nop
  05ec4fc  cmpwi 7, 3, 0
  05ec500  bf 30, 0x5ec508
  05ec504  twu 1, 1
  05ec508  addi 0, 30, 1012
  05ec50c  li 4, 1
  05ec510  clrldi 27, 0, 32
  05ec514  mr 3, 27
  05ec518  bl 0x5fc508
  05ec51c  nop
  05ec520  cmpwi 7, 3, 0
  05ec524  bf 30, 0x5ec52c
  05ec528  twu 1, 1
  05ec52c  lwz 31, -32532(2)
  05ec530  lwz 9, 0(31)
  05ec534  cmpwi 7, 9, 0
  05ec538  bt 30, 0x5ec5e4
  05ec53c  clrldi 9, 9, 32
  05ec540  lwz 6, -32484(2)
  05ec544  mr 4, 29
  05ec548  mr 3, 9
  05ec54c  addi 5, 30, 1484
  05ec550  lwz 11, 92(9)
  05ec554  lwz 0, 0(11)
  05ec558  std 2, 40(1)
  05ec55c  mtctr 0
  05ec560  lwz 2, 4(11)
  05ec564  bctrl
  05ec568  ld 2, 40(1)
  05ec56c  lwz 9, 0(31)
  05ec570  cmpwi 7, 9, 0
  05ec574  bt 30, 0x5ec5e4
  05ec578  clrldi 9, 9, 32
  05ec57c  lwz 6, -32488(2)
  05ec580  mr 4, 28
  05ec584  mr 3, 9
  05ec588  addi 5, 30, 1488
  05ec58c  lwz 11, 92(9)
  05ec590  lwz 0, 0(11)
  05ec594  std 2, 40(1)
  05ec598  mtctr 0
  05ec59c  lwz 2, 4(11)
  05ec5a0  bctrl
  05ec5a4  ld 2, 40(1)
  05ec5a8  lwz 9, 0(31)
  05ec5ac  cmpwi 7, 9, 0
  05ec5b0  bt- 30, 0x5ec5e4
  05ec5b4  clrldi 9, 9, 32
  05ec5b8  lwz 6, -32480(2)
  05ec5bc  mr 4, 27
  05ec5c0  mr 3, 9
  05ec5c4  addi 5, 30, 1492
  05ec5c8  lwz 11, 92(9)
  05ec5cc  lwz 0, 0(11)
  05ec5d0  std 2, 40(1)
  05ec5d4  mtctr 0
  05ec5d8  lwz 2, 4(11)
  05ec5dc  bctrl
  05ec5e0  ld 2, 40(1)
  05ec5e4  li 0, 1
  05ec5e8  addi 3, 30, 1348
  05ec5ec  li 4, -1
  05ec5f0  stw 0, 1352(30)
  05ec5f4  bl 0x5fbef8
  05ec5f8  nop
  05ec5fc  ld 0, 176(1)
  05ec600  ld 27, 120(1)
  05ec604  ld 28, 128(1)
  05ec608  mtlr 0
  05ec60c  ld 29, 136(1)
  05ec610  ld 30, 144(1)
  05ec614  ld 31, 152(1)
  05ec618  addi 1, 1, 160
  05ec61c  blr

FUN_005ec620:   # 0x5ec620, 0x158 bytes
  05ec620  cmpwi 7, 3, 0
  05ec624  mflr 0
  05ec628  stdu 1, -176(1)
  05ec62c  std 25, 120(1)
  05ec630  std 31, 168(1)
  05ec634  std 0, 192(1)
  05ec638  std 26, 128(1)
  05ec63c  std 27, 136(1)
  05ec640  std 28, 144(1)
  05ec644  std 29, 152(1)
  05ec648  std 30, 160(1)
  05ec64c  mr 31, 3
  05ec650  mr 25, 4
  05ec654  li 0, 0
  05ec658  bt 30, 0x5ec700
  05ec65c  bl 0x5ec3c8
  05ec660  lwz 30, -32540(2)
  05ec664  lwz 27, -32488(2)
  05ec668  li 6, 338
  05ec66c  addi 0, 30, 1148
  05ec670  lwz 26, -32516(2)
  05ec674  mr 4, 27
  05ec678  clrldi 28, 0, 32
  05ec67c  mr 5, 26
  05ec680  mr 3, 28
  05ec684  bl 0x5eb0f8
  05ec688  lwz 0, 1496(30)
  05ec68c  cmpwi 7, 0, 0
  05ec690  bt 30, 0x5ec6a8
  05ec694  cmpw 7, 31, 0
  05ec698  bt 30, 0x5ec6ac
  05ec69c  lwz 0, 1500(30)
  05ec6a0  cmpwi 7, 0, 0
  05ec6a4  bf 30, 0x5ec730
  05ec6a8  stw 31, 1496(30)
  05ec6ac  lwz 9, 1496(30)
  05ec6b0  clrldi 3, 25, 32
  05ec6b4  lwz 0, 0(9)
  05ec6b8  std 2, 40(1)
  05ec6bc  mtctr 0
  05ec6c0  lwz 2, 4(9)
  05ec6c4  bctrl
  05ec6c8  ld 2, 40(1)
  05ec6cc  cmpwi 7, 3, 0
  05ec6d0  bt 30, 0x5ec6d8
  05ec6d4  stw 3, 1504(30)
  05ec6d8  mr 4, 27
  05ec6dc  mr 5, 26
  05ec6e0  addi 3, 30, 1148
  05ec6e4  li 6, 363
  05ec6e8  bl 0x5eb2e0
  05ec6ec  lwz 0, 1504(30)
  05ec6f0  srawi 11, 0, 31
  05ec6f4  xor 9, 11, 0
  05ec6f8  sub 9, 11, 9
  05ec6fc  srwi 0, 9, 31
  05ec700  extsw 3, 0
  05ec704  ld 0, 192(1)
  05ec708  ld 25, 120(1)
  05ec70c  ld 26, 128(1)
  05ec710  mtlr 0
  05ec714  ld 27, 136(1)
  05ec718  ld 28, 144(1)
  05ec71c  ld 29, 152(1)
  05ec720  ld 30, 160(1)
  05ec724  ld 31, 168(1)
  05ec728  addi 1, 1, 176
  05ec72c  blr
  05ec730  mr 3, 28
  05ec734  mr 4, 27
  05ec738  mr 5, 26
  05ec73c  li 6, 351
  05ec740  bl 0x5eb2e0
  05ec744  li 0, 0
  05ec748  ld 25, 120(1)
  05ec74c  extsw 3, 0
  05ec750  ld 0, 192(1)
  05ec754  ld 26, 128(1)
  05ec758  ld 27, 136(1)
  05ec75c  mtlr 0
  05ec760  ld 28, 144(1)
  05ec764  ld 29, 152(1)
  05ec768  ld 30, 160(1)
  05ec76c  ld 31, 168(1)
  05ec770  addi 1, 1, 176
  05ec774  blr

FUN_005ec778:   # 0x5ec778, 0x508 bytes
  05ec778  stdu 1, -240(1)
  05ec77c  mflr 0
  05ec780  std 20, 144(1)
  05ec784  lwz 20, -32532(2)
  05ec788  std 19, 136(1)
  05ec78c  std 21, 152(1)
  05ec790  std 22, 160(1)
  05ec794  std 23, 168(1)
  05ec798  std 24, 176(1)
  05ec79c  std 25, 184(1)
  05ec7a0  std 26, 192(1)
  05ec7a4  std 27, 200(1)
  05ec7a8  std 28, 208(1)
  05ec7ac  std 29, 216(1)
  05ec7b0  std 30, 224(1)
  05ec7b4  std 31, 232(1)
  05ec7b8  std 0, 256(1)
  05ec7bc  lwz 9, 0(20)
  05ec7c0  cmpwi 7, 9, 0
  05ec7c4  bt 30, 0x5ecc58
  05ec7c8  clrldi 9, 9, 32
  05ec7cc  lwz 26, -32540(2)
  05ec7d0  lwz 6, -32476(2)
  05ec7d4  li 4, 0
  05ec7d8  mr 3, 9
  05ec7dc  addi 5, 26, 1508
  05ec7e0  lwz 11, 88(9)
  05ec7e4  lwz 0, 0(11)
  05ec7e8  std 2, 40(1)
  05ec7ec  mtctr 0
  05ec7f0  lwz 2, 4(11)
  05ec7f4  bctrl
  05ec7f8  ld 2, 40(1)
  05ec7fc  lwz 25, -32536(2)
  05ec800  lwz 9, 0(20)
  05ec804  cmpwi 7, 9, 0
  05ec808  bt 30, 0x5ec854
  05ec80c  clrldi 9, 9, 32
  05ec810  lwz 0, -32472(2)
  05ec814  lwz 8, -32516(2)
  05ec818  li 4, 0
  05ec81c  std 0, 112(1)
  05ec820  mr 3, 9
  05ec824  li 5, 0
  05ec828  lwz 11, 80(9)
  05ec82c  li 6, 0
  05ec830  li 7, 2
  05ec834  li 9, 543
  05ec838  addi 10, 26, 1512
  05ec83c  lwz 0, 0(11)
  05ec840  std 2, 40(1)
  05ec844  mtctr 0
  05ec848  lwz 2, 4(11)
  05ec84c  bctrl
  05ec850  ld 2, 40(1)
  05ec854  addi 3, 26, 1280
  05ec858  lwz 4, 16(25)
  05ec85c  bl 0x5fc0f8
  05ec860  nop
  05ec864  lwz 9, 0(20)
  05ec868  cmpwi 7, 9, 0
  05ec86c  bt 30, 0x5ec8a4
  05ec870  clrldi 9, 9, 32
  05ec874  lwz 6, -32516(2)
  05ec878  li 4, 0
  05ec87c  mr 3, 9
  05ec880  li 5, 0
  05ec884  li 7, 545
  05ec888  lwz 11, 84(9)
  05ec88c  lwz 0, 0(11)
  05ec890  std 2, 40(1)
  05ec894  mtctr 0
  05ec898  lwz 2, 4(11)
  05ec89c  bctrl
  05ec8a0  ld 2, 40(1)
  05ec8a4  lwz 0, 1276(26)
  05ec8a8  cmpwi 7, 0, 0
  05ec8ac  bf 30, 0x5eca90
  05ec8b0  lwz 0, 1352(26)
  05ec8b4  cmpwi 7, 0, 0
  05ec8b8  bt 30, 0x5eca90
  05ec8bc  addi 28, 26, 1356
  05ec8c0  lwz 31, -32484(2)
  05ec8c4  lwz 29, -32516(2)
  05ec8c8  li 6, 468
  05ec8cc  clrldi 30, 28, 32
  05ec8d0  mr 4, 31
  05ec8d4  mr 3, 30
  05ec8d8  mr 5, 29
  05ec8dc  mr 23, 31
  05ec8e0  bl 0x5eb0f8
  05ec8e4  lwz 9, 1516(26)
  05ec8e8  mr 27, 29
  05ec8ec  cmpwi 7, 9, 0
  05ec8f0  bt 30, 0x5ecc34
  05ec8f4  li 21, 0
  05ec8f8  lwz 22, -32496(2)
  05ec8fc  addi 19, 28, 164
  05ec900  b 0x5ec910
  05ec904  lwz 9, 228(31)
  05ec908  cmpwi 7, 9, 0
  05ec90c  bt 30, 0x5ec978
  05ec910  clrldi 31, 9, 32
  05ec914  lwz 0, 300(31)
  05ec918  cmpwi 7, 0, 0
  05ec91c  bf 30, 0x5ec904
  05ec920  lwz 0, 292(31)
  05ec924  cmpwi 7, 0, 0
  05ec928  bt 30, 0x5ec904
  05ec92c  addi 0, 9, 944
  05ec930  li 4, 0
  05ec934  clrldi 30, 0, 32
  05ec938  mr 5, 22
  05ec93c  mr 3, 30
  05ec940  mr 6, 27
  05ec944  li 7, 474
  05ec948  mr 24, 22
  05ec94c  bl 0x5eae28
  05ec950  cmpwi 7, 3, 0
  05ec954  bf 30, 0x5ecae4
  05ec958  lwz 0, 16(25)
  05ec95c  cmplwi 7, 0, 2
  05ec960  bf 29, 0x5ec904
  05ec964  li 0, 2
  05ec968  stw 0, 16(25)
  05ec96c  lwz 9, 228(31)
  05ec970  cmpwi 7, 9, 0
  05ec974  bf 30, 0x5ec910
  05ec978  mr 4, 23
  05ec97c  addi 3, 26, 1356
  05ec980  mr 5, 27
  05ec984  li 6, 514
  05ec988  mr 31, 27
  05ec98c  bl 0x5eb2e0
  05ec990  cmpwi 7, 21, 0
  05ec994  bt 30, 0x5eca90
  05ec998  addi 0, 26, 1148
  05ec99c  lwz 29, -32488(2)
  05ec9a0  li 4, 0
  05ec9a4  clrldi 30, 0, 32
  05ec9a8  mr 5, 29
  05ec9ac  mr 3, 30
  05ec9b0  mr 6, 27
  05ec9b4  li 7, 519
  05ec9b8  bl 0x5eae28
  05ec9bc  cmpwi 7, 3, 0
  05ec9c0  bt 30, 0x5ecb70
  05ec9c4  lwz 9, 0(20)
  05ec9c8  cmpwi 7, 9, 0
  05ec9cc  bt 30, 0x5eca18
  05ec9d0  clrldi 9, 9, 32
  05ec9d4  lwz 0, -32464(2)
  05ec9d8  li 4, 0
  05ec9dc  std 0, 112(1)
  05ec9e0  mr 3, 9
  05ec9e4  li 5, 0
  05ec9e8  lwz 11, 80(9)
  05ec9ec  li 6, 0
  05ec9f0  li 7, 0
  05ec9f4  mr 8, 27
  05ec9f8  li 9, 521
  05ec9fc  addi 10, 26, 1524
  05eca00  lwz 0, 0(11)
  05eca04  std 2, 40(1)
  05eca08  mtctr 0
  05eca0c  lwz 2, 4(11)
  05eca10  bctrl
  05eca14  ld 2, 40(1)
  05eca18  clrldi 9, 21, 32
  05eca1c  li 3, 0
  05eca20  li 4, 0
  05eca24  lwz 0, 0(9)
  05eca28  std 2, 40(1)
  05eca2c  lwz 2, 4(9)
  05eca30  mtctr 0
  05eca34  bctrl
  05eca38  ld 2, 40(1)
  05eca3c  lwz 9, 0(20)
  05eca40  cmpwi 7, 9, 0
  05eca44  bt 30, 0x5eca7c
  05eca48  clrldi 9, 9, 32
  05eca4c  mr 6, 31
  05eca50  mr 3, 9
  05eca54  li 4, 0
  05eca58  li 5, 0
  05eca5c  lwz 11, 84(9)
  05eca60  li 7, 523
  05eca64  lwz 0, 0(11)
  05eca68  std 2, 40(1)
  05eca6c  mtctr 0
  05eca70  lwz 2, 4(11)
  05eca74  bctrl
  05eca78  ld 2, 40(1)
  05eca7c  mr 3, 30
  05eca80  mr 4, 29
  05eca84  mr 5, 27
  05eca88  li 6, 524
  05eca8c  bl 0x5eb2e0
  05eca90  lwz 0, 1276(26)
  05eca94  cmpwi 7, 0, 0
  05eca98  bt 30, 0x5ec800
  05eca9c  ld 0, 256(1)
  05ecaa0  li 3, 1
  05ecaa4  ld 19, 136(1)
  05ecaa8  ld 20, 144(1)
  05ecaac  mtlr 0
  05ecab0  ld 21, 152(1)
  05ecab4  ld 22, 160(1)
  05ecab8  ld 23, 168(1)
  05ecabc  ld 24, 176(1)
  05ecac0  ld 25, 184(1)
  05ecac4  ld 26, 192(1)
  05ecac8  ld 27, 200(1)
  05ecacc  ld 28, 208(1)
  05ecad0  ld 29, 216(1)
  05ecad4  ld 30, 224(1)
  05ecad8  ld 31, 232(1)
  05ecadc  addi 1, 1, 240
  05ecae0  blr
  05ecae4  clrldi 3, 28, 32
  05ecae8  mr 4, 23
  05ecaec  mr 5, 27
  05ecaf0  li 6, 478
  05ecaf4  bl 0x5eb2e0
  05ecaf8  li 0, 13
  05ecafc  stw 0, 16(25)
  05ecb00  lwz 9, 300(31)
  05ecb04  cmpwi 7, 9, 0
  05ecb08  bf 30, 0x5ecb34
  05ecb0c  lwz 0, 292(31)
  05ecb10  cmpwi 7, 0, 0
  05ecb14  bt 30, 0x5ecb34
  05ecb18  lwz 9, 340(31)
  05ecb1c  lwz 0, 76(9)
  05ecb20  cmpwi 6, 0, 0
  05ecb24  bt 26, 0x5ecb94
  05ecb28  cmpwi 7, 0, 2
  05ecb2c  bt 30, 0x5ecb94
  05ecb30  bt 24, 0x5ecc64
  05ecb34  li 4, 2
  05ecb38  mr 5, 23
  05ecb3c  mr 6, 27
  05ecb40  li 7, 498
  05ecb44  clrldi 3, 28, 32
  05ecb48  bl 0x5eae28
  05ecb4c  mr 4, 24
  05ecb50  mr 29, 3
  05ecb54  mr 5, 27
  05ecb58  mr 3, 30
  05ecb5c  li 6, 500
  05ecb60  bl 0x5eb2e0
  05ecb64  cmpwi 7, 29, 0
  05ecb68  bt 30, 0x5ec8a4
  05ecb6c  b 0x5ec904
  05ecb70  lwz 0, 16(25)
  05ecb74  cmplwi 7, 0, 2
  05ecb78  bf 29, 0x5eca90
  05ecb7c  li 0, 2
  05ecb80  stw 0, 16(25)
  05ecb84  lwz 0, 1276(26)
  05ecb88  cmpwi 7, 0, 0
  05ecb8c  bt 30, 0x5ec800
  05ecb90  b 0x5eca9c
  05ecb94  lwz 9, 0(20)
  05ecb98  cmpwi 7, 9, 0
  05ecb9c  bt 30, 0x5ecbe8
  05ecba0  clrldi 9, 9, 32
  05ecba4  lwz 0, -32468(2)
  05ecba8  li 4, 0
  05ecbac  std 0, 112(1)
  05ecbb0  mr 3, 9
  05ecbb4  li 5, 0
  05ecbb8  lwz 11, 80(9)
  05ecbbc  li 6, 0
  05ecbc0  li 7, 0
  05ecbc4  mr 8, 27
  05ecbc8  li 9, 486
  05ecbcc  clrldi 10, 19, 32
  05ecbd0  lwz 0, 0(11)
  05ecbd4  std 2, 40(1)
  05ecbd8  mtctr 0
  05ecbdc  lwz 2, 4(11)
  05ecbe0  bctrl
  05ecbe4  ld 2, 40(1)
  05ecbe8  mr 3, 31
  05ecbec  bl 0x5ebac0
  05ecbf0  lwz 9, 0(20)
  05ecbf4  cmpwi 7, 9, 0
  05ecbf8  bt 30, 0x5ecb34
  05ecbfc  clrldi 9, 9, 32
  05ecc00  li 4, 0
  05ecc04  mr 3, 9
  05ecc08  li 5, 0
  05ecc0c  mr 6, 27
  05ecc10  lwz 11, 84(9)
  05ecc14  li 7, 488
  05ecc18  lwz 0, 0(11)
  05ecc1c  std 2, 40(1)
  05ecc20  mtctr 0
  05ecc24  lwz 2, 4(11)
  05ecc28  bctrl
  05ecc2c  ld 2, 40(1)
  05ecc30  b 0x5ecb34
  05ecc34  mr 3, 30
  05ecc38  mr 4, 31
  05ecc3c  mr 5, 29
  05ecc40  li 6, 514
  05ecc44  bl 0x5eb2e0
  05ecc48  lwz 0, 1276(26)
  05ecc4c  cmpwi 7, 0, 0
  05ecc50  bt 30, 0x5ec800
  05ecc54  b 0x5eca9c
  05ecc58  lwz 26, -32540(2)
  05ecc5c  lwz 25, -32536(2)
  05ecc60  b 0x5ec800
  05ecc64  neg 11, 0
  05ecc68  lwz 0, 16(25)
  05ecc6c  lwz 21, 356(9)
  05ecc70  cmplw 7, 11, 0
  05ecc74  bf 28, 0x5ecb34
  05ecc78  stw 11, 16(25)
  05ecc7c  b 0x5ecb34

FUN_005ecc80:   # 0x5ecc80, 0x1dc bytes
  05ecc80  li 0, 128
  05ecc84  lwz 9, -32536(2)
  05ecc88  stdu 1, -176(1)
  05ecc8c  addi 9, 9, 32
  05ecc90  addi 4, 4, 3
  05ecc94  clrldi 9, 9, 32
  05ecc98  stvx 31, 1, 0
  05ecc9c  mflr 0
  05ecca0  std 29, 152(1)
  05ecca4  lwz 29, -32532(2)
  05ecca8  std 30, 160(1)
  05eccac  std 31, 168(1)
  05eccb0  std 0, 192(1)
  05eccb4  srwi 30, 4, 2
  05eccb8  lvx 31, 0, 9
  05eccbc  lwz 0, 0(29)
  05eccc0  mr 31, 3
  05eccc4  cmpwi 7, 0, 0
  05eccc8  bt 30, 0x5ecd14
  05ecccc  clrldi 3, 0, 32
  05eccd0  lwz 0, -32460(2)
  05eccd4  lwz 10, -32540(2)
  05eccd8  li 4, 0
  05eccdc  std 0, 112(1)
  05ecce0  lwz 8, -32516(2)
  05ecce4  addi 10, 10, 1528
  05ecce8  li 5, 0
  05eccec  lwz 11, 80(3)
  05eccf0  li 6, 0
  05eccf4  li 7, 0
  05eccf8  li 9, 1531
  05eccfc  lwz 0, 0(11)
  05ecd00  std 2, 40(1)
  05ecd04  mtctr 0
  05ecd08  lwz 2, 4(11)
  05ecd0c  bctrl
  05ecd10  ld 2, 40(1)
  05ecd14  clrlwi 0, 31, 28
  05ecd18  cmpwi 7, 0, 0
  05ecd1c  bt 30, 0x5ecd54
  05ecd20  cmpwi 7, 30, 0
  05ecd24  clrldi 0, 30, 32
  05ecd28  mtctr 0
  05ecd2c  bf 30, 0x5ecd38
  05ecd30  b 0x5ecdf8
  05ecd34  bdz 0x5ecdf8
  05ecd38  lwbrx 0, 0, 31
  05ecd3c  stw 0, 0(31)
  05ecd40  addi 31, 31, 4
  05ecd44  addi 30, 30, -1
  05ecd48  clrlwi 0, 31, 28
  05ecd4c  cmpwi 7, 0, 0
  05ecd50  bf 30, 0x5ecd34
  05ecd54  addi 9, 30, -16
  05ecd58  cmplwi 7, 30, 15
  05ecd5c  srwi 9, 9, 4
  05ecd60  mr 3, 31
  05ecd64  addi 9, 9, 1
  05ecd68  addi 5, 31, 16
  05ecd6c  clrldi 9, 9, 32
  05ecd70  addi 6, 31, 32
  05ecd74  mtctr 9
  05ecd78  addi 7, 31, 48
  05ecd7c  bf- 29, 0x5ecdd8
  05ecd80  clrldi 9, 3, 32
  05ecd84  clrldi 11, 5, 32
  05ecd88  clrldi 10, 6, 32
  05ecd8c  clrldi 8, 7, 32
  05ecd90  addi 30, 30, -16
  05ecd94  lvx 0, 0, 9
  05ecd98  addi 3, 3, 64
  05ecd9c  lvx 1, 0, 11
  05ecda0  addi 5, 5, 64
  05ecda4  lvx 13, 0, 10
  05ecda8  addi 6, 6, 64
  05ecdac  lvx 12, 0, 8
  05ecdb0  addi 7, 7, 64
  05ecdb4  vperm 0, 0, 0, 31
  05ecdb8  vperm 1, 1, 1, 31
  05ecdbc  vperm 13, 13, 13, 31
  05ecdc0  vperm 12, 12, 12, 31
  05ecdc4  stvx 0, 0, 9
  05ecdc8  stvx 1, 0, 11
  05ecdcc  stvx 13, 0, 10
  05ecdd0  stvx 12, 0, 8
  05ecdd4  bdnz 0x5ecd80
  05ecdd8  cmpwi 7, 30, 0
  05ecddc  bt- 30, 0x5ecdf8
  05ecde0  clrldi 30, 30, 32
  05ecde4  mtctr 30
  05ecde8  lwbrx 0, 0, 3
  05ecdec  stw 0, 0(3)
  05ecdf0  addi 3, 3, 4
  05ecdf4  bdnz 0x5ecde8
  05ecdf8  lwz 9, 0(29)
  05ecdfc  cmpwi 7, 9, 0
  05ece00  bt 30, 0x5ece38
  05ece04  clrldi 9, 9, 32
  05ece08  lwz 6, -32516(2)
  05ece0c  li 4, 0
  05ece10  mr 3, 9
  05ece14  li 5, 0
  05ece18  li 7, 1575
  05ece1c  lwz 11, 84(9)
  05ece20  lwz 0, 0(11)
  05ece24  std 2, 40(1)
  05ece28  mtctr 0
  05ece2c  lwz 2, 4(11)
  05ece30  bctrl
  05ece34  ld 2, 40(1)
  05ece38  li 0, 128
  05ece3c  ld 29, 152(1)
  05ece40  ld 30, 160(1)
  05ece44  ld 31, 168(1)
  05ece48  lvx 31, 1, 0
  05ece4c  ld 0, 192(1)
  05ece50  addi 1, 1, 176
  05ece54  mtlr 0
  05ece58  blr

thunk_FUN_005ecc80:   # 0x5ece60, 0x4 bytes
  05ece60  b 0x5ecc80

FUN_005ece64:   # 0x5ece64, 0x74 bytes
  05ece64  stdu 1, -160(1)
  05ece68  mflr 0
  05ece6c  std 26, 112(1)
  05ece70  std 27, 120(1)
  05ece74  std 28, 128(1)
  05ece78  std 0, 176(1)
  05ece7c  std 29, 136(1)
  05ece80  mr 28, 5
  05ece84  lwz 29, 1128(4)
  05ece88  mr 26, 4
  05ece8c  add 29, 29, 28
  05ece90  mr 27, 3
  05ece94  bl 0x5fd778
  05ece98  nop
  05ece9c  add 0, 3, 29
  05ecea0  clrldi 4, 28, 32
  05ecea4  mr 3, 27
  05ecea8  stw 0, 1128(26)
  05eceac  bl 0x5fd790
  05eceb0  nop
  05eceb4  ld 0, 176(1)
  05eceb8  ld 26, 112(1)
  05ecebc  clrldi 3, 3, 32
  05ecec0  ld 27, 120(1)
  05ecec4  ld 28, 128(1)
  05ecec8  mtlr 0
  05ececc  ld 29, 136(1)
  05eced0  addi 1, 1, 160
  05eced4  blr

FUN_005eced8:   # 0x5eced8, 0x2ac bytes
  05eced8  cmpdi 3, 0
  05ecedc  mflr 0
  05ecee0  stdu 1, -144(1)
  05ecee4  std 29, 120(1)
  05ecee8  std 30, 128(1)
  05eceec  std 31, 136(1)
  05ecef0  std 0, 160(1)
  05ecef4  mr 31, 3
  05ecef8  mr 29, 4
  05ecefc  mr 30, 5
  05ecf00  bt 2, 0x5ed134
  05ecf04  cmpwi 7, 4, 0
  05ecf08  bt 30, 0x5ed134
  05ecf0c  bl 0x5f5090
  05ecf10  nop
  05ecf14  li 9, -3
  05ecf18  mr 11, 3
  05ecf1c  lwz 3, 1136(31)
  05ecf20  addi 0, 3, -1
  05ecf24  cmplw 7, 0, 9
  05ecf28  bf 29, 0x5ed160
  05ecf2c  cmpwi 7, 30, 0
  05ecf30  bf 30, 0x5ed150
  05ecf34  lwz 9, 1104(31)
  05ecf38  addi 30, 9, -1
  05ecf3c  lwz 9, 12(31)
  05ecf40  cmplw 7, 30, 9
  05ecf44  bf 29, 0x5ecf4c
  05ecf48  addi 30, 9, -1
  05ecf4c  cmpwi 7, 30, 0
  05ecf50  clrldi 6, 30, 32
  05ecf54  bf 30, 0x5ecf60
  05ecf58  li 30, 1
  05ecf5c  li 6, 1
  05ecf60  lwz 0, 16(31)
  05ecf64  stw 0, 0(29)
  05ecf68  lwz 9, 20(31)
  05ecf6c  stw 9, 4(29)
  05ecf70  lwz 0, 24(31)
  05ecf74  stw 0, 8(29)
  05ecf78  lwz 9, 504(31)
  05ecf7c  stw 9, 44(29)
  05ecf80  lwz 0, 508(31)
  05ecf84  stw 0, 48(29)
  05ecf88  lwz 9, 12(31)
  05ecf8c  lwz 0, 344(31)
  05ecf90  sub 11, 9, 30
  05ecf94  lwz 7, 1184(31)
  05ecf98  slwi 9, 9, 2
  05ecf9c  lwz 10, 1188(31)
  05ecfa0  slwi 11, 11, 2
  05ecfa4  add 9, 9, 0
  05ecfa8  add 11, 11, 0
  05ecfac  clrldi 9, 9, 32
  05ecfb0  clrldi 11, 11, 32
  05ecfb4  mulld 10, 10, 6
  05ecfb8  lwz 0, 0(9)
  05ecfbc  lwz 8, 0(11)
  05ecfc0  sub 0, 0, 8
  05ecfc4  mulld 0, 0, 7
  05ecfc8  divdu 0, 0, 10
  05ecfcc  stw 0, 52(29)
  05ecfd0  lwz 9, 1108(31)
  05ecfd4  lwz 0, 1104(31)
  05ecfd8  add 11, 30, 9
  05ecfdc  cmplw 7, 11, 0
  05ecfe0  bt 28, 0x5ecfe8
  05ecfe4  sub 11, 11, 0
  05ecfe8  stw 30, 12(29)
  05ecfec  lwz 9, 1108(31)
  05ecff0  slwi 8, 11, 2
  05ecff4  lwz 11, 1076(31)
  05ecff8  slwi 9, 9, 2
  05ecffc  add 9, 9, 11
  05ed000  add 11, 11, 8
  05ed004  clrldi 9, 9, 32
  05ed008  clrldi 11, 11, 32
  05ed00c  lwz 0, 0(9)
  05ed010  lwz 10, 0(11)
  05ed014  sub 0, 0, 10
  05ed018  cmpwi 7, 0, 0
  05ed01c  stw 0, 16(29)
  05ed020  bf 30, 0x5ed02c
  05ed024  li 0, 1
  05ed028  stw 0, 16(29)
  05ed02c  lwz 9, 1108(31)
  05ed030  lwz 0, 1084(31)
  05ed034  slwi 9, 9, 2
  05ed038  add 11, 8, 0
  05ed03c  add 9, 9, 0
  05ed040  clrldi 11, 11, 32
  05ed044  clrldi 9, 9, 32
  05ed048  lwz 10, 0(11)
  05ed04c  lwz 0, 0(9)
  05ed050  sub 0, 0, 10
  05ed054  stw 0, 20(29)
  05ed058  lwz 9, 1108(31)
  05ed05c  lwz 0, 1080(31)
  05ed060  slwi 9, 9, 2
  05ed064  add 11, 8, 0
  05ed068  add 9, 9, 0
  05ed06c  clrldi 11, 11, 32
  05ed070  clrldi 9, 9, 32
  05ed074  lwz 10, 0(11)
  05ed078  lwz 0, 0(9)
  05ed07c  sub 0, 0, 10
  05ed080  stw 0, 24(29)
  05ed084  lwz 9, 1108(31)
  05ed088  lwz 0, 1088(31)
  05ed08c  slwi 9, 9, 2
  05ed090  add 11, 8, 0
  05ed094  add 9, 9, 0
  05ed098  clrldi 11, 11, 32
  05ed09c  clrldi 9, 9, 32
  05ed0a0  lwz 10, 0(11)
  05ed0a4  lwz 0, 0(9)
  05ed0a8  sub 0, 0, 10
  05ed0ac  stw 0, 40(29)
  05ed0b0  lwz 9, 1108(31)
  05ed0b4  lwz 0, 1092(31)
  05ed0b8  slwi 9, 9, 2
  05ed0bc  add 11, 8, 0
  05ed0c0  add 9, 9, 0
  05ed0c4  clrldi 11, 11, 32
  05ed0c8  clrldi 9, 9, 32
  05ed0cc  lwz 10, 0(11)
  05ed0d0  lwz 0, 0(9)
  05ed0d4  sub 0, 0, 10
  05ed0d8  stw 0, 28(29)
  05ed0dc  lwz 9, 1108(31)
  05ed0e0  lwz 0, 1096(31)
  05ed0e4  slwi 9, 9, 2
  05ed0e8  add 11, 8, 0
  05ed0ec  add 9, 9, 0
  05ed0f0  clrldi 11, 11, 32
  05ed0f4  clrldi 9, 9, 32
  05ed0f8  lwz 10, 0(11)
  05ed0fc  lwz 0, 0(9)
  05ed100  sub 0, 0, 10
  05ed104  stw 0, 32(29)
  05ed108  lwz 9, 1108(31)
  05ed10c  lwz 0, 1100(31)
  05ed110  slwi 9, 9, 2
  05ed114  add 11, 8, 0
  05ed118  add 9, 9, 0
  05ed11c  clrldi 11, 11, 32
  05ed120  clrldi 9, 9, 32
  05ed124  lwz 10, 0(11)
  05ed128  lwz 0, 0(9)
  05ed12c  sub 0, 0, 10
  05ed130  stw 0, 36(29)
  05ed134  ld 0, 160(1)
  05ed138  ld 29, 120(1)
  05ed13c  ld 30, 128(1)
  05ed140  mtlr 0
  05ed144  ld 31, 136(1)
  05ed148  addi 1, 1, 144
  05ed14c  blr
  05ed150  lwz 9, 1104(31)
  05ed154  cmplw 7, 9, 30
  05ed158  bt 29, 0x5ecf3c
  05ed15c  b 0x5ecf38
  05ed160  sub 0, 11, 3
  05ed164  lwz 9, 1176(31)
  05ed168  cmpwi 7, 30, 0
  05ed16c  add 9, 9, 0
  05ed170  li 11, 0
  05ed174  stw 9, 1176(31)
  05ed178  stw 11, 1136(31)
  05ed17c  bt 30, 0x5ecf34
  05ed180  b 0x5ed150

FUN_005ed184:   # 0x5ed184, 0x21c bytes
  05ed184  cmpdi 3, 0
  05ed188  mflr 0
  05ed18c  stdu 1, -144(1)
  05ed190  std 29, 120(1)
  05ed194  std 30, 128(1)
  05ed198  std 31, 136(1)
  05ed19c  std 0, 160(1)
  05ed1a0  mr 31, 3
  05ed1a4  mr 30, 4
  05ed1a8  mr 29, 4
  05ed1ac  bt 2, 0x5ed34c
  05ed1b0  cmpwi 7, 4, 0
  05ed1b4  bt 30, 0x5ed34c
  05ed1b8  bl 0x5f5090
  05ed1bc  nop
  05ed1c0  li 9, -3
  05ed1c4  mr 11, 3
  05ed1c8  lwz 3, 1136(31)
  05ed1cc  addi 0, 3, -1
  05ed1d0  cmplw 7, 0, 9
  05ed1d4  bf 29, 0x5ed384
  05ed1d8  li 4, 0
  05ed1dc  li 5, 124
  05ed1e0  clrldi 3, 29, 32
  05ed1e4  bl 0x5d0140
  05ed1e8  nop
  05ed1ec  lwz 0, 20(31)
  05ed1f0  stw 0, 20(30)
  05ed1f4  lwz 9, 24(31)
  05ed1f8  stw 9, 24(30)
  05ed1fc  lwz 0, 1220(31)
  05ed200  stw 0, 44(30)
  05ed204  lwz 9, 1132(31)
  05ed208  stw 9, 48(30)
  05ed20c  lwz 0, 1184(31)
  05ed210  stw 0, 12(30)
  05ed214  lwz 9, 1188(31)
  05ed218  stw 9, 16(30)
  05ed21c  lwz 0, 8(31)
  05ed220  stw 0, 32(30)
  05ed224  lwz 9, 1120(31)
  05ed228  stw 9, 36(30)
  05ed22c  bl 0x5f5090
  05ed230  nop
  05ed234  lwz 0, 1124(31)
  05ed238  lwz 11, 104(30)
  05ed23c  sub 3, 3, 0
  05ed240  stw 3, 8(30)
  05ed244  lwz 0, 1180(31)
  05ed248  stw 0, 28(30)
  05ed24c  lwz 9, 1172(31)
  05ed250  stw 9, 64(30)
  05ed254  lwz 0, 1168(31)
  05ed258  stw 0, 60(30)
  05ed25c  lwz 9, 1176(31)
  05ed260  stw 9, 52(30)
  05ed264  lwz 0, 1128(31)
  05ed268  add 11, 11, 0
  05ed26c  stw 11, 104(30)
  05ed270  lwz 0, 1112(31)
  05ed274  stw 0, 108(30)
  05ed278  lwz 9, 480(31)
  05ed27c  cmplwi 7, 9, 999
  05ed280  bt 29, 0x5ed368
  05ed284  lwz 11, 472(31)
  05ed288  li 0, 1000
  05ed28c  lwz 9, 480(31)
  05ed290  addi 9, 9, 1
  05ed294  divwu 0, 0, 9
  05ed298  mullw 11, 11, 0
  05ed29c  stw 11, 76(30)
  05ed2a0  lwz 0, 484(31)
  05ed2a4  stw 0, 56(30)
  05ed2a8  lwz 9, 488(31)
  05ed2ac  stw 9, 68(30)
  05ed2b0  lwz 0, 492(31)
  05ed2b4  stw 0, 72(30)
  05ed2b8  lwz 8, 344(31)
  05ed2bc  lwz 11, 40(31)
  05ed2c0  lwz 0, 8(31)
  05ed2c4  lwz 10, 1188(31)
  05ed2c8  lwz 7, 1184(31)
  05ed2cc  lwz 9, 0(8)
  05ed2d0  mulld 10, 10, 0
  05ed2d4  rlwinm 9, 9, 0, 0, 30
  05ed2d8  sub 11, 11, 9
  05ed2dc  clrldi 0, 11, 32
  05ed2e0  mulld 0, 0, 7
  05ed2e4  divdu 0, 0, 10
  05ed2e8  stw 0, 96(30)
  05ed2ec  lwz 9, 8(31)
  05ed2f0  divwu 11, 11, 9
  05ed2f4  stw 11, 100(30)
  05ed2f8  lwz 0, 200(31)
  05ed2fc  stw 0, 116(30)
  05ed300  lwz 9, 204(31)
  05ed304  addi 9, 9, 1
  05ed308  stw 9, 120(30)
  05ed30c  lwz 0, 0(31)
  05ed310  stw 0, 0(30)
  05ed314  lwz 9, 4(31)
  05ed318  stw 9, 4(30)
  05ed31c  lwz 0, 1152(31)
  05ed320  stw 0, 80(30)
  05ed324  lwz 9, 1160(31)
  05ed328  stw 9, 84(30)
  05ed32c  lwz 0, 1156(31)
  05ed330  stw 0, 88(30)
  05ed334  lwz 9, 1164(31)
  05ed338  stw 9, 92(30)
  05ed33c  lwz 0, 496(31)
  05ed340  stw 0, 108(30)
  05ed344  lwz 9, 500(31)
  05ed348  stw 9, 112(30)
  05ed34c  ld 0, 160(1)
  05ed350  ld 29, 120(1)
  05ed354  ld 30, 128(1)
  05ed358  mtlr 0
  05ed35c  ld 31, 136(1)
  05ed360  addi 1, 1, 144
  05ed364  blr
  05ed368  lwz 0, 472(31)
  05ed36c  lwz 9, 480(31)
  05ed370  clrldi 0, 0, 32
  05ed374  mulli 0, 0, 1000
  05ed378  divdu 0, 0, 9
  05ed37c  stw 0, 76(30)
  05ed380  b 0x5ed2a0
  05ed384  sub 0, 11, 3
  05ed388  lwz 9, 1176(31)
  05ed38c  li 11, 0
  05ed390  add 9, 9, 0
  05ed394  stw 11, 1136(31)
  05ed398  stw 9, 1176(31)
  05ed39c  b 0x5ed1d8

FUN_005ed3a0:   # 0x5ed3a0, 0x4f4 bytes
  05ed3a0  cmpdi 3, 0
  05ed3a4  mflr 0
  05ed3a8  stdu 1, -272(1)
  05ed3ac  std 26, 224(1)
  05ed3b0  std 27, 232(1)
  05ed3b4  std 28, 240(1)
  05ed3b8  std 29, 248(1)
  05ed3bc  std 30, 256(1)
  05ed3c0  std 31, 264(1)
  05ed3c4  std 0, 288(1)
  05ed3c8  mr 12, 3
  05ed3cc  bt 2, 0x5ed44c
  05ed3d0  lwz 9, 292(3)
  05ed3d4  cmpwi 7, 9, 0
  05ed3d8  bt 30, 0x5ed44c
  05ed3dc  bf 29, 0x5ed44c
  05ed3e0  lwz 0, 236(3)
  05ed3e4  clrldi 9, 9, 32
  05ed3e8  lwz 8, 376(3)
  05ed3ec  li 26, 0
  05ed3f0  clrldi 11, 0, 32
  05ed3f4  mtctr 9
  05ed3f8  mr 10, 0
  05ed3fc  lwz 9, 0(11)
  05ed400  li 11, 0
  05ed404  slwi 9, 9, 2
  05ed408  add 9, 9, 8
  05ed40c  clrldi 9, 9, 32
  05ed410  lwz 0, 0(9)
  05ed414  cmpw 7, 0, 4
  05ed418  bf 30, 0x5ed43c
  05ed41c  b 0x5ed488
  05ed420  lwz 9, 0(9)
  05ed424  slwi 9, 9, 2
  05ed428  add 9, 9, 8
  05ed42c  clrldi 9, 9, 32
  05ed430  lwz 0, 0(9)
  05ed434  cmpw 7, 0, 4
  05ed438  bt 30, 0x5ed474
  05ed43c  addi 10, 10, 4
  05ed440  addi 11, 11, 1
  05ed444  clrldi 9, 10, 32
  05ed448  bdnz 0x5ed420
  05ed44c  ld 0, 288(1)
  05ed450  ld 26, 224(1)
  05ed454  ld 27, 232(1)
  05ed458  mtlr 0
  05ed45c  ld 28, 240(1)
  05ed460  ld 29, 248(1)
  05ed464  ld 30, 256(1)
  05ed468  ld 31, 264(1)
  05ed46c  addi 1, 1, 272
  05ed470  blr
  05ed474  cmpwi 7, 11, -1
  05ed478  bt 30, 0x5ed44c
  05ed47c  slwi 9, 11, 9
  05ed480  slwi 0, 11, 7
  05ed484  sub 26, 9, 0
  05ed488  lwz 31, 340(12)
  05ed48c  add 9, 26, 31
  05ed490  clrldi 9, 9, 32
  05ed494  lwz 0, 380(9)
  05ed498  cmpwi 7, 0, 0
  05ed49c  bt 30, 0x5ed44c
  05ed4a0  cmplwi 7, 7, 8
  05ed4a4  bt 29, 0x5ed65c
  05ed4a8  cmpwi 7, 6, 0
  05ed4ac  bt 30, 0x5ed6a4
  05ed4b0  cmpwi 6, 7, 0
  05ed4b4  bt 26, 0x5ed858
  05ed4b8  li 8, 0
  05ed4bc  lfs 12, -32456(2)
  05ed4c0  clrldi 0, 7, 32
  05ed4c4  li 11, 0
  05ed4c8  ori 8, 8, 65535
  05ed4cc  mtctr 0
  05ed4d0  addi 4, 1, 112
  05ed4d4  nop
  05ed4d8  add 9, 11, 6
  05ed4dc  lfs 13, -32452(2)
  05ed4e0  add 0, 11, 4
  05ed4e4  clrldi 9, 9, 32
  05ed4e8  clrldi 10, 0, 32
  05ed4ec  addi 11, 11, 4
  05ed4f0  lwz 0, 0(9)
  05ed4f4  extsw 9, 0
  05ed4f8  cmpw 7, 0, 8
  05ed4fc  std 9, 208(1)
  05ed500  lfd 11, 208(1)
  05ed504  fcfid 11, 11
  05ed508  frsp 0, 11
  05ed50c  bt 29, 0x5ed514
  05ed510  fmuls 13, 0, 12
  05ed514  stfs 13, 0(10)
  05ed518  bdnz 0x5ed4d8
  05ed51c  lwz 31, 340(12)
  05ed520  add 9, 26, 31
  05ed524  li 0, 0
  05ed528  clrldi 9, 9, 32
  05ed52c  stw 0, 204(1)
  05ed530  stw 0, 144(1)
  05ed534  stw 0, 148(1)
  05ed538  stw 0, 152(1)
  05ed53c  stw 0, 156(1)
  05ed540  stw 0, 160(1)
  05ed544  stw 0, 164(1)
  05ed548  stw 0, 168(1)
  05ed54c  stw 0, 172(1)
  05ed550  stw 0, 176(1)
  05ed554  stw 0, 180(1)
  05ed558  stw 0, 184(1)
  05ed55c  stw 0, 188(1)
  05ed560  stw 0, 192(1)
  05ed564  stw 0, 196(1)
  05ed568  stw 0, 200(1)
  05ed56c  lwz 11, 40(9)
  05ed570  cmpwi 7, 5, 0
  05ed574  xori 0, 11, 2
  05ed578  addi 29, 11, -1
  05ed57c  srawi 11, 0, 31
  05ed580  xor 9, 11, 0
  05ed584  sub 9, 9, 11
  05ed588  addi 9, 9, -1
  05ed58c  srwi 3, 9, 31
  05ed590  bt 30, 0x5ed6d0
  05ed594  bt 26, 0x5ed5f0
  05ed598  clrldi 7, 7, 32
  05ed59c  li 8, 0
  05ed5a0  mtctr 7
  05ed5a4  addi 4, 1, 112
  05ed5a8  li 7, 0
  05ed5ac  nop
  05ed5b0  add 10, 8, 5
  05ed5b4  and 0, 29, 7
  05ed5b8  clrldi 10, 10, 32
  05ed5bc  add 11, 8, 4
  05ed5c0  addi 7, 7, 1
  05ed5c4  clrldi 11, 11, 32
  05ed5c8  addi 8, 8, 4
  05ed5cc  lwz 9, 0(10)
  05ed5d0  slw 9, 9, 3
  05ed5d4  lfs 0, 0(11)
  05ed5d8  add 9, 9, 0
  05ed5dc  slwi 9, 9, 2
  05ed5e0  extsw 9, 9
  05ed5e4  add 9, 4, 9
  05ed5e8  stfs 0, 32(9)
  05ed5ec  bdnz 0x5ed5b0
  05ed5f0  lwz 3, 1256(12)
  05ed5f4  cmpwi 7, 3, 0
  05ed5f8  bt 30, 0x5ed66c
  05ed5fc  cmplwi 7, 3, 7
  05ed600  bt 29, 0x5ed66c
  05ed604  add 9, 26, 31
  05ed608  clrldi 5, 3, 32
  05ed60c  clrldi 9, 9, 32
  05ed610  addi 4, 1, 144
  05ed614  mr 3, 9
  05ed618  lwz 11, 380(9)
  05ed61c  lwz 0, 0(11)
  05ed620  std 2, 40(1)
  05ed624  mtctr 0
  05ed628  lwz 2, 4(11)
  05ed62c  bctrl
  05ed630  ld 2, 40(1)
  05ed634  ld 0, 288(1)
  05ed638  ld 26, 224(1)
  05ed63c  ld 27, 232(1)
  05ed640  mtlr 0
  05ed644  ld 28, 240(1)
  05ed648  ld 29, 248(1)
  05ed64c  ld 30, 256(1)
  05ed650  ld 31, 264(1)
  05ed654  addi 1, 1, 272
  05ed658  blr
  05ed65c  cmpwi 7, 6, 0
  05ed660  li 7, 8
  05ed664  bf 30, 0x5ed4b0
  05ed668  b 0x5ed6a4
  05ed66c  add 9, 26, 31
  05ed670  li 3, 8
  05ed674  clrldi 9, 9, 32
  05ed678  clrldi 5, 3, 32
  05ed67c  addi 4, 1, 144
  05ed680  mr 3, 9
  05ed684  lwz 11, 380(9)
  05ed688  lwz 0, 0(11)
  05ed68c  std 2, 40(1)
  05ed690  mtctr 0
  05ed694  lwz 2, 4(11)
  05ed698  bctrl
  05ed69c  ld 2, 40(1)
  05ed6a0  b 0x5ed634
  05ed6a4  cmpwi 6, 7, 0
  05ed6a8  bt 26, 0x5ed858
  05ed6ac  clrldi 9, 7, 32
  05ed6b0  lis 0, 16256
  05ed6b4  addi 11, 1, 112
  05ed6b8  mtctr 9
  05ed6bc  clrldi 9, 11, 32
  05ed6c0  addi 11, 11, 4
  05ed6c4  stw 0, 0(9)
  05ed6c8  bdnz 0x5ed6bc
  05ed6cc  b 0x5ed51c
  05ed6d0  cmplwi 7, 7, 1
  05ed6d4  li 0, 0
  05ed6d8  li 27, 0
  05ed6dc  li 5, 0
  05ed6e0  li 28, 0
  05ed6e4  li 4, 0
  05ed6e8  bf 29, 0x5ed738
  05ed6ec  cmplwi 7, 7, 4
  05ed6f0  li 0, 1
  05ed6f4  li 5, 1
  05ed6f8  li 4, 1
  05ed6fc  bf 29, 0x5ed738
  05ed700  cmpwi 7, 7, 5
  05ed704  li 27, 4
  05ed708  li 5, 4
  05ed70c  li 28, 4
  05ed710  li 4, 4
  05ed714  bt 30, 0x5ed738
  05ed718  cmpwi 7, 7, 6
  05ed71c  li 5, 5
  05ed720  li 4, 5
  05ed724  bt 30, 0x5ed738
  05ed728  cmpwi 7, 7, 7
  05ed72c  li 28, 6
  05ed730  li 4, 7
  05ed734  bt 30, 0x5ed88c
  05ed738  li 9, 1
  05ed73c  lfs 0, 112(1)
  05ed740  slwi 0, 0, 2
  05ed744  stfs 0, 144(1)
  05ed748  slw 9, 9, 3
  05ed74c  extsw 0, 0
  05ed750  add 9, 29, 9
  05ed754  addi 30, 1, 112
  05ed758  slwi 9, 9, 2
  05ed75c  add 11, 1, 0
  05ed760  extsw 9, 9
  05ed764  cmpwi 7, 29, 1
  05ed768  add 9, 30, 9
  05ed76c  lfs 13, 112(11)
  05ed770  stfs 13, 32(9)
  05ed774  bt 30, 0x5ed864
  05ed778  lfs 10, 120(1)
  05ed77c  lfs 9, 124(1)
  05ed780  li 10, 3
  05ed784  li 6, 7
  05ed788  li 11, 5
  05ed78c  slw 10, 10, 3
  05ed790  slw 6, 6, 3
  05ed794  slw 11, 11, 3
  05ed798  li 8, 2
  05ed79c  li 7, 4
  05ed7a0  li 9, 6
  05ed7a4  add 6, 29, 6
  05ed7a8  slw 8, 8, 3
  05ed7ac  add 10, 29, 10
  05ed7b0  slw 7, 7, 3
  05ed7b4  add 11, 29, 11
  05ed7b8  slw 9, 9, 3
  05ed7bc  slwi 0, 27, 2
  05ed7c0  slwi 5, 5, 2
  05ed7c4  slwi 8, 8, 2
  05ed7c8  slwi 10, 10, 2
  05ed7cc  slwi 7, 7, 2
  05ed7d0  slwi 11, 11, 2
  05ed7d4  slwi 9, 9, 2
  05ed7d8  slwi 6, 6, 2
  05ed7dc  rlwinm 27, 4, 2, 27, 29
  05ed7e0  extsw 5, 5
  05ed7e4  rlwinm 28, 28, 2, 27, 28
  05ed7e8  extsw 0, 0
  05ed7ec  extsw 8, 8
  05ed7f0  extsw 10, 10
  05ed7f4  extsw 7, 7
  05ed7f8  extsw 11, 11
  05ed7fc  extsw 9, 9
  05ed800  extsw 6, 6
  05ed804  add 29, 1, 5
  05ed808  add 3, 1, 0
  05ed80c  add 4, 1, 28
  05ed810  add 5, 1, 27
  05ed814  add 6, 30, 6
  05ed818  add 8, 30, 8
  05ed81c  lfs 13, 112(29)
  05ed820  add 10, 30, 10
  05ed824  lfs 0, 112(3)
  05ed828  add 7, 30, 7
  05ed82c  lfs 12, 112(4)
  05ed830  add 11, 30, 11
  05ed834  lfs 11, 112(5)
  05ed838  add 9, 30, 9
  05ed83c  stfs 10, 32(8)
  05ed840  stfs 9, 32(10)
  05ed844  stfs 0, 32(7)
  05ed848  stfs 13, 32(11)
  05ed84c  stfs 12, 32(9)
  05ed850  stfs 11, 32(6)
  05ed854  b 0x5ed5f0
  05ed858  lis 0, 16256
  05ed85c  stw 0, 112(1)
  05ed860  b 0x5ed520
  05ed864  lfs 0, -32448(2)
  05ed868  lfs 10, 120(1)
  05ed86c  lfs 9, 124(1)
  05ed870  fmuls 10, 10, 0
  05ed874  fmuls 9, 9, 0
  05ed878  stfs 10, 120(1)
  05ed87c  stfs 9, 124(1)
  05ed880  stfs 10, 164(1)
  05ed884  stfs 9, 168(1)
  05ed888  b 0x5ed780
  05ed88c  li 4, 6
  05ed890  b 0x5ed738

FUN_005ed898:   # 0x5ed898, 0xfc bytes
  05ed898  cmpdi 3, 0
  05ed89c  mflr 0
  05ed8a0  stdu 1, -112(1)
  05ed8a4  std 0, 128(1)
  05ed8a8  bt 2, 0x5ed928
  05ed8ac  lwz 9, 292(3)
  05ed8b0  cmpwi 7, 9, 0
  05ed8b4  bt 30, 0x5ed928
  05ed8b8  bf 29, 0x5ed928
  05ed8bc  lwz 0, 236(3)
  05ed8c0  clrldi 9, 9, 32
  05ed8c4  lwz 8, 376(3)
  05ed8c8  li 7, 0
  05ed8cc  clrldi 11, 0, 32
  05ed8d0  mtctr 9
  05ed8d4  mr 10, 0
  05ed8d8  lwz 9, 0(11)
  05ed8dc  li 11, 0
  05ed8e0  slwi 9, 9, 2
  05ed8e4  add 9, 9, 8
  05ed8e8  clrldi 9, 9, 32
  05ed8ec  lwz 0, 0(9)
  05ed8f0  cmpw 7, 0, 4
  05ed8f4  bf 30, 0x5ed918
  05ed8f8  b 0x5ed94c
  05ed8fc  lwz 9, 0(9)
  05ed900  slwi 9, 9, 2
  05ed904  add 9, 9, 8
  05ed908  clrldi 9, 9, 32
  05ed90c  lwz 0, 0(9)
  05ed910  cmpw 7, 0, 4
  05ed914  bt 30, 0x5ed938
  05ed918  addi 10, 10, 4
  05ed91c  addi 11, 11, 1
  05ed920  clrldi 9, 10, 32
  05ed924  bdnz 0x5ed8fc
  05ed928  ld 0, 128(1)
  05ed92c  addi 1, 1, 112
  05ed930  mtlr 0
  05ed934  blr
  05ed938  cmpwi 7, 11, -1
  05ed93c  bt 30, 0x5ed928
  05ed940  slwi 9, 11, 9
  05ed944  slwi 0, 11, 7
  05ed948  sub 7, 9, 0
  05ed94c  lwz 0, 340(3)
  05ed950  add 0, 7, 0
  05ed954  clrldi 3, 0, 32
  05ed958  lwz 9, 360(3)
  05ed95c  cmpwi 7, 9, 0
  05ed960  bt 30, 0x5ed928
  05ed964  clrldi 9, 9, 32
  05ed968  extsw 4, 5
  05ed96c  lwz 0, 0(9)
  05ed970  std 2, 40(1)
  05ed974  mtctr 0
  05ed978  lwz 2, 4(9)
  05ed97c  bctrl
  05ed980  ld 2, 40(1)
  05ed984  ld 0, 128(1)
  05ed988  addi 1, 1, 112
  05ed98c  mtlr 0
  05ed990  blr

FUN_005ed994:   # 0x5ed994, 0x94 bytes
  05ed994  cmpwi 7, 3, 0
  05ed998  mflr 0
  05ed99c  stdu 1, -128(1)
  05ed9a0  std 31, 120(1)
  05ed9a4  std 0, 144(1)
  05ed9a8  mr 9, 3
  05ed9ac  li 31, -1
  05ed9b0  bf 30, 0x5ed9cc
  05ed9b4  ld 0, 144(1)
  05ed9b8  extsw 3, 31
  05ed9bc  ld 31, 120(1)
  05ed9c0  addi 1, 1, 128
  05ed9c4  mtlr 0
  05ed9c8  blr
  05ed9cc  lwz 0, 424(9)
  05ed9d0  addi 3, 3, 400
  05ed9d4  clrldi 4, 4, 32
  05ed9d8  cmpwi 7, 0, 0
  05ed9dc  clrldi 3, 3, 32
  05ed9e0  clrldi 9, 0, 32
  05ed9e4  bt 30, 0x5ed9b4
  05ed9e8  lwz 0, 0(9)
  05ed9ec  std 2, 40(1)
  05ed9f0  mtctr 0
  05ed9f4  lwz 2, 4(9)
  05ed9f8  bctrl
  05ed9fc  ld 2, 40(1)
  05eda00  li 4, 1
  05eda04  mr 31, 3
  05eda08  lwz 9, -32540(2)
  05eda0c  addi 3, 9, 432
  05eda10  lwz 0, 428(9)
  05eda14  cmpwi 7, 0, 0
  05eda18  bt 30, 0x5ed9b4
  05eda1c  bl 0x5fc190
  05eda20  nop
  05eda24  b 0x5ed9b4

FUN_005eda28:   # 0x5eda28, 0x474 bytes
  05eda28  mfcr 12
  05eda2c  cmpwi 4, 4, 0
  05eda30  stdu 1, -224(1)
  05eda34  std 31, 216(1)
  05eda38  std 23, 152(1)
  05eda3c  std 24, 160(1)
  05eda40  std 25, 168(1)
  05eda44  std 26, 176(1)
  05eda48  std 27, 184(1)
  05eda4c  std 28, 192(1)
  05eda50  std 29, 200(1)
  05eda54  std 30, 208(1)
  05eda58  mr 31, 3
  05eda5c  stw 12, 232(1)
  05eda60  mflr 0
  05eda64  std 0, 240(1)
  05eda68  bf 18, 0x5edd90
  05eda6c  li 23, 1
  05eda70  li 28, 0
  05eda74  li 30, 0
  05eda78  lwz 0, 292(31)
  05eda7c  li 9, 0
  05eda80  clrldi 29, 3, 32
  05eda84  cmpwi 7, 0, 0
  05eda88  stw 9, 1212(31)
  05eda8c  bt 30, 0x5edaa0
  05eda90  lwz 9, 340(31)
  05eda94  lwz 0, 76(9)
  05eda98  cmpwi 7, 0, 1
  05eda9c  bt 30, 0x5ede08
  05edaa0  lwz 0, 12(31)
  05edaa4  mr 3, 29
  05edaa8  stw 0, 16(31)
  05edaac  bl 0x5eb450
  05edab0  bt 18, 0x5eddc8
  05edab4  lwz 10, 344(31)
  05edab8  stw 23, 396(31)
  05edabc  add 9, 28, 10
  05edac0  lwz 6, 380(31)
  05edac4  add 11, 30, 10
  05edac8  clrldi 9, 9, 32
  05edacc  clrldi 11, 11, 32
  05edad0  cmpwi 7, 6, 0
  05edad4  lwz 7, 0(9)
  05edad8  rlwinm 8, 7, 0, 0, 30
  05edadc  stw 8, 392(31)
  05edae0  lwz 0, 0(9)
  05edae4  clrlwi 0, 0, 31
  05edae8  stw 0, 288(31)
  05edaec  lwz 9, 4(11)
  05edaf0  rlwinm 9, 9, 0, 0, 30
  05edaf4  sub 11, 9, 8
  05edaf8  stw 11, 284(31)
  05edafc  bt 30, 0x5ede20
  05edb00  clrldi 9, 10, 32
  05edb04  lwz 0, 0(9)
  05edb08  rlwinm 0, 0, 0, 0, 30
  05edb0c  sub 0, 8, 0
  05edb10  add 0, 6, 0
  05edb14  stw 0, 232(31)
  05edb18  lwz 0, 292(31)
  05edb1c  cmpwi 7, 0, 0
  05edb20  bt 30, 0x5edb34
  05edb24  lwz 9, 340(31)
  05edb28  lwz 0, 76(9)
  05edb2c  cmpwi 7, 0, 1
  05edb30  bt 30, 0x5ede14
  05edb34  lwz 27, -32532(2)
  05edb38  lwz 3, 0(27)
  05edb3c  cmpwi 7, 3, 0
  05edb40  bt 30, 0x5edd50
  05edb44  lwz 9, 1104(31)
  05edb48  lwz 11, 12(31)
  05edb4c  addi 29, 9, -1
  05edb50  cmplw 7, 29, 11
  05edb54  bt 29, 0x5eddb4
  05edb58  cmpwi 7, 29, 0
  05edb5c  mr 24, 29
  05edb60  bt 30, 0x5edda8
  05edb64  nop
  05edb68  clrldi 3, 3, 32
  05edb6c  lwz 30, -32432(2)
  05edb70  lwz 0, 504(31)
  05edb74  li 4, 1
  05edb78  std 30, 112(1)
  05edb7c  lwz 8, 352(31)
  05edb80  lwz 25, -32540(2)
  05edb84  lwz 11, 132(3)
  05edb88  std 0, 128(1)
  05edb8c  lfd 0, 128(1)
  05edb90  addi 6, 25, 1532
  05edb94  fcfid 0, 0
  05edb98  lwz 26, -32444(2)
  05edb9c  lwz 28, -32440(2)
  05edba0  lwz 0, 0(11)
  05edba4  mr 7, 26
  05edba8  std 2, 40(1)
  05edbac  lwz 10, -32436(2)
  05edbb0  mtctr 0
  05edbb4  mr 9, 28
  05edbb8  lwz 2, 4(11)
  05edbbc  frsp 1, 0
  05edbc0  bctrl
  05edbc4  ld 2, 40(1)
  05edbc8  lwz 3, 0(27)
  05edbcc  cmpwi 7, 3, 0
  05edbd0  bt 30, 0x5edca4
  05edbd4  clrldi 3, 3, 32
  05edbd8  lwz 10, -32428(2)
  05edbdc  std 30, 112(1)
  05edbe0  lwz 0, 508(31)
  05edbe4  mr 7, 26
  05edbe8  lwz 8, 352(31)
  05edbec  li 4, 1
  05edbf0  addi 6, 25, 1536
  05edbf4  lwz 11, 132(3)
  05edbf8  mr 9, 28
  05edbfc  std 0, 128(1)
  05edc00  lfd 0, 128(1)
  05edc04  fcfid 0, 0
  05edc08  lwz 0, 0(11)
  05edc0c  std 2, 40(1)
  05edc10  lwz 2, 4(11)
  05edc14  mtctr 0
  05edc18  frsp 1, 0
  05edc1c  bctrl
  05edc20  ld 2, 40(1)
  05edc24  lwz 11, 0(27)
  05edc28  cmpwi 7, 11, 0
  05edc2c  bt 30, 0x5edca4
  05edc30  lwz 9, 508(31)
  05edc34  clrldi 11, 11, 32
  05edc38  lwz 0, 504(31)
  05edc3c  li 4, 5
  05edc40  clrldi 9, 9, 32
  05edc44  lwz 7, -32424(2)
  05edc48  std 0, 128(1)
  05edc4c  lfd 0, 128(1)
  05edc50  mr 3, 11
  05edc54  fcfid 0, 0
  05edc58  std 9, 128(1)
  05edc5c  lfd 13, 128(1)
  05edc60  mr 9, 28
  05edc64  fcfid 13, 13
  05edc68  lwz 5, 132(11)
  05edc6c  lwz 10, -32420(2)
  05edc70  addi 6, 25, 1540
  05edc74  lwz 0, 0(5)
  05edc78  std 2, 40(1)
  05edc7c  mtctr 0
  05edc80  lwz 8, 352(31)
  05edc84  frsp 1, 0
  05edc88  lfs 0, -32408(2)
  05edc8c  lwz 2, 4(5)
  05edc90  fadds 1, 1, 0
  05edc94  frsp 0, 13
  05edc98  fdivs 1, 0, 1
  05edc9c  bctrl
  05edca0  ld 2, 40(1)
  05edca4  lwz 11, 12(31)
  05edca8  cmpw 7, 11, 24
  05edcac  bf 29, 0x5edd50
  05edcb0  lwz 7, 0(27)
  05edcb4  cmpwi 7, 7, 0
  05edcb8  bt 30, 0x5edd50
  05edcbc  sub 9, 11, 29
  05edcc0  lwz 0, 344(31)
  05edcc4  slwi 11, 11, 2
  05edcc8  lwz 8, 1188(31)
  05edccc  slwi 9, 9, 2
  05edcd0  add 11, 11, 0
  05edcd4  add 9, 9, 0
  05edcd8  clrldi 11, 11, 32
  05edcdc  clrldi 9, 9, 32
  05edce0  clrldi 5, 29, 32
  05edce4  lwz 29, 1184(31)
  05edce8  addi 6, 25, 1544
  05edcec  li 4, 1
  05edcf0  lwz 0, 0(11)
  05edcf4  lwz 10, 0(9)
  05edcf8  clrldi 9, 7, 32
  05edcfc  lwz 7, -32416(2)
  05edd00  sub 0, 0, 10
  05edd04  lwz 10, -32432(2)
  05edd08  mr 3, 9
  05edd0c  mulld 0, 0, 29
  05edd10  lwz 11, 132(9)
  05edd14  mulld 5, 5, 8
  05edd18  lwz 9, 0(11)
  05edd1c  lwz 8, 352(31)
  05edd20  std 2, 40(1)
  05edd24  mtctr 9
  05edd28  lwz 9, -32412(2)
  05edd2c  divdu 0, 0, 5
  05edd30  clrldi 0, 0, 32
  05edd34  std 0, 128(1)
  05edd38  lfd 0, 128(1)
  05edd3c  fcfid 0, 0
  05edd40  lwz 2, 4(11)
  05edd44  frsp 1, 0
  05edd48  bctrl
  05edd4c  ld 2, 40(1)
  05edd50  stw 23, 12(31)
  05edd54  ld 0, 240(1)
  05edd58  lwz 12, 232(1)
  05edd5c  ld 23, 152(1)
  05edd60  mtlr 0
  05edd64  ld 24, 160(1)
  05edd68  mtocrf 8, 12
  05edd6c  ld 25, 168(1)
  05edd70  ld 26, 176(1)
  05edd74  ld 27, 184(1)
  05edd78  ld 28, 192(1)
  05edd7c  ld 29, 200(1)
  05edd80  ld 30, 208(1)
  05edd84  ld 31, 216(1)
  05edd88  addi 1, 1, 224
  05edd8c  blr
  05edd90  addi 4, 4, -1
  05edd94  slwi 30, 4, 2
  05edd98  cmpwi 4, 4, 0
  05edd9c  addi 23, 4, 1
  05edda0  mr 28, 30
  05edda4  b 0x5eda78
  05edda8  li 29, 1
  05eddac  li 24, 1
  05eddb0  b 0x5edb68
  05eddb4  addi 29, 11, -1
  05eddb8  cmpwi 7, 29, 0
  05eddbc  mr 24, 29
  05eddc0  bf 30, 0x5edb68
  05eddc4  b 0x5edda8
  05eddc8  bl 0x5f5090
  05eddcc  nop
  05eddd0  lwz 9, 1204(31)
  05eddd4  cmpwi 7, 9, 0
  05eddd8  bt 30, 0x5ede00
  05edddc  lis 0, 4
  05edde0  sub 9, 3, 9
  05edde4  ori 0, 0, 37856
  05edde8  cmplw 7, 9, 0
  05eddec  bf 29, 0x5edab4
  05eddf0  li 0, 1
  05eddf4  stw 3, 1204(31)
  05eddf8  stw 0, 1208(31)
  05eddfc  b 0x5edab4
  05ede00  stw 3, 1204(31)
  05ede04  b 0x5edab4
  05ede08  mr 3, 29
  05ede0c  bl 0x5ebac0
  05ede10  b 0x5edaa0
  05ede14  mr 3, 29
  05ede18  bl 0x5ebac0
  05ede1c  b 0x5edb34
  05ede20  lwz 9, 1248(31)
  05ede24  rlwinm 0, 7, 0, 25, 30
  05ede28  lwz 10, 1240(31)
  05ede2c  addi 9, 9, 256
  05ede30  subfic 0, 0, 128
  05ede34  rlwinm 9, 9, 0, 0, 24
  05ede38  cmplw 7, 8, 10
  05ede3c  sub 9, 9, 0
  05ede40  stw 9, 232(31)
  05ede44  bt 28, 0x5ede5c
  05ede48  lwz 0, 508(31)
  05ede4c  add 9, 8, 11
  05ede50  add 0, 10, 0
  05ede54  cmplw 7, 9, 0
  05ede58  bf 29, 0x5ede88
  05ede5c  lwz 3, -32540(2)
  05ede60  li 0, 1
  05ede64  stw 0, 280(31)
  05ede68  lwz 9, 428(3)
  05ede6c  cmpwi 7, 9, 0
  05ede70  bt 30, 0x5edb18
  05ede74  addi 3, 3, 432
  05ede78  li 4, 1
  05ede7c  bl 0x5fc190
  05ede80  nop
  05ede84  b 0x5edb18
  05ede88  li 0, 1
  05ede8c  mr 3, 29
  05ede90  stw 0, 280(31)
  05ede94  bl 0x5eb450
  05ede98  b 0x5edb18

FUN_005edea0:   # 0x5edea0, 0x280 bytes
  05edea0  cmpwi 7, 3, 0
  05edea4  mflr 0
  05edea8  stdu 1, -144(1)
  05edeac  std 29, 120(1)
  05edeb0  std 31, 136(1)
  05edeb4  std 28, 112(1)
  05edeb8  std 30, 128(1)
  05edebc  std 0, 160(1)
  05edec0  mr 31, 3
  05edec4  mr 29, 3
  05edec8  bt 30, 0x5edfd8
  05edecc  lwz 0, 1120(3)
  05eded0  cmpwi 7, 0, 0
  05eded4  bt 30, 0x5ee000
  05eded8  lwz 0, 28(31)
  05ededc  cmpwi 7, 0, 0
  05edee0  bf 30, 0x5edfd8
  05edee4  lwz 30, 1140(31)
  05edee8  cmpwi 7, 30, 0
  05edeec  mr 28, 30
  05edef0  bt 30, 0x5ee050
  05edef4  lwz 0, 292(31)
  05edef8  clrldi 3, 29, 32
  05edefc  cmpwi 7, 0, 0
  05edf00  bf 30, 0x5ee010
  05edf04  bl 0x5f5090
  05edf08  nop
  05edf0c  lwz 11, 1136(31)
  05edf10  li 9, -3
  05edf14  addi 0, 11, -1
  05edf18  cmplw 7, 0, 9
  05edf1c  bf 29, 0x5ee028
  05edf20  lwz 0, 264(31)
  05edf24  cmpwi 7, 0, 0
  05edf28  bt 30, 0x5edf60
  05edf2c  lwz 0, 380(31)
  05edf30  cmpwi 7, 0, 0
  05edf34  bt 30, 0x5ee094
  05edf38  ld 0, 160(1)
  05edf3c  li 3, 1
  05edf40  ld 28, 112(1)
  05edf44  extsw 3, 3
  05edf48  ld 29, 120(1)
  05edf4c  ld 30, 128(1)
  05edf50  mtlr 0
  05edf54  ld 31, 136(1)
  05edf58  addi 1, 1, 144
  05edf5c  blr
  05edf60  lwz 6, 292(31)
  05edf64  cmpwi 6, 6, 0
  05edf68  bf 26, 0x5ee084
  05edf6c  lwz 8, 20(31)
  05edf70  cmpwi 7, 8, 0
  05edf74  bt 30, 0x5edfd8
  05edf78  lwz 11, 24(31)
  05edf7c  clrldi 8, 8, 32
  05edf80  lwz 9, 1144(31)
  05edf84  sub 7, 3, 28
  05edf88  lwz 0, 1120(31)
  05edf8c  lwz 10, 340(31)
  05edf90  sub 0, 0, 9
  05edf94  mulli 11, 11, 1000
  05edf98  clrldi 0, 0, 32
  05edf9c  lwz 9, 60(10)
  05edfa0  mulld 0, 0, 11
  05edfa4  divdu 0, 0, 8
  05edfa8  clrldi 0, 0, 32
  05edfac  mulld 0, 0, 9
  05edfb0  rldicl 0, 0, 48, 16
  05edfb4  sub 3, 7, 0
  05edfb8  cmpwi 7, 3, 0
  05edfbc  bt 28, 0x5edf2c
  05edfc0  bf 26, 0x5edfd8
  05edfc4  lwz 0, 1148(31)
  05edfc8  slwi 0, 0, 1
  05edfcc  cmpw 7, 0, 3
  05edfd0  bt 28, 0x5ee10c
  05edfd4  nop
  05edfd8  li 3, 0
  05edfdc  ld 0, 160(1)
  05edfe0  extsw 3, 3
  05edfe4  ld 28, 112(1)
  05edfe8  ld 29, 120(1)
  05edfec  mtlr 0
  05edff0  ld 30, 128(1)
  05edff4  ld 31, 136(1)
  05edff8  addi 1, 1, 144
  05edffc  blr
  05ee000  lwz 0, 264(3)
  05ee004  cmpwi 7, 0, 0
  05ee008  bf 30, 0x5eded8
  05ee00c  b 0x5edfd8
  05ee010  lwz 9, 340(31)
  05ee014  lwz 0, 76(9)
  05ee018  cmpwi 7, 0, 1
  05ee01c  bf 30, 0x5edf04
  05ee020  bl 0x5ebac0
  05ee024  b 0x5edf04
  05ee028  sub 0, 3, 11
  05ee02c  lwz 9, 1176(31)
  05ee030  li 11, 0
  05ee034  add 9, 9, 0
  05ee038  lwz 0, 264(31)
  05ee03c  stw 11, 1136(31)
  05ee040  cmpwi 7, 0, 0
  05ee044  stw 9, 1176(31)
  05ee048  bf 30, 0x5edf2c
  05ee04c  b 0x5edf60
  05ee050  bl 0x5f5090
  05ee054  nop
  05ee058  lwz 0, 292(31)
  05ee05c  lwz 9, 1120(31)
  05ee060  cmpwi 7, 0, 0
  05ee064  addi 9, 9, -1
  05ee068  mr 28, 3
  05ee06c  stw 3, 1140(31)
  05ee070  stw 30, 1228(31)
  05ee074  stw 9, 1144(31)
  05ee078  clrldi 3, 29, 32
  05ee07c  bt 30, 0x5edf04
  05ee080  b 0x5ee010
  05ee084  lwz 0, 272(31)
  05ee088  cmpwi 7, 0, 0
  05ee08c  bt 30, 0x5edf2c
  05ee090  b 0x5edf6c
  05ee094  lwz 0, 32(31)
  05ee098  rlwinm 0, 0, 0, 4, 4
  05ee09c  cmpwi 7, 0, 0
  05ee0a0  bt 30, 0x5edf38
  05ee0a4  lwz 9, 424(31)
  05ee0a8  cmpwi 7, 9, 0
  05ee0ac  bt 30, 0x5ee118
  05ee0b0  clrldi 9, 9, 32
  05ee0b4  addi 30, 29, 400
  05ee0b8  li 4, 0
  05ee0bc  clrldi 3, 30, 32
  05ee0c0  lwz 0, 0(9)
  05ee0c4  std 2, 40(1)
  05ee0c8  mtctr 0
  05ee0cc  lwz 2, 4(9)
  05ee0d0  bctrl
  05ee0d4  ld 2, 40(1)
  05ee0d8  clrlwi 3, 3, 31
  05ee0dc  cmpwi 7, 3, 0
  05ee0e0  bf 30, 0x5edf38
  05ee0e4  lwz 9, 416(31)
  05ee0e8  clrldi 3, 30, 32
  05ee0ec  lwz 0, 0(9)
  05ee0f0  std 2, 40(1)
  05ee0f4  mtctr 0
  05ee0f8  lwz 2, 4(9)
  05ee0fc  bctrl
  05ee100  ld 2, 40(1)
  05ee104  li 3, 1
  05ee108  b 0x5edfdc
  05ee10c  li 3, 0
  05ee110  stw 6, 1140(31)
  05ee114  b 0x5edfdc
  05ee118  addi 30, 29, 400
  05ee11c  b 0x5ee0e4

FUN_005ee120:   # 0x5ee120, 0x288 bytes
  05ee120  stdu 1, -128(1)
  05ee124  mflr 0
  05ee128  std 31, 120(1)
  05ee12c  mr 31, 3
  05ee130  std 30, 112(1)
  05ee134  std 0, 144(1)
  05ee138  lwz 9, 208(31)
  05ee13c  cmpwi 7, 9, 0
  05ee140  bt 30, 0x5ee178
  05ee144  clrldi 8, 9, 32
  05ee148  lwz 0, 20(8)
  05ee14c  xori 10, 0, 1
  05ee150  slwi 11, 10, 4
  05ee154  slwi 9, 10, 6
  05ee158  sub 9, 9, 11
  05ee15c  addi 9, 9, 16
  05ee160  extsw 9, 9
  05ee164  add 9, 8, 9
  05ee168  lwz 0, 12(9)
  05ee16c  cmpwi 7, 0, 0
  05ee170  bt 30, 0x5ee178
  05ee174  stw 10, 20(8)
  05ee178  lwz 7, 1108(31)
  05ee17c  addi 11, 7, -1
  05ee180  cmpwi 7, 11, 0
  05ee184  stw 11, 1108(31)
  05ee188  bt 28, 0x5ee388
  05ee18c  lwz 0, 1200(31)
  05ee190  cmpwi 7, 0, 0
  05ee194  bt 30, 0x5ee1b8
  05ee198  sub 8, 4, 0
  05ee19c  lwz 10, 1152(31)
  05ee1a0  cmplw 7, 8, 10
  05ee1a4  bt 29, 0x5ee36c
  05ee1a8  lwz 0, 1160(31)
  05ee1ac  cmplw 7, 0, 4
  05ee1b0  bt 28, 0x5ee398
  05ee1b4  nop
  05ee1b8  lwz 0, 1076(31)
  05ee1bc  slwi 11, 11, 2
  05ee1c0  stw 4, 1200(31)
  05ee1c4  add 11, 11, 0
  05ee1c8  clrldi 3, 3, 32
  05ee1cc  clrldi 11, 11, 32
  05ee1d0  stw 4, 0(11)
  05ee1d4  lwz 9, 1108(31)
  05ee1d8  lwz 0, 1084(31)
  05ee1dc  slwi 9, 9, 2
  05ee1e0  lwz 10, 1168(31)
  05ee1e4  add 9, 9, 0
  05ee1e8  clrldi 9, 9, 32
  05ee1ec  stw 10, 0(9)
  05ee1f0  lwz 11, 1108(31)
  05ee1f4  lwz 0, 1080(31)
  05ee1f8  slwi 11, 11, 2
  05ee1fc  lwz 10, 1172(31)
  05ee200  add 11, 11, 0
  05ee204  clrldi 11, 11, 32
  05ee208  stw 10, 0(11)
  05ee20c  lwz 9, 1108(31)
  05ee210  lwz 0, 1088(31)
  05ee214  slwi 9, 9, 2
  05ee218  lwz 10, 1176(31)
  05ee21c  add 9, 9, 0
  05ee220  clrldi 9, 9, 32
  05ee224  stw 10, 0(9)
  05ee228  lwz 11, 1108(31)
  05ee22c  lwz 0, 1092(31)
  05ee230  slwi 11, 11, 2
  05ee234  lwz 10, 484(31)
  05ee238  add 11, 11, 0
  05ee23c  clrldi 11, 11, 32
  05ee240  stw 10, 0(11)
  05ee244  lwz 9, 1108(31)
  05ee248  lwz 0, 1096(31)
  05ee24c  slwi 9, 9, 2
  05ee250  lwz 10, 488(31)
  05ee254  add 9, 9, 0
  05ee258  clrldi 9, 9, 32
  05ee25c  stw 10, 0(9)
  05ee260  lwz 11, 1108(31)
  05ee264  lwz 0, 1100(31)
  05ee268  slwi 11, 11, 2
  05ee26c  lwz 9, 492(31)
  05ee270  add 11, 11, 0
  05ee274  clrldi 11, 11, 32
  05ee278  stw 9, 0(11)
  05ee27c  lwz 8, 1124(31)
  05ee280  cmpwi 7, 8, 0
  05ee284  bf 30, 0x5ee348
  05ee288  lwz 0, 1188(31)
  05ee28c  slwi 9, 7, 2
  05ee290  lwz 10, 1184(31)
  05ee294  lwz 11, 1076(31)
  05ee298  mulli 0, 0, 1000
  05ee29c  add 9, 9, 11
  05ee2a0  divdu 0, 0, 10
  05ee2a4  clrldi 9, 9, 32
  05ee2a8  sub 0, 4, 0
  05ee2ac  stw 0, 0(9)
  05ee2b0  stw 8, 492(31)
  05ee2b4  stw 4, 1124(31)
  05ee2b8  stw 8, 488(31)
  05ee2bc  lwz 0, 220(31)
  05ee2c0  cmpwi 7, 0, 0
  05ee2c4  stw 0, 224(31)
  05ee2c8  bt 30, 0x5ee2d4
  05ee2cc  li 0, -1
  05ee2d0  stw 0, 60(31)
  05ee2d4  lwz 30, 1140(31)
  05ee2d8  lwz 9, 1120(31)
  05ee2dc  cmpwi 7, 30, 0
  05ee2e0  addi 9, 9, 1
  05ee2e4  stw 9, 1120(31)
  05ee2e8  bf 30, 0x5ee308
  05ee2ec  bl 0x5f5090
  05ee2f0  nop
  05ee2f4  lwz 9, 1120(31)
  05ee2f8  addi 9, 9, -1
  05ee2fc  stw 3, 1140(31)
  05ee300  stw 30, 1228(31)
  05ee304  stw 9, 1144(31)
  05ee308  lwz 11, 12(31)
  05ee30c  li 0, -1
  05ee310  lwz 10, 296(31)
  05ee314  li 9, 0
  05ee318  stw 0, 1136(31)
  05ee31c  stw 9, 476(31)
  05ee320  stw 11, 16(31)
  05ee324  stw 10, 52(31)
  05ee328  stw 11, 1196(31)
  05ee32c  ld 0, 144(1)
  05ee330  li 3, 0
  05ee334  ld 30, 112(1)
  05ee338  ld 31, 120(1)
  05ee33c  mtlr 0
  05ee340  addi 1, 1, 128
  05ee344  blr
  05ee348  lwz 0, 292(31)
  05ee34c  cmpwi 7, 0, 0
  05ee350  bt 30, 0x5ee2bc
  05ee354  lwz 9, 340(31)
  05ee358  lwz 0, 76(9)
  05ee35c  cmpwi 7, 0, 1
  05ee360  bf 30, 0x5ee2bc
  05ee364  bl 0x5ebac0
  05ee368  b 0x5ee2bc
  05ee36c  lwz 0, 1156(31)
  05ee370  lwz 9, 1196(31)
  05ee374  stw 10, 1160(31)
  05ee378  stw 0, 1164(31)
  05ee37c  stw 8, 1152(31)
  05ee380  stw 9, 1156(31)
  05ee384  b 0x5ee1b8
  05ee388  lwz 9, 1104(31)
  05ee38c  addi 11, 9, -1
  05ee390  stw 11, 1108(31)
  05ee394  b 0x5ee18c
  05ee398  lwz 0, 1196(31)
  05ee39c  stw 8, 1160(31)
  05ee3a0  stw 0, 1164(31)
  05ee3a4  b 0x5ee1b8

FUN_005ee3a8:   # 0x5ee3a8, 0x28c bytes
  05ee3a8  cmpwi 7, 3, 0
  05ee3ac  mflr 0
  05ee3b0  stdu 1, -176(1)
  05ee3b4  std 25, 120(1)
  05ee3b8  std 27, 136(1)
  05ee3bc  std 29, 152(1)
  05ee3c0  std 31, 168(1)
  05ee3c4  mr 29, 3
  05ee3c8  mr 27, 3
  05ee3cc  std 26, 128(1)
  05ee3d0  std 28, 144(1)
  05ee3d4  std 30, 160(1)
  05ee3d8  std 0, 192(1)
  05ee3dc  mr 31, 4
  05ee3e0  mr 25, 4
  05ee3e4  li 3, 0
  05ee3e8  bt 30, 0x5ee534
  05ee3ec  bl 0x5f5090
  05ee3f0  nop
  05ee3f4  li 9, -3
  05ee3f8  mr 11, 3
  05ee3fc  lwz 3, 1136(29)
  05ee400  addi 0, 3, -1
  05ee404  cmplw 7, 0, 9
  05ee408  bf 29, 0x5ee578
  05ee40c  lwz 0, 292(29)
  05ee410  li 9, 0
  05ee414  lwz 26, 264(29)
  05ee418  cmpwi 7, 0, 0
  05ee41c  stw 9, 1200(29)
  05ee420  stw 31, 264(29)
  05ee424  bt 30, 0x5ee498
  05ee428  lwz 0, 340(29)
  05ee42c  clrldi 9, 0, 32
  05ee430  lwz 9, 76(9)
  05ee434  cmpwi 7, 9, 0
  05ee438  bf 29, 0x5ee5f4
  05ee43c  cmpwi 7, 9, 2
  05ee440  bt 30, 0x5ee5f4
  05ee444  li 30, 0
  05ee448  li 31, 0
  05ee44c  extsw 28, 25
  05ee450  b 0x5ee458
  05ee454  lwz 0, 340(29)
  05ee458  add 9, 31, 0
  05ee45c  mr 4, 28
  05ee460  clrldi 9, 9, 32
  05ee464  addi 30, 30, 1
  05ee468  mr 3, 9
  05ee46c  addi 31, 31, 384
  05ee470  lwz 11, 368(9)
  05ee474  lwz 0, 0(11)
  05ee478  std 2, 40(1)
  05ee47c  mtctr 0
  05ee480  lwz 2, 4(11)
  05ee484  bctrl
  05ee488  ld 2, 40(1)
  05ee48c  lwz 0, 292(29)
  05ee490  cmplw 7, 0, 30
  05ee494  bt 29, 0x5ee454
  05ee498  bl 0x5f5090
  05ee49c  nop
  05ee4a0  cmpwi 7, 25, 0
  05ee4a4  mr 30, 3
  05ee4a8  bt 30, 0x5ee564
  05ee4ac  cmpwi 7, 26, 0
  05ee4b0  bf 30, 0x5ee570
  05ee4b4  lwz 0, 1140(29)
  05ee4b8  cmpwi 7, 0, 0
  05ee4bc  bt 30, 0x5ee620
  05ee4c0  sub 0, 3, 0
  05ee4c4  li 31, 0
  05ee4c8  stw 0, 1228(29)
  05ee4cc  nop
  05ee4d0  lwz 0, 292(29)
  05ee4d4  cmpwi 7, 0, 0
  05ee4d8  bt 30, 0x5ee50c
  05ee4dc  lwz 0, 340(29)
  05ee4e0  clrldi 9, 0, 32
  05ee4e4  lwz 9, 76(9)
  05ee4e8  cmpwi 7, 9, 0
  05ee4ec  bf 29, 0x5ee5c8
  05ee4f0  cmpwi 7, 9, 2
  05ee4f4  bt 30, 0x5ee5c8
  05ee4f8  clrldi 9, 0, 32
  05ee4fc  clrldi 3, 27, 32
  05ee500  lwz 0, 76(9)
  05ee504  cmpwi 7, 0, 1
  05ee508  bt 30, 0x5ee62c
  05ee50c  cmpwi 7, 31, 0
  05ee510  bt 30, 0x5ee520
  05ee514  lwz 0, 1228(29)
  05ee518  sub 0, 30, 0
  05ee51c  stw 0, 1140(29)
  05ee520  lwz 3, -32540(2)
  05ee524  lwz 0, 428(3)
  05ee528  cmpwi 7, 0, 0
  05ee52c  bf 30, 0x5ee5b0
  05ee530  lwz 3, 264(29)
  05ee534  ld 0, 192(1)
  05ee538  extsw 3, 3
  05ee53c  ld 25, 120(1)
  05ee540  ld 26, 128(1)
  05ee544  mtlr 0
  05ee548  ld 27, 136(1)
  05ee54c  ld 28, 144(1)
  05ee550  ld 29, 152(1)
  05ee554  ld 30, 160(1)
  05ee558  ld 31, 168(1)
  05ee55c  addi 1, 1, 176
  05ee560  blr
  05ee564  cmpwi 7, 26, 0
  05ee568  li 31, 1
  05ee56c  bf 30, 0x5ee4d0
  05ee570  li 31, 0
  05ee574  b 0x5ee4d0
  05ee578  sub 0, 11, 3
  05ee57c  lwz 9, 1176(29)
  05ee580  li 11, 0
  05ee584  lwz 26, 264(29)
  05ee588  add 9, 9, 0
  05ee58c  lwz 0, 292(29)
  05ee590  stw 11, 1136(29)
  05ee594  cmpwi 7, 0, 0
  05ee598  stw 9, 1176(29)
  05ee59c  li 9, 0
  05ee5a0  stw 31, 264(29)
  05ee5a4  stw 9, 1200(29)
  05ee5a8  bt 30, 0x5ee498
  05ee5ac  b 0x5ee428
  05ee5b0  addi 3, 3, 432
  05ee5b4  li 4, 1
  05ee5b8  bl 0x5fc190
  05ee5bc  nop
  05ee5c0  lwz 3, 264(29)
  05ee5c4  b 0x5ee534
  05ee5c8  addi 3, 27, 944
  05ee5cc  lwz 4, -32496(2)
  05ee5d0  lwz 5, -32516(2)
  05ee5d4  li 6, 653
  05ee5d8  clrldi 3, 3, 32
  05ee5dc  bl 0x5eb2e0
  05ee5e0  lwz 0, 292(29)
  05ee5e4  cmpwi 7, 0, 0
  05ee5e8  bt 30, 0x5ee50c
  05ee5ec  lwz 0, 340(29)
  05ee5f0  b 0x5ee4f8
  05ee5f4  addi 3, 27, 944
  05ee5f8  lwz 4, -32496(2)
  05ee5fc  lwz 5, -32516(2)
  05ee600  li 6, 647
  05ee604  clrldi 3, 3, 32
  05ee608  bl 0x5eb0f8
  05ee60c  lwz 0, 292(29)
  05ee610  cmpwi 7, 0, 0
  05ee614  bt- 30, 0x5ee498
  05ee618  lwz 0, 340(29)
  05ee61c  b 0x5ee444
  05ee620  li 31, 0
  05ee624  stw 0, 1228(29)
  05ee628  b 0x5ee4d0
  05ee62c  bl 0x5ebac0
  05ee630  b 0x5ee50c

FUN_005ee638:   # 0x5ee638, 0x5d4 bytes
  05ee638  cmpwi 7, 3, 0
  05ee63c  mflr 0
  05ee640  stdu 1, -192(1)
  05ee644  std 24, 128(1)
  05ee648  std 31, 184(1)
  05ee64c  std 23, 120(1)
  05ee650  std 25, 136(1)
  05ee654  std 26, 144(1)
  05ee658  std 27, 152(1)
  05ee65c  std 28, 160(1)
  05ee660  std 29, 168(1)
  05ee664  std 30, 176(1)
  05ee668  std 0, 208(1)
  05ee66c  mr 31, 3
  05ee670  mr 24, 3
  05ee674  bt 30, 0x5ee85c
  05ee678  clrldi 23, 3, 32
  05ee67c  li 0, 1
  05ee680  mr 3, 23
  05ee684  li 4, 1
  05ee688  stw 0, 300(31)
  05ee68c  bl 0x5ee3a8
  05ee690  lwz 30, -32540(2)
  05ee694  lwz 9, 1548(30)
  05ee698  cmpwi 7, 9, 0
  05ee69c  bt 30, 0x5ee6c0
  05ee6a0  clrldi 9, 9, 32
  05ee6a4  mr 3, 23
  05ee6a8  lwz 0, 0(9)
  05ee6ac  std 2, 40(1)
  05ee6b0  mtctr 0
  05ee6b4  lwz 2, 4(9)
  05ee6b8  bctrl
  05ee6bc  ld 2, 40(1)
  05ee6c0  lwz 0, 356(31)
  05ee6c4  cmpwi 7, 0, 0
  05ee6c8  bf 30, 0x5eea90
  05ee6cc  lwz 0, 32(31)
  05ee6d0  rlwinm 29, 0, 0, 4, 4
  05ee6d4  cmpwi 7, 29, 0
  05ee6d8  bt 30, 0x5eea14
  05ee6dc  lwz 0, 1552(30)
  05ee6e0  cmpw 7, 24, 0
  05ee6e4  bt 30, 0x5eea84
  05ee6e8  lwz 0, 292(31)
  05ee6ec  cmpwi 7, 0, 0
  05ee6f0  bf 30, 0x5ee8bc
  05ee6f4  lwz 0, 1352(30)
  05ee6f8  cmpwi 7, 0, 0
  05ee6fc  bf 30, 0x5ee938
  05ee700  lwz 0, 292(31)
  05ee704  cmpwi 7, 0, 0
  05ee708  bt 30, 0x5ee764
  05ee70c  li 28, 0
  05ee710  li 29, 0
  05ee714  nop
  05ee718  lwz 9, 340(31)
  05ee71c  addi 28, 28, 1
  05ee720  add 9, 29, 9
  05ee724  addi 29, 29, 384
  05ee728  clrldi 9, 9, 32
  05ee72c  mr 3, 9
  05ee730  lwz 11, 376(9)
  05ee734  lwz 0, 0(11)
  05ee738  std 2, 40(1)
  05ee73c  mtctr 0
  05ee740  lwz 2, 4(11)
  05ee744  bctrl
  05ee748  ld 2, 40(1)
  05ee74c  lwz 9, 1500(30)
  05ee750  addi 9, 9, -1
  05ee754  stw 9, 1500(30)
  05ee758  lwz 0, 292(31)
  05ee75c  cmplw 7, 0, 28
  05ee760  bt 29, 0x5ee718
  05ee764  lwz 0, 1352(30)
  05ee768  cmpwi 7, 0, 0
  05ee76c  bf 30, 0x5eeb2c
  05ee770  lwz 3, 348(31)
  05ee774  cmpwi 7, 3, 0
  05ee778  bt 30, 0x5ee788
  05ee77c  clrldi 3, 3, 32
  05ee780  bl 0x5f516c
  05ee784  nop
  05ee788  lwz 3, 380(31)
  05ee78c  cmpwi 7, 3, 0
  05ee790  bt 30, 0x5eeb6c
  05ee794  lwz 9, 32(31)
  05ee798  rlwinm 0, 9, 0, 5, 5
  05ee79c  cmpwi 7, 0, 0
  05ee7a0  bt 30, 0x5eeb44
  05ee7a4  rlwinm 0, 9, 0, 4, 4
  05ee7a8  cmpwi 7, 0, 0
  05ee7ac  bt 30, 0x5eeb18
  05ee7b0  addi 3, 24, 688
  05ee7b4  clrldi 3, 3, 32
  05ee7b8  bl 0x5fc490
  05ee7bc  nop
  05ee7c0  lwz 0, 292(31)
  05ee7c4  cmpwi 7, 0, 0
  05ee7c8  bf 30, 0x5ee890
  05ee7cc  lwz 3, 1252(31)
  05ee7d0  cmpwi 7, 3, 0
  05ee7d4  bt 30, 0x5ee7e4
  05ee7d8  clrldi 3, 3, 32
  05ee7dc  bl 0x5f516c
  05ee7e0  nop
  05ee7e4  lwz 3, 212(31)
  05ee7e8  cmpwi 7, 3, 0
  05ee7ec  bt 30, 0x5ee7fc
  05ee7f0  clrldi 3, 3, 32
  05ee7f4  bl 0x5f516c
  05ee7f8  nop
  05ee7fc  lwz 3, 216(31)
  05ee800  cmpwi 7, 3, 0
  05ee804  bt 30, 0x5ee820
  05ee808  lwz 0, 212(31)
  05ee80c  cmpw 7, 0, 3
  05ee810  bt 30, 0x5ee820
  05ee814  clrldi 3, 3, 32
  05ee818  bl 0x5f516c
  05ee81c  nop
  05ee820  lwz 0, 292(31)
  05ee824  cmpwi 7, 0, 0
  05ee828  bf 30, 0x5ee950
  05ee82c  lwz 31, 32(31)
  05ee830  rlwinm 0, 31, 0, 4, 4
  05ee834  cmpwi 7, 0, 0
  05ee838  bt 30, 0x5ee9c8
  05ee83c  mr 3, 23
  05ee840  li 4, 0
  05ee844  li 5, 1264
  05ee848  bl 0x5d0140
  05ee84c  nop
  05ee850  mr 3, 23
  05ee854  bl 0x5f516c
  05ee858  nop
  05ee85c  ld 0, 208(1)
  05ee860  ld 23, 120(1)
  05ee864  ld 24, 128(1)
  05ee868  mtlr 0
  05ee86c  ld 25, 136(1)
  05ee870  ld 26, 144(1)
  05ee874  ld 27, 152(1)
  05ee878  ld 28, 160(1)
  05ee87c  ld 29, 168(1)
  05ee880  ld 30, 176(1)
  05ee884  ld 31, 184(1)
  05ee888  addi 1, 1, 192
  05ee88c  blr
  05ee890  lwz 9, 340(31)
  05ee894  lwz 0, 76(9)
  05ee898  cmpwi 7, 0, 0
  05ee89c  bf 29, 0x5ee8a8
  05ee8a0  cmpwi 7, 0, 2
  05ee8a4  bf 30, 0x5ee7cc
  05ee8a8  addi 3, 24, 944
  05ee8ac  clrldi 3, 3, 32
  05ee8b0  bl 0x5fc490
  05ee8b4  nop
  05ee8b8  b 0x5ee7cc
  05ee8bc  lwz 9, 340(31)
  05ee8c0  lwz 0, 76(9)
  05ee8c4  cmpwi 7, 0, 0
  05ee8c8  bf 29, 0x5ee8d4
  05ee8cc  cmpwi 7, 0, 2
  05ee8d0  bf 30, 0x5ee6f4
  05ee8d4  addi 29, 24, 944
  05ee8d8  lwz 25, -32484(2)
  05ee8dc  addi 28, 30, 1356
  05ee8e0  lwz 26, -32496(2)
  05ee8e4  clrldi 29, 29, 32
  05ee8e8  clrldi 28, 28, 32
  05ee8ec  mr 4, 25
  05ee8f0  mr 3, 28
  05ee8f4  mr 5, 29
  05ee8f8  mr 6, 26
  05ee8fc  bl 0x5eb650
  05ee900  lwz 27, -32516(2)
  05ee904  mr 3, 29
  05ee908  mr 4, 26
  05ee90c  mr 5, 27
  05ee910  li 6, 3343
  05ee914  bl 0x5eb2e0
  05ee918  mr 3, 28
  05ee91c  mr 4, 25
  05ee920  mr 5, 27
  05ee924  li 6, 3344
  05ee928  bl 0x5eb2e0
  05ee92c  lwz 0, 1352(30)
  05ee930  cmpwi 7, 0, 0
  05ee934  bt 30, 0x5ee700
  05ee938  addi 3, 30, 1148
  05ee93c  lwz 4, -32488(2)
  05ee940  lwz 5, -32516(2)
  05ee944  li 6, 3350
  05ee948  bl 0x5eb0f8
  05ee94c  b 0x5ee700
  05ee950  lwz 9, 340(31)
  05ee954  lwz 0, 76(9)
  05ee958  cmpwi 7, 0, 0
  05ee95c  bt 29, 0x5ee82c
  05ee960  lwz 27, -32488(2)
  05ee964  addi 3, 30, 1148
  05ee968  lwz 28, -32516(2)
  05ee96c  li 6, 620
  05ee970  mr 4, 27
  05ee974  lwz 29, 32(31)
  05ee978  mr 5, 28
  05ee97c  bl 0x5eb0f8
  05ee980  lwz 9, 1344(30)
  05ee984  addi 9, 9, -1
  05ee988  stw 9, 1344(30)
  05ee98c  lwz 0, 1344(30)
  05ee990  cmpwi 7, 0, 0
  05ee994  bf 30, 0x5ee9b0
  05ee998  rlwinm 0, 29, 0, 25, 25
  05ee99c  cmpwi 7, 0, 0
  05ee9a0  bt 30, 0x5eec04
  05ee9a4  lwz 9, -32536(2)
  05ee9a8  li 0, -1
  05ee9ac  stw 0, 16(9)
  05ee9b0  mr 4, 27
  05ee9b4  mr 5, 28
  05ee9b8  addi 3, 30, 1148
  05ee9bc  li 6, 632
  05ee9c0  bl 0x5eb2e0
  05ee9c4  b 0x5ee82c
  05ee9c8  lwz 28, -32516(2)
  05ee9cc  addi 3, 30, 1012
  05ee9d0  lwz 29, -32492(2)
  05ee9d4  li 6, 1384
  05ee9d8  mr 5, 28
  05ee9dc  mr 4, 29
  05ee9e0  bl 0x5eb0f8
  05ee9e4  lwz 9, 1144(30)
  05ee9e8  addi 9, 9, -1
  05ee9ec  stw 9, 1144(30)
  05ee9f0  lwz 0, 1144(30)
  05ee9f4  cmpwi 7, 0, 0
  05ee9f8  bt 30, 0x5eeb58
  05ee9fc  addi 3, 30, 1012
  05eea00  mr 4, 29
  05eea04  mr 5, 28
  05eea08  li 6, 1391
  05eea0c  bl 0x5eb2e0
  05eea10  b 0x5ee83c
  05eea14  addi 0, 24, 816
  05eea18  lwz 25, -32484(2)
  05eea1c  addi 9, 30, 1356
  05eea20  lwz 26, -32520(2)
  05eea24  clrldi 28, 0, 32
  05eea28  clrldi 27, 9, 32
  05eea2c  mr 4, 25
  05eea30  mr 3, 27
  05eea34  mr 5, 28
  05eea38  mr 6, 26
  05eea3c  bl 0x5eb650
  05eea40  lwz 0, 1552(30)
  05eea44  cmpw 7, 24, 0
  05eea48  bt 30, 0x5eebbc
  05eea4c  lwz 29, -32516(2)
  05eea50  mr 3, 28
  05eea54  mr 4, 26
  05eea58  mr 5, 29
  05eea5c  li 6, 3330
  05eea60  bl 0x5eb2e0
  05eea64  mr 3, 27
  05eea68  mr 4, 25
  05eea6c  mr 5, 29
  05eea70  li 6, 3331
  05eea74  bl 0x5eb2e0
  05eea78  lwz 0, 1552(30)
  05eea7c  cmpw 7, 24, 0
  05eea80  bf 30, 0x5ee6e8
  05eea84  li 0, 0
  05eea88  stw 0, 1552(30)
  05eea8c  b 0x5ee6e8
  05eea90  lwz 29, -32484(2)
  05eea94  addi 3, 30, 1356
  05eea98  lwz 28, -32516(2)
  05eea9c  li 6, 282
  05eeaa0  mr 4, 29
  05eeaa4  mr 5, 28
  05eeaa8  bl 0x5eb0f8
  05eeaac  lwz 0, 1516(30)
  05eeab0  cmpw 7, 24, 0
  05eeab4  bt 30, 0x5eebc4
  05eeab8  lwz 0, 1516(30)
  05eeabc  cmpwi 7, 0, 0
  05eeac0  bt 30, 0x5eeaf8
  05eeac4  clrldi 9, 0, 32
  05eeac8  lwz 0, 228(9)
  05eeacc  cmpw 7, 24, 0
  05eead0  bt 30, 0x5eeaf0
  05eead4  nop
  05eead8  cmpwi 7, 0, 0
  05eeadc  clrldi 9, 0, 32
  05eeae0  bt 30, 0x5eeaf8
  05eeae4  lwz 0, 228(9)
  05eeae8  cmpw 7, 24, 0
  05eeaec  bf 30, 0x5eead8
  05eeaf0  lwz 0, 228(31)
  05eeaf4  stw 0, 228(9)
  05eeaf8  mr 4, 29
  05eeafc  mr 5, 28
  05eeb00  addi 3, 30, 1356
  05eeb04  li 6, 301
  05eeb08  bl 0x5eb2e0
  05eeb0c  li 0, 0
  05eeb10  stw 0, 356(31)
  05eeb14  b 0x5ee6cc
  05eeb18  addi 3, 24, 816
  05eeb1c  clrldi 3, 3, 32
  05eeb20  bl 0x5fc490
  05eeb24  nop
  05eeb28  b 0x5ee7b0
  05eeb2c  addi 3, 30, 1148
  05eeb30  lwz 4, -32488(2)
  05eeb34  lwz 5, -32516(2)
  05eeb38  li 6, 3371
  05eeb3c  bl 0x5eb2e0
  05eeb40  b 0x5ee770
  05eeb44  clrldi 3, 3, 32
  05eeb48  bl 0x5f516c
  05eeb4c  nop
  05eeb50  lwz 9, 32(31)
  05eeb54  b 0x5ee7a4
  05eeb58  rlwinm 0, 31, 0, 25, 25
  05eeb5c  cmpwi 7, 0, 0
  05eeb60  bf 30, 0x5ee9fc
  05eeb64  bl 0x5ec0e0
  05eeb68  b 0x5ee9fc
  05eeb6c  lwz 0, 1352(30)
  05eeb70  cmpwi 7, 0, 0
  05eeb74  bf 30, 0x5eebec
  05eeb78  lwz 9, 420(31)
  05eeb7c  addi 3, 24, 400
  05eeb80  clrldi 3, 3, 32
  05eeb84  lwz 0, 0(9)
  05eeb88  std 2, 40(1)
  05eeb8c  mtctr 0
  05eeb90  lwz 2, 4(9)
  05eeb94  bctrl
  05eeb98  ld 2, 40(1)
  05eeb9c  lwz 0, 1352(30)
  05eeba0  cmpwi 7, 0, 0
  05eeba4  bf 30, 0x5eebd4
  05eeba8  lwz 3, 1072(31)
  05eebac  bl 0x5f516c
  05eebb0  nop
  05eebb4  lwz 9, 32(31)
  05eebb8  b 0x5ee7a4
  05eebbc  stw 29, 1552(30)
  05eebc0  b 0x5eea4c
  05eebc4  lwz 9, 1516(30)
  05eebc8  lwz 0, 228(9)
  05eebcc  stw 0, 1516(30)
  05eebd0  b 0x5eeaf8
  05eebd4  addi 3, 30, 1012
  05eebd8  lwz 4, -32492(2)
  05eebdc  lwz 5, -32516(2)
  05eebe0  li 6, 3394
  05eebe4  bl 0x5eb2e0
  05eebe8  b 0x5eeba8
  05eebec  addi 3, 30, 1012
  05eebf0  lwz 4, -32492(2)
  05eebf4  lwz 5, -32516(2)
  05eebf8  li 6, 3387
  05eebfc  bl 0x5eb0f8
  05eec00  b 0x5eeb78
  05eec04  bl 0x5ec1d4
  05eec08  b 0x5ee9b0

FUN_005eec10:   # 0x5eec10, 0xb2c bytes
  05eec10  mfcr 12
  05eec14  stdu 1, -240(1)
  05eec18  std 21, 152(1)
  05eec1c  lwz 21, -32532(2)
  05eec20  std 18, 128(1)
  05eec24  std 19, 136(1)
  05eec28  std 20, 144(1)
  05eec2c  std 22, 160(1)
  05eec30  std 23, 168(1)
  05eec34  std 24, 176(1)
  05eec38  std 25, 184(1)
  05eec3c  std 26, 192(1)
  05eec40  std 27, 200(1)
  05eec44  std 28, 208(1)
  05eec48  std 29, 216(1)
  05eec4c  std 30, 224(1)
  05eec50  std 31, 232(1)
  05eec54  stw 12, 248(1)
  05eec58  mflr 0
  05eec5c  std 0, 256(1)
  05eec60  lwz 9, 0(21)
  05eec64  cmpwi 7, 9, 0
  05eec68  bt 30, 0x5ef6e8
  05eec6c  clrldi 9, 9, 32
  05eec70  lwz 25, -32540(2)
  05eec74  lwz 6, -32404(2)
  05eec78  li 4, 0
  05eec7c  mr 3, 9
  05eec80  addi 5, 25, 1556
  05eec84  lwz 11, 88(9)
  05eec88  lwz 0, 0(11)
  05eec8c  std 2, 40(1)
  05eec90  mtctr 0
  05eec94  lwz 2, 4(11)
  05eec98  bctrl
  05eec9c  ld 2, 40(1)
  05eeca0  lwz 9, 0(21)
  05eeca4  cmpwi 7, 9, 0
  05eeca8  bt 30, 0x5eecf4
  05eecac  clrldi 9, 9, 32
  05eecb0  lwz 0, -32400(2)
  05eecb4  lwz 8, -32516(2)
  05eecb8  li 4, 0
  05eecbc  std 0, 112(1)
  05eecc0  mr 3, 9
  05eecc4  li 5, 0
  05eecc8  lwz 11, 80(9)
  05eeccc  li 6, 0
  05eecd0  li 7, 2
  05eecd4  li 9, 1105
  05eecd8  addi 10, 25, 1560
  05eecdc  lwz 0, 0(11)
  05eece0  std 2, 40(1)
  05eece4  mtctr 0
  05eece8  lwz 2, 4(11)
  05eecec  bctrl
  05eecf0  ld 2, 40(1)
  05eecf4  li 4, -1
  05eecf8  addi 3, 25, 432
  05eecfc  clrldi 4, 4, 32
  05eed00  bl 0x5fc0f8
  05eed04  nop
  05eed08  lwz 9, 0(21)
  05eed0c  cmpwi 7, 9, 0
  05eed10  bt 30, 0x5eed48
  05eed14  clrldi 9, 9, 32
  05eed18  lwz 6, -32516(2)
  05eed1c  li 4, 0
  05eed20  mr 3, 9
  05eed24  li 5, 0
  05eed28  li 7, 1107
  05eed2c  lwz 11, 84(9)
  05eed30  lwz 0, 0(11)
  05eed34  std 2, 40(1)
  05eed38  mtctr 0
  05eed3c  lwz 2, 4(11)
  05eed40  bctrl
  05eed44  ld 2, 40(1)
  05eed48  li 18, 0
  05eed4c  lwz 0, 1140(25)
  05eed50  cmpwi 7, 0, 0
  05eed54  bf 30, 0x5eefe4
  05eed58  lwz 0, 1352(25)
  05eed5c  cmpwi 7, 0, 0
  05eed60  bt 30, 0x5eefe4
  05eed64  lwz 23, -32484(2)
  05eed68  addi 3, 25, 1356
  05eed6c  lwz 27, -32516(2)
  05eed70  li 6, 1117
  05eed74  mr 4, 23
  05eed78  mr 5, 27
  05eed7c  bl 0x5eb0f8
  05eed80  lwz 30, 1552(25)
  05eed84  cmpwi 7, 30, 0
  05eed88  bt 30, 0x5ef18c
  05eed8c  clrldi 31, 30, 32
  05eed90  lwz 0, 280(31)
  05eed94  cmpwi 7, 0, 0
  05eed98  bt 30, 0x5ef18c
  05eed9c  lwz 0, 32(31)
  05eeda0  rlwinm 0, 0, 0, 4, 4
  05eeda4  cmpwi 7, 0, 0
  05eeda8  bf 30, 0x5ef18c
  05eedac  lwz 9, 0(21)
  05eedb0  cmpwi 7, 9, 0
  05eedb4  bt 30, 0x5eee00
  05eedb8  clrldi 9, 9, 32
  05eedbc  lwz 0, -32396(2)
  05eedc0  li 4, 0
  05eedc4  std 0, 112(1)
  05eedc8  mr 3, 9
  05eedcc  li 5, 0
  05eedd0  lwz 11, 80(9)
  05eedd4  li 6, 0
  05eedd8  li 7, 1
  05eeddc  mr 8, 27
  05eede0  li 9, 1125
  05eede4  addi 10, 25, 1564
  05eede8  lwz 0, 0(11)
  05eedec  std 2, 40(1)
  05eedf0  mtctr 0
  05eedf4  lwz 2, 4(11)
  05eedf8  bctrl
  05eedfc  ld 2, 40(1)
  05eee00  addi 0, 30, 688
  05eee04  lwz 26, -32500(2)
  05eee08  li 4, 1
  05eee0c  clrldi 29, 0, 32
  05eee10  mr 5, 26
  05eee14  mr 3, 29
  05eee18  mr 6, 27
  05eee1c  li 7, 1126
  05eee20  bl 0x5eae28
  05eee24  cmpwi 4, 3, 0
  05eee28  bf 18, 0x5ef588
  05eee2c  lwz 9, 0(21)
  05eee30  cmpwi 7, 9, 0
  05eee34  bt 30, 0x5eee6c
  05eee38  clrldi 9, 9, 32
  05eee3c  li 4, 0
  05eee40  mr 3, 9
  05eee44  li 5, 0
  05eee48  mr 6, 27
  05eee4c  lwz 11, 84(9)
  05eee50  li 7, 1133
  05eee54  lwz 0, 0(11)
  05eee58  std 2, 40(1)
  05eee5c  mtctr 0
  05eee60  lwz 2, 4(11)
  05eee64  bctrl
  05eee68  ld 2, 40(1)
  05eee6c  addi 3, 25, 1356
  05eee70  mr 4, 23
  05eee74  mr 5, 27
  05eee78  li 6, 1137
  05eee7c  bl 0x5eb2e0
  05eee80  bf 18, 0x5ef3f4
  05eee84  li 22, 1
  05eee88  addi 31, 25, 1356
  05eee8c  mr 4, 23
  05eee90  mr 3, 31
  05eee94  mr 5, 27
  05eee98  li 6, 1163
  05eee9c  bl 0x5eb0f8
  05eeea0  lwz 30, 1516(25)
  05eeea4  cmpwi 7, 30, 0
  05eeea8  bt 30, 0x5eefac
  05eeeac  mr 24, 31
  05eeeb0  lwz 20, -32500(2)
  05eeeb4  addi 19, 31, 212
  05eeeb8  clrldi 31, 30, 32
  05eeebc  lwz 0, 280(31)
  05eeec0  cmpwi 7, 0, 0
  05eeec4  bt 30, 0x5eefa0
  05eeec8  lwz 0, 32(31)
  05eeecc  rlwinm 0, 0, 0, 4, 4
  05eeed0  cmpwi 7, 0, 0
  05eeed4  bf 30, 0x5eefa0
  05eeed8  lwz 9, 0(21)
  05eeedc  addi 22, 22, 1
  05eeee0  cmpwi 7, 9, 0
  05eeee4  bt 30, 0x5eef30
  05eeee8  clrldi 9, 9, 32
  05eeeec  lwz 0, -32396(2)
  05eeef0  li 4, 0
  05eeef4  std 0, 112(1)
  05eeef8  mr 3, 9
  05eeefc  li 5, 0
  05eef00  lwz 11, 80(9)
  05eef04  li 6, 0
  05eef08  li 7, 1
  05eef0c  mr 8, 27
  05eef10  li 9, 1174
  05eef14  clrldi 10, 19, 32
  05eef18  lwz 0, 0(11)
  05eef1c  std 2, 40(1)
  05eef20  mtctr 0
  05eef24  lwz 2, 4(11)
  05eef28  bctrl
  05eef2c  ld 2, 40(1)
  05eef30  addi 0, 30, 688
  05eef34  li 4, 1
  05eef38  clrldi 28, 0, 32
  05eef3c  mr 5, 20
  05eef40  mr 3, 28
  05eef44  mr 6, 27
  05eef48  li 7, 1175
  05eef4c  mr 26, 20
  05eef50  bl 0x5eae28
  05eef54  cmpwi 4, 3, 0
  05eef58  bf 18, 0x5ef150
  05eef5c  lwz 9, 0(21)
  05eef60  cmpwi 7, 9, 0
  05eef64  bt 30, 0x5eef9c
  05eef68  clrldi 9, 9, 32
  05eef6c  li 4, 0
  05eef70  mr 3, 9
  05eef74  li 5, 0
  05eef78  mr 6, 27
  05eef7c  lwz 11, 84(9)
  05eef80  li 7, 1182
  05eef84  lwz 0, 0(11)
  05eef88  std 2, 40(1)
  05eef8c  mtctr 0
  05eef90  lwz 2, 4(11)
  05eef94  bctrl
  05eef98  ld 2, 40(1)
  05eef9c  bf 18, 0x5ef044
  05eefa0  lwz 30, 228(31)
  05eefa4  cmpwi 7, 30, 0
  05eefa8  bf 30, 0x5eeeb8
  05eefac  addi 0, 25, 1356
  05eefb0  mr 4, 23
  05eefb4  clrldi 31, 0, 32
  05eefb8  mr 5, 27
  05eefbc  mr 3, 31
  05eefc0  li 6, 1215
  05eefc4  bl 0x5eb2e0
  05eefc8  cmpwi 7, 18, 0
  05eefcc  bt 30, 0x5ef1a8
  05eefd0  cmpwi 7, 22, 0
  05eefd4  bt 30, 0x5ef1f8
  05eefd8  or 0, 18, 22
  05eefdc  cmpwi 7, 0, 0
  05eefe0  bf 30, 0x5eed48
  05eefe4  lwz 0, 1140(25)
  05eefe8  cmpwi 7, 0, 0
  05eefec  bt 30, 0x5eeca0
  05eeff0  ld 0, 256(1)
  05eeff4  li 3, 1
  05eeff8  lwz 12, 248(1)
  05eeffc  ld 18, 128(1)
  05ef000  mtlr 0
  05ef004  ld 19, 136(1)
  05ef008  mtocrf 8, 12
  05ef00c  ld 20, 144(1)
  05ef010  ld 21, 152(1)
  05ef014  ld 22, 160(1)
  05ef018  ld 23, 168(1)
  05ef01c  ld 24, 176(1)
  05ef020  ld 25, 184(1)
  05ef024  ld 26, 192(1)
  05ef028  ld 27, 200(1)
  05ef02c  ld 28, 208(1)
  05ef030  ld 29, 216(1)
  05ef034  ld 30, 224(1)
  05ef038  ld 31, 232(1)
  05ef03c  addi 1, 1, 240
  05ef040  blr
  05ef044  clrldi 3, 24, 32
  05ef048  mr 4, 23
  05ef04c  mr 5, 27
  05ef050  li 6, 1188
  05ef054  bl 0x5eb2e0
  05ef058  lwz 0, 280(31)
  05ef05c  cmpwi 7, 0, 0
  05ef060  bt 30, 0x5ef080
  05ef064  lwz 0, 464(31)
  05ef068  cmpwi 7, 0, 0
  05ef06c  bf 30, 0x5ef07c
  05ef070  lwz 29, 300(31)
  05ef074  cmpwi 7, 29, 0
  05ef078  bt 30, 0x5ef0d4
  05ef07c  addi 22, 22, -1
  05ef080  li 7, 1200
  05ef084  li 4, 0
  05ef088  mr 5, 23
  05ef08c  mr 6, 27
  05ef090  clrldi 3, 24, 32
  05ef094  bl 0x5eae28
  05ef098  lwz 4, -32520(2)
  05ef09c  mr 29, 3
  05ef0a0  addi 3, 30, 816
  05ef0a4  mr 5, 27
  05ef0a8  clrldi 3, 3, 32
  05ef0ac  li 6, 1202
  05ef0b0  bl 0x5eb2e0
  05ef0b4  mr 3, 28
  05ef0b8  mr 4, 26
  05ef0bc  mr 5, 27
  05ef0c0  li 6, 1205
  05ef0c4  bl 0x5eb2e0
  05ef0c8  cmpwi 7, 29, 0
  05ef0cc  bf 30, 0x5eefa0
  05ef0d0  b 0x5eed4c
  05ef0d4  lwz 9, 404(31)
  05ef0d8  addi 3, 30, 400
  05ef0dc  lwz 4, 12(31)
  05ef0e0  lwz 5, 392(31)
  05ef0e4  clrldi 3, 3, 32
  05ef0e8  addi 4, 4, -1
  05ef0ec  lwz 6, 232(31)
  05ef0f0  lwz 7, 284(31)
  05ef0f4  extsw 5, 5
  05ef0f8  lwz 0, 0(9)
  05ef0fc  clrldi 4, 4, 32
  05ef100  std 2, 40(1)
  05ef104  mtctr 0
  05ef108  lwz 2, 4(9)
  05ef10c  bctrl
  05ef110  ld 2, 40(1)
  05ef114  lwz 11, 464(31)
  05ef118  lwz 0, 392(31)
  05ef11c  cmpwi 7, 11, 0
  05ef120  lwz 9, 284(31)
  05ef124  stw 29, 280(31)
  05ef128  add 0, 0, 9
  05ef12c  stw 0, 1240(31)
  05ef130  bt 30, 0x5ef13c
  05ef134  li 0, 1
  05ef138  stw 0, 28(31)
  05ef13c  cmpwi 7, 3, 0
  05ef140  bt 30, 0x5ef07c
  05ef144  li 18, 1
  05ef148  stw 30, 1552(25)
  05ef14c  b 0x5ef07c
  05ef150  addi 3, 30, 816
  05ef154  lwz 5, -32520(2)
  05ef158  li 4, 0
  05ef15c  clrldi 3, 3, 32
  05ef160  mr 6, 27
  05ef164  li 7, 1178
  05ef168  bl 0x5eae28
  05ef16c  cmpwi 4, 3, 0
  05ef170  bf 18, 0x5eef5c
  05ef174  mr 3, 28
  05ef178  mr 4, 20
  05ef17c  mr 5, 27
  05ef180  li 6, 1180
  05ef184  bl 0x5eb2e0
  05ef188  b 0x5eef5c
  05ef18c  addi 3, 25, 1356
  05ef190  mr 4, 23
  05ef194  mr 5, 27
  05ef198  li 6, 1159
  05ef19c  li 22, 0
  05ef1a0  bl 0x5eb2e0
  05ef1a4  b 0x5eee88
  05ef1a8  mr 3, 31
  05ef1ac  mr 4, 23
  05ef1b0  mr 5, 27
  05ef1b4  li 6, 1222
  05ef1b8  bl 0x5eb0f8
  05ef1bc  lwz 29, 1552(25)
  05ef1c0  cmpwi 7, 29, 0
  05ef1c4  bt 30, 0x5ef1dc
  05ef1c8  clrldi 30, 29, 32
  05ef1cc  lwz 0, 32(30)
  05ef1d0  rlwinm 0, 0, 0, 4, 4
  05ef1d4  cmpwi 7, 0, 0
  05ef1d8  bt 30, 0x5ef4cc
  05ef1dc  addi 3, 25, 1356
  05ef1e0  mr 4, 23
  05ef1e4  mr 5, 27
  05ef1e8  li 6, 1245
  05ef1ec  bl 0x5eb2e0
  05ef1f0  cmpwi 7, 22, 0
  05ef1f4  bf 30, 0x5eefd8
  05ef1f8  addi 3, 25, 1356
  05ef1fc  lwz 28, 1552(25)
  05ef200  mr 4, 23
  05ef204  mr 5, 27
  05ef208  li 6, 1255
  05ef20c  bl 0x5eb0f8
  05ef210  lwz 3, 1552(25)
  05ef214  cmpwi 7, 3, 0
  05ef218  bt 30, 0x5ef3ec
  05ef21c  clrldi 31, 3, 32
  05ef220  lwz 0, 504(31)
  05ef224  cmpwi 7, 0, 0
  05ef228  bt 30, 0x5ef3ec
  05ef22c  lwz 0, 464(31)
  05ef230  cmpwi 7, 0, 0
  05ef234  bf 30, 0x5ef3ec
  05ef238  lwz 0, 300(31)
  05ef23c  cmpwi 7, 0, 0
  05ef240  bf 30, 0x5ef3ec
  05ef244  lwz 9, 424(31)
  05ef248  cmpwi 7, 9, 0
  05ef24c  bt 30, 0x5ef284
  05ef250  clrldi 9, 9, 32
  05ef254  addi 3, 3, 400
  05ef258  li 4, 0
  05ef25c  clrldi 3, 3, 32
  05ef260  lwz 0, 0(9)
  05ef264  std 2, 40(1)
  05ef268  mtctr 0
  05ef26c  lwz 2, 4(9)
  05ef270  bctrl
  05ef274  ld 2, 40(1)
  05ef278  clrlwi 3, 3, 31
  05ef27c  cmpwi 7, 3, 0
  05ef280  bf 30, 0x5ef3ec
  05ef284  lwz 9, 508(31)
  05ef288  li 26, 128
  05ef28c  lwz 0, 504(31)
  05ef290  cmplw 7, 9, 0
  05ef294  bf 28, 0x5ef2a8
  05ef298  lwz 0, 508(31)
  05ef29c  lwz 9, 504(31)
  05ef2a0  slwi 0, 0, 7
  05ef2a4  divwu 26, 0, 9
  05ef2a8  lwz 30, 1516(25)
  05ef2ac  li 29, 129
  05ef2b0  cmpwi 7, 30, 0
  05ef2b4  bf 30, 0x5ef374
  05ef2b8  b 0x5ef38c
  05ef2bc  lwz 0, 464(31)
  05ef2c0  cmpwi 7, 0, 0
  05ef2c4  bf 30, 0x5ef384
  05ef2c8  lwz 0, 300(31)
  05ef2cc  cmpwi 7, 0, 0
  05ef2d0  bf 30, 0x5ef384
  05ef2d4  lwz 9, 424(31)
  05ef2d8  cmpwi 7, 9, 0
  05ef2dc  bt 30, 0x5ef314
  05ef2e0  clrldi 9, 9, 32
  05ef2e4  addi 3, 30, 400
  05ef2e8  li 4, 0
  05ef2ec  clrldi 3, 3, 32
  05ef2f0  lwz 0, 0(9)
  05ef2f4  std 2, 40(1)
  05ef2f8  mtctr 0
  05ef2fc  lwz 2, 4(9)
  05ef300  bctrl
  05ef304  ld 2, 40(1)
  05ef308  clrlwi 3, 3, 31
  05ef30c  cmpwi 7, 3, 0
  05ef310  bf 30, 0x5ef384
  05ef314  lwz 9, 508(31)
  05ef318  li 11, 128
  05ef31c  lwz 0, 504(31)
  05ef320  cmplw 7, 9, 0
  05ef324  bf 28, 0x5ef338
  05ef328  lwz 0, 508(31)
  05ef32c  lwz 9, 504(31)
  05ef330  slwi 0, 0, 7
  05ef334  divwu 11, 0, 9
  05ef338  cmpw 7, 29, 11
  05ef33c  bf 29, 0x5ef368
  05ef340  lwz 0, 32(31)
  05ef344  rlwinm 0, 0, 0, 4, 4
  05ef348  cmpwi 7, 0, 0
  05ef34c  bf 30, 0x5ef368
  05ef350  lwz 0, 280(31)
  05ef354  cmpwi 7, 0, 0
  05ef358  bf 30, 0x5ef368
  05ef35c  mr 29, 11
  05ef360  mr 28, 30
  05ef364  nop
  05ef368  lwz 30, 228(31)
  05ef36c  cmpwi 7, 30, 0
  05ef370  bt 30, 0x5ef38c
  05ef374  clrldi 31, 30, 32
  05ef378  lwz 0, 504(31)
  05ef37c  cmpwi 7, 0, 0
  05ef380  bf 30, 0x5ef2bc
  05ef384  li 11, 129
  05ef388  b 0x5ef338
  05ef38c  cmpwi 7, 26, 102
  05ef390  bf 29, 0x5ef39c
  05ef394  cmpwi 7, 29, 24
  05ef398  bf 29, 0x5ef3b4
  05ef39c  cmpwi 7, 26, 121
  05ef3a0  bf 29, 0x5ef3ac
  05ef3a4  cmpwi 7, 29, 63
  05ef3a8  bf 29, 0x5ef3b4
  05ef3ac  cmpwi 7, 29, 11
  05ef3b0  bt 29, 0x5ef3d4
  05ef3b4  cmpwi 7, 28, 0
  05ef3b8  stw 28, 1552(25)
  05ef3bc  bt 30, 0x5ef3d4
  05ef3c0  clrldi 31, 28, 32
  05ef3c4  lwz 0, 32(31)
  05ef3c8  rlwinm 0, 0, 0, 4, 4
  05ef3cc  cmpwi 7, 0, 0
  05ef3d0  bt 30, 0x5ef5c4
  05ef3d4  mr 4, 23
  05ef3d8  mr 5, 27
  05ef3dc  addi 3, 25, 1356
  05ef3e0  li 6, 1301
  05ef3e4  bl 0x5eb2e0
  05ef3e8  b 0x5eefd8
  05ef3ec  li 26, 129
  05ef3f0  b 0x5ef2a8
  05ef3f4  lwz 0, 280(31)
  05ef3f8  li 22, 1
  05ef3fc  cmpwi 7, 0, 0
  05ef400  bt 30, 0x5ef420
  05ef404  lwz 0, 464(31)
  05ef408  cmpwi 7, 0, 0
  05ef40c  bf 30, 0x5ef41c
  05ef410  lwz 28, 300(31)
  05ef414  cmpwi 7, 28, 0
  05ef418  bt 30, 0x5ef450
  05ef41c  li 22, 0
  05ef420  addi 3, 30, 816
  05ef424  lwz 4, -32520(2)
  05ef428  mr 5, 27
  05ef42c  clrldi 3, 3, 32
  05ef430  li 6, 1150
  05ef434  bl 0x5eb2e0
  05ef438  mr 3, 29
  05ef43c  mr 4, 26
  05ef440  mr 5, 27
  05ef444  li 6, 1153
  05ef448  bl 0x5eb2e0
  05ef44c  b 0x5eee88
  05ef450  lwz 9, 404(31)
  05ef454  addi 3, 30, 400
  05ef458  lwz 4, 12(31)
  05ef45c  lwz 5, 392(31)
  05ef460  clrldi 3, 3, 32
  05ef464  addi 4, 4, -1
  05ef468  lwz 6, 232(31)
  05ef46c  lwz 7, 284(31)
  05ef470  extsw 5, 5
  05ef474  lwz 0, 0(9)
  05ef478  clrldi 4, 4, 32
  05ef47c  std 2, 40(1)
  05ef480  mtctr 0
  05ef484  lwz 2, 4(9)
  05ef488  bctrl
  05ef48c  ld 2, 40(1)
  05ef490  lwz 11, 464(31)
  05ef494  lwz 0, 392(31)
  05ef498  cmpwi 7, 11, 0
  05ef49c  lwz 9, 284(31)
  05ef4a0  stw 28, 280(31)
  05ef4a4  add 0, 0, 9
  05ef4a8  stw 0, 1240(31)
  05ef4ac  bt 30, 0x5ef4b8
  05ef4b0  li 0, 1
  05ef4b4  stw 0, 28(31)
  05ef4b8  cmpwi 7, 3, 0
  05ef4bc  bt 30, 0x5ef41c
  05ef4c0  li 18, 1
  05ef4c4  li 22, 0
  05ef4c8  b 0x5ef420
  05ef4cc  addi 0, 29, 816
  05ef4d0  lwz 26, -32520(2)
  05ef4d4  li 4, 0
  05ef4d8  clrldi 28, 0, 32
  05ef4dc  mr 5, 26
  05ef4e0  mr 3, 28
  05ef4e4  mr 6, 27
  05ef4e8  li 7, 1226
  05ef4ec  bl 0x5eae28
  05ef4f0  cmpwi 7, 3, 0
  05ef4f4  bt 30, 0x5ef1dc
  05ef4f8  mr 3, 31
  05ef4fc  mr 4, 23
  05ef500  mr 5, 27
  05ef504  li 6, 1229
  05ef508  bl 0x5eb2e0
  05ef50c  lwz 0, 280(30)
  05ef510  cmpwi 7, 0, 0
  05ef514  bf 30, 0x5ef690
  05ef518  lwz 0, 464(30)
  05ef51c  cmpwi 7, 0, 0
  05ef520  bf 30, 0x5ef570
  05ef524  lwz 0, 300(30)
  05ef528  cmpwi 7, 0, 0
  05ef52c  bf 30, 0x5ef570
  05ef530  lwz 9, 424(30)
  05ef534  cmpwi 7, 9, 0
  05ef538  bt 30, 0x5ef6a8
  05ef53c  clrldi 9, 9, 32
  05ef540  addi 3, 29, 400
  05ef544  li 4, 0
  05ef548  clrldi 3, 3, 32
  05ef54c  lwz 0, 0(9)
  05ef550  std 2, 40(1)
  05ef554  mtctr 0
  05ef558  lwz 2, 4(9)
  05ef55c  bctrl
  05ef560  ld 2, 40(1)
  05ef564  clrlwi 3, 3, 31
  05ef568  cmpwi 7, 3, 0
  05ef56c  bt 30, 0x5ef6a8
  05ef570  mr 3, 28
  05ef574  mr 4, 26
  05ef578  mr 5, 27
  05ef57c  li 6, 1235
  05ef580  bl 0x5eb2e0
  05ef584  b 0x5eefd0
  05ef588  addi 3, 30, 816
  05ef58c  lwz 5, -32520(2)
  05ef590  li 4, 0
  05ef594  clrldi 3, 3, 32
  05ef598  mr 6, 27
  05ef59c  li 7, 1129
  05ef5a0  bl 0x5eae28
  05ef5a4  cmpwi 4, 3, 0
  05ef5a8  bf 18, 0x5eee2c
  05ef5ac  mr 3, 29
  05ef5b0  mr 4, 26
  05ef5b4  mr 5, 27
  05ef5b8  li 6, 1131
  05ef5bc  bl 0x5eb2e0
  05ef5c0  b 0x5eee2c
  05ef5c4  addi 0, 28, 816
  05ef5c8  lwz 30, -32520(2)
  05ef5cc  li 4, 0
  05ef5d0  clrldi 29, 0, 32
  05ef5d4  mr 5, 30
  05ef5d8  mr 3, 29
  05ef5dc  mr 6, 27
  05ef5e0  li 7, 1282
  05ef5e4  mr 26, 30
  05ef5e8  bl 0x5eae28
  05ef5ec  cmpwi 7, 3, 0
  05ef5f0  bt 30, 0x5ef3d4
  05ef5f4  mr 4, 23
  05ef5f8  addi 3, 25, 1356
  05ef5fc  mr 5, 27
  05ef600  li 6, 1285
  05ef604  bl 0x5eb2e0
  05ef608  lwz 0, 280(31)
  05ef60c  cmpwi 7, 0, 0
  05ef610  bf 30, 0x5ef6f0
  05ef614  lwz 0, 464(31)
  05ef618  cmpwi 7, 0, 0
  05ef61c  bf 30, 0x5ef678
  05ef620  lwz 0, 300(31)
  05ef624  cmpwi 7, 0, 0
  05ef628  bf 30, 0x5ef678
  05ef62c  lwz 9, 424(31)
  05ef630  cmpwi 7, 9, 0
  05ef634  bt 30, 0x5ef66c
  05ef638  clrldi 9, 9, 32
  05ef63c  addi 3, 28, 400
  05ef640  li 4, 0
  05ef644  clrldi 3, 3, 32
  05ef648  lwz 0, 0(9)
  05ef64c  std 2, 40(1)
  05ef650  mtctr 0
  05ef654  lwz 2, 4(9)
  05ef658  bctrl
  05ef65c  ld 2, 40(1)
  05ef660  clrlwi 3, 3, 31
  05ef664  cmpwi 7, 3, 0
  05ef668  bf 30, 0x5ef678
  05ef66c  lwz 0, 380(31)
  05ef670  cmpwi 7, 0, 0
  05ef674  bt 30, 0x5ef708
  05ef678  mr 3, 29
  05ef67c  mr 4, 26
  05ef680  mr 5, 27
  05ef684  li 6, 1290
  05ef688  bl 0x5eb2e0
  05ef68c  b 0x5eefd8
  05ef690  mr 3, 28
  05ef694  mr 4, 26
  05ef698  mr 5, 27
  05ef69c  li 6, 1239
  05ef6a0  bl 0x5eb2e0
  05ef6a4  b 0x5eed4c
  05ef6a8  lwz 0, 380(30)
  05ef6ac  cmpwi 7, 0, 0
  05ef6b0  bf 30, 0x5ef570
  05ef6b4  lwz 9, 416(30)
  05ef6b8  addi 3, 29, 400
  05ef6bc  clrldi 3, 3, 32
  05ef6c0  lwz 0, 0(9)
  05ef6c4  std 2, 40(1)
  05ef6c8  mtctr 0
  05ef6cc  lwz 2, 4(9)
  05ef6d0  bctrl
  05ef6d4  ld 2, 40(1)
  05ef6d8  cmpwi 7, 3, 0
  05ef6dc  bt 30, 0x5ef570
  05ef6e0  li 18, 1
  05ef6e4  b 0x5ef570
  05ef6e8  lwz 25, -32540(2)
  05ef6ec  b 0x5eeca0
  05ef6f0  mr 3, 29
  05ef6f4  mr 4, 30
  05ef6f8  mr 5, 27
  05ef6fc  li 6, 1294
  05ef700  bl 0x5eb2e0
  05ef704  b 0x5eed4c
  05ef708  lwz 9, 416(31)
  05ef70c  addi 3, 28, 400
  05ef710  clrldi 3, 3, 32
  05ef714  lwz 0, 0(9)
  05ef718  std 2, 40(1)
  05ef71c  mtctr 0
  05ef720  lwz 2, 4(9)
  05ef724  bctrl
  05ef728  ld 2, 40(1)
  05ef72c  cmpwi 7, 3, 0
  05ef730  bt 30, 0x5ef678
  05ef734  li 18, 1
  05ef738  b 0x5ef678

FUN_005ef740:   # 0x5ef740, 0x1ac bytes
  05ef740  cmpdi 3, 0
  05ef744  mflr 0
  05ef748  stdu 1, -128(1)
  05ef74c  std 31, 120(1)
  05ef750  std 30, 112(1)
  05ef754  std 0, 144(1)
  05ef758  mr 31, 3
  05ef75c  bt 2, 0x5ef7dc
  05ef760  lwz 0, 28(3)
  05ef764  cmpwi 7, 0, 0
  05ef768  bf 30, 0x5ef7dc
  05ef76c  lwz 0, 264(3)
  05ef770  cmpwi 7, 0, 0
  05ef774  bf 30, 0x5ef7dc
  05ef778  lwz 0, 292(3)
  05ef77c  cmpwi 7, 0, 0
  05ef780  bt 30, 0x5ef7dc
  05ef784  lwz 0, 272(3)
  05ef788  cmpwi 7, 0, 0
  05ef78c  bt 30, 0x5ef7dc
  05ef790  lwz 9, 12(3)
  05ef794  lwz 0, 8(3)
  05ef798  addi 9, 9, 2
  05ef79c  cmplw 7, 9, 0
  05ef7a0  bf 28, 0x5ef7dc
  05ef7a4  lwz 30, 1212(3)
  05ef7a8  cmpwi 7, 30, 0
  05ef7ac  addi 3, 30, -1
  05ef7b0  bf 30, 0x5ef7e0
  05ef7b4  lwz 0, 1140(31)
  05ef7b8  cmpwi 7, 0, 0
  05ef7bc  bt 30, 0x5ef87c
  05ef7c0  lwz 0, 20(31)
  05ef7c4  cmpwi 7, 0, 0
  05ef7c8  bf 30, 0x5ef7fc
  05ef7cc  li 0, 1
  05ef7d0  li 3, 0
  05ef7d4  stw 0, 1212(31)
  05ef7d8  b 0x5ef7e0
  05ef7dc  li 3, 0
  05ef7e0  ld 0, 144(1)
  05ef7e4  extsw 3, 3
  05ef7e8  ld 30, 112(1)
  05ef7ec  ld 31, 120(1)
  05ef7f0  mtlr 0
  05ef7f4  addi 1, 1, 128
  05ef7f8  blr
  05ef7fc  bl 0x5f5090
  05ef800  nop
  05ef804  lwz 11, 24(31)
  05ef808  lwz 6, 1120(31)
  05ef80c  lwz 0, 1144(31)
  05ef810  lwz 7, 20(31)
  05ef814  sub 0, 6, 0
  05ef818  lwz 10, 340(31)
  05ef81c  lwz 9, 1140(31)
  05ef820  clrldi 0, 0, 32
  05ef824  sub 9, 3, 9
  05ef828  mulli 11, 11, 1000
  05ef82c  lwz 8, 60(10)
  05ef830  mulld 0, 0, 11
  05ef834  divdu 0, 0, 7
  05ef838  clrldi 0, 0, 32
  05ef83c  mulld 0, 0, 8
  05ef840  rldicl 0, 0, 48, 16
  05ef844  sub 9, 9, 0
  05ef848  cmpwi 7, 9, 0
  05ef84c  bt 28, 0x5ef7cc
  05ef850  lwz 0, 1148(31)
  05ef854  cmpw 7, 0, 9
  05ef858  bf 28, 0x5ef7cc
  05ef85c  lwz 0, 292(31)
  05ef860  cmpwi 7, 0, 0
  05ef864  bf 30, 0x5ef89c
  05ef868  addi 0, 6, -1
  05ef86c  stw 3, 1140(31)
  05ef870  stw 0, 1144(31)
  05ef874  stw 30, 1228(31)
  05ef878  b 0x5ef7cc
  05ef87c  bl 0x5f5090
  05ef880  nop
  05ef884  lwz 9, 1120(31)
  05ef888  addi 9, 9, -1
  05ef88c  stw 3, 1140(31)
  05ef890  stw 30, 1228(31)
  05ef894  stw 9, 1144(31)
  05ef898  b 0x5ef7c0
  05ef89c  cmpwi 7, 9, 725
  05ef8a0  bf 29, 0x5ef8ac
  05ef8a4  li 0, 1
  05ef8a8  stw 0, 1216(31)
  05ef8ac  lwz 11, 1224(31)
  05ef8b0  cmplwi 7, 11, 3
  05ef8b4  bf 29, 0x5ef8c0
  05ef8b8  stw 30, 1224(31)
  05ef8bc  b 0x5ef7cc
  05ef8c0  lwz 9, 1220(31)
  05ef8c4  addi 11, 11, 1
  05ef8c8  li 0, 2
  05ef8cc  addi 9, 9, 1
  05ef8d0  li 3, 1
  05ef8d4  stw 9, 1220(31)
  05ef8d8  li 9, 1
  05ef8dc  stw 11, 1224(31)
  05ef8e0  stw 0, 1212(31)
  05ef8e4  stw 9, 268(31)
  05ef8e8  b 0x5ef7e0

FUN_005ef8f0:   # 0x5ef8f0, 0x1e4 bytes
  05ef8f0  stdu 1, -144(1)
  05ef8f4  mflr 0
  05ef8f8  std 29, 120(1)
  05ef8fc  lwz 29, -32540(2)
  05ef900  std 31, 136(1)
  05ef904  std 30, 128(1)
  05ef908  std 0, 160(1)
  05ef90c  li 31, 0
  05ef910  lwz 0, 1352(29)
  05ef914  cmpwi 7, 0, 0
  05ef918  bf 30, 0x5efa88
  05ef91c  lwz 0, 1344(29)
  05ef920  cmpwi 7, 0, 0
  05ef924  bt 30, 0x5efa80
  05ef928  cmpwi 7, 31, 0
  05ef92c  bt 30, 0x5ef93c
  05ef930  lwz 0, 1352(29)
  05ef934  cmpwi 7, 0, 0
  05ef938  bf 30, 0x5efabc
  05ef93c  lwz 0, 1352(29)
  05ef940  li 31, 0
  05ef944  cmpwi 7, 0, 0
  05ef948  bf 30, 0x5efa64
  05ef94c  lwz 0, 1144(29)
  05ef950  cmpwi 7, 0, 0
  05ef954  bt 30, 0x5efa5c
  05ef958  cmpwi 7, 31, 0
  05ef95c  bt 30, 0x5ef96c
  05ef960  lwz 0, 1352(29)
  05ef964  cmpwi 7, 0, 0
  05ef968  bf 30, 0x5efaa4
  05ef96c  lwz 30, -32392(2)
  05ef970  li 31, 0
  05ef974  nop
  05ef978  li 4, 1
  05ef97c  mr 3, 30
  05ef980  bl 0x5fbef8
  05ef984  nop
  05ef988  li 4, -1
  05ef98c  cmpwi 7, 3, 0
  05ef990  mr 3, 30
  05ef994  bt 30, 0x5ef9ec
  05ef998  bl 0x5fbef8
  05ef99c  nop
  05ef9a0  bl 0x5fbfc8
  05ef9a4  nop
  05ef9a8  cmpwi 7, 31, 511
  05ef9ac  addi 31, 31, 1
  05ef9b0  cmplwi 6, 31, 1023
  05ef9b4  bt 30, 0x5efa50
  05ef9b8  li 3, 1
  05ef9bc  bf 25, 0x5ef978
  05ef9c0  bl 0x5fbf74
  05ef9c4  nop
  05ef9c8  li 4, 1
  05ef9cc  mr 3, 30
  05ef9d0  li 31, 0
  05ef9d4  bl 0x5fbef8
  05ef9d8  nop
  05ef9dc  li 4, -1
  05ef9e0  cmpwi 7, 3, 0
  05ef9e4  mr 3, 30
  05ef9e8  bf 30, 0x5ef998
  05ef9ec  lwz 0, 1352(29)
  05ef9f0  cmpwi 7, 0, 0
  05ef9f4  bt 30, 0x5efa24
  05ef9f8  addi 3, 29, 1356
  05ef9fc  bl 0x5fc490
  05efa00  nop
  05efa04  addi 3, 29, 1012
  05efa08  bl 0x5fc490
  05efa0c  nop
  05efa10  addi 3, 29, 1148
  05efa14  bl 0x5fc490
  05efa18  nop
  05efa1c  li 0, 0
  05efa20  stw 0, 1352(29)
  05efa24  addi 3, 29, 1348
  05efa28  li 4, -1
  05efa2c  bl 0x5fbef8
  05efa30  nop
  05efa34  ld 0, 160(1)
  05efa38  ld 29, 120(1)
  05efa3c  ld 30, 128(1)
  05efa40  mtlr 0
  05efa44  ld 31, 136(1)
  05efa48  addi 1, 1, 144
  05efa4c  blr
  05efa50  bl 0x5fbfac
  05efa54  nop
  05efa58  b 0x5ef978
  05efa5c  bl 0x5ec0e0
  05efa60  b 0x5ef958
  05efa64  addi 3, 29, 1012
  05efa68  lwz 4, -32492(2)
  05efa6c  lwz 5, -32516(2)
  05efa70  li 6, 3278
  05efa74  li 31, 1
  05efa78  bl 0x5eb0f8
  05efa7c  b 0x5ef94c
  05efa80  bl 0x5ec1d4
  05efa84  b 0x5ef928
  05efa88  addi 3, 29, 1148
  05efa8c  lwz 4, -32488(2)
  05efa90  lwz 5, -32516(2)
  05efa94  li 6, 3261
  05efa98  li 31, 1
  05efa9c  bl 0x5eb0f8
  05efaa0  b 0x5ef91c
  05efaa4  addi 3, 29, 1012
  05efaa8  lwz 4, -32492(2)
  05efaac  lwz 5, -32516(2)
  05efab0  li 6, 3285
  05efab4  bl 0x5eb2e0
  05efab8  b 0x5ef96c
  05efabc  addi 3, 29, 1148
  05efac0  lwz 4, -32488(2)
  05efac4  lwz 5, -32516(2)
  05efac8  li 6, 3268
  05efacc  bl 0x5eb2e0
  05efad0  b 0x5ef93c

FUN_005efad8:   # 0x5efad8, 0x3d4 bytes
  05efad8  mfcr 12
  05efadc  cmpwi 7, 3, 0
  05efae0  stdu 1, -192(1)
  05efae4  std 25, 136(1)
  05efae8  std 26, 144(1)
  05efaec  std 31, 184(1)
  05efaf0  std 23, 120(1)
  05efaf4  std 24, 128(1)
  05efaf8  std 27, 152(1)
  05efafc  std 28, 160(1)
  05efb00  std 29, 168(1)
  05efb04  std 30, 176(1)
  05efb08  mr 31, 3
  05efb0c  mr 26, 4
  05efb10  mr 25, 3
  05efb14  stw 12, 200(1)
  05efb18  mflr 0
  05efb1c  std 0, 208(1)
  05efb20  bt 30, 0x5efe68
  05efb24  lwz 10, 292(3)
  05efb28  cmpwi 7, 10, 0
  05efb2c  bt 30, 0x5efe68
  05efb30  li 24, 0
  05efb34  li 23, 0
  05efb38  li 27, 0
  05efb3c  li 28, 0
  05efb40  cmpwi 4, 24, 0
  05efb44  nop
  05efb48  lwz 11, 340(31)
  05efb4c  add 9, 11, 28
  05efb50  clrldi 9, 9, 32
  05efb54  lwz 0, 372(9)
  05efb58  cmpwi 7, 0, 0
  05efb5c  bt 30, 0x5efc68
  05efb60  bf 18, 0x5efb80
  05efb64  clrldi 9, 11, 32
  05efb68  lwz 0, 76(9)
  05efb6c  cmpwi 7, 0, 0
  05efb70  bf 29, 0x5efd48
  05efb74  cmpwi 7, 0, 2
  05efb78  bt 30, 0x5efd4c
  05efb7c  nop
  05efb80  add 9, 28, 11
  05efb84  srawi 0, 26, 31
  05efb88  clrldi 9, 9, 32
  05efb8c  xor 4, 0, 26
  05efb90  mr 3, 9
  05efb94  sub 4, 0, 4
  05efb98  lwz 11, 372(9)
  05efb9c  srwi 4, 4, 31
  05efba0  extsw 4, 4
  05efba4  lwz 0, 0(11)
  05efba8  std 2, 40(1)
  05efbac  mtctr 0
  05efbb0  lwz 2, 4(11)
  05efbb4  bctrl
  05efbb8  ld 2, 40(1)
  05efbbc  cmpwi 7, 3, 0
  05efbc0  bf 30, 0x5efcdc
  05efbc4  lwz 0, 272(31)
  05efbc8  cmpwi 7, 0, 0
  05efbcc  bt 30, 0x5efd30
  05efbd0  lwz 9, 340(31)
  05efbd4  add 9, 28, 9
  05efbd8  clrldi 9, 9, 32
  05efbdc  lwz 0, 12(9)
  05efbe0  stw 0, 0(9)
  05efbe4  lwz 11, 340(31)
  05efbe8  add 11, 28, 11
  05efbec  clrldi 11, 11, 32
  05efbf0  lwz 0, 12(11)
  05efbf4  stw 0, 24(11)
  05efbf8  lwz 9, 12(31)
  05efbfc  cmpwi 7, 9, 1
  05efc00  bt 30, 0x5efdc0
  05efc04  lwz 0, 340(31)
  05efc08  add 0, 28, 0
  05efc0c  clrldi 30, 0, 32
  05efc10  lwz 3, 24(30)
  05efc14  lwz 0, 0(30)
  05efc18  sub 5, 0, 3
  05efc1c  cmpwi 7, 5, 0
  05efc20  bt 28, 0x5efddc
  05efc24  lwz 0, 72(30)
  05efc28  cmpw 7, 5, 0
  05efc2c  bf 28, 0x5efc5c
  05efc30  sub 5, 0, 5
  05efc34  lwz 9, 12(30)
  05efc38  sub 3, 3, 5
  05efc3c  cmplw 7, 3, 9
  05efc40  stw 3, 24(30)
  05efc44  bt 28, 0x5efd74
  05efc48  clrldi 3, 3, 32
  05efc4c  clrldi 5, 5, 32
  05efc50  li 4, 0
  05efc54  bl 0x5d0140
  05efc58  nop
  05efc5c  li 0, 0
  05efc60  lwz 10, 292(31)
  05efc64  stw 0, 272(31)
  05efc68  addi 27, 27, 1
  05efc6c  addi 28, 28, 384
  05efc70  cmplw 7, 10, 27
  05efc74  bt 29, 0x5efb48
  05efc78  bt 18, 0x5efc9c
  05efc7c  cmpwi 7, 23, 1
  05efc80  bt 30, 0x5efde8
  05efc84  addi 3, 25, 944
  05efc88  lwz 5, -32516(2)
  05efc8c  lwz 4, -32496(2)
  05efc90  li 6, 4460
  05efc94  clrldi 3, 3, 32
  05efc98  bl 0x5eb2e0
  05efc9c  ld 0, 208(1)
  05efca0  extsw 3, 24
  05efca4  lwz 12, 200(1)
  05efca8  ld 23, 120(1)
  05efcac  mtlr 0
  05efcb0  ld 24, 128(1)
  05efcb4  mtocrf 8, 12
  05efcb8  ld 25, 136(1)
  05efcbc  ld 26, 144(1)
  05efcc0  ld 27, 152(1)
  05efcc4  ld 28, 160(1)
  05efcc8  ld 29, 168(1)
  05efccc  ld 30, 176(1)
  05efcd0  ld 31, 184(1)
  05efcd4  addi 1, 1, 192
  05efcd8  blr
  05efcdc  lwz 9, 272(31)
  05efce0  cmpwi 7, 9, 0
  05efce4  bt 30, 0x5efd04
  05efce8  lwz 10, 292(31)
  05efcec  addi 27, 27, 1
  05efcf0  li 24, 1
  05efcf4  cmplw 7, 10, 27
  05efcf8  addi 28, 28, 384
  05efcfc  bt 29, 0x5efb48
  05efd00  b 0x5efc78
  05efd04  lwz 10, 292(31)
  05efd08  addi 27, 27, 1
  05efd0c  li 0, 1
  05efd10  cmplw 7, 10, 27
  05efd14  li 24, 1
  05efd18  stw 0, 272(31)
  05efd1c  stw 9, 1228(31)
  05efd20  stw 9, 1140(31)
  05efd24  addi 28, 28, 384
  05efd28  bt 29, 0x5efb48
  05efd2c  b 0x5efc78
  05efd30  lwz 10, 292(31)
  05efd34  addi 27, 27, 1
  05efd38  addi 28, 28, 384
  05efd3c  cmplw 7, 10, 27
  05efd40  bt 29, 0x5efb48
  05efd44  b 0x5efc78
  05efd48  bt 28, 0x5efe40
  05efd4c  addi 3, 25, 944
  05efd50  lwz 4, -32496(2)
  05efd54  li 23, 2
  05efd58  lwz 5, -32516(2)
  05efd5c  clrldi 3, 3, 32
  05efd60  li 6, 4417
  05efd64  cmpwi 4, 23, 0
  05efd68  bl 0x5eb0f8
  05efd6c  lwz 11, 340(31)
  05efd70  b 0x5efb80
  05efd74  sub 29, 9, 3
  05efd78  lwz 0, 8(30)
  05efd7c  li 4, 0
  05efd80  sub 5, 5, 29
  05efd84  add 0, 3, 0
  05efd88  clrldi 5, 5, 32
  05efd8c  clrldi 3, 9, 32
  05efd90  stw 0, 24(30)
  05efd94  bl 0x5d0140
  05efd98  nop
  05efd9c  lwz 3, 24(30)
  05efda0  clrldi 5, 29, 32
  05efda4  li 4, 0
  05efda8  bl 0x5d0140
  05efdac  nop
  05efdb0  li 0, 0
  05efdb4  lwz 10, 292(31)
  05efdb8  stw 0, 272(31)
  05efdbc  b 0x5efc68
  05efdc0  lwz 0, 1196(31)
  05efdc4  cmpwi 7, 0, 1
  05efdc8  bt 30, 0x5efc04
  05efdcc  li 0, 0
  05efdd0  lwz 10, 292(31)
  05efdd4  stw 0, 272(31)
  05efdd8  b 0x5efc68
  05efddc  lwz 0, 8(30)
  05efde0  add 5, 5, 0
  05efde4  b 0x5efc24
  05efde8  lwz 3, -32540(2)
  05efdec  li 6, 4456
  05efdf0  lwz 5, -32516(2)
  05efdf4  addi 3, 3, 1148
  05efdf8  lwz 4, -32488(2)
  05efdfc  bl 0x5eb2e0
  05efe00  ld 0, 208(1)
  05efe04  lwz 12, 200(1)
  05efe08  extsw 3, 24
  05efe0c  ld 23, 120(1)
  05efe10  mtlr 0
  05efe14  ld 24, 128(1)
  05efe18  mtocrf 8, 12
  05efe1c  ld 25, 136(1)
  05efe20  ld 26, 144(1)
  05efe24  ld 27, 152(1)
  05efe28  ld 28, 160(1)
  05efe2c  ld 29, 168(1)
  05efe30  ld 30, 176(1)
  05efe34  ld 31, 184(1)
  05efe38  addi 1, 1, 192
  05efe3c  blr
  05efe40  lwz 3, -32540(2)
  05efe44  li 23, 1
  05efe48  lwz 4, -32488(2)
  05efe4c  li 6, 4412
  05efe50  addi 3, 3, 1148
  05efe54  lwz 5, -32516(2)
  05efe58  cmpwi 4, 23, 0
  05efe5c  bl 0x5eb0f8
  05efe60  lwz 11, 340(31)
  05efe64  b 0x5efb80
  05efe68  li 24, 0
  05efe6c  ld 0, 208(1)
  05efe70  lwz 12, 200(1)
  05efe74  extsw 3, 24
  05efe78  ld 23, 120(1)
  05efe7c  ld 24, 128(1)
  05efe80  mtlr 0
  05efe84  ld 25, 136(1)
  05efe88  mtocrf 8, 12
  05efe8c  ld 26, 144(1)
  05efe90  ld 27, 152(1)
  05efe94  ld 28, 160(1)
  05efe98  ld 29, 168(1)
  05efe9c  ld 30, 176(1)
  05efea0  ld 31, 184(1)
  05efea4  addi 1, 1, 192
  05efea8  blr

FUN_005efeb0:   # 0x5efeb0, 0x324 bytes
  05efeb0  cmpwi 7, 3, 0
  05efeb4  mflr 0
  05efeb8  stdu 1, -144(1)
  05efebc  std 29, 120(1)
  05efec0  std 31, 136(1)
  05efec4  std 30, 128(1)
  05efec8  std 0, 160(1)
  05efecc  mr 31, 3
  05efed0  mr 29, 3
  05efed4  bt 30, 0x5eff94
  05efed8  lwz 0, 256(3)
  05efedc  cmpwi 7, 0, 0
  05efee0  bf 30, 0x5eff94
  05efee4  lwz 0, 260(3)
  05efee8  cmpwi 7, 0, 0
  05efeec  bf 30, 0x5eff94
  05efef0  lwz 11, 292(3)
  05efef4  clrldi 30, 3, 32
  05efef8  cmpwi 7, 11, 0
  05efefc  bt 30, 0x5eff10
  05eff00  lwz 0, 20(3)
  05eff04  cmpwi 7, 0, 0
  05eff08  bf 30, 0x5effb0
  05eff0c  nop
  05eff10  cmpwi 7, 11, 0
  05eff14  li 0, 1
  05eff18  stw 0, 476(31)
  05eff1c  bt 30, 0x5eff30
  05eff20  lwz 9, 340(31)
  05eff24  lwz 0, 76(9)
  05eff28  cmpwi 7, 0, 1
  05eff2c  bt 30, 0x5f0100
  05eff30  bl 0x5f5090
  05eff34  nop
  05eff38  li 9, -3
  05eff3c  mr 11, 3
  05eff40  lwz 3, 1136(31)
  05eff44  addi 0, 3, -1
  05eff48  cmplw 7, 0, 9
  05eff4c  bt 29, 0x5eff68
  05eff50  sub 0, 11, 3
  05eff54  lwz 9, 1176(31)
  05eff58  li 11, 0
  05eff5c  add 9, 9, 0
  05eff60  stw 11, 1136(31)
  05eff64  stw 9, 1176(31)
  05eff68  lwz 9, 12(31)
  05eff6c  li 4, 1
  05eff70  lwz 0, 8(31)
  05eff74  cmplw 7, 0, 9
  05eff78  bf 29, 0x5eff80
  05eff7c  addi 4, 9, 1
  05eff80  mr 3, 30
  05eff84  clrldi 4, 4, 32
  05eff88  bl 0x5eda28
  05eff8c  li 0, 0
  05eff90  stw 0, 476(31)
  05eff94  ld 0, 160(1)
  05eff98  ld 29, 120(1)
  05eff9c  ld 30, 128(1)
  05effa0  mtlr 0
  05effa4  ld 31, 136(1)
  05effa8  addi 1, 1, 144
  05effac  blr
  05effb0  lwz 0, 264(3)
  05effb4  cmpwi 7, 0, 0
  05effb8  bf 30, 0x5eff10
  05effbc  lwz 0, 272(3)
  05effc0  cmpwi 7, 0, 0
  05effc4  bt 30, 0x5eff10
  05effc8  lwz 30, 1212(3)
  05effcc  cmpwi 7, 30, 0
  05effd0  bf 30, 0x5f0064
  05effd4  lwz 0, 1140(3)
  05effd8  cmpwi 7, 0, 0
  05effdc  bt 30, 0x5f015c
  05effe0  bl 0x5f5090
  05effe4  nop
  05effe8  lwz 11, 24(31)
  05effec  lwz 6, 1120(31)
  05efff0  lwz 0, 1144(31)
  05efff4  lwz 7, 20(31)
  05efff8  sub 0, 6, 0
  05efffc  lwz 10, 340(31)
  05f0000  lwz 9, 1140(31)
  05f0004  clrldi 0, 0, 32
  05f0008  sub 9, 3, 9
  05f000c  mulli 11, 11, 1000
  05f0010  lwz 8, 60(10)
  05f0014  mulld 0, 0, 11
  05f0018  divdu 0, 0, 7
  05f001c  clrldi 0, 0, 32
  05f0020  mulld 0, 0, 8
  05f0024  rldicl 0, 0, 48, 16
  05f0028  sub 9, 9, 0
  05f002c  cmpwi 7, 9, 0
  05f0030  bt 28, 0x5f005c
  05f0034  lwz 0, 1148(31)
  05f0038  cmpw 7, 0, 9
  05f003c  bf 28, 0x5f005c
  05f0040  lwz 0, 292(31)
  05f0044  cmpwi 7, 0, 0
  05f0048  bf 30, 0x5f0188
  05f004c  addi 0, 6, -1
  05f0050  stw 3, 1140(31)
  05f0054  stw 0, 1144(31)
  05f0058  stw 30, 1228(31)
  05f005c  li 0, 1
  05f0060  stw 0, 1212(31)
  05f0064  lwz 0, 1216(31)
  05f0068  li 9, 0
  05f006c  cmpwi 7, 0, 0
  05f0070  stw 9, 1212(31)
  05f0074  stw 9, 476(31)
  05f0078  bf 30, 0x5f010c
  05f007c  lwz 11, 292(31)
  05f0080  clrldi 30, 29, 32
  05f0084  cmpwi 7, 11, 0
  05f0088  bt 30, 0x5eff10
  05f008c  li 5, 0
  05f0090  li 7, 0
  05f0094  li 8, 0
  05f0098  li 6, 0
  05f009c  b 0x5f00b8
  05f00a0  li 5, 1
  05f00a4  lwz 11, 292(31)
  05f00a8  addi 7, 7, 1
  05f00ac  addi 8, 8, 384
  05f00b0  cmplw 7, 11, 7
  05f00b4  bf 29, 0x5f014c
  05f00b8  lwz 0, 340(31)
  05f00bc  add 0, 8, 0
  05f00c0  clrldi 10, 0, 32
  05f00c4  lwz 9, 80(10)
  05f00c8  cmpwi 7, 9, 0
  05f00cc  bt 30, 0x5f00a8
  05f00d0  stw 6, 80(10)
  05f00d4  lwz 11, 12(31)
  05f00d8  cmplwi 7, 11, 1
  05f00dc  bf 29, 0x5f00f8
  05f00e0  lwz 9, 340(31)
  05f00e4  add 9, 8, 9
  05f00e8  clrldi 9, 9, 32
  05f00ec  lwz 0, 64(9)
  05f00f0  cmpw 7, 11, 0
  05f00f4  bf 29, 0x5f00a0
  05f00f8  lwz 11, 292(31)
  05f00fc  b 0x5f00a8
  05f0100  mr 3, 30
  05f0104  bl 0x5ebac0
  05f0108  b 0x5eff30
  05f010c  stw 9, 1216(31)
  05f0110  lwz 9, 1132(31)
  05f0114  clrldi 30, 29, 32
  05f0118  li 4, 0
  05f011c  addi 9, 9, 1
  05f0120  mr 3, 30
  05f0124  stw 9, 1132(31)
  05f0128  bl 0x5efad8
  05f012c  li 0, 0
  05f0130  mr 3, 30
  05f0134  li 4, 1
  05f0138  stw 0, 1228(31)
  05f013c  stw 0, 1140(31)
  05f0140  bl 0x5efad8
  05f0144  lwz 11, 292(31)
  05f0148  b 0x5eff10
  05f014c  cmpwi 7, 5, 0
  05f0150  clrldi 30, 29, 32
  05f0154  bf 30, 0x5f0110
  05f0158  b 0x5eff10
  05f015c  bl 0x5f5090
  05f0160  nop
  05f0164  lwz 0, 20(31)
  05f0168  lwz 9, 1120(31)
  05f016c  cmpwi 7, 0, 0
  05f0170  addi 9, 9, -1
  05f0174  stw 3, 1140(31)
  05f0178  stw 9, 1144(31)
  05f017c  stw 30, 1228(31)
  05f0180  bt 30, 0x5f005c
  05f0184  b 0x5effe0
  05f0188  cmpwi 7, 9, 725
  05f018c  bf 29, 0x5f0198
  05f0190  li 0, 1
  05f0194  stw 0, 1216(31)
  05f0198  lwz 9, 1224(31)
  05f019c  cmplwi 7, 9, 3
  05f01a0  bf 29, 0x5f01ac
  05f01a4  stw 30, 1224(31)
  05f01a8  b 0x5f005c
  05f01ac  lwz 11, 1220(31)
  05f01b0  addi 9, 9, 1
  05f01b4  li 0, 2
  05f01b8  addi 11, 11, 1
  05f01bc  stw 9, 1224(31)
  05f01c0  li 9, 1
  05f01c4  stw 0, 1212(31)
  05f01c8  stw 9, 268(31)
  05f01cc  stw 11, 1220(31)
  05f01d0  b 0x5f0064

FUN_005f01d8:   # 0x5f01d8, 0x198 bytes
  05f01d8  cmpwi 7, 3, 0
  05f01dc  mflr 0
  05f01e0  stdu 1, -128(1)
  05f01e4  std 31, 120(1)
  05f01e8  std 30, 112(1)
  05f01ec  std 0, 144(1)
  05f01f0  clrldi 31, 3, 32
  05f01f4  bf 30, 0x5f0214
  05f01f8  ld 0, 144(1)
  05f01fc  mr 3, 31
  05f0200  ld 30, 112(1)
  05f0204  ld 31, 120(1)
  05f0208  mtlr 0
  05f020c  addi 1, 1, 128
  05f0210  blr
  05f0214  lwz 0, 1196(31)
  05f0218  lwz 9, 12(31)
  05f021c  cmpw 7, 0, 9
  05f0220  bt 30, 0x5f0324
  05f0224  lwz 0, 464(31)
  05f0228  cmpwi 7, 0, 0
  05f022c  bf 30, 0x5f02fc
  05f0230  lwz 30, 28(31)
  05f0234  cmpwi 7, 30, 0
  05f0238  bf 30, 0x5f0324
  05f023c  lwz 11, 1136(31)
  05f0240  li 9, -3
  05f0244  addi 0, 11, -1
  05f0248  cmplw 7, 0, 9
  05f024c  bf 29, 0x5f033c
  05f0250  lwz 0, 1208(31)
  05f0254  cmpwi 7, 0, 0
  05f0258  bt 30, 0x5f0274
  05f025c  lwz 0, 272(31)
  05f0260  stw 30, 1208(31)
  05f0264  cmpwi 7, 0, 0
  05f0268  bf 30, 0x5f0354
  05f026c  stw 30, 1228(31)
  05f0270  stw 30, 1140(31)
  05f0274  lwz 0, 264(31)
  05f0278  cmpwi 7, 0, 0
  05f027c  bf 30, 0x5f032c
  05f0280  lwz 0, 276(31)
  05f0284  li 9, 0
  05f0288  cmpwi 7, 0, 0
  05f028c  li 0, 1
  05f0290  stw 9, 1212(31)
  05f0294  stw 0, 476(31)
  05f0298  bt 30, 0x5f02e8
  05f029c  lwz 0, 208(31)
  05f02a0  cmpwi 7, 0, 0
  05f02a4  bt 30, 0x5f02e8
  05f02a8  lis 0, 24882
  05f02ac  lwz 9, 1244(31)
  05f02b0  ori 0, 0, 16971
  05f02b4  cmpw 7, 9, 0
  05f02b8  bt 30, 0x5f02e8
  05f02bc  lwz 0, 268(31)
  05f02c0  cmpwi 7, 0, 0
  05f02c4  bf 30, 0x5f02e8
  05f02c8  lwz 3, 216(31)
  05f02cc  cmpwi 7, 3, 0
  05f02d0  bt 30, 0x5f02e8
  05f02d4  clrldi 3, 3, 32
  05f02d8  lwz 5, 244(31)
  05f02dc  li 4, 0
  05f02e0  bl 0x5d0140
  05f02e4  nop
  05f02e8  lwz 9, 216(31)
  05f02ec  li 0, 0
  05f02f0  stw 9, 220(31)
  05f02f4  stw 0, 296(31)
  05f02f8  b 0x5f01f8
  05f02fc  li 0, 1
  05f0300  stw 0, 28(31)
  05f0304  ld 0, 144(1)
  05f0308  li 31, 0
  05f030c  ld 30, 112(1)
  05f0310  mr 3, 31
  05f0314  mtlr 0
  05f0318  ld 31, 120(1)
  05f031c  addi 1, 1, 128
  05f0320  blr
  05f0324  li 31, 0
  05f0328  b 0x5f01f8
  05f032c  li 0, 0
  05f0330  stw 0, 1228(31)
  05f0334  stw 0, 1140(31)
  05f0338  b 0x5f0280
  05f033c  lwz 0, 1176(31)
  05f0340  sub 9, 4, 11
  05f0344  stw 30, 1136(31)
  05f0348  add 0, 0, 9
  05f034c  stw 0, 1176(31)
  05f0350  b 0x5f0250
  05f0354  li 4, 0
  05f0358  mr 3, 31
  05f035c  bl 0x5efad8
  05f0360  mr 3, 31
  05f0364  li 4, 1
  05f0368  bl 0x5efad8
  05f036c  b 0x5f026c

FUN_005f0370:   # 0x5f0370, 0x728 bytes
  05f0370  stdu 1, -16864(1)
  05f0374  mflr 0
  05f0378  std 18, 16752(1)
  05f037c  std 0, 16880(1)
  05f0380  rlwinm 0, 4, 0, 23, 23
  05f0384  std 30, 16848(1)
  05f0388  cmpwi 7, 0, 0
  05f038c  std 14, 16720(1)
  05f0390  std 15, 16728(1)
  05f0394  std 16, 16736(1)
  05f0398  std 17, 16744(1)
  05f039c  std 19, 16760(1)
  05f03a0  std 20, 16768(1)
  05f03a4  std 21, 16776(1)
  05f03a8  std 22, 16784(1)
  05f03ac  std 23, 16792(1)
  05f03b0  std 24, 16800(1)
  05f03b4  std 25, 16808(1)
  05f03b8  std 26, 16816(1)
  05f03bc  std 27, 16824(1)
  05f03c0  std 28, 16832(1)
  05f03c4  std 29, 16840(1)
  05f03c8  std 31, 16856(1)
  05f03cc  mr 18, 4
  05f03d0  mr 30, 3
  05f03d4  bf 30, 0x5f07d4
  05f03d8  clrldi 9, 30, 32
  05f03dc  lwz 0, 300(30)
  05f03e0  std 9, 16688(1)
  05f03e4  lwz 11, 208(30)
  05f03e8  cmpwi 7, 0, 0
  05f03ec  stw 11, 16680(1)
  05f03f0  lwz 15, 236(30)
  05f03f4  lwz 20, 232(30)
  05f03f8  lwz 31, 284(30)
  05f03fc  bt 30, 0x5f0460
  05f0400  li 3, 0
  05f0404  ld 0, 16880(1)
  05f0408  extsw 3, 3
  05f040c  ld 14, 16720(1)
  05f0410  ld 15, 16728(1)
  05f0414  mtlr 0
  05f0418  ld 16, 16736(1)
  05f041c  ld 17, 16744(1)
  05f0420  ld 18, 16752(1)
  05f0424  ld 19, 16760(1)
  05f0428  ld 20, 16768(1)
  05f042c  ld 21, 16776(1)
  05f0430  ld 22, 16784(1)
  05f0434  ld 23, 16792(1)
  05f0438  ld 24, 16800(1)
  05f043c  ld 25, 16808(1)
  05f0440  ld 26, 16816(1)
  05f0444  ld 27, 16824(1)
  05f0448  ld 28, 16832(1)
  05f044c  ld 29, 16840(1)
  05f0450  ld 30, 16848(1)
  05f0454  ld 31, 16856(1)
  05f0458  addi 1, 1, 16864
  05f045c  blr
  05f0460  mr 3, 9
  05f0464  bl 0x5eb450
  05f0468  lwz 0, 28(30)
  05f046c  cmpwi 7, 0, 0
  05f0470  bf 30, 0x5f0400
  05f0474  lwz 0, 300(30)
  05f0478  cmpwi 7, 0, 0
  05f047c  bf 30, 0x5f0400
  05f0480  lwz 9, -32532(2)
  05f0484  lwz 3, 0(9)
  05f0488  cmpwi 7, 3, 0
  05f048c  bt 30, 0x5f04d8
  05f0490  clrldi 3, 3, 32
  05f0494  lwz 0, -32384(2)
  05f0498  lwz 10, -32540(2)
  05f049c  li 4, 0
  05f04a0  std 0, 112(1)
  05f04a4  lwz 8, -32388(2)
  05f04a8  addi 10, 10, 1572
  05f04ac  li 5, 0
  05f04b0  lwz 11, 80(3)
  05f04b4  li 6, 0
  05f04b8  li 7, 0
  05f04bc  li 9, 441
  05f04c0  lwz 0, 0(11)
  05f04c4  std 2, 40(1)
  05f04c8  mtctr 0
  05f04cc  lwz 2, 4(11)
  05f04d0  bctrl
  05f04d4  ld 2, 40(1)
  05f04d8  bl 0x5f5090
  05f04dc  nop
  05f04e0  lwz 9, -32532(2)
  05f04e4  stw 3, 16676(1)
  05f04e8  lwz 3, 0(9)
  05f04ec  cmpwi 7, 3, 0
  05f04f0  bt 30, 0x5f053c
  05f04f4  clrldi 3, 3, 32
  05f04f8  lwz 0, -32380(2)
  05f04fc  lwz 10, -32540(2)
  05f0500  li 4, 0
  05f0504  std 0, 112(1)
  05f0508  lwz 8, -32388(2)
  05f050c  addi 10, 10, 1576
  05f0510  li 5, 0
  05f0514  lwz 11, 80(3)
  05f0518  li 6, 0
  05f051c  li 7, 0
  05f0520  li 9, 450
  05f0524  lwz 0, 0(11)
  05f0528  std 2, 40(1)
  05f052c  mtctr 0
  05f0530  lwz 2, 4(11)
  05f0534  bctrl
  05f0538  ld 2, 40(1)
  05f053c  lwz 7, 56(30)
  05f0540  rlwinm 0, 18, 23, 31, 31
  05f0544  add 19, 20, 31
  05f0548  cmpwi 7, 7, 0
  05f054c  bf 29, 0x5f0a78
  05f0550  addi 9, 1, 151
  05f0554  cmplw 7, 20, 19
  05f0558  stw 9, 16684(1)
  05f055c  addi 11, 1, 128
  05f0560  addi 9, 1, 132
  05f0564  mr 31, 20
  05f0568  li 25, 0
  05f056c  clrlwi 17, 0, 24
  05f0570  std 11, 16712(1)
  05f0574  std 9, 16704(1)
  05f0578  bt 29, 0x5f0a78
  05f057c  nop
  05f0580  clrldi 9, 31, 32
  05f0584  cmpwi 7, 17, 0
  05f0588  addi 23, 31, 4
  05f058c  lwz 8, 0(9)
  05f0590  mr 29, 8
  05f0594  bt 30, 0x5f05e8
  05f0598  lwz 0, 292(30)
  05f059c  cmpwi 7, 0, 0
  05f05a0  bf 29, 0x5f05e8
  05f05a4  clrldi 9, 15, 32
  05f05a8  clrldi 0, 0, 32
  05f05ac  li 10, 0
  05f05b0  mtctr 0
  05f05b4  mr 11, 15
  05f05b8  lwz 0, 0(9)
  05f05bc  cmpw 7, 0, 25
  05f05c0  bf 30, 0x5f05d4
  05f05c4  b 0x5f0a84
  05f05c8  lwz 0, 0(9)
  05f05cc  cmpw 7, 0, 25
  05f05d0  bt 30, 0x5f07f8
  05f05d4  addi 11, 11, 4
  05f05d8  addi 10, 10, 1
  05f05dc  clrldi 9, 11, 32
  05f05e0  bdnz 0x5f05c8
  05f05e4  mr 29, 8
  05f05e8  addi 25, 25, 1
  05f05ec  add 31, 23, 29
  05f05f0  cmpw 7, 7, 25
  05f05f4  bf 29, 0x5f0608
  05f05f8  cmplw 7, 19, 31
  05f05fc  bt 28, 0x5f0608
  05f0600  cmplw 7, 31, 20
  05f0604  bf 28, 0x5f0580
  05f0608  lwz 11, -32532(2)
  05f060c  lwz 9, 0(11)
  05f0610  cmpwi 7, 9, 0
  05f0614  bt 30, 0x5f064c
  05f0618  clrldi 9, 9, 32
  05f061c  lwz 6, -32388(2)
  05f0620  li 4, 0
  05f0624  mr 3, 9
  05f0628  li 5, 0
  05f062c  li 7, 470
  05f0630  lwz 11, 84(9)
  05f0634  lwz 0, 0(11)
  05f0638  std 2, 40(1)
  05f063c  mtctr 0
  05f0640  lwz 2, 4(11)
  05f0644  bctrl
  05f0648  ld 2, 40(1)
  05f064c  bl 0x5f5090
  05f0650  nop
  05f0654  lwz 0, 276(30)
  05f0658  cmpwi 7, 0, 0
  05f065c  mr 28, 3
  05f0660  bt 30, 0x5f09d8
  05f0664  lwz 0, 16680(1)
  05f0668  cmpwi 7, 0, 0
  05f066c  bt 30, 0x5f09d8
  05f0670  clrlwi 0, 18, 31
  05f0674  lwz 29, 32(30)
  05f0678  cmpwi 7, 0, 0
  05f067c  bt 30, 0x5f0a70
  05f0680  rlwinm 0, 18, 0, 30, 30
  05f0684  cmpwi 7, 0, 0
  05f0688  bt 30, 0x5f0a60
  05f068c  lwz 9, -32532(2)
  05f0690  lwz 3, 0(9)
  05f0694  cmpwi 7, 3, 0
  05f0698  bt 30, 0x5f06e4
  05f069c  clrldi 3, 3, 32
  05f06a0  lwz 0, -32376(2)
  05f06a4  lwz 10, -32540(2)
  05f06a8  li 4, 0
  05f06ac  std 0, 112(1)
  05f06b0  lwz 8, -32388(2)
  05f06b4  addi 10, 10, 1580
  05f06b8  li 5, 0
  05f06bc  lwz 11, 80(3)
  05f06c0  li 6, 0
  05f06c4  li 7, 0
  05f06c8  li 9, 516
  05f06cc  lwz 0, 0(11)
  05f06d0  std 2, 40(1)
  05f06d4  mtctr 0
  05f06d8  lwz 2, 4(11)
  05f06dc  bctrl
  05f06e0  ld 2, 40(1)
  05f06e4  cmplw 7, 31, 19
  05f06e8  bf 29, 0x5f0a18
  05f06ec  lwz 11, -32532(2)
  05f06f0  mr 31, 29
  05f06f4  lwz 9, 0(11)
  05f06f8  cmpwi 7, 9, 0
  05f06fc  bt 30, 0x5f0778
  05f0700  clrldi 9, 9, 32
  05f0704  lwz 6, -32388(2)
  05f0708  li 4, 0
  05f070c  mr 3, 9
  05f0710  li 5, 0
  05f0714  li 7, 556
  05f0718  lwz 11, 84(9)
  05f071c  lwz 0, 0(11)
  05f0720  std 2, 40(1)
  05f0724  mtctr 0
  05f0728  lwz 2, 4(11)
  05f072c  bctrl
  05f0730  ld 2, 40(1)
  05f0734  lwz 11, -32532(2)
  05f0738  lwz 9, 0(11)
  05f073c  cmpwi 7, 9, 0
  05f0740  bt 30, 0x5f0778
  05f0744  clrldi 9, 9, 32
  05f0748  lwz 6, -32388(2)
  05f074c  li 4, 0
  05f0750  mr 3, 9
  05f0754  li 5, 0
  05f0758  li 7, 563
  05f075c  lwz 11, 84(9)
  05f0760  lwz 0, 0(11)
  05f0764  std 2, 40(1)
  05f0768  mtctr 0
  05f076c  lwz 2, 4(11)
  05f0770  bctrl
  05f0774  ld 2, 40(1)
  05f0778  lwz 9, 16676(1)
  05f077c  sub 0, 28, 9
  05f0780  lwz 9, 1172(30)
  05f0784  add 0, 0, 9
  05f0788  stw 0, 1172(30)
  05f078c  bl 0x5f5090
  05f0790  nop
  05f0794  lwz 11, 296(30)
  05f0798  lwz 9, 1168(30)
  05f079c  sub 0, 3, 28
  05f07a0  cmplw 7, 11, 31
  05f07a4  add 0, 0, 9
  05f07a8  mr 4, 3
  05f07ac  stw 0, 1168(30)
  05f07b0  bf 28, 0x5f07b8
  05f07b4  stw 31, 296(30)
  05f07b8  cmpwi 7, 17, 0
  05f07bc  li 3, 1
  05f07c0  bt 30, 0x5f0404
  05f07c4  ld 3, 16688(1)
  05f07c8  clrldi 4, 4, 32
  05f07cc  bl 0x5ee120
  05f07d0  b 0x5f0404
  05f07d4  bl 0x5f5090
  05f07d8  nop
  05f07dc  clrldi 4, 3, 32
  05f07e0  clrldi 3, 30, 32
  05f07e4  bl 0x5f01d8
  05f07e8  cmpwi 7, 3, 0
  05f07ec  mr 30, 3
  05f07f0  bf 30, 0x5f03d8
  05f07f4  b 0x5f0400
  05f07f8  cmpwi 7, 10, -1
  05f07fc  mr 29, 8
  05f0800  bt 30, 0x5f05e8
  05f0804  cmpwi 7, 8, 0
  05f0808  li 29, 0
  05f080c  bt 30, 0x5f05e8
  05f0810  clrldi 11, 23, 32
  05f0814  stw 23, 128(1)
  05f0818  addi 9, 23, 4
  05f081c  mr 29, 8
  05f0820  add 14, 9, 8
  05f0824  lwz 0, 0(11)
  05f0828  stw 9, 128(1)
  05f082c  rlwinm 21, 0, 0, 0, 27
  05f0830  cmpwi 7, 21, 0
  05f0834  bt 30, 0x5f09d0
  05f0838  slwi 9, 10, 7
  05f083c  lwz 11, 340(30)
  05f0840  slwi 0, 10, 9
  05f0844  sub 0, 0, 9
  05f0848  add 0, 0, 11
  05f084c  clrldi 26, 0, 32
  05f0850  lwz 9, 0(26)
  05f0854  lwz 0, 24(26)
  05f0858  lwz 11, 20(26)
  05f085c  sub 16, 9, 0
  05f0860  stw 11, 16672(1)
  05f0864  cmpwi 7, 16, 0
  05f0868  bf 28, 0x5f08a4
  05f086c  b 0x5f0a8c
  05f0870  cmpwi 7, 28, 0
  05f0874  bf 30, 0x5f09ec
  05f0878  mr 4, 24
  05f087c  lwz 3, 12(26)
  05f0880  clrldi 5, 5, 32
  05f0884  bl 0x5c6094
  05f0888  nop
  05f088c  lwz 9, 132(1)
  05f0890  lwz 0, 12(26)
  05f0894  add 0, 0, 9
  05f0898  stw 0, 0(26)
  05f089c  cmpwi 7, 21, 0
  05f08a0  bt 30, 0x5f09d0
  05f08a4  lwz 0, 128(1)
  05f08a8  cmplw 7, 19, 0
  05f08ac  bt 28, 0x5f09d0
  05f08b0  cmplw 7, 0, 20
  05f08b4  bt 28, 0x5f09d0
  05f08b8  cmplw 7, 19, 14
  05f08bc  bt 28, 0x5f09d0
  05f08c0  lwz 0, 8(26)
  05f08c4  sub 0, 0, 16
  05f08c8  rlwinm 27, 0, 0, 0, 27
  05f08cc  cmplwi 7, 27, 16
  05f08d0  bf 29, 0x5f08d8
  05f08d4  addi 27, 27, -16
  05f08d8  lwz 22, 16672(1)
  05f08dc  mr 28, 27
  05f08e0  mr 3, 22
  05f08e4  bl 0x5f538c
  05f08e8  nop
  05f08ec  stw 3, 132(1)
  05f08f0  lwz 11, 0(26)
  05f08f4  mr 5, 3
  05f08f8  lwz 0, 16(26)
  05f08fc  sub 0, 0, 11
  05f0900  cmplw 7, 27, 0
  05f0904  bf 29, 0x5f090c
  05f0908  mr 28, 0
  05f090c  slwi 0, 5, 1
  05f0910  mr 31, 11
  05f0914  cmplw 7, 0, 28
  05f0918  mr 9, 11
  05f091c  bf 29, 0x5f0938
  05f0920  lwz 0, 16684(1)
  05f0924  cmplw 7, 28, 5
  05f0928  rlwinm 9, 0, 0, 0, 27
  05f092c  mr 31, 9
  05f0930  bt 28, 0x5f0938
  05f0934  mr 31, 11
  05f0938  ld 11, 16704(1)
  05f093c  clrldi 24, 31, 32
  05f0940  ld 0, 16712(1)
  05f0944  mr 3, 22
  05f0948  clrldi 5, 11, 32
  05f094c  lwz 6, 128(1)
  05f0950  clrldi 9, 9, 32
  05f0954  mr 4, 24
  05f0958  clrldi 7, 0, 32
  05f095c  clrldi 8, 14, 32
  05f0960  li 10, 0
  05f0964  bl 0x5f5398
  05f0968  nop
  05f096c  lwz 5, 132(1)
  05f0970  cmplw 7, 21, 5
  05f0974  bf 28, 0x5f0980
  05f0978  mr 5, 21
  05f097c  stw 21, 132(1)
  05f0980  cmplw 7, 27, 5
  05f0984  sub 21, 21, 5
  05f0988  bf 28, 0x5f0994
  05f098c  mr 5, 27
  05f0990  stw 27, 132(1)
  05f0994  lwz 0, 0(26)
  05f0998  cmpw 7, 31, 0
  05f099c  bt 30, 0x5f09e0
  05f09a0  cmplw 7, 28, 5
  05f09a4  bt 28, 0x5f0870
  05f09a8  clrldi 3, 0, 32
  05f09ac  mr 4, 24
  05f09b0  clrldi 5, 5, 32
  05f09b4  bl 0x5c6094
  05f09b8  nop
  05f09bc  lwz 0, 0(26)
  05f09c0  lwz 9, 132(1)
  05f09c4  add 0, 0, 9
  05f09c8  stw 0, 0(26)
  05f09cc  b 0x5f089c
  05f09d0  lwz 7, 56(30)
  05f09d4  b 0x5f05e8
  05f09d8  li 31, 0
  05f09dc  b 0x5f0734
  05f09e0  add 0, 0, 5
  05f09e4  stw 0, 0(26)
  05f09e8  b 0x5f089c
  05f09ec  mr 4, 24
  05f09f0  clrldi 5, 28, 32
  05f09f4  clrldi 3, 0, 32
  05f09f8  add 31, 31, 28
  05f09fc  bl 0x5c6094
  05f0a00  nop
  05f0a04  lwz 5, 132(1)
  05f0a08  clrldi 24, 31, 32
  05f0a0c  sub 5, 5, 28
  05f0a10  stw 5, 132(1)
  05f0a14  b 0x5f0878
  05f0a18  cmplw 7, 31, 20
  05f0a1c  bt 28, 0x5f06ec
  05f0a20  lwz 7, 288(30)
  05f0a24  addi 9, 30, 304
  05f0a28  lwz 4, 220(30)
  05f0a2c  clrldi 10, 29, 32
  05f0a30  lwz 5, 240(30)
  05f0a34  clrldi 6, 31, 32
  05f0a38  lwz 0, 36(30)
  05f0a3c  extsw 7, 7
  05f0a40  lwz 3, 16680(1)
  05f0a44  clrldi 8, 19, 32
  05f0a48  clrldi 9, 9, 32
  05f0a4c  std 0, 112(1)
  05f0a50  bl 0x5fb780
  05f0a54  nop
  05f0a58  mr 29, 3
  05f0a5c  b 0x5f06ec
  05f0a60  oris 3, 29, 2
  05f0a64  rlwinm 29, 3, 11, 1, 31
  05f0a68  rotlwi 29, 29, 21
  05f0a6c  b 0x5f068c
  05f0a70  ori 29, 29, 512
  05f0a74  b 0x5f0680
  05f0a78  clrlwi 17, 0, 24
  05f0a7c  mr 31, 20
  05f0a80  b 0x5f0608
  05f0a84  li 10, 0
  05f0a88  b 0x5f0804
  05f0a8c  lwz 0, 8(26)
  05f0a90  add 16, 16, 0
  05f0a94  b 0x5f08a4

FUN_005f0a98:   # 0x5f0a98, 0x8 bytes
  05f0a98  li 4, 771
  05f0a9c  b 0x5f0370

FUN_005f0aa0:   # 0x5f0aa0, 0x494 bytes
  05f0aa0  mfcr 12
  05f0aa4  cmpwi 7, 3, 0
  05f0aa8  stdu 1, -208(1)
  05f0aac  std 26, 160(1)
  05f0ab0  std 31, 200(1)
  05f0ab4  std 21, 120(1)
  05f0ab8  std 22, 128(1)
  05f0abc  std 23, 136(1)
  05f0ac0  std 24, 144(1)
  05f0ac4  std 25, 152(1)
  05f0ac8  std 27, 168(1)
  05f0acc  std 28, 176(1)
  05f0ad0  std 29, 184(1)
  05f0ad4  std 30, 192(1)
  05f0ad8  mr 31, 3
  05f0adc  mr 26, 3
  05f0ae0  stw 12, 216(1)
  05f0ae4  mflr 0
  05f0ae8  std 0, 224(1)
  05f0aec  bt 30, 0x5f0c78
  05f0af0  lwz 0, 256(3)
  05f0af4  cmpwi 7, 0, 0
  05f0af8  bf 30, 0x5f0c78
  05f0afc  lwz 0, 260(3)
  05f0b00  cmpwi 7, 0, 0
  05f0b04  bf 30, 0x5f0c78
  05f0b08  cmpwi 7, 4, 0
  05f0b0c  bf 30, 0x5f0b14
  05f0b10  li 4, 1
  05f0b14  lwz 9, 8(31)
  05f0b18  mr 29, 4
  05f0b1c  stw 0, 1212(31)
  05f0b20  cmplw 7, 4, 9
  05f0b24  li 0, 1
  05f0b28  stw 0, 476(31)
  05f0b2c  bf 29, 0x5f0b34
  05f0b30  mr 29, 9
  05f0b34  rlwinm 0, 5, 0, 30, 30
  05f0b38  cmpwi 7, 0, 0
  05f0b3c  bf 30, 0x5f0b4c
  05f0b40  lwz 0, 292(31)
  05f0b44  cmpwi 7, 0, 0
  05f0b48  bf 30, 0x5f0e0c
  05f0b4c  mr 6, 29
  05f0b50  lwz 8, 12(31)
  05f0b54  clrldi 28, 26, 32
  05f0b58  cmpw 7, 8, 29
  05f0b5c  bt 30, 0x5f0c70
  05f0b60  clrlwi 0, 5, 30
  05f0b64  cmpwi 7, 0, 3
  05f0b68  bt 30, 0x5f0efc
  05f0b6c  clrlwi 0, 5, 31
  05f0b70  cmpwi 7, 0, 0
  05f0b74  bf 30, 0x5f0cc0
  05f0b78  slwi 0, 29, 2
  05f0b7c  lwz 11, 344(31)
  05f0b80  add 7, 11, 0
  05f0b84  addi 9, 7, -4
  05f0b88  clrldi 9, 9, 32
  05f0b8c  lwz 0, 0(9)
  05f0b90  clrlwi 0, 0, 31
  05f0b94  cmpwi 7, 0, 0
  05f0b98  bf 30, 0x5f0cc0
  05f0b9c  addi 10, 29, -2
  05f0ba0  cmpwi 7, 10, 0
  05f0ba4  bf 29, 0x5f0c00
  05f0ba8  slwi 9, 10, 2
  05f0bac  add 9, 9, 11
  05f0bb0  clrldi 9, 9, 32
  05f0bb4  lwz 0, 0(9)
  05f0bb8  clrlwi 0, 0, 31
  05f0bbc  cmpwi 7, 0, 0
  05f0bc0  bf 30, 0x5f0c00
  05f0bc4  addi 0, 29, -3
  05f0bc8  addi 9, 7, -12
  05f0bcc  cmpwi 7, 0, 0
  05f0bd0  clrldi 0, 10, 32
  05f0bd4  mtctr 0
  05f0bd8  bf+ 28, 0x5f0bf0
  05f0bdc  b 0x5f0f28
  05f0be0  lwz 0, 0(11)
  05f0be4  clrlwi 0, 0, 31
  05f0be8  cmpwi 7, 0, 0
  05f0bec  bf 30, 0x5f0c00
  05f0bf0  clrldi 11, 9, 32
  05f0bf4  addi 10, 10, -1
  05f0bf8  addi 9, 9, -4
  05f0bfc  bdnz 0x5f0be0
  05f0c00  addi 27, 10, 1
  05f0c04  b 0x5f0cc4
  05f0c08  li 0, 0
  05f0c0c  stw 0, 1228(31)
  05f0c10  stw 0, 1140(31)
  05f0c14  bt 18, 0x5f0c20
  05f0c18  li 0, 1
  05f0c1c  stw 0, 276(31)
  05f0c20  lwz 0, 292(31)
  05f0c24  cmpwi 7, 0, 0
  05f0c28  bt 30, 0x5f0c60
  05f0c2c  lwz 9, 340(31)
  05f0c30  lwz 0, 76(9)
  05f0c34  cmpwi 7, 0, 0
  05f0c38  bf 29, 0x5f0c44
  05f0c3c  cmpwi 7, 0, 2
  05f0c40  bf 30, 0x5f0c60
  05f0c44  addi 3, 26, 944
  05f0c48  lwz 5, -32516(2)
  05f0c4c  lwz 4, -32496(2)
  05f0c50  li 6, 653
  05f0c54  clrldi 3, 3, 32
  05f0c58  bl 0x5eb2e0
  05f0c5c  nop
  05f0c60  bt 14, 0x5f0c70
  05f0c64  mr 3, 28
  05f0c68  li 4, 1
  05f0c6c  bl 0x5efad8
  05f0c70  li 0, 0
  05f0c74  stw 0, 476(31)
  05f0c78  lwz 12, 216(1)
  05f0c7c  ld 0, 224(1)
  05f0c80  ld 21, 120(1)
  05f0c84  mtocrf 16, 12
  05f0c88  ld 22, 128(1)
  05f0c8c  mtlr 0
  05f0c90  ld 23, 136(1)
  05f0c94  mtocrf 8, 12
  05f0c98  ld 24, 144(1)
  05f0c9c  ld 25, 152(1)
  05f0ca0  ld 26, 160(1)
  05f0ca4  ld 27, 168(1)
  05f0ca8  ld 28, 176(1)
  05f0cac  ld 29, 184(1)
  05f0cb0  ld 30, 192(1)
  05f0cb4  ld 31, 200(1)
  05f0cb8  addi 1, 1, 208
  05f0cbc  blr
  05f0cc0  mr 27, 29
  05f0cc4  cmplw 7, 6, 27
  05f0cc8  mr 30, 27
  05f0ccc  li 21, 0
  05f0cd0  bf 28, 0x5f0e44
  05f0cd4  cmplw 7, 8, 29
  05f0cd8  bt 29, 0x5f0e34
  05f0cdc  cmplw 7, 6, 8
  05f0ce0  mr 30, 6
  05f0ce4  bt 29, 0x5f0e34
  05f0ce8  cmplw 7, 8, 30
  05f0cec  bf 28, 0x5f0d04
  05f0cf0  mr 3, 28
  05f0cf4  clrldi 4, 30, 32
  05f0cf8  bl 0x5eda28
  05f0cfc  cmpw 7, 30, 29
  05f0d00  bt 30, 0x5f0e8c
  05f0d04  lwz 0, 292(31)
  05f0d08  cmpwi 7, 0, 0
  05f0d0c  bt 30, 0x5f0d28
  05f0d10  lwz 9, 340(31)
  05f0d14  lwz 0, 76(9)
  05f0d18  cmpwi 7, 0, 0
  05f0d1c  bf 29, 0x5f0f0c
  05f0d20  cmpwi 7, 0, 2
  05f0d24  bt 30, 0x5f0f0c
  05f0d28  lwz 0, 272(31)
  05f0d2c  cmpwi 3, 0, 0
  05f0d30  bf 14, 0x5f0e7c
  05f0d34  lwz 0, 12(31)
  05f0d38  lwz 9, 1196(31)
  05f0d3c  cmpw 7, 0, 9
  05f0d40  bt 30, 0x5f0d58
  05f0d44  mr 3, 28
  05f0d48  li 4, 771
  05f0d4c  bl 0x5f0370
  05f0d50  li 0, 1
  05f0d54  stw 0, 268(31)
  05f0d58  mr 3, 28
  05f0d5c  cmpwi 4, 21, 0
  05f0d60  bl 0x5efeb0
  05f0d64  lwz 0, 12(31)
  05f0d68  cmpw 7, 0, 29
  05f0d6c  bt 30, 0x5f0c08
  05f0d70  addi 0, 26, 688
  05f0d74  lwz 24, -32500(2)
  05f0d78  lwz 25, -32516(2)
  05f0d7c  addi 22, 26, 400
  05f0d80  clrldi 30, 0, 32
  05f0d84  li 23, 1
  05f0d88  b 0x5f0dc4
  05f0d8c  li 4, 771
  05f0d90  mr 3, 28
  05f0d94  bt 18, 0x5f0da8
  05f0d98  lwz 0, 12(31)
  05f0d9c  li 21, 0
  05f0da0  cmpw 7, 0, 27
  05f0da4  bt 30, 0x5f0e50
  05f0da8  bl 0x5f0370
  05f0dac  mr 3, 28
  05f0db0  stw 23, 268(31)
  05f0db4  bl 0x5efeb0
  05f0db8  lwz 0, 12(31)
  05f0dbc  cmpw 7, 0, 29
  05f0dc0  bt 30, 0x5f0c08
  05f0dc4  lwz 0, 280(31)
  05f0dc8  mr 3, 30
  05f0dcc  mr 4, 24
  05f0dd0  cmpwi 7, 0, 0
  05f0dd4  mr 5, 25
  05f0dd8  li 6, 3207
  05f0ddc  bt 30, 0x5f0d8c
  05f0de0  bl 0x5eb0f8
  05f0de4  lwz 0, 280(31)
  05f0de8  clrldi 3, 22, 32
  05f0dec  cmpwi 7, 0, 0
  05f0df0  bf 30, 0x5f0e5c
  05f0df4  mr 5, 25
  05f0df8  li 6, 3212
  05f0dfc  mr 3, 30
  05f0e00  mr 4, 24
  05f0e04  bl 0x5eb2e0
  05f0e08  b 0x5f0d8c
  05f0e0c  lwz 0, 24(31)
  05f0e10  li 6, 1
  05f0e14  lwz 9, 20(31)
  05f0e18  add 9, 0, 9
  05f0e1c  addi 9, 9, -1
  05f0e20  divwu 9, 9, 0
  05f0e24  cmplw 7, 29, 9
  05f0e28  bf 29, 0x5f0b50
  05f0e2c  sub 6, 29, 9
  05f0e30  b 0x5f0b50
  05f0e34  li 0, 0
  05f0e38  lwz 21, 276(31)
  05f0e3c  mr 30, 6
  05f0e40  stw 0, 276(31)
  05f0e44  cmplw 7, 8, 29
  05f0e48  bt 29, 0x5f0cf0
  05f0e4c  b 0x5f0ce8
  05f0e50  cmpwi 4, 21, 0
  05f0e54  stw 23, 276(31)
  05f0e58  b 0x5f0da8
  05f0e5c  lwz 9, 416(31)
  05f0e60  lwz 0, 0(9)
  05f0e64  std 2, 40(1)
  05f0e68  mtctr 0
  05f0e6c  lwz 2, 4(9)
  05f0e70  bctrl
  05f0e74  ld 2, 40(1)
  05f0e78  b 0x5f0df4
  05f0e7c  mr 3, 28
  05f0e80  li 4, 0
  05f0e84  bl 0x5efad8
  05f0e88  b 0x5f0d34
  05f0e8c  lwz 0, 272(31)
  05f0e90  li 9, 0
  05f0e94  cmpwi 7, 0, 0
  05f0e98  stw 9, 476(31)
  05f0e9c  bt 30, 0x5f0c78
  05f0ea0  li 4, 0
  05f0ea4  mr 3, 28
  05f0ea8  bl 0x5efad8
  05f0eac  ld 0, 224(1)
  05f0eb0  lwz 12, 216(1)
  05f0eb4  mr 3, 28
  05f0eb8  ld 21, 120(1)
  05f0ebc  li 4, 1
  05f0ec0  ld 22, 128(1)
  05f0ec4  mtlr 0
  05f0ec8  ld 23, 136(1)
  05f0ecc  mtocrf 16, 12
  05f0ed0  ld 24, 144(1)
  05f0ed4  mtocrf 8, 12
  05f0ed8  ld 25, 152(1)
  05f0edc  ld 26, 160(1)
  05f0ee0  ld 27, 168(1)
  05f0ee4  ld 28, 176(1)
  05f0ee8  ld 29, 184(1)
  05f0eec  ld 30, 192(1)
  05f0ef0  ld 31, 200(1)
  05f0ef4  addi 1, 1, 208
  05f0ef8  b 0x5efad8
  05f0efc  mr 3, 28
  05f0f00  clrldi 4, 29, 32
  05f0f04  bl 0x5eda28
  05f0f08  b 0x5f0c70
  05f0f0c  addi 3, 26, 944
  05f0f10  lwz 4, -32496(2)
  05f0f14  lwz 5, -32516(2)
  05f0f18  li 6, 647
  05f0f1c  clrldi 3, 3, 32
  05f0f20  bl 0x5eb0f8
  05f0f24  b 0x5f0d28
  05f0f28  li 0, 1
  05f0f2c  mtctr 0
  05f0f30  b 0x5f0bf0

FUN_005f0f38:   # 0x5f0f38, 0x260 bytes
  05f0f38  stdu 1, -304(1)
  05f0f3c  mflr 0
  05f0f40  std 28, 272(1)
  05f0f44  addi 28, 1, 120
  05f0f48  std 27, 264(1)
  05f0f4c  std 30, 288(1)
  05f0f50  std 31, 296(1)
  05f0f54  mr 30, 4
  05f0f58  mr 31, 3
  05f0f5c  mr 27, 3
  05f0f60  li 4, 8
  05f0f64  mr 3, 28
  05f0f68  std 26, 256(1)
  05f0f6c  std 29, 280(1)
  05f0f70  std 0, 320(1)
  05f0f74  bl 0x5fd6d0
  05f0f78  nop
  05f0f7c  cmpwi 7, 31, 0
  05f0f80  bf 30, 0x5f0fb4
  05f0f84  li 11, 0
  05f0f88  ld 0, 320(1)
  05f0f8c  mr 3, 11
  05f0f90  ld 26, 256(1)
  05f0f94  ld 27, 264(1)
  05f0f98  mtlr 0
  05f0f9c  ld 28, 272(1)
  05f0fa0  ld 29, 280(1)
  05f0fa4  ld 30, 288(1)
  05f0fa8  ld 31, 296(1)
  05f0fac  addi 1, 1, 304
  05f0fb0  blr
  05f0fb4  lwz 0, 56(31)
  05f0fb8  cmplw 7, 0, 30
  05f0fbc  bf 29, 0x5f0f84
  05f0fc0  slwi 26, 30, 2
  05f0fc4  lwz 9, 372(31)
  05f0fc8  li 5, 0
  05f0fcc  add 9, 26, 9
  05f0fd0  clrldi 9, 9, 32
  05f0fd4  lwz 11, 0(9)
  05f0fd8  cmpwi 7, 11, 0
  05f0fdc  rldicl 9, 11, 35, 63
  05f0fe0  clrlwi 3, 11, 16
  05f0fe4  addi 4, 9, 1
  05f0fe8  bf 28, 0x5f116c
  05f0fec  clrldi 4, 4, 62
  05f0ff0  clrldi 5, 5, 63
  05f0ff4  clrldi 3, 3, 48
  05f0ff8  clrldi 28, 28, 32
  05f0ffc  bl 0x5f533c
  05f1000  nop
  05f1004  addi 4, 1, 112
  05f1008  clrldi 5, 3, 32
  05f100c  mr 3, 28
  05f1010  bl 0x5fd700
  05f1014  nop
  05f1018  lwz 29, 1128(31)
  05f101c  mr 3, 28
  05f1020  addi 29, 29, 28
  05f1024  bl 0x5fd778
  05f1028  nop
  05f102c  li 4, 28
  05f1030  add 0, 3, 29
  05f1034  mr 3, 28
  05f1038  stw 0, 1128(31)
  05f103c  bl 0x5fd790
  05f1040  nop
  05f1044  lwz 9, 372(31)
  05f1048  add 9, 26, 9
  05f104c  mr 28, 3
  05f1050  lwz 3, 112(1)
  05f1054  clrldi 9, 9, 32
  05f1058  li 6, 0
  05f105c  lwz 4, 0(9)
  05f1060  cmpwi 7, 4, 0
  05f1064  bf 28, 0x5f1164
  05f1068  rldicl 5, 4, 35, 63
  05f106c  clrldi 3, 3, 32
  05f1070  addi 5, 5, 1
  05f1074  clrldi 4, 4, 48
  05f1078  clrldi 5, 5, 62
  05f107c  clrldi 6, 6, 63
  05f1080  bl 0x5f5cd0
  05f1084  nop
  05f1088  cmpwi 7, 3, 0
  05f108c  stw 3, 112(1)
  05f1090  bt 30, 0x5f1184
  05f1094  clrldi 28, 28, 32
  05f1098  li 0, 0
  05f109c  stw 27, 16(28)
  05f10a0  stw 0, 0(28)
  05f10a4  stw 0, 4(28)
  05f10a8  stw 0, 8(28)
  05f10ac  stw 0, 12(28)
  05f10b0  stw 0, 20(28)
  05f10b4  stw 0, 24(28)
  05f10b8  lwz 3, 112(1)
  05f10bc  li 0, 16
  05f10c0  stw 3, 20(28)
  05f10c4  lwz 9, 372(31)
  05f10c8  clrldi 3, 3, 32
  05f10cc  add 9, 26, 9
  05f10d0  clrldi 9, 9, 32
  05f10d4  lhz 11, 2(9)
  05f10d8  stw 0, 4(28)
  05f10dc  stw 11, 0(28)
  05f10e0  lwz 9, 372(31)
  05f10e4  add 9, 26, 9
  05f10e8  clrldi 9, 9, 32
  05f10ec  lwz 11, 0(9)
  05f10f0  rldicl 11, 11, 35, 63
  05f10f4  addi 11, 11, 1
  05f10f8  stw 11, 8(28)
  05f10fc  lwz 9, 368(31)
  05f1100  add 9, 26, 9
  05f1104  clrldi 9, 9, 32
  05f1108  lwz 29, 0(9)
  05f110c  addi 29, 29, 3
  05f1110  rlwinm 29, 29, 0, 0, 29
  05f1114  addi 29, 29, 8192
  05f1118  stw 29, 12(28)
  05f111c  bl 0x5f538c
  05f1120  nop
  05f1124  stw 30, 24(28)
  05f1128  srwi 3, 3, 4
  05f112c  mr 11, 28
  05f1130  add 29, 29, 3
  05f1134  mr 3, 11
  05f1138  stw 29, 12(28)
  05f113c  ld 0, 320(1)
  05f1140  ld 26, 256(1)
  05f1144  ld 27, 264(1)
  05f1148  mtlr 0
  05f114c  ld 28, 272(1)
  05f1150  ld 29, 280(1)
  05f1154  ld 30, 288(1)
  05f1158  ld 31, 296(1)
  05f115c  addi 1, 1, 304
  05f1160  blr
  05f1164  rldicl 6, 4, 36, 63
  05f1168  b 0x5f1068
  05f116c  rlwinm 0, 11, 0, 3, 3
  05f1170  addi 4, 9, 1
  05f1174  cmpwi 7, 0, 0
  05f1178  li 5, 1
  05f117c  bf 30, 0x5f0fec
  05f1180  b 0x5f0f84
  05f1184  clrldi 3, 28, 32
  05f1188  bl 0x5f516c
  05f118c  nop
  05f1190  li 11, 0
  05f1194  b 0x5f0f88

FUN_005f1198:   # 0x5f1198, 0x5ec bytes
  05f1198  cmpwi 7, 3, 0
  05f119c  mflr 0
  05f11a0  stdu 1, -608(1)
  05f11a4  std 26, 560(1)
  05f11a8  std 30, 592(1)
  05f11ac  std 31, 600(1)
  05f11b0  std 22, 528(1)
  05f11b4  std 23, 536(1)
  05f11b8  std 24, 544(1)
  05f11bc  std 25, 552(1)
  05f11c0  std 27, 568(1)
  05f11c4  std 28, 576(1)
  05f11c8  std 29, 584(1)
  05f11cc  std 0, 624(1)
  05f11d0  mr 31, 3
  05f11d4  mr 30, 4
  05f11d8  mr 26, 3
  05f11dc  bt 30, 0x5f1278
  05f11e0  rlwinm 0, 4, 0, 5, 5
  05f11e4  cmpwi 7, 0, 0
  05f11e8  bf 30, 0x5f1278
  05f11ec  rlwinm 0, 4, 0, 12, 12
  05f11f0  cmpwi 7, 0, 0
  05f11f4  bt 30, 0x5f125c
  05f11f8  lwz 27, 212(31)
  05f11fc  cmpwi 7, 27, 0
  05f1200  bt 30, 0x5f14c0
  05f1204  lwz 4, 224(31)
  05f1208  cmpwi 7, 4, 0
  05f120c  bt 30, 0x5f12b8
  05f1210  lwz 29, 60(31)
  05f1214  cmpwi 7, 29, -1
  05f1218  bt 30, 0x5f1318
  05f121c  mr 3, 29
  05f1220  ld 0, 624(1)
  05f1224  ld 22, 528(1)
  05f1228  extsw 3, 3
  05f122c  ld 23, 536(1)
  05f1230  ld 24, 544(1)
  05f1234  mtlr 0
  05f1238  ld 25, 552(1)
  05f123c  ld 26, 560(1)
  05f1240  ld 27, 568(1)
  05f1244  ld 28, 576(1)
  05f1248  ld 29, 584(1)
  05f124c  ld 30, 592(1)
  05f1250  ld 31, 600(1)
  05f1254  addi 1, 1, 608
  05f1258  blr
  05f125c  lwz 0, 32(3)
  05f1260  rlwinm 0, 0, 0, 12, 12
  05f1264  cmpwi 7, 0, 0
  05f1268  bf 30, 0x5f11f8
  05f126c  lwz 0, 1212(3)
  05f1270  cmpwi 7, 0, 2
  05f1274  bf 30, 0x5f11f8
  05f1278  ld 0, 624(1)
  05f127c  li 3, 0
  05f1280  ld 22, 528(1)
  05f1284  extsw 3, 3
  05f1288  ld 23, 536(1)
  05f128c  ld 24, 544(1)
  05f1290  mtlr 0
  05f1294  ld 25, 552(1)
  05f1298  ld 26, 560(1)
  05f129c  ld 27, 568(1)
  05f12a0  ld 28, 576(1)
  05f12a4  ld 29, 584(1)
  05f12a8  ld 30, 592(1)
  05f12ac  ld 31, 600(1)
  05f12b0  addi 1, 1, 608
  05f12b4  blr
  05f12b8  lwz 0, 0(31)
  05f12bc  li 29, 1
  05f12c0  lwz 9, 4(31)
  05f12c4  li 3, 1
  05f12c8  stw 29, 60(31)
  05f12cc  stw 4, 68(31)
  05f12d0  stw 0, 72(31)
  05f12d4  stw 9, 76(31)
  05f12d8  stw 4, 64(31)
  05f12dc  ld 0, 624(1)
  05f12e0  extsw 3, 3
  05f12e4  ld 22, 528(1)
  05f12e8  ld 23, 536(1)
  05f12ec  mtlr 0
  05f12f0  ld 24, 544(1)
  05f12f4  ld 25, 552(1)
  05f12f8  ld 26, 560(1)
  05f12fc  ld 27, 568(1)
  05f1300  ld 28, 576(1)
  05f1304  ld 29, 584(1)
  05f1308  ld 30, 592(1)
  05f130c  ld 31, 600(1)
  05f1310  addi 1, 1, 608
  05f1314  blr
  05f1318  lwz 9, 0(31)
  05f131c  addi 25, 1, 400
  05f1320  lwz 11, 4(31)
  05f1324  addi 22, 26, 64
  05f1328  lwz 5, 240(31)
  05f132c  addi 9, 9, 15
  05f1330  addi 11, 11, 15
  05f1334  clrldi 28, 25, 32
  05f1338  li 0, 0
  05f133c  rlwinm 9, 9, 0, 0, 27
  05f1340  rlwinm 11, 11, 0, 0, 27
  05f1344  clrldi 4, 4, 32
  05f1348  extsw 5, 5
  05f134c  clrldi 3, 22, 32
  05f1350  mr 6, 28
  05f1354  stw 0, 400(1)
  05f1358  stw 0, 404(1)
  05f135c  stw 9, 408(1)
  05f1360  stw 11, 412(1)
  05f1364  bl 0x5ea708
  05f1368  rlwinm 0, 30, 0, 4, 4
  05f136c  stw 3, 60(31)
  05f1370  cmpwi 7, 0, 0
  05f1374  bt 30, 0x5f151c
  05f1378  lwz 29, 60(31)
  05f137c  cmpwi 7, 29, 0
  05f1380  mr 0, 29
  05f1384  bf- 29, 0x5f121c
  05f1388  addi 27, 1, 112
  05f138c  lwz 28, 1192(31)
  05f1390  mr 3, 22
  05f1394  lwz 30, 0(31)
  05f1398  li 4, 0
  05f139c  lwz 31, 4(31)
  05f13a0  bf 29, 0x5f15d8
  05f13a4  clrldi 0, 0, 32
  05f13a8  lis 6, 32767
  05f13ac  li 8, 0
  05f13b0  mtctr 0
  05f13b4  li 5, 0
  05f13b8  li 10, 0
  05f13bc  mr 7, 25
  05f13c0  add 9, 7, 10
  05f13c4  addi 10, 10, 16
  05f13c8  clrldi 9, 9, 32
  05f13cc  lwz 0, 4(9)
  05f13d0  lwz 11, 0(9)
  05f13d4  slwi 0, 0, 16
  05f13d8  add 0, 0, 11
  05f13dc  cmplw 7, 6, 0
  05f13e0  bf 29, 0x5f13ec
  05f13e4  mr 6, 0
  05f13e8  mr 5, 8
  05f13ec  addi 8, 8, 1
  05f13f0  bdnz 0x5f13c0
  05f13f4  rlwinm 9, 28, 0, 1, 3
  05f13f8  lis 0, 12288
  05f13fc  cmpw 7, 9, 0
  05f1400  bt 30, 0x5f1588
  05f1404  cmplw 7, 9, 0
  05f1408  bt 29, 0x5f152c
  05f140c  lis 0, 4096
  05f1410  cmpw 7, 9, 0
  05f1414  bt 30, 0x5f15b0
  05f1418  lis 0, 8192
  05f141c  slwi 7, 5, 4
  05f1420  cmpw 7, 9, 0
  05f1424  bt 30, 0x5f15b0
  05f1428  extsw 0, 7
  05f142c  add 10, 27, 0
  05f1430  lwz 9, 296(10)
  05f1434  lwz 0, 288(10)
  05f1438  add 0, 9, 0
  05f143c  cmplw 7, 0, 30
  05f1440  bf 29, 0x5f1450
  05f1444  sub 0, 0, 30
  05f1448  sub 0, 9, 0
  05f144c  stw 0, 296(10)
  05f1450  lwz 9, 300(10)
  05f1454  lwz 0, 292(10)
  05f1458  add 0, 9, 0
  05f145c  cmplw 7, 0, 31
  05f1460  bf 29, 0x5f1470
  05f1464  sub 0, 0, 31
  05f1468  sub 0, 9, 0
  05f146c  stw 0, 300(10)
  05f1470  lwz 0, 288(10)
  05f1474  addi 4, 4, 1
  05f1478  lis 11, 32767
  05f147c  stw 0, 0(3)
  05f1480  lwz 9, 292(10)
  05f1484  cmpw 7, 29, 4
  05f1488  ori 11, 11, 65535
  05f148c  stw 9, 4(3)
  05f1490  lwz 0, 296(10)
  05f1494  stw 0, 8(3)
  05f1498  lwz 0, 300(10)
  05f149c  stw 0, 12(3)
  05f14a0  li 0, 0
  05f14a4  stw 11, 292(10)
  05f14a8  stw 0, 288(10)
  05f14ac  addi 3, 3, 16
  05f14b0  mr 0, 29
  05f14b4  bf 29, 0x5f121c
  05f14b8  cmpwi 7, 29, 0
  05f14bc  b 0x5f13a0
  05f14c0  lwz 28, 244(31)
  05f14c4  li 0, 100
  05f14c8  lwz 29, 1128(31)
  05f14cc  li 3, 0
  05f14d0  addi 28, 28, 16
  05f14d4  stw 0, 52(31)
  05f14d8  stw 0, 296(31)
  05f14dc  add 29, 28, 29
  05f14e0  bl 0x5fd778
  05f14e4  nop
  05f14e8  add 0, 3, 29
  05f14ec  clrldi 4, 28, 32
  05f14f0  li 3, 0
  05f14f4  stw 0, 1128(31)
  05f14f8  bl 0x5fd790
  05f14fc  nop
  05f1500  lwz 9, 244(31)
  05f1504  add 9, 9, 3
  05f1508  stw 3, 212(31)
  05f150c  clrldi 9, 9, 32
  05f1510  stw 3, 216(31)
  05f1514  stb 27, 0(9)
  05f1518  b 0x5f1204
  05f151c  cmpwi 7, 3, 0
  05f1520  bf 30, 0x5f15e0
  05f1524  lwz 29, 60(31)
  05f1528  b 0x5f121c
  05f152c  lis 0, 16384
  05f1530  cmpw 7, 9, 0
  05f1534  bt 30, 0x5f1548
  05f1538  lis 0, 20480
  05f153c  slwi 7, 5, 4
  05f1540  cmpw 7, 9, 0
  05f1544  bf 30, 0x5f1428
  05f1548  slwi 7, 5, 4
  05f154c  extsw 9, 7
  05f1550  add 9, 27, 9
  05f1554  lwz 11, 288(9)
  05f1558  lwz 10, 296(9)
  05f155c  lwz 8, 292(9)
  05f1560  slwi 11, 11, 1
  05f1564  lwz 0, 300(9)
  05f1568  slwi 10, 10, 1
  05f156c  slwi 8, 8, 1
  05f1570  slwi 0, 0, 1
  05f1574  stw 11, 288(9)
  05f1578  stw 0, 300(9)
  05f157c  stw 10, 296(9)
  05f1580  stw 8, 292(9)
  05f1584  b 0x5f1428
  05f1588  slwi 7, 5, 4
  05f158c  extsw 9, 7
  05f1590  add 9, 27, 9
  05f1594  lwz 0, 288(9)
  05f1598  lwz 11, 296(9)
  05f159c  slwi 0, 0, 1
  05f15a0  slwi 11, 11, 1
  05f15a4  stw 0, 288(9)
  05f15a8  stw 11, 296(9)
  05f15ac  b 0x5f1428
  05f15b0  slwi 7, 5, 4
  05f15b4  extsw 9, 7
  05f15b8  add 9, 27, 9
  05f15bc  lwz 0, 292(9)
  05f15c0  lwz 11, 300(9)
  05f15c4  slwi 0, 0, 1
  05f15c8  slwi 11, 11, 1
  05f15cc  stw 0, 292(9)
  05f15d0  stw 11, 300(9)
  05f15d4  b 0x5f1428
  05f15d8  li 5, 0
  05f15dc  b 0x5f13f4
  05f15e0  lwz 7, 240(31)
  05f15e4  addi 24, 1, 144
  05f15e8  addi 23, 1, 272
  05f15ec  lwz 0, 64(31)
  05f15f0  lwz 9, 68(31)
  05f15f4  mr 5, 28
  05f15f8  lwz 11, 72(31)
  05f15fc  extsw 7, 7
  05f1600  lwz 10, 76(31)
  05f1604  mr 3, 24
  05f1608  lwz 6, 224(31)
  05f160c  mr 4, 23
  05f1610  stw 0, 400(1)
  05f1614  stw 9, 404(1)
  05f1618  stw 11, 408(1)
  05f161c  stw 10, 412(1)
  05f1620  bl 0x5ea9b0
  05f1624  addi 26, 1, 112
  05f1628  stw 3, 112(1)
  05f162c  lwz 29, 60(31)
  05f1630  cmpwi 7, 29, 0
  05f1634  bf 29, 0x5f121c
  05f1638  clrldi 9, 29, 32
  05f163c  mr 27, 26
  05f1640  li 10, 0
  05f1644  mtctr 9
  05f1648  li 28, -1
  05f164c  li 0, 0
  05f1650  mr 11, 26
  05f1654  nop
  05f1658  clrldi 9, 11, 32
  05f165c  addi 11, 11, 4
  05f1660  lwz 9, 0(9)
  05f1664  cmpw 7, 0, 9
  05f1668  bf 28, 0x5f1674
  05f166c  mr 0, 9
  05f1670  mr 28, 10
  05f1674  addi 10, 10, 1
  05f1678  bdnz 0x5f1658
  05f167c  cmpwi 7, 28, -1
  05f1680  bt- 30, 0x5f1778
  05f1684  slwi 30, 28, 4
  05f1688  slwi 11, 29, 4
  05f168c  extsw 9, 30
  05f1690  extsw 11, 11
  05f1694  add 9, 26, 9
  05f1698  add 11, 26, 11
  05f169c  addi 29, 29, 1
  05f16a0  cmpwi 7, 29, 8
  05f16a4  lwz 3, 172(9)
  05f16a8  lwz 0, 32(9)
  05f16ac  lwz 10, 36(9)
  05f16b0  lwz 8, 40(9)
  05f16b4  lwz 7, 44(9)
  05f16b8  lwz 6, 160(9)
  05f16bc  lwz 5, 164(9)
  05f16c0  lwz 4, 168(9)
  05f16c4  stw 0, 288(9)
  05f16c8  stw 10, 292(9)
  05f16cc  stw 8, 296(9)
  05f16d0  stw 7, 300(9)
  05f16d4  stw 3, 300(11)
  05f16d8  stw 6, 288(11)
  05f16dc  stw 5, 292(11)
  05f16e0  stw 4, 296(11)
  05f16e4  stw 29, 60(31)
  05f16e8  bt 30, 0x5f176c
  05f16ec  lwz 7, 240(31)
  05f16f0  add 5, 30, 25
  05f16f4  add 3, 30, 24
  05f16f8  lwz 6, 224(31)
  05f16fc  add 4, 30, 23
  05f1700  rlwinm 5, 5, 0, 0, 27
  05f1704  rlwinm 4, 4, 0, 0, 27
  05f1708  extsw 7, 7
  05f170c  rlwinm 3, 3, 0, 0, 27
  05f1710  bl 0x5ea9b0
  05f1714  slwi 0, 28, 2
  05f1718  lwz 29, 60(31)
  05f171c  extsw 0, 0
  05f1720  lwz 7, 240(31)
  05f1724  addi 29, 29, -1
  05f1728  add 9, 1, 0
  05f172c  slwi 4, 29, 4
  05f1730  slwi 29, 29, 2
  05f1734  add 0, 4, 24
  05f1738  add 5, 4, 25
  05f173c  add 4, 4, 23
  05f1740  stw 3, 112(9)
  05f1744  rlwinm 4, 4, 0, 0, 27
  05f1748  lwz 6, 224(31)
  05f174c  rlwinm 3, 0, 0, 0, 27
  05f1750  rlwinm 5, 5, 0, 0, 27
  05f1754  extsw 7, 7
  05f1758  extsw 29, 29
  05f175c  bl 0x5ea9b0
  05f1760  add 9, 1, 29
  05f1764  stw 3, 112(9)
  05f1768  b 0x5f162c
  05f176c  cmpwi 7, 29, 0
  05f1770  li 0, 8
  05f1774  b 0x5f138c
  05f1778  cmpwi 7, 29, 0
  05f177c  mr 0, 29
  05f1780  b 0x5f138c

FUN_005f1788:   # 0x5f1788, 0x21f8 bytes
  05f1788  mfcr 12
  05f178c  stdu 1, -2192(1)
  05f1790  std 21, 2104(1)
  05f1794  addi 21, 1, 408
  05f1798  std 25, 2136(1)
  05f179c  std 29, 2168(1)
  05f17a0  std 30, 2176(1)
  05f17a4  mr 29, 3
  05f17a8  mr 30, 5
  05f17ac  mr 25, 4
  05f17b0  mr 3, 21
  05f17b4  li 4, 32
  05f17b8  std 16, 2064(1)
  05f17bc  std 19, 2088(1)
  05f17c0  std 22, 2112(1)
  05f17c4  std 14, 2048(1)
  05f17c8  std 15, 2056(1)
  05f17cc  std 17, 2072(1)
  05f17d0  std 18, 2080(1)
  05f17d4  std 20, 2096(1)
  05f17d8  std 23, 2120(1)
  05f17dc  std 24, 2128(1)
  05f17e0  std 26, 2144(1)
  05f17e4  std 27, 2152(1)
  05f17e8  std 28, 2160(1)
  05f17ec  std 31, 2184(1)
  05f17f0  mr 22, 29
  05f17f4  li 19, 1
  05f17f8  addi 16, 1, 112
  05f17fc  stw 12, 2200(1)
  05f1800  mflr 0
  05f1804  std 0, 2208(1)
  05f1808  li 0, 0
  05f180c  stw 0, 112(1)
  05f1810  bl 0x5fd6d0
  05f1814  nop
  05f1818  rlwinm 0, 30, 0, 17, 17
  05f181c  cmpwi 7, 0, 0
  05f1820  bt 30, 0x5f182c
  05f1824  lwz 19, 24(25)
  05f1828  lwz 16, 28(25)
  05f182c  addi 23, 1, 728
  05f1830  li 4, 0
  05f1834  li 5, 1264
  05f1838  mr 3, 23
  05f183c  rlwinm 20, 30, 0, 5, 5
  05f1840  bl 0x5d0140
  05f1844  nop
  05f1848  bl 0x5f5090
  05f184c  nop
  05f1850  lwz 24, -32540(2)
  05f1854  cmpwi 4, 20, 0
  05f1858  li 0, 0
  05f185c  stw 3, 1908(1)
  05f1860  stb 0, 0(24)
  05f1864  bf 18, 0x5f1ac4
  05f1868  rlwinm 0, 30, 0, 6, 6
  05f186c  cmpwi 7, 0, 0
  05f1870  bt 30, 0x5f1a54
  05f1874  lwz 0, 32(25)
  05f1878  cmpwi 7, 0, 0
  05f187c  mr 29, 0
  05f1880  bt 30, 0x5f1a54
  05f1884  addi 26, 1, 1128
  05f1888  li 4, 0
  05f188c  clrldi 27, 26, 32
  05f1890  li 5, 288
  05f1894  mr 3, 27
  05f1898  bl 0x5d0140
  05f189c  nop
  05f18a0  lwz 0, -32340(2)
  05f18a4  lwz 9, -32336(2)
  05f18a8  lwz 11, -32332(2)
  05f18ac  stw 0, 1180(1)
  05f18b0  stw 9, 1188(1)
  05f18b4  stw 11, 1184(1)
  05f18b8  bl 0x5ec3c8
  05f18bc  rlwinm 0, 30, 0, 26, 26
  05f18c0  cmpwi 7, 0, 0
  05f18c4  bt 30, 0x5f18d0
  05f18c8  ld 0, 0(25)
  05f18cc  std 0, 920(1)
  05f18d0  addi 0, 24, 1012
  05f18d4  lwz 31, -32492(2)
  05f18d8  lwz 18, -32516(2)
  05f18dc  li 6, 1767
  05f18e0  clrldi 28, 0, 32
  05f18e4  mr 4, 31
  05f18e8  mr 3, 28
  05f18ec  mr 5, 18
  05f18f0  bl 0x5eb0f8
  05f18f4  clrldi 9, 29, 32
  05f18f8  mr 3, 27
  05f18fc  clrldi 4, 22, 32
  05f1900  clrldi 5, 30, 32
  05f1904  lwz 0, 0(9)
  05f1908  std 2, 40(1)
  05f190c  mtctr 0
  05f1910  lwz 2, 4(9)
  05f1914  bctrl
  05f1918  ld 2, 40(1)
  05f191c  cmpwi 7, 3, 0
  05f1920  bt 30, 0x5f21d4
  05f1924  mr 4, 31
  05f1928  mr 5, 18
  05f192c  addi 3, 24, 1012
  05f1930  li 6, 1790
  05f1934  bl 0x5eb2e0
  05f1938  lwz 9, 1128(1)
  05f193c  mr 3, 26
  05f1940  li 4, 0
  05f1944  addi 5, 1, 116
  05f1948  li 6, 44
  05f194c  lwz 0, 0(9)
  05f1950  std 2, 40(1)
  05f1954  mtctr 0
  05f1958  lwz 2, 4(9)
  05f195c  bctrl
  05f1960  ld 2, 40(1)
  05f1964  lis 0, 26187
  05f1968  lwz 8, 116(1)
  05f196c  ori 0, 0, 18754
  05f1970  cmpw 7, 8, 0
  05f1974  bt 30, 0x5f1a5c
  05f1978  xoris 0, 8, 26443
  05f197c  cmpwi 7, 0, 18754
  05f1980  bt 30, 0x5f1a5c
  05f1984  xoris 0, 8, 26699
  05f1988  cmpwi 7, 0, 18754
  05f198c  bt 30, 0x5f1a5c
  05f1990  xoris 0, 8, 26955
  05f1994  cmpwi 7, 0, 18754
  05f1998  bt 30, 0x5f1a5c
  05f199c  lwz 8, -32372(2)
  05f19a0  li 0, 254
  05f19a4  mr 10, 24
  05f19a8  mtctr 0
  05f19ac  clrldi 9, 8, 32
  05f19b0  li 0, 78
  05f19b4  stb 0, 0(24)
  05f19b8  b 0x5f19c8
  05f19bc  lbz 0, 0(9)
  05f19c0  stb 0, 0(11)
  05f19c4  bdz- 0x5f21c4
  05f19c8  lbz 0, 0(9)
  05f19cc  addi 8, 8, 1
  05f19d0  addi 10, 10, 1
  05f19d4  cmpwi 7, 0, 0
  05f19d8  clrldi 9, 8, 32
  05f19dc  clrldi 11, 10, 32
  05f19e0  bf 30, 0x5f19bc
  05f19e4  bt 18, 0x5f2240
  05f19e8  li 15, 0
  05f19ec  lwz 12, 2200(1)
  05f19f0  clrldi 3, 15, 32
  05f19f4  ld 0, 2208(1)
  05f19f8  ld 14, 2048(1)
  05f19fc  mtocrf 16, 12
  05f1a00  ld 15, 2056(1)
  05f1a04  mtlr 0
  05f1a08  ld 16, 2064(1)
  05f1a0c  mtocrf 8, 12
  05f1a10  ld 17, 2072(1)
  05f1a14  ld 18, 2080(1)
  05f1a18  ld 19, 2088(1)
  05f1a1c  ld 20, 2096(1)
  05f1a20  ld 21, 2104(1)
  05f1a24  ld 22, 2112(1)
  05f1a28  ld 23, 2120(1)
  05f1a2c  ld 24, 2128(1)
  05f1a30  ld 25, 2136(1)
  05f1a34  ld 26, 2144(1)
  05f1a38  ld 27, 2152(1)
  05f1a3c  ld 28, 2160(1)
  05f1a40  ld 29, 2168(1)
  05f1a44  ld 30, 2176(1)
  05f1a48  ld 31, 2184(1)
  05f1a4c  addi 1, 1, 2192
  05f1a50  blr
  05f1a54  lwz 29, -32344(2)
  05f1a58  b 0x5f1884
  05f1a5c  lwz 0, 1192(1)
  05f1a60  cmpwi 7, 0, 0
  05f1a64  bf 30, 0x5f199c
  05f1a68  lwz 6, 124(1)
  05f1a6c  cmpwi 7, 6, 0
  05f1a70  bf 30, 0x5f1c30
  05f1a74  lwz 8, -32368(2)
  05f1a78  li 0, 254
  05f1a7c  mr 10, 24
  05f1a80  mtctr 0
  05f1a84  clrldi 9, 8, 32
  05f1a88  li 0, 84
  05f1a8c  stb 0, 0(24)
  05f1a90  b 0x5f1aa0
  05f1a94  lbz 0, 0(9)
  05f1a98  stb 0, 0(11)
  05f1a9c  bdz- 0x5f21c4
  05f1aa0  lbz 0, 0(9)
  05f1aa4  addi 8, 8, 1
  05f1aa8  addi 10, 10, 1
  05f1aac  cmpwi 7, 0, 0
  05f1ab0  clrldi 9, 8, 32
  05f1ab4  clrldi 11, 10, 32
  05f1ab8  bf 30, 0x5f1a94
  05f1abc  bf 18, 0x5f19e8
  05f1ac0  b 0x5f2240
  05f1ac4  addi 9, 1, 116
  05f1ac8  lbz 8, 0(29)
  05f1acc  lbz 0, 1(29)
  05f1ad0  clrldi 9, 9, 32
  05f1ad4  lbz 11, 2(29)
  05f1ad8  lbz 10, 3(29)
  05f1adc  stb 8, 0(9)
  05f1ae0  stb 0, 1(9)
  05f1ae4  stb 11, 2(9)
  05f1ae8  stb 10, 3(9)
  05f1aec  lbz 0, 4(29)
  05f1af0  lbz 11, 5(29)
  05f1af4  lbz 10, 6(29)
  05f1af8  lbz 8, 7(29)
  05f1afc  stb 0, 4(9)
  05f1b00  stb 11, 5(9)
  05f1b04  stb 10, 6(9)
  05f1b08  stb 8, 7(9)
  05f1b0c  lbz 0, 8(29)
  05f1b10  lbz 11, 9(29)
  05f1b14  lbz 10, 10(29)
  05f1b18  lbz 8, 11(29)
  05f1b1c  stb 0, 8(9)
  05f1b20  stb 11, 9(9)
  05f1b24  stb 10, 10(9)
  05f1b28  stb 8, 11(9)
  05f1b2c  lbz 0, 12(29)
  05f1b30  lbz 11, 13(29)
  05f1b34  lbz 10, 14(29)
  05f1b38  lbz 8, 15(29)
  05f1b3c  stb 0, 12(9)
  05f1b40  stb 11, 13(9)
  05f1b44  stb 10, 14(9)
  05f1b48  stb 8, 15(9)
  05f1b4c  lbz 11, 17(29)
  05f1b50  lbz 10, 18(29)
  05f1b54  lbz 8, 19(29)
  05f1b58  lbz 0, 16(29)
  05f1b5c  stb 0, 16(9)
  05f1b60  stb 11, 17(9)
  05f1b64  stb 10, 18(9)
  05f1b68  stb 8, 19(9)
  05f1b6c  lbz 0, 20(29)
  05f1b70  lbz 11, 21(29)
  05f1b74  lbz 10, 22(29)
  05f1b78  lbz 8, 23(29)
  05f1b7c  stb 0, 20(9)
  05f1b80  stb 11, 21(9)
  05f1b84  stb 10, 22(9)
  05f1b88  stb 8, 23(9)
  05f1b8c  lbz 0, 24(29)
  05f1b90  lbz 11, 25(29)
  05f1b94  lbz 10, 26(29)
  05f1b98  lbz 8, 27(29)
  05f1b9c  stb 0, 24(9)
  05f1ba0  stb 11, 25(9)
  05f1ba4  stb 10, 26(9)
  05f1ba8  stb 8, 27(9)
  05f1bac  lbz 0, 28(29)
  05f1bb0  lbz 11, 29(29)
  05f1bb4  lbz 10, 30(29)
  05f1bb8  lbz 8, 31(29)
  05f1bbc  stb 0, 28(9)
  05f1bc0  stb 8, 31(9)
  05f1bc4  stb 11, 29(9)
  05f1bc8  stb 10, 30(9)
  05f1bcc  lbz 7, 35(29)
  05f1bd0  lbz 0, 32(29)
  05f1bd4  lbz 11, 33(29)
  05f1bd8  lbz 10, 34(29)
  05f1bdc  stb 0, 32(9)
  05f1be0  stb 11, 33(9)
  05f1be4  stb 10, 34(9)
  05f1be8  stb 7, 35(9)
  05f1bec  lbz 0, 36(29)
  05f1bf0  lbz 11, 37(29)
  05f1bf4  lbz 10, 38(29)
  05f1bf8  lbz 8, 39(29)
  05f1bfc  stb 0, 36(9)
  05f1c00  stb 11, 37(9)
  05f1c04  stb 10, 38(9)
  05f1c08  stb 8, 39(9)
  05f1c0c  lbz 0, 43(29)
  05f1c10  lbz 11, 40(29)
  05f1c14  lbz 10, 41(29)
  05f1c18  lbz 8, 42(29)
  05f1c1c  stb 0, 43(9)
  05f1c20  stb 11, 40(9)
  05f1c24  stb 10, 41(9)
  05f1c28  stb 8, 42(9)
  05f1c2c  b 0x5f1964
  05f1c30  lwz 5, 132(1)
  05f1c34  cmplw 7, 6, 5
  05f1c38  bt 29, 0x5f2170
  05f1c3c  lis 0, 15
  05f1c40  ori 0, 0, 16960
  05f1c44  cmplw 7, 5, 0
  05f1c48  bt 29, 0x5f2170
  05f1c4c  lwz 29, 120(1)
  05f1c50  lwz 18, 128(1)
  05f1c54  cmplw 7, 18, 29
  05f1c58  bt 29, 0x5f2170
  05f1c5c  lwz 26, 156(1)
  05f1c60  cmplwi 7, 26, 256
  05f1c64  bt 29, 0x5f2170
  05f1c68  slwi 9, 26, 2
  05f1c6c  addi 9, 9, 4
  05f1c70  mullw 9, 5, 9
  05f1c74  cmplw 7, 9, 29
  05f1c78  bt 29, 0x5f2170
  05f1c7c  lwz 3, 136(1)
  05f1c80  cmplwi 7, 3, 32767
  05f1c84  bt 29, 0x5f2170
  05f1c88  lwz 31, 140(1)
  05f1c8c  cmplwi 7, 31, 32767
  05f1c90  bt 29, 0x5f2170
  05f1c94  lwz 28, 144(1)
  05f1c98  cmpwi 7, 28, 0
  05f1c9c  bt 30, 0x5f2170
  05f1ca0  lwz 27, 148(1)
  05f1ca4  cmpwi 7, 27, 0
  05f1ca8  bt 30, 0x5f2170
  05f1cac  addi 9, 3, 15
  05f1cb0  lwz 4, 152(1)
  05f1cb4  rlwinm 0, 30, 1, 3, 31
  05f1cb8  srwi 9, 9, 4
  05f1cbc  rlwinm 11, 4, 0, 11, 11
  05f1cc0  rlwinm 10, 4, 0, 14, 14
  05f1cc4  addi 9, 9, 15
  05f1cc8  rotlwi 0, 0, 31
  05f1ccc  cmpwi 7, 11, 0
  05f1cd0  rlwinm 9, 9, 0, 0, 27
  05f1cd4  or 7, 0, 10
  05f1cd8  stw 9, 968(1)
  05f1cdc  stw 31, 1092(1)
  05f1ce0  stw 3, 728(1)
  05f1ce4  stw 31, 732(1)
  05f1ce8  stw 3, 1088(1)
  05f1cec  stw 8, 1972(1)
  05f1cf0  stw 4, 764(1)
  05f1cf4  stw 7, 760(1)
  05f1cf8  bf 30, 0x5f1d08
  05f1cfc  rlwinm 7, 7, 11, 1, 31
  05f1d00  rotlwi 7, 7, 21
  05f1d04  stw 7, 760(1)
  05f1d08  rlwinm 9, 30, 0, 1, 3
  05f1d0c  lis 0, 28672
  05f1d10  cmpw 7, 9, 0
  05f1d14  bt 30, 0x5f1d5c
  05f1d18  cmpwi 7, 9, 0
  05f1d1c  bt 30, 0x5f2844
  05f1d20  lwz 7, 760(1)
  05f1d24  or 7, 7, 9
  05f1d28  stw 7, 760(1)
  05f1d2c  rlwinm 9, 7, 0, 1, 3
  05f1d30  lis 0, 12288
  05f1d34  cmpw 7, 9, 0
  05f1d38  bt 30, 0x5f2830
  05f1d3c  cmplw 7, 9, 0
  05f1d40  bt 29, 0x5f27fc
  05f1d44  lis 0, 4096
  05f1d48  cmpw 7, 9, 0
  05f1d4c  bt 30, 0x5f27ec
  05f1d50  lis 0, 8192
  05f1d54  cmpw 7, 9, 0
  05f1d58  bt 30, 0x5f27ec
  05f1d5c  lwz 10, 732(1)
  05f1d60  xoris 0, 8, 26187
  05f1d64  cmpwi 7, 0, 18754
  05f1d68  bt 30, 0x5f24d4
  05f1d6c  xoris 0, 8, 26443
  05f1d70  cmpwi 7, 0, 18754
  05f1d74  bt 30, 0x5f24d4
  05f1d78  xoris 0, 8, 26699
  05f1d7c  cmpwi 7, 0, 18754
  05f1d80  bf 30, 0x5f1d90
  05f1d84  lwz 0, 760(1)
  05f1d88  ori 0, 0, 32768
  05f1d8c  stw 0, 760(1)
  05f1d90  rlwinm 0, 30, 0, 19, 19
  05f1d94  stw 6, 736(1)
  05f1d98  cmpwi 7, 0, 0
  05f1d9c  stw 5, 980(1)
  05f1da0  bt 30, 0x5f24c8
  05f1da4  lwz 9, 8(25)
  05f1da8  cmpwi 7, 9, -1
  05f1dac  bt 30, 0x5f24c8
  05f1db0  lwz 0, 12(25)
  05f1db4  stw 9, 748(1)
  05f1db8  stw 0, 752(1)
  05f1dbc  srwi 11, 27, 1
  05f1dc0  lwz 0, 968(1)
  05f1dc4  addi 9, 10, 15
  05f1dc8  add 11, 11, 28
  05f1dcc  srwi 9, 9, 4
  05f1dd0  stw 29, 768(1)
  05f1dd4  mullw 0, 0, 9
  05f1dd8  stw 26, 784(1)
  05f1ddc  stw 18, 976(1)
  05f1de0  stw 0, 972(1)
  05f1de4  stw 28, 1912(1)
  05f1de8  stw 27, 1916(1)
  05f1dec  divwu 11, 11, 27
  05f1df0  cmpwi 7, 11, 0
  05f1df4  stw 11, 1832(1)
  05f1df8  bf 30, 0x5f1e04
  05f1dfc  li 0, 1
  05f1e00  stw 0, 1832(1)
  05f1e04  clrldi 29, 21, 32
  05f1e08  lwz 5, 1832(1)
  05f1e0c  addi 4, 1, 1804
  05f1e10  mr 3, 29
  05f1e14  slwi 5, 5, 2
  05f1e18  cmpwi 3, 19, 0
  05f1e1c  bl 0x5fd700
  05f1e20  nop
  05f1e24  lwz 5, 1832(1)
  05f1e28  mr 3, 29
  05f1e2c  slwi 5, 5, 2
  05f1e30  addi 4, 1, 1808
  05f1e34  bl 0x5fd700
  05f1e38  nop
  05f1e3c  lwz 5, 1832(1)
  05f1e40  mr 3, 29
  05f1e44  slwi 5, 5, 2
  05f1e48  addi 4, 1, 1812
  05f1e4c  bl 0x5fd700
  05f1e50  nop
  05f1e54  lwz 5, 1832(1)
  05f1e58  mr 3, 29
  05f1e5c  slwi 5, 5, 2
  05f1e60  addi 4, 1, 1816
  05f1e64  bl 0x5fd700
  05f1e68  nop
  05f1e6c  lwz 5, 1832(1)
  05f1e70  mr 3, 29
  05f1e74  slwi 5, 5, 2
  05f1e78  addi 4, 1, 1820
  05f1e7c  bl 0x5fd700
  05f1e80  nop
  05f1e84  lwz 5, 1832(1)
  05f1e88  mr 3, 29
  05f1e8c  slwi 5, 5, 2
  05f1e90  addi 4, 1, 1824
  05f1e94  bl 0x5fd700
  05f1e98  nop
  05f1e9c  lwz 5, 1832(1)
  05f1ea0  mr 3, 29
  05f1ea4  slwi 5, 5, 2
  05f1ea8  addi 4, 1, 1828
  05f1eac  bl 0x5fd700
  05f1eb0  nop
  05f1eb4  bf 14, 0x5f27dc
  05f1eb8  li 0, 384
  05f1ebc  clrldi 31, 21, 32
  05f1ec0  rlwinm 5, 0, 0, 0, 24
  05f1ec4  addi 4, 1, 1068
  05f1ec8  mr 3, 31
  05f1ecc  bl 0x5fd700
  05f1ed0  nop
  05f1ed4  mr 3, 31
  05f1ed8  addi 4, 1, 964
  05f1edc  slwi 5, 19, 2
  05f1ee0  bl 0x5fd700
  05f1ee4  nop
  05f1ee8  lwz 4, 728(1)
  05f1eec  addi 4, 4, 15
  05f1ef0  addi 3, 1, 1032
  05f1ef4  rlwinm 4, 4, 0, 0, 27
  05f1ef8  bl 0x5f8758
  05f1efc  nop
  05f1f00  bf 18, 0x5f1f34
  05f1f04  lwz 5, 784(1)
  05f1f08  mr 3, 31
  05f1f0c  addi 4, 1, 1096
  05f1f10  slwi 0, 5, 1
  05f1f14  add 5, 5, 0
  05f1f18  lwz 0, 980(1)
  05f1f1c  add 5, 5, 0
  05f1f20  slwi 5, 5, 2
  05f1f24  addi 5, 5, 260
  05f1f28  rlwinm 5, 5, 0, 0, 29
  05f1f2c  bl 0x5fd700
  05f1f30  nop
  05f1f34  lwz 29, 1856(1)
  05f1f38  mr 3, 31
  05f1f3c  addi 29, 29, 1264
  05f1f40  bl 0x5fd778
  05f1f44  nop
  05f1f48  add 0, 3, 29
  05f1f4c  li 4, 1264
  05f1f50  mr 3, 31
  05f1f54  stw 0, 1856(1)
  05f1f58  bl 0x5fd790
  05f1f5c  nop
  05f1f60  cmpwi 7, 3, 0
  05f1f64  mr 17, 3
  05f1f68  bt 30, 0x5f2788
  05f1f6c  mr 4, 23
  05f1f70  clrldi 23, 3, 32
  05f1f74  mr 15, 3
  05f1f78  li 5, 1264
  05f1f7c  mr 3, 23
  05f1f80  bl 0x5c5ad0
  05f1f84  nop
  05f1f88  lwz 11, 1080(23)
  05f1f8c  li 0, 0
  05f1f90  stw 17, 428(23)
  05f1f94  stw 0, 0(11)
  05f1f98  lwz 9, 1084(23)
  05f1f9c  stw 0, 0(9)
  05f1fa0  lwz 11, 1088(23)
  05f1fa4  stw 0, 0(11)
  05f1fa8  lwz 9, 1092(23)
  05f1fac  stw 0, 0(9)
  05f1fb0  lwz 11, 1096(23)
  05f1fb4  stw 0, 0(11)
  05f1fb8  lwz 9, 1100(23)
  05f1fbc  stw 0, 0(9)
  05f1fc0  bt 18, 0x5f26a0
  05f1fc4  lwz 9, 56(23)
  05f1fc8  addi 0, 22, 44
  05f1fcc  slwi 10, 9, 2
  05f1fd0  slwi 11, 9, 4
  05f1fd4  slwi 9, 9, 3
  05f1fd8  sub 11, 11, 10
  05f1fdc  add 9, 22, 9
  05f1fe0  add 11, 22, 11
  05f1fe4  add 10, 22, 10
  05f1fe8  addi 9, 9, 44
  05f1fec  addi 10, 10, 44
  05f1ff0  addi 11, 11, 44
  05f1ff4  stw 0, 368(23)
  05f1ff8  stw 10, 372(23)
  05f1ffc  stw 9, 376(23)
  05f2000  stw 11, 344(23)
  05f2004  lwz 3, 8(23)
  05f2008  lwz 31, 1104(23)
  05f200c  lwz 6, 344(23)
  05f2010  sub 5, 3, 31
  05f2014  cmpwi 7, 5, 0
  05f2018  bt 28, 0x5f22b0
  05f201c  bf 29, 0x5f22b4
  05f2020  addi 7, 6, 4
  05f2024  clrldi 26, 6, 32
  05f2028  clrldi 11, 7, 32
  05f202c  slwi 0, 31, 2
  05f2030  add 8, 6, 0
  05f2034  lwz 10, 0(26)
  05f2038  lwz 0, 0(11)
  05f203c  clrldi 9, 8, 32
  05f2040  cmplw 7, 0, 10
  05f2044  lwz 9, 0(9)
  05f2048  bf 29, 0x5f22c4
  05f204c  clrldi 0, 5, 32
  05f2050  mr 11, 7
  05f2054  clrlwi 29, 10, 31
  05f2058  mtctr 0
  05f205c  sub 9, 9, 10
  05f2060  addi 8, 8, 4
  05f2064  li 4, 0
  05f2068  li 7, 0
  05f206c  li 18, 0
  05f2070  li 12, 0
  05f2074  b 0x5f2094
  05f2078  lwz 10, 0(10)
  05f207c  lwz 0, 0(27)
  05f2080  lwz 9, 0(28)
  05f2084  and 29, 10, 29
  05f2088  cmplw 7, 0, 10
  05f208c  sub 9, 9, 10
  05f2090  bf 29, 0x5f22c4
  05f2094  cmplw 7, 7, 9
  05f2098  addi 0, 11, 4
  05f209c  clrldi 10, 11, 32
  05f20a0  clrldi 28, 8, 32
  05f20a4  clrldi 27, 0, 32
  05f20a8  addi 8, 8, 4
  05f20ac  mr 11, 0
  05f20b0  bf 28, 0x5f20bc
  05f20b4  mr 7, 9
  05f20b8  mr 18, 12
  05f20bc  addi 4, 4, 1
  05f20c0  mr 12, 4
  05f20c4  bdnz 0x5f2078
  05f20c8  cmpwi 7, 7, 0
  05f20cc  bf 30, 0x5f20f8
  05f20d0  slwi 9, 3, 2
  05f20d4  lwz 8, 0(26)
  05f20d8  clrldi 11, 31, 32
  05f20dc  add 9, 6, 9
  05f20e0  clrldi 10, 3, 32
  05f20e4  clrldi 9, 9, 32
  05f20e8  lwz 0, 0(9)
  05f20ec  sub 0, 0, 8
  05f20f0  mulld 0, 0, 11
  05f20f4  divdu 7, 0, 10
  05f20f8  cmpw 7, 3, 5
  05f20fc  bf 29, 0x5f2164
  05f2100  slwi 9, 5, 2
  05f2104  sub 0, 3, 5
  05f2108  add 9, 6, 9
  05f210c  clrldi 0, 0, 32
  05f2110  addi 11, 9, 4
  05f2114  clrldi 9, 9, 32
  05f2118  mtctr 0
  05f211c  clrldi 10, 11, 32
  05f2120  mr 8, 11
  05f2124  lwz 0, 0(9)
  05f2128  lwz 11, 0(10)
  05f212c  and 29, 29, 0
  05f2130  cmplw 7, 0, 11
  05f2134  bt 28, 0x5f2150
  05f2138  b 0x5f22c4
  05f213c  lwz 9, 0(9)
  05f2140  lwz 0, 0(11)
  05f2144  and 29, 9, 29
  05f2148  cmplw 7, 0, 9
  05f214c  bf 29, 0x5f22c4
  05f2150  addi 0, 8, 4
  05f2154  clrldi 9, 8, 32
  05f2158  clrldi 11, 0, 32
  05f215c  mr 8, 0
  05f2160  bdnz 0x5f213c
  05f2164  stw 29, 1236(23)
  05f2168  stw 18, 204(23)
  05f216c  b 0x5f22c8
  05f2170  lwz 8, -32364(2)
  05f2174  li 0, 254
  05f2178  mr 10, 24
  05f217c  mtctr 0
  05f2180  clrldi 9, 8, 32
  05f2184  li 0, 84
  05f2188  stb 0, 0(24)
  05f218c  b 0x5f219c
  05f2190  lbz 0, 0(9)
  05f2194  stb 0, 0(11)
  05f2198  bdz- 0x5f21c4
  05f219c  lbz 0, 0(9)
  05f21a0  addi 8, 8, 1
  05f21a4  addi 10, 10, 1
  05f21a8  cmpwi 7, 0, 0
  05f21ac  clrldi 9, 8, 32
  05f21b0  clrldi 11, 10, 32
  05f21b4  bf 30, 0x5f2190
  05f21b8  bf 18, 0x5f19e8
  05f21bc  b 0x5f2240
  05f21c0  cmpwi 4, 20, 0
  05f21c4  li 0, 0
  05f21c8  stb 0, 0(11)
  05f21cc  bf 18, 0x5f19e8
  05f21d0  b 0x5f2240
  05f21d4  mr 3, 28
  05f21d8  mr 4, 31
  05f21dc  mr 5, 18
  05f21e0  li 6, 1781
  05f21e4  bl 0x5eb2e0
  05f21e8  lbz 0, 0(24)
  05f21ec  cmpwi 7, 0, 0
  05f21f0  bf 30, 0x5f19e8
  05f21f4  lwz 10, -32348(2)
  05f21f8  li 0, 254
  05f21fc  mr 8, 24
  05f2200  mtctr 0
  05f2204  clrldi 9, 10, 32
  05f2208  li 0, 69
  05f220c  stb 0, 0(24)
  05f2210  b 0x5f2220
  05f2214  lbz 0, 0(9)
  05f2218  stb 0, 0(11)
  05f221c  bdz- 0x5f22a0
  05f2220  lbz 0, 0(9)
  05f2224  addi 10, 10, 1
  05f2228  addi 8, 8, 1
  05f222c  cmpwi 7, 0, 0
  05f2230  clrldi 9, 10, 32
  05f2234  clrldi 11, 8, 32
  05f2238  bf 30, 0x5f2214
  05f223c  b 0x5f19e8
  05f2240  addi 29, 24, 1012
  05f2244  lwz 27, -32492(2)
  05f2248  lwz 28, -32516(2)
  05f224c  li 6, 1807
  05f2250  clrldi 29, 29, 32
  05f2254  mr 4, 27
  05f2258  mr 5, 28
  05f225c  mr 3, 29
  05f2260  li 15, 0
  05f2264  bl 0x5eb0f8
  05f2268  lwz 9, 1148(1)
  05f226c  addi 3, 1, 1128
  05f2270  lwz 0, 0(9)
  05f2274  std 2, 40(1)
  05f2278  mtctr 0
  05f227c  lwz 2, 4(9)
  05f2280  bctrl
  05f2284  ld 2, 40(1)
  05f2288  mr 3, 29
  05f228c  mr 4, 27
  05f2290  mr 5, 28
  05f2294  li 6, 1813
  05f2298  bl 0x5eb2e0
  05f229c  b 0x5f19ec
  05f22a0  li 0, 0
  05f22a4  li 15, 0
  05f22a8  stb 0, 0(11)
  05f22ac  b 0x5f19ec
  05f22b0  li 5, 0
  05f22b4  li 29, 1
  05f22b8  li 18, 0
  05f22bc  clrldi 26, 6, 32
  05f22c0  b 0x5f20d0
  05f22c4  li 7, -1
  05f22c8  cmpwi 7, 7, -1
  05f22cc  stw 7, 200(23)
  05f22d0  bt 30, 0x5f28cc
  05f22d4  rlwinm 10, 30, 0, 21, 21
  05f22d8  cmpwi 7, 10, 0
  05f22dc  bf 30, 0x5f2548
  05f22e0  stw 10, 180(1)
  05f22e4  lwz 9, 360(23)
  05f22e8  li 0, 1
  05f22ec  addi 9, 9, 7
  05f22f0  rlwinm 9, 9, 0, 0, 28
  05f22f4  stw 9, 164(1)
  05f22f8  lwz 11, 364(23)
  05f22fc  addi 11, 11, 7
  05f2300  rlwinm 11, 11, 0, 0, 28
  05f2304  stw 11, 168(1)
  05f2308  lwz 9, 360(23)
  05f230c  addi 9, 9, 1
  05f2310  srwi 9, 9, 1
  05f2314  addi 9, 9, 7
  05f2318  rlwinm 9, 9, 0, 0, 28
  05f231c  stw 9, 172(1)
  05f2320  lwz 11, 364(23)
  05f2324  stw 0, 208(1)
  05f2328  addi 11, 11, 1
  05f232c  stw 0, 184(1)
  05f2330  srwi 11, 11, 1
  05f2334  stw 0, 196(1)
  05f2338  addi 11, 11, 7
  05f233c  rlwinm 11, 11, 0, 0, 28
  05f2340  stw 11, 176(1)
  05f2344  lwz 0, 32(23)
  05f2348  stw 10, 228(1)
  05f234c  rldicl 0, 0, 44, 63
  05f2350  stw 10, 188(1)
  05f2354  stw 0, 220(1)
  05f2358  stw 10, 200(1)
  05f235c  stw 10, 212(1)
  05f2360  stw 10, 224(1)
  05f2364  stw 10, 192(1)
  05f2368  stw 10, 204(1)
  05f236c  stw 10, 216(1)
  05f2370  lwz 0, 8(23)
  05f2374  cmpwi 7, 0, 1
  05f2378  bt 30, 0x5f2974
  05f237c  li 0, 2
  05f2380  ld 9, 184(1)
  05f2384  stw 0, 160(1)
  05f2388  ld 0, 192(1)
  05f238c  std 9, 232(1)
  05f2390  std 0, 240(1)
  05f2394  ld 9, 200(1)
  05f2398  ld 0, 208(1)
  05f239c  std 9, 248(1)
  05f23a0  std 0, 256(1)
  05f23a4  ld 9, 216(1)
  05f23a8  ld 0, 224(1)
  05f23ac  std 9, 264(1)
  05f23b0  std 0, 272(1)
  05f23b4  li 31, 0
  05f23b8  li 8, 0
  05f23bc  addi 18, 1, 184
  05f23c0  addi 26, 1, 220
  05f23c4  addi 27, 1, 208
  05f23c8  b 0x5f2450
  05f23cc  slwi 11, 31, 4
  05f23d0  lwz 9, 12(28)
  05f23d4  slwi 0, 31, 6
  05f23d8  cmpwi 7, 9, 0
  05f23dc  sub 0, 0, 11
  05f23e0  mr 3, 21
  05f23e4  add 4, 0, 1
  05f23e8  addi 0, 4, 200
  05f23ec  bf 30, 0x5f287c
  05f23f0  slwi 11, 31, 4
  05f23f4  lwz 9, 0(14)
  05f23f8  slwi 0, 31, 6
  05f23fc  cmpwi 7, 9, 0
  05f2400  sub 0, 0, 11
  05f2404  mr 3, 21
  05f2408  add 4, 0, 1
  05f240c  addi 0, 4, 212
  05f2410  bf 30, 0x5f2858
  05f2414  slwi 9, 31, 4
  05f2418  slwi 0, 31, 6
  05f241c  mr 3, 21
  05f2420  sub 0, 0, 9
  05f2424  ld 9, 2008(1)
  05f2428  addi 31, 31, 1
  05f242c  add 4, 0, 1
  05f2430  addi 0, 4, 224
  05f2434  lwz 11, 0(9)
  05f2438  rlwinm 4, 0, 0, 0, 27
  05f243c  cmpwi 7, 11, 0
  05f2440  bf 30, 0x5f28a0
  05f2444  lwz 0, 160(1)
  05f2448  cmpw 7, 0, 31
  05f244c  bf 29, 0x5f24e8
  05f2450  slwi 9, 31, 4
  05f2454  clrldi 28, 18, 32
  05f2458  slwi 0, 31, 6
  05f245c  clrldi 14, 27, 32
  05f2460  sub 0, 0, 9
  05f2464  clrldi 9, 26, 32
  05f2468  add 4, 0, 1
  05f246c  std 9, 2008(1)
  05f2470  lwz 11, 0(28)
  05f2474  addi 0, 4, 188
  05f2478  lwz 9, 172(1)
  05f247c  mr 3, 21
  05f2480  cmpwi 7, 11, 0
  05f2484  addi 9, 9, 15
  05f2488  rlwinm 4, 0, 0, 0, 29
  05f248c  addi 18, 18, 48
  05f2490  addi 26, 26, 48
  05f2494  addi 27, 27, 48
  05f2498  rlwinm 29, 9, 0, 0, 27
  05f249c  bt 30, 0x5f23cc
  05f24a0  lwz 0, 168(1)
  05f24a4  lwz 5, 164(1)
  05f24a8  mullw 5, 5, 0
  05f24ac  clrldi 5, 5, 32
  05f24b0  bl 0x5fd700
  05f24b4  nop
  05f24b8  lwz 0, 164(1)
  05f24bc  li 8, 1
  05f24c0  stw 0, 8(28)
  05f24c4  b 0x5f23cc
  05f24c8  stw 28, 748(1)
  05f24cc  stw 27, 752(1)
  05f24d0  b 0x5f1dbc
  05f24d4  lwz 0, 760(1)
  05f24d8  oris 0, 0, 1
  05f24dc  ori 7, 0, 32768
  05f24e0  stw 7, 760(1)
  05f24e4  b 0x5f1d90
  05f24e8  cmpwi 7, 31, 1
  05f24ec  bt 29, 0x5f2540
  05f24f0  addi 0, 31, 1
  05f24f4  slwi 11, 31, 4
  05f24f8  slwi 9, 31, 6
  05f24fc  cmpwi 7, 0, 2
  05f2500  sub 9, 9, 11
  05f2504  subfic 0, 31, 2
  05f2508  add 9, 9, 1
  05f250c  clrldi 0, 0, 32
  05f2510  addi 10, 9, 188
  05f2514  mtctr 0
  05f2518  bf+ 29, 0x5f2524
  05f251c  li 9, 1
  05f2520  mtctr 9
  05f2524  clrldi 9, 10, 32
  05f2528  li 0, 0
  05f252c  addi 10, 10, 48
  05f2530  stw 0, 0(9)
  05f2534  stw 0, 12(9)
  05f2538  stw 0, 24(9)
  05f253c  bdnz 0x5f2524
  05f2540  cmpwi 7, 8, 0
  05f2544  bf 30, 0x5f2918
  05f2548  rlwinm 0, 30, 0, 7, 7
  05f254c  cmpwi 7, 0, 0
  05f2550  bt 30, 0x5f2568
  05f2554  lwz 0, 16(25)
  05f2558  cmpwi 7, 0, -1
  05f255c  bt 30, 0x5f2568
  05f2560  cmpwi 7, 0, 0
  05f2564  bf 30, 0x5f256c
  05f2568  lwz 0, 200(23)
  05f256c  stw 0, 1112(23)
  05f2570  rlwinm 0, 30, 0, 9, 9
  05f2574  cmpwi 7, 0, 0
  05f2578  bt 30, 0x5f2594
  05f257c  lwz 0, 20(25)
  05f2580  cmpwi 7, 0, -1
  05f2584  bt 30, 0x5f2594
  05f2588  cmpwi 7, 0, 0
  05f258c  mr 31, 0
  05f2590  bf 30, 0x5f259c
  05f2594  li 31, 0
  05f2598  li 0, 0
  05f259c  stw 0, 384(23)
  05f25a0  bt 18, 0x5f3564
  05f25a4  lwz 11, 344(23)
  05f25a8  lwz 9, 32(23)
  05f25ac  oris 9, 9, 2048
  05f25b0  lwz 0, 0(11)
  05f25b4  stw 9, 32(23)
  05f25b8  rlwinm 0, 0, 0, 0, 30
  05f25bc  add 0, 0, 22
  05f25c0  stw 0, 380(23)
  05f25c4  lwz 9, 20(23)
  05f25c8  li 0, -1
  05f25cc  cmpwi 7, 9, 0
  05f25d0  stw 0, 12(23)
  05f25d4  bt 30, 0x5f3138
  05f25d8  lwz 0, 24(23)
  05f25dc  clrldi 9, 9, 32
  05f25e0  mulli 0, 0, 2000
  05f25e4  divdu 0, 0, 9
  05f25e8  stw 0, 1148(23)
  05f25ec  li 0, 1
  05f25f0  stw 0, 276(23)
  05f25f4  bl 0x5f5090
  05f25f8  nop
  05f25fc  lwz 11, 340(23)
  05f2600  lwz 0, 1180(23)
  05f2604  sub 3, 3, 0
  05f2608  lis 0, 1
  05f260c  stw 3, 1180(23)
  05f2610  stw 0, 60(11)
  05f2614  lwz 9, 56(23)
  05f2618  li 0, 0
  05f261c  cmpwi 7, 9, 0
  05f2620  stw 0, 292(23)
  05f2624  bt 30, 0x5f2a30
  05f2628  bt 14, 0x5f2a30
  05f262c  mr 29, 16
  05f2630  li 27, 0
  05f2634  li 26, 0
  05f2638  lwz 0, 56(23)
  05f263c  cmpwi 7, 0, 0
  05f2640  bf 29, 0x5f2a18
  05f2644  lwz 11, 376(23)
  05f2648  clrldi 6, 29, 32
  05f264c  li 8, 0
  05f2650  li 10, 4
  05f2654  li 31, 0
  05f2658  lwz 9, 0(11)
  05f265c  lwz 0, 0(6)
  05f2660  cmpw 7, 9, 0
  05f2664  bt 30, 0x5f2980
  05f2668  addi 8, 8, 1
  05f266c  lwz 0, 56(23)
  05f2670  addi 7, 10, 4
  05f2674  cmpw 7, 0, 8
  05f2678  bf 29, 0x5f2a18
  05f267c  lwz 9, 376(23)
  05f2680  lwz 11, 0(6)
  05f2684  add 9, 9, 10
  05f2688  clrldi 9, 9, 32
  05f268c  lwz 0, 0(9)
  05f2690  cmpw 7, 0, 11
  05f2694  bt 30, 0x5f297c
  05f2698  mr 10, 7
  05f269c  b 0x5f2668
  05f26a0  lwz 6, 784(1)
  05f26a4  addi 3, 17, 400
  05f26a8  lwz 5, 368(23)
  05f26ac  li 4, -1
  05f26b0  slwi 0, 6, 1
  05f26b4  lwz 11, 400(23)
  05f26b8  addi 5, 5, 256
  05f26bc  add 6, 6, 0
  05f26c0  lwz 0, 980(1)
  05f26c4  rlwinm 5, 5, 0, 0, 24
  05f26c8  add 6, 6, 0
  05f26cc  addi 5, 5, -84
  05f26d0  slwi 6, 6, 2
  05f26d4  stw 5, 368(23)
  05f26d8  lwz 0, 0(11)
  05f26dc  addi 6, 6, 4
  05f26e0  std 2, 40(1)
  05f26e4  mtctr 0
  05f26e8  lwz 2, 4(11)
  05f26ec  clrldi 3, 3, 32
  05f26f0  rlwinm 5, 5, 0, 0, 29
  05f26f4  rlwinm 6, 6, 0, 0, 29
  05f26f8  bctrl
  05f26fc  ld 2, 40(1)
  05f2700  lwz 0, 784(1)
  05f2704  lwz 9, 368(23)
  05f2708  slwi 0, 0, 2
  05f270c  lwz 11, 464(23)
  05f2710  add 9, 9, 0
  05f2714  cmpwi 7, 11, 0
  05f2718  add 10, 9, 0
  05f271c  stw 9, 372(23)
  05f2720  add 0, 10, 0
  05f2724  stw 10, 376(23)
  05f2728  stw 0, 344(23)
  05f272c  bt 30, 0x5f2004
  05f2730  li 0, 254
  05f2734  lwz 10, -32352(2)
  05f2738  mr 8, 24
  05f273c  mtctr 0
  05f2740  li 0, 69
  05f2744  clrldi 9, 10, 32
  05f2748  stb 0, 0(24)
  05f274c  lbz 0, 0(9)
  05f2750  addi 10, 10, 1
  05f2754  addi 8, 8, 1
  05f2758  cmpwi 7, 0, 0
  05f275c  clrldi 9, 10, 32
  05f2760  clrldi 11, 8, 32
  05f2764  bt 30, 0x5f277c
  05f2768  lbz 0, 0(9)
  05f276c  stb 0, 0(11)
  05f2770  bdnz+ 0x5f274c
  05f2774  li 0, 0
  05f2778  stb 0, 0(11)
  05f277c  mr 3, 23
  05f2780  bl 0x5f516c
  05f2784  nop
  05f2788  lwz 10, -32360(2)
  05f278c  li 0, 254
  05f2790  mr 8, 24
  05f2794  mtctr 0
  05f2798  clrldi 9, 10, 32
  05f279c  li 0, 79
  05f27a0  stb 0, 0(24)
  05f27a4  b 0x5f27b4
  05f27a8  lbz 0, 0(9)
  05f27ac  stb 0, 0(11)
  05f27b0  bdz- 0x5f21c0
  05f27b4  lbz 0, 0(9)
  05f27b8  addi 10, 10, 1
  05f27bc  addi 8, 8, 1
  05f27c0  cmpwi 7, 0, 0
  05f27c4  clrldi 9, 10, 32
  05f27c8  clrldi 11, 8, 32
  05f27cc  bf 30, 0x5f27a8
  05f27d0  cmpwi 4, 20, 0
  05f27d4  bf 18, 0x5f19e8
  05f27d8  b 0x5f2240
  05f27dc  slwi 9, 19, 7
  05f27e0  slwi 0, 19, 9
  05f27e4  sub 0, 0, 9
  05f27e8  b 0x5f1ebc
  05f27ec  lwz 10, 732(1)
  05f27f0  slwi 10, 10, 1
  05f27f4  stw 10, 732(1)
  05f27f8  b 0x5f1d60
  05f27fc  lis 0, 16384
  05f2800  cmpw 7, 9, 0
  05f2804  bt 30, 0x5f2814
  05f2808  lis 0, 20480
  05f280c  cmpw 7, 9, 0
  05f2810  bf 30, 0x5f1d5c
  05f2814  lwz 10, 732(1)
  05f2818  lwz 0, 728(1)
  05f281c  slwi 10, 10, 1
  05f2820  slwi 0, 0, 1
  05f2824  stw 10, 732(1)
  05f2828  stw 0, 728(1)
  05f282c  b 0x5f1d60
  05f2830  lwz 0, 728(1)
  05f2834  lwz 10, 732(1)
  05f2838  slwi 0, 0, 1
  05f283c  stw 0, 728(1)
  05f2840  b 0x5f1d60
  05f2844  lwz 7, 760(1)
  05f2848  rlwinm 0, 4, 0, 1, 3
  05f284c  or 7, 7, 0
  05f2850  stw 7, 760(1)
  05f2854  b 0x5f1d2c
  05f2858  lwz 5, 176(1)
  05f285c  rlwinm 4, 0, 0, 0, 29
  05f2860  mullw 5, 29, 5
  05f2864  rlwinm 5, 5, 0, 0, 27
  05f2868  bl 0x5fd700
  05f286c  nop
  05f2870  li 8, 1
  05f2874  stw 29, 8(14)
  05f2878  b 0x5f2414
  05f287c  lwz 5, 176(1)
  05f2880  rlwinm 4, 0, 0, 0, 28
  05f2884  mullw 5, 29, 5
  05f2888  rlwinm 5, 5, 0, 0, 27
  05f288c  bl 0x5fd700
  05f2890  nop
  05f2894  li 8, 1
  05f2898  stw 29, 20(28)
  05f289c  b 0x5f23f0
  05f28a0  lwz 0, 168(1)
  05f28a4  lwz 5, 164(1)
  05f28a8  mullw 5, 5, 0
  05f28ac  clrldi 5, 5, 32
  05f28b0  bl 0x5fd700
  05f28b4  nop
  05f28b8  ld 9, 2008(1)
  05f28bc  lwz 0, 164(1)
  05f28c0  li 8, 1
  05f28c4  stw 0, 8(9)
  05f28c8  b 0x5f2444
  05f28cc  lwz 10, -32356(2)
  05f28d0  li 0, 254
  05f28d4  mr 8, 24
  05f28d8  mtctr 0
  05f28dc  clrldi 9, 10, 32
  05f28e0  li 0, 84
  05f28e4  stb 0, 0(24)
  05f28e8  b 0x5f28f8
  05f28ec  lbz 0, 0(9)
  05f28f0  stb 0, 0(11)
  05f28f4  bdz- 0x5f2774
  05f28f8  lbz 0, 0(9)
  05f28fc  addi 10, 10, 1
  05f2900  addi 8, 8, 1
  05f2904  cmpwi 7, 0, 0
  05f2908  clrldi 9, 10, 32
  05f290c  clrldi 11, 8, 32
  05f2910  bf 30, 0x5f28ec
  05f2914  b 0x5f277c
  05f2918  clrldi 28, 21, 32
  05f291c  lwz 29, 1128(23)
  05f2920  mr 3, 28
  05f2924  addi 29, 29, 120
  05f2928  bl 0x5fd778
  05f292c  nop
  05f2930  li 4, 120
  05f2934  add 0, 3, 29
  05f2938  mr 3, 28
  05f293c  stw 0, 1128(23)
  05f2940  bl 0x5fd790
  05f2944  nop
  05f2948  cmpwi 7, 3, 0
  05f294c  mr 0, 3
  05f2950  stw 0, 1252(23)
  05f2954  bt 30, 0x5f277c
  05f2958  addi 4, 1, 160
  05f295c  li 5, 120
  05f2960  clrldi 3, 3, 32
  05f2964  stw 0, 208(23)
  05f2968  bl 0x5c5ad0
  05f296c  nop
  05f2970  b 0x5f2548
  05f2974  stw 0, 160(1)
  05f2978  b 0x5f23b4
  05f297c  mr 31, 10
  05f2980  lwz 9, 292(23)
  05f2984  li 5, 0
  05f2988  lwz 11, 236(23)
  05f298c  slwi 28, 9, 2
  05f2990  addi 9, 9, 1
  05f2994  add 11, 11, 28
  05f2998  stw 9, 292(23)
  05f299c  clrldi 11, 11, 32
  05f29a0  stw 8, 0(11)
  05f29a4  lwz 9, 372(23)
  05f29a8  add 9, 31, 9
  05f29ac  clrldi 9, 9, 32
  05f29b0  lwz 3, 0(9)
  05f29b4  cmpwi 7, 3, 0
  05f29b8  bt 28, 0x5f29c0
  05f29bc  rldicl 5, 3, 36, 63
  05f29c0  rldicl 4, 3, 35, 63
  05f29c4  clrldi 5, 5, 63
  05f29c8  addi 4, 4, 1
  05f29cc  clrldi 3, 3, 48
  05f29d0  clrldi 4, 4, 62
  05f29d4  bl 0x5f533c
  05f29d8  nop
  05f29dc  extsw 0, 28
  05f29e0  add 9, 1, 0
  05f29e4  stw 3, 280(9)
  05f29e8  lwz 11, 368(23)
  05f29ec  add 11, 31, 11
  05f29f0  clrldi 11, 11, 32
  05f29f4  lwz 0, 0(11)
  05f29f8  slwi 9, 0, 2
  05f29fc  add 9, 9, 0
  05f2a00  srwi 9, 9, 2
  05f2a04  addi 9, 9, 255
  05f2a08  rlwinm 9, 9, 0, 0, 23
  05f2a0c  add 9, 9, 3
  05f2a10  addi 9, 9, 16
  05f2a14  add 26, 26, 9
  05f2a18  addi 27, 27, 1
  05f2a1c  addi 29, 29, 4
  05f2a20  cmpw 7, 19, 27
  05f2a24  bf 30, 0x5f2638
  05f2a28  cmpwi 7, 26, 0
  05f2a2c  bf 30, 0x5f3144
  05f2a30  li 22, 0
  05f2a34  lwz 16, -32536(2)
  05f2a38  li 0, 1
  05f2a3c  lwz 20, -32300(2)
  05f2a40  li 9, 0
  05f2a44  li 25, 0
  05f2a48  li 21, 0
  05f2a4c  li 28, 0
  05f2a50  std 20, 2024(1)
  05f2a54  stw 0, 12(16)
  05f2a58  stw 9, 276(24)
  05f2a5c  b 0x5f2bec
  05f2a60  lwz 9, 340(23)
  05f2a64  slwi 0, 25, 2
  05f2a68  add 9, 9, 28
  05f2a6c  stw 0, 2016(1)
  05f2a70  clrldi 9, 9, 32
  05f2a74  stw 21, 12(9)
  05f2a78  lwz 11, 236(23)
  05f2a7c  lwz 9, 372(23)
  05f2a80  add 11, 11, 0
  05f2a84  clrldi 11, 11, 32
  05f2a88  lwz 0, 0(11)
  05f2a8c  slwi 8, 0, 2
  05f2a90  add 9, 9, 8
  05f2a94  clrldi 9, 9, 32
  05f2a98  lwz 9, 0(9)
  05f2a9c  cmpwi 7, 9, 0
  05f2aa0  bt 28, 0x5f2ab0
  05f2aa4  rlwinm 0, 9, 0, 3, 3
  05f2aa8  cmpwi 7, 0, 0
  05f2aac  bt 30, 0x5f2bac
  05f2ab0  lwz 0, 1504(24)
  05f2ab4  cmpwi 7, 0, 0
  05f2ab8  bt 30, 0x5f2bac
  05f2abc  lis 7, 3
  05f2ac0  clrlwi 31, 9, 16
  05f2ac4  ori 7, 7, 59392
  05f2ac8  cmplw 7, 31, 7
  05f2acc  bt 29, 0x5f2bac
  05f2ad0  lwz 11, 368(23)
  05f2ad4  rldicl 9, 9, 35, 63
  05f2ad8  lwz 10, 748(1)
  05f2adc  add 11, 11, 8
  05f2ae0  addi 27, 9, 1
  05f2ae4  clrldi 11, 11, 32
  05f2ae8  cmpwi 7, 10, 0
  05f2aec  lwz 0, 0(11)
  05f2af0  slwi 9, 0, 2
  05f2af4  add 9, 9, 0
  05f2af8  srwi 9, 9, 2
  05f2afc  addi 9, 9, 255
  05f2b00  rlwinm 26, 9, 0, 0, 23
  05f2b04  bt 30, 0x5f2d1c
  05f2b08  lwz 11, 752(1)
  05f2b0c  cmpwi 7, 11, 0
  05f2b10  bt 30, 0x5f2d1c
  05f2b14  lwz 0, 1916(1)
  05f2b18  extsw 9, 10
  05f2b1c  extsw 11, 11
  05f2b20  extsw 0, 0
  05f2b24  std 9, 2032(1)
  05f2b28  lfd 0, 2032(1)
  05f2b2c  extsw 9, 31
  05f2b30  std 0, 2032(1)
  05f2b34  fcfid 11, 0
  05f2b38  lfd 9, 2032(1)
  05f2b3c  fcfid 10, 9
  05f2b40  lwz 0, 1912(1)
  05f2b44  std 11, 2032(1)
  05f2b48  extsw 0, 0
  05f2b4c  lfd 12, 2032(1)
  05f2b50  std 9, 2032(1)
  05f2b54  fcfid 13, 12
  05f2b58  lfd 9, 2032(1)
  05f2b5c  addi 9, 1, 2000
  05f2b60  std 0, 2032(1)
  05f2b64  fcfid 0, 9
  05f2b68  lfd 9, 2032(1)
  05f2b6c  fcfid 12, 9
  05f2b70  fmul 11, 11, 10
  05f2b74  fmul 13, 13, 12
  05f2b78  fmul 0, 0, 11
  05f2b7c  fdiv 0, 0, 13
  05f2b80  fctiwz 0, 0
  05f2b84  stfiwx 0, 0, 9
  05f2b88  lwz 9, 2000(1)
  05f2b8c  cmplw 7, 9, 7
  05f2b90  bf 29, 0x5f2b98
  05f2b94  mr 9, 7
  05f2b98  slwi 0, 31, 5
  05f2b9c  mullw 0, 27, 0
  05f2ba0  srwi 0, 0, 3
  05f2ba4  cmplw 7, 0, 26
  05f2ba8  bf 28, 0x5f318c
  05f2bac  lwz 11, 340(23)
  05f2bb0  add 0, 28, 11
  05f2bb4  clrldi 10, 0, 32
  05f2bb8  lwz 9, 60(10)
  05f2bbc  cmpwi 7, 9, 0
  05f2bc0  bf 30, 0x5f2bd0
  05f2bc4  lis 0, 1
  05f2bc8  stw 0, 60(10)
  05f2bcc  lwz 11, 340(23)
  05f2bd0  add 9, 28, 11
  05f2bd4  clrldi 9, 9, 32
  05f2bd8  lwz 0, 12(9)
  05f2bdc  cmpwi 7, 0, 0
  05f2be0  bt 30, 0x5f305c
  05f2be4  addi 25, 25, 1
  05f2be8  addi 28, 28, 384
  05f2bec  lwz 0, 292(23)
  05f2bf0  cmplw 7, 25, 0
  05f2bf4  bt 28, 0x5f2a60
  05f2bf8  cmpwi 7, 0, 0
  05f2bfc  bf 30, 0x5f2d50
  05f2c00  lwz 27, -32532(2)
  05f2c04  lwz 0, 32(23)
  05f2c08  lwz 10, -32324(2)
  05f2c0c  rlwinm 0, 0, 0, 4, 4
  05f2c10  lwz 8, -32320(2)
  05f2c14  lwz 9, -32316(2)
  05f2c18  cmpwi 7, 0, 0
  05f2c1c  lwz 11, -32308(2)
  05f2c20  lwz 0, -32312(2)
  05f2c24  stw 10, 436(23)
  05f2c28  stw 8, 448(23)
  05f2c2c  stw 9, 432(23)
  05f2c30  stw 0, 440(23)
  05f2c34  stw 11, 444(23)
  05f2c38  bf 30, 0x5f2c48
  05f2c3c  lwz 0, 380(23)
  05f2c40  cmpwi 7, 0, 0
  05f2c44  bt 30, 0x5f3094
  05f2c48  addi 0, 17, 688
  05f2c4c  li 4, 2
  05f2c50  clrldi 31, 0, 32
  05f2c54  mr 3, 31
  05f2c58  bl 0x5fc508
  05f2c5c  nop
  05f2c60  cmpwi 7, 3, 0
  05f2c64  bf 30, 0x5f2c6c
  05f2c68  twu 1, 1
  05f2c6c  lwz 9, 0(27)
  05f2c70  cmpwi 7, 9, 0
  05f2c74  bt 30, 0x5f2ca8
  05f2c78  clrldi 9, 9, 32
  05f2c7c  lwz 6, -32500(2)
  05f2c80  mr 4, 31
  05f2c84  mr 3, 9
  05f2c88  addi 5, 24, 1596
  05f2c8c  lwz 11, 92(9)
  05f2c90  lwz 0, 0(11)
  05f2c94  std 2, 40(1)
  05f2c98  mtctr 0
  05f2c9c  lwz 2, 4(11)
  05f2ca0  bctrl
  05f2ca4  ld 2, 40(1)
  05f2ca8  lwz 0, 380(23)
  05f2cac  cmpwi 7, 0, 0
  05f2cb0  bt 30, 0x5f2d24
  05f2cb4  lis 0, -4096
  05f2cb8  mr 3, 23
  05f2cbc  li 4, 1
  05f2cc0  stw 0, 1240(23)
  05f2cc4  bl 0x5eda28
  05f2cc8  lwz 0, 292(23)
  05f2ccc  cmpwi 7, 0, 0
  05f2cd0  bt 30, 0x5f2d00
  05f2cd4  lwz 0, 496(24)
  05f2cd8  cmpwi 7, 0, 0
  05f2cdc  bt 30, 0x5f2d00
  05f2ce0  lwz 9, 340(23)
  05f2ce4  lwz 0, 76(9)
  05f2ce8  cmpwi 7, 0, 0
  05f2cec  bt 29, 0x5f2d00
  05f2cf0  addi 3, 24, 1280
  05f2cf4  li 4, 1
  05f2cf8  bl 0x5fc190
  05f2cfc  nop
  05f2d00  addi 3, 24, 1600
  05f2d04  li 4, 1
  05f2d08  clrldi 3, 3, 32
  05f2d0c  bl 0x5fbef8
  05f2d10  nop
  05f2d14  stw 3, 352(23)
  05f2d18  b 0x5f19ec
  05f2d1c  mr 9, 31
  05f2d20  b 0x5f2b98
  05f2d24  rlwinm 0, 30, 0, 10, 10
  05f2d28  cmpwi 7, 0, 0
  05f2d2c  bt 30, 0x5f3468
  05f2d30  lwz 0, 428(24)
  05f2d34  cmpwi 7, 0, 0
  05f2d38  bt 30, 0x5f2cb4
  05f2d3c  addi 3, 24, 432
  05f2d40  li 4, 1
  05f2d44  bl 0x5fc190
  05f2d48  nop
  05f2d4c  b 0x5f2cb4
  05f2d50  addi 0, 24, 1148
  05f2d54  lwz 14, -32488(2)
  05f2d58  lwz 18, -32516(2)
  05f2d5c  li 28, 1
  05f2d60  clrldi 29, 0, 32
  05f2d64  mr 4, 14
  05f2d68  mr 3, 29
  05f2d6c  mr 5, 18
  05f2d70  li 6, 2340
  05f2d74  stw 28, 272(23)
  05f2d78  bl 0x5eb0f8
  05f2d7c  lwz 9, 1500(24)
  05f2d80  lwz 0, 292(23)
  05f2d84  mr 3, 29
  05f2d88  mr 4, 14
  05f2d8c  add 0, 0, 9
  05f2d90  mr 5, 18
  05f2d94  li 6, 2346
  05f2d98  stw 0, 1500(24)
  05f2d9c  bl 0x5eb2e0
  05f2da0  lwz 9, 340(23)
  05f2da4  lwz 0, 76(9)
  05f2da8  cmpwi 7, 0, 0
  05f2dac  bf 29, 0x5f2f0c
  05f2db0  cmpwi 7, 0, 2
  05f2db4  bf 30, 0x5f2c00
  05f2db8  addi 0, 17, 944
  05f2dbc  li 4, 1
  05f2dc0  clrldi 31, 0, 32
  05f2dc4  mr 3, 31
  05f2dc8  bl 0x5fc508
  05f2dcc  nop
  05f2dd0  cmpwi 7, 3, 0
  05f2dd4  bt 30, 0x5f2e80
  05f2dd8  lwz 27, -32532(2)
  05f2ddc  lwz 9, 0(27)
  05f2de0  cmpwi 7, 9, 0
  05f2de4  bt 30, 0x5f2e18
  05f2de8  clrldi 9, 9, 32
  05f2dec  lwz 6, -32496(2)
  05f2df0  mr 4, 31
  05f2df4  mr 3, 9
  05f2df8  addi 5, 24, 1588
  05f2dfc  lwz 11, 92(9)
  05f2e00  lwz 0, 0(11)
  05f2e04  std 2, 40(1)
  05f2e08  mtctr 0
  05f2e0c  lwz 2, 4(11)
  05f2e10  bctrl
  05f2e14  ld 2, 40(1)
  05f2e18  bl 0x5ec3c8
  05f2e1c  lwz 31, -32484(2)
  05f2e20  addi 3, 24, 1356
  05f2e24  mr 4, 31
  05f2e28  mr 5, 18
  05f2e2c  li 6, 260
  05f2e30  bl 0x5eb0f8
  05f2e34  lwz 9, 1516(24)
  05f2e38  cmpwi 7, 9, 0
  05f2e3c  bt 30, 0x5f2eec
  05f2e40  cmpw 7, 17, 9
  05f2e44  bt 30, 0x5f2e60
  05f2e48  clrldi 9, 9, 32
  05f2e4c  lwz 9, 228(9)
  05f2e50  cmpwi 7, 9, 0
  05f2e54  cmpw 6, 17, 9
  05f2e58  bt 30, 0x5f2eec
  05f2e5c  bf 26, 0x5f2e48
  05f2e60  mr 4, 31
  05f2e64  mr 5, 18
  05f2e68  addi 3, 24, 1356
  05f2e6c  li 6, 277
  05f2e70  bl 0x5eb2e0
  05f2e74  li 0, 1
  05f2e78  stw 0, 356(23)
  05f2e7c  b 0x5f2c04
  05f2e80  bl 0x5ec3c8
  05f2e84  lwz 31, -32484(2)
  05f2e88  addi 3, 24, 1356
  05f2e8c  mr 4, 31
  05f2e90  mr 5, 18
  05f2e94  li 6, 260
  05f2e98  bl 0x5eb0f8
  05f2e9c  lwz 9, 1516(24)
  05f2ea0  cmpwi 7, 9, 0
  05f2ea4  bt 30, 0x5f2efc
  05f2ea8  cmpw 7, 17, 9
  05f2eac  bt 30, 0x5f2ec8
  05f2eb0  clrldi 9, 9, 32
  05f2eb4  lwz 9, 228(9)
  05f2eb8  cmpwi 7, 9, 0
  05f2ebc  cmpw 6, 17, 9
  05f2ec0  bt 30, 0x5f2efc
  05f2ec4  bf 26, 0x5f2eb0
  05f2ec8  mr 4, 31
  05f2ecc  mr 5, 18
  05f2ed0  addi 3, 24, 1356
  05f2ed4  li 6, 277
  05f2ed8  bl 0x5eb2e0
  05f2edc  li 0, 1
  05f2ee0  lwz 27, -32532(2)
  05f2ee4  stw 0, 356(23)
  05f2ee8  b 0x5f2c04
  05f2eec  lwz 0, 1516(24)
  05f2ef0  stw 0, 228(23)
  05f2ef4  stw 17, 1516(24)
  05f2ef8  b 0x5f2e60
  05f2efc  lwz 0, 1516(24)
  05f2f00  stw 0, 228(23)
  05f2f04  stw 17, 1516(24)
  05f2f08  b 0x5f2ec8
  05f2f0c  addi 26, 17, 944
  05f2f10  li 4, 1
  05f2f14  clrldi 31, 26, 32
  05f2f18  mr 3, 31
  05f2f1c  bl 0x5fc508
  05f2f20  nop
  05f2f24  cmpwi 7, 3, 0
  05f2f28  bt 30, 0x5f304c
  05f2f2c  lwz 27, -32532(2)
  05f2f30  lwz 9, 0(27)
  05f2f34  cmpwi 7, 9, 0
  05f2f38  bt 30, 0x5f2f6c
  05f2f3c  clrldi 9, 9, 32
  05f2f40  lwz 6, -32496(2)
  05f2f44  mr 4, 31
  05f2f48  mr 3, 9
  05f2f4c  addi 5, 24, 1584
  05f2f50  lwz 11, 92(9)
  05f2f54  lwz 0, 0(11)
  05f2f58  std 2, 40(1)
  05f2f5c  mtctr 0
  05f2f60  lwz 2, 4(11)
  05f2f64  bctrl
  05f2f68  ld 2, 40(1)
  05f2f6c  lwz 0, 1516(24)
  05f2f70  cmpwi 7, 0, 0
  05f2f74  bf 30, 0x5f2f80
  05f2f78  li 0, 13
  05f2f7c  stw 0, 16(16)
  05f2f80  mr 3, 29
  05f2f84  mr 4, 14
  05f2f88  mr 5, 18
  05f2f8c  li 6, 556
  05f2f90  bl 0x5eb0f8
  05f2f94  lwz 9, 496(24)
  05f2f98  cmpwi 7, 9, 0
  05f2f9c  bt 30, 0x5f34d4
  05f2fa0  lwz 9, 1344(24)
  05f2fa4  addi 9, 9, 1
  05f2fa8  stw 9, 1344(24)
  05f2fac  mr 4, 14
  05f2fb0  addi 3, 24, 1148
  05f2fb4  mr 5, 18
  05f2fb8  li 6, 593
  05f2fbc  bl 0x5eb2e0
  05f2fc0  bl 0x5ec3c8
  05f2fc4  lwz 31, -32484(2)
  05f2fc8  addi 3, 24, 1356
  05f2fcc  mr 4, 31
  05f2fd0  mr 5, 18
  05f2fd4  li 6, 260
  05f2fd8  bl 0x5eb0f8
  05f2fdc  lwz 9, 1516(24)
  05f2fe0  cmpwi 7, 9, 0
  05f2fe4  bt 30, 0x5f34c4
  05f2fe8  cmpw 7, 17, 9
  05f2fec  bt 30, 0x5f3008
  05f2ff0  clrldi 9, 9, 32
  05f2ff4  lwz 9, 228(9)
  05f2ff8  cmpwi 7, 9, 0
  05f2ffc  cmpw 6, 17, 9
  05f3000  bt 30, 0x5f34c4
  05f3004  bf 26, 0x5f2ff0
  05f3008  mr 4, 31
  05f300c  mr 5, 18
  05f3010  addi 3, 24, 1356
  05f3014  li 6, 277
  05f3018  bl 0x5eb2e0
  05f301c  li 0, 1
  05f3020  stw 0, 356(23)
  05f3024  lwz 9, 340(23)
  05f3028  lwz 0, 76(9)
  05f302c  cmpwi 7, 0, 0
  05f3030  bf 28, 0x5f2c04
  05f3034  neg 9, 0
  05f3038  lwz 0, 16(16)
  05f303c  cmplw 7, 9, 0
  05f3040  bf 28, 0x5f2c04
  05f3044  stw 9, 16(16)
  05f3048  b 0x5f2c04
  05f304c  lwz 9, 340(23)
  05f3050  lwz 27, -32532(2)
  05f3054  stw 28, 76(9)
  05f3058  b 0x5f2c04
  05f305c  lwz 9, 292(23)
  05f3060  lwz 0, 2016(1)
  05f3064  lwz 3, 236(23)
  05f3068  addi 9, 9, -1
  05f306c  add 3, 0, 3
  05f3070  sub 5, 9, 25
  05f3074  addi 4, 3, 4
  05f3078  slwi 5, 5, 2
  05f307c  clrldi 4, 4, 32
  05f3080  clrldi 3, 3, 32
  05f3084  stw 9, 292(23)
  05f3088  bl 0x5c6094
  05f308c  nop
  05f3090  b 0x5f2bec
  05f3094  addi 26, 17, 816
  05f3098  li 4, 2
  05f309c  clrldi 3, 26, 32
  05f30a0  bl 0x5fc508
  05f30a4  nop
  05f30a8  cmpwi 7, 3, 0
  05f30ac  bf 30, 0x5f37fc
  05f30b0  lwz 0, 32(23)
  05f30b4  oris 0, 0, 2048
  05f30b8  stw 0, 32(23)
  05f30bc  lwz 0, 32(23)
  05f30c0  rlwinm 0, 0, 0, 4, 4
  05f30c4  cmpwi 7, 0, 0
  05f30c8  bf 30, 0x5f2c48
  05f30cc  bl 0x5ec3c8
  05f30d0  lwz 31, -32484(2)
  05f30d4  lwz 18, -32516(2)
  05f30d8  addi 3, 24, 1356
  05f30dc  mr 4, 31
  05f30e0  mr 5, 18
  05f30e4  li 6, 260
  05f30e8  bl 0x5eb0f8
  05f30ec  lwz 9, 1516(24)
  05f30f0  cmpwi 7, 9, 0
  05f30f4  bt 30, 0x5f37ec
  05f30f8  cmpw 7, 17, 9
  05f30fc  bt 30, 0x5f3118
  05f3100  clrldi 9, 9, 32
  05f3104  lwz 9, 228(9)
  05f3108  cmpwi 7, 9, 0
  05f310c  cmpw 6, 17, 9
  05f3110  bt 30, 0x5f37ec
  05f3114  bf 26, 0x5f3100
  05f3118  mr 4, 31
  05f311c  mr 5, 18
  05f3120  addi 3, 24, 1356
  05f3124  li 6, 277
  05f3128  bl 0x5eb2e0
  05f312c  li 0, 1
  05f3130  stw 0, 356(23)
  05f3134  b 0x5f2c48
  05f3138  li 0, 2000
  05f313c  stw 0, 1148(23)
  05f3140  b 0x5f25ec
  05f3144  clrldi 28, 21, 32
  05f3148  lwz 29, 1128(23)
  05f314c  mr 3, 28
  05f3150  bl 0x5fd778
  05f3154  nop
  05f3158  clrldi 4, 26, 32
  05f315c  add 29, 29, 3
  05f3160  mr 3, 28
  05f3164  add 29, 26, 29
  05f3168  stw 29, 1128(23)
  05f316c  bl 0x5fd790
  05f3170  nop
  05f3174  cmpwi 7, 3, 0
  05f3178  mr 22, 3
  05f317c  stw 3, 348(23)
  05f3180  bf 30, 0x5f2a34
  05f3184  stw 3, 292(23)
  05f3188  b 0x5f2a34
  05f318c  lwz 14, -32488(2)
  05f3190  mr 3, 20
  05f3194  lwz 18, -32516(2)
  05f3198  li 6, 2244
  05f319c  mr 4, 14
  05f31a0  mr 5, 18
  05f31a4  clrldi 19, 9, 32
  05f31a8  bl 0x5eb0f8
  05f31ac  lwz 9, 1504(24)
  05f31b0  lwz 3, 340(23)
  05f31b4  mr 4, 19
  05f31b8  lwz 7, 32(23)
  05f31bc  li 5, 16
  05f31c0  add 3, 28, 3
  05f31c4  extsw 6, 27
  05f31c8  lwz 0, 0(9)
  05f31cc  mr 8, 23
  05f31d0  std 2, 40(1)
  05f31d4  mtctr 0
  05f31d8  lwz 2, 4(9)
  05f31dc  clrldi 3, 3, 32
  05f31e0  bctrl
  05f31e4  ld 2, 40(1)
  05f31e8  mr 4, 14
  05f31ec  mr 29, 3
  05f31f0  mr 5, 18
  05f31f4  mr 3, 20
  05f31f8  li 6, 2252
  05f31fc  bl 0x5eb2e0
  05f3200  cmpwi 7, 29, 0
  05f3204  bt 30, 0x5f2bac
  05f3208  lwz 9, 340(23)
  05f320c  add 9, 28, 9
  05f3210  clrldi 9, 9, 32
  05f3214  stw 31, 28(9)
  05f3218  lwz 31, 340(23)
  05f321c  add 0, 28, 31
  05f3220  clrldi 11, 0, 32
  05f3224  lwz 9, 48(11)
  05f3228  cmpwi 7, 9, 0
  05f322c  bf 30, 0x5f323c
  05f3230  li 0, -1
  05f3234  stw 0, 48(11)
  05f3238  lwz 31, 340(23)
  05f323c  add 9, 28, 31
  05f3240  addi 0, 26, 16
  05f3244  clrldi 9, 9, 32
  05f3248  clrldi 5, 27, 32
  05f324c  lis 8, 8388
  05f3250  sldi 7, 5, 1
  05f3254  ori 8, 8, 39845
  05f3258  stw 0, 8(9)
  05f325c  lwz 11, 340(23)
  05f3260  sldi 8, 8, 32
  05f3264  add 11, 28, 11
  05f3268  oris 8, 8, 58195
  05f326c  clrldi 11, 11, 32
  05f3270  ori 8, 8, 63439
  05f3274  stw 22, 12(11)
  05f3278  lwz 9, 340(23)
  05f327c  add 9, 28, 9
  05f3280  clrldi 9, 9, 32
  05f3284  lwz 0, 56(9)
  05f3288  stw 21, 84(9)
  05f328c  subfic 0, 0, 750
  05f3290  lwz 11, 340(23)
  05f3294  not 10, 0
  05f3298  add 11, 28, 11
  05f329c  srawi 10, 10, 31
  05f32a0  clrldi 11, 11, 32
  05f32a4  and 0, 0, 10
  05f32a8  lwz 10, 8(9)
  05f32ac  extsw 0, 0
  05f32b0  add 27, 22, 10
  05f32b4  lwz 9, 12(11)
  05f32b8  lwz 10, 8(11)
  05f32bc  mulld 0, 19, 0
  05f32c0  add 9, 9, 10
  05f32c4  mulld 0, 0, 7
  05f32c8  stw 9, 16(11)
  05f32cc  lwz 10, 340(23)
  05f32d0  rldicl 0, 0, 61, 3
  05f32d4  add 10, 28, 10
  05f32d8  mulhdu 0, 0, 8
  05f32dc  clrldi 10, 10, 32
  05f32e0  rldicl 0, 0, 60, 4
  05f32e4  rlwinm 0, 0, 0, 0, 29
  05f32e8  lwz 9, 12(10)
  05f32ec  stw 9, 0(10)
  05f32f0  lwz 11, 340(23)
  05f32f4  add 11, 28, 11
  05f32f8  clrldi 11, 11, 32
  05f32fc  lwz 10, 12(11)
  05f3300  stw 10, 24(11)
  05f3304  lwz 9, 340(23)
  05f3308  add 9, 28, 9
  05f330c  clrldi 9, 9, 32
  05f3310  stw 0, 72(9)
  05f3314  lwz 31, 340(23)
  05f3318  add 0, 28, 31
  05f331c  clrldi 9, 0, 32
  05f3320  lwz 11, 8(9)
  05f3324  lwz 0, 72(9)
  05f3328  sub 0, 11, 0
  05f332c  cmpwi 7, 0, 15
  05f3330  bt 29, 0x5f3340
  05f3334  addi 0, 11, -16
  05f3338  stw 0, 72(9)
  05f333c  lwz 31, 340(23)
  05f3340  lwz 0, 2016(1)
  05f3344  li 6, 0
  05f3348  lwz 9, 236(23)
  05f334c  lwz 11, 372(23)
  05f3350  add 9, 0, 9
  05f3354  clrldi 9, 9, 32
  05f3358  lwz 0, 0(9)
  05f335c  slwi 0, 0, 2
  05f3360  add 11, 11, 0
  05f3364  clrldi 11, 11, 32
  05f3368  lwz 4, 0(11)
  05f336c  cmpwi 7, 4, 0
  05f3370  bt 28, 0x5f3378
  05f3374  rldicl 6, 4, 36, 63
  05f3378  clrldi 4, 4, 48
  05f337c  clrldi 6, 6, 63
  05f3380  clrldi 3, 27, 32
  05f3384  bl 0x5f5cd0
  05f3388  nop
  05f338c  add 9, 28, 31
  05f3390  clrldi 9, 9, 32
  05f3394  mr 4, 14
  05f3398  mr 5, 18
  05f339c  li 6, 2293
  05f33a0  stw 3, 20(9)
  05f33a4  ld 3, 2024(1)
  05f33a8  bl 0x5eb0f8
  05f33ac  lwz 0, 340(23)
  05f33b0  add 0, 28, 0
  05f33b4  clrldi 3, 0, 32
  05f33b8  lwz 31, 20(3)
  05f33bc  cmpwi 7, 31, 0
  05f33c0  bf 30, 0x5f33f0
  05f33c4  lwz 11, 376(3)
  05f33c8  lwz 0, 0(11)
  05f33cc  std 2, 40(1)
  05f33d0  mtctr 0
  05f33d4  lwz 2, 4(11)
  05f33d8  bctrl
  05f33dc  ld 2, 40(1)
  05f33e0  lwz 9, 340(23)
  05f33e4  add 9, 28, 9
  05f33e8  clrldi 9, 9, 32
  05f33ec  stw 31, 12(9)
  05f33f0  mr 4, 14
  05f33f4  ld 3, 2024(1)
  05f33f8  mr 5, 18
  05f33fc  li 6, 2304
  05f3400  bl 0x5eb2e0
  05f3404  lwz 9, 2016(1)
  05f3408  lwz 29, 340(23)
  05f340c  extsw 0, 9
  05f3410  add 29, 28, 29
  05f3414  add 9, 1, 0
  05f3418  clrldi 29, 29, 32
  05f341c  lwz 0, 280(9)
  05f3420  lwz 3, 20(29)
  05f3424  add 22, 27, 0
  05f3428  bl 0x5f5384
  05f342c  nop
  05f3430  stw 3, 4(29)
  05f3434  lwz 0, 1184(23)
  05f3438  lwz 10, 1188(23)
  05f343c  slwi 11, 0, 1
  05f3440  lwz 9, 340(23)
  05f3444  slwi 10, 10, 2
  05f3448  add 11, 11, 0
  05f344c  lwz 0, 8(23)
  05f3450  add 9, 28, 9
  05f3454  divwu 11, 11, 10
  05f3458  clrldi 9, 9, 32
  05f345c  sub 0, 0, 11
  05f3460  stw 0, 64(9)
  05f3464  b 0x5f2bac
  05f3468  lwz 9, 416(23)
  05f346c  addi 26, 17, 400
  05f3470  clrldi 3, 26, 32
  05f3474  lwz 0, 0(9)
  05f3478  std 2, 40(1)
  05f347c  mtctr 0
  05f3480  lwz 2, 4(9)
  05f3484  bctrl
  05f3488  ld 2, 40(1)
  05f348c  cmpwi 7, 3, 0
  05f3490  bt 30, 0x5f2d30
  05f3494  stw 17, 1552(24)
  05f3498  lwz 9, 416(23)
  05f349c  clrldi 3, 26, 32
  05f34a0  lwz 0, 0(9)
  05f34a4  std 2, 40(1)
  05f34a8  mtctr 0
  05f34ac  lwz 2, 4(9)
  05f34b0  bctrl
  05f34b4  ld 2, 40(1)
  05f34b8  cmpwi 7, 3, 0
  05f34bc  bf 30, 0x5f3498
  05f34c0  b 0x5f2d30
  05f34c4  lwz 0, 1516(24)
  05f34c8  stw 0, 228(23)
  05f34cc  stw 17, 1516(24)
  05f34d0  b 0x5f3008
  05f34d4  addi 0, 24, 1280
  05f34d8  li 4, 0
  05f34dc  clrldi 29, 0, 32
  05f34e0  li 5, 16384
  05f34e4  mr 3, 29
  05f34e8  stw 9, 1276(24)
  05f34ec  bl 0x5fbfd4
  05f34f0  nop
  05f34f4  cmpwi 7, 3, 0
  05f34f8  bt 30, 0x5f3890
  05f34fc  addi 0, 24, 500
  05f3500  lwz 4, -32328(2)
  05f3504  li 5, 0
  05f3508  lwz 8, -32476(2)
  05f350c  clrldi 31, 0, 32
  05f3510  ori 5, 5, 32768
  05f3514  mr 3, 31
  05f3518  li 6, 0
  05f351c  li 7, 0
  05f3520  bl 0x5fc620
  05f3524  nop
  05f3528  cmpwi 7, 3, 0
  05f352c  bt 30, 0x5f3884
  05f3530  lwz 9, 1344(24)
  05f3534  mr 3, 31
  05f3538  li 4, 16
  05f353c  addi 9, 9, 1
  05f3540  stw 9, 1344(24)
  05f3544  stw 28, 496(24)
  05f3548  bl 0x5fccc8
  05f354c  nop
  05f3550  mr 3, 31
  05f3554  li 4, 16
  05f3558  bl 0x5fccc8
  05f355c  nop
  05f3560  b 0x5f2fac
  05f3564  lwz 9, 408(23)
  05f3568  addi 26, 17, 400
  05f356c  lwz 4, 1112(23)
  05f3570  clrldi 3, 26, 32
  05f3574  lwz 0, 0(9)
  05f3578  std 2, 40(1)
  05f357c  mtctr 0
  05f3580  lwz 2, 4(9)
  05f3584  bctrl
  05f3588  ld 2, 40(1)
  05f358c  lwz 11, 40(23)
  05f3590  addis 0, 3, 2
  05f3594  stw 3, 1112(23)
  05f3598  cmplw 7, 0, 11
  05f359c  bt 28, 0x5f37c0
  05f35a0  lwz 0, 32(23)
  05f35a4  ori 30, 30, 8192
  05f35a8  oris 0, 0, 2048
  05f35ac  ori 0, 0, 8192
  05f35b0  stw 0, 32(23)
  05f35b4  rlwinm 0, 30, 0, 18, 18
  05f35b8  cmpwi 7, 0, 0
  05f35bc  bt 30, 0x5f3720
  05f35c0  lwz 11, 344(23)
  05f35c4  clrldi 27, 21, 32
  05f35c8  lwz 9, 40(23)
  05f35cc  lwz 29, 1128(23)
  05f35d0  mr 3, 27
  05f35d4  lwz 0, 0(11)
  05f35d8  rlwinm 0, 0, 0, 0, 30
  05f35dc  sub 9, 9, 0
  05f35e0  addi 28, 9, 1032
  05f35e4  addi 25, 9, 8
  05f35e8  bl 0x5fd778
  05f35ec  nop
  05f35f0  add 29, 28, 29
  05f35f4  clrldi 4, 28, 32
  05f35f8  add 0, 3, 29
  05f35fc  mr 3, 27
  05f3600  stw 0, 1128(23)
  05f3604  bl 0x5fd790
  05f3608  nop
  05f360c  cmpwi 7, 3, 0
  05f3610  stw 3, 380(23)
  05f3614  bt 30, 0x5f3700
  05f3618  lwz 11, 412(23)
  05f361c  clrldi 28, 26, 32
  05f3620  lwz 0, 32(23)
  05f3624  clrldi 7, 31, 32
  05f3628  lwz 6, 40(23)
  05f362c  mr 3, 28
  05f3630  oris 0, 0, 2048
  05f3634  addi 6, 6, 8
  05f3638  stw 0, 32(23)
  05f363c  lwz 0, 0(11)
  05f3640  clrldi 6, 6, 32
  05f3644  std 2, 40(1)
  05f3648  mtctr 0
  05f364c  li 4, 0
  05f3650  li 5, 0
  05f3654  lwz 2, 4(11)
  05f3658  addi 29, 24, 1012
  05f365c  clrldi 29, 29, 32
  05f3660  bctrl
  05f3664  ld 2, 40(1)
  05f3668  lwz 9, 344(23)
  05f366c  clrldi 7, 25, 32
  05f3670  lwz 11, 404(23)
  05f3674  li 4, 0
  05f3678  lwz 6, 380(23)
  05f367c  mr 3, 28
  05f3680  lwz 5, 0(9)
  05f3684  lwz 0, 0(11)
  05f3688  rlwinm 5, 5, 0, 0, 30
  05f368c  std 2, 40(1)
  05f3690  mtctr 0
  05f3694  lwz 2, 4(11)
  05f3698  extsw 5, 5
  05f369c  bctrl
  05f36a0  ld 2, 40(1)
  05f36a4  li 6, 2107
  05f36a8  mr 3, 29
  05f36ac  lwz 27, -32492(2)
  05f36b0  lwz 26, -32516(2)
  05f36b4  mr 4, 27
  05f36b8  mr 5, 26
  05f36bc  bl 0x5eb0f8
  05f36c0  lwz 9, 420(23)
  05f36c4  mr 3, 28
  05f36c8  lwz 0, 0(9)
  05f36cc  std 2, 40(1)
  05f36d0  mtctr 0
  05f36d4  lwz 2, 4(9)
  05f36d8  bctrl
  05f36dc  ld 2, 40(1)
  05f36e0  mr 3, 29
  05f36e4  mr 4, 27
  05f36e8  mr 5, 26
  05f36ec  li 6, 2113
  05f36f0  bl 0x5eb2e0
  05f36f4  li 0, 0
  05f36f8  stw 0, 484(23)
  05f36fc  b 0x5f25c4
  05f3700  lwz 3, 208(23)
  05f3704  rlwinm 20, 30, 0, 5, 5
  05f3708  cmpwi 7, 3, 0
  05f370c  bt 30, 0x5f277c
  05f3710  clrldi 3, 3, 32
  05f3714  bl 0x5f516c
  05f3718  nop
  05f371c  b 0x5f277c
  05f3720  lwz 5, 248(23)
  05f3724  clrldi 27, 21, 32
  05f3728  addi 4, 17, 1248
  05f372c  addi 5, 5, 1280
  05f3730  clrldi 4, 4, 32
  05f3734  clrldi 5, 5, 32
  05f3738  mr 3, 27
  05f373c  bl 0x5fd700
  05f3740  nop
  05f3744  lwz 28, 1112(23)
  05f3748  lwz 29, 1128(23)
  05f374c  mr 3, 27
  05f3750  add 29, 28, 29
  05f3754  bl 0x5fd778
  05f3758  nop
  05f375c  clrldi 4, 28, 32
  05f3760  add 0, 3, 29
  05f3764  mr 3, 27
  05f3768  stw 0, 1128(23)
  05f376c  bl 0x5fd790
  05f3770  nop
  05f3774  cmpwi 7, 3, 0
  05f3778  mr 4, 3
  05f377c  stw 3, 1072(23)
  05f3780  bt 30, 0x5f3700
  05f3784  lwz 9, 412(23)
  05f3788  clrldi 3, 26, 32
  05f378c  lwz 6, 40(23)
  05f3790  clrldi 4, 4, 32
  05f3794  lwz 5, 1112(23)
  05f3798  clrldi 7, 31, 32
  05f379c  addi 6, 6, 8
  05f37a0  lwz 0, 0(9)
  05f37a4  clrldi 6, 6, 32
  05f37a8  std 2, 40(1)
  05f37ac  mtctr 0
  05f37b0  lwz 2, 4(9)
  05f37b4  bctrl
  05f37b8  ld 2, 40(1)
  05f37bc  b 0x5f25c4
  05f37c0  lis 0, -13108
  05f37c4  ori 0, 0, 52429
  05f37c8  mulhwu 0, 11, 0
  05f37cc  srwi 0, 0, 3
  05f37d0  slwi 9, 0, 3
  05f37d4  add 9, 9, 0
  05f37d8  cmplw 7, 9, 3
  05f37dc  bt 29, 0x5f35b4
  05f37e0  addi 0, 11, 16
  05f37e4  stw 0, 1112(23)
  05f37e8  b 0x5f35b4
  05f37ec  lwz 0, 1516(24)
  05f37f0  stw 0, 228(23)
  05f37f4  stw 17, 1516(24)
  05f37f8  b 0x5f3118
  05f37fc  lwz 31, -32492(2)
  05f3800  addi 3, 24, 1012
  05f3804  lwz 18, -32516(2)
  05f3808  li 6, 1320
  05f380c  mr 4, 31
  05f3810  mr 5, 18
  05f3814  bl 0x5eb0f8
  05f3818  lwz 9, 428(24)
  05f381c  cmpwi 7, 9, 0
  05f3820  bt 30, 0x5f38c0
  05f3824  lwz 9, 1144(24)
  05f3828  addi 9, 9, 1
  05f382c  stw 9, 1144(24)
  05f3830  mr 4, 31
  05f3834  mr 5, 18
  05f3838  addi 3, 24, 1012
  05f383c  li 6, 1356
  05f3840  bl 0x5eb2e0
  05f3844  lwz 9, 0(27)
  05f3848  cmpwi 7, 9, 0
  05f384c  bt 30, 0x5f30bc
  05f3850  clrldi 9, 9, 32
  05f3854  lwz 6, -32520(2)
  05f3858  clrldi 4, 26, 32
  05f385c  mr 3, 9
  05f3860  addi 5, 24, 1592
  05f3864  lwz 11, 92(9)
  05f3868  lwz 0, 0(11)
  05f386c  std 2, 40(1)
  05f3870  mtctr 0
  05f3874  lwz 2, 4(11)
  05f3878  bctrl
  05f387c  ld 2, 40(1)
  05f3880  b 0x5f30bc
  05f3884  mr 3, 29
  05f3888  bl 0x5fc098
  05f388c  nop
  05f3890  mr 4, 14
  05f3894  mr 5, 18
  05f3898  addi 3, 24, 1148
  05f389c  li 6, 593
  05f38a0  bl 0x5eb2e0
  05f38a4  clrldi 3, 26, 32
  05f38a8  bl 0x5fc490
  05f38ac  nop
  05f38b0  lwz 9, 340(23)
  05f38b4  li 0, 1
  05f38b8  stw 0, 76(9)
  05f38bc  b 0x5f3024
  05f38c0  addi 0, 24, 432
  05f38c4  li 4, 0
  05f38c8  clrldi 28, 0, 32
  05f38cc  li 5, 16384
  05f38d0  mr 3, 28
  05f38d4  stw 9, 1140(24)
  05f38d8  bl 0x5fbfd4
  05f38dc  nop
  05f38e0  cmpwi 7, 3, 0
  05f38e4  bt 30, 0x5f3950
  05f38e8  addi 0, 24, 756
  05f38ec  lwz 4, -32304(2)
  05f38f0  li 5, 0
  05f38f4  lwz 8, -32404(2)
  05f38f8  clrldi 29, 0, 32
  05f38fc  ori 5, 5, 32768
  05f3900  mr 3, 29
  05f3904  li 6, 0
  05f3908  li 7, 0
  05f390c  bl 0x5fc620
  05f3910  nop
  05f3914  cmpwi 7, 3, 0
  05f3918  bt 30, 0x5f3944
  05f391c  lwz 9, 1144(24)
  05f3920  li 0, 1
  05f3924  mr 3, 29
  05f3928  addi 9, 9, 1
  05f392c  li 4, 16
  05f3930  stw 9, 1144(24)
  05f3934  stw 0, 428(24)
  05f3938  bl 0x5fccc8
  05f393c  nop
  05f3940  b 0x5f3830
  05f3944  mr 3, 28
  05f3948  bl 0x5fc098
  05f394c  nop
  05f3950  mr 4, 31
  05f3954  mr 5, 18
  05f3958  addi 3, 24, 1012
  05f395c  li 6, 1356
  05f3960  bl 0x5eb2e0
  05f3964  clrldi 3, 26, 32
  05f3968  bl 0x5fc490
  05f396c  nop
  05f3970  lwz 0, 32(23)
  05f3974  oris 0, 0, 2048
  05f3978  stw 0, 32(23)
  05f397c  b 0x5f30bc

thunk_FUN_005f1788:   # 0x5f3980, 0x4 bytes
  05f3980  b 0x5f1788

FUN_005f3984:   # 0x5f3984, 0xb8 bytes
  05f3984  lwz 9, -32536(2)
  05f3988  mflr 0
  05f398c  lwz 11, -32540(2)
  05f3990  li 10, 0
  05f3994  stdu 1, -224(1)
  05f3998  std 29, 200(1)
  05f399c  std 0, 240(1)
  05f39a0  std 25, 168(1)
  05f39a4  std 26, 176(1)
  05f39a8  std 27, 184(1)
  05f39ac  std 28, 192(1)
  05f39b0  li 0, -1
  05f39b4  lwz 28, 0(9)
  05f39b8  lwz 27, 4(9)
  05f39bc  addi 29, 11, 276
  05f39c0  lwz 26, 8(9)
  05f39c4  mr 5, 4
  05f39c8  lwz 25, 272(11)
  05f39cc  addi 4, 1, 112
  05f39d0  ld 7, 264(11)
  05f39d4  lwz 8, 256(11)
  05f39d8  lwz 6, 12(9)
  05f39dc  stw 0, 8(9)
  05f39e0  stw 0, 0(9)
  05f39e4  stw 0, 4(9)
  05f39e8  stw 10, 272(11)
  05f39ec  std 10, 264(11)
  05f39f0  stw 28, 120(1)
  05f39f4  stw 27, 128(1)
  05f39f8  stw 26, 132(1)
  05f39fc  stw 29, 140(1)
  05f3a00  stw 25, 144(1)
  05f3a04  std 7, 112(1)
  05f3a08  stw 8, 124(1)
  05f3a0c  stw 6, 136(1)
  05f3a10  bl 0x5f1788
  05f3a14  ld 0, 240(1)
  05f3a18  clrldi 3, 3, 32
  05f3a1c  ld 25, 168(1)
  05f3a20  ld 26, 176(1)
  05f3a24  mtlr 0
  05f3a28  ld 27, 184(1)
  05f3a2c  ld 28, 192(1)
  05f3a30  ld 29, 200(1)
  05f3a34  addi 1, 1, 224
  05f3a38  blr

FUN_005f3a3c:   # 0x5f3a3c, 0x38 bytes
  05f3a3c  addis 4, 4, 2
  05f3a40  lis 0, 4
  05f3a44  addi 4, 4, -1
  05f3a48  ori 0, 0, 4095
  05f3a4c  rlwinm 4, 4, 0, 0, 14
  05f3a50  addi 3, 4, 4096
  05f3a54  cmplw 7, 3, 0
  05f3a58  bf 29, 0x5f3a64
  05f3a5c  rlwinm 3, 3, 0, 0, 19
  05f3a60  blr
  05f3a64  lis 3, 4
  05f3a68  ori 3, 3, 4096
  05f3a6c  rlwinm 3, 3, 0, 0, 19
  05f3a70  blr

FUN_005f3a74:   # 0x5f3a74, 0xf8 bytes
  05f3a74  stdu 1, -160(1)
  05f3a78  mflr 0
  05f3a7c  std 26, 112(1)
  05f3a80  std 27, 120(1)
  05f3a84  std 28, 128(1)
  05f3a88  std 29, 136(1)
  05f3a8c  std 30, 144(1)
  05f3a90  std 31, 152(1)
  05f3a94  std 0, 176(1)
  05f3a98  lwz 0, 32(3)
  05f3a9c  mr 30, 3
  05f3aa0  clrldi 29, 3, 32
  05f3aa4  cmpwi 7, 0, 0
  05f3aa8  mr 28, 4
  05f3aac  mr 26, 6
  05f3ab0  mr 3, 29
  05f3ab4  clrldi 11, 0, 32
  05f3ab8  mr 27, 5
  05f3abc  addi 31, 30, 128
  05f3ac0  bt 30, 0x5f3adc
  05f3ac4  lwz 0, 0(11)
  05f3ac8  std 2, 40(1)
  05f3acc  mtctr 0
  05f3ad0  lwz 2, 4(11)
  05f3ad4  bctrl
  05f3ad8  ld 2, 40(1)
  05f3adc  addi 9, 28, 4095
  05f3ae0  li 11, 0
  05f3ae4  rlwinm 9, 9, 0, 0, 19
  05f3ae8  stw 11, 32(31)
  05f3aec  sub 0, 9, 28
  05f3af0  stw 9, 44(31)
  05f3af4  sub 0, 27, 0
  05f3af8  stw 9, 16(31)
  05f3afc  rlwinm 0, 0, 0, 0, 14
  05f3b00  mr 3, 29
  05f3b04  add 9, 9, 0
  05f3b08  stw 9, 20(31)
  05f3b0c  stw 0, 96(30)
  05f3b10  stw 0, 40(31)
  05f3b14  stw 11, 108(30)
  05f3b18  stw 26, 28(31)
  05f3b1c  lwz 0, 40(30)
  05f3b20  cmpwi 7, 0, 0
  05f3b24  clrldi 9, 0, 32
  05f3b28  bt 30, 0x5f3b44
  05f3b2c  lwz 0, 0(9)
  05f3b30  std 2, 40(1)
  05f3b34  mtctr 0
  05f3b38  lwz 2, 4(9)
  05f3b3c  bctrl
  05f3b40  ld 2, 40(1)
  05f3b44  ld 0, 176(1)
  05f3b48  ld 26, 112(1)
  05f3b4c  ld 27, 120(1)
  05f3b50  mtlr 0
  05f3b54  ld 28, 128(1)
  05f3b58  ld 29, 136(1)
  05f3b5c  ld 30, 144(1)
  05f3b60  ld 31, 152(1)
  05f3b64  addi 1, 1, 160
  05f3b68  blr

FUN_005f3b70:   # 0x5f3b70, 0x14c bytes
  05f3b70  rlwinm 9, 5, 0, 8, 8
  05f3b74  mflr 0
  05f3b78  stdu 1, -144(1)
  05f3b7c  cmpwi 7, 9, 0
  05f3b80  std 0, 160(1)
  05f3b84  rlwinm 0, 5, 0, 26, 26
  05f3b88  std 28, 112(1)
  05f3b8c  std 29, 120(1)
  05f3b90  std 30, 128(1)
  05f3b94  std 31, 136(1)
  05f3b98  cmpwi 6, 0, 0
  05f3b9c  mr 30, 5
  05f3ba0  mr 0, 4
  05f3ba4  mr 31, 3
  05f3ba8  li 4, 0
  05f3bac  mr 28, 3
  05f3bb0  addi 29, 3, 128
  05f3bb4  bt 30, 0x5f3c60
  05f3bb8  extsw 3, 0
  05f3bbc  stw 0, 8(29)
  05f3bc0  li 0, 1
  05f3bc4  li 5, 1
  05f3bc8  stw 0, 24(29)
  05f3bcc  bt 26, 0x5f3c50
  05f3bd0  addi 9, 28, -400
  05f3bd4  li 5, 0
  05f3bd8  clrldi 9, 9, 32
  05f3bdc  ld 0, 192(9)
  05f3be0  cmpdi 7, 0, 0
  05f3be4  mr 4, 0
  05f3be8  std 0, 0(29)
  05f3bec  bf 30, 0x5f3ca8
  05f3bf0  lwz 0, -32272(2)
  05f3bf4  li 3, 1
  05f3bf8  lwz 9, -32296(2)
  05f3bfc  lwz 11, -32292(2)
  05f3c00  lwz 10, -32288(2)
  05f3c04  lwz 8, -32284(2)
  05f3c08  lwz 7, -32280(2)
  05f3c0c  lwz 6, -32276(2)
  05f3c10  stw 0, 24(31)
  05f3c14  stw 9, 0(31)
  05f3c18  stw 11, 4(31)
  05f3c1c  stw 10, 8(31)
  05f3c20  stw 8, 12(31)
  05f3c24  stw 7, 16(31)
  05f3c28  stw 6, 20(31)
  05f3c2c  ld 0, 160(1)
  05f3c30  extsw 3, 3
  05f3c34  ld 28, 112(1)
  05f3c38  ld 29, 120(1)
  05f3c3c  mtlr 0
  05f3c40  ld 30, 128(1)
  05f3c44  ld 31, 136(1)
  05f3c48  addi 1, 1, 144
  05f3c4c  blr
  05f3c50  bl 0x5cf4cc
  05f3c54  nop
  05f3c58  std 3, 0(29)
  05f3c5c  b 0x5f3bf0
  05f3c60  clrldi 3, 0, 32
  05f3c64  bl 0x5cf5b8
  05f3c68  nop
  05f3c6c  rlwinm 0, 30, 0, 26, 26
  05f3c70  cmpwi 7, 3, -1
  05f3c74  stw 3, 8(29)
  05f3c78  cmpwi 6, 0, 0
  05f3c7c  li 3, 0
  05f3c80  bt 30, 0x5f3c2c
  05f3c84  bt 26, 0x5f3bf0
  05f3c88  addi 9, 28, -400
  05f3c8c  li 5, 0
  05f3c90  clrldi 9, 9, 32
  05f3c94  ld 0, 192(9)
  05f3c98  cmpdi 7, 0, 0
  05f3c9c  mr 4, 0
  05f3ca0  std 0, 0(29)
  05f3ca4  bt 30, 0x5f3bf0
  05f3ca8  lwz 3, 8(29)
  05f3cac  extsw 3, 3
  05f3cb0  bl 0x5cf4cc
  05f3cb4  nop
  05f3cb8  b 0x5f3bf0

FUN_005f3cc0:   # 0x5f3cc0, 0xb8 bytes
  05f3cc0  stdu 1, -144(1)
  05f3cc4  mflr 0
  05f3cc8  std 29, 120(1)
  05f3ccc  std 30, 128(1)
  05f3cd0  std 31, 136(1)
  05f3cd4  std 0, 160(1)
  05f3cd8  lwz 0, 32(3)
  05f3cdc  mr 31, 3
  05f3ce0  clrldi 29, 3, 32
  05f3ce4  cmpwi 7, 0, 0
  05f3ce8  mr 3, 29
  05f3cec  clrldi 11, 0, 32
  05f3cf0  addi 30, 31, 128
  05f3cf4  bt 30, 0x5f3d10
  05f3cf8  lwz 0, 0(11)
  05f3cfc  std 2, 40(1)
  05f3d00  mtctr 0
  05f3d04  lwz 2, 4(11)
  05f3d08  bctrl
  05f3d0c  ld 2, 40(1)
  05f3d10  lwz 0, 24(30)
  05f3d14  cmpwi 7, 0, 0
  05f3d18  bt 30, 0x5f3d64
  05f3d1c  lwz 0, 40(31)
  05f3d20  mr 3, 29
  05f3d24  cmpwi 7, 0, 0
  05f3d28  clrldi 9, 0, 32
  05f3d2c  bt 30, 0x5f3d48
  05f3d30  lwz 0, 0(9)
  05f3d34  std 2, 40(1)
  05f3d38  mtctr 0
  05f3d3c  lwz 2, 4(9)
  05f3d40  bctrl
  05f3d44  ld 2, 40(1)
  05f3d48  ld 0, 160(1)
  05f3d4c  ld 29, 120(1)
  05f3d50  ld 30, 128(1)
  05f3d54  mtlr 0
  05f3d58  ld 31, 136(1)
  05f3d5c  addi 1, 1, 144
  05f3d60  blr
  05f3d64  lwz 3, 8(30)
  05f3d68  extsw 3, 3
  05f3d6c  bl 0x5cf554
  05f3d70  nop
  05f3d74  b 0x5f3d1c

FUN_005f3d78:   # 0x5f3d78, 0x658 bytes
  05f3d78  mfcr 12
  05f3d7c  stdu 1, -336(1)
  05f3d80  std 27, 296(1)
  05f3d84  std 28, 304(1)
  05f3d88  std 29, 312(1)
  05f3d8c  std 30, 320(1)
  05f3d90  std 20, 240(1)
  05f3d94  std 21, 248(1)
  05f3d98  std 22, 256(1)
  05f3d9c  std 23, 264(1)
  05f3da0  std 24, 272(1)
  05f3da4  std 25, 280(1)
  05f3da8  std 26, 288(1)
  05f3dac  std 31, 328(1)
  05f3db0  mr 30, 3
  05f3db4  mr 29, 3
  05f3db8  addi 28, 3, 128
  05f3dbc  clrldi 27, 3, 32
  05f3dc0  stw 12, 344(1)
  05f3dc4  mflr 0
  05f3dc8  std 0, 352(1)
  05f3dcc  lwz 26, 76(3)
  05f3dd0  lwz 0, 64(3)
  05f3dd4  cmpwi 7, 0, 0
  05f3dd8  bf 30, 0x5f3e34
  05f3ddc  lwz 0, 112(3)
  05f3de0  cmpwi 7, 0, 0
  05f3de4  bf 30, 0x5f3e34
  05f3de8  lwz 9, 36(3)
  05f3dec  cmpwi 7, 9, 0
  05f3df0  bf 30, 0x5f3e84
  05f3df4  lwz 3, 44(30)
  05f3df8  li 31, -1
  05f3dfc  cmpwi 7, 3, 0
  05f3e00  clrldi 31, 31, 32
  05f3e04  bt 30, 0x5f3e38
  05f3e08  li 31, -1
  05f3e0c  clrldi 9, 3, 32
  05f3e10  clrldi 31, 31, 32
  05f3e14  mr 3, 27
  05f3e18  lwz 0, 0(9)
  05f3e1c  std 2, 40(1)
  05f3e20  mtctr 0
  05f3e24  lwz 2, 4(9)
  05f3e28  bctrl
  05f3e2c  ld 2, 40(1)
  05f3e30  b 0x5f3e38
  05f3e34  li 31, 0
  05f3e38  ld 0, 352(1)
  05f3e3c  mr 3, 31
  05f3e40  lwz 12, 344(1)
  05f3e44  ld 20, 240(1)
  05f3e48  mtlr 0
  05f3e4c  ld 21, 248(1)
  05f3e50  mtocrf 8, 12
  05f3e54  ld 22, 256(1)
  05f3e58  ld 23, 264(1)
  05f3e5c  ld 24, 272(1)
  05f3e60  ld 25, 280(1)
  05f3e64  ld 26, 288(1)
  05f3e68  ld 27, 296(1)
  05f3e6c  ld 28, 304(1)
  05f3e70  ld 29, 312(1)
  05f3e74  ld 30, 320(1)
  05f3e78  ld 31, 328(1)
  05f3e7c  addi 1, 1, 336
  05f3e80  blr
  05f3e84  clrldi 9, 9, 32
  05f3e88  mr 3, 27
  05f3e8c  lwz 0, 0(9)
  05f3e90  std 2, 40(1)
  05f3e94  mtctr 0
  05f3e98  lwz 2, 4(9)
  05f3e9c  bctrl
  05f3ea0  ld 2, 40(1)
  05f3ea4  cmpwi 7, 3, 0
  05f3ea8  bt 30, 0x5f3df4
  05f3eac  lwz 9, 28(28)
  05f3eb0  lwz 0, 36(28)
  05f3eb4  sub 24, 9, 0
  05f3eb8  cmpwi 4, 24, 0
  05f3ebc  bf 18, 0x5f4034
  05f3ec0  lwz 0, 48(28)
  05f3ec4  cmpwi 7, 0, 0
  05f3ec8  bf 30, 0x5f4034
  05f3ecc  lwz 9, 28(30)
  05f3ed0  lwz 0, 32(9)
  05f3ed4  rlwinm 0, 0, 0, 24, 24
  05f3ed8  cmpwi 7, 0, 0
  05f3edc  bt 30, 0x5f4034
  05f3ee0  li 11, 1
  05f3ee4  lwz 20, -32268(2)
  05f3ee8  stw 11, 48(28)
  05f3eec  lwz 9, 28(30)
  05f3ef0  lwz 0, 32(9)
  05f3ef4  rlwinm 0, 0, 24, 1, 31
  05f3ef8  rotlwi 0, 0, 8
  05f3efc  stw 0, 32(9)
  05f3f00  stw 11, 68(30)
  05f3f04  lwz 9, 0(20)
  05f3f08  cmpwi 7, 9, 0
  05f3f0c  bt 30, 0x5f3fa0
  05f3f10  clrldi 9, 9, 32
  05f3f14  lwz 31, -32264(2)
  05f3f18  lwz 5, -32260(2)
  05f3f1c  mr 3, 9
  05f3f20  mr 4, 31
  05f3f24  lwz 11, 52(9)
  05f3f28  lwz 0, 0(11)
  05f3f2c  std 2, 40(1)
  05f3f30  mtctr 0
  05f3f34  lwz 2, 4(11)
  05f3f38  bctrl
  05f3f3c  ld 2, 40(1)
  05f3f40  lwz 3, 0(20)
  05f3f44  cmpwi 7, 3, 0
  05f3f48  bt 30, 0x5f3fa0
  05f3f4c  clrldi 3, 3, 32
  05f3f50  lwz 0, -32252(2)
  05f3f54  lwz 9, -32248(2)
  05f3f58  li 4, 0
  05f3f5c  lwz 10, -32244(2)
  05f3f60  li 5, 0
  05f3f64  lwz 8, -32256(2)
  05f3f68  li 6, 0
  05f3f6c  li 7, 0
  05f3f70  lwz 11, 80(3)
  05f3f74  std 9, 120(1)
  05f3f78  std 10, 128(1)
  05f3f7c  std 0, 112(1)
  05f3f80  addi 10, 31, 4
  05f3f84  lwz 0, 0(11)
  05f3f88  li 9, 414
  05f3f8c  std 2, 40(1)
  05f3f90  mtctr 0
  05f3f94  lwz 2, 4(11)
  05f3f98  bctrl
  05f3f9c  ld 2, 40(1)
  05f3fa0  lwz 11, 28(30)
  05f3fa4  li 5, 0
  05f3fa8  ld 0, 0(28)
  05f3fac  lwz 3, 8(28)
  05f3fb0  extsw 3, 3
  05f3fb4  lwz 9, 344(11)
  05f3fb8  lwz 4, 0(9)
  05f3fbc  rlwinm 4, 4, 0, 0, 30
  05f3fc0  addi 4, 4, -32
  05f3fc4  clrldi 4, 4, 32
  05f3fc8  add 4, 4, 0
  05f3fcc  bl 0x5cf4cc
  05f3fd0  nop
  05f3fd4  lwz 3, 8(28)
  05f3fd8  addi 4, 1, 144
  05f3fdc  extsw 3, 3
  05f3fe0  li 5, 32
  05f3fe4  bl 0x5cfc44
  05f3fe8  nop
  05f3fec  lwz 9, 0(20)
  05f3ff0  cmpwi 7, 9, 0
  05f3ff4  bt 30, 0x5f402c
  05f3ff8  clrldi 9, 9, 32
  05f3ffc  lwz 6, -32256(2)
  05f4000  li 4, 0
  05f4004  mr 3, 9
  05f4008  li 5, 0
  05f400c  li 7, 421
  05f4010  lwz 11, 84(9)
  05f4014  lwz 0, 0(11)
  05f4018  std 2, 40(1)
  05f401c  mtctr 0
  05f4020  lwz 2, 4(11)
  05f4024  bctrl
  05f4028  ld 2, 40(1)
  05f402c  li 0, 0
  05f4030  stw 0, 68(30)
  05f4034  lis 9, 1
  05f4038  lwz 0, 40(28)
  05f403c  ori 9, 9, 65535
  05f4040  cmplw 7, 0, 9
  05f4044  bf 29, 0x5f4370
  05f4048  bt 18, 0x5f4370
  05f404c  cmplw 7, 24, 9
  05f4050  mr 25, 24
  05f4054  bf 29, 0x5f405c
  05f4058  lis 25, 2
  05f405c  lwz 9, 52(30)
  05f4060  li 21, 0
  05f4064  cmpwi 7, 9, 0
  05f4068  bt 30, 0x5f408c
  05f406c  clrldi 9, 9, 32
  05f4070  lwz 0, 0(9)
  05f4074  std 2, 40(1)
  05f4078  mtctr 0
  05f407c  lwz 2, 4(9)
  05f4080  bctrl
  05f4084  ld 2, 40(1)
  05f4088  mr 21, 3
  05f408c  lwz 0, 36(28)
  05f4090  clrlwi 31, 0, 15
  05f4094  cmplw 7, 25, 31
  05f4098  bt 28, 0x5f4380
  05f409c  cmpw 7, 25, 24
  05f40a0  bt 30, 0x5f4380
  05f40a4  cmpwi 7, 31, 0
  05f40a8  li 23, 0
  05f40ac  bt 30, 0x5f40e8
  05f40b0  lwz 9, 60(30)
  05f40b4  cmpwi 7, 9, 0
  05f40b8  bt 30, 0x5f43bc
  05f40bc  clrldi 9, 9, 32
  05f40c0  addi 3, 28, 32
  05f40c4  extsw 4, 31
  05f40c8  clrldi 3, 3, 32
  05f40cc  mr 23, 31
  05f40d0  lwz 0, 0(9)
  05f40d4  std 2, 40(1)
  05f40d8  mtctr 0
  05f40dc  lwz 2, 4(9)
  05f40e0  bctrl
  05f40e4  ld 2, 40(1)
  05f40e8  lwz 0, 48(28)
  05f40ec  sub 24, 25, 31
  05f40f0  cmpwi 7, 0, 0
  05f40f4  bt 30, 0x5f4114
  05f40f8  lwz 9, 28(30)
  05f40fc  li 11, 0
  05f4100  lwz 0, 32(9)
  05f4104  rlwinm 0, 0, 24, 1, 31
  05f4108  rotlwi 0, 0, 8
  05f410c  stw 0, 32(9)
  05f4110  stw 11, 48(28)
  05f4114  lwz 20, -32268(2)
  05f4118  lwz 3, 0(20)
  05f411c  cmpwi 7, 3, 0
  05f4120  bt 30, 0x5f417c
  05f4124  clrldi 3, 3, 32
  05f4128  lwz 0, -32252(2)
  05f412c  lwz 9, -32248(2)
  05f4130  li 4, 0
  05f4134  lwz 7, -32240(2)
  05f4138  li 5, 0
  05f413c  lwz 10, -32264(2)
  05f4140  li 6, 0
  05f4144  lwz 8, -32256(2)
  05f4148  lwz 11, 80(3)
  05f414c  addi 10, 10, 8
  05f4150  std 9, 120(1)
  05f4154  std 7, 128(1)
  05f4158  std 0, 112(1)
  05f415c  li 7, 0
  05f4160  lwz 0, 0(11)
  05f4164  li 9, 459
  05f4168  std 2, 40(1)
  05f416c  mtctr 0
  05f4170  lwz 2, 4(11)
  05f4174  bctrl
  05f4178  ld 2, 40(1)
  05f417c  li 22, 1
  05f4180  clrldi 5, 24, 32
  05f4184  stw 22, 68(30)
  05f4188  lwz 4, 44(28)
  05f418c  lwz 3, 8(28)
  05f4190  add 4, 4, 23
  05f4194  extsw 3, 3
  05f4198  clrldi 4, 4, 32
  05f419c  bl 0x5cfc44
  05f41a0  nop
  05f41a4  lwz 9, 48(30)
  05f41a8  cmpwi 7, 9, 0
  05f41ac  li 0, 0
  05f41b0  mr 25, 3
  05f41b4  stw 0, 68(30)
  05f41b8  clrldi 31, 3, 32
  05f41bc  bt 30, 0x5f41e8
  05f41c0  clrldi 9, 9, 32
  05f41c4  mr 3, 27
  05f41c8  mr 4, 31
  05f41cc  clrldi 5, 21, 32
  05f41d0  lwz 0, 0(9)
  05f41d4  std 2, 40(1)
  05f41d8  mtctr 0
  05f41dc  lwz 2, 4(9)
  05f41e0  bctrl
  05f41e4  ld 2, 40(1)
  05f41e8  cmpw 7, 24, 25
  05f41ec  bt 30, 0x5f41f4
  05f41f0  stw 22, 64(30)
  05f41f4  cmpwi 7, 25, 0
  05f41f8  bt 30, 0x5f4318
  05f41fc  lwz 0, 72(30)
  05f4200  add 0, 25, 0
  05f4204  stw 0, 72(30)
  05f4208  lwz 11, 36(28)
  05f420c  lwz 10, 20(28)
  05f4210  add 11, 25, 11
  05f4214  stw 11, 36(28)
  05f4218  lwz 9, 44(28)
  05f421c  addis 9, 9, 2
  05f4220  stw 9, 44(28)
  05f4224  lwz 0, 44(28)
  05f4228  cmplw 7, 0, 10
  05f422c  bt 28, 0x5f4238
  05f4230  lwz 0, 16(28)
  05f4234  stw 0, 44(28)
  05f4238  lwz 9, 60(30)
  05f423c  cmpwi 7, 9, 0
  05f4240  bt 30, 0x5f43ac
  05f4244  clrldi 9, 9, 32
  05f4248  addi 3, 28, 40
  05f424c  neg 4, 25
  05f4250  clrldi 3, 3, 32
  05f4254  extsw 4, 4
  05f4258  lwz 0, 0(9)
  05f425c  std 2, 40(1)
  05f4260  mtctr 0
  05f4264  lwz 2, 4(9)
  05f4268  bctrl
  05f426c  ld 2, 40(1)
  05f4270  lwz 9, 60(30)
  05f4274  cmpwi 7, 9, 0
  05f4278  bt 30, 0x5f439c
  05f427c  clrldi 9, 9, 32
  05f4280  addi 3, 29, 108
  05f4284  extsw 4, 25
  05f4288  clrldi 3, 3, 32
  05f428c  lwz 0, 0(9)
  05f4290  std 2, 40(1)
  05f4294  mtctr 0
  05f4298  lwz 2, 4(9)
  05f429c  bctrl
  05f42a0  ld 2, 40(1)
  05f42a4  lwz 0, 108(30)
  05f42a8  lwz 9, 100(30)
  05f42ac  cmplw 7, 0, 9
  05f42b0  bf 29, 0x5f42bc
  05f42b4  lwz 0, 108(30)
  05f42b8  stw 0, 100(30)
  05f42bc  lwz 9, 52(30)
  05f42c0  li 3, 0
  05f42c4  cmpwi 7, 9, 0
  05f42c8  bt 30, 0x5f42e8
  05f42cc  clrldi 9, 9, 32
  05f42d0  lwz 0, 0(9)
  05f42d4  std 2, 40(1)
  05f42d8  mtctr 0
  05f42dc  lwz 2, 4(9)
  05f42e0  bctrl
  05f42e4  ld 2, 40(1)
  05f42e8  lwz 0, 80(30)
  05f42ec  sub 3, 3, 21
  05f42f0  cmpwi 7, 26, 0
  05f42f4  add 0, 3, 0
  05f42f8  stw 0, 80(30)
  05f42fc  bf 30, 0x5f438c
  05f4300  lwz 0, 76(30)
  05f4304  cmpwi 7, 0, 0
  05f4308  bf 30, 0x5f438c
  05f430c  lwz 0, 88(30)
  05f4310  add 0, 3, 0
  05f4314  stw 0, 88(30)
  05f4318  lwz 9, 0(20)
  05f431c  cmpwi 7, 9, 0
  05f4320  bt 30, 0x5f4358
  05f4324  clrldi 9, 9, 32
  05f4328  lwz 6, -32256(2)
  05f432c  li 4, 0
  05f4330  mr 3, 9
  05f4334  li 5, 0
  05f4338  li 7, 499
  05f433c  lwz 11, 84(9)
  05f4340  lwz 0, 0(11)
  05f4344  std 2, 40(1)
  05f4348  mtctr 0
  05f434c  lwz 2, 4(11)
  05f4350  bctrl
  05f4354  ld 2, 40(1)
  05f4358  lwz 3, 40(30)
  05f435c  cmpwi 7, 3, 0
  05f4360  bt 30, 0x5f3e38
  05f4364  clrldi 9, 3, 32
  05f4368  mr 3, 27
  05f436c  b 0x5f3e18
  05f4370  lwz 0, 108(30)
  05f4374  li 31, 0
  05f4378  stw 0, 104(30)
  05f437c  b 0x5f4358
  05f4380  li 31, 0
  05f4384  li 23, 0
  05f4388  b 0x5f40e8
  05f438c  lwz 0, 92(30)
  05f4390  add 0, 3, 0
  05f4394  stw 0, 92(30)
  05f4398  b 0x5f4318
  05f439c  lwz 0, 108(30)
  05f43a0  add 0, 25, 0
  05f43a4  stw 0, 108(30)
  05f43a8  b 0x5f42a4
  05f43ac  lwz 0, 40(28)
  05f43b0  sub 0, 0, 25
  05f43b4  stw 0, 40(28)
  05f43b8  b 0x5f4270
  05f43bc  lwz 0, 32(28)
  05f43c0  mr 23, 31
  05f43c4  add 0, 31, 0
  05f43c8  stw 0, 32(28)
  05f43cc  b 0x5f40e8

FUN_005f43d0:   # 0x5f43d0, 0x11c bytes
  05f43d0  clrlwi 9, 4, 31
  05f43d4  mflr 0
  05f43d8  stdu 1, -128(1)
  05f43dc  cmpwi 7, 9, 0
  05f43e0  std 31, 120(1)
  05f43e4  std 30, 112(1)
  05f43e8  std 0, 144(1)
  05f43ec  mr 31, 3
  05f43f0  bt 30, 0x5f4430
  05f43f4  lwz 0, 112(31)
  05f43f8  clrldi 30, 3, 32
  05f43fc  cmpwi 7, 0, 0
  05f4400  bt 30, 0x5f445c
  05f4404  cmpwi 7, 4, 0
  05f4408  bt 28, 0x5f446c
  05f440c  nop
  05f4410  lwz 3, 112(31)
  05f4414  ld 0, 144(1)
  05f4418  extsw 3, 3
  05f441c  ld 30, 112(1)
  05f4420  ld 31, 120(1)
  05f4424  mtlr 0
  05f4428  addi 1, 1, 128
  05f442c  blr
  05f4430  rlwinm 0, 4, 0, 30, 30
  05f4434  cmpwi 7, 0, 0
  05f4438  bt 30, 0x5f4410
  05f443c  lwz 0, 112(31)
  05f4440  clrldi 3, 3, 32
  05f4444  cmpwi 7, 0, 1
  05f4448  bt 30, 0x5f44e4
  05f444c  cmpwi 7, 4, 0
  05f4450  bf 28, 0x5f4410
  05f4454  bl 0x5f3d78
  05f4458  b 0x5f4410
  05f445c  cmpwi 7, 4, 0
  05f4460  li 0, 1
  05f4464  stw 0, 112(31)
  05f4468  bf 28, 0x5f4410
  05f446c  lwz 9, 32(31)
  05f4470  cmpwi 7, 9, 0
  05f4474  bt 30, 0x5f4498
  05f4478  clrldi 9, 9, 32
  05f447c  mr 3, 30
  05f4480  lwz 0, 0(9)
  05f4484  std 2, 40(1)
  05f4488  mtctr 0
  05f448c  lwz 2, 4(9)
  05f4490  bctrl
  05f4494  ld 2, 40(1)
  05f4498  lwz 9, 40(31)
  05f449c  cmpwi 7, 9, 0
  05f44a0  bt 30, 0x5f4410
  05f44a4  clrldi 9, 9, 32
  05f44a8  mr 3, 30
  05f44ac  lwz 0, 0(9)
  05f44b0  std 2, 40(1)
  05f44b4  mtctr 0
  05f44b8  lwz 2, 4(9)
  05f44bc  bctrl
  05f44c0  ld 2, 40(1)
  05f44c4  lwz 3, 112(31)
  05f44c8  ld 0, 144(1)
  05f44cc  extsw 3, 3
  05f44d0  ld 30, 112(1)
  05f44d4  ld 31, 120(1)
  05f44d8  mtlr 0
  05f44dc  addi 1, 1, 128
  05f44e0  blr
  05f44e4  stw 9, 112(31)
  05f44e8  b 0x5f444c

FUN_005f44f0:   # 0x5f44f0, 0x244 bytes
  05f44f0  stdu 1, -208(1)
  05f44f4  mflr 0
  05f44f8  std 24, 144(1)
  05f44fc  std 25, 152(1)
  05f4500  std 27, 168(1)
  05f4504  std 28, 176(1)
  05f4508  std 29, 184(1)
  05f450c  std 30, 192(1)
  05f4510  std 31, 200(1)
  05f4514  std 26, 160(1)
  05f4518  std 0, 224(1)
  05f451c  lwz 0, 32(3)
  05f4520  mr 30, 3
  05f4524  mr 28, 4
  05f4528  cmpwi 7, 0, 0
  05f452c  mr 25, 5
  05f4530  mr 27, 6
  05f4534  clrldi 24, 3, 32
  05f4538  mr 29, 4
  05f453c  addi 31, 3, 128
  05f4540  bt 30, 0x5f4564
  05f4544  clrldi 9, 0, 32
  05f4548  mr 3, 24
  05f454c  lwz 0, 0(9)
  05f4550  std 2, 40(1)
  05f4554  mtctr 0
  05f4558  lwz 2, 4(9)
  05f455c  bctrl
  05f4560  ld 2, 40(1)
  05f4564  cmpwi 7, 29, -1
  05f4568  bt 30, 0x5f459c
  05f456c  lwz 0, 36(31)
  05f4570  cmpw 7, 0, 29
  05f4574  bt 30, 0x5f459c
  05f4578  lwz 3, 8(31)
  05f457c  extsw 4, 29
  05f4580  ld 0, 0(31)
  05f4584  li 5, 0
  05f4588  extsw 3, 3
  05f458c  add 4, 4, 0
  05f4590  bl 0x5cf4cc
  05f4594  nop
  05f4598  stw 28, 36(31)
  05f459c  lwz 26, -32268(2)
  05f45a0  lwz 3, 0(26)
  05f45a4  cmpwi 7, 3, 0
  05f45a8  bt 30, 0x5f4604
  05f45ac  clrldi 3, 3, 32
  05f45b0  lwz 0, -32252(2)
  05f45b4  lwz 9, -32248(2)
  05f45b8  li 4, 0
  05f45bc  lwz 11, -32236(2)
  05f45c0  li 5, 0
  05f45c4  std 9, 120(1)
  05f45c8  std 0, 112(1)
  05f45cc  std 11, 128(1)
  05f45d0  lwz 29, 80(3)
  05f45d4  li 6, 0
  05f45d8  lwz 10, -32264(2)
  05f45dc  li 7, 1
  05f45e0  lwz 8, -32256(2)
  05f45e4  li 9, 94
  05f45e8  addi 10, 10, 12
  05f45ec  lwz 0, 0(29)
  05f45f0  std 2, 40(1)
  05f45f4  mtctr 0
  05f45f8  lwz 2, 4(29)
  05f45fc  bctrl
  05f4600  ld 2, 40(1)
  05f4604  lwz 3, 8(31)
  05f4608  clrldi 28, 25, 32
  05f460c  clrldi 5, 27, 32
  05f4610  mr 4, 28
  05f4614  extsw 3, 3
  05f4618  bl 0x5cfc44
  05f461c  nop
  05f4620  lwz 9, 0(26)
  05f4624  cmpwi 7, 9, 0
  05f4628  mr 29, 3
  05f462c  bt 30, 0x5f4664
  05f4630  clrldi 9, 9, 32
  05f4634  lwz 6, -32256(2)
  05f4638  li 4, 0
  05f463c  mr 3, 9
  05f4640  li 5, 0
  05f4644  li 7, 103
  05f4648  lwz 11, 84(9)
  05f464c  lwz 0, 0(11)
  05f4650  std 2, 40(1)
  05f4654  mtctr 0
  05f4658  lwz 2, 4(11)
  05f465c  bctrl
  05f4660  ld 2, 40(1)
  05f4664  cmpw 7, 27, 29
  05f4668  bt 30, 0x5f4674
  05f466c  li 0, 1
  05f4670  stw 0, 64(30)
  05f4674  lwz 0, 36(31)
  05f4678  lwz 11, 28(31)
  05f467c  add 0, 29, 0
  05f4680  stw 0, 36(31)
  05f4684  lwz 9, 36(31)
  05f4688  stw 9, 12(31)
  05f468c  sub 11, 11, 9
  05f4690  lwz 0, 96(30)
  05f4694  cmplw 7, 11, 0
  05f4698  bt 28, 0x5f46a0
  05f469c  lwz 11, 96(30)
  05f46a0  lwz 9, 40(30)
  05f46a4  stw 11, 104(30)
  05f46a8  cmpwi 7, 9, 0
  05f46ac  bt 30, 0x5f46d0
  05f46b0  clrldi 9, 9, 32
  05f46b4  mr 3, 24
  05f46b8  lwz 0, 0(9)
  05f46bc  std 2, 40(1)
  05f46c0  mtctr 0
  05f46c4  lwz 2, 4(9)
  05f46c8  bctrl
  05f46cc  ld 2, 40(1)
  05f46d0  lwz 3, 56(30)
  05f46d4  cmpwi 7, 3, 0
  05f46d8  bt 30, 0x5f4700
  05f46dc  clrldi 9, 3, 32
  05f46e0  clrldi 4, 29, 32
  05f46e4  mr 3, 28
  05f46e8  lwz 0, 0(9)
  05f46ec  std 2, 40(1)
  05f46f0  mtctr 0
  05f46f4  lwz 2, 4(9)
  05f46f8  bctrl
  05f46fc  ld 2, 40(1)
  05f4700  ld 0, 224(1)
  05f4704  clrldi 3, 29, 32
  05f4708  ld 24, 144(1)
  05f470c  ld 25, 152(1)
  05f4710  mtlr 0
  05f4714  ld 26, 160(1)
  05f4718  ld 27, 168(1)
  05f471c  ld 28, 176(1)
  05f4720  ld 29, 184(1)
  05f4724  ld 30, 192(1)
  05f4728  ld 31, 200(1)
  05f472c  addi 1, 1, 208
  05f4730  blr

FUN_005f4738:   # 0x5f4738, 0x954 bytes
  05f4738  mfcr 12
  05f473c  stdu 1, -272(1)
  05f4740  std 18, 160(1)
  05f4744  std 25, 216(1)
  05f4748  std 26, 224(1)
  05f474c  std 27, 232(1)
  05f4750  std 28, 240(1)
  05f4754  std 29, 248(1)
  05f4758  std 30, 256(1)
  05f475c  std 31, 264(1)
  05f4760  std 16, 144(1)
  05f4764  std 17, 152(1)
  05f4768  std 19, 168(1)
  05f476c  std 20, 176(1)
  05f4770  std 21, 184(1)
  05f4774  std 22, 192(1)
  05f4778  std 23, 200(1)
  05f477c  std 24, 208(1)
  05f4780  mr 29, 3
  05f4784  mr 30, 4
  05f4788  mr 25, 3
  05f478c  mr 27, 5
  05f4790  mr 18, 6
  05f4794  mr 26, 7
  05f4798  addi 28, 3, 128
  05f479c  li 31, 0
  05f47a0  stw 12, 280(1)
  05f47a4  mflr 0
  05f47a8  std 0, 288(1)
  05f47ac  lwz 0, 64(3)
  05f47b0  cmpwi 7, 0, 0
  05f47b4  bf 30, 0x5f4c64
  05f47b8  lwz 9, 52(3)
  05f47bc  li 17, 0
  05f47c0  cmpwi 7, 9, 0
  05f47c4  bt 30, 0x5f47e8
  05f47c8  clrldi 9, 9, 32
  05f47cc  lwz 0, 0(9)
  05f47d0  std 2, 40(1)
  05f47d4  mtctr 0
  05f47d8  lwz 2, 4(9)
  05f47dc  bctrl
  05f47e0  ld 2, 40(1)
  05f47e4  mr 17, 3
  05f47e8  lwz 23, -32268(2)
  05f47ec  lwz 3, 0(23)
  05f47f0  cmpwi 7, 3, 0
  05f47f4  bt 30, 0x5f4864
  05f47f8  lwz 31, -32232(2)
  05f47fc  lwz 0, 0(31)
  05f4800  cmplw 7, 0, 30
  05f4804  bt 29, 0x5f4efc
  05f4808  lwz 24, -32264(2)
  05f480c  stw 30, 0(31)
  05f4810  clrldi 3, 3, 32
  05f4814  lwz 0, -32252(2)
  05f4818  lwz 9, -32248(2)
  05f481c  li 4, 0
  05f4820  lwz 10, -32224(2)
  05f4824  li 5, 0
  05f4828  lwz 8, -32256(2)
  05f482c  li 6, 0
  05f4830  li 7, 0
  05f4834  lwz 11, 80(3)
  05f4838  std 9, 120(1)
  05f483c  std 10, 128(1)
  05f4840  std 0, 112(1)
  05f4844  addi 10, 24, 20
  05f4848  lwz 0, 0(11)
  05f484c  li 9, 151
  05f4850  std 2, 40(1)
  05f4854  mtctr 0
  05f4858  lwz 2, 4(11)
  05f485c  bctrl
  05f4860  ld 2, 40(1)
  05f4864  cmpwi 7, 27, -1
  05f4868  bt 30, 0x5f4cc0
  05f486c  lwz 0, 12(28)
  05f4870  cmpw 7, 0, 27
  05f4874  bt 30, 0x5f4cc0
  05f4878  lwz 3, 0(23)
  05f487c  cmpwi 7, 3, 0
  05f4880  bt 30, 0x5f48dc
  05f4884  clrldi 3, 3, 32
  05f4888  lwz 0, -32252(2)
  05f488c  lwz 9, -32248(2)
  05f4890  li 4, 0
  05f4894  lwz 7, -32220(2)
  05f4898  li 5, 0
  05f489c  lwz 10, -32264(2)
  05f48a0  li 6, 0
  05f48a4  lwz 8, -32256(2)
  05f48a8  lwz 11, 80(3)
  05f48ac  addi 10, 10, 24
  05f48b0  std 9, 120(1)
  05f48b4  std 7, 128(1)
  05f48b8  std 0, 112(1)
  05f48bc  li 7, 1
  05f48c0  lwz 0, 0(11)
  05f48c4  li 9, 162
  05f48c8  std 2, 40(1)
  05f48cc  mtctr 0
  05f48d0  lwz 2, 4(11)
  05f48d4  bctrl
  05f48d8  ld 2, 40(1)
  05f48dc  lwz 9, 32(29)
  05f48e0  clrldi 22, 25, 32
  05f48e4  cmpwi 7, 9, 0
  05f48e8  bt 30, 0x5f490c
  05f48ec  clrldi 9, 9, 32
  05f48f0  mr 3, 22
  05f48f4  lwz 0, 0(9)
  05f48f8  std 2, 40(1)
  05f48fc  mtctr 0
  05f4900  lwz 2, 4(9)
  05f4904  bctrl
  05f4908  ld 2, 40(1)
  05f490c  lwz 9, 12(28)
  05f4910  cmplw 7, 27, 9
  05f4914  bf 29, 0x5f4924
  05f4918  lwz 0, 36(28)
  05f491c  cmplw 7, 27, 0
  05f4920  bf 29, 0x5f4f40
  05f4924  ld 0, 0(28)
  05f4928  extsw 4, 27
  05f492c  lwz 3, 8(28)
  05f4930  li 5, 0
  05f4934  add 4, 4, 0
  05f4938  extsw 3, 3
  05f493c  bl 0x5cf4cc
  05f4940  nop
  05f4944  stw 27, 36(28)
  05f4948  stw 27, 12(28)
  05f494c  lwz 0, 96(29)
  05f4950  li 9, 0
  05f4954  stw 0, 40(28)
  05f4958  stw 9, 108(29)
  05f495c  lwz 0, 16(28)
  05f4960  stw 9, 32(28)
  05f4964  stw 0, 44(28)
  05f4968  lwz 9, 0(23)
  05f496c  li 24, 1
  05f4970  cmpwi 7, 9, 0
  05f4974  bt 30, 0x5f4cc8
  05f4978  clrldi 9, 9, 32
  05f497c  lwz 6, -32256(2)
  05f4980  li 4, 0
  05f4984  mr 3, 9
  05f4988  li 5, 0
  05f498c  li 7, 195
  05f4990  lwz 11, 84(9)
  05f4994  lwz 0, 0(11)
  05f4998  std 2, 40(1)
  05f499c  mtctr 0
  05f49a0  lwz 2, 4(11)
  05f49a4  bctrl
  05f49a8  ld 2, 40(1)
  05f49ac  b 0x5f4cc8
  05f49b0  cmpwi 4, 24, 0
  05f49b4  lwz 3, 0(23)
  05f49b8  cmpwi 7, 3, 0
  05f49bc  bt 30, 0x5f4a18
  05f49c0  clrldi 3, 3, 32
  05f49c4  lwz 0, -32252(2)
  05f49c8  lwz 9, -32248(2)
  05f49cc  li 4, 0
  05f49d0  lwz 7, -32212(2)
  05f49d4  li 5, 0
  05f49d8  lwz 10, -32264(2)
  05f49dc  li 6, 0
  05f49e0  lwz 8, -32256(2)
  05f49e4  lwz 11, 80(3)
  05f49e8  addi 10, 10, 32
  05f49ec  std 9, 120(1)
  05f49f0  std 7, 128(1)
  05f49f4  std 0, 112(1)
  05f49f8  li 7, 1
  05f49fc  lwz 0, 0(11)
  05f4a00  li 9, 270
  05f4a04  std 2, 40(1)
  05f4a08  mtctr 0
  05f4a0c  lwz 2, 4(11)
  05f4a10  bctrl
  05f4a14  ld 2, 40(1)
  05f4a18  lwz 9, 52(29)
  05f4a1c  li 30, 0
  05f4a20  cmpwi 7, 9, 0
  05f4a24  bt 30, 0x5f4a48
  05f4a28  clrldi 9, 9, 32
  05f4a2c  lwz 0, 0(9)
  05f4a30  std 2, 40(1)
  05f4a34  mtctr 0
  05f4a38  lwz 2, 4(9)
  05f4a3c  bctrl
  05f4a40  ld 2, 40(1)
  05f4a44  mr 30, 3
  05f4a48  lwz 0, 48(28)
  05f4a4c  cmpwi 7, 0, 0
  05f4a50  bt 30, 0x5f4a70
  05f4a54  lwz 9, 28(29)
  05f4a58  li 11, 0
  05f4a5c  lwz 0, 32(9)
  05f4a60  rlwinm 0, 0, 24, 1, 31
  05f4a64  rotlwi 0, 0, 8
  05f4a68  stw 0, 32(9)
  05f4a6c  stw 11, 48(28)
  05f4a70  lwz 3, 8(28)
  05f4a74  clrldi 4, 27, 32
  05f4a78  clrldi 5, 26, 32
  05f4a7c  extsw 3, 3
  05f4a80  bl 0x5cfc44
  05f4a84  nop
  05f4a88  cmplw 7, 26, 3
  05f4a8c  mr 31, 3
  05f4a90  bf 29, 0x5f4a9c
  05f4a94  li 0, 1
  05f4a98  stw 0, 64(29)
  05f4a9c  lwz 9, 48(29)
  05f4aa0  cmpwi 7, 9, 0
  05f4aa4  bt 30, 0x5f4ad0
  05f4aa8  clrldi 9, 9, 32
  05f4aac  mr 3, 22
  05f4ab0  clrldi 4, 31, 32
  05f4ab4  clrldi 5, 30, 32
  05f4ab8  lwz 0, 0(9)
  05f4abc  std 2, 40(1)
  05f4ac0  mtctr 0
  05f4ac4  lwz 2, 4(9)
  05f4ac8  bctrl
  05f4acc  ld 2, 40(1)
  05f4ad0  lwz 0, 36(28)
  05f4ad4  add 25, 25, 31
  05f4ad8  lwz 9, 12(28)
  05f4adc  li 3, 0
  05f4ae0  add 0, 31, 0
  05f4ae4  add 9, 31, 9
  05f4ae8  stw 0, 36(28)
  05f4aec  stw 9, 12(28)
  05f4af0  lwz 9, 52(29)
  05f4af4  lwz 0, 72(29)
  05f4af8  cmpwi 7, 9, 0
  05f4afc  add 0, 31, 0
  05f4b00  stw 0, 72(29)
  05f4b04  bt 30, 0x5f4b24
  05f4b08  clrldi 9, 9, 32
  05f4b0c  lwz 0, 0(9)
  05f4b10  std 2, 40(1)
  05f4b14  mtctr 0
  05f4b18  lwz 2, 4(9)
  05f4b1c  bctrl
  05f4b20  ld 2, 40(1)
  05f4b24  lwz 9, 80(29)
  05f4b28  sub 0, 3, 30
  05f4b2c  sub 11, 3, 17
  05f4b30  add 9, 9, 0
  05f4b34  stw 9, 80(29)
  05f4b38  lwz 0, 84(29)
  05f4b3c  add 0, 0, 11
  05f4b40  stw 0, 84(29)
  05f4b44  lwz 9, 0(23)
  05f4b48  cmpwi 7, 9, 0
  05f4b4c  bt 30, 0x5f4b84
  05f4b50  clrldi 9, 9, 32
  05f4b54  lwz 6, -32256(2)
  05f4b58  li 4, 0
  05f4b5c  mr 3, 9
  05f4b60  li 5, 0
  05f4b64  li 7, 297
  05f4b68  lwz 11, 84(9)
  05f4b6c  lwz 0, 0(11)
  05f4b70  std 2, 40(1)
  05f4b74  mtctr 0
  05f4b78  lwz 2, 4(11)
  05f4b7c  bctrl
  05f4b80  ld 2, 40(1)
  05f4b84  lwz 11, 12(28)
  05f4b88  lwz 0, 28(28)
  05f4b8c  lwz 9, 96(29)
  05f4b90  sub 0, 0, 11
  05f4b94  cmplw 7, 0, 9
  05f4b98  bt 28, 0x5f4ba0
  05f4b9c  lwz 0, 96(29)
  05f4ba0  stw 0, 104(29)
  05f4ba4  lwz 9, 108(29)
  05f4ba8  lwz 0, 104(29)
  05f4bac  addis 9, 9, 2
  05f4bb0  cmplw 7, 9, 0
  05f4bb4  bf 29, 0x5f4bc0
  05f4bb8  lwz 0, 108(29)
  05f4bbc  stw 0, 104(29)
  05f4bc0  bt 18, 0x5f4bf0
  05f4bc4  lwz 9, 40(29)
  05f4bc8  cmpwi 7, 9, 0
  05f4bcc  bt 30, 0x5f4bf0
  05f4bd0  clrldi 9, 9, 32
  05f4bd4  mr 3, 22
  05f4bd8  lwz 0, 0(9)
  05f4bdc  std 2, 40(1)
  05f4be0  mtctr 0
  05f4be4  lwz 2, 4(9)
  05f4be8  bctrl
  05f4bec  ld 2, 40(1)
  05f4bf0  lwz 3, 56(29)
  05f4bf4  clrldi 31, 25, 32
  05f4bf8  cmpwi 7, 3, 0
  05f4bfc  bt 30, 0x5f4c24
  05f4c00  clrldi 9, 3, 32
  05f4c04  mr 4, 31
  05f4c08  clrldi 3, 18, 32
  05f4c0c  lwz 0, 0(9)
  05f4c10  std 2, 40(1)
  05f4c14  mtctr 0
  05f4c18  lwz 2, 4(9)
  05f4c1c  bctrl
  05f4c20  ld 2, 40(1)
  05f4c24  lwz 9, 0(23)
  05f4c28  cmpwi 7, 9, 0
  05f4c2c  bt 30, 0x5f4c64
  05f4c30  clrldi 9, 9, 32
  05f4c34  lwz 6, -32256(2)
  05f4c38  li 4, 0
  05f4c3c  mr 3, 9
  05f4c40  li 5, 0
  05f4c44  li 7, 320
  05f4c48  lwz 11, 84(9)
  05f4c4c  lwz 0, 0(11)
  05f4c50  std 2, 40(1)
  05f4c54  mtctr 0
  05f4c58  lwz 2, 4(11)
  05f4c5c  bctrl
  05f4c60  ld 2, 40(1)
  05f4c64  ld 0, 288(1)
  05f4c68  mr 3, 31
  05f4c6c  lwz 12, 280(1)
  05f4c70  ld 16, 144(1)
  05f4c74  mtlr 0
  05f4c78  ld 17, 152(1)
  05f4c7c  mtocrf 8, 12
  05f4c80  ld 18, 160(1)
  05f4c84  ld 19, 168(1)
  05f4c88  ld 20, 176(1)
  05f4c8c  ld 21, 184(1)
  05f4c90  ld 22, 192(1)
  05f4c94  ld 23, 200(1)
  05f4c98  ld 24, 208(1)
  05f4c9c  ld 25, 216(1)
  05f4ca0  ld 26, 224(1)
  05f4ca4  ld 27, 232(1)
  05f4ca8  ld 28, 240(1)
  05f4cac  ld 29, 248(1)
  05f4cb0  ld 30, 256(1)
  05f4cb4  ld 31, 264(1)
  05f4cb8  addi 1, 1, 272
  05f4cbc  blr
  05f4cc0  li 24, 0
  05f4cc4  clrldi 22, 25, 32
  05f4cc8  addi 16, 25, 108
  05f4ccc  lwz 20, -32208(2)
  05f4cd0  mr 27, 18
  05f4cd4  li 25, 0
  05f4cd8  addi 19, 28, 40
  05f4cdc  addi 21, 28, 32
  05f4ce0  b 0x5f4e1c
  05f4ce4  clrldi 9, 9, 32
  05f4ce8  clrldi 3, 21, 32
  05f4cec  extsw 4, 31
  05f4cf0  lwz 0, 0(9)
  05f4cf4  std 2, 40(1)
  05f4cf8  mtctr 0
  05f4cfc  lwz 2, 4(9)
  05f4d00  bctrl
  05f4d04  ld 2, 40(1)
  05f4d08  lwz 9, 60(29)
  05f4d0c  cmpwi 7, 9, 0
  05f4d10  bf- 30, 0x5f5030
  05f4d14  lwz 0, 108(29)
  05f4d18  sub 0, 0, 31
  05f4d1c  stw 0, 108(29)
  05f4d20  lwz 0, 40(28)
  05f4d24  add 0, 31, 0
  05f4d28  stw 0, 40(28)
  05f4d2c  cmpwi 7, 26, 0
  05f4d30  bt 30, 0x5f4f90
  05f4d34  cmpwi 4, 24, 0
  05f4d38  bf 18, 0x5f49b4
  05f4d3c  lwz 9, 0(23)
  05f4d40  cmpwi 7, 9, 0
  05f4d44  bt 30, 0x5f4da0
  05f4d48  clrldi 9, 9, 32
  05f4d4c  lwz 0, -32252(2)
  05f4d50  lwz 10, -32248(2)
  05f4d54  li 4, 0
  05f4d58  lwz 8, -32216(2)
  05f4d5c  mr 3, 9
  05f4d60  li 5, 0
  05f4d64  li 6, 0
  05f4d68  lwz 11, 80(9)
  05f4d6c  li 7, 1
  05f4d70  std 10, 120(1)
  05f4d74  std 8, 128(1)
  05f4d78  std 0, 112(1)
  05f4d7c  lwz 8, -32256(2)
  05f4d80  li 9, 255
  05f4d84  lwz 0, 0(11)
  05f4d88  clrldi 10, 20, 32
  05f4d8c  std 2, 40(1)
  05f4d90  mtctr 0
  05f4d94  lwz 2, 4(11)
  05f4d98  bctrl
  05f4d9c  ld 2, 40(1)
  05f4da0  lwz 9, 32(29)
  05f4da4  cmpwi 7, 9, 0
  05f4da8  bt 30, 0x5f4dcc
  05f4dac  clrldi 9, 9, 32
  05f4db0  mr 3, 22
  05f4db4  lwz 0, 0(9)
  05f4db8  std 2, 40(1)
  05f4dbc  mtctr 0
  05f4dc0  lwz 2, 4(9)
  05f4dc4  bctrl
  05f4dc8  ld 2, 40(1)
  05f4dcc  lwz 9, 0(23)
  05f4dd0  cmpwi 7, 9, 0
  05f4dd4  bt 30, 0x5f4e0c
  05f4dd8  clrldi 9, 9, 32
  05f4ddc  lwz 6, -32256(2)
  05f4de0  li 4, 0
  05f4de4  mr 3, 9
  05f4de8  li 5, 0
  05f4dec  li 7, 261
  05f4df0  lwz 11, 84(9)
  05f4df4  lwz 0, 0(11)
  05f4df8  std 2, 40(1)
  05f4dfc  mtctr 0
  05f4e00  lwz 2, 4(11)
  05f4e04  bctrl
  05f4e08  ld 2, 40(1)
  05f4e0c  lwz 0, 108(29)
  05f4e10  li 24, 1
  05f4e14  cmpwi 7, 0, 0
  05f4e18  bt 30, 0x5f49b0
  05f4e1c  lwz 0, 108(29)
  05f4e20  cmpwi 7, 0, 0
  05f4e24  bt 30, 0x5f4d2c
  05f4e28  cmplw 7, 26, 0
  05f4e2c  mr 31, 26
  05f4e30  bf 29, 0x5f4e38
  05f4e34  mr 31, 0
  05f4e38  lwz 0, 12(28)
  05f4e3c  sub 26, 26, 31
  05f4e40  add 25, 25, 31
  05f4e44  add 0, 0, 31
  05f4e48  stw 0, 12(28)
  05f4e4c  lwz 9, 96(29)
  05f4e50  lwz 0, 32(28)
  05f4e54  sub 30, 9, 0
  05f4e58  cmplw 7, 30, 31
  05f4e5c  bt 29, 0x5f4ebc
  05f4e60  lwz 0, 32(28)
  05f4e64  clrldi 3, 27, 32
  05f4e68  lwz 4, 16(28)
  05f4e6c  clrldi 5, 30, 32
  05f4e70  add 27, 27, 30
  05f4e74  add 4, 4, 0
  05f4e78  sub 31, 31, 30
  05f4e7c  clrldi 4, 4, 32
  05f4e80  bl 0x5c5ad0
  05f4e84  nop
  05f4e88  li 0, 0
  05f4e8c  stw 0, 32(28)
  05f4e90  lwz 9, 60(29)
  05f4e94  cmpwi 7, 9, 0
  05f4e98  bf- 30, 0x5f4fd4
  05f4e9c  lwz 0, 108(29)
  05f4ea0  sub 0, 0, 30
  05f4ea4  stw 0, 108(29)
  05f4ea8  lwz 0, 40(28)
  05f4eac  add 0, 30, 0
  05f4eb0  stw 0, 40(28)
  05f4eb4  cmpwi 7, 31, 0
  05f4eb8  bt 30, 0x5f4d2c
  05f4ebc  lwz 4, 16(28)
  05f4ec0  clrldi 3, 27, 32
  05f4ec4  lwz 0, 32(28)
  05f4ec8  clrldi 5, 31, 32
  05f4ecc  add 27, 27, 31
  05f4ed0  add 4, 4, 0
  05f4ed4  clrldi 4, 4, 32
  05f4ed8  bl 0x5c5ad0
  05f4edc  nop
  05f4ee0  lwz 9, 60(29)
  05f4ee4  cmpwi 7, 9, 0
  05f4ee8  bf 30, 0x5f4ce4
  05f4eec  lwz 0, 32(28)
  05f4ef0  add 0, 31, 0
  05f4ef4  stw 0, 32(28)
  05f4ef8  b 0x5f4d08
  05f4efc  clrldi 9, 3, 32
  05f4f00  lwz 24, -32264(2)
  05f4f04  lwz 5, -32228(2)
  05f4f08  mr 3, 9
  05f4f0c  addi 4, 24, 16
  05f4f10  lwz 11, 52(9)
  05f4f14  lwz 0, 0(11)
  05f4f18  std 2, 40(1)
  05f4f1c  mtctr 0
  05f4f20  lwz 2, 4(11)
  05f4f24  bctrl
  05f4f28  ld 2, 40(1)
  05f4f2c  lwz 3, 0(23)
  05f4f30  cmpwi 7, 3, 0
  05f4f34  stw 30, 0(31)
  05f4f38  bf 30, 0x5f4810
  05f4f3c  b 0x5f4864
  05f4f40  sub 11, 27, 9
  05f4f44  lwz 9, 40(28)
  05f4f48  stw 27, 12(28)
  05f4f4c  add 9, 11, 9
  05f4f50  stw 9, 40(28)
  05f4f54  lwz 0, 108(29)
  05f4f58  sub 0, 0, 11
  05f4f5c  stw 0, 108(29)
  05f4f60  lwz 9, 32(28)
  05f4f64  add 11, 11, 9
  05f4f68  stw 11, 32(28)
  05f4f6c  lwz 9, 32(28)
  05f4f70  lwz 0, 96(29)
  05f4f74  cmplw 7, 9, 0
  05f4f78  bt 28, 0x5f4968
  05f4f7c  lwz 0, 32(28)
  05f4f80  lwz 9, 96(29)
  05f4f84  sub 0, 0, 9
  05f4f88  stw 0, 32(28)
  05f4f8c  b 0x5f4968
  05f4f90  lwz 9, 52(29)
  05f4f94  li 3, 0
  05f4f98  lwz 31, 84(29)
  05f4f9c  cmpwi 7, 9, 0
  05f4fa0  bt 30, 0x5f4fc0
  05f4fa4  clrldi 9, 9, 32
  05f4fa8  lwz 0, 0(9)
  05f4fac  std 2, 40(1)
  05f4fb0  mtctr 0
  05f4fb4  lwz 2, 4(9)
  05f4fb8  bctrl
  05f4fbc  ld 2, 40(1)
  05f4fc0  sub 0, 3, 17
  05f4fc4  cmpwi 4, 24, 0
  05f4fc8  add 0, 31, 0
  05f4fcc  stw 0, 84(29)
  05f4fd0  b 0x5f4b84
  05f4fd4  clrldi 9, 9, 32
  05f4fd8  neg 4, 30
  05f4fdc  clrldi 3, 16, 32
  05f4fe0  extsw 4, 4
  05f4fe4  lwz 0, 0(9)
  05f4fe8  std 2, 40(1)
  05f4fec  lwz 2, 4(9)
  05f4ff0  mtctr 0
  05f4ff4  bctrl
  05f4ff8  ld 2, 40(1)
  05f4ffc  lwz 9, 60(29)
  05f5000  cmpwi 7, 9, 0
  05f5004  bt 30, 0x5f4ea8
  05f5008  clrldi 9, 9, 32
  05f500c  extsw 4, 30
  05f5010  clrldi 3, 19, 32
  05f5014  lwz 0, 0(9)
  05f5018  std 2, 40(1)
  05f501c  mtctr 0
  05f5020  lwz 2, 4(9)
  05f5024  bctrl
  05f5028  ld 2, 40(1)
  05f502c  b 0x5f4eb4
  05f5030  clrldi 9, 9, 32
  05f5034  neg 4, 31
  05f5038  clrldi 3, 16, 32
  05f503c  extsw 4, 4
  05f5040  lwz 0, 0(9)
  05f5044  std 2, 40(1)
  05f5048  lwz 2, 4(9)
  05f504c  mtctr 0
  05f5050  bctrl
  05f5054  ld 2, 40(1)
  05f5058  lwz 9, 60(29)
  05f505c  cmpwi 7, 9, 0
  05f5060  bt 30, 0x5f4d20
  05f5064  clrldi 9, 9, 32
  05f5068  extsw 4, 31
  05f506c  clrldi 3, 19, 32
  05f5070  lwz 0, 0(9)
  05f5074  std 2, 40(1)
  05f5078  mtctr 0
  05f507c  lwz 2, 4(9)
  05f5080  bctrl
  05f5084  ld 2, 40(1)
  05f5088  b 0x5f4d2c

FUN_005f5090:   # 0x5f5090, 0xcc bytes
  05f5090  stdu 1, -128(1)
  05f5094  mflr 0
  05f5098  std 31, 120(1)
  05f509c  lwz 31, -32204(2)
  05f50a0  std 0, 144(1)
  05f50a4  ld 0, 0(31)
  05f50a8  cmpdi 7, 0, 0
  05f50ac  bt 30, 0x5f514c
  05f50b0  bl 0x650684
  05f50b4  ld 2, 40(1)
  05f50b8  lis 10, 8388
  05f50bc  ld 11, 8(31)
  05f50c0  li 0, -1
  05f50c4  ld 8, 0(31)
  05f50c8  ori 10, 10, 39845
  05f50cc  rldicr 0, 0, 0, 1
  05f50d0  sub 9, 3, 11
  05f50d4  sldi 10, 10, 32
  05f50d8  cmpld 7, 9, 0
  05f50dc  oris 10, 10, 58195
  05f50e0  ori 10, 10, 63439
  05f50e4  bf 29, 0x5f5118
  05f50e8  sub 3, 11, 8
  05f50ec  std 11, 8(31)
  05f50f0  sradi 0, 3, 63
  05f50f4  ld 31, 120(1)
  05f50f8  mulhd 3, 3, 10
  05f50fc  sradi 3, 3, 7
  05f5100  sub 3, 3, 0
  05f5104  ld 0, 144(1)
  05f5108  addi 1, 1, 128
  05f510c  clrldi 3, 3, 32
  05f5110  mtlr 0
  05f5114  blr
  05f5118  mr 11, 3
  05f511c  sub 3, 11, 8
  05f5120  std 11, 8(31)
  05f5124  sradi 0, 3, 63
  05f5128  ld 31, 120(1)
  05f512c  mulhd 3, 3, 10
  05f5130  sradi 3, 3, 7
  05f5134  sub 3, 3, 0
  05f5138  ld 0, 144(1)
  05f513c  addi 1, 1, 128
  05f5140  clrldi 3, 3, 32
  05f5144  mtlr 0
  05f5148  blr
  05f514c  bl 0x650684
  05f5150  ld 2, 40(1)
  05f5154  std 3, 0(31)
  05f5158  b 0x5f50b0

FUN_005f515c:   # 0x5f515c, 0x10 bytes
  05f515c  lwz 9, -32200(2)
  05f5160  stw 4, 4(9)
  05f5164  stw 3, 0(9)
  05f5168  blr

FUN_005f516c:   # 0x5f516c, 0x98 bytes
  05f516c  stdu 1, -112(1)
  05f5170  mflr 0
  05f5174  cmpwi 7, 3, 0
  05f5178  std 0, 128(1)
  05f517c  addi 0, 3, -2
  05f5180  mr 11, 3
  05f5184  clrldi 10, 0, 32
  05f5188  bt 30, 0x5f51bc
  05f518c  addi 9, 3, -1
  05f5190  addi 0, 3, -12
  05f5194  clrldi 7, 9, 32
  05f5198  lbz 9, 0(10)
  05f519c  clrldi 8, 0, 32
  05f51a0  cmpwi 7, 9, 3
  05f51a4  bt 30, 0x5f51cc
  05f51a8  lbz 3, 0(7)
  05f51ac  sub 3, 11, 3
  05f51b0  clrldi 3, 3, 32
  05f51b4  bl 0x5d580c
  05f51b8  nop
  05f51bc  ld 0, 128(1)
  05f51c0  addi 1, 1, 112
  05f51c4  mtlr 0
  05f51c8  blr
  05f51cc  lwz 9, 0(8)
  05f51d0  lbz 3, 0(7)
  05f51d4  sub 3, 11, 3
  05f51d8  lwz 0, 0(9)
  05f51dc  clrldi 3, 3, 32
  05f51e0  std 2, 40(1)
  05f51e4  mtctr 0
  05f51e8  lwz 2, 4(9)
  05f51ec  bctrl
  05f51f0  ld 2, 40(1)
  05f51f4  ld 0, 128(1)
  05f51f8  addi 1, 1, 112
  05f51fc  mtlr 0
  05f5200  blr

FUN_005f5204:   # 0x5f5204, 0x138 bytes
  05f5204  stdu 1, -128(1)
  05f5208  mflr 0
  05f520c  li 9, -3
  05f5210  std 0, 144(1)
  05f5214  addi 0, 3, -1
  05f5218  std 30, 112(1)
  05f521c  cmplw 7, 0, 9
  05f5220  std 31, 120(1)
  05f5224  bt 29, 0x5f5310
  05f5228  lwz 30, -32200(2)
  05f522c  lwz 9, 0(30)
  05f5230  cmpwi 7, 9, 0
  05f5234  bt 30, 0x5f5330
  05f5238  clrldi 9, 9, 32
  05f523c  addi 0, 3, 64
  05f5240  clrldi 31, 0, 32
  05f5244  lwz 0, 0(9)
  05f5248  mr 3, 31
  05f524c  std 2, 40(1)
  05f5250  mtctr 0
  05f5254  lwz 2, 4(9)
  05f5258  bctrl
  05f525c  ld 2, 40(1)
  05f5260  cmpwi 7, 3, 0
  05f5264  bf 30, 0x5f52c8
  05f5268  mr 3, 31
  05f526c  bl 0x5d5838
  05f5270  nop
  05f5274  cmpwi 7, 3, 0
  05f5278  bt 30, 0x5f5310
  05f527c  clrlwi 10, 3, 27
  05f5280  subfic 10, 10, 64
  05f5284  clrlwi 0, 10, 24
  05f5288  add 3, 3, 0
  05f528c  li 0, 0
  05f5290  addi 9, 3, -1
  05f5294  addi 11, 3, -2
  05f5298  clrldi 9, 9, 32
  05f529c  clrldi 11, 11, 32
  05f52a0  stb 10, 0(9)
  05f52a4  stb 0, 0(11)
  05f52a8  mr 0, 3
  05f52ac  ld 30, 112(1)
  05f52b0  ld 31, 120(1)
  05f52b4  clrldi 3, 0, 32
  05f52b8  ld 0, 144(1)
  05f52bc  addi 1, 1, 128
  05f52c0  mtlr 0
  05f52c4  blr
  05f52c8  cmpwi 7, 3, -1
  05f52cc  bt 30, 0x5f5310
  05f52d0  clrlwi 8, 3, 27
  05f52d4  subfic 8, 8, 64
  05f52d8  clrlwi 0, 8, 24
  05f52dc  add 3, 0, 3
  05f52e0  li 0, 3
  05f52e4  addi 9, 3, -1
  05f52e8  addi 10, 3, -2
  05f52ec  clrldi 9, 9, 32
  05f52f0  clrldi 10, 10, 32
  05f52f4  addi 11, 3, -12
  05f52f8  clrldi 11, 11, 32
  05f52fc  stb 8, 0(9)
  05f5300  stb 0, 0(10)
  05f5304  lwz 9, 4(30)
  05f5308  stw 9, 0(11)
  05f530c  b 0x5f52a8
  05f5310  li 0, 0
  05f5314  ld 30, 112(1)
  05f5318  ld 31, 120(1)
  05f531c  clrldi 3, 0, 32
  05f5320  ld 0, 144(1)
  05f5324  addi 1, 1, 128
  05f5328  mtlr 0
  05f532c  blr
  05f5330  addi 0, 3, 64
  05f5334  clrldi 31, 0, 32
  05f5338  b 0x5f5268

FUN_005f533c:   # 0x5f533c, 0x48 bytes
  05f533c  cmplwi 7, 3, 44099
  05f5340  cmplwi 6, 3, 22049
  05f5344  slwi 4, 4, 1
  05f5348  li 3, 2048
  05f534c  bt 29, 0x5f5358
  05f5350  li 3, 1024
  05f5354  bf 25, 0x5f536c
  05f5358  mullw 3, 3, 4
  05f535c  srwi 3, 3, 4
  05f5360  addi 3, 3, 208
  05f5364  rlwinm 3, 3, 0, 0, 27
  05f5368  blr
  05f536c  li 3, 512
  05f5370  mullw 3, 3, 4
  05f5374  srwi 3, 3, 4
  05f5378  addi 3, 3, 208
  05f537c  rlwinm 3, 3, 0, 0, 27
  05f5380  blr

FUN_005f5384:   # 0x5f5384, 0x8 bytes
  05f5384  lwz 3, 48(3)
  05f5388  blr

FUN_005f538c:   # 0x5f538c, 0x8 bytes
  05f538c  lwz 3, 16(3)
  05f5390  blr

FUN_005f5398:   # 0x5f5398, 0x934 bytes
  05f5398  stdu 1, -528(1)
  05f539c  mflr 0
  05f53a0  stfd 29, 504(1)
  05f53a4  std 14, 360(1)
  05f53a8  std 15, 368(1)
  05f53ac  std 17, 384(1)
  05f53b0  std 19, 400(1)
  05f53b4  std 22, 424(1)
  05f53b8  std 24, 440(1)
  05f53bc  stfd 30, 512(1)
  05f53c0  mr 19, 3
  05f53c4  stfd 31, 520(1)
  05f53c8  mr 24, 8
  05f53cc  std 16, 376(1)
  05f53d0  std 18, 392(1)
  05f53d4  std 20, 408(1)
  05f53d8  std 21, 416(1)
  05f53dc  std 23, 432(1)
  05f53e0  std 25, 448(1)
  05f53e4  std 26, 456(1)
  05f53e8  std 27, 464(1)
  05f53ec  std 28, 472(1)
  05f53f0  std 29, 480(1)
  05f53f4  std 30, 488(1)
  05f53f8  std 31, 496(1)
  05f53fc  std 0, 544(1)
  05f5400  std 5, 288(1)
  05f5404  std 7, 304(1)
  05f5408  std 10, 320(1)
  05f540c  stw 4, 280(1)
  05f5410  lwz 0, 32(3)
  05f5414  stw 9, 312(1)
  05f5418  stw 6, 296(1)
  05f541c  stw 3, 276(1)
  05f5420  stw 5, 284(1)
  05f5424  stw 7, 300(1)
  05f5428  stw 10, 316(1)
  05f542c  lwz 9, 40(3)
  05f5430  cmpwi 7, 0, 0
  05f5434  lwz 22, 8(3)
  05f5438  lfs 29, 12(3)
  05f543c  lwz 17, 28(3)
  05f5440  lwz 0, 44(3)
  05f5444  stw 9, 264(1)
  05f5448  lwz 11, 4(3)
  05f544c  li 9, 0
  05f5450  stw 11, 268(1)
  05f5454  lwz 14, 36(3)
  05f5458  lwz 15, 20(3)
  05f545c  stw 9, 272(1)
  05f5460  bf 30, 0x5f546c
  05f5464  lwz 11, 24(3)
  05f5468  stw 11, 272(1)
  05f546c  clrlwi 9, 0, 31
  05f5470  stw 9, 328(1)
  05f5474  cmpwi 7, 9, 0
  05f5478  lwz 11, 0(19)
  05f547c  stw 11, 260(1)
  05f5480  bf 30, 0x5f5b50
  05f5484  lwz 29, 296(1)
  05f5488  li 27, 0
  05f548c  li 31, 0
  05f5490  cmpwi 7, 17, 0
  05f5494  bt 30, 0x5f5cc4
  05f5498  cmplwi 7, 31, 28
  05f549c  lwz 20, 312(1)
  05f54a0  slwi 16, 22, 2
  05f54a4  li 18, 0
  05f54a8  mr 30, 29
  05f54ac  bt 29, 0x5f5654
  05f54b0  cmplw 7, 29, 24
  05f54b4  clrldi 21, 20, 32
  05f54b8  bf 28, 0x5f561c
  05f54bc  clrldi 11, 29, 32
  05f54c0  subfic 10, 31, 29
  05f54c4  addi 30, 29, 4
  05f54c8  lwz 9, 0(11)
  05f54cc  slw 0, 9, 31
  05f54d0  addi 31, 31, 3
  05f54d4  or 0, 27, 0
  05f54d8  srw 27, 9, 10
  05f54dc  clrlwi 9, 0, 3
  05f54e0  rlwinm 11, 9, 2, 25, 29
  05f54e4  lwz 23, -32192(2)
  05f54e8  rlwinm 0, 9, 0, 3, 3
  05f54ec  rldicl 9, 9, 59, 41
  05f54f0  cmpwi 7, 0, 0
  05f54f4  std 9, 336(1)
  05f54f8  lfd 0, 336(1)
  05f54fc  fcfid 0, 0
  05f5500  frsp 13, 0
  05f5504  lfsx 0, 23, 11
  05f5508  fmuls 13, 13, 0
  05f550c  bt 30, 0x5f5514
  05f5510  fneg 13, 13
  05f5514  clrldi 21, 20, 32
  05f5518  cmplwi 7, 31, 28
  05f551c  stfs 13, 0(21)
  05f5520  bt 29, 0x5f59a4
  05f5524  cmplw 7, 30, 24
  05f5528  bf 28, 0x5f561c
  05f552c  clrldi 11, 30, 32
  05f5530  subfic 10, 31, 29
  05f5534  addi 30, 30, 4
  05f5538  lwz 9, 0(11)
  05f553c  slw 0, 9, 31
  05f5540  addi 31, 31, 3
  05f5544  or 0, 27, 0
  05f5548  srw 27, 9, 10
  05f554c  clrlwi 9, 0, 3
  05f5550  rlwinm 11, 9, 2, 25, 29
  05f5554  rlwinm 0, 9, 0, 3, 3
  05f5558  rldicl 9, 9, 59, 41
  05f555c  cmpwi 7, 0, 0
  05f5560  std 9, 336(1)
  05f5564  lfd 12, 336(1)
  05f5568  fcfid 12, 12
  05f556c  lfsx 0, 23, 11
  05f5570  frsp 13, 12
  05f5574  fmuls 13, 13, 0
  05f5578  bt 30, 0x5f5580
  05f557c  fneg 13, 13
  05f5580  cmpwi 7, 14, 0
  05f5584  stfs 13, 4(21)
  05f5588  bt 30, 0x5f5664
  05f558c  clrldi 0, 14, 32
  05f5590  li 10, 0
  05f5594  addi 8, 1, 112
  05f5598  mtctr 0
  05f559c  b 0x5f55f8
  05f55a0  bf 24, 0x5f561c
  05f55a4  lwz 9, 0(9)
  05f55a8  addi 30, 30, 4
  05f55ac  slw 0, 9, 31
  05f55b0  addi 31, 31, 24
  05f55b4  or 0, 0, 27
  05f55b8  srw 27, 9, 11
  05f55bc  clrlwi 0, 0, 24
  05f55c0  mr 9, 0
  05f55c4  slwi 0, 10, 2
  05f55c8  cmplwi 7, 9, 95
  05f55cc  add 0, 0, 8
  05f55d0  addi 10, 10, 1
  05f55d4  clrldi 11, 0, 32
  05f55d8  bf 29, 0x5f55e0
  05f55dc  li 9, 95
  05f55e0  slwi 9, 9, 2
  05f55e4  extsw 9, 9
  05f55e8  add 9, 9, 23
  05f55ec  lfs 0, 96(9)
  05f55f0  stfs 0, 0(11)
  05f55f4  bdz 0x5f5664
  05f55f8  cmplwi 7, 31, 7
  05f55fc  clrldi 9, 30, 32
  05f5600  subfic 11, 31, 8
  05f5604  cmplw 6, 30, 24
  05f5608  clrlwi 0, 27, 24
  05f560c  bf 29, 0x5f55a0
  05f5610  srwi 27, 27, 8
  05f5614  addi 31, 31, -8
  05f5618  b 0x5f55c0
  05f561c  mr 3, 21
  05f5620  li 4, 0
  05f5624  rlwinm 5, 16, 0, 0, 29
  05f5628  mr 29, 30
  05f562c  bl 0x5d0140
  05f5630  nop
  05f5634  addi 18, 18, 1
  05f5638  mr 11, 16
  05f563c  cmpw 7, 17, 18
  05f5640  bt 30, 0x5f59c4
  05f5644  cmplwi 7, 31, 28
  05f5648  add 20, 20, 16
  05f564c  mr 30, 29
  05f5650  bf 29, 0x5f54b0
  05f5654  clrlwi 9, 27, 3
  05f5658  addi 31, 31, -29
  05f565c  srwi 27, 27, 29
  05f5660  b 0x5f54e0
  05f5664  lwz 26, 276(1)
  05f5668  li 25, 0
  05f566c  lfs 31, -32180(2)
  05f5670  lwzu 0, 52(26)
  05f5674  fmr 30, 31
  05f5678  slwi 0, 0, 1
  05f567c  cmplwi 7, 0, 1
  05f5680  bt 29, 0x5f56c0
  05f5684  addi 8, 1, 112
  05f5688  li 10, 0
  05f568c  nop
  05f5690  addi 25, 25, 1
  05f5694  add 11, 10, 8
  05f5698  slwi 10, 25, 2
  05f569c  clrldi 11, 11, 32
  05f56a0  add 9, 10, 26
  05f56a4  clrldi 9, 9, 32
  05f56a8  lfs 31, 0(11)
  05f56ac  fneg 30, 31
  05f56b0  lwz 0, 0(9)
  05f56b4  slwi 0, 0, 1
  05f56b8  cmplwi 7, 0, 1
  05f56bc  bf 29, 0x5f5690
  05f56c0  cmplwi 7, 22, 2
  05f56c4  bf 29, 0x5f5894
  05f56c8  addi 9, 1, 112
  05f56cc  addi 28, 20, 8
  05f56d0  li 6, 2
  05f56d4  std 9, 344(1)
  05f56d8  cmpwi 7, 31, 0
  05f56dc  bt 30, 0x5f58f0
  05f56e0  addi 31, 31, -1
  05f56e4  mr 9, 27
  05f56e8  clrlwi 0, 9, 31
  05f56ec  srwi 27, 9, 1
  05f56f0  cmpwi 7, 0, 0
  05f56f4  addi 8, 6, 8
  05f56f8  bt 30, 0x5f5744
  05f56fc  cmplwi 7, 31, 3
  05f5700  bt 29, 0x5f59b4
  05f5704  cmplw 7, 30, 24
  05f5708  bf 28, 0x5f561c
  05f570c  clrldi 11, 30, 32
  05f5710  subfic 10, 31, 4
  05f5714  addi 30, 30, 4
  05f5718  lwz 9, 0(11)
  05f571c  slw 0, 9, 31
  05f5720  addi 31, 31, 28
  05f5724  or 0, 27, 0
  05f5728  srw 27, 9, 10
  05f572c  clrlwi 0, 0, 28
  05f5730  extsw 9, 0
  05f5734  add 9, 9, 23
  05f5738  lbz 0, 480(9)
  05f573c  slwi 0, 0, 3
  05f5740  add 8, 0, 6
  05f5744  cmplwi 7, 31, 3
  05f5748  bt 29, 0x5f590c
  05f574c  cmplw 7, 30, 24
  05f5750  bf 28, 0x5f561c
  05f5754  clrldi 11, 30, 32
  05f5758  subfic 10, 31, 4
  05f575c  addi 30, 30, 4
  05f5760  lwz 9, 0(11)
  05f5764  slw 0, 9, 31
  05f5768  addi 31, 31, 28
  05f576c  or 0, 27, 0
  05f5770  srw 27, 9, 10
  05f5774  clrlwi 7, 0, 28
  05f5778  cmplw 7, 8, 22
  05f577c  mr 29, 8
  05f5780  bf 29, 0x5f5788
  05f5784  mr 29, 22
  05f5788  cmpwi 7, 7, 0
  05f578c  bt 30, 0x5f591c
  05f5790  sub 9, 29, 6
  05f5794  cmplw 7, 29, 6
  05f5798  subfic 0, 7, 32
  05f579c  clrldi 9, 9, 32
  05f57a0  li 11, -1
  05f57a4  mtctr 9
  05f57a8  li 4, 0
  05f57ac  srw 5, 11, 0
  05f57b0  bt 29, 0x5f5840
  05f57b4  b 0x5f588c
  05f57b8  cmplw 7, 30, 24
  05f57bc  bf 28, 0x5f561c
  05f57c0  clrldi 11, 30, 32
  05f57c4  sub 8, 7, 31
  05f57c8  sub 10, 31, 7
  05f57cc  addi 30, 30, 4
  05f57d0  lwz 9, 0(11)
  05f57d4  slw 0, 9, 31
  05f57d8  addi 31, 10, 32
  05f57dc  or 0, 0, 27
  05f57e0  srw 27, 9, 8
  05f57e4  and 11, 5, 0
  05f57e8  cmpwi 7, 11, 0
  05f57ec  bt 30, 0x5f5878
  05f57f0  cmpwi 7, 31, 0
  05f57f4  bt 30, 0x5f58dc
  05f57f8  addi 31, 31, -1
  05f57fc  clrlwi 0, 27, 31
  05f5800  fmr 13, 30
  05f5804  cmpwi 7, 0, 0
  05f5808  bf 30, 0x5f5810
  05f580c  fmr 13, 31
  05f5810  extsw 0, 11
  05f5814  clrldi 9, 28, 32
  05f5818  std 0, 336(1)
  05f581c  lfd 12, 336(1)
  05f5820  srwi 27, 27, 1
  05f5824  fcfid 12, 12
  05f5828  addi 28, 28, 4
  05f582c  addi 6, 6, 1
  05f5830  frsp 0, 12
  05f5834  fmuls 0, 13, 0
  05f5838  stfs 0, 0(9)
  05f583c  bdz 0x5f588c
  05f5840  slwi 11, 25, 2
  05f5844  add 9, 11, 26
  05f5848  clrldi 9, 9, 32
  05f584c  lwz 0, 0(9)
  05f5850  slwi 0, 0, 1
  05f5854  cmpw 7, 0, 6
  05f5858  bt 30, 0x5f58c4
  05f585c  cmplw 7, 7, 31
  05f5860  bt 29, 0x5f57b8
  05f5864  and 11, 5, 27
  05f5868  sub 31, 31, 7
  05f586c  cmpwi 7, 11, 0
  05f5870  srw 27, 27, 7
  05f5874  bf 30, 0x5f57f0
  05f5878  clrldi 9, 28, 32
  05f587c  addi 6, 6, 1
  05f5880  addi 28, 28, 4
  05f5884  stw 4, 0(9)
  05f5888  bdnz 0x5f5840
  05f588c  cmplw 7, 22, 6
  05f5890  bt 29, 0x5f56d8
  05f5894  lwz 0, 328(1)
  05f5898  mr 29, 30
  05f589c  cmpwi 7, 0, 0
  05f58a0  bt 30, 0x5f5634
  05f58a4  lwz 0, 264(1)
  05f58a8  mr 4, 21
  05f58ac  extsw 3, 22
  05f58b0  lwz 6, 268(1)
  05f58b4  extsw 5, 0
  05f58b8  bl 0x6019d8
  05f58bc  nop
  05f58c0  b 0x5f5634
  05f58c4  extsw 0, 11
  05f58c8  addi 25, 25, 1
  05f58cc  add 9, 1, 0
  05f58d0  lfs 31, 112(9)
  05f58d4  fneg 30, 31
  05f58d8  b 0x5f585c
  05f58dc  clrldi 9, 30, 32
  05f58e0  li 31, 31
  05f58e4  addi 30, 30, 4
  05f58e8  lwz 27, 0(9)
  05f58ec  b 0x5f57fc
  05f58f0  cmplw 7, 30, 24
  05f58f4  bf 28, 0x5f561c
  05f58f8  clrldi 9, 30, 32
  05f58fc  li 31, 31
  05f5900  addi 30, 30, 4
  05f5904  lwz 9, 0(9)
  05f5908  b 0x5f56e8
  05f590c  clrlwi 7, 27, 28
  05f5910  addi 31, 31, -4
  05f5914  srwi 27, 27, 4
  05f5918  b 0x5f5778
  05f591c  sub 0, 29, 6
  05f5920  clrldi 3, 28, 32
  05f5924  slwi 0, 0, 2
  05f5928  li 4, 0
  05f592c  rlwinm 5, 0, 0, 0, 29
  05f5930  add 28, 28, 0
  05f5934  bl 0x5d0140
  05f5938  nop
  05f593c  slwi 11, 25, 2
  05f5940  add 10, 26, 11
  05f5944  clrldi 9, 10, 32
  05f5948  lwz 0, 0(9)
  05f594c  slwi 0, 0, 1
  05f5950  cmplw 7, 0, 29
  05f5954  bf 28, 0x5f5994
  05f5958  ld 0, 344(1)
  05f595c  addi 10, 10, 4
  05f5960  add 8, 11, 0
  05f5964  nop
  05f5968  clrldi 9, 10, 32
  05f596c  clrldi 11, 8, 32
  05f5970  addi 25, 25, 1
  05f5974  addi 8, 8, 4
  05f5978  addi 10, 10, 4
  05f597c  lwz 0, 0(9)
  05f5980  lfs 31, 0(11)
  05f5984  slwi 0, 0, 1
  05f5988  fneg 30, 31
  05f598c  cmplw 7, 29, 0
  05f5990  bt 29, 0x5f5968
  05f5994  mr 6, 29
  05f5998  cmplw 7, 22, 6
  05f599c  bt 29, 0x5f56d8
  05f59a0  b 0x5f5894
  05f59a4  clrlwi 9, 27, 3
  05f59a8  addi 31, 31, -29
  05f59ac  srwi 27, 27, 29
  05f59b0  b 0x5f5550
  05f59b4  clrlwi 0, 27, 28
  05f59b8  addi 31, 31, -4
  05f59bc  srwi 27, 9, 5
  05f59c0  b 0x5f5730
  05f59c4  cmpwi 7, 17, 1
  05f59c8  bt 30, 0x5f5c18
  05f59cc  li 0, 240
  05f59d0  stfs 29, 240(1)
  05f59d4  srwi 10, 22, 2
  05f59d8  cmpwi 7, 10, 0
  05f59dc  lvewx 0, 1, 0
  05f59e0  vspltw 13, 0, 0
  05f59e4  bt 30, 0x5f5a4c
  05f59e8  lwz 9, -32188(2)
  05f59ec  clrldi 10, 10, 32
  05f59f0  lwz 0, 312(1)
  05f59f4  vxor 12, 12, 12
  05f59f8  mtctr 10
  05f59fc  lwz 8, 280(1)
  05f5a00  add 6, 11, 0
  05f5a04  mr 7, 0
  05f5a08  lvx 11, 0, 9
  05f5a0c  clrldi 9, 7, 32
  05f5a10  clrldi 11, 6, 32
  05f5a14  clrldi 10, 8, 32
  05f5a18  addi 6, 6, 16
  05f5a1c  addi 8, 8, 16
  05f5a20  lvx 0, 0, 9
  05f5a24  addi 7, 7, 16
  05f5a28  lvx 1, 0, 11
  05f5a2c  vmaddfp 0, 0, 13, 12
  05f5a30  vmaddfp 1, 1, 13, 12
  05f5a34  vctsxs 1, 1, 0
  05f5a38  vctsxs 0, 0, 0
  05f5a3c  vpkswss 0, 0, 1
  05f5a40  vperm 0, 0, 0, 11
  05f5a44  stvx 0, 0, 10
  05f5a48  bdnz 0x5f5a0c
  05f5a4c  lwz 9, 272(1)
  05f5a50  lwz 3, 260(1)
  05f5a54  cmpwi 7, 9, 0
  05f5a58  bf 30, 0x5f5b98
  05f5a5c  slwi 4, 22, 1
  05f5a60  lwz 11, 280(1)
  05f5a64  clrldi 5, 15, 32
  05f5a68  mullw 4, 17, 4
  05f5a6c  sub 4, 4, 15
  05f5a70  add 4, 4, 11
  05f5a74  clrldi 4, 4, 32
  05f5a78  bl 0x5c6094
  05f5a7c  nop
  05f5a80  lwz 9, 296(1)
  05f5a84  lwz 15, 20(19)
  05f5a88  sub 0, 29, 9
  05f5a8c  clrlwi 29, 0, 3
  05f5a90  lwz 11, 316(1)
  05f5a94  li 30, 0
  05f5a98  lwz 0, 16(19)
  05f5a9c  cmpwi 7, 11, 0
  05f5aa0  stw 30, 32(19)
  05f5aa4  sub 31, 0, 15
  05f5aa8  bt 30, 0x5f5abc
  05f5aac  ld 11, 320(1)
  05f5ab0  lwz 9, 0(11)
  05f5ab4  cmpwi 7, 9, 0
  05f5ab8  bf 30, 0x5f5b74
  05f5abc  lwz 11, 284(1)
  05f5ac0  cmpwi 7, 11, 0
  05f5ac4  bt 30, 0x5f5ad0
  05f5ac8  ld 9, 288(1)
  05f5acc  stw 31, 0(9)
  05f5ad0  lwz 11, 300(1)
  05f5ad4  cmpwi 7, 11, 0
  05f5ad8  bt 30, 0x5f5aec
  05f5adc  ld 11, 304(1)
  05f5ae0  lwz 9, 296(1)
  05f5ae4  add 0, 9, 29
  05f5ae8  stw 0, 0(11)
  05f5aec  ld 0, 544(1)
  05f5af0  ld 14, 360(1)
  05f5af4  ld 15, 368(1)
  05f5af8  mtlr 0
  05f5afc  ld 16, 376(1)
  05f5b00  ld 17, 384(1)
  05f5b04  ld 18, 392(1)
  05f5b08  ld 19, 400(1)
  05f5b0c  ld 20, 408(1)
  05f5b10  ld 21, 416(1)
  05f5b14  ld 22, 424(1)
  05f5b18  ld 23, 432(1)
  05f5b1c  ld 24, 440(1)
  05f5b20  ld 25, 448(1)
  05f5b24  ld 26, 456(1)
  05f5b28  ld 27, 464(1)
  05f5b2c  ld 28, 472(1)
  05f5b30  ld 29, 480(1)
  05f5b34  ld 30, 488(1)
  05f5b38  ld 31, 496(1)
  05f5b3c  lfd 29, 504(1)
  05f5b40  lfd 30, 512(1)
  05f5b44  lfd 31, 520(1)
  05f5b48  addi 1, 1, 528
  05f5b4c  blr
  05f5b50  lwz 9, 296(1)
  05f5b54  li 29, 0
  05f5b58  cmplw 7, 9, 24
  05f5b5c  bf 28, 0x5f5a90
  05f5b60  lwz 0, 0(9)
  05f5b64  addi 29, 9, 4
  05f5b68  li 31, 30
  05f5b6c  srwi 27, 0, 2
  05f5b70  b 0x5f5490
  05f5b74  lwz 3, 28(19)
  05f5b78  slw 0, 9, 3
  05f5b7c  cmplw 7, 31, 0
  05f5b80  bt 29, 0x5f5c94
  05f5b84  srw 0, 31, 3
  05f5b88  li 31, 0
  05f5b8c  sub 0, 9, 0
  05f5b90  stw 0, 0(11)
  05f5b94  b 0x5f5abc
  05f5b98  li 0, 224
  05f5b9c  stw 9, 224(1)
  05f5ba0  cmpwi 7, 15, 0
  05f5ba4  lvewx 0, 1, 0
  05f5ba8  vspltw 9, 0, 0
  05f5bac  bt 30, 0x5f5a5c
  05f5bb0  lwz 9, -32184(2)
  05f5bb4  li 11, 0
  05f5bb8  lwz 10, 280(1)
  05f5bbc  vspltish 8, 8
  05f5bc0  lvx 10, 0, 9
  05f5bc4  clrldi 9, 11, 32
  05f5bc8  addi 11, 11, 16
  05f5bcc  cmplw 7, 15, 11
  05f5bd0  lvx 12, 9, 3
  05f5bd4  lvx 0, 9, 10
  05f5bd8  vupklsh 11, 12
  05f5bdc  vsubuhm 0, 0, 12
  05f5be0  vupkhsh 12, 12
  05f5be4  vmulosh 13, 0, 10
  05f5be8  vmulesh 0, 0, 10
  05f5bec  vadduhm 10, 10, 8
  05f5bf0  vsraw 13, 13, 9
  05f5bf4  vsraw 0, 0, 9
  05f5bf8  vmrghw 1, 0, 13
  05f5bfc  vmrglw 0, 0, 13
  05f5c00  vadduwm 1, 1, 12
  05f5c04  vadduwm 0, 0, 11
  05f5c08  vpkswss 1, 1, 0
  05f5c0c  stvx 1, 9, 10
  05f5c10  bt 29, 0x5f5bc4
  05f5c14  b 0x5f5a5c
  05f5c18  li 0, 256
  05f5c1c  stfs 29, 256(1)
  05f5c20  srwi 9, 22, 3
  05f5c24  cmpwi 7, 9, 0
  05f5c28  lvewx 0, 1, 0
  05f5c2c  vspltw 13, 0, 0
  05f5c30  bt 30, 0x5f5a4c
  05f5c34  clrldi 9, 9, 32
  05f5c38  lwz 8, 312(1)
  05f5c3c  lwz 10, 280(1)
  05f5c40  li 7, 16
  05f5c44  vxor 12, 12, 12
  05f5c48  mtctr 9
  05f5c4c  clrldi 9, 8, 32
  05f5c50  clrldi 11, 10, 32
  05f5c54  addi 8, 8, 32
  05f5c58  addi 10, 10, 16
  05f5c5c  lvx 1, 7, 9
  05f5c60  lvx 0, 0, 9
  05f5c64  vmaddfp 1, 1, 13, 12
  05f5c68  vmaddfp 0, 0, 13, 12
  05f5c6c  vctsxs 1, 1, 0
  05f5c70  vctsxs 0, 0, 0
  05f5c74  vpkswss 0, 0, 1
  05f5c78  stvx 0, 0, 11
  05f5c7c  bdnz 0x5f5c4c
  05f5c80  lwz 9, 272(1)
  05f5c84  lwz 3, 260(1)
  05f5c88  cmpwi 7, 9, 0
  05f5c8c  bt 30, 0x5f5a5c
  05f5c90  b 0x5f5b98
  05f5c94  rlwinm 0, 0, 0, 0, 27
  05f5c98  lwz 3, 280(1)
  05f5c9c  slwi 4, 0, 1
  05f5ca0  sub 31, 31, 0
  05f5ca4  add 4, 3, 4
  05f5ca8  clrldi 5, 31, 32
  05f5cac  clrldi 4, 4, 32
  05f5cb0  bl 0x5c6094
  05f5cb4  nop
  05f5cb8  ld 9, 320(1)
  05f5cbc  stw 30, 0(9)
  05f5cc0  b 0x5f5abc
  05f5cc4  slwi 11, 22, 2
  05f5cc8  b 0x5f59cc

FUN_005f5cd0:   # 0x5f5cd0, 0x29c bytes
  05f5cd0  cmplwi 7, 4, 44099
  05f5cd4  mflr 0
  05f5cd8  stdu 1, -224(1)
  05f5cdc  std 22, 144(1)
  05f5ce0  std 25, 168(1)
  05f5ce4  std 26, 176(1)
  05f5ce8  std 31, 216(1)
  05f5cec  std 21, 136(1)
  05f5cf0  std 23, 152(1)
  05f5cf4  std 24, 160(1)
  05f5cf8  std 27, 184(1)
  05f5cfc  std 28, 192(1)
  05f5d00  std 29, 200(1)
  05f5d04  std 30, 208(1)
  05f5d08  std 0, 240(1)
  05f5d0c  mr 31, 3
  05f5d10  mr 26, 5
  05f5d14  mr 22, 6
  05f5d18  li 25, 2048
  05f5d1c  bt 29, 0x5f5d2c
  05f5d20  cmplwi 7, 4, 22049
  05f5d24  li 25, 1024
  05f5d28  bf 29, 0x5f5f40
  05f5d2c  clrlwi 0, 22, 31
  05f5d30  mullw 9, 25, 26
  05f5d34  cmpwi 7, 0, 0
  05f5d38  slwi 27, 9, 1
  05f5d3c  bf 30, 0x5f5d4c
  05f5d40  mr 25, 9
  05f5d44  mullw 4, 4, 26
  05f5d48  li 26, 1
  05f5d4c  addi 0, 4, 1
  05f5d50  lwz 21, -32192(2)
  05f5d54  srwi 24, 25, 1
  05f5d58  srwi 28, 0, 1
  05f5d5c  li 0, 25
  05f5d60  li 30, 0
  05f5d64  addi 11, 21, 496
  05f5d68  mtctr 0
  05f5d6c  b 0x5f5d78
  05f5d70  addi 30, 30, 1
  05f5d74  bdz 0x5f5d8c
  05f5d78  clrldi 9, 11, 32
  05f5d7c  addi 11, 11, 4
  05f5d80  lwz 0, 0(9)
  05f5d84  cmplw 7, 0, 28
  05f5d88  bt 28, 0x5f5d70
  05f5d8c  clrldi 23, 31, 32
  05f5d90  li 4, 0
  05f5d94  mr 3, 23
  05f5d98  li 5, 168
  05f5d9c  srwi 29, 27, 4
  05f5da0  bl 0x5d0140
  05f5da4  nop
  05f5da8  addi 0, 31, 176
  05f5dac  lwz 11, -32176(2)
  05f5db0  srwi 10, 27, 5
  05f5db4  addi 9, 29, 191
  05f5db8  stw 0, 0(31)
  05f5dbc  li 0, 2048
  05f5dc0  cmpwi 7, 10, 64
  05f5dc4  rlwinm 9, 9, 0, 0, 27
  05f5dc8  stw 0, 40(31)
  05f5dcc  li 0, 0
  05f5dd0  stw 11, 4(31)
  05f5dd4  stw 9, 48(31)
  05f5dd8  stw 22, 44(31)
  05f5ddc  stw 26, 28(31)
  05f5de0  stw 29, 20(31)
  05f5de4  stw 0, 24(31)
  05f5de8  stw 30, 36(31)
  05f5dec  stw 25, 8(31)
  05f5df0  stw 27, 16(31)
  05f5df4  bt 30, 0x5f5f48
  05f5df8  cmplwi 7, 10, 64
  05f5dfc  bt 29, 0x5f5f24
  05f5e00  cmpwi 7, 10, 32
  05f5e04  bt 30, 0x5f5f60
  05f5e08  clrldi 0, 25, 32
  05f5e0c  std 0, 112(1)
  05f5e10  lfd 0, 112(1)
  05f5e14  fcfid 0, 0
  05f5e18  frsp 11, 0
  05f5e1c  lfs 0, -32180(2)
  05f5e20  fcmpu 7, 11, 0
  05f5e24  bf 29, 0x5f5e6c
  05f5e28  frsqrte 12, 11
  05f5e2c  fmul 13, 12, 12
  05f5e30  lfd 9, -32168(2)
  05f5e34  lfd 10, -32160(2)
  05f5e38  fmul 12, 12, 10
  05f5e3c  fnmsub 13, 11, 13, 9
  05f5e40  fmul 13, 13, 12
  05f5e44  fmul 0, 13, 13
  05f5e48  fmul 13, 13, 10
  05f5e4c  fnmsub 0, 11, 0, 9
  05f5e50  fmul 0, 0, 13
  05f5e54  fmul 12, 0, 0
  05f5e58  fmul 0, 0, 10
  05f5e5c  fnmsub 12, 11, 12, 9
  05f5e60  fmul 11, 11, 12
  05f5e64  fmul 0, 0, 11
  05f5e68  frsp 11, 0
  05f5e6c  lfs 0, -32152(2)
  05f5e70  cmpwi 7, 30, 0
  05f5e74  fdivs 0, 0, 11
  05f5e78  stfs 0, 12(31)
  05f5e7c  bt 30, 0x5f5ec8
  05f5e80  clrldi 0, 30, 32
  05f5e84  addi 8, 21, 496
  05f5e88  addi 11, 31, 52
  05f5e8c  mtctr 0
  05f5e90  li 7, 1
  05f5e94  nop
  05f5e98  clrldi 9, 8, 32
  05f5e9c  clrldi 10, 11, 32
  05f5ea0  addi 8, 8, 4
  05f5ea4  addi 11, 11, 4
  05f5ea8  lwz 0, 0(9)
  05f5eac  mullw 0, 24, 0
  05f5eb0  divwu 0, 0, 28
  05f5eb4  cmpwi 7, 0, 0
  05f5eb8  stw 0, 0(10)
  05f5ebc  bf 30, 0x5f5ec4
  05f5ec0  stw 7, 0(10)
  05f5ec4  bdnz 0x5f5e98
  05f5ec8  slwi 9, 30, 2
  05f5ecc  li 0, 1
  05f5ed0  addi 9, 9, 48
  05f5ed4  stw 0, 32(31)
  05f5ed8  extsw 9, 9
  05f5edc  mr 3, 23
  05f5ee0  add 9, 23, 9
  05f5ee4  stw 24, 4(9)
  05f5ee8  ld 0, 240(1)
  05f5eec  ld 21, 136(1)
  05f5ef0  ld 22, 144(1)
  05f5ef4  mtlr 0
  05f5ef8  ld 23, 152(1)
  05f5efc  ld 24, 160(1)
  05f5f00  ld 25, 168(1)
  05f5f04  ld 26, 176(1)
  05f5f08  ld 27, 184(1)
  05f5f0c  ld 28, 192(1)
  05f5f10  ld 29, 200(1)
  05f5f14  ld 30, 208(1)
  05f5f18  ld 31, 216(1)
  05f5f1c  addi 1, 1, 224
  05f5f20  blr
  05f5f24  cmpwi 7, 10, 128
  05f5f28  bt 30, 0x5f5f54
  05f5f2c  cmpwi 7, 10, 256
  05f5f30  bf 30, 0x5f5e08
  05f5f34  li 0, 8
  05f5f38  stw 0, 24(31)
  05f5f3c  b 0x5f5e08
  05f5f40  li 25, 512
  05f5f44  b 0x5f5d2c
  05f5f48  li 0, 6
  05f5f4c  stw 0, 24(31)
  05f5f50  b 0x5f5e08
  05f5f54  li 0, 7
  05f5f58  stw 0, 24(31)
  05f5f5c  b 0x5f5e08
  05f5f60  li 0, 5
  05f5f64  stw 0, 24(31)
  05f5f68  b 0x5f5e08

FUN_005f5f70:   # 0x5f5f70, 0x2e8 bytes
  05f5f70  stdu 1, -144(1)
  05f5f74  mflr 0
  05f5f78  std 28, 112(1)
  05f5f7c  std 29, 120(1)
  05f5f80  std 30, 128(1)
  05f5f84  std 31, 136(1)
  05f5f88  std 0, 160(1)
  05f5f8c  lwz 0, 0(3)
  05f5f90  mr 28, 4
  05f5f94  lwz 9, 4(3)
  05f5f98  mr 6, 5
  05f5f9c  mr 11, 3
  05f5fa0  cmpw 7, 0, 9
  05f5fa4  bt 30, 0x5f5fc8
  05f5fa8  ld 0, 160(1)
  05f5fac  ld 28, 112(1)
  05f5fb0  ld 29, 120(1)
  05f5fb4  mtlr 0
  05f5fb8  ld 30, 128(1)
  05f5fbc  ld 31, 136(1)
  05f5fc0  addi 1, 1, 144
  05f5fc4  blr
  05f5fc8  lwz 7, 8(4)
  05f5fcc  lwz 8, 40(3)
  05f5fd0  lwz 29, 4(4)
  05f5fd4  cmplw 7, 7, 8
  05f5fd8  lwz 10, 0(4)
  05f5fdc  bt 28, 0x5f6158
  05f5fe0  subfic 0, 8, 32
  05f5fe4  li 9, -1
  05f5fe8  sub 30, 7, 8
  05f5fec  srw 9, 9, 0
  05f5ff0  srd 31, 10, 8
  05f5ff4  and 5, 9, 10
  05f5ff8  cmpwi 5, 0
  05f5ffc  bf 2, 0x5f603c
  05f6000  lwz 9, 48(3)
  05f6004  addi 0, 9, 4
  05f6008  stw 9, 4(3)
  05f600c  stw 0, 0(3)
  05f6010  stw 30, 8(28)
  05f6014  stw 29, 4(28)
  05f6018  stw 31, 0(28)
  05f601c  ld 0, 160(1)
  05f6020  ld 28, 112(1)
  05f6024  ld 29, 120(1)
  05f6028  mtlr 0
  05f602c  ld 30, 128(1)
  05f6030  ld 31, 136(1)
  05f6034  addi 1, 1, 144
  05f6038  blr
  05f603c  lwz 0, 44(3)
  05f6040  cmplw 7, 0, 5
  05f6044  bt 28, 0x5f6000
  05f6048  lwz 10, 48(3)
  05f604c  cmpwi 7, 30, 0
  05f6050  add 0, 10, 5
  05f6054  stw 10, 0(3)
  05f6058  stw 0, 4(3)
  05f605c  bt 30, 0x5f6194
  05f6060  addi 30, 30, -1
  05f6064  clrlwi 0, 31, 31
  05f6068  srwi 31, 31, 1
  05f606c  cmpwi 7, 0, 0
  05f6070  bf 30, 0x5f61d4
  05f6074  lwz 7, 32(3)
  05f6078  clrldi 5, 5, 32
  05f607c  li 0, -1
  05f6080  subfic 9, 7, 32
  05f6084  mtctr 5
  05f6088  addi 4, 11, 16
  05f608c  lwz 5, 36(3)
  05f6090  srw 12, 0, 9
  05f6094  b 0x5f6100
  05f6098  and 9, 31, 12
  05f609c  add 9, 5, 9
  05f60a0  clrldi 9, 9, 32
  05f60a4  lbz 0, 0(9)
  05f60a8  clrlwi 11, 0, 28
  05f60ac  srwi 0, 0, 4
  05f60b0  add 11, 4, 11
  05f60b4  sub 30, 30, 0
  05f60b8  clrldi 11, 11, 32
  05f60bc  srw 31, 31, 0
  05f60c0  lbz 11, 0(11)
  05f60c4  cmpwi 7, 11, 0
  05f60c8  bt 30, 0x5f60f0
  05f60cc  cmpwi 7, 30, 0
  05f60d0  bt 30, 0x5f61a8
  05f60d4  addi 30, 30, -1
  05f60d8  clrlwi 0, 31, 31
  05f60dc  srwi 31, 31, 1
  05f60e0  cmpwi 7, 0, 0
  05f60e4  bt 30, 0x5f60f0
  05f60e8  neg 11, 11
  05f60ec  nop
  05f60f0  clrldi 9, 10, 32
  05f60f4  stb 11, 0(9)
  05f60f8  bdz 0x5f6010
  05f60fc  addi 10, 10, 1
  05f6100  cmplw 7, 30, 7
  05f6104  bf 28, 0x5f6098
  05f6108  cmplw 7, 29, 6
  05f610c  bf 28, 0x5f6000
  05f6110  clrldi 11, 29, 32
  05f6114  lwz 8, 0(11)
  05f6118  slw 9, 8, 30
  05f611c  or 9, 31, 9
  05f6120  and 9, 9, 12
  05f6124  add 9, 5, 9
  05f6128  clrldi 9, 9, 32
  05f612c  lbz 0, 0(9)
  05f6130  clrlwi 11, 0, 28
  05f6134  srwi 0, 0, 4
  05f6138  add 11, 4, 11
  05f613c  cmplw 7, 30, 0
  05f6140  clrldi 11, 11, 32
  05f6144  lbz 11, 0(11)
  05f6148  bt 28, 0x5f61bc
  05f614c  sub 30, 30, 0
  05f6150  srw 31, 31, 0
  05f6154  b 0x5f60c4
  05f6158  clrldi 9, 29, 32
  05f615c  addi 29, 29, 4
  05f6160  lwz 0, 0(9)
  05f6164  li 9, -1
  05f6168  sld 0, 0, 7
  05f616c  addi 7, 7, 32
  05f6170  or 10, 10, 0
  05f6174  subfic 0, 8, 32
  05f6178  sub 30, 7, 8
  05f617c  srw 9, 9, 0
  05f6180  srd 31, 10, 8
  05f6184  and 5, 9, 10
  05f6188  cmpwi 5, 0
  05f618c  bt 2, 0x5f6000
  05f6190  b 0x5f603c
  05f6194  clrldi 9, 29, 32
  05f6198  li 30, 31
  05f619c  addi 29, 29, 4
  05f61a0  lwz 31, 0(9)
  05f61a4  b 0x5f6064
  05f61a8  clrldi 9, 29, 32
  05f61ac  li 30, 31
  05f61b0  addi 29, 29, 4
  05f61b4  lwz 31, 0(9)
  05f61b8  b 0x5f60d8
  05f61bc  sub 9, 30, 0
  05f61c0  sub 0, 0, 30
  05f61c4  addi 29, 29, 4
  05f61c8  srw 31, 8, 0
  05f61cc  addi 30, 9, 32
  05f61d0  b 0x5f60c4
  05f61d4  cmplwi 7, 30, 3
  05f61d8  clrldi 11, 31, 32
  05f61dc  bt 29, 0x5f61f8
  05f61e0  clrldi 9, 29, 32
  05f61e4  addi 29, 29, 4
  05f61e8  lwz 0, 0(9)
  05f61ec  sld 0, 0, 30
  05f61f0  addi 30, 30, 32
  05f61f4  or 11, 11, 0
  05f61f8  clrlwi 4, 11, 28
  05f61fc  addi 30, 30, -4
  05f6200  cmpwi 7, 4, 0
  05f6204  rldicl 31, 11, 60, 4
  05f6208  bt 30, 0x5f622c
  05f620c  cmpwi 7, 30, 0
  05f6210  bt 30, 0x5f6244
  05f6214  addi 30, 30, -1
  05f6218  clrlwi 0, 31, 31
  05f621c  srwi 31, 31, 1
  05f6220  cmpwi 7, 0, 0
  05f6224  bt 30, 0x5f622c
  05f6228  neg 4, 4
  05f622c  clrldi 3, 10, 32
  05f6230  extsw 4, 4
  05f6234  clrldi 5, 5, 32
  05f6238  bl 0x5d0140
  05f623c  nop
  05f6240  b 0x5f6010
  05f6244  clrldi 9, 29, 32
  05f6248  li 30, 31
  05f624c  addi 29, 29, 4
  05f6250  lwz 31, 0(9)
  05f6254  b 0x5f6218

FUN_005f6258:   # 0x5f6258, 0x3c4 bytes
  05f6258  stdu 1, -208(1)
  05f625c  mflr 0
  05f6260  std 25, 152(1)
  05f6264  std 26, 160(1)
  05f6268  std 27, 168(1)
  05f626c  std 20, 112(1)
  05f6270  std 21, 120(1)
  05f6274  std 22, 128(1)
  05f6278  std 23, 136(1)
  05f627c  std 24, 144(1)
  05f6280  std 28, 176(1)
  05f6284  std 29, 184(1)
  05f6288  std 30, 192(1)
  05f628c  std 31, 200(1)
  05f6290  std 0, 224(1)
  05f6294  lwz 9, 0(3)
  05f6298  mr 27, 4
  05f629c  lwz 0, 4(3)
  05f62a0  mr 26, 5
  05f62a4  mr 25, 6
  05f62a8  cmpw 7, 9, 0
  05f62ac  mr 11, 3
  05f62b0  mr 4, 5
  05f62b4  bt 30, 0x5f62f8
  05f62b8  ld 0, 224(1)
  05f62bc  ld 20, 112(1)
  05f62c0  ld 21, 120(1)
  05f62c4  mtlr 0
  05f62c8  ld 22, 128(1)
  05f62cc  ld 23, 136(1)
  05f62d0  ld 24, 144(1)
  05f62d4  ld 25, 152(1)
  05f62d8  ld 26, 160(1)
  05f62dc  ld 27, 168(1)
  05f62e0  ld 28, 176(1)
  05f62e4  ld 29, 184(1)
  05f62e8  ld 30, 192(1)
  05f62ec  ld 31, 200(1)
  05f62f0  addi 1, 1, 208
  05f62f4  blr
  05f62f8  lwz 7, 8(27)
  05f62fc  lwz 8, 40(3)
  05f6300  lwz 28, 4(27)
  05f6304  cmplw 7, 7, 8
  05f6308  lwz 10, 0(27)
  05f630c  bt 28, 0x5f6590
  05f6310  subfic 0, 8, 32
  05f6314  li 9, -1
  05f6318  sub 31, 7, 8
  05f631c  srw 9, 9, 0
  05f6320  srd 30, 10, 8
  05f6324  and 8, 9, 10
  05f6328  cmpwi 8, 0
  05f632c  bf 2, 0x5f638c
  05f6330  lwz 9, 48(3)
  05f6334  addi 0, 9, 4
  05f6338  stw 9, 4(3)
  05f633c  stw 0, 0(3)
  05f6340  stw 31, 8(27)
  05f6344  stw 28, 4(27)
  05f6348  stw 30, 0(27)
  05f634c  ld 0, 224(1)
  05f6350  ld 20, 112(1)
  05f6354  ld 21, 120(1)
  05f6358  mtlr 0
  05f635c  ld 22, 128(1)
  05f6360  ld 23, 136(1)
  05f6364  ld 24, 144(1)
  05f6368  ld 25, 152(1)
  05f636c  ld 26, 160(1)
  05f6370  ld 27, 168(1)
  05f6374  ld 28, 176(1)
  05f6378  ld 29, 184(1)
  05f637c  ld 30, 192(1)
  05f6380  ld 31, 200(1)
  05f6384  addi 1, 1, 208
  05f6388  blr
  05f638c  lwz 0, 44(3)
  05f6390  mr 5, 8
  05f6394  cmpw 7, 0, 8
  05f6398  bt 28, 0x5f6330
  05f639c  lwz 0, 48(3)
  05f63a0  cmpwi 7, 31, 0
  05f63a4  addi 21, 11, 16
  05f63a8  lwz 23, 32(3)
  05f63ac  add 9, 0, 8
  05f63b0  lwz 22, 36(3)
  05f63b4  stw 0, 0(3)
  05f63b8  stw 9, 4(3)
  05f63bc  mr 6, 0
  05f63c0  lwz 10, 384(26)
  05f63c4  bt 30, 0x5f65cc
  05f63c8  addi 31, 31, -1
  05f63cc  clrlwi 0, 30, 31
  05f63d0  cmpwi 7, 0, 0
  05f63d4  bt 30, 0x5f63dc
  05f63d8  subfic 5, 8, -20
  05f63dc  addi 0, 5, -1
  05f63e0  subfic 9, 23, 32
  05f63e4  cmpwi 7, 0, 0
  05f63e8  li 0, -1
  05f63ec  srwi 30, 30, 1
  05f63f0  srw 24, 0, 9
  05f63f4  clrldi 0, 5, 32
  05f63f8  clrldi 4, 4, 32
  05f63fc  li 20, -1
  05f6400  mtctr 0
  05f6404  bf+ 28, 0x5f64a4
  05f6408  b 0x5f6610
  05f640c  addi 11, 11, 320
  05f6410  subfic 9, 0, 32
  05f6414  extsw 11, 11
  05f6418  srw 9, 20, 9
  05f641c  slwi 10, 10, 4
  05f6420  and 9, 30, 9
  05f6424  lwzx 0, 4, 11
  05f6428  add 9, 9, 0
  05f642c  clrldi 9, 9, 32
  05f6430  lbz 0, 0(9)
  05f6434  clrlwi 11, 0, 28
  05f6438  srwi 0, 0, 4
  05f643c  add 10, 10, 11
  05f6440  sub 8, 31, 0
  05f6444  extsw 10, 10
  05f6448  srw 7, 30, 0
  05f644c  lbzx 29, 4, 10
  05f6450  cmplw 7, 8, 23
  05f6454  bt 28, 0x5f6538
  05f6458  and 9, 7, 24
  05f645c  add 9, 22, 9
  05f6460  clrldi 9, 9, 32
  05f6464  lbz 0, 0(9)
  05f6468  clrlwi 11, 0, 28
  05f646c  srwi 0, 0, 4
  05f6470  add 11, 21, 11
  05f6474  sub 31, 8, 0
  05f6478  clrldi 11, 11, 32
  05f647c  srw 30, 7, 0
  05f6480  lbz 11, 0(11)
  05f6484  clrldi 9, 6, 32
  05f6488  slwi 0, 29, 4
  05f648c  addi 5, 5, -1
  05f6490  or 0, 0, 11
  05f6494  stb 0, 0(9)
  05f6498  bdz 0x5f65e0
  05f649c  addi 6, 6, 1
  05f64a0  mr 10, 29
  05f64a4  slwi 11, 10, 2
  05f64a8  addi 9, 11, 256
  05f64ac  extsw 9, 9
  05f64b0  lwzx 0, 4, 9
  05f64b4  cmplw 7, 31, 0
  05f64b8  bf 28, 0x5f640c
  05f64bc  cmplw 7, 28, 25
  05f64c0  bf 28, 0x5f6330
  05f64c4  clrldi 9, 28, 32
  05f64c8  addi 11, 11, 320
  05f64cc  subfic 0, 0, 32
  05f64d0  extsw 11, 11
  05f64d4  srw 0, 20, 0
  05f64d8  lwz 12, 0(9)
  05f64dc  slwi 10, 10, 4
  05f64e0  slw 9, 12, 31
  05f64e4  lwzx 8, 4, 11
  05f64e8  or 9, 30, 9
  05f64ec  and 9, 9, 0
  05f64f0  add 9, 9, 8
  05f64f4  clrldi 9, 9, 32
  05f64f8  lbz 0, 0(9)
  05f64fc  clrlwi 11, 0, 28
  05f6500  srwi 0, 0, 4
  05f6504  add 10, 10, 11
  05f6508  cmplw 7, 31, 0
  05f650c  extsw 10, 10
  05f6510  srw 7, 30, 0
  05f6514  sub 8, 31, 0
  05f6518  lbzx 29, 4, 10
  05f651c  bf 28, 0x5f6450
  05f6520  addi 8, 8, 32
  05f6524  sub 0, 0, 31
  05f6528  cmplw 7, 8, 23
  05f652c  srw 7, 12, 0
  05f6530  addi 28, 28, 4
  05f6534  bf 28, 0x5f6458
  05f6538  clrldi 11, 28, 32
  05f653c  lwz 10, 0(11)
  05f6540  slw 9, 10, 8
  05f6544  or 9, 7, 9
  05f6548  and 9, 9, 24
  05f654c  add 9, 22, 9
  05f6550  clrldi 9, 9, 32
  05f6554  lbz 0, 0(9)
  05f6558  clrlwi 11, 0, 28
  05f655c  srwi 0, 0, 4
  05f6560  add 11, 21, 11
  05f6564  cmplw 7, 8, 0
  05f6568  clrldi 11, 11, 32
  05f656c  srw 30, 7, 0
  05f6570  sub 31, 8, 0
  05f6574  lbz 11, 0(11)
  05f6578  bf 28, 0x5f6484
  05f657c  sub 0, 0, 8
  05f6580  addi 31, 31, 32
  05f6584  srw 30, 10, 0
  05f6588  addi 28, 28, 4
  05f658c  b 0x5f6484
  05f6590  clrldi 9, 28, 32
  05f6594  addi 28, 28, 4
  05f6598  lwz 0, 0(9)
  05f659c  li 9, -1
  05f65a0  sld 0, 0, 7
  05f65a4  addi 7, 7, 32
  05f65a8  or 10, 10, 0
  05f65ac  subfic 0, 8, 32
  05f65b0  sub 31, 7, 8
  05f65b4  srw 9, 9, 0
  05f65b8  srd 30, 10, 8
  05f65bc  and 8, 9, 10
  05f65c0  cmpwi 8, 0
  05f65c4  bt 2, 0x5f6330
  05f65c8  b 0x5f638c
  05f65cc  clrldi 9, 28, 32
  05f65d0  li 31, 31
  05f65d4  addi 28, 28, 4
  05f65d8  lwz 30, 0(9)
  05f65dc  b 0x5f63cc
  05f65e0  cmpwi 7, 5, -22
  05f65e4  bt 28, 0x5f65f0
  05f65e8  stw 29, 384(26)
  05f65ec  b 0x5f6340
  05f65f0  lwz 3, 48(3)
  05f65f4  subfic 5, 5, -21
  05f65f8  clrldi 5, 5, 32
  05f65fc  lbz 4, 0(3)
  05f6600  bl 0x5d0140
  05f6604  nop
  05f6608  stw 29, 384(26)
  05f660c  b 0x5f6340
  05f6610  li 0, 1
  05f6614  mtctr 0
  05f6618  b 0x5f64a4

FUN_005f6620:   # 0x5f6620, 0x3e4 bytes
  05f6620  stdu 1, -208(1)
  05f6624  mflr 0
  05f6628  std 25, 152(1)
  05f662c  std 26, 160(1)
  05f6630  std 27, 168(1)
  05f6634  std 20, 112(1)
  05f6638  std 21, 120(1)
  05f663c  std 22, 128(1)
  05f6640  std 23, 136(1)
  05f6644  std 24, 144(1)
  05f6648  std 28, 176(1)
  05f664c  std 29, 184(1)
  05f6650  std 30, 192(1)
  05f6654  std 31, 200(1)
  05f6658  std 0, 224(1)
  05f665c  lwz 9, 0(3)
  05f6660  mr 27, 4
  05f6664  lwz 0, 4(3)
  05f6668  mr 26, 5
  05f666c  mr 25, 6
  05f6670  cmpw 7, 9, 0
  05f6674  mr 11, 3
  05f6678  mr 4, 5
  05f667c  bt 30, 0x5f66c0
  05f6680  ld 0, 224(1)
  05f6684  ld 20, 112(1)
  05f6688  ld 21, 120(1)
  05f668c  mtlr 0
  05f6690  ld 22, 128(1)
  05f6694  ld 23, 136(1)
  05f6698  ld 24, 144(1)
  05f669c  ld 25, 152(1)
  05f66a0  ld 26, 160(1)
  05f66a4  ld 27, 168(1)
  05f66a8  ld 28, 176(1)
  05f66ac  ld 29, 184(1)
  05f66b0  ld 30, 192(1)
  05f66b4  ld 31, 200(1)
  05f66b8  addi 1, 1, 208
  05f66bc  blr
  05f66c0  lwz 7, 8(27)
  05f66c4  lwz 8, 40(3)
  05f66c8  lwz 28, 4(27)
  05f66cc  cmplw 7, 7, 8
  05f66d0  lwz 10, 0(27)
  05f66d4  bt 28, 0x5f6978
  05f66d8  subfic 0, 8, 32
  05f66dc  li 9, -1
  05f66e0  sub 31, 7, 8
  05f66e4  srw 9, 9, 0
  05f66e8  srd 30, 10, 8
  05f66ec  and 8, 9, 10
  05f66f0  cmpwi 8, 0
  05f66f4  bf 2, 0x5f6754
  05f66f8  lwz 9, 48(3)
  05f66fc  addi 0, 9, 4
  05f6700  stw 9, 4(3)
  05f6704  stw 0, 0(3)
  05f6708  stw 31, 8(27)
  05f670c  stw 28, 4(27)
  05f6710  stw 30, 0(27)
  05f6714  ld 0, 224(1)
  05f6718  ld 20, 112(1)
  05f671c  ld 21, 120(1)
  05f6720  mtlr 0
  05f6724  ld 22, 128(1)
  05f6728  ld 23, 136(1)
  05f672c  ld 24, 144(1)
  05f6730  ld 25, 152(1)
  05f6734  ld 26, 160(1)
  05f6738  ld 27, 168(1)
  05f673c  ld 28, 176(1)
  05f6740  ld 29, 184(1)
  05f6744  ld 30, 192(1)
  05f6748  ld 31, 200(1)
  05f674c  addi 1, 1, 208
  05f6750  blr
  05f6754  lwz 0, 44(3)
  05f6758  mr 5, 8
  05f675c  cmpw 7, 0, 8
  05f6760  bt 28, 0x5f66f8
  05f6764  lwz 0, 48(3)
  05f6768  cmpwi 7, 31, 0
  05f676c  addi 22, 11, 16
  05f6770  lwz 23, 32(3)
  05f6774  add 9, 0, 8
  05f6778  lwz 21, 36(3)
  05f677c  stw 0, 0(3)
  05f6780  stw 9, 4(3)
  05f6784  mr 6, 0
  05f6788  lwz 10, 384(26)
  05f678c  bt 30, 0x5f69b4
  05f6790  addi 31, 31, -1
  05f6794  clrlwi 0, 30, 31
  05f6798  cmpwi 7, 0, 0
  05f679c  bt 30, 0x5f67a4
  05f67a0  subfic 5, 8, -20
  05f67a4  addi 0, 5, -1
  05f67a8  subfic 9, 23, 32
  05f67ac  cmpwi 7, 0, 0
  05f67b0  li 0, -1
  05f67b4  srwi 30, 30, 1
  05f67b8  srw 24, 0, 9
  05f67bc  clrldi 0, 5, 32
  05f67c0  clrldi 12, 4, 32
  05f67c4  li 20, -1
  05f67c8  mtctr 0
  05f67cc  bf+ 28, 0x5f6888
  05f67d0  b 0x5f69f8
  05f67d4  addi 11, 11, 320
  05f67d8  subfic 9, 0, 32
  05f67dc  extsw 11, 11
  05f67e0  srw 9, 20, 9
  05f67e4  slwi 10, 10, 4
  05f67e8  and 9, 30, 9
  05f67ec  lwzx 0, 12, 11
  05f67f0  add 9, 9, 0
  05f67f4  clrldi 9, 9, 32
  05f67f8  lbz 0, 0(9)
  05f67fc  clrlwi 11, 0, 28
  05f6800  srwi 0, 0, 4
  05f6804  add 10, 10, 11
  05f6808  sub 8, 31, 0
  05f680c  extsw 10, 10
  05f6810  srw 7, 30, 0
  05f6814  lbzx 29, 12, 10
  05f6818  cmplw 7, 8, 23
  05f681c  bt 28, 0x5f6920
  05f6820  and 9, 7, 24
  05f6824  add 9, 21, 9
  05f6828  clrldi 9, 9, 32
  05f682c  lbz 0, 0(9)
  05f6830  clrlwi 11, 0, 28
  05f6834  srwi 0, 0, 4
  05f6838  add 11, 22, 11
  05f683c  sub 31, 8, 0
  05f6840  clrldi 11, 11, 32
  05f6844  srw 30, 7, 0
  05f6848  lbz 10, 0(11)
  05f684c  slwi 0, 29, 4
  05f6850  or 11, 10, 0
  05f6854  rlwinm 9, 11, 0, 24, 24
  05f6858  clrlwi 0, 11, 25
  05f685c  cmpwi 7, 9, 0
  05f6860  subfic 0, 0, -128
  05f6864  bf 30, 0x5f6870
  05f6868  clrlwi 9, 11, 25
  05f686c  addi 0, 9, -128
  05f6870  clrldi 9, 6, 32
  05f6874  addi 5, 5, -1
  05f6878  stb 0, 0(9)
  05f687c  bdz 0x5f69c8
  05f6880  addi 6, 6, 1
  05f6884  mr 10, 29
  05f6888  slwi 11, 10, 2
  05f688c  addi 9, 11, 256
  05f6890  extsw 9, 9
  05f6894  lwzx 0, 12, 9
  05f6898  cmplw 7, 31, 0
  05f689c  bf 28, 0x5f67d4
  05f68a0  cmplw 7, 28, 25
  05f68a4  bf 28, 0x5f66f8
  05f68a8  clrldi 9, 28, 32
  05f68ac  addi 11, 11, 320
  05f68b0  subfic 0, 0, 32
  05f68b4  extsw 11, 11
  05f68b8  srw 0, 20, 0
  05f68bc  lwz 4, 0(9)
  05f68c0  slwi 10, 10, 4
  05f68c4  slw 9, 4, 31
  05f68c8  lwzx 8, 12, 11
  05f68cc  or 9, 30, 9
  05f68d0  and 9, 9, 0
  05f68d4  add 9, 9, 8
  05f68d8  clrldi 9, 9, 32
  05f68dc  lbz 0, 0(9)
  05f68e0  clrlwi 11, 0, 28
  05f68e4  srwi 0, 0, 4
  05f68e8  add 10, 10, 11
  05f68ec  cmplw 7, 31, 0
  05f68f0  extsw 10, 10
  05f68f4  srw 7, 30, 0
  05f68f8  sub 8, 31, 0
  05f68fc  lbzx 29, 12, 10
  05f6900  bf 28, 0x5f6818
  05f6904  addi 8, 8, 32
  05f6908  sub 0, 0, 31
  05f690c  cmplw 7, 8, 23
  05f6910  srw 7, 4, 0
  05f6914  addi 28, 28, 4
  05f6918  bf 28, 0x5f6820
  05f691c  nop
  05f6920  clrldi 11, 28, 32
  05f6924  lwz 4, 0(11)
  05f6928  slw 9, 4, 8
  05f692c  or 9, 7, 9
  05f6930  and 9, 9, 24
  05f6934  add 9, 21, 9
  05f6938  clrldi 9, 9, 32
  05f693c  lbz 0, 0(9)
  05f6940  clrlwi 11, 0, 28
  05f6944  srwi 0, 0, 4
  05f6948  add 11, 22, 11
  05f694c  cmplw 7, 8, 0
  05f6950  clrldi 11, 11, 32
  05f6954  srw 30, 7, 0
  05f6958  sub 31, 8, 0
  05f695c  lbz 10, 0(11)
  05f6960  bf 28, 0x5f684c
  05f6964  sub 0, 0, 8
  05f6968  addi 31, 31, 32
  05f696c  srw 30, 4, 0
  05f6970  addi 28, 28, 4
  05f6974  b 0x5f684c
  05f6978  clrldi 9, 28, 32
  05f697c  addi 28, 28, 4
  05f6980  lwz 0, 0(9)
  05f6984  li 9, -1
  05f6988  sld 0, 0, 7
  05f698c  addi 7, 7, 32
  05f6990  or 10, 10, 0
  05f6994  subfic 0, 8, 32
  05f6998  sub 31, 7, 8
  05f699c  srw 9, 9, 0
  05f69a0  srd 30, 10, 8
  05f69a4  and 8, 9, 10
  05f69a8  cmpwi 8, 0
  05f69ac  bt 2, 0x5f66f8
  05f69b0  b 0x5f6754
  05f69b4  clrldi 9, 28, 32
  05f69b8  li 31, 31
  05f69bc  addi 28, 28, 4
  05f69c0  lwz 30, 0(9)
  05f69c4  b 0x5f6794
  05f69c8  cmpwi 7, 5, -22
  05f69cc  bt 28, 0x5f69d8
  05f69d0  stw 29, 384(26)
  05f69d4  b 0x5f6708
  05f69d8  lwz 3, 48(3)
  05f69dc  subfic 5, 5, -21
  05f69e0  clrldi 5, 5, 32
  05f69e4  lbz 4, 0(3)
  05f69e8  bl 0x5d0140
  05f69ec  nop
  05f69f0  stw 29, 384(26)
  05f69f4  b 0x5f6708
  05f69f8  li 0, 1
  05f69fc  mtctr 0
  05f6a00  b 0x5f6888

FUN_005f6a08:   # 0x5f6a08, 0x384 bytes
  05f6a08  stdu 1, -192(1)
  05f6a0c  mflr 0
  05f6a10  std 29, 168(1)
  05f6a14  std 23, 120(1)
  05f6a18  std 24, 128(1)
  05f6a1c  std 25, 136(1)
  05f6a20  std 26, 144(1)
  05f6a24  std 27, 152(1)
  05f6a28  std 28, 160(1)
  05f6a2c  std 30, 176(1)
  05f6a30  std 31, 184(1)
  05f6a34  std 0, 208(1)
  05f6a38  lwz 0, 0(3)
  05f6a3c  mr 29, 4
  05f6a40  lwz 9, 4(3)
  05f6a44  mr 4, 5
  05f6a48  mr 11, 3
  05f6a4c  cmpw 7, 0, 9
  05f6a50  bt 30, 0x5f6a88
  05f6a54  ld 0, 208(1)
  05f6a58  ld 23, 120(1)
  05f6a5c  ld 24, 128(1)
  05f6a60  mtlr 0
  05f6a64  ld 25, 136(1)
  05f6a68  ld 26, 144(1)
  05f6a6c  ld 27, 152(1)
  05f6a70  ld 28, 160(1)
  05f6a74  ld 29, 168(1)
  05f6a78  ld 30, 176(1)
  05f6a7c  ld 31, 184(1)
  05f6a80  addi 1, 1, 192
  05f6a84  blr
  05f6a88  lwz 7, 8(29)
  05f6a8c  lwz 8, 40(3)
  05f6a90  lwz 28, 4(29)
  05f6a94  cmplw 7, 7, 8
  05f6a98  lwz 10, 0(29)
  05f6a9c  bt 28, 0x5f6c84
  05f6aa0  subfic 0, 8, 32
  05f6aa4  li 9, -1
  05f6aa8  sub 31, 7, 8
  05f6aac  srw 9, 9, 0
  05f6ab0  srd 30, 10, 8
  05f6ab4  and 5, 9, 10
  05f6ab8  cmpwi 5, 0
  05f6abc  bf 2, 0x5f6b10
  05f6ac0  lwz 9, 48(3)
  05f6ac4  addi 0, 9, 4
  05f6ac8  stw 9, 4(3)
  05f6acc  stw 0, 0(3)
  05f6ad0  stw 31, 8(29)
  05f6ad4  stw 28, 4(29)
  05f6ad8  stw 30, 0(29)
  05f6adc  ld 0, 208(1)
  05f6ae0  ld 23, 120(1)
  05f6ae4  ld 24, 128(1)
  05f6ae8  mtlr 0
  05f6aec  ld 25, 136(1)
  05f6af0  ld 26, 144(1)
  05f6af4  ld 27, 152(1)
  05f6af8  ld 28, 160(1)
  05f6afc  ld 29, 168(1)
  05f6b00  ld 30, 176(1)
  05f6b04  ld 31, 184(1)
  05f6b08  addi 1, 1, 192
  05f6b0c  blr
  05f6b10  lwz 0, 44(3)
  05f6b14  cmplw 7, 0, 5
  05f6b18  bt 28, 0x5f6ac0
  05f6b1c  lwz 10, 48(3)
  05f6b20  cmpwi 7, 31, 0
  05f6b24  add 0, 10, 5
  05f6b28  stw 10, 0(3)
  05f6b2c  stw 0, 4(3)
  05f6b30  bt 30, 0x5f6cfc
  05f6b34  addi 31, 31, -1
  05f6b38  clrlwi 0, 30, 31
  05f6b3c  srwi 30, 30, 1
  05f6b40  cmpwi 7, 0, 0
  05f6b44  bf 30, 0x5f6d48
  05f6b48  lwz 27, 32(3)
  05f6b4c  li 0, -1
  05f6b50  mr 7, 10
  05f6b54  lwz 23, -32144(2)
  05f6b58  cmplw 7, 27, 31
  05f6b5c  lwz 26, 36(3)
  05f6b60  subfic 9, 27, 32
  05f6b64  addi 25, 11, 16
  05f6b68  srw 24, 0, 9
  05f6b6c  li 12, 0
  05f6b70  bt 29, 0x5f6c34
  05f6b74  nop
  05f6b78  and 9, 30, 24
  05f6b7c  add 9, 26, 9
  05f6b80  clrldi 9, 9, 32
  05f6b84  lbz 0, 0(9)
  05f6b88  clrlwi 11, 0, 28
  05f6b8c  srwi 0, 0, 4
  05f6b90  add 11, 25, 11
  05f6b94  sub 31, 31, 0
  05f6b98  clrldi 11, 11, 32
  05f6b9c  srw 30, 30, 0
  05f6ba0  lbz 11, 0(11)
  05f6ba4  clrlwi 10, 11, 24
  05f6ba8  cmplwi 7, 10, 11
  05f6bac  bf 29, 0x5f6d10
  05f6bb0  addi 0, 10, -12
  05f6bb4  extsw 0, 0
  05f6bb8  lbzx 8, 23, 0
  05f6bbc  clrlwi 10, 8, 24
  05f6bc0  cmplw 7, 10, 5
  05f6bc4  bt 29, 0x5f6ad0
  05f6bc8  slwi 0, 12, 8
  05f6bcc  clrlwi 9, 7, 30
  05f6bd0  or 0, 0, 12
  05f6bd4  cmpwi 7, 9, 0
  05f6bd8  slwi 11, 0, 16
  05f6bdc  sub 5, 5, 10
  05f6be0  or 11, 0, 11
  05f6be4  bt 30, 0x5f6cc0
  05f6be8  mr 6, 11
  05f6bec  mr 10, 7
  05f6bf0  mr 11, 8
  05f6bf4  nop
  05f6bf8  addi 11, 11, -1
  05f6bfc  clrldi 9, 10, 32
  05f6c00  clrlwi 0, 11, 24
  05f6c04  addi 10, 10, 1
  05f6c08  cmpwi 7, 0, 0
  05f6c0c  stb 6, 0(9)
  05f6c10  bf 30, 0x5f6bf8
  05f6c14  addi 9, 8, -1
  05f6c18  clrlwi 9, 9, 24
  05f6c1c  add 9, 9, 7
  05f6c20  addi 7, 9, 1
  05f6c24  cmpwi 7, 5, 0
  05f6c28  bt 30, 0x5f6ad0
  05f6c2c  cmplw 7, 27, 31
  05f6c30  bf 29, 0x5f6b78
  05f6c34  cmplw 7, 28, 4
  05f6c38  bf 28, 0x5f6ac0
  05f6c3c  clrldi 11, 28, 32
  05f6c40  lwz 10, 0(11)
  05f6c44  slw 9, 10, 31
  05f6c48  or 9, 30, 9
  05f6c4c  and 9, 9, 24
  05f6c50  add 9, 26, 9
  05f6c54  clrldi 9, 9, 32
  05f6c58  lbz 0, 0(9)
  05f6c5c  clrlwi 11, 0, 28
  05f6c60  srwi 0, 0, 4
  05f6c64  add 11, 25, 11
  05f6c68  cmplw 7, 0, 31
  05f6c6c  clrldi 11, 11, 32
  05f6c70  lbz 11, 0(11)
  05f6c74  bt 29, 0x5f6d30
  05f6c78  sub 31, 31, 0
  05f6c7c  srw 30, 30, 0
  05f6c80  b 0x5f6ba4
  05f6c84  clrldi 9, 28, 32
  05f6c88  addi 28, 28, 4
  05f6c8c  lwz 0, 0(9)
  05f6c90  li 9, -1
  05f6c94  sld 0, 0, 7
  05f6c98  addi 7, 7, 32
  05f6c9c  or 10, 10, 0
  05f6ca0  subfic 0, 8, 32
  05f6ca4  sub 31, 7, 8
  05f6ca8  srw 9, 9, 0
  05f6cac  srd 30, 10, 8
  05f6cb0  and 5, 9, 10
  05f6cb4  cmpwi 5, 0
  05f6cb8  bt 2, 0x5f6ac0
  05f6cbc  b 0x5f6b10
  05f6cc0  addi 8, 8, -4
  05f6cc4  clrldi 9, 7, 32
  05f6cc8  clrlwi 0, 8, 24
  05f6ccc  addi 7, 7, 4
  05f6cd0  cmpwi 7, 0, 0
  05f6cd4  stw 11, 0(9)
  05f6cd8  bt 30, 0x5f6c24
  05f6cdc  addi 8, 8, -4
  05f6ce0  clrldi 9, 7, 32
  05f6ce4  clrlwi 0, 8, 24
  05f6ce8  addi 7, 7, 4
  05f6cec  cmpwi 7, 0, 0
  05f6cf0  stw 11, 0(9)
  05f6cf4  bf 30, 0x5f6cc0
  05f6cf8  b 0x5f6c24
  05f6cfc  clrldi 9, 28, 32
  05f6d00  li 31, 31
  05f6d04  addi 28, 28, 4
  05f6d08  lwz 30, 0(9)
  05f6d0c  b 0x5f6b38
  05f6d10  clrldi 9, 7, 32
  05f6d14  addi 5, 5, -1
  05f6d18  mr 12, 10
  05f6d1c  cmpwi 7, 5, 0
  05f6d20  addi 7, 7, 1
  05f6d24  stb 11, 0(9)
  05f6d28  bf 30, 0x5f6c2c
  05f6d2c  b 0x5f6ad0
  05f6d30  sub 9, 31, 0
  05f6d34  sub 0, 0, 31
  05f6d38  addi 28, 28, 4
  05f6d3c  srw 30, 10, 0
  05f6d40  addi 31, 9, 32
  05f6d44  b 0x5f6ba4
  05f6d48  cmplwi 7, 31, 3
  05f6d4c  clrldi 11, 30, 32
  05f6d50  bt 29, 0x5f6d6c
  05f6d54  clrldi 9, 28, 32
  05f6d58  addi 28, 28, 4
  05f6d5c  lwz 0, 0(9)
  05f6d60  sld 0, 0, 31
  05f6d64  addi 31, 31, 32
  05f6d68  or 11, 11, 0
  05f6d6c  clrldi 3, 10, 32
  05f6d70  clrldi 4, 11, 60
  05f6d74  clrldi 5, 5, 32
  05f6d78  addi 31, 31, -4
  05f6d7c  rldicl 30, 11, 60, 4
  05f6d80  bl 0x5d0140
  05f6d84  nop
  05f6d88  b 0x5f6ad0

FUN_005f6d90:   # 0x5f6d90, 0x3ac bytes
  05f6d90  stdu 1, -208(1)
  05f6d94  mflr 0
  05f6d98  std 22, 128(1)
  05f6d9c  std 23, 136(1)
  05f6da0  std 24, 144(1)
  05f6da4  std 21, 120(1)
  05f6da8  std 25, 152(1)
  05f6dac  std 26, 160(1)
  05f6db0  std 27, 168(1)
  05f6db4  std 28, 176(1)
  05f6db8  std 29, 184(1)
  05f6dbc  std 30, 192(1)
  05f6dc0  std 31, 200(1)
  05f6dc4  std 0, 224(1)
  05f6dc8  lwz 0, 0(3)
  05f6dcc  mr 24, 3
  05f6dd0  lwz 9, 4(3)
  05f6dd4  mr 23, 4
  05f6dd8  mr 22, 5
  05f6ddc  cmpw 7, 0, 9
  05f6de0  bt 30, 0x5f6e20
  05f6de4  ld 0, 224(1)
  05f6de8  ld 21, 120(1)
  05f6dec  ld 22, 128(1)
  05f6df0  mtlr 0
  05f6df4  ld 23, 136(1)
  05f6df8  ld 24, 144(1)
  05f6dfc  ld 25, 152(1)
  05f6e00  ld 26, 160(1)
  05f6e04  ld 27, 168(1)
  05f6e08  ld 28, 176(1)
  05f6e0c  ld 29, 184(1)
  05f6e10  ld 30, 192(1)
  05f6e14  ld 31, 200(1)
  05f6e18  addi 1, 1, 208
  05f6e1c  blr
  05f6e20  lwz 8, 8(4)
  05f6e24  lwz 10, 40(3)
  05f6e28  lwz 28, 4(4)
  05f6e2c  cmplw 7, 8, 10
  05f6e30  lwz 11, 0(4)
  05f6e34  bt 28, 0x5f7094
  05f6e38  subfic 0, 10, 32
  05f6e3c  li 7, -1
  05f6e40  sub 31, 8, 10
  05f6e44  srw 0, 7, 0
  05f6e48  srd 30, 11, 10
  05f6e4c  and 10, 0, 11
  05f6e50  cmpwi 10, 0
  05f6e54  bf 2, 0x5f6eb0
  05f6e58  lwz 9, 48(24)
  05f6e5c  addi 0, 9, 4
  05f6e60  stw 9, 4(24)
  05f6e64  stw 0, 0(24)
  05f6e68  stw 31, 8(23)
  05f6e6c  stw 28, 4(23)
  05f6e70  stw 30, 0(23)
  05f6e74  ld 0, 224(1)
  05f6e78  ld 21, 120(1)
  05f6e7c  ld 22, 128(1)
  05f6e80  mtlr 0
  05f6e84  ld 23, 136(1)
  05f6e88  ld 24, 144(1)
  05f6e8c  ld 25, 152(1)
  05f6e90  ld 26, 160(1)
  05f6e94  ld 27, 168(1)
  05f6e98  ld 28, 176(1)
  05f6e9c  ld 29, 184(1)
  05f6ea0  ld 30, 192(1)
  05f6ea4  ld 31, 200(1)
  05f6ea8  addi 1, 1, 208
  05f6eac  blr
  05f6eb0  lwz 0, 44(24)
  05f6eb4  srwi 0, 0, 1
  05f6eb8  cmplw 7, 0, 10
  05f6ebc  bt 28, 0x5f6e58
  05f6ec0  lwz 0, 12(24)
  05f6ec4  lwz 3, 48(24)
  05f6ec8  cmpwi 7, 0, 0
  05f6ecc  bt 30, 0x5f70d0
  05f6ed0  lwz 11, 8(24)
  05f6ed4  clrldi 8, 30, 32
  05f6ed8  addi 6, 11, -1
  05f6edc  cmplw 7, 31, 6
  05f6ee0  bf 28, 0x5f6efc
  05f6ee4  clrldi 9, 28, 32
  05f6ee8  addi 28, 28, 4
  05f6eec  lwz 0, 0(9)
  05f6ef0  sld 0, 0, 31
  05f6ef4  addi 31, 31, 32
  05f6ef8  or 8, 8, 0
  05f6efc  subfic 0, 11, 33
  05f6f00  sub 9, 31, 11
  05f6f04  srw 0, 7, 0
  05f6f08  srd 30, 8, 6
  05f6f0c  and 11, 0, 8
  05f6f10  addi 31, 9, 1
  05f6f14  cmpwi 7, 11, 0
  05f6f18  mr 29, 11
  05f6f1c  bt 30, 0x5f6f40
  05f6f20  cmpwi 7, 31, 0
  05f6f24  bt 30, 0x5f7128
  05f6f28  mr 31, 9
  05f6f2c  clrlwi 0, 30, 31
  05f6f30  srwi 30, 30, 1
  05f6f34  cmpwi 7, 0, 0
  05f6f38  bt 30, 0x5f6f40
  05f6f3c  neg 29, 11
  05f6f40  clrldi 11, 3, 32
  05f6f44  addi 26, 10, -1
  05f6f48  slwi 9, 10, 1
  05f6f4c  cmpwi 7, 26, 0
  05f6f50  sth 29, 0(11)
  05f6f54  lwz 0, 48(24)
  05f6f58  add 9, 0, 9
  05f6f5c  stw 0, 0(24)
  05f6f60  stw 9, 4(24)
  05f6f64  bt 30, 0x5f6e68
  05f6f68  cmplwi 7, 31, 3
  05f6f6c  addi 25, 3, 2
  05f6f70  li 21, -1
  05f6f74  bt 29, 0x5f7084
  05f6f78  cmplw 7, 28, 22
  05f6f7c  bf 28, 0x5f6e58
  05f6f80  clrldi 11, 28, 32
  05f6f84  subfic 10, 31, 4
  05f6f88  addi 28, 28, 4
  05f6f8c  lwz 9, 0(11)
  05f6f90  slw 0, 9, 31
  05f6f94  addi 31, 31, 28
  05f6f98  or 0, 0, 30
  05f6f9c  srw 30, 9, 10
  05f6fa0  clrlwi 8, 0, 28
  05f6fa4  cmplwi 7, 26, 8
  05f6fa8  mr 27, 26
  05f6fac  bf 29, 0x5f6fb4
  05f6fb0  li 27, 8
  05f6fb4  cmpwi 7, 8, 0
  05f6fb8  bt 30, 0x5f7110
  05f6fbc  cmpwi 7, 27, 0
  05f6fc0  mr 0, 25
  05f6fc4  bt 30, 0x5f706c
  05f6fc8  subfic 0, 8, 32
  05f6fcc  mr 10, 25
  05f6fd0  srw 6, 21, 0
  05f6fd4  clrldi 0, 27, 32
  05f6fd8  mtctr 0
  05f6fdc  nop
  05f6fe0  cmplw 7, 8, 31
  05f6fe4  clrldi 11, 28, 32
  05f6fe8  clrldi 9, 30, 32
  05f6fec  bf 29, 0x5f7004
  05f6ff0  lwz 0, 0(11)
  05f6ff4  addi 28, 28, 4
  05f6ff8  sld 0, 0, 31
  05f6ffc  addi 31, 31, 32
  05f7000  or 9, 9, 0
  05f7004  and 7, 6, 9
  05f7008  sub 31, 31, 8
  05f700c  cmpwi 7, 7, 0
  05f7010  srd 30, 9, 8
  05f7014  cmpwi 6, 31, 0
  05f7018  mr 11, 7
  05f701c  bt 30, 0x5f7050
  05f7020  clrldi 9, 28, 32
  05f7024  addi 31, 31, -1
  05f7028  bf 26, 0x5f7038
  05f702c  addi 28, 28, 4
  05f7030  lwz 30, 0(9)
  05f7034  li 31, 31
  05f7038  clrlwi 0, 30, 31
  05f703c  srwi 30, 30, 1
  05f7040  cmpwi 7, 0, 0
  05f7044  bt 30, 0x5f7050
  05f7048  neg 11, 7
  05f704c  nop
  05f7050  clrldi 9, 10, 32
  05f7054  add 29, 29, 11
  05f7058  addi 10, 10, 2
  05f705c  sth 29, 0(9)
  05f7060  bdnz 0x5f6fe0
  05f7064  slwi 0, 27, 1
  05f7068  add 0, 0, 25
  05f706c  sub 26, 26, 27
  05f7070  cmpwi 7, 26, 0
  05f7074  bt 30, 0x5f6e68
  05f7078  cmplwi 7, 31, 3
  05f707c  mr 25, 0
  05f7080  bf 29, 0x5f6f78
  05f7084  clrlwi 8, 30, 28
  05f7088  addi 31, 31, -4
  05f708c  srwi 30, 30, 4
  05f7090  b 0x5f6fa4
  05f7094  clrldi 9, 28, 32
  05f7098  li 7, -1
  05f709c  addi 28, 28, 4
  05f70a0  lwz 0, 0(9)
  05f70a4  sld 0, 0, 8
  05f70a8  addi 8, 8, 32
  05f70ac  or 11, 11, 0
  05f70b0  subfic 0, 10, 32
  05f70b4  sub 31, 8, 10
  05f70b8  srw 0, 7, 0
  05f70bc  srd 30, 11, 10
  05f70c0  and 10, 0, 11
  05f70c4  cmpwi 10, 0
  05f70c8  bt 2, 0x5f6e58
  05f70cc  b 0x5f6eb0
  05f70d0  lwz 11, 8(24)
  05f70d4  clrldi 4, 30, 32
  05f70d8  cmplw 7, 31, 11
  05f70dc  bf 28, 0x5f70f8
  05f70e0  clrldi 9, 28, 32
  05f70e4  addi 28, 28, 4
  05f70e8  lwz 0, 0(9)
  05f70ec  sld 0, 0, 31
  05f70f0  addi 31, 31, 32
  05f70f4  or 4, 4, 0
  05f70f8  subfic 0, 11, 32
  05f70fc  sub 31, 31, 11
  05f7100  srw 0, 7, 0
  05f7104  srd 30, 4, 11
  05f7108  and 29, 0, 4
  05f710c  b 0x5f6f40
  05f7110  clrldi 3, 25, 32
  05f7114  clrldi 4, 29, 48
  05f7118  clrldi 5, 27, 32
  05f711c  bl 0x604088
  05f7120  nop
  05f7124  b 0x5f7064
  05f7128  clrldi 9, 28, 32
  05f712c  li 31, 31
  05f7130  addi 28, 28, 4
  05f7134  lwz 30, 0(9)
  05f7138  b 0x5f6f2c

FUN_005f7140:   # 0x5f7140, 0x1618 bytes
  05f7140  std 25, -56(1)
  05f7144  mr 25, 3
  05f7148  std 29, -24(1)
  05f714c  std 31, -8(1)
  05f7150  std 18, -112(1)
  05f7154  std 19, -104(1)
  05f7158  std 20, -96(1)
  05f715c  std 21, -88(1)
  05f7160  std 22, -80(1)
  05f7164  std 23, -72(1)
  05f7168  std 24, -64(1)
  05f716c  std 26, -48(1)
  05f7170  std 27, -40(1)
  05f7174  std 28, -32(1)
  05f7178  std 30, -16(1)
  05f717c  lwz 12, 8(25)
  05f7180  mr 3, 4
  05f7184  mr 31, 5
  05f7188  lwz 30, 4(25)
  05f718c  cmplwi 7, 12, 3
  05f7190  lwz 8, 0(25)
  05f7194  mr 29, 6
  05f7198  bt 29, 0x5f71b4
  05f719c  clrldi 9, 30, 32
  05f71a0  addi 30, 30, 4
  05f71a4  lwz 0, 0(9)
  05f71a8  sld 0, 0, 12
  05f71ac  addi 12, 12, 32
  05f71b0  or 8, 8, 0
  05f71b4  clrlwi 5, 8, 28
  05f71b8  lwz 9, -32144(2)
  05f71bc  rldicl 4, 8, 60, 4
  05f71c0  rlwinm 11, 5, 2, 26, 29
  05f71c4  extsw 10, 5
  05f71c8  add 11, 11, 9
  05f71cc  add 10, 10, 9
  05f71d0  addi 9, 9, 96
  05f71d4  cmpwi 7, 5, 0
  05f71d8  addi 7, 12, -4
  05f71dc  lwz 0, 32(11)
  05f71e0  lbz 8, 1072(10)
  05f71e4  add 0, 0, 9
  05f71e8  stw 0, 0(3)
  05f71ec  stw 8, 0(31)
  05f71f0  bf 30, 0x5f72b8
  05f71f4  li 0, 15
  05f71f8  li 9, 1
  05f71fc  stb 0, 15(6)
  05f7200  li 0, 2
  05f7204  stb 9, 1(6)
  05f7208  stb 0, 2(6)
  05f720c  li 9, 3
  05f7210  li 0, 4
  05f7214  stb 9, 3(6)
  05f7218  stb 0, 4(6)
  05f721c  li 9, 5
  05f7220  li 0, 6
  05f7224  stb 9, 5(6)
  05f7228  stb 0, 6(6)
  05f722c  li 9, 7
  05f7230  li 0, 8
  05f7234  stb 9, 7(6)
  05f7238  stb 0, 8(6)
  05f723c  li 9, 9
  05f7240  li 0, 10
  05f7244  stb 9, 9(6)
  05f7248  stb 0, 10(6)
  05f724c  li 9, 11
  05f7250  li 0, 12
  05f7254  stb 9, 11(6)
  05f7258  stb 0, 12(6)
  05f725c  li 9, 13
  05f7260  li 0, 14
  05f7264  stb 5, 0(6)
  05f7268  stb 9, 13(6)
  05f726c  stb 0, 14(6)
  05f7270  stw 7, 8(25)
  05f7274  stw 30, 4(25)
  05f7278  stw 4, 0(25)
  05f727c  ld 18, -112(1)
  05f7280  ld 19, -104(1)
  05f7284  ld 20, -96(1)
  05f7288  ld 21, -88(1)
  05f728c  ld 22, -80(1)
  05f7290  ld 23, -72(1)
  05f7294  ld 24, -64(1)
  05f7298  ld 25, -56(1)
  05f729c  ld 26, -48(1)
  05f72a0  ld 27, -40(1)
  05f72a4  ld 28, -32(1)
  05f72a8  ld 29, -24(1)
  05f72ac  ld 30, -16(1)
  05f72b0  ld 31, -8(1)
  05f72b4  blr
  05f72b8  cmpwi 7, 7, 0
  05f72bc  addi 8, 12, -5
  05f72c0  bt 30, 0x5f7620
  05f72c4  clrlwi 0, 4, 31
  05f72c8  srwi 9, 4, 1
  05f72cc  cmpwi 7, 0, 0
  05f72d0  bt 30, 0x5f7390
  05f72d4  cmplwi 7, 8, 2
  05f72d8  clrldi 11, 9, 32
  05f72dc  bf 29, 0x5f7840
  05f72e0  li 10, 0
  05f72e4  addi 7, 8, -3
  05f72e8  clrlwi 5, 11, 29
  05f72ec  ori 10, 10, 65535
  05f72f0  rldicl 4, 11, 61, 3
  05f72f4  li 8, 0
  05f72f8  li 31, 1
  05f72fc  nop
  05f7300  cmplwi 7, 7, 3
  05f7304  add 0, 8, 29
  05f7308  addi 8, 8, 1
  05f730c  clrldi 9, 30, 32
  05f7310  clrldi 6, 0, 32
  05f7314  cmplw 6, 5, 8
  05f7318  clrldi 11, 4, 32
  05f731c  bt 29, 0x5f7334
  05f7320  lwz 0, 0(9)
  05f7324  addi 30, 30, 4
  05f7328  sld 0, 0, 7
  05f732c  addi 7, 7, 32
  05f7330  or 11, 11, 0
  05f7334  clrlwi 9, 11, 28
  05f7338  addi 7, 7, -4
  05f733c  slw 0, 31, 9
  05f7340  rldicl 4, 11, 60, 4
  05f7344  stb 9, 0(6)
  05f7348  andc 10, 10, 0
  05f734c  bf 24, 0x5f7300
  05f7350  li 11, 0
  05f7354  nop
  05f7358  clrlwi 0, 10, 31
  05f735c  srwi 10, 10, 1
  05f7360  cmpwi 7, 0, 0
  05f7364  cmpwi 6, 10, 0
  05f7368  bt 30, 0x5f7384
  05f736c  addi 5, 5, 1
  05f7370  add 9, 5, 29
  05f7374  cmpwi 7, 5, 15
  05f7378  clrldi 9, 9, 32
  05f737c  stb 11, 0(9)
  05f7380  bt 30, 0x5f7270
  05f7384  addi 11, 11, 1
  05f7388  bf 26, 0x5f7358
  05f738c  b 0x5f7270
  05f7390  cmplwi 7, 8, 1
  05f7394  clrldi 11, 9, 32
  05f7398  bf 29, 0x5f785c
  05f739c  clrlwi 22, 11, 30
  05f73a0  rldicl 0, 11, 62, 2
  05f73a4  cmpwi 7, 22, 0
  05f73a8  addi 9, 8, -2
  05f73ac  bt 30, 0x5f7644
  05f73b0  cmpwi 7, 9, 0
  05f73b4  addi 10, 8, -3
  05f73b8  bf 30, 0x5f73cc
  05f73bc  clrldi 9, 30, 32
  05f73c0  li 10, 31
  05f73c4  addi 30, 30, 4
  05f73c8  lwz 0, 0(9)
  05f73cc  clrlwi 9, 0, 31
  05f73d0  srwi 11, 0, 1
  05f73d4  cmpwi 7, 9, 0
  05f73d8  bf 30, 0x5f7990
  05f73dc  li 0, 1
  05f73e0  stb 9, -128(1)
  05f73e4  stb 0, -127(1)
  05f73e8  cmpwi 7, 10, 0
  05f73ec  addi 10, 10, -1
  05f73f0  bf 30, 0x5f7404
  05f73f4  clrldi 9, 30, 32
  05f73f8  li 10, 31
  05f73fc  addi 30, 30, 4
  05f7400  lwz 11, 0(9)
  05f7404  clrlwi 0, 11, 31
  05f7408  srwi 11, 11, 1
  05f740c  cmpwi 7, 0, 0
  05f7410  bf 30, 0x5f797c
  05f7414  li 0, 2
  05f7418  li 9, 3
  05f741c  stb 0, -126(1)
  05f7420  stb 9, -125(1)
  05f7424  cmpwi 7, 10, 0
  05f7428  addi 10, 10, -1
  05f742c  bf 30, 0x5f7440
  05f7430  clrldi 9, 30, 32
  05f7434  li 10, 31
  05f7438  addi 30, 30, 4
  05f743c  lwz 11, 0(9)
  05f7440  clrlwi 0, 11, 31
  05f7444  srwi 11, 11, 1
  05f7448  cmpwi 7, 0, 0
  05f744c  bf 30, 0x5f7968
  05f7450  li 0, 4
  05f7454  li 9, 5
  05f7458  stb 0, -124(1)
  05f745c  stb 9, -123(1)
  05f7460  cmpwi 7, 10, 0
  05f7464  addi 10, 10, -1
  05f7468  bf 30, 0x5f747c
  05f746c  clrldi 9, 30, 32
  05f7470  li 10, 31
  05f7474  addi 30, 30, 4
  05f7478  lwz 11, 0(9)
  05f747c  clrlwi 0, 11, 31
  05f7480  srwi 11, 11, 1
  05f7484  cmpwi 7, 0, 0
  05f7488  bf 30, 0x5f7954
  05f748c  li 0, 6
  05f7490  li 9, 7
  05f7494  stb 0, -122(1)
  05f7498  stb 9, -121(1)
  05f749c  cmpwi 7, 10, 0
  05f74a0  addi 10, 10, -1
  05f74a4  bf 30, 0x5f74b8
  05f74a8  clrldi 9, 30, 32
  05f74ac  li 10, 31
  05f74b0  addi 30, 30, 4
  05f74b4  lwz 11, 0(9)
  05f74b8  clrlwi 0, 11, 31
  05f74bc  srwi 11, 11, 1
  05f74c0  cmpwi 7, 0, 0
  05f74c4  bf 30, 0x5f7940
  05f74c8  li 0, 8
  05f74cc  li 9, 9
  05f74d0  stb 0, -120(1)
  05f74d4  stb 9, -119(1)
  05f74d8  cmpwi 7, 10, 0
  05f74dc  addi 10, 10, -1
  05f74e0  bf 30, 0x5f74f4
  05f74e4  clrldi 9, 30, 32
  05f74e8  li 10, 31
  05f74ec  addi 30, 30, 4
  05f74f0  lwz 11, 0(9)
  05f74f4  clrlwi 0, 11, 31
  05f74f8  srwi 11, 11, 1
  05f74fc  cmpwi 7, 0, 0
  05f7500  bf 30, 0x5f792c
  05f7504  li 0, 10
  05f7508  li 9, 11
  05f750c  stb 0, -118(1)
  05f7510  stb 9, -117(1)
  05f7514  cmpwi 7, 10, 0
  05f7518  addi 10, 10, -1
  05f751c  bf 30, 0x5f7530
  05f7520  clrldi 9, 30, 32
  05f7524  li 10, 31
  05f7528  addi 30, 30, 4
  05f752c  lwz 11, 0(9)
  05f7530  clrlwi 0, 11, 31
  05f7534  srwi 11, 11, 1
  05f7538  cmpwi 7, 0, 0
  05f753c  bf 30, 0x5f7878
  05f7540  li 0, 12
  05f7544  li 9, 13
  05f7548  stb 0, -116(1)
  05f754c  stb 9, -115(1)
  05f7550  cmpwi 7, 10, 0
  05f7554  addi 27, 10, -1
  05f7558  bf 30, 0x5f756c
  05f755c  clrldi 9, 30, 32
  05f7560  li 27, 31
  05f7564  addi 30, 30, 4
  05f7568  lwz 11, 0(9)
  05f756c  clrlwi 0, 11, 31
  05f7570  srwi 28, 11, 1
  05f7574  cmpwi 7, 0, 0
  05f7578  bt 30, 0x5f788c
  05f757c  li 0, 15
  05f7580  li 9, 14
  05f7584  stb 0, -114(1)
  05f7588  stb 9, -113(1)
  05f758c  cmpwi 7, 22, 1
  05f7590  bt 30, 0x5f7fd4
  05f7594  cmplwi 7, 27, 2
  05f7598  clrlwi 7, 28, 29
  05f759c  bf 29, 0x5f7cd8
  05f75a0  addi 19, 1, -144
  05f75a4  addi 18, 1, -128
  05f75a8  mr 10, 19
  05f75ac  mr 8, 18
  05f75b0  addi 3, 1, -126
  05f75b4  li 31, 2
  05f75b8  li 12, 2
  05f75bc  li 4, 0
  05f75c0  b 0x5f75ec
  05f75c4  lbz 0, 0(6)
  05f75c8  addi 10, 10, 1
  05f75cc  addi 3, 3, 1
  05f75d0  addi 12, 12, -1
  05f75d4  stb 0, 0(5)
  05f75d8  cmpwi 7, 31, 0
  05f75dc  srwi 7, 7, 1
  05f75e0  cmpwi 6, 12, 0
  05f75e4  bt 30, 0x5f8068
  05f75e8  bt 26, 0x5f79d4
  05f75ec  clrlwi 0, 7, 31
  05f75f0  clrldi 6, 3, 32
  05f75f4  cmpwi 7, 0, 0
  05f75f8  clrldi 11, 8, 32
  05f75fc  clrldi 5, 10, 32
  05f7600  addi 4, 4, 1
  05f7604  bf 30, 0x5f75c4
  05f7608  lbz 0, 0(11)
  05f760c  addi 31, 31, -1
  05f7610  addi 10, 10, 1
  05f7614  addi 8, 8, 1
  05f7618  stb 0, 0(5)
  05f761c  b 0x5f75d8
  05f7620  clrldi 9, 30, 32
  05f7624  li 8, 31
  05f7628  addi 30, 30, 4
  05f762c  lwz 4, 0(9)
  05f7630  clrlwi 0, 4, 31
  05f7634  srwi 9, 4, 1
  05f7638  cmpwi 7, 0, 0
  05f763c  bf 30, 0x5f72d4
  05f7640  b 0x5f7390
  05f7644  cmpwi 7, 9, 0
  05f7648  addi 10, 8, -3
  05f764c  bf 30, 0x5f7660
  05f7650  clrldi 9, 30, 32
  05f7654  li 10, 31
  05f7658  addi 30, 30, 4
  05f765c  lwz 0, 0(9)
  05f7660  clrlwi 9, 0, 31
  05f7664  srwi 11, 0, 1
  05f7668  cmpwi 7, 9, 0
  05f766c  bf 30, 0x5f78a0
  05f7670  li 0, 1
  05f7674  stb 9, 0(6)
  05f7678  stb 0, 1(6)
  05f767c  cmpwi 7, 10, 0
  05f7680  addi 8, 10, -1
  05f7684  bf 30, 0x5f7698
  05f7688  clrldi 9, 30, 32
  05f768c  li 8, 31
  05f7690  addi 30, 30, 4
  05f7694  lwz 11, 0(9)
  05f7698  clrlwi 0, 11, 31
  05f769c  srwi 10, 11, 1
  05f76a0  cmpwi 7, 0, 0
  05f76a4  bf 30, 0x5f7914
  05f76a8  mr 11, 29
  05f76ac  li 0, 2
  05f76b0  li 9, 3
  05f76b4  stbu 0, 2(11)
  05f76b8  stb 9, 1(11)
  05f76bc  cmpwi 7, 8, 0
  05f76c0  addi 8, 8, -1
  05f76c4  bf 30, 0x5f76d8
  05f76c8  clrldi 9, 30, 32
  05f76cc  li 8, 31
  05f76d0  addi 30, 30, 4
  05f76d4  lwz 10, 0(9)
  05f76d8  clrlwi 0, 10, 31
  05f76dc  srwi 10, 10, 1
  05f76e0  cmpwi 7, 0, 0
  05f76e4  bf 30, 0x5f78fc
  05f76e8  mr 11, 29
  05f76ec  li 0, 4
  05f76f0  li 9, 5
  05f76f4  stbu 0, 4(11)
  05f76f8  stb 9, 1(11)
  05f76fc  cmpwi 7, 8, 0
  05f7700  addi 8, 8, -1
  05f7704  bf 30, 0x5f7718
  05f7708  clrldi 9, 30, 32
  05f770c  li 8, 31
  05f7710  addi 30, 30, 4
  05f7714  lwz 10, 0(9)
  05f7718  clrlwi 0, 10, 31
  05f771c  srwi 10, 10, 1
  05f7720  cmpwi 7, 0, 0
  05f7724  bf 30, 0x5f78e4
  05f7728  mr 11, 29
  05f772c  li 0, 6
  05f7730  li 9, 7
  05f7734  stbu 0, 6(11)
  05f7738  stb 9, 1(11)
  05f773c  cmpwi 7, 8, 0
  05f7740  addi 8, 8, -1
  05f7744  bf 30, 0x5f7758
  05f7748  clrldi 9, 30, 32
  05f774c  li 8, 31
  05f7750  addi 30, 30, 4
  05f7754  lwz 10, 0(9)
  05f7758  clrlwi 0, 10, 31
  05f775c  srwi 10, 10, 1
  05f7760  cmpwi 7, 0, 0
  05f7764  bf 30, 0x5f78cc
  05f7768  mr 11, 29
  05f776c  li 0, 8
  05f7770  li 9, 9
  05f7774  stbu 0, 8(11)
  05f7778  stb 9, 1(11)
  05f777c  cmpwi 7, 8, 0
  05f7780  addi 8, 8, -1
  05f7784  bf 30, 0x5f7798
  05f7788  clrldi 9, 30, 32
  05f778c  li 8, 31
  05f7790  addi 30, 30, 4
  05f7794  lwz 10, 0(9)
  05f7798  clrlwi 0, 10, 31
  05f779c  srwi 10, 10, 1
  05f77a0  cmpwi 7, 0, 0
  05f77a4  bf 30, 0x5f79bc
  05f77a8  mr 11, 29
  05f77ac  li 0, 10
  05f77b0  li 9, 11
  05f77b4  stbu 0, 10(11)
  05f77b8  stb 9, 1(11)
  05f77bc  cmpwi 7, 8, 0
  05f77c0  addi 8, 8, -1
  05f77c4  bf 30, 0x5f77d8
  05f77c8  clrldi 9, 30, 32
  05f77cc  li 8, 31
  05f77d0  addi 30, 30, 4
  05f77d4  lwz 10, 0(9)
  05f77d8  clrlwi 0, 10, 31
  05f77dc  srwi 10, 10, 1
  05f77e0  cmpwi 7, 0, 0
  05f77e4  bf 30, 0x5f79a4
  05f77e8  mr 11, 29
  05f77ec  li 0, 12
  05f77f0  li 9, 13
  05f77f4  stbu 0, 12(11)
  05f77f8  stb 9, 1(11)
  05f77fc  cmpwi 7, 8, 0
  05f7800  addi 7, 8, -1
  05f7804  bf 30, 0x5f7818
  05f7808  clrldi 9, 30, 32
  05f780c  li 7, 31
  05f7810  addi 30, 30, 4
  05f7814  lwz 10, 0(9)
  05f7818  clrlwi 0, 10, 31
  05f781c  srwi 4, 10, 1
  05f7820  cmpwi 7, 0, 0
  05f7824  bt 30, 0x5f78b4
  05f7828  mr 11, 29
  05f782c  li 0, 15
  05f7830  li 9, 14
  05f7834  stbu 0, 14(11)
  05f7838  stb 9, 1(11)
  05f783c  b 0x5f7270
  05f7840  clrldi 9, 30, 32
  05f7844  addi 30, 30, 4
  05f7848  lwz 0, 0(9)
  05f784c  sld 0, 0, 8
  05f7850  addi 8, 8, 32
  05f7854  or 11, 11, 0
  05f7858  b 0x5f72e0
  05f785c  clrldi 9, 30, 32
  05f7860  addi 30, 30, 4
  05f7864  lwz 0, 0(9)
  05f7868  sld 0, 0, 8
  05f786c  addi 8, 8, 32
  05f7870  or 11, 11, 0
  05f7874  b 0x5f739c
  05f7878  li 0, 13
  05f787c  li 9, 12
  05f7880  stb 0, -116(1)
  05f7884  stb 9, -115(1)
  05f7888  b 0x5f7550
  05f788c  li 0, 14
  05f7890  li 9, 15
  05f7894  stb 0, -114(1)
  05f7898  stb 9, -113(1)
  05f789c  b 0x5f758c
  05f78a0  li 0, 1
  05f78a4  li 9, 0
  05f78a8  stb 0, 0(6)
  05f78ac  stb 9, 1(6)
  05f78b0  b 0x5f767c
  05f78b4  mr 11, 29
  05f78b8  li 0, 14
  05f78bc  li 9, 15
  05f78c0  stbu 0, 14(11)
  05f78c4  stb 9, 1(11)
  05f78c8  b 0x5f7270
  05f78cc  mr 11, 29
  05f78d0  li 0, 9
  05f78d4  li 9, 8
  05f78d8  stbu 0, 8(11)
  05f78dc  stb 9, 1(11)
  05f78e0  b 0x5f777c
  05f78e4  mr 11, 29
  05f78e8  li 0, 7
  05f78ec  li 9, 6
  05f78f0  stbu 0, 6(11)
  05f78f4  stb 9, 1(11)
  05f78f8  b 0x5f773c
  05f78fc  mr 11, 29
  05f7900  li 0, 5
  05f7904  li 9, 4
  05f7908  stbu 0, 4(11)
  05f790c  stb 9, 1(11)
  05f7910  b 0x5f76fc
  05f7914  mr 11, 29
  05f7918  li 0, 3
  05f791c  li 9, 2
  05f7920  stbu 0, 2(11)
  05f7924  stb 9, 1(11)
  05f7928  b 0x5f76bc
  05f792c  li 0, 11
  05f7930  li 9, 10
  05f7934  stb 0, -118(1)
  05f7938  stb 9, -117(1)
  05f793c  b 0x5f7514
  05f7940  li 0, 9
  05f7944  li 9, 8
  05f7948  stb 0, -120(1)
  05f794c  stb 9, -119(1)
  05f7950  b 0x5f74d8
  05f7954  li 0, 7
  05f7958  li 9, 6
  05f795c  stb 0, -122(1)
  05f7960  stb 9, -121(1)
  05f7964  b 0x5f749c
  05f7968  li 0, 5
  05f796c  li 9, 4
  05f7970  stb 0, -124(1)
  05f7974  stb 9, -123(1)
  05f7978  b 0x5f7460
  05f797c  li 0, 3
  05f7980  li 9, 2
  05f7984  stb 0, -126(1)
  05f7988  stb 9, -125(1)
  05f798c  b 0x5f7424
  05f7990  li 0, 1
  05f7994  li 9, 0
  05f7998  stb 0, -128(1)
  05f799c  stb 9, -127(1)
  05f79a0  b 0x5f73e8
  05f79a4  mr 11, 29
  05f79a8  li 0, 13
  05f79ac  li 9, 12
  05f79b0  stbu 0, 12(11)
  05f79b4  stb 9, 1(11)
  05f79b8  b 0x5f77fc
  05f79bc  mr 11, 29
  05f79c0  li 0, 11
  05f79c4  li 9, 10
  05f79c8  stbu 0, 10(11)
  05f79cc  stb 9, 1(11)
  05f79d0  b 0x5f77bc
  05f79d4  clrldi 31, 31, 32
  05f79d8  mtctr 31
  05f79dc  nop
  05f79e0  clrldi 9, 8, 32
  05f79e4  clrldi 11, 10, 32
  05f79e8  addi 8, 8, 1
  05f79ec  addi 10, 10, 1
  05f79f0  lbz 0, 0(9)
  05f79f4  stb 0, 0(11)
  05f79f8  bdnz 0x5f79e0
  05f79fc  cmplw 7, 27, 4
  05f7a00  srw 26, 28, 4
  05f7a04  sub 28, 27, 4
  05f7a08  bt 28, 0x5f7d8c
  05f7a0c  cmplwi 7, 28, 2
  05f7a10  clrlwi 8, 26, 29
  05f7a14  bf 29, 0x5f7d74
  05f7a18  addi 24, 1, -140
  05f7a1c  addi 5, 1, -124
  05f7a20  mr 10, 24
  05f7a24  addi 3, 1, -122
  05f7a28  li 31, 2
  05f7a2c  li 12, 2
  05f7a30  li 4, 0
  05f7a34  b 0x5f7a60
  05f7a38  lbz 0, 0(7)
  05f7a3c  addi 10, 10, 1
  05f7a40  addi 3, 3, 1
  05f7a44  addi 12, 12, -1
  05f7a48  stb 0, 0(6)
  05f7a4c  cmpwi 7, 31, 0
  05f7a50  srwi 8, 8, 1
  05f7a54  cmpwi 6, 12, 0
  05f7a58  bt 30, 0x5f80f8
  05f7a5c  bt 26, 0x5f7a94
  05f7a60  clrlwi 0, 8, 31
  05f7a64  clrldi 7, 3, 32
  05f7a68  cmpwi 7, 0, 0
  05f7a6c  clrldi 11, 5, 32
  05f7a70  clrldi 6, 10, 32
  05f7a74  addi 4, 4, 1
  05f7a78  bf 30, 0x5f7a38
  05f7a7c  lbz 0, 0(11)
  05f7a80  addi 31, 31, -1
  05f7a84  addi 10, 10, 1
  05f7a88  addi 5, 5, 1
  05f7a8c  stb 0, 0(6)
  05f7a90  b 0x5f7a4c
  05f7a94  clrldi 31, 31, 32
  05f7a98  mtctr 31
  05f7a9c  nop
  05f7aa0  clrldi 9, 5, 32
  05f7aa4  clrldi 11, 10, 32
  05f7aa8  addi 5, 5, 1
  05f7aac  addi 10, 10, 1
  05f7ab0  lbz 0, 0(9)
  05f7ab4  stb 0, 0(11)
  05f7ab8  bdnz 0x5f7aa0
  05f7abc  cmplw 7, 28, 4
  05f7ac0  srw 26, 26, 4
  05f7ac4  sub 27, 28, 4
  05f7ac8  bt 28, 0x5f7d58
  05f7acc  cmplwi 7, 27, 2
  05f7ad0  clrlwi 7, 26, 29
  05f7ad4  bf 29, 0x5f7d40
  05f7ad8  addi 20, 1, -136
  05f7adc  addi 21, 1, -120
  05f7ae0  mr 10, 20
  05f7ae4  mr 8, 21
  05f7ae8  addi 3, 1, -118
  05f7aec  li 31, 2
  05f7af0  li 12, 2
  05f7af4  li 4, 0
  05f7af8  b 0x5f7b24
  05f7afc  lbz 0, 0(6)
  05f7b00  addi 10, 10, 1
  05f7b04  addi 3, 3, 1
  05f7b08  addi 12, 12, -1
  05f7b0c  stb 0, 0(5)
  05f7b10  cmpwi 7, 31, 0
  05f7b14  srwi 7, 7, 1
  05f7b18  cmpwi 6, 12, 0
  05f7b1c  bt 30, 0x5f80c8
  05f7b20  bt 26, 0x5f7b58
  05f7b24  clrlwi 0, 7, 31
  05f7b28  clrldi 6, 3, 32
  05f7b2c  cmpwi 7, 0, 0
  05f7b30  clrldi 11, 8, 32
  05f7b34  clrldi 5, 10, 32
  05f7b38  addi 4, 4, 1
  05f7b3c  bf 30, 0x5f7afc
  05f7b40  lbz 0, 0(11)
  05f7b44  addi 31, 31, -1
  05f7b48  addi 10, 10, 1
  05f7b4c  addi 8, 8, 1
  05f7b50  stb 0, 0(5)
  05f7b54  b 0x5f7b10
  05f7b58  clrldi 31, 31, 32
  05f7b5c  mtctr 31
  05f7b60  clrldi 9, 8, 32
  05f7b64  clrldi 11, 10, 32
  05f7b68  addi 8, 8, 1
  05f7b6c  addi 10, 10, 1
  05f7b70  lbz 0, 0(9)
  05f7b74  stb 0, 0(11)
  05f7b78  bdnz 0x5f7b60
  05f7b7c  cmplw 7, 27, 4
  05f7b80  srw 26, 26, 4
  05f7b84  sub 28, 27, 4
  05f7b88  bt 28, 0x5f7d24
  05f7b8c  cmplwi 7, 28, 2
  05f7b90  clrlwi 8, 26, 29
  05f7b94  bf 29, 0x5f7d0c
  05f7b98  addi 23, 1, -132
  05f7b9c  addi 5, 1, -116
  05f7ba0  mr 10, 23
  05f7ba4  addi 3, 1, -114
  05f7ba8  li 31, 2
  05f7bac  li 12, 2
  05f7bb0  li 4, 0
  05f7bb4  b 0x5f7be0
  05f7bb8  lbz 0, 0(7)
  05f7bbc  addi 10, 10, 1
  05f7bc0  addi 3, 3, 1
  05f7bc4  addi 12, 12, -1
  05f7bc8  stb 0, 0(6)
  05f7bcc  cmpwi 7, 31, 0
  05f7bd0  srwi 8, 8, 1
  05f7bd4  cmpwi 6, 12, 0
  05f7bd8  bt 30, 0x5f8098
  05f7bdc  bt 26, 0x5f7c14
  05f7be0  clrlwi 0, 8, 31
  05f7be4  clrldi 7, 3, 32
  05f7be8  cmpwi 7, 0, 0
  05f7bec  clrldi 11, 5, 32
  05f7bf0  clrldi 6, 10, 32
  05f7bf4  addi 4, 4, 1
  05f7bf8  bf 30, 0x5f7bb8
  05f7bfc  lbz 0, 0(11)
  05f7c00  addi 31, 31, -1
  05f7c04  addi 10, 10, 1
  05f7c08  addi 5, 5, 1
  05f7c0c  stb 0, 0(6)
  05f7c10  b 0x5f7bcc
  05f7c14  clrldi 31, 31, 32
  05f7c18  mtctr 31
  05f7c1c  nop
  05f7c20  clrldi 9, 5, 32
  05f7c24  clrldi 11, 10, 32
  05f7c28  addi 5, 5, 1
  05f7c2c  addi 10, 10, 1
  05f7c30  lbz 0, 0(9)
  05f7c34  stb 0, 0(11)
  05f7c38  bdnz 0x5f7c20
  05f7c3c  cmplw 7, 28, 4
  05f7c40  srw 27, 26, 4
  05f7c44  sub 26, 28, 4
  05f7c48  bt 28, 0x5f7cf0
  05f7c4c  cmpwi 7, 22, 2
  05f7c50  bt 30, 0x5f8128
  05f7c54  cmplwi 7, 26, 6
  05f7c58  clrlwi 7, 27, 25
  05f7c5c  bf 29, 0x5f7da8
  05f7c60  mr 8, 19
  05f7c64  mr 4, 24
  05f7c68  mr 10, 18
  05f7c6c  li 12, 4
  05f7c70  li 3, 4
  05f7c74  li 31, 0
  05f7c78  b 0x5f7ca4
  05f7c7c  lbz 0, 0(6)
  05f7c80  addi 10, 10, 1
  05f7c84  addi 4, 4, 1
  05f7c88  addi 3, 3, -1
  05f7c8c  stb 0, 0(5)
  05f7c90  cmpwi 7, 12, 0
  05f7c94  srwi 7, 7, 1
  05f7c98  cmpwi 6, 3, 0
  05f7c9c  bt 30, 0x5f849c
  05f7ca0  bt 26, 0x5f7dc0
  05f7ca4  clrlwi 0, 7, 31
  05f7ca8  clrldi 6, 4, 32
  05f7cac  cmpwi 7, 0, 0
  05f7cb0  clrldi 11, 8, 32
  05f7cb4  clrldi 5, 10, 32
  05f7cb8  addi 31, 31, 1
  05f7cbc  bf 30, 0x5f7c7c
  05f7cc0  lbz 0, 0(11)
  05f7cc4  addi 12, 12, -1
  05f7cc8  addi 10, 10, 1
  05f7ccc  addi 8, 8, 1
  05f7cd0  stb 0, 0(5)
  05f7cd4  b 0x5f7c90
  05f7cd8  clrldi 9, 30, 32
  05f7cdc  lwz 0, 0(9)
  05f7ce0  slw 0, 0, 27
  05f7ce4  or 0, 0, 28
  05f7ce8  clrlwi 7, 0, 29
  05f7cec  b 0x5f75a0
  05f7cf0  clrldi 10, 30, 32
  05f7cf4  sub 11, 4, 28
  05f7cf8  addi 26, 26, 32
  05f7cfc  addi 30, 30, 4
  05f7d00  lwz 0, 0(10)
  05f7d04  srw 27, 0, 11
  05f7d08  b 0x5f7c4c
  05f7d0c  clrldi 9, 30, 32
  05f7d10  lwz 0, 0(9)
  05f7d14  slw 0, 0, 28
  05f7d18  or 0, 26, 0
  05f7d1c  clrlwi 8, 0, 29
  05f7d20  b 0x5f7b98
  05f7d24  clrldi 10, 30, 32
  05f7d28  sub 11, 4, 27
  05f7d2c  addi 28, 28, 32
  05f7d30  addi 30, 30, 4
  05f7d34  lwz 0, 0(10)
  05f7d38  srw 26, 0, 11
  05f7d3c  b 0x5f7b8c
  05f7d40  clrldi 9, 30, 32
  05f7d44  lwz 0, 0(9)
  05f7d48  slw 0, 0, 27
  05f7d4c  or 0, 26, 0
  05f7d50  clrlwi 7, 0, 29
  05f7d54  b 0x5f7ad8
  05f7d58  clrldi 10, 30, 32
  05f7d5c  sub 11, 4, 28
  05f7d60  addi 27, 27, 32
  05f7d64  addi 30, 30, 4
  05f7d68  lwz 0, 0(10)
  05f7d6c  srw 26, 0, 11
  05f7d70  b 0x5f7acc
  05f7d74  clrldi 9, 30, 32
  05f7d78  lwz 0, 0(9)
  05f7d7c  slw 0, 0, 28
  05f7d80  or 0, 26, 0
  05f7d84  clrlwi 8, 0, 29
  05f7d88  b 0x5f7a18
  05f7d8c  clrldi 10, 30, 32
  05f7d90  sub 11, 4, 27
  05f7d94  addi 28, 28, 32
  05f7d98  addi 30, 30, 4
  05f7d9c  lwz 0, 0(10)
  05f7da0  srw 26, 0, 11
  05f7da4  b 0x5f7a0c
  05f7da8  clrldi 9, 30, 32
  05f7dac  lwz 0, 0(9)
  05f7db0  slw 0, 0, 26
  05f7db4  or 0, 27, 0
  05f7db8  clrlwi 7, 0, 25
  05f7dbc  b 0x5f7c60
  05f7dc0  clrldi 12, 12, 32
  05f7dc4  mtctr 12
  05f7dc8  clrldi 9, 8, 32
  05f7dcc  clrldi 11, 10, 32
  05f7dd0  addi 8, 8, 1
  05f7dd4  addi 10, 10, 1
  05f7dd8  lbz 0, 0(9)
  05f7ddc  stb 0, 0(11)
  05f7de0  bdnz 0x5f7dc8
  05f7de4  cmplw 7, 26, 31
  05f7de8  srw 28, 27, 31
  05f7dec  sub 27, 26, 31
  05f7df0  bf 28, 0x5f7e0c
  05f7df4  clrldi 10, 30, 32
  05f7df8  sub 11, 31, 26
  05f7dfc  addi 27, 27, 32
  05f7e00  addi 30, 30, 4
  05f7e04  lwz 0, 0(10)
  05f7e08  srw 28, 0, 11
  05f7e0c  cmplwi 7, 27, 6
  05f7e10  clrlwi 7, 28, 25
  05f7e14  bt 29, 0x5f7e2c
  05f7e18  clrldi 9, 30, 32
  05f7e1c  lwz 0, 0(9)
  05f7e20  slw 0, 0, 27
  05f7e24  or 0, 28, 0
  05f7e28  clrlwi 7, 0, 25
  05f7e2c  mr 8, 20
  05f7e30  mr 4, 23
  05f7e34  li 12, 4
  05f7e38  li 3, 4
  05f7e3c  li 31, 0
  05f7e40  mr 10, 21
  05f7e44  b 0x5f7e70
  05f7e48  lbz 0, 0(6)
  05f7e4c  addi 10, 10, 1
  05f7e50  addi 4, 4, 1
  05f7e54  addi 3, 3, -1
  05f7e58  stb 0, 0(5)
  05f7e5c  cmpwi 7, 12, 0
  05f7e60  srwi 7, 7, 1
  05f7e64  cmpwi 6, 3, 0
  05f7e68  bt 30, 0x5f84f8
  05f7e6c  bt 26, 0x5f7ea4
  05f7e70  clrlwi 0, 7, 31
  05f7e74  clrldi 6, 4, 32
  05f7e78  cmpwi 7, 0, 0
  05f7e7c  clrldi 11, 8, 32
  05f7e80  clrldi 5, 10, 32
  05f7e84  addi 31, 31, 1
  05f7e88  bf 30, 0x5f7e48
  05f7e8c  lbz 0, 0(11)
  05f7e90  addi 12, 12, -1
  05f7e94  addi 10, 10, 1
  05f7e98  addi 8, 8, 1
  05f7e9c  stb 0, 0(5)
  05f7ea0  b 0x5f7e5c
  05f7ea4  clrldi 12, 12, 32
  05f7ea8  mtctr 12
  05f7eac  nop
  05f7eb0  clrldi 9, 8, 32
  05f7eb4  clrldi 11, 10, 32
  05f7eb8  addi 8, 8, 1
  05f7ebc  addi 10, 10, 1
  05f7ec0  lbz 0, 0(9)
  05f7ec4  stb 0, 0(11)
  05f7ec8  bdnz 0x5f7eb0
  05f7ecc  cmplw 7, 27, 31
  05f7ed0  srw 3, 28, 31
  05f7ed4  sub 28, 27, 31
  05f7ed8  bf 28, 0x5f7ef4
  05f7edc  clrldi 10, 30, 32
  05f7ee0  sub 11, 31, 27
  05f7ee4  addi 28, 28, 32
  05f7ee8  addi 30, 30, 4
  05f7eec  lwz 0, 0(10)
  05f7ef0  srw 3, 0, 11
  05f7ef4  cmplwi 7, 28, 14
  05f7ef8  clrlwi 7, 3, 17
  05f7efc  bt 29, 0x5f7f14
  05f7f00  clrldi 9, 30, 32
  05f7f04  lwz 0, 0(9)
  05f7f08  slw 0, 0, 28
  05f7f0c  or 0, 3, 0
  05f7f10  clrlwi 7, 0, 17
  05f7f14  mr 11, 29
  05f7f18  mr 10, 18
  05f7f1c  mr 6, 21
  05f7f20  li 4, 8
  05f7f24  li 31, 8
  05f7f28  li 5, 0
  05f7f2c  b 0x5f7f58
  05f7f30  lbz 0, 0(8)
  05f7f34  addi 6, 6, 1
  05f7f38  addi 31, 31, -1
  05f7f3c  stb 0, 0(11)
  05f7f40  addi 11, 11, 1
  05f7f44  cmpwi 7, 4, 0
  05f7f48  srwi 7, 7, 1
  05f7f4c  cmpwi 6, 31, 0
  05f7f50  bt 30, 0x5f84cc
  05f7f54  bt 26, 0x5f7f88
  05f7f58  clrlwi 0, 7, 31
  05f7f5c  clrldi 8, 6, 32
  05f7f60  cmpwi 7, 0, 0
  05f7f64  clrldi 9, 10, 32
  05f7f68  addi 5, 5, 1
  05f7f6c  bf 30, 0x5f7f30
  05f7f70  lbz 0, 0(9)
  05f7f74  addi 4, 4, -1
  05f7f78  addi 10, 10, 1
  05f7f7c  stb 0, 0(11)
  05f7f80  addi 11, 11, 1
  05f7f84  b 0x5f7f44
  05f7f88  clrldi 4, 4, 32
  05f7f8c  mtctr 4
  05f7f90  clrldi 9, 10, 32
  05f7f94  addi 10, 10, 1
  05f7f98  lbz 0, 0(9)
  05f7f9c  stb 0, 0(11)
  05f7fa0  addi 11, 11, 1
  05f7fa4  bdnz 0x5f7f90
  05f7fa8  cmplw 7, 28, 5
  05f7fac  srw 4, 3, 5
  05f7fb0  sub 7, 28, 5
  05f7fb4  bf 28, 0x5f7270
  05f7fb8  clrldi 10, 30, 32
  05f7fbc  sub 11, 5, 28
  05f7fc0  addi 7, 7, 32
  05f7fc4  addi 30, 30, 4
  05f7fc8  lwz 0, 0(10)
  05f7fcc  srw 4, 0, 11
  05f7fd0  b 0x5f7270
  05f7fd4  cmplwi 7, 27, 2
  05f7fd8  clrlwi 7, 28, 29
  05f7fdc  bt 29, 0x5f7ff4
  05f7fe0  clrldi 9, 30, 32
  05f7fe4  lwz 0, 0(9)
  05f7fe8  slw 0, 0, 27
  05f7fec  or 0, 0, 28
  05f7ff0  clrlwi 7, 0, 29
  05f7ff4  mr 10, 29
  05f7ff8  addi 6, 1, -128
  05f7ffc  addi 31, 1, -126
  05f8000  li 5, 2
  05f8004  li 4, 2
  05f8008  li 11, 0
  05f800c  b 0x5f8038
  05f8010  lbz 0, 0(8)
  05f8014  addi 31, 31, 1
  05f8018  addi 4, 4, -1
  05f801c  stb 0, 0(10)
  05f8020  addi 10, 10, 1
  05f8024  cmpwi 7, 5, 0
  05f8028  srwi 7, 7, 1
  05f802c  cmpwi 6, 4, 0
  05f8030  bt 30, 0x5f867c
  05f8034  bt 26, 0x5f81bc
  05f8038  clrlwi 0, 7, 31
  05f803c  clrldi 8, 31, 32
  05f8040  cmpwi 7, 0, 0
  05f8044  clrldi 9, 6, 32
  05f8048  addi 11, 11, 1
  05f804c  bf 30, 0x5f8010
  05f8050  lbz 0, 0(9)
  05f8054  addi 5, 5, -1
  05f8058  addi 6, 6, 1
  05f805c  stb 0, 0(10)
  05f8060  addi 10, 10, 1
  05f8064  b 0x5f8024
  05f8068  cmpwi 7, 12, 0
  05f806c  bt 30, 0x5f79fc
  05f8070  clrldi 12, 12, 32
  05f8074  mtctr 12
  05f8078  clrldi 9, 3, 32
  05f807c  clrldi 11, 10, 32
  05f8080  addi 3, 3, 1
  05f8084  addi 10, 10, 1
  05f8088  lbz 0, 0(9)
  05f808c  stb 0, 0(11)
  05f8090  bdnz 0x5f8078
  05f8094  b 0x5f79fc
  05f8098  cmpwi 7, 12, 0
  05f809c  bt 30, 0x5f7c3c
  05f80a0  clrldi 12, 12, 32
  05f80a4  mtctr 12
  05f80a8  clrldi 9, 3, 32
  05f80ac  clrldi 11, 10, 32
  05f80b0  addi 3, 3, 1
  05f80b4  addi 10, 10, 1
  05f80b8  lbz 0, 0(9)
  05f80bc  stb 0, 0(11)
  05f80c0  bdnz 0x5f80a8
  05f80c4  b 0x5f7c3c
  05f80c8  cmpwi 7, 12, 0
  05f80cc  bt 30, 0x5f7b7c
  05f80d0  clrldi 12, 12, 32
  05f80d4  mtctr 12
  05f80d8  clrldi 9, 3, 32
  05f80dc  clrldi 11, 10, 32
  05f80e0  addi 3, 3, 1
  05f80e4  addi 10, 10, 1
  05f80e8  lbz 0, 0(9)
  05f80ec  stb 0, 0(11)
  05f80f0  bdnz 0x5f80d8
  05f80f4  b 0x5f7b7c
  05f80f8  cmpwi 7, 12, 0
  05f80fc  bt 30, 0x5f7abc
  05f8100  clrldi 12, 12, 32
  05f8104  mtctr 12
  05f8108  clrldi 9, 3, 32
  05f810c  clrldi 11, 10, 32
  05f8110  addi 3, 3, 1
  05f8114  addi 10, 10, 1
  05f8118  lbz 0, 0(9)
  05f811c  stb 0, 0(11)
  05f8120  bdnz 0x5f8108
  05f8124  b 0x5f7abc
  05f8128  cmplwi 7, 26, 6
  05f812c  clrlwi 6, 27, 25
  05f8130  bt 29, 0x5f8148
  05f8134  clrldi 9, 30, 32
  05f8138  lwz 0, 0(9)
  05f813c  slw 0, 0, 26
  05f8140  or 0, 27, 0
  05f8144  clrlwi 6, 0, 25
  05f8148  mr 8, 19
  05f814c  mr 5, 24
  05f8150  mr 10, 29
  05f8154  li 4, 4
  05f8158  li 31, 4
  05f815c  li 11, 0
  05f8160  b 0x5f818c
  05f8164  lbz 0, 0(7)
  05f8168  addi 5, 5, 1
  05f816c  addi 31, 31, -1
  05f8170  stb 0, 0(10)
  05f8174  addi 10, 10, 1
  05f8178  cmpwi 7, 4, 0
  05f817c  srwi 6, 6, 1
  05f8180  cmpwi 6, 31, 0
  05f8184  bt 30, 0x5f8700
  05f8188  bt 26, 0x5f8528
  05f818c  clrlwi 0, 6, 31
  05f8190  clrldi 7, 5, 32
  05f8194  cmpwi 7, 0, 0
  05f8198  clrldi 9, 8, 32
  05f819c  addi 11, 11, 1
  05f81a0  bf 30, 0x5f8164
  05f81a4  lbz 0, 0(9)
  05f81a8  addi 4, 4, -1
  05f81ac  addi 8, 8, 1
  05f81b0  stb 0, 0(10)
  05f81b4  addi 10, 10, 1
  05f81b8  b 0x5f8178
  05f81bc  clrldi 5, 5, 32
  05f81c0  mtctr 5
  05f81c4  clrldi 9, 6, 32
  05f81c8  addi 6, 6, 1
  05f81cc  lbz 0, 0(9)
  05f81d0  stb 0, 0(10)
  05f81d4  addi 10, 10, 1
  05f81d8  bdnz 0x5f81c4
  05f81dc  cmplw 7, 27, 11
  05f81e0  srw 28, 28, 11
  05f81e4  sub 3, 27, 11
  05f81e8  bf 28, 0x5f8204
  05f81ec  clrldi 10, 30, 32
  05f81f0  sub 11, 11, 27
  05f81f4  addi 3, 3, 32
  05f81f8  addi 30, 30, 4
  05f81fc  lwz 0, 0(10)
  05f8200  srw 28, 0, 11
  05f8204  cmplwi 7, 3, 2
  05f8208  clrlwi 7, 28, 29
  05f820c  bt 29, 0x5f8224
  05f8210  clrldi 9, 30, 32
  05f8214  lwz 0, 0(9)
  05f8218  slw 0, 0, 3
  05f821c  or 0, 28, 0
  05f8220  clrlwi 7, 0, 29
  05f8224  addi 10, 29, 4
  05f8228  addi 6, 1, -124
  05f822c  addi 31, 1, -122
  05f8230  li 5, 2
  05f8234  li 4, 2
  05f8238  li 11, 0
  05f823c  b 0x5f8268
  05f8240  lbz 0, 0(8)
  05f8244  addi 31, 31, 1
  05f8248  addi 4, 4, -1
  05f824c  stb 0, 0(10)
  05f8250  addi 10, 10, 1
  05f8254  cmpwi 7, 5, 0
  05f8258  srwi 7, 7, 1
  05f825c  cmpwi 6, 4, 0
  05f8260  bt 30, 0x5f86a8
  05f8264  bt 26, 0x5f8298
  05f8268  clrlwi 0, 7, 31
  05f826c  clrldi 8, 31, 32
  05f8270  cmpwi 7, 0, 0
  05f8274  clrldi 9, 6, 32
  05f8278  addi 11, 11, 1
  05f827c  bf 30, 0x5f8240
  05f8280  lbz 0, 0(9)
  05f8284  addi 5, 5, -1
  05f8288  addi 6, 6, 1
  05f828c  stb 0, 0(10)
  05f8290  addi 10, 10, 1
  05f8294  b 0x5f8254
  05f8298  clrldi 5, 5, 32
  05f829c  mtctr 5
  05f82a0  clrldi 9, 6, 32
  05f82a4  addi 6, 6, 1
  05f82a8  lbz 0, 0(9)
  05f82ac  stb 0, 0(10)
  05f82b0  addi 10, 10, 1
  05f82b4  bdnz 0x5f82a0
  05f82b8  cmplw 7, 3, 11
  05f82bc  srw 27, 28, 11
  05f82c0  sub 28, 3, 11
  05f82c4  bf 28, 0x5f82e0
  05f82c8  clrldi 10, 30, 32
  05f82cc  sub 11, 11, 3
  05f82d0  addi 28, 28, 32
  05f82d4  addi 30, 30, 4
  05f82d8  lwz 0, 0(10)
  05f82dc  srw 27, 0, 11
  05f82e0  cmplwi 7, 28, 2
  05f82e4  clrlwi 7, 27, 29
  05f82e8  bt 29, 0x5f8300
  05f82ec  clrldi 9, 30, 32
  05f82f0  lwz 0, 0(9)
  05f82f4  slw 0, 0, 28
  05f82f8  or 0, 27, 0
  05f82fc  clrlwi 7, 0, 29
  05f8300  addi 10, 29, 8
  05f8304  addi 6, 1, -120
  05f8308  addi 31, 1, -118
  05f830c  li 5, 2
  05f8310  li 4, 2
  05f8314  li 11, 0
  05f8318  b 0x5f8344
  05f831c  lbz 0, 0(8)
  05f8320  addi 31, 31, 1
  05f8324  addi 4, 4, -1
  05f8328  stb 0, 0(10)
  05f832c  addi 10, 10, 1
  05f8330  cmpwi 7, 5, 0
  05f8334  srwi 7, 7, 1
  05f8338  cmpwi 6, 4, 0
  05f833c  bt 30, 0x5f86d4
  05f8340  bt 26, 0x5f8374
  05f8344  clrlwi 0, 7, 31
  05f8348  clrldi 8, 31, 32
  05f834c  cmpwi 7, 0, 0
  05f8350  clrldi 9, 6, 32
  05f8354  addi 11, 11, 1
  05f8358  bf 30, 0x5f831c
  05f835c  lbz 0, 0(9)
  05f8360  addi 5, 5, -1
  05f8364  addi 6, 6, 1
  05f8368  stb 0, 0(10)
  05f836c  addi 10, 10, 1
  05f8370  b 0x5f8330
  05f8374  clrldi 5, 5, 32
  05f8378  mtctr 5
  05f837c  clrldi 9, 6, 32
  05f8380  addi 6, 6, 1
  05f8384  lbz 0, 0(9)
  05f8388  stb 0, 0(10)
  05f838c  addi 10, 10, 1
  05f8390  bdnz 0x5f837c
  05f8394  cmplw 7, 28, 11
  05f8398  srw 27, 27, 11
  05f839c  sub 3, 28, 11
  05f83a0  bf 28, 0x5f83bc
  05f83a4  clrldi 10, 30, 32
  05f83a8  sub 11, 11, 28
  05f83ac  addi 3, 3, 32
  05f83b0  addi 30, 30, 4
  05f83b4  lwz 0, 0(10)
  05f83b8  srw 27, 0, 11
  05f83bc  cmplwi 7, 3, 2
  05f83c0  clrlwi 8, 27, 29
  05f83c4  bt 29, 0x5f83dc
  05f83c8  clrldi 9, 30, 32
  05f83cc  lwz 0, 0(9)
  05f83d0  slw 0, 0, 3
  05f83d4  or 0, 27, 0
  05f83d8  clrlwi 8, 0, 29
  05f83dc  addi 11, 29, 12
  05f83e0  addi 7, 1, -116
  05f83e4  addi 31, 1, -114
  05f83e8  li 5, 2
  05f83ec  li 4, 2
  05f83f0  li 6, 0
  05f83f4  b 0x5f8420
  05f83f8  lbz 0, 0(10)
  05f83fc  addi 31, 31, 1
  05f8400  addi 4, 4, -1
  05f8404  stb 0, 0(11)
  05f8408  addi 11, 11, 1
  05f840c  cmpwi 7, 5, 0
  05f8410  srwi 8, 8, 1
  05f8414  cmpwi 6, 4, 0
  05f8418  bt 30, 0x5f8650
  05f841c  bt 26, 0x5f8450
  05f8420  clrlwi 0, 8, 31
  05f8424  clrldi 10, 31, 32
  05f8428  cmpwi 7, 0, 0
  05f842c  clrldi 9, 7, 32
  05f8430  addi 6, 6, 1
  05f8434  bf 30, 0x5f83f8
  05f8438  lbz 0, 0(9)
  05f843c  addi 5, 5, -1
  05f8440  addi 7, 7, 1
  05f8444  stb 0, 0(11)
  05f8448  addi 11, 11, 1
  05f844c  b 0x5f840c
  05f8450  clrldi 5, 5, 32
  05f8454  mtctr 5
  05f8458  clrldi 9, 7, 32
  05f845c  addi 7, 7, 1
  05f8460  lbz 0, 0(9)
  05f8464  stb 0, 0(11)
  05f8468  addi 11, 11, 1
  05f846c  bdnz 0x5f8458
  05f8470  cmplw 7, 3, 6
  05f8474  srw 4, 27, 6
  05f8478  sub 7, 3, 6
  05f847c  bf 28, 0x5f7270
  05f8480  clrldi 10, 30, 32
  05f8484  sub 11, 6, 3
  05f8488  addi 7, 7, 32
  05f848c  addi 30, 30, 4
  05f8490  lwz 0, 0(10)
  05f8494  srw 4, 0, 11
  05f8498  b 0x5f7270
  05f849c  cmpwi 7, 3, 0
  05f84a0  bt 30, 0x5f7de4
  05f84a4  clrldi 3, 3, 32
  05f84a8  mtctr 3
  05f84ac  clrldi 9, 4, 32
  05f84b0  clrldi 11, 10, 32
  05f84b4  addi 4, 4, 1
  05f84b8  addi 10, 10, 1
  05f84bc  lbz 0, 0(9)
  05f84c0  stb 0, 0(11)
  05f84c4  bdnz 0x5f84ac
  05f84c8  b 0x5f7de4
  05f84cc  cmpwi 7, 31, 0
  05f84d0  bt 30, 0x5f7fa8
  05f84d4  clrldi 31, 31, 32
  05f84d8  mtctr 31
  05f84dc  clrldi 9, 6, 32
  05f84e0  addi 6, 6, 1
  05f84e4  lbz 0, 0(9)
  05f84e8  stb 0, 0(11)
  05f84ec  addi 11, 11, 1
  05f84f0  bdnz 0x5f84dc
  05f84f4  b 0x5f7fa8
  05f84f8  cmpwi 7, 3, 0
  05f84fc  bt 30, 0x5f7ecc
  05f8500  clrldi 3, 3, 32
  05f8504  mtctr 3
  05f8508  clrldi 9, 4, 32
  05f850c  clrldi 11, 10, 32
  05f8510  addi 4, 4, 1
  05f8514  addi 10, 10, 1
  05f8518  lbz 0, 0(9)
  05f851c  stb 0, 0(11)
  05f8520  bdnz 0x5f8508
  05f8524  b 0x5f7ecc
  05f8528  clrldi 4, 4, 32
  05f852c  mtctr 4
  05f8530  clrldi 9, 8, 32
  05f8534  addi 8, 8, 1
  05f8538  lbz 0, 0(9)
  05f853c  stb 0, 0(10)
  05f8540  addi 10, 10, 1
  05f8544  bdnz 0x5f8530
  05f8548  cmplw 7, 26, 11
  05f854c  srw 28, 27, 11
  05f8550  sub 3, 26, 11
  05f8554  bf 28, 0x5f8570
  05f8558  clrldi 10, 30, 32
  05f855c  sub 11, 11, 26
  05f8560  addi 3, 3, 32
  05f8564  addi 30, 30, 4
  05f8568  lwz 0, 0(10)
  05f856c  srw 28, 0, 11
  05f8570  cmplwi 7, 3, 6
  05f8574  clrlwi 7, 28, 25
  05f8578  bt 29, 0x5f8590
  05f857c  clrldi 9, 30, 32
  05f8580  lwz 0, 0(9)
  05f8584  slw 0, 0, 3
  05f8588  or 0, 28, 0
  05f858c  clrlwi 7, 0, 25
  05f8590  addi 11, 29, 8
  05f8594  mr 10, 20
  05f8598  mr 6, 23
  05f859c  li 4, 4
  05f85a0  li 31, 4
  05f85a4  li 5, 0
  05f85a8  b 0x5f85d4
  05f85ac  lbz 0, 0(8)
  05f85b0  addi 6, 6, 1
  05f85b4  addi 31, 31, -1
  05f85b8  stb 0, 0(11)
  05f85bc  addi 11, 11, 1
  05f85c0  cmpwi 7, 4, 0
  05f85c4  srwi 7, 7, 1
  05f85c8  cmpwi 6, 31, 0
  05f85cc  bt 30, 0x5f872c
  05f85d0  bt 26, 0x5f8604
  05f85d4  clrlwi 0, 7, 31
  05f85d8  clrldi 8, 6, 32
  05f85dc  cmpwi 7, 0, 0
  05f85e0  clrldi 9, 10, 32
  05f85e4  addi 5, 5, 1
  05f85e8  bf 30, 0x5f85ac
  05f85ec  lbz 0, 0(9)
  05f85f0  addi 4, 4, -1
  05f85f4  addi 10, 10, 1
  05f85f8  stb 0, 0(11)
  05f85fc  addi 11, 11, 1
  05f8600  b 0x5f85c0
  05f8604  clrldi 4, 4, 32
  05f8608  mtctr 4
  05f860c  clrldi 9, 10, 32
  05f8610  addi 10, 10, 1
  05f8614  lbz 0, 0(9)
  05f8618  stb 0, 0(11)
  05f861c  addi 11, 11, 1
  05f8620  bdnz 0x5f860c
  05f8624  cmplw 7, 3, 5
  05f8628  srw 4, 28, 5
  05f862c  sub 7, 3, 5
  05f8630  bf 28, 0x5f7270
  05f8634  clrldi 10, 30, 32
  05f8638  sub 11, 5, 3
  05f863c  addi 7, 7, 32
  05f8640  addi 30, 30, 4
  05f8644  lwz 0, 0(10)
  05f8648  srw 4, 0, 11
  05f864c  b 0x5f7270
  05f8650  cmpwi 7, 4, 0
  05f8654  bt 30, 0x5f8470
  05f8658  clrldi 4, 4, 32
  05f865c  mtctr 4
  05f8660  clrldi 9, 31, 32
  05f8664  addi 31, 31, 1
  05f8668  lbz 0, 0(9)
  05f866c  stb 0, 0(11)
  05f8670  addi 11, 11, 1
  05f8674  bdnz 0x5f8660
  05f8678  b 0x5f8470
  05f867c  cmpwi 7, 4, 0
  05f8680  bt 30, 0x5f81dc
  05f8684  clrldi 4, 4, 32
  05f8688  mtctr 4
  05f868c  clrldi 9, 31, 32
  05f8690  addi 31, 31, 1
  05f8694  lbz 0, 0(9)
  05f8698  stb 0, 0(10)
  05f869c  addi 10, 10, 1
  05f86a0  bdnz 0x5f868c
  05f86a4  b 0x5f81dc
  05f86a8  cmpwi 7, 4, 0
  05f86ac  bt 30, 0x5f82b8
  05f86b0  clrldi 4, 4, 32
  05f86b4  mtctr 4
  05f86b8  clrldi 9, 31, 32
  05f86bc  addi 31, 31, 1
  05f86c0  lbz 0, 0(9)
  05f86c4  stb 0, 0(10)
  05f86c8  addi 10, 10, 1
  05f86cc  bdnz 0x5f86b8
  05f86d0  b 0x5f82b8
  05f86d4  cmpwi 7, 4, 0
  05f86d8  bt 30, 0x5f8394
  05f86dc  clrldi 4, 4, 32
  05f86e0  mtctr 4
  05f86e4  clrldi 9, 31, 32
  05f86e8  addi 31, 31, 1
  05f86ec  lbz 0, 0(9)
  05f86f0  stb 0, 0(10)
  05f86f4  addi 10, 10, 1
  05f86f8  bdnz 0x5f86e4
  05f86fc  b 0x5f8394
  05f8700  cmpwi 7, 31, 0
  05f8704  bt 30, 0x5f8548
  05f8708  clrldi 31, 31, 32
  05f870c  mtctr 31
  05f8710  clrldi 9, 5, 32
  05f8714  addi 5, 5, 1
  05f8718  lbz 0, 0(9)
  05f871c  stb 0, 0(10)
  05f8720  addi 10, 10, 1
  05f8724  bdnz 0x5f8710
  05f8728  b 0x5f8548
  05f872c  cmpwi 7, 31, 0
  05f8730  bt 30, 0x5f8624
  05f8734  clrldi 31, 31, 32
  05f8738  mtctr 31
  05f873c  clrldi 9, 6, 32
  05f8740  addi 6, 6, 1
  05f8744  lbz 0, 0(9)
  05f8748  stb 0, 0(11)
  05f874c  addi 11, 11, 1
  05f8750  bdnz 0x5f873c
  05f8754  b 0x5f8624

FUN_005f8758:   # 0x5f8758, 0x78 bytes
  05f8758  srwi 9, 4, 3
  05f875c  srwi 4, 4, 4
  05f8760  slwi 8, 9, 9
  05f8764  slwi 11, 9, 7
  05f8768  rlwinm 10, 9, 3, 3, 28
  05f876c  sub 11, 8, 11
  05f8770  rlwinm 7, 9, 1, 3, 30
  05f8774  addi 10, 10, 527
  05f8778  addi 4, 4, 527
  05f877c  rlwinm 10, 10, 0, 0, 27
  05f8780  addi 7, 7, 1039
  05f8784  srwi 11, 11, 3
  05f8788  addi 9, 9, 527
  05f878c  srwi 8, 8, 3
  05f8790  rlwinm 9, 9, 0, 0, 27
  05f8794  rlwinm 7, 7, 0, 0, 27
  05f8798  rlwinm 4, 4, 0, 0, 27
  05f879c  addi 8, 8, 576
  05f87a0  addi 10, 10, 8
  05f87a4  addi 11, 11, 576
  05f87a8  stw 4, 4(3)
  05f87ac  stw 11, 32(3)
  05f87b0  stw 8, 8(3)
  05f87b4  stw 10, 12(3)
  05f87b8  stw 9, 20(3)
  05f87bc  stw 7, 28(3)
  05f87c0  stw 9, 0(3)
  05f87c4  stw 9, 16(3)
  05f87c8  stw 7, 24(3)
  05f87cc  blr

FUN_005f87d0:   # 0x5f87d0, 0xa50 bytes
  05f87d0  mfcr 12
  05f87d4  stdu 1, -1456(1)
  05f87d8  stw 6, 1268(1)
  05f87dc  clrldi 6, 6, 32
  05f87e0  std 19, 1352(1)
  05f87e4  addi 11, 6, -8
  05f87e8  mr 19, 7
  05f87ec  std 16, 1328(1)
  05f87f0  mr 16, 9
  05f87f4  clrldi 9, 4, 32
  05f87f8  stw 7, 1272(1)
  05f87fc  li 10, 0
  05f8800  std 15, 1320(1)
  05f8804  std 14, 1312(1)
  05f8808  std 17, 1336(1)
  05f880c  std 18, 1344(1)
  05f8810  std 20, 1360(1)
  05f8814  std 21, 1368(1)
  05f8818  std 22, 1376(1)
  05f881c  std 23, 1384(1)
  05f8820  std 24, 1392(1)
  05f8824  std 25, 1400(1)
  05f8828  std 26, 1408(1)
  05f882c  std 27, 1416(1)
  05f8830  std 28, 1424(1)
  05f8834  std 29, 1432(1)
  05f8838  std 30, 1440(1)
  05f883c  std 31, 1448(1)
  05f8840  stw 4, 1200(1)
  05f8844  stw 5, 1264(1)
  05f8848  stw 8, 116(1)
  05f884c  stw 10, 112(1)
  05f8850  stw 3, 1260(1)
  05f8854  stw 8, 124(1)
  05f8858  stw 10, 120(1)
  05f885c  mflr 0
  05f8860  stw 12, 1464(1)
  05f8864  std 0, 1472(1)
  05f8868  lwz 0, 1604(1)
  05f886c  lwz 15, 1588(1)
  05f8870  rlwinm 0, 0, 0, 16, 16
  05f8874  mullw 11, 11, 19
  05f8878  cmpwi 7, 0, 0
  05f887c  add 11, 9, 11
  05f8880  slwi 0, 7, 3
  05f8884  clrldi 7, 5, 32
  05f8888  add 11, 11, 7
  05f888c  sub 0, 0, 7
  05f8890  addi 11, 11, -8
  05f8894  stw 0, 1244(1)
  05f8898  stw 11, 1252(1)
  05f889c  bt 30, 0x5fa100
  05f88a0  lwz 31, -32136(2)
  05f88a4  lwz 11, 1264(1)
  05f88a8  addi 0, 1, 112
  05f88ac  lwz 30, 1264(1)
  05f88b0  li 12, 0
  05f88b4  srwi 10, 11, 3
  05f88b8  lwz 7, 1596(1)
  05f88bc  srwi 9, 30, 4
  05f88c0  slwi 11, 10, 6
  05f88c4  slwi 28, 10, 4
  05f88c8  srwi 6, 11, 3
  05f88cc  addi 5, 9, 527
  05f88d0  slwi 8, 10, 3
  05f88d4  addi 27, 10, 527
  05f88d8  rlwinm 4, 10, 6, 3, 25
  05f88dc  addi 6, 6, 527
  05f88e0  std 0, 1296(1)
  05f88e4  lwz 3, 0(7)
  05f88e8  li 0, 0
  05f88ec  lwz 25, 4(7)
  05f88f0  sub 29, 11, 28
  05f88f4  lwz 23, 8(7)
  05f88f8  rlwinm 27, 27, 0, 0, 27
  05f88fc  lwz 22, 12(7)
  05f8900  li 24, 4
  05f8904  li 26, 8
  05f8908  ld 30, 1296(1)
  05f890c  rlwinm 5, 5, 0, 0, 27
  05f8910  rlwinm 6, 6, 0, 0, 27
  05f8914  addi 4, 4, 512
  05f8918  addi 8, 8, 511
  05f891c  addi 10, 10, 511
  05f8920  cntlzw 8, 8
  05f8924  cntlzw 10, 10
  05f8928  subfic 8, 8, 32
  05f892c  subfic 10, 10, 32
  05f8930  addi 9, 9, 511
  05f8934  addi 11, 11, 511
  05f8938  cntlzw 9, 9
  05f893c  cntlzw 11, 11
  05f8940  subfic 9, 9, 32
  05f8944  subfic 11, 11, 32
  05f8948  srwi 28, 28, 3
  05f894c  stw 3, 280(1)
  05f8950  stw 9, 428(1)
  05f8954  stw 0, 400(1)
  05f8958  stw 5, 432(1)
  05f895c  stw 25, 436(1)
  05f8960  stw 11, 480(1)
  05f8964  stw 4, 484(1)
  05f8968  stw 23, 488(1)
  05f896c  stw 8, 532(1)
  05f8970  stw 26, 500(1)
  05f8974  stw 6, 536(1)
  05f8978  stw 10, 272(1)
  05f897c  stw 0, 232(1)
  05f8980  stw 0, 236(1)
  05f8984  stw 0, 244(1)
  05f8988  stw 0, 388(1)
  05f898c  stw 0, 392(1)
  05f8990  stw 12, 440(1)
  05f8994  stw 12, 444(1)
  05f8998  stw 26, 448(1)
  05f899c  stw 22, 540(1)
  05f89a0  stw 24, 240(1)
  05f89a4  stw 27, 276(1)
  05f89a8  stw 24, 396(1)
  05f89ac  stw 12, 452(1)
  05f89b0  stw 12, 492(1)
  05f89b4  stw 12, 496(1)
  05f89b8  stw 12, 504(1)
  05f89bc  lwz 0, 16(7)
  05f89c0  rlwinm 21, 29, 0, 3, 27
  05f89c4  clrldi 20, 30, 32
  05f89c8  addi 28, 28, 1039
  05f89cc  stw 10, 376(1)
  05f89d0  lwz 23, 32(7)
  05f89d4  rlwinm 28, 28, 0, 0, 27
  05f89d8  lwz 9, 20(7)
  05f89dc  li 8, 5
  05f89e0  lwz 11, 24(7)
  05f89e4  li 25, 11
  05f89e8  lwz 26, 28(7)
  05f89ec  addi 4, 1, 268
  05f89f0  li 7, 16
  05f89f4  addi 5, 1, 264
  05f89f8  addi 6, 1, 248
  05f89fc  mr 3, 20
  05f8a00  stw 0, 384(1)
  05f8a04  addi 21, 21, 512
  05f8a08  li 0, 1024
  05f8a0c  addi 29, 29, 511
  05f8a10  cntlzw 29, 29
  05f8a14  subfic 29, 29, 32
  05f8a18  stw 0, 192(1)
  05f8a1c  stw 8, 292(1)
  05f8a20  stw 7, 296(1)
  05f8a24  stw 9, 332(1)
  05f8a28  stw 11, 592(1)
  05f8a2c  stw 10, 220(1)
  05f8a30  stw 28, 224(1)
  05f8a34  stw 29, 168(1)
  05f8a38  stw 12, 336(1)
  05f8a3c  stw 12, 340(1)
  05f8a40  stw 8, 344(1)
  05f8a44  stw 7, 348(1)
  05f8a48  stw 10, 324(1)
  05f8a4c  stw 12, 284(1)
  05f8a50  stw 12, 288(1)
  05f8a54  stw 10, 584(1)
  05f8a58  stw 12, 544(1)
  05f8a5c  stw 12, 548(1)
  05f8a60  stw 27, 328(1)
  05f8a64  stw 25, 188(1)
  05f8a68  stw 26, 228(1)
  05f8a6c  stw 27, 380(1)
  05f8a70  stw 25, 552(1)
  05f8a74  stw 12, 556(1)
  05f8a78  stw 28, 588(1)
  05f8a7c  stw 12, 180(1)
  05f8a80  stw 12, 184(1)
  05f8a84  stw 12, 128(1)
  05f8a88  stw 12, 132(1)
  05f8a8c  stw 24, 136(1)
  05f8a90  stw 12, 140(1)
  05f8a94  stw 21, 172(1)
  05f8a98  stw 23, 176(1)
  05f8a9c  bl 0x5f7140
  05f8aa0  addi 0, 1, 800
  05f8aa4  mr 3, 20
  05f8aa8  addi 4, 1, 424
  05f8aac  addi 5, 1, 420
  05f8ab0  addi 6, 1, 404
  05f8ab4  li 28, 0
  05f8ab8  addi 29, 1, 1120
  05f8abc  std 0, 1304(1)
  05f8ac0  bl 0x5f7140
  05f8ac4  nop
  05f8ac8  slwi 6, 28, 4
  05f8acc  ld 0, 1304(1)
  05f8ad0  addi 5, 29, -64
  05f8ad4  add 6, 6, 0
  05f8ad8  clrldi 4, 29, 32
  05f8adc  clrldi 5, 5, 32
  05f8ae0  rlwinm 6, 6, 0, 0, 27
  05f8ae4  addi 28, 28, 1
  05f8ae8  mr 3, 20
  05f8aec  addi 29, 29, 4
  05f8af0  bl 0x5f7140
  05f8af4  cmpdi 7, 28, 16
  05f8af8  bf 30, 0x5f8ac8
  05f8afc  li 7, 0
  05f8b00  mr 3, 20
  05f8b04  addi 4, 1, 476
  05f8b08  addi 5, 1, 472
  05f8b0c  addi 6, 1, 456
  05f8b10  stw 7, 1236(1)
  05f8b14  bl 0x5f7140
  05f8b18  li 0, 0
  05f8b1c  addi 4, 1, 528
  05f8b20  addi 5, 1, 524
  05f8b24  addi 6, 1, 508
  05f8b28  mr 3, 20
  05f8b2c  stw 0, 1184(1)
  05f8b30  bl 0x5f7140
  05f8b34  mr 3, 20
  05f8b38  addi 4, 1, 372
  05f8b3c  addi 5, 1, 368
  05f8b40  addi 6, 1, 352
  05f8b44  bl 0x5f7140
  05f8b48  mr 3, 20
  05f8b4c  addi 4, 1, 320
  05f8b50  addi 5, 1, 316
  05f8b54  addi 6, 1, 300
  05f8b58  bl 0x5f7140
  05f8b5c  mr 3, 20
  05f8b60  addi 4, 1, 164
  05f8b64  addi 5, 1, 160
  05f8b68  addi 6, 1, 144
  05f8b6c  bl 0x5f7140
  05f8b70  lwz 7, 1268(1)
  05f8b74  cmpwi 7, 7, 0
  05f8b78  bt 30, 0x5f9df0
  05f8b7c  li 10, 0
  05f8b80  lwz 9, 1572(1)
  05f8b84  clrldi 31, 31, 32
  05f8b88  lwz 11, 1580(1)
  05f8b8c  lwz 30, 1200(1)
  05f8b90  mr 14, 7
  05f8b94  lwz 20, 1260(1)
  05f8b98  clrldi 17, 16, 32
  05f8b9c  stw 9, 1240(1)
  05f8ba0  std 31, 1280(1)
  05f8ba4  stw 10, 1236(1)
  05f8ba8  stw 10, 1248(1)
  05f8bac  cmpwi 4, 11, 0
  05f8bb0  ld 0, 1296(1)
  05f8bb4  addi 3, 1, 232
  05f8bb8  mr 5, 17
  05f8bbc  clrldi 29, 0, 32
  05f8bc0  mr 4, 29
  05f8bc4  bl 0x5f6a08
  05f8bc8  addi 3, 1, 388
  05f8bcc  mr 4, 29
  05f8bd0  mr 5, 17
  05f8bd4  bl 0x5f6a08
  05f8bd8  ld 7, 1280(1)
  05f8bdc  addi 3, 1, 440
  05f8be0  mr 4, 29
  05f8be4  addi 5, 1, 800
  05f8be8  mr 6, 17
  05f8bec  lwz 7, 0(7)
  05f8bf0  std 2, 40(1)
  05f8bf4  mtctr 7
  05f8bf8  ld 7, 1280(1)
  05f8bfc  lwz 2, 4(7)
  05f8c00  bctrl
  05f8c04  ld 2, 40(1)
  05f8c08  lwz 9, 492(1)
  05f8c0c  lwz 0, 496(1)
  05f8c10  cmpw 7, 9, 0
  05f8c14  bt 30, 0x5f9bd8
  05f8c18  ld 9, 1296(1)
  05f8c1c  addi 3, 1, 336
  05f8c20  mr 5, 17
  05f8c24  clrldi 29, 9, 32
  05f8c28  mr 4, 29
  05f8c2c  bl 0x5f5f70
  05f8c30  addi 3, 1, 284
  05f8c34  mr 4, 29
  05f8c38  mr 5, 17
  05f8c3c  bl 0x5f5f70
  05f8c40  lwz 0, 332(1)
  05f8c44  lwz 9, 284(1)
  05f8c48  addi 3, 1, 544
  05f8c4c  mr 4, 29
  05f8c50  sub 9, 9, 0
  05f8c54  lwz 0, 384(1)
  05f8c58  mr 5, 17
  05f8c5c  add 0, 0, 9
  05f8c60  stw 0, 336(1)
  05f8c64  bl 0x5f6d90
  05f8c68  addi 3, 1, 180
  05f8c6c  mr 4, 29
  05f8c70  mr 5, 17
  05f8c74  bl 0x5f6d90
  05f8c78  lwz 9, 128(1)
  05f8c7c  lwz 0, 132(1)
  05f8c80  cmpw 7, 9, 0
  05f8c84  bt 30, 0x5f9a64
  05f8c88  lwz 7, 1248(1)
  05f8c8c  li 18, 0
  05f8c90  lwz 31, 1264(1)
  05f8c94  rlwinm 7, 7, 0, 28, 28
  05f8c98  stw 7, 1256(1)
  05f8c9c  nop
  05f8ca0  lwz 5, 116(1)
  05f8ca4  cmplw 7, 5, 16
  05f8ca8  bf 28, 0x5f8df0
  05f8cac  lwz 11, 232(1)
  05f8cb0  lwz 0, 236(1)
  05f8cb4  cmplw 7, 0, 11
  05f8cb8  bf 29, 0x5f8df0
  05f8cbc  clrldi 9, 11, 32
  05f8cc0  addi 0, 11, 1
  05f8cc4  lbz 9, 0(9)
  05f8cc8  stw 0, 232(1)
  05f8ccc  cmplwi 7, 9, 9
  05f8cd0  bt 29, 0x5f8df0
  05f8cd4  lwz 11, -32128(2)
  05f8cd8  rlwinm 9, 9, 2, 22, 29
  05f8cdc  lwzx 0, 9, 11
  05f8ce0  extsw 0, 0
  05f8ce4  add 0, 0, 11
  05f8ce8  mtctr 0
  05f8cec  bctr
  05f8cf0  <unknown>
  05f8cf4  <unknown>
  05f8cf8  <unknown>
  05f8cfc  <unknown>
  05f8d00  <unknown>
  05f8d04  <unknown>
  05f8d08  <unknown>
  05f8d0c  <unknown>
  05f8d10  <unknown>
  05f8d14  <unknown>
  05f8d18  clrldi 10, 30, 32
  05f8d1c  add 11, 30, 19
  05f8d20  clrldi 8, 20, 32
  05f8d24  add 9, 20, 19
  05f8d28  clrldi 7, 11, 32
  05f8d2c  add 11, 19, 11
  05f8d30  lfd 0, 0(10)
  05f8d34  clrldi 6, 9, 32
  05f8d38  add 9, 19, 9
  05f8d3c  stfd 0, 0(8)
  05f8d40  clrldi 5, 11, 32
  05f8d44  clrldi 10, 9, 32
  05f8d48  lfd 0, 0(7)
  05f8d4c  add 11, 19, 11
  05f8d50  add 9, 19, 9
  05f8d54  stfd 0, 0(6)
  05f8d58  clrldi 7, 11, 32
  05f8d5c  add 11, 19, 11
  05f8d60  lfd 0, 0(5)
  05f8d64  clrldi 8, 9, 32
  05f8d68  stfd 0, 0(10)
  05f8d6c  add 9, 19, 9
  05f8d70  clrldi 6, 11, 32
  05f8d74  clrldi 10, 9, 32
  05f8d78  lfd 0, 0(7)
  05f8d7c  add 11, 19, 11
  05f8d80  add 9, 19, 9
  05f8d84  stfd 0, 0(8)
  05f8d88  clrldi 5, 11, 32
  05f8d8c  add 11, 19, 11
  05f8d90  lfd 0, 0(6)
  05f8d94  clrldi 7, 9, 32
  05f8d98  stfd 0, 0(10)
  05f8d9c  add 9, 19, 9
  05f8da0  clrldi 8, 11, 32
  05f8da4  add 11, 19, 11
  05f8da8  lfd 0, 0(5)
  05f8dac  clrldi 10, 9, 32
  05f8db0  add 9, 19, 9
  05f8db4  stfd 0, 0(7)
  05f8db8  clrldi 11, 11, 32
  05f8dbc  clrldi 9, 9, 32
  05f8dc0  lfd 13, 0(8)
  05f8dc4  stfd 13, 0(10)
  05f8dc8  lfd 0, 0(11)
  05f8dcc  stfd 0, 0(9)
  05f8dd0  bt 18, 0x5f99dc
  05f8dd4  srwi 9, 18, 1
  05f8dd8  lwz 10, 1240(1)
  05f8ddc  add 9, 9, 10
  05f8de0  clrldi 9, 9, 32
  05f8de4  lbz 0, 0(9)
  05f8de8  cmpwi 7, 0, 0
  05f8dec  bt 30, 0x5f99dc
  05f8df0  add 18, 18, 15
  05f8df4  addi 20, 20, 8
  05f8df8  addi 30, 30, 8
  05f8dfc  addi 31, 31, -8
  05f8e00  cmpwi 7, 31, 0
  05f8e04  bf 30, 0x5f8ca0
  05f8e08  bt 18, 0x5f8e24
  05f8e0c  cmpwi 7, 15, 1
  05f8e10  bt 30, 0x5f9dc8
  05f8e14  lwz 10, 1240(1)
  05f8e18  lwz 11, 1580(1)
  05f8e1c  add 10, 10, 11
  05f8e20  stw 10, 1240(1)
  05f8e24  lwz 7, 1248(1)
  05f8e28  addi 14, 14, -8
  05f8e2c  lwz 9, 1268(1)
  05f8e30  addi 7, 7, 8
  05f8e34  cmplw 7, 9, 7
  05f8e38  stw 7, 1248(1)
  05f8e3c  bf 29, 0x5f9df0
  05f8e40  lwz 10, 1244(1)
  05f8e44  add 30, 30, 10
  05f8e48  add 20, 20, 10
  05f8e4c  b 0x5f8bb0
  05f8e50  lwz 7, 1240(1)
  05f8e54  srwi 9, 18, 1
  05f8e58  li 0, 1
  05f8e5c  add 9, 9, 7
  05f8e60  clrldi 9, 9, 32
  05f8e64  stb 0, 0(9)
  05f8e68  lwz 8, 284(1)
  05f8e6c  lwz 0, 288(1)
  05f8e70  cmplw 7, 8, 0
  05f8e74  bt 28, 0x5f8e90
  05f8e78  lwz 11, 332(1)
  05f8e7c  lwz 9, 384(1)
  05f8e80  addi 8, 11, 4
  05f8e84  addi 9, 9, 4
  05f8e88  stw 8, 284(1)
  05f8e8c  stw 9, 336(1)
  05f8e90  clrldi 9, 8, 32
  05f8e94  lwz 11, 336(1)
  05f8e98  addi 8, 8, 1
  05f8e9c  clrldi 10, 11, 32
  05f8ea0  addi 11, 11, 1
  05f8ea4  lbz 0, 0(9)
  05f8ea8  lbz 9, 0(10)
  05f8eac  extsb 0, 0
  05f8eb0  lwz 10, 1272(1)
  05f8eb4  extsb 9, 9
  05f8eb8  stw 11, 336(1)
  05f8ebc  lwz 11, 1200(1)
  05f8ec0  stw 8, 284(1)
  05f8ec4  mullw 0, 10, 0
  05f8ec8  add 0, 30, 0
  05f8ecc  add 29, 0, 9
  05f8ed0  cmplw 7, 29, 11
  05f8ed4  bt 28, 0x5f8df0
  05f8ed8  lwz 0, 1252(1)
  05f8edc  cmplw 7, 0, 29
  05f8ee0  bt 28, 0x5f8df0
  05f8ee4  lwz 9, 180(1)
  05f8ee8  lwz 0, 184(1)
  05f8eec  cmplw 7, 9, 0
  05f8ef0  bf 28, 0x5fa2d4
  05f8ef4  clrldi 9, 9, 32
  05f8ef8  addi 0, 1, 672
  05f8efc  addi 4, 1, 112
  05f8f00  clrldi 28, 0, 32
  05f8f04  lhz 11, 0(9)
  05f8f08  mr 3, 28
  05f8f0c  sth 11, 0(28)
  05f8f10  lwz 9, 180(1)
  05f8f14  addi 9, 9, 2
  05f8f18  stw 9, 180(1)
  05f8f1c  bl 0x603598
  05f8f20  nop
  05f8f24  lwz 7, 120(1)
  05f8f28  cmplwi 7, 7, 3
  05f8f2c  bt 29, 0x5fa2b8
  05f8f30  lwz 10, 116(1)
  05f8f34  addi 0, 7, 28
  05f8f38  subfic 8, 7, 4
  05f8f3c  clrldi 11, 10, 32
  05f8f40  addi 10, 10, 4
  05f8f44  lwz 9, 0(11)
  05f8f48  stw 0, 120(1)
  05f8f4c  slw 11, 9, 7
  05f8f50  lwz 0, 112(1)
  05f8f54  srw 9, 9, 8
  05f8f58  stw 10, 116(1)
  05f8f5c  or 11, 11, 0
  05f8f60  stw 9, 112(1)
  05f8f64  clrlwi 0, 11, 28
  05f8f68  lwz 7, 1272(1)
  05f8f6c  mr 5, 28
  05f8f70  extsw 6, 0
  05f8f74  extsw 4, 7
  05f8f78  clrldi 3, 20, 32
  05f8f7c  clrldi 7, 29, 32
  05f8f80  mr 8, 4
  05f8f84  bl 0x6024a8
  05f8f88  nop
  05f8f8c  b 0x5f8df0
  05f8f90  lwz 7, 1240(1)
  05f8f94  srwi 9, 18, 1
  05f8f98  li 0, 1
  05f8f9c  lwz 10, 440(1)
  05f8fa0  add 9, 9, 7
  05f8fa4  clrldi 9, 9, 32
  05f8fa8  stb 0, 0(9)
  05f8fac  lwz 11, 440(1)
  05f8fb0  lwz 0, 444(1)
  05f8fb4  cmplw 7, 11, 0
  05f8fb8  bt 28, 0x5f8fc8
  05f8fbc  lwz 9, 488(1)
  05f8fc0  addi 12, 9, 4
  05f8fc4  stw 12, 440(1)
  05f8fc8  clrlwi 0, 10, 29
  05f8fcc  add 6, 20, 19
  05f8fd0  cmpwi 7, 0, 0
  05f8fd4  bf 30, 0x5f9eb4
  05f8fd8  clrldi 11, 10, 32
  05f8fdc  clrldi 10, 20, 32
  05f8fe0  clrldi 8, 6, 32
  05f8fe4  add 9, 19, 6
  05f8fe8  lfd 0, 0(11)
  05f8fec  clrldi 7, 9, 32
  05f8ff0  add 9, 19, 9
  05f8ff4  stfd 0, 0(10)
  05f8ff8  lfd 13, 8(11)
  05f8ffc  clrldi 10, 9, 32
  05f9000  stfd 13, 0(8)
  05f9004  add 9, 19, 9
  05f9008  lfd 0, 16(11)
  05f900c  stfd 0, 0(7)
  05f9010  clrldi 8, 9, 32
  05f9014  lfd 0, 24(11)
  05f9018  add 9, 19, 9
  05f901c  stfd 0, 0(10)
  05f9020  clrldi 7, 9, 32
  05f9024  lfd 0, 32(11)
  05f9028  add 9, 19, 9
  05f902c  stfd 0, 0(8)
  05f9030  clrldi 10, 9, 32
  05f9034  lfd 13, 40(11)
  05f9038  add 9, 19, 9
  05f903c  stfd 13, 0(7)
  05f9040  clrldi 9, 9, 32
  05f9044  lfd 0, 48(11)
  05f9048  stfd 0, 0(10)
  05f904c  lfd 13, 56(11)
  05f9050  stfd 13, 0(9)
  05f9054  lwz 9, 440(1)
  05f9058  addi 9, 9, 64
  05f905c  stw 9, 440(1)
  05f9060  b 0x5f8df0
  05f9064  lwz 12, 440(1)
  05f9068  lwz 0, 444(1)
  05f906c  cmplw 7, 12, 0
  05f9070  bt 28, 0x5f9080
  05f9074  lwz 9, 488(1)
  05f9078  addi 12, 9, 4
  05f907c  stw 12, 440(1)
  05f9080  clrldi 11, 12, 32
  05f9084  lwz 0, 1240(1)
  05f9088  addi 12, 12, 1
  05f908c  srwi 9, 18, 1
  05f9090  clrldi 8, 12, 32
  05f9094  add 9, 9, 0
  05f9098  lbz 10, 0(11)
  05f909c  li 0, 1
  05f90a0  clrldi 9, 9, 32
  05f90a4  stw 12, 440(1)
  05f90a8  lbz 11, 0(8)
  05f90ac  addi 12, 12, 1
  05f90b0  slwi 8, 10, 8
  05f90b4  stw 12, 440(1)
  05f90b8  stb 0, 0(9)
  05f90bc  slwi 9, 11, 8
  05f90c0  lwz 0, 496(1)
  05f90c4  lwz 25, 492(1)
  05f90c8  or 10, 10, 8
  05f90cc  or 11, 11, 9
  05f90d0  cmplw 7, 25, 0
  05f90d4  slwi 9, 10, 16
  05f90d8  slwi 0, 11, 16
  05f90dc  or 24, 10, 9
  05f90e0  or 23, 11, 0
  05f90e4  add 0, 20, 19
  05f90e8  bt 28, 0x5f90f8
  05f90ec  lwz 9, 540(1)
  05f90f0  addi 25, 9, 4
  05f90f4  stw 25, 492(1)
  05f90f8  clrldi 11, 25, 32
  05f90fc  lwz 5, -32144(2)
  05f9100  clrldi 29, 0, 32
  05f9104  lwz 3, 492(1)
  05f9108  add 6, 19, 0
  05f910c  clrldi 4, 20, 32
  05f9110  mr 28, 3
  05f9114  lbz 9, 0(11)
  05f9118  mr 25, 3
  05f911c  clrldi 27, 6, 32
  05f9120  rlwinm 8, 9, 30, 26, 29
  05f9124  rlwinm 9, 9, 2, 26, 29
  05f9128  add 8, 8, 5
  05f912c  add 9, 9, 5
  05f9130  add 6, 19, 6
  05f9134  lwz 7, 1184(8)
  05f9138  lwz 10, 1184(9)
  05f913c  lwz 0, 1120(9)
  05f9140  and 7, 23, 7
  05f9144  lwz 11, 1120(8)
  05f9148  and 10, 23, 10
  05f914c  and 0, 24, 0
  05f9150  and 11, 24, 11
  05f9154  or 0, 0, 10
  05f9158  or 11, 11, 7
  05f915c  stw 0, 0(4)
  05f9160  stw 11, 4(4)
  05f9164  lbz 9, 1(3)
  05f9168  clrldi 4, 6, 32
  05f916c  lwz 3, 492(1)
  05f9170  add 6, 19, 6
  05f9174  rlwinm 8, 9, 30, 26, 29
  05f9178  rlwinm 9, 9, 2, 26, 29
  05f917c  add 8, 8, 5
  05f9180  add 9, 9, 5
  05f9184  clrldi 26, 6, 32
  05f9188  add 6, 19, 6
  05f918c  lwz 7, 1184(8)
  05f9190  lwz 10, 1184(9)
  05f9194  lwz 0, 1120(9)
  05f9198  and 7, 23, 7
  05f919c  lwz 11, 1120(8)
  05f91a0  and 10, 23, 10
  05f91a4  and 0, 24, 0
  05f91a8  and 11, 24, 11
  05f91ac  or 0, 0, 10
  05f91b0  or 11, 11, 7
  05f91b4  stw 0, 0(29)
  05f91b8  stw 11, 4(29)
  05f91bc  lbz 8, 2(28)
  05f91c0  clrldi 28, 6, 32
  05f91c4  add 6, 19, 6
  05f91c8  rlwinm 7, 8, 30, 26, 29
  05f91cc  rlwinm 8, 8, 2, 26, 29
  05f91d0  add 7, 7, 5
  05f91d4  add 8, 8, 5
  05f91d8  lwz 10, 1184(7)
  05f91dc  lwz 9, 1184(8)
  05f91e0  lwz 0, 1120(8)
  05f91e4  and 10, 23, 10
  05f91e8  lwz 11, 1120(7)
  05f91ec  and 9, 23, 9
  05f91f0  and 0, 24, 0
  05f91f4  and 11, 24, 11
  05f91f8  or 0, 0, 9
  05f91fc  or 11, 11, 10
  05f9200  stw 0, 0(27)
  05f9204  stw 11, 4(27)
  05f9208  lbz 9, 3(25)
  05f920c  clrldi 27, 6, 32
  05f9210  add 6, 19, 6
  05f9214  rlwinm 8, 9, 30, 26, 29
  05f9218  rlwinm 9, 9, 2, 26, 29
  05f921c  add 8, 8, 5

FUN_005fb780:   # 0x5fb780, 0x604 bytes
  05fb780  mfcr 12
  05fb784  stdu 1, -368(1)
  05fb788  std 16, 240(1)
  05fb78c  std 18, 256(1)
  05fb790  std 19, 264(1)
  05fb794  std 20, 272(1)
  05fb798  std 21, 280(1)
  05fb79c  std 22, 288(1)
  05fb7a0  std 23, 296(1)
  05fb7a4  std 24, 304(1)
  05fb7a8  std 30, 352(1)
  05fb7ac  std 31, 360(1)
  05fb7b0  std 14, 224(1)
  05fb7b4  std 15, 232(1)
  05fb7b8  std 17, 248(1)
  05fb7bc  std 25, 312(1)
  05fb7c0  std 26, 320(1)
  05fb7c4  std 27, 328(1)
  05fb7c8  std 28, 336(1)
  05fb7cc  std 29, 344(1)
  05fb7d0  mr 20, 4
  05fb7d4  cmpwi 7, 4, 0
  05fb7d8  mr 31, 1
  05fb7dc  mr 19, 5
  05fb7e0  mr 18, 7
  05fb7e4  addi 30, 8, 4
  05fb7e8  li 16, 1
  05fb7ec  stw 12, 376(1)
  05fb7f0  mflr 0
  05fb7f4  std 0, 384(1)
  05fb7f8  lwz 11, 0(9)
  05fb7fc  lwz 4, 4(9)
  05fb800  lwz 29, 8(9)
  05fb804  addi 11, 11, 15
  05fb808  addi 4, 4, 15
  05fb80c  ld 0, 0(1)
  05fb810  clrldi 11, 11, 32
  05fb814  lwz 27, 12(9)
  05fb818  addi 29, 29, 15
  05fb81c  lwz 26, 16(9)
  05fb820  clrldi 4, 4, 32
  05fb824  lwz 25, 20(9)
  05fb828  addi 11, 11, 30
  05fb82c  clrldi 29, 29, 32
  05fb830  addi 4, 4, 30
  05fb834  sldi 11, 11, 31
  05fb838  addi 29, 29, 30
  05fb83c  sldi 4, 4, 31
  05fb840  rldicr 11, 11, 33, 59
  05fb844  sldi 29, 29, 31
  05fb848  rldicr 4, 4, 33, 59
  05fb84c  neg 11, 11
  05fb850  rldicr 29, 29, 33, 59
  05fb854  neg 4, 4
  05fb858  neg 29, 29
  05fb85c  addi 27, 27, 15
  05fb860  stdux 0, 1, 11
  05fb864  lwz 28, 24(9)
  05fb868  addi 21, 1, 160
  05fb86c  addi 26, 26, 15
  05fb870  stdux 0, 1, 4
  05fb874  lwz 11, 28(9)
  05fb878  addi 22, 1, 160
  05fb87c  clrldi 27, 27, 32
  05fb880  stdux 0, 1, 29
  05fb884  addi 25, 25, 15
  05fb888  lwz 4, 32(9)
  05fb88c  clrldi 26, 26, 32
  05fb890  addi 28, 28, 15
  05fb894  addi 27, 27, 30
  05fb898  clrldi 25, 25, 32
  05fb89c  addi 11, 11, 15
  05fb8a0  addi 26, 26, 30
  05fb8a4  clrldi 28, 28, 32
  05fb8a8  addi 4, 4, 15
  05fb8ac  sldi 27, 27, 31
  05fb8b0  addi 25, 25, 30
  05fb8b4  clrldi 11, 11, 32
  05fb8b8  sldi 26, 26, 31
  05fb8bc  addi 28, 28, 30
  05fb8c0  clrldi 4, 4, 32
  05fb8c4  rldicr 27, 27, 33, 59
  05fb8c8  sldi 25, 25, 31
  05fb8cc  addi 11, 11, 30
  05fb8d0  rldicr 26, 26, 33, 59
  05fb8d4  sldi 28, 28, 31
  05fb8d8  addi 4, 4, 30
  05fb8dc  neg 27, 27
  05fb8e0  rldicr 25, 25, 33, 59
  05fb8e4  sldi 11, 11, 31
  05fb8e8  neg 26, 26
  05fb8ec  rldicr 28, 28, 33, 59
  05fb8f0  sldi 4, 4, 31
  05fb8f4  neg 25, 25
  05fb8f8  rldicr 11, 11, 33, 59
  05fb8fc  neg 28, 28
  05fb900  rldicr 4, 4, 33, 59
  05fb904  neg 11, 11
  05fb908  addi 23, 1, 160
  05fb90c  neg 4, 4
  05fb910  stdux 0, 1, 27
  05fb914  addi 24, 1, 160
  05fb918  stdux 0, 1, 26
  05fb91c  addi 26, 1, 160
  05fb920  stdux 0, 1, 25
  05fb924  addi 27, 1, 160
  05fb928  stdux 0, 1, 28
  05fb92c  addi 29, 1, 160
  05fb930  stdux 0, 1, 11
  05fb934  addi 9, 1, 160
  05fb938  stdux 0, 1, 4
  05fb93c  addi 0, 1, 160
  05fb940  stw 22, 176(31)
  05fb944  stw 23, 180(31)
  05fb948  stw 9, 200(31)
  05fb94c  stw 21, 172(31)
  05fb950  stw 24, 184(31)
  05fb954  stw 26, 188(31)
  05fb958  stw 27, 192(31)
  05fb95c  stw 29, 196(31)
  05fb960  mr 25, 3
  05fb964  stw 0, 204(31)
  05fb968  mr 22, 6
  05fb96c  mr 23, 10
  05fb970  mr 9, 3
  05fb974  bt 30, 0x5fbd74
  05fb978  lwz 24, 20(25)
  05fb97c  clrldi 21, 9, 32
  05fb980  xori 26, 24, 1
  05fb984  slwi 0, 26, 4
  05fb988  slwi 9, 26, 6
  05fb98c  sub 9, 9, 0
  05fb990  addi 9, 9, 16
  05fb994  extsw 9, 9
  05fb998  add 9, 21, 9
  05fb99c  lwz 0, 12(9)
  05fb9a0  cmpwi 7, 0, 0
  05fb9a4  bt 30, 0x5fbd6c
  05fb9a8  lwz 0, 484(31)
  05fb9ac  mr 27, 22
  05fb9b0  li 17, -1
  05fb9b4  rlwinm 0, 0, 0, 11, 11
  05fb9b8  cmpwi 7, 0, 0
  05fb9bc  bt 30, 0x5fb9e0
  05fb9c0  rlwinm 0, 23, 0, 11, 11
  05fb9c4  cmpwi 7, 0, 0
  05fb9c8  bf 30, 0x5fbb88
  05fb9cc  lwz 0, 0(22)
  05fb9d0  add 27, 22, 0
  05fb9d4  cmplw 7, 22, 27
  05fb9d8  bt 29, 0x5fba28
  05fb9dc  nop
  05fb9e0  cmplw 7, 30, 27
  05fb9e4  bf 29, 0x5fba28
  05fb9e8  rlwinm 0, 23, 0, 16, 16
  05fb9ec  cmpwi 4, 0, 0
  05fb9f0  bt 18, 0x5fbad0
  05fb9f4  rlwinm 0, 23, 0, 22, 22
  05fb9f8  mr 8, 27
  05fb9fc  cmpwi 7, 0, 0
  05fba00  bt 30, 0x5fbae4
  05fba04  bt 18, 0x5fbaac
  05fba08  rlwinm 0, 23, 0, 14, 14
  05fba0c  cmpwi 7, 0, 0
  05fba10  bf 30, 0x5fba28
  05fba14  cmplw 7, 8, 22
  05fba18  bt 28, 0x5fba28
  05fba1c  cmplw 7, 8, 30
  05fba20  bt 28, 0x5fbc2c
  05fba24  nop
  05fba28  lwz 9, 8(25)
  05fba2c  lwz 0, 4(25)
  05fba30  ld 11, 0(1)
  05fba34  mullw 0, 0, 9
  05fba38  srwi 0, 0, 6
  05fba3c  lwz 12, 8(11)
  05fba40  ld 14, -144(11)
  05fba44  sub 3, 0, 17
  05fba48  ld 15, -136(11)
  05fba4c  ld 16, -128(11)
  05fba50  mtocrf 8, 12
  05fba54  ld 17, -120(11)
  05fba58  ld 18, -112(11)
  05fba5c  ld 19, -104(11)
  05fba60  ld 20, -96(11)
  05fba64  ld 21, -88(11)
  05fba68  ld 22, -80(11)
  05fba6c  ld 23, -72(11)
  05fba70  ld 24, -64(11)
  05fba74  ld 25, -56(11)
  05fba78  ld 26, -48(11)
  05fba7c  ld 27, -40(11)
  05fba80  ld 28, -32(11)
  05fba84  ld 29, -24(11)
  05fba88  ld 30, -16(11)
  05fba8c  ld 31, -8(11)
  05fba90  mulli 3, 3, 100
  05fba94  divwu 3, 3, 0
  05fba98  ld 0, 16(11)
  05fba9c  clrldi 3, 3, 32
  05fbaa0  mtlr 0
  05fbaa4  mr 1, 11
  05fbaa8  blr
  05fbaac  addi 9, 27, -4
  05fbab0  rlwinm 0, 23, 0, 14, 14
  05fbab4  clrldi 9, 9, 32
  05fbab8  cmpwi 7, 0, 0
  05fbabc  lwz 11, 0(9)
  05fbac0  add 11, 27, 11
  05fbac4  addi 8, 11, -4
  05fbac8  bt 30, 0x5fba14
  05fbacc  b 0x5fba28
  05fbad0  rlwinm 0, 23, 0, 22, 22
  05fbad4  addi 27, 27, 4
  05fbad8  cmpwi 7, 0, 0
  05fbadc  mr 8, 27
  05fbae0  bf 30, 0x5fba04
  05fbae4  slwi 10, 26, 4
  05fbae8  lwz 5, 4(25)
  05fbaec  slwi 0, 24, 4
  05fbaf0  lwz 6, 8(25)
  05fbaf4  slwi 11, 26, 6
  05fbaf8  slwi 9, 24, 6
  05fbafc  sub 11, 11, 10
  05fbb00  sub 9, 9, 0
  05fbb04  addi 11, 11, 16
  05fbb08  addi 9, 9, 16
  05fbb0c  extsw 11, 11
  05fbb10  extsw 9, 9
  05fbb14  add 11, 21, 11
  05fbb18  add 9, 21, 9
  05fbb1c  clrldi 0, 20, 32
  05fbb20  clrldi 8, 27, 32
  05fbb24  clrldi 29, 16, 32
  05fbb28  lwz 3, 12(11)
  05fbb2c  clrldi 28, 23, 32
  05fbb30  lwz 7, 16(9)
  05fbb34  clrldi 11, 19, 32
  05fbb38  lwz 4, 12(9)
  05fbb3c  extsw 10, 18
  05fbb40  std 0, 112(1)
  05fbb44  addi 0, 31, 172
  05fbb48  extsw 7, 7
  05fbb4c  std 0, 136(1)
  05fbb50  clrldi 9, 30, 32
  05fbb54  addi 0, 31, 160
  05fbb58  std 11, 120(1)
  05fbb5c  std 0, 152(1)
  05fbb60  std 29, 128(1)
  05fbb64  std 28, 144(1)
  05fbb68  bl 0x5f87d0
  05fbb6c  lwz 0, 160(31)
  05fbb70  mr 8, 3
  05fbb74  cmplw 7, 17, 0
  05fbb78  bf 29, 0x5fba04
  05fbb7c  mr 17, 0
  05fbb80  bf 18, 0x5fba08
  05fbb84  b 0x5fbaac
  05fbb88  slwi 10, 26, 4
  05fbb8c  lwz 5, 4(25)
  05fbb90  slwi 0, 24, 4
  05fbb94  lwz 6, 8(25)
  05fbb98  slwi 11, 26, 6
  05fbb9c  slwi 9, 24, 6
  05fbba0  sub 11, 11, 10
  05fbba4  sub 9, 9, 0
  05fbba8  addi 11, 11, 48
  05fbbac  addi 9, 9, 48
  05fbbb0  extsw 11, 11
  05fbbb4  extsw 9, 9
  05fbbb8  add 11, 21, 11
  05fbbbc  add 9, 21, 9
  05fbbc0  clrldi 0, 20, 32
  05fbbc4  addi 8, 22, 4
  05fbbc8  clrldi 29, 16, 32
  05fbbcc  lwz 3, 16(11)
  05fbbd0  clrldi 8, 8, 32
  05fbbd4  lwz 7, 20(9)
  05fbbd8  clrldi 11, 19, 32
  05fbbdc  lwz 4, 16(9)
  05fbbe0  clrldi 28, 23, 32
  05fbbe4  std 0, 112(1)
  05fbbe8  addi 0, 31, 172
  05fbbec  extsw 7, 7
  05fbbf0  std 0, 136(1)
  05fbbf4  clrldi 9, 30, 32
  05fbbf8  addi 0, 31, 160
  05fbbfc  extsw 10, 18
  05fbc00  std 0, 152(1)
  05fbc04  std 11, 120(1)
  05fbc08  std 29, 128(1)
  05fbc0c  std 28, 144(1)
  05fbc10  bl 0x5f87d0
  05fbc14  lwz 0, 0(22)
  05fbc18  lwz 17, 160(31)
  05fbc1c  add 27, 22, 0
  05fbc20  cmplw 7, 22, 27
  05fbc24  bf 29, 0x5fb9e0
  05fbc28  b 0x5fba28
  05fbc2c  slwi 10, 24, 6
  05fbc30  slwi 9, 24, 4
  05fbc34  slwi 11, 26, 6
  05fbc38  slwi 0, 26, 4
  05fbc3c  sub 29, 10, 9
  05fbc40  sub 24, 11, 0
  05fbc44  addi 9, 29, 16
  05fbc48  addi 11, 24, 16
  05fbc4c  extsw 9, 9
  05fbc50  extsw 11, 11
  05fbc54  add 9, 21, 9
  05fbc58  add 11, 21, 11
  05fbc5c  extsw 18, 18
  05fbc60  addi 0, 31, 172
  05fbc64  std 18, 208(31)
  05fbc68  lwz 7, 28(9)
  05fbc6c  slwi 10, 16, 1
  05fbc70  lwz 4, 24(9)
  05fbc74  clrldi 18, 30, 32
  05fbc78  addi 9, 31, 160
  05fbc7c  lwz 5, 12(25)
  05fbc80  lwz 3, 24(11)
  05fbc84  clrldi 15, 0, 32
  05fbc88  lwz 6, 16(25)
  05fbc8c  clrldi 16, 10, 32
  05fbc90  clrldi 14, 9, 32
  05fbc94  ld 10, 208(31)
  05fbc98  clrldi 8, 8, 32
  05fbc9c  clrldi 27, 20, 32
  05fbca0  clrldi 26, 19, 32
  05fbca4  clrldi 28, 23, 32
  05fbca8  extsw 7, 7
  05fbcac  mr 9, 18
  05fbcb0  std 27, 112(1)
  05fbcb4  std 26, 120(1)
  05fbcb8  std 16, 128(1)
  05fbcbc  std 15, 136(1)
  05fbcc0  std 28, 144(1)
  05fbcc4  std 14, 152(1)
  05fbcc8  bl 0x5f87d0
  05fbccc  lwz 0, 160(31)
  05fbcd0  mr 8, 3
  05fbcd4  slwi 0, 0, 2
  05fbcd8  cmplw 7, 17, 0
  05fbcdc  stw 0, 160(31)
  05fbce0  bf 29, 0x5fbce8
  05fbce4  mr 17, 0
  05fbce8  cmplw 7, 22, 8
  05fbcec  bt 29, 0x5fba28
  05fbcf0  cmplw 7, 30, 8
  05fbcf4  bf 29, 0x5fba28
  05fbcf8  addi 9, 29, 32
  05fbcfc  lwz 5, 12(25)
  05fbd00  addi 11, 24, 32
  05fbd04  lwz 6, 16(25)
  05fbd08  extsw 9, 9
  05fbd0c  ld 10, 208(31)
  05fbd10  extsw 11, 11
  05fbd14  add 9, 21, 9
  05fbd18  add 11, 21, 11
  05fbd1c  clrldi 8, 8, 32
  05fbd20  lwz 7, 24(9)
  05fbd24  lwz 4, 20(9)
  05fbd28  mr 9, 18
  05fbd2c  lwz 3, 20(11)
  05fbd30  extsw 7, 7
  05fbd34  std 27, 112(1)
  05fbd38  std 26, 120(1)
  05fbd3c  std 16, 128(1)
  05fbd40  std 15, 136(1)
  05fbd44  std 28, 144(1)
  05fbd48  std 14, 152(1)
  05fbd4c  bl 0x5f87d0
  05fbd50  lwz 0, 160(31)
  05fbd54  slwi 0, 0, 2
  05fbd58  cmplw 7, 17, 0
  05fbd5c  stw 0, 160(31)
  05fbd60  bf 29, 0x5fba28
  05fbd64  mr 17, 0
  05fbd68  b 0x5fba28
  05fbd6c  mr 26, 24
  05fbd70  b 0x5fb9a8
  05fbd74  addi 20, 31, 168
  05fbd78  li 19, 0
  05fbd7c  li 16, 0
  05fbd80  b 0x5fb978

FUN_005fbd88:   # 0x5fbd88, 0x8 bytes
  05fbd88  sync
  05fbd8c  blr

FUN_005fbd90:   # 0x5fbd90, 0x10 bytes
  05fbd90  lwz 3, 0(3)
  05fbd94  lwsync
  05fbd98  clrldi 3, 3, 32
  05fbd9c  blr

FUN_005fbda0:   # 0x5fbda0, 0xc bytes
  05fbda0  ld 3, 0(3)
  05fbda4  lwsync
  05fbda8  blr

FUN_005fbdac:   # 0x5fbdac, 0xc bytes
  05fbdac  lwsync
  05fbdb0  stw 4, 0(3)
  05fbdb4  blr

FUN_005fbdb8:   # 0x5fbdb8, 0xc bytes
  05fbdb8  lwsync
  05fbdbc  std 4, 0(3)
  05fbdc0  blr

FUN_005fbdc8:   # 0x5fbdc8, 0x58 bytes
  05fbdc8  sync
  05fbdcc  clrldi 3, 3, 32
  05fbdd0  mr 11, 3
  05fbdd4  nop
  05fbdd8  lwarx 9, 0, 11
  05fbddc  lwz 0, 0(4)
  05fbde0  cmpw 7, 0, 9
  05fbde4  bf 30, 0x5fbe0c
  05fbde8  stwcx. 5, 0, 3
  05fbdec  mfocrf 0, 128
  05fbdf0  rlwinm 0, 0, 0, 2, 2
  05fbdf4  cmpwi 7, 0, 0
  05fbdf8  bt 30, 0x5fbdd8
  05fbdfc  lwsync
  05fbe00  li 3, 1
  05fbe04  extsw 3, 3
  05fbe08  blr
  05fbe0c  stw 9, 0(4)
  05fbe10  lwsync
  05fbe14  li 3, 0
  05fbe18  extsw 3, 3
  05fbe1c  blr

FUN_005fbe20:   # 0x5fbe20, 0x58 bytes
  05fbe20  sync
  05fbe24  clrldi 3, 3, 32
  05fbe28  mr 11, 3
  05fbe2c  nop
  05fbe30  ldarx 9, 0, 11
  05fbe34  ld 0, 0(4)
  05fbe38  cmpd 7, 0, 9
  05fbe3c  bf 30, 0x5fbe64
  05fbe40  stdcx. 5, 0, 3
  05fbe44  mfocrf 0, 128
  05fbe48  rlwinm 0, 0, 0, 2, 2
  05fbe4c  cmpdi 7, 0, 0
  05fbe50  bt 30, 0x5fbe30
  05fbe54  lwsync
  05fbe58  li 3, 1
  05fbe5c  extsw 3, 3
  05fbe60  blr
  05fbe64  std 9, 0(4)
  05fbe68  lwsync
  05fbe6c  li 3, 0
  05fbe70  extsw 3, 3
  05fbe74  blr

FUN_005fbe78:   # 0x5fbe78, 0x2c bytes
  05fbe78  sync
  05fbe7c  nop
  05fbe80  lwarx 9, 0, 3
  05fbe84  stwcx. 4, 0, 3
  05fbe88  mfocrf 0, 128
  05fbe8c  rlwinm 0, 0, 0, 2, 2
  05fbe90  cmpwi 7, 0, 0
  05fbe94  bt 30, 0x5fbe80
  05fbe98  lwsync
  05fbe9c  clrldi 3, 9, 32
  05fbea0  blr

FUN_005fbea8:   # 0x5fbea8, 0x2c bytes
  05fbea8  sync
  05fbeac  nop
  05fbeb0  ldarx 9, 0, 3
  05fbeb4  stdcx. 4, 0, 3
  05fbeb8  mfocrf 0, 128
  05fbebc  rlwinm 0, 0, 0, 2, 2
  05fbec0  cmpdi 7, 0, 0
  05fbec4  bt 30, 0x5fbeb0
  05fbec8  lwsync
  05fbecc  mr 3, 9
  05fbed0  blr

FUN_005fbed8:   # 0x5fbed8, 0x20 bytes
  05fbed8  sync
  05fbedc  ldarx 0, 0, 3
  05fbee0  add 9, 0, 4
  05fbee4  stdcx. 9, 0, 3
  05fbee8  bf- 2, 0x5fbedc
  05fbeec  isync
  05fbef0  mr 3, 0
  05fbef4  blr

FUN_005fbef8:   # 0x5fbef8, 0x20 bytes
  05fbef8  sync
  05fbefc  lwarx 0, 0, 3
  05fbf00  add 9, 0, 4
  05fbf04  stwcx. 9, 0, 3
  05fbf08  bf- 2, 0x5fbefc
  05fbf0c  isync
  05fbf10  clrldi 3, 0, 32
  05fbf14  blr

FUN_005fbf18:   # 0x5fbf18, 0x24 bytes
  05fbf18  mr 9, 3
  05fbf1c  sync
  05fbf20  ldarx 3, 0, 9
  05fbf24  cmpd 3, 5
  05fbf28  bclr 6, 2
  05fbf2c  stdcx. 4, 0, 9
  05fbf30  bf- 2, 0x5fbf20
  05fbf34  isync
  05fbf38  blr

FUN_005fbf3c:   # 0x5fbf3c, 0x28 bytes
  05fbf3c  mr 9, 3
  05fbf40  sync
  05fbf44  lwarx 3, 0, 9
  05fbf48  cmpw 3, 5
  05fbf4c  bf- 2, 0x5fbf5c
  05fbf50  stwcx. 4, 0, 9
  05fbf54  bf- 2, 0x5fbf44
  05fbf58  isync
  05fbf5c  clrldi 3, 3, 32
  05fbf60  blr

FUN_005fbf64:   # 0x5fbf64, 0xc bytes
  05fbf64  lwz 9, -32120(2)
  05fbf68  lwz 3, 0(9)
  05fbf6c  blr

FUN_005fbf70:   # 0x5fbf70, 0x4 bytes
  05fbf70  blr

FUN_005fbf74:   # 0x5fbf74, 0x38 bytes
  05fbf74  li 11, 141
  05fbf78  mflr 0
  05fbf7c  std 0, 16(1)
  05fbf80  mr 0, 3
  05fbf84  lis 3, 152
  05fbf88  cmpwi 7, 0, -1
  05fbf8c  ori 3, 3, 38528
  05fbf90  bt 30, 0x5fbf9c
  05fbf94  mulli 0, 0, 1000
  05fbf98  clrldi 3, 0, 32
  05fbf9c  sc
  05fbfa0  ld 0, 16(1)
  05fbfa4  mtlr 0
  05fbfa8  blr

FUN_005fbfac:   # 0x5fbfac, 0x1c bytes
  05fbfac  li 11, 43
  05fbfb0  mflr 0
  05fbfb4  std 0, 16(1)
  05fbfb8  sc
  05fbfbc  ld 0, 16(1)
  05fbfc0  mtlr 0
  05fbfc4  blr

FUN_005fbfc8:   # 0x5fbfc8, 0xc bytes
  05fbfc8  mr 31, 31
  05fbfcc  mr 29, 29
  05fbfd0  blr

FUN_005fbfd4:   # 0x5fbfd4, 0xc4 bytes
  05fbfd4  mfcr 12
  05fbfd8  std 31, -8(1)
  05fbfdc  li 10, 0
  05fbfe0  lwz 11, -32116(2)
  05fbfe4  li 9, 2
  05fbfe8  mr 31, 3
  05fbfec  mr 8, 5
  05fbff0  stw 12, 8(1)
  05fbff4  mflr 0
  05fbff8  std 0, 16(1)
  05fbffc  addi 0, 3, 15
  05fc000  rlwinm 0, 0, 0, 0, 27
  05fc004  stw 0, 60(3)
  05fc008  li 0, 512
  05fc00c  stw 9, -48(1)
  05fc010  stw 0, -44(1)
  05fc014  li 0, 0
  05fc018  stw 10, -32(1)
  05fc01c  stb 0, -24(1)
  05fc020  std 10, -40(1)
  05fc024  addi 9, 1, -24
  05fc028  ld 0, 0(11)
  05fc02c  std 0, 0(9)
  05fc030  li 0, 0
  05fc034  addi 10, 9, 7
  05fc038  stb 0, 0(10)
  05fc03c  cmpwi 7, 8, 0
  05fc040  extsw 5, 4
  05fc044  li 11, 90
  05fc048  addi 4, 1, -48
  05fc04c  lis 6, 8192
  05fc050  bf 29, 0x5fc058
  05fc054  extsw 6, 8
  05fc058  lwz 3, 60(31)
  05fc05c  sc
  05fc060  cmpwi 4, 3, 0
  05fc064  li 3, 0
  05fc068  bf 18, 0x5fc07c
  05fc06c  lwz 9, 60(31)
  05fc070  li 0, 8989
  05fc074  li 3, 1
  05fc078  stw 0, 4(9)
  05fc07c  ld 0, 16(1)
  05fc080  extsw 3, 3
  05fc084  lwz 12, 8(1)
  05fc088  mtlr 0
  05fc08c  ld 31, -8(1)
  05fc090  mtocrf 8, 12
  05fc094  blr

FUN_005fc098:   # 0x5fc098, 0x60 bytes
  05fc098  cmpdi 3, 0
  05fc09c  mflr 0
  05fc0a0  std 29, -24(1)
  05fc0a4  std 0, 16(1)
  05fc0a8  mr 29, 3
  05fc0ac  bt 2, 0x5fc0c4
  05fc0b0  lwz 9, 60(3)
  05fc0b4  li 11, 91
  05fc0b8  lwz 0, 4(9)
  05fc0bc  cmpwi 7, 0, 8989
  05fc0c0  bt 30, 0x5fc0d4
  05fc0c4  ld 0, 16(1)
  05fc0c8  ld 29, -24(1)
  05fc0cc  mtlr 0
  05fc0d0  blr
  05fc0d4  lwz 3, 0(9)
  05fc0d8  sc
  05fc0dc  lwz 29, 60(29)
  05fc0e0  li 0, 0
  05fc0e4  stw 0, 4(29)
  05fc0e8  ld 0, 16(1)
  05fc0ec  ld 29, -24(1)
  05fc0f0  mtlr 0
  05fc0f4  blr

FUN_005fc0f8:   # 0x5fc0f8, 0x98 bytes
  05fc0f8  cmpdi 3, 0
  05fc0fc  mflr 0
  05fc100  li 9, 0
  05fc104  std 0, 16(1)
  05fc108  bt 2, 0x5fc120
  05fc10c  lwz 3, 60(3)
  05fc110  cmpwi 6, 4, 0
  05fc114  lwz 0, 4(3)
  05fc118  cmpwi 7, 0, 8989
  05fc11c  bt 30, 0x5fc130
  05fc120  ld 0, 16(1)
  05fc124  extsw 3, 9
  05fc128  mtlr 0
  05fc12c  blr
  05fc130  cmpwi 7, 4, -1
  05fc134  li 11, 93
  05fc138  bf 26, 0x5fc168
  05fc13c  lwz 3, 0(3)
  05fc140  sc
  05fc144  srawi 0, 3, 31
  05fc148  xor 9, 0, 3
  05fc14c  sub 9, 9, 0
  05fc150  ld 0, 16(1)
  05fc154  addi 9, 9, -1
  05fc158  mtlr 0
  05fc15c  srwi 9, 9, 31
  05fc160  extsw 3, 9
  05fc164  blr
  05fc168  lwz 3, 0(3)
  05fc16c  li 0, 0
  05fc170  li 11, 92
  05fc174  clrldi 3, 3, 32
  05fc178  bt 30, 0x5fc184
  05fc17c  mulli 0, 4, 1000
  05fc180  clrldi 0, 0, 32
  05fc184  mr 4, 0
  05fc188  sc
  05fc18c  b 0x5fc144

FUN_005fc190:   # 0x5fc190, 0x48 bytes
  05fc190  cmpdi 3, 0
  05fc194  mflr 0
  05fc198  std 0, 16(1)
  05fc19c  bt 2, 0x5fc1b8
  05fc1a0  lwz 3, 60(3)
  05fc1a4  extsw 4, 4
  05fc1a8  li 11, 94
  05fc1ac  lwz 0, 4(3)
  05fc1b0  cmpwi 7, 0, 8989
  05fc1b4  bt 30, 0x5fc1c4
  05fc1b8  ld 0, 16(1)
  05fc1bc  mtlr 0
  05fc1c0  blr
  05fc1c4  lwz 3, 0(3)
  05fc1c8  sc
  05fc1cc  ld 0, 16(1)
  05fc1d0  mtlr 0
  05fc1d4  blr

FUN_005fc1d8:   # 0x5fc1d8, 0x34 bytes
  05fc1d8  cmpdi 3, 0
  05fc1dc  mflr 0
  05fc1e0  stdu 1, -112(1)
  05fc1e4  std 0, 128(1)
  05fc1e8  li 4, 0
  05fc1ec  bt 2, 0x5fc1fc
  05fc1f0  lwz 3, 124(3)
  05fc1f4  bl 0x6504c4
  05fc1f8  ld 2, 40(1)
  05fc1fc  ld 0, 128(1)
  05fc200  addi 1, 1, 112
  05fc204  mtlr 0
  05fc208  blr

FUN_005fc20c:   # 0x5fc20c, 0xb0 bytes
  05fc20c  cmpdi 3, 0
  05fc210  mflr 0
  05fc214  stdu 1, -112(1)
  05fc218  mr 9, 3
  05fc21c  std 0, 128(1)
  05fc220  mr 11, 4
  05fc224  li 3, 0
  05fc228  cmpwi 6, 4, -1
  05fc22c  bt 2, 0x5fc270
  05fc230  li 4, 0
  05fc234  lwz 0, 124(9)
  05fc238  cmpwi 7, 11, 0
  05fc23c  bt 26, 0x5fc2b4
  05fc240  clrldi 3, 0, 32
  05fc244  bt 30, 0x5fc284
  05fc248  clrldi 3, 0, 32
  05fc24c  mulli 4, 11, 1000
  05fc250  rlwinm 4, 4, 0, 0, 28
  05fc254  bl 0x6504c4
  05fc258  ld 2, 40(1)
  05fc25c  srawi 0, 3, 31
  05fc260  xor 9, 0, 3
  05fc264  sub 9, 9, 0
  05fc268  addi 9, 9, -1
  05fc26c  srwi 3, 9, 31
  05fc270  ld 0, 128(1)
  05fc274  extsw 3, 3
  05fc278  addi 1, 1, 112
  05fc27c  mtlr 0
  05fc280  blr
  05fc284  bl 0x650724
  05fc288  ld 2, 40(1)
  05fc28c  srawi 0, 3, 31
  05fc290  xor 9, 0, 3
  05fc294  sub 9, 9, 0
  05fc298  ld 0, 128(1)
  05fc29c  addi 1, 1, 112
  05fc2a0  addi 9, 9, -1
  05fc2a4  mtlr 0
  05fc2a8  srwi 3, 9, 31
  05fc2ac  extsw 3, 3
  05fc2b0  blr
  05fc2b4  clrldi 3, 0, 32
  05fc2b8  b 0x5fc254

FUN_005fc2bc:   # 0x5fc2bc, 0x30 bytes
  05fc2bc  cmpdi 3, 0
  05fc2c0  mflr 0
  05fc2c4  stdu 1, -112(1)
  05fc2c8  std 0, 128(1)
  05fc2cc  bt 2, 0x5fc2dc
  05fc2d0  lwz 3, 124(3)
  05fc2d4  bl 0x6504e4
  05fc2d8  ld 2, 40(1)
  05fc2dc  ld 0, 128(1)
  05fc2e0  addi 1, 1, 112
  05fc2e4  mtlr 0
  05fc2e8  blr

FUN_005fc2ec:   # 0x5fc2ec, 0x1a4 bytes
  05fc2ec  mfcr 12
  05fc2f0  cmpdi 3, 0
  05fc2f4  stdu 1, -176(1)
  05fc2f8  std 26, 128(1)
  05fc2fc  std 28, 144(1)
  05fc300  std 30, 160(1)
  05fc304  std 27, 136(1)
  05fc308  std 29, 152(1)
  05fc30c  std 31, 168(1)
  05fc310  mr 28, 5
  05fc314  mr 30, 4
  05fc318  mr 26, 5
  05fc31c  stw 12, 184(1)
  05fc320  mflr 0
  05fc324  std 0, 192(1)
  05fc328  bt 2, 0x5fc3b8
  05fc32c  lwz 3, 252(3)
  05fc330  clrldi 29, 3, 32
  05fc334  lwz 0, 92(29)
  05fc338  cmpwi 7, 0, 0
  05fc33c  bt 30, 0x5fc384
  05fc340  cmpwi 7, 5, 0
  05fc344  bt 30, 0x5fc488
  05fc348  li 3, 1
  05fc34c  stw 0, 0(5)
  05fc350  ld 0, 192(1)
  05fc354  extsw 3, 3
  05fc358  lwz 12, 184(1)
  05fc35c  ld 26, 128(1)
  05fc360  mtlr 0
  05fc364  ld 27, 136(1)
  05fc368  mtocrf 8, 12
  05fc36c  ld 28, 144(1)
  05fc370  ld 29, 152(1)
  05fc374  ld 30, 160(1)
  05fc378  ld 31, 168(1)
  05fc37c  addi 1, 1, 176
  05fc380  blr
  05fc384  cmpwi 7, 4, -1
  05fc388  bt 30, 0x5fc3fc
  05fc38c  cmpwi 7, 4, 0
  05fc390  addi 31, 3, 8
  05fc394  bt 30, 0x5fc460
  05fc398  clrldi 31, 31, 32
  05fc39c  mulli 4, 30, 1000
  05fc3a0  mr 3, 31
  05fc3a4  rlwinm 4, 4, 0, 0, 28
  05fc3a8  bl 0x6504c4
  05fc3ac  ld 2, 40(1)
  05fc3b0  cmpwi 7, 3, 0
  05fc3b4  bt 30, 0x5fc3f0
  05fc3b8  ld 0, 192(1)
  05fc3bc  li 3, 0
  05fc3c0  lwz 12, 184(1)
  05fc3c4  extsw 3, 3
  05fc3c8  ld 26, 128(1)
  05fc3cc  ld 27, 136(1)
  05fc3d0  mtlr 0
  05fc3d4  ld 28, 144(1)
  05fc3d8  mtocrf 8, 12
  05fc3dc  ld 29, 152(1)
  05fc3e0  ld 30, 160(1)
  05fc3e4  ld 31, 168(1)
  05fc3e8  addi 1, 1, 176
  05fc3ec  blr
  05fc3f0  mr 3, 31
  05fc3f4  bl 0x6504e4
  05fc3f8  ld 2, 40(1)
  05fc3fc  ld 3, 80(29)
  05fc400  addi 4, 1, 112
  05fc404  li 11, 44
  05fc408  sc
  05fc40c  ld 0, 112(1)
  05fc410  cmpwi 4, 26, 0
  05fc414  oris 0, 0, 32768
  05fc418  stw 0, 92(29)
  05fc41c  bt 18, 0x5fc488
  05fc420  ld 0, 112(1)
  05fc424  li 3, 1
  05fc428  stw 0, 0(28)
  05fc42c  ld 0, 192(1)
  05fc430  extsw 3, 3
  05fc434  lwz 12, 184(1)
  05fc438  ld 26, 128(1)
  05fc43c  mtlr 0
  05fc440  ld 27, 136(1)
  05fc444  mtocrf 8, 12
  05fc448  ld 28, 144(1)
  05fc44c  ld 29, 152(1)
  05fc450  ld 30, 160(1)
  05fc454  ld 31, 168(1)
  05fc458  addi 1, 1, 176
  05fc45c  blr
  05fc460  clrldi 27, 31, 32
  05fc464  mr 3, 27
  05fc468  bl 0x650724
  05fc46c  ld 2, 40(1)
  05fc470  cmpwi 7, 3, 0
  05fc474  bf 30, 0x5fc398
  05fc478  mr 3, 27
  05fc47c  bl 0x6504e4
  05fc480  ld 2, 40(1)
  05fc484  b 0x5fc3fc
  05fc488  li 3, 1
  05fc48c  b 0x5fc350

FUN_005fc490:   # 0x5fc490, 0x78 bytes
  05fc490  cmpdi 3, 0
  05fc494  mflr 0
  05fc498  stdu 1, -144(1)
  05fc49c  std 29, 120(1)
  05fc4a0  std 31, 136(1)
  05fc4a4  std 0, 160(1)
  05fc4a8  li 4, 0
  05fc4ac  bt 2, 0x5fc4dc
  05fc4b0  lwz 3, 124(3)
  05fc4b4  clrldi 31, 3, 32
  05fc4b8  addi 3, 3, 24
  05fc4bc  clrldi 3, 3, 32
  05fc4c0  lwz 29, 24(31)
  05fc4c4  clrldi 5, 29, 32
  05fc4c8  bl 0x5fbf3c
  05fc4cc  nop
  05fc4d0  cmpwi 6, 29, 1
  05fc4d4  cmpw 7, 29, 3
  05fc4d8  bt 30, 0x5fc4f4
  05fc4dc  ld 0, 160(1)
  05fc4e0  ld 29, 120(1)
  05fc4e4  ld 31, 136(1)
  05fc4e8  mtlr 0
  05fc4ec  addi 1, 1, 144
  05fc4f0  blr
  05fc4f4  mr 3, 31
  05fc4f8  bf 26, 0x5fc4dc
  05fc4fc  bl 0x650784
  05fc500  ld 2, 40(1)
  05fc504  b 0x5fc4dc

FUN_005fc508:   # 0x5fc508, 0xa0 bytes
  05fc508  stdu 1, -144(1)
  05fc50c  mflr 0
  05fc510  std 31, 136(1)
  05fc514  std 0, 160(1)
  05fc518  addi 0, 3, 15
  05fc51c  lwz 11, -32116(2)
  05fc520  li 10, 0
  05fc524  rlwinm 0, 0, 0, 0, 27
  05fc528  addi 9, 1, 120
  05fc52c  clrldi 31, 0, 32
  05fc530  stw 0, 124(3)
  05fc534  li 0, 2
  05fc538  stw 10, 24(31)
  05fc53c  stw 0, 112(1)
  05fc540  li 0, 16
  05fc544  stb 10, 120(1)
  05fc548  stw 0, 116(1)
  05fc54c  ld 8, 0(11)
  05fc550  std 8, 0(9)
  05fc554  li 8, 0
  05fc558  addi 10, 9, 7
  05fc55c  stb 8, 0(10)
  05fc560  addi 4, 1, 112
  05fc564  mr 3, 31
  05fc568  bl 0x6505a4
  05fc56c  ld 2, 40(1)
  05fc570  cmpwi 7, 3, 0
  05fc574  li 3, 0
  05fc578  bf 30, 0x5fc590
  05fc57c  bl 0x5fbd88
  05fc580  nop
  05fc584  li 0, 1
  05fc588  li 3, 1
  05fc58c  stw 0, 24(31)
  05fc590  ld 0, 160(1)
  05fc594  extsw 3, 3
  05fc598  ld 31, 136(1)
  05fc59c  addi 1, 1, 144
  05fc5a0  mtlr 0
  05fc5a4  blr

FUN_005fc5a8:   # 0x5fc5a8, 0x34 bytes
  05fc5a8  stdu 1, -128(1)
  05fc5ac  mflr 0
  05fc5b0  addi 3, 1, 112
  05fc5b4  std 0, 144(1)
  05fc5b8  li 0, 0
  05fc5bc  std 0, 112(1)
  05fc5c0  bl 0x6505c4
  05fc5c4  ld 2, 40(1)
  05fc5c8  ld 0, 144(1)
  05fc5cc  ld 3, 112(1)
  05fc5d0  addi 1, 1, 128
  05fc5d4  mtlr 0
  05fc5d8  blr

FUN_005fc5dc:   # 0x5fc5dc, 0x1c bytes
  05fc5dc  li 11, 47
  05fc5e0  mflr 0
  05fc5e4  std 0, 16(1)
  05fc5e8  sc
  05fc5ec  ld 0, 16(1)
  05fc5f0  mtlr 0
  05fc5f4  blr

FUN_005fc5f8:   # 0x5fc5f8, 0x28 bytes
  05fc5f8  addi 4, 1, -16
  05fc5fc  mflr 0
  05fc600  li 11, 48
  05fc604  std 0, 16(1)
  05fc608  sc
  05fc60c  lwz 3, -16(1)
  05fc610  ld 0, 16(1)
  05fc614  extsw 3, 3
  05fc618  mtlr 0
  05fc61c  blr

FUN_005fc620:   # 0x5fc620, 0x378 bytes
  05fc620  mfcr 12
  05fc624  stdu 1, -256(1)
  05fc628  mr 9, 3
  05fc62c  std 27, 216(1)
  05fc630  lwz 27, -32120(2)
  05fc634  std 23, 184(1)
  05fc638  mr 23, 3
  05fc63c  addi 3, 27, 8
  05fc640  std 26, 208(1)
  05fc644  std 20, 160(1)
  05fc648  clrldi 3, 3, 32
  05fc64c  mr 20, 4
  05fc650  li 4, 1
  05fc654  std 19, 152(1)
  05fc658  std 21, 168(1)
  05fc65c  std 22, 176(1)
  05fc660  std 24, 192(1)
  05fc664  std 25, 200(1)
  05fc668  std 28, 224(1)
  05fc66c  std 29, 232(1)
  05fc670  std 30, 240(1)
  05fc674  std 31, 248(1)
  05fc678  mr 25, 5
  05fc67c  mr 19, 6
  05fc680  mr 24, 7
  05fc684  mr 21, 8
  05fc688  stw 12, 264(1)
  05fc68c  mflr 0
  05fc690  std 0, 272(1)
  05fc694  addi 0, 9, 15
  05fc698  rlwinm 26, 0, 0, 0, 27
  05fc69c  stw 26, 252(9)
  05fc6a0  bl 0x5fbed8
  05fc6a4  nop
  05fc6a8  cmpdi 3, 0
  05fc6ac  mr 22, 3
  05fc6b0  bt 2, 0x5fc8b4
  05fc6b4  lis 9, 4660
  05fc6b8  lwz 31, -32112(2)
  05fc6bc  li 0, 301
  05fc6c0  ori 9, 9, 22135
  05fc6c4  mtctr 0
  05fc6c8  b 0x5fc6d0
  05fc6cc  bdz- 0x5fc964
  05fc6d0  mr 31, 31
  05fc6d4  mr 29, 29
  05fc6d8  lwz 0, 0(31)
  05fc6dc  cmpw 7, 0, 9
  05fc6e0  bt 30, 0x5fc6cc
  05fc6e4  li 28, 0
  05fc6e8  li 30, 0
  05fc6ec  nop
  05fc6f0  extsw 9, 30
  05fc6f4  addi 0, 27, 16
  05fc6f8  add 9, 9, 27
  05fc6fc  add 3, 30, 0
  05fc700  clrldi 3, 3, 32
  05fc704  lwz 29, 16(9)
  05fc708  li 9, 1
  05fc70c  not 0, 29
  05fc710  clrldi 5, 29, 32
  05fc714  cntlzw 0, 0
  05fc718  subfic 31, 0, 31
  05fc71c  slw 9, 9, 31
  05fc720  cmpwi 7, 31, -1
  05fc724  or 4, 29, 9
  05fc728  clrldi 4, 4, 32
  05fc72c  bt 30, 0x5fc8a0
  05fc730  bl 0x5fbf3c
  05fc734  nop
  05fc738  cmpw 7, 29, 3
  05fc73c  bf 30, 0x5fc6f0
  05fc740  clrlwi 0, 24, 30
  05fc744  slwi 9, 28, 5
  05fc748  cmpwi 4, 0, 0
  05fc74c  add 30, 31, 9
  05fc750  bf 18, 0x5fc8d0
  05fc754  cmpwi 7, 25, 0
  05fc758  bf 30, 0x5fc760
  05fc75c  ori 25, 25, 32768
  05fc760  clrldi 31, 26, 32
  05fc764  li 0, 0
  05fc768  li 29, 1
  05fc76c  li 28, 0
  05fc770  addi 3, 1, 120
  05fc774  stw 0, 92(31)
  05fc778  li 0, 1001
  05fc77c  std 22, 0(31)
  05fc780  stw 20, 32(31)
  05fc784  stw 19, 36(31)
  05fc788  stw 30, 100(31)
  05fc78c  stw 21, 40(31)
  05fc790  stw 24, 88(31)
  05fc794  stw 29, 96(31)
  05fc798  stw 0, 112(1)
  05fc79c  std 28, 120(1)
  05fc7a0  bl 0x6505c4
  05fc7a4  ld 2, 40(1)
  05fc7a8  ld 3, 120(1)
  05fc7ac  addi 4, 1, 112
  05fc7b0  li 11, 48
  05fc7b4  sc
  05fc7b8  lwz 6, 112(1)
  05fc7bc  addi 3, 26, 80
  05fc7c0  xori 8, 24, 4
  05fc7c4  lwz 4, -32104(2)
  05fc7c8  rlwinm 3, 3, 0, 0, 27
  05fc7cc  clrldi 5, 23, 32
  05fc7d0  extsw 6, 6
  05fc7d4  clrldi 7, 25, 32
  05fc7d8  rldicl 8, 8, 62, 63
  05fc7dc  clrldi 9, 21, 32
  05fc7e0  bl 0x650524
  05fc7e4  ld 2, 40(1)
  05fc7e8  cmpwi 7, 3, 0
  05fc7ec  li 3, 1
  05fc7f0  bt 30, 0x5fc850
  05fc7f4  stw 29, 92(31)
  05fc7f8  stw 28, 96(31)
  05fc7fc  bf 18, 0x5fc944
  05fc800  srawi 0, 30, 5
  05fc804  addi 11, 27, 16
  05fc808  slwi 0, 0, 2
  05fc80c  clrlwi 10, 30, 27
  05fc810  add 11, 0, 11
  05fc814  li 9, -2
  05fc818  extsw 0, 0
  05fc81c  rotlw 30, 9, 10
  05fc820  add 28, 0, 27
  05fc824  clrldi 31, 11, 32
  05fc828  lwz 29, 16(28)
  05fc82c  mr 3, 31
  05fc830  and 4, 29, 30
  05fc834  clrldi 5, 29, 32
  05fc838  clrldi 4, 4, 32
  05fc83c  bl 0x5fbf3c
  05fc840  nop
  05fc844  cmpw 7, 29, 3
  05fc848  bf 30, 0x5fc828
  05fc84c  li 3, 0
  05fc850  ld 0, 272(1)
  05fc854  extsw 3, 3
  05fc858  lwz 12, 264(1)
  05fc85c  ld 19, 152(1)
  05fc860  mtlr 0
  05fc864  ld 20, 160(1)
  05fc868  mtocrf 8, 12
  05fc86c  ld 21, 168(1)
  05fc870  ld 22, 176(1)
  05fc874  ld 23, 184(1)
  05fc878  ld 24, 192(1)
  05fc87c  ld 25, 200(1)
  05fc880  ld 26, 208(1)
  05fc884  ld 27, 216(1)
  05fc888  ld 28, 224(1)
  05fc88c  ld 29, 232(1)
  05fc890  ld 30, 240(1)
  05fc894  ld 31, 248(1)
  05fc898  addi 1, 1, 256
  05fc89c  blr
  05fc8a0  addi 28, 28, 1
  05fc8a4  cmpwi 7, 28, 1
  05fc8a8  slwi 30, 28, 2
  05fc8ac  bf 29, 0x5fc6f0
  05fc8b0  b 0x5fc84c
  05fc8b4  bl 0x5fbd88
  05fc8b8  nop
  05fc8bc  lwz 3, -32112(2)
  05fc8c0  li 4, 0
  05fc8c4  bl 0x5d0b80
  05fc8c8  nop
  05fc8cc  b 0x5fc6e4
  05fc8d0  li 0, 2
  05fc8d4  lwz 11, -32108(2)
  05fc8d8  li 9, 0
  05fc8dc  stw 0, 128(1)
  05fc8e0  li 0, 16
  05fc8e4  stb 9, 136(1)
  05fc8e8  stw 0, 132(1)
  05fc8ec  addi 9, 1, 136
  05fc8f0  ld 0, 0(11)
  05fc8f4  std 0, 0(9)
  05fc8f8  li 0, 0
  05fc8fc  addi 10, 9, 7
  05fc900  stb 0, 0(10)
  05fc904  addi 31, 26, 8
  05fc908  addi 4, 1, 128
  05fc90c  clrldi 31, 31, 32
  05fc910  mr 3, 31
  05fc914  bl 0x6505a4
  05fc918  ld 2, 40(1)
  05fc91c  cmpwi 7, 3, 0
  05fc920  bf 30, 0x5fc800
  05fc924  clrlwi 0, 24, 31
  05fc928  cmpwi 7, 0, 0
  05fc92c  bt 30, 0x5fc754
  05fc930  mr 3, 31
  05fc934  li 4, 0
  05fc938  bl 0x6504c4
  05fc93c  ld 2, 40(1)
  05fc940  b 0x5fc754
  05fc944  clrlwi 0, 24, 31
  05fc948  addi 31, 26, 8
  05fc94c  cmpwi 7, 0, 0
  05fc950  bf 30, 0x5fc988
  05fc954  rlwinm 3, 31, 0, 0, 28
  05fc958  bl 0x650784
  05fc95c  ld 2, 40(1)
  05fc960  b 0x5fc800
  05fc964  lis 30, 4660
  05fc968  ori 30, 30, 22135
  05fc96c  li 3, 1000
  05fc970  li 11, 141
  05fc974  sc
  05fc978  lwz 29, 0(31)
  05fc97c  cmpw 7, 29, 30
  05fc980  bt 30, 0x5fc96c
  05fc984  b 0x5fc6e4
  05fc988  rlwinm 3, 31, 0, 0, 28
  05fc98c  bl 0x6504e4
  05fc990  ld 2, 40(1)
  05fc994  b 0x5fc954

FUN_005fc998:   # 0x5fc998, 0x48 bytes
  05fc998  cmpdi 3, 0
  05fc99c  mflr 0
  05fc9a0  std 0, 16(1)
  05fc9a4  bt 2, 0x5fc9c0
  05fc9a8  lwz 3, 60(3)
  05fc9ac  li 4, 1
  05fc9b0  li 11, 94
  05fc9b4  lwz 0, 4(3)
  05fc9b8  cmpwi 7, 0, 8989
  05fc9bc  bt 30, 0x5fc9cc
  05fc9c0  ld 0, 16(1)
  05fc9c4  mtlr 0
  05fc9c8  blr
  05fc9cc  lwz 3, 0(3)
  05fc9d0  sc
  05fc9d4  ld 0, 16(1)
  05fc9d8  mtlr 0
  05fc9dc  blr

FUN_005fc9e0:   # 0x5fc9e0, 0x60 bytes
  05fc9e0  cmpwi 7, 3, 0
  05fc9e4  mflr 0
  05fc9e8  std 29, -24(1)
  05fc9ec  std 0, 16(1)
  05fc9f0  mr 29, 3
  05fc9f4  bt 30, 0x5fca0c
  05fc9f8  lwz 9, 60(3)
  05fc9fc  li 11, 91
  05fca00  lwz 0, 4(9)
  05fca04  cmpwi 7, 0, 8989
  05fca08  bt 30, 0x5fca1c
  05fca0c  ld 0, 16(1)
  05fca10  ld 29, -24(1)
  05fca14  mtlr 0
  05fca18  blr
  05fca1c  lwz 3, 0(9)
  05fca20  sc
  05fca24  lwz 29, 60(29)
  05fca28  li 0, 0
  05fca2c  stw 0, 4(29)
  05fca30  ld 0, 16(1)
  05fca34  ld 29, -24(1)
  05fca38  mtlr 0
  05fca3c  blr

FUN_005fca40:   # 0x5fca40, 0x60 bytes
  05fca40  stdu 1, -112(1)
  05fca44  mflr 0
  05fca48  cmpwi 7, 3, 0
  05fca4c  std 0, 128(1)
  05fca50  lis 0, 4660
  05fca54  ori 0, 0, 22135
  05fca58  bt 30, 0x5fca74
  05fca5c  lwz 9, 252(3)
  05fca60  ld 3, 80(9)
  05fca64  ld 0, 128(1)
  05fca68  addi 1, 1, 112
  05fca6c  mtlr 0
  05fca70  blr
  05fca74  lwz 9, -32112(2)
  05fca78  lwz 9, 0(9)
  05fca7c  cmpw 7, 9, 0
  05fca80  extsw 3, 9
  05fca84  bt 30, 0x5fca98
  05fca88  bl 0x5d0854
  05fca8c  nop
  05fca90  cmpwi 7, 3, 0
  05fca94  bf 30, 0x5fca5c
  05fca98  li 3, 0
  05fca9c  b 0x5fca64

FUN_005fcaa0:   # 0x5fcaa0, 0xb4 bytes
  05fcaa0  mfcr 12
  05fcaa4  std 31, -8(1)
  05fcaa8  li 10, 0
  05fcaac  lwz 11, -32116(2)
  05fcab0  li 9, 2
  05fcab4  mr 31, 3
  05fcab8  stw 12, 8(1)
  05fcabc  mflr 0
  05fcac0  std 0, 16(1)
  05fcac4  addi 0, 3, 15
  05fcac8  rlwinm 0, 0, 0, 0, 27
  05fcacc  stw 0, 60(3)
  05fcad0  li 0, 512
  05fcad4  stw 9, -48(1)
  05fcad8  stw 0, -44(1)
  05fcadc  li 0, 0
  05fcae0  stw 10, -32(1)
  05fcae4  stb 0, -24(1)
  05fcae8  std 10, -40(1)
  05fcaec  addi 9, 1, -24
  05fcaf0  ld 0, 0(11)
  05fcaf4  std 0, 0(9)
  05fcaf8  li 0, 0
  05fcafc  addi 10, 9, 7
  05fcb00  stb 0, 0(10)
  05fcb04  li 5, 0
  05fcb08  lwz 3, 60(3)
  05fcb0c  addi 4, 1, -48
  05fcb10  lis 6, 8192
  05fcb14  li 11, 90
  05fcb18  sc
  05fcb1c  cmpwi 4, 3, 0
  05fcb20  li 3, 0
  05fcb24  bf 18, 0x5fcb38
  05fcb28  lwz 9, 60(31)
  05fcb2c  li 0, 8989
  05fcb30  li 3, 1
  05fcb34  stw 0, 4(9)
  05fcb38  ld 0, 16(1)
  05fcb3c  extsw 3, 3
  05fcb40  lwz 12, 8(1)
  05fcb44  mtlr 0
  05fcb48  ld 31, -8(1)
  05fcb4c  mtocrf 8, 12
  05fcb50  blr

FUN_005fcb58:   # 0x5fcb58, 0x5c bytes
  05fcb58  mfcr 12
  05fcb5c  cmpwi 7, 3, 0
  05fcb60  std 31, -8(1)
  05fcb64  mr 31, 3
  05fcb68  stw 12, 8(1)
  05fcb6c  mflr 0
  05fcb70  std 0, 16(1)
  05fcb74  bt- 30, 0x5fcb9c
  05fcb78  lwz 9, 60(31)
  05fcb7c  li 11, 93
  05fcb80  lwz 0, 4(9)
  05fcb84  cmpwi 7, 0, 8989
  05fcb88  bf 30, 0x5fcb9c
  05fcb8c  lwz 3, 0(9)
  05fcb90  sc
  05fcb94  cmpwi 4, 3, 0
  05fcb98  bt 18, 0x5fcb78
  05fcb9c  ld 0, 16(1)
  05fcba0  lwz 12, 8(1)
  05fcba4  mtlr 0
  05fcba8  ld 31, -8(1)
  05fcbac  mtocrf 8, 12
  05fcbb0  blr

FUN_005fcbb8:   # 0x5fcbb8, 0x98 bytes
  05fcbb8  cmpdi 3, 0
  05fcbbc  mflr 0
  05fcbc0  li 9, 0
  05fcbc4  std 0, 16(1)
  05fcbc8  bt 2, 0x5fcbe0
  05fcbcc  lwz 3, 60(3)
  05fcbd0  cmpwi 6, 4, 0
  05fcbd4  lwz 0, 4(3)
  05fcbd8  cmpwi 7, 0, 8989
  05fcbdc  bt 30, 0x5fcbf0
  05fcbe0  ld 0, 16(1)
  05fcbe4  extsw 3, 9
  05fcbe8  mtlr 0
  05fcbec  blr
  05fcbf0  cmpwi 7, 4, -1
  05fcbf4  li 11, 93
  05fcbf8  bf 26, 0x5fcc28
  05fcbfc  lwz 3, 0(3)
  05fcc00  sc
  05fcc04  srawi 0, 3, 31
  05fcc08  xor 9, 0, 3
  05fcc0c  sub 9, 9, 0
  05fcc10  ld 0, 16(1)
  05fcc14  addi 9, 9, -1
  05fcc18  mtlr 0
  05fcc1c  srwi 9, 9, 31
  05fcc20  extsw 3, 9
  05fcc24  blr
  05fcc28  lwz 3, 0(3)
  05fcc2c  li 0, 0
  05fcc30  li 11, 92
  05fcc34  clrldi 3, 3, 32
  05fcc38  bt 30, 0x5fcc44
  05fcc3c  mulli 0, 4, 1000
  05fcc40  clrldi 0, 0, 32
  05fcc44  mr 4, 0
  05fcc48  sc
  05fcc4c  b 0x5fcc04

FUN_005fcc50:   # 0x5fcc50, 0x78 bytes
  05fcc50  stdu 1, -128(1)
  05fcc54  mflr 0
  05fcc58  cmpwi 7, 3, 0
  05fcc5c  std 0, 144(1)
  05fcc60  lis 0, 4660
  05fcc64  std 31, 120(1)
  05fcc68  ori 0, 0, 22135
  05fcc6c  mr 31, 4
  05fcc70  bt 30, 0x5fcc9c
  05fcc74  lwz 9, 252(3)
  05fcc78  li 3, 1
  05fcc7c  ld 0, 80(9)
  05fcc80  std 0, 0(31)
  05fcc84  ld 0, 144(1)
  05fcc88  extsw 3, 3
  05fcc8c  ld 31, 120(1)
  05fcc90  addi 1, 1, 128
  05fcc94  mtlr 0
  05fcc98  blr
  05fcc9c  lwz 9, -32112(2)
  05fcca0  lwz 9, 0(9)
  05fcca4  cmpw 7, 9, 0
  05fcca8  extsw 3, 9
  05fccac  bt 30, 0x5fccc0
  05fccb0  bl 0x5d0854
  05fccb4  nop
  05fccb8  cmpwi 7, 3, 0
  05fccbc  bf 30, 0x5fcc74
  05fccc0  li 3, 0
  05fccc4  b 0x5fcc84

FUN_005fccc8:   # 0x5fccc8, 0xac bytes
  05fccc8  stdu 1, -160(1)
  05fcccc  mflr 0
  05fccd0  cmpwi 7, 3, 0
  05fccd4  std 30, 144(1)
  05fccd8  li 30, 0
  05fccdc  std 29, 136(1)
  05fcce0  std 31, 152(1)
  05fcce4  std 0, 176(1)
  05fcce8  mr 29, 3
  05fccec  mr 31, 4
  05fccf0  std 30, 120(1)
  05fccf4  bt 30, 0x5fcd9c
  05fccf8  addi 4, 31, 2
  05fccfc  stw 30, 112(1)
  05fcd00  cmplwi 7, 4, 22
  05fcd04  bf 29, 0x5fcd24
  05fcd08  ld 0, 176(1)
  05fcd0c  ld 29, 136(1)
  05fcd10  ld 30, 144(1)
  05fcd14  mtlr 0
  05fcd18  ld 31, 152(1)
  05fcd1c  addi 1, 1, 160
  05fcd20  blr
  05fcd24  lwz 11, -32100(2)
  05fcd28  rldic 9, 4, 2, 30
  05fcd2c  lwzx 0, 9, 11
  05fcd30  extsw 0, 0
  05fcd34  add 0, 0, 11
  05fcd38  mtctr 0
  05fcd3c  bctr
  05fcd40  <unknown>
  05fcd44  <unknown>
  05fcd48  <unknown>
  05fcd4c  <unknown>
  05fcd50  <unknown>
  05fcd54  <unknown>
  05fcd58  <unknown>
  05fcd5c  <unknown>
  05fcd60  <unknown>
  05fcd64  <unknown>
  05fcd68  <unknown>
  05fcd6c  <unknown>
  05fcd70  <unknown>

FUN_005fcf70:   # 0x5fcf70, 0x94 bytes
  05fcf70  stdu 1, -112(1)
  05fcf74  mflr 0
  05fcf78  cmpwi 7, 3, 0
  05fcf7c  std 0, 128(1)
  05fcf80  lis 0, 4660
  05fcf84  ori 0, 0, 22135
  05fcf88  bt 30, 0x5fcfdc
  05fcf8c  lwz 9, 252(3)
  05fcf90  clrldi 11, 9, 32
  05fcf94  addi 3, 9, 8
  05fcf98  clrldi 3, 3, 32
  05fcf9c  lwz 0, 88(11)
  05fcfa0  clrlwi 9, 0, 31
  05fcfa4  rlwinm 0, 0, 0, 0, 30
  05fcfa8  cmpwi 7, 9, 0
  05fcfac  bf 30, 0x5fcfc0
  05fcfb0  ld 0, 128(1)
  05fcfb4  addi 1, 1, 112
  05fcfb8  mtlr 0
  05fcfbc  blr
  05fcfc0  stw 0, 88(11)
  05fcfc4  bl 0x6504e4
  05fcfc8  ld 2, 40(1)
  05fcfcc  ld 0, 128(1)
  05fcfd0  addi 1, 1, 112
  05fcfd4  mtlr 0
  05fcfd8  blr
  05fcfdc  lwz 9, -32112(2)
  05fcfe0  lwz 9, 0(9)
  05fcfe4  cmpw 7, 9, 0
  05fcfe8  extsw 3, 9
  05fcfec  bt 30, 0x5fcfb0
  05fcff0  bl 0x5d0854
  05fcff4  nop
  05fcff8  cmpwi 7, 3, 0
  05fcffc  bf 30, 0x5fcf8c
  05fd000  b 0x5fcfb0

FUN_005fd004:   # 0x5fd004, 0x4c bytes
  05fd004  lwz 9, -32112(2)
  05fd008  mflr 0
  05fd00c  stdu 1, -112(1)
  05fd010  std 0, 128(1)
  05fd014  lis 0, 4660
  05fd018  li 11, 0
  05fd01c  lwz 3, 0(9)
  05fd020  ori 0, 0, 22135
  05fd024  cmpw 7, 3, 0
  05fd028  extsw 3, 3
  05fd02c  bt 30, 0x5fd03c
  05fd030  bl 0x5d0854
  05fd034  nop
  05fd038  mr 11, 3
  05fd03c  ld 0, 128(1)
  05fd040  clrldi 3, 11, 32
  05fd044  addi 1, 1, 112
  05fd048  mtlr 0
  05fd04c  blr

FUN_005fd050:   # 0x5fd050, 0x6c bytes
  05fd050  stdu 1, -112(1)
  05fd054  mflr 0
  05fd058  cmpwi 7, 3, 0
  05fd05c  std 0, 128(1)
  05fd060  lis 0, 4660
  05fd064  ori 0, 0, 22135
  05fd068  bt 30, 0x5fd088
  05fd06c  lwz 9, 252(3)
  05fd070  lwz 3, 40(9)
  05fd074  ld 0, 128(1)
  05fd078  clrldi 3, 3, 32
  05fd07c  addi 1, 1, 112
  05fd080  mtlr 0
  05fd084  blr
  05fd088  lwz 9, -32112(2)
  05fd08c  lwz 9, 0(9)
  05fd090  cmpw 7, 9, 0
  05fd094  extsw 3, 9
  05fd098  bf 30, 0x5fd0a4
  05fd09c  li 3, 0
  05fd0a0  b 0x5fd074
  05fd0a4  bl 0x5d0854
  05fd0a8  nop
  05fd0ac  cmpwi 7, 3, 0
  05fd0b0  bf 30, 0x5fd06c
  05fd0b4  li 3, 0
  05fd0b8  b 0x5fd074

FUN_005fd0bc:   # 0x5fd0bc, 0x60 bytes
  05fd0bc  stdu 1, -112(1)
  05fd0c0  mflr 0
  05fd0c4  cmpwi 7, 3, 0
  05fd0c8  std 0, 128(1)
  05fd0cc  lis 0, 4660
  05fd0d0  ori 0, 0, 22135
  05fd0d4  bt 30, 0x5fd0f0
  05fd0d8  lwz 9, 252(3)
  05fd0dc  ld 3, 0(9)
  05fd0e0  ld 0, 128(1)
  05fd0e4  addi 1, 1, 112
  05fd0e8  mtlr 0
  05fd0ec  blr
  05fd0f0  lwz 9, -32112(2)
  05fd0f4  lwz 9, 0(9)
  05fd0f8  cmpw 7, 9, 0
  05fd0fc  extsw 3, 9
  05fd100  bt 30, 0x5fd114
  05fd104  bl 0x5d0854
  05fd108  nop
  05fd10c  cmpwi 7, 3, 0
  05fd110  bf 30, 0x5fd0d8
  05fd114  li 3, 0
  05fd118  b 0x5fd0e0

FUN_005fd120:   # 0x5fd120, 0xcc bytes
  05fd120  cmpwi 7, 4, 7
  05fd124  mflr 0
  05fd128  stdu 1, -144(1)
  05fd12c  std 29, 120(1)
  05fd130  std 30, 128(1)
  05fd134  std 31, 136(1)
  05fd138  std 0, 160(1)
  05fd13c  mr 31, 4
  05fd140  mr 29, 5
  05fd144  mr 30, 5
  05fd148  cmpwi 6, 3, 0
  05fd14c  bt 29, 0x5fd1c8
  05fd150  lis 0, 4660
  05fd154  bt 26, 0x5fd1a0
  05fd158  slwi 9, 31, 2
  05fd15c  cmpwi 7, 30, 0
  05fd160  addi 9, 9, 32
  05fd164  li 11, 1
  05fd168  extsw 4, 9
  05fd16c  bt 30, 0x5fd180
  05fd170  lwz 9, 252(3)
  05fd174  add 9, 9, 4
  05fd178  lwz 0, 12(9)
  05fd17c  stw 0, 0(29)
  05fd180  ld 0, 160(1)
  05fd184  extsw 3, 11
  05fd188  ld 29, 120(1)
  05fd18c  ld 30, 128(1)
  05fd190  mtlr 0
  05fd194  ld 31, 136(1)
  05fd198  addi 1, 1, 144
  05fd19c  blr
  05fd1a0  lwz 9, -32112(2)
  05fd1a4  ori 0, 0, 22135
  05fd1a8  lwz 9, 0(9)
  05fd1ac  cmpw 7, 9, 0
  05fd1b0  extsw 3, 9
  05fd1b4  bt 30, 0x5fd1c8
  05fd1b8  bl 0x5d0854
  05fd1bc  nop
  05fd1c0  cmpwi 7, 3, 0
  05fd1c4  bf 30, 0x5fd158
  05fd1c8  ld 0, 160(1)
  05fd1cc  li 11, 0
  05fd1d0  ld 29, 120(1)
  05fd1d4  extsw 3, 11
  05fd1d8  ld 30, 128(1)
  05fd1dc  ld 31, 136(1)
  05fd1e0  mtlr 0
  05fd1e4  addi 1, 1, 144
  05fd1e8  blr

FUN_005fd1f0:   # 0x5fd1f0, 0xb0 bytes
  05fd1f0  cmpwi 7, 4, 7
  05fd1f4  mflr 0
  05fd1f8  stdu 1, -128(1)
  05fd1fc  std 30, 112(1)
  05fd200  std 31, 120(1)
  05fd204  std 0, 144(1)
  05fd208  mr 31, 4
  05fd20c  cmpwi 6, 3, 0
  05fd210  mr 30, 5
  05fd214  bt 29, 0x5fd280
  05fd218  lis 0, 4660
  05fd21c  bt 26, 0x5fd258
  05fd220  slwi 9, 31, 2
  05fd224  lwz 11, 252(3)
  05fd228  li 3, 1
  05fd22c  addi 9, 9, 32
  05fd230  extsw 3, 3
  05fd234  extsw 9, 9
  05fd238  add 11, 11, 9
  05fd23c  stw 30, 12(11)
  05fd240  ld 0, 144(1)
  05fd244  ld 30, 112(1)
  05fd248  ld 31, 120(1)
  05fd24c  mtlr 0
  05fd250  addi 1, 1, 128
  05fd254  blr
  05fd258  lwz 9, -32112(2)
  05fd25c  ori 0, 0, 22135
  05fd260  lwz 9, 0(9)
  05fd264  cmpw 7, 9, 0
  05fd268  extsw 3, 9
  05fd26c  bt 30, 0x5fd280
  05fd270  bl 0x5d0854
  05fd274  nop
  05fd278  cmpwi 7, 3, 0
  05fd27c  bf 30, 0x5fd220
  05fd280  ld 0, 144(1)
  05fd284  li 3, 0
  05fd288  ld 30, 112(1)
  05fd28c  extsw 3, 3
  05fd290  ld 31, 120(1)
  05fd294  mtlr 0
  05fd298  addi 1, 1, 128
  05fd29c  blr

FUN_005fd2a0:   # 0x5fd2a0, 0x64 bytes
  05fd2a0  stdu 1, -112(1)
  05fd2a4  mflr 0
  05fd2a8  cmpwi 7, 3, 0
  05fd2ac  std 0, 128(1)
  05fd2b0  lis 0, 4660
  05fd2b4  ori 0, 0, 22135
  05fd2b8  bt 30, 0x5fd2d8
  05fd2bc  lwz 9, 252(3)
  05fd2c0  lwz 3, 100(9)
  05fd2c4  ld 0, 128(1)
  05fd2c8  clrldi 3, 3, 32
  05fd2cc  addi 1, 1, 112
  05fd2d0  mtlr 0
  05fd2d4  blr
  05fd2d8  lwz 9, -32112(2)
  05fd2dc  lwz 9, 0(9)
  05fd2e0  cmpw 7, 9, 0
  05fd2e4  extsw 3, 9
  05fd2e8  bt 30, 0x5fd2fc
  05fd2ec  bl 0x5d0854
  05fd2f0  nop
  05fd2f4  cmpwi 7, 3, 0
  05fd2f8  bf 30, 0x5fd2bc
  05fd2fc  li 3, 0
  05fd300  b 0x5fd2c4

FUN_005fd308:   # 0x5fd308, 0x1c4 bytes
  05fd308  stdu 1, -160(1)
  05fd30c  mflr 0
  05fd310  std 31, 152(1)
  05fd314  mr 31, 3
  05fd318  std 26, 112(1)
  05fd31c  std 0, 176(1)
  05fd320  std 27, 120(1)
  05fd324  std 28, 128(1)
  05fd328  std 29, 136(1)
  05fd32c  std 30, 144(1)
  05fd330  ld 29, 80(31)
  05fd334  mr 26, 3
  05fd338  addi 3, 3, 80
  05fd33c  li 0, -1
  05fd340  li 4, -1
  05fd344  clrldi 3, 3, 32
  05fd348  mr 5, 29
  05fd34c  stw 0, 92(31)
  05fd350  bl 0x5fbf18
  05fd354  nop
  05fd358  clrldi 0, 29, 32
  05fd35c  cmpd 7, 0, 3
  05fd360  bt 30, 0x5fd38c
  05fd364  ld 0, 176(1)
  05fd368  ld 26, 112(1)
  05fd36c  ld 27, 120(1)
  05fd370  mtlr 0
  05fd374  ld 28, 128(1)
  05fd378  ld 29, 136(1)
  05fd37c  ld 30, 144(1)
  05fd380  ld 31, 152(1)
  05fd384  addi 1, 1, 160
  05fd388  blr
  05fd38c  cmpdi 7, 29, -1
  05fd390  bt 30, 0x5fd364
  05fd394  lwz 30, -32120(2)
  05fd398  li 4, -1
  05fd39c  li 28, 1
  05fd3a0  mr 3, 30
  05fd3a4  addi 27, 30, 16
  05fd3a8  bl 0x5fbef8
  05fd3ac  nop
  05fd3b0  lwz 4, 100(31)
  05fd3b4  rlwinm 3, 4, 29, 3, 29
  05fd3b8  clrlwi 4, 4, 27
  05fd3bc  extsw 9, 3
  05fd3c0  slw 4, 28, 4
  05fd3c4  add 9, 9, 30
  05fd3c8  add 3, 3, 27
  05fd3cc  clrldi 3, 3, 32
  05fd3d0  lwz 29, 16(9)
  05fd3d4  andc 4, 29, 4
  05fd3d8  clrldi 5, 29, 32
  05fd3dc  clrldi 4, 4, 32
  05fd3e0  bl 0x5fbf3c
  05fd3e4  nop
  05fd3e8  cmpw 7, 29, 3
  05fd3ec  bf 30, 0x5fd3b0
  05fd3f0  lwz 30, -32112(2)
  05fd3f4  lis 0, 4660
  05fd3f8  ori 0, 0, 22135
  05fd3fc  lwz 3, 0(30)
  05fd400  cmpw 7, 3, 0
  05fd404  bt 30, 0x5fd42c
  05fd408  extsw 3, 3
  05fd40c  bl 0x5d0854
  05fd410  nop
  05fd414  cmpwi 7, 3, 0
  05fd418  bt 30, 0x5fd42c
  05fd41c  clrldi 9, 3, 32
  05fd420  lwz 0, 252(9)
  05fd424  cmpw 7, 26, 0
  05fd428  bt 30, 0x5fd4b4
  05fd42c  lwz 9, 88(31)
  05fd430  rlwinm 0, 9, 0, 29, 29
  05fd434  cmpwi 7, 0, 0
  05fd438  bt 30, 0x5fd48c
  05fd43c  rlwinm 0, 9, 0, 30, 30
  05fd440  cmpwi 7, 0, 0
  05fd444  bf 30, 0x5fd454
  05fd448  clrlwi 0, 9, 31
  05fd44c  cmpwi 7, 0, 0
  05fd450  bt 30, 0x5fd364
  05fd454  addi 3, 26, 8
  05fd458  clrldi 3, 3, 32
  05fd45c  bl 0x650784
  05fd460  ld 2, 40(1)
  05fd464  ld 0, 176(1)
  05fd468  ld 26, 112(1)
  05fd46c  ld 27, 120(1)
  05fd470  mtlr 0
  05fd474  ld 28, 128(1)
  05fd478  ld 29, 136(1)
  05fd47c  ld 30, 144(1)
  05fd480  ld 31, 152(1)
  05fd484  addi 1, 1, 160
  05fd488  blr
  05fd48c  lwz 0, 92(31)
  05fd490  cmpwi 7, 0, 0
  05fd494  bf 30, 0x5fd43c
  05fd498  ld 3, 80(31)
  05fd49c  li 11, 45
  05fd4a0  sc
  05fd4a4  li 0, 1
  05fd4a8  lwz 9, 88(31)
  05fd4ac  stw 0, 92(31)
  05fd4b0  b 0x5fd43c
  05fd4b4  lwz 3, 0(30)
  05fd4b8  li 4, 0
  05fd4bc  extsw 3, 3
  05fd4c0  bl 0x5d0a3c
  05fd4c4  nop
  05fd4c8  b 0x5fd42c

FUN_005fd4d0:   # 0x5fd4d0, 0x9c bytes
  05fd4d0  stdu 1, -144(1)
  05fd4d4  mflr 0
  05fd4d8  cmpwi 7, 3, 0
  05fd4dc  std 0, 160(1)
  05fd4e0  lis 0, 4660
  05fd4e4  std 29, 120(1)
  05fd4e8  ori 0, 0, 22135
  05fd4ec  bt 30, 0x5fd544
  05fd4f0  lwz 29, 252(3)
  05fd4f4  li 4, 3
  05fd4f8  li 5, 1
  05fd4fc  addi 3, 29, 96
  05fd500  clrldi 3, 3, 32
  05fd504  bl 0x5fbf3c
  05fd508  nop
  05fd50c  lwz 0, 96(29)
  05fd510  cmpwi 7, 0, 0
  05fd514  mr 3, 29
  05fd518  bt 30, 0x5fd530
  05fd51c  ld 0, 160(1)
  05fd520  ld 29, 120(1)
  05fd524  addi 1, 1, 144
  05fd528  mtlr 0
  05fd52c  blr
  05fd530  ld 0, 160(1)
  05fd534  ld 29, 120(1)
  05fd538  addi 1, 1, 144
  05fd53c  mtlr 0
  05fd540  b 0x5fd308
  05fd544  lwz 9, -32112(2)
  05fd548  lwz 9, 0(9)
  05fd54c  cmpw 7, 9, 0
  05fd550  extsw 3, 9
  05fd554  bt 30, 0x5fd51c
  05fd558  bl 0x5d0854
  05fd55c  nop
  05fd560  cmpwi 7, 3, 0
  05fd564  bf 30, 0x5fd4f0
  05fd568  b 0x5fd51c

FUN_005fd570:   # 0x5fd570, 0x160 bytes
  05fd570  clrldi 3, 3, 32
  05fd574  mflr 0
  05fd578  stdu 1, -160(1)
  05fd57c  std 27, 120(1)
  05fd580  lwz 27, -32112(2)
  05fd584  mr 4, 3
  05fd588  std 31, 152(1)
  05fd58c  std 0, 176(1)
  05fd590  std 28, 128(1)
  05fd594  std 29, 136(1)
  05fd598  std 30, 144(1)
  05fd59c  lwz 30, 252(3)
  05fd5a0  lwz 3, 0(27)
  05fd5a4  clrldi 31, 30, 32
  05fd5a8  extsw 3, 3
  05fd5ac  bl 0x5d0a3c
  05fd5b0  nop
  05fd5b4  lwz 9, 88(31)
  05fd5b8  rlwinm 0, 9, 0, 30, 30
  05fd5bc  cmpwi 7, 0, 0
  05fd5c0  bf 30, 0x5fd5d0
  05fd5c4  clrlwi 0, 9, 31
  05fd5c8  cmpwi 7, 0, 0
  05fd5cc  bt 30, 0x5fd68c
  05fd5d0  addi 29, 30, 8
  05fd5d4  li 4, 0
  05fd5d8  clrldi 29, 29, 32
  05fd5dc  addi 30, 30, 96
  05fd5e0  mr 3, 29
  05fd5e4  bl 0x6504c4
  05fd5e8  ld 2, 40(1)
  05fd5ec  lwz 9, 32(31)
  05fd5f0  lwz 3, 36(31)
  05fd5f4  lwz 0, 0(9)
  05fd5f8  std 2, 40(1)
  05fd5fc  mtctr 0
  05fd600  lwz 2, 4(9)
  05fd604  bctrl
  05fd608  ld 2, 40(1)
  05fd60c  mr 28, 3
  05fd610  mr 3, 29
  05fd614  bl 0x6504e4
  05fd618  ld 2, 40(1)
  05fd61c  nop
  05fd620  lwz 29, 96(31)
  05fd624  clrldi 3, 30, 32
  05fd628  rlwinm 4, 29, 0, 0, 30
  05fd62c  clrldi 5, 29, 32
  05fd630  bl 0x5fbf3c
  05fd634  nop
  05fd638  cmpw 7, 29, 3
  05fd63c  bf 30, 0x5fd620
  05fd640  cmpwi 7, 29, 3
  05fd644  bt 30, 0x5fd6b8
  05fd648  lwz 3, 0(27)
  05fd64c  li 4, 0
  05fd650  extsw 3, 3
  05fd654  bl 0x5d0a3c
  05fd658  nop
  05fd65c  clrldi 3, 28, 32
  05fd660  bl 0x650744
  05fd664  ld 2, 40(1)
  05fd668  ld 0, 176(1)
  05fd66c  ld 27, 120(1)
  05fd670  ld 28, 128(1)
  05fd674  mtlr 0
  05fd678  ld 29, 136(1)
  05fd67c  ld 30, 144(1)
  05fd680  ld 31, 152(1)
  05fd684  addi 1, 1, 160
  05fd688  blr
  05fd68c  lwz 9, 32(31)
  05fd690  addi 30, 30, 96
  05fd694  lwz 3, 36(31)
  05fd698  lwz 0, 0(9)
  05fd69c  std 2, 40(1)
  05fd6a0  mtctr 0
  05fd6a4  lwz 2, 4(9)
  05fd6a8  bctrl
  05fd6ac  ld 2, 40(1)
  05fd6b0  mr 28, 3
  05fd6b4  b 0x5fd620
  05fd6b8  ld 3, 80(31)
  05fd6bc  li 11, 45
  05fd6c0  sc
  05fd6c4  mr 3, 31
  05fd6c8  bl 0x5fd308
  05fd6cc  b 0x5fd648

FUN_005fd6d0:   # 0x5fd6d0, 0x30 bytes
  05fd6d0  addi 9, 3, 64
  05fd6d4  slwi 0, 4, 2
  05fd6d8  li 11, 0
  05fd6dc  add 0, 9, 0
  05fd6e0  stw 4, 24(3)
  05fd6e4  stw 11, 20(3)
  05fd6e8  stw 9, 4(3)
  05fd6ec  stw 0, 12(3)
  05fd6f0  stw 9, 0(3)
  05fd6f4  stw 0, 8(3)
  05fd6f8  stw 11, 16(3)
  05fd6fc  blr

FUN_005fd700:   # 0x5fd700, 0x78 bytes
  05fd700  lwz 10, 20(3)
  05fd704  lwz 0, 24(3)
  05fd708  cmpw 7, 0, 10
  05fd70c  bf 30, 0x5fd714
  05fd710  twu 1, 1
  05fd714  addi 0, 5, 31
  05fd718  lwz 7, 16(3)
  05fd71c  lwz 8, 12(3)
  05fd720  slwi 10, 10, 2
  05fd724  rlwinm 0, 0, 0, 0, 26
  05fd728  rldicl 9, 7, 59, 59
  05fd72c  rldicl 11, 0, 59, 59
  05fd730  add 10, 10, 8
  05fd734  sub 9, 9, 11
  05fd738  clrldi 10, 10, 32
  05fd73c  addi 9, 9, 33
  05fd740  rlwinm 9, 9, 5, 22, 26
  05fd744  add 0, 0, 9
  05fd748  add 7, 7, 0
  05fd74c  stw 7, 16(3)
  05fd750  stw 0, 0(10)
  05fd754  lwz 11, 20(3)
  05fd758  lwz 0, 4(3)
  05fd75c  slwi 9, 11, 2
  05fd760  addi 11, 11, 1
  05fd764  add 9, 9, 0
  05fd768  clrldi 9, 9, 32
  05fd76c  stw 4, 0(9)
  05fd770  stw 11, 20(3)
  05fd774  blr

FUN_005fd778:   # 0x5fd778, 0x18 bytes
  05fd778  cmpdi 3, 0
  05fd77c  li 0, 0
  05fd780  bt 2, 0x5fd788
  05fd784  lwz 0, 16(3)
  05fd788  clrldi 3, 0, 32
  05fd78c  blr

FUN_005fd790:   # 0x5fd790, 0xfc bytes
  05fd790  cmpdi 3, 0
  05fd794  mflr 0
  05fd798  stdu 1, -128(1)
  05fd79c  std 30, 112(1)
  05fd7a0  std 31, 120(1)
  05fd7a4  std 0, 144(1)
  05fd7a8  bt 2, 0x5fd85c
  05fd7ac  addi 0, 4, 31
  05fd7b0  mr 31, 3
  05fd7b4  lwz 3, 16(3)
  05fd7b8  rlwinm 30, 0, 0, 0, 26
  05fd7bc  add 3, 30, 3
  05fd7c0  clrldi 3, 3, 32
  05fd7c4  bl 0x5f5204
  05fd7c8  nop
  05fd7cc  li 0, 0
  05fd7d0  cmpwi 7, 3, 0
  05fd7d4  mr 6, 3
  05fd7d8  stw 0, 16(31)
  05fd7dc  bt 30, 0x5fd838
  05fd7e0  lwz 0, 20(31)
  05fd7e4  cmpwi 7, 0, 0
  05fd7e8  bt 30, 0x5fd838
  05fd7ec  add 3, 3, 30
  05fd7f0  li 7, 0
  05fd7f4  nop
  05fd7f8  slwi 10, 7, 2
  05fd7fc  lwz 9, 4(31)
  05fd800  addi 8, 7, 1
  05fd804  add 9, 10, 9
  05fd808  addi 7, 7, 1
  05fd80c  clrldi 9, 9, 32
  05fd810  lwz 11, 0(9)
  05fd814  stw 3, 0(11)
  05fd818  lwz 0, 12(31)
  05fd81c  lwz 9, 20(31)
  05fd820  add 10, 10, 0
  05fd824  cmplw 7, 9, 8
  05fd828  clrldi 10, 10, 32
  05fd82c  lwz 0, 0(10)
  05fd830  add 3, 3, 0
  05fd834  bt 29, 0x5fd7f8
  05fd838  li 0, 0
  05fd83c  clrldi 3, 6, 32
  05fd840  stw 0, 20(31)
  05fd844  ld 0, 144(1)
  05fd848  ld 30, 112(1)
  05fd84c  ld 31, 120(1)
  05fd850  mtlr 0
  05fd854  addi 1, 1, 128
  05fd858  blr
  05fd85c  addi 3, 4, 31
  05fd860  rlwinm 3, 3, 0, 0, 26
  05fd864  bl 0x5f5204
  05fd868  nop
  05fd86c  ld 0, 144(1)
  05fd870  ld 30, 112(1)
  05fd874  mr 6, 3
  05fd878  ld 31, 120(1)
  05fd87c  mtlr 0
  05fd880  addi 1, 1, 128
  05fd884  clrldi 3, 6, 32
  05fd888  blr

FUN_005fd890:   # 0x5fd890, 0xc8 bytes
  05fd890  stdu 1, -128(1)
  05fd894  mflr 0
  05fd898  cmpwi 7, 3, 0
  05fd89c  std 0, 144(1)
  05fd8a0  lis 0, -30871
  05fd8a4  std 31, 120(1)
  05fd8a8  ori 0, 0, 9029
  05fd8ac  xor 0, 3, 0
  05fd8b0  cmpwi 6, 0, 0
  05fd8b4  bt 30, 0x5fd93c
  05fd8b8  lwz 31, -32096(2)
  05fd8bc  clrldi 9, 0, 32
  05fd8c0  li 4, 1
  05fd8c4  mr 3, 9
  05fd8c8  li 5, 0
  05fd8cc  li 6, 13
  05fd8d0  li 7, 0
  05fd8d4  stw 0, 0(31)
  05fd8d8  bt 26, 0x5fd900
  05fd8dc  lwz 9, 0(9)
  05fd8e0  lwz 0, 0(9)
  05fd8e4  std 2, 40(1)
  05fd8e8  mtctr 0
  05fd8ec  lwz 2, 4(9)
  05fd8f0  bctrl
  05fd8f4  ld 2, 40(1)
  05fd8f8  cmpwi 7, 3, 0
  05fd8fc  bf 30, 0x5fd914
  05fd900  ld 0, 144(1)
  05fd904  ld 31, 120(1)
  05fd908  addi 1, 1, 128
  05fd90c  mtlr 0
  05fd910  blr
  05fd914  lwz 3, -32092(2)
  05fd918  bl 0x5ea300
  05fd91c  nop
  05fd920  li 0, 0
  05fd924  stw 0, 0(31)
  05fd928  ld 0, 144(1)
  05fd92c  ld 31, 120(1)
  05fd930  addi 1, 1, 128
  05fd934  mtlr 0
  05fd938  blr
  05fd93c  lwz 9, -32096(2)
  05fd940  stw 3, 0(9)
  05fd944  ld 0, 144(1)
  05fd948  ld 31, 120(1)
  05fd94c  addi 1, 1, 128
  05fd950  mtlr 0
  05fd954  blr

FUN_005fd958:   # 0x5fd958, 0x9c bytes
  05fd958  stdu 1, -128(1)
  05fd95c  mflr 0
  05fd960  std 31, 120(1)
  05fd964  std 0, 144(1)
  05fd968  lwz 31, -32096(2)
  05fd96c  mr 0, 3
  05fd970  mr 9, 3
  05fd974  cmpwi 7, 0, 0
  05fd978  li 4, 1
  05fd97c  li 5, 0
  05fd980  li 6, 13
  05fd984  li 7, 0
  05fd988  clrldi 3, 3, 32
  05fd98c  stw 0, 0(31)
  05fd990  bt 30, 0x5fd9b8
  05fd994  lwz 9, 0(9)
  05fd998  lwz 0, 0(9)
  05fd99c  std 2, 40(1)
  05fd9a0  mtctr 0
  05fd9a4  lwz 2, 4(9)
  05fd9a8  bctrl
  05fd9ac  ld 2, 40(1)
  05fd9b0  cmpwi 7, 3, 0
  05fd9b4  bf 30, 0x5fd9cc
  05fd9b8  ld 0, 144(1)
  05fd9bc  ld 31, 120(1)
  05fd9c0  addi 1, 1, 128
  05fd9c4  mtlr 0
  05fd9c8  blr
  05fd9cc  lwz 3, -32092(2)
  05fd9d0  bl 0x5ea300
  05fd9d4  nop
  05fd9d8  li 0, 0
  05fd9dc  stw 0, 0(31)
  05fd9e0  ld 0, 144(1)
  05fd9e4  ld 31, 120(1)
  05fd9e8  addi 1, 1, 128
  05fd9ec  mtlr 0
  05fd9f0  blr

FUN_005fd9f8:   # 0x5fd9f8, 0x490 bytes
  05fd9f8  std 21, -112(1)
  05fd9fc  srawi 21, 3, 3
  05fda00  stfd 29, -24(1)
  05fda04  std 16, -152(1)
  05fda08  slwi 0, 21, 2
  05fda0c  stfd 30, -16(1)
  05fda10  slwi 16, 21, 1
  05fda14  stfd 31, -8(1)
  05fda18  std 28, -56(1)
  05fda1c  add 28, 16, 0
  05fda20  slwi 9, 21, 4
  05fda24  slwi 11, 28, 2
  05fda28  slwi 0, 21, 3
  05fda2c  std 29, -48(1)
  05fda30  std 30, -40(1)
  05fda34  std 31, -32(1)
  05fda38  add 29, 4, 9
  05fda3c  add 30, 4, 0
  05fda40  add 31, 4, 11
  05fda44  addi 10, 29, 4
  05fda48  addi 9, 30, 4
  05fda4c  addi 11, 31, 4
  05fda50  clrldi 10, 10, 32
  05fda54  clrldi 9, 9, 32
  05fda58  clrldi 11, 11, 32
  05fda5c  clrldi 6, 29, 32
  05fda60  clrldi 8, 30, 32
  05fda64  clrldi 3, 31, 32
  05fda68  mr 7, 4
  05fda6c  std 17, -144(1)
  05fda70  std 18, -136(1)
  05fda74  std 19, -128(1)
  05fda78  std 20, -120(1)
  05fda7c  std 22, -104(1)
  05fda80  std 23, -96(1)
  05fda84  std 24, -88(1)
  05fda88  std 25, -80(1)
  05fda8c  std 26, -72(1)
  05fda90  std 27, -64(1)
  05fda94  lfs 4, 0(10)
  05fda98  cmpwi 7, 21, 2
  05fda9c  lfs 7, 0(6)
  05fdaa0  mr 18, 4
  05fdaa4  lfs 6, 0(3)
  05fdaa8  mr 17, 5
  05fdaac  lfs 8, 0(11)
  05fdab0  lfs 13, 0(4)
  05fdab4  lfs 11, 0(8)
  05fdab8  fsubs 10, 13, 7
  05fdabc  lfs 12, 0(9)
  05fdac0  fsubs 3, 11, 6
  05fdac4  lfsu 0, 4(7)
  05fdac8  fsubs 5, 12, 8
  05fdacc  fsubs 9, 0, 4
  05fdad0  fadds 13, 13, 7
  05fdad4  fadds 0, 0, 4
  05fdad8  fadds 11, 11, 6
  05fdadc  fadds 12, 12, 8
  05fdae0  fadds 6, 10, 5
  05fdae4  fsubs 4, 9, 3
  05fdae8  fsubs 10, 10, 5
  05fdaec  fadds 9, 9, 3
  05fdaf0  fsubs 8, 13, 11
  05fdaf4  fsubs 7, 0, 12
  05fdaf8  fadds 13, 13, 11
  05fdafc  fadds 0, 0, 12
  05fdb00  stfs 13, 0(4)
  05fdb04  stfs 0, 0(7)
  05fdb08  stfs 8, 0(8)
  05fdb0c  stfs 7, 0(9)
  05fdb10  stfs 10, 0(6)
  05fdb14  stfs 9, 0(10)
  05fdb18  stfs 6, 0(3)
  05fdb1c  stfs 4, 0(11)
  05fdb20  lfs 29, 4(5)
  05fdb24  bf 29, 0x5fdd38
  05fdb28  add 0, 16, 28
  05fdb2c  mr 24, 31
  05fdb30  slwi 0, 0, 2
  05fdb34  mr 23, 30
  05fdb38  addi 31, 4, 8
  05fdb3c  add 27, 4, 0
  05fdb40  addi 12, 4, 12
  05fdb44  mr 26, 30
  05fdb48  mr 22, 29
  05fdb4c  mr 25, 24
  05fdb50  mr 4, 29
  05fdb54  li 19, 2
  05fdb58  li 20, 0
  05fdb5c  addi 30, 5, 16
  05fdb60  clrldi 8, 22, 32
  05fdb64  lfs 10, 0(31)
  05fdb68  clrldi 10, 23, 32
  05fdb6c  lfs 9, 0(12)
  05fdb70  clrldi 7, 24, 32
  05fdb74  add 9, 20, 17
  05fdb78  clrldi 11, 30, 32
  05fdb7c  lfs 7, 8(8)
  05fdb80  clrldi 9, 9, 32
  05fdb84  lfs 5, 12(8)
  05fdb88  fsubs 11, 10, 7
  05fdb8c  lfs 6, 8(7)
  05fdb90  fsubs 13, 9, 5
  05fdb94  lfs 8, 12(7)
  05fdb98  fadds 9, 9, 5
  05fdb9c  lfs 12, 8(10)
  05fdba0  fadds 10, 10, 7
  05fdba4  lfs 0, 12(10)
  05fdba8  fsubs 3, 12, 6
  05fdbac  fsubs 4, 0, 8
  05fdbb0  lfs 5, 28(9)
  05fdbb4  fadds 12, 12, 6
  05fdbb8  lfs 30, 20(9)
  05fdbbc  fadds 0, 0, 8
  05fdbc0  lfs 31, 0(11)
  05fdbc4  fneg 5, 5
  05fdbc8  lfs 1, 24(9)
  05fdbcc  addi 0, 4, -8
  05fdbd0  addi 9, 26, -4
  05fdbd4  addi 6, 25, -4
  05fdbd8  addi 11, 4, -4
  05fdbdc  addi 5, 27, -4
  05fdbe0  fsubs 8, 13, 3
  05fdbe4  addi 26, 26, -8
  05fdbe8  fadds 7, 11, 4
  05fdbec  addi 25, 25, -8
  05fdbf0  fsubs 11, 11, 4
  05fdbf4  addi 27, 27, -8
  05fdbf8  fadds 13, 13, 3
  05fdbfc  clrldi 4, 26, 32
  05fdc00  fsubs 2, 10, 12
  05fdc04  clrldi 9, 9, 32
  05fdc08  fsubs 3, 9, 0
  05fdc0c  clrldi 6, 6, 32
  05fdc10  fadds 10, 10, 12
  05fdc14  clrldi 11, 11, 32
  05fdc18  fadds 9, 9, 0
  05fdc1c  clrldi 5, 5, 32
  05fdc20  clrldi 29, 25, 32
  05fdc24  clrldi 3, 0, 32
  05fdc28  fmuls 4, 5, 8
  05fdc2c  clrldi 28, 27, 32
  05fdc30  fmuls 12, 5, 7
  05fdc34  addi 19, 19, 2
  05fdc38  fmuls 0, 30, 11
  05fdc3c  addi 30, 30, 16
  05fdc40  fmuls 6, 30, 13
  05fdc44  cmpw 7, 21, 19
  05fdc48  addi 20, 20, 16
  05fdc4c  addi 22, 22, 8
  05fdc50  stfs 10, 0(31)
  05fdc54  addi 23, 23, 8
  05fdc58  stfs 9, 0(12)
  05fdc5c  addi 31, 31, 8
  05fdc60  stfs 3, 12(10)
  05fdc64  addi 12, 12, 8
  05fdc68  stfs 2, 8(10)
  05fdc6c  addi 24, 24, 8
  05fdc70  fmadds 7, 1, 7, 4
  05fdc74  fmsubs 8, 1, 8, 12
  05fdc78  fmadds 13, 31, 13, 0
  05fdc7c  fmsubs 11, 31, 11, 6
  05fdc80  stfs 13, 12(8)
  05fdc84  stfs 11, 8(8)
  05fdc88  stfs 8, 12(7)
  05fdc8c  stfs 7, 8(7)
  05fdc90  lfs 13, 0(4)
  05fdc94  lfs 4, 0(29)
  05fdc98  lfs 6, 0(6)
  05fdc9c  fsubs 8, 13, 4
  05fdca0  lfs 7, 0(28)
  05fdca4  fadds 13, 13, 4
  05fdca8  lfs 9, 0(5)
  05fdcac  lfs 0, 0(9)
  05fdcb0  lfs 10, 0(3)
  05fdcb4  fsubs 12, 0, 6
  05fdcb8  lfs 11, 0(11)
  05fdcbc  fsubs 2, 10, 7
  05fdcc0  fsubs 3, 11, 9
  05fdcc4  fadds 10, 10, 7
  05fdcc8  fadds 11, 11, 9
  05fdccc  fadds 0, 0, 6
  05fdcd0  fsubs 7, 12, 2
  05fdcd4  fadds 9, 8, 3
  05fdcd8  fadds 12, 12, 2
  05fdcdc  fsubs 8, 8, 3
  05fdce0  fsubs 6, 13, 10
  05fdce4  fsubs 4, 0, 11
  05fdce8  fadds 13, 13, 10
  05fdcec  fadds 0, 0, 11
  05fdcf0  fmuls 11, 1, 7
  05fdcf4  fmuls 1, 1, 9
  05fdcf8  fmuls 10, 31, 8
  05fdcfc  fmuls 31, 31, 12
  05fdd00  stfs 13, 0(4)
  05fdd04  mr 4, 0
  05fdd08  stfs 0, 0(9)
  05fdd0c  stfs 6, 0(3)
  05fdd10  stfs 4, 0(11)
  05fdd14  fmadds 9, 5, 9, 11
  05fdd18  fmsubs 5, 5, 7, 1
  05fdd1c  fmadds 12, 30, 12, 10
  05fdd20  fmsubs 30, 30, 8, 31
  05fdd24  stfs 30, 0(29)
  05fdd28  stfs 12, 0(6)
  05fdd2c  stfs 9, 0(28)
  05fdd30  stfs 5, 0(5)
  05fdd34  bt 29, 0x5fdb60
  05fdd38  add 9, 21, 16
  05fdd3c  slwi 8, 21, 2
  05fdd40  add 11, 16, 9
  05fdd44  slwi 9, 9, 2
  05fdd48  add 10, 16, 11
  05fdd4c  slwi 11, 11, 2
  05fdd50  slwi 10, 10, 2
  05fdd54  add 8, 18, 8
  05fdd58  add 10, 18, 10
  05fdd5c  add 11, 18, 11
  05fdd60  add 9, 18, 9
  05fdd64  addi 7, 8, 4
  05fdd68  addi 5, 11, 4
  05fdd6c  addi 6, 9, 4
  05fdd70  addi 4, 10, 4
  05fdd74  clrldi 7, 7, 32
  05fdd78  clrldi 5, 5, 32
  05fdd7c  clrldi 6, 6, 32
  05fdd80  clrldi 4, 4, 32
  05fdd84  clrldi 8, 8, 32
  05fdd88  clrldi 11, 11, 32
  05fdd8c  lfs 12, 0(7)
  05fdd90  clrldi 9, 9, 32
  05fdd94  lfs 4, 0(5)
  05fdd98  clrldi 10, 10, 32
  05fdd9c  lfs 11, 0(6)
  05fdda0  lfs 8, 0(4)
  05fdda4  fsubs 9, 12, 4
  05fdda8  lfs 13, 0(8)
  05fddac  fsubs 7, 11, 8
  05fddb0  lfs 5, 0(11)
  05fddb4  fadds 11, 11, 8
  05fddb8  lfs 10, 0(9)
  05fddbc  fsubs 0, 13, 5
  05fddc0  lfs 6, 0(10)
  05fddc4  fadds 13, 13, 5
  05fddc8  fsubs 3, 10, 6
  05fddcc  fadds 12, 12, 4
  05fddd0  fadds 10, 10, 6
  05fddd4  fneg 6, 29
  05fddd8  fadds 8, 0, 7
  05fdddc  fsubs 0, 0, 7
  05fdde0  fsubs 5, 9, 3
  05fdde4  fadds 9, 9, 3
  05fdde8  fsubs 7, 13, 10
  05fddec  fsubs 4, 12, 11
  05fddf0  fadds 13, 13, 10
  05fddf4  fadds 12, 12, 11
  05fddf8  fsubs 10, 8, 5
  05fddfc  fadds 11, 0, 9
  05fde00  fadds 8, 8, 5
  05fde04  fsubs 0, 0, 9
  05fde08  stfs 13, 0(8)
  05fde0c  stfs 12, 0(7)
  05fde10  stfs 7, 0(9)
  05fde14  stfs 4, 0(6)
  05fde18  fmuls 10, 29, 10
  05fde1c  fmuls 11, 29, 11
  05fde20  fmuls 6, 6, 8
  05fde24  fmuls 0, 29, 0
  05fde28  stfs 0, 0(11)
  05fde2c  stfs 11, 0(5)
  05fde30  stfs 6, 0(10)
  05fde34  stfs 10, 0(4)
  05fde38  ld 16, -152(1)
  05fde3c  ld 17, -144(1)
  05fde40  ld 18, -136(1)
  05fde44  ld 19, -128(1)
  05fde48  ld 20, -120(1)
  05fde4c  ld 21, -112(1)
  05fde50  ld 22, -104(1)
  05fde54  ld 23, -96(1)
  05fde58  ld 24, -88(1)
  05fde5c  ld 25, -80(1)
  05fde60  ld 26, -72(1)
  05fde64  ld 27, -64(1)
  05fde68  ld 28, -56(1)
  05fde6c  ld 29, -48(1)
  05fde70  ld 30, -40(1)
  05fde74  ld 31, -32(1)
  05fde78  lfd 29, -24(1)
  05fde7c  lfd 30, -16(1)
  05fde80  lfd 31, -8(1)
  05fde84  blr

FUN_005fde88:   # 0x5fde88, 0x5d8 bytes
  05fde88  std 16, -200(1)
  05fde8c  mflr 0
  05fde90  srawi 16, 3, 3
  05fde94  stfd 23, -72(1)
  05fde98  std 0, 16(1)
  05fde9c  mtctr 4
  05fdea0  slwi 0, 16, 1
  05fdea4  stfd 24, -64(1)
  05fdea8  std 28, -104(1)
  05fdeac  mtlr 5
  05fdeb0  stw 0, -240(1)
  05fdeb4  lwz 9, -240(1)
  05fdeb8  slwi 0, 16, 2
  05fdebc  slwi 11, 16, 3
  05fdec0  stfd 25, -56(1)
  05fdec4  add 28, 9, 0
  05fdec8  stfd 26, -48(1)
  05fdecc  std 29, -96(1)
  05fded0  slwi 0, 28, 2
  05fded4  stfd 27, -40(1)
  05fded8  std 30, -88(1)
  05fdedc  add 29, 4, 0
  05fdee0  stfd 28, -32(1)
  05fdee4  add 30, 4, 11
  05fdee8  stfd 29, -24(1)
  05fdeec  stw 11, -236(1)
  05fdef0  addi 10, 29, 4
  05fdef4  stfd 30, -16(1)
  05fdef8  addi 11, 30, 4
  05fdefc  stfd 31, -8(1)
  05fdf00  clrldi 10, 10, 32
  05fdf04  clrldi 11, 11, 32
  05fdf08  clrldi 6, 30, 32
  05fdf0c  clrldi 3, 29, 32
  05fdf10  std 24, -136(1)
  05fdf14  std 31, -80(1)
  05fdf18  std 14, -216(1)
  05fdf1c  std 15, -208(1)
  05fdf20  std 17, -192(1)
  05fdf24  std 18, -184(1)
  05fdf28  std 19, -176(1)
  05fdf2c  std 20, -168(1)
  05fdf30  std 21, -160(1)
  05fdf34  std 22, -152(1)
  05fdf38  std 23, -144(1)
  05fdf3c  std 25, -128(1)
  05fdf40  std 26, -120(1)
  05fdf44  std 27, -112(1)
  05fdf48  lfs 13, 0(10)
  05fdf4c  slwi 24, 16, 4
  05fdf50  lfs 0, 0(3)
  05fdf54  mr 8, 4
  05fdf58  lfs 9, 0(11)
  05fdf5c  add 31, 4, 24
  05fdf60  lfs 12, 0(6)
  05fdf64  fsubs 8, 9, 0
  05fdf68  fadds 10, 12, 13
  05fdf6c  addi 9, 31, 4
  05fdf70  fadds 9, 9, 0
  05fdf74  clrldi 7, 31, 32
  05fdf78  fsubs 12, 12, 13
  05fdf7c  clrldi 9, 9, 32
  05fdf80  lfs 13, 4(5)
  05fdf84  cmpwi 7, 16, 2
  05fdf88  lfsu 0, 4(8)
  05fdf8c  lfs 11, 0(4)
  05fdf90  lfs 4, 0(7)
  05fdf94  fsubs 5, 0, 4
  05fdf98  fadds 0, 0, 4
  05fdf9c  fadds 7, 10, 8
  05fdfa0  fsubs 10, 10, 8
  05fdfa4  lfs 8, 0(9)
  05fdfa8  fadds 6, 12, 9
  05fdfac  fsubs 12, 12, 9
  05fdfb0  fadds 9, 11, 8
  05fdfb4  fsubs 11, 11, 8
  05fdfb8  fmuls 7, 13, 7
  05fdfbc  fmuls 10, 13, 10
  05fdfc0  fmuls 6, 13, 6
  05fdfc4  fmuls 13, 13, 12
  05fdfc8  fadds 4, 9, 7
  05fdfcc  fsubs 3, 5, 10
  05fdfd0  fsubs 8, 0, 6
  05fdfd4  fsubs 12, 11, 13
  05fdfd8  fsubs 9, 9, 7
  05fdfdc  fadds 11, 11, 13
  05fdfe0  fadds 0, 0, 6
  05fdfe4  fadds 5, 5, 10
  05fdfe8  stfs 11, 0(4)
  05fdfec  stfs 0, 0(8)
  05fdff0  stfs 12, 0(6)
  05fdff4  stfs 8, 0(11)
  05fdff8  stfs 9, 0(7)
  05fdffc  stfs 5, 0(9)
  05fe000  stfs 4, 0(3)
  05fe004  stfs 3, 0(10)
  05fe008  bf 29, 0x5fe2ac
  05fe00c  lwz 9, -240(1)
  05fe010  mr 17, 31
  05fe014  mr 18, 30
  05fe018  add 0, 9, 28
  05fe01c  mr 27, 30
  05fe020  slwi 0, 0, 2
  05fe024  mr 19, 29
  05fe028  add 12, 5, 24
  05fe02c  add 23, 4, 0
  05fe030  addi 21, 4, 8
  05fe034  addi 22, 4, 12
  05fe038  mr 30, 29
  05fe03c  mr 31, 17
  05fe040  li 14, 2
  05fe044  li 15, 0
  05fe048  addi 20, 5, 16
  05fe04c  nop
  05fe050  clrldi 5, 17, 32
  05fe054  mflr 0
  05fe058  clrldi 7, 18, 32
  05fe05c  lfs 12, 0(21)
  05fe060  add 8, 0, 15
  05fe064  lfs 11, 0(22)
  05fe068  clrldi 6, 19, 32
  05fe06c  clrldi 8, 8, 32
  05fe070  lfs 6, 12(5)
  05fe074  addi 11, 12, -4
  05fe078  lfs 5, 8(5)
  05fe07c  fadds 9, 12, 6
  05fe080  lfs 13, 8(7)
  05fe084  fsubs 10, 11, 5
  05fe088  lfs 7, 12(6)
  05fe08c  fsubs 12, 12, 6
  05fe090  lfs 1, 28(8)
  05fe094  fadds 3, 13, 7
  05fe098  lfs 8, 8(6)
  05fe09c  fneg 1, 1
  05fe0a0  lfs 0, 12(7)
  05fe0a4  fadds 11, 11, 5
  05fe0a8  fsubs 31, 0, 8
  05fe0ac  addi 24, 12, -16
  05fe0b0  fadds 0, 0, 8
  05fe0b4  addi 9, 12, -8
  05fe0b8  fsubs 13, 13, 7
  05fe0bc  clrldi 11, 11, 32
  05fe0c0  clrldi 9, 9, 32
  05fe0c4  lfs 30, 20(8)
  05fe0c8  clrldi 10, 24, 32
  05fe0cc  lfs 28, 24(8)
  05fe0d0  addi 4, 27, -4
  05fe0d4  fmuls 8, 30, 12
  05fe0d8  addi 26, 30, -8
  05fe0dc  lfs 6, 0(11)
  05fe0e0  clrldi 11, 20, 32
  05fe0e4  lfs 2, 0(9)
  05fe0e8  fmuls 29, 1, 9
  05fe0ec  lfs 4, 0(10)
  05fe0f0  fneg 6, 6
  05fe0f4  fmuls 5, 2, 3
  05fe0f8  addi 9, 12, -12
  05fe0fc  fmuls 26, 30, 11
  05fe100  addi 10, 31, -4
  05fe104  fmuls 7, 4, 13
  05fe108  clrldi 9, 9, 32
  05fe10c  fmuls 25, 4, 0
  05fe110  lfs 27, 0(11)
  05fe114  fmuls 24, 1, 10
  05fe118  addi 25, 23, -8
  05fe11c  fmuls 23, 2, 31
  05fe120  addi 0, 31, -8
  05fe124  fmadds 11, 27, 11, 8
  05fe128  addi 11, 23, -4
  05fe12c  addi 27, 27, -8
  05fe130  fmsubs 10, 28, 10, 29
  05fe134  lfs 29, 0(9)
  05fe138  addi 9, 30, -4
  05fe13c  fmsubs 31, 6, 31, 5
  05fe140  clrldi 4, 4, 32
  05fe144  fmsubs 12, 27, 12, 26
  05fe148  clrldi 9, 9, 32
  05fe14c  fmadds 0, 29, 0, 7
  05fe150  clrldi 11, 11, 32
  05fe154  fmsubs 13, 29, 13, 25
  05fe158  clrldi 10, 10, 32
  05fe15c  fmadds 9, 28, 9, 24
  05fe160  clrldi 8, 27, 32
  05fe164  fmadds 3, 6, 3, 23
  05fe168  clrldi 29, 26, 32
  05fe16c  clrldi 3, 0, 32
  05fe170  clrldi 28, 25, 32
  05fe174  addi 14, 14, 2
  05fe178  addi 20, 20, 16
  05fe17c  fsubs 5, 10, 31
  05fe180  cmpw 7, 16, 14
  05fe184  fadds 10, 10, 31
  05fe188  addi 15, 15, 16
  05fe18c  fsubs 7, 11, 0
  05fe190  mr 12, 24
  05fe194  fsubs 8, 12, 13
  05fe198  addi 17, 17, 8
  05fe19c  fadds 11, 11, 0
  05fe1a0  addi 18, 18, 8
  05fe1a4  fsubs 0, 9, 3
  05fe1a8  addi 19, 19, 8
  05fe1ac  fadds 12, 12, 13
  05fe1b0  mr 30, 26
  05fe1b4  fadds 9, 9, 3
  05fe1b8  mr 31, 0
  05fe1bc  mr 23, 25
  05fe1c0  stfs 12, 0(21)
  05fe1c4  addi 21, 21, 8
  05fe1c8  stfs 11, 0(22)
  05fe1cc  addi 22, 22, 8
  05fe1d0  stfs 7, 12(7)
  05fe1d4  stfs 8, 8(7)
  05fe1d8  stfs 9, 8(5)
  05fe1dc  stfs 10, 12(5)
  05fe1e0  stfs 5, 12(6)
  05fe1e4  stfs 0, 8(6)
  05fe1e8  lfs 3, 0(9)
  05fe1ec  lfs 5, 0(29)
  05fe1f0  lfs 7, 0(11)
  05fe1f4  lfs 10, 0(28)
  05fe1f8  lfs 8, 0(8)
  05fe1fc  lfs 13, 0(4)
  05fe200  fadds 31, 8, 3
  05fe204  lfs 11, 0(3)
  05fe208  fsubs 12, 13, 5
  05fe20c  lfs 0, 0(10)
  05fe210  fsubs 8, 8, 3
  05fe214  fsubs 9, 0, 10
  05fe218  fadds 26, 11, 7
  05fe21c  fadds 13, 13, 5
  05fe220  fsubs 11, 11, 7
  05fe224  fadds 0, 0, 10
  05fe228  fmuls 10, 6, 31
  05fe22c  fmuls 6, 6, 12
  05fe230  fmuls 5, 29, 8
  05fe234  fmuls 7, 28, 26
  05fe238  fmuls 29, 29, 13
  05fe23c  fmuls 3, 27, 11
  05fe240  fmuls 28, 28, 9
  05fe244  fmuls 27, 27, 0
  05fe248  fmsubs 12, 2, 12, 10
  05fe24c  fmadds 2, 2, 31, 6
  05fe250  fmadds 13, 4, 13, 5
  05fe254  fmsubs 9, 1, 9, 7
  05fe258  fmsubs 4, 4, 8, 29
  05fe25c  fmadds 0, 30, 0, 3
  05fe260  fmadds 1, 1, 26, 28
  05fe264  fmsubs 30, 30, 11, 27
  05fe268  fsubs 7, 12, 9
  05fe26c  fadds 12, 12, 9
  05fe270  fsubs 10, 13, 0
  05fe274  fsubs 8, 2, 1
  05fe278  fsubs 11, 4, 30
  05fe27c  fadds 2, 2, 1
  05fe280  fadds 4, 4, 30
  05fe284  fadds 13, 13, 0
  05fe288  stfs 4, 0(8)
  05fe28c  stfs 13, 0(4)
  05fe290  stfs 11, 0(3)
  05fe294  stfs 10, 0(10)
  05fe298  stfs 2, 0(29)
  05fe29c  stfs 12, 0(9)
  05fe2a0  stfs 8, 0(28)
  05fe2a4  stfs 7, 0(11)
  05fe2a8  bt 29, 0x5fe050
  05fe2ac  lwz 9, -240(1)
  05fe2b0  slwi 7, 16, 2
  05fe2b4  mflr 0
  05fe2b8  add 11, 16, 9
  05fe2bc  mfctr 31
  05fe2c0  add 10, 9, 11
  05fe2c4  slwi 11, 11, 2
  05fe2c8  add 8, 9, 10
  05fe2cc  slwi 10, 10, 2
  05fe2d0  slwi 8, 8, 2
  05fe2d4  add 7, 31, 7
  05fe2d8  add 8, 31, 8
  05fe2dc  add 10, 31, 10
  05fe2e0  add 11, 31, 11
  05fe2e4  lwz 31, -236(1)
  05fe2e8  addi 6, 7, 4
  05fe2ec  addi 5, 11, 4
  05fe2f0  addi 4, 10, 4
  05fe2f4  addi 3, 8, 4
  05fe2f8  clrldi 4, 4, 32
  05fe2fc  clrldi 6, 6, 32
  05fe300  clrldi 10, 10, 32
  05fe304  clrldi 3, 3, 32
  05fe308  clrldi 5, 5, 32
  05fe30c  clrldi 8, 8, 32
  05fe310  lfs 5, 0(4)
  05fe314  clrldi 7, 7, 32
  05fe318  lfs 10, 0(6)
  05fe31c  clrldi 11, 11, 32
  05fe320  lfs 6, 0(10)
  05fe324  lfs 13, 0(3)
  05fe328  fsubs 8, 10, 6
  05fe32c  lfs 12, 0(5)
  05fe330  fadds 10, 10, 6
  05fe334  lfs 0, 0(8)
  05fe338  add 9, 0, 31
  05fe33c  lfs 11, 0(7)
  05fe340  fsubs 7, 12, 0
  05fe344  lfs 9, 0(11)
  05fe348  fadds 28, 11, 5
  05fe34c  fadds 29, 9, 13
  05fe350  clrldi 9, 9, 32
  05fe354  fsubs 9, 9, 13
  05fe358  fadds 12, 12, 0
  05fe35c  fsubs 11, 11, 5
  05fe360  lfs 13, 4(9)
  05fe364  lfs 0, 0(9)
  05fe368  fmuls 2, 13, 10
  05fe36c  fmuls 31, 0, 8
  05fe370  fmuls 30, 13, 7
  05fe374  fmuls 3, 0, 28
  05fe378  fmuls 6, 13, 29
  05fe37c  fmuls 4, 0, 9
  05fe380  fmuls 1, 0, 12
  05fe384  fmuls 5, 13, 11
  05fe388  fmsubs 11, 0, 11, 2
  05fe38c  fmadds 8, 13, 8, 3
  05fe390  fmadds 7, 0, 7, 6
  05fe394  fmadds 12, 13, 12, 4
  05fe398  fmsubs 9, 13, 9, 1
  05fe39c  fmadds 10, 0, 10, 5
  05fe3a0  fmsubs 13, 13, 28, 31
  05fe3a4  fmsubs 0, 0, 29, 30
  05fe3a8  fadds 4, 8, 7
  05fe3ac  fsubs 8, 8, 7
  05fe3b0  fsubs 6, 11, 9
  05fe3b4  fsubs 5, 10, 12
  05fe3b8  fadds 11, 11, 9
  05fe3bc  fadds 10, 10, 12
  05fe3c0  fadds 12, 13, 0
  05fe3c4  fsubs 13, 13, 0
  05fe3c8  stfs 11, 0(7)
  05fe3cc  stfs 10, 0(6)
  05fe3d0  stfs 6, 0(11)
  05fe3d4  stfs 5, 0(5)
  05fe3d8  stfs 13, 0(10)
  05fe3dc  stfs 8, 0(4)
  05fe3e0  stfs 12, 0(8)
  05fe3e4  stfs 4, 0(3)
  05fe3e8  ld 0, 16(1)
  05fe3ec  ld 14, -216(1)
  05fe3f0  mtlr 0
  05fe3f4  ld 15, -208(1)
  05fe3f8  ld 16, -200(1)
  05fe3fc  ld 17, -192(1)
  05fe400  ld 18, -184(1)
  05fe404  ld 19, -176(1)
  05fe408  ld 20, -168(1)
  05fe40c  ld 21, -160(1)
  05fe410  ld 22, -152(1)
  05fe414  ld 23, -144(1)
  05fe418  ld 24, -136(1)
  05fe41c  ld 25, -128(1)
  05fe420  ld 26, -120(1)
  05fe424  ld 27, -112(1)
  05fe428  ld 28, -104(1)
  05fe42c  ld 29, -96(1)
  05fe430  ld 30, -88(1)
  05fe434  ld 31, -80(1)
  05fe438  lfd 23, -72(1)
  05fe43c  lfd 24, -64(1)
  05fe440  lfd 25, -56(1)
  05fe444  lfd 26, -48(1)
  05fe448  lfd 27, -40(1)
  05fe44c  lfd 28, -32(1)
  05fe450  lfd 29, -24(1)
  05fe454  lfd 30, -16(1)
  05fe458  lfd 31, -8(1)
  05fe45c  blr

FUN_005fe460:   # 0x5fe460, 0x990 bytes
  05fe460  stdu 1, -752(1)
  05fe464  mflr 0
  05fe468  std 19, 504(1)
  05fe46c  mr 19, 3
  05fe470  stfd 14, 608(1)
  05fe474  stfd 15, 616(1)
  05fe478  mr 11, 3
  05fe47c  stfd 16, 624(1)
  05fe480  mr 12, 3
  05fe484  stfd 17, 632(1)
  05fe488  mr 8, 3
  05fe48c  stfd 18, 640(1)
  05fe490  mr 10, 3
  05fe494  stfd 19, 648(1)
  05fe498  mr 5, 3
  05fe49c  stfd 20, 656(1)
  05fe4a0  mr 7, 3
  05fe4a4  stfd 21, 664(1)
  05fe4a8  mr 6, 3
  05fe4ac  stfd 22, 672(1)
  05fe4b0  mr 9, 3
  05fe4b4  stfd 23, 680(1)
  05fe4b8  stfd 24, 688(1)
  05fe4bc  stfd 25, 696(1)
  05fe4c0  stfd 26, 704(1)
  05fe4c4  stfd 27, 712(1)
  05fe4c8  stfd 28, 720(1)
  05fe4cc  stfd 29, 728(1)
  05fe4d0  stfd 30, 736(1)
  05fe4d4  stfd 31, 744(1)
  05fe4d8  std 14, 464(1)
  05fe4dc  std 15, 472(1)
  05fe4e0  std 16, 480(1)
  05fe4e4  std 17, 488(1)
  05fe4e8  std 18, 496(1)
  05fe4ec  std 20, 512(1)
  05fe4f0  std 21, 520(1)
  05fe4f4  std 22, 528(1)
  05fe4f8  std 23, 536(1)
  05fe4fc  std 24, 544(1)
  05fe500  std 25, 552(1)
  05fe504  std 26, 560(1)
  05fe508  std 27, 568(1)
  05fe50c  std 28, 576(1)
  05fe510  std 29, 584(1)
  05fe514  std 30, 592(1)
  05fe518  std 31, 600(1)
  05fe51c  std 0, 768(1)
  05fe520  lfs 0, 4(4)
  05fe524  mr 15, 3
  05fe528  lfs 13, 8(4)
  05fe52c  mr 18, 3
  05fe530  stfs 0, 296(1)
  05fe534  mr 25, 3
  05fe538  lfsu 2, 124(19)
  05fe53c  stfs 2, 300(1)
  05fe540  mr 14, 3
  05fe544  lfsu 28, 8(11)
  05fe548  stw 11, 360(1)
  05fe54c  mr 11, 3
  05fe550  lfsu 0, 72(15)
  05fe554  stfs 0, 356(1)
  05fe558  mr 27, 3
  05fe55c  mr 23, 3
  05fe560  mr 30, 3
  05fe564  lfsu 0, 12(11)
  05fe568  stfs 0, 352(1)
  05fe56c  mtlr 11
  05fe570  mr 11, 3
  05fe574  lfsu 2, 76(18)
  05fe578  stfs 2, 348(1)
  05fe57c  mr 22, 3
  05fe580  lfsu 4, 104(25)
  05fe584  lfsu 23, 40(14)
  05fe588  stfs 4, 344(1)
  05fe58c  mr 17, 3
  05fe590  lfsu 0, 16(11)
  05fe594  lfsu 6, 108(27)
  05fe598  lfsu 21, 44(12)
  05fe59c  stfs 0, 340(1)
  05fe5a0  mr 29, 3
  05fe5a4  lfsu 2, 80(23)
  05fe5a8  fsubs 11, 21, 6
  05fe5ac  stfs 2, 336(1)
  05fe5b0  mr 16, 3
  05fe5b4  lfsu 4, 20(30)
  05fe5b8  fadds 21, 21, 6
  05fe5bc  stfs 4, 332(1)
  05fe5c0  mr 28, 3
  05fe5c4  lfsu 5, 84(22)
  05fe5c8  stfs 5, 328(1)
  05fe5cc  mr 0, 11
  05fe5d0  lfsu 7, 48(17)
  05fe5d4  stfs 7, 324(1)
  05fe5d8  mr 11, 3
  05fe5dc  lfsu 8, 112(29)
  05fe5e0  stfs 8, 320(1)
  05fe5e4  mr 31, 3
  05fe5e8  lfs 5, 352(1)
  05fe5ec  mr 24, 3
  05fe5f0  lfs 7, 348(1)
  05fe5f4  mr 26, 3
  05fe5f8  fsubs 1, 5, 7
  05fe5fc  lfs 7, 320(1)
  05fe600  lfs 5, 324(1)
  05fe604  mr 21, 3
  05fe608  fsubs 5, 5, 7
  05fe60c  lfsu 9, 52(16)
  05fe610  stfs 9, 316(1)
  05fe614  mr 4, 3
  05fe618  lfsu 10, 116(28)
  05fe61c  stfs 10, 312(1)
  05fe620  mr 20, 3
  05fe624  lfsu 0, 24(11)
  05fe628  stfs 0, 308(1)
  05fe62c  mtctr 11
  05fe630  lfsu 2, 28(31)
  05fe634  lfsu 8, 88(24)
  05fe638  stfs 2, 304(1)
  05fe63c  mr 11, 3
  05fe640  lfsu 10, 92(26)
  05fe644  lfsu 14, 56(21)
  05fe648  lfsu 12, 120(4)
  05fe64c  lfsu 15, 60(20)
  05fe650  fsubs 3, 14, 12
  05fe654  stfs 5, 200(1)
  05fe658  fadds 14, 14, 12
  05fe65c  lfs 5, 304(1)
  05fe660  fsubs 5, 5, 10
  05fe664  lfs 4, 356(1)
  05fe668  fsubs 2, 28, 4
  05fe66c  lfs 30, 340(1)
  05fe670  lfs 31, 336(1)
  05fe674  lfs 9, 344(1)
  05fe678  lfs 0, 332(1)
  05fe67c  fsubs 20, 23, 9
  05fe680  lfs 4, 328(1)
  05fe684  stfs 11, 220(1)
  05fe688  fsubs 11, 30, 31
  05fe68c  lfs 30, 316(1)
  05fe690  fsubs 9, 0, 4
  05fe694  lfs 31, 312(1)
  05fe698  fsubs 4, 30, 31
  05fe69c  lfs 0, 308(1)
  05fe6a0  stfs 5, 144(1)
  05fe6a4  fsubs 17, 0, 8
  05fe6a8  lfs 5, 356(1)
  05fe6ac  fadds 28, 28, 5
  05fe6b0  lfs 30, 300(1)
  05fe6b4  lfs 31, 296(1)
  05fe6b8  fsubs 7, 15, 30
  05fe6bc  fmuls 0, 31, 13
  05fe6c0  fsubs 12, 1, 20
  05fe6c4  fadds 1, 1, 20
  05fe6c8  stfs 28, 84(1)
  05fe6cc  lfs 6, 304(1)
  05fe6d0  fadds 10, 6, 10
  05fe6d4  lfs 30, 348(1)
  05fe6d8  lfs 28, 352(1)
  05fe6dc  fadds 13, 13, 0
  05fe6e0  lfs 5, 308(1)
  05fe6e4  fadds 28, 28, 30
  05fe6e8  fadds 8, 5, 8
  05fe6ec  lfs 31, 344(1)
  05fe6f0  lfs 30, 200(1)
  05fe6f4  fadds 23, 23, 31
  05fe6f8  fsubs 30, 9, 30
  05fe6fc  stfs 21, 180(1)
  05fe700  stfs 14, 156(1)
  05fe704  stfs 12, 112(1)
  05fe708  lfs 31, 84(1)
  05fe70c  stfs 10, 100(1)
  05fe710  lfs 10, 220(1)
  05fe714  fadds 10, 2, 10
  05fe718  stfs 28, 116(1)
  05fe71c  stfs 8, 68(1)
  05fe720  fadds 28, 11, 4
  05fe724  lfs 8, 300(1)
  05fe728  fsubs 11, 11, 4
  05fe72c  lfs 5, 116(1)
  05fe730  fadds 15, 15, 8
  05fe734  lfs 4, 144(1)
  05fe738  fadds 8, 17, 7
  05fe73c  fsubs 5, 5, 21
  05fe740  stfs 23, 160(1)
  05fe744  fsubs 17, 17, 7
  05fe748  stfs 30, 104(1)
  05fe74c  fsubs 6, 31, 23
  05fe750  lfs 12, 68(1)
  05fe754  lfs 30, 220(1)
  05fe758  lfs 31, 200(1)
  05fe75c  fsubs 2, 2, 30
  05fe760  stfs 10, 80(1)
  05fe764  fadds 9, 9, 31
  05fe768  lfs 10, 144(1)
  05fe76c  fsubs 10, 10, 3
  05fe770  stfs 28, 72(1)
  05fe774  fadds 3, 4, 3
  05fe778  stfs 15, 176(1)
  05fe77c  stfs 8, 60(1)
  05fe780  stfs 5, 256(1)
  05fe784  fsubs 5, 12, 14
  05fe788  stfs 17, 64(1)
  05fe78c  lfs 28, 100(1)
  05fe790  fsubs 24, 28, 15
  05fe794  fmuls 29, 0, 2
  05fe798  stfs 10, 92(1)
  05fe79c  stfs 3, 96(1)
  05fe7a0  lfsu 7, 64(8)
  05fe7a4  stfs 7, 372(1)
  05fe7a8  lfsu 8, 68(10)
  05fe7ac  lfsu 12, 4(5)
  05fe7b0  stfs 8, 368(1)
  05fe7b4  lfsu 10, 100(11)
  05fe7b8  lfsu 4, 32(7)
  05fe7bc  lfsu 3, 36(6)
  05fe7c0  lfs 28, 0(3)
  05fe7c4  stfs 10, 364(1)
  05fe7c8  fsubs 8, 28, 7
  05fe7cc  lfs 28, 364(1)
  05fe7d0  fsubs 28, 3, 28
  05fe7d4  lfsu 10, 96(9)
  05fe7d8  fsubs 31, 4, 10
  05fe7dc  lfs 30, 368(1)
  05fe7e0  fsubs 7, 12, 30
  05fe7e4  fadds 30, 6, 24
  05fe7e8  fadds 4, 4, 10
  05fe7ec  lfs 10, 364(1)
  05fe7f0  fadds 3, 3, 10
  05fe7f4  lfs 10, 332(1)
  05fe7f8  fsubs 6, 6, 24
  05fe7fc  stfs 28, 288(1)
  05fe800  fadds 28, 11, 9
  05fe804  stfs 31, 292(1)
  05fe808  fsubs 11, 11, 9
  05fe80c  lfs 31, 256(1)
  05fe810  fsubs 31, 31, 5
  05fe814  stfs 30, 56(1)
  05fe818  lfs 30, 104(1)
  05fe81c  stfs 28, 384(1)
  05fe820  lfs 28, 60(1)
  05fe824  fmuls 14, 0, 28
  05fe828  fmuls 28, 13, 17
  05fe82c  stfs 31, 88(1)
  05fe830  lfs 31, 72(1)
  05fe834  fsubs 15, 30, 31
  05fe838  lfs 31, 80(1)
  05fe83c  fmuls 30, 13, 31
  05fe840  lfs 31, 0(3)
  05fe844  stfs 28, 392(1)
  05fe848  lfs 28, 372(1)
  05fe84c  fadds 27, 31, 28
  05fe850  lfs 31, 368(1)
  05fe854  fadds 12, 12, 31
  05fe858  lfs 28, 340(1)
  05fe85c  lfs 31, 336(1)
  05fe860  fadds 28, 28, 31
  05fe864  lfs 31, 324(1)
  05fe868  stfs 28, 76(1)
  05fe86c  lfs 28, 328(1)
  05fe870  fadds 10, 10, 28
  05fe874  lfs 28, 316(1)
  05fe878  stfs 10, 108(1)
  05fe87c  lfs 10, 320(1)
  05fe880  fadds 25, 31, 10
  05fe884  lfs 31, 312(1)
  05fe888  fadds 26, 28, 31
  05fe88c  lfs 10, 256(1)
  05fe890  fmuls 28, 0, 1
  05fe894  fadds 31, 10, 5
  05fe898  fmadds 1, 13, 1, 29
  05fe89c  stfs 28, 376(1)
  05fe8a0  lfs 28, 96(1)
  05fe8a4  lfs 10, 104(1)
  05fe8a8  fmuls 18, 13, 28
  05fe8ac  lfs 9, 72(1)
  05fe8b0  lfs 28, 288(1)
  05fe8b4  fadds 9, 9, 10
  05fe8b8  fadds 10, 8, 28
  05fe8bc  lfs 28, 112(1)
  05fe8c0  fmadds 30, 0, 28, 30
  05fe8c4  lfs 5, 112(1)
  05fe8c8  fmuls 5, 13, 5
  05fe8cc  lfs 28, 96(1)
  05fe8d0  stfs 9, 388(1)
  05fe8d4  fsubs 9, 27, 4
  05fe8d8  fadds 27, 27, 4
  05fe8dc  stfs 30, 232(1)
  05fe8e0  lfs 30, 76(1)
  05fe8e4  fsubs 30, 30, 25
  05fe8e8  stfs 5, 380(1)
  05fe8ec  lfs 5, 92(1)
  05fe8f0  fmuls 19, 0, 5
  05fe8f4  fmadds 14, 13, 5, 14
  05fe8f8  lfs 5, 292(1)
  05fe8fc  stfs 9, 260(1)
  05fe900  fsubs 9, 7, 5
  05fe904  lfs 5, 108(1)
  05fe908  fsubs 5, 5, 26
  05fe90c  stfs 30, 252(1)
  05fe910  lfs 30, 392(1)
  05fe914  fmadds 28, 0, 28, 30
  05fe918  lfs 30, 88(1)
  05fe91c  stfs 14, 224(1)
  05fe920  fsubs 14, 12, 3
  05fe924  fadds 12, 12, 3
  05fe928  stfs 5, 248(1)
  05fe92c  fadds 5, 6, 31
  05fe930  fsubs 6, 6, 31
  05fe934  stfs 28, 240(1)
  05fe938  lfs 28, 56(1)
  05fe93c  fadds 28, 28, 30
  05fe940  lfs 30, 380(1)
  05fe944  stfs 5, 416(1)
  05fe948  lfs 5, 376(1)
  05fe94c  fmsubs 2, 13, 2, 5
  05fe950  lfs 5, 296(1)
  05fe954  fmuls 11, 5, 11
  05fe958  fmuls 15, 5, 15
  05fe95c  stfs 28, 420(1)
  05fe960  lfs 28, 80(1)
  05fe964  fmsubs 28, 0, 28, 30
  05fe968  lfs 30, 388(1)
  05fe96c  fmuls 30, 5, 30
  05fe970  fmsubs 0, 0, 17, 18
  05fe974  fadds 3, 9, 15
  05fe978  fsubs 9, 9, 15
  05fe97c  stfs 28, 236(1)
  05fe980  lfs 28, 384(1)
  05fe984  fmuls 28, 5, 28
  05fe988  stfs 30, 228(1)
  05fe98c  lfs 5, 60(1)
  05fe990  fmsubs 13, 13, 5, 19
  05fe994  stfs 28, 244(1)
  05fe998  stfs 27, 284(1)
  05fe99c  lfs 28, 288(1)
  05fe9a0  fsubs 8, 8, 28
  05fe9a4  lfs 28, 116(1)
  05fe9a8  fadds 28, 28, 21
  05fe9ac  lfs 4, 84(1)
  05fe9b0  lfs 30, 292(1)
  05fe9b4  fadds 4, 4, 23
  05fe9b8  fadds 7, 7, 30
  05fe9bc  lfs 30, 156(1)
  05fe9c0  lfs 5, 108(1)
  05fe9c4  fadds 26, 5, 26
  05fe9c8  lfs 5, 176(1)
  05fe9cc  lfs 31, 228(1)
  05fe9d0  stfs 28, 276(1)
  05fe9d4  lfs 28, 68(1)
  05fe9d8  fadds 28, 28, 30
  05fe9dc  stfs 4, 280(1)
  05fe9e0  lfs 4, 76(1)
  05fe9e4  fadds 22, 4, 25
  05fe9e8  lfs 4, 100(1)
  05fe9ec  lfs 30, 88(1)
  05fe9f0  fadds 4, 4, 5
  05fe9f4  lfs 5, 236(1)
  05fe9f8  fadds 5, 5, 13
  05fe9fc  stfs 26, 272(1)
  05fea00  stfs 28, 268(1)
  05fea04  lfs 28, 56(1)
  05fea08  fsubs 16, 28, 30
  05fea0c  lfs 30, 224(1)
  05fea10  lfs 28, 232(1)
  05fea14  fadds 28, 28, 30
  05fea18  lfs 30, 240(1)
  05fea1c  stfs 5, 196(1)
  05fea20  fsubs 30, 1, 30
  05fea24  lfs 5, 244(1)
  05fea28  stfs 4, 264(1)
  05fea2c  fsubs 5, 7, 5
  05fea30  fadds 4, 10, 31
  05fea34  fsubs 31, 8, 11
  05fea38  fadds 8, 8, 11
  05fea3c  stfs 28, 216(1)
  05fea40  fsubs 28, 2, 0
  05fea44  stfs 30, 212(1)
  05fea48  fadds 2, 2, 0
  05fea4c  lfs 30, 248(1)
  05fea50  stfs 5, 140(1)
  05fea54  lfs 5, 420(1)
  05fea58  stfs 31, 128(1)
  05fea5c  lfs 31, 296(1)
  05fea60  fmuls 31, 31, 5
  05fea64  fsubs 5, 27, 22
  05fea68  fadds 22, 27, 22
  05fea6c  stfs 28, 192(1)
  05fea70  lfs 28, 260(1)
  05fea74  fadds 28, 28, 30
  05fea78  stfs 31, 208(1)
  05fea7c  stfs 28, 124(1)
  05fea80  fsubs 28, 12, 26
  05fea84  lfs 31, 252(1)
  05fea88  fadds 12, 12, 26
  05fea8c  fsubs 31, 14, 31
  05fea90  lfs 30, 280(1)
  05fea94  stfs 5, 120(1)
  05fea98  lfs 5, 276(1)
  05fea9c  lfs 11, 240(1)
  05feaa0  lfs 0, 268(1)
  05feaa4  fadds 1, 1, 11
  05feaa8  lfs 11, 264(1)
  05feaac  stfs 22, 48(1)
  05feab0  stfs 28, 132(1)
  05feab4  lfs 28, 264(1)
  05feab8  stfs 31, 136(1)
  05feabc  fsubs 5, 5, 28
  05feac0  lfs 31, 268(1)
  05feac4  fsubs 30, 30, 31
  05feac8  lfs 31, 416(1)
  05feacc  lfs 28, 236(1)
  05fead0  fsubs 13, 28, 13
  05fead4  lfs 28, 248(1)
  05fead8  stfs 5, 204(1)
  05feadc  lfs 5, 228(1)
  05feae0  stfs 30, 184(1)
  05feae4  fsubs 10, 10, 5
  05feae8  lfs 30, 296(1)
  05feaec  fmuls 31, 30, 31
  05feaf0  stfs 13, 152(1)
  05feaf4  fmuls 16, 30, 16
  05feaf8  lfs 5, 244(1)
  05feafc  fmuls 6, 30, 6
  05feb00  lfs 30, 232(1)
  05feb04  lfs 13, 260(1)
  05feb08  fadds 7, 7, 5
  05feb0c  fsubs 13, 13, 28
  05feb10  lfs 5, 276(1)
  05feb14  fadds 5, 5, 11
  05feb18  stfs 31, 168(1)
  05feb1c  lfs 31, 224(1)
  05feb20  fsubs 30, 30, 31
  05feb24  lfs 31, 280(1)
  05feb28  fadds 31, 31, 0
  05feb2c  stfs 16, 188(1)
  05feb30  stfs 13, 52(1)
  05feb34  lfs 13, 152(1)
  05feb38  fsubs 0, 10, 13
  05feb3c  stfs 5, 164(1)
  05feb40  fsubs 5, 8, 2
  05feb44  fadds 8, 8, 2
  05feb48  stfs 30, 172(1)
  05feb4c  lfs 28, 172(1)
  05feb50  stfs 31, 148(1)
  05feb54  fsubs 13, 9, 28
  05feb58  lfs 31, 196(1)
  05feb5c  fsubs 28, 7, 1
  05feb60  fsubs 31, 3, 31
  05feb64  lfs 30, 252(1)
  05feb68  fadds 14, 14, 30
  05feb6c  lfs 30, 216(1)
  05feb70  fadds 11, 4, 30
  05feb74  fadds 7, 7, 1
  05feb78  stfs 31, 396(1)
  05feb7c  lfs 31, 212(1)
  05feb80  stfs 5, 400(1)
  05feb84  stfs 28, 404(1)
  05feb88  lfs 30, 128(1)
  05feb8c  lfs 28, 192(1)
  05feb90  fadds 30, 30, 31
  05feb94  lfs 5, 140(1)
  05feb98  fsubs 5, 5, 28
  05feb9c  lfs 28, 124(1)
  05feba0  lfs 31, 168(1)
  05feba4  fsubs 15, 14, 31
  05feba8  lfs 31, 148(1)
  05febac  fsubs 31, 22, 31
  05febb0  stfs 30, 408(1)
  05febb4  lfs 30, 52(1)
  05febb8  stfs 5, 412(1)
  05febbc  fsubs 30, 30, 6
  05febc0  lfs 5, 208(1)
  05febc4  fadds 5, 5, 28
  05febc8  lfs 28, 120(1)
  05febcc  stfs 31, 436(1)
  05febd0  lfs 31, 132(1)
  05febd4  stfs 30, 424(1)
  05febd8  lfs 30, 136(1)
  05febdc  stfs 5, 428(1)
  05febe0  fsubs 30, 30, 16
  05febe4  lfs 5, 164(1)
  05febe8  fsubs 5, 12, 5
  05febec  stfs 30, 432(1)
  05febf0  lfs 30, 204(1)
  05febf4  stfs 5, 440(1)
  05febf8  fadds 28, 28, 30
  05febfc  lfs 5, 184(1)
  05fec00  fsubs 31, 31, 5
  05fec04  lfs 30, 172(1)
  05fec08  lfs 5, 196(1)
  05fec0c  fadds 9, 9, 30
  05fec10  fadds 3, 3, 5
  05fec14  lfs 30, 212(1)
  05fec18  lfs 5, 192(1)
  05fec1c  stfs 28, 444(1)
  05fec20  lfs 28, 152(1)
  05fec24  stfs 31, 448(1)
  05fec28  fadds 10, 10, 28
  05fec2c  lfs 31, 216(1)
  05fec30  fsubs 4, 4, 31
  05fec34  lfs 28, 128(1)
  05fec38  lfs 31, 140(1)
  05fec3c  fsubs 1, 28, 30
  05fec40  fadds 2, 31, 5
  05fec44  lfs 28, 52(1)
  05fec48  lfs 30, 168(1)
  05fec4c  fadds 6, 6, 28
  05fec50  lfs 31, 124(1)
  05fec54  fadds 29, 30, 14
  05fec58  lfs 5, 208(1)
  05fec5c  fsubs 28, 31, 5
  05fec60  lfs 30, 136(1)
  05fec64  lfs 31, 148(1)
  05fec68  fadds 14, 16, 30
  05fec6c  fadds 18, 22, 31
  05fec70  lfs 5, 164(1)
  05fec74  lfs 30, 120(1)
  05fec78  fadds 12, 12, 5
  05fec7c  lfs 31, 204(1)
  05fec80  fsubs 27, 30, 31
  05fec84  lfs 5, 132(1)
  05fec88  lfs 30, 184(1)
  05fec8c  stfs 10, 0(9)
  05fec90  fadds 26, 5, 30
  05fec94  stfs 9, 0(11)
  05fec98  mfctr 11
  05fec9c  stfs 0, 0(25)
  05feca0  stfs 13, 0(27)
  05feca4  stfs 4, 0(29)
  05feca8  stfs 3, 0(28)
  05fecac  stfs 11, 0(4)
  05fecb0  lfs 31, 396(1)
  05fecb4  stfs 31, 0(19)
  05fecb8  stfs 8, 0(8)
  05fecbc  stfs 7, 0(10)
  05fecc0  lfs 0, 400(1)
  05fecc4  stfs 0, 0(15)
  05fecc8  lfs 4, 404(1)
  05feccc  stfs 4, 0(18)
  05fecd0  stfs 1, 0(23)
  05fecd4  stfs 2, 0(22)
  05fecd8  lfs 5, 408(1)
  05fecdc  stfs 5, 0(24)
  05fece0  lfs 7, 412(1)
  05fece4  stfs 7, 0(26)
  05fece8  stfs 6, 0(7)
  05fecec  stfs 29, 0(6)
  05fecf0  lfs 8, 424(1)
  05fecf4  stfs 8, 0(14)
  05fecf8  stfs 15, 0(12)
  05fecfc  stfs 28, 0(17)
  05fed00  stfs 14, 0(16)
  05fed04  lfs 9, 428(1)
  05fed08  stfs 9, 0(21)
  05fed0c  lfs 10, 432(1)
  05fed10  stfs 10, 0(20)
  05fed14  stfs 18, 0(3)
  05fed18  stfs 12, 0(5)
  05fed1c  lwz 9, 360(1)
  05fed20  lfs 0, 436(1)
  05fed24  stfs 0, 0(9)
  05fed28  mflr 9
  05fed2c  lfs 0, 440(1)
  05fed30  stfs 0, 0(9)
  05fed34  mr 9, 0
  05fed38  stfs 27, 0(9)
  05fed3c  stfs 26, 0(30)
  05fed40  lfs 0, 444(1)
  05fed44  stfs 0, 0(11)
  05fed48  lfs 2, 448(1)
  05fed4c  stfs 2, 0(31)
  05fed50  ld 0, 768(1)
  05fed54  ld 14, 464(1)
  05fed58  ld 15, 472(1)
  05fed5c  mtlr 0
  05fed60  ld 16, 480(1)
  05fed64  ld 17, 488(1)
  05fed68  ld 18, 496(1)
  05fed6c  ld 19, 504(1)
  05fed70  ld 20, 512(1)
  05fed74  ld 21, 520(1)
  05fed78  ld 22, 528(1)
  05fed7c  ld 23, 536(1)
  05fed80  ld 24, 544(1)
  05fed84  ld 25, 552(1)
  05fed88  ld 26, 560(1)
  05fed8c  ld 27, 568(1)
  05fed90  ld 28, 576(1)
  05fed94  ld 29, 584(1)
  05fed98  ld 30, 592(1)
  05fed9c  ld 31, 600(1)
  05feda0  lfd 14, 608(1)
  05feda4  lfd 15, 616(1)
  05feda8  lfd 16, 624(1)
  05fedac  lfd 17, 632(1)
  05fedb0  lfd 18, 640(1)
  05fedb4  lfd 19, 648(1)
  05fedb8  lfd 20, 656(1)
  05fedbc  lfd 21, 664(1)
  05fedc0  lfd 22, 672(1)
  05fedc4  lfd 23, 680(1)
  05fedc8  lfd 24, 688(1)
  05fedcc  lfd 25, 696(1)
  05fedd0  lfd 26, 704(1)
  05fedd4  lfd 27, 712(1)
  05fedd8  lfd 28, 720(1)
  05feddc  lfd 29, 728(1)
  05fede0  lfd 30, 736(1)
  05fede4  lfd 31, 744(1)
  05fede8  addi 1, 1, 752
  05fedec  blr

FUN_005fedf0:   # 0x5fedf0, 0xb48 bytes
  05fedf0  mr 11, 3
  05fedf4  mflr 0
  05fedf8  stdu 1, -816(1)
  05fedfc  stfd 14, 672(1)
  05fee00  mr 12, 3
  05fee04  stfd 15, 680(1)
  05fee08  mr 7, 3
  05fee0c  stfd 16, 688(1)
  05fee10  mr 8, 3
  05fee14  stfd 17, 696(1)
  05fee18  mr 6, 3
  05fee1c  stfd 18, 704(1)
  05fee20  mr 5, 3
  05fee24  stfd 19, 712(1)
  05fee28  mr 10, 3
  05fee2c  stfd 20, 720(1)
  05fee30  mr 9, 3
  05fee34  stfd 21, 728(1)
  05fee38  stfd 22, 736(1)
  05fee3c  stfd 23, 744(1)
  05fee40  stfd 24, 752(1)
  05fee44  stfd 25, 760(1)
  05fee48  stfd 26, 768(1)
  05fee4c  stfd 27, 776(1)
  05fee50  stfd 28, 784(1)
  05fee54  stfd 29, 792(1)
  05fee58  stfd 30, 800(1)
  05fee5c  stfd 31, 808(1)
  05fee60  std 14, 528(1)
  05fee64  std 15, 536(1)
  05fee68  std 16, 544(1)
  05fee6c  std 17, 552(1)
  05fee70  std 18, 560(1)
  05fee74  std 19, 568(1)
  05fee78  std 20, 576(1)
  05fee7c  std 21, 584(1)
  05fee80  std 22, 592(1)
  05fee84  std 23, 600(1)
  05fee88  std 24, 608(1)
  05fee8c  std 25, 616(1)
  05fee90  std 26, 624(1)
  05fee94  std 27, 632(1)
  05fee98  std 28, 640(1)
  05fee9c  std 29, 648(1)
  05feea0  std 30, 656(1)
  05feea4  std 31, 664(1)
  05feea8  std 0, 832(1)
  05feeac  lfsu 5, 120(11)
  05feeb0  stw 11, 344(1)
  05feeb4  mr 11, 3
  05feeb8  mr 20, 3
  05feebc  mr 21, 3
  05feec0  mr 31, 3
  05feec4  mr 15, 3
  05feec8  lfsu 7, 76(11)
  05feecc  mtlr 11
  05feed0  mr 11, 3
  05feed4  lfsu 0, 12(20)
  05feed8  lfsu 22, 8(21)
  05feedc  stfs 0, 372(1)
  05feee0  mr 14, 3
  05feee4  lfsu 3, 72(31)
  05feee8  fadds 8, 22, 7
  05feeec  stfs 3, 368(1)
  05feef0  mr 18, 3
  05feef4  lfsu 0, 108(11)
  05feef8  fsubs 22, 22, 7
  05feefc  lfsu 4, 40(15)
  05fef00  stfs 0, 360(1)
  05fef04  mr 19, 3
  05fef08  stw 11, 364(1)
  05fef0c  lfs 25, 368(1)
  05fef10  mr 11, 3
  05fef14  lfs 9, 372(1)
  05fef18  mr 16, 3
  05fef1c  lfs 27, 360(1)
  05fef20  fsubs 9, 9, 25
  05fef24  fadds 27, 4, 27
  05fef28  lfsu 3, 44(14)
  05fef2c  stfs 3, 356(1)
  05fef30  mr 17, 3
  05fef34  lfsu 10, 104(11)
  05fef38  mr 0, 11
  05fef3c  mr 30, 3
  05fef40  mr 11, 3
  05fef44  lfsu 0, 28(18)
  05fef48  lfsu 12, 24(19)
  05fef4c  lfsu 11, 92(12)
  05fef50  stfs 0, 352(1)
  05fef54  mr 29, 3
  05fef58  lfsu 3, 60(16)
  05fef5c  lfsu 0, 124(30)
  05fef60  lfsu 13, 88(11)
  05fef64  lfsu 6, 56(17)
  05fef68  mtctr 11
  05fef6c  stfs 3, 348(1)
  05fef70  fadds 25, 6, 0
  05fef74  stfs 8, 132(1)
  05fef78  fadds 8, 12, 11
  05fef7c  stfs 9, 176(1)
  05fef80  fsubs 6, 6, 0
  05fef84  stfs 27, 128(1)
  05fef88  fsubs 12, 12, 11
  05fef8c  lfs 3, 356(1)
  05fef90  mr 22, 3
  05fef94  lfs 9, 352(1)
  05fef98  fsubs 3, 3, 10
  05fef9c  fsubs 9, 9, 13
  05fefa0  lfs 27, 348(1)
  05fefa4  fsubs 27, 27, 5
  05fefa8  lfs 0, 348(1)
  05fefac  fadds 5, 0, 5
  05fefb0  lfs 0, 128(1)
  05fefb4  mr 28, 3
  05fefb8  stfs 25, 108(1)
  05fefbc  mr 24, 3
  05fefc0  stfs 8, 112(1)
  05fefc4  mr 26, 3
  05fefc8  lfs 8, 368(1)
  05fefcc  mr 27, 3
  05fefd0  lfs 25, 356(1)
  05fefd4  mr 23, 3
  05fefd8  fadds 10, 25, 10
  05fefdc  stfs 6, 116(1)
  05fefe0  stfs 3, 172(1)
  05fefe4  mr 25, 3
  05fefe8  stfs 9, 152(1)
  05fefec  mr 11, 3
  05feff0  lfs 9, 360(1)
  05feff4  lfs 3, 372(1)
  05feff8  fsubs 4, 4, 9
  05feffc  stfs 27, 148(1)
  05ff000  fadds 3, 3, 8
  05ff004  lfs 27, 352(1)
  05ff008  fadds 13, 27, 13
  05ff00c  lfs 8, 112(1)
  05ff010  lfs 6, 20(4)
  05ff014  lfs 9, 24(4)
  05ff018  fmuls 11, 6, 22
  05ff01c  lfs 27, 132(1)
  05ff020  fmuls 0, 6, 0
  05ff024  lfs 25, 28(4)
  05ff028  fmuls 25, 25, 27
  05ff02c  stfs 10, 180(1)
  05ff030  lfs 10, 108(1)
  05ff034  stfs 4, 136(1)
  05ff038  fmuls 28, 9, 10
  05ff03c  stfs 3, 184(1)
  05ff040  lfs 3, 16(4)
  05ff044  stfs 13, 160(1)
  05ff048  fmuls 4, 3, 8
  05ff04c  lfs 13, 136(1)
  05ff050  lfs 3, 28(4)
  05ff054  fmuls 13, 9, 13
  05ff058  fmuls 3, 3, 12
  05ff05c  stfs 5, 156(1)
  05ff060  stfs 11, 388(1)
  05ff064  stfs 25, 404(1)
  05ff068  stfs 0, 412(1)
  05ff06c  stfs 13, 396(1)
  05ff070  stfs 3, 432(1)
  05ff074  lfs 9, 116(1)
  05ff078  lfs 13, 180(1)
  05ff07c  lfs 27, 176(1)
  05ff080  lfs 10, 184(1)
  05ff084  lfs 8, 16(4)
  05ff088  fmuls 10, 6, 10
  05ff08c  lfs 11, 24(4)
  05ff090  fmuls 8, 8, 9
  05ff094  lfs 25, 28(4)
  05ff098  fmuls 11, 11, 13
  05ff09c  fmuls 25, 25, 27
  05ff0a0  lfs 0, 172(1)
  05ff0a4  lfs 3, 28(4)
  05ff0a8  fmuls 0, 6, 0
  05ff0ac  lfs 9, 16(4)
  05ff0b0  lfs 13, 24(4)
  05ff0b4  fmuls 9, 9, 5
  05ff0b8  lfs 27, 152(1)
  05ff0bc  fmsubs 4, 6, 27, 4
  05ff0c0  stfs 10, 384(1)
  05ff0c4  stfs 8, 440(1)
  05ff0c8  stfs 11, 392(1)
  05ff0cc  stfs 25, 400(1)
  05ff0d0  lfs 8, 160(1)
  05ff0d4  lfs 25, 148(1)
  05ff0d8  fmuls 3, 3, 8
  05ff0dc  lfs 11, 152(1)
  05ff0e0  fmuls 13, 13, 25
  05ff0e4  lfs 10, 16(4)
  05ff0e8  fmuls 10, 10, 11
  05ff0ec  stfs 9, 436(1)
  05ff0f0  stfs 0, 408(1)
  05ff0f4  stfs 3, 428(1)
  05ff0f8  stfs 13, 448(1)
  05ff0fc  stfs 10, 444(1)
  05ff100  lfsu 29, 100(22)
  05ff104  lfsu 30, 96(24)
  05ff108  lfsu 31, 84(26)
  05ff10c  lfsu 1, 80(27)
  05ff110  lfsu 11, 116(23)
  05ff114  lfsu 13, 112(25)
  05ff118  lfsu 10, 32(29)
  05ff11c  lfsu 0, 36(28)
  05ff120  lfsu 2, 16(7)
  05ff124  lfsu 3, 20(8)
  05ff128  lfsu 5, 48(6)
  05ff12c  lfsu 7, 52(5)
  05ff130  stfs 4, 76(1)
  05ff134  fadds 4, 10, 29
  05ff138  lfs 8, 28(4)
  05ff13c  fsubs 10, 10, 29
  05ff140  fmadds 28, 8, 25, 28
  05ff144  lfs 27, 388(1)
  05ff148  lfs 25, 184(1)
  05ff14c  lfs 9, 16(4)
  05ff150  fmadds 9, 9, 25, 27
  05ff154  lfs 25, 396(1)
  05ff158  lfs 27, 24(4)
  05ff15c  stfs 28, 244(1)
  05ff160  fsubs 28, 0, 30
  05ff164  fadds 0, 0, 30
  05ff168  stfs 9, 92(1)
  05ff16c  lfs 9, 180(1)
  05ff170  fmadds 8, 8, 9, 25
  05ff174  lfs 9, 404(1)
  05ff178  lfs 25, 16(4)
  05ff17c  stfs 8, 260(1)
  05ff180  lfs 8, 176(1)
  05ff184  fmadds 27, 27, 8, 9
  05ff188  lfs 8, 412(1)
  05ff18c  fadds 9, 2, 31
  05ff190  fsubs 2, 2, 31
  05ff194  stfs 27, 88(1)
  05ff198  lfs 27, 172(1)
  05ff19c  fmsubs 25, 25, 27, 8
  05ff1a0  stfs 9, 124(1)
  05ff1a4  fadds 27, 5, 11
  05ff1a8  lfs 9, 24(4)
  05ff1ac  fsubs 8, 7, 13
  05ff1b0  fsubs 5, 5, 11
  05ff1b4  fadds 7, 7, 13
  05ff1b8  stfs 25, 256(1)
  05ff1bc  fsubs 25, 3, 1
  05ff1c0  stfs 27, 120(1)
  05ff1c4  fadds 3, 3, 1
  05ff1c8  lfs 27, 432(1)
  05ff1cc  stfs 8, 164(1)
  05ff1d0  lfs 8, 156(1)
  05ff1d4  stfs 25, 168(1)
  05ff1d8  lfs 25, 160(1)
  05ff1dc  fmadds 9, 9, 25, 27
  05ff1e0  lfs 27, 384(1)
  05ff1e4  lfs 25, 16(4)
  05ff1e8  fmsubs 22, 25, 22, 27
  05ff1ec  lfs 25, 392(1)
  05ff1f0  stfs 9, 80(1)
  05ff1f4  lfs 9, 440(1)
  05ff1f8  fmadds 8, 6, 8, 9
  05ff1fc  lfs 9, 136(1)
  05ff200  stfs 8, 248(1)
  05ff204  lfs 8, 28(4)
  05ff208  fmsubs 8, 8, 9, 25
  05ff20c  stfs 8, 216(1)
  05ff210  lfs 8, 132(1)
  05ff214  lfs 9, 400(1)
  05ff218  lfs 27, 24(4)
  05ff21c  fmsubs 27, 27, 8, 9
  05ff220  lfs 25, 16(4)
  05ff224  lfs 8, 408(1)
  05ff228  lfs 9, 24(4)
  05ff22c  lfs 11, 92(1)
  05ff230  lfs 13, 32(4)
  05ff234  fmuls 23, 13, 7
  05ff238  stfs 27, 64(1)
  05ff23c  lfs 27, 128(1)
  05ff240  fmadds 25, 25, 27, 8
  05ff244  lfs 8, 436(1)
  05ff248  lfs 27, 116(1)
  05ff24c  fmsubs 27, 6, 27, 8
  05ff250  lfs 8, 448(1)
  05ff254  stfs 25, 212(1)
  05ff258  lfs 25, 428(1)
  05ff25c  fmsubs 12, 9, 12, 25
  05ff260  stfs 27, 208(1)
  05ff264  lfs 25, 28(4)
  05ff268  lfs 27, 108(1)
  05ff26c  fmsubs 25, 25, 27, 8
  05ff270  lfs 8, 212(1)
  05ff274  lfs 27, 64(1)
  05ff278  fadds 27, 27, 8
  05ff27c  lfs 9, 112(1)
  05ff280  stfs 12, 60(1)
  05ff284  lfs 12, 444(1)
  05ff288  fmadds 6, 6, 9, 12
  05ff28c  lfs 9, 216(1)
  05ff290  stfs 25, 204(1)
  05ff294  fsubs 1, 22, 9
  05ff298  lfs 25, 260(1)
  05ff29c  fsubs 11, 11, 25
  05ff2a0  stfs 27, 288(1)
  05ff2a4  lfs 9, 88(1)
  05ff2a8  lfs 27, 208(1)
  05ff2ac  lfs 25, 60(1)
  05ff2b0  fsubs 25, 25, 27
  05ff2b4  lfs 12, 36(4)
  05ff2b8  fmuls 21, 12, 3
  05ff2bc  stfs 11, 324(1)
  05ff2c0  lfs 11, 256(1)
  05ff2c4  fadds 9, 9, 11
  05ff2c8  stfs 9, 284(1)
  05ff2cc  stfs 25, 312(1)
  05ff2d0  lfs 9, 248(1)
  05ff2d4  lfs 8, 80(1)
  05ff2d8  fsubs 8, 8, 9
  05ff2dc  lfs 27, 244(1)
  05ff2e0  lfs 25, 76(1)
  05ff2e4  fadds 9, 4, 28
  05ff2e8  fsubs 25, 25, 27
  05ff2ec  lfs 11, 204(1)
  05ff2f0  fmuls 27, 13, 5
  05ff2f4  fsubs 11, 6, 11
  05ff2f8  fsubs 4, 4, 28
  05ff2fc  fmsubs 5, 12, 5, 23
  05ff300  stfs 8, 308(1)
  05ff304  fadds 8, 10, 0
  05ff308  stfs 9, 380(1)
  05ff30c  fsubs 10, 10, 0
  05ff310  stfs 25, 268(1)
  05ff314  fmuls 25, 12, 2
  05ff318  stfs 27, 420(1)
  05ff31c  fmsubs 2, 13, 2, 21
  05ff320  stfs 11, 272(1)
  05ff324  lfs 9, 168(1)
  05ff328  lfs 11, 120(1)
  05ff32c  fmuls 24, 13, 9
  05ff330  fmuls 30, 12, 11
  05ff334  lfs 27, 164(1)
  05ff338  lfs 11, 164(1)
  05ff33c  lfs 0, 4(4)
  05ff340  stfs 8, 376(1)
  05ff344  fmuls 4, 0, 4
  05ff348  lfs 8, 124(1)
  05ff34c  fmuls 10, 0, 10
  05ff350  fmuls 8, 13, 8
  05ff354  stfs 25, 416(1)
  05ff358  lfs 9, 416(1)
  05ff35c  fmuls 25, 12, 11
  05ff360  fmadds 3, 13, 3, 9
  05ff364  fmadds 30, 13, 27, 30
  05ff368  lfs 27, 420(1)
  05ff36c  fmadds 7, 12, 7, 27
  05ff370  lfs 27, 308(1)
  05ff374  fadds 27, 1, 27
  05ff378  stfs 8, 424(1)
  05ff37c  lfsu 28, 68(10)
  05ff380  lfs 8, 0(3)
  05ff384  fadds 31, 8, 28
  05ff388  lfs 9, 424(1)
  05ff38c  lfs 8, 168(1)
  05ff390  fmadds 8, 12, 8, 9
  05ff394  lfsu 29, 64(9)
  05ff398  lfsu 11, 4(11)
  05ff39c  lfs 9, 312(1)
  05ff3a0  stfs 30, 252(1)
  05ff3a4  fsubs 30, 11, 29
  05ff3a8  stfs 27, 104(1)
  05ff3ac  fadds 11, 11, 29
  05ff3b0  stfs 8, 84(1)
  05ff3b4  lfs 8, 324(1)
  05ff3b8  fsubs 8, 8, 9
  05ff3bc  stfs 8, 144(1)
  05ff3c0  lfs 8, 268(1)
  05ff3c4  lfs 27, 288(1)
  05ff3c8  fsubs 27, 27, 8
  05ff3cc  lfs 9, 284(1)
  05ff3d0  lfs 8, 376(1)
  05ff3d4  fmuls 8, 0, 8
  05ff3d8  stfs 27, 96(1)
  05ff3dc  lfs 27, 272(1)
  05ff3e0  fadds 9, 9, 27
  05ff3e4  stfs 8, 340(1)
  05ff3e8  lfs 27, 124(1)
  05ff3ec  lfs 8, 120(1)
  05ff3f0  fmsubs 12, 12, 27, 24
  05ff3f4  fmsubs 13, 13, 8, 25
  05ff3f8  lfs 27, 324(1)
  05ff3fc  lfs 25, 308(1)
  05ff400  lfs 8, 312(1)
  05ff404  fsubs 1, 1, 25
  05ff408  fadds 20, 27, 8
  05ff40c  lfs 25, 268(1)
  05ff410  lfs 27, 284(1)
  05ff414  lfs 8, 272(1)
  05ff418  fsubs 19, 27, 8
  05ff41c  stfs 9, 140(1)
  05ff420  fsubs 27, 2, 5
  05ff424  lfs 9, 380(1)
  05ff428  fsubs 8, 3, 7
  05ff42c  fmuls 9, 0, 9
  05ff430  fadds 3, 3, 7
  05ff434  fadds 2, 2, 5
  05ff438  stfs 27, 320(1)
  05ff43c  stfs 8, 316(1)
  05ff440  stfs 9, 264(1)
  05ff444  lfs 9, 0(3)
  05ff448  fsubs 14, 9, 28
  05ff44c  lfs 9, 288(1)
  05ff450  fadds 9, 9, 25
  05ff454  lfs 8, 252(1)
  05ff458  fsubs 25, 30, 4
  05ff45c  lfs 27, 84(1)
  05ff460  fadds 27, 27, 8
  05ff464  fadds 30, 30, 4
  05ff468  fsubs 29, 14, 10
  05ff46c  stfs 9, 100(1)
  05ff470  fadds 14, 14, 10
  05ff474  lfs 9, 264(1)
  05ff478  fadds 9, 31, 9
  05ff47c  stfs 25, 292(1)
  05ff480  fadds 25, 12, 13
  05ff484  stfs 27, 276(1)
  05ff488  lfs 27, 144(1)
  05ff48c  fsubs 12, 12, 13
  05ff490  fadds 15, 14, 2
  05ff494  stfs 9, 296(1)
  05ff498  stfs 25, 280(1)
  05ff49c  lfs 9, 340(1)
  05ff4a0  lfs 25, 104(1)
  05ff4a4  fsubs 28, 11, 9
  05ff4a8  fadds 25, 25, 27
  05ff4ac  fadds 9, 1, 20
  05ff4b0  fsubs 1, 1, 20
  05ff4b4  stfs 9, 456(1)
  05ff4b8  stfs 25, 468(1)
  05ff4bc  fmuls 1, 0, 1
  05ff4c0  lfs 25, 140(1)
  05ff4c4  lfs 9, 96(1)
  05ff4c8  lfs 8, 100(1)
  05ff4cc  fadds 9, 9, 25
  05ff4d0  fadds 8, 8, 19
  05ff4d4  lfs 10, 92(1)
  05ff4d8  lfs 25, 260(1)
  05ff4dc  lfs 27, 340(1)
  05ff4e0  fadds 11, 11, 27
  05ff4e4  lfs 27, 64(1)
  05ff4e8  lfs 13, 60(1)
  05ff4ec  stfs 14, 336(1)
  05ff4f0  stfs 9, 516(1)
  05ff4f4  lfs 9, 216(1)
  05ff4f8  stfs 8, 504(1)
  05ff4fc  fadds 22, 22, 9
  05ff500  lfs 8, 264(1)
  05ff504  fadds 9, 10, 25
  05ff508  lfs 25, 256(1)
  05ff50c  fsubs 31, 31, 8
  05ff510  lfs 10, 88(1)
  05ff514  lfs 8, 212(1)
  05ff518  fsubs 10, 10, 25
  05ff51c  fsubs 27, 27, 8
  05ff520  lfs 8, 84(1)
  05ff524  lfs 25, 208(1)
  05ff528  fadds 13, 13, 25
  05ff52c  lfs 25, 76(1)
  05ff530  fsubs 5, 31, 12
  05ff534  fadds 31, 31, 12
  05ff538  stfs 10, 300(1)
  05ff53c  lfs 10, 252(1)
  05ff540  stfs 27, 304(1)
  05ff544  fsubs 27, 8, 10
  05ff548  lfs 10, 248(1)
  05ff54c  lfs 8, 80(1)
  05ff550  fadds 8, 8, 10
  05ff554  stfs 13, 332(1)
  05ff558  lfs 13, 204(1)
  05ff55c  fadds 6, 6, 13
  05ff560  lfs 10, 104(1)
  05ff564  lfs 13, 144(1)
  05ff568  fsubs 10, 10, 13
  05ff56c  fsubs 13, 14, 2
  05ff570  fsubs 4, 30, 27
  05ff574  fadds 30, 30, 27
  05ff578  stfs 8, 328(1)
  05ff57c  lfs 8, 244(1)
  05ff580  fadds 26, 25, 8
  05ff584  lfs 25, 100(1)
  05ff588  fsubs 19, 25, 19
  05ff58c  lfs 25, 332(1)
  05ff590  fsubs 25, 22, 25
  05ff594  lfs 8, 96(1)
  05ff598  stfs 10, 464(1)
  05ff59c  lfs 10, 140(1)
  05ff5a0  fsubs 18, 8, 10
  05ff5a4  fsubs 10, 11, 3
  05ff5a8  fadds 11, 11, 3
  05ff5ac  stfs 19, 500(1)
  05ff5b0  stfs 25, 200(1)
  05ff5b4  lfs 8, 328(1)
  05ff5b8  fsubs 8, 9, 8
  05ff5bc  lfs 25, 316(1)
  05ff5c0  fadds 25, 29, 25
  05ff5c4  lfs 3, 332(1)
  05ff5c8  fadds 22, 22, 3
  05ff5cc  lfs 3, 316(1)
  05ff5d0  fsubs 29, 29, 3
  05ff5d4  lfs 27, 296(1)
  05ff5d8  lfs 3, 276(1)
  05ff5dc  fsubs 27, 27, 3
  05ff5e0  lfs 12, 304(1)
  05ff5e4  fsubs 16, 12, 6
  05ff5e8  stfs 8, 236(1)
  05ff5ec  lfs 8, 320(1)
  05ff5f0  fsubs 7, 28, 8
  05ff5f4  stfs 25, 56(1)
  05ff5f8  lfs 8, 300(1)
  05ff5fc  fsubs 2, 29, 1
  05ff600  lfs 25, 304(1)
  05ff604  fadds 8, 8, 26
  05ff608  fadds 25, 25, 6
  05ff60c  fadds 29, 29, 1
  05ff610  stfs 8, 228(1)
  05ff614  stfs 25, 192(1)
  05ff618  lfs 8, 276(1)
  05ff61c  lfs 25, 296(1)
  05ff620  fadds 25, 25, 8
  05ff624  lfs 8, 280(1)
  05ff628  stfs 25, 48(1)
  05ff62c  lfs 25, 292(1)
  05ff630  fsubs 25, 25, 8
  05ff634  lfs 8, 456(1)
  05ff638  fmuls 8, 0, 8
  05ff63c  stfs 25, 68(1)
  05ff640  lfs 25, 516(1)
  05ff644  fmuls 25, 0, 25
  05ff648  stfs 8, 232(1)
  05ff64c  stfs 25, 220(1)
  05ff650  lfs 25, 464(1)
  05ff654  fmuls 25, 0, 25
  05ff658  stfs 25, 196(1)
  05ff65c  lfs 25, 468(1)
  05ff660  fmuls 8, 0, 25
  05ff664  fmuls 25, 0, 19
  05ff668  stfs 25, 188(1)
  05ff66c  lfs 25, 504(1)
  05ff670  fmuls 25, 0, 25
  05ff674  fmuls 0, 0, 18
  05ff678  stfs 25, 224(1)
  05ff67c  lfs 25, 328(1)
  05ff680  fadds 9, 9, 25
  05ff684  lfs 25, 300(1)
  05ff688  fsubs 17, 25, 26
  05ff68c  stfs 9, 240(1)
  05ff690  lfs 9, 320(1)
  05ff694  fadds 28, 28, 9
  05ff698  stfs 27, 52(1)
  05ff69c  lfs 12, 280(1)
  05ff6a0  lfs 9, 292(1)
  05ff6a4  fadds 9, 9, 12
  05ff6a8  lfs 25, 240(1)
  05ff6ac  fsubs 25, 11, 25
  05ff6b0  lfs 27, 236(1)
  05ff6b4  fadds 6, 13, 27
  05ff6b8  lfs 27, 56(1)
  05ff6bc  fadds 27, 27, 8
  05ff6c0  fsubs 12, 15, 22
  05ff6c4  fadds 22, 15, 22
  05ff6c8  stfs 9, 72(1)
  05ff6cc  lfs 9, 200(1)
  05ff6d0  fsubs 3, 10, 9
  05ff6d4  lfs 9, 196(1)
  05ff6d8  stfs 25, 452(1)
  05ff6dc  fsubs 9, 7, 9
  05ff6e0  lfs 25, 232(1)
  05ff6e4  fsubs 25, 28, 25
  05ff6e8  stfs 27, 476(1)
  05ff6ec  fsubs 27, 30, 17
  05ff6f0  fadds 30, 30, 17
  05ff6f4  stfs 9, 480(1)
  05ff6f8  lfs 9, 228(1)
  05ff6fc  stfs 25, 460(1)
  05ff700  fadds 9, 5, 9
  05ff704  fsubs 25, 31, 16
  05ff708  stfs 27, 488(1)
  05ff70c  lfs 27, 52(1)
  05ff710  fadds 31, 31, 16
  05ff714  stfs 9, 492(1)
  05ff718  stfs 25, 484(1)
  05ff71c  lfs 9, 188(1)
  05ff720  lfs 25, 192(1)
  05ff724  fsubs 27, 27, 9
  05ff728  fsubs 25, 4, 25
  05ff72c  lfs 9, 48(1)
  05ff730  stfs 27, 508(1)
  05ff734  stfs 25, 496(1)
  05ff738  lfs 27, 224(1)
  05ff73c  lfs 25, 72(1)
  05ff740  fsubs 25, 25, 27
  05ff744  lfs 27, 68(1)
  05ff748  fsubs 27, 27, 0
  05ff74c  stfs 25, 512(1)
  05ff750  lfs 25, 220(1)
  05ff754  fadds 9, 9, 25
  05ff758  lfs 25, 236(1)
  05ff75c  fsubs 13, 13, 25
  05ff760  lfs 25, 56(1)
  05ff764  fsubs 8, 25, 8
  05ff768  stfs 27, 524(1)
  05ff76c  lfs 27, 200(1)
  05ff770  fadds 10, 10, 27
  05ff774  stfs 9, 520(1)
  05ff778  lfs 9, 240(1)
  05ff77c  fadds 11, 11, 9
  05ff780  lfs 9, 232(1)
  05ff784  fadds 28, 28, 9
  05ff788  stfs 8, 472(1)
  05ff78c  lfs 27, 196(1)
  05ff790  fadds 7, 7, 27
  05ff794  lfs 8, 228(1)
  05ff798  lfs 9, 192(1)
  05ff79c  fsubs 5, 5, 8
  05ff7a0  lfs 25, 52(1)
  05ff7a4  fadds 4, 4, 9
  05ff7a8  lfs 27, 188(1)
  05ff7ac  lfs 8, 72(1)
  05ff7b0  fadds 1, 25, 27
  05ff7b4  lfs 9, 224(1)
  05ff7b8  lfs 25, 48(1)
  05ff7bc  fadds 27, 8, 9
  05ff7c0  stfs 22, 0(3)
  05ff7c4  lfs 8, 220(1)
  05ff7c8  lfs 9, 68(1)
  05ff7cc  fsubs 26, 25, 8
  05ff7d0  stfs 11, 0(11)
  05ff7d4  fadds 0, 9, 0
  05ff7d8  stfs 12, 0(21)
  05ff7dc  lfs 11, 452(1)
  05ff7e0  stfs 11, 0(20)
  05ff7e4  stfs 13, 0(7)
  05ff7e8  stfs 10, 0(8)
  05ff7ec  stfs 6, 0(19)
  05ff7f0  stfs 3, 0(18)
  05ff7f4  stfs 29, 0(29)
  05ff7f8  stfs 28, 0(28)
  05ff7fc  stfs 2, 0(15)
  05ff800  lfs 12, 460(1)
  05ff804  stfs 12, 0(14)
  05ff808  lfs 13, 472(1)
  05ff80c  stfs 13, 0(6)
  05ff810  stfs 7, 0(5)
  05ff814  lfs 25, 476(1)
  05ff818  stfs 25, 0(17)
  05ff81c  lfs 3, 480(1)
  05ff820  stfs 3, 0(16)
  05ff824  stfs 31, 0(9)
  05ff828  mflr 9
  05ff82c  stfs 30, 0(10)
  05ff830  lfs 8, 484(1)
  05ff834  stfs 8, 0(31)
  05ff838  lfs 3, 488(1)
  05ff83c  stfs 3, 0(9)
  05ff840  mfctr 9
  05ff844  stfs 5, 0(27)
  05ff848  stfs 4, 0(26)
  05ff84c  lfs 3, 492(1)
  05ff850  stfs 3, 0(9)
  05ff854  mr 9, 0
  05ff858  lfs 8, 496(1)
  05ff85c  stfs 8, 0(12)
  05ff860  stfs 1, 0(24)
  05ff864  stfs 27, 0(22)
  05ff868  lfs 3, 508(1)
  05ff86c  stfs 3, 0(9)
  05ff870  lwz 9, 364(1)
  05ff874  lfs 3, 512(1)
  05ff878  stfs 3, 0(9)
  05ff87c  stfs 26, 0(25)
  05ff880  stfs 0, 0(23)
  05ff884  lwz 9, 344(1)
  05ff888  lfs 0, 520(1)
  05ff88c  stfs 0, 0(9)
  05ff890  lfs 3, 524(1)
  05ff894  stfs 3, 0(30)
  05ff898  ld 0, 832(1)
  05ff89c  ld 14, 528(1)
  05ff8a0  ld 15, 536(1)
  05ff8a4  mtlr 0
  05ff8a8  ld 16, 544(1)
  05ff8ac  ld 17, 552(1)
  05ff8b0  ld 18, 560(1)
  05ff8b4  ld 19, 568(1)
  05ff8b8  ld 20, 576(1)
  05ff8bc  ld 21, 584(1)
  05ff8c0  ld 22, 592(1)
  05ff8c4  ld 23, 600(1)
  05ff8c8  ld 24, 608(1)
  05ff8cc  ld 25, 616(1)
  05ff8d0  ld 26, 624(1)
  05ff8d4  ld 27, 632(1)
  05ff8d8  ld 28, 640(1)
  05ff8dc  ld 29, 648(1)
  05ff8e0  ld 30, 656(1)
  05ff8e4  ld 31, 664(1)
  05ff8e8  lfd 14, 672(1)
  05ff8ec  lfd 15, 680(1)
  05ff8f0  lfd 16, 688(1)
  05ff8f4  lfd 17, 696(1)
  05ff8f8  lfd 18, 704(1)
  05ff8fc  lfd 19, 712(1)
  05ff900  lfd 20, 720(1)
  05ff904  lfd 21, 728(1)
  05ff908  lfd 22, 736(1)
  05ff90c  lfd 23, 744(1)
  05ff910  lfd 24, 752(1)
  05ff914  lfd 25, 760(1)
  05ff918  lfd 26, 768(1)
  05ff91c  lfd 27, 776(1)
  05ff920  lfd 28, 784(1)
  05ff924  lfd 29, 792(1)
  05ff928  lfd 30, 800(1)
  05ff92c  lfd 31, 808(1)
  05ff930  addi 1, 1, 816
  05ff934  blr

FUN_005ff938:   # 0x5ff938, 0x23c bytes
  05ff938  stfd 23, -72(1)
  05ff93c  mr 9, 3
  05ff940  stfd 25, -56(1)
  05ff944  mr 10, 3
  05ff948  stfd 26, -48(1)
  05ff94c  mr 7, 3
  05ff950  std 23, -168(1)
  05ff954  std 24, -160(1)
  05ff958  std 25, -152(1)
  05ff95c  std 26, -144(1)
  05ff960  std 27, -136(1)
  05ff964  std 28, -128(1)
  05ff968  std 29, -120(1)
  05ff96c  stfd 20, -96(1)
  05ff970  mr 27, 3
  05ff974  stfd 21, -88(1)
  05ff978  mr 24, 3
  05ff97c  stfd 22, -80(1)
  05ff980  mr 29, 3
  05ff984  stfd 24, -64(1)
  05ff988  mr 26, 3
  05ff98c  stfd 27, -40(1)
  05ff990  mr 23, 3
  05ff994  stfd 28, -32(1)
  05ff998  mr 28, 3
  05ff99c  stfd 29, -24(1)
  05ff9a0  mr 25, 3
  05ff9a4  stfd 30, -16(1)
  05ff9a8  mr 11, 3
  05ff9ac  stfd 31, -8(1)
  05ff9b0  mr 5, 3
  05ff9b4  lfs 6, 4(4)
  05ff9b8  mr 4, 3
  05ff9bc  lfsu 20, 60(27)
  05ff9c0  lfsu 22, 40(29)
  05ff9c4  lfsu 24, 56(28)
  05ff9c8  lfsu 7, 8(24)
  05ff9cc  lfsu 9, 12(26)
  05ff9d0  fsubs 0, 7, 22
  05ff9d4  lfsu 21, 44(4)
  05ff9d8  fadds 7, 7, 22
  05ff9dc  lfsu 29, 24(23)
  05ff9e0  fsubs 10, 9, 21
  05ff9e4  lfsu 30, 28(25)
  05ff9e8  fsubs 3, 29, 24
  05ff9ec  fsubs 13, 30, 20
  05ff9f0  mr 8, 3
  05ff9f4  mr 6, 3
  05ff9f8  lfs 8, 0(3)
  05ff9fc  lfsu 28, 36(11)
  05ffa00  fadds 30, 30, 20
  05ffa04  lfsu 1, 52(9)
  05ffa08  fadds 9, 9, 21
  05ffa0c  lfsu 27, 32(10)
  05ffa10  fadds 29, 29, 24
  05ffa14  lfsu 31, 48(8)
  05ffa18  fsubs 11, 8, 27
  05ffa1c  lfsu 12, 4(7)
  05ffa20  fadds 8, 8, 27
  05ffa24  lfsu 2, 16(5)
  05ffa28  lfsu 4, 20(6)
  05ffa2c  fsubs 23, 2, 31
  05ffa30  fsubs 26, 10, 3
  05ffa34  fadds 5, 0, 13
  05ffa38  fadds 10, 10, 3
  05ffa3c  fsubs 0, 0, 13
  05ffa40  fsubs 25, 4, 1
  05ffa44  fsubs 13, 12, 28
  05ffa48  fadds 2, 2, 31
  05ffa4c  fadds 4, 4, 1
  05ffa50  fadds 12, 12, 28
  05ffa54  fsubs 24, 7, 29
  05ffa58  fadds 7, 7, 29
  05ffa5c  fadds 3, 5, 26
  05ffa60  fsubs 5, 5, 26
  05ffa64  fadds 1, 0, 10
  05ffa68  fsubs 0, 0, 10
  05ffa6c  fsubs 31, 13, 23
  05ffa70  fsubs 28, 8, 2
  05ffa74  fadds 10, 11, 25
  05ffa78  fsubs 27, 12, 4
  05ffa7c  fsubs 26, 9, 30
  05ffa80  fadds 8, 8, 2
  05ffa84  fmuls 3, 6, 3
  05ffa88  fadds 12, 12, 4
  05ffa8c  fmuls 1, 6, 1
  05ffa90  fmuls 0, 6, 0
  05ffa94  fsubs 11, 11, 25
  05ffa98  fmuls 6, 6, 5
  05ffa9c  fadds 13, 13, 23
  05ffaa0  fadds 9, 9, 30
  05ffaa4  fsubs 25, 27, 24
  05ffaa8  fadds 30, 28, 26
  05ffaac  fadds 29, 10, 3
  05ffab0  fsubs 28, 28, 26
  05ffab4  fadds 27, 27, 24
  05ffab8  fsubs 10, 10, 3
  05ffabc  fsubs 5, 11, 0
  05ffac0  fsubs 2, 31, 6
  05ffac4  fsubs 4, 8, 7
  05ffac8  fadds 31, 31, 6
  05ffacc  fsubs 3, 12, 9
  05ffad0  fsubs 6, 13, 1
  05ffad4  fadds 11, 11, 0
  05ffad8  fadds 13, 13, 1
  05ffadc  fadds 8, 8, 7
  05ffae0  fadds 12, 12, 9
  05ffae4  stfs 11, 0(10)
  05ffae8  stfs 13, 0(11)
  05ffaec  stfs 5, 0(29)
  05ffaf0  stfs 6, 0(4)
  05ffaf4  stfs 10, 0(8)
  05ffaf8  stfs 31, 0(9)
  05ffafc  stfs 29, 0(28)
  05ffb00  stfs 2, 0(27)
  05ffb04  stfs 8, 0(3)
  05ffb08  stfs 12, 0(7)
  05ffb0c  stfs 4, 0(24)
  05ffb10  stfs 3, 0(26)
  05ffb14  stfs 28, 0(5)
  05ffb18  stfs 27, 0(6)
  05ffb1c  stfs 30, 0(23)
  05ffb20  stfs 25, 0(25)
  05ffb24  ld 23, -168(1)
  05ffb28  ld 24, -160(1)
  05ffb2c  ld 25, -152(1)
  05ffb30  ld 26, -144(1)
  05ffb34  ld 27, -136(1)
  05ffb38  ld 28, -128(1)
  05ffb3c  ld 29, -120(1)
  05ffb40  lfd 20, -96(1)
  05ffb44  lfd 21, -88(1)
  05ffb48  lfd 22, -80(1)
  05ffb4c  lfd 23, -72(1)
  05ffb50  lfd 24, -64(1)
  05ffb54  lfd 25, -56(1)
  05ffb58  lfd 26, -48(1)
  05ffb5c  lfd 27, -40(1)
  05ffb60  lfd 28, -32(1)
  05ffb64  lfd 29, -24(1)
  05ffb68  lfd 30, -16(1)
  05ffb6c  lfd 31, -8(1)
  05ffb70  blr

FUN_005ffb74:   # 0x5ffb74, 0x29c bytes
  05ffb74  std 22, -192(1)
  05ffb78  std 23, -184(1)
  05ffb7c  std 24, -176(1)
  05ffb80  std 25, -168(1)
  05ffb84  std 26, -160(1)
  05ffb88  std 27, -152(1)
  05ffb8c  std 28, -144(1)
  05ffb90  std 29, -136(1)
  05ffb94  mr 23, 3
  05ffb98  stfd 18, -112(1)
  05ffb9c  mr 22, 3
  05ffba0  stfd 19, -104(1)
  05ffba4  mr 27, 3
  05ffba8  stfd 20, -96(1)
  05ffbac  mr 24, 3
  05ffbb0  stfd 21, -88(1)
  05ffbb4  mr 29, 3
  05ffbb8  stfd 22, -80(1)
  05ffbbc  mr 25, 3
  05ffbc0  stfd 23, -72(1)
  05ffbc4  mr 7, 3
  05ffbc8  stfd 24, -64(1)
  05ffbcc  mr 26, 3
  05ffbd0  stfd 25, -56(1)
  05ffbd4  mr 8, 3
  05ffbd8  stfd 27, -40(1)
  05ffbdc  mr 28, 3
  05ffbe0  stfd 28, -32(1)
  05ffbe4  mr 6, 3
  05ffbe8  stfd 30, -16(1)
  05ffbec  mr 5, 3
  05ffbf0  stfd 26, -48(1)
  05ffbf4  stfd 29, -24(1)
  05ffbf8  mr 9, 3
  05ffbfc  stfd 31, -8(1)
  05ffc00  mr 10, 3
  05ffc04  lfsu 29, 56(23)
  05ffc08  lfsu 31, 60(22)
  05ffc0c  lfsu 5, 52(24)
  05ffc10  lfsu 6, 48(25)
  05ffc14  lfsu 12, 44(26)
  05ffc18  lfsu 0, 40(28)
  05ffc1c  lfsu 9, 16(27)
  05ffc20  lfsu 13, 20(29)
  05ffc24  fadds 30, 9, 5
  05ffc28  lfsu 8, 8(7)
  05ffc2c  fsubs 28, 13, 6
  05ffc30  lfsu 7, 12(8)
  05ffc34  fadds 4, 8, 12
  05ffc38  lfsu 1, 24(6)
  05ffc3c  fsubs 3, 7, 0
  05ffc40  lfsu 11, 28(5)
  05ffc44  fadds 18, 1, 31
  05ffc48  fsubs 27, 11, 29
  05ffc4c  lfs 10, 20(4)
  05ffc50  fadds 13, 13, 6
  05ffc54  mr 11, 3
  05ffc58  fsubs 1, 1, 31
  05ffc5c  lfsu 26, 36(10)
  05ffc60  fsubs 9, 9, 5
  05ffc64  lfs 2, 0(3)
  05ffc68  fsubs 8, 8, 12
  05ffc6c  fadds 7, 7, 0
  05ffc70  lfs 0, 16(4)
  05ffc74  fadds 11, 11, 29
  05ffc78  lfsu 12, 4(11)
  05ffc7c  fmuls 19, 0, 4
  05ffc80  fmuls 22, 0, 3
  05ffc84  fmuls 5, 10, 18
  05ffc88  fmuls 20, 10, 27
  05ffc8c  fadds 31, 30, 28
  05ffc90  fmuls 24, 0, 1
  05ffc94  fsubs 30, 30, 28
  05ffc98  lfsu 28, 32(9)
  05ffc9c  fmuls 25, 10, 8
  05ffca0  fmuls 23, 10, 7
  05ffca4  fmuls 21, 0, 11
  05ffca8  fadds 29, 9, 13
  05ffcac  fsubs 9, 9, 13
  05ffcb0  lfs 13, 4(4)
  05ffcb4  fmadds 27, 0, 27, 5
  05ffcb8  fadds 6, 2, 26
  05ffcbc  fsubs 5, 12, 28
  05ffcc0  fmadds 11, 10, 11, 24
  05ffcc4  fmuls 31, 13, 31
  05ffcc8  fmadds 7, 0, 7, 25
  05ffccc  fmadds 3, 10, 3, 19
  05ffcd0  fmsubs 8, 0, 8, 23
  05ffcd4  fmuls 29, 13, 29
  05ffcd8  fmsubs 0, 0, 18, 20
  05ffcdc  fmuls 9, 13, 9
  05ffce0  fmsubs 4, 10, 4, 22
  05ffce4  fmuls 13, 13, 30
  05ffce8  fmsubs 10, 10, 1, 21
  05ffcec  fsubs 2, 2, 26
  05ffcf0  fadds 12, 12, 28
  05ffcf4  fsubs 26, 7, 11
  05ffcf8  fadds 24, 3, 27
  05ffcfc  fadds 28, 6, 31
  05ffd00  fadds 7, 7, 11
  05ffd04  fsubs 6, 6, 31
  05ffd08  fsubs 3, 3, 27
  05ffd0c  fadds 31, 4, 0
  05ffd10  fsubs 25, 8, 10
  05ffd14  fsubs 30, 5, 13
  05ffd18  fsubs 11, 2, 9
  05ffd1c  fsubs 1, 12, 29
  05ffd20  fadds 2, 2, 9
  05ffd24  fadds 12, 12, 29
  05ffd28  fadds 8, 8, 10
  05ffd2c  fadds 5, 5, 13
  05ffd30  fsubs 4, 4, 0
  05ffd34  fadds 23, 28, 24
  05ffd38  fsubs 28, 28, 24
  05ffd3c  fsubs 22, 30, 31
  05ffd40  fadds 29, 11, 26
  05ffd44  fsubs 27, 1, 25
  05ffd48  fadds 30, 30, 31
  05ffd4c  fsubs 11, 11, 26
  05ffd50  fsubs 13, 12, 7
  05ffd54  fsubs 0, 2, 8
  05ffd58  fsubs 10, 6, 4
  05ffd5c  fsubs 9, 5, 3
  05ffd60  fadds 1, 1, 25
  05ffd64  fadds 2, 2, 8
  05ffd68  fadds 12, 12, 7
  05ffd6c  fadds 6, 6, 4
  05ffd70  fadds 5, 5, 3
  05ffd74  stfs 2, 0(3)
  05ffd78  stfs 12, 0(11)
  05ffd7c  stfs 0, 0(7)
  05ffd80  stfs 13, 0(8)
  05ffd84  stfs 11, 0(27)
  05ffd88  stfs 1, 0(29)
  05ffd8c  stfs 29, 0(6)
  05ffd90  stfs 27, 0(5)
  05ffd94  stfs 6, 0(9)
  05ffd98  stfs 5, 0(10)
  05ffd9c  stfs 10, 0(28)
  05ffda0  stfs 9, 0(26)
  05ffda4  stfs 28, 0(25)
  05ffda8  stfs 30, 0(24)
  05ffdac  stfs 23, 0(23)
  05ffdb0  stfs 22, 0(22)
  05ffdb4  ld 22, -192(1)
  05ffdb8  ld 23, -184(1)
  05ffdbc  ld 24, -176(1)
  05ffdc0  ld 25, -168(1)
  05ffdc4  ld 26, -160(1)
  05ffdc8  ld 27, -152(1)
  05ffdcc  ld 28, -144(1)
  05ffdd0  ld 29, -136(1)
  05ffdd4  lfd 18, -112(1)
  05ffdd8  lfd 19, -104(1)
  05ffddc  lfd 20, -96(1)
  05ffde0  lfd 21, -88(1)
  05ffde4  lfd 22, -80(1)
  05ffde8  lfd 23, -72(1)
  05ffdec  lfd 24, -64(1)
  05ffdf0  lfd 25, -56(1)
  05ffdf4  lfd 26, -48(1)
  05ffdf8  lfd 27, -40(1)
  05ffdfc  lfd 28, -32(1)
  05ffe00  lfd 29, -24(1)
  05ffe04  lfd 30, -16(1)
  05ffe08  lfd 31, -8(1)
  05ffe0c  blr

FUN_005ffe10:   # 0x5ffe10, 0xf0 bytes
  05ffe10  cmpwi 7, 3, 128
  05ffe14  mflr 0
  05ffe18  stdu 1, -144(1)
  05ffe1c  std 29, 120(1)
  05ffe20  std 31, 136(1)
  05ffe24  std 28, 112(1)
  05ffe28  std 0, 160(1)
  05ffe2c  mr 31, 4
  05ffe30  clrldi 3, 4, 32
  05ffe34  slwi 29, 5, 2
  05ffe38  bt 30, 0x5ffe9c
  05ffe3c  add 29, 29, 6
  05ffe40  clrldi 3, 4, 32
  05ffe44  addi 29, 29, -64
  05ffe48  clrldi 29, 29, 32
  05ffe4c  mr 4, 29
  05ffe50  bl 0x5ff938
  05ffe54  addi 3, 31, 64
  05ffe58  mr 4, 29
  05ffe5c  clrldi 3, 3, 32
  05ffe60  bl 0x5ffb74
  05ffe64  addi 3, 31, 128
  05ffe68  mr 4, 29
  05ffe6c  clrldi 3, 3, 32
  05ffe70  bl 0x5ff938
  05ffe74  addi 3, 31, 192
  05ffe78  ld 0, 160(1)
  05ffe7c  mr 4, 29
  05ffe80  ld 28, 112(1)
  05ffe84  clrldi 3, 3, 32
  05ffe88  ld 29, 120(1)
  05ffe8c  mtlr 0
  05ffe90  ld 31, 136(1)
  05ffe94  addi 1, 1, 144
  05ffe98  b 0x5ffb74
  05ffe9c  add 29, 6, 29
  05ffea0  addi 28, 29, -32
  05ffea4  addi 29, 29, -128
  05ffea8  clrldi 28, 28, 32
  05ffeac  clrldi 29, 29, 32
  05ffeb0  mr 4, 28
  05ffeb4  bl 0x5fe460
  05ffeb8  addi 3, 31, 128
  05ffebc  mr 4, 29
  05ffec0  clrldi 3, 3, 32
  05ffec4  bl 0x5fedf0
  05ffec8  addi 3, 31, 256
  05ffecc  mr 4, 28
  05ffed0  clrldi 3, 3, 32
  05ffed4  bl 0x5fe460
  05ffed8  addi 3, 31, 384
  05ffedc  ld 0, 160(1)
  05ffee0  mr 4, 29
  05ffee4  ld 28, 112(1)
  05ffee8  clrldi 3, 3, 32
  05ffeec  ld 29, 120(1)
  05ffef0  mtlr 0
  05ffef4  ld 31, 136(1)
  05ffef8  addi 1, 1, 144
  05ffefc  b 0x5fedf0

FUN_005fff00:   # 0x5fff00, 0xec bytes
  05fff00  cmpwi 7, 3, 128
  05fff04  mflr 0
  05fff08  stdu 1, -144(1)
  05fff0c  std 29, 120(1)
  05fff10  std 31, 136(1)
  05fff14  std 28, 112(1)
  05fff18  std 0, 160(1)
  05fff1c  mr 31, 4
  05fff20  clrldi 3, 4, 32
  05fff24  slwi 29, 5, 2
  05fff28  bt 30, 0x5fff8c
  05fff2c  add 29, 29, 6
  05fff30  clrldi 3, 4, 32
  05fff34  addi 29, 29, -64
  05fff38  clrldi 29, 29, 32
  05fff3c  mr 4, 29
  05fff40  bl 0x5ff938
  05fff44  addi 3, 31, 64
  05fff48  mr 4, 29
  05fff4c  clrldi 3, 3, 32
  05fff50  bl 0x5ffb74
  05fff54  addi 3, 31, 128
  05fff58  mr 4, 29
  05fff5c  clrldi 3, 3, 32
  05fff60  bl 0x5ff938
  05fff64  addi 3, 31, 192
  05fff68  ld 0, 160(1)
  05fff6c  mr 4, 29
  05fff70  ld 28, 112(1)
  05fff74  clrldi 3, 3, 32
  05fff78  ld 29, 120(1)
  05fff7c  mtlr 0
  05fff80  ld 31, 136(1)
  05fff84  addi 1, 1, 144
  05fff88  b 0x5ff938
  05fff8c  add 29, 6, 29
  05fff90  addi 28, 29, -32
  05fff94  addi 29, 29, -128
  05fff98  clrldi 28, 28, 32
  05fff9c  mr 4, 28
  05fffa0  bl 0x5fe460
  05fffa4  addi 3, 31, 128
  05fffa8  clrldi 4, 29, 32
  05fffac  clrldi 3, 3, 32
  05fffb0  bl 0x5fedf0
  05fffb4  addi 3, 31, 256
  05fffb8  mr 4, 28
  05fffbc  clrldi 3, 3, 32
  05fffc0  bl 0x5fe460
  05fffc4  addi 3, 31, 384
  05fffc8  ld 0, 160(1)
  05fffcc  mr 4, 28
  05fffd0  ld 29, 120(1)
  05fffd4  clrldi 3, 3, 32
  05fffd8  ld 28, 112(1)
  05fffdc  mtlr 0
  05fffe0  ld 31, 136(1)
  05fffe4  addi 1, 1, 144
  05fffe8  b 0x5fe460

FUN_005ffff0:   # 0x5ffff0, 0x330 bytes
  05ffff0  stdu 1, -272(1)
  05ffff4  mflr 0
  05ffff8  std 19, 168(1)
  05ffffc  srawi 19, 3, 2
  0600000  std 14, 128(1)
  0600004  cmpwi 7, 19, 128
  0600008  std 18, 160(1)
  060000c  std 22, 192(1)
  0600010  std 15, 136(1)
  0600014  std 16, 144(1)
  0600018  std 17, 152(1)
  060001c  std 20, 176(1)
  0600020  std 21, 184(1)
  0600024  std 23, 200(1)
  0600028  std 24, 208(1)
  060002c  std 25, 216(1)
  0600030  std 26, 224(1)
  0600034  std 27, 232(1)
  0600038  std 28, 240(1)
  060003c  std 29, 248(1)
  0600040  std 30, 256(1)
  0600044  std 31, 264(1)
  0600048  std 0, 288(1)
  060004c  mr 22, 3
  0600050  mr 18, 4
  0600054  mr 14, 5
  0600058  stw 6, 112(1)
  060005c  mr 8, 19
  0600060  bf 29, 0x60016c
  0600064  cmpw 7, 22, 19
  0600068  extsw 25, 19
  060006c  srawi 15, 19, 1
  0600070  bf 29, 0x600130
  0600074  sub 0, 14, 19
  0600078  lwz 11, 112(1)
  060007c  sub 9, 14, 15
  0600080  slwi 0, 0, 2
  0600084  slwi 9, 9, 2
  0600088  add 21, 11, 0
  060008c  add 20, 11, 9
  0600090  sub 10, 8, 19
  0600094  slwi 26, 8, 2
  0600098  cmpw 7, 22, 10
  060009c  bf 29, 0x600124
  06000a0  slwi 0, 8, 1
  06000a4  add 9, 8, 10
  06000a8  add 0, 10, 0
  06000ac  slwi 9, 9, 2
  06000b0  slwi 0, 0, 2
  06000b4  slwi 11, 10, 2
  06000b8  add 27, 18, 9
  06000bc  add 30, 18, 11
  06000c0  add 31, 18, 0
  06000c4  add 28, 26, 10
  06000c8  slwi 29, 8, 4
  06000cc  clrldi 24, 20, 32
  06000d0  clrldi 23, 21, 32
  06000d4  nop
  06000d8  clrldi 4, 30, 32
  06000dc  mr 5, 24
  06000e0  mr 3, 25
  06000e4  add 28, 28, 26
  06000e8  bl 0x5fd9f8
  06000ec  clrldi 4, 27, 32
  06000f0  mr 3, 25
  06000f4  mr 5, 23
  06000f8  add 30, 30, 29
  06000fc  bl 0x5fde88
  0600100  clrldi 4, 31, 32
  0600104  mr 3, 25
  0600108  mr 5, 24
  060010c  add 27, 27, 29
  0600110  bl 0x5fd9f8
  0600114  sub 0, 28, 26
  0600118  add 31, 31, 29
  060011c  cmpw 7, 0, 22
  0600120  bt 28, 0x6000d8
  0600124  cmpw 7, 22, 26
  0600128  mr 8, 26
  060012c  bt 29, 0x600090
  0600130  sub 4, 22, 19
  0600134  lwz 0, 112(1)
  0600138  sub 5, 14, 15
  060013c  slwi 4, 4, 2
  0600140  slwi 5, 5, 2
  0600144  add 4, 18, 4
  0600148  add 5, 0, 5
  060014c  srawi 19, 19, 2
  0600150  mr 3, 25
  0600154  clrldi 4, 4, 32
  0600158  clrldi 5, 5, 32
  060015c  bl 0x5fd9f8
  0600160  cmpwi 7, 19, 128
  0600164  mr 8, 19
  0600168  bt 29, 0x600064
  060016c  cmpw 7, 22, 19
  0600170  lwz 21, 112(1)
  0600174  mr 8, 19
  0600178  extsw 25, 19
  060017c  srawi 15, 19, 1
  0600180  extsw 20, 14
  0600184  bf 29, 0x600288
  0600188  sub 0, 14, 19
  060018c  sub 9, 14, 15
  0600190  slwi 0, 0, 2
  0600194  slwi 9, 9, 2
  0600198  add 0, 21, 0
  060019c  add 9, 21, 9
  06001a0  clrldi 16, 0, 32
  06001a4  clrldi 17, 9, 32
  06001a8  sub 10, 8, 19
  06001ac  slwi 23, 8, 2
  06001b0  cmpw 7, 22, 10
  06001b4  bf 29, 0x60027c
  06001b8  slwi 0, 8, 1
  06001bc  add 9, 10, 8
  06001c0  add 0, 10, 0
  06001c4  slwi 9, 9, 2
  06001c8  slwi 0, 0, 2
  06001cc  slwi 11, 10, 2
  06001d0  add 24, 18, 9
  06001d4  add 26, 18, 11
  06001d8  add 27, 18, 0
  06001dc  add 30, 10, 23
  06001e0  slwi 31, 8, 4
  06001e4  nop
  06001e8  clrldi 29, 26, 32
  06001ec  mr 3, 25
  06001f0  mr 4, 29
  06001f4  mr 5, 17
  06001f8  clrldi 28, 24, 32
  06001fc  bl 0x5fd9f8
  0600200  mr 4, 29
  0600204  mr 6, 21
  0600208  mr 3, 25
  060020c  mr 5, 20
  0600210  clrldi 29, 27, 32
  0600214  bl 0x5fff00
  0600218  mr 3, 25
  060021c  mr 4, 28
  0600220  mr 5, 16
  0600224  add 30, 30, 23
  0600228  bl 0x5fde88
  060022c  mr 6, 21
  0600230  mr 3, 25
  0600234  mr 4, 28
  0600238  mr 5, 20
  060023c  add 26, 26, 31
  0600240  bl 0x5ffe10
  0600244  mr 3, 25
  0600248  mr 4, 29
  060024c  mr 5, 17
  0600250  add 24, 24, 31
  0600254  bl 0x5fd9f8
  0600258  mr 3, 25
  060025c  mr 4, 29
  0600260  mr 5, 20
  0600264  mr 6, 21
  0600268  add 27, 27, 31
  060026c  bl 0x5fff00
  0600270  sub 0, 30, 23
  0600274  cmpw 7, 0, 22
  0600278  bt 28, 0x6001e8
  060027c  cmpw 7, 22, 23
  0600280  mr 8, 23
  0600284  bt 29, 0x6001a8
  0600288  sub 29, 22, 19
  060028c  lwz 0, 112(1)
  0600290  sub 5, 14, 15
  0600294  slwi 29, 29, 2
  0600298  slwi 5, 5, 2
  060029c  add 29, 29, 18
  06002a0  add 5, 5, 0
  06002a4  clrldi 29, 29, 32
  06002a8  mr 3, 25
  06002ac  mr 4, 29
  06002b0  clrldi 5, 5, 32
  06002b4  bl 0x5fd9f8
  06002b8  ld 0, 288(1)
  06002bc  mr 3, 25
  06002c0  ld 14, 128(1)
  06002c4  mr 4, 29
  06002c8  ld 15, 136(1)
  06002cc  mr 5, 20
  06002d0  ld 16, 144(1)
  06002d4  mr 6, 21
  06002d8  ld 17, 152(1)
  06002dc  ld 18, 160(1)
  06002e0  mtlr 0
  06002e4  ld 19, 168(1)
  06002e8  ld 20, 176(1)
  06002ec  ld 21, 184(1)
  06002f0  ld 22, 192(1)
  06002f4  ld 23, 200(1)
  06002f8  ld 24, 208(1)
  06002fc  ld 25, 216(1)
  0600300  ld 26, 224(1)
  0600304  ld 27, 232(1)
  0600308  ld 28, 240(1)
  060030c  ld 29, 248(1)
  0600310  ld 30, 256(1)
  0600314  ld 31, 264(1)
  0600318  addi 1, 1, 272
  060031c  b 0x5fff00

FUN_00600320:   # 0x600320, 0x134 bytes
  0600320  stdu 1, -208(1)
  0600324  mflr 0
  0600328  std 21, 120(1)
  060032c  std 22, 128(1)
  0600330  std 25, 152(1)
  0600334  std 26, 160(1)
  0600338  std 27, 168(1)
  060033c  std 28, 176(1)
  0600340  mr 21, 5
  0600344  mr 22, 6
  0600348  mr 27, 3
  060034c  mr 28, 4
  0600350  extsw 26, 5
  0600354  clrldi 25, 6, 32
  0600358  std 23, 136(1)
  060035c  std 24, 144(1)
  0600360  std 29, 184(1)
  0600364  std 30, 192(1)
  0600368  std 31, 200(1)
  060036c  std 0, 224(1)
  0600370  b 0x6003b8
  0600374  bl 0x600320
  0600378  add 4, 28, 23
  060037c  mr 3, 29
  0600380  clrldi 4, 4, 32
  0600384  mr 5, 26
  0600388  mr 6, 25
  060038c  bl 0x600458
  0600390  slwi 4, 31, 3
  0600394  mr 3, 29
  0600398  add 4, 28, 4
  060039c  mr 5, 26
  06003a0  clrldi 4, 4, 32
  06003a4  mr 6, 25
  06003a8  bl 0x600320
  06003ac  slwi 0, 31, 4
  06003b0  sub 0, 0, 23
  06003b4  add 28, 28, 0
  06003b8  srawi 31, 27, 2
  06003bc  clrldi 30, 28, 32
  06003c0  slwi 5, 31, 1
  06003c4  extsw 24, 27
  06003c8  sub 5, 21, 5
  06003cc  mr 3, 24
  06003d0  slwi 5, 5, 2
  06003d4  mr 4, 30
  06003d8  add 5, 5, 22
  06003dc  extsw 29, 31
  06003e0  clrldi 5, 5, 32
  06003e4  slwi 23, 31, 2
  06003e8  bl 0x5fd9f8
  06003ec  cmpwi 7, 27, 512
  06003f0  mr 4, 30
  06003f4  mr 3, 29
  06003f8  mr 5, 26
  06003fc  mr 6, 25
  0600400  mr 27, 31
  0600404  bt 29, 0x600374
  0600408  ld 0, 224(1)
  060040c  mr 3, 24
  0600410  mr 4, 30
  0600414  ld 21, 120(1)
  0600418  mr 5, 26
  060041c  ld 22, 128(1)
  0600420  mr 6, 25
  0600424  ld 23, 136(1)
  0600428  ld 24, 144(1)
  060042c  mtlr 0
  0600430  ld 25, 152(1)
  0600434  ld 26, 160(1)
  0600438  ld 27, 168(1)
  060043c  ld 28, 176(1)
  0600440  ld 29, 184(1)
  0600444  ld 30, 192(1)
  0600448  ld 31, 200(1)
  060044c  addi 1, 1, 208
  0600450  b 0x5ffff0

FUN_00600458:   # 0x600458, 0x404 bytes
  0600458  stdu 1, -256(1)
  060045c  mflr 0
  0600460  std 14, 112(1)
  0600464  std 15, 120(1)
  0600468  std 18, 144(1)
  060046c  std 27, 216(1)
  0600470  std 28, 224(1)
  0600474  std 30, 240(1)
  0600478  mr 15, 5
  060047c  mr 14, 6
  0600480  mr 30, 3
  0600484  mr 18, 4
  0600488  extsw 28, 5
  060048c  clrldi 27, 6, 32
  0600490  std 16, 128(1)
  0600494  std 17, 136(1)
  0600498  std 19, 152(1)
  060049c  std 20, 160(1)
  06004a0  std 21, 168(1)
  06004a4  std 22, 176(1)
  06004a8  std 23, 184(1)
  06004ac  std 24, 192(1)
  06004b0  std 25, 200(1)
  06004b4  std 26, 208(1)
  06004b8  std 29, 232(1)
  06004bc  std 31, 248(1)
  06004c0  std 0, 272(1)
  06004c4  b 0x600510
  06004c8  bl 0x600320
  06004cc  add 4, 18, 29
  06004d0  mr 3, 31
  06004d4  clrldi 4, 4, 32
  06004d8  mr 5, 28
  06004dc  mr 6, 27
  06004e0  mr 30, 21
  06004e4  bl 0x600458
  06004e8  slwi 4, 21, 3
  06004ec  mr 3, 31
  06004f0  add 4, 18, 4
  06004f4  mr 5, 28
  06004f8  clrldi 4, 4, 32
  06004fc  mr 6, 27
  0600500  bl 0x600320
  0600504  slwi 0, 21, 4
  0600508  sub 0, 0, 29
  060050c  add 18, 18, 0
  0600510  sub 5, 15, 30
  0600514  clrldi 29, 18, 32
  0600518  slwi 5, 5, 2
  060051c  mr 4, 29
  0600520  add 5, 5, 14
  0600524  extsw 3, 30
  0600528  clrldi 5, 5, 32
  060052c  srawi 21, 30, 2
  0600530  bl 0x5fde88
  0600534  cmpwi 7, 30, 512
  0600538  extsw 31, 21
  060053c  mr 4, 29
  0600540  mr 3, 31
  0600544  mr 5, 28
  0600548  mr 6, 27
  060054c  slwi 29, 21, 2
  0600550  bt 29, 0x6004c8
  0600554  cmpwi 7, 21, 128
  0600558  srawi 24, 30, 1
  060055c  mr 23, 21
  0600560  bf 29, 0x60068c
  0600564  srawi 0, 21, 1
  0600568  sub 9, 15, 21
  060056c  sub 0, 15, 0
  0600570  cmpw 7, 24, 23
  0600574  slwi 0, 0, 2
  0600578  slwi 9, 9, 2
  060057c  add 20, 0, 14
  0600580  add 22, 9, 14
  0600584  bf 29, 0x600674
  0600588  sub 11, 23, 21
  060058c  slwi 27, 23, 1
  0600590  cmpw 7, 24, 11
  0600594  bf 29, 0x6005f8
  0600598  add 0, 24, 11
  060059c  slwi 9, 11, 2
  06005a0  slwi 0, 0, 2
  06005a4  add 28, 18, 9
  06005a8  add 31, 18, 0
  06005ac  add 29, 27, 11
  06005b0  slwi 25, 23, 3
  06005b4  extsw 30, 21
  06005b8  clrldi 26, 20, 32
  06005bc  nop
  06005c0  clrldi 4, 28, 32
  06005c4  mr 5, 26
  06005c8  mr 3, 30
  06005cc  add 29, 29, 27
  06005d0  bl 0x5fd9f8
  06005d4  clrldi 4, 31, 32
  06005d8  mr 3, 30
  06005dc  mr 5, 26
  06005e0  add 28, 28, 25
  06005e4  bl 0x5fd9f8
  06005e8  sub 0, 29, 27
  06005ec  add 31, 31, 25
  06005f0  cmpw 7, 0, 24
  06005f4  bt 28, 0x6005c0
  06005f8  sub 11, 27, 21
  06005fc  slwi 27, 23, 2
  0600600  cmpw 7, 24, 11
  0600604  bf 29, 0x600668
  0600608  add 0, 24, 11
  060060c  slwi 9, 11, 2
  0600610  slwi 0, 0, 2
  0600614  slwi 25, 23, 4
  0600618  add 31, 18, 9
  060061c  add 28, 18, 0
  0600620  add 29, 27, 11
  0600624  extsw 30, 21
  0600628  clrldi 26, 22, 32
  060062c  nop
  0600630  clrldi 4, 31, 32
  0600634  mr 5, 26
  0600638  mr 3, 30
  060063c  add 29, 29, 27
  0600640  bl 0x5fde88
  0600644  clrldi 4, 28, 32
  0600648  mr 3, 30
  060064c  mr 5, 26
  0600650  add 31, 31, 25
  0600654  bl 0x5fde88
  0600658  sub 0, 29, 27
  060065c  add 28, 28, 25
  0600660  cmpw 7, 0, 24
  0600664  bt 28, 0x600630
  0600668  cmpw 7, 24, 27
  060066c  mr 23, 27
  0600670  bt 29, 0x600588
  0600674  srawi 23, 21, 2
  0600678  cmpwi 7, 23, 128
  060067c  bf 29, 0x600688
  0600680  mr 21, 23
  0600684  b 0x600564
  0600688  mr 21, 23
  060068c  cmpw 7, 24, 21
  0600690  bf 29, 0x600804
  0600694  srawi 0, 23, 1
  0600698  sub 9, 15, 23
  060069c  sub 0, 15, 0
  06006a0  slwi 9, 9, 2
  06006a4  slwi 0, 0, 2
  06006a8  add 9, 9, 14
  06006ac  add 0, 14, 0
  06006b0  clrldi 16, 9, 32
  06006b4  clrldi 17, 0, 32
  06006b8  sub 11, 21, 23
  06006bc  slwi 20, 21, 1
  06006c0  cmpw 7, 24, 11
  06006c4  bf 29, 0x600758
  06006c8  add 0, 24, 11
  06006cc  slwi 9, 11, 2
  06006d0  slwi 0, 0, 2
  06006d4  add 27, 18, 9
  06006d8  add 26, 18, 0
  06006dc  add 30, 11, 20
  06006e0  slwi 19, 21, 3
  06006e4  extsw 22, 15
  06006e8  clrldi 25, 14, 32
  06006ec  extsw 31, 23
  06006f0  clrldi 29, 27, 32
  06006f4  mr 3, 31
  06006f8  mr 4, 29
  06006fc  mr 5, 17
  0600700  clrldi 28, 26, 32
  0600704  bl 0x5fd9f8
  0600708  mr 6, 25
  060070c  mr 3, 31
  0600710  mr 4, 29
  0600714  mr 5, 22
  0600718  add 30, 30, 20
  060071c  bl 0x5fff00
  0600720  mr 3, 31
  0600724  mr 4, 28
  0600728  mr 5, 17
  060072c  add 27, 27, 19
  0600730  bl 0x5fd9f8
  0600734  mr 3, 31
  0600738  mr 4, 28
  060073c  mr 5, 22
  0600740  mr 6, 25
  0600744  add 26, 26, 19
  0600748  bl 0x5fff00
  060074c  sub 0, 30, 20
  0600750  cmpw 7, 0, 24
  0600754  bt 28, 0x6006f0
  0600758  sub 11, 20, 23
  060075c  slwi 20, 21, 2
  0600760  cmpw 7, 24, 11
  0600764  bf 29, 0x6007f8
  0600768  add 0, 24, 11
  060076c  slwi 9, 11, 2
  0600770  slwi 0, 0, 2
  0600774  slwi 21, 21, 4
  0600778  add 26, 18, 9
  060077c  add 27, 18, 0
  0600780  add 30, 11, 20
  0600784  extsw 22, 15
  0600788  clrldi 25, 14, 32
  060078c  extsw 31, 23
  0600790  clrldi 29, 26, 32
  0600794  mr 3, 31
  0600798  mr 4, 29
  060079c  mr 5, 16
  06007a0  clrldi 28, 27, 32
  06007a4  bl 0x5fde88
  06007a8  mr 6, 25
  06007ac  mr 3, 31
  06007b0  mr 4, 29
  06007b4  mr 5, 22
  06007b8  add 30, 30, 20
  06007bc  bl 0x5ffe10
  06007c0  mr 3, 31
  06007c4  mr 4, 28
  06007c8  mr 5, 16
  06007cc  add 26, 26, 21
  06007d0  bl 0x5fde88
  06007d4  mr 3, 31
  06007d8  mr 4, 28
  06007dc  mr 5, 22
  06007e0  mr 6, 25
  06007e4  add 27, 27, 21
  06007e8  bl 0x5ffe10
  06007ec  sub 0, 30, 20
  06007f0  cmpw 7, 0, 24
  06007f4  bt 28, 0x600790
  06007f8  cmpw 7, 24, 20
  06007fc  mr 21, 20
  0600800  bt 29, 0x6006b8
  0600804  ld 0, 272(1)
  0600808  ld 14, 112(1)
  060080c  ld 15, 120(1)
  0600810  mtlr 0
  0600814  ld 16, 128(1)
  0600818  ld 17, 136(1)
  060081c  ld 18, 144(1)
  0600820  ld 19, 152(1)
  0600824  ld 20, 160(1)
  0600828  ld 21, 168(1)
  060082c  ld 22, 176(1)
  0600830  ld 23, 184(1)
  0600834  ld 24, 192(1)
  0600838  ld 25, 200(1)
  060083c  ld 26, 208(1)
  0600840  ld 27, 216(1)
  0600844  ld 28, 224(1)
  0600848  ld 29, 232(1)
  060084c  ld 30, 240(1)
  0600850  ld 31, 248(1)
  0600854  addi 1, 1, 256
  0600858  blr

FUN_00600860:   # 0x600860, 0x1174 bytes
  0600860  stdu 1, -736(1)
  0600864  mflr 0
  0600868  stfd 14, 592(1)
  060086c  stfd 15, 600(1)
  0600870  stfd 16, 608(1)
  0600874  stfd 17, 616(1)
  0600878  stfd 18, 624(1)
  060087c  stfd 19, 632(1)
  0600880  stfd 20, 640(1)
  0600884  stfd 21, 648(1)
  0600888  stfd 22, 656(1)
  060088c  stfd 23, 664(1)
  0600890  stfd 24, 672(1)
  0600894  stfd 25, 680(1)
  0600898  stfd 26, 688(1)
  060089c  stfd 27, 696(1)
  06008a0  stfd 28, 704(1)
  06008a4  stfd 29, 712(1)
  06008a8  stfd 30, 720(1)
  06008ac  stfd 31, 728(1)
  06008b0  std 14, 448(1)
  06008b4  std 15, 456(1)
  06008b8  std 16, 464(1)
  06008bc  std 17, 472(1)
  06008c0  std 18, 480(1)
  06008c4  std 19, 488(1)
  06008c8  std 20, 496(1)
  06008cc  std 21, 504(1)
  06008d0  std 22, 512(1)
  06008d4  std 23, 520(1)
  06008d8  std 24, 528(1)
  06008dc  std 25, 536(1)
  06008e0  std 26, 544(1)
  06008e4  std 27, 552(1)
  06008e8  std 28, 560(1)
  06008ec  stw 3, 424(1)
  06008f0  std 0, 752(1)
  06008f4  lwz 0, 424(1)
  06008f8  mr 3, 4
  06008fc  std 31, 584(1)
  0600900  cmpwi 6, 0, 32
  0600904  std 29, 568(1)
  0600908  std 30, 576(1)
  060090c  stw 5, 428(1)
  0600910  stw 6, 432(1)
  0600914  mr 31, 4
  0600918  bf 25, 0x6013c0
  060091c  srawi 9, 0, 3
  0600920  lwz 26, 424(1)
  0600924  slwi 10, 9, 1
  0600928  slwi 0, 9, 2
  060092c  stw 9, 384(1)
  0600930  add 27, 10, 0
  0600934  lfs 11, 0(4)
  0600938  slwi 11, 9, 4
  060093c  slwi 0, 27, 2
  0600940  slwi 9, 9, 3
  0600944  add 30, 4, 11
  0600948  add 29, 4, 9
  060094c  lwz 9, 384(1)
  0600950  add 28, 4, 0
  0600954  stw 10, 388(1)
  0600958  addi 11, 29, 4
  060095c  addi 10, 30, 4
  0600960  addi 8, 28, 4
  0600964  clrldi 10, 10, 32
  0600968  clrldi 11, 11, 32
  060096c  clrldi 8, 8, 32
  0600970  clrldi 7, 30, 32
  0600974  clrldi 6, 29, 32
  0600978  clrldi 5, 28, 32
  060097c  lfs 4, 0(10)
  0600980  lfs 12, 0(11)
  0600984  addi 9, 9, -2
  0600988  lfs 8, 0(8)
  060098c  srawi 26, 26, 2
  0600990  lfs 10, 0(7)
  0600994  fsubs 5, 12, 8
  0600998  lfs 13, 0(6)
  060099c  fsubs 7, 11, 10
  06009a0  lfs 9, 0(5)
  06009a4  fadds 12, 12, 8
  06009a8  lfsu 0, 4(4)
  06009ac  fsubs 3, 13, 9
  06009b0  fsubs 6, 0, 4
  06009b4  stw 9, 376(1)
  06009b8  fadds 0, 0, 4
  06009bc  lwz 9, 428(1)
  06009c0  fadds 13, 13, 9
  06009c4  stw 26, 420(1)
  06009c8  fadds 11, 11, 10
  06009cc  sub 0, 9, 26
  06009d0  lwz 26, 376(1)
  06009d4  lis 9, 16256
  06009d8  slwi 0, 0, 2
  06009dc  cmpwi 7, 26, 2
  06009e0  lwz 26, 432(1)
  06009e4  fadds 8, 7, 5
  06009e8  stw 9, 404(1)
  06009ec  fsubs 7, 7, 5
  06009f0  add 0, 26, 0
  06009f4  lfs 1, 404(1)
  06009f8  fsubs 4, 6, 3
  06009fc  stw 0, 372(1)
  0600a00  fadds 6, 6, 3
  0600a04  lwz 9, 372(1)
  0600a08  fsubs 9, 0, 12
  0600a0c  li 0, 0
  0600a10  fsubs 10, 11, 13
  0600a14  stfs 1, 412(1)
  0600a18  fadds 11, 11, 13
  0600a1c  stw 0, 408(1)
  0600a20  fadds 0, 0, 12
  0600a24  lfs 2, 408(1)
  0600a28  stfs 2, 416(1)
  0600a2c  stfs 11, 0(3)
  0600a30  stfs 0, 0(4)
  0600a34  stfs 10, 0(6)
  0600a38  stfs 9, 0(11)
  0600a3c  stfs 7, 0(7)
  0600a40  stfs 6, 0(10)
  0600a44  stfs 8, 0(5)
  0600a48  stfs 4, 0(8)
  0600a4c  lfs 5, 12(9)
  0600a50  stfs 5, 400(1)
  0600a54  lfs 6, 4(9)
  0600a58  stfs 6, 392(1)
  0600a5c  lfs 7, 8(9)
  0600a60  stfs 7, 396(1)
  0600a64  bf 29, 0x600ee0
  0600a68  mtlr 30
  0600a6c  lfs 24, -32084(2)
  0600a70  lfs 25, -32088(2)
  0600a74  fmr 26, 24
  0600a78  fmr 19, 25
  0600a7c  lwz 9, 388(1)
  0600a80  li 10, 2
  0600a84  mtctr 29
  0600a88  add 0, 9, 27
  0600a8c  stfs 24, 416(1)
  0600a90  li 11, 0
  0600a94  slwi 0, 0, 2
  0600a98  mr 14, 28
  0600a9c  add 19, 3, 0
  0600aa0  addi 30, 3, 8
  0600aa4  addi 12, 3, 12
  0600aa8  addi 15, 3, 16
  0600aac  addi 16, 3, 20
  0600ab0  mr 18, 29
  0600ab4  mr 17, 28
  0600ab8  stw 10, 380(1)
  0600abc  stw 11, 368(1)
  0600ac0  mflr 23
  0600ac4  b 0x600ad8
  0600ac8  lfs 25, 404(1)
  0600acc  lfs 24, 408(1)
  0600ad0  lfs 19, 412(1)
  0600ad4  lfs 26, 416(1)
  0600ad8  lwz 0, 372(1)
  0600adc  mflr 11
  0600ae0  lwz 26, 368(1)
  0600ae4  clrldi 8, 14, 32
  0600ae8  clrldi 10, 11, 32
  0600aec  lfs 8, 0(30)
  0600af0  add 9, 0, 26
  0600af4  mfctr 26
  0600af8  lfs 7, 0(12)
  0600afc  addi 0, 23, -16
  0600b00  clrldi 9, 9, 32
  0600b04  clrldi 11, 26, 32
  0600b08  addi 29, 18, -12
  0600b0c  addi 25, 17, -12
  0600b10  addi 26, 23, -12
  0600b14  lfs 0, 20(9)
  0600b18  addi 24, 19, -12
  0600b1c  lfs 29, 28(9)
  0600b20  addi 6, 18, -8
  0600b24  stfs 0, 408(1)
  0600b28  fsubs 23, 26, 29
  0600b2c  lfs 4, 16(11)
  0600b30  fneg 29, 29
  0600b34  lfs 3, 20(11)
  0600b38  addi 28, 17, -8
  0600b3c  lfs 1, 16(8)
  0600b40  addi 5, 18, -4
  0600b44  lfs 18, 20(8)
  0600b48  fsubs 30, 4, 1
  0600b4c  fsubs 1, 3, 18
  0600b50  lfs 18, 408(1)
  0600b54  lfs 28, 8(10)
  0600b58  fadds 24, 24, 18
  0600b5c  lfs 27, 12(10)
  0600b60  fsubs 13, 8, 28
  0600b64  lfs 17, 16(10)
  0600b68  fsubs 12, 7, 27
  0600b6c  lfs 16, 20(10)
  0600b70  fadds 8, 8, 28
  0600b74  lfs 10, 0(15)
  0600b78  fadds 7, 7, 27
  0600b7c  lfs 9, 0(16)
  0600b80  fsubs 11, 10, 17
  0600b84  lfs 6, 8(11)
  0600b88  fsubs 0, 9, 16
  0600b8c  lfs 5, 12(11)
  0600b90  fadds 10, 10, 17
  0600b94  lfs 15, 8(8)
  0600b98  fadds 9, 9, 16
  0600b9c  lfs 14, 12(8)
  0600ba0  fsubs 31, 6, 15
  0600ba4  fsubs 2, 5, 14
  0600ba8  lfs 26, 16(9)
  0600bac  stfs 26, 404(1)
  0600bb0  fadds 25, 25, 26
  0600bb4  lfs 18, 24(9)
  0600bb8  fadds 6, 6, 15
  0600bbc  stfs 18, 412(1)
  0600bc0  fadds 5, 5, 14
  0600bc4  lfs 18, 396(1)
  0600bc8  addi 27, 17, -4
  0600bcc  stfs 29, 416(1)
  0600bd0  fmuls 24, 18, 24
  0600bd4  lfs 29, 400(1)
  0600bd8  fsubs 21, 0, 30
  0600bdc  lfs 18, 412(1)
  0600be0  fmuls 23, 29, 23
  0600be4  fadds 20, 11, 1
  0600be8  lfs 17, 16(8)
  0600bec  fsubs 22, 12, 31
  0600bf0  lfs 28, 416(1)
  0600bf4  fadds 26, 13, 2
  0600bf8  addi 9, 23, -8
  0600bfc  fadds 29, 19, 18
  0600c00  lfs 19, 396(1)
  0600c04  fsubs 13, 13, 2
  0600c08  addi 4, 19, -8
  0600c0c  fadds 12, 12, 31
  0600c10  lfs 31, 408(1)
  0600c14  fsubs 11, 11, 1
  0600c18  addi 7, 23, -4
  0600c1c  fadds 0, 0, 30
  0600c20  lfs 30, 400(1)
  0600c24  fadds 4, 4, 17
  0600c28  lfs 17, 408(1)
  0600c2c  fmuls 25, 19, 25
  0600c30  addi 3, 19, -4
  0600c34  fmuls 18, 28, 20
  0600c38  lfs 28, 20(8)
  0600c3c  fadds 3, 3, 28
  0600c40  addi 18, 18, -16
  0600c44  fmuls 19, 23, 26
  0600c48  addi 17, 17, -16
  0600c4c  fmuls 29, 30, 29
  0600c50  addi 19, 19, -16
  0600c54  fmuls 1, 24, 13
  0600c58  clrldi 23, 18, 32
  0600c5c  fmuls 28, 23, 22
  0600c60  clrldi 6, 6, 32
  0600c64  fmuls 2, 31, 11
  0600c68  clrldi 28, 28, 32
  0600c6c  fmuls 31, 24, 12
  0600c70  clrldi 5, 5, 32
  0600c74  fmuls 30, 17, 0
  0600c78  lfs 17, 416(1)
  0600c7c  fmuls 27, 17, 21
  0600c80  clrldi 27, 27, 32
  0600c84  fsubs 17, 7, 5
  0600c88  clrldi 29, 29, 32
  0600c8c  fsubs 16, 10, 4
  0600c90  clrldi 25, 25, 32
  0600c94  fadds 7, 7, 5
  0600c98  clrldi 9, 9, 32
  0600c9c  fmsubs 22, 29, 22, 19
  0600ca0  lfs 19, 412(1)
  0600ca4  fmadds 12, 25, 12, 1
  0600ca8  lfs 1, 404(1)
  0600cac  fmsubs 21, 19, 21, 18
  0600cb0  clrldi 4, 4, 32
  0600cb4  fmadds 0, 1, 0, 2
  0600cb8  clrldi 7, 7, 32
  0600cbc  fmsubs 13, 25, 13, 31
  0600cc0  lfs 31, 404(1)
  0600cc4  fsubs 1, 8, 6
  0600cc8  clrldi 3, 3, 32
  0600ccc  fsubs 2, 9, 3
  0600cd0  clrldi 26, 26, 32
  0600cd4  fmsubs 11, 31, 11, 30
  0600cd8  clrldi 24, 24, 32
  0600cdc  fmadds 26, 29, 26, 28
  0600ce0  clrldi 21, 17, 32
  0600ce4  fmadds 20, 19, 20, 27
  0600ce8  clrldi 22, 0, 32
  0600cec  fadds 8, 8, 6
  0600cf0  clrldi 20, 19, 32
  0600cf4  fadds 10, 10, 4
  0600cf8  addi 14, 14, 16
  0600cfc  fadds 9, 9, 3
  0600d00  stfs 8, 0(30)
  0600d04  addi 30, 30, 16
  0600d08  stfs 7, 0(12)
  0600d0c  addi 12, 12, 16
  0600d10  stfs 10, 0(15)
  0600d14  addi 15, 15, 16
  0600d18  stfs 9, 0(16)
  0600d1c  addi 16, 16, 16
  0600d20  stfs 2, 20(11)
  0600d24  stfs 1, 8(11)
  0600d28  stfs 16, 16(11)
  0600d2c  stfs 17, 12(11)
  0600d30  stfs 0, 20(10)
  0600d34  stfs 13, 8(10)
  0600d38  stfs 12, 12(10)
  0600d3c  stfs 11, 16(10)
  0600d40  stfs 26, 8(8)
  0600d44  stfs 22, 12(8)
  0600d48  stfs 21, 20(8)
  0600d4c  stfs 20, 16(8)
  0600d50  lfs 20, 0(28)
  0600d54  lfs 21, 0(27)
  0600d58  lfs 10, 0(23)
  0600d5c  lfs 22, 0(21)
  0600d60  lfs 26, 0(25)
  0600d64  fsubs 13, 10, 22
  0600d68  lfs 27, 0(4)
  0600d6c  fadds 10, 10, 22
  0600d70  lfs 28, 0(3)
  0600d74  lfs 18, 0(20)
  0600d78  lfs 19, 0(24)
  0600d7c  lfs 8, 0(6)
  0600d80  lfs 9, 0(5)
  0600d84  fsubs 7, 8, 20
  0600d88  lfs 11, 0(29)
  0600d8c  fsubs 0, 9, 21
  0600d90  lfs 3, 0(9)
  0600d94  fsubs 12, 11, 26
  0600d98  lfs 4, 0(7)
  0600d9c  fsubs 31, 3, 27
  0600da0  lfs 5, 0(22)
  0600da4  fsubs 2, 4, 28
  0600da8  lfs 6, 0(26)
  0600dac  fsubs 30, 5, 18
  0600db0  fsubs 1, 6, 19
  0600db4  lfs 17, 404(1)
  0600db8  fadds 9, 9, 21
  0600dbc  lwz 10, 380(1)
  0600dc0  fadds 11, 11, 26
  0600dc4  fadds 3, 3, 27
  0600dc8  addi 10, 10, 4
  0600dcc  fadds 4, 4, 28
  0600dd0  fadds 8, 8, 20
  0600dd4  fadds 5, 5, 18
  0600dd8  fsubs 27, 0, 31
  0600ddc  fadds 21, 7, 2
  0600de0  fsubs 26, 12, 30
  0600de4  fadds 28, 13, 1
  0600de8  fsubs 7, 7, 2
  0600dec  fadds 0, 0, 31
  0600df0  fsubs 13, 13, 1
  0600df4  lfs 1, 412(1)
  0600df8  fadds 12, 12, 30
  0600dfc  fadds 6, 6, 19
  0600e00  fsubs 18, 8, 3
  0600e04  fmuls 20, 29, 27
  0600e08  fmuls 29, 29, 21
  0600e0c  fmuls 22, 1, 26
  0600e10  fmuls 2, 1, 28
  0600e14  fmuls 1, 25, 7
  0600e18  fmuls 25, 25, 0
  0600e1c  fmuls 31, 17, 13
  0600e20  fmuls 30, 17, 12
  0600e24  fsubs 16, 10, 5
  0600e28  fsubs 17, 9, 4
  0600e2c  fsubs 19, 11, 6
  0600e30  fmsubs 27, 23, 27, 29
  0600e34  lfs 29, 416(1)
  0600e38  fmadds 23, 23, 21, 20
  0600e3c  fmsubs 26, 29, 26, 2
  0600e40  fmadds 0, 24, 0, 1
  0600e44  lfs 1, 408(1)
  0600e48  fmsubs 24, 24, 7, 25
  0600e4c  stw 10, 380(1)
  0600e50  fmadds 12, 1, 12, 31
  0600e54  lwz 11, 368(1)
  0600e58  fmsubs 13, 1, 13, 30
  0600e5c  fmadds 28, 29, 28, 22
  0600e60  addi 11, 11, 16
  0600e64  fadds 8, 8, 3
  0600e68  fadds 9, 9, 4
  0600e6c  stw 11, 368(1)
  0600e70  fadds 10, 10, 5
  0600e74  lwz 11, 376(1)
  0600e78  fadds 11, 11, 6
  0600e7c  cmpw 7, 11, 10
  0600e80  mflr 10
  0600e84  addi 10, 10, 16
  0600e88  mfctr 11
  0600e8c  addi 11, 11, 16
  0600e90  mtlr 10
  0600e94  stfs 8, 0(6)
  0600e98  mtctr 11
  0600e9c  stfs 9, 0(5)
  0600ea0  stfs 10, 0(23)
  0600ea4  mr 23, 0
  0600ea8  stfs 11, 0(29)
  0600eac  stfs 18, 0(9)
  0600eb0  stfs 17, 0(7)
  0600eb4  stfs 16, 0(22)
  0600eb8  stfs 19, 0(26)
  0600ebc  stfs 24, 0(28)
  0600ec0  stfs 0, 0(27)
  0600ec4  stfs 13, 0(21)
  0600ec8  stfs 12, 0(25)
  0600ecc  stfs 23, 0(4)
  0600ed0  stfs 27, 0(3)
  0600ed4  stfs 28, 0(20)
  0600ed8  stfs 26, 0(24)
  0600edc  bt 29, 0x600ac8
  0600ee0  lwz 0, 388(1)
  0600ee4  lwz 26, 384(1)
  0600ee8  lfs 17, 392(1)
  0600eec  add 9, 26, 0
  0600ef0  lfs 1, 408(1)
  0600ef4  slwi 8, 26, 2
  0600ef8  lfs 18, 416(1)
  0600efc  add 11, 0, 9
  0600f00  fadds 2, 1, 17
  0600f04  slwi 9, 9, 2
  0600f08  fsubs 1, 18, 17
  0600f0c  add 10, 0, 11
  0600f10  lfs 28, 396(1)
  0600f14  slwi 11, 11, 2
  0600f18  lfs 29, 400(1)
  0600f1c  slwi 10, 10, 2
  0600f20  lfs 19, 404(1)
  0600f24  add 8, 31, 8
  0600f28  lfs 26, 412(1)
  0600f2c  add 11, 31, 11
  0600f30  fadds 31, 19, 17
  0600f34  add 9, 31, 9
  0600f38  fsubs 30, 26, 17
  0600f3c  add 10, 31, 10
  0600f40  addi 5, 8, -8
  0600f44  addi 4, 11, -8
  0600f48  fmuls 2, 28, 2
  0600f4c  addi 3, 8, -4
  0600f50  fmuls 1, 29, 1
  0600f54  addi 29, 11, -4
  0600f58  addi 7, 9, -8
  0600f5c  addi 28, 10, -8
  0600f60  addi 6, 9, -4
  0600f64  addi 27, 10, -4
  0600f68  fmuls 31, 28, 31
  0600f6c  clrldi 5, 5, 32
  0600f70  fmuls 30, 29, 30
  0600f74  clrldi 4, 4, 32
  0600f78  clrldi 7, 7, 32
  0600f7c  clrldi 6, 6, 32
  0600f80  clrldi 3, 3, 32
  0600f84  clrldi 29, 29, 32
  0600f88  lfs 10, 0(5)
  0600f8c  clrldi 28, 28, 32
  0600f90  lfs 5, 0(4)
  0600f94  clrldi 27, 27, 32
  0600f98  lfs 9, 0(7)
  0600f9c  lfs 11, 0(6)
  0600fa0  fsubs 0, 10, 5
  0600fa4  lfs 12, 0(3)
  0600fa8  fadds 10, 10, 5
  0600fac  lfs 4, 0(29)
  0600fb0  addi 25, 8, 4
  0600fb4  lfs 7, 0(28)
  0600fb8  fsubs 13, 12, 4
  0600fbc  lfs 8, 0(27)
  0600fc0  fsubs 3, 9, 7
  0600fc4  fsubs 6, 11, 8
  0600fc8  addi 24, 11, 4
  0600fcc  fadds 9, 9, 7
  0600fd0  addi 26, 9, 4
  0600fd4  fadds 11, 11, 8
  0600fd8  addi 23, 10, 4
  0600fdc  fadds 12, 12, 4
  0600fe0  clrldi 22, 8, 32
  0600fe4  clrldi 21, 11, 32
  0600fe8  clrldi 20, 9, 32
  0600fec  clrldi 19, 10, 32
  0600ff0  clrldi 25, 25, 32
  0600ff4  clrldi 24, 24, 32
  0600ff8  fsubs 7, 13, 3
  0600ffc  clrldi 26, 26, 32
  0601000  fadds 8, 0, 6
  0601004  clrldi 23, 23, 32
  0601008  fsubs 0, 0, 6
  060100c  fadds 13, 13, 3
  0601010  fsubs 4, 10, 9
  0601014  fsubs 3, 12, 11
  0601018  fadds 10, 10, 9
  060101c  fadds 12, 12, 11
  0601020  fmuls 5, 1, 7
  0601024  fmuls 11, 1, 8
  0601028  fmuls 9, 2, 0
  060102c  fmuls 6, 2, 13
  0601030  stfs 10, 0(5)
  0601034  addi 5, 10, 12
  0601038  stfs 12, 0(3)
  060103c  addi 10, 10, 8
  0601040  stfs 4, 0(7)
  0601044  addi 7, 8, 12
  0601048  stfs 3, 0(6)
  060104c  addi 8, 8, 8
  0601050  fmadds 8, 30, 8, 5
  0601054  addi 6, 9, 12
  0601058  fmsubs 7, 30, 7, 11
  060105c  addi 9, 9, 8
  0601060  fmadds 13, 31, 13, 9
  0601064  clrldi 8, 8, 32
  0601068  fmsubs 0, 31, 0, 6
  060106c  clrldi 7, 7, 32
  0601070  clrldi 9, 9, 32
  0601074  clrldi 10, 10, 32
  0601078  clrldi 6, 6, 32
  060107c  clrldi 5, 5, 32
  0601080  stfs 0, 0(4)
  0601084  addi 4, 11, 12
  0601088  stfs 13, 0(29)
  060108c  addi 11, 11, 8
  0601090  stfs 8, 0(28)
  0601094  clrldi 4, 4, 32
  0601098  stfs 7, 0(27)
  060109c  clrldi 11, 11, 32
  06010a0  lfs 5, 0(21)
  06010a4  lfs 6, 0(24)
  06010a8  lfs 7, 0(19)
  06010ac  lfs 8, 0(23)
  06010b0  lfs 10, 0(22)
  06010b4  lfs 11, 0(25)
  06010b8  fsubs 0, 10, 5
  06010bc  lfs 12, 0(20)
  06010c0  fsubs 9, 11, 6
  06010c4  lfs 13, 0(26)
  06010c8  fsubs 3, 12, 7
  06010cc  fsubs 4, 13, 8
  06010d0  fadds 12, 12, 7
  06010d4  fadds 13, 13, 8
  06010d8  fadds 11, 11, 6
  06010dc  fadds 10, 10, 5
  06010e0  fneg 6, 17
  06010e4  fsubs 7, 9, 3
  06010e8  fadds 8, 0, 4
  06010ec  fadds 9, 9, 3
  06010f0  fsubs 0, 0, 4
  06010f4  fsubs 4, 11, 13
  06010f8  fsubs 5, 10, 12
  06010fc  fadds 11, 11, 13
  0601100  fadds 10, 10, 12
  0601104  fsubs 12, 8, 7
  0601108  fadds 8, 8, 7
  060110c  fadds 13, 0, 9
  0601110  fsubs 0, 0, 9
  0601114  stfs 10, 0(22)
  0601118  stfs 11, 0(25)
  060111c  stfs 5, 0(20)
  0601120  stfs 4, 0(26)
  0601124  fmuls 12, 17, 12
  0601128  lwz 0, 424(1)
  060112c  fmuls 6, 6, 8
  0601130  fmuls 13, 17, 13
  0601134  cmpwi 7, 0, 512
  0601138  fmuls 0, 17, 0
  060113c  stfs 0, 0(21)
  0601140  stfs 13, 0(24)
  0601144  stfs 6, 0(19)
  0601148  stfs 12, 0(23)
  060114c  lfs 4, 0(4)
  0601150  lfs 6, 0(10)
  0601154  lfs 9, 0(5)
  0601158  lfs 13, 0(8)
  060115c  lfs 3, 0(11)
  0601160  lfs 0, 0(7)
  0601164  fsubs 8, 13, 3
  0601168  lfs 10, 0(9)
  060116c  fsubs 12, 0, 4
  0601170  lfs 11, 0(6)
  0601174  fsubs 5, 10, 6
  0601178  fsubs 7, 11, 9
  060117c  fadds 10, 10, 6
  0601180  fadds 11, 11, 9
  0601184  fadds 0, 0, 4
  0601188  fadds 13, 13, 3
  060118c  fsubs 4, 12, 5
  0601190  fadds 9, 8, 7
  0601194  fadds 12, 12, 5
  0601198  fsubs 8, 8, 7
  060119c  fsubs 6, 0, 11
  06011a0  fsubs 7, 13, 10
  06011a4  fadds 0, 0, 11
  06011a8  fadds 13, 13, 10
  06011ac  fmuls 10, 30, 4
  06011b0  fmuls 30, 30, 9
  06011b4  fmuls 11, 31, 8
  06011b8  fmuls 31, 31, 12
  06011bc  stfs 13, 0(8)
  06011c0  stfs 0, 0(7)
  06011c4  stfs 7, 0(9)
  06011c8  fmadds 9, 1, 9, 10
  06011cc  stfs 6, 0(6)
  06011d0  fmsubs 1, 1, 4, 30
  06011d4  fmadds 12, 2, 12, 11
  06011d8  fmsubs 2, 2, 8, 31
  06011dc  stfs 2, 0(11)
  06011e0  stfs 12, 0(4)
  06011e4  stfs 9, 0(10)
  06011e8  stfs 1, 0(5)
  06011ec  bt 29, 0x601554
  06011f0  lwz 0, 420(1)
  06011f4  cmpwi 7, 0, 32
  06011f8  bf 29, 0x601534
  06011fc  lwz 9, 428(1)
  0601200  clrldi 4, 31, 32
  0601204  lwz 10, 424(1)
  0601208  extsw 5, 9
  060120c  lwz 6, 432(1)
  0601210  extsw 3, 10
  0601214  bl 0x5ffff0
  0601218  lwz 0, 424(1)
  060121c  li 21, 1
  0601220  addi 30, 1, 112
  0601224  srawi 3, 0, 1
  0601228  li 0, 0
  060122c  stw 0, 112(1)
  0601230  cmpwi 7, 21, 1
  0601234  slwi 0, 21, 2
  0601238  clrldi 9, 21, 32
  060123c  mr 8, 30
  0601240  add 10, 0, 30
  0601244  mtctr 9
  0601248  bt- 28, 0x6019b0
  060124c  nop
  0601250  clrldi 9, 8, 32
  0601254  clrldi 11, 10, 32
  0601258  addi 8, 8, 4
  060125c  addi 10, 10, 4
  0601260  lwz 0, 0(9)
  0601264  add 0, 3, 0
  0601268  stw 0, 0(11)
  060126c  bdnz 0x601250
  0601270  slwi 21, 21, 1
  0601274  slwi 0, 21, 3
  0601278  cmpwi 6, 21, 0
  060127c  cmpw 7, 3, 0
  0601280  srawi 3, 3, 1
  0601284  bf 29, 0x6012a4
  0601288  bt 25, 0x601230
  060128c  slwi 21, 21, 1
  0601290  slwi 0, 21, 3
  0601294  cmpwi 6, 21, 0
  0601298  cmpw 7, 3, 0
  060129c  srawi 3, 3, 1
  06012a0  bt 29, 0x601288
  06012a4  slwi 22, 21, 1
  06012a8  bt 30, 0x6017c4
  06012ac  cmpwi 7, 21, 1
  06012b0  li 28, 1
  06012b4  bf 29, 0x601420
  06012b8  slwi 0, 28, 2
  06012bc  clrldi 9, 28, 32
  06012c0  extsw 0, 0
  06012c4  mtctr 9
  06012c8  cmpwi 7, 28, 1
  06012cc  add 11, 1, 0
  06012d0  slwi 29, 28, 1
  06012d4  mr 3, 30
  06012d8  lwz 0, 112(11)
  06012dc  add 9, 22, 0
  06012e0  slwi 0, 0, 2
  06012e4  slwi 9, 9, 2
  06012e8  add 4, 31, 0
  06012ec  add 5, 31, 9
  06012f0  bt- 28, 0x6019c8
  06012f4  nop
  06012f8  clrldi 11, 3, 32
  06012fc  clrldi 7, 4, 32
  0601300  clrldi 6, 5, 32
  0601304  addi 3, 3, 4
  0601308  addi 4, 4, 8
  060130c  lwz 9, 0(11)
  0601310  addi 5, 5, 8
  0601314  lfs 11, 0(7)
  0601318  add 9, 29, 9
  060131c  lfs 12, 4(7)
  0601320  slwi 11, 9, 2
  0601324  add 9, 22, 9
  0601328  add 11, 31, 11
  060132c  slwi 9, 9, 2
  0601330  addi 10, 11, 4
  0601334  add 9, 31, 9
  0601338  clrldi 10, 10, 32
  060133c  clrldi 11, 11, 32
  0601340  addi 8, 9, 4
  0601344  clrldi 9, 9, 32
  0601348  clrldi 8, 8, 32
  060134c  lfs 0, 0(10)
  0601350  lfs 13, 0(11)
  0601354  stfs 13, 0(7)
  0601358  stfs 0, 4(7)
  060135c  stfs 11, 0(11)
  0601360  stfs 12, 0(10)
  0601364  lfs 0, 0(8)
  0601368  lfs 13, 0(9)
  060136c  lfs 12, 0(6)
  0601370  lfs 11, 4(6)
  0601374  stfs 13, 0(6)
  0601378  stfs 0, 4(6)
  060137c  stfs 12, 0(9)
  0601380  stfs 11, 0(8)
  0601384  bdnz 0x6012f8
  0601388  addi 0, 28, 1
  060138c  sub 9, 21, 28
  0601390  cmpw 7, 0, 21
  0601394  clrldi 9, 9, 32
  0601398  mtctr 9
  060139c  bt- 29, 0x6019bc
  06013a0  lis 0, -32768
  06013a4  cmpw 7, 21, 0
  06013a8  bt- 30, 0x6019bc
  06013ac  addi 28, 28, 1
  06013b0  bdz 0x601420
  06013b4  cmpwi 7, 28, 0
  06013b8  bt 29, 0x6012b8
  06013bc  b 0x6013ac
  06013c0  lwz 26, 424(1)
  06013c4  cmpwi 7, 26, 8
  06013c8  bt 29, 0x6014c0
  06013cc  bt 30, 0x6015e0
  06013d0  lwz 0, 424(1)
  06013d4  cmpwi 7, 0, 4
  06013d8  bf 30, 0x601420
  06013dc  mr 10, 4
  06013e0  lfs 12, 0(4)
  06013e4  mr 11, 4
  06013e8  mr 9, 4
  06013ec  lfsu 13, 8(10)
  06013f0  fadds 10, 12, 13
  06013f4  lfsu 0, 12(11)
  06013f8  lfsu 11, 4(9)
  06013fc  fsubs 12, 12, 13
  0601400  fsubs 11, 11, 0
  0601404  stfs 10, 0(4)
  0601408  lfs 0, 0(9)
  060140c  lfs 13, 0(11)
  0601410  fadds 0, 0, 13
  0601414  stfs 0, 0(9)
  0601418  stfs 12, 0(10)
  060141c  stfs 11, 0(11)
  0601420  ld 0, 752(1)
  0601424  ld 14, 448(1)
  0601428  ld 15, 456(1)
  060142c  mtlr 0
  0601430  ld 16, 464(1)
  0601434  ld 17, 472(1)
  0601438  ld 18, 480(1)
  060143c  ld 19, 488(1)
  0601440  ld 20, 496(1)
  0601444  ld 21, 504(1)
  0601448  ld 22, 512(1)
  060144c  ld 23, 520(1)
  0601450  ld 24, 528(1)
  0601454  ld 25, 536(1)
  0601458  ld 26, 544(1)
  060145c  ld 27, 552(1)
  0601460  ld 28, 560(1)
  0601464  ld 29, 568(1)
  0601468  ld 30, 576(1)
  060146c  ld 31, 584(1)
  0601470  lfd 14, 592(1)
  0601474  lfd 15, 600(1)
  0601478  lfd 16, 608(1)
  060147c  lfd 17, 616(1)
  0601480  lfd 18, 624(1)
  0601484  lfd 19, 632(1)
  0601488  lfd 20, 640(1)
  060148c  lfd 21, 648(1)
  0601490  lfd 22, 656(1)
  0601494  lfd 23, 664(1)
  0601498  lfd 24, 672(1)
  060149c  lfd 25, 680(1)
  06014a0  lfd 26, 688(1)
  06014a4  lfd 27, 696(1)
  06014a8  lfd 28, 704(1)
  06014ac  lfd 29, 712(1)
  06014b0  lfd 30, 720(1)
  06014b4  lfd 31, 728(1)
  06014b8  addi 1, 1, 736
  06014bc  blr
  06014c0  bt 26, 0x601680
  06014c4  lwz 4, 432(1)
  06014c8  clrldi 3, 3, 32
  06014cc  bl 0x5ff938
  06014d0  mr 4, 31
  06014d4  mr 9, 31
  06014d8  mr 11, 31
  06014dc  mr 10, 31
  06014e0  mr 8, 31
  06014e4  mr 7, 31
  06014e8  mr 6, 31
  06014ec  mr 5, 31
  06014f0  lfsu 11, 32(4)
  06014f4  lfsu 10, 8(9)
  06014f8  lfsu 9, 12(11)
  06014fc  lfsu 8, 24(10)
  0601500  lfsu 7, 28(8)
  0601504  lfsu 0, 36(7)
  0601508  lfsu 13, 48(6)
  060150c  lfsu 12, 52(5)
  0601510  stfs 11, 0(9)
  0601514  stfs 0, 0(11)
  0601518  stfs 13, 0(10)
  060151c  stfs 12, 0(8)
  0601520  stfs 10, 0(4)
  0601524  stfs 9, 0(7)
  0601528  stfs 8, 0(6)
  060152c  stfs 7, 0(5)
  0601530  b 0x601420
  0601534  lwz 0, 428(1)
  0601538  clrldi 4, 31, 32
  060153c  lwz 9, 424(1)
  0601540  extsw 5, 0
  0601544  lwz 6, 432(1)
  0601548  extsw 3, 9
  060154c  bl 0x5fff00
  0601550  b 0x601218
  0601554  lwz 10, 420(1)
  0601558  clrldi 4, 31, 32
  060155c  lwz 9, 428(1)
  0601560  extsw 29, 10
  0601564  lwz 27, 432(1)
  0601568  extsw 28, 9
  060156c  slwi 26, 10, 2
  0601570  mr 3, 29
  0601574  mr 5, 28
  0601578  mr 6, 27
  060157c  bl 0x600320
  0601580  add 4, 31, 26
  0601584  mr 3, 29
  0601588  mr 5, 28
  060158c  mr 6, 27
  0601590  clrldi 4, 4, 32
  0601594  bl 0x600458
  0601598  lwz 0, 420(1)
  060159c  mr 3, 29
  06015a0  slwi 4, 0, 3
  06015a4  mr 5, 28
  06015a8  add 4, 31, 4
  06015ac  mr 6, 27
  06015b0  clrldi 4, 4, 32
  06015b4  bl 0x600320
  06015b8  lwz 0, 420(1)
  06015bc  mr 3, 29
  06015c0  slwi 4, 0, 4
  06015c4  mr 5, 28
  06015c8  sub 4, 4, 26
  06015cc  mr 6, 27
  06015d0  add 4, 31, 4
  06015d4  clrldi 4, 4, 32
  06015d8  bl 0x600320
  06015dc  b 0x601218
  06015e0  mr 9, 4
  06015e4  lfs 0, 0(4)
  06015e8  mr 11, 4
  06015ec  mr 10, 4
  06015f0  mr 8, 4
  06015f4  mr 7, 4
  06015f8  mr 6, 4
  06015fc  mr 5, 4
  0601600  lfsu 7, 28(9)
  0601604  lfsu 6, 16(11)
  0601608  lfsu 5, 20(8)
  060160c  fsubs 10, 0, 6
  0601610  lfsu 13, 4(10)
  0601614  fadds 0, 0, 6
  0601618  lfsu 12, 8(7)
  060161c  fsubs 9, 13, 5
  0601620  lfsu 4, 24(6)
  0601624  fadds 13, 13, 5
  0601628  lfsu 11, 12(5)
  060162c  fsubs 3, 12, 4
  0601630  fsubs 8, 11, 7
  0601634  fadds 12, 12, 4
  0601638  fadds 11, 11, 7
  060163c  fsubs 6, 9, 3
  0601640  fadds 5, 10, 8
  0601644  fadds 9, 9, 3
  0601648  fsubs 10, 10, 8
  060164c  fsubs 7, 13, 11
  0601650  fsubs 8, 0, 12
  0601654  fadds 13, 13, 11
  0601658  fadds 0, 0, 12
  060165c  stfs 0, 0(4)
  0601660  stfs 13, 0(10)
  0601664  stfs 8, 0(11)
  0601668  stfs 7, 0(8)
  060166c  stfs 10, 0(7)
  0601670  stfs 9, 0(5)
  0601674  stfs 5, 0(6)
  0601678  stfs 6, 0(9)
  060167c  b 0x601420
  0601680  lwz 0, 428(1)
  0601684  clrldi 3, 3, 32
  0601688  lwz 9, 432(1)
  060168c  mr 29, 31
  0601690  slwi 4, 0, 2
  0601694  mr 28, 31
  0601698  add 4, 9, 4
  060169c  mr 27, 31
  06016a0  addi 4, 4, -32
  06016a4  mr 26, 31
  06016a8  clrldi 4, 4, 32
  06016ac  mr 25, 31
  06016b0  bl 0x5fe460
  06016b4  mr 24, 31
  06016b8  mr 7, 31
  06016bc  mr 6, 31
  06016c0  mr 5, 31
  06016c4  mr 4, 31
  06016c8  mr 3, 31
  06016cc  mr 23, 31
  06016d0  mr 22, 31
  06016d4  mr 21, 31
  06016d8  mr 20, 31
  06016dc  mr 19, 31
  06016e0  mr 18, 31
  06016e4  mr 17, 31
  06016e8  mr 16, 31
  06016ec  mr 15, 31
  06016f0  mr 9, 31
  06016f4  mr 11, 31
  06016f8  mr 10, 31
  06016fc  mr 8, 31
  0601700  lfsu 6, 56(6)
  0601704  lfsu 5, 60(5)
  0601708  lfsu 4, 88(4)
  060170c  lfsu 3, 92(3)
  0601710  lfsu 2, 104(29)
  0601714  lfsu 1, 108(28)
  0601718  lfsu 31, 112(27)
  060171c  lfsu 30, 116(26)
  0601720  lfsu 7, 64(7)
  0601724  lfsu 29, 8(25)
  0601728  lfsu 28, 12(24)
  060172c  lfsu 27, 24(23)
  0601730  lfsu 26, 28(22)
  0601734  lfsu 25, 40(21)
  0601738  lfsu 24, 44(20)
  060173c  lfsu 12, 68(19)
  0601740  lfsu 23, 80(18)
  0601744  lfsu 22, 84(17)
  0601748  lfsu 11, 96(16)
  060174c  lfsu 10, 100(15)
  0601750  lfsu 9, 16(9)
  0601754  lfsu 8, 20(11)
  0601758  lfsu 0, 32(10)
  060175c  lfsu 13, 36(8)
  0601760  stfs 7, 0(25)
  0601764  stfs 12, 0(24)
  0601768  stfs 0, 0(9)
  060176c  stfs 13, 0(11)
  0601770  stfs 11, 0(23)
  0601774  stfs 10, 0(22)
  0601778  stfs 9, 0(10)
  060177c  stfs 8, 0(8)
  0601780  stfs 23, 0(21)
  0601784  stfs 22, 0(20)
  0601788  stfs 31, 0(6)
  060178c  stfs 30, 0(5)
  0601790  stfs 29, 0(7)
  0601794  stfs 28, 0(19)
  0601798  stfs 25, 0(18)
  060179c  stfs 24, 0(17)
  06017a0  stfs 2, 0(4)
  06017a4  stfs 1, 0(3)
  06017a8  stfs 27, 0(16)
  06017ac  stfs 26, 0(15)
  06017b0  stfs 4, 0(29)
  06017b4  stfs 3, 0(28)
  06017b8  stfs 6, 0(27)
  06017bc  stfs 5, 0(26)
  06017c0  b 0x601420
  06017c4  slwi 19, 21, 2
  06017c8  li 18, 0
  06017cc  bf 25, 0x601420
  06017d0  slwi 0, 18, 2
  06017d4  slwi 20, 18, 1
  06017d8  add 17, 0, 30
  06017dc  clrldi 7, 17, 32
  06017e0  addi 18, 18, 1
  06017e4  cmpw 7, 21, 18
  06017e8  lwz 9, 0(7)
  06017ec  add 9, 20, 9
  06017f0  add 9, 22, 9
  06017f4  add 11, 22, 9
  06017f8  slwi 9, 9, 2
  06017fc  slwi 11, 11, 2
  0601800  add 9, 31, 9
  0601804  add 11, 31, 11
  0601808  addi 10, 9, 4
  060180c  addi 8, 11, 4
  0601810  clrldi 10, 10, 32
  0601814  clrldi 8, 8, 32
  0601818  clrldi 11, 11, 32
  060181c  clrldi 9, 9, 32
  0601820  lfs 11, 0(10)
  0601824  lfs 12, 0(8)
  0601828  lfs 0, 0(11)
  060182c  lfs 13, 0(9)
  0601830  stfs 0, 0(9)
  0601834  stfs 12, 0(10)
  0601838  stfs 13, 0(11)
  060183c  stfs 11, 0(8)
  0601840  bf 29, 0x601420
  0601844  cmpwi 7, 18, 0
  0601848  bf- 29, 0x6017d0
  060184c  lwz 10, 4(7)
  0601850  addi 20, 20, 2
  0601854  li 27, 0
  0601858  add 11, 22, 10
  060185c  slwi 10, 10, 2
  0601860  add 0, 22, 11
  0601864  slwi 11, 11, 2
  0601868  add 9, 22, 0
  060186c  slwi 0, 0, 2
  0601870  slwi 9, 9, 2
  0601874  add 25, 31, 0
  0601878  clrldi 0, 18, 32
  060187c  add 23, 31, 10
  0601880  add 24, 31, 11
  0601884  mtctr 0
  0601888  add 26, 31, 9
  060188c  nop
  0601890  slwi 11, 27, 2
  0601894  clrldi 4, 23, 32
  0601898  add 11, 11, 30
  060189c  clrldi 3, 24, 32
  06018a0  clrldi 11, 11, 32
  06018a4  clrldi 29, 25, 32
  06018a8  lfs 12, 0(4)
  06018ac  clrldi 28, 26, 32
  06018b0  lfs 11, 4(4)
  06018b4  addi 27, 27, 1
  06018b8  addi 23, 23, 8
  06018bc  lwz 9, 0(11)
  06018c0  addi 24, 24, 8
  06018c4  addi 25, 25, 8
  06018c8  add 9, 20, 9
  06018cc  addi 26, 26, 8
  06018d0  slwi 11, 9, 2
  06018d4  add 9, 19, 9
  06018d8  add 11, 31, 11
  06018dc  slwi 10, 9, 2
  06018e0  addi 7, 11, 4
  06018e4  sub 9, 9, 22
  06018e8  clrldi 11, 11, 32
  06018ec  add 10, 31, 10
  06018f0  clrldi 7, 7, 32
  06018f4  slwi 8, 9, 2
  06018f8  add 9, 19, 9
  06018fc  addi 6, 10, 4
  0601900  lfs 13, 0(11)
  0601904  add 8, 31, 8
  0601908  slwi 9, 9, 2
  060190c  lfs 0, 0(7)
  0601910  clrldi 6, 6, 32
  0601914  stfs 0, 4(4)
  0601918  clrldi 10, 10, 32
  060191c  stfs 13, 0(4)
  0601920  addi 5, 8, 4
  0601924  stfs 12, 0(11)
  0601928  add 9, 31, 9
  060192c  stfs 11, 0(7)
  0601930  clrldi 5, 5, 32
  0601934  lfs 12, 0(3)
  0601938  clrldi 8, 8, 32
  060193c  lfs 0, 0(6)
  0601940  addi 11, 9, 4
  0601944  lfs 13, 0(10)
  0601948  clrldi 9, 9, 32
  060194c  lfs 11, 4(3)
  0601950  clrldi 11, 11, 32
  0601954  stfs 0, 4(3)
  0601958  stfs 13, 0(3)
  060195c  stfs 12, 0(10)
  0601960  stfs 11, 0(6)
  0601964  lfs 0, 0(5)
  0601968  lfs 13, 0(8)
  060196c  lfs 12, 0(29)
  0601970  lfs 11, 4(29)
  0601974  stfs 13, 0(29)
  0601978  stfs 0, 4(29)
  060197c  stfs 12, 0(8)
  0601980  stfs 11, 0(5)
  0601984  lfs 0, 0(11)
  0601988  lfs 13, 0(9)
  060198c  lfs 12, 0(28)
  0601990  lfs 11, 4(28)
  0601994  stfs 13, 0(28)
  0601998  stfs 0, 4(28)
  060199c  stfs 12, 0(9)
  06019a0  stfs 11, 0(11)
  06019a4  bdnz 0x601890
  06019a8  addi 17, 17, 4
  06019ac  b 0x6017dc
  06019b0  li 11, 1
  06019b4  mtctr 11
  06019b8  b 0x601250
  06019bc  li 11, 1
  06019c0  mtctr 11
  06019c4  b 0x6013ac
  06019c8  li 10, 1
  06019cc  mtctr 10
  06019d0  b 0x6012f8

FUN_006019d8:   # 0x6019d8, 0x300 bytes
  06019d8  stdu 1, -192(1)
  06019dc  mflr 0
  06019e0  std 27, 152(1)
  06019e4  srawi 27, 3, 1
  06019e8  std 29, 168(1)
  06019ec  mr 29, 5
  06019f0  srawi 5, 5, 2
  06019f4  cmpwi 7, 27, 1
  06019f8  std 0, 208(1)
  06019fc  slwi 0, 5, 2
  0601a00  std 23, 120(1)
  0601a04  std 26, 144(1)
  0601a08  std 28, 160(1)
  0601a0c  std 30, 176(1)
  0601a10  std 31, 184(1)
  0601a14  std 24, 128(1)
  0601a18  std 25, 136(1)
  0601a1c  mr 31, 3
  0601a20  mr 26, 4
  0601a24  mr 30, 4
  0601a28  add 28, 0, 6
  0601a2c  slwi 23, 3, 2
  0601a30  divw 9, 29, 3
  0601a34  bf 29, 0x601ab8
  0601a38  sub 0, 29, 9
  0601a3c  addi 11, 27, -1
  0601a40  slwi 3, 9, 2
  0601a44  slwi 0, 0, 2
  0601a48  add 9, 4, 23
  0601a4c  clrldi 11, 11, 32
  0601a50  add 4, 28, 0
  0601a54  addi 7, 9, -4
  0601a58  mtctr 11
  0601a5c  add 0, 28, 3
  0601a60  neg 12, 3
  0601a64  addi 8, 26, 4
  0601a68  clrldi 9, 0, 32
  0601a6c  lfs 10, 0(8)
  0601a70  clrldi 11, 4, 32
  0601a74  clrldi 10, 7, 32
  0601a78  add 0, 0, 3
  0601a7c  add 4, 4, 12
  0601a80  lfs 0, 0(9)
  0601a84  addi 7, 7, -4
  0601a88  lfs 11, 0(11)
  0601a8c  fadds 12, 0, 11
  0601a90  lfs 13, 0(10)
  0601a94  fsubs 0, 0, 11
  0601a98  fmuls 11, 12, 13
  0601a9c  fmuls 13, 0, 13
  0601aa0  fmadds 0, 0, 10, 11
  0601aa4  fmsubs 12, 12, 10, 13
  0601aa8  stfs 0, 0(8)
  0601aac  addi 8, 8, 4
  0601ab0  stfs 12, 0(10)
  0601ab4  bdnz 0x601a68
  0601ab8  slwi 9, 27, 2
  0601abc  clrldi 11, 28, 32
  0601ac0  add 9, 30, 9
  0601ac4  cmpwi 7, 31, 4
  0601ac8  clrldi 9, 9, 32
  0601acc  lfs 13, 0(11)
  0601ad0  lfs 0, 0(9)
  0601ad4  fmuls 0, 0, 13
  0601ad8  stfs 0, 0(9)
  0601adc  bt 29, 0x601b98
  0601ae0  bt 30, 0x601ca4
  0601ae4  lfs 13, 0(26)
  0601ae8  cmpwi 7, 31, 2
  0601aec  lfs 0, 4(26)
  0601af0  addi 24, 30, 8
  0601af4  fadds 12, 13, 0
  0601af8  addi 25, 30, 12
  0601afc  fsubs 11, 13, 0
  0601b00  stfs 12, 0(26)
  0601b04  bf 29, 0x601b54
  0601b08  mr 11, 24
  0601b0c  mr 10, 25
  0601b10  li 8, 2
  0601b14  nop
  0601b18  lfs 0, 0(10)
  0601b1c  addi 9, 11, -4
  0601b20  lfs 13, 0(11)
  0601b24  addi 8, 8, 2
  0601b28  fsubs 13, 13, 0
  0601b2c  clrldi 9, 9, 32
  0601b30  cmpw 7, 31, 8
  0601b34  stfs 13, 0(9)
  0601b38  lfs 0, 0(11)
  0601b3c  lfs 13, 0(10)
  0601b40  addi 10, 10, 8
  0601b44  fadds 0, 0, 13
  0601b48  stfs 0, 0(11)
  0601b4c  addi 11, 11, 8
  0601b50  bt 29, 0x601b18
  0601b54  add 9, 23, 30
  0601b58  addi 9, 9, -4
  0601b5c  clrldi 9, 9, 32
  0601b60  stfs 11, 0(9)
  0601b64  ld 0, 208(1)
  0601b68  ld 23, 120(1)
  0601b6c  ld 24, 128(1)
  0601b70  mtlr 0
  0601b74  ld 25, 136(1)
  0601b78  ld 26, 144(1)
  0601b7c  ld 27, 152(1)
  0601b80  ld 28, 160(1)
  0601b84  ld 29, 168(1)
  0601b88  ld 30, 176(1)
  0601b8c  ld 31, 184(1)
  0601b90  addi 1, 1, 192
  0601b94  blr
  0601b98  extsw 5, 5
  0601b9c  clrldi 6, 6, 32
  0601ba0  extsw 3, 31
  0601ba4  clrldi 4, 30, 32
  0601ba8  addi 24, 30, 8
  0601bac  bl 0x600860
  0601bb0  cmpwi 7, 27, 2
  0601bb4  slwi 0, 29, 1
  0601bb8  addi 25, 30, 12
  0601bbc  divw 9, 0, 27
  0601bc0  bf 29, 0x601c8c
  0601bc4  sub 0, 29, 9
  0601bc8  lfs 8, -32080(2)
  0601bcc  slwi 12, 9, 2
  0601bd0  slwi 0, 0, 2
  0601bd4  add 9, 30, 23
  0601bd8  add 5, 28, 0
  0601bdc  addi 4, 9, -8
  0601be0  add 0, 28, 12
  0601be4  neg 29, 12
  0601be8  mr 6, 24
  0601bec  mr 7, 25
  0601bf0  li 3, 2
  0601bf4  nop
  0601bf8  addi 11, 4, 4
  0601bfc  lfs 9, 0(7)
  0601c00  clrldi 8, 4, 32
  0601c04  lfs 10, 0(6)
  0601c08  clrldi 11, 11, 32
  0601c0c  clrldi 10, 5, 32
  0601c10  clrldi 9, 0, 32
  0601c14  addi 3, 3, 2
  0601c18  lfs 13, 0(8)
  0601c1c  add 5, 5, 29
  0601c20  lfs 0, 0(11)
  0601c24  fsubs 13, 10, 13
  0601c28  fadds 9, 9, 0
  0601c2c  lfs 12, 0(10)
  0601c30  lfs 11, 0(9)
  0601c34  fsubs 12, 8, 12
  0601c38  cmpw 7, 27, 3
  0601c3c  add 0, 0, 12
  0601c40  addi 4, 4, -8
  0601c44  fmuls 0, 11, 9
  0601c48  fmuls 11, 11, 13
  0601c4c  fmsubs 13, 12, 13, 0
  0601c50  fmadds 12, 12, 9, 11
  0601c54  fsubs 10, 10, 13
  0601c58  stfs 10, 0(6)
  0601c5c  addi 6, 6, 8
  0601c60  lfs 0, 0(7)
  0601c64  fsubs 0, 0, 12
  0601c68  stfs 0, 0(7)
  0601c6c  addi 7, 7, 8
  0601c70  lfs 11, 0(8)
  0601c74  fadds 13, 13, 11
  0601c78  stfs 13, 0(8)
  0601c7c  lfs 0, 0(11)
  0601c80  fsubs 0, 0, 12
  0601c84  stfs 0, 0(11)
  0601c88  bt 29, 0x601bf8
  0601c8c  lfs 0, 0(26)
  0601c90  lfs 13, 4(26)
  0601c94  fadds 12, 13, 0
  0601c98  fsubs 11, 0, 13
  0601c9c  stfs 12, 0(26)
  0601ca0  b 0x601b08
  0601ca4  extsw 5, 5
  0601ca8  clrldi 6, 6, 32
  0601cac  li 3, 4
  0601cb0  clrldi 4, 30, 32
  0601cb4  addi 24, 30, 8
  0601cb8  bl 0x600860
  0601cbc  lfs 0, 0(26)
  0601cc0  lfs 13, 4(26)
  0601cc4  addi 25, 30, 12
  0601cc8  fadds 12, 13, 0
  0601ccc  fsubs 11, 0, 13
  0601cd0  stfs 12, 0(26)
  0601cd4  b 0x601b08

FUN_00601cd8:   # 0x601cd8, 0x3a4 bytes
  0601cd8  stdu 1, -384(1)
  0601cdc  std 23, 312(1)
  0601ce0  addi 23, 1, 48
  0601ce4  li 0, 8
  0601ce8  std 22, 304(1)
  0601cec  std 24, 320(1)
  0601cf0  mtctr 0
  0601cf4  std 30, 368(1)
  0601cf8  std 31, 376(1)
  0601cfc  mr 22, 3
  0601d00  mr 24, 4
  0601d04  mr 31, 6
  0601d08  mr 12, 5
  0601d0c  mr 30, 23
  0601d10  std 25, 328(1)
  0601d14  std 26, 336(1)
  0601d18  std 27, 344(1)
  0601d1c  std 28, 352(1)
  0601d20  std 29, 360(1)
  0601d24  nop
  0601d28  lhz 28, 16(12)
  0601d2c  lhz 7, 32(12)
  0601d30  lhz 5, 48(12)
  0601d34  lhz 8, 64(12)
  0601d38  or 0, 28, 7
  0601d3c  lhz 10, 80(12)
  0601d40  lhz 29, 96(12)
  0601d44  or 9, 5, 8
  0601d48  or 0, 0, 10
  0601d4c  lhz 27, 112(12)
  0601d50  or 9, 9, 29
  0601d54  or 0, 0, 27
  0601d58  or 9, 9, 0
  0601d5c  extsh 9, 9
  0601d60  cmpwi 7, 9, 0
  0601d64  bf 30, 0x601f24
  0601d68  lhz 0, 0(12)
  0601d6c  clrldi 9, 30, 32
  0601d70  lwz 11, 0(31)
  0601d74  addi 12, 12, 2
  0601d78  extsh 0, 0
  0601d7c  addi 31, 31, 4
  0601d80  addi 30, 30, 4
  0601d84  mullw 0, 0, 11
  0601d88  srawi 0, 0, 11
  0601d8c  stw 0, 224(9)
  0601d90  stw 0, 0(9)
  0601d94  stw 0, 32(9)
  0601d98  stw 0, 64(9)
  0601d9c  stw 0, 96(9)
  0601da0  stw 0, 128(9)
  0601da4  stw 0, 160(9)
  0601da8  stw 0, 192(9)
  0601dac  bdnz 0x601d28
  0601db0  mr 25, 22
  0601db4  addi 30, 23, 256
  0601db8  mr 31, 23
  0601dbc  nop
  0601dc0  clrldi 11, 31, 32
  0601dc4  clrldi 28, 25, 32
  0601dc8  addi 31, 31, 32
  0601dcc  add 25, 25, 24
  0601dd0  cmpw 7, 30, 31
  0601dd4  lwz 7, 28(11)
  0601dd8  lwz 0, 12(11)
  0601ddc  lwz 3, 20(11)
  0601de0  lwz 9, 4(11)
  0601de4  sub 10, 3, 0
  0601de8  lwz 4, 24(11)
  0601dec  sub 8, 9, 7
  0601df0  lwz 29, 8(11)
  0601df4  add 9, 9, 7
  0601df8  lwz 5, 16(11)
  0601dfc  add 27, 10, 8
  0601e00  add 3, 3, 0
  0601e04  mulli 27, 27, 3784
  0601e08  sub 0, 29, 4
  0601e0c  sub 6, 9, 3
  0601e10  mulli 0, 0, 2896
  0601e14  mulli 6, 6, 2896
  0601e18  mulli 8, 8, 2217
  0601e1c  srawi 27, 27, 11
  0601e20  add 3, 3, 9
  0601e24  lwz 9, 0(11)
  0601e28  add 29, 29, 4
  0601e2c  srawi 0, 0, 11
  0601e30  srawi 6, 6, 11
  0601e34  srawi 8, 8, 11
  0601e38  sub 7, 9, 5
  0601e3c  sub 0, 0, 29
  0601e40  add 9, 9, 5
  0601e44  sub 8, 8, 27
  0601e48  sub 4, 7, 0
  0601e4c  sub 5, 9, 29
  0601e50  add 7, 7, 0
  0601e54  add 9, 9, 29
  0601e58  addi 0, 7, 127
  0601e5c  sub 11, 9, 3
  0601e60  addi 29, 4, 127
  0601e64  addi 26, 5, 127
  0601e68  addi 9, 9, 127
  0601e6c  addi 11, 11, 127
  0601e70  add 9, 3, 9
  0601e74  srawi 11, 11, 8
  0601e78  srawi 9, 9, 8
  0601e7c  stb 11, 7(28)
  0601e80  stb 9, 0(28)
  0601e84  mulli 10, 10, -5352
  0601e88  srawi 10, 10, 11
  0601e8c  add 10, 27, 10
  0601e90  sub 10, 10, 3
  0601e94  sub 6, 6, 10
  0601e98  sub 7, 7, 10
  0601e9c  add 8, 8, 6
  0601ea0  sub 4, 4, 6
  0601ea4  sub 5, 5, 8
  0601ea8  add 10, 10, 0
  0601eac  addi 7, 7, 127
  0601eb0  add 6, 6, 29
  0601eb4  addi 4, 4, 127
  0601eb8  add 8, 8, 26
  0601ebc  addi 5, 5, 127
  0601ec0  srawi 10, 10, 8
  0601ec4  srawi 7, 7, 8
  0601ec8  srawi 6, 6, 8
  0601ecc  srawi 4, 4, 8
  0601ed0  srawi 8, 8, 8
  0601ed4  srawi 5, 5, 8
  0601ed8  stb 10, 1(28)
  0601edc  stb 5, 3(28)
  0601ee0  stb 7, 6(28)
  0601ee4  stb 6, 2(28)
  0601ee8  stb 4, 5(28)
  0601eec  stb 8, 4(28)
  0601ef0  bf 30, 0x601dc0
  0601ef4  ld 22, 304(1)
  0601ef8  ld 23, 312(1)
  0601efc  ld 24, 320(1)
  0601f00  ld 25, 328(1)
  0601f04  ld 26, 336(1)
  0601f08  ld 27, 344(1)
  0601f0c  ld 28, 352(1)
  0601f10  ld 29, 360(1)
  0601f14  ld 30, 368(1)
  0601f18  ld 31, 376(1)
  0601f1c  addi 1, 1, 384
  0601f20  blr
  0601f24  lwz 0, 96(31)
  0601f28  extsh 5, 5
  0601f2c  lwz 9, 160(31)
  0601f30  extsh 10, 10
  0601f34  extsh 7, 7
  0601f38  lwz 11, 224(31)
  0601f3c  extsh 29, 29
  0601f40  lwz 25, 32(31)
  0601f44  mullw 10, 10, 9
  0601f48  lwz 9, 192(31)
  0601f4c  srawi 10, 10, 11
  0601f50  extsh 27, 27
  0601f54  mullw 29, 29, 9
  0601f58  srawi 29, 29, 11
  0601f5c  mullw 27, 27, 11
  0601f60  extsh 11, 8
  0601f64  lwz 8, 128(31)
  0601f68  extsh 28, 28
  0601f6c  mullw 11, 11, 8
  0601f70  mullw 28, 28, 25
  0601f74  srawi 11, 11, 11
  0601f78  srawi 27, 27, 11
  0601f7c  srawi 28, 28, 11
  0601f80  clrldi 8, 30, 32
  0601f84  addi 30, 30, 4
  0601f88  mullw 5, 5, 0
  0601f8c  lwz 0, 64(31)
  0601f90  srawi 5, 5, 11
  0601f94  sub 6, 10, 5
  0601f98  add 5, 5, 10
  0601f9c  lwz 10, 0(31)
  0601fa0  mulli 3, 6, -5352
  0601fa4  srawi 3, 3, 11
  0601fa8  addi 31, 31, 4
  0601fac  mullw 7, 7, 0
  0601fb0  lhz 0, 0(12)
  0601fb4  srawi 7, 7, 11
  0601fb8  addi 12, 12, 2
  0601fbc  sub 9, 7, 29
  0601fc0  extsh 0, 0
  0601fc4  add 7, 7, 29
  0601fc8  mulli 9, 9, 2896
  0601fcc  srawi 9, 9, 11
  0601fd0  mullw 0, 0, 10
  0601fd4  srawi 0, 0, 11
  0601fd8  sub 9, 9, 7
  0601fdc  sub 4, 0, 11
  0601fe0  add 0, 0, 11
  0601fe4  sub 29, 4, 9
  0601fe8  add 4, 4, 9
  0601fec  sub 9, 28, 27
  0601ff0  add 28, 28, 27
  0601ff4  add 6, 6, 9
  0601ff8  sub 11, 28, 5
  0601ffc  mulli 9, 9, 2217
  0602000  mulli 11, 11, 2896
  0602004  add 5, 5, 28
  0602008  srawi 11, 11, 11
  060200c  srawi 9, 9, 11
  0602010  sub 26, 0, 7
  0602014  add 0, 0, 7
  0602018  mulli 6, 6, 3784
  060201c  srawi 6, 6, 11
  0602020  sub 10, 0, 5
  0602024  add 3, 6, 3
  0602028  sub 9, 9, 6
  060202c  sub 3, 3, 5
  0602030  add 0, 0, 5
  0602034  sub 11, 11, 3
  0602038  stw 10, 224(8)
  060203c  add 9, 9, 11
  0602040  sub 10, 4, 3
  0602044  sub 7, 29, 11
  0602048  stw 0, 0(8)
  060204c  add 4, 4, 3
  0602050  sub 0, 26, 9
  0602054  add 29, 29, 11
  0602058  add 26, 26, 9
  060205c  stw 0, 96(8)
  0602060  stw 4, 32(8)
  0602064  stw 10, 192(8)
  0602068  stw 29, 64(8)
  060206c  stw 7, 160(8)
  0602070  stw 26, 128(8)
  0602074  bdnz 0x601d28
  0602078  b 0x601db0

FUN_00602080:   # 0x602080, 0x14 bytes
  0602080  slwi 6, 6, 8
  0602084  lwz 0, -32076(2)
  0602088  add 6, 6, 0
  060208c  clrldi 6, 6, 32
  0602090  b 0x601cd8

FUN_00602094:   # 0x602094, 0x18 bytes
  0602094  lwz 9, -32076(2)
  0602098  slwi 6, 6, 8
  060209c  addi 9, 9, 4096
  06020a0  add 6, 6, 9
  06020a4  clrldi 6, 6, 32
  06020a8  b 0x601cd8

FUN_006020b0:   # 0x6020b0, 0x3f4 bytes
  06020b0  lwz 9, -32076(2)
  06020b4  slwi 6, 6, 8
  06020b8  stdu 1, -400(1)
  06020bc  std 22, 320(1)
  06020c0  addi 9, 9, 4096
  06020c4  addi 22, 1, 48
  06020c8  li 0, 8
  06020cc  std 21, 312(1)
  06020d0  std 23, 328(1)
  06020d4  mtctr 0
  06020d8  std 24, 336(1)
  06020dc  std 30, 384(1)
  06020e0  std 31, 392(1)
  06020e4  std 25, 344(1)
  06020e8  std 26, 352(1)
  06020ec  std 27, 360(1)
  06020f0  std 28, 368(1)
  06020f4  std 29, 376(1)
  06020f8  mr 24, 3
  06020fc  mr 21, 4
  0602100  add 30, 6, 9
  0602104  mr 12, 5
  0602108  add 23, 3, 4
  060210c  mr 31, 22
  0602110  lhz 28, 16(12)
  0602114  lhz 7, 32(12)
  0602118  lhz 4, 48(12)
  060211c  lhz 8, 64(12)
  0602120  or 0, 28, 7
  0602124  lhz 11, 80(12)
  0602128  lhz 29, 96(12)
  060212c  or 9, 4, 8
  0602130  or 0, 0, 11
  0602134  lhz 27, 112(12)
  0602138  or 9, 9, 29
  060213c  or 0, 0, 27
  0602140  or 9, 9, 0
  0602144  extsh 9, 9
  0602148  cmpwi 7, 9, 0
  060214c  bf 30, 0x602348
  0602150  clrldi 10, 30, 32
  0602154  lhz 0, 0(12)
  0602158  clrldi 9, 31, 32
  060215c  extsh 0, 0
  0602160  addi 12, 12, 2
  0602164  addi 30, 30, 4
  0602168  lwz 11, 0(10)
  060216c  addi 31, 31, 4
  0602170  mullw 0, 0, 11
  0602174  srawi 0, 0, 11
  0602178  stw 0, 224(9)
  060217c  stw 0, 0(9)
  0602180  stw 0, 32(9)
  0602184  stw 0, 64(9)
  0602188  stw 0, 96(9)
  060218c  stw 0, 128(9)
  0602190  stw 0, 160(9)
  0602194  stw 0, 192(9)
  0602198  bdnz 0x602110
  060219c  slwi 31, 21, 1
  06021a0  addi 30, 22, 256
  06021a4  mr 12, 22
  06021a8  clrldi 7, 12, 32
  06021ac  clrldi 27, 24, 32
  06021b0  clrldi 26, 23, 32
  06021b4  addi 12, 12, 32
  06021b8  add 24, 24, 31
  06021bc  lwz 11, 28(7)
  06021c0  cmpw 7, 30, 12
  06021c4  lwz 0, 12(7)
  06021c8  add 23, 23, 31
  06021cc  lwz 3, 20(7)
  06021d0  lwz 9, 4(7)
  06021d4  sub 10, 3, 0
  06021d8  lwz 6, 24(7)
  06021dc  sub 8, 9, 11
  06021e0  lwz 29, 8(7)
  06021e4  add 3, 3, 0
  06021e8  lwz 5, 16(7)
  06021ec  add 28, 10, 8
  06021f0  add 9, 9, 11
  06021f4  mulli 28, 28, 3784
  06021f8  sub 0, 29, 6
  06021fc  sub 11, 9, 3
  0602200  mulli 0, 0, 2896
  0602204  mulli 11, 11, 2896
  0602208  mulli 8, 8, 2217
  060220c  srawi 28, 28, 11
  0602210  add 3, 3, 9
  0602214  lwz 9, 0(7)
  0602218  add 29, 29, 6
  060221c  srawi 0, 0, 11
  0602220  srawi 11, 11, 11
  0602224  srawi 8, 8, 11
  0602228  sub 7, 9, 5
  060222c  sub 0, 0, 29
  0602230  add 9, 9, 5
  0602234  sub 8, 8, 28
  0602238  sub 6, 7, 0
  060223c  sub 4, 9, 29
  0602240  add 7, 7, 0
  0602244  add 9, 9, 29
  0602248  addi 0, 7, 127
  060224c  sub 5, 9, 3
  0602250  addi 29, 6, 127
  0602254  addi 25, 4, 127
  0602258  addi 9, 9, 127
  060225c  addi 5, 5, 127
  0602260  add 9, 3, 9
  0602264  rldicl 5, 5, 56, 56
  0602268  rlwinm 9, 9, 8, 8, 15
  060226c  mulli 10, 10, -5352
  0602270  srawi 10, 10, 11
  0602274  add 10, 28, 10
  0602278  sub 10, 10, 3
  060227c  sub 11, 11, 10
  0602280  sub 7, 7, 10
  0602284  add 8, 8, 11
  0602288  sub 6, 6, 11
  060228c  sub 4, 4, 8
  0602290  add 10, 10, 0
  0602294  addi 7, 7, 127
  0602298  add 11, 11, 29
  060229c  addi 6, 6, 127
  06022a0  add 8, 8, 25
  06022a4  addi 4, 4, 127
  06022a8  rldicl 10, 10, 56, 56
  06022ac  rlwinm 7, 7, 8, 8, 15
  06022b0  rlwinm 8, 8, 8, 8, 15
  06022b4  rlwinm 11, 11, 8, 8, 15
  06022b8  rldicl 6, 6, 56, 56
  06022bc  rldicl 4, 4, 56, 56
  06022c0  or 9, 9, 10
  06022c4  or 5, 5, 7
  06022c8  or 6, 6, 8
  06022cc  or 11, 11, 4
  06022d0  slwi 0, 9, 8
  06022d4  slwi 10, 5, 8
  06022d8  slwi 8, 6, 8
  06022dc  slwi 7, 11, 8
  06022e0  or 9, 9, 0
  06022e4  or 5, 5, 10
  06022e8  or 6, 6, 8
  06022ec  or 11, 11, 7
  06022f0  stw 5, 12(27)
  06022f4  stw 9, 0(27)
  06022f8  stw 11, 4(27)
  06022fc  stw 6, 8(27)
  0602300  stw 5, 12(26)
  0602304  stw 9, 0(26)
  0602308  stw 11, 4(26)
  060230c  stw 6, 8(26)
  0602310  bf 30, 0x6021a8
  0602314  ld 21, 312(1)
  0602318  ld 22, 320(1)
  060231c  ld 23, 328(1)
  0602320  ld 24, 336(1)
  0602324  ld 25, 344(1)
  0602328  ld 26, 352(1)
  060232c  ld 27, 360(1)
  0602330  ld 28, 368(1)
  0602334  ld 29, 376(1)
  0602338  ld 30, 384(1)
  060233c  ld 31, 392(1)
  0602340  addi 1, 1, 400
  0602344  blr
  0602348  clrldi 6, 30, 32
  060234c  extsh 4, 4
  0602350  extsh 11, 11
  0602354  extsh 7, 7
  0602358  extsh 29, 29
  060235c  lwz 0, 96(6)
  0602360  extsh 27, 27
  0602364  lwz 9, 160(6)
  0602368  extsh 28, 28
  060236c  lwz 10, 224(6)
  0602370  addi 30, 30, 4
  0602374  mullw 11, 11, 9
  0602378  lwz 9, 192(6)
  060237c  srawi 11, 11, 11
  0602380  mullw 27, 27, 10
  0602384  mullw 29, 29, 9
  0602388  srawi 29, 29, 11
  060238c  lwz 10, 0(6)
  0602390  lwz 25, 32(6)
  0602394  srawi 27, 27, 11
  0602398  mullw 4, 4, 0
  060239c  lwz 0, 64(6)
  06023a0  srawi 4, 4, 11
  06023a4  mullw 28, 28, 25
  06023a8  sub 5, 11, 4
  06023ac  add 4, 4, 11
  06023b0  extsh 11, 8
  06023b4  lwz 8, 128(6)
  06023b8  srawi 28, 28, 11
  06023bc  mullw 11, 11, 8
  06023c0  srawi 11, 11, 11
  06023c4  mulli 3, 5, -5352
  06023c8  srawi 3, 3, 11
  06023cc  clrldi 8, 31, 32
  06023d0  addi 31, 31, 4
  06023d4  mullw 7, 7, 0
  06023d8  lhz 0, 0(12)
  06023dc  srawi 7, 7, 11
  06023e0  addi 12, 12, 2
  06023e4  sub 9, 7, 29
  06023e8  extsh 0, 0
  06023ec  add 7, 7, 29
  06023f0  mulli 9, 9, 2896
  06023f4  srawi 9, 9, 11
  06023f8  mullw 0, 0, 10
  06023fc  srawi 0, 0, 11
  0602400  sub 9, 9, 7
  0602404  sub 6, 0, 11
  0602408  add 0, 0, 11
  060240c  sub 29, 6, 9
  0602410  add 6, 6, 9
  0602414  sub 9, 28, 27
  0602418  add 28, 28, 27
  060241c  add 5, 5, 9
  0602420  sub 11, 28, 4
  0602424  mulli 9, 9, 2217
  0602428  mulli 11, 11, 2896
  060242c  add 4, 4, 28
  0602430  srawi 11, 11, 11
  0602434  srawi 9, 9, 11
  0602438  sub 26, 0, 7
  060243c  add 0, 0, 7
  0602440  mulli 5, 5, 3784
  0602444  srawi 5, 5, 11
  0602448  sub 10, 0, 4
  060244c  add 3, 5, 3
  0602450  sub 9, 9, 5
  0602454  sub 3, 3, 4
  0602458  add 0, 0, 4
  060245c  sub 11, 11, 3
  0602460  stw 10, 224(8)
  0602464  add 9, 9, 11
  0602468  sub 10, 6, 3
  060246c  sub 7, 29, 11
  0602470  stw 0, 0(8)
  0602474  add 6, 6, 3
  0602478  sub 0, 26, 9
  060247c  add 29, 29, 11
  0602480  add 26, 26, 9
  0602484  stw 0, 96(8)
  0602488  stw 6, 32(8)
  060248c  stw 10, 192(8)
  0602490  stw 29, 64(8)
  0602494  stw 7, 160(8)
  0602498  stw 26, 128(8)
  060249c  bdnz 0x602110
  06024a0  b 0x60219c

FUN_006024a8:   # 0x6024a8, 0x410 bytes
  06024a8  lwz 0, -32076(2)
  06024ac  slwi 6, 6, 8
  06024b0  stdu 1, -400(1)
  06024b4  std 30, 384(1)
  06024b8  addi 12, 1, 48
  06024bc  add 30, 6, 0
  06024c0  li 0, 8
  06024c4  std 20, 304(1)
  06024c8  std 21, 312(1)
  06024cc  mtctr 0
  06024d0  std 22, 320(1)
  06024d4  std 23, 328(1)
  06024d8  std 24, 336(1)
  06024dc  std 31, 392(1)
  06024e0  std 25, 344(1)
  06024e4  std 26, 352(1)
  06024e8  std 27, 360(1)
  06024ec  std 28, 368(1)
  06024f0  std 29, 376(1)
  06024f4  mr 23, 3
  06024f8  mr 21, 4
  06024fc  mr 20, 7
  0602500  mr 22, 8
  0602504  mr 24, 5
  0602508  mr 31, 12
  060250c  nop
  0602510  lhz 28, 16(24)
  0602514  lhz 7, 32(24)
  0602518  lhz 4, 48(24)
  060251c  lhz 8, 64(24)
  0602520  or 0, 28, 7
  0602524  lhz 11, 80(24)
  0602528  lhz 29, 96(24)
  060252c  or 9, 4, 8
  0602530  or 0, 0, 11
  0602534  lhz 27, 112(24)
  0602538  or 9, 9, 29
  060253c  or 0, 0, 27
  0602540  or 9, 9, 0
  0602544  extsh 9, 9
  0602548  cmpwi 7, 9, 0
  060254c  bf 30, 0x60275c
  0602550  clrldi 10, 30, 32
  0602554  lhz 0, 0(24)
  0602558  clrldi 9, 31, 32
  060255c  extsh 0, 0
  0602560  addi 24, 24, 2
  0602564  addi 30, 30, 4
  0602568  lwz 11, 0(10)
  060256c  addi 31, 31, 4
  0602570  mullw 0, 0, 11
  0602574  srawi 0, 0, 11
  0602578  stw 0, 224(9)
  060257c  stw 0, 0(9)
  0602580  stw 0, 32(9)
  0602584  stw 0, 64(9)
  0602588  stw 0, 96(9)
  060258c  stw 0, 128(9)
  0602590  stw 0, 160(9)
  0602594  stw 0, 192(9)
  0602598  bdnz 0x602510
  060259c  mr 30, 23
  06025a0  mr 31, 20
  06025a4  addi 23, 12, 256
  06025a8  clrldi 9, 12, 32
  06025ac  clrldi 27, 31, 32
  06025b0  clrldi 26, 30, 32
  06025b4  addi 12, 12, 32
  06025b8  add 30, 30, 21
  06025bc  lwz 28, 28(9)
  06025c0  cmpw 7, 23, 12
  06025c4  lwz 3, 12(9)
  06025c8  add 31, 31, 22
  06025cc  lwz 4, 20(9)
  06025d0  lwz 7, 4(9)
  06025d4  sub 11, 4, 3
  06025d8  lwz 0, 24(9)
  06025dc  sub 6, 7, 28
  06025e0  lwz 25, 8(9)
  06025e4  lwz 8, 0(9)
  06025e8  add 4, 4, 3
  06025ec  add 29, 11, 6
  06025f0  lwz 24, 16(9)
  06025f4  add 7, 7, 28
  06025f8  lbz 28, 0(27)
  06025fc  sub 10, 25, 0
  0602600  add 5, 8, 24
  0602604  add 25, 25, 0
  0602608  mulli 29, 29, 3784
  060260c  add 3, 4, 7
  0602610  sub 7, 7, 4
  0602614  add 9, 5, 25
  0602618  mulli 7, 7, 2896
  060261c  addi 0, 9, 127
  0602620  mulli 6, 6, 2217
  0602624  mulli 10, 10, 2896
  0602628  add 0, 3, 0
  060262c  srawi 29, 29, 11
  0602630  srawi 0, 0, 8
  0602634  sub 9, 9, 3
  0602638  add 0, 0, 28
  060263c  addi 9, 9, 127
  0602640  stb 0, 0(26)
  0602644  mulli 11, 11, -5352
  0602648  srawi 11, 11, 11
  060264c  lbz 0, 7(27)
  0602650  srawi 9, 9, 8
  0602654  add 11, 29, 11
  0602658  srawi 7, 7, 11
  060265c  sub 11, 11, 3
  0602660  srawi 6, 6, 11
  0602664  srawi 10, 10, 11
  0602668  sub 7, 7, 11
  060266c  add 9, 9, 0
  0602670  sub 10, 10, 25
  0602674  sub 8, 8, 24
  0602678  sub 5, 5, 25
  060267c  sub 6, 6, 29
  0602680  stb 9, 7(26)
  0602684  addi 0, 5, 127
  0602688  lbz 4, 1(27)
  060268c  add 9, 8, 10
  0602690  add 6, 6, 7
  0602694  sub 8, 8, 10
  0602698  sub 5, 5, 6
  060269c  add 6, 6, 0
  06026a0  addi 0, 9, 127
  06026a4  sub 9, 9, 11
  06026a8  add 11, 11, 0
  06026ac  addi 9, 9, 127
  06026b0  srawi 11, 11, 8
  06026b4  srawi 9, 9, 8
  06026b8  add 11, 11, 4
  06026bc  addi 0, 8, 127
  06026c0  stb 11, 1(26)
  06026c4  lbz 10, 6(27)
  06026c8  add 0, 7, 0
  06026cc  sub 8, 8, 7
  06026d0  add 9, 9, 10
  06026d4  srawi 0, 0, 8
  06026d8  stb 9, 6(26)
  06026dc  lbz 11, 2(27)
  06026e0  addi 8, 8, 127
  06026e4  addi 5, 5, 127
  06026e8  add 0, 0, 11
  06026ec  srawi 8, 8, 8
  06026f0  stb 0, 2(26)
  06026f4  lbz 0, 5(27)
  06026f8  srawi 5, 5, 8
  06026fc  srawi 6, 6, 8
  0602700  add 8, 8, 0
  0602704  stb 8, 5(26)
  0602708  lbz 0, 3(27)
  060270c  add 5, 5, 0
  0602710  stb 5, 3(26)
  0602714  lbz 0, 4(27)
  0602718  add 6, 6, 0
  060271c  stb 6, 4(26)
  0602720  bf 30, 0x6025a8
  0602724  ld 20, 304(1)
  0602728  ld 21, 312(1)
  060272c  ld 22, 320(1)
  0602730  ld 23, 328(1)
  0602734  ld 24, 336(1)
  0602738  ld 25, 344(1)
  060273c  ld 26, 352(1)
  0602740  ld 27, 360(1)
  0602744  ld 28, 368(1)
  0602748  ld 29, 376(1)
  060274c  ld 30, 384(1)
  0602750  ld 31, 392(1)
  0602754  addi 1, 1, 400
  0602758  blr
  060275c  clrldi 6, 30, 32
  0602760  extsh 4, 4
  0602764  extsh 11, 11
  0602768  extsh 7, 7
  060276c  extsh 29, 29
  0602770  lwz 0, 96(6)
  0602774  extsh 27, 27
  0602778  lwz 9, 160(6)
  060277c  extsh 28, 28
  0602780  lwz 10, 224(6)
  0602784  addi 30, 30, 4
  0602788  mullw 11, 11, 9
  060278c  lwz 9, 192(6)
  0602790  srawi 11, 11, 11
  0602794  mullw 27, 27, 10
  0602798  mullw 29, 29, 9
  060279c  srawi 29, 29, 11
  06027a0  lwz 10, 0(6)
  06027a4  lwz 25, 32(6)
  06027a8  srawi 27, 27, 11
  06027ac  mullw 4, 4, 0
  06027b0  lwz 0, 64(6)
  06027b4  srawi 4, 4, 11
  06027b8  mullw 28, 28, 25
  06027bc  sub 5, 11, 4
  06027c0  add 4, 4, 11
  06027c4  extsh 11, 8
  06027c8  lwz 8, 128(6)
  06027cc  srawi 28, 28, 11
  06027d0  mullw 11, 11, 8
  06027d4  srawi 11, 11, 11
  06027d8  mulli 3, 5, -5352
  06027dc  srawi 3, 3, 11
  06027e0  clrldi 8, 31, 32
  06027e4  addi 31, 31, 4
  06027e8  mullw 7, 7, 0
  06027ec  lhz 0, 0(24)
  06027f0  srawi 7, 7, 11
  06027f4  addi 24, 24, 2
  06027f8  sub 9, 7, 29
  06027fc  extsh 0, 0
  0602800  add 7, 7, 29
  0602804  mulli 9, 9, 2896
  0602808  srawi 9, 9, 11
  060280c  mullw 0, 0, 10
  0602810  srawi 0, 0, 11
  0602814  sub 9, 9, 7
  0602818  sub 6, 0, 11
  060281c  add 0, 0, 11
  0602820  sub 29, 6, 9
  0602824  add 6, 6, 9
  0602828  sub 9, 28, 27
  060282c  add 28, 28, 27
  0602830  add 5, 5, 9
  0602834  sub 11, 28, 4
  0602838  mulli 9, 9, 2217
  060283c  mulli 11, 11, 2896
  0602840  add 4, 4, 28
  0602844  srawi 11, 11, 11
  0602848  srawi 9, 9, 11
  060284c  sub 26, 0, 7
  0602850  add 0, 0, 7
  0602854  mulli 5, 5, 3784
  0602858  srawi 5, 5, 11
  060285c  sub 10, 0, 4
  0602860  add 3, 5, 3
  0602864  sub 9, 9, 5
  0602868  sub 3, 3, 4
  060286c  add 0, 0, 4
  0602870  sub 11, 11, 3
  0602874  stw 10, 224(8)
  0602878  add 9, 9, 11
  060287c  sub 10, 6, 3
  0602880  sub 7, 29, 11
  0602884  stw 0, 0(8)
  0602888  add 6, 6, 3
  060288c  sub 0, 26, 9
  0602890  add 29, 29, 11
  0602894  add 26, 26, 9
  0602898  stw 0, 96(8)
  060289c  stw 6, 32(8)
  06028a0  stw 10, 192(8)
  06028a4  stw 29, 64(8)
  06028a8  stw 7, 160(8)
  06028ac  stw 26, 128(8)
  06028b0  bdnz 0x602510
  06028b4  b 0x60259c

FUN_006028b8:   # 0x6028b8, 0x60c bytes
  06028b8  stdu 1, -384(1)
  06028bc  std 19, 280(1)
  06028c0  std 22, 304(1)
  06028c4  std 25, 328(1)
  06028c8  std 16, 256(1)
  06028cc  std 17, 264(1)
  06028d0  std 18, 272(1)
  06028d4  std 20, 288(1)
  06028d8  std 21, 296(1)
  06028dc  std 23, 312(1)
  06028e0  std 24, 320(1)
  06028e4  std 26, 336(1)
  06028e8  std 27, 344(1)
  06028ec  std 28, 352(1)
  06028f0  std 29, 360(1)
  06028f4  std 30, 368(1)
  06028f8  std 31, 376(1)
  06028fc  lwz 11, 8(4)
  0602900  mr 19, 4
  0602904  mr 22, 3
  0602908  lwz 30, 4(4)
  060290c  cmplwi 7, 11, 2
  0602910  lwz 10, 0(4)
  0602914  mr 25, 5
  0602918  bt 29, 0x602934
  060291c  clrldi 9, 30, 32
  0602920  addi 30, 30, 4
  0602924  lwz 0, 0(9)
  0602928  sld 0, 0, 11
  060292c  addi 11, 11, 32
  0602930  or 10, 10, 0
  0602934  clrlwi 18, 10, 29
  0602938  li 0, 16
  060293c  li 9, 96
  0602940  cmpwi 7, 18, -1
  0602944  stb 0, 180(1)
  0602948  stb 9, 181(1)
  060294c  li 0, -80
  0602950  li 9, 2
  0602954  stb 0, 182(1)
  0602958  stb 9, 183(1)
  060295c  addi 3, 11, -3
  0602960  rldicl 12, 10, 61, 3
  0602964  bt- 30, 0x602af0
  0602968  li 0, 1
  060296c  li 28, 0
  0602970  slw 24, 0, 18
  0602974  addi 23, 1, 180
  0602978  addi 26, 1, 184
  060297c  li 27, 0
  0602980  li 17, 0
  0602984  addi 20, 1, 48
  0602988  cmpwi 7, 27, 0
  060298c  clrldi 0, 27, 32
  0602990  li 10, 0
  0602994  neg 7, 24
  0602998  mtctr 0
  060299c  bf 29, 0x602a14
  06029a0  cmpwi 7, 3, 0
  06029a4  clrldi 9, 30, 32
  06029a8  addi 3, 3, -1
  06029ac  bf 30, 0x6029bc
  06029b0  addi 30, 30, 4
  06029b4  lwz 12, 0(9)
  06029b8  li 3, 31
  06029bc  clrlwi 9, 12, 31
  06029c0  add 0, 10, 20
  06029c4  cmpwi 7, 9, 0
  06029c8  cmpw 6, 25, 28
  06029cc  clrldi 11, 0, 32
  06029d0  addi 10, 10, 1
  06029d4  srwi 12, 12, 1
  06029d8  mr 8, 7
  06029dc  bt 30, 0x602a10
  06029e0  lbz 0, 0(11)
  06029e4  addi 28, 28, 1
  06029e8  add 0, 22, 0
  06029ec  clrldi 11, 0, 32
  06029f0  lbz 9, 0(11)
  06029f4  extsb 0, 9
  06029f8  cmpwi 7, 0, 0
  06029fc  bt 28, 0x602a04
  0602a00  mr 8, 24
  0602a04  add 0, 0, 8
  0602a08  stb 0, 0(11)
  0602a0c  bt 26, 0x602af0
  0602a10  bdnz 0x6029a0
  0602a14  cmplw 7, 23, 26
  0602a18  bf- 28, 0x602a84
  0602a1c  mr 29, 23
  0602a20  li 16, 0
  0602a24  neg 21, 24
  0602a28  clrldi 31, 29, 32
  0602a2c  lbz 11, 0(31)
  0602a30  cmpwi 7, 11, 0
  0602a34  bt 30, 0x602a78
  0602a38  cmpwi 7, 3, 0
  0602a3c  bt 30, 0x602b44
  0602a40  addi 3, 3, -1
  0602a44  clrlwi 0, 12, 31
  0602a48  srwi 12, 12, 1
  0602a4c  cmpwi 7, 0, 0
  0602a50  bt 30, 0x602a78
  0602a54  clrlwi 0, 11, 30
  0602a58  cmpwi 7, 0, 1
  0602a5c  bt 30, 0x602c3c
  0602a60  cmplwi 7, 0, 1
  0602a64  bt 28, 0x602b58
  0602a68  cmpwi 7, 0, 2
  0602a6c  bt 30, 0x602e9c
  0602a70  cmpwi 7, 0, 3
  0602a74  bt 30, 0x602a98
  0602a78  addi 29, 29, 1
  0602a7c  cmplw 7, 29, 26
  0602a80  bt+ 28, 0x602a28
  0602a84  cmpw 7, 18, 17
  0602a88  bt- 30, 0x602af0
  0602a8c  srawi 24, 24, 1
  0602a90  addi 17, 17, 1
  0602a94  b 0x602988
  0602a98  cmpwi 7, 3, 0
  0602a9c  srwi 11, 11, 2
  0602aa0  bt 30, 0x602eb0
  0602aa4  addi 3, 3, -1
  0602aa8  clrlwi 0, 12, 31
  0602aac  srwi 12, 12, 1
  0602ab0  cmpwi 7, 0, 0
  0602ab4  mr 0, 21
  0602ab8  bf 30, 0x602ac0
  0602abc  mr 0, 24
  0602ac0  add 9, 11, 22
  0602ac4  cmpw 7, 25, 28
  0602ac8  clrldi 9, 9, 32
  0602acc  stb 0, 0(9)
  0602ad0  bt- 30, 0x602af0
  0602ad4  extsw 0, 27
  0602ad8  addi 28, 28, 1
  0602adc  add 9, 1, 0
  0602ae0  addi 27, 27, 1
  0602ae4  stb 11, 48(9)
  0602ae8  stb 16, 0(31)
  0602aec  b 0x602a78
  0602af0  stw 3, 8(19)
  0602af4  stw 30, 4(19)
  0602af8  stw 12, 0(19)
  0602afc  ld 16, 256(1)
  0602b00  ld 17, 264(1)
  0602b04  ld 18, 272(1)
  0602b08  ld 19, 280(1)
  0602b0c  ld 20, 288(1)
  0602b10  ld 21, 296(1)
  0602b14  ld 22, 304(1)
  0602b18  ld 23, 312(1)
  0602b1c  ld 24, 320(1)
  0602b20  ld 25, 328(1)
  0602b24  ld 26, 336(1)
  0602b28  ld 27, 344(1)
  0602b2c  ld 28, 352(1)
  0602b30  ld 29, 360(1)
  0602b34  ld 30, 368(1)
  0602b38  ld 31, 376(1)
  0602b3c  addi 1, 1, 384
  0602b40  blr
  0602b44  clrldi 9, 30, 32
  0602b48  li 3, 31
  0602b4c  addi 30, 30, 4
  0602b50  lwz 12, 0(9)
  0602b54  b 0x602a44
  0602b58  srwi 10, 11, 2
  0602b5c  slwi 9, 10, 2
  0602b60  mr 11, 10
  0602b64  addi 9, 9, 17
  0602b68  stb 9, 0(31)
  0602b6c  cmpwi 7, 3, 0
  0602b70  bt 30, 0x602e38
  0602b74  addi 3, 3, -1
  0602b78  clrlwi 0, 12, 31
  0602b7c  srwi 12, 12, 1
  0602b80  cmpwi 7, 0, 0
  0602b84  bt 30, 0x602c80
  0602b88  addi 23, 23, -1
  0602b8c  slwi 9, 11, 2
  0602b90  clrldi 11, 23, 32
  0602b94  cmpwi 7, 3, 0
  0602b98  addi 9, 9, 3
  0602b9c  addi 10, 10, 1
  0602ba0  stb 9, 0(11)
  0602ba4  bt 30, 0x602cd8
  0602ba8  clrlwi 0, 12, 31
  0602bac  addi 3, 3, -1
  0602bb0  cmpwi 7, 0, 0
  0602bb4  srwi 12, 12, 1
  0602bb8  bt 30, 0x602cf8
  0602bbc  addi 23, 23, -1
  0602bc0  slwi 9, 10, 2
  0602bc4  clrldi 11, 23, 32
  0602bc8  cmpwi 7, 3, 0
  0602bcc  addi 9, 9, 3
  0602bd0  addi 10, 10, 1
  0602bd4  stb 9, 0(11)
  0602bd8  bt 30, 0x602d50
  0602bdc  clrlwi 0, 12, 31
  0602be0  addi 3, 3, -1
  0602be4  cmpwi 7, 0, 0
  0602be8  srwi 12, 12, 1
  0602bec  bt 30, 0x602d70
  0602bf0  addi 23, 23, -1
  0602bf4  slwi 9, 10, 2
  0602bf8  clrldi 11, 23, 32
  0602bfc  cmpwi 7, 3, 0
  0602c00  addi 9, 9, 3
  0602c04  stb 9, 0(11)
  0602c08  addi 11, 10, 1
  0602c0c  bt 30, 0x602dc8
  0602c10  clrlwi 0, 12, 31
  0602c14  addi 3, 3, -1
  0602c18  cmpwi 7, 0, 0
  0602c1c  srwi 12, 12, 1
  0602c20  bt 30, 0x602de8
  0602c24  addi 23, 23, -1
  0602c28  slwi 9, 11, 2
  0602c2c  clrldi 11, 23, 32
  0602c30  addi 9, 9, 3
  0602c34  stb 9, 0(11)
  0602c38  b 0x602a7c
  0602c3c  addi 7, 26, 1
  0602c40  srwi 9, 11, 2
  0602c44  addi 6, 7, 1
  0602c48  clrldi 5, 26, 32
  0602c4c  clrldi 7, 7, 32
  0602c50  clrldi 4, 6, 32
  0602c54  slwi 8, 9, 2
  0602c58  addi 26, 6, 1
  0602c5c  addi 11, 8, 2
  0602c60  addi 10, 8, 18
  0602c64  addi 9, 8, 34
  0602c68  addi 8, 8, 50
  0602c6c  stb 11, 0(31)
  0602c70  stb 10, 0(5)
  0602c74  stb 9, 0(7)
  0602c78  stb 8, 0(4)
  0602c7c  b 0x602a7c
  0602c80  cmpwi 7, 3, 0
  0602c84  bt 30, 0x602e4c
  0602c88  addi 3, 3, -1
  0602c8c  clrlwi 0, 12, 31
  0602c90  srwi 12, 12, 1
  0602c94  cmpwi 7, 0, 0
  0602c98  mr 0, 21
  0602c9c  bf 30, 0x602ca4
  0602ca0  mr 0, 24
  0602ca4  add 9, 22, 10
  0602ca8  cmpw 7, 25, 28
  0602cac  clrldi 9, 9, 32
  0602cb0  stb 0, 0(9)
  0602cb4  bt- 30, 0x602af0
  0602cb8  extsw 0, 27
  0602cbc  cmpwi 7, 3, 0
  0602cc0  add 9, 1, 0
  0602cc4  addi 28, 28, 1
  0602cc8  addi 27, 27, 1
  0602ccc  addi 10, 10, 1
  0602cd0  stb 11, 48(9)
  0602cd4  bf 30, 0x602ba8
  0602cd8  clrldi 9, 30, 32
  0602cdc  li 3, 31
  0602ce0  addi 30, 30, 4
  0602ce4  lwz 12, 0(9)
  0602ce8  clrlwi 0, 12, 31
  0602cec  srwi 12, 12, 1
  0602cf0  cmpwi 7, 0, 0
  0602cf4  bf 30, 0x602bbc
  0602cf8  cmpwi 7, 3, 0
  0602cfc  bt 30, 0x602e60
  0602d00  addi 3, 3, -1
  0602d04  clrlwi 0, 12, 31
  0602d08  srwi 12, 12, 1
  0602d0c  cmpwi 7, 0, 0
  0602d10  mr 0, 21
  0602d14  bf 30, 0x602d1c
  0602d18  mr 0, 24
  0602d1c  add 9, 22, 10
  0602d20  cmpw 7, 28, 25
  0602d24  clrldi 9, 9, 32
  0602d28  stb 0, 0(9)
  0602d2c  bt- 30, 0x602af0
  0602d30  extsw 0, 27
  0602d34  cmpwi 7, 3, 0
  0602d38  add 9, 1, 0
  0602d3c  addi 28, 28, 1
  0602d40  addi 27, 27, 1
  0602d44  stb 10, 48(9)
  0602d48  addi 10, 10, 1
  0602d4c  bf 30, 0x602bdc
  0602d50  clrldi 9, 30, 32
  0602d54  li 3, 31
  0602d58  addi 30, 30, 4
  0602d5c  lwz 12, 0(9)
  0602d60  clrlwi 0, 12, 31
  0602d64  srwi 12, 12, 1
  0602d68  cmpwi 7, 0, 0
  0602d6c  bf 30, 0x602bf0
  0602d70  cmpwi 7, 3, 0
  0602d74  bt 30, 0x602e74
  0602d78  addi 3, 3, -1
  0602d7c  clrlwi 0, 12, 31
  0602d80  srwi 12, 12, 1
  0602d84  cmpwi 7, 0, 0
  0602d88  mr 0, 21
  0602d8c  bf 30, 0x602d94
  0602d90  mr 0, 24
  0602d94  add 9, 22, 10
  0602d98  cmpw 7, 28, 25
  0602d9c  clrldi 9, 9, 32
  0602da0  stb 0, 0(9)
  0602da4  bt- 30, 0x602af0
  0602da8  extsw 0, 27
  0602dac  cmpwi 7, 3, 0
  0602db0  add 9, 1, 0
  0602db4  addi 28, 28, 1
  0602db8  addi 27, 27, 1
  0602dbc  addi 11, 10, 1
  0602dc0  stb 10, 48(9)
  0602dc4  bf 30, 0x602c10
  0602dc8  clrldi 9, 30, 32
  0602dcc  li 3, 31
  0602dd0  addi 30, 30, 4
  0602dd4  lwz 12, 0(9)
  0602dd8  clrlwi 0, 12, 31
  0602ddc  srwi 12, 12, 1
  0602de0  cmpwi 7, 0, 0
  0602de4  bf 30, 0x602c24
  0602de8  cmpwi 7, 3, 0
  0602dec  bt 30, 0x602e88
  0602df0  addi 3, 3, -1
  0602df4  clrlwi 0, 12, 31
  0602df8  srwi 12, 12, 1
  0602dfc  cmpwi 7, 0, 0
  0602e00  mr 0, 21
  0602e04  bf 30, 0x602e0c
  0602e08  mr 0, 24
  0602e0c  add 9, 22, 11
  0602e10  cmpw 7, 28, 25
  0602e14  clrldi 9, 9, 32
  0602e18  stb 0, 0(9)
  0602e1c  bt- 30, 0x602af0
  0602e20  extsw 0, 27
  0602e24  addi 28, 28, 1
  0602e28  add 9, 1, 0
  0602e2c  addi 27, 27, 1
  0602e30  stb 11, 48(9)
  0602e34  b 0x602a7c
  0602e38  clrldi 9, 30, 32
  0602e3c  li 3, 31
  0602e40  addi 30, 30, 4
  0602e44  lwz 12, 0(9)
  0602e48  b 0x602b78
  0602e4c  clrldi 9, 30, 32
  0602e50  li 3, 31
  0602e54  addi 30, 30, 4
  0602e58  lwz 12, 0(9)
  0602e5c  b 0x602c8c
  0602e60  clrldi 9, 30, 32
  0602e64  li 3, 31
  0602e68  addi 30, 30, 4
  0602e6c  lwz 12, 0(9)
  0602e70  b 0x602d04
  0602e74  clrldi 9, 30, 32
  0602e78  li 3, 31
  0602e7c  addi 30, 30, 4
  0602e80  lwz 12, 0(9)
  0602e84  b 0x602d7c
  0602e88  clrldi 9, 30, 32
  0602e8c  li 3, 31
  0602e90  addi 30, 30, 4
  0602e94  lwz 12, 0(9)
  0602e98  b 0x602df4
  0602e9c  srwi 10, 11, 2
  0602ea0  addi 29, 29, 1
  0602ea4  mr 11, 10
  0602ea8  stb 16, 0(31)
  0602eac  b 0x602b6c
  0602eb0  clrldi 9, 30, 32
  0602eb4  li 3, 31
  0602eb8  addi 30, 30, 4
  0602ebc  lwz 12, 0(9)
  0602ec0  b 0x602aa8

FUN_00602ec8:   # 0x602ec8, 0x534 bytes
  0602ec8  stdu 1, -288(1)
  0602ecc  vspltisw 0, 0
  0602ed0  std 29, 264(1)
  0602ed4  mflr 0
  0602ed8  addi 29, 1, 112
  0602edc  li 9, 48
  0602ee0  clrldi 10, 29, 32
  0602ee4  std 18, 176(1)
  0602ee8  std 19, 184(1)
  0602eec  std 20, 192(1)
  0602ef0  std 21, 200(1)
  0602ef4  std 22, 208(1)
  0602ef8  std 23, 216(1)
  0602efc  std 24, 224(1)
  0602f00  std 25, 232(1)
  0602f04  std 26, 240(1)
  0602f08  std 27, 248(1)
  0602f0c  std 28, 256(1)
  0602f10  std 0, 304(1)
  0602f14  li 11, 16
  0602f18  stvx 0, 9, 10
  0602f1c  li 9, 32
  0602f20  mr 28, 7
  0602f24  mr 27, 3
  0602f28  mr 21, 4
  0602f2c  mr 3, 29
  0602f30  stvx 0, 11, 10
  0602f34  mr 4, 5
  0602f38  stvx 0, 9, 10
  0602f3c  mr 5, 6
  0602f40  stvx 0, 0, 10
  0602f44  mr 24, 8
  0602f48  bl 0x6028b8
  0602f4c  lbz 11, 0(28)
  0602f50  lbz 0, 0(29)
  0602f54  add 8, 28, 24
  0602f58  lbz 9, 1(29)
  0602f5c  add 6, 27, 21
  0602f60  add 0, 0, 11
  0602f64  lbz 10, 4(29)
  0602f68  clrldi 3, 8, 32
  0602f6c  stb 0, 0(27)
  0602f70  lbz 11, 1(28)
  0602f74  add 8, 24, 8
  0602f78  lbz 7, 5(29)
  0602f7c  add 9, 9, 11
  0602f80  lbz 5, 8(29)
  0602f84  stb 9, 1(27)
  0602f88  lbz 0, 2(28)
  0602f8c  lbz 11, 9(29)
  0602f90  add 10, 10, 0
  0602f94  lbz 4, 12(29)
  0602f98  stb 10, 2(27)
  0602f9c  lbz 0, 3(28)
  0602fa0  add 7, 7, 0
  0602fa4  stb 7, 3(27)
  0602fa8  lbz 0, 4(28)
  0602fac  lbz 10, 13(29)
  0602fb0  add 5, 5, 0
  0602fb4  stb 5, 4(27)
  0602fb8  lbz 0, 5(28)
  0602fbc  clrldi 5, 6, 32
  0602fc0  lbz 9, 2(29)
  0602fc4  add 6, 21, 6
  0602fc8  add 11, 11, 0
  0602fcc  stb 11, 5(27)
  0602fd0  lbz 0, 6(28)
  0602fd4  lbz 11, 3(29)
  0602fd8  add 4, 4, 0
  0602fdc  lbz 7, 6(29)
  0602fe0  stb 4, 6(27)
  0602fe4  lbz 0, 7(28)
  0602fe8  clrldi 28, 6, 32
  0602fec  lbz 4, 7(29)
  0602ff0  add 6, 21, 6
  0602ff4  add 10, 10, 0
  0602ff8  clrldi 23, 6, 32
  0602ffc  stb 10, 7(27)
  0603000  lbz 0, 0(3)
  0603004  clrldi 27, 8, 32
  0603008  add 8, 24, 8
  060300c  add 9, 9, 0
  0603010  clrldi 22, 8, 32
  0603014  stb 9, 0(5)
  0603018  lbz 0, 1(3)
  060301c  add 8, 24, 8
  0603020  add 6, 21, 6
  0603024  add 11, 11, 0
  0603028  clrldi 25, 8, 32
  060302c  stb 11, 1(5)
  0603030  lbz 0, 2(3)
  0603034  add 8, 24, 8
  0603038  clrldi 26, 6, 32
  060303c  add 7, 7, 0
  0603040  clrldi 19, 8, 32
  0603044  stb 7, 2(5)
  0603048  lbz 0, 3(3)
  060304c  add 8, 24, 8
  0603050  add 6, 21, 6
  0603054  add 4, 4, 0
  0603058  clrldi 18, 8, 32
  060305c  stb 4, 3(5)
  0603060  lbz 11, 4(3)
  0603064  add 24, 24, 8
  0603068  lbz 0, 10(29)
  060306c  clrldi 20, 6, 32
  0603070  lbz 9, 11(29)
  0603074  add 6, 21, 6
  0603078  add 0, 0, 11
  060307c  lbz 10, 14(29)
  0603080  add 21, 21, 6
  0603084  stb 0, 4(5)
  0603088  lbz 11, 5(3)
  060308c  clrldi 24, 24, 32
  0603090  lbz 7, 15(29)
  0603094  clrldi 21, 21, 32
  0603098  add 9, 9, 11
  060309c  lbz 4, 24(29)
  06030a0  stb 9, 5(5)
  06030a4  lbz 0, 6(3)
  06030a8  lbz 9, 25(29)
  06030ac  add 10, 10, 0
  06030b0  lbz 11, 44(29)
  06030b4  stb 10, 6(5)
  06030b8  lbz 0, 7(3)
  06030bc  lbz 10, 45(29)
  06030c0  add 7, 7, 0
  06030c4  lbz 3, 16(29)
  06030c8  stb 7, 7(5)
  06030cc  lbz 0, 0(27)
  06030d0  lbz 7, 17(29)
  06030d4  add 4, 4, 0
  06030d8  lbz 5, 20(29)
  06030dc  stb 4, 0(28)
  06030e0  lbz 0, 1(27)
  06030e4  lbz 4, 21(29)
  06030e8  add 9, 9, 0
  06030ec  stb 9, 1(28)
  06030f0  lbz 0, 2(27)
  06030f4  add 11, 11, 0
  06030f8  stb 11, 2(28)
  06030fc  lbz 0, 3(27)
  0603100  add 10, 10, 0
  0603104  stb 10, 3(28)
  0603108  lbz 0, 4(27)
  060310c  add 3, 3, 0
  0603110  stb 3, 4(28)
  0603114  lbz 0, 5(27)
  0603118  clrldi 3, 6, 32
  060311c  add 7, 7, 0
  0603120  stb 7, 5(28)
  0603124  lbz 0, 6(27)
  0603128  add 5, 5, 0
  060312c  stb 5, 6(28)
  0603130  lbz 0, 7(27)
  0603134  add 4, 4, 0
  0603138  stb 4, 7(28)
  060313c  lbz 11, 0(22)
  0603140  lbz 0, 26(29)
  0603144  lbz 9, 27(29)
  0603148  add 0, 0, 11
  060314c  lbz 10, 46(29)
  0603150  stb 0, 0(23)
  0603154  lbz 11, 1(22)
  0603158  lbz 8, 47(29)
  060315c  add 9, 9, 11
  0603160  lbz 7, 18(29)
  0603164  stb 9, 1(23)
  0603168  lbz 0, 2(22)
  060316c  lbz 9, 19(29)
  0603170  add 10, 10, 0
  0603174  lbz 11, 22(29)
  0603178  stb 10, 2(23)
  060317c  lbz 0, 3(22)
  0603180  lbz 10, 23(29)
  0603184  add 8, 8, 0
  0603188  lbz 5, 28(29)
  060318c  stb 8, 3(23)
  0603190  lbz 0, 4(22)
  0603194  lbz 8, 29(29)
  0603198  add 7, 7, 0
  060319c  lbz 4, 32(29)
  06031a0  stb 7, 4(23)
  06031a4  lbz 0, 5(22)
  06031a8  lbz 7, 33(29)
  06031ac  add 9, 9, 0
  06031b0  stb 9, 5(23)
  06031b4  lbz 0, 6(22)
  06031b8  add 11, 11, 0
  06031bc  stb 11, 6(23)
  06031c0  lbz 0, 7(22)
  06031c4  add 10, 10, 0
  06031c8  stb 10, 7(23)
  06031cc  lbz 0, 0(25)
  06031d0  add 5, 5, 0
  06031d4  stb 5, 0(26)
  06031d8  lbz 0, 1(25)
  06031dc  add 8, 8, 0
  06031e0  stb 8, 1(26)
  06031e4  lbz 0, 2(25)
  06031e8  add 4, 4, 0
  06031ec  stb 4, 2(26)
  06031f0  lbz 0, 3(25)
  06031f4  add 7, 7, 0
  06031f8  stb 7, 3(26)
  06031fc  lbz 11, 4(25)
  0603200  lbz 0, 48(29)
  0603204  lbz 9, 49(29)
  0603208  add 0, 0, 11
  060320c  lbz 10, 52(29)
  0603210  stb 0, 4(26)
  0603214  lbz 11, 5(25)
  0603218  lbz 8, 53(29)
  060321c  add 9, 9, 11
  0603220  lbz 7, 30(29)
  0603224  stb 9, 5(26)
  0603228  lbz 0, 6(25)
  060322c  lbz 9, 31(29)
  0603230  add 10, 10, 0
  0603234  lbz 11, 34(29)
  0603238  stb 10, 6(26)
  060323c  lbz 0, 7(25)
  0603240  lbz 10, 35(29)
  0603244  add 8, 8, 0
  0603248  lbz 6, 50(29)
  060324c  stb 8, 7(26)
  0603250  lbz 0, 0(19)
  0603254  lbz 8, 51(29)
  0603258  add 7, 7, 0
  060325c  lbz 5, 54(29)
  0603260  stb 7, 0(20)
  0603264  lbz 0, 1(19)
  0603268  lbz 7, 55(29)
  060326c  add 9, 9, 0
  0603270  stb 9, 1(20)
  0603274  lbz 0, 2(19)
  0603278  add 11, 11, 0
  060327c  stb 11, 2(20)
  0603280  lbz 0, 3(19)
  0603284  add 10, 10, 0
  0603288  stb 10, 3(20)
  060328c  lbz 0, 4(19)
  0603290  add 6, 6, 0
  0603294  stb 6, 4(20)
  0603298  lbz 0, 5(19)
  060329c  add 8, 8, 0
  06032a0  stb 8, 5(20)
  06032a4  lbz 0, 6(19)
  06032a8  add 5, 5, 0
  06032ac  stb 5, 6(20)
  06032b0  lbz 0, 7(19)
  06032b4  add 7, 7, 0
  06032b8  stb 7, 7(20)
  06032bc  lbz 11, 0(18)
  06032c0  lbz 0, 36(29)
  06032c4  lbz 9, 37(29)
  06032c8  add 0, 0, 11
  06032cc  lbz 10, 40(29)
  06032d0  stb 0, 0(3)
  06032d4  lbz 11, 1(18)
  06032d8  lbz 8, 41(29)
  06032dc  add 9, 9, 11
  06032e0  lbz 7, 56(29)
  06032e4  stb 9, 1(3)
  06032e8  lbz 0, 2(18)
  06032ec  lbz 9, 57(29)
  06032f0  add 10, 10, 0
  06032f4  lbz 11, 60(29)
  06032f8  stb 10, 2(3)
  06032fc  lbz 0, 3(18)
  0603300  lbz 10, 61(29)
  0603304  add 8, 8, 0
  0603308  lbz 6, 38(29)
  060330c  stb 8, 3(3)
  0603310  lbz 0, 4(18)
  0603314  lbz 8, 39(29)
  0603318  add 7, 7, 0
  060331c  lbz 5, 42(29)
  0603320  stb 7, 4(3)
  0603324  lbz 0, 5(18)
  0603328  lbz 7, 43(29)
  060332c  add 9, 9, 0
  0603330  stb 9, 5(3)
  0603334  lbz 0, 6(18)
  0603338  add 11, 11, 0
  060333c  stb 11, 6(3)
  0603340  lbz 0, 7(18)
  0603344  add 10, 10, 0
  0603348  stb 10, 7(3)
  060334c  lbz 0, 0(24)
  0603350  add 6, 6, 0
  0603354  stb 6, 0(21)
  0603358  lbz 0, 1(24)
  060335c  add 8, 8, 0
  0603360  stb 8, 1(21)
  0603364  lbz 0, 2(24)
  0603368  add 5, 5, 0
  060336c  stb 5, 2(21)
  0603370  lbz 0, 3(24)
  0603374  add 7, 7, 0
  0603378  stb 7, 3(21)
  060337c  lbz 10, 4(24)
  0603380  lbz 0, 58(29)
  0603384  lbz 9, 59(29)
  0603388  add 0, 0, 10
  060338c  lbz 11, 62(29)
  0603390  stb 0, 4(21)
  0603394  lbz 10, 5(24)
  0603398  lbz 8, 63(29)
  060339c  add 9, 9, 10
  06033a0  stb 9, 5(21)
  06033a4  lbz 0, 6(24)
  06033a8  add 11, 11, 0
  06033ac  stb 11, 6(21)
  06033b0  lbz 0, 7(24)
  06033b4  add 8, 8, 0
  06033b8  stb 8, 7(21)
  06033bc  ld 0, 304(1)
  06033c0  ld 18, 176(1)
  06033c4  ld 19, 184(1)
  06033c8  mtlr 0
  06033cc  ld 20, 192(1)
  06033d0  ld 21, 200(1)
  06033d4  ld 22, 208(1)
  06033d8  ld 23, 216(1)
  06033dc  ld 24, 224(1)
  06033e0  ld 25, 232(1)
  06033e4  ld 26, 240(1)
  06033e8  ld 27, 248(1)
  06033ec  ld 28, 256(1)
  06033f0  ld 29, 264(1)
  06033f4  addi 1, 1, 288
  06033f8  blr

FUN_006033fc:   # 0x6033fc, 0x198 bytes
  06033fc  stdu 1, -272(1)
  0603400  vspltisw 0, 0
  0603404  std 29, 248(1)
  0603408  mflr 0
  060340c  addi 29, 1, 112
  0603410  li 9, 48
  0603414  clrldi 10, 29, 32
  0603418  std 21, 184(1)
  060341c  std 22, 192(1)
  0603420  std 23, 200(1)
  0603424  std 24, 208(1)
  0603428  std 25, 216(1)
  060342c  std 26, 224(1)
  0603430  std 27, 232(1)
  0603434  std 28, 240(1)
  0603438  std 0, 288(1)
  060343c  li 11, 16
  0603440  stvx 0, 9, 10
  0603444  li 9, 32
  0603448  mr 28, 3
  060344c  mr 3, 29
  0603450  stvx 0, 11, 10
  0603454  stvx 0, 9, 10
  0603458  stvx 0, 0, 10
  060345c  bl 0x6028b8
  0603460  lhz 0, 0(29)
  0603464  lhz 9, 4(29)
  0603468  lhz 11, 8(29)
  060346c  lhz 10, 12(29)
  0603470  lhz 8, 2(29)
  0603474  lhz 7, 6(29)
  0603478  lhz 6, 10(29)
  060347c  lhz 5, 14(29)
  0603480  lhz 4, 24(29)
  0603484  lhz 3, 44(29)
  0603488  lhz 27, 16(29)
  060348c  lhz 26, 20(29)
  0603490  lhz 25, 26(29)
  0603494  lhz 24, 46(29)
  0603498  lhz 23, 18(29)
  060349c  lhz 22, 22(29)
  06034a0  lhz 21, 28(29)
  06034a4  sth 0, 0(28)
  06034a8  sth 9, 2(28)
  06034ac  sth 11, 4(28)
  06034b0  sth 10, 6(28)
  06034b4  sth 8, 8(28)
  06034b8  sth 7, 10(28)
  06034bc  sth 6, 12(28)
  06034c0  sth 5, 14(28)
  06034c4  sth 4, 16(28)
  06034c8  sth 3, 18(28)
  06034cc  sth 27, 20(28)
  06034d0  sth 26, 22(28)
  06034d4  sth 25, 24(28)
  06034d8  sth 24, 26(28)
  06034dc  sth 23, 28(28)
  06034e0  sth 22, 30(28)
  06034e4  sth 21, 32(28)
  06034e8  lhz 0, 62(29)
  06034ec  lhz 27, 56(29)
  06034f0  lhz 26, 60(29)
  06034f4  lhz 25, 38(29)
  06034f8  lhz 24, 42(29)
  06034fc  lhz 23, 58(29)
  0603500  lhz 9, 32(29)
  0603504  lhz 11, 48(29)
  0603508  lhz 10, 52(29)
  060350c  lhz 8, 30(29)
  0603510  lhz 7, 34(29)
  0603514  lhz 6, 50(29)
  0603518  lhz 5, 54(29)
  060351c  lhz 4, 36(29)
  0603520  lhz 3, 40(29)
  0603524  sth 0, 62(28)
  0603528  sth 9, 34(28)
  060352c  sth 11, 36(28)
  0603530  sth 10, 38(28)
  0603534  sth 8, 40(28)
  0603538  sth 7, 42(28)
  060353c  sth 6, 44(28)
  0603540  sth 5, 46(28)
  0603544  sth 4, 48(28)
  0603548  sth 3, 50(28)
  060354c  sth 27, 52(28)
  0603550  sth 26, 54(28)
  0603554  sth 25, 56(28)
  0603558  sth 24, 58(28)
  060355c  sth 23, 60(28)
  0603560  ld 0, 288(1)
  0603564  ld 21, 184(1)
  0603568  ld 22, 192(1)
  060356c  mtlr 0
  0603570  ld 23, 200(1)
  0603574  ld 24, 208(1)
  0603578  ld 25, 216(1)
  060357c  ld 26, 224(1)
  0603580  ld 27, 232(1)
  0603584  ld 28, 240(1)
  0603588  ld 29, 248(1)
  060358c  addi 1, 1, 272
  0603590  blr

FUN_00603598:   # 0x603598, 0xab4 bytes
  0603598  stdu 1, -464(1)
  060359c  vspltisw 0, 0
  06035a0  std 17, 344(1)
  06035a4  addi 17, 1, 48
  06035a8  li 9, 112
  06035ac  clrldi 10, 17, 32
  06035b0  std 15, 328(1)
  06035b4  std 21, 376(1)
  06035b8  std 16, 336(1)
  06035bc  std 18, 352(1)
  06035c0  std 19, 360(1)
  06035c4  std 20, 368(1)
  06035c8  std 22, 384(1)
  06035cc  std 23, 392(1)
  06035d0  std 24, 400(1)
  06035d4  std 25, 408(1)
  06035d8  std 26, 416(1)
  06035dc  std 27, 424(1)
  06035e0  std 28, 432(1)
  06035e4  std 29, 440(1)
  06035e8  std 30, 448(1)
  06035ec  std 31, 456(1)
  06035f0  li 11, 32
  06035f4  stvx 0, 9, 10
  06035f8  li 9, 48
  06035fc  li 6, 16
  0603600  li 8, 96
  0603604  mr 15, 4
  0603608  stvx 0, 11, 10
  060360c  li 11, 64
  0603610  stvx 0, 9, 10
  0603614  li 9, 80
  0603618  mr 21, 3
  060361c  stvx 0, 11, 10
  0603620  stvx 0, 9, 10
  0603624  stvx 0, 0, 10
  0603628  stvx 0, 6, 10
  060362c  stvx 0, 8, 10
  0603630  lwz 7, 8(4)
  0603634  lwz 26, 4(4)
  0603638  cmplwi 7, 7, 3
  060363c  lwz 10, 0(4)
  0603640  bt 29, 0x60365c
  0603644  clrldi 9, 26, 32
  0603648  addi 26, 26, 4
  060364c  lwz 0, 0(9)
  0603650  sld 0, 0, 7
  0603654  addi 7, 7, 32
  0603658  or 10, 10, 0
  060365c  clrlwi 11, 10, 28
  0603660  li 0, -80
  0603664  li 9, 7
  0603668  cmplwi 7, 11, 1
  060366c  stb 0, 246(1)
  0603670  stb 9, 247(1)
  0603674  li 0, 11
  0603678  li 9, 15
  060367c  stb 6, 244(1)
  0603680  stb 8, 245(1)
  0603684  stb 0, 248(1)
  0603688  stb 9, 249(1)
  060368c  addi 28, 7, -4
  0603690  rldicl 29, 10, 60, 4
  0603694  bf 29, 0x603b80
  0603698  addi 9, 11, -1
  060369c  li 0, 1
  06036a0  mr 25, 11
  06036a4  slw 12, 0, 9
  06036a8  subfic 24, 11, 31
  06036ac  addi 23, 11, 1
  06036b0  addi 30, 1, 244
  06036b4  addi 31, 1, 250
  06036b8  addi 20, 25, -1
  06036bc  li 0, 1
  06036c0  cmplw 7, 31, 30
  06036c4  slw 22, 0, 20
  06036c8  addi 19, 24, 1
  06036cc  addi 18, 22, -1
  06036d0  bf 29, 0x60373c
  06036d4  li 0, -1
  06036d8  mr 27, 30
  06036dc  srw 16, 0, 19
  06036e0  clrldi 3, 27, 32
  06036e4  lbz 11, 0(3)
  06036e8  cmpwi 7, 11, 0
  06036ec  bt 30, 0x603730
  06036f0  cmpwi 7, 28, 0
  06036f4  bt 30, 0x6037c4
  06036f8  addi 28, 28, -1
  06036fc  clrlwi 0, 29, 31
  0603700  srwi 29, 29, 1
  0603704  cmpwi 7, 0, 0
  0603708  bt 30, 0x603730
  060370c  clrlwi 0, 11, 30
  0603710  cmpwi 7, 0, 1
  0603714  bt 30, 0x603918
  0603718  cmplwi 7, 0, 1
  060371c  bt 28, 0x6037d8
  0603720  cmpwi 7, 0, 2
  0603724  bt 30, 0x603b2c
  0603728  cmpwi 7, 0, 3
  060372c  bt 30, 0x603758
  0603730  addi 27, 27, 1
  0603734  cmplw 7, 27, 31
  0603738  bt 28, 0x6036e0
  060373c  cmpwi 7, 20, 1
  0603740  mr 24, 19
  0603744  addi 23, 23, -1
  0603748  bt 30, 0x603b90
  060374c  srawi 12, 12, 1
  0603750  mr 25, 20
  0603754  b 0x6036b8
  0603758  cmplw 7, 28, 25
  060375c  clrldi 7, 29, 32
  0603760  bf 28, 0x60377c
  0603764  clrldi 9, 26, 32
  0603768  addi 26, 26, 4
  060376c  lwz 0, 0(9)
  0603770  sld 0, 0, 28
  0603774  addi 28, 28, 32
  0603778  or 7, 7, 0
  060377c  and 0, 16, 7
  0603780  and 9, 22, 0
  0603784  and 0, 18, 0
  0603788  cmpwi 9, 0
  060378c  or 0, 0, 12
  0603790  neg 10, 0
  0603794  bf 2, 0x60379c
  0603798  mr 10, 0
  060379c  rlwinm 9, 11, 31, 25, 30
  06037a0  addi 0, 20, 1
  06037a4  add 9, 9, 17
  06037a8  srd 29, 7, 0
  06037ac  clrldi 9, 9, 32
  06037b0  li 0, 0
  06037b4  sub 28, 28, 25
  06037b8  sth 10, 0(9)
  06037bc  stb 0, 0(3)
  06037c0  b 0x603730
  06037c4  clrldi 9, 26, 32
  06037c8  li 28, 31
  06037cc  addi 26, 26, 4
  06037d0  lwz 29, 0(9)
  06037d4  b 0x6036fc
  06037d8  srwi 4, 11, 2
  06037dc  slwi 9, 4, 2
  06037e0  addi 9, 9, 17
  06037e4  stb 9, 0(3)
  06037e8  cmpwi 7, 28, 0
  06037ec  bf 30, 0x603ab8
  06037f0  clrldi 9, 26, 32
  06037f4  mr 6, 24
  06037f8  addi 26, 26, 4
  06037fc  lwz 9, 0(9)
  0603800  clrlwi 0, 9, 31
  0603804  srwi 8, 9, 1
  0603808  cmpwi 7, 0, 0
  060380c  srw 5, 9, 23
  0603810  bt 30, 0x603afc
  0603814  mr 5, 8
  0603818  li 6, 31
  060381c  addi 30, 30, -1
  0603820  slwi 9, 4, 2
  0603824  clrldi 11, 30, 32
  0603828  addi 9, 9, 3
  060382c  stb 9, 0(11)
  0603830  cmpwi 7, 6, 0
  0603834  addi 3, 4, 1
  0603838  bf 30, 0x603a44
  060383c  clrldi 9, 26, 32
  0603840  mr 6, 24
  0603844  addi 26, 26, 4
  0603848  lwz 9, 0(9)
  060384c  clrlwi 0, 9, 31
  0603850  srwi 8, 9, 1
  0603854  cmpwi 7, 0, 0
  0603858  srw 4, 9, 23
  060385c  bt 30, 0x603a88
  0603860  mr 4, 8
  0603864  li 6, 31
  0603868  addi 30, 30, -1
  060386c  slwi 9, 3, 2
  0603870  clrldi 11, 30, 32
  0603874  addi 9, 9, 3
  0603878  stb 9, 0(11)
  060387c  cmpwi 7, 6, 0
  0603880  addi 3, 3, 1
  0603884  bf 30, 0x6039d0
  0603888  clrldi 9, 26, 32
  060388c  mr 6, 24
  0603890  addi 26, 26, 4
  0603894  lwz 9, 0(9)
  0603898  clrlwi 0, 9, 31
  060389c  srwi 8, 9, 1
  06038a0  cmpwi 7, 0, 0
  06038a4  srw 5, 9, 23
  06038a8  bt 30, 0x603a14
  06038ac  mr 5, 8
  06038b0  li 6, 31
  06038b4  addi 30, 30, -1
  06038b8  slwi 9, 3, 2
  06038bc  clrldi 11, 30, 32
  06038c0  addi 9, 9, 3
  06038c4  stb 9, 0(11)
  06038c8  cmpwi 7, 6, 0
  06038cc  addi 4, 3, 1
  06038d0  bf 30, 0x60395c
  06038d4  clrldi 9, 26, 32
  06038d8  mr 28, 24
  06038dc  addi 26, 26, 4
  06038e0  lwz 9, 0(9)
  06038e4  clrlwi 0, 9, 31
  06038e8  srwi 8, 9, 1
  06038ec  cmpwi 7, 0, 0
  06038f0  srw 29, 9, 23
  06038f4  bt 30, 0x6039a0
  06038f8  mr 29, 8
  06038fc  li 28, 31
  0603900  addi 30, 30, -1
  0603904  slwi 9, 4, 2
  0603908  clrldi 11, 30, 32
  060390c  addi 9, 9, 3
  0603910  stb 9, 0(11)
  0603914  b 0x603734
  0603918  addi 7, 31, 1
  060391c  srwi 9, 11, 2
  0603920  addi 6, 7, 1
  0603924  clrldi 5, 31, 32
  0603928  clrldi 7, 7, 32
  060392c  clrldi 4, 6, 32
  0603930  slwi 8, 9, 2
  0603934  addi 31, 6, 1
  0603938  addi 11, 8, 2
  060393c  addi 10, 8, 18
  0603940  addi 9, 8, 34
  0603944  addi 8, 8, 50
  0603948  stb 11, 0(3)
  060394c  stb 10, 0(5)
  0603950  stb 9, 0(7)
  0603954  stb 8, 0(4)
  0603958  b 0x603734
  060395c  clrlwi 0, 5, 31
  0603960  addi 28, 6, -1
  0603964  cmpwi 7, 0, 0
  0603968  srwi 29, 5, 1
  060396c  bf 30, 0x603900
  0603970  cmplw 7, 25, 28
  0603974  bf 29, 0x603b50
  0603978  clrldi 10, 26, 32
  060397c  mr 8, 29
  0603980  sub 11, 25, 28
  0603984  sub 7, 28, 25
  0603988  addi 26, 26, 4
  060398c  lwz 0, 0(10)
  0603990  slw 9, 0, 28
  0603994  srw 29, 0, 11
  0603998  or 8, 8, 9
  060399c  addi 28, 7, 32
  06039a0  and 9, 22, 8
  06039a4  and 0, 18, 8
  06039a8  cmpwi 9, 0
  06039ac  or 0, 0, 12
  06039b0  neg 11, 0
  06039b4  bf 2, 0x6039bc
  06039b8  mr 11, 0
  06039bc  slwi 9, 4, 1
  06039c0  add 9, 9, 17
  06039c4  clrldi 9, 9, 32
  06039c8  sth 11, 0(9)
  06039cc  b 0x603734
  06039d0  clrlwi 0, 4, 31
  06039d4  addi 6, 6, -1
  06039d8  cmpwi 7, 0, 0
  06039dc  srwi 5, 4, 1
  06039e0  bf 30, 0x6038b4
  06039e4  cmplw 7, 25, 6
  06039e8  bf 29, 0x603b70
  06039ec  clrldi 10, 26, 32
  06039f0  mr 8, 5
  06039f4  sub 11, 25, 6
  06039f8  sub 7, 6, 25
  06039fc  addi 26, 26, 4
  0603a00  lwz 0, 0(10)
  0603a04  slw 9, 0, 6
  0603a08  srw 5, 0, 11
  0603a0c  or 8, 8, 9
  0603a10  addi 6, 7, 32
  0603a14  and 0, 22, 8
  0603a18  cmpwi 0, 0
  0603a1c  and 0, 18, 8
  0603a20  or 0, 0, 12
  0603a24  neg 11, 0
  0603a28  bf 2, 0x603a30
  0603a2c  mr 11, 0
  0603a30  slwi 9, 3, 1
  0603a34  add 9, 9, 17
  0603a38  clrldi 9, 9, 32
  0603a3c  sth 11, 0(9)
  0603a40  b 0x6038c8
  0603a44  clrlwi 0, 5, 31
  0603a48  addi 6, 6, -1
  0603a4c  cmpwi 7, 0, 0
  0603a50  srwi 4, 5, 1
  0603a54  bf 30, 0x603868
  0603a58  cmplw 7, 25, 6
  0603a5c  bf 29, 0x603b40
  0603a60  clrldi 10, 26, 32
  0603a64  mr 8, 4
  0603a68  sub 11, 25, 6
  0603a6c  sub 7, 6, 25
  0603a70  addi 26, 26, 4
  0603a74  lwz 0, 0(10)
  0603a78  slw 9, 0, 6
  0603a7c  srw 4, 0, 11
  0603a80  or 8, 8, 9
  0603a84  addi 6, 7, 32
  0603a88  and 9, 22, 8
  0603a8c  and 0, 18, 8
  0603a90  cmpwi 9, 0
  0603a94  or 0, 0, 12
  0603a98  neg 11, 0
  0603a9c  bf 2, 0x603aa4
  0603aa0  mr 11, 0
  0603aa4  slwi 9, 3, 1
  0603aa8  add 9, 9, 17
  0603aac  clrldi 9, 9, 32
  0603ab0  sth 11, 0(9)
  0603ab4  b 0x60387c
  0603ab8  clrlwi 0, 29, 31
  0603abc  addi 6, 28, -1
  0603ac0  cmpwi 7, 0, 0
  0603ac4  srwi 5, 29, 1
  0603ac8  bf 30, 0x60381c
  0603acc  cmplw 7, 25, 6
  0603ad0  bf 29, 0x603b60
  0603ad4  clrldi 10, 26, 32
  0603ad8  mr 8, 5
  0603adc  sub 11, 25, 6
  0603ae0  sub 7, 6, 25
  0603ae4  addi 26, 26, 4
  0603ae8  lwz 0, 0(10)
  0603aec  slw 9, 0, 6
  0603af0  srw 5, 0, 11
  0603af4  or 8, 8, 9
  0603af8  addi 6, 7, 32
  0603afc  and 0, 22, 8
  0603b00  cmpwi 0, 0
  0603b04  and 0, 18, 8
  0603b08  or 0, 0, 12
  0603b0c  neg 11, 0
  0603b10  bf 2, 0x603b18
  0603b14  mr 11, 0
  0603b18  slwi 9, 4, 1
  0603b1c  add 9, 9, 17
  0603b20  clrldi 9, 9, 32
  0603b24  sth 11, 0(9)
  0603b28  b 0x603830
  0603b2c  li 0, 0
  0603b30  srwi 4, 11, 2
  0603b34  addi 27, 27, 1
  0603b38  stb 0, 0(3)
  0603b3c  b 0x6037e8
  0603b40  srw 4, 5, 23
  0603b44  sub 6, 6, 25
  0603b48  srwi 8, 5, 1
  0603b4c  b 0x603a88
  0603b50  srw 29, 5, 23
  0603b54  sub 28, 28, 25
  0603b58  srwi 8, 5, 1
  0603b5c  b 0x6039a0
  0603b60  srw 5, 29, 23
  0603b64  sub 6, 6, 25
  0603b68  srwi 8, 29, 1
  0603b6c  b 0x603afc
  0603b70  srw 5, 4, 23
  0603b74  sub 6, 6, 25
  0603b78  srwi 8, 4, 1
  0603b7c  b 0x603a14
  0603b80  cmpwi 7, 11, 0
  0603b84  bt+ 30, 0x603c00
  0603b88  addi 31, 1, 250
  0603b8c  addi 30, 1, 244
  0603b90  cmplw 7, 30, 31
  0603b94  bf 28, 0x603c00
  0603b98  mr 27, 30
  0603b9c  li 24, 0
  0603ba0  mr 25, 17
  0603ba4  clrldi 3, 27, 32
  0603ba8  lbz 11, 0(3)
  0603bac  cmpwi 7, 11, 0
  0603bb0  bt 30, 0x603bf4
  0603bb4  cmpwi 7, 28, 0
  0603bb8  bt 30, 0x603d58
  0603bbc  addi 28, 28, -1
  0603bc0  clrlwi 0, 29, 31
  0603bc4  srwi 29, 29, 1
  0603bc8  cmpwi 7, 0, 0
  0603bcc  bt 30, 0x603bf4
  0603bd0  clrlwi 0, 11, 30
  0603bd4  cmpwi 7, 0, 1
  0603bd8  bt 30, 0x603e7c
  0603bdc  cmplwi 7, 0, 1
  0603be0  bt 28, 0x603d6c
  0603be4  cmpwi 7, 0, 2
  0603be8  bt 30, 0x603ff4
  0603bec  cmpwi 7, 0, 3
  0603bf0  bt 30, 0x604004
  0603bf4  addi 27, 27, 1
  0603bf8  cmplw 7, 27, 31
  0603bfc  bt 28, 0x603ba4
  0603c00  stw 28, 8(15)
  0603c04  stw 26, 4(15)
  0603c08  stw 29, 0(15)
  0603c0c  lwz 23, 44(17)
  0603c10  lhz 0, 2(17)
  0603c14  lwz 11, 8(17)
  0603c18  lwz 10, 16(17)
  0603c1c  lwz 8, 24(17)
  0603c20  lwz 7, 4(17)
  0603c24  lwz 6, 12(17)
  0603c28  lwz 5, 20(17)
  0603c2c  lwz 4, 28(17)
  0603c30  lwz 3, 48(17)
  0603c34  lwz 29, 88(17)
  0603c38  lwz 28, 32(17)
  0603c3c  lwz 27, 40(17)
  0603c40  lwz 26, 52(17)
  0603c44  lwz 25, 92(17)
  0603c48  lwz 24, 36(17)
  0603c4c  sth 0, 2(21)
  0603c50  stw 11, 4(21)
  0603c54  stw 10, 8(21)
  0603c58  stw 8, 12(21)
  0603c5c  stw 7, 16(21)
  0603c60  stw 6, 20(21)
  0603c64  stw 5, 24(21)
  0603c68  stw 4, 28(21)
  0603c6c  stw 3, 32(21)
  0603c70  stw 29, 36(21)
  0603c74  stw 28, 40(21)
  0603c78  stw 27, 44(21)
  0603c7c  stw 26, 48(21)
  0603c80  stw 25, 52(21)
  0603c84  stw 24, 56(21)
  0603c88  stw 23, 60(21)
  0603c8c  lwz 29, 72(17)
  0603c90  lwz 28, 80(17)
  0603c94  lwz 27, 112(17)
  0603c98  lwz 26, 120(17)
  0603c9c  lwz 25, 76(17)
  0603ca0  lwz 24, 84(17)
  0603ca4  lwz 23, 116(17)
  0603ca8  lwz 0, 124(17)
  0603cac  lwz 11, 56(17)
  0603cb0  lwz 10, 64(17)
  0603cb4  lwz 8, 96(17)
  0603cb8  lwz 7, 104(17)
  0603cbc  lwz 6, 60(17)
  0603cc0  lwz 5, 68(17)
  0603cc4  lwz 4, 100(17)
  0603cc8  lwz 3, 108(17)
  0603ccc  stw 0, 124(21)
  0603cd0  stw 11, 64(21)
  0603cd4  stw 10, 68(21)
  0603cd8  stw 8, 72(21)
  0603cdc  stw 7, 76(21)
  0603ce0  stw 6, 80(21)
  0603ce4  stw 5, 84(21)
  0603ce8  stw 4, 88(21)
  0603cec  stw 3, 92(21)
  0603cf0  stw 29, 96(21)
  0603cf4  stw 28, 100(21)
  0603cf8  stw 27, 104(21)
  0603cfc  stw 26, 108(21)
  0603d00  stw 25, 112(21)
  0603d04  stw 24, 116(21)
  0603d08  stw 23, 120(21)
  0603d0c  ld 15, 328(1)
  0603d10  ld 16, 336(1)
  0603d14  ld 17, 344(1)
  0603d18  ld 18, 352(1)
  0603d1c  ld 19, 360(1)
  0603d20  ld 20, 368(1)
  0603d24  ld 21, 376(1)
  0603d28  ld 22, 384(1)
  0603d2c  ld 23, 392(1)
  0603d30  ld 24, 400(1)
  0603d34  ld 25, 408(1)
  0603d38  ld 26, 416(1)
  0603d3c  ld 27, 424(1)
  0603d40  ld 28, 432(1)
  0603d44  ld 29, 440(1)
  0603d48  ld 30, 448(1)
  0603d4c  ld 31, 456(1)
  0603d50  addi 1, 1, 464
  0603d54  blr
  0603d58  clrldi 9, 26, 32
  0603d5c  li 28, 31
  0603d60  addi 26, 26, 4
  0603d64  lwz 29, 0(9)
  0603d68  b 0x603bc0
  0603d6c  srwi 6, 11, 2
  0603d70  slwi 9, 6, 2
  0603d74  addi 9, 9, 17
  0603d78  stb 9, 0(3)
  0603d7c  cmpwi 7, 28, 0
  0603d80  addi 10, 28, -1
  0603d84  bt 30, 0x603ef0
  0603d88  clrlwi 0, 29, 31
  0603d8c  srwi 7, 29, 1
  0603d90  cmpwi 7, 0, 0
  0603d94  bt 30, 0x603ec0
  0603d98  addi 30, 30, -1
  0603d9c  slwi 9, 6, 2
  0603da0  clrldi 11, 30, 32
  0603da4  addi 9, 9, 3
  0603da8  stb 9, 0(11)
  0603dac  cmpwi 7, 10, 0
  0603db0  addi 6, 6, 1
  0603db4  addi 10, 10, -1
  0603db8  bf 30, 0x603dcc
  0603dbc  clrldi 9, 26, 32
  0603dc0  li 10, 31
  0603dc4  addi 26, 26, 4
  0603dc8  lwz 7, 0(9)
  0603dcc  clrlwi 0, 7, 31
  0603dd0  srwi 7, 7, 1
  0603dd4  cmpwi 7, 0, 0
  0603dd8  bt 30, 0x603f14
  0603ddc  addi 30, 30, -1
  0603de0  slwi 9, 6, 2
  0603de4  clrldi 11, 30, 32
  0603de8  addi 9, 9, 3
  0603dec  stb 9, 0(11)
  0603df0  cmpwi 7, 10, 0
  0603df4  addi 6, 6, 1
  0603df8  addi 10, 10, -1
  0603dfc  bf 30, 0x603e10
  0603e00  clrldi 9, 26, 32
  0603e04  li 10, 31
  0603e08  addi 26, 26, 4
  0603e0c  lwz 7, 0(9)
  0603e10  clrlwi 0, 7, 31
  0603e14  srwi 7, 7, 1
  0603e18  cmpwi 7, 0, 0
  0603e1c  bt 30, 0x603f74
  0603e20  addi 30, 30, -1
  0603e24  slwi 9, 6, 2
  0603e28  clrldi 11, 30, 32
  0603e2c  addi 9, 9, 3
  0603e30  stb 9, 0(11)
  0603e34  cmpwi 7, 10, 0
  0603e38  addi 11, 6, 1
  0603e3c  addi 28, 10, -1
  0603e40  bf 30, 0x603e54
  0603e44  clrldi 9, 26, 32
  0603e48  li 28, 31
  0603e4c  addi 26, 26, 4
  0603e50  lwz 7, 0(9)
  0603e54  clrlwi 0, 7, 31
  0603e58  srwi 29, 7, 1
  0603e5c  cmpwi 7, 0, 0
  0603e60  bt 30, 0x603f44
  0603e64  addi 30, 30, -1
  0603e68  slwi 9, 11, 2
  0603e6c  clrldi 11, 30, 32
  0603e70  addi 9, 9, 3
  0603e74  stb 9, 0(11)
  0603e78  b 0x603bf8
  0603e7c  addi 7, 31, 1
  0603e80  srwi 9, 11, 2
  0603e84  addi 6, 7, 1
  0603e88  clrldi 5, 31, 32
  0603e8c  clrldi 7, 7, 32
  0603e90  clrldi 4, 6, 32
  0603e94  slwi 8, 9, 2
  0603e98  addi 31, 6, 1
  0603e9c  addi 11, 8, 2
  0603ea0  addi 10, 8, 18
  0603ea4  addi 9, 8, 34
  0603ea8  addi 8, 8, 50
  0603eac  stb 11, 0(3)
  0603eb0  stb 10, 0(5)
  0603eb4  stb 9, 0(7)
  0603eb8  stb 8, 0(4)
  0603ebc  b 0x603bf8
  0603ec0  cmpwi 7, 10, 0
  0603ec4  bt 30, 0x603fcc
  0603ec8  addi 10, 10, -1
  0603ecc  slwi 9, 6, 1
  0603ed0  clrlwi 0, 7, 31
  0603ed4  add 9, 9, 25
  0603ed8  neg 0, 0
  0603edc  clrldi 9, 9, 32
  0603ee0  ori 0, 0, 1
  0603ee4  srwi 7, 7, 1
  0603ee8  sth 0, 0(9)
  0603eec  b 0x603dac
  0603ef0  clrldi 9, 26, 32
  0603ef4  li 10, 31
  0603ef8  addi 26, 26, 4
  0603efc  lwz 29, 0(9)
  0603f00  clrlwi 0, 29, 31
  0603f04  srwi 7, 29, 1
  0603f08  cmpwi 7, 0, 0
  0603f0c  bt 30, 0x603ec0
  0603f10  b 0x603d98
  0603f14  cmpwi 7, 10, 0
  0603f18  bt 30, 0x603fa4
  0603f1c  addi 10, 10, -1
  0603f20  slwi 9, 6, 1
  0603f24  clrlwi 0, 7, 31
  0603f28  add 9, 9, 25
  0603f2c  neg 0, 0
  0603f30  clrldi 9, 9, 32
  0603f34  ori 0, 0, 1
  0603f38  srwi 7, 7, 1
  0603f3c  sth 0, 0(9)
  0603f40  b 0x603df0
  0603f44  cmpwi 7, 28, 0
  0603f48  bt 30, 0x603fe0
  0603f4c  addi 28, 28, -1
  0603f50  slwi 9, 11, 1
  0603f54  clrlwi 0, 29, 31
  0603f58  add 9, 9, 25
  0603f5c  neg 0, 0
  0603f60  clrldi 9, 9, 32
  0603f64  ori 0, 0, 1
  0603f68  srwi 29, 29, 1
  0603f6c  sth 0, 0(9)
  0603f70  b 0x603bf8
  0603f74  cmpwi 7, 10, 0
  0603f78  bt 30, 0x603fb8
  0603f7c  addi 10, 10, -1
  0603f80  slwi 9, 6, 1
  0603f84  clrlwi 0, 7, 31
  0603f88  add 9, 9, 25
  0603f8c  neg 0, 0
  0603f90  clrldi 9, 9, 32
  0603f94  ori 0, 0, 1
  0603f98  srwi 7, 7, 1
  0603f9c  sth 0, 0(9)
  0603fa0  b 0x603e34
  0603fa4  clrldi 9, 26, 32
  0603fa8  li 10, 31
  0603fac  addi 26, 26, 4
  0603fb0  lwz 7, 0(9)
  0603fb4  b 0x603f20
  0603fb8  clrldi 9, 26, 32
  0603fbc  li 10, 31
  0603fc0  addi 26, 26, 4
  0603fc4  lwz 7, 0(9)
  0603fc8  b 0x603f80
  0603fcc  clrldi 9, 26, 32
  0603fd0  li 10, 31
  0603fd4  addi 26, 26, 4
  0603fd8  lwz 7, 0(9)
  0603fdc  b 0x603ecc
  0603fe0  clrldi 9, 26, 32
  0603fe4  li 28, 31
  0603fe8  addi 26, 26, 4
  0603fec  lwz 29, 0(9)
  0603ff0  b 0x603f50
  0603ff4  srwi 6, 11, 2
  0603ff8  addi 27, 27, 1
  0603ffc  stb 24, 0(3)
  0604000  b 0x603d7c
  0604004  cmpwi 7, 28, 0
  0604008  bt 30, 0x604038
  060400c  addi 28, 28, -1
  0604010  rlwinm 9, 11, 31, 25, 30
  0604014  clrlwi 0, 29, 31
  0604018  add 9, 9, 25
  060401c  neg 0, 0
  0604020  clrldi 9, 9, 32
  0604024  ori 0, 0, 1
  0604028  srwi 29, 29, 1
  060402c  sth 0, 0(9)
  0604030  stb 24, 0(3)
  0604034  b 0x603bf4
  0604038  clrldi 9, 26, 32
  060403c  li 28, 31
  0604040  addi 26, 26, 4
  0604044  lwz 29, 0(9)
  0604048  b 0x604010

FUN_00604050:   # 0x604050, 0x34 bytes
  0604050  lbz 0, 0(4)
  0604054  mr 9, 3
  0604058  cmpwi 7, 0, 0
  060405c  bt 30, 0x604074
  0604060  stb 0, 0(9)
  0604064  lbzu 0, 1(4)
  0604068  addi 9, 9, 1
  060406c  cmpwi 7, 0, 0
  0604070  bf 30, 0x604060
  0604074  li 0, 0
  0604078  clrldi 3, 9, 32
  060407c  stb 0, 0(9)
  0604080  blr

FUN_00604088:   # 0x604088, 0x70 bytes
  0604088  rlwinm 0, 3, 0, 30, 30
  060408c  slwi 9, 4, 16
  0604090  cmpwi 7, 0, 0
  0604094  or 10, 9, 4
  0604098  bt 30, 0x6040a8
  060409c  sth 4, 0(3)
  06040a0  addi 5, 5, -1
  06040a4  addi 3, 3, 2
  06040a8  srwi 0, 5, 1
  06040ac  mr 9, 3
  06040b0  cmpwi 7, 0, 0
  06040b4  bt 30, 0x6040e0
  06040b8  clrldi 9, 0, 32
  06040bc  mr 11, 3
  06040c0  mtctr 9
  06040c4  nop
  06040c8  clrldi 9, 11, 32
  06040cc  addi 11, 11, 4
  06040d0  stw 10, 0(9)
  06040d4  bdnz 0x6040c8
  06040d8  slwi 0, 0, 2
  06040dc  add 9, 3, 0
  06040e0  clrlwi 0, 5, 31
  06040e4  cmpwi 7, 0, 0
  06040e8  bclr 12, 30
  06040ec  clrldi 9, 9, 32
  06040f0  sth 10, 0(9)
  06040f4  blr

FUN_006040f8:   # 0x6040f8, 0x24 bytes
  06040f8  slwi 5, 5, 2
  06040fc  add 0, 3, 5
  0604100  cmplw 7, 0, 3
  0604104  bclr 4, 29
  0604108  stw 4, 0(3)
  060410c  addi 3, 3, 4
  0604110  cmplw 7, 3, 0
  0604114  bt 28, 0x604108
  0604118  blr

FUN_00604120:   # 0x604120, 0x30 bytes
  0604120  lhz 0, 0(3)
  0604124  li 11, 0
  0604128  cmpwi 7, 0, 0
  060412c  bt 30, 0x604148
  0604130  addi 3, 3, 2
  0604134  addi 11, 11, 1
  0604138  clrldi 9, 3, 32
  060413c  lhz 0, 0(9)
  0604140  cmpwi 7, 0, 0
  0604144  bf 30, 0x604130
  0604148  clrldi 3, 11, 32
  060414c  blr

FUN_00604150:   # 0x604150, 0x5c bytes
  0604150  lhz 0, 0(3)
  0604154  lhz 9, 0(4)
  0604158  cmpw 7, 9, 0
  060415c  bf 30, 0x604184
  0604160  cmpwi 7, 9, 0
  0604164  bf 30, 0x604170
  0604168  b 0x6041a0
  060416c  bt 26, 0x6041a0
  0604170  lhzu 0, 2(3)
  0604174  lhzu 9, 2(4)
  0604178  cmpwi 6, 0, 0
  060417c  cmpw 7, 0, 9
  0604180  bt 30, 0x60416c
  0604184  cmplw 7, 0, 9
  0604188  li 3, -1
  060418c  bt 28, 0x604198
  0604190  li 3, 1
  0604194  bf 29, 0x6041a0
  0604198  extsw 3, 3
  060419c  blr
  06041a0  li 3, 0
  06041a4  extsw 3, 3
  06041a8  blr

FUN_006041ac:   # 0x6041ac, 0x94 bytes
  06041ac  cmpwi 7, 5, 0
  06041b0  mr 8, 3
  06041b4  mr 0, 4
  06041b8  bt 30, 0x604218
  06041bc  lhz 4, 0(4)
  06041c0  lhz 3, 0(3)
  06041c4  cmpw 7, 4, 3
  06041c8  bf 30, 0x604224
  06041cc  cmpwi 7, 3, 0
  06041d0  clrldi 5, 5, 32
  06041d4  li 10, 0
  06041d8  mtctr 5
  06041dc  bf 30, 0x604210
  06041e0  b 0x604218
  06041e4  slwi 9, 10, 1
  06041e8  add 11, 9, 0
  06041ec  add 9, 9, 8
  06041f0  clrldi 11, 11, 32
  06041f4  clrldi 9, 9, 32
  06041f8  lhz 4, 0(11)
  06041fc  lhz 3, 0(9)
  0604200  cmpw 7, 3, 4
  0604204  cmpwi 6, 3, 0
  0604208  bf 30, 0x604224
  060420c  bt 26, 0x604218
  0604210  addi 10, 10, 1
  0604214  bdnz 0x6041e4
  0604218  li 3, 0
  060421c  extsw 3, 3
  0604220  blr
  0604224  cmplw 7, 4, 3
  0604228  li 3, -1
  060422c  bt 29, 0x60421c
  0604230  li 3, 1
  0604234  bf 28, 0x604218
  0604238  extsw 3, 3
  060423c  blr

FUN_00604240:   # 0x604240, 0x10 bytes
  0604240  lis 4, 102
  0604244  addic 4, 4, 25576
  0604248  stw 4, 0(3)
  060424c  blr

FUN_00604250:   # 0x604250, 0x10 bytes
  0604250  lis 4, 102
  0604254  addic 4, 4, 25576
  0604258  stw 4, 0(3)
  060425c  blr

FUN_00604260:   # 0x604260, 0x40 bytes
  0604260  stdu 1, -112(1)
  0604264  mflr 0
  0604268  std 0, 128(1)
  060426c  ori 4, 3, 0
  0604270  cmpwi 4, 0
  0604274  bt 2, 0x604290
  0604278  lis 5, 102
  060427c  ori 4, 3, 0
  0604280  addic 5, 5, 25576
  0604284  stw 5, 0(4)
  0604288  bl 0x5e387c
  060428c  nop
  0604290  ld 0, 128(1)
  0604294  mtlr 0
  0604298  addi 1, 1, 112
  060429c  blr

FUN_006042a0:   # 0x6042a0, 0x40 bytes
  06042a0  stdu 1, -112(1)
  06042a4  mflr 0
  06042a8  std 0, 128(1)
  06042ac  ori 4, 3, 0
  06042b0  cmpwi 4, 0
  06042b4  bt 2, 0x6042d0
  06042b8  lis 5, 102
  06042bc  ori 4, 3, 0
  06042c0  addic 5, 5, 25576
  06042c4  stw 5, 0(4)
  06042c8  bl 0x5e387c
  06042cc  nop
  06042d0  ld 0, 128(1)
  06042d4  mtlr 0
  06042d8  addi 1, 1, 112
  06042dc  blr

FUN_006042e0:   # 0x6042e0, 0x2c bytes
  06042e0  ld 5, 8(4)
  06042e4  std 5, 8(3)
  06042e8  lwz 5, 16(4)
  06042ec  lwz 6, 20(4)
  06042f0  stw 5, 16(3)
  06042f4  lwz 5, 24(4)
  06042f8  stw 6, 20(3)
  06042fc  lwz 4, 28(4)
  0604300  stw 5, 24(3)
  0604304  stw 4, 28(3)
  0604308  blr

FUN_0060430c:   # 0x60430c, 0x4 bytes
  060430c  blr

FUN_00604310:   # 0x604310, 0x4 bytes
  0604310  blr

FUN_00604314:   # 0x604314, 0x10 bytes
  0604314  lis 4, 102
  0604318  addic 4, 4, 25616
  060431c  stw 4, 0(3)
  0604320  blr

FUN_00604324:   # 0x604324, 0x40 bytes
  0604324  stdu 1, -112(1)
  0604328  mflr 0
  060432c  std 0, 128(1)
  0604330  ori 4, 3, 0
  0604334  cmpwi 4, 0
  0604338  bt 2, 0x604354
  060433c  lis 5, 102
  0604340  ori 4, 3, 0
  0604344  addic 5, 5, 25616
  0604348  stw 5, 0(4)
  060434c  bl 0x5e387c
  0604350  nop
  0604354  ld 0, 128(1)
  0604358  mtlr 0
  060435c  addi 1, 1, 112
  0604360  blr

FUN_00604364:   # 0x604364, 0x8 bytes
  0604364  li 3, 0
  0604368  blr

FUN_0060436c:   # 0x60436c, 0xe0 bytes
  060436c  li 6, 16
  0604370  lvx 2, 0, 5
  0604374  vspltisw 6, 0
  0604378  addic 7, 5, 16
  060437c  vspltw 4, 2, 0
  0604380  addic 8, 5, 32
  0604384  vspltw 5, 2, 1
  0604388  li 10, 32
  060438c  lvx 3, 0, 4
  0604390  li 9, 48
  0604394  lvx 7, 6, 4
  0604398  addic 5, 5, 48
  060439c  vmaddfp 4, 3, 4, 6
  06043a0  vspltw 9, 2, 2
  06043a4  vmaddfp 5, 7, 5, 6
  06043a8  vspltw 2, 2, 3
  06043ac  lvx 8, 0, 7
  06043b0  lvx 12, 0, 8
  06043b4  vspltw 11, 8, 1
  06043b8  vspltw 0, 12, 0
  06043bc  lvx 1, 10, 4
  06043c0  lvx 15, 9, 4
  06043c4  lvx 16, 0, 5
  06043c8  vspltw 10, 8, 0
  06043cc  vmaddfp 11, 7, 11, 6
  06043d0  vspltw 14, 12, 1
  06043d4  vspltw 13, 8, 2
  06043d8  vmaddfp 4, 1, 9, 4
  06043dc  vmaddfp 2, 15, 2, 5
  06043e0  vspltw 8, 8, 3
  06043e4  vspltw 5, 16, 0
  06043e8  vmaddfp 9, 3, 0, 6
  06043ec  vspltw 0, 16, 1
  06043f0  vmaddfp 10, 3, 10, 6
  06043f4  vmaddfp 14, 7, 14, 6
  06043f8  vspltw 17, 12, 2
  06043fc  vspltw 12, 12, 3
  0604400  vmaddfp 3, 3, 5, 6
  0604404  vmaddfp 6, 7, 0, 6
  0604408  vspltw 5, 16, 3
  060440c  vmaddfp 8, 15, 8, 11
  0604410  vspltw 11, 16, 2
  0604414  vaddfp 2, 4, 2
  0604418  vmaddfp 4, 1, 17, 9
  060441c  vmaddfp 10, 1, 13, 10
  0604420  vmaddfp 7, 15, 12, 14
  0604424  vmaddfp 3, 1, 11, 3
  0604428  vmaddfp 5, 15, 5, 6
  060442c  vaddfp 8, 10, 8
  0604430  stvx 2, 0, 3
  0604434  vaddfp 4, 4, 7
  0604438  vaddfp 2, 3, 5
  060443c  stvx 8, 6, 3
  0604440  stvx 4, 10, 3
  0604444  stvx 2, 9, 3
  0604448  blr

FUN_0060444c:   # 0x60444c, 0x128 bytes
  060444c  stdu 1, -144(1)
  0604450  lis 4, 144
  0604454  lfs 1, 0(3)
  0604458  lfs 2, 16(3)
  060445c  li 5, 0
  0604460  addic 7, 4, -23532
  0604464  stfs 1, 112(1)
  0604468  lfs 1, 48(3)
  060446c  lis 4, 36
  0604470  stfs 2, 116(1)
  0604474  li 8, 8
  0604478  ori 4, 4, 7932
  060447c  addic 6, 1, 112
  0604480  lwz 7, 8(7)
  0604484  stfs 1, 120(1)
  0604488  lfs 1, 4(3)
  060448c  stw 5, 124(1)
  0604490  lfs 2, 20(3)
  0604494  stfs 1, 128(1)
  0604498  lfs 1, 52(3)
  060449c  stfs 2, 132(1)
  06044a0  stfs 1, 136(1)
  06044a4  li 3, 4
  06044a8  stw 5, 140(1)
  06044ac  lwz 5, 8(7)
  06044b0  mtctr 3
  06044b4  stw 4, 0(5)
  06044b8  lwz 5, 8(7)
  06044bc  ori 4, 6, 0
  06044c0  stw 8, 4(5)
  06044c4  lwz 5, 8(7)
  06044c8  addic 5, 5, 8
  06044cc  stw 5, 8(7)
  06044d0  lwz 8, 0(6)
  06044d4  stw 8, 0(5)
  06044d8  lwz 5, 8(7)
  06044dc  addic 8, 5, 4
  06044e0  stw 8, 8(7)
  06044e4  lwz 8, 4(6)
  06044e8  addic 6, 6, 8
  06044ec  stw 8, 4(5)
  06044f0  lwz 5, 8(7)
  06044f4  addic 5, 5, 4
  06044f8  stw 5, 8(7)
  06044fc  bdnz 0x6044d0
  0604500  lis 5, 144
  0604504  lis 6, 36
  0604508  ori 7, 3, 0
  060450c  ori 6, 6, 7932
  0604510  ori 3, 4, 0
  0604514  lwz 5, -23532(5)
  0604518  li 8, 8
  060451c  mtctr 7
  0604520  lwz 9, 8(5)
  0604524  stw 6, 0(9)
  0604528  lwz 4, 8(5)
  060452c  stw 8, 4(4)
  0604530  lwz 4, 8(5)
  0604534  addic 4, 4, 8
  0604538  stw 4, 8(5)
  060453c  lwz 6, 0(3)
  0604540  stw 6, 0(4)
  0604544  lwz 4, 8(5)
  0604548  addic 6, 4, 4
  060454c  stw 6, 8(5)
  0604550  lwz 6, 4(3)
  0604554  addic 3, 3, 8
  0604558  stw 6, 4(4)
  060455c  lwz 4, 8(5)
  0604560  addic 4, 4, 4
  0604564  stw 4, 8(5)
  0604568  bdnz 0x60453c
  060456c  addi 1, 1, 144
  0604570  blr
