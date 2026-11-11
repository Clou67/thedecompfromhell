# game/update/moby1660.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1660_002a8470:   # 0x2a8470, 0x7c bytes
  02a8470  lis 3, 43
  02a8474  vspltisw 2, -1
  02a8478  lis 4, 114
  02a847c  addi 3, 3, -31644
  02a8480  li 5, -3056
  02a8484  vslw 2, 2, 2
  02a8488  lis 7, 123
  02a848c  <unknown>
  02a8490  <unknown>
  02a8494  addic 7, 7, 23060
  02a8498  vspltw 3, 3, 0
  02a849c  lis 4, 251
  02a84a0  li 5, -1968
  02a84a4  lis 8, 1
  02a84a8  li 6, 4
  02a84ac  vmaddfp 2, 4, 3, 2
  02a84b0  vspltisw 3, -1
  02a84b4  stw 8, 72(7)
  02a84b8  lis 9, 251
  02a84bc  li 10, -1964
  02a84c0  vslw 3, 3, 3
  02a84c4  vctsxs 2, 2, 0
  02a84c8  vspltw 2, 2, 0
  02a84cc  stvewx 2, 5, 4
  02a84d0  <unknown>
  02a84d4  vspltw 2, 2, 0
  02a84d8  vmaddfp 2, 4, 2, 3
  02a84dc  vctsxs 2, 2, 0
  02a84e0  vspltw 2, 2, 0
  02a84e4  stvewx 2, 10, 9
  02a84e8  blr

UpdateMoby_1660:   # 0x2a84f8, 0x1dc bytes
  02a84f8  stdu 1, -176(1)
  02a84fc  mflr 0
  02a8500  std 0, 192(1)
  02a8504  stfd 31, 168(1)
  02a8508  std 31, 160(1)
  02a850c  ori 31, 3, 0
  02a8510  lis 4, 1
  02a8514  std 30, 152(1)
  02a8518  std 29, 144(1)
  02a851c  std 28, 136(1)
  02a8520  li 5, 0
  02a8524  bl 0x10675c
  02a8528  nop
  02a852c  ori 4, 3, 0
  02a8530  lbz 3, 32(31)
  02a8534  cmpwi 3, 0
  02a8538  bt 1, 0x2a8548
  02a853c  cmpwi 3, -1
  02a8540  bf 1, 0x2a86b0
  02a8544  b 0x2a855c
  02a8548  cmpwi 3, 1
  02a854c  bf 1, 0x2a8568
  02a8550  cmpwi 3, 2
  02a8554  bf 1, 0x2a8588
  02a8558  b 0x2a86b0
  02a855c  li 3, 1
  02a8560  stb 3, 32(31)
  02a8564  b 0x2a86b0
  02a8568  cmpwi 4, 0
  02a856c  bt 2, 0x2a86b0
  02a8570  lwz 3, 44(4)
  02a8574  cmpwi 3, 0
  02a8578  bf 1, 0x2a86b0
  02a857c  li 3, 2
  02a8580  stb 3, 32(31)
  02a8584  b 0x2a86b0
  02a8588  li 3, 0
  02a858c  li 4, 0
  02a8590  ori 5, 31, 0
  02a8594  bl 0x15d12c
  02a8598  nop
  02a859c  ori 3, 31, 0
  02a85a0  bl 0x11a100
  02a85a4  nop
  02a85a8  lis 3, 43
  02a85ac  lis 4, 161
  02a85b0  addi 5, 3, -31504
  02a85b4  addic 28, 4, 23856
  02a85b8  addic 30, 31, 16
  02a85bc  addic 29, 31, 64
  02a85c0  ori 3, 31, 0
  02a85c4  lfs 31, 0(5)
  02a85c8  std 28, 112(1)
  02a85cc  li 4, 1662
  02a85d0  std 28, 120(1)
  02a85d4  ori 5, 30, 0
  02a85d8  ori 6, 29, 0
  02a85dc  fmr 1, 31
  02a85e0  li 7, 0
  02a85e4  li 8, 0
  02a85e8  ori 10, 28, 0
  02a85ec  bl 0x11a560
  02a85f0  nop
  02a85f4  ori 3, 31, 0
  02a85f8  std 28, 112(1)
  02a85fc  ori 10, 28, 0
  02a8600  li 4, 1662
  02a8604  fmr 1, 31
  02a8608  ori 5, 30, 0
  02a860c  std 28, 120(1)
  02a8610  ori 6, 29, 0
  02a8614  li 7, 0
  02a8618  li 8, 0
  02a861c  bl 0x11a560
  02a8620  nop
  02a8624  li 3, 1661
  02a8628  bl 0xefa28
  02a862c  nop
  02a8630  cmpwi 3, 0
  02a8634  bt 2, 0x2a86a0
  02a8638  ori 4, 3, 0
  02a863c  li 3, 255
  02a8640  li 5, 1
  02a8644  sth 3, 50(4)
  02a8648  stb 5, 49(4)
  02a864c  ori 3, 4, 0
  02a8650  lfs 1, 16(31)
  02a8654  stfs 1, 16(4)
  02a8658  lfs 1, 20(31)
  02a865c  stfs 1, 20(4)
  02a8660  lfs 1, 24(31)
  02a8664  stfs 1, 24(4)
  02a8668  lfs 1, 28(31)
  02a866c  stfs 1, 28(4)
  02a8670  lfs 1, 64(31)
  02a8674  stfs 1, 64(4)
  02a8678  lfs 1, 68(31)
  02a867c  stfs 1, 68(4)
  02a8680  lfs 1, 72(31)
  02a8684  stfs 1, 72(4)
  02a8688  lfs 1, 76(31)
  02a868c  stfs 1, 76(4)
  02a8690  ld 5, 56(31)
  02a8694  std 5, 56(4)
  02a8698  bl 0xf31a8
  02a869c  nop
  02a86a0  ori 3, 31, 0
  02a86a4  bl 0xefb38
  02a86a8  nop
  02a86ac  b 0x2a86b0
  02a86b0  ld 0, 192(1)
  02a86b4  mtlr 0
  02a86b8  lfd 31, 168(1)
  02a86bc  ld 28, 136(1)
  02a86c0  ld 29, 144(1)
  02a86c4  ld 30, 152(1)
  02a86c8  ld 31, 160(1)
  02a86cc  addi 1, 1, 176
  02a86d0  blr
