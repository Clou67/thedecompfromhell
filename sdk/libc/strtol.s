# sdk/libc/strtol.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stolx:   # 0x5c8890, 0x1fc bytes
  05c8890  cmpwi 7, 4, 0
  05c8894  mflr 0
  05c8898  stdu 1, -176(1)
  05c889c  std 26, 128(1)
  05c88a0  std 27, 136(1)
  05c88a4  std 28, 144(1)
  05c88a8  std 29, 152(1)
  05c88ac  std 30, 160(1)
  05c88b0  std 31, 168(1)
  05c88b4  std 0, 192(1)
  05c88b8  mr 26, 6
  05c88bc  mr 28, 3
  05c88c0  mr 27, 6
  05c88c4  bt 30, 0x5c8a84
  05c88c8  lwz 11, -24740(2)
  05c88cc  mr 31, 3
  05c88d0  lbz 10, 0(28)
  05c88d4  rlwinm 9, 10, 1, 23, 30
  05c88d8  lwz 11, 0(11)
  05c88dc  b 0x5c88e8
  05c88e0  lbzu 10, 1(31)
  05c88e4  rlwinm 9, 10, 1, 23, 30
  05c88e8  add 9, 9, 11
  05c88ec  clrldi 9, 9, 32
  05c88f0  lhz 0, 0(9)
  05c88f4  li 9, 324
  05c88f8  and 9, 0, 9
  05c88fc  cmpwi 7, 9, 0
  05c8900  bf 30, 0x5c88e0
  05c8904  extsb 29, 10
  05c8908  cmpwi 7, 29, 45
  05c890c  bt 30, 0x5c8990
  05c8910  cmpwi 7, 29, 43
  05c8914  bt 30, 0x5c8990
  05c8918  clrldi 30, 4, 32
  05c891c  extsw 5, 5
  05c8920  clrldi 3, 31, 32
  05c8924  mr 4, 30
  05c8928  clrldi 6, 27, 32
  05c892c  li 29, 43
  05c8930  bl 0x5cac2c
  05c8934  nop
  05c8938  lwz 0, 0(30)
  05c893c  cmpw 7, 31, 0
  05c8940  mr 9, 3
  05c8944  bt 30, 0x5c89c0
  05c8948  cmpw 7, 28, 0
  05c894c  bt 30, 0x5c89c4
  05c8950  cmpwi 7, 29, 43
  05c8954  bt 30, 0x5c8a38
  05c8958  cmpwi 7, 29, 45
  05c895c  mr 3, 9
  05c8960  bt 30, 0x5c8a70
  05c8964  ld 0, 192(1)
  05c8968  extsw 3, 3
  05c896c  ld 26, 128(1)
  05c8970  ld 27, 136(1)
  05c8974  mtlr 0
  05c8978  ld 28, 144(1)
  05c897c  ld 29, 152(1)
  05c8980  ld 30, 160(1)
  05c8984  ld 31, 168(1)
  05c8988  addi 1, 1, 176
  05c898c  blr
  05c8990  clrldi 30, 4, 32
  05c8994  addi 31, 31, 1
  05c8998  extsw 5, 5
  05c899c  clrldi 3, 31, 32
  05c89a0  mr 4, 30
  05c89a4  clrldi 6, 27, 32
  05c89a8  bl 0x5cac2c
  05c89ac  nop
  05c89b0  lwz 0, 0(30)
  05c89b4  cmpw 7, 31, 0
  05c89b8  mr 9, 3
  05c89bc  bf 30, 0x5c8948
  05c89c0  stw 28, 0(30)
  05c89c4  cmpwi 7, 9, 0
  05c89c8  bt 30, 0x5c8950
  05c89cc  bl 0x5d5904
  05c89d0  nop
  05c89d4  lis 0, -32767
  05c89d8  cmpwi 7, 27, 0
  05c89dc  ori 0, 0, 28
  05c89e0  stw 0, 0(3)
  05c89e4  bt 30, 0x5c89f0
  05c89e8  li 0, 1
  05c89ec  stw 0, 0(26)
  05c89f0  xori 0, 29, 45
  05c89f4  ld 26, 128(1)
  05c89f8  ld 27, 136(1)
  05c89fc  srawi 11, 0, 31
  05c8a00  ld 28, 144(1)
  05c8a04  ld 29, 152(1)
  05c8a08  xor 9, 11, 0
  05c8a0c  ld 30, 160(1)
  05c8a10  lis 0, -32768
  05c8a14  ld 31, 168(1)
  05c8a18  sub 9, 11, 9
  05c8a1c  srwi 3, 9, 31
  05c8a20  sub 3, 0, 3
  05c8a24  ld 0, 192(1)
  05c8a28  addi 1, 1, 176
  05c8a2c  extsw 3, 3
  05c8a30  mtlr 0
  05c8a34  blr
  05c8a38  cmpwi 7, 9, 0
  05c8a3c  mr 3, 9
  05c8a40  bt 28, 0x5c89cc
  05c8a44  ld 0, 192(1)
  05c8a48  extsw 3, 3
  05c8a4c  ld 26, 128(1)
  05c8a50  ld 27, 136(1)
  05c8a54  mtlr 0
  05c8a58  ld 28, 144(1)
  05c8a5c  ld 29, 152(1)
  05c8a60  ld 30, 160(1)
  05c8a64  ld 31, 168(1)
  05c8a68  addi 1, 1, 176
  05c8a6c  blr
  05c8a70  lis 0, -32768
  05c8a74  neg 3, 9
  05c8a78  cmplw 7, 9, 0
  05c8a7c  bf 29, 0x5c8964
  05c8a80  b 0x5c89cc
  05c8a84  addi 4, 1, 112
  05c8a88  b 0x5c88c8

FUN_005c8a8c:   # 0x5c8a8c, 0x8 bytes
  05c8a8c  li 6, 0
  05c8a90  b 0x5c8890
