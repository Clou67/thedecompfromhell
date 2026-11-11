# game/update/moby563.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M563_003b81e4:   # 0x3b81e4, 0x14 bytes
  03b81e4  lis 3, 132
  03b81e8  lis 4, 1
  03b81ec  addic 3, 3, 23284
  03b81f0  stw 4, 72(3)
  03b81f4  blr

M563_003b8208:   # 0x3b8208, 0x218 bytes
  03b8208  stdu 1, -176(1)
  03b820c  mflr 0
  03b8210  std 0, 192(1)
  03b8214  std 31, 168(1)
  03b8218  ori 31, 3, 0
  03b821c  std 30, 160(1)
  03b8220  lwz 3, 36(31)
  03b8224  lwz 30, 120(31)
  03b8228  lwz 3, 112(3)
  03b822c  lis 4, 60
  03b8230  lwz 3, 20(3)
  03b8234  stw 3, 464(30)
  03b8238  std 29, 152(1)
  03b823c  lwz 3, 36(31)
  03b8240  addi 29, 4, -32264
  03b8244  std 28, 144(1)
  03b8248  lwz 3, 112(3)
  03b824c  addic 28, 30, 352
  03b8250  lwz 3, 20(3)
  03b8254  stw 3, 468(30)
  03b8258  lwz 3, 36(31)
  03b825c  lwz 3, 112(3)
  03b8260  lwz 3, 20(3)
  03b8264  stw 3, 472(30)
  03b8268  lwz 3, 36(31)
  03b826c  lwz 3, 112(3)
  03b8270  lwz 3, 20(3)
  03b8274  stw 3, 476(30)
  03b8278  lwz 3, 36(31)
  03b827c  lwz 3, 112(3)
  03b8280  lwz 3, 20(3)
  03b8284  stw 3, 480(30)
  03b8288  lwz 3, 36(31)
  03b828c  lwz 3, 112(3)
  03b8290  lwz 3, 20(3)
  03b8294  stw 3, 484(30)
  03b8298  lwz 3, 36(31)
  03b829c  lwz 3, 112(3)
  03b82a0  lwz 3, 20(3)
  03b82a4  stw 3, 488(30)
  03b82a8  lwz 3, 36(31)
  03b82ac  lwz 3, 84(3)
  03b82b0  lwz 3, 20(3)
  03b82b4  stw 3, 492(30)
  03b82b8  lwz 3, 36(31)
  03b82bc  lwz 3, 112(3)
  03b82c0  lwz 3, 20(3)
  03b82c4  stw 3, 496(30)
  03b82c8  lwz 3, 36(31)
  03b82cc  lwz 3, 112(3)
  03b82d0  lwz 3, 20(3)
  03b82d4  stw 3, 500(30)
  03b82d8  lwz 3, 36(31)
  03b82dc  lwz 3, 112(3)
  03b82e0  lwz 3, 20(3)
  03b82e4  stw 3, 504(30)
  03b82e8  lwz 4, 36(31)
  03b82ec  ori 3, 31, 0
  03b82f0  lwz 5, 112(4)
  03b82f4  ori 4, 28, 0
  03b82f8  lwz 5, 20(5)
  03b82fc  stw 5, 508(30)
  03b8300  lwz 5, 36(31)
  03b8304  lwz 5, 112(5)
  03b8308  lwz 5, 20(5)
  03b830c  std 27, 136(1)
  03b8310  std 26, 128(1)
  03b8314  std 25, 120(1)
  03b8318  std 24, 112(1)
  03b831c  stw 5, 512(30)
  03b8320  bl 0x175644
  03b8324  nop
  03b8328  lis 3, 114
  03b832c  lfs 1, 0(29)
  03b8330  li 5, 0
  03b8334  li 7, 255
  03b8338  lfs 2, -3048(3)
  03b833c  li 8, 16
  03b8340  fmuls 1, 2, 1
  03b8344  lis 3, 114
  03b8348  li 6, 7
  03b834c  li 9, 10
  03b8350  li 11, 8
  03b8354  li 27, 12
  03b8358  li 26, 14
  03b835c  li 10, 11
  03b8360  li 12, 9
  03b8364  li 25, 13
  03b8368  li 24, 15
  03b836c  stfs 1, 572(30)
  03b8370  lfs 1, 4(29)
  03b8374  ori 4, 28, 0
  03b8378  fmuls 1, 2, 1
  03b837c  stfs 1, 556(30)
  03b8380  lfs 1, 8(29)
  03b8384  fmuls 3, 2, 1
  03b8388  stfs 3, 560(30)
  03b838c  lfs 3, -3052(3)
  03b8390  ori 3, 31, 0
  03b8394  fmuls 1, 3, 1
  03b8398  lis 31, 16128
  03b839c  stfs 1, 564(30)
  03b83a0  lfs 1, 12(29)
  03b83a4  stb 5, 528(30)
  03b83a8  stb 5, 529(30)
  03b83ac  fmuls 1, 2, 1
  03b83b0  stb 7, 530(30)
  03b83b4  stb 8, 531(30)
  03b83b8  stb 6, 532(30)
  03b83bc  stb 6, 533(30)
  03b83c0  stb 9, 592(30)
  03b83c4  stb 11, 593(30)
  03b83c8  stb 27, 595(30)
  03b83cc  stb 26, 594(30)
  03b83d0  stb 10, 768(30)
  03b83d4  stb 12, 769(30)
  03b83d8  stb 25, 771(30)
  03b83dc  stb 24, 770(30)
  03b83e0  stw 31, 576(30)
  03b83e4  stfs 1, 548(30)
  03b83e8  bl 0x175688
  03b83ec  nop
  03b83f0  ld 0, 192(1)
  03b83f4  mtlr 0
  03b83f8  ld 24, 112(1)
  03b83fc  ld 25, 120(1)
  03b8400  ld 26, 128(1)
  03b8404  ld 27, 136(1)
  03b8408  ld 28, 144(1)
  03b840c  ld 29, 152(1)
  03b8410  ld 30, 160(1)
  03b8414  ld 31, 168(1)
  03b8418  addi 1, 1, 176
  03b841c  blr

M563_003b8438:   # 0x3b8438, 0xd8 bytes
  03b8438  stdu 1, -272(1)
  03b843c  mflr 0
  03b8440  std 0, 288(1)
  03b8444  stfd 31, 264(1)
  03b8448  std 30, 248(1)
  03b844c  lis 4, 60
  03b8450  std 29, 240(1)
  03b8454  std 28, 232(1)
  03b8458  li 30, 0
  03b845c  addi 29, 4, -31712
  03b8460  std 31, 256(1)
  03b8464  addic 28, 1, 192
  03b8468  ori 31, 3, 0
  03b846c  li 4, 12
  03b8470  ori 5, 28, 0
  03b8474  lfs 1, 0(29)
  03b8478  stw 30, 220(1)
  03b847c  stw 30, 216(1)
  03b8480  fmr 31, 1
  03b8484  stw 30, 212(1)
  03b8488  stw 30, 208(1)
  03b848c  bl 0xf1114
  03b8490  nop
  03b8494  lfs 4, 12(29)
  03b8498  li 7, -1
  03b849c  lfs 3, 4(29)
  03b84a0  li 6, 1
  03b84a4  lfs 5, 8(29)
  03b84a8  ori 3, 31, 0
  03b84ac  lfs 7, 16(29)
  03b84b0  addic 4, 1, 208
  03b84b4  std 7, 144(1)
  03b84b8  ori 5, 28, 0
  03b84bc  std 6, 160(1)
  03b84c0  li 8, 10
  03b84c4  std 6, 168(1)
  03b84c8  li 9, 3
  03b84cc  std 7, 176(1)
  03b84d0  fmr 1, 31
  03b84d4  li 10, 4
  03b84d8  fmr 2, 31
  03b84dc  std 30, 184(1)
  03b84e0  fmr 6, 4
  03b84e4  bl 0x10e030
  03b84e8  nop
  03b84ec  ld 0, 288(1)
  03b84f0  mtlr 0
  03b84f4  lfd 31, 264(1)
  03b84f8  ld 28, 232(1)
  03b84fc  ld 29, 240(1)
  03b8500  ld 30, 248(1)
  03b8504  ld 31, 256(1)
  03b8508  addi 1, 1, 272
  03b850c  blr

UpdateMoby_563:   # 0x3b85b8, 0x2144 bytes
  03b85b8  stdu 1, -848(1)
  03b85bc  mflr 0
  03b85c0  std 0, 864(1)
  03b85c4  stfd 22, 768(1)
  03b85c8  stfd 23, 776(1)
  03b85cc  stfd 24, 784(1)
  03b85d0  stfd 25, 792(1)
  03b85d4  stfd 26, 800(1)
  03b85d8  stfd 27, 808(1)
  03b85dc  stfd 28, 816(1)
  03b85e0  stfd 29, 824(1)
  03b85e4  stfd 30, 832(1)
  03b85e8  stfd 31, 840(1)
  03b85ec  std 30, 752(1)
  03b85f0  std 31, 760(1)
  03b85f4  std 24, 704(1)
  03b85f8  lwz 30, 120(3)
  03b85fc  ori 31, 3, 0
  03b8600  std 29, 744(1)
  03b8604  lis 24, 60
  03b8608  li 29, 0
  03b860c  addi 24, 24, -31472
  03b8610  std 23, 696(1)
  03b8614  lwz 3, 56(30)
  03b8618  ori 23, 29, 0
  03b861c  std 28, 736(1)
  03b8620  std 27, 728(1)
  03b8624  std 26, 720(1)
  03b8628  std 25, 712(1)
  03b862c  std 22, 688(1)
  03b8630  std 21, 680(1)
  03b8634  cmpwi 3, 0
  03b8638  bf 2, 0x3b8648
  03b863c  lhz 3, 966(30)
  03b8640  cmpwi 3, 0
  03b8644  bt 2, 0x3b865c
  03b8648  lfs 1, 0(24)
  03b864c  lfs 2, 1000(30)
  03b8650  li 29, 1
  03b8654  fmuls 1, 2, 1
  03b8658  b 0x3b8660
  03b865c  lfs 1, 1000(30)
  03b8660  addic 5, 1, 400
  03b8664  ori 3, 31, 0
  03b8668  bl 0x1118d8
  03b866c  nop
  03b8670  addic 27, 30, 288
  03b8674  lfs 1, 4(24)
  03b8678  ori 3, 31, 0
  03b867c  li 4, 6
  03b8680  ori 5, 27, 0
  03b8684  bl 0x119a18
  03b8688  nop
  03b868c  lbz 3, 49(31)
  03b8690  cmpwi 3, 0
  03b8694  bt 2, 0x3b86d0
  03b8698  lis 4, 149
  03b869c  addic 3, 31, 16
  03b86a0  addic 4, 4, 5376
  03b86a4  bl 0x5e8548
  03b86a8  nop
  03b86ac  lfs 2, 8(24)
  03b86b0  fcmpu 0, 1, 2
  03b86b4  cror 6, 1, 2
  03b86b8  bt 6, 0x3b86d0
  03b86bc  ori 3, 31, 0
  03b86c0  bl 0x106360
  03b86c4  nop
  03b86c8  li 3, 21
  03b86cc  stb 3, 127(31)
  03b86d0  lfs 1, 400(1)
  03b86d4  lfs 31, 72(31)
  03b86d8  lfs 2, 16(31)
  03b86dc  lfs 3, 404(1)
  03b86e0  fsubs 1, 1, 2
  03b86e4  lfs 4, 20(31)
  03b86e8  fsubs 2, 3, 4
  03b86ec  bl 0x5e8338
  03b86f0  nop
  03b86f4  fmr 2, 1
  03b86f8  fmr 1, 31
  03b86fc  bl 0x5026a0
  03b8700  nop
  03b8704  addic 26, 31, 16
  03b8708  fmr 31, 1
  03b870c  addic 4, 1, 400
  03b8710  ori 3, 26, 0
  03b8714  bl 0x5e8588
  03b8718  nop
  03b871c  ori 3, 31, 0
  03b8720  fmr 30, 1
  03b8724  bl 0xefe40
  03b8728  nop
  03b872c  addic 3, 1, 128
  03b8730  fmr 29, 1
  03b8734  ori 4, 26, 0
  03b8738  bl 0x5e7e98
  03b873c  nop
  03b8740  addic 3, 1, 144
  03b8744  ori 4, 26, 0
  03b8748  bl 0x5e7e98
  03b874c  nop
  03b8750  addic 3, 30, 964
  03b8754  bl 0x4fffb4
  03b8758  nop
  03b875c  lbz 3, 32(31)
  03b8760  cmpwi 3, 11
  03b8764  bt 2, 0x3b8c40
  03b8768  cmpwi 3, 0
  03b876c  bt 2, 0x3b8c40
  03b8770  ori 3, 31, 0
  03b8774  lfs 28, 12(24)
  03b8778  lis 4, 161
  03b877c  li 5, 0
  03b8780  stw 23, 580(1)
  03b8784  bl 0x10675c
  03b8788  nop
  03b878c  ori 28, 3, 0
  03b8790  addic 5, 30, 32
  03b8794  ori 4, 28, 0
  03b8798  li 6, 0
  03b879c  addic 7, 1, 576
  03b87a0  li 9, 0
  03b87a4  addic 8, 1, 580
  03b87a8  ori 3, 31, 0
  03b87ac  li 10, 4
  03b87b0  bl 0x106840
  03b87b4  nop
  03b87b8  lis 4, 16051
  03b87bc  li 5, 350
  03b87c0  ori 4, 4, 13107
  03b87c4  cmpwi 28, 0
  03b87c8  ori 25, 3, 0
  03b87cc  stw 5, 224(30)
  03b87d0  stw 4, 232(30)
  03b87d4  bt 2, 0x3b8c40
  03b87d8  lwz 3, 580(1)
  03b87dc  cmpwi 3, 0
  03b87e0  bt 2, 0x3b8c40
  03b87e4  lbz 3, 32(31)
  03b87e8  cmpwi 3, 0
  03b87ec  bt 2, 0x3b8c40
  03b87f0  lhz 3, 964(30)
  03b87f4  cmpwi 3, 0
  03b87f8  bf 2, 0x3b8c40
  03b87fc  lis 3, 16256
  03b8800  stw 3, 588(1)
  03b8804  lwz 3, 32(28)
  03b8808  cmpwi 3, 0
  03b880c  bt 2, 0x3b886c
  03b8810  lis 4, 151
  03b8814  addic 4, 4, -25376
  03b8818  lwz 5, 4240(4)
  03b881c  cmpw 3, 5
  03b8820  bt 2, 0x3b8848
  03b8824  lfs 1, 16(31)
  03b8828  lfs 2, 16(3)
  03b882c  lfs 3, 20(31)
  03b8830  lfs 4, 20(3)
  03b8834  fsubs 1, 1, 2
  03b8838  fsubs 2, 3, 4
  03b883c  bl 0x5e8338
  03b8840  nop
  03b8844  b 0x3b8868
  03b8848  lfs 1, 16(31)
  03b884c  lfs 2, 128(4)
  03b8850  lfs 3, 20(31)
  03b8854  lfs 4, 132(4)
  03b8858  fsubs 1, 1, 2
  03b885c  fsubs 2, 3, 4
  03b8860  bl 0x5e8338
  03b8864  nop
  03b8868  b 0x3b8894
  03b886c  lis 3, 151
  03b8870  lfs 1, 16(31)
  03b8874  lfs 2, 20(31)
  03b8878  addic 3, 3, -25376
  03b887c  lfs 3, 128(3)
  03b8880  lfs 4, 132(3)
  03b8884  fsubs 1, 1, 3
  03b8888  fsubs 2, 2, 4
  03b888c  bl 0x5e8338
  03b8890  nop
  03b8894  lis 3, 114
  03b8898  stfs 1, 584(1)
  03b889c  lfs 2, 16(24)
  03b88a0  li 4, 9
  03b88a4  lfs 1, -3048(3)
  03b88a8  lfs 3, 32(30)
  03b88ac  fmuls 2, 1, 2
  03b88b0  lis 3, 114
  03b88b4  stfs 2, 208(30)
  03b88b8  lfs 2, 20(24)
  03b88bc  fmuls 2, 1, 2
  03b88c0  stfs 2, 212(30)
  03b88c4  lfs 4, 24(24)
  03b88c8  lfs 2, -3052(3)
  03b88cc  stb 23, 253(30)
  03b88d0  fmuls 4, 2, 4
  03b88d4  stw 4, 228(30)
  03b88d8  stfs 4, 216(30)
  03b88dc  lfs 4, 580(1)
  03b88e0  fsubs 3, 3, 4
  03b88e4  fcmpu 0, 3, 28
  03b88e8  stfs 3, 32(30)
  03b88ec  cror 6, 0, 2
  03b88f0  bt 6, 0x3b8924
  03b88f4  cmpwi 25, 3
  03b88f8  bt 1, 0x3b8910
  03b88fc  cmpwi 25, 0
  03b8900  bf 1, 0x3b8c40
  03b8904  cmpwi 25, 2
  03b8908  bf 1, 0x3b8924
  03b890c  b 0x3b8a0c
  03b8910  cmpwi 25, 6
  03b8914  bt 1, 0x3b8c40
  03b8918  cmpwi 25, 5
  03b891c  bf 1, 0x3b8b54
  03b8920  b 0x3b8a0c
  03b8924  lfs 3, 28(24)
  03b8928  addic 5, 1, 584
  03b892c  fmuls 1, 1, 3
  03b8930  addic 6, 30, 216
  03b8934  addic 7, 30, 220
  03b8938  stfs 1, 212(30)
  03b893c  lfs 1, 32(24)
  03b8940  fmuls 1, 2, 1
  03b8944  stfs 1, 216(30)
  03b8948  lfs 1, 36(24)
  03b894c  fmuls 1, 2, 1
  03b8950  stfs 1, 220(30)
  03b8954  lfs 1, 16(28)
  03b8958  lfs 2, 24(28)
  03b895c  stfs 1, 48(1)
  03b8960  stfs 2, 56(1)
  03b8964  lfs 1, 20(28)
  03b8968  lfs 2, 28(28)
  03b896c  stfs 1, 52(1)
  03b8970  stfs 2, 60(1)
  03b8974  ld 3, 48(1)
  03b8978  ld 4, 56(1)
  03b897c  bl 0x107de8
  03b8980  nop
  03b8984  addic 4, 30, 192
  03b8988  lfs 1, 584(1)
  03b898c  ori 3, 31, 0
  03b8990  li 6, 8
  03b8994  li 7, 1
  03b8998  li 8, 0
  03b899c  bl 0x10ad80
  03b89a0  nop
  03b89a4  lis 4, 16736
  03b89a8  lis 5, 16832
  03b89ac  li 6, 11
  03b89b0  ori 3, 31, 0
  03b89b4  stw 4, 272(30)
  03b89b8  stw 5, 276(30)
  03b89bc  li 5, -1
  03b89c0  stb 6, 32(31)
  03b89c4  li 4, 0
  03b89c8  bl 0xfd8d0
  03b89cc  nop
  03b89d0  li 5, 120
  03b89d4  ori 3, 31, 0
  03b89d8  addic 4, 30, 176
  03b89dc  stb 5, 183(30)
  03b89e0  bl 0x10c808
  03b89e4  nop
  03b89e8  lis 3, 114
  03b89ec  lfs 1, 40(24)
  03b89f0  lfs 2, 0(24)
  03b89f4  lfs 3, -3056(3)
  03b89f8  fmuls 1, 3, 1
  03b89fc  fdivs 1, 2, 1
  03b8a00  fmuls 1, 1, 2
  03b8a04  stfs 1, 996(30)
  03b8a08  b 0x3b8c40
  03b8a0c  lis 3, -16634
  03b8a10  ori 3, 3, 2706
  03b8a14  stw 3, 968(30)
  03b8a18  lbz 3, 82(31)
  03b8a1c  cmpwi 3, 4
  03b8a20  bf 2, 0x3b8a40
  03b8a24  lfs 1, 44(24)
  03b8a28  fcmpu 0, 29, 1
  03b8a2c  bt 0, 0x3b8a40
  03b8a30  lfs 1, 8(24)
  03b8a34  fcmpu 0, 29, 1
  03b8a38  cror 6, 0, 2
  03b8a3c  bt 6, 0x3b8c40
  03b8a40  lbz 4, 188(31)
  03b8a44  li 3, 3
  03b8a48  ori 4, 4, 5
  03b8a4c  stb 4, 188(31)
  03b8a50  bl 0x5e7e18
  03b8a54  nop
  03b8a58  ori 6, 3, 0
  03b8a5c  ori 3, 31, 0
  03b8a60  li 4, 5
  03b8a64  li 5, 0
  03b8a68  bl 0xfddc0
  03b8a6c  nop
  03b8a70  addic 3, 30, 352
  03b8a74  bl 0x176618
  03b8a78  nop
  03b8a7c  li 3, 9
  03b8a80  stb 3, 32(31)
  03b8a84  lwz 3, 32(28)
  03b8a88  lhz 3, 166(3)
  03b8a8c  cmpwi 3, 305
  03b8a90  bt 2, 0x3b8a9c
  03b8a94  cmpwi 3, 176
  03b8a98  bf 2, 0x3b8ac0
  03b8a9c  lis 3, 114
  03b8aa0  lfs 1, 40(24)
  03b8aa4  lfs 2, -3056(3)
  03b8aa8  lfs 3, 0(24)
  03b8aac  fmuls 1, 2, 1
  03b8ab0  lfs 2, 48(24)
  03b8ab4  fdivs 1, 3, 1
  03b8ab8  fmuls 1, 1, 2
  03b8abc  b 0x3b8ad8
  03b8ac0  lis 3, 114
  03b8ac4  lfs 1, 40(24)
  03b8ac8  lfs 2, -3056(3)
  03b8acc  lfs 3, 0(24)
  03b8ad0  fmuls 1, 2, 1
  03b8ad4  fdivs 1, 3, 1
  03b8ad8  stfs 1, 996(30)
  03b8adc  lfs 1, 16(28)
  03b8ae0  addic 5, 1, 584
  03b8ae4  lfs 2, 24(28)
  03b8ae8  addic 6, 30, 996
  03b8aec  stfs 1, 48(1)
  03b8af0  addic 7, 1, 588
  03b8af4  stfs 2, 56(1)
  03b8af8  lfs 1, 20(28)
  03b8afc  lfs 2, 28(28)
  03b8b00  stfs 1, 52(1)
  03b8b04  stfs 2, 60(1)
  03b8b08  ld 3, 48(1)
  03b8b0c  ld 4, 56(1)
  03b8b10  bl 0x107de8
  03b8b14  nop
  03b8b18  li 5, 120
  03b8b1c  ori 3, 31, 0
  03b8b20  addic 4, 30, 176
  03b8b24  stb 5, 183(30)
  03b8b28  bl 0x10c808
  03b8b2c  nop
  03b8b30  li 3, 15
  03b8b34  bl 0x5e7e18
  03b8b38  nop
  03b8b3c  sth 3, 964(30)
  03b8b40  li 3, 240
  03b8b44  bl 0x5e7e18
  03b8b48  nop
  03b8b4c  sth 3, 966(30)
  03b8b50  b 0x3b8c40
  03b8b54  li 3, 10
  03b8b58  bl 0x5e7e18
  03b8b5c  nop
  03b8b60  ori 6, 3, 0
  03b8b64  ori 3, 31, 0
  03b8b68  li 4, 6
  03b8b6c  li 5, 0
  03b8b70  bl 0xfddc0
  03b8b74  nop
  03b8b78  addic 3, 30, 352
  03b8b7c  bl 0x176618
  03b8b80  nop
  03b8b84  li 3, 1
  03b8b88  lis 4, 114
  03b8b8c  stb 3, 32(31)
  03b8b90  lfs 1, 40(24)
  03b8b94  lfs 2, -3056(4)
  03b8b98  lfs 3, 0(24)
  03b8b9c  fmuls 1, 2, 1
  03b8ba0  addic 5, 1, 584
  03b8ba4  addic 6, 30, 996
  03b8ba8  addic 7, 1, 588
  03b8bac  fdivs 1, 3, 1
  03b8bb0  stfs 1, 996(30)
  03b8bb4  lfs 1, 16(28)
  03b8bb8  lfs 2, 24(28)
  03b8bbc  stfs 1, 48(1)
  03b8bc0  stfs 2, 56(1)
  03b8bc4  lfs 1, 20(28)
  03b8bc8  lfs 2, 28(28)
  03b8bcc  stfs 1, 52(1)
  03b8bd0  stfs 2, 60(1)
  03b8bd4  ld 3, 48(1)
  03b8bd8  ld 4, 56(1)
  03b8bdc  bl 0x107de8
  03b8be0  nop
  03b8be4  lfs 1, 52(24)
  03b8be8  lfs 2, 584(1)
  03b8bec  bl 0x502578
  03b8bf0  nop
  03b8bf4  li 5, 120
  03b8bf8  stfs 1, 72(31)
  03b8bfc  ori 3, 31, 0
  03b8c00  addic 4, 30, 176
  03b8c04  stb 5, 183(30)
  03b8c08  bl 0x10c808
  03b8c0c  nop
  03b8c10  li 3, 30
  03b8c14  bl 0x5e7e18
  03b8c18  nop
  03b8c1c  sth 3, 964(30)
  03b8c20  li 3, 180
  03b8c24  bl 0x5e7e18
  03b8c28  nop
  03b8c2c  sth 3, 962(30)
  03b8c30  li 3, 240
  03b8c34  bl 0x5e7e18
  03b8c38  nop
  03b8c3c  sth 3, 966(30)
  03b8c40  li 3, 255
  03b8c44  stb 3, 164(31)
  03b8c48  lwz 3, 56(30)
  03b8c4c  cmpwi 3, 0
  03b8c50  bt 2, 0x3b8c64
  03b8c54  li 3, 240
  03b8c58  bl 0x5e7e18
  03b8c5c  nop
  03b8c60  sth 3, 966(30)
  03b8c64  addic 3, 30, 966
  03b8c68  stw 23, 56(30)
  03b8c6c  bl 0x4fffb4
  03b8c70  nop
  03b8c74  lbz 3, 32(31)
  03b8c78  cmpwi 3, 8
  03b8c7c  bf 2, 0x3b8e1c
  03b8c80  lbz 3, 82(31)
  03b8c84  cmpwi 3, 4
  03b8c88  bf 2, 0x3b8e1c
  03b8c8c  lfs 1, 44(24)
  03b8c90  fcmpu 0, 29, 1
  03b8c94  cror 6, 0, 2
  03b8c98  bt 6, 0x3b8e1c
  03b8c9c  lfs 1, 8(24)
  03b8ca0  fcmpu 0, 29, 1
  03b8ca4  cror 6, 1, 2
  03b8ca8  bt 6, 0x3b8e1c
  03b8cac  li 3, 2
  03b8cb0  stw 23, 612(1)
  03b8cb4  li 28, 1
  03b8cb8  li 5, 3
  03b8cbc  li 6, 4
  03b8cc0  li 4, 5
  03b8cc4  lis 8, 1
  03b8cc8  stw 3, 616(1)
  03b8ccc  lis 3, 151
  03b8cd0  stw 28, 620(1)
  03b8cd4  ori 8, 8, 1
  03b8cd8  stw 5, 624(1)
  03b8cdc  lis 7, 16256
  03b8ce0  stw 6, 628(1)
  03b8ce4  addic 5, 3, -25376
  03b8ce8  stw 4, 632(1)
  03b8cec  addic 25, 1, 352
  03b8cf0  stw 31, 368(1)
  03b8cf4  addic 4, 5, 128
  03b8cf8  stw 8, 372(1)
  03b8cfc  ori 5, 26, 0
  03b8d00  stw 7, 380(1)
  03b8d04  ori 3, 25, 0
  03b8d08  bl 0x5e81f0
  03b8d0c  nop
  03b8d10  lis 5, 114
  03b8d14  lfs 1, 56(24)
  03b8d18  ori 3, 25, 0
  03b8d1c  ori 4, 25, 0
  03b8d20  lfs 2, -3052(5)
  03b8d24  fmuls 1, 2, 1
  03b8d28  bl 0x5e7f98
  03b8d2c  nop
  03b8d30  stw 28, 384(1)
  03b8d34  addic 5, 1, 612
  03b8d38  addic 6, 1, 480
  03b8d3c  ori 3, 31, 0
  03b8d40  li 4, 6
  03b8d44  bl 0xf1238
  03b8d48  nop
  03b8d4c  ori 28, 23, 0
  03b8d50  addic 22, 1, 480
  03b8d54  addic 21, 1, 496
  03b8d58  ori 3, 22, 0
  03b8d5c  ori 4, 21, 0
  03b8d60  li 5, 9
  03b8d64  ori 6, 31, 0
  03b8d68  ori 7, 25, 0
  03b8d6c  bl 0x57820
  03b8d70  nop
  03b8d74  addic 28, 28, 1
  03b8d78  addic 22, 22, 16
  03b8d7c  cmpwi 28, 5
  03b8d80  addic 21, 21, 16
  03b8d84  bt 0, 0x3b8d58
  03b8d88  addic 28, 1, 176
  03b8d8c  addic 22, 1, 544
  03b8d90  addic 21, 1, 480
  03b8d94  ori 3, 28, 0
  03b8d98  ori 5, 22, 0
  03b8d9c  ori 4, 21, 0
  03b8da0  bl 0x5e7f54
  03b8da4  nop
  03b8da8  lfs 28, 48(24)
  03b8dac  ori 3, 28, 0
  03b8db0  fmr 1, 28
  03b8db4  ori 4, 28, 0
  03b8db8  bl 0x5e822c
  03b8dbc  nop
  03b8dc0  ori 3, 21, 0
  03b8dc4  ori 4, 22, 0
  03b8dc8  bl 0x5e8548
  03b8dcc  nop
  03b8dd0  ori 3, 28, 0
  03b8dd4  li 5, 16
  03b8dd8  fmuls 1, 1, 28
  03b8ddc  ori 6, 31, 0
  03b8de0  ori 7, 25, 0
  03b8de4  bl 0x5e598
  03b8de8  nop
  03b8dec  ori 3, 31, 0
  03b8df0  ori 5, 28, 0
  03b8df4  li 4, 17
  03b8df8  bl 0xf1114
  03b8dfc  nop
  03b8e00  fmr 1, 28
  03b8e04  ori 3, 28, 0
  03b8e08  li 5, 16
  03b8e0c  ori 6, 31, 0
  03b8e10  ori 7, 25, 0
  03b8e14  bl 0x5e598
  03b8e18  nop
  03b8e1c  addic 3, 30, 962
  03b8e20  bl 0x4fffb4
  03b8e24  nop
  03b8e28  lbz 3, 32(31)
  03b8e2c  lfs 2, 16(31)
  03b8e30  lfs 28, 72(31)
  03b8e34  lfs 4, 20(31)
  03b8e38  cmpwi 3, 5
  03b8e3c  lfs 1, 400(1)
  03b8e40  lfs 3, 404(1)
  03b8e44  bt 1, 0x3b8e80
  03b8e48  cmpwi 3, 5
  03b8e4c  bt 2, 0x3b9730
  03b8e50  cmpwi 3, 4
  03b8e54  cmpwi 1, 29, 0
  03b8e58  bt 2, 0x3b95fc
  03b8e5c  cmpwi 3, 3
  03b8e60  bt 2, 0x3b92a4
  03b8e64  cmpwi 3, 2
  03b8e68  bt 2, 0x3b91f8
  03b8e6c  cmpwi 3, 1
  03b8e70  bt 2, 0x3b8f70
  03b8e74  cmpwi 3, 0
  03b8e78  bt 2, 0x3b8eb4
  03b8e7c  b 0x3ba494
  03b8e80  cmpwi 3, 11
  03b8e84  bt 2, 0x3ba3a0
  03b8e88  cmpwi 3, 10
  03b8e8c  bt 2, 0x3ba1f8
  03b8e90  cmpwi 3, 9
  03b8e94  bt 2, 0x3b9d54
  03b8e98  cmpwi 3, 8
  03b8e9c  bt 2, 0x3b9cf4
  03b8ea0  cmpwi 3, 7
  03b8ea4  bt 2, 0x3b9c24
  03b8ea8  cmpwi 3, 6
  03b8eac  bt 2, 0x3b99b8
  03b8eb0  b 0x3ba494
  03b8eb4  lis 3, 16384
  03b8eb8  li 4, 2
  03b8ebc  li 5, 1
  03b8ec0  lis 7, 16256
  03b8ec4  stw 3, 32(30)
  03b8ec8  li 6, 8
  03b8ecc  sth 4, 36(30)
  03b8ed0  addic 3, 30, 944
  03b8ed4  stb 5, 40(30)
  03b8ed8  ori 4, 26, 0
  03b8edc  stw 7, 48(30)
  03b8ee0  stb 23, 41(30)
  03b8ee4  stb 23, 188(31)
  03b8ee8  stw 23, 992(30)
  03b8eec  sth 23, 966(30)
  03b8ef0  stb 6, 88(30)
  03b8ef4  stb 6, 90(30)
  03b8ef8  bl 0x5e7e98
  03b8efc  nop
  03b8f00  lbz 3, 289(30)
  03b8f04  cmpwi 3, 0
  03b8f08  bf 2, 0x3b8f20
  03b8f0c  ori 3, 31, 0
  03b8f10  li 4, 6
  03b8f14  ori 5, 27, 0
  03b8f18  bl 0xf0ea8
  03b8f1c  nop
  03b8f20  ori 3, 31, 0
  03b8f24  bl 0x3b8208
  03b8f28  lbz 3, 960(30)
  03b8f2c  cmpwi 3, 0
  03b8f30  bt 2, 0x3b8f64
  03b8f34  li 4, 3
  03b8f38  li 3, 10
  03b8f3c  stb 4, 32(31)
  03b8f40  bl 0x5e7e18
  03b8f44  nop
  03b8f48  ori 6, 3, 0
  03b8f4c  ori 3, 31, 0
  03b8f50  li 4, 11
  03b8f54  li 5, 0
  03b8f58  bl 0xfddc0
  03b8f5c  nop
  03b8f60  b 0x3ba494
  03b8f64  li 3, 1
  03b8f68  stb 3, 32(31)
  03b8f6c  b 0x3ba494
  03b8f70  lbz 3, 112(31)
  03b8f74  cmpwi 1, 29, 0
  03b8f78  rlwinm 3, 3, 0, 30, 30
  03b8f7c  cmpwi 3, 0
  03b8f80  bt 2, 0x3b9030
  03b8f84  bt 6, 0x3b8f98
  03b8f88  lfs 1, 0(24)
  03b8f8c  lfs 2, 1000(30)
  03b8f90  fmuls 1, 2, 1
  03b8f94  b 0x3b8f9c
  03b8f98  lfs 1, 1000(30)
  03b8f9c  fcmpu 0, 30, 1
  03b8fa0  cror 6, 0, 2
  03b8fa4  bt 6, 0x3b900c
  03b8fa8  stw 23, 636(1)
  03b8fac  li 4, 1
  03b8fb0  stw 23, 640(1)
  03b8fb4  li 3, 6
  03b8fb8  stw 23, 644(1)
  03b8fbc  stw 23, 648(1)
  03b8fc0  stw 23, 652(1)
  03b8fc4  stw 4, 656(1)
  03b8fc8  bl 0xfc620
  03b8fcc  nop
  03b8fd0  sldi 3, 3, 2
  03b8fd4  addc 3, 1, 3
  03b8fd8  clrldi 4, 3, 32
  03b8fdc  li 3, 20
  03b8fe0  lwz 4, 636(4)
  03b8fe4  extsw 28, 4
  03b8fe8  bl 0x5e7e18
  03b8fec  nop
  03b8ff0  ori 6, 3, 0
  03b8ff4  ori 3, 31, 0
  03b8ff8  ori 4, 28, 0
  03b8ffc  li 5, 0
  03b9000  bl 0xfddc0
  03b9004  nop
  03b9008  b 0x3b9030
  03b900c  li 3, 20
  03b9010  bl 0x5e7e18
  03b9014  nop
  03b9018  ori 6, 3, 0
  03b901c  ori 3, 31, 0
  03b9020  li 4, 0
  03b9024  li 5, 0
  03b9028  bl 0xfddc0
  03b902c  nop
  03b9030  lhz 3, 962(30)
  03b9034  cmpwi 3, 0
  03b9038  bf 2, 0x3ba494
  03b903c  lfs 1, 60(24)
  03b9040  fcmpu 0, 30, 1
  03b9044  cror 6, 1, 2
  03b9048  bt 6, 0x3b908c
  03b904c  lfs 1, 64(24)
  03b9050  fcmpu 0, 31, 1
  03b9054  cror 6, 1, 2
  03b9058  bt 6, 0x3b908c
  03b905c  li 3, 10
  03b9060  bl 0x5e7e18
  03b9064  nop
  03b9068  ori 6, 3, 0
  03b906c  ori 3, 31, 0
  03b9070  li 4, 4
  03b9074  li 5, 0
  03b9078  bl 0xfddc0
  03b907c  nop
  03b9080  li 3, 8
  03b9084  stb 3, 32(31)
  03b9088  b 0x3b916c
  03b908c  cmpwi 29, 0
  03b9090  bt 2, 0x3b90a4
  03b9094  lfs 1, 0(24)
  03b9098  lfs 2, 1000(30)
  03b909c  fmuls 1, 2, 1
  03b90a0  b 0x3b90a8
  03b90a4  lfs 1, 1000(30)
  03b90a8  fcmpu 0, 30, 1
  03b90ac  cror 6, 1, 2
  03b90b0  bt 6, 0x3b916c
  03b90b4  lbz 4, 188(31)
  03b90b8  cmpwi 1, 29, 0
  03b90bc  clrlwi 3, 4, 31
  03b90c0  cmpwi 3, 0
  03b90c4  bt 2, 0x3b9124
  03b90c8  bf 6, 0x3b9110
  03b90cc  lwz 3, 988(30)
  03b90d0  cmpwi 3, -1
  03b90d4  bt 2, 0x3b9110
  03b90d8  lis 4, 165
  03b90dc  slwi 3, 3, 2
  03b90e0  addic 4, 4, 7136
  03b90e4  extsw 5, 3
  03b90e8  addic 3, 1, 400
  03b90ec  lwzx 5, 4, 5
  03b90f0  addic 4, 5, 16
  03b90f4  lwz 5, 0(5)
  03b90f8  extsw 5, 5
  03b90fc  bl 0x104e44
  03b9100  nop
  03b9104  cmpwi 3, 0
  03b9108  bt 2, 0x3b916c
  03b910c  lbz 4, 188(31)
  03b9110  li 3, 5
  03b9114  ori 4, 4, 8
  03b9118  stb 3, 32(31)
  03b911c  stb 4, 188(31)
  03b9120  b 0x3b916c
  03b9124  li 3, 10
  03b9128  stw 23, 976(30)
  03b912c  bl 0x5e7e18
  03b9130  nop
  03b9134  ori 6, 3, 0
  03b9138  ori 3, 31, 0
  03b913c  li 4, 16
  03b9140  li 5, 0
  03b9144  bl 0xfddc0
  03b9148  nop
  03b914c  addic 3, 30, 352
  03b9150  bl 0x176618
  03b9154  nop
  03b9158  lbz 3, 188(31)
  03b915c  li 4, 10
  03b9160  ori 3, 3, 1
  03b9164  stb 4, 32(31)
  03b9168  stb 3, 188(31)
  03b916c  cmpwi 29, 0
  03b9170  bf 2, 0x3ba494
  03b9174  addic 4, 30, 944
  03b9178  ori 3, 26, 0
  03b917c  bl 0x5e8588
  03b9180  nop
  03b9184  lfs 2, 0(24)
  03b9188  fcmpu 0, 1, 2
  03b918c  cror 6, 0, 2
  03b9190  bt 6, 0x3ba494
  03b9194  lfs 1, 1000(30)
  03b9198  fcmpu 0, 30, 1
  03b919c  bt 1, 0x3b91e0
  03b91a0  lwz 3, 988(30)
  03b91a4  cmpwi 3, -1
  03b91a8  bt 2, 0x3ba494
  03b91ac  lis 4, 165
  03b91b0  slwi 3, 3, 2
  03b91b4  addic 4, 4, 7136
  03b91b8  extsw 5, 3
  03b91bc  addic 3, 1, 400
  03b91c0  lwzx 5, 4, 5
  03b91c4  addic 4, 5, 16
  03b91c8  lwz 5, 0(5)
  03b91cc  extsw 5, 5
  03b91d0  bl 0x104e44
  03b91d4  nop
  03b91d8  cmpwi 3, 0
  03b91dc  bf 2, 0x3ba494
  03b91e0  li 3, 6
  03b91e4  lbz 4, 188(31)
  03b91e8  stb 3, 32(31)
  03b91ec  ori 3, 4, 8
  03b91f0  stb 3, 188(31)
  03b91f4  b 0x3ba494
  03b91f8  lbz 3, 82(31)
  03b91fc  cmpwi 3, 2
  03b9200  bf 2, 0x3ba494
  03b9204  lbz 3, 112(31)
  03b9208  cmpwi 1, 29, 0
  03b920c  rlwinm 3, 3, 0, 30, 30
  03b9210  cmpwi 3, 0
  03b9214  bt 2, 0x3ba494
  03b9218  bf 6, 0x3b925c
  03b921c  lwz 3, 988(30)
  03b9220  cmpwi 3, -1
  03b9224  bt 2, 0x3b925c
  03b9228  lis 4, 165
  03b922c  slwi 3, 3, 2
  03b9230  addic 4, 4, 7136
  03b9234  extsw 5, 3
  03b9238  addic 3, 1, 400
  03b923c  lwzx 5, 4, 5
  03b9240  addic 4, 5, 16
  03b9244  lwz 5, 0(5)
  03b9248  extsw 5, 5
  03b924c  bl 0x104e44
  03b9250  nop
  03b9254  cmpwi 3, 0
  03b9258  bt 2, 0x3b9274
  03b925c  li 3, 5
  03b9260  lbz 4, 188(31)
  03b9264  stb 3, 32(31)
  03b9268  ori 3, 4, 8
  03b926c  stb 3, 188(31)
  03b9270  b 0x3ba494
  03b9274  li 3, 10
  03b9278  bl 0x5e7e18
  03b927c  nop
  03b9280  ori 6, 3, 0
  03b9284  ori 3, 31, 0
  03b9288  li 4, 0
  03b928c  li 5, 0
  03b9290  bl 0xfddc0
  03b9294  nop
  03b9298  li 3, 1
  03b929c  stb 3, 32(31)
  03b92a0  b 0x3ba494
  03b92a4  lbz 3, 82(31)
  03b92a8  cmpwi 3, 0
  03b92ac  bt 2, 0x3b92f8
  03b92b0  lbz 3, 112(31)
  03b92b4  rlwinm 3, 3, 0, 30, 30
  03b92b8  cmpwi 3, 0
  03b92bc  bt 2, 0x3b92f8
  03b92c0  li 3, 10
  03b92c4  bl 0x5e7e18
  03b92c8  nop
  03b92cc  ori 6, 3, 0
  03b92d0  ori 3, 31, 0
  03b92d4  li 4, 12
  03b92d8  li 5, 0
  03b92dc  bl 0xfddc0
  03b92e0  nop
  03b92e4  lfs 1, 68(24)
  03b92e8  lfs 2, 72(24)
  03b92ec  bl 0xfcbe8
  03b92f0  nop
  03b92f4  stfs 1, 88(31)
  03b92f8  ori 3, 31, 0
  03b92fc  lfs 1, 76(24)
  03b9300  bl 0x113e88
  03b9304  nop
  03b9308  cmpwi 3, 0
  03b930c  bt 2, 0x3b949c
  03b9310  lfs 29, 80(24)
  03b9314  ori 28, 23, 0
  03b9318  lfs 28, 84(24)
  03b931c  lfs 27, 56(24)
  03b9320  lfs 26, 20(24)
  03b9324  lfs 25, 60(24)
  03b9328  lfs 24, 88(24)
  03b932c  lfs 23, 92(24)
  03b9330  fmr 1, 29
  03b9334  stw 23, 224(1)
  03b9338  stw 23, 228(1)
  03b933c  fmr 2, 28
  03b9340  stw 23, 232(1)
  03b9344  stw 23, 236(1)
  03b9348  bl 0xfcbe8
  03b934c  nop
  03b9350  stfs 1, 224(1)
  03b9354  fmr 2, 28
  03b9358  fmr 1, 29
  03b935c  bl 0xfcbe8
  03b9360  nop
  03b9364  stfs 1, 228(1)
  03b9368  fmr 1, 29
  03b936c  fmr 2, 28
  03b9370  bl 0xfcbe8
  03b9374  nop
  03b9378  addic 27, 1, 192
  03b937c  stfs 1, 232(1)
  03b9380  ori 3, 31, 0
  03b9384  li 4, 0
  03b9388  ori 5, 27, 0
  03b938c  bl 0xf1114
  03b9390  nop
  03b9394  lfs 1, 72(31)
  03b9398  bl 0x5e8078
  03b939c  nop
  03b93a0  fmr 22, 1
  03b93a4  fmr 1, 27
  03b93a8  fmr 2, 26
  03b93ac  bl 0xfcbe8
  03b93b0  nop
  03b93b4  lis 25, 114
  03b93b8  lfs 2, -3052(25)
  03b93bc  fmuls 2, 1, 2
  03b93c0  lfs 1, 72(31)
  03b93c4  fmuls 2, 2, 22
  03b93c8  fneg 2, 2
  03b93cc  stfs 2, 208(1)
  03b93d0  bl 0x5e8128
  03b93d4  nop
  03b93d8  fmr 22, 1
  03b93dc  fmr 1, 27
  03b93e0  fmr 2, 26
  03b93e4  bl 0xfcbe8
  03b93e8  nop
  03b93ec  lfs 2, -3052(25)
  03b93f0  fmuls 3, 1, 2
  03b93f4  addic 22, 1, 224
  03b93f8  fmuls 1, 2, 25
  03b93fc  stw 23, 216(1)
  03b9400  ori 3, 22, 0
  03b9404  ori 4, 22, 0
  03b9408  fmuls 2, 3, 22
  03b940c  fneg 2, 2
  03b9410  stfs 2, 212(1)
  03b9414  bl 0x5e7f98
  03b9418  nop
  03b941c  lfs 1, 232(1)
  03b9420  lfs 2, -3052(25)
  03b9424  addic 3, 1, 256
  03b9428  addic 25, 1, 208
  03b942c  fmadds 1, 2, 25, 1
  03b9430  ori 4, 25, 0
  03b9434  ori 5, 22, 0
  03b9438  stfs 1, 232(1)
  03b943c  bl 0x502b08
  03b9440  nop
  03b9444  bl 0xfcc68
  03b9448  nop
  03b944c  stfs 1, 240(1)
  03b9450  bl 0xfcc68
  03b9454  nop
  03b9458  stfs 1, 244(1)
  03b945c  bl 0xfcc68
  03b9460  nop
  03b9464  stfs 1, 248(1)
  03b9468  addic 6, 1, 240
  03b946c  fmr 1, 24
  03b9470  ori 3, 31, 0
  03b9474  fmr 2, 23
  03b9478  ori 4, 25, 0
  03b947c  ori 5, 27, 0
  03b9480  li 7, 1516
  03b9484  li 10, 0
  03b9488  bl 0x291320
  03b948c  nop
  03b9490  addic 28, 28, 1
  03b9494  cmpwi 28, 20
  03b9498  bt 0, 0x3b9330
  03b949c  lhz 3, 962(30)
  03b94a0  cmpwi 3, 0
  03b94a4  bf 2, 0x3ba494
  03b94a8  lfs 1, 60(24)
  03b94ac  fcmpu 0, 30, 1
  03b94b0  cror 6, 1, 2
  03b94b4  bt 6, 0x3b9508
  03b94b8  lfs 1, 64(24)
  03b94bc  fcmpu 0, 31, 1
  03b94c0  cror 6, 1, 2
  03b94c4  bt 6, 0x3b9508
  03b94c8  lis 3, 114
  03b94cc  lfs 1, 96(24)
  03b94d0  li 4, 4
  03b94d4  li 5, 0
  03b94d8  lfs 2, -3056(3)
  03b94dc  ori 3, 31, 0
  03b94e0  fmuls 1, 2, 1
  03b94e4  fctiwz 1, 1
  03b94e8  stfd 1, 664(1)
  03b94ec  lwz 6, 668(1)
  03b94f0  extsw 6, 6
  03b94f4  bl 0xfddc0
  03b94f8  nop
  03b94fc  li 3, 8
  03b9500  stb 3, 32(31)
  03b9504  b 0x3ba494
  03b9508  cmpwi 29, 0
  03b950c  bt 2, 0x3b9520
  03b9510  lfs 1, 0(24)
  03b9514  lfs 2, 1000(30)
  03b9518  fmuls 1, 2, 1
  03b951c  b 0x3b9524
  03b9520  lfs 1, 1000(30)
  03b9524  fcmpu 0, 30, 1
  03b9528  cror 6, 1, 2
  03b952c  bt 6, 0x3ba494
  03b9530  lbz 3, 188(31)
  03b9534  cmpwi 1, 29, 0
  03b9538  clrlwi 4, 3, 31
  03b953c  cmpwi 4, 0
  03b9540  bt 2, 0x3b95a0
  03b9544  bf 6, 0x3b958c
  03b9548  lwz 4, 988(30)
  03b954c  cmpwi 4, -1
  03b9550  bt 2, 0x3b958c
  03b9554  lis 3, 165
  03b9558  slwi 4, 4, 2
  03b955c  addic 5, 3, 7136
  03b9560  extsw 4, 4
  03b9564  addic 3, 1, 400
  03b9568  lwzx 5, 5, 4
  03b956c  addic 4, 5, 16
  03b9570  lwz 5, 0(5)
  03b9574  extsw 5, 5
  03b9578  bl 0x104e44
  03b957c  nop
  03b9580  cmpwi 3, 0
  03b9584  bt 2, 0x3ba494
  03b9588  lbz 3, 188(31)
  03b958c  li 4, 5
  03b9590  ori 3, 3, 8
  03b9594  stb 4, 32(31)
  03b9598  stb 3, 188(31)
  03b959c  b 0x3ba494
  03b95a0  lis 3, 114
  03b95a4  stw 23, 976(30)
  03b95a8  lfs 1, 96(24)
  03b95ac  li 4, 16
  03b95b0  li 5, 0
  03b95b4  lfs 2, -3056(3)
  03b95b8  ori 3, 31, 0
  03b95bc  fmuls 1, 2, 1
  03b95c0  fctiwz 1, 1
  03b95c4  stfd 1, 664(1)
  03b95c8  lwz 6, 668(1)
  03b95cc  extsw 6, 6
  03b95d0  bl 0xfddc0
  03b95d4  nop
  03b95d8  addic 3, 30, 352
  03b95dc  bl 0x176618
  03b95e0  nop
  03b95e4  lbz 3, 188(31)
  03b95e8  li 4, 10
  03b95ec  ori 3, 3, 1
  03b95f0  stb 4, 32(31)
  03b95f4  stb 3, 188(31)
  03b95f8  b 0x3ba494
  03b95fc  bf 6, 0x3b960c
  03b9600  li 3, 1
  03b9604  stb 3, 32(31)
  03b9608  b 0x3ba494
  03b960c  lfs 1, 60(24)
  03b9610  fcmpu 0, 30, 1
  03b9614  cror 6, 1, 2
  03b9618  bt 6, 0x3b9678
  03b961c  lfs 1, 64(24)
  03b9620  fcmpu 0, 31, 1
  03b9624  cror 6, 1, 2
  03b9628  bt 6, 0x3b9678
  03b962c  lis 3, 114
  03b9630  lfs 1, 96(24)
  03b9634  li 4, 4
  03b9638  li 5, 0
  03b963c  lfs 2, -3056(3)
  03b9640  ori 3, 31, 0
  03b9644  fmuls 1, 2, 1
  03b9648  fctiwz 1, 1
  03b964c  stfd 1, 664(1)
  03b9650  lwz 6, 668(1)
  03b9654  extsw 6, 6
  03b9658  bl 0xfddc0
  03b965c  nop
  03b9660  addic 3, 30, 352
  03b9664  bl 0x176618
  03b9668  nop
  03b966c  li 3, 8
  03b9670  stb 3, 32(31)
  03b9674  b 0x3ba494
  03b9678  lwz 3, 988(30)
  03b967c  cmpwi 3, -1
  03b9680  bt 2, 0x3b96b8
  03b9684  lis 4, 165
  03b9688  slwi 3, 3, 2
  03b968c  addic 4, 4, 7136
  03b9690  extsw 5, 3
  03b9694  addic 3, 1, 400
  03b9698  lwzx 5, 4, 5
  03b969c  addic 4, 5, 16
  03b96a0  lwz 5, 0(5)
  03b96a4  extsw 5, 5
  03b96a8  bl 0x104e44
  03b96ac  nop
  03b96b0  cmpwi 3, 0
  03b96b4  bt 2, 0x3b96d0
  03b96b8  li 3, 5
  03b96bc  lbz 4, 188(31)
  03b96c0  stb 3, 32(31)
  03b96c4  ori 3, 4, 8
  03b96c8  stb 3, 188(31)
  03b96cc  b 0x3ba494
  03b96d0  lfs 1, 64(24)
  03b96d4  fcmpu 0, 31, 1
  03b96d8  cror 6, 0, 2
  03b96dc  bt 6, 0x3ba494
  03b96e0  lis 3, 114
  03b96e4  stw 23, 976(30)
  03b96e8  lfs 1, 96(24)
  03b96ec  li 4, 16
  03b96f0  li 5, 0
  03b96f4  lfs 2, -3056(3)
  03b96f8  ori 3, 31, 0
  03b96fc  fmuls 1, 2, 1
  03b9700  fctiwz 1, 1
  03b9704  stfd 1, 664(1)
  03b9708  lwz 6, 668(1)
  03b970c  extsw 6, 6
  03b9710  bl 0xfddc0
  03b9714  nop
  03b9718  addic 3, 30, 352
  03b971c  bl 0x176618
  03b9720  nop
  03b9724  li 3, 10
  03b9728  stb 3, 32(31)
  03b972c  b 0x3ba494
  03b9730  lbz 3, 188(31)
  03b9734  rlwinm 4, 3, 0, 28, 28
  03b9738  cmpwi 4, 0
  03b973c  bt 2, 0x3b976c
  03b9740  ori 5, 3, 0
  03b9744  addic 4, 30, 352
  03b9748  rlwimi 5, 23, 0, 28, 28
  03b974c  ori 3, 31, 0
  03b9750  stb 5, 188(31)
  03b9754  bl 0x17aa48
  03b9758  nop
  03b975c  lfs 1, 400(1)
  03b9760  lfs 2, 16(31)
  03b9764  lfs 3, 404(1)
  03b9768  lfs 4, 20(31)
  03b976c  lis 3, 114
  03b9770  fsubs 1, 1, 2
  03b9774  addic 28, 30, 352
  03b9778  fsubs 2, 3, 4
  03b977c  lfs 3, 100(24)
  03b9780  lfs 4, -3052(3)
  03b9784  fmuls 29, 4, 3
  03b9788  bl 0x5e8338
  03b978c  nop
  03b9790  lis 5, 114
  03b9794  lfs 3, 104(24)
  03b9798  fmr 2, 1
  03b979c  ori 3, 31, 0
  03b97a0  fmr 1, 29
  03b97a4  ori 4, 28, 0
  03b97a8  lfs 4, -3048(5)
  03b97ac  fmuls 3, 4, 3
  03b97b0  bl 0x17a230
  03b97b4  nop
  03b97b8  lfs 2, 60(24)
  03b97bc  lfs 1, 72(31)
  03b97c0  fcmpu 0, 30, 2
  03b97c4  cror 6, 1, 2
  03b97c8  bt 6, 0x3b9828
  03b97cc  lfs 2, 64(24)
  03b97d0  fcmpu 0, 31, 2
  03b97d4  cror 6, 1, 2
  03b97d8  bt 6, 0x3b9828
  03b97dc  lis 3, 114
  03b97e0  lfs 1, 96(24)
  03b97e4  li 4, 4
  03b97e8  li 5, 0
  03b97ec  lfs 2, -3056(3)
  03b97f0  ori 3, 31, 0
  03b97f4  fmuls 1, 2, 1
  03b97f8  fctiwz 1, 1
  03b97fc  stfd 1, 664(1)
  03b9800  lwz 6, 668(1)
  03b9804  extsw 6, 6
  03b9808  bl 0xfddc0
  03b980c  nop
  03b9810  ori 3, 28, 0
  03b9814  bl 0x176618
  03b9818  nop
  03b981c  li 3, 8
  03b9820  stb 3, 32(31)
  03b9824  b 0x3ba494
  03b9828  lwz 3, 988(30)
  03b982c  cmpwi 3, -1
  03b9830  bt 2, 0x3ba494
  03b9834  bl 0x5e8078
  03b9838  nop
  03b983c  lfs 31, 0(24)
  03b9840  lfs 2, 72(31)
  03b9844  fmuls 3, 1, 31
  03b9848  fmr 1, 2
  03b984c  stfs 3, 272(1)
  03b9850  bl 0x5e8128
  03b9854  nop
  03b9858  fmuls 1, 1, 31
  03b985c  addic 25, 1, 272
  03b9860  stw 23, 280(1)
  03b9864  ori 5, 26, 0
  03b9868  ori 3, 25, 0
  03b986c  ori 4, 25, 0
  03b9870  stfs 1, 276(1)
  03b9874  bl 0x5e7f54
  03b9878  nop
  03b987c  lwz 3, 988(30)
  03b9880  lis 27, 165
  03b9884  slwi 3, 3, 2
  03b9888  addic 27, 27, 7136
  03b988c  extsw 4, 3
  03b9890  ori 3, 25, 0
  03b9894  lwzx 5, 27, 4
  03b9898  addic 4, 5, 16
  03b989c  lwz 5, 0(5)
  03b98a0  extsw 5, 5
  03b98a4  bl 0x104e44
  03b98a8  nop
  03b98ac  cmpwi 3, 0
  03b98b0  bf 2, 0x3b9974
  03b98b4  cmpwi 29, 0
  03b98b8  bt 2, 0x3b98f8
  03b98bc  lwz 4, 988(30)
  03b98c0  addic 3, 1, 400
  03b98c4  slwi 4, 4, 2
  03b98c8  extsw 4, 4
  03b98cc  lwzx 5, 27, 4
  03b98d0  addic 4, 5, 16
  03b98d4  lwz 5, 0(5)
  03b98d8  extsw 5, 5
  03b98dc  bl 0x104e44
  03b98e0  nop
  03b98e4  cmpwi 3, 0
  03b98e8  bf 2, 0x3b98f8
  03b98ec  li 3, 7
  03b98f0  stb 3, 32(31)
  03b98f4  b 0x3b9974
  03b98f8  lwz 4, 988(30)
  03b98fc  addic 3, 1, 400
  03b9900  slwi 4, 4, 2
  03b9904  extsw 4, 4
  03b9908  lwzx 5, 27, 4
  03b990c  addic 4, 5, 16
  03b9910  lwz 5, 0(5)
  03b9914  extsw 5, 5
  03b9918  bl 0x104e44
  03b991c  nop
  03b9920  cmpwi 3, 0
  03b9924  bt 2, 0x3b9974
  03b9928  lis 3, 114
  03b992c  stw 23, 976(30)
  03b9930  lfs 1, 96(24)
  03b9934  li 4, 16
  03b9938  li 5, 0
  03b993c  lfs 2, -3056(3)
  03b9940  ori 3, 31, 0
  03b9944  fmuls 1, 2, 1
  03b9948  fctiwz 1, 1
  03b994c  stfd 1, 664(1)
  03b9950  lwz 6, 668(1)
  03b9954  extsw 6, 6
  03b9958  bl 0xfddc0
  03b995c  nop
  03b9960  ori 3, 28, 0
  03b9964  bl 0x176618
  03b9968  nop
  03b996c  li 3, 10
  03b9970  stb 3, 32(31)
  03b9974  cmpwi 29, 0
  03b9978  bf 2, 0x3ba494
  03b997c  lwz 4, 988(30)
  03b9980  addic 3, 1, 400
  03b9984  slwi 4, 4, 2
  03b9988  extsw 4, 4
  03b998c  lwzx 5, 27, 4
  03b9990  addic 4, 5, 16
  03b9994  lwz 5, 0(5)
  03b9998  extsw 5, 5
  03b999c  bl 0x104e44
  03b99a0  nop
  03b99a4  cmpwi 3, 0
  03b99a8  bf 2, 0x3ba494
  03b99ac  li 3, 6
  03b99b0  stb 3, 32(31)
  03b99b4  b 0x3ba494
  03b99b8  lbz 3, 188(31)
  03b99bc  rlwinm 4, 3, 0, 28, 28
  03b99c0  cmpwi 4, 0
  03b99c4  bt 2, 0x3b99e8
  03b99c8  ori 5, 3, 0
  03b99cc  ori 3, 31, 0
  03b99d0  rlwimi 5, 23, 0, 28, 28
  03b99d4  addic 4, 30, 352
  03b99d8  stb 5, 188(31)
  03b99dc  bl 0x17aa48
  03b99e0  nop
  03b99e4  lbz 3, 188(31)
  03b99e8  lfs 1, 60(24)
  03b99ec  fcmpu 0, 30, 1
  03b99f0  cror 6, 1, 2
  03b99f4  bt 6, 0x3b9a54
  03b99f8  lfs 1, 64(24)
  03b99fc  fcmpu 0, 31, 1
  03b9a00  cror 6, 1, 2
  03b9a04  bt 6, 0x3b9a54
  03b9a08  lis 3, 114
  03b9a0c  lfs 1, 96(24)
  03b9a10  li 4, 4
  03b9a14  li 5, 0
  03b9a18  lfs 2, -3056(3)
  03b9a1c  ori 3, 31, 0
  03b9a20  fmuls 1, 2, 1
  03b9a24  fctiwz 1, 1
  03b9a28  stfd 1, 664(1)
  03b9a2c  lwz 6, 668(1)
  03b9a30  extsw 6, 6
  03b9a34  bl 0xfddc0
  03b9a38  nop
  03b9a3c  addic 3, 30, 352
  03b9a40  bl 0x176618
  03b9a44  nop
  03b9a48  li 3, 8
  03b9a4c  stb 3, 32(31)
  03b9a50  b 0x3ba494
  03b9a54  rlwinm 4, 3, 0, 28, 28
  03b9a58  cmpwi 4, 0
  03b9a5c  bt 2, 0x3b9a7c
  03b9a60  ori 5, 3, 0
  03b9a64  addic 4, 30, 352
  03b9a68  rlwimi 5, 23, 0, 28, 28
  03b9a6c  ori 3, 31, 0
  03b9a70  stb 5, 188(31)
  03b9a74  bl 0x17aa48
  03b9a78  nop
  03b9a7c  addic 4, 30, 944
  03b9a80  ori 3, 26, 0
  03b9a84  bl 0x5e8588
  03b9a88  nop
  03b9a8c  lfs 31, 0(24)
  03b9a90  fcmpu 0, 1, 31
  03b9a94  cror 6, 1, 2
  03b9a98  bt 6, 0x3b9aa8
  03b9a9c  li 3, 7
  03b9aa0  stb 3, 32(31)
  03b9aa4  b 0x3ba494
  03b9aa8  lis 3, 114
  03b9aac  lfs 4, 100(24)
  03b9ab0  addic 29, 30, 352
  03b9ab4  lfs 3, -3052(3)
  03b9ab8  lfs 1, 944(30)
  03b9abc  lfs 2, 16(31)
  03b9ac0  lfs 5, 948(30)
  03b9ac4  fmuls 30, 3, 4
  03b9ac8  fsubs 1, 1, 2
  03b9acc  lfs 6, 20(31)
  03b9ad0  fsubs 2, 5, 6
  03b9ad4  bl 0x5e8338
  03b9ad8  nop
  03b9adc  lis 4, 114
  03b9ae0  lfs 3, 104(24)
  03b9ae4  fmr 2, 1
  03b9ae8  ori 3, 31, 0
  03b9aec  fmr 1, 30
  03b9af0  lfs 4, -3048(4)
  03b9af4  ori 4, 29, 0
  03b9af8  fmuls 3, 4, 3
  03b9afc  bl 0x17a230
  03b9b00  nop
  03b9b04  lwz 3, 988(30)
  03b9b08  cmpwi 3, -1
  03b9b0c  bt 2, 0x3ba494
  03b9b10  lfs 1, 72(31)
  03b9b14  bl 0x5e8078
  03b9b18  nop
  03b9b1c  fmuls 2, 1, 31
  03b9b20  lfs 1, 72(31)
  03b9b24  stfs 2, 288(1)
  03b9b28  bl 0x5e8128
  03b9b2c  nop
  03b9b30  fmuls 1, 1, 31
  03b9b34  addic 27, 1, 288
  03b9b38  stw 23, 296(1)
  03b9b3c  ori 5, 26, 0
  03b9b40  ori 3, 27, 0
  03b9b44  ori 4, 27, 0
  03b9b48  stfs 1, 292(1)
  03b9b4c  bl 0x5e7f54
  03b9b50  nop
  03b9b54  lwz 3, 988(30)
  03b9b58  lis 28, 165
  03b9b5c  slwi 3, 3, 2
  03b9b60  addic 28, 28, 7136
  03b9b64  extsw 4, 3
  03b9b68  ori 3, 27, 0
  03b9b6c  lwzx 5, 28, 4
  03b9b70  addic 4, 5, 16
  03b9b74  lwz 5, 0(5)
  03b9b78  extsw 5, 5
  03b9b7c  bl 0x104e44
  03b9b80  nop
  03b9b84  cmpwi 3, 0
  03b9b88  bf 2, 0x3b9be8
  03b9b8c  lis 3, 114
  03b9b90  stw 23, 976(30)
  03b9b94  li 4, 16
  03b9b98  lfs 1, 96(24)
  03b9b9c  li 5, 0
  03b9ba0  lfs 2, -3056(3)
  03b9ba4  ori 3, 31, 0
  03b9ba8  fmuls 1, 2, 1
  03b9bac  fctiwz 1, 1
  03b9bb0  stfd 1, 664(1)
  03b9bb4  lwz 6, 668(1)
  03b9bb8  extsw 6, 6
  03b9bbc  bl 0xfddc0
  03b9bc0  nop
  03b9bc4  ori 3, 29, 0
  03b9bc8  bl 0x176618
  03b9bcc  nop
  03b9bd0  lbz 4, 188(31)
  03b9bd4  li 3, 10
  03b9bd8  ori 4, 4, 16
  03b9bdc  stb 3, 32(31)
  03b9be0  stb 4, 188(31)
  03b9be4  b 0x3ba494
  03b9be8  lwz 4, 988(30)
  03b9bec  addic 3, 1, 400
  03b9bf0  slwi 4, 4, 2
  03b9bf4  extsw 4, 4
  03b9bf8  lwzx 5, 28, 4
  03b9bfc  addic 4, 5, 16
  03b9c00  lwz 5, 0(5)
  03b9c04  extsw 5, 5
  03b9c08  bl 0x104e44
  03b9c0c  nop
  03b9c10  cmpwi 3, 0
  03b9c14  bt 2, 0x3ba494
  03b9c18  li 3, 7
  03b9c1c  stb 3, 32(31)
  03b9c20  b 0x3ba494
  03b9c24  lfs 1, 60(24)
  03b9c28  fcmpu 0, 30, 1
  03b9c2c  cror 6, 1, 2
  03b9c30  bt 6, 0x3b9c90
  03b9c34  lfs 1, 64(24)
  03b9c38  fcmpu 0, 31, 1
  03b9c3c  cror 6, 1, 2
  03b9c40  bt 6, 0x3b9c90
  03b9c44  lis 3, 114
  03b9c48  lfs 1, 96(24)
  03b9c4c  li 4, 4
  03b9c50  li 5, 0
  03b9c54  lfs 2, -3056(3)
  03b9c58  ori 3, 31, 0
  03b9c5c  fmuls 1, 2, 1
  03b9c60  fctiwz 1, 1
  03b9c64  stfd 1, 664(1)
  03b9c68  lwz 6, 668(1)
  03b9c6c  extsw 6, 6
  03b9c70  bl 0xfddc0
  03b9c74  nop
  03b9c78  addic 3, 30, 352
  03b9c7c  bl 0x176618
  03b9c80  nop
  03b9c84  li 3, 8
  03b9c88  stb 3, 32(31)
  03b9c8c  b 0x3ba494
  03b9c90  lis 5, 114
  03b9c94  lfs 4, 104(24)
  03b9c98  lfs 1, 12(24)
  03b9c9c  ori 3, 31, 0
  03b9ca0  addic 4, 30, 352
  03b9ca4  fmr 2, 28
  03b9ca8  lfs 5, -3048(5)
  03b9cac  fmuls 3, 5, 4
  03b9cb0  bl 0x17a230
  03b9cb4  nop
  03b9cb8  lbz 3, 535(30)
  03b9cbc  cmpwi 3, 0
  03b9cc0  bf 2, 0x3ba494
  03b9cc4  li 3, 0
  03b9cc8  li 4, 1
  03b9ccc  subc 3, 3, 29
  03b9cd0  li 5, 4
  03b9cd4  cntlzw 3, 3
  03b9cd8  subc 4, 4, 5
  03b9cdc  sldi 3, 3, 58
  03b9ce0  sradi 3, 3, 63
  03b9ce4  and 3, 3, 4
  03b9ce8  addc 3, 5, 3
  03b9cec  stb 3, 32(31)
  03b9cf0  b 0x3ba494
  03b9cf4  lbz 3, 82(31)
  03b9cf8  cmpwi 3, 4
  03b9cfc  bf 2, 0x3ba494
  03b9d00  lbz 3, 112(31)
  03b9d04  rlwinm 3, 3, 0, 30, 30
  03b9d08  cmpwi 3, 0
  03b9d0c  bt 2, 0x3ba494
  03b9d10  lis 3, 114
  03b9d14  sth 23, 962(30)
  03b9d18  lfs 1, 96(24)
  03b9d1c  li 4, 0
  03b9d20  li 5, 0
  03b9d24  lfs 2, -3056(3)
  03b9d28  ori 3, 31, 0
  03b9d2c  fmuls 1, 2, 1
  03b9d30  fctiwz 1, 1
  03b9d34  stfd 1, 664(1)
  03b9d38  lwz 6, 668(1)
  03b9d3c  extsw 6, 6
  03b9d40  bl 0xfddc0
  03b9d44  nop
  03b9d48  li 3, 1
  03b9d4c  stb 3, 32(31)
  03b9d50  b 0x3ba494
  03b9d54  lbz 3, 83(31)
  03b9d58  lbz 4, 82(31)
  03b9d5c  cmpwi 3, 5
  03b9d60  cmpwi 1, 4, 5
  03b9d64  cmpwi 6, 4, 16
  03b9d68  bf 2, 0x3b9d80
  03b9d6c  bf 6, 0x3ba494
  03b9d70  lbz 3, 112(31)
  03b9d74  rlwinm 3, 3, 0, 30, 30
  03b9d78  cmpwi 3, 0
  03b9d7c  bt 2, 0x3ba494
  03b9d80  lbz 3, 188(31)
  03b9d84  rlwinm 4, 3, 0, 29, 29
  03b9d88  cmpwi 4, 0
  03b9d8c  bt 2, 0x3ba058
  03b9d90  rlwimi 3, 23, 0, 29, 29
  03b9d94  stb 3, 188(31)
  03b9d98  lwz 3, 988(30)
  03b9d9c  cmpwi 3, -1
  03b9da0  bf 2, 0x3b9de8
  03b9da4  lis 3, 114
  03b9da8  lfs 1, 96(24)
  03b9dac  li 4, 0
  03b9db0  li 5, 0
  03b9db4  lfs 2, -3056(3)
  03b9db8  ori 3, 31, 0
  03b9dbc  fmuls 1, 2, 1
  03b9dc0  fctiwz 1, 1
  03b9dc4  stfd 1, 664(1)
  03b9dc8  lwz 6, 668(1)
  03b9dcc  extsw 6, 6
  03b9dd0  bl 0xfddc0
  03b9dd4  nop
  03b9dd8  li 3, 1
  03b9ddc  stb 3, 32(31)
  03b9de0  sth 23, 962(30)
  03b9de4  b 0x3ba494
  03b9de8  lis 3, 16134
  03b9dec  lis 4, 16262
  03b9df0  lis 5, 16201
  03b9df4  ori 3, 3, 2706
  03b9df8  ori 4, 4, 2706
  03b9dfc  lis 6, 16006
  03b9e00  ori 5, 5, 4059
  03b9e04  ori 6, 6, 2706
  03b9e08  stw 3, 592(1)
  03b9e0c  lis 28, 151
  03b9e10  stw 4, 604(1)
  03b9e14  lis 27, 165
  03b9e18  stw 5, 596(1)
  03b9e1c  ori 29, 23, 0
  03b9e20  stw 6, 600(1)
  03b9e24  addic 28, 28, -25376
  03b9e28  stw 23, 608(1)
  03b9e2c  addic 27, 27, 7136
  03b9e30  lfs 29, 84(24)
  03b9e34  lfs 26, 108(24)
  03b9e38  fmr 27, 29
  03b9e3c  clrlwi 3, 29, 31
  03b9e40  cmpwi 3, 0
  03b9e44  bf 2, 0x3b9e6c
  03b9e48  li 3, 100
  03b9e4c  bl 0xfc620
  03b9e50  nop
  03b9e54  clrlwi 3, 3, 31
  03b9e58  fmr 29, 27
  03b9e5c  cmpwi 3, 0
  03b9e60  bt 2, 0x3b9e68
  03b9e64  lfs 29, 80(24)
  03b9e68  b 0x3b9e70
  03b9e6c  fneg 29, 29
  03b9e70  srawi 3, 29, 1
  03b9e74  lfs 1, 16(31)
  03b9e78  lfs 2, 128(28)
  03b9e7c  slwi 3, 3, 2
  03b9e80  lfs 3, 20(31)
  03b9e84  fsubs 1, 1, 2
  03b9e88  addc 3, 1, 3
  03b9e8c  lfs 4, 132(28)
  03b9e90  clrldi 3, 3, 32
  03b9e94  fsubs 2, 3, 4
  03b9e98  lfs 5, 592(3)
  03b9e9c  fmuls 28, 29, 5
  03b9ea0  bl 0x5e8338
  03b9ea4  nop
  03b9ea8  fmr 2, 1
  03b9eac  fmr 1, 28
  03b9eb0  bl 0x502578
  03b9eb4  nop
  03b9eb8  fmr 28, 1
  03b9ebc  addic 25, 1, 304
  03b9ec0  lfs 3, 68(31)
  03b9ec4  fmr 1, 26
  03b9ec8  ori 3, 25, 0
  03b9ecc  fmr 2, 28
  03b9ed0  bl 0xfe610
  03b9ed4  nop
  03b9ed8  ori 3, 25, 0
  03b9edc  ori 4, 25, 0
  03b9ee0  ori 5, 26, 0
  03b9ee4  bl 0x5e7f54
  03b9ee8  nop
  03b9eec  lwz 3, 988(30)
  03b9ef0  slwi 3, 3, 2
  03b9ef4  extsw 4, 3
  03b9ef8  ori 3, 25, 0
  03b9efc  lwzx 5, 27, 4
  03b9f00  addic 4, 5, 16
  03b9f04  lwz 5, 0(5)
  03b9f08  extsw 5, 5
  03b9f0c  bl 0x104e44
  03b9f10  nop
  03b9f14  cmpwi 3, 0
  03b9f18  bt 2, 0x3b9f5c
  03b9f1c  lis 3, 114
  03b9f20  lfs 1, 96(24)
  03b9f24  li 4, 16
  03b9f28  li 5, 0
  03b9f2c  lfs 2, -3056(3)
  03b9f30  ori 3, 31, 0
  03b9f34  fmuls 1, 2, 1
  03b9f38  fctiwz 1, 1
  03b9f3c  stfd 1, 664(1)
  03b9f40  lwz 6, 668(1)
  03b9f44  extsw 6, 6
  03b9f48  bl 0xfddc0
  03b9f4c  nop
  03b9f50  stfs 28, 980(30)
  03b9f54  stw 23, 984(30)
  03b9f58  b 0x3ba494
  03b9f5c  addic 29, 29, 1
  03b9f60  cmpwi 29, 9
  03b9f64  bt 0, 0x3b9e3c
  03b9f68  lbz 3, 82(31)
  03b9f6c  cmpwi 3, 5
  03b9f70  bf 2, 0x3ba014
  03b9f74  lfs 1, 60(24)
  03b9f78  fcmpu 0, 30, 1
  03b9f7c  cror 6, 1, 2
  03b9f80  bt 6, 0x3b9fd4
  03b9f84  lfs 1, 64(24)
  03b9f88  fcmpu 0, 31, 1
  03b9f8c  cror 6, 1, 2
  03b9f90  bt 6, 0x3b9fd4
  03b9f94  lis 3, 114
  03b9f98  lfs 1, 96(24)
  03b9f9c  li 4, 4
  03b9fa0  li 5, 0
  03b9fa4  lfs 2, -3056(3)
  03b9fa8  ori 3, 31, 0
  03b9fac  fmuls 1, 2, 1
  03b9fb0  fctiwz 1, 1
  03b9fb4  stfd 1, 664(1)
  03b9fb8  lwz 6, 668(1)
  03b9fbc  extsw 6, 6
  03b9fc0  bl 0xfddc0
  03b9fc4  nop
  03b9fc8  li 3, 8
  03b9fcc  stb 3, 32(31)
  03b9fd0  b 0x3ba494
  03b9fd4  lis 3, 114
  03b9fd8  lfs 1, 96(24)
  03b9fdc  li 4, 0
  03b9fe0  li 5, 0
  03b9fe4  lfs 2, -3056(3)
  03b9fe8  ori 3, 31, 0
  03b9fec  fmuls 1, 2, 1
  03b9ff0  fctiwz 1, 1
  03b9ff4  stfd 1, 664(1)
  03b9ff8  lwz 6, 668(1)
  03b9ffc  extsw 6, 6
  03ba000  bl 0xfddc0
  03ba004  nop
  03ba008  li 3, 1
  03ba00c  stb 3, 32(31)
  03ba010  b 0x3ba494
  03ba014  lis 3, 114
  03ba018  lfs 1, 96(24)
  03ba01c  li 4, 0
  03ba020  li 5, 0
  03ba024  lfs 2, -3056(3)
  03ba028  ori 3, 31, 0
  03ba02c  fmuls 1, 2, 1
  03ba030  fctiwz 1, 1
  03ba034  stfd 1, 664(1)
  03ba038  lwz 6, 668(1)
  03ba03c  extsw 6, 6
  03ba040  bl 0xfddc0
  03ba044  nop
  03ba048  li 3, 1
  03ba04c  stb 3, 32(31)
  03ba050  sth 23, 962(30)
  03ba054  b 0x3ba494
  03ba058  lfs 1, 112(24)
  03ba05c  fcmpu 0, 29, 1
  03ba060  cror 6, 1, 2
  03ba064  bt 6, 0x3ba134
  03ba068  bf 26, 0x3ba134
  03ba06c  lis 3, 114
  03ba070  lfs 1, 116(24)
  03ba074  lfs 3, -3064(3)
  03ba078  lfs 2, 984(30)
  03ba07c  fmuls 1, 3, 1
  03ba080  fcmpu 0, 2, 1
  03ba084  cror 6, 1, 2
  03ba088  bt 6, 0x3ba09c
  03ba08c  lis 3, 114
  03ba090  lfs 1, 104(24)
  03ba094  lfs 3, -3048(3)
  03ba098  fmadds 1, 3, 1, 2
  03ba09c  addic 29, 1, 320
  03ba0a0  stfs 1, 984(30)
  03ba0a4  lfs 2, 980(30)
  03ba0a8  ori 3, 29, 0
  03ba0ac  lfs 3, 68(31)
  03ba0b0  bl 0xfe610
  03ba0b4  nop
  03ba0b8  ori 3, 26, 0
  03ba0bc  ori 4, 26, 0
  03ba0c0  ori 5, 29, 0
  03ba0c4  bl 0x5e7f54
  03ba0c8  nop
  03ba0cc  lfs 1, 400(1)
  03ba0d0  lfs 2, 16(31)
  03ba0d4  lfs 31, 72(31)
  03ba0d8  fsubs 1, 1, 2
  03ba0dc  lfs 3, 404(1)
  03ba0e0  lfs 4, 20(31)
  03ba0e4  fsubs 2, 3, 4
  03ba0e8  bl 0x5e8338
  03ba0ec  nop
  03ba0f0  lis 3, 114
  03ba0f4  lfs 4, 52(24)
  03ba0f8  lis 4, 114
  03ba0fc  lfs 5, 120(24)
  03ba100  fmr 2, 1
  03ba104  lfs 6, 124(24)
  03ba108  fmr 1, 31
  03ba10c  addic 5, 30, 976
  03ba110  lfs 7, -3048(3)
  03ba114  lfs 8, -3052(4)
  03ba118  fmuls 3, 7, 4
  03ba11c  fmuls 4, 7, 5
  03ba120  fmuls 5, 8, 6
  03ba124  bl 0xff190
  03ba128  nop
  03ba12c  stfs 1, 72(31)
  03ba130  b 0x3ba494
  03ba134  lwz 3, 984(30)
  03ba138  lfs 1, 984(30)
  03ba13c  cmpwi 3, 0
  03ba140  bf 1, 0x3ba1e8
  03ba144  lis 29, 114
  03ba148  lfs 4, 128(24)
  03ba14c  addic 28, 1, 320
  03ba150  ori 3, 28, 0
  03ba154  lfs 3, -3048(29)
  03ba158  lfs 2, 980(30)
  03ba15c  fnmsubs 1, 3, 4, 1
  03ba160  stfs 1, 984(30)
  03ba164  lfs 3, 68(31)
  03ba168  bl 0xfe610
  03ba16c  nop
  03ba170  ori 3, 26, 0
  03ba174  ori 4, 26, 0
  03ba178  ori 5, 28, 0
  03ba17c  bl 0x5e7f54
  03ba180  nop
  03ba184  lfs 1, 400(1)
  03ba188  lfs 2, 16(31)
  03ba18c  lfs 31, 72(31)
  03ba190  fsubs 1, 1, 2
  03ba194  lfs 3, 404(1)
  03ba198  lfs 4, 20(31)
  03ba19c  fsubs 2, 3, 4
  03ba1a0  bl 0x5e8338
  03ba1a4  nop
  03ba1a8  lfs 4, 52(24)
  03ba1ac  lis 3, 114
  03ba1b0  lfs 5, 120(24)
  03ba1b4  fmr 2, 1
  03ba1b8  lfs 6, 124(24)
  03ba1bc  fmr 1, 31
  03ba1c0  lfs 7, -3048(29)
  03ba1c4  addic 5, 30, 976
  03ba1c8  lfs 8, -3052(3)
  03ba1cc  fmuls 3, 7, 4
  03ba1d0  fmuls 4, 7, 5
  03ba1d4  fmuls 5, 8, 6
  03ba1d8  bl 0xff190
  03ba1dc  nop
  03ba1e0  stfs 1, 72(31)
  03ba1e4  b 0x3ba494
  03ba1e8  li 3, 1
  03ba1ec  stb 3, 32(31)
  03ba1f0  sth 23, 962(30)
  03ba1f4  b 0x3ba494
  03ba1f8  lbz 3, 82(31)
  03ba1fc  cmpwi 3, 16
  03ba200  bf 2, 0x3ba2ec
  03ba204  lbz 3, 112(31)
  03ba208  rlwinm 3, 3, 0, 30, 30
  03ba20c  cmpwi 3, 0
  03ba210  bt 2, 0x3ba2ec
  03ba214  lbz 3, 188(31)
  03ba218  rlwinm 3, 3, 0, 27, 27
  03ba21c  cmpwi 3, 0
  03ba220  bf 2, 0x3ba25c
  03ba224  lwz 5, 988(30)
  03ba228  lis 3, 165
  03ba22c  slwi 5, 5, 2
  03ba230  addic 4, 3, 7136
  03ba234  extsw 5, 5
  03ba238  addic 3, 1, 400
  03ba23c  lwzx 5, 4, 5
  03ba240  addic 4, 5, 16
  03ba244  lwz 5, 0(5)
  03ba248  extsw 5, 5
  03ba24c  bl 0x104e44
  03ba250  nop
  03ba254  cmpwi 3, 0
  03ba258  bf 2, 0x3ba29c
  03ba25c  li 3, 6
  03ba260  lis 4, 114
  03ba264  li 5, 0
  03ba268  stb 3, 32(31)
  03ba26c  lfs 1, 96(24)
  03ba270  lfs 2, -3056(4)
  03ba274  ori 3, 31, 0
  03ba278  li 4, 0
  03ba27c  fmuls 1, 2, 1
  03ba280  fctiwz 1, 1
  03ba284  stfd 1, 664(1)
  03ba288  lwz 6, 668(1)
  03ba28c  extsw 6, 6
  03ba290  bl 0xfddc0
  03ba294  nop
  03ba298  b 0x3ba2d8
  03ba29c  li 3, 5
  03ba2a0  lis 4, 114
  03ba2a4  li 5, 0
  03ba2a8  stb 3, 32(31)
  03ba2ac  lfs 1, 96(24)
  03ba2b0  lfs 2, -3056(4)
  03ba2b4  ori 3, 31, 0
  03ba2b8  li 4, 0
  03ba2bc  fmuls 1, 2, 1
  03ba2c0  fctiwz 1, 1
  03ba2c4  stfd 1, 664(1)
  03ba2c8  lwz 6, 668(1)
  03ba2cc  extsw 6, 6
  03ba2d0  bl 0xfddc0
  03ba2d4  nop
  03ba2d8  lbz 3, 188(31)
  03ba2dc  ori 3, 3, 8
  03ba2e0  rlwimi 3, 23, 0, 27, 27
  03ba2e4  stb 3, 188(31)
  03ba2e8  b 0x3ba494
  03ba2ec  lbz 3, 188(31)
  03ba2f0  rlwinm 3, 3, 0, 27, 27
  03ba2f4  cmpwi 3, 0
  03ba2f8  bt 2, 0x3ba358
  03ba2fc  lfs 1, 944(30)
  03ba300  lfs 3, 948(30)
  03ba304  fsubs 1, 1, 2
  03ba308  fsubs 2, 3, 4
  03ba30c  bl 0x5e8338
  03ba310  nop
  03ba314  fmr 2, 1
  03ba318  fmr 1, 28
  03ba31c  lis 3, 114
  03ba320  lis 4, 114
  03ba324  lfs 4, 52(24)
  03ba328  lfs 6, 120(24)
  03ba32c  addic 5, 30, 976
  03ba330  lfs 5, 124(24)
  03ba334  lfs 7, -3048(3)
  03ba338  lfs 8, -3052(4)
  03ba33c  fmuls 3, 7, 4
  03ba340  fmuls 4, 7, 6
  03ba344  fmuls 5, 8, 5
  03ba348  bl 0xff190
  03ba34c  nop
  03ba350  fmr 28, 1
  03ba354  b 0x3ba398
  03ba358  fsubs 1, 1, 2
  03ba35c  fsubs 2, 3, 4
  03ba360  bl 0x5e8338
  03ba364  nop
  03ba368  fmr 2, 1
  03ba36c  lis 3, 114
  03ba370  fmr 1, 28
  03ba374  lfs 5, 140(24)
  03ba378  lfs 3, 132(24)
  03ba37c  addic 5, 30, 976
  03ba380  lfs 4, 136(24)
  03ba384  lfs 6, -3052(3)
  03ba388  fmuls 5, 6, 5
  03ba38c  bl 0xff190
  03ba390  nop
  03ba394  fmr 28, 1
  03ba398  stfs 28, 72(31)
  03ba39c  b 0x3ba494
  03ba3a0  ori 3, 31, 0
  03ba3a4  addic 4, 30, 192
  03ba3a8  bl 0x10b030
  03ba3ac  nop
  03ba3b0  rlwinm 3, 3, 0, 25, 25
  03ba3b4  cmpwi 3, 0
  03ba3b8  bf 2, 0x3ba3dc
  03ba3bc  lwz 4, 24(31)
  03ba3c0  lis 3, 16256
  03ba3c4  srawi 5, 4, 31
  03ba3c8  srwi 6, 5, 1
  03ba3cc  xor 4, 6, 4
  03ba3d0  subc 4, 4, 5
  03ba3d4  cmpw 4, 3
  03ba3d8  bf 0, 0x3ba494
  03ba3dc  ori 3, 31, 0
  03ba3e0  bl 0x3b8438
  03ba3e4  lis 3, 161
  03ba3e8  lfs 31, 12(24)
  03ba3ec  addic 30, 31, 64
  03ba3f0  addic 29, 3, 23856
  03ba3f4  li 8, 0
  03ba3f8  fmr 1, 31
  03ba3fc  ori 3, 31, 0
  03ba400  ori 10, 29, 0
  03ba404  std 29, 112(1)
  03ba408  li 4, 1739
  03ba40c  std 29, 120(1)
  03ba410  ori 5, 26, 0
  03ba414  ori 6, 30, 0
  03ba418  li 7, 0
  03ba41c  bl 0x11a560
  03ba420  nop
  03ba424  std 29, 112(1)
  03ba428  ori 3, 31, 0
  03ba42c  std 29, 120(1)
  03ba430  li 4, 1740
  03ba434  ori 10, 29, 0
  03ba438  fmr 1, 31
  03ba43c  ori 5, 26, 0
  03ba440  ori 6, 30, 0
  03ba444  li 7, 0
  03ba448  li 8, 0
  03ba44c  bl 0x11a560
  03ba450  nop
  03ba454  ori 3, 31, 0
  03ba458  std 29, 112(1)
  03ba45c  li 4, 1741
  03ba460  fmr 1, 31
  03ba464  ori 10, 29, 0
  03ba468  std 29, 120(1)
  03ba46c  ori 5, 26, 0
  03ba470  ori 6, 30, 0
  03ba474  li 7, 0
  03ba478  li 8, 0
  03ba47c  bl 0x11a560
  03ba480  nop
  03ba484  ori 3, 31, 0
  03ba488  bl 0xefb38
  03ba48c  nop
  03ba490  b 0x3ba698
  03ba494  ori 3, 31, 0
  03ba498  addic 4, 30, 176
  03ba49c  bl 0x10c9a0
  03ba4a0  nop
  03ba4a4  lwz 3, 996(30)
  03ba4a8  lfs 31, 12(24)
  03ba4ac  cmpwi 3, 0
  03ba4b0  bf 1, 0x3ba590
  03ba4b4  lis 3, 151
  03ba4b8  lfs 1, 16(31)
  03ba4bc  addic 29, 3, -25376
  03ba4c0  lfs 2, 20(31)
  03ba4c4  lfs 3, 128(29)
  03ba4c8  lfs 4, 132(29)
  03ba4cc  fsubs 1, 1, 3
  03ba4d0  fsubs 2, 2, 4
  03ba4d4  bl 0x5e8338
  03ba4d8  nop
  03ba4dc  bl 0x5e8078
  03ba4e0  nop
  03ba4e4  lfs 2, 996(30)
  03ba4e8  fmuls 3, 1, 2
  03ba4ec  lfs 1, 16(31)
  03ba4f0  lfs 2, 128(29)
  03ba4f4  lfs 4, 20(31)
  03ba4f8  fsubs 1, 1, 2
  03ba4fc  lfs 5, 132(29)
  03ba500  fsubs 2, 4, 5
  03ba504  stfs 3, 336(1)
  03ba508  bl 0x5e8338
  03ba50c  nop
  03ba510  bl 0x5e8128
  03ba514  nop
  03ba518  lfs 2, 996(30)
  03ba51c  addic 29, 1, 336
  03ba520  stw 23, 344(1)
  03ba524  ori 5, 26, 0
  03ba528  fmuls 1, 1, 2
  03ba52c  ori 3, 29, 0
  03ba530  ori 4, 29, 0
  03ba534  stfs 1, 340(1)
  03ba538  bl 0x5e7f54
  03ba53c  nop
  03ba540  lis 3, 114
  03ba544  lfs 1, 40(24)
  03ba548  lfs 2, 144(24)
  03ba54c  ori 4, 26, 0
  03ba550  lfs 3, -3056(3)
  03ba554  fmuls 1, 3, 1
  03ba558  ori 3, 31, 0
  03ba55c  ori 5, 29, 0
  03ba560  li 10, 1
  03ba564  fmuls 1, 1, 1
  03ba568  fdivs 1, 2, 1
  03ba56c  lfs 2, 996(30)
  03ba570  fadds 1, 2, 1
  03ba574  stfs 1, 996(30)
  03ba578  lfs 1, 148(24)
  03ba57c  lfs 2, 84(24)
  03ba580  lfs 3, 152(24)
  03ba584  lfs 4, 156(24)
  03ba588  bl 0xffcd0
  03ba58c  nop
  03ba590  lfs 1, 160(24)
  03ba594  addic 29, 1, 160
  03ba598  lfs 2, 968(30)
  03ba59c  li 4, 1
  03ba5a0  ori 3, 29, 0
  03ba5a4  fmuls 1, 2, 1
  03ba5a8  stfs 1, 968(30)
  03ba5ac  bl 0x501980
  03ba5b0  nop
  03ba5b4  addic 28, 30, 304
  03ba5b8  fmr 1, 31
  03ba5bc  li 4, 2
  03ba5c0  ori 3, 28, 0
  03ba5c4  bl 0x501980
  03ba5c8  nop
  03ba5cc  ori 3, 28, 0
  03ba5d0  ori 4, 28, 0
  03ba5d4  ori 5, 29, 0
  03ba5d8  bl 0x5017c4
  03ba5dc  nop
  03ba5e0  lbz 3, 32(31)
  03ba5e4  cmpwi 3, 9
  03ba5e8  bt 2, 0x3ba5f4
  03ba5ec  stb 3, 961(30)
  03ba5f0  lbz 3, 32(31)
  03ba5f4  cmpwi 3, 5
  03ba5f8  bt 2, 0x3ba698
  03ba5fc  lbz 3, 188(31)
  03ba600  cmpwi 3, 6
  03ba604  bt 2, 0x3ba698
  03ba608  lis 3, 114
  03ba60c  lfs 1, 164(24)
  03ba610  lfs 2, 992(30)
  03ba614  li 4, 0
  03ba618  lfs 3, -3048(3)
  03ba61c  fmadds 1, 3, 1, 2
  03ba620  ori 3, 26, 0
  03ba624  stfs 1, 992(30)
  03ba628  lfs 31, 0(24)
  03ba62c  lfs 2, 24(31)
  03ba630  fsubs 1, 1, 31
  03ba634  fsubs 1, 2, 1
  03ba638  stfs 1, 24(31)
  03ba63c  lfs 1, 48(24)
  03ba640  bl 0xffb70
  03ba644  nop
  03ba648  lfs 2, 24(31)
  03ba64c  fsubs 2, 2, 31
  03ba650  fcmpu 0, 2, 1
  03ba654  stfs 2, 24(31)
  03ba658  cror 6, 1, 2
  03ba65c  bt 6, 0x3ba66c
  03ba660  stfs 1, 24(31)
  03ba664  stw 23, 992(30)
  03ba668  lfs 2, 24(31)
  03ba66c  fcmpu 0, 2, 31
  03ba670  cror 6, 1, 2
  03ba674  bt 6, 0x3ba698
  03ba678  ori 3, 31, 0
  03ba67c  li 4, 0
  03ba680  li 5, -1
  03ba684  bl 0xfd8d0
  03ba688  nop
  03ba68c  ori 3, 31, 0
  03ba690  bl 0xefb38
  03ba694  nop
  03ba698  ld 0, 864(1)
  03ba69c  mtlr 0
  03ba6a0  lfd 22, 768(1)
  03ba6a4  lfd 23, 776(1)
  03ba6a8  lfd 24, 784(1)
  03ba6ac  lfd 25, 792(1)
  03ba6b0  lfd 26, 800(1)
  03ba6b4  lfd 27, 808(1)
  03ba6b8  lfd 28, 816(1)
  03ba6bc  lfd 29, 824(1)
  03ba6c0  lfd 30, 832(1)
  03ba6c4  lfd 31, 840(1)
  03ba6c8  ld 21, 680(1)
  03ba6cc  ld 22, 688(1)
  03ba6d0  ld 23, 696(1)
  03ba6d4  ld 24, 704(1)
  03ba6d8  ld 25, 712(1)
  03ba6dc  ld 26, 720(1)
  03ba6e0  ld 27, 728(1)
  03ba6e4  ld 28, 736(1)
  03ba6e8  ld 29, 744(1)
  03ba6ec  ld 30, 752(1)
  03ba6f0  ld 31, 760(1)
  03ba6f4  addi 1, 1, 848
  03ba6f8  blr
