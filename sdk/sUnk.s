# sdk/sUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strerror_wrapper:   # 0x5c84e4, 0x2c bytes
  05c84e4  li 4, 0
  05c84e8  mflr 0
  05c84ec  stdu 1, -112(1)
  05c84f0  std 0, 128(1)
  05c84f4  bl 0x5cb4fc
  05c84f8  nop
  05c84fc  ld 0, 128(1)
  05c8500  clrldi 3, 3, 32
  05c8504  mtlr 0
  05c8508  addi 1, 1, 112
  05c850c  blr
