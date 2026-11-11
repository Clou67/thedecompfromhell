# game/update/moby1062.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1062_001ad128:   # 0x1ad128, 0x14 bytes
  01ad128  lis 3, 116
  01ad12c  lis 4, 1
  01ad130  addic 3, 3, 2484
  01ad134  stw 4, 72(3)
  01ad138  blr

UpdateMoby_1062:   # 0x1ad140, 0x12c bytes
  01ad140  stdu 1, -160(1)
  01ad144  mflr 0
  01ad148  std 0, 176(1)
  01ad14c  std 31, 152(1)
  01ad150  ori 31, 3, 0
  01ad154  lis 3, 113
  01ad158  ori 4, 31, 0
  01ad15c  std 28, 128(1)
  01ad160  addic 3, 3, -30520
  01ad164  std 30, 144(1)
  01ad168  std 29, 136(1)
  01ad16c  std 27, 120(1)
  01ad170  std 26, 112(1)
  01ad174  lwz 28, 120(31)
  01ad178  bl 0x6d720
  01ad17c  nop
  01ad180  li 26, 0
  01ad184  lis 30, 149
  01ad188  ori 27, 28, 0
  01ad18c  ori 29, 26, 0
  01ad190  addic 30, 30, 5376
  01ad194  lwz 3, 0(27)
  01ad198  cmpwi 3, -1
  01ad19c  bf 1, 0x1ad1d0
  01ad1a0  extsw 4, 3
  01ad1a4  ori 3, 30, 0
  01ad1a8  bl 0x110b70
  01ad1ac  nop
  01ad1b0  cmpwi 3, 0
  01ad1b4  bt 2, 0x1ad1d0
  01ad1b8  lis 3, 113
  01ad1bc  ori 4, 31, 0
  01ad1c0  addic 3, 3, -30528
  01ad1c4  bl 0x6d720
  01ad1c8  nop
  01ad1cc  b 0x1ad1e0
  01ad1d0  addic 26, 26, 1
  01ad1d4  addic 27, 27, 4
  01ad1d8  cmpwi 26, 4
  01ad1dc  bt 0, 0x1ad194
  01ad1e0  lis 3, 151
  01ad1e4  ori 27, 29, 0
  01ad1e8  addic 29, 3, -25376
  01ad1ec  lwz 3, 8332(29)
  01ad1f0  cmpwi 3, 15
  01ad1f4  bt 2, 0x1ad21c
  01ad1f8  lwz 3, 64(28)
  01ad1fc  cmpwi 3, -1
  01ad200  bf 1, 0x1ad234
  01ad204  extsw 4, 3
  01ad208  ori 3, 30, 0
  01ad20c  bl 0x110b70
  01ad210  nop
  01ad214  cmpwi 3, 0
  01ad218  bt 2, 0x1ad234
  01ad21c  lis 3, 113
  01ad220  ori 4, 31, 0
  01ad224  addic 3, 3, -30512
  01ad228  bl 0x6d720
  01ad22c  nop
  01ad230  b 0x1ad244
  01ad234  addic 27, 27, 1
  01ad238  addic 28, 28, 4
  01ad23c  cmpwi 27, 4
  01ad240  bt 0, 0x1ad1ec
  01ad244  ld 0, 176(1)
  01ad248  mtlr 0
  01ad24c  ld 26, 112(1)
  01ad250  ld 27, 120(1)
  01ad254  ld 28, 128(1)
  01ad258  ld 29, 136(1)
  01ad25c  ld 30, 144(1)
  01ad260  ld 31, 152(1)
  01ad264  addi 1, 1, 160
  01ad268  blr
