# game/update/camera13.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA13:   # 0x39294, 0x14 bytes
  0039294  lis 3, 114
  0039298  lis 4, 1
  003929c  addic 3, 3, -10284
  00392a0  stw 4, 72(3)
  00392a4  blr

Cam13_000392c8:   # 0x392c8, 0x114 bytes
  00392c8  stdu 1, -128(1)
  00392cc  mflr 0
  00392d0  std 0, 144(1)
  00392d4  std 30, 112(1)
  00392d8  lis 4, 4
  00392dc  lis 6, 114
  00392e0  std 31, 120(1)
  00392e4  lwz 30, 112(3)
  00392e8  addi 31, 4, -27992
  00392ec  lis 4, 114
  00392f0  lis 5, 151
  00392f4  lfs 3, -10176(6)
  00392f8  lfs 5, 0(31)
  00392fc  addic 3, 5, -25376
  0039300  lfs 4, -10172(4)
  0039304  addic 5, 30, 168
  0039308  lfs 1, 164(30)
  003930c  lfs 2, 1252(3)
  0039310  bl 0x50288
  0039314  nop
  0039318  stfs 1, 164(30)
  003931c  lfs 2, 4(31)
  0039320  lfs 3, 8(31)
  0039324  fadds 2, 1, 2
  0039328  fsubs 5, 3, 1
  003932c  lfs 4, 12(31)
  0039330  li 3, 0
  0039334  fsubs 3, 3, 2
  0039338  fsub 7, 1, 5
  003933c  fsubs 6, 4, 2
  0039340  fsubs 4, 4, 1
  0039344  fsub 8, 2, 3
  0039348  fsel 1, 7, 5, 1
  003934c  fsel 2, 8, 3, 2
  0039350  fsub 5, 4, 1
  0039354  lfs 3, 16(31)
  0039358  fsub 7, 6, 2
  003935c  fsel 1, 5, 4, 1
  0039360  lfs 4, 20(31)
  0039364  lfs 5, 24(31)
  0039368  lfs 9, 28(31)
  003936c  stw 3, 120(30)
  0039370  fsel 2, 7, 6, 2
  0039374  fmuls 6, 1, 1
  0039378  fmuls 7, 2, 2
  003937c  fmuls 8, 6, 1
  0039380  fmuls 10, 7, 2
  0039384  fmuls 11, 6, 8
  0039388  fmadds 1, 8, 3, 1
  003938c  fmuls 8, 7, 10
  0039390  fmadds 2, 10, 3, 2
  0039394  fmuls 3, 6, 11
  0039398  fmadds 1, 11, 4, 1
  003939c  fmuls 10, 7, 8
  00393a0  fmadds 2, 8, 4, 2
  00393a4  fmuls 4, 6, 3
  00393a8  fmadds 1, 3, 5, 1
  00393ac  fmuls 3, 7, 10
  00393b0  fmadds 2, 10, 5, 2
  00393b4  fmadds 1, 4, 9, 1
  00393b8  fmadds 2, 3, 9, 2
  00393bc  stfs 1, 116(30)
  00393c0  stfs 2, 112(30)
  00393c4  ld 0, 144(1)
  00393c8  mtlr 0
  00393cc  ld 30, 112(1)
  00393d0  ld 31, 120(1)
  00393d4  addi 1, 1, 128
  00393d8  blr

???_Cam13_InterpPosToHero:   # 0x393e8, 0x100 bytes
  00393e8  stdu 1, -160(1)
  00393ec  mflr 0
  00393f0  std 0, 176(1)
  00393f4  stfd 29, 136(1)
  00393f8  stfd 30, 144(1)
  00393fc  stfd 31, 152(1)
  0039400  std 31, 128(1)
  0039404  lis 4, 4
  0039408  lwz 31, 112(3)
  003940c  lis 5, 151
  0039410  std 30, 120(1)
  0039414  addi 4, 4, -27684
  0039418  addic 30, 5, -25376
  003941c  addic 5, 31, 64
  0039420  lfs 31, 0(4)
  0039424  lfs 30, 4(4)
  0039428  lfs 29, 8(4)
  003942c  lfs 1, 48(31)
  0039430  fmr 3, 31
  0039434  lfs 2, 128(30)
  0039438  fmr 4, 30
  003943c  fmr 5, 29
  0039440  bl 0x501e8
  0039444  nop
  0039448  stfs 1, 48(31)
  003944c  lfs 1, 52(31)
  0039450  addic 5, 31, 68
  0039454  lfs 2, 132(30)
  0039458  fmr 3, 31
  003945c  fmr 4, 30
  0039460  fmr 5, 29
  0039464  bl 0x501e8
  0039468  nop
  003946c  stfs 1, 52(31)
  0039470  addic 5, 31, 72
  0039474  lfs 1, 56(31)
  0039478  fmr 3, 31
  003947c  lfs 2, 136(30)
  0039480  fmr 4, 30
  0039484  fmr 5, 29
  0039488  bl 0x501e8
  003948c  nop
  0039490  lfs 2, 320(30)
  0039494  lfs 3, 48(31)
  0039498  fadds 2, 2, 3
  003949c  lfs 3, 52(31)
  00394a0  stfs 2, 48(31)
  00394a4  lfs 2, 324(30)
  00394a8  fadds 2, 2, 3
  00394ac  stfs 2, 52(31)
  00394b0  lfs 2, 328(30)
  00394b4  fadds 1, 2, 1
  00394b8  stfs 1, 56(31)
  00394bc  lfs 1, 332(30)
  00394c0  stfs 1, 60(31)
  00394c4  ld 0, 176(1)
  00394c8  mtlr 0
  00394cc  lfd 29, 136(1)
  00394d0  lfd 30, 144(1)
  00394d4  lfd 31, 152(1)
  00394d8  ld 30, 120(1)
  00394dc  ld 31, 128(1)
  00394e0  addi 1, 1, 160
  00394e4  blr

Cam13_000394e8:   # 0x394e8, 0xa0 bytes
  00394e8  lis 5, 149
  00394ec  lwz 3, 112(3)
  00394f0  addic 5, 5, 5056
  00394f4  lfs 1, 448(5)
  00394f8  lfs 2, 452(5)
  00394fc  lfs 3, 456(5)
  0039500  lfs 4, 84(3)
  0039504  lfs 5, 48(3)
  0039508  lfs 6, 52(3)
  003950c  fmadds 5, 1, 4, 5
  0039510  lfs 7, 56(3)
  0039514  fmadds 6, 2, 4, 6
  0039518  fmadds 4, 3, 4, 7
  003951c  lfs 7, 112(3)
  0039520  lfs 8, 116(3)
  0039524  lfs 9, 120(3)
  0039528  lfs 11, 96(3)
  003952c  fmuls 13, 2, 7
  0039530  fmuls 10, 3, 8
  0039534  lfs 0, 104(3)
  0039538  fmuls 12, 1, 9
  003953c  fmadds 5, 7, 11, 5
  0039540  fmadds 6, 8, 11, 6
  0039544  fmadds 4, 9, 11, 4
  0039548  lfs 11, 100(3)
  003954c  fmsubs 8, 1, 8, 13
  0039550  fmsubs 9, 2, 9, 10
  0039554  fmsubs 7, 3, 7, 12
  0039558  fmadds 1, 1, 0, 5
  003955c  fmadds 2, 2, 0, 6
  0039560  lfs 5, 60(3)
  0039564  fmadds 3, 3, 0, 4
  0039568  stfs 5, 12(4)
  003956c  fmadds 1, 9, 11, 1
  0039570  fmadds 2, 7, 11, 2
  0039574  fmadds 3, 8, 11, 3
  0039578  stfs 1, 0(4)
  003957c  stfs 2, 4(4)
  0039580  stfs 3, 8(4)
  0039584  blr

Cam13_000395c0:   # 0x395c0, 0x6b0 bytes
  00395c0  stdu 1, -336(1)
  00395c4  mflr 0
  00395c8  std 0, 352(1)
  00395cc  stfd 21, 248(1)
  00395d0  stfd 22, 256(1)
  00395d4  stfd 23, 264(1)
  00395d8  stfd 24, 272(1)
  00395dc  stfd 25, 280(1)
  00395e0  stfd 26, 288(1)
  00395e4  stfd 27, 296(1)
  00395e8  stfd 28, 304(1)
  00395ec  stfd 29, 312(1)
  00395f0  stfd 30, 320(1)
  00395f4  stfd 31, 328(1)
  00395f8  std 31, 240(1)
  00395fc  std 26, 200(1)
  0039600  ori 31, 3, 0
  0039604  lis 4, 4
  0039608  std 28, 216(1)
  003960c  std 24, 184(1)
  0039610  lis 26, 150
  0039614  addi 24, 4, -27256
  0039618  std 29, 224(1)
  003961c  lwz 28, 112(31)
  0039620  addic 29, 28, 176
  0039624  std 30, 232(1)
  0039628  lfs 31, 0(24)
  003962c  addic 30, 28, 96
  0039630  lfs 30, 96(28)
  0039634  lfs 29, 100(28)
  0039638  ori 4, 29, 0
  003963c  lfs 28, 104(28)
  0039640  fmr 2, 31
  0039644  std 25, 192(1)
  0039648  lfs 27, 108(28)
  003964c  lwz 25, 19008(26)
  0039650  lfs 1, 144(28)
  0039654  std 27, 208(1)
  0039658  std 23, 176(1)
  003965c  lfs 25, 19008(26)
  0039660  bl 0x2ed78
  0039664  nop
  0039668  lfs 24, 4(24)
  003966c  ori 27, 3, 0
  0039670  lfs 23, 8(24)
  0039674  addic 5, 28, 148
  0039678  lfs 26, 12(24)
  003967c  li 23, 0
  0039680  lfs 1, 144(28)
  0039684  fmr 2, 25
  0039688  fmr 3, 24
  003968c  fmr 4, 23
  0039690  fmr 5, 26
  0039694  bl 0x501e8
  0039698  nop
  003969c  stfs 1, 144(28)
  00396a0  lfs 2, 16(24)
  00396a4  lis 6, 16256
  00396a8  stw 23, 112(1)
  00396ac  ori 3, 30, 0
  00396b0  fmr 22, 2
  00396b4  stw 23, 116(1)
  00396b8  lfs 25, 20(24)
  00396bc  addic 5, 1, 112
  00396c0  stw 6, 120(1)
  00396c4  ori 4, 30, 0
  00396c8  stw 23, 124(1)
  00396cc  fmuls 1, 1, 22
  00396d0  bl 0x1113e0
  00396d4  nop
  00396d8  addic 3, 26, 19008
  00396dc  lfs 1, 152(28)
  00396e0  fmr 3, 24
  00396e4  addic 5, 28, 156
  00396e8  fmr 4, 23
  00396ec  fmr 5, 26
  00396f0  lwz 26, 4(3)
  00396f4  lfs 2, 4(3)
  00396f8  bl 0x501e8
  00396fc  nop
  0039700  fmuls 24, 1, 22
  0039704  stfs 1, 152(28)
  0039708  lfs 1, 160(28)
  003970c  fmr 2, 24
  0039710  bl 0x502578
  0039714  nop
  0039718  fabs 2, 1
  003971c  lfs 3, 24(24)
  0039720  fcmpu 0, 2, 3
  0039724  cror 6, 0, 2
  0039728  bt 6, 0x39734
  003972c  fmr 24, 26
  0039730  b 0x3977c
  0039734  lis 3, 4
  0039738  addi 3, 3, -27256
  003973c  lfs 4, 28(3)
  0039740  fcmpu 0, 2, 4
  0039744  cror 6, 0, 2
  0039748  bt 6, 0x39778
  003974c  fsubs 1, 3, 2
  0039750  lis 3, 4
  0039754  addi 3, 3, -27256
  0039758  lfs 2, 32(3)
  003975c  fabs 3, 1
  0039760  lfs 1, 160(28)
  0039764  fmuls 2, 3, 2
  0039768  fmuls 24, 24, 2
  003976c  fmr 2, 24
  0039770  bl 0x502578
  0039774  nop
  0039778  stfs 1, 160(28)
  003977c  lfs 2, 116(1)
  0039780  lfs 3, 104(28)
  0039784  li 3, 0
  0039788  lfs 4, 120(1)
  003978c  addic 5, 1, 128
  0039790  lfs 5, 100(28)
  0039794  fmr 1, 24
  0039798  lfs 6, 96(28)
  003979c  ori 4, 30, 0
  00397a0  fmuls 7, 4, 5
  00397a4  lfs 8, 112(1)
  00397a8  fmuls 9, 2, 6
  00397ac  stw 3, 140(1)
  00397b0  fmuls 10, 8, 3
  00397b4  ori 3, 30, 0
  00397b8  fmsubs 2, 2, 3, 7
  00397bc  fmsubs 3, 8, 5, 9
  00397c0  fmsubs 4, 4, 6, 10
  00397c4  stfs 2, 128(1)
  00397c8  stfs 3, 136(1)
  00397cc  stfs 4, 132(1)
  00397d0  bl 0x1113e0
  00397d4  nop
  00397d8  lwz 3, 144(28)
  00397dc  cmpwi 3, 0
  00397e0  bf 2, 0x397f0
  00397e4  lwz 3, 152(28)
  00397e8  cmpwi 3, 0
  00397ec  bt 2, 0x39978
  00397f0  cmpwi 27, 0
  00397f4  bf 2, 0x39878
  00397f8  fmr 21, 31
  00397fc  addic 4, 1, 144
  0039800  ori 3, 31, 0
  0039804  bl 0x394e8
  0039808  lfs 24, 48(31)
  003980c  lfs 23, 52(31)
  0039810  ori 3, 31, 0
  0039814  lfs 22, 56(31)
  0039818  ori 4, 29, 0
  003981c  lfs 1, 144(1)
  0039820  lfs 31, 60(31)
  0039824  lfs 2, 148(1)
  0039828  stfs 1, 48(31)
  003982c  lfs 1, 152(1)
  0039830  stfs 2, 52(31)
  0039834  lfs 2, 156(1)
  0039838  stfs 1, 56(31)
  003983c  stfs 2, 60(31)
  0039840  fmr 2, 21
  0039844  lfs 1, 144(28)
  0039848  bl 0x2ed78
  003984c  nop
  0039850  cmpwi 3, 1
  0039854  bf 2, 0x39878
  0039858  stfs 30, 96(28)
  003985c  stfs 29, 100(28)
  0039860  stfs 28, 104(28)
  0039864  stfs 27, 108(28)
  0039868  stfs 24, 48(31)
  003986c  stfs 23, 52(31)
  0039870  stfs 22, 56(31)
  0039874  stfs 31, 60(31)
  0039878  lis 4, 15395
  003987c  lwz 6, 144(28)
  0039880  lis 3, 149
  0039884  ori 5, 4, 55050
  0039888  clrlwi 6, 6, 1
  003988c  addic 3, 3, 5056
  0039890  lwz 4, 112(31)
  0039894  cmpw 6, 5
  0039898  bt 1, 0x398b4
  003989c  lis 5, 15395
  00398a0  lwz 6, 152(28)
  00398a4  ori 5, 5, 55050
  00398a8  clrlwi 6, 6, 1
  00398ac  cmpw 6, 5
  00398b0  bf 1, 0x39978
  00398b4  lfs 1, 84(4)
  00398b8  lfs 2, 452(3)
  00398bc  lfs 3, 52(4)
  00398c0  lfs 4, 448(3)
  00398c4  fmadds 3, 2, 1, 3
  00398c8  lfs 2, 48(4)
  00398cc  lfs 5, 52(31)
  00398d0  fmadds 2, 4, 1, 2
  00398d4  lfs 4, 456(3)
  00398d8  lfs 6, 56(4)
  00398dc  lfs 7, 48(31)
  00398e0  fmadds 4, 4, 1, 6
  00398e4  lfs 1, 56(31)
  00398e8  fsubs 3, 3, 5
  00398ec  fsubs 2, 2, 7
  00398f0  fmr 6, 26
  00398f4  fsubs 4, 4, 1
  00398f8  fmuls 1, 3, 3
  00398fc  fmr 7, 6
  0039900  fmadds 5, 2, 2, 1
  0039904  lfs 1, 60(4)
  0039908  fmr 8, 7
  003990c  fmadds 5, 4, 4, 5
  0039910  fsqrts 9, 5
  0039914  fcmpu 0, 9, 8
  0039918  bt 2, 0x39968
  003991c  frsqrte 6, 5
  0039920  lis 3, 4
  0039924  addi 3, 3, -27256
  0039928  lfs 7, 36(3)
  003992c  fmuls 8, 5, 6
  0039930  fmuls 9, 7, 6
  0039934  fnmsubs 8, 8, 6, 25
  0039938  fmadds 6, 8, 9, 6
  003993c  fmuls 8, 5, 6
  0039940  fmuls 9, 7, 6
  0039944  fnmsubs 8, 8, 6, 25
  0039948  fmadds 6, 8, 9, 6
  003994c  fmuls 5, 5, 6
  0039950  fmuls 7, 7, 6
  0039954  fnmsubs 5, 5, 6, 25
  0039958  fmadds 6, 5, 7, 6
  003995c  fmuls 8, 2, 6
  0039960  fmuls 7, 3, 6
  0039964  fmuls 6, 4, 6
  0039968  stfs 8, 128(28)
  003996c  stfs 7, 132(28)
  0039970  stfs 6, 136(28)
  0039974  stfs 1, 140(28)
  0039978  lis 3, 15395
  003997c  clrlwi 4, 25, 1
  0039980  ori 3, 3, 55050
  0039984  cmpw 4, 3
  0039988  bf 0, 0x39c10
  003998c  lis 3, 15395
  0039990  clrlwi 4, 26, 1
  0039994  ori 3, 3, 55050
  0039998  cmpw 4, 3
  003999c  bf 0, 0x39c10
  00399a0  lis 4, 4
  00399a4  lis 3, 16532
  00399a8  addi 6, 4, -27256
  00399ac  ori 4, 3, 31457
  00399b0  li 8, 0
  00399b4  lis 7, 16128
  00399b8  ori 3, 30, 0
  00399bc  stw 4, 160(1)
  00399c0  addic 5, 1, 160
  00399c4  stw 8, 164(1)
  00399c8  ori 4, 30, 0
  00399cc  lfs 31, 36(6)
  00399d0  stw 7, 168(1)
  00399d4  stw 8, 172(1)
  00399d8  li 7, 0
  00399dc  lfs 1, 40(6)
  00399e0  bl 0x1115c8
  00399e4  nop
  00399e8  lis 3, 149
  00399ec  lwz 4, 112(31)
  00399f0  addic 3, 3, 5056
  00399f4  lfs 13, 52(31)
  00399f8  lfs 1, 84(4)
  00399fc  lfs 3, 452(3)
  0039a00  lfs 4, 52(4)
  0039a04  lfs 2, 448(3)
  0039a08  fmadds 5, 3, 1, 4
  0039a0c  lfs 6, 48(4)
  0039a10  lfs 4, 456(3)
  0039a14  fmadds 12, 2, 1, 6
  0039a18  lfs 6, 56(4)
  0039a1c  lfs 7, 48(31)
  0039a20  fmadds 0, 4, 1, 6
  0039a24  lfs 1, 56(31)
  0039a28  fsubs 13, 5, 13
  0039a2c  fsubs 12, 12, 7
  0039a30  fsubs 0, 0, 1
  0039a34  fmr 5, 26
  0039a38  fmuls 1, 13, 13
  0039a3c  fmr 6, 5
  0039a40  fmadds 11, 12, 12, 1
  0039a44  lfs 1, 60(4)
  0039a48  lfs 8, 96(28)
  0039a4c  lfs 9, 100(28)
  0039a50  lfs 10, 104(28)
  0039a54  fmr 7, 6
  0039a58  fmadds 11, 0, 0, 11
  0039a5c  fsqrts 30, 11
  0039a60  fcmpu 0, 30, 7
  0039a64  bt 2, 0x39aa8
  0039a68  frsqrte 5, 11
  0039a6c  fmuls 6, 11, 5
  0039a70  fmuls 7, 31, 5
  0039a74  fnmsubs 6, 6, 5, 25
  0039a78  fmadds 5, 6, 7, 5
  0039a7c  fmuls 6, 11, 5
  0039a80  fmuls 7, 31, 5
  0039a84  fnmsubs 6, 6, 5, 25
  0039a88  fmadds 5, 6, 7, 5
  0039a8c  fmuls 6, 11, 5
  0039a90  fmuls 7, 31, 5
  0039a94  fnmsubs 6, 6, 5, 25
  0039a98  fmadds 5, 6, 7, 5
  0039a9c  fmuls 7, 12, 5
  0039aa0  fmuls 6, 13, 5
  0039aa4  fmuls 5, 0, 5
  0039aa8  fmuls 11, 9, 3
  0039aac  stfs 6, 132(28)
  0039ab0  stfs 5, 136(28)
  0039ab4  stfs 7, 128(28)
  0039ab8  stfs 1, 140(28)
  0039abc  fmr 1, 26
  0039ac0  fmadds 6, 8, 2, 11
  0039ac4  fmadds 7, 10, 4, 6
  0039ac8  fnmsubs 6, 3, 7, 9
  0039acc  fnmsubs 5, 2, 7, 8
  0039ad0  fnmsubs 7, 4, 7, 10
  0039ad4  fmuls 2, 6, 6
  0039ad8  fmadds 4, 5, 5, 2
  0039adc  fmr 2, 1
  0039ae0  fmadds 4, 7, 7, 4
  0039ae4  fmr 3, 2
  0039ae8  fsqrts 11, 4
  0039aec  fcmpu 0, 11, 3
  0039af0  bt 2, 0x39b34
  0039af4  frsqrte 1, 4
  0039af8  fmuls 2, 4, 1
  0039afc  fmuls 3, 31, 1
  0039b00  fnmsubs 2, 2, 1, 25
  0039b04  fmadds 1, 2, 3, 1
  0039b08  fmuls 2, 4, 1
  0039b0c  fmuls 3, 31, 1
  0039b10  fnmsubs 2, 2, 1, 25
  0039b14  fmadds 1, 2, 3, 1
  0039b18  fmuls 2, 4, 1
  0039b1c  fmuls 3, 31, 1
  0039b20  fnmsubs 2, 2, 1, 25
  0039b24  fmadds 3, 2, 3, 1
  0039b28  fmuls 1, 5, 3
  0039b2c  fmuls 2, 6, 3
  0039b30  fmuls 3, 7, 3
  0039b34  fmuls 4, 9, 9
  0039b38  fmr 5, 26
  0039b3c  fmadds 4, 8, 8, 4
  0039b40  fmr 6, 5
  0039b44  fmadds 4, 10, 10, 4
  0039b48  fmr 7, 6
  0039b4c  fsqrts 11, 4
  0039b50  fcmpu 0, 11, 7
  0039b54  bt 2, 0x39b98
  0039b58  frsqrte 5, 4
  0039b5c  fmuls 6, 4, 5
  0039b60  fmuls 7, 31, 5
  0039b64  fnmsubs 6, 6, 5, 25
  0039b68  fmadds 5, 6, 7, 5
  0039b6c  fmuls 6, 4, 5
  0039b70  fmuls 7, 31, 5
  0039b74  fnmsubs 6, 6, 5, 25
  0039b78  fmadds 5, 6, 7, 5
  0039b7c  fmuls 4, 4, 5
  0039b80  fmuls 6, 31, 5
  0039b84  fnmsubs 4, 4, 5, 25
  0039b88  fmadds 7, 4, 6, 5
  0039b8c  fmuls 5, 8, 7
  0039b90  fmuls 6, 9, 7
  0039b94  fmuls 7, 10, 7
  0039b98  fmuls 2, 2, 6
  0039b9c  lis 3, 115
  0039ba0  addic 4, 3, 22720
  0039ba4  fmadds 1, 1, 5, 2
  0039ba8  lfs 5, 22720(3)
  0039bac  lis 3, 4
  0039bb0  addi 3, 3, -27256
  0039bb4  fmadds 1, 3, 7, 1
  0039bb8  lfs 7, 4(4)
  0039bbc  fabs 2, 1
  0039bc0  fsub 3, 1, 26
  0039bc4  fsel 2, 3, 1, 2
  0039bc8  fsub 1, 1, 26
  0039bcc  fsubs 3, 25, 2
  0039bd0  fmuls 4, 2, 2
  0039bd4  fsub 6, 3, 26
  0039bd8  fmuls 8, 4, 2
  0039bdc  fmadds 2, 2, 7, 5
  0039be0  lfs 5, 8(4)
  0039be4  fsel 3, 6, 3, 26
  0039be8  fmadds 2, 4, 5, 2
  0039bec  lfs 4, 44(3)
  0039bf0  lfs 7, 12(4)
  0039bf4  lfs 5, 48(3)
  0039bf8  fsel 1, 1, 25, 4
  0039bfc  fsqrts 3, 3
  0039c00  fmadds 2, 8, 7, 2
  0039c04  fnmsubs 2, 2, 3, 5
  0039c08  fmsubs 1, 2, 1, 5
  0039c0c  stfs 1, 160(28)
  0039c10  ld 0, 352(1)
  0039c14  mtlr 0
  0039c18  lfd 21, 248(1)
  0039c1c  lfd 22, 256(1)
  0039c20  lfd 23, 264(1)
  0039c24  lfd 24, 272(1)
  0039c28  lfd 25, 280(1)
  0039c2c  lfd 26, 288(1)
  0039c30  lfd 27, 296(1)
  0039c34  lfd 28, 304(1)
  0039c38  lfd 29, 312(1)
  0039c3c  lfd 30, 320(1)
  0039c40  lfd 31, 328(1)
  0039c44  ld 23, 176(1)
  0039c48  ld 24, 184(1)
  0039c4c  ld 25, 192(1)
  0039c50  ld 26, 200(1)
  0039c54  ld 27, 208(1)
  0039c58  ld 28, 216(1)
  0039c5c  ld 29, 224(1)
  0039c60  ld 30, 232(1)
  0039c64  ld 31, 240(1)
  0039c68  addi 1, 1, 336
  0039c6c  blr

Cam13_00039c98:   # 0x39c98, 0x304 bytes
  0039c98  stdu 1, -64(1)
  0039c9c  stfd 30, 48(1)
  0039ca0  stfd 31, 56(1)
  0039ca4  lis 4, 4
  0039ca8  lis 5, 151
  0039cac  addi 6, 4, -25488
  0039cb0  addic 4, 5, -25376
  0039cb4  lfs 1, 4(6)
  0039cb8  lfs 2, 1252(4)
  0039cbc  lfs 3, 0(6)
  0039cc0  fsubs 5, 1, 2
  0039cc4  fadds 3, 2, 3
  0039cc8  lfs 4, 8(6)
  0039ccc  fsubs 6, 4, 2
  0039cd0  lfs 8, 12(6)
  0039cd4  lis 4, 149
  0039cd8  addic 5, 4, 5056
  0039cdc  fsub 7, 2, 5
  0039ce0  fsubs 1, 1, 3
  0039ce4  fsubs 4, 4, 3
  0039ce8  fsel 2, 7, 5, 2
  0039cec  fsub 5, 3, 1
  0039cf0  lfs 7, 16(6)
  0039cf4  fsub 9, 6, 2
  0039cf8  fsel 1, 5, 1, 3
  0039cfc  lfs 3, 20(6)
  0039d00  lwz 4, 112(3)
  0039d04  fsel 2, 9, 6, 2
  0039d08  fsub 5, 4, 1
  0039d0c  fmuls 9, 2, 2
  0039d10  fsel 1, 5, 4, 1
  0039d14  lfs 4, 24(6)
  0039d18  lfs 10, 456(5)
  0039d1c  lfs 5, 100(4)
  0039d20  lfs 12, 96(4)
  0039d24  lfs 0, 448(5)
  0039d28  fmuls 6, 9, 2
  0039d2c  fmuls 11, 1, 1
  0039d30  fmuls 13, 9, 6
  0039d34  fmadds 2, 6, 8, 2
  0039d38  fmuls 6, 11, 1
  0039d3c  fmuls 31, 9, 13
  0039d40  fmadds 2, 13, 7, 2
  0039d44  fmuls 13, 11, 6
  0039d48  fmadds 1, 6, 8, 1
  0039d4c  lfs 6, 104(4)
  0039d50  fmuls 8, 9, 31
  0039d54  fmadds 2, 31, 3, 2
  0039d58  fmuls 9, 11, 13
  0039d5c  fmadds 1, 13, 7, 1
  0039d60  lfs 13, 452(5)
  0039d64  lfs 31, 48(4)
  0039d68  lfs 7, 436(5)
  0039d6c  fmadds 2, 8, 4, 2
  0039d70  fmuls 11, 11, 9
  0039d74  fmadds 1, 9, 3, 1
  0039d78  lfs 8, 440(5)
  0039d7c  lfs 9, 432(5)
  0039d80  li 5, 0
  0039d84  fmuls 3, 10, 2
  0039d88  fmadds 1, 11, 4, 1
  0039d8c  stfs 2, 116(4)
  0039d90  lfs 11, 28(6)
  0039d94  stw 5, 120(4)
  0039d98  fmuls 3, 3, 5
  0039d9c  fmuls 4, 10, 1
  0039da0  fmuls 30, 13, 1
  0039da4  stfs 1, 112(4)
  0039da8  fneg 3, 3
  0039dac  fmuls 4, 4, 5
  0039db0  fmadds 1, 1, 12, 3
  0039db4  fmadds 3, 2, 12, 4
  0039db8  fmsubs 2, 0, 2, 30
  0039dbc  fmr 12, 11
  0039dc0  fmadds 1, 0, 6, 1
  0039dc4  fmadds 3, 13, 6, 3
  0039dc8  fadds 1, 31, 1
  0039dcc  stfs 1, 48(3)
  0039dd0  lfs 4, 52(4)
  0039dd4  fadds 3, 4, 3
  0039dd8  stfs 3, 52(3)
  0039ddc  lfs 4, 56(4)
  0039de0  fmadds 4, 10, 6, 4
  0039de4  fmr 6, 11
  0039de8  fmadds 4, 2, 5, 4
  0039dec  fmr 10, 6
  0039df0  stfs 4, 56(3)
  0039df4  lfs 2, 60(4)
  0039df8  stfs 2, 60(3)
  0039dfc  lfs 2, 52(4)
  0039e00  lfs 5, 48(4)
  0039e04  fsubs 3, 2, 3
  0039e08  fsubs 2, 5, 1
  0039e0c  lfs 1, 56(4)
  0039e10  fsubs 4, 1, 4
  0039e14  fmuls 1, 3, 3
  0039e18  fmadds 5, 2, 2, 1
  0039e1c  lfs 1, 60(4)
  0039e20  fmadds 5, 4, 4, 5
  0039e24  fsqrts 13, 5
  0039e28  fcmpu 0, 13, 12
  0039e2c  bt 2, 0x39e80
  0039e30  frsqrte 10, 5
  0039e34  lis 5, 4
  0039e38  addi 5, 5, -25488
  0039e3c  lfs 11, 32(5)
  0039e40  lfs 12, 36(5)
  0039e44  fmuls 13, 5, 10
  0039e48  fmuls 0, 11, 10
  0039e4c  fnmsubs 13, 13, 10, 12
  0039e50  fmadds 10, 13, 0, 10
  0039e54  fmuls 13, 5, 10
  0039e58  fmuls 0, 11, 10
  0039e5c  fnmsubs 13, 13, 10, 12
  0039e60  fmadds 10, 13, 0, 10
  0039e64  fmuls 5, 5, 10
  0039e68  fmuls 11, 11, 10
  0039e6c  fnmsubs 5, 5, 10, 12
  0039e70  fmadds 10, 5, 11, 10
  0039e74  fmuls 12, 2, 10
  0039e78  fmuls 11, 3, 10
  0039e7c  fmuls 10, 4, 10
  0039e80  stfs 11, 132(4)
  0039e84  stfs 10, 136(4)
  0039e88  fmr 3, 6
  0039e8c  stfs 12, 128(4)
  0039e90  fmuls 6, 7, 12
  0039e94  stfs 1, 140(4)
  0039e98  stfs 12, 0(3)
  0039e9c  lfs 2, 132(4)
  0039ea0  stfs 2, 4(3)
  0039ea4  lfs 1, 136(4)
  0039ea8  fmuls 4, 8, 2
  0039eac  fmuls 5, 9, 1
  0039eb0  fmsubs 6, 9, 2, 6
  0039eb4  stfs 1, 8(3)
  0039eb8  li 5, 0
  0039ebc  lfs 9, 140(4)
  0039ec0  stfs 12, 64(3)
  0039ec4  fmsubs 4, 7, 1, 4
  0039ec8  fmsubs 5, 8, 12, 5
  0039ecc  stfs 9, 12(3)
  0039ed0  stfs 2, 68(3)
  0039ed4  stfs 1, 72(3)
  0039ed8  stfs 9, 76(3)
  0039edc  stw 5, 28(3)
  0039ee0  fmuls 7, 5, 5
  0039ee4  fmadds 8, 4, 4, 7
  0039ee8  fmr 7, 3
  0039eec  fmadds 3, 6, 6, 8
  0039ef0  fmr 8, 7
  0039ef4  fsqrts 10, 3
  0039ef8  fmr 9, 8
  0039efc  fcmpu 0, 10, 9
  0039f00  bt 2, 0x39f54
  0039f04  frsqrte 7, 3
  0039f08  lis 4, 4
  0039f0c  addi 4, 4, -25488
  0039f10  lfs 8, 32(4)
  0039f14  lfs 9, 36(4)
  0039f18  fmuls 10, 3, 7
  0039f1c  fmuls 11, 8, 7
  0039f20  fnmsubs 10, 10, 7, 9
  0039f24  fmadds 7, 10, 11, 7
  0039f28  fmuls 10, 3, 7
  0039f2c  fmuls 11, 8, 7
  0039f30  fnmsubs 10, 10, 7, 9
  0039f34  fmadds 7, 10, 11, 7
  0039f38  fmuls 3, 3, 7
  0039f3c  fmuls 8, 8, 7
  0039f40  fnmsubs 3, 3, 7, 9
  0039f44  fmadds 7, 3, 8, 7
  0039f48  fmuls 9, 4, 7
  0039f4c  fmuls 8, 5, 7
  0039f50  fmuls 7, 6, 7
  0039f54  fmuls 3, 1, 8
  0039f58  li 4, 0
  0039f5c  fmuls 4, 12, 7
  0039f60  stfs 9, 16(3)
  0039f64  fmuls 5, 2, 9
  0039f68  stfs 8, 20(3)
  0039f6c  stfs 7, 24(3)
  0039f70  stw 4, 44(3)
  0039f74  fmsubs 2, 2, 7, 3
  0039f78  fmsubs 1, 1, 9, 4
  0039f7c  fmsubs 3, 12, 8, 5
  0039f80  stfs 2, 32(3)
  0039f84  stfs 1, 36(3)
  0039f88  stfs 3, 40(3)
  0039f8c  lfd 30, 48(1)
  0039f90  lfd 31, 56(1)
  0039f94  addi 1, 1, 64
  0039f98  blr

InitCamera_13:   # 0x39fc0, 0x2d8 bytes
  0039fc0  stdu 1, -160(1)
  0039fc4  mflr 0
  0039fc8  std 0, 176(1)
  0039fcc  stfd 30, 144(1)
  0039fd0  stfd 31, 152(1)
  0039fd4  std 30, 128(1)
  0039fd8  ori 30, 3, 0
  0039fdc  lis 4, 151
  0039fe0  lis 3, 4
  0039fe4  addic 4, 4, -25376
  0039fe8  lis 6, 16320
  0039fec  lwz 5, 112(30)
  0039ff0  std 31, 136(1)
  0039ff4  addi 3, 3, -24676
  0039ff8  li 31, 0
  0039ffc  lis 7, 16532
  003a000  lwz 8, 8320(4)
  003a004  lis 9, 15733
  003a008  stw 6, 84(5)
  003a00c  stw 8, 80(5)
  003a010  lfs 31, 0(3)
  003a014  ori 6, 7, 31457
  003a018  stw 31, 76(5)
  003a01c  lis 8, 16128
  003a020  stw 31, 72(5)
  003a024  stw 31, 68(5)
  003a028  stw 31, 64(5)
  003a02c  lfs 1, 128(4)
  003a030  stfs 1, 48(5)
  003a034  lfs 1, 132(4)
  003a038  lwz 7, 112(30)
  003a03c  stfs 1, 52(5)
  003a040  lfs 1, 136(4)
  003a044  stfs 1, 56(5)
  003a048  lfs 1, 140(4)
  003a04c  stfs 1, 60(5)
  003a050  lis 5, 15923
  003a054  stw 6, 96(7)
  003a058  ori 6, 9, 49807
  003a05c  stw 31, 100(7)
  003a060  ori 5, 5, 13107
  003a064  lfs 30, 4(3)
  003a068  stw 8, 104(7)
  003a06c  ori 3, 30, 0
  003a070  stw 31, 108(7)
  003a074  stw 6, 16(7)
  003a078  stw 5, 20(7)
  003a07c  stw 31, 24(7)
  003a080  stw 31, 12(7)
  003a084  stw 31, 8(7)
  003a088  stw 31, 4(7)
  003a08c  stw 31, 0(7)
  003a090  lfs 1, 1252(4)
  003a094  stw 31, 168(7)
  003a098  stfs 1, 164(7)
  003a09c  stw 31, 160(7)
  003a0a0  stw 31, 144(7)
  003a0a4  stw 31, 148(7)
  003a0a8  stw 31, 152(7)
  003a0ac  stw 31, 156(7)
  003a0b0  bl 0x39c98
  003a0b4  lis 3, 149
  003a0b8  sth 31, 126(30)
  003a0bc  li 4, 2
  003a0c0  addic 31, 3, 5056
  003a0c4  fmr 4, 31
  003a0c8  lwz 3, 388(31)
  003a0cc  stb 4, 627(31)
  003a0d0  lfs 6, 4(3)
  003a0d4  lfs 7, 0(3)
  003a0d8  fmuls 5, 6, 6
  003a0dc  fmr 3, 4
  003a0e0  lfs 2, 0(30)
  003a0e4  lfs 1, 4(30)
  003a0e8  fmadds 5, 7, 7, 5
  003a0ec  fsqrts 8, 5
  003a0f0  fcmpu 0, 8, 3
  003a0f4  bt 2, 0x3a140
  003a0f8  frsqrte 3, 5
  003a0fc  lis 3, 4
  003a100  addi 3, 3, -24676
  003a104  lfs 4, 8(3)
  003a108  fmuls 8, 5, 3
  003a10c  fmuls 9, 30, 3
  003a110  fnmsubs 8, 8, 3, 4
  003a114  fmadds 3, 8, 9, 3
  003a118  fmuls 8, 5, 3
  003a11c  fmuls 9, 30, 3
  003a120  fnmsubs 8, 8, 3, 4
  003a124  fmadds 3, 8, 9, 3
  003a128  fmuls 5, 5, 3
  003a12c  fmuls 8, 30, 3
  003a130  fnmsubs 4, 5, 3, 4
  003a134  fmadds 3, 4, 8, 3
  003a138  fmuls 4, 7, 3
  003a13c  fmuls 3, 6, 3
  003a140  fmuls 5, 1, 1
  003a144  fmr 7, 31
  003a148  fmadds 5, 2, 2, 5
  003a14c  fmr 6, 7
  003a150  fsqrts 8, 5
  003a154  fcmpu 0, 8, 6
  003a158  bt 2, 0x3a1a4
  003a15c  frsqrte 6, 5
  003a160  lis 3, 4
  003a164  addi 3, 3, -24676
  003a168  lfs 7, 8(3)
  003a16c  fmuls 8, 5, 6
  003a170  fmuls 9, 30, 6
  003a174  fnmsubs 8, 8, 6, 7
  003a178  fmadds 6, 8, 9, 6
  003a17c  fmuls 8, 5, 6
  003a180  fmuls 9, 30, 6
  003a184  fnmsubs 8, 8, 6, 7
  003a188  fmadds 6, 8, 9, 6
  003a18c  fmuls 5, 5, 6
  003a190  fmuls 8, 30, 6
  003a194  fnmsubs 5, 5, 6, 7
  003a198  fmadds 6, 5, 8, 6
  003a19c  fmuls 7, 2, 6
  003a1a0  fmuls 6, 1, 6
  003a1a4  fmuls 1, 6, 3
  003a1a8  lis 3, 4
  003a1ac  addi 3, 3, -24676
  003a1b0  lis 4, 115
  003a1b4  lfs 2, 8(3)
  003a1b8  addic 5, 4, 22720
  003a1bc  fmadds 1, 7, 4, 1
  003a1c0  lfs 6, 22720(4)
  003a1c4  lis 4, 114
  003a1c8  lfs 8, 4(5)
  003a1cc  fabs 3, 1
  003a1d0  fsub 4, 1, 31
  003a1d4  fsel 3, 4, 1, 3
  003a1d8  fsub 1, 1, 31
  003a1dc  fsubs 4, 2, 3
  003a1e0  fmuls 5, 3, 3
  003a1e4  fmadds 6, 3, 8, 6
  003a1e8  fsub 7, 4, 31
  003a1ec  fmuls 3, 5, 3
  003a1f0  fsel 4, 7, 4, 31
  003a1f4  lfs 7, 24(3)
  003a1f8  lfs 8, 8(5)
  003a1fc  fmadds 5, 5, 8, 6
  003a200  lfs 6, 12(3)
  003a204  lfs 10, -3056(4)
  003a208  lfs 11, 12(5)
  003a20c  fmuls 7, 10, 7
  003a210  fsqrts 4, 4
  003a214  lfs 12, 16(3)
  003a218  lfs 13, 20(3)
  003a21c  fmadds 3, 3, 11, 5
  003a220  fctiwz 5, 7
  003a224  fmr 8, 12
  003a228  fsel 1, 1, 2, 6
  003a22c  fmr 9, 13
  003a230  stfd 5, 112(1)
  003a234  lfs 2, 28(3)
  003a238  lwz 30, 116(1)
  003a23c  fmuls 2, 10, 2
  003a240  fctiwz 2, 2
  003a244  stfd 2, 112(1)
  003a248  lwz 3, 116(1)
  003a24c  fnmsubs 3, 3, 4, 8
  003a250  extsw 3, 3
  003a254  fnmsubs 1, 3, 1, 8
  003a258  fmuls 31, 1, 9
  003a25c  bl 0x502730
  003a260  nop
  003a264  fmuls 1, 1, 31
  003a268  bl 0x502758
  003a26c  nop
  003a270  addc 3, 30, 3
  003a274  stw 3, 756(31)
  003a278  ld 0, 176(1)
  003a27c  mtlr 0
  003a280  lfd 30, 144(1)
  003a284  lfd 31, 152(1)
  003a288  ld 30, 128(1)
  003a28c  ld 31, 136(1)
  003a290  addi 1, 1, 160
  003a294  blr

???_Cam13_InterpPosToTarget:   # 0x3a298, 0xa8 bytes
  003a298  stdu 1, -144(1)
  003a29c  mflr 0
  003a2a0  std 0, 160(1)
  003a2a4  std 31, 136(1)
  003a2a8  ori 31, 3, 0
  003a2ac  std 30, 128(1)
  003a2b0  addic 4, 1, 112
  003a2b4  lwz 30, 112(31)
  003a2b8  bl 0x394e8
  003a2bc  lfs 1, 48(31)
  003a2c0  ori 5, 30, 0
  003a2c4  lfs 2, 112(1)
  003a2c8  lfs 3, 16(30)
  003a2cc  lfs 4, 20(30)
  003a2d0  lfs 5, 24(30)
  003a2d4  bl 0x501e8
  003a2d8  nop
  003a2dc  stfs 1, 48(31)
  003a2e0  addic 5, 30, 4
  003a2e4  lfs 1, 52(31)
  003a2e8  lfs 2, 116(1)
  003a2ec  lfs 3, 16(30)
  003a2f0  lfs 4, 20(30)
  003a2f4  lfs 5, 24(30)
  003a2f8  bl 0x501e8
  003a2fc  nop
  003a300  stfs 1, 52(31)
  003a304  lfs 1, 56(31)
  003a308  addic 5, 30, 8
  003a30c  lfs 2, 120(1)
  003a310  lfs 3, 16(30)
  003a314  lfs 4, 20(30)
  003a318  lfs 5, 24(30)
  003a31c  bl 0x501e8
  003a320  nop
  003a324  stfs 1, 56(31)
  003a328  ld 0, 160(1)
  003a32c  mtlr 0
  003a330  ld 30, 128(1)
  003a334  ld 31, 136(1)
  003a338  addi 1, 1, 144
  003a33c  blr

Cam13_0003a350:   # 0x3a350, 0x278 bytes
  003a350  stdu 1, -64(1)
  003a354  stfd 31, 56(1)
  003a358  lwz 5, 112(3)
  003a35c  lis 4, 4
  003a360  lis 6, 149
  003a364  lfs 1, 132(5)
  003a368  lfs 7, 128(5)
  003a36c  fmuls 1, 1, 1
  003a370  lfs 5, 136(5)
  003a374  addi 4, 4, -23744
  003a378  addic 6, 6, 5056
  003a37c  lfs 4, 0(4)
  003a380  fmadds 1, 7, 7, 1
  003a384  lfs 3, 436(6)
  003a388  lfs 2, 440(6)
  003a38c  fmadds 5, 5, 5, 1
  003a390  lfs 1, 432(6)
  003a394  fsqrts 6, 5
  003a398  fcmpu 0, 6, 4
  003a39c  bf 2, 0x3a3e0
  003a3a0  fmr 8, 4
  003a3a4  stfs 7, 0(3)
  003a3a8  lfs 5, 132(5)
  003a3ac  li 6, 0
  003a3b0  stfs 5, 4(3)
  003a3b4  lfs 5, 136(5)
  003a3b8  stfs 5, 8(3)
  003a3bc  lfs 5, 140(5)
  003a3c0  stfs 5, 12(3)
  003a3c4  fmr 5, 8
  003a3c8  stw 6, 8(3)
  003a3cc  stw 6, 4(3)
  003a3d0  stw 6, 0(3)
  003a3d4  lfs 7, 12(3)
  003a3d8  fmr 6, 5
  003a3dc  b 0x3a444
  003a3e0  frsqrte 6, 5
  003a3e4  lfs 8, 4(4)
  003a3e8  lfs 9, 8(4)
  003a3ec  fmuls 10, 5, 6
  003a3f0  fmuls 11, 8, 6
  003a3f4  fnmsubs 10, 10, 6, 9
  003a3f8  fmadds 6, 10, 11, 6
  003a3fc  fmuls 10, 5, 6
  003a400  fmuls 11, 8, 6
  003a404  fnmsubs 10, 10, 6, 9
  003a408  fmadds 6, 10, 11, 6
  003a40c  fmuls 5, 5, 6
  003a410  fmuls 8, 8, 6
  003a414  fnmsubs 5, 5, 6, 9
  003a418  fmadds 8, 5, 8, 6
  003a41c  fmuls 6, 7, 8
  003a420  stfs 6, 0(3)
  003a424  lfs 5, 132(5)
  003a428  fmuls 5, 5, 8
  003a42c  stfs 5, 4(3)
  003a430  lfs 7, 136(5)
  003a434  fmuls 8, 7, 8
  003a438  stfs 8, 8(3)
  003a43c  lfs 7, 140(5)
  003a440  stfs 7, 12(3)
  003a444  fmuls 9, 5, 5
  003a448  fmadds 9, 6, 6, 9
  003a44c  fmadds 9, 8, 8, 9
  003a450  fsqrts 10, 9
  003a454  fcmpu 0, 10, 4
  003a458  bf 2, 0x3a488
  003a45c  fmr 7, 4
  003a460  lfs 5, 0(3)
  003a464  lfs 6, 4(3)
  003a468  stfs 5, 64(3)
  003a46c  lfs 5, 8(3)
  003a470  stfs 6, 68(3)
  003a474  lfs 8, 12(3)
  003a478  stfs 5, 72(3)
  003a47c  fmr 6, 7
  003a480  fmr 5, 6
  003a484  b 0x3a4dc
  003a488  frsqrte 10, 9
  003a48c  fmr 31, 7
  003a490  lfs 11, 4(4)
  003a494  lfs 12, 8(4)
  003a498  fmuls 13, 9, 10
  003a49c  fmuls 0, 11, 10
  003a4a0  fnmsubs 13, 13, 10, 12
  003a4a4  fmadds 7, 13, 0, 10
  003a4a8  fmr 10, 5
  003a4ac  fmuls 5, 9, 7
  003a4b0  fmuls 13, 11, 7
  003a4b4  fnmsubs 5, 5, 7, 12
  003a4b8  fmadds 5, 5, 13, 7
  003a4bc  fmuls 7, 9, 5
  003a4c0  fmuls 9, 11, 5
  003a4c4  fnmsubs 7, 7, 5, 12
  003a4c8  fmadds 9, 7, 9, 5
  003a4cc  fmuls 5, 6, 9
  003a4d0  fmuls 7, 8, 9
  003a4d4  fmuls 6, 10, 9
  003a4d8  fmr 8, 31
  003a4dc  fmuls 9, 1, 7
  003a4e0  fmuls 10, 2, 6
  003a4e4  stfs 8, 76(3)
  003a4e8  fmuls 11, 3, 5
  003a4ec  stfs 8, 12(3)
  003a4f0  stfs 5, 64(3)
  003a4f4  li 5, 0
  003a4f8  stfs 6, 68(3)
  003a4fc  stfs 7, 72(3)
  003a500  fmsubs 8, 2, 5, 9
  003a504  fmsubs 9, 3, 7, 10
  003a508  fmsubs 3, 1, 6, 11
  003a50c  stfs 5, 0(3)
  003a510  fmr 2, 4
  003a514  stfs 6, 4(3)
  003a518  stfs 7, 8(3)
  003a51c  stw 5, 28(3)
  003a520  fmuls 1, 8, 8
  003a524  fmadds 10, 9, 9, 1
  003a528  fmr 1, 2
  003a52c  fmadds 10, 3, 3, 10
  003a530  fsqrts 11, 10
  003a534  fcmpu 0, 11, 4
  003a538  bt 2, 0x3a584
  003a53c  frsqrte 1, 10
  003a540  lfs 2, 4(4)
  003a544  lfs 4, 8(4)
  003a548  fmuls 11, 10, 1
  003a54c  fmuls 12, 2, 1
  003a550  fnmsubs 11, 11, 1, 4
  003a554  fmadds 1, 11, 12, 1
  003a558  fmuls 11, 10, 1
  003a55c  fmuls 12, 2, 1
  003a560  fnmsubs 11, 11, 1, 4
  003a564  fmadds 1, 11, 12, 1
  003a568  fmuls 10, 10, 1
  003a56c  fmuls 2, 2, 1
  003a570  fnmsubs 4, 10, 1, 4
  003a574  fmadds 2, 4, 2, 1
  003a578  fmuls 4, 9, 2
  003a57c  fmuls 1, 8, 2
  003a580  fmuls 2, 3, 2
  003a584  fmuls 3, 7, 1
  003a588  fmuls 8, 5, 2
  003a58c  stfs 4, 16(3)
  003a590  fmuls 9, 6, 4
  003a594  stfs 1, 20(3)
  003a598  stfs 2, 24(3)
  003a59c  li 4, 0
  003a5a0  stw 4, 44(3)
  003a5a4  fmsubs 2, 6, 2, 3
  003a5a8  fmsubs 3, 7, 4, 8
  003a5ac  fmsubs 1, 5, 1, 9
  003a5b0  stfs 2, 32(3)
  003a5b4  stfs 3, 36(3)
  003a5b8  stfs 1, 40(3)
  003a5bc  lfd 31, 56(1)
  003a5c0  addi 1, 1, 64
  003a5c4  blr

ActivateCamera_13:   # 0x3a5c8, 0x8 bytes
  003a5c8  li 3, 0
  003a5cc  blr

UpdateCamera_13:   # 0x3a5e0, 0x208 bytes
  003a5e0  stdu 1, -192(1)
  003a5e4  mflr 0
  003a5e8  std 0, 208(1)
  003a5ec  stfd 29, 168(1)
  003a5f0  stfd 30, 176(1)
  003a5f4  stfd 31, 184(1)
  003a5f8  std 31, 160(1)
  003a5fc  ori 31, 3, 0
  003a600  lis 3, 151
  003a604  std 30, 152(1)
  003a608  addic 30, 3, -25376
  003a60c  lfs 1, 48(31)
  003a610  lis 3, 4
  003a614  std 28, 136(1)
  003a618  lfs 2, 320(30)
  003a61c  addi 28, 3, -23088
  003a620  fadds 1, 2, 1
  003a624  lfs 2, 52(31)
  003a628  lfs 3, 56(31)
  003a62c  lwz 4, 112(31)
  003a630  std 29, 144(1)
  003a634  ori 3, 31, 0
  003a638  addic 29, 4, 176
  003a63c  stfs 1, 48(31)
  003a640  lfs 1, 324(30)
  003a644  fadds 1, 1, 2
  003a648  stfs 1, 52(31)
  003a64c  lfs 1, 328(30)
  003a650  fadds 1, 1, 3
  003a654  stfs 1, 56(31)
  003a658  lfs 1, 332(30)
  003a65c  stfs 1, 60(31)
  003a660  bl 0x392c8
  003a664  ori 3, 31, 0
  003a668  ori 4, 29, 0
  003a66c  bl 0x2bcf8
  003a670  nop
  003a674  lfs 31, 0(28)
  003a678  lfs 30, 4(28)
  003a67c  lwz 29, 112(31)
  003a680  lfs 29, 8(28)
  003a684  fmr 3, 31
  003a688  lfs 2, 128(30)
  003a68c  addic 5, 29, 64
  003a690  fmr 4, 30
  003a694  fmr 5, 29
  003a698  lfs 1, 48(29)
  003a69c  bl 0x501e8
  003a6a0  nop
  003a6a4  stfs 1, 48(29)
  003a6a8  lfs 1, 52(29)
  003a6ac  addic 5, 29, 68
  003a6b0  lfs 2, 132(30)
  003a6b4  fmr 3, 31
  003a6b8  fmr 4, 30
  003a6bc  fmr 5, 29
  003a6c0  bl 0x501e8
  003a6c4  nop
  003a6c8  stfs 1, 52(29)
  003a6cc  addic 5, 29, 72
  003a6d0  lfs 1, 56(29)
  003a6d4  fmr 3, 31
  003a6d8  lfs 2, 136(30)
  003a6dc  fmr 4, 30
  003a6e0  fmr 5, 29
  003a6e4  bl 0x501e8
  003a6e8  nop
  003a6ec  lfs 2, 320(30)
  003a6f0  lfs 3, 48(29)
  003a6f4  ori 3, 31, 0
  003a6f8  fadds 2, 2, 3
  003a6fc  lfs 3, 52(29)
  003a700  stfs 2, 48(29)
  003a704  lfs 2, 324(30)
  003a708  fadds 2, 2, 3
  003a70c  stfs 2, 52(29)
  003a710  lfs 2, 328(30)
  003a714  fadds 1, 2, 1
  003a718  stfs 1, 56(29)
  003a71c  lfs 1, 332(30)
  003a720  stfs 1, 60(29)
  003a724  bl 0x395c0
  003a728  lwz 30, 112(31)
  003a72c  addic 4, 1, 112
  003a730  ori 3, 31, 0
  003a734  bl 0x394e8
  003a738  lfs 1, 48(31)
  003a73c  ori 5, 30, 0
  003a740  lfs 2, 112(1)
  003a744  lfs 3, 16(30)
  003a748  lfs 4, 20(30)
  003a74c  lfs 5, 24(30)
  003a750  bl 0x501e8
  003a754  nop
  003a758  stfs 1, 48(31)
  003a75c  addic 5, 30, 4
  003a760  lfs 1, 52(31)
  003a764  lfs 2, 116(1)
  003a768  lfs 3, 16(30)
  003a76c  lfs 4, 20(30)
  003a770  lfs 5, 24(30)
  003a774  bl 0x501e8
  003a778  nop
  003a77c  stfs 1, 52(31)
  003a780  lfs 1, 56(31)
  003a784  addic 5, 30, 8
  003a788  lfs 2, 120(1)
  003a78c  lfs 3, 16(30)
  003a790  lfs 4, 20(30)
  003a794  lfs 5, 24(30)
  003a798  bl 0x501e8
  003a79c  nop
  003a7a0  stfs 1, 56(31)
  003a7a4  ori 3, 31, 0
  003a7a8  bl 0x3a350
  003a7ac  lfs 1, 12(28)
  003a7b0  addic 3, 31, 48
  003a7b4  bl 0x543c8
  003a7b8  nop
  003a7bc  ld 0, 208(1)
  003a7c0  mtlr 0
  003a7c4  lfd 29, 168(1)
  003a7c8  lfd 30, 176(1)
  003a7cc  lfd 31, 184(1)
  003a7d0  ld 28, 136(1)
  003a7d4  ld 29, 144(1)
  003a7d8  ld 30, 152(1)
  003a7dc  ld 31, 160(1)
  003a7e0  addi 1, 1, 192
  003a7e4  blr

ExitCamera_13:   # 0x3a7e8, 0x28 bytes
  003a7e8  lis 4, 151
  003a7ec  lhz 5, 134(3)
  003a7f0  addic 4, 4, -25376
  003a7f4  extsh 5, 5
  003a7f8  lwz 4, 8836(4)
  003a7fc  cmpw 4, 5
  003a800  bt 2, 0x3a80c
  003a804  li 4, 3
  003a808  sth 4, 126(3)
  003a80c  blr
