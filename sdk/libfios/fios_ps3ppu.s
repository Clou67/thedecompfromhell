# sdk/libfios/fios_ps3ppu.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios29FIOSPS3LoadModuleDependenciesEv:   # 0x52ea40, 0x100 bytes
  052ea40  stdu 1, -144(1)
  052ea44  mflr 0
  052ea48  std 28, 112(1)
  052ea4c  std 29, 120(1)
  052ea50  std 30, 128(1)
  052ea54  std 31, 136(1)
  052ea58  std 0, 160(1)
  052ea5c  bl 0x6500e4
  052ea60  ld 2, 40(1)
  052ea64  cmpwi 7, 3, 0
  052ea68  mr 4, 3
  052ea6c  bt 30, 0x52eaac
  052ea70  xoris 0, 3, 32769
  052ea74  cmpwi 7, 0, 8193
  052ea78  bt 30, 0x52eaac
  052ea7c  lwz 3, -29796(2)
  052ea80  extsw 4, 4
  052ea84  bl 0x52cbd8
  052ea88  nop
  052ea8c  ld 0, 160(1)
  052ea90  ld 28, 112(1)
  052ea94  ld 29, 120(1)
  052ea98  mtlr 0
  052ea9c  ld 30, 128(1)
  052eaa0  ld 31, 136(1)
  052eaa4  addi 1, 1, 144
  052eaa8  blr
  052eaac  lwz 9, -29800(2)
  052eab0  li 0, 0
  052eab4  ori 0, 0, 65535
  052eab8  lhz 3, 0(9)
  052eabc  clrlwi 31, 3, 16
  052eac0  cmpw 7, 31, 0
  052eac4  bt 30, 0x52ea8c
  052eac8  lis 29, -32767
  052eacc  addi 30, 9, 2
  052ead0  ori 29, 29, 8193
  052ead4  mr 28, 0
  052ead8  clrldi 3, 3, 48
  052eadc  bl 0x64f4a4
  052eae0  ld 2, 40(1)
  052eae4  cmpwi 7, 3, 0
  052eae8  cmpw 6, 3, 29
  052eaec  bt 30, 0x52eb08
  052eaf0  extsw 4, 31
  052eaf4  extsw 5, 3
  052eaf8  bt 26, 0x52eb08
  052eafc  lwz 3, -29792(2)
  052eb00  bl 0x52cbd8
  052eb04  nop
  052eb08  clrldi 9, 30, 32
  052eb0c  addi 30, 30, 2
  052eb10  lhz 3, 0(9)
  052eb14  clrlwi 31, 3, 16
  052eb18  cmpw 7, 31, 28
  052eb1c  bf 30, 0x52ead8
  052eb20  ld 0, 160(1)
  052eb24  ld 28, 112(1)
  052eb28  ld 29, 120(1)
  052eb2c  mtlr 0
  052eb30  ld 30, 128(1)
  052eb34  ld 31, 136(1)
  052eb38  addi 1, 1, 144
  052eb3c  blr
