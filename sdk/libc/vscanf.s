# sdk/libc/vscanf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

vscanf:   # 0x5cd444, 0x78 bytes
  05cd444  stdu 1, -160(1)
  05cd448  mflr 0
  05cd44c  std 28, 128(1)
  05cd450  lwz 28, -24400(2)
  05cd454  std 27, 120(1)
  05cd458  std 29, 136(1)
  05cd45c  mr 27, 4
  05cd460  mr 29, 3
  05cd464  mr 3, 28
  05cd468  std 0, 176(1)
  05cd46c  bl 0x5cbc38
  05cd470  nop
  05cd474  clrldi 5, 29, 32
  05cd478  lwz 3, -24396(2)
  05cd47c  clrldi 6, 27, 32
  05cd480  mr 4, 28
  05cd484  bl 0x5cd5c4
  05cd488  nop
  05cd48c  mr 29, 3
  05cd490  mr 3, 28
  05cd494  bl 0x5cbbbc
  05cd498  nop
  05cd49c  ld 0, 176(1)
  05cd4a0  ld 27, 120(1)
  05cd4a4  extsw 3, 29
  05cd4a8  ld 28, 128(1)
  05cd4ac  ld 29, 136(1)
  05cd4b0  mtlr 0
  05cd4b4  addi 1, 1, 160
  05cd4b8  blr

FUN_005cd4bc:   # 0x5cd4bc, 0x70 bytes
  05cd4bc  stdu 1, -144(1)
  05cd4c0  mflr 0
  05cd4c4  std 29, 120(1)
  05cd4c8  mr 29, 3
  05cd4cc  std 31, 136(1)
  05cd4d0  mr 3, 4
  05cd4d4  mr 31, 5
  05cd4d8  mr 6, 29
  05cd4dc  clrldi 5, 5, 32
  05cd4e0  li 4, 1
  05cd4e4  std 0, 160(1)
  05cd4e8  bl 0x5c5638
  05cd4ec  nop
  05cd4f0  xor 5, 31, 3
  05cd4f4  ld 31, 136(1)
  05cd4f8  srawi 0, 5, 31
  05cd4fc  xor 5, 0, 5
  05cd500  sub 5, 5, 0
  05cd504  ld 0, 160(1)
  05cd508  addi 5, 5, -1
  05cd50c  mtlr 0
  05cd510  srawi 5, 5, 31
  05cd514  extsw 5, 5
  05cd518  and 29, 29, 5
  05cd51c  mr 3, 29
  05cd520  ld 29, 120(1)
  05cd524  addi 1, 1, 144
  05cd528  blr
