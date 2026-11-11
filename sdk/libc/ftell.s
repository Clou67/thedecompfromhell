# sdk/libc/ftell.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

ftell:   # 0x5c55dc, 0x5c bytes
  05c55dc  stdu 1, -144(1)
  05c55e0  mflr 0
  05c55e4  std 29, 120(1)
  05c55e8  mr 29, 3
  05c55ec  std 0, 160(1)
  05c55f0  std 28, 112(1)
  05c55f4  bl 0x5cbc38
  05c55f8  nop
  05c55fc  mr 3, 29
  05c5600  li 4, 0
  05c5604  bl 0x5c8bdc
  05c5608  nop
  05c560c  mr 28, 3
  05c5610  mr 3, 29
  05c5614  bl 0x5cbbbc
  05c5618  nop
  05c561c  ld 0, 160(1)
  05c5620  ld 29, 120(1)
  05c5624  extsw 3, 28
  05c5628  mtlr 0
  05c562c  ld 28, 112(1)
  05c5630  addi 1, 1, 144
  05c5634  blr
