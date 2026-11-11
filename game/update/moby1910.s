# game/update/moby1910.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1910_002d8600:   # 0x2d8600, 0x14 bytes
  02d8600  lis 3, 126
  02d8604  lis 4, 1
  02d8608  addic 3, 3, -25916
  02d860c  stw 4, 72(3)
  02d8610  blr

M1910_002d8630:   # 0x2d8630, 0x228 bytes
  02d8630  stdu 1, -64(1)
  02d8634  stfd 30, 48(1)
  02d8638  stfd 31, 56(1)
  02d863c  cmpwi 3, 0
  02d8640  li 8, 0
  02d8644  bf 1, 0x2d8848
  02d8648  ori 9, 4, 0
  02d864c  lis 4, 46
  02d8650  lis 6, 149
  02d8654  addi 10, 4, -31208
  02d8658  ori 4, 7, 0
  02d865c  addic 7, 6, 5056
  02d8660  ori 6, 5, 0
  02d8664  ori 5, 9, 0
  02d8668  lfs 5, 0(10)
  02d866c  lfs 4, 4(10)
  02d8670  lfs 3, 8(10)
  02d8674  lfs 2, 12(10)
  02d8678  lfs 1, 16(10)
  02d867c  lfs 10, 4(6)
  02d8680  lfs 6, 324(7)
  02d8684  lfs 11, 0(6)
  02d8688  fsubs 10, 10, 6
  02d868c  lfs 6, 320(7)
  02d8690  lfs 9, 8(6)
  02d8694  fsubs 11, 11, 6
  02d8698  lfs 6, 328(7)
  02d869c  fsubs 9, 9, 6
  02d86a0  fmr 8, 5
  02d86a4  fmuls 6, 10, 10
  02d86a8  fmr 7, 8
  02d86ac  fmadds 12, 11, 11, 6
  02d86b0  fmr 6, 7
  02d86b4  fmadds 12, 9, 9, 12
  02d86b8  fsqrts 13, 12
  02d86bc  fcmpu 0, 13, 6
  02d86c0  bt 2, 0x2d8704
  02d86c4  frsqrte 6, 12
  02d86c8  fmuls 7, 12, 6
  02d86cc  fmuls 8, 6, 4
  02d86d0  fnmsubs 7, 7, 6, 3
  02d86d4  fmadds 6, 7, 8, 6
  02d86d8  fmuls 7, 12, 6
  02d86dc  fmuls 8, 6, 4
  02d86e0  fnmsubs 7, 7, 6, 3
  02d86e4  fmadds 6, 7, 8, 6
  02d86e8  fmuls 7, 12, 6
  02d86ec  fmuls 8, 6, 4
  02d86f0  fnmsubs 7, 7, 6, 3
  02d86f4  fmadds 6, 7, 8, 6
  02d86f8  fmuls 8, 11, 6
  02d86fc  fmuls 7, 10, 6
  02d8700  fmuls 6, 9, 6
  02d8704  lfs 0, 4(5)
  02d8708  lfs 31, 0(5)
  02d870c  fmuls 9, 0, 0
  02d8710  lfs 13, 8(5)
  02d8714  fmr 11, 5
  02d8718  fmadds 12, 31, 31, 9
  02d871c  fmr 10, 11
  02d8720  fmadds 12, 13, 13, 12
  02d8724  fmr 9, 10
  02d8728  fsqrts 30, 12
  02d872c  fcmpu 0, 30, 9
  02d8730  bt 2, 0x2d8774
  02d8734  frsqrte 9, 12
  02d8738  fmuls 10, 12, 9
  02d873c  fmuls 11, 9, 4
  02d8740  fnmsubs 10, 10, 9, 3
  02d8744  fmadds 9, 10, 11, 9
  02d8748  fmuls 10, 12, 9
  02d874c  fmuls 11, 9, 4
  02d8750  fnmsubs 10, 10, 9, 3
  02d8754  fmadds 9, 10, 11, 9
  02d8758  fmuls 10, 12, 9
  02d875c  fmuls 11, 9, 4
  02d8760  fnmsubs 10, 10, 9, 3
  02d8764  fmadds 9, 10, 11, 9
  02d8768  fmuls 11, 9, 31
  02d876c  fmuls 10, 9, 0
  02d8770  fmuls 9, 9, 13
  02d8774  fmr 12, 6
  02d8778  fmuls 6, 7, 10
  02d877c  fmadds 6, 8, 11, 6
  02d8780  fmadds 6, 12, 9, 6
  02d8784  fmuls 13, 6, 2
  02d8788  fnmsubs 6, 13, 10, 7
  02d878c  fnmsubs 7, 13, 11, 8
  02d8790  fnmsubs 8, 13, 9, 12
  02d8794  fmr 12, 5
  02d8798  fmuls 9, 6, 6
  02d879c  fmr 11, 12
  02d87a0  fmadds 9, 7, 7, 9
  02d87a4  fmr 10, 11
  02d87a8  fmadds 9, 8, 8, 9
  02d87ac  fsqrts 13, 9
  02d87b0  fcmpu 0, 13, 10
  02d87b4  bt 2, 0x2d87f8
  02d87b8  frsqrte 10, 9
  02d87bc  fmuls 11, 9, 10
  02d87c0  fmuls 12, 10, 4
  02d87c4  fnmsubs 11, 11, 10, 3
  02d87c8  fmadds 10, 11, 12, 10
  02d87cc  fmuls 11, 9, 10
  02d87d0  fmuls 12, 10, 4
  02d87d4  fnmsubs 11, 11, 10, 3
  02d87d8  fmadds 10, 11, 12, 10
  02d87dc  fmuls 9, 9, 10
  02d87e0  fmuls 11, 10, 4
  02d87e4  fnmsubs 9, 9, 10, 3
  02d87e8  fmadds 10, 9, 11, 10
  02d87ec  fmuls 12, 10, 7
  02d87f0  fmuls 11, 10, 6
  02d87f4  fmuls 10, 10, 8
  02d87f8  fmuls 6, 11, 11
  02d87fc  fadds 7, 10, 3
  02d8800  addic 8, 8, 1
  02d8804  addic 6, 6, 12
  02d8808  cmpw 8, 3
  02d880c  fmadds 6, 12, 12, 6
  02d8810  addic 5, 5, 12
  02d8814  fmadds 6, 7, 7, 6
  02d8818  fsqrts 6, 6
  02d881c  fmuls 6, 6, 2
  02d8820  fdivs 7, 12, 6
  02d8824  fdivs 6, 11, 6
  02d8828  fadds 7, 7, 4
  02d882c  fmuls 7, 7, 1
  02d8830  fadds 6, 6, 4
  02d8834  stfs 7, 0(4)
  02d8838  fmuls 6, 6, 1
  02d883c  stfs 6, 4(4)
  02d8840  addic 4, 4, 8
  02d8844  bt 0, 0x2d867c
  02d8848  lfd 30, 48(1)
  02d884c  lfd 31, 56(1)
  02d8850  addi 1, 1, 64
  02d8854  blr

M1910_002d8858:   # 0x2d8858, 0x19c bytes
  02d8858  stdu 1, -176(1)
  02d885c  mflr 0
  02d8860  std 0, 192(1)
  02d8864  std 31, 168(1)
  02d8868  std 30, 160(1)
  02d886c  std 29, 152(1)
  02d8870  std 28, 144(1)
  02d8874  std 27, 136(1)
  02d8878  std 26, 128(1)
  02d887c  std 25, 120(1)
  02d8880  li 3, 48
  02d8884  bl 0x685c4
  02d8888  nop
  02d888c  ori 4, 3, 0
  02d8890  li 3, 24
  02d8894  bl 0x174f80
  02d8898  nop
  02d889c  li 3, 0
  02d88a0  li 4, 1
  02d88a4  li 5, 2
  02d88a8  li 6, 1
  02d88ac  li 7, 32
  02d88b0  bl 0x502ea8
  02d88b4  nop
  02d88b8  ori 4, 3, 0
  02d88bc  li 3, 3
  02d88c0  bl 0x174f80
  02d88c4  nop
  02d88c8  li 3, 0
  02d88cc  li 4, 0
  02d88d0  li 5, 0
  02d88d4  li 6, 0
  02d88d8  li 7, 0
  02d88dc  li 8, 0
  02d88e0  bl 0x502f08
  02d88e4  nop
  02d88e8  ori 4, 3, 0
  02d88ec  li 3, 6
  02d88f0  bl 0x174f80
  02d88f4  nop
  02d88f8  li 3, 0
  02d88fc  lis 9, 0
  02d8900  li 4, 0
  02d8904  li 5, 1
  02d8908  li 6, 1
  02d890c  li 7, 1
  02d8910  li 8, 0
  02d8914  ori 9, 9, 65424
  02d8918  bl 0x502fd4
  02d891c  nop
  02d8920  ori 4, 3, 0
  02d8924  li 3, 26
  02d8928  bl 0x174f80
  02d892c  nop
  02d8930  bl 0x71170
  02d8934  nop
  02d8938  lis 29, 126
  02d893c  lis 31, 126
  02d8940  lis 27, 126
  02d8944  lis 30, 126
  02d8948  lis 28, 126
  02d894c  lis 26, 267
  02d8950  li 25, 0
  02d8954  addic 27, 27, -24224
  02d8958  addic 29, 29, -25808
  02d895c  addic 28, 28, -24232
  02d8960  addic 31, 31, -24216
  02d8964  addic 30, 30, -24240
  02d8968  addic 26, 26, 31088
  02d896c  lwz 3, 0(29)
  02d8970  ori 7, 26, 0
  02d8974  lwz 4, 0(27)
  02d8978  lwz 5, 0(30)
  02d897c  extsw 3, 3
  02d8980  lwz 6, 0(28)
  02d8984  bl 0x2d8630
  02d8988  lwz 3, 0(29)
  02d898c  ori 6, 26, 0
  02d8990  lwz 4, 0(30)
  02d8994  li 7, 9
  02d8998  lwz 5, 0(31)
  02d899c  extsw 3, 3
  02d89a0  bl 0x74604
  02d89a4  nop
  02d89a8  addic 25, 25, 1
  02d89ac  addic 27, 27, 4
  02d89b0  cmpwi 25, 2
  02d89b4  addic 28, 28, 4
  02d89b8  addic 29, 29, 4
  02d89bc  addic 30, 30, 4
  02d89c0  addic 31, 31, 4
  02d89c4  bt 0, 0x2d896c
  02d89c8  ld 0, 192(1)
  02d89cc  mtlr 0
  02d89d0  ld 25, 120(1)
  02d89d4  ld 26, 128(1)
  02d89d8  ld 27, 136(1)
  02d89dc  ld 28, 144(1)
  02d89e0  ld 29, 152(1)
  02d89e4  ld 30, 160(1)
  02d89e8  ld 31, 168(1)
  02d89ec  addi 1, 1, 176
  02d89f0  blr

UpdateMoby_1910:   # 0x2d89f4, 0x60 bytes
  02d89f4  stdu 1, -112(1)
  02d89f8  mflr 0
  02d89fc  std 0, 128(1)
  02d8a00  lbz 4, 32(3)
  02d8a04  cmpwi 4, 0
  02d8a08  cmpwi 1, 4, 1
  02d8a0c  cmpwi 6, 4, -1
  02d8a10  bt 1, 0x2d8a1c
  02d8a14  bf 25, 0x2d8a44
  02d8a18  b 0x2d8a24
  02d8a1c  bf 5, 0x2d8a30
  02d8a20  b 0x2d8a44
  02d8a24  li 4, 1
  02d8a28  stb 4, 32(3)
  02d8a2c  b 0x2d8a44
  02d8a30  lis 5, 113
  02d8a34  ori 4, 3, 0
  02d8a38  addic 3, 5, -19400
  02d8a3c  bl 0x6d720
  02d8a40  nop
  02d8a44  ld 0, 128(1)
  02d8a48  mtlr 0
  02d8a4c  addi 1, 1, 112
  02d8a50  blr
