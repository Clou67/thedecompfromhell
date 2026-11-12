# game/update/moby541.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M541_003ac678:   # 0x3ac678, 0x1e0 bytes
  03ac678  stdu 1, -208(1)
  03ac67c  mflr 0
  03ac680  std 0, 224(1)
  03ac684  stfd 27, 168(1)
  03ac688  stfd 28, 176(1)
  03ac68c  stfd 29, 184(1)
  03ac690  stfd 30, 192(1)
  03ac694  stfd 31, 200(1)
  03ac698  lis 7, 59
  03ac69c  std 30, 152(1)
  03ac6a0  li 4, 208
  03ac6a4  std 29, 144(1)
  03ac6a8  addi 30, 7, -14752
  03ac6ac  std 28, 136(1)
  03ac6b0  addc 29, 1, 4
  03ac6b4  std 27, 128(1)
  03ac6b8  lis 28, 114
  03ac6bc  std 26, 120(1)
  03ac6c0  ori 27, 3, 0
  03ac6c4  lis 26, 114
  03ac6c8  addic 3, 27, 72
  03ac6cc  std 5, 64(29)
  03ac6d0  std 6, 72(29)
  03ac6d4  lfs 2, 0(30)
  03ac6d8  lfs 3, -3048(28)
  03ac6dc  lfs 4, 4(30)
  03ac6e0  std 31, 160(1)
  03ac6e4  fmuls 2, 3, 2
  03ac6e8  lwz 31, 120(27)
  03ac6ec  lfs 5, -3052(26)
  03ac6f0  addic 5, 31, 256
  03ac6f4  fmuls 4, 5, 4
  03ac6f8  fmr 3, 2
  03ac6fc  bl 0x10a2e0
  03ac700  nop
  03ac704  lfs 1, 68(29)
  03ac708  lfs 2, 20(27)
  03ac70c  lfs 3, 64(29)
  03ac710  fsubs 31, 1, 2
  03ac714  lfs 1, 16(27)
  03ac718  fsubs 30, 3, 1
  03ac71c  lfs 1, 72(29)
  03ac720  lfs 2, 24(27)
  03ac724  fsubs 29, 1, 2
  03ac728  fmuls 1, 31, 31
  03ac72c  li 3, 0
  03ac730  lfs 27, 8(30)
  03ac734  addic 5, 31, 252
  03ac738  stw 3, 112(1)
  03ac73c  lfs 3, 12(30)
  03ac740  addic 3, 1, 112
  03ac744  fmadds 1, 30, 30, 1
  03ac748  fmadds 1, 29, 29, 1
  03ac74c  fsqrts 28, 1
  03ac750  lfs 1, -3048(28)
  03ac754  lfs 4, 16(30)
  03ac758  lfs 5, -3052(26)
  03ac75c  fmuls 2, 1, 3
  03ac760  fmuls 4, 5, 4
  03ac764  fmr 3, 2
  03ac768  fmr 1, 28
  03ac76c  bl 0x109c30
  03ac770  nop
  03ac774  lfs 1, 252(31)
  03ac778  fdivs 1, 1, 28
  03ac77c  lfs 2, 16(27)
  03ac780  lfs 3, 20(27)
  03ac784  lfs 4, 24(27)
  03ac788  fsub 5, 27, 28
  03ac78c  fsub 6, 27, 28
  03ac790  fsub 7, 27, 28
  03ac794  fsub 8, 28, 27
  03ac798  fsub 9, 28, 27
  03ac79c  fsub 10, 28, 27
  03ac7a0  fmuls 11, 29, 1
  03ac7a4  fmuls 12, 31, 1
  03ac7a8  fmuls 1, 30, 1
  03ac7ac  fsel 5, 5, 27, 11
  03ac7b0  fsel 6, 6, 27, 12
  03ac7b4  fsel 7, 7, 27, 1
  03ac7b8  fsel 5, 8, 5, 11
  03ac7bc  fsel 6, 9, 6, 12
  03ac7c0  fsel 1, 10, 7, 1
  03ac7c4  fadds 4, 4, 5
  03ac7c8  fadds 3, 3, 6
  03ac7cc  fadds 1, 2, 1
  03ac7d0  stfs 4, 24(27)
  03ac7d4  stfs 3, 20(27)
  03ac7d8  stfs 1, 16(27)
  03ac7dc  lfs 1, 20(30)
  03ac7e0  fcmpu 0, 28, 1
  03ac7e4  cror 6, 1, 2
  03ac7e8  bt 6, 0x3ac818
  03ac7ec  lwz 4, 252(31)
  03ac7f0  lis 3, 15267
  03ac7f4  srawi 5, 4, 31
  03ac7f8  ori 3, 3, 55050
  03ac7fc  srwi 6, 5, 1
  03ac800  xor 4, 6, 4
  03ac804  subc 4, 4, 5
  03ac808  cmpw 4, 3
  03ac80c  bf 0, 0x3ac818
  03ac810  li 3, 1
  03ac814  b 0x3ac81c
  03ac818  li 3, 0
  03ac81c  ld 0, 224(1)
  03ac820  mtlr 0
  03ac824  lfd 27, 168(1)
  03ac828  lfd 28, 176(1)
  03ac82c  lfd 29, 184(1)
  03ac830  lfd 30, 192(1)
  03ac834  lfd 31, 200(1)
  03ac838  ld 26, 120(1)
  03ac83c  ld 27, 128(1)
  03ac840  ld 28, 136(1)
  03ac844  ld 29, 144(1)
  03ac848  ld 30, 152(1)
  03ac84c  ld 31, 160(1)
  03ac850  addi 1, 1, 208
  03ac854  blr

M541_003ac860:   # 0x3ac860, 0xf0 bytes
  03ac860  stdu 1, -144(1)
  03ac864  mflr 0
  03ac868  std 0, 160(1)
  03ac86c  stfd 31, 136(1)
  03ac870  std 30, 120(1)
  03ac874  std 31, 128(1)
  03ac878  lbz 30, 33(3)
  03ac87c  ori 31, 3, 0
  03ac880  std 29, 112(1)
  03ac884  cmpwi 30, 255
  03ac888  bt 2, 0x3ac930
  03ac88c  lis 3, 59
  03ac890  lis 4, 132
  03ac894  addi 3, 3, -14248
  03ac898  rlwinm 5, 30, 2, 22, 29
  03ac89c  lfs 1, 0(3)
  03ac8a0  lfs 2, 21920(4)
  03ac8a4  lis 3, 114
  03ac8a8  lis 4, 165
  03ac8ac  fmuls 1, 2, 1
  03ac8b0  lfs 31, -3052(3)
  03ac8b4  addic 3, 4, -28284
  03ac8b8  lwzx 30, 3, 5
  03ac8bc  fmuls 31, 1, 31
  03ac8c0  lis 3, 164
  03ac8c4  lhz 4, 0(30)
  03ac8c8  rlwinm 4, 4, 8, 9, 23
  03ac8cc  lwz 3, -28512(3)
  03ac8d0  addc 3, 3, 4
  03ac8d4  clrldi 3, 3, 32
  03ac8d8  lhz 4, 166(3)
  03ac8dc  cmpwi 4, 541
  03ac8e0  bf 2, 0x3ac8c0
  03ac8e4  lis 4, 161
  03ac8e8  lwz 29, 120(3)
  03ac8ec  fmr 2, 31
  03ac8f0  lwz 3, 1808(4)
  03ac8f4  lfs 1, 284(29)
  03ac8f8  stw 3, 280(29)
  03ac8fc  bl 0x502578
  03ac900  nop
  03ac904  stfs 1, 284(29)
  03ac908  lhz 3, 0(30)
  03ac90c  addic 30, 30, 2
  03ac910  extsh 3, 3
  03ac914  cmpwi 3, 0
  03ac918  bf 0, 0x3ac8c0
  03ac91c  lis 3, 113
  03ac920  ori 4, 31, 0
  03ac924  addic 3, 3, -12016
  03ac928  bl 0x6d720
  03ac92c  nop
  03ac930  ld 0, 160(1)
  03ac934  mtlr 0
  03ac938  lfd 31, 136(1)
  03ac93c  ld 29, 112(1)
  03ac940  ld 30, 120(1)
  03ac944  ld 31, 128(1)
  03ac948  addi 1, 1, 144
  03ac94c  blr

M541_003ac968:   # 0x3ac968, 0x780 bytes
  03ac968  stdu 1, -304(1)
  03ac96c  mflr 0
  03ac970  std 0, 320(1)
  03ac974  stfd 31, 296(1)
  03ac978  std 31, 288(1)
  03ac97c  addi 0, 1, 240
  03ac980  stvx 31, 0, 0
  03ac984  ori 31, 3, 0
  03ac988  lbz 3, 32(3)
  03ac98c  std 30, 280(1)
  03ac990  std 29, 272(1)
  03ac994  std 28, 264(1)
  03ac998  std 27, 256(1)
  03ac99c  cmpwi 3, 1
  03ac9a0  bt 2, 0x3ad0b8
  03ac9a4  lwz 30, 120(31)
  03ac9a8  lbz 3, 46(30)
  03ac9ac  cmpwi 3, 2
  03ac9b0  bf 2, 0x3acab0
  03ac9b4  lis 4, 59
  03ac9b8  li 3, 1
  03ac9bc  vspltisw 2, -1
  03ac9c0  lis 5, 16384
  03ac9c4  addi 4, 4, -14000
  03ac9c8  lis 6, 114
  03ac9cc  stb 3, 46(30)
  03ac9d0  li 3, -3056
  03ac9d4  stw 5, 32(30)
  03ac9d8  vslw 2, 2, 2
  03ac9dc  lvlx 31, 0, 4
  03ac9e0  vspltw 31, 31, 0
  03ac9e4  lvlx 3, 3, 6
  03ac9e8  li 6, 240
  03ac9ec  vmaddfp 2, 3, 31, 2
  03ac9f0  ori 3, 31, 0
  03ac9f4  li 4, 0
  03ac9f8  li 5, -1
  03ac9fc  vctsxs 2, 2, 0
  03aca00  vspltw 2, 2, 0
  03aca04  stvewx 2, 6, 30
  03aca08  bl 0xfd8d0
  03aca0c  nop
  03aca10  lhz 3, 52(31)
  03aca14  li 4, 0
  03aca18  rlwimi 3, 4, 0, 19, 19
  03aca1c  sth 3, 52(31)
  03aca20  lwz 3, 200(30)
  03aca24  addic 4, 3, -1
  03aca28  cmpwi 3, 0
  03aca2c  stw 4, 200(30)
  03aca30  bt 2, 0x3aca88
  03aca34  li 3, 11
  03aca38  vspltisw 2, -1
  03aca3c  lis 4, 114
  03aca40  li 5, -3056
  03aca44  stb 3, 32(31)
  03aca48  lfs 1, 224(30)
  03aca4c  li 3, 240
  03aca50  vslw 2, 2, 2
  03aca54  stfs 1, 16(31)
  03aca58  lfs 1, 228(30)
  03aca5c  stfs 1, 20(31)
  03aca60  lfs 1, 232(30)
  03aca64  stfs 1, 24(31)
  03aca68  lfs 1, 236(30)
  03aca6c  stfs 1, 28(31)
  03aca70  lvlx 3, 5, 4
  03aca74  vmaddfp 2, 3, 31, 2
  03aca78  vctsxs 2, 2, 0
  03aca7c  vspltw 2, 2, 0
  03aca80  stvewx 2, 3, 30
  03aca84  b 0x3ad0b8
  03aca88  lwz 30, 260(30)
  03aca8c  cmpwi 30, 0
  03aca90  bt 2, 0x3acaa0
  03aca94  ori 3, 30, 0
  03aca98  bl 0xefb38
  03aca9c  nop
  03acaa0  ori 3, 31, 0
  03acaa4  bl 0xefb38
  03acaa8  nop
  03acaac  b 0x3ad0b8
  03acab0  lis 3, 161
  03acab4  lwz 3, 1808(3)
  03acab8  lwz 4, 280(30)
  03acabc  cmpw 4, 3
  03acac0  bt 2, 0x3acb78
  03acac4  lbz 29, 33(31)
  03acac8  cmpwi 29, 255
  03acacc  bt 2, 0x3acb78
  03acad0  lis 4, 59
  03acad4  lis 5, 132
  03acad8  addi 4, 4, -14000
  03acadc  rlwinm 6, 29, 2, 22, 29
  03acae0  lfs 1, 4(4)
  03acae4  lfs 2, 21920(5)
  03acae8  lis 4, 114
  03acaec  lis 5, 165
  03acaf0  fmuls 1, 2, 1
  03acaf4  lfs 31, -3052(4)
  03acaf8  addic 4, 5, -28284
  03acafc  lwzx 29, 4, 6
  03acb00  fmuls 31, 1, 31
  03acb04  lis 4, 164
  03acb08  lhz 5, 0(29)
  03acb0c  rlwinm 5, 5, 8, 9, 23
  03acb10  lwz 4, -28512(4)
  03acb14  addc 4, 4, 5
  03acb18  clrldi 4, 4, 32
  03acb1c  lhz 5, 166(4)
  03acb20  cmpwi 5, 541
  03acb24  bf 2, 0x3acb04
  03acb28  lwz 28, 120(4)
  03acb2c  fmr 2, 31
  03acb30  lfs 1, 284(28)
  03acb34  stw 3, 280(28)
  03acb38  bl 0x502578
  03acb3c  nop
  03acb40  stfs 1, 284(28)
  03acb44  lhz 3, 0(29)
  03acb48  addic 29, 29, 2
  03acb4c  extsh 3, 3
  03acb50  cmpwi 3, 0
  03acb54  bt 0, 0x3acb64
  03acb58  lis 3, 161
  03acb5c  lwz 3, 1808(3)
  03acb60  b 0x3acb04
  03acb64  lis 3, 113
  03acb68  ori 4, 31, 0
  03acb6c  addic 3, 3, -12016
  03acb70  bl 0x6d720
  03acb74  nop
  03acb78  lis 3, 59
  03acb7c  li 6, 0
  03acb80  addi 7, 3, -14000
  03acb84  ori 3, 31, 0
  03acb88  lis 4, 51
  03acb8c  li 5, 0
  03acb90  lfs 31, 8(7)
  03acb94  stw 6, 180(1)
  03acb98  bl 0x10675c
  03acb9c  nop
  03acba0  ori 4, 3, 0
  03acba4  ori 3, 31, 0
  03acba8  li 6, 0
  03acbac  addic 5, 30, 32
  03acbb0  li 9, 0
  03acbb4  addic 7, 1, 176
  03acbb8  li 10, 4
  03acbbc  addic 8, 1, 180
  03acbc0  bl 0x106840
  03acbc4  nop
  03acbc8  lwz 3, 176(1)
  03acbcc  cmpwi 3, 1
  03acbd0  bt 2, 0x3ace34
  03acbd4  lbz 3, 32(31)
  03acbd8  cmpwi 1, 3, 11
  03acbdc  cmpwi 3, 10
  03acbe0  cror 2, 2, 6
  03acbe4  bt 2, 0x3ace34
  03acbe8  lfs 1, 32(30)
  03acbec  lfs 2, 180(1)
  03acbf0  fsubs 1, 1, 2
  03acbf4  fcmpu 0, 1, 31
  03acbf8  stfs 1, 32(30)
  03acbfc  bt 1, 0x3acc0c
  03acc00  li 3, 10
  03acc04  stb 3, 32(31)
  03acc08  b 0x3ace34
  03acc0c  lbz 3, 32(31)
  03acc10  cmpwi 3, 9
  03acc14  bt 2, 0x3acc24
  03acc18  stw 3, 272(30)
  03acc1c  lbz 3, 83(31)
  03acc20  stw 3, 276(30)
  03acc24  lis 3, 151
  03acc28  lfs 1, 16(31)
  03acc2c  lfs 2, 20(31)
  03acc30  addic 3, 3, -25376
  03acc34  lfs 3, 128(3)
  03acc38  lfs 4, 132(3)
  03acc3c  fsubs 1, 3, 1
  03acc40  fsubs 2, 4, 2
  03acc44  lis 3, 115
  03acc48  addic 3, 3, 22784
  03acc4c  fabs 3, 1
  03acc50  fabs 4, 2
  03acc54  stfs 1, 184(1)
  03acc58  stfs 2, 188(1)
  03acc5c  fsubs 1, 3, 4
  03acc60  stfs 1, 192(1)
  03acc64  lwz 4, 184(1)
  03acc68  lfs 1, 184(1)
  03acc6c  lwz 5, 188(1)
  03acc70  lfs 2, 188(1)
  03acc74  lwz 6, 192(1)
  03acc78  rlwinm 5, 5, 3, 29, 29
  03acc7c  fabs 5, 2
  03acc80  lfs 2, 192(1)
  03acc84  fabs 1, 1
  03acc88  rlwimi 5, 6, 2, 30, 30
  03acc8c  fsub 6, 2, 31
  03acc90  fsub 7, 2, 31
  03acc94  rlwimi 5, 4, 4, 28, 28
  03acc98  ori 4, 3, 0
  03acc9c  rlwimi 4, 5, 2, 26, 28
  03acca0  slwi 5, 5, 2
  03acca4  clrldi 4, 4, 32
  03acca8  fsel 4, 6, 1, 4
  03accac  lfsx 1, 3, 5
  03accb0  fsel 3, 7, 5, 3
  03accb4  lfs 2, 4(4)
  03accb8  fcmpu 0, 4, 31
  03accbc  bt 1, 0x3accc8
  03accc0  fmr 1, 31
  03accc4  b 0x3acdec
  03accc8  fsubs 5, 3, 4
  03acccc  fadds 3, 3, 4
  03accd0  addic 3, 1, 16
  03accd4  li 7, 2
  03accd8  addic 5, 3, 196
  03accdc  addic 4, 3, 180
  03acce0  mtctr 7
  03acce4  fdivs 3, 5, 3
  03acce8  fmuls 4, 3, 3
  03accec  stfs 3, 208(1)
  03accf0  stfs 3, 200(1)
  03accf4  stfs 3, 204(1)
  03accf8  stfs 3, 196(1)
  03accfc  lfs 6, 208(1)
  03acd00  lfs 7, 200(1)
  03acd04  lfs 8, 204(1)
  03acd08  fmuls 5, 4, 4
  03acd0c  fmuls 7, 7, 4
  03acd10  fmuls 6, 6, 5
  03acd14  fmuls 3, 5, 5
  03acd18  fmuls 5, 8, 5
  03acd1c  stfs 7, 200(1)
  03acd20  fmuls 4, 6, 4
  03acd24  stfs 5, 204(1)
  03acd28  stfs 4, 208(1)
  03acd2c  lfs 4, 180(3)
  03acd30  fmuls 4, 4, 3
  03acd34  stfs 4, 196(3)
  03acd38  lfs 4, 4(4)
  03acd3c  addic 4, 4, 8
  03acd40  fmuls 4, 4, 3
  03acd44  addic 3, 3, 8
  03acd48  stfs 4, 4(5)
  03acd4c  addic 5, 5, 8
  03acd50  bdnz 0x3acd2c
  03acd54  li 5, 4
  03acd58  ori 3, 1, 0
  03acd5c  mtctr 5
  03acd60  lis 4, 115
  03acd64  addic 5, 3, 196
  03acd68  addic 4, 4, 22752
  03acd6c  ori 6, 5, 0
  03acd70  lfs 3, 196(3)
  03acd74  lfs 4, 0(4)
  03acd78  fmuls 3, 3, 4
  03acd7c  lfs 4, 4(4)
  03acd80  addic 4, 4, 8
  03acd84  stfs 3, 196(3)
  03acd88  lfs 3, 4(5)
  03acd8c  addic 3, 3, 8
  03acd90  fmuls 3, 3, 4
  03acd94  stfs 3, 4(5)
  03acd98  addic 5, 5, 8
  03acd9c  bdnz 0x3acd70
  03acda0  ori 3, 1, 0
  03acda4  fmr 3, 31
  03acda8  mtctr 7
  03acdac  lfs 4, 196(3)
  03acdb0  fadds 3, 3, 4
  03acdb4  lfs 4, 4(6)
  03acdb8  addic 3, 3, 16
  03acdbc  lfs 5, 8(6)
  03acdc0  lfs 6, 12(6)
  03acdc4  addic 6, 6, 16
  03acdc8  fadds 3, 3, 4
  03acdcc  fadds 3, 3, 5
  03acdd0  fadds 3, 3, 6
  03acdd4  bdnz 0x3acdac
  03acdd8  lis 3, 59
  03acddc  addi 3, 3, -14000
  03acde0  lfs 4, 12(3)
  03acde4  fadds 3, 3, 4
  03acde8  fmadds 1, 3, 1, 2
  03acdec  li 3, 9
  03acdf0  stfs 1, 268(30)
  03acdf4  lbz 4, 83(31)
  03acdf8  cmpwi 4, 8
  03acdfc  stb 3, 32(31)
  03ace00  bt 2, 0x3ace1c
  03ace04  ori 3, 31, 0
  03ace08  li 4, 8
  03ace0c  li 5, 2
  03ace10  li 6, 1
  03ace14  bl 0xfddc0
  03ace18  nop
  03ace1c  li 5, 120
  03ace20  addic 4, 30, 96
  03ace24  ori 3, 31, 0
  03ace28  stb 5, 103(30)
  03ace2c  bl 0x10c808
  03ace30  nop
  03ace34  li 5, 255
  03ace38  addic 29, 30, 96
  03ace3c  ori 3, 31, 0
  03ace40  ori 4, 29, 0
  03ace44  stb 5, 164(31)
  03ace48  bl 0x10c9a0
  03ace4c  nop
  03ace50  lwz 3, 260(30)
  03ace54  cmpwi 3, 0
  03ace58  bt 2, 0x3ad0a8
  03ace5c  lis 28, 269
  03ace60  addic 5, 3, 16
  03ace64  ori 3, 31, 0
  03ace68  lwz 4, -24768(28)
  03ace6c  extsw 4, 4
  03ace70  bl 0xf1114
  03ace74  nop
  03ace78  addic 27, 1, 112
  03ace7c  lwz 4, -24768(28)
  03ace80  ori 3, 31, 0
  03ace84  ori 5, 27, 0
  03ace88  extsw 4, 4
  03ace8c  bl 0xf1038
  03ace90  nop
  03ace94  lwz 3, 260(30)
  03ace98  ori 4, 27, 0
  03ace9c  addic 3, 3, 192
  03acea0  bl 0x500fa8
  03acea4  nop
  03acea8  lwz 3, 260(30)
  03aceac  lfs 3, 196(3)
  03aceb0  lfs 2, 192(3)
  03aceb4  fmuls 1, 3, 3
  03aceb8  lfs 4, 200(3)
  03acebc  fmadds 1, 2, 2, 1
  03acec0  fmadds 1, 4, 4, 1
  03acec4  fsqrts 5, 1
  03acec8  fcmpu 0, 5, 31
  03acecc  bf 2, 0x3acee4
  03aced0  fmr 2, 31
  03aced4  lfs 1, 204(3)
  03aced8  fmr 3, 2
  03acedc  fmr 4, 3
  03acee0  b 0x3acf40
  03acee4  frsqrte 5, 1
  03acee8  lis 4, 59
  03aceec  fmr 10, 4
  03acef0  addi 4, 4, -14000
  03acef4  lfs 6, 16(4)
  03acef8  lfs 7, 20(4)
  03acefc  fmuls 8, 1, 5
  03acf00  fmuls 9, 6, 5
  03acf04  fnmsubs 8, 8, 5, 7
  03acf08  fmadds 4, 8, 9, 5
  03acf0c  lfs 9, 204(3)
  03acf10  fmuls 5, 1, 4
  03acf14  fmuls 8, 6, 4
  03acf18  fnmsubs 5, 5, 4, 7
  03acf1c  fmadds 4, 5, 8, 4
  03acf20  fmuls 5, 1, 4
  03acf24  fmuls 6, 6, 4
  03acf28  fmr 1, 9
  03acf2c  fnmsubs 5, 5, 4, 7
  03acf30  fmadds 5, 5, 6, 4
  03acf34  fmuls 4, 2, 5
  03acf38  fmuls 3, 3, 5
  03acf3c  fmuls 2, 10, 5
  03acf40  stfs 4, 192(3)
  03acf44  stfs 3, 196(3)
  03acf48  stfs 2, 200(3)
  03acf4c  stfs 1, 204(3)
  03acf50  lwz 3, 260(30)
  03acf54  lfs 3, 212(3)
  03acf58  lfs 2, 208(3)
  03acf5c  fmuls 1, 3, 3
  03acf60  lfs 4, 216(3)
  03acf64  fmadds 1, 2, 2, 1
  03acf68  fmadds 1, 4, 4, 1
  03acf6c  fsqrts 5, 1
  03acf70  fcmpu 0, 5, 31
  03acf74  bf 2, 0x3acf8c
  03acf78  fmr 2, 31
  03acf7c  lfs 1, 220(3)
  03acf80  fmr 3, 2
  03acf84  fmr 4, 3
  03acf88  b 0x3acfe8
  03acf8c  frsqrte 5, 1
  03acf90  lis 4, 59
  03acf94  fmr 10, 4
  03acf98  addi 4, 4, -14000
  03acf9c  lfs 6, 16(4)
  03acfa0  lfs 7, 20(4)
  03acfa4  fmuls 8, 1, 5
  03acfa8  fmuls 9, 6, 5
  03acfac  fnmsubs 8, 8, 5, 7
  03acfb0  fmadds 4, 8, 9, 5
  03acfb4  lfs 9, 220(3)
  03acfb8  fmuls 5, 1, 4
  03acfbc  fmuls 8, 6, 4
  03acfc0  fnmsubs 5, 5, 4, 7
  03acfc4  fmadds 4, 5, 8, 4
  03acfc8  fmuls 5, 1, 4
  03acfcc  fmuls 6, 6, 4
  03acfd0  fmr 1, 9
  03acfd4  fnmsubs 5, 5, 4, 7
  03acfd8  fmadds 5, 5, 6, 4
  03acfdc  fmuls 4, 2, 5
  03acfe0  fmuls 3, 3, 5
  03acfe4  fmuls 2, 10, 5
  03acfe8  stfs 4, 208(3)
  03acfec  stfs 3, 212(3)
  03acff0  stfs 2, 216(3)
  03acff4  stfs 1, 220(3)
  03acff8  lwz 3, 260(30)
  03acffc  lfs 3, 228(3)
  03ad000  lfs 2, 224(3)
  03ad004  fmuls 1, 3, 3
  03ad008  lfs 4, 232(3)
  03ad00c  fmadds 1, 2, 2, 1
  03ad010  fmadds 1, 4, 4, 1
  03ad014  fsqrts 5, 1
  03ad018  fcmpu 0, 5, 31
  03ad01c  bf 2, 0x3ad030
  03ad020  fmr 2, 31
  03ad024  lfs 1, 236(3)
  03ad028  fmr 3, 2
  03ad02c  b 0x3ad08c
  03ad030  frsqrte 5, 1
  03ad034  lis 4, 59
  03ad038  fmr 10, 3
  03ad03c  addi 4, 4, -14000
  03ad040  lfs 6, 16(4)
  03ad044  lfs 7, 20(4)
  03ad048  fmuls 8, 1, 5
  03ad04c  fmuls 9, 6, 5
  03ad050  fnmsubs 8, 8, 5, 7
  03ad054  fmadds 3, 8, 9, 5
  03ad058  lfs 5, 236(3)
  03ad05c  fmuls 8, 1, 3
  03ad060  fmuls 9, 6, 3
  03ad064  fnmsubs 8, 8, 3, 7
  03ad068  fmadds 3, 8, 9, 3
  03ad06c  fmuls 8, 1, 3
  03ad070  fmr 1, 5
  03ad074  fmuls 6, 6, 3
  03ad078  fnmsubs 5, 8, 3, 7
  03ad07c  fmadds 31, 5, 6, 3
  03ad080  fmuls 3, 2, 31
  03ad084  fmuls 2, 10, 31
  03ad088  fmuls 31, 4, 31
  03ad08c  stfs 3, 224(3)
  03ad090  stfs 2, 228(3)
  03ad094  stfs 31, 232(3)
  03ad098  stfs 1, 236(3)
  03ad09c  lwz 3, 260(30)
  03ad0a0  bl 0xf31a8
  03ad0a4  nop
  03ad0a8  ori 3, 31, 0
  03ad0ac  ori 4, 29, 0
  03ad0b0  bl 0x10c9a0
  03ad0b4  nop
  03ad0b8  li 0, 240
  03ad0bc  lvx 31, 1, 0
  03ad0c0  ld 0, 320(1)
  03ad0c4  mtlr 0
  03ad0c8  lfd 31, 296(1)
  03ad0cc  ld 27, 256(1)
  03ad0d0  ld 28, 264(1)
  03ad0d4  ld 29, 272(1)
  03ad0d8  ld 30, 280(1)
  03ad0dc  ld 31, 288(1)
  03ad0e0  addi 1, 1, 304
  03ad0e4  blr

UpdateMoby_541:   # 0x3ad150, 0x1de0 bytes
  03ad150  stdu 1, -736(1)
  03ad154  mflr 0
  03ad158  std 0, 752(1)
  03ad15c  stfd 29, 712(1)
  03ad160  stfd 30, 720(1)
  03ad164  stfd 31, 728(1)
  03ad168  addi 0, 1, 640
  03ad16c  stvx 31, 0, 0
  03ad170  std 31, 704(1)
  03ad174  std 29, 688(1)
  03ad178  ori 31, 3, 0
  03ad17c  lis 4, 59
  03ad180  std 30, 696(1)
  03ad184  addi 29, 4, -12056
  03ad188  std 28, 680(1)
  03ad18c  std 27, 672(1)
  03ad190  std 26, 664(1)
  03ad194  lwz 30, 120(31)
  03ad198  bl 0x3ac968
  03ad19c  lwz 3, 196(30)
  03ad1a0  lis 28, 165
  03ad1a4  lfs 1, 0(29)
  03ad1a8  slwi 3, 3, 2
  03ad1ac  addic 28, 28, 7136
  03ad1b0  extsw 29, 3
  03ad1b4  ori 3, 31, 0
  03ad1b8  addic 5, 30, 320
  03ad1bc  li 4, 2
  03ad1c0  lwzx 29, 28, 29
  03ad1c4  bl 0x119a18
  03ad1c8  nop
  03ad1cc  lbz 3, 32(31)
  03ad1d0  lfs 7, 24(31)
  03ad1d4  cmpwi 3, 5
  03ad1d8  lfs 8, 28(31)
  03ad1dc  bt 1, 0x3ad214
  03ad1e0  cmpwi 3, 5
  03ad1e4  bt 2, 0x3ade08
  03ad1e8  cmpwi 3, 4
  03ad1ec  bt 2, 0x3ad7b0
  03ad1f0  cmpwi 3, 3
  03ad1f4  bt 2, 0x3ad4a8
  03ad1f8  cmpwi 3, 2
  03ad1fc  bt 2, 0x3ad3bc
  03ad200  cmpwi 3, 1
  03ad204  bt 2, 0x3aeef4
  03ad208  cmpwi 3, 0
  03ad20c  bt 2, 0x3ad248
  03ad210  b 0x3aeef4
  03ad214  cmpwi 3, 11
  03ad218  bt 2, 0x3aee0c
  03ad21c  cmpwi 3, 10
  03ad220  bt 2, 0x3aec1c
  03ad224  cmpwi 3, 9
  03ad228  bt 2, 0x3aeb70
  03ad22c  cmpwi 3, 8
  03ad230  bt 2, 0x3ae43c
  03ad234  cmpwi 3, 7
  03ad238  bt 2, 0x3ae2f4
  03ad23c  cmpwi 3, 6
  03ad240  bt 2, 0x3ae068
  03ad244  b 0x3aeef4
  03ad248  li 4, 1
  03ad24c  lwz 3, 200(30)
  03ad250  cmpwi 3, 0
  03ad254  stb 4, 46(30)
  03ad258  lhz 4, 52(31)
  03ad25c  bf 1, 0x3ad270
  03ad260  lhz 5, 180(31)
  03ad264  extsh 5, 5
  03ad268  divw 3, 5, 3
  03ad26c  sth 3, 180(31)
  03ad270  li 5, 1
  03ad274  ori 4, 4, 1
  03ad278  li 6, 0
  03ad27c  li 3, 2
  03ad280  stb 5, 32(31)
  03ad284  sth 4, 52(31)
  03ad288  stb 6, 49(31)
  03ad28c  bl 0xfc620
  03ad290  nop
  03ad294  cmpwi 3, 0
  03ad298  bt 2, 0x3ad2b0
  03ad29c  lis 3, 0
  03ad2a0  lhz 4, 52(31)
  03ad2a4  ori 3, 3, 32768
  03ad2a8  or 3, 4, 3
  03ad2ac  sth 3, 52(31)
  03ad2b0  lis 3, 16384
  03ad2b4  li 4, 2
  03ad2b8  li 5, 1
  03ad2bc  stw 3, 32(30)
  03ad2c0  sth 4, 36(30)
  03ad2c4  stb 5, 40(30)
  03ad2c8  bl 0xfcc68
  03ad2cc  nop
  03ad2d0  lwz 3, 204(30)
  03ad2d4  addic 4, 31, 16
  03ad2d8  stfs 1, 284(30)
  03ad2dc  extsw 3, 3
  03ad2e0  bl 0x401f88
  03ad2e4  nop
  03ad2e8  lfs 1, 16(31)
  03ad2ec  stfs 1, 224(30)
  03ad2f0  lfs 1, 20(31)
  03ad2f4  stw 3, 248(30)
  03ad2f8  stfs 1, 228(30)
  03ad2fc  lfs 1, 24(31)
  03ad300  stfs 1, 232(30)
  03ad304  lfs 1, 28(31)
  03ad308  lwz 31, 192(30)
  03ad30c  stfs 1, 236(30)
  03ad310  cmpwi 31, 0
  03ad314  bt 1, 0x3ad324
  03ad318  cmpwi 31, -1
  03ad31c  bf 1, 0x3ad37c
  03ad320  b 0x3ad338
  03ad324  cmpwi 31, 1
  03ad328  bf 1, 0x3ad34c
  03ad32c  cmpwi 31, 2
  03ad330  bf 1, 0x3ad360
  03ad334  b 0x3ad37c
  03ad338  li 3, 863
  03ad33c  bl 0xefa28
  03ad340  nop
  03ad344  stw 3, 260(30)
  03ad348  b 0x3ad37c
  03ad34c  li 3, 884
  03ad350  bl 0xefa28
  03ad354  nop
  03ad358  stw 3, 260(30)
  03ad35c  b 0x3ad37c
  03ad360  li 3, 876
  03ad364  bl 0xefa28
  03ad368  nop
  03ad36c  stw 3, 260(30)
  03ad370  addic 3, 30, 288
  03ad374  bl 0x119ae8
  03ad378  nop
  03ad37c  lwz 3, 260(30)
  03ad380  cmpwi 3, 0
  03ad384  bt 2, 0x3aeef4
  03ad388  lhz 6, 52(3)
  03ad38c  li 4, 64
  03ad390  li 5, 0
  03ad394  ori 6, 6, 256
  03ad398  sth 6, 52(3)
  03ad39c  lwz 3, 260(30)
  03ad3a0  li 6, 1
  03ad3a4  sth 4, 50(3)
  03ad3a8  lwz 3, 260(30)
  03ad3ac  stb 5, 48(3)
  03ad3b0  lwz 3, 260(30)
  03ad3b4  stb 6, 49(3)
  03ad3b8  b 0x3aeef4
  03ad3bc  lwz 3, 248(30)
  03ad3c0  bl 0x402050
  03ad3c4  nop
  03ad3c8  lfs 1, 16(29)
  03ad3cc  ori 3, 31, 0
  03ad3d0  lfs 2, 24(29)
  03ad3d4  stfs 1, 64(1)
  03ad3d8  stfs 2, 72(1)
  03ad3dc  lfs 1, 20(29)
  03ad3e0  lfs 2, 72(31)
  03ad3e4  stfs 1, 68(1)
  03ad3e8  lfs 3, 28(29)
  03ad3ec  fmr 1, 2
  03ad3f0  stfs 3, 76(1)
  03ad3f4  ld 5, 64(1)
  03ad3f8  ld 6, 72(1)
  03ad3fc  bl 0x3ac678
  03ad400  cmpwi 3, 0
  03ad404  bt 2, 0x3aeef4
  03ad408  lis 3, 59
  03ad40c  li 4, 4
  03ad410  vspltisw 2, -1
  03ad414  addi 3, 3, -12056
  03ad418  lis 5, 114
  03ad41c  li 6, -3056
  03ad420  vslw 2, 2, 2
  03ad424  li 7, 5
  03ad428  lvlx 3, 4, 3
  03ad42c  li 4, 1
  03ad430  vspltw 3, 3, 0
  03ad434  lvlx 4, 6, 5
  03ad438  li 8, 7
  03ad43c  lwz 3, 192(30)
  03ad440  li 5, 0
  03ad444  subc 7, 7, 8
  03ad448  vmaddfp 2, 4, 3, 2
  03ad44c  subc 4, 4, 3
  03ad450  subc 3, 5, 3
  03ad454  cntlzw 4, 4
  03ad458  cntlzw 3, 3
  03ad45c  sldi 4, 4, 58
  03ad460  sldi 3, 3, 58
  03ad464  sradi 4, 4, 63
  03ad468  li 5, 240
  03ad46c  and 4, 4, 7
  03ad470  li 7, 3
  03ad474  addc 4, 8, 4
  03ad478  vctsxs 2, 2, 0
  03ad47c  sradi 3, 3, 63
  03ad480  subc 7, 7, 4
  03ad484  li 6, 1
  03ad488  and 3, 3, 7
  03ad48c  addc 3, 4, 3
  03ad490  vspltw 2, 2, 0
  03ad494  stvewx 2, 5, 30
  03ad498  stw 6, 220(30)
  03ad49c  stw 6, 264(30)
  03ad4a0  stb 3, 32(31)
  03ad4a4  b 0x3aeef4
  03ad4a8  addic 3, 30, 240
  03ad4ac  bl 0x4fff60
  03ad4b0  nop
  03ad4b4  cmpwi 3, 0
  03ad4b8  bt 2, 0x3aeef4
  03ad4bc  lwz 3, 220(30)
  03ad4c0  lfs 2, 16(31)
  03ad4c4  slwi 3, 3, 4
  03ad4c8  lfs 3, 20(31)
  03ad4cc  addc 29, 29, 3
  03ad4d0  clrldi 29, 29, 32
  03ad4d4  lis 3, 59
  03ad4d8  addi 3, 3, -12056
  03ad4dc  lfs 1, 16(29)
  03ad4e0  lfs 4, 20(29)
  03ad4e4  fsubs 2, 1, 2
  03ad4e8  fsubs 3, 4, 3
  03ad4ec  lis 4, 115
  03ad4f0  addic 4, 4, 22784
  03ad4f4  fabs 4, 2
  03ad4f8  fabs 6, 3
  03ad4fc  stfs 2, 376(1)
  03ad500  stfs 3, 380(1)
  03ad504  fsubs 2, 4, 6
  03ad508  stfs 2, 384(1)
  03ad50c  lwz 5, 376(1)
  03ad510  lfs 5, 8(3)
  03ad514  lfs 2, 376(1)
  03ad518  lwz 3, 380(1)
  03ad51c  lfs 3, 380(1)
  03ad520  fabs 2, 2
  03ad524  lwz 6, 384(1)
  03ad528  rlwinm 3, 3, 3, 29, 29
  03ad52c  fabs 7, 3
  03ad530  lfs 3, 384(1)
  03ad534  rlwimi 3, 6, 2, 30, 30
  03ad538  fsub 8, 3, 5
  03ad53c  rlwimi 3, 5, 4, 28, 28
  03ad540  fsub 9, 3, 5
  03ad544  ori 5, 4, 0
  03ad548  rlwimi 5, 3, 2, 26, 28
  03ad54c  slwi 3, 3, 2
  03ad550  clrldi 5, 5, 32
  03ad554  fsel 6, 8, 2, 6
  03ad558  lfsx 2, 4, 3
  03ad55c  lfs 3, 4(5)
  03ad560  fsel 4, 9, 7, 4
  03ad564  fcmpu 0, 6, 5
  03ad568  bt 1, 0x3ad570
  03ad56c  b 0x3ad690
  03ad570  fsubs 7, 4, 6
  03ad574  fadds 4, 4, 6
  03ad578  addic 3, 1, 16
  03ad57c  li 7, 2
  03ad580  addic 5, 3, 580
  03ad584  addic 4, 3, 564
  03ad588  mtctr 7
  03ad58c  fdivs 4, 7, 4
  03ad590  fmuls 6, 4, 4
  03ad594  stfs 4, 592(1)
  03ad598  stfs 4, 584(1)
  03ad59c  stfs 4, 588(1)
  03ad5a0  stfs 4, 580(1)
  03ad5a4  lfs 8, 592(1)
  03ad5a8  lfs 9, 584(1)
  03ad5ac  lfs 10, 588(1)
  03ad5b0  fmuls 7, 6, 6
  03ad5b4  fmuls 9, 9, 6
  03ad5b8  fmuls 8, 8, 7
  03ad5bc  fmuls 4, 7, 7
  03ad5c0  fmuls 7, 10, 7
  03ad5c4  stfs 9, 584(1)
  03ad5c8  fmuls 6, 8, 6
  03ad5cc  stfs 7, 588(1)
  03ad5d0  stfs 6, 592(1)
  03ad5d4  lfs 6, 564(3)
  03ad5d8  fmuls 6, 6, 4
  03ad5dc  stfs 6, 580(3)
  03ad5e0  lfs 6, 4(4)
  03ad5e4  addic 4, 4, 8
  03ad5e8  fmuls 6, 6, 4
  03ad5ec  addic 3, 3, 8
  03ad5f0  stfs 6, 4(5)
  03ad5f4  addic 5, 5, 8
  03ad5f8  bdnz 0x3ad5d4
  03ad5fc  li 5, 4
  03ad600  ori 3, 1, 0
  03ad604  mtctr 5
  03ad608  lis 4, 115
  03ad60c  addic 5, 3, 580
  03ad610  addic 4, 4, 22752
  03ad614  ori 6, 5, 0
  03ad618  lfs 4, 580(3)
  03ad61c  lfs 6, 0(4)
  03ad620  fmuls 4, 4, 6
  03ad624  lfs 6, 4(4)
  03ad628  addic 4, 4, 8
  03ad62c  stfs 4, 580(3)
  03ad630  lfs 4, 4(5)
  03ad634  addic 3, 3, 8
  03ad638  fmuls 4, 4, 6
  03ad63c  stfs 4, 4(5)
  03ad640  addic 5, 5, 8
  03ad644  bdnz 0x3ad618
  03ad648  ori 3, 1, 0
  03ad64c  mtctr 7
  03ad650  lfs 4, 580(3)
  03ad654  fadds 4, 5, 4
  03ad658  addic 3, 3, 16
  03ad65c  lfs 5, 4(6)
  03ad660  lfs 6, 8(6)
  03ad664  lfs 7, 12(6)
  03ad668  addic 6, 6, 16
  03ad66c  fadds 4, 4, 5
  03ad670  fadds 5, 4, 6
  03ad674  fadds 5, 5, 7
  03ad678  bdnz 0x3ad650
  03ad67c  lis 3, 59
  03ad680  addi 3, 3, -12056
  03ad684  lfs 4, 12(3)
  03ad688  fadds 5, 5, 4
  03ad68c  fmadds 5, 5, 2, 3
  03ad690  stfs 1, 64(1)
  03ad694  lfs 1, 24(29)
  03ad698  ori 3, 31, 0
  03ad69c  stfs 1, 72(1)
  03ad6a0  lfs 1, 20(29)
  03ad6a4  lfs 2, 28(29)
  03ad6a8  stfs 1, 68(1)
  03ad6ac  stfs 2, 76(1)
  03ad6b0  fmr 1, 5
  03ad6b4  ld 5, 64(1)
  03ad6b8  ld 6, 72(1)
  03ad6bc  bl 0x3ac678
  03ad6c0  cmpwi 3, 0
  03ad6c4  bt 2, 0x3aeef4
  03ad6c8  lis 3, 59
  03ad6cc  vspltisw 2, -1
  03ad6d0  li 4, 4
  03ad6d4  addi 3, 3, -12056
  03ad6d8  lis 5, 114
  03ad6dc  li 6, -3056
  03ad6e0  vslw 2, 2, 2
  03ad6e4  lvlx 3, 4, 3
  03ad6e8  li 4, 240
  03ad6ec  vspltw 3, 3, 0
  03ad6f0  lvlx 4, 6, 5
  03ad6f4  lfs 1, 4(3)
  03ad6f8  vmaddfp 2, 4, 3, 2
  03ad6fc  li 3, 4
  03ad700  vctsxs 2, 2, 0
  03ad704  vspltw 2, 2, 0
  03ad708  stvewx 2, 4, 30
  03ad70c  lbz 4, 83(31)
  03ad710  stb 3, 32(31)
  03ad714  cmpwi 4, 21
  03ad718  bt 2, 0x3ad74c
  03ad71c  lis 3, 114
  03ad720  li 4, 21
  03ad724  li 5, 0
  03ad728  lfs 2, -3056(3)
  03ad72c  ori 3, 31, 0
  03ad730  fmuls 1, 2, 1
  03ad734  fctiwz 1, 1
  03ad738  stfd 1, 616(1)
  03ad73c  lwz 6, 620(1)
  03ad740  extsw 6, 6
  03ad744  bl 0xfddc0
  03ad748  nop
  03ad74c  li 3, 2
  03ad750  bl 0xfc620
  03ad754  nop
  03ad758  cmpwi 3, 0
  03ad75c  bt 2, 0x3ad7a4
  03ad760  lwz 5, 216(30)
  03ad764  lis 4, 59
  03ad768  ori 3, 31, 0
  03ad76c  slwi 5, 5, 2
  03ad770  addi 4, 4, -12056
  03ad774  extsw 5, 5
  03ad778  li 6, 0
  03ad77c  li 7, 0
  03ad780  lfs 1, 16(4)
  03ad784  lwzx 5, 28, 5
  03ad788  addic 4, 30, 112
  03ad78c  addic 8, 5, 16
  03ad790  lwz 9, 0(5)
  03ad794  extsw 9, 9
  03ad798  bl 0x111ba0
  03ad79c  nop
  03ad7a0  b 0x3aeef4
  03ad7a4  li 3, 2
  03ad7a8  stw 3, 180(30)
  03ad7ac  b 0x3aeef4
  03ad7b0  lwz 3, 180(30)
  03ad7b4  cmpwi 3, 2
  03ad7b8  bf 2, 0x3ad804
  03ad7bc  lwz 4, 220(30)
  03ad7c0  lis 3, 165
  03ad7c4  slwi 4, 4, 2
  03ad7c8  addc 4, 30, 4
  03ad7cc  clrldi 4, 4, 32
  03ad7d0  lwz 3, 7128(3)
  03ad7d4  lwz 4, 208(4)
  03ad7d8  slwi 4, 4, 7
  03ad7dc  addc 3, 3, 4
  03ad7e0  clrldi 3, 3, 32
  03ad7e4  lfs 1, 48(3)
  03ad7e8  stfs 1, 128(1)
  03ad7ec  lfs 1, 52(3)
  03ad7f0  stfs 1, 132(1)
  03ad7f4  lfs 1, 56(3)
  03ad7f8  stfs 1, 136(1)
  03ad7fc  lfs 31, 60(3)
  03ad800  b 0x3ad820
  03ad804  lfs 1, 112(30)
  03ad808  stfs 1, 128(1)
  03ad80c  lfs 1, 116(30)
  03ad810  stfs 1, 132(1)
  03ad814  lfs 1, 120(30)
  03ad818  stfs 1, 136(1)
  03ad81c  lfs 31, 124(30)
  03ad820  lis 3, 59
  03ad824  stfs 31, 140(1)
  03ad828  addi 4, 3, -12056
  03ad82c  ori 3, 31, 0
  03ad830  lfs 31, 20(4)
  03ad834  fmr 1, 31
  03ad838  bl 0x113e88
  03ad83c  nop
  03ad840  ori 4, 3, 0
  03ad844  lbz 3, 112(31)
  03ad848  cmpwi 4, 0
  03ad84c  bt 2, 0x3ad984
  03ad850  lwz 4, 260(30)
  03ad854  cmpwi 4, 0
  03ad858  bt 2, 0x3ad984
  03ad85c  lis 3, 59
  03ad860  lis 4, 132
  03ad864  addi 28, 3, -12056
  03ad868  lis 3, 114
  03ad86c  lis 5, 114
  03ad870  addic 27, 1, 128
  03ad874  lfs 1, 21904(4)
  03ad878  lfs 2, 24(28)
  03ad87c  li 4, 0
  03ad880  lfs 3, -3052(3)
  03ad884  lfs 4, -3048(5)
  03ad888  fmuls 30, 1, 3
  03ad88c  ori 3, 27, 0
  03ad890  lfs 1, 28(28)
  03ad894  fmuls 29, 4, 2
  03ad898  bl 0xffb70
  03ad89c  nop
  03ad8a0  lwz 3, 260(30)
  03ad8a4  addic 26, 1, 144
  03ad8a8  stfs 1, 136(1)
  03ad8ac  li 4, 0
  03ad8b0  ori 5, 26, 0
  03ad8b4  bl 0xf1114
  03ad8b8  nop
  03ad8bc  lfs 1, 132(1)
  03ad8c0  lfs 2, 148(1)
  03ad8c4  lfs 3, 128(1)
  03ad8c8  fsubs 4, 1, 2
  03ad8cc  lfs 1, 144(1)
  03ad8d0  fsubs 3, 3, 1
  03ad8d4  li 5, 0
  03ad8d8  fmuls 1, 4, 4
  03ad8dc  ori 4, 27, 0
  03ad8e0  ori 3, 26, 0
  03ad8e4  fneg 2, 29
  03ad8e8  li 7, 0
  03ad8ec  fmadds 1, 3, 3, 1
  03ad8f0  fsqrts 5, 1
  03ad8f4  lfs 1, 140(1)
  03ad8f8  stfs 1, 172(1)
  03ad8fc  lfs 6, 8(28)
  03ad900  stw 5, 168(1)
  03ad904  fmr 1, 30
  03ad908  fdivs 7, 30, 5
  03ad90c  fsub 8, 6, 5
  03ad910  fsub 9, 6, 5
  03ad914  fsub 10, 5, 6
  03ad918  fsub 5, 5, 6
  03ad91c  fmuls 3, 3, 7
  03ad920  fmuls 4, 4, 7
  03ad924  fsel 7, 8, 6, 3
  03ad928  fsel 6, 9, 6, 4
  03ad92c  fsel 3, 10, 7, 3
  03ad930  fsel 4, 5, 6, 4
  03ad934  stfs 3, 160(1)
  03ad938  stfs 4, 164(1)
  03ad93c  bl 0x108180
  03ad940  nop
  03ad944  lis 4, 114
  03ad948  stfs 1, 168(1)
  03ad94c  ori 3, 31, 0
  03ad950  lfs 2, 32(28)
  03ad954  addic 5, 1, 160
  03ad958  fmr 1, 29
  03ad95c  lfs 3, -3056(4)
  03ad960  ori 4, 26, 0
  03ad964  fmuls 2, 3, 2
  03ad968  fctiwz 2, 2
  03ad96c  stfd 2, 616(1)
  03ad970  lwz 7, 620(1)
  03ad974  extsw 7, 7
  03ad978  bl 0x32ca80
  03ad97c  nop
  03ad980  b 0x3ad9f0
  03ad984  rlwinm 3, 3, 0, 30, 30
  03ad988  cmpwi 3, 0
  03ad98c  bt 2, 0x3ad9f0
  03ad990  lwz 4, 220(30)
  03ad994  li 3, 3
  03ad998  addic 4, 4, 1
  03ad99c  clrlwi 4, 4, 31
  03ad9a0  stw 4, 220(30)
  03ad9a4  lbz 4, 83(31)
  03ad9a8  stb 3, 32(31)
  03ad9ac  cmpwi 4, 23
  03ad9b0  bt 2, 0x3ad9f0
  03ad9b4  lis 3, 59
  03ad9b8  lis 4, 114
  03ad9bc  addi 3, 3, -12056
  03ad9c0  li 5, 0
  03ad9c4  lfs 1, 4(3)
  03ad9c8  lfs 2, -3056(4)
  03ad9cc  ori 3, 31, 0
  03ad9d0  li 4, 23
  03ad9d4  fmuls 1, 2, 1
  03ad9d8  fctiwz 1, 1
  03ad9dc  stfd 1, 616(1)
  03ad9e0  lwz 6, 620(1)
  03ad9e4  extsw 6, 6
  03ad9e8  bl 0xfddc0
  03ad9ec  nop
  03ad9f0  ori 3, 31, 0
  03ad9f4  bl 0xefe40
  03ad9f8  nop
  03ad9fc  fmr 3, 1
  03ada00  lfs 1, 24(31)
  03ada04  lfs 2, 28(31)
  03ada08  fcmpu 0, 3, 31
  03ada0c  cror 6, 1, 2
  03ada10  bt 6, 0x3adc04
  03ada14  lfs 3, 128(1)
  03ada18  lfs 6, 16(31)
  03ada1c  lfs 4, 132(1)
  03ada20  lfs 7, 20(31)
  03ada24  fsubs 3, 3, 6
  03ada28  lis 3, 59
  03ada2c  fsubs 4, 4, 7
  03ada30  addi 3, 3, -12056
  03ada34  lis 4, 115
  03ada38  addic 4, 4, 22784
  03ada3c  fabs 5, 3
  03ada40  fabs 9, 4
  03ada44  stfs 3, 364(1)
  03ada48  stfs 4, 368(1)
  03ada4c  fsubs 3, 5, 9
  03ada50  stfs 3, 372(1)
  03ada54  lwz 5, 364(1)
  03ada58  lfs 8, 8(3)
  03ada5c  lfs 3, 364(1)
  03ada60  lwz 3, 368(1)
  03ada64  lfs 4, 368(1)
  03ada68  lwz 6, 372(1)
  03ada6c  rlwinm 3, 3, 3, 29, 29
  03ada70  fabs 10, 4
  03ada74  lfs 4, 372(1)
  03ada78  fabs 3, 3
  03ada7c  rlwimi 3, 6, 2, 30, 30
  03ada80  fsub 11, 4, 8
  03ada84  rlwimi 3, 5, 4, 28, 28
  03ada88  fsub 12, 4, 8
  03ada8c  ori 5, 4, 0
  03ada90  rlwimi 5, 3, 2, 26, 28
  03ada94  slwi 3, 3, 2
  03ada98  clrldi 5, 5, 32
  03ada9c  fsel 9, 11, 3, 9
  03adaa0  lfsx 3, 4, 3
  03adaa4  lfs 4, 4(5)
  03adaa8  fsel 5, 12, 10, 5
  03adaac  fcmpu 0, 9, 8
  03adab0  bt 1, 0x3adab8
  03adab4  b 0x3adbd8
  03adab8  fsubs 10, 5, 9
  03adabc  fadds 5, 5, 9
  03adac0  addic 3, 1, 16
  03adac4  li 7, 2
  03adac8  addic 4, 3, 532
  03adacc  addic 5, 3, 548
  03adad0  mtctr 7
  03adad4  fdivs 5, 10, 5
  03adad8  fmuls 9, 5, 5
  03adadc  stfs 5, 560(1)
  03adae0  stfs 5, 552(1)
  03adae4  stfs 5, 556(1)
  03adae8  stfs 5, 548(1)
  03adaec  lfs 11, 560(1)
  03adaf0  lfs 12, 552(1)
  03adaf4  lfs 13, 556(1)
  03adaf8  fmuls 10, 9, 9
  03adafc  fmuls 12, 12, 9
  03adb00  fmuls 11, 11, 10
  03adb04  fmuls 5, 10, 10
  03adb08  fmuls 10, 13, 10
  03adb0c  stfs 12, 552(1)
  03adb10  fmuls 9, 11, 9
  03adb14  stfs 10, 556(1)
  03adb18  stfs 9, 560(1)
  03adb1c  lfs 9, 532(3)
  03adb20  fmuls 9, 9, 5
  03adb24  stfs 9, 548(3)
  03adb28  lfs 9, 4(4)
  03adb2c  addic 3, 3, 8
  03adb30  addic 4, 4, 8
  03adb34  fmuls 9, 9, 5
  03adb38  stfs 9, 4(5)
  03adb3c  addic 5, 5, 8
  03adb40  bdnz 0x3adb1c
  03adb44  li 5, 4
  03adb48  ori 3, 1, 0
  03adb4c  mtctr 5
  03adb50  lis 4, 115
  03adb54  addic 5, 3, 548
  03adb58  addic 4, 4, 22752
  03adb5c  ori 6, 5, 0
  03adb60  lfs 5, 548(3)
  03adb64  lfs 9, 0(4)
  03adb68  fmuls 5, 5, 9
  03adb6c  lfs 9, 4(4)
  03adb70  addic 4, 4, 8
  03adb74  stfs 5, 548(3)
  03adb78  lfs 5, 4(5)
  03adb7c  addic 3, 3, 8
  03adb80  fmuls 5, 5, 9
  03adb84  stfs 5, 4(5)
  03adb88  addic 5, 5, 8
  03adb8c  bdnz 0x3adb60
  03adb90  ori 3, 1, 0
  03adb94  mtctr 7
  03adb98  lfs 5, 548(3)
  03adb9c  fadds 5, 8, 5
  03adba0  lfs 8, 4(6)
  03adba4  addic 3, 3, 16
  03adba8  lfs 9, 8(6)
  03adbac  lfs 10, 12(6)
  03adbb0  addic 6, 6, 16
  03adbb4  fadds 5, 5, 8
  03adbb8  fadds 8, 5, 9
  03adbbc  fadds 8, 8, 10
  03adbc0  bdnz 0x3adb98
  03adbc4  lis 3, 59
  03adbc8  addi 3, 3, -12056
  03adbcc  lfs 5, 12(3)
  03adbd0  fadds 8, 8, 5
  03adbd4  fmadds 8, 8, 3, 4
  03adbd8  fmr 3, 1
  03adbdc  stfs 6, 64(1)
  03adbe0  fmr 1, 8
  03adbe4  ori 3, 31, 0
  03adbe8  stfs 3, 72(1)
  03adbec  stfs 7, 68(1)
  03adbf0  stfs 2, 76(1)
  03adbf4  ld 5, 64(1)
  03adbf8  ld 6, 72(1)
  03adbfc  bl 0x3ac678
  03adc00  b 0x3aeef4
  03adc04  lwz 3, 220(30)
  03adc08  lfs 6, 16(31)
  03adc0c  addic 3, 3, 1
  03adc10  lfs 7, 20(31)
  03adc14  rlwinm 3, 3, 4, 27, 27
  03adc18  addc 3, 29, 3
  03adc1c  clrldi 3, 3, 32
  03adc20  lis 4, 115
  03adc24  lfs 3, 16(3)
  03adc28  lfs 4, 20(3)
  03adc2c  fsubs 3, 3, 6
  03adc30  lis 3, 59
  03adc34  fsubs 4, 4, 7
  03adc38  addi 3, 3, -12056
  03adc3c  addic 4, 4, 22784
  03adc40  fabs 5, 3
  03adc44  fabs 9, 4
  03adc48  stfs 3, 352(1)
  03adc4c  stfs 4, 356(1)
  03adc50  fsubs 3, 5, 9
  03adc54  stfs 3, 360(1)
  03adc58  lwz 5, 352(1)
  03adc5c  lfs 8, 8(3)
  03adc60  lfs 3, 352(1)
  03adc64  lwz 3, 356(1)
  03adc68  lfs 4, 356(1)
  03adc6c  lwz 6, 360(1)
  03adc70  rlwinm 3, 3, 3, 29, 29
  03adc74  fabs 10, 4
  03adc78  lfs 4, 360(1)
  03adc7c  fabs 3, 3
  03adc80  rlwimi 3, 6, 2, 30, 30
  03adc84  fsub 11, 4, 8
  03adc88  rlwimi 3, 5, 4, 28, 28
  03adc8c  fsub 12, 4, 8
  03adc90  ori 5, 4, 0
  03adc94  rlwimi 5, 3, 2, 26, 28
  03adc98  slwi 3, 3, 2
  03adc9c  clrldi 5, 5, 32
  03adca0  fsel 9, 11, 3, 9
  03adca4  lfsx 3, 4, 3
  03adca8  lfs 4, 4(5)
  03adcac  fsel 5, 12, 10, 5
  03adcb0  fcmpu 0, 9, 8
  03adcb4  bt 1, 0x3adcbc
  03adcb8  b 0x3adddc
  03adcbc  fsubs 10, 5, 9
  03adcc0  fadds 5, 5, 9
  03adcc4  addic 3, 1, 16
  03adcc8  li 6, 2
  03adccc  addic 4, 3, 500
  03adcd0  addic 5, 3, 516
  03adcd4  mtctr 6
  03adcd8  fdivs 5, 10, 5
  03adcdc  fmuls 9, 5, 5
  03adce0  stfs 5, 528(1)
  03adce4  stfs 5, 520(1)
  03adce8  stfs 5, 524(1)
  03adcec  stfs 5, 516(1)
  03adcf0  lfs 11, 528(1)
  03adcf4  lfs 12, 520(1)
  03adcf8  lfs 13, 524(1)
  03adcfc  fmuls 10, 9, 9
  03add00  fmuls 12, 12, 9
  03add04  fmuls 11, 11, 10
  03add08  fmuls 5, 10, 10
  03add0c  fmuls 10, 13, 10
  03add10  stfs 12, 520(1)
  03add14  fmuls 9, 11, 9
  03add18  stfs 10, 524(1)
  03add1c  stfs 9, 528(1)
  03add20  lfs 9, 500(3)
  03add24  fmuls 9, 9, 5
  03add28  stfs 9, 516(3)
  03add2c  lfs 9, 4(4)
  03add30  addic 3, 3, 8
  03add34  addic 4, 4, 8
  03add38  fmuls 9, 9, 5
  03add3c  stfs 9, 4(5)
  03add40  addic 5, 5, 8
  03add44  bdnz 0x3add20
  03add48  li 5, 4
  03add4c  ori 3, 1, 0
  03add50  mtctr 5
  03add54  lis 4, 115
  03add58  addic 5, 3, 516
  03add5c  addic 4, 4, 22752
  03add60  ori 7, 5, 0
  03add64  lfs 5, 516(3)
  03add68  lfs 9, 0(4)
  03add6c  fmuls 5, 5, 9
  03add70  lfs 9, 4(4)
  03add74  addic 4, 4, 8
  03add78  stfs 5, 516(3)
  03add7c  lfs 5, 4(5)
  03add80  addic 3, 3, 8
  03add84  fmuls 5, 5, 9
  03add88  stfs 5, 4(5)
  03add8c  addic 5, 5, 8
  03add90  bdnz 0x3add64
  03add94  ori 3, 1, 0
  03add98  mtctr 6
  03add9c  lfs 5, 516(3)
  03adda0  fadds 5, 8, 5
  03adda4  lfs 8, 4(7)
  03adda8  addic 3, 3, 16
  03addac  lfs 9, 8(7)
  03addb0  lfs 10, 12(7)
  03addb4  addic 7, 7, 16
  03addb8  fadds 5, 5, 8
  03addbc  fadds 8, 5, 9
  03addc0  fadds 8, 8, 10
  03addc4  bdnz 0x3add9c
  03addc8  lis 3, 59
  03addcc  addi 3, 3, -12056
  03addd0  lfs 5, 12(3)
  03addd4  fadds 8, 8, 5
  03addd8  fmadds 8, 8, 3, 4
  03adddc  fmr 3, 1
  03adde0  stfs 6, 64(1)
  03adde4  fmr 1, 8
  03adde8  ori 3, 31, 0
  03addec  stfs 3, 72(1)
  03addf0  stfs 7, 68(1)
  03addf4  stfs 2, 76(1)
  03addf8  ld 5, 64(1)
  03addfc  ld 6, 72(1)
  03ade00  bl 0x3ac678
  03ade04  b 0x3aeef4
  03ade08  lbz 3, 83(31)
  03ade0c  cmpwi 3, 10
  03ade10  cmpwi 1, 3, 11
  03ade14  bf 2, 0x3ade48
  03ade18  lbz 3, 112(31)
  03ade1c  rlwinm 3, 3, 0, 30, 30
  03ade20  cmpwi 3, 0
  03ade24  bt 2, 0x3aeef4
  03ade28  bt 6, 0x3aeef4
  03ade2c  ori 3, 31, 0
  03ade30  li 4, 11
  03ade34  li 5, 0
  03ade38  li 6, 1
  03ade3c  bl 0xfddc0
  03ade40  nop
  03ade44  b 0x3aeef4
  03ade48  lwz 3, 220(30)
  03ade4c  lis 5, 132
  03ade50  lfs 1, 16(31)
  03ade54  slwi 3, 3, 4
  03ade58  lfs 2, 20(31)
  03ade5c  addc 3, 29, 3
  03ade60  lis 6, 114
  03ade64  clrldi 4, 3, 32
  03ade68  addic 3, 1, 176
  03ade6c  lfs 3, 16(4)
  03ade70  fsubs 1, 3, 1
  03ade74  lfs 3, 21908(5)
  03ade78  stfs 1, 176(1)
  03ade7c  lfs 1, 20(4)
  03ade80  fsubs 2, 1, 2
  03ade84  lfs 1, -3052(6)
  03ade88  fmuls 1, 3, 1
  03ade8c  stfs 2, 180(1)
  03ade90  lfs 2, 24(4)
  03ade94  fsubs 2, 2, 7
  03ade98  stfs 2, 184(1)
  03ade9c  lfs 2, 28(4)
  03adea0  stfs 2, 188(1)
  03adea4  bl 0x110488
  03adea8  nop
  03adeac  lfs 1, 16(31)
  03adeb0  lfs 2, 176(1)
  03adeb4  lis 3, 269
  03adeb8  lfs 3, 20(31)
  03adebc  addic 28, 1, 192
  03adec0  fadds 1, 1, 2
  03adec4  lfs 2, 180(1)
  03adec8  lfs 4, 24(31)
  03adecc  ori 5, 28, 0
  03aded0  fadds 2, 3, 2
  03aded4  lfs 3, 184(1)
  03aded8  lwz 4, -24768(3)
  03adedc  fadds 3, 4, 3
  03adee0  ori 3, 31, 0
  03adee4  extsw 4, 4
  03adee8  stfs 1, 16(31)
  03adeec  stfs 2, 20(31)
  03adef0  stfs 3, 24(31)
  03adef4  bl 0xf1114
  03adef8  nop
  03adefc  lis 3, 59
  03adf00  li 7, 0
  03adf04  addi 5, 3, -12056
  03adf08  ori 3, 31, 0
  03adf0c  ori 4, 28, 0
  03adf10  li 6, 1
  03adf14  li 9, 0
  03adf18  lfs 2, 40(5)
  03adf1c  li 10, 1
  03adf20  lfs 1, 36(5)
  03adf24  std 7, 112(1)
  03adf28  fmr 3, 2
  03adf2c  bl 0x105870
  03adf30  nop
  03adf34  lis 3, 161
  03adf38  lis 4, 151
  03adf3c  addic 5, 3, 2368
  03adf40  addic 3, 4, -25376
  03adf44  lwz 4, 24(5)
  03adf48  lwz 5, 8320(3)
  03adf4c  cmpw 4, 5
  03adf50  bf 2, 0x3adf74
  03adf54  lwz 3, 448(3)
  03adf58  cmpwi 3, 0
  03adf5c  bf 2, 0x3adf74
  03adf60  li 3, 6
  03adf64  li 4, 0
  03adf68  ori 5, 31, 0
  03adf6c  bl 0x15d12c
  03adf70  nop
  03adf74  lfs 1, 180(1)
  03adf78  lfs 2, 176(1)
  03adf7c  fmuls 1, 1, 1
  03adf80  lfs 3, 184(1)
  03adf84  lis 3, 59
  03adf88  addi 3, 3, -12056
  03adf8c  fmadds 1, 2, 2, 1
  03adf90  lfs 2, 44(3)
  03adf94  fmadds 1, 3, 3, 1
  03adf98  fsqrts 1, 1
  03adf9c  fcmpu 0, 1, 2
  03adfa0  cror 6, 1, 2
  03adfa4  bt 6, 0x3aeef4
  03adfa8  lbz 3, 83(31)
  03adfac  cmpwi 3, 9
  03adfb0  bt 2, 0x3adff0
  03adfb4  lis 3, 59
  03adfb8  lis 4, 114
  03adfbc  addi 3, 3, -12056
  03adfc0  li 5, 0
  03adfc4  lfs 1, 48(3)
  03adfc8  lfs 2, -3056(4)
  03adfcc  ori 3, 31, 0
  03adfd0  li 4, 9
  03adfd4  fmuls 1, 2, 1
  03adfd8  fctiwz 1, 1
  03adfdc  stfd 1, 616(1)
  03adfe0  lwz 6, 620(1)
  03adfe4  extsw 6, 6
  03adfe8  bl 0xfddc0
  03adfec  nop
  03adff0  lis 3, 59
  03adff4  vspltisw 2, -1
  03adff8  li 4, 6
  03adffc  addi 3, 3, -12056
  03ae000  li 6, 52
  03ae004  lis 5, 114
  03ae008  stb 4, 32(31)
  03ae00c  li 4, -3056
  03ae010  vslw 2, 2, 2
  03ae014  lvlx 3, 6, 3
  03ae018  li 3, 240
  03ae01c  vspltw 3, 3, 0
  03ae020  lvlx 4, 4, 5
  03ae024  lwz 31, 220(30)
  03ae028  vmaddfp 2, 4, 3, 2
  03ae02c  cmpwi 31, 0
  03ae030  vctsxs 2, 2, 0
  03ae034  vspltw 2, 2, 0
  03ae038  stvewx 2, 3, 30
  03ae03c  bf 2, 0x3ae04c
  03ae040  li 3, 1
  03ae044  stw 3, 264(30)
  03ae048  b 0x3aeef4
  03ae04c  lwz 3, 0(29)
  03ae050  addic 3, 3, -1
  03ae054  cmpw 31, 3
  03ae058  bf 2, 0x3aeef4
  03ae05c  li 3, -1
  03ae060  stw 3, 264(30)
  03ae064  b 0x3aeef4
  03ae068  ori 3, 29, 0
  03ae06c  lwz 29, 220(30)
  03ae070  lwz 4, 264(30)
  03ae074  lfs 1, 16(31)
  03ae078  addc 29, 29, 4
  03ae07c  lfs 2, 20(31)
  03ae080  slwi 4, 29, 4
  03ae084  addc 3, 3, 4
  03ae088  clrldi 3, 3, 32
  03ae08c  lis 5, 115
  03ae090  lfs 3, 16(3)
  03ae094  lfs 4, 20(3)
  03ae098  fsubs 1, 3, 1
  03ae09c  lis 3, 59
  03ae0a0  fsubs 2, 4, 2
  03ae0a4  addi 4, 3, -12056
  03ae0a8  addic 5, 5, 22784
  03ae0ac  addic 3, 31, 72
  03ae0b0  fabs 3, 1
  03ae0b4  fabs 5, 2
  03ae0b8  stfs 1, 340(1)
  03ae0bc  stfs 2, 344(1)
  03ae0c0  fsubs 1, 3, 5
  03ae0c4  stfs 1, 348(1)
  03ae0c8  lwz 6, 340(1)
  03ae0cc  lfs 4, 8(4)
  03ae0d0  lfs 1, 340(1)
  03ae0d4  lwz 4, 344(1)
  03ae0d8  lfs 2, 344(1)
  03ae0dc  fabs 1, 1
  03ae0e0  lwz 7, 348(1)
  03ae0e4  rlwinm 4, 4, 3, 29, 29
  03ae0e8  fabs 6, 2
  03ae0ec  lfs 2, 348(1)
  03ae0f0  rlwimi 4, 7, 2, 30, 30
  03ae0f4  fsub 7, 2, 4
  03ae0f8  rlwimi 4, 6, 4, 28, 28
  03ae0fc  fsub 8, 2, 4
  03ae100  ori 6, 5, 0
  03ae104  rlwimi 6, 4, 2, 26, 28
  03ae108  slwi 4, 4, 2
  03ae10c  clrldi 6, 6, 32
  03ae110  fsel 5, 7, 1, 5
  03ae114  lfsx 1, 5, 4
  03ae118  lfs 2, 4(6)
  03ae11c  fsel 3, 8, 6, 3
  03ae120  fcmpu 0, 5, 4
  03ae124  bt 1, 0x3ae12c
  03ae128  b 0x3ae24c
  03ae12c  fsubs 6, 3, 5
  03ae130  fadds 3, 3, 5
  03ae134  addic 4, 1, 16
  03ae138  li 8, 2
  03ae13c  addic 6, 4, 484
  03ae140  addic 5, 4, 468
  03ae144  mtctr 8
  03ae148  fdivs 3, 6, 3
  03ae14c  fmuls 5, 3, 3
  03ae150  stfs 3, 496(1)
  03ae154  stfs 3, 488(1)
  03ae158  stfs 3, 492(1)
  03ae15c  stfs 3, 484(1)
  03ae160  lfs 7, 496(1)
  03ae164  lfs 8, 488(1)
  03ae168  lfs 9, 492(1)
  03ae16c  fmuls 6, 5, 5
  03ae170  fmuls 8, 8, 5
  03ae174  fmuls 7, 7, 6
  03ae178  fmuls 3, 6, 6
  03ae17c  fmuls 6, 9, 6
  03ae180  stfs 8, 488(1)
  03ae184  fmuls 5, 7, 5
  03ae188  stfs 6, 492(1)
  03ae18c  stfs 5, 496(1)
  03ae190  lfs 5, 468(4)
  03ae194  fmuls 5, 5, 3
  03ae198  stfs 5, 484(4)
  03ae19c  lfs 5, 4(5)
  03ae1a0  addic 5, 5, 8
  03ae1a4  fmuls 5, 5, 3
  03ae1a8  addic 4, 4, 8
  03ae1ac  stfs 5, 4(6)
  03ae1b0  addic 6, 6, 8
  03ae1b4  bdnz 0x3ae190
  03ae1b8  li 6, 4
  03ae1bc  ori 4, 1, 0
  03ae1c0  mtctr 6
  03ae1c4  lis 5, 115
  03ae1c8  addic 6, 4, 484
  03ae1cc  addic 5, 5, 22752
  03ae1d0  ori 7, 6, 0
  03ae1d4  lfs 3, 484(4)
  03ae1d8  lfs 5, 0(5)
  03ae1dc  fmuls 3, 3, 5
  03ae1e0  lfs 5, 4(5)
  03ae1e4  addic 5, 5, 8
  03ae1e8  stfs 3, 484(4)
  03ae1ec  lfs 3, 4(6)
  03ae1f0  addic 4, 4, 8
  03ae1f4  fmuls 3, 3, 5
  03ae1f8  stfs 3, 4(6)
  03ae1fc  addic 6, 6, 8
  03ae200  bdnz 0x3ae1d4
  03ae204  ori 4, 1, 0
  03ae208  mtctr 8
  03ae20c  lfs 3, 484(4)
  03ae210  fadds 3, 4, 3
  03ae214  addic 4, 4, 16
  03ae218  lfs 4, 4(7)
  03ae21c  lfs 5, 8(7)
  03ae220  lfs 6, 12(7)
  03ae224  addic 7, 7, 16
  03ae228  fadds 3, 3, 4
  03ae22c  fadds 4, 3, 5
  03ae230  fadds 4, 4, 6
  03ae234  bdnz 0x3ae20c
  03ae238  lis 4, 59
  03ae23c  addi 4, 4, -12056
  03ae240  lfs 3, 12(4)
  03ae244  fadds 4, 4, 3
  03ae248  fmadds 4, 4, 1, 2
  03ae24c  lis 4, 59
  03ae250  lis 6, 114
  03ae254  fmr 1, 4
  03ae258  addi 4, 4, -12056
  03ae25c  lis 5, 114
  03ae260  lfs 3, 56(4)
  03ae264  lfs 5, 60(4)
  03ae268  lfs 2, -3048(6)
  03ae26c  lfs 6, -3052(5)
  03ae270  fmuls 2, 2, 3
  03ae274  addic 5, 30, 252
  03ae278  fmuls 4, 6, 5
  03ae27c  fmr 3, 2
  03ae280  bl 0x10a2e0
  03ae284  nop
  03ae288  addic 3, 30, 240
  03ae28c  bl 0x4fff60
  03ae290  nop
  03ae294  cmpwi 3, 0
  03ae298  bt 2, 0x3aeef4
  03ae29c  stw 29, 220(30)
  03ae2a0  lbz 3, 83(31)
  03ae2a4  cmpwi 3, 10
  03ae2a8  bt 2, 0x3ae2e8
  03ae2ac  lis 3, 59
  03ae2b0  lis 4, 114
  03ae2b4  addi 3, 3, -12056
  03ae2b8  li 5, 0
  03ae2bc  lfs 1, 64(3)
  03ae2c0  lfs 2, -3056(4)
  03ae2c4  ori 3, 31, 0
  03ae2c8  li 4, 10
  03ae2cc  fmuls 1, 2, 1
  03ae2d0  fctiwz 1, 1
  03ae2d4  stfd 1, 616(1)
  03ae2d8  lwz 6, 620(1)
  03ae2dc  extsw 6, 6
  03ae2e0  bl 0xfddc0
  03ae2e4  nop
  03ae2e8  li 3, 5
  03ae2ec  stb 3, 32(31)
  03ae2f0  b 0x3aeef4
  03ae2f4  addic 3, 30, 240
  03ae2f8  bl 0x4fff60
  03ae2fc  nop
  03ae300  cmpwi 3, 0
  03ae304  bt 2, 0x3aeef4
  03ae308  lwz 3, 220(30)
  03ae30c  lfs 1, 72(31)
  03ae310  slwi 3, 3, 4
  03ae314  addc 3, 29, 3
  03ae318  clrldi 3, 3, 32
  03ae31c  lfs 2, 16(3)
  03ae320  lfs 3, 24(3)
  03ae324  stfs 2, 64(1)
  03ae328  stfs 3, 72(1)
  03ae32c  lfs 2, 20(3)
  03ae330  lfs 3, 28(3)
  03ae334  stfs 2, 68(1)
  03ae338  ori 3, 31, 0
  03ae33c  stfs 3, 76(1)
  03ae340  ld 5, 64(1)
  03ae344  ld 6, 72(1)
  03ae348  bl 0x3ac678
  03ae34c  cmpwi 3, 0
  03ae350  bt 2, 0x3aeef4
  03ae354  lis 3, 59
  03ae358  vspltisw 2, -1
  03ae35c  li 4, 4
  03ae360  addi 3, 3, -12056
  03ae364  lis 5, 114
  03ae368  li 6, -3056
  03ae36c  vslw 2, 2, 2
  03ae370  lvlx 3, 4, 3
  03ae374  li 4, 240
  03ae378  vspltw 3, 3, 0
  03ae37c  lvlx 4, 6, 5
  03ae380  lfs 1, 4(3)
  03ae384  vmaddfp 2, 4, 3, 2
  03ae388  li 3, 8
  03ae38c  vctsxs 2, 2, 0
  03ae390  vspltw 2, 2, 0
  03ae394  stvewx 2, 4, 30
  03ae398  lbz 4, 83(31)
  03ae39c  stb 3, 32(31)
  03ae3a0  cmpwi 4, 1
  03ae3a4  bt 2, 0x3ae3d8
  03ae3a8  lis 3, 114
  03ae3ac  li 4, 1
  03ae3b0  li 5, 0
  03ae3b4  lfs 2, -3056(3)
  03ae3b8  ori 3, 31, 0
  03ae3bc  fmuls 1, 2, 1
  03ae3c0  fctiwz 1, 1
  03ae3c4  stfd 1, 616(1)
  03ae3c8  lwz 6, 620(1)
  03ae3cc  extsw 6, 6
  03ae3d0  bl 0xfddc0
  03ae3d4  nop
  03ae3d8  li 3, 2
  03ae3dc  bl 0xfc620
  03ae3e0  nop
  03ae3e4  cmpwi 3, 0
  03ae3e8  bt 2, 0x3ae430
  03ae3ec  lwz 5, 216(30)
  03ae3f0  lis 4, 59
  03ae3f4  ori 3, 31, 0
  03ae3f8  slwi 5, 5, 2
  03ae3fc  addi 4, 4, -12056
  03ae400  extsw 5, 5
  03ae404  li 6, 0
  03ae408  li 7, 0
  03ae40c  lfs 1, 16(4)
  03ae410  lwzx 5, 28, 5
  03ae414  addic 4, 30, 112
  03ae418  addic 8, 5, 16
  03ae41c  lwz 9, 0(5)
  03ae420  extsw 9, 9
  03ae424  bl 0x111ba0
  03ae428  nop
  03ae42c  b 0x3aeef4
  03ae430  li 3, 2
  03ae434  stw 3, 180(30)
  03ae438  b 0x3aeef4
  03ae43c  lwz 3, 180(30)
  03ae440  cmpwi 3, 2
  03ae444  bt 2, 0x3ae630
  03ae448  lfs 1, 112(30)
  03ae44c  lfs 4, 16(31)
  03ae450  lfs 2, 116(30)
  03ae454  lfs 5, 20(31)
  03ae458  fsubs 1, 1, 4
  03ae45c  lis 3, 59
  03ae460  fsubs 2, 2, 5
  03ae464  addi 3, 3, -12056
  03ae468  lis 4, 115
  03ae46c  addic 4, 4, 22784
  03ae470  fabs 3, 1
  03ae474  fabs 9, 2
  03ae478  stfs 1, 328(1)
  03ae47c  stfs 2, 332(1)
  03ae480  fsubs 1, 3, 9
  03ae484  stfs 1, 336(1)
  03ae488  lwz 5, 328(1)
  03ae48c  lfs 6, 8(3)
  03ae490  lfs 1, 328(1)
  03ae494  lwz 3, 332(1)
  03ae498  lfs 2, 332(1)
  03ae49c  lwz 6, 336(1)
  03ae4a0  rlwinm 3, 3, 3, 29, 29
  03ae4a4  fabs 10, 2
  03ae4a8  lfs 2, 336(1)
  03ae4ac  fabs 1, 1
  03ae4b0  rlwimi 3, 6, 2, 30, 30
  03ae4b4  fsub 11, 2, 6
  03ae4b8  rlwimi 3, 5, 4, 28, 28
  03ae4bc  fsub 12, 2, 6
  03ae4c0  ori 5, 4, 0
  03ae4c4  rlwimi 5, 3, 2, 26, 28
  03ae4c8  slwi 3, 3, 2
  03ae4cc  clrldi 5, 5, 32
  03ae4d0  fsel 9, 11, 1, 9
  03ae4d4  lfsx 1, 4, 3
  03ae4d8  lfs 2, 4(5)
  03ae4dc  fsel 3, 12, 10, 3
  03ae4e0  fcmpu 0, 9, 6
  03ae4e4  bt 1, 0x3ae4ec
  03ae4e8  b 0x3ae60c
  03ae4ec  fsubs 10, 3, 9
  03ae4f0  fadds 3, 3, 9
  03ae4f4  addic 3, 1, 16
  03ae4f8  li 7, 2
  03ae4fc  addic 4, 3, 436
  03ae500  addic 5, 3, 452
  03ae504  mtctr 7
  03ae508  fdivs 3, 10, 3
  03ae50c  fmuls 9, 3, 3
  03ae510  stfs 3, 464(1)
  03ae514  stfs 3, 456(1)
  03ae518  stfs 3, 460(1)
  03ae51c  stfs 3, 452(1)
  03ae520  lfs 11, 464(1)
  03ae524  lfs 12, 456(1)
  03ae528  lfs 13, 460(1)
  03ae52c  fmuls 10, 9, 9
  03ae530  fmuls 12, 12, 9
  03ae534  fmuls 11, 11, 10
  03ae538  fmuls 3, 10, 10
  03ae53c  fmuls 10, 13, 10
  03ae540  stfs 12, 456(1)
  03ae544  fmuls 9, 11, 9
  03ae548  stfs 10, 460(1)
  03ae54c  stfs 9, 464(1)
  03ae550  lfs 9, 436(3)
  03ae554  fmuls 9, 9, 3
  03ae558  stfs 9, 452(3)
  03ae55c  lfs 9, 4(4)
  03ae560  addic 3, 3, 8
  03ae564  addic 4, 4, 8
  03ae568  fmuls 9, 9, 3
  03ae56c  stfs 9, 4(5)
  03ae570  addic 5, 5, 8
  03ae574  bdnz 0x3ae550
  03ae578  li 5, 4
  03ae57c  ori 3, 1, 0
  03ae580  mtctr 5
  03ae584  lis 4, 115
  03ae588  addic 5, 3, 452
  03ae58c  addic 4, 4, 22752
  03ae590  ori 6, 5, 0
  03ae594  lfs 3, 452(3)
  03ae598  lfs 9, 0(4)
  03ae59c  fmuls 3, 3, 9
  03ae5a0  lfs 9, 4(4)
  03ae5a4  addic 4, 4, 8
  03ae5a8  stfs 3, 452(3)
  03ae5ac  lfs 3, 4(5)
  03ae5b0  addic 3, 3, 8
  03ae5b4  fmuls 3, 3, 9
  03ae5b8  stfs 3, 4(5)
  03ae5bc  addic 5, 5, 8
  03ae5c0  bdnz 0x3ae594
  03ae5c4  ori 3, 1, 0
  03ae5c8  mtctr 7
  03ae5cc  lfs 3, 452(3)
  03ae5d0  fadds 3, 6, 3
  03ae5d4  lfs 6, 4(6)
  03ae5d8  addic 3, 3, 16
  03ae5dc  lfs 9, 8(6)
  03ae5e0  lfs 10, 12(6)
  03ae5e4  addic 6, 6, 16
  03ae5e8  fadds 3, 3, 6
  03ae5ec  fadds 6, 3, 9
  03ae5f0  fadds 6, 6, 10
  03ae5f4  bdnz 0x3ae5cc
  03ae5f8  lis 3, 59
  03ae5fc  addi 3, 3, -12056
  03ae600  lfs 3, 12(3)
  03ae604  fadds 6, 6, 3
  03ae608  fmadds 6, 6, 1, 2
  03ae60c  stfs 4, 64(1)
  03ae610  fmr 1, 6
  03ae614  stfs 7, 72(1)
  03ae618  ori 3, 31, 0
  03ae61c  stfs 5, 68(1)
  03ae620  stfs 8, 76(1)
  03ae624  ld 5, 64(1)
  03ae628  ld 6, 72(1)
  03ae62c  bl 0x3ac678
  03ae630  lwz 3, 260(30)
  03ae634  cmpwi 3, 0
  03ae638  bt 2, 0x3aeafc
  03ae63c  addic 5, 1, 208
  03ae640  li 4, 0
  03ae644  bl 0xf1114
  03ae648  nop
  03ae64c  lfs 4, 208(1)
  03ae650  lfs 1, 16(31)
  03ae654  lfs 5, 212(1)
  03ae658  lfs 2, 20(31)
  03ae65c  fsubs 4, 4, 1
  03ae660  lis 3, 59
  03ae664  fsubs 5, 5, 2
  03ae668  addi 4, 3, -12056
  03ae66c  lis 3, 115
  03ae670  addic 3, 3, 22784
  03ae674  fabs 1, 4
  03ae678  fabs 2, 5
  03ae67c  stfs 4, 316(1)
  03ae680  stfs 5, 320(1)
  03ae684  fsubs 6, 1, 2
  03ae688  stfs 6, 324(1)
  03ae68c  lwz 5, 316(1)
  03ae690  lfs 7, 8(4)
  03ae694  lfs 3, 316(1)
  03ae698  lwz 4, 320(1)
  03ae69c  fabs 10, 3
  03ae6a0  lfs 3, 320(1)
  03ae6a4  rlwinm 4, 4, 3, 29, 29
  03ae6a8  lwz 6, 324(1)
  03ae6ac  fabs 9, 3
  03ae6b0  lfs 3, 324(1)
  03ae6b4  rlwimi 4, 6, 2, 30, 30
  03ae6b8  fsub 8, 3, 7
  03ae6bc  rlwimi 4, 5, 4, 28, 28
  03ae6c0  fsub 11, 3, 7
  03ae6c4  ori 5, 3, 0
  03ae6c8  rlwimi 5, 4, 2, 26, 28
  03ae6cc  slwi 4, 4, 2
  03ae6d0  clrldi 5, 5, 32
  03ae6d4  lfsx 3, 3, 4
  03ae6d8  fsel 10, 8, 10, 2
  03ae6dc  lfs 8, 4(5)
  03ae6e0  fsel 9, 11, 9, 1
  03ae6e4  fcmpu 0, 10, 7
  03ae6e8  bt 1, 0x3ae6f4
  03ae6ec  fmr 3, 7
  03ae6f0  b 0x3ae818
  03ae6f4  fsubs 11, 9, 10
  03ae6f8  fadds 9, 9, 10
  03ae6fc  addic 4, 1, 16
  03ae700  li 8, 2
  03ae704  addic 6, 4, 420
  03ae708  addic 5, 4, 404
  03ae70c  mtctr 8
  03ae710  fdivs 9, 11, 9
  03ae714  fmuls 10, 9, 9
  03ae718  stfs 9, 432(1)
  03ae71c  stfs 9, 424(1)
  03ae720  stfs 9, 428(1)
  03ae724  stfs 9, 420(1)
  03ae728  lfs 12, 432(1)
  03ae72c  lfs 13, 424(1)
  03ae730  lfs 0, 428(1)
  03ae734  fmuls 11, 10, 10
  03ae738  fmuls 13, 13, 10
  03ae73c  fmuls 12, 12, 11
  03ae740  fmuls 9, 11, 11
  03ae744  fmuls 11, 0, 11
  03ae748  stfs 13, 424(1)
  03ae74c  fmuls 10, 12, 10
  03ae750  stfs 11, 428(1)
  03ae754  stfs 10, 432(1)
  03ae758  lfs 10, 404(4)
  03ae75c  fmuls 10, 10, 9
  03ae760  stfs 10, 420(4)
  03ae764  lfs 10, 4(5)
  03ae768  addic 5, 5, 8
  03ae76c  fmuls 10, 10, 9
  03ae770  addic 4, 4, 8
  03ae774  stfs 10, 4(6)
  03ae778  addic 6, 6, 8
  03ae77c  bdnz 0x3ae758
  03ae780  li 6, 4
  03ae784  ori 4, 1, 0
  03ae788  mtctr 6
  03ae78c  lis 5, 115
  03ae790  addic 6, 4, 420
  03ae794  addic 5, 5, 22752
  03ae798  ori 7, 6, 0
  03ae79c  lfs 9, 420(4)
  03ae7a0  lfs 10, 0(5)
  03ae7a4  fmuls 9, 9, 10
  03ae7a8  lfs 10, 4(5)
  03ae7ac  addic 5, 5, 8
  03ae7b0  stfs 9, 420(4)
  03ae7b4  lfs 9, 4(6)
  03ae7b8  addic 4, 4, 8
  03ae7bc  fmuls 9, 9, 10
  03ae7c0  stfs 9, 4(6)
  03ae7c4  addic 6, 6, 8
  03ae7c8  bdnz 0x3ae79c
  03ae7cc  ori 4, 1, 0
  03ae7d0  fmr 9, 7
  03ae7d4  mtctr 8
  03ae7d8  lfs 10, 420(4)
  03ae7dc  fadds 9, 9, 10
  03ae7e0  lfs 10, 4(7)
  03ae7e4  addic 4, 4, 16
  03ae7e8  lfs 11, 8(7)
  03ae7ec  lfs 12, 12(7)
  03ae7f0  addic 7, 7, 16
  03ae7f4  fadds 9, 9, 10
  03ae7f8  fadds 9, 9, 11
  03ae7fc  fadds 9, 9, 12
  03ae800  bdnz 0x3ae7d8
  03ae804  lis 4, 59
  03ae808  addi 4, 4, -12056
  03ae80c  lfs 10, 12(4)
  03ae810  fadds 9, 9, 10
  03ae814  fmadds 3, 9, 3, 8
  03ae818  lis 4, 59
  03ae81c  fmr 11, 2
  03ae820  addi 4, 4, -12056
  03ae824  fmr 9, 4
  03ae828  fmr 10, 5
  03ae82c  lfs 8, 68(4)
  03ae830  lfs 2, 72(4)
  03ae834  fadds 3, 3, 8
  03ae838  lfs 4, 76(4)
  03ae83c  lfs 5, 80(4)
  03ae840  lfs 13, 84(4)
  03ae844  fsubs 8, 2, 3
  03ae848  fsubs 12, 4, 3
  03ae84c  fsub 0, 3, 8
  03ae850  fsel 3, 0, 8, 3
  03ae854  lfs 8, 88(4)
  03ae858  lfs 30, 92(4)
  03ae85c  stfs 9, 304(1)
  03ae860  stfs 6, 312(1)
  03ae864  stfs 10, 308(1)
  03ae868  lwz 4, 304(1)
  03ae86c  lwz 5, 312(1)
  03ae870  fmr 6, 13
  03ae874  fsub 9, 12, 3
  03ae878  fsel 3, 9, 12, 3
  03ae87c  lfs 12, 312(1)
  03ae880  lfs 13, 304(1)
  03ae884  fsub 0, 12, 7
  03ae888  fabs 13, 13
  03ae88c  lwz 6, 308(1)
  03ae890  fsub 12, 12, 7
  03ae894  fmr 9, 30
  03ae898  rlwinm 6, 6, 3, 29, 29
  03ae89c  fmuls 10, 3, 3
  03ae8a0  rlwimi 6, 5, 2, 30, 30
  03ae8a4  fsel 11, 0, 13, 11
  03ae8a8  lfs 0, 308(1)
  03ae8ac  rlwimi 6, 4, 4, 28, 28
  03ae8b0  ori 4, 3, 0
  03ae8b4  slwi 5, 6, 2
  03ae8b8  rlwimi 4, 6, 2, 26, 28
  03ae8bc  fmuls 31, 10, 3
  03ae8c0  clrldi 4, 4, 32
  03ae8c4  fcmpu 0, 11, 7
  03ae8c8  fmuls 13, 10, 31
  03ae8cc  fmadds 3, 31, 5, 3
  03ae8d0  fmuls 31, 10, 13
  03ae8d4  fmadds 3, 13, 6, 3
  03ae8d8  fabs 13, 0
  03ae8dc  fmuls 0, 10, 31
  03ae8e0  fmadds 3, 31, 8, 3
  03ae8e4  fsel 10, 12, 13, 1
  03ae8e8  fmadds 1, 0, 9, 3
  03ae8ec  stfs 1, 224(1)
  03ae8f0  lfsx 3, 3, 5
  03ae8f4  lfs 1, 4(4)
  03ae8f8  bt 1, 0x3ae900
  03ae8fc  b 0x3aea20
  03ae900  fsubs 12, 10, 11
  03ae904  fadds 10, 10, 11
  03ae908  addic 3, 1, 16
  03ae90c  li 7, 2
  03ae910  addic 4, 3, 372
  03ae914  addic 5, 3, 388
  03ae918  mtctr 7
  03ae91c  fdivs 10, 12, 10
  03ae920  fmuls 11, 10, 10
  03ae924  stfs 10, 400(1)
  03ae928  stfs 10, 392(1)
  03ae92c  stfs 10, 396(1)
  03ae930  stfs 10, 388(1)
  03ae934  lfs 13, 400(1)
  03ae938  lfs 0, 392(1)
  03ae93c  lfs 31, 396(1)
  03ae940  fmuls 12, 11, 11
  03ae944  fmuls 0, 0, 11
  03ae948  fmuls 13, 13, 12
  03ae94c  fmuls 10, 12, 12
  03ae950  fmuls 12, 31, 12
  03ae954  stfs 0, 392(1)
  03ae958  fmuls 11, 13, 11
  03ae95c  stfs 12, 396(1)
  03ae960  stfs 11, 400(1)
  03ae964  lfs 11, 372(3)
  03ae968  fmuls 11, 11, 10
  03ae96c  stfs 11, 388(3)
  03ae970  lfs 11, 4(4)
  03ae974  addic 3, 3, 8
  03ae978  addic 4, 4, 8
  03ae97c  fmuls 11, 11, 10
  03ae980  stfs 11, 4(5)
  03ae984  addic 5, 5, 8
  03ae988  bdnz 0x3ae964
  03ae98c  li 5, 4
  03ae990  ori 3, 1, 0
  03ae994  mtctr 5
  03ae998  lis 4, 115
  03ae99c  addic 5, 3, 388
  03ae9a0  addic 4, 4, 22752
  03ae9a4  ori 6, 5, 0
  03ae9a8  lfs 10, 388(3)
  03ae9ac  lfs 11, 0(4)
  03ae9b0  fmuls 10, 10, 11
  03ae9b4  lfs 11, 4(4)
  03ae9b8  addic 4, 4, 8
  03ae9bc  stfs 10, 388(3)
  03ae9c0  lfs 10, 4(5)
  03ae9c4  addic 3, 3, 8
  03ae9c8  fmuls 10, 10, 11
  03ae9cc  stfs 10, 4(5)
  03ae9d0  addic 5, 5, 8
  03ae9d4  bdnz 0x3ae9a8
  03ae9d8  ori 3, 1, 0
  03ae9dc  mtctr 7
  03ae9e0  lfs 10, 388(3)
  03ae9e4  fadds 7, 7, 10
  03ae9e8  lfs 10, 4(6)
  03ae9ec  addic 3, 3, 16
  03ae9f0  lfs 11, 8(6)
  03ae9f4  lfs 12, 12(6)
  03ae9f8  addic 6, 6, 16
  03ae9fc  fadds 7, 7, 10
  03aea00  fadds 7, 7, 11
  03aea04  fadds 7, 7, 12
  03aea08  bdnz 0x3ae9e0
  03aea0c  lis 3, 59
  03aea10  addi 3, 3, -12056
  03aea14  lfs 10, 12(3)
  03aea18  fadds 7, 7, 10
  03aea1c  fmadds 7, 7, 3, 1
  03aea20  fsubs 1, 2, 7
  03aea24  fsubs 2, 4, 7
  03aea28  lis 3, 132
  03aea2c  li 5, 0
  03aea30  addic 29, 30, 288
  03aea34  addic 28, 1, 224
  03aea38  stw 5, 232(1)
  03aea3c  fsub 3, 7, 1
  03aea40  lfs 4, 21912(3)
  03aea44  addic 4, 1, 208
  03aea48  ori 3, 29, 0
  03aea4c  ori 5, 28, 0
  03aea50  fsel 1, 3, 1, 7
  03aea54  fsub 3, 2, 1
  03aea58  fsel 1, 3, 2, 1
  03aea5c  fmuls 2, 1, 1
  03aea60  fmuls 3, 2, 1
  03aea64  fmuls 7, 2, 3
  03aea68  fmadds 3, 3, 5, 1
  03aea6c  fmr 1, 4
  03aea70  fmuls 4, 2, 7
  03aea74  fmadds 3, 7, 6, 3
  03aea78  fmuls 2, 2, 4
  03aea7c  fmadds 3, 4, 8, 3
  03aea80  fmadds 2, 2, 9, 3
  03aea84  stfs 2, 228(1)
  03aea88  bl 0x119b38
  03aea8c  nop
  03aea90  lis 3, 59
  03aea94  lis 5, 16256
  03aea98  addi 4, 3, -12056
  03aea9c  lis 3, 17839
  03aeaa0  lis 6, 1
  03aeaa4  ori 7, 3, 57190
  03aeaa8  addic 27, 1, 256
  03aeaac  lfs 1, 40(4)
  03aeab0  stw 5, 232(1)
  03aeab4  ori 3, 27, 0
  03aeab8  ori 5, 6, 1
  03aeabc  stw 7, 236(1)
  03aeac0  ori 4, 31, 0
  03aeac4  ori 7, 28, 0
  03aeac8  bl 0x10581c
  03aeacc  nop
  03aead0  li 5, 5
  03aead4  lhz 7, 166(31)
  03aead8  li 6, 1
  03aeadc  ori 3, 29, 0
  03aeae0  ori 4, 31, 0
  03aeae4  stb 5, 280(1)
  03aeae8  stb 6, 281(1)
  03aeaec  ori 5, 27, 0
  03aeaf0  sth 7, 282(1)
  03aeaf4  bl 0x11a018
  03aeaf8  nop
  03aeafc  lbz 3, 112(31)
  03aeb00  rlwinm 3, 3, 0, 30, 30
  03aeb04  cmpwi 3, 0
  03aeb08  bt 2, 0x3aeef4
  03aeb0c  lwz 4, 220(30)
  03aeb10  li 3, 7
  03aeb14  addic 4, 4, 1
  03aeb18  clrlwi 4, 4, 31
  03aeb1c  stw 4, 220(30)
  03aeb20  lbz 4, 83(31)
  03aeb24  stb 3, 32(31)
  03aeb28  cmpwi 4, 3
  03aeb2c  bt 2, 0x3aeef4
  03aeb30  lis 3, 59
  03aeb34  lis 4, 114
  03aeb38  addi 3, 3, -12056
  03aeb3c  li 5, 0
  03aeb40  lfs 1, 4(3)
  03aeb44  lfs 2, -3056(4)
  03aeb48  ori 3, 31, 0
  03aeb4c  fmuls 1, 2, 1
  03aeb50  li 4, 3
  03aeb54  fctiwz 1, 1
  03aeb58  stfd 1, 616(1)
  03aeb5c  lwz 6, 620(1)
  03aeb60  extsw 6, 6
  03aeb64  bl 0xfddc0
  03aeb68  nop
  03aeb6c  b 0x3aeef4
  03aeb70  lwz 3, 220(30)
  03aeb74  lfs 1, 268(30)
  03aeb78  slwi 3, 3, 4
  03aeb7c  addc 3, 29, 3
  03aeb80  clrldi 3, 3, 32
  03aeb84  lfs 2, 16(3)
  03aeb88  lfs 3, 24(3)
  03aeb8c  stfs 2, 64(1)
  03aeb90  stfs 3, 72(1)
  03aeb94  lfs 2, 20(3)
  03aeb98  lfs 3, 28(3)
  03aeb9c  stfs 2, 68(1)
  03aeba0  stfs 3, 76(1)
  03aeba4  ori 3, 31, 0
  03aeba8  ld 5, 64(1)
  03aebac  ld 6, 72(1)
  03aebb0  bl 0x3ac678
  03aebb4  lbz 3, 112(31)
  03aebb8  rlwinm 3, 3, 0, 30, 30
  03aebbc  cmpwi 3, 0
  03aebc0  bt 2, 0x3aeef4
  03aebc4  lwz 3, 272(30)
  03aebc8  lbz 4, 83(31)
  03aebcc  stb 3, 32(31)
  03aebd0  lwz 30, 276(30)
  03aebd4  cmpw 4, 30
  03aebd8  bt 2, 0x3aeef4
  03aebdc  lis 3, 59
  03aebe0  lis 4, 114
  03aebe4  addi 3, 3, -12056
  03aebe8  li 5, 0
  03aebec  lfs 1, 48(3)
  03aebf0  lfs 2, -3056(4)
  03aebf4  extsw 4, 30
  03aebf8  fmuls 1, 2, 1
  03aebfc  ori 3, 31, 0
  03aec00  fctiwz 1, 1
  03aec04  stfd 1, 616(1)
  03aec08  lwz 6, 620(1)
  03aec0c  extsw 6, 6
  03aec10  bl 0xfddc0
  03aec14  nop
  03aec18  b 0x3aeef4
  03aec1c  lis 3, 59
  03aec20  vspltisw 2, -1
  03aec24  lis 4, 16384
  03aec28  addi 29, 3, -12056
  03aec2c  li 5, 52
  03aec30  lis 3, 114
  03aec34  stw 4, 32(30)
  03aec38  li 4, -3056
  03aec3c  vslw 2, 2, 2
  03aec40  lvlx 31, 5, 29
  03aec44  li 9, 240
  03aec48  vspltw 31, 31, 0
  03aec4c  lvlx 3, 4, 3
  03aec50  lis 11, 114
  03aec54  lis 4, 161
  03aec58  vmaddfp 2, 3, 31, 2
  03aec5c  addic 27, 4, 23856
  03aec60  addic 28, 31, 16
  03aec64  addic 26, 31, 64
  03aec68  ori 3, 31, 0
  03aec6c  ori 10, 27, 0
  03aec70  li 4, 1621
  03aec74  ori 5, 28, 0
  03aec78  ori 6, 26, 0
  03aec7c  li 7, 0
  03aec80  li 8, 0
  03aec84  vctsxs 2, 2, 0
  03aec88  vspltw 2, 2, 0
  03aec8c  stvewx 2, 9, 30
  03aec90  lfs 1, 16(29)
  03aec94  lfs 2, -3048(11)
  03aec98  std 27, 112(1)
  03aec9c  fmuls 31, 2, 1
  03aeca0  std 27, 120(1)
  03aeca4  fmr 1, 31
  03aeca8  bl 0x11a560
  03aecac  nop
  03aecb0  std 27, 112(1)
  03aecb4  std 27, 120(1)
  03aecb8  ori 3, 31, 0
  03aecbc  ori 10, 27, 0
  03aecc0  fmr 1, 31
  03aecc4  li 4, 1622
  03aecc8  ori 5, 28, 0
  03aeccc  ori 6, 26, 0
  03aecd0  li 7, 0
  03aecd4  li 8, 0
  03aecd8  bl 0x11a560
  03aecdc  nop
  03aece0  std 27, 112(1)
  03aece4  fmr 1, 31
  03aece8  std 27, 120(1)
  03aecec  ori 3, 31, 0
  03aecf0  ori 10, 27, 0
  03aecf4  li 4, 1623
  03aecf8  ori 5, 28, 0
  03aecfc  ori 6, 26, 0
  03aed00  li 7, 0
  03aed04  li 8, 0
  03aed08  bl 0x11a560
  03aed0c  nop
  03aed10  lfs 1, 16(31)
  03aed14  lfs 2, 20(31)
  03aed18  ori 3, 31, 0
  03aed1c  stfs 1, 240(1)
  03aed20  addic 4, 1, 240
  03aed24  lfs 1, 28(31)
  03aed28  li 6, -1
  03aed2c  stfs 2, 244(1)
  03aed30  stfs 1, 252(1)
  03aed34  lfs 1, 96(29)
  03aed38  lfs 2, 24(31)
  03aed3c  fadds 1, 2, 1
  03aed40  stfs 1, 248(1)
  03aed44  lfs 1, 28(29)
  03aed48  lfs 2, 24(29)
  03aed4c  bl 0x10fb28
  03aed50  nop
  03aed54  ori 3, 31, 0
  03aed58  li 4, 0
  03aed5c  li 5, -1
  03aed60  bl 0xfd8d0
  03aed64  nop
  03aed68  li 3, 7
  03aed6c  li 4, 0
  03aed70  ori 5, 31, 0
  03aed74  bl 0x15d12c
  03aed78  nop
  03aed7c  lwz 3, 200(30)
  03aed80  addic 4, 3, -1
  03aed84  cmpwi 3, 0
  03aed88  stw 4, 200(30)
  03aed8c  bt 2, 0x3aede4
  03aed90  li 3, 11
  03aed94  vspltisw 2, -1
  03aed98  lis 4, 114
  03aed9c  li 5, -3056
  03aeda0  stb 3, 32(31)
  03aeda4  lfs 1, 224(30)
  03aeda8  li 3, 240
  03aedac  vslw 2, 2, 2
  03aedb0  stfs 1, 16(31)
  03aedb4  lfs 1, 228(30)
  03aedb8  stfs 1, 20(31)
  03aedbc  lfs 1, 232(30)
  03aedc0  stfs 1, 24(31)
  03aedc4  lfs 1, 236(30)
  03aedc8  stfs 1, 28(31)
  03aedcc  lvlx 3, 5, 4
  03aedd0  vmaddfp 2, 3, 31, 2
  03aedd4  vctsxs 2, 2, 0
  03aedd8  vspltw 2, 2, 0
  03aeddc  stvewx 2, 3, 30
  03aede0  b 0x3aeef4
  03aede4  lwz 30, 260(30)
  03aede8  cmpwi 30, 0
  03aedec  bt 2, 0x3aedfc
  03aedf0  ori 3, 30, 0
  03aedf4  bl 0xefb38
  03aedf8  nop
  03aedfc  ori 3, 31, 0
  03aee00  bl 0xefb38
  03aee04  nop
  03aee08  b 0x3aeef4
  03aee0c  addic 3, 30, 240
  03aee10  bl 0x4fff60
  03aee14  nop
  03aee18  cmpwi 3, 0
  03aee1c  bt 2, 0x3aee8c
  03aee20  li 3, 0
  03aee24  li 4, 2
  03aee28  stw 3, 252(30)
  03aee2c  lbz 3, 83(31)
  03aee30  stb 4, 32(31)
  03aee34  cmpwi 3, 9
  03aee38  bt 2, 0x3aee78
  03aee3c  lis 3, 59
  03aee40  lis 4, 114
  03aee44  addi 3, 3, -12056
  03aee48  li 5, 0
  03aee4c  lfs 1, 64(3)
  03aee50  lfs 2, -3056(4)
  03aee54  ori 3, 31, 0
  03aee58  fmuls 1, 2, 1
  03aee5c  li 4, 9
  03aee60  fctiwz 1, 1
  03aee64  stfd 1, 616(1)
  03aee68  lwz 6, 620(1)
  03aee6c  extsw 6, 6
  03aee70  bl 0xfddc0
  03aee74  nop
  03aee78  lis 3, 16384
  03aee7c  lhz 4, 52(31)
  03aee80  stw 3, 32(30)
  03aee84  ori 3, 4, 4096
  03aee88  sth 3, 52(31)
  03aee8c  lis 3, 59
  03aee90  vspltisw 4, -1
  03aee94  li 4, 100
  03aee98  addi 3, 3, -12056
  03aee9c  lis 5, 114
  03aeea0  li 6, -3052
  03aeea4  li 7, 240
  03aeea8  vslw 4, 4, 4
  03aeeac  li 8, 232
  03aeeb0  addi 9, 7, 16
  03aeeb4  lvlx 2, 4, 3
  03aeeb8  lvlx 3, 6, 5
  03aeebc  lvlx 5, 7, 30
  03aeec0  addi 3, 8, 16
  03aeec4  vspltw 2, 2, 0
  03aeec8  lvrx 6, 9, 30
  03aeecc  lvlx 7, 8, 30
  03aeed0  vor 5, 5, 6
  03aeed4  vmaddfp 2, 3, 2, 4
  03aeed8  lvrx 8, 3, 30
  03aeedc  li 3, 24
  03aeee0  vcfsx 4, 5, 0
  03aeee4  vor 3, 7, 8
  03aeee8  vmaddfp 2, 2, 4, 3
  03aeeec  vspltw 2, 2, 0
  03aeef0  stvewx 2, 3, 31
  03aeef4  li 0, 640
  03aeef8  lvx 31, 1, 0
  03aeefc  ld 0, 752(1)
  03aef00  mtlr 0
  03aef04  lfd 29, 712(1)
  03aef08  lfd 30, 720(1)
  03aef0c  lfd 31, 728(1)
  03aef10  ld 26, 664(1)
  03aef14  ld 27, 672(1)
  03aef18  ld 28, 680(1)
  03aef1c  ld 29, 688(1)
  03aef20  ld 30, 696(1)
  03aef24  ld 31, 704(1)
  03aef28  addi 1, 1, 736
  03aef2c  blr
