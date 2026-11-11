# game/update/moby1202.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1202_001fad90:   # 0x1fad90, 0x14 bytes
  01fad90  lis 3, 118
  01fad94  lis 4, 1
  01fad98  addic 3, 3, 25604
  01fad9c  stw 4, 72(3)
  01fada0  blr

M1202_001fade0:   # 0x1fade0, 0x4ec bytes
  01fade0  stdu 1, -336(1)
  01fade4  mflr 0
  01fade8  std 0, 352(1)
  01fadec  stfd 27, 296(1)
  01fadf0  stfd 28, 304(1)
  01fadf4  stfd 29, 312(1)
  01fadf8  stfd 30, 320(1)
  01fadfc  stfd 31, 328(1)
  01fae00  std 27, 256(1)
  01fae04  std 28, 264(1)
  01fae08  lis 27, 118
  01fae0c  std 31, 288(1)
  01fae10  li 28, 0
  01fae14  std 30, 280(1)
  01fae18  ori 31, 3, 0
  01fae1c  ori 30, 28, 0
  01fae20  std 26, 248(1)
  01fae24  lwz 27, 25792(27)
  01fae28  lwz 26, 120(3)
  01fae2c  std 29, 272(1)
  01fae30  std 25, 240(1)
  01fae34  std 24, 232(1)
  01fae38  std 23, 224(1)
  01fae3c  std 22, 216(1)
  01fae40  std 21, 208(1)
  01fae44  std 20, 200(1)
  01fae48  std 19, 192(1)
  01fae4c  cmpwi 27, 0
  01fae50  bf 1, 0x1fb274
  01fae54  lfs 1, 16(31)
  01fae58  lfs 2, 20(31)
  01fae5c  lis 4, 118
  01fae60  stfs 1, 128(1)
  01fae64  addic 3, 1, 128
  01fae68  lfs 1, 24(31)
  01fae6c  stfs 2, 132(1)
  01fae70  lfs 2, 28(31)
  01fae74  stfs 1, 136(1)
  01fae78  stfs 2, 140(1)
  01fae7c  lfs 1, 25800(4)
  01fae80  bl 0x110950
  01fae84  nop
  01fae88  lis 3, 32
  01fae8c  lfs 1, 136(1)
  01fae90  addi 3, 3, -21080
  01fae94  lfs 29, 0(3)
  01fae98  fadds 1, 1, 29
  01fae9c  stfs 1, 136(1)
  01faea0  bl 0xfcc68
  01faea4  nop
  01faea8  lis 3, 118
  01faeac  fmr 31, 1
  01faeb0  lis 4, 118
  01faeb4  lfs 1, 25812(3)
  01faeb8  lfs 2, 25816(4)
  01faebc  bl 0xfcbe8
  01faec0  nop
  01faec4  lis 3, 118
  01faec8  lis 4, 118
  01faecc  fmr 30, 1
  01faed0  lfs 1, 25820(3)
  01faed4  lfs 2, 25824(4)
  01faed8  bl 0xfcbe8
  01faedc  nop
  01faee0  lbz 3, 32(31)
  01faee4  fmr 2, 1
  01faee8  cmpwi 3, 11
  01faeec  lfs 1, 156(1)
  01faef0  bf 2, 0x1faf14
  01faef4  lis 3, 32
  01faef8  lfs 3, 136(1)
  01faefc  fmuls 30, 30, 29
  01faf00  addi 3, 3, -21080
  01faf04  fmuls 2, 2, 29
  01faf08  lfs 4, 4(3)
  01faf0c  fsubs 3, 3, 4
  01faf10  stfs 3, 136(1)
  01faf14  lis 3, 32
  01faf18  addi 3, 3, -21080
  01faf1c  lis 4, 114
  01faf20  lfs 3, 8(3)
  01faf24  lfs 4, 12(3)
  01faf28  fadds 3, 31, 3
  01faf2c  lfs 5, 16(3)
  01faf30  fsubs 6, 4, 31
  01faf34  ori 29, 30, 0
  01faf38  fsubs 4, 4, 3
  01faf3c  fsub 8, 31, 6
  01faf40  fsubs 7, 5, 3
  01faf44  fsubs 5, 5, 31
  01faf48  fsub 9, 3, 4
  01faf4c  fsel 6, 8, 6, 31
  01faf50  lfs 8, 20(3)
  01faf54  fsel 3, 9, 4, 3
  01faf58  fsub 4, 5, 6
  01faf5c  fsub 10, 7, 3
  01faf60  fsel 4, 4, 5, 6
  01faf64  lfs 5, 24(3)
  01faf68  lfs 6, 28(3)
  01faf6c  lfs 11, 32(3)
  01faf70  fsel 3, 10, 7, 3
  01faf74  fmuls 7, 4, 4
  01faf78  fmuls 9, 3, 3
  01faf7c  fmuls 10, 7, 4
  01faf80  fmuls 12, 9, 3
  01faf84  fmuls 13, 7, 10
  01faf88  fmadds 4, 10, 8, 4
  01faf8c  fmuls 10, 9, 12
  01faf90  fmadds 3, 12, 8, 3
  01faf94  fmuls 8, 7, 13
  01faf98  fmadds 4, 13, 5, 4
  01faf9c  lfs 12, -3052(4)
  01fafa0  lis 4, 118
  01fafa4  fmuls 13, 12, 30
  01fafa8  fmuls 2, 12, 2
  01fafac  fmuls 0, 9, 10
  01fafb0  fmadds 3, 10, 5, 3
  01fafb4  fmuls 5, 7, 8
  01fafb8  fmadds 4, 8, 6, 4
  01fafbc  fmuls 7, 12, 30
  01fafc0  lwz 4, 25860(4)
  01fafc4  extsw 4, 4
  01fafc8  fmuls 8, 9, 0
  01fafcc  fmadds 3, 0, 6, 3
  01fafd0  std 4, 176(1)
  01fafd4  fmadds 4, 5, 11, 4
  01fafd8  lis 4, 118
  01fafdc  fmadds 3, 8, 11, 3
  01fafe0  fmuls 4, 7, 4
  01fafe4  fmuls 3, 13, 3
  01fafe8  stfs 4, 148(1)
  01fafec  stfs 3, 144(1)
  01faff0  lfs 30, 36(3)
  01faff4  stw 30, 152(1)
  01faff8  stfs 2, 152(1)
  01faffc  lfs 31, 40(3)
  01fb000  lfd 5, 176(1)
  01fb004  lis 3, 114
  01fb008  fcfid 5, 5
  01fb00c  lfs 6, -3056(3)
  01fb010  lfs 7, 25828(4)
  01fb014  lis 3, 114
  01fb018  lfs 8, 112(26)
  01fb01c  lfs 9, 116(26)
  01fb020  fmadds 3, 8, 31, 3
  01fb024  fmadds 4, 9, 31, 4
  01fb028  lfs 10, -3048(3)
  01fb02c  frsp 5, 5
  01fb030  stfs 2, 152(1)
  01fb034  stfs 2, 168(1)
  01fb038  fmuls 7, 7, 10
  01fb03c  lis 3, 118
  01fb040  stfs 3, 144(1)
  01fb044  fadds 5, 5, 31
  01fb048  stfs 3, 160(1)
  01fb04c  stfs 4, 148(1)
  01fb050  stfs 4, 164(1)
  01fb054  stfs 1, 172(1)
  01fb058  lwz 3, 25796(3)
  01fb05c  cmpwi 3, 0
  01fb060  fmuls 5, 6, 5
  01fb064  fmr 3, 5
  01fb068  fctidz 1, 3
  01fb06c  fcfid 1, 1
  01fb070  frsp 1, 1
  01fb074  fnmsubs 1, 7, 1, 2
  01fb078  stfs 1, 168(1)
  01fb07c  bf 1, 0x1fb268
  01fb080  lis 3, 32
  01fb084  addi 3, 3, -21080
  01fb088  lfs 27, 44(3)
  01fb08c  lfs 28, 48(3)
  01fb090  lfs 29, 52(3)
  01fb094  fmr 1, 31
  01fb098  fmr 2, 27
  01fb09c  bl 0xfcbe8
  01fb0a0  nop
  01fb0a4  lis 3, 118
  01fb0a8  lis 4, 118
  01fb0ac  lis 5, 118
  01fb0b0  addic 25, 1, 128
  01fb0b4  lfs 2, 25832(3)
  01fb0b8  lfs 3, 25836(4)
  01fb0bc  ori 3, 25, 0
  01fb0c0  fmuls 2, 2, 1
  01fb0c4  fmuls 3, 3, 1
  01fb0c8  lfs 1, 25804(5)
  01fb0cc  stfs 2, 156(1)
  01fb0d0  stfs 3, 172(1)
  01fb0d4  bl 0x110950
  01fb0d8  nop
  01fb0dc  lis 4, 118
  01fb0e0  lis 5, 114
  01fb0e4  addic 24, 1, 160
  01fb0e8  ori 3, 24, 0
  01fb0ec  lfs 1, 25808(4)
  01fb0f0  lfs 2, -3052(5)
  01fb0f4  fmuls 1, 1, 2
  01fb0f8  bl 0x110950
  01fb0fc  nop
  01fb100  lis 3, 118
  01fb104  fmr 1, 30
  01fb108  lis 4, 118
  01fb10c  fmr 2, 28
  01fb110  lwz 3, 25840(3)
  01fb114  lwz 4, 25848(4)
  01fb118  extsw 23, 3
  01fb11c  extsw 22, 4
  01fb120  bl 0xfcbe8
  01fb124  nop
  01fb128  ori 4, 22, 0
  01fb12c  ori 3, 23, 0
  01fb130  bl 0x5027bc
  01fb134  nop
  01fb138  lis 4, 118
  01fb13c  fmr 1, 30
  01fb140  lis 5, 118
  01fb144  fmr 2, 28
  01fb148  ori 23, 3, 0
  01fb14c  lwz 3, 25844(4)
  01fb150  lwz 4, 25852(5)
  01fb154  extsw 22, 3
  01fb158  extsw 21, 4
  01fb15c  bl 0xfcbe8
  01fb160  nop
  01fb164  ori 4, 21, 0
  01fb168  ori 3, 22, 0
  01fb16c  bl 0x5027bc
  01fb170  nop
  01fb174  lis 4, 118
  01fb178  lis 22, 114
  01fb17c  lis 5, 118
  01fb180  lwz 4, 25856(4)
  01fb184  extsw 4, 4
  01fb188  std 4, 176(1)
  01fb18c  lis 4, 118
  01fb190  lfs 1, -3056(22)
  01fb194  ori 21, 3, 0
  01fb198  lwz 4, 25860(4)
  01fb19c  lfd 2, 176(1)
  01fb1a0  fcfid 2, 2
  01fb1a4  extsw 4, 4
  01fb1a8  frsp 2, 2
  01fb1ac  fadds 2, 2, 31
  01fb1b0  fmuls 2, 1, 2
  01fb1b4  fctiwz 2, 2
  01fb1b8  stfd 2, 176(1)
  01fb1bc  lwz 6, 180(1)
  01fb1c0  std 4, 176(1)
  01fb1c4  lwz 4, 25864(5)
  01fb1c8  lfd 2, 176(1)
  01fb1cc  fcfid 2, 2
  01fb1d0  extsw 4, 4
  01fb1d4  extsw 20, 6
  01fb1d8  frsp 2, 2
  01fb1dc  fadds 2, 2, 31
  01fb1e0  fmuls 1, 1, 2
  01fb1e4  fctiwz 1, 1
  01fb1e8  stfd 1, 176(1)
  01fb1ec  lwz 3, 180(1)
  01fb1f0  std 4, 176(1)
  01fb1f4  extsw 19, 3
  01fb1f8  lfd 1, 176(1)
  01fb1fc  fcfid 1, 1
  01fb200  frsp 2, 1
  01fb204  fmuls 1, 2, 31
  01fb208  fmuls 2, 2, 29
  01fb20c  bl 0xfcbe8
  01fb210  nop
  01fb214  lfs 2, -3056(22)
  01fb218  fmuls 1, 1, 2
  01fb21c  bl 0x502758
  01fb220  nop
  01fb224  li 7, -1
  01fb228  ori 10, 3, 0
  01fb22c  ori 3, 25, 0
  01fb230  ori 5, 24, 0
  01fb234  std 7, 112(1)
  01fb238  ori 6, 23, 0
  01fb23c  addic 4, 1, 144
  01fb240  ori 9, 19, 0
  01fb244  ori 7, 21, 0
  01fb248  ori 8, 20, 0
  01fb24c  bl 0x1206e8
  01fb250  nop
  01fb254  lis 3, 118
  01fb258  addic 29, 29, 1
  01fb25c  lwz 3, 25796(3)
  01fb260  cmpw 29, 3
  01fb264  bt 0, 0x1fb094
  01fb268  addic 28, 28, 1
  01fb26c  cmpw 28, 27
  01fb270  bt 0, 0x1fae54
  01fb274  ld 0, 352(1)
  01fb278  mtlr 0
  01fb27c  lfd 27, 296(1)
  01fb280  lfd 28, 304(1)
  01fb284  lfd 29, 312(1)
  01fb288  lfd 30, 320(1)
  01fb28c  lfd 31, 328(1)
  01fb290  ld 19, 192(1)
  01fb294  ld 20, 200(1)
  01fb298  ld 21, 208(1)
  01fb29c  ld 22, 216(1)
  01fb2a0  ld 23, 224(1)
  01fb2a4  ld 24, 232(1)
  01fb2a8  ld 25, 240(1)
  01fb2ac  ld 26, 248(1)
  01fb2b0  ld 27, 256(1)
  01fb2b4  ld 28, 264(1)
  01fb2b8  ld 29, 272(1)
  01fb2bc  ld 30, 280(1)
  01fb2c0  ld 31, 288(1)
  01fb2c4  addi 1, 1, 336
  01fb2c8  blr

M1202_001fb2f0:   # 0x1fb2f0, 0x1c8 bytes
  01fb2f0  stdu 1, -192(1)
  01fb2f4  mflr 0
  01fb2f8  std 0, 208(1)
  01fb2fc  stfd 28, 160(1)
  01fb300  stfd 29, 168(1)
  01fb304  stfd 30, 176(1)
  01fb308  stfd 31, 184(1)
  01fb30c  std 31, 152(1)
  01fb310  lis 4, 32
  01fb314  std 30, 144(1)
  01fb318  ori 31, 3, 0
  01fb31c  std 29, 136(1)
  01fb320  addi 30, 4, -19764
  01fb324  bl 0xfcc68
  01fb328  nop
  01fb32c  lfs 31, 0(30)
  01fb330  fmr 30, 1
  01fb334  lis 3, 118
  01fb338  fmr 1, 31
  01fb33c  lfs 2, 25788(3)
  01fb340  bl 0xfcbe8
  01fb344  nop
  01fb348  fmr 29, 1
  01fb34c  fmr 1, 31
  01fb350  lis 29, 118
  01fb354  lfs 2, 25772(29)
  01fb358  bl 0xfcbe8
  01fb35c  nop
  01fb360  lis 3, 118
  01fb364  fmr 31, 1
  01fb368  lfs 1, 25772(29)
  01fb36c  lfs 2, 25776(3)
  01fb370  bl 0xfcbe8
  01fb374  nop
  01fb378  lis 3, 118
  01fb37c  lis 4, 118
  01fb380  fmr 28, 1
  01fb384  lwz 3, 25780(3)
  01fb388  lwz 4, 25784(4)
  01fb38c  extsw 3, 3
  01fb390  extsw 4, 4
  01fb394  bl 0xfe484
  01fb398  nop
  01fb39c  lfs 1, 4(30)
  01fb3a0  lfs 2, 8(30)
  01fb3a4  fadds 1, 30, 1
  01fb3a8  lfs 3, 12(30)
  01fb3ac  fsubs 4, 2, 30
  01fb3b0  lis 4, 118
  01fb3b4  lis 5, 118
  01fb3b8  ori 8, 3, 0
  01fb3bc  addic 3, 1, 112
  01fb3c0  fsubs 2, 2, 1
  01fb3c4  fsub 6, 30, 4
  01fb3c8  fsubs 5, 3, 1
  01fb3cc  fsubs 3, 3, 30
  01fb3d0  fsub 7, 1, 2
  01fb3d4  fsel 4, 6, 4, 30
  01fb3d8  lfs 6, 16(30)
  01fb3dc  fsel 1, 7, 2, 1
  01fb3e0  fsub 2, 3, 4
  01fb3e4  fsub 8, 5, 1
  01fb3e8  fsel 2, 2, 3, 4
  01fb3ec  lfs 3, 20(30)
  01fb3f0  lfs 4, 24(30)
  01fb3f4  lfs 9, 28(30)
  01fb3f8  lfs 10, 16(31)
  01fb3fc  fsel 1, 8, 5, 1
  01fb400  fmuls 5, 2, 2
  01fb404  fmuls 7, 1, 1
  01fb408  fmuls 8, 5, 2
  01fb40c  fmuls 11, 7, 1
  01fb410  fmuls 12, 5, 8
  01fb414  fmadds 2, 8, 6, 2
  01fb418  lfs 8, 20(31)
  01fb41c  fmuls 13, 7, 11
  01fb420  fmadds 1, 11, 6, 1
  01fb424  fmuls 6, 5, 12
  01fb428  fmadds 2, 12, 3, 2
  01fb42c  fmuls 11, 7, 13
  01fb430  fmadds 1, 13, 3, 1
  01fb434  fmuls 3, 5, 6
  01fb438  fmadds 2, 6, 4, 2
  01fb43c  lfs 5, 24(31)
  01fb440  fmuls 6, 7, 11
  01fb444  fmadds 1, 11, 4, 1
  01fb448  fmadds 2, 3, 9, 2
  01fb44c  fmadds 1, 6, 9, 1
  01fb450  fmadds 2, 2, 29, 8
  01fb454  fmadds 1, 1, 29, 10
  01fb458  stfs 2, 116(1)
  01fb45c  lwz 4, 25764(4)
  01fb460  lwz 5, 25768(5)
  01fb464  extsw 4, 4
  01fb468  fmr 2, 28
  01fb46c  extsw 5, 5
  01fb470  stfs 1, 112(1)
  01fb474  lfs 3, 32(30)
  01fb478  fmr 1, 31
  01fb47c  fadds 3, 5, 3
  01fb480  stfs 3, 120(1)
  01fb484  bl 0x12f6b0
  01fb488  nop
  01fb48c  ld 0, 208(1)
  01fb490  mtlr 0
  01fb494  lfd 28, 160(1)
  01fb498  lfd 29, 168(1)
  01fb49c  lfd 30, 176(1)
  01fb4a0  lfd 31, 184(1)
  01fb4a4  ld 29, 136(1)
  01fb4a8  ld 30, 144(1)
  01fb4ac  ld 31, 152(1)
  01fb4b0  addi 1, 1, 192
  01fb4b4  blr

M1202_001fb4d0:   # 0x1fb4d0, 0x700 bytes
  01fb4d0  stdu 1, -336(1)
  01fb4d4  mflr 0
  01fb4d8  std 0, 352(1)
  01fb4dc  stfd 26, 288(1)
  01fb4e0  stfd 27, 296(1)
  01fb4e4  stfd 28, 304(1)
  01fb4e8  stfd 29, 312(1)
  01fb4ec  stfd 30, 320(1)
  01fb4f0  stfd 31, 328(1)
  01fb4f4  std 31, 280(1)
  01fb4f8  lis 4, 32
  01fb4fc  std 28, 256(1)
  01fb500  lwz 31, 120(3)
  01fb504  ori 28, 1, 0
  01fb508  std 30, 272(1)
  01fb50c  addi 4, 4, -19272
  01fb510  lbz 30, 33(3)
  01fb514  cmpwi 30, 255
  01fb518  lfs 31, 0(4)
  01fb51c  lfs 4, 24(3)
  01fb520  std 29, 264(1)
  01fb524  lwz 31, 352(31)
  01fb528  bf 2, 0x1fb6ec
  01fb52c  lfs 1, 16(3)
  01fb530  lfs 2, 16(31)
  01fb534  lfs 3, 20(3)
  01fb538  lfs 4, 20(31)
  01fb53c  fsubs 1, 1, 2
  01fb540  lis 3, 32
  01fb544  fsubs 2, 3, 4
  01fb548  addi 3, 3, -19272
  01fb54c  lis 4, 115
  01fb550  addic 4, 4, 22784
  01fb554  fabs 3, 1
  01fb558  fabs 5, 2
  01fb55c  stfs 1, 136(1)
  01fb560  stfs 2, 140(1)
  01fb564  fsubs 1, 3, 5
  01fb568  stfs 1, 144(1)
  01fb56c  lwz 5, 136(1)
  01fb570  lfs 4, 4(3)
  01fb574  lfs 1, 136(1)
  01fb578  lwz 3, 140(1)
  01fb57c  lfs 2, 140(1)
  01fb580  lwz 6, 144(1)
  01fb584  rlwinm 3, 3, 3, 29, 29
  01fb588  fabs 6, 2
  01fb58c  lfs 2, 144(1)
  01fb590  fabs 1, 1
  01fb594  rlwimi 3, 6, 2, 30, 30
  01fb598  fsub 7, 2, 4
  01fb59c  rlwimi 3, 5, 4, 28, 28
  01fb5a0  fsub 8, 2, 4
  01fb5a4  ori 5, 4, 0
  01fb5a8  rlwimi 5, 3, 2, 26, 28
  01fb5ac  slwi 3, 3, 2
  01fb5b0  clrldi 5, 5, 32
  01fb5b4  fsel 5, 7, 1, 5
  01fb5b8  lfsx 1, 4, 3
  01fb5bc  lfs 2, 4(5)
  01fb5c0  fsel 3, 8, 6, 3
  01fb5c4  fcmpu 0, 5, 4
  01fb5c8  bt 1, 0x1fb5d4
  01fb5cc  fmr 1, 4
  01fb5d0  b 0x1fb6e8
  01fb5d4  fsubs 6, 3, 5
  01fb5d8  fadds 3, 3, 5
  01fb5dc  li 5, 2
  01fb5e0  mtctr 5
  01fb5e4  fdivs 3, 6, 3
  01fb5e8  fmuls 5, 3, 3
  01fb5ec  stfs 3, 212(28)
  01fb5f0  stfs 3, 216(28)
  01fb5f4  stfs 3, 220(28)
  01fb5f8  stfs 3, 224(28)
  01fb5fc  lfs 3, 224(1)
  01fb600  lfs 6, 216(1)
  01fb604  addic 28, 1, 16
  01fb608  lfs 8, 220(1)
  01fb60c  fmuls 7, 5, 5
  01fb610  fmuls 6, 6, 5
  01fb614  addic 3, 28, 196
  01fb618  addic 4, 28, 212
  01fb61c  fmuls 9, 3, 7
  01fb620  fmuls 8, 8, 7
  01fb624  fmuls 3, 7, 7
  01fb628  stfs 6, 216(1)
  01fb62c  fmuls 5, 9, 5
  01fb630  stfs 8, 220(1)
  01fb634  stfs 5, 224(1)
  01fb638  lfs 5, 196(28)
  01fb63c  fmuls 5, 5, 3
  01fb640  stfs 5, 212(28)
  01fb644  lfs 5, 4(3)
  01fb648  addic 3, 3, 8
  01fb64c  fmuls 5, 5, 3
  01fb650  addic 28, 28, 8
  01fb654  stfs 5, 4(4)
  01fb658  addic 4, 4, 8
  01fb65c  bdnz 0x1fb638
  01fb660  li 6, 4
  01fb664  ori 3, 1, 0
  01fb668  mtctr 6
  01fb66c  lis 4, 115
  01fb670  addic 6, 3, 212
  01fb674  addic 4, 4, 22752
  01fb678  ori 7, 6, 0
  01fb67c  lfs 3, 212(3)
  01fb680  lfs 5, 0(4)
  01fb684  fmuls 3, 3, 5
  01fb688  lfs 5, 4(4)
  01fb68c  addic 4, 4, 8
  01fb690  stfs 3, 212(3)
  01fb694  lfs 3, 4(6)
  01fb698  addic 3, 3, 8
  01fb69c  fmuls 3, 3, 5
  01fb6a0  stfs 3, 4(6)
  01fb6a4  addic 6, 6, 8
  01fb6a8  bdnz 0x1fb67c
  01fb6ac  ori 3, 1, 0
  01fb6b0  mtctr 5
  01fb6b4  lfs 3, 212(3)
  01fb6b8  fadds 3, 4, 3
  01fb6bc  addic 3, 3, 16
  01fb6c0  lfs 4, 4(7)
  01fb6c4  lfs 5, 8(7)
  01fb6c8  lfs 6, 12(7)
  01fb6cc  addic 7, 7, 16
  01fb6d0  fadds 3, 3, 4
  01fb6d4  fadds 4, 3, 5
  01fb6d8  fadds 4, 4, 6
  01fb6dc  bdnz 0x1fb6b4
  01fb6e0  fadds 3, 4, 31
  01fb6e4  fmadds 1, 3, 1, 2
  01fb6e8  b 0x1fbb98
  01fb6ec  lfs 27, 16(3)
  01fb6f0  lfs 1, 16(31)
  01fb6f4  lis 4, 32
  01fb6f8  lfs 2, 20(3)
  01fb6fc  lfs 3, 20(31)
  01fb700  fsubs 5, 27, 1
  01fb704  addi 3, 4, -19272
  01fb708  fsubs 6, 2, 3
  01fb70c  lis 4, 118
  01fb710  lis 29, 115
  01fb714  lfs 30, 8(3)
  01fb718  lfs 29, 12(3)
  01fb71c  addic 29, 29, 22784
  01fb720  fabs 8, 5
  01fb724  fabs 9, 6
  01fb728  stfs 5, 124(1)
  01fb72c  stfs 6, 128(1)
  01fb730  fsubs 5, 8, 9
  01fb734  stfs 5, 132(1)
  01fb738  lwz 5, 124(1)
  01fb73c  lfs 26, 4(3)
  01fb740  lfs 5, 124(1)
  01fb744  fabs 7, 5
  01fb748  lfs 5, 25748(4)
  01fb74c  lwz 3, 128(1)
  01fb750  fmuls 30, 5, 30
  01fb754  fmuls 29, 5, 29
  01fb758  lfs 5, 128(1)
  01fb75c  rlwinm 3, 3, 3, 29, 29
  01fb760  lwz 4, 132(1)
  01fb764  lfs 6, 132(1)
  01fb768  rlwimi 3, 4, 2, 30, 30
  01fb76c  fabs 11, 5
  01fb770  fsub 10, 6, 26
  01fb774  ori 4, 29, 0
  01fb778  fsub 6, 6, 26
  01fb77c  rlwimi 3, 5, 4, 28, 28
  01fb780  rlwimi 4, 3, 2, 26, 28
  01fb784  slwi 3, 3, 2
  01fb788  clrldi 4, 4, 32
  01fb78c  lfsx 28, 29, 3
  01fb790  fsel 7, 10, 7, 9
  01fb794  lfs 5, 4(4)
  01fb798  fsel 6, 6, 11, 8
  01fb79c  fcmpu 0, 7, 26
  01fb7a0  bt 1, 0x1fb7ac
  01fb7a4  fmr 28, 26
  01fb7a8  b 0x1fb8c4
  01fb7ac  fsubs 8, 6, 7
  01fb7b0  fadds 6, 6, 7
  01fb7b4  addic 3, 1, 16
  01fb7b8  li 6, 2
  01fb7bc  addic 5, 3, 180
  01fb7c0  addic 4, 3, 164
  01fb7c4  mtctr 6
  01fb7c8  fdivs 6, 8, 6
  01fb7cc  fmuls 7, 6, 6
  01fb7d0  stfs 6, 180(28)
  01fb7d4  stfs 6, 184(28)
  01fb7d8  stfs 6, 188(28)
  01fb7dc  stfs 6, 192(28)
  01fb7e0  lfs 6, 192(1)
  01fb7e4  lfs 8, 184(1)
  01fb7e8  lfs 10, 188(1)
  01fb7ec  fmuls 9, 7, 7
  01fb7f0  fmuls 8, 8, 7
  01fb7f4  fmuls 11, 6, 9
  01fb7f8  fmuls 10, 10, 9
  01fb7fc  fmuls 6, 9, 9
  01fb800  stfs 8, 184(1)
  01fb804  fmuls 7, 11, 7
  01fb808  stfs 10, 188(1)
  01fb80c  stfs 7, 192(1)
  01fb810  lfs 7, 164(3)
  01fb814  fmuls 7, 7, 6
  01fb818  stfs 7, 180(3)
  01fb81c  lfs 7, 4(4)
  01fb820  addic 4, 4, 8
  01fb824  fmuls 7, 7, 6
  01fb828  addic 3, 3, 8
  01fb82c  stfs 7, 4(5)
  01fb830  addic 5, 5, 8
  01fb834  bdnz 0x1fb810
  01fb838  li 5, 4
  01fb83c  ori 3, 1, 0
  01fb840  mtctr 5
  01fb844  lis 4, 115
  01fb848  addic 5, 3, 180
  01fb84c  addic 4, 4, 22752
  01fb850  ori 7, 5, 0
  01fb854  lfs 6, 180(3)
  01fb858  lfs 7, 0(4)
  01fb85c  fmuls 6, 6, 7
  01fb860  lfs 7, 4(4)
  01fb864  addic 4, 4, 8
  01fb868  stfs 6, 180(3)
  01fb86c  lfs 6, 4(5)
  01fb870  addic 3, 3, 8
  01fb874  fmuls 6, 6, 7
  01fb878  stfs 6, 4(5)
  01fb87c  addic 5, 5, 8
  01fb880  bdnz 0x1fb854
  01fb884  ori 3, 1, 0
  01fb888  fmr 6, 26
  01fb88c  mtctr 6
  01fb890  lfs 7, 180(3)
  01fb894  fadds 6, 6, 7
  01fb898  lfs 7, 4(7)
  01fb89c  addic 3, 3, 16
  01fb8a0  lfs 8, 8(7)
  01fb8a4  lfs 9, 12(7)
  01fb8a8  addic 7, 7, 16
  01fb8ac  fadds 6, 6, 7
  01fb8b0  fadds 6, 6, 8
  01fb8b4  fadds 6, 6, 9
  01fb8b8  bdnz 0x1fb890
  01fb8bc  fadds 6, 6, 31
  01fb8c0  fmadds 28, 6, 28, 5
  01fb8c4  fsubs 2, 3, 2
  01fb8c8  fsubs 1, 1, 27
  01fb8cc  lfs 3, 24(31)
  01fb8d0  lis 3, 165
  01fb8d4  fsubs 3, 3, 4
  01fb8d8  addic 3, 3, -28284
  01fb8dc  rlwinm 4, 30, 2, 22, 29
  01fb8e0  fmuls 2, 2, 2
  01fb8e4  lwzx 30, 3, 4
  01fb8e8  cmpwi 30, 0
  01fb8ec  fmadds 1, 1, 1, 2
  01fb8f0  fmadds 27, 3, 3, 1
  01fb8f4  fsqrts 27, 27
  01fb8f8  bt 2, 0x1fbb60
  01fb8fc  lis 3, 164
  01fb900  lhz 4, 0(30)
  01fb904  rlwinm 4, 4, 8, 9, 23
  01fb908  lwz 3, -28512(3)
  01fb90c  addc 3, 3, 4
  01fb910  clrldi 3, 3, 32
  01fb914  lbz 4, 32(3)
  01fb918  cmpwi 4, 5
  01fb91c  bt 2, 0x1fb960
  01fb920  lfs 1, 20(3)
  01fb924  lfs 2, 20(31)
  01fb928  lfs 3, 16(3)
  01fb92c  fsubs 1, 1, 2
  01fb930  lfs 2, 16(31)
  01fb934  fsubs 2, 3, 2
  01fb938  lfs 3, 24(3)
  01fb93c  lfs 4, 24(31)
  01fb940  fsubs 3, 3, 4
  01fb944  fmuls 1, 1, 1
  01fb948  fmadds 1, 2, 2, 1
  01fb94c  fmadds 1, 3, 3, 1
  01fb950  fsqrts 1, 1
  01fb954  fcmpu 0, 1, 27
  01fb958  cror 6, 1, 2
  01fb95c  bt 6, 0x1fbb4c
  01fb960  lfs 1, 16(3)
  01fb964  lfs 2, 16(31)
  01fb968  lfs 3, 20(3)
  01fb96c  lfs 4, 20(31)
  01fb970  fsubs 1, 1, 2
  01fb974  fsubs 2, 3, 4
  01fb978  fabs 3, 1
  01fb97c  fabs 4, 2
  01fb980  stfs 1, 112(1)
  01fb984  stfs 2, 116(1)
  01fb988  fsubs 1, 3, 4
  01fb98c  stfs 1, 120(1)
  01fb990  lwz 3, 112(1)
  01fb994  lfs 1, 112(1)
  01fb998  lwz 4, 116(1)
  01fb99c  lfs 2, 116(1)
  01fb9a0  lwz 5, 120(1)
  01fb9a4  rlwinm 4, 4, 3, 29, 29
  01fb9a8  fabs 5, 2
  01fb9ac  lfs 2, 120(1)
  01fb9b0  fabs 1, 1
  01fb9b4  rlwimi 4, 5, 2, 30, 30
  01fb9b8  fsub 6, 2, 26
  01fb9bc  fsub 7, 2, 26
  01fb9c0  rlwimi 4, 3, 4, 28, 28
  01fb9c4  ori 3, 29, 0
  01fb9c8  rlwimi 3, 4, 2, 26, 28
  01fb9cc  slwi 4, 4, 2
  01fb9d0  clrldi 3, 3, 32
  01fb9d4  fsel 4, 6, 1, 4
  01fb9d8  lfsx 1, 29, 4
  01fb9dc  fsel 3, 7, 5, 3
  01fb9e0  lfs 2, 4(3)
  01fb9e4  fcmpu 0, 4, 26
  01fb9e8  bt 1, 0x1fb9f4
  01fb9ec  fmr 1, 26
  01fb9f0  b 0x1fbb0c
  01fb9f4  fsubs 5, 3, 4
  01fb9f8  fadds 3, 3, 4
  01fb9fc  addic 3, 1, 16
  01fba00  li 6, 2
  01fba04  addic 5, 3, 148
  01fba08  addic 4, 3, 132
  01fba0c  mtctr 6
  01fba10  fdivs 3, 5, 3
  01fba14  fmuls 4, 3, 3
  01fba18  stfs 3, 148(28)
  01fba1c  stfs 3, 152(28)
  01fba20  stfs 3, 156(28)
  01fba24  stfs 3, 160(28)
  01fba28  lfs 3, 160(1)
  01fba2c  lfs 5, 152(1)
  01fba30  lfs 7, 156(1)
  01fba34  fmuls 6, 4, 4
  01fba38  fmuls 5, 5, 4
  01fba3c  fmuls 8, 3, 6
  01fba40  fmuls 7, 7, 6
  01fba44  fmuls 3, 6, 6
  01fba48  stfs 5, 152(1)
  01fba4c  fmuls 4, 8, 4
  01fba50  stfs 7, 156(1)
  01fba54  stfs 4, 160(1)
  01fba58  lfs 4, 132(3)
  01fba5c  fmuls 4, 4, 3
  01fba60  stfs 4, 148(3)
  01fba64  lfs 4, 4(4)
  01fba68  addic 4, 4, 8
  01fba6c  fmuls 4, 4, 3
  01fba70  addic 3, 3, 8
  01fba74  stfs 4, 4(5)
  01fba78  addic 5, 5, 8
  01fba7c  bdnz 0x1fba58
  01fba80  li 5, 4
  01fba84  ori 3, 1, 0
  01fba88  mtctr 5
  01fba8c  lis 4, 115
  01fba90  addic 5, 3, 148
  01fba94  addic 4, 4, 22752
  01fba98  ori 7, 5, 0
  01fba9c  lfs 3, 148(3)
  01fbaa0  lfs 4, 0(4)
  01fbaa4  fmuls 3, 3, 4
  01fbaa8  lfs 4, 4(4)
  01fbaac  addic 4, 4, 8
  01fbab0  stfs 3, 148(3)
  01fbab4  lfs 3, 4(5)
  01fbab8  addic 3, 3, 8
  01fbabc  fmuls 3, 3, 4
  01fbac0  stfs 3, 4(5)
  01fbac4  addic 5, 5, 8
  01fbac8  bdnz 0x1fba9c
  01fbacc  ori 3, 1, 0
  01fbad0  fmr 3, 26
  01fbad4  mtctr 6
  01fbad8  lfs 4, 148(3)
  01fbadc  fadds 3, 3, 4
  01fbae0  lfs 4, 4(7)
  01fbae4  addic 3, 3, 16
  01fbae8  lfs 5, 8(7)
  01fbaec  lfs 6, 12(7)
  01fbaf0  addic 7, 7, 16
  01fbaf4  fadds 3, 3, 4
  01fbaf8  fadds 3, 3, 5
  01fbafc  fadds 3, 3, 6
  01fbb00  bdnz 0x1fbad8
  01fbb04  fadds 3, 3, 31
  01fbb08  fmadds 1, 3, 1, 2
  01fbb0c  fmr 2, 28
  01fbb10  bl 0x5025e0
  01fbb14  nop
  01fbb18  fcmpu 0, 1, 26
  01fbb1c  cror 6, 0, 2
  01fbb20  bt 6, 0x1fbb38
  01fbb24  fcmpu 0, 29, 1
  01fbb28  cror 6, 0, 2
  01fbb2c  bt 6, 0x1fbb38
  01fbb30  fmr 29, 1
  01fbb34  b 0x1fbb4c
  01fbb38  fcmpu 1, 30, 1
  01fbb3c  fcmpu 0, 1, 26
  01fbb40  crnand 2, 0, 4
  01fbb44  bt 2, 0x1fbb4c
  01fbb48  fmr 30, 1
  01fbb4c  lhz 3, 0(30)
  01fbb50  addic 30, 30, 2
  01fbb54  extsh 3, 3
  01fbb58  cmpwi 3, 0
  01fbb5c  bf 0, 0x1fb8fc
  01fbb60  fmr 1, 29
  01fbb64  fmr 2, 30
  01fbb68  bl 0x5026a0
  01fbb6c  nop
  01fbb70  lis 3, 32
  01fbb74  addi 3, 3, -19272
  01fbb78  lfs 2, 16(3)
  01fbb7c  fmuls 2, 1, 2
  01fbb80  fmr 1, 30
  01fbb84  bl 0x502578
  01fbb88  nop
  01fbb8c  fmr 2, 28
  01fbb90  bl 0x502578
  01fbb94  nop
  01fbb98  ld 0, 352(1)
  01fbb9c  mtlr 0
  01fbba0  lfd 26, 288(1)
  01fbba4  lfd 27, 296(1)
  01fbba8  lfd 28, 304(1)
  01fbbac  lfd 29, 312(1)
  01fbbb0  lfd 30, 320(1)
  01fbbb4  lfd 31, 328(1)
  01fbbb8  ld 28, 256(1)
  01fbbbc  ld 29, 264(1)
  01fbbc0  ld 30, 272(1)
  01fbbc4  ld 31, 280(1)
  01fbbc8  addi 1, 1, 336
  01fbbcc  blr

M1202_001fbbd0:   # 0x1fbbd0, 0x68 bytes
  01fbbd0  lbz 3, 33(3)
  01fbbd4  cmpwi 3, 255
  01fbbd8  bt 2, 0x1fbc34
  01fbbdc  lis 4, 165
  01fbbe0  rlwinm 3, 3, 2, 22, 29
  01fbbe4  addic 4, 4, -28284
  01fbbe8  lwzx 3, 4, 3
  01fbbec  cmpwi 3, 0
  01fbbf0  bt 2, 0x1fbc34
  01fbbf4  lis 5, 164
  01fbbf8  li 4, 2
  01fbbfc  lhz 6, 0(3)
  01fbc00  lwz 7, -28512(5)
  01fbc04  rlwinm 6, 6, 8, 9, 23
  01fbc08  addc 6, 7, 6
  01fbc0c  clrldi 6, 6, 32
  01fbc10  lbz 7, 32(6)
  01fbc14  cmpwi 7, 1
  01fbc18  bf 2, 0x1fbc20
  01fbc1c  stb 4, 32(6)
  01fbc20  lhz 6, 0(3)
  01fbc24  addic 3, 3, 2
  01fbc28  extsh 6, 6
  01fbc2c  cmpwi 6, 0
  01fbc30  bf 0, 0x1fbbfc
  01fbc34  blr

M1202_001fbc78:   # 0x1fbc78, 0x102c bytes
  01fbc78  stdu 1, -368(1)
  01fbc7c  mflr 0
  01fbc80  std 0, 384(1)
  01fbc84  stfd 30, 352(1)
  01fbc88  stfd 31, 360(1)
  01fbc8c  std 26, 304(1)
  01fbc90  std 31, 344(1)
  01fbc94  lis 26, 151
  01fbc98  std 30, 336(1)
  01fbc9c  ori 31, 3, 0
  01fbca0  lwz 30, 120(3)
  01fbca4  addic 26, 26, -25376
  01fbca8  lwz 3, 4280(26)
  01fbcac  std 29, 328(1)
  01fbcb0  std 28, 320(1)
  01fbcb4  std 27, 312(1)
  01fbcb8  std 25, 296(1)
  01fbcbc  cmpwi 3, 21
  01fbcc0  bf 2, 0x1fbd50
  01fbcc4  lwz 3, 4240(26)
  01fbcc8  lwz 3, 120(3)
  01fbccc  lwz 3, 16(3)
  01fbcd0  cmpw 3, 31
  01fbcd4  bf 2, 0x1fbd50
  01fbcd8  lbz 3, 33(31)
  01fbcdc  cmpwi 3, 255
  01fbce0  bt 2, 0x1fbd3c
  01fbce4  lis 4, 165
  01fbce8  rlwinm 3, 3, 2, 22, 29
  01fbcec  addic 4, 4, -28284
  01fbcf0  lwzx 3, 4, 3
  01fbcf4  cmpwi 3, 0
  01fbcf8  bt 2, 0x1fbd3c
  01fbcfc  lis 5, 164
  01fbd00  li 6, 2
  01fbd04  lhz 4, 0(3)
  01fbd08  lwz 7, -28512(5)
  01fbd0c  rlwinm 4, 4, 8, 9, 23
  01fbd10  addc 4, 7, 4
  01fbd14  clrldi 4, 4, 32
  01fbd18  lbz 7, 32(4)
  01fbd1c  cmpwi 7, 1
  01fbd20  bf 2, 0x1fbd28
  01fbd24  stb 6, 32(4)
  01fbd28  lhz 4, 0(3)
  01fbd2c  addic 3, 3, 2
  01fbd30  extsh 4, 4
  01fbd34  cmpwi 4, 0
  01fbd38  bf 0, 0x1fbd04
  01fbd3c  lbz 3, 32(31)
  01fbd40  cmpwi 3, 1
  01fbd44  bf 2, 0x1fbd50
  01fbd48  li 3, 2
  01fbd4c  stb 3, 32(31)
  01fbd50  lwz 3, 56(30)
  01fbd54  cmpwi 3, 0
  01fbd58  bt 2, 0x1fbdf8
  01fbd5c  lbz 3, 33(31)
  01fbd60  cmpwi 3, 255
  01fbd64  bt 2, 0x1fbdc0
  01fbd68  lis 4, 165
  01fbd6c  rlwinm 3, 3, 2, 22, 29
  01fbd70  addic 4, 4, -28284
  01fbd74  lwzx 3, 4, 3
  01fbd78  cmpwi 3, 0
  01fbd7c  bt 2, 0x1fbdc0
  01fbd80  lis 5, 164
  01fbd84  li 6, 2
  01fbd88  lhz 4, 0(3)
  01fbd8c  lwz 7, -28512(5)
  01fbd90  rlwinm 4, 4, 8, 9, 23
  01fbd94  addc 4, 7, 4
  01fbd98  clrldi 4, 4, 32
  01fbd9c  lbz 7, 32(4)
  01fbda0  cmpwi 7, 1
  01fbda4  bf 2, 0x1fbdac
  01fbda8  stb 6, 32(4)
  01fbdac  lhz 4, 0(3)
  01fbdb0  addic 3, 3, 2
  01fbdb4  extsh 4, 4
  01fbdb8  cmpwi 4, 0
  01fbdbc  bf 0, 0x1fbd88
  01fbdc0  lis 3, 32
  01fbdc4  addi 3, 3, -17352
  01fbdc8  lfs 1, 0(3)
  01fbdcc  lfs 2, 4(3)
  01fbdd0  bl 0xfcbe8
  01fbdd4  nop
  01fbdd8  lis 3, 114
  01fbddc  lfs 2, -3056(3)
  01fbde0  fmuls 1, 1, 2
  01fbde4  bl 0x502758
  01fbde8  nop
  01fbdec  stw 3, 428(30)
  01fbdf0  li 3, 0
  01fbdf4  stw 3, 56(30)
  01fbdf8  addic 3, 30, 428
  01fbdfc  bl 0x4fff60
  01fbe00  nop
  01fbe04  lis 3, 32
  01fbe08  li 5, 1
  01fbe0c  addi 6, 3, -17352
  01fbe10  li 7, 0
  01fbe14  ori 3, 31, 0
  01fbe18  stw 5, 192(1)
  01fbe1c  lis 4, 179
  01fbe20  lfs 30, 8(6)
  01fbe24  li 5, 0
  01fbe28  stw 7, 196(1)
  01fbe2c  bl 0x10675c
  01fbe30  nop
  01fbe34  ori 29, 3, 0
  01fbe38  ori 3, 31, 0
  01fbe3c  addic 5, 30, 32
  01fbe40  li 6, 0
  01fbe44  addic 7, 1, 192
  01fbe48  li 9, 0
  01fbe4c  addic 8, 1, 196
  01fbe50  ori 4, 29, 0
  01fbe54  li 10, 4
  01fbe58  bl 0x106840
  01fbe5c  nop
  01fbe60  ori 28, 3, 0
  01fbe64  addic 3, 30, 38
  01fbe68  bl 0x4fffb4
  01fbe6c  nop
  01fbe70  lwz 3, 192(1)
  01fbe74  cmpwi 3, 1
  01fbe78  bt 2, 0x1fc8b0
  01fbe7c  cmpwi 3, 0
  01fbe80  bt 2, 0x1fc8b0
  01fbe84  lbz 3, 32(31)
  01fbe88  cmpwi 1, 3, 12
  01fbe8c  cmpwi 3, 11
  01fbe90  cror 2, 2, 6
  01fbe94  bt 2, 0x1fc8b0
  01fbe98  lis 3, 151
  01fbe9c  lwz 3, -25488(3)
  01fbea0  cmpwi 3, 10
  01fbea4  bf 2, 0x1fbee0
  01fbea8  cmpwi 29, 0
  01fbeac  bt 2, 0x1fbee0
  01fbeb0  lwz 3, 32(29)
  01fbeb4  cmpwi 3, 0
  01fbeb8  bt 2, 0x1fbee0
  01fbebc  lhz 3, 166(3)
  01fbec0  cmpwi 3, 794
  01fbec4  bf 2, 0x1fbee0
  01fbec8  lwz 3, 428(30)
  01fbecc  cmpwi 3, 0
  01fbed0  bt 2, 0x1fbee0
  01fbed4  li 3, 17
  01fbed8  bl 0x11b728
  01fbedc  nop
  01fbee0  lhz 3, 38(30)
  01fbee4  cmpwi 3, 0
  01fbee8  bt 2, 0x1fbf24
  01fbeec  lbz 3, 40(29)
  01fbef0  cmpwi 3, 0
  01fbef4  bf 2, 0x1fbf24
  01fbef8  lwz 4, 196(1)
  01fbefc  lis 3, 16448
  01fbf00  srawi 5, 4, 31
  01fbf04  li 28, 11
  01fbf08  srwi 6, 5, 1
  01fbf0c  xor 4, 6, 4
  01fbf10  subc 4, 4, 5
  01fbf14  cmpw 4, 3
  01fbf18  bf 0, 0x1fbf24
  01fbf1c  li 3, 0
  01fbf20  stw 3, 196(1)
  01fbf24  lwz 3, 8324(26)
  01fbf28  cmpwi 3, 32
  01fbf2c  bt 2, 0x1fbf6c
  01fbf30  lwz 3, 8336(26)
  01fbf34  cmpwi 3, 32
  01fbf38  bf 2, 0x1fbf94
  01fbf3c  lis 3, 32
  01fbf40  lis 4, 114
  01fbf44  addi 3, 3, -17352
  01fbf48  lfs 1, 12(3)
  01fbf4c  lfs 2, -3056(4)
  01fbf50  lwz 3, 408(26)
  01fbf54  fmuls 1, 2, 1
  01fbf58  fctiwz 1, 1
  01fbf5c  stfd 1, 280(1)
  01fbf60  lwz 4, 284(1)
  01fbf64  cmpw 3, 4
  01fbf68  bf 0, 0x1fbf94
  01fbf6c  lwz 4, 196(1)
  01fbf70  lis 3, 16384
  01fbf74  srawi 5, 4, 31
  01fbf78  srwi 6, 5, 1
  01fbf7c  xor 4, 6, 4
  01fbf80  subc 4, 4, 5
  01fbf84  cmpw 4, 3
  01fbf88  bf 1, 0x1fbf94
  01fbf8c  lis 3, 16384
  01fbf90  stw 3, 196(1)
  01fbf94  lhz 3, 166(31)
  01fbf98  lhz 4, 42(29)
  01fbf9c  extsh 3, 3
  01fbfa0  cmpw 4, 3
  01fbfa4  bf 2, 0x1fbfb4
  01fbfa8  li 3, 0
  01fbfac  li 28, 11
  01fbfb0  stw 3, 196(1)
  01fbfb4  lbz 3, 83(31)
  01fbfb8  cmpwi 3, 6
  01fbfbc  cmpwi 1, 3, 7
  01fbfc0  bt 2, 0x1fbfc8
  01fbfc4  bf 6, 0x1fbff0
  01fbfc8  lbz 3, 8356(26)
  01fbfcc  cmpwi 3, 1
  01fbfd0  bf 2, 0x1fbff0
  01fbfd4  lwz 3, 32(29)
  01fbfd8  lwz 4, 8320(26)
  01fbfdc  cmpw 3, 4
  01fbfe0  bf 2, 0x1fbff0
  01fbfe4  li 3, 0
  01fbfe8  li 28, 11
  01fbfec  stw 3, 196(1)
  01fbff0  lhz 3, 42(29)
  01fbff4  cmpwi 3, 71
  01fbff8  bf 2, 0x1fc088
  01fbffc  lfs 1, 128(26)
  01fc000  lis 3, 32
  01fc004  lfs 2, 132(26)
  01fc008  stfs 1, 112(1)
  01fc00c  addi 3, 3, -17352
  01fc010  lfs 1, 136(26)
  01fc014  stfs 2, 116(1)
  01fc018  lfs 2, 140(26)
  01fc01c  stfs 1, 120(1)
  01fc020  stfs 2, 124(1)
  01fc024  lfs 2, 16(3)
  01fc028  addic 4, 1, 128
  01fc02c  fadds 1, 1, 2
  01fc030  addic 3, 1, 112
  01fc034  li 5, 2
  01fc038  ori 6, 31, 0
  01fc03c  li 7, 0
  01fc040  stfs 1, 120(1)
  01fc044  lfs 1, 16(31)
  01fc048  stfs 1, 128(1)
  01fc04c  lfs 1, 20(31)
  01fc050  stfs 1, 132(1)
  01fc054  lfs 1, 24(31)
  01fc058  fadds 1, 1, 2
  01fc05c  lfs 2, 28(31)
  01fc060  stfs 2, 140(1)
  01fc064  stfs 1, 136(1)
  01fc068  bl 0x57820
  01fc06c  nop
  01fc070  cmpwi 3, 0
  01fc074  bt 2, 0x1fc288
  01fc078  li 3, 0
  01fc07c  li 28, 11
  01fc080  stw 3, 196(1)
  01fc084  b 0x1fc288
  01fc088  lwz 3, 32(29)
  01fc08c  cmpwi 3, 0
  01fc090  bt 2, 0x1fc288
  01fc094  lhz 4, 166(3)
  01fc098  cmpwi 4, 857
  01fc09c  bt 2, 0x1fc288
  01fc0a0  lfs 1, 16(3)
  01fc0a4  lis 4, 32
  01fc0a8  stfs 1, 144(1)
  01fc0ac  lfs 1, 20(3)
  01fc0b0  addi 4, 4, -17352
  01fc0b4  stfs 1, 148(1)
  01fc0b8  lfs 1, 24(3)
  01fc0bc  stfs 1, 152(1)
  01fc0c0  lfs 2, 28(3)
  01fc0c4  stfs 2, 156(1)
  01fc0c8  lfs 2, 16(31)
  01fc0cc  stfs 2, 160(1)
  01fc0d0  lfs 2, 20(31)
  01fc0d4  stfs 2, 164(1)
  01fc0d8  lfs 2, 28(31)
  01fc0dc  lfs 3, 24(31)
  01fc0e0  stfs 2, 172(1)
  01fc0e4  lfs 31, 16(4)
  01fc0e8  fadds 2, 3, 31
  01fc0ec  stfs 2, 168(1)
  01fc0f0  lwz 3, 32(29)
  01fc0f4  lhz 3, 166(3)
  01fc0f8  cmpwi 3, 186
  01fc0fc  cmpwi 1, 3, 0
  01fc100  bt 2, 0x1fc108
  01fc104  bf 6, 0x1fc11c
  01fc108  lis 3, 32
  01fc10c  addi 3, 3, -17352
  01fc110  lfs 2, 20(3)
  01fc114  fadds 1, 1, 2
  01fc118  stfs 1, 152(1)
  01fc11c  addic 3, 1, 144
  01fc120  addic 4, 1, 160
  01fc124  li 5, 18
  01fc128  ori 6, 31, 0
  01fc12c  li 7, 0
  01fc130  bl 0x57820
  01fc134  nop
  01fc138  cmpwi 3, 0
  01fc13c  bt 2, 0x1fc288
  01fc140  addic 3, 1, 176
  01fc144  addic 5, 1, 144
  01fc148  addic 4, 1, 160
  01fc14c  bl 0x502a64
  01fc150  nop
  01fc154  lfs 5, 180(1)
  01fc158  lfs 4, 176(1)
  01fc15c  fmuls 1, 5, 5
  01fc160  lfs 6, 184(1)
  01fc164  fmadds 7, 4, 4, 1
  01fc168  fmr 1, 30
  01fc16c  fmadds 7, 6, 6, 7
  01fc170  fmr 2, 1
  01fc174  fsqrts 8, 7
  01fc178  fmr 3, 2
  01fc17c  fcmpu 0, 8, 3
  01fc180  bt 2, 0x1fc1d0
  01fc184  frsqrte 1, 7
  01fc188  lis 3, 32
  01fc18c  addi 3, 3, -17352
  01fc190  lfs 2, 24(3)
  01fc194  fmuls 3, 7, 1
  01fc198  fmuls 8, 2, 1
  01fc19c  fnmsubs 3, 3, 1, 31
  01fc1a0  fmadds 1, 3, 8, 1
  01fc1a4  fmuls 3, 7, 1
  01fc1a8  fmuls 8, 2, 1
  01fc1ac  fnmsubs 3, 3, 1, 31
  01fc1b0  fmadds 1, 3, 8, 1
  01fc1b4  fmuls 3, 7, 1
  01fc1b8  fmuls 2, 2, 1
  01fc1bc  fnmsubs 3, 3, 1, 31
  01fc1c0  fmadds 3, 3, 2, 1
  01fc1c4  fmuls 1, 4, 3
  01fc1c8  fmuls 2, 5, 3
  01fc1cc  fmuls 3, 6, 3
  01fc1d0  lis 3, 161
  01fc1d4  addic 3, 3, 2368
  01fc1d8  fmr 5, 30
  01fc1dc  lfs 9, 68(3)
  01fc1e0  lfs 8, 64(3)
  01fc1e4  fmuls 4, 9, 9
  01fc1e8  lfs 10, 72(3)
  01fc1ec  fmr 6, 5
  01fc1f0  fmadds 4, 8, 8, 4
  01fc1f4  fmr 7, 6
  01fc1f8  fmadds 4, 10, 10, 4
  01fc1fc  fsqrts 11, 4
  01fc200  fcmpu 0, 11, 7
  01fc204  bt 2, 0x1fc254
  01fc208  frsqrte 5, 4
  01fc20c  lis 3, 32
  01fc210  addi 3, 3, -17352
  01fc214  lfs 6, 24(3)
  01fc218  fmuls 7, 4, 5
  01fc21c  fmuls 11, 6, 5
  01fc220  fnmsubs 7, 7, 5, 31
  01fc224  fmadds 5, 7, 11, 5
  01fc228  fmuls 7, 4, 5
  01fc22c  fmuls 11, 6, 5
  01fc230  fnmsubs 7, 7, 5, 31
  01fc234  fmadds 5, 7, 11, 5
  01fc238  fmuls 4, 4, 5
  01fc23c  fmuls 6, 6, 5
  01fc240  fnmsubs 4, 4, 5, 31
  01fc244  fmadds 7, 4, 6, 5
  01fc248  fmuls 5, 8, 7
  01fc24c  fmuls 6, 9, 7
  01fc250  fmuls 7, 10, 7
  01fc254  fmuls 2, 2, 6
  01fc258  lis 3, 32
  01fc25c  addi 3, 3, -17352
  01fc260  fmadds 1, 1, 5, 2
  01fc264  lfs 2, 24(3)
  01fc268  fmadds 1, 3, 7, 1
  01fc26c  fabs 1, 1
  01fc270  fcmpu 0, 1, 2
  01fc274  cror 6, 0, 2
  01fc278  bt 6, 0x1fc288
  01fc27c  li 3, 0
  01fc280  li 28, 11
  01fc284  stw 3, 196(1)
  01fc288  lfs 1, 32(30)
  01fc28c  lfs 2, 196(1)
  01fc290  fsubs 1, 1, 2
  01fc294  fcmpu 0, 1, 30
  01fc298  stfs 1, 32(30)
  01fc29c  lbz 3, 33(31)
  01fc2a0  cmpwi 1, 3, 255
  01fc2a4  bt 1, 0x1fc2ac
  01fc2a8  li 28, 1
  01fc2ac  bt 6, 0x1fc308
  01fc2b0  lis 4, 165
  01fc2b4  rlwinm 3, 3, 2, 22, 29
  01fc2b8  addic 4, 4, -28284
  01fc2bc  lwzx 3, 4, 3
  01fc2c0  cmpwi 3, 0
  01fc2c4  bt 2, 0x1fc308
  01fc2c8  lis 5, 164
  01fc2cc  li 6, 2
  01fc2d0  lhz 4, 0(3)
  01fc2d4  lwz 7, -28512(5)
  01fc2d8  rlwinm 4, 4, 8, 9, 23
  01fc2dc  addc 4, 7, 4
  01fc2e0  clrldi 4, 4, 32
  01fc2e4  lbz 7, 32(4)
  01fc2e8  cmpwi 7, 1
  01fc2ec  bf 2, 0x1fc2f4
  01fc2f0  stb 6, 32(4)
  01fc2f4  lhz 4, 0(3)
  01fc2f8  addic 3, 3, 2
  01fc2fc  extsh 4, 4
  01fc300  cmpwi 4, 0
  01fc304  bf 0, 0x1fc2d0
  01fc308  lis 3, 32
  01fc30c  addi 25, 3, -17352
  01fc310  lfs 1, 28(25)
  01fc314  bl 0x502758
  01fc318  nop
  01fc31c  lis 4, 16192
  01fc320  stw 3, 144(30)
  01fc324  li 3, 0
  01fc328  li 5, 9
  01fc32c  stw 4, 152(30)
  01fc330  stb 3, 173(30)
  01fc334  stw 5, 148(30)
  01fc338  lwz 3, 16(29)
  01fc33c  lwz 4, 20(29)
  01fc340  lfs 1, 16(29)
  01fc344  lfs 2, 20(29)
  01fc348  rlwinm 5, 4, 3, 29, 29
  01fc34c  fabs 3, 1
  01fc350  fabs 2, 2
  01fc354  lis 27, 115
  01fc358  addic 27, 27, 22784
  01fc35c  fsubs 1, 3, 2
  01fc360  stfs 1, 208(1)
  01fc364  lhz 4, 52(31)
  01fc368  lfs 31, 32(25)
  01fc36c  lwz 6, 208(1)
  01fc370  lfs 1, 208(1)
  01fc374  rlwimi 5, 6, 2, 30, 30
  01fc378  fsub 4, 1, 30
  01fc37c  fsub 5, 1, 30
  01fc380  rlwimi 5, 3, 4, 28, 28
  01fc384  ori 3, 27, 0
  01fc388  rlwimi 3, 5, 2, 26, 28
  01fc38c  slwi 5, 5, 2
  01fc390  clrldi 3, 3, 32
  01fc394  fsel 4, 4, 3, 2
  01fc398  lfsx 1, 27, 5
  01fc39c  fsel 3, 5, 2, 3
  01fc3a0  lfs 2, 4(3)
  01fc3a4  fcmpu 0, 4, 30
  01fc3a8  bt 1, 0x1fc3b4
  01fc3ac  fmr 1, 30
  01fc3b0  b 0x1fc4cc
  01fc3b4  fsubs 5, 3, 4
  01fc3b8  fadds 3, 3, 4
  01fc3bc  addic 3, 1, 16
  01fc3c0  li 7, 2
  01fc3c4  addic 5, 3, 228
  01fc3c8  addic 6, 3, 244
  01fc3cc  mtctr 7
  01fc3d0  fdivs 3, 5, 3
  01fc3d4  fmuls 4, 3, 3
  01fc3d8  stfs 3, 256(1)
  01fc3dc  stfs 3, 248(1)
  01fc3e0  stfs 3, 252(1)
  01fc3e4  stfs 3, 244(1)
  01fc3e8  lfs 6, 256(1)
  01fc3ec  lfs 7, 248(1)
  01fc3f0  lfs 8, 252(1)
  01fc3f4  fmuls 5, 4, 4
  01fc3f8  fmuls 7, 7, 4
  01fc3fc  fmuls 6, 6, 5
  01fc400  fmuls 3, 5, 5
  01fc404  fmuls 5, 8, 5
  01fc408  stfs 7, 248(1)
  01fc40c  fmuls 4, 6, 4
  01fc410  stfs 5, 252(1)
  01fc414  stfs 4, 256(1)
  01fc418  lfs 4, 228(3)
  01fc41c  fmuls 4, 4, 3
  01fc420  stfs 4, 244(3)
  01fc424  lfs 4, 4(5)
  01fc428  addic 3, 3, 8
  01fc42c  addic 5, 5, 8
  01fc430  fmuls 4, 4, 3
  01fc434  stfs 4, 4(6)
  01fc438  addic 6, 6, 8
  01fc43c  bdnz 0x1fc418
  01fc440  li 6, 4
  01fc444  ori 3, 1, 0
  01fc448  mtctr 6
  01fc44c  lis 5, 115
  01fc450  addic 6, 3, 244
  01fc454  addic 5, 5, 22752
  01fc458  ori 8, 6, 0
  01fc45c  lfs 3, 244(3)
  01fc460  lfs 4, 0(5)
  01fc464  fmuls 3, 3, 4
  01fc468  lfs 4, 4(5)
  01fc46c  addic 5, 5, 8
  01fc470  stfs 3, 244(3)
  01fc474  lfs 3, 4(6)
  01fc478  addic 3, 3, 8
  01fc47c  fmuls 3, 3, 4
  01fc480  stfs 3, 4(6)
  01fc484  addic 6, 6, 8
  01fc488  bdnz 0x1fc45c
  01fc48c  fmr 3, 30
  01fc490  ori 3, 1, 0
  01fc494  mtctr 7
  01fc498  lfs 4, 244(3)
  01fc49c  fadds 3, 3, 4
  01fc4a0  addic 3, 3, 16
  01fc4a4  lfs 4, 4(8)
  01fc4a8  lfs 5, 8(8)
  01fc4ac  lfs 6, 12(8)
  01fc4b0  addic 8, 8, 16
  01fc4b4  fadds 3, 3, 4
  01fc4b8  fadds 3, 3, 5
  01fc4bc  fadds 3, 3, 6
  01fc4c0  bdnz 0x1fc498
  01fc4c4  fadds 3, 3, 31
  01fc4c8  fmadds 1, 3, 1, 2
  01fc4cc  cmpwi 28, 3
  01fc4d0  stfs 1, 200(1)
  01fc4d4  cmpwi 1, 28, 0
  01fc4d8  cmpwi 6, 28, 10
  01fc4dc  bt 1, 0x1fc4f0
  01fc4e0  cmpwi 6, 28, 2
  01fc4e4  bf 5, 0x1fc8b0
  01fc4e8  bf 25, 0x1fc89c
  01fc4ec  b 0x1fc4fc
  01fc4f0  cmpwi 1, 28, 5
  01fc4f4  bt 25, 0x1fc8b0
  01fc4f8  bf 5, 0x1fc5f8
  01fc4fc  lis 3, 32
  01fc500  vspltisw 2, -1
  01fc504  li 4, 10
  01fc508  addi 3, 3, -17352
  01fc50c  li 6, 36
  01fc510  lis 5, 114
  01fc514  stb 4, 32(31)
  01fc518  li 4, -3056
  01fc51c  vslw 2, 2, 2
  01fc520  <unknown>
  01fc524  vspltw 3, 3, 0
  01fc528  lis 6, 118
  01fc52c  <unknown>
  01fc530  lis 7, 114
  01fc534  li 4, 38
  01fc538  vmaddfp 2, 4, 3, 2
  01fc53c  addic 28, 30, 112
  01fc540  ori 5, 28, 0
  01fc544  vctsxs 2, 2, 0
  01fc548  vsplth 2, 2, 1
  01fc54c  stvehx 2, 4, 30
  01fc550  lfs 1, 25720(6)
  01fc554  lfs 2, -3048(7)
  01fc558  fmuls 1, 1, 2
  01fc55c  stfs 1, 128(30)
  01fc560  lfs 1, 24(3)
  01fc564  fmr 2, 1
  01fc568  bl 0x1158b0
  01fc56c  nop
  01fc570  lis 3, 16640
  01fc574  lis 4, 16672
  01fc578  addic 5, 1, 200
  01fc57c  addic 6, 30, 136
  01fc580  stw 3, 192(30)
  01fc584  stw 4, 196(30)
  01fc588  addic 7, 30, 140
  01fc58c  lfs 1, 16(29)
  01fc590  lfs 2, 24(29)
  01fc594  stfs 1, 48(1)
  01fc598  stfs 2, 56(1)
  01fc59c  lfs 1, 20(29)
  01fc5a0  lfs 2, 28(29)
  01fc5a4  stfs 1, 52(1)
  01fc5a8  stfs 2, 60(1)
  01fc5ac  ld 3, 48(1)
  01fc5b0  ld 4, 56(1)
  01fc5b4  bl 0x107de8
  01fc5b8  nop
  01fc5bc  lfs 1, 200(1)
  01fc5c0  ori 3, 31, 0
  01fc5c4  ori 4, 28, 0
  01fc5c8  li 6, 9
  01fc5cc  li 7, 1
  01fc5d0  li 8, 0
  01fc5d4  bl 0x10ad80
  01fc5d8  nop
  01fc5dc  li 5, 250
  01fc5e0  addic 4, 30, 96
  01fc5e4  ori 3, 31, 0
  01fc5e8  stb 5, 103(30)
  01fc5ec  bl 0x10c808
  01fc5f0  nop
  01fc5f4  b 0x1fc8b0
  01fc5f8  lis 3, 32
  01fc5fc  li 4, 10
  01fc600  vspltisw 2, -1
  01fc604  addi 3, 3, -17352
  01fc608  li 5, 36
  01fc60c  lis 6, 114
  01fc610  stb 4, 32(31)
  01fc614  li 4, -3056
  01fc618  vslw 2, 2, 2
  01fc61c  <unknown>
  01fc620  vspltw 3, 3, 0
  01fc624  <unknown>
  01fc628  lis 5, 118
  01fc62c  li 4, 38
  01fc630  lis 6, 114
  01fc634  vmaddfp 2, 4, 3, 2
  01fc638  vctsxs 2, 2, 0
  01fc63c  vsplth 2, 2, 1
  01fc640  stvehx 2, 4, 30
  01fc644  lfs 1, 25720(5)
  01fc648  lfs 2, -3048(6)
  01fc64c  fmuls 1, 1, 2
  01fc650  stfs 1, 128(30)
  01fc654  lbz 4, 8356(26)
  01fc658  lfs 1, 40(3)
  01fc65c  cmpwi 4, 1
  01fc660  bf 2, 0x1fc670
  01fc664  lis 3, 32
  01fc668  addi 3, 3, -17352
  01fc66c  lfs 1, 16(3)
  01fc670  lis 3, 32
  01fc674  ori 28, 29, 0
  01fc678  addi 3, 3, -17352
  01fc67c  addic 29, 30, 112
  01fc680  ori 5, 29, 0
  01fc684  lfs 2, 24(3)
  01fc688  bl 0x1158b0
  01fc68c  nop
  01fc690  lis 3, 16480
  01fc694  lis 4, 16608
  01fc698  addic 5, 1, 200
  01fc69c  addic 6, 30, 136
  01fc6a0  stw 3, 192(30)
  01fc6a4  stw 4, 196(30)
  01fc6a8  addic 7, 30, 140
  01fc6ac  lfs 1, 16(28)
  01fc6b0  lfs 2, 24(28)
  01fc6b4  stfs 1, 48(1)
  01fc6b8  stfs 2, 56(1)
  01fc6bc  lfs 1, 20(28)
  01fc6c0  lfs 2, 28(28)
  01fc6c4  stfs 1, 52(1)
  01fc6c8  stfs 2, 60(1)
  01fc6cc  ld 3, 48(1)
  01fc6d0  ld 4, 56(1)
  01fc6d4  bl 0x107de8
  01fc6d8  nop
  01fc6dc  lwz 3, 16(28)
  01fc6e0  lwz 4, 20(28)
  01fc6e4  lfs 1, 16(28)
  01fc6e8  lfs 2, 20(28)
  01fc6ec  fabs 3, 1
  01fc6f0  fabs 5, 2
  01fc6f4  rlwinm 4, 4, 3, 29, 29
  01fc6f8  fsubs 1, 3, 5
  01fc6fc  stfs 1, 204(1)
  01fc700  lwz 5, 204(1)
  01fc704  lfs 1, 204(1)
  01fc708  rlwimi 4, 5, 2, 30, 30
  01fc70c  fsub 4, 1, 30
  01fc710  fsub 6, 1, 30
  01fc714  rlwimi 4, 3, 4, 28, 28
  01fc718  ori 3, 27, 0
  01fc71c  rlwimi 3, 4, 2, 26, 28
  01fc720  slwi 4, 4, 2
  01fc724  clrldi 3, 3, 32
  01fc728  fsel 4, 4, 3, 5
  01fc72c  lfsx 1, 27, 4
  01fc730  fsel 3, 6, 5, 3
  01fc734  lfs 2, 4(3)
  01fc738  fcmpu 0, 4, 30
  01fc73c  bt 1, 0x1fc748
  01fc740  fmr 31, 30
  01fc744  b 0x1fc860
  01fc748  fsubs 5, 3, 4
  01fc74c  fadds 3, 3, 4
  01fc750  addic 3, 1, 16
  01fc754  li 6, 2
  01fc758  addic 5, 3, 212
  01fc75c  addic 4, 3, 196
  01fc760  mtctr 6
  01fc764  fdivs 3, 5, 3
  01fc768  fmuls 4, 3, 3
  01fc76c  stfs 3, 224(1)
  01fc770  stfs 3, 216(1)
  01fc774  stfs 3, 220(1)
  01fc778  stfs 3, 212(1)
  01fc77c  lfs 6, 224(1)
  01fc780  lfs 7, 216(1)
  01fc784  lfs 8, 220(1)
  01fc788  fmuls 5, 4, 4
  01fc78c  fmuls 7, 7, 4
  01fc790  fmuls 6, 6, 5
  01fc794  fmuls 3, 5, 5
  01fc798  fmuls 5, 8, 5
  01fc79c  stfs 7, 216(1)
  01fc7a0  fmuls 4, 6, 4
  01fc7a4  stfs 5, 220(1)
  01fc7a8  stfs 4, 224(1)
  01fc7ac  lfs 4, 196(3)
  01fc7b0  fmuls 4, 4, 3
  01fc7b4  stfs 4, 212(3)
  01fc7b8  lfs 4, 4(4)
  01fc7bc  addic 4, 4, 8
  01fc7c0  fmuls 4, 4, 3
  01fc7c4  addic 3, 3, 8
  01fc7c8  stfs 4, 4(5)
  01fc7cc  addic 5, 5, 8
  01fc7d0  bdnz 0x1fc7ac
  01fc7d4  li 5, 4
  01fc7d8  ori 3, 1, 0
  01fc7dc  mtctr 5
  01fc7e0  lis 4, 115
  01fc7e4  addic 5, 3, 212
  01fc7e8  addic 4, 4, 22752
  01fc7ec  ori 7, 5, 0
  01fc7f0  lfs 3, 212(3)
  01fc7f4  lfs 4, 0(4)
  01fc7f8  fmuls 3, 3, 4
  01fc7fc  lfs 4, 4(4)
  01fc800  addic 4, 4, 8
  01fc804  stfs 3, 212(3)
  01fc808  lfs 3, 4(5)
  01fc80c  addic 3, 3, 8
  01fc810  fmuls 3, 3, 4
  01fc814  stfs 3, 4(5)
  01fc818  addic 5, 5, 8
  01fc81c  bdnz 0x1fc7f0
  01fc820  ori 3, 1, 0
  01fc824  fmr 3, 30
  01fc828  mtctr 6
  01fc82c  lfs 4, 212(3)
  01fc830  fadds 3, 3, 4
  01fc834  lfs 4, 4(7)
  01fc838  addic 3, 3, 16
  01fc83c  lfs 5, 8(7)
  01fc840  lfs 6, 12(7)
  01fc844  addic 7, 7, 16
  01fc848  fadds 3, 3, 4
  01fc84c  fadds 3, 3, 5
  01fc850  fadds 3, 3, 6
  01fc854  bdnz 0x1fc82c
  01fc858  fadds 31, 3, 31
  01fc85c  fmadds 31, 31, 1, 2
  01fc860  ori 3, 31, 0
  01fc864  fmr 1, 31
  01fc868  ori 4, 29, 0
  01fc86c  li 6, 9
  01fc870  li 7, 1
  01fc874  li 8, 0
  01fc878  bl 0x10ad80
  01fc87c  nop
  01fc880  li 5, 250
  01fc884  addic 4, 30, 96
  01fc888  ori 3, 31, 0
  01fc88c  stb 5, 103(30)
  01fc890  bl 0x10c808
  01fc894  nop
  01fc898  b 0x1fc8b0
  01fc89c  li 3, 0
  01fc8a0  li 5, 11
  01fc8a4  rlwimi 4, 3, 0, 19, 19
  01fc8a8  stb 5, 32(31)
  01fc8ac  sth 4, 52(31)
  01fc8b0  li 5, 255
  01fc8b4  ori 3, 31, 0
  01fc8b8  addic 4, 30, 96
  01fc8bc  stb 5, 164(31)
  01fc8c0  bl 0x10c9a0
  01fc8c4  nop
  01fc8c8  lbz 3, 32(31)
  01fc8cc  cmpwi 3, 10
  01fc8d0  bt 2, 0x1fc8e4
  01fc8d4  cmpwi 3, 11
  01fc8d8  bt 2, 0x1fc8e4
  01fc8dc  cmpwi 3, 12
  01fc8e0  bf 2, 0x1fc8f0
  01fc8e4  li 3, 0
  01fc8e8  stw 3, 468(30)
  01fc8ec  b 0x1fcc70
  01fc8f0  lwz 4, 428(30)
  01fc8f4  cmpwi 4, 0
  01fc8f8  bt 2, 0x1fc91c
  01fc8fc  lis 3, 32
  01fc900  lis 4, 118
  01fc904  addi 3, 3, -17352
  01fc908  lfs 1, 44(3)
  01fc90c  lfs 2, 25740(4)
  01fc910  fadds 1, 2, 1
  01fc914  stfs 1, 416(30)
  01fc918  b 0x1fc9d0
  01fc91c  cmpwi 3, 1
  01fc920  bf 2, 0x1fc9c4
  01fc924  lwz 3, 576(26)
  01fc928  cmpw 31, 3
  01fc92c  bt 2, 0x1fc93c
  01fc930  lwz 3, 572(26)
  01fc934  cmpw 31, 3
  01fc938  bf 2, 0x1fc94c
  01fc93c  lis 3, 32
  01fc940  addi 3, 3, -17352
  01fc944  lfs 30, 44(3)
  01fc948  b 0x1fc94c
  01fc94c  stfs 30, 416(30)
  01fc950  lbz 3, 8356(26)
  01fc954  cmpwi 3, 1
  01fc958  bf 2, 0x1fc9d0
  01fc95c  lbz 3, 33(31)
  01fc960  cmpwi 3, 255
  01fc964  bt 2, 0x1fc9d0
  01fc968  lis 4, 165
  01fc96c  rlwinm 3, 3, 2, 22, 29
  01fc970  addic 4, 4, -28284
  01fc974  lwzx 3, 4, 3
  01fc978  cmpwi 3, 0
  01fc97c  bt 2, 0x1fc9d0
  01fc980  lis 5, 164
  01fc984  li 6, 2
  01fc988  lhz 4, 0(3)
  01fc98c  lwz 7, -28512(5)
  01fc990  rlwinm 4, 4, 8, 9, 23
  01fc994  addc 4, 7, 4
  01fc998  clrldi 4, 4, 32
  01fc99c  lbz 7, 32(4)
  01fc9a0  cmpwi 7, 1
  01fc9a4  bf 2, 0x1fc9ac
  01fc9a8  stb 6, 32(4)
  01fc9ac  lhz 4, 0(3)
  01fc9b0  addic 3, 3, 2
  01fc9b4  extsh 4, 4
  01fc9b8  cmpwi 4, 0
  01fc9bc  bf 0, 0x1fc988
  01fc9c0  b 0x1fc9d0
  01fc9c4  lis 3, 118
  01fc9c8  lfs 1, 25740(3)
  01fc9cc  stfs 1, 416(30)
  01fc9d0  lwz 3, 428(30)
  01fc9d4  cmpwi 3, 0
  01fc9d8  bt 2, 0x1fca54
  01fc9dc  lfs 1, 416(30)
  01fc9e0  addic 5, 30, 288
  01fc9e4  ori 3, 31, 0
  01fc9e8  bl 0x1118d8
  01fc9ec  nop
  01fc9f0  lfs 1, 372(30)
  01fc9f4  lfs 2, 292(30)
  01fc9f8  lfs 3, 368(30)
  01fc9fc  fsubs 1, 1, 2
  01fca00  lfs 2, 288(30)
  01fca04  fsubs 2, 3, 2
  01fca08  fmuls 1, 1, 1
  01fca0c  fmadds 1, 2, 2, 1
  01fca10  lfs 2, 416(30)
  01fca14  fsqrts 1, 1
  01fca18  fcmpu 0, 1, 2
  01fca1c  bt 1, 0x1fca48
  01fca20  lfs 1, 24(31)
  01fca24  lfs 2, 296(30)
  01fca28  lis 3, 32
  01fca2c  fsubs 1, 1, 2
  01fca30  addi 3, 3, -17352
  01fca34  lfs 2, 40(3)
  01fca38  fabs 1, 1
  01fca3c  fcmpu 0, 1, 2
  01fca40  cror 6, 0, 2
  01fca44  bt 6, 0x1fcb04
  01fca48  li 3, 2
  01fca4c  stw 3, 356(30)
  01fca50  b 0x1fcb04
  01fca54  lfs 1, 372(30)
  01fca58  lfs 2, 292(30)
  01fca5c  lfs 3, 368(30)
  01fca60  fsubs 1, 1, 2
  01fca64  lfs 2, 288(30)
  01fca68  fsubs 2, 3, 2
  01fca6c  fmuls 1, 1, 1
  01fca70  fmadds 1, 2, 2, 1
  01fca74  fsqrts 2, 1
  01fca78  lfs 1, 416(30)
  01fca7c  fcmpu 0, 2, 1
  01fca80  bt 1, 0x1fcaac
  01fca84  lfs 2, 24(31)
  01fca88  lis 3, 32
  01fca8c  lfs 3, 296(30)
  01fca90  addi 3, 3, -17352
  01fca94  fsubs 2, 2, 3
  01fca98  lfs 3, 40(3)
  01fca9c  fabs 2, 2
  01fcaa0  fcmpu 0, 2, 3
  01fcaa4  cror 6, 0, 2
  01fcaa8  bt 6, 0x1fcac8
  01fcaac  ori 3, 31, 0
  01fcab0  addic 5, 30, 288
  01fcab4  bl 0x1118d8
  01fcab8  nop
  01fcabc  li 3, 2
  01fcac0  stw 3, 356(30)
  01fcac4  b 0x1fcb04
  01fcac8  lis 3, 165
  01fcacc  addic 4, 30, 288
  01fcad0  addic 5, 3, 7136
  01fcad4  lwz 3, 432(30)
  01fcad8  li 6, 0
  01fcadc  slwi 3, 3, 2
  01fcae0  extsw 7, 3
  01fcae4  ori 3, 31, 0
  01fcae8  lwzx 5, 5, 7
  01fcaec  li 7, 0
  01fcaf0  addic 8, 5, 16
  01fcaf4  lwz 9, 0(5)
  01fcaf8  extsw 9, 9
  01fcafc  bl 0x111ba0
  01fcb00  nop
  01fcb04  lbz 3, 32(31)
  01fcb08  cmpwi 3, 1
  01fcb0c  bt 2, 0x1fcc54
  01fcb10  lwz 3, 356(30)
  01fcb14  cmpwi 3, 2
  01fcb18  bf 2, 0x1fcc54
  01fcb1c  lis 3, 32
  01fcb20  lwz 5, 468(30)
  01fcb24  lis 4, 114
  01fcb28  addi 3, 3, -17352
  01fcb2c  addic 5, 5, 1
  01fcb30  lfs 1, -3056(4)
  01fcb34  stw 5, 468(30)
  01fcb38  lfs 2, 48(3)
  01fcb3c  fmuls 1, 1, 2
  01fcb40  fctiwz 1, 1
  01fcb44  stfd 1, 280(1)
  01fcb48  lwz 3, 284(1)
  01fcb4c  cmpw 5, 3
  01fcb50  bf 1, 0x1fcc5c
  01fcb54  lfs 1, 20(31)
  01fcb58  lfs 2, 372(30)
  01fcb5c  lfs 3, 16(31)
  01fcb60  fsubs 1, 1, 2
  01fcb64  lfs 2, 368(30)
  01fcb68  fsubs 2, 3, 2
  01fcb6c  lfs 3, 24(31)
  01fcb70  lfs 4, 376(30)
  01fcb74  fsubs 3, 3, 4
  01fcb78  fmuls 1, 1, 1
  01fcb7c  lis 3, 32
  01fcb80  addi 3, 3, -17352
  01fcb84  fmadds 1, 2, 2, 1
  01fcb88  lfs 2, 16(3)
  01fcb8c  fmadds 1, 3, 3, 1
  01fcb90  fsqrts 1, 1
  01fcb94  fcmpu 0, 1, 2
  01fcb98  cror 6, 0, 2
  01fcb9c  bt 6, 0x1fcbf4
  01fcba0  li 3, 8
  01fcba4  lbz 4, 83(31)
  01fcba8  cmpwi 4, 4
  01fcbac  stb 3, 32(31)
  01fcbb0  bt 2, 0x1fcc5c
  01fcbb4  lis 3, 32
  01fcbb8  lis 4, 114
  01fcbbc  addi 3, 3, -17352
  01fcbc0  li 5, 0
  01fcbc4  lfs 1, 52(3)
  01fcbc8  lfs 2, -3056(4)
  01fcbcc  ori 3, 31, 0
  01fcbd0  fmuls 1, 2, 1
  01fcbd4  li 4, 4
  01fcbd8  fctiwz 1, 1
  01fcbdc  stfd 1, 280(1)
  01fcbe0  lwz 6, 284(1)
  01fcbe4  extsw 6, 6
  01fcbe8  bl 0xfddc0
  01fcbec  nop
  01fcbf0  b 0x1fcc5c
  01fcbf4  lbz 3, 8356(26)
  01fcbf8  cmpwi 3, 1
  01fcbfc  bt 2, 0x1fcc5c
  01fcc00  li 3, 1
  01fcc04  lbz 4, 83(31)
  01fcc08  cmpwi 4, 0
  01fcc0c  stb 3, 32(31)
  01fcc10  bt 2, 0x1fcc5c
  01fcc14  lis 3, 32
  01fcc18  lis 4, 114
  01fcc1c  addi 3, 3, -17352
  01fcc20  li 5, 0
  01fcc24  lfs 1, 56(3)
  01fcc28  lfs 2, -3056(4)
  01fcc2c  ori 3, 31, 0
  01fcc30  fmuls 1, 2, 1
  01fcc34  li 4, 0
  01fcc38  fctiwz 1, 1
  01fcc3c  stfd 1, 280(1)
  01fcc40  lwz 6, 284(1)
  01fcc44  extsw 6, 6
  01fcc48  bl 0xfddc0
  01fcc4c  nop
  01fcc50  b 0x1fcc5c
  01fcc54  li 3, 0
  01fcc58  stw 3, 468(30)
  01fcc5c  lwz 3, 352(30)
  01fcc60  cmpwi 3, 0
  01fcc64  bf 2, 0x1fcc70
  01fcc68  lwz 3, 8320(26)
  01fcc6c  stw 3, 352(30)
  01fcc70  ld 0, 384(1)
  01fcc74  mtlr 0
  01fcc78  lfd 30, 352(1)
  01fcc7c  lfd 31, 360(1)
  01fcc80  ld 25, 296(1)
  01fcc84  ld 26, 304(1)
  01fcc88  ld 27, 312(1)
  01fcc8c  ld 28, 320(1)
  01fcc90  ld 29, 328(1)
  01fcc94  ld 30, 336(1)
  01fcc98  ld 31, 344(1)
  01fcc9c  addi 1, 1, 368
  01fcca0  blr

UpdateMoby_1202:   # 0x1fcd60, 0x2484 bytes
  01fcd60  stdu 1, -576(1)
  01fcd64  mflr 0
  01fcd68  std 0, 592(1)
  01fcd6c  stfd 26, 528(1)
  01fcd70  stfd 27, 536(1)
  01fcd74  stfd 28, 544(1)
  01fcd78  stfd 29, 552(1)
  01fcd7c  stfd 30, 560(1)
  01fcd80  stfd 31, 568(1)
  01fcd84  std 31, 520(1)
  01fcd88  std 28, 496(1)
  01fcd8c  ori 31, 3, 0
  01fcd90  lis 4, 32
  01fcd94  std 30, 512(1)
  01fcd98  addi 28, 4, -13148
  01fcd9c  std 29, 504(1)
  01fcda0  std 27, 488(1)
  01fcda4  std 26, 480(1)
  01fcda8  std 25, 472(1)
  01fcdac  std 24, 464(1)
  01fcdb0  lwz 30, 120(31)
  01fcdb4  bl 0x1fbc78
  01fcdb8  lwz 3, 36(31)
  01fcdbc  lis 4, 118
  01fcdc0  lwz 29, 352(30)
  01fcdc4  addic 5, 30, 688
  01fcdc8  lfs 1, 36(3)
  01fcdcc  lfs 2, 25712(4)
  01fcdd0  ori 3, 31, 0
  01fcdd4  li 4, 2
  01fcdd8  fmuls 1, 1, 2
  01fcddc  stfs 1, 44(31)
  01fcde0  lfs 1, 0(28)
  01fcde4  bl 0x119a18
  01fcde8  nop
  01fcdec  lfs 1, 16(31)
  01fcdf0  addic 3, 1, 128
  01fcdf4  stfs 1, 128(1)
  01fcdf8  lfs 1, 20(31)
  01fcdfc  stfs 1, 132(1)
  01fce00  lfs 1, 28(31)
  01fce04  lfs 2, 24(31)
  01fce08  stfs 1, 140(1)
  01fce0c  lfs 29, 4(28)
  01fce10  addic 4, 1, 144
  01fce14  fadds 1, 2, 29
  01fce18  stfs 1, 136(1)
  01fce1c  lfs 1, 16(29)
  01fce20  stfs 1, 144(1)
  01fce24  lfs 1, 20(29)
  01fce28  stfs 1, 148(1)
  01fce2c  lfs 1, 24(29)
  01fce30  fadds 2, 1, 29
  01fce34  stfs 1, 152(1)
  01fce38  lfs 1, 28(29)
  01fce3c  stfs 1, 156(1)
  01fce40  stfs 2, 152(1)
  01fce44  bl 0x5e8548
  01fce48  nop
  01fce4c  lfs 2, 8(28)
  01fce50  lis 24, 151
  01fce54  fcmpu 0, 1, 2
  01fce58  addic 24, 24, -25376
  01fce5c  cror 6, 1, 2
  01fce60  bt 6, 0x1fcfa0
  01fce64  lwz 3, 128(1)
  01fce68  lis 4, 16384
  01fce6c  srawi 5, 3, 31
  01fce70  srwi 6, 5, 1
  01fce74  xor 3, 6, 3
  01fce78  subc 3, 3, 5
  01fce7c  cmpw 3, 4
  01fce80  bt 0, 0x1fcfa0
  01fce84  lis 5, 17535
  01fce88  ori 6, 3, 0
  01fce8c  ori 3, 5, 16384
  01fce90  cmpw 6, 3
  01fce94  bt 1, 0x1fcfa0
  01fce98  lwz 5, 132(1)
  01fce9c  srawi 6, 5, 31
  01fcea0  srwi 7, 6, 1
  01fcea4  xor 5, 7, 5
  01fcea8  subc 5, 5, 6
  01fceac  cmpw 1, 5, 3
  01fceb0  cmpw 5, 4
  01fceb4  cror 2, 0, 5
  01fceb8  bt 2, 0x1fcfa0
  01fcebc  lwz 5, 136(1)
  01fcec0  srawi 6, 5, 31
  01fcec4  srwi 7, 6, 1
  01fcec8  xor 5, 7, 5
  01fcecc  subc 5, 5, 6
  01fced0  cmpw 1, 5, 3
  01fced4  cmpw 5, 4
  01fced8  cror 2, 0, 5
  01fcedc  bt 2, 0x1fcfa0
  01fcee0  lwz 5, 144(1)
  01fcee4  srawi 6, 5, 31
  01fcee8  srwi 7, 6, 1
  01fceec  xor 5, 7, 5
  01fcef0  subc 5, 5, 6
  01fcef4  cmpw 1, 5, 3
  01fcef8  cmpw 5, 4
  01fcefc  cror 2, 0, 5
  01fcf00  bt 2, 0x1fcfa0
  01fcf04  lwz 5, 148(1)
  01fcf08  srawi 6, 5, 31
  01fcf0c  srwi 7, 6, 1
  01fcf10  xor 5, 7, 5
  01fcf14  subc 5, 5, 6
  01fcf18  cmpw 1, 5, 3
  01fcf1c  cmpw 5, 4
  01fcf20  cror 2, 0, 5
  01fcf24  bt 2, 0x1fcfa0
  01fcf28  lwz 5, 152(1)
  01fcf2c  srawi 6, 5, 31
  01fcf30  srwi 7, 6, 1
  01fcf34  xor 5, 7, 5
  01fcf38  subc 5, 5, 6
  01fcf3c  cmpw 1, 5, 3
  01fcf40  cmpw 5, 4
  01fcf44  cror 2, 0, 5
  01fcf48  bt 2, 0x1fcfa0
  01fcf4c  addic 3, 1, 128
  01fcf50  addic 4, 1, 144
  01fcf54  li 5, 2
  01fcf58  ori 6, 31, 0
  01fcf5c  li 7, 0
  01fcf60  bl 0x57820
  01fcf64  nop
  01fcf68  cmpwi 3, 0
  01fcf6c  bf 2, 0x1fcfa0
  01fcf70  lfs 1, 24(29)
  01fcf74  lfs 2, 24(31)
  01fcf78  li 28, 1
  01fcf7c  fsubs 1, 1, 2
  01fcf80  fabs 1, 1
  01fcf84  fcmpu 0, 1, 29
  01fcf88  bt 0, 0x1fcfa4
  01fcf8c  lwz 3, 764(24)
  01fcf90  bl 0x10af88
  01fcf94  nop
  01fcf98  cmpwi 3, 0
  01fcf9c  bf 2, 0x1fcfa4
  01fcfa0  li 28, 0
  01fcfa4  lbz 3, 32(31)
  01fcfa8  cmpwi 1, 3, 5
  01fcfac  cmpwi 6, 3, 4
  01fcfb0  cmpwi 7, 3, 3
  01fcfb4  bt 5, 0x1fcfe0
  01fcfb8  bt 6, 0x1fd72c
  01fcfbc  bt 26, 0x1fd670
  01fcfc0  bt 30, 0x1fd5cc
  01fcfc4  cmpwi 3, 2
  01fcfc8  bt 2, 0x1fd398
  01fcfcc  cmpwi 3, 1
  01fcfd0  bt 2, 0x1fd20c
  01fcfd4  cmpwi 3, 0
  01fcfd8  bt 2, 0x1fd01c
  01fcfdc  b 0x1ff038
  01fcfe0  cmpwi 3, 12
  01fcfe4  bt 2, 0x1fed08
  01fcfe8  cmpwi 3, 11
  01fcfec  bt 2, 0x1fee80
  01fcff0  cmpwi 3, 10
  01fcff4  bt 2, 0x1febc8
  01fcff8  cmpwi 3, 9
  01fcffc  bt 2, 0x1fe7c0
  01fd000  cmpwi 3, 8
  01fd004  bt 2, 0x1fe99c
  01fd008  cmpwi 3, 7
  01fd00c  bt 2, 0x1fe42c
  01fd010  cmpwi 3, 6
  01fd014  bt 2, 0x1fe0ac
  01fd018  b 0x1ff038
  01fd01c  lwz 3, 476(30)
  01fd020  cmpwi 3, 0
  01fd024  bt 2, 0x1fd044
  01fd028  lbz 3, 8356(24)
  01fd02c  cmpwi 3, 1
  01fd030  bf 2, 0x1fd044
  01fd034  ori 3, 31, 0
  01fd038  bl 0xefb38
  01fd03c  nop
  01fd040  b 0x1ff19c
  01fd044  lis 29, 16128
  01fd048  lis 3, 16544
  01fd04c  li 4, 5
  01fd050  lis 6, 32
  01fd054  li 5, 3
  01fd058  stw 29, 48(30)
  01fd05c  li 7, 1
  01fd060  addi 28, 6, -13148
  01fd064  stw 3, 32(30)
  01fd068  sth 4, 36(30)
  01fd06c  stb 5, 40(30)
  01fd070  stb 7, 41(30)
  01fd074  lfs 1, 12(28)
  01fd078  bl 0x502758
  01fd07c  nop
  01fd080  stb 3, 88(30)
  01fd084  lfs 1, 16(28)
  01fd088  bl 0x502758
  01fd08c  nop
  01fd090  stb 3, 90(30)
  01fd094  lfs 1, 16(31)
  01fd098  lhz 3, 52(31)
  01fd09c  stfs 1, 368(30)
  01fd0a0  lfs 1, 20(31)
  01fd0a4  ori 3, 3, 20480
  01fd0a8  stfs 1, 372(30)
  01fd0ac  lfs 1, 24(31)
  01fd0b0  sth 3, 52(31)
  01fd0b4  stfs 1, 376(30)
  01fd0b8  lfs 1, 28(31)
  01fd0bc  addic 3, 30, 208
  01fd0c0  stfs 1, 380(30)
  01fd0c4  lfs 1, 72(31)
  01fd0c8  stfs 1, 380(30)
  01fd0cc  bl 0x100f8c
  01fd0d0  nop
  01fd0d4  lis 3, 16384
  01fd0d8  stw 29, 220(30)
  01fd0dc  lis 29, 118
  01fd0e0  stw 3, 216(30)
  01fd0e4  lfs 1, 20(28)
  01fd0e8  lfs 2, 25712(29)
  01fd0ec  fmuls 1, 2, 1
  01fd0f0  bl 0x502758
  01fd0f4  nop
  01fd0f8  lis 4, 114
  01fd0fc  lfs 1, 25712(29)
  01fd100  lfs 2, 420(30)
  01fd104  stfs 1, 212(30)
  01fd108  lfs 1, -3052(4)
  01fd10c  stw 3, 208(30)
  01fd110  fmuls 1, 2, 1
  01fd114  lwz 3, 444(30)
  01fd118  cmpwi 3, -1
  01fd11c  stfs 1, 244(30)
  01fd120  bt 2, 0x1fd1d0
  01fd124  lis 4, 164
  01fd128  slwi 3, 3, 8
  01fd12c  lwz 4, -28512(4)
  01fd130  addc 3, 4, 3
  01fd134  clrldi 3, 3, 32
  01fd138  cmpwi 3, 0
  01fd13c  bt 2, 0x1fd1c8
  01fd140  lbz 4, 32(3)
  01fd144  cmpwi 1, 4, 253
  01fd148  cmpwi 4, 254
  01fd14c  cror 2, 2, 6
  01fd150  bt 2, 0x1fd1c8
  01fd154  lis 5, 151
  01fd158  lis 4, 161
  01fd15c  lhz 7, 178(3)
  01fd160  addic 6, 4, -13028
  01fd164  extsh 8, 7
  01fd168  lwz 4, -25488(5)
  01fd16c  srawi 5, 8, 5
  01fd170  slwi 8, 4, 8
  01fd174  sldi 5, 5, 2
  01fd178  extsw 8, 8
  01fd17c  addc 5, 5, 6
  01fd180  clrlwi 6, 7, 27
  01fd184  clrldi 5, 5, 32
  01fd188  li 7, 1
  01fd18c  slw 6, 7, 6
  01fd190  lwzx 5, 5, 8
  01fd194  and 5, 5, 6
  01fd198  cmpwi 5, 0
  01fd19c  bt 2, 0x1fd1d0
  01fd1a0  lis 5, 161
  01fd1a4  lbz 3, 176(3)
  01fd1a8  slwi 4, 4, 4
  01fd1ac  addic 5, 5, -13692
  01fd1b0  extsw 4, 4
  01fd1b4  addc 3, 3, 5
  01fd1b8  clrldi 3, 3, 32
  01fd1bc  lbzx 3, 3, 4
  01fd1c0  cmpwi 3, 255
  01fd1c4  bf 2, 0x1fd1d0
  01fd1c8  li 3, -1
  01fd1cc  stw 3, 444(30)
  01fd1d0  li 3, 1
  01fd1d4  lbz 4, 83(31)
  01fd1d8  cmpwi 4, 0
  01fd1dc  stb 3, 32(31)
  01fd1e0  bt 2, 0x1fd1fc
  01fd1e4  ori 3, 31, 0
  01fd1e8  li 4, 0
  01fd1ec  li 5, 0
  01fd1f0  li 6, 0
  01fd1f4  bl 0xfddc0
  01fd1f8  nop
  01fd1fc  lis 3, 118
  01fd200  lfs 1, 25740(3)
  01fd204  stfs 1, 416(30)
  01fd208  b 0x1ff038
  01fd20c  lis 3, 32
  01fd210  lis 6, 114
  01fd214  lfs 1, 380(30)
  01fd218  addi 4, 3, -13148
  01fd21c  ori 3, 31, 0
  01fd220  addic 5, 30, 400
  01fd224  lfs 4, 32(4)
  01fd228  lfs 2, 24(4)
  01fd22c  lfs 5, 28(4)
  01fd230  lfs 6, -3052(6)
  01fd234  fmr 3, 5
  01fd238  fmuls 4, 6, 4
  01fd23c  bl 0xff2e8
  01fd240  nop
  01fd244  lwz 3, 444(30)
  01fd248  cmpwi 3, -1
  01fd24c  bt 2, 0x1fd324
  01fd250  lis 4, 164
  01fd254  slwi 3, 3, 8
  01fd258  lwz 4, -28512(4)
  01fd25c  addc 3, 4, 3
  01fd260  clrldi 3, 3, 32
  01fd264  cmpwi 3, 0
  01fd268  bt 2, 0x1fd2cc
  01fd26c  lbz 4, 32(3)
  01fd270  cmpwi 1, 4, 253
  01fd274  cmpwi 4, 254
  01fd278  cror 2, 2, 6
  01fd27c  bt 2, 0x1fd2cc
  01fd280  lhz 3, 178(3)
  01fd284  lis 5, 151
  01fd288  lis 4, 161
  01fd28c  extsh 7, 3
  01fd290  addic 4, 4, -13028
  01fd294  srawi 7, 7, 5
  01fd298  lwz 5, -25488(5)
  01fd29c  li 6, 1
  01fd2a0  sldi 7, 7, 2
  01fd2a4  slwi 5, 5, 8
  01fd2a8  addc 4, 7, 4
  01fd2ac  extsw 5, 5
  01fd2b0  clrldi 4, 4, 32
  01fd2b4  clrlwi 3, 3, 27
  01fd2b8  slw 3, 6, 3
  01fd2bc  lwzx 4, 4, 5
  01fd2c0  and 3, 4, 3
  01fd2c4  cmpwi 3, 0
  01fd2c8  bt 2, 0x1fd324
  01fd2cc  lis 3, 32
  01fd2d0  li 4, 2
  01fd2d4  vspltisw 2, -1
  01fd2d8  addi 3, 3, -13148
  01fd2dc  li 5, 36
  01fd2e0  lis 6, 114
  01fd2e4  stb 4, 32(31)
  01fd2e8  li 4, -3056
  01fd2ec  vslw 2, 2, 2
  01fd2f0  <unknown>
  01fd2f4  li 3, 424
  01fd2f8  vspltw 3, 3, 0
  01fd2fc  <unknown>
  01fd300  vmaddfp 2, 4, 3, 2
  01fd304  vctsxs 2, 2, 0
  01fd308  vspltw 2, 2, 0
  01fd30c  stvewx 2, 3, 30
  01fd310  lbz 3, 33(31)
  01fd314  cmpwi 3, 255
  01fd318  bt 2, 0x1fd324
  01fd31c  ori 3, 31, 0
  01fd320  bl 0x1fbbd0
  01fd324  lwz 3, 356(30)
  01fd328  cmpwi 3, 2
  01fd32c  bf 2, 0x1fd33c
  01fd330  lwz 3, 436(30)
  01fd334  cmpwi 3, 0
  01fd338  bt 2, 0x1ff038
  01fd33c  lis 3, 32
  01fd340  vspltisw 2, -1
  01fd344  li 4, 2
  01fd348  addi 3, 3, -13148
  01fd34c  li 6, 36
  01fd350  lis 5, 114
  01fd354  stb 4, 32(31)
  01fd358  li 4, -3056
  01fd35c  vslw 2, 2, 2
  01fd360  <unknown>
  01fd364  li 3, 424
  01fd368  vspltw 3, 3, 0
  01fd36c  <unknown>
  01fd370  vmaddfp 2, 4, 3, 2
  01fd374  vctsxs 2, 2, 0
  01fd378  vspltw 2, 2, 0
  01fd37c  stvewx 2, 3, 30
  01fd380  lbz 3, 33(31)
  01fd384  cmpwi 3, 255
  01fd388  bt 2, 0x1ff038
  01fd38c  ori 3, 31, 0
  01fd390  bl 0x1fbbd0
  01fd394  b 0x1ff038
  01fd398  lbz 3, 83(31)
  01fd39c  cmpwi 3, 0
  01fd3a0  bf 2, 0x1fd49c
  01fd3a4  lwz 3, 424(30)
  01fd3a8  cmpwi 3, 0
  01fd3ac  bf 2, 0x1fd3e4
  01fd3b0  lis 3, 32
  01fd3b4  addi 3, 3, -13148
  01fd3b8  lfs 1, 40(3)
  01fd3bc  lfs 2, 44(3)
  01fd3c0  bl 0xfcbe8
  01fd3c4  nop
  01fd3c8  lis 3, 114
  01fd3cc  lfs 2, -3056(3)
  01fd3d0  fmuls 1, 1, 2
  01fd3d4  bl 0x502758
  01fd3d8  nop
  01fd3dc  stw 3, 424(30)
  01fd3e0  b 0x1ff038
  01fd3e4  addic 3, 30, 424
  01fd3e8  bl 0x4fff60
  01fd3ec  nop
  01fd3f0  cmpwi 3, 0
  01fd3f4  bt 2, 0x1ff038
  01fd3f8  lwz 3, 436(30)
  01fd3fc  cmpwi 3, 0
  01fd400  bt 2, 0x1fd450
  01fd404  lbz 3, 83(31)
  01fd408  cmpwi 3, 1
  01fd40c  bt 2, 0x1ff038
  01fd410  lis 3, 32
  01fd414  lis 4, 114
  01fd418  addi 3, 3, -13148
  01fd41c  li 5, 0
  01fd420  lfs 1, 48(3)
  01fd424  lfs 2, -3056(4)
  01fd428  ori 3, 31, 0
  01fd42c  fmuls 1, 2, 1
  01fd430  li 4, 1
  01fd434  fctiwz 1, 1
  01fd438  stfd 1, 448(1)
  01fd43c  lwz 6, 452(1)
  01fd440  extsw 6, 6
  01fd444  bl 0xfddc0
  01fd448  nop
  01fd44c  b 0x1ff038
  01fd450  lbz 3, 83(31)
  01fd454  cmpwi 3, 2
  01fd458  bt 2, 0x1ff038
  01fd45c  lis 3, 32
  01fd460  lis 4, 114
  01fd464  addi 3, 3, -13148
  01fd468  li 5, 0
  01fd46c  lfs 1, 48(3)
  01fd470  lfs 2, -3056(4)
  01fd474  ori 3, 31, 0
  01fd478  li 4, 2
  01fd47c  fmuls 1, 2, 1
  01fd480  fctiwz 1, 1
  01fd484  stfd 1, 448(1)
  01fd488  lwz 6, 452(1)
  01fd48c  extsw 6, 6
  01fd490  bl 0xfddc0
  01fd494  nop
  01fd498  b 0x1ff038
  01fd49c  lbz 3, 112(31)
  01fd4a0  rlwinm 3, 3, 0, 30, 30
  01fd4a4  cmpwi 3, 0
  01fd4a8  bt 2, 0x1ff038
  01fd4ac  addic 3, 31, 16
  01fd4b0  addic 4, 24, 128
  01fd4b4  bl 0x5e8588
  01fd4b8  nop
  01fd4bc  lis 3, 118
  01fd4c0  lfs 2, 25740(3)
  01fd4c4  fcmpu 0, 1, 2
  01fd4c8  cror 6, 1, 2
  01fd4cc  bt 6, 0x1fd578
  01fd4d0  li 3, 5
  01fd4d4  li 5, 0
  01fd4d8  lis 4, 32
  01fd4dc  stb 3, 32(31)
  01fd4e0  lfs 1, 16(31)
  01fd4e4  addi 4, 4, -13148
  01fd4e8  stfs 1, 448(30)
  01fd4ec  lfs 1, 20(31)
  01fd4f0  stw 5, 472(30)
  01fd4f4  stfs 1, 452(30)
  01fd4f8  lfs 1, 24(31)
  01fd4fc  stfs 1, 456(30)
  01fd500  lfs 1, 28(31)
  01fd504  stw 5, 244(30)
  01fd508  stfs 1, 460(30)
  01fd50c  lfs 1, 52(4)
  01fd510  lfs 2, 56(4)
  01fd514  lfs 3, 408(30)
  01fd518  fmuls 1, 3, 1
  01fd51c  fmuls 2, 3, 2
  01fd520  bl 0xfcbe8
  01fd524  nop
  01fd528  stfs 1, 404(30)
  01fd52c  lbz 3, 83(31)
  01fd530  cmpwi 3, 3
  01fd534  bt 2, 0x1ff038
  01fd538  lis 3, 32
  01fd53c  lis 4, 114
  01fd540  addi 3, 3, -13148
  01fd544  li 5, 0
  01fd548  lfs 1, 60(3)
  01fd54c  lfs 2, -3056(4)
  01fd550  ori 3, 31, 0
  01fd554  fmuls 1, 2, 1
  01fd558  li 4, 3
  01fd55c  fctiwz 1, 1
  01fd560  stfd 1, 448(1)
  01fd564  lwz 6, 452(1)
  01fd568  extsw 6, 6
  01fd56c  bl 0xfddc0
  01fd570  nop
  01fd574  b 0x1ff038
  01fd578  li 3, 3
  01fd57c  lbz 4, 83(31)
  01fd580  cmpwi 4, 1
  01fd584  stb 3, 32(31)
  01fd588  bt 2, 0x1ff038
  01fd58c  lis 3, 32
  01fd590  lis 4, 114
  01fd594  addi 3, 3, -13148
  01fd598  li 5, 0
  01fd59c  lfs 1, 48(3)
  01fd5a0  lfs 2, -3056(4)
  01fd5a4  ori 3, 31, 0
  01fd5a8  li 4, 1
  01fd5ac  fmuls 1, 2, 1
  01fd5b0  fctiwz 1, 1
  01fd5b4  stfd 1, 448(1)
  01fd5b8  lwz 6, 452(1)
  01fd5bc  extsw 6, 6
  01fd5c0  bl 0xfddc0
  01fd5c4  nop
  01fd5c8  b 0x1ff038
  01fd5cc  lfs 1, 288(30)
  01fd5d0  lfs 2, 16(31)
  01fd5d4  lfs 3, 292(30)
  01fd5d8  lfs 4, 20(31)
  01fd5dc  fsubs 1, 1, 2
  01fd5e0  fsubs 2, 3, 4
  01fd5e4  bl 0x5e8338
  01fd5e8  nop
  01fd5ec  lis 3, 32
  01fd5f0  lis 6, 114
  01fd5f4  addi 4, 3, -13148
  01fd5f8  ori 3, 31, 0
  01fd5fc  addic 5, 30, 400
  01fd600  lfs 4, 32(4)
  01fd604  lfs 2, 24(4)
  01fd608  lfs 5, 28(4)
  01fd60c  lfs 6, -3052(6)
  01fd610  fmr 3, 5
  01fd614  fmuls 4, 6, 4
  01fd618  bl 0xff2e8
  01fd61c  nop
  01fd620  lwz 3, 356(30)
  01fd624  cmpwi 3, 2
  01fd628  bt 2, 0x1ff038
  01fd62c  li 3, 4
  01fd630  lis 4, 32
  01fd634  addi 4, 4, -13148
  01fd638  stb 3, 32(31)
  01fd63c  lwz 3, 440(30)
  01fd640  extsw 3, 3
  01fd644  lfs 1, 40(4)
  01fd648  std 3, 448(1)
  01fd64c  lfd 2, 448(1)
  01fd650  fcfid 2, 2
  01fd654  frsp 2, 2
  01fd658  bl 0xfcbe8
  01fd65c  nop
  01fd660  bl 0x502758
  01fd664  nop
  01fd668  stw 3, 424(30)
  01fd66c  b 0x1ff038
  01fd670  addic 3, 30, 424
  01fd674  bl 0x4fff60
  01fd678  nop
  01fd67c  cmpwi 3, 0
  01fd680  bt 2, 0x1ff038
  01fd684  li 3, 5
  01fd688  li 4, 0
  01fd68c  lis 5, 32
  01fd690  stb 3, 32(31)
  01fd694  lfs 1, 16(31)
  01fd698  addi 3, 5, -13148
  01fd69c  stfs 1, 448(30)
  01fd6a0  lfs 1, 20(31)
  01fd6a4  stw 4, 472(30)
  01fd6a8  stfs 1, 452(30)
  01fd6ac  lfs 1, 24(31)
  01fd6b0  stfs 1, 456(30)
  01fd6b4  lfs 1, 28(31)
  01fd6b8  stw 4, 244(30)
  01fd6bc  stfs 1, 460(30)
  01fd6c0  lfs 1, 52(3)
  01fd6c4  lfs 2, 56(3)
  01fd6c8  lfs 3, 408(30)
  01fd6cc  fmuls 1, 3, 1
  01fd6d0  fmuls 2, 3, 2
  01fd6d4  bl 0xfcbe8
  01fd6d8  nop
  01fd6dc  stfs 1, 404(30)
  01fd6e0  lbz 3, 83(31)
  01fd6e4  cmpwi 3, 3
  01fd6e8  bt 2, 0x1ff038
  01fd6ec  lis 3, 32
  01fd6f0  lis 4, 114
  01fd6f4  addi 3, 3, -13148
  01fd6f8  li 5, 0
  01fd6fc  lfs 1, 60(3)
  01fd700  lfs 2, -3056(4)
  01fd704  ori 3, 31, 0
  01fd708  li 4, 3
  01fd70c  fmuls 1, 2, 1
  01fd710  fctiwz 1, 1
  01fd714  stfd 1, 448(1)
  01fd718  lwz 6, 452(1)
  01fd71c  extsw 6, 6
  01fd720  bl 0xfddc0
  01fd724  nop
  01fd728  b 0x1ff038
  01fd72c  addic 26, 31, 16
  01fd730  addic 25, 29, 16
  01fd734  ori 3, 26, 0
  01fd738  ori 4, 25, 0
  01fd73c  bl 0x5e8548
  01fd740  nop
  01fd744  lis 3, 32
  01fd748  lhz 4, 166(29)
  01fd74c  addi 3, 3, -13148
  01fd750  fmr 31, 1
  01fd754  cmpwi 4, 857
  01fd758  lfs 1, 64(3)
  01fd75c  fmr 27, 1
  01fd760  bf 2, 0x1fd770
  01fd764  lis 3, 32
  01fd768  addi 3, 3, -13148
  01fd76c  lfs 1, 68(3)
  01fd770  fcmpu 0, 31, 1
  01fd774  cror 6, 0, 2
  01fd778  bt 6, 0x1fd7b4
  01fd77c  lis 3, 32
  01fd780  lis 4, 114
  01fd784  lfs 1, 420(30)
  01fd788  addi 5, 3, -13148
  01fd78c  lis 6, 114
  01fd790  addic 3, 30, 244
  01fd794  lfs 2, -3052(4)
  01fd798  lfs 3, 72(5)
  01fd79c  lfs 4, -3048(6)
  01fd7a0  fmuls 1, 1, 2
  01fd7a4  fmuls 2, 4, 3
  01fd7a8  bl 0x109af0
  01fd7ac  nop
  01fd7b0  b 0x1fd7f0
  01fd7b4  lis 3, 114
  01fd7b8  lfs 1, 420(30)
  01fd7bc  lis 4, 32
  01fd7c0  lis 5, 114
  01fd7c4  addi 4, 4, -13148
  01fd7c8  lfs 2, -3052(3)
  01fd7cc  addic 3, 30, 244
  01fd7d0  fmuls 1, 1, 2
  01fd7d4  lfs 2, 28(4)
  01fd7d8  lfs 3, 44(4)
  01fd7dc  lfs 4, -3048(5)
  01fd7e0  fmuls 1, 1, 2
  01fd7e4  fmuls 2, 4, 3
  01fd7e8  bl 0x109af0
  01fd7ec  nop
  01fd7f0  lfs 1, 16(31)
  01fd7f4  cmpwi 28, 0
  01fd7f8  stfs 1, 192(1)
  01fd7fc  lfs 1, 20(31)
  01fd800  stfs 1, 196(1)
  01fd804  lfs 1, 24(31)
  01fd808  stfs 1, 200(1)
  01fd80c  lfs 1, 28(31)
  01fd810  stfs 1, 204(1)
  01fd814  bt 2, 0x1fd880
  01fd818  lhz 3, 166(29)
  01fd81c  fmr 1, 27
  01fd820  cmpwi 3, 857
  01fd824  bf 2, 0x1fd834
  01fd828  lis 3, 32
  01fd82c  addi 3, 3, -13148
  01fd830  lfs 1, 68(3)
  01fd834  fsubs 1, 31, 1
  01fd838  lis 3, 32
  01fd83c  addi 3, 3, -13148
  01fd840  lfs 2, 76(3)
  01fd844  fabs 1, 1
  01fd848  fcmpu 0, 1, 2
  01fd84c  cror 6, 1, 2
  01fd850  bt 6, 0x1fd880
  01fd854  lis 3, 32
  01fd858  lis 5, 114
  01fd85c  addi 4, 3, -13148
  01fd860  addic 3, 30, 244
  01fd864  lfs 3, 80(4)
  01fd868  lfs 1, 40(4)
  01fd86c  lfs 4, -3048(5)
  01fd870  fmuls 2, 4, 3
  01fd874  bl 0x109af0
  01fd878  nop
  01fd87c  b 0x1fd8b4
  01fd880  lwz 3, 472(30)
  01fd884  cmpwi 3, 0
  01fd888  bt 2, 0x1fd8b4
  01fd88c  lis 3, 32
  01fd890  lis 5, 114
  01fd894  addi 4, 3, -13148
  01fd898  addic 3, 30, 244
  01fd89c  lfs 3, 12(4)
  01fd8a0  lfs 1, 40(4)
  01fd8a4  lfs 4, -3048(5)
  01fd8a8  fmuls 2, 4, 3
  01fd8ac  bl 0x109af0
  01fd8b0  nop
  01fd8b4  lfs 1, 16(29)
  01fd8b8  lfs 2, 16(31)
  01fd8bc  lfs 3, 20(29)
  01fd8c0  fsubs 1, 1, 2
  01fd8c4  lfs 4, 20(31)
  01fd8c8  fsubs 2, 3, 4
  01fd8cc  bl 0x5e8338
  01fd8d0  nop
  01fd8d4  fmr 31, 1
  01fd8d8  lfs 2, 72(31)
  01fd8dc  bl 0x5026a0
  01fd8e0  nop
  01fd8e4  fmr 30, 1
  01fd8e8  lis 3, 32
  01fd8ec  addi 3, 3, -13148
  01fd8f0  lfs 1, 84(3)
  01fd8f4  fcmpu 0, 30, 1
  01fd8f8  cror 6, 0, 2
  01fd8fc  bt 6, 0x1fd934
  01fd900  lis 3, 114
  01fd904  lfs 1, 420(30)
  01fd908  lis 4, 32
  01fd90c  addi 4, 4, -13148
  01fd910  lfs 2, -3052(3)
  01fd914  fmuls 1, 1, 2
  01fd918  lfs 2, 88(4)
  01fd91c  lfs 3, 244(30)
  01fd920  fmuls 1, 1, 2
  01fd924  fcmpu 0, 3, 1
  01fd928  cror 6, 0, 2
  01fd92c  bt 6, 0x1fd934
  01fd930  stfs 1, 244(30)
  01fd934  lis 3, 32
  01fd938  lis 4, 118
  01fd93c  addi 3, 3, -13148
  01fd940  lfs 28, 52(3)
  01fd944  lfs 1, 25752(4)
  01fd948  fmuls 1, 1, 28
  01fd94c  fcmpu 0, 30, 1
  01fd950  bt 1, 0x1fd960
  01fd954  lwz 3, 472(30)
  01fd958  cmpwi 3, 0
  01fd95c  bf 2, 0x1fd994
  01fd960  lis 3, 32
  01fd964  fmr 1, 31
  01fd968  lis 6, 114
  01fd96c  addi 4, 3, -13148
  01fd970  addic 5, 30, 400
  01fd974  ori 3, 31, 0
  01fd978  lfs 4, 32(4)
  01fd97c  lfs 2, 24(4)
  01fd980  lfs 3, 28(4)
  01fd984  lfs 5, -3052(6)
  01fd988  fmuls 4, 5, 4
  01fd98c  bl 0xff2e8
  01fd990  nop
  01fd994  ori 3, 31, 0
  01fd998  bl 0x1fb4d0
  01fd99c  fmr 31, 1
  01fd9a0  bl 0x5e8078
  01fd9a4  nop
  01fd9a8  lhz 3, 166(29)
  01fd9ac  fmr 2, 27
  01fd9b0  cmpwi 3, 857
  01fd9b4  bf 2, 0x1fd9c4
  01fd9b8  lis 3, 32
  01fd9bc  addi 3, 3, -13148
  01fd9c0  lfs 2, 68(3)
  01fd9c4  fmuls 2, 1, 2
  01fd9c8  fmr 1, 31
  01fd9cc  stfs 2, 208(1)
  01fd9d0  bl 0x5e8128
  01fd9d4  nop
  01fd9d8  lhz 3, 166(29)
  01fd9dc  fmr 31, 1
  01fd9e0  cmpwi 3, 857
  01fd9e4  fmr 1, 27
  01fd9e8  bf 2, 0x1fd9f8
  01fd9ec  lis 3, 32
  01fd9f0  addi 3, 3, -13148
  01fd9f4  lfs 1, 68(3)
  01fd9f8  fmuls 1, 31, 1
  01fd9fc  li 4, 0
  01fda00  addic 3, 1, 208
  01fda04  ori 5, 25, 0
  01fda08  stw 4, 216(1)
  01fda0c  ori 4, 3, 0
  01fda10  stfs 1, 212(1)
  01fda14  bl 0x5e7f54
  01fda18  nop
  01fda1c  lbz 3, 8356(24)
  01fda20  cmpwi 3, 1
  01fda24  bt 2, 0x1fde4c
  01fda28  lfs 1, 208(1)
  01fda2c  lfs 2, 16(31)
  01fda30  lfs 31, 72(31)
  01fda34  fsubs 1, 1, 2
  01fda38  lfs 3, 212(1)
  01fda3c  lfs 2, 20(31)
  01fda40  fsubs 2, 3, 2
  01fda44  bl 0x5e8338
  01fda48  nop
  01fda4c  stfs 1, 72(31)
  01fda50  bl 0x5e8078
  01fda54  nop
  01fda58  lis 3, 32
  01fda5c  addi 3, 3, -13148
  01fda60  lfs 2, 72(31)
  01fda64  lfs 26, 68(3)
  01fda68  fmuls 3, 1, 26
  01fda6c  fmr 1, 2
  01fda70  stfs 3, 160(1)
  01fda74  bl 0x5e8128
  01fda78  nop
  01fda7c  fmuls 1, 1, 26
  01fda80  li 3, 0
  01fda84  addic 4, 1, 240
  01fda88  li 5, 2
  01fda8c  stw 3, 168(1)
  01fda90  stw 3, 188(1)
  01fda94  stw 3, 184(1)
  01fda98  stw 3, 180(1)
  01fda9c  stw 3, 176(1)
  01fdaa0  ori 6, 31, 0
  01fdaa4  addic 3, 1, 224
  01fdaa8  li 7, 0
  01fdaac  stfs 1, 164(1)
  01fdab0  lfs 1, 16(31)
  01fdab4  stfs 1, 224(1)
  01fdab8  lfs 1, 20(31)
  01fdabc  stfs 1, 228(1)
  01fdac0  lfs 1, 24(31)
  01fdac4  lfs 2, 28(31)
  01fdac8  fadds 1, 1, 29
  01fdacc  stfs 2, 236(1)
  01fdad0  stfs 1, 232(1)
  01fdad4  lfs 1, 16(29)
  01fdad8  stfs 1, 240(1)
  01fdadc  lfs 1, 20(29)
  01fdae0  stfs 1, 244(1)
  01fdae4  lfs 1, 24(29)
  01fdae8  fadds 2, 1, 29
  01fdaec  stfs 1, 248(1)
  01fdaf0  lfs 1, 28(29)
  01fdaf4  stfs 1, 252(1)
  01fdaf8  stfs 2, 248(1)
  01fdafc  bl 0x57820
  01fdb00  nop
  01fdb04  cmpwi 3, 0
  01fdb08  bt 2, 0x1fdbd8
  01fdb0c  lis 4, 161
  01fdb10  addic 4, 4, 2368
  01fdb14  lwz 3, 24(4)
  01fdb18  cmpwi 3, 0
  01fdb1c  bt 2, 0x1fdb2c
  01fdb20  lhz 3, 166(3)
  01fdb24  cmpwi 3, 794
  01fdb28  bt 2, 0x1fdbd8
  01fdb2c  addic 3, 1, 224
  01fdb30  addic 4, 4, 32
  01fdb34  bl 0x5e8548
  01fdb38  nop
  01fdb3c  lis 3, 118
  01fdb40  lfs 2, 25728(3)
  01fdb44  fcmpu 0, 1, 2
  01fdb48  cror 6, 1, 2
  01fdb4c  bt 6, 0x1fdbd8
  01fdb50  lis 3, 32
  01fdb54  li 4, 6
  01fdb58  vspltisw 2, -1
  01fdb5c  addi 3, 3, -13148
  01fdb60  li 5, 92
  01fdb64  lis 6, 114
  01fdb68  stb 4, 32(31)
  01fdb6c  li 4, -3056
  01fdb70  vslw 2, 2, 2
  01fdb74  <unknown>
  01fdb78  li 3, 424
  01fdb7c  vspltw 3, 3, 0
  01fdb80  <unknown>
  01fdb84  lfs 1, -3056(6)
  01fdb88  vmaddfp 2, 4, 3, 2
  01fdb8c  vctsxs 2, 2, 0
  01fdb90  vspltw 2, 2, 0
  01fdb94  stvewx 2, 3, 30
  01fdb98  lbz 3, 83(31)
  01fdb9c  cmpwi 3, 1
  01fdba0  bt 2, 0x1fdbd8
  01fdba4  lis 3, 32
  01fdba8  addi 3, 3, -13148
  01fdbac  li 4, 1
  01fdbb0  li 5, 0
  01fdbb4  lfs 2, 96(3)
  01fdbb8  ori 3, 31, 0
  01fdbbc  fmuls 1, 1, 2
  01fdbc0  fctiwz 1, 1
  01fdbc4  stfd 1, 448(1)
  01fdbc8  lwz 6, 452(1)
  01fdbcc  extsw 6, 6
  01fdbd0  bl 0xfddc0
  01fdbd4  nop
  01fdbd8  ori 3, 31, 0
  01fdbdc  addic 4, 30, 208
  01fdbe0  fmr 1, 29
  01fdbe4  addic 5, 1, 160
  01fdbe8  addic 6, 1, 176
  01fdbec  bl 0x101058
  01fdbf0  nop
  01fdbf4  clrlwi 3, 3, 30
  01fdbf8  stfs 31, 72(31)
  01fdbfc  cmpwi 3, 0
  01fdc00  bt 2, 0x1fddb8
  01fdc04  ori 3, 26, 0
  01fdc08  li 27, 0
  01fdc0c  addic 4, 1, 192
  01fdc10  bl 0x5e8588
  01fdc14  nop
  01fdc18  lis 3, 32
  01fdc1c  lfs 2, 244(30)
  01fdc20  addi 3, 3, -13148
  01fdc24  lfs 3, 88(3)
  01fdc28  fmuls 2, 2, 3
  01fdc2c  fcmpu 0, 1, 2
  01fdc30  cror 6, 1, 2
  01fdc34  bt 6, 0x1fdc3c
  01fdc38  li 27, 1
  01fdc3c  lis 3, 161
  01fdc40  stw 27, 472(30)
  01fdc44  lis 4, -28087
  01fdc48  ori 4, 4, 9363
  01fdc4c  lwz 3, 1808(3)
  01fdc50  mulhw 4, 4, 3
  01fdc54  addc 4, 4, 3
  01fdc58  srawi 4, 4, 2
  01fdc5c  srwi 5, 4, 31
  01fdc60  addc 4, 4, 5
  01fdc64  sldi 5, 4, 3
  01fdc68  subc 4, 5, 4
  01fdc6c  subc 3, 3, 4
  01fdc70  cmpwi 3, 0
  01fdc74  bf 2, 0x1fddc0
  01fdc78  lwz 3, 424(30)
  01fdc7c  cmpwi 3, 0
  01fdc80  bf 2, 0x1fddc0
  01fdc84  addic 3, 30, 448
  01fdc88  ori 4, 26, 0
  01fdc8c  bl 0x5e8588
  01fdc90  nop
  01fdc94  lfs 2, 244(30)
  01fdc98  lbz 3, 83(31)
  01fdc9c  fcmpu 0, 1, 2
  01fdca0  cror 6, 1, 2
  01fdca4  bt 6, 0x1fdd48
  01fdca8  lis 4, 118
  01fdcac  lfs 1, 25752(4)
  01fdcb0  fmuls 1, 1, 28
  01fdcb4  fcmpu 0, 30, 1
  01fdcb8  bt 1, 0x1fdd48
  01fdcbc  lis 3, 32
  01fdcc0  vspltisw 2, -1
  01fdcc4  li 4, 6
  01fdcc8  addi 3, 3, -13148
  01fdccc  li 6, 92
  01fdcd0  lis 5, 114
  01fdcd4  stb 4, 32(31)
  01fdcd8  li 4, -3056
  01fdcdc  vslw 2, 2, 2
  01fdce0  <unknown>
  01fdce4  li 3, 424
  01fdce8  vspltw 3, 3, 0
  01fdcec  <unknown>
  01fdcf0  lfs 1, -3056(5)
  01fdcf4  vmaddfp 2, 4, 3, 2
  01fdcf8  vctsxs 2, 2, 0
  01fdcfc  vspltw 2, 2, 0
  01fdd00  stvewx 2, 3, 30
  01fdd04  lbz 3, 83(31)
  01fdd08  cmpwi 3, 1
  01fdd0c  bt 2, 0x1fdd94
  01fdd10  lis 3, 32
  01fdd14  addi 3, 3, -13148
  01fdd18  li 4, 1
  01fdd1c  li 5, 0
  01fdd20  lfs 2, 96(3)
  01fdd24  ori 3, 31, 0
  01fdd28  fmuls 1, 1, 2
  01fdd2c  fctiwz 1, 1
  01fdd30  stfd 1, 448(1)
  01fdd34  lwz 6, 452(1)
  01fdd38  extsw 6, 6
  01fdd3c  bl 0xfddc0
  01fdd40  nop
  01fdd44  b 0x1fdd94
  01fdd48  cmpwi 3, 1
  01fdd4c  bf 2, 0x1fdd94
  01fdd50  cmpwi 3, 3
  01fdd54  bt 2, 0x1fdd94
  01fdd58  lis 3, 32
  01fdd5c  lis 4, 114
  01fdd60  addi 3, 3, -13148
  01fdd64  li 5, 0
  01fdd68  lfs 1, 96(3)
  01fdd6c  lfs 2, -3056(4)
  01fdd70  ori 3, 31, 0
  01fdd74  li 4, 3
  01fdd78  fmuls 1, 2, 1
  01fdd7c  fctiwz 1, 1
  01fdd80  stfd 1, 448(1)
  01fdd84  lwz 6, 452(1)
  01fdd88  extsw 6, 6
  01fdd8c  bl 0xfddc0
  01fdd90  nop
  01fdd94  lfs 1, 16(31)
  01fdd98  stfs 1, 448(30)
  01fdd9c  lfs 1, 20(31)
  01fdda0  stfs 1, 452(30)
  01fdda4  lfs 1, 24(31)
  01fdda8  stfs 1, 456(30)
  01fddac  lfs 1, 28(31)
  01fddb0  stfs 1, 460(30)
  01fddb4  b 0x1fddc0
  01fddb8  li 3, 0
  01fddbc  stw 3, 472(30)
  01fddc0  lbz 3, 32(31)
  01fddc4  cmpwi 3, 5
  01fddc8  bf 2, 0x1fdf0c
  01fddcc  addic 3, 30, 424
  01fddd0  bl 0x4fff60
  01fddd4  nop
  01fddd8  cmpwi 3, 0
  01fdddc  bt 2, 0x1fdf0c
  01fdde0  lwz 3, 244(30)
  01fdde4  cmpwi 3, 0
  01fdde8  bf 1, 0x1fdf0c
  01fddec  lwz 3, 472(30)
  01fddf0  cmpwi 3, 0
  01fddf4  bf 2, 0x1fdf0c
  01fddf8  lbz 3, 83(31)
  01fddfc  cmpwi 1, 3, 3
  01fde00  cmpwi 3, 1
  01fde04  crorc 2, 6, 2
  01fde08  bt 2, 0x1fdf0c
  01fde0c  lis 3, 32
  01fde10  lis 4, 114
  01fde14  addi 3, 3, -13148
  01fde18  li 5, 0
  01fde1c  lfs 1, 96(3)
  01fde20  lfs 2, -3056(4)
  01fde24  ori 3, 31, 0
  01fde28  fmuls 1, 2, 1
  01fde2c  li 4, 3
  01fde30  fctiwz 1, 1
  01fde34  stfd 1, 448(1)
  01fde38  lwz 6, 452(1)
  01fde3c  extsw 6, 6
  01fde40  bl 0xfddc0
  01fde44  nop
  01fde48  b 0x1fdf0c
  01fde4c  lis 3, 32
  01fde50  lfs 1, 400(30)
  01fde54  lis 4, 114
  01fde58  addi 3, 3, -13148
  01fde5c  fabs 1, 1
  01fde60  lfs 2, 100(3)
  01fde64  lfs 3, -3052(4)
  01fde68  fmuls 2, 3, 2
  01fde6c  fcmpu 0, 1, 2
  01fde70  cror 6, 0, 2
  01fde74  bt 6, 0x1fdec4
  01fde78  lbz 3, 83(31)
  01fde7c  cmpwi 3, 3
  01fde80  bt 2, 0x1fdf0c
  01fde84  lis 3, 32
  01fde88  lis 4, 114
  01fde8c  addi 3, 3, -13148
  01fde90  li 5, 0
  01fde94  lfs 1, 96(3)
  01fde98  lfs 2, -3056(4)
  01fde9c  ori 3, 31, 0
  01fdea0  fmuls 1, 2, 1
  01fdea4  li 4, 3
  01fdea8  fctiwz 1, 1
  01fdeac  stfd 1, 448(1)
  01fdeb0  lwz 6, 452(1)
  01fdeb4  extsw 6, 6
  01fdeb8  bl 0xfddc0
  01fdebc  nop
  01fdec0  b 0x1fdf0c
  01fdec4  lbz 3, 83(31)
  01fdec8  cmpwi 3, 1
  01fdecc  bt 2, 0x1fdf0c
  01fded0  lis 3, 32
  01fded4  lis 4, 114
  01fded8  addi 3, 3, -13148
  01fdedc  li 5, 0
  01fdee0  lfs 1, 96(3)
  01fdee4  lfs 2, -3056(4)
  01fdee8  ori 3, 31, 0
  01fdeec  li 4, 1
  01fdef0  fmuls 1, 2, 1
  01fdef4  fctiwz 1, 1
  01fdef8  stfd 1, 448(1)
  01fdefc  lwz 6, 452(1)
  01fdf00  extsw 6, 6
  01fdf04  bl 0xfddc0
  01fdf08  nop
  01fdf0c  lis 3, 16281
  01fdf10  addic 4, 30, 368
  01fdf14  ori 5, 3, 39322
  01fdf18  ori 3, 26, 0
  01fdf1c  stw 5, 88(31)
  01fdf20  bl 0x5e8548
  01fdf24  nop
  01fdf28  lis 3, 32
  01fdf2c  lbz 4, 8356(24)
  01fdf30  addi 3, 3, -13148
  01fdf34  cmpwi 4, 1
  01fdf38  lfs 2, 80(3)
  01fdf3c  bf 2, 0x1fdf44
  01fdf40  fmr 2, 29
  01fdf44  fcmpu 0, 1, 2
  01fdf48  bt 1, 0x1fdf58
  01fdf4c  lwz 3, 356(30)
  01fdf50  cmpwi 3, 2
  01fdf54  bf 2, 0x1fdfa0
  01fdf58  lis 3, 32
  01fdf5c  li 4, 8
  01fdf60  addi 3, 3, -13148
  01fdf64  lis 5, 114
  01fdf68  stb 4, 32(31)
  01fdf6c  li 4, 4
  01fdf70  lfs 1, 104(3)
  01fdf74  lfs 2, -3056(5)
  01fdf78  ori 3, 31, 0
  01fdf7c  li 5, 0
  01fdf80  fmuls 1, 2, 1
  01fdf84  fctiwz 1, 1
  01fdf88  stfd 1, 448(1)
  01fdf8c  lwz 6, 452(1)
  01fdf90  extsw 6, 6
  01fdf94  bl 0xfddc0
  01fdf98  nop
  01fdf9c  b 0x1ff038
  01fdfa0  ori 3, 26, 0
  01fdfa4  ori 4, 25, 0
  01fdfa8  bl 0x5e8588
  01fdfac  nop
  01fdfb0  lhz 3, 166(29)
  01fdfb4  lwz 29, 448(24)
  01fdfb8  cmpwi 3, 857
  01fdfbc  bf 2, 0x1fdfcc
  01fdfc0  lis 3, 32
  01fdfc4  addi 3, 3, -13148
  01fdfc8  lfs 27, 68(3)
  01fdfcc  lis 3, 32
  01fdfd0  addi 3, 3, -13148
  01fdfd4  lfs 2, 108(3)
  01fdfd8  fadds 2, 27, 2
  01fdfdc  fcmpu 0, 1, 2
  01fdfe0  cror 6, 1, 2
  01fdfe4  bt 6, 0x1ff038
  01fdfe8  lis 3, 32
  01fdfec  lis 4, 114
  01fdff0  addi 3, 3, -13148
  01fdff4  lfs 1, 48(3)
  01fdff8  lfs 2, -3056(4)
  01fdffc  fmuls 1, 2, 1
  01fe000  fctiwz 1, 1
  01fe004  stfd 1, 448(1)
  01fe008  lwz 3, 452(1)
  01fe00c  cmpw 29, 3
  01fe010  bf 0, 0x1ff038
  01fe014  lis 3, 32
  01fe018  cmpwi 1, 28, 0
  01fe01c  addi 3, 3, -13148
  01fe020  lfs 1, 112(3)
  01fe024  fcmpu 0, 30, 1
  01fe028  crorc 2, 6, 0
  01fe02c  bt 2, 0x1ff038
  01fe030  li 29, 7
  01fe034  li 3, 100
  01fe038  bl 0xfc620
  01fe03c  nop
  01fe040  lis 4, 32
  01fe044  lis 5, 114
  01fe048  stb 29, 32(31)
  01fe04c  addi 4, 4, -13148
  01fe050  clrlwi 3, 3, 31
  01fe054  li 6, 6
  01fe058  lfs 1, 96(4)
  01fe05c  lfs 2, -3056(5)
  01fe060  li 4, 0
  01fe064  li 5, 0
  01fe068  fmuls 1, 2, 1
  01fe06c  subc 3, 4, 3
  01fe070  li 4, 7
  01fe074  cntlzw 3, 3
  01fe078  subc 4, 4, 6
  01fe07c  sldi 3, 3, 58
  01fe080  sradi 3, 3, 63
  01fe084  and 4, 3, 4
  01fe088  fctiwz 1, 1
  01fe08c  addc 4, 6, 4
  01fe090  ori 3, 31, 0
  01fe094  stfd 1, 448(1)
  01fe098  lwz 6, 452(1)
  01fe09c  extsw 6, 6
  01fe0a0  bl 0xfddc0
  01fe0a4  nop
  01fe0a8  b 0x1ff038
  01fe0ac  lfs 1, 16(29)
  01fe0b0  lfs 2, 16(31)
  01fe0b4  lfs 3, 20(29)
  01fe0b8  fsubs 1, 1, 2
  01fe0bc  lfs 4, 20(31)
  01fe0c0  fsubs 2, 3, 4
  01fe0c4  bl 0x5e8338
  01fe0c8  nop
  01fe0cc  lfs 2, 72(31)
  01fe0d0  bl 0x5026a0
  01fe0d4  nop
  01fe0d8  fmr 31, 1
  01fe0dc  lis 3, 32
  01fe0e0  addi 3, 3, -13148
  01fe0e4  lfs 1, 84(3)
  01fe0e8  fcmpu 0, 31, 1
  01fe0ec  cror 6, 0, 2
  01fe0f0  bt 6, 0x1fe128
  01fe0f4  lis 3, 114
  01fe0f8  lfs 1, 420(30)
  01fe0fc  lis 4, 32
  01fe100  addi 4, 4, -13148
  01fe104  lfs 2, -3052(3)
  01fe108  fmuls 1, 1, 2
  01fe10c  lfs 2, 88(4)
  01fe110  lfs 3, 244(30)
  01fe114  fmuls 1, 1, 2
  01fe118  fcmpu 0, 3, 1
  01fe11c  cror 6, 0, 2
  01fe120  bt 6, 0x1fe128
  01fe124  stfs 1, 244(30)
  01fe128  addic 3, 30, 424
  01fe12c  bl 0x4fff60
  01fe130  nop
  01fe134  lfs 1, 16(31)
  01fe138  cmpwi 3, 0
  01fe13c  lfs 2, 20(31)
  01fe140  lfs 3, 24(31)
  01fe144  lfs 4, 28(31)
  01fe148  bf 2, 0x1fe170
  01fe14c  lis 3, 32
  01fe150  lis 4, 118
  01fe154  addi 3, 3, -13148
  01fe158  lfs 5, 52(3)
  01fe15c  lfs 6, 25752(4)
  01fe160  fmuls 5, 6, 5
  01fe164  fcmpu 0, 31, 5
  01fe168  cror 6, 0, 2
  01fe16c  bt 6, 0x1fe280
  01fe170  fadds 3, 3, 29
  01fe174  stfs 1, 256(1)
  01fe178  addic 3, 1, 256
  01fe17c  stfs 2, 260(1)
  01fe180  addic 4, 1, 272
  01fe184  stfs 4, 268(1)
  01fe188  li 5, 2
  01fe18c  ori 6, 31, 0
  01fe190  li 7, 0
  01fe194  stfs 3, 264(1)
  01fe198  lfs 1, 16(29)
  01fe19c  stfs 1, 272(1)
  01fe1a0  lfs 1, 20(29)
  01fe1a4  stfs 1, 276(1)
  01fe1a8  lfs 1, 24(29)
  01fe1ac  fadds 2, 1, 29
  01fe1b0  stfs 1, 280(1)
  01fe1b4  lfs 1, 28(29)
  01fe1b8  stfs 1, 284(1)
  01fe1bc  stfs 2, 280(1)
  01fe1c0  bl 0x57820
  01fe1c4  nop
  01fe1c8  cmpwi 3, 0
  01fe1cc  bt 2, 0x1fe210
  01fe1d0  lis 4, 161
  01fe1d4  addic 4, 4, 2368
  01fe1d8  lwz 3, 24(4)
  01fe1dc  cmpwi 3, 0
  01fe1e0  bt 2, 0x1fe1f0
  01fe1e4  lhz 3, 166(3)
  01fe1e8  cmpwi 3, 794
  01fe1ec  bt 2, 0x1fe210
  01fe1f0  addic 3, 1, 256
  01fe1f4  addic 4, 4, 32
  01fe1f8  bl 0x5e8548
  01fe1fc  nop
  01fe200  lis 3, 118
  01fe204  lfs 2, 25728(3)
  01fe208  fcmpu 0, 1, 2
  01fe20c  bt 0, 0x1fe280
  01fe210  li 3, 5
  01fe214  li 4, 0
  01fe218  vspltisw 3, -1
  01fe21c  li 5, 116
  01fe220  lis 6, 114
  01fe224  stb 3, 32(31)
  01fe228  li 7, -3056
  01fe22c  lfs 1, 16(31)
  01fe230  lis 3, 32
  01fe234  vslw 3, 3, 3
  01fe238  stfs 1, 448(30)
  01fe23c  lfs 1, 20(31)
  01fe240  addi 3, 3, -13148
  01fe244  stw 4, 472(30)
  01fe248  stfs 1, 452(30)
  01fe24c  lfs 1, 24(31)
  01fe250  stfs 1, 456(30)
  01fe254  lfs 1, 28(31)
  01fe258  stw 4, 244(30)
  01fe25c  stfs 1, 460(30)
  01fe260  <unknown>
  01fe264  <unknown>
  01fe268  li 3, 424
  01fe26c  vspltw 2, 2, 0
  01fe270  vmaddfp 2, 4, 2, 3
  01fe274  vctsxs 2, 2, 0
  01fe278  vspltw 2, 2, 0
  01fe27c  stvewx 2, 3, 30
  01fe280  addic 27, 31, 16
  01fe284  addic 4, 30, 368
  01fe288  ori 3, 27, 0
  01fe28c  bl 0x5e8548
  01fe290  nop
  01fe294  lis 3, 32
  01fe298  lbz 4, 8356(24)
  01fe29c  addi 3, 3, -13148
  01fe2a0  cmpwi 4, 1
  01fe2a4  lfs 2, 80(3)
  01fe2a8  bf 2, 0x1fe2b0
  01fe2ac  fmr 2, 29
  01fe2b0  fcmpu 0, 1, 2
  01fe2b4  bt 1, 0x1fe2c4
  01fe2b8  lwz 3, 356(30)
  01fe2bc  cmpwi 3, 2
  01fe2c0  bf 2, 0x1fe30c
  01fe2c4  lis 3, 32
  01fe2c8  li 4, 8
  01fe2cc  addi 3, 3, -13148
  01fe2d0  lis 5, 114
  01fe2d4  stb 4, 32(31)
  01fe2d8  li 4, 4
  01fe2dc  lfs 1, 104(3)
  01fe2e0  lfs 2, -3056(5)
  01fe2e4  ori 3, 31, 0
  01fe2e8  fmuls 1, 2, 1
  01fe2ec  li 5, 0
  01fe2f0  fctiwz 1, 1
  01fe2f4  stfd 1, 448(1)
  01fe2f8  lwz 6, 452(1)
  01fe2fc  extsw 6, 6
  01fe300  bl 0xfddc0
  01fe304  nop
  01fe308  b 0x1fe42c
  01fe30c  ori 3, 27, 0
  01fe310  addic 4, 29, 16
  01fe314  bl 0x5e8588
  01fe318  nop
  01fe31c  lis 3, 32
  01fe320  lhz 4, 166(29)
  01fe324  lwz 27, 448(24)
  01fe328  addi 3, 3, -13148
  01fe32c  cmpwi 4, 857
  01fe330  lfs 2, 64(3)
  01fe334  bf 2, 0x1fe344
  01fe338  lis 3, 32
  01fe33c  addi 3, 3, -13148
  01fe340  lfs 2, 68(3)
  01fe344  lis 3, 32
  01fe348  addi 3, 3, -13148
  01fe34c  lfs 3, 108(3)
  01fe350  fadds 2, 2, 3
  01fe354  fcmpu 0, 1, 2
  01fe358  cror 6, 1, 2
  01fe35c  bt 6, 0x1fe42c
  01fe360  lis 3, 32
  01fe364  lis 4, 114
  01fe368  addi 3, 3, -13148
  01fe36c  lfs 1, 48(3)
  01fe370  lfs 2, -3056(4)
  01fe374  fmuls 1, 2, 1
  01fe378  fctiwz 1, 1
  01fe37c  stfd 1, 448(1)
  01fe380  lwz 3, 452(1)
  01fe384  cmpw 27, 3
  01fe388  bf 0, 0x1fe42c
  01fe38c  lis 3, 32
  01fe390  lis 4, 118
  01fe394  addi 3, 3, -13148
  01fe398  cmpwi 1, 28, 0
  01fe39c  lfs 1, 52(3)
  01fe3a0  lfs 2, 25752(4)
  01fe3a4  fmuls 1, 2, 1
  01fe3a8  fcmpu 0, 31, 1
  01fe3ac  crorc 2, 6, 0
  01fe3b0  bt 2, 0x1fe42c
  01fe3b4  li 28, 7
  01fe3b8  li 3, 100
  01fe3bc  bl 0xfc620
  01fe3c0  nop
  01fe3c4  lis 4, 32
  01fe3c8  stb 28, 32(31)
  01fe3cc  lis 5, 114
  01fe3d0  addi 4, 4, -13148
  01fe3d4  clrlwi 3, 3, 31
  01fe3d8  lfs 1, 96(4)
  01fe3dc  lfs 2, -3056(5)
  01fe3e0  li 4, 0
  01fe3e4  li 5, 7
  01fe3e8  fmuls 1, 2, 1
  01fe3ec  subc 3, 4, 3
  01fe3f0  li 4, 6
  01fe3f4  cntlzw 3, 3
  01fe3f8  subc 5, 5, 4
  01fe3fc  sldi 3, 3, 58
  01fe400  sradi 6, 3, 63
  01fe404  ori 3, 31, 0
  01fe408  and 6, 6, 5
  01fe40c  fctiwz 1, 1
  01fe410  li 5, 0
  01fe414  addc 4, 4, 6
  01fe418  stfd 1, 448(1)
  01fe41c  lwz 6, 452(1)
  01fe420  extsw 6, 6
  01fe424  bl 0xfddc0
  01fe428  nop
  01fe42c  ori 3, 31, 0
  01fe430  bl 0xefe40
  01fe434  nop
  01fe438  lfs 2, 16(29)
  01fe43c  fmr 31, 1
  01fe440  lfs 1, 16(31)
  01fe444  lfs 3, 20(29)
  01fe448  lfs 4, 20(31)
  01fe44c  fsubs 1, 2, 1
  01fe450  fsubs 2, 3, 4
  01fe454  bl 0x5e8338
  01fe458  nop
  01fe45c  lis 3, 32
  01fe460  lis 6, 114
  01fe464  addi 4, 3, -13148
  01fe468  addic 5, 30, 400
  01fe46c  ori 3, 31, 0
  01fe470  lfs 4, 32(4)
  01fe474  lfs 2, 120(4)
  01fe478  lfs 5, 28(4)
  01fe47c  lfs 6, -3052(6)
  01fe480  fmr 3, 5
  01fe484  fmuls 4, 6, 4
  01fe488  bl 0xff2e8
  01fe48c  nop
  01fe490  lbz 29, 83(31)
  01fe494  lfs 1, 16(31)
  01fe498  lfs 2, 20(31)
  01fe49c  lfs 3, 24(31)
  01fe4a0  cmpwi 29, 6
  01fe4a4  lfs 4, 28(31)
  01fe4a8  lfs 5, 72(31)
  01fe4ac  bt 2, 0x1fe4b8
  01fe4b0  cmpwi 29, 7
  01fe4b4  bf 2, 0x1fe698
  01fe4b8  lis 3, 32
  01fe4bc  addi 3, 3, -13148
  01fe4c0  lfs 6, 124(3)
  01fe4c4  fcmpu 0, 31, 6
  01fe4c8  bt 0, 0x1fe698
  01fe4cc  lis 3, 32
  01fe4d0  addi 3, 3, -13148
  01fe4d4  lfs 6, 128(3)
  01fe4d8  fcmpu 0, 31, 6
  01fe4dc  bt 1, 0x1fe698
  01fe4e0  lis 3, 32
  01fe4e4  stfs 1, 304(1)
  01fe4e8  lis 4, 16454
  01fe4ec  addi 29, 3, -13148
  01fe4f0  stfs 2, 308(1)
  01fe4f4  stfs 4, 316(1)
  01fe4f8  lis 3, 1
  01fe4fc  li 28, 1
  01fe500  ori 3, 3, 1
  01fe504  ori 4, 4, 26214
  01fe508  lfs 1, 88(29)
  01fe50c  stw 31, 416(1)
  01fe510  fadds 2, 3, 1
  01fe514  stw 3, 420(1)
  01fe518  fmr 1, 5
  01fe51c  stw 28, 432(1)
  01fe520  stw 4, 428(1)
  01fe524  stfs 2, 312(1)
  01fe528  bl 0x5e8078
  01fe52c  nop
  01fe530  lfs 2, 72(31)
  01fe534  stfs 1, 400(1)
  01fe538  fmr 1, 2
  01fe53c  bl 0x5e8128
  01fe540  nop
  01fe544  lis 3, 17839
  01fe548  stfs 1, 404(1)
  01fe54c  lis 4, 16256
  01fe550  lhz 6, 166(31)
  01fe554  ori 3, 3, 57190
  01fe558  li 5, 0
  01fe55c  stw 4, 408(1)
  01fe560  stw 3, 412(1)
  01fe564  stb 5, 424(1)
  01fe568  stb 28, 425(1)
  01fe56c  sth 6, 426(1)
  01fe570  lbz 3, 83(31)
  01fe574  lfs 31, 132(29)
  01fe578  cmpwi 3, 6
  01fe57c  bf 2, 0x1fe60c
  01fe580  addic 29, 1, 288
  01fe584  ori 3, 31, 0
  01fe588  li 4, 0
  01fe58c  ori 5, 29, 0
  01fe590  bl 0xf1114
  01fe594  nop
  01fe598  addic 28, 1, 400
  01fe59c  ori 3, 29, 0
  01fe5a0  fmr 1, 31
  01fe5a4  li 5, 0
  01fe5a8  ori 6, 31, 0
  01fe5ac  ori 7, 28, 0
  01fe5b0  bl 0x5e598
  01fe5b4  nop
  01fe5b8  lis 3, 32
  01fe5bc  lfs 2, 296(1)
  01fe5c0  li 5, 0
  01fe5c4  addi 3, 3, -13148
  01fe5c8  fmr 1, 31
  01fe5cc  ori 6, 31, 0
  01fe5d0  ori 7, 28, 0
  01fe5d4  lfs 3, 136(3)
  01fe5d8  ori 3, 29, 0
  01fe5dc  fadds 2, 2, 3
  01fe5e0  stfs 2, 296(1)
  01fe5e4  bl 0x5e598
  01fe5e8  nop
  01fe5ec  addic 3, 1, 304
  01fe5f0  ori 4, 29, 0
  01fe5f4  li 5, 9
  01fe5f8  ori 6, 31, 0
  01fe5fc  ori 7, 28, 0
  01fe600  bl 0x57820
  01fe604  nop
  01fe608  b 0x1ff038
  01fe60c  addic 29, 1, 288
  01fe610  ori 3, 31, 0
  01fe614  li 4, 1
  01fe618  ori 5, 29, 0
  01fe61c  bl 0xf1114
  01fe620  nop
  01fe624  addic 28, 1, 400
  01fe628  fmr 1, 31
  01fe62c  ori 3, 29, 0
  01fe630  li 5, 0
  01fe634  ori 6, 31, 0
  01fe638  ori 7, 28, 0
  01fe63c  bl 0x5e598
  01fe640  nop
  01fe644  lis 3, 32
  01fe648  lfs 2, 296(1)
  01fe64c  li 5, 0
  01fe650  fmr 1, 31
  01fe654  addi 4, 3, -13148
  01fe658  ori 3, 29, 0
  01fe65c  ori 6, 31, 0
  01fe660  ori 7, 28, 0
  01fe664  lfs 3, 136(4)
  01fe668  fadds 2, 2, 3
  01fe66c  stfs 2, 296(1)
  01fe670  bl 0x5e598
  01fe674  nop
  01fe678  addic 3, 1, 304
  01fe67c  ori 4, 29, 0
  01fe680  li 5, 9
  01fe684  ori 6, 31, 0
  01fe688  ori 7, 28, 0
  01fe68c  bl 0x57820
  01fe690  nop
  01fe694  b 0x1ff038
  01fe698  cmpwi 29, 6
  01fe69c  bt 2, 0x1fe6a8
  01fe6a0  cmpwi 29, 7
  01fe6a4  bf 2, 0x1ff038
  01fe6a8  lbz 3, 112(31)
  01fe6ac  rlwinm 3, 3, 0, 30, 30
  01fe6b0  cmpwi 3, 0
  01fe6b4  bt 2, 0x1ff038
  01fe6b8  addic 3, 31, 16
  01fe6bc  addic 4, 30, 368
  01fe6c0  bl 0x5e8548
  01fe6c4  nop
  01fe6c8  lis 3, 32
  01fe6cc  lbz 4, 8356(24)
  01fe6d0  addi 3, 3, -13148
  01fe6d4  cmpwi 4, 1
  01fe6d8  lfs 2, 80(3)
  01fe6dc  bf 2, 0x1fe6e4
  01fe6e0  fmr 2, 29
  01fe6e4  fcmpu 0, 1, 2
  01fe6e8  bt 1, 0x1fe6f8
  01fe6ec  lwz 3, 356(30)
  01fe6f0  cmpwi 3, 2
  01fe6f4  bf 2, 0x1fe740
  01fe6f8  lis 3, 32
  01fe6fc  li 4, 8
  01fe700  addi 3, 3, -13148
  01fe704  lis 5, 114
  01fe708  stb 4, 32(31)
  01fe70c  li 4, 4
  01fe710  lfs 1, 104(3)
  01fe714  lfs 2, -3056(5)
  01fe718  ori 3, 31, 0
  01fe71c  li 5, 0
  01fe720  fmuls 1, 2, 1
  01fe724  fctiwz 1, 1
  01fe728  stfd 1, 448(1)
  01fe72c  lwz 6, 452(1)
  01fe730  extsw 6, 6
  01fe734  bl 0xfddc0
  01fe738  nop
  01fe73c  b 0x1ff038
  01fe740  li 3, 5
  01fe744  li 4, 0
  01fe748  stb 3, 32(31)
  01fe74c  lfs 1, 16(31)
  01fe750  stfs 1, 448(30)
  01fe754  lfs 1, 20(31)
  01fe758  stw 4, 472(30)
  01fe75c  stfs 1, 452(30)
  01fe760  lfs 1, 24(31)
  01fe764  stfs 1, 456(30)
  01fe768  lfs 1, 28(31)
  01fe76c  stw 4, 244(30)
  01fe770  stfs 1, 460(30)
  01fe774  lbz 3, 83(31)
  01fe778  cmpwi 3, 3
  01fe77c  bt 2, 0x1ff038
  01fe780  lis 3, 32
  01fe784  lis 4, 114
  01fe788  addi 3, 3, -13148
  01fe78c  li 5, 0
  01fe790  lfs 1, 96(3)
  01fe794  lfs 2, -3056(4)
  01fe798  ori 3, 31, 0
  01fe79c  li 4, 3
  01fe7a0  fmuls 1, 2, 1
  01fe7a4  fctiwz 1, 1
  01fe7a8  stfd 1, 448(1)
  01fe7ac  lwz 6, 452(1)
  01fe7b0  extsw 6, 6
  01fe7b4  bl 0xfddc0
  01fe7b8  nop
  01fe7bc  b 0x1ff038
  01fe7c0  lis 3, 32
  01fe7c4  lfs 1, 420(30)
  01fe7c8  lis 26, 114
  01fe7cc  addi 27, 3, -13148
  01fe7d0  lis 4, 114
  01fe7d4  addic 3, 30, 244
  01fe7d8  lfs 2, 140(27)
  01fe7dc  lfs 3, 44(27)
  01fe7e0  fmuls 1, 1, 2
  01fe7e4  lfs 4, -3052(26)
  01fe7e8  lfs 5, -3048(4)
  01fe7ec  fmuls 2, 5, 3
  01fe7f0  fmuls 1, 1, 4
  01fe7f4  bl 0x109af0
  01fe7f8  nop
  01fe7fc  lfs 1, 16(29)
  01fe800  lfs 2, 16(31)
  01fe804  lfs 3, 20(29)
  01fe808  lfs 4, 20(31)
  01fe80c  fsubs 1, 1, 2
  01fe810  fsubs 2, 3, 4
  01fe814  bl 0x5e8338
  01fe818  nop
  01fe81c  lfs 4, 32(27)
  01fe820  addic 5, 30, 400
  01fe824  lfs 2, 24(27)
  01fe828  ori 3, 31, 0
  01fe82c  lfs 5, 28(27)
  01fe830  lfs 6, -3052(26)
  01fe834  fmr 3, 5
  01fe838  fmuls 4, 6, 4
  01fe83c  bl 0xff2e8
  01fe840  nop
  01fe844  lfs 1, 16(29)
  01fe848  lfs 2, 16(31)
  01fe84c  lfs 31, 72(31)
  01fe850  fsubs 1, 1, 2
  01fe854  lfs 3, 20(29)
  01fe858  lfs 2, 20(31)
  01fe85c  fsubs 2, 3, 2
  01fe860  bl 0x5e8338
  01fe864  nop
  01fe868  lfs 2, 144(27)
  01fe86c  bl 0x502578
  01fe870  nop
  01fe874  stfs 1, 72(31)
  01fe878  bl 0x5e8078
  01fe87c  nop
  01fe880  lfs 30, 68(27)
  01fe884  lfs 2, 72(31)
  01fe888  fmuls 3, 1, 30
  01fe88c  fmr 1, 2
  01fe890  stfs 3, 320(1)
  01fe894  bl 0x5e8128
  01fe898  nop
  01fe89c  fmuls 2, 1, 30
  01fe8a0  li 3, 0
  01fe8a4  addic 4, 30, 208
  01fe8a8  fmr 1, 29
  01fe8ac  addic 5, 1, 320
  01fe8b0  addic 6, 1, 336
  01fe8b4  stw 3, 328(1)
  01fe8b8  ori 3, 31, 0
  01fe8bc  stfs 2, 324(1)
  01fe8c0  bl 0x101058
  01fe8c4  nop
  01fe8c8  cmpwi 28, 0
  01fe8cc  stfs 31, 72(31)
  01fe8d0  bt 2, 0x1ff038
  01fe8d4  addic 3, 30, 424
  01fe8d8  bl 0x4fff60
  01fe8dc  nop
  01fe8e0  cmpwi 3, 0
  01fe8e4  bf 2, 0x1fe90c
  01fe8e8  addic 3, 31, 16
  01fe8ec  addic 4, 29, 16
  01fe8f0  bl 0x5e8548
  01fe8f4  nop
  01fe8f8  lis 3, 118
  01fe8fc  lfs 2, 25744(3)
  01fe900  fcmpu 0, 1, 2
  01fe904  cror 6, 0, 2
  01fe908  bt 6, 0x1ff038
  01fe90c  lis 4, 32
  01fe910  li 3, 7
  01fe914  addi 29, 4, -13148
  01fe918  lis 4, 114
  01fe91c  stb 3, 32(31)
  01fe920  li 3, 100
  01fe924  lfs 1, 148(29)
  01fe928  lfs 2, -3052(4)
  01fe92c  fmuls 1, 2, 1
  01fe930  stfs 1, 244(30)
  01fe934  bl 0xfc620
  01fe938  nop
  01fe93c  lis 4, 114
  01fe940  lfs 1, 152(29)
  01fe944  clrlwi 3, 3, 31
  01fe948  li 5, 0
  01fe94c  li 6, 6
  01fe950  subc 3, 5, 3
  01fe954  lfs 2, -3056(4)
  01fe958  li 5, 7
  01fe95c  cntlzw 3, 3
  01fe960  fmuls 1, 2, 1
  01fe964  sldi 4, 3, 58
  01fe968  subc 5, 5, 6
  01fe96c  sradi 4, 4, 63
  01fe970  ori 3, 31, 0
  01fe974  and 4, 4, 5
  01fe978  li 5, 0
  01fe97c  addc 4, 6, 4
  01fe980  fctiwz 1, 1
  01fe984  stfd 1, 448(1)
  01fe988  lwz 6, 452(1)
  01fe98c  extsw 6, 6
  01fe990  bl 0xfddc0
  01fe994  nop
  01fe998  b 0x1ff038
  01fe99c  lis 3, 32
  01fe9a0  lfs 1, 420(30)
  01fe9a4  lis 29, 114
  01fe9a8  addi 28, 3, -13148
  01fe9ac  lis 4, 114
  01fe9b0  addic 3, 30, 244
  01fe9b4  lfs 2, -3052(29)
  01fe9b8  lfs 3, 148(28)
  01fe9bc  fmuls 1, 1, 2
  01fe9c0  lfs 4, -3048(4)
  01fe9c4  fmr 2, 3
  01fe9c8  fmuls 2, 4, 2
  01fe9cc  bl 0x109af0
  01fe9d0  nop
  01fe9d4  lfs 1, 368(30)
  01fe9d8  lfs 2, 16(31)
  01fe9dc  lfs 3, 372(30)
  01fe9e0  fsubs 1, 1, 2
  01fe9e4  lfs 4, 20(31)
  01fe9e8  fsubs 2, 3, 4
  01fe9ec  bl 0x5e8338
  01fe9f0  nop
  01fe9f4  fmr 31, 1
  01fe9f8  lfs 4, 32(28)
  01fe9fc  lfs 2, 24(28)
  01fea00  addic 5, 30, 400
  01fea04  lfs 3, 28(28)
  01fea08  ori 3, 31, 0
  01fea0c  lfs 5, -3052(29)
  01fea10  fmuls 4, 5, 4
  01fea14  bl 0xff2e8
  01fea18  nop
  01fea1c  fmr 1, 31
  01fea20  lfs 2, 72(31)
  01fea24  bl 0x5026a0
  01fea28  nop
  01fea2c  lfs 2, 84(28)
  01fea30  fcmpu 0, 1, 2
  01fea34  cror 6, 0, 2
  01fea38  bt 6, 0x1fea70
  01fea3c  lis 3, 114
  01fea40  lfs 1, 420(30)
  01fea44  lis 4, 32
  01fea48  addi 4, 4, -13148
  01fea4c  lfs 2, -3052(3)
  01fea50  fmuls 1, 1, 2
  01fea54  lfs 2, 88(4)
  01fea58  lfs 3, 244(30)
  01fea5c  fmuls 1, 1, 2
  01fea60  fcmpu 0, 3, 1
  01fea64  cror 6, 0, 2
  01fea68  bt 6, 0x1fea70
  01fea6c  stfs 1, 244(30)
  01fea70  lfs 1, 72(31)
  01fea74  bl 0x5e8078
  01fea78  nop
  01fea7c  lis 3, 32
  01fea80  lfs 2, 72(31)
  01fea84  addi 3, 3, -13148
  01fea88  lfs 31, 68(3)
  01fea8c  fmuls 3, 1, 31
  01fea90  fmr 1, 2
  01fea94  stfs 3, 352(1)
  01fea98  bl 0x5e8128
  01fea9c  nop
  01feaa0  fmuls 2, 1, 31
  01feaa4  fmr 1, 29
  01feaa8  li 3, 0
  01feaac  addic 4, 30, 208
  01feab0  addic 5, 1, 352
  01feab4  addic 6, 1, 368
  01feab8  stw 3, 360(1)
  01feabc  ori 3, 31, 0
  01feac0  stfs 2, 356(1)
  01feac4  bl 0x101058
  01feac8  nop
  01feacc  addic 3, 31, 16
  01fead0  addic 4, 30, 368
  01fead4  bl 0x5e8548
  01fead8  nop
  01feadc  fcmpu 0, 1, 29
  01feae0  cror 6, 1, 2
  01feae4  bt 6, 0x1feb3c
  01feae8  li 3, 3
  01feaec  lbz 4, 83(31)
  01feaf0  cmpwi 4, 1
  01feaf4  stb 3, 32(31)
  01feaf8  bt 2, 0x1ff038
  01feafc  lis 3, 32
  01feb00  lis 4, 114
  01feb04  addi 3, 3, -13148
  01feb08  li 5, 0
  01feb0c  lfs 1, 156(3)
  01feb10  lfs 2, -3056(4)
  01feb14  ori 3, 31, 0
  01feb18  fmuls 1, 2, 1
  01feb1c  li 4, 1
  01feb20  fctiwz 1, 1
  01feb24  stfd 1, 448(1)
  01feb28  lwz 6, 452(1)
  01feb2c  extsw 6, 6
  01feb30  bl 0xfddc0
  01feb34  nop
  01feb38  b 0x1ff038
  01feb3c  lwz 3, 356(30)
  01feb40  cmpwi 3, 2
  01feb44  bt 2, 0x1ff038
  01feb48  li 3, 5
  01feb4c  li 4, 0
  01feb50  stb 3, 32(31)
  01feb54  lfs 1, 16(31)
  01feb58  stfs 1, 448(30)
  01feb5c  lfs 1, 20(31)
  01feb60  stw 4, 472(30)
  01feb64  stfs 1, 452(30)
  01feb68  lfs 1, 24(31)
  01feb6c  stfs 1, 456(30)
  01feb70  lfs 1, 28(31)
  01feb74  stw 4, 244(30)
  01feb78  stfs 1, 460(30)
  01feb7c  lbz 3, 83(31)
  01feb80  cmpwi 3, 3
  01feb84  bt 2, 0x1ff038
  01feb88  lis 3, 32
  01feb8c  lis 4, 114
  01feb90  addi 3, 3, -13148
  01feb94  li 5, 0
  01feb98  lfs 1, 96(3)
  01feb9c  lfs 2, -3056(4)
  01feba0  ori 3, 31, 0
  01feba4  li 4, 3
  01feba8  fmuls 1, 2, 1
  01febac  fctiwz 1, 1
  01febb0  stfd 1, 448(1)
  01febb4  lwz 6, 452(1)
  01febb8  extsw 6, 6
  01febbc  bl 0xfddc0
  01febc0  nop
  01febc4  b 0x1ff038
  01febc8  addic 4, 30, 112
  01febcc  ori 3, 31, 0
  01febd0  bl 0x10b030
  01febd4  nop
  01febd8  li 4, 65
  01febdc  and 3, 3, 4
  01febe0  cmpwi 3, 0
  01febe4  bt 2, 0x1fec78
  01febe8  li 3, 7
  01febec  lis 4, 32
  01febf0  addi 29, 4, -13148
  01febf4  stb 3, 32(31)
  01febf8  lis 3, 114
  01febfc  lfs 1, 148(29)
  01fec00  lfs 2, -3052(3)
  01fec04  li 3, 100
  01fec08  fmuls 1, 2, 1
  01fec0c  stfs 1, 244(30)
  01fec10  bl 0xfc620
  01fec14  nop
  01fec18  lis 4, 114
  01fec1c  lfs 1, 152(29)
  01fec20  clrlwi 3, 3, 31
  01fec24  li 5, 0
  01fec28  subc 3, 5, 3
  01fec2c  lfs 2, -3056(4)
  01fec30  li 5, 6
  01fec34  cntlzw 3, 3
  01fec38  fmuls 1, 2, 1
  01fec3c  sldi 3, 3, 58
  01fec40  li 4, 7
  01fec44  sradi 3, 3, 63
  01fec48  subc 4, 4, 5
  01fec4c  and 4, 3, 4
  01fec50  ori 3, 31, 0
  01fec54  addc 4, 5, 4
  01fec58  li 5, 0
  01fec5c  fctiwz 1, 1
  01fec60  stfd 1, 448(1)
  01fec64  lwz 6, 452(1)
  01fec68  extsw 6, 6
  01fec6c  bl 0xfddc0
  01fec70  nop
  01fec74  b 0x1ff038
  01fec78  lis 3, 32
  01fec7c  lfs 1, 376(30)
  01fec80  addi 3, 3, -13148
  01fec84  lfs 2, 160(3)
  01fec88  lfs 3, 24(31)
  01fec8c  fsubs 1, 1, 2
  01fec90  fcmpu 0, 3, 1
  01fec94  cror 6, 1, 2
  01fec98  bt 6, 0x1ff038
  01fec9c  lbz 3, 83(31)
  01feca0  cmpwi 3, 14
  01feca4  bt 2, 0x1fece4
  01feca8  lis 3, 32
  01fecac  lis 4, 114
  01fecb0  addi 3, 3, -13148
  01fecb4  li 5, 0
  01fecb8  lfs 1, 152(3)
  01fecbc  lfs 2, -3056(4)
  01fecc0  ori 3, 31, 0
  01fecc4  li 4, 14
  01fecc8  fmuls 1, 2, 1
  01feccc  fctiwz 1, 1
  01fecd0  stfd 1, 448(1)
  01fecd4  lwz 6, 452(1)
  01fecd8  extsw 6, 6
  01fecdc  bl 0xfddc0
  01fece0  nop
  01fece4  lis 4, 32
  01fece8  li 3, 12
  01fecec  addi 4, 4, -13148
  01fecf0  stb 3, 32(31)
  01fecf4  lfs 1, 120(30)
  01fecf8  lfs 2, 164(4)
  01fecfc  fmuls 1, 1, 2
  01fed00  stfs 1, 120(30)
  01fed04  b 0x1ff038
  01fed08  lfs 1, 120(30)
  01fed0c  lfs 2, 128(30)
  01fed10  addic 29, 31, 16
  01fed14  addic 3, 1, 384
  01fed18  fsubs 1, 1, 2
  01fed1c  addic 5, 30, 112
  01fed20  ori 4, 29, 0
  01fed24  stfs 1, 120(30)
  01fed28  bl 0x502b08
  01fed2c  nop
  01fed30  lis 3, 32
  01fed34  li 4, 0
  01fed38  addi 5, 3, -13148
  01fed3c  ori 3, 29, 0
  01fed40  lfs 1, 136(5)
  01fed44  bl 0xffb70
  01fed48  nop
  01fed4c  lfs 2, 24(31)
  01fed50  fcmpu 0, 1, 2
  01fed54  cror 6, 0, 2
  01fed58  bt 6, 0x1fee80
  01fed5c  bl 0x60780
  01fed60  nop
  01fed64  cmpwi 3, 0
  01fed68  bt 2, 0x1fed7c
  01fed6c  cmpwi 3, 1
  01fed70  bt 2, 0x1fed7c
  01fed74  cmpwi 3, 3
  01fed78  bf 2, 0x1feda0
  01fed7c  ori 3, 31, 0
  01fed80  li 4, 512
  01fed84  li 5, -1
  01fed88  bl 0xfd8d0
  01fed8c  nop
  01fed90  ori 3, 31, 0
  01fed94  bl 0xefb38
  01fed98  nop
  01fed9c  b 0x1ff19c
  01feda0  lis 4, 32
  01feda4  li 29, 0
  01feda8  addi 28, 4, -13148
  01fedac  lhz 4, 52(31)
  01fedb0  li 3, 11
  01fedb4  rlwimi 4, 29, 0, 19, 19
  01fedb8  stb 3, 32(31)
  01fedbc  sth 4, 52(31)
  01fedc0  lfs 1, 168(28)
  01fedc4  bl 0x502758
  01fedc8  nop
  01fedcc  lis 4, 16192
  01fedd0  lis 5, 118
  01fedd4  lis 6, 114
  01fedd8  li 7, 9
  01feddc  stw 4, 152(30)
  01fede0  addic 27, 30, 112
  01fede4  lfs 1, 25716(5)
  01fede8  lfs 2, -3048(6)
  01fedec  ori 5, 27, 0
  01fedf0  stw 3, 144(30)
  01fedf4  fmuls 1, 1, 2
  01fedf8  stb 29, 173(30)
  01fedfc  stw 7, 148(30)
  01fee00  stfs 1, 128(30)
  01fee04  lfs 1, 68(28)
  01fee08  lfs 2, 36(28)
  01fee0c  bl 0x1158b0
  01fee10  nop
  01fee14  lis 3, 16608
  01fee18  lis 4, 16720
  01fee1c  stw 3, 192(30)
  01fee20  stw 4, 196(30)
  01fee24  lfs 1, 72(31)
  01fee28  lfs 2, 172(28)
  01fee2c  bl 0x502578
  01fee30  nop
  01fee34  ori 3, 31, 0
  01fee38  ori 4, 27, 0
  01fee3c  li 6, 13
  01fee40  li 7, 1
  01fee44  li 8, 0
  01fee48  bl 0x10ad80
  01fee4c  nop
  01fee50  li 5, 250
  01fee54  addic 4, 30, 96
  01fee58  ori 3, 31, 0
  01fee5c  stb 5, 103(30)
  01fee60  bl 0x10c808
  01fee64  nop
  01fee68  ori 3, 31, 0
  01fee6c  li 4, 0
  01fee70  li 5, -1
  01fee74  bl 0xfd8d0
  01fee78  nop
  01fee7c  b 0x1ff038
  01fee80  ori 3, 31, 0
  01fee84  bl 0x1fb2f0
  01fee88  ori 3, 31, 0
  01fee8c  bl 0x1fade0
  01fee90  ori 3, 31, 0
  01fee94  bl 0x1fade0
  01fee98  lis 3, 32
  01fee9c  addic 30, 31, 16
  01feea0  addi 29, 3, -13148
  01feea4  ori 4, 30, 0
  01feea8  ori 3, 31, 0
  01feeac  li 6, -1
  01feeb0  lfs 1, 176(29)
  01feeb4  lfs 2, 44(29)
  01feeb8  bl 0x110040
  01feebc  nop
  01feec0  lis 4, 161
  01feec4  lfs 31, 40(29)
  01feec8  addic 28, 31, 64
  01feecc  addic 27, 4, 23856
  01feed0  ori 3, 31, 0
  01feed4  ori 10, 27, 0
  01feed8  fmr 1, 31
  01feedc  li 4, 1909
  01feee0  std 27, 112(1)
  01feee4  std 27, 120(1)
  01feee8  ori 5, 30, 0
  01feeec  ori 6, 28, 0
  01feef0  li 7, 0
  01feef4  li 8, 2
  01feef8  bl 0x11a560
  01feefc  nop
  01fef00  std 27, 112(1)
  01fef04  std 27, 120(1)
  01fef08  ori 3, 31, 0
  01fef0c  ori 10, 27, 0
  01fef10  fmr 1, 31
  01fef14  li 4, 1914
  01fef18  ori 5, 30, 0
  01fef1c  ori 6, 28, 0
  01fef20  li 7, 0
  01fef24  li 8, 2
  01fef28  bl 0x11a560
  01fef2c  nop
  01fef30  std 27, 112(1)
  01fef34  std 27, 120(1)
  01fef38  ori 3, 31, 0
  01fef3c  ori 10, 27, 0
  01fef40  fmr 1, 31
  01fef44  li 4, 1915
  01fef48  ori 5, 30, 0
  01fef4c  ori 6, 28, 0
  01fef50  li 7, 0
  01fef54  li 8, 2
  01fef58  bl 0x11a560
  01fef5c  nop
  01fef60  std 27, 112(1)
  01fef64  std 27, 120(1)
  01fef68  ori 3, 31, 0
  01fef6c  ori 10, 27, 0
  01fef70  fmr 1, 31
  01fef74  li 4, 1916
  01fef78  ori 5, 30, 0
  01fef7c  ori 6, 28, 0
  01fef80  li 7, 0
  01fef84  li 8, 2
  01fef88  bl 0x11a560
  01fef8c  nop
  01fef90  lfs 30, 28(29)
  01fef94  fmr 1, 31
  01fef98  fmr 2, 30
  01fef9c  bl 0xfe4f0
  01fefa0  nop
  01fefa4  fmr 1, 31
  01fefa8  fmr 2, 30
  01fefac  bl 0xfe4f0
  01fefb0  nop
  01fefb4  std 27, 112(1)
  01fefb8  ori 3, 31, 0
  01fefbc  std 27, 120(1)
  01fefc0  ori 10, 27, 0
  01fefc4  li 4, 1571
  01fefc8  fmr 1, 31
  01fefcc  ori 5, 30, 0
  01fefd0  ori 6, 28, 0
  01fefd4  li 7, 0
  01fefd8  li 8, 2
  01fefdc  bl 0x11a560
  01fefe0  nop
  01fefe4  ori 3, 31, 0
  01fefe8  std 27, 112(1)
  01fefec  ori 10, 27, 0
  01feff0  fmr 1, 31
  01feff4  li 4, 1572
  01feff8  std 27, 120(1)
  01feffc  ori 5, 30, 0
  01ff000  ori 6, 28, 0
  01ff004  li 7, 0
  01ff008  li 8, 2
  01ff00c  bl 0x11a560
  01ff010  nop
  01ff014  ori 3, 31, 0
  01ff018  li 4, 0
  01ff01c  li 5, -1
  01ff020  bl 0xfd8d0
  01ff024  nop
  01ff028  ori 3, 31, 0
  01ff02c  bl 0xefb38
  01ff030  nop
  01ff034  b 0x1ff19c
  01ff038  lbz 3, 32(31)
  01ff03c  cmpwi 1, 3, 5
  01ff040  cmpwi 3, 3
  01ff044  cror 2, 2, 6
  01ff048  bt 2, 0x1ff05c
  01ff04c  cmpwi 3, 7
  01ff050  bt 2, 0x1ff05c
  01ff054  cmpwi 3, 8
  01ff058  bf 2, 0x1ff150
  01ff05c  lis 4, 32
  01ff060  addic 3, 31, 16
  01ff064  addi 5, 4, -13148
  01ff068  li 4, 0
  01ff06c  lfs 1, 136(5)
  01ff070  bl 0xffb70
  01ff074  nop
  01ff078  lfs 2, 24(31)
  01ff07c  fcmpu 0, 2, 1
  01ff080  cror 6, 0, 2
  01ff084  bt 6, 0x1ff150
  01ff088  lfs 3, 120(30)
  01ff08c  lis 3, 32
  01ff090  lfs 2, 128(30)
  01ff094  lis 4, 114
  01ff098  addi 3, 3, -13148
  01ff09c  fsubs 3, 3, 2
  01ff0a0  stfs 3, 120(30)
  01ff0a4  lfs 2, 180(3)
  01ff0a8  lfs 4, -3052(4)
  01ff0ac  fmuls 2, 4, 2
  01ff0b0  fcmpu 0, 3, 2
  01ff0b4  cror 6, 1, 2
  01ff0b8  bt 6, 0x1ff0c4
  01ff0bc  fmr 3, 2
  01ff0c0  stfs 2, 120(30)
  01ff0c4  lfs 2, 24(31)
  01ff0c8  fadds 2, 2, 3
  01ff0cc  fcmpu 0, 2, 1
  01ff0d0  stfs 2, 24(31)
  01ff0d4  cror 6, 1, 2
  01ff0d8  bt 6, 0x1ff0e0
  01ff0dc  stfs 1, 24(31)
  01ff0e0  lis 3, 32
  01ff0e4  lfs 2, 376(30)
  01ff0e8  addi 3, 3, -13148
  01ff0ec  lfs 3, 68(3)
  01ff0f0  fsubs 2, 2, 3
  01ff0f4  fcmpu 0, 1, 2
  01ff0f8  cror 6, 1, 2
  01ff0fc  bt 6, 0x1ff150
  01ff100  lbz 3, 83(31)
  01ff104  cmpwi 3, 14
  01ff108  bt 2, 0x1ff148
  01ff10c  lis 3, 32
  01ff110  lis 4, 114
  01ff114  addi 3, 3, -13148
  01ff118  li 5, 0
  01ff11c  lfs 1, 152(3)
  01ff120  lfs 2, -3056(4)
  01ff124  ori 3, 31, 0
  01ff128  li 4, 14
  01ff12c  fmuls 1, 2, 1
  01ff130  fctiwz 1, 1
  01ff134  stfd 1, 448(1)
  01ff138  lwz 6, 452(1)
  01ff13c  extsw 6, 6
  01ff140  bl 0xfddc0
  01ff144  nop
  01ff148  li 3, 12
  01ff14c  stb 3, 32(31)
  01ff150  lbz 3, 49(31)
  01ff154  cmpwi 3, 0
  01ff158  bt 2, 0x1ff19c
  01ff15c  lis 4, 149
  01ff160  addic 3, 31, 16
  01ff164  addic 4, 4, 5376
  01ff168  bl 0x5e8548
  01ff16c  nop
  01ff170  lis 3, 32
  01ff174  addi 3, 3, -13148
  01ff178  lfs 2, 184(3)
  01ff17c  fcmpu 0, 1, 2
  01ff180  cror 6, 1, 2
  01ff184  bt 6, 0x1ff19c
  01ff188  ori 3, 31, 0
  01ff18c  bl 0x106360
  01ff190  nop
  01ff194  li 3, 14
  01ff198  stb 3, 127(31)
  01ff19c  ld 0, 592(1)
  01ff1a0  mtlr 0
  01ff1a4  lfd 26, 528(1)
  01ff1a8  lfd 27, 536(1)
  01ff1ac  lfd 28, 544(1)
  01ff1b0  lfd 29, 552(1)
  01ff1b4  lfd 30, 560(1)
  01ff1b8  lfd 31, 568(1)
  01ff1bc  ld 24, 464(1)
  01ff1c0  ld 25, 472(1)
  01ff1c4  ld 26, 480(1)
  01ff1c8  ld 27, 488(1)
  01ff1cc  ld 28, 496(1)
  01ff1d0  ld 29, 504(1)
  01ff1d4  ld 30, 512(1)
  01ff1d8  ld 31, 520(1)
  01ff1dc  addi 1, 1, 576
  01ff1e0  blr
