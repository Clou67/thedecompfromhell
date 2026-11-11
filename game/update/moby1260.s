# game/update/moby1260.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1260_0022b814:   # 0x22b814, 0x14 bytes
  022b814  lis 3, 119
  022b818  lis 4, 1
  022b81c  addic 3, 3, 4996
  022b820  stw 4, 72(3)
  022b824  blr

M1260_0022b828:   # 0x22b828, 0x2c bytes
  022b828  stdu 1, -112(1)
  022b82c  mflr 0
  022b830  std 0, 128(1)
  022b834  lis 3, 119
  022b838  addic 3, 3, 20512
  022b83c  bl 0x17e558
  022b840  nop
  022b844  ld 0, 128(1)
  022b848  mtlr 0
  022b84c  addi 1, 1, 112
  022b850  blr

UpdateMoby_1260:   # 0x22b858, 0x94 bytes
  022b858  stdu 1, -128(1)
  022b85c  mflr 0
  022b860  std 0, 144(1)
  022b864  std 31, 120(1)
  022b868  ori 31, 3, 0
  022b86c  lbz 3, 32(3)
  022b870  cmpwi 3, 0
  022b874  cmpwi 1, 3, 1
  022b878  cmpwi 6, 3, -1
  022b87c  bt 1, 0x22b888
  022b880  bf 25, 0x22b8d8
  022b884  b 0x22b890
  022b888  bf 5, 0x22b8c4
  022b88c  b 0x22b8d8
  022b890  lis 3, 35
  022b894  lis 4, 119
  022b898  addi 6, 3, -18348
  022b89c  addic 3, 4, 20512
  022b8a0  li 5, 64
  022b8a4  lfs 1, 0(6)
  022b8a8  bl 0x17e31c
  022b8ac  nop
  022b8b0  li 3, 1
  022b8b4  li 4, 255
  022b8b8  stb 3, 32(31)
  022b8bc  stb 4, 48(31)
  022b8c0  b 0x22b8d8
  022b8c4  lis 3, 113
  022b8c8  ori 4, 31, 0
  022b8cc  addic 3, 3, -26240
  022b8d0  bl 0x6d720
  022b8d4  nop
  022b8d8  ld 0, 144(1)
  022b8dc  mtlr 0
  022b8e0  ld 31, 120(1)
  022b8e4  addi 1, 1, 128
  022b8e8  blr
