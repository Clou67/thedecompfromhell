# game/update/moby1560.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1560_00299fdc:   # 0x299fdc, 0x14 bytes
  0299fdc  lis 3, 123
  0299fe0  lis 4, 1
  0299fe4  addic 3, 3, -18380
  0299fe8  stw 4, 72(3)
  0299fec  blr

UpdateMoby_1560:   # 0x299ff0, 0xe8 bytes
  0299ff0  stdu 1, -112(1)
  0299ff4  mflr 0
  0299ff8  std 0, 128(1)
  0299ffc  lbz 4, 32(3)
  029a000  cmpwi 4, 0
  029a004  cmpwi 1, 4, -1
  029a008  cmpwi 6, 4, 1
  029a00c  bt 1, 0x29a018
  029a010  bf 5, 0x29a0c8
  029a014  b 0x29a020
  029a018  bf 25, 0x29a034
  029a01c  b 0x29a0c8
  029a020  li 4, 255
  029a024  li 5, 1
  029a028  stb 4, 48(3)
  029a02c  stb 5, 32(3)
  029a030  b 0x29a0c8
  029a034  lis 3, 161
  029a038  lwz 3, 1800(3)
  029a03c  cmpwi 3, 2
  029a040  bf 2, 0x29a0c8
  029a044  lis 3, 150
  029a048  addic 3, 3, -12976
  029a04c  lwz 4, 48(3)
  029a050  cmpwi 1, 4, 2
  029a054  cmpwi 4, 1
  029a058  cror 2, 2, 6
  029a05c  bt 2, 0x29a078
  029a060  cmpwi 4, 3
  029a064  bt 2, 0x29a078
  029a068  cmpwi 4, 4
  029a06c  bt 2, 0x29a078
  029a070  cmpwi 4, 6
  029a074  bf 2, 0x29a0c8
  029a078  cmpwi 4, 1
  029a07c  li 5, 0
  029a080  bf 2, 0x29a08c
  029a084  li 5, 4
  029a088  b 0x29a0b4
  029a08c  bt 6, 0x29a0a0
  029a090  cmpwi 4, 3
  029a094  bt 2, 0x29a0a0
  029a098  cmpwi 4, 4
  029a09c  bf 2, 0x29a0a8
  029a0a0  li 5, 2
  029a0a4  b 0x29a0b4
  029a0a8  cmpwi 4, 6
  029a0ac  bf 2, 0x29a0b4
  029a0b0  li 5, 1
  029a0b4  slwi 4, 5, 2
  029a0b8  addc 3, 3, 4
  029a0bc  lwz 3, 376(3)
  029a0c0  bl 0x119600
  029a0c4  nop
  029a0c8  ld 0, 128(1)
  029a0cc  mtlr 0
  029a0d0  addi 1, 1, 112
  029a0d4  blr
