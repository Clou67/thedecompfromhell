# game/update/moby874.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_874:   # 0x49e520, 0x4 bytes
  049e520  blr

M1104_0049e528:   # 0x49e528, 0x58 bytes
  049e528  lis 5, 151
  049e52c  addic 5, 5, -25376
  049e530  lwz 6, 8332(5)
  049e534  lwz 4, 1272(5)
  049e538  cmpwi 6, 3
  049e53c  bt 2, 0x49e54c
  049e540  lwz 6, 8324(5)
  049e544  cmpwi 6, 28
  049e548  bf 2, 0x49e558
  049e54c  cmpw 4, 3
  049e550  bt 2, 0x49e570
  049e554  b 0x49e578
  049e558  lhz 4, 782(5)
  049e55c  cmpwi 4, 0
  049e560  bf 2, 0x49e578
  049e564  lwz 4, 764(5)
  049e568  cmpw 4, 3
  049e56c  bf 2, 0x49e578
  049e570  li 3, 1
  049e574  b 0x49e57c
  049e578  li 3, 0
  049e57c  blr
