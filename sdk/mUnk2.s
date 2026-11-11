# sdk/mUnk2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0050ef38:   # 0x50ef38, 0x10 bytes
  050ef38  lwz 9, 8(3)
  050ef3c  addi 9, 9, 8
  050ef40  stw 9, 8(3)
  050ef44  blr

FUN_0050ef48:   # 0x50ef48, 0x3c bytes
  050ef48  lbz 0, 0(4)
  050ef4c  mr 11, 4
  050ef50  li 9, 0
  050ef54  cmpwi 7, 0, 0
  050ef58  bt 30, 0x50ef74
  050ef5c  lbzu 0, 1(4)
  050ef60  cmpwi 7, 0, 0
  050ef64  bf 30, 0x50ef5c
  050ef68  sub 9, 4, 11
  050ef6c  addi 9, 9, 3
  050ef70  srwi 9, 9, 2
  050ef74  addi 3, 3, 2
  050ef78  add 3, 3, 9
  050ef7c  clrldi 3, 3, 32
  050ef80  blr

FUN_0050ef84:   # 0x50ef84, 0x3c bytes
  050ef84  lbz 0, 0(4)
  050ef88  mr 11, 4
  050ef8c  li 9, 0
  050ef90  cmpwi 7, 0, 0
  050ef94  bt 30, 0x50efb0
  050ef98  lbzu 0, 1(4)
  050ef9c  cmpwi 7, 0, 0
  050efa0  bf 30, 0x50ef98
  050efa4  sub 9, 4, 11
  050efa8  addi 9, 9, 3
  050efac  srwi 9, 9, 2
  050efb0  addi 3, 3, 2
  050efb4  add 3, 3, 9
  050efb8  clrldi 3, 3, 32
  050efbc  blr

FUN_0050efc0:   # 0x50efc0, 0xc bytes
  050efc0  addi 3, 3, 2
  050efc4  clrldi 3, 3, 32
  050efc8  blr
