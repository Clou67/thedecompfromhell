# sdk/libc/abort.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

hex2str:   # 0x5c4800, 0x40 bytes
  05c4800  li 0, 16
  05c4804  li 10, 15
  05c4808  mtctr 0
  05c480c  clrlwi 9, 3, 28
  05c4810  add 0, 4, 10
  05c4814  cmplwi 7, 9, 9
  05c4818  clrldi 11, 0, 32
  05c481c  rldicl 3, 3, 60, 4
  05c4820  addi 10, 10, -1
  05c4824  addi 0, 9, 48
  05c4828  bf 29, 0x5c4830
  05c482c  addi 0, 9, 87
  05c4830  stb 0, 0(11)
  05c4834  bdnz 0x5c480c
  05c4838  clrldi 3, 4, 32
  05c483c  blr

abort:   # 0x5c4840, 0x148 bytes
  05c4840  stdu 1, -192(1)
  05c4844  mflr 0
  05c4848  std 26, 144(1)
  05c484c  std 27, 152(1)
  05c4850  std 28, 160(1)
  05c4854  std 29, 168(1)
  05c4858  std 30, 176(1)
  05c485c  std 31, 184(1)
  05c4860  std 0, 208(1)
  05c4864  nop
  05c4868  li 3, 4
  05c486c  li 4, 0
  05c4870  li 11, 988
  05c4874  sc
  05c4878  mr 29, 1
  05c487c  clrldi 29, 29, 32
  05c4880  lwz 4, -24812(2)
  05c4884  addi 31, 1, 112
  05c4888  li 3, 1
  05c488c  li 5, 25
  05c4890  mr 6, 31
  05c4894  lwz 28, 4(29)
  05c4898  li 11, 403
  05c489c  sc
  05c48a0  addi 26, 1, 120
  05c48a4  ld 3, 16(28)
  05c48a8  mr 4, 26
  05c48ac  bl 0x5c4800
  05c48b0  li 5, 16
  05c48b4  clrldi 4, 3, 32
  05c48b8  mr 6, 31
  05c48bc  li 3, 1
  05c48c0  li 11, 403
  05c48c4  sc
  05c48c8  lwz 27, -24808(2)
  05c48cc  li 3, 1
  05c48d0  li 5, 1
  05c48d4  mr 4, 27
  05c48d8  mr 6, 31
  05c48dc  li 11, 403
  05c48e0  sc
  05c48e4  ld 28, 0(28)
  05c48e8  cmpdi 7, 28, 0
  05c48ec  bt 30, 0x5c4958
  05c48f0  lwz 30, -24804(2)
  05c48f4  li 3, 1
  05c48f8  mr 4, 30
  05c48fc  li 5, 25
  05c4900  mr 6, 31
  05c4904  li 11, 403
  05c4908  sc
  05c490c  clrldi 29, 28, 32
  05c4910  clrldi 4, 26, 32
  05c4914  ld 3, 16(29)
  05c4918  bl 0x5c4800
  05c491c  li 5, 16
  05c4920  clrldi 4, 3, 32
  05c4924  mr 6, 31
  05c4928  li 3, 1
  05c492c  li 11, 403
  05c4930  sc
  05c4934  li 3, 1
  05c4938  mr 4, 27
  05c493c  li 5, 1
  05c4940  mr 6, 31
  05c4944  li 11, 403
  05c4948  sc
  05c494c  ld 28, 0(29)
  05c4950  cmpdi 7, 28, 0
  05c4954  bf 30, 0x5c48f4
  05c4958  lwz 4, -24800(2)
  05c495c  mr 6, 31
  05c4960  li 3, 1
  05c4964  li 5, 39
  05c4968  li 11, 403
  05c496c  sc
  05c4970  li 3, 1
  05c4974  bl 0x6507e4
  05c4978  ld 2, 40(1)
  05c497c  li 3, 1
  05c4980  bl 0x5c4ec8
  05c4984  nop

FUN_005c4988:   # 0x5c4988, 0x14 bytes
  05c4988  srawi 0, 3, 31
  05c498c  xor 3, 0, 3
  05c4990  sub 3, 3, 0
  05c4994  extsw 3, 3
  05c4998  blr

FUN_005c499c:   # 0x5c499c, 0x2c bytes
  05c499c  cmpdi 5, 0
  05c49a0  mr 9, 3
  05c49a4  mr 0, 4
  05c49a8  bt 2, 0x5c49b8
  05c49ac  ori 0, 4, 1
  05c49b0  addi 9, 3, 4
  05c49b4  stw 5, 0(3)
  05c49b8  addi 3, 9, 4
  05c49bc  stw 0, 0(9)
  05c49c0  clrldi 3, 3, 32
  05c49c4  blr

FUN_005c49c8:   # 0x5c49c8, 0x1cc bytes
  05c49c8  li 3, 1
  05c49cc  mflr 0
  05c49d0  stdu 1, -144(1)
  05c49d4  std 31, 136(1)
  05c49d8  std 0, 160(1)
  05c49dc  std 29, 120(1)
  05c49e0  std 30, 128(1)
  05c49e4  bl 0x5cbbec
  05c49e8  nop
  05c49ec  lwz 31, -24796(2)
  05c49f0  lwz 0, 0(31)
  05c49f4  cmpwi 7, 0, 0
  05c49f8  bt 30, 0x5c4a88
  05c49fc  lwz 9, 4(31)
  05c4a00  mr 30, 31
  05c4a04  addi 9, 9, -4
  05c4a08  stw 9, 4(31)
  05c4a0c  lwz 9, 4(31)
  05c4a10  li 3, 0
  05c4a14  lwz 11, 0(31)
  05c4a18  addi 0, 9, -4
  05c4a1c  cmplw 7, 9, 11
  05c4a20  clrldi 10, 9, 32
  05c4a24  clrldi 8, 0, 32
  05c4a28  bt 28, 0x5c4a88
  05c4a2c  lwz 0, 0(10)
  05c4a30  clrldi 9, 0, 32
  05c4a34  rlwinm 11, 0, 0, 0, 30
  05c4a38  clrlwi 0, 0, 31
  05c4a3c  cmpwi 7, 0, 0
  05c4a40  bf 30, 0x5c4b68
  05c4a44  lwz 0, 0(9)
  05c4a48  std 2, 40(1)
  05c4a4c  mtctr 0
  05c4a50  lwz 2, 4(9)
  05c4a54  bctrl
  05c4a58  ld 2, 40(1)
  05c4a5c  lwz 9, 4(30)
  05c4a60  li 3, 0
  05c4a64  addi 9, 9, -4
  05c4a68  lwz 11, 0(31)
  05c4a6c  stw 9, 4(30)
  05c4a70  lwz 9, 4(31)
  05c4a74  cmplw 7, 9, 11
  05c4a78  addi 0, 9, -4
  05c4a7c  clrldi 10, 9, 32
  05c4a80  clrldi 8, 0, 32
  05c4a84  bf 28, 0x5c4a2c
  05c4a88  lwz 30, -24792(2)
  05c4a8c  lwz 29, -24788(2)
  05c4a90  mr 31, 30
  05c4a94  lwz 9, 0(30)
  05c4a98  addi 9, 9, -4
  05c4a9c  stw 9, 0(30)
  05c4aa0  lwz 9, 0(30)
  05c4aa4  li 3, 0
  05c4aa8  cmplw 7, 9, 29
  05c4aac  addi 0, 9, -4
  05c4ab0  clrldi 11, 9, 32
  05c4ab4  clrldi 10, 0, 32
  05c4ab8  bt 28, 0x5c4b14
  05c4abc  lwz 0, 0(11)
  05c4ac0  clrldi 9, 0, 32
  05c4ac4  rlwinm 11, 0, 0, 0, 30
  05c4ac8  clrlwi 0, 0, 31
  05c4acc  cmpwi 7, 0, 0
  05c4ad0  bf 30, 0x5c4b3c
  05c4ad4  lwz 0, 0(9)
  05c4ad8  std 2, 40(1)
  05c4adc  mtctr 0
  05c4ae0  lwz 2, 4(9)
  05c4ae4  bctrl
  05c4ae8  ld 2, 40(1)
  05c4aec  lwz 9, 0(31)
  05c4af0  li 3, 0
  05c4af4  addi 9, 9, -4
  05c4af8  stw 9, 0(31)
  05c4afc  lwz 9, 0(30)
  05c4b00  cmplw 7, 9, 29
  05c4b04  addi 0, 9, -4
  05c4b08  clrldi 11, 9, 32
  05c4b0c  clrldi 10, 0, 32
  05c4b10  bf 28, 0x5c4abc
  05c4b14  li 3, 1
  05c4b18  bl 0x5cbb70
  05c4b1c  nop
  05c4b20  ld 0, 160(1)
  05c4b24  ld 29, 120(1)
  05c4b28  ld 30, 128(1)
  05c4b2c  mtlr 0
  05c4b30  ld 31, 136(1)
  05c4b34  addi 1, 1, 144
  05c4b38  blr
  05c4b3c  lwz 0, 0(11)
  05c4b40  lwz 3, 0(10)
  05c4b44  std 2, 40(1)
  05c4b48  mtctr 0
  05c4b4c  lwz 2, 4(11)
  05c4b50  bctrl
  05c4b54  ld 2, 40(1)
  05c4b58  lwz 9, 0(31)
  05c4b5c  addi 9, 9, -8
  05c4b60  stw 9, 0(31)
  05c4b64  b 0x5c4aa0
  05c4b68  lwz 0, 0(11)
  05c4b6c  lwz 3, 0(8)
  05c4b70  std 2, 40(1)
  05c4b74  mtctr 0
  05c4b78  lwz 2, 4(11)
  05c4b7c  bctrl
  05c4b80  ld 2, 40(1)
  05c4b84  lwz 9, 4(30)
  05c4b88  addi 9, 9, -8
  05c4b8c  stw 9, 4(30)
  05c4b90  b 0x5c4a0c
