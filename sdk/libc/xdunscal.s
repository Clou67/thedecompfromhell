# sdk/libc/xdunscal.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Dunscale:   # 0x5daf40, 0x120 bytes
  05daf40  lhz 11, 0(4)
  05daf44  mflr 0
  05daf48  stdu 1, -128(1)
  05daf4c  std 30, 112(1)
  05daf50  mr 30, 3
  05daf54  rlwinm 3, 11, 28, 21, 31
  05daf58  std 0, 144(1)
  05daf5c  extsh 0, 3
  05daf60  std 31, 120(1)
  05daf64  cmpwi 7, 0, 2047
  05daf68  mr 31, 4
  05daf6c  clrldi 9, 4, 32
  05daf70  bt 30, 0x5daff8
  05daf74  cmpwi 7, 0, 0
  05daf78  bt 29, 0x5dafc0
  05daf7c  mr 3, 9
  05daf80  bl 0x5dad7c
  05daf84  nop
  05daf88  extsh 0, 3
  05daf8c  cmpwi 7, 0, 0
  05daf90  bf 29, 0x5dafbc
  05daf94  li 0, 0
  05daf98  li 3, 0
  05daf9c  sth 0, 0(30)
  05dafa0  ld 0, 144(1)
  05dafa4  extsw 3, 3
  05dafa8  ld 30, 112(1)
  05dafac  ld 31, 120(1)
  05dafb0  mtlr 0
  05dafb4  addi 1, 1, 128
  05dafb8  blr
  05dafbc  lhz 11, 0(31)
  05dafc0  rlwinm 0, 11, 17, 11, 31
  05dafc4  addi 9, 3, -1022
  05dafc8  rotlwi 0, 0, 15
  05dafcc  li 3, -1
  05dafd0  ori 0, 0, 16352
  05dafd4  extsw 3, 3
  05dafd8  sth 0, 0(31)
  05dafdc  ld 0, 144(1)
  05dafe0  sth 9, 0(30)
  05dafe4  ld 31, 120(1)
  05dafe8  mtlr 0
  05dafec  ld 30, 112(1)
  05daff0  addi 1, 1, 128
  05daff4  blr
  05daff8  li 0, 0
  05daffc  sth 0, 0(30)
  05db000  lhz 9, 0(4)
  05db004  clrlwi 9, 9, 28
  05db008  cmpwi 7, 9, 0
  05db00c  bt 30, 0x5db030
  05db010  li 3, 2
  05db014  ld 0, 144(1)
  05db018  extsw 3, 3
  05db01c  ld 30, 112(1)
  05db020  ld 31, 120(1)
  05db024  mtlr 0
  05db028  addi 1, 1, 128
  05db02c  blr
  05db030  lhz 0, 2(4)
  05db034  cmpwi 7, 0, 0
  05db038  bf 30, 0x5db010
  05db03c  lhz 0, 4(4)
  05db040  cmpwi 7, 0, 0
  05db044  bf 30, 0x5db010
  05db048  lhz 0, 6(4)
  05db04c  li 3, 1
  05db050  cmpwi 7, 0, 0
  05db054  bt 30, 0x5dafa0
  05db058  li 3, 2
  05db05c  b 0x5db014
