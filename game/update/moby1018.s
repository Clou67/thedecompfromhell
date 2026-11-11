# game/update/moby1018.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1018_00188858:   # 0x188858, 0x2c bytes
  0188858  stdu 1, -112(1)
  018885c  mflr 0
  0188860  std 0, 128(1)
  0188864  lis 3, 116
  0188868  addic 3, 3, -2144
  018886c  bl 0x17e558
  0188870  nop
  0188874  ld 0, 128(1)
  0188878  mtlr 0
  018887c  addi 1, 1, 112
  0188880  blr

UpdateMoby_1018:   # 0x188888, 0xb4 bytes
  0188888  stdu 1, -128(1)
  018888c  mflr 0
  0188890  std 0, 144(1)
  0188894  std 31, 120(1)
  0188898  ori 31, 3, 0
  018889c  lbz 3, 32(3)
  01888a0  cmpwi 3, 0
  01888a4  cmpwi 1, 3, 1
  01888a8  cmpwi 6, 3, -1
  01888ac  bt 1, 0x1888b8
  01888b0  bf 25, 0x188928
  01888b4  b 0x1888c0
  01888b8  bf 5, 0x1888f0
  01888bc  b 0x188928
  01888c0  lis 3, 25
  01888c4  lis 4, 116
  01888c8  addi 5, 3, -30588
  01888cc  addic 3, 4, -2144
  01888d0  lfs 1, 0(5)
  01888d4  bl 0x17e368
  01888d8  nop
  01888dc  li 3, 1
  01888e0  li 4, 255
  01888e4  stb 3, 32(31)
  01888e8  stb 4, 48(31)
  01888ec  b 0x188928
  01888f0  lwz 4, 120(31)
  01888f4  lis 3, 149
  01888f8  addic 3, 3, 5376
  01888fc  lwz 4, 0(4)
  0188900  extsw 4, 4
  0188904  bl 0x110b70
  0188908  nop
  018890c  cmpwi 3, 0
  0188910  bf 2, 0x188928
  0188914  lis 3, 113
  0188918  ori 4, 31, 0
  018891c  addic 3, 3, -31768
  0188920  bl 0x6d760
  0188924  nop
  0188928  ld 0, 144(1)
  018892c  mtlr 0
  0188930  ld 31, 120(1)
  0188934  addi 1, 1, 128
  0188938  blr
