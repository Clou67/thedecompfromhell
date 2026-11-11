# game/update/moby978.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_978:   # 0x4c74b0, 0x190 bytes
  04c74b0  stdu 1, -144(1)
  04c74b4  mflr 0
  04c74b8  std 0, 160(1)
  04c74bc  std 31, 136(1)
  04c74c0  lbz 4, 32(3)
  04c74c4  std 30, 128(1)
  04c74c8  ori 31, 3, 0
  04c74cc  lwz 30, 120(3)
  04c74d0  cmpwi 4, 0
  04c74d4  cmpwi 1, 4, 2
  04c74d8  cmpwi 6, 4, 1
  04c74dc  cmpwi 7, 4, -1
  04c74e0  bt 1, 0x4c74ec
  04c74e4  bf 29, 0x4c7628
  04c74e8  b 0x4c74f8
  04c74ec  bf 25, 0x4c7538
  04c74f0  bf 5, 0x4c7584
  04c74f4  b 0x4c7628
  04c74f8  lis 4, 76
  04c74fc  li 3, 255
  04c7500  addi 4, 4, 29864
  04c7504  lis 5, 114
  04c7508  stb 3, 48(31)
  04c750c  lfs 1, 0(4)
  04c7510  lfs 2, -3056(5)
  04c7514  lfs 3, 0(30)
  04c7518  fmuls 1, 2, 1
  04c751c  fmuls 1, 1, 3
  04c7520  bl 0x502758
  04c7524  nop
  04c7528  li 4, 1
  04c752c  stw 3, 12(30)
  04c7530  stb 4, 32(31)
  04c7534  b 0x4c7628
  04c7538  addic 3, 30, 12
  04c753c  bl 0x4fff60
  04c7540  nop
  04c7544  cmpwi 3, 0
  04c7548  bt 2, 0x4c7628
  04c754c  lis 3, 76
  04c7550  lis 4, 114
  04c7554  addi 3, 3, 29864
  04c7558  lfs 1, 0(3)
  04c755c  lfs 2, -3056(4)
  04c7560  lfs 3, 8(30)
  04c7564  fmuls 1, 2, 1
  04c7568  fmuls 1, 1, 3
  04c756c  bl 0x502758
  04c7570  nop
  04c7574  stw 3, 12(30)
  04c7578  li 3, 2
  04c757c  stb 3, 32(31)
  04c7580  b 0x4c7628
  04c7584  addic 3, 30, 12
  04c7588  bl 0x4fff60
  04c758c  nop
  04c7590  cmpwi 3, 0
  04c7594  bt 2, 0x4c75d0
  04c7598  lis 3, 76
  04c759c  lis 4, 114
  04c75a0  addi 3, 3, 29864
  04c75a4  lfs 1, 0(3)
  04c75a8  lfs 2, -3056(4)
  04c75ac  lfs 3, 4(30)
  04c75b0  fmuls 1, 2, 1
  04c75b4  fmuls 1, 1, 3
  04c75b8  bl 0x502758
  04c75bc  nop
  04c75c0  li 4, 1
  04c75c4  stw 3, 12(30)
  04c75c8  stb 4, 32(31)
  04c75cc  b 0x4c7628
  04c75d0  lis 3, 76
  04c75d4  lfs 2, 72(31)
  04c75d8  lis 5, 114
  04c75dc  addi 4, 3, 29864
  04c75e0  addic 3, 1, 112
  04c75e4  lfs 1, 4(4)
  04c75e8  lfs 4, -3052(5)
  04c75ec  lfs 3, 68(31)
  04c75f0  fmuls 1, 4, 1
  04c75f4  bl 0xfe610
  04c75f8  nop
  04c75fc  li 3, 1
  04c7600  bl 0xfc620
  04c7604  nop
  04c7608  cmpwi 3, 0
  04c760c  bf 2, 0x4c7628
  04c7610  addic 3, 31, 16
  04c7614  addic 4, 1, 112
  04c7618  li 5, 0
  04c761c  ori 6, 31, 0
  04c7620  bl 0x12d2e0
  04c7624  nop
  04c7628  ld 0, 160(1)
  04c762c  mtlr 0
  04c7630  ld 30, 128(1)
  04c7634  ld 31, 136(1)
  04c7638  addi 1, 1, 144
  04c763c  blr
