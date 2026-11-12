# game/update/moby615.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M615_003dd9ac:   # 0x3dd9ac, 0x14 bytes
  03dd9ac  lis 3, 133
  03dd9b0  lis 4, 1
  03dd9b4  addic 3, 3, 14992
  03dd9b8  stw 4, 72(3)
  03dd9bc  blr

M615_003dda00:   # 0x3dda00, 0x430 bytes
  03dda00  stdu 1, -240(1)
  03dda04  mflr 0
  03dda08  std 0, 256(1)
  03dda0c  stfd 27, 200(1)
  03dda10  stfd 28, 208(1)
  03dda14  stfd 29, 216(1)
  03dda18  stfd 30, 224(1)
  03dda1c  stfd 31, 232(1)
  03dda20  std 30, 184(1)
  03dda24  std 29, 176(1)
  03dda28  ori 30, 4, 0
  03dda2c  lwz 4, 120(5)
  03dda30  std 31, 192(1)
  03dda34  ori 29, 3, 0
  03dda38  ori 31, 5, 0
  03dda3c  lwz 3, 232(4)
  03dda40  std 28, 168(1)
  03dda44  cmpwi 3, -1
  03dda48  bf 2, 0x3ddd98
  03dda4c  lis 3, 62
  03dda50  lfs 1, 72(31)
  03dda54  addi 28, 3, -9792
  03dda58  lfs 2, 0(28)
  03dda5c  bl 0x502578
  03dda60  nop
  03dda64  fmr 30, 1
  03dda68  lfs 1, 72(31)
  03dda6c  lfs 3, 4(28)
  03dda70  fmr 2, 3
  03dda74  bl 0x502578
  03dda78  nop
  03dda7c  lis 4, 149
  03dda80  lfs 2, 16(31)
  03dda84  lfs 3, 20(31)
  03dda88  addic 4, 4, 5056
  03dda8c  fmr 31, 1
  03dda90  lis 3, 115
  03dda94  lfs 4, 320(4)
  03dda98  lfs 5, 324(4)
  03dda9c  fsubs 2, 4, 2
  03ddaa0  fsubs 3, 5, 3
  03ddaa4  addic 3, 3, 22784
  03ddaa8  fabs 4, 2
  03ddaac  fabs 5, 3
  03ddab0  stfs 2, 112(1)
  03ddab4  stfs 3, 116(1)
  03ddab8  fsubs 2, 4, 5
  03ddabc  stfs 2, 120(1)
  03ddac0  lwz 4, 112(1)
  03ddac4  lfs 29, 8(28)
  03ddac8  lfs 1, 112(1)
  03ddacc  lwz 5, 116(1)
  03ddad0  fabs 3, 1
  03ddad4  lfs 1, 116(1)
  03ddad8  rlwinm 5, 5, 3, 29, 29
  03ddadc  lwz 6, 120(1)
  03ddae0  fabs 6, 1
  03ddae4  lfs 1, 120(1)
  03ddae8  rlwimi 5, 6, 2, 30, 30
  03ddaec  fsub 2, 1, 29
  03ddaf0  rlwimi 5, 4, 4, 28, 28
  03ddaf4  fsub 7, 1, 29
  03ddaf8  ori 4, 3, 0
  03ddafc  rlwimi 4, 5, 2, 26, 28
  03ddb00  slwi 5, 5, 2
  03ddb04  clrldi 4, 4, 32
  03ddb08  fsel 3, 2, 3, 5
  03ddb0c  lfsx 2, 3, 5
  03ddb10  fsel 4, 7, 6, 4
  03ddb14  lfs 1, 4(4)
  03ddb18  fcmpu 0, 3, 29
  03ddb1c  bt 1, 0x3ddb24
  03ddb20  b 0x3ddc48
  03ddb24  fsubs 5, 4, 3
  03ddb28  fadds 3, 4, 3
  03ddb2c  addic 6, 1, 16
  03ddb30  li 3, 2
  03ddb34  addic 5, 6, 108
  03ddb38  addic 4, 6, 124
  03ddb3c  mtctr 3
  03ddb40  fdivs 3, 5, 3
  03ddb44  fmuls 5, 3, 3
  03ddb48  stfs 3, 136(1)
  03ddb4c  stfs 3, 128(1)
  03ddb50  stfs 3, 132(1)
  03ddb54  stfs 3, 124(1)
  03ddb58  lfs 6, 136(1)
  03ddb5c  lfs 7, 128(1)
  03ddb60  lfs 8, 132(1)
  03ddb64  fmuls 3, 5, 5
  03ddb68  fmuls 7, 7, 5
  03ddb6c  fmuls 6, 6, 3
  03ddb70  fmuls 4, 3, 3
  03ddb74  fmuls 3, 8, 3
  03ddb78  stfs 7, 128(1)
  03ddb7c  fmuls 5, 6, 5
  03ddb80  stfs 3, 132(1)
  03ddb84  stfs 5, 136(1)
  03ddb88  lfs 3, 108(6)
  03ddb8c  fmuls 3, 3, 4
  03ddb90  stfs 3, 124(6)
  03ddb94  lfs 3, 4(5)
  03ddb98  addic 6, 6, 8
  03ddb9c  addic 5, 5, 8
  03ddba0  fmuls 3, 3, 4
  03ddba4  stfs 3, 4(4)
  03ddba8  addic 4, 4, 8
  03ddbac  bdnz 0x3ddb88
  03ddbb0  ori 7, 1, 0
  03ddbb4  lis 6, 115
  03ddbb8  li 8, 4
  03ddbbc  addic 5, 7, 124
  03ddbc0  addic 6, 6, 22752
  03ddbc4  ori 4, 5, 0
  03ddbc8  mtctr 8
  03ddbcc  lfs 3, 124(7)
  03ddbd0  lfs 4, 0(6)
  03ddbd4  fmuls 3, 3, 4
  03ddbd8  lfs 4, 4(6)
  03ddbdc  addic 6, 6, 8
  03ddbe0  stfs 3, 124(7)
  03ddbe4  lfs 3, 4(5)
  03ddbe8  addic 7, 7, 8
  03ddbec  fmuls 3, 3, 4
  03ddbf0  stfs 3, 4(5)
  03ddbf4  addic 5, 5, 8
  03ddbf8  bdnz 0x3ddbcc
  03ddbfc  ori 5, 3, 0
  03ddc00  ori 3, 1, 0
  03ddc04  mtctr 5
  03ddc08  lfs 3, 124(3)
  03ddc0c  lfs 4, 4(4)
  03ddc10  fadds 3, 29, 3
  03ddc14  lfs 5, 8(4)
  03ddc18  addic 3, 3, 16
  03ddc1c  lfs 29, 12(4)
  03ddc20  addic 4, 4, 16
  03ddc24  fadds 3, 3, 4
  03ddc28  fadds 3, 3, 5
  03ddc2c  fadds 29, 3, 29
  03ddc30  bdnz 0x3ddc08
  03ddc34  lis 3, 62
  03ddc38  addi 3, 3, -9792
  03ddc3c  lfs 3, 12(3)
  03ddc40  fadds 29, 29, 3
  03ddc44  fmadds 29, 29, 2, 1
  03ddc48  fmr 1, 29
  03ddc4c  fmr 2, 30
  03ddc50  bl 0x5026a0
  03ddc54  nop
  03ddc58  fmr 28, 1
  03ddc5c  fmr 1, 29
  03ddc60  fmr 2, 31
  03ddc64  bl 0x5026a0
  03ddc68  nop
  03ddc6c  fsub 1, 28, 1
  03ddc70  lis 3, 62
  03ddc74  addi 3, 3, -9792
  03ddc78  lis 4, 151
  03ddc7c  addic 4, 4, -25376
  03ddc80  lfs 2, 24(3)
  03ddc84  lfs 3, 20(3)
  03ddc88  lfs 4, 28(3)
  03ddc8c  fsel 1, 1, 31, 30
  03ddc90  lfs 8, 32(3)
  03ddc94  fsubs 5, 2, 1
  03ddc98  fadds 3, 1, 3
  03ddc9c  fsubs 6, 4, 1
  03ddca0  fsub 7, 1, 5
  03ddca4  fsubs 2, 2, 3
  03ddca8  fsubs 4, 4, 3
  03ddcac  fsel 5, 7, 5, 1
  03ddcb0  fsub 7, 3, 2
  03ddcb4  fsub 10, 6, 5
  03ddcb8  fsel 2, 7, 2, 3
  03ddcbc  lfs 3, 36(3)
  03ddcc0  lfs 7, 40(3)
  03ddcc4  lfs 9, 20(31)
  03ddcc8  fsel 5, 10, 6, 5
  03ddccc  fsub 6, 4, 2
  03ddcd0  lfs 10, 132(4)
  03ddcd4  lfs 11, 44(3)
  03ddcd8  fmuls 12, 5, 5
  03ddcdc  fsel 2, 6, 4, 2
  03ddce0  fadds 6, 10, 9
  03ddce4  fmr 9, 11
  03ddce8  lfs 4, 16(3)
  03ddcec  lfs 13, 48(3)
  03ddcf0  lfs 0, 16(31)
  03ddcf4  lfs 31, 24(31)
  03ddcf8  lfs 29, 128(4)
  03ddcfc  fmuls 10, 12, 5
  03ddd00  fmuls 11, 2, 2
  03ddd04  lfs 28, 136(4)
  03ddd08  fadds 0, 29, 0
  03ddd0c  lfs 29, 140(4)
  03ddd10  li 4, 0
  03ddd14  fmuls 30, 12, 10
  03ddd18  fmadds 5, 10, 8, 5
  03ddd1c  fmuls 10, 11, 2
  03ddd20  fmuls 27, 12, 30
  03ddd24  fmadds 5, 30, 3, 5
  03ddd28  fmuls 30, 11, 10
  03ddd2c  fmadds 2, 10, 8, 2
  03ddd30  fadds 8, 28, 31
  03ddd34  fmuls 10, 12, 27
  03ddd38  fmadds 5, 27, 7, 5
  03ddd3c  fmuls 12, 11, 30
  03ddd40  fmadds 2, 30, 3, 2
  03ddd44  fmadds 3, 10, 9, 5
  03ddd48  fmuls 5, 11, 12
  03ddd4c  fmadds 2, 12, 7, 2
  03ddd50  fmuls 3, 3, 13
  03ddd54  fmadds 2, 5, 9, 2
  03ddd58  fmadds 3, 6, 4, 3
  03ddd5c  fmuls 2, 2, 13
  03ddd60  stfs 3, 4(29)
  03ddd64  fmadds 2, 0, 4, 2
  03ddd68  lfs 3, 52(3)
  03ddd6c  stfs 29, 12(29)
  03ddd70  fmadds 3, 8, 4, 3
  03ddd74  stw 4, 4(30)
  03ddd78  stfs 2, 0(29)
  03ddd7c  stw 4, 0(30)
  03ddd80  stfs 3, 8(29)
  03ddd84  lfs 2, 56(3)
  03ddd88  bl 0x502578
  03ddd8c  nop
  03ddd90  stfs 1, 8(30)
  03ddd94  b 0x3dddfc
  03ddd98  lis 5, 165
  03ddd9c  slwi 3, 3, 7
  03ddda0  lwz 5, 7128(5)
  03ddda4  addc 3, 5, 3
  03ddda8  clrldi 3, 3, 32
  03dddac  lfs 1, 48(3)
  03dddb0  stfs 1, 0(29)
  03dddb4  lfs 1, 52(3)
  03dddb8  stfs 1, 4(29)
  03dddbc  lfs 1, 56(3)
  03dddc0  stfs 1, 8(29)
  03dddc4  lfs 1, 60(3)
  03dddc8  stfs 1, 12(29)
  03dddcc  lwz 3, 232(4)
  03dddd0  slwi 3, 3, 7
  03dddd4  addc 3, 5, 3
  03dddd8  clrldi 3, 3, 32
  03ddddc  lfs 1, 112(3)
  03ddde0  stfs 1, 0(30)
  03ddde4  lfs 1, 116(3)
  03ddde8  stfs 1, 4(30)
  03dddec  lfs 1, 120(3)
  03dddf0  stfs 1, 8(30)
  03dddf4  lfs 1, 124(3)
  03dddf8  stfs 1, 12(30)
  03dddfc  ld 0, 256(1)
  03dde00  mtlr 0
  03dde04  lfd 27, 200(1)
  03dde08  lfd 28, 208(1)
  03dde0c  lfd 29, 216(1)
  03dde10  lfd 30, 224(1)
  03dde14  lfd 31, 232(1)
  03dde18  ld 28, 168(1)
  03dde1c  ld 29, 176(1)
  03dde20  ld 30, 184(1)
  03dde24  ld 31, 192(1)
  03dde28  addi 1, 1, 240
  03dde2c  blr

M615_003dde40:   # 0x3dde40, 0x160 bytes
  03dde40  stdu 1, -176(1)
  03dde44  mflr 0
  03dde48  std 0, 192(1)
  03dde4c  std 29, 152(1)
  03dde50  std 28, 144(1)
  03dde54  lis 4, 62
  03dde58  addic 29, 1, 112
  03dde5c  std 30, 160(1)
  03dde60  addi 28, 4, -8656
  03dde64  ori 30, 3, 0
  03dde68  ori 5, 29, 0
  03dde6c  std 31, 168(1)
  03dde70  std 27, 136(1)
  03dde74  li 4, 0
  03dde78  bl 0xf1114
  03dde7c  nop
  03dde80  lis 31, 151
  03dde84  lfs 1, 112(1)
  03dde88  lis 27, 114
  03dde8c  addic 31, 31, -25376
  03dde90  lfs 2, 116(1)
  03dde94  lfs 3, 120(1)
  03dde98  ori 3, 29, 0
  03dde9c  lfs 4, 128(31)
  03ddea0  lfs 5, 132(31)
  03ddea4  fsubs 1, 1, 4
  03ddea8  lfs 4, 136(31)
  03ddeac  fsubs 2, 2, 5
  03ddeb0  fsubs 3, 3, 4
  03ddeb4  lfs 4, -3052(27)
  03ddeb8  stfs 1, 112(1)
  03ddebc  stfs 2, 116(1)
  03ddec0  stfs 3, 120(1)
  03ddec4  lfs 1, 0(28)
  03ddec8  fmuls 1, 4, 1
  03ddecc  bl 0x110488
  03dded0  nop
  03dded4  lfs 1, 128(31)
  03dded8  lfs 2, 112(1)
  03ddedc  lfs 3, 132(31)
  03ddee0  fadds 1, 1, 2
  03ddee4  lfs 2, 116(1)
  03ddee8  lfs 4, 136(31)
  03ddeec  fadds 2, 3, 2
  03ddef0  lfs 3, 120(1)
  03ddef4  fadds 3, 4, 3
  03ddef8  stfs 1, 128(31)
  03ddefc  stfs 2, 132(31)
  03ddf00  stfs 3, 136(31)
  03ddf04  lfs 1, 72(30)
  03ddf08  lfs 2, 4(28)
  03ddf0c  bl 0x502578
  03ddf10  nop
  03ddf14  lfs 2, 152(31)
  03ddf18  bl 0x5025e0
  03ddf1c  nop
  03ddf20  lfs 4, 8(28)
  03ddf24  lfs 2, -3052(27)
  03ddf28  fmr 3, 1
  03ddf2c  lfs 1, 152(31)
  03ddf30  fmuls 4, 2, 4
  03ddf34  fcmpu 0, 3, 4
  03ddf38  cror 6, 0, 2
  03ddf3c  bt 6, 0x3ddf48
  03ddf40  fmr 3, 4
  03ddf44  b 0x3ddf68
  03ddf48  lis 3, 62
  03ddf4c  addi 3, 3, -8656
  03ddf50  lfs 4, 12(3)
  03ddf54  fmuls 2, 2, 4
  03ddf58  fcmpu 0, 3, 2
  03ddf5c  cror 6, 1, 2
  03ddf60  bt 6, 0x3ddf68
  03ddf64  fmr 3, 2
  03ddf68  fmr 2, 1
  03ddf6c  fmr 1, 3
  03ddf70  bl 0x502578
  03ddf74  nop
  03ddf78  stfs 1, 152(31)
  03ddf7c  ld 0, 192(1)
  03ddf80  mtlr 0
  03ddf84  ld 27, 136(1)
  03ddf88  ld 28, 144(1)
  03ddf8c  ld 29, 152(1)
  03ddf90  ld 30, 160(1)
  03ddf94  ld 31, 168(1)
  03ddf98  addi 1, 1, 176
  03ddf9c  blr

UpdateMoby_615:   # 0x3ddfd0, 0xb4c bytes
  03ddfd0  stdu 1, -240(1)
  03ddfd4  mflr 0
  03ddfd8  std 0, 256(1)
  03ddfdc  stfd 31, 232(1)
  03ddfe0  std 30, 216(1)
  03ddfe4  std 31, 224(1)
  03ddfe8  lwz 30, 120(3)
  03ddfec  ori 31, 3, 0
  03ddff0  std 29, 208(1)
  03ddff4  std 28, 200(1)
  03ddff8  std 27, 192(1)
  03ddffc  std 26, 184(1)
  03de000  std 25, 176(1)
  03de004  std 24, 168(1)
  03de008  cmpwi 30, 0
  03de00c  bt 2, 0x3deae8
  03de010  lbz 3, 32(31)
  03de014  cmpwi 3, 1
  03de018  cmpwi 1, 3, -1
  03de01c  cmpwi 6, 3, 0
  03de020  cmpwi 7, 3, 2
  03de024  bt 1, 0x3de034
  03de028  bf 5, 0x3dead8
  03de02c  bf 25, 0x3de044
  03de030  b 0x3de108
  03de034  bf 29, 0x3de2cc
  03de038  cmpwi 3, 3
  03de03c  bf 1, 0x3dea18
  03de040  b 0x3dead8
  03de044  li 3, 0
  03de048  li 5, 1
  03de04c  lis 6, 269
  03de050  lis 4, 16776
  03de054  sth 3, 18(30)
  03de058  lis 8, 133
  03de05c  addic 3, 6, -20496
  03de060  stb 5, 32(31)
  03de064  lis 5, -15992
  03de068  lwz 7, 236(30)
  03de06c  stw 4, -20496(6)
  03de070  stw 4, 4(3)
  03de074  stw 4, 16(3)
  03de078  stw 5, 20(3)
  03de07c  stw 5, 32(3)
  03de080  stw 4, 36(3)
  03de084  stw 5, 48(3)
  03de088  stw 5, 52(3)
  03de08c  stw 7, 15216(8)
  03de090  lbz 3, 176(31)
  03de094  cmpwi 3, 255
  03de098  bt 2, 0x3dead8
  03de09c  lis 3, 165
  03de0a0  addic 5, 3, 17860
  03de0a4  lhz 3, 178(31)
  03de0a8  extsh 4, 3
  03de0ac  lbzx 5, 5, 4
  03de0b0  cmpwi 5, 0
  03de0b4  bf 2, 0x3de0fc
  03de0b8  lis 6, 151
  03de0bc  lis 5, 161
  03de0c0  srawi 4, 4, 5
  03de0c4  addic 5, 5, -13028
  03de0c8  sldi 4, 4, 2
  03de0cc  lwz 6, -25488(6)
  03de0d0  clrlwi 3, 3, 27
  03de0d4  addc 4, 4, 5
  03de0d8  slwi 5, 6, 8
  03de0dc  clrldi 4, 4, 32
  03de0e0  extsw 5, 5
  03de0e4  li 6, 1
  03de0e8  slw 3, 6, 3
  03de0ec  lwzx 4, 4, 5
  03de0f0  and 3, 4, 3
  03de0f4  cmpwi 3, 0
  03de0f8  bt 2, 0x3dead8
  03de0fc  li 3, 4
  03de100  stb 3, 32(31)
  03de104  b 0x3dead8
  03de108  lis 29, 151
  03de10c  addic 29, 29, -25376
  03de110  lwz 3, 764(29)
  03de114  cmpw 3, 31
  03de118  bf 2, 0x3de2b4
  03de11c  lhz 3, 782(29)
  03de120  cmpwi 3, 0
  03de124  bf 2, 0x3de2b4
  03de128  lhz 3, 18(30)
  03de12c  cmpwi 3, 0
  03de130  bf 2, 0x3de150
  03de134  li 6, 1
  03de138  li 3, 3
  03de13c  li 4, 0
  03de140  ori 5, 31, 0
  03de144  sth 6, 18(30)
  03de148  bl 0x15d12c
  03de14c  nop
  03de150  lwz 3, 4240(29)
  03de154  cmpwi 3, 0
  03de158  bt 2, 0x3de178
  03de15c  lwz 4, 4280(29)
  03de160  cmpwi 4, 26
  03de164  bf 2, 0x3de178
  03de168  lis 5, 133
  03de16c  li 4, 1
  03de170  lwz 5, 15104(5)
  03de174  b 0x3de184
  03de178  lis 5, 133
  03de17c  li 4, 0
  03de180  lwz 5, 15108(5)
  03de184  cmpwi 4, 0
  03de188  stw 5, 144(31)
  03de18c  bt 2, 0x3dead8
  03de190  lbz 3, 188(3)
  03de194  cmpwi 3, 0
  03de198  bt 2, 0x3dead8
  03de19c  lis 3, 62
  03de1a0  vspltisw 2, -1
  03de1a4  lis 29, 114
  03de1a8  addi 28, 3, -8288
  03de1ac  li 27, -3056
  03de1b0  vslw 2, 2, 2
  03de1b4  li 26, 16
  03de1b8  lvlx 3, 0, 28
  03de1bc  lvlx 4, 27, 29
  03de1c0  vspltw 3, 3, 0
  03de1c4  li 25, 0
  03de1c8  li 3, 114
  03de1cc  vmaddfp 2, 4, 3, 2
  03de1d0  li 4, 0
  03de1d4  vctsxs 2, 2, 0
  03de1d8  vsplth 2, 2, 1
  03de1dc  stvehx 2, 26, 30
  03de1e0  sth 25, 284(30)
  03de1e4  sth 25, 286(30)
  03de1e8  bl 0xb72b0
  03de1ec  nop
  03de1f0  lfs 1, 4(28)
  03de1f4  lfs 2, -3056(29)
  03de1f8  li 3, 87
  03de1fc  li 4, 0
  03de200  fmuls 1, 2, 1
  03de204  fctidz 1, 1
  03de208  fcfid 1, 1
  03de20c  frsp 1, 1
  03de210  bl 0x85300
  03de214  nop
  03de218  lis 3, 149
  03de21c  li 5, 1
  03de220  addic 24, 3, 5056
  03de224  li 6, 0
  03de228  addic 3, 24, 320
  03de22c  li 7, 0
  03de230  addic 4, 24, 336
  03de234  bl 0x47f74
  03de238  nop
  03de23c  li 3, 2
  03de240  vspltisw 2, -1
  03de244  li 4, 8
  03de248  stb 3, 32(31)
  03de24c  lvlx 3, 27, 29
  03de250  lvlx 4, 4, 28
  03de254  vslw 2, 2, 2
  03de258  vspltw 4, 4, 0
  03de25c  vmaddfp 2, 3, 4, 2
  03de260  vctsxs 2, 2, 0
  03de264  vsplth 2, 2, 1
  03de268  stvehx 2, 26, 30
  03de26c  stw 25, 272(30)
  03de270  lfs 1, 320(24)
  03de274  stfs 1, 240(30)
  03de278  lfs 1, 324(24)
  03de27c  stfs 1, 244(30)
  03de280  lfs 1, 328(24)
  03de284  stfs 1, 248(30)
  03de288  lfs 1, 332(24)
  03de28c  stfs 1, 252(30)
  03de290  lfs 1, 336(24)
  03de294  stfs 1, 256(30)
  03de298  lfs 1, 340(24)
  03de29c  stfs 1, 260(30)
  03de2a0  lfs 1, 344(24)
  03de2a4  stfs 1, 264(30)
  03de2a8  lfs 1, 348(24)
  03de2ac  stfs 1, 268(30)
  03de2b0  b 0x3dead8
  03de2b4  lis 3, 133
  03de2b8  li 4, 0
  03de2bc  lwz 3, 15112(3)
  03de2c0  sth 4, 18(30)
  03de2c4  stw 3, 144(31)
  03de2c8  b 0x3dead8
  03de2cc  addic 29, 1, 144
  03de2d0  ori 3, 31, 0
  03de2d4  li 4, 0
  03de2d8  ori 5, 29, 0
  03de2dc  bl 0xf1114
  03de2e0  nop
  03de2e4  lis 28, 151
  03de2e8  lfs 1, 144(1)
  03de2ec  lfs 2, 148(1)
  03de2f0  lis 26, 114
  03de2f4  addic 28, 28, -25376
  03de2f8  lfs 3, 152(1)
  03de2fc  lis 3, 62
  03de300  addi 27, 3, -8288
  03de304  ori 3, 29, 0
  03de308  lfs 4, 128(28)
  03de30c  lfs 5, 132(28)
  03de310  fsubs 1, 1, 4
  03de314  lfs 4, 136(28)
  03de318  fsubs 2, 2, 5
  03de31c  fsubs 3, 3, 4
  03de320  lfs 4, -3052(26)
  03de324  stfs 1, 144(1)
  03de328  stfs 2, 148(1)
  03de32c  stfs 3, 152(1)
  03de330  lfs 1, 12(27)
  03de334  fmuls 1, 4, 1
  03de338  bl 0x110488
  03de33c  nop
  03de340  lfs 1, 128(28)
  03de344  lfs 2, 144(1)
  03de348  lfs 3, 132(28)
  03de34c  fadds 1, 1, 2
  03de350  lfs 2, 148(1)
  03de354  lfs 4, 136(28)
  03de358  fadds 2, 3, 2
  03de35c  lfs 3, 152(1)
  03de360  fadds 3, 4, 3
  03de364  stfs 1, 128(28)
  03de368  stfs 2, 132(28)
  03de36c  stfs 3, 136(28)
  03de370  lfs 1, 72(31)
  03de374  lfs 2, 16(27)
  03de378  bl 0x502578
  03de37c  nop
  03de380  lfs 2, 152(28)
  03de384  bl 0x5025e0
  03de388  nop
  03de38c  lfs 31, 20(27)
  03de390  lfs 2, -3052(26)
  03de394  lfs 4, 152(28)
  03de398  fmuls 3, 2, 31
  03de39c  fcmpu 0, 1, 3
  03de3a0  cror 6, 0, 2
  03de3a4  bt 6, 0x3de3b0
  03de3a8  fmr 1, 3
  03de3ac  b 0x3de3d0
  03de3b0  lis 3, 62
  03de3b4  addi 3, 3, -8288
  03de3b8  lfs 3, 24(3)
  03de3bc  fmuls 2, 2, 3
  03de3c0  fcmpu 0, 1, 2
  03de3c4  cror 6, 1, 2
  03de3c8  bt 6, 0x3de3d0
  03de3cc  fmr 1, 2
  03de3d0  fmr 2, 4
  03de3d4  bl 0x502578
  03de3d8  nop
  03de3dc  addic 29, 1, 112
  03de3e0  stfs 1, 152(28)
  03de3e4  addic 27, 1, 128
  03de3e8  ori 3, 29, 0
  03de3ec  ori 4, 27, 0
  03de3f0  ori 5, 31, 0
  03de3f4  bl 0x3dda00
  03de3f8  lis 3, 62
  03de3fc  lis 5, 114
  03de400  addi 4, 3, -8288
  03de404  addic 3, 30, 272
  03de408  lfs 4, 32(4)
  03de40c  lfs 2, -3048(5)
  03de410  lfs 1, 28(4)
  03de414  addic 5, 30, 276
  03de418  fmuls 2, 2, 4
  03de41c  lis 4, 114
  03de420  lfs 3, -3052(4)
  03de424  fmuls 4, 3, 4
  03de428  fmr 3, 2
  03de42c  bl 0x109c30
  03de430  nop
  03de434  lfs 1, 112(1)
  03de438  lfs 2, 240(30)
  03de43c  lfs 3, 272(30)
  03de440  fsubs 1, 1, 2
  03de444  lfs 4, 116(1)
  03de448  lfs 5, 244(30)
  03de44c  fsubs 4, 4, 5
  03de450  lfs 5, 248(30)
  03de454  lfs 6, 120(1)
  03de458  fsubs 5, 6, 5
  03de45c  fmadds 2, 3, 1, 2
  03de460  lfs 1, 136(1)
  03de464  stfs 2, 112(1)
  03de468  lfs 2, 244(30)
  03de46c  fmadds 2, 3, 4, 2
  03de470  stfs 2, 116(1)
  03de474  lfs 2, 248(30)
  03de478  fmadds 2, 3, 5, 2
  03de47c  stfs 2, 120(1)
  03de480  lfs 2, 264(30)
  03de484  bl 0x5025e0
  03de488  nop
  03de48c  lfs 2, 272(30)
  03de490  lfs 3, 264(30)
  03de494  fmuls 1, 1, 2
  03de498  fmr 2, 3
  03de49c  bl 0x502578
  03de4a0  nop
  03de4a4  stfs 1, 136(1)
  03de4a8  lfs 1, 132(1)
  03de4ac  lfs 2, 260(30)
  03de4b0  bl 0x5025e0
  03de4b4  nop
  03de4b8  lfs 2, 272(30)
  03de4bc  lfs 3, 260(30)
  03de4c0  fmuls 1, 1, 2
  03de4c4  fmr 2, 3
  03de4c8  bl 0x502578
  03de4cc  nop
  03de4d0  ori 3, 29, 0
  03de4d4  stfs 1, 132(1)
  03de4d8  bl 0x47b98
  03de4dc  nop
  03de4e0  ori 3, 27, 0
  03de4e4  bl 0x47c08
  03de4e8  nop
  03de4ec  lis 3, 162
  03de4f0  li 5, 1
  03de4f4  addic 6, 3, -16448
  03de4f8  li 3, 6
  03de4fc  li 4, 0
  03de500  stw 5, 40(6)
  03de504  bl 0x11afac
  03de508  nop
  03de50c  lis 27, 149
  03de510  addic 27, 27, 5056
  03de514  lwz 3, 384(27)
  03de518  cmpwi 3, 0
  03de51c  bt 2, 0x3de548
  03de520  lhz 3, 134(3)
  03de524  cmpwi 3, 5
  03de528  bt 2, 0x3de548
  03de52c  addic 3, 27, 320
  03de530  addic 4, 27, 336
  03de534  li 5, 1
  03de538  li 6, 0
  03de53c  li 7, 0
  03de540  bl 0x47f74
  03de544  nop
  03de548  lwz 4, 272(30)
  03de54c  lis 3, 16253
  03de550  li 29, 0
  03de554  srawi 5, 4, 31
  03de558  ori 3, 3, 28836
  03de55c  srwi 6, 5, 1
  03de560  ori 26, 29, 0
  03de564  xor 4, 6, 4
  03de568  subc 4, 4, 5
  03de56c  cmpw 4, 3
  03de570  bt 0, 0x3de918
  03de574  lfs 1, 344(27)
  03de578  lfs 2, 136(1)
  03de57c  bl 0x5026a0
  03de580  nop
  03de584  lis 3, 62
  03de588  addi 3, 3, -8288
  03de58c  lfs 2, 36(3)
  03de590  fcmpu 0, 1, 2
  03de594  cror 6, 1, 2
  03de598  bt 6, 0x3de918
  03de59c  lis 3, 113
  03de5a0  ori 4, 31, 0
  03de5a4  addic 3, 3, -9856
  03de5a8  bl 0x6d720
  03de5ac  nop
  03de5b0  lis 5, 114
  03de5b4  lwz 4, 228(30)
  03de5b8  lfs 1, 228(30)
  03de5bc  ori 3, 30, 0
  03de5c0  lfs 2, -3052(5)
  03de5c4  lwz 5, 176(3)
  03de5c8  cmpwi 5, 1
  03de5cc  bt 2, 0x3de5e0
  03de5d0  addic 29, 29, 1
  03de5d4  addic 3, 3, 4
  03de5d8  cmpwi 29, 12
  03de5dc  bt 0, 0x3de5c4
  03de5e0  cmpwi 4, 0
  03de5e4  bf 1, 0x3de6d0
  03de5e8  fmuls 2, 2, 31
  03de5ec  bl 0x502578
  03de5f0  nop
  03de5f4  lis 3, 62
  03de5f8  stfs 1, 228(30)
  03de5fc  addi 3, 3, -8288
  03de600  lfs 2, 40(3)
  03de604  fcmpu 0, 1, 2
  03de608  cror 6, 0, 2
  03de60c  bt 6, 0x3de960
  03de610  lwz 3, 224(30)
  03de614  stw 26, 228(30)
  03de618  cmpwi 3, 1
  03de61c  cmpwi 1, 3, 2
  03de620  bf 2, 0x3de65c
  03de624  lis 3, 10922
  03de628  lwz 4, 20(30)
  03de62c  ori 3, 3, 43691
  03de630  addic 4, 4, 11
  03de634  mulhw 3, 3, 4
  03de638  srawi 3, 3, 1
  03de63c  srwi 5, 3, 31
  03de640  addc 3, 3, 5
  03de644  addc 5, 3, 3
  03de648  addc 3, 3, 5
  03de64c  sldi 3, 3, 2
  03de650  subc 3, 4, 3
  03de654  stw 3, 20(30)
  03de658  b 0x3de960
  03de65c  bf 6, 0x3de698
  03de660  lis 3, 10922
  03de664  lwz 4, 24(30)
  03de668  ori 3, 3, 43691
  03de66c  addic 4, 4, 11
  03de670  mulhw 3, 3, 4
  03de674  srawi 3, 3, 1
  03de678  srwi 5, 3, 31
  03de67c  addc 3, 3, 5
  03de680  addc 5, 3, 3
  03de684  addc 3, 3, 5
  03de688  sldi 3, 3, 2
  03de68c  subc 3, 4, 3
  03de690  stw 3, 24(30)
  03de694  b 0x3de960
  03de698  lis 3, 10922
  03de69c  lwz 4, 28(30)
  03de6a0  ori 3, 3, 43691
  03de6a4  addic 4, 4, 11
  03de6a8  mulhw 3, 3, 4
  03de6ac  srawi 3, 3, 1
  03de6b0  srwi 5, 3, 31
  03de6b4  addc 3, 3, 5
  03de6b8  addc 5, 3, 3
  03de6bc  addc 3, 3, 5
  03de6c0  sldi 3, 3, 2
  03de6c4  subc 3, 4, 3
  03de6c8  stw 3, 28(30)
  03de6cc  b 0x3de960
  03de6d0  cmpwi 4, 0
  03de6d4  cmpwi 1, 29, 12
  03de6d8  bf 0, 0x3de7c8
  03de6dc  lis 3, 62
  03de6e0  addi 27, 3, -8288
  03de6e4  lfs 3, 24(27)
  03de6e8  fmuls 2, 2, 3
  03de6ec  bl 0x502578
  03de6f0  nop
  03de6f4  stfs 1, 228(30)
  03de6f8  lfs 2, 44(27)
  03de6fc  fcmpu 0, 1, 2
  03de700  cror 6, 1, 2
  03de704  bt 6, 0x3de960
  03de708  lwz 3, 224(30)
  03de70c  stw 26, 228(30)
  03de710  cmpwi 3, 1
  03de714  cmpwi 1, 3, 2
  03de718  bf 2, 0x3de754
  03de71c  lis 3, 10922
  03de720  lwz 4, 20(30)
  03de724  ori 3, 3, 43691
  03de728  addic 4, 4, 13
  03de72c  mulhw 3, 3, 4
  03de730  srawi 3, 3, 1
  03de734  srwi 5, 3, 31
  03de738  addc 3, 3, 5
  03de73c  addc 5, 3, 3
  03de740  addc 3, 3, 5
  03de744  sldi 3, 3, 2
  03de748  subc 3, 4, 3
  03de74c  stw 3, 20(30)
  03de750  b 0x3de960
  03de754  bf 6, 0x3de790
  03de758  lis 3, 10922
  03de75c  lwz 4, 24(30)
  03de760  ori 3, 3, 43691
  03de764  addic 4, 4, 13
  03de768  mulhw 3, 3, 4
  03de76c  srawi 3, 3, 1
  03de770  srwi 5, 3, 31
  03de774  addc 3, 3, 5
  03de778  addc 5, 3, 3
  03de77c  addc 3, 3, 5
  03de780  sldi 3, 3, 2
  03de784  subc 3, 4, 3
  03de788  stw 3, 24(30)
  03de78c  b 0x3de960
  03de790  lis 3, 10922
  03de794  lwz 4, 28(30)
  03de798  ori 3, 3, 43691
  03de79c  addic 4, 4, 13
  03de7a0  mulhw 3, 3, 4
  03de7a4  srawi 3, 3, 1
  03de7a8  srwi 5, 3, 31
  03de7ac  addc 3, 3, 5
  03de7b0  addc 5, 3, 3
  03de7b4  addc 3, 3, 5
  03de7b8  sldi 3, 3, 2
  03de7bc  subc 3, 4, 3
  03de7c0  stw 3, 28(30)
  03de7c4  b 0x3de960
  03de7c8  bf 6, 0x3de7ec
  03de7cc  addic 3, 30, 16
  03de7d0  bl 0x4fffb4
  03de7d4  nop
  03de7d8  cmpwi 3, 0
  03de7dc  bt 2, 0x3de960
  03de7e0  li 3, 3
  03de7e4  stb 3, 32(31)
  03de7e8  b 0x3de960
  03de7ec  lis 27, 150
  03de7f0  addic 27, 27, 19008
  03de7f4  lwz 3, 196(27)
  03de7f8  rlwinm 4, 3, 0, 16, 16
  03de7fc  cmpwi 4, 0
  03de800  bf 2, 0x3de810
  03de804  rlwinm 3, 3, 0, 18, 18
  03de808  cmpwi 3, 0
  03de80c  bt 2, 0x3de86c
  03de810  lhz 6, 286(30)
  03de814  li 3, 0
  03de818  li 4, 0
  03de81c  ori 6, 6, 1
  03de820  ori 5, 31, 0
  03de824  sth 6, 286(30)
  03de828  bl 0x15d12c
  03de82c  nop
  03de830  lwz 3, 196(27)
  03de834  rlwinm 3, 3, 0, 16, 16
  03de838  cmpwi 3, 0
  03de83c  bt 2, 0x3de858
  03de840  lis 3, 62
  03de844  lis 4, 114
  03de848  addi 3, 3, -8288
  03de84c  lfs 1, -3052(4)
  03de850  lfs 31, 24(3)
  03de854  b 0x3de860
  03de858  lis 3, 114
  03de85c  lfs 1, -3052(3)
  03de860  fmuls 1, 1, 31
  03de864  stfs 1, 228(30)
  03de868  b 0x3de960
  03de86c  lwz 27, 164(27)
  03de870  rlwinm 3, 27, 0, 19, 19
  03de874  cmpwi 3, 0
  03de878  bt 2, 0x3de8c4
  03de87c  lhz 3, 286(30)
  03de880  lwz 4, 224(30)
  03de884  ori 5, 3, 2
  03de888  addic 3, 4, -1
  03de88c  cmpwi 3, 0
  03de890  sth 5, 286(30)
  03de894  bf 2, 0x3de8a4
  03de898  li 3, 1
  03de89c  stw 3, 224(30)
  03de8a0  b 0x3de960
  03de8a4  ori 6, 3, 0
  03de8a8  li 3, 1
  03de8ac  li 4, 0
  03de8b0  ori 5, 31, 0
  03de8b4  stw 6, 224(30)
  03de8b8  bl 0x15d12c
  03de8bc  nop
  03de8c0  b 0x3de960
  03de8c4  rlwinm 3, 27, 0, 17, 17
  03de8c8  cmpwi 3, 0
  03de8cc  bt 2, 0x3de960
  03de8d0  lhz 3, 286(30)
  03de8d4  lwz 4, 224(30)
  03de8d8  ori 5, 3, 2
  03de8dc  addic 3, 4, 1
  03de8e0  cmpwi 3, 4
  03de8e4  sth 5, 286(30)
  03de8e8  bf 2, 0x3de8f8
  03de8ec  li 3, 3
  03de8f0  stw 3, 224(30)
  03de8f4  b 0x3de960
  03de8f8  ori 6, 3, 0
  03de8fc  li 3, 1
  03de900  li 4, 0
  03de904  ori 5, 31, 0
  03de908  stw 6, 224(30)
  03de90c  bl 0x15d12c
  03de910  nop
  03de914  b 0x3de960
  03de918  lwz 3, 2712(28)
  03de91c  rlwinm 3, 3, 0, 30, 30
  03de920  cmpwi 3, 0
  03de924  bt 2, 0x3de968
  03de928  lis 3, 62
  03de92c  lis 4, 114
  03de930  addi 3, 3, -8288
  03de934  lfs 1, 4(3)
  03de938  lfs 2, -3056(4)
  03de93c  li 3, 88
  03de940  li 4, 0
  03de944  fmuls 1, 2, 1
  03de948  fctidz 1, 1
  03de94c  fcfid 1, 1
  03de950  frsp 1, 1
  03de954  bl 0x85300
  03de958  nop
  03de95c  b 0x3de968
  03de960  cmpwi 29, 12
  03de964  bt 2, 0x3dead8
  03de968  lis 3, 150
  03de96c  addic 3, 3, 19008
  03de970  lwz 3, 164(3)
  03de974  rlwinm 3, 3, 0, 27, 27
  03de978  cmpwi 3, 0
  03de97c  bt 2, 0x3de9a4
  03de980  lis 3, 114
  03de984  lwz 3, 2180(3)
  03de988  cmpwi 3, 0
  03de98c  bf 2, 0x3de9a4
  03de990  lis 3, 114
  03de994  addic 3, 3, 2180
  03de998  lwz 3, 36(3)
  03de99c  cmpwi 3, -1
  03de9a0  bt 2, 0x3de9bc
  03de9a4  lwz 3, 8324(28)
  03de9a8  cmpwi 3, 114
  03de9ac  bf 2, 0x3de9bc
  03de9b0  lwz 3, 4280(28)
  03de9b4  cmpwi 3, 26
  03de9b8  bt 2, 0x3dead8
  03de9bc  li 4, 1
  03de9c0  li 3, 1
  03de9c4  stb 4, 32(31)
  03de9c8  bl 0x481d0
  03de9cc  nop
  03de9d0  bl 0xa2560
  03de9d4  nop
  03de9d8  lis 3, 62
  03de9dc  vspltisw 2, -1
  03de9e0  li 5, 8
  03de9e4  addi 3, 3, -8288
  03de9e8  lis 4, 114
  03de9ec  li 6, -3056
  03de9f0  vslw 2, 2, 2
  03de9f4  lvlx 3, 5, 3
  03de9f8  li 3, 16
  03de9fc  vspltw 3, 3, 0
  03dea00  lvlx 4, 6, 4
  03dea04  vmaddfp 2, 4, 3, 2
  03dea08  vctsxs 2, 2, 0
  03dea0c  vsplth 2, 2, 1
  03dea10  stvehx 2, 3, 30
  03dea14  b 0x3dead8
  03dea18  lis 3, 151
  03dea1c  addic 3, 3, -25376
  03dea20  lwz 3, 2712(3)
  03dea24  rlwinm 3, 3, 0, 30, 30
  03dea28  cmpwi 3, 0
  03dea2c  bt 2, 0x3dead8
  03dea30  lbz 3, 176(31)
  03dea34  cmpwi 3, 255
  03dea38  bt 2, 0x3deaac
  03dea3c  lhz 5, 178(31)
  03dea40  lis 4, 151
  03dea44  extsh 6, 5
  03dea48  lis 3, 161
  03dea4c  srawi 6, 6, 5
  03dea50  addic 3, 3, -13028
  03dea54  lwz 4, -25488(4)
  03dea58  sldi 6, 6, 2
  03dea5c  slwi 4, 4, 8
  03dea60  addc 3, 6, 3
  03dea64  extsw 4, 4
  03dea68  clrldi 3, 3, 32
  03dea6c  extsh 6, 5
  03dea70  lis 7, 165
  03dea74  clrlwi 8, 5, 27
  03dea78  srawi 6, 6, 5
  03dea7c  li 9, 1
  03dea80  addic 7, 7, 19920
  03dea84  lwzx 10, 3, 4
  03dea88  sldi 6, 6, 2
  03dea8c  slw 8, 9, 8
  03dea90  clrlwi 5, 5, 27
  03dea94  or 8, 10, 8
  03dea98  slw 5, 9, 5
  03dea9c  lwzx 9, 7, 6
  03deaa0  stwx 8, 3, 4
  03deaa4  or 3, 9, 5
  03deaa8  stwx 3, 7, 6
  03deaac  li 3, 1
  03deab0  bl 0x481d0
  03deab4  nop
  03deab8  li 3, 0
  03deabc  li 4, 1
  03deac0  bl 0xb72b0
  03deac4  nop
  03deac8  li 3, 4
  03deacc  li 4, 1
  03dead0  stb 3, 32(31)
  03dead4  stb 4, 188(31)
  03dead8  ori 3, 31, 0
  03deadc  ori 4, 30, 0
  03deae0  bl 0x10c9a0
  03deae4  nop
  03deae8  ld 0, 256(1)
  03deaec  mtlr 0
  03deaf0  lfd 31, 232(1)
  03deaf4  ld 24, 168(1)
  03deaf8  ld 25, 176(1)
  03deafc  ld 26, 184(1)
  03deb00  ld 27, 192(1)
  03deb04  ld 28, 200(1)
  03deb08  ld 29, 208(1)
  03deb0c  ld 30, 216(1)
  03deb10  ld 31, 224(1)
  03deb14  addi 1, 1, 240
  03deb18  blr
