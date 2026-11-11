# sdk/libc/vsprintf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

vsprintf:   # 0x5cd52c, 0x5c bytes
  05cd52c  stdu 1, -144(1)
  05cd530  mflr 0
  05cd534  std 29, 120(1)
  05cd538  mr 29, 3
  05cd53c  lwz 3, -24392(2)
  05cd540  mr 6, 5
  05cd544  mr 5, 4
  05cd548  clrldi 4, 29, 32
  05cd54c  std 0, 160(1)
  05cd550  bl 0x5cd5c4
  05cd554  nop
  05cd558  cmpwi 7, 3, 0
  05cd55c  add 29, 29, 3
  05cd560  extsw 3, 3
  05cd564  clrldi 29, 29, 32
  05cd568  bt 28, 0x5cd574
  05cd56c  li 0, 0
  05cd570  stb 0, 0(29)
  05cd574  ld 0, 160(1)
  05cd578  ld 29, 120(1)
  05cd57c  addi 1, 1, 144
  05cd580  mtlr 0
  05cd584  blr

FUN_005cd588:   # 0x5cd588, 0x3c bytes
  05cd588  stdu 1, -144(1)
  05cd58c  mflr 0
  05cd590  std 29, 120(1)
  05cd594  mr 29, 5
  05cd598  clrldi 5, 5, 32
  05cd59c  std 0, 160(1)
  05cd5a0  bl 0x5c5ad0
  05cd5a4  nop
  05cd5a8  ld 0, 160(1)
  05cd5ac  add 3, 3, 29
  05cd5b0  mtlr 0
  05cd5b4  ld 29, 120(1)
  05cd5b8  addi 1, 1, 144
  05cd5bc  clrldi 3, 3, 32
  05cd5c0  blr
