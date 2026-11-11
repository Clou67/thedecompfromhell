# sdk/libc/xgetstr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

ranmatch:   # 0x5d8490, 0xac bytes
  05d8490  cmplwi 7, 5, 2
  05d8494  bf 29, 0x5d84f4
  05d8498  clrlwi 11, 4, 24
  05d849c  b 0x5d84bc
  05d84a0  lbz 0, 0(3)
  05d84a4  addi 5, 5, -1
  05d84a8  mr 3, 9
  05d84ac  cmpw 7, 0, 11
  05d84b0  bt 30, 0x5d8524
  05d84b4  cmplwi 7, 5, 2
  05d84b8  bf 29, 0x5d84f4
  05d84bc  mr 9, 3
  05d84c0  lbzu 0, 1(9)
  05d84c4  cmpwi 7, 0, 45
  05d84c8  bf 30, 0x5d84a0
  05d84cc  lbz 0, 0(3)
  05d84d0  addi 5, 5, -3
  05d84d4  cmplw 7, 0, 11
  05d84d8  bt 29, 0x5d84e8
  05d84dc  lbz 0, 2(3)
  05d84e0  cmplw 7, 0, 11
  05d84e4  bf 28, 0x5d8524
  05d84e8  cmplwi 7, 5, 2
  05d84ec  addi 3, 3, 3
  05d84f0  bt 29, 0x5d84bc
  05d84f4  cmpwi 7, 5, 0
  05d84f8  bt 30, 0x5d8530
  05d84fc  clrlwi 11, 4, 24
  05d8500  lbz 0, 0(3)
  05d8504  clrldi 5, 5, 32
  05d8508  cmpw 7, 0, 11
  05d850c  mtctr 5
  05d8510  bt 30, 0x5d8524
  05d8514  bdz 0x5d8530
  05d8518  lbzu 0, 1(3)
  05d851c  cmpw 7, 0, 11
  05d8520  bf 30, 0x5d8514
  05d8524  li 3, 1
  05d8528  extsw 3, 3
  05d852c  blr
  05d8530  li 3, 0
  05d8534  extsw 3, 3
  05d8538  blr

_Getstr:   # 0x5d853c, 0x644 bytes
  05d853c  mfcr 12
  05d8540  stdu 1, -256(1)
  05d8544  cmpwi 4, 4, 0
  05d8548  std 30, 240(1)
  05d854c  std 31, 248(1)
  05d8550  std 18, 144(1)
  05d8554  std 19, 152(1)
  05d8558  std 20, 160(1)
  05d855c  std 21, 168(1)
  05d8560  std 22, 176(1)
  05d8564  std 23, 184(1)
  05d8568  std 24, 192(1)
  05d856c  std 25, 200(1)
  05d8570  std 26, 208(1)
  05d8574  std 27, 216(1)
  05d8578  std 28, 224(1)
  05d857c  std 29, 232(1)
  05d8580  mr 30, 3
  05d8584  mr 31, 3
  05d8588  stw 12, 264(1)
  05d858c  mflr 0
  05d8590  std 0, 272(1)
  05d8594  li 0, 0
  05d8598  sth 0, 130(1)
  05d859c  stw 0, 124(1)
  05d85a0  sth 0, 128(1)
  05d85a4  lbz 29, 29(3)
  05d85a8  bt 16, 0x5d8a6c
  05d85ac  li 18, 0
  05d85b0  li 19, 0
  05d85b4  li 20, 0
  05d85b8  li 21, 0
  05d85bc  lwz 11, 24(30)
  05d85c0  cmpwi 7, 11, 0
  05d85c4  bf 29, 0x5d8ad4
  05d85c8  xori 9, 29, 108
  05d85cc  lbz 0, 28(30)
  05d85d0  stw 11, 20(30)
  05d85d4  clrldi 9, 9, 56
  05d85d8  cmpwi 7, 0, 0
  05d85dc  addi 9, 9, -1
  05d85e0  li 23, 0
  05d85e4  rldicl 26, 9, 1, 63
  05d85e8  li 22, 0
  05d85ec  bt 30, 0x5d8998
  05d85f0  li 25, 0
  05d85f4  lwz 10, 16(30)
  05d85f8  li 24, 0
  05d85fc  lwz 9, 20(30)
  05d8600  addi 9, 9, -1
  05d8604  cmpwi 7, 9, 0
  05d8608  stw 9, 20(30)
  05d860c  bt- 28, 0x5d86a8
  05d8610  lwz 9, 0(30)
  05d8614  addi 10, 10, 1
  05d8618  lwz 3, 4(30)
  05d861c  li 4, 0
  05d8620  stw 10, 16(30)
  05d8624  li 5, 1
  05d8628  lwz 0, 0(9)
  05d862c  std 2, 40(1)
  05d8630  mtctr 0
  05d8634  lwz 2, 4(9)
  05d8638  bctrl
  05d863c  ld 2, 40(1)
  05d8640  cmpwi 7, 3, -1
  05d8644  mr 29, 3
  05d8648  bt- 30, 0x5d8b38
  05d864c  bf 17, 0x5d885c
  05d8650  lwz 11, -24064(2)
  05d8654  rlwinm 9, 29, 1, 23, 30
  05d8658  lwz 0, 0(11)
  05d865c  add 9, 9, 0
  05d8660  clrldi 9, 9, 32
  05d8664  lhz 0, 0(9)
  05d8668  li 9, 324
  05d866c  and 9, 0, 9
  05d8670  cmpwi 7, 9, 0
  05d8674  bf- 30, 0x5d8b40
  05d8678  cmpwi 7, 26, 0
  05d867c  bf 30, 0x5d8758
  05d8680  lbz 0, 28(30)
  05d8684  cmpwi 7, 0, 0
  05d8688  bt 30, 0x5d8738
  05d868c  lwz 9, 20(30)
  05d8690  li 25, 2
  05d8694  lwz 10, 16(30)
  05d8698  addi 9, 9, -1
  05d869c  cmpwi 7, 9, 0
  05d86a0  stw 9, 20(30)
  05d86a4  bf+ 28, 0x5d8610
  05d86a8  addi 10, 10, 1
  05d86ac  stw 10, 16(30)
  05d86b0  addi 10, 10, -1
  05d86b4  li 29, -1
  05d86b8  stw 10, 16(30)
  05d86bc  bt 18, 0x5d88cc
  05d86c0  extsb 0, 25
  05d86c4  cmpwi 7, 0, 2
  05d86c8  bt 30, 0x5d8b48
  05d86cc  clrlwi 0, 25, 31
  05d86d0  cmpwi 7, 0, 0
  05d86d4  bf 30, 0x5d8990
  05d86d8  cmpwi 7, 29, -1
  05d86dc  bt 30, 0x5d8990
  05d86e0  li 3, 0
  05d86e4  ld 0, 272(1)
  05d86e8  extsw 3, 3
  05d86ec  lwz 12, 264(1)
  05d86f0  ld 18, 144(1)
  05d86f4  mtlr 0
  05d86f8  ld 19, 152(1)
  05d86fc  mtocrf 8, 12
  05d8700  ld 20, 160(1)
  05d8704  ld 21, 168(1)
  05d8708  ld 22, 176(1)
  05d870c  ld 23, 184(1)
  05d8710  ld 24, 192(1)
  05d8714  ld 25, 200(1)
  05d8718  ld 26, 208(1)
  05d871c  ld 27, 216(1)
  05d8720  ld 28, 224(1)
  05d8724  ld 29, 232(1)
  05d8728  ld 30, 240(1)
  05d872c  ld 31, 248(1)
  05d8730  addi 1, 1, 256
  05d8734  blr
  05d8738  clrldi 9, 23, 32
  05d873c  li 0, 1
  05d8740  addi 23, 23, 1
  05d8744  li 25, 2
  05d8748  stb 29, 0(9)
  05d874c  lwz 10, 16(30)
  05d8750  stb 0, 30(30)
  05d8754  b 0x5d85fc
  05d8758  addi 28, 1, 112
  05d875c  extsw 9, 24
  05d8760  addi 0, 1, 120
  05d8764  add 9, 28, 9
  05d8768  clrldi 27, 0, 32
  05d876c  addi 31, 24, 1
  05d8770  mr 3, 28
  05d8774  mr 4, 27
  05d8778  clrldi 5, 31, 32
  05d877c  addi 6, 1, 124
  05d8780  stb 29, 8(9)
  05d8784  bl 0x5d9b38
  05d8788  nop
  05d878c  cmpwi 7, 3, -1
  05d8790  bt 30, 0x5d890c
  05d8794  cmpwi 7, 3, 0
  05d8798  bt 30, 0x5d88e0
  05d879c  cmpwi 7, 3, -2
  05d87a0  bt 30, 0x5d89ec
  05d87a4  cmpw 7, 31, 3
  05d87a8  bf 29, 0x5d8904
  05d87ac  mr 29, 3
  05d87b0  lwz 10, 16(30)
  05d87b4  b 0x5d87ec
  05d87b8  lwz 9, 0(30)
  05d87bc  addi 10, 10, -1
  05d87c0  lwz 3, 4(30)
  05d87c4  stw 10, 16(30)
  05d87c8  lwz 0, 0(9)
  05d87cc  std 2, 40(1)
  05d87d0  mtctr 0
  05d87d4  lwz 2, 4(9)
  05d87d8  bctrl
  05d87dc  ld 2, 40(1)
  05d87e0  cmpw 7, 29, 31
  05d87e4  lwz 10, 16(30)
  05d87e8  bt 30, 0x5d8820
  05d87ec  addi 31, 31, -1
  05d87f0  li 5, 0
  05d87f4  extsw 9, 31
  05d87f8  add 9, 28, 9
  05d87fc  lbz 0, 8(9)
  05d8800  extsb 0, 0
  05d8804  cmpwi 7, 0, -1
  05d8808  extsw 4, 0
  05d880c  bf 30, 0x5d87b8
  05d8810  cmpw 7, 29, 31
  05d8814  addi 10, 10, -1
  05d8818  stw 10, 16(30)
  05d881c  bf 30, 0x5d87ec
  05d8820  lbz 0, 28(30)
  05d8824  cmpwi 7, 0, 0
  05d8828  bf 30, 0x5d8844
  05d882c  clrldi 9, 22, 32
  05d8830  lhz 0, 112(1)
  05d8834  li 11, 1
  05d8838  addi 22, 22, 2
  05d883c  sth 0, 0(9)
  05d8840  stb 11, 30(30)
  05d8844  lwz 9, 24(30)
  05d8848  li 25, 2
  05d884c  li 24, 0
  05d8850  addi 9, 9, -1
  05d8854  stw 9, 24(30)
  05d8858  b 0x5d85fc
  05d885c  bt 18, 0x5d8678
  05d8860  extsb 0, 19
  05d8864  cmpwi 0, 0
  05d8868  bt 2, 0x5d89bc
  05d886c  extsb 0, 18
  05d8870  cmpwi 0, 0
  05d8874  bt 2, 0x5d8a28
  05d8878  extsw 31, 29
  05d887c  clrldi 3, 20, 32
  05d8880  mr 4, 31
  05d8884  clrldi 5, 21, 32
  05d8888  bl 0x5d8490
  05d888c  cmpwi 7, 3, 0
  05d8890  bt+ 30, 0x5d8678
  05d8894  lwz 9, 16(30)
  05d8898  mr 4, 31
  05d889c  lwz 11, 0(30)
  05d88a0  li 5, 0
  05d88a4  addi 9, 9, -1
  05d88a8  lwz 3, 4(30)
  05d88ac  stw 9, 16(30)
  05d88b0  lwz 9, 0(11)
  05d88b4  std 2, 40(1)
  05d88b8  mtctr 9
  05d88bc  lwz 2, 4(11)
  05d88c0  bctrl
  05d88c4  ld 2, 40(1)
  05d88c8  bf 18, 0x5d86c0
  05d88cc  extsb 0, 25
  05d88d0  cmpwi 7, 0, 2
  05d88d4  bf 30, 0x5d86cc
  05d88d8  li 3, 1
  05d88dc  b 0x5d86e4
  05d88e0  lhz 0, 112(1)
  05d88e4  cmpwi 7, 0, 0
  05d88e8  bf 30, 0x5d87a4
  05d88ec  mr 3, 27
  05d88f0  bl 0x5c8510
  05d88f4  nop
  05d88f8  addi 3, 3, 1
  05d88fc  cmpw 7, 31, 3
  05d8900  bt 29, 0x5d87ac
  05d8904  lwz 10, 16(30)
  05d8908  b 0x5d8820
  05d890c  cmpwi 7, 31, 0
  05d8910  bt 29, 0x5d894c
  05d8914  b 0x5d8984
  05d8918  lwz 9, 16(30)
  05d891c  lwz 11, 0(30)
  05d8920  addi 10, 9, -1
  05d8924  lwz 3, 4(30)
  05d8928  stw 10, 16(30)
  05d892c  lwz 0, 0(11)
  05d8930  std 2, 40(1)
  05d8934  mtctr 0
  05d8938  lwz 2, 4(11)
  05d893c  bctrl
  05d8940  ld 2, 40(1)
  05d8944  cmpwi 7, 31, 0
  05d8948  bt 30, 0x5d8984
  05d894c  addi 31, 31, -1
  05d8950  li 5, 0
  05d8954  extsw 9, 31
  05d8958  add 9, 28, 9
  05d895c  lbz 0, 8(9)
  05d8960  extsb 0, 0
  05d8964  cmpwi 7, 0, -1
  05d8968  extsw 4, 0
  05d896c  bf 30, 0x5d8918
  05d8970  lwz 9, 16(30)
  05d8974  cmpwi 7, 31, 0
  05d8978  addi 10, 9, -1
  05d897c  stw 10, 16(30)
  05d8980  bf 30, 0x5d894c
  05d8984  extsb 0, 25
  05d8988  cmpwi 7, 0, 0
  05d898c  bf 30, 0x5d86e0
  05d8990  li 3, -1
  05d8994  b 0x5d86e4
  05d8998  cmpwi 7, 26, 0
  05d899c  bt 30, 0x5d8a08
  05d89a0  mr 9, 31
  05d89a4  lwzu 11, 8(9)
  05d89a8  clrldi 10, 11, 32
  05d89ac  addi 11, 11, 8
  05d89b0  stw 11, 0(9)
  05d89b4  lwz 22, 4(10)
  05d89b8  b 0x5d85f0
  05d89bc  extsb 9, 18
  05d89c0  cmpwi 9, 0
  05d89c4  bf 2, 0x5d8a48
  05d89c8  extsw 31, 29
  05d89cc  clrldi 3, 20, 32
  05d89d0  mr 4, 31
  05d89d4  clrldi 5, 21, 32
  05d89d8  bl 0x5c5984
  05d89dc  nop
  05d89e0  cmpwi 7, 3, 0
  05d89e4  bf+ 30, 0x5d8678
  05d89e8  b 0x5d8894
  05d89ec  cmplwi 7, 31, 2
  05d89f0  ori 0, 25, 1
  05d89f4  mr 25, 0
  05d89f8  bt- 29, 0x5d890c
  05d89fc  mr 24, 31
  05d8a00  lwz 10, 16(30)
  05d8a04  b 0x5d85fc
  05d8a08  mr 9, 31
  05d8a0c  li 22, 0
  05d8a10  lwzu 11, 8(9)
  05d8a14  clrldi 10, 11, 32
  05d8a18  addi 11, 11, 8
  05d8a1c  stw 11, 0(9)
  05d8a20  lwz 23, 4(10)
  05d8a24  b 0x5d85f0
  05d8a28  extsw 31, 29
  05d8a2c  clrldi 3, 20, 32
  05d8a30  mr 4, 31
  05d8a34  clrldi 5, 21, 32
  05d8a38  bl 0x5d8490
  05d8a3c  cmpwi 7, 3, 0
  05d8a40  bf+ 30, 0x5d8678
  05d8a44  b 0x5d8894
  05d8a48  extsw 31, 29
  05d8a4c  clrldi 3, 20, 32
  05d8a50  mr 4, 31
  05d8a54  clrldi 5, 21, 32
  05d8a58  bl 0x5c5984
  05d8a5c  nop
  05d8a60  cmpwi 7, 3, 0
  05d8a64  bt+ 30, 0x5d8678
  05d8a68  b 0x5d8894
  05d8a6c  lwz 11, 12(3)
  05d8a70  li 18, 0
  05d8a74  addi 11, 11, 1
  05d8a78  clrldi 9, 11, 32
  05d8a7c  stw 11, 12(3)
  05d8a80  lbz 0, 0(9)
  05d8a84  cmpwi 7, 0, 94
  05d8a88  bt 30, 0x5d8af8
  05d8a8c  clrldi 3, 11, 32
  05d8a90  lbz 0, 0(3)
  05d8a94  cmpwi 7, 0, 93
  05d8a98  bt 30, 0x5d8aec
  05d8a9c  li 4, 93
  05d8aa0  bl 0x5cc578
  05d8aa4  nop
  05d8aa8  cmpwi 7, 3, 0
  05d8aac  bt 30, 0x5d86e0
  05d8ab0  lwz 20, 12(30)
  05d8ab4  stw 3, 12(30)
  05d8ab8  sub 21, 3, 20
  05d8abc  cmpwi 7, 21, 2
  05d8ac0  bt 29, 0x5d8b08
  05d8ac4  li 19, 0
  05d8ac8  lwz 11, 24(30)
  05d8acc  cmpwi 7, 11, 0
  05d8ad0  bt 29, 0x5d85c8
  05d8ad4  bf 18, 0x5d8ae0
  05d8ad8  li 11, 1
  05d8adc  b 0x5d85c8
  05d8ae0  lis 11, 32767
  05d8ae4  ori 11, 11, 65535
  05d8ae8  b 0x5d85c8
  05d8aec  addi 0, 11, 1
  05d8af0  clrldi 3, 0, 32
  05d8af4  b 0x5d8a9c
  05d8af8  addi 11, 11, 1
  05d8afc  li 18, 94
  05d8b00  stw 11, 12(3)
  05d8b04  b 0x5d8a8c
  05d8b08  addi 3, 20, 1
  05d8b0c  addi 5, 21, -2
  05d8b10  clrldi 3, 3, 32
  05d8b14  clrldi 5, 5, 32
  05d8b18  li 4, 45
  05d8b1c  li 19, 1
  05d8b20  bl 0x5c5984
  05d8b24  nop
  05d8b28  cmpwi 7, 3, 0
  05d8b2c  bf 30, 0x5d85bc
  05d8b30  li 19, 0
  05d8b34  b 0x5d8ac8
  05d8b38  lwz 10, 16(30)
  05d8b3c  b 0x5d86b0
  05d8b40  extsw 31, 29
  05d8b44  b 0x5d8894
  05d8b48  lbz 0, 28(30)
  05d8b4c  extsb 0, 0
  05d8b50  cmpwi 7, 0, 0
  05d8b54  bf 30, 0x5d88d8
  05d8b58  cmpwi 7, 26, 0
  05d8b5c  bf 30, 0x5d8b70
  05d8b60  clrldi 9, 23, 32
  05d8b64  li 3, 1
  05d8b68  stb 0, 0(9)
  05d8b6c  b 0x5d86e4
  05d8b70  clrldi 9, 22, 32
  05d8b74  li 3, 1
  05d8b78  sth 0, 0(9)
  05d8b7c  b 0x5d86e4

FUN_005d8b80:   # 0x5d8b80, 0x28 bytes
  05d8b80  stdu 1, -112(1)
  05d8b84  mflr 0
  05d8b88  std 0, 128(1)
  05d8b8c  bl 0x5d5d10
  05d8b90  nop
  05d8b94  ld 0, 128(1)
  05d8b98  extsh 3, 3
  05d8b9c  mtlr 0
  05d8ba0  addi 1, 1, 112
  05d8ba4  blr
