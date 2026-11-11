# sdk/libfios/fios_paths.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios7md5path6decodeEPKc:   # 0x51c858, 0x7c bytes
  051c858  li 0, 0
  051c85c  lwz 8, -30760(2)
  051c860  mr 6, 3
  051c864  li 7, 0
  051c868  std 0, 0(3)
  051c86c  std 0, 8(3)
  051c870  li 0, 16
  051c874  li 10, 0
  051c878  mtctr 0
  051c87c  lbz 11, 0(4)
  051c880  sldi 10, 10, 4
  051c884  addi 4, 4, 1
  051c888  lbzx 0, 8, 11
  051c88c  extsb 9, 0
  051c890  extsb 0, 0
  051c894  cmpwi 7, 9, 0
  051c898  or 10, 10, 0
  051c89c  bt 28, 0x51c8c8
  051c8a0  bdnz 0x51c87c
  051c8a4  add 9, 7, 6
  051c8a8  cmpwi 7, 7, 8
  051c8ac  clrldi 9, 9, 32
  051c8b0  addi 7, 7, 8
  051c8b4  std 10, 0(9)
  051c8b8  bf 30, 0x51c870
  051c8bc  li 3, 1
  051c8c0  extsw 3, 3
  051c8c4  blr
  051c8c8  li 3, 0
  051c8cc  extsw 3, 3
  051c8d0  blr

_ZN4cell4fios8pathhashEPKc:   # 0x51c8d4, 0x58 bytes
  051c8d4  stdu 1, -128(1)
  051c8d8  mflr 0
  051c8dc  cmpwi 7, 3, 0
  051c8e0  std 31, 120(1)
  051c8e4  clrldi 31, 3, 32
  051c8e8  std 0, 144(1)
  051c8ec  mr 3, 31
  051c8f0  li 0, 0
  051c8f4  bt 30, 0x51c914
  051c8f8  bl 0x5c8510
  051c8fc  nop
  051c900  clrldi 4, 3, 32
  051c904  mr 3, 31
  051c908  bl 0x518fec
  051c90c  nop
  051c910  mr 0, 3
  051c914  clrldi 3, 0, 32
  051c918  ld 0, 144(1)
  051c91c  ld 31, 120(1)
  051c920  addi 1, 1, 128
  051c924  mtlr 0
  051c928  blr

_ZN4cell4fios7md5path6encodeEPc:   # 0x51c92c, 0x4c bytes
  051c92c  mr 9, 3
  051c930  mflr 0
  051c934  stdu 1, -144(1)
  051c938  std 0, 160(1)
  051c93c  std 29, 120(1)
  051c940  mr 3, 4
  051c944  lwz 5, -30756(2)
  051c948  mr 29, 4
  051c94c  ld 7, 8(9)
  051c950  li 4, 33
  051c954  ld 6, 0(9)
  051c958  bl 0x5cd198
  051c95c  nop
  051c960  ld 0, 160(1)
  051c964  mr 3, 29
  051c968  mtlr 0
  051c96c  ld 29, 120(1)
  051c970  addi 1, 1, 144
  051c974  blr

FUN_0051c978:   # 0x51c978, 0x2c bytes
  051c978  stdu 1, -112(1)
  051c97c  mflr 0
  051c980  li 5, 16
  051c984  std 0, 128(1)
  051c988  bl 0x5d0218
  051c98c  nop
  051c990  ld 0, 128(1)
  051c994  extsw 3, 3
  051c998  mtlr 0
  051c99c  addi 1, 1, 112
  051c9a0  blr

_ZN4cell4fios7md5path3setEPKc:   # 0x51c9a4, 0xe0 bytes
  051c9a4  stdu 1, -240(1)
  051c9a8  mflr 0
  051c9ac  std 31, 232(1)
  051c9b0  std 0, 256(1)
  051c9b4  mr 0, 4
  051c9b8  mr 31, 3
  051c9bc  cmpwi 7, 0, 0
  051c9c0  li 5, 0
  051c9c4  li 9, 0
  051c9c8  clrldi 4, 4, 32
  051c9cc  addi 3, 1, 112
  051c9d0  bt- 30, 0x51ca78
  051c9d4  bl 0x52faf8
  051c9d8  nop
  051c9dc  addi 9, 1, 200
  051c9e0  clrldi 9, 9, 32
  051c9e4  lbz 0, 0(9)
  051c9e8  lbz 11, 1(9)
  051c9ec  lbz 10, 2(9)
  051c9f0  lbz 8, 3(9)
  051c9f4  stb 0, 0(31)
  051c9f8  stb 11, 1(31)
  051c9fc  stb 10, 2(31)
  051ca00  stb 8, 3(31)
  051ca04  lbz 0, 4(9)
  051ca08  lbz 11, 5(9)
  051ca0c  lbz 10, 6(9)
  051ca10  lbz 8, 7(9)
  051ca14  stb 0, 4(31)
  051ca18  stb 11, 5(31)
  051ca1c  stb 10, 6(31)
  051ca20  stb 8, 7(31)
  051ca24  lbz 0, 8(9)
  051ca28  lbz 11, 9(9)
  051ca2c  lbz 10, 10(9)
  051ca30  lbz 8, 11(9)
  051ca34  stb 0, 8(31)
  051ca38  stb 11, 9(31)
  051ca3c  stb 10, 10(31)
  051ca40  stb 8, 11(31)
  051ca44  lbz 0, 15(9)
  051ca48  lbz 11, 12(9)
  051ca4c  lbz 10, 13(9)
  051ca50  lbz 8, 14(9)
  051ca54  stb 0, 15(31)
  051ca58  stb 11, 12(31)
  051ca5c  stb 10, 13(31)
  051ca60  stb 8, 14(31)
  051ca64  ld 0, 256(1)
  051ca68  ld 31, 232(1)
  051ca6c  addi 1, 1, 240
  051ca70  mtlr 0
  051ca74  blr
  051ca78  std 9, 0(31)
  051ca7c  std 9, 8(31)
  051ca80  b 0x51ca64

_ZN4cell4fios10staticpath7setPathEPKc:   # 0x51ca84, 0x30 bytes
  051ca84  addi 3, 3, 4
  051ca88  mflr 0
  051ca8c  li 5, 256
  051ca90  clrldi 3, 3, 32
  051ca94  stdu 1, -112(1)
  051ca98  std 0, 128(1)
  051ca9c  bl 0x5193cc
  051caa0  nop
  051caa4  ld 0, 128(1)
  051caa8  addi 1, 1, 112
  051caac  mtlr 0
  051cab0  blr

_ZN4cell4fios4path3setERKS1_:   # 0x51cab4, 0x54 bytes
  051cab4  lwz 9, -30752(2)
  051cab8  mflr 0
  051cabc  stdu 1, -144(1)
  051cac0  std 29, 120(1)
  051cac4  mr 29, 4
  051cac8  std 0, 160(1)
  051cacc  std 28, 112(1)
  051cad0  mr 28, 3
  051cad4  lwz 4, 0(4)
  051cad8  lwz 3, 0(3)
  051cadc  lhz 5, 12(9)
  051cae0  bl 0x5193cc
  051cae4  nop
  051cae8  lwz 0, 4(29)
  051caec  ld 29, 120(1)
  051caf0  stw 0, 4(28)
  051caf4  ld 0, 160(1)
  051caf8  ld 28, 112(1)
  051cafc  addi 1, 1, 144
  051cb00  mtlr 0
  051cb04  blr

_ZN4cell4fios4path3setEPKc:   # 0x51cb08, 0x6c bytes
  051cb08  stdu 1, -128(1)
  051cb0c  mflr 0
  051cb10  mr 10, 4
  051cb14  std 0, 144(1)
  051cb18  lwz 0, 0(3)
  051cb1c  cmpwi 7, 10, 0
  051cb20  std 31, 120(1)
  051cb24  mr 31, 3
  051cb28  clrldi 3, 0, 32
  051cb2c  clrldi 4, 4, 32
  051cb30  mr 11, 3
  051cb34  bt- 30, 0x51cb68
  051cb38  lwz 9, -30752(2)
  051cb3c  lhz 5, 12(9)
  051cb40  bl 0x5193cc
  051cb44  nop
  051cb48  lwz 3, 0(31)
  051cb4c  bl 0x51c8d4
  051cb50  stw 3, 4(31)
  051cb54  ld 0, 144(1)
  051cb58  ld 31, 120(1)
  051cb5c  addi 1, 1, 128
  051cb60  mtlr 0
  051cb64  blr
  051cb68  stb 10, 0(11)
  051cb6c  stw 10, 4(31)
  051cb70  b 0x51cb54
