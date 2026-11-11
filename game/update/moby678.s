# game/update/moby678.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M678_0040f878:   # 0x40f878, 0x14 bytes
  040f878  lis 3, 133
  040f87c  lis 4, 1
  040f880  addic 3, 3, 28388
  040f884  stw 4, 72(3)
  040f888  blr

M678_0040f890:   # 0x40f890, 0x38 bytes
  040f890  stdu 1, -112(1)
  040f894  mflr 0
  040f898  std 0, 128(1)
  040f89c  bl 0x17d488
  040f8a0  nop
  040f8a4  lis 4, 133
  040f8a8  li 3, 2
  040f8ac  addic 4, 4, 28704
  040f8b0  bl 0x17d4b8
  040f8b4  nop
  040f8b8  ld 0, 128(1)
  040f8bc  mtlr 0
  040f8c0  addi 1, 1, 112
  040f8c4  blr

UpdateMoby_678:   # 0x40f8d0, 0x1ec bytes
  040f8d0  stdu 1, -208(1)
  040f8d4  mflr 0
  040f8d8  std 0, 224(1)
  040f8dc  stfd 27, 168(1)
  040f8e0  stfd 28, 176(1)
  040f8e4  stfd 29, 184(1)
  040f8e8  stfd 30, 192(1)
  040f8ec  stfd 31, 200(1)
  040f8f0  std 31, 160(1)
  040f8f4  lis 4, 269
  040f8f8  std 28, 136(1)
  040f8fc  ori 31, 3, 0
  040f900  lis 28, 65
  040f904  addi 28, 28, -1848
  040f908  lwz 3, -15856(4)
  040f90c  std 30, 152(1)
  040f910  std 29, 144(1)
  040f914  std 27, 128(1)
  040f918  cmpwi 3, 0
  040f91c  bf 2, 0x40fa70
  040f920  lis 3, 269
  040f924  li 4, 1
  040f928  li 27, 0
  040f92c  lis 30, 133
  040f930  ori 29, 27, 0
  040f934  stw 4, -15856(3)
  040f938  lfs 31, 0(28)
  040f93c  addic 30, 30, 28704
  040f940  vspltisw 2, 0
  040f944  li 3, 112
  040f948  stvx 2, 3, 1
  040f94c  lfs 27, 4(28)
  040f950  lwz 4, 0(30)
  040f954  fmr 30, 27
  040f958  lwz 3, 12(30)
  040f95c  cmpwi 3, 0
  040f960  fmr 28, 30
  040f964  fmr 29, 28
  040f968  bf 1, 0x40f9b0
  040f96c  fmr 3, 27
  040f970  ori 5, 3, 0
  040f974  fmr 2, 3
  040f978  fmr 1, 2
  040f97c  lfs 27, 0(4)
  040f980  lfs 28, 4(4)
  040f984  addic 5, 5, -1
  040f988  lfs 29, 8(4)
  040f98c  fadds 27, 3, 27
  040f990  fadds 28, 2, 28
  040f994  cmpwi 5, 0
  040f998  fadds 29, 1, 29
  040f99c  addic 4, 4, 16
  040f9a0  fmr 3, 27
  040f9a4  fmr 2, 28
  040f9a8  fmr 1, 29
  040f9ac  bt 1, 0x40f97c
  040f9b0  extsw 3, 3
  040f9b4  bl 0x502730
  040f9b8  nop
  040f9bc  fdivs 3, 31, 1
  040f9c0  stw 29, 124(1)
  040f9c4  ori 5, 29, 0
  040f9c8  lwz 4, 0(30)
  040f9cc  lwz 3, 12(30)
  040f9d0  cmpwi 3, 0
  040f9d4  fmuls 2, 27, 3
  040f9d8  fmuls 1, 28, 3
  040f9dc  fmuls 27, 29, 3
  040f9e0  stfs 2, 112(1)
  040f9e4  stfs 1, 116(1)
  040f9e8  stfs 27, 120(1)
  040f9ec  bf 1, 0x40fa3c
  040f9f0  lfs 3, 4(4)
  040f9f4  lfs 4, 0(4)
  040f9f8  fsubs 3, 1, 3
  040f9fc  lfs 5, 8(4)
  040fa00  fsubs 4, 2, 4
  040fa04  fsubs 5, 27, 5
  040fa08  fmuls 3, 3, 3
  040fa0c  fmadds 3, 4, 4, 3
  040fa10  fmadds 3, 5, 5, 3
  040fa14  fsqrts 3, 3
  040fa18  fcmpu 0, 3, 30
  040fa1c  cror 6, 0, 2
  040fa20  bt 6, 0x40fa2c
  040fa24  fmr 30, 3
  040fa28  stfs 3, 124(1)
  040fa2c  addic 5, 5, 1
  040fa30  addic 4, 4, 16
  040fa34  cmpw 5, 3
  040fa38  bt 0, 0x40f9f0
  040fa3c  lwz 3, 8(30)
  040fa40  lwz 4, 112(1)
  040fa44  addic 27, 27, 1
  040fa48  lwz 5, 116(1)
  040fa4c  addic 30, 30, 96
  040fa50  lwz 6, 120(1)
  040fa54  cmpwi 27, 2
  040fa58  lwz 7, 124(1)
  040fa5c  stw 4, 0(3)
  040fa60  stw 5, 4(3)
  040fa64  stw 6, 8(3)
  040fa68  stw 7, 12(3)
  040fa6c  bt 0, 0x40f940
  040fa70  lis 3, 113
  040fa74  ori 4, 31, 0
  040fa78  addic 3, 3, -8208
  040fa7c  bl 0x6d720
  040fa80  nop
  040fa84  ld 0, 224(1)
  040fa88  mtlr 0
  040fa8c  lfd 27, 168(1)
  040fa90  lfd 28, 176(1)
  040fa94  lfd 29, 184(1)
  040fa98  lfd 30, 192(1)
  040fa9c  lfd 31, 200(1)
  040faa0  ld 27, 128(1)
  040faa4  ld 28, 136(1)
  040faa8  ld 29, 144(1)
  040faac  ld 30, 152(1)
  040fab0  ld 31, 160(1)
  040fab4  addi 1, 1, 208
  040fab8  blr
