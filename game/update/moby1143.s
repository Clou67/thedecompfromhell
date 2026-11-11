# game/update/moby1143.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1143_001df4c0:   # 0x1df4c0, 0x14 bytes
  01df4c0  lis 3, 118
  01df4c4  lis 4, 1
  01df4c8  addic 3, 3, 19540
  01df4cc  stw 4, 72(3)
  01df4d0  blr

UpdateMoby_1143:   # 0x1df4e0, 0xfc bytes
  01df4e0  stdu 1, -144(1)
  01df4e4  mflr 0
  01df4e8  std 0, 160(1)
  01df4ec  stfd 31, 136(1)
  01df4f0  std 31, 128(1)
  01df4f4  lbz 4, 32(3)
  01df4f8  std 30, 120(1)
  01df4fc  ori 31, 3, 0
  01df500  lwz 30, 120(3)
  01df504  cmpwi 4, 0
  01df508  cmpwi 1, 4, 1
  01df50c  std 29, 112(1)
  01df510  cmpwi 6, 4, -1
  01df514  bt 1, 0x1df520
  01df518  bf 25, 0x1df5bc
  01df51c  b 0x1df528
  01df520  bf 5, 0x1df55c
  01df524  b 0x1df5bc
  01df528  li 3, 1
  01df52c  li 4, 32
  01df530  stb 3, 32(31)
  01df534  stb 4, 115(31)
  01df538  bl 0xfcc68
  01df53c  nop
  01df540  stfs 1, 64(30)
  01df544  ori 3, 31, 0
  01df548  li 4, 1
  01df54c  ori 5, 30, 0
  01df550  bl 0xf0ea8
  01df554  nop
  01df558  b 0x1df5bc
  01df55c  lis 3, 30
  01df560  lis 4, 114
  01df564  addi 29, 3, -2856
  01df568  lis 3, 118
  01df56c  lfs 3, 0(29)
  01df570  lfs 2, 19648(3)
  01df574  lfs 1, 72(31)
  01df578  fmuls 2, 2, 3
  01df57c  lfs 4, -3052(4)
  01df580  fmuls 31, 2, 4
  01df584  fmr 2, 31
  01df588  bl 0x502578
  01df58c  nop
  01df590  stfs 1, 72(31)
  01df594  lfs 3, 4(29)
  01df598  lfs 1, 64(30)
  01df59c  fmuls 2, 31, 3
  01df5a0  bl 0x502578
  01df5a4  nop
  01df5a8  stfs 1, 64(30)
  01df5ac  addic 3, 30, 16
  01df5b0  li 4, 2
  01df5b4  bl 0x501980
  01df5b8  nop
  01df5bc  ld 0, 160(1)
  01df5c0  mtlr 0
  01df5c4  lfd 31, 136(1)
  01df5c8  ld 29, 112(1)
  01df5cc  ld 30, 120(1)
  01df5d0  ld 31, 128(1)
  01df5d4  addi 1, 1, 144
  01df5d8  blr
