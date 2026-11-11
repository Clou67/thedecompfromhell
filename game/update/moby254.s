# game/update/moby254.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M254_0031cf88:   # 0x31cf88, 0x14 bytes
  031cf88  lis 3, 128
  031cf8c  lis 4, 1
  031cf90  addic 3, 3, -480
  031cf94  stw 4, 72(3)
  031cf98  blr

UpdateMoby_254:   # 0x31cfa0, 0x30 bytes
  031cfa0  lis 4, 268
  031cfa4  lwz 4, -19324(4)
  031cfa8  lwz 3, 120(3)
  031cfac  cmpwi 4, 0
  031cfb0  bt 2, 0x31cfcc
  031cfb4  lis 4, 151
  031cfb8  li 5, 2
  031cfbc  lwz 3, 0(3)
  031cfc0  addic 4, 4, -25376
  031cfc4  sth 5, 502(4)
  031cfc8  sth 3, 8922(4)
  031cfcc  blr
