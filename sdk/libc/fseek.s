# sdk/libc/fseek.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fseek:   # 0x5c5568, 0x74 bytes
  05c5568  stdu 1, -160(1)
  05c556c  mflr 0
  05c5570  std 27, 120(1)
  05c5574  std 28, 128(1)
  05c5578  mr 27, 5
  05c557c  mr 28, 4
  05c5580  std 29, 136(1)
  05c5584  mr 29, 3
  05c5588  std 0, 176(1)
  05c558c  bl 0x5cbc38
  05c5590  nop
  05c5594  extsw 5, 28
  05c5598  extsw 6, 27
  05c559c  mr 3, 29
  05c55a0  li 4, 0
  05c55a4  bl 0x5c9568
  05c55a8  nop
  05c55ac  mr 28, 3
  05c55b0  mr 3, 29
  05c55b4  bl 0x5cbbbc
  05c55b8  nop
  05c55bc  ld 0, 176(1)
  05c55c0  ld 27, 120(1)
  05c55c4  extsw 3, 28
  05c55c8  ld 29, 136(1)
  05c55cc  ld 28, 128(1)
  05c55d0  mtlr 0
  05c55d4  addi 1, 1, 160
  05c55d8  blr
