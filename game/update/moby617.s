# game/update/moby617.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M617_003deb50:   # 0x3deb50, 0x400 bytes
  03deb50  stdu 1, -368(1)
  03deb54  mflr 0
  03deb58  std 0, 384(1)
  03deb5c  stfd 18, 256(1)
  03deb60  stfd 19, 264(1)
  03deb64  stfd 20, 272(1)
  03deb68  stfd 21, 280(1)
  03deb6c  stfd 22, 288(1)
  03deb70  stfd 23, 296(1)
  03deb74  stfd 24, 304(1)
  03deb78  stfd 25, 312(1)
  03deb7c  stfd 26, 320(1)
  03deb80  stfd 27, 328(1)
  03deb84  stfd 28, 336(1)
  03deb88  stfd 29, 344(1)
  03deb8c  stfd 30, 352(1)
  03deb90  stfd 31, 360(1)
  03deb94  fmr 31, 1
  03deb98  lis 3, 62
  03deb9c  fmr 1, 2
  03deba0  std 30, 240(1)
  03deba4  fmr 30, 4
  03deba8  std 28, 224(1)
  03debac  ori 30, 8, 0
  03debb0  addi 28, 3, -5344
  03debb4  std 31, 248(1)
  03debb8  fmr 29, 3
  03debbc  ori 31, 7, 0
  03debc0  std 29, 232(1)
  03debc4  std 27, 216(1)
  03debc8  std 26, 208(1)
  03debcc  std 25, 200(1)
  03debd0  fmr 2, 31
  03debd4  bl 0x5025e0
  03debd8  nop
  03debdc  lis 3, 133
  03debe0  lfs 21, 0(28)
  03debe4  lis 4, 133
  03debe8  stw 30, 156(1)
  03debec  lis 5, 133
  03debf0  fmuls 21, 1, 21
  03debf4  lis 6, 133
  03debf8  li 29, 0
  03debfc  lwz 3, 15200(3)
  03dec00  lwz 4, 15208(4)
  03dec04  lwz 5, 15204(5)
  03dec08  stw 3, 160(1)
  03dec0c  stw 5, 164(1)
  03dec10  lwz 3, 15212(6)
  03dec14  stw 4, 168(1)
  03dec18  stw 3, 172(1)
  03dec1c  stw 30, 152(1)
  03dec20  stw 30, 148(1)
  03dec24  stw 30, 144(1)
  03dec28  ld 30, 8(28)
  03dec2c  lfs 1, 44(28)
  03dec30  lfs 22, 16(28)
  03dec34  lfs 23, 20(28)
  03dec38  fmuls 29, 29, 1
  03dec3c  lfs 24, 24(28)
  03dec40  fmuls 30, 30, 1
  03dec44  lfs 25, 28(28)
  03dec48  lfs 26, 32(28)
  03dec4c  lfs 27, 36(28)
  03dec50  lfs 28, 40(28)
  03dec54  extsw 3, 29
  03dec58  fmr 1, 31
  03dec5c  std 3, 176(1)
  03dec60  lfd 2, 176(1)
  03dec64  fcfid 2, 2
  03dec68  frsp 2, 2
  03dec6c  fmuls 2, 2, 21
  03dec70  bl 0x502578
  03dec74  nop
  03dec78  addic 29, 29, 1
  03dec7c  extsw 3, 29
  03dec80  fmr 20, 1
  03dec84  fmr 1, 31
  03dec88  std 3, 176(1)
  03dec8c  lfd 2, 176(1)
  03dec90  fcfid 2, 2
  03dec94  frsp 2, 2
  03dec98  fmuls 2, 2, 21
  03dec9c  bl 0x502578
  03deca0  nop
  03deca4  fadds 2, 20, 22
  03deca8  fmr 19, 1
  03decac  std 30, 112(1)
  03decb0  std 30, 120(1)
  03decb4  std 30, 128(1)
  03decb8  std 30, 136(1)
  03decbc  fsubs 3, 23, 2
  03decc0  fsubs 4, 24, 2
  03decc4  fsub 5, 2, 3
  03decc8  fsel 2, 5, 3, 2
  03deccc  fsub 3, 4, 2
  03decd0  fsel 2, 3, 4, 2
  03decd4  fmuls 1, 2, 2
  03decd8  fmuls 3, 1, 2
  03decdc  fmuls 4, 1, 3
  03dece0  fmadds 2, 3, 25, 2
  03dece4  fmuls 3, 1, 4
  03dece8  fmadds 2, 4, 26, 2
  03decec  fmuls 1, 1, 3
  03decf0  fmadds 2, 3, 27, 2
  03decf4  fmadds 18, 1, 28, 2
  03decf8  fmuls 1, 18, 29
  03decfc  bl 0x502758
  03ded00  nop
  03ded04  fsubs 1, 23, 20
  03ded08  fsubs 2, 24, 20
  03ded0c  slwi 3, 3, 16
  03ded10  lis 28, -32768
  03ded14  neg 3, 3
  03ded18  subc 3, 3, 28
  03ded1c  fsub 3, 20, 1
  03ded20  clrldi 3, 3, 32
  03ded24  addc 27, 3, 30
  03ded28  std 27, 112(1)
  03ded2c  fsel 1, 3, 1, 20
  03ded30  fsub 3, 2, 1
  03ded34  fsel 1, 3, 2, 1
  03ded38  fmuls 2, 1, 1
  03ded3c  fmuls 3, 2, 1
  03ded40  fmuls 4, 2, 3
  03ded44  fmadds 1, 3, 25, 1
  03ded48  fmuls 3, 2, 4
  03ded4c  fmadds 1, 4, 26, 1
  03ded50  fmuls 2, 2, 3
  03ded54  fmadds 1, 3, 27, 1
  03ded58  fmadds 20, 2, 28, 1
  03ded5c  fmuls 1, 20, 29
  03ded60  bl 0x502758
  03ded64  nop
  03ded68  lis 4, 0
  03ded6c  ld 25, 120(1)
  03ded70  ori 26, 4, 32768
  03ded74  fmuls 1, 18, 30
  03ded78  addc 3, 3, 26
  03ded7c  extsw 3, 3
  03ded80  addc 3, 27, 3
  03ded84  std 3, 112(1)
  03ded88  bl 0x502758
  03ded8c  nop
  03ded90  slwi 3, 3, 16
  03ded94  fmuls 1, 20, 30
  03ded98  neg 3, 3
  03ded9c  subc 3, 3, 28
  03deda0  clrldi 3, 3, 32
  03deda4  addc 27, 25, 3
  03deda8  std 27, 120(1)
  03dedac  bl 0x502758
  03dedb0  nop
  03dedb4  fadds 1, 19, 22
  03dedb8  addc 3, 3, 26
  03dedbc  extsw 3, 3
  03dedc0  addc 3, 27, 3
  03dedc4  ld 27, 128(1)
  03dedc8  fsubs 2, 23, 1
  03dedcc  fsubs 3, 24, 1
  03dedd0  std 3, 120(1)
  03dedd4  fsub 4, 1, 2
  03dedd8  fsel 1, 4, 2, 1
  03deddc  fsub 2, 3, 1
  03dede0  fsel 1, 2, 3, 1
  03dede4  fmuls 2, 1, 1
  03dede8  fmuls 3, 2, 1
  03dedec  fmuls 4, 2, 3
  03dedf0  fmadds 1, 3, 25, 1
  03dedf4  fmuls 3, 2, 4
  03dedf8  fmadds 1, 4, 26, 1
  03dedfc  fmuls 2, 2, 3
  03dee00  fmadds 1, 3, 27, 1
  03dee04  fmadds 20, 2, 28, 1
  03dee08  fmuls 1, 20, 29
  03dee0c  bl 0x502758
  03dee10  nop
  03dee14  fsubs 1, 23, 19
  03dee18  fsubs 2, 24, 19
  03dee1c  slwi 3, 3, 16
  03dee20  neg 3, 3
  03dee24  subc 3, 3, 28
  03dee28  fsub 3, 19, 1
  03dee2c  clrldi 3, 3, 32
  03dee30  addc 27, 27, 3
  03dee34  fsel 1, 3, 1, 19
  03dee38  std 27, 128(1)
  03dee3c  fsub 3, 2, 1
  03dee40  fsel 1, 3, 2, 1
  03dee44  fmuls 2, 1, 1
  03dee48  fmuls 3, 2, 1
  03dee4c  fmuls 4, 2, 3
  03dee50  fmadds 1, 3, 25, 1
  03dee54  fmuls 3, 2, 4
  03dee58  fmadds 1, 4, 26, 1
  03dee5c  fmuls 2, 2, 3
  03dee60  fmadds 1, 3, 27, 1
  03dee64  fmadds 19, 2, 28, 1
  03dee68  fmuls 1, 19, 29
  03dee6c  bl 0x502758
  03dee70  nop
  03dee74  addc 3, 3, 26
  03dee78  ld 25, 136(1)
  03dee7c  fmuls 1, 20, 30
  03dee80  extsw 3, 3
  03dee84  addc 3, 27, 3
  03dee88  std 3, 128(1)
  03dee8c  bl 0x502758
  03dee90  nop
  03dee94  slwi 3, 3, 16
  03dee98  fmuls 1, 19, 30
  03dee9c  neg 3, 3
  03deea0  subc 3, 3, 28
  03deea4  clrldi 3, 3, 32
  03deea8  addc 28, 25, 3
  03deeac  std 28, 136(1)
  03deeb0  bl 0x502758
  03deeb4  nop
  03deeb8  addc 3, 3, 26
  03deebc  li 7, 1
  03deec0  extsw 3, 3
  03deec4  addic 4, 1, 160
  03deec8  addc 6, 28, 3
  03deecc  addic 3, 1, 112
  03deed0  addic 5, 1, 144
  03deed4  std 6, 136(1)
  03deed8  ori 6, 31, 0
  03deedc  bl 0x6ecf8
  03deee0  nop
  03deee4  cmpwi 29, 5
  03deee8  bt 0, 0x3dec54
  03deeec  ld 0, 384(1)
  03deef0  mtlr 0
  03deef4  lfd 18, 256(1)
  03deef8  lfd 19, 264(1)
  03deefc  lfd 20, 272(1)
  03def00  lfd 21, 280(1)
  03def04  lfd 22, 288(1)
  03def08  lfd 23, 296(1)
  03def0c  lfd 24, 304(1)
  03def10  lfd 25, 312(1)
  03def14  lfd 26, 320(1)
  03def18  lfd 27, 328(1)
  03def1c  lfd 28, 336(1)
  03def20  lfd 29, 344(1)
  03def24  lfd 30, 352(1)
  03def28  lfd 31, 360(1)
  03def2c  ld 25, 200(1)
  03def30  ld 26, 208(1)
  03def34  ld 27, 216(1)
  03def38  ld 28, 224(1)
  03def3c  ld 29, 232(1)
  03def40  ld 30, 240(1)
  03def44  ld 31, 248(1)
  03def48  addi 1, 1, 368
  03def4c  blr

M617_003def78:   # 0x3def78, 0x3f0 bytes
  03def78  stdu 1, -368(1)
  03def7c  mflr 0
  03def80  std 0, 384(1)
  03def84  stfd 23, 296(1)
  03def88  stfd 24, 304(1)
  03def8c  stfd 25, 312(1)
  03def90  stfd 26, 320(1)
  03def94  stfd 27, 328(1)
  03def98  stfd 28, 336(1)
  03def9c  stfd 29, 344(1)
  03defa0  stfd 30, 352(1)
  03defa4  stfd 31, 360(1)
  03defa8  cmpwi 7, 0
  03defac  cmpwi 1, 7, 1
  03defb0  fmr 30, 1
  03defb4  cmpwi 6, 7, -1
  03defb8  std 31, 288(1)
  03defbc  std 30, 280(1)
  03defc0  std 29, 272(1)
  03defc4  std 28, 264(1)
  03defc8  fmr 31, 2
  03defcc  bt 1, 0x3defd8
  03defd0  bf 25, 0x3df048
  03defd4  b 0x3defe0
  03defd8  bf 5, 0x3df014
  03defdc  b 0x3df048
  03defe0  lis 3, 133
  03defe4  lis 4, 269
  03defe8  lis 5, 133
  03defec  lis 6, 133
  03deff0  lwz 3, 15128(3)
  03deff4  lwz 4, -20508(4)
  03deff8  stw 3, 240(1)
  03deffc  lwz 3, 15132(5)
  03df000  stw 4, 244(1)
  03df004  lwz 4, 15136(6)
  03df008  stw 3, 248(1)
  03df00c  stw 4, 252(1)
  03df010  b 0x3df078
  03df014  lis 3, 133
  03df018  lis 4, 133
  03df01c  lis 5, 133
  03df020  lis 6, 133
  03df024  lwz 3, 15140(3)
  03df028  lwz 4, 15152(4)
  03df02c  lwz 5, 15144(5)
  03df030  stw 3, 240(1)
  03df034  lwz 3, 15148(6)
  03df038  stw 5, 244(1)
  03df03c  stw 3, 248(1)
  03df040  stw 4, 252(1)
  03df044  b 0x3df078
  03df048  lis 3, 133
  03df04c  lis 4, 133
  03df050  lis 5, 133
  03df054  lis 6, 133
  03df058  lwz 3, 15156(3)
  03df05c  lwz 4, 15160(4)
  03df060  stw 3, 240(1)
  03df064  lwz 3, 15164(5)
  03df068  stw 4, 244(1)
  03df06c  lwz 4, 15168(6)
  03df070  stw 3, 248(1)
  03df074  stw 4, 252(1)
  03df078  lis 3, 133
  03df07c  lis 4, 62
  03df080  addi 31, 4, -4272
  03df084  lwz 3, 15500(3)
  03df088  stw 3, 236(1)
  03df08c  stw 3, 232(1)
  03df090  stw 3, 228(1)
  03df094  lfs 1, 0(31)
  03df098  lfs 29, 4(31)
  03df09c  fadds 1, 30, 1
  03df0a0  lfs 28, 8(31)
  03df0a4  lfs 27, 12(31)
  03df0a8  lfs 26, 16(31)
  03df0ac  lfs 25, 20(31)
  03df0b0  lfs 24, 24(31)
  03df0b4  lfs 23, 28(31)
  03df0b8  fsubs 2, 29, 1
  03df0bc  fsubs 3, 28, 1
  03df0c0  stw 3, 224(1)
  03df0c4  fsub 5, 1, 2
  03df0c8  fsel 1, 5, 2, 1
  03df0cc  fsub 2, 3, 1
  03df0d0  fsel 1, 2, 3, 1
  03df0d4  fmuls 3, 1, 1
  03df0d8  fmuls 2, 3, 1
  03df0dc  fmuls 4, 3, 2
  03df0e0  fmadds 1, 2, 27, 1
  03df0e4  fmuls 2, 3, 4
  03df0e8  fmadds 1, 4, 26, 1
  03df0ec  fmuls 3, 3, 2
  03df0f0  fmadds 1, 2, 25, 1
  03df0f4  fmadds 1, 3, 24, 1
  03df0f8  fmuls 1, 1, 31
  03df0fc  fmuls 1, 1, 23
  03df100  bl 0x502758
  03df104  nop
  03df108  fsubs 1, 29, 30
  03df10c  fsubs 2, 28, 30
  03df110  slwi 3, 3, 16
  03df114  ld 4, 32(31)
  03df118  lis 5, -32768
  03df11c  extsw 3, 3
  03df120  subc 3, 4, 3
  03df124  clrldi 4, 5, 32
  03df128  fsub 3, 30, 1
  03df12c  addc 31, 3, 4
  03df130  fsel 1, 3, 1, 30
  03df134  fsub 3, 2, 1
  03df138  fsel 1, 3, 2, 1
  03df13c  fmuls 2, 1, 1
  03df140  fmuls 3, 2, 1
  03df144  fmuls 4, 2, 3
  03df148  fmadds 1, 3, 27, 1
  03df14c  fmuls 3, 2, 4
  03df150  fmadds 1, 4, 26, 1
  03df154  fmuls 2, 2, 3
  03df158  fmadds 1, 3, 25, 1
  03df15c  fmadds 1, 2, 24, 1
  03df160  fmuls 1, 1, 31
  03df164  fmuls 1, 1, 23
  03df168  bl 0x502758
  03df16c  nop
  03df170  lis 4, 0
  03df174  fneg 1, 30
  03df178  addc 3, 31, 3
  03df17c  li 5, 0
  03df180  ori 6, 4, 32768
  03df184  addic 31, 1, 128
  03df188  addc 6, 3, 6
  03df18c  stw 5, 124(1)
  03df190  addic 4, 1, 112
  03df194  stw 5, 116(1)
  03df198  ori 3, 31, 0
  03df19c  std 6, 216(1)
  03df1a0  std 6, 208(1)
  03df1a4  std 6, 200(1)
  03df1a8  std 6, 192(1)
  03df1ac  stw 5, 112(1)
  03df1b0  stfs 1, 120(1)
  03df1b4  bl 0x500ca4
  03df1b8  nop
  03df1bc  lis 5, 269
  03df1c0  ori 3, 31, 0
  03df1c4  addic 5, 5, -20496
  03df1c8  ori 4, 31, 0
  03df1cc  bl 0x50162c
  03df1d0  nop
  03df1d4  lfs 1, 128(1)
  03df1d8  ld 31, 192(1)
  03df1dc  fmuls 1, 1, 23
  03df1e0  bl 0x502758
  03df1e4  nop
  03df1e8  slwi 3, 3, 16
  03df1ec  lfs 1, 132(1)
  03df1f0  extsw 3, 3
  03df1f4  fmuls 1, 1, 23
  03df1f8  addc 31, 31, 3
  03df1fc  std 31, 192(1)
  03df200  bl 0x502758
  03df204  nop
  03df208  addc 3, 31, 3
  03df20c  lfs 1, 144(1)
  03df210  ld 31, 200(1)
  03df214  fmuls 1, 1, 23
  03df218  std 3, 192(1)
  03df21c  bl 0x502758
  03df220  nop
  03df224  slwi 3, 3, 16
  03df228  lfs 1, 148(1)
  03df22c  extsw 3, 3
  03df230  fmuls 1, 1, 23
  03df234  addc 31, 31, 3
  03df238  std 31, 200(1)
  03df23c  bl 0x502758
  03df240  nop
  03df244  addc 3, 31, 3
  03df248  lfs 1, 160(1)
  03df24c  ld 31, 208(1)
  03df250  fmuls 1, 1, 23
  03df254  std 3, 200(1)
  03df258  bl 0x502758
  03df25c  nop
  03df260  slwi 3, 3, 16
  03df264  lfs 1, 164(1)
  03df268  extsw 3, 3
  03df26c  fmuls 1, 1, 23
  03df270  addc 31, 31, 3
  03df274  std 31, 208(1)
  03df278  bl 0x502758
  03df27c  nop
  03df280  addc 3, 31, 3
  03df284  lfs 1, 176(1)
  03df288  ld 31, 216(1)
  03df28c  fmuls 1, 1, 23
  03df290  std 3, 208(1)
  03df294  bl 0x502758
  03df298  nop
  03df29c  slwi 3, 3, 16
  03df2a0  lfs 1, 180(1)
  03df2a4  extsw 3, 3
  03df2a8  fmuls 1, 1, 23
  03df2ac  addc 31, 31, 3
  03df2b0  std 31, 216(1)
  03df2b4  bl 0x502758
  03df2b8  nop
  03df2bc  lis 4, 133
  03df2c0  addc 3, 31, 3
  03df2c4  lwz 4, 15216(4)
  03df2c8  std 3, 216(1)
  03df2cc  addic 3, 4, 41
  03df2d0  extsw 3, 3
  03df2d4  bl 0x685c4
  03df2d8  nop
  03df2dc  ori 31, 3, 0
  03df2e0  addic 30, 1, 192
  03df2e4  addic 29, 1, 240
  03df2e8  addic 28, 1, 224
  03df2ec  ori 3, 30, 0
  03df2f0  ori 4, 29, 0
  03df2f4  ori 6, 31, 0
  03df2f8  ori 5, 28, 0
  03df2fc  li 7, 1
  03df300  bl 0x6ecf8
  03df304  nop
  03df308  ori 3, 30, 0
  03df30c  ori 4, 29, 0
  03df310  ori 5, 28, 0
  03df314  ori 6, 31, 0
  03df318  li 7, 1
  03df31c  bl 0x6ecf8
  03df320  nop
  03df324  ld 0, 384(1)
  03df328  mtlr 0
  03df32c  lfd 23, 296(1)
  03df330  lfd 24, 304(1)
  03df334  lfd 25, 312(1)
  03df338  lfd 26, 320(1)
  03df33c  lfd 27, 328(1)
  03df340  lfd 28, 336(1)
  03df344  lfd 29, 344(1)
  03df348  lfd 30, 352(1)
  03df34c  lfd 31, 360(1)
  03df350  ld 28, 264(1)
  03df354  ld 29, 272(1)
  03df358  ld 30, 280(1)
  03df35c  ld 31, 288(1)
  03df360  addi 1, 1, 368
  03df364  blr

M617_003df398:   # 0x3df398, 0x544 bytes
  03df398  stdu 1, -352(1)
  03df39c  mflr 0
  03df3a0  std 0, 368(1)
  03df3a4  stfd 21, 264(1)
  03df3a8  stfd 22, 272(1)
  03df3ac  stfd 23, 280(1)
  03df3b0  stfd 24, 288(1)
  03df3b4  stfd 25, 296(1)
  03df3b8  stfd 26, 304(1)
  03df3bc  stfd 27, 312(1)
  03df3c0  stfd 28, 320(1)
  03df3c4  stfd 29, 328(1)
  03df3c8  stfd 30, 336(1)
  03df3cc  stfd 31, 344(1)
  03df3d0  lis 3, 161
  03df3d4  lis 4, 133
  03df3d8  fmr 30, 1
  03df3dc  std 31, 256(1)
  03df3e0  fmr 29, 2
  03df3e4  ori 31, 7, 0
  03df3e8  fmr 31, 3
  03df3ec  lwz 3, 1808(3)
  03df3f0  extsw 3, 3
  03df3f4  std 3, 176(1)
  03df3f8  lfs 1, 15284(4)
  03df3fc  lis 3, 62
  03df400  std 30, 248(1)
  03df404  lfd 2, 176(1)
  03df408  addi 30, 3, -3224
  03df40c  fcfid 2, 2
  03df410  frsp 2, 2
  03df414  std 29, 240(1)
  03df418  std 28, 232(1)
  03df41c  std 27, 224(1)
  03df420  std 26, 216(1)
  03df424  std 25, 208(1)
  03df428  std 24, 200(1)
  03df42c  fmuls 1, 2, 1
  03df430  bl 0x502758
  03df434  nop
  03df438  srawi 4, 3, 9
  03df43c  lis 5, 133
  03df440  addze 4, 4
  03df444  lis 6, 133
  03df448  sldi 4, 4, 9
  03df44c  lis 7, 133
  03df450  subc 3, 3, 4
  03df454  lwz 4, 15172(5)
  03df458  sldi 3, 3, 16
  03df45c  lwz 5, 15176(6)
  03df460  addc 4, 4, 3
  03df464  lwz 6, 15180(7)
  03df468  addc 5, 5, 3
  03df46c  addc 6, 6, 3
  03df470  stw 4, 160(1)
  03df474  stw 5, 164(1)
  03df478  stw 6, 168(1)
  03df47c  lfs 1, 0(30)
  03df480  lfs 2, 24(30)
  03df484  fsubs 4, 1, 30
  03df488  lfs 3, 4(30)
  03df48c  fadds 2, 30, 2
  03df490  fsubs 5, 3, 30
  03df494  lfs 7, 8(30)
  03df498  lis 4, 269
  03df49c  fsub 6, 30, 4
  03df4a0  fsubs 1, 1, 2
  03df4a4  fsubs 3, 3, 2
  03df4a8  fsel 4, 6, 4, 30
  03df4ac  fsub 6, 2, 1
  03df4b0  fsub 9, 5, 4
  03df4b4  fsel 1, 6, 1, 2
  03df4b8  lfs 2, 12(30)
  03df4bc  lfs 6, 16(30)
  03df4c0  fsel 4, 9, 5, 4
  03df4c4  fsub 5, 3, 1
  03df4c8  fmuls 8, 4, 4
  03df4cc  fsel 1, 5, 3, 1
  03df4d0  lfs 3, 20(30)
  03df4d4  lwz 4, -20504(4)
  03df4d8  lfs 11, 28(30)
  03df4dc  addc 3, 4, 3
  03df4e0  ld 4, 32(30)
  03df4e4  stw 31, 144(1)
  03df4e8  fmuls 5, 8, 4
  03df4ec  fmuls 9, 1, 1
  03df4f0  ori 29, 4, 0
  03df4f4  stw 31, 148(1)
  03df4f8  stw 31, 152(1)
  03df4fc  stw 31, 156(1)
  03df500  std 29, 136(1)
  03df504  std 29, 128(1)
  03df508  std 29, 120(1)
  03df50c  std 29, 112(1)
  03df510  fmuls 10, 8, 5
  03df514  fmadds 4, 5, 7, 4
  03df518  fmuls 5, 9, 1
  03df51c  stw 3, 172(1)
  03df520  fmuls 12, 8, 10
  03df524  fmadds 4, 10, 2, 4
  03df528  fmuls 10, 9, 5
  03df52c  fmadds 1, 5, 7, 1
  03df530  fmr 5, 11
  03df534  fmuls 7, 8, 12
  03df538  fmadds 4, 12, 6, 4
  03df53c  fmuls 8, 9, 10
  03df540  fmadds 1, 10, 2, 1
  03df544  fmadds 30, 7, 3, 4
  03df548  fmuls 2, 9, 8
  03df54c  fmadds 1, 8, 6, 1
  03df550  fmadds 28, 2, 3, 1
  03df554  fmuls 2, 30, 5
  03df558  fmuls 3, 28, 5
  03df55c  fmsubs 1, 28, 29, 2
  03df560  fmadds 27, 28, 29, 2
  03df564  fmsubs 26, 28, 31, 2
  03df568  fmadds 25, 28, 31, 2
  03df56c  fmadds 24, 30, 29, 3
  03df570  fmsubs 23, 30, 29, 3
  03df574  fmadds 22, 30, 31, 3
  03df578  fmsubs 21, 30, 31, 3
  03df57c  bl 0x502758
  03df580  nop
  03df584  slwi 3, 3, 20
  03df588  fmr 1, 24
  03df58c  lis 31, -32768
  03df590  neg 3, 3
  03df594  subc 3, 3, 31
  03df598  clrldi 3, 3, 32
  03df59c  addc 28, 3, 29
  03df5a0  std 28, 112(1)
  03df5a4  bl 0x502758
  03df5a8  nop
  03df5ac  lis 4, 0
  03df5b0  ld 26, 120(1)
  03df5b4  slwi 3, 3, 4
  03df5b8  fmr 1, 27
  03df5bc  ori 27, 4, 32768
  03df5c0  addc 3, 3, 27
  03df5c4  extsw 3, 3
  03df5c8  addc 3, 28, 3
  03df5cc  std 3, 112(1)
  03df5d0  bl 0x502758
  03df5d4  nop
  03df5d8  slwi 3, 3, 20
  03df5dc  fmr 1, 23
  03df5e0  neg 3, 3
  03df5e4  subc 3, 3, 31
  03df5e8  clrldi 3, 3, 32
  03df5ec  addc 28, 26, 3
  03df5f0  std 28, 120(1)
  03df5f4  bl 0x502758
  03df5f8  nop
  03df5fc  slwi 3, 3, 4
  03df600  ld 26, 128(1)
  03df604  fmr 1, 26
  03df608  addc 3, 3, 27
  03df60c  extsw 3, 3
  03df610  addc 3, 28, 3
  03df614  std 3, 120(1)
  03df618  bl 0x502758
  03df61c  nop
  03df620  slwi 3, 3, 20
  03df624  fmr 1, 22
  03df628  neg 3, 3
  03df62c  subc 3, 3, 31
  03df630  clrldi 3, 3, 32
  03df634  addc 28, 26, 3
  03df638  std 28, 128(1)
  03df63c  bl 0x502758
  03df640  nop
  03df644  slwi 3, 3, 4
  03df648  ld 26, 136(1)
  03df64c  fmr 1, 25
  03df650  addc 3, 3, 27
  03df654  extsw 3, 3
  03df658  addc 3, 28, 3
  03df65c  std 3, 128(1)
  03df660  bl 0x502758
  03df664  nop
  03df668  slwi 3, 3, 20
  03df66c  fmr 1, 21
  03df670  neg 3, 3
  03df674  subc 3, 3, 31
  03df678  clrldi 3, 3, 32
  03df67c  addc 28, 26, 3
  03df680  std 28, 136(1)
  03df684  bl 0x502758
  03df688  nop
  03df68c  slwi 3, 3, 4
  03df690  lis 4, 133
  03df694  addc 3, 3, 27
  03df698  extsw 3, 3
  03df69c  addc 5, 28, 3
  03df6a0  lwz 3, 15288(4)
  03df6a4  extsw 3, 3
  03df6a8  std 5, 136(1)
  03df6ac  bl 0x685c4
  03df6b0  nop
  03df6b4  addic 26, 1, 112
  03df6b8  ori 28, 3, 0
  03df6bc  addic 25, 1, 160
  03df6c0  addic 24, 1, 144
  03df6c4  ori 3, 26, 0
  03df6c8  ori 4, 25, 0
  03df6cc  ori 6, 28, 0
  03df6d0  ori 5, 24, 0
  03df6d4  li 7, 0
  03df6d8  bl 0x6ecf8
  03df6dc  nop
  03df6e0  lis 3, 133
  03df6e4  lis 4, 133
  03df6e8  lis 5, 133
  03df6ec  lwz 3, 15184(3)
  03df6f0  lwz 4, 15188(4)
  03df6f4  stw 3, 160(1)
  03df6f8  lwz 3, 15192(5)
  03df6fc  stw 4, 164(1)
  03df700  stw 3, 168(1)
  03df704  lfs 1, 40(30)
  03df708  lis 3, 133
  03df70c  std 29, 136(1)
  03df710  fmuls 2, 28, 1
  03df714  fmuls 3, 30, 1
  03df718  std 29, 128(1)
  03df71c  std 29, 120(1)
  03df720  lwz 3, 15196(3)
  03df724  std 29, 112(1)
  03df728  stw 3, 172(1)
  03df72c  fmadds 27, 30, 29, 2
  03df730  fmsubs 26, 30, 29, 2
  03df734  fmadds 25, 30, 31, 2
  03df738  fmsubs 1, 28, 29, 3
  03df73c  fmsubs 30, 30, 31, 2
  03df740  fmsubs 24, 28, 31, 3
  03df744  fmadds 29, 28, 29, 3
  03df748  fmadds 31, 28, 31, 3
  03df74c  bl 0x502758
  03df750  nop
  03df754  slwi 3, 3, 20
  03df758  fmr 1, 27
  03df75c  neg 3, 3
  03df760  subc 3, 3, 31
  03df764  clrldi 3, 3, 32
  03df768  addc 30, 3, 29
  03df76c  std 30, 112(1)
  03df770  bl 0x502758
  03df774  nop
  03df778  slwi 3, 3, 4
  03df77c  ld 29, 120(1)
  03df780  addc 3, 3, 27
  03df784  fmr 1, 29
  03df788  extsw 3, 3
  03df78c  addc 3, 30, 3
  03df790  std 3, 112(1)
  03df794  bl 0x502758
  03df798  nop
  03df79c  slwi 3, 3, 20
  03df7a0  fmr 1, 26
  03df7a4  neg 3, 3
  03df7a8  subc 3, 3, 31
  03df7ac  clrldi 3, 3, 32
  03df7b0  addc 30, 29, 3
  03df7b4  std 30, 120(1)
  03df7b8  bl 0x502758
  03df7bc  nop
  03df7c0  slwi 3, 3, 4
  03df7c4  ld 29, 128(1)
  03df7c8  addc 3, 3, 27
  03df7cc  fmr 1, 24
  03df7d0  extsw 3, 3
  03df7d4  addc 3, 30, 3
  03df7d8  std 3, 120(1)
  03df7dc  bl 0x502758
  03df7e0  nop
  03df7e4  slwi 3, 3, 20
  03df7e8  fmr 1, 25
  03df7ec  neg 3, 3
  03df7f0  subc 3, 3, 31
  03df7f4  clrldi 3, 3, 32
  03df7f8  addc 30, 29, 3
  03df7fc  std 30, 128(1)
  03df800  bl 0x502758
  03df804  nop
  03df808  slwi 3, 3, 4
  03df80c  ld 29, 136(1)
  03df810  addc 3, 3, 27
  03df814  fmr 1, 31
  03df818  extsw 3, 3
  03df81c  addc 3, 30, 3
  03df820  std 3, 128(1)
  03df824  bl 0x502758
  03df828  nop
  03df82c  slwi 3, 3, 20
  03df830  fmr 1, 30
  03df834  neg 3, 3
  03df838  subc 3, 3, 31
  03df83c  clrldi 3, 3, 32
  03df840  addc 31, 29, 3
  03df844  std 31, 136(1)
  03df848  bl 0x502758
  03df84c  nop
  03df850  slwi 3, 3, 4
  03df854  ori 5, 24, 0
  03df858  addc 3, 3, 27
  03df85c  ori 6, 28, 0
  03df860  extsw 4, 3
  03df864  ori 3, 26, 0
  03df868  addc 8, 31, 4
  03df86c  ori 4, 25, 0
  03df870  li 7, 0
  03df874  std 8, 136(1)
  03df878  bl 0x6ecf8
  03df87c  nop
  03df880  ld 0, 368(1)
  03df884  mtlr 0
  03df888  lfd 21, 264(1)
  03df88c  lfd 22, 272(1)
  03df890  lfd 23, 280(1)
  03df894  lfd 24, 288(1)
  03df898  lfd 25, 296(1)
  03df89c  lfd 26, 304(1)
  03df8a0  lfd 27, 312(1)
  03df8a4  lfd 28, 320(1)
  03df8a8  lfd 29, 328(1)
  03df8ac  lfd 30, 336(1)
  03df8b0  lfd 31, 344(1)
  03df8b4  ld 24, 200(1)
  03df8b8  ld 25, 208(1)
  03df8bc  ld 26, 216(1)
  03df8c0  ld 27, 224(1)
  03df8c4  ld 28, 232(1)
  03df8c8  ld 29, 240(1)
  03df8cc  ld 30, 248(1)
  03df8d0  ld 31, 256(1)
  03df8d4  addi 1, 1, 352
  03df8d8  blr

M617_003df8dc:   # 0x3df8dc, 0x114 bytes
  03df8dc  stdu 1, -224(1)
  03df8e0  mflr 0
  03df8e4  std 0, 240(1)
  03df8e8  std 28, 192(1)
  03df8ec  std 27, 184(1)
  03df8f0  lis 28, 133
  03df8f4  li 27, 0
  03df8f8  std 30, 208(1)
  03df8fc  std 29, 200(1)
  03df900  addic 28, 28, 15296
  03df904  addic 29, 28, 8
  03df908  std 31, 216(1)
  03df90c  addic 30, 28, 16
  03df910  addic 31, 28, 24
  03df914  lis 3, 269
  03df918  lis 4, 133
  03df91c  lis 6, 133
  03df920  lis 7, 133
  03df924  lis 5, 133
  03df928  lwz 3, -20512(3)
  03df92c  lis 8, 133
  03df930  lwz 4, 15116(4)
  03df934  stw 3, 160(1)
  03df938  lwz 3, 15120(6)
  03df93c  stw 4, 164(1)
  03df940  lwz 4, 15124(7)
  03df944  stw 3, 168(1)
  03df948  lwz 3, 15492(5)
  03df94c  stw 4, 172(1)
  03df950  stw 3, 156(1)
  03df954  stw 3, 152(1)
  03df958  ld 4, 0(28)
  03df95c  stw 3, 148(1)
  03df960  stw 3, 144(1)
  03df964  ld 3, 0(29)
  03df968  std 4, 112(1)
  03df96c  ld 4, 0(30)
  03df970  std 3, 120(1)
  03df974  ld 3, 0(31)
  03df978  lwz 5, 15216(8)
  03df97c  std 4, 128(1)
  03df980  std 3, 136(1)
  03df984  addic 3, 5, 40
  03df988  extsw 3, 3
  03df98c  bl 0x685c4
  03df990  nop
  03df994  ori 6, 3, 0
  03df998  addic 3, 1, 112
  03df99c  addic 4, 1, 160
  03df9a0  addic 5, 1, 144
  03df9a4  li 7, 1
  03df9a8  bl 0x6ecf8
  03df9ac  nop
  03df9b0  addic 27, 27, 1
  03df9b4  addic 28, 28, 32
  03df9b8  cmpwi 27, 4
  03df9bc  addic 29, 29, 32
  03df9c0  addic 30, 30, 32
  03df9c4  addic 31, 31, 32
  03df9c8  bt 0, 0x3df914
  03df9cc  ld 0, 240(1)
  03df9d0  mtlr 0
  03df9d4  ld 27, 184(1)
  03df9d8  ld 28, 192(1)
  03df9dc  ld 29, 200(1)
  03df9e0  ld 30, 208(1)
  03df9e4  ld 31, 216(1)
  03df9e8  addi 1, 1, 224
  03df9ec  blr

M617_003dfa30:   # 0x3dfa30, 0x1854 bytes
  03dfa30  stdu 1, -432(1)
  03dfa34  mflr 0
  03dfa38  std 0, 448(1)
  03dfa3c  stfd 20, 336(1)
  03dfa40  stfd 21, 344(1)
  03dfa44  stfd 22, 352(1)
  03dfa48  stfd 23, 360(1)
  03dfa4c  stfd 24, 368(1)
  03dfa50  stfd 25, 376(1)
  03dfa54  stfd 26, 384(1)
  03dfa58  stfd 27, 392(1)
  03dfa5c  stfd 28, 400(1)
  03dfa60  stfd 29, 408(1)
  03dfa64  stfd 30, 416(1)
  03dfa68  stfd 31, 424(1)
  03dfa6c  lis 4, 144
  03dfa70  std 30, 320(1)
  03dfa74  ori 30, 3, 0
  03dfa78  addic 5, 4, -23532
  03dfa7c  std 31, 328(1)
  03dfa80  lis 4, 4
  03dfa84  li 31, 1
  03dfa88  std 22, 256(1)
  03dfa8c  ori 6, 4, 772
  03dfa90  lis 22, 62
  03dfa94  lwz 7, 40(5)
  03dfa98  li 4, 68
  03dfa9c  addi 22, 22, -1552
  03dfaa0  lwz 3, 8(7)
  03dfaa4  stw 6, 0(3)
  03dfaa8  lwz 3, 8(7)
  03dfaac  stw 31, 4(3)
  03dfab0  lwz 3, 8(7)
  03dfab4  addic 3, 3, 8
  03dfab8  stw 3, 8(7)
  03dfabc  std 29, 312(1)
  03dfac0  std 28, 304(1)
  03dfac4  std 27, 296(1)
  03dfac8  std 26, 288(1)
  03dfacc  std 25, 280(1)
  03dfad0  std 24, 272(1)
  03dfad4  std 23, 264(1)
  03dfad8  std 21, 248(1)
  03dfadc  std 20, 240(1)
  03dfae0  std 19, 232(1)
  03dfae4  std 18, 224(1)
  03dfae8  std 17, 216(1)
  03dfaec  std 16, 208(1)
  03dfaf0  std 15, 200(1)
  03dfaf4  lwz 3, 40(5)
  03dfaf8  bl 0x4d5fe4
  03dfafc  nop
  03dfb00  li 3, 1
  03dfb04  li 4, 5
  03dfb08  lwz 30, 120(30)
  03dfb0c  li 10, 2
  03dfb10  li 5, 128
  03dfb14  li 6, 3
  03dfb18  li 7, 0
  03dfb1c  li 8, 0
  03dfb20  li 9, 1
  03dfb24  bl 0x502f7c
  03dfb28  nop
  03dfb2c  ori 4, 3, 0
  03dfb30  li 3, 22
  03dfb34  bl 0x174f80
  03dfb38  nop
  03dfb3c  li 3, 16
  03dfb40  bl 0x685c4
  03dfb44  nop
  03dfb48  lis 27, 133
  03dfb4c  li 28, 0
  03dfb50  addic 27, 27, 15296
  03dfb54  ori 29, 3, 0
  03dfb58  ori 19, 28, 0
  03dfb5c  addic 26, 27, 8
  03dfb60  addic 25, 27, 16
  03dfb64  addic 24, 27, 24
  03dfb68  lis 3, 269
  03dfb6c  lis 4, 133
  03dfb70  lis 6, 133
  03dfb74  lis 7, 133
  03dfb78  lis 5, 133
  03dfb7c  lwz 3, -20512(3)
  03dfb80  lis 8, 133
  03dfb84  lwz 4, 15116(4)
  03dfb88  stw 3, 160(1)
  03dfb8c  lwz 3, 15120(6)
  03dfb90  stw 4, 164(1)
  03dfb94  lwz 4, 15124(7)
  03dfb98  stw 3, 168(1)
  03dfb9c  lwz 3, 15492(5)
  03dfba0  stw 4, 172(1)
  03dfba4  stw 3, 156(1)
  03dfba8  stw 3, 152(1)
  03dfbac  ld 4, 0(27)
  03dfbb0  stw 3, 148(1)
  03dfbb4  stw 3, 144(1)
  03dfbb8  ld 3, 0(26)
  03dfbbc  std 4, 112(1)
  03dfbc0  ld 4, 0(25)
  03dfbc4  std 3, 120(1)
  03dfbc8  ld 3, 0(24)
  03dfbcc  lwz 5, 15216(8)
  03dfbd0  std 4, 128(1)
  03dfbd4  std 3, 136(1)
  03dfbd8  addic 3, 5, 40
  03dfbdc  extsw 3, 3
  03dfbe0  bl 0x685c4
  03dfbe4  nop
  03dfbe8  ori 6, 3, 0
  03dfbec  addic 3, 1, 112
  03dfbf0  addic 4, 1, 160
  03dfbf4  addic 5, 1, 144
  03dfbf8  li 7, 1
  03dfbfc  bl 0x6ecf8
  03dfc00  nop
  03dfc04  addic 28, 28, 1
  03dfc08  addic 27, 27, 32
  03dfc0c  cmpwi 28, 4
  03dfc10  addic 26, 26, 32
  03dfc14  addic 25, 25, 32
  03dfc18  addic 24, 24, 32
  03dfc1c  bt 0, 0x3dfb68
  03dfc20  ori 3, 19, 0
  03dfc24  ori 4, 30, 0
  03dfc28  lwz 5, 176(4)
  03dfc2c  cmpwi 5, 0
  03dfc30  bt 2, 0x3dfc38
  03dfc34  stw 31, 176(4)
  03dfc38  addic 3, 3, 1
  03dfc3c  addic 4, 4, 4
  03dfc40  cmpwi 3, 12
  03dfc44  bt 0, 0x3dfc28
  03dfc48  lis 3, 16032
  03dfc4c  ori 28, 19, 0
  03dfc50  ori 4, 3, 55676
  03dfc54  lwz 3, 228(30)
  03dfc58  ori 27, 28, 0
  03dfc5c  lfs 28, 0(22)
  03dfc60  srawi 5, 3, 31
  03dfc64  ori 26, 27, 0
  03dfc68  srwi 6, 5, 1
  03dfc6c  xor 3, 6, 3
  03dfc70  subc 3, 3, 5
  03dfc74  cmpw 3, 4
  03dfc78  bf 1, 0x3dfca8
  03dfc7c  lwz 3, 224(30)
  03dfc80  cmpwi 3, 1
  03dfc84  cmpwi 1, 3, 2
  03dfc88  bf 2, 0x3dfc94
  03dfc8c  ori 28, 31, 0
  03dfc90  b 0x3dfce4
  03dfc94  bf 6, 0x3dfca0
  03dfc98  ori 27, 31, 0
  03dfc9c  b 0x3dfce4
  03dfca0  ori 26, 31, 0
  03dfca4  b 0x3dfce4
  03dfca8  lis 4, -16033
  03dfcac  ori 4, 4, 9860
  03dfcb0  cmpw 3, 4
  03dfcb4  bf 0, 0x3dfce4
  03dfcb8  lwz 4, 224(30)
  03dfcbc  li 3, -1
  03dfcc0  cmpwi 4, 1
  03dfcc4  cmpwi 1, 4, 2
  03dfcc8  bf 2, 0x3dfcd4
  03dfccc  ori 28, 3, 0
  03dfcd0  b 0x3dfce4
  03dfcd4  bf 6, 0x3dfce0
  03dfcd8  ori 27, 3, 0
  03dfcdc  b 0x3dfce4
  03dfce0  ori 26, 3, 0
  03dfce4  ori 25, 19, 0
  03dfce8  lfs 30, 4(22)
  03dfcec  addic 16, 30, 128
  03dfcf0  ori 21, 25, 0
  03dfcf4  addic 15, 30, 176
  03dfcf8  ori 20, 28, 0
  03dfcfc  addic 18, 30, 32
  03dfd00  addic 17, 30, 80
  03dfd04  lfs 31, 8(22)
  03dfd08  lwz 3, 224(30)
  03dfd0c  fmr 27, 31
  03dfd10  cmpwi 3, 1
  03dfd14  bf 2, 0x3dfd2c
  03dfd18  fmr 1, 31
  03dfd1c  lfs 2, 228(30)
  03dfd20  bl 0x502578
  03dfd24  nop
  03dfd28  fmr 31, 1
  03dfd2c  extsw 3, 21
  03dfd30  fmr 1, 31
  03dfd34  std 3, 176(1)
  03dfd38  lfd 2, 176(1)
  03dfd3c  fcfid 2, 2
  03dfd40  frsp 2, 2
  03dfd44  fmuls 2, 2, 30
  03dfd48  bl 0x502578
  03dfd4c  nop
  03dfd50  lis 3, 10922
  03dfd54  lwz 7, 20(30)
  03dfd58  ori 3, 3, 43691
  03dfd5c  addc 7, 25, 7
  03dfd60  mulhw 3, 3, 7
  03dfd64  fmr 31, 1
  03dfd68  srawi 3, 3, 1
  03dfd6c  srwi 4, 3, 31
  03dfd70  addc 3, 3, 4
  03dfd74  addc 4, 3, 3
  03dfd78  addc 3, 3, 4
  03dfd7c  sldi 3, 3, 2
  03dfd80  subc 3, 7, 3
  03dfd84  sldi 3, 3, 2
  03dfd88  addc 3, 3, 18
  03dfd8c  clrldi 3, 3, 32
  03dfd90  lwz 4, 0(3)
  03dfd94  cmpwi 4, 2
  03dfd98  bf 2, 0x3e00e0
  03dfd9c  lwz 5, 24(30)
  03dfda0  lis 4, 10922
  03dfda4  addc 5, 25, 5
  03dfda8  ori 4, 4, 43691
  03dfdac  addc 8, 5, 28
  03dfdb0  subc 8, 8, 27
  03dfdb4  mulhw 4, 4, 8
  03dfdb8  srawi 4, 4, 1
  03dfdbc  srwi 5, 4, 31
  03dfdc0  addc 4, 4, 5
  03dfdc4  lis 5, 133
  03dfdc8  addc 6, 4, 4
  03dfdcc  addc 4, 4, 6
  03dfdd0  sldi 4, 4, 2
  03dfdd4  lwz 23, 15512(5)
  03dfdd8  subc 4, 8, 4
  03dfddc  extsw 23, 23
  03dfde0  sldi 4, 4, 2
  03dfde4  addc 4, 4, 17
  03dfde8  clrldi 4, 4, 32
  03dfdec  lwz 4, 0(4)
  03dfdf0  cmpwi 4, 0
  03dfdf4  bt 2, 0x3dfe1c
  03dfdf8  lis 3, 133
  03dfdfc  ori 24, 31, 0
  03dfe00  lwz 3, 15256(3)
  03dfe04  extsw 3, 3
  03dfe08  std 3, 176(1)
  03dfe0c  lfd 1, 176(1)
  03dfe10  fcfid 29, 1
  03dfe14  frsp 29, 29
  03dfe18  b 0x3e0058
  03dfe1c  lwz 5, 28(30)
  03dfe20  lis 4, 10922
  03dfe24  addc 5, 25, 5
  03dfe28  ori 4, 4, 43691
  03dfe2c  addc 9, 5, 28
  03dfe30  subc 9, 9, 26
  03dfe34  mulhw 4, 4, 9
  03dfe38  srawi 4, 4, 1
  03dfe3c  srwi 5, 4, 31
  03dfe40  addc 4, 4, 5
  03dfe44  addc 5, 4, 4
  03dfe48  addc 4, 4, 5
  03dfe4c  sldi 4, 4, 2
  03dfe50  subc 4, 9, 4
  03dfe54  sldi 4, 4, 2
  03dfe58  addc 4, 4, 16
  03dfe5c  clrldi 4, 4, 32
  03dfe60  lwz 4, 0(4)
  03dfe64  cmpwi 4, 0
  03dfe68  bt 2, 0x3dfe90
  03dfe6c  lis 3, 133
  03dfe70  ori 24, 31, 0
  03dfe74  lwz 3, 15244(3)
  03dfe78  extsw 3, 3
  03dfe7c  std 3, 176(1)
  03dfe80  lfd 1, 176(1)
  03dfe84  fcfid 29, 1
  03dfe88  frsp 29, 29
  03dfe8c  b 0x3e0058
  03dfe90  lis 4, 10922
  03dfe94  addic 5, 9, 6
  03dfe98  ori 4, 4, 43691
  03dfe9c  mulhw 4, 4, 5
  03dfea0  srawi 4, 4, 1
  03dfea4  srwi 6, 4, 31
  03dfea8  addc 4, 4, 6
  03dfeac  addc 6, 4, 4
  03dfeb0  addc 4, 4, 6
  03dfeb4  sldi 4, 4, 2
  03dfeb8  subc 4, 5, 4
  03dfebc  sldi 4, 4, 2
  03dfec0  addc 4, 4, 16
  03dfec4  clrldi 4, 4, 32
  03dfec8  lwz 4, 0(4)
  03dfecc  cmpwi 4, 0
  03dfed0  bt 2, 0x3dfefc
  03dfed4  lis 3, 133
  03dfed8  ori 24, 31, 0
  03dfedc  lwz 3, 15244(3)
  03dfee0  neg 3, 3
  03dfee4  extsw 3, 3
  03dfee8  std 3, 176(1)
  03dfeec  lfd 1, 176(1)
  03dfef0  fcfid 29, 1
  03dfef4  frsp 29, 29
  03dfef8  b 0x3e0058
  03dfefc  lis 4, 10922
  03dff00  addic 5, 8, 6
  03dff04  ori 4, 4, 43691
  03dff08  mulhw 4, 4, 5
  03dff0c  srawi 4, 4, 1
  03dff10  srwi 6, 4, 31
  03dff14  addc 4, 4, 6
  03dff18  addc 6, 4, 4
  03dff1c  addc 4, 4, 6
  03dff20  sldi 4, 4, 2
  03dff24  subc 4, 5, 4
  03dff28  sldi 4, 4, 2
  03dff2c  addc 4, 4, 17
  03dff30  clrldi 4, 4, 32
  03dff34  lwz 4, 0(4)
  03dff38  cmpwi 4, 0
  03dff3c  bt 2, 0x3dff68
  03dff40  lis 3, 133
  03dff44  ori 24, 31, 0
  03dff48  lwz 3, 15256(3)
  03dff4c  neg 3, 3
  03dff50  extsw 3, 3
  03dff54  std 3, 176(1)
  03dff58  lfd 1, 176(1)
  03dff5c  fcfid 29, 1
  03dff60  frsp 29, 29
  03dff64  b 0x3e0058
  03dff68  lis 4, 10922
  03dff6c  addic 5, 7, 6
  03dff70  ori 4, 4, 43691
  03dff74  mulhw 4, 4, 5
  03dff78  srawi 4, 4, 1
  03dff7c  srwi 6, 4, 31
  03dff80  addc 4, 4, 6
  03dff84  addc 6, 4, 4
  03dff88  addc 4, 4, 6
  03dff8c  sldi 4, 4, 2
  03dff90  subc 4, 5, 4
  03dff94  sldi 4, 4, 2
  03dff98  addc 4, 4, 18
  03dff9c  clrldi 4, 4, 32
  03dffa0  lwz 4, 0(4)
  03dffa4  cmpwi 4, 0
  03dffa8  bt 2, 0x3dffd4
  03dffac  lis 3, 133
  03dffb0  ori 24, 31, 0
  03dffb4  lwz 3, 15268(3)
  03dffb8  neg 3, 3
  03dffbc  extsw 3, 3
  03dffc0  std 3, 176(1)
  03dffc4  lfd 1, 176(1)
  03dffc8  fcfid 29, 1
  03dffcc  frsp 29, 29
  03dffd0  b 0x3e0058
  03dffd4  lis 4, 133
  03dffd8  lis 5, 10922
  03dffdc  addic 6, 20, 6
  03dffe0  ori 5, 5, 43691
  03dffe4  mulhw 5, 5, 6
  03dffe8  lwz 4, 15280(4)
  03dffec  srawi 5, 5, 1
  03dfff0  neg 4, 4
  03dfff4  extsw 4, 4
  03dfff8  ori 24, 19, 0
  03dfffc  std 4, 176(1)
  03e0000  srwi 4, 5, 31
  03e0004  addc 4, 5, 4
  03e0008  addc 5, 4, 4
  03e000c  addc 4, 4, 5
  03e0010  sldi 4, 4, 2
  03e0014  subc 4, 6, 4
  03e0018  sldi 4, 4, 2
  03e001c  addc 7, 4, 15
  03e0020  clrldi 7, 7, 32
  03e0024  lfd 1, 176(1)
  03e0028  lwz 4, 0(7)
  03e002c  fcfid 29, 1
  03e0030  cmpwi 4, 0
  03e0034  frsp 29, 29
  03e0038  bt 2, 0x3e0058
  03e003c  li 4, 3
  03e0040  li 5, 2
  03e0044  lis 6, 133
  03e0048  stw 4, 0(3)
  03e004c  stw 5, 0(7)
  03e0050  lwz 23, 15516(6)
  03e0054  extsw 23, 23
  03e0058  fmr 1, 31
  03e005c  fmr 2, 28
  03e0060  bl 0x502578
  03e0064  nop
  03e0068  lis 3, 133
  03e006c  ori 6, 29, 0
  03e0070  fmr 3, 29
  03e0074  ori 7, 23, 0
  03e0078  lwz 3, 15268(3)
  03e007c  extsw 3, 3
  03e0080  std 3, 176(1)
  03e0084  lfd 2, 176(1)
  03e0088  fcfid 2, 2
  03e008c  frsp 2, 2
  03e0090  bl 0x3df398
  03e0094  cmpwi 24, 0
  03e0098  bt 2, 0x3e00e0
  03e009c  fmr 1, 31
  03e00a0  fmr 2, 28
  03e00a4  bl 0x502578
  03e00a8  nop
  03e00ac  lis 3, 133
  03e00b0  lis 4, 133
  03e00b4  fmr 2, 29
  03e00b8  ori 6, 29, 0
  03e00bc  lwz 3, 15268(3)
  03e00c0  extsw 3, 3
  03e00c4  std 3, 176(1)
  03e00c8  lwz 7, 15520(4)
  03e00cc  lfd 3, 176(1)
  03e00d0  extsw 7, 7
  03e00d4  fcfid 3, 3
  03e00d8  frsp 3, 3
  03e00dc  bl 0x3df398
  03e00e0  addic 25, 25, 1
  03e00e4  addic 21, 21, 30
  03e00e8  cmpwi 25, 12
  03e00ec  addic 20, 20, 1
  03e00f0  bt 0, 0x3dfd04
  03e00f4  ori 25, 19, 0
  03e00f8  ori 20, 27, 0
  03e00fc  ori 21, 25, 0
  03e0100  lis 3, 133
  03e0104  fmr 31, 27
  03e0108  lwz 23, 15512(3)
  03e010c  lwz 3, 224(30)
  03e0110  extsw 23, 23
  03e0114  cmpwi 3, 2
  03e0118  bf 2, 0x3e0130
  03e011c  fmr 1, 31
  03e0120  lfs 2, 228(30)
  03e0124  bl 0x502578
  03e0128  nop
  03e012c  fmr 31, 1
  03e0130  extsw 3, 21
  03e0134  fmr 1, 31
  03e0138  std 3, 176(1)
  03e013c  lfd 2, 176(1)
  03e0140  fcfid 2, 2
  03e0144  frsp 2, 2
  03e0148  fmuls 2, 2, 30
  03e014c  bl 0x502578
  03e0150  nop
  03e0154  lwz 8, 24(30)
  03e0158  lis 3, 10922
  03e015c  addc 8, 25, 8
  03e0160  ori 3, 3, 43691
  03e0164  mulhw 3, 3, 8
  03e0168  fmr 31, 1
  03e016c  srawi 3, 3, 1
  03e0170  srwi 4, 3, 31
  03e0174  addc 3, 3, 4
  03e0178  addc 4, 3, 3
  03e017c  addc 3, 3, 4
  03e0180  sldi 3, 3, 2
  03e0184  subc 3, 8, 3
  03e0188  sldi 3, 3, 2
  03e018c  addc 3, 3, 17
  03e0190  clrldi 3, 3, 32
  03e0194  lwz 4, 0(3)
  03e0198  cmpwi 4, 2
  03e019c  bf 2, 0x3e0474
  03e01a0  lwz 5, 28(30)
  03e01a4  lis 4, 10922
  03e01a8  addc 5, 25, 5
  03e01ac  ori 4, 4, 43691
  03e01b0  addc 9, 5, 27
  03e01b4  subc 9, 9, 26
  03e01b8  mulhw 4, 4, 9
  03e01bc  srawi 4, 4, 1
  03e01c0  srwi 5, 4, 31
  03e01c4  addc 4, 4, 5
  03e01c8  addc 5, 4, 4
  03e01cc  addc 4, 4, 5
  03e01d0  sldi 4, 4, 2
  03e01d4  subc 4, 9, 4
  03e01d8  sldi 4, 4, 2
  03e01dc  addc 4, 4, 16
  03e01e0  clrldi 4, 4, 32
  03e01e4  lwz 4, 0(4)
  03e01e8  cmpwi 4, 0
  03e01ec  bt 2, 0x3e0214
  03e01f0  lis 3, 133
  03e01f4  ori 24, 31, 0
  03e01f8  lwz 3, 15244(3)
  03e01fc  extsw 3, 3
  03e0200  std 3, 176(1)
  03e0204  lfd 1, 176(1)
  03e0208  fcfid 29, 1
  03e020c  frsp 29, 29
  03e0210  b 0x3e03ec
  03e0214  lis 4, 10922
  03e0218  addic 5, 9, 6
  03e021c  ori 4, 4, 43691
  03e0220  mulhw 4, 4, 5
  03e0224  srawi 4, 4, 1
  03e0228  srwi 6, 4, 31
  03e022c  addc 4, 4, 6
  03e0230  addc 6, 4, 4
  03e0234  addc 4, 4, 6
  03e0238  sldi 4, 4, 2
  03e023c  subc 4, 5, 4
  03e0240  sldi 4, 4, 2
  03e0244  addc 4, 4, 16
  03e0248  clrldi 4, 4, 32
  03e024c  lwz 4, 0(4)
  03e0250  cmpwi 4, 0
  03e0254  bt 2, 0x3e0280
  03e0258  lis 3, 133
  03e025c  ori 24, 31, 0
  03e0260  lwz 3, 15244(3)
  03e0264  neg 3, 3
  03e0268  extsw 3, 3
  03e026c  std 3, 176(1)
  03e0270  lfd 1, 176(1)
  03e0274  fcfid 29, 1
  03e0278  frsp 29, 29
  03e027c  b 0x3e03ec
  03e0280  lis 4, 10922
  03e0284  addic 5, 8, 6
  03e0288  ori 4, 4, 43691
  03e028c  mulhw 4, 4, 5
  03e0290  srawi 4, 4, 1
  03e0294  srwi 6, 4, 31
  03e0298  addc 4, 4, 6
  03e029c  addc 6, 4, 4
  03e02a0  addc 4, 4, 6
  03e02a4  sldi 4, 4, 2
  03e02a8  subc 4, 5, 4
  03e02ac  sldi 4, 4, 2
  03e02b0  addc 4, 4, 17
  03e02b4  clrldi 4, 4, 32
  03e02b8  lwz 4, 0(4)
  03e02bc  cmpwi 4, 0
  03e02c0  bt 2, 0x3e02ec
  03e02c4  lis 3, 133
  03e02c8  ori 24, 31, 0
  03e02cc  lwz 3, 15256(3)
  03e02d0  neg 3, 3
  03e02d4  extsw 3, 3
  03e02d8  std 3, 176(1)
  03e02dc  lfd 1, 176(1)
  03e02e0  fcfid 29, 1
  03e02e4  frsp 29, 29
  03e02e8  b 0x3e03ec
  03e02ec  lwz 5, 20(30)
  03e02f0  lis 4, 10922
  03e02f4  addc 5, 25, 5
  03e02f8  ori 4, 4, 43691
  03e02fc  addc 5, 5, 27
  03e0300  subc 5, 5, 28
  03e0304  addic 5, 5, 6
  03e0308  mulhw 4, 4, 5
  03e030c  srawi 4, 4, 1
  03e0310  srwi 6, 4, 31
  03e0314  addc 4, 4, 6
  03e0318  addc 6, 4, 4
  03e031c  addc 4, 4, 6
  03e0320  sldi 4, 4, 2
  03e0324  subc 4, 5, 4
  03e0328  sldi 4, 4, 2
  03e032c  addc 4, 4, 18
  03e0330  clrldi 4, 4, 32
  03e0334  lwz 4, 0(4)
  03e0338  cmpwi 4, 0
  03e033c  bt 2, 0x3e0368
  03e0340  lis 3, 133
  03e0344  ori 24, 31, 0
  03e0348  lwz 3, 15268(3)
  03e034c  neg 3, 3
  03e0350  extsw 3, 3
  03e0354  std 3, 176(1)
  03e0358  lfd 1, 176(1)
  03e035c  fcfid 29, 1
  03e0360  frsp 29, 29
  03e0364  b 0x3e03ec
  03e0368  lis 4, 133
  03e036c  lis 5, 10922
  03e0370  addic 6, 20, 6
  03e0374  ori 5, 5, 43691
  03e0378  mulhw 5, 5, 6
  03e037c  lwz 4, 15280(4)
  03e0380  ori 24, 19, 0
  03e0384  srawi 5, 5, 1
  03e0388  neg 4, 4
  03e038c  extsw 4, 4
  03e0390  std 4, 176(1)
  03e0394  srwi 4, 5, 31
  03e0398  addc 4, 5, 4
  03e039c  addc 5, 4, 4
  03e03a0  addc 4, 4, 5
  03e03a4  sldi 4, 4, 2
  03e03a8  subc 4, 6, 4
  03e03ac  sldi 4, 4, 2
  03e03b0  addc 7, 4, 15
  03e03b4  clrldi 7, 7, 32
  03e03b8  lfd 1, 176(1)
  03e03bc  lwz 4, 0(7)
  03e03c0  fcfid 29, 1
  03e03c4  cmpwi 4, 0
  03e03c8  frsp 29, 29
  03e03cc  bt 2, 0x3e03ec
  03e03d0  li 4, 3
  03e03d4  li 5, 2
  03e03d8  lis 6, 133
  03e03dc  stw 4, 0(3)
  03e03e0  stw 5, 0(7)
  03e03e4  lwz 23, 15516(6)
  03e03e8  extsw 23, 23
  03e03ec  fmr 1, 31
  03e03f0  fmr 2, 28
  03e03f4  bl 0x502578
  03e03f8  nop
  03e03fc  lis 3, 133
  03e0400  fmr 3, 29
  03e0404  ori 6, 29, 0
  03e0408  ori 7, 23, 0
  03e040c  lwz 3, 15256(3)
  03e0410  extsw 3, 3
  03e0414  std 3, 176(1)
  03e0418  lfd 2, 176(1)
  03e041c  fcfid 2, 2
  03e0420  frsp 2, 2
  03e0424  bl 0x3df398
  03e0428  cmpwi 24, 0
  03e042c  bt 2, 0x3e0474
  03e0430  fmr 1, 31
  03e0434  fmr 2, 28
  03e0438  bl 0x502578
  03e043c  nop
  03e0440  lis 3, 133
  03e0444  fmr 2, 29
  03e0448  lis 4, 133
  03e044c  ori 6, 29, 0
  03e0450  lwz 3, 15256(3)
  03e0454  extsw 3, 3
  03e0458  std 3, 176(1)
  03e045c  lwz 7, 15520(4)
  03e0460  lfd 3, 176(1)
  03e0464  extsw 7, 7
  03e0468  fcfid 3, 3
  03e046c  frsp 3, 3
  03e0470  bl 0x3df398
  03e0474  addic 25, 25, 1
  03e0478  addic 21, 21, 30
  03e047c  cmpwi 25, 12
  03e0480  addic 20, 20, 1
  03e0484  bt 0, 0x3e0100
  03e0488  ori 25, 19, 0
  03e048c  ori 20, 26, 0
  03e0490  ori 21, 25, 0
  03e0494  lis 3, 133
  03e0498  fmr 31, 27
  03e049c  lwz 23, 15512(3)
  03e04a0  lwz 3, 224(30)
  03e04a4  extsw 23, 23
  03e04a8  cmpwi 3, 3
  03e04ac  bf 2, 0x3e04c4
  03e04b0  fmr 1, 31
  03e04b4  lfs 2, 228(30)
  03e04b8  bl 0x502578
  03e04bc  nop
  03e04c0  fmr 31, 1
  03e04c4  extsw 3, 21
  03e04c8  fmr 1, 31
  03e04cc  std 3, 176(1)
  03e04d0  lfd 2, 176(1)
  03e04d4  fcfid 2, 2
  03e04d8  frsp 2, 2
  03e04dc  fmuls 2, 2, 30
  03e04e0  bl 0x502578
  03e04e4  nop
  03e04e8  lis 3, 10922
  03e04ec  lwz 7, 28(30)
  03e04f0  ori 3, 3, 43691
  03e04f4  addc 7, 25, 7
  03e04f8  mulhw 3, 3, 7
  03e04fc  fmr 31, 1
  03e0500  srawi 3, 3, 1
  03e0504  srwi 4, 3, 31
  03e0508  addc 3, 3, 4
  03e050c  addc 4, 3, 3
  03e0510  addc 3, 3, 4
  03e0514  sldi 3, 3, 2
  03e0518  subc 3, 7, 3
  03e051c  sldi 3, 3, 2
  03e0520  addc 3, 3, 16
  03e0524  clrldi 3, 3, 32
  03e0528  lwz 4, 0(3)
  03e052c  cmpwi 4, 2
  03e0530  bf 2, 0x3e07a4
  03e0534  lis 4, 10922
  03e0538  addic 5, 7, 6
  03e053c  ori 4, 4, 43691
  03e0540  mulhw 4, 4, 5
  03e0544  srawi 4, 4, 1
  03e0548  srwi 6, 4, 31
  03e054c  addc 4, 4, 6
  03e0550  addc 6, 4, 4
  03e0554  addc 4, 4, 6
  03e0558  sldi 4, 4, 2
  03e055c  subc 4, 5, 4
  03e0560  sldi 4, 4, 2
  03e0564  addc 4, 4, 16
  03e0568  clrldi 4, 4, 32
  03e056c  lwz 4, 0(4)
  03e0570  cmpwi 4, 0
  03e0574  bt 2, 0x3e05a0
  03e0578  lis 3, 133
  03e057c  ori 24, 31, 0
  03e0580  lwz 3, 15244(3)
  03e0584  neg 3, 3
  03e0588  extsw 3, 3
  03e058c  std 3, 176(1)
  03e0590  lfd 1, 176(1)
  03e0594  fcfid 29, 1
  03e0598  frsp 29, 29
  03e059c  b 0x3e071c
  03e05a0  lwz 5, 24(30)
  03e05a4  lis 4, 10922
  03e05a8  addc 5, 25, 5
  03e05ac  ori 4, 4, 43691
  03e05b0  addc 5, 5, 26
  03e05b4  subc 5, 5, 27
  03e05b8  addic 5, 5, 6
  03e05bc  mulhw 4, 4, 5
  03e05c0  srawi 4, 4, 1
  03e05c4  srwi 6, 4, 31
  03e05c8  addc 4, 4, 6
  03e05cc  addc 6, 4, 4
  03e05d0  addc 4, 4, 6
  03e05d4  sldi 4, 4, 2
  03e05d8  subc 4, 5, 4
  03e05dc  sldi 4, 4, 2
  03e05e0  addc 4, 4, 17
  03e05e4  clrldi 4, 4, 32
  03e05e8  lwz 4, 0(4)
  03e05ec  cmpwi 4, 0
  03e05f0  bt 2, 0x3e061c
  03e05f4  lis 3, 133
  03e05f8  ori 24, 31, 0
  03e05fc  lwz 3, 15256(3)
  03e0600  neg 3, 3
  03e0604  extsw 3, 3
  03e0608  std 3, 176(1)
  03e060c  lfd 1, 176(1)
  03e0610  fcfid 29, 1
  03e0614  frsp 29, 29
  03e0618  b 0x3e071c
  03e061c  lwz 5, 20(30)
  03e0620  lis 4, 10922
  03e0624  addc 5, 25, 5
  03e0628  ori 4, 4, 43691
  03e062c  addc 5, 5, 26
  03e0630  subc 5, 5, 28
  03e0634  addic 5, 5, 6
  03e0638  mulhw 4, 4, 5
  03e063c  srawi 4, 4, 1
  03e0640  srwi 6, 4, 31
  03e0644  addc 4, 4, 6
  03e0648  addc 6, 4, 4
  03e064c  addc 4, 4, 6
  03e0650  sldi 4, 4, 2
  03e0654  subc 4, 5, 4
  03e0658  sldi 4, 4, 2
  03e065c  addc 4, 4, 18
  03e0660  clrldi 4, 4, 32
  03e0664  lwz 4, 0(4)
  03e0668  cmpwi 4, 0
  03e066c  bt 2, 0x3e0698
  03e0670  lis 3, 133
  03e0674  ori 24, 31, 0
  03e0678  lwz 3, 15268(3)
  03e067c  neg 3, 3
  03e0680  extsw 3, 3
  03e0684  std 3, 176(1)
  03e0688  lfd 1, 176(1)
  03e068c  fcfid 29, 1
  03e0690  frsp 29, 29
  03e0694  b 0x3e071c
  03e0698  lis 4, 133
  03e069c  lis 5, 10922
  03e06a0  addic 6, 20, 6
  03e06a4  ori 5, 5, 43691
  03e06a8  mulhw 5, 5, 6
  03e06ac  lwz 4, 15280(4)
  03e06b0  ori 24, 19, 0
  03e06b4  srawi 5, 5, 1
  03e06b8  neg 4, 4
  03e06bc  extsw 4, 4
  03e06c0  std 4, 176(1)
  03e06c4  srwi 4, 5, 31
  03e06c8  addc 4, 5, 4
  03e06cc  addc 5, 4, 4
  03e06d0  addc 4, 4, 5
  03e06d4  sldi 4, 4, 2
  03e06d8  subc 4, 6, 4
  03e06dc  sldi 4, 4, 2
  03e06e0  addc 7, 4, 15
  03e06e4  clrldi 7, 7, 32
  03e06e8  lfd 1, 176(1)
  03e06ec  lwz 4, 0(7)
  03e06f0  fcfid 29, 1
  03e06f4  cmpwi 4, 0
  03e06f8  frsp 29, 29
  03e06fc  bt 2, 0x3e071c
  03e0700  li 4, 3
  03e0704  li 5, 2
  03e0708  lis 6, 133
  03e070c  stw 4, 0(3)
  03e0710  stw 5, 0(7)
  03e0714  lwz 23, 15516(6)
  03e0718  extsw 23, 23
  03e071c  fmr 1, 31
  03e0720  fmr 2, 28
  03e0724  bl 0x502578
  03e0728  nop
  03e072c  lis 3, 133
  03e0730  fmr 3, 29
  03e0734  ori 6, 29, 0
  03e0738  ori 7, 23, 0
  03e073c  lwz 3, 15244(3)
  03e0740  extsw 3, 3
  03e0744  std 3, 176(1)
  03e0748  lfd 2, 176(1)
  03e074c  fcfid 2, 2
  03e0750  frsp 2, 2
  03e0754  bl 0x3df398
  03e0758  cmpwi 24, 0
  03e075c  bt 2, 0x3e07a4
  03e0760  fmr 1, 31
  03e0764  fmr 2, 28
  03e0768  bl 0x502578
  03e076c  nop
  03e0770  lis 3, 133
  03e0774  fmr 2, 29
  03e0778  lis 4, 133
  03e077c  ori 6, 29, 0
  03e0780  lwz 3, 15244(3)
  03e0784  extsw 3, 3
  03e0788  std 3, 176(1)
  03e078c  lwz 7, 15520(4)
  03e0790  lfd 3, 176(1)
  03e0794  extsw 7, 7
  03e0798  fcfid 3, 3
  03e079c  frsp 3, 3
  03e07a0  bl 0x3df398
  03e07a4  addic 25, 25, 1
  03e07a8  addic 21, 21, 30
  03e07ac  cmpwi 25, 12
  03e07b0  addic 20, 20, 1
  03e07b4  bt 0, 0x3e0494
  03e07b8  lfs 29, 12(22)
  03e07bc  lfs 28, 16(22)
  03e07c0  ori 31, 19, 0
  03e07c4  lfs 27, 20(22)
  03e07c8  lfs 26, 24(22)
  03e07cc  lfs 25, 28(22)
  03e07d0  ori 27, 31, 0
  03e07d4  lfs 24, 32(22)
  03e07d8  lfs 23, 36(22)
  03e07dc  lfs 22, 40(22)
  03e07e0  lfs 21, 44(22)
  03e07e4  lfs 31, 48(22)
  03e07e8  lwz 3, 224(30)
  03e07ec  fmr 20, 31
  03e07f0  cmpwi 3, 1
  03e07f4  bf 2, 0x3e08d4
  03e07f8  lis 3, 161
  03e07fc  lis 4, -30584
  03e0800  ori 4, 4, 34953
  03e0804  lwz 3, 1808(3)
  03e0808  mulhw 4, 4, 3
  03e080c  addc 4, 4, 3
  03e0810  srawi 4, 4, 5
  03e0814  srwi 5, 4, 31
  03e0818  addc 4, 4, 5
  03e081c  sldi 5, 4, 6
  03e0820  sldi 4, 4, 2
  03e0824  subc 4, 5, 4
  03e0828  subc 3, 3, 4
  03e082c  addc 4, 3, 3
  03e0830  addc 3, 3, 4
  03e0834  addc 3, 3, 3
  03e0838  extsw 3, 3
  03e083c  std 3, 176(1)
  03e0840  lis 3, 133
  03e0844  lfd 1, 176(1)
  03e0848  fcfid 1, 1
  03e084c  lwz 4, 15504(3)
  03e0850  extsw 3, 4
  03e0854  clrlwi 4, 4, 8
  03e0858  frsp 1, 1
  03e085c  fmuls 1, 1, 30
  03e0860  fsubs 2, 29, 1
  03e0864  fsubs 3, 28, 1
  03e0868  fsub 4, 1, 2
  03e086c  fsel 1, 4, 2, 1
  03e0870  fsub 2, 3, 1
  03e0874  fsel 1, 2, 3, 1
  03e0878  fmuls 2, 1, 1
  03e087c  fmuls 3, 2, 1
  03e0880  fmuls 4, 2, 3
  03e0884  fmadds 1, 3, 27, 1
  03e0888  fmuls 3, 2, 4
  03e088c  fmadds 1, 4, 26, 1
  03e0890  fmuls 2, 2, 3
  03e0894  fmadds 1, 3, 25, 1
  03e0898  fmadds 1, 2, 24, 1
  03e089c  fmadds 1, 1, 23, 23
  03e08a0  bl 0x5027bc
  03e08a4  nop
  03e08a8  ori 28, 3, 0
  03e08ac  lwz 3, 228(30)
  03e08b0  lfs 1, 228(30)
  03e08b4  cmpwi 3, 0
  03e08b8  bt 2, 0x3e08e0
  03e08bc  fmr 2, 1
  03e08c0  fmr 1, 31
  03e08c4  bl 0x502578
  03e08c8  nop
  03e08cc  fmr 31, 1
  03e08d0  b 0x3e08e0
  03e08d4  lis 3, 269
  03e08d8  lwz 28, -17520(3)
  03e08dc  extsw 28, 28
  03e08e0  extsw 3, 27
  03e08e4  fmr 1, 31
  03e08e8  std 3, 176(1)
  03e08ec  lfd 2, 176(1)
  03e08f0  fcfid 2, 2
  03e08f4  frsp 2, 2
  03e08f8  fmuls 2, 2, 30
  03e08fc  bl 0x502578
  03e0900  nop
  03e0904  fmr 31, 1
  03e0908  fmr 2, 22
  03e090c  bl 0x502578
  03e0910  nop
  03e0914  lis 3, 133
  03e0918  lis 4, 133
  03e091c  fmr 2, 1
  03e0920  ori 7, 29, 0
  03e0924  lwz 3, 15264(3)
  03e0928  lwz 4, 15260(4)
  03e092c  extsw 3, 3
  03e0930  fmr 1, 31
  03e0934  ori 8, 28, 0
  03e0938  std 3, 176(1)
  03e093c  extsw 3, 4
  03e0940  lfd 3, 176(1)
  03e0944  std 3, 176(1)
  03e0948  fcfid 3, 3
  03e094c  frsp 3, 3
  03e0950  lfd 4, 176(1)
  03e0954  fcfid 4, 4
  03e0958  frsp 4, 4
  03e095c  bl 0x3deb50
  03e0960  lis 3, 10922
  03e0964  lwz 4, 20(30)
  03e0968  ori 3, 3, 43691
  03e096c  addc 4, 31, 4
  03e0970  mulhw 3, 3, 4
  03e0974  srawi 3, 3, 1
  03e0978  srwi 5, 3, 31
  03e097c  addc 3, 3, 5
  03e0980  addc 5, 3, 3
  03e0984  addc 3, 3, 5
  03e0988  sldi 3, 3, 2
  03e098c  subc 3, 4, 3
  03e0990  sldi 3, 3, 2
  03e0994  addc 3, 3, 18
  03e0998  clrldi 28, 3, 32
  03e099c  lwz 28, 0(28)
  03e09a0  cmpwi 28, 0
  03e09a4  bt 2, 0x3e0ad0
  03e09a8  cmpwi 28, 2
  03e09ac  bf 1, 0x3e0a3c
  03e09b0  fmr 1, 31
  03e09b4  fmr 2, 21
  03e09b8  bl 0x502578
  03e09bc  nop
  03e09c0  lis 3, 133
  03e09c4  lis 4, 133
  03e09c8  ori 5, 29, 0
  03e09cc  li 7, 0
  03e09d0  lwz 3, 15268(3)
  03e09d4  extsw 3, 3
  03e09d8  std 3, 176(1)
  03e09dc  lwz 6, 15508(4)
  03e09e0  lfd 2, 176(1)
  03e09e4  extsw 6, 6
  03e09e8  fcfid 2, 2
  03e09ec  frsp 2, 2
  03e09f0  bl 0x3def78
  03e09f4  lis 3, 10922
  03e09f8  lwz 4, 20(30)
  03e09fc  ori 3, 3, 43691
  03e0a00  addc 4, 31, 4
  03e0a04  mulhw 3, 3, 4
  03e0a08  srawi 3, 3, 1
  03e0a0c  srwi 5, 3, 31
  03e0a10  addc 3, 3, 5
  03e0a14  addc 5, 3, 3
  03e0a18  addc 3, 3, 5
  03e0a1c  li 5, 2
  03e0a20  sldi 3, 3, 2
  03e0a24  subc 3, 4, 3
  03e0a28  sldi 3, 3, 2
  03e0a2c  addc 3, 3, 18
  03e0a30  clrldi 3, 3, 32
  03e0a34  stw 5, 0(3)
  03e0a38  b 0x3e0ad0
  03e0a3c  cmpwi 28, 2
  03e0a40  bf 2, 0x3e0a8c
  03e0a44  fmr 1, 31
  03e0a48  fmr 2, 21
  03e0a4c  bl 0x502578
  03e0a50  nop
  03e0a54  lis 3, 133
  03e0a58  lis 4, 133
  03e0a5c  ori 5, 29, 0
  03e0a60  li 7, 1
  03e0a64  lwz 3, 15268(3)
  03e0a68  extsw 3, 3
  03e0a6c  std 3, 176(1)
  03e0a70  lwz 6, 15508(4)
  03e0a74  lfd 2, 176(1)
  03e0a78  extsw 6, 6
  03e0a7c  fcfid 2, 2
  03e0a80  frsp 2, 2
  03e0a84  bl 0x3def78
  03e0a88  b 0x3e0ad0
  03e0a8c  fmr 1, 31
  03e0a90  fmr 2, 21
  03e0a94  bl 0x502578
  03e0a98  nop
  03e0a9c  lis 3, 133
  03e0aa0  lis 4, 133
  03e0aa4  ori 5, 29, 0
  03e0aa8  li 7, 2
  03e0aac  lwz 3, 15268(3)
  03e0ab0  extsw 3, 3
  03e0ab4  std 3, 176(1)
  03e0ab8  lwz 6, 15508(4)
  03e0abc  lfd 2, 176(1)
  03e0ac0  extsw 6, 6
  03e0ac4  fcfid 2, 2
  03e0ac8  frsp 2, 2
  03e0acc  bl 0x3def78
  03e0ad0  addic 31, 31, 1
  03e0ad4  addic 27, 27, 30
  03e0ad8  cmpwi 31, 12
  03e0adc  bt 0, 0x3e07e4
  03e0ae0  ori 31, 19, 0
  03e0ae4  ori 27, 31, 0
  03e0ae8  lwz 3, 224(30)
  03e0aec  fmr 31, 20
  03e0af0  cmpwi 3, 2
  03e0af4  bf 2, 0x3e0bd4
  03e0af8  lis 3, 161
  03e0afc  lis 4, -30584
  03e0b00  ori 4, 4, 34953
  03e0b04  lwz 3, 1808(3)
  03e0b08  mulhw 4, 4, 3
  03e0b0c  addc 4, 4, 3
  03e0b10  srawi 4, 4, 5
  03e0b14  srwi 5, 4, 31
  03e0b18  addc 4, 4, 5
  03e0b1c  sldi 5, 4, 6
  03e0b20  sldi 4, 4, 2
  03e0b24  subc 4, 5, 4
  03e0b28  subc 3, 3, 4
  03e0b2c  addc 4, 3, 3
  03e0b30  addc 3, 3, 4
  03e0b34  addc 3, 3, 3
  03e0b38  extsw 3, 3
  03e0b3c  std 3, 176(1)
  03e0b40  lis 3, 133
  03e0b44  lfd 1, 176(1)
  03e0b48  fcfid 1, 1
  03e0b4c  lwz 4, 15504(3)
  03e0b50  extsw 3, 4
  03e0b54  clrlwi 4, 4, 8
  03e0b58  frsp 1, 1
  03e0b5c  fmuls 1, 1, 30
  03e0b60  fsubs 2, 29, 1
  03e0b64  fsubs 3, 28, 1
  03e0b68  fsub 4, 1, 2
  03e0b6c  fsel 1, 4, 2, 1
  03e0b70  fsub 2, 3, 1
  03e0b74  fsel 1, 2, 3, 1
  03e0b78  fmuls 2, 1, 1
  03e0b7c  fmuls 3, 2, 1
  03e0b80  fmuls 4, 2, 3
  03e0b84  fmadds 1, 3, 27, 1
  03e0b88  fmuls 3, 2, 4
  03e0b8c  fmadds 1, 4, 26, 1
  03e0b90  fmuls 2, 2, 3
  03e0b94  fmadds 1, 3, 25, 1
  03e0b98  fmadds 1, 2, 24, 1
  03e0b9c  fmadds 1, 1, 23, 23
  03e0ba0  bl 0x5027bc
  03e0ba4  nop
  03e0ba8  ori 28, 3, 0
  03e0bac  lwz 3, 228(30)
  03e0bb0  lfs 1, 228(30)
  03e0bb4  cmpwi 3, 0
  03e0bb8  bt 2, 0x3e0be0
  03e0bbc  fmr 2, 1
  03e0bc0  fmr 1, 31
  03e0bc4  bl 0x502578
  03e0bc8  nop
  03e0bcc  fmr 31, 1
  03e0bd0  b 0x3e0be0
  03e0bd4  lis 3, 269
  03e0bd8  lwz 28, -17520(3)
  03e0bdc  extsw 28, 28
  03e0be0  extsw 3, 27
  03e0be4  fmr 1, 31
  03e0be8  std 3, 176(1)
  03e0bec  lfd 2, 176(1)
  03e0bf0  fcfid 2, 2
  03e0bf4  frsp 2, 2
  03e0bf8  fmuls 2, 2, 30
  03e0bfc  bl 0x502578
  03e0c00  nop
  03e0c04  fmr 31, 1
  03e0c08  fmr 2, 22
  03e0c0c  bl 0x502578
  03e0c10  nop
  03e0c14  lis 3, 133
  03e0c18  lis 4, 133
  03e0c1c  fmr 2, 1
  03e0c20  ori 7, 29, 0
  03e0c24  lwz 3, 15252(3)
  03e0c28  lwz 4, 15248(4)
  03e0c2c  extsw 3, 3
  03e0c30  fmr 1, 31
  03e0c34  ori 8, 28, 0
  03e0c38  std 3, 176(1)
  03e0c3c  extsw 3, 4
  03e0c40  lfd 3, 176(1)
  03e0c44  std 3, 176(1)
  03e0c48  fcfid 3, 3
  03e0c4c  frsp 3, 3
  03e0c50  lfd 4, 176(1)
  03e0c54  fcfid 4, 4
  03e0c58  frsp 4, 4
  03e0c5c  bl 0x3deb50
  03e0c60  lis 3, 10922
  03e0c64  lwz 4, 24(30)
  03e0c68  ori 3, 3, 43691
  03e0c6c  addc 4, 31, 4
  03e0c70  mulhw 3, 3, 4
  03e0c74  srawi 3, 3, 1
  03e0c78  srwi 5, 3, 31
  03e0c7c  addc 3, 3, 5
  03e0c80  addc 5, 3, 3
  03e0c84  addc 3, 3, 5
  03e0c88  sldi 3, 3, 2
  03e0c8c  subc 3, 4, 3
  03e0c90  sldi 3, 3, 2
  03e0c94  addc 3, 3, 17
  03e0c98  clrldi 28, 3, 32
  03e0c9c  lwz 28, 0(28)
  03e0ca0  cmpwi 28, 0
  03e0ca4  bt 2, 0x3e0dd0
  03e0ca8  cmpwi 28, 2
  03e0cac  bf 1, 0x3e0d3c
  03e0cb0  fmr 1, 31
  03e0cb4  fmr 2, 21
  03e0cb8  bl 0x502578
  03e0cbc  nop
  03e0cc0  lis 3, 133
  03e0cc4  lis 4, 133
  03e0cc8  ori 5, 29, 0
  03e0ccc  li 7, 0
  03e0cd0  lwz 3, 15256(3)
  03e0cd4  extsw 3, 3
  03e0cd8  std 3, 176(1)
  03e0cdc  lwz 6, 15508(4)
  03e0ce0  lfd 2, 176(1)
  03e0ce4  extsw 6, 6
  03e0ce8  fcfid 2, 2
  03e0cec  frsp 2, 2
  03e0cf0  bl 0x3def78
  03e0cf4  lis 3, 10922
  03e0cf8  lwz 4, 24(30)
  03e0cfc  ori 3, 3, 43691
  03e0d00  addc 4, 31, 4
  03e0d04  mulhw 3, 3, 4
  03e0d08  srawi 3, 3, 1
  03e0d0c  srwi 5, 3, 31
  03e0d10  addc 3, 3, 5
  03e0d14  addc 5, 3, 3
  03e0d18  addc 3, 3, 5
  03e0d1c  li 5, 2
  03e0d20  sldi 3, 3, 2
  03e0d24  subc 3, 4, 3
  03e0d28  sldi 3, 3, 2
  03e0d2c  addc 3, 3, 17
  03e0d30  clrldi 3, 3, 32
  03e0d34  stw 5, 0(3)
  03e0d38  b 0x3e0dd0
  03e0d3c  cmpwi 28, 2
  03e0d40  bf 2, 0x3e0d8c
  03e0d44  fmr 1, 31
  03e0d48  fmr 2, 21
  03e0d4c  bl 0x502578
  03e0d50  nop
  03e0d54  lis 3, 133
  03e0d58  lis 4, 133
  03e0d5c  ori 5, 29, 0
  03e0d60  li 7, 1
  03e0d64  lwz 3, 15256(3)
  03e0d68  extsw 3, 3
  03e0d6c  std 3, 176(1)
  03e0d70  lwz 6, 15508(4)
  03e0d74  lfd 2, 176(1)
  03e0d78  extsw 6, 6
  03e0d7c  fcfid 2, 2
  03e0d80  frsp 2, 2
  03e0d84  bl 0x3def78
  03e0d88  b 0x3e0dd0
  03e0d8c  fmr 1, 31
  03e0d90  fmr 2, 21
  03e0d94  bl 0x502578
  03e0d98  nop
  03e0d9c  lis 3, 133
  03e0da0  lis 4, 133
  03e0da4  ori 5, 29, 0
  03e0da8  li 7, 2
  03e0dac  lwz 3, 15256(3)
  03e0db0  extsw 3, 3
  03e0db4  std 3, 176(1)
  03e0db8  lwz 6, 15508(4)
  03e0dbc  lfd 2, 176(1)
  03e0dc0  extsw 6, 6
  03e0dc4  fcfid 2, 2
  03e0dc8  frsp 2, 2
  03e0dcc  bl 0x3def78
  03e0dd0  addic 31, 31, 1
  03e0dd4  addic 27, 27, 30
  03e0dd8  cmpwi 31, 12
  03e0ddc  bt 0, 0x3e0ae8
  03e0de0  ori 31, 19, 0
  03e0de4  ori 27, 31, 0
  03e0de8  lwz 3, 224(30)
  03e0dec  fmr 31, 20
  03e0df0  cmpwi 3, 3
  03e0df4  bf 2, 0x3e0ed4
  03e0df8  lis 3, 161
  03e0dfc  lis 4, -30584
  03e0e00  ori 4, 4, 34953
  03e0e04  lwz 3, 1808(3)
  03e0e08  mulhw 4, 4, 3
  03e0e0c  addc 4, 4, 3
  03e0e10  srawi 4, 4, 5
  03e0e14  srwi 5, 4, 31
  03e0e18  addc 4, 4, 5
  03e0e1c  sldi 5, 4, 6
  03e0e20  sldi 4, 4, 2
  03e0e24  subc 4, 5, 4
  03e0e28  subc 3, 3, 4
  03e0e2c  addc 4, 3, 3
  03e0e30  addc 3, 3, 4
  03e0e34  addc 3, 3, 3
  03e0e38  extsw 3, 3
  03e0e3c  std 3, 176(1)
  03e0e40  lis 3, 133
  03e0e44  lfd 1, 176(1)
  03e0e48  fcfid 1, 1
  03e0e4c  lwz 4, 15504(3)
  03e0e50  extsw 3, 4
  03e0e54  clrlwi 4, 4, 8
  03e0e58  frsp 1, 1
  03e0e5c  fmuls 1, 1, 30
  03e0e60  fsubs 2, 29, 1
  03e0e64  fsubs 3, 28, 1
  03e0e68  fsub 4, 1, 2
  03e0e6c  fsel 1, 4, 2, 1
  03e0e70  fsub 2, 3, 1
  03e0e74  fsel 1, 2, 3, 1
  03e0e78  fmuls 2, 1, 1
  03e0e7c  fmuls 3, 2, 1
  03e0e80  fmuls 4, 2, 3
  03e0e84  fmadds 1, 3, 27, 1
  03e0e88  fmuls 3, 2, 4
  03e0e8c  fmadds 1, 4, 26, 1
  03e0e90  fmuls 2, 2, 3
  03e0e94  fmadds 1, 3, 25, 1
  03e0e98  fmadds 1, 2, 24, 1
  03e0e9c  fmadds 1, 1, 23, 23
  03e0ea0  bl 0x5027bc
  03e0ea4  nop
  03e0ea8  ori 28, 3, 0
  03e0eac  lwz 3, 228(30)
  03e0eb0  lfs 1, 228(30)
  03e0eb4  cmpwi 3, 0
  03e0eb8  bt 2, 0x3e0ee0
  03e0ebc  fmr 2, 1
  03e0ec0  fmr 1, 31
  03e0ec4  bl 0x502578
  03e0ec8  nop
  03e0ecc  fmr 31, 1
  03e0ed0  b 0x3e0ee0
  03e0ed4  lis 3, 269
  03e0ed8  lwz 28, -17520(3)
  03e0edc  extsw 28, 28
  03e0ee0  extsw 3, 27
  03e0ee4  fmr 1, 31
  03e0ee8  std 3, 176(1)
  03e0eec  lfd 2, 176(1)
  03e0ef0  fcfid 2, 2
  03e0ef4  frsp 2, 2
  03e0ef8  fmuls 2, 2, 30
  03e0efc  bl 0x502578
  03e0f00  nop
  03e0f04  fmr 31, 1
  03e0f08  fmr 2, 22
  03e0f0c  bl 0x502578
  03e0f10  nop
  03e0f14  lis 3, 133
  03e0f18  lis 4, 133
  03e0f1c  fmr 2, 1
  03e0f20  ori 7, 29, 0
  03e0f24  lwz 3, 15240(3)
  03e0f28  lwz 4, 15236(4)
  03e0f2c  extsw 3, 3
  03e0f30  fmr 1, 31
  03e0f34  ori 8, 28, 0
  03e0f38  std 3, 176(1)
  03e0f3c  extsw 3, 4
  03e0f40  lfd 3, 176(1)
  03e0f44  std 3, 176(1)
  03e0f48  fcfid 3, 3
  03e0f4c  frsp 3, 3
  03e0f50  lfd 4, 176(1)
  03e0f54  fcfid 4, 4
  03e0f58  frsp 4, 4
  03e0f5c  bl 0x3deb50
  03e0f60  lis 3, 10922
  03e0f64  lwz 4, 28(30)
  03e0f68  ori 3, 3, 43691
  03e0f6c  addc 4, 31, 4
  03e0f70  mulhw 3, 3, 4
  03e0f74  srawi 3, 3, 1
  03e0f78  srwi 5, 3, 31
  03e0f7c  addc 3, 3, 5
  03e0f80  addc 5, 3, 3
  03e0f84  addc 3, 3, 5
  03e0f88  sldi 3, 3, 2
  03e0f8c  subc 3, 4, 3
  03e0f90  sldi 3, 3, 2
  03e0f94  addc 3, 3, 16
  03e0f98  clrldi 28, 3, 32
  03e0f9c  lwz 28, 0(28)
  03e0fa0  cmpwi 28, 0
  03e0fa4  bt 2, 0x3e10d0
  03e0fa8  cmpwi 28, 2
  03e0fac  bf 1, 0x3e103c
  03e0fb0  fmr 1, 31
  03e0fb4  fmr 2, 21
  03e0fb8  bl 0x502578
  03e0fbc  nop
  03e0fc0  lis 3, 133
  03e0fc4  lis 4, 133
  03e0fc8  ori 5, 29, 0
  03e0fcc  li 7, 0
  03e0fd0  lwz 3, 15244(3)
  03e0fd4  extsw 3, 3
  03e0fd8  std 3, 176(1)
  03e0fdc  lwz 6, 15508(4)
  03e0fe0  lfd 2, 176(1)
  03e0fe4  extsw 6, 6
  03e0fe8  fcfid 2, 2
  03e0fec  frsp 2, 2
  03e0ff0  bl 0x3def78
  03e0ff4  lis 3, 10922
  03e0ff8  lwz 4, 28(30)
  03e0ffc  ori 3, 3, 43691
  03e1000  addc 4, 31, 4
  03e1004  mulhw 3, 3, 4
  03e1008  srawi 3, 3, 1
  03e100c  srwi 5, 3, 31
  03e1010  addc 3, 3, 5
  03e1014  addc 5, 3, 3
  03e1018  addc 3, 3, 5
  03e101c  li 5, 2
  03e1020  sldi 3, 3, 2
  03e1024  subc 3, 4, 3
  03e1028  sldi 3, 3, 2
  03e102c  addc 3, 3, 16
  03e1030  clrldi 3, 3, 32
  03e1034  stw 5, 0(3)
  03e1038  b 0x3e10d0
  03e103c  cmpwi 28, 2
  03e1040  bf 2, 0x3e108c
  03e1044  fmr 1, 31
  03e1048  fmr 2, 21
  03e104c  bl 0x502578
  03e1050  nop
  03e1054  lis 3, 133
  03e1058  lis 4, 133
  03e105c  ori 5, 29, 0
  03e1060  li 7, 1
  03e1064  lwz 3, 15244(3)
  03e1068  extsw 3, 3
  03e106c  std 3, 176(1)
  03e1070  lwz 6, 15508(4)
  03e1074  lfd 2, 176(1)
  03e1078  extsw 6, 6
  03e107c  fcfid 2, 2
  03e1080  frsp 2, 2
  03e1084  bl 0x3def78
  03e1088  b 0x3e10d0
  03e108c  fmr 1, 31
  03e1090  fmr 2, 21
  03e1094  bl 0x502578
  03e1098  nop
  03e109c  lis 3, 133
  03e10a0  lis 4, 133
  03e10a4  ori 5, 29, 0
  03e10a8  li 7, 2
  03e10ac  lwz 3, 15244(3)
  03e10b0  extsw 3, 3
  03e10b4  std 3, 176(1)
  03e10b8  lwz 6, 15508(4)
  03e10bc  lfd 2, 176(1)
  03e10c0  extsw 6, 6
  03e10c4  fcfid 2, 2
  03e10c8  frsp 2, 2
  03e10cc  bl 0x3def78
  03e10d0  addic 31, 31, 1
  03e10d4  addic 27, 27, 30
  03e10d8  cmpwi 31, 12
  03e10dc  bt 0, 0x3e0de8
  03e10e0  lfs 29, 52(22)
  03e10e4  ori 31, 19, 0
  03e10e8  lfs 28, 56(22)
  03e10ec  extsw 3, 31
  03e10f0  fmr 1, 29
  03e10f4  std 3, 176(1)
  03e10f8  lfd 2, 176(1)
  03e10fc  fcfid 2, 2
  03e1100  frsp 2, 2
  03e1104  fmuls 2, 2, 30
  03e1108  bl 0x502578
  03e110c  nop
  03e1110  fmr 31, 1
  03e1114  fmr 2, 28
  03e1118  bl 0x502578
  03e111c  nop
  03e1120  lwz 3, 176(30)
  03e1124  cmpwi 3, 0
  03e1128  bt 2, 0x3e11b4
  03e112c  cmpwi 3, 2
  03e1130  bf 2, 0x3e1140
  03e1134  lis 3, 133
  03e1138  lwz 3, 15536(3)
  03e113c  b 0x3e1168
  03e1140  lis 3, 161
  03e1144  lwz 3, 1808(3)
  03e1148  rlwinm 3, 3, 0, 26, 26
  03e114c  cmpwi 3, 0
  03e1150  bt 2, 0x3e1160
  03e1154  lis 3, 133
  03e1158  lwz 3, 15532(3)
  03e115c  b 0x3e1168
  03e1160  lis 3, 133
  03e1164  lwz 3, 15528(3)
  03e1168  lis 4, 133
  03e116c  lis 5, 133
  03e1170  fmr 2, 1
  03e1174  extsw 8, 3
  03e1178  lwz 4, 15276(4)
  03e117c  lwz 5, 15272(5)
  03e1180  extsw 4, 4
  03e1184  extsw 5, 5
  03e1188  fmr 1, 31
  03e118c  ori 7, 29, 0
  03e1190  std 4, 176(1)
  03e1194  lfd 3, 176(1)
  03e1198  std 5, 176(1)
  03e119c  fcfid 3, 3
  03e11a0  frsp 3, 3
  03e11a4  lfd 4, 176(1)
  03e11a8  fcfid 4, 4
  03e11ac  frsp 4, 4
  03e11b0  bl 0x3deb50
  03e11b4  addic 19, 19, 1
  03e11b8  addic 31, 31, 30
  03e11bc  cmpwi 19, 12
  03e11c0  addic 30, 30, 4
  03e11c4  bt 0, 0x3e10ec
  03e11c8  li 3, 1
  03e11cc  li 4, 5
  03e11d0  li 10, 2
  03e11d4  li 5, 96
  03e11d8  li 6, 3
  03e11dc  li 7, 0
  03e11e0  li 8, 0
  03e11e4  li 9, 1
  03e11e8  bl 0x502f7c
  03e11ec  nop
  03e11f0  ori 4, 3, 0
  03e11f4  li 3, 22
  03e11f8  bl 0x174f80
  03e11fc  nop
  03e1200  ld 0, 448(1)
  03e1204  mtlr 0
  03e1208  lfd 20, 336(1)
  03e120c  lfd 21, 344(1)
  03e1210  lfd 22, 352(1)
  03e1214  lfd 23, 360(1)
  03e1218  lfd 24, 368(1)
  03e121c  lfd 25, 376(1)
  03e1220  lfd 26, 384(1)
  03e1224  lfd 27, 392(1)
  03e1228  lfd 28, 400(1)
  03e122c  lfd 29, 408(1)
  03e1230  lfd 30, 416(1)
  03e1234  lfd 31, 424(1)
  03e1238  ld 15, 200(1)
  03e123c  ld 16, 208(1)
  03e1240  ld 17, 216(1)
  03e1244  ld 18, 224(1)
  03e1248  ld 19, 232(1)
  03e124c  ld 20, 240(1)
  03e1250  ld 21, 248(1)
  03e1254  ld 22, 256(1)
  03e1258  ld 23, 264(1)
  03e125c  ld 24, 272(1)
  03e1260  ld 25, 280(1)
  03e1264  ld 26, 288(1)
  03e1268  ld 27, 296(1)
  03e126c  ld 28, 304(1)
  03e1270  ld 29, 312(1)
  03e1274  ld 30, 320(1)
  03e1278  ld 31, 328(1)
  03e127c  addi 1, 1, 432
  03e1280  blr

M617_003e12b0:   # 0x3e12b0, 0x318 bytes
  03e12b0  stdu 1, -304(1)
  03e12b4  mflr 0
  03e12b8  std 0, 320(1)
  03e12bc  stfd 21, 216(1)
  03e12c0  stfd 22, 224(1)
  03e12c4  stfd 23, 232(1)
  03e12c8  stfd 24, 240(1)
  03e12cc  stfd 25, 248(1)
  03e12d0  stfd 26, 256(1)
  03e12d4  stfd 27, 264(1)
  03e12d8  stfd 28, 272(1)
  03e12dc  stfd 29, 280(1)
  03e12e0  stfd 30, 288(1)
  03e12e4  stfd 31, 296(1)
  03e12e8  lis 4, 269
  03e12ec  lis 6, 133
  03e12f0  fmr 31, 1
  03e12f4  lis 8, 133
  03e12f8  lis 5, 133
  03e12fc  lis 7, 133
  03e1300  lwz 4, -20512(4)
  03e1304  lwz 6, 15116(6)
  03e1308  lis 3, 62
  03e130c  stw 4, 160(1)
  03e1310  stw 6, 164(1)
  03e1314  lwz 4, 15120(8)
  03e1318  addi 3, 3, 4744
  03e131c  lwz 5, 15124(5)
  03e1320  stw 4, 168(1)
  03e1324  lwz 4, 15492(7)
  03e1328  stw 5, 172(1)
  03e132c  stw 4, 156(1)
  03e1330  stw 4, 152(1)
  03e1334  stw 4, 148(1)
  03e1338  lfs 30, 8(3)
  03e133c  lfs 29, 12(3)
  03e1340  fadds 1, 31, 30
  03e1344  lfs 28, 16(3)
  03e1348  fmr 26, 3
  03e134c  fmr 23, 2
  03e1350  lfs 7, 20(3)
  03e1354  lfs 25, 24(3)
  03e1358  fmr 27, 7
  03e135c  lfs 24, 28(3)
  03e1360  lfs 22, 32(3)
  03e1364  fsubs 4, 29, 1
  03e1368  fsubs 5, 28, 1
  03e136c  std 31, 208(1)
  03e1370  ld 5, 0(3)
  03e1374  ori 31, 5, 0
  03e1378  fsub 6, 1, 4
  03e137c  fsel 1, 6, 4, 1
  03e1380  lfs 4, 36(3)
  03e1384  std 31, 112(1)
  03e1388  fmr 21, 4
  03e138c  std 31, 120(1)
  03e1390  std 31, 128(1)
  03e1394  std 31, 136(1)
  03e1398  stw 4, 144(1)
  03e139c  fsub 3, 5, 1
  03e13a0  fsel 1, 3, 5, 1
  03e13a4  fmuls 2, 1, 1
  03e13a8  fmuls 3, 2, 1
  03e13ac  fmuls 5, 2, 3
  03e13b0  fmadds 1, 3, 27, 1
  03e13b4  fmuls 3, 2, 5
  03e13b8  fmadds 1, 5, 25, 1
  03e13bc  fmuls 2, 2, 3
  03e13c0  fmadds 1, 3, 24, 1
  03e13c4  fmadds 1, 2, 22, 1
  03e13c8  fmuls 1, 1, 26
  03e13cc  std 30, 200(1)
  03e13d0  std 29, 192(1)
  03e13d4  std 28, 184(1)
  03e13d8  fmuls 1, 1, 21
  03e13dc  bl 0x502758
  03e13e0  nop
  03e13e4  fsubs 1, 29, 31
  03e13e8  fsubs 2, 28, 31
  03e13ec  slwi 3, 3, 16
  03e13f0  lis 30, -32768
  03e13f4  subc 3, 3, 30
  03e13f8  fsub 3, 31, 1
  03e13fc  clrldi 3, 3, 32
  03e1400  addc 31, 3, 31
  03e1404  fsel 1, 3, 1, 31
  03e1408  std 31, 112(1)
  03e140c  fsub 3, 2, 1
  03e1410  fsel 1, 3, 2, 1
  03e1414  fmuls 2, 1, 1
  03e1418  fmuls 3, 2, 1
  03e141c  fmuls 4, 2, 3
  03e1420  fmadds 1, 3, 27, 1
  03e1424  fmuls 3, 2, 4
  03e1428  fmadds 1, 4, 25, 1
  03e142c  fmuls 2, 2, 3
  03e1430  fmadds 1, 3, 24, 1
  03e1434  fmadds 1, 2, 22, 1
  03e1438  fmuls 1, 1, 26
  03e143c  fmuls 1, 1, 21
  03e1440  bl 0x502758
  03e1444  nop
  03e1448  fadds 1, 23, 30
  03e144c  lis 4, 0
  03e1450  ld 5, 120(1)
  03e1454  ld 28, 128(1)
  03e1458  ori 29, 4, 32768
  03e145c  lis 4, -32768
  03e1460  addc 3, 3, 29
  03e1464  ori 4, 4, 32768
  03e1468  fsubs 2, 29, 1
  03e146c  fsubs 3, 28, 1
  03e1470  extsw 3, 3
  03e1474  addc 3, 31, 3
  03e1478  clrldi 31, 4, 32
  03e147c  addc 4, 5, 31
  03e1480  fsub 4, 1, 2
  03e1484  std 4, 120(1)
  03e1488  std 3, 112(1)
  03e148c  fsel 1, 4, 2, 1
  03e1490  fsub 2, 3, 1
  03e1494  fsel 1, 2, 3, 1
  03e1498  fmuls 2, 1, 1
  03e149c  fmuls 3, 2, 1
  03e14a0  fmuls 4, 2, 3
  03e14a4  fmadds 1, 3, 27, 1
  03e14a8  fmuls 3, 2, 4
  03e14ac  fmadds 1, 4, 25, 1
  03e14b0  fmuls 2, 2, 3
  03e14b4  fmadds 1, 3, 24, 1
  03e14b8  fmadds 1, 2, 22, 1
  03e14bc  fmuls 1, 1, 26
  03e14c0  fmuls 1, 1, 21
  03e14c4  bl 0x502758
  03e14c8  nop
  03e14cc  fsubs 1, 29, 23
  03e14d0  fsubs 2, 28, 23
  03e14d4  slwi 3, 3, 16
  03e14d8  subc 3, 3, 30
  03e14dc  clrldi 3, 3, 32
  03e14e0  fsub 3, 23, 1
  03e14e4  addc 30, 28, 3
  03e14e8  std 30, 128(1)
  03e14ec  fsel 1, 3, 1, 23
  03e14f0  fsub 3, 2, 1
  03e14f4  fsel 1, 3, 2, 1
  03e14f8  fmuls 2, 1, 1
  03e14fc  fmuls 3, 2, 1
  03e1500  fmuls 4, 2, 3
  03e1504  fmadds 1, 3, 27, 1
  03e1508  fmuls 3, 2, 4
  03e150c  fmadds 1, 4, 25, 1
  03e1510  fmuls 2, 2, 3
  03e1514  fmadds 1, 3, 24, 1
  03e1518  fmadds 1, 2, 22, 1
  03e151c  fmuls 1, 1, 26
  03e1520  fmuls 1, 1, 21
  03e1524  bl 0x502758
  03e1528  nop
  03e152c  addc 3, 3, 29
  03e1530  ld 4, 136(1)
  03e1534  lis 5, 133
  03e1538  extsw 3, 3
  03e153c  addc 4, 4, 31
  03e1540  addc 3, 30, 3
  03e1544  lwz 5, 15216(5)
  03e1548  std 4, 136(1)
  03e154c  addic 4, 5, 40
  03e1550  std 3, 128(1)
  03e1554  extsw 3, 4
  03e1558  bl 0x685c4
  03e155c  nop
  03e1560  ori 6, 3, 0
  03e1564  addic 3, 1, 112
  03e1568  addic 4, 1, 160
  03e156c  addic 5, 1, 144
  03e1570  li 7, 1
  03e1574  bl 0x6ecf8
  03e1578  nop
  03e157c  ld 0, 320(1)
  03e1580  mtlr 0
  03e1584  lfd 21, 216(1)
  03e1588  lfd 22, 224(1)
  03e158c  lfd 23, 232(1)
  03e1590  lfd 24, 240(1)
  03e1594  lfd 25, 248(1)
  03e1598  lfd 26, 256(1)
  03e159c  lfd 27, 264(1)
  03e15a0  lfd 28, 272(1)
  03e15a4  lfd 29, 280(1)
  03e15a8  lfd 30, 288(1)
  03e15ac  lfd 31, 296(1)
  03e15b0  ld 28, 184(1)
  03e15b4  ld 29, 192(1)
  03e15b8  ld 30, 200(1)
  03e15bc  ld 31, 208(1)
  03e15c0  addi 1, 1, 304
  03e15c4  blr

M617_003e15f0:   # 0x3e15f0, 0x380 bytes
  03e15f0  stdu 1, -320(1)
  03e15f4  mflr 0
  03e15f8  std 0, 336(1)
  03e15fc  stfd 19, 216(1)
  03e1600  stfd 20, 224(1)
  03e1604  stfd 21, 232(1)
  03e1608  stfd 22, 240(1)
  03e160c  stfd 23, 248(1)
  03e1610  stfd 24, 256(1)
  03e1614  stfd 25, 264(1)
  03e1618  stfd 26, 272(1)
  03e161c  stfd 27, 280(1)
  03e1620  stfd 28, 288(1)
  03e1624  stfd 29, 296(1)
  03e1628  stfd 30, 304(1)
  03e162c  stfd 31, 312(1)
  03e1630  fmr 31, 1
  03e1634  li 4, 0
  03e1638  lis 5, 133
  03e163c  lis 3, 62
  03e1640  fmr 25, 2
  03e1644  stw 4, 172(1)
  03e1648  addi 3, 3, 5576
  03e164c  stw 4, 168(1)
  03e1650  stw 4, 164(1)
  03e1654  lwz 5, 15496(5)
  03e1658  stw 4, 160(1)
  03e165c  fneg 30, 31
  03e1660  stw 5, 156(1)
  03e1664  stw 5, 152(1)
  03e1668  stw 5, 148(1)
  03e166c  lfs 29, 8(3)
  03e1670  lfs 28, 12(3)
  03e1674  lfs 27, 16(3)
  03e1678  fmr 22, 3
  03e167c  lfs 7, 20(3)
  03e1680  lfs 24, 24(3)
  03e1684  fadds 1, 30, 29
  03e1688  lfs 23, 28(3)
  03e168c  fmr 26, 7
  03e1690  lfs 21, 32(3)
  03e1694  std 31, 208(1)
  03e1698  ld 4, 0(3)
  03e169c  std 30, 200(1)
  03e16a0  ori 31, 6, 0
  03e16a4  ori 30, 4, 0
  03e16a8  fsubs 4, 28, 1
  03e16ac  fsubs 5, 27, 1
  03e16b0  fsub 6, 1, 4
  03e16b4  fsel 1, 6, 4, 1
  03e16b8  lfs 4, 36(3)
  03e16bc  std 30, 112(1)
  03e16c0  fmr 20, 4
  03e16c4  std 30, 120(1)
  03e16c8  std 30, 128(1)
  03e16cc  std 30, 136(1)
  03e16d0  fsub 2, 5, 1
  03e16d4  stw 5, 144(1)
  03e16d8  fsel 1, 2, 5, 1
  03e16dc  fmuls 3, 1, 1
  03e16e0  fmuls 2, 3, 1
  03e16e4  fmuls 5, 3, 2
  03e16e8  fmadds 1, 2, 26, 1
  03e16ec  fmuls 2, 3, 5
  03e16f0  fmadds 1, 5, 24, 1
  03e16f4  fmuls 3, 3, 2
  03e16f8  fmadds 1, 2, 23, 1
  03e16fc  fmadds 19, 3, 21, 1
  03e1700  fmuls 1, 19, 25
  03e1704  std 29, 192(1)
  03e1708  std 28, 184(1)
  03e170c  std 27, 176(1)
  03e1710  fmuls 1, 1, 20
  03e1714  bl 0x502758
  03e1718  nop
  03e171c  fsubs 1, 28, 30
  03e1720  fsubs 2, 27, 30
  03e1724  slwi 3, 3, 16
  03e1728  lis 29, -32768
  03e172c  neg 3, 3
  03e1730  subc 3, 3, 29
  03e1734  fsub 3, 30, 1
  03e1738  clrldi 3, 3, 32
  03e173c  addc 30, 3, 30
  03e1740  fsel 1, 3, 1, 30
  03e1744  std 30, 112(1)
  03e1748  fsub 3, 2, 1
  03e174c  fsel 1, 3, 2, 1
  03e1750  fmuls 2, 1, 1
  03e1754  fmuls 3, 2, 1
  03e1758  fmuls 4, 2, 3
  03e175c  fmadds 1, 3, 26, 1
  03e1760  fmuls 3, 2, 4
  03e1764  fmadds 1, 4, 24, 1
  03e1768  fmuls 2, 2, 3
  03e176c  fmadds 1, 3, 23, 1
  03e1770  fmadds 30, 2, 21, 1
  03e1774  fmuls 1, 30, 25
  03e1778  fmuls 1, 1, 20
  03e177c  bl 0x502758
  03e1780  nop
  03e1784  lis 4, 0
  03e1788  fmuls 1, 19, 22
  03e178c  ori 28, 4, 32768
  03e1790  ld 27, 120(1)
  03e1794  addc 3, 3, 28
  03e1798  extsw 3, 3
  03e179c  addc 3, 30, 3
  03e17a0  fmuls 1, 1, 20
  03e17a4  std 3, 112(1)
  03e17a8  bl 0x502758
  03e17ac  nop
  03e17b0  slwi 3, 3, 16
  03e17b4  fmuls 1, 30, 22
  03e17b8  neg 3, 3
  03e17bc  subc 3, 3, 29
  03e17c0  clrldi 3, 3, 32
  03e17c4  addc 30, 27, 3
  03e17c8  fmuls 1, 1, 20
  03e17cc  std 30, 120(1)
  03e17d0  bl 0x502758
  03e17d4  nop
  03e17d8  fadds 1, 31, 29
  03e17dc  addc 3, 3, 28
  03e17e0  ld 27, 128(1)
  03e17e4  extsw 3, 3
  03e17e8  addc 3, 30, 3
  03e17ec  fsubs 2, 28, 1
  03e17f0  fsubs 3, 27, 1
  03e17f4  std 3, 120(1)
  03e17f8  fsub 4, 1, 2
  03e17fc  fsel 1, 4, 2, 1
  03e1800  fsub 2, 3, 1
  03e1804  fsel 1, 2, 3, 1
  03e1808  fmuls 2, 1, 1
  03e180c  fmuls 3, 2, 1
  03e1810  fmuls 4, 2, 3
  03e1814  fmadds 1, 3, 26, 1
  03e1818  fmuls 3, 2, 4
  03e181c  fmadds 1, 4, 24, 1
  03e1820  fmuls 2, 2, 3
  03e1824  fmadds 1, 3, 23, 1
  03e1828  fmadds 30, 2, 21, 1
  03e182c  fmuls 1, 30, 25
  03e1830  fmuls 1, 1, 20
  03e1834  bl 0x502758
  03e1838  nop
  03e183c  fsubs 1, 28, 31
  03e1840  fsubs 2, 27, 31
  03e1844  slwi 3, 3, 16
  03e1848  neg 3, 3
  03e184c  subc 3, 3, 29
  03e1850  fsub 3, 31, 1
  03e1854  clrldi 3, 3, 32
  03e1858  addc 30, 27, 3
  03e185c  std 30, 128(1)
  03e1860  fsel 1, 3, 1, 31
  03e1864  fsub 3, 2, 1
  03e1868  fsel 1, 3, 2, 1
  03e186c  fmuls 2, 1, 1
  03e1870  fmuls 3, 2, 1
  03e1874  fmuls 4, 2, 3
  03e1878  fmadds 1, 3, 26, 1
  03e187c  fmuls 3, 2, 4
  03e1880  fmadds 1, 4, 24, 1
  03e1884  fmuls 2, 2, 3
  03e1888  fmadds 1, 3, 23, 1
  03e188c  fmadds 31, 2, 21, 1
  03e1890  fmuls 1, 31, 25
  03e1894  fmuls 1, 1, 20
  03e1898  bl 0x502758
  03e189c  nop
  03e18a0  fmuls 1, 30, 22
  03e18a4  addc 3, 3, 28
  03e18a8  ld 27, 136(1)
  03e18ac  extsw 3, 3
  03e18b0  addc 3, 30, 3
  03e18b4  std 3, 128(1)
  03e18b8  fmuls 1, 1, 20
  03e18bc  bl 0x502758
  03e18c0  nop
  03e18c4  slwi 3, 3, 16
  03e18c8  fmuls 1, 31, 22
  03e18cc  neg 3, 3
  03e18d0  subc 3, 3, 29
  03e18d4  clrldi 3, 3, 32
  03e18d8  addc 30, 27, 3
  03e18dc  fmuls 1, 1, 20
  03e18e0  std 30, 136(1)
  03e18e4  bl 0x502758
  03e18e8  nop
  03e18ec  addc 3, 3, 28
  03e18f0  li 7, 1
  03e18f4  extsw 3, 3
  03e18f8  addic 4, 1, 160
  03e18fc  addc 6, 30, 3
  03e1900  addic 3, 1, 112
  03e1904  addic 5, 1, 144
  03e1908  std 6, 136(1)
  03e190c  ori 6, 31, 0
  03e1910  bl 0x6ecf8
  03e1914  nop
  03e1918  ld 0, 336(1)
  03e191c  mtlr 0
  03e1920  lfd 19, 216(1)
  03e1924  lfd 20, 224(1)
  03e1928  lfd 21, 232(1)
  03e192c  lfd 22, 240(1)
  03e1930  lfd 23, 248(1)
  03e1934  lfd 24, 256(1)
  03e1938  lfd 25, 264(1)
  03e193c  lfd 26, 272(1)
  03e1940  lfd 27, 280(1)
  03e1944  lfd 28, 288(1)
  03e1948  lfd 29, 296(1)
  03e194c  lfd 30, 304(1)
  03e1950  lfd 31, 312(1)
  03e1954  ld 27, 176(1)
  03e1958  ld 28, 184(1)
  03e195c  ld 29, 192(1)
  03e1960  ld 30, 200(1)
  03e1964  ld 31, 208(1)
  03e1968  addi 1, 1, 320
  03e196c  blr

M617_003e19a0:   # 0x3e19a0, 0x670 bytes
  03e19a0  stdu 1, -368(1)
  03e19a4  mflr 0
  03e19a8  std 0, 384(1)
  03e19ac  stfd 19, 264(1)
  03e19b0  stfd 20, 272(1)
  03e19b4  stfd 21, 280(1)
  03e19b8  stfd 22, 288(1)
  03e19bc  stfd 23, 296(1)
  03e19c0  stfd 24, 304(1)
  03e19c4  stfd 25, 312(1)
  03e19c8  stfd 26, 320(1)
  03e19cc  stfd 27, 328(1)
  03e19d0  stfd 28, 336(1)
  03e19d4  stfd 29, 344(1)
  03e19d8  stfd 30, 352(1)
  03e19dc  stfd 31, 360(1)
  03e19e0  lis 3, 161
  03e19e4  lis 4, 133
  03e19e8  fmr 31, 1
  03e19ec  fmr 30, 2
  03e19f0  lwz 3, 1808(3)
  03e19f4  extsw 3, 3
  03e19f8  std 3, 176(1)
  03e19fc  lfs 1, 15284(4)
  03e1a00  lis 3, 62
  03e1a04  std 31, 256(1)
  03e1a08  lfd 2, 176(1)
  03e1a0c  addi 31, 3, 6512
  03e1a10  fcfid 2, 2
  03e1a14  frsp 2, 2
  03e1a18  std 30, 248(1)
  03e1a1c  std 29, 240(1)
  03e1a20  std 28, 232(1)
  03e1a24  std 27, 224(1)
  03e1a28  std 26, 216(1)
  03e1a2c  std 25, 208(1)
  03e1a30  std 24, 200(1)
  03e1a34  std 23, 192(1)
  03e1a38  fmuls 1, 2, 1
  03e1a3c  bl 0x502758
  03e1a40  nop
  03e1a44  srawi 4, 3, 9
  03e1a48  lis 5, 133
  03e1a4c  addze 4, 4
  03e1a50  lis 6, 133
  03e1a54  lis 7, 133
  03e1a58  sldi 4, 4, 9
  03e1a5c  lis 8, 269
  03e1a60  subc 3, 3, 4
  03e1a64  lwz 4, 15172(5)
  03e1a68  lwz 5, 15176(6)
  03e1a6c  sldi 3, 3, 16
  03e1a70  lwz 6, 15180(7)
  03e1a74  lis 30, 133
  03e1a78  addc 4, 4, 3
  03e1a7c  lwz 7, -20504(8)
  03e1a80  addc 6, 6, 3
  03e1a84  addc 5, 5, 3
  03e1a88  addc 3, 7, 3
  03e1a8c  lis 29, 133
  03e1a90  stw 6, 168(1)
  03e1a94  stw 4, 160(1)
  03e1a98  stw 5, 164(1)
  03e1a9c  stw 3, 172(1)
  03e1aa0  lfs 29, 0(31)
  03e1aa4  lfs 28, 4(31)
  03e1aa8  lwz 3, 15520(30)
  03e1aac  lwz 4, 15524(29)
  03e1ab0  extsw 28, 3
  03e1ab4  fmr 1, 29
  03e1ab8  extsw 27, 4
  03e1abc  fmr 2, 28
  03e1ac0  bl 0xfcbe8
  03e1ac4  nop
  03e1ac8  ori 3, 28, 0
  03e1acc  ori 4, 27, 0
  03e1ad0  bl 0x5027bc
  03e1ad4  nop
  03e1ad8  lis 4, 133
  03e1adc  stw 3, 156(1)
  03e1ae0  stw 3, 152(1)
  03e1ae4  stw 3, 148(1)
  03e1ae8  stw 3, 144(1)
  03e1aec  lwz 3, 15288(4)
  03e1af0  extsw 3, 3
  03e1af4  bl 0x685c4
  03e1af8  nop
  03e1afc  lis 4, 133
  03e1b00  lis 5, 133
  03e1b04  lis 6, 133
  03e1b08  lis 7, 133
  03e1b0c  ori 28, 3, 0
  03e1b10  lwz 4, 15184(4)
  03e1b14  li 3, 5
  03e1b18  lwz 5, 15196(5)
  03e1b1c  lwz 6, 15188(6)
  03e1b20  stw 4, 160(1)
  03e1b24  lwz 4, 15192(7)
  03e1b28  stw 6, 164(1)
  03e1b2c  stw 4, 168(1)
  03e1b30  stw 5, 172(1)
  03e1b34  bl 0xfc620
  03e1b38  nop
  03e1b3c  ori 27, 3, 0
  03e1b40  li 3, 5
  03e1b44  addic 26, 27, 15
  03e1b48  bl 0xfc620
  03e1b4c  nop
  03e1b50  lfs 1, 8(31)
  03e1b54  lfs 2, 32(31)
  03e1b58  fsubs 4, 1, 31
  03e1b5c  lfs 3, 12(31)
  03e1b60  fadds 2, 31, 2
  03e1b64  fsubs 5, 3, 31
  03e1b68  lfs 7, 16(31)
  03e1b6c  subc 3, 27, 3
  03e1b70  extsw 4, 26
  03e1b74  addic 3, 3, 10
  03e1b78  extsw 3, 3
  03e1b7c  fsub 6, 31, 4
  03e1b80  fsubs 1, 1, 2
  03e1b84  fsubs 3, 3, 2
  03e1b88  fsel 4, 6, 4, 31
  03e1b8c  fsub 6, 2, 1
  03e1b90  fsub 10, 5, 4
  03e1b94  fsel 1, 6, 1, 2
  03e1b98  lfs 6, 20(31)
  03e1b9c  lfs 8, 24(31)
  03e1ba0  lfs 2, 28(31)
  03e1ba4  std 4, 176(1)
  03e1ba8  fsel 4, 10, 5, 4
  03e1bac  fsub 5, 3, 1
  03e1bb0  lfs 10, 36(31)
  03e1bb4  lfd 11, 176(1)
  03e1bb8  std 3, 176(1)
  03e1bbc  fcfid 11, 11
  03e1bc0  fmuls 9, 4, 4
  03e1bc4  fsel 1, 5, 3, 1
  03e1bc8  fmuls 3, 9, 4
  03e1bcc  fmuls 5, 1, 1
  03e1bd0  fmuls 12, 9, 3
  03e1bd4  fmadds 3, 3, 7, 4
  03e1bd8  fmuls 4, 5, 1
  03e1bdc  fmuls 13, 9, 12
  03e1be0  fmadds 3, 12, 6, 3
  03e1be4  fmuls 12, 5, 4
  03e1be8  fmadds 1, 4, 7, 1
  03e1bec  fmr 4, 10
  03e1bf0  frsp 10, 11
  03e1bf4  fmuls 7, 9, 13
  03e1bf8  fmadds 3, 13, 8, 3
  03e1bfc  fmuls 9, 5, 12
  03e1c00  fmadds 1, 12, 6, 1
  03e1c04  lfd 6, 176(1)
  03e1c08  ld 3, 40(31)
  03e1c0c  fcfid 6, 6
  03e1c10  ori 31, 3, 0
  03e1c14  fmadds 31, 7, 2, 3
  03e1c18  fmuls 3, 5, 9
  03e1c1c  std 31, 136(1)
  03e1c20  fmadds 1, 9, 8, 1
  03e1c24  std 31, 128(1)
  03e1c28  fadds 5, 30, 10
  03e1c2c  std 31, 120(1)
  03e1c30  std 31, 112(1)
  03e1c34  frsp 6, 6
  03e1c38  fmuls 7, 31, 4
  03e1c3c  fmadds 27, 3, 2, 1
  03e1c40  fmuls 1, 31, 6
  03e1c44  fmuls 2, 27, 4
  03e1c48  fmsubs 26, 27, 30, 7
  03e1c4c  fmuls 3, 27, 6
  03e1c50  fmsubs 24, 27, 5, 1
  03e1c54  fmadds 23, 27, 5, 1
  03e1c58  fmadds 25, 27, 30, 7
  03e1c5c  fmadds 22, 31, 30, 2
  03e1c60  fmsubs 21, 31, 30, 2
  03e1c64  fmadds 20, 31, 5, 3
  03e1c68  fmsubs 19, 31, 5, 3
  03e1c6c  fmr 1, 26
  03e1c70  bl 0x502758
  03e1c74  nop
  03e1c78  slwi 3, 3, 20
  03e1c7c  fmr 1, 22
  03e1c80  lis 27, -32768
  03e1c84  neg 3, 3
  03e1c88  subc 3, 3, 27
  03e1c8c  clrldi 3, 3, 32
  03e1c90  addc 26, 3, 31
  03e1c94  std 26, 112(1)
  03e1c98  bl 0x502758
  03e1c9c  nop
  03e1ca0  lis 4, 0
  03e1ca4  ld 24, 120(1)
  03e1ca8  slwi 3, 3, 4
  03e1cac  fmr 1, 25
  03e1cb0  ori 25, 4, 32768
  03e1cb4  addc 3, 3, 25
  03e1cb8  extsw 3, 3
  03e1cbc  addc 3, 26, 3
  03e1cc0  std 3, 112(1)
  03e1cc4  bl 0x502758
  03e1cc8  nop
  03e1ccc  slwi 3, 3, 20
  03e1cd0  fmr 1, 21
  03e1cd4  neg 3, 3
  03e1cd8  subc 3, 3, 27
  03e1cdc  clrldi 3, 3, 32
  03e1ce0  addc 26, 24, 3
  03e1ce4  std 26, 120(1)
  03e1ce8  bl 0x502758
  03e1cec  nop
  03e1cf0  slwi 3, 3, 4
  03e1cf4  ld 24, 128(1)
  03e1cf8  fmr 1, 24
  03e1cfc  addc 3, 3, 25
  03e1d00  extsw 3, 3
  03e1d04  addc 3, 26, 3
  03e1d08  std 3, 120(1)
  03e1d0c  bl 0x502758
  03e1d10  nop
  03e1d14  slwi 3, 3, 20
  03e1d18  fmr 1, 20
  03e1d1c  neg 3, 3
  03e1d20  subc 3, 3, 27
  03e1d24  clrldi 3, 3, 32
  03e1d28  addc 26, 24, 3
  03e1d2c  std 26, 128(1)
  03e1d30  bl 0x502758
  03e1d34  nop
  03e1d38  slwi 3, 3, 4
  03e1d3c  ld 24, 136(1)
  03e1d40  fmr 1, 23
  03e1d44  addc 3, 3, 25
  03e1d48  extsw 3, 3
  03e1d4c  addc 3, 26, 3
  03e1d50  std 3, 128(1)
  03e1d54  bl 0x502758
  03e1d58  nop
  03e1d5c  slwi 3, 3, 20
  03e1d60  fmr 1, 19
  03e1d64  neg 3, 3
  03e1d68  subc 3, 3, 27
  03e1d6c  clrldi 3, 3, 32
  03e1d70  addc 26, 24, 3
  03e1d74  std 26, 136(1)
  03e1d78  bl 0x502758
  03e1d7c  nop
  03e1d80  slwi 3, 3, 4
  03e1d84  addic 23, 1, 112
  03e1d88  addc 3, 3, 25
  03e1d8c  addic 24, 1, 144
  03e1d90  extsw 3, 3
  03e1d94  ori 5, 24, 0
  03e1d98  addc 4, 26, 3
  03e1d9c  addic 26, 1, 160
  03e1da0  ori 3, 23, 0
  03e1da4  ori 6, 28, 0
  03e1da8  std 4, 136(1)
  03e1dac  li 7, 0
  03e1db0  ori 4, 26, 0
  03e1db4  bl 0x6ecf8
  03e1db8  nop
  03e1dbc  lwz 3, 15520(30)
  03e1dc0  lwz 4, 15524(29)
  03e1dc4  extsw 30, 3
  03e1dc8  fmr 1, 29
  03e1dcc  extsw 29, 4
  03e1dd0  fmr 2, 28
  03e1dd4  bl 0xfcbe8
  03e1dd8  nop
  03e1ddc  ori 3, 30, 0
  03e1de0  ori 4, 29, 0
  03e1de4  bl 0x5027bc
  03e1de8  nop
  03e1dec  stw 3, 156(1)
  03e1df0  stw 3, 152(1)
  03e1df4  stw 3, 148(1)
  03e1df8  stw 3, 144(1)
  03e1dfc  li 3, 5
  03e1e00  bl 0xfc620
  03e1e04  nop
  03e1e08  addic 30, 3, 5
  03e1e0c  li 3, 5
  03e1e10  bl 0xfc620
  03e1e14  nop
  03e1e18  extsw 4, 30
  03e1e1c  addc 3, 30, 3
  03e1e20  extsw 3, 3
  03e1e24  std 4, 176(1)
  03e1e28  std 31, 136(1)
  03e1e2c  std 31, 128(1)
  03e1e30  std 31, 120(1)
  03e1e34  std 31, 112(1)
  03e1e38  lfd 2, 176(1)
  03e1e3c  std 3, 176(1)
  03e1e40  fcfid 2, 2
  03e1e44  fmr 1, 26
  03e1e48  frsp 2, 2
  03e1e4c  lfd 3, 176(1)
  03e1e50  fadds 2, 30, 2
  03e1e54  fcfid 3, 3
  03e1e58  frsp 3, 3
  03e1e5c  fmuls 4, 27, 3
  03e1e60  fmuls 3, 31, 3
  03e1e64  fmadds 30, 31, 2, 4
  03e1e68  fmsubs 31, 31, 2, 4
  03e1e6c  fmsubs 29, 27, 2, 3
  03e1e70  fmadds 28, 27, 2, 3
  03e1e74  bl 0x502758
  03e1e78  nop
  03e1e7c  slwi 3, 3, 20
  03e1e80  fmr 1, 22
  03e1e84  neg 3, 3
  03e1e88  subc 3, 3, 27
  03e1e8c  clrldi 3, 3, 32
  03e1e90  addc 31, 3, 31
  03e1e94  std 31, 112(1)
  03e1e98  bl 0x502758
  03e1e9c  nop
  03e1ea0  slwi 3, 3, 4
  03e1ea4  ld 30, 120(1)
  03e1ea8  fmr 1, 25
  03e1eac  addc 3, 3, 25
  03e1eb0  extsw 3, 3
  03e1eb4  addc 3, 31, 3
  03e1eb8  std 3, 112(1)
  03e1ebc  bl 0x502758
  03e1ec0  nop
  03e1ec4  slwi 3, 3, 20
  03e1ec8  fmr 1, 21
  03e1ecc  neg 3, 3
  03e1ed0  subc 3, 3, 27
  03e1ed4  clrldi 3, 3, 32
  03e1ed8  addc 31, 30, 3
  03e1edc  std 31, 120(1)
  03e1ee0  bl 0x502758
  03e1ee4  nop
  03e1ee8  slwi 3, 3, 4
  03e1eec  ld 30, 128(1)
  03e1ef0  fmr 1, 29
  03e1ef4  addc 3, 3, 25
  03e1ef8  extsw 3, 3
  03e1efc  addc 3, 31, 3
  03e1f00  std 3, 120(1)
  03e1f04  bl 0x502758
  03e1f08  nop
  03e1f0c  slwi 3, 3, 20
  03e1f10  fmr 1, 30
  03e1f14  neg 3, 3
  03e1f18  subc 3, 3, 27
  03e1f1c  clrldi 3, 3, 32
  03e1f20  addc 31, 30, 3
  03e1f24  std 31, 128(1)
  03e1f28  bl 0x502758
  03e1f2c  nop
  03e1f30  slwi 3, 3, 4
  03e1f34  ld 30, 136(1)
  03e1f38  fmr 1, 28
  03e1f3c  addc 3, 3, 25
  03e1f40  extsw 3, 3
  03e1f44  addc 3, 31, 3
  03e1f48  std 3, 128(1)
  03e1f4c  bl 0x502758
  03e1f50  nop
  03e1f54  slwi 3, 3, 20
  03e1f58  fmr 1, 31
  03e1f5c  neg 3, 3
  03e1f60  subc 3, 3, 27
  03e1f64  clrldi 3, 3, 32
  03e1f68  addc 31, 30, 3
  03e1f6c  std 31, 136(1)
  03e1f70  bl 0x502758
  03e1f74  nop
  03e1f78  slwi 3, 3, 4
  03e1f7c  ori 5, 24, 0
  03e1f80  addc 3, 3, 25
  03e1f84  ori 6, 28, 0
  03e1f88  extsw 4, 3
  03e1f8c  ori 3, 23, 0
  03e1f90  addc 8, 31, 4
  03e1f94  ori 4, 26, 0
  03e1f98  li 7, 0
  03e1f9c  std 8, 136(1)
  03e1fa0  bl 0x6ecf8
  03e1fa4  nop
  03e1fa8  ld 0, 384(1)
  03e1fac  mtlr 0
  03e1fb0  lfd 19, 264(1)
  03e1fb4  lfd 20, 272(1)
  03e1fb8  lfd 21, 280(1)
  03e1fbc  lfd 22, 288(1)
  03e1fc0  lfd 23, 296(1)
  03e1fc4  lfd 24, 304(1)
  03e1fc8  lfd 25, 312(1)
  03e1fcc  lfd 26, 320(1)
  03e1fd0  lfd 27, 328(1)
  03e1fd4  lfd 28, 336(1)
  03e1fd8  lfd 29, 344(1)
  03e1fdc  lfd 30, 352(1)
  03e1fe0  lfd 31, 360(1)
  03e1fe4  ld 23, 192(1)
  03e1fe8  ld 24, 200(1)
  03e1fec  ld 25, 208(1)
  03e1ff0  ld 26, 216(1)
  03e1ff4  ld 27, 224(1)
  03e1ff8  ld 28, 232(1)
  03e1ffc  ld 29, 240(1)
  03e2000  ld 30, 248(1)
  03e2004  ld 31, 256(1)
  03e2008  addi 1, 1, 368
  03e200c  blr

M617_003e2010:   # 0x3e2010, 0x14 bytes
  03e2010  lis 3, 133
  03e2014  lis 4, 1
  03e2018  addic 3, 3, 15544
  03e201c  stw 4, 72(3)
  03e2020  blr

UpdateMoby_617:   # 0x3e2030, 0x184 bytes
  03e2030  stdu 1, -176(1)
  03e2034  mflr 0
  03e2038  std 0, 192(1)
  03e203c  stfd 29, 152(1)
  03e2040  stfd 30, 160(1)
  03e2044  stfd 31, 168(1)
  03e2048  std 31, 144(1)
  03e204c  ori 31, 3, 0
  03e2050  lis 3, 164
  03e2054  lis 4, 62
  03e2058  std 28, 120(1)
  03e205c  lis 6, 165
  03e2060  addi 28, 4, 8232
  03e2064  std 30, 136(1)
  03e2068  lwz 5, 120(31)
  03e206c  addic 30, 6, 7136
  03e2070  lwz 3, -28512(3)
  03e2074  lwz 4, 8(5)
  03e2078  lwz 6, 0(5)
  03e207c  slwi 4, 4, 2
  03e2080  lwz 5, 4(5)
  03e2084  slwi 6, 6, 8
  03e2088  extsw 4, 4
  03e208c  slwi 5, 5, 8
  03e2090  std 29, 128(1)
  03e2094  addc 6, 3, 6
  03e2098  addc 29, 3, 5
  03e209c  clrldi 3, 6, 32
  03e20a0  lwzx 30, 30, 4
  03e20a4  clrldi 29, 29, 32
  03e20a8  std 27, 112(1)
  03e20ac  lwz 4, 0(30)
  03e20b0  lwz 27, 120(3)
  03e20b4  addic 3, 4, -1
  03e20b8  extsw 3, 3
  03e20bc  bl 0x502730
  03e20c0  nop
  03e20c4  lfs 31, 0(28)
  03e20c8  lfs 2, 0(27)
  03e20cc  fsubs 3, 31, 2
  03e20d0  fmr 2, 31
  03e20d4  fmuls 29, 3, 1
  03e20d8  fmr 1, 29
  03e20dc  bl 0x502798
  03e20e0  nop
  03e20e4  fmr 30, 1
  03e20e8  fmr 1, 29
  03e20ec  bl 0x502758
  03e20f0  nop
  03e20f4  lfs 1, 4(28)
  03e20f8  ori 4, 3, 0
  03e20fc  fcmpu 0, 30, 1
  03e2100  bt 2, 0x3e2108
  03e2104  addic 3, 4, 1
  03e2108  sldi 3, 3, 4
  03e210c  fsubs 1, 31, 30
  03e2110  sldi 4, 4, 4
  03e2114  addc 3, 30, 3
  03e2118  addc 4, 30, 4
  03e211c  clrldi 3, 3, 32
  03e2120  clrldi 4, 4, 32
  03e2124  lfs 2, 20(3)
  03e2128  lfs 3, 24(3)
  03e212c  lfs 4, 20(4)
  03e2130  lfs 5, 24(4)
  03e2134  fmuls 2, 2, 30
  03e2138  lfs 6, 16(4)
  03e213c  fmuls 3, 3, 30
  03e2140  lfs 7, 16(3)
  03e2144  lfs 8, 28(4)
  03e2148  fmuls 7, 7, 30
  03e214c  stfs 8, 28(31)
  03e2150  fmadds 2, 4, 1, 2
  03e2154  fmadds 3, 5, 1, 3
  03e2158  fmadds 1, 6, 1, 7
  03e215c  stfs 2, 20(31)
  03e2160  stfs 3, 24(31)
  03e2164  stfs 1, 16(31)
  03e2168  stfs 1, 16(29)
  03e216c  lfs 1, 20(31)
  03e2170  stfs 1, 20(29)
  03e2174  lfs 1, 24(31)
  03e2178  stfs 1, 24(29)
  03e217c  lfs 1, 28(31)
  03e2180  stfs 1, 28(29)
  03e2184  ld 0, 192(1)
  03e2188  mtlr 0
  03e218c  lfd 29, 152(1)
  03e2190  lfd 30, 160(1)
  03e2194  lfd 31, 168(1)
  03e2198  ld 27, 112(1)
  03e219c  ld 28, 120(1)
  03e21a0  ld 29, 128(1)
  03e21a4  ld 30, 136(1)
  03e21a8  ld 31, 144(1)
  03e21ac  addi 1, 1, 176
  03e21b0  blr
