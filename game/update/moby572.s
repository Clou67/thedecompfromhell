# game/update/moby572.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M866_003bd678:   # 0x3bd678, 0x14 bytes
  03bd678  lis 3, 132
  03bd67c  lis 4, 1
  03bd680  addic 3, 3, 23992
  03bd684  stw 4, 72(3)
  03bd688  blr

M866_003bd6c0:   # 0x3bd6c0, 0x4ec bytes
  03bd6c0  stdu 1, -352(1)
  03bd6c4  mflr 0
  03bd6c8  std 0, 368(1)
  03bd6cc  stfd 26, 304(1)
  03bd6d0  stfd 27, 312(1)
  03bd6d4  stfd 28, 320(1)
  03bd6d8  stfd 29, 328(1)
  03bd6dc  stfd 30, 336(1)
  03bd6e0  stfd 31, 344(1)
  03bd6e4  std 31, 296(1)
  03bd6e8  std 27, 264(1)
  03bd6ec  lis 5, 132
  03bd6f0  ori 31, 4, 0
  03bd6f4  std 30, 288(1)
  03bd6f8  li 27, 0
  03bd6fc  std 29, 280(1)
  03bd700  ori 30, 3, 0
  03bd704  ori 29, 27, 0
  03bd708  std 26, 256(1)
  03bd70c  lwz 4, 24184(5)
  03bd710  lwz 26, 120(3)
  03bd714  std 28, 272(1)
  03bd718  std 25, 248(1)
  03bd71c  std 24, 240(1)
  03bd720  std 23, 232(1)
  03bd724  std 22, 224(1)
  03bd728  std 21, 216(1)
  03bd72c  std 20, 208(1)
  03bd730  std 19, 200(1)
  03bd734  cmpwi 4, 0
  03bd738  bf 1, 0x3bdb50
  03bd73c  lfs 1, 16(30)
  03bd740  lis 4, 132
  03bd744  lfs 2, 20(30)
  03bd748  addic 3, 1, 128
  03bd74c  stfs 1, 128(1)
  03bd750  lfs 1, 24(30)
  03bd754  stfs 2, 132(1)
  03bd758  lfs 2, 28(30)
  03bd75c  stfs 1, 136(1)
  03bd760  stfs 2, 140(1)
  03bd764  lfs 1, 592(26)
  03bd768  lfs 2, 24192(4)
  03bd76c  fmuls 1, 2, 1
  03bd770  bl 0x110950
  03bd774  nop
  03bd778  lis 3, 60
  03bd77c  lfs 1, 136(1)
  03bd780  addi 28, 3, -10608
  03bd784  lfs 27, 0(28)
  03bd788  fadds 1, 1, 27
  03bd78c  stfs 1, 136(1)
  03bd790  bl 0xfcc68
  03bd794  nop
  03bd798  lis 3, 132
  03bd79c  lis 4, 132
  03bd7a0  fmr 31, 1
  03bd7a4  lfs 1, 24204(3)
  03bd7a8  lfs 2, 24208(4)
  03bd7ac  bl 0xfcbe8
  03bd7b0  nop
  03bd7b4  lis 3, 132
  03bd7b8  fmr 30, 1
  03bd7bc  lis 4, 132
  03bd7c0  lfs 1, 24212(3)
  03bd7c4  lfs 2, 24216(4)
  03bd7c8  bl 0xfcbe8
  03bd7cc  nop
  03bd7d0  lis 3, 269
  03bd7d4  lfs 28, 4(28)
  03bd7d8  fmr 29, 1
  03bd7dc  fmr 1, 28
  03bd7e0  lfs 2, -24748(3)
  03bd7e4  bl 0xfcbe8
  03bd7e8  nop
  03bd7ec  lis 3, 114
  03bd7f0  lfs 2, 0(31)
  03bd7f4  lfs 3, -3052(3)
  03bd7f8  fmuls 1, 1, 3
  03bd7fc  lis 3, 132
  03bd800  lis 4, 114
  03bd804  fmuls 2, 2, 1
  03bd808  stfs 2, 144(1)
  03bd80c  lfs 4, 4(31)
  03bd810  fmuls 4, 4, 1
  03bd814  stfs 4, 148(1)
  03bd818  lfs 5, 8(31)
  03bd81c  fmuls 1, 5, 1
  03bd820  stfs 1, 152(1)
  03bd824  lfs 5, 12(31)
  03bd828  stfs 5, 156(1)
  03bd82c  lfs 6, 8(28)
  03bd830  lfs 7, 12(28)
  03bd834  fadds 6, 31, 6
  03bd838  lfs 8, 16(28)
  03bd83c  fsubs 9, 7, 31
  03bd840  fmadds 1, 3, 29, 1
  03bd844  fsubs 7, 7, 6
  03bd848  fsub 11, 31, 9
  03bd84c  fsubs 10, 8, 6
  03bd850  fsubs 8, 8, 31
  03bd854  fsub 12, 6, 7
  03bd858  fsel 9, 11, 9, 31
  03bd85c  lfs 11, 20(28)
  03bd860  fsel 6, 12, 7, 6
  03bd864  fsub 7, 8, 9
  03bd868  fsub 13, 10, 6
  03bd86c  fsel 7, 7, 8, 9
  03bd870  lfs 8, 24(28)
  03bd874  lfs 9, 28(28)
  03bd878  lfs 0, 32(28)
  03bd87c  lwz 3, 24252(3)
  03bd880  extsw 3, 3
  03bd884  fsel 6, 13, 10, 6
  03bd888  fmuls 10, 7, 7
  03bd88c  std 3, 176(1)
  03bd890  stfs 5, 172(1)
  03bd894  stfs 1, 152(1)
  03bd898  lis 3, 114
  03bd89c  stfs 1, 168(1)
  03bd8a0  fmuls 12, 6, 6
  03bd8a4  fmuls 13, 10, 7
  03bd8a8  fmuls 31, 12, 6
  03bd8ac  fmuls 26, 10, 13
  03bd8b0  fmadds 7, 13, 11, 7
  03bd8b4  fmuls 13, 12, 31
  03bd8b8  fmadds 6, 31, 11, 6
  03bd8bc  fmuls 11, 10, 26
  03bd8c0  fmadds 7, 26, 8, 7
  03bd8c4  fmuls 31, 3, 30
  03bd8c8  fmuls 26, 12, 13
  03bd8cc  fmadds 6, 13, 8, 6
  03bd8d0  fmuls 8, 10, 11
  03bd8d4  fmadds 7, 11, 9, 7
  03bd8d8  fmuls 10, 3, 30
  03bd8dc  fmuls 11, 12, 26
  03bd8e0  fmadds 6, 26, 9, 6
  03bd8e4  fmadds 7, 8, 0, 7
  03bd8e8  fmadds 3, 11, 0, 6
  03bd8ec  fmadds 4, 10, 7, 4
  03bd8f0  fmadds 2, 31, 3, 2
  03bd8f4  stfs 4, 148(1)
  03bd8f8  stfs 4, 164(1)
  03bd8fc  lfd 3, 176(1)
  03bd900  fcfid 3, 3
  03bd904  stfs 2, 144(1)
  03bd908  stfs 2, 160(1)
  03bd90c  lfs 29, 36(28)
  03bd910  ori 28, 29, 0
  03bd914  frsp 2, 3
  03bd918  lfs 3, -3056(3)
  03bd91c  lis 3, 132
  03bd920  lfs 4, 24220(3)
  03bd924  lfs 5, -3048(4)
  03bd928  lis 3, 132
  03bd92c  fadds 2, 2, 29
  03bd930  fmuls 4, 4, 5
  03bd934  lwz 3, 24188(3)
  03bd938  cmpwi 3, 0
  03bd93c  fmuls 2, 3, 2
  03bd940  fctidz 2, 2
  03bd944  fcfid 2, 2
  03bd948  frsp 2, 2
  03bd94c  fnmsubs 1, 4, 2, 1
  03bd950  stfs 1, 168(1)
  03bd954  bf 1, 0x3bdb3c
  03bd958  lis 3, 60
  03bd95c  addi 3, 3, -10608
  03bd960  lfs 30, 40(3)
  03bd964  lfs 31, 44(3)
  03bd968  fmr 1, 29
  03bd96c  fmr 2, 30
  03bd970  bl 0xfcbe8
  03bd974  nop
  03bd978  lis 3, 132
  03bd97c  lis 4, 132
  03bd980  lis 5, 132
  03bd984  addic 25, 1, 128
  03bd988  lfs 2, 24224(3)
  03bd98c  lfs 3, 24228(4)
  03bd990  ori 3, 25, 0
  03bd994  fmuls 2, 2, 1
  03bd998  fmuls 3, 3, 1
  03bd99c  lfs 1, 24196(5)
  03bd9a0  stfs 2, 156(1)
  03bd9a4  stfs 3, 172(1)
  03bd9a8  bl 0x110950
  03bd9ac  nop
  03bd9b0  lis 4, 132
  03bd9b4  lis 5, 114
  03bd9b8  addic 24, 1, 160
  03bd9bc  ori 3, 24, 0
  03bd9c0  lfs 1, 24200(4)
  03bd9c4  lfs 2, -3052(5)
  03bd9c8  fmuls 1, 1, 2
  03bd9cc  bl 0x110950
  03bd9d0  nop
  03bd9d4  lis 3, 132
  03bd9d8  fmr 1, 28
  03bd9dc  lis 4, 132
  03bd9e0  fmr 2, 27
  03bd9e4  lwz 3, 24232(3)
  03bd9e8  lwz 4, 24240(4)
  03bd9ec  extsw 23, 3
  03bd9f0  extsw 22, 4
  03bd9f4  bl 0xfcbe8
  03bd9f8  nop
  03bd9fc  ori 4, 22, 0
  03bda00  ori 3, 23, 0
  03bda04  bl 0x5027bc
  03bda08  nop
  03bda0c  lis 4, 132
  03bda10  fmr 1, 28
  03bda14  lis 5, 132
  03bda18  fmr 2, 27
  03bda1c  ori 23, 3, 0
  03bda20  lwz 3, 24236(4)
  03bda24  lwz 4, 24244(5)
  03bda28  extsw 22, 3
  03bda2c  extsw 21, 4
  03bda30  bl 0xfcbe8
  03bda34  nop
  03bda38  ori 4, 21, 0
  03bda3c  ori 3, 22, 0
  03bda40  bl 0x5027bc
  03bda44  nop
  03bda48  lis 4, 132
  03bda4c  lis 22, 114
  03bda50  lis 5, 132
  03bda54  lwz 4, 24248(4)
  03bda58  extsw 4, 4
  03bda5c  std 4, 176(1)
  03bda60  lis 4, 132
  03bda64  lfs 1, -3056(22)
  03bda68  ori 21, 3, 0
  03bda6c  lwz 4, 24252(4)
  03bda70  lfd 2, 176(1)
  03bda74  fcfid 2, 2
  03bda78  extsw 4, 4
  03bda7c  frsp 2, 2
  03bda80  fadds 2, 2, 29
  03bda84  fmuls 2, 1, 2
  03bda88  fctiwz 2, 2
  03bda8c  stfd 2, 176(1)
  03bda90  lwz 6, 180(1)
  03bda94  std 4, 176(1)
  03bda98  lwz 4, 24256(5)
  03bda9c  lfd 2, 176(1)
  03bdaa0  fcfid 2, 2
  03bdaa4  extsw 4, 4
  03bdaa8  extsw 20, 6
  03bdaac  frsp 2, 2
  03bdab0  fadds 2, 2, 29
  03bdab4  fmuls 1, 1, 2
  03bdab8  fctiwz 1, 1
  03bdabc  stfd 1, 176(1)
  03bdac0  lwz 3, 180(1)
  03bdac4  std 4, 176(1)
  03bdac8  extsw 19, 3
  03bdacc  lfd 1, 176(1)
  03bdad0  fcfid 1, 1
  03bdad4  frsp 2, 1
  03bdad8  fmuls 1, 2, 29
  03bdadc  fmuls 2, 2, 31
  03bdae0  bl 0xfcbe8
  03bdae4  nop
  03bdae8  lfs 2, -3056(22)
  03bdaec  fmuls 1, 1, 2
  03bdaf0  bl 0x502758
  03bdaf4  nop
  03bdaf8  li 7, -1
  03bdafc  ori 10, 3, 0
  03bdb00  ori 3, 25, 0
  03bdb04  ori 5, 24, 0
  03bdb08  std 7, 112(1)
  03bdb0c  ori 6, 23, 0
  03bdb10  addic 4, 1, 144
  03bdb14  ori 9, 19, 0
  03bdb18  ori 7, 21, 0
  03bdb1c  ori 8, 20, 0
  03bdb20  bl 0x1206e8
  03bdb24  nop
  03bdb28  lis 3, 132
  03bdb2c  addic 28, 28, 1
  03bdb30  lwz 3, 24188(3)
  03bdb34  cmpw 28, 3
  03bdb38  bt 0, 0x3bd968
  03bdb3c  lis 3, 132
  03bdb40  addic 27, 27, 1
  03bdb44  lwz 3, 24184(3)
  03bdb48  cmpw 27, 3
  03bdb4c  bt 0, 0x3bd73c
  03bdb50  ld 0, 368(1)
  03bdb54  mtlr 0
  03bdb58  lfd 26, 304(1)
  03bdb5c  lfd 27, 312(1)
  03bdb60  lfd 28, 320(1)
  03bdb64  lfd 29, 328(1)
  03bdb68  lfd 30, 336(1)
  03bdb6c  lfd 31, 344(1)
  03bdb70  ld 19, 200(1)
  03bdb74  ld 20, 208(1)
  03bdb78  ld 21, 216(1)
  03bdb7c  ld 22, 224(1)
  03bdb80  ld 23, 232(1)
  03bdb84  ld 24, 240(1)
  03bdb88  ld 25, 248(1)
  03bdb8c  ld 26, 256(1)
  03bdb90  ld 27, 264(1)
  03bdb94  ld 28, 272(1)
  03bdb98  ld 29, 280(1)
  03bdb9c  ld 30, 288(1)
  03bdba0  ld 31, 296(1)
  03bdba4  addi 1, 1, 352
  03bdba8  blr

M866_003bdbd0:   # 0x3bdbd0, 0x46c bytes
  03bdbd0  stdu 1, -288(1)
  03bdbd4  mflr 0
  03bdbd8  std 0, 304(1)
  03bdbdc  stfd 19, 184(1)
  03bdbe0  stfd 20, 192(1)
  03bdbe4  stfd 21, 200(1)
  03bdbe8  stfd 22, 208(1)
  03bdbec  stfd 23, 216(1)
  03bdbf0  stfd 24, 224(1)
  03bdbf4  stfd 25, 232(1)
  03bdbf8  stfd 26, 240(1)
  03bdbfc  stfd 27, 248(1)
  03bdc00  stfd 28, 256(1)
  03bdc04  stfd 29, 264(1)
  03bdc08  stfd 30, 272(1)
  03bdc0c  stfd 31, 280(1)
  03bdc10  std 31, 176(1)
  03bdc14  lbz 4, 49(3)
  03bdc18  std 30, 168(1)
  03bdc1c  ori 31, 3, 0
  03bdc20  lwz 30, 120(3)
  03bdc24  std 29, 160(1)
  03bdc28  cmpwi 4, 0
  03bdc2c  bt 2, 0x3bdfec
  03bdc30  lis 3, 132
  03bdc34  lwz 3, 24172(3)
  03bdc38  addic 3, 3, -1
  03bdc3c  extsw 3, 3
  03bdc40  bl 0xfc620
  03bdc44  nop
  03bdc48  lis 4, 60
  03bdc4c  cmpwi 3, 0
  03bdc50  addi 4, 4, -9300
  03bdc54  lfs 24, 0(4)
  03bdc58  lfs 25, 4(4)
  03bdc5c  lfs 23, 8(4)
  03bdc60  lfs 27, 12(4)
  03bdc64  lfs 29, 16(4)
  03bdc68  lfs 30, 20(4)
  03bdc6c  lfs 31, 24(4)
  03bdc70  lfs 28, 28(4)
  03bdc74  lfs 26, 32(4)
  03bdc78  bf 2, 0x3bde24
  03bdc7c  bl 0xfcc68
  03bdc80  nop
  03bdc84  fmr 22, 1
  03bdc88  fmr 1, 25
  03bdc8c  lis 3, 132
  03bdc90  lfs 2, 24180(3)
  03bdc94  bl 0xfcbe8
  03bdc98  nop
  03bdc9c  fmr 21, 1
  03bdca0  fmr 1, 25
  03bdca4  lis 29, 132
  03bdca8  lfs 2, 24132(29)
  03bdcac  bl 0xfcbe8
  03bdcb0  nop
  03bdcb4  lis 3, 132
  03bdcb8  lfs 2, 592(30)
  03bdcbc  lfs 3, 24132(29)
  03bdcc0  fmuls 20, 1, 2
  03bdcc4  fmr 1, 3
  03bdcc8  lfs 2, 24136(3)
  03bdccc  bl 0xfcbe8
  03bdcd0  nop
  03bdcd4  lis 3, 132
  03bdcd8  lis 4, 132
  03bdcdc  lwz 3, 24140(3)
  03bdce0  lwz 4, 24144(4)
  03bdce4  extsw 3, 3
  03bdce8  extsw 4, 4
  03bdcec  std 3, 144(1)
  03bdcf0  lfs 2, 592(30)
  03bdcf4  fmuls 19, 1, 2
  03bdcf8  lfd 1, 144(1)
  03bdcfc  std 4, 144(1)
  03bdd00  fcfid 1, 1
  03bdd04  frsp 1, 1
  03bdd08  lfd 2, 144(1)
  03bdd0c  fcfid 2, 2
  03bdd10  frsp 2, 2
  03bdd14  bl 0xfcbe8
  03bdd18  nop
  03bdd1c  bl 0x502758
  03bdd20  nop
  03bdd24  fadds 1, 22, 23
  03bdd28  fsubs 2, 26, 22
  03bdd2c  fsubs 3, 27, 22
  03bdd30  extsw 3, 3
  03bdd34  lis 4, 132
  03bdd38  addic 6, 1, 112
  03bdd3c  std 3, 144(1)
  03bdd40  fsubs 4, 26, 1
  03bdd44  fsub 5, 22, 2
  03bdd48  fsubs 6, 27, 1
  03bdd4c  lis 3, 114
  03bdd50  fsub 7, 1, 4
  03bdd54  fsel 2, 5, 2, 22
  03bdd58  fsel 1, 7, 4, 1
  03bdd5c  fsub 4, 3, 2
  03bdd60  fsub 5, 6, 1
  03bdd64  fsel 2, 4, 3, 2
  03bdd68  lfs 4, 16(31)
  03bdd6c  fsel 1, 5, 6, 1
  03bdd70  fmuls 3, 2, 2
  03bdd74  lfd 5, 144(1)
  03bdd78  lfs 8, 20(31)
  03bdd7c  fcfid 5, 5
  03bdd80  fmuls 6, 1, 1
  03bdd84  fmuls 7, 3, 2
  03bdd88  frsp 5, 5
  03bdd8c  fmuls 9, 6, 1
  03bdd90  fmuls 10, 3, 7
  03bdd94  fmadds 2, 7, 28, 2
  03bdd98  fadds 5, 5, 24
  03bdd9c  fmuls 7, 6, 9
  03bdda0  fmadds 1, 9, 28, 1
  03bdda4  fmuls 9, 3, 10
  03bdda8  fmadds 2, 10, 29, 2
  03bddac  lfs 10, 24(31)
  03bddb0  fmuls 11, 6, 7
  03bddb4  fmadds 1, 7, 29, 1
  03bddb8  fmuls 3, 3, 9
  03bddbc  lfs 7, -3056(3)
  03bddc0  fmadds 2, 9, 30, 2
  03bddc4  lis 3, 132
  03bddc8  stfs 10, 120(1)
  03bddcc  lwz 3, 24124(3)
  03bddd0  lwz 5, 24128(4)
  03bddd4  fmuls 6, 6, 11
  03bddd8  fmadds 1, 11, 30, 1
  03bdddc  extsw 4, 3
  03bdde0  extsw 5, 5
  03bdde4  fmadds 2, 3, 31, 2
  03bdde8  fmuls 3, 7, 5
  03bddec  ori 3, 6, 0
  03bddf0  fmadds 1, 6, 31, 1
  03bddf4  fmadds 2, 2, 21, 8
  03bddf8  fctiwz 3, 3
  03bddfc  fmadds 4, 1, 21, 4
  03bde00  fmr 1, 20
  03bde04  stfs 2, 116(1)
  03bde08  stfd 3, 144(1)
  03bde0c  fmr 2, 19
  03bde10  lwz 8, 148(1)
  03bde14  extsw 8, 8
  03bde18  stfs 4, 112(1)
  03bde1c  bl 0x12f6b0
  03bde20  nop
  03bde24  lis 3, 132
  03bde28  lwz 3, 24176(3)
  03bde2c  addic 3, 3, -1
  03bde30  extsw 3, 3
  03bde34  bl 0xfc620
  03bde38  nop
  03bde3c  cmpwi 3, 0
  03bde40  bf 2, 0x3bdfec
  03bde44  bl 0xfcc68
  03bde48  nop
  03bde4c  fmr 22, 1
  03bde50  fmr 1, 25
  03bde54  lis 3, 132
  03bde58  lfs 2, 24180(3)
  03bde5c  bl 0xfcbe8
  03bde60  nop
  03bde64  fmr 21, 1
  03bde68  fmr 1, 25
  03bde6c  lis 29, 132
  03bde70  lfs 2, 24156(29)
  03bde74  bl 0xfcbe8
  03bde78  nop
  03bde7c  lis 3, 132
  03bde80  lfs 2, 592(30)
  03bde84  lfs 3, 24156(29)
  03bde88  fmuls 25, 1, 2
  03bde8c  fmr 1, 3
  03bde90  lfs 2, 24160(3)
  03bde94  bl 0xfcbe8
  03bde98  nop
  03bde9c  lis 3, 132
  03bdea0  lis 4, 132
  03bdea4  lwz 3, 24164(3)
  03bdea8  lwz 4, 24168(4)
  03bdeac  extsw 3, 3
  03bdeb0  extsw 4, 4
  03bdeb4  std 3, 144(1)
  03bdeb8  lfs 2, 592(30)
  03bdebc  fmuls 20, 1, 2
  03bdec0  lfd 1, 144(1)
  03bdec4  std 4, 144(1)
  03bdec8  fcfid 1, 1
  03bdecc  frsp 1, 1
  03bded0  lfd 2, 144(1)
  03bded4  fcfid 2, 2
  03bded8  frsp 2, 2
  03bdedc  bl 0xfcbe8
  03bdee0  nop
  03bdee4  bl 0x502758
  03bdee8  nop
  03bdeec  fadds 1, 22, 23
  03bdef0  fsubs 2, 26, 22
  03bdef4  fsubs 3, 27, 22
  03bdef8  extsw 3, 3
  03bdefc  lis 4, 132
  03bdf00  addic 6, 1, 128
  03bdf04  std 3, 144(1)
  03bdf08  fsubs 4, 26, 1
  03bdf0c  fsub 5, 22, 2
  03bdf10  fsubs 6, 27, 1
  03bdf14  lis 3, 114
  03bdf18  fsub 7, 1, 4
  03bdf1c  fsel 2, 5, 2, 22
  03bdf20  fsel 1, 7, 4, 1
  03bdf24  fsub 4, 3, 2
  03bdf28  fsub 5, 6, 1
  03bdf2c  fsel 2, 4, 3, 2
  03bdf30  lfs 4, 16(31)
  03bdf34  fsel 1, 5, 6, 1
  03bdf38  fmuls 3, 2, 2
  03bdf3c  lfd 5, 144(1)
  03bdf40  lfs 8, 20(31)
  03bdf44  fcfid 5, 5
  03bdf48  fmuls 6, 1, 1
  03bdf4c  fmuls 7, 3, 2
  03bdf50  frsp 5, 5
  03bdf54  fmuls 9, 6, 1
  03bdf58  fmuls 10, 3, 7
  03bdf5c  fmadds 2, 7, 28, 2
  03bdf60  fadds 5, 5, 24
  03bdf64  fmuls 7, 6, 9
  03bdf68  fmadds 1, 9, 28, 1
  03bdf6c  fmuls 9, 3, 10
  03bdf70  fmadds 2, 10, 29, 2
  03bdf74  lfs 10, 24(31)
  03bdf78  fmuls 11, 6, 7
  03bdf7c  fmadds 1, 7, 29, 1
  03bdf80  fmuls 3, 3, 9
  03bdf84  lfs 7, -3056(3)
  03bdf88  fmadds 2, 9, 30, 2
  03bdf8c  lis 3, 132
  03bdf90  stfs 10, 136(1)
  03bdf94  lwz 3, 24148(3)
  03bdf98  lwz 5, 24152(4)
  03bdf9c  fmuls 6, 6, 11
  03bdfa0  fmadds 1, 11, 30, 1
  03bdfa4  extsw 4, 3
  03bdfa8  extsw 5, 5
  03bdfac  fmadds 2, 3, 31, 2
  03bdfb0  fmuls 3, 7, 5
  03bdfb4  ori 3, 6, 0
  03bdfb8  fmadds 1, 6, 31, 1
  03bdfbc  fmadds 2, 2, 21, 8
  03bdfc0  fctiwz 3, 3
  03bdfc4  fmadds 4, 1, 21, 4
  03bdfc8  fmr 1, 25
  03bdfcc  stfs 2, 132(1)
  03bdfd0  stfd 3, 144(1)
  03bdfd4  fmr 2, 20
  03bdfd8  lwz 8, 148(1)
  03bdfdc  extsw 8, 8
  03bdfe0  stfs 4, 128(1)
  03bdfe4  bl 0x12f6b0
  03bdfe8  nop
  03bdfec  ld 0, 304(1)
  03bdff0  mtlr 0
  03bdff4  lfd 19, 184(1)
  03bdff8  lfd 20, 192(1)
  03bdffc  lfd 21, 200(1)
  03be000  lfd 22, 208(1)
  03be004  lfd 23, 216(1)
  03be008  lfd 24, 224(1)
  03be00c  lfd 25, 232(1)
  03be010  lfd 26, 240(1)
  03be014  lfd 27, 248(1)
  03be018  lfd 28, 256(1)
  03be01c  lfd 29, 264(1)
  03be020  lfd 30, 272(1)
  03be024  lfd 31, 280(1)
  03be028  ld 29, 160(1)
  03be02c  ld 30, 168(1)
  03be030  ld 31, 176(1)
  03be034  addi 1, 1, 288
  03be038  blr

M866_003be040:   # 0x3be040, 0xd8 bytes
  03be040  lis 6, 60
  03be044  lis 5, 165
  03be048  sldi 4, 4, 2
  03be04c  addi 6, 6, -8132
  03be050  addic 5, 5, -28284
  03be054  extsw 4, 4
  03be058  lfs 2, 0(6)
  03be05c  lwzx 4, 5, 4
  03be060  cmpwi 4, 0
  03be064  bf 2, 0x3be070
  03be068  li 3, 0
  03be06c  b 0x3be114
  03be070  lis 5, 164
  03be074  li 7, 0
  03be078  lwz 5, -28512(5)
  03be07c  lhz 6, 0(4)
  03be080  rlwinm 6, 6, 8, 9, 23
  03be084  addc 6, 5, 6
  03be088  clrldi 6, 6, 32
  03be08c  lhz 8, 52(6)
  03be090  rlwinm 8, 8, 0, 19, 19
  03be094  cmpwi 8, 0
  03be098  bt 2, 0x3be0fc
  03be09c  lhz 8, 166(6)
  03be0a0  cmpwi 8, 623
  03be0a4  bf 2, 0x3be0fc
  03be0a8  lbz 8, 32(6)
  03be0ac  cmpwi 8, 127
  03be0b0  bf 0, 0x3be0fc
  03be0b4  lfs 1, 20(6)
  03be0b8  lfs 3, 20(3)
  03be0bc  lfs 4, 16(6)
  03be0c0  fsubs 1, 1, 3
  03be0c4  lfs 3, 16(3)
  03be0c8  fsubs 3, 4, 3
  03be0cc  lfs 4, 24(6)
  03be0d0  lfs 5, 24(3)
  03be0d4  fsubs 4, 4, 5
  03be0d8  fmuls 1, 1, 1
  03be0dc  fmadds 1, 3, 3, 1
  03be0e0  fmadds 1, 4, 4, 1
  03be0e4  fsqrts 1, 1
  03be0e8  fcmpu 0, 2, 1
  03be0ec  cror 6, 0, 2
  03be0f0  bt 6, 0x3be0fc
  03be0f4  fmr 2, 1
  03be0f8  ori 7, 6, 0
  03be0fc  lhz 6, 0(4)
  03be100  addic 4, 4, 2
  03be104  extsh 6, 6
  03be108  cmpwi 6, 0
  03be10c  bf 0, 0x3be07c
  03be110  ori 3, 7, 0
  03be114  blr

M866_003be118:   # 0x3be118, 0x15c bytes
  03be118  stdu 1, -128(1)
  03be11c  mflr 0
  03be120  std 0, 144(1)
  03be124  lhz 8, 166(3)
  03be128  lbz 7, 33(3)
  03be12c  li 6, -1
  03be130  lwz 5, 120(3)
  03be134  cmpwi 8, 572
  03be138  cmpwi 1, 8, 865
  03be13c  std 31, 120(1)
  03be140  lbz 4, 48(3)
  03be144  bf 2, 0x3be150
  03be148  li 6, 865
  03be14c  b 0x3be158
  03be150  bf 6, 0x3be158
  03be154  li 6, 866
  03be158  lis 8, 165
  03be15c  rlwinm 7, 7, 2, 22, 29
  03be160  addic 8, 8, -28284
  03be164  lwzx 7, 8, 7
  03be168  cmpwi 7, 0
  03be16c  bf 2, 0x3be178
  03be170  li 3, 0
  03be174  b 0x3be260
  03be178  lis 8, 164
  03be17c  lhz 9, 0(7)
  03be180  lwz 10, -28512(8)
  03be184  rlwinm 9, 9, 8, 9, 23
  03be188  addc 31, 10, 9
  03be18c  clrldi 31, 31, 32
  03be190  lbz 9, 32(31)
  03be194  cmpwi 9, 12
  03be198  bf 2, 0x3be248
  03be19c  lhz 9, 166(31)
  03be1a0  extsh 9, 9
  03be1a4  cmpw 9, 6
  03be1a8  bf 2, 0x3be248
  03be1ac  ori 6, 3, 0
  03be1b0  stb 4, 48(31)
  03be1b4  li 3, 1
  03be1b8  lhz 4, 50(6)
  03be1bc  lwz 7, 36(31)
  03be1c0  sth 4, 50(31)
  03be1c4  ld 4, 56(6)
  03be1c8  stb 3, 49(31)
  03be1cc  std 4, 56(31)
  03be1d0  lwz 3, 16(7)
  03be1d4  stw 3, 148(31)
  03be1d8  lhz 3, 52(6)
  03be1dc  sth 3, 52(31)
  03be1e0  lfs 1, 16(6)
  03be1e4  ori 3, 31, 0
  03be1e8  stfs 1, 16(31)
  03be1ec  lfs 1, 20(6)
  03be1f0  lwz 4, 120(31)
  03be1f4  stfs 1, 20(31)
  03be1f8  lfs 1, 24(6)
  03be1fc  stfs 1, 24(31)
  03be200  lfs 1, 28(6)
  03be204  stfs 1, 28(31)
  03be208  lfs 1, 64(6)
  03be20c  stfs 1, 64(31)
  03be210  lfs 1, 68(6)
  03be214  stfs 1, 68(31)
  03be218  lfs 1, 72(6)
  03be21c  stfs 1, 72(31)
  03be220  lfs 1, 76(6)
  03be224  stfs 1, 76(31)
  03be228  lfs 1, 32(5)
  03be22c  stfs 1, 32(4)
  03be230  lfs 1, 548(5)
  03be234  stfs 1, 548(4)
  03be238  bl 0xf31a8
  03be23c  nop
  03be240  ori 3, 31, 0
  03be244  b 0x3be260
  03be248  lhz 9, 0(7)
  03be24c  addic 7, 7, 2
  03be250  extsh 9, 9
  03be254  cmpwi 9, 0
  03be258  bf 0, 0x3be17c
  03be25c  li 3, 0
  03be260  ld 0, 144(1)
  03be264  mtlr 0
  03be268  ld 31, 120(1)
  03be26c  addi 1, 1, 128
  03be270  blr

M866_003be2b8:   # 0x3be2b8, 0x8dc bytes
  03be2b8  stdu 1, -240(1)
  03be2bc  mflr 0
  03be2c0  std 0, 256(1)
  03be2c4  stfd 30, 224(1)
  03be2c8  stfd 31, 232(1)
  03be2cc  std 31, 216(1)
  03be2d0  ori 31, 3, 0
  03be2d4  li 6, 0
  03be2d8  lis 4, 51
  03be2dc  std 30, 208(1)
  03be2e0  li 5, 0
  03be2e4  lwz 30, 120(31)
  03be2e8  std 29, 200(1)
  03be2ec  std 28, 192(1)
  03be2f0  std 27, 184(1)
  03be2f4  std 26, 176(1)
  03be2f8  stw 6, 164(1)
  03be2fc  bl 0x10675c
  03be300  nop
  03be304  ori 29, 3, 0
  03be308  cmpwi 29, 0
  03be30c  bt 2, 0x3be46c
  03be310  lis 3, 60
  03be314  lfs 5, 16(31)
  03be318  lfs 4, 20(31)
  03be31c  addi 3, 3, -7564
  03be320  stfs 5, 112(1)
  03be324  lfs 1, 28(31)
  03be328  stfs 4, 116(1)
  03be32c  stfs 1, 124(1)
  03be330  lfs 2, 0(3)
  03be334  lfs 6, 24(31)
  03be338  fadds 6, 6, 2
  03be33c  stfs 6, 120(1)
  03be340  lwz 4, 32(29)
  03be344  cmpwi 4, 0
  03be348  bt 2, 0x3be3f0
  03be34c  lhz 3, 166(4)
  03be350  cmpwi 3, 71
  03be354  cmpwi 1, 3, 186
  03be358  bf 2, 0x3be388
  03be35c  lis 3, 151
  03be360  addic 3, 3, -25376
  03be364  lfs 3, 208(3)
  03be368  lfs 2, 212(3)
  03be36c  stfs 3, 128(1)
  03be370  lfs 1, 216(3)
  03be374  stfs 2, 132(1)
  03be378  lfs 8, 220(3)
  03be37c  stfs 1, 136(1)
  03be380  stfs 8, 140(1)
  03be384  b 0x3be410
  03be388  lwz 3, 36(4)
  03be38c  cmpwi 3, 0
  03be390  bt 2, 0x3be3a4
  03be394  lhz 3, 70(3)
  03be398  extsh 3, 3
  03be39c  cmpwi 3, 5
  03be3a0  bt 2, 0x3be3a8
  03be3a4  bf 6, 0x3be3cc
  03be3a8  fmr 7, 1
  03be3ac  stfs 5, 128(1)
  03be3b0  stfs 4, 132(1)
  03be3b4  fmr 3, 5
  03be3b8  stfs 6, 136(1)
  03be3bc  fmr 2, 4
  03be3c0  fmr 1, 6
  03be3c4  stfs 7, 140(1)
  03be3c8  b 0x3be410
  03be3cc  lfs 3, 16(4)
  03be3d0  stfs 3, 128(1)
  03be3d4  lfs 2, 20(4)
  03be3d8  stfs 2, 132(1)
  03be3dc  lfs 1, 24(4)
  03be3e0  stfs 1, 136(1)
  03be3e4  lfs 7, 28(4)
  03be3e8  stfs 7, 140(1)
  03be3ec  b 0x3be410
  03be3f0  lfs 3, 0(29)
  03be3f4  stfs 3, 128(1)
  03be3f8  lfs 2, 4(29)
  03be3fc  stfs 2, 132(1)
  03be400  lfs 1, 8(29)
  03be404  stfs 1, 136(1)
  03be408  lfs 7, 12(29)
  03be40c  stfs 7, 140(1)
  03be410  fsubs 2, 4, 2
  03be414  fsubs 3, 5, 3
  03be418  fsubs 1, 6, 1
  03be41c  lis 3, 60
  03be420  addi 3, 3, -7564
  03be424  fmuls 2, 2, 2
  03be428  fmadds 2, 3, 3, 2
  03be42c  fmadds 1, 1, 1, 2
  03be430  lfs 2, 4(3)
  03be434  fsqrts 1, 1
  03be438  fcmpu 0, 1, 2
  03be43c  cror 6, 1, 2
  03be440  bt 6, 0x3be46c
  03be444  addic 3, 1, 112
  03be448  addic 4, 1, 128
  03be44c  li 5, 2
  03be450  ori 6, 31, 0
  03be454  li 7, 0
  03be458  bl 0x57820
  03be45c  nop
  03be460  cmpwi 3, 0
  03be464  bt 2, 0x3be46c
  03be468  li 29, 0
  03be46c  ori 3, 31, 0
  03be470  addic 5, 30, 32
  03be474  addic 7, 1, 160
  03be478  li 9, 0
  03be47c  addic 8, 1, 164
  03be480  ori 4, 29, 0
  03be484  li 6, 0
  03be488  li 10, 4
  03be48c  bl 0x106840
  03be490  nop
  03be494  lwz 3, 24(31)
  03be498  lwz 4, 160(1)
  03be49c  srawi 5, 3, 31
  03be4a0  cmpwi 4, 1
  03be4a4  srwi 4, 5, 1
  03be4a8  xor 3, 4, 3
  03be4ac  subc 3, 3, 5
  03be4b0  bt 2, 0x3be824
  03be4b4  lwz 4, 164(1)
  03be4b8  cmpwi 4, 0
  03be4bc  bt 2, 0x3be824
  03be4c0  lbz 4, 32(31)
  03be4c4  cmpwi 6, 4, 10
  03be4c8  cmpwi 4, 11
  03be4cc  cror 2, 2, 26
  03be4d0  cmpwi 1, 4, 8
  03be4d4  bt 2, 0x3be824
  03be4d8  bt 6, 0x3be824
  03be4dc  li 3, 0
  03be4e0  li 4, 0
  03be4e4  ori 5, 31, 0
  03be4e8  bl 0x15d12c
  03be4ec  nop
  03be4f0  lis 3, 60
  03be4f4  lfs 1, 32(30)
  03be4f8  lis 4, 15363
  03be4fc  addi 3, 3, -7564
  03be500  ori 4, 4, 4719
  03be504  li 5, 0
  03be508  li 6, 8
  03be50c  lfs 2, 8(3)
  03be510  stw 4, 112(30)
  03be514  fsubs 1, 1, 2
  03be518  stb 5, 157(30)
  03be51c  stw 6, 132(30)
  03be520  lfs 2, 592(30)
  03be524  stfs 1, 32(30)
  03be528  lfs 30, 12(3)
  03be52c  lfs 31, 16(3)
  03be530  fmuls 1, 2, 30
  03be534  fmuls 1, 1, 31
  03be538  bl 0x502758
  03be53c  nop
  03be540  lfs 1, 592(30)
  03be544  addic 4, 29, 16
  03be548  stw 3, 128(30)
  03be54c  fmuls 1, 1, 30
  03be550  ori 3, 31, 0
  03be554  stfs 1, 136(30)
  03be558  bl 0x3bd6c0
  03be55c  lwz 3, 32(30)
  03be560  cmpwi 3, 0
  03be564  bf 1, 0x3be804
  03be568  ori 3, 31, 0
  03be56c  bl 0x3be118
  03be570  ori 28, 3, 0
  03be574  cmpwi 28, 0
  03be578  bt 2, 0x3be684
  03be57c  lis 3, 15363
  03be580  lwz 26, 120(28)
  03be584  li 4, 3
  03be588  ori 3, 3, 4719
  03be58c  li 27, 8
  03be590  stw 3, 112(26)
  03be594  stb 4, 157(26)
  03be598  stw 27, 132(26)
  03be59c  lfs 1, 592(30)
  03be5a0  fmuls 1, 1, 30
  03be5a4  fmuls 1, 1, 31
  03be5a8  bl 0x502758
  03be5ac  nop
  03be5b0  stw 3, 128(26)
  03be5b4  lis 4, 114
  03be5b8  lfs 1, 592(30)
  03be5bc  lis 3, 132
  03be5c0  lwz 5, 132(26)
  03be5c4  lis 8, 132
  03be5c8  fmuls 1, 1, 30
  03be5cc  lis 9, 16608
  03be5d0  ori 11, 5, 4
  03be5d4  lis 10, 16720
  03be5d8  addic 5, 1, 168
  03be5dc  addic 6, 26, 120
  03be5e0  addic 7, 26, 124
  03be5e4  stfs 1, 136(26)
  03be5e8  lfs 1, 24108(3)
  03be5ec  lfs 2, -3052(4)
  03be5f0  fmuls 1, 1, 2
  03be5f4  stfs 1, 120(26)
  03be5f8  lfs 1, 24112(8)
  03be5fc  stw 11, 132(26)
  03be600  fmuls 1, 1, 2
  03be604  stw 9, 176(26)
  03be608  stw 10, 180(26)
  03be60c  stfs 1, 124(26)
  03be610  lfs 1, 16(29)
  03be614  lfs 2, 24(29)
  03be618  stfs 1, 48(1)
  03be61c  stfs 2, 56(1)
  03be620  lfs 1, 20(29)
  03be624  lfs 2, 28(29)
  03be628  stfs 1, 52(1)
  03be62c  stfs 2, 60(1)
  03be630  ld 3, 48(1)
  03be634  ld 4, 56(1)
  03be638  bl 0x107de8
  03be63c  nop
  03be640  lis 3, 60
  03be644  lfs 1, 168(1)
  03be648  addi 3, 3, -7564
  03be64c  lfs 2, 20(3)
  03be650  bl 0x5025e0
  03be654  nop
  03be658  ori 3, 28, 0
  03be65c  stfs 1, 168(1)
  03be660  addic 4, 26, 96
  03be664  li 6, 4
  03be668  li 7, 8
  03be66c  li 8, 0
  03be670  bl 0x10ad80
  03be674  nop
  03be678  lis 3, 16256
  03be67c  stb 27, 32(28)
  03be680  stw 3, 88(28)
  03be684  ori 3, 31, 0
  03be688  bl 0x3be118
  03be68c  ori 28, 3, 0
  03be690  cmpwi 28, 0
  03be694  bt 2, 0x3be7a0
  03be698  lis 3, 15363
  03be69c  lwz 26, 120(28)
  03be6a0  li 4, 3
  03be6a4  ori 3, 3, 4719
  03be6a8  li 27, 8
  03be6ac  stw 3, 112(26)
  03be6b0  stb 4, 157(26)
  03be6b4  stw 27, 132(26)
  03be6b8  lfs 1, 592(30)
  03be6bc  fmuls 1, 1, 30
  03be6c0  fmuls 1, 1, 31
  03be6c4  bl 0x502758
  03be6c8  nop
  03be6cc  stw 3, 128(26)
  03be6d0  lis 4, 114
  03be6d4  lfs 1, 592(30)
  03be6d8  lis 3, 132
  03be6dc  lwz 5, 132(26)
  03be6e0  lis 8, 132
  03be6e4  fmuls 1, 1, 30
  03be6e8  lis 9, 16608
  03be6ec  ori 11, 5, 4
  03be6f0  lis 10, 16720
  03be6f4  addic 5, 1, 172
  03be6f8  addic 6, 26, 120
  03be6fc  addic 7, 26, 124
  03be700  stfs 1, 136(26)
  03be704  lfs 1, 24108(3)
  03be708  lfs 2, -3052(4)
  03be70c  fmuls 1, 1, 2
  03be710  stfs 1, 120(26)
  03be714  lfs 1, 24112(8)
  03be718  stw 11, 132(26)
  03be71c  fmuls 1, 1, 2
  03be720  stw 9, 176(26)
  03be724  stw 10, 180(26)
  03be728  stfs 1, 124(26)
  03be72c  lfs 1, 16(29)
  03be730  lfs 2, 24(29)
  03be734  stfs 1, 48(1)
  03be738  stfs 2, 56(1)
  03be73c  lfs 1, 20(29)
  03be740  lfs 2, 28(29)
  03be744  stfs 1, 52(1)
  03be748  stfs 2, 60(1)
  03be74c  ld 3, 48(1)
  03be750  ld 4, 56(1)
  03be754  bl 0x107de8
  03be758  nop
  03be75c  lis 3, 60
  03be760  lfs 1, 172(1)
  03be764  addi 3, 3, -7564
  03be768  lfs 2, 20(3)
  03be76c  bl 0x502578
  03be770  nop
  03be774  ori 3, 28, 0
  03be778  stfs 1, 172(1)
  03be77c  addic 4, 26, 96
  03be780  li 6, 4
  03be784  li 7, 8
  03be788  li 8, 0
  03be78c  bl 0x10ad80
  03be790  nop
  03be794  lis 3, 16256
  03be798  stb 27, 32(28)
  03be79c  stw 3, 88(28)
  03be7a0  lwz 29, 32(29)
  03be7a4  cmpwi 29, 0
  03be7a8  bt 2, 0x3be7e0
  03be7ac  lwz 29, 36(29)
  03be7b0  cmpwi 29, 0
  03be7b4  bt 2, 0x3be7e0
  03be7b8  lhz 3, 70(29)
  03be7bc  extsh 3, 3
  03be7c0  cmpwi 3, 5
  03be7c4  bf 2, 0x3be7e0
  03be7c8  ori 3, 31, 0
  03be7cc  li 4, 2048
  03be7d0  li 5, -1
  03be7d4  bl 0xfd8d0
  03be7d8  nop
  03be7dc  b 0x3be7f4
  03be7e0  ori 3, 31, 0
  03be7e4  li 4, 0
  03be7e8  li 5, -1
  03be7ec  bl 0xfd8d0
  03be7f0  nop
  03be7f4  ori 3, 31, 0
  03be7f8  bl 0xefb38
  03be7fc  nop
  03be800  b 0x3beb64
  03be804  li 4, 0
  03be808  lhz 5, 52(31)
  03be80c  ori 3, 31, 0
  03be810  rlwimi 5, 4, 0, 19, 19
  03be814  sth 5, 52(31)
  03be818  bl 0xefb38
  03be81c  nop
  03be820  b 0x3beb64
  03be824  li 4, 255
  03be828  stb 4, 164(31)
  03be82c  lwz 4, 600(30)
  03be830  cmpwi 4, 0
  03be834  bt 2, 0x3be8a4
  03be838  lbz 5, 32(31)
  03be83c  cmpwi 5, 0
  03be840  bt 2, 0x3be8a4
  03be844  mulli 4, 4, 4512
  03be848  lis 5, 230
  03be84c  lwz 5, -21888(5)
  03be850  addc 4, 5, 4
  03be854  clrldi 4, 4, 32
  03be858  lwz 4, 8(4)
  03be85c  srawi 5, 4, 31
  03be860  srwi 6, 5, 1
  03be864  xor 4, 6, 4
  03be868  subc 4, 4, 5
  03be86c  cmpw 3, 4
  03be870  bf 0, 0x3be8a4
  03be874  li 5, 0
  03be878  ori 3, 31, 0
  03be87c  addic 4, 1, 144
  03be880  stw 5, 156(1)
  03be884  stw 5, 152(1)
  03be888  stw 5, 148(1)
  03be88c  stw 5, 144(1)
  03be890  bl 0x3bd6c0
  03be894  ori 3, 31, 0
  03be898  bl 0xefb38
  03be89c  nop
  03be8a0  b 0x3beb64
  03be8a4  lwz 3, 56(30)
  03be8a8  cmpwi 3, 0
  03be8ac  bt 2, 0x3be8f4
  03be8b0  lis 3, 60
  03be8b4  li 4, 24
  03be8b8  vspltisw 2, -1
  03be8bc  addi 3, 3, -7564
  03be8c0  lis 5, 114
  03be8c4  li 6, -3056
  03be8c8  vslw 2, 2, 2
  03be8cc  lvlx 3, 4, 3
  03be8d0  li 3, 556
  03be8d4  vspltw 3, 3, 0
  03be8d8  li 4, 0
  03be8dc  lvlx 4, 6, 5
  03be8e0  vmaddfp 2, 4, 3, 2
  03be8e4  vctsxs 2, 2, 0
  03be8e8  vspltw 2, 2, 0
  03be8ec  stvewx 2, 3, 30
  03be8f0  stw 4, 56(30)
  03be8f4  addic 3, 30, 556
  03be8f8  bl 0x4fff60
  03be8fc  nop
  03be900  ori 4, 3, 0
  03be904  lwz 3, 608(30)
  03be908  cmpwi 4, 0
  03be90c  bt 2, 0x3be918
  03be910  lfs 1, 548(30)
  03be914  b 0x3be92c
  03be918  lis 4, 60
  03be91c  lfs 1, 548(30)
  03be920  addi 4, 4, -7564
  03be924  lfs 2, 28(4)
  03be928  fadds 1, 1, 2
  03be92c  cmpwi 3, 0
  03be930  stfs 1, 552(30)
  03be934  bf 1, 0x3be958
  03be938  lis 4, 164
  03be93c  slwi 3, 3, 8
  03be940  lwz 4, -28512(4)
  03be944  addc 3, 4, 3
  03be948  clrldi 3, 3, 32
  03be94c  lbz 3, 188(3)
  03be950  cmpwi 3, 0
  03be954  bt 2, 0x3be9fc
  03be958  lis 3, 165
  03be95c  addic 4, 30, 448
  03be960  addic 5, 3, 7136
  03be964  lwz 3, 588(30)
  03be968  li 6, 0
  03be96c  slwi 3, 3, 2
  03be970  extsw 7, 3
  03be974  ori 3, 31, 0
  03be978  lwzx 5, 5, 7
  03be97c  li 7, 0
  03be980  addic 8, 5, 16
  03be984  lwz 9, 0(5)
  03be988  extsw 9, 9
  03be98c  bl 0x111ba0
  03be990  nop
  03be994  cmpwi 3, 2
  03be998  bt 2, 0x3be9fc
  03be99c  lfs 1, 532(30)
  03be9a0  lfs 2, 452(30)
  03be9a4  lfs 3, 528(30)
  03be9a8  fsubs 1, 1, 2
  03be9ac  lfs 2, 448(30)
  03be9b0  fsubs 2, 3, 2
  03be9b4  fmuls 1, 1, 1
  03be9b8  fmadds 1, 2, 2, 1
  03be9bc  lfs 2, 552(30)
  03be9c0  fsqrts 1, 1
  03be9c4  fcmpu 0, 1, 2
  03be9c8  bt 1, 0x3be9f4
  03be9cc  lfs 1, 24(31)
  03be9d0  lis 3, 60
  03be9d4  lfs 2, 456(30)
  03be9d8  addi 3, 3, -7564
  03be9dc  fsubs 1, 1, 2
  03be9e0  lfs 2, 32(3)
  03be9e4  fabs 1, 1
  03be9e8  fcmpu 0, 1, 2
  03be9ec  cror 6, 0, 2
  03be9f0  bt 6, 0x3be9fc
  03be9f4  li 3, 2
  03be9f8  stw 3, 516(30)
  03be9fc  lwz 3, 584(30)
  03bea00  cmpwi 3, -1
  03bea04  bf 1, 0x3bea94
  03bea08  extsw 4, 3
  03bea0c  ori 3, 31, 0
  03bea10  bl 0x3be040
  03bea14  cmpwi 3, 0
  03bea18  bt 2, 0x3bea94
  03bea1c  lfs 1, 20(31)
  03bea20  lfs 3, 20(3)
  03bea24  lfs 2, 16(31)
  03bea28  fsubs 3, 1, 3
  03bea2c  lfs 4, 16(3)
  03bea30  fsubs 4, 2, 4
  03bea34  fmuls 3, 3, 3
  03bea38  fmadds 3, 4, 4, 3
  03bea3c  lfs 4, 552(30)
  03bea40  fsqrts 3, 3
  03bea44  fcmpu 0, 3, 4
  03bea48  cror 6, 1, 2
  03bea4c  bt 6, 0x3bea94
  03bea50  lwz 4, 516(30)
  03bea54  cmpwi 4, 2
  03bea58  bt 2, 0x3bea88
  03bea5c  lwz 4, 512(30)
  03bea60  lfs 4, 20(4)
  03bea64  lfs 5, 16(4)
  03bea68  fsubs 1, 1, 4
  03bea6c  fsubs 2, 2, 5
  03bea70  fmuls 1, 1, 1
  03bea74  fmadds 1, 2, 2, 1
  03bea78  fsqrts 1, 1
  03bea7c  fcmpu 0, 3, 1
  03bea80  cror 6, 1, 2
  03bea84  bt 6, 0x3bea94
  03bea88  li 4, 1
  03bea8c  stw 3, 512(30)
  03bea90  stw 4, 516(30)
  03bea94  lwz 3, 512(30)
  03bea98  cmpwi 3, 0
  03bea9c  bf 2, 0x3beab0
  03beaa0  lis 3, 151
  03beaa4  addic 3, 3, -25376
  03beaa8  lwz 3, 8320(3)
  03beaac  stw 3, 512(30)
  03beab0  lis 3, 60
  03beab4  lfs 1, 596(30)
  03beab8  addi 29, 3, -7564
  03beabc  lis 3, 114
  03beac0  lfs 2, 36(29)
  03beac4  lfs 3, -3052(3)
  03beac8  fmuls 2, 3, 2
  03beacc  bl 0x502578
  03bead0  nop
  03bead4  lfs 2, 40(29)
  03bead8  lfs 3, 44(29)
  03beadc  fsubs 2, 2, 1
  03beae0  fsubs 3, 3, 1
  03beae4  lis 3, 132
  03beae8  lis 4, 132
  03beaec  fsub 4, 1, 2
  03beaf0  fsel 2, 4, 2, 1
  03beaf4  lfs 4, 48(29)
  03beaf8  lfs 5, 52(29)
  03beafc  fsub 6, 3, 2
  03beb00  fsel 2, 6, 3, 2
  03beb04  lfs 3, 56(29)
  03beb08  lfs 6, 60(29)
  03beb0c  lfs 8, 8(29)
  03beb10  lfs 10, 0(29)
  03beb14  lwz 3, 24100(3)
  03beb18  lwz 4, 24104(4)
  03beb1c  stfs 1, 596(30)
  03beb20  fmuls 7, 2, 2
  03beb24  extsw 3, 3
  03beb28  extsw 4, 4
  03beb2c  fmuls 9, 7, 2
  03beb30  fmadds 2, 9, 4, 2
  03beb34  fmuls 11, 7, 9
  03beb38  fmr 4, 10
  03beb3c  fmuls 9, 7, 11
  03beb40  fmadds 2, 11, 5, 2
  03beb44  fmuls 1, 7, 9
  03beb48  fmadds 2, 9, 3, 2
  03beb4c  fmadds 1, 1, 6, 2
  03beb50  fadds 1, 1, 8
  03beb54  fmuls 1, 1, 4
  03beb58  bl 0x5027bc
  03beb5c  nop
  03beb60  stw 3, 144(31)
  03beb64  ld 0, 256(1)
  03beb68  mtlr 0
  03beb6c  lfd 30, 224(1)
  03beb70  lfd 31, 232(1)
  03beb74  ld 26, 176(1)
  03beb78  ld 27, 184(1)
  03beb7c  ld 28, 192(1)
  03beb80  ld 29, 200(1)
  03beb84  ld 30, 208(1)
  03beb88  ld 31, 216(1)
  03beb8c  addi 1, 1, 240
  03beb90  blr

UpdateMoby_572:   # 0x3bec28, 0x16ec bytes
  03bec28  stdu 1, -384(1)
  03bec2c  mflr 0
  03bec30  std 0, 400(1)
  03bec34  stfd 31, 376(1)
  03bec38  std 31, 368(1)
  03bec3c  lbz 4, 32(3)
  03bec40  std 30, 360(1)
  03bec44  ori 31, 3, 0
  03bec48  lwz 30, 120(3)
  03bec4c  std 29, 352(1)
  03bec50  std 28, 344(1)
  03bec54  std 27, 336(1)
  03bec58  cmpwi 4, 12
  03bec5c  bf 2, 0x3bec70
  03bec60  lhz 3, 52(31)
  03bec64  ori 3, 3, 1
  03bec68  sth 3, 52(31)
  03bec6c  b 0x3c02ec
  03bec70  lis 3, 60
  03bec74  addic 5, 30, 624
  03bec78  addi 6, 3, -5224
  03bec7c  ori 3, 31, 0
  03bec80  li 4, 0
  03bec84  lfs 1, 0(6)
  03bec88  bl 0x119a18
  03bec8c  nop
  03bec90  lbz 3, 49(31)
  03bec94  cmpwi 3, 0
  03bec98  bt 2, 0x3bed04
  03bec9c  lis 3, 149
  03beca0  lfs 1, 20(31)
  03beca4  lfs 2, 16(31)
  03beca8  addic 3, 3, 5056
  03becac  lfs 3, 324(3)
  03becb0  lfs 4, 320(3)
  03becb4  fsubs 1, 1, 3
  03becb8  fsubs 2, 2, 4
  03becbc  lfs 3, 24(31)
  03becc0  lfs 4, 328(3)
  03becc4  fsubs 3, 3, 4
  03becc8  lis 3, 60
  03beccc  fmuls 1, 1, 1
  03becd0  addi 3, 3, -5224
  03becd4  fmadds 1, 2, 2, 1
  03becd8  lfs 2, 4(3)
  03becdc  fmadds 1, 3, 3, 1
  03bece0  fsqrts 1, 1
  03bece4  fcmpu 0, 1, 2
  03bece8  cror 6, 1, 2
  03becec  bt 6, 0x3bed04
  03becf0  ori 3, 31, 0
  03becf4  bl 0x106360
  03becf8  nop
  03becfc  li 3, 22
  03bed00  stb 3, 127(31)
  03bed04  ori 3, 31, 0
  03bed08  bl 0x3be2b8
  03bed0c  lbz 3, 32(31)
  03bed10  lwz 29, 512(30)
  03bed14  cmpwi 3, 6
  03bed18  bt 1, 0x3bed58
  03bed1c  cmpwi 3, 6
  03bed20  bt 2, 0x3bf9fc
  03bed24  cmpwi 3, 5
  03bed28  bt 2, 0x3bfdec
  03bed2c  cmpwi 3, 4
  03bed30  bt 2, 0x3bf760
  03bed34  cmpwi 3, 3
  03bed38  bt 2, 0x3bf6fc
  03bed3c  cmpwi 3, 2
  03bed40  bt 2, 0x3bf184
  03bed44  cmpwi 3, 1
  03bed48  bt 2, 0x3beffc
  03bed4c  cmpwi 3, 0
  03bed50  bt 2, 0x3bed94
  03bed54  b 0x3c02ec
  03bed58  cmpwi 3, 16
  03bed5c  bt 2, 0x3bf68c
  03bed60  cmpwi 3, 15
  03bed64  bt 2, 0x3bf3f8
  03bed68  cmpwi 3, 14
  03bed6c  bt 2, 0x3c02c4
  03bed70  cmpwi 3, 13
  03bed74  bt 2, 0x3c024c
  03bed78  cmpwi 3, 9
  03bed7c  bt 2, 0x3c01a4
  03bed80  cmpwi 3, 8
  03bed84  bt 2, 0x3c0058
  03bed88  cmpwi 3, 7
  03bed8c  bt 2, 0x3bfd88
  03bed90  b 0x3c02ec
  03bed94  lfs 1, 16(31)
  03bed98  lis 3, 60
  03bed9c  stfs 1, 528(30)
  03beda0  lfs 1, 20(31)
  03beda4  addi 3, 3, -5224
  03beda8  stfs 1, 532(30)
  03bedac  lfs 1, 24(31)
  03bedb0  lhz 4, 166(31)
  03bedb4  stfs 1, 536(30)
  03bedb8  lfs 1, 28(31)
  03bedbc  extsh 4, 4
  03bedc0  stfs 1, 540(30)
  03bedc4  cmpwi 4, 864
  03bedc8  cmpwi 1, 4, 572
  03bedcc  lfs 1, 8(3)
  03bedd0  cmpwi 6, 4, 865
  03bedd4  cmpwi 7, 4, 866
  03bedd8  bt 1, 0x3bede4
  03beddc  bt 6, 0x3bedf0
  03bede0  b 0x3bee84
  03bede4  bf 25, 0x3bee20
  03bede8  bf 29, 0x3bee54
  03bedec  b 0x3bee84
  03bedf0  bl 0x502758
  03bedf4  nop
  03bedf8  lis 4, 60
  03bedfc  stb 3, 88(30)
  03bee00  addi 3, 4, -5224
  03bee04  lfs 1, 12(3)
  03bee08  bl 0x502758
  03bee0c  nop
  03bee10  stb 3, 90(30)
  03bee14  lis 3, 16256
  03bee18  stw 3, 592(30)
  03bee1c  b 0x3bee84
  03bee20  bl 0x502758
  03bee24  nop
  03bee28  lis 4, 60
  03bee2c  stb 3, 88(30)
  03bee30  addi 3, 4, -5224
  03bee34  lfs 1, 16(3)
  03bee38  bl 0x502758
  03bee3c  nop
  03bee40  lis 4, 16179
  03bee44  stb 3, 90(30)
  03bee48  ori 3, 4, 13107
  03bee4c  stw 3, 592(30)
  03bee50  b 0x3bee84
  03bee54  bl 0x502758
  03bee58  nop
  03bee5c  lis 4, 60
  03bee60  stb 3, 88(30)
  03bee64  addi 3, 4, -5224
  03bee68  lfs 1, 20(3)
  03bee6c  bl 0x502758
  03bee70  nop
  03bee74  lis 4, 16122
  03bee78  stb 3, 90(30)
  03bee7c  ori 3, 4, 57672
  03bee80  stw 3, 592(30)
  03bee84  lfs 1, 592(30)
  03bee88  stfs 1, 48(30)
  03bee8c  bl 0xfcc68
  03bee90  nop
  03bee94  lhz 3, 166(31)
  03bee98  li 4, 866
  03bee9c  stfs 1, 596(30)
  03beea0  lis 5, 132
  03beea4  subc 3, 4, 3
  03beea8  lis 6, 132
  03beeac  cntlzw 3, 3
  03beeb0  addic 4, 5, 24272
  03beeb4  addic 5, 6, 24260
  03beeb8  sldi 3, 3, 58
  03beebc  lwz 6, 600(30)
  03beec0  subc 4, 4, 5
  03beec4  sradi 8, 3, 63
  03beec8  lis 7, 60
  03beecc  lwz 3, 548(30)
  03beed0  and 4, 8, 4
  03beed4  li 9, 1
  03beed8  addi 7, 7, -5224
  03beedc  addc 4, 5, 4
  03beee0  cmpwi 6, 0
  03beee4  stb 9, 41(30)
  03beee8  stw 4, 304(30)
  03beeec  lfs 1, 24(7)
  03beef0  bt 2, 0x3bef08
  03beef4  lis 4, 60
  03beef8  li 5, 1
  03beefc  addi 4, 4, -5224
  03bef00  lfs 1, 28(4)
  03bef04  stw 5, 560(30)
  03bef08  cmpwi 3, 0
  03bef0c  stfs 1, 32(30)
  03bef10  bf 2, 0x3bef1c
  03bef14  lis 3, 16752
  03bef18  stw 3, 548(30)
  03bef1c  addic 3, 30, 368
  03bef20  bl 0x100f8c
  03bef24  nop
  03bef28  lis 3, 16384
  03bef2c  lis 4, 60
  03bef30  addi 4, 4, -5224
  03bef34  stw 3, 380(30)
  03bef38  stw 3, 376(30)
  03bef3c  lfs 1, 592(30)
  03bef40  lfs 2, 32(4)
  03bef44  lfs 3, 36(4)
  03bef48  fmuls 1, 1, 2
  03bef4c  fmuls 1, 1, 3
  03bef50  bl 0x502758
  03bef54  nop
  03bef58  lis 4, 114
  03bef5c  lfs 1, 572(30)
  03bef60  stw 3, 368(30)
  03bef64  lwz 3, 560(30)
  03bef68  cmpwi 3, 0
  03bef6c  lfs 2, -3052(4)
  03bef70  lhz 3, 52(31)
  03bef74  fmuls 1, 1, 2
  03bef78  stfs 1, 404(30)
  03bef7c  lfs 1, 24(31)
  03bef80  bt 2, 0x3bef98
  03bef84  li 4, 1
  03bef88  ori 3, 3, 4096
  03bef8c  stb 4, 32(31)
  03bef90  sth 3, 52(31)
  03bef94  b 0x3c02ec
  03bef98  li 4, -1
  03bef9c  lwz 6, 604(30)
  03befa0  li 7, 12
  03befa4  subc 4, 4, 6
  03befa8  li 8, 13
  03befac  cntlzw 4, 4
  03befb0  subc 6, 7, 8
  03befb4  sldi 4, 4, 58
  03befb8  lis 5, 60
  03befbc  sradi 4, 4, 63
  03befc0  addi 5, 5, -5224
  03befc4  and 4, 4, 6
  03befc8  li 6, 0
  03befcc  addc 4, 8, 4
  03befd0  rlwimi 3, 6, 0, 19, 19
  03befd4  ori 3, 3, 1
  03befd8  stb 4, 32(31)
  03befdc  lfs 2, 40(5)
  03befe0  stw 6, 88(31)
  03befe4  fsubs 1, 1, 2
  03befe8  stb 6, 49(31)
  03befec  stw 6, 148(31)
  03beff0  sth 3, 52(31)
  03beff4  stfs 1, 24(31)
  03beff8  b 0x3c02ec
  03beffc  lwz 3, 516(30)
  03bf000  cmpwi 3, 2
  03bf004  bt 2, 0x3bf0e8
  03bf008  li 3, 4
  03bf00c  bl 0xfc620
  03bf010  nop
  03bf014  cmpwi 3, 0
  03bf018  bf 2, 0x3bf0e8
  03bf01c  lis 3, 60
  03bf020  lwz 5, 580(30)
  03bf024  addic 7, 31, 16
  03bf028  addi 4, 3, -5224
  03bf02c  addic 3, 30, 576
  03bf030  addic 8, 29, 16
  03bf034  extsw 5, 5
  03bf038  addic 9, 1, 112
  03bf03c  lfs 1, 32(4)
  03bf040  lfs 2, 592(30)
  03bf044  li 4, 1
  03bf048  fmuls 1, 2, 1
  03bf04c  bl 0x114d58
  03bf050  nop
  03bf054  cmpwi 3, 0
  03bf058  bt 2, 0x3bf0e0
  03bf05c  li 3, 4
  03bf060  lbz 4, 83(31)
  03bf064  cmpwi 4, 1
  03bf068  stb 3, 32(31)
  03bf06c  bt 2, 0x3bf0ac
  03bf070  lis 3, 60
  03bf074  lis 4, 114
  03bf078  addi 3, 3, -5224
  03bf07c  li 5, 0
  03bf080  lfs 1, 44(3)
  03bf084  lfs 2, -3056(4)
  03bf088  ori 3, 31, 0
  03bf08c  fmuls 1, 2, 1
  03bf090  li 4, 1
  03bf094  fctiwz 1, 1
  03bf098  stfd 1, 320(1)
  03bf09c  lwz 6, 324(1)
  03bf0a0  extsw 6, 6
  03bf0a4  bl 0xfddc0
  03bf0a8  nop
  03bf0ac  li 3, 0
  03bf0b0  lis 4, 60
  03bf0b4  addi 4, 4, -5224
  03bf0b8  stw 3, 76(30)
  03bf0bc  stw 3, 72(30)
  03bf0c0  stw 3, 68(30)
  03bf0c4  stw 3, 64(30)
  03bf0c8  lfs 1, 48(4)
  03bf0cc  lfs 2, 52(4)
  03bf0d0  bl 0xfcbe8
  03bf0d4  nop
  03bf0d8  stfs 1, 564(30)
  03bf0dc  b 0x3bf0e8
  03bf0e0  li 3, 2
  03bf0e4  stw 3, 516(30)
  03bf0e8  lwz 3, 556(30)
  03bf0ec  cmpwi 3, 0
  03bf0f0  bt 2, 0x3bf130
  03bf0f4  lwz 3, 516(30)
  03bf0f8  cmpwi 3, 2
  03bf0fc  bf 2, 0x3bf130
  03bf100  li 3, 15
  03bf104  lbz 4, 83(31)
  03bf108  cmpwi 4, 1
  03bf10c  stb 3, 32(31)
  03bf110  bt 2, 0x3c02ec
  03bf114  ori 3, 31, 0
  03bf118  li 4, 1
  03bf11c  li 5, 0
  03bf120  li 6, 5
  03bf124  bl 0xfddc0
  03bf128  nop
  03bf12c  b 0x3c02ec
  03bf130  lis 3, 60
  03bf134  lfs 1, 572(30)
  03bf138  lis 4, 114
  03bf13c  addi 3, 3, -5224
  03bf140  lfs 2, 56(3)
  03bf144  lfs 3, -3052(4)
  03bf148  fmuls 1, 1, 2
  03bf14c  fmuls 1, 1, 3
  03bf150  stfs 1, 404(30)
  03bf154  lbz 3, 83(31)
  03bf158  cmpwi 3, 1
  03bf15c  bt 2, 0x3bf178
  03bf160  ori 3, 31, 0
  03bf164  li 4, 1
  03bf168  li 5, 0
  03bf16c  li 6, 5
  03bf170  bl 0xfddc0
  03bf174  nop
  03bf178  li 3, 2
  03bf17c  stb 3, 32(31)
  03bf180  b 0x3c02ec
  03bf184  lfs 1, 528(30)
  03bf188  lfs 2, 16(31)
  03bf18c  lfs 3, 532(30)
  03bf190  lfs 4, 20(31)
  03bf194  fsubs 1, 1, 2
  03bf198  fsubs 2, 3, 4
  03bf19c  bl 0x5e8338
  03bf1a0  nop
  03bf1a4  lis 3, 60
  03bf1a8  lis 4, 114
  03bf1ac  addi 28, 3, -5224
  03bf1b0  lis 3, 114
  03bf1b4  addic 5, 30, 544
  03bf1b8  lfs 2, 60(28)
  03bf1bc  lfs 3, -3048(3)
  03bf1c0  lfs 4, 64(28)
  03bf1c4  addic 3, 31, 72
  03bf1c8  fmuls 2, 3, 2
  03bf1cc  lfs 5, -3052(4)
  03bf1d0  fmuls 4, 5, 4
  03bf1d4  fmr 3, 2
  03bf1d8  bl 0x10a2e0
  03bf1dc  nop
  03bf1e0  lfs 1, 68(28)
  03bf1e4  lfs 2, 72(28)
  03bf1e8  lfs 3, 72(31)
  03bf1ec  lfs 4, 76(28)
  03bf1f0  fadds 1, 3, 1
  03bf1f4  fsubs 5, 2, 3
  03bf1f8  fsubs 6, 4, 3
  03bf1fc  li 3, 0
  03bf200  addic 4, 30, 368
  03bf204  addic 5, 1, 128
  03bf208  addic 6, 30, 64
  03bf20c  fsubs 2, 2, 1
  03bf210  fsub 7, 3, 5
  03bf214  fsubs 4, 4, 1
  03bf218  fsub 8, 1, 2
  03bf21c  fsel 3, 7, 5, 3
  03bf220  lfs 5, 80(28)
  03bf224  fsel 1, 8, 2, 1
  03bf228  fsub 2, 6, 3
  03bf22c  fsub 7, 4, 1
  03bf230  fsel 2, 2, 6, 3
  03bf234  lfs 3, 84(28)
  03bf238  lfs 6, 88(28)
  03bf23c  fsel 1, 7, 4, 1
  03bf240  fmuls 4, 2, 2
  03bf244  fmuls 7, 1, 1
  03bf248  fmuls 8, 4, 2
  03bf24c  fmuls 10, 7, 1
  03bf250  fmuls 11, 4, 8
  03bf254  fmadds 2, 8, 5, 2
  03bf258  lfs 8, 92(28)
  03bf25c  stw 3, 136(1)
  03bf260  ori 3, 31, 0
  03bf264  fmuls 9, 7, 10
  03bf268  fmadds 1, 10, 5, 1
  03bf26c  fmuls 5, 4, 11
  03bf270  fmadds 2, 11, 3, 2
  03bf274  fmuls 10, 7, 9
  03bf278  fmadds 1, 9, 3, 1
  03bf27c  fmuls 3, 4, 5
  03bf280  fmadds 2, 5, 6, 2
  03bf284  fmuls 4, 7, 10
  03bf288  fmadds 1, 10, 6, 1
  03bf28c  fmadds 2, 3, 8, 2
  03bf290  fmadds 3, 4, 8, 1
  03bf294  stfs 2, 132(1)
  03bf298  lfs 1, 28(28)
  03bf29c  stfs 3, 128(1)
  03bf2a0  bl 0x101058
  03bf2a4  nop
  03bf2a8  lwz 3, 516(30)
  03bf2ac  cmpwi 3, 2
  03bf2b0  bt 2, 0x3bf3a8
  03bf2b4  li 3, 4
  03bf2b8  bl 0xfc620
  03bf2bc  nop
  03bf2c0  cmpwi 3, 0
  03bf2c4  bf 2, 0x3bf3a8
  03bf2c8  lis 3, 60
  03bf2cc  lwz 5, 580(30)
  03bf2d0  addic 7, 31, 16
  03bf2d4  addi 4, 3, -5224
  03bf2d8  addic 3, 30, 576
  03bf2dc  addic 8, 29, 16
  03bf2e0  extsw 5, 5
  03bf2e4  addic 9, 1, 144
  03bf2e8  lfs 1, 32(4)
  03bf2ec  lfs 2, 592(30)
  03bf2f0  li 4, 1
  03bf2f4  fmuls 1, 2, 1
  03bf2f8  bl 0x114d58
  03bf2fc  nop
  03bf300  cmpwi 3, 0
  03bf304  bt 2, 0x3bf3a0
  03bf308  li 3, 3
  03bf30c  lbz 4, 83(31)
  03bf310  cmpwi 4, 0
  03bf314  stb 3, 32(31)
  03bf318  bt 2, 0x3bf358
  03bf31c  lis 3, 60
  03bf320  lis 4, 114
  03bf324  addi 3, 3, -5224
  03bf328  li 5, 0
  03bf32c  lfs 1, 44(3)
  03bf330  lfs 2, -3056(4)
  03bf334  ori 3, 31, 0
  03bf338  li 4, 0
  03bf33c  fmuls 1, 2, 1
  03bf340  fctiwz 1, 1
  03bf344  stfd 1, 320(1)
  03bf348  lwz 6, 324(1)
  03bf34c  extsw 6, 6
  03bf350  bl 0xfddc0
  03bf354  nop
  03bf358  li 3, 0
  03bf35c  lis 4, 60
  03bf360  addi 4, 4, -5224
  03bf364  stw 3, 76(30)
  03bf368  stw 3, 72(30)
  03bf36c  stw 3, 68(30)
  03bf370  stw 3, 64(30)
  03bf374  lfs 1, 48(4)
  03bf378  lfs 2, 52(4)
  03bf37c  bl 0xfcbe8
  03bf380  nop
  03bf384  lis 3, 114
  03bf388  stfs 1, 564(30)
  03bf38c  lfs 1, 572(30)
  03bf390  lfs 2, -3052(3)
  03bf394  fmuls 1, 1, 2
  03bf398  stfs 1, 404(30)
  03bf39c  b 0x3bf3a8
  03bf3a0  li 3, 2
  03bf3a4  stw 3, 516(30)
  03bf3a8  lwz 3, 556(30)
  03bf3ac  cmpwi 3, 0
  03bf3b0  bt 2, 0x3bf3ec
  03bf3b4  lwz 3, 516(30)
  03bf3b8  cmpwi 3, 2
  03bf3bc  bf 2, 0x3bf3ec
  03bf3c0  li 3, 15
  03bf3c4  lbz 4, 83(31)
  03bf3c8  cmpwi 4, 1
  03bf3cc  stb 3, 32(31)
  03bf3d0  bt 2, 0x3bf3ec
  03bf3d4  ori 3, 31, 0
  03bf3d8  li 4, 1
  03bf3dc  li 5, 0
  03bf3e0  li 6, 5
  03bf3e4  bl 0xfddc0
  03bf3e8  nop
  03bf3ec  ori 3, 31, 0
  03bf3f0  bl 0x3bdbd0
  03bf3f4  b 0x3c02ec
  03bf3f8  lfs 1, 16(29)
  03bf3fc  lfs 2, 16(31)
  03bf400  lfs 3, 20(29)
  03bf404  lfs 4, 20(31)
  03bf408  fsubs 1, 1, 2
  03bf40c  fsubs 2, 3, 4
  03bf410  bl 0x5e8338
  03bf414  nop
  03bf418  lis 3, 60
  03bf41c  lis 4, 114
  03bf420  addi 28, 3, -5224
  03bf424  lis 3, 114
  03bf428  addic 5, 30, 544
  03bf42c  lfs 2, 60(28)
  03bf430  lfs 3, -3048(3)
  03bf434  lfs 4, 64(28)
  03bf438  addic 3, 31, 72
  03bf43c  fmuls 2, 3, 2
  03bf440  lfs 5, -3052(4)
  03bf444  fmuls 4, 5, 4
  03bf448  fmr 3, 2
  03bf44c  bl 0x10a2e0
  03bf450  nop
  03bf454  lfs 1, 68(28)
  03bf458  lfs 2, 72(28)
  03bf45c  lfs 3, 72(31)
  03bf460  lfs 4, 76(28)
  03bf464  fadds 1, 3, 1
  03bf468  fsubs 5, 2, 3
  03bf46c  fsubs 6, 4, 3
  03bf470  li 27, 0
  03bf474  ori 3, 31, 0
  03bf478  addic 4, 30, 368
  03bf47c  addic 5, 1, 160
  03bf480  addic 6, 30, 64
  03bf484  fsubs 2, 2, 1
  03bf488  fsub 7, 3, 5
  03bf48c  fsubs 4, 4, 1
  03bf490  fsub 8, 1, 2
  03bf494  fsel 3, 7, 5, 3
  03bf498  lfs 5, 80(28)
  03bf49c  fsel 1, 8, 2, 1
  03bf4a0  fsub 2, 6, 3
  03bf4a4  fsub 7, 4, 1
  03bf4a8  fsel 2, 2, 6, 3
  03bf4ac  lfs 3, 84(28)
  03bf4b0  lfs 6, 88(28)
  03bf4b4  fsel 1, 7, 4, 1
  03bf4b8  fmuls 4, 2, 2
  03bf4bc  fmuls 7, 1, 1
  03bf4c0  fmuls 8, 4, 2
  03bf4c4  fmuls 10, 7, 1
  03bf4c8  fmuls 11, 4, 8
  03bf4cc  fmadds 2, 8, 5, 2
  03bf4d0  lfs 8, 92(28)
  03bf4d4  stw 27, 168(1)
  03bf4d8  fmuls 9, 7, 10
  03bf4dc  fmadds 1, 10, 5, 1
  03bf4e0  fmuls 5, 4, 11
  03bf4e4  fmadds 2, 11, 3, 2
  03bf4e8  fmuls 10, 7, 9
  03bf4ec  fmadds 1, 9, 3, 1
  03bf4f0  fmuls 3, 4, 5
  03bf4f4  fmadds 2, 5, 6, 2
  03bf4f8  fmuls 4, 7, 10
  03bf4fc  fmadds 1, 10, 6, 1
  03bf500  fmadds 2, 3, 8, 2
  03bf504  fmadds 3, 4, 8, 1
  03bf508  stfs 2, 164(1)
  03bf50c  lfs 1, 28(28)
  03bf510  stfs 3, 160(1)
  03bf514  bl 0x101058
  03bf518  nop
  03bf51c  lwz 3, 576(30)
  03bf520  addic 4, 31, 16
  03bf524  addic 5, 29, 16
  03bf528  extsw 3, 3
  03bf52c  addic 6, 1, 176
  03bf530  bl 0xfc948
  03bf534  nop
  03bf538  cmpwi 3, 0
  03bf53c  lwz 3, 556(30)
  03bf540  ori 4, 27, 0
  03bf544  lbz 30, 83(31)
  03bf548  lfs 2, 16(31)
  03bf54c  lfs 1, 20(31)
  03bf550  bt 2, 0x3bf59c
  03bf554  lfs 3, 180(1)
  03bf558  lfs 4, 176(1)
  03bf55c  fsubs 3, 1, 3
  03bf560  lfs 5, 24(31)
  03bf564  fsubs 4, 2, 4
  03bf568  lfs 6, 184(1)
  03bf56c  fsubs 5, 5, 6
  03bf570  lis 5, 60
  03bf574  addi 5, 5, -5224
  03bf578  fmuls 3, 3, 3
  03bf57c  fmadds 3, 4, 4, 3
  03bf580  lfs 4, 96(5)
  03bf584  fmadds 3, 5, 5, 3
  03bf588  fsqrts 3, 3
  03bf58c  fcmpu 0, 3, 4
  03bf590  cror 6, 1, 2
  03bf594  bt 6, 0x3bf59c
  03bf598  li 4, 1
  03bf59c  cmpwi 3, 0
  03bf5a0  cmpwi 1, 4, 0
  03bf5a4  bf 2, 0x3bf5b4
  03bf5a8  li 3, 5
  03bf5ac  stb 3, 32(31)
  03bf5b0  b 0x3c02ec
  03bf5b4  bt 6, 0x3bf608
  03bf5b8  li 3, 16
  03bf5bc  cmpwi 30, 0
  03bf5c0  stb 3, 32(31)
  03bf5c4  bt 2, 0x3c02ec
  03bf5c8  lis 3, 60
  03bf5cc  lis 4, 114
  03bf5d0  addi 3, 3, -5224
  03bf5d4  li 5, 0
  03bf5d8  lfs 1, 44(3)
  03bf5dc  lfs 2, -3056(4)
  03bf5e0  ori 3, 31, 0
  03bf5e4  li 4, 0
  03bf5e8  fmuls 1, 2, 1
  03bf5ec  fctiwz 1, 1
  03bf5f0  stfd 1, 320(1)
  03bf5f4  lwz 6, 324(1)
  03bf5f8  extsw 6, 6
  03bf5fc  bl 0xfddc0
  03bf600  nop
  03bf604  b 0x3c02ec
  03bf608  lfs 3, 20(29)
  03bf60c  lfs 4, 16(29)
  03bf610  fsubs 1, 1, 3
  03bf614  fsubs 2, 2, 4
  03bf618  lis 3, 60
  03bf61c  addi 3, 3, -5224
  03bf620  fmuls 1, 1, 1
  03bf624  fmadds 1, 2, 2, 1
  03bf628  lfs 2, 100(3)
  03bf62c  fsqrts 1, 1
  03bf630  fcmpu 0, 1, 2
  03bf634  cror 6, 1, 2
  03bf638  bt 6, 0x3c02ec
  03bf63c  li 3, 6
  03bf640  cmpwi 30, 2
  03bf644  stb 3, 32(31)
  03bf648  bt 2, 0x3c02ec
  03bf64c  lis 3, 60
  03bf650  lis 4, 114
  03bf654  addi 3, 3, -5224
  03bf658  li 5, 5
  03bf65c  lfs 1, 44(3)
  03bf660  lfs 2, -3056(4)
  03bf664  ori 3, 31, 0
  03bf668  fmuls 1, 2, 1
  03bf66c  li 4, 2
  03bf670  fctiwz 1, 1
  03bf674  stfd 1, 320(1)
  03bf678  lwz 6, 324(1)
  03bf67c  extsw 6, 6
  03bf680  bl 0xfddc0
  03bf684  nop
  03bf688  b 0x3c02ec
  03bf68c  lbz 3, 112(31)
  03bf690  rlwinm 3, 3, 0, 30, 30
  03bf694  cmpwi 3, 0
  03bf698  bt 2, 0x3c02ec
  03bf69c  lwz 3, 556(30)
  03bf6a0  cmpwi 3, 0
  03bf6a4  bf 2, 0x3c02ec
  03bf6a8  li 3, 5
  03bf6ac  lbz 4, 83(31)
  03bf6b0  cmpwi 4, 1
  03bf6b4  stb 3, 32(31)
  03bf6b8  bt 2, 0x3c02ec
  03bf6bc  lis 3, 60
  03bf6c0  lis 4, 114
  03bf6c4  addi 3, 3, -5224
  03bf6c8  li 5, 0
  03bf6cc  lfs 1, 104(3)
  03bf6d0  lfs 2, -3056(4)
  03bf6d4  ori 3, 31, 0
  03bf6d8  fmuls 1, 2, 1
  03bf6dc  li 4, 1
  03bf6e0  fctiwz 1, 1
  03bf6e4  stfd 1, 320(1)
  03bf6e8  lwz 6, 324(1)
  03bf6ec  extsw 6, 6
  03bf6f0  bl 0xfddc0
  03bf6f4  nop
  03bf6f8  b 0x3c02ec
  03bf6fc  lbz 3, 112(31)
  03bf700  rlwinm 3, 3, 0, 30, 30
  03bf704  cmpwi 3, 0
  03bf708  bt 2, 0x3c02ec
  03bf70c  li 3, 4
  03bf710  lbz 4, 83(31)
  03bf714  cmpwi 4, 1
  03bf718  stb 3, 32(31)
  03bf71c  bt 2, 0x3c02ec
  03bf720  lis 3, 60
  03bf724  lis 4, 114
  03bf728  addi 3, 3, -5224
  03bf72c  li 5, 0
  03bf730  lfs 1, 44(3)
  03bf734  lfs 2, -3056(4)
  03bf738  ori 3, 31, 0
  03bf73c  li 4, 1
  03bf740  fmuls 1, 2, 1
  03bf744  fctiwz 1, 1
  03bf748  stfd 1, 320(1)
  03bf74c  lwz 6, 324(1)
  03bf750  extsw 6, 6
  03bf754  bl 0xfddc0
  03bf758  nop
  03bf75c  b 0x3c02ec
  03bf760  lfs 1, 20(31)
  03bf764  lfs 2, 20(29)
  03bf768  lfs 3, 16(31)
  03bf76c  fsubs 1, 1, 2
  03bf770  lfs 2, 16(29)
  03bf774  fsubs 2, 3, 2
  03bf778  lis 3, 132
  03bf77c  fmuls 1, 1, 1
  03bf780  fmadds 1, 2, 2, 1
  03bf784  lfs 2, 24120(3)
  03bf788  fsqrts 1, 1
  03bf78c  fcmpu 0, 1, 2
  03bf790  cror 6, 1, 2
  03bf794  bt 6, 0x3bf810
  03bf798  lis 4, 60
  03bf79c  li 3, 6
  03bf7a0  addi 4, 4, -5224
  03bf7a4  stb 3, 32(31)
  03bf7a8  lfs 1, 572(30)
  03bf7ac  lfs 2, 100(4)
  03bf7b0  lis 3, 114
  03bf7b4  fmuls 1, 1, 2
  03bf7b8  lfs 3, -3052(3)
  03bf7bc  fmuls 1, 1, 3
  03bf7c0  stfs 1, 404(30)
  03bf7c4  lbz 3, 83(31)
  03bf7c8  cmpwi 3, 2
  03bf7cc  bt 2, 0x3c02ec
  03bf7d0  lis 3, 60
  03bf7d4  lis 4, 114
  03bf7d8  addi 3, 3, -5224
  03bf7dc  li 5, 0
  03bf7e0  lfs 1, 44(3)
  03bf7e4  lfs 2, -3056(4)
  03bf7e8  ori 3, 31, 0
  03bf7ec  li 4, 2
  03bf7f0  fmuls 1, 2, 1
  03bf7f4  fctiwz 1, 1
  03bf7f8  stfd 1, 320(1)
  03bf7fc  lwz 6, 324(1)
  03bf800  extsw 6, 6
  03bf804  bl 0xfddc0
  03bf808  nop
  03bf80c  b 0x3c02ec
  03bf810  lis 3, 60
  03bf814  addic 27, 30, 576
  03bf818  lwz 5, 580(30)
  03bf81c  addi 3, 3, -5224
  03bf820  addic 28, 31, 16
  03bf824  addic 29, 29, 16
  03bf828  addic 9, 1, 208
  03bf82c  extsw 5, 5
  03bf830  lfs 1, 32(3)
  03bf834  lfs 2, 592(30)
  03bf838  ori 3, 27, 0
  03bf83c  li 4, 1
  03bf840  ori 7, 28, 0
  03bf844  ori 8, 29, 0
  03bf848  fmuls 1, 2, 1
  03bf84c  bl 0x114d58
  03bf850  nop
  03bf854  cmpwi 3, 0
  03bf858  bf 2, 0x3bf894
  03bf85c  lis 4, 60
  03bf860  lwz 5, 580(30)
  03bf864  ori 3, 27, 0
  03bf868  addi 4, 4, -5224
  03bf86c  ori 8, 29, 0
  03bf870  addic 9, 1, 208
  03bf874  extsw 5, 5
  03bf878  ori 7, 28, 0
  03bf87c  lfs 1, 108(4)
  03bf880  li 4, 1
  03bf884  bl 0x114d58
  03bf888  nop
  03bf88c  cmpwi 3, 0
  03bf890  bt 2, 0x3bf9e0
  03bf894  lfs 1, 208(1)
  03bf898  lfs 2, 16(31)
  03bf89c  lfs 3, 212(1)
  03bf8a0  lfs 4, 20(31)
  03bf8a4  fsubs 1, 1, 2
  03bf8a8  fsubs 2, 3, 4
  03bf8ac  bl 0x5e8338
  03bf8b0  nop
  03bf8b4  lfs 2, 564(30)
  03bf8b8  bl 0x502578
  03bf8bc  nop
  03bf8c0  lis 3, 60
  03bf8c4  lis 4, 114
  03bf8c8  addi 29, 3, -5224
  03bf8cc  lis 3, 114
  03bf8d0  addic 5, 30, 544
  03bf8d4  lfs 2, 112(29)
  03bf8d8  lfs 3, -3048(3)
  03bf8dc  lfs 4, 116(29)
  03bf8e0  addic 3, 31, 72
  03bf8e4  fmuls 2, 3, 2
  03bf8e8  lfs 5, -3052(4)
  03bf8ec  fmuls 4, 5, 4
  03bf8f0  fmr 3, 2
  03bf8f4  bl 0x10a2e0
  03bf8f8  nop
  03bf8fc  lfs 1, 68(29)
  03bf900  lfs 2, 72(29)
  03bf904  lfs 3, 72(31)
  03bf908  lfs 4, 76(29)
  03bf90c  fadds 1, 3, 1
  03bf910  fsubs 5, 2, 3
  03bf914  fsubs 6, 4, 3
  03bf918  li 3, 0
  03bf91c  addic 4, 30, 368
  03bf920  addic 5, 1, 192
  03bf924  addic 6, 30, 64
  03bf928  fsubs 2, 2, 1
  03bf92c  fsub 7, 3, 5
  03bf930  fsubs 4, 4, 1
  03bf934  fsub 8, 1, 2
  03bf938  fsel 3, 7, 5, 3
  03bf93c  lfs 5, 80(29)
  03bf940  fsel 1, 8, 2, 1
  03bf944  fsub 2, 6, 3
  03bf948  fsub 7, 4, 1
  03bf94c  fsel 2, 2, 6, 3
  03bf950  lfs 3, 84(29)
  03bf954  lfs 6, 88(29)
  03bf958  fsel 1, 7, 4, 1
  03bf95c  fmuls 4, 2, 2
  03bf960  fmuls 7, 1, 1
  03bf964  fmuls 8, 4, 2
  03bf968  fmuls 10, 7, 1
  03bf96c  fmuls 11, 4, 8
  03bf970  fmadds 2, 8, 5, 2
  03bf974  lfs 8, 92(29)
  03bf978  lfs 9, 100(29)
  03bf97c  stw 3, 200(1)
  03bf980  ori 3, 31, 0
  03bf984  fmuls 12, 7, 10
  03bf988  fmadds 1, 10, 5, 1
  03bf98c  fmuls 5, 4, 11
  03bf990  fmadds 2, 11, 3, 2
  03bf994  fmuls 10, 7, 12
  03bf998  fmadds 1, 12, 3, 1
  03bf99c  fmuls 3, 4, 5
  03bf9a0  fmadds 2, 5, 6, 2
  03bf9a4  fmuls 4, 7, 10
  03bf9a8  fmadds 1, 10, 6, 1
  03bf9ac  fmadds 2, 3, 8, 2
  03bf9b0  fmadds 1, 4, 8, 1
  03bf9b4  fmuls 2, 2, 9
  03bf9b8  fmuls 3, 1, 9
  03bf9bc  stfs 2, 196(1)
  03bf9c0  lfs 1, 28(29)
  03bf9c4  stfs 3, 192(1)
  03bf9c8  bl 0x101058
  03bf9cc  nop
  03bf9d0  lwz 3, 516(30)
  03bf9d4  cmpwi 3, 2
  03bf9d8  bt 2, 0x3bf9e8
  03bf9dc  b 0x3bf9f0
  03bf9e0  li 3, 2
  03bf9e4  stw 3, 516(30)
  03bf9e8  li 3, 5
  03bf9ec  stb 3, 32(31)
  03bf9f0  ori 3, 31, 0
  03bf9f4  bl 0x3bdbd0
  03bf9f8  b 0x3c02ec
  03bf9fc  lfs 1, 16(29)
  03bfa00  lfs 2, 16(31)
  03bfa04  addic 28, 31, 72
  03bfa08  lfs 3, 20(29)
  03bfa0c  lfs 4, 20(31)
  03bfa10  fsubs 1, 1, 2
  03bfa14  fsubs 2, 3, 4
  03bfa18  bl 0x5e8338
  03bfa1c  nop
  03bfa20  lis 3, 60
  03bfa24  lis 4, 114
  03bfa28  addi 3, 3, -5224
  03bfa2c  lis 6, 114
  03bfa30  addic 5, 30, 544
  03bfa34  lfs 2, 112(3)
  03bfa38  lfs 3, -3048(4)
  03bfa3c  lfs 4, 116(3)
  03bfa40  fmuls 2, 3, 2
  03bfa44  lfs 5, -3052(6)
  03bfa48  ori 3, 28, 0
  03bfa4c  fmuls 4, 5, 4
  03bfa50  fmr 3, 2
  03bfa54  bl 0x10a2e0
  03bfa58  nop
  03bfa5c  ori 3, 31, 0
  03bfa60  bl 0xefe40
  03bfa64  nop
  03bfa68  lbz 3, 82(31)
  03bfa6c  lbz 4, 83(31)
  03bfa70  cmpw 3, 4
  03bfa74  bf 2, 0x3bfb7c
  03bfa78  lis 3, 60
  03bfa7c  addi 3, 3, -5224
  03bfa80  lfs 2, 120(3)
  03bfa84  fcmpu 0, 1, 2
  03bfa88  bt 0, 0x3bfb7c
  03bfa8c  lis 3, 60
  03bfa90  addi 3, 3, -5224
  03bfa94  lfs 2, 124(3)
  03bfa98  fcmpu 0, 1, 2
  03bfa9c  bt 1, 0x3bfb7c
  03bfaa0  lis 3, 60
  03bfaa4  lfs 1, 72(31)
  03bfaa8  addi 7, 3, -5224
  03bfaac  lfs 2, 68(7)
  03bfab0  lfs 3, 72(7)
  03bfab4  fadds 2, 1, 2
  03bfab8  fsubs 5, 3, 1
  03bfabc  lfs 4, 76(7)
  03bfac0  fsubs 6, 4, 1
  03bfac4  li 5, 0
  03bfac8  addic 4, 30, 368
  03bfacc  ori 3, 31, 0
  03bfad0  fsubs 3, 3, 2
  03bfad4  fsub 7, 1, 5
  03bfad8  fsubs 4, 4, 2
  03bfadc  addic 6, 30, 64
  03bfae0  fsub 9, 2, 3
  03bfae4  fsel 1, 7, 5, 1
  03bfae8  lfs 5, 80(7)
  03bfaec  fsel 2, 9, 3, 2
  03bfaf0  fsub 3, 6, 1
  03bfaf4  fsub 8, 4, 2
  03bfaf8  fsel 1, 3, 6, 1
  03bfafc  lfs 3, 84(7)
  03bfb00  lfs 6, 88(7)
  03bfb04  lfs 7, 92(7)
  03bfb08  fsel 2, 8, 4, 2
  03bfb0c  fmuls 4, 1, 1
  03bfb10  fmuls 8, 2, 2
  03bfb14  fmuls 9, 4, 1
  03bfb18  fmuls 11, 8, 2
  03bfb1c  fmuls 12, 4, 9
  03bfb20  fmadds 1, 9, 5, 1
  03bfb24  lfs 9, 100(7)
  03bfb28  stw 5, 232(1)
  03bfb2c  addic 5, 1, 224
  03bfb30  fmuls 10, 8, 11
  03bfb34  fmadds 2, 11, 5, 2
  03bfb38  fmuls 5, 4, 12
  03bfb3c  fmadds 1, 12, 3, 1
  03bfb40  fmuls 11, 8, 10
  03bfb44  fmadds 2, 10, 3, 2
  03bfb48  fmuls 3, 4, 5
  03bfb4c  fmadds 1, 5, 6, 1
  03bfb50  fmuls 4, 8, 11
  03bfb54  fmadds 2, 11, 6, 2
  03bfb58  fmadds 1, 3, 7, 1
  03bfb5c  fmadds 2, 4, 7, 2
  03bfb60  fmuls 1, 1, 9
  03bfb64  fmuls 2, 2, 9
  03bfb68  stfs 1, 228(1)
  03bfb6c  lfs 1, 28(7)
  03bfb70  stfs 2, 224(1)
  03bfb74  bl 0x101058
  03bfb78  nop
  03bfb7c  lis 3, 60
  03bfb80  addi 4, 3, -5224
  03bfb84  ori 3, 31, 0
  03bfb88  lfs 1, 128(4)
  03bfb8c  bl 0x113e88
  03bfb90  nop
  03bfb94  cmpwi 3, 0
  03bfb98  lbz 4, 112(31)
  03bfb9c  lbz 3, 83(31)
  03bfba0  bt 2, 0x3bfd18
  03bfba4  lfs 1, 20(31)
  03bfba8  lfs 2, 20(29)
  03bfbac  lfs 3, 16(31)
  03bfbb0  fsubs 1, 1, 2
  03bfbb4  lfs 2, 16(29)
  03bfbb8  fsubs 2, 3, 2
  03bfbbc  lis 5, 60
  03bfbc0  addi 5, 5, -5224
  03bfbc4  fmuls 1, 1, 1
  03bfbc8  fmadds 1, 2, 2, 1
  03bfbcc  fsqrts 2, 1
  03bfbd0  lfs 1, 100(5)
  03bfbd4  fcmpu 0, 2, 1
  03bfbd8  cror 6, 1, 2
  03bfbdc  bt 6, 0x3bfd18
  03bfbe0  lfs 2, 24(29)
  03bfbe4  lfs 3, 24(31)
  03bfbe8  fsubs 2, 2, 3
  03bfbec  lfs 3, 592(30)
  03bfbf0  fmuls 1, 3, 1
  03bfbf4  fabs 2, 2
  03bfbf8  fcmpu 0, 2, 1
  03bfbfc  cror 6, 1, 2
  03bfc00  bt 6, 0x3bfd18
  03bfc04  lis 3, 60
  03bfc08  lfs 1, 72(31)
  03bfc0c  addi 6, 3, -5224
  03bfc10  lis 3, 17839
  03bfc14  lfs 2, 68(6)
  03bfc18  lfs 3, 72(6)
  03bfc1c  fadds 2, 1, 2
  03bfc20  fsubs 5, 3, 1
  03bfc24  lfs 4, 76(6)
  03bfc28  li 4, 0
  03bfc2c  ori 3, 3, 57190
  03bfc30  lis 5, 1
  03bfc34  addic 7, 1, 256
  03bfc38  fsubs 3, 3, 2
  03bfc3c  fsub 7, 1, 5
  03bfc40  fsubs 6, 4, 2
  03bfc44  fsubs 4, 4, 1
  03bfc48  addic 8, 1, 240
  03bfc4c  ori 5, 5, 1
  03bfc50  fsub 8, 2, 3
  03bfc54  fsel 1, 7, 5, 1
  03bfc58  fsel 2, 8, 3, 2
  03bfc5c  fsub 5, 4, 1
  03bfc60  lfs 3, 80(6)
  03bfc64  fsub 7, 6, 2
  03bfc68  fsel 1, 5, 4, 1
  03bfc6c  lfs 4, 84(6)
  03bfc70  lfs 5, 88(6)
  03bfc74  lfs 9, 92(6)
  03bfc78  stw 4, 248(1)
  03bfc7c  stw 3, 252(1)
  03bfc80  fsel 2, 7, 6, 2
  03bfc84  fmuls 6, 1, 1
  03bfc88  ori 3, 29, 0
  03bfc8c  ori 4, 31, 0
  03bfc90  fmuls 7, 2, 2
  03bfc94  fmuls 8, 6, 1
  03bfc98  fmuls 10, 7, 2
  03bfc9c  fmuls 11, 6, 8
  03bfca0  fmadds 1, 8, 3, 1
  03bfca4  fmuls 8, 7, 10
  03bfca8  fmadds 2, 10, 3, 2
  03bfcac  fmuls 3, 6, 11
  03bfcb0  fmadds 1, 11, 4, 1
  03bfcb4  fmuls 10, 7, 8
  03bfcb8  fmadds 2, 8, 4, 2
  03bfcbc  fmuls 4, 6, 3
  03bfcc0  fmadds 1, 3, 5, 1
  03bfcc4  fmuls 3, 7, 10
  03bfcc8  fmadds 2, 10, 5, 2
  03bfccc  fmadds 1, 4, 9, 1
  03bfcd0  fmadds 2, 3, 9, 2
  03bfcd4  stfs 1, 244(1)
  03bfcd8  stfs 2, 240(1)
  03bfcdc  lfs 1, 16(29)
  03bfce0  stfs 1, 256(1)
  03bfce4  lfs 1, 20(29)
  03bfce8  stfs 1, 260(1)
  03bfcec  lfs 1, 24(29)
  03bfcf0  stfs 1, 264(1)
  03bfcf4  lfs 2, 28(29)
  03bfcf8  stfs 2, 268(1)
  03bfcfc  lfs 2, 132(6)
  03bfd00  fadds 1, 1, 2
  03bfd04  stfs 1, 264(1)
  03bfd08  lfs 1, 28(6)
  03bfd0c  bl 0x105c08
  03bfd10  nop
  03bfd14  b 0x3c02ec
  03bfd18  rlwinm 4, 4, 0, 30, 30
  03bfd1c  cmpwi 4, 0
  03bfd20  bt 2, 0x3c02ec
  03bfd24  li 4, 7
  03bfd28  cmpwi 3, 3
  03bfd2c  stb 4, 32(31)
  03bfd30  bt 2, 0x3bfd70
  03bfd34  lis 3, 60
  03bfd38  lis 4, 114
  03bfd3c  addi 3, 3, -5224
  03bfd40  li 5, 0
  03bfd44  lfs 1, 44(3)
  03bfd48  lfs 2, -3056(4)
  03bfd4c  ori 3, 31, 0
  03bfd50  li 4, 3
  03bfd54  fmuls 1, 2, 1
  03bfd58  fctiwz 1, 1
  03bfd5c  stfd 1, 320(1)
  03bfd60  lwz 6, 324(1)
  03bfd64  extsw 6, 6
  03bfd68  bl 0xfddc0
  03bfd6c  nop
  03bfd70  lis 3, 114
  03bfd74  lfs 1, 572(30)
  03bfd78  lfs 2, -3052(3)
  03bfd7c  fmuls 1, 1, 2
  03bfd80  stfs 1, 404(30)
  03bfd84  b 0x3c02ec
  03bfd88  lbz 3, 112(31)
  03bfd8c  rlwinm 3, 3, 0, 30, 30
  03bfd90  cmpwi 3, 0
  03bfd94  bt 2, 0x3c02ec
  03bfd98  li 3, 4
  03bfd9c  lbz 4, 83(31)
  03bfda0  cmpwi 4, 1
  03bfda4  stb 3, 32(31)
  03bfda8  bt 2, 0x3c02ec
  03bfdac  lis 3, 60
  03bfdb0  lis 4, 114
  03bfdb4  addi 3, 3, -5224
  03bfdb8  li 5, 0
  03bfdbc  lfs 1, 44(3)
  03bfdc0  lfs 2, -3056(4)
  03bfdc4  ori 3, 31, 0
  03bfdc8  li 4, 1
  03bfdcc  fmuls 1, 2, 1
  03bfdd0  fctiwz 1, 1
  03bfdd4  stfd 1, 320(1)
  03bfdd8  lwz 6, 324(1)
  03bfddc  extsw 6, 6
  03bfde0  bl 0xfddc0
  03bfde4  nop
  03bfde8  b 0x3c02ec
  03bfdec  lfs 1, 20(31)
  03bfdf0  lfs 2, 532(30)
  03bfdf4  lfs 3, 16(31)
  03bfdf8  fsubs 1, 1, 2
  03bfdfc  lfs 2, 528(30)
  03bfe00  fsubs 2, 3, 2
  03bfe04  lis 3, 60
  03bfe08  addi 3, 3, -5224
  03bfe0c  fmuls 1, 1, 1
  03bfe10  lfs 31, 28(3)
  03bfe14  fmadds 1, 2, 2, 1
  03bfe18  fsqrts 1, 1
  03bfe1c  fcmpu 0, 1, 31
  03bfe20  cror 6, 1, 2
  03bfe24  bt 6, 0x3bfe34
  03bfe28  li 3, 1
  03bfe2c  stb 3, 32(31)
  03bfe30  b 0x3bfff0
  03bfe34  lis 3, 60
  03bfe38  addic 28, 30, 576
  03bfe3c  lwz 5, 580(30)
  03bfe40  addi 3, 3, -5224
  03bfe44  addic 29, 30, 528
  03bfe48  extsw 5, 5
  03bfe4c  addic 7, 31, 16
  03bfe50  addic 9, 1, 288
  03bfe54  lfs 1, 32(3)
  03bfe58  lfs 2, 592(30)
  03bfe5c  ori 3, 28, 0
  03bfe60  li 4, 1
  03bfe64  ori 8, 29, 0
  03bfe68  fmuls 1, 2, 1
  03bfe6c  bl 0x114d58
  03bfe70  nop
  03bfe74  cmpwi 3, 0
  03bfe78  bf 2, 0x3bfeb4
  03bfe7c  lis 3, 60
  03bfe80  lwz 5, 580(30)
  03bfe84  ori 8, 29, 0
  03bfe88  addi 3, 3, -5224
  03bfe8c  addic 9, 1, 288
  03bfe90  extsw 5, 5
  03bfe94  li 4, 1
  03bfe98  ori 7, 29, 0
  03bfe9c  lfs 1, 108(3)
  03bfea0  ori 3, 28, 0
  03bfea4  bl 0x114d58
  03bfea8  nop
  03bfeac  cmpwi 3, 0
  03bfeb0  bt 2, 0x3bfff0
  03bfeb4  lfs 1, 288(1)
  03bfeb8  lfs 2, 16(31)
  03bfebc  lfs 3, 292(1)
  03bfec0  lfs 4, 20(31)
  03bfec4  fsubs 1, 1, 2
  03bfec8  fsubs 2, 3, 4
  03bfecc  bl 0x5e8338
  03bfed0  nop
  03bfed4  lfs 2, 564(30)
  03bfed8  bl 0x502578
  03bfedc  nop
  03bfee0  lis 3, 60
  03bfee4  lis 4, 114
  03bfee8  addi 29, 3, -5224
  03bfeec  lis 6, 114
  03bfef0  addic 3, 31, 72
  03bfef4  addic 5, 30, 544
  03bfef8  lfs 2, 112(29)
  03bfefc  lfs 3, -3048(4)
  03bff00  lfs 4, 116(29)
  03bff04  fmuls 2, 3, 2
  03bff08  lfs 5, -3052(6)
  03bff0c  fmuls 4, 5, 4
  03bff10  fmr 3, 2
  03bff14  bl 0x10a2e0
  03bff18  nop
  03bff1c  lfs 1, 68(29)
  03bff20  lfs 2, 72(31)
  03bff24  lfs 3, 72(29)
  03bff28  fadds 1, 2, 1
  03bff2c  lfs 4, 76(29)
  03bff30  fsubs 5, 3, 2
  03bff34  li 3, 0
  03bff38  addic 4, 30, 368
  03bff3c  addic 5, 1, 272
  03bff40  addic 6, 30, 64
  03bff44  fsubs 3, 3, 1
  03bff48  fsub 7, 2, 5
  03bff4c  fsubs 6, 4, 1
  03bff50  fsubs 4, 4, 2
  03bff54  fsub 8, 1, 3
  03bff58  fsel 2, 7, 5, 2
  03bff5c  lfs 5, 80(29)
  03bff60  fsel 1, 8, 3, 1
  03bff64  fsub 3, 4, 2
  03bff68  fsub 8, 6, 1
  03bff6c  fsel 2, 3, 4, 2
  03bff70  lfs 3, 84(29)
  03bff74  lfs 4, 88(29)
  03bff78  lfs 9, 92(29)
  03bff7c  fsel 1, 8, 6, 1
  03bff80  fmuls 6, 2, 2
  03bff84  fmuls 7, 1, 1
  03bff88  fmuls 8, 6, 2
  03bff8c  fmuls 10, 7, 1
  03bff90  fmuls 11, 6, 8
  03bff94  fmadds 2, 8, 5, 2
  03bff98  lfs 8, 100(29)
  03bff9c  stw 3, 280(1)
  03bffa0  ori 3, 31, 0
  03bffa4  fmuls 12, 7, 10
  03bffa8  fmadds 1, 10, 5, 1
  03bffac  fmuls 5, 6, 11
  03bffb0  fmadds 2, 11, 3, 2
  03bffb4  fmuls 10, 7, 12
  03bffb8  fmadds 1, 12, 3, 1
  03bffbc  fmuls 3, 6, 5
  03bffc0  fmadds 2, 5, 4, 2
  03bffc4  fmuls 5, 7, 10
  03bffc8  fmadds 1, 10, 4, 1
  03bffcc  fmadds 2, 3, 9, 2
  03bffd0  fmadds 3, 5, 9, 1
  03bffd4  fmr 1, 31
  03bffd8  fmuls 2, 2, 8
  03bffdc  fmuls 3, 3, 8
  03bffe0  stfs 2, 276(1)
  03bffe4  stfs 3, 272(1)
  03bffe8  bl 0x101058
  03bffec  nop
  03bfff0  lwz 3, 516(30)
  03bfff4  cmpwi 3, 2
  03bfff8  bt 2, 0x3c004c
  03bfffc  li 3, 4
  03c0000  lbz 4, 83(31)
  03c0004  cmpwi 4, 1
  03c0008  stb 3, 32(31)
  03c000c  bt 2, 0x3c004c
  03c0010  lis 3, 60
  03c0014  lis 4, 114
  03c0018  addi 3, 3, -5224
  03c001c  li 5, 0
  03c0020  lfs 1, 136(3)
  03c0024  lfs 2, -3056(4)
  03c0028  ori 3, 31, 0
  03c002c  fmuls 1, 2, 1
  03c0030  li 4, 1
  03c0034  fctiwz 1, 1
  03c0038  stfd 1, 320(1)
  03c003c  lwz 6, 324(1)
  03c0040  extsw 6, 6
  03c0044  bl 0xfddc0
  03c0048  nop
  03c004c  ori 3, 31, 0
  03c0050  bl 0x3bdbd0
  03c0054  b 0x3c02ec
  03c0058  ori 3, 31, 0
  03c005c  addic 4, 30, 96
  03c0060  bl 0x10b030
  03c0064  nop
  03c0068  clrlwi 4, 3, 31
  03c006c  cmpwi 4, 0
  03c0070  bt 2, 0x3c0184
  03c0074  lis 3, 60
  03c0078  lwz 5, 580(30)
  03c007c  addic 7, 31, 16
  03c0080  addi 4, 3, -5224
  03c0084  addic 3, 30, 576
  03c0088  addic 8, 30, 528
  03c008c  extsw 5, 5
  03c0090  addic 9, 1, 304
  03c0094  lfs 1, 32(4)
  03c0098  lfs 2, 592(30)
  03c009c  li 4, 1
  03c00a0  fmuls 1, 2, 1
  03c00a4  bl 0x114d58
  03c00a8  nop
  03c00ac  cmpwi 3, 0
  03c00b0  bt 2, 0x3c0150
  03c00b4  li 3, 4
  03c00b8  li 4, 0
  03c00bc  ori 5, 31, 0
  03c00c0  bl 0x15d12c
  03c00c4  nop
  03c00c8  lis 3, 114
  03c00cc  lfs 1, 572(30)
  03c00d0  li 4, 9
  03c00d4  lfs 2, -3052(3)
  03c00d8  fmuls 1, 1, 2
  03c00dc  stfs 1, 404(30)
  03c00e0  lbz 3, 83(31)
  03c00e4  stb 4, 32(31)
  03c00e8  cmpwi 3, 5
  03c00ec  bt 2, 0x3c012c
  03c00f0  lis 3, 60
  03c00f4  lis 4, 114
  03c00f8  addi 3, 3, -5224
  03c00fc  li 5, 4
  03c0100  lfs 1, 44(3)
  03c0104  lfs 2, -3056(4)
  03c0108  ori 3, 31, 0
  03c010c  li 4, 5
  03c0110  fmuls 1, 2, 1
  03c0114  fctiwz 1, 1
  03c0118  stfd 1, 320(1)
  03c011c  lwz 6, 324(1)
  03c0120  extsw 6, 6
  03c0124  bl 0xfddc0
  03c0128  nop
  03c012c  lfs 1, 16(31)
  03c0130  stfs 1, 528(30)
  03c0134  lfs 1, 20(31)
  03c0138  stfs 1, 532(30)
  03c013c  lfs 1, 24(31)
  03c0140  stfs 1, 536(30)
  03c0144  lfs 1, 28(31)
  03c0148  stfs 1, 540(30)
  03c014c  b 0x3c02ec
  03c0150  lis 4, 161
  03c0154  ori 3, 31, 0
  03c0158  addic 4, 4, 23856
  03c015c  bl 0x3bd6c0
  03c0160  ori 3, 31, 0
  03c0164  li 4, 0
  03c0168  li 5, -1
  03c016c  bl 0xfd8d0
  03c0170  nop
  03c0174  ori 3, 31, 0
  03c0178  bl 0xefb38
  03c017c  nop
  03c0180  b 0x3c02ec
  03c0184  li 4, 288
  03c0188  and 3, 3, 4
  03c018c  cmpwi 3, 0
  03c0190  bt 2, 0x3c02ec
  03c0194  ori 3, 31, 0
  03c0198  bl 0xefb38
  03c019c  nop
  03c01a0  b 0x3c02ec
  03c01a4  lbz 3, 112(31)
  03c01a8  rlwinm 3, 3, 0, 30, 30
  03c01ac  cmpwi 3, 0
  03c01b0  bt 2, 0x3c02ec
  03c01b4  li 3, 4
  03c01b8  lbz 4, 83(31)
  03c01bc  cmpwi 4, 1
  03c01c0  stb 3, 32(31)
  03c01c4  bt 2, 0x3c0204
  03c01c8  lis 3, 60
  03c01cc  lis 4, 114
  03c01d0  addi 3, 3, -5224
  03c01d4  li 5, 0
  03c01d8  lfs 1, 44(3)
  03c01dc  lfs 2, -3056(4)
  03c01e0  ori 3, 31, 0
  03c01e4  li 4, 1
  03c01e8  fmuls 1, 2, 1
  03c01ec  fctiwz 1, 1
  03c01f0  stfd 1, 320(1)
  03c01f4  lwz 6, 324(1)
  03c01f8  extsw 6, 6
  03c01fc  bl 0xfddc0
  03c0200  nop
  03c0204  li 3, 0
  03c0208  lis 4, 60
  03c020c  addi 4, 4, -5224
  03c0210  stw 3, 76(30)
  03c0214  stw 3, 72(30)
  03c0218  stw 3, 68(30)
  03c021c  stw 3, 64(30)
  03c0220  lfs 1, 48(4)
  03c0224  lfs 2, 52(4)
  03c0228  bl 0xfcbe8
  03c022c  nop
  03c0230  lis 3, 114
  03c0234  stfs 1, 564(30)
  03c0238  lfs 1, 572(30)
  03c023c  lfs 2, -3052(3)
  03c0240  fmuls 1, 1, 2
  03c0244  stfs 1, 404(30)
  03c0248  b 0x3c02ec
  03c024c  lhz 4, 52(31)
  03c0250  lis 3, 151
  03c0254  ori 5, 4, 1
  03c0258  addic 3, 3, -25168
  03c025c  lwz 4, 604(30)
  03c0260  extsw 4, 4
  03c0264  sth 5, 52(31)
  03c0268  bl 0x110b70
  03c026c  nop
  03c0270  cmpwi 3, 0
  03c0274  bt 2, 0x3c02ec
  03c0278  li 3, 1
  03c027c  lis 5, 60
  03c0280  lis 4, 16256
  03c0284  addi 5, 5, -5224
  03c0288  stb 3, 32(31)
  03c028c  stw 4, 88(31)
  03c0290  lfs 1, 24(31)
  03c0294  lfs 2, 40(5)
  03c0298  lhz 4, 52(31)
  03c029c  fadds 1, 1, 2
  03c02a0  ori 4, 4, 4096
  03c02a4  lwz 5, 36(31)
  03c02a8  rlwinm 4, 4, 0, 16, 30
  03c02ac  stfs 1, 24(31)
  03c02b0  lwz 5, 16(5)
  03c02b4  sth 4, 52(31)
  03c02b8  stw 5, 148(31)
  03c02bc  stb 3, 49(31)
  03c02c0  b 0x3c02ec
  03c02c4  ori 3, 31, 0
  03c02c8  addic 4, 30, 96
  03c02cc  bl 0x48c188
  03c02d0  nop
  03c02d4  cmpwi 3, 0
  03c02d8  bt 2, 0x3c02ec
  03c02dc  li 3, 1
  03c02e0  li 4, 0
  03c02e4  stb 3, 32(31)
  03c02e8  sth 4, 296(30)
  03c02ec  ld 0, 400(1)
  03c02f0  mtlr 0
  03c02f4  lfd 31, 376(1)
  03c02f8  ld 27, 336(1)
  03c02fc  ld 28, 344(1)
  03c0300  ld 29, 352(1)
  03c0304  ld 30, 360(1)
  03c0308  ld 31, 368(1)
  03c030c  addi 1, 1, 384
  03c0310  blr

M866_003c0314:   # 0x3c0314, 0x78 bytes
  03c0314  stdu 1, -128(1)
  03c0318  mflr 0
  03c031c  std 0, 144(1)
  03c0320  std 31, 120(1)
  03c0324  ori 31, 3, 0
  03c0328  bl 0x48a718
  03c032c  nop
  03c0330  cmpwi 3, 0
  03c0334  bt 2, 0x3c0364
  03c0338  lhz 4, 166(31)
  03c033c  cmpwi 4, 866
  03c0340  bf 2, 0x3c0350
  03c0344  lbz 4, 32(31)
  03c0348  cmpwi 4, 8
  03c034c  bf 2, 0x3c0358
  03c0350  li 3, 0
  03c0354  b 0x3c0378
  03c0358  li 4, 14
  03c035c  stb 4, 32(31)
  03c0360  b 0x3c0378
  03c0364  lbz 4, 32(31)
  03c0368  cmpwi 4, 14
  03c036c  bf 2, 0x3c0378
  03c0370  li 4, 1
  03c0374  stb 4, 32(31)
  03c0378  ld 0, 144(1)
  03c037c  mtlr 0
  03c0380  ld 31, 120(1)
  03c0384  addi 1, 1, 128
  03c0388  blr

M866_003c038c:   # 0x3c038c, 0x58 bytes
  03c038c  stdu 1, -128(1)
  03c0390  mflr 0
  03c0394  std 0, 144(1)
  03c0398  std 31, 120(1)
  03c039c  ori 31, 3, 0
  03c03a0  bl 0x48aa70
  03c03a4  nop
  03c03a8  cmpwi 3, 0
  03c03ac  bt 2, 0x3c03bc
  03c03b0  li 4, 14
  03c03b4  stb 4, 32(31)
  03c03b8  b 0x3c03d0
  03c03bc  lbz 4, 32(31)
  03c03c0  cmpwi 4, 14
  03c03c4  bf 2, 0x3c03d0
  03c03c8  li 4, 1
  03c03cc  stb 4, 32(31)
  03c03d0  ld 0, 144(1)
  03c03d4  mtlr 0
  03c03d8  ld 31, 120(1)
  03c03dc  addi 1, 1, 128
  03c03e0  blr

M866_003c03e4:   # 0x3c03e4, 0x58 bytes
  03c03e4  stdu 1, -128(1)
  03c03e8  mflr 0
  03c03ec  std 0, 144(1)
  03c03f0  std 31, 120(1)
  03c03f4  ori 31, 3, 0
  03c03f8  bl 0x48acb8
  03c03fc  nop
  03c0400  cmpwi 3, 0
  03c0404  bt 2, 0x3c0414
  03c0408  li 4, 14
  03c040c  stb 4, 32(31)
  03c0410  b 0x3c0428
  03c0414  lbz 4, 32(31)
  03c0418  cmpwi 4, 14
  03c041c  bf 2, 0x3c0428
  03c0420  li 4, 1
  03c0424  stb 4, 32(31)
  03c0428  ld 0, 144(1)
  03c042c  mtlr 0
  03c0430  ld 31, 120(1)
  03c0434  addi 1, 1, 128
  03c0438  blr

M866_003c043c:   # 0x3c043c, 0x38 bytes
  03c043c  stdu 1, -128(1)
  03c0440  mflr 0
  03c0444  std 0, 144(1)
  03c0448  std 31, 120(1)
  03c044c  ori 31, 3, 0
  03c0450  bl 0x48afe8
  03c0454  nop
  03c0458  li 4, 14
  03c045c  stb 4, 32(31)
  03c0460  ld 0, 144(1)
  03c0464  mtlr 0
  03c0468  ld 31, 120(1)
  03c046c  addi 1, 1, 128
  03c0470  blr

M866_003c0474:   # 0x3c0474, 0x40 bytes
  03c0474  cmpwi 3, 0
  03c0478  bt 2, 0x3c04ac
  03c047c  li 4, 0
  03c0480  lwz 3, 120(3)
  03c0484  li 5, 0
  03c0488  subc 4, 4, 3
  03c048c  addic 3, 3, 192
  03c0490  cntlzw 4, 4
  03c0494  subc 5, 5, 3
  03c0498  sldi 4, 4, 58
  03c049c  sradi 4, 4, 63
  03c04a0  and 4, 4, 5
  03c04a4  addc 3, 3, 4
  03c04a8  b 0x3c04b0
  03c04ac  li 3, 0
  03c04b0  blr

M866_003c04b4:   # 0x3c04b4, 0x14 bytes
  03c04b4  lis 3, 132
  03c04b8  lis 4, 1
  03c04bc  addic 3, 3, 24288
  03c04c0  stw 4, 72(3)
  03c04c4  blr

M866_003c04c8:   # 0x3c04c8, 0x40 bytes
  03c04c8  cmpwi 3, 0
  03c04cc  bt 2, 0x3c0500
  03c04d0  lbz 4, 32(3)
  03c04d4  cmpwi 6, 4, 253
  03c04d8  cmpwi 4, 254
  03c04dc  cror 2, 2, 26
  03c04e0  cmpwi 1, 4, 5
  03c04e4  bt 2, 0x3c0500
  03c04e8  lhz 3, 166(3)
  03c04ec  cmpwi 3, 573
  03c04f0  bf 2, 0x3c0500
  03c04f4  bf 6, 0x3c0500
  03c04f8  li 3, 1
  03c04fc  b 0x3c0504
  03c0500  li 3, 0
  03c0504  blr
