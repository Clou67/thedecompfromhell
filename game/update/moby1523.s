# game/update/moby1523.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

Spawn_Moby1523_Blueball2:   # 0xec2d8, 0x13c bytes
  00ec2d8  stdu 1, -160(1)
  00ec2dc  mflr 0
  00ec2e0  std 0, 176(1)
  00ec2e4  std 31, 152(1)
  00ec2e8  li 3, 1523
  00ec2ec  std 30, 144(1)
  00ec2f0  std 29, 136(1)
  00ec2f4  std 28, 128(1)
  00ec2f8  std 27, 120(1)
  00ec2fc  std 26, 112(1)
  00ec300  ori 31, 4, 0
  00ec304  bl 0xefa28
  00ec308  nop
  00ec30c  ori 30, 3, 0
  00ec310  cmpwi 30, 0
  00ec314  bt 2, 0xec3e8
  00ec318  lis 3, 115
  00ec31c  lwz 3, -28812(3)
  00ec320  cmpwi 3, 0
  00ec324  bf 2, 0xec3e8
  00ec328  li 4, 255
  00ec32c  li 3, 1
  00ec330  li 29, 0
  00ec334  lis 6, 150
  00ec338  stb 4, 48(30)
  00ec33c  lis 27, 150
  00ec340  sth 4, 50(30)
  00ec344  addic 7, 6, -12512
  00ec348  stb 3, 49(30)
  00ec34c  li 5, 0
  00ec350  stb 29, 32(30)
  00ec354  lis 3, 115
  00ec358  lfs 1, 0(31)
  00ec35c  lis 8, 255
  00ec360  lwz 28, 120(30)
  00ec364  addic 26, 27, -12496
  00ec368  stfs 1, 16(30)
  00ec36c  ori 8, 8, 65535
  00ec370  lfs 1, 4(31)
  00ec374  stfs 1, 20(30)
  00ec378  lfs 1, 8(31)
  00ec37c  stfs 1, 24(30)
  00ec380  lfs 1, 12(31)
  00ec384  stfs 1, 28(30)
  00ec388  stw 30, -28812(3)
  00ec38c  li 3, 2
  00ec390  stw 4, 4(7)
  00ec394  std 5, 8(7)
  00ec398  stb 29, -12512(6)
  00ec39c  li 4, 0
  00ec3a0  stw 8, 4(26)
  00ec3a4  li 5, 0
  00ec3a8  li 6, 1
  00ec3ac  li 7, 31
  00ec3b0  bl 0x502ea8
  00ec3b4  nop
  00ec3b8  std 3, 8(26)
  00ec3bc  li 6, 0
  00ec3c0  lis 3, 15
  00ec3c4  stb 29, -12496(27)
  00ec3c8  stw 29, 16(28)
  00ec3cc  addi 4, 3, -15664
  00ec3d0  ori 3, 31, 0
  00ec3d4  lfs 1, 0(4)
  00ec3d8  fmr 2, 1
  00ec3dc  bl 0xda308
  00ec3e0  nop
  00ec3e4  sth 3, 44(28)
  00ec3e8  ori 3, 30, 0
  00ec3ec  ld 0, 176(1)
  00ec3f0  mtlr 0
  00ec3f4  ld 26, 112(1)
  00ec3f8  ld 27, 120(1)
  00ec3fc  ld 28, 128(1)
  00ec400  ld 29, 136(1)
  00ec404  ld 30, 144(1)
  00ec408  ld 31, 152(1)
  00ec40c  addi 1, 1, 160
  00ec410  blr

Spawn_Moby1523_GC_Blueball:   # 0xec418, 0x1a0 bytes
  00ec418  stdu 1, -160(1)
  00ec41c  mflr 0
  00ec420  std 0, 176(1)
  00ec424  std 30, 144(1)
  00ec428  lis 4, 115
  00ec42c  std 31, 152(1)
  00ec430  li 30, 160
  00ec434  addc 31, 1, 30
  00ec438  addic 30, 30, 64
  00ec43c  lwz 3, -28812(4)
  00ec440  std 29, 136(1)
  00ec444  std 28, 128(1)
  00ec448  std 27, 120(1)
  00ec44c  std 26, 112(1)
  00ec450  cmpwi 3, 0
  00ec454  std 5, 64(31)
  00ec458  std 6, 72(31)
  00ec45c  bf 2, 0xec548
  00ec460  li 3, 1523
  00ec464  bl 0xefa28
  00ec468  nop
  00ec46c  cmpwi 3, 0
  00ec470  bt 2, 0xec548
  00ec474  lis 4, 115
  00ec478  lwz 4, -28812(4)
  00ec47c  cmpwi 4, 0
  00ec480  bf 2, 0xec548
  00ec484  li 4, 255
  00ec488  li 5, 1
  00ec48c  li 29, 0
  00ec490  lis 7, 115
  00ec494  stb 4, 48(3)
  00ec498  lis 27, 150
  00ec49c  sth 4, 50(3)
  00ec4a0  li 6, 0
  00ec4a4  stb 5, 49(3)
  00ec4a8  lis 9, 255
  00ec4ac  stb 29, 32(3)
  00ec4b0  lis 5, 150
  00ec4b4  lfs 1, 64(31)
  00ec4b8  addic 26, 27, -12496
  00ec4bc  lwz 28, 120(3)
  00ec4c0  addic 8, 5, -12512
  00ec4c4  stfs 1, 16(3)
  00ec4c8  ori 9, 9, 65535
  00ec4cc  lfs 1, 68(31)
  00ec4d0  stfs 1, 20(3)
  00ec4d4  lfs 1, 72(31)
  00ec4d8  stw 3, -28812(7)
  00ec4dc  stfs 1, 24(3)
  00ec4e0  li 7, 31
  00ec4e4  lfs 1, 76(31)
  00ec4e8  stw 4, 4(8)
  00ec4ec  stfs 1, 28(3)
  00ec4f0  li 4, 0
  00ec4f4  li 3, 2
  00ec4f8  std 6, 8(8)
  00ec4fc  stb 29, -12512(5)
  00ec500  li 6, 1
  00ec504  stw 9, 4(26)
  00ec508  li 5, 0
  00ec50c  bl 0x502ea8
  00ec510  nop
  00ec514  std 3, 8(26)
  00ec518  li 6, 0
  00ec51c  lis 3, 15
  00ec520  stb 29, -12496(27)
  00ec524  stw 29, 16(28)
  00ec528  addi 4, 3, -15340
  00ec52c  addc 3, 1, 30
  00ec530  clrldi 3, 3, 32
  00ec534  lfs 1, 0(4)
  00ec538  fmr 2, 1
  00ec53c  bl 0xda308
  00ec540  nop
  00ec544  sth 3, 44(28)
  00ec548  lis 3, 115
  00ec54c  lwz 3, -28812(3)
  00ec550  cmpwi 3, 0
  00ec554  bt 2, 0xec590
  00ec558  lhz 5, 166(3)
  00ec55c  lwz 4, 120(3)
  00ec560  cmpwi 5, 1523
  00ec564  bf 2, 0xec590
  00ec568  lfs 1, 64(31)
  00ec56c  li 5, 1
  00ec570  stfs 1, 16(3)
  00ec574  lfs 1, 68(31)
  00ec578  stfs 1, 20(3)
  00ec57c  lfs 1, 72(31)
  00ec580  sth 5, 46(4)
  00ec584  stfs 1, 24(3)
  00ec588  lfs 1, 76(31)
  00ec58c  stfs 1, 28(3)
  00ec590  ld 0, 176(1)
  00ec594  mtlr 0
  00ec598  ld 26, 112(1)
  00ec59c  ld 27, 120(1)
  00ec5a0  ld 28, 128(1)
  00ec5a4  ld 29, 136(1)
  00ec5a8  ld 30, 144(1)
  00ec5ac  ld 31, 152(1)
  00ec5b0  addi 1, 1, 160
  00ec5b4  blr

M1523_Blueball_HandleDeletion:   # 0xec5b8, 0xa4 bytes
  00ec5b8  stdu 1, -112(1)
  00ec5bc  mflr 0
  00ec5c0  std 0, 128(1)
  00ec5c4  lis 3, 115
  00ec5c8  lwz 3, -28812(3)
  00ec5cc  cmpwi 3, 0
  00ec5d0  bt 2, 0xec64c
  00ec5d4  lhz 4, 166(3)
  00ec5d8  cmpwi 4, 1523
  00ec5dc  bt 2, 0xec5f0
  00ec5e0  lis 3, 115
  00ec5e4  li 4, 0
  00ec5e8  stw 4, -28812(3)
  00ec5ec  b 0xec64c
  00ec5f0  lbz 4, 32(3)
  00ec5f4  cmpwi 4, 0
  00ec5f8  bf 2, 0xec64c
  00ec5fc  lis 4, 150
  00ec600  lwz 7, 120(3)
  00ec604  li 5, 0
  00ec608  lis 6, 150
  00ec60c  stb 5, -12512(4)
  00ec610  stb 5, -12496(6)
  00ec614  lhz 4, 44(7)
  00ec618  extsh 4, 4
  00ec61c  cmpwi 4, -1
  00ec620  bt 2, 0xec638
  00ec624  ori 3, 4, 0
  00ec628  bl 0xda9e8
  00ec62c  nop
  00ec630  lis 3, 115
  00ec634  lwz 3, -28812(3)
  00ec638  bl 0xefb38
  00ec63c  nop
  00ec640  lis 3, 115
  00ec644  li 4, 0
  00ec648  stw 4, -28812(3)
  00ec64c  ld 0, 128(1)
  00ec650  mtlr 0
  00ec654  addi 1, 1, 112
  00ec658  blr

UpdateMoby_1523_GC_Blueball:   # 0xec6f0, 0xcbc bytes
  00ec6f0  stdu 1, -432(1)
  00ec6f4  mflr 0
  00ec6f8  std 0, 448(1)
  00ec6fc  stfd 24, 368(1)
  00ec700  stfd 25, 376(1)
  00ec704  stfd 26, 384(1)
  00ec708  stfd 27, 392(1)
  00ec70c  stfd 28, 400(1)
  00ec710  stfd 29, 408(1)
  00ec714  stfd 30, 416(1)
  00ec718  stfd 31, 424(1)
  00ec71c  std 24, 304(1)
  00ec720  addi 0, 1, 272
  00ec724  stvx 31, 0, 0
  00ec728  lbz 4, 32(3)
  00ec72c  std 30, 352(1)
  00ec730  lis 24, 15
  00ec734  lwz 30, 120(3)
  00ec738  std 31, 360(1)
  00ec73c  cmpwi 4, 0
  00ec740  ori 31, 3, 0
  00ec744  addi 24, 24, -14756
  00ec748  cmpwi 1, 4, -1
  00ec74c  std 29, 344(1)
  00ec750  std 28, 336(1)
  00ec754  std 27, 328(1)
  00ec758  std 26, 320(1)
  00ec75c  std 25, 312(1)
  00ec760  std 23, 296(1)
  00ec764  std 22, 288(1)
  00ec768  cmpwi 6, 4, 1
  00ec76c  bt 1, 0xec778
  00ec770  bf 5, 0xed344
  00ec774  b 0xec780
  00ec778  bf 25, 0xecdc0
  00ec77c  b 0xed344
  00ec780  lhz 3, 46(30)
  00ec784  cmpwi 3, 0
  00ec788  bt 2, 0xecccc
  00ec78c  lis 3, 151
  00ec790  addic 3, 3, -25376
  00ec794  lbz 3, 8356(3)
  00ec798  cmpwi 3, 2
  00ec79c  bf 2, 0xecccc
  00ec7a0  lwz 29, 16(30)
  00ec7a4  cmpwi 29, 0
  00ec7a8  bf 2, 0xec7cc
  00ec7ac  lis 3, 150
  00ec7b0  lis 4, 255
  00ec7b4  li 5, 1
  00ec7b8  addic 6, 3, -12496
  00ec7bc  ori 4, 4, 65280
  00ec7c0  stb 5, -12496(3)
  00ec7c4  stw 4, 4(6)
  00ec7c8  lwz 29, 16(30)
  00ec7cc  addic 4, 29, 1
  00ec7d0  extsw 3, 4
  00ec7d4  stw 4, 16(30)
  00ec7d8  bl 0x502730
  00ec7dc  nop
  00ec7e0  lis 3, 114
  00ec7e4  lfs 31, 0(24)
  00ec7e8  li 29, 0
  00ec7ec  lfs 2, -3056(3)
  00ec7f0  fmuls 2, 2, 31
  00ec7f4  lfs 30, 4(24)
  00ec7f8  lfs 29, 8(24)
  00ec7fc  ori 27, 29, 0
  00ec800  lfs 28, 12(24)
  00ec804  addic 26, 31, 16
  00ec808  lfs 27, 16(24)
  00ec80c  lfs 26, 20(24)
  00ec810  lfs 25, 24(24)
  00ec814  fdivs 1, 1, 2
  00ec818  fsub 2, 30, 1
  00ec81c  fsel 1, 2, 1, 30
  00ec820  fmuls 1, 1, 1
  00ec824  fmuls 29, 1, 29
  00ec828  fmr 1, 29
  00ec82c  bl 0x502758
  00ec830  nop
  00ec834  cmpw 29, 3
  00ec838  bf 0, 0xec9c4
  00ec83c  fmr 1, 27
  00ec840  stw 27, 160(1)
  00ec844  fmr 2, 30
  00ec848  stw 27, 164(1)
  00ec84c  stw 27, 168(1)
  00ec850  stw 27, 172(1)
  00ec854  bl 0xfcbe8
  00ec858  nop
  00ec85c  stfs 1, 160(1)
  00ec860  fmr 1, 27
  00ec864  fmr 2, 30
  00ec868  bl 0xfcbe8
  00ec86c  nop
  00ec870  stfs 1, 164(1)
  00ec874  fmr 2, 30
  00ec878  fmr 1, 27
  00ec87c  bl 0xfcbe8
  00ec880  nop
  00ec884  li 3, 79
  00ec888  li 4, 175
  00ec88c  stfs 1, 168(1)
  00ec890  bl 0xfe484
  00ec894  nop
  00ec898  ori 28, 3, 0
  00ec89c  li 4, 255
  00ec8a0  li 3, 79
  00ec8a4  bl 0xfe484
  00ec8a8  nop
  00ec8ac  li 4, 255
  00ec8b0  li 5, 255
  00ec8b4  fmr 2, 25
  00ec8b8  subc 4, 4, 28
  00ec8bc  fmr 1, 26
  00ec8c0  li 6, 255
  00ec8c4  subc 5, 5, 28
  00ec8c8  sradi 4, 4, 63
  00ec8cc  subc 6, 6, 3
  00ec8d0  li 7, 255
  00ec8d4  and 4, 4, 5
  00ec8d8  subc 5, 7, 3
  00ec8dc  sradi 6, 6, 63
  00ec8e0  addc 28, 28, 4
  00ec8e4  and 4, 6, 5
  00ec8e8  addc 25, 3, 4
  00ec8ec  bl 0xfcbe8
  00ec8f0  nop
  00ec8f4  lfs 2, 164(1)
  00ec8f8  lfs 3, 160(1)
  00ec8fc  fmuls 4, 2, 2
  00ec900  lfs 5, 168(1)
  00ec904  addic 3, 1, 176
  00ec908  addic 4, 1, 160
  00ec90c  ori 5, 26, 0
  00ec910  fmadds 4, 3, 3, 4
  00ec914  fmadds 4, 5, 5, 4
  00ec918  fsqrts 4, 4
  00ec91c  fdivs 1, 1, 4
  00ec920  fsub 6, 28, 4
  00ec924  fsub 7, 28, 4
  00ec928  fsub 8, 28, 4
  00ec92c  fsub 9, 4, 28
  00ec930  fsub 10, 4, 28
  00ec934  fsub 4, 4, 28
  00ec938  fmuls 3, 3, 1
  00ec93c  fmuls 2, 2, 1
  00ec940  fmuls 1, 5, 1
  00ec944  fsel 5, 6, 28, 3
  00ec948  fsel 6, 7, 28, 2
  00ec94c  fsel 7, 8, 28, 1
  00ec950  fsel 3, 9, 5, 3
  00ec954  fsel 2, 10, 6, 2
  00ec958  fsel 1, 4, 7, 1
  00ec95c  stfs 3, 160(1)
  00ec960  stfs 2, 164(1)
  00ec964  stfs 1, 168(1)
  00ec968  bl 0x502b08
  00ec96c  nop
  00ec970  lfs 1, 160(1)
  00ec974  slwi 3, 28, 8
  00ec978  lfs 2, 168(1)
  00ec97c  slwi 4, 25, 16
  00ec980  stfs 1, 64(1)
  00ec984  ori 3, 3, 79
  00ec988  stfs 2, 72(1)
  00ec98c  ori 7, 31, 0
  00ec990  lfs 1, 164(1)
  00ec994  or 3, 3, 4
  00ec998  lfs 2, 172(1)
  00ec99c  stfs 1, 68(1)
  00ec9a0  oris 3, 3, 32512
  00ec9a4  stfs 2, 76(1)
  00ec9a8  ld 5, 64(1)
  00ec9ac  extsw 3, 3
  00ec9b0  ld 6, 72(1)
  00ec9b4  bl 0x129b00
  00ec9b8  nop
  00ec9bc  addic 29, 29, 1
  00ec9c0  b 0xec828
  00ec9c4  lwz 3, 16(30)
  00ec9c8  cmpwi 3, 50
  00ec9cc  bf 0, 0xeca6c
  00ec9d0  lis 28, 150
  00ec9d4  addic 28, 28, -12496
  00ec9d8  lwz 29, 4(28)
  00ec9dc  ld 3, 8(28)
  00ec9e0  srwi 29, 29, 24
  00ec9e4  cmpdi 3, 0
  00ec9e8  cmpwi 1, 29, 255
  00ec9ec  crnand 2, 2, 6
  00ec9f0  bt 2, 0xec9f8
  00ec9f4  li 29, 37
  00ec9f8  li 3, 2
  00ec9fc  li 4, 0
  00eca00  li 5, 0
  00eca04  li 6, 1
  00eca08  li 7, 31
  00eca0c  bl 0x502ea8
  00eca10  nop
  00eca14  std 3, 8(28)
  00eca18  lis 3, 114
  00eca1c  lfs 1, 28(24)
  00eca20  li 4, 37
  00eca24  lfs 2, -3056(3)
  00eca28  lwz 3, 4(28)
  00eca2c  fmuls 1, 2, 1
  00eca30  rlwinm 3, 3, 0, 8, 23
  00eca34  fctiwz 1, 1
  00eca38  stfd 1, 256(1)
  00eca3c  lwz 5, 260(1)
  00eca40  subfic 6, 5, 37
  00eca44  addc 5, 29, 5
  00eca48  extsw 6, 6
  00eca4c  subc 5, 5, 4
  00eca50  subc 6, 29, 6
  00eca54  sradi 6, 6, 63
  00eca58  and 5, 6, 5
  00eca5c  addc 4, 4, 5
  00eca60  rlwimi 3, 4, 24, 0, 7
  00eca64  stw 3, 4(28)
  00eca68  b 0xeca84
  00eca6c  lis 3, 150
  00eca70  lis 4, -256
  00eca74  addic 3, 3, -12496
  00eca78  lwz 5, 4(3)
  00eca7c  or 4, 5, 4
  00eca80  stw 4, 4(3)
  00eca84  lhz 3, 44(30)
  00eca88  extsh 3, 3
  00eca8c  cmpwi 3, -1
  00eca90  bt 2, 0xecc98
  00eca94  ori 4, 31, 0
  00eca98  lis 31, 162
  00eca9c  lhz 5, 44(30)
  00ecaa0  sldi 3, 3, 5
  00ecaa4  addic 31, 31, -8448
  00ecaa8  extsh 6, 5
  00ecaac  addc 3, 31, 3
  00ecab0  lfs 1, 16(4)
  00ecab4  extsh 5, 5
  00ecab8  stfs 1, 16(3)
  00ecabc  sldi 3, 5, 5
  00ecac0  sldi 5, 6, 5
  00ecac4  lfs 1, 20(4)
  00ecac8  addc 6, 31, 3
  00ecacc  addc 5, 31, 5
  00ecad0  lwz 3, 16(30)
  00ecad4  cmpwi 3, 50
  00ecad8  stfs 1, 20(6)
  00ecadc  cmpwi 1, 3, 0
  00ecae0  lfs 1, 24(4)
  00ecae4  stfs 1, 24(5)
  00ecae8  bf 0, 0xecaf0
  00ecaec  bf 5, 0xecb10
  00ecaf0  extsw 3, 3
  00ecaf4  li 27, 50
  00ecaf8  li 4, 50
  00ecafc  subc 5, 3, 27
  00ecb00  subc 3, 3, 4
  00ecb04  sradi 3, 3, 63
  00ecb08  and 3, 3, 5
  00ecb0c  addc 27, 27, 3
  00ecb10  ori 3, 27, 0
  00ecb14  bl 0x502730
  00ecb18  nop
  00ecb1c  lfs 2, 32(24)
  00ecb20  lfs 3, 36(24)
  00ecb24  fmuls 1, 1, 2
  00ecb28  lhz 3, 44(30)
  00ecb2c  lwz 4, 16(30)
  00ecb30  extsh 3, 3
  00ecb34  sldi 3, 3, 5
  00ecb38  addc 5, 31, 3
  00ecb3c  extsw 3, 4
  00ecb40  fmuls 1, 1, 3
  00ecb44  stfs 1, 28(5)
  00ecb48  bl 0x502730
  00ecb4c  nop
  00ecb50  lis 29, 114
  00ecb54  li 3, 15
  00ecb58  lfs 2, -3056(29)
  00ecb5c  fmuls 2, 2, 31
  00ecb60  lhz 5, 44(30)
  00ecb64  li 4, 47
  00ecb68  extsh 5, 5
  00ecb6c  sldi 5, 5, 5
  00ecb70  addc 5, 31, 5
  00ecb74  fdivs 1, 1, 2
  00ecb78  addic 5, 5, 16
  00ecb7c  clrldi 28, 5, 32
  00ecb80  fsub 2, 30, 1
  00ecb84  fsel 31, 2, 1, 30
  00ecb88  bl 0xfe484
  00ecb8c  nop
  00ecb90  clrlwi 27, 3, 24
  00ecb94  li 3, 47
  00ecb98  li 4, 63
  00ecb9c  bl 0xfe484
  00ecba0  nop
  00ecba4  clrlwi 26, 3, 24
  00ecba8  li 3, 63
  00ecbac  li 4, 127
  00ecbb0  bl 0xfe484
  00ecbb4  nop
  00ecbb8  lfs 1, 48(24)
  00ecbbc  clrlwi 6, 3, 24
  00ecbc0  lfs 2, 40(24)
  00ecbc4  ori 3, 28, 0
  00ecbc8  lfs 3, -3056(29)
  00ecbcc  ori 4, 27, 0
  00ecbd0  lfs 4, 44(24)
  00ecbd4  ori 5, 26, 0
  00ecbd8  fmuls 1, 3, 1
  00ecbdc  fmuls 3, 31, 2
  00ecbe0  fmr 2, 28
  00ecbe4  fctiwz 5, 1
  00ecbe8  fmuls 1, 3, 4
  00ecbec  stfd 5, 256(1)
  00ecbf0  lwz 8, 260(1)
  00ecbf4  extsw 8, 8
  00ecbf8  bl 0x121a40
  00ecbfc  nop
  00ecc00  lhz 3, 44(30)
  00ecc04  lfs 1, 56(24)
  00ecc08  extsh 3, 3
  00ecc0c  lfs 31, 52(24)
  00ecc10  lfs 2, 60(24)
  00ecc14  sldi 3, 3, 5
  00ecc18  addc 4, 31, 3
  00ecc1c  lfsx 3, 31, 3
  00ecc20  lfs 4, 28(4)
  00ecc24  fmuls 4, 4, 1
  00ecc28  fmuls 1, 3, 31
  00ecc2c  fmuls 2, 4, 2
  00ecc30  bl 0xfcbe8
  00ecc34  nop
  00ecc38  lhz 3, 44(30)
  00ecc3c  extsh 27, 3
  00ecc40  extsh 3, 3
  00ecc44  sldi 27, 27, 5
  00ecc48  sldi 3, 3, 5
  00ecc4c  addc 4, 31, 27
  00ecc50  stfsx 1, 31, 3
  00ecc54  lfs 1, 4(4)
  00ecc58  lfsx 2, 31, 27
  00ecc5c  fmuls 31, 1, 31
  00ecc60  fcmpu 0, 2, 31
  00ecc64  cror 6, 1, 2
  00ecc68  bt 6, 0xecc70
  00ecc6c  lfsx 31, 31, 27
  00ecc70  lfsx 2, 31, 27
  00ecc74  fmr 1, 31
  00ecc78  bl 0xfcbe8
  00ecc7c  nop
  00ecc80  lhz 3, 44(30)
  00ecc84  extsh 3, 3
  00ecc88  sldi 3, 3, 5
  00ecc8c  addc 3, 31, 3
  00ecc90  stfs 1, 4(3)
  00ecc94  b 0xed344
  00ecc98  lis 3, 161
  00ecc9c  lwz 3, 1808(3)
  00ecca0  clrlwi 3, 3, 30
  00ecca4  cmpwi 3, 0
  00ecca8  bf 2, 0xed344
  00eccac  ori 3, 26, 0
  00eccb0  fmr 1, 28
  00eccb4  li 6, 0
  00eccb8  fmr 2, 28
  00eccbc  bl 0xda308
  00eccc0  nop
  00eccc4  sth 3, 44(30)
  00eccc8  b 0xed344
  00ecccc  lis 3, 150
  00eccd0  li 4, 0
  00eccd4  lis 5, 150
  00eccd8  lis 6, 151
  00eccdc  stb 4, -12512(3)
  00ecce0  addic 3, 6, -25376
  00ecce4  stw 4, 16(30)
  00ecce8  stb 4, -12496(5)
  00eccec  lfs 1, 64(24)
  00eccf0  lfs 2, 68(24)
  00eccf4  lfs 3, 152(3)
  00eccf8  lfs 4, 72(24)
  00eccfc  fadds 1, 3, 1
  00ecd00  lfs 6, 76(24)
  00ecd04  lis 5, 114
  00ecd08  fsubs 3, 2, 1
  00ecd0c  fsubs 5, 4, 1
  00ecd10  fsub 7, 1, 3
  00ecd14  fsel 1, 7, 3, 1
  00ecd18  lfs 3, 80(24)
  00ecd1c  fsub 7, 5, 1
  00ecd20  fsel 1, 7, 5, 1
  00ecd24  lfs 5, 84(24)
  00ecd28  lfs 7, 88(24)
  00ecd2c  lfs 8, 24(24)
  00ecd30  lfs 10, -3052(5)
  00ecd34  fmuls 8, 10, 8
  00ecd38  fmuls 9, 1, 1
  00ecd3c  fmuls 11, 9, 1
  00ecd40  fmuls 10, 9, 11
  00ecd44  fmadds 1, 11, 6, 1
  00ecd48  fmuls 11, 9, 10
  00ecd4c  fmadds 1, 10, 3, 1
  00ecd50  fmuls 9, 9, 11
  00ecd54  fmadds 1, 11, 5, 1
  00ecd58  fmadds 1, 9, 7, 1
  00ecd5c  fmuls 1, 8, 1
  00ecd60  stfs 1, 0(30)
  00ecd64  lfs 1, 152(3)
  00ecd68  fsubs 2, 2, 1
  00ecd6c  fsubs 4, 4, 1
  00ecd70  li 3, 1
  00ecd74  stw 4, 8(30)
  00ecd78  fsub 9, 1, 2
  00ecd7c  fsel 1, 9, 2, 1
  00ecd80  fsub 2, 4, 1
  00ecd84  fsel 1, 2, 4, 1
  00ecd88  fmuls 2, 1, 1
  00ecd8c  fmuls 4, 2, 1
  00ecd90  fmuls 9, 2, 4
  00ecd94  fmadds 1, 4, 6, 1
  00ecd98  fmuls 4, 2, 9
  00ecd9c  fmadds 1, 9, 3, 1
  00ecda0  fmuls 2, 2, 4
  00ecda4  fmadds 1, 4, 5, 1
  00ecda8  fmadds 1, 2, 7, 1
  00ecdac  fmuls 1, 8, 1
  00ecdb0  stfs 1, 4(30)
  00ecdb4  stb 3, 32(31)
  00ecdb8  stw 4, 20(30)
  00ecdbc  b 0xed344
  00ecdc0  lwz 3, 20(30)
  00ecdc4  extsw 3, 3
  00ecdc8  bl 0x502730
  00ecdcc  nop
  00ecdd0  lis 27, 114
  00ecdd4  lfs 2, 24(24)
  00ecdd8  lfs 30, 92(24)
  00ecddc  lfs 3, -3052(27)
  00ecde0  lfs 31, 96(24)
  00ecde4  fmuls 2, 3, 2
  00ecde8  lwz 3, 20(30)
  00ecdec  lhz 4, 44(30)
  00ecdf0  addic 3, 3, 1
  00ecdf4  stw 3, 20(30)
  00ecdf8  extsh 3, 4
  00ecdfc  fmuls 1, 2, 1
  00ece00  cmpwi 3, -1
  00ece04  fmadds 31, 1, 30, 31
  00ece08  bt 2, 0xece80
  00ece0c  lis 4, 114
  00ece10  lfs 1, 100(24)
  00ece14  lis 5, 162
  00ece18  lfs 2, 4(24)
  00ece1c  sldi 3, 3, 5
  00ece20  addic 5, 5, -8448
  00ece24  lfs 3, -3064(4)
  00ece28  addc 6, 5, 3
  00ece2c  fmadds 1, 3, 1, 2
  00ece30  lhz 3, 44(30)
  00ece34  extsh 3, 3
  00ece38  lfs 4, 28(6)
  00ece3c  sldi 4, 3, 5
  00ece40  addc 4, 5, 4
  00ece44  lis 5, 14545
  00ece48  fmuls 1, 4, 1
  00ece4c  ori 5, 5, 46871
  00ece50  stfs 1, 28(6)
  00ece54  lwz 4, 28(4)
  00ece58  srawi 6, 4, 31
  00ece5c  srwi 7, 6, 1
  00ece60  xor 4, 7, 4
  00ece64  subc 4, 4, 6
  00ece68  cmpw 4, 5
  00ece6c  bf 0, 0xece80
  00ece70  bl 0xda9e8
  00ece74  nop
  00ece78  li 3, -1
  00ece7c  sth 3, 44(30)
  00ece80  lis 26, 114
  00ece84  lfs 29, 104(24)
  00ece88  lfs 1, -3056(26)
  00ece8c  lwz 3, 20(30)
  00ece90  fmuls 1, 1, 29
  00ece94  fctiwz 1, 1
  00ece98  stfd 1, 256(1)
  00ece9c  lwz 4, 260(1)
  00ecea0  cmpw 3, 4
  00ecea4  bt 1, 0xecebc
  00ecea8  lis 3, 151
  00eceac  addic 3, 3, -25376
  00eceb0  lbz 3, 8356(3)
  00eceb4  cmpwi 3, 2
  00eceb8  bt 2, 0xeced8
  00ecebc  lis 31, 115
  00ecec0  lwz 3, -28812(31)
  00ecec4  bl 0xefb38
  00ecec8  nop
  00ececc  li 3, 0
  00eced0  stw 3, -28812(31)
  00eced4  b 0xed34c
  00eced8  addic 25, 31, 16
  00ecedc  addic 3, 1, 224
  00ecee0  ori 4, 25, 0
  00ecee4  ori 5, 30, 0
  00ecee8  bl 0x502b08
  00eceec  nop
  00ecef0  lwz 3, 16(31)
  00ecef4  lis 5, 16384
  00ecef8  lfs 28, 56(24)
  00ecefc  srawi 4, 3, 31
  00ecf00  srwi 6, 4, 1
  00ecf04  xor 3, 6, 3
  00ecf08  subc 3, 3, 4
  00ecf0c  cmpw 3, 5
  00ecf10  bt 0, 0xecf84
  00ecf14  lis 4, 17535
  00ecf18  ori 4, 4, 16384
  00ecf1c  cmpw 3, 4
  00ecf20  bt 1, 0xecf84
  00ecf24  lwz 5, 20(31)
  00ecf28  lis 3, 17535
  00ecf2c  lis 4, 16384
  00ecf30  srawi 6, 5, 31
  00ecf34  ori 3, 3, 16384
  00ecf38  srwi 7, 6, 1
  00ecf3c  xor 5, 7, 5
  00ecf40  subc 5, 5, 6
  00ecf44  cmpw 1, 5, 3
  00ecf48  cmpw 5, 4
  00ecf4c  cror 2, 0, 5
  00ecf50  bt 2, 0xecf84
  00ecf54  lwz 5, 24(31)
  00ecf58  lis 3, 17535
  00ecf5c  lis 4, 16384
  00ecf60  srawi 6, 5, 31
  00ecf64  ori 3, 3, 16384
  00ecf68  srwi 7, 6, 1
  00ecf6c  xor 5, 7, 5
  00ecf70  subc 5, 5, 6
  00ecf74  cmpw 5, 4
  00ecf78  cmpw 1, 5, 3
  00ecf7c  bt 0, 0xecf84
  00ecf80  bf 5, 0xecfa0
  00ecf84  lis 31, 115
  00ecf88  lwz 3, -28812(31)
  00ecf8c  bl 0xefb38
  00ecf90  nop
  00ecf94  li 3, 0
  00ecf98  stw 3, -28812(31)
  00ecf9c  b 0xed34c
  00ecfa0  fmr 1, 31
  00ecfa4  ori 3, 25, 0
  00ecfa8  fmr 27, 30
  00ecfac  li 5, 16
  00ecfb0  ori 6, 31, 0
  00ecfb4  li 7, 0
  00ecfb8  bl 0x5e598
  00ecfbc  nop
  00ecfc0  lfs 1, 20(24)
  00ecfc4  li 4, 2
  00ecfc8  lfs 30, 4(24)
  00ecfcc  li 5, 1
  00ecfd0  lfs 2, 16(31)
  00ecfd4  lis 7, 161
  00ecfd8  lfs 3, 24(31)
  00ecfdc  ori 8, 3, 0
  00ecfe0  stfs 2, 64(1)
  00ecfe4  addic 7, 7, 18944
  00ecfe8  stfs 3, 72(1)
  00ecfec  ori 3, 31, 0
  00ecff0  lfs 2, 20(31)
  00ecff4  li 9, 0
  00ecff8  lis 10, 139
  00ecffc  fmr 3, 30
  00ed000  stfs 2, 68(1)
  00ed004  lfs 2, 28(31)
  00ed008  stfs 2, 76(1)
  00ed00c  std 4, 120(1)
  00ed010  std 5, 128(1)
  00ed014  fmr 2, 30
  00ed018  ld 5, 64(1)
  00ed01c  ld 6, 72(1)
  00ed020  bl 0x107860
  00ed024  nop
  00ed028  lfs 1, -3056(26)
  00ed02c  lwz 4, 20(30)
  00ed030  fmuls 2, 1, 29
  00ed034  li 3, 15
  00ed038  fmuls 29, 31, 27
  00ed03c  fctiwz 2, 2
  00ed040  stfd 2, 256(1)
  00ed044  lfs 2, 108(24)
  00ed048  lwz 5, 260(1)
  00ed04c  fmuls 1, 1, 2
  00ed050  subc 5, 5, 4
  00ed054  li 4, 47
  00ed058  extsw 6, 5
  00ed05c  fctiwz 1, 1
  00ed060  stfd 1, 256(1)
  00ed064  lwz 7, 260(1)
  00ed068  lfs 1, 44(24)
  00ed06c  extsw 8, 7
  00ed070  fmr 27, 1
  00ed074  subc 5, 5, 7
  00ed078  subc 6, 6, 8
  00ed07c  sradi 6, 6, 63
  00ed080  and 5, 6, 5
  00ed084  addc 5, 7, 5
  00ed088  extsw 29, 5
  00ed08c  fmuls 26, 29, 27
  00ed090  bl 0xfe484
  00ed094  nop
  00ed098  ori 28, 3, 0
  00ed09c  li 3, 47
  00ed0a0  li 4, 63
  00ed0a4  bl 0xfe484
  00ed0a8  nop
  00ed0ac  slwi 4, 3, 8
  00ed0b0  li 3, 63
  00ed0b4  or 28, 4, 28
  00ed0b8  li 4, 127
  00ed0bc  bl 0xfe484
  00ed0c0  nop
  00ed0c4  slwi 3, 3, 16
  00ed0c8  ori 6, 29, 0
  00ed0cc  fmr 1, 26
  00ed0d0  or 3, 28, 3
  00ed0d4  li 7, -1
  00ed0d8  oris 5, 3, 20224
  00ed0dc  ori 3, 31, 0
  00ed0e0  extsw 5, 5
  00ed0e4  bl 0x127ea8
  00ed0e8  nop
  00ed0ec  fmuls 28, 31, 28
  00ed0f0  addic 29, 1, 192
  00ed0f4  lfs 2, -3052(27)
  00ed0f8  ori 3, 29, 0
  00ed0fc  fmuls 1, 2, 31
  00ed100  fmuls 2, 28, 2
  00ed104  bl 0xfe788
  00ed108  nop
  00ed10c  li 3, 15
  00ed110  li 4, 47
  00ed114  bl 0xfe484
  00ed118  nop
  00ed11c  ori 28, 3, 0
  00ed120  li 3, 47
  00ed124  li 4, 63
  00ed128  bl 0xfe484
  00ed12c  nop
  00ed130  slwi 4, 3, 8
  00ed134  li 3, 63
  00ed138  or 28, 4, 28
  00ed13c  li 4, 127
  00ed140  bl 0xfe484
  00ed144  nop
  00ed148  lfs 1, 112(24)
  00ed14c  lis 4, 165
  00ed150  lfs 2, -3056(26)
  00ed154  li 8, -1
  00ed158  addic 4, 4, 10244
  00ed15c  fmuls 2, 2, 1
  00ed160  slwi 3, 3, 16
  00ed164  fmr 1, 27
  00ed168  lis 6, 20351
  00ed16c  or 3, 28, 3
  00ed170  lwz 7, 44(4)
  00ed174  ori 6, 6, 20271
  00ed178  oris 5, 3, 32512
  00ed17c  ori 3, 25, 0
  00ed180  extsw 5, 5
  00ed184  ori 4, 29, 0
  00ed188  lbz 10, 0(7)
  00ed18c  li 9, 1
  00ed190  fctiwz 2, 2
  00ed194  std 8, 112(1)
  00ed198  stfd 2, 256(1)
  00ed19c  lwz 8, 260(1)
  00ed1a0  extsw 8, 8
  00ed1a4  bl 0x124e10
  00ed1a8  nop
  00ed1ac  lfs 24, 124(24)
  00ed1b0  li 29, 0
  00ed1b4  lfs 27, 12(24)
  00ed1b8  lfs 26, 116(24)
  00ed1bc  fmuls 24, 31, 24
  00ed1c0  ori 23, 29, 0
  00ed1c4  lfs 25, 120(24)
  00ed1c8  lfs 2, -3052(27)
  00ed1cc  addic 28, 1, 192
  00ed1d0  fmuls 1, 2, 31
  00ed1d4  ori 3, 28, 0
  00ed1d8  fmuls 2, 2, 28
  00ed1dc  bl 0xfe788
  00ed1e0  nop
  00ed1e4  addic 22, 1, 208
  00ed1e8  fmr 1, 27
  00ed1ec  ori 3, 22, 0
  00ed1f0  fmr 2, 29
  00ed1f4  bl 0xfe788
  00ed1f8  nop
  00ed1fc  addic 3, 1, 240
  00ed200  ori 4, 22, 0
  00ed204  ori 5, 25, 0
  00ed208  bl 0x502b08
  00ed20c  nop
  00ed210  ori 3, 22, 0
  00ed214  ori 4, 28, 0
  00ed218  li 5, 127
  00ed21c  ori 6, 31, 0
  00ed220  bl 0x133580
  00ed224  nop
  00ed228  ori 28, 3, 0
  00ed22c  cmpwi 28, 0
  00ed230  bt 2, 0xed24c
  00ed234  fmr 1, 26
  00ed238  fmr 2, 25
  00ed23c  bl 0xfcbe8
  00ed240  nop
  00ed244  fmuls 1, 1, 24
  00ed248  stfs 1, 12(28)
  00ed24c  addic 29, 29, 1
  00ed250  cmpwi 29, 8
  00ed254  bt 0, 0xed1c8
  00ed258  li 3, 136
  00ed25c  lfs 29, 128(24)
  00ed260  lfs 28, 132(24)
  00ed264  lis 29, 161
  00ed268  lfs 27, 136(24)
  00ed26c  addic 29, 29, 23856
  00ed270  lvlx 31, 3, 24
  00ed274  vspltw 31, 31, 0
  00ed278  ori 3, 25, 0
  00ed27c  ori 4, 29, 0
  00ed280  li 5, 127
  00ed284  ori 6, 31, 0
  00ed288  bl 0x133580
  00ed28c  nop
  00ed290  ori 28, 3, 0
  00ed294  cmpwi 28, 0
  00ed298  bt 2, 0xed338
  00ed29c  cmpwi 23, 2
  00ed2a0  bf 2, 0xed2c0
  00ed2a4  li 3, 8
  00ed2a8  bl 0xfc620
  00ed2ac  nop
  00ed2b0  cmpwi 3, 0
  00ed2b4  bf 2, 0xed2c0
  00ed2b8  lfs 1, 140(24)
  00ed2bc  b 0xed2d0
  00ed2c0  fmr 1, 29
  00ed2c4  fmr 2, 28
  00ed2c8  bl 0xfcbe8
  00ed2cc  nop
  00ed2d0  fmuls 1, 1, 31
  00ed2d4  vspltisw 2, -1
  00ed2d8  li 3, -3056
  00ed2dc  li 4, 10
  00ed2e0  vslw 2, 2, 2
  00ed2e4  stfs 1, 12(28)
  00ed2e8  lvlx 3, 3, 26
  00ed2ec  lfs 1, -3056(26)
  00ed2f0  vmaddfp 2, 3, 31, 2
  00ed2f4  fmuls 1, 1, 27
  00ed2f8  fctiwz 1, 1
  00ed2fc  vctsxs 2, 2, 0
  00ed300  stfd 1, 256(1)
  00ed304  vsplth 2, 2, 1
  00ed308  lwz 3, 260(1)
  00ed30c  extsh 3, 3
  00ed310  stvehx 2, 4, 28
  00ed314  bl 0x502730
  00ed318  nop
  00ed31c  fdivs 1, 30, 1
  00ed320  lis 3, 127
  00ed324  li 4, 3
  00ed328  ori 3, 3, 32639
  00ed32c  sth 4, 54(28)
  00ed330  stw 3, 56(28)
  00ed334  stfs 1, 48(28)
  00ed338  addic 23, 23, 1
  00ed33c  cmpwi 23, 12
  00ed340  bt 0, 0xed278
  00ed344  li 3, 0
  00ed348  sth 3, 46(30)
  00ed34c  li 0, 272
  00ed350  lvx 31, 1, 0
  00ed354  ld 0, 448(1)
  00ed358  mtlr 0
  00ed35c  lfd 24, 368(1)
  00ed360  lfd 25, 376(1)
  00ed364  lfd 26, 384(1)
  00ed368  lfd 27, 392(1)
  00ed36c  lfd 28, 400(1)
  00ed370  lfd 29, 408(1)
  00ed374  lfd 30, 416(1)
  00ed378  lfd 31, 424(1)
  00ed37c  ld 22, 288(1)
  00ed380  ld 23, 296(1)
  00ed384  ld 24, 304(1)
  00ed388  ld 25, 312(1)
  00ed38c  ld 26, 320(1)
  00ed390  ld 27, 328(1)
  00ed394  ld 28, 336(1)
  00ed398  ld 29, 344(1)
  00ed39c  ld 30, 352(1)
  00ed3a0  ld 31, 360(1)
  00ed3a4  addi 1, 1, 432
  00ed3a8  blr
