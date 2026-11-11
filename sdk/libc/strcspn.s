# sdk/libc/strcspn.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strcspn:   # 0x5d5c2c, 0x70 bytes
  05d5c2c  lbz 0, 0(3)
  05d5c30  mr 8, 3
  05d5c34  mr 10, 4
  05d5c38  extsb 11, 0
  05d5c3c  li 9, 0
  05d5c40  cmpwi 7, 11, 0
  05d5c44  bt 30, 0x5d5c94
  05d5c48  lbz 0, 0(4)
  05d5c4c  extsb 4, 0
  05d5c50  cmpwi 7, 4, 0
  05d5c54  bt 30, 0x5d5c80
  05d5c58  cmpw 7, 4, 11
  05d5c5c  bt 30, 0x5d5c90
  05d5c60  mr 9, 10
  05d5c64  b 0x5d5c6c
  05d5c68  bt 26, 0x5d5c90
  05d5c6c  lbzu 0, 1(9)
  05d5c70  extsb 0, 0
  05d5c74  cmpwi 7, 0, 0
  05d5c78  cmpw 6, 0, 11
  05d5c7c  bf 30, 0x5d5c68
  05d5c80  lbzu 0, 1(3)
  05d5c84  extsb 11, 0
  05d5c88  cmpwi 7, 11, 0
  05d5c8c  bf 30, 0x5d5c50
  05d5c90  sub 9, 3, 8
  05d5c94  clrldi 3, 9, 32
  05d5c98  blr
