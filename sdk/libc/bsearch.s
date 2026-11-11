# sdk/libc/bsearch.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

bsearch:   # 0x5c4d8c, 0x108 bytes
  05c4d8c  cmpdi 5, 0
  05c4d90  mflr 0
  05c4d94  stdu 1, -176(1)
  05c4d98  std 26, 128(1)
  05c4d9c  std 25, 120(1)
  05c4da0  std 27, 136(1)
  05c4da4  std 28, 144(1)
  05c4da8  std 29, 152(1)
  05c4dac  std 30, 160(1)
  05c4db0  std 31, 168(1)
  05c4db4  std 0, 192(1)
  05c4db8  mr 26, 6
  05c4dbc  bt 2, 0x5c4e2c
  05c4dc0  mr 27, 4
  05c4dc4  mr 29, 5
  05c4dc8  clrldi 25, 3, 32
  05c4dcc  clrldi 28, 7, 32
  05c4dd0  b 0x5c4de8
  05c4dd4  add 27, 31, 26
  05c4dd8  bt 30, 0x5c4e60
  05c4ddc  addi 29, 5, -1
  05c4de0  cmpwi 7, 29, 0
  05c4de4  bt 30, 0x5c4e2c
  05c4de8  std 2, 40(1)
  05c4dec  lwz 0, 0(28)
  05c4df0  srwi 30, 29, 1
  05c4df4  mr 3, 25
  05c4df8  lwz 2, 4(28)
  05c4dfc  mtctr 0
  05c4e00  mullw 0, 30, 26
  05c4e04  add 31, 27, 0
  05c4e08  clrldi 4, 31, 32
  05c4e0c  bctrl
  05c4e10  ld 2, 40(1)
  05c4e14  sub 5, 29, 30
  05c4e18  cmpwi 7, 3, 0
  05c4e1c  bf 28, 0x5c4dd4
  05c4e20  mr 29, 30
  05c4e24  cmpwi 7, 29, 0
  05c4e28  bf 30, 0x5c4de8
  05c4e2c  ld 0, 192(1)
  05c4e30  li 3, 0
  05c4e34  ld 25, 120(1)
  05c4e38  clrldi 3, 3, 32
  05c4e3c  ld 26, 128(1)
  05c4e40  ld 27, 136(1)
  05c4e44  mtlr 0
  05c4e48  ld 28, 144(1)
  05c4e4c  ld 29, 152(1)
  05c4e50  ld 30, 160(1)
  05c4e54  ld 31, 168(1)
  05c4e58  addi 1, 1, 176
  05c4e5c  blr
  05c4e60  mr 3, 31
  05c4e64  ld 0, 192(1)
  05c4e68  ld 25, 120(1)
  05c4e6c  clrldi 3, 3, 32
  05c4e70  ld 26, 128(1)
  05c4e74  ld 27, 136(1)
  05c4e78  mtlr 0
  05c4e7c  ld 28, 144(1)
  05c4e80  ld 29, 152(1)
  05c4e84  ld 30, 160(1)
  05c4e88  ld 31, 168(1)
  05c4e8c  addi 1, 1, 176
  05c4e90  blr

FUN_005c4e94:   # 0x5c4e94, 0x34 bytes
  05c4e94  stdu 1, -112(1)
  05c4e98  mflr 0
  05c4e9c  std 0, 128(1)
  05c4ea0  bl 0x5c5900
  05c4ea4  nop
  05c4ea8  clrldi 3, 3, 32
  05c4eac  bl 0x5d58bc
  05c4eb0  nop
  05c4eb4  ld 0, 128(1)
  05c4eb8  clrldi 3, 3, 32
  05c4ebc  mtlr 0
  05c4ec0  addi 1, 1, 112
  05c4ec4  blr
