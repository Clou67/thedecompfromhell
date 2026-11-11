# sdk/libstdc++/throw.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZSt6_ThrowRKSt9exception:   # 0x5e3b94, 0x50 bytes
  05e3b94  mr 11, 3
  05e3b98  mflr 0
  05e3b9c  stdu 1, -128(1)
  05e3ba0  std 31, 120(1)
  05e3ba4  std 0, 144(1)
  05e3ba8  lwz 9, 0(11)
  05e3bac  lwz 10, 8(9)
  05e3bb0  lwz 0, 0(10)
  05e3bb4  std 2, 40(1)
  05e3bb8  mtctr 0
  05e3bbc  lwz 2, 4(10)
  05e3bc0  bctrl
  05e3bc4  ld 2, 40(1)
  05e3bc8  ld 0, 144(1)
  05e3bcc  clrldi 4, 3, 32
  05e3bd0  ld 31, 120(1)
  05e3bd4  addi 1, 1, 128
  05e3bd8  lwz 3, -23436(2)
  05e3bdc  mtlr 0
  05e3be0  b 0x5e3b1c

FUN_005e3be4:   # 0x5e3be4, 0x14 bytes
  05e3be4  lwz 9, -23432(2)
  05e3be8  lwz 0, 0(9)
  05e3bec  stw 3, 0(9)
  05e3bf0  clrldi 3, 0, 32
  05e3bf4  blr

FUN_005e3bf8:   # 0x5e3bf8, 0x8 bytes
  05e3bf8  lwz 3, -23428(2)
  05e3bfc  blr

FUN_005e3c00:   # 0x5e3c00, 0x4 bytes
  05e3c00  blr
