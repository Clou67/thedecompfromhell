# sdk/libcgc/libcgc_cell_localize.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Z12read_uleb128PKhPy:   # 0x5ddc68, 0x38 bytes
  05ddc68  li 11, 0
  05ddc6c  li 10, 0
  05ddc70  lbz 0, 0(3)
  05ddc74  addi 3, 3, 1
  05ddc78  extsb 9, 0
  05ddc7c  clrldi 0, 0, 57
  05ddc80  cmpwi 7, 9, 0
  05ddc84  sld 0, 0, 11
  05ddc88  addi 11, 11, 7
  05ddc8c  or 10, 10, 0
  05ddc90  bt 28, 0x5ddc70
  05ddc94  clrldi 3, 3, 32
  05ddc98  std 10, 0(4)
  05ddc9c  blr

FUN_005ddca0:   # 0x5ddca0, 0x58 bytes
  05ddca0  li 10, 0
  05ddca4  li 8, 0
  05ddca8  lbz 11, 0(3)
  05ddcac  addi 3, 3, 1
  05ddcb0  extsb 0, 11
  05ddcb4  clrldi 9, 11, 57
  05ddcb8  cmpwi 7, 0, 0
  05ddcbc  sld 9, 9, 10
  05ddcc0  addi 10, 10, 7
  05ddcc4  or 8, 8, 9
  05ddcc8  bt 28, 0x5ddca8
  05ddccc  cmplwi 7, 10, 63
  05ddcd0  bt 29, 0x5ddcec
  05ddcd4  rlwinm 0, 11, 0, 25, 25
  05ddcd8  cmpwi 7, 0, 0
  05ddcdc  bt 30, 0x5ddcec
  05ddce0  li 0, -1
  05ddce4  sld 0, 0, 10
  05ddce8  or 8, 8, 0
  05ddcec  clrldi 3, 3, 32
  05ddcf0  std 8, 0(4)
  05ddcf4  blr

FUN_005ddcf8:   # 0x5ddcf8, 0x8 bytes
  05ddcf8  lwz 3, 584(3)
  05ddcfc  blr

FUN_005ddd00:   # 0x5ddd00, 0x8 bytes
  05ddd00  lwz 3, 588(3)
  05ddd04  blr

FUN_005ddd08:   # 0x5ddd08, 0x8 bytes
  05ddd08  stw 4, 588(3)
  05ddd0c  blr

FUN_005ddd10:   # 0x5ddd10, 0x8 bytes
  05ddd10  lwz 3, 592(3)
  05ddd14  blr

FUN_005ddd18:   # 0x5ddd18, 0x8 bytes
  05ddd18  lwz 3, 604(3)
  05ddd1c  blr

FUN_005ddd20:   # 0x5ddd20, 0x8 bytes
  05ddd20  lwz 3, 600(3)
  05ddd24  blr

FUN_005ddd28:   # 0x5ddd28, 0x8 bytes
  05ddd28  lwz 3, 596(3)
  05ddd2c  blr

FUN_005ddd30:   # 0x5ddd30, 0x50 bytes
  05ddd30  mr 9, 3
  05ddd34  mflr 0
  05ddd38  stdu 1, -112(1)
  05ddd3c  std 0, 128(1)
  05ddd40  mr 4, 9
  05ddd44  li 3, 1
  05ddd48  lwz 0, 8(9)
  05ddd4c  cmpwi 7, 0, 0
  05ddd50  clrldi 9, 0, 32
  05ddd54  bt 30, 0x5ddd70
  05ddd58  lwz 0, 0(9)
  05ddd5c  std 2, 40(1)
  05ddd60  mtctr 0
  05ddd64  lwz 2, 4(9)
  05ddd68  bctrl
  05ddd6c  ld 2, 40(1)
  05ddd70  ld 0, 128(1)
  05ddd74  addi 1, 1, 112
  05ddd78  mtlr 0
  05ddd7c  blr

FUN_005ddd80:   # 0x5ddd80, 0x80 bytes
  05ddd80  cmpwi 7, 4, 1200
  05ddd84  mflr 0
  05ddd88  stdu 1, -112(1)
  05ddd8c  std 0, 128(1)
  05ddd90  bf 29, 0x5ddd98
  05ddd94  addi 4, 4, -1087
  05ddd98  cmpwi 7, 4, 145
  05ddd9c  bt- 29, 0x5dddfc
  05ddda0  lwz 10, -23552(2)
  05ddda4  extsw 9, 4
  05ddda8  slwi 0, 4, 2
  05dddac  clrldi 11, 3, 32
  05dddb0  extsw 0, 0
  05dddb4  lbzx 10, 10, 9
  05dddb8  cmpwi 7, 10, 4
  05dddbc  lwzx 0, 11, 0
  05dddc0  bt 30, 0x5ddde4
  05dddc4  cmpwi 7, 10, 8
  05dddc8  bf- 30, 0x5dddfc
  05dddcc  clrldi 9, 0, 32
  05dddd0  ld 0, 128(1)
  05dddd4  addi 1, 1, 112
  05dddd8  mtlr 0
  05ddddc  std 5, 0(9)
  05ddde0  blr
  05ddde4  clrldi 9, 0, 32
  05ddde8  ld 0, 128(1)
  05dddec  addi 1, 1, 112
  05dddf0  mtlr 0
  05dddf4  stw 5, 0(9)
  05dddf8  blr
  05dddfc  bl 0x5c4840

FUN_005dde04:   # 0x5dde04, 0x80 bytes
  05dde04  cmpwi 7, 4, 1200
  05dde08  mflr 0
  05dde0c  stdu 1, -112(1)
  05dde10  std 0, 128(1)
  05dde14  bf 29, 0x5dde1c
  05dde18  addi 4, 4, -1087
  05dde1c  cmpwi 7, 4, 145
  05dde20  bt- 29, 0x5dde80
  05dde24  lwz 10, -23552(2)
  05dde28  extsw 9, 4
  05dde2c  slwi 0, 4, 2
  05dde30  clrldi 11, 3, 32
  05dde34  extsw 0, 0
  05dde38  lbzx 10, 10, 9
  05dde3c  cmpwi 7, 10, 4
  05dde40  lwzx 0, 11, 0
  05dde44  bt 30, 0x5dde68
  05dde48  cmpwi 7, 10, 8
  05dde4c  bf- 30, 0x5dde80
  05dde50  clrldi 9, 0, 32
  05dde54  ld 0, 128(1)
  05dde58  addi 1, 1, 112
  05dde5c  mtlr 0
  05dde60  ld 3, 0(9)
  05dde64  blr
  05dde68  clrldi 9, 0, 32
  05dde6c  ld 0, 128(1)
  05dde70  addi 1, 1, 112
  05dde74  mtlr 0
  05dde78  lwz 3, 0(9)
  05dde7c  blr
  05dde80  bl 0x5c4840

FUN_005dde88:   # 0x5dde88, 0xa8 bytes
  05dde88  stdu 1, -176(1)
  05dde8c  mflr 0
  05dde90  std 30, 160(1)
  05dde94  clrlwi 30, 3, 24
  05dde98  std 27, 136(1)
  05dde9c  cmpwi 7, 30, 80
  05ddea0  std 28, 144(1)
  05ddea4  std 29, 152(1)
  05ddea8  std 31, 168(1)
  05ddeac  std 0, 192(1)
  05ddeb0  mr 29, 3
  05ddeb4  mr 28, 6
  05ddeb8  mr 27, 4
  05ddebc  bt 30, 0x5ddf28
  05ddec0  clrlwi 0, 30, 28
  05ddec4  mr 31, 5
  05ddec8  cmplwi 7, 0, 12
  05ddecc  bf 29, 0x5dded8
  05dded0  bl 0x5c4840
  05dded4  nop
  05dded8  lwz 11, -23548(2)
  05ddedc  rlwinm 9, 0, 2, 26, 29
  05ddee0  lwzx 0, 9, 11
  05ddee4  extsw 0, 0
  05ddee8  add 0, 0, 11
  05ddeec  mtctr 0
  05ddef0  bctr
  05ddef4  <unknown>
  05ddef8  <unknown>
  05ddefc  <unknown>
  05ddf00  <unknown>
  05ddf04  <unknown>
  05ddf08  <unknown>
  05ddf0c  <unknown>
  05ddf10  <unknown>
  05ddf14  <unknown>
  05ddf18  <unknown>
  05ddf1c  <unknown>
  05ddf20  <unknown>
  05ddf24  <unknown>
  05ddf28  addi 9, 5, 3
  05ddf2c  rlwinm 9, 9, 0, 0, 29

FUN_005de08c:   # 0x5de08c, 0xac bytes
  05de08c  cmpwi 7, 3, 255
  05de090  mflr 0
  05de094  stdu 1, -112(1)
  05de098  std 0, 128(1)
  05de09c  bt 30, 0x5de0d8
  05de0a0  rlwinm 3, 3, 0, 25, 27
  05de0a4  cmpwi 7, 3, 32
  05de0a8  bt 30, 0x5de0f0
  05de0ac  bf 29, 0x5de0d0
  05de0b0  cmpwi 7, 3, 64
  05de0b4  bt 30, 0x5de11c
  05de0b8  cmpwi 7, 3, 80
  05de0bc  bt 30, 0x5de0d8
  05de0c0  cmpwi 7, 3, 48
  05de0c4  bt 30, 0x5de12c
  05de0c8  bl 0x5c4840
  05de0cc  nop
  05de0d0  cmpwi 7, 3, 0
  05de0d4  bf 30, 0x5de110
  05de0d8  li 3, 0
  05de0dc  ld 0, 128(1)
  05de0e0  clrldi 3, 3, 32
  05de0e4  addi 1, 1, 112
  05de0e8  mtlr 0
  05de0ec  blr
  05de0f0  clrldi 3, 4, 32
  05de0f4  bl 0x5ddd28
  05de0f8  nop
  05de0fc  ld 0, 128(1)
  05de100  clrldi 3, 3, 32
  05de104  mtlr 0
  05de108  addi 1, 1, 112
  05de10c  blr
  05de110  cmpwi 7, 3, 16
  05de114  bf 30, 0x5de0c8
  05de118  b 0x5de0d8
  05de11c  clrldi 3, 4, 32
  05de120  bl 0x5ddd18
  05de124  nop
  05de128  b 0x5de0dc
  05de12c  clrldi 3, 4, 32
  05de130  bl 0x5ddd20
  05de134  nop

FUN_005de13c:   # 0x5de13c, 0x1dc bytes
  05de13c  lwz 9, -23552(2)
  05de140  li 0, 8
  05de144  li 11, 16
  05de148  li 10, 4
  05de14c  stb 0, 0(9)
  05de150  stb 0, 1(9)
  05de154  stb 0, 2(9)
  05de158  stb 0, 3(9)
  05de15c  stb 0, 4(9)
  05de160  stb 0, 5(9)
  05de164  stb 0, 6(9)
  05de168  stb 0, 7(9)
  05de16c  stb 0, 8(9)
  05de170  stb 0, 9(9)
  05de174  stb 0, 10(9)
  05de178  stb 0, 11(9)
  05de17c  stb 0, 12(9)
  05de180  stb 0, 13(9)
  05de184  stb 0, 14(9)
  05de188  stb 0, 15(9)
  05de18c  stb 0, 16(9)
  05de190  stb 0, 17(9)
  05de194  stb 0, 18(9)
  05de198  stb 0, 19(9)
  05de19c  stb 0, 20(9)
  05de1a0  stb 0, 21(9)
  05de1a4  stb 0, 22(9)
  05de1a8  stb 0, 23(9)
  05de1ac  stb 0, 24(9)
  05de1b0  stb 0, 25(9)
  05de1b4  stb 0, 26(9)
  05de1b8  stb 0, 27(9)
  05de1bc  stb 0, 28(9)
  05de1c0  stb 0, 29(9)
  05de1c4  stb 0, 30(9)
  05de1c8  stb 0, 31(9)
  05de1cc  stb 0, 32(9)
  05de1d0  stb 0, 33(9)
  05de1d4  stb 0, 34(9)
  05de1d8  stb 0, 35(9)
  05de1dc  stb 0, 36(9)
  05de1e0  stb 0, 37(9)
  05de1e4  stb 0, 38(9)
  05de1e8  stb 0, 39(9)
  05de1ec  stb 0, 40(9)
  05de1f0  stb 0, 41(9)
  05de1f4  stb 0, 42(9)
  05de1f8  stb 0, 43(9)
  05de1fc  stb 0, 44(9)
  05de200  stb 0, 45(9)
  05de204  stb 0, 46(9)
  05de208  stb 0, 47(9)
  05de20c  stb 0, 48(9)
  05de210  stb 0, 49(9)
  05de214  stb 0, 50(9)
  05de218  stb 0, 51(9)
  05de21c  stb 0, 52(9)
  05de220  stb 0, 53(9)
  05de224  stb 0, 54(9)
  05de228  stb 0, 55(9)
  05de22c  stb 0, 56(9)
  05de230  stb 0, 57(9)
  05de234  stb 0, 58(9)
  05de238  stb 0, 59(9)
  05de23c  stb 0, 60(9)
  05de240  stb 0, 61(9)
  05de244  stb 0, 62(9)
  05de248  stb 0, 63(9)
  05de24c  stb 0, 64(9)
  05de250  stb 0, 65(9)
  05de254  stb 0, 66(9)
  05de258  stb 10, 76(9)
  05de25c  stb 0, 67(9)
  05de260  stb 10, 68(9)
  05de264  stb 10, 69(9)
  05de268  stb 10, 70(9)
  05de26c  stb 10, 71(9)
  05de270  stb 10, 72(9)
  05de274  stb 10, 73(9)
  05de278  stb 10, 74(9)
  05de27c  stb 10, 75(9)
  05de280  stb 11, 77(9)
  05de284  stb 11, 78(9)
  05de288  stb 11, 79(9)
  05de28c  stb 11, 80(9)
  05de290  stb 11, 81(9)
  05de294  stb 11, 82(9)
  05de298  stb 11, 83(9)
  05de29c  stb 11, 84(9)
  05de2a0  stb 11, 85(9)
  05de2a4  stb 11, 86(9)
  05de2a8  stb 11, 87(9)
  05de2ac  stb 11, 88(9)
  05de2b0  stb 11, 89(9)
  05de2b4  stb 11, 90(9)
  05de2b8  stb 11, 91(9)
  05de2bc  stb 11, 92(9)
  05de2c0  stb 11, 93(9)
  05de2c4  stb 11, 94(9)
  05de2c8  stb 11, 95(9)
  05de2cc  stb 11, 96(9)
  05de2d0  stb 11, 97(9)
  05de2d4  stb 11, 98(9)
  05de2d8  stb 11, 99(9)
  05de2dc  stb 11, 100(9)
  05de2e0  stb 0, 113(9)
  05de2e4  stb 11, 108(9)
  05de2e8  stb 11, 101(9)
  05de2ec  stb 11, 102(9)
  05de2f0  stb 11, 103(9)
  05de2f4  stb 11, 104(9)
  05de2f8  stb 11, 105(9)
  05de2fc  stb 11, 106(9)
  05de300  stb 11, 107(9)
  05de304  stb 0, 109(9)
  05de308  stb 0, 110(9)
  05de30c  stb 0, 111(9)
  05de310  stb 0, 112(9)
  05de314  blr

FUN_005de318:   # 0x5de318, 0x44 bytes
  05de318  addi 3, 3, -1
  05de31c  mflr 0
  05de320  stdu 1, -128(1)
  05de324  addi 4, 1, 112
  05de328  clrldi 3, 3, 32
  05de32c  std 0, 144(1)
  05de330  bl 0x5e2adc
  05de334  nop
  05de338  cmpwi 7, 3, 0
  05de33c  li 3, 0
  05de340  bt 30, 0x5de348
  05de344  lwz 3, 120(1)
  05de348  ld 0, 144(1)
  05de34c  clrldi 3, 3, 32
  05de350  addi 1, 1, 128
  05de354  mtlr 0
  05de358  blr

FUN_005de35c:   # 0x5de35c, 0x1f0 bytes
  05de35c  stdu 1, -240(1)
  05de360  mflr 0
  05de364  cmplw 7, 3, 4
  05de368  std 0, 256(1)
  05de36c  li 0, 0
  05de370  std 22, 160(1)
  05de374  std 24, 176(1)
  05de378  std 25, 184(1)
  05de37c  std 26, 192(1)
  05de380  std 27, 200(1)
  05de384  std 30, 224(1)
  05de388  std 31, 232(1)
  05de38c  std 23, 168(1)
  05de390  std 28, 208(1)
  05de394  std 29, 216(1)
  05de398  mr 31, 1
  05de39c  mr 27, 6
  05de3a0  mr 30, 3
  05de3a4  mr 24, 4
  05de3a8  mr 26, 5
  05de3ac  mr 22, 5
  05de3b0  stw 0, 2336(6)
  05de3b4  mr 25, 6
  05de3b8  bf 28, 0x5de568
  05de3bc  lwz 7, 2368(6)
  05de3c0  lwz 0, 588(5)
  05de3c4  cmplw 7, 0, 7
  05de3c8  bf 29, 0x5de568
  05de3cc  li 23, 0
  05de3d0  clrldi 9, 30, 32
  05de3d4  addi 30, 30, 1
  05de3d8  lbz 0, 0(9)
  05de3dc  clrlwi 9, 0, 24
  05de3e0  rlwinm 11, 9, 0, 24, 25
  05de3e4  cmpwi 7, 11, 64
  05de3e8  bt 30, 0x5de5ac
  05de3ec  cmpwi 7, 11, 128
  05de3f0  bt 30, 0x5de610
  05de3f4  cmpwi 7, 11, 192
  05de3f8  bt 30, 0x5de5c4
  05de3fc  cmplwi 7, 9, 47
  05de400  bt 29, 0x5de5a4
  05de404  lwz 11, -23544(2)
  05de408  rlwinm 9, 0, 2, 22, 29
  05de40c  lwzx 0, 9, 11
  05de410  extsw 0, 0
  05de414  add 0, 0, 11
  05de418  mtctr 0
  05de41c  bctr
  05de420  <unknown>
  05de424  <unknown>
  05de428  <unknown>
  05de42c  <unknown>
  05de430  <unknown>
  05de434  <unknown>
  05de438  <unknown>
  05de43c  <unknown>
  05de440  <unknown>
  05de444  <unknown>
  05de448  <unknown>
  05de44c  <unknown>
  05de450  <unknown>
  05de454  <unknown>
  05de458  <unknown>
  05de45c  <unknown>
  05de460  <unknown>
  05de464  <unknown>
  05de468  <unknown>
  05de46c  <unknown>
  05de470  <unknown>
  05de474  <unknown>
  05de478  <unknown>
  05de47c  <unknown>
  05de480  <unknown>
  05de484  <unknown>
  05de488  <unknown>
  05de48c  <unknown>
  05de490  <unknown>
  05de494  <unknown>
  05de498  <unknown>
  05de49c  <unknown>
  05de4a0  <unknown>
  05de4a4  <unknown>
  05de4a8  <unknown>
  05de4ac  <unknown>
  05de4b0  <unknown>
  05de4b4  <unknown>
  05de4b8  <unknown>
  05de4bc  <unknown>
  05de4c0  <unknown>
  05de4c4  <unknown>
  05de4c8  <unknown>
  05de4cc  <unknown>
  05de4d0  <unknown>
  05de4d4  <unknown>
  05de4d8  <unknown>
  05de4dc  <unknown>
  05de4e0  clrldi 3, 30, 32
  05de4e4  addi 4, 31, 120
  05de4e8  bl 0x5ddc68
  05de4ec  addi 4, 31, 136
  05de4f0  clrldi 3, 3, 32
  05de4f4  bl 0x5ddc68
  05de4f8  ld 8, 120(31)
  05de4fc  mr 30, 3
  05de500  ld 6, 2376(27)
  05de504  cmpldi 7, 8, 1200
  05de508  ld 11, 136(31)
  05de50c  clrldi 7, 25, 32
  05de510  mr 9, 8
  05de514  bf 29, 0x5de51c
  05de518  addi 9, 8, -1087
  05de51c  slwi 9, 9, 4
  05de520  li 0, 1
  05de524  extsw 9, 9
  05de528  mr 10, 8
  05de52c  add 9, 7, 9
  05de530  stw 0, 8(9)
  05de534  bf 29, 0x5de53c
  05de538  addi 10, 8, -1087
  05de53c  slwi 9, 10, 4
  05de540  mulld 0, 6, 11
  05de544  extsw 9, 9
  05de548  neg 0, 0

FUN_005deaa8:   # 0x5deaa8, 0x40c bytes
  05deaa8  stdu 1, -224(1)
  05deaac  mflr 0
  05deab0  std 28, 192(1)
  05deab4  mr 28, 4
  05deab8  std 26, 176(1)
  05deabc  mr 26, 3
  05deac0  std 21, 136(1)
  05deac4  clrldi 21, 28, 32
  05deac8  std 31, 216(1)
  05deacc  li 5, 2408
  05dead0  mr 31, 4
  05dead4  mr 3, 21
  05dead8  li 4, 0
  05deadc  std 27, 184(1)
  05deae0  std 0, 240(1)
  05deae4  std 20, 128(1)
  05deae8  std 22, 144(1)
  05deaec  std 23, 152(1)
  05deaf0  std 24, 160(1)
  05deaf4  std 25, 168(1)
  05deaf8  std 29, 200(1)
  05deafc  std 30, 208(1)
  05deb00  bl 0x5d0140
  05deb04  nop
  05deb08  lwz 3, 588(26)
  05deb0c  li 0, 0
  05deb10  cmpwi 7, 3, 0
  05deb14  mr 27, 26
  05deb18  stw 0, 592(26)
  05deb1c  std 0, 608(26)
  05deb20  bt 30, 0x5ded84
  05deb24  addi 3, 3, -1
  05deb28  addi 4, 26, 596
  05deb2c  clrldi 3, 3, 32
  05deb30  clrldi 4, 4, 32
  05deb34  bl 0x5e2adc
  05deb38  nop
  05deb3c  cmpwi 7, 3, 0
  05deb40  mr 22, 3
  05deb44  mr 23, 3
  05deb48  bt 30, 0x5ded84
  05deb4c  lwz 0, 4(3)
  05deb50  addi 11, 3, 4
  05deb54  lwz 9, 604(26)
  05deb58  sub 25, 11, 0
  05deb5c  stw 9, 2368(28)
  05deb60  addi 30, 25, 9
  05deb64  clrldi 29, 30, 32
  05deb68  mr 3, 29
  05deb6c  bl 0x5c8510
  05deb70  nop
  05deb74  lbz 0, 0(29)
  05deb78  add 9, 30, 3
  05deb7c  cmpwi 7, 0, 101
  05deb80  addi 3, 9, 1
  05deb84  bt 30, 0x5ded8c
  05deb88  addi 4, 31, 2384
  05deb8c  clrldi 3, 3, 32
  05deb90  clrldi 4, 4, 32
  05deb94  clrldi 20, 25, 32
  05deb98  bl 0x5ddc68
  05deb9c  addi 4, 31, 2376
  05deba0  clrldi 3, 3, 32
  05deba4  clrldi 4, 4, 32
  05deba8  bl 0x5ddca0
  05debac  lbz 0, 8(20)
  05debb0  cmpwi 7, 0, 1
  05debb4  bt 30, 0x5decb0
  05debb8  addi 4, 31, 2392
  05debbc  clrldi 3, 3, 32
  05debc0  clrldi 4, 4, 32
  05debc4  li 24, 0
  05debc8  bl 0x5ddc68
  05debcc  li 0, -1
  05debd0  mr 31, 3
  05debd4  stb 0, 2401(28)
  05debd8  lbz 9, 0(29)
  05debdc  cmpwi 7, 9, 122
  05debe0  bt 30, 0x5decd4
  05debe4  lbz 3, 0(29)
  05debe8  cmpwi 7, 3, 0
  05debec  bt 30, 0x5dec50
  05debf0  cmpwi 7, 3, 76
  05debf4  bt 30, 0x5ded00
  05debf8  cmpwi 7, 3, 82
  05debfc  bt 30, 0x5ded18
  05dec00  cmpwi 7, 3, 80
  05dec04  bf 30, 0x5ded34
  05dec08  lbz 29, 0(31)
  05dec0c  clrldi 4, 27, 32
  05dec10  addi 30, 30, 1
  05dec14  mr 3, 29
  05dec18  bl 0x5de08c
  05dec1c  addi 5, 31, 1
  05dec20  clrldi 4, 3, 32
  05dec24  clrldi 5, 5, 32
  05dec28  mr 3, 29
  05dec2c  addi 6, 1, 112
  05dec30  clrldi 29, 30, 32
  05dec34  bl 0x5dde88
  05dec38  lwz 0, 112(1)
  05dec3c  mr 31, 3
  05dec40  stw 0, 2372(28)
  05dec44  lbz 3, 0(29)
  05dec48  cmpwi 7, 3, 0
  05dec4c  bf 30, 0x5debf0
  05dec50  cmpwi 7, 24, 0
  05dec54  bt 30, 0x5ded30
  05dec58  lwz 4, 0(20)
  05dec5c  clrldi 27, 27, 32
  05dec60  clrldi 3, 24, 32
  05dec64  add 4, 25, 4
  05dec68  mr 5, 27
  05dec6c  addi 4, 4, 4
  05dec70  mr 6, 21
  05dec74  clrldi 4, 4, 32
  05dec78  bl 0x5de35c
  05dec7c  lbz 0, 2400(28)
  05dec80  cmpwi 7, 0, 255
  05dec84  bt 30, 0x5dedd8
  05dec88  clrlwi 0, 0, 29
  05dec8c  cmpwi 7, 0, 2
  05dec90  bt 30, 0x5deea0
  05dec94  bf 29, 0x5dee60
  05dec98  cmpwi 7, 0, 3
  05dec9c  bt 30, 0x5dee68
  05deca0  cmpwi 7, 0, 4
  05deca4  bt 30, 0x5deeb0
  05deca8  bl 0x5c4840
  05decac  nop
  05decb0  lbz 0, 0(3)
  05decb4  addi 31, 3, 1
  05decb8  li 24, 0
  05decbc  std 0, 2392(28)
  05decc0  li 0, -1
  05decc4  stb 0, 2401(28)
  05decc8  lbz 9, 0(29)
  05deccc  cmpwi 7, 9, 122
  05decd0  bf 30, 0x5debe4
  05decd4  clrldi 3, 31, 32
  05decd8  addi 4, 1, 120
  05decdc  addi 30, 30, 1
  05dece0  bl 0x5ddc68
  05dece4  ld 0, 120(1)
  05dece8  mr 31, 3
  05decec  add 24, 3, 0
  05decf0  clrldi 29, 30, 32
  05decf4  li 0, 1
  05decf8  stb 0, 2402(28)
  05decfc  b 0x5debe4
  05ded00  addi 30, 30, 1
  05ded04  lbz 0, 0(31)
  05ded08  addi 31, 31, 1
  05ded0c  clrldi 29, 30, 32
  05ded10  stb 0, 2401(28)
  05ded14  b 0x5debe4
  05ded18  addi 30, 30, 1
  05ded1c  lbz 0, 0(31)
  05ded20  addi 31, 31, 1
  05ded24  clrldi 29, 30, 32
  05ded28  stb 0, 2400(28)
  05ded2c  b 0x5debe4
  05ded30  mr 24, 31
  05ded34  cmpwi 7, 24, 0
  05ded38  li 3, 3
  05ded3c  bf 30, 0x5dec58
  05ded40  ld 0, 240(1)
  05ded44  clrldi 3, 3, 61
  05ded48  ld 20, 128(1)
  05ded4c  ld 21, 136(1)
  05ded50  mtlr 0
  05ded54  ld 22, 144(1)
  05ded58  ld 23, 152(1)
  05ded5c  ld 24, 160(1)
  05ded60  ld 25, 168(1)
  05ded64  ld 26, 176(1)
  05ded68  ld 27, 184(1)
  05ded6c  ld 28, 192(1)
  05ded70  ld 29, 200(1)
  05ded74  ld 30, 208(1)
  05ded78  ld 31, 216(1)
  05ded7c  addi 1, 1, 224
  05ded80  blr
  05ded84  li 3, 5
  05ded88  b 0x5ded40
  05ded8c  lbz 0, 1(29)
  05ded90  cmpwi 7, 0, 104
  05ded94  bf 30, 0x5deb88
  05ded98  clrldi 10, 3, 32
  05ded9c  addi 3, 9, 5
  05deda0  addi 30, 25, 11
  05deda4  clrldi 29, 30, 32
  05deda8  lbz 0, 0(10)
  05dedac  lbz 11, 1(10)
  05dedb0  sldi 0, 0, 24
  05dedb4  lbz 9, 2(10)
  05dedb8  sldi 11, 11, 16
  05dedbc  sldi 9, 9, 8
  05dedc0  or 11, 11, 0
  05dedc4  lbz 0, 3(10)
  05dedc8  or 9, 9, 11
  05dedcc  or 0, 0, 9
  05dedd0  stw 0, 2404(28)
  05dedd4  b 0x5deb88
  05dedd8  li 3, 0
  05deddc  lbz 0, 2402(28)
  05dede0  addi 9, 23, 8
  05dede4  li 30, 0
  05dede8  cmpwi 7, 0, 0
  05dedec  add 31, 3, 9
  05dedf0  bf 30, 0x5dee84
  05dedf4  lbz 4, 2401(28)
  05dedf8  cmpwi 7, 4, 255
  05dedfc  bt 30, 0x5dee30
  05dee00  clrldi 29, 4, 56
  05dee04  mr 4, 27
  05dee08  mr 3, 29
  05dee0c  bl 0x5de08c
  05dee10  clrldi 5, 31, 32
  05dee14  clrldi 4, 3, 32
  05dee18  addi 6, 1, 112
  05dee1c  mr 3, 29
  05dee20  bl 0x5dde88
  05dee24  lwz 0, 112(1)
  05dee28  mr 31, 3
  05dee2c  stw 0, 592(26)
  05dee30  cmpwi 7, 30, 0
  05dee34  bt 30, 0x5deea8
  05dee38  lwz 4, 0(22)
  05dee3c  clrldi 3, 30, 32
  05dee40  mr 5, 27
  05dee44  add 4, 23, 4
  05dee48  mr 6, 21
  05dee4c  addi 4, 4, 4
  05dee50  clrldi 4, 4, 32
  05dee54  bl 0x5de35c
  05dee58  li 3, 0
  05dee5c  b 0x5ded40
  05dee60  cmpwi 7, 0, 0
  05dee64  bf 30, 0x5deca8
  05dee68  lbz 0, 2402(28)
  05dee6c  li 3, 8
  05dee70  addi 9, 23, 8
  05dee74  cmpwi 7, 0, 0
  05dee78  add 31, 3, 9
  05dee7c  li 30, 0
  05dee80  bt 30, 0x5dedf4
  05dee84  clrldi 3, 31, 32
  05dee88  addi 4, 1, 120
  05dee8c  bl 0x5ddc68
  05dee90  ld 0, 120(1)
  05dee94  mr 31, 3
  05dee98  add 30, 3, 0
  05dee9c  b 0x5dedf4
  05deea0  li 3, 4
  05deea4  b 0x5deddc
  05deea8  mr 30, 31
  05deeac  b 0x5dee38
  05deeb0  li 3, 16

FUN_005deeb8:   # 0x5deeb8, 0x134 bytes
  05deeb8  stdu 1, -3168(1)
  05deebc  mflr 0
  05deec0  std 29, 3144(1)
  05deec4  addi 29, 1, 112
  05deec8  std 28, 3136(1)
  05deecc  clrldi 29, 29, 32
  05deed0  std 30, 3152(1)
  05deed4  std 31, 3160(1)
  05deed8  mr 28, 3
  05deedc  li 5, 616
  05deee0  mr 30, 4
  05deee4  mr 3, 29
  05deee8  li 4, 0
  05deeec  addi 31, 1, 728
  05deef0  std 0, 3184(1)
  05deef4  bl 0x5d0140
  05deef8  nop
  05deefc  addi 28, 28, 1
  05def00  mr 3, 29
  05def04  mr 4, 31
  05def08  stw 28, 700(1)
  05def0c  bl 0x5deaa8
  05def10  cmpwi 7, 3, 0
  05def14  bt 30, 0x5def3c
  05def18  li 3, 0
  05def1c  ld 0, 3184(1)
  05def20  ld 28, 3136(1)
  05def24  ld 29, 3144(1)
  05def28  mtlr 0
  05def2c  ld 30, 3152(1)
  05def30  ld 31, 3160(1)
  05def34  addi 1, 1, 3168
  05def38  blr
  05def3c  lwz 0, 3092(1)
  05def40  cmpwi 7, 0, 2
  05def44  bt 30, 0x5def18
  05def48  li 0, 78
  05def4c  mr 4, 31
  05def50  addi 7, 30, 332
  05def54  mtctr 0
  05def58  addi 8, 30, 16
  05def5c  li 5, 0
  05def60  b 0x5def7c
  05def64  bt 26, 0x5defb0
  05def68  stw 3, 0(6)
  05def6c  addi 5, 5, 16
  05def70  addi 7, 7, 1
  05def74  addi 8, 8, 4
  05def78  bdz- 0x5defbc
  05def7c  add 0, 4, 5
  05def80  clrldi 11, 7, 32
  05def84  clrldi 10, 0, 32
  05def88  clrldi 6, 8, 32
  05def8c  lwz 0, 8(10)
  05def90  extsb 9, 0
  05def94  stb 0, 0(11)
  05def98  cmpwi 7, 9, 1
  05def9c  cmpwi 6, 9, 2
  05defa0  bf 30, 0x5def64
  05defa4  ld 0, 0(10)
  05defa8  stw 0, 0(6)
  05defac  b 0x5def6c
  05defb0  ld 0, 0(10)
  05defb4  stw 0, 0(6)
  05defb8  b 0x5def6c
  05defbc  clrldi 3, 30, 32
  05defc0  ld 0, 3072(1)
  05defc4  ld 9, 3080(1)
  05defc8  stw 0, 8(3)
  05defcc  ld 0, 3120(1)
  05defd0  sth 9, 328(3)
  05defd4  sth 0, 330(3)
  05defd8  ld 9, 720(1)
  05defdc  lwz 0, 3132(1)
  05defe0  stw 9, 12(3)
  05defe4  stw 0, 4(3)
  05defe8  b 0x5def1c

FUN_005defec:   # 0x5defec, 0xa8 bytes
  05defec  cmplw 7, 3, 4
  05deff0  mflr 0
  05deff4  stdu 1, -704(1)
  05deff8  std 28, 672(1)
  05deffc  std 29, 680(1)
  05df000  std 0, 720(1)
  05df004  std 30, 688(1)
  05df008  std 31, 696(1)
  05df00c  mr 29, 4
  05df010  std 6, 152(1)
  05df014  mr 28, 5
  05df018  li 0, 0
  05df01c  bf- 28, 0x5df348
  05df020  li 30, 1
  05df024  clrldi 9, 3, 32
  05df028  addi 3, 3, 1
  05df02c  lbz 10, 0(9)
  05df030  addi 9, 10, -3
  05df034  clrlwi 31, 10, 24
  05df038  clrlwi 0, 9, 24
  05df03c  cmplwi 7, 0, 147
  05df040  bt 29, 0x5df2b0
  05df044  lwz 11, -23540(2)
  05df048  rlwinm 9, 9, 2, 22, 29
  05df04c  lwzx 0, 9, 11
  05df050  extsw 0, 0
  05df054  add 0, 0, 11
  05df058  mtctr 0
  05df05c  bctr
  05df060  <unknown>
  05df064  <unknown>
  05df068  <unknown>
  05df06c  <unknown>
  05df070  <unknown>
  05df074  <unknown>
  05df078  <unknown>
  05df07c  <unknown>
  05df080  <unknown>
  05df084  <unknown>
  05df088  <unknown>
  05df08c  <unknown>
  05df090  <unknown>

FUN_005dfa80:   # 0x5dfa80, 0x304 bytes
  05dfa80  stdu 1, -832(1)
  05dfa84  mflr 0
  05dfa88  std 23, 760(1)
  05dfa8c  std 24, 768(1)
  05dfa90  mr 23, 3
  05dfa94  addi 24, 1, 128
  05dfa98  std 22, 752(1)
  05dfa9c  std 28, 800(1)
  05dfaa0  mr 22, 4
  05dfaa4  mr 28, 3
  05dfaa8  clrldi 4, 23, 32
  05dfaac  mr 3, 24
  05dfab0  li 5, 616
  05dfab4  std 27, 792(1)
  05dfab8  std 0, 848(1)
  05dfabc  std 25, 776(1)
  05dfac0  std 26, 784(1)
  05dfac4  std 29, 808(1)
  05dfac8  std 30, 816(1)
  05dfacc  std 31, 824(1)
  05dfad0  bl 0x5c5ad0
  05dfad4  nop
  05dfad8  lwz 0, 132(1)
  05dfadc  mr 27, 22
  05dfae0  cmpwi 7, 0, 0
  05dfae4  bt 30, 0x5dfd38
  05dfae8  lwz 9, 2364(22)
  05dfaec  li 0, 0
  05dfaf0  cmpwi 7, 9, 1
  05dfaf4  stw 0, 4(23)
  05dfaf8  bt 30, 0x5dfb0c
  05dfafc  cmpwi 7, 9, 2
  05dfb00  bt 30, 0x5dfcb8
  05dfb04  bl 0x5c4840
  05dfb08  nop
  05dfb0c  lwz 9, 2356(22)
  05dfb10  cmpwi 7, 9, 1200
  05dfb14  bt 29, 0x5dfd30
  05dfb18  cmpwi 7, 9, 145
  05dfb1c  bt- 29, 0x5dfb04
  05dfb20  extsw 11, 9
  05dfb24  lwz 10, -23552(2)
  05dfb28  slwi 0, 9, 2
  05dfb2c  extsw 0, 0
  05dfb30  lbzx 10, 10, 11
  05dfb34  add 9, 1, 0
  05dfb38  cmpwi 7, 10, 4
  05dfb3c  lwz 0, 128(9)
  05dfb40  bt 30, 0x5dfd74
  05dfb44  cmpwi 7, 10, 8
  05dfb48  bf- 30, 0x5dfb04
  05dfb4c  clrldi 9, 0, 32
  05dfb50  ld 3, 0(9)
  05dfb54  ld 0, 2344(22)
  05dfb58  add 29, 3, 0
  05dfb5c  li 31, 0
  05dfb60  li 30, 0
  05dfb64  addi 26, 1, 112
  05dfb68  addi 25, 1, 120
  05dfb6c  stw 29, 584(23)
  05dfb70  b 0x5dfb94
  05dfb74  cmpwi 7, 0, 3
  05dfb78  bt 30, 0x5dfc64
  05dfb7c  cmpwi 7, 0, 1
  05dfb80  bt 30, 0x5dfca0
  05dfb84  cmpwi 7, 31, 2320
  05dfb88  addi 30, 30, 4
  05dfb8c  addi 31, 31, 16
  05dfb90  bt- 30, 0x5dfbe4
  05dfb94  add 0, 27, 31
  05dfb98  clrldi 11, 0, 32
  05dfb9c  lwz 0, 8(11)
  05dfba0  cmpwi 7, 0, 2
  05dfba4  bf 30, 0x5dfb74
  05dfba8  lwz 9, 4(11)
  05dfbac  cmpwi 7, 9, 1200
  05dfbb0  bf 29, 0x5dfbb8
  05dfbb4  addi 9, 9, -1087
  05dfbb8  slwi 9, 9, 2
  05dfbbc  add 11, 30, 28
  05dfbc0  extsw 9, 9
  05dfbc4  clrldi 11, 11, 32
  05dfbc8  add 9, 26, 9
  05dfbcc  cmpwi 7, 31, 2320
  05dfbd0  addi 30, 30, 4
  05dfbd4  addi 31, 31, 16
  05dfbd8  lwz 0, 16(9)
  05dfbdc  stw 0, 0(11)
  05dfbe0  bf+ 30, 0x5dfb94
  05dfbe4  lwz 0, 40(22)
  05dfbe8  cmpwi 7, 0, 0
  05dfbec  bf 30, 0x5dfc2c
  05dfbf0  lwz 9, -23552(2)
  05dfbf4  lwz 11, 260(23)
  05dfbf8  lbz 0, 65(9)
  05dfbfc  cmpwi 7, 0, 4
  05dfc00  bt 30, 0x5dfd68
  05dfc04  cmpwi 7, 0, 8
  05dfc08  bf- 30, 0x5dfb04
  05dfc0c  clrldi 9, 11, 32
  05dfc10  ld 9, 0(9)
  05dfc14  clrldi 11, 9, 32
  05dfc18  lis 0, -6079
  05dfc1c  ori 0, 0, 40
  05dfc20  lwz 9, 0(11)
  05dfc24  cmpw 7, 9, 0
  05dfc28  bt 30, 0x5dfcec
  05dfc2c  ld 0, 848(1)
  05dfc30  ld 22, 752(1)
  05dfc34  ld 23, 760(1)
  05dfc38  mtlr 0
  05dfc3c  ld 24, 768(1)
  05dfc40  ld 25, 776(1)
  05dfc44  ld 26, 784(1)
  05dfc48  ld 27, 792(1)
  05dfc4c  ld 28, 800(1)
  05dfc50  ld 29, 808(1)
  05dfc54  ld 30, 816(1)
  05dfc58  ld 31, 824(1)
  05dfc5c  addi 1, 1, 832
  05dfc60  blr
  05dfc64  lwz 3, 0(11)
  05dfc68  clrldi 4, 25, 32
  05dfc6c  bl 0x5ddc68
  05dfc70  ld 0, 120(1)
  05dfc74  mr 4, 3
  05dfc78  clrldi 5, 24, 32
  05dfc7c  add 4, 4, 0
  05dfc80  clrldi 3, 3, 32
  05dfc84  clrldi 4, 4, 32
  05dfc88  clrldi 6, 29, 32
  05dfc8c  bl 0x5defec
  05dfc90  add 9, 30, 28
  05dfc94  clrldi 9, 9, 32
  05dfc98  stw 3, 0(9)
  05dfc9c  b 0x5dfb84
  05dfca0  add 9, 30, 28
  05dfca4  ld 0, 0(11)
  05dfca8  clrldi 9, 9, 32
  05dfcac  add 0, 29, 0
  05dfcb0  stw 0, 0(9)
  05dfcb4  b 0x5dfb84
  05dfcb8  addi 4, 1, 120
  05dfcbc  lwz 3, 2360(22)
  05dfcc0  bl 0x5ddc68
  05dfcc4  ld 0, 120(1)
  05dfcc8  mr 4, 3
  05dfccc  mr 5, 24
  05dfcd0  add 4, 4, 0
  05dfcd4  clrldi 3, 3, 32
  05dfcd8  clrldi 4, 4, 32
  05dfcdc  li 6, 0
  05dfce0  bl 0x5defec
  05dfce4  mr 29, 3
  05dfce8  b 0x5dfb5c
  05dfcec  lwz 9, 584(23)
  05dfcf0  ld 0, 848(1)
  05dfcf4  addi 9, 9, 40
  05dfcf8  ld 22, 752(1)
  05dfcfc  ld 24, 768(1)
  05dfd00  mtlr 0
  05dfd04  stw 9, 8(23)
  05dfd08  ld 25, 776(1)
  05dfd0c  ld 23, 760(1)
  05dfd10  ld 26, 784(1)
  05dfd14  ld 27, 792(1)
  05dfd18  ld 28, 800(1)
  05dfd1c  ld 29, 808(1)
  05dfd20  ld 30, 816(1)
  05dfd24  ld 31, 824(1)
  05dfd28  addi 1, 1, 832
  05dfd2c  blr
  05dfd30  addi 9, 9, -1087
  05dfd34  b 0x5dfb18
  05dfd38  lwz 9, -23552(2)
  05dfd3c  lwz 0, 584(23)
  05dfd40  lbz 9, 1(9)
  05dfd44  cmpwi 7, 9, 4
  05dfd48  bt 30, 0x5dfd80
  05dfd4c  cmpwi 7, 9, 8
  05dfd50  bf- 30, 0x5dfb04
  05dfd54  clrldi 0, 0, 32
  05dfd58  std 0, 112(1)
  05dfd5c  addi 0, 1, 112
  05dfd60  stw 0, 132(1)
  05dfd64  b 0x5dfae8
  05dfd68  clrldi 9, 11, 32
  05dfd6c  lwz 9, 0(9)
  05dfd70  b 0x5dfc14
  05dfd74  clrldi 9, 0, 32
  05dfd78  lwz 3, 0(9)
  05dfd7c  b 0x5dfb54
  05dfd80  stw 0, 112(1)

FUN_005dfd88:   # 0x5dfd88, 0x2f0 bytes
  05dfd88  stdu 1, -2576(1)
  05dfd8c  mflr 0
  05dfd90  std 30, 2560(1)
  05dfd94  mr 30, 3
  05dfd98  std 0, 2592(1)
  05dfd9c  mflr 0
  05dfda0  std 26, 2528(1)
  05dfda4  std 27, 2536(1)
  05dfda8  std 28, 2544(1)
  05dfdac  mr 27, 5
  05dfdb0  mr 28, 4
  05dfdb4  li 5, 616
  05dfdb8  li 4, 0
  05dfdbc  addi 26, 1, 120
  05dfdc0  std 29, 2552(1)
  05dfdc4  clrldi 29, 0, 32
  05dfdc8  std 31, 2568(1)
  05dfdcc  mr 31, 3
  05dfdd0  bl 0x5d0140
  05dfdd4  nop
  05dfdd8  mr 3, 30
  05dfddc  mr 4, 26
  05dfde0  stw 29, 588(30)
  05dfde4  bl 0x5deaa8
  05dfde8  cmpwi 7, 3, 0
  05dfdec  bf- 30, 0x5e0074
  05dfdf0  lwz 29, -23552(2)
  05dfdf4  lwz 4, -23532(2)
  05dfdf8  addi 3, 29, 148
  05dfdfc  bl 0x5e30a8
  05dfe00  nop
  05dfe04  cmpwi 7, 3, 0
  05dfe08  bf 30, 0x5dfe8c
  05dfe0c  lbz 0, 0(29)
  05dfe10  cmpwi 7, 0, 0
  05dfe14  bt 30, 0x5dfe8c
  05dfe18  lbz 3, 1(29)
  05dfe1c  cmpwi 7, 3, 4
  05dfe20  bt 30, 0x5e006c
  05dfe24  cmpwi 7, 3, 8
  05dfe28  bf- 30, 0x5e0074
  05dfe2c  clrldi 0, 28, 32
  05dfe30  std 0, 112(1)
  05dfe34  addi 0, 1, 112
  05dfe38  li 9, 1
  05dfe3c  stw 0, 4(31)
  05dfe40  stw 9, 2484(1)
  05dfe44  li 0, 1
  05dfe48  mr 3, 31
  05dfe4c  mr 4, 26
  05dfe50  li 9, 0
  05dfe54  std 0, 2472(1)
  05dfe58  std 9, 2464(1)
  05dfe5c  bl 0x5dfa80
  05dfe60  ld 0, 2592(1)
  05dfe64  stw 27, 588(30)
  05dfe68  ld 26, 2528(1)
  05dfe6c  mtlr 0
  05dfe70  ld 27, 2536(1)
  05dfe74  ld 28, 2544(1)
  05dfe78  ld 29, 2552(1)
  05dfe7c  ld 30, 2560(1)
  05dfe80  ld 31, 2568(1)
  05dfe84  addi 1, 1, 2576
  05dfe88  blr
  05dfe8c  li 0, 8
  05dfe90  li 9, 16
  05dfe94  li 11, 4
  05dfe98  stb 0, 0(29)
  05dfe9c  stb 0, 1(29)
  05dfea0  stb 0, 2(29)
  05dfea4  stb 0, 3(29)
  05dfea8  stb 0, 4(29)
  05dfeac  stb 0, 5(29)
  05dfeb0  stb 0, 6(29)
  05dfeb4  stb 0, 7(29)
  05dfeb8  stb 0, 8(29)
  05dfebc  stb 0, 9(29)
  05dfec0  stb 0, 10(29)
  05dfec4  stb 0, 11(29)
  05dfec8  stb 0, 12(29)
  05dfecc  stb 0, 13(29)
  05dfed0  stb 0, 14(29)
  05dfed4  stb 0, 15(29)
  05dfed8  stb 0, 16(29)
  05dfedc  stb 0, 17(29)
  05dfee0  stb 0, 18(29)
  05dfee4  stb 0, 19(29)
  05dfee8  stb 0, 20(29)
  05dfeec  stb 0, 21(29)
  05dfef0  stb 0, 22(29)
  05dfef4  stb 0, 23(29)
  05dfef8  stb 0, 24(29)
  05dfefc  stb 0, 25(29)
  05dff00  stb 0, 26(29)
  05dff04  stb 0, 27(29)
  05dff08  stb 0, 28(29)
  05dff0c  stb 0, 29(29)
  05dff10  stb 0, 30(29)
  05dff14  stb 0, 31(29)
  05dff18  stb 0, 32(29)
  05dff1c  stb 0, 33(29)
  05dff20  stb 0, 34(29)
  05dff24  stb 0, 35(29)
  05dff28  stb 0, 36(29)
  05dff2c  stb 0, 37(29)
  05dff30  stb 0, 38(29)
  05dff34  stb 0, 39(29)
  05dff38  stb 0, 40(29)
  05dff3c  stb 0, 41(29)
  05dff40  stb 0, 42(29)
  05dff44  stb 0, 43(29)
  05dff48  stb 0, 44(29)
  05dff4c  stb 0, 45(29)
  05dff50  stb 0, 46(29)
  05dff54  stb 0, 47(29)
  05dff58  stb 0, 48(29)
  05dff5c  stb 0, 49(29)
  05dff60  stb 0, 50(29)
  05dff64  stb 0, 51(29)
  05dff68  stb 0, 52(29)
  05dff6c  stb 0, 53(29)
  05dff70  stb 0, 54(29)
  05dff74  stb 0, 55(29)
  05dff78  stb 0, 56(29)
  05dff7c  stb 0, 57(29)
  05dff80  stb 0, 58(29)
  05dff84  stb 0, 59(29)
  05dff88  stb 0, 60(29)
  05dff8c  stb 0, 61(29)
  05dff90  stb 0, 62(29)
  05dff94  stb 0, 63(29)
  05dff98  stb 0, 64(29)
  05dff9c  stb 0, 65(29)
  05dffa0  stb 0, 66(29)
  05dffa4  stb 0, 67(29)
  05dffa8  stb 11, 76(29)
  05dffac  stb 11, 68(29)
  05dffb0  stb 11, 69(29)
  05dffb4  stb 11, 70(29)
  05dffb8  stb 11, 71(29)
  05dffbc  stb 11, 72(29)
  05dffc0  stb 11, 73(29)
  05dffc4  stb 11, 74(29)
  05dffc8  stb 11, 75(29)
  05dffcc  stb 9, 77(29)
  05dffd0  stb 9, 78(29)
  05dffd4  stb 9, 79(29)
  05dffd8  stb 9, 80(29)
  05dffdc  stb 9, 81(29)
  05dffe0  stb 9, 82(29)
  05dffe4  stb 9, 83(29)
  05dffe8  stb 9, 84(29)
  05dffec  stb 9, 85(29)
  05dfff0  stb 9, 86(29)
  05dfff4  stb 9, 87(29)
  05dfff8  stb 9, 88(29)
  05dfffc  stb 9, 89(29)
  05e0000  stb 9, 90(29)
  05e0004  stb 9, 91(29)
  05e0008  stb 9, 92(29)
  05e000c  stb 9, 93(29)
  05e0010  stb 9, 94(29)
  05e0014  stb 9, 95(29)
  05e0018  stb 9, 96(29)
  05e001c  stb 9, 97(29)
  05e0020  stb 9, 98(29)
  05e0024  stb 9, 99(29)
  05e0028  stb 9, 100(29)
  05e002c  stb 9, 101(29)
  05e0030  lbz 3, 1(29)
  05e0034  stb 9, 108(29)
  05e0038  cmpwi 7, 3, 4
  05e003c  stb 0, 113(29)
  05e0040  stb 9, 102(29)
  05e0044  stb 9, 103(29)
  05e0048  stb 9, 104(29)
  05e004c  stb 9, 105(29)
  05e0050  stb 9, 106(29)
  05e0054  stb 9, 107(29)
  05e0058  stb 0, 109(29)
  05e005c  stb 0, 110(29)
  05e0060  stb 0, 111(29)
  05e0064  stb 0, 112(29)
  05e0068  bf 30, 0x5dfe24
  05e006c  stw 28, 112(1)
  05e0070  b 0x5dfe34
  05e0074  bl 0x5c4840

FUN_005e007c:   # 0x5e007c, 0x1a0 bytes
  05e007c  stdu 1, -192(1)
  05e0080  mflr 0
  05e0084  std 24, 128(1)
  05e0088  clrldi 24, 4, 32
  05e008c  std 0, 208(1)
  05e0090  std 26, 144(1)
  05e0094  std 27, 152(1)
  05e0098  std 28, 160(1)
  05e009c  lwz 0, 4(24)
  05e00a0  mr 26, 4
  05e00a4  std 29, 168(1)
  05e00a8  cmpwi 7, 0, 0
  05e00ac  std 25, 136(1)
  05e00b0  std 30, 176(1)
  05e00b4  std 31, 184(1)
  05e00b8  mr 27, 3
  05e00bc  mr 28, 4
  05e00c0  mr 29, 3
  05e00c4  bt 30, 0x5e01d4
  05e00c8  lwz 25, -23552(2)
  05e00cc  li 31, 0
  05e00d0  mr 30, 25
  05e00d4  add 9, 31, 28
  05e00d8  add 11, 31, 29
  05e00dc  clrldi 9, 9, 32
  05e00e0  clrldi 11, 11, 32
  05e00e4  lwz 4, 0(9)
  05e00e8  lwz 3, 0(11)
  05e00ec  cmpwi 7, 4, 0
  05e00f0  bt 30, 0x5e011c
  05e00f4  cmpwi 7, 3, 0
  05e00f8  bt 30, 0x5e011c
  05e00fc  cmpw 7, 3, 4
  05e0100  bt 30, 0x5e011c
  05e0104  clrldi 9, 30, 32
  05e0108  clrldi 3, 3, 32
  05e010c  clrldi 4, 4, 32
  05e0110  lbz 5, 0(9)
  05e0114  bl 0x5c5ad0
  05e0118  nop
  05e011c  cmpwi 7, 31, 576
  05e0120  addi 30, 30, 1
  05e0124  addi 31, 31, 4
  05e0128  bf+ 30, 0x5e00d4
  05e012c  lwz 0, 4(27)
  05e0130  li 3, 0
  05e0134  cmpwi 7, 0, 0
  05e0138  bt 30, 0x5e0170
  05e013c  ld 0, 208(1)
  05e0140  extsw 3, 3
  05e0144  ld 24, 128(1)
  05e0148  ld 25, 136(1)
  05e014c  mtlr 0
  05e0150  ld 26, 144(1)
  05e0154  ld 27, 152(1)
  05e0158  ld 28, 160(1)
  05e015c  ld 29, 168(1)
  05e0160  ld 30, 176(1)
  05e0164  ld 31, 184(1)
  05e0168  addi 1, 1, 192
  05e016c  blr
  05e0170  lbz 0, 1(25)
  05e0174  lwz 9, 4(24)
  05e0178  cmpwi 7, 0, 4
  05e017c  bt 30, 0x5e0204
  05e0180  cmpwi 7, 0, 8
  05e0184  bf- 30, 0x5e0218
  05e0188  clrldi 9, 9, 32
  05e018c  ld 11, 0(9)
  05e0190  lwz 0, 584(27)
  05e0194  ld 9, 608(26)
  05e0198  sub 0, 11, 0
  05e019c  ld 24, 128(1)
  05e01a0  ld 25, 136(1)
  05e01a4  add 3, 0, 9
  05e01a8  ld 0, 208(1)
  05e01ac  ld 26, 144(1)
  05e01b0  extsw 3, 3
  05e01b4  ld 27, 152(1)
  05e01b8  ld 28, 160(1)
  05e01bc  mtlr 0
  05e01c0  ld 29, 168(1)
  05e01c4  ld 30, 176(1)
  05e01c8  ld 31, 184(1)
  05e01cc  addi 1, 1, 192
  05e01d0  blr
  05e01d4  lwz 25, -23552(2)
  05e01d8  lwz 0, 584(4)
  05e01dc  lbz 9, 1(25)
  05e01e0  cmpwi 7, 9, 4
  05e01e4  bt 30, 0x5e0210
  05e01e8  cmpwi 7, 9, 8
  05e01ec  bf- 30, 0x5e0218
  05e01f0  clrldi 0, 0, 32
  05e01f4  std 0, 112(1)
  05e01f8  addi 0, 1, 112
  05e01fc  stw 0, 4(26)
  05e0200  b 0x5e00cc
  05e0204  clrldi 9, 9, 32
  05e0208  lwz 11, 0(9)
  05e020c  b 0x5e0190
  05e0210  stw 0, 112(1)
  05e0214  b 0x5e01f8
  05e0218  bl 0x5c4840

FUN_005e0220:   # 0x5e0220, 0xbc bytes
  05e0220  stdu 1, -144(1)
  05e0224  mflr 0
  05e0228  std 29, 120(1)
  05e022c  mr 29, 4
  05e0230  std 30, 128(1)
  05e0234  std 31, 136(1)
  05e0238  std 0, 160(1)
  05e023c  mr 30, 3
  05e0240  mr 31, 3
  05e0244  bl 0x5dfa80
  05e0248  lwz 9, 2396(29)
  05e024c  cmpwi 7, 9, 1200
  05e0250  bf 29, 0x5e0258
  05e0254  addi 9, 9, -1087
  05e0258  cmpwi 7, 9, 145
  05e025c  bt- 29, 0x5e02d8
  05e0260  extsw 0, 9
  05e0264  lwz 11, -23552(2)
  05e0268  slwi 9, 9, 2
  05e026c  extsw 9, 9
  05e0270  lbzx 11, 11, 0
  05e0274  cmpwi 7, 11, 4
  05e0278  lwzx 0, 31, 9
  05e027c  bt 30, 0x5e02b0
  05e0280  cmpwi 7, 11, 8
  05e0284  bf- 30, 0x5e02d8
  05e0288  clrldi 9, 0, 32
  05e028c  ld 29, 120(1)
  05e0290  ld 31, 136(1)
  05e0294  ld 0, 0(9)
  05e0298  stw 0, 588(30)
  05e029c  ld 0, 160(1)
  05e02a0  ld 30, 128(1)
  05e02a4  addi 1, 1, 144
  05e02a8  mtlr 0
  05e02ac  blr
  05e02b0  clrldi 9, 0, 32
  05e02b4  ld 29, 120(1)
  05e02b8  ld 31, 136(1)
  05e02bc  lwz 0, 0(9)
  05e02c0  stw 0, 588(30)
  05e02c4  ld 0, 160(1)
  05e02c8  ld 30, 128(1)
  05e02cc  addi 1, 1, 144
  05e02d0  mtlr 0
  05e02d4  blr
  05e02d8  bl 0x5c4840

FUN_005e02e0:   # 0x5e02e0, 0x22c bytes
  05e02e0  mfcr 12
  05e02e4  stdu 1, -3472(1)
  05e02e8  stfd 14, 3328(1)
  05e02ec  lis 9, -6079
  05e02f0  stfd 15, 3336(1)
  05e02f4  stfd 16, 3344(1)
  05e02f8  ori 9, 9, 40
  05e02fc  stfd 17, 3352(1)
  05e0300  stfd 18, 3360(1)
  05e0304  stfd 19, 3368(1)
  05e0308  stfd 20, 3376(1)
  05e030c  stfd 21, 3384(1)
  05e0310  stfd 22, 3392(1)
  05e0314  stfd 23, 3400(1)
  05e0318  stfd 24, 3408(1)
  05e031c  stfd 25, 3416(1)
  05e0320  stfd 26, 3424(1)
  05e0324  stfd 27, 3432(1)
  05e0328  stfd 28, 3440(1)
  05e032c  stfd 29, 3448(1)
  05e0330  stfd 30, 3456(1)
  05e0334  stfd 31, 3464(1)
  05e0338  std 14, 3184(1)
  05e033c  std 15, 3192(1)
  05e0340  std 16, 3200(1)
  05e0344  std 17, 3208(1)
  05e0348  std 18, 3216(1)
  05e034c  std 19, 3224(1)
  05e0350  std 20, 3232(1)
  05e0354  std 21, 3240(1)
  05e0358  std 22, 3248(1)
  05e035c  std 23, 3256(1)
  05e0360  std 24, 3264(1)
  05e0364  std 25, 3272(1)
  05e0368  std 26, 3280(1)
  05e036c  std 27, 3288(1)
  05e0370  std 28, 3296(1)
  05e0374  ld 10, 0(1)
  05e0378  mflr 0
  05e037c  std 29, 3304(1)
  05e0380  std 0, 3488(1)
  05e0384  std 30, 3312(1)
  05e0388  std 31, 3320(1)
  05e038c  ld 11, 16(10)
  05e0390  stw 12, 3480(1)
  05e0394  stw 3, 3140(1)
  05e0398  stw 4, 3144(1)
  05e039c  lwz 0, 0(11)
  05e03a0  cmpw 7, 0, 9
  05e03a4  bt 30, 0x5e03ac
  05e03a8  std 2, 40(10)
  05e03ac  addi 4, 1, 3472
  05e03b0  mflr 0
  05e03b4  clrldi 5, 0, 32
  05e03b8  addi 0, 1, 112
  05e03bc  clrldi 0, 0, 32
  05e03c0  mr 3, 0
  05e03c4  std 0, 3152(1)
  05e03c8  bl 0x5dfd88
  05e03cc  addi 0, 1, 728
  05e03d0  lwz 9, 3140(1)
  05e03d4  clrldi 0, 0, 32
  05e03d8  std 9, 3168(1)
  05e03dc  std 0, 3160(1)
  05e03e0  b 0x5e03ec
  05e03e4  bt 26, 0x5e0458
  05e03e8  bl 0x5e0220
  05e03ec  ld 4, 3160(1)
  05e03f0  ld 3, 3152(1)
  05e03f4  bl 0x5deaa8
  05e03f8  lwz 4, 3144(1)
  05e03fc  stw 3, 3136(1)
  05e0400  lwz 0, 3136(1)
  05e0404  ld 3, 3152(1)
  05e0408  cmpwi 7, 0, 0
  05e040c  cmpwi 6, 0, 5
  05e0410  bt 30, 0x5e0418
  05e0414  bf 26, 0x5e0450
  05e0418  ld 9, 3168(1)
  05e041c  std 2, 40(1)
  05e0420  lwz 9, 0(9)
  05e0424  mtctr 9
  05e0428  ld 9, 3168(1)
  05e042c  lwz 2, 4(9)
  05e0430  bctrl
  05e0434  ld 2, 40(1)
  05e0438  lwz 0, 3136(1)
  05e043c  cmpwi 7, 3, 0
  05e0440  ld 4, 3160(1)
  05e0444  cmpwi 6, 0, 5
  05e0448  ld 3, 3152(1)
  05e044c  bt 30, 0x5e03e4
  05e0450  li 0, 3
  05e0454  stw 0, 3136(1)
  05e0458  lwz 12, 3480(1)
  05e045c  ld 0, 3488(1)
  05e0460  lwz 3, 3136(1)
  05e0464  mtocrf 32, 12
  05e0468  ld 14, 3184(1)
  05e046c  mtlr 0
  05e0470  ld 15, 3192(1)
  05e0474  mtocrf 16, 12
  05e0478  ld 16, 3200(1)
  05e047c  mtocrf 8, 12
  05e0480  ld 17, 3208(1)
  05e0484  ld 18, 3216(1)
  05e0488  ld 19, 3224(1)
  05e048c  ld 20, 3232(1)
  05e0490  ld 21, 3240(1)
  05e0494  ld 22, 3248(1)
  05e0498  ld 23, 3256(1)
  05e049c  ld 24, 3264(1)
  05e04a0  ld 25, 3272(1)
  05e04a4  ld 26, 3280(1)
  05e04a8  ld 27, 3288(1)
  05e04ac  ld 28, 3296(1)
  05e04b0  ld 29, 3304(1)
  05e04b4  ld 30, 3312(1)
  05e04b8  ld 31, 3320(1)
  05e04bc  lfd 14, 3328(1)
  05e04c0  lfd 15, 3336(1)
  05e04c4  lfd 16, 3344(1)
  05e04c8  lfd 17, 3352(1)
  05e04cc  lfd 18, 3360(1)
  05e04d0  lfd 19, 3368(1)
  05e04d4  lfd 20, 3376(1)
  05e04d8  lfd 21, 3384(1)
  05e04dc  lfd 22, 3392(1)
  05e04e0  lfd 23, 3400(1)
  05e04e4  lfd 24, 3408(1)
  05e04e8  lfd 25, 3416(1)
  05e04ec  lfd 26, 3424(1)
  05e04f0  lfd 27, 3432(1)
  05e04f4  lfd 28, 3440(1)
  05e04f8  lfd 29, 3448(1)
  05e04fc  lfd 30, 3456(1)
  05e0500  lfd 31, 3464(1)
  05e0504  addi 1, 1, 3472
  05e0508  blr

FUN_005e050c:   # 0x5e050c, 0x10c bytes
  05e050c  stdu 1, -2576(1)
  05e0510  mflr 0
  05e0514  std 26, 2528(1)
  05e0518  std 27, 2536(1)
  05e051c  std 28, 2544(1)
  05e0520  std 29, 2552(1)
  05e0524  std 30, 2560(1)
  05e0528  mr 29, 3
  05e052c  mr 28, 4
  05e0530  mr 26, 3
  05e0534  mr 30, 4
  05e0538  addi 27, 1, 112
  05e053c  std 31, 2568(1)
  05e0540  std 0, 2592(1)
  05e0544  b 0x5e05ac
  05e0548  lwz 9, 2484(1)
  05e054c  cmpwi 7, 9, 0
  05e0550  bt 30, 0x5e0598
  05e0554  clrldi 9, 9, 32
  05e0558  ld 5, 0(29)
  05e055c  ori 4, 31, 2
  05e0560  li 3, 1
  05e0564  extsw 4, 4
  05e0568  clrldi 6, 26, 32
  05e056c  lwz 0, 0(9)
  05e0570  mr 7, 30
  05e0574  std 2, 40(1)
  05e0578  mtctr 0
  05e057c  lwz 2, 4(9)
  05e0580  bctrl
  05e0584  ld 2, 40(1)
  05e0588  cmpwi 7, 3, 7
  05e058c  bt 30, 0x5e05e8
  05e0590  cmpwi 7, 3, 8
  05e0594  bf 30, 0x5e05e4
  05e0598  cmpwi 7, 31, 0
  05e059c  bf- 30, 0x5e0614
  05e05a0  mr 3, 30
  05e05a4  clrldi 4, 27, 32
  05e05a8  bl 0x5e0220
  05e05ac  mr 3, 30
  05e05b0  clrldi 4, 27, 32
  05e05b4  bl 0x5deaa8
  05e05b8  ld 11, 24(29)
  05e05bc  lwz 0, 588(28)
  05e05c0  cmpwi 7, 3, 0
  05e05c4  xor 0, 0, 11
  05e05c8  sradi 11, 0, 63
  05e05cc  xor 9, 11, 0
  05e05d0  sub 9, 9, 11
  05e05d4  addi 9, 9, -1
  05e05d8  rldicl 31, 9, 1, 63
  05e05dc  slwi 31, 31, 2
  05e05e0  bt 30, 0x5e0548
  05e05e4  li 3, 2
  05e05e8  ld 0, 2592(1)
  05e05ec  clrldi 3, 3, 32
  05e05f0  ld 26, 2528(1)
  05e05f4  ld 27, 2536(1)
  05e05f8  mtlr 0
  05e05fc  ld 28, 2544(1)
  05e0600  ld 29, 2552(1)
  05e0604  ld 30, 2560(1)
  05e0608  ld 31, 2568(1)
  05e060c  addi 1, 1, 2576
  05e0610  blr
  05e0614  bl 0x5c4840

FUN_005e061c:   # 0x5e061c, 0x2fc bytes
  05e061c  mfcr 12
  05e0620  stdu 1, -4160(1)
  05e0624  stfd 14, 4016(1)
  05e0628  stfd 15, 4024(1)
  05e062c  stfd 16, 4032(1)
  05e0630  stfd 17, 4040(1)
  05e0634  stfd 18, 4048(1)
  05e0638  stfd 19, 4056(1)
  05e063c  stfd 20, 4064(1)
  05e0640  stfd 21, 4072(1)
  05e0644  stfd 22, 4080(1)
  05e0648  stfd 23, 4088(1)
  05e064c  stfd 24, 4096(1)
  05e0650  stfd 25, 4104(1)
  05e0654  stfd 26, 4112(1)
  05e0658  stfd 27, 4120(1)
  05e065c  stfd 28, 4128(1)
  05e0660  stfd 29, 4136(1)
  05e0664  stfd 30, 4144(1)
  05e0668  stfd 31, 4152(1)
  05e066c  std 14, 3872(1)
  05e0670  std 15, 3880(1)
  05e0674  std 16, 3888(1)
  05e0678  std 17, 3896(1)
  05e067c  std 18, 3904(1)
  05e0680  std 19, 3912(1)
  05e0684  std 20, 3920(1)
  05e0688  std 21, 3928(1)
  05e068c  std 22, 3936(1)
  05e0690  std 23, 3944(1)
  05e0694  std 24, 3952(1)
  05e0698  std 25, 3960(1)
  05e069c  std 26, 3968(1)
  05e06a0  std 27, 3976(1)
  05e06a4  std 28, 3984(1)
  05e06a8  std 29, 3992(1)
  05e06ac  mflr 0
  05e06b0  std 30, 4000(1)
  05e06b4  std 31, 4008(1)
  05e06b8  lis 9, -6079
  05e06bc  std 0, 4176(1)
  05e06c0  std 3, 3840(1)
  05e06c4  std 4, 3848(1)
  05e06c8  ld 10, 0(1)
  05e06cc  ori 9, 9, 40
  05e06d0  std 5, 3856(1)
  05e06d4  std 6, 3864(1)
  05e06d8  stw 12, 4168(1)
  05e06dc  std 3, 3768(1)
  05e06e0  ld 11, 16(10)
  05e06e4  stw 3, 3760(1)
  05e06e8  lwz 0, 0(11)
  05e06ec  cmpw 7, 0, 9
  05e06f0  bt 30, 0x5e06f8
  05e06f4  std 2, 40(10)
  05e06f8  addi 0, 1, 112
  05e06fc  addi 9, 1, 728
  05e0700  clrldi 11, 0, 32
  05e0704  std 0, 3824(1)
  05e0708  mflr 0
  05e070c  mr 3, 11
  05e0710  clrldi 5, 0, 32
  05e0714  std 9, 3816(1)
  05e0718  addi 4, 1, 4160
  05e071c  clrldi 9, 9, 32
  05e0720  std 11, 3776(1)
  05e0724  std 9, 3784(1)
  05e0728  bl 0x5dfd88
  05e072c  ld 3, 3784(1)
  05e0730  li 5, 616
  05e0734  ld 4, 3776(1)
  05e0738  std 3, 3792(1)
  05e073c  bl 0x5c5ad0
  05e0740  nop
  05e0744  lwz 0, 3760(1)
  05e0748  std 0, 3832(1)
  05e074c  addi 0, 1, 1344
  05e0750  clrldi 0, 0, 32
  05e0754  std 0, 3800(1)
  05e0758  b 0x5e07ac
  05e075c  bf 26, 0x5e08a8
  05e0760  lwz 0, 3716(1)
  05e0764  cmpwi 7, 0, 0
  05e0768  clrldi 9, 0, 32
  05e076c  bt 30, 0x5e07a0
  05e0770  ld 11, 3768(1)
  05e0774  lwz 0, 0(9)
  05e0778  mtctr 0
  05e077c  ld 5, 0(11)
  05e0780  std 2, 40(1)
  05e0784  lwz 2, 4(9)
  05e0788  bctrl
  05e078c  ld 2, 40(1)
  05e0790  cmpwi 7, 3, 6
  05e0794  cmpwi 6, 3, 8
  05e0798  bt 30, 0x5e08b0
  05e079c  bf 26, 0x5e08a8
  05e07a0  ld 3, 3792(1)
  05e07a4  ld 4, 3800(1)
  05e07a8  bl 0x5e0220
  05e07ac  ld 4, 3800(1)
  05e07b0  ld 3, 3792(1)
  05e07b4  bl 0x5deaa8
  05e07b8  ld 6, 3832(1)
  05e07bc  mr 0, 3
  05e07c0  ld 7, 3792(1)
  05e07c4  li 4, 1
  05e07c8  cmpwi 7, 0, 5
  05e07cc  li 3, 1
  05e07d0  cmpwi 6, 0, 0
  05e07d4  bf 30, 0x5e075c
  05e07d8  clrldi 3, 0, 32
  05e07dc  li 10, 0
  05e07e0  lwz 12, 4168(1)
  05e07e4  ld 0, 4176(1)
  05e07e8  ld 2, 4200(1)
  05e07ec  mtocrf 32, 12
  05e07f0  ld 3, 3840(1)
  05e07f4  mtlr 0
  05e07f8  ld 4, 3848(1)
  05e07fc  mtocrf 16, 12
  05e0800  ld 5, 3856(1)
  05e0804  mtocrf 8, 12
  05e0808  ld 6, 3864(1)
  05e080c  ld 14, 3872(1)
  05e0810  ld 15, 3880(1)
  05e0814  ld 16, 3888(1)
  05e0818  ld 17, 3896(1)
  05e081c  ld 18, 3904(1)
  05e0820  ld 19, 3912(1)
  05e0824  ld 20, 3920(1)
  05e0828  ld 21, 3928(1)
  05e082c  ld 22, 3936(1)
  05e0830  ld 23, 3944(1)
  05e0834  ld 24, 3952(1)
  05e0838  ld 25, 3960(1)
  05e083c  ld 26, 3968(1)
  05e0840  ld 27, 3976(1)
  05e0844  ld 28, 3984(1)
  05e0848  ld 29, 3992(1)
  05e084c  ld 30, 4000(1)
  05e0850  ld 31, 4008(1)
  05e0854  lfd 14, 4016(1)
  05e0858  lfd 15, 4024(1)
  05e085c  lfd 16, 4032(1)
  05e0860  lfd 17, 4040(1)
  05e0864  lfd 18, 4048(1)
  05e0868  lfd 19, 4056(1)
  05e086c  lfd 20, 4064(1)
  05e0870  lfd 21, 4072(1)
  05e0874  lfd 22, 4080(1)
  05e0878  lfd 23, 4088(1)
  05e087c  lfd 24, 4096(1)
  05e0880  lfd 25, 4104(1)
  05e0884  lfd 26, 4112(1)
  05e0888  lfd 27, 4120(1)
  05e088c  lfd 28, 4128(1)
  05e0890  lfd 29, 4136(1)
  05e0894  lfd 30, 4144(1)
  05e0898  lfd 31, 4152(1)
  05e089c  addi 1, 1, 4160
  05e08a0  add 1, 1, 10
  05e08a4  blr
  05e08a8  li 0, 3
  05e08ac  b 0x5e07d8
  05e08b0  ld 0, 3816(1)
  05e08b4  li 5, 616
  05e08b8  ld 11, 3768(1)
  05e08bc  clrldi 0, 0, 32
  05e08c0  lwz 9, 1316(1)
  05e08c4  ld 4, 3824(1)
  05e08c8  std 0, 3808(1)
  05e08cc  mr 3, 0
  05e08d0  li 0, 0
  05e08d4  std 9, 24(11)
  05e08d8  std 0, 16(11)
  05e08dc  bl 0x5c5ad0
  05e08e0  nop
  05e08e4  ld 3, 3832(1)
  05e08e8  ld 4, 3808(1)
  05e08ec  bl 0x5e050c
  05e08f0  cmpwi 7, 3, 7
  05e08f4  mr 0, 3
  05e08f8  bf+ 30, 0x5e07d8
  05e08fc  ld 3, 3824(1)
  05e0900  ld 4, 3816(1)
  05e0904  bl 0x5e007c
  05e0908  lwz 0, 1316(1)
  05e090c  clrldi 10, 3, 32
  05e0910  std 0, 4176(1)
  05e0914  b 0x5e07e0

FUN_005e0918:   # 0x5e0918, 0x13c bytes
  05e0918  stdu 1, -2592(1)
  05e091c  mflr 0
  05e0920  std 25, 2536(1)
  05e0924  std 0, 2608(1)
  05e0928  std 26, 2544(1)
  05e092c  std 27, 2552(1)
  05e0930  std 28, 2560(1)
  05e0934  std 29, 2568(1)
  05e0938  std 30, 2576(1)
  05e093c  mr 29, 3
  05e0940  lwz 26, 28(3)
  05e0944  mr 30, 4
  05e0948  lwz 28, 20(3)
  05e094c  addi 25, 1, 112
  05e0950  mr 27, 3
  05e0954  std 31, 2584(1)
  05e0958  b 0x5e09ac
  05e095c  bt 26, 0x5e0a24
  05e0960  lwz 0, 2484(1)
  05e0964  cmpwi 7, 0, 0
  05e0968  clrldi 9, 0, 32
  05e096c  bt 30, 0x5e09a0
  05e0970  lwz 0, 0(9)
  05e0974  ld 5, 0(29)
  05e0978  std 2, 40(1)
  05e097c  mtctr 0
  05e0980  lwz 2, 4(9)
  05e0984  bctrl
  05e0988  ld 2, 40(1)
  05e098c  cmpwi 7, 3, 7
  05e0990  mr 31, 3
  05e0994  cmpwi 6, 3, 8
  05e0998  bt 30, 0x5e0a24
  05e099c  bf 26, 0x5e0a20
  05e09a0  mr 3, 30
  05e09a4  clrldi 4, 25, 32
  05e09a8  bl 0x5e0220
  05e09ac  clrldi 4, 25, 32
  05e09b0  mr 3, 30
  05e09b4  bl 0x5deaa8
  05e09b8  mr 6, 27
  05e09bc  mr 31, 3
  05e09c0  mr 7, 30
  05e09c4  cmpwi 7, 31, 0
  05e09c8  clrldi 8, 26, 32
  05e09cc  li 3, 1
  05e09d0  cmpwi 6, 31, 5
  05e09d4  li 4, 10
  05e09d8  bt 30, 0x5e09e4
  05e09dc  bf 26, 0x5e0a20
  05e09e0  li 4, 26
  05e09e4  lwz 0, 0(28)
  05e09e8  extsw 4, 4
  05e09ec  ld 5, 0(29)
  05e09f0  std 2, 40(1)
  05e09f4  mtctr 0
  05e09f8  lwz 2, 4(28)
  05e09fc  bctrl
  05e0a00  ld 2, 40(1)
  05e0a04  mr 6, 27
  05e0a08  cmpwi 7, 3, 0
  05e0a0c  mr 7, 30
  05e0a10  li 4, 10
  05e0a14  li 3, 1
  05e0a18  cmpwi 6, 31, 5
  05e0a1c  bt 30, 0x5e095c
  05e0a20  li 31, 2
  05e0a24  ld 0, 2608(1)
  05e0a28  clrldi 3, 31, 32
  05e0a2c  ld 25, 2536(1)
  05e0a30  ld 26, 2544(1)
  05e0a34  mtlr 0
  05e0a38  ld 27, 2552(1)
  05e0a3c  ld 28, 2560(1)
  05e0a40  ld 29, 2568(1)
  05e0a44  ld 30, 2576(1)
  05e0a48  ld 31, 2584(1)
  05e0a4c  addi 1, 1, 2592
  05e0a50  blr

FUN_005e0a54:   # 0x5e0a54, 0x23c bytes
  05e0a54  mfcr 12
  05e0a58  stdu 1, -1696(1)
  05e0a5c  stfd 14, 1552(1)
  05e0a60  stfd 15, 1560(1)
  05e0a64  stfd 16, 1568(1)
  05e0a68  stfd 17, 1576(1)
  05e0a6c  stfd 18, 1584(1)
  05e0a70  stfd 19, 1592(1)
  05e0a74  stfd 20, 1600(1)
  05e0a78  stfd 21, 1608(1)
  05e0a7c  stfd 22, 1616(1)
  05e0a80  stfd 23, 1624(1)
  05e0a84  stfd 24, 1632(1)
  05e0a88  stfd 25, 1640(1)
  05e0a8c  stfd 26, 1648(1)
  05e0a90  stfd 27, 1656(1)
  05e0a94  stfd 28, 1664(1)
  05e0a98  stfd 29, 1672(1)
  05e0a9c  stfd 30, 1680(1)
  05e0aa0  stfd 31, 1688(1)
  05e0aa4  std 14, 1408(1)
  05e0aa8  std 15, 1416(1)
  05e0aac  std 16, 1424(1)
  05e0ab0  std 17, 1432(1)
  05e0ab4  std 18, 1440(1)
  05e0ab8  std 19, 1448(1)
  05e0abc  std 20, 1456(1)
  05e0ac0  std 21, 1464(1)
  05e0ac4  std 22, 1472(1)
  05e0ac8  std 23, 1480(1)
  05e0acc  std 24, 1488(1)
  05e0ad0  std 25, 1496(1)
  05e0ad4  std 26, 1504(1)
  05e0ad8  std 27, 1512(1)
  05e0adc  std 28, 1520(1)
  05e0ae0  std 29, 1528(1)
  05e0ae4  mflr 0
  05e0ae8  std 30, 1536(1)
  05e0aec  std 31, 1544(1)
  05e0af0  lis 9, -6079
  05e0af4  std 0, 1712(1)
  05e0af8  std 3, 1376(1)
  05e0afc  std 4, 1384(1)
  05e0b00  ld 10, 0(1)
  05e0b04  ori 9, 9, 40
  05e0b08  std 5, 1392(1)
  05e0b0c  std 6, 1400(1)
  05e0b10  stw 12, 1704(1)
  05e0b14  mr 8, 3
  05e0b18  ld 11, 16(10)
  05e0b1c  lwz 0, 0(11)
  05e0b20  cmpw 7, 0, 9
  05e0b24  bt 30, 0x5e0b2c
  05e0b28  std 2, 40(10)
  05e0b2c  ld 0, 16(3)
  05e0b30  clrldi 8, 8, 32
  05e0b34  cmpdi 7, 0, 0
  05e0b38  std 8, 1344(1)
  05e0b3c  bf 30, 0x5e0c1c
  05e0b40  mr 3, 8
  05e0b44  bl 0x5e061c
  05e0b48  nop
  05e0b4c  li 10, 0
  05e0b50  clrldi 3, 3, 32
  05e0b54  lwz 12, 1704(1)
  05e0b58  ld 0, 1712(1)
  05e0b5c  ld 2, 1736(1)
  05e0b60  mtocrf 32, 12
  05e0b64  ld 3, 1376(1)
  05e0b68  mtlr 0
  05e0b6c  ld 4, 1384(1)
  05e0b70  mtocrf 16, 12
  05e0b74  ld 5, 1392(1)
  05e0b78  mtocrf 8, 12
  05e0b7c  ld 6, 1400(1)
  05e0b80  ld 14, 1408(1)
  05e0b84  ld 15, 1416(1)
  05e0b88  ld 16, 1424(1)
  05e0b8c  ld 17, 1432(1)
  05e0b90  ld 18, 1440(1)
  05e0b94  ld 19, 1448(1)
  05e0b98  ld 20, 1456(1)
  05e0b9c  ld 21, 1464(1)
  05e0ba0  ld 22, 1472(1)
  05e0ba4  ld 23, 1480(1)
  05e0ba8  ld 24, 1488(1)
  05e0bac  ld 25, 1496(1)
  05e0bb0  ld 26, 1504(1)
  05e0bb4  ld 27, 1512(1)
  05e0bb8  ld 28, 1520(1)
  05e0bbc  ld 29, 1528(1)
  05e0bc0  ld 30, 1536(1)
  05e0bc4  ld 31, 1544(1)
  05e0bc8  lfd 14, 1552(1)
  05e0bcc  lfd 15, 1560(1)
  05e0bd0  lfd 16, 1568(1)
  05e0bd4  lfd 17, 1576(1)
  05e0bd8  lfd 18, 1584(1)
  05e0bdc  lfd 19, 1592(1)
  05e0be0  lfd 20, 1600(1)
  05e0be4  lfd 21, 1608(1)
  05e0be8  lfd 22, 1616(1)
  05e0bec  lfd 23, 1624(1)
  05e0bf0  lfd 24, 1632(1)
  05e0bf4  lfd 25, 1640(1)
  05e0bf8  lfd 26, 1648(1)
  05e0bfc  lfd 27, 1656(1)
  05e0c00  lfd 28, 1664(1)
  05e0c04  lfd 29, 1672(1)
  05e0c08  lfd 30, 1680(1)
  05e0c0c  lfd 31, 1688(1)
  05e0c10  addi 1, 1, 1696
  05e0c14  add 1, 1, 10
  05e0c18  blr
  05e0c1c  addi 4, 1, 1696
  05e0c20  mflr 0
  05e0c24  clrldi 5, 0, 32
  05e0c28  addi 0, 1, 112
  05e0c2c  clrldi 0, 0, 32
  05e0c30  mr 3, 0
  05e0c34  std 0, 1352(1)
  05e0c38  bl 0x5dfd88
  05e0c3c  addi 0, 1, 728
  05e0c40  li 5, 616
  05e0c44  ld 4, 1352(1)
  05e0c48  clrldi 0, 0, 32
  05e0c4c  mr 3, 0
  05e0c50  std 0, 1360(1)
  05e0c54  bl 0x5c5ad0
  05e0c58  nop
  05e0c5c  ld 3, 1344(1)
  05e0c60  ld 4, 1360(1)
  05e0c64  bl 0x5e0918
  05e0c68  cmpwi 7, 3, 7
  05e0c6c  bt- 30, 0x5e0c78
  05e0c70  bl 0x5c4840
  05e0c74  nop
  05e0c78  ld 3, 1352(1)
  05e0c7c  ld 4, 1360(1)
  05e0c80  bl 0x5e007c
  05e0c84  lwz 0, 1316(1)
  05e0c88  clrldi 10, 3, 32
  05e0c8c  std 0, 1712(1)

FUN_005e0c94:   # 0x5e0c94, 0x23c bytes
  05e0c94  mfcr 12
  05e0c98  stdu 1, -1712(1)
  05e0c9c  stfd 14, 1568(1)
  05e0ca0  stfd 15, 1576(1)
  05e0ca4  stfd 16, 1584(1)
  05e0ca8  stfd 17, 1592(1)
  05e0cac  stfd 18, 1600(1)
  05e0cb0  stfd 19, 1608(1)
  05e0cb4  stfd 20, 1616(1)
  05e0cb8  stfd 21, 1624(1)
  05e0cbc  stfd 22, 1632(1)
  05e0cc0  stfd 23, 1640(1)
  05e0cc4  stfd 24, 1648(1)
  05e0cc8  stfd 25, 1656(1)
  05e0ccc  stfd 26, 1664(1)
  05e0cd0  stfd 27, 1672(1)
  05e0cd4  stfd 28, 1680(1)
  05e0cd8  stfd 29, 1688(1)
  05e0cdc  stfd 30, 1696(1)
  05e0ce0  stfd 31, 1704(1)
  05e0ce4  std 14, 1424(1)
  05e0ce8  std 15, 1432(1)
  05e0cec  std 16, 1440(1)
  05e0cf0  std 17, 1448(1)
  05e0cf4  std 18, 1456(1)
  05e0cf8  std 19, 1464(1)
  05e0cfc  std 20, 1472(1)
  05e0d00  std 21, 1480(1)
  05e0d04  std 22, 1488(1)
  05e0d08  std 23, 1496(1)
  05e0d0c  std 24, 1504(1)
  05e0d10  std 25, 1512(1)
  05e0d14  std 26, 1520(1)
  05e0d18  std 27, 1528(1)
  05e0d1c  std 28, 1536(1)
  05e0d20  std 29, 1544(1)
  05e0d24  mflr 0
  05e0d28  std 30, 1552(1)
  05e0d2c  std 31, 1560(1)
  05e0d30  lis 9, -6079
  05e0d34  std 0, 1728(1)
  05e0d38  std 3, 1392(1)
  05e0d3c  std 4, 1400(1)
  05e0d40  ld 10, 0(1)
  05e0d44  ori 9, 9, 40
  05e0d48  std 5, 1408(1)
  05e0d4c  std 6, 1416(1)
  05e0d50  stw 12, 1720(1)
  05e0d54  std 3, 1352(1)
  05e0d58  ld 11, 16(10)
  05e0d5c  stw 3, 1344(1)
  05e0d60  lwz 0, 0(11)
  05e0d64  cmpw 7, 0, 9
  05e0d68  bt 30, 0x5e0d70
  05e0d6c  std 2, 40(10)
  05e0d70  addi 0, 1, 112
  05e0d74  addi 9, 1, 728
  05e0d78  std 0, 1376(1)
  05e0d7c  clrldi 0, 0, 32
  05e0d80  std 9, 1384(1)
  05e0d84  mflr 9
  05e0d88  mr 3, 0
  05e0d8c  std 0, 1360(1)
  05e0d90  ld 0, 1384(1)
  05e0d94  clrldi 5, 9, 32
  05e0d98  addi 4, 1, 1712
  05e0d9c  clrldi 0, 0, 32
  05e0da0  std 0, 1368(1)
  05e0da4  bl 0x5dfd88
  05e0da8  ld 4, 1360(1)
  05e0dac  li 5, 616
  05e0db0  ld 3, 1368(1)
  05e0db4  bl 0x5c5ad0
  05e0db8  nop
  05e0dbc  ld 9, 1352(1)
  05e0dc0  lwz 3, 1344(1)
  05e0dc4  ld 0, 16(9)
  05e0dc8  cmpdi 7, 0, 0
  05e0dcc  bf 30, 0x5e0de8
  05e0dd0  ld 4, 1368(1)
  05e0dd4  bl 0x5e050c
  05e0dd8  cmpwi 7, 3, 7
  05e0ddc  bt- 30, 0x5e0df4
  05e0de0  bl 0x5c4840
  05e0de4  nop
  05e0de8  ld 4, 1368(1)
  05e0dec  bl 0x5e0918
  05e0df0  b 0x5e0dd8
  05e0df4  ld 4, 1384(1)
  05e0df8  ld 3, 1376(1)
  05e0dfc  bl 0x5e007c
  05e0e00  lwz 0, 1316(1)
  05e0e04  lwz 12, 1720(1)
  05e0e08  clrldi 10, 3, 32
  05e0e0c  std 0, 1728(1)
  05e0e10  ld 0, 1728(1)
  05e0e14  mtocrf 32, 12
  05e0e18  ld 2, 1752(1)
  05e0e1c  mtocrf 16, 12
  05e0e20  ld 3, 1392(1)
  05e0e24  mtlr 0
  05e0e28  ld 4, 1400(1)
  05e0e2c  mtocrf 8, 12
  05e0e30  ld 5, 1408(1)
  05e0e34  ld 6, 1416(1)
  05e0e38  ld 14, 1424(1)
  05e0e3c  ld 15, 1432(1)
  05e0e40  ld 16, 1440(1)
  05e0e44  ld 17, 1448(1)
  05e0e48  ld 18, 1456(1)
  05e0e4c  ld 19, 1464(1)
  05e0e50  ld 20, 1472(1)
  05e0e54  ld 21, 1480(1)
  05e0e58  ld 22, 1488(1)
  05e0e5c  ld 23, 1496(1)
  05e0e60  ld 24, 1504(1)
  05e0e64  ld 25, 1512(1)
  05e0e68  ld 26, 1520(1)
  05e0e6c  ld 27, 1528(1)
  05e0e70  ld 28, 1536(1)
  05e0e74  ld 29, 1544(1)
  05e0e78  ld 30, 1552(1)
  05e0e7c  ld 31, 1560(1)
  05e0e80  lfd 14, 1568(1)
  05e0e84  lfd 15, 1576(1)
  05e0e88  lfd 16, 1584(1)
  05e0e8c  lfd 17, 1592(1)
  05e0e90  lfd 18, 1600(1)
  05e0e94  lfd 19, 1608(1)
  05e0e98  lfd 20, 1616(1)
  05e0e9c  lfd 21, 1624(1)
  05e0ea0  lfd 22, 1632(1)
  05e0ea4  lfd 23, 1640(1)
  05e0ea8  lfd 24, 1648(1)
  05e0eac  lfd 25, 1656(1)
  05e0eb0  lfd 26, 1664(1)
  05e0eb4  lfd 27, 1672(1)
  05e0eb8  lfd 28, 1680(1)
  05e0ebc  lfd 29, 1688(1)
  05e0ec0  lfd 30, 1696(1)
  05e0ec4  lfd 31, 1704(1)
  05e0ec8  addi 1, 1, 1712
  05e0ecc  add 1, 1, 10

FUN_005e0ed4:   # 0x5e0ed4, 0x244 bytes
  05e0ed4  mfcr 12
  05e0ed8  stdu 1, -1712(1)
  05e0edc  stfd 14, 1568(1)
  05e0ee0  stfd 15, 1576(1)
  05e0ee4  stfd 16, 1584(1)
  05e0ee8  stfd 17, 1592(1)
  05e0eec  stfd 18, 1600(1)
  05e0ef0  stfd 19, 1608(1)
  05e0ef4  stfd 20, 1616(1)
  05e0ef8  stfd 21, 1624(1)
  05e0efc  stfd 22, 1632(1)
  05e0f00  stfd 23, 1640(1)
  05e0f04  stfd 24, 1648(1)
  05e0f08  stfd 25, 1656(1)
  05e0f0c  stfd 26, 1664(1)
  05e0f10  stfd 27, 1672(1)
  05e0f14  stfd 28, 1680(1)
  05e0f18  stfd 29, 1688(1)
  05e0f1c  stfd 30, 1696(1)
  05e0f20  stfd 31, 1704(1)
  05e0f24  std 14, 1424(1)
  05e0f28  std 15, 1432(1)
  05e0f2c  std 16, 1440(1)
  05e0f30  std 17, 1448(1)
  05e0f34  std 18, 1456(1)
  05e0f38  std 19, 1464(1)
  05e0f3c  std 20, 1472(1)
  05e0f40  std 21, 1480(1)
  05e0f44  std 22, 1488(1)
  05e0f48  std 23, 1496(1)
  05e0f4c  std 24, 1504(1)
  05e0f50  std 25, 1512(1)
  05e0f54  std 26, 1520(1)
  05e0f58  std 27, 1528(1)
  05e0f5c  std 28, 1536(1)
  05e0f60  std 29, 1544(1)
  05e0f64  mflr 0
  05e0f68  std 30, 1552(1)
  05e0f6c  std 31, 1560(1)
  05e0f70  lis 9, -6079
  05e0f74  std 0, 1728(1)
  05e0f78  addi 0, 1, 112
  05e0f7c  std 3, 1352(1)
  05e0f80  ld 10, 0(1)
  05e0f84  clrldi 0, 0, 32
  05e0f88  std 3, 1392(1)
  05e0f8c  std 4, 1400(1)
  05e0f90  std 5, 1408(1)
  05e0f94  stw 4, 1360(1)
  05e0f98  ld 11, 16(10)
  05e0f9c  mr 3, 0
  05e0fa0  stw 5, 1364(1)
  05e0fa4  std 6, 1416(1)
  05e0fa8  stw 12, 1720(1)
  05e0fac  std 0, 1368(1)
  05e0fb0  lwz 0, 0(11)
  05e0fb4  ori 9, 9, 40
  05e0fb8  ld 11, 1352(1)
  05e0fbc  addi 4, 1, 1712
  05e0fc0  cmpw 7, 0, 9
  05e0fc4  stw 11, 1344(1)
  05e0fc8  mflr 0
  05e0fcc  clrldi 5, 0, 32
  05e0fd0  bt 30, 0x5e0fd8
  05e0fd4  std 2, 40(10)
  05e0fd8  bl 0x5dfd88
  05e0fdc  addi 0, 1, 728
  05e0fe0  li 5, 616
  05e0fe4  ld 4, 1368(1)
  05e0fe8  clrldi 0, 0, 32
  05e0fec  mr 3, 0
  05e0ff0  std 0, 1376(1)
  05e0ff4  bl 0x5c5ad0
  05e0ff8  nop
  05e0ffc  ld 11, 1352(1)
  05e1000  lwz 9, 1360(1)
  05e1004  lwz 0, 1364(1)
  05e1008  ld 4, 1376(1)
  05e100c  lwz 3, 1344(1)
  05e1010  std 0, 24(11)
  05e1014  std 9, 16(11)
  05e1018  bl 0x5e0918
  05e101c  ld 4, 1376(1)
  05e1020  mr 0, 3
  05e1024  ld 3, 1368(1)
  05e1028  li 10, 0
  05e102c  cmpwi 7, 0, 7
  05e1030  clrldi 9, 0, 32
  05e1034  bt- 30, 0x5e1104
  05e1038  lwz 12, 1720(1)
  05e103c  mr 3, 9
  05e1040  ld 0, 1728(1)
  05e1044  ld 2, 1752(1)
  05e1048  mtocrf 32, 12
  05e104c  ld 3, 1392(1)
  05e1050  mtlr 0
  05e1054  ld 4, 1400(1)
  05e1058  mtocrf 16, 12
  05e105c  ld 5, 1408(1)
  05e1060  mtocrf 8, 12
  05e1064  ld 6, 1416(1)
  05e1068  ld 14, 1424(1)
  05e106c  ld 15, 1432(1)
  05e1070  ld 16, 1440(1)
  05e1074  ld 17, 1448(1)
  05e1078  ld 18, 1456(1)
  05e107c  ld 19, 1464(1)
  05e1080  ld 20, 1472(1)
  05e1084  ld 21, 1480(1)
  05e1088  ld 22, 1488(1)
  05e108c  ld 23, 1496(1)
  05e1090  ld 24, 1504(1)
  05e1094  ld 25, 1512(1)
  05e1098  ld 26, 1520(1)
  05e109c  ld 27, 1528(1)
  05e10a0  ld 28, 1536(1)
  05e10a4  ld 29, 1544(1)
  05e10a8  ld 30, 1552(1)
  05e10ac  ld 31, 1560(1)
  05e10b0  lfd 14, 1568(1)
  05e10b4  lfd 15, 1576(1)
  05e10b8  lfd 16, 1584(1)
  05e10bc  lfd 17, 1592(1)
  05e10c0  lfd 18, 1600(1)
  05e10c4  lfd 19, 1608(1)
  05e10c8  lfd 20, 1616(1)
  05e10cc  lfd 21, 1624(1)
  05e10d0  lfd 22, 1632(1)
  05e10d4  lfd 23, 1640(1)
  05e10d8  lfd 24, 1648(1)
  05e10dc  lfd 25, 1656(1)
  05e10e0  lfd 26, 1664(1)
  05e10e4  lfd 27, 1672(1)
  05e10e8  lfd 28, 1680(1)
  05e10ec  lfd 29, 1688(1)
  05e10f0  lfd 30, 1696(1)
  05e10f4  lfd 31, 1704(1)
  05e10f8  addi 1, 1, 1712
  05e10fc  add 1, 1, 10
  05e1100  blr
  05e1104  bl 0x5e007c
  05e1108  lwz 0, 1316(1)
  05e110c  clrldi 10, 3, 32
  05e1110  std 0, 1728(1)
  05e1114  b 0x5e1038

_Z12read_uleb128PKhPy:   # 0x5e1118, 0x38 bytes
  05e1118  li 11, 0
  05e111c  li 10, 0
  05e1120  lbz 0, 0(3)
  05e1124  addi 3, 3, 1
  05e1128  extsb 9, 0
  05e112c  clrldi 0, 0, 57
  05e1130  cmpwi 7, 9, 0
  05e1134  sld 0, 0, 11
  05e1138  addi 11, 11, 7
  05e113c  or 10, 10, 0
  05e1140  bt 28, 0x5e1120
  05e1144  clrldi 3, 3, 32
  05e1148  std 10, 0(4)
  05e114c  blr

FUN_005e1150:   # 0x5e1150, 0x58 bytes
  05e1150  li 10, 0
  05e1154  li 8, 0
  05e1158  lbz 11, 0(3)
  05e115c  addi 3, 3, 1
  05e1160  extsb 0, 11
  05e1164  clrldi 9, 11, 57
  05e1168  cmpwi 7, 0, 0
  05e116c  sld 9, 9, 10
  05e1170  addi 10, 10, 7
  05e1174  or 8, 8, 9
  05e1178  bt 28, 0x5e1158
  05e117c  cmplwi 7, 10, 63
  05e1180  bt 29, 0x5e119c
  05e1184  rlwinm 0, 11, 0, 25, 25
  05e1188  cmpwi 7, 0, 0
  05e118c  bt 30, 0x5e119c
  05e1190  li 0, -1
  05e1194  sld 0, 0, 10
  05e1198  or 8, 8, 0
  05e119c  clrldi 3, 3, 32
  05e11a0  std 8, 0(4)
  05e11a4  blr

FUN_005e11a8:   # 0x5e11a8, 0x28 bytes
  05e11a8  lwz 9, 8(4)
  05e11ac  li 3, 1
  05e11b0  lwz 0, 8(5)
  05e11b4  cmplw 7, 9, 0
  05e11b8  bt 29, 0x5e11c8
  05e11bc  li 3, -1
  05e11c0  bt 28, 0x5e11c8
  05e11c4  li 3, 0
  05e11c8  extsw 3, 3
  05e11cc  blr

FUN_005e11d0:   # 0x5e11d0, 0x13c bytes
  05e11d0  slwi 9, 6, 1
  05e11d4  mflr 0
  05e11d8  stdu 1, -176(1)
  05e11dc  std 29, 152(1)
  05e11e0  addi 29, 9, 1
  05e11e4  std 26, 128(1)
  05e11e8  cmpw 7, 29, 7
  05e11ec  std 28, 144(1)
  05e11f0  std 24, 112(1)
  05e11f4  std 25, 120(1)
  05e11f8  std 27, 136(1)
  05e11fc  std 30, 160(1)
  05e1200  std 31, 168(1)
  05e1204  std 0, 192(1)
  05e1208  mr 26, 7
  05e120c  mr 28, 5
  05e1210  bf 28, 0x5e12dc
  05e1214  mr 25, 6
  05e1218  clrldi 24, 3, 32
  05e121c  clrldi 27, 4, 32
  05e1220  b 0x5e1284
  05e1224  slwi 0, 25, 2
  05e1228  std 2, 40(1)
  05e122c  add 0, 0, 28
  05e1230  lwz 5, 0(30)
  05e1234  mr 3, 24
  05e1238  lwz 2, 4(27)
  05e123c  clrldi 31, 0, 32
  05e1240  lwz 0, 0(27)
  05e1244  mr 25, 29
  05e1248  mtctr 0
  05e124c  lwz 4, 0(31)
  05e1250  bctrl
  05e1254  ld 2, 40(1)
  05e1258  slwi 9, 29, 1
  05e125c  cmpwi 7, 3, 0
  05e1260  addi 9, 9, 1
  05e1264  mr 29, 9
  05e1268  cmpw 6, 26, 9
  05e126c  bf 28, 0x5e12dc
  05e1270  lwz 9, 0(31)
  05e1274  lwz 0, 0(30)
  05e1278  stw 0, 0(31)
  05e127c  stw 9, 0(30)
  05e1280  bf 25, 0x5e12dc
  05e1284  addi 31, 29, 1
  05e1288  slwi 0, 29, 2
  05e128c  cmpw 7, 26, 31
  05e1290  add 9, 28, 0
  05e1294  mr 3, 24
  05e1298  clrldi 30, 9, 32
  05e129c  bf 29, 0x5e1224
  05e12a0  lwz 0, 0(27)
  05e12a4  lwz 5, 4(30)
  05e12a8  std 2, 40(1)
  05e12ac  mtctr 0
  05e12b0  lwz 4, 0(30)
  05e12b4  lwz 2, 4(27)
  05e12b8  bctrl
  05e12bc  ld 2, 40(1)
  05e12c0  slwi 0, 31, 2
  05e12c4  cmpwi 7, 3, 0
  05e12c8  add 9, 28, 0
  05e12cc  bf 28, 0x5e1224
  05e12d0  clrldi 30, 9, 32
  05e12d4  mr 29, 31
  05e12d8  b 0x5e1224
  05e12dc  ld 0, 192(1)
  05e12e0  ld 24, 112(1)
  05e12e4  ld 25, 120(1)
  05e12e8  mtlr 0
  05e12ec  ld 26, 128(1)
  05e12f0  ld 27, 136(1)
  05e12f4  ld 28, 144(1)
  05e12f8  ld 29, 152(1)
  05e12fc  ld 30, 160(1)
  05e1300  ld 31, 168(1)
  05e1304  addi 1, 1, 176
  05e1308  blr

FUN_005e130c:   # 0x5e130c, 0x118 bytes
  05e130c  stdu 1, -192(1)
  05e1310  mflr 0
  05e1314  std 25, 136(1)
  05e1318  std 0, 208(1)
  05e131c  lwz 25, 4(5)
  05e1320  std 31, 184(1)
  05e1324  srwi 9, 25, 1
  05e1328  std 23, 120(1)
  05e132c  addi 31, 9, -1
  05e1330  std 24, 128(1)
  05e1334  cmpwi 7, 31, 0
  05e1338  std 26, 144(1)
  05e133c  std 27, 152(1)
  05e1340  std 28, 160(1)
  05e1344  std 29, 168(1)
  05e1348  std 30, 176(1)
  05e134c  mr 24, 3
  05e1350  mr 23, 4
  05e1354  addi 26, 5, 8
  05e1358  bt 28, 0x5e1390
  05e135c  clrldi 27, 3, 32
  05e1360  clrldi 28, 4, 32
  05e1364  clrldi 29, 26, 32
  05e1368  extsw 30, 25
  05e136c  extsw 6, 31
  05e1370  mr 3, 27
  05e1374  addi 31, 31, -1
  05e1378  mr 4, 28
  05e137c  mr 5, 29
  05e1380  mr 7, 30
  05e1384  bl 0x5e11d0
  05e1388  cmpwi 7, 31, 0
  05e138c  bf 28, 0x5e136c
  05e1390  addi 30, 25, -1
  05e1394  cmpwi 7, 30, 0
  05e1398  bf 29, 0x5e13f0
  05e139c  slwi 9, 25, 2
  05e13a0  clrldi 27, 24, 32
  05e13a4  add 9, 26, 9
  05e13a8  clrldi 28, 23, 32
  05e13ac  addi 31, 9, -4
  05e13b0  clrldi 29, 26, 32
  05e13b4  clrldi 9, 31, 32
  05e13b8  lwz 11, 0(26)
  05e13bc  extsw 7, 30
  05e13c0  mr 3, 27
  05e13c4  addi 30, 30, -1
  05e13c8  mr 4, 28
  05e13cc  lwz 0, 0(9)
  05e13d0  mr 5, 29
  05e13d4  li 6, 0
  05e13d8  stw 0, 0(26)
  05e13dc  stw 11, 0(9)
  05e13e0  bl 0x5e11d0
  05e13e4  cmpwi 7, 30, 0
  05e13e8  addi 31, 31, -4
  05e13ec  bt 29, 0x5e13b4
  05e13f0  ld 0, 208(1)
  05e13f4  ld 23, 120(1)
  05e13f8  ld 24, 128(1)
  05e13fc  mtlr 0
  05e1400  ld 25, 136(1)
  05e1404  ld 26, 144(1)
  05e1408  ld 27, 152(1)
  05e140c  ld 28, 160(1)
  05e1410  ld 29, 168(1)
  05e1414  ld 30, 176(1)
  05e1418  ld 31, 184(1)
  05e141c  addi 1, 1, 192
  05e1420  blr

FUN_005e1424:   # 0x5e1424, 0x2c bytes
  05e1424  lwz 4, -23524(2)
  05e1428  mflr 0
  05e142c  lwz 3, -23528(2)
  05e1430  stdu 1, -112(1)
  05e1434  std 0, 128(1)
  05e1438  bl 0x5e30a8
  05e143c  nop
  05e1440  ld 0, 128(1)
  05e1444  addi 1, 1, 112
  05e1448  mtlr 0
  05e144c  blr

_Z20emergency_mutex_initv:   # 0x5e1450, 0x2c bytes
  05e1450  lwz 3, -23528(2)
  05e1454  mflr 0
  05e1458  stdu 1, -112(1)
  05e145c  addi 3, 3, 8
  05e1460  std 0, 128(1)
  05e1464  bl 0x5e2ec8
  05e1468  nop
  05e146c  ld 0, 128(1)
  05e1470  addi 1, 1, 112
  05e1474  mtlr 0
  05e1478  blr

FUN_005e147c:   # 0x5e147c, 0x84 bytes
  05e147c  cmpwi 7, 3, 255
  05e1480  mflr 0
  05e1484  stdu 1, -112(1)
  05e1488  std 0, 128(1)
  05e148c  bt 30, 0x5e14c0
  05e1490  rlwinm 3, 3, 0, 25, 27
  05e1494  cmpwi 7, 3, 32
  05e1498  bt 30, 0x5e14d8
  05e149c  bf 29, 0x5e14b8
  05e14a0  cmpwi 7, 3, 48
  05e14a4  bt 30, 0x5e1500
  05e14a8  cmpwi 7, 3, 80
  05e14ac  bt 30, 0x5e14c0
  05e14b0  bl 0x5c4840
  05e14b4  nop
  05e14b8  cmpwi 7, 3, 0
  05e14bc  bf 30, 0x5e14f0
  05e14c0  li 3, 0
  05e14c4  ld 0, 128(1)
  05e14c8  clrldi 3, 3, 32
  05e14cc  addi 1, 1, 112
  05e14d0  mtlr 0
  05e14d4  blr
  05e14d8  ld 0, 128(1)
  05e14dc  addi 1, 1, 112
  05e14e0  lwz 3, 4(4)
  05e14e4  mtlr 0
  05e14e8  clrldi 3, 3, 32
  05e14ec  blr
  05e14f0  cmpwi 7, 3, 16
  05e14f4  bt 30, 0x5e14c0
  05e14f8  bl 0x5c4840
  05e14fc  nop

FUN_005e1508:   # 0x5e1508, 0xa8 bytes
  05e1508  stdu 1, -176(1)
  05e150c  mflr 0
  05e1510  std 30, 160(1)
  05e1514  clrlwi 30, 3, 24
  05e1518  std 27, 136(1)
  05e151c  cmpwi 7, 30, 80
  05e1520  std 28, 144(1)
  05e1524  std 29, 152(1)
  05e1528  std 31, 168(1)
  05e152c  std 0, 192(1)
  05e1530  mr 29, 3
  05e1534  mr 28, 6
  05e1538  mr 27, 4
  05e153c  bt 30, 0x5e15a8
  05e1540  clrlwi 0, 30, 28
  05e1544  mr 31, 5
  05e1548  cmplwi 7, 0, 12
  05e154c  bf 29, 0x5e1558
  05e1550  bl 0x5c4840
  05e1554  nop
  05e1558  lwz 11, -23520(2)
  05e155c  rlwinm 9, 0, 2, 26, 29
  05e1560  lwzx 0, 9, 11
  05e1564  extsw 0, 0
  05e1568  add 0, 0, 11
  05e156c  mtctr 0
  05e1570  bctr
  05e1574  <unknown>
  05e1578  <unknown>
  05e157c  <unknown>
  05e1580  <unknown>
  05e1584  <unknown>
  05e1588  <unknown>
  05e158c  <unknown>
  05e1590  <unknown>
  05e1594  <unknown>
  05e1598  <unknown>
  05e159c  <unknown>
  05e15a0  <unknown>
  05e15a4  <unknown>
  05e15a8  addi 9, 5, 3
  05e15ac  rlwinm 9, 9, 0, 0, 29

FUN_005e170c:   # 0x5e170c, 0xb8 bytes
  05e170c  stdu 1, -176(1)
  05e1710  mflr 0
  05e1714  std 26, 128(1)
  05e1718  std 0, 192(1)
  05e171c  std 27, 136(1)
  05e1720  std 28, 144(1)
  05e1724  std 29, 152(1)
  05e1728  mr 28, 3
  05e172c  mr 29, 4
  05e1730  mr 4, 3
  05e1734  lwz 3, 16(3)
  05e1738  mr 27, 5
  05e173c  rldicl 3, 3, 43, 56
  05e1740  addi 29, 29, 8
  05e1744  bl 0x5e147c
  05e1748  addi 6, 1, 112
  05e174c  clrldi 26, 3, 32
  05e1750  lwz 3, 16(28)
  05e1754  clrldi 5, 29, 32
  05e1758  mr 4, 26
  05e175c  rldicl 3, 3, 43, 56
  05e1760  addi 27, 27, 8
  05e1764  bl 0x5e1508
  05e1768  lwz 3, 16(28)
  05e176c  mr 4, 26
  05e1770  rldicl 3, 3, 43, 56
  05e1774  clrldi 5, 27, 32
  05e1778  addi 6, 1, 116
  05e177c  bl 0x5e1508
  05e1780  lwz 9, 112(1)
  05e1784  lwz 0, 116(1)
  05e1788  li 3, 1
  05e178c  cmplw 7, 9, 0
  05e1790  bt 29, 0x5e17a0
  05e1794  li 3, -1
  05e1798  bt 28, 0x5e17a0
  05e179c  li 3, 0
  05e17a0  ld 0, 192(1)
  05e17a4  extsw 3, 3
  05e17a8  ld 26, 128(1)
  05e17ac  ld 27, 136(1)
  05e17b0  mtlr 0
  05e17b4  ld 28, 144(1)
  05e17b8  ld 29, 152(1)
  05e17bc  addi 1, 1, 176
  05e17c0  blr

FUN_005e17c4:   # 0x5e17c4, 0x13c bytes
  05e17c4  stdu 1, -176(1)
  05e17c8  mflr 0
  05e17cc  std 31, 168(1)
  05e17d0  addi 31, 3, 9
  05e17d4  std 30, 160(1)
  05e17d8  std 28, 144(1)
  05e17dc  std 29, 152(1)
  05e17e0  std 0, 192(1)
  05e17e4  lbz 0, 0(31)
  05e17e8  mr 30, 3
  05e17ec  clrldi 3, 31, 32
  05e17f0  cmpwi 7, 0, 122
  05e17f4  bt 30, 0x5e1820
  05e17f8  ld 0, 192(1)
  05e17fc  li 3, 0
  05e1800  ld 28, 144(1)
  05e1804  extsw 3, 3
  05e1808  ld 29, 152(1)
  05e180c  ld 30, 160(1)
  05e1810  mtlr 0
  05e1814  ld 31, 168(1)
  05e1818  addi 1, 1, 176
  05e181c  blr
  05e1820  bl 0x5c8510
  05e1824  nop
  05e1828  addi 28, 1, 120
  05e182c  add 3, 31, 3
  05e1830  clrldi 29, 28, 32
  05e1834  addi 3, 3, 1
  05e1838  mr 4, 29
  05e183c  clrldi 3, 3, 32
  05e1840  bl 0x5e1118
  05e1844  addi 4, 1, 128
  05e1848  clrldi 3, 3, 32
  05e184c  bl 0x5e1150
  05e1850  lbz 0, 8(30)
  05e1854  addi 9, 3, 1
  05e1858  cmpwi 7, 0, 1
  05e185c  bt 30, 0x5e1870
  05e1860  clrldi 3, 3, 32
  05e1864  mr 4, 29
  05e1868  bl 0x5e1118
  05e186c  mr 9, 3
  05e1870  addi 31, 31, 1
  05e1874  clrldi 3, 9, 32
  05e1878  mr 4, 28
  05e187c  bl 0x5e1118
  05e1880  lbz 0, 0(31)
  05e1884  cmpwi 7, 0, 82
  05e1888  bf 30, 0x5e18a4
  05e188c  b 0x5e18d8
  05e1890  bf 26, 0x5e17f8
  05e1894  lbzu 0, 1(31)
  05e1898  addi 3, 3, 1
  05e189c  cmpwi 7, 0, 82
  05e18a0  bt 30, 0x5e18d8
  05e18a4  cmpwi 7, 0, 80
  05e18a8  addi 5, 3, 1
  05e18ac  li 4, 0
  05e18b0  clrldi 5, 5, 32
  05e18b4  addi 6, 1, 112
  05e18b8  cmpwi 6, 0, 76
  05e18bc  bf 30, 0x5e1890
  05e18c0  lbz 3, 0(3)
  05e18c4  clrldi 3, 3, 57
  05e18c8  bl 0x5e1508
  05e18cc  lbzu 0, 1(31)
  05e18d0  cmpwi 7, 0, 82
  05e18d4  bf 30, 0x5e18a4
  05e18d8  ld 0, 192(1)
  05e18dc  lbz 3, 0(3)
  05e18e0  ld 28, 144(1)
  05e18e4  mtlr 0
  05e18e8  extsw 3, 3
  05e18ec  ld 29, 152(1)
  05e18f0  ld 30, 160(1)
  05e18f4  ld 31, 168(1)
  05e18f8  addi 1, 1, 176
  05e18fc  blr

FUN_005e1900:   # 0x5e1900, 0x80 bytes
  05e1900  cmpwi 7, 3, 255
  05e1904  mflr 0
  05e1908  stdu 1, -112(1)
  05e190c  std 0, 128(1)
  05e1910  bt- 30, 0x5e197c
  05e1914  clrlwi 3, 3, 29
  05e1918  cmpwi 7, 3, 2
  05e191c  bt 30, 0x5e195c
  05e1920  bf 29, 0x5e193c
  05e1924  cmpwi 7, 3, 3
  05e1928  bt 30, 0x5e1944
  05e192c  cmpwi 7, 3, 4
  05e1930  bt 30, 0x5e1974
  05e1934  bl 0x5c4840
  05e1938  nop
  05e193c  cmpwi 7, 3, 0
  05e1940  bf 30, 0x5e1934
  05e1944  li 3, 4
  05e1948  ld 0, 128(1)
  05e194c  rlwinm 3, 3, 0, 28, 30
  05e1950  addi 1, 1, 112
  05e1954  mtlr 0
  05e1958  blr
  05e195c  ld 0, 128(1)
  05e1960  li 3, 2
  05e1964  addi 1, 1, 112
  05e1968  rlwinm 3, 3, 0, 28, 30
  05e196c  mtlr 0
  05e1970  blr
  05e1974  li 3, 8
  05e1978  b 0x5e1948
  05e197c  li 3, 0

FUN_005e1984:   # 0x5e1984, 0x1e8 bytes
  05e1984  stdu 1, -224(1)
  05e1988  mflr 0
  05e198c  std 24, 160(1)
  05e1990  std 25, 168(1)
  05e1994  std 26, 176(1)
  05e1998  std 27, 184(1)
  05e199c  std 29, 200(1)
  05e19a0  std 30, 208(1)
  05e19a4  std 31, 216(1)
  05e19a8  std 21, 136(1)
  05e19ac  std 22, 144(1)
  05e19b0  std 23, 152(1)
  05e19b4  std 28, 192(1)
  05e19b8  std 0, 240(1)
  05e19bc  lwz 0, 16(3)
  05e19c0  clrldi 31, 4, 32
  05e19c4  mr 27, 3
  05e19c8  srwi 29, 0, 21
  05e19cc  mr 30, 4
  05e19d0  mr 24, 3
  05e19d4  mr 4, 3
  05e19d8  clrldi 3, 29, 56
  05e19dc  mr 25, 5
  05e19e0  bl 0x5e147c
  05e19e4  lwz 0, 0(31)
  05e19e8  mr 26, 3
  05e19ec  cmpwi 7, 0, 0
  05e19f0  bt 30, 0x5e1b28
  05e19f4  clrlwi 28, 29, 24
  05e19f8  li 23, 0
  05e19fc  addi 21, 1, 112
  05e1a00  addi 22, 1, 116
  05e1a04  b 0x5e1a54
  05e1a08  addi 9, 30, 8
  05e1a0c  clrldi 9, 9, 32
  05e1a10  lwz 11, 0(9)
  05e1a14  stw 11, 112(1)
  05e1a18  cmpwi 7, 11, 0
  05e1a1c  lwz 0, 4(9)
  05e1a20  stw 0, 116(1)
  05e1a24  bt 30, 0x5e1a38
  05e1a28  sub 0, 25, 11
  05e1a2c  lwz 9, 116(1)
  05e1a30  cmplw 7, 0, 9
  05e1a34  bt 28, 0x5e1b2c
  05e1a38  lwz 9, 0(31)
  05e1a3c  add 9, 30, 9
  05e1a40  addi 30, 9, 4
  05e1a44  clrldi 31, 30, 32
  05e1a48  lwz 0, 0(31)
  05e1a4c  cmpwi 7, 0, 0
  05e1a50  bt 30, 0x5e1b28
  05e1a54  lwz 3, 4(31)
  05e1a58  cmpwi 7, 3, 0
  05e1a5c  bt 30, 0x5e1a38
  05e1a60  lwz 0, 16(27)
  05e1a64  rlwinm 0, 0, 0, 2, 2
  05e1a68  cmpwi 7, 0, 0
  05e1a6c  bt 30, 0x5e1aa0
  05e1a70  addi 0, 30, 4
  05e1a74  sub 0, 0, 3
  05e1a78  cmpw 7, 23, 0
  05e1a7c  bt 30, 0x5e1aa0
  05e1a80  clrldi 3, 0, 32
  05e1a84  mr 23, 0
  05e1a88  bl 0x5e17c4
  05e1a8c  mr 4, 24
  05e1a90  mr 28, 3
  05e1a94  clrldi 3, 3, 56
  05e1a98  bl 0x5e147c
  05e1a9c  mr 26, 3
  05e1aa0  cmpwi 7, 28, 0
  05e1aa4  bt 30, 0x5e1a08
  05e1aa8  clrldi 29, 28, 56
  05e1aac  addi 5, 30, 8
  05e1ab0  clrldi 4, 26, 32
  05e1ab4  clrldi 5, 5, 32
  05e1ab8  clrldi 6, 21, 32
  05e1abc  mr 3, 29
  05e1ac0  bl 0x5e1508
  05e1ac4  li 4, 0
  05e1ac8  clrldi 5, 3, 32
  05e1acc  clrldi 6, 22, 32
  05e1ad0  clrldi 3, 28, 60
  05e1ad4  bl 0x5e1508
  05e1ad8  mr 3, 29
  05e1adc  bl 0x5e1900
  05e1ae0  li 0, -1
  05e1ae4  cmplwi 7, 3, 3
  05e1ae8  bt 29, 0x5e1afc
  05e1aec  slwi 0, 3, 3
  05e1af0  li 9, 1
  05e1af4  slw 9, 9, 0
  05e1af8  addi 0, 9, -1
  05e1afc  lwz 11, 112(1)
  05e1b00  and 9, 0, 11
  05e1b04  cmpwi 9, 0
  05e1b08  bf 2, 0x5e1a28
  05e1b0c  lwz 9, 0(31)
  05e1b10  add 9, 30, 9
  05e1b14  addi 30, 9, 4
  05e1b18  clrldi 31, 30, 32
  05e1b1c  lwz 0, 0(31)
  05e1b20  cmpwi 7, 0, 0
  05e1b24  bf 30, 0x5e1a54
  05e1b28  li 31, 0
  05e1b2c  ld 0, 240(1)
  05e1b30  mr 3, 31
  05e1b34  ld 21, 136(1)
  05e1b38  ld 22, 144(1)
  05e1b3c  mtlr 0
  05e1b40  ld 23, 152(1)
  05e1b44  ld 24, 160(1)
  05e1b48  ld 25, 168(1)
  05e1b4c  ld 26, 176(1)
  05e1b50  ld 27, 184(1)
  05e1b54  ld 28, 192(1)
  05e1b58  ld 29, 200(1)
  05e1b5c  ld 30, 208(1)
  05e1b60  ld 31, 216(1)
  05e1b64  addi 1, 1, 224
  05e1b68  blr

FUN_005e1b6c:   # 0x5e1b6c, 0x1d0 bytes
  05e1b6c  stdu 1, -208(1)
  05e1b70  mflr 0
  05e1b74  std 23, 136(1)
  05e1b78  std 24, 144(1)
  05e1b7c  std 25, 152(1)
  05e1b80  std 27, 168(1)
  05e1b84  std 29, 184(1)
  05e1b88  std 30, 192(1)
  05e1b8c  std 31, 200(1)
  05e1b90  std 22, 128(1)
  05e1b94  std 26, 160(1)
  05e1b98  std 28, 176(1)
  05e1b9c  std 0, 224(1)
  05e1ba0  lwz 0, 16(3)
  05e1ba4  clrldi 30, 5, 32
  05e1ba8  mr 27, 3
  05e1bac  srwi 29, 0, 21
  05e1bb0  mr 24, 3
  05e1bb4  mr 23, 4
  05e1bb8  mr 4, 3
  05e1bbc  clrldi 3, 29, 56
  05e1bc0  mr 31, 5
  05e1bc4  bl 0x5e147c
  05e1bc8  lwz 0, 0(30)
  05e1bcc  mr 25, 3
  05e1bd0  cmpwi 7, 0, 0
  05e1bd4  bt 30, 0x5e1cfc
  05e1bd8  clrlwi 28, 29, 24
  05e1bdc  li 26, 0
  05e1be0  addi 22, 1, 112
  05e1be4  b 0x5e1c3c
  05e1be8  lwz 0, 8(30)
  05e1bec  cmpwi 7, 0, 0
  05e1bf0  bt 30, 0x5e1c20
  05e1bf4  lwz 9, 0(23)
  05e1bf8  cmpwi 7, 9, 0
  05e1bfc  bt 30, 0x5e1c20
  05e1c00  clrldi 9, 9, 32
  05e1c04  lwz 11, 4(9)
  05e1c08  slwi 0, 11, 2
  05e1c0c  addi 11, 11, 1
  05e1c10  extsw 0, 0
  05e1c14  stw 11, 4(9)
  05e1c18  add 9, 9, 0
  05e1c1c  stw 31, 8(9)
  05e1c20  lwz 9, 0(30)
  05e1c24  add 9, 31, 9
  05e1c28  addi 31, 9, 4
  05e1c2c  clrldi 30, 31, 32
  05e1c30  lwz 0, 0(30)
  05e1c34  cmpwi 7, 0, 0
  05e1c38  bt 30, 0x5e1cfc
  05e1c3c  lwz 3, 4(30)
  05e1c40  cmpwi 7, 3, 0
  05e1c44  bt 30, 0x5e1c20
  05e1c48  lwz 0, 16(27)
  05e1c4c  rlwinm 0, 0, 0, 2, 2
  05e1c50  cmpwi 7, 0, 0
  05e1c54  bt 30, 0x5e1c88
  05e1c58  addi 0, 31, 4
  05e1c5c  sub 0, 0, 3
  05e1c60  cmpw 7, 0, 26
  05e1c64  bt 30, 0x5e1d34
  05e1c68  clrldi 3, 0, 32
  05e1c6c  mr 26, 0
  05e1c70  bl 0x5e17c4
  05e1c74  mr 4, 24
  05e1c78  mr 28, 3
  05e1c7c  clrldi 3, 3, 56
  05e1c80  bl 0x5e147c
  05e1c84  mr 25, 3
  05e1c88  cmpwi 7, 28, 0
  05e1c8c  bt 30, 0x5e1be8
  05e1c90  clrldi 29, 28, 56
  05e1c94  addi 5, 31, 8
  05e1c98  clrldi 4, 25, 32
  05e1c9c  clrldi 5, 5, 32
  05e1ca0  clrldi 6, 22, 32
  05e1ca4  mr 3, 29
  05e1ca8  bl 0x5e1508
  05e1cac  mr 3, 29
  05e1cb0  bl 0x5e1900
  05e1cb4  li 9, -1
  05e1cb8  cmplwi 7, 3, 3
  05e1cbc  bt 29, 0x5e1cd0
  05e1cc0  slwi 0, 3, 3
  05e1cc4  li 9, 1
  05e1cc8  slw 9, 9, 0
  05e1ccc  addi 9, 9, -1
  05e1cd0  lwz 0, 112(1)
  05e1cd4  and 11, 9, 0
  05e1cd8  cmpwi 11, 0
  05e1cdc  bf 2, 0x5e1bf4
  05e1ce0  lwz 9, 0(30)
  05e1ce4  add 9, 31, 9
  05e1ce8  addi 31, 9, 4
  05e1cec  clrldi 30, 31, 32
  05e1cf0  lwz 0, 0(30)
  05e1cf4  cmpwi 7, 0, 0
  05e1cf8  bf 30, 0x5e1c3c
  05e1cfc  ld 0, 224(1)
  05e1d00  ld 22, 128(1)
  05e1d04  ld 23, 136(1)
  05e1d08  mtlr 0
  05e1d0c  ld 24, 144(1)
  05e1d10  ld 25, 152(1)
  05e1d14  ld 26, 160(1)
  05e1d18  ld 27, 168(1)
  05e1d1c  ld 28, 176(1)
  05e1d20  ld 29, 184(1)
  05e1d24  ld 30, 192(1)
  05e1d28  ld 31, 200(1)
  05e1d2c  addi 1, 1, 208
  05e1d30  blr
  05e1d34  mr 26, 0
  05e1d38  b 0x5e1c88

FUN_005e1d3c:   # 0x5e1d3c, 0x1cc bytes
  05e1d3c  stdu 1, -224(1)
  05e1d40  mflr 0
  05e1d44  std 30, 208(1)
  05e1d48  clrldi 30, 4, 32
  05e1d4c  std 0, 240(1)
  05e1d50  std 22, 144(1)
  05e1d54  std 23, 152(1)
  05e1d58  std 26, 176(1)
  05e1d5c  lwz 0, 0(30)
  05e1d60  mr 26, 3
  05e1d64  std 29, 200(1)
  05e1d68  cmpwi 7, 0, 0
  05e1d6c  std 21, 136(1)
  05e1d70  std 24, 160(1)
  05e1d74  std 25, 168(1)
  05e1d78  std 27, 184(1)
  05e1d7c  std 28, 192(1)
  05e1d80  std 31, 216(1)
  05e1d84  mr 29, 4
  05e1d88  mr 23, 3
  05e1d8c  li 22, 0
  05e1d90  bt 30, 0x5e1eb0
  05e1d94  li 10, 0
  05e1d98  li 25, 0
  05e1d9c  li 24, 0
  05e1da0  addi 21, 1, 112
  05e1da4  b 0x5e1ddc
  05e1da8  lwz 0, 0(26)
  05e1dac  addi 22, 22, 1
  05e1db0  cmplw 7, 0, 11
  05e1db4  bf 29, 0x5e1e90
  05e1db8  mr 10, 28
  05e1dbc  stw 11, 0(26)
  05e1dc0  lwz 9, 0(30)
  05e1dc4  add 9, 29, 9
  05e1dc8  addi 29, 9, 4
  05e1dcc  clrldi 30, 29, 32
  05e1dd0  lwz 0, 0(30)
  05e1dd4  cmpwi 7, 0, 0
  05e1dd8  bt 30, 0x5e1eb0
  05e1ddc  lwz 3, 4(30)
  05e1de0  cmpwi 7, 3, 0
  05e1de4  bt 30, 0x5e1dc0
  05e1de8  addi 0, 29, 4
  05e1dec  clrldi 31, 25, 56
  05e1df0  sub 28, 0, 3
  05e1df4  cmpw 7, 28, 10
  05e1df8  bt 30, 0x5e1e44
  05e1dfc  clrldi 3, 28, 32
  05e1e00  bl 0x5e17c4
  05e1e04  clrldi 4, 23, 32
  05e1e08  clrldi 31, 3, 56
  05e1e0c  mr 25, 3
  05e1e10  mr 3, 31
  05e1e14  bl 0x5e147c
  05e1e18  lwz 11, 16(26)
  05e1e1c  lis 9, 8160
  05e1e20  rlwinm 0, 11, 0, 3, 10
  05e1e24  mr 24, 3
  05e1e28  cmpw 7, 0, 9
  05e1e2c  bt 30, 0x5e1ef0
  05e1e30  rldicl 0, 11, 43, 56
  05e1e34  cmpw 7, 0, 25
  05e1e38  bt 30, 0x5e1e44
  05e1e3c  oris 0, 11, 8192
  05e1e40  stw 0, 16(26)
  05e1e44  addi 5, 29, 8
  05e1e48  clrldi 4, 24, 32
  05e1e4c  clrldi 5, 5, 32
  05e1e50  clrldi 6, 21, 32
  05e1e54  mr 3, 31
  05e1e58  bl 0x5e1508
  05e1e5c  mr 3, 31
  05e1e60  bl 0x5e1900
  05e1e64  li 0, -1
  05e1e68  cmplwi 7, 3, 3
  05e1e6c  bt 29, 0x5e1e80
  05e1e70  slwi 0, 3, 3
  05e1e74  li 9, 1
  05e1e78  slw 9, 9, 0
  05e1e7c  addi 0, 9, -1
  05e1e80  lwz 11, 112(1)
  05e1e84  and 9, 0, 11
  05e1e88  cmpwi 9, 0
  05e1e8c  bf 2, 0x5e1da8
  05e1e90  lwz 9, 0(30)
  05e1e94  mr 10, 28
  05e1e98  add 9, 29, 9
  05e1e9c  addi 29, 9, 4
  05e1ea0  clrldi 30, 29, 32
  05e1ea4  lwz 0, 0(30)
  05e1ea8  cmpwi 7, 0, 0
  05e1eac  bf 30, 0x5e1ddc
  05e1eb0  ld 0, 240(1)
  05e1eb4  clrldi 3, 22, 32
  05e1eb8  ld 21, 136(1)
  05e1ebc  ld 22, 144(1)
  05e1ec0  mtlr 0
  05e1ec4  ld 23, 152(1)
  05e1ec8  ld 24, 160(1)
  05e1ecc  ld 25, 168(1)
  05e1ed0  ld 26, 176(1)
  05e1ed4  ld 27, 184(1)
  05e1ed8  ld 28, 192(1)
  05e1edc  ld 29, 200(1)
  05e1ee0  ld 30, 208(1)
  05e1ee4  ld 31, 216(1)
  05e1ee8  addi 1, 1, 224
  05e1eec  blr
  05e1ef0  rlwinm 0, 11, 3, 8, 31
  05e1ef4  rlwinm 9, 25, 21, 3, 10
  05e1ef8  rotlwi 0, 0, 29
  05e1efc  or 0, 0, 9
  05e1f00  stw 0, 16(26)
  05e1f04  b 0x5e1e44

FUN_005e1f08:   # 0x5e1f08, 0xb8 bytes
  05e1f08  cmpdi 3, 0
  05e1f0c  mflr 0
  05e1f10  stdu 1, -144(1)
  05e1f14  std 31, 136(1)
  05e1f18  std 28, 112(1)
  05e1f1c  std 29, 120(1)
  05e1f20  std 0, 160(1)
  05e1f24  mr 31, 4
  05e1f28  bt 2, 0x5e1f38
  05e1f2c  lwz 0, 0(3)
  05e1f30  cmpwi 7, 0, 0
  05e1f34  bf 30, 0x5e1f54
  05e1f38  ld 0, 160(1)
  05e1f3c  ld 28, 112(1)
  05e1f40  ld 29, 120(1)
  05e1f44  mtlr 0
  05e1f48  ld 31, 136(1)
  05e1f4c  addi 1, 1, 144
  05e1f50  blr
  05e1f54  li 0, -1
  05e1f58  stw 3, 12(4)
  05e1f5c  stw 0, 0(4)
  05e1f60  lis 0, 8160
  05e1f64  stw 5, 4(4)
  05e1f68  stw 0, 16(4)
  05e1f6c  stw 6, 8(4)
  05e1f70  bl 0x5e1424
  05e1f74  lwz 28, -23528(2)
  05e1f78  addi 29, 28, 8
  05e1f7c  clrldi 29, 29, 32
  05e1f80  mr 3, 29
  05e1f84  bl 0x5e2e54
  05e1f88  nop
  05e1f8c  lwz 0, 32(28)
  05e1f90  mr 3, 29
  05e1f94  stw 0, 20(31)
  05e1f98  stw 31, 32(28)
  05e1f9c  bl 0x5e2e1c
  05e1fa0  nop
  05e1fa4  ld 0, 160(1)
  05e1fa8  ld 28, 112(1)
  05e1fac  ld 29, 120(1)
  05e1fb0  mtlr 0
  05e1fb4  ld 31, 136(1)
  05e1fb8  addi 1, 1, 144
  05e1fbc  blr

FUN_005e1fc0:   # 0x5e1fc0, 0x2c bytes
  05e1fc0  li 5, 0
  05e1fc4  mflr 0
  05e1fc8  li 6, 0
  05e1fcc  stdu 1, -112(1)
  05e1fd0  std 0, 128(1)
  05e1fd4  bl 0x5e1f08
  05e1fd8  nop
  05e1fdc  ld 0, 128(1)
  05e1fe0  addi 1, 1, 112
  05e1fe4  mtlr 0
  05e1fe8  blr

FUN_005e1fec:   # 0x5e1fec, 0x54 bytes
  05e1fec  stdu 1, -128(1)
  05e1ff0  mflr 0
  05e1ff4  std 31, 120(1)
  05e1ff8  std 0, 144(1)
  05e1ffc  mr 0, 3
  05e2000  li 3, 24
  05e2004  mr 31, 0
  05e2008  lwz 9, 0(31)
  05e200c  cmpwi 7, 9, 0
  05e2010  bt 30, 0x5e202c
  05e2014  bl 0x5d5838
  05e2018  nop
  05e201c  clrldi 4, 3, 32
  05e2020  mr 3, 31
  05e2024  bl 0x5e1fc0
  05e2028  nop
  05e202c  ld 0, 144(1)
  05e2030  ld 31, 120(1)
  05e2034  addi 1, 1, 128
  05e2038  mtlr 0
  05e203c  blr

FUN_005e2040:   # 0x5e2040, 0x174 bytes
  05e2040  cmpwi 7, 3, 0
  05e2044  mflr 0
  05e2048  stdu 1, -144(1)
  05e204c  std 30, 128(1)
  05e2050  std 29, 120(1)
  05e2054  std 31, 136(1)
  05e2058  std 0, 160(1)
  05e205c  mr 30, 3
  05e2060  bf 30, 0x5e2088
  05e2064  ld 0, 160(1)
  05e2068  li 3, 0
  05e206c  ld 29, 120(1)
  05e2070  clrldi 3, 3, 32
  05e2074  ld 30, 128(1)
  05e2078  ld 31, 136(1)
  05e207c  mtlr 0
  05e2080  addi 1, 1, 144
  05e2084  blr
  05e2088  lwz 0, 0(3)
  05e208c  cmpwi 7, 0, 0
  05e2090  bt 30, 0x5e2064
  05e2094  bl 0x5e1424
  05e2098  lwz 29, -23528(2)
  05e209c  addi 3, 29, 8
  05e20a0  bl 0x5e2e54
  05e20a4  nop
  05e20a8  lwz 31, 32(29)
  05e20ac  cmpwi 7, 31, 0
  05e20b0  bt 30, 0x5e20ec
  05e20b4  clrldi 11, 31, 32
  05e20b8  lwz 0, 12(11)
  05e20bc  cmpw 7, 0, 30
  05e20c0  bf 30, 0x5e20d8
  05e20c4  b 0x5e21ac
  05e20c8  clrldi 11, 31, 32
  05e20cc  lwz 0, 12(11)
  05e20d0  cmpw 7, 0, 30
  05e20d4  bt 30, 0x5e2144
  05e20d8  addi 0, 31, 20
  05e20dc  clrldi 9, 0, 32
  05e20e0  lwz 31, 0(9)
  05e20e4  cmpwi 7, 31, 0
  05e20e8  bf 30, 0x5e20c8
  05e20ec  lwz 31, 36(29)
  05e20f0  cmpwi 7, 31, 0
  05e20f4  bt- 30, 0x5e2198
  05e20f8  addi 10, 29, 36
  05e20fc  b 0x5e2124
  05e2100  lwz 9, 12(11)
  05e2104  lwz 0, 0(9)
  05e2108  cmpw 7, 0, 30
  05e210c  bt 30, 0x5e217c
  05e2110  addi 10, 31, 20
  05e2114  clrldi 9, 10, 32
  05e2118  lwz 31, 0(9)
  05e211c  cmpwi 7, 31, 0
  05e2120  bt- 30, 0x5e2198
  05e2124  clrldi 11, 31, 32
  05e2128  lwz 0, 16(11)
  05e212c  cmpwi 7, 0, 0
  05e2130  bt 28, 0x5e2100
  05e2134  lwz 0, 12(11)
  05e2138  cmpw 7, 0, 30
  05e213c  bf 30, 0x5e2110
  05e2140  clrldi 9, 10, 32
  05e2144  lwz 0, 20(11)
  05e2148  stw 0, 0(9)
  05e214c  addi 3, 29, 8
  05e2150  bl 0x5e2e1c
  05e2154  nop
  05e2158  mr 3, 31
  05e215c  ld 0, 160(1)
  05e2160  clrldi 3, 3, 32
  05e2164  ld 29, 120(1)
  05e2168  ld 30, 128(1)
  05e216c  mtlr 0
  05e2170  ld 31, 136(1)
  05e2174  addi 1, 1, 144
  05e2178  blr
  05e217c  clrldi 9, 10, 32
  05e2180  lwz 0, 20(11)
  05e2184  stw 0, 0(9)
  05e2188  lwz 3, 12(11)
  05e218c  bl 0x5d580c
  05e2190  nop
  05e2194  b 0x5e214c
  05e2198  addi 3, 29, 8
  05e219c  bl 0x5e2e1c
  05e21a0  nop
  05e21a4  bl 0x5c4840
  05e21a8  nop
  05e21ac  addi 0, 29, 32
  05e21b0  clrldi 9, 0, 32

FUN_005e21b8:   # 0x5e21b8, 0x28 bytes
  05e21b8  stdu 1, -112(1)
  05e21bc  mflr 0
  05e21c0  std 0, 128(1)
  05e21c4  bl 0x5e2040
  05e21c8  nop
  05e21cc  ld 0, 128(1)
  05e21d0  clrldi 3, 3, 32
  05e21d4  mtlr 0
  05e21d8  addi 1, 1, 112
  05e21dc  blr

FUN_005e21e0:   # 0x5e21e0, 0x40 bytes
  05e21e0  mr 9, 3
  05e21e4  mflr 0
  05e21e8  stdu 1, -112(1)
  05e21ec  std 0, 128(1)
  05e21f0  lwz 0, 0(9)
  05e21f4  cmpwi 7, 0, 0
  05e21f8  bt 30, 0x5e2210
  05e21fc  bl 0x5e21b8
  05e2200  nop
  05e2204  clrldi 3, 3, 32
  05e2208  bl 0x5d580c
  05e220c  nop
  05e2210  ld 0, 128(1)
  05e2214  addi 1, 1, 112
  05e2218  mtlr 0
  05e221c  blr

FUN_005e2220:   # 0x5e2220, 0x88 bytes
  05e2220  stdu 1, -160(1)
  05e2224  mflr 0
  05e2228  lis 9, 24544
  05e222c  std 0, 176(1)
  05e2230  li 0, -1
  05e2234  std 27, 120(1)
  05e2238  std 28, 128(1)
  05e223c  std 29, 136(1)
  05e2240  stw 0, 0(4)
  05e2244  stw 3, 12(4)
  05e2248  stw 5, 4(4)
  05e224c  stw 6, 8(4)
  05e2250  stw 9, 16(4)
  05e2254  mr 28, 4
  05e2258  bl 0x5e1424
  05e225c  lwz 27, -23528(2)
  05e2260  addi 29, 27, 8
  05e2264  clrldi 29, 29, 32
  05e2268  mr 3, 29
  05e226c  bl 0x5e2e54
  05e2270  nop
  05e2274  lwz 0, 32(27)
  05e2278  mr 3, 29
  05e227c  stw 0, 20(28)
  05e2280  stw 28, 32(27)
  05e2284  bl 0x5e2e1c
  05e2288  nop
  05e228c  ld 0, 176(1)
  05e2290  ld 27, 120(1)
  05e2294  ld 28, 128(1)
  05e2298  mtlr 0
  05e229c  ld 29, 136(1)
  05e22a0  addi 1, 1, 160
  05e22a4  blr

FUN_005e22a8:   # 0x5e22a8, 0x2c bytes
  05e22a8  li 5, 0
  05e22ac  mflr 0
  05e22b0  li 6, 0
  05e22b4  stdu 1, -112(1)
  05e22b8  std 0, 128(1)
  05e22bc  bl 0x5e2220
  05e22c0  nop
  05e22c4  ld 0, 128(1)
  05e22c8  addi 1, 1, 112
  05e22cc  mtlr 0
  05e22d0  blr

FUN_005e22d4:   # 0x5e22d4, 0x44 bytes
  05e22d4  stdu 1, -144(1)
  05e22d8  mflr 0
  05e22dc  std 29, 120(1)
  05e22e0  mr 29, 3
  05e22e4  li 3, 24
  05e22e8  std 0, 160(1)
  05e22ec  bl 0x5d5838
  05e22f0  nop
  05e22f4  clrldi 4, 3, 32
  05e22f8  clrldi 3, 29, 32
  05e22fc  bl 0x5e22a8
  05e2300  nop
  05e2304  ld 0, 160(1)
  05e2308  ld 29, 120(1)
  05e230c  mtlr 0
  05e2310  addi 1, 1, 144
  05e2314  blr

FUN_005e2318:   # 0x5e2318, 0x7c0 bytes
  05e2318  stdu 1, -256(1)
  05e231c  mflr 0
  05e2320  std 20, 160(1)
  05e2324  std 21, 168(1)
  05e2328  std 24, 192(1)
  05e232c  std 17, 136(1)
  05e2330  std 18, 144(1)
  05e2334  std 19, 152(1)
  05e2338  std 22, 176(1)
  05e233c  std 23, 184(1)
  05e2340  std 25, 200(1)
  05e2344  std 26, 208(1)
  05e2348  std 27, 216(1)
  05e234c  std 28, 224(1)
  05e2350  std 29, 232(1)
  05e2354  std 30, 240(1)
  05e2358  std 31, 248(1)
  05e235c  std 0, 272(1)
  05e2360  lwz 11, 16(3)
  05e2364  mr 20, 3
  05e2368  mr 21, 4
  05e236c  cmpwi 7, 11, 0
  05e2370  mr 24, 3
  05e2374  bt 28, 0x5e2440
  05e2378  clrlwi 3, 11, 11
  05e237c  cmpwi 7, 3, 0
  05e2380  mr 22, 3
  05e2384  bf 30, 0x5e2518
  05e2388  rlwinm 0, 11, 0, 1, 1
  05e238c  cmpwi 7, 0, 0
  05e2390  bt 30, 0x5e29c0
  05e2394  lwz 31, 12(20)
  05e2398  li 22, 0
  05e239c  li 10, 0
  05e23a0  clrldi 9, 31, 32
  05e23a4  lwz 4, 0(9)
  05e23a8  cmpwi 7, 4, 0
  05e23ac  bt 30, 0x5e23dc
  05e23b0  clrldi 4, 4, 32
  05e23b4  addi 31, 31, 4
  05e23b8  mr 3, 24
  05e23bc  bl 0x5e1d3c
  05e23c0  clrldi 9, 31, 32
  05e23c4  add 22, 22, 3
  05e23c8  lwz 4, 0(9)
  05e23cc  cmpwi 7, 4, 0
  05e23d0  bf 30, 0x5e23b0
  05e23d4  clrlwi 10, 22, 11
  05e23d8  lwz 11, 16(20)
  05e23dc  rlwinm 0, 11, 0, 0, 10
  05e23e0  or 11, 0, 10
  05e23e4  clrlwi 9, 11, 11
  05e23e8  stw 11, 16(20)
  05e23ec  cmpw 7, 9, 22
  05e23f0  bt 30, 0x5e23fc
  05e23f4  rlwinm 11, 11, 0, 0, 10
  05e23f8  stw 11, 16(20)
  05e23fc  cmpwi 7, 22, 0
  05e2400  bf 30, 0x5e2518
  05e2404  lwz 0, 0(20)
  05e2408  cmplw 7, 0, 21
  05e240c  bt 29, 0x5e24c4
  05e2410  lwz 11, 16(20)
  05e2414  cmpwi 7, 11, 0
  05e2418  bt 28, 0x5e2440
  05e241c  rlwinm 0, 11, 0, 1, 1
  05e2420  cmpwi 7, 0, 0
  05e2424  bf 30, 0x5e2858
  05e2428  mr 3, 24
  05e242c  lwz 4, 12(20)
  05e2430  clrldi 5, 21, 32
  05e2434  bl 0x5e1984
  05e2438  clrldi 30, 3, 32
  05e243c  b 0x5e24c8
  05e2440  rlwinm 0, 11, 0, 2, 2
  05e2444  cmpwi 7, 0, 0
  05e2448  bf 30, 0x5e29f0
  05e244c  rlwinm 0, 11, 0, 3, 10
  05e2450  cmpwi 7, 0, 0
  05e2454  bf 30, 0x5e28ac
  05e2458  lwz 3, 12(20)
  05e245c  lwz 8, 4(3)
  05e2460  cmpwi 7, 8, 0
  05e2464  bt 30, 0x5e24c4
  05e2468  li 7, 0
  05e246c  b 0x5e247c
  05e2470  mr 8, 10
  05e2474  cmplw 7, 7, 8
  05e2478  bf 28, 0x5e24c4
  05e247c  add 0, 8, 7
  05e2480  srwi 10, 0, 1
  05e2484  slwi 9, 10, 2
  05e2488  extsw 9, 9
  05e248c  add 9, 3, 9
  05e2490  lwz 31, 8(9)
  05e2494  addi 11, 31, 8
  05e2498  clrldi 11, 11, 32
  05e249c  lwz 0, 0(11)
  05e24a0  lwz 11, 4(11)
  05e24a4  cmplw 7, 21, 0
  05e24a8  bt 28, 0x5e2470
  05e24ac  add 0, 0, 11
  05e24b0  cmplw 7, 0, 21
  05e24b4  bt 29, 0x5e28a4
  05e24b8  addi 7, 10, 1
  05e24bc  cmplw 7, 7, 8
  05e24c0  bt 28, 0x5e247c
  05e24c4  li 30, 0
  05e24c8  ld 0, 272(1)
  05e24cc  mr 3, 30
  05e24d0  ld 17, 136(1)
  05e24d4  ld 18, 144(1)
  05e24d8  mtlr 0
  05e24dc  ld 19, 152(1)
  05e24e0  ld 20, 160(1)
  05e24e4  ld 21, 168(1)
  05e24e8  ld 22, 176(1)
  05e24ec  ld 23, 184(1)
  05e24f0  ld 24, 192(1)
  05e24f4  ld 25, 200(1)
  05e24f8  ld 26, 208(1)
  05e24fc  ld 27, 216(1)
  05e2500  ld 28, 224(1)
  05e2504  ld 29, 232(1)
  05e2508  ld 30, 240(1)
  05e250c  ld 31, 248(1)
  05e2510  addi 1, 1, 256
  05e2514  blr
  05e2518  slwi 9, 22, 2
  05e251c  addi 9, 9, 8
  05e2520  clrldi 30, 9, 32
  05e2524  mr 3, 30
  05e2528  bl 0x5d5838
  05e252c  nop
  05e2530  cmpwi 7, 3, 0
  05e2534  mr 31, 3
  05e2538  stw 3, 120(1)
  05e253c  bt 30, 0x5e2404
  05e2540  li 29, 0
  05e2544  mr 3, 30
  05e2548  stw 29, 4(31)
  05e254c  bl 0x5d5838
  05e2550  nop
  05e2554  cmpwi 7, 3, 0
  05e2558  stw 3, 124(1)
  05e255c  bt 30, 0x5e2564
  05e2560  stw 29, 4(3)
  05e2564  lwz 0, 16(20)
  05e2568  rlwinm 0, 0, 0, 1, 1
  05e256c  cmpwi 7, 0, 0
  05e2570  bt 30, 0x5e2960
  05e2574  lwz 31, 12(20)
  05e2578  clrldi 9, 31, 32
  05e257c  lwz 5, 0(9)
  05e2580  cmpwi 7, 5, 0
  05e2584  bt 30, 0x5e25b0
  05e2588  addi 30, 1, 120
  05e258c  clrldi 5, 5, 32
  05e2590  addi 31, 31, 4
  05e2594  mr 3, 24
  05e2598  clrldi 4, 30, 32
  05e259c  bl 0x5e1b6c
  05e25a0  clrldi 9, 31, 32
  05e25a4  lwz 5, 0(9)
  05e25a8  cmpwi 7, 5, 0
  05e25ac  bf 30, 0x5e258c
  05e25b0  lwz 31, 120(1)
  05e25b4  cmpwi 7, 31, 0
  05e25b8  bt 30, 0x5e2ab8
  05e25bc  clrldi 18, 31, 32
  05e25c0  lwz 0, 4(18)
  05e25c4  cmpw 7, 0, 22
  05e25c8  bf- 30, 0x5e2ad4
  05e25cc  lwz 9, 16(20)
  05e25d0  rlwinm 0, 9, 0, 2, 2
  05e25d4  cmpwi 7, 0, 0
  05e25d8  bt 30, 0x5e29dc
  05e25dc  lwz 17, -23516(2)
  05e25e0  lwz 23, 124(1)
  05e25e4  cmpwi 7, 23, 0
  05e25e8  bt 30, 0x5e2ac0
  05e25ec  lwz 19, 4(18)
  05e25f0  li 8, 0
  05e25f4  li 7, 0
  05e25f8  cmpwi 7, 19, 0
  05e25fc  clrldi 27, 23, 32
  05e2600  bt 30, 0x5e2754
  05e2604  li 9, 0
  05e2608  lwz 26, -23528(2)
  05e260c  slwi 0, 9, 2
  05e2610  addi 25, 9, 1
  05e2614  add 9, 0, 23
  05e2618  cmpw 7, 19, 25
  05e261c  clrldi 9, 9, 32
  05e2620  addi 29, 26, 40
  05e2624  stw 29, 8(9)
  05e2628  bt 30, 0x5e26d0
  05e262c  add 9, 31, 0
  05e2630  addi 0, 26, 40
  05e2634  addi 29, 9, 8
  05e2638  slwi 28, 25, 2
  05e263c  cmpw 7, 29, 0
  05e2640  clrldi 30, 17, 32
  05e2644  bf+ 30, 0x5e2678
  05e2648  b 0x5e26b0
  05e264c  addi 9, 31, 8
  05e2650  addi 11, 26, 40
  05e2654  sub 9, 29, 9
  05e2658  li 0, 0
  05e265c  rlwinm 9, 9, 0, 0, 29
  05e2660  extsw 9, 9
  05e2664  add 9, 27, 9
  05e2668  lwz 29, 8(9)
  05e266c  stw 0, 8(9)
  05e2670  cmpw 7, 29, 11
  05e2674  bt 30, 0x5e26b0
  05e2678  add 9, 28, 31
  05e267c  lwz 0, 0(30)
  05e2680  clrldi 11, 29, 32
  05e2684  clrldi 9, 9, 32
  05e2688  mtctr 0
  05e268c  mr 3, 24
  05e2690  lwz 5, 0(11)
  05e2694  lwz 4, 8(9)
  05e2698  std 2, 40(1)
  05e269c  lwz 2, 4(30)
  05e26a0  bctrl
  05e26a4  ld 2, 40(1)
  05e26a8  cmpwi 7, 3, 0
  05e26ac  bt 28, 0x5e264c
  05e26b0  mr 9, 25
  05e26b4  slwi 0, 9, 2
  05e26b8  addi 25, 9, 1
  05e26bc  add 9, 0, 23
  05e26c0  cmpw 7, 19, 25
  05e26c4  clrldi 9, 9, 32
  05e26c8  stw 29, 8(9)
  05e26cc  bf 30, 0x5e262c
  05e26d0  clrldi 19, 19, 32
  05e26d4  li 8, 0
  05e26d8  li 7, 0
  05e26dc  mtctr 19
  05e26e0  li 10, 0
  05e26e4  b 0x5e2710
  05e26e8  slwi 9, 8, 2
  05e26ec  add 11, 10, 31
  05e26f0  extsw 9, 9
  05e26f4  clrldi 11, 11, 32
  05e26f8  add 9, 18, 9
  05e26fc  addi 8, 8, 1
  05e2700  addi 10, 10, 4
  05e2704  lwz 0, 8(11)
  05e2708  stw 0, 8(9)
  05e270c  bdz 0x5e274c
  05e2710  add 9, 23, 10
  05e2714  clrldi 9, 9, 32
  05e2718  lwz 0, 8(9)
  05e271c  cmpwi 7, 0, 0
  05e2720  bf 30, 0x5e26e8
  05e2724  slwi 9, 7, 2
  05e2728  add 11, 10, 31
  05e272c  extsw 9, 9
  05e2730  clrldi 11, 11, 32
  05e2734  add 9, 27, 9
  05e2738  addi 7, 7, 1
  05e273c  addi 10, 10, 4
  05e2740  lwz 0, 8(11)
  05e2744  stw 0, 8(9)
  05e2748  bdnz 0x5e2710
  05e274c  lwz 31, 120(1)
  05e2750  lwz 23, 124(1)
  05e2754  clrldi 11, 31, 32
  05e2758  clrldi 5, 23, 32
  05e275c  stw 8, 4(18)
  05e2760  stw 7, 4(27)
  05e2764  lwz 0, 4(11)
  05e2768  lwz 9, 4(5)
  05e276c  add 0, 0, 9
  05e2770  cmpw 7, 0, 22
  05e2774  bf- 30, 0x5e2ad4
  05e2778  clrldi 30, 17, 32
  05e277c  mr 3, 24
  05e2780  mr 4, 30
  05e2784  bl 0x5e130c
  05e2788  lwz 23, 124(1)
  05e278c  lwz 9, 120(1)
  05e2790  clrldi 19, 23, 32
  05e2794  lwz 11, 4(19)
  05e2798  cmpwi 7, 11, 0
  05e279c  bt 30, 0x5e2990
  05e27a0  clrldi 26, 9, 32
  05e27a4  lwz 27, 4(26)
  05e27a8  addi 23, 11, -1
  05e27ac  cmpwi 7, 27, 0
  05e27b0  slwi 9, 23, 2
  05e27b4  add 11, 27, 11
  05e27b8  extsw 9, 9
  05e27bc  addi 31, 11, -1
  05e27c0  add 9, 19, 9
  05e27c4  lwz 22, 8(9)
  05e27c8  clrldi 25, 22, 32
  05e27cc  bf 30, 0x5e27f8
  05e27d0  b 0x5e2834
  05e27d4  slwi 9, 31, 2
  05e27d8  lwz 0, 8(28)
  05e27dc  cmpwi 7, 29, 0
  05e27e0  extsw 9, 9
  05e27e4  addi 31, 31, -1
  05e27e8  add 9, 26, 9
  05e27ec  stw 0, 8(9)
  05e27f0  bt 30, 0x5e2974
  05e27f4  mr 27, 29
  05e27f8  lwz 0, 0(30)
  05e27fc  addi 29, 27, -1
  05e2800  mr 3, 24
  05e2804  mtctr 0
  05e2808  slwi 0, 29, 2
  05e280c  mr 5, 25
  05e2810  extsw 0, 0
  05e2814  add 28, 26, 0
  05e2818  lwz 4, 8(28)
  05e281c  std 2, 40(1)
  05e2820  lwz 2, 4(30)
  05e2824  bctrl
  05e2828  ld 2, 40(1)
  05e282c  cmpwi 7, 3, 0
  05e2830  bt 29, 0x5e27d4
  05e2834  add 9, 27, 23
  05e2838  cmpwi 7, 23, 0
  05e283c  slwi 9, 9, 2
  05e2840  extsw 9, 9
  05e2844  add 9, 26, 9
  05e2848  stw 22, 8(9)
  05e284c  bt 30, 0x5e297c
  05e2850  mr 11, 23
  05e2854  b 0x5e27a8
  05e2858  lwz 30, 12(20)
  05e285c  clrldi 9, 30, 32
  05e2860  lwz 4, 0(9)
  05e2864  cmpwi 7, 4, 0
  05e2868  bt 30, 0x5e24c4
  05e286c  clrldi 29, 21, 32
  05e2870  b 0x5e2888
  05e2874  addi 30, 30, 4
  05e2878  clrldi 9, 30, 32
  05e287c  lwz 4, 0(9)
  05e2880  cmpwi 7, 4, 0
  05e2884  bt 30, 0x5e24c4
  05e2888  clrldi 4, 4, 32
  05e288c  mr 3, 24
  05e2890  mr 5, 29
  05e2894  bl 0x5e1984
  05e2898  cmpwi 7, 3, 0
  05e289c  mr 31, 3
  05e28a0  bt 30, 0x5e2874
  05e28a4  clrldi 30, 31, 32
  05e28a8  b 0x5e24c8
  05e28ac  lwz 0, 12(20)
  05e28b0  rldicl 31, 11, 43, 56
  05e28b4  mr 4, 24
  05e28b8  mr 23, 0
  05e28bc  clrldi 25, 31, 56
  05e28c0  mr 3, 25
  05e28c4  bl 0x5e147c
  05e28c8  lwz 29, 4(23)
  05e28cc  cmpwi 7, 29, 0
  05e28d0  bt 30, 0x5e24c4
  05e28d4  clrldi 26, 3, 32
  05e28d8  clrldi 27, 31, 60
  05e28dc  li 28, 0
  05e28e0  addi 20, 1, 116
  05e28e4  addi 22, 1, 112
  05e28e8  b 0x5e28f8
  05e28ec  mr 29, 30
  05e28f0  cmplw 7, 28, 29
  05e28f4  bf 28, 0x5e24c4
  05e28f8  add 0, 29, 28
  05e28fc  mr 4, 26
  05e2900  srwi 30, 0, 1
  05e2904  clrldi 6, 22, 32
  05e2908  slwi 9, 30, 2
  05e290c  mr 3, 25
  05e2910  extsw 9, 9
  05e2914  add 9, 23, 9
  05e2918  lwz 31, 8(9)
  05e291c  addi 5, 31, 8
  05e2920  clrldi 5, 5, 32
  05e2924  bl 0x5e1508
  05e2928  li 4, 0
  05e292c  clrldi 5, 3, 32
  05e2930  clrldi 6, 20, 32
  05e2934  mr 3, 27
  05e2938  bl 0x5e1508
  05e293c  lwz 9, 112(1)
  05e2940  cmplw 7, 21, 9
  05e2944  bt 28, 0x5e28ec
  05e2948  lwz 0, 116(1)
  05e294c  add 0, 9, 0
  05e2950  cmplw 7, 0, 21
  05e2954  bt 29, 0x5e28a4
  05e2958  addi 28, 30, 1
  05e295c  b 0x5e28f0
  05e2960  mr 3, 24
  05e2964  lwz 5, 12(20)
  05e2968  addi 4, 1, 120
  05e296c  bl 0x5e1b6c
  05e2970  b 0x5e25b0
  05e2974  li 27, 0
  05e2978  b 0x5e2834
  05e297c  lwz 9, 4(19)
  05e2980  lwz 0, 4(26)
  05e2984  lwz 23, 124(1)
  05e2988  add 0, 0, 9
  05e298c  stw 0, 4(26)
  05e2990  clrldi 3, 23, 32
  05e2994  bl 0x5d580c
  05e2998  nop
  05e299c  lwz 10, 120(1)
  05e29a0  lwz 0, 12(20)
  05e29a4  clrldi 9, 10, 32
  05e29a8  stw 0, 0(9)
  05e29ac  lwz 11, 16(20)
  05e29b0  stw 10, 12(20)
  05e29b4  oris 11, 11, 32768
  05e29b8  stw 11, 16(20)
  05e29bc  b 0x5e2404
  05e29c0  mr 3, 20
  05e29c4  lwz 4, 12(20)
  05e29c8  bl 0x5e1d3c
  05e29cc  lwz 11, 16(20)
  05e29d0  mr 22, 3
  05e29d4  clrlwi 10, 3, 11
  05e29d8  b 0x5e23dc
  05e29dc  rlwinm 0, 9, 0, 3, 10
  05e29e0  cmpwi 7, 0, 0
  05e29e4  bf 30, 0x5e2ab0
  05e29e8  lwz 17, -23512(2)
  05e29ec  b 0x5e25e0
  05e29f0  lwz 23, 12(20)
  05e29f4  lwz 26, 4(23)
  05e29f8  cmpwi 7, 26, 0
  05e29fc  bt 30, 0x5e24c4
  05e2a00  li 25, 0
  05e2a04  addi 20, 1, 116
  05e2a08  addi 22, 1, 112
  05e2a0c  b 0x5e2a1c
  05e2a10  mr 26, 27
  05e2a14  cmplw 7, 26, 25
  05e2a18  bf 29, 0x5e24c4
  05e2a1c  add 0, 25, 26
  05e2a20  srwi 27, 0, 1
  05e2a24  slwi 9, 27, 2
  05e2a28  extsw 9, 9
  05e2a2c  add 9, 23, 9
  05e2a30  lwz 31, 8(9)
  05e2a34  clrldi 30, 31, 32
  05e2a38  addi 3, 31, 4
  05e2a3c  lwz 0, 4(30)
  05e2a40  sub 3, 3, 0
  05e2a44  clrldi 3, 3, 32
  05e2a48  bl 0x5e17c4
  05e2a4c  mr 4, 24
  05e2a50  clrldi 29, 3, 56
  05e2a54  mr 28, 3
  05e2a58  mr 3, 29
  05e2a5c  bl 0x5e147c
  05e2a60  addi 5, 31, 8
  05e2a64  clrldi 4, 3, 32
  05e2a68  clrldi 5, 5, 32
  05e2a6c  clrldi 6, 20, 32
  05e2a70  mr 3, 29
  05e2a74  bl 0x5e1508
  05e2a78  li 4, 0
  05e2a7c  clrldi 5, 3, 32
  05e2a80  clrldi 6, 22, 32
  05e2a84  clrldi 3, 28, 60
  05e2a88  bl 0x5e1508
  05e2a8c  lwz 9, 116(1)
  05e2a90  cmplw 7, 9, 21
  05e2a94  bt 29, 0x5e2a10
  05e2a98  lwz 0, 112(1)
  05e2a9c  add 0, 9, 0
  05e2aa0  cmplw 7, 0, 21
  05e2aa4  bt 29, 0x5e24c8
  05e2aa8  addi 25, 27, 1
  05e2aac  b 0x5e2a14
  05e2ab0  lwz 17, -23508(2)
  05e2ab4  b 0x5e25e0
  05e2ab8  li 18, 0
  05e2abc  b 0x5e25cc
  05e2ac0  clrldi 4, 17, 32
  05e2ac4  mr 5, 18
  05e2ac8  mr 3, 24
  05e2acc  bl 0x5e130c
  05e2ad0  b 0x5e299c
  05e2ad4  bl 0x5c4840

FUN_005e2adc:   # 0x5e2adc, 0x250 bytes
  05e2adc  stdu 1, -176(1)
  05e2ae0  mflr 0
  05e2ae4  std 26, 128(1)
  05e2ae8  std 27, 136(1)
  05e2aec  std 28, 144(1)
  05e2af0  std 29, 152(1)
  05e2af4  std 0, 192(1)
  05e2af8  mr 26, 4
  05e2afc  mr 28, 3
  05e2b00  std 30, 160(1)
  05e2b04  std 31, 168(1)
  05e2b08  bl 0x5e1424
  05e2b0c  lwz 27, -23528(2)
  05e2b10  addi 3, 27, 8
  05e2b14  bl 0x5e2e54
  05e2b18  nop
  05e2b1c  lwz 29, 36(27)
  05e2b20  cmpwi 7, 29, 0
  05e2b24  bt 30, 0x5e2b58
  05e2b28  clrldi 31, 29, 32
  05e2b2c  lwz 0, 0(31)
  05e2b30  cmplw 7, 0, 28
  05e2b34  bt 29, 0x5e2b48
  05e2b38  b 0x5e2c6c
  05e2b3c  lwz 0, 0(31)
  05e2b40  cmplw 7, 0, 28
  05e2b44  bf 29, 0x5e2c6c
  05e2b48  lwz 29, 20(31)
  05e2b4c  cmpwi 7, 29, 0
  05e2b50  clrldi 31, 29, 32
  05e2b54  bf 30, 0x5e2b3c
  05e2b58  lwz 29, 32(27)
  05e2b5c  cmpwi 7, 29, 0
  05e2b60  bt 30, 0x5e2cf0
  05e2b64  clrldi 31, 29, 32
  05e2b68  clrldi 4, 28, 32
  05e2b6c  mr 3, 31
  05e2b70  lwz 0, 20(31)
  05e2b74  stw 0, 32(27)
  05e2b78  bl 0x5e2318
  05e2b7c  lwz 11, 36(27)
  05e2b80  mr 30, 3
  05e2b84  cmpwi 7, 11, 0
  05e2b88  bt 30, 0x5e2cd4
  05e2b8c  clrldi 9, 11, 32
  05e2b90  lwz 8, 0(31)
  05e2b94  lwz 0, 0(9)
  05e2b98  cmplw 7, 0, 8
  05e2b9c  bf 28, 0x5e2bb0
  05e2ba0  b 0x5e2cd4
  05e2ba4  lwz 0, 0(9)
  05e2ba8  cmplw 7, 0, 8
  05e2bac  bt 28, 0x5e2bc8
  05e2bb0  addi 0, 11, 20
  05e2bb4  clrldi 10, 0, 32
  05e2bb8  lwz 11, 0(10)
  05e2bbc  cmpwi 7, 11, 0
  05e2bc0  clrldi 9, 11, 32
  05e2bc4  bf 30, 0x5e2ba4
  05e2bc8  cmpwi 7, 30, 0
  05e2bcc  stw 11, 20(31)
  05e2bd0  stw 29, 0(10)
  05e2bd4  bt 30, 0x5e2b58
  05e2bd8  addi 3, 27, 8
  05e2bdc  clrldi 28, 30, 32
  05e2be0  bl 0x5e2e1c
  05e2be4  nop
  05e2be8  lwz 0, 4(31)
  05e2bec  stw 0, 0(26)
  05e2bf0  lwz 9, 8(31)
  05e2bf4  stw 9, 4(26)
  05e2bf8  lwz 0, 16(31)
  05e2bfc  rlwinm 9, 0, 0, 2, 2
  05e2c00  srwi 0, 0, 21
  05e2c04  cmpwi 7, 9, 0
  05e2c08  clrlwi 3, 0, 24
  05e2c0c  bf 30, 0x5e2cbc
  05e2c10  clrldi 29, 3, 56
  05e2c14  mr 4, 31
  05e2c18  mr 3, 29
  05e2c1c  bl 0x5e147c
  05e2c20  addi 5, 30, 8
  05e2c24  clrldi 4, 3, 32
  05e2c28  addi 6, 1, 112
  05e2c2c  mr 3, 29
  05e2c30  clrldi 5, 5, 32
  05e2c34  bl 0x5e1508
  05e2c38  lwz 0, 112(1)
  05e2c3c  mr 3, 28
  05e2c40  ld 27, 136(1)
  05e2c44  stw 0, 8(26)
  05e2c48  ld 0, 192(1)
  05e2c4c  ld 26, 128(1)
  05e2c50  ld 28, 144(1)
  05e2c54  mtlr 0
  05e2c58  ld 29, 152(1)
  05e2c5c  ld 30, 160(1)
  05e2c60  ld 31, 168(1)
  05e2c64  addi 1, 1, 176
  05e2c68  blr
  05e2c6c  mr 3, 31
  05e2c70  clrldi 4, 28, 32
  05e2c74  bl 0x5e2318
  05e2c78  cmpwi 7, 3, 0
  05e2c7c  mr 30, 3
  05e2c80  bt 30, 0x5e2b58
  05e2c84  addi 3, 27, 8
  05e2c88  clrldi 28, 30, 32
  05e2c8c  bl 0x5e2e1c
  05e2c90  nop
  05e2c94  lwz 0, 4(31)
  05e2c98  stw 0, 0(26)
  05e2c9c  lwz 9, 8(31)
  05e2ca0  stw 9, 4(26)
  05e2ca4  lwz 0, 16(31)
  05e2ca8  rlwinm 9, 0, 0, 2, 2
  05e2cac  srwi 0, 0, 21
  05e2cb0  cmpwi 7, 9, 0
  05e2cb4  clrlwi 3, 0, 24
  05e2cb8  bt 30, 0x5e2c10
  05e2cbc  addi 3, 30, 4
  05e2cc0  lwz 0, 4(28)
  05e2cc4  sub 3, 3, 0
  05e2cc8  clrldi 3, 3, 32
  05e2ccc  bl 0x5e17c4
  05e2cd0  b 0x5e2c10
  05e2cd4  addi 0, 27, 36
  05e2cd8  cmpwi 7, 30, 0
  05e2cdc  clrldi 10, 0, 32
  05e2ce0  stw 11, 20(31)
  05e2ce4  stw 29, 0(10)
  05e2ce8  bt 30, 0x5e2b58
  05e2cec  b 0x5e2bd8
  05e2cf0  addi 3, 27, 8
  05e2cf4  li 28, 0
  05e2cf8  bl 0x5e2e1c
  05e2cfc  nop
  05e2d00  ld 0, 192(1)
  05e2d04  ld 26, 128(1)
  05e2d08  mr 3, 28
  05e2d0c  ld 27, 136(1)
  05e2d10  ld 28, 144(1)
  05e2d14  mtlr 0
  05e2d18  ld 29, 152(1)
  05e2d1c  ld 30, 160(1)
  05e2d20  ld 31, 168(1)
  05e2d24  addi 1, 1, 176
  05e2d28  blr

FUN_005e2d2c:   # 0x5e2d2c, 0xf0 bytes
  05e2d2c  stdu 1, -192(1)
  05e2d30  mflr 0
  05e2d34  std 27, 152(1)
  05e2d38  std 0, 208(1)
  05e2d3c  lwz 0, 4(4)
  05e2d40  mr 27, 3
  05e2d44  addi 3, 4, 4
  05e2d48  std 25, 136(1)
  05e2d4c  sub 3, 3, 0
  05e2d50  mr 25, 5
  05e2d54  clrldi 3, 3, 32
  05e2d58  std 26, 144(1)
  05e2d5c  std 28, 160(1)
  05e2d60  std 29, 168(1)
  05e2d64  mr 29, 4
  05e2d68  bl 0x5e17c4
  05e2d6c  clrldi 27, 27, 32
  05e2d70  clrldi 28, 3, 56
  05e2d74  mr 4, 27
  05e2d78  mr 3, 28
  05e2d7c  addi 29, 29, 8
  05e2d80  bl 0x5e147c
  05e2d84  addi 6, 1, 112
  05e2d88  clrldi 5, 29, 32
  05e2d8c  clrldi 4, 3, 32
  05e2d90  mr 3, 28
  05e2d94  addi 26, 25, 8
  05e2d98  bl 0x5e1508
  05e2d9c  lwz 0, 4(25)
  05e2da0  addi 3, 25, 4
  05e2da4  sub 3, 3, 0
  05e2da8  clrldi 3, 3, 32
  05e2dac  bl 0x5e17c4
  05e2db0  mr 4, 27
  05e2db4  clrldi 29, 3, 56
  05e2db8  mr 3, 29
  05e2dbc  bl 0x5e147c
  05e2dc0  clrldi 5, 26, 32
  05e2dc4  clrldi 4, 3, 32
  05e2dc8  addi 6, 1, 116
  05e2dcc  mr 3, 29
  05e2dd0  bl 0x5e1508
  05e2dd4  lwz 9, 112(1)
  05e2dd8  lwz 0, 116(1)
  05e2ddc  li 3, 1
  05e2de0  cmplw 7, 9, 0
  05e2de4  bt 29, 0x5e2df4
  05e2de8  li 3, -1
  05e2dec  bt 28, 0x5e2df4
  05e2df0  li 3, 0
  05e2df4  ld 0, 208(1)
  05e2df8  extsw 3, 3
  05e2dfc  ld 25, 136(1)
  05e2e00  ld 26, 144(1)
  05e2e04  mtlr 0
  05e2e08  ld 27, 152(1)
  05e2e0c  ld 28, 160(1)
  05e2e10  ld 29, 168(1)
  05e2e14  addi 1, 1, 192
  05e2e18  blr

FUN_005e2e1c:   # 0x5e2e1c, 0x38 bytes
  05e2e1c  stdu 1, -112(1)
  05e2e20  mflr 0
  05e2e24  std 0, 128(1)
  05e2e28  bl 0x6504e4
  05e2e2c  ld 2, 40(1)
  05e2e30  srawi 0, 3, 31
  05e2e34  xor 3, 0, 3
  05e2e38  sub 3, 0, 3
  05e2e3c  ld 0, 128(1)
  05e2e40  addi 1, 1, 112
  05e2e44  srwi 3, 3, 31
  05e2e48  mtlr 0
  05e2e4c  extsw 3, 3
  05e2e50  blr

FUN_005e2e54:   # 0x5e2e54, 0x3c bytes
  05e2e54  li 4, 0
  05e2e58  mflr 0
  05e2e5c  stdu 1, -112(1)
  05e2e60  std 0, 128(1)
  05e2e64  bl 0x6504c4
  05e2e68  ld 2, 40(1)
  05e2e6c  srawi 0, 3, 31
  05e2e70  xor 3, 0, 3
  05e2e74  sub 3, 0, 3
  05e2e78  ld 0, 128(1)
  05e2e7c  addi 1, 1, 112
  05e2e80  srwi 3, 3, 31
  05e2e84  mtlr 0
  05e2e88  extsw 3, 3
  05e2e8c  blr

FUN_005e2e90:   # 0x5e2e90, 0x38 bytes
  05e2e90  stdu 1, -112(1)
  05e2e94  mflr 0
  05e2e98  std 0, 128(1)
  05e2e9c  bl 0x650784
  05e2ea0  ld 2, 40(1)
  05e2ea4  srawi 0, 3, 31
  05e2ea8  xor 3, 0, 3
  05e2eac  sub 3, 0, 3
  05e2eb0  ld 0, 128(1)
  05e2eb4  addi 1, 1, 112
  05e2eb8  srwi 3, 3, 31
  05e2ebc  mtlr 0
  05e2ec0  extsw 3, 3
  05e2ec4  blr

FUN_005e2ec8:   # 0x5e2ec8, 0x34 bytes
  05e2ec8  lwz 4, -23504(2)
  05e2ecc  mflr 0
  05e2ed0  stdu 1, -112(1)
  05e2ed4  std 0, 128(1)
  05e2ed8  bl 0x6505a4
  05e2edc  ld 2, 40(1)
  05e2ee0  cmpwi 7, 3, 0
  05e2ee4  bf- 30, 0x5e2ef8
  05e2ee8  ld 0, 128(1)
  05e2eec  addi 1, 1, 112
  05e2ef0  mtlr 0
  05e2ef4  blr
  05e2ef8  bl 0x5c4840

FUN_005e2f00:   # 0x5e2f00, 0x6c bytes
  05e2f00  stdu 1, -128(1)
  05e2f04  mflr 0
  05e2f08  std 30, 112(1)
  05e2f0c  lwz 30, -23500(2)
  05e2f10  std 31, 120(1)
  05e2f14  lwz 4, -23504(2)
  05e2f18  clrldi 31, 3, 32
  05e2f1c  mr 3, 30
  05e2f20  std 0, 144(1)
  05e2f24  bl 0x6505a4
  05e2f28  ld 2, 40(1)
  05e2f2c  cmpwi 7, 3, 0
  05e2f30  bf- 30, 0x5e2f68
  05e2f34  ld 0, 0(30)
  05e2f38  mr 3, 31
  05e2f3c  ld 9, 8(30)
  05e2f40  std 0, 0(31)
  05e2f44  ld 0, 16(30)
  05e2f48  std 9, 8(31)
  05e2f4c  std 0, 16(31)
  05e2f50  ld 0, 144(1)
  05e2f54  ld 30, 112(1)
  05e2f58  ld 31, 120(1)
  05e2f5c  mtlr 0
  05e2f60  addi 1, 1, 128
  05e2f64  blr
  05e2f68  bl 0x5c4840

FUN_005e2f70:   # 0x5e2f70, 0xb0 bytes
  05e2f70  stdu 1, -144(1)
  05e2f74  mflr 0
  05e2f78  std 29, 120(1)
  05e2f7c  mr 29, 3
  05e2f80  std 28, 112(1)
  05e2f84  cmplwi 7, 29, 3
  05e2f88  std 30, 128(1)
  05e2f8c  std 31, 136(1)
  05e2f90  std 0, 160(1)
  05e2f94  li 3, 1
  05e2f98  bf 29, 0x5e2fc0
  05e2f9c  ld 0, 160(1)
  05e2fa0  extsw 3, 3
  05e2fa4  ld 28, 112(1)
  05e2fa8  ld 29, 120(1)
  05e2fac  mtlr 0
  05e2fb0  ld 30, 128(1)
  05e2fb4  ld 31, 136(1)
  05e2fb8  addi 1, 1, 144
  05e2fbc  blr
  05e2fc0  lwz 30, -23500(2)
  05e2fc4  li 4, 0
  05e2fc8  addi 0, 30, 24
  05e2fcc  clrldi 28, 0, 32
  05e2fd0  mr 3, 28
  05e2fd4  bl 0x6504c4
  05e2fd8  ld 2, 40(1)
  05e2fdc  cmpwi 7, 3, 0
  05e2fe0  bf- 30, 0x5e301c
  05e2fe4  slwi 9, 29, 3
  05e2fe8  extsw 9, 9
  05e2fec  add 9, 9, 30
  05e2ff0  stb 3, 48(9)
  05e2ff4  lwz 0, 80(30)
  05e2ff8  cmpw 7, 29, 0
  05e2ffc  bf 28, 0x5e3004
  05e3000  stw 29, 80(30)
  05e3004  mr 3, 28
  05e3008  bl 0x6504e4
  05e300c  ld 2, 40(1)
  05e3010  cmpwi 7, 3, 0
  05e3014  li 3, 0
  05e3018  bt 30, 0x5e2f9c
  05e301c  bl 0x5c4840

FUN_005e3024:   # 0x5e3024, 0x38 bytes
  05e3024  lwz 3, -23500(2)
  05e3028  mflr 0
  05e302c  stdu 1, -112(1)
  05e3030  addi 3, 3, 88
  05e3034  std 0, 128(1)
  05e3038  bl 0x650784
  05e303c  ld 2, 40(1)
  05e3040  cmpwi 7, 3, 0
  05e3044  bf- 30, 0x5e3058
  05e3048  ld 0, 128(1)
  05e304c  addi 1, 1, 112
  05e3050  mtlr 0
  05e3054  blr
  05e3058  bl 0x5c4840

FUN_005e3060:   # 0x5e3060, 0x44 bytes
  05e3060  lwz 9, -23500(2)
  05e3064  mflr 0
  05e3068  stdu 1, -112(1)
  05e306c  std 0, 128(1)
  05e3070  li 0, 2
  05e3074  lwz 4, -23504(2)
  05e3078  addi 3, 9, 88
  05e307c  stw 0, 112(9)
  05e3080  bl 0x6505a4
  05e3084  ld 2, 40(1)
  05e3088  cmpwi 7, 3, 0
  05e308c  bf- 30, 0x5e30a0
  05e3090  ld 0, 128(1)
  05e3094  addi 1, 1, 112
  05e3098  mtlr 0
  05e309c  blr
  05e30a0  bl 0x5c4840

FUN_005e30a8:   # 0x5e30a8, 0x124 bytes
  05e30a8  stdu 1, -144(1)
  05e30ac  mflr 0
  05e30b0  std 29, 120(1)
  05e30b4  std 0, 160(1)
  05e30b8  lwz 0, 0(3)
  05e30bc  mr 29, 4
  05e30c0  std 31, 136(1)
  05e30c4  cmpwi 7, 0, 0
  05e30c8  std 30, 128(1)
  05e30cc  mr 31, 3
  05e30d0  bf 30, 0x5e3158
  05e30d4  lwz 30, -23500(2)
  05e30d8  lwz 0, 112(30)
  05e30dc  cmpwi 7, 0, 0
  05e30e0  bt 30, 0x5e317c
  05e30e4  addi 0, 30, 88
  05e30e8  li 4, 0
  05e30ec  clrldi 30, 0, 32
  05e30f0  mr 3, 30
  05e30f4  bl 0x6504c4
  05e30f8  ld 2, 40(1)
  05e30fc  cmpwi 7, 3, 0
  05e3100  bf 30, 0x5e3158
  05e3104  lwz 0, 0(31)
  05e3108  clrldi 4, 29, 32
  05e310c  cmpwi 7, 0, 0
  05e3110  bt 30, 0x5e31a8
  05e3114  mr 3, 30
  05e3118  bl 0x6504e4
  05e311c  ld 2, 40(1)
  05e3120  ld 29, 120(1)
  05e3124  ld 30, 128(1)
  05e3128  srawi 0, 3, 31
  05e312c  ld 31, 136(1)
  05e3130  xor 9, 0, 3
  05e3134  sub 9, 9, 0
  05e3138  ld 0, 160(1)
  05e313c  addi 1, 1, 144
  05e3140  addi 9, 9, -1
  05e3144  mtlr 0
  05e3148  srwi 9, 9, 31
  05e314c  xori 3, 9, 1
  05e3150  extsw 3, 3
  05e3154  blr
  05e3158  ld 0, 160(1)
  05e315c  li 3, 1
  05e3160  ld 29, 120(1)
  05e3164  extsw 3, 3
  05e3168  ld 30, 128(1)
  05e316c  ld 31, 136(1)
  05e3170  mtlr 0
  05e3174  addi 1, 1, 144
  05e3178  blr
  05e317c  bl 0x5e3060
  05e3180  nop
  05e3184  addi 0, 30, 88
  05e3188  clrldi 30, 0, 32
  05e318c  li 4, 0
  05e3190  mr 3, 30
  05e3194  bl 0x6504c4
  05e3198  ld 2, 40(1)
  05e319c  cmpwi 7, 3, 0
  05e31a0  bt 30, 0x5e3104
  05e31a4  b 0x5e3158
  05e31a8  std 2, 40(1)
  05e31ac  lwz 0, 0(4)
  05e31b0  lwz 2, 4(4)
  05e31b4  mtctr 0
  05e31b8  bctrl
  05e31bc  ld 2, 40(1)
  05e31c0  li 0, 2
  05e31c4  stw 0, 0(31)
  05e31c8  b 0x5e3114

FUN_005e31cc:   # 0x5e31cc, 0x144 bytes
  05e31cc  stdu 1, -144(1)
  05e31d0  mflr 0
  05e31d4  std 31, 136(1)
  05e31d8  lwz 31, -23500(2)
  05e31dc  std 28, 112(1)
  05e31e0  std 29, 120(1)
  05e31e4  mr 28, 4
  05e31e8  lwz 4, -23496(2)
  05e31ec  mr 29, 3
  05e31f0  addi 3, 31, 116
  05e31f4  std 0, 160(1)
  05e31f8  std 30, 128(1)
  05e31fc  bl 0x5e30a8
  05e3200  nop
  05e3204  addi 3, 31, 24
  05e3208  li 4, 0
  05e320c  bl 0x6504c4
  05e3210  ld 2, 40(1)
  05e3214  cmpwi 7, 3, 0
  05e3218  bf- 30, 0x5e32b8
  05e321c  lwz 10, 80(31)
  05e3220  li 30, 1
  05e3224  cmpwi 7, 10, 3
  05e3228  bt 29, 0x5e3280
  05e322c  slwi 11, 10, 3
  05e3230  extsw 9, 11
  05e3234  add 9, 9, 31
  05e3238  lbz 0, 48(9)
  05e323c  cmpwi 7, 0, 0
  05e3240  bt 30, 0x5e32c8
  05e3244  subfic 0, 10, 4
  05e3248  add 9, 11, 31
  05e324c  clrldi 0, 0, 32
  05e3250  addi 11, 9, 56
  05e3254  mtctr 0
  05e3258  b 0x5e3270
  05e325c  clrldi 9, 11, 32
  05e3260  addi 11, 11, 8
  05e3264  lbz 0, 0(9)
  05e3268  cmpwi 7, 0, 0
  05e326c  bt 30, 0x5e32c0
  05e3270  addi 10, 10, 1
  05e3274  bdnz 0x5e325c
  05e3278  li 30, 1
  05e327c  stw 10, 80(31)
  05e3280  addi 3, 31, 24
  05e3284  bl 0x6504e4
  05e3288  ld 2, 40(1)
  05e328c  cmpwi 7, 3, 0
  05e3290  bf 30, 0x5e32b8
  05e3294  ld 0, 160(1)
  05e3298  extsw 3, 30
  05e329c  ld 28, 112(1)
  05e32a0  ld 29, 120(1)
  05e32a4  mtlr 0
  05e32a8  ld 30, 128(1)
  05e32ac  ld 31, 136(1)
  05e32b0  addi 1, 1, 144
  05e32b4  blr
  05e32b8  bl 0x5c4840
  05e32bc  nop
  05e32c0  slwi 11, 10, 3
  05e32c4  stw 10, 80(31)
  05e32c8  extsw 11, 11
  05e32cc  addi 0, 10, 1
  05e32d0  add 11, 11, 31
  05e32d4  stw 10, 0(29)
  05e32d8  stw 0, 80(31)
  05e32dc  li 0, 1
  05e32e0  addi 3, 31, 24
  05e32e4  stb 0, 48(11)
  05e32e8  lwz 9, 0(29)
  05e32ec  li 30, 0
  05e32f0  slwi 9, 9, 3
  05e32f4  extsw 9, 9
  05e32f8  add 9, 9, 31
  05e32fc  stw 28, 52(9)
  05e3300  bl 0x6504e4
  05e3304  ld 2, 40(1)
  05e3308  cmpwi 7, 3, 0
  05e330c  bt 30, 0x5e3294

FUN_005e3314:   # 0x5e3314, 0xf0 bytes
  05e3314  stdu 1, -144(1)
  05e3318  mflr 0
  05e331c  std 31, 136(1)
  05e3320  mr 31, 3
  05e3324  addi 3, 1, 112
  05e3328  std 30, 128(1)
  05e332c  std 0, 160(1)
  05e3330  bl 0x6505c4
  05e3334  ld 2, 40(1)
  05e3338  cmplwi 7, 31, 3
  05e333c  bf 29, 0x5e3360
  05e3340  li 31, 0
  05e3344  ld 0, 160(1)
  05e3348  clrldi 3, 31, 32
  05e334c  ld 30, 128(1)
  05e3350  ld 31, 136(1)
  05e3354  mtlr 0
  05e3358  addi 1, 1, 144
  05e335c  blr
  05e3360  slwi 9, 31, 3
  05e3364  lwz 30, -23500(2)
  05e3368  extsw 9, 9
  05e336c  add 9, 9, 30
  05e3370  lbz 0, 48(9)
  05e3374  cmpwi 7, 0, 0
  05e3378  bt 30, 0x5e3340
  05e337c  addi 3, 30, 24
  05e3380  li 4, 0
  05e3384  bl 0x6504c4
  05e3388  ld 2, 40(1)
  05e338c  cmpwi 7, 3, 0
  05e3390  bf- 30, 0x5e33ec
  05e3394  lwz 3, 120(30)
  05e3398  cmpwi 7, 3, 0
  05e339c  bt 30, 0x5e33d4
  05e33a0  clrldi 3, 3, 32
  05e33a4  ld 9, 112(1)
  05e33a8  ld 0, 8(3)
  05e33ac  cmpd 7, 0, 9
  05e33b0  bf 30, 0x5e33c8
  05e33b4  b 0x5e33f4
  05e33b8  clrldi 3, 3, 32
  05e33bc  ld 0, 8(3)
  05e33c0  cmpd 7, 0, 9
  05e33c4  bt 30, 0x5e33f4
  05e33c8  lwz 3, 0(3)
  05e33cc  cmpwi 7, 3, 0
  05e33d0  bf 30, 0x5e33b8
  05e33d4  li 31, 0
  05e33d8  addi 3, 30, 24
  05e33dc  bl 0x6504e4
  05e33e0  ld 2, 40(1)
  05e33e4  cmpwi 7, 3, 0
  05e33e8  bt 30, 0x5e3344
  05e33ec  bl 0x5c4840
  05e33f0  nop
  05e33f4  slwi 9, 31, 2
  05e33f8  addi 9, 9, 16
  05e33fc  extsw 9, 9
  05e3400  lwzx 31, 3, 9

FUN_005e3408:   # 0x5e3408, 0x14c bytes
  05e3408  stdu 1, -160(1)
  05e340c  mflr 0
  05e3410  std 31, 152(1)
  05e3414  mr 31, 3
  05e3418  addi 3, 1, 112
  05e341c  std 29, 136(1)
  05e3420  std 30, 144(1)
  05e3424  std 0, 176(1)
  05e3428  mr 29, 4
  05e342c  bl 0x6505c4
  05e3430  ld 2, 40(1)
  05e3434  cmplwi 7, 31, 3
  05e3438  bt 29, 0x5e3458
  05e343c  slwi 9, 31, 3
  05e3440  lwz 30, -23500(2)
  05e3444  extsw 9, 9
  05e3448  add 9, 9, 30
  05e344c  lbz 0, 48(9)
  05e3450  cmpwi 7, 0, 0
  05e3454  bf 30, 0x5e347c
  05e3458  li 3, 1
  05e345c  ld 0, 176(1)
  05e3460  extsw 3, 3
  05e3464  ld 29, 136(1)
  05e3468  ld 30, 144(1)
  05e346c  mtlr 0
  05e3470  ld 31, 152(1)
  05e3474  addi 1, 1, 160
  05e3478  blr
  05e347c  addi 3, 30, 24
  05e3480  li 4, 0
  05e3484  bl 0x6504c4
  05e3488  ld 2, 40(1)
  05e348c  cmpwi 7, 3, 0
  05e3490  bf- 30, 0x5e353c
  05e3494  lwz 0, 120(30)
  05e3498  cmpwi 7, 0, 0
  05e349c  bt 30, 0x5e34d4
  05e34a0  clrldi 10, 0, 32
  05e34a4  ld 9, 112(1)
  05e34a8  ld 0, 8(10)
  05e34ac  cmpd 7, 0, 9
  05e34b0  bf 30, 0x5e34c8
  05e34b4  b 0x5e3544
  05e34b8  clrldi 10, 0, 32
  05e34bc  ld 0, 8(10)
  05e34c0  cmpd 7, 0, 9
  05e34c4  bt 30, 0x5e3544
  05e34c8  lwz 0, 0(10)
  05e34cc  cmpwi 7, 0, 0
  05e34d0  bf 30, 0x5e34b8
  05e34d4  li 3, 32
  05e34d8  bl 0x5d5838
  05e34dc  nop
  05e34e0  cmpwi 7, 3, 0
  05e34e4  bt- 30, 0x5e353c
  05e34e8  slwi 11, 31, 2
  05e34ec  lwz 10, 120(30)
  05e34f0  clrldi 8, 3, 32
  05e34f4  ld 0, 112(1)
  05e34f8  addi 11, 11, 16
  05e34fc  li 9, 0
  05e3500  extsw 11, 11
  05e3504  stw 9, 28(3)
  05e3508  stw 10, 0(3)
  05e350c  stw 9, 16(3)
  05e3510  stw 9, 20(3)
  05e3514  stw 9, 24(3)
  05e3518  std 0, 8(3)
  05e351c  stw 3, 120(30)
  05e3520  stwx 29, 8, 11
  05e3524  addi 3, 30, 24
  05e3528  bl 0x6504e4
  05e352c  ld 2, 40(1)
  05e3530  cmpwi 7, 3, 0
  05e3534  li 3, 0
  05e3538  bt 30, 0x5e345c
  05e353c  bl 0x5c4840
  05e3540  nop
  05e3544  slwi 9, 31, 2
  05e3548  addi 9, 9, 16
  05e354c  extsw 9, 9
  05e3550  stwx 29, 10, 9

FUN_005e3558:   # 0x5e3558, 0x4c bytes
  05e3558  lwz 3, -23500(2)
  05e355c  mflr 0
  05e3560  lwz 4, -23504(2)
  05e3564  addi 3, 3, 24
  05e3568  addi 4, 4, 16
  05e356c  stdu 1, -112(1)
  05e3570  std 0, 128(1)
  05e3574  bl 0x6505a4
  05e3578  ld 2, 40(1)
  05e357c  cmpwi 7, 3, 0
  05e3580  bf- 30, 0x5e35a0
  05e3584  lwz 3, -23492(2)
  05e3588  bl 0x5c4d80
  05e358c  nop
  05e3590  ld 0, 128(1)
  05e3594  addi 1, 1, 112
  05e3598  mtlr 0
  05e359c  blr
  05e35a0  bl 0x5c4840

FUN_005e35a8:   # 0x5e35a8, 0x104 bytes
  05e35a8  stdu 1, -144(1)
  05e35ac  mflr 0
  05e35b0  std 29, 120(1)
  05e35b4  lwz 29, -23500(2)
  05e35b8  li 4, 0
  05e35bc  std 28, 112(1)
  05e35c0  addi 3, 29, 24
  05e35c4  std 30, 128(1)
  05e35c8  std 31, 136(1)
  05e35cc  std 0, 160(1)
  05e35d0  bl 0x6504c4
  05e35d4  ld 2, 40(1)
  05e35d8  cmpwi 7, 3, 0
  05e35dc  bf 30, 0x5e368c
  05e35e0  lwz 28, 120(29)
  05e35e4  cmpwi 7, 28, 0
  05e35e8  bt 30, 0x5e3678
  05e35ec  addi 30, 28, 16
  05e35f0  addi 31, 29, 48
  05e35f4  clrldi 9, 31, 32
  05e35f8  addi 31, 31, 8
  05e35fc  lbz 0, 0(9)
  05e3600  cmpwi 7, 0, 0
  05e3604  bt 30, 0x5e3644
  05e3608  lwz 0, 4(9)
  05e360c  clrldi 3, 30, 32
  05e3610  cmpwi 7, 0, 0
  05e3614  bt 30, 0x5e3644
  05e3618  clrldi 9, 0, 32
  05e361c  lwz 0, 0(3)
  05e3620  cmpwi 7, 0, 0
  05e3624  clrldi 3, 0, 32
  05e3628  bt 30, 0x5e3644
  05e362c  lwz 0, 0(9)
  05e3630  std 2, 40(1)
  05e3634  mtctr 0
  05e3638  lwz 2, 4(9)
  05e363c  bctrl
  05e3640  ld 2, 40(1)
  05e3644  addi 0, 29, 80
  05e3648  addi 30, 30, 4
  05e364c  cmpw 7, 31, 0
  05e3650  bf 30, 0x5e35f4
  05e3654  clrldi 9, 28, 32
  05e3658  mr 3, 9
  05e365c  lwz 31, 0(9)
  05e3660  bl 0x5d580c
  05e3664  nop
  05e3668  cmpwi 7, 31, 0
  05e366c  bt 30, 0x5e3678
  05e3670  mr 28, 31
  05e3674  b 0x5e35ec
  05e3678  li 0, 0
  05e367c  addi 3, 29, 24
  05e3680  stw 0, 120(29)
  05e3684  bl 0x6504e4
  05e3688  ld 2, 40(1)
  05e368c  ld 0, 160(1)
  05e3690  ld 28, 112(1)
  05e3694  ld 29, 120(1)
  05e3698  mtlr 0
  05e369c  ld 30, 128(1)
  05e36a0  ld 31, 136(1)
  05e36a4  addi 1, 1, 144
  05e36a8  blr

FUN_005e36ac:   # 0x5e36ac, 0x1d0 bytes
  05e36ac  mfcr 12
  05e36b0  stdu 1, -208(1)
  05e36b4  std 24, 144(1)
  05e36b8  mr 24, 3
  05e36bc  addi 3, 1, 112
  05e36c0  std 25, 152(1)
  05e36c4  std 30, 192(1)
  05e36c8  std 23, 136(1)
  05e36cc  std 26, 160(1)
  05e36d0  std 27, 168(1)
  05e36d4  std 28, 176(1)
  05e36d8  std 29, 184(1)
  05e36dc  std 31, 200(1)
  05e36e0  stw 12, 216(1)
  05e36e4  mflr 0
  05e36e8  std 0, 224(1)
  05e36ec  bl 0x6505c4
  05e36f0  ld 2, 40(1)
  05e36f4  lwz 30, -23500(2)
  05e36f8  li 4, 0
  05e36fc  addi 3, 30, 24
  05e3700  mr 25, 30
  05e3704  bl 0x6504c4
  05e3708  ld 2, 40(1)
  05e370c  cmpwi 7, 3, 0
  05e3710  bf 30, 0x5e37e8
  05e3714  lwz 31, 120(30)
  05e3718  cmpwi 4, 31, 0
  05e371c  bt 18, 0x5e3758
  05e3720  clrldi 11, 31, 32
  05e3724  ld 10, 112(1)
  05e3728  ld 0, 8(11)
  05e372c  cmpd 7, 0, 10
  05e3730  bf 30, 0x5e3744
  05e3734  b 0x5e386c
  05e3738  ld 0, 8(11)
  05e373c  cmpd 7, 0, 10
  05e3740  bt 30, 0x5e3824
  05e3744  mr 9, 31
  05e3748  lwz 31, 0(11)
  05e374c  cmpwi 4, 31, 0
  05e3750  clrldi 11, 31, 32
  05e3754  bf 18, 0x5e3738
  05e3758  li 26, 0
  05e375c  li 30, 0
  05e3760  li 27, 0
  05e3764  addi 29, 25, 48
  05e3768  li 28, 0
  05e376c  li 23, 0
  05e3770  clrldi 9, 29, 32
  05e3774  addi 29, 29, 8
  05e3778  lbz 0, 0(9)
  05e377c  cmpwi 7, 0, 0
  05e3780  bt 30, 0x5e37c0
  05e3784  lwz 9, 4(9)
  05e3788  add 0, 28, 26
  05e378c  cmpwi 7, 9, 0
  05e3790  clrldi 11, 0, 32
  05e3794  bt 30, 0x5e37c0
  05e3798  lwz 3, 0(11)
  05e379c  cmpw 6, 30, 24
  05e37a0  cmpwi 7, 3, 0
  05e37a4  bt 30, 0x5e37c0
  05e37a8  slwi 0, 30, 3
  05e37ac  clrldi 3, 3, 32
  05e37b0  extsw 0, 0
  05e37b4  addi 27, 27, 1
  05e37b8  add 9, 0, 25
  05e37bc  bt 26, 0x5e3838
  05e37c0  cmpwi 7, 30, 3
  05e37c4  addi 28, 28, 4
  05e37c8  addi 30, 30, 1
  05e37cc  bf 30, 0x5e3770
  05e37d0  bt 18, 0x5e37dc
  05e37d4  cmpwi 7, 27, 1
  05e37d8  bf 29, 0x5e385c
  05e37dc  addi 3, 25, 24
  05e37e0  bl 0x6504e4
  05e37e4  ld 2, 40(1)
  05e37e8  ld 0, 224(1)
  05e37ec  lwz 12, 216(1)
  05e37f0  ld 23, 136(1)
  05e37f4  mtlr 0
  05e37f8  ld 24, 144(1)
  05e37fc  mtocrf 8, 12
  05e3800  ld 25, 152(1)
  05e3804  ld 26, 160(1)
  05e3808  ld 27, 168(1)
  05e380c  ld 28, 176(1)
  05e3810  ld 29, 184(1)
  05e3814  ld 30, 192(1)
  05e3818  ld 31, 200(1)
  05e381c  addi 1, 1, 208
  05e3820  blr
  05e3824  clrldi 9, 9, 32
  05e3828  lwz 0, 0(11)
  05e382c  addi 26, 31, 16
  05e3830  stw 0, 0(9)
  05e3834  b 0x5e375c
  05e3838  lwz 9, 52(9)
  05e383c  stw 23, 0(11)
  05e3840  lwz 0, 0(9)
  05e3844  std 2, 40(1)
  05e3848  mtctr 0
  05e384c  lwz 2, 4(9)
  05e3850  bctrl
  05e3854  ld 2, 40(1)
  05e3858  b 0x5e37c0
  05e385c  clrldi 3, 31, 32
  05e3860  bl 0x5d580c
  05e3864  nop
  05e3868  b 0x5e37dc
  05e386c  lwz 0, 0(11)
  05e3870  addi 26, 31, 16
  05e3874  stw 0, 120(30)
  05e3878  b 0x5e375c

FUN_005e387c:   # 0x5e387c, 0x34 bytes
  05e387c  stdu 1, -112(1)
  05e3880  mflr 0
  05e3884  std 0, 128(1)
  05e3888  mr 0, 3
  05e388c  clrldi 3, 3, 32
  05e3890  cmpwi 7, 0, 0
  05e3894  bt 30, 0x5e38a0
  05e3898  bl 0x5d580c
  05e389c  nop
  05e38a0  ld 0, 128(1)
  05e38a4  addi 1, 1, 112
  05e38a8  mtlr 0
  05e38ac  blr

FUN_005e38b0:   # 0x5e38b0, 0xf4 bytes
  05e38b0  stdu 1, -160(1)
  05e38b4  mflr 0
  05e38b8  std 31, 152(1)
  05e38bc  lwz 31, -23480(2)
  05e38c0  std 26, 112(1)
  05e38c4  std 27, 120(1)
  05e38c8  std 28, 128(1)
  05e38cc  std 29, 136(1)
  05e38d0  std 30, 144(1)
  05e38d4  std 0, 176(1)
  05e38d8  mr 30, 3
  05e38dc  lwz 29, -23484(2)
  05e38e0  lwz 26, -23476(2)
  05e38e4  li 27, 1
  05e38e8  addi 28, 31, 8
  05e38ec  mr 3, 30
  05e38f0  bl 0x5d5838
  05e38f4  nop
  05e38f8  clrldi 11, 31, 32
  05e38fc  cmpwi 7, 3, 0
  05e3900  bf 30, 0x5e3944
  05e3904  lwz 0, 0(29)
  05e3908  cmpwi 7, 0, 0
  05e390c  clrldi 9, 0, 32
  05e3910  bt 30, 0x5e3970
  05e3914  lwz 0, 0(9)
  05e3918  std 2, 40(1)
  05e391c  mtctr 0
  05e3920  lwz 2, 4(9)
  05e3924  bctrl
  05e3928  ld 2, 40(1)
  05e392c  mr 3, 30
  05e3930  bl 0x5d5838
  05e3934  nop
  05e3938  clrldi 11, 31, 32
  05e393c  cmpwi 7, 3, 0
  05e3940  bt 30, 0x5e3904
  05e3944  ld 0, 176(1)
  05e3948  clrldi 3, 3, 32
  05e394c  ld 26, 112(1)
  05e3950  ld 27, 120(1)
  05e3954  mtlr 0
  05e3958  ld 28, 128(1)
  05e395c  ld 29, 136(1)
  05e3960  ld 30, 144(1)
  05e3964  ld 31, 152(1)
  05e3968  addi 1, 1, 160
  05e396c  blr
  05e3970  lbz 0, 0(11)
  05e3974  cmpwi 7, 0, 0
  05e3978  bt 30, 0x5e398c
  05e397c  clrldi 3, 28, 32
  05e3980  bl 0x5e3b94
  05e3984  nop
  05e3988  b 0x5e38ec
  05e398c  lwz 3, -23472(2)
  05e3990  stw 26, 8(31)
  05e3994  stb 27, 0(11)
  05e3998  bl 0x5c4d80
  05e399c  nop
  05e39a0  b 0x5e397c

FUN_005e39a4:   # 0x5e39a4, 0x38 bytes
  05e39a4  lwz 9, -23480(2)
  05e39a8  mflr 0
  05e39ac  stdu 1, -112(1)
  05e39b0  addi 3, 9, 8
  05e39b4  std 0, 128(1)
  05e39b8  lwz 0, -23476(2)
  05e39bc  clrldi 3, 3, 32
  05e39c0  stw 0, 8(9)
  05e39c4  bl 0x5e3cd4
  05e39c8  nop
  05e39cc  ld 0, 128(1)
  05e39d0  addi 1, 1, 112
  05e39d4  mtlr 0
  05e39d8  blr

FUN_005e39dc:   # 0x5e39dc, 0x108 bytes
  05e39dc  stdu 1, -176(1)
  05e39e0  mflr 0
  05e39e4  std 31, 168(1)
  05e39e8  lwz 31, -23460(2)
  05e39ec  std 25, 120(1)
  05e39f0  std 26, 128(1)
  05e39f4  std 27, 136(1)
  05e39f8  std 28, 144(1)
  05e39fc  std 29, 152(1)
  05e3a00  std 30, 160(1)
  05e3a04  std 0, 192(1)
  05e3a08  mr 29, 4
  05e3a0c  lwz 28, -23464(2)
  05e3a10  mr 30, 3
  05e3a14  lwz 25, -23456(2)
  05e3a18  li 26, 1
  05e3a1c  addi 27, 31, 8
  05e3a20  mr 4, 30
  05e3a24  mr 3, 29
  05e3a28  bl 0x5d5764
  05e3a2c  nop
  05e3a30  clrldi 11, 31, 32
  05e3a34  cmpwi 7, 3, 0
  05e3a38  bf 30, 0x5e3a80
  05e3a3c  lwz 0, 0(28)
  05e3a40  cmpwi 7, 0, 0
  05e3a44  clrldi 9, 0, 32
  05e3a48  bt 30, 0x5e3ab0
  05e3a4c  lwz 0, 0(9)
  05e3a50  std 2, 40(1)
  05e3a54  mtctr 0
  05e3a58  lwz 2, 4(9)
  05e3a5c  bctrl
  05e3a60  ld 2, 40(1)
  05e3a64  mr 4, 30
  05e3a68  mr 3, 29
  05e3a6c  bl 0x5d5764
  05e3a70  nop
  05e3a74  clrldi 11, 31, 32
  05e3a78  cmpwi 7, 3, 0
  05e3a7c  bt 30, 0x5e3a3c
  05e3a80  ld 0, 192(1)
  05e3a84  clrldi 3, 3, 32
  05e3a88  ld 25, 120(1)
  05e3a8c  ld 26, 128(1)
  05e3a90  mtlr 0
  05e3a94  ld 27, 136(1)
  05e3a98  ld 28, 144(1)
  05e3a9c  ld 29, 152(1)
  05e3aa0  ld 30, 160(1)
  05e3aa4  ld 31, 168(1)
  05e3aa8  addi 1, 1, 176
  05e3aac  blr
  05e3ab0  lbz 0, 0(11)
  05e3ab4  cmpwi 7, 0, 0
  05e3ab8  bt 30, 0x5e3acc
  05e3abc  clrldi 3, 27, 32
  05e3ac0  bl 0x5e3b94
  05e3ac4  nop
  05e3ac8  b 0x5e3a20
  05e3acc  lwz 3, -23452(2)
  05e3ad0  stw 25, 8(31)
  05e3ad4  stb 26, 0(11)
  05e3ad8  bl 0x5c4d80
  05e3adc  nop
  05e3ae0  b 0x5e3abc

FUN_005e3ae4:   # 0x5e3ae4, 0x38 bytes
  05e3ae4  lwz 9, -23460(2)
  05e3ae8  mflr 0
  05e3aec  stdu 1, -112(1)
  05e3af0  addi 3, 9, 8
  05e3af4  std 0, 128(1)
  05e3af8  lwz 0, -23456(2)
  05e3afc  clrldi 3, 3, 32
  05e3b00  stw 0, 8(9)
  05e3b04  bl 0x5e3cd4
  05e3b08  nop
  05e3b0c  ld 0, 128(1)
  05e3b10  addi 1, 1, 112
  05e3b14  mtlr 0
  05e3b18  blr

FUN_005e3b1c:   # 0x5e3b1c, 0x74 bytes
  05e3b1c  stdu 1, -144(1)
  05e3b20  mflr 0
  05e3b24  std 29, 120(1)
  05e3b28  mr 29, 3
  05e3b2c  li 3, 0
  05e3b30  std 30, 128(1)
  05e3b34  std 31, 136(1)
  05e3b38  std 0, 160(1)
  05e3b3c  mr 31, 4
  05e3b40  bl 0x5c50cc
  05e3b44  nop
  05e3b48  lwz 30, -23448(2)
  05e3b4c  clrldi 3, 29, 32
  05e3b50  mr 4, 30
  05e3b54  bl 0x5d5a08
  05e3b58  nop
  05e3b5c  cmpwi 7, 31, 0
  05e3b60  bt 30, 0x5e3b8c
  05e3b64  mr 4, 30
  05e3b68  clrldi 3, 31, 32
  05e3b6c  bl 0x5d5a08
  05e3b70  nop
  05e3b74  mr 4, 30
  05e3b78  lwz 3, -23440(2)
  05e3b7c  bl 0x5d5a08
  05e3b80  nop
  05e3b84  bl 0x5c4840
  05e3b88  nop
  05e3b8c  lwz 31, -23444(2)
