# sdk/libc/strrchr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strrchr:   # 0x5c85b4, 0x14c bytes
  05c85b4  xor 12, 12, 12
  05c85b8  clrldi 4, 4, 56
  05c85bc  addi 12, 12, -1
  05c85c0  neg 0, 3
  05c85c4  dcbt 0, 3
  05c85c8  clrldi 0, 0, 61
  05c85cc  li 5, 128
  05c85d0  cmplwi 0, 0
  05c85d4  dcbt 5, 3
  05c85d8  bf 2, 0x5c86bc
  05c85dc  li 6, 32639
  05c85e0  mr 8, 4
  05c85e4  rldimi 8, 8, 8, 48
  05c85e8  rldimi 6, 6, 16, 32
  05c85ec  rldimi 8, 8, 16, 32
  05c85f0  rldimi 6, 6, 32, 0
  05c85f4  rldimi 8, 8, 32, 0
  05c85f8  li 5, 256
  05c85fc  li 7, 16
  05c8600  dcbt 5, 3
  05c8604  mtctr 7
  05c8608  ld 0, 0(3)
  05c860c  mr 4, 0
  05c8610  and 7, 0, 6
  05c8614  or 9, 0, 6
  05c8618  add 10, 7, 6
  05c861c  nor 11, 9, 10
  05c8620  cntlzd 0, 11
  05c8624  rldicl 5, 0, 61, 3
  05c8628  xor 0, 4, 8
  05c862c  and 7, 0, 6
  05c8630  or 9, 0, 6
  05c8634  add 10, 7, 6
  05c8638  nor 11, 9, 10
  05c863c  cntlzd 0, 11
  05c8640  rldicl 0, 0, 61, 3
  05c8644  cmplw 5, 0
  05c8648  bt 0, 0x5c866c
  05c864c  cmplwi 0, 8
  05c8650  bt 0, 0x5c8660
  05c8654  addi 3, 3, 8
  05c8658  bdnz 0x5c8608
  05c865c  b 0x5c85f8
  05c8660  cmplwi 5, 8
  05c8664  add 12, 3, 0
  05c8668  bt 2, 0x5c8654
  05c866c  addi 5, 12, 1
  05c8670  not 0, 12
  05c8674  cmplwi 5, 0
  05c8678  clrldi 0, 0, 61
  05c867c  bt 2, 0x5c86f8
  05c8680  cmplwi 0, 0
  05c8684  mr 3, 12
  05c8688  bclr 12, 2
  05c868c  mtctr 0
  05c8690  addi 12, 12, 1
  05c8694  clrldi 4, 8, 56
  05c8698  lbz 0, 0(12)
  05c869c  cmpldi 0, 0
  05c86a0  cmpld 1, 0, 4
  05c86a4  bclr 12, 2
  05c86a8  bf 6, 0x5c86b0
  05c86ac  mr 3, 12
  05c86b0  addi 12, 12, 1
  05c86b4  bdnz 0x5c8698
  05c86b8  blr
  05c86bc  mtctr 0
  05c86c0  lbz 0, 0(3)
  05c86c4  cmpld 0, 4
  05c86c8  bt 2, 0x5c86e0
  05c86cc  cmpldi 0, 0
  05c86d0  addi 3, 3, 1
  05c86d4  bt 2, 0x5c86e8
  05c86d8  bdnz 0x5c86c0
  05c86dc  b 0x5c85dc
  05c86e0  mr 12, 3
  05c86e4  b 0x5c86cc
  05c86e8  addi 5, 12, 1
  05c86ec  cmplwi 5, 0
  05c86f0  mr 3, 12
  05c86f4  bclr 4, 2
  05c86f8  xor 3, 3, 3
  05c86fc  blr
