# game/update/moby293.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M293_00331450:   # 0x331450, 0x14 bytes
  0331450  lis 3, 128
  0331454  lis 4, 1
  0331458  addic 3, 3, 2284
  033145c  stw 4, 72(3)
  0331460  blr

M293_00331468:   # 0x331468, 0x38 bytes
  0331468  stdu 1, -112(1)
  033146c  mflr 0
  0331470  std 0, 128(1)
  0331474  lis 3, 129
  0331478  li 4, 47
  033147c  addic 3, 3, 576
  0331480  li 5, 44
  0331484  li 6, 45
  0331488  bl 0x17ec40
  033148c  nop
  0331490  ld 0, 128(1)
  0331494  mtlr 0
  0331498  addi 1, 1, 112
  033149c  blr

UpdateMoby_293:   # 0x3314a0, 0xa0 bytes
  03314a0  stdu 1, -128(1)
  03314a4  mflr 0
  03314a8  std 0, 144(1)
  03314ac  std 31, 120(1)
  03314b0  ori 31, 3, 0
  03314b4  lbz 4, 32(31)
  03314b8  lwz 3, 120(31)
  03314bc  cmpwi 4, 0
  03314c0  cmpwi 1, 4, 1
  03314c4  cmpwi 6, 4, -1
  03314c8  bt 1, 0x3314d4
  03314cc  bf 25, 0x33152c
  03314d0  b 0x3314dc
  03314d4  bf 5, 0x3314f0
  03314d8  b 0x33152c
  03314dc  li 3, 1
  03314e0  li 4, 255
  03314e4  stb 3, 32(31)
  03314e8  stb 4, 48(31)
  03314ec  b 0x33152c
  03314f0  lwz 3, 12(3)
  03314f4  cmpwi 3, -1
  03314f8  bt 2, 0x331518
  03314fc  lis 5, 149
  0331500  extsw 4, 3
  0331504  addic 3, 5, 5376
  0331508  bl 0x110b70
  033150c  nop
  0331510  cmpwi 3, 0
  0331514  bt 2, 0x33152c
  0331518  lis 3, 113
  033151c  ori 4, 31, 0
  0331520  addic 3, 3, -16344
  0331524  bl 0x6d760
  0331528  nop
  033152c  ld 0, 144(1)
  0331530  mtlr 0
  0331534  ld 31, 120(1)
  0331538  addi 1, 1, 128
  033153c  blr
