# game/update/moby283.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M283_0032dac4:   # 0x32dac4, 0x14 bytes
  032dac4  lis 3, 128
  032dac8  lis 4, 1
  032dacc  addic 3, 3, 1028
  032dad0  stw 4, 72(3)
  032dad4  blr

UpdateMoby_283:   # 0x32dad8, 0x4 bytes
  032dad8  blr
