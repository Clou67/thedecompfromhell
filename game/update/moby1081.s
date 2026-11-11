# game/update/moby1081.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1081_001b83a8:   # 0x1b83a8, 0x14 bytes
  01b83a8  lis 3, 117
  01b83ac  lis 4, 1
  01b83b0  addic 3, 3, 32736
  01b83b4  stw 4, 72(3)
  01b83b8  blr

UpdateMoby_1081:   # 0x1b8400, 0x131c bytes
  01b8400  stdu 1, -496(1)
  01b8404  mflr 0
  01b8408  std 0, 512(1)
  01b840c  stfd 30, 480(1)
  01b8410  stfd 31, 488(1)
  01b8414  std 31, 472(1)
  01b8418  std 28, 448(1)
  01b841c  ori 31, 3, 0
  01b8420  lis 28, 151
  01b8424  std 30, 464(1)
  01b8428  addic 28, 28, -25376
  01b842c  lwz 30, 120(31)
  01b8430  lfs 1, 128(28)
  01b8434  stfs 1, 0(30)
  01b8438  lfs 1, 132(28)
  01b843c  stfs 1, 4(30)
  01b8440  lfs 1, 136(28)
  01b8444  stfs 1, 8(30)
  01b8448  lfs 1, 140(28)
  01b844c  stfs 1, 12(30)
  01b8450  lbz 3, 32(31)
  01b8454  cmpwi 3, 5
  01b8458  cmpwi 1, 3, 4
  01b845c  cmpwi 6, 3, 3
  01b8460  std 29, 456(1)
  01b8464  cmpwi 7, 3, 2
  01b8468  bt 2, 0x1b8560
  01b846c  bt 6, 0x1b9298
  01b8470  bt 26, 0x1b8fdc
  01b8474  bt 30, 0x1b8b8c
  01b8478  cmpwi 3, 1
  01b847c  bt 2, 0x1b88d4
  01b8480  cmpwi 3, 0
  01b8484  bf 2, 0x1b96e4
  01b8488  li 3, 1
  01b848c  lis 5, 118
  01b8490  lis 4, 118
  01b8494  lis 6, 118
  01b8498  stb 3, 31(30)
  01b849c  lwz 5, -32692(5)
  01b84a0  stb 5, 28(30)
  01b84a4  lwz 4, -32684(4)
  01b84a8  stb 4, 30(30)
  01b84ac  lwz 4, -32688(6)
  01b84b0  stb 4, 29(30)
  01b84b4  lfs 1, 16(31)
  01b84b8  lis 4, 28
  01b84bc  stfs 1, 272(30)
  01b84c0  lfs 1, 20(31)
  01b84c4  addi 4, 4, -31808
  01b84c8  stfs 1, 276(30)
  01b84cc  lfs 1, 24(31)
  01b84d0  stfs 1, 280(30)
  01b84d4  lfs 1, 28(31)
  01b84d8  stfs 1, 284(30)
  01b84dc  lfs 1, 16(31)
  01b84e0  stfs 1, 288(30)
  01b84e4  lfs 1, 20(31)
  01b84e8  stfs 1, 292(30)
  01b84ec  lfs 2, 24(31)
  01b84f0  stfs 2, 296(30)
  01b84f4  lfs 2, 28(31)
  01b84f8  stfs 2, 300(30)
  01b84fc  lfs 2, 0(4)
  01b8500  stw 3, 308(30)
  01b8504  li 4, 5
  01b8508  fadds 1, 1, 2
  01b850c  stfs 1, 292(30)
  01b8510  lbz 3, 83(31)
  01b8514  stb 4, 32(31)
  01b8518  cmpwi 3, 5
  01b851c  bt 2, 0x1b96e4
  01b8520  lis 3, 28
  01b8524  lis 4, 114
  01b8528  addi 3, 3, -31808
  01b852c  li 5, 0
  01b8530  lfs 1, 4(3)
  01b8534  lfs 2, -3056(4)
  01b8538  ori 3, 31, 0
  01b853c  fmuls 1, 2, 1
  01b8540  li 4, 5
  01b8544  fctiwz 1, 1
  01b8548  stfd 1, 424(1)
  01b854c  lwz 6, 428(1)
  01b8550  extsw 6, 6
  01b8554  bl 0xfddc0
  01b8558  nop
  01b855c  b 0x1b96e4
  01b8560  li 3, 1
  01b8564  lwz 4, 308(30)
  01b8568  lis 5, 115
  01b856c  stb 3, 31(30)
  01b8570  slwi 3, 4, 4
  01b8574  lfs 1, 16(31)
  01b8578  lfs 2, 20(31)
  01b857c  addc 3, 30, 3
  01b8580  clrldi 3, 3, 32
  01b8584  addic 5, 5, 22784
  01b8588  lfs 3, 272(3)
  01b858c  lfs 4, 276(3)
  01b8590  fsubs 1, 3, 1
  01b8594  lis 3, 28
  01b8598  fsubs 2, 4, 2
  01b859c  addi 4, 3, -31808
  01b85a0  addic 3, 31, 72
  01b85a4  fabs 3, 1
  01b85a8  fabs 5, 2
  01b85ac  stfs 1, 184(1)
  01b85b0  stfs 2, 188(1)
  01b85b4  fsubs 1, 3, 5
  01b85b8  stfs 1, 192(1)
  01b85bc  lwz 6, 184(1)
  01b85c0  lfs 4, 8(4)
  01b85c4  lfs 1, 184(1)
  01b85c8  lwz 4, 188(1)
  01b85cc  lfs 2, 188(1)
  01b85d0  lwz 7, 192(1)
  01b85d4  rlwinm 4, 4, 3, 29, 29
  01b85d8  fabs 6, 2
  01b85dc  lfs 2, 192(1)
  01b85e0  fabs 1, 1
  01b85e4  rlwimi 4, 7, 2, 30, 30
  01b85e8  fsub 7, 2, 4
  01b85ec  rlwimi 4, 6, 4, 28, 28
  01b85f0  fsub 8, 2, 4
  01b85f4  ori 6, 5, 0
  01b85f8  rlwimi 6, 4, 2, 26, 28
  01b85fc  slwi 4, 4, 2
  01b8600  clrldi 6, 6, 32
  01b8604  fsel 5, 7, 1, 5
  01b8608  lfsx 1, 5, 4
  01b860c  lfs 2, 4(6)
  01b8610  fsel 3, 8, 6, 3
  01b8614  fcmpu 0, 5, 4
  01b8618  bt 1, 0x1b8620
  01b861c  b 0x1b8740
  01b8620  fsubs 6, 3, 5
  01b8624  fadds 3, 3, 5
  01b8628  addic 4, 1, 16
  01b862c  li 7, 2
  01b8630  addic 5, 4, 372
  01b8634  addic 6, 4, 388
  01b8638  mtctr 7
  01b863c  fdivs 3, 6, 3
  01b8640  fmuls 5, 3, 3
  01b8644  stfs 3, 400(1)
  01b8648  stfs 3, 392(1)
  01b864c  stfs 3, 396(1)
  01b8650  stfs 3, 388(1)
  01b8654  lfs 7, 400(1)
  01b8658  lfs 8, 392(1)
  01b865c  lfs 9, 396(1)
  01b8660  fmuls 6, 5, 5
  01b8664  fmuls 8, 8, 5
  01b8668  fmuls 7, 7, 6
  01b866c  fmuls 3, 6, 6
  01b8670  fmuls 6, 9, 6
  01b8674  stfs 8, 392(1)
  01b8678  fmuls 5, 7, 5
  01b867c  stfs 6, 396(1)
  01b8680  stfs 5, 400(1)
  01b8684  lfs 5, 372(4)
  01b8688  fmuls 5, 5, 3
  01b868c  stfs 5, 388(4)
  01b8690  lfs 5, 4(5)
  01b8694  addic 4, 4, 8
  01b8698  addic 5, 5, 8
  01b869c  fmuls 5, 5, 3
  01b86a0  stfs 5, 4(6)
  01b86a4  addic 6, 6, 8
  01b86a8  bdnz 0x1b8684
  01b86ac  li 6, 4
  01b86b0  ori 4, 1, 0
  01b86b4  mtctr 6
  01b86b8  lis 5, 115
  01b86bc  addic 6, 4, 388
  01b86c0  addic 5, 5, 22752
  01b86c4  ori 8, 6, 0
  01b86c8  lfs 3, 388(4)
  01b86cc  lfs 5, 0(5)
  01b86d0  fmuls 3, 3, 5
  01b86d4  lfs 5, 4(5)
  01b86d8  addic 5, 5, 8
  01b86dc  stfs 3, 388(4)
  01b86e0  lfs 3, 4(6)
  01b86e4  addic 4, 4, 8
  01b86e8  fmuls 3, 3, 5
  01b86ec  stfs 3, 4(6)
  01b86f0  addic 6, 6, 8
  01b86f4  bdnz 0x1b86c8
  01b86f8  ori 4, 1, 0
  01b86fc  mtctr 7
  01b8700  lfs 3, 388(4)
  01b8704  fadds 3, 4, 3
  01b8708  lfs 4, 4(8)
  01b870c  addic 4, 4, 16
  01b8710  lfs 5, 8(8)
  01b8714  lfs 6, 12(8)
  01b8718  addic 8, 8, 16
  01b871c  fadds 3, 3, 4
  01b8720  fadds 4, 3, 5
  01b8724  fadds 4, 4, 6
  01b8728  bdnz 0x1b8700
  01b872c  lis 4, 28
  01b8730  addi 4, 4, -31808
  01b8734  lfs 3, 12(4)
  01b8738  fadds 4, 4, 3
  01b873c  fmadds 4, 4, 1, 2
  01b8740  lis 4, 28
  01b8744  lis 5, 118
  01b8748  addi 29, 4, -31808
  01b874c  lis 4, 118
  01b8750  lis 6, 114
  01b8754  lis 28, 114
  01b8758  lfs 1, 16(29)
  01b875c  lfs 2, -32656(4)
  01b8760  lfs 3, -32652(5)
  01b8764  fmuls 2, 2, 1
  01b8768  lfs 5, -3048(6)
  01b876c  fmuls 3, 3, 1
  01b8770  lfs 6, -3052(28)
  01b8774  fmr 1, 4
  01b8778  addic 5, 30, 304
  01b877c  fmuls 2, 2, 5
  01b8780  fmuls 4, 3, 6
  01b8784  fmr 3, 2
  01b8788  bl 0x10a2e0
  01b878c  nop
  01b8790  lfs 1, 20(29)
  01b8794  lfs 2, 24(29)
  01b8798  lfs 3, 72(31)
  01b879c  lfs 4, 28(29)
  01b87a0  fadds 1, 3, 1
  01b87a4  fsubs 5, 2, 3
  01b87a8  fsubs 6, 4, 3
  01b87ac  fsubs 2, 2, 1
  01b87b0  fsub 7, 3, 5
  01b87b4  fsubs 4, 4, 1
  01b87b8  fsub 8, 1, 2
  01b87bc  fsel 3, 7, 5, 3
  01b87c0  lfs 5, 32(29)
  01b87c4  fsel 1, 8, 2, 1
  01b87c8  fsub 2, 6, 3
  01b87cc  fsub 8, 4, 1
  01b87d0  fsel 2, 2, 6, 3
  01b87d4  lfs 3, 36(29)
  01b87d8  lfs 6, 40(29)
  01b87dc  lfs 7, -3052(28)
  01b87e0  fsel 1, 8, 4, 1
  01b87e4  fmuls 4, 2, 2
  01b87e8  lfs 8, 44(29)
  01b87ec  lfs 9, 48(29)
  01b87f0  fmuls 7, 7, 9
  01b87f4  lfs 12, 20(31)
  01b87f8  fmuls 10, 1, 1
  01b87fc  fmuls 11, 4, 2
  01b8800  fmuls 13, 10, 1
  01b8804  fmuls 0, 4, 11
  01b8808  fmadds 2, 11, 5, 2
  01b880c  lfs 11, 16(31)
  01b8810  lwz 3, 308(30)
  01b8814  slwi 4, 3, 4
  01b8818  addc 4, 30, 4
  01b881c  fmuls 9, 10, 13
  01b8820  fmadds 1, 13, 5, 1
  01b8824  fmuls 5, 4, 0
  01b8828  fmadds 2, 0, 3, 2
  01b882c  clrldi 4, 4, 32
  01b8830  fmuls 13, 10, 9
  01b8834  fmadds 1, 9, 3, 1
  01b8838  fmuls 3, 4, 5
  01b883c  fmadds 2, 5, 6, 2
  01b8840  fmuls 4, 10, 13
  01b8844  fmadds 1, 13, 6, 1
  01b8848  fmadds 2, 3, 8, 2
  01b884c  fmadds 1, 4, 8, 1
  01b8850  fmadds 2, 7, 2, 12
  01b8854  fmadds 1, 7, 1, 11
  01b8858  stfs 2, 20(31)
  01b885c  stfs 1, 16(31)
  01b8860  lfs 1, 272(4)
  01b8864  stfs 1, 0(30)
  01b8868  lfs 1, 276(4)
  01b886c  stfs 1, 4(30)
  01b8870  lfs 1, 280(4)
  01b8874  stfs 1, 8(30)
  01b8878  lfs 1, 284(4)
  01b887c  stfs 1, 12(30)
  01b8880  lfs 1, 20(31)
  01b8884  lfs 2, 276(4)
  01b8888  lfs 3, 272(4)
  01b888c  fsubs 1, 1, 2
  01b8890  lfs 2, 24(31)
  01b8894  lfs 4, 280(4)
  01b8898  lfs 5, 16(31)
  01b889c  fsubs 2, 2, 4
  01b88a0  fsubs 3, 5, 3
  01b88a4  fmuls 1, 1, 1
  01b88a8  fmadds 1, 3, 3, 1
  01b88ac  fmadds 1, 2, 2, 1
  01b88b0  lfs 2, 52(29)
  01b88b4  fsqrts 1, 1
  01b88b8  fcmpu 0, 1, 2
  01b88bc  cror 6, 1, 2
  01b88c0  bt 6, 0x1b96e4
  01b88c4  addic 3, 3, 1
  01b88c8  clrlwi 3, 3, 31
  01b88cc  stw 3, 308(30)
  01b88d0  b 0x1b96e4
  01b88d4  li 3, 1
  01b88d8  stb 3, 31(30)
  01b88dc  lwz 3, 4240(28)
  01b88e0  lfs 4, 72(31)
  01b88e4  lfs 1, 128(28)
  01b88e8  lfs 2, 16(31)
  01b88ec  cmpwi 3, 0
  01b88f0  lfs 3, 132(28)
  01b88f4  lfs 5, 20(31)
  01b88f8  bt 2, 0x1b895c
  01b88fc  lhz 3, 166(3)
  01b8900  cmpwi 3, 71
  01b8904  bt 2, 0x1b895c
  01b8908  li 3, 3
  01b890c  lbz 4, 83(31)
  01b8910  cmpwi 4, 2
  01b8914  stb 3, 32(31)
  01b8918  bt 2, 0x1b96e4
  01b891c  lis 3, 28
  01b8920  lis 4, 114
  01b8924  addi 3, 3, -31808
  01b8928  li 5, 0
  01b892c  lfs 1, 56(3)
  01b8930  lfs 2, -3056(4)
  01b8934  ori 3, 31, 0
  01b8938  li 4, 2
  01b893c  fmuls 1, 2, 1
  01b8940  fctiwz 1, 1
  01b8944  stfd 1, 424(1)
  01b8948  lwz 6, 428(1)
  01b894c  extsw 6, 6
  01b8950  bl 0xfddc0
  01b8954  nop
  01b8958  b 0x1b96e4
  01b895c  fsubs 1, 1, 2
  01b8960  fsubs 2, 3, 5
  01b8964  lis 3, 28
  01b8968  addi 3, 3, -31808
  01b896c  lis 4, 115
  01b8970  addic 4, 4, 22784
  01b8974  fabs 5, 1
  01b8978  fabs 6, 2
  01b897c  stfs 1, 172(1)
  01b8980  stfs 2, 176(1)
  01b8984  fsubs 1, 5, 6
  01b8988  stfs 1, 180(1)
  01b898c  lwz 5, 172(1)
  01b8990  lfs 3, 8(3)
  01b8994  lfs 1, 172(1)
  01b8998  lwz 3, 176(1)
  01b899c  lfs 2, 176(1)
  01b89a0  lwz 6, 180(1)
  01b89a4  rlwinm 3, 3, 3, 29, 29
  01b89a8  fabs 7, 2
  01b89ac  lfs 2, 180(1)
  01b89b0  fabs 1, 1
  01b89b4  rlwimi 3, 6, 2, 30, 30
  01b89b8  fsub 8, 2, 3
  01b89bc  rlwimi 3, 5, 4, 28, 28
  01b89c0  fsub 9, 2, 3
  01b89c4  ori 5, 4, 0
  01b89c8  rlwimi 5, 3, 2, 26, 28
  01b89cc  slwi 3, 3, 2
  01b89d0  clrldi 5, 5, 32
  01b89d4  fsel 6, 8, 1, 6
  01b89d8  lfsx 1, 4, 3
  01b89dc  lfs 2, 4(5)
  01b89e0  fsel 5, 9, 7, 5
  01b89e4  fcmpu 0, 6, 3
  01b89e8  bt 1, 0x1b89f0
  01b89ec  b 0x1b8b10
  01b89f0  fsubs 7, 5, 6
  01b89f4  fadds 5, 5, 6
  01b89f8  addic 3, 1, 16
  01b89fc  li 6, 2
  01b8a00  addic 4, 3, 340
  01b8a04  addic 5, 3, 356
  01b8a08  mtctr 6
  01b8a0c  fdivs 5, 7, 5
  01b8a10  fmuls 6, 5, 5
  01b8a14  stfs 5, 368(1)
  01b8a18  stfs 5, 360(1)
  01b8a1c  stfs 5, 364(1)
  01b8a20  stfs 5, 356(1)
  01b8a24  lfs 8, 368(1)
  01b8a28  lfs 9, 360(1)
  01b8a2c  lfs 10, 364(1)
  01b8a30  fmuls 7, 6, 6
  01b8a34  fmuls 9, 9, 6
  01b8a38  fmuls 8, 8, 7
  01b8a3c  fmuls 5, 7, 7
  01b8a40  fmuls 7, 10, 7
  01b8a44  stfs 9, 360(1)
  01b8a48  fmuls 6, 8, 6
  01b8a4c  stfs 7, 364(1)
  01b8a50  stfs 6, 368(1)
  01b8a54  lfs 6, 340(3)
  01b8a58  fmuls 6, 6, 5
  01b8a5c  stfs 6, 356(3)
  01b8a60  lfs 6, 4(4)
  01b8a64  addic 3, 3, 8
  01b8a68  addic 4, 4, 8
  01b8a6c  fmuls 6, 6, 5
  01b8a70  stfs 6, 4(5)
  01b8a74  addic 5, 5, 8
  01b8a78  bdnz 0x1b8a54
  01b8a7c  li 5, 4
  01b8a80  ori 3, 1, 0
  01b8a84  mtctr 5
  01b8a88  lis 4, 115
  01b8a8c  addic 5, 3, 356
  01b8a90  addic 4, 4, 22752
  01b8a94  ori 7, 5, 0
  01b8a98  lfs 5, 356(3)
  01b8a9c  lfs 6, 0(4)
  01b8aa0  fmuls 5, 5, 6
  01b8aa4  lfs 6, 4(4)
  01b8aa8  addic 4, 4, 8
  01b8aac  stfs 5, 356(3)
  01b8ab0  lfs 5, 4(5)
  01b8ab4  addic 3, 3, 8
  01b8ab8  fmuls 5, 5, 6
  01b8abc  stfs 5, 4(5)
  01b8ac0  addic 5, 5, 8
  01b8ac4  bdnz 0x1b8a98
  01b8ac8  ori 3, 1, 0
  01b8acc  mtctr 6
  01b8ad0  lfs 5, 356(3)
  01b8ad4  fadds 3, 3, 5
  01b8ad8  lfs 5, 4(7)
  01b8adc  addic 3, 3, 16
  01b8ae0  lfs 6, 8(7)
  01b8ae4  lfs 7, 12(7)
  01b8ae8  addic 7, 7, 16
  01b8aec  fadds 3, 3, 5
  01b8af0  fadds 3, 3, 6
  01b8af4  fadds 3, 3, 7
  01b8af8  bdnz 0x1b8ad0
  01b8afc  lis 3, 28
  01b8b00  addi 3, 3, -31808
  01b8b04  lfs 5, 12(3)
  01b8b08  fadds 3, 3, 5
  01b8b0c  fmadds 3, 3, 1, 2
  01b8b10  fmr 1, 4
  01b8b14  fmr 2, 3
  01b8b18  bl 0x5026a0
  01b8b1c  nop
  01b8b20  lis 3, 28
  01b8b24  addi 3, 3, -31808
  01b8b28  lfs 2, 60(3)
  01b8b2c  fcmpu 0, 1, 2
  01b8b30  cror 6, 0, 2
  01b8b34  bt 6, 0x1b96e4
  01b8b38  li 3, 2
  01b8b3c  lbz 4, 83(31)
  01b8b40  cmpwi 4, 3
  01b8b44  stb 3, 32(31)
  01b8b48  bt 2, 0x1b96e4
  01b8b4c  lis 3, 28
  01b8b50  lis 4, 114
  01b8b54  addi 3, 3, -31808
  01b8b58  li 5, 0
  01b8b5c  lfs 1, 56(3)
  01b8b60  lfs 2, -3056(4)
  01b8b64  ori 3, 31, 0
  01b8b68  li 4, 3
  01b8b6c  fmuls 1, 2, 1
  01b8b70  fctiwz 1, 1
  01b8b74  stfd 1, 424(1)
  01b8b78  lwz 6, 428(1)
  01b8b7c  extsw 6, 6
  01b8b80  bl 0xfddc0
  01b8b84  nop
  01b8b88  b 0x1b96e4
  01b8b8c  lfs 1, 128(28)
  01b8b90  lfs 2, 16(31)
  01b8b94  lfs 3, 132(28)
  01b8b98  lfs 4, 20(31)
  01b8b9c  fsubs 1, 1, 2
  01b8ba0  lis 3, 28
  01b8ba4  fsubs 2, 3, 4
  01b8ba8  addi 4, 3, -31808
  01b8bac  lis 29, 115
  01b8bb0  addic 3, 31, 72
  01b8bb4  addic 29, 29, 22784
  01b8bb8  fabs 3, 1
  01b8bbc  fabs 4, 2
  01b8bc0  stfs 1, 160(1)
  01b8bc4  stfs 2, 164(1)
  01b8bc8  fsubs 1, 3, 4
  01b8bcc  stfs 1, 168(1)
  01b8bd0  lwz 5, 160(1)
  01b8bd4  lfs 31, 8(4)
  01b8bd8  lfs 1, 160(1)
  01b8bdc  lwz 4, 164(1)
  01b8be0  lfs 2, 164(1)
  01b8be4  fabs 1, 1
  01b8be8  lwz 6, 168(1)
  01b8bec  rlwinm 4, 4, 3, 29, 29
  01b8bf0  fabs 5, 2
  01b8bf4  lfs 2, 168(1)
  01b8bf8  rlwimi 4, 6, 2, 30, 30
  01b8bfc  fsub 6, 2, 31
  01b8c00  rlwimi 4, 5, 4, 28, 28
  01b8c04  fsub 7, 2, 31
  01b8c08  ori 5, 29, 0
  01b8c0c  rlwimi 5, 4, 2, 26, 28
  01b8c10  slwi 4, 4, 2
  01b8c14  clrldi 5, 5, 32
  01b8c18  fsel 4, 6, 1, 4
  01b8c1c  lfsx 1, 29, 4
  01b8c20  lfs 2, 4(5)
  01b8c24  fsel 3, 7, 5, 3
  01b8c28  fcmpu 0, 4, 31
  01b8c2c  bt 1, 0x1b8c38
  01b8c30  fmr 1, 31
  01b8c34  b 0x1b8d5c
  01b8c38  fsubs 5, 3, 4
  01b8c3c  fadds 3, 3, 4
  01b8c40  addic 4, 1, 16
  01b8c44  li 8, 2
  01b8c48  addic 5, 4, 308
  01b8c4c  addic 6, 4, 324
  01b8c50  mtctr 8
  01b8c54  fdivs 3, 5, 3
  01b8c58  fmuls 4, 3, 3
  01b8c5c  stfs 3, 336(1)
  01b8c60  stfs 3, 328(1)
  01b8c64  stfs 3, 332(1)
  01b8c68  stfs 3, 324(1)
  01b8c6c  lfs 6, 336(1)
  01b8c70  lfs 7, 328(1)
  01b8c74  lfs 8, 332(1)
  01b8c78  fmuls 5, 4, 4
  01b8c7c  fmuls 7, 7, 4
  01b8c80  fmuls 6, 6, 5
  01b8c84  fmuls 3, 5, 5
  01b8c88  fmuls 5, 8, 5
  01b8c8c  stfs 7, 328(1)
  01b8c90  fmuls 4, 6, 4
  01b8c94  stfs 5, 332(1)
  01b8c98  stfs 4, 336(1)
  01b8c9c  lfs 4, 308(4)
  01b8ca0  fmuls 4, 4, 3
  01b8ca4  stfs 4, 324(4)
  01b8ca8  lfs 4, 4(5)
  01b8cac  addic 4, 4, 8
  01b8cb0  addic 5, 5, 8
  01b8cb4  fmuls 4, 4, 3
  01b8cb8  stfs 4, 4(6)
  01b8cbc  addic 6, 6, 8
  01b8cc0  bdnz 0x1b8c9c
  01b8cc4  li 6, 4
  01b8cc8  ori 4, 1, 0
  01b8ccc  mtctr 6
  01b8cd0  lis 5, 115
  01b8cd4  addic 6, 4, 324
  01b8cd8  addic 5, 5, 22752
  01b8cdc  ori 7, 6, 0
  01b8ce0  lfs 3, 324(4)
  01b8ce4  lfs 4, 0(5)
  01b8ce8  fmuls 3, 3, 4
  01b8cec  lfs 4, 4(5)
  01b8cf0  addic 5, 5, 8
  01b8cf4  stfs 3, 324(4)
  01b8cf8  lfs 3, 4(6)
  01b8cfc  addic 4, 4, 8
  01b8d00  fmuls 3, 3, 4
  01b8d04  stfs 3, 4(6)
  01b8d08  addic 6, 6, 8
  01b8d0c  bdnz 0x1b8ce0
  01b8d10  fmr 3, 31
  01b8d14  ori 4, 1, 0
  01b8d18  mtctr 8
  01b8d1c  lfs 4, 324(4)
  01b8d20  fadds 3, 3, 4
  01b8d24  addic 4, 4, 16
  01b8d28  lfs 4, 4(7)
  01b8d2c  lfs 5, 8(7)
  01b8d30  lfs 6, 12(7)
  01b8d34  addic 7, 7, 16
  01b8d38  fadds 3, 3, 4
  01b8d3c  fadds 3, 3, 5
  01b8d40  fadds 3, 3, 6
  01b8d44  bdnz 0x1b8d1c
  01b8d48  lis 4, 28
  01b8d4c  addi 4, 4, -31808
  01b8d50  lfs 4, 12(4)
  01b8d54  fadds 3, 3, 4
  01b8d58  fmadds 1, 3, 1, 2
  01b8d5c  lis 4, 28
  01b8d60  lis 5, 118
  01b8d64  addi 4, 4, -31808
  01b8d68  lis 6, 114
  01b8d6c  lfs 30, 16(4)
  01b8d70  lfs 2, -32656(5)
  01b8d74  lis 4, 118
  01b8d78  lfs 3, -3048(6)
  01b8d7c  addic 5, 30, 304
  01b8d80  fmuls 2, 2, 30
  01b8d84  lis 6, 114
  01b8d88  lfs 4, -32652(4)
  01b8d8c  fmuls 4, 4, 30
  01b8d90  lfs 5, -3052(6)
  01b8d94  fmuls 2, 2, 3
  01b8d98  fmuls 4, 4, 5
  01b8d9c  fmr 3, 2
  01b8da0  bl 0x10a2e0
  01b8da4  nop
  01b8da8  li 3, 1
  01b8dac  stb 3, 31(30)
  01b8db0  lfs 1, 128(28)
  01b8db4  lfs 2, 16(31)
  01b8db8  lfs 3, 132(28)
  01b8dbc  lfs 4, 20(31)
  01b8dc0  fsubs 1, 1, 2
  01b8dc4  fsubs 2, 3, 4
  01b8dc8  fabs 4, 1
  01b8dcc  fabs 5, 2
  01b8dd0  stfs 1, 148(1)
  01b8dd4  stfs 2, 152(1)
  01b8dd8  lfs 3, 72(31)
  01b8ddc  fsubs 1, 4, 5
  01b8de0  stfs 1, 156(1)
  01b8de4  lwz 3, 148(1)
  01b8de8  lfs 1, 148(1)
  01b8dec  lwz 4, 152(1)
  01b8df0  lfs 2, 152(1)
  01b8df4  fabs 1, 1
  01b8df8  lwz 5, 156(1)
  01b8dfc  rlwinm 4, 4, 3, 29, 29
  01b8e00  fabs 6, 2
  01b8e04  lfs 2, 156(1)
  01b8e08  rlwimi 4, 5, 2, 30, 30
  01b8e0c  fsub 7, 2, 31
  01b8e10  fsub 8, 2, 31
  01b8e14  rlwimi 4, 3, 4, 28, 28
  01b8e18  ori 3, 29, 0
  01b8e1c  rlwimi 3, 4, 2, 26, 28
  01b8e20  slwi 4, 4, 2
  01b8e24  clrldi 3, 3, 32
  01b8e28  fsel 5, 7, 1, 5
  01b8e2c  lfsx 1, 29, 4
  01b8e30  lfs 2, 4(3)
  01b8e34  fsel 4, 8, 6, 4
  01b8e38  fcmpu 0, 5, 31
  01b8e3c  bt 1, 0x1b8e44
  01b8e40  b 0x1b8f64
  01b8e44  fsubs 6, 4, 5
  01b8e48  fadds 4, 4, 5
  01b8e4c  addic 3, 1, 16
  01b8e50  li 7, 2
  01b8e54  addic 5, 3, 292
  01b8e58  addic 4, 3, 276
  01b8e5c  mtctr 7
  01b8e60  fdivs 4, 6, 4
  01b8e64  fmuls 5, 4, 4
  01b8e68  stfs 4, 304(1)
  01b8e6c  stfs 4, 296(1)
  01b8e70  stfs 4, 300(1)
  01b8e74  stfs 4, 292(1)
  01b8e78  lfs 7, 304(1)
  01b8e7c  lfs 8, 296(1)
  01b8e80  lfs 9, 300(1)
  01b8e84  fmuls 6, 5, 5
  01b8e88  fmuls 8, 8, 5
  01b8e8c  fmuls 7, 7, 6
  01b8e90  fmuls 4, 6, 6
  01b8e94  fmuls 6, 9, 6
  01b8e98  stfs 8, 296(1)
  01b8e9c  fmuls 5, 7, 5
  01b8ea0  stfs 6, 300(1)
  01b8ea4  stfs 5, 304(1)
  01b8ea8  lfs 5, 276(3)
  01b8eac  fmuls 5, 5, 4
  01b8eb0  stfs 5, 292(3)
  01b8eb4  lfs 5, 4(4)
  01b8eb8  addic 4, 4, 8
  01b8ebc  fmuls 5, 5, 4
  01b8ec0  addic 3, 3, 8
  01b8ec4  stfs 5, 4(5)
  01b8ec8  addic 5, 5, 8
  01b8ecc  bdnz 0x1b8ea8
  01b8ed0  li 5, 4
  01b8ed4  ori 3, 1, 0
  01b8ed8  mtctr 5
  01b8edc  lis 4, 115
  01b8ee0  addic 5, 3, 292
  01b8ee4  addic 4, 4, 22752
  01b8ee8  ori 6, 5, 0
  01b8eec  lfs 4, 292(3)
  01b8ef0  lfs 5, 0(4)
  01b8ef4  fmuls 4, 4, 5
  01b8ef8  lfs 5, 4(4)
  01b8efc  addic 4, 4, 8
  01b8f00  stfs 4, 292(3)
  01b8f04  lfs 4, 4(5)
  01b8f08  addic 3, 3, 8
  01b8f0c  fmuls 4, 4, 5
  01b8f10  stfs 4, 4(5)
  01b8f14  addic 5, 5, 8
  01b8f18  bdnz 0x1b8eec
  01b8f1c  ori 3, 1, 0
  01b8f20  mtctr 7
  01b8f24  lfs 4, 292(3)
  01b8f28  lfs 5, 4(6)
  01b8f2c  fadds 4, 31, 4
  01b8f30  lfs 6, 8(6)
  01b8f34  addic 3, 3, 16
  01b8f38  lfs 31, 12(6)
  01b8f3c  addic 6, 6, 16
  01b8f40  fadds 4, 4, 5
  01b8f44  fadds 4, 4, 6
  01b8f48  fadds 31, 4, 31
  01b8f4c  bdnz 0x1b8f24
  01b8f50  lis 3, 28
  01b8f54  addi 3, 3, -31808
  01b8f58  lfs 4, 12(3)
  01b8f5c  fadds 31, 31, 4
  01b8f60  fmadds 31, 31, 1, 2
  01b8f64  fmr 1, 3
  01b8f68  fmr 2, 31
  01b8f6c  bl 0x5026a0
  01b8f70  nop
  01b8f74  fcmpu 0, 1, 30
  01b8f78  cror 6, 1, 2
  01b8f7c  bt 6, 0x1b96e4
  01b8f80  li 3, 0
  01b8f84  li 4, 1
  01b8f88  stw 3, 304(30)
  01b8f8c  lbz 3, 83(31)
  01b8f90  stb 4, 32(31)
  01b8f94  cmpwi 3, 0
  01b8f98  bt 2, 0x1b96e4
  01b8f9c  lis 3, 28
  01b8fa0  lis 4, 114
  01b8fa4  addi 3, 3, -31808
  01b8fa8  li 5, 0
  01b8fac  lfs 1, 56(3)
  01b8fb0  lfs 2, -3056(4)
  01b8fb4  ori 3, 31, 0
  01b8fb8  li 4, 0
  01b8fbc  fmuls 1, 2, 1
  01b8fc0  fctiwz 1, 1
  01b8fc4  stfd 1, 424(1)
  01b8fc8  lwz 6, 428(1)
  01b8fcc  extsw 6, 6
  01b8fd0  bl 0xfddc0
  01b8fd4  nop
  01b8fd8  b 0x1b96e4
  01b8fdc  li 3, 2
  01b8fe0  stb 3, 31(30)
  01b8fe4  lwz 3, 4240(28)
  01b8fe8  lfs 4, 72(31)
  01b8fec  lfs 1, 128(28)
  01b8ff0  lfs 2, 16(31)
  01b8ff4  cmpwi 3, 0
  01b8ff8  lfs 3, 132(28)
  01b8ffc  lfs 5, 20(31)
  01b9000  bt 2, 0x1b9064
  01b9004  lhz 3, 166(3)
  01b9008  cmpwi 3, 71
  01b900c  bf 2, 0x1b9064
  01b9010  li 3, 1
  01b9014  lbz 4, 83(31)
  01b9018  cmpwi 4, 0
  01b901c  stb 3, 32(31)
  01b9020  bt 2, 0x1b96e4
  01b9024  lis 3, 28
  01b9028  lis 4, 114
  01b902c  addi 3, 3, -31808
  01b9030  li 5, 0
  01b9034  lfs 1, 56(3)
  01b9038  lfs 2, -3056(4)
  01b903c  ori 3, 31, 0
  01b9040  li 4, 0
  01b9044  fmuls 1, 2, 1
  01b9048  fctiwz 1, 1
  01b904c  stfd 1, 424(1)
  01b9050  lwz 6, 428(1)
  01b9054  extsw 6, 6
  01b9058  bl 0xfddc0
  01b905c  nop
  01b9060  b 0x1b96e4
  01b9064  fsubs 1, 1, 2
  01b9068  fsubs 2, 3, 5
  01b906c  lis 3, 28
  01b9070  addi 3, 3, -31808
  01b9074  lis 4, 115
  01b9078  addic 4, 4, 22784
  01b907c  fabs 5, 1
  01b9080  fabs 6, 2
  01b9084  stfs 1, 136(1)
  01b9088  stfs 2, 140(1)
  01b908c  fsubs 1, 5, 6
  01b9090  stfs 1, 144(1)
  01b9094  lwz 5, 136(1)
  01b9098  lfs 3, 8(3)
  01b909c  lfs 1, 136(1)
  01b90a0  lwz 3, 140(1)
  01b90a4  lfs 2, 140(1)
  01b90a8  lwz 6, 144(1)
  01b90ac  rlwinm 3, 3, 3, 29, 29
  01b90b0  fabs 7, 2
  01b90b4  lfs 2, 144(1)
  01b90b8  fabs 1, 1
  01b90bc  rlwimi 3, 6, 2, 30, 30
  01b90c0  fsub 8, 2, 3
  01b90c4  rlwimi 3, 5, 4, 28, 28
  01b90c8  fsub 9, 2, 3
  01b90cc  ori 5, 4, 0
  01b90d0  rlwimi 5, 3, 2, 26, 28
  01b90d4  slwi 3, 3, 2
  01b90d8  clrldi 5, 5, 32
  01b90dc  fsel 6, 8, 1, 6
  01b90e0  lfsx 1, 4, 3
  01b90e4  lfs 2, 4(5)
  01b90e8  fsel 5, 9, 7, 5
  01b90ec  fcmpu 0, 6, 3
  01b90f0  bt 1, 0x1b90f8
  01b90f4  b 0x1b921c
  01b90f8  fsubs 7, 5, 6
  01b90fc  fadds 5, 5, 6
  01b9100  addic 3, 1, 16
  01b9104  li 6, 2
  01b9108  addic 4, 3, 244
  01b910c  addic 5, 3, 260
  01b9110  mtctr 6
  01b9114  fdivs 5, 7, 5
  01b9118  fmuls 6, 5, 5
  01b911c  stfs 5, 272(1)
  01b9120  stfs 5, 264(1)
  01b9124  stfs 5, 268(1)
  01b9128  stfs 5, 260(1)
  01b912c  lfs 8, 272(1)
  01b9130  lfs 9, 264(1)
  01b9134  lfs 10, 268(1)
  01b9138  fmuls 7, 6, 6
  01b913c  fmuls 9, 9, 6
  01b9140  fmuls 8, 8, 7
  01b9144  fmuls 5, 7, 7
  01b9148  fmuls 7, 10, 7
  01b914c  stfs 9, 264(1)
  01b9150  fmuls 6, 8, 6
  01b9154  stfs 7, 268(1)
  01b9158  stfs 6, 272(1)
  01b915c  lfs 6, 244(3)
  01b9160  fmuls 6, 6, 5
  01b9164  stfs 6, 260(3)
  01b9168  lfs 6, 4(4)
  01b916c  addic 3, 3, 8
  01b9170  addic 4, 4, 8
  01b9174  fmuls 6, 6, 5
  01b9178  stfs 6, 4(5)
  01b917c  addic 5, 5, 8
  01b9180  bdnz 0x1b915c
  01b9184  li 5, 4
  01b9188  ori 3, 1, 0
  01b918c  mtctr 5
  01b9190  lis 4, 115
  01b9194  addic 5, 3, 260
  01b9198  addic 4, 4, 22752
  01b919c  ori 6, 5, 0
  01b91a0  lfs 5, 260(3)
  01b91a4  lfs 6, 0(4)
  01b91a8  fmuls 5, 5, 6
  01b91ac  lfs 6, 4(4)
  01b91b0  addic 4, 4, 8
  01b91b4  stfs 5, 260(3)
  01b91b8  lfs 5, 4(5)
  01b91bc  addic 3, 3, 8
  01b91c0  fmuls 5, 5, 6
  01b91c4  stfs 5, 4(5)
  01b91c8  addic 5, 5, 8
  01b91cc  bdnz 0x1b91a0
  01b91d0  li 4, 2
  01b91d4  ori 3, 1, 0
  01b91d8  mtctr 4
  01b91dc  lfs 5, 260(3)
  01b91e0  fadds 3, 3, 5
  01b91e4  addic 3, 3, 16
  01b91e8  lfs 5, 4(6)
  01b91ec  lfs 6, 8(6)
  01b91f0  lfs 7, 12(6)
  01b91f4  addic 6, 6, 16
  01b91f8  fadds 3, 3, 5
  01b91fc  fadds 3, 3, 6
  01b9200  fadds 3, 3, 7
  01b9204  bdnz 0x1b91dc
  01b9208  lis 3, 28
  01b920c  addi 3, 3, -31808
  01b9210  lfs 5, 12(3)
  01b9214  fadds 3, 3, 5
  01b9218  fmadds 3, 3, 1, 2
  01b921c  fmr 1, 4
  01b9220  fmr 2, 3
  01b9224  bl 0x5026a0
  01b9228  nop
  01b922c  lis 3, 28
  01b9230  addi 3, 3, -31808
  01b9234  lfs 2, 60(3)
  01b9238  fcmpu 0, 1, 2
  01b923c  cror 6, 0, 2
  01b9240  bt 6, 0x1b96e4
  01b9244  li 3, 4
  01b9248  lbz 4, 83(31)
  01b924c  cmpwi 4, 4
  01b9250  stb 3, 32(31)
  01b9254  bt 2, 0x1b96e4
  01b9258  lis 3, 28
  01b925c  lis 4, 114
  01b9260  addi 3, 3, -31808
  01b9264  li 5, 0
  01b9268  lfs 1, 56(3)
  01b926c  lfs 2, -3056(4)
  01b9270  ori 3, 31, 0
  01b9274  fmuls 1, 2, 1
  01b9278  li 4, 4
  01b927c  fctiwz 1, 1
  01b9280  stfd 1, 424(1)
  01b9284  lwz 6, 428(1)
  01b9288  extsw 6, 6
  01b928c  bl 0xfddc0
  01b9290  nop
  01b9294  b 0x1b96e4
  01b9298  lfs 1, 128(28)
  01b929c  lfs 2, 16(31)
  01b92a0  lfs 3, 132(28)
  01b92a4  lis 3, 28
  01b92a8  lfs 4, 20(31)
  01b92ac  fsubs 1, 1, 2
  01b92b0  addi 4, 3, -31808
  01b92b4  fsubs 2, 3, 4
  01b92b8  lis 29, 115
  01b92bc  addic 3, 31, 72
  01b92c0  addic 29, 29, 22784
  01b92c4  fabs 3, 1
  01b92c8  fabs 4, 2
  01b92cc  stfs 1, 124(1)
  01b92d0  stfs 2, 128(1)
  01b92d4  fsubs 1, 3, 4
  01b92d8  stfs 1, 132(1)
  01b92dc  lwz 5, 124(1)
  01b92e0  lfs 31, 8(4)
  01b92e4  lfs 1, 124(1)
  01b92e8  lwz 4, 128(1)
  01b92ec  lfs 2, 128(1)
  01b92f0  lwz 6, 132(1)
  01b92f4  rlwinm 4, 4, 3, 29, 29
  01b92f8  fabs 5, 2
  01b92fc  lfs 2, 132(1)
  01b9300  fabs 1, 1
  01b9304  rlwimi 4, 6, 2, 30, 30
  01b9308  fsub 6, 2, 31
  01b930c  rlwimi 4, 5, 4, 28, 28
  01b9310  fsub 7, 2, 31
  01b9314  ori 5, 29, 0
  01b9318  rlwimi 5, 4, 2, 26, 28
  01b931c  slwi 4, 4, 2
  01b9320  clrldi 5, 5, 32
  01b9324  fsel 4, 6, 1, 4
  01b9328  lfsx 1, 29, 4
  01b932c  lfs 2, 4(5)
  01b9330  fsel 3, 7, 5, 3
  01b9334  fcmpu 0, 4, 31
  01b9338  bt 1, 0x1b9344
  01b933c  fmr 1, 31
  01b9340  b 0x1b9468
  01b9344  fsubs 5, 3, 4
  01b9348  fadds 3, 3, 4
  01b934c  addic 4, 1, 16
  01b9350  li 7, 2
  01b9354  addic 6, 4, 228
  01b9358  addic 5, 4, 212
  01b935c  mtctr 7
  01b9360  fdivs 3, 5, 3
  01b9364  fmuls 4, 3, 3
  01b9368  stfs 3, 240(1)
  01b936c  stfs 3, 232(1)
  01b9370  stfs 3, 236(1)
  01b9374  stfs 3, 228(1)
  01b9378  lfs 6, 240(1)
  01b937c  lfs 7, 232(1)
  01b9380  lfs 8, 236(1)
  01b9384  fmuls 5, 4, 4
  01b9388  fmuls 7, 7, 4
  01b938c  fmuls 6, 6, 5
  01b9390  fmuls 3, 5, 5
  01b9394  fmuls 5, 8, 5
  01b9398  stfs 7, 232(1)
  01b939c  fmuls 4, 6, 4
  01b93a0  stfs 5, 236(1)
  01b93a4  stfs 4, 240(1)
  01b93a8  lfs 4, 212(4)
  01b93ac  fmuls 4, 4, 3
  01b93b0  stfs 4, 228(4)
  01b93b4  lfs 4, 4(5)
  01b93b8  addic 5, 5, 8
  01b93bc  fmuls 4, 4, 3
  01b93c0  addic 4, 4, 8
  01b93c4  stfs 4, 4(6)
  01b93c8  addic 6, 6, 8
  01b93cc  bdnz 0x1b93a8
  01b93d0  li 6, 4
  01b93d4  ori 4, 1, 0
  01b93d8  mtctr 6
  01b93dc  lis 5, 115
  01b93e0  addic 6, 4, 228
  01b93e4  addic 5, 5, 22752
  01b93e8  ori 8, 6, 0
  01b93ec  lfs 3, 228(4)
  01b93f0  lfs 4, 0(5)
  01b93f4  fmuls 3, 3, 4
  01b93f8  lfs 4, 4(5)
  01b93fc  addic 5, 5, 8
  01b9400  stfs 3, 228(4)
  01b9404  lfs 3, 4(6)
  01b9408  addic 4, 4, 8
  01b940c  fmuls 3, 3, 4
  01b9410  stfs 3, 4(6)
  01b9414  addic 6, 6, 8
  01b9418  bdnz 0x1b93ec
  01b941c  ori 4, 1, 0
  01b9420  fmr 3, 31
  01b9424  mtctr 7
  01b9428  lfs 4, 228(4)
  01b942c  fadds 3, 3, 4
  01b9430  lfs 4, 4(8)
  01b9434  addic 4, 4, 16
  01b9438  lfs 5, 8(8)
  01b943c  lfs 6, 12(8)
  01b9440  addic 8, 8, 16
  01b9444  fadds 3, 3, 4
  01b9448  fadds 3, 3, 5
  01b944c  fadds 3, 3, 6
  01b9450  bdnz 0x1b9428
  01b9454  lis 4, 28
  01b9458  addi 4, 4, -31808
  01b945c  lfs 4, 12(4)
  01b9460  fadds 3, 3, 4
  01b9464  fmadds 1, 3, 1, 2
  01b9468  lis 4, 28
  01b946c  lis 5, 118
  01b9470  addi 4, 4, -31808
  01b9474  lis 6, 114
  01b9478  lfs 30, 16(4)
  01b947c  lfs 2, -32656(5)
  01b9480  lis 4, 118
  01b9484  lfs 3, -3048(6)
  01b9488  fmuls 2, 2, 30
  01b948c  lis 6, 114
  01b9490  addic 5, 30, 304
  01b9494  lfs 4, -32652(4)
  01b9498  lfs 5, -3052(6)
  01b949c  fmuls 4, 4, 30
  01b94a0  fmuls 2, 2, 3
  01b94a4  fmuls 4, 4, 5
  01b94a8  fmr 3, 2
  01b94ac  bl 0x10a2e0
  01b94b0  nop
  01b94b4  li 3, 2
  01b94b8  stb 3, 31(30)
  01b94bc  lfs 1, 128(28)
  01b94c0  lfs 2, 16(31)
  01b94c4  lfs 3, 132(28)
  01b94c8  lfs 4, 20(31)
  01b94cc  fsubs 1, 1, 2
  01b94d0  fsubs 2, 3, 4
  01b94d4  fabs 4, 1
  01b94d8  fabs 5, 2
  01b94dc  stfs 1, 112(1)
  01b94e0  stfs 2, 116(1)
  01b94e4  lfs 1, 72(31)
  01b94e8  fsubs 2, 4, 5
  01b94ec  stfs 2, 120(1)
  01b94f0  lwz 3, 112(1)
  01b94f4  lfs 2, 112(1)
  01b94f8  lwz 4, 116(1)
  01b94fc  lfs 3, 116(1)
  01b9500  lwz 5, 120(1)
  01b9504  rlwinm 4, 4, 3, 29, 29
  01b9508  lfs 6, 120(1)
  01b950c  fabs 2, 2
  01b9510  rlwimi 4, 5, 2, 30, 30
  01b9514  fabs 3, 3
  01b9518  fsub 7, 6, 31
  01b951c  fsub 6, 6, 31
  01b9520  rlwimi 4, 3, 4, 28, 28
  01b9524  ori 3, 29, 0
  01b9528  rlwimi 3, 4, 2, 26, 28
  01b952c  slwi 4, 4, 2
  01b9530  clrldi 3, 3, 32
  01b9534  fsel 5, 7, 2, 5
  01b9538  lfsx 2, 29, 4
  01b953c  fsel 4, 6, 3, 4
  01b9540  lfs 3, 4(3)
  01b9544  fcmpu 0, 5, 31
  01b9548  bt 1, 0x1b9550
  01b954c  b 0x1b9674
  01b9550  fsubs 6, 4, 5
  01b9554  fadds 4, 4, 5
  01b9558  addic 3, 1, 16
  01b955c  li 6, 2
  01b9560  addic 4, 3, 180
  01b9564  addic 5, 3, 196
  01b9568  mtctr 6
  01b956c  fdivs 4, 6, 4
  01b9570  fmuls 5, 4, 4
  01b9574  stfs 4, 208(1)
  01b9578  stfs 4, 200(1)
  01b957c  stfs 4, 204(1)
  01b9580  stfs 4, 196(1)
  01b9584  lfs 7, 208(1)
  01b9588  lfs 8, 200(1)
  01b958c  lfs 9, 204(1)
  01b9590  fmuls 6, 5, 5
  01b9594  fmuls 8, 8, 5
  01b9598  fmuls 7, 7, 6
  01b959c  fmuls 4, 6, 6
  01b95a0  fmuls 6, 9, 6
  01b95a4  stfs 8, 200(1)
  01b95a8  fmuls 5, 7, 5
  01b95ac  stfs 6, 204(1)
  01b95b0  stfs 5, 208(1)
  01b95b4  lfs 5, 180(3)
  01b95b8  fmuls 5, 5, 4
  01b95bc  stfs 5, 196(3)
  01b95c0  lfs 5, 4(4)
  01b95c4  addic 3, 3, 8
  01b95c8  addic 4, 4, 8
  01b95cc  fmuls 5, 5, 4
  01b95d0  stfs 5, 4(5)
  01b95d4  addic 5, 5, 8
  01b95d8  bdnz 0x1b95b4
  01b95dc  li 5, 4
  01b95e0  ori 3, 1, 0
  01b95e4  mtctr 5
  01b95e8  lis 4, 115
  01b95ec  addic 5, 3, 196
  01b95f0  addic 4, 4, 22752
  01b95f4  ori 6, 5, 0
  01b95f8  lfs 4, 196(3)
  01b95fc  lfs 5, 0(4)
  01b9600  fmuls 4, 4, 5
  01b9604  lfs 5, 4(4)
  01b9608  addic 4, 4, 8
  01b960c  stfs 4, 196(3)
  01b9610  lfs 4, 4(5)
  01b9614  addic 3, 3, 8
  01b9618  fmuls 4, 4, 5
  01b961c  stfs 4, 4(5)
  01b9620  addic 5, 5, 8
  01b9624  bdnz 0x1b95f8
  01b9628  li 4, 2
  01b962c  ori 3, 1, 0
  01b9630  mtctr 4
  01b9634  lfs 4, 196(3)
  01b9638  lfs 5, 4(6)
  01b963c  fadds 4, 31, 4
  01b9640  lfs 6, 8(6)
  01b9644  addic 3, 3, 16
  01b9648  lfs 31, 12(6)
  01b964c  addic 6, 6, 16
  01b9650  fadds 4, 4, 5
  01b9654  fadds 4, 4, 6
  01b9658  fadds 31, 4, 31
  01b965c  bdnz 0x1b9634
  01b9660  lis 3, 28
  01b9664  addi 3, 3, -31808
  01b9668  lfs 4, 12(3)
  01b966c  fadds 31, 31, 4
  01b9670  fmadds 31, 31, 2, 3
  01b9674  fmr 2, 31
  01b9678  bl 0x5026a0
  01b967c  nop
  01b9680  fcmpu 0, 1, 30
  01b9684  cror 6, 1, 2
  01b9688  bt 6, 0x1b96e4
  01b968c  li 3, 0
  01b9690  li 4, 3
  01b9694  stw 3, 304(30)
  01b9698  lbz 3, 83(31)
  01b969c  stb 4, 32(31)
  01b96a0  cmpwi 3, 2
  01b96a4  bt 2, 0x1b96e4
  01b96a8  lis 3, 28
  01b96ac  lis 4, 114
  01b96b0  addi 3, 3, -31808
  01b96b4  li 5, 0
  01b96b8  lfs 1, 56(3)
  01b96bc  lfs 2, -3056(4)
  01b96c0  ori 3, 31, 0
  01b96c4  fmuls 1, 2, 1
  01b96c8  li 4, 2
  01b96cc  fctiwz 1, 1
  01b96d0  stfd 1, 424(1)
  01b96d4  lwz 6, 428(1)
  01b96d8  extsw 6, 6
  01b96dc  bl 0xfddc0
  01b96e0  nop
  01b96e4  ori 3, 31, 0
  01b96e8  ori 4, 30, 0
  01b96ec  bl 0x115bd8
  01b96f0  nop
  01b96f4  ld 0, 512(1)
  01b96f8  mtlr 0
  01b96fc  lfd 30, 480(1)
  01b9700  lfd 31, 488(1)
  01b9704  ld 28, 448(1)
  01b9708  ld 29, 456(1)
  01b970c  ld 30, 464(1)
  01b9710  ld 31, 472(1)
  01b9714  addi 1, 1, 496
  01b9718  blr
