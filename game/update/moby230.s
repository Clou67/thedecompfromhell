# game/update/moby230.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M230_002fda40:   # 0x2fda40, 0x40 bytes
  02fda40  lhz 4, 166(3)
  02fda44  cmpwi 4, 23
  02fda48  bf 2, 0x2fda7c
  02fda4c  lis 4, 48
  02fda50  lwz 6, 36(3)
  02fda54  li 5, 2
  02fda58  addi 4, 4, -9672
  02fda5c  lfs 1, 0(4)
  02fda60  lfs 2, 36(6)
  02fda64  lhz 4, 52(3)
  02fda68  fmuls 1, 2, 1
  02fda6c  stb 5, 32(3)
  02fda70  rlwinm 4, 4, 0, 0, 30
  02fda74  sth 4, 52(3)
  02fda78  stfs 1, 44(3)
  02fda7c  blr

M230_002fda80:   # 0x2fda80, 0x14 bytes
  02fda80  lis 3, 128
  02fda84  lis 4, 1
  02fda88  addic 3, 3, -3632
  02fda8c  stw 4, 72(3)
  02fda90  blr

M230_002fdab8:   # 0x2fdab8, 0x61c bytes
  02fdab8  stdu 1, -576(1)
  02fdabc  mflr 0
  02fdac0  std 0, 592(1)
  02fdac4  stfd 30, 560(1)
  02fdac8  stfd 31, 568(1)
  02fdacc  lis 4, 161
  02fdad0  std 31, 552(1)
  02fdad4  lwz 4, 1800(4)
  02fdad8  lwz 31, 120(3)
  02fdadc  std 30, 544(1)
  02fdae0  std 29, 536(1)
  02fdae4  std 28, 528(1)
  02fdae8  std 27, 520(1)
  02fdaec  std 26, 512(1)
  02fdaf0  cmpwi 4, 2
  02fdaf4  bt 2, 0x2fe0a4
  02fdaf8  li 30, 0
  02fdafc  ori 28, 30, 0
  02fdb00  lfs 1, 40(31)
  02fdb04  lfs 2, 32(31)
  02fdb08  fmuls 1, 1, 1
  02fdb0c  lis 3, 48
  02fdb10  lwz 4, 36(31)
  02fdb14  addi 3, 3, -9576
  02fdb18  lis 29, 115
  02fdb1c  rlwinm 4, 4, 3, 29, 29
  02fdb20  addic 29, 29, 22784
  02fdb24  fmadds 1, 2, 2, 1
  02fdb28  lfs 2, 36(31)
  02fdb2c  fabs 3, 2
  02fdb30  fsqrts 1, 1
  02fdb34  fabs 2, 1
  02fdb38  stfs 1, 420(1)
  02fdb3c  fsubs 1, 2, 3
  02fdb40  stfs 1, 424(1)
  02fdb44  lwz 5, 420(1)
  02fdb48  lfs 30, 0(3)
  02fdb4c  lfs 1, 420(1)
  02fdb50  lfs 31, 4(3)
  02fdb54  fabs 4, 1
  02fdb58  lwz 3, 424(1)
  02fdb5c  lfs 1, 424(1)
  02fdb60  rlwimi 4, 3, 2, 30, 30
  02fdb64  fsub 5, 1, 30
  02fdb68  fsub 6, 1, 30
  02fdb6c  rlwimi 4, 5, 4, 28, 28
  02fdb70  ori 3, 29, 0
  02fdb74  rlwimi 3, 4, 2, 26, 28
  02fdb78  slwi 4, 4, 2
  02fdb7c  clrldi 3, 3, 32
  02fdb80  fsel 4, 5, 4, 3
  02fdb84  lfsx 1, 29, 4
  02fdb88  fsel 3, 6, 3, 2
  02fdb8c  lfs 2, 4(3)
  02fdb90  fcmpu 0, 4, 30
  02fdb94  bt 1, 0x2fdba0
  02fdb98  fmr 1, 30
  02fdb9c  b 0x2fdcb8
  02fdba0  fsubs 5, 3, 4
  02fdba4  fadds 3, 3, 4
  02fdba8  addic 3, 1, 16
  02fdbac  li 7, 2
  02fdbb0  addic 4, 3, 444
  02fdbb4  addic 5, 3, 460
  02fdbb8  mtctr 7
  02fdbbc  fdivs 3, 5, 3
  02fdbc0  fmuls 4, 3, 3
  02fdbc4  stfs 3, 472(1)
  02fdbc8  stfs 3, 464(1)
  02fdbcc  stfs 3, 468(1)
  02fdbd0  stfs 3, 460(1)
  02fdbd4  lfs 6, 472(1)
  02fdbd8  lfs 7, 464(1)
  02fdbdc  lfs 8, 468(1)
  02fdbe0  fmuls 5, 4, 4
  02fdbe4  fmuls 7, 7, 4
  02fdbe8  fmuls 6, 6, 5
  02fdbec  fmuls 3, 5, 5
  02fdbf0  fmuls 5, 8, 5
  02fdbf4  stfs 7, 464(1)
  02fdbf8  fmuls 4, 6, 4
  02fdbfc  stfs 5, 468(1)
  02fdc00  stfs 4, 472(1)
  02fdc04  lfs 4, 444(3)
  02fdc08  fmuls 4, 4, 3
  02fdc0c  stfs 4, 460(3)
  02fdc10  lfs 4, 4(4)
  02fdc14  addic 3, 3, 8
  02fdc18  addic 4, 4, 8
  02fdc1c  fmuls 4, 4, 3
  02fdc20  stfs 4, 4(5)
  02fdc24  addic 5, 5, 8
  02fdc28  bdnz 0x2fdc04
  02fdc2c  li 5, 4
  02fdc30  ori 3, 1, 0
  02fdc34  mtctr 5
  02fdc38  lis 4, 115
  02fdc3c  addic 5, 3, 460
  02fdc40  addic 4, 4, 22752
  02fdc44  ori 6, 5, 0
  02fdc48  lfs 3, 460(3)
  02fdc4c  lfs 4, 0(4)
  02fdc50  fmuls 3, 3, 4
  02fdc54  lfs 4, 4(4)
  02fdc58  addic 4, 4, 8
  02fdc5c  stfs 3, 460(3)
  02fdc60  lfs 3, 4(5)
  02fdc64  addic 3, 3, 8
  02fdc68  fmuls 3, 3, 4
  02fdc6c  stfs 3, 4(5)
  02fdc70  addic 5, 5, 8
  02fdc74  bdnz 0x2fdc48
  02fdc78  fmr 3, 30
  02fdc7c  ori 3, 1, 0
  02fdc80  mtctr 7
  02fdc84  lfs 4, 460(3)
  02fdc88  fadds 3, 3, 4
  02fdc8c  addic 3, 3, 16
  02fdc90  lfs 4, 4(6)
  02fdc94  lfs 5, 8(6)
  02fdc98  lfs 6, 12(6)
  02fdc9c  addic 6, 6, 16
  02fdca0  fadds 3, 3, 4
  02fdca4  fadds 3, 3, 5
  02fdca8  fadds 3, 3, 6
  02fdcac  bdnz 0x2fdc84
  02fdcb0  fadds 3, 3, 31
  02fdcb4  fmadds 1, 3, 1, 2
  02fdcb8  lis 3, 48
  02fdcbc  fneg 1, 1
  02fdcc0  addi 3, 3, -9576
  02fdcc4  lfs 2, 8(3)
  02fdcc8  bl 0x502578
  02fdccc  nop
  02fdcd0  stfs 1, 112(1)
  02fdcd4  lwz 3, 40(31)
  02fdcd8  lwz 4, 32(31)
  02fdcdc  lfs 1, 40(31)
  02fdce0  lfs 2, 32(31)
  02fdce4  fabs 3, 1
  02fdce8  fabs 5, 2
  02fdcec  rlwinm 4, 4, 3, 29, 29
  02fdcf0  fsubs 1, 3, 5
  02fdcf4  stfs 1, 416(1)
  02fdcf8  lwz 5, 416(1)
  02fdcfc  lfs 1, 416(1)
  02fdd00  rlwimi 4, 5, 2, 30, 30
  02fdd04  fsub 4, 1, 30
  02fdd08  fsub 6, 1, 30
  02fdd0c  rlwimi 4, 3, 4, 28, 28
  02fdd10  ori 3, 29, 0
  02fdd14  rlwimi 3, 4, 2, 26, 28
  02fdd18  slwi 4, 4, 2
  02fdd1c  clrldi 3, 3, 32
  02fdd20  fsel 4, 4, 3, 5
  02fdd24  lfsx 1, 29, 4
  02fdd28  lfs 2, 4(3)
  02fdd2c  fsel 3, 6, 5, 3
  02fdd30  fcmpu 0, 4, 30
  02fdd34  bt 1, 0x2fdd3c
  02fdd38  b 0x2fde50
  02fdd3c  fsubs 5, 3, 4
  02fdd40  fadds 3, 3, 4
  02fdd44  addic 3, 1, 16
  02fdd48  li 7, 2
  02fdd4c  addic 5, 3, 428
  02fdd50  addic 4, 3, 412
  02fdd54  mtctr 7
  02fdd58  fdivs 3, 5, 3
  02fdd5c  fmuls 4, 3, 3
  02fdd60  stfs 3, 440(1)
  02fdd64  stfs 3, 432(1)
  02fdd68  stfs 3, 436(1)
  02fdd6c  stfs 3, 428(1)
  02fdd70  lfs 6, 440(1)
  02fdd74  lfs 7, 432(1)
  02fdd78  lfs 8, 436(1)
  02fdd7c  fmuls 5, 4, 4
  02fdd80  fmuls 7, 7, 4
  02fdd84  fmuls 6, 6, 5
  02fdd88  fmuls 3, 5, 5
  02fdd8c  fmuls 5, 8, 5
  02fdd90  stfs 7, 432(1)
  02fdd94  fmuls 4, 6, 4
  02fdd98  stfs 5, 436(1)
  02fdd9c  stfs 4, 440(1)
  02fdda0  lfs 4, 412(3)
  02fdda4  fmuls 4, 4, 3
  02fdda8  stfs 4, 428(3)
  02fddac  lfs 4, 4(4)
  02fddb0  addic 4, 4, 8
  02fddb4  fmuls 4, 4, 3
  02fddb8  addic 3, 3, 8
  02fddbc  stfs 4, 4(5)
  02fddc0  addic 5, 5, 8
  02fddc4  bdnz 0x2fdda0
  02fddc8  li 5, 4
  02fddcc  ori 3, 1, 0
  02fddd0  mtctr 5
  02fddd4  lis 4, 115
  02fddd8  addic 5, 3, 428
  02fdddc  addic 4, 4, 22752
  02fdde0  ori 6, 5, 0
  02fdde4  lfs 3, 428(3)
  02fdde8  lfs 4, 0(4)
  02fddec  fmuls 3, 3, 4
  02fddf0  lfs 4, 4(4)
  02fddf4  addic 4, 4, 8
  02fddf8  stfs 3, 428(3)
  02fddfc  lfs 3, 4(5)
  02fde00  addic 3, 3, 8
  02fde04  fmuls 3, 3, 4
  02fde08  stfs 3, 4(5)
  02fde0c  addic 5, 5, 8
  02fde10  bdnz 0x2fdde4
  02fde14  ori 3, 1, 0
  02fde18  mtctr 7
  02fde1c  lfs 3, 428(3)
  02fde20  lfs 4, 4(6)
  02fde24  fadds 3, 30, 3
  02fde28  lfs 5, 8(6)
  02fde2c  addic 3, 3, 16
  02fde30  lfs 30, 12(6)
  02fde34  addic 6, 6, 16
  02fde38  fadds 3, 3, 4
  02fde3c  fadds 3, 3, 5
  02fde40  fadds 30, 3, 30
  02fde44  bdnz 0x2fde1c
  02fde48  fadds 30, 30, 31
  02fde4c  fmadds 30, 30, 1, 2
  02fde50  lis 3, 48
  02fde54  stfs 30, 116(1)
  02fde58  lis 29, 114
  02fde5c  stw 28, 120(1)
  02fde60  addi 27, 3, -9576
  02fde64  stw 28, 124(1)
  02fde68  stw 28, 128(1)
  02fde6c  lis 3, 161
  02fde70  lfs 1, 12(27)
  02fde74  lfs 2, -3056(29)
  02fde78  lwz 3, 1808(3)
  02fde7c  fmuls 1, 2, 1
  02fde80  fctiwz 1, 1
  02fde84  stfd 1, 496(1)
  02fde88  lwz 4, 500(1)
  02fde8c  divw 5, 3, 4
  02fde90  mullw 4, 5, 4
  02fde94  subc 3, 3, 4
  02fde98  extsw 3, 3
  02fde9c  bl 0x502730
  02fdea0  nop
  02fdea4  lfs 2, 16(27)
  02fdea8  lfs 3, 20(27)
  02fdeac  lfs 4, -3056(29)
  02fdeb0  fmuls 1, 1, 2
  02fdeb4  fmuls 2, 4, 3
  02fdeb8  fdivs 1, 1, 2
  02fdebc  bl 0x502648
  02fdec0  nop
  02fdec4  clrlwi 29, 30, 31
  02fdec8  cmpwi 29, 0
  02fdecc  fmr 30, 1
  02fded0  lfs 1, 24(27)
  02fded4  fmr 31, 1
  02fded8  bt 2, 0x2fdee8
  02fdedc  lis 3, 48
  02fdee0  addi 3, 3, -9576
  02fdee4  lfs 1, 28(3)
  02fdee8  fmuls 1, 30, 1
  02fdeec  addic 27, 1, 208
  02fdef0  stw 28, 136(1)
  02fdef4  addic 4, 1, 128
  02fdef8  stw 28, 140(1)
  02fdefc  ori 3, 27, 0
  02fdf00  stfs 1, 132(1)
  02fdf04  bl 0x500ca4
  02fdf08  nop
  02fdf0c  addic 26, 1, 144
  02fdf10  addic 4, 1, 112
  02fdf14  ori 3, 26, 0
  02fdf18  bl 0x500ca4
  02fdf1c  nop
  02fdf20  ori 3, 26, 0
  02fdf24  ori 4, 26, 0
  02fdf28  ori 5, 27, 0
  02fdf2c  bl 0x50162c
  02fdf30  nop
  02fdf34  li 3, 0
  02fdf38  lfs 1, 16(31)
  02fdf3c  lis 4, -32640
  02fdf40  subc 3, 3, 29
  02fdf44  stfs 1, 192(1)
  02fdf48  cntlzw 3, 3
  02fdf4c  lfs 1, 20(31)
  02fdf50  li 5, 17
  02fdf54  li 6, 18
  02fdf58  sldi 3, 3, 58
  02fdf5c  stfs 1, 196(1)
  02fdf60  lfs 1, 24(31)
  02fdf64  ori 4, 4, 32896
  02fdf68  subc 5, 5, 6
  02fdf6c  sradi 3, 3, 63
  02fdf70  stfs 1, 200(1)
  02fdf74  and 3, 3, 5
  02fdf78  lfs 1, 28(31)
  02fdf7c  stw 4, 336(1)
  02fdf80  addc 3, 6, 3
  02fdf84  stfs 1, 204(1)
  02fdf88  stw 4, 340(1)
  02fdf8c  stw 4, 344(1)
  02fdf90  stw 4, 348(1)
  02fdf94  bl 0x685c4
  02fdf98  nop
  02fdf9c  std 3, 392(1)
  02fdfa0  li 3, 0
  02fdfa4  lis 9, 0
  02fdfa8  li 4, 0
  02fdfac  li 5, 1
  02fdfb0  li 6, 1
  02fdfb4  li 7, 1
  02fdfb8  li 8, 0
  02fdfbc  ori 9, 9, 65424
  02fdfc0  bl 0x502fd4
  02fdfc4  nop
  02fdfc8  std 3, 400(1)
  02fdfcc  li 4, 0
  02fdfd0  li 3, 0
  02fdfd4  li 5, 0
  02fdfd8  li 6, 0
  02fdfdc  li 7, 0
  02fdfe0  li 8, 0
  02fdfe4  bl 0x502f08
  02fdfe8  nop
  02fdfec  std 3, 384(1)
  02fdff0  li 3, 0
  02fdff4  li 4, 2
  02fdff8  li 5, 0
  02fdffc  li 6, 1
  02fe000  li 7, 128
  02fe004  bl 0x502ea8
  02fe008  nop
  02fe00c  lis 4, -16512
  02fe010  std 3, 408(1)
  02fe014  li 5, 1
  02fe018  stw 28, 276(1)
  02fe01c  lis 3, 161
  02fe020  li 7, 9
  02fe024  stw 4, 272(1)
  02fe028  stfs 31, 280(1)
  02fe02c  addic 6, 3, 24396
  02fe030  stfs 31, 284(1)
  02fe034  addic 3, 1, 272
  02fe038  stfs 31, 288(1)
  02fe03c  stw 28, 292(1)
  02fe040  stfs 31, 296(1)
  02fe044  stfs 31, 300(1)
  02fe048  stw 4, 304(1)
  02fe04c  stw 28, 308(1)
  02fe050  stw 4, 312(1)
  02fe054  stfs 31, 316(1)
  02fe058  stfs 31, 320(1)
  02fe05c  stw 28, 324(1)
  02fe060  stw 4, 328(1)
  02fe064  stfs 31, 332(1)
  02fe068  stw 28, 352(1)
  02fe06c  ori 4, 26, 0
  02fe070  stfs 31, 356(1)
  02fe074  stfs 31, 360(1)
  02fe078  stfs 31, 364(1)
  02fe07c  stw 28, 368(1)
  02fe080  stw 28, 372(1)
  02fe084  stfs 31, 376(1)
  02fe088  stw 28, 380(1)
  02fe08c  lwz 6, 28(6)
  02fe090  bl 0x72280
  02fe094  nop
  02fe098  addic 30, 30, 1
  02fe09c  cmpwi 30, 2
  02fe0a0  bt 0, 0x2fdb00
  02fe0a4  ld 0, 592(1)
  02fe0a8  mtlr 0
  02fe0ac  lfd 30, 560(1)
  02fe0b0  lfd 31, 568(1)
  02fe0b4  ld 26, 512(1)
  02fe0b8  ld 27, 520(1)
  02fe0bc  ld 28, 528(1)
  02fe0c0  ld 29, 536(1)
  02fe0c4  ld 30, 544(1)
  02fe0c8  ld 31, 552(1)
  02fe0cc  addi 1, 1, 576
  02fe0d0  blr

M230_002fe0f0:   # 0x2fe0f0, 0x244 bytes
  02fe0f0  stdu 1, -240(1)
  02fe0f4  mflr 0
  02fe0f8  std 0, 256(1)
  02fe0fc  stfd 25, 184(1)
  02fe100  stfd 26, 192(1)
  02fe104  stfd 27, 200(1)
  02fe108  stfd 28, 208(1)
  02fe10c  stfd 29, 216(1)
  02fe110  stfd 30, 224(1)
  02fe114  stfd 31, 232(1)
  02fe118  std 31, 176(1)
  02fe11c  std 30, 168(1)
  02fe120  std 29, 160(1)
  02fe124  std 28, 152(1)
  02fe128  std 27, 144(1)
  02fe12c  ori 31, 3, 0
  02fe130  bl 0x60780
  02fe134  nop
  02fe138  cmpwi 3, 3
  02fe13c  bt 1, 0x2fe160
  02fe140  cmpwi 3, 1
  02fe144  bt 1, 0x2fe154
  02fe148  cmpwi 3, -1
  02fe14c  bf 1, 0x2fe2f4
  02fe150  b 0x2fe17c
  02fe154  cmpwi 3, 2
  02fe158  bf 1, 0x2fe2f4
  02fe15c  b 0x2fe17c
  02fe160  cmpwi 3, 10
  02fe164  bt 1, 0x2fe174
  02fe168  cmpwi 3, 8
  02fe16c  bt 2, 0x2fe17c
  02fe170  b 0x2fe2f4
  02fe174  cmpwi 3, 13
  02fe178  bt 1, 0x2fe2f4
  02fe17c  lis 3, 48
  02fe180  li 30, 0
  02fe184  addi 3, 3, -7980
  02fe188  lfs 26, 0(3)
  02fe18c  lfs 27, 4(3)
  02fe190  lfs 28, 8(3)
  02fe194  lfs 29, 12(3)
  02fe198  lfs 30, 16(3)
  02fe19c  lfs 31, 20(3)
  02fe1a0  fmr 1, 26
  02fe1a4  lfs 3, 16(31)
  02fe1a8  lfs 4, 20(31)
  02fe1ac  fmr 2, 27
  02fe1b0  stfs 3, 112(1)
  02fe1b4  lfs 3, 24(31)
  02fe1b8  stfs 4, 116(1)
  02fe1bc  lfs 4, 28(31)
  02fe1c0  stfs 3, 120(1)
  02fe1c4  stfs 4, 124(1)
  02fe1c8  bl 0xfcbe8
  02fe1cc  nop
  02fe1d0  lfs 2, 112(1)
  02fe1d4  fadds 3, 2, 1
  02fe1d8  fmr 1, 26
  02fe1dc  fmr 2, 27
  02fe1e0  stfs 3, 112(1)
  02fe1e4  bl 0xfcbe8
  02fe1e8  nop
  02fe1ec  lfs 2, 116(1)
  02fe1f0  fadds 3, 2, 1
  02fe1f4  fmr 1, 26
  02fe1f8  fmr 2, 27
  02fe1fc  stfs 3, 116(1)
  02fe200  bl 0xfcbe8
  02fe204  nop
  02fe208  lfs 2, 120(1)
  02fe20c  fadds 1, 2, 1
  02fe210  stfs 1, 120(1)
  02fe214  bl 0x5c8318
  02fe218  nop
  02fe21c  addic 29, 3, 48
  02fe220  bl 0x5c8318
  02fe224  nop
  02fe228  addic 28, 3, 32
  02fe22c  bl 0x5c8318
  02fe230  nop
  02fe234  fmr 1, 28
  02fe238  li 4, 47
  02fe23c  fmr 2, 29
  02fe240  clrlwi 29, 29, 26
  02fe244  and 27, 3, 4
  02fe248  clrlwi 28, 28, 26
  02fe24c  bl 0xfcbe8
  02fe250  nop
  02fe254  fmr 25, 1
  02fe258  bl 0x5c8318
  02fe25c  nop
  02fe260  lis 4, 26214
  02fe264  ori 4, 4, 26215
  02fe268  mulhw 4, 4, 3
  02fe26c  srawi 4, 4, 4
  02fe270  srwi 5, 4, 31
  02fe274  addc 4, 4, 5
  02fe278  sldi 5, 4, 5
  02fe27c  sldi 4, 4, 3
  02fe280  addc 4, 5, 4
  02fe284  subc 3, 3, 4
  02fe288  addic 3, 3, 10
  02fe28c  extsw 3, 3
  02fe290  fmr 1, 25
  02fe294  ori 4, 29, 0
  02fe298  std 3, 128(1)
  02fe29c  lis 3, 114
  02fe2a0  fmr 2, 31
  02fe2a4  ori 5, 28, 0
  02fe2a8  ori 6, 27, 0
  02fe2ac  lfs 3, -3056(3)
  02fe2b0  lfd 4, 128(1)
  02fe2b4  addic 3, 1, 112
  02fe2b8  fcfid 4, 4
  02fe2bc  frsp 4, 4
  02fe2c0  fadds 4, 4, 30
  02fe2c4  fmuls 3, 3, 4
  02fe2c8  fctiwz 3, 3
  02fe2cc  stfd 3, 128(1)
  02fe2d0  lwz 8, 132(1)
  02fe2d4  extsw 8, 8
  02fe2d8  bl 0x121a40
  02fe2dc  nop
  02fe2e0  addic 30, 30, 1
  02fe2e4  cmpwi 30, 20
  02fe2e8  bt 0, 0x2fe1a0
  02fe2ec  li 3, 4
  02fe2f0  stb 3, 32(31)
  02fe2f4  ld 0, 256(1)
  02fe2f8  mtlr 0
  02fe2fc  lfd 25, 184(1)
  02fe300  lfd 26, 192(1)
  02fe304  lfd 27, 200(1)
  02fe308  lfd 28, 208(1)
  02fe30c  lfd 29, 216(1)
  02fe310  lfd 30, 224(1)
  02fe314  lfd 31, 232(1)
  02fe318  ld 27, 144(1)
  02fe31c  ld 28, 152(1)
  02fe320  ld 29, 160(1)
  02fe324  ld 30, 168(1)
  02fe328  ld 31, 176(1)
  02fe32c  addi 1, 1, 240
  02fe330  blr

FUN_002fe338:   # 0x2fe338, 0x19c bytes
  02fe338  stdu 1, -144(1)
  02fe33c  mflr 0
  02fe340  std 0, 160(1)
  02fe344  std 29, 120(1)
  02fe348  ori 29, 3, 0
  02fe34c  std 31, 136(1)
  02fe350  li 3, 230
  02fe354  std 30, 128(1)
  02fe358  ori 31, 5, 0
  02fe35c  ori 30, 4, 0
  02fe360  bl 0xefa28
  02fe364  nop
  02fe368  cmpwi 3, 0
  02fe36c  bt 2, 0x2fe4b8
  02fe370  li 4, 255
  02fe374  li 5, 1
  02fe378  li 6, 0
  02fe37c  stb 4, 48(3)
  02fe380  stb 5, 49(3)
  02fe384  stb 6, 32(3)
  02fe388  lfs 1, 0(30)
  02fe38c  lwz 5, 120(3)
  02fe390  stfs 1, 16(3)
  02fe394  lfs 1, 4(30)
  02fe398  stfs 1, 20(3)
  02fe39c  lfs 1, 8(30)
  02fe3a0  stfs 1, 24(3)
  02fe3a4  lfs 1, 12(30)
  02fe3a8  sth 4, 50(3)
  02fe3ac  stfs 1, 28(3)
  02fe3b0  lis 4, 48
  02fe3b4  lfs 1, 0(31)
  02fe3b8  addi 4, 4, -7372
  02fe3bc  stfs 1, 0(5)
  02fe3c0  lfs 1, 4(31)
  02fe3c4  stfs 1, 4(5)
  02fe3c8  lfs 1, 8(31)
  02fe3cc  stw 29, 48(5)
  02fe3d0  stfs 1, 8(5)
  02fe3d4  lfs 1, 12(31)
  02fe3d8  lis 29, 151
  02fe3dc  stw 6, 52(5)
  02fe3e0  stfs 1, 12(5)
  02fe3e4  sth 6, 56(5)
  02fe3e8  addic 29, 29, -25376
  02fe3ec  lfs 1, 0(4)
  02fe3f0  lwz 4, 36(3)
  02fe3f4  lfs 2, 36(4)
  02fe3f8  fmuls 1, 2, 1
  02fe3fc  stfs 1, 44(3)
  02fe400  lbz 4, 8357(29)
  02fe404  cmpwi 4, 0
  02fe408  bf 2, 0x2fe418
  02fe40c  lbz 4, 8367(29)
  02fe410  cmpwi 4, 0
  02fe414  bt 2, 0x2fe424
  02fe418  lhz 4, 52(3)
  02fe41c  ori 4, 4, 65
  02fe420  sth 4, 52(3)
  02fe424  lis 4, 268
  02fe428  lis 6, 128
  02fe42c  addic 6, 6, -3524
  02fe430  lwz 4, -19336(4)
  02fe434  slwi 5, 4, 2
  02fe438  extsw 5, 5
  02fe43c  lwzx 5, 6, 5
  02fe440  cmpwi 5, 0
  02fe444  bt 2, 0x2fe478
  02fe448  lhz 7, 166(5)
  02fe44c  cmpwi 7, 230
  02fe450  bf 2, 0x2fe478
  02fe454  lbz 7, 32(5)
  02fe458  cmpwi 1, 7, 253
  02fe45c  cmpwi 7, 254
  02fe460  cror 2, 2, 6
  02fe464  bt 2, 0x2fe478
  02fe468  li 4, 4
  02fe46c  lis 7, 268
  02fe470  stb 4, 32(5)
  02fe474  lwz 4, -19336(7)
  02fe478  lis 5, 26214
  02fe47c  addic 7, 4, 1
  02fe480  ori 5, 5, 26215
  02fe484  mulhw 5, 5, 7
  02fe488  slwi 4, 4, 2
  02fe48c  srawi 5, 5, 3
  02fe490  extsw 4, 4
  02fe494  srwi 8, 5, 31
  02fe498  addc 5, 5, 8
  02fe49c  lis 8, 268
  02fe4a0  stwx 3, 6, 4
  02fe4a4  sldi 9, 5, 4
  02fe4a8  sldi 4, 5, 2
  02fe4ac  addc 4, 9, 4
  02fe4b0  subc 4, 7, 4
  02fe4b4  stw 4, -19336(8)
  02fe4b8  ld 0, 160(1)
  02fe4bc  mtlr 0
  02fe4c0  ld 29, 120(1)
  02fe4c4  ld 30, 128(1)
  02fe4c8  ld 31, 136(1)
  02fe4cc  addi 1, 1, 144
  02fe4d0  blr

FUN_002fe4e8:   # 0x2fe4e8, 0x22c bytes
  02fe4e8  stdu 1, -160(1)
  02fe4ec  mflr 0
  02fe4f0  std 0, 176(1)
  02fe4f4  std 28, 128(1)
  02fe4f8  std 29, 136(1)
  02fe4fc  lis 29, 151
  02fe500  std 30, 144(1)
  02fe504  lwz 28, 120(4)
  02fe508  ori 30, 3, 0
  02fe50c  addic 29, 29, -25376
  02fe510  std 31, 152(1)
  02fe514  lfs 1, 0(5)
  02fe518  ori 31, 4, 0
  02fe51c  lwz 3, 764(29)
  02fe520  stfs 1, 0(28)
  02fe524  lfs 1, 4(5)
  02fe528  cmpwi 3, 0
  02fe52c  stfs 1, 4(28)
  02fe530  lfs 1, 8(5)
  02fe534  stfs 1, 8(28)
  02fe538  lfs 1, 12(5)
  02fe53c  stfs 1, 12(28)
  02fe540  bt 2, 0x2fe584
  02fe544  bl 0x1122ac
  02fe548  nop
  02fe54c  cmpwi 3, 0
  02fe550  bt 2, 0x2fe584
  02fe554  lfs 1, 0(28)
  02fe558  lfs 2, 256(29)
  02fe55c  fadds 1, 1, 2
  02fe560  lfs 2, 4(28)
  02fe564  lfs 3, 8(28)
  02fe568  stfs 1, 0(28)
  02fe56c  lfs 1, 260(29)
  02fe570  fadds 1, 2, 1
  02fe574  stfs 1, 4(28)
  02fe578  lfs 1, 264(29)
  02fe57c  fadds 1, 3, 1
  02fe580  stfs 1, 8(28)
  02fe584  lfs 1, 0(30)
  02fe588  addic 3, 1, 112
  02fe58c  stfs 1, 16(31)
  02fe590  lfs 1, 4(30)
  02fe594  ori 4, 30, 0
  02fe598  lwz 6, 8320(29)
  02fe59c  li 5, 0
  02fe5a0  stfs 1, 20(31)
  02fe5a4  li 7, 0
  02fe5a8  lfs 1, 8(30)
  02fe5ac  stfs 1, 24(31)
  02fe5b0  lfs 1, 12(30)
  02fe5b4  stfs 1, 28(31)
  02fe5b8  lfs 1, 16(6)
  02fe5bc  stfs 1, 112(1)
  02fe5c0  lfs 1, 20(6)
  02fe5c4  stfs 1, 116(1)
  02fe5c8  lfs 1, 24(6)
  02fe5cc  lfs 2, 8(30)
  02fe5d0  stfs 1, 120(1)
  02fe5d4  lfs 1, 28(6)
  02fe5d8  stfs 2, 120(1)
  02fe5dc  stfs 1, 124(1)
  02fe5e0  bl 0x57820
  02fe5e4  nop
  02fe5e8  cmpwi 3, 0
  02fe5ec  bt 2, 0x2fe6ec
  02fe5f0  lis 3, 161
  02fe5f4  addic 5, 3, 2368
  02fe5f8  lis 3, 48
  02fe5fc  lfs 1, 32(5)
  02fe600  stfs 1, 16(31)
  02fe604  lfs 2, 36(5)
  02fe608  stfs 2, 20(31)
  02fe60c  lfs 3, 40(5)
  02fe610  stfs 3, 24(31)
  02fe614  lfs 4, 44(5)
  02fe618  stfs 4, 28(31)
  02fe61c  lfs 4, 68(5)
  02fe620  lfs 5, 64(5)
  02fe624  fmuls 6, 4, 4
  02fe628  lfs 7, 72(5)
  02fe62c  addi 30, 3, -6956
  02fe630  lis 3, 114
  02fe634  lfs 8, 4(30)
  02fe638  lfs 9, 0(30)
  02fe63c  fmadds 6, 5, 5, 6
  02fe640  lfs 10, -3048(3)
  02fe644  fmuls 8, 10, 8
  02fe648  fmadds 6, 7, 7, 6
  02fe64c  fmsubs 8, 10, 9, 8
  02fe650  lfs 9, 8(30)
  02fe654  fsqrts 6, 6
  02fe658  addic 5, 5, 64
  02fe65c  ori 3, 28, 0
  02fe660  ori 4, 28, 0
  02fe664  fdivs 8, 8, 6
  02fe668  fsub 10, 9, 6
  02fe66c  fsub 11, 9, 6
  02fe670  fsub 12, 9, 6
  02fe674  fsub 13, 6, 9
  02fe678  fsub 0, 6, 9
  02fe67c  fsub 6, 6, 9
  02fe680  fmuls 7, 7, 8
  02fe684  fmuls 4, 4, 8
  02fe688  fmuls 5, 5, 8
  02fe68c  fsel 8, 10, 9, 7
  02fe690  fsel 10, 11, 9, 4
  02fe694  fsel 9, 12, 9, 5
  02fe698  fsel 7, 13, 8, 7
  02fe69c  fsel 4, 0, 10, 4
  02fe6a0  fsel 5, 6, 9, 5
  02fe6a4  fadds 3, 3, 7
  02fe6a8  fadds 2, 2, 4
  02fe6ac  fadds 1, 1, 5
  02fe6b0  stfs 3, 24(31)
  02fe6b4  stfs 2, 20(31)
  02fe6b8  stfs 1, 16(31)
  02fe6bc  bl 0x500608
  02fe6c0  nop
  02fe6c4  lfs 1, 12(30)
  02fe6c8  lfs 2, 0(28)
  02fe6cc  lfs 3, 4(28)
  02fe6d0  lfs 4, 8(28)
  02fe6d4  fmuls 2, 2, 1
  02fe6d8  fmuls 3, 3, 1
  02fe6dc  fmuls 1, 4, 1
  02fe6e0  stfs 2, 0(28)
  02fe6e4  stfs 3, 4(28)
  02fe6e8  stfs 1, 8(28)
  02fe6ec  li 3, 2
  02fe6f0  stb 3, 32(31)
  02fe6f4  ld 0, 176(1)
  02fe6f8  mtlr 0
  02fe6fc  ld 28, 128(1)
  02fe700  ld 29, 136(1)
  02fe704  ld 30, 144(1)
  02fe708  ld 31, 152(1)
  02fe70c  addi 1, 1, 160
  02fe710  blr

M230_002fe758:   # 0x2fe758, 0xa84 bytes
  02fe758  stdu 1, -432(1)
  02fe75c  mflr 0
  02fe760  std 0, 448(1)
  02fe764  stfd 22, 352(1)
  02fe768  stfd 23, 360(1)
  02fe76c  stfd 24, 368(1)
  02fe770  stfd 25, 376(1)
  02fe774  stfd 26, 384(1)
  02fe778  stfd 27, 392(1)
  02fe77c  stfd 28, 400(1)
  02fe780  stfd 29, 408(1)
  02fe784  stfd 30, 416(1)
  02fe788  stfd 31, 424(1)
  02fe78c  std 25, 296(1)
  02fe790  std 31, 344(1)
  02fe794  lis 25, 151
  02fe798  std 26, 304(1)
  02fe79c  ori 31, 3, 0
  02fe7a0  addic 25, 25, -25376
  02fe7a4  std 28, 320(1)
  02fe7a8  lis 26, 48
  02fe7ac  li 28, 0
  02fe7b0  std 30, 336(1)
  02fe7b4  addi 26, 26, -6380
  02fe7b8  std 24, 288(1)
  02fe7bc  ori 30, 4, 0
  02fe7c0  lwz 3, 8324(25)
  02fe7c4  std 29, 328(1)
  02fe7c8  ori 24, 28, 0
  02fe7cc  ori 29, 5, 0
  02fe7d0  std 27, 312(1)
  02fe7d4  cmpwi 3, 114
  02fe7d8  bt 2, 0x2fe7ec
  02fe7dc  lis 3, 161
  02fe7e0  lwz 3, 1800(3)
  02fe7e4  cmpwi 3, 0
  02fe7e8  bt 2, 0x2fe7f4
  02fe7ec  ori 3, 28, 0
  02fe7f0  b 0x2ff184
  02fe7f4  lfs 31, 16(30)
  02fe7f8  lfs 1, 20(30)
  02fe7fc  stfs 31, 128(1)
  02fe800  lfs 2, 24(30)
  02fe804  stfs 1, 132(1)
  02fe808  lfs 3, 28(30)
  02fe80c  lbz 3, 32(30)
  02fe810  stfs 2, 136(1)
  02fe814  cmpwi 3, 1
  02fe818  stfs 3, 140(1)
  02fe81c  bf 2, 0x2fecd4
  02fe820  lwz 3, 1648(25)
  02fe824  lwz 4, 1652(25)
  02fe828  lfs 1, 1648(25)
  02fe82c  lfs 2, 1652(25)
  02fe830  fabs 3, 1
  02fe834  fabs 2, 2
  02fe838  lfs 31, 0(26)
  02fe83c  rlwinm 4, 4, 3, 29, 29
  02fe840  lis 27, 115
  02fe844  addic 27, 27, 22784
  02fe848  fsubs 1, 3, 2
  02fe84c  stfs 1, 200(1)
  02fe850  lfs 22, 4(26)
  02fe854  lfs 23, 8(26)
  02fe858  lwz 5, 200(1)
  02fe85c  lfs 1, 200(1)
  02fe860  rlwimi 4, 5, 2, 30, 30
  02fe864  fsub 4, 1, 22
  02fe868  fsub 5, 1, 22
  02fe86c  rlwimi 4, 3, 4, 28, 28
  02fe870  ori 3, 27, 0
  02fe874  rlwimi 3, 4, 2, 26, 28
  02fe878  slwi 4, 4, 2
  02fe87c  clrldi 3, 3, 32
  02fe880  fsel 4, 4, 3, 2
  02fe884  lfsx 1, 27, 4
  02fe888  fsel 3, 5, 2, 3
  02fe88c  lfs 2, 4(3)
  02fe890  fcmpu 0, 4, 22
  02fe894  bt 1, 0x2fe8a0
  02fe898  fmr 1, 22
  02fe89c  b 0x2fe9b8
  02fe8a0  fsubs 5, 3, 4
  02fe8a4  fadds 3, 3, 4
  02fe8a8  addic 3, 1, 16
  02fe8ac  li 7, 2
  02fe8b0  addic 5, 3, 236
  02fe8b4  addic 4, 3, 220
  02fe8b8  mtctr 7
  02fe8bc  fdivs 3, 5, 3
  02fe8c0  fmuls 4, 3, 3
  02fe8c4  stfs 3, 248(1)
  02fe8c8  stfs 3, 240(1)
  02fe8cc  stfs 3, 244(1)
  02fe8d0  stfs 3, 236(1)
  02fe8d4  lfs 6, 248(1)
  02fe8d8  lfs 7, 240(1)
  02fe8dc  lfs 8, 244(1)
  02fe8e0  fmuls 5, 4, 4
  02fe8e4  fmuls 7, 7, 4
  02fe8e8  fmuls 6, 6, 5
  02fe8ec  fmuls 3, 5, 5
  02fe8f0  fmuls 5, 8, 5
  02fe8f4  stfs 7, 240(1)
  02fe8f8  fmuls 4, 6, 4
  02fe8fc  stfs 5, 244(1)
  02fe900  stfs 4, 248(1)
  02fe904  lfs 4, 220(3)
  02fe908  fmuls 4, 4, 3
  02fe90c  stfs 4, 236(3)
  02fe910  lfs 4, 4(4)
  02fe914  addic 4, 4, 8
  02fe918  fmuls 4, 4, 3
  02fe91c  addic 3, 3, 8
  02fe920  stfs 4, 4(5)
  02fe924  addic 5, 5, 8
  02fe928  bdnz 0x2fe904
  02fe92c  li 5, 4
  02fe930  ori 3, 1, 0
  02fe934  mtctr 5
  02fe938  lis 4, 115
  02fe93c  addic 5, 3, 236
  02fe940  addic 4, 4, 22752
  02fe944  ori 6, 5, 0
  02fe948  lfs 3, 236(3)
  02fe94c  lfs 4, 0(4)
  02fe950  fmuls 3, 3, 4
  02fe954  lfs 4, 4(4)
  02fe958  addic 4, 4, 8
  02fe95c  stfs 3, 236(3)
  02fe960  lfs 3, 4(5)
  02fe964  addic 3, 3, 8
  02fe968  fmuls 3, 3, 4
  02fe96c  stfs 3, 4(5)
  02fe970  addic 5, 5, 8
  02fe974  bdnz 0x2fe948
  02fe978  ori 3, 1, 0
  02fe97c  fmr 3, 22
  02fe980  mtctr 7
  02fe984  lfs 4, 236(3)
  02fe988  fadds 3, 3, 4
  02fe98c  lfs 4, 4(6)
  02fe990  addic 3, 3, 16
  02fe994  lfs 5, 8(6)
  02fe998  lfs 6, 12(6)
  02fe99c  addic 6, 6, 16
  02fe9a0  fadds 3, 3, 4
  02fe9a4  fadds 3, 3, 5
  02fe9a8  fadds 3, 3, 6
  02fe9ac  bdnz 0x2fe984
  02fe9b0  fadds 3, 3, 23
  02fe9b4  fmadds 1, 3, 1, 2
  02fe9b8  fmr 2, 1
  02fe9bc  fmr 1, 31
  02fe9c0  bl 0x502578
  02fe9c4  nop
  02fe9c8  lfs 2, 12(26)
  02fe9cc  lfs 30, 16(26)
  02fe9d0  fadds 1, 1, 2
  02fe9d4  lfs 29, 20(26)
  02fe9d8  lwz 3, 1648(25)
  02fe9dc  lfs 4, 1648(25)
  02fe9e0  lwz 4, 1652(25)
  02fe9e4  lfs 6, 1652(25)
  02fe9e8  fabs 7, 4
  02fe9ec  lfs 28, 24(26)
  02fe9f0  fabs 6, 6
  02fe9f4  lfs 27, 28(26)
  02fe9f8  fsubs 2, 30, 1
  02fe9fc  fsubs 3, 29, 1
  02fea00  lfs 26, 32(26)
  02fea04  lfs 25, 36(26)
  02fea08  lfs 24, 40(26)
  02fea0c  rlwinm 4, 4, 3, 29, 29
  02fea10  fsub 5, 1, 2
  02fea14  fsel 1, 5, 2, 1
  02fea18  fsubs 2, 7, 6
  02fea1c  fsub 4, 3, 1
  02fea20  stfs 2, 196(1)
  02fea24  fsel 1, 4, 3, 1
  02fea28  fmuls 2, 1, 1
  02fea2c  lwz 5, 196(1)
  02fea30  lfs 5, 196(1)
  02fea34  rlwimi 4, 5, 2, 30, 30
  02fea38  rlwimi 4, 3, 4, 28, 28
  02fea3c  fmuls 3, 2, 1
  02fea40  ori 3, 27, 0
  02fea44  rlwimi 3, 4, 2, 26, 28
  02fea48  slwi 4, 4, 2
  02fea4c  clrldi 3, 3, 32
  02fea50  fmuls 4, 2, 3
  02fea54  fmadds 1, 3, 28, 1
  02fea58  fsub 3, 5, 22
  02fea5c  fmuls 8, 2, 4
  02fea60  fmadds 1, 4, 27, 1
  02fea64  fsel 4, 3, 7, 6
  02fea68  fsub 3, 5, 22
  02fea6c  fmuls 2, 2, 8
  02fea70  fmadds 1, 8, 26, 1
  02fea74  fcmpu 0, 4, 22
  02fea78  fsel 3, 3, 6, 7
  02fea7c  fmadds 1, 2, 25, 1
  02fea80  fmuls 1, 1, 24
  02fea84  stfs 1, 112(1)
  02fea88  lfsx 1, 27, 4
  02fea8c  lfs 2, 4(3)
  02fea90  bt 1, 0x2fea98
  02fea94  b 0x2febac
  02fea98  fsubs 5, 3, 4
  02fea9c  fadds 3, 3, 4
  02feaa0  addic 3, 1, 16
  02feaa4  li 6, 2
  02feaa8  addic 5, 3, 204
  02feaac  addic 4, 3, 188
  02feab0  mtctr 6
  02feab4  fdivs 3, 5, 3
  02feab8  fmuls 4, 3, 3
  02feabc  stfs 3, 216(1)
  02feac0  stfs 3, 208(1)
  02feac4  stfs 3, 212(1)
  02feac8  stfs 3, 204(1)
  02feacc  lfs 6, 216(1)
  02fead0  lfs 7, 208(1)
  02fead4  lfs 8, 212(1)
  02fead8  fmuls 5, 4, 4
  02feadc  fmuls 7, 7, 4
  02feae0  fmuls 6, 6, 5
  02feae4  fmuls 3, 5, 5
  02feae8  fmuls 5, 8, 5
  02feaec  stfs 7, 208(1)
  02feaf0  fmuls 4, 6, 4
  02feaf4  stfs 5, 212(1)
  02feaf8  stfs 4, 216(1)
  02feafc  lfs 4, 188(3)
  02feb00  fmuls 4, 4, 3
  02feb04  stfs 4, 204(3)
  02feb08  lfs 4, 4(4)
  02feb0c  addic 4, 4, 8
  02feb10  fmuls 4, 4, 3
  02feb14  addic 3, 3, 8
  02feb18  stfs 4, 4(5)
  02feb1c  addic 5, 5, 8
  02feb20  bdnz 0x2feafc
  02feb24  li 5, 4
  02feb28  ori 3, 1, 0
  02feb2c  mtctr 5
  02feb30  lis 4, 115
  02feb34  addic 5, 3, 204
  02feb38  addic 4, 4, 22752
  02feb3c  ori 7, 5, 0
  02feb40  lfs 3, 204(3)
  02feb44  lfs 4, 0(4)
  02feb48  fmuls 3, 3, 4
  02feb4c  lfs 4, 4(4)
  02feb50  addic 4, 4, 8
  02feb54  stfs 3, 204(3)
  02feb58  lfs 3, 4(5)
  02feb5c  addic 3, 3, 8
  02feb60  fmuls 3, 3, 4
  02feb64  stfs 3, 4(5)
  02feb68  addic 5, 5, 8
  02feb6c  bdnz 0x2feb40
  02feb70  ori 3, 1, 0
  02feb74  mtctr 6
  02feb78  lfs 3, 204(3)
  02feb7c  lfs 4, 4(7)
  02feb80  fadds 3, 22, 3
  02feb84  lfs 5, 8(7)
  02feb88  addic 3, 3, 16
  02feb8c  lfs 22, 12(7)
  02feb90  addic 7, 7, 16
  02feb94  fadds 3, 3, 4
  02feb98  fadds 3, 3, 5
  02feb9c  fadds 22, 3, 22
  02feba0  bdnz 0x2feb78
  02feba4  fadds 22, 22, 23
  02feba8  fmadds 22, 22, 1, 2
  02febac  fmr 1, 31
  02febb0  fmr 2, 22
  02febb4  bl 0x502578
  02febb8  nop
  02febbc  fsubs 2, 30, 1
  02febc0  fsubs 3, 29, 1
  02febc4  fsub 4, 1, 2
  02febc8  fsel 1, 4, 2, 1
  02febcc  fsub 2, 3, 1
  02febd0  fsel 1, 2, 3, 1
  02febd4  lfs 3, 112(1)
  02febd8  lfs 5, 128(25)
  02febdc  lfs 6, 132(25)
  02febe0  fadds 3, 3, 5
  02febe4  stw 28, 120(1)
  02febe8  fmuls 2, 1, 1
  02febec  stfs 3, 112(1)
  02febf0  lfs 31, 0(31)
  02febf4  fmuls 4, 2, 1
  02febf8  lfs 30, 4(31)
  02febfc  lfs 29, 8(31)
  02fec00  fmuls 7, 2, 4
  02fec04  fmadds 1, 4, 28, 1
  02fec08  fmuls 4, 2, 7
  02fec0c  fmadds 1, 7, 27, 1
  02fec10  fmuls 2, 2, 4
  02fec14  fmadds 1, 4, 26, 1
  02fec18  fmadds 1, 2, 25, 1
  02fec1c  lfs 2, 136(25)
  02fec20  lwz 3, 8332(25)
  02fec24  cmpwi 3, 15
  02fec28  fmuls 1, 1, 24
  02fec2c  fadds 3, 1, 6
  02fec30  stfs 1, 116(1)
  02fec34  lwz 3, 764(25)
  02fec38  stfs 3, 116(1)
  02fec3c  lfs 1, 44(26)
  02fec40  fadds 1, 2, 1
  02fec44  stfs 1, 120(1)
  02fec48  bf 2, 0x2fec64
  02fec4c  lfs 1, 256(25)
  02fec50  lfs 2, 260(25)
  02fec54  fadds 31, 31, 1
  02fec58  lfs 1, 264(25)
  02fec5c  fadds 30, 30, 2
  02fec60  fadds 29, 29, 1
  02fec64  cmpwi 3, 0
  02fec68  bt 2, 0x2fec9c
  02fec6c  bl 0x1122ac
  02fec70  nop
  02fec74  cmpwi 3, 0
  02fec78  bt 2, 0x2fec9c
  02fec7c  cmpwi 29, 0
  02fec80  bt 2, 0x2fec9c
  02fec84  lfs 1, 256(25)
  02fec88  lfs 2, 260(25)
  02fec8c  fadds 31, 31, 1
  02fec90  lfs 1, 264(25)
  02fec94  fadds 30, 30, 2
  02fec98  fadds 29, 29, 1
  02fec9c  li 3, 48
  02feca0  vspltisw 2, -1
  02feca4  lis 4, 114
  02feca8  li 5, -3056
  02fecac  vslw 2, 2, 2
  02fecb0  lvlx 3, 3, 26
  02fecb4  li 3, 192
  02fecb8  vspltw 3, 3, 0
  02fecbc  lvlx 4, 5, 4
  02fecc0  vmaddfp 2, 4, 3, 2
  02fecc4  vctsxs 2, 2, 0
  02fecc8  vspltw 2, 2, 0
  02feccc  stvewx 2, 3, 1
  02fecd0  b 0x2fed1c
  02fecd4  lwz 3, 48(31)
  02fecd8  lhz 4, 56(31)
  02fecdc  lfs 4, 0(31)
  02fece0  extsh 4, 4
  02fece4  lwz 3, 120(3)
  02fece8  stfs 31, 112(1)
  02fecec  stfs 1, 116(1)
  02fecf0  fmr 31, 4
  02fecf4  stfs 2, 120(1)
  02fecf8  stfs 3, 124(1)
  02fecfc  lfs 30, 4(31)
  02fed00  lfs 29, 8(31)
  02fed04  stw 4, 192(1)
  02fed08  lwz 3, 80(3)
  02fed0c  cmpwi 3, 0
  02fed10  bt 2, 0x2fed1c
  02fed14  li 3, 1
  02fed18  sth 3, 58(31)
  02fed1c  lis 3, 114
  02fed20  lwz 8, 8320(25)
  02fed24  lfs 28, 52(26)
  02fed28  li 7, 0
  02fed2c  addic 4, 1, 112
  02fed30  li 5, 16
  02fed34  ori 6, 8, 0
  02fed38  lfs 1, -3052(3)
  02fed3c  lfs 2, 16(8)
  02fed40  addic 3, 1, 144
  02fed44  fnmsubs 29, 1, 28, 29
  02fed48  stfs 2, 144(1)
  02fed4c  lfs 2, 20(8)
  02fed50  stfs 2, 148(1)
  02fed54  lfs 2, 24(8)
  02fed58  lfs 3, 120(1)
  02fed5c  stfs 2, 152(1)
  02fed60  lfs 1, 28(8)
  02fed64  stfs 3, 152(1)
  02fed68  stfs 1, 156(1)
  02fed6c  bl 0x57820
  02fed70  nop
  02fed74  cmpwi 3, 0
  02fed78  bt 2, 0x2feeac
  02fed7c  bl 0x60780
  02fed80  nop
  02fed84  cmpwi 3, 0
  02fed88  lwz 3, 8320(25)
  02fed8c  lwz 5, 192(1)
  02fed90  bf 2, 0x2feda4
  02fed94  lfs 1, 4(26)
  02fed98  fcmpu 0, 29, 1
  02fed9c  cror 6, 0, 2
  02feda0  bt 6, 0x2feeac
  02feda4  lis 4, 161
  02feda8  ori 6, 3, 0
  02fedac  addic 4, 4, 2368
  02fedb0  lwz 3, 24(4)
  02fedb4  cmpwi 3, 0
  02fedb8  cmpw 1, 3, 6
  02fedbc  bt 2, 0x2fee7c
  02fedc0  lwz 6, 28(4)
  02fedc4  cmpwi 6, 0
  02fedc8  bt 1, 0x2fee7c
  02fedcc  bt 6, 0x2feddc
  02fedd0  lwz 6, 48(31)
  02fedd4  cmpw 3, 6
  02fedd8  bf 2, 0x2fee18
  02feddc  lis 3, 114
  02fede0  lfs 1, 48(26)
  02fede4  lfs 2, -3056(3)
  02fede8  fmuls 1, 2, 1
  02fedec  fctiwz 1, 1
  02fedf0  stfd 1, 272(1)
  02fedf4  lfs 1, 56(26)
  02fedf8  lwz 3, 276(1)
  02fedfc  fmuls 1, 2, 1
  02fee00  fctiwz 1, 1
  02fee04  stfd 1, 272(1)
  02fee08  lwz 6, 276(1)
  02fee0c  subc 3, 3, 6
  02fee10  cmpw 5, 3
  02fee14  bf 0, 0x2feeac
  02fee18  lis 3, 16128
  02fee1c  lwz 4, 24(4)
  02fee20  stw 28, 160(1)
  02fee24  stw 28, 164(1)
  02fee28  stw 3, 168(1)
  02fee2c  stw 28, 172(1)
  02fee30  addic 3, 1, 160
  02fee34  lfs 1, 16(4)
  02fee38  stfs 1, 16(31)
  02fee3c  lfs 2, 20(4)
  02fee40  stfs 2, 20(31)
  02fee44  lfs 3, 24(4)
  02fee48  fadds 4, 28, 3
  02fee4c  stfs 3, 24(31)
  02fee50  lfs 3, 28(4)
  02fee54  stfs 1, 160(1)
  02fee58  li 4, 0
  02fee5c  stfs 3, 28(31)
  02fee60  fmr 1, 28
  02fee64  stfs 2, 164(1)
  02fee68  stfs 4, 168(1)
  02fee6c  bl 0xffb70
  02fee70  nop
  02fee74  li 28, 1
  02fee78  b 0x2feeac
  02fee7c  lwz 3, 28(4)
  02fee80  cmpwi 3, 0
  02fee84  bf 1, 0x2feeac
  02fee88  lfs 1, 32(4)
  02fee8c  li 28, 1
  02fee90  stfs 1, 16(31)
  02fee94  lfs 1, 36(4)
  02fee98  stfs 1, 20(31)
  02fee9c  lfs 1, 40(4)
  02feea0  stfs 1, 24(31)
  02feea4  lfs 1, 44(4)
  02feea8  stfs 1, 28(31)
  02feeac  addic 3, 1, 192
  02feeb0  bl 0x4fff60
  02feeb4  nop
  02feeb8  or 3, 3, 28
  02feebc  cmpwi 3, 0
  02feec0  bf 2, 0x2ff060
  02feec4  lfs 2, 112(1)
  02feec8  li 4, 10
  02feecc  lfs 3, 116(1)
  02feed0  lis 3, 114
  02feed4  lfs 4, 120(1)
  02feed8  mtctr 4
  02feedc  lfs 1, 124(1)
  02feee0  stfs 1, 140(1)
  02feee4  stfs 2, 128(1)
  02feee8  stfs 3, 132(1)
  02feeec  stfs 4, 136(1)
  02feef0  lfs 1, 60(26)
  02feef4  fadds 2, 2, 31
  02feef8  lfs 5, -3048(3)
  02feefc  fadds 3, 3, 30
  02fef00  fadds 4, 4, 29
  02fef04  fnmsubs 29, 5, 1, 29
  02fef08  stfs 2, 112(1)
  02fef0c  stfs 3, 116(1)
  02fef10  stfs 4, 120(1)
  02fef14  bdnz 0x2feef4
  02fef18  addic 3, 1, 128
  02fef1c  addic 4, 1, 112
  02fef20  li 5, 16
  02fef24  ori 6, 30, 0
  02fef28  li 7, 0
  02fef2c  bl 0x57820
  02fef30  nop
  02fef34  cmpwi 3, 0
  02fef38  bt 2, 0x2feeac
  02fef3c  bl 0x60780
  02fef40  nop
  02fef44  cmpwi 3, 0
  02fef48  lwz 3, 8320(25)
  02fef4c  lwz 5, 192(1)
  02fef50  bf 2, 0x2fef60
  02fef54  lfs 1, 4(26)
  02fef58  fcmpu 0, 29, 1
  02fef5c  bt 1, 0x2feeac
  02fef60  lis 4, 161
  02fef64  ori 6, 3, 0
  02fef68  addic 4, 4, 2368
  02fef6c  lwz 3, 24(4)
  02fef70  cmpwi 3, 0
  02fef74  cmpw 1, 3, 6
  02fef78  bt 2, 0x2ff034
  02fef7c  lwz 6, 28(4)
  02fef80  cmpwi 6, 0
  02fef84  bt 1, 0x2ff034
  02fef88  bt 6, 0x2fef98
  02fef8c  lwz 6, 48(31)
  02fef90  cmpw 3, 6
  02fef94  bf 2, 0x2fefd4
  02fef98  lis 3, 114
  02fef9c  lfs 1, 48(26)
  02fefa0  lfs 2, -3056(3)
  02fefa4  fmuls 1, 2, 1
  02fefa8  fctiwz 1, 1
  02fefac  stfd 1, 272(1)
  02fefb0  lfs 1, 56(26)
  02fefb4  lwz 3, 276(1)
  02fefb8  fmuls 1, 2, 1
  02fefbc  fctiwz 1, 1
  02fefc0  stfd 1, 272(1)
  02fefc4  lwz 6, 276(1)
  02fefc8  subc 3, 3, 6
  02fefcc  cmpw 5, 3
  02fefd0  bf 0, 0x2feeac
  02fefd4  lis 5, 16128
  02fefd8  lwz 4, 24(4)
  02fefdc  stw 24, 176(1)
  02fefe0  addic 3, 1, 176
  02fefe4  stw 24, 180(1)
  02fefe8  stw 5, 184(1)
  02fefec  stw 24, 188(1)
  02feff0  lfs 1, 16(4)
  02feff4  stfs 1, 16(31)
  02feff8  lfs 2, 20(4)
  02feffc  stfs 2, 20(31)
  02ff000  lfs 3, 24(4)
  02ff004  fadds 4, 28, 3
  02ff008  stfs 3, 24(31)
  02ff00c  lfs 3, 28(4)
  02ff010  stfs 1, 176(1)
  02ff014  stfs 3, 28(31)
  02ff018  li 4, 0
  02ff01c  stfs 2, 180(1)
  02ff020  fmr 1, 28
  02ff024  stfs 4, 184(1)
  02ff028  bl 0xffb70
  02ff02c  nop
  02ff030  b 0x2ff060
  02ff034  lwz 3, 28(4)
  02ff038  cmpwi 3, 0
  02ff03c  bf 1, 0x2feeac
  02ff040  lfs 1, 32(4)
  02ff044  stfs 1, 16(31)
  02ff048  lfs 1, 36(4)
  02ff04c  stfs 1, 20(31)
  02ff050  lfs 1, 40(4)
  02ff054  stfs 1, 24(31)
  02ff058  lfs 1, 44(4)
  02ff05c  stfs 1, 28(31)
  02ff060  lwz 3, 192(1)
  02ff064  cmpwi 3, 0
  02ff068  bt 2, 0x2ff180
  02ff06c  cmpwi 29, 0
  02ff070  bf 2, 0x2ff098
  02ff074  lis 3, 161
  02ff078  addic 3, 3, 2368
  02ff07c  lwz 3, 24(3)
  02ff080  cmpwi 3, 0
  02ff084  bt 2, 0x2ff180
  02ff088  bl 0x1122ac
  02ff08c  nop
  02ff090  cmpwi 3, 0
  02ff094  bt 2, 0x2ff180
  02ff098  cmpwi 29, 2
  02ff09c  bf 2, 0x2ff0c4
  02ff0a0  lis 3, 161
  02ff0a4  addic 3, 3, 2368
  02ff0a8  lwz 3, 24(3)
  02ff0ac  cmpwi 3, 0
  02ff0b0  bt 2, 0x2ff0c4
  02ff0b4  bl 0x1122ac
  02ff0b8  nop
  02ff0bc  cmpwi 3, 0
  02ff0c0  bf 2, 0x2ff0d8
  02ff0c4  lis 3, 113
  02ff0c8  ori 4, 30, 0
  02ff0cc  addic 3, 3, -18112
  02ff0d0  bl 0x6d720
  02ff0d4  nop
  02ff0d8  lis 3, 161
  02ff0dc  lis 4, 149
  02ff0e0  addic 3, 3, 2368
  02ff0e4  addic 4, 4, 5056
  02ff0e8  lfs 1, 64(3)
  02ff0ec  stfs 1, 32(31)
  02ff0f0  lfs 1, 68(3)
  02ff0f4  stfs 1, 36(31)
  02ff0f8  lfs 1, 72(3)
  02ff0fc  lfs 2, 16(31)
  02ff100  stfs 1, 40(31)
  02ff104  lfs 1, 76(3)
  02ff108  lfs 3, 20(31)
  02ff10c  stfs 1, 44(31)
  02ff110  lfs 1, 320(4)
  02ff114  lfs 4, 324(4)
  02ff118  fsubs 2, 2, 1
  02ff11c  fsubs 3, 3, 4
  02ff120  lfs 4, 28(31)
  02ff124  stfs 4, 140(1)
  02ff128  lfs 4, 24(31)
  02ff12c  lfs 5, 328(4)
  02ff130  li 3, 1
  02ff134  fsubs 4, 4, 5
  02ff138  stfs 2, 128(1)
  02ff13c  stfs 3, 132(1)
  02ff140  lfs 6, 64(26)
  02ff144  fmuls 2, 2, 6
  02ff148  fmuls 3, 3, 6
  02ff14c  fmuls 4, 4, 6
  02ff150  fadds 1, 2, 1
  02ff154  stfs 2, 128(1)
  02ff158  stfs 3, 132(1)
  02ff15c  stfs 4, 136(1)
  02ff160  stfs 1, 16(31)
  02ff164  lfs 1, 324(4)
  02ff168  fadds 1, 3, 1
  02ff16c  stfs 1, 20(31)
  02ff170  lfs 1, 328(4)
  02ff174  fadds 1, 4, 1
  02ff178  stfs 1, 24(31)
  02ff17c  b 0x2ff184
  02ff180  ori 3, 24, 0
  02ff184  ld 0, 448(1)
  02ff188  mtlr 0
  02ff18c  lfd 22, 352(1)
  02ff190  lfd 23, 360(1)
  02ff194  lfd 24, 368(1)
  02ff198  lfd 25, 376(1)
  02ff19c  lfd 26, 384(1)
  02ff1a0  lfd 27, 392(1)
  02ff1a4  lfd 28, 400(1)
  02ff1a8  lfd 29, 408(1)
  02ff1ac  lfd 30, 416(1)
  02ff1b0  lfd 31, 424(1)
  02ff1b4  ld 24, 288(1)
  02ff1b8  ld 25, 296(1)
  02ff1bc  ld 26, 304(1)
  02ff1c0  ld 27, 312(1)
  02ff1c4  ld 28, 320(1)
  02ff1c8  ld 29, 328(1)
  02ff1cc  ld 30, 336(1)
  02ff1d0  ld 31, 344(1)
  02ff1d4  addi 1, 1, 432
  02ff1d8  blr

UpdateMoby_230:   # 0x2ff240, 0xeec bytes
  02ff240  stdu 1, -336(1)
  02ff244  mflr 0
  02ff248  std 0, 352(1)
  02ff24c  stfd 24, 272(1)
  02ff250  stfd 25, 280(1)
  02ff254  stfd 26, 288(1)
  02ff258  stfd 27, 296(1)
  02ff25c  stfd 28, 304(1)
  02ff260  stfd 29, 312(1)
  02ff264  stfd 30, 320(1)
  02ff268  stfd 31, 328(1)
  02ff26c  std 31, 264(1)
  02ff270  cmpwi 3, 0
  02ff274  std 30, 256(1)
  02ff278  std 29, 248(1)
  02ff27c  std 28, 240(1)
  02ff280  std 27, 232(1)
  02ff284  ori 31, 3, 0
  02ff288  bt 2, 0x3000e8
  02ff28c  lwz 30, 120(31)
  02ff290  cmpwi 30, 0
  02ff294  bt 2, 0x3000e8
  02ff298  lwz 3, 16(31)
  02ff29c  lis 4, 16384
  02ff2a0  srawi 5, 3, 31
  02ff2a4  srwi 6, 5, 1
  02ff2a8  xor 3, 6, 3
  02ff2ac  subc 3, 3, 5
  02ff2b0  cmpw 3, 4
  02ff2b4  bt 0, 0x2ff328
  02ff2b8  lis 4, 17535
  02ff2bc  ori 4, 4, 16384
  02ff2c0  cmpw 3, 4
  02ff2c4  bt 1, 0x2ff328
  02ff2c8  lwz 5, 20(31)
  02ff2cc  lis 3, 17535
  02ff2d0  srawi 6, 5, 31
  02ff2d4  lis 4, 16384
  02ff2d8  srwi 7, 6, 1
  02ff2dc  ori 3, 3, 16384
  02ff2e0  xor 5, 7, 5
  02ff2e4  subc 5, 5, 6
  02ff2e8  cmpw 1, 5, 3
  02ff2ec  cmpw 5, 4
  02ff2f0  cror 2, 0, 5
  02ff2f4  bt 2, 0x2ff328
  02ff2f8  lwz 5, 24(31)
  02ff2fc  lis 3, 17535
  02ff300  srawi 6, 5, 31
  02ff304  lis 4, 16384
  02ff308  srwi 7, 6, 1
  02ff30c  ori 3, 3, 16384
  02ff310  xor 5, 7, 5
  02ff314  subc 5, 5, 6
  02ff318  cmpw 5, 4
  02ff31c  cmpw 1, 5, 3
  02ff320  bt 0, 0x2ff328
  02ff324  bf 5, 0x2ff338
  02ff328  ori 3, 31, 0
  02ff32c  bl 0xefb38
  02ff330  nop
  02ff334  b 0x3000e8
  02ff338  lis 28, 151
  02ff33c  addic 28, 28, -25376
  02ff340  lbz 3, 8357(28)
  02ff344  cmpwi 3, 0
  02ff348  bt 2, 0x2ff364
  02ff34c  lbz 3, 32(31)
  02ff350  cmpwi 3, 2
  02ff354  bf 0, 0x2ff364
  02ff358  lhz 3, 52(31)
  02ff35c  ori 3, 3, 65
  02ff360  b 0x2ff370
  02ff364  li 3, -66
  02ff368  lhz 4, 52(31)
  02ff36c  and 3, 4, 3
  02ff370  sth 3, 52(31)
  02ff374  lwz 3, 48(30)
  02ff378  lhz 3, 166(3)
  02ff37c  cmpwi 3, 229
  02ff380  bf 2, 0x2ff41c
  02ff384  lhz 3, 58(30)
  02ff388  cmpwi 3, 0
  02ff38c  bf 2, 0x2ff41c
  02ff390  lfs 1, 4(30)
  02ff394  lfs 2, 0(30)
  02ff398  fmuls 1, 1, 1
  02ff39c  lfs 3, 8(30)
  02ff3a0  lis 3, 48
  02ff3a4  addi 3, 3, -3620
  02ff3a8  fmadds 1, 2, 2, 1
  02ff3ac  lfs 2, 0(3)
  02ff3b0  fmadds 1, 3, 3, 1
  02ff3b4  fsqrts 1, 1
  02ff3b8  fcmpu 0, 1, 2
  02ff3bc  cror 6, 0, 2
  02ff3c0  bt 6, 0x2ff41c
  02ff3c4  lwz 3, 764(28)
  02ff3c8  cmpwi 3, 0
  02ff3cc  bt 2, 0x2ff3e0
  02ff3d0  bl 0x1122ac
  02ff3d4  nop
  02ff3d8  cmpwi 3, 0
  02ff3dc  bf 2, 0x2ff3f4
  02ff3e0  ori 3, 30, 0
  02ff3e4  ori 4, 31, 0
  02ff3e8  li 5, 1
  02ff3ec  bl 0x2fe758
  02ff3f0  b 0x2ff41c
  02ff3f4  ori 3, 30, 0
  02ff3f8  ori 4, 31, 0
  02ff3fc  li 5, 0
  02ff400  bl 0x2fe758
  02ff404  cmpwi 3, 0
  02ff408  bf 2, 0x2ff41c
  02ff40c  ori 3, 30, 0
  02ff410  ori 4, 31, 0
  02ff414  li 5, 2
  02ff418  bl 0x2fe758
  02ff41c  lbz 3, 32(31)
  02ff420  cmpwi 3, 4
  02ff424  cmpwi 1, 3, 3
  02ff428  cmpwi 6, 3, 2
  02ff42c  cmpwi 7, 3, 1
  02ff430  bt 2, 0x300048
  02ff434  bt 6, 0x2ffba4
  02ff438  bt 26, 0x2ff5a4
  02ff43c  bt 30, 0x2ff49c
  02ff440  cmpwi 3, 0
  02ff444  bf 2, 0x3000e0
  02ff448  lis 3, 48
  02ff44c  vspltisw 2, -1
  02ff450  li 4, 1
  02ff454  addi 3, 3, -3620
  02ff458  li 6, 4
  02ff45c  lis 5, 114
  02ff460  stb 4, 32(31)
  02ff464  li 4, -3056
  02ff468  vslw 2, 2, 2
  02ff46c  lvlx 3, 6, 3
  02ff470  li 3, 52
  02ff474  vspltw 3, 3, 0
  02ff478  lvlx 4, 4, 5
  02ff47c  li 4, 0
  02ff480  vmaddfp 2, 4, 3, 2
  02ff484  vctsxs 2, 2, 0
  02ff488  vspltw 2, 2, 0
  02ff48c  stvewx 2, 3, 30
  02ff490  sth 4, 56(30)
  02ff494  stw 4, 60(30)
  02ff498  b 0x3000e8
  02ff49c  li 3, 0
  02ff4a0  lis 4, 48
  02ff4a4  addi 4, 4, -3620
  02ff4a8  sth 3, 56(30)
  02ff4ac  lwz 3, 36(31)
  02ff4b0  lfs 3, 8(4)
  02ff4b4  lfs 2, 36(3)
  02ff4b8  lfs 1, 44(31)
  02ff4bc  fmuls 3, 2, 3
  02ff4c0  fcmpu 0, 1, 3
  02ff4c4  cror 6, 1, 2
  02ff4c8  bt 6, 0x2ff4ec
  02ff4cc  lis 3, 48
  02ff4d0  lis 4, 114
  02ff4d4  addi 3, 3, -3620
  02ff4d8  lfs 3, 12(3)
  02ff4dc  lfs 4, -3064(4)
  02ff4e0  fmuls 3, 4, 3
  02ff4e4  fmadds 1, 3, 2, 1
  02ff4e8  stfs 1, 44(31)
  02ff4ec  addic 3, 30, 52
  02ff4f0  bl 0x4fff60
  02ff4f4  nop
  02ff4f8  cmpwi 3, 0
  02ff4fc  bt 2, 0x2ff554
  02ff500  lis 3, 48
  02ff504  vspltisw 2, -1
  02ff508  li 5, 4
  02ff50c  addi 3, 3, -3620
  02ff510  lis 4, 114
  02ff514  li 6, -3056
  02ff518  vslw 2, 2, 2
  02ff51c  lvlx 3, 5, 3
  02ff520  li 3, 52
  02ff524  vspltw 3, 3, 0
  02ff528  lvlx 4, 6, 4
  02ff52c  vmaddfp 2, 4, 3, 2
  02ff530  vctsxs 2, 2, 0
  02ff534  vspltw 2, 2, 0
  02ff538  stvewx 2, 3, 30
  02ff53c  lbz 3, 8357(28)
  02ff540  cmpwi 3, 0
  02ff544  bf 2, 0x2ff554
  02ff548  ori 3, 31, 0
  02ff54c  bl 0x129f28
  02ff550  nop
  02ff554  lbz 3, 8356(28)
  02ff558  cmpwi 3, 0
  02ff55c  bf 2, 0x2ff594
  02ff560  lwz 30, 48(30)
  02ff564  cmpwi 30, 0
  02ff568  bt 2, 0x2ff594
  02ff56c  lbz 3, 32(30)
  02ff570  rlwinm 3, 3, 0, 24, 27
  02ff574  cmpwi 3, 240
  02ff578  bt 2, 0x2ff594
  02ff57c  lwz 28, 4240(28)
  02ff580  cmpwi 28, 0
  02ff584  bt 2, 0x2ff594
  02ff588  lhz 3, 166(28)
  02ff58c  cmpwi 3, 229
  02ff590  bt 2, 0x3000e8
  02ff594  ori 3, 31, 0
  02ff598  bl 0xefb38
  02ff59c  nop
  02ff5a0  b 0x3000e8
  02ff5a4  lis 3, 151
  02ff5a8  addic 3, 3, -25432
  02ff5ac  lbz 3, 20(3)
  02ff5b0  bl 0x502730
  02ff5b4  nop
  02ff5b8  lis 3, 48
  02ff5bc  lwz 4, 36(31)
  02ff5c0  addi 3, 3, -3620
  02ff5c4  lfs 31, 16(3)
  02ff5c8  lfs 30, 20(3)
  02ff5cc  lfs 2, 36(4)
  02ff5d0  fadds 31, 1, 31
  02ff5d4  fmuls 1, 2, 30
  02ff5d8  fmuls 3, 1, 31
  02ff5dc  lfs 1, 44(31)
  02ff5e0  fcmpu 0, 1, 3
  02ff5e4  cror 6, 1, 2
  02ff5e8  bt 6, 0x2ff610
  02ff5ec  lis 3, 48
  02ff5f0  lis 4, 114
  02ff5f4  addi 3, 3, -3620
  02ff5f8  lfs 3, 12(3)
  02ff5fc  lfs 4, -3064(4)
  02ff600  fmuls 3, 4, 3
  02ff604  fmuls 2, 3, 2
  02ff608  fmadds 1, 2, 31, 1
  02ff60c  stfs 1, 44(31)
  02ff610  addic 3, 30, 52
  02ff614  bl 0x4fff60
  02ff618  nop
  02ff61c  cmpwi 3, 0
  02ff620  bt 2, 0x2ff66c
  02ff624  lis 3, 48
  02ff628  vspltisw 2, -1
  02ff62c  li 5, 4
  02ff630  addi 3, 3, -3620
  02ff634  lis 4, 114
  02ff638  li 6, -3056
  02ff63c  vslw 2, 2, 2
  02ff640  lvlx 3, 5, 3
  02ff644  vspltw 3, 3, 0
  02ff648  lvlx 4, 6, 4
  02ff64c  li 4, 52
  02ff650  vmaddfp 2, 4, 3, 2
  02ff654  ori 3, 31, 0
  02ff658  vctsxs 2, 2, 0
  02ff65c  vspltw 2, 2, 0
  02ff660  stvewx 2, 4, 30
  02ff664  bl 0x129f28
  02ff668  nop
  02ff66c  lis 3, 48
  02ff670  lfs 1, 8(30)
  02ff674  addic 4, 31, 16
  02ff678  addi 29, 3, -3620
  02ff67c  lis 3, 114
  02ff680  addic 5, 28, 320
  02ff684  lfs 2, 24(29)
  02ff688  lfs 3, -3048(3)
  02ff68c  lfs 29, 0(30)
  02ff690  addic 3, 1, 160
  02ff694  fnmsubs 27, 3, 2, 1
  02ff698  lfs 28, 4(30)
  02ff69c  stfs 27, 8(30)
  02ff6a0  lfs 1, 16(31)
  02ff6a4  lfs 2, 20(31)
  02ff6a8  fadds 29, 1, 29
  02ff6ac  lfs 1, 24(31)
  02ff6b0  fadds 28, 2, 28
  02ff6b4  lfs 26, 28(31)
  02ff6b8  fadds 27, 1, 27
  02ff6bc  bl 0x502b08
  02ff6c0  nop
  02ff6c4  lfs 1, 16(31)
  02ff6c8  lis 3, 114
  02ff6cc  lfs 2, 20(31)
  02ff6d0  stfs 1, 112(1)
  02ff6d4  lfs 1, 24(31)
  02ff6d8  stfs 2, 116(1)
  02ff6dc  lfs 2, 28(31)
  02ff6e0  stfs 1, 120(1)
  02ff6e4  stfs 2, 124(1)
  02ff6e8  lfs 25, 28(29)
  02ff6ec  lfs 2, -3064(3)
  02ff6f0  lfs 3, 44(31)
  02ff6f4  fmuls 5, 2, 25
  02ff6f8  lwz 4, 36(31)
  02ff6fc  fmuls 2, 2, 25
  02ff700  lfs 4, 36(4)
  02ff704  stfs 29, 128(1)
  02ff708  fmuls 5, 5, 3
  02ff70c  stfs 28, 132(1)
  02ff710  fmuls 2, 2, 3
  02ff714  stfs 27, 136(1)
  02ff718  stfs 26, 140(1)
  02ff71c  lwz 6, 8320(28)
  02ff720  fdivs 4, 5, 4
  02ff724  addic 3, 1, 144
  02ff728  li 5, 4
  02ff72c  fsubs 1, 1, 4
  02ff730  stfs 1, 120(1)
  02ff734  lfs 1, 36(4)
  02ff738  fdivs 1, 2, 1
  02ff73c  stfs 29, 144(1)
  02ff740  stfs 28, 148(1)
  02ff744  stfs 26, 156(1)
  02ff748  fsubs 1, 27, 1
  02ff74c  stfs 1, 136(1)
  02ff750  lfs 24, 32(29)
  02ff754  fmadds 1, 31, 24, 27
  02ff758  stfs 1, 152(1)
  02ff75c  lfs 1, 36(29)
  02ff760  fmuls 1, 31, 1
  02ff764  bl 0x59e20
  02ff768  nop
  02ff76c  cmpwi 3, 0
  02ff770  bt 2, 0x2ff960
  02ff774  lis 29, 161
  02ff778  ori 3, 30, 0
  02ff77c  addic 29, 29, 2368
  02ff780  ori 4, 30, 0
  02ff784  addic 5, 29, 64
  02ff788  lfs 1, 48(29)
  02ff78c  stfs 1, 16(31)
  02ff790  lfs 1, 52(29)
  02ff794  stfs 1, 20(31)
  02ff798  lfs 1, 56(29)
  02ff79c  lfs 2, 60(29)
  02ff7a0  fnmsubs 1, 31, 24, 1
  02ff7a4  stfs 2, 28(31)
  02ff7a8  stfs 1, 24(31)
  02ff7ac  bl 0x500608
  02ff7b0  nop
  02ff7b4  lfs 1, 4(30)
  02ff7b8  lfs 2, 0(30)
  02ff7bc  fmuls 1, 1, 30
  02ff7c0  lfs 3, 8(30)
  02ff7c4  fmuls 2, 2, 30
  02ff7c8  fmuls 3, 3, 30
  02ff7cc  lis 3, 48
  02ff7d0  addi 3, 3, -3620
  02ff7d4  fmuls 4, 1, 1
  02ff7d8  stfs 2, 0(30)
  02ff7dc  stfs 1, 4(30)
  02ff7e0  stfs 3, 8(30)
  02ff7e4  lfs 31, 40(3)
  02ff7e8  lis 3, 114
  02ff7ec  fmadds 4, 2, 2, 4
  02ff7f0  lfs 2, -3064(3)
  02ff7f4  fmuls 2, 2, 31
  02ff7f8  fmadds 1, 3, 3, 4
  02ff7fc  fsqrts 1, 1
  02ff800  fcmpu 0, 1, 2
  02ff804  bt 0, 0x2ff874
  02ff808  lwz 3, 764(28)
  02ff80c  cmpwi 3, 0
  02ff810  bt 2, 0x2ff8d8
  02ff814  bl 0x1122ac
  02ff818  nop
  02ff81c  cmpwi 3, 0
  02ff820  bt 2, 0x2ff8d8
  02ff824  lfs 1, 260(28)
  02ff828  lfs 2, 4(30)
  02ff82c  fmuls 1, 1, 1
  02ff830  lfs 3, 256(28)
  02ff834  fmuls 2, 2, 2
  02ff838  lfs 4, 0(30)
  02ff83c  lfs 5, 264(28)
  02ff840  lfs 6, 8(30)
  02ff844  lis 3, 114
  02ff848  fmadds 1, 3, 3, 1
  02ff84c  fmadds 2, 4, 4, 2
  02ff850  lfs 3, -3064(3)
  02ff854  fmadds 1, 5, 5, 1
  02ff858  fmadds 2, 6, 6, 2
  02ff85c  fsqrts 1, 1
  02ff860  fsqrts 2, 2
  02ff864  fmadds 1, 3, 31, 1
  02ff868  fcmpu 0, 2, 1
  02ff86c  cror 6, 1, 2
  02ff870  bt 6, 0x2ff8d8
  02ff874  lhz 3, 56(30)
  02ff878  addic 3, 3, 1
  02ff87c  sth 3, 56(30)
  02ff880  lwz 4, 24(29)
  02ff884  cmpwi 4, 0
  02ff888  bt 2, 0x2ff8c8
  02ff88c  lwz 4, 28(29)
  02ff890  cmpwi 4, 0
  02ff894  bt 1, 0x2ff8c8
  02ff898  lis 4, 48
  02ff89c  lis 5, 114
  02ff8a0  addi 4, 4, -3620
  02ff8a4  extsh 3, 3
  02ff8a8  lfs 1, 44(4)
  02ff8ac  lfs 2, -3056(5)
  02ff8b0  fmuls 1, 2, 1
  02ff8b4  fctiwz 1, 1
  02ff8b8  stfd 1, 208(1)
  02ff8bc  lwz 4, 212(1)
  02ff8c0  cmpw 3, 4
  02ff8c4  bf 1, 0x2ff8d8
  02ff8c8  li 3, 3
  02ff8cc  li 4, 0
  02ff8d0  stb 3, 32(31)
  02ff8d4  sth 4, 56(30)
  02ff8d8  lwz 3, 764(28)
  02ff8dc  cmpwi 3, 0
  02ff8e0  bt 2, 0x2ff924
  02ff8e4  bl 0x1122ac
  02ff8e8  nop
  02ff8ec  cmpwi 3, 0
  02ff8f0  bt 2, 0x2ff924
  02ff8f4  lfs 1, 0(30)
  02ff8f8  lfs 2, 256(28)
  02ff8fc  fadds 1, 1, 2
  02ff900  lfs 2, 4(30)
  02ff904  lfs 3, 8(30)
  02ff908  stfs 1, 0(30)
  02ff90c  lfs 1, 260(28)
  02ff910  fadds 1, 2, 1
  02ff914  stfs 1, 4(30)
  02ff918  lfs 1, 264(28)
  02ff91c  fadds 1, 3, 1
  02ff920  stfs 1, 8(30)
  02ff924  lfs 1, 16(31)
  02ff928  lfs 2, 0(30)
  02ff92c  fadds 1, 1, 2
  02ff930  lfs 2, 20(31)
  02ff934  lfs 3, 24(31)
  02ff938  ori 3, 31, 0
  02ff93c  stfs 1, 16(31)
  02ff940  lfs 1, 4(30)
  02ff944  fadds 1, 2, 1
  02ff948  stfs 1, 20(31)
  02ff94c  lfs 1, 8(30)
  02ff950  fadds 1, 3, 1
  02ff954  stfs 1, 24(31)
  02ff958  bl 0x2fe0f0
  02ff95c  b 0x3000e8
  02ff960  addic 3, 1, 112
  02ff964  lwz 6, 8320(28)
  02ff968  li 7, 0
  02ff96c  addic 4, 1, 128
  02ff970  li 5, 0
  02ff974  bl 0x57820
  02ff978  nop
  02ff97c  cmpwi 3, 0
  02ff980  bt 2, 0x2ffb90
  02ff984  lis 29, 161
  02ff988  lis 27, 114
  02ff98c  addic 29, 29, 2368
  02ff990  ori 4, 30, 0
  02ff994  lfs 1, 32(29)
  02ff998  stfs 1, 16(31)
  02ff99c  lfs 1, 36(29)
  02ff9a0  stfs 1, 20(31)
  02ff9a4  lfs 1, 40(29)
  02ff9a8  stfs 1, 24(31)
  02ff9ac  lfs 2, 44(29)
  02ff9b0  stfs 2, 28(31)
  02ff9b4  lfs 2, -3064(27)
  02ff9b8  lfs 3, 44(31)
  02ff9bc  fmuls 2, 2, 25
  02ff9c0  lwz 3, 36(31)
  02ff9c4  addic 5, 29, 64
  02ff9c8  lfs 4, 36(3)
  02ff9cc  fmuls 2, 2, 3
  02ff9d0  ori 3, 30, 0
  02ff9d4  fdivs 2, 2, 4
  02ff9d8  fadds 1, 1, 2
  02ff9dc  stfs 1, 24(31)
  02ff9e0  bl 0x500608
  02ff9e4  nop
  02ff9e8  lfs 1, 4(30)
  02ff9ec  lfs 2, 0(30)
  02ff9f0  fmuls 1, 1, 30
  02ff9f4  lfs 3, 8(30)
  02ff9f8  fmuls 2, 2, 30
  02ff9fc  fmuls 3, 3, 30
  02ffa00  lis 3, 48
  02ffa04  addi 3, 3, -3620
  02ffa08  fmuls 4, 1, 1
  02ffa0c  stfs 2, 0(30)
  02ffa10  stfs 1, 4(30)
  02ffa14  stfs 3, 8(30)
  02ffa18  lfs 30, 40(3)
  02ffa1c  fmadds 4, 2, 2, 4
  02ffa20  lfs 2, -3064(27)
  02ffa24  fmuls 2, 2, 30
  02ffa28  fmadds 1, 3, 3, 4
  02ffa2c  fsqrts 1, 1
  02ffa30  fcmpu 0, 1, 2
  02ffa34  bt 0, 0x2ffaa4
  02ffa38  lwz 3, 764(28)
  02ffa3c  cmpwi 3, 0
  02ffa40  bt 2, 0x2ffb08
  02ffa44  bl 0x1122ac
  02ffa48  nop
  02ffa4c  cmpwi 3, 0
  02ffa50  bt 2, 0x2ffb08
  02ffa54  lfs 1, 260(28)
  02ffa58  lfs 2, 4(30)
  02ffa5c  fmuls 1, 1, 1
  02ffa60  lfs 3, 256(28)
  02ffa64  fmuls 2, 2, 2
  02ffa68  lfs 4, 0(30)
  02ffa6c  lfs 5, 264(28)
  02ffa70  lfs 6, 8(30)
  02ffa74  lis 3, 114
  02ffa78  fmadds 1, 3, 3, 1
  02ffa7c  fmadds 2, 4, 4, 2
  02ffa80  lfs 3, -3064(3)
  02ffa84  fmadds 1, 5, 5, 1
  02ffa88  fmadds 2, 6, 6, 2
  02ffa8c  fsqrts 1, 1
  02ffa90  fsqrts 2, 2
  02ffa94  fmadds 1, 3, 30, 1
  02ffa98  fcmpu 0, 2, 1
  02ffa9c  cror 6, 1, 2
  02ffaa0  bt 6, 0x2ffb08
  02ffaa4  lhz 3, 56(30)
  02ffaa8  addic 3, 3, 1
  02ffaac  sth 3, 56(30)
  02ffab0  lwz 4, 24(29)
  02ffab4  cmpwi 4, 0
  02ffab8  bt 2, 0x2ffaf8
  02ffabc  lwz 4, 28(29)
  02ffac0  cmpwi 4, 0
  02ffac4  bt 1, 0x2ffaf8
  02ffac8  lis 4, 48
  02ffacc  lis 5, 114
  02ffad0  addi 4, 4, -3620
  02ffad4  extsh 3, 3
  02ffad8  lfs 1, 44(4)
  02ffadc  lfs 2, -3056(5)
  02ffae0  fmuls 1, 2, 1
  02ffae4  fctiwz 1, 1
  02ffae8  stfd 1, 208(1)
  02ffaec  lwz 4, 212(1)
  02ffaf0  cmpw 3, 4
  02ffaf4  bf 1, 0x2ffb08
  02ffaf8  li 3, 3
  02ffafc  li 4, 0
  02ffb00  stb 3, 32(31)
  02ffb04  sth 4, 56(30)
  02ffb08  lwz 3, 764(28)
  02ffb0c  cmpwi 3, 0
  02ffb10  bt 2, 0x2ffb54
  02ffb14  bl 0x1122ac
  02ffb18  nop
  02ffb1c  cmpwi 3, 0
  02ffb20  bt 2, 0x2ffb54
  02ffb24  lfs 1, 0(30)
  02ffb28  lfs 2, 256(28)
  02ffb2c  fadds 1, 1, 2
  02ffb30  lfs 2, 4(30)
  02ffb34  lfs 3, 8(30)
  02ffb38  stfs 1, 0(30)
  02ffb3c  lfs 1, 260(28)
  02ffb40  fadds 1, 2, 1
  02ffb44  stfs 1, 4(30)
  02ffb48  lfs 1, 264(28)
  02ffb4c  fadds 1, 3, 1
  02ffb50  stfs 1, 8(30)
  02ffb54  lfs 1, 16(31)
  02ffb58  lfs 2, 0(30)
  02ffb5c  ori 3, 31, 0
  02ffb60  fadds 1, 1, 2
  02ffb64  lfs 2, 20(31)
  02ffb68  lfs 3, 24(31)
  02ffb6c  stfs 1, 16(31)
  02ffb70  lfs 1, 4(30)
  02ffb74  fadds 1, 2, 1
  02ffb78  stfs 1, 20(31)
  02ffb7c  lfs 1, 8(30)
  02ffb80  fadds 1, 3, 1
  02ffb84  stfs 1, 24(31)
  02ffb88  bl 0x2fe0f0
  02ffb8c  b 0x3000e8
  02ffb90  stfs 29, 16(31)
  02ffb94  stfs 28, 20(31)
  02ffb98  stfs 27, 24(31)
  02ffb9c  stfs 26, 28(31)
  02ffba0  b 0x3000e8
  02ffba4  lis 3, 48
  02ffba8  addic 29, 31, 16
  02ffbac  addi 27, 3, -3620
  02ffbb0  ori 3, 29, 0
  02ffbb4  li 4, 0
  02ffbb8  lfs 1, 20(27)
  02ffbbc  bl 0xffb70
  02ffbc0  nop
  02ffbc4  lfs 2, 0(27)
  02ffbc8  fcmpu 0, 1, 2
  02ffbcc  bt 2, 0x2ffc04
  02ffbd0  lis 3, 161
  02ffbd4  addic 3, 3, 2368
  02ffbd8  lwz 3, 24(3)
  02ffbdc  cmpwi 3, 0
  02ffbe0  bt 2, 0x2ffc04
  02ffbe4  addic 6, 31, 64
  02ffbe8  ori 4, 3, 0
  02ffbec  ori 3, 31, 0
  02ffbf0  ori 5, 29, 0
  02ffbf4  ori 7, 29, 0
  02ffbf8  ori 8, 6, 0
  02ffbfc  bl 0x1122e0
  02ffc00  nop
  02ffc04  addic 3, 30, 56
  02ffc08  bl 0x4fffb4
  02ffc0c  nop
  02ffc10  cmpwi 3, 0
  02ffc14  bt 2, 0x2fffdc
  02ffc18  lis 5, 164
  02ffc1c  li 4, 0
  02ffc20  ori 3, 4, 0
  02ffc24  lwz 5, -28500(5)
  02ffc28  cmpwi 5, 0
  02ffc2c  bt 2, 0x2ffcb8
  02ffc30  lhz 6, 166(5)
  02ffc34  cmpwi 6, 186
  02ffc38  bf 2, 0x2ffc64
  02ffc3c  lbz 6, 32(5)
  02ffc40  rlwinm 6, 6, 0, 24, 27
  02ffc44  cmpwi 6, 240
  02ffc48  bt 2, 0x2ffc64
  02ffc4c  lwz 6, 120(5)
  02ffc50  addic 4, 4, 1
  02ffc54  lwz 6, 52(6)
  02ffc58  cmpw 3, 6
  02ffc5c  bf 0, 0x2ffc64
  02ffc60  ori 3, 6, 0
  02ffc64  lwz 5, 40(5)
  02ffc68  cmpwi 5, 0
  02ffc6c  bf 2, 0x2ffc30
  02ffc70  cmpwi 4, 7
  02ffc74  bf 1, 0x2ffcb8
  02ffc78  lis 3, 48
  02ffc7c  li 4, 48
  02ffc80  vspltisw 2, -1
  02ffc84  addi 3, 3, -3620
  02ffc88  lis 5, 114
  02ffc8c  li 6, -3056
  02ffc90  vslw 2, 2, 2
  02ffc94  lvlx 3, 4, 3
  02ffc98  li 3, 56
  02ffc9c  vspltw 3, 3, 0
  02ffca0  lvlx 4, 6, 5
  02ffca4  vmaddfp 2, 4, 3, 2
  02ffca8  vctsxs 2, 2, 0
  02ffcac  vsplth 2, 2, 1
  02ffcb0  stvehx 2, 3, 30
  02ffcb4  b 0x2fffdc
  02ffcb8  li 3, 60
  02ffcbc  lis 6, 48
  02ffcc0  addi 4, 3, 16
  02ffcc4  li 5, 52
  02ffcc8  lvlx 2, 3, 30
  02ffccc  lvrx 3, 4, 30
  02ffcd0  addi 4, 6, -3620
  02ffcd4  vor 2, 2, 3
  02ffcd8  li 6, 8
  02ffcdc  vspltisw 3, -1
  02ffce0  vcfsx 2, 2, 0
  02ffce4  lvlx 4, 5, 4
  02ffce8  vslw 3, 3, 3
  02ffcec  vspltw 4, 4, 0
  02ffcf0  li 5, 56
  02ffcf4  lvlx 5, 6, 4
  02ffcf8  li 6, 60
  02ffcfc  vspltw 5, 5, 0
  02ffd00  lvlx 6, 5, 4
  02ffd04  li 5, 64
  02ffd08  vspltw 6, 6, 0
  02ffd0c  vmaddfp 2, 2, 4, 3
  02ffd10  lvlx 3, 6, 4
  02ffd14  vspltw 7, 3, 0
  02ffd18  lvlx 3, 5, 4
  02ffd1c  vspltisw 10, -1
  02ffd20  vspltw 8, 3, 0
  02ffd24  vspltisw 3, -1
  02ffd28  li 5, 68
  02ffd2c  li 6, 76
  02ffd30  vslw 10, 10, 10
  02ffd34  vmaddfp 2, 2, 5, 6
  02ffd38  vslw 3, 3, 3
  02ffd3c  lvlx 11, 5, 4
  02ffd40  li 7, -3064
  02ffd44  li 5, 72
  02ffd48  vspltisw 13, -1
  02ffd4c  vspltisw 1, -1
  02ffd50  vspltisw 15, -1
  02ffd54  vslw 13, 13, 13
  02ffd58  vslw 1, 1, 1
  02ffd5c  vsubfp 6, 7, 2
  02ffd60  vsubfp 9, 8, 2
  02ffd64  vcmpgtfp 12, 6, 2
  02ffd68  vsel 2, 6, 2, 12
  02ffd6c  lvlx 12, 5, 4
  02ffd70  lvlx 0, 6, 4
  02ffd74  vcmpgtfp 6, 2, 9
  02ffd78  vspltw 12, 12, 0
  02ffd7c  vsel 2, 9, 2, 6
  02ffd80  li 5, 80
  02ffd84  vspltisw 6, -1
  02ffd88  vspltw 9, 11, 0
  02ffd8c  vspltisw 11, -1
  02ffd90  vmaddfp 3, 2, 2, 3
  02ffd94  vslw 6, 6, 6
  02ffd98  lis 6, 114
  02ffd9c  vspltw 0, 0, 0
  02ffda0  vslw 11, 11, 11
  02ffda4  vmaddfp 10, 3, 2, 10
  02ffda8  vmaddfp 6, 3, 10, 6
  02ffdac  vmaddfp 2, 10, 9, 2
  02ffdb0  lvlx 10, 5, 4
  02ffdb4  li 5, 12
  02ffdb8  vspltw 10, 10, 0
  02ffdbc  vmaddfp 11, 3, 6, 11
  02ffdc0  vmaddfp 2, 6, 12, 2
  02ffdc4  lvlx 6, 5, 4
  02ffdc8  lvlx 14, 7, 6
  02ffdcc  vspltw 6, 6, 0
  02ffdd0  li 5, 192
  02ffdd4  addi 7, 3, 16
  02ffdd8  vmaddfp 3, 3, 11, 13
  02ffddc  vmaddfp 2, 11, 0, 2
  02ffde0  vslw 13, 15, 15
  02ffde4  vmaddfp 11, 14, 6, 1
  02ffde8  vspltisw 1, -1
  02ffdec  vspltisw 15, -1
  02ffdf0  vmaddfp 3, 3, 10, 2
  02ffdf4  vslw 2, 1, 1
  02ffdf8  vspltisw 1, -1
  02ffdfc  vmaddfp 3, 11, 3, 13
  02ffe00  vslw 11, 1, 1
  02ffe04  vspltw 13, 3, 0
  02ffe08  stvewx 13, 5, 1
  02ffe0c  lvlx 13, 3, 30
  02ffe10  lvrx 1, 7, 30
  02ffe14  vor 13, 13, 1
  02ffe18  vspltisw 1, -1
  02ffe1c  vcfsx 13, 13, 0
  02ffe20  vslw 1, 1, 1
  02ffe24  li 5, 196
  02ffe28  lfs 1, -3064(6)
  02ffe2c  lwz 3, 764(28)
  02ffe30  cmpwi 3, 0
  02ffe34  vmaddfp 2, 13, 4, 2
  02ffe38  vslw 4, 15, 15
  02ffe3c  vspltisw 13, -1
  02ffe40  vmaddfp 2, 2, 5, 11
  02ffe44  vslw 5, 13, 13
  02ffe48  vspltisw 11, -1
  02ffe4c  vspltisw 13, -1
  02ffe50  vsubfp 7, 7, 2
  02ffe54  vsubfp 8, 8, 2
  02ffe58  vcmpgtfp 15, 7, 2
  02ffe5c  vsel 2, 7, 2, 15
  02ffe60  vcmpgtfp 7, 2, 8
  02ffe64  vsel 2, 8, 2, 7
  02ffe68  vslw 8, 11, 11
  02ffe6c  vslw 11, 13, 13
  02ffe70  vmaddfp 7, 2, 2, 1
  02ffe74  vspltisw 13, -1
  02ffe78  vspltisw 1, -1
  02ffe7c  vslw 13, 13, 13
  02ffe80  vmaddfp 6, 14, 6, 13
  02ffe84  vmaddfp 4, 7, 2, 4
  02ffe88  vmaddfp 5, 7, 4, 5
  02ffe8c  vmaddfp 2, 4, 9, 2
  02ffe90  vslw 4, 1, 1
  02ffe94  vmaddfp 8, 7, 5, 8
  02ffe98  vmaddfp 2, 5, 12, 2
  02ffe9c  vmaddfp 5, 7, 8, 11
  02ffea0  vmaddfp 2, 8, 0, 2
  02ffea4  vmaddfp 2, 5, 10, 2
  02ffea8  vmaddfp 2, 6, 2, 4
  02ffeac  vspltw 4, 2, 0
  02ffeb0  stvewx 4, 5, 1
  02ffeb4  lfs 2, 84(4)
  02ffeb8  fmuls 1, 1, 2
  02ffebc  stfs 1, 200(1)
  02ffec0  bt 2, 0x2fff24
  02ffec4  bl 0x1122ac
  02ffec8  nop
  02ffecc  li 4, 192
  02ffed0  lfs 1, 200(1)
  02ffed4  li 5, 196
  02ffed8  cmpwi 3, 0
  02ffedc  lvlx 3, 4, 1
  02ffee0  lvlx 2, 5, 1
  02ffee4  bt 2, 0x2fff24
  02ffee8  li 3, 256
  02ffeec  li 4, 260
  02ffef0  li 5, 196
  02ffef4  lvlx 4, 3, 28
  02ffef8  lvlx 5, 4, 28
  02ffefc  vaddfp 3, 3, 4
  02fff00  lfs 2, 264(28)
  02fff04  vaddfp 2, 2, 5
  02fff08  li 3, 192
  02fff0c  fadds 1, 1, 2
  02fff10  vspltw 4, 3, 0
  02fff14  vspltw 5, 2, 0
  02fff18  stvewx 4, 3, 1
  02fff1c  stvewx 5, 5, 1
  02fff20  stfs 1, 200(1)
  02fff24  li 3, 16
  02fff28  vspltw 3, 3, 0
  02fff2c  li 4, 20
  02fff30  vspltw 2, 2, 0
  02fff34  li 6, 180
  02fff38  addic 5, 1, 192
  02fff3c  lvlx 4, 3, 31
  02fff40  lvlx 5, 4, 31
  02fff44  vaddfp 3, 3, 4
  02fff48  lfs 2, 24(31)
  02fff4c  vaddfp 2, 2, 5
  02fff50  li 3, 176
  02fff54  fadds 1, 1, 2
  02fff58  addic 4, 1, 176
  02fff5c  lfs 2, 204(1)
  02fff60  vspltw 3, 3, 0
  02fff64  vspltw 2, 2, 0
  02fff68  stvewx 3, 3, 1
  02fff6c  stvewx 2, 6, 1
  02fff70  stfs 1, 184(1)
  02fff74  stfs 2, 188(1)
  02fff78  lwz 3, 48(30)
  02fff7c  bl 0x2cb828
  02fff80  nop
  02fff84  lis 3, 48
  02fff88  vspltisw 2, -1
  02fff8c  li 4, 88
  02fff90  addi 3, 3, -3620
  02fff94  lis 5, 114
  02fff98  li 6, -3056
  02fff9c  vslw 2, 2, 2
  02fffa0  lvlx 3, 4, 3
  02fffa4  li 3, 56
  02fffa8  vspltw 3, 3, 0
  02fffac  lvlx 4, 6, 5
  02fffb0  vmaddfp 2, 4, 3, 2
  02fffb4  vctsxs 2, 2, 0
  02fffb8  vsplth 2, 2, 1
  02fffbc  stvehx 2, 3, 30
  02fffc0  lwz 3, 60(30)
  02fffc4  addic 3, 3, 1
  02fffc8  cmpwi 3, 4
  02fffcc  stw 3, 60(30)
  02fffd0  bt 0, 0x2fffdc
  02fffd4  li 3, 4
  02fffd8  stb 3, 32(31)
  02fffdc  lwz 3, 60(30)
  02fffe0  cmpwi 3, 2
  02fffe4  bf 0, 0x3000e8
  02fffe8  addic 3, 30, 52
  02fffec  bl 0x4fff60
  02ffff0  nop
  02ffff4  cmpwi 3, 0
  02ffff8  bt 2, 0x3000e8
  02ffffc  lis 3, 48
  0300000  vspltisw 2, -1
  0300004  li 5, 4
  0300008  addi 3, 3, -3620
  030000c  lis 4, 114
  0300010  li 6, -3056
  0300014  vslw 2, 2, 2
  0300018  lvlx 3, 5, 3
  030001c  vspltw 3, 3, 0
  0300020  lvlx 4, 6, 4
  0300024  li 4, 52
  0300028  vmaddfp 2, 4, 3, 2
  030002c  ori 3, 31, 0
  0300030  vctsxs 2, 2, 0
  0300034  vspltw 2, 2, 0
  0300038  stvewx 2, 4, 30
  030003c  bl 0x129f28
  0300040  nop
  0300044  b 0x3000e8
  0300048  lis 3, 48
  030004c  lfs 1, 44(31)
  0300050  addic 30, 31, 16
  0300054  addi 29, 3, -3620
  0300058  li 4, 0
  030005c  lfs 2, 92(29)
  0300060  lbz 3, 35(31)
  0300064  fmuls 1, 1, 2
  0300068  addic 5, 3, -4
  030006c  ori 3, 30, 0
  0300070  stb 5, 35(31)
  0300074  stfs 1, 44(31)
  0300078  lfs 1, 20(29)
  030007c  bl 0xffb70
  0300080  nop
  0300084  lfs 2, 0(29)
  0300088  fcmpu 0, 1, 2
  030008c  bt 2, 0x3000c4
  0300090  lis 3, 161
  0300094  addic 3, 3, 2368
  0300098  lwz 3, 24(3)
  030009c  cmpwi 3, 0
  03000a0  bt 2, 0x3000c4
  03000a4  addic 6, 31, 64
  03000a8  ori 4, 3, 0
  03000ac  ori 3, 31, 0
  03000b0  ori 5, 30, 0
  03000b4  ori 7, 30, 0
  03000b8  ori 8, 6, 0
  03000bc  bl 0x1122e0
  03000c0  nop
  03000c4  lbz 3, 35(31)
  03000c8  cmpwi 3, 0
  03000cc  bt 1, 0x3000e8
  03000d0  ori 3, 31, 0
  03000d4  bl 0xefb38
  03000d8  nop
  03000dc  b 0x3000e8
  03000e0  li 3, 0
  03000e4  stb 3, 32(31)
  03000e8  ld 0, 352(1)
  03000ec  mtlr 0
  03000f0  lfd 24, 272(1)
  03000f4  lfd 25, 280(1)
  03000f8  lfd 26, 288(1)
  03000fc  lfd 27, 296(1)
  0300100  lfd 28, 304(1)
  0300104  lfd 29, 312(1)
  0300108  lfd 30, 320(1)
  030010c  lfd 31, 328(1)
  0300110  ld 27, 232(1)
  0300114  ld 28, 240(1)
  0300118  ld 29, 248(1)
  030011c  ld 30, 256(1)
  0300120  ld 31, 264(1)
  0300124  addi 1, 1, 336
  0300128  blr
