# game/update/moby690.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M690_0041f74c:   # 0x41f74c, 0x14 bytes
  041f74c  lis 3, 133
  041f750  lis 4, 1
  041f754  addic 3, 3, 30916
  041f758  stw 4, 72(3)
  041f75c  blr

UpdateMoby_690:   # 0x41f760, 0x4 bytes
  041f760  blr
