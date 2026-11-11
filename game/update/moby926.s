# game/update/moby926.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M926_004b9780:   # 0x4b9780, 0x14 bytes
  04b9780  lis 3, 143
  04b9784  lis 4, 1
  04b9788  addic 3, 3, 18172
  04b978c  stw 4, 72(3)
  04b9790  blr

UpdateMoby_926:   # 0x4b9798, 0x114 bytes
  04b9798  stdu 1, -128(1)
  04b979c  mflr 0
  04b97a0  std 0, 144(1)
  04b97a4  std 31, 120(1)
  04b97a8  std 30, 112(1)
  04b97ac  ori 31, 3, 0
  04b97b0  lwz 30, 120(31)
  04b97b4  lbz 4, 32(31)
  04b97b8  addic 3, 30, 32
  04b97bc  cmpwi 4, 0
  04b97c0  cmpwi 1, 4, 2
  04b97c4  cmpwi 6, 4, 1
  04b97c8  cmpwi 7, 4, -1
  04b97cc  bt 1, 0x4b97d8
  04b97d0  bf 29, 0x4b9894
  04b97d4  b 0x4b97e4
  04b97d8  bf 25, 0x4b9824
  04b97dc  bf 5, 0x4b987c
  04b97e0  b 0x4b9894
  04b97e4  lis 4, 151
  04b97e8  addic 4, 4, -16064
  04b97ec  lbz 4, 33(4)
  04b97f0  cmpwi 4, 1
  04b97f4  bf 2, 0x4b9808
  04b97f8  ori 3, 31, 0
  04b97fc  bl 0xefb38
  04b9800  nop
  04b9804  b 0x4b9894
  04b9808  li 5, 1
  04b980c  ori 4, 3, 0
  04b9810  ori 3, 31, 0
  04b9814  stb 5, 32(31)
  04b9818  bl 0x4d3720
  04b981c  nop
  04b9820  b 0x4b9894
  04b9824  ori 4, 3, 0
  04b9828  ori 3, 31, 0
  04b982c  bl 0x4d3870
  04b9830  nop
  04b9834  cmpwi 3, 0
  04b9838  bt 2, 0x4b9844
  04b983c  li 3, 2
  04b9840  stb 3, 32(31)
  04b9844  lhz 3, 86(30)
  04b9848  cmpwi 3, 1
  04b984c  bf 2, 0x4b9894
  04b9850  lis 3, 151
  04b9854  lis 4, 151
  04b9858  addic 6, 3, -16064
  04b985c  li 5, 1
  04b9860  addic 4, 4, -16027
  04b9864  ori 3, 31, 0
  04b9868  stb 5, 33(6)
  04b986c  stb 5, 33(4)
  04b9870  bl 0xefb38
  04b9874  nop
  04b9878  b 0x4b9894
  04b987c  lis 3, 161
  04b9880  lwz 3, 1800(3)
  04b9884  cmpwi 3, 2
  04b9888  bt 2, 0x4b9894
  04b988c  li 3, 1
  04b9890  stb 3, 32(31)
  04b9894  ld 0, 144(1)
  04b9898  mtlr 0
  04b989c  ld 30, 112(1)
  04b98a0  ld 31, 120(1)
  04b98a4  addi 1, 1, 128
  04b98a8  blr
