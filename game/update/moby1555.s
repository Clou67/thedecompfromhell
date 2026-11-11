# game/update/moby1555.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1555:   # 0x298aac, 0xd4 bytes
  0298aac  stdu 1, -112(1)
  0298ab0  mflr 0
  0298ab4  std 0, 128(1)
  0298ab8  lbz 4, 32(3)
  0298abc  cmpwi 4, 0
  0298ac0  cmpwi 1, 4, -1
  0298ac4  cmpwi 6, 4, 1
  0298ac8  bt 1, 0x298ad4
  0298acc  bf 5, 0x298b70
  0298ad0  b 0x298adc
  0298ad4  bf 25, 0x298af0
  0298ad8  b 0x298b70
  0298adc  li 4, 255
  0298ae0  li 5, 1
  0298ae4  stb 4, 48(3)
  0298ae8  stb 5, 32(3)
  0298aec  b 0x298b70
  0298af0  lis 3, 161
  0298af4  lwz 3, 1800(3)
  0298af8  cmpwi 3, 2
  0298afc  bf 2, 0x298b70
  0298b00  lis 3, 150
  0298b04  addic 3, 3, -12976
  0298b08  lwz 4, 48(3)
  0298b0c  cmpwi 1, 4, 5
  0298b10  cmpwi 4, 3
  0298b14  cror 2, 2, 6
  0298b18  bt 2, 0x298b2c
  0298b1c  cmpwi 4, 6
  0298b20  bt 2, 0x298b2c
  0298b24  cmpwi 4, 7
  0298b28  bf 2, 0x298b70
  0298b2c  cmpwi 4, 3
  0298b30  li 5, 0
  0298b34  bf 2, 0x298b40
  0298b38  li 5, 1
  0298b3c  b 0x298b60
  0298b40  bt 6, 0x298b4c
  0298b44  cmpwi 4, 6
  0298b48  bf 2, 0x298b54
  0298b4c  li 5, 2
  0298b50  b 0x298b60
  0298b54  cmpwi 4, 7
  0298b58  bf 2, 0x298b60
  0298b5c  li 5, 3
  0298b60  rlwimi 3, 5, 2, 28, 29
  0298b64  lwz 3, 376(3)
  0298b68  bl 0x119600
  0298b6c  nop
  0298b70  ld 0, 128(1)
  0298b74  mtlr 0
  0298b78  addi 1, 1, 112
  0298b7c  blr
