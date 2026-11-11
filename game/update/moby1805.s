# game/update/moby1805.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1805_002bab98:   # 0x2bab98, 0x3a0 bytes
  02bab98  stdu 1, -320(1)
  02bab9c  mflr 0
  02baba0  std 0, 336(1)
  02baba4  stfd 25, 264(1)
  02baba8  stfd 26, 272(1)
  02babac  stfd 27, 280(1)
  02babb0  stfd 28, 288(1)
  02babb4  stfd 29, 296(1)
  02babb8  stfd 30, 304(1)
  02babbc  stfd 31, 312(1)
  02babc0  lis 4, 123
  02babc4  lfs 28, 208(3)
  02babc8  lis 6, 123
  02babcc  std 31, 256(1)
  02babd0  lis 5, 44
  02babd4  addi 31, 5, -21632
  02babd8  lfs 26, 31820(4)
  02babdc  lfs 27, 212(3)
  02babe0  lfs 1, 216(3)
  02babe4  lfs 2, 16(3)
  02babe8  lfs 31, 220(3)
  02babec  lfs 3, 20(3)
  02babf0  fmadds 28, 28, 26, 2
  02babf4  lfs 2, 24(3)
  02babf8  lwz 3, 31832(6)
  02babfc  fmadds 27, 27, 26, 3
  02bac00  extsw 3, 3
  02bac04  fmadds 26, 1, 26, 2
  02bac08  bl 0x685c4
  02bac0c  nop
  02bac10  std 3, 232(1)
  02bac14  li 4, 2
  02bac18  li 3, 0
  02bac1c  li 5, 0
  02bac20  li 6, 1
  02bac24  li 7, 128
  02bac28  bl 0x502ea8
  02bac2c  nop
  02bac30  std 3, 248(1)
  02bac34  lis 9, 0
  02bac38  li 3, 0
  02bac3c  li 4, 0
  02bac40  li 5, 1
  02bac44  li 6, 1
  02bac48  li 7, 1
  02bac4c  li 8, 0
  02bac50  ori 9, 9, 65424
  02bac54  bl 0x502fd4
  02bac58  nop
  02bac5c  std 3, 240(1)
  02bac60  li 3, 0
  02bac64  li 4, 0
  02bac68  li 5, 0
  02bac6c  li 6, 0
  02bac70  li 7, 0
  02bac74  li 8, 0
  02bac78  bl 0x502f08
  02bac7c  nop
  02bac80  li 4, 0
  02bac84  std 3, 224(1)
  02bac88  lfs 30, 0(31)
  02bac8c  lis 5, 16256
  02bac90  li 3, 4
  02bac94  stw 4, 192(1)
  02bac98  stw 4, 196(1)
  02bac9c  stw 4, 200(1)
  02baca0  lfs 29, 4(31)
  02baca4  stw 5, 204(1)
  02baca8  stw 5, 208(1)
  02bacac  stw 4, 212(1)
  02bacb0  stw 5, 216(1)
  02bacb4  stw 5, 220(1)
  02bacb8  bl 0xfc620
  02bacbc  nop
  02bacc0  cmpwi 3, 0
  02bacc4  bf 2, 0x2bacd4
  02bacc8  lis 3, 123
  02baccc  lwz 31, 31828(3)
  02bacd0  b 0x2bacdc
  02bacd4  lis 3, 123
  02bacd8  lwz 31, 31824(3)
  02bacdc  srawi 3, 31, 24
  02bace0  bl 0x502730
  02bace4  nop
  02bace8  lis 3, 266
  02bacec  lfs 2, 3016(3)
  02bacf0  fmuls 1, 1, 2
  02bacf4  bl 0x502758
  02bacf8  nop
  02bacfc  lis 4, 149
  02bad00  addic 4, 4, 5056
  02bad04  fmr 2, 30
  02bad08  lfs 7, 324(4)
  02bad0c  lfs 6, 320(4)
  02bad10  fsubs 7, 7, 27
  02bad14  lfs 8, 328(4)
  02bad18  fsubs 6, 6, 28
  02bad1c  fsubs 8, 8, 26
  02bad20  fmr 3, 2
  02bad24  clrlwi 5, 31, 8
  02bad28  rlwimi 5, 3, 24, 0, 7
  02bad2c  fmuls 1, 7, 7
  02bad30  fmr 4, 3
  02bad34  fmadds 5, 6, 6, 1
  02bad38  lfs 1, 332(4)
  02bad3c  stw 5, 188(1)
  02bad40  stw 5, 184(1)
  02bad44  stw 5, 180(1)
  02bad48  stw 5, 176(1)
  02bad4c  fmadds 5, 8, 8, 5
  02bad50  fsqrts 9, 5
  02bad54  fcmpu 0, 9, 4
  02bad58  bt 2, 0x2bada8
  02bad5c  frsqrte 2, 5
  02bad60  lis 3, 44
  02bad64  addi 3, 3, -21632
  02bad68  lfs 3, 8(3)
  02bad6c  fmuls 4, 5, 2
  02bad70  fmuls 9, 3, 2
  02bad74  fnmsubs 4, 4, 2, 29
  02bad78  fmadds 2, 4, 9, 2
  02bad7c  fmuls 4, 5, 2
  02bad80  fmuls 9, 3, 2
  02bad84  fnmsubs 4, 4, 2, 29
  02bad88  fmadds 2, 4, 9, 2
  02bad8c  fmuls 4, 5, 2
  02bad90  fmuls 3, 3, 2
  02bad94  fnmsubs 4, 4, 2, 29
  02bad98  fmadds 2, 4, 3, 2
  02bad9c  fmuls 4, 2, 6
  02bada0  fmuls 3, 2, 7
  02bada4  fmuls 2, 2, 8
  02bada8  lis 3, 151
  02badac  addic 3, 3, -25376
  02badb0  lfs 5, 656(3)
  02badb4  lfs 6, 664(3)
  02badb8  fmuls 7, 5, 2
  02badbc  lfs 8, 660(3)
  02badc0  fmuls 9, 6, 3
  02badc4  fmuls 10, 8, 4
  02badc8  lis 3, 44
  02badcc  addi 3, 3, -21632
  02badd0  fmsubs 6, 6, 4, 7
  02badd4  fmsubs 7, 8, 2, 9
  02badd8  fmsubs 5, 5, 3, 10
  02baddc  lfs 11, 12(3)
  02bade0  lfs 12, 16(3)
  02bade4  fmuls 8, 6, 6
  02bade8  fmadds 10, 3, 12, 27
  02badec  li 5, 4
  02badf0  lis 4, 123
  02badf4  mtctr 5
  02badf8  fmadds 8, 7, 7, 8
  02badfc  lis 3, 123
  02bae00  addic 4, 4, 31840
  02bae04  addic 5, 1, 112
  02bae08  fmadds 8, 5, 5, 8
  02bae0c  fsqrts 9, 8
  02bae10  fmadds 8, 4, 12, 28
  02bae14  fmadds 12, 2, 12, 26
  02bae18  fdivs 11, 11, 9
  02bae1c  fsub 13, 30, 9
  02bae20  fsub 0, 30, 9
  02bae24  fsub 29, 30, 9
  02bae28  fsub 28, 9, 30
  02bae2c  fsub 27, 9, 30
  02bae30  fsub 9, 9, 30
  02bae34  fmuls 7, 7, 11
  02bae38  fmuls 6, 6, 11
  02bae3c  fmuls 11, 5, 11
  02bae40  fsel 5, 13, 30, 7
  02bae44  fsel 13, 0, 30, 6
  02bae48  fsel 30, 29, 30, 11
  02bae4c  fsel 5, 28, 5, 7
  02bae50  fsel 6, 27, 13, 6
  02bae54  fsel 30, 9, 30, 11
  02bae58  fmuls 11, 3, 5
  02bae5c  fmuls 7, 2, 6
  02bae60  fmuls 9, 4, 30
  02bae64  fmsubs 11, 4, 6, 11
  02bae68  fmsubs 7, 3, 30, 7
  02bae6c  fmsubs 9, 2, 5, 9
  02bae70  lfs 13, 31816(3)
  02bae74  lfs 0, 4(4)
  02bae78  lfs 29, 0(4)
  02bae7c  fmuls 0, 0, 13
  02bae80  fmuls 29, 29, 13
  02bae84  lfs 28, 8(4)
  02bae88  fmuls 13, 28, 13
  02bae8c  lfs 28, 12(4)
  02bae90  addic 4, 4, 16
  02bae94  fmuls 27, 0, 5
  02bae98  fmuls 26, 0, 6
  02bae9c  fmuls 0, 0, 30
  02baea0  fmuls 25, 29, 1
  02baea4  fmadds 27, 29, 4, 27
  02baea8  fmadds 26, 29, 3, 26
  02baeac  fmadds 0, 29, 2, 0
  02baeb0  fmadds 29, 28, 31, 25
  02baeb4  fmadds 27, 7, 13, 27
  02baeb8  fmadds 26, 9, 13, 26
  02baebc  fmadds 13, 11, 13, 0
  02baec0  stfs 29, 12(5)
  02baec4  fmadds 0, 8, 28, 27
  02baec8  fmadds 29, 10, 28, 26
  02baecc  fmadds 13, 12, 28, 13
  02baed0  stfs 0, 0(5)
  02baed4  stfs 29, 4(5)
  02baed8  stfs 13, 8(5)
  02baedc  addic 5, 5, 16
  02baee0  bdnz 0x2bae70
  02baee4  lis 4, 161
  02baee8  addic 3, 1, 112
  02baeec  addic 6, 4, 24396
  02baef0  li 4, 0
  02baef4  li 5, 0
  02baef8  li 7, 9
  02baefc  lwz 6, 28(6)
  02baf00  bl 0x72280
  02baf04  nop
  02baf08  ld 0, 336(1)
  02baf0c  mtlr 0
  02baf10  lfd 25, 264(1)
  02baf14  lfd 26, 272(1)
  02baf18  lfd 27, 280(1)
  02baf1c  lfd 28, 288(1)
  02baf20  lfd 29, 296(1)
  02baf24  lfd 30, 304(1)
  02baf28  lfd 31, 312(1)
  02baf2c  ld 31, 256(1)
  02baf30  addi 1, 1, 320
  02baf34  blr

M1805_002baf48:   # 0x2baf48, 0x7c8 bytes
  02baf48  stdu 1, -576(1)
  02baf4c  mflr 0
  02baf50  std 0, 592(1)
  02baf54  stfd 21, 488(1)
  02baf58  stfd 22, 496(1)
  02baf5c  stfd 23, 504(1)
  02baf60  stfd 24, 512(1)
  02baf64  stfd 25, 520(1)
  02baf68  stfd 26, 528(1)
  02baf6c  stfd 27, 536(1)
  02baf70  stfd 28, 544(1)
  02baf74  stfd 29, 552(1)
  02baf78  stfd 30, 560(1)
  02baf7c  stfd 31, 568(1)
  02baf80  std 31, 480(1)
  02baf84  lis 6, 123
  02baf88  ori 31, 3, 0
  02baf8c  std 28, 456(1)
  02baf90  fmr 24, 3
  02baf94  ori 28, 5, 0
  02baf98  fmr 21, 2
  02baf9c  lis 5, 44
  02bafa0  std 30, 472(1)
  02bafa4  fmr 31, 1
  02bafa8  ori 30, 9, 0
  02bafac  std 29, 464(1)
  02bafb0  lwz 3, 31808(6)
  02bafb4  ori 29, 4, 0
  02bafb8  std 27, 448(1)
  02bafbc  extsw 3, 3
  02bafc0  std 26, 440(1)
  02bafc4  std 25, 432(1)
  02bafc8  std 24, 424(1)
  02bafcc  std 23, 416(1)
  02bafd0  std 22, 408(1)
  02bafd4  addi 27, 5, -20680
  02bafd8  bl 0x685c4
  02bafdc  nop
  02bafe0  std 3, 232(1)
  02bafe4  li 3, 0
  02bafe8  li 4, 2
  02bafec  li 5, 0
  02baff0  li 6, 1
  02baff4  li 7, 128
  02baff8  bl 0x502ea8
  02baffc  nop
  02bb000  std 3, 248(1)
  02bb004  li 3, 0
  02bb008  lis 9, 0
  02bb00c  li 4, 0
  02bb010  li 5, 1
  02bb014  li 6, 1
  02bb018  li 7, 1
  02bb01c  li 8, 0
  02bb020  ori 9, 9, 65424
  02bb024  bl 0x502fd4
  02bb028  nop
  02bb02c  std 3, 240(1)
  02bb030  li 4, 0
  02bb034  li 3, 0
  02bb038  li 5, 0
  02bb03c  li 6, 0
  02bb040  li 7, 0
  02bb044  li 8, 0
  02bb048  bl 0x502f08
  02bb04c  nop
  02bb050  lis 4, 123
  02bb054  lis 5, 123
  02bb058  std 3, 224(1)
  02bb05c  slwi 29, 29, 24
  02bb060  lwz 3, 31760(4)
  02bb064  or 29, 3, 29
  02bb068  lwz 3, 31812(5)
  02bb06c  extsw 3, 3
  02bb070  stw 29, 188(1)
  02bb074  stw 29, 184(1)
  02bb078  stw 29, 180(1)
  02bb07c  stw 29, 176(1)
  02bb080  bl 0x685c4
  02bb084  nop
  02bb088  lis 4, 123
  02bb08c  std 3, 376(1)
  02bb090  slwi 28, 28, 24
  02bb094  ld 3, 248(1)
  02bb098  lis 25, 149
  02bb09c  ld 5, 240(1)
  02bb0a0  li 6, 0
  02bb0a4  addic 25, 25, 5056
  02bb0a8  lwz 4, 31764(4)
  02bb0ac  std 3, 392(1)
  02bb0b0  or 28, 4, 28
  02bb0b4  ld 3, 224(1)
  02bb0b8  lis 4, 16256
  02bb0bc  std 5, 384(1)
  02bb0c0  std 3, 368(1)
  02bb0c4  stw 28, 332(1)
  02bb0c8  stw 28, 328(1)
  02bb0cc  stw 28, 324(1)
  02bb0d0  stw 28, 320(1)
  02bb0d4  lfs 22, 0(27)
  02bb0d8  lfs 26, 320(25)
  02bb0dc  stw 6, 336(1)
  02bb0e0  stw 6, 340(1)
  02bb0e4  stw 6, 344(1)
  02bb0e8  fmr 1, 26
  02bb0ec  lfs 25, 4(27)
  02bb0f0  stw 4, 348(1)
  02bb0f4  stw 4, 352(1)
  02bb0f8  stw 6, 356(1)
  02bb0fc  stw 4, 360(1)
  02bb100  stw 4, 364(1)
  02bb104  stw 6, 192(1)
  02bb108  stw 6, 196(1)
  02bb10c  stw 6, 200(1)
  02bb110  stw 4, 204(1)
  02bb114  stw 4, 208(1)
  02bb118  stw 6, 212(1)
  02bb11c  stw 4, 216(1)
  02bb120  stw 4, 220(1)
  02bb124  lfs 28, 328(25)
  02bb128  lfs 5, 0(31)
  02bb12c  lfs 27, 324(25)
  02bb130  lfs 7, 8(31)
  02bb134  lfs 6, 4(31)
  02bb138  fsubs 11, 5, 1
  02bb13c  lfs 2, 24(31)
  02bb140  lfs 3, 16(31)
  02bb144  fsubs 9, 2, 7
  02bb148  fsubs 4, 3, 5
  02bb14c  fmr 3, 28
  02bb150  lfs 2, 20(31)
  02bb154  fsubs 8, 2, 6
  02bb158  fmr 2, 27
  02bb15c  fmuls 10, 11, 9
  02bb160  fsubs 12, 7, 3
  02bb164  fsubs 13, 6, 2
  02bb168  fmuls 0, 12, 8
  02bb16c  fmsubs 10, 12, 4, 10
  02bb170  fmuls 4, 13, 4
  02bb174  fmsubs 9, 13, 9, 0
  02bb178  fmuls 12, 10, 10
  02bb17c  fmsubs 11, 11, 8, 4
  02bb180  lfs 8, 12(31)
  02bb184  fmadds 12, 9, 9, 12
  02bb188  fmadds 12, 11, 11, 12
  02bb18c  fsqrts 4, 12
  02bb190  fcmpu 0, 4, 22
  02bb194  bt 2, 0x2bb1d8
  02bb198  frsqrte 4, 12
  02bb19c  lis 3, 44
  02bb1a0  addi 3, 3, -20680
  02bb1a4  lfs 13, 8(3)
  02bb1a8  fmuls 0, 12, 4
  02bb1ac  fmuls 30, 13, 4
  02bb1b0  fnmsubs 0, 0, 4, 25
  02bb1b4  fmadds 4, 0, 30, 4
  02bb1b8  fmuls 0, 12, 4
  02bb1bc  fmuls 30, 13, 4
  02bb1c0  fnmsubs 0, 0, 4, 25
  02bb1c4  fmadds 4, 0, 30, 4
  02bb1c8  fmuls 12, 12, 4
  02bb1cc  fmuls 13, 13, 4
  02bb1d0  fnmsubs 12, 12, 4, 25
  02bb1d4  fmadds 4, 12, 13, 4
  02bb1d8  fmuls 4, 4, 31
  02bb1dc  stfs 8, 124(1)
  02bb1e0  addic 27, 30, -1
  02bb1e4  stfs 8, 140(1)
  02bb1e8  li 22, 1
  02bb1ec  cmpwi 27, 1
  02bb1f0  fmadds 8, 9, 4, 5
  02bb1f4  fmadds 12, 10, 4, 6
  02bb1f8  fmadds 13, 11, 4, 7
  02bb1fc  fnmsubs 5, 9, 4, 5
  02bb200  fnmsubs 6, 10, 4, 6
  02bb204  fnmsubs 4, 11, 4, 7
  02bb208  stfs 8, 112(1)
  02bb20c  stfs 12, 116(1)
  02bb210  stfs 13, 120(1)
  02bb214  stfs 5, 128(1)
  02bb218  stfs 6, 132(1)
  02bb21c  stfs 4, 136(1)
  02bb220  bf 1, 0x2bb3e0
  02bb224  lis 3, 44
  02bb228  lis 23, 161
  02bb22c  addi 3, 3, -20680
  02bb230  addic 24, 30, -2
  02bb234  addic 26, 31, 16
  02bb238  addic 23, 23, 24396
  02bb23c  lfs 30, 8(3)
  02bb240  lfs 4, 0(26)
  02bb244  lfs 6, 8(26)
  02bb248  fsubs 7, 4, 1
  02bb24c  lfs 1, 24(26)
  02bb250  fsubs 3, 6, 3
  02bb254  lfs 5, 4(26)
  02bb258  fsubs 1, 1, 6
  02bb25c  lfs 8, 16(26)
  02bb260  fsubs 10, 5, 2
  02bb264  lfs 9, 20(26)
  02bb268  fsubs 8, 8, 4
  02bb26c  fsubs 9, 9, 5
  02bb270  cmpwi 1, 22, 1
  02bb274  fmuls 2, 7, 1
  02bb278  fmuls 12, 10, 8
  02bb27c  fmuls 11, 3, 9
  02bb280  fmsubs 2, 3, 8, 2
  02bb284  fmsubs 3, 7, 9, 12
  02bb288  fmsubs 1, 10, 1, 11
  02bb28c  fmuls 7, 2, 2
  02bb290  fmadds 9, 1, 1, 7
  02bb294  lfs 7, 12(26)
  02bb298  fmadds 9, 3, 3, 9
  02bb29c  fsqrts 8, 9
  02bb2a0  fcmpu 0, 8, 22
  02bb2a4  bt 2, 0x2bb2dc
  02bb2a8  frsqrte 8, 9
  02bb2ac  fmuls 10, 9, 8
  02bb2b0  fmuls 11, 8, 30
  02bb2b4  fnmsubs 10, 10, 8, 25
  02bb2b8  fmadds 8, 10, 11, 8
  02bb2bc  fmuls 10, 9, 8
  02bb2c0  fmuls 11, 8, 30
  02bb2c4  fnmsubs 10, 10, 8, 25
  02bb2c8  fmadds 8, 10, 11, 8
  02bb2cc  fmuls 9, 9, 8
  02bb2d0  fmuls 10, 8, 30
  02bb2d4  fnmsubs 9, 9, 8, 25
  02bb2d8  fmadds 8, 9, 10, 8
  02bb2dc  fmuls 8, 8, 31
  02bb2e0  stfs 7, 156(1)
  02bb2e4  stfs 7, 172(1)
  02bb2e8  cmpw 6, 22, 24
  02bb2ec  fmadds 7, 1, 8, 4
  02bb2f0  fmadds 9, 2, 8, 5
  02bb2f4  fmadds 10, 3, 8, 6
  02bb2f8  fnmsubs 1, 1, 8, 4
  02bb2fc  fnmsubs 2, 2, 8, 5
  02bb300  fnmsubs 3, 3, 8, 6
  02bb304  stfs 7, 144(1)
  02bb308  stfs 9, 148(1)
  02bb30c  stfs 10, 152(1)
  02bb310  stfs 1, 160(1)
  02bb314  stfs 2, 164(1)
  02bb318  stfs 3, 168(1)
  02bb31c  bf 6, 0x2bb334
  02bb320  lis 3, 123
  02bb324  lwz 3, 31760(3)
  02bb328  stw 3, 180(1)
  02bb32c  stw 3, 176(1)
  02bb330  b 0x2bb35c
  02bb334  cmpwi 1, 22, 2
  02bb338  bf 26, 0x2bb350
  02bb33c  lis 3, 123
  02bb340  lwz 3, 31760(3)
  02bb344  stw 3, 188(1)
  02bb348  stw 3, 184(1)
  02bb34c  b 0x2bb35c
  02bb350  bf 6, 0x2bb35c
  02bb354  stw 29, 180(1)
  02bb358  stw 29, 176(1)
  02bb35c  lwz 6, 28(23)
  02bb360  addic 3, 1, 112
  02bb364  li 4, 0
  02bb368  li 5, 0
  02bb36c  li 7, 9
  02bb370  bl 0x72280
  02bb374  nop
  02bb378  lfs 1, 144(1)
  02bb37c  lfs 2, 148(1)
  02bb380  addic 22, 22, 1
  02bb384  stfs 1, 112(1)
  02bb388  addic 26, 26, 16
  02bb38c  lfs 1, 152(1)
  02bb390  cmpw 22, 27
  02bb394  stfs 2, 116(1)
  02bb398  lfs 2, 156(1)
  02bb39c  stfs 1, 120(1)
  02bb3a0  lfs 1, 160(1)
  02bb3a4  stfs 2, 124(1)
  02bb3a8  lfs 2, 164(1)
  02bb3ac  stfs 1, 128(1)
  02bb3b0  lfs 1, 168(1)
  02bb3b4  stfs 2, 132(1)
  02bb3b8  lfs 2, 172(1)
  02bb3bc  stfs 1, 136(1)
  02bb3c0  lfs 1, 320(25)
  02bb3c4  stfs 2, 140(1)
  02bb3c8  lfs 2, 324(25)
  02bb3cc  lfs 3, 328(25)
  02bb3d0  fmr 26, 1
  02bb3d4  fmr 27, 2
  02bb3d8  fmr 28, 3
  02bb3dc  bt 0, 0x2bb240
  02bb3e0  cmpwi 27, 0
  02bb3e4  bf 1, 0x2bb674
  02bb3e8  lis 3, 44
  02bb3ec  lis 29, 161
  02bb3f0  fmr 31, 28
  02bb3f4  addi 3, 3, -20680
  02bb3f8  fmr 30, 27
  02bb3fc  ori 26, 31, 0
  02bb400  fmr 29, 26
  02bb404  li 31, 0
  02bb408  addic 30, 30, -2
  02bb40c  addic 29, 29, 24396
  02bb410  lfs 23, 8(3)
  02bb414  lfs 13, 4(26)
  02bb418  lfs 2, 20(26)
  02bb41c  fsubs 13, 13, 30
  02bb420  lfs 0, 0(26)
  02bb424  fsubs 2, 2, 30
  02bb428  lfs 3, 16(26)
  02bb42c  fsubs 0, 0, 29
  02bb430  lfs 12, 8(26)
  02bb434  fsubs 3, 3, 29
  02bb438  lfs 1, 24(26)
  02bb43c  fsubs 12, 12, 31
  02bb440  fsubs 1, 1, 31
  02bb444  addic 26, 26, 16
  02bb448  fmuls 4, 13, 13
  02bb44c  fmuls 5, 2, 2
  02bb450  fmadds 4, 0, 0, 4
  02bb454  fmadds 5, 3, 3, 5
  02bb458  fmadds 4, 12, 12, 4
  02bb45c  fmadds 5, 1, 1, 5
  02bb460  fsqrts 4, 4
  02bb464  fsqrts 5, 5
  02bb468  fcmpu 6, 4, 22
  02bb46c  fcmpu 0, 5, 4
  02bb470  fcmpu 1, 5, 22
  02bb474  cror 2, 1, 2
  02bb478  bt 2, 0x2bb4a4
  02bb47c  bf 6, 0x2bb490
  02bb480  fmr 3, 0
  02bb484  fmr 2, 13
  02bb488  fmr 1, 12
  02bb48c  b 0x2bb4c8
  02bb490  fdivs 4, 4, 5
  02bb494  fmuls 3, 3, 4
  02bb498  fmuls 2, 2, 4
  02bb49c  fmuls 1, 1, 4
  02bb4a0  b 0x2bb4c8
  02bb4a4  bf 26, 0x2bb4b8
  02bb4a8  fmr 0, 3
  02bb4ac  fmr 13, 2
  02bb4b0  fmr 12, 1
  02bb4b4  b 0x2bb4c8
  02bb4b8  fdivs 4, 5, 4
  02bb4bc  fmuls 0, 0, 4
  02bb4c0  fmuls 13, 13, 4
  02bb4c4  fmuls 12, 12, 4
  02bb4c8  fadds 31, 31, 12
  02bb4cc  fadds 4, 28, 1
  02bb4d0  fadds 29, 29, 0
  02bb4d4  fadds 5, 26, 3
  02bb4d8  fadds 30, 30, 13
  02bb4dc  fadds 6, 27, 2
  02bb4e0  lfs 13, 332(25)
  02bb4e4  fsubs 7, 4, 31
  02bb4e8  fsubs 8, 5, 29
  02bb4ec  fsubs 9, 6, 30
  02bb4f0  cmpwi 1, 31, 0
  02bb4f4  fnmsubs 31, 7, 24, 31
  02bb4f8  fnmsubs 29, 8, 24, 29
  02bb4fc  fnmsubs 30, 9, 24, 30
  02bb500  fsubs 12, 28, 31
  02bb504  fsubs 3, 26, 29
  02bb508  fsubs 2, 27, 30
  02bb50c  fmadds 26, 8, 24, 5
  02bb510  fmuls 1, 8, 12
  02bb514  fmuls 11, 9, 3
  02bb518  fmuls 10, 7, 2
  02bb51c  fmadds 27, 9, 24, 6
  02bb520  fmsubs 3, 7, 3, 1
  02bb524  fmsubs 2, 8, 2, 11
  02bb528  fmsubs 12, 9, 12, 10
  02bb52c  fmadds 28, 7, 24, 4
  02bb530  fmuls 1, 3, 3
  02bb534  fmadds 1, 12, 12, 1
  02bb538  fmadds 1, 2, 2, 1
  02bb53c  fsqrts 0, 1
  02bb540  fcmpu 0, 0, 22
  02bb544  bt 2, 0x2bb57c
  02bb548  frsqrte 4, 1
  02bb54c  fmuls 5, 1, 4
  02bb550  fmuls 6, 4, 23
  02bb554  fnmsubs 5, 5, 4, 25
  02bb558  fmadds 4, 5, 6, 4
  02bb55c  fmuls 5, 1, 4
  02bb560  fmuls 6, 4, 23
  02bb564  fnmsubs 5, 5, 4, 25
  02bb568  fmadds 0, 5, 6, 4
  02bb56c  fmuls 1, 1, 0
  02bb570  fmuls 4, 0, 23
  02bb574  fnmsubs 1, 1, 0, 25
  02bb578  fmadds 0, 1, 4, 0
  02bb57c  fmuls 1, 0, 21
  02bb580  stfs 13, 268(1)
  02bb584  stfs 13, 284(1)
  02bb588  cmpw 6, 31, 30
  02bb58c  fmadds 4, 12, 1, 29
  02bb590  fmadds 5, 3, 1, 30
  02bb594  fmadds 6, 2, 1, 31
  02bb598  fnmsubs 7, 12, 1, 29
  02bb59c  fnmsubs 8, 3, 1, 30
  02bb5a0  fnmsubs 9, 2, 1, 31
  02bb5a4  fmadds 10, 12, 1, 26
  02bb5a8  fmadds 11, 3, 1, 27
  02bb5ac  fmadds 0, 2, 1, 28
  02bb5b0  fnmsubs 12, 12, 1, 26
  02bb5b4  fnmsubs 3, 3, 1, 27
  02bb5b8  fnmsubs 1, 2, 1, 28
  02bb5bc  stfs 4, 256(1)
  02bb5c0  stfs 5, 260(1)
  02bb5c4  stfs 6, 264(1)
  02bb5c8  stfs 7, 272(1)
  02bb5cc  stfs 8, 276(1)
  02bb5d0  stfs 9, 280(1)
  02bb5d4  stfs 10, 288(1)
  02bb5d8  stfs 11, 292(1)
  02bb5dc  stfs 0, 296(1)
  02bb5e0  stfs 13, 300(1)
  02bb5e4  stfs 12, 304(1)
  02bb5e8  stfs 3, 308(1)
  02bb5ec  stfs 1, 312(1)
  02bb5f0  stfs 13, 316(1)
  02bb5f4  bf 6, 0x2bb60c
  02bb5f8  lis 3, 123
  02bb5fc  lwz 3, 31764(3)
  02bb600  stw 3, 324(1)
  02bb604  stw 3, 320(1)
  02bb608  b 0x2bb634
  02bb60c  cmpwi 1, 31, 1
  02bb610  bf 26, 0x2bb628
  02bb614  lis 3, 123
  02bb618  lwz 3, 31764(3)
  02bb61c  stw 3, 332(1)
  02bb620  stw 3, 328(1)
  02bb624  b 0x2bb634
  02bb628  bf 6, 0x2bb634
  02bb62c  stw 28, 324(1)
  02bb630  stw 28, 320(1)
  02bb634  lwz 6, 28(29)
  02bb638  addic 3, 1, 256
  02bb63c  li 4, 0
  02bb640  li 5, 0
  02bb644  li 7, 9
  02bb648  bl 0x72280
  02bb64c  nop
  02bb650  lfs 29, 320(25)
  02bb654  lfs 30, 324(25)
  02bb658  addic 31, 31, 1
  02bb65c  lfs 31, 328(25)
  02bb660  fmr 26, 29
  02bb664  cmpw 31, 27
  02bb668  fmr 27, 30
  02bb66c  fmr 28, 31
  02bb670  bt 0, 0x2bb414
  02bb674  li 3, 1
  02bb678  li 4, 5
  02bb67c  li 8, 0
  02bb680  li 10, 2
  02bb684  li 5, 96
  02bb688  li 6, 3
  02bb68c  li 7, 0
  02bb690  li 9, 1
  02bb694  bl 0x502f7c
  02bb698  nop
  02bb69c  ori 4, 3, 0
  02bb6a0  li 3, 22
  02bb6a4  bl 0x174f80
  02bb6a8  nop
  02bb6ac  ld 0, 592(1)
  02bb6b0  mtlr 0
  02bb6b4  lfd 21, 488(1)
  02bb6b8  lfd 22, 496(1)
  02bb6bc  lfd 23, 504(1)
  02bb6c0  lfd 24, 512(1)
  02bb6c4  lfd 25, 520(1)
  02bb6c8  lfd 26, 528(1)
  02bb6cc  lfd 27, 536(1)
  02bb6d0  lfd 28, 544(1)
  02bb6d4  lfd 29, 552(1)
  02bb6d8  lfd 30, 560(1)
  02bb6dc  lfd 31, 568(1)
  02bb6e0  ld 22, 408(1)
  02bb6e4  ld 23, 416(1)
  02bb6e8  ld 24, 424(1)
  02bb6ec  ld 25, 432(1)
  02bb6f0  ld 26, 440(1)
  02bb6f4  ld 27, 448(1)
  02bb6f8  ld 28, 456(1)
  02bb6fc  ld 29, 464(1)
  02bb700  ld 30, 472(1)
  02bb704  ld 31, 480(1)
  02bb708  addi 1, 1, 576
  02bb70c  blr

M1805_002bb718:   # 0x2bb718, 0xf0 bytes
  02bb718  stdu 1, -160(1)
  02bb71c  mflr 0
  02bb720  std 0, 176(1)
  02bb724  stfd 31, 152(1)
  02bb728  std 28, 120(1)
  02bb72c  lis 4, 44
  02bb730  std 29, 128(1)
  02bb734  lis 28, 266
  02bb738  addi 4, 4, -18672
  02bb73c  std 30, 136(1)
  02bb740  lis 29, 266
  02bb744  lis 30, 266
  02bb748  std 27, 112(1)
  02bb74c  addic 28, 28, 2928
  02bb750  li 27, 0
  02bb754  addic 29, 29, 2948
  02bb758  std 31, 144(1)
  02bb75c  lfs 31, 0(4)
  02bb760  ori 31, 3, 0
  02bb764  addic 30, 30, 2128
  02bb768  lhz 3, 0(28)
  02bb76c  cmpwi 3, 0
  02bb770  bt 2, 0x2bb7c0
  02bb774  lhz 3, 0(29)
  02bb778  extsh 3, 3
  02bb77c  bl 0x502730
  02bb780  nop
  02bb784  lis 3, 266
  02bb788  lfs 2, 3016(3)
  02bb78c  fmuls 1, 1, 2
  02bb790  bl 0x502758
  02bb794  nop
  02bb798  lis 5, 123
  02bb79c  fmr 3, 31
  02bb7a0  lis 6, 123
  02bb7a4  ori 4, 3, 0
  02bb7a8  li 9, 5
  02bb7ac  ori 3, 30, 0
  02bb7b0  lfs 1, 31776(5)
  02bb7b4  lfs 2, 31780(6)
  02bb7b8  ori 5, 4, 0
  02bb7bc  bl 0x2baf48
  02bb7c0  addic 27, 27, 1
  02bb7c4  addic 28, 28, 2
  02bb7c8  cmpwi 27, 10
  02bb7cc  addic 29, 29, 2
  02bb7d0  addic 30, 30, 80
  02bb7d4  bt 0, 0x2bb768
  02bb7d8  ori 3, 31, 0
  02bb7dc  bl 0x2bab98
  02bb7e0  ld 0, 176(1)
  02bb7e4  mtlr 0
  02bb7e8  lfd 31, 152(1)
  02bb7ec  ld 27, 112(1)
  02bb7f0  ld 28, 120(1)
  02bb7f4  ld 29, 128(1)
  02bb7f8  ld 30, 136(1)
  02bb7fc  ld 31, 144(1)
  02bb800  addi 1, 1, 160
  02bb804  blr

M1805_002bb808:   # 0x2bb808, 0x14 bytes
  02bb808  lis 3, 123
  02bb80c  lis 4, 1
  02bb810  addic 3, 3, 31908
  02bb814  stw 4, 72(3)
  02bb818  blr

UpdateMoby_1805:   # 0x2bb840, 0x3c0 bytes
  02bb840  stdu 1, -304(1)
  02bb844  mflr 0
  02bb848  std 0, 320(1)
  02bb84c  stfd 29, 280(1)
  02bb850  stfd 30, 288(1)
  02bb854  stfd 31, 296(1)
  02bb858  lhz 5, 178(3)
  02bb85c  lis 4, 151
  02bb860  std 30, 264(1)
  02bb864  extsh 6, 5
  02bb868  lis 30, 161
  02bb86c  srawi 6, 6, 5
  02bb870  addic 30, 30, -13028
  02bb874  lwz 4, -25488(4)
  02bb878  sldi 6, 6, 2
  02bb87c  slwi 4, 4, 8
  02bb880  addc 6, 6, 30
  02bb884  extsw 4, 4
  02bb888  clrldi 6, 6, 32
  02bb88c  clrlwi 5, 5, 27
  02bb890  std 31, 272(1)
  02bb894  li 7, 1
  02bb898  ori 31, 3, 0
  02bb89c  slw 3, 7, 5
  02bb8a0  lwzx 4, 6, 4
  02bb8a4  and 3, 4, 3
  02bb8a8  std 29, 256(1)
  02bb8ac  std 28, 248(1)
  02bb8b0  std 27, 240(1)
  02bb8b4  std 26, 232(1)
  02bb8b8  std 25, 224(1)
  02bb8bc  cmpwi 3, 0
  02bb8c0  bt 2, 0x2bb8d4
  02bb8c4  ori 3, 31, 0
  02bb8c8  bl 0xefb38
  02bb8cc  nop
  02bb8d0  b 0x2bbbc8
  02bb8d4  ori 3, 31, 0
  02bb8d8  lwz 28, 120(31)
  02bb8dc  lis 4, 1
  02bb8e0  li 5, 0
  02bb8e4  bl 0x10675c
  02bb8e8  nop
  02bb8ec  ori 29, 3, 0
  02bb8f0  ori 3, 31, 0
  02bb8f4  li 6, 0
  02bb8f8  addic 5, 28, 32
  02bb8fc  li 8, 0
  02bb900  addic 7, 1, 208
  02bb904  li 10, 4
  02bb908  ori 4, 29, 0
  02bb90c  li 9, 0
  02bb910  bl 0x106840
  02bb914  nop
  02bb918  lbz 3, 32(31)
  02bb91c  cmpwi 3, 0
  02bb920  bt 1, 0x2bb930
  02bb924  cmpwi 3, -1
  02bb928  bf 1, 0x2bbbc8
  02bb92c  b 0x2bb944
  02bb930  cmpwi 3, 1
  02bb934  bf 1, 0x2bb950
  02bb938  cmpwi 3, 2
  02bb93c  bf 1, 0x2bb9d8
  02bb940  b 0x2bbbc8
  02bb944  li 3, 1
  02bb948  stb 3, 32(31)
  02bb94c  b 0x2bbbc8
  02bb950  cmpwi 29, 0
  02bb954  bt 2, 0x2bb9c4
  02bb958  lwz 3, 44(29)
  02bb95c  lwz 4, 32(28)
  02bb960  srawi 5, 3, 31
  02bb964  lfs 2, 44(29)
  02bb968  srawi 6, 4, 31
  02bb96c  lfs 1, 32(28)
  02bb970  srwi 7, 5, 1
  02bb974  srwi 8, 6, 1
  02bb978  xor 3, 7, 3
  02bb97c  xor 4, 8, 4
  02bb980  subc 3, 3, 5
  02bb984  subc 4, 4, 6
  02bb988  cmpw 3, 4
  02bb98c  bf 1, 0x2bb99c
  02bb990  li 3, 2
  02bb994  stb 3, 32(31)
  02bb998  b 0x2bb9bc
  02bb99c  fsubs 1, 1, 2
  02bb9a0  li 5, 250
  02bb9a4  addic 4, 28, 96
  02bb9a8  ori 3, 31, 0
  02bb9ac  stb 5, 103(28)
  02bb9b0  stfs 1, 32(28)
  02bb9b4  bl 0x10c808
  02bb9b8  nop
  02bb9bc  li 3, 255
  02bb9c0  stb 3, 164(31)
  02bb9c4  addic 4, 28, 96
  02bb9c8  ori 3, 31, 0
  02bb9cc  bl 0x10c9a0
  02bb9d0  nop
  02bb9d4  b 0x2bbbc8
  02bb9d8  lbz 3, 33(31)
  02bb9dc  cmpwi 3, 255
  02bb9e0  bt 2, 0x2bba04
  02bb9e4  li 4, -1
  02bb9e8  bl 0x104214
  02bb9ec  nop
  02bb9f0  cmpwi 3, 1
  02bb9f4  bf 2, 0x2bba04
  02bb9f8  li 3, 22
  02bb9fc  bl 0x11b728
  02bba00  nop
  02bba04  li 3, 0
  02bba08  li 4, 0
  02bba0c  ori 5, 31, 0
  02bba10  bl 0x15d12c
  02bba14  nop
  02bba18  ori 3, 31, 0
  02bba1c  bl 0x11a100
  02bba20  nop
  02bba24  lhz 3, 178(31)
  02bba28  lis 4, 151
  02bba2c  lis 7, 165
  02bba30  extsh 5, 3
  02bba34  extsh 6, 3
  02bba38  srawi 5, 5, 5
  02bba3c  lwz 4, -25488(4)
  02bba40  clrlwi 8, 3, 27
  02bba44  sldi 5, 5, 2
  02bba48  slwi 4, 4, 8
  02bba4c  addc 5, 5, 30
  02bba50  extsw 4, 4
  02bba54  clrldi 5, 5, 32
  02bba58  srawi 6, 6, 5
  02bba5c  li 9, 1
  02bba60  addic 7, 7, 19920
  02bba64  sldi 6, 6, 2
  02bba68  lwzx 10, 5, 4
  02bba6c  slw 8, 9, 8
  02bba70  clrlwi 3, 3, 27
  02bba74  or 8, 10, 8
  02bba78  slw 3, 9, 3
  02bba7c  lwzx 9, 7, 6
  02bba80  lis 10, 44
  02bba84  li 27, 0
  02bba88  stwx 8, 5, 4
  02bba8c  or 3, 9, 3
  02bba90  addi 4, 10, -18400
  02bba94  lis 30, 161
  02bba98  ori 28, 27, 0
  02bba9c  stwx 3, 7, 6
  02bbaa0  addic 29, 31, 64
  02bbaa4  addic 30, 30, 23856
  02bbaa8  lfs 29, 0(4)
  02bbaac  lfs 30, 4(4)
  02bbab0  lfs 31, 8(4)
  02bbab4  li 26, 1801
  02bbab8  vspltisw 2, 0
  02bbabc  li 4, 192
  02bbac0  fmr 1, 29
  02bbac4  addic 25, 1, 192
  02bbac8  ori 3, 25, 0
  02bbacc  stvx 2, 4, 1
  02bbad0  bl 0x110950
  02bbad4  nop
  02bbad8  lfs 1, 200(1)
  02bbadc  lfs 2, 192(1)
  02bbae0  ori 4, 26, 0
  02bbae4  fadds 1, 1, 30
  02bbae8  lfs 3, 16(31)
  02bbaec  lfs 4, 196(1)
  02bbaf0  ori 3, 31, 0
  02bbaf4  fadds 2, 2, 3
  02bbaf8  ori 10, 30, 0
  02bbafc  lfs 3, 20(31)
  02bbb00  ori 5, 25, 0
  02bbb04  lfs 5, 24(31)
  02bbb08  ori 6, 29, 0
  02bbb0c  fadds 3, 4, 3
  02bbb10  std 30, 112(1)
  02bbb14  std 30, 120(1)
  02bbb18  li 7, 0
  02bbb1c  li 8, 0
  02bbb20  fadds 4, 1, 5
  02bbb24  fmr 1, 31
  02bbb28  stfs 2, 192(1)
  02bbb2c  stfs 3, 196(1)
  02bbb30  stfs 4, 200(1)
  02bbb34  bl 0x11a560
  02bbb38  nop
  02bbb3c  addic 26, 26, 1
  02bbb40  extsw 26, 26
  02bbb44  cmpwi 26, 1805
  02bbb48  bt 0, 0x2bbab8
  02bbb4c  addic 27, 27, 1
  02bbb50  cmpwi 27, 2
  02bbb54  bt 0, 0x2bbab4
  02bbb58  lis 3, 44
  02bbb5c  li 12, 1
  02bbb60  fmr 1, 31
  02bbb64  addi 6, 3, -18400
  02bbb68  fmr 2, 31
  02bbb6c  li 7, 3
  02bbb70  li 11, -1
  02bbb74  ori 3, 31, 0
  02bbb78  addic 4, 31, 16
  02bbb7c  lfs 3, 12(6)
  02bbb80  li 5, 0
  02bbb84  lfs 4, 16(6)
  02bbb88  li 8, 10
  02bbb8c  lfs 5, 20(6)
  02bbb90  li 9, 3
  02bbb94  lfs 6, 24(6)
  02bbb98  li 10, 16
  02bbb9c  lfs 7, 28(6)
  02bbba0  std 28, 144(1)
  02bbba4  std 12, 160(1)
  02bbba8  std 7, 168(1)
  02bbbac  std 11, 176(1)
  02bbbb0  std 28, 184(1)
  02bbbb4  bl 0x10e030
  02bbbb8  nop
  02bbbbc  ori 3, 31, 0
  02bbbc0  bl 0xefb38
  02bbbc4  nop
  02bbbc8  ld 0, 320(1)
  02bbbcc  mtlr 0
  02bbbd0  lfd 29, 280(1)
  02bbbd4  lfd 30, 288(1)
  02bbbd8  lfd 31, 296(1)
  02bbbdc  ld 25, 224(1)
  02bbbe0  ld 26, 232(1)
  02bbbe4  ld 27, 240(1)
  02bbbe8  ld 28, 248(1)
  02bbbec  ld 29, 256(1)
  02bbbf0  ld 30, 264(1)
  02bbbf4  ld 31, 272(1)
  02bbbf8  addi 1, 1, 304
  02bbbfc  blr

M1805_002bbc00:   # 0x2bbc00, 0x14 bytes
  02bbc00  lis 3, 123
  02bbc04  lis 4, 1
  02bbc08  addic 3, 3, 32020
  02bbc0c  stw 4, 72(3)
  02bbc10  blr
