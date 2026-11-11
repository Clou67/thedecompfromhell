# game/update/moby533.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_533:   # 0x3ac638, 0x28 bytes
  03ac638  lis 4, 150
  03ac63c  lwz 4, 17776(4)
  03ac640  cmpw 4, 3
  03ac644  bt 2, 0x3ac65c
  03ac648  li 4, 0
  03ac64c  lhz 5, 52(3)
  03ac650  stw 4, 148(3)
  03ac654  ori 4, 5, 3
  03ac658  sth 4, 52(3)
  03ac65c  blr
