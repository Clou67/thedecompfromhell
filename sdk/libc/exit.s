# sdk/libc/exit.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

exit:   # 0x5c4ec8, 0x48 bytes
  05c4ec8  stdu 1, -144(1)
  05c4ecc  mflr 0
  05c4ed0  std 29, 120(1)
  05c4ed4  std 0, 160(1)
  05c4ed8  mr 29, 3
  05c4edc  li 4, 0
  05c4ee0  li 3, 1
  05c4ee4  li 11, 988
  05c4ee8  sc
  05c4eec  bl 0x14b98
  05c4ef0  nop
  05c4ef4  bl 0x5c49c8
  05c4ef8  nop
  05c4efc  bl 0x64ed80
  05c4f00  nop
  05c4f04  extsw 3, 29
  05c4f08  bl 0x5c8b94
  05c4f0c  nop
