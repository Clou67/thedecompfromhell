# game/update/moby1876.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1876:   # 0x2cdbb0, 0x148 bytes
  02cdbb0  stdu 1, -144(1)
  02cdbb4  mflr 0
  02cdbb8  std 0, 160(1)
  02cdbbc  std 31, 136(1)
  02cdbc0  ori 31, 3, 0
  02cdbc4  lis 4, 1
  02cdbc8  li 5, 0
  02cdbcc  bl 0x10675c
  02cdbd0  nop
  02cdbd4  ori 4, 3, 0
  02cdbd8  lbz 3, 32(31)
  02cdbdc  cmpwi 3, 0
  02cdbe0  bt 1, 0x2cdbf0
  02cdbe4  cmpwi 3, -1
  02cdbe8  bf 1, 0x2cdce4
  02cdbec  b 0x2cdc04
  02cdbf0  cmpwi 3, 1
  02cdbf4  bf 1, 0x2cdc10
  02cdbf8  cmpwi 3, 2
  02cdbfc  bf 1, 0x2cdc30
  02cdc00  b 0x2cdce4
  02cdc04  li 3, 1
  02cdc08  stb 3, 32(31)
  02cdc0c  b 0x2cdce4
  02cdc10  cmpwi 4, 0
  02cdc14  bt 2, 0x2cdce4
  02cdc18  lwz 3, 44(4)
  02cdc1c  cmpwi 3, 0
  02cdc20  bf 1, 0x2cdce4
  02cdc24  li 3, 2
  02cdc28  stb 3, 32(31)
  02cdc2c  b 0x2cdce4
  02cdc30  li 3, 0
  02cdc34  li 4, 0
  02cdc38  ori 5, 31, 0
  02cdc3c  bl 0x15d12c
  02cdc40  nop
  02cdc44  ori 3, 31, 0
  02cdc48  li 4, 0
  02cdc4c  li 5, -1
  02cdc50  bl 0xfd8d0
  02cdc54  nop
  02cdc58  ori 3, 31, 0
  02cdc5c  bl 0x11a100
  02cdc60  nop
  02cdc64  lis 3, 45
  02cdc68  lis 10, 161
  02cdc6c  addi 8, 3, -9304
  02cdc70  addic 10, 10, 23856
  02cdc74  ori 3, 31, 0
  02cdc78  addic 5, 31, 16
  02cdc7c  li 4, 1875
  02cdc80  lfs 1, 0(8)
  02cdc84  addic 6, 31, 64
  02cdc88  std 10, 112(1)
  02cdc8c  li 7, 0
  02cdc90  li 8, 0
  02cdc94  std 10, 120(1)
  02cdc98  bl 0x11a560
  02cdc9c  nop
  02cdca0  ori 3, 31, 0
  02cdca4  li 4, 1878
  02cdca8  li 5, 1
  02cdcac  li 6, 1878
  02cdcb0  li 7, 1
  02cdcb4  li 8, 1
  02cdcb8  li 9, 2
  02cdcbc  bl 0x11aa78
  02cdcc0  nop
  02cdcc4  ori 3, 31, 0
  02cdcc8  li 4, 1877
  02cdccc  bl 0x11ad48
  02cdcd0  nop
  02cdcd4  ori 3, 31, 0
  02cdcd8  bl 0xefb38
  02cdcdc  nop
  02cdce0  b 0x2cdce4
  02cdce4  ld 0, 160(1)
  02cdce8  mtlr 0
  02cdcec  ld 31, 136(1)
  02cdcf0  addi 1, 1, 144
  02cdcf4  blr
