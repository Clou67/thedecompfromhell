# sdk/libc/xassert.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Nonfatal_Assert:   # 0x5cee5c, 0xfc bytes
  05cee5c  stdu 1, -160(1)
  05cee60  mflr 0
  05cee64  std 29, 136(1)
  05cee68  std 30, 144(1)
  05cee6c  mr 29, 4
  05cee70  mr 30, 3
  05cee74  li 3, 0
  05cee78  std 31, 152(1)
  05cee7c  std 0, 176(1)
  05cee80  bl 0x5c50cc
  05cee84  nop
  05cee88  cmpwi 7, 29, 0
  05cee8c  addi 31, 1, 112
  05cee90  li 3, 1
  05cee94  li 5, 12
  05cee98  li 11, 403
  05cee9c  bt 30, 0x5ceef0
  05ceea0  addi 31, 1, 112
  05ceea4  lwz 4, -24356(2)
  05ceea8  mr 6, 31
  05ceeac  sc
  05ceeb0  clrldi 29, 29, 32
  05ceeb4  mr 3, 29
  05ceeb8  bl 0x5c8510
  05ceebc  nop
  05ceec0  mr 4, 29
  05ceec4  clrldi 5, 3, 32
  05ceec8  mr 6, 31
  05ceecc  li 3, 1
  05ceed0  li 11, 403
  05ceed4  sc
  05ceed8  li 3, 1
  05ceedc  lwz 4, -24352(2)
  05ceee0  li 5, 4
  05ceee4  mr 6, 31
  05ceee8  li 11, 403
  05ceeec  sc
  05ceef0  clrldi 29, 30, 32
  05ceef4  mr 3, 29
  05ceef8  bl 0x5c8510
  05ceefc  nop
  05cef00  mr 4, 29
  05cef04  clrldi 5, 3, 32
  05cef08  mr 6, 31
  05cef0c  li 3, 1
  05cef10  li 11, 403
  05cef14  sc
  05cef18  li 3, 1
  05cef1c  lwz 4, -24348(2)
  05cef20  mr 6, 31
  05cef24  li 5, 21
  05cef28  li 11, 403
  05cef2c  sc
  05cef30  li 3, 0
  05cef34  bl 0x5c50cc
  05cef38  nop
  05cef3c  ld 0, 176(1)
  05cef40  ld 29, 136(1)
  05cef44  ld 30, 144(1)
  05cef48  mtlr 0
  05cef4c  ld 31, 152(1)
  05cef50  addi 1, 1, 160
  05cef54  blr

FUN_005cef58:   # 0x5cef58, 0x24 bytes
  05cef58  stdu 1, -112(1)
  05cef5c  mflr 0
  05cef60  std 0, 128(1)
  05cef64  bl 0x5cee5c
  05cef68  trap
  05cef6c  ld 0, 128(1)
  05cef70  addi 1, 1, 112
  05cef74  mtlr 0
  05cef78  blr

FUN_005cef7c:   # 0x5cef7c, 0x14 bytes
  05cef7c  stdu 1, -112(1)
  05cef80  mflr 0
  05cef84  std 0, 128(1)
  05cef88  bl 0x5cee5c
  05cef8c  bl 0x5c4840
