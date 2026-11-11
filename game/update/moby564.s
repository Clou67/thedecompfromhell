# game/update/moby564.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M564_003ba6fc:   # 0x3ba6fc, 0x14 bytes
  03ba6fc  lis 3, 132
  03ba700  lis 4, 1
  03ba704  addic 3, 3, 23396
  03ba708  stw 4, 72(3)
  03ba70c  blr

M564_003ba730:   # 0x3ba730, 0x1ac bytes
  03ba730  stdu 1, -240(1)
  03ba734  mflr 0
  03ba738  std 0, 256(1)
  03ba73c  stfd 29, 216(1)
  03ba740  stfd 30, 224(1)
  03ba744  stfd 31, 232(1)
  03ba748  std 31, 208(1)
  03ba74c  ori 31, 3, 0
  03ba750  std 30, 200(1)
  03ba754  lis 4, 60
  03ba758  li 30, 240
  03ba75c  addi 4, 4, -22768
  03ba760  addc 7, 1, 30
  03ba764  lwz 3, 120(31)
  03ba768  addic 30, 30, 64
  03ba76c  std 5, 64(7)
  03ba770  std 6, 72(7)
  03ba774  lwz 3, 56(3)
  03ba778  lfs 3, 0(4)
  03ba77c  clrlwi 4, 3, 31
  03ba780  std 29, 192(1)
  03ba784  cmpwi 1, 4, 0
  03ba788  bt 6, 0x3ba798
  03ba78c  lis 4, 60
  03ba790  addi 4, 4, -22768
  03ba794  lfs 3, 4(4)
  03ba798  lis 4, 60
  03ba79c  addi 4, 4, -22768
  03ba7a0  lfs 2, 4(4)
  03ba7a4  fmr 31, 2
  03ba7a8  bt 6, 0x3ba7b8
  03ba7ac  lis 4, 60
  03ba7b0  addi 4, 4, -22768
  03ba7b4  lfs 2, 8(4)
  03ba7b8  lis 4, 60
  03ba7bc  addi 4, 4, -22768
  03ba7c0  lfs 1, 12(4)
  03ba7c4  fmr 30, 1
  03ba7c8  bt 6, 0x3ba7d0
  03ba7cc  fmr 1, 31
  03ba7d0  lis 4, 60
  03ba7d4  rlwinm 3, 3, 0, 29, 29
  03ba7d8  addi 4, 4, -22768
  03ba7dc  cmpwi 3, 0
  03ba7e0  lfs 29, 16(4)
  03ba7e4  bt 2, 0x3ba7f4
  03ba7e8  lis 3, 60
  03ba7ec  addi 3, 3, -22768
  03ba7f0  lfs 29, 20(3)
  03ba7f4  lis 3, 60
  03ba7f8  fmr 6, 3
  03ba7fc  li 6, 1
  03ba800  fmr 4, 1
  03ba804  addi 29, 3, -22768
  03ba808  fmr 3, 2
  03ba80c  li 7, 0
  03ba810  fmr 1, 29
  03ba814  li 11, -1
  03ba818  fmr 2, 30
  03ba81c  addc 4, 1, 30
  03ba820  addic 30, 31, 16
  03ba824  lfs 5, 24(29)
  03ba828  clrldi 4, 4, 32
  03ba82c  lfs 7, 28(29)
  03ba830  ori 3, 31, 0
  03ba834  std 6, 144(1)
  03ba838  ori 5, 30, 0
  03ba83c  std 7, 160(1)
  03ba840  li 8, 20
  03ba844  std 7, 168(1)
  03ba848  li 9, 6
  03ba84c  std 11, 176(1)
  03ba850  li 10, 32
  03ba854  std 7, 184(1)
  03ba858  bl 0x10e030
  03ba85c  nop
  03ba860  lfs 1, 20(29)
  03ba864  fcmpu 0, 29, 1
  03ba868  bt 2, 0x3ba8b4
  03ba86c  lis 3, 151
  03ba870  addic 3, 3, -25376
  03ba874  lbz 3, 8356(3)
  03ba878  cmpwi 3, 2
  03ba87c  bf 2, 0x3ba8b4
  03ba880  lis 4, 132
  03ba884  li 5, 0
  03ba888  fmr 1, 31
  03ba88c  li 6, 2
  03ba890  fmr 3, 30
  03ba894  ori 3, 31, 0
  03ba898  li 9, 0
  03ba89c  lfs 2, 23516(4)
  03ba8a0  li 10, 1
  03ba8a4  ori 4, 30, 0
  03ba8a8  std 5, 112(1)
  03ba8ac  bl 0x105870
  03ba8b0  nop
  03ba8b4  ld 0, 256(1)
  03ba8b8  mtlr 0
  03ba8bc  lfd 29, 216(1)
  03ba8c0  lfd 30, 224(1)
  03ba8c4  lfd 31, 232(1)
  03ba8c8  ld 29, 192(1)
  03ba8cc  ld 30, 200(1)
  03ba8d0  ld 31, 208(1)
  03ba8d4  addi 1, 1, 240
  03ba8d8  blr

M564_003ba908:   # 0x3ba908, 0x1d4 bytes
  03ba908  stdu 1, -272(1)
  03ba90c  mflr 0
  03ba910  std 0, 288(1)
  03ba914  stfd 29, 248(1)
  03ba918  stfd 30, 256(1)
  03ba91c  stfd 31, 264(1)
  03ba920  std 28, 216(1)
  03ba924  lis 5, 60
  03ba928  std 31, 240(1)
  03ba92c  addic 28, 1, 144
  03ba930  addi 31, 5, -22308
  03ba934  std 30, 232(1)
  03ba938  lis 5, 114
  03ba93c  std 29, 224(1)
  03ba940  ori 30, 3, 0
  03ba944  ori 29, 4, 0
  03ba948  ori 3, 28, 0
  03ba94c  lfs 1, 0(31)
  03ba950  lfs 2, 4(31)
  03ba954  lfs 3, -3052(5)
  03ba958  fmuls 1, 3, 1
  03ba95c  fmuls 2, 3, 2
  03ba960  bl 0xfea60
  03ba964  nop
  03ba968  lfs 30, 8(31)
  03ba96c  lfs 29, 12(31)
  03ba970  fmr 1, 30
  03ba974  fmr 2, 29
  03ba978  bl 0xfcbe8
  03ba97c  nop
  03ba980  lfs 2, 0(29)
  03ba984  lfs 3, 4(29)
  03ba988  lis 4, 114
  03ba98c  lfs 4, 8(29)
  03ba990  lfs 5, 16(30)
  03ba994  lfs 6, 20(30)
  03ba998  fmadds 2, 2, 1, 5
  03ba99c  lfs 5, 24(30)
  03ba9a0  fmadds 3, 3, 1, 6
  03ba9a4  lfs 6, 12(29)
  03ba9a8  fmadds 1, 4, 1, 5
  03ba9ac  stfs 6, 172(1)
  03ba9b0  lis 7, 96
  03ba9b4  addic 3, 1, 160
  03ba9b8  fmr 5, 30
  03ba9bc  li 6, 127
  03ba9c0  ori 7, 7, 24672
  03ba9c4  li 8, 3
  03ba9c8  stfs 2, 160(1)
  03ba9cc  stfs 3, 164(1)
  03ba9d0  stfs 1, 168(1)
  03ba9d4  lfs 31, 16(31)
  03ba9d8  fmr 3, 29
  03ba9dc  lfs 1, -3056(4)
  03ba9e0  ori 4, 28, 0
  03ba9e4  fmuls 1, 1, 31
  03ba9e8  fctiwz 1, 1
  03ba9ec  stfd 1, 192(1)
  03ba9f0  lwz 5, 196(1)
  03ba9f4  lfs 1, 20(31)
  03ba9f8  lfs 2, 24(31)
  03ba9fc  lfs 4, 28(31)
  03baa00  extsw 5, 5
  03baa04  bl 0x12e3e8
  03baa08  nop
  03baa0c  lfs 4, 224(30)
  03baa10  cmpwi 3, 0
  03baa14  lfs 3, 228(30)
  03baa18  lfs 2, 232(30)
  03baa1c  lfs 1, 236(30)
  03baa20  bt 2, 0x3baa40
  03baa24  lis 4, 165
  03baa28  li 5, 68
  03baa2c  addic 4, 4, 10244
  03baa30  lwz 4, 92(4)
  03baa34  lbz 4, 0(4)
  03baa38  stb 5, 3(3)
  03baa3c  stb 4, 2(3)
  03baa40  lis 3, 60
  03baa44  lis 6, 114
  03baa48  addi 5, 3, -22308
  03baa4c  lis 7, 20224
  03baa50  addic 4, 1, 176
  03baa54  li 9, 1
  03baa58  lfs 5, 32(5)
  03baa5c  fmuls 4, 4, 5
  03baa60  fmuls 3, 3, 5
  03baa64  fmuls 2, 2, 5
  03baa68  fmuls 1, 1, 5
  03baa6c  addic 3, 1, 160
  03baa70  stfs 4, 176(1)
  03baa74  stfs 3, 180(1)
  03baa78  stfs 2, 184(1)
  03baa7c  stfs 1, 188(1)
  03baa80  lfs 1, -3056(6)
  03baa84  lis 6, 8191
  03baa88  fmuls 2, 1, 31
  03baa8c  lfs 1, 36(5)
  03baa90  ori 6, 6, 65535
  03baa94  ori 5, 7, 32767
  03baa98  fctiwz 2, 2
  03baa9c  stfd 2, 192(1)
  03baaa0  lwz 8, 196(1)
  03baaa4  extsw 8, 8
  03baaa8  bl 0x1268f8
  03baaac  nop
  03baab0  ld 0, 288(1)
  03baab4  mtlr 0
  03baab8  lfd 29, 248(1)
  03baabc  lfd 30, 256(1)
  03baac0  lfd 31, 264(1)
  03baac4  ld 28, 216(1)
  03baac8  ld 29, 224(1)
  03baacc  ld 30, 232(1)
  03baad0  ld 31, 240(1)
  03baad4  addi 1, 1, 272
  03baad8  blr

UpdateMoby_564:   # 0x3baaf0, 0x9ac bytes
  03baaf0  stdu 1, -544(1)
  03baaf4  mflr 0
  03baaf8  std 0, 560(1)
  03baafc  stfd 25, 488(1)
  03bab00  stfd 26, 496(1)
  03bab04  stfd 27, 504(1)
  03bab08  stfd 28, 512(1)
  03bab0c  stfd 29, 520(1)
  03bab10  stfd 30, 528(1)
  03bab14  stfd 31, 536(1)
  03bab18  std 31, 480(1)
  03bab1c  lis 4, 151
  03bab20  std 30, 472(1)
  03bab24  ori 31, 3, 0
  03bab28  lwz 30, 120(3)
  03bab2c  addic 4, 4, -25376
  03bab30  lwz 3, 8324(4)
  03bab34  std 29, 464(1)
  03bab38  std 28, 456(1)
  03bab3c  std 27, 448(1)
  03bab40  cmpwi 3, 114
  03bab44  bt 2, 0x3bab58
  03bab48  lis 3, 161
  03bab4c  lwz 3, 1800(3)
  03bab50  cmpwi 3, 2
  03bab54  bf 2, 0x3bab68
  03bab58  ori 3, 31, 0
  03bab5c  bl 0xefb38
  03bab60  nop
  03bab64  b 0x3bb45c
  03bab68  lbz 3, 32(31)
  03bab6c  cmpwi 3, 0
  03bab70  bf 2, 0x3bb45c
  03bab74  lfs 1, 16(31)
  03bab78  lfs 2, 20(31)
  03bab7c  stfs 1, 144(1)
  03bab80  lfs 1, 24(31)
  03bab84  stfs 2, 148(1)
  03bab88  lfs 2, 28(31)
  03bab8c  stfs 1, 152(1)
  03bab90  lwz 3, 44(30)
  03bab94  stfs 2, 156(1)
  03bab98  extsw 3, 3
  03bab9c  bl 0x502730
  03baba0  nop
  03baba4  fmr 31, 1
  03baba8  lwz 3, 48(30)
  03babac  extsw 3, 3
  03babb0  bl 0x502730
  03babb4  nop
  03babb8  fdivs 25, 31, 1
  03babbc  lis 3, 60
  03babc0  lfs 1, 16(30)
  03babc4  addi 28, 3, -21796
  03babc8  lfs 2, 16(31)
  03babcc  lfs 3, 0(28)
  03babd0  lfs 4, 20(30)
  03babd4  lfs 5, 20(31)
  03babd8  lfs 6, 24(30)
  03babdc  lfs 7, 24(31)
  03babe0  lfs 26, 28(30)
  03babe4  fmr 31, 3
  03babe8  fsubs 30, 1, 2
  03babec  lwz 3, 52(30)
  03babf0  lwz 4, 44(30)
  03babf4  fsubs 29, 4, 5
  03babf8  subc 3, 3, 4
  03babfc  fsubs 28, 6, 7
  03bac00  extsw 3, 3
  03bac04  fsub 1, 31, 25
  03bac08  fsel 25, 1, 25, 31
  03bac0c  bl 0x502730
  03bac10  nop
  03bac14  fdivs 1, 31, 1
  03bac18  li 3, 0
  03bac1c  lfs 27, 4(28)
  03bac20  lis 29, 115
  03bac24  stw 3, 140(1)
  03bac28  stw 3, 132(1)
  03bac2c  stw 3, 128(1)
  03bac30  addic 29, 29, 22784
  03bac34  fmuls 31, 30, 1
  03bac38  fmuls 30, 29, 1
  03bac3c  fmuls 29, 28, 1
  03bac40  fabs 3, 31
  03bac44  fabs 4, 30
  03bac48  stfs 31, 332(1)
  03bac4c  stfs 30, 336(1)
  03bac50  fsubs 2, 3, 4
  03bac54  stfs 2, 340(1)
  03bac58  lwz 3, 332(1)
  03bac5c  lfs 1, 332(1)
  03bac60  lwz 4, 336(1)
  03bac64  lfs 2, 336(1)
  03bac68  lfs 28, 8(28)
  03bac6c  fabs 1, 1
  03bac70  fabs 5, 2
  03bac74  rlwinm 4, 4, 3, 29, 29
  03bac78  lwz 5, 340(1)
  03bac7c  lfs 2, 340(1)
  03bac80  rlwimi 4, 5, 2, 30, 30
  03bac84  fsub 6, 2, 27
  03bac88  fsub 7, 2, 27
  03bac8c  rlwimi 4, 3, 4, 28, 28
  03bac90  ori 3, 29, 0
  03bac94  rlwimi 3, 4, 2, 26, 28
  03bac98  slwi 4, 4, 2
  03bac9c  clrldi 3, 3, 32
  03baca0  fsel 4, 6, 1, 4
  03baca4  lfsx 1, 29, 4
  03baca8  lfs 2, 4(3)
  03bacac  fsel 3, 7, 5, 3
  03bacb0  fcmpu 0, 4, 27
  03bacb4  bt 1, 0x3bacc0
  03bacb8  fmr 1, 27
  03bacbc  b 0x3badd8
  03bacc0  fsubs 5, 3, 4
  03bacc4  fadds 3, 3, 4
  03bacc8  addic 3, 1, 16
  03baccc  li 6, 2
  03bacd0  addic 4, 3, 392
  03bacd4  addic 5, 3, 408
  03bacd8  mtctr 6
  03bacdc  fdivs 3, 5, 3
  03bace0  fmuls 4, 3, 3
  03bace4  stfs 3, 420(1)
  03bace8  stfs 3, 412(1)
  03bacec  stfs 3, 416(1)
  03bacf0  stfs 3, 408(1)
  03bacf4  lfs 6, 420(1)
  03bacf8  lfs 7, 412(1)
  03bacfc  lfs 8, 416(1)
  03bad00  fmuls 5, 4, 4
  03bad04  fmuls 7, 7, 4
  03bad08  fmuls 6, 6, 5
  03bad0c  fmuls 3, 5, 5
  03bad10  fmuls 5, 8, 5
  03bad14  stfs 7, 412(1)
  03bad18  fmuls 4, 6, 4
  03bad1c  stfs 5, 416(1)
  03bad20  stfs 4, 420(1)
  03bad24  lfs 4, 392(3)
  03bad28  fmuls 4, 4, 3
  03bad2c  stfs 4, 408(3)
  03bad30  lfs 4, 4(4)
  03bad34  addic 3, 3, 8
  03bad38  addic 4, 4, 8
  03bad3c  fmuls 4, 4, 3
  03bad40  stfs 4, 4(5)
  03bad44  addic 5, 5, 8
  03bad48  bdnz 0x3bad24
  03bad4c  li 5, 4
  03bad50  ori 3, 1, 0
  03bad54  mtctr 5
  03bad58  lis 4, 115
  03bad5c  addic 5, 3, 408
  03bad60  addic 4, 4, 22752
  03bad64  ori 7, 5, 0
  03bad68  lfs 3, 408(3)
  03bad6c  lfs 4, 0(4)
  03bad70  fmuls 3, 3, 4
  03bad74  lfs 4, 4(4)
  03bad78  addic 4, 4, 8
  03bad7c  stfs 3, 408(3)
  03bad80  lfs 3, 4(5)
  03bad84  addic 3, 3, 8
  03bad88  fmuls 3, 3, 4
  03bad8c  stfs 3, 4(5)
  03bad90  addic 5, 5, 8
  03bad94  bdnz 0x3bad68
  03bad98  fmr 3, 27
  03bad9c  ori 3, 1, 0
  03bada0  mtctr 6
  03bada4  lfs 4, 408(3)
  03bada8  fadds 3, 3, 4
  03badac  addic 3, 3, 16
  03badb0  lfs 4, 4(7)
  03badb4  lfs 5, 8(7)
  03badb8  lfs 6, 12(7)
  03badbc  addic 7, 7, 16
  03badc0  fadds 3, 3, 4
  03badc4  fadds 3, 3, 5
  03badc8  fadds 3, 3, 6
  03badcc  bdnz 0x3bada4
  03badd0  fadds 3, 3, 28
  03badd4  fmadds 1, 3, 1, 2
  03badd8  addic 28, 1, 160
  03baddc  stfs 1, 136(1)
  03bade0  addic 27, 1, 128
  03bade4  ori 3, 28, 0
  03bade8  ori 4, 27, 0
  03badec  bl 0x500b64
  03badf0  nop
  03badf4  addic 3, 1, 256
  03badf8  ori 4, 28, 0
  03badfc  bl 0x5010c0
  03bae00  nop
  03bae04  li 5, 0
  03bae08  addic 3, 1, 208
  03bae0c  ori 4, 27, 0
  03bae10  stw 5, 140(1)
  03bae14  stw 5, 136(1)
  03bae18  stw 5, 132(1)
  03bae1c  stw 5, 128(1)
  03bae20  lfs 1, 36(30)
  03bae24  stfs 1, 136(1)
  03bae28  lfs 1, 40(30)
  03bae2c  stfs 1, 132(1)
  03bae30  bl 0x500b64
  03bae34  nop
  03bae38  lfs 1, 276(1)
  03bae3c  lfs 2, 272(1)
  03bae40  fmuls 1, 1, 30
  03bae44  lfs 3, 260(1)
  03bae48  lfs 4, 256(1)
  03bae4c  fmuls 2, 2, 30
  03bae50  lfs 5, 292(1)
  03bae54  lfs 6, 280(1)
  03bae58  lfs 7, 288(1)
  03bae5c  fmuls 6, 6, 30
  03bae60  lfs 8, 264(1)
  03bae64  fmadds 1, 3, 31, 1
  03bae68  fmadds 2, 4, 31, 2
  03bae6c  lfs 3, 296(1)
  03bae70  lfs 4, 228(1)
  03bae74  fmadds 6, 8, 31, 6
  03bae78  fmadds 1, 5, 29, 1
  03bae7c  fmadds 2, 7, 29, 2
  03bae80  lfs 5, 224(1)
  03bae84  lfs 7, 212(1)
  03bae88  fmadds 3, 3, 29, 6
  03bae8c  lfs 6, 268(1)
  03bae90  lfs 8, 208(1)
  03bae94  fmadds 6, 6, 31, 26
  03bae98  lfs 9, 244(1)
  03bae9c  fmuls 4, 4, 1
  03baea0  lfs 10, 300(1)
  03baea4  fmuls 5, 5, 1
  03baea8  lfs 11, 232(1)
  03baeac  lfs 12, 240(1)
  03baeb0  fmuls 11, 11, 1
  03baeb4  lfs 13, 284(1)
  03baeb8  fmadds 6, 10, 29, 6
  03baebc  fmadds 4, 7, 2, 4
  03baec0  fmadds 5, 8, 2, 5
  03baec4  lfs 7, 216(1)
  03baec8  lfs 8, 176(1)
  03baecc  lfs 10, 248(1)
  03baed0  fmadds 7, 7, 2, 11
  03baed4  ori 3, 31, 0
  03baed8  fmadds 6, 13, 30, 6
  03baedc  fmadds 4, 9, 3, 4
  03baee0  lfs 9, 160(1)
  03baee4  fmadds 5, 12, 3, 5
  03baee8  lfs 11, 220(1)
  03baeec  lfs 12, 180(1)
  03baef0  fmadds 7, 10, 3, 7
  03baef4  addic 4, 1, 112
  03baef8  fmadds 2, 11, 2, 6
  03baefc  lfs 6, 192(1)
  03baf00  fmuls 8, 8, 4
  03baf04  lfs 10, 252(1)
  03baf08  fmuls 11, 12, 4
  03baf0c  lfs 12, 164(1)
  03baf10  lfs 13, 236(1)
  03baf14  lfs 0, 184(1)
  03baf18  lfs 31, 196(1)
  03baf1c  fmuls 0, 0, 4
  03baf20  fmadds 2, 10, 3, 2
  03baf24  fmadds 3, 9, 5, 8
  03baf28  fmadds 8, 12, 5, 11
  03baf2c  lfs 9, 0(30)
  03baf30  lfs 10, 168(1)
  03baf34  lfs 11, 200(1)
  03baf38  fmadds 10, 10, 5, 0
  03baf3c  fmadds 1, 13, 1, 2
  03baf40  fmadds 2, 6, 7, 3
  03baf44  fmadds 3, 31, 7, 8
  03baf48  lfs 6, 172(1)
  03baf4c  lfs 8, 4(30)
  03baf50  fmadds 10, 11, 7, 10
  03baf54  lfs 11, 8(30)
  03baf58  fmadds 1, 6, 5, 1
  03baf5c  lfs 5, 204(1)
  03baf60  fsubs 2, 2, 9
  03baf64  lfs 6, 188(1)
  03baf68  fsubs 3, 3, 8
  03baf6c  fsubs 8, 10, 11
  03baf70  fmadds 1, 5, 7, 1
  03baf74  fmadds 2, 2, 25, 9
  03baf78  fmadds 1, 6, 4, 1
  03baf7c  stfs 2, 112(1)
  03baf80  lfs 2, 4(30)
  03baf84  fmadds 2, 3, 25, 2
  03baf88  stfs 2, 116(1)
  03baf8c  lfs 2, 8(30)
  03baf90  stfs 1, 124(1)
  03baf94  fmadds 2, 8, 25, 2
  03baf98  stfs 2, 120(1)
  03baf9c  bl 0x3ba908
  03bafa0  lwz 3, 112(1)
  03bafa4  lfs 2, 112(1)
  03bafa8  lwz 5, 116(1)
  03bafac  lfs 3, 116(1)
  03bafb0  fabs 6, 2
  03bafb4  lfs 4, 16(31)
  03bafb8  fabs 1, 3
  03bafbc  lfs 5, 20(31)
  03bafc0  fadds 7, 4, 2
  03bafc4  lfs 9, 24(31)
  03bafc8  lwz 4, 120(1)
  03bafcc  lfs 4, 120(1)
  03bafd0  fadds 5, 5, 3
  03bafd4  fadds 9, 9, 4
  03bafd8  rlwinm 5, 5, 3, 29, 29
  03bafdc  fsubs 8, 6, 1
  03bafe0  stfs 7, 16(31)
  03bafe4  stfs 8, 328(1)
  03bafe8  stfs 5, 20(31)
  03bafec  stfs 9, 24(31)
  03baff0  lfs 5, 64(31)
  03baff4  lwz 6, 328(1)
  03baff8  lfs 7, 328(1)
  03baffc  rlwimi 5, 6, 2, 30, 30
  03bb000  fsub 8, 7, 27
  03bb004  fsub 9, 7, 27
  03bb008  rlwimi 5, 3, 4, 28, 28
  03bb00c  ori 3, 29, 0
  03bb010  rlwimi 3, 5, 2, 26, 28
  03bb014  slwi 5, 5, 2
  03bb018  clrldi 3, 3, 32
  03bb01c  fsel 7, 8, 6, 1
  03bb020  lfsx 31, 29, 5
  03bb024  fsel 6, 9, 1, 6
  03bb028  lfs 1, 4(3)
  03bb02c  fcmpu 0, 7, 27
  03bb030  bt 1, 0x3bb03c
  03bb034  fmr 31, 27
  03bb038  b 0x3bb154
  03bb03c  fsubs 8, 6, 7
  03bb040  fadds 6, 6, 7
  03bb044  addic 3, 1, 16
  03bb048  li 7, 2
  03bb04c  addic 5, 3, 360
  03bb050  addic 6, 3, 376
  03bb054  mtctr 7
  03bb058  fdivs 6, 8, 6
  03bb05c  fmuls 7, 6, 6
  03bb060  stfs 6, 388(1)
  03bb064  stfs 6, 380(1)
  03bb068  stfs 6, 384(1)
  03bb06c  stfs 6, 376(1)
  03bb070  lfs 9, 388(1)
  03bb074  lfs 10, 380(1)
  03bb078  lfs 11, 384(1)
  03bb07c  fmuls 8, 7, 7
  03bb080  fmuls 10, 10, 7
  03bb084  fmuls 9, 9, 8
  03bb088  fmuls 6, 8, 8
  03bb08c  fmuls 8, 11, 8
  03bb090  stfs 10, 380(1)
  03bb094  fmuls 7, 9, 7
  03bb098  stfs 8, 384(1)
  03bb09c  stfs 7, 388(1)
  03bb0a0  lfs 7, 360(3)
  03bb0a4  fmuls 7, 7, 6
  03bb0a8  stfs 7, 376(3)
  03bb0ac  lfs 7, 4(5)
  03bb0b0  addic 3, 3, 8
  03bb0b4  addic 5, 5, 8
  03bb0b8  fmuls 7, 7, 6
  03bb0bc  stfs 7, 4(6)
  03bb0c0  addic 6, 6, 8
  03bb0c4  bdnz 0x3bb0a0
  03bb0c8  li 6, 4
  03bb0cc  ori 3, 1, 0
  03bb0d0  mtctr 6
  03bb0d4  lis 5, 115
  03bb0d8  addic 6, 3, 376
  03bb0dc  addic 5, 5, 22752
  03bb0e0  ori 8, 6, 0
  03bb0e4  lfs 6, 376(3)
  03bb0e8  lfs 7, 0(5)
  03bb0ec  fmuls 6, 6, 7
  03bb0f0  lfs 7, 4(5)
  03bb0f4  addic 5, 5, 8
  03bb0f8  stfs 6, 376(3)
  03bb0fc  lfs 6, 4(6)
  03bb100  addic 3, 3, 8
  03bb104  fmuls 6, 6, 7
  03bb108  stfs 6, 4(6)
  03bb10c  addic 6, 6, 8
  03bb110  bdnz 0x3bb0e4
  03bb114  fmr 6, 27
  03bb118  ori 3, 1, 0
  03bb11c  mtctr 7
  03bb120  lfs 7, 376(3)
  03bb124  fadds 6, 6, 7
  03bb128  addic 3, 3, 16
  03bb12c  lfs 7, 4(8)
  03bb130  lfs 8, 8(8)
  03bb134  lfs 9, 12(8)
  03bb138  addic 8, 8, 16
  03bb13c  fadds 6, 6, 7
  03bb140  fadds 6, 6, 8
  03bb144  fadds 6, 6, 9
  03bb148  bdnz 0x3bb120
  03bb14c  fadds 6, 6, 28
  03bb150  fmadds 31, 6, 31, 1
  03bb154  fmuls 1, 3, 3
  03bb158  stfs 31, 72(31)
  03bb15c  rlwinm 3, 4, 3, 29, 29
  03bb160  fmadds 1, 2, 2, 1
  03bb164  fabs 2, 4
  03bb168  fsqrts 1, 1
  03bb16c  fabs 4, 1
  03bb170  stfs 1, 320(1)
  03bb174  fsubs 1, 4, 2
  03bb178  stfs 1, 324(1)
  03bb17c  lwz 4, 320(1)
  03bb180  lfs 1, 320(1)
  03bb184  lwz 5, 324(1)
  03bb188  fabs 3, 1
  03bb18c  lfs 1, 324(1)
  03bb190  rlwimi 3, 5, 2, 30, 30
  03bb194  fsub 6, 1, 27
  03bb198  rlwimi 3, 4, 4, 28, 28
  03bb19c  fsub 7, 1, 27
  03bb1a0  ori 4, 29, 0
  03bb1a4  rlwimi 4, 3, 2, 26, 28
  03bb1a8  slwi 3, 3, 2
  03bb1ac  clrldi 4, 4, 32
  03bb1b0  lfsx 31, 29, 3
  03bb1b4  fsel 3, 6, 3, 2
  03bb1b8  lfs 1, 4(4)
  03bb1bc  fsel 2, 7, 2, 4
  03bb1c0  fcmpu 0, 3, 27
  03bb1c4  bt 1, 0x3bb1cc
  03bb1c8  b 0x3bb2e0
  03bb1cc  fsubs 4, 2, 3
  03bb1d0  fadds 2, 2, 3
  03bb1d4  addic 3, 1, 16
  03bb1d8  li 7, 2
  03bb1dc  addic 4, 3, 328
  03bb1e0  addic 5, 3, 344
  03bb1e4  mtctr 7
  03bb1e8  fdivs 2, 4, 2
  03bb1ec  fmuls 3, 2, 2
  03bb1f0  stfs 2, 356(1)
  03bb1f4  stfs 2, 348(1)
  03bb1f8  stfs 2, 352(1)
  03bb1fc  stfs 2, 344(1)
  03bb200  lfs 6, 356(1)
  03bb204  lfs 7, 348(1)
  03bb208  lfs 8, 352(1)
  03bb20c  fmuls 4, 3, 3
  03bb210  fmuls 7, 7, 3
  03bb214  fmuls 6, 6, 4
  03bb218  fmuls 2, 4, 4
  03bb21c  fmuls 4, 8, 4
  03bb220  stfs 7, 348(1)
  03bb224  fmuls 3, 6, 3
  03bb228  stfs 4, 352(1)
  03bb22c  stfs 3, 356(1)
  03bb230  lfs 3, 328(3)
  03bb234  fmuls 3, 3, 2
  03bb238  stfs 3, 344(3)
  03bb23c  lfs 3, 4(4)
  03bb240  addic 3, 3, 8
  03bb244  addic 4, 4, 8
  03bb248  fmuls 3, 3, 2
  03bb24c  stfs 3, 4(5)
  03bb250  addic 5, 5, 8
  03bb254  bdnz 0x3bb230
  03bb258  li 5, 4
  03bb25c  ori 3, 1, 0
  03bb260  mtctr 5
  03bb264  lis 4, 115
  03bb268  addic 5, 3, 344
  03bb26c  addic 4, 4, 22752
  03bb270  ori 6, 5, 0
  03bb274  lfs 2, 344(3)
  03bb278  lfs 3, 0(4)
  03bb27c  fmuls 2, 2, 3
  03bb280  lfs 3, 4(4)
  03bb284  addic 4, 4, 8
  03bb288  stfs 2, 344(3)
  03bb28c  lfs 2, 4(5)
  03bb290  addic 3, 3, 8
  03bb294  fmuls 2, 2, 3
  03bb298  stfs 2, 4(5)
  03bb29c  addic 5, 5, 8
  03bb2a0  bdnz 0x3bb274
  03bb2a4  ori 3, 1, 0
  03bb2a8  mtctr 7
  03bb2ac  lfs 2, 344(3)
  03bb2b0  lfs 3, 4(6)
  03bb2b4  fadds 2, 27, 2
  03bb2b8  lfs 4, 8(6)
  03bb2bc  lfs 27, 12(6)
  03bb2c0  addic 3, 3, 16
  03bb2c4  addic 6, 6, 16
  03bb2c8  fadds 2, 2, 3
  03bb2cc  fadds 2, 2, 4
  03bb2d0  fadds 27, 2, 27
  03bb2d4  bdnz 0x3bb2ac
  03bb2d8  fadds 27, 27, 28
  03bb2dc  fmadds 27, 27, 31, 1
  03bb2e0  fneg 2, 27
  03bb2e4  lis 3, 60
  03bb2e8  fmr 1, 5
  03bb2ec  lis 4, 114
  03bb2f0  addi 3, 3, -21796
  03bb2f4  stfs 2, 68(31)
  03bb2f8  lfs 2, 12(3)
  03bb2fc  lfs 3, -3052(4)
  03bb300  fmuls 2, 3, 2
  03bb304  bl 0x502578
  03bb308  nop
  03bb30c  lwz 4, 44(30)
  03bb310  addic 3, 1, 144
  03bb314  stfs 1, 64(31)
  03bb318  li 5, 0
  03bb31c  addic 7, 4, 1
  03bb320  addic 4, 31, 16
  03bb324  ori 6, 31, 0
  03bb328  stw 7, 44(30)
  03bb32c  li 7, 0
  03bb330  bl 0x57820
  03bb334  nop
  03bb338  li 4, 44
  03bb33c  li 6, 52
  03bb340  addi 7, 4, 16
  03bb344  lwz 5, 44(30)
  03bb348  addi 8, 6, 16
  03bb34c  cmpwi 3, 0
  03bb350  <unknown>
  03bb354  <unknown>
  03bb358  <unknown>
  03bb35c  lwz 6, 52(30)
  03bb360  vor 3, 3, 4
  03bb364  <unknown>
  03bb368  vor 2, 2, 4
  03bb36c  bt 2, 0x3bb3ac
  03bb370  lis 4, 161
  03bb374  addic 4, 4, 2368
  03bb378  lwz 4, 24(4)
  03bb37c  cmpwi 4, 0
  03bb380  bt 2, 0x3bb3ac
  03bb384  lhz 4, 166(4)
  03bb388  cmpwi 4, 479
  03bb38c  cmpwi 1, 4, 419
  03bb390  bf 2, 0x3bb3a4
  03bb394  lwz 4, 56(30)
  03bb398  rlwinm 4, 4, 0, 29, 29
  03bb39c  stw 4, 56(30)
  03bb3a0  b 0x3bb3ac
  03bb3a4  bt 6, 0x3bb3ac
  03bb3a8  li 3, 0
  03bb3ac  cmpw 5, 6
  03bb3b0  cmpwi 1, 3, 0
  03bb3b4  bt 2, 0x3bb3bc
  03bb3b8  bt 6, 0x3bb3fc
  03bb3bc  lfs 1, 112(1)
  03bb3c0  ori 3, 31, 0
  03bb3c4  lfs 2, 120(1)
  03bb3c8  stfs 1, 64(1)
  03bb3cc  stfs 2, 72(1)
  03bb3d0  lfs 1, 116(1)
  03bb3d4  lfs 2, 124(1)
  03bb3d8  stfs 1, 68(1)
  03bb3dc  stfs 2, 76(1)
  03bb3e0  ld 5, 64(1)
  03bb3e4  ld 6, 72(1)
  03bb3e8  bl 0x3ba730
  03bb3ec  ori 3, 31, 0
  03bb3f0  bl 0xefb38
  03bb3f4  nop
  03bb3f8  b 0x3bb45c
  03bb3fc  lwz 3, 56(30)
  03bb400  rlwinm 3, 3, 0, 30, 30
  03bb404  cmpwi 3, 0
  03bb408  bt 2, 0x3bb45c
  03bb40c  vsubuwm 2, 2, 3
  03bb410  lis 3, 132
  03bb414  vspltisw 3, -1
  03bb418  li 4, 23508
  03bb41c  lis 5, 114
  03bb420  li 6, -3056
  03bb424  vcfsx 2, 2, 0
  03bb428  vslw 3, 3, 3
  03bb42c  <unknown>
  03bb430  <unknown>
  03bb434  vmaddfp 3, 4, 5, 3
  03bb438  vspltw 2, 2, 0
  03bb43c  vspltw 3, 3, 0
  03bb440  vcmpgtfp. 2, 2, 3
  03bb444  bf 26, 0x3bb45c
  03bb448  lis 3, 113
  03bb44c  ori 4, 31, 0
  03bb450  addic 3, 3, -11552
  03bb454  bl 0x6d720
  03bb458  nop
  03bb45c  ld 0, 560(1)
  03bb460  mtlr 0
  03bb464  lfd 25, 488(1)
  03bb468  lfd 26, 496(1)
  03bb46c  lfd 27, 504(1)
  03bb470  lfd 28, 512(1)
  03bb474  lfd 29, 520(1)
  03bb478  lfd 30, 528(1)
  03bb47c  lfd 31, 536(1)
  03bb480  ld 27, 448(1)
  03bb484  ld 28, 456(1)
  03bb488  ld 29, 464(1)
  03bb48c  ld 30, 472(1)
  03bb490  ld 31, 480(1)
  03bb494  addi 1, 1, 544
  03bb498  blr
