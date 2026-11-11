# game/update/moby879.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M879_0049f894:   # 0x49f894, 0x14 bytes
  049f894  lis 3, 141
  049f898  lis 4, 1
  049f89c  addic 3, 3, -32672
  049f8a0  stw 4, 72(3)
  049f8a4  blr

M879_Rilgar_SubmitOcean:   # 0x49f8a8, 0x88 bytes
  049f8a8  stdu 1, -144(1)
  049f8ac  mflr 0
  049f8b0  std 0, 160(1)
  049f8b4  std 29, 120(1)
  049f8b8  std 30, 128(1)
  049f8bc  lis 30, 149
  049f8c0  std 31, 136(1)
  049f8c4  li 29, 0
  049f8c8  lwz 31, 120(3)
  049f8cc  addic 30, 30, 5376
  049f8d0  lwz 3, 0(31)
  049f8d4  cmpwi 3, -1
  049f8d8  bt 2, 0x49f8f4
  049f8dc  extsw 4, 3
  049f8e0  ori 3, 30, 0
  049f8e4  bl 0x110b70
  049f8e8  nop
  049f8ec  cmpwi 3, 0
  049f8f0  bf 2, 0x49f914
  049f8f4  addic 29, 29, 1
  049f8f8  addic 31, 31, 4
  049f8fc  cmpwi 29, 8
  049f900  bt 0, 0x49f8d0
  049f904  lis 3, 141
  049f908  addic 3, 3, -17152
  049f90c  bl 0x17e558
  049f910  nop
  049f914  ld 0, 160(1)
  049f918  mtlr 0
  049f91c  ld 29, 120(1)
  049f920  ld 30, 128(1)
  049f924  ld 31, 136(1)
  049f928  addi 1, 1, 144
  049f92c  blr

UpdateMoby_879_RilgarOcean:   # 0x49f960, 0x210 bytes
  049f960  stdu 1, -144(1)
  049f964  mflr 0
  049f968  std 0, 160(1)
  049f96c  std 31, 136(1)
  049f970  ori 31, 3, 0
  049f974  lbz 3, 32(3)
  049f978  cmpwi 3, 0
  049f97c  cmpwi 1, 3, 1
  049f980  cmpwi 6, 3, -1
  049f984  bt 1, 0x49f990
  049f988  bf 25, 0x49fb5c
  049f98c  b 0x49f998
  049f990  bf 5, 0x49f9c8
  049f994  b 0x49fb5c
  049f998  lis 3, 74
  049f99c  lis 4, 141
  049f9a0  addi 5, 3, -1744
  049f9a4  addic 3, 4, -17152
  049f9a8  lfs 1, 0(5)
  049f9ac  bl 0x17e368
  049f9b0  nop
  049f9b4  li 3, 1
  049f9b8  li 4, 255
  049f9bc  stb 3, 32(31)
  049f9c0  stb 4, 48(31)
  049f9c4  b 0x49fb5c
  049f9c8  lis 3, 151
  049f9cc  lis 4, 74
  049f9d0  addic 3, 3, -25376
  049f9d4  addi 4, 4, -1744
  049f9d8  lwz 3, 8332(3)
  049f9dc  lfs 5, 4(4)
  049f9e0  lfs 7, 8(4)
  049f9e4  lfs 8, 12(4)
  049f9e8  cmpwi 3, 22
  049f9ec  lfs 6, 16(4)
  049f9f0  lfs 1, 20(4)
  049f9f4  lfs 2, 24(4)
  049f9f8  lfs 4, 28(4)
  049f9fc  lfs 3, 32(4)
  049fa00  bf 2, 0x49fa88
  049fa04  lis 3, 161
  049fa08  lis 4, -18933
  049fa0c  ori 4, 4, 24759
  049fa10  lwz 3, 1808(3)
  049fa14  mulhw 4, 4, 3
  049fa18  addc 4, 4, 3
  049fa1c  srawi 4, 4, 8
  049fa20  srwi 5, 4, 31
  049fa24  addc 4, 4, 5
  049fa28  sldi 5, 4, 7
  049fa2c  sldi 4, 4, 3
  049fa30  subc 4, 5, 4
  049fa34  addc 5, 4, 4
  049fa38  addc 4, 4, 5
  049fa3c  subc 3, 3, 4
  049fa40  extsw 3, 3
  049fa44  std 3, 112(1)
  049fa48  lis 3, 74
  049fa4c  addi 3, 3, -1744
  049fa50  lfd 9, 112(1)
  049fa54  fcfid 9, 9
  049fa58  frsp 9, 9
  049fa5c  fmsubs 2, 9, 3, 2
  049fa60  fsubs 1, 1, 2
  049fa64  fsubs 9, 4, 2
  049fa68  lfs 4, 36(3)
  049fa6c  fsub 10, 2, 1
  049fa70  fsel 3, 10, 1, 2
  049fa74  fsub 1, 9, 3
  049fa78  fsel 3, 1, 9, 3
  049fa7c  fmr 2, 3
  049fa80  fmr 1, 2
  049fa84  b 0x49fb08
  049fa88  lis 3, 161
  049fa8c  lis 4, -18933
  049fa90  ori 4, 4, 24759
  049fa94  lwz 3, 1808(3)
  049fa98  mulhw 4, 4, 3
  049fa9c  addc 4, 4, 3
  049faa0  srawi 4, 4, 8
  049faa4  srwi 5, 4, 31
  049faa8  addc 4, 4, 5
  049faac  sldi 5, 4, 7
  049fab0  sldi 4, 4, 3
  049fab4  subc 4, 5, 4
  049fab8  addc 5, 4, 4
  049fabc  addc 4, 4, 5
  049fac0  subc 3, 3, 4
  049fac4  extsw 3, 3
  049fac8  std 3, 112(1)
  049facc  lis 3, 74
  049fad0  addi 3, 3, -1744
  049fad4  lfd 9, 112(1)
  049fad8  fcfid 9, 9
  049fadc  frsp 9, 9
  049fae0  fmsubs 2, 9, 3, 2
  049fae4  fsubs 1, 1, 2
  049fae8  fsubs 3, 4, 2
  049faec  lfs 4, 40(3)
  049faf0  fsub 9, 2, 1
  049faf4  fsel 1, 9, 1, 2
  049faf8  fsub 2, 3, 1
  049fafc  fsel 3, 2, 3, 1
  049fb00  fmr 2, 3
  049fb04  fmr 1, 2
  049fb08  fmuls 1, 2, 1
  049fb0c  lis 3, 74
  049fb10  ori 4, 31, 0
  049fb14  addi 3, 3, -1744
  049fb18  lfs 9, 44(3)
  049fb1c  fmuls 2, 1, 3
  049fb20  lis 3, 141
  049fb24  addic 5, 3, -17152
  049fb28  lis 3, 113
  049fb2c  addic 3, 3, -3264
  049fb30  fmuls 10, 1, 2
  049fb34  fmadds 2, 2, 8, 3
  049fb38  fmuls 3, 1, 10
  049fb3c  fmadds 2, 10, 7, 2
  049fb40  fmuls 1, 1, 3
  049fb44  fmadds 2, 3, 6, 2
  049fb48  fmadds 1, 1, 5, 2
  049fb4c  fmadds 1, 1, 9, 4
  049fb50  stfs 1, 8(5)
  049fb54  bl 0x6d760
  049fb58  nop
  049fb5c  ld 0, 160(1)
  049fb60  mtlr 0
  049fb64  ld 31, 136(1)
  049fb68  addi 1, 1, 144
  049fb6c  blr
