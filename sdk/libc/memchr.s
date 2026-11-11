# sdk/libc/memchr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memchr:   # 0x5c5984, 0x14c bytes
  05c5984  cmplwi 5, 0
  05c5988  clrldi 4, 4, 56
  05c598c  bt 2, 0x5c59b0
  05c5990  cmplwi 5, 8
  05c5994  bf 0, 0x5c59b8
  05c5998  mtctr 5
  05c599c  lbz 0, 0(3)
  05c59a0  cmpd 4, 0
  05c59a4  bclr 12, 2
  05c59a8  addi 3, 3, 1
  05c59ac  bdnz 0x5c599c
  05c59b0  xor 3, 3, 3
  05c59b4  blr
  05c59b8  dcbt 0, 3
  05c59bc  neg 0, 3
  05c59c0  clrldi 0, 0, 61
  05c59c4  cmplwi 0, 0
  05c59c8  bt 2, 0x5c59f0
  05c59cc  mtctr 0
  05c59d0  sub 5, 5, 0
  05c59d4  lbz 0, 0(3)
  05c59d8  cmpld 0, 4
  05c59dc  bclr 12, 2
  05c59e0  addi 3, 3, 1
  05c59e4  bdnz 0x5c59d4
  05c59e8  cmplwi 5, 8
  05c59ec  bt 0, 0x5c5aa8
  05c59f0  add 12, 3, 5
  05c59f4  rldicr 12, 12, 0, 60
  05c59f8  li 6, 32639
  05c59fc  mr 8, 4
  05c5a00  rldimi 8, 8, 8, 48
  05c5a04  rldimi 6, 6, 16, 32
  05c5a08  rldimi 8, 8, 16, 32
  05c5a0c  rldimi 6, 6, 32, 0
  05c5a10  rldimi 8, 8, 32, 0
  05c5a14  neg 0, 3
  05c5a18  clrldi 0, 0, 57
  05c5a1c  cmplwi 0, 0
  05c5a20  bt 2, 0x5c5a44
  05c5a24  cmplw 0, 5
  05c5a28  bt 0, 0x5c5a38
  05c5a2c  rldicl 0, 5, 61, 3
  05c5a30  clrldi 5, 5, 61
  05c5a34  b 0x5c5a64
  05c5a38  sub 5, 5, 0
  05c5a3c  rldicl 0, 0, 61, 3
  05c5a40  b 0x5c5a64
  05c5a44  addi 0, 3, 128
  05c5a48  dcbt 0, 0
  05c5a4c  rldicl 0, 5, 61, 3
  05c5a50  cmplwi 0, 16
  05c5a54  bt 0, 0x5c5a5c
  05c5a58  li 0, 16
  05c5a5c  sldi 7, 0, 3
  05c5a60  sub 5, 5, 7
  05c5a64  mtctr 0
  05c5a68  ld 0, 0(3)
  05c5a6c  xor 0, 0, 8
  05c5a70  and 7, 0, 6
  05c5a74  or 9, 0, 6
  05c5a78  add 10, 7, 6
  05c5a7c  nor 11, 9, 10
  05c5a80  cntlzd 0, 11
  05c5a84  rldicl 0, 0, 61, 3
  05c5a88  cmplwi 0, 8
  05c5a8c  bt 0, 0x5c5ac8
  05c5a90  addi 3, 3, 8
  05c5a94  bdnz 0x5c5a68
  05c5a98  cmpd 3, 12
  05c5a9c  bt 0, 0x5c5a44
  05c5aa0  cmplwi 5, 0
  05c5aa4  bt 2, 0x5c59b0
  05c5aa8  mtctr 5
  05c5aac  lbz 0, 0(3)
  05c5ab0  cmpd 4, 0
  05c5ab4  bclr 12, 2
  05c5ab8  addi 3, 3, 1
  05c5abc  bdnz 0x5c5aac
  05c5ac0  xor 3, 3, 3
  05c5ac4  blr
  05c5ac8  add 3, 3, 0
  05c5acc  blr
