# game/update/moby1418.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1418_00272c00:   # 0x272c00, 0x14 bytes
  0272c00  lis 3, 122
  0272c04  lis 4, 1
  0272c08  addic 3, 3, 8816
  0272c0c  stw 4, 72(3)
  0272c10  blr

M1418_00272c18:   # 0x272c18, 0x38 bytes
  0272c18  stdu 1, -112(1)
  0272c1c  mflr 0
  0272c20  std 0, 128(1)
  0272c24  lis 3, 123
  0272c28  li 4, 19
  0272c2c  addic 3, 3, -25728
  0272c30  li 5, 46
  0272c34  li 6, 47
  0272c38  bl 0x17ec40
  0272c3c  nop
  0272c40  ld 0, 128(1)
  0272c44  mtlr 0
  0272c48  addi 1, 1, 112
  0272c4c  blr

UpdateMoby_1418:   # 0x272c50, 0x68 bytes
  0272c50  stdu 1, -112(1)
  0272c54  mflr 0
  0272c58  std 0, 128(1)
  0272c5c  lbz 4, 32(3)
  0272c60  cmpwi 4, 0
  0272c64  cmpwi 1, 4, 1
  0272c68  cmpwi 6, 4, -1
  0272c6c  bt 1, 0x272c78
  0272c70  bf 25, 0x272ca8
  0272c74  b 0x272c80
  0272c78  bf 5, 0x272c94
  0272c7c  b 0x272ca8
  0272c80  li 4, 1
  0272c84  li 5, 255
  0272c88  stb 4, 32(3)
  0272c8c  stb 5, 48(3)
  0272c90  b 0x272ca8
  0272c94  lis 5, 113
  0272c98  ori 4, 3, 0
  0272c9c  addic 3, 5, -23408
  0272ca0  bl 0x6d760
  0272ca4  nop
  0272ca8  ld 0, 128(1)
  0272cac  mtlr 0
  0272cb0  addi 1, 1, 112
  0272cb4  blr
