# sdk/libc/puts.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

puts:   # 0x5c756c, 0xbc bytes
  05c756c  stdu 1, -144(1)
  05c7570  mflr 0
  05c7574  std 31, 136(1)
  05c7578  lwz 31, -24752(2)
  05c757c  std 29, 120(1)
  05c7580  mr 29, 3
  05c7584  mr 3, 31
  05c7588  std 30, 128(1)
  05c758c  std 0, 160(1)
  05c7590  bl 0x5cbc38
  05c7594  nop
  05c7598  mr 4, 31
  05c759c  clrldi 3, 29, 32
  05c75a0  li 30, 0
  05c75a4  bl 0x5d5a08
  05c75a8  nop
  05c75ac  mr 4, 31
  05c75b0  cmpwi 7, 3, 0
  05c75b4  li 3, 10
  05c75b8  bt 28, 0x5c75f8
  05c75bc  bl 0x5d5914
  05c75c0  nop
  05c75c4  cmpwi 7, 3, 0
  05c75c8  bt- 28, 0x5c75f8
  05c75cc  mr 3, 31
  05c75d0  bl 0x5cbbbc
  05c75d4  nop
  05c75d8  ld 0, 160(1)
  05c75dc  ld 29, 120(1)
  05c75e0  extsw 3, 30
  05c75e4  ld 31, 136(1)
  05c75e8  ld 30, 128(1)
  05c75ec  mtlr 0
  05c75f0  addi 1, 1, 144
  05c75f4  blr
  05c75f8  mr 3, 31
  05c75fc  li 30, -1
  05c7600  bl 0x5cbbbc
  05c7604  nop
  05c7608  ld 0, 160(1)
  05c760c  ld 29, 120(1)
  05c7610  extsw 3, 30
  05c7614  ld 31, 136(1)
  05c7618  ld 30, 128(1)
  05c761c  mtlr 0
  05c7620  addi 1, 1, 144
  05c7624  blr
