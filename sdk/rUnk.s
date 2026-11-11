# sdk/rUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

seedRand:   # 0x5c8420, 0x20 bytes
  05c8420  addis 9, 13, 0
  05c8424  addis 11, 13, 0
  05c8428  addi 9, 9, -28672
  05c842c  addi 11, 11, -28664
  05c8430  li 0, 0
  05c8434  stw 3, 0(9)
  05c8438  stb 0, 0(11)
  05c843c  blr
