# sdk/libc/strspn.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strspn:   # 0x5d5c9c, 0x74 bytes
  05d5c9c  lbz 0, 0(3)
  05d5ca0  mr 8, 3
  05d5ca4  mr 10, 4
  05d5ca8  extsb 11, 0
  05d5cac  li 9, 0
  05d5cb0  cmpwi 7, 11, 0
  05d5cb4  bt 30, 0x5d5cf4
  05d5cb8  lbz 0, 0(4)
  05d5cbc  extsb 4, 0
  05d5cc0  cmpwi 7, 4, 0
  05d5cc4  bt 30, 0x5d5cf0
  05d5cc8  cmpw 7, 4, 11
  05d5ccc  mr 9, 10
  05d5cd0  bf 30, 0x5d5cdc
  05d5cd4  b 0x5d5cfc
  05d5cd8  bt 26, 0x5d5cfc
  05d5cdc  lbzu 0, 1(9)
  05d5ce0  extsb 0, 0
  05d5ce4  cmpwi 7, 0, 0
  05d5ce8  cmpw 6, 0, 11
  05d5cec  bf 30, 0x5d5cd8
  05d5cf0  sub 9, 3, 8
  05d5cf4  clrldi 3, 9, 32
  05d5cf8  blr
  05d5cfc  lbzu 0, 1(3)
  05d5d00  extsb 11, 0
  05d5d04  cmpwi 7, 11, 0
  05d5d08  bf 30, 0x5d5cc8
  05d5d0c  b 0x5d5cf0
