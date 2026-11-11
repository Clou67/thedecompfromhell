# game/update/moby851.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M851_0048d878:   # 0x48d878, 0xf4 bytes
  048d878  stdu 1, -160(1)
  048d87c  mflr 0
  048d880  std 0, 176(1)
  048d884  std 31, 152(1)
  048d888  lis 4, 161
  048d88c  ori 31, 3, 0
  048d890  lwz 3, 1800(4)
  048d894  std 30, 144(1)
  048d898  std 29, 136(1)
  048d89c  std 28, 128(1)
  048d8a0  std 27, 120(1)
  048d8a4  cmpwi 3, 2
  048d8a8  bf 2, 0x48d948
  048d8ac  lis 3, 151
  048d8b0  lbz 3, -16268(3)
  048d8b4  cmpwi 3, 0
  048d8b8  bt 2, 0x48d948
  048d8bc  lis 28, 150
  048d8c0  li 27, 0
  048d8c4  addic 28, 28, -12976
  048d8c8  lhz 3, 68(28)
  048d8cc  extsh 4, 3
  048d8d0  cmpwi 4, 0
  048d8d4  bf 1, 0x48d948
  048d8d8  lis 29, 162
  048d8dc  ori 30, 28, 0
  048d8e0  addic 29, 29, -16512
  048d8e4  lwz 4, 376(30)
  048d8e8  lhz 5, 166(31)
  048d8ec  extsh 5, 5
  048d8f0  lhz 6, 166(4)
  048d8f4  extsh 6, 6
  048d8f8  cmpw 6, 5
  048d8fc  bf 2, 0x48d934
  048d900  lbz 5, 1(29)
  048d904  cmpwi 5, 0
  048d908  bf 2, 0x48d934
  048d90c  ori 3, 4, 0
  048d910  li 4, 0
  048d914  ori 5, 29, 0
  048d918  bl 0xf0ea8
  048d91c  nop
  048d920  lis 4, 16432
  048d924  lhz 3, 68(28)
  048d928  stw 4, 32(29)
  048d92c  stw 4, 36(29)
  048d930  stw 4, 40(29)
  048d934  extsh 4, 3
  048d938  addic 27, 27, 1
  048d93c  addic 30, 30, 4
  048d940  cmpw 27, 4
  048d944  bt 0, 0x48d8e4
  048d948  ld 0, 176(1)
  048d94c  mtlr 0
  048d950  ld 27, 120(1)
  048d954  ld 28, 128(1)
  048d958  ld 29, 136(1)
  048d95c  ld 30, 144(1)
  048d960  ld 31, 152(1)
  048d964  addi 1, 1, 160
  048d968  blr

UpdateMoby_851:   # 0x48d9d8, 0xd58 bytes
  048d9d8  stdu 1, -336(1)
  048d9dc  mflr 0
  048d9e0  std 0, 352(1)
  048d9e4  stfd 27, 296(1)
  048d9e8  stfd 28, 304(1)
  048d9ec  stfd 29, 312(1)
  048d9f0  stfd 30, 320(1)
  048d9f4  stfd 31, 328(1)
  048d9f8  std 31, 288(1)
  048d9fc  lis 4, 161
  048da00  ori 31, 3, 0
  048da04  std 30, 280(1)
  048da08  lwz 4, 1800(4)
  048da0c  lwz 30, 120(3)
  048da10  std 29, 272(1)
  048da14  std 28, 264(1)
  048da18  std 27, 256(1)
  048da1c  std 26, 248(1)
  048da20  cmpwi 4, 2
  048da24  bf 2, 0x48dac0
  048da28  lis 3, 151
  048da2c  lbz 3, -16268(3)
  048da30  cmpwi 3, 0
  048da34  bt 2, 0x48dac0
  048da38  lis 28, 150
  048da3c  li 29, 0
  048da40  addic 28, 28, -12976
  048da44  lhz 4, 68(28)
  048da48  extsh 3, 4
  048da4c  cmpwi 3, 0
  048da50  bf 1, 0x48dac0
  048da54  lis 27, 162
  048da58  ori 26, 28, 0
  048da5c  addic 27, 27, -16512
  048da60  lwz 3, 376(26)
  048da64  lhz 5, 166(31)
  048da68  extsh 5, 5
  048da6c  lhz 6, 166(3)
  048da70  extsh 6, 6
  048da74  cmpw 6, 5
  048da78  bf 2, 0x48daac
  048da7c  lbz 5, 1(27)
  048da80  cmpwi 5, 0
  048da84  bf 2, 0x48daac
  048da88  li 4, 0
  048da8c  ori 5, 27, 0
  048da90  bl 0xf0ea8
  048da94  nop
  048da98  lis 3, 16432
  048da9c  lhz 4, 68(28)
  048daa0  stw 3, 32(27)
  048daa4  stw 3, 36(27)
  048daa8  stw 3, 40(27)
  048daac  extsh 3, 4
  048dab0  addic 29, 29, 1
  048dab4  addic 26, 26, 4
  048dab8  cmpw 29, 3
  048dabc  bt 0, 0x48da60
  048dac0  lbz 3, 49(31)
  048dac4  cmpwi 3, 0
  048dac8  bt 2, 0x48db34
  048dacc  lis 3, 149
  048dad0  lfs 1, 20(31)
  048dad4  lfs 2, 16(31)
  048dad8  addic 3, 3, 5056
  048dadc  lfs 3, 324(3)
  048dae0  lfs 4, 320(3)
  048dae4  fsubs 1, 1, 3
  048dae8  fsubs 2, 2, 4
  048daec  lfs 3, 24(31)
  048daf0  lfs 4, 328(3)
  048daf4  fsubs 3, 3, 4
  048daf8  lis 3, 73
  048dafc  fmuls 1, 1, 1
  048db00  addi 3, 3, -9876
  048db04  fmadds 1, 2, 2, 1
  048db08  lfs 2, 0(3)
  048db0c  fmadds 1, 3, 3, 1
  048db10  fsqrts 1, 1
  048db14  fcmpu 0, 1, 2
  048db18  cror 6, 1, 2
  048db1c  bt 6, 0x48db34
  048db20  ori 3, 31, 0
  048db24  bl 0x106360
  048db28  nop
  048db2c  li 3, 22
  048db30  stb 3, 127(31)
  048db34  lbz 3, 32(31)
  048db38  cmpwi 3, 1
  048db3c  cmpwi 1, 3, -1
  048db40  cmpwi 6, 3, 0
  048db44  cmpwi 7, 3, 2
  048db48  bt 1, 0x48db58
  048db4c  bf 5, 0x48de70
  048db50  bf 25, 0x48db68
  048db54  b 0x48dc3c
  048db58  bf 29, 0x48dd5c
  048db5c  cmpwi 3, 3
  048db60  bf 1, 0x48dd4c
  048db64  b 0x48de70
  048db68  lis 3, 165
  048db6c  addic 5, 3, 17860
  048db70  lhz 3, 178(31)
  048db74  extsh 4, 3
  048db78  lbzx 5, 5, 4
  048db7c  cmpwi 5, 0
  048db80  bf 2, 0x48dbc8
  048db84  lis 6, 151
  048db88  lis 5, 161
  048db8c  srawi 4, 4, 5
  048db90  addic 5, 5, -13028
  048db94  sldi 4, 4, 2
  048db98  lwz 6, -25488(6)
  048db9c  addc 4, 4, 5
  048dba0  slwi 5, 6, 8
  048dba4  clrldi 4, 4, 32
  048dba8  extsw 5, 5
  048dbac  li 7, 1
  048dbb0  clrlwi 3, 3, 27
  048dbb4  slw 3, 7, 3
  048dbb8  lwzx 4, 4, 5
  048dbbc  and 3, 4, 3
  048dbc0  cmpwi 3, 0
  048dbc4  bt 2, 0x48dbd8
  048dbc8  ori 3, 31, 0
  048dbcc  bl 0xefb38
  048dbd0  nop
  048dbd4  b 0x48e6f4
  048dbd8  lwz 3, 68(30)
  048dbdc  cmpwi 3, -1
  048dbe0  bf 2, 0x48dbf4
  048dbe4  ori 3, 31, 0
  048dbe8  bl 0xefb38
  048dbec  nop
  048dbf0  b 0x48e6f4
  048dbf4  lwz 3, 72(30)
  048dbf8  cmpwi 3, -1
  048dbfc  bf 2, 0x48dc10
  048dc00  ori 3, 31, 0
  048dc04  bl 0xefb38
  048dc08  nop
  048dc0c  b 0x48e6f4
  048dc10  lis 4, 102
  048dc14  ori 3, 31, 0
  048dc18  addic 5, 4, -30928
  048dc1c  ori 4, 30, 0
  048dc20  stw 5, 32(30)
  048dc24  bl 0x4d3720
  048dc28  nop
  048dc2c  li 3, 1
  048dc30  stb 3, 8(30)
  048dc34  stb 3, 32(31)
  048dc38  b 0x48de70
  048dc3c  lbz 3, 8(30)
  048dc40  cmpwi 3, 1
  048dc44  bf 2, 0x48dd00
  048dc48  lis 3, 151
  048dc4c  lwz 4, 64(30)
  048dc50  addic 3, 3, -25376
  048dc54  extsw 4, 4
  048dc58  addic 3, 3, 128
  048dc5c  bl 0x110b70
  048dc60  nop
  048dc64  cmpwi 3, 0
  048dc68  bt 2, 0x48dd00
  048dc6c  lis 4, 151
  048dc70  lis 3, 161
  048dc74  addic 5, 3, -13692
  048dc78  lbz 3, 176(31)
  048dc7c  lwz 4, -25488(4)
  048dc80  addc 5, 3, 5
  048dc84  slwi 4, 4, 4
  048dc88  clrldi 5, 5, 32
  048dc8c  extsw 4, 4
  048dc90  lbzx 4, 5, 4
  048dc94  cmpwi 4, 255
  048dc98  bt 2, 0x48dcd0
  048dc9c  bl 0xf1e50
  048dca0  nop
  048dca4  lis 3, 165
  048dca8  lwz 4, 72(30)
  048dcac  slwi 4, 4, 7
  048dcb0  lwz 3, 7128(3)
  048dcb4  addc 3, 3, 4
  048dcb8  addic 4, 3, 48
  048dcbc  addic 5, 3, 112
  048dcc0  clrldi 3, 4, 32
  048dcc4  clrldi 4, 5, 32
  048dcc8  bl 0x151e70
  048dccc  nop
  048dcd0  lis 3, 164
  048dcd4  lwz 4, 68(30)
  048dcd8  slwi 4, 4, 8
  048dcdc  lwz 3, -28512(3)
  048dce0  addc 3, 3, 4
  048dce4  clrldi 3, 3, 32
  048dce8  bl 0x414594
  048dcec  nop
  048dcf0  lis 3, 73
  048dcf4  addi 3, 3, -9876
  048dcf8  lfs 1, 4(3)
  048dcfc  b 0x48dd0c
  048dd00  lis 3, 73
  048dd04  addi 3, 3, -9876
  048dd08  lfs 1, 8(3)
  048dd0c  ori 3, 31, 0
  048dd10  stfs 1, 12(30)
  048dd14  ori 4, 30, 0
  048dd18  bl 0x4d3870
  048dd1c  nop
  048dd20  cmpwi 3, 0
  048dd24  bt 2, 0x48de70
  048dd28  lis 3, 73
  048dd2c  addi 4, 3, -9876
  048dd30  ori 3, 31, 0
  048dd34  lfs 1, 12(4)
  048dd38  bl 0x119488
  048dd3c  nop
  048dd40  li 3, 2
  048dd44  stb 3, 32(31)
  048dd48  b 0x48de70
  048dd4c  ori 3, 31, 0
  048dd50  bl 0xefb38
  048dd54  nop
  048dd58  b 0x48e6f4
  048dd5c  lis 3, 161
  048dd60  lwz 3, 1800(3)
  048dd64  cmpwi 3, 2
  048dd68  bt 2, 0x48de70
  048dd6c  li 3, 1
  048dd70  stb 3, 32(31)
  048dd74  lhz 3, 4(30)
  048dd78  cmpwi 3, 3
  048dd7c  cmpwi 1, 3, 4
  048dd80  bt 2, 0x48dd88
  048dd84  bf 6, 0x48de70
  048dd88  bf 6, 0x48dda0
  048dd8c  li 3, 21469
  048dd90  li 4, -1
  048dd94  bl 0x112a38
  048dd98  nop
  048dd9c  b 0x48ddb0
  048dda0  li 3, 14003
  048dda4  li 4, -1
  048dda8  bl 0x112a38
  048ddac  nop
  048ddb0  li 3, 32
  048ddb4  li 4, 1
  048ddb8  bl 0x112e18
  048ddbc  nop
  048ddc0  lis 3, 164
  048ddc4  lwz 4, 68(30)
  048ddc8  slwi 4, 4, 8
  048ddcc  lwz 3, -28512(3)
  048ddd0  addc 3, 3, 4
  048ddd4  clrldi 3, 3, 32
  048ddd8  bl 0x4145d0
  048dddc  nop
  048dde0  lhz 3, 178(31)
  048dde4  lis 5, 151
  048dde8  lis 4, 161
  048ddec  extsh 6, 3
  048ddf0  addic 4, 4, -13028
  048ddf4  srawi 6, 6, 5
  048ddf8  lwz 5, -25488(5)
  048ddfc  lis 7, 165
  048de00  sldi 6, 6, 2
  048de04  slwi 5, 5, 8
  048de08  addc 4, 6, 4
  048de0c  extsw 5, 5
  048de10  clrldi 4, 4, 32
  048de14  extsh 6, 3
  048de18  clrlwi 8, 3, 27
  048de1c  srawi 6, 6, 5
  048de20  li 9, 1
  048de24  addic 7, 7, 19920
  048de28  sldi 6, 6, 2
  048de2c  lwzx 10, 4, 5
  048de30  slw 8, 9, 8
  048de34  clrlwi 3, 3, 27
  048de38  or 8, 10, 8
  048de3c  slw 9, 9, 3
  048de40  lwzx 10, 7, 6
  048de44  li 3, 0
  048de48  stwx 8, 4, 5
  048de4c  or 5, 10, 9
  048de50  li 4, -1
  048de54  stwx 5, 7, 6
  048de58  bl 0xe8aa4
  048de5c  nop
  048de60  ori 3, 31, 0
  048de64  bl 0xefb38
  048de68  nop
  048de6c  b 0x48e6f4
  048de70  lis 3, 73
  048de74  lbz 4, 83(31)
  048de78  addi 3, 3, -9876
  048de7c  cmpwi 4, 0
  048de80  lfs 31, 16(3)
  048de84  bf 2, 0x48e68c
  048de88  lis 29, 151
  048de8c  lfs 2, 20(31)
  048de90  addic 29, 29, -25376
  048de94  lfs 1, 16(31)
  048de98  lis 3, 73
  048de9c  lfs 3, 132(29)
  048dea0  lfs 4, 128(29)
  048dea4  fsubs 3, 2, 3
  048dea8  fsubs 4, 1, 4
  048deac  addi 3, 3, -9876
  048deb0  fmuls 3, 3, 3
  048deb4  fmadds 3, 4, 4, 3
  048deb8  lfs 4, 20(3)
  048debc  fsqrts 3, 3
  048dec0  fcmpu 0, 3, 4
  048dec4  cror 6, 1, 2
  048dec8  bt 6, 0x48e138
  048decc  lfs 3, 208(29)
  048ded0  lis 3, 73
  048ded4  lfs 4, 212(29)
  048ded8  fsubs 1, 3, 1
  048dedc  fsubs 2, 4, 2
  048dee0  addi 3, 3, -9876
  048dee4  lis 4, 115
  048dee8  addic 4, 4, 22784
  048deec  fabs 5, 1
  048def0  fabs 6, 2
  048def4  stfs 1, 136(1)
  048def8  stfs 2, 140(1)
  048defc  lfs 3, 72(31)
  048df00  fsubs 1, 5, 6
  048df04  stfs 1, 144(1)
  048df08  lwz 5, 136(1)
  048df0c  lfs 4, 24(3)
  048df10  lfs 1, 136(1)
  048df14  lwz 3, 140(1)
  048df18  lfs 2, 140(1)
  048df1c  lwz 6, 144(1)
  048df20  rlwinm 3, 3, 3, 29, 29
  048df24  fabs 7, 2
  048df28  lfs 2, 144(1)
  048df2c  fabs 1, 1
  048df30  rlwimi 3, 6, 2, 30, 30
  048df34  fsub 8, 2, 4
  048df38  rlwimi 3, 5, 4, 28, 28
  048df3c  fsub 9, 2, 4
  048df40  ori 5, 4, 0
  048df44  rlwimi 5, 3, 2, 26, 28
  048df48  slwi 3, 3, 2
  048df4c  clrldi 5, 5, 32
  048df50  fsel 6, 8, 1, 6
  048df54  lfsx 1, 4, 3
  048df58  lfs 2, 4(5)
  048df5c  fsel 5, 9, 7, 5
  048df60  fcmpu 0, 6, 4
  048df64  bt 1, 0x48df6c
  048df68  b 0x48e08c
  048df6c  fsubs 7, 5, 6
  048df70  fadds 5, 5, 6
  048df74  addic 3, 1, 16
  048df78  li 6, 2
  048df7c  addic 4, 3, 196
  048df80  addic 5, 3, 212
  048df84  mtctr 6
  048df88  fdivs 5, 7, 5
  048df8c  fmuls 6, 5, 5
  048df90  stfs 5, 224(1)
  048df94  stfs 5, 216(1)
  048df98  stfs 5, 220(1)
  048df9c  stfs 5, 212(1)
  048dfa0  lfs 8, 224(1)
  048dfa4  lfs 9, 216(1)
  048dfa8  lfs 10, 220(1)
  048dfac  fmuls 7, 6, 6
  048dfb0  fmuls 9, 9, 6
  048dfb4  fmuls 8, 8, 7
  048dfb8  fmuls 5, 7, 7
  048dfbc  fmuls 7, 10, 7
  048dfc0  stfs 9, 216(1)
  048dfc4  fmuls 6, 8, 6
  048dfc8  stfs 7, 220(1)
  048dfcc  stfs 6, 224(1)
  048dfd0  lfs 6, 196(3)
  048dfd4  fmuls 6, 6, 5
  048dfd8  stfs 6, 212(3)
  048dfdc  lfs 6, 4(4)
  048dfe0  addic 3, 3, 8
  048dfe4  addic 4, 4, 8
  048dfe8  fmuls 6, 6, 5
  048dfec  stfs 6, 4(5)
  048dff0  addic 5, 5, 8
  048dff4  bdnz 0x48dfd0
  048dff8  li 5, 4
  048dffc  ori 3, 1, 0
  048e000  mtctr 5
  048e004  lis 4, 115
  048e008  addic 5, 3, 212
  048e00c  addic 4, 4, 22752
  048e010  ori 7, 5, 0
  048e014  lfs 5, 212(3)
  048e018  lfs 6, 0(4)
  048e01c  fmuls 5, 5, 6
  048e020  lfs 6, 4(4)
  048e024  addic 4, 4, 8
  048e028  stfs 5, 212(3)
  048e02c  lfs 5, 4(5)
  048e030  addic 3, 3, 8
  048e034  fmuls 5, 5, 6
  048e038  stfs 5, 4(5)
  048e03c  addic 5, 5, 8
  048e040  bdnz 0x48e014
  048e044  ori 3, 1, 0
  048e048  mtctr 6
  048e04c  lfs 5, 212(3)
  048e050  fadds 4, 4, 5
  048e054  lfs 5, 4(7)
  048e058  addic 3, 3, 16
  048e05c  lfs 6, 8(7)
  048e060  lfs 7, 12(7)
  048e064  addic 7, 7, 16
  048e068  fadds 4, 4, 5
  048e06c  fadds 4, 4, 6
  048e070  fadds 4, 4, 7
  048e074  bdnz 0x48e04c
  048e078  lis 3, 73
  048e07c  addi 3, 3, -9876
  048e080  lfs 5, 28(3)
  048e084  fadds 4, 4, 5
  048e088  fmadds 4, 4, 1, 2
  048e08c  fmr 1, 3
  048e090  fmr 2, 4
  048e094  bl 0x5026a0
  048e098  nop
  048e09c  lis 3, 73
  048e0a0  addi 3, 3, -9876
  048e0a4  lfs 2, 32(3)
  048e0a8  fcmpu 0, 1, 2
  048e0ac  cror 6, 1, 2
  048e0b0  bt 6, 0x48e138
  048e0b4  lfs 1, 260(29)
  048e0b8  lfs 2, 256(29)
  048e0bc  fmuls 1, 1, 1
  048e0c0  lfs 3, 264(29)
  048e0c4  lis 3, 73
  048e0c8  addi 3, 3, -9876
  048e0cc  fmadds 1, 2, 2, 1
  048e0d0  lfs 2, 36(3)
  048e0d4  fmadds 1, 3, 3, 1
  048e0d8  fsqrts 1, 1
  048e0dc  fcmpu 0, 1, 2
  048e0e0  cror 6, 0, 2
  048e0e4  bt 6, 0x48e128
  048e0e8  lis 3, 73
  048e0ec  li 4, 40
  048e0f0  vspltisw 2, -1
  048e0f4  addi 3, 3, -9876
  048e0f8  lis 5, 114
  048e0fc  li 6, -3056
  048e100  vslw 2, 2, 2
  048e104  <unknown>
  048e108  li 3, 404
  048e10c  vspltw 3, 3, 0
  048e110  <unknown>
  048e114  vmaddfp 2, 4, 3, 2
  048e118  vctsxs 2, 2, 0
  048e11c  vspltw 2, 2, 0
  048e120  stvewx 2, 3, 30
  048e124  b 0x48e16c
  048e128  addic 3, 30, 404
  048e12c  bl 0x4fff60
  048e130  nop
  048e134  b 0x48e16c
  048e138  lwz 3, 404(30)
  048e13c  cmpwi 3, 0
  048e140  bt 2, 0x48e16c
  048e144  li 3, 0
  048e148  stw 3, 404(30)
  048e14c  lfs 1, 208(29)
  048e150  stfs 1, 384(30)
  048e154  lfs 1, 212(29)
  048e158  stfs 1, 388(30)
  048e15c  lfs 1, 216(29)
  048e160  stfs 1, 392(30)
  048e164  lfs 1, 220(29)
  048e168  stfs 1, 396(30)
  048e16c  addic 3, 30, 408
  048e170  bl 0x4fff60
  048e174  nop
  048e178  cmpwi 3, 0
  048e17c  bt 2, 0x48e234
  048e180  lis 3, 73
  048e184  addi 28, 3, -9876
  048e188  lfs 1, 44(28)
  048e18c  lfs 2, 48(28)
  048e190  bl 0xfcbe8
  048e194  nop
  048e198  lis 3, 114
  048e19c  lfs 2, -3056(3)
  048e1a0  fmuls 1, 1, 2
  048e1a4  bl 0x502758
  048e1a8  nop
  048e1ac  stw 3, 408(30)
  048e1b0  lfs 1, 52(28)
  048e1b4  lfs 30, 72(31)
  048e1b8  lfs 2, 56(28)
  048e1bc  bl 0xfcbe8
  048e1c0  nop
  048e1c4  lfs 29, 60(28)
  048e1c8  fmuls 2, 1, 29
  048e1cc  fmr 1, 30
  048e1d0  bl 0x502578
  048e1d4  nop
  048e1d8  fmr 30, 1
  048e1dc  lfs 1, 24(28)
  048e1e0  lfs 2, 64(28)
  048e1e4  bl 0xfcbe8
  048e1e8  nop
  048e1ec  fmuls 3, 1, 29
  048e1f0  addic 3, 30, 384
  048e1f4  lfs 1, 68(28)
  048e1f8  fmr 2, 30
  048e1fc  bl 0xfe610
  048e200  nop
  048e204  lfs 1, 384(30)
  048e208  lfs 2, 16(31)
  048e20c  fadds 1, 1, 2
  048e210  lfs 2, 388(30)
  048e214  lfs 3, 392(30)
  048e218  stfs 1, 384(30)
  048e21c  lfs 1, 20(31)
  048e220  fadds 1, 2, 1
  048e224  stfs 1, 388(30)
  048e228  lfs 1, 24(31)
  048e22c  fadds 1, 3, 1
  048e230  stfs 1, 392(30)
  048e234  lwz 3, 404(30)
  048e238  cmpwi 3, 0
  048e23c  bt 2, 0x48e25c
  048e240  lis 3, 73
  048e244  lfs 30, 208(29)
  048e248  addi 3, 3, -9876
  048e24c  lfs 29, 212(29)
  048e250  lfs 28, 216(29)
  048e254  lfs 31, 72(3)
  048e258  b 0x48e268
  048e25c  lfs 30, 384(30)
  048e260  lfs 29, 388(30)
  048e264  lfs 28, 392(30)
  048e268  lfs 1, 16(31)
  048e26c  lfs 2, 20(31)
  048e270  lis 3, 73
  048e274  fsubs 30, 30, 1
  048e278  fsubs 29, 29, 2
  048e27c  addi 3, 3, -9876
  048e280  lis 29, 115
  048e284  addic 29, 29, 22784
  048e288  lfs 1, 76(3)
  048e28c  fabs 3, 30
  048e290  fabs 4, 29
  048e294  stfs 30, 124(1)
  048e298  stfs 29, 128(1)
  048e29c  lfs 5, 24(31)
  048e2a0  fadds 1, 5, 1
  048e2a4  fsubs 2, 3, 4
  048e2a8  fsubs 28, 28, 1
  048e2ac  stfs 2, 132(1)
  048e2b0  lwz 4, 124(1)
  048e2b4  lfs 27, 24(3)
  048e2b8  lfs 2, 124(1)
  048e2bc  lwz 3, 128(1)
  048e2c0  lfs 5, 128(1)
  048e2c4  lwz 5, 132(1)
  048e2c8  rlwinm 3, 3, 3, 29, 29
  048e2cc  lfs 1, 132(1)
  048e2d0  fabs 2, 2
  048e2d4  rlwimi 3, 5, 2, 30, 30
  048e2d8  fabs 5, 5
  048e2dc  fsub 6, 1, 27
  048e2e0  fsub 7, 1, 27
  048e2e4  rlwimi 3, 4, 4, 28, 28
  048e2e8  ori 4, 29, 0
  048e2ec  rlwimi 4, 3, 2, 26, 28
  048e2f0  slwi 3, 3, 2
  048e2f4  clrldi 4, 4, 32
  048e2f8  fsel 4, 6, 2, 4
  048e2fc  lfsx 1, 29, 3
  048e300  fsel 3, 7, 5, 3
  048e304  lfs 2, 4(4)
  048e308  fcmpu 0, 4, 27
  048e30c  bt 1, 0x48e318
  048e310  fmr 1, 27
  048e314  b 0x48e43c
  048e318  fsubs 5, 3, 4
  048e31c  fadds 3, 3, 4
  048e320  addic 3, 1, 16
  048e324  li 7, 2
  048e328  addic 5, 3, 180
  048e32c  addic 4, 3, 164
  048e330  mtctr 7
  048e334  fdivs 3, 5, 3
  048e338  fmuls 4, 3, 3
  048e33c  stfs 3, 192(1)
  048e340  stfs 3, 184(1)
  048e344  stfs 3, 188(1)
  048e348  stfs 3, 180(1)
  048e34c  lfs 6, 192(1)
  048e350  lfs 7, 184(1)
  048e354  lfs 8, 188(1)
  048e358  fmuls 5, 4, 4
  048e35c  fmuls 7, 7, 4
  048e360  fmuls 6, 6, 5
  048e364  fmuls 3, 5, 5
  048e368  fmuls 5, 8, 5
  048e36c  stfs 7, 184(1)
  048e370  fmuls 4, 6, 4
  048e374  stfs 5, 188(1)
  048e378  stfs 4, 192(1)
  048e37c  lfs 4, 164(3)
  048e380  fmuls 4, 4, 3
  048e384  stfs 4, 180(3)
  048e388  lfs 4, 4(4)
  048e38c  addic 4, 4, 8
  048e390  fmuls 4, 4, 3
  048e394  addic 3, 3, 8
  048e398  stfs 4, 4(5)
  048e39c  addic 5, 5, 8
  048e3a0  bdnz 0x48e37c
  048e3a4  li 5, 4
  048e3a8  ori 3, 1, 0
  048e3ac  mtctr 5
  048e3b0  lis 4, 115
  048e3b4  addic 5, 3, 180
  048e3b8  addic 4, 4, 22752
  048e3bc  ori 6, 5, 0
  048e3c0  lfs 3, 180(3)
  048e3c4  lfs 4, 0(4)
  048e3c8  fmuls 3, 3, 4
  048e3cc  lfs 4, 4(4)
  048e3d0  addic 4, 4, 8
  048e3d4  stfs 3, 180(3)
  048e3d8  lfs 3, 4(5)
  048e3dc  addic 3, 3, 8
  048e3e0  fmuls 3, 3, 4
  048e3e4  stfs 3, 4(5)
  048e3e8  addic 5, 5, 8
  048e3ec  bdnz 0x48e3c0
  048e3f0  ori 3, 1, 0
  048e3f4  fmr 3, 27
  048e3f8  mtctr 7
  048e3fc  lfs 4, 180(3)
  048e400  fadds 3, 3, 4
  048e404  lfs 4, 4(6)
  048e408  addic 3, 3, 16
  048e40c  lfs 5, 8(6)
  048e410  lfs 6, 12(6)
  048e414  addic 6, 6, 16
  048e418  fadds 3, 3, 4
  048e41c  fadds 3, 3, 5
  048e420  fadds 3, 3, 6
  048e424  bdnz 0x48e3fc
  048e428  lis 3, 73
  048e42c  addi 3, 3, -9876
  048e430  lfs 4, 28(3)
  048e434  fadds 3, 3, 4
  048e438  fmadds 1, 3, 1, 2
  048e43c  lfs 2, 72(31)
  048e440  bl 0x5025e0
  048e444  nop
  048e448  fmuls 2, 29, 29
  048e44c  stfs 28, 116(1)
  048e450  fabs 4, 28
  048e454  fmadds 2, 30, 30, 2
  048e458  fsqrts 2, 2
  048e45c  lwz 3, 116(1)
  048e460  lfs 3, 116(1)
  048e464  rlwinm 3, 3, 3, 29, 29
  048e468  fabs 3, 3
  048e46c  fabs 5, 2
  048e470  stfs 2, 112(1)
  048e474  fsubs 2, 5, 4
  048e478  stfs 2, 120(1)
  048e47c  lwz 4, 112(1)
  048e480  lfs 2, 112(1)
  048e484  lwz 5, 120(1)
  048e488  lfs 6, 120(1)
  048e48c  fabs 2, 2
  048e490  rlwimi 3, 5, 2, 30, 30
  048e494  fsub 7, 6, 27
  048e498  fsub 6, 6, 27
  048e49c  rlwimi 3, 4, 4, 28, 28
  048e4a0  ori 4, 29, 0
  048e4a4  rlwimi 4, 3, 2, 26, 28
  048e4a8  slwi 3, 3, 2
  048e4ac  clrldi 4, 4, 32
  048e4b0  fsel 4, 7, 2, 4
  048e4b4  lfsx 30, 29, 3
  048e4b8  fsel 3, 6, 3, 5
  048e4bc  lfs 2, 4(4)
  048e4c0  fcmpu 0, 4, 27
  048e4c4  bt 1, 0x48e4cc
  048e4c8  b 0x48e5ec
  048e4cc  fsubs 5, 3, 4
  048e4d0  fadds 3, 3, 4
  048e4d4  addic 3, 1, 16
  048e4d8  li 7, 2
  048e4dc  addic 4, 3, 132
  048e4e0  addic 5, 3, 148
  048e4e4  mtctr 7
  048e4e8  fdivs 3, 5, 3
  048e4ec  fmuls 4, 3, 3
  048e4f0  stfs 3, 160(1)
  048e4f4  stfs 3, 152(1)
  048e4f8  stfs 3, 156(1)
  048e4fc  stfs 3, 148(1)
  048e500  lfs 6, 160(1)
  048e504  lfs 7, 152(1)
  048e508  lfs 8, 156(1)
  048e50c  fmuls 5, 4, 4
  048e510  fmuls 7, 7, 4
  048e514  fmuls 6, 6, 5
  048e518  fmuls 3, 5, 5
  048e51c  fmuls 5, 8, 5
  048e520  stfs 7, 152(1)
  048e524  fmuls 4, 6, 4
  048e528  stfs 5, 156(1)
  048e52c  stfs 4, 160(1)
  048e530  lfs 4, 132(3)
  048e534  fmuls 4, 4, 3
  048e538  stfs 4, 148(3)
  048e53c  lfs 4, 4(4)
  048e540  addic 3, 3, 8
  048e544  addic 4, 4, 8
  048e548  fmuls 4, 4, 3
  048e54c  stfs 4, 4(5)
  048e550  addic 5, 5, 8
  048e554  bdnz 0x48e530
  048e558  li 5, 4
  048e55c  ori 3, 1, 0
  048e560  mtctr 5
  048e564  lis 4, 115
  048e568  addic 5, 3, 148
  048e56c  addic 4, 4, 22752
  048e570  ori 6, 5, 0
  048e574  lfs 3, 148(3)
  048e578  lfs 4, 0(4)
  048e57c  fmuls 3, 3, 4
  048e580  lfs 4, 4(4)
  048e584  addic 4, 4, 8
  048e588  stfs 3, 148(3)
  048e58c  lfs 3, 4(5)
  048e590  addic 3, 3, 8
  048e594  fmuls 3, 3, 4
  048e598  stfs 3, 4(5)
  048e59c  addic 5, 5, 8
  048e5a0  bdnz 0x48e574
  048e5a4  ori 3, 1, 0
  048e5a8  mtctr 7
  048e5ac  lfs 3, 148(3)
  048e5b0  lfs 4, 4(6)
  048e5b4  fadds 3, 27, 3
  048e5b8  lfs 5, 8(6)
  048e5bc  lfs 27, 12(6)
  048e5c0  addic 3, 3, 16
  048e5c4  addic 6, 6, 16
  048e5c8  fadds 3, 3, 4
  048e5cc  fadds 3, 3, 5
  048e5d0  fadds 27, 3, 27
  048e5d4  bdnz 0x48e5ac
  048e5d8  lis 3, 73
  048e5dc  addi 3, 3, -9876
  048e5e0  lfs 3, 28(3)
  048e5e4  fadds 27, 27, 3
  048e5e8  fmadds 27, 27, 30, 2
  048e5ec  lis 3, 73
  048e5f0  fneg 27, 27
  048e5f4  addi 3, 3, -9876
  048e5f8  lfs 2, 32(3)
  048e5fc  fcmpu 0, 1, 2
  048e600  cror 6, 0, 2
  048e604  bt 6, 0x48e610
  048e608  fmr 1, 2
  048e60c  b 0x48e62c
  048e610  lis 3, 73
  048e614  addi 3, 3, -9876
  048e618  lfs 2, 80(3)
  048e61c  fcmpu 0, 1, 2
  048e620  cror 6, 1, 2
  048e624  bt 6, 0x48e62c
  048e628  fmr 1, 2
  048e62c  lis 3, 73
  048e630  addi 3, 3, -9876
  048e634  lfs 2, 84(3)
  048e638  fcmpu 0, 27, 2
  048e63c  cror 6, 0, 2
  048e640  bt 6, 0x48e64c
  048e644  fmr 27, 2
  048e648  b 0x48e668
  048e64c  lis 3, 73
  048e650  addi 3, 3, -9876
  048e654  lfs 2, 88(3)
  048e658  fcmpu 0, 27, 2
  048e65c  cror 6, 1, 2
  048e660  bt 6, 0x48e668
  048e664  fmr 27, 2
  048e668  lis 3, 73
  048e66c  addi 3, 3, -9876
  048e670  lfs 2, 92(3)
  048e674  fmuls 2, 1, 2
  048e678  stfs 2, 232(30)
  048e67c  lfs 2, 96(3)
  048e680  stfs 27, 228(30)
  048e684  fmuls 1, 1, 2
  048e688  stfs 1, 360(30)
  048e68c  lis 3, 151
  048e690  lbz 3, -16268(3)
  048e694  cmpwi 3, 0
  048e698  bt 2, 0x48e6a4
  048e69c  lis 3, 16432
  048e6a0  stw 3, 240(30)
  048e6a4  lis 3, 73
  048e6a8  lis 29, 114
  048e6ac  addi 3, 3, -9876
  048e6b0  addic 4, 30, 128
  048e6b4  li 5, 0
  048e6b8  lfs 30, 100(3)
  048e6bc  lfs 2, -3060(29)
  048e6c0  ori 3, 31, 0
  048e6c4  fmuls 1, 2, 31
  048e6c8  fmuls 2, 2, 30
  048e6cc  bl 0x1167c8
  048e6d0  nop
  048e6d4  lfs 2, -3060(29)
  048e6d8  addic 4, 30, 256
  048e6dc  ori 3, 31, 0
  048e6e0  fmuls 1, 2, 31
  048e6e4  li 5, 1
  048e6e8  fmuls 2, 2, 30
  048e6ec  bl 0x1167c8
  048e6f0  nop
  048e6f4  ld 0, 352(1)
  048e6f8  mtlr 0
  048e6fc  lfd 27, 296(1)
  048e700  lfd 28, 304(1)
  048e704  lfd 29, 312(1)
  048e708  lfd 30, 320(1)
  048e70c  lfd 31, 328(1)
  048e710  ld 26, 248(1)
  048e714  ld 27, 256(1)
  048e718  ld 28, 264(1)
  048e71c  ld 29, 272(1)
  048e720  ld 30, 280(1)
  048e724  ld 31, 288(1)
  048e728  addi 1, 1, 336
  048e72c  blr
