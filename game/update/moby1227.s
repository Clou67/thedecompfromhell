# game/update/moby1227.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1227_00210c3c:   # 0x210c3c, 0x8c bytes
  0210c3c  lbz 3, 33(3)
  0210c40  cmpwi 3, 255
  0210c44  bf 2, 0x210c50
  0210c48  li 3, 1
  0210c4c  b 0x210cc4
  0210c50  lis 4, 165
  0210c54  rlwinm 3, 3, 2, 22, 29
  0210c58  addic 4, 4, -28284
  0210c5c  lis 5, 164
  0210c60  lwzx 4, 4, 3
  0210c64  lwz 3, -28512(5)
  0210c68  cmpwi 4, 0
  0210c6c  bf 2, 0x210c78
  0210c70  li 3, 1
  0210c74  b 0x210cc4
  0210c78  lhz 5, 0(4)
  0210c7c  rlwinm 5, 5, 8, 9, 23
  0210c80  addc 5, 3, 5
  0210c84  clrldi 5, 5, 32
  0210c88  lbz 6, 188(5)
  0210c8c  cmpwi 6, 0
  0210c90  bf 2, 0x210cac
  0210c94  lwz 5, 120(5)
  0210c98  lwz 5, 324(5)
  0210c9c  cmpwi 5, 0
  0210ca0  bf 2, 0x210cac
  0210ca4  li 3, 0
  0210ca8  b 0x210cc4
  0210cac  lhz 5, 0(4)
  0210cb0  addic 4, 4, 2
  0210cb4  extsh 5, 5
  0210cb8  cmpwi 5, 0
  0210cbc  bf 0, 0x210c78
  0210cc0  li 3, 1
  0210cc4  blr

M1227_00210cc8:   # 0x210cc8, 0x14 bytes
  0210cc8  lis 3, 119
  0210ccc  lis 4, 1
  0210cd0  addic 3, 3, -31660
  0210cd4  stw 4, 72(3)
  0210cd8  blr

UpdateMoby_1227:   # 0x210ce0, 0x4 bytes
  0210ce0  blr
