# game/update/moby639.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003fd8d8:   # 0x3fd8d8, 0x34 bytes
  03fd8d8  lwz 3, 120(3)
  03fd8dc  stw 4, 720(3)
  03fd8e0  lfs 1, 0(5)
  03fd8e4  stfs 1, 704(3)
  03fd8e8  lfs 1, 4(5)
  03fd8ec  stfs 1, 708(3)
  03fd8f0  lfs 1, 8(5)
  03fd8f4  stfs 1, 712(3)
  03fd8f8  lfs 1, 12(5)
  03fd8fc  stfs 1, 716(3)
  03fd900  lfs 1, 8(6)
  03fd904  stfs 1, 716(3)
  03fd908  blr

FUN_003fd918:   # 0x3fd918, 0x108 bytes
  03fd918  stdu 1, -160(1)
  03fd91c  mflr 0
  03fd920  std 0, 176(1)
  03fd924  std 31, 152(1)
  03fd928  ori 31, 4, 0
  03fd92c  std 30, 144(1)
  03fd930  lbz 4, 32(3)
  03fd934  std 29, 136(1)
  03fd938  ori 30, 3, 0
  03fd93c  lwz 29, 120(3)
  03fd940  cmpwi 4, 10
  03fd944  bf 2, 0x3fda04
  03fd948  li 3, 1
  03fd94c  lbz 4, 83(30)
  03fd950  cmpwi 4, 1
  03fd954  stb 3, 32(30)
  03fd958  bt 2, 0x3fd998
  03fd95c  lis 3, 64
  03fd960  lis 4, 114
  03fd964  addi 3, 3, -9972
  03fd968  li 5, 0
  03fd96c  lfs 1, 0(3)
  03fd970  lfs 2, -3056(4)
  03fd974  ori 3, 30, 0
  03fd978  fmuls 1, 2, 1
  03fd97c  li 4, 1
  03fd980  fctiwz 1, 1
  03fd984  stfd 1, 112(1)
  03fd988  lwz 6, 116(1)
  03fd98c  extsw 6, 6
  03fd990  bl 0xfddc0
  03fd994  nop
  03fd998  li 3, 1
  03fd99c  lwz 4, 36(30)
  03fd9a0  lis 5, 64
  03fd9a4  stb 3, 49(30)
  03fd9a8  lhz 3, 52(30)
  03fd9ac  lfs 1, 24(30)
  03fd9b0  lwz 4, 16(4)
  03fd9b4  rlwinm 3, 3, 0, 0, 30
  03fd9b8  stfs 1, 700(29)
  03fd9bc  lfs 1, 16(30)
  03fd9c0  ori 3, 3, 4096
  03fd9c4  stw 4, 148(30)
  03fd9c8  stfs 1, 704(29)
  03fd9cc  lfs 1, 20(30)
  03fd9d0  addi 4, 5, -9972
  03fd9d4  sth 3, 52(30)
  03fd9d8  stfs 1, 708(29)
  03fd9dc  lfs 1, 24(30)
  03fd9e0  lis 3, 114
  03fd9e4  sth 31, 732(29)
  03fd9e8  stfs 1, 712(29)
  03fd9ec  lfs 1, 28(30)
  03fd9f0  stfs 1, 716(29)
  03fd9f4  lfs 1, 4(4)
  03fd9f8  lfs 2, -3052(3)
  03fd9fc  fmuls 1, 2, 1
  03fda00  stfs 1, 724(29)
  03fda04  ld 0, 176(1)
  03fda08  mtlr 0
  03fda0c  ld 29, 136(1)
  03fda10  ld 30, 144(1)
  03fda14  ld 31, 152(1)
  03fda18  addi 1, 1, 160
  03fda1c  blr

M639_003fda20:   # 0x3fda20, 0x14 bytes
  03fda20  lis 3, 133
  03fda24  lis 4, 1
  03fda28  addic 3, 3, 18048
  03fda2c  stw 4, 72(3)
  03fda30  blr

FUN_003fda38:   # 0x3fda38, 0x234 bytes
  03fda38  stdu 1, -160(1)
  03fda3c  mflr 0
  03fda40  std 0, 176(1)
  03fda44  std 28, 128(1)
  03fda48  ori 28, 3, 0
  03fda4c  std 31, 152(1)
  03fda50  li 3, 639
  03fda54  std 30, 144(1)
  03fda58  ori 31, 6, 0
  03fda5c  std 29, 136(1)
  03fda60  ori 30, 5, 0
  03fda64  std 27, 120(1)
  03fda68  ori 29, 4, 0
  03fda6c  bl 0xefa28
  03fda70  nop
  03fda74  ori 27, 3, 0
  03fda78  cmpwi 27, 0
  03fda7c  bt 2, 0x3fdc44
  03fda80  li 3, 255
  03fda84  li 4, 1
  03fda88  lhz 6, 52(27)
  03fda8c  li 5, 0
  03fda90  cmpwi 31, 0
  03fda94  stb 3, 48(27)
  03fda98  ori 3, 6, 1
  03fda9c  stb 4, 49(27)
  03fdaa0  stb 5, 32(27)
  03fdaa4  stb 5, 188(27)
  03fdaa8  sth 3, 52(27)
  03fdaac  lfs 1, 0(29)
  03fdab0  lwz 3, 120(27)
  03fdab4  stfs 1, 16(27)
  03fdab8  lfs 1, 4(29)
  03fdabc  stfs 1, 20(27)
  03fdac0  lfs 1, 8(29)
  03fdac4  stfs 1, 24(27)
  03fdac8  lfs 1, 12(29)
  03fdacc  stfs 1, 28(27)
  03fdad0  bt 2, 0x3fdaf4
  03fdad4  lfs 1, 0(31)
  03fdad8  stfs 1, 0(3)
  03fdadc  lfs 1, 4(31)
  03fdae0  stfs 1, 4(3)
  03fdae4  lfs 1, 8(31)
  03fdae8  stfs 1, 8(3)
  03fdaec  lfs 1, 12(31)
  03fdaf0  b 0x3fdb10
  03fdaf4  lfs 1, 0(28)
  03fdaf8  stfs 1, 0(3)
  03fdafc  lfs 1, 4(28)
  03fdb00  stfs 1, 4(3)
  03fdb04  lfs 1, 8(28)
  03fdb08  stfs 1, 8(3)
  03fdb0c  lfs 1, 12(28)
  03fdb10  ori 4, 3, 0
  03fdb14  li 5, -1
  03fdb18  stfs 1, 12(4)
  03fdb1c  stw 30, 32(4)
  03fdb20  lbz 3, 60(28)
  03fdb24  sth 3, 50(27)
  03fdb28  lbz 3, 16(28)
  03fdb2c  stb 3, 36(4)
  03fdb30  lbz 3, 17(28)
  03fdb34  stb 3, 37(4)
  03fdb38  lbz 3, 18(28)
  03fdb3c  stb 3, 38(4)
  03fdb40  lbz 3, 19(28)
  03fdb44  stb 3, 39(4)
  03fdb48  lbz 3, 20(28)
  03fdb4c  stb 3, 40(4)
  03fdb50  lbz 3, 21(28)
  03fdb54  stb 3, 41(4)
  03fdb58  lbz 3, 61(28)
  03fdb5c  stb 3, 104(4)
  03fdb60  lhz 3, 64(28)
  03fdb64  sth 3, 108(4)
  03fdb68  lbz 3, 22(28)
  03fdb6c  stb 3, 42(4)
  03fdb70  lbz 3, 23(28)
  03fdb74  stb 3, 43(4)
  03fdb78  lbz 3, 24(28)
  03fdb7c  stb 3, 44(4)
  03fdb80  lbz 3, 25(28)
  03fdb84  stb 3, 45(4)
  03fdb88  lbz 3, 26(28)
  03fdb8c  stb 3, 46(4)
  03fdb90  lbz 3, 62(28)
  03fdb94  stb 3, 105(4)
  03fdb98  lhz 3, 66(28)
  03fdb9c  sth 3, 110(4)
  03fdba0  lbz 3, 27(28)
  03fdba4  stb 3, 47(4)
  03fdba8  lbz 3, 28(28)
  03fdbac  stb 3, 48(4)
  03fdbb0  lbz 3, 29(28)
  03fdbb4  stb 3, 49(4)
  03fdbb8  lbz 3, 30(28)
  03fdbbc  stb 3, 50(4)
  03fdbc0  lbz 3, 31(28)
  03fdbc4  stb 3, 51(4)
  03fdbc8  lbz 3, 63(28)
  03fdbcc  stb 3, 106(4)
  03fdbd0  lhz 3, 68(28)
  03fdbd4  sth 3, 112(4)
  03fdbd8  lfs 1, 32(28)
  03fdbdc  stfs 1, 52(4)
  03fdbe0  lfs 1, 36(28)
  03fdbe4  stfs 1, 56(4)
  03fdbe8  lfs 1, 40(28)
  03fdbec  stfs 1, 60(4)
  03fdbf0  lfs 1, 44(28)
  03fdbf4  stfs 1, 64(4)
  03fdbf8  lfs 1, 48(28)
  03fdbfc  stfs 1, 68(4)
  03fdc00  lbz 3, 72(28)
  03fdc04  stb 3, 107(4)
  03fdc08  lhz 3, 70(28)
  03fdc0c  sth 3, 114(4)
  03fdc10  lwz 6, 52(28)
  03fdc14  ori 3, 27, 0
  03fdc18  stw 6, 72(4)
  03fdc1c  lwz 6, 56(28)
  03fdc20  stw 6, 76(4)
  03fdc24  lbz 6, 73(28)
  03fdc28  stw 5, 100(4)
  03fdc2c  stb 6, 28(4)
  03fdc30  bl 0xf31a8
  03fdc34  nop
  03fdc38  ori 3, 27, 0
  03fdc3c  bl 0x10c000
  03fdc40  nop
  03fdc44  ori 3, 27, 0
  03fdc48  ld 0, 176(1)
  03fdc4c  mtlr 0
  03fdc50  ld 27, 120(1)
  03fdc54  ld 28, 128(1)
  03fdc58  ld 29, 136(1)
  03fdc5c  ld 30, 144(1)
  03fdc60  ld 31, 152(1)
  03fdc64  addi 1, 1, 160
  03fdc68  blr

UpdateMoby_639:   # 0x3fdc80, 0x1054 bytes
  03fdc80  stdu 1, -240(1)
  03fdc84  mflr 0
  03fdc88  std 0, 256(1)
  03fdc8c  stfd 26, 192(1)
  03fdc90  stfd 27, 200(1)
  03fdc94  stfd 28, 208(1)
  03fdc98  stfd 29, 216(1)
  03fdc9c  stfd 30, 224(1)
  03fdca0  stfd 31, 232(1)
  03fdca4  std 31, 184(1)
  03fdca8  cmpwi 3, 0
  03fdcac  std 30, 176(1)
  03fdcb0  std 29, 168(1)
  03fdcb4  std 28, 160(1)
  03fdcb8  std 27, 152(1)
  03fdcbc  ori 31, 3, 0
  03fdcc0  bt 2, 0x3fec98
  03fdcc4  lwz 30, 120(31)
  03fdcc8  li 29, 0
  03fdccc  cmpwi 30, 0
  03fdcd0  ori 28, 29, 0
  03fdcd4  bt 2, 0x3fec98
  03fdcd8  lbz 3, 32(31)
  03fdcdc  cmpwi 3, 0
  03fdce0  bf 2, 0x3fddf8
  03fdce4  li 3, 255
  03fdce8  li 4, -1
  03fdcec  stb 3, 48(31)
  03fdcf0  lbz 3, 28(30)
  03fdcf4  stb 3, 188(31)
  03fdcf8  lfs 1, 16(31)
  03fdcfc  stfs 1, 16(30)
  03fdd00  lfs 1, 20(31)
  03fdd04  stfs 1, 20(30)
  03fdd08  lfs 1, 24(31)
  03fdd0c  stfs 1, 24(30)
  03fdd10  lfs 1, 28(31)
  03fdd14  lwz 5, 76(30)
  03fdd18  stfs 1, 28(30)
  03fdd1c  lhz 6, 108(30)
  03fdd20  lhz 7, 110(30)
  03fdd24  lhz 8, 112(30)
  03fdd28  lhz 9, 114(30)
  03fdd2c  lbz 3, 37(30)
  03fdd30  lbz 10, 188(31)
  03fdd34  stw 5, 12(30)
  03fdd38  stb 10, 28(30)
  03fdd3c  sth 6, 116(30)
  03fdd40  sth 7, 118(30)
  03fdd44  sth 8, 120(30)
  03fdd48  sth 9, 122(30)
  03fdd4c  stw 4, 80(30)
  03fdd50  bl 0x502730
  03fdd54  nop
  03fdd58  lis 3, 64
  03fdd5c  addi 4, 3, -9108
  03fdd60  lbz 3, 42(30)
  03fdd64  lfs 2, 0(4)
  03fdd68  fmr 31, 2
  03fdd6c  fmuls 1, 1, 31
  03fdd70  stfs 1, 84(30)
  03fdd74  bl 0x502730
  03fdd78  nop
  03fdd7c  fmuls 1, 1, 31
  03fdd80  lbz 3, 47(30)
  03fdd84  stfs 1, 88(30)
  03fdd88  bl 0x502730
  03fdd8c  nop
  03fdd90  fmuls 3, 1, 31
  03fdd94  lfs 1, 52(30)
  03fdd98  lwz 3, 100(30)
  03fdd9c  stfs 1, 96(30)
  03fdda0  lwz 5, 64(30)
  03fdda4  lwz 4, 68(30)
  03fdda8  cmpwi 3, -1
  03fddac  lfs 1, 64(30)
  03fddb0  lfs 2, 68(30)
  03fddb4  stfs 3, 92(30)
  03fddb8  bt 2, 0x3fddd0
  03fddbc  lis 6, 164
  03fddc0  slwi 3, 3, 8
  03fddc4  lwz 6, -28512(6)
  03fddc8  addc 3, 6, 3
  03fddcc  stw 3, 32(30)
  03fddd0  cmpwi 5, 0
  03fddd4  bf 0, 0x3fdde0
  03fddd8  fneg 1, 1
  03fdddc  stfs 1, 64(30)
  03fdde0  cmpwi 4, 0
  03fdde4  bf 0, 0x3fddf0
  03fdde8  fneg 1, 2
  03fddec  stfs 1, 68(30)
  03fddf0  li 3, 1
  03fddf4  stb 3, 32(31)
  03fddf8  lbz 3, 188(31)
  03fddfc  cmpwi 3, 0
  03fde00  bt 2, 0x3fde10
  03fde04  addic 3, 3, -1
  03fde08  stb 3, 188(31)
  03fde0c  b 0x3fec98
  03fde10  lwz 3, 72(30)
  03fde14  cmpwi 3, -1
  03fde18  bt 2, 0x3fde60
  03fde1c  addic 3, 30, 72
  03fde20  bl 0x4fff60
  03fde24  nop
  03fde28  cmpwi 3, 0
  03fde2c  bt 2, 0x3fde60
  03fde30  lwz 3, 80(30)
  03fde34  cmpwi 3, -1
  03fde38  bt 2, 0x3fde50
  03fde3c  extsw 3, 3
  03fde40  bl 0xda9e8
  03fde44  nop
  03fde48  li 3, -1
  03fde4c  stw 3, 80(30)
  03fde50  ori 3, 31, 0
  03fde54  bl 0xefb38
  03fde58  nop
  03fde5c  b 0x3fec98
  03fde60  lfs 1, 16(31)
  03fde64  lfs 2, 20(31)
  03fde68  lis 4, 64
  03fde6c  stfs 1, 112(1)
  03fde70  addic 3, 1, 112
  03fde74  lfs 1, 24(31)
  03fde78  addi 4, 4, -9108
  03fde7c  stfs 2, 116(1)
  03fde80  lfs 2, 28(31)
  03fde84  stfs 1, 120(1)
  03fde88  stfs 2, 124(1)
  03fde8c  lfs 1, 96(30)
  03fde90  stfs 1, 124(1)
  03fde94  lfs 1, 4(4)
  03fde98  bl 0x502910
  03fde9c  nop
  03fdea0  cmpwi 3, -1
  03fdea4  bt 2, 0x3fec78
  03fdea8  lwz 3, 32(30)
  03fdeac  cmpwi 3, 0
  03fdeb0  bt 2, 0x3fdec8
  03fdeb4  lfs 31, 16(3)
  03fdeb8  lfs 30, 20(3)
  03fdebc  lfs 29, 24(3)
  03fdec0  lfs 28, 28(3)
  03fdec4  b 0x3fded8
  03fdec8  lfs 31, 16(30)
  03fdecc  lfs 30, 20(30)
  03fded0  lfs 29, 24(30)
  03fded4  lfs 28, 28(30)
  03fded8  lwz 3, 76(30)
  03fdedc  rlwinm 4, 3, 0, 8, 8
  03fdee0  cmpwi 4, 0
  03fdee4  bf 2, 0x3fdffc
  03fdee8  rlwinm 4, 3, 0, 11, 11
  03fdeec  cmpwi 4, 0
  03fdef0  bt 2, 0x3fdf7c
  03fdef4  rlwinm 3, 3, 0, 10, 10
  03fdef8  cmpwi 3, 0
  03fdefc  bt 2, 0x3fdf3c
  03fdf00  lfs 2, 0(30)
  03fdf04  fneg 1, 2
  03fdf08  bl 0xfcbe8
  03fdf0c  nop
  03fdf10  lfs 2, 4(30)
  03fdf14  fmr 26, 1
  03fdf18  fneg 1, 2
  03fdf1c  bl 0xfcbe8
  03fdf20  nop
  03fdf24  lfs 2, 8(30)
  03fdf28  fmr 27, 1
  03fdf2c  fneg 1, 2
  03fdf30  bl 0xfcbe8
  03fdf34  nop
  03fdf38  b 0x3fdf88
  03fdf3c  lis 3, 64
  03fdf40  lwz 27, 12(30)
  03fdf44  addi 3, 3, -9108
  03fdf48  lfs 1, 8(3)
  03fdf4c  stw 29, 12(30)
  03fdf50  lfs 2, 12(3)
  03fdf54  bl 0xfcbe8
  03fdf58  nop
  03fdf5c  lfs 26, 0(30)
  03fdf60  lfs 27, 4(30)
  03fdf64  lfs 2, 8(30)
  03fdf68  fmuls 26, 26, 1
  03fdf6c  fmuls 27, 27, 1
  03fdf70  stw 27, 12(30)
  03fdf74  fmuls 1, 2, 1
  03fdf78  b 0x3fdf88
  03fdf7c  lfs 26, 0(30)
  03fdf80  lfs 27, 4(30)
  03fdf84  lfs 1, 8(30)
  03fdf88  lwz 3, 76(30)
  03fdf8c  rlwinm 3, 3, 0, 9, 9
  03fdf90  cmpwi 3, 0
  03fdf94  bt 2, 0x3fdfec
  03fdf98  lwz 3, 32(30)
  03fdf9c  cmpwi 3, 0
  03fdfa0  bt 2, 0x3fdfec
  03fdfa4  lfs 2, 208(3)
  03fdfa8  lfs 3, 212(3)
  03fdfac  lfs 4, 192(3)
  03fdfb0  fmuls 2, 2, 27
  03fdfb4  lfs 5, 196(3)
  03fdfb8  fmuls 3, 3, 27
  03fdfbc  lfs 6, 216(3)
  03fdfc0  lfs 7, 224(3)
  03fdfc4  fmuls 6, 6, 27
  03fdfc8  lfs 8, 228(3)
  03fdfcc  lfs 9, 200(3)
  03fdfd0  fmadds 2, 4, 26, 2
  03fdfd4  fmadds 3, 5, 26, 3
  03fdfd8  lfs 4, 232(3)
  03fdfdc  fmadds 5, 9, 26, 6
  03fdfe0  fmadds 26, 7, 1, 2
  03fdfe4  fmadds 27, 8, 1, 3
  03fdfe8  fmadds 1, 4, 1, 5
  03fdfec  fadds 31, 31, 26
  03fdff0  fadds 30, 30, 27
  03fdff4  fadds 29, 29, 1
  03fdff8  b 0x3fdffc
  03fdffc  stfs 31, 16(31)
  03fe000  stfs 30, 20(31)
  03fe004  stfs 29, 24(31)
  03fe008  stfs 28, 28(31)
  03fe00c  lhz 3, 114(30)
  03fe010  cmpwi 3, 0
  03fe014  bt 2, 0x3fe0b0
  03fe018  addic 3, 30, 122
  03fe01c  bl 0x4fffb4
  03fe020  nop
  03fe024  cmpwi 3, 0
  03fe028  bt 2, 0x3fe0b0
  03fe02c  li 3, 114
  03fe030  li 5, 16
  03fe034  addi 4, 3, 16
  03fe038  vspltisw 4, -1
  03fe03c  <unknown>
  03fe040  lis 3, 64
  03fe044  <unknown>
  03fe048  addi 3, 3, -9108
  03fe04c  vslw 4, 4, 4
  03fe050  vor 2, 2, 3
  03fe054  li 4, -3056
  03fe058  vspltisw 3, -16
  03fe05c  vsrw 2, 2, 3
  03fe060  <unknown>
  03fe064  lis 3, 114
  03fe068  vspltw 3, 3, 0
  03fe06c  vcfsx 2, 2, 0
  03fe070  <unknown>
  03fe074  li 3, 122
  03fe078  vaddfp 2, 2, 3
  03fe07c  vmaddfp 2, 5, 2, 4
  03fe080  vctsxs 2, 2, 0
  03fe084  vsplth 2, 2, 1
  03fe088  stvehx 2, 3, 30
  03fe08c  lwz 3, 76(30)
  03fe090  rlwinm 4, 3, 0, 29, 29
  03fe094  cmpwi 4, 0
  03fe098  bt 2, 0x3fe0b0
  03fe09c  rlwimi 3, 29, 0, 28, 28
  03fe0a0  lfs 1, 60(30)
  03fe0a4  li 29, 1
  03fe0a8  stw 3, 76(30)
  03fe0ac  stfs 1, 96(30)
  03fe0b0  lwz 3, 76(30)
  03fe0b4  rlwinm 4, 3, 0, 12, 12
  03fe0b8  cmpwi 4, 0
  03fe0bc  bf 2, 0x3fe254
  03fe0c0  rlwinm 4, 3, 0, 30, 30
  03fe0c4  cmpwi 4, 0
  03fe0c8  bt 2, 0x3fe0e0
  03fe0cc  clrlwi 4, 3, 31
  03fe0d0  cmpwi 4, 0
  03fe0d4  bf 2, 0x3fe0e0
  03fe0d8  xori 3, 3, 2
  03fe0dc  stw 3, 76(30)
  03fe0e0  rlwinm 4, 3, 0, 30, 30
  03fe0e4  cmpwi 4, 0
  03fe0e8  bf 2, 0x3fe224
  03fe0ec  rlwinm 4, 3, 0, 28, 28
  03fe0f0  cmpwi 4, 0
  03fe0f4  bt 2, 0x3fe180
  03fe0f8  lis 4, 114
  03fe0fc  lfs 1, 96(30)
  03fe100  lfs 2, 68(30)
  03fe104  lfs 3, -3064(4)
  03fe108  fnmsubs 2, 2, 3, 1
  03fe10c  lfs 1, 60(30)
  03fe110  fcmpu 0, 2, 1
  03fe114  stfs 2, 96(30)
  03fe118  bt 1, 0x3fe27c
  03fe11c  rlwinm 4, 3, 0, 29, 29
  03fe120  stfs 1, 96(30)
  03fe124  cmpwi 4, 0
  03fe128  bt 2, 0x3fe27c
  03fe12c  lhz 5, 114(30)
  03fe130  lis 4, 64
  03fe134  extsw 5, 5
  03fe138  addi 4, 4, -9108
  03fe13c  std 5, 128(1)
  03fe140  lis 5, 114
  03fe144  lfs 1, 16(4)
  03fe148  lfs 2, -3056(5)
  03fe14c  lfd 3, 128(1)
  03fe150  fcfid 3, 3
  03fe154  frsp 3, 3
  03fe158  fadds 1, 3, 1
  03fe15c  fmuls 1, 2, 1
  03fe160  fctiwz 1, 1
  03fe164  stfd 1, 128(1)
  03fe168  lwz 4, 132(1)
  03fe16c  cmpwi 4, 0
  03fe170  bf 2, 0x3fe27c
  03fe174  xori 3, 3, 8
  03fe178  stw 3, 76(30)
  03fe17c  b 0x3fe27c
  03fe180  lis 4, 114
  03fe184  lfs 1, 96(30)
  03fe188  lfs 2, 64(30)
  03fe18c  lfs 3, -3064(4)
  03fe190  fmadds 2, 2, 3, 1
  03fe194  lfs 1, 56(30)
  03fe198  fcmpu 0, 2, 1
  03fe19c  stfs 2, 96(30)
  03fe1a0  bt 0, 0x3fe27c
  03fe1a4  clrlwi 4, 3, 31
  03fe1a8  stfs 1, 96(30)
  03fe1ac  cmpwi 4, 0
  03fe1b0  bf 2, 0x3fe1c0
  03fe1b4  xori 3, 3, 8
  03fe1b8  stw 3, 76(30)
  03fe1bc  b 0x3fe27c
  03fe1c0  li 4, 107
  03fe1c4  vspltisw 2, -8
  03fe1c8  lis 6, 64
  03fe1cc  vspltisw 4, -1
  03fe1d0  li 5, 16
  03fe1d4  ori 3, 3, 2
  03fe1d8  <unknown>
  03fe1dc  addi 4, 6, -9108
  03fe1e0  vsrw 2, 3, 2
  03fe1e4  lis 6, 114
  03fe1e8  vslw 4, 4, 4
  03fe1ec  xori 3, 3, 8
  03fe1f0  vcfsx 2, 2, 0
  03fe1f4  <unknown>
  03fe1f8  li 4, -3056
  03fe1fc  vspltw 3, 3, 0
  03fe200  <unknown>
  03fe204  li 4, 127
  03fe208  vaddfp 2, 2, 3
  03fe20c  vmaddfp 2, 5, 2, 4
  03fe210  vctsxs 2, 2, 0
  03fe214  vspltb 2, 2, 3
  03fe218  stvebx 2, 4, 30
  03fe21c  stw 3, 76(30)
  03fe220  b 0x3fe27c
  03fe224  lbz 3, 107(30)
  03fe228  cmpwi 3, 0
  03fe22c  bt 2, 0x3fe27c
  03fe230  addic 3, 30, 127
  03fe234  bl 0x5000b4
  03fe238  nop
  03fe23c  cmpwi 3, 0
  03fe240  bt 2, 0x3fe27c
  03fe244  lwz 3, 76(30)
  03fe248  xori 3, 3, 2
  03fe24c  stw 3, 76(30)
  03fe250  b 0x3fe27c
  03fe254  lhz 3, 114(30)
  03fe258  cmpwi 1, 29, 1
  03fe25c  cmpwi 3, 0
  03fe260  bt 2, 0x3fe268
  03fe264  bf 6, 0x3fe27c
  03fe268  lfs 1, 60(30)
  03fe26c  lfs 2, 56(30)
  03fe270  bl 0xfcbe8
  03fe274  nop
  03fe278  stfs 1, 96(30)
  03fe27c  lhz 3, 108(30)
  03fe280  cmpwi 3, 0
  03fe284  bt 2, 0x3fe328
  03fe288  addic 3, 30, 116
  03fe28c  bl 0x4fffb4
  03fe290  nop
  03fe294  cmpwi 3, 0
  03fe298  bt 2, 0x3fe328
  03fe29c  li 3, 108
  03fe2a0  li 5, 16
  03fe2a4  addi 4, 3, 16
  03fe2a8  vspltisw 4, -1
  03fe2ac  <unknown>
  03fe2b0  lis 3, 64
  03fe2b4  <unknown>
  03fe2b8  addi 3, 3, -9108
  03fe2bc  vslw 4, 4, 4
  03fe2c0  vor 2, 2, 3
  03fe2c4  li 4, -3056
  03fe2c8  vspltisw 3, -16
  03fe2cc  vsrw 2, 2, 3
  03fe2d0  <unknown>
  03fe2d4  lis 3, 114
  03fe2d8  vspltw 3, 3, 0
  03fe2dc  vcfsx 2, 2, 0
  03fe2e0  li 5, 84
  03fe2e4  <unknown>
  03fe2e8  li 3, 116
  03fe2ec  li 4, 39
  03fe2f0  vaddfp 2, 2, 3
  03fe2f4  vspltisw 3, -8
  03fe2f8  vmaddfp 2, 5, 2, 4
  03fe2fc  vctsxs 2, 2, 0
  03fe300  vsplth 2, 2, 1
  03fe304  stvehx 2, 3, 30
  03fe308  <unknown>
  03fe30c  vsrw 2, 2, 3
  03fe310  vcfux 2, 2, 0
  03fe314  vspltw 2, 2, 0
  03fe318  stvewx 2, 5, 30
  03fe31c  lwz 3, 76(30)
  03fe320  rlwimi 3, 28, 0, 24, 24
  03fe324  stw 3, 76(30)
  03fe328  lwz 3, 76(30)
  03fe32c  rlwinm 4, 3, 0, 15, 15
  03fe330  cmpwi 4, 0
  03fe334  bf 2, 0x3fe4ec
  03fe338  rlwinm 4, 3, 0, 26, 26
  03fe33c  cmpwi 4, 0
  03fe340  bt 2, 0x3fe358
  03fe344  rlwinm 4, 3, 0, 27, 27
  03fe348  cmpwi 4, 0
  03fe34c  bf 2, 0x3fe358
  03fe350  xori 3, 3, 32
  03fe354  stw 3, 76(30)
  03fe358  rlwinm 4, 3, 0, 26, 26
  03fe35c  cmpwi 4, 0
  03fe360  bf 2, 0x3fe4bc
  03fe364  rlwinm 3, 3, 0, 24, 24
  03fe368  cmpwi 3, 0
  03fe36c  bt 2, 0x3fe3ec
  03fe370  lbz 3, 39(30)
  03fe374  bl 0x502730
  03fe378  nop
  03fe37c  lis 3, 64
  03fe380  addi 3, 3, -9108
  03fe384  lfs 2, 0(3)
  03fe388  lbz 4, 41(30)
  03fe38c  fmr 29, 2
  03fe390  lfs 30, 84(30)
  03fe394  ori 3, 4, 0
  03fe398  fmuls 31, 1, 29
  03fe39c  bl 0x502730
  03fe3a0  nop
  03fe3a4  fmuls 1, 1, 29
  03fe3a8  lis 3, 114
  03fe3ac  lfs 2, -3064(3)
  03fe3b0  fnmsubs 1, 1, 2, 30
  03fe3b4  fcmpu 0, 1, 31
  03fe3b8  stfs 1, 84(30)
  03fe3bc  bt 1, 0x3fe584
  03fe3c0  lwz 3, 76(30)
  03fe3c4  stfs 31, 84(30)
  03fe3c8  rlwinm 4, 3, 0, 25, 25
  03fe3cc  cmpwi 4, 0
  03fe3d0  bt 2, 0x3fe584
  03fe3d4  lhz 4, 108(30)
  03fe3d8  cmpwi 4, 0
  03fe3dc  bf 2, 0x3fe584
  03fe3e0  xori 3, 3, 128
  03fe3e4  stw 3, 76(30)
  03fe3e8  b 0x3fe584
  03fe3ec  lbz 3, 38(30)
  03fe3f0  bl 0x502730
  03fe3f4  nop
  03fe3f8  lis 3, 64
  03fe3fc  addi 4, 3, -9108
  03fe400  lbz 3, 40(30)
  03fe404  lfs 30, 84(30)
  03fe408  lfs 2, 0(4)
  03fe40c  fmr 29, 2
  03fe410  fmuls 31, 1, 29
  03fe414  bl 0x502730
  03fe418  nop
  03fe41c  fmuls 1, 1, 29
  03fe420  lis 3, 114
  03fe424  lfs 2, -3064(3)
  03fe428  fmadds 1, 1, 2, 30
  03fe42c  fcmpu 0, 1, 31
  03fe430  stfs 1, 84(30)
  03fe434  bt 0, 0x3fe584
  03fe438  lwz 3, 76(30)
  03fe43c  stfs 31, 84(30)
  03fe440  rlwinm 4, 3, 0, 27, 27
  03fe444  cmpwi 4, 0
  03fe448  bf 2, 0x3fe458
  03fe44c  xori 3, 3, 128
  03fe450  stw 3, 76(30)
  03fe454  b 0x3fe584
  03fe458  li 4, 104
  03fe45c  vspltisw 2, -8
  03fe460  lis 6, 64
  03fe464  vspltisw 4, -1
  03fe468  li 5, 16
  03fe46c  ori 3, 3, 32
  03fe470  <unknown>
  03fe474  addi 4, 6, -9108
  03fe478  vsrw 2, 3, 2
  03fe47c  lis 6, 114
  03fe480  vslw 4, 4, 4
  03fe484  xori 3, 3, 128
  03fe488  vcfsx 2, 2, 0
  03fe48c  <unknown>
  03fe490  li 4, -3056
  03fe494  vspltw 3, 3, 0
  03fe498  <unknown>
  03fe49c  li 4, 124
  03fe4a0  vaddfp 2, 2, 3
  03fe4a4  vmaddfp 2, 5, 2, 4
  03fe4a8  vctsxs 2, 2, 0
  03fe4ac  vspltb 2, 2, 3
  03fe4b0  stvebx 2, 4, 30
  03fe4b4  stw 3, 76(30)
  03fe4b8  b 0x3fe584
  03fe4bc  lbz 3, 104(30)
  03fe4c0  cmpwi 3, 0
  03fe4c4  bt 2, 0x3fe584
  03fe4c8  addic 3, 30, 124
  03fe4cc  bl 0x5000b4
  03fe4d0  nop
  03fe4d4  cmpwi 3, 0
  03fe4d8  bt 2, 0x3fe584
  03fe4dc  lwz 3, 76(30)
  03fe4e0  xori 3, 3, 32
  03fe4e4  stw 3, 76(30)
  03fe4e8  b 0x3fe584
  03fe4ec  lhz 3, 108(30)
  03fe4f0  cmpwi 3, 0
  03fe4f4  bf 2, 0x3fe584
  03fe4f8  lbz 3, 39(30)
  03fe4fc  clrldi 3, 3, 32
  03fe500  std 3, 128(1)
  03fe504  lfd 1, 128(1)
  03fe508  fcfid 1, 1
  03fe50c  frsp 1, 1
  03fe510  bl 0x502758
  03fe514  nop
  03fe518  extsw 3, 3
  03fe51c  lis 4, 64
  03fe520  std 3, 128(1)
  03fe524  addi 3, 4, -9108
  03fe528  lbz 4, 38(30)
  03fe52c  clrldi 4, 4, 32
  03fe530  lfs 31, 0(3)
  03fe534  lfd 1, 128(1)
  03fe538  std 4, 128(1)
  03fe53c  fcfid 1, 1
  03fe540  frsp 1, 1
  03fe544  lfd 2, 128(1)
  03fe548  fmuls 30, 1, 31
  03fe54c  fcfid 1, 2
  03fe550  frsp 1, 1
  03fe554  bl 0x502758
  03fe558  nop
  03fe55c  extsw 3, 3
  03fe560  fmr 1, 30
  03fe564  std 3, 128(1)
  03fe568  lfd 2, 128(1)
  03fe56c  fcfid 2, 2
  03fe570  frsp 2, 2
  03fe574  fmuls 2, 2, 31
  03fe578  bl 0xfcbe8
  03fe57c  nop
  03fe580  stfs 1, 84(30)
  03fe584  lhz 3, 110(30)
  03fe588  cmpwi 3, 0
  03fe58c  bt 2, 0x3fe630
  03fe590  addic 3, 30, 118
  03fe594  bl 0x4fffb4
  03fe598  nop
  03fe59c  cmpwi 3, 0
  03fe5a0  bt 2, 0x3fe630
  03fe5a4  li 3, 110
  03fe5a8  li 5, 16
  03fe5ac  addi 4, 3, 16
  03fe5b0  vspltisw 4, -1
  03fe5b4  <unknown>
  03fe5b8  lis 3, 64
  03fe5bc  <unknown>
  03fe5c0  addi 3, 3, -9108
  03fe5c4  vslw 4, 4, 4
  03fe5c8  vor 2, 2, 3
  03fe5cc  li 4, -3056
  03fe5d0  vspltisw 3, -16
  03fe5d4  vsrw 2, 2, 3
  03fe5d8  <unknown>
  03fe5dc  lis 3, 114
  03fe5e0  vspltw 3, 3, 0
  03fe5e4  vcfsx 2, 2, 0
  03fe5e8  li 5, 88
  03fe5ec  <unknown>
  03fe5f0  li 3, 118
  03fe5f4  li 4, 44
  03fe5f8  vaddfp 2, 2, 3
  03fe5fc  vspltisw 3, -8
  03fe600  vmaddfp 2, 5, 2, 4
  03fe604  vctsxs 2, 2, 0
  03fe608  vsplth 2, 2, 1
  03fe60c  stvehx 2, 3, 30
  03fe610  <unknown>
  03fe614  vsrw 2, 2, 3
  03fe618  vcfux 2, 2, 0
  03fe61c  vspltw 2, 2, 0
  03fe620  stvewx 2, 5, 30
  03fe624  lwz 3, 76(30)
  03fe628  rlwimi 3, 28, 0, 20, 20
  03fe62c  stw 3, 76(30)
  03fe630  lwz 3, 76(30)
  03fe634  rlwinm 4, 3, 0, 14, 14
  03fe638  cmpwi 4, 0
  03fe63c  bf 2, 0x3fe7f4
  03fe640  rlwinm 4, 3, 0, 22, 22
  03fe644  cmpwi 4, 0
  03fe648  bt 2, 0x3fe660
  03fe64c  rlwinm 4, 3, 0, 23, 23
  03fe650  cmpwi 4, 0
  03fe654  bf 2, 0x3fe660
  03fe658  xori 3, 3, 512
  03fe65c  stw 3, 76(30)
  03fe660  rlwinm 4, 3, 0, 22, 22
  03fe664  cmpwi 4, 0
  03fe668  bf 2, 0x3fe7c4
  03fe66c  rlwinm 3, 3, 0, 20, 20
  03fe670  cmpwi 3, 0
  03fe674  bt 2, 0x3fe6f4
  03fe678  lbz 3, 44(30)
  03fe67c  bl 0x502730
  03fe680  nop
  03fe684  lis 3, 64
  03fe688  addi 3, 3, -9108
  03fe68c  lfs 2, 0(3)
  03fe690  lbz 4, 46(30)
  03fe694  fmr 29, 2
  03fe698  lfs 30, 88(30)
  03fe69c  ori 3, 4, 0
  03fe6a0  fmuls 31, 1, 29
  03fe6a4  bl 0x502730
  03fe6a8  nop
  03fe6ac  fmuls 1, 1, 29
  03fe6b0  lis 3, 114
  03fe6b4  lfs 2, -3064(3)
  03fe6b8  fnmsubs 1, 1, 2, 30
  03fe6bc  fcmpu 0, 1, 31
  03fe6c0  stfs 1, 88(30)
  03fe6c4  bt 1, 0x3fe88c
  03fe6c8  lwz 3, 76(30)
  03fe6cc  stfs 31, 88(30)
  03fe6d0  rlwinm 4, 3, 0, 21, 21
  03fe6d4  cmpwi 4, 0
  03fe6d8  bt 2, 0x3fe88c
  03fe6dc  lhz 4, 110(30)
  03fe6e0  cmpwi 4, 0
  03fe6e4  bf 2, 0x3fe88c
  03fe6e8  xori 3, 3, 2048
  03fe6ec  stw 3, 76(30)
  03fe6f0  b 0x3fe88c
  03fe6f4  lbz 3, 43(30)
  03fe6f8  bl 0x502730
  03fe6fc  nop
  03fe700  lis 3, 64
  03fe704  addi 4, 3, -9108
  03fe708  lbz 3, 45(30)
  03fe70c  lfs 30, 88(30)
  03fe710  lfs 2, 0(4)
  03fe714  fmr 29, 2
  03fe718  fmuls 31, 1, 29
  03fe71c  bl 0x502730
  03fe720  nop
  03fe724  fmuls 1, 1, 29
  03fe728  lis 3, 114
  03fe72c  lfs 2, -3064(3)
  03fe730  fmadds 1, 1, 2, 30
  03fe734  fcmpu 0, 1, 31
  03fe738  stfs 1, 88(30)
  03fe73c  bt 0, 0x3fe88c
  03fe740  lwz 3, 76(30)
  03fe744  stfs 31, 88(30)
  03fe748  rlwinm 4, 3, 0, 23, 23
  03fe74c  cmpwi 4, 0
  03fe750  bf 2, 0x3fe760
  03fe754  xori 3, 3, 2048
  03fe758  stw 3, 76(30)
  03fe75c  b 0x3fe88c
  03fe760  li 4, 105
  03fe764  vspltisw 2, -8
  03fe768  lis 6, 64
  03fe76c  vspltisw 4, -1
  03fe770  li 5, 16
  03fe774  ori 3, 3, 512
  03fe778  <unknown>
  03fe77c  addi 4, 6, -9108
  03fe780  vsrw 2, 3, 2
  03fe784  lis 6, 114
  03fe788  vslw 4, 4, 4
  03fe78c  xori 3, 3, 2048
  03fe790  vcfsx 2, 2, 0
  03fe794  <unknown>
  03fe798  li 4, -3056
  03fe79c  vspltw 3, 3, 0
  03fe7a0  <unknown>
  03fe7a4  li 4, 125
  03fe7a8  vaddfp 2, 2, 3
  03fe7ac  vmaddfp 2, 5, 2, 4
  03fe7b0  vctsxs 2, 2, 0
  03fe7b4  vspltb 2, 2, 3
  03fe7b8  stvebx 2, 4, 30
  03fe7bc  stw 3, 76(30)
  03fe7c0  b 0x3fe88c
  03fe7c4  lbz 3, 105(30)
  03fe7c8  cmpwi 3, 0
  03fe7cc  bt 2, 0x3fe88c
  03fe7d0  addic 3, 30, 125
  03fe7d4  bl 0x5000b4
  03fe7d8  nop
  03fe7dc  cmpwi 3, 0
  03fe7e0  bt 2, 0x3fe88c
  03fe7e4  lwz 3, 76(30)
  03fe7e8  xori 3, 3, 512
  03fe7ec  stw 3, 76(30)
  03fe7f0  b 0x3fe88c
  03fe7f4  lhz 3, 110(30)
  03fe7f8  cmpwi 3, 0
  03fe7fc  bf 2, 0x3fe88c
  03fe800  lbz 3, 44(30)
  03fe804  clrldi 3, 3, 32
  03fe808  std 3, 128(1)
  03fe80c  lfd 1, 128(1)
  03fe810  fcfid 1, 1
  03fe814  frsp 1, 1
  03fe818  bl 0x502758
  03fe81c  nop
  03fe820  extsw 3, 3
  03fe824  lis 4, 64
  03fe828  std 3, 128(1)
  03fe82c  addi 3, 4, -9108
  03fe830  lbz 4, 43(30)
  03fe834  clrldi 4, 4, 32
  03fe838  lfs 31, 0(3)
  03fe83c  lfd 1, 128(1)
  03fe840  std 4, 128(1)
  03fe844  fcfid 1, 1
  03fe848  frsp 1, 1
  03fe84c  lfd 2, 128(1)
  03fe850  fmuls 30, 1, 31
  03fe854  fcfid 1, 2
  03fe858  frsp 1, 1
  03fe85c  bl 0x502758
  03fe860  nop
  03fe864  extsw 3, 3
  03fe868  fmr 1, 30
  03fe86c  std 3, 128(1)
  03fe870  lfd 2, 128(1)
  03fe874  fcfid 2, 2
  03fe878  frsp 2, 2
  03fe87c  fmuls 2, 2, 31
  03fe880  bl 0xfcbe8
  03fe884  nop
  03fe888  stfs 1, 88(30)
  03fe88c  lhz 3, 112(30)
  03fe890  cmpwi 3, 0
  03fe894  bt 2, 0x3fe938
  03fe898  addic 3, 30, 120
  03fe89c  bl 0x4fffb4
  03fe8a0  nop
  03fe8a4  cmpwi 3, 0
  03fe8a8  bt 2, 0x3fe938
  03fe8ac  li 3, 112
  03fe8b0  li 5, 16
  03fe8b4  addi 4, 3, 16
  03fe8b8  vspltisw 4, -1
  03fe8bc  <unknown>
  03fe8c0  lis 3, 64
  03fe8c4  <unknown>
  03fe8c8  addi 3, 3, -9108
  03fe8cc  vslw 4, 4, 4
  03fe8d0  vor 2, 2, 3
  03fe8d4  li 4, -3056
  03fe8d8  vspltisw 3, -16
  03fe8dc  vsrw 2, 2, 3
  03fe8e0  <unknown>
  03fe8e4  lis 3, 114
  03fe8e8  vspltw 3, 3, 0
  03fe8ec  vcfsx 2, 2, 0
  03fe8f0  li 5, 92
  03fe8f4  <unknown>
  03fe8f8  li 3, 120
  03fe8fc  li 4, 49
  03fe900  vaddfp 2, 2, 3
  03fe904  vspltisw 3, -8
  03fe908  vmaddfp 2, 5, 2, 4
  03fe90c  vctsxs 2, 2, 0
  03fe910  vsplth 2, 2, 1
  03fe914  stvehx 2, 3, 30
  03fe918  <unknown>
  03fe91c  vsrw 2, 2, 3
  03fe920  vcfux 2, 2, 0
  03fe924  vspltw 2, 2, 0
  03fe928  stvewx 2, 5, 30
  03fe92c  lwz 3, 76(30)
  03fe930  rlwimi 3, 28, 0, 16, 16
  03fe934  stw 3, 76(30)
  03fe938  lwz 3, 76(30)
  03fe93c  rlwinm 4, 3, 0, 13, 13
  03fe940  cmpwi 4, 0
  03fe944  bf 2, 0x3feb14
  03fe948  rlwinm 4, 3, 0, 18, 18
  03fe94c  cmpwi 4, 0
  03fe950  bt 2, 0x3fe968
  03fe954  rlwinm 4, 3, 0, 19, 19
  03fe958  cmpwi 4, 0
  03fe95c  bf 2, 0x3fe968
  03fe960  xori 3, 3, 8192
  03fe964  stw 3, 76(30)
  03fe968  rlwinm 4, 3, 0, 18, 18
  03fe96c  cmpwi 4, 0
  03fe970  bf 2, 0x3feae4
  03fe974  rlwinm 3, 3, 0, 16, 16
  03fe978  cmpwi 3, 0
  03fe97c  bt 2, 0x3fea04
  03fe980  lbz 3, 49(30)
  03fe984  bl 0x502730
  03fe988  nop
  03fe98c  lis 3, 64
  03fe990  addi 3, 3, -9108
  03fe994  lfs 2, 0(3)
  03fe998  lbz 4, 51(30)
  03fe99c  fmr 29, 2
  03fe9a0  lfs 30, 92(30)
  03fe9a4  ori 3, 4, 0
  03fe9a8  fmuls 31, 1, 29
  03fe9ac  bl 0x502730
  03fe9b0  nop
  03fe9b4  fmuls 1, 1, 29
  03fe9b8  lis 3, 114
  03fe9bc  lfs 2, -3064(3)
  03fe9c0  fnmsubs 1, 1, 2, 30
  03fe9c4  fcmpu 0, 1, 31
  03fe9c8  stfs 1, 92(30)
  03fe9cc  bt 1, 0x3febac
  03fe9d0  lwz 3, 76(30)
  03fe9d4  stfs 31, 92(30)
  03fe9d8  rlwinm 4, 3, 0, 17, 17
  03fe9dc  cmpwi 4, 0
  03fe9e0  bt 2, 0x3febac
  03fe9e4  lhz 4, 112(30)
  03fe9e8  cmpwi 4, 0
  03fe9ec  bf 2, 0x3febac
  03fe9f0  lis 4, 0
  03fe9f4  ori 4, 4, 32768
  03fe9f8  xor 3, 3, 4
  03fe9fc  stw 3, 76(30)
  03fea00  b 0x3febac
  03fea04  lbz 3, 48(30)
  03fea08  bl 0x502730
  03fea0c  nop
  03fea10  lis 3, 64
  03fea14  addi 4, 3, -9108
  03fea18  lbz 3, 50(30)
  03fea1c  lfs 30, 92(30)
  03fea20  lfs 2, 0(4)
  03fea24  fmr 29, 2
  03fea28  fmuls 31, 1, 29
  03fea2c  bl 0x502730
  03fea30  nop
  03fea34  fmuls 1, 1, 29
  03fea38  lis 3, 114
  03fea3c  lfs 2, -3064(3)
  03fea40  fmadds 1, 1, 2, 30
  03fea44  fcmpu 0, 1, 31
  03fea48  stfs 1, 92(30)
  03fea4c  bt 0, 0x3febac
  03fea50  lwz 3, 76(30)
  03fea54  stfs 31, 92(30)
  03fea58  rlwinm 4, 3, 0, 19, 19
  03fea5c  cmpwi 4, 0
  03fea60  bf 2, 0x3fea78
  03fea64  lis 4, 0
  03fea68  ori 4, 4, 32768
  03fea6c  xor 3, 3, 4
  03fea70  stw 3, 76(30)
  03fea74  b 0x3febac
  03fea78  li 4, 106
  03fea7c  vspltisw 2, -8
  03fea80  lis 6, 64
  03fea84  vspltisw 4, -1
  03fea88  li 5, 16
  03fea8c  ori 3, 3, 8192
  03fea90  <unknown>
  03fea94  addi 4, 6, -9108
  03fea98  vsrw 2, 3, 2
  03fea9c  lis 6, 114
  03feaa0  vslw 4, 4, 4
  03feaa4  vcfsx 2, 2, 0
  03feaa8  <unknown>
  03feaac  li 4, -3056
  03feab0  vspltw 3, 3, 0
  03feab4  lis 5, 0
  03feab8  ori 5, 5, 32768
  03feabc  <unknown>
  03feac0  li 4, 126
  03feac4  xor 3, 3, 5
  03feac8  vaddfp 2, 2, 3
  03feacc  vmaddfp 2, 5, 2, 4
  03fead0  vctsxs 2, 2, 0
  03fead4  vspltb 2, 2, 3
  03fead8  stvebx 2, 4, 30
  03feadc  stw 3, 76(30)
  03feae0  b 0x3febac
  03feae4  lbz 3, 106(30)
  03feae8  cmpwi 3, 0
  03feaec  bt 2, 0x3febac
  03feaf0  addic 3, 30, 126
  03feaf4  bl 0x5000b4
  03feaf8  nop
  03feafc  cmpwi 3, 0
  03feb00  bt 2, 0x3febac
  03feb04  lwz 3, 76(30)
  03feb08  xori 3, 3, 8192
  03feb0c  stw 3, 76(30)
  03feb10  b 0x3febac
  03feb14  lhz 3, 112(30)
  03feb18  cmpwi 3, 0
  03feb1c  bf 2, 0x3febac
  03feb20  lbz 3, 49(30)
  03feb24  clrldi 3, 3, 32
  03feb28  std 3, 128(1)
  03feb2c  lfd 1, 128(1)
  03feb30  fcfid 1, 1
  03feb34  frsp 1, 1
  03feb38  bl 0x502758
  03feb3c  nop
  03feb40  extsw 3, 3
  03feb44  lis 4, 64
  03feb48  std 3, 128(1)
  03feb4c  addi 3, 4, -9108
  03feb50  lbz 4, 48(30)
  03feb54  clrldi 4, 4, 32
  03feb58  lfs 31, 0(3)
  03feb5c  lfd 1, 128(1)
  03feb60  std 4, 128(1)
  03feb64  fcfid 1, 1
  03feb68  frsp 1, 1
  03feb6c  lfd 2, 128(1)
  03feb70  fmuls 30, 1, 31
  03feb74  fcfid 1, 2
  03feb78  frsp 1, 1
  03feb7c  bl 0x502758
  03feb80  nop
  03feb84  extsw 3, 3
  03feb88  fmr 1, 30
  03feb8c  std 3, 128(1)
  03feb90  lfd 2, 128(1)
  03feb94  fcfid 2, 2
  03feb98  frsp 2, 2
  03feb9c  fmuls 2, 2, 31
  03feba0  bl 0xfcbe8
  03feba4  nop
  03feba8  stfs 1, 92(30)
  03febac  lwz 3, 80(30)
  03febb0  cmpwi 3, -1
  03febb4  bf 2, 0x3fec00
  03febb8  lbz 3, 36(30)
  03febbc  addic 31, 31, 16
  03febc0  lfs 31, 96(30)
  03febc4  bl 0x502730
  03febc8  nop
  03febcc  lis 3, 64
  03febd0  lfs 3, 84(30)
  03febd4  addi 4, 3, -9108
  03febd8  ori 3, 31, 0
  03febdc  lfs 4, 88(30)
  03febe0  lfs 2, 0(4)
  03febe4  lfs 5, 92(30)
  03febe8  fmuls 2, 1, 2
  03febec  fmr 1, 31
  03febf0  bl 0xda4ac
  03febf4  nop
  03febf8  stw 3, 80(30)
  03febfc  b 0x3fec98
  03fec00  lis 4, 162
  03fec04  lfs 1, 16(31)
  03fec08  slwi 3, 3, 5
  03fec0c  addic 4, 4, -8448
  03fec10  addc 3, 4, 3
  03fec14  clrldi 29, 3, 32
  03fec18  stfs 1, 16(29)
  03fec1c  lfs 1, 20(31)
  03fec20  stfs 1, 20(29)
  03fec24  lfs 1, 24(31)
  03fec28  stfs 1, 24(29)
  03fec2c  lfs 1, 28(31)
  03fec30  stfs 1, 28(29)
  03fec34  lfs 1, 96(30)
  03fec38  stfs 1, 28(29)
  03fec3c  lfs 1, 84(30)
  03fec40  stfs 1, 0(29)
  03fec44  lfs 1, 88(30)
  03fec48  stfs 1, 4(29)
  03fec4c  lfs 1, 92(30)
  03fec50  stfs 1, 8(29)
  03fec54  lbz 3, 36(30)
  03fec58  bl 0x502730
  03fec5c  nop
  03fec60  lis 3, 64
  03fec64  addi 3, 3, -9108
  03fec68  lfs 2, 0(3)
  03fec6c  fmuls 1, 1, 2
  03fec70  stfs 1, 12(29)
  03fec74  b 0x3fec98
  03fec78  lwz 3, 80(30)
  03fec7c  cmpwi 3, -1
  03fec80  bt 2, 0x3fec98
  03fec84  extsw 3, 3
  03fec88  bl 0xda9e8
  03fec8c  nop
  03fec90  li 3, -1
  03fec94  stw 3, 80(30)
  03fec98  ld 0, 256(1)
  03fec9c  mtlr 0
  03feca0  lfd 26, 192(1)
  03feca4  lfd 27, 200(1)
  03feca8  lfd 28, 208(1)
  03fecac  lfd 29, 216(1)
  03fecb0  lfd 30, 224(1)
  03fecb4  lfd 31, 232(1)
  03fecb8  ld 27, 152(1)
  03fecbc  ld 28, 160(1)
  03fecc0  ld 29, 168(1)
  03fecc4  ld 30, 176(1)
  03fecc8  ld 31, 184(1)
  03feccc  addi 1, 1, 240
  03fecd0  blr
