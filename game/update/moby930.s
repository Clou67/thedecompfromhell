# game/update/moby930.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_930:   # 0x4bb948, 0x49c bytes
  04bb948  stdu 1, -160(1)
  04bb94c  mflr 0
  04bb950  std 0, 176(1)
  04bb954  stfd 31, 152(1)
  04bb958  std 31, 144(1)
  04bb95c  std 30, 136(1)
  04bb960  ori 31, 3, 0
  04bb964  lwz 30, 120(31)
  04bb968  lbz 4, 32(31)
  04bb96c  addic 3, 30, 32
  04bb970  cmpwi 4, 0
  04bb974  cmpwi 1, 4, 1
  04bb978  std 29, 128(1)
  04bb97c  std 28, 120(1)
  04bb980  std 27, 112(1)
  04bb984  cmpwi 6, 4, -1
  04bb988  bt 1, 0x4bb994
  04bb98c  bf 25, 0x4bbbf4
  04bb990  b 0x4bb99c
  04bb994  bf 5, 0x4bba18
  04bb998  b 0x4bbbf4
  04bb99c  li 5, 255
  04bb9a0  li 6, 1
  04bb9a4  ori 4, 3, 0
  04bb9a8  ori 3, 31, 0
  04bb9ac  stb 5, 48(31)
  04bb9b0  stb 6, 32(31)
  04bb9b4  bl 0x4d3720
  04bb9b8  nop
  04bb9bc  lis 3, 16492
  04bb9c0  lwz 4, 120(31)
  04bb9c4  ori 3, 3, 52429
  04bb9c8  li 31, 0
  04bb9cc  stw 3, 44(30)
  04bb9d0  ori 30, 4, 0
  04bb9d4  lwz 3, 96(30)
  04bb9d8  li 4, 0
  04bb9dc  li 5, 0
  04bb9e0  li 6, 0
  04bb9e4  extsw 3, 3
  04bb9e8  bl 0x10434c
  04bb9ec  nop
  04bb9f0  addic 31, 31, 1
  04bb9f4  addic 30, 30, 4
  04bb9f8  cmpwi 31, 16
  04bb9fc  bt 0, 0x4bb9d4
  04bba00  lis 3, 76
  04bba04  addi 3, 3, -18120
  04bba08  lfs 1, 0(3)
  04bba0c  bl 0x1d0f24
  04bba10  nop
  04bba14  b 0x4bbdbc
  04bba18  lis 28, 151
  04bba1c  lis 4, 76
  04bba20  addic 28, 28, -25376
  04bba24  addi 4, 4, -18120
  04bba28  lwz 5, 8332(28)
  04bba2c  lfs 31, 0(4)
  04bba30  cmpwi 5, 15
  04bba34  bt 2, 0x4bba44
  04bba38  lis 4, 76
  04bba3c  addi 4, 4, -18120
  04bba40  lfs 31, 4(4)
  04bba44  lis 5, 161
  04bba48  ori 4, 3, 0
  04bba4c  ori 3, 31, 0
  04bba50  stfs 31, 2356(5)
  04bba54  bl 0x4d3870
  04bba58  nop
  04bba5c  lis 4, 76
  04bba60  lhz 3, 86(30)
  04bba64  addi 4, 4, -18120
  04bba68  cmpwi 3, 3
  04bba6c  lfs 31, 8(4)
  04bba70  bf 2, 0x4bbb44
  04bba74  lis 4, 161
  04bba78  li 29, 2
  04bba7c  sth 3, 36(30)
  04bba80  lis 5, 143
  04bba84  li 6, 1
  04bba88  addic 27, 5, 18672
  04bba8c  lwz 3, 1808(4)
  04bba90  sth 29, 86(30)
  04bba94  addic 4, 27, 16
  04bba98  stw 3, 88(30)
  04bba9c  li 5, 0
  04bbaa0  li 30, 0
  04bbaa4  ori 3, 27, 0
  04bbaa8  stb 30, 188(31)
  04bbaac  bl 0xa0c38
  04bbab0  nop
  04bbab4  lfs 1, 32(27)
  04bbab8  lfs 2, 36(27)
  04bbabc  stfs 1, 7424(28)
  04bbac0  lfs 1, 40(27)
  04bbac4  stfs 2, 7428(28)
  04bbac8  lfs 2, 44(27)
  04bbacc  stfs 1, 7432(28)
  04bbad0  lfs 1, 48(27)
  04bbad4  stfs 2, 7436(28)
  04bbad8  lfs 2, 52(27)
  04bbadc  stfs 1, 7440(28)
  04bbae0  lfs 1, 56(27)
  04bbae4  stfs 2, 7444(28)
  04bbae8  lfs 2, 60(27)
  04bbaec  stfs 1, 7448(28)
  04bbaf0  stfs 2, 7452(28)
  04bbaf4  lwz 3, 120(31)
  04bbaf8  stb 29, 32(31)
  04bbafc  ori 29, 3, 0
  04bbb00  lwz 3, 96(29)
  04bbb04  li 4, 1
  04bbb08  li 5, 1
  04bbb0c  li 6, 1
  04bbb10  extsw 3, 3
  04bbb14  bl 0x10434c
  04bbb18  nop
  04bbb1c  addic 30, 30, 1
  04bbb20  addic 29, 29, 4
  04bbb24  cmpwi 30, 16
  04bbb28  bt 0, 0x4bbb00
  04bbb2c  lis 3, 161
  04bbb30  lis 4, 17044
  04bbb34  fmr 1, 31
  04bbb38  stw 4, 2356(3)
  04bbb3c  bl 0x1d0f24
  04bbb40  nop
  04bbb44  lwz 3, 8332(28)
  04bbb48  cmpwi 3, 22
  04bbb4c  bf 2, 0x4bbba4
  04bbb50  li 3, 2
  04bbb54  lwz 30, 120(31)
  04bbb58  stb 3, 32(31)
  04bbb5c  li 31, 0
  04bbb60  lwz 3, 96(30)
  04bbb64  li 4, 1
  04bbb68  li 5, 1
  04bbb6c  li 6, 1
  04bbb70  extsw 3, 3
  04bbb74  bl 0x10434c
  04bbb78  nop
  04bbb7c  addic 31, 31, 1
  04bbb80  addic 30, 30, 4
  04bbb84  cmpwi 31, 16
  04bbb88  bt 0, 0x4bbb60
  04bbb8c  lis 3, 161
  04bbb90  lis 4, 17044
  04bbb94  fmr 1, 31
  04bbb98  stw 4, 2356(3)
  04bbb9c  bl 0x1d0f24
  04bbba0  nop
  04bbba4  lis 3, 151
  04bbba8  addic 3, 3, -16064
  04bbbac  lbz 3, 31(3)
  04bbbb0  cmpwi 3, 0
  04bbbb4  bt 2, 0x4bbdbc
  04bbbb8  lis 3, 161
  04bbbbc  lis 4, 151
  04bbbc0  addic 3, 3, 12
  04bbbc4  li 5, 1
  04bbbc8  lwz 4, -25488(4)
  04bbbcc  lwz 3, 1012(3)
  04bbbd0  slw 4, 5, 4
  04bbbd4  and 3, 3, 4
  04bbbd8  cmpwi 3, 0
  04bbbdc  bf 2, 0x4bbdbc
  04bbbe0  li 3, 16000
  04bbbe4  li 4, 126
  04bbbe8  bl 0x7b310
  04bbbec  nop
  04bbbf0  b 0x4bbdbc
  04bbbf4  lis 3, 151
  04bbbf8  addic 3, 3, -25376
  04bbbfc  lwz 3, 8332(3)
  04bbc00  cmpwi 3, 0
  04bbc04  bf 2, 0x4bbc58
  04bbc08  li 3, 1
  04bbc0c  li 29, 0
  04bbc10  ori 28, 30, 0
  04bbc14  stb 3, 32(31)
  04bbc18  lwz 3, 96(28)
  04bbc1c  li 4, 0
  04bbc20  li 5, 0
  04bbc24  li 6, 0
  04bbc28  extsw 3, 3
  04bbc2c  bl 0x10434c
  04bbc30  nop
  04bbc34  addic 29, 29, 1
  04bbc38  addic 28, 28, 4
  04bbc3c  cmpwi 29, 16
  04bbc40  bt 0, 0x4bbc18
  04bbc44  lis 3, 76
  04bbc48  addi 3, 3, -18120
  04bbc4c  lfs 1, 0(3)
  04bbc50  bl 0x1d0f24
  04bbc54  nop
  04bbc58  lbz 3, 188(31)
  04bbc5c  cmpwi 3, 1
  04bbc60  bf 2, 0x4bbd3c
  04bbc64  li 3, 1
  04bbc68  lis 4, 143
  04bbc6c  li 5, 0
  04bbc70  addic 4, 4, 18672
  04bbc74  stb 3, 32(31)
  04bbc78  addic 3, 4, 32
  04bbc7c  li 6, 1
  04bbc80  addic 4, 4, 48
  04bbc84  bl 0xa0c38
  04bbc88  nop
  04bbc8c  lis 3, 151
  04bbc90  li 4, 0
  04bbc94  addic 3, 3, -16064
  04bbc98  stb 4, 188(31)
  04bbc9c  lbz 4, 31(3)
  04bbca0  cmpwi 4, 0
  04bbca4  bf 2, 0x4bbcf0
  04bbca8  ori 5, 3, 0
  04bbcac  lhz 8, 86(30)
  04bbcb0  lis 3, 161
  04bbcb4  li 7, 4
  04bbcb8  lis 4, 151
  04bbcbc  li 6, 1
  04bbcc0  addic 9, 4, -16027
  04bbcc4  lwz 10, 1808(3)
  04bbcc8  sth 8, 36(30)
  04bbccc  li 3, 0
  04bbcd0  sth 7, 86(30)
  04bbcd4  li 4, -1
  04bbcd8  stw 10, 88(30)
  04bbcdc  stb 6, 40(30)
  04bbce0  stb 6, 31(5)
  04bbce4  stb 6, 31(9)
  04bbce8  bl 0xe8aa4
  04bbcec  nop
  04bbcf0  li 30, 0
  04bbcf4  lwz 29, 120(31)
  04bbcf8  lwz 3, 96(29)
  04bbcfc  li 4, 0
  04bbd00  li 5, 0
  04bbd04  li 6, 0
  04bbd08  extsw 3, 3
  04bbd0c  bl 0x10434c
  04bbd10  nop
  04bbd14  addic 30, 30, 1
  04bbd18  addic 29, 29, 4
  04bbd1c  cmpwi 30, 16
  04bbd20  bt 0, 0x4bbcf8
  04bbd24  lis 3, 76
  04bbd28  addi 3, 3, -18120
  04bbd2c  lfs 1, 0(3)
  04bbd30  bl 0x1d0f24
  04bbd34  nop
  04bbd38  lbz 3, 188(31)
  04bbd3c  cmpwi 3, 2
  04bbd40  bf 2, 0x4bbdbc
  04bbd44  ori 29, 31, 0
  04bbd48  li 3, 1
  04bbd4c  lis 4, 143
  04bbd50  li 5, 0
  04bbd54  addic 4, 4, 18672
  04bbd58  stb 3, 32(29)
  04bbd5c  li 6, 1
  04bbd60  addic 3, 4, 32
  04bbd64  addic 4, 4, 48
  04bbd68  bl 0xa0c38
  04bbd6c  nop
  04bbd70  li 31, 0
  04bbd74  lwz 30, 120(29)
  04bbd78  stb 31, 188(29)
  04bbd7c  lwz 3, 96(30)
  04bbd80  li 4, 0
  04bbd84  li 5, 0
  04bbd88  li 6, 0
  04bbd8c  extsw 3, 3
  04bbd90  bl 0x10434c
  04bbd94  nop
  04bbd98  addic 31, 31, 1
  04bbd9c  addic 30, 30, 4
  04bbda0  cmpwi 31, 16
  04bbda4  bt 0, 0x4bbd7c
  04bbda8  lis 3, 76
  04bbdac  addi 3, 3, -18120
  04bbdb0  lfs 1, 0(3)
  04bbdb4  bl 0x1d0f24
  04bbdb8  nop
  04bbdbc  ld 0, 176(1)
  04bbdc0  mtlr 0
  04bbdc4  lfd 31, 152(1)
  04bbdc8  ld 27, 112(1)
  04bbdcc  ld 28, 120(1)
  04bbdd0  ld 29, 128(1)
  04bbdd4  ld 30, 136(1)
  04bbdd8  ld 31, 144(1)
  04bbddc  addi 1, 1, 160
  04bbde0  blr
