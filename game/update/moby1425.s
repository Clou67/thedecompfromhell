# game/update/moby1425.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1425_0027ab68:   # 0x27ab68, 0x14 bytes
  027ab68  lis 3, 123
  027ab6c  lis 4, 1
  027ab70  addic 3, 3, -24248
  027ab74  stw 4, 72(3)
  027ab78  blr

UpdateMoby_1425:   # 0x27ab98, 0xd4 bytes
  027ab98  stdu 1, -160(1)
  027ab9c  mflr 0
  027aba0  std 0, 176(1)
  027aba4  std 31, 152(1)
  027aba8  lis 4, 123
  027abac  ori 31, 3, 0
  027abb0  std 30, 144(1)
  027abb4  lwz 3, -24136(4)
  027abb8  lwz 30, 120(31)
  027abbc  addic 3, 3, -1
  027abc0  std 29, 136(1)
  027abc4  extsw 3, 3
  027abc8  bl 0xfc620
  027abcc  nop
  027abd0  cmpwi 3, 0
  027abd4  bf 2, 0x27ac50
  027abd8  li 3, 0
  027abdc  lis 4, 40
  027abe0  addi 29, 4, -21632
  027abe4  stw 3, 124(1)
  027abe8  stw 3, 120(1)
  027abec  stw 3, 116(1)
  027abf0  stw 3, 112(1)
  027abf4  lfs 1, 0(29)
  027abf8  lfs 2, 4(29)
  027abfc  bl 0xfcbe8
  027ac00  nop
  027ac04  lis 3, 123
  027ac08  lis 4, 114
  027ac0c  addic 31, 31, 16
  027ac10  lfs 2, -24140(3)
  027ac14  fmuls 1, 1, 2
  027ac18  lfs 2, -3052(4)
  027ac1c  fmuls 1, 1, 2
  027ac20  stfs 1, 120(1)
  027ac24  lfs 1, 8(29)
  027ac28  lfs 2, 12(29)
  027ac2c  bl 0xfcbe8
  027ac30  nop
  027ac34  lfs 3, 16(29)
  027ac38  ori 3, 31, 0
  027ac3c  lfs 2, 0(30)
  027ac40  addic 4, 1, 112
  027ac44  fmuls 1, 1, 3
  027ac48  bl 0x12a440
  027ac4c  nop
  027ac50  ld 0, 176(1)
  027ac54  mtlr 0
  027ac58  ld 29, 136(1)
  027ac5c  ld 30, 144(1)
  027ac60  ld 31, 152(1)
  027ac64  addi 1, 1, 160
  027ac68  blr
