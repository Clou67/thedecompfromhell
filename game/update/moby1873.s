# game/update/moby1873.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1873:   # 0x2cda70, 0x130 bytes
  02cda70  stdu 1, -128(1)
  02cda74  mflr 0
  02cda78  std 0, 144(1)
  02cda7c  std 31, 120(1)
  02cda80  ori 31, 3, 0
  02cda84  lis 4, 1
  02cda88  li 5, 0
  02cda8c  bl 0x10675c
  02cda90  nop
  02cda94  ori 4, 3, 0
  02cda98  lbz 3, 32(31)
  02cda9c  cmpwi 3, 0
  02cdaa0  bt 1, 0x2cdab0
  02cdaa4  cmpwi 3, -1
  02cdaa8  bf 1, 0x2cdb8c
  02cdaac  b 0x2cdac4
  02cdab0  cmpwi 3, 1
  02cdab4  bf 1, 0x2cdad0
  02cdab8  cmpwi 3, 2
  02cdabc  bf 1, 0x2cdaf0
  02cdac0  b 0x2cdb8c
  02cdac4  li 3, 1
  02cdac8  stb 3, 32(31)
  02cdacc  b 0x2cdb8c
  02cdad0  cmpwi 4, 0
  02cdad4  bt 2, 0x2cdb8c
  02cdad8  lwz 3, 44(4)
  02cdadc  cmpwi 3, 0
  02cdae0  bf 1, 0x2cdb8c
  02cdae4  li 3, 2
  02cdae8  stb 3, 32(31)
  02cdaec  b 0x2cdb8c
  02cdaf0  li 3, 0
  02cdaf4  li 4, 0
  02cdaf8  ori 5, 31, 0
  02cdafc  bl 0x15d12c
  02cdb00  nop
  02cdb04  ori 3, 31, 0
  02cdb08  li 4, 0
  02cdb0c  li 5, -1
  02cdb10  bl 0xfd8d0
  02cdb14  nop
  02cdb18  ori 3, 31, 0
  02cdb1c  bl 0x11a100
  02cdb20  nop
  02cdb24  ori 3, 31, 0
  02cdb28  li 4, 1875
  02cdb2c  li 5, 1
  02cdb30  li 6, 1875
  02cdb34  li 7, 1
  02cdb38  li 8, 11
  02cdb3c  li 9, 2
  02cdb40  bl 0x11aa78
  02cdb44  nop
  02cdb48  ori 3, 31, 0
  02cdb4c  li 9, 2
  02cdb50  li 4, 1878
  02cdb54  li 5, 1
  02cdb58  li 6, 1878
  02cdb5c  li 7, 1
  02cdb60  li 8, 1
  02cdb64  bl 0x11aa78
  02cdb68  nop
  02cdb6c  ori 3, 31, 0
  02cdb70  li 4, 1874
  02cdb74  bl 0x11ad48
  02cdb78  nop
  02cdb7c  ori 3, 31, 0
  02cdb80  bl 0xefb38
  02cdb84  nop
  02cdb88  b 0x2cdb8c
  02cdb8c  ld 0, 144(1)
  02cdb90  mtlr 0
  02cdb94  ld 31, 120(1)
  02cdb98  addi 1, 1, 128
  02cdb9c  blr
