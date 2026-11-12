# game/update/moby168.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M168_002ab180:   # 0x2ab180, 0x780 bytes
  02ab180  stdu 1, -400(1)
  02ab184  mflr 0
  02ab188  std 0, 416(1)
  02ab18c  stfd 21, 312(1)
  02ab190  stfd 22, 320(1)
  02ab194  stfd 23, 328(1)
  02ab198  stfd 24, 336(1)
  02ab19c  stfd 25, 344(1)
  02ab1a0  stfd 26, 352(1)
  02ab1a4  stfd 27, 360(1)
  02ab1a8  stfd 28, 368(1)
  02ab1ac  stfd 29, 376(1)
  02ab1b0  stfd 30, 384(1)
  02ab1b4  stfd 31, 392(1)
  02ab1b8  std 25, 256(1)
  02ab1bc  lis 10, 164
  02ab1c0  li 25, 400
  02ab1c4  std 24, 248(1)
  02ab1c8  lis 9, 43
  02ab1cc  addc 24, 1, 25
  02ab1d0  std 28, 280(1)
  02ab1d4  std 27, 272(1)
  02ab1d8  addi 4, 9, -20144
  02ab1dc  lwz 27, -28500(10)
  02ab1e0  std 31, 304(1)
  02ab1e4  li 28, 0
  02ab1e8  cmpwi 27, 0
  02ab1ec  std 5, 64(24)
  02ab1f0  addic 25, 25, 64
  02ab1f4  std 6, 72(24)
  02ab1f8  std 30, 296(1)
  02ab1fc  ori 31, 3, 0
  02ab200  ori 30, 7, 0
  02ab204  std 29, 288(1)
  02ab208  lfs 31, 0(4)
  02ab20c  std 26, 264(1)
  02ab210  std 23, 240(1)
  02ab214  ori 29, 8, 0
  02ab218  bt 2, 0x2ab89c
  02ab21c  lbz 3, 32(27)
  02ab220  cmpwi 3, 128
  02ab224  bf 0, 0x2ab890
  02ab228  lfs 1, 16(27)
  02ab22c  ori 3, 27, 0
  02ab230  stfs 1, 112(1)
  02ab234  lfs 1, 20(27)
  02ab238  stfs 1, 116(1)
  02ab23c  lfs 1, 24(27)
  02ab240  stfs 1, 120(1)
  02ab244  lfs 1, 28(27)
  02ab248  stfs 1, 124(1)
  02ab24c  bl 0xfcccc
  02ab250  nop
  02ab254  lfs 2, 112(1)
  02ab258  cmpwi 3, 0
  02ab25c  lfs 3, 64(24)
  02ab260  lfs 4, 116(1)
  02ab264  lfs 5, 72(24)
  02ab268  lfs 7, 68(24)
  02ab26c  bt 2, 0x2ab27c
  02ab270  lfs 6, 120(1)
  02ab274  lfs 1, 16(3)
  02ab278  b 0x2ab28c
  02ab27c  lis 3, 43
  02ab280  lfs 6, 120(1)
  02ab284  addi 3, 3, -20144
  02ab288  lfs 1, 4(3)
  02ab28c  fadds 6, 6, 1
  02ab290  stfs 6, 120(1)
  02ab294  lhz 3, 52(27)
  02ab298  rlwinm 3, 3, 0, 19, 19
  02ab29c  cmpwi 3, 0
  02ab2a0  bt 2, 0x2ab890
  02ab2a4  fsubs 1, 2, 3
  02ab2a8  lis 3, 43
  02ab2ac  fsubs 8, 4, 7
  02ab2b0  addi 4, 3, -20144
  02ab2b4  lis 3, 115
  02ab2b8  addic 3, 3, 22784
  02ab2bc  fabs 10, 1
  02ab2c0  fabs 9, 8
  02ab2c4  stfs 1, 156(1)
  02ab2c8  stfs 8, 160(1)
  02ab2cc  fsubs 1, 10, 9
  02ab2d0  stfs 1, 164(1)
  02ab2d4  lwz 5, 156(1)
  02ab2d8  lfs 24, 8(4)
  02ab2dc  lfs 1, 156(1)
  02ab2e0  lwz 6, 160(1)
  02ab2e4  lfs 8, 160(1)
  02ab2e8  fabs 1, 1
  02ab2ec  lfs 29, 12(4)
  02ab2f0  rlwinm 6, 6, 3, 29, 29
  02ab2f4  lwz 4, 164(1)
  02ab2f8  lfs 11, 164(1)
  02ab2fc  rlwimi 6, 4, 2, 30, 30
  02ab300  fabs 8, 8
  02ab304  fsub 12, 11, 24
  02ab308  ori 4, 3, 0
  02ab30c  fsub 11, 11, 24
  02ab310  rlwimi 6, 5, 4, 28, 28
  02ab314  rlwimi 4, 6, 2, 26, 28
  02ab318  slwi 5, 6, 2
  02ab31c  clrldi 4, 4, 32
  02ab320  lfsx 30, 3, 5
  02ab324  fsel 9, 12, 1, 9
  02ab328  lfs 1, 4(4)
  02ab32c  fsel 8, 11, 8, 10
  02ab330  fcmpu 0, 9, 24
  02ab334  bt 1, 0x2ab340
  02ab338  fmr 30, 24
  02ab33c  b 0x2ab458
  02ab340  fsubs 10, 8, 9
  02ab344  fadds 8, 8, 9
  02ab348  addic 4, 1, 16
  02ab34c  li 7, 2
  02ab350  addic 6, 4, 200
  02ab354  addic 5, 4, 184
  02ab358  mtctr 7
  02ab35c  fdivs 8, 10, 8
  02ab360  fmuls 9, 8, 8
  02ab364  stfs 8, 212(1)
  02ab368  stfs 8, 204(1)
  02ab36c  stfs 8, 208(1)
  02ab370  stfs 8, 200(1)
  02ab374  lfs 11, 212(1)
  02ab378  lfs 12, 204(1)
  02ab37c  lfs 13, 208(1)
  02ab380  fmuls 10, 9, 9
  02ab384  fmuls 12, 12, 9
  02ab388  fmuls 11, 11, 10
  02ab38c  fmuls 8, 10, 10
  02ab390  fmuls 10, 13, 10
  02ab394  stfs 12, 204(1)
  02ab398  fmuls 9, 11, 9
  02ab39c  stfs 10, 208(1)
  02ab3a0  stfs 9, 212(1)
  02ab3a4  lfs 9, 184(4)
  02ab3a8  fmuls 9, 9, 8
  02ab3ac  stfs 9, 200(4)
  02ab3b0  lfs 9, 4(5)
  02ab3b4  addic 5, 5, 8
  02ab3b8  fmuls 9, 9, 8
  02ab3bc  addic 4, 4, 8
  02ab3c0  stfs 9, 4(6)
  02ab3c4  addic 6, 6, 8
  02ab3c8  bdnz 0x2ab3a4
  02ab3cc  li 6, 4
  02ab3d0  ori 4, 1, 0
  02ab3d4  mtctr 6
  02ab3d8  lis 5, 115
  02ab3dc  addic 6, 4, 200
  02ab3e0  addic 5, 5, 22752
  02ab3e4  ori 8, 6, 0
  02ab3e8  lfs 8, 200(4)
  02ab3ec  lfs 9, 0(5)
  02ab3f0  fmuls 8, 8, 9
  02ab3f4  lfs 9, 4(5)
  02ab3f8  addic 5, 5, 8
  02ab3fc  stfs 8, 200(4)
  02ab400  lfs 8, 4(6)
  02ab404  addic 4, 4, 8
  02ab408  fmuls 8, 8, 9
  02ab40c  stfs 8, 4(6)
  02ab410  addic 6, 6, 8
  02ab414  bdnz 0x2ab3e8
  02ab418  ori 4, 1, 0
  02ab41c  fmr 8, 24
  02ab420  mtctr 7
  02ab424  lfs 9, 200(4)
  02ab428  fadds 8, 8, 9
  02ab42c  lfs 9, 4(8)
  02ab430  addic 4, 4, 16
  02ab434  lfs 10, 8(8)
  02ab438  lfs 11, 12(8)
  02ab43c  addic 8, 8, 16
  02ab440  fadds 8, 8, 9
  02ab444  fadds 8, 8, 10
  02ab448  fadds 8, 8, 11
  02ab44c  bdnz 0x2ab424
  02ab450  fadds 8, 8, 29
  02ab454  fmadds 30, 8, 30, 1
  02ab458  fsubs 1, 7, 4
  02ab45c  fsubs 2, 3, 2
  02ab460  fmuls 1, 1, 1
  02ab464  fmadds 1, 2, 2, 1
  02ab468  fsubs 2, 6, 5
  02ab46c  fsqrts 1, 1
  02ab470  stfs 2, 148(1)
  02ab474  fabs 4, 2
  02ab478  fabs 3, 1
  02ab47c  stfs 1, 144(1)
  02ab480  lwz 4, 148(1)
  02ab484  rlwinm 4, 4, 3, 29, 29
  02ab488  fsubs 1, 3, 4
  02ab48c  stfs 1, 152(1)
  02ab490  lwz 5, 144(1)
  02ab494  lfs 1, 144(1)
  02ab498  lfs 2, 148(1)
  02ab49c  lwz 6, 152(1)
  02ab4a0  fabs 5, 2
  02ab4a4  lfs 2, 152(1)
  02ab4a8  fabs 1, 1
  02ab4ac  rlwimi 4, 6, 2, 30, 30
  02ab4b0  fsub 6, 2, 24
  02ab4b4  fsub 7, 2, 24
  02ab4b8  rlwimi 4, 5, 4, 28, 28
  02ab4bc  ori 5, 3, 0
  02ab4c0  rlwimi 5, 4, 2, 26, 28
  02ab4c4  slwi 4, 4, 2
  02ab4c8  clrldi 5, 5, 32
  02ab4cc  fsel 4, 6, 1, 4
  02ab4d0  lfsx 2, 3, 4
  02ab4d4  fsel 3, 7, 5, 3
  02ab4d8  lfs 1, 4(5)
  02ab4dc  fcmpu 0, 4, 24
  02ab4e0  bt 1, 0x2ab4ec
  02ab4e4  fmr 29, 24
  02ab4e8  b 0x2ab604
  02ab4ec  fsubs 5, 3, 4
  02ab4f0  fadds 3, 3, 4
  02ab4f4  addic 3, 1, 16
  02ab4f8  li 7, 2
  02ab4fc  addic 4, 3, 152
  02ab500  addic 5, 3, 168
  02ab504  mtctr 7
  02ab508  fdivs 3, 5, 3
  02ab50c  fmuls 4, 3, 3
  02ab510  stfs 3, 180(1)
  02ab514  stfs 3, 172(1)
  02ab518  stfs 3, 176(1)
  02ab51c  stfs 3, 168(1)
  02ab520  lfs 6, 180(1)
  02ab524  lfs 7, 172(1)
  02ab528  lfs 8, 176(1)
  02ab52c  fmuls 5, 4, 4
  02ab530  fmuls 7, 7, 4
  02ab534  fmuls 6, 6, 5
  02ab538  fmuls 3, 5, 5
  02ab53c  fmuls 5, 8, 5
  02ab540  stfs 7, 172(1)
  02ab544  fmuls 4, 6, 4
  02ab548  stfs 5, 176(1)
  02ab54c  stfs 4, 180(1)
  02ab550  lfs 4, 152(3)
  02ab554  fmuls 4, 4, 3
  02ab558  stfs 4, 168(3)
  02ab55c  lfs 4, 4(4)
  02ab560  addic 3, 3, 8
  02ab564  addic 4, 4, 8
  02ab568  fmuls 4, 4, 3
  02ab56c  stfs 4, 4(5)
  02ab570  addic 5, 5, 8
  02ab574  bdnz 0x2ab550
  02ab578  li 5, 4
  02ab57c  ori 3, 1, 0
  02ab580  mtctr 5
  02ab584  lis 4, 115
  02ab588  addic 5, 3, 168
  02ab58c  addic 4, 4, 22752
  02ab590  ori 6, 5, 0
  02ab594  lfs 3, 168(3)
  02ab598  lfs 4, 0(4)
  02ab59c  fmuls 3, 3, 4
  02ab5a0  lfs 4, 4(4)
  02ab5a4  addic 4, 4, 8
  02ab5a8  stfs 3, 168(3)
  02ab5ac  lfs 3, 4(5)
  02ab5b0  addic 3, 3, 8
  02ab5b4  fmuls 3, 3, 4
  02ab5b8  stfs 3, 4(5)
  02ab5bc  addic 5, 5, 8
  02ab5c0  bdnz 0x2ab594
  02ab5c4  fmr 3, 24
  02ab5c8  ori 3, 1, 0
  02ab5cc  mtctr 7
  02ab5d0  lfs 4, 168(3)
  02ab5d4  fadds 3, 3, 4
  02ab5d8  addic 3, 3, 16
  02ab5dc  lfs 4, 4(6)
  02ab5e0  lfs 5, 8(6)
  02ab5e4  lfs 6, 12(6)
  02ab5e8  addic 6, 6, 16
  02ab5ec  fadds 3, 3, 4
  02ab5f0  fadds 3, 3, 5
  02ab5f4  fadds 3, 3, 6
  02ab5f8  bdnz 0x2ab5d0
  02ab5fc  fadds 29, 3, 29
  02ab600  fmadds 29, 29, 2, 1
  02ab604  fmr 2, 30
  02ab608  lfs 1, 0(30)
  02ab60c  bl 0x5026a0
  02ab610  nop
  02ab614  lfs 2, 68(24)
  02ab618  lfs 3, 116(1)
  02ab61c  lfs 4, 64(24)
  02ab620  fsubs 2, 2, 3
  02ab624  lfs 3, 112(1)
  02ab628  fsubs 3, 4, 3
  02ab62c  lfs 4, 72(24)
  02ab630  lfs 5, 120(1)
  02ab634  fsubs 4, 4, 5
  02ab638  fmuls 2, 2, 2
  02ab63c  fmr 28, 1
  02ab640  fmadds 2, 3, 3, 2
  02ab644  fmadds 27, 4, 4, 2
  02ab648  fsqrts 27, 27
  02ab64c  fcmpu 0, 31, 27
  02ab650  bt 0, 0x2ab890
  02ab654  lis 3, 43
  02ab658  lfs 2, 0(30)
  02ab65c  lis 4, 151
  02ab660  lfs 3, 0(29)
  02ab664  addi 23, 3, -20144
  02ab668  fmr 1, 27
  02ab66c  addic 4, 4, -25376
  02ab670  addic 3, 1, 128
  02ab674  lfs 5, 4(23)
  02ab678  lfs 4, 740(4)
  02ab67c  fmadds 3, 4, 5, 3
  02ab680  bl 0xfe610
  02ab684  nop
  02ab688  lfs 1, 132(1)
  02ab68c  lfs 2, 68(24)
  02ab690  lfs 3, 128(1)
  02ab694  fadds 1, 1, 2
  02ab698  lfs 2, 64(24)
  02ab69c  lfs 4, 116(1)
  02ab6a0  fadds 2, 3, 2
  02ab6a4  lfs 3, 136(1)
  02ab6a8  lfs 5, 72(24)
  02ab6ac  lfs 6, 112(1)
  02ab6b0  fadds 3, 3, 5
  02ab6b4  lfs 5, 120(1)
  02ab6b8  fsubs 4, 1, 4
  02ab6bc  fsubs 6, 2, 6
  02ab6c0  stfs 2, 128(1)
  02ab6c4  stfs 1, 132(1)
  02ab6c8  fsubs 5, 3, 5
  02ab6cc  fmuls 4, 4, 4
  02ab6d0  stfs 3, 136(1)
  02ab6d4  lfs 25, 16(23)
  02ab6d8  lis 3, 115
  02ab6dc  lfs 26, 20(23)
  02ab6e0  addic 26, 3, 22720
  02ab6e4  fmadds 2, 6, 6, 4
  02ab6e8  lfs 3, 22720(3)
  02ab6ec  lfs 21, 24(23)
  02ab6f0  fmadds 1, 5, 5, 2
  02ab6f4  fmuls 2, 27, 25
  02ab6f8  fsqrts 1, 1
  02ab6fc  fdivs 1, 1, 2
  02ab700  lfs 2, 4(26)
  02ab704  lfs 4, 8(26)
  02ab708  lfs 5, 12(26)
  02ab70c  lfs 23, 28(23)
  02ab710  lfs 22, 32(23)
  02ab714  fabs 6, 1
  02ab718  fsub 7, 1, 24
  02ab71c  fsel 6, 7, 1, 6
  02ab720  fsub 1, 1, 24
  02ab724  fsubs 7, 26, 6
  02ab728  fmadds 2, 6, 2, 3
  02ab72c  fmuls 8, 6, 6
  02ab730  fsel 1, 1, 26, 21
  02ab734  fsub 9, 7, 24
  02ab738  fmuls 6, 8, 6
  02ab73c  fmadds 2, 8, 4, 2
  02ab740  fsel 3, 9, 7, 24
  02ab744  fmadds 2, 6, 5, 2
  02ab748  fsqrts 3, 3
  02ab74c  fnmsubs 2, 2, 3, 23
  02ab750  fmuls 1, 2, 1
  02ab754  fmuls 25, 1, 25
  02ab758  fcmpu 0, 25, 22
  02ab75c  cror 6, 0, 2
  02ab760  bt 6, 0x2ab808
  02ab764  ori 3, 27, 0
  02ab768  bl 0xfcccc
  02ab76c  nop
  02ab770  cmpwi 3, 0
  02ab774  bt 2, 0x2ab808
  02ab778  lbz 3, 10(3)
  02ab77c  bl 0x502730
  02ab780  nop
  02ab784  lis 3, 43
  02ab788  addi 3, 3, -20144
  02ab78c  lfs 2, 36(3)
  02ab790  fmuls 1, 1, 2
  02ab794  lis 3, 115
  02ab798  lfs 3, 4(26)
  02ab79c  lfs 4, 8(26)
  02ab7a0  lfs 5, 22720(3)
  02ab7a4  fdivs 2, 1, 27
  02ab7a8  lfs 6, 12(26)
  02ab7ac  fcmpu 0, 1, 27
  02ab7b0  cror 6, 1, 2
  02ab7b4  fabs 1, 2
  02ab7b8  fsub 7, 2, 24
  02ab7bc  fsel 1, 7, 2, 1
  02ab7c0  fsub 2, 2, 24
  02ab7c4  fsubs 7, 26, 1
  02ab7c8  fmuls 8, 1, 1
  02ab7cc  fmadds 3, 1, 3, 5
  02ab7d0  fsel 21, 2, 26, 21
  02ab7d4  fsub 9, 7, 24
  02ab7d8  fmadds 3, 8, 4, 3
  02ab7dc  fmuls 1, 8, 1
  02ab7e0  fsel 5, 9, 7, 24
  02ab7e4  fmadds 1, 1, 6, 3
  02ab7e8  fsqrts 4, 5
  02ab7ec  fnmsubs 26, 1, 4, 23
  02ab7f0  bt 6, 0x2ab808
  02ab7f4  fnmsubs 25, 26, 21, 25
  02ab7f8  fcmpu 0, 25, 24
  02ab7fc  cror 6, 1, 2
  02ab800  bt 6, 0x2ab808
  02ab804  fmr 25, 24
  02ab808  fcmpu 0, 25, 22
  02ab80c  cror 6, 1, 2
  02ab810  bt 6, 0x2ab890
  02ab814  lis 3, 149
  02ab818  addic 4, 1, 112
  02ab81c  addic 3, 3, 5376
  02ab820  li 5, 6
  02ab824  ori 6, 31, 0
  02ab828  li 7, 0
  02ab82c  bl 0x57820
  02ab830  nop
  02ab834  cmpwi 3, 0
  02ab838  bf 2, 0x2ab89c
  02ab83c  addc 3, 1, 25
  02ab840  addic 4, 1, 112
  02ab844  clrldi 3, 3, 32
  02ab848  li 5, 6
  02ab84c  ori 6, 31, 0
  02ab850  li 7, 0
  02ab854  bl 0x57820
  02ab858  nop
  02ab85c  cmpwi 3, 0
  02ab860  bf 2, 0x2ab89c
  02ab864  fneg 1, 29
  02ab868  lis 3, 43
  02ab86c  fmr 31, 27
  02ab870  addi 3, 3, -20144
  02ab874  stfs 1, 0(29)
  02ab878  lfs 1, 40(3)
  02ab87c  fcmpu 0, 28, 1
  02ab880  cror 6, 1, 2
  02ab884  bt 6, 0x2ab88c
  02ab888  stfs 30, 0(30)
  02ab88c  ori 28, 27, 0
  02ab890  lwz 27, 40(27)
  02ab894  cmpwi 27, 0
  02ab898  bf 2, 0x2ab21c
  02ab89c  ori 3, 28, 0
  02ab8a0  ld 0, 416(1)
  02ab8a4  mtlr 0
  02ab8a8  lfd 21, 312(1)
  02ab8ac  lfd 22, 320(1)
  02ab8b0  lfd 23, 328(1)
  02ab8b4  lfd 24, 336(1)
  02ab8b8  lfd 25, 344(1)
  02ab8bc  lfd 26, 352(1)
  02ab8c0  lfd 27, 360(1)
  02ab8c4  lfd 28, 368(1)
  02ab8c8  lfd 29, 376(1)
  02ab8cc  lfd 30, 384(1)
  02ab8d0  lfd 31, 392(1)
  02ab8d4  ld 23, 240(1)
  02ab8d8  ld 24, 248(1)
  02ab8dc  ld 25, 256(1)
  02ab8e0  ld 26, 264(1)
  02ab8e4  ld 27, 272(1)
  02ab8e8  ld 28, 280(1)
  02ab8ec  ld 29, 288(1)
  02ab8f0  ld 30, 296(1)
  02ab8f4  ld 31, 304(1)
  02ab8f8  addi 1, 1, 400
  02ab8fc  blr

UpdateMoby_168:   # 0x2ab988, 0x12d8 bytes
  02ab988  stdu 1, -640(1)
  02ab98c  mflr 0
  02ab990  std 0, 656(1)
  02ab994  stfd 19, 536(1)
  02ab998  stfd 20, 544(1)
  02ab99c  stfd 21, 552(1)
  02ab9a0  stfd 22, 560(1)
  02ab9a4  stfd 23, 568(1)
  02ab9a8  stfd 24, 576(1)
  02ab9ac  stfd 25, 584(1)
  02ab9b0  stfd 26, 592(1)
  02ab9b4  stfd 27, 600(1)
  02ab9b8  stfd 28, 608(1)
  02ab9bc  stfd 29, 616(1)
  02ab9c0  stfd 30, 624(1)
  02ab9c4  stfd 31, 632(1)
  02ab9c8  std 24, 472(1)
  02ab9cc  lis 4, 43
  02ab9d0  li 24, 0
  02ab9d4  lbz 5, 32(3)
  02ab9d8  addi 4, 4, -18176
  02ab9dc  std 31, 528(1)
  02ab9e0  cmpwi 5, 0
  02ab9e4  ori 31, 3, 0
  02ab9e8  lfs 29, 0(4)
  02ab9ec  stw 24, 128(1)
  02ab9f0  stw 24, 132(1)
  02ab9f4  stw 24, 136(1)
  02ab9f8  std 30, 520(1)
  02ab9fc  stw 24, 140(1)
  02aba00  lwz 30, 120(3)
  02aba04  std 29, 512(1)
  02aba08  std 28, 504(1)
  02aba0c  std 27, 496(1)
  02aba10  std 26, 488(1)
  02aba14  std 25, 480(1)
  02aba18  std 23, 464(1)
  02aba1c  stw 24, 436(1)
  02aba20  bf 2, 0x2aba38
  02aba24  li 3, 1
  02aba28  li 4, -1
  02aba2c  stb 3, 32(31)
  02aba30  stw 4, 16(30)
  02aba34  stw 24, 20(30)
  02aba38  addic 3, 30, 4
  02aba3c  bl 0x4fffb4
  02aba40  nop
  02aba44  ori 3, 30, 0
  02aba48  bl 0x4fff60
  02aba4c  nop
  02aba50  lis 27, 151
  02aba54  addic 27, 27, -25376
  02aba58  lwz 3, 8324(27)
  02aba5c  cmpwi 3, 1
  02aba60  bf 2, 0x2aba74
  02aba64  li 3, 30
  02aba68  li 4, 1
  02aba6c  bl 0xb72b0
  02aba70  nop
  02aba74  lbz 3, 83(31)
  02aba78  cmpwi 3, 0
  02aba7c  bf 2, 0x2abac4
  02aba80  lbz 3, 81(31)
  02aba84  cmpwi 3, 3
  02aba88  bf 0, 0x2abac4
  02aba8c  lis 3, 43
  02aba90  li 4, 4
  02aba94  vspltisw 2, -1
  02aba98  addi 3, 3, -18176
  02aba9c  lis 5, 114
  02abaa0  li 6, -3056
  02abaa4  vslw 2, 2, 2
  02abaa8  lvlx 3, 4, 3
  02abaac  vspltw 3, 3, 0
  02abab0  lvlx 4, 6, 5
  02abab4  vmaddfp 2, 4, 3, 2
  02abab8  vctsxs 2, 2, 0
  02ababc  vspltw 2, 2, 0
  02abac0  stvewx 2, 0, 30
  02abac4  lwz 3, 8324(27)
  02abac8  cmpwi 3, 30
  02abacc  bf 2, 0x2abd20
  02abad0  lwz 3, 8320(27)
  02abad4  lhz 3, 52(3)
  02abad8  clrlwi 3, 3, 31
  02abadc  cmpwi 3, 0
  02abae0  bt 2, 0x2abd20
  02abae4  lis 28, 149
  02abae8  addic 29, 1, 272
  02abaec  addic 28, 28, 5056
  02abaf0  ori 3, 29, 0
  02abaf4  ori 4, 28, 0
  02abaf8  bl 0x500fa8
  02abafc  nop
  02abb00  addic 26, 1, 368
  02abb04  ori 4, 29, 0
  02abb08  ori 3, 26, 0
  02abb0c  bl 0x5010c0
  02abb10  nop
  02abb14  lis 3, 43
  02abb18  lis 4, 114
  02abb1c  addi 3, 3, -18176
  02abb20  ori 5, 26, 0
  02abb24  lfs 1, 8(3)
  02abb28  lfs 2, -3052(4)
  02abb2c  addic 3, 1, 128
  02abb30  fmuls 1, 2, 1
  02abb34  ori 4, 3, 0
  02abb38  stfs 1, 136(1)
  02abb3c  bl 0x5e825c
  02abb40  nop
  02abb44  lis 4, 15897
  02abb48  lis 7, 16192
  02abb4c  stw 24, 156(1)
  02abb50  ori 6, 4, 39322
  02abb54  addic 3, 1, 144
  02abb58  ori 5, 26, 0
  02abb5c  ori 4, 3, 0
  02abb60  stw 6, 144(1)
  02abb64  stw 7, 152(1)
  02abb68  stw 6, 148(1)
  02abb6c  bl 0x5e825c
  02abb70  nop
  02abb74  lfs 1, 144(1)
  02abb78  lfs 2, 320(28)
  02abb7c  ori 29, 24, 0
  02abb80  lfs 3, 148(1)
  02abb84  fadds 1, 1, 2
  02abb88  lfs 2, 324(28)
  02abb8c  lfs 4, 152(1)
  02abb90  fadds 2, 3, 2
  02abb94  lfs 3, 328(28)
  02abb98  lwz 3, 8324(27)
  02abb9c  fadds 3, 4, 3
  02abba0  cmpwi 3, 30
  02abba4  stfs 1, 144(1)
  02abba8  stfs 2, 148(1)
  02abbac  stfs 3, 152(1)
  02abbb0  bf 2, 0x2abdd4
  02abbb4  lwz 3, 8320(27)
  02abbb8  ori 29, 24, 0
  02abbbc  lhz 3, 52(3)
  02abbc0  clrlwi 3, 3, 31
  02abbc4  cmpwi 3, 0
  02abbc8  bt 2, 0x2abdd4
  02abbcc  lbz 3, 8364(27)
  02abbd0  ori 29, 24, 0
  02abbd4  cmpwi 3, 0
  02abbd8  bf 2, 0x2abdd4
  02abbdc  lis 3, 43
  02abbe0  li 5, 4
  02abbe4  fmr 2, 29
  02abbe8  addi 29, 3, -18176
  02abbec  lis 4, -241
  02abbf0  li 9, -1
  02abbf4  ori 3, 31, 0
  02abbf8  ori 4, 4, 4095
  02abbfc  lfs 1, 12(29)
  02abc00  lfs 3, 16(29)
  02abc04  li 6, 0
  02abc08  std 5, 112(1)
  02abc0c  li 7, 38
  02abc10  bl 0x55284
  02abc14  nop
  02abc18  lfs 1, 132(1)
  02abc1c  lfs 2, 128(1)
  02abc20  fmuls 3, 1, 1
  02abc24  lfs 4, 136(1)
  02abc28  lfs 5, 20(29)
  02abc2c  lfs 6, 140(1)
  02abc30  stfs 6, 172(1)
  02abc34  fmadds 3, 2, 2, 3
  02abc38  addic 29, 1, 160
  02abc3c  addic 3, 1, 176
  02abc40  addic 5, 1, 144
  02abc44  fmadds 3, 4, 4, 3
  02abc48  ori 4, 29, 0
  02abc4c  fsqrts 3, 3
  02abc50  fdivs 5, 5, 3
  02abc54  fsub 6, 29, 3
  02abc58  fsub 7, 29, 3
  02abc5c  fsub 8, 29, 3
  02abc60  fsub 9, 3, 29
  02abc64  fsub 10, 3, 29
  02abc68  fsub 3, 3, 29
  02abc6c  fmuls 2, 2, 5
  02abc70  fmuls 1, 1, 5
  02abc74  fmuls 4, 4, 5
  02abc78  fsel 5, 6, 29, 2
  02abc7c  fsel 6, 7, 29, 1
  02abc80  fsel 7, 8, 29, 4
  02abc84  fsel 2, 9, 5, 2
  02abc88  fsel 1, 10, 6, 1
  02abc8c  fsel 3, 3, 7, 4
  02abc90  stfs 2, 160(1)
  02abc94  stfs 1, 164(1)
  02abc98  stfs 3, 168(1)
  02abc9c  bl 0x5023f0
  02abca0  nop
  02abca4  lfs 1, 176(1)
  02abca8  lfs 2, 180(1)
  02abcac  addic 3, 28, 320
  02abcb0  stfs 1, 160(1)
  02abcb4  ori 4, 29, 0
  02abcb8  lfs 1, 184(1)
  02abcbc  li 5, 0
  02abcc0  stfs 2, 164(1)
  02abcc4  ori 6, 31, 0
  02abcc8  lfs 2, 188(1)
  02abccc  li 7, 0
  02abcd0  stfs 1, 168(1)
  02abcd4  stfs 2, 172(1)
  02abcd8  bl 0x57820
  02abcdc  nop
  02abce0  cmpwi 3, 0
  02abce4  ori 29, 24, 0
  02abce8  bt 2, 0x2abdd4
  02abcec  lis 3, 161
  02abcf0  ori 29, 24, 0
  02abcf4  addic 3, 3, 2368
  02abcf8  lwz 3, 24(3)
  02abcfc  cmpwi 3, 0
  02abd00  bt 2, 0x2abdd4
  02abd04  lhz 4, 52(3)
  02abd08  ori 29, 24, 0
  02abd0c  rlwinm 4, 4, 0, 19, 19
  02abd10  cmpwi 4, 0
  02abd14  bt 2, 0x2abdd4
  02abd18  ori 29, 3, 0
  02abd1c  b 0x2abdd4
  02abd20  lis 3, 43
  02abd24  lis 4, 114
  02abd28  addi 3, 3, -18176
  02abd2c  addic 5, 1, 144
  02abd30  lfs 1, 8(3)
  02abd34  lfs 2, -3052(4)
  02abd38  lfs 3, 132(1)
  02abd3c  lfs 4, 1616(27)
  02abd40  lfs 5, 1628(27)
  02abd44  fmuls 1, 2, 1
  02abd48  lfs 6, 1620(27)
  02abd4c  fmuls 4, 4, 3
  02abd50  fmuls 5, 5, 3
  02abd54  lfs 7, 1600(27)
  02abd58  lfs 2, 1624(27)
  02abd5c  fmuls 6, 6, 3
  02abd60  lfs 8, 1612(27)
  02abd64  fmuls 2, 2, 3
  02abd68  lfs 3, 136(1)
  02abd6c  ori 3, 31, 0
  02abd70  lfs 9, 1604(27)
  02abd74  li 4, 0
  02abd78  lfs 10, 1608(27)
  02abd7c  lfs 11, 1632(27)
  02abd80  lfs 12, 1644(27)
  02abd84  fmadds 4, 7, 1, 4
  02abd88  fmadds 5, 8, 1, 5
  02abd8c  lfs 7, 1636(27)
  02abd90  fmadds 6, 9, 1, 6
  02abd94  lfs 8, 1640(27)
  02abd98  stfs 1, 128(1)
  02abd9c  fmadds 2, 10, 1, 2
  02abda0  lfs 1, 140(1)
  02abda4  fmadds 4, 11, 3, 4
  02abda8  fmadds 5, 12, 3, 5
  02abdac  fmadds 6, 7, 3, 6
  02abdb0  fmadds 2, 8, 3, 2
  02abdb4  fadds 1, 5, 1
  02abdb8  stfs 4, 128(1)
  02abdbc  stfs 6, 132(1)
  02abdc0  stfs 2, 136(1)
  02abdc4  stfs 1, 140(1)
  02abdc8  bl 0xf1114
  02abdcc  nop
  02abdd0  ori 29, 24, 0
  02abdd4  lwz 3, 4784(27)
  02abdd8  cmpwi 3, 0
  02abddc  bt 2, 0x2abde8
  02abde0  lfs 31, 4796(27)
  02abde4  b 0x2abdfc
  02abde8  lfs 1, 128(1)
  02abdec  lfs 2, 132(1)
  02abdf0  bl 0x5e8338
  02abdf4  nop
  02abdf8  fmr 31, 1
  02abdfc  lfs 1, 132(1)
  02abe00  lfs 3, 128(1)
  02abe04  fmuls 1, 1, 1
  02abe08  stfs 31, 432(1)
  02abe0c  lfs 2, 136(1)
  02abe10  fmadds 1, 3, 3, 1
  02abe14  fsqrts 1, 1
  02abe18  bl 0x5e8338
  02abe1c  nop
  02abe20  lfs 31, 432(1)
  02abe24  lwz 3, 8324(27)
  02abe28  cmpwi 3, 30
  02abe2c  fneg 30, 1
  02abe30  lfs 1, 144(1)
  02abe34  lfs 2, 148(1)
  02abe38  lfs 3, 152(1)
  02abe3c  lfs 4, 156(1)
  02abe40  stfs 30, 436(1)
  02abe44  bt 2, 0x2abea0
  02abe48  lhz 4, 8904(27)
  02abe4c  cmpwi 4, 1
  02abe50  bf 2, 0x2abe74
  02abe54  cmpwi 3, 30
  02abe58  bt 2, 0x2abe74
  02abe5c  lis 3, 114
  02abe60  lfs 31, 72(31)
  02abe64  addic 3, 3, 7120
  02abe68  stfs 31, 432(1)
  02abe6c  lfs 30, 1652(3)
  02abe70  stfs 30, 436(1)
  02abe74  stfs 1, 64(1)
  02abe78  stfs 3, 72(1)
  02abe7c  ori 3, 31, 0
  02abe80  stfs 2, 68(1)
  02abe84  addic 7, 1, 432
  02abe88  stfs 4, 76(1)
  02abe8c  addic 8, 1, 436
  02abe90  ld 5, 64(1)
  02abe94  ld 6, 72(1)
  02abe98  bl 0x2ab180
  02abe9c  ori 29, 3, 0
  02abea0  cmpwi 29, 0
  02abea4  bt 2, 0x2abf9c
  02abea8  lhz 3, 4(30)
  02abeac  cmpwi 3, 0
  02abeb0  bf 2, 0x2abf9c
  02abeb4  li 3, -1
  02abeb8  bl 0x8e0f4
  02abebc  nop
  02abec0  cmpwi 3, 0
  02abec4  bt 2, 0x2abf9c
  02abec8  ori 3, 29, 0
  02abecc  bl 0xfcccc
  02abed0  nop
  02abed4  lis 4, 149
  02abed8  lfs 1, 20(29)
  02abedc  lfs 2, 16(29)
  02abee0  addic 4, 4, 5056
  02abee4  lfs 3, 24(29)
  02abee8  cmpwi 3, 0
  02abeec  lfs 4, 324(4)
  02abef0  lfs 5, 320(4)
  02abef4  fsubs 1, 4, 1
  02abef8  fsubs 4, 5, 2
  02abefc  lfs 5, 328(4)
  02abf00  fsubs 3, 5, 3
  02abf04  lis 4, 43
  02abf08  addi 4, 4, -18176
  02abf0c  fmuls 1, 1, 1
  02abf10  fmadds 1, 4, 4, 1
  02abf14  lfs 4, 24(4)
  02abf18  stfs 2, 192(1)
  02abf1c  lfs 2, 20(29)
  02abf20  stfs 2, 196(1)
  02abf24  fmadds 1, 3, 3, 1
  02abf28  lfs 3, 24(29)
  02abf2c  stfs 3, 200(1)
  02abf30  lfs 2, 28(29)
  02abf34  stfs 2, 204(1)
  02abf38  lfs 2, 28(4)
  02abf3c  fsqrts 1, 1
  02abf40  fmuls 1, 1, 4
  02abf44  bt 2, 0x2abf4c
  02abf48  lfs 2, 16(3)
  02abf4c  fadds 2, 3, 2
  02abf50  lis 3, 43
  02abf54  li 8, 4
  02abf58  addi 4, 3, -18176
  02abf5c  lis 5, -241
  02abf60  ori 3, 31, 0
  02abf64  addic 6, 1, 192
  02abf68  li 9, -1
  02abf6c  li 7, 38
  02abf70  stfs 2, 200(1)
  02abf74  lfs 4, 32(4)
  02abf78  fmr 2, 29
  02abf7c  lfs 5, 36(4)
  02abf80  lfs 3, 16(4)
  02abf84  fnmsubs 1, 1, 4, 5
  02abf88  ori 4, 5, 65295
  02abf8c  std 8, 112(1)
  02abf90  fabs 1, 1
  02abf94  bl 0x55284
  02abf98  nop
  02abf9c  lbz 3, 8360(27)
  02abfa0  cmpwi 3, 0
  02abfa4  bt 2, 0x2ac7e0
  02abfa8  lwz 3, 8324(27)
  02abfac  cmpwi 3, 114
  02abfb0  bt 2, 0x2ac7e0
  02abfb4  lis 3, 161
  02abfb8  lwz 3, 1800(3)
  02abfbc  cmpwi 3, 2
  02abfc0  bt 2, 0x2ac7e0
  02abfc4  lis 3, 151
  02abfc8  lis 4, 43
  02abfcc  addic 3, 3, -25432
  02abfd0  lis 28, 114
  02abfd4  lbz 3, 15(3)
  02abfd8  subfic 3, 3, 5
  02abfdc  extsw 3, 3
  02abfe0  std 3, 440(1)
  02abfe4  addi 3, 4, -18176
  02abfe8  lfs 28, 28(3)
  02abfec  lfs 1, -3056(28)
  02abff0  lwz 3, 444(27)
  02abff4  lfd 2, 440(1)
  02abff8  fcfid 2, 2
  02abffc  frsp 2, 2
  02ac000  fadds 2, 2, 28
  02ac004  fmuls 1, 1, 2
  02ac008  fctiwz 1, 1
  02ac00c  stfd 1, 440(1)
  02ac010  lwz 4, 444(1)
  02ac014  cmpw 3, 4
  02ac018  bf 1, 0x2ac7e0
  02ac01c  lwz 3, 0(30)
  02ac020  cmpwi 3, 0
  02ac024  bf 2, 0x2ac7e0
  02ac028  li 3, -1
  02ac02c  li 4, 1
  02ac030  bl 0xaa258
  02ac034  nop
  02ac038  cmpwi 3, 0
  02ac03c  bt 2, 0x2ac6e0
  02ac040  lbz 3, 8364(27)
  02ac044  cmpwi 1, 29, 0
  02ac048  cmpwi 3, 0
  02ac04c  bf 2, 0x2ac6e0
  02ac050  lis 3, 43
  02ac054  li 4, 40
  02ac058  vspltisw 2, -1
  02ac05c  addi 3, 3, -18176
  02ac060  li 5, -3056
  02ac064  vslw 2, 2, 2
  02ac068  lvlx 3, 4, 3
  02ac06c  lvlx 4, 5, 28
  02ac070  vspltw 3, 3, 0
  02ac074  vmaddfp 2, 4, 3, 2
  02ac078  vctsxs 2, 2, 0
  02ac07c  vspltw 2, 2, 0
  02ac080  stvewx 2, 0, 30
  02ac084  bt 6, 0x2ac240
  02ac088  lis 3, 43
  02ac08c  lis 4, 114
  02ac090  addi 3, 3, -18176
  02ac094  lfs 1, 8(3)
  02ac098  lfs 27, -3052(4)
  02ac09c  lfs 26, 16(29)
  02ac0a0  ori 3, 29, 0
  02ac0a4  lfs 25, 20(29)
  02ac0a8  fmuls 27, 27, 1
  02ac0ac  lfs 24, 24(29)
  02ac0b0  bl 0xfcccc
  02ac0b4  nop
  02ac0b8  lfs 1, 144(1)
  02ac0bc  cmpwi 3, 0
  02ac0c0  lfs 2, 148(1)
  02ac0c4  fmr 4, 28
  02ac0c8  lfs 3, 152(1)
  02ac0cc  bt 2, 0x2ac0d4
  02ac0d0  lfs 4, 16(3)
  02ac0d4  fsubs 2, 2, 25
  02ac0d8  fadds 23, 24, 4
  02ac0dc  fsubs 1, 1, 26
  02ac0e0  fmuls 4, 2, 2
  02ac0e4  fsubs 2, 23, 3
  02ac0e8  fmadds 1, 1, 1, 4
  02ac0ec  fsqrts 1, 1
  02ac0f0  bl 0x5e8338
  02ac0f4  nop
  02ac0f8  fneg 2, 1
  02ac0fc  lfs 1, 740(27)
  02ac100  fnmsubs 30, 1, 28, 30
  02ac104  stfs 2, 436(1)
  02ac108  fmr 1, 30
  02ac10c  bl 0x5026a0
  02ac110  nop
  02ac114  lis 3, 43
  02ac118  addi 3, 3, -18176
  02ac11c  lfs 24, 44(3)
  02ac120  fcmpu 0, 1, 24
  02ac124  cror 6, 1, 2
  02ac128  bt 6, 0x2ac134
  02ac12c  lfs 30, 436(1)
  02ac130  b 0x2ac1ac
  02ac134  fmr 1, 30
  02ac138  fmr 2, 24
  02ac13c  bl 0x502578
  02ac140  nop
  02ac144  lfs 2, 436(1)
  02ac148  fcmpu 0, 1, 2
  02ac14c  cror 6, 1, 2
  02ac150  bt 6, 0x2ac16c
  02ac154  fmr 1, 30
  02ac158  fmr 2, 24
  02ac15c  bl 0x502578
  02ac160  nop
  02ac164  fmr 30, 1
  02ac168  b 0x2ac1ac
  02ac16c  lis 3, 43
  02ac170  fmr 1, 30
  02ac174  addi 3, 3, -18176
  02ac178  lfs 24, 48(3)
  02ac17c  fmr 2, 24
  02ac180  bl 0x502578
  02ac184  nop
  02ac188  lfs 2, 436(1)
  02ac18c  fcmpu 0, 1, 2
  02ac190  cror 6, 0, 2
  02ac194  bt 6, 0x2ac1ac
  02ac198  fmr 1, 30
  02ac19c  fmr 2, 24
  02ac1a0  bl 0x502578
  02ac1a4  nop
  02ac1a8  fmr 30, 1
  02ac1ac  fmr 1, 27
  02ac1b0  addic 3, 1, 208
  02ac1b4  fneg 3, 30
  02ac1b8  fmr 2, 31
  02ac1bc  bl 0xfe610
  02ac1c0  nop
  02ac1c4  lfs 1, 208(1)
  02ac1c8  lfs 2, 144(1)
  02ac1cc  lfs 3, 212(1)
  02ac1d0  fadds 2, 1, 2
  02ac1d4  lfs 1, 148(1)
  02ac1d8  lfs 4, 216(1)
  02ac1dc  fadds 3, 3, 1
  02ac1e0  lfs 1, 152(1)
  02ac1e4  fadds 4, 4, 1
  02ac1e8  fsubs 1, 26, 2
  02ac1ec  stfs 2, 208(1)
  02ac1f0  fsubs 2, 25, 3
  02ac1f4  stfs 3, 212(1)
  02ac1f8  stfs 4, 216(1)
  02ac1fc  bl 0x5e8338
  02ac200  nop
  02ac204  lfs 2, 212(1)
  02ac208  lfs 3, 208(1)
  02ac20c  fsubs 4, 2, 25
  02ac210  stfs 1, 432(1)
  02ac214  fsubs 3, 3, 26
  02ac218  lfs 2, 216(1)
  02ac21c  fsubs 2, 23, 2
  02ac220  fmuls 1, 4, 4
  02ac224  fmadds 1, 3, 3, 1
  02ac228  fsqrts 1, 1
  02ac22c  bl 0x5e8338
  02ac230  nop
  02ac234  fneg 1, 1
  02ac238  stfs 1, 436(1)
  02ac23c  b 0x2ac260
  02ac240  lwz 3, 8324(27)
  02ac244  cmpwi 3, 30
  02ac248  bt 2, 0x2ac260
  02ac24c  lfs 1, 740(27)
  02ac250  lfs 2, 436(1)
  02ac254  fnmsubs 30, 1, 28, 30
  02ac258  fnmsubs 2, 1, 28, 2
  02ac25c  stfs 2, 436(1)
  02ac260  lis 3, 1
  02ac264  lis 4, 16000
  02ac268  stw 31, 336(1)
  02ac26c  li 26, 1
  02ac270  fmr 27, 31
  02ac274  stw 3, 340(1)
  02ac278  stw 4, 348(1)
  02ac27c  lfs 1, 1648(27)
  02ac280  lfs 2, 1652(27)
  02ac284  stw 26, 352(1)
  02ac288  bl 0x5e8338
  02ac28c  nop
  02ac290  lis 3, 43
  02ac294  addi 23, 3, -18176
  02ac298  lfs 2, 52(23)
  02ac29c  lfs 31, 56(23)
  02ac2a0  fadds 1, 1, 2
  02ac2a4  lfs 26, 60(23)
  02ac2a8  lfs 25, 64(23)
  02ac2ac  lfs 24, 68(23)
  02ac2b0  lfs 23, 72(23)
  02ac2b4  lfs 22, 76(23)
  02ac2b8  fsubs 2, 31, 1
  02ac2bc  fsubs 3, 26, 1
  02ac2c0  fsub 4, 1, 2
  02ac2c4  fsel 1, 4, 2, 1
  02ac2c8  fsub 4, 3, 1
  02ac2cc  fsel 1, 4, 3, 1
  02ac2d0  fmuls 3, 1, 1
  02ac2d4  fmuls 2, 3, 1
  02ac2d8  fmuls 6, 3, 2
  02ac2dc  fmadds 7, 2, 25, 1
  02ac2e0  lfs 1, 1648(27)
  02ac2e4  lfs 2, 1652(27)
  02ac2e8  fmuls 4, 3, 6
  02ac2ec  fmadds 5, 6, 24, 7
  02ac2f0  fmuls 3, 3, 4
  02ac2f4  fmadds 4, 4, 23, 5
  02ac2f8  fmadds 3, 3, 22, 4
  02ac2fc  stfs 3, 320(1)
  02ac300  bl 0x5e8338
  02ac304  nop
  02ac308  fsubs 2, 31, 1
  02ac30c  fsubs 3, 26, 1
  02ac310  lis 3, 17839
  02ac314  lis 5, 16256
  02ac318  lhz 4, 166(31)
  02ac31c  ori 6, 3, 57190
  02ac320  addic 25, 1, 224
  02ac324  ori 3, 25, 0
  02ac328  fsub 4, 1, 2
  02ac32c  fsel 1, 4, 2, 1
  02ac330  fsub 2, 3, 1
  02ac334  fsel 1, 2, 3, 1
  02ac338  fmuls 2, 1, 1
  02ac33c  fmuls 3, 2, 1
  02ac340  fmuls 4, 2, 3
  02ac344  fmadds 1, 3, 25, 1
  02ac348  fmr 3, 28
  02ac34c  fmuls 5, 2, 4
  02ac350  fmadds 1, 4, 24, 1
  02ac354  fmuls 2, 2, 5
  02ac358  fmadds 1, 5, 23, 1
  02ac35c  fmadds 1, 2, 22, 1
  02ac360  stfs 1, 324(1)
  02ac364  lfs 31, 12(23)
  02ac368  stw 5, 328(1)
  02ac36c  stw 6, 332(1)
  02ac370  stb 26, 344(1)
  02ac374  stb 26, 345(1)
  02ac378  sth 4, 346(1)
  02ac37c  lfs 1, 80(23)
  02ac380  lfs 2, 84(23)
  02ac384  bl 0x84180
  02ac388  nop
  02ac38c  lfs 1, 88(23)
  02ac390  addic 7, 1, 320
  02ac394  lwz 6, 8320(27)
  02ac398  ori 3, 25, 0
  02ac39c  li 5, 5
  02ac3a0  bl 0x5e598
  02ac3a4  nop
  02ac3a8  lfs 1, 144(1)
  02ac3ac  lfs 2, 152(1)
  02ac3b0  stfs 1, 64(1)
  02ac3b4  stfs 2, 72(1)
  02ac3b8  lwz 3, 8320(27)
  02ac3bc  lfs 1, 148(1)
  02ac3c0  lfs 2, 432(1)
  02ac3c4  lfs 3, 436(1)
  02ac3c8  stfs 1, 68(1)
  02ac3cc  lfs 4, 156(1)
  02ac3d0  fmr 1, 2
  02ac3d4  fmr 2, 3
  02ac3d8  stfs 4, 76(1)
  02ac3dc  std 29, 112(1)
  02ac3e0  fmr 3, 27
  02ac3e4  ld 5, 64(1)
  02ac3e8  fmr 4, 30
  02ac3ec  ld 6, 72(1)
  02ac3f0  bl 0x33a1d0
  02ac3f4  nop
  02ac3f8  li 3, 92
  02ac3fc  vspltisw 2, -1
  02ac400  li 4, -3056
  02ac404  lis 26, 114
  02ac408  ori 29, 24, 0
  02ac40c  lvlx 3, 3, 23
  02ac410  vslw 2, 2, 2
  02ac414  vspltw 3, 3, 0
  02ac418  li 3, 20
  02ac41c  lvlx 4, 4, 28
  02ac420  addic 25, 1, 144
  02ac424  vmaddfp 2, 4, 3, 2
  02ac428  vctsxs 2, 2, 0
  02ac42c  vspltw 2, 2, 0
  02ac430  stvewx 2, 3, 30
  02ac434  lfs 30, 96(23)
  02ac438  lfs 27, 32(23)
  02ac43c  lfs 26, 100(23)
  02ac440  lfs 25, 104(23)
  02ac444  lfs 24, 108(23)
  02ac448  lfs 23, 112(23)
  02ac44c  lfs 22, 116(23)
  02ac450  fmr 1, 30
  02ac454  stw 24, 240(1)
  02ac458  fmr 2, 31
  02ac45c  stw 24, 244(1)
  02ac460  stw 24, 248(1)
  02ac464  stw 24, 252(1)
  02ac468  bl 0xfcbe8
  02ac46c  nop
  02ac470  stfs 1, 240(1)
  02ac474  fmr 1, 30
  02ac478  fmr 2, 31
  02ac47c  bl 0xfcbe8
  02ac480  nop
  02ac484  stfs 1, 244(1)
  02ac488  fmr 2, 31
  02ac48c  fmr 1, 30
  02ac490  bl 0xfcbe8
  02ac494  nop
  02ac498  lfs 3, 132(1)
  02ac49c  lfs 4, 128(1)
  02ac4a0  fmuls 2, 3, 3
  02ac4a4  lfs 5, 244(1)
  02ac4a8  lfs 6, 136(1)
  02ac4ac  fmuls 7, 5, 5
  02ac4b0  lfs 8, 240(1)
  02ac4b4  lfs 9, 140(1)
  02ac4b8  lfs 10, -3052(26)
  02ac4bc  stfs 9, 252(1)
  02ac4c0  fmadds 2, 4, 4, 2
  02ac4c4  fmadds 7, 8, 8, 7
  02ac4c8  fmadds 2, 6, 6, 2
  02ac4cc  fmadds 7, 1, 1, 7
  02ac4d0  fsqrts 2, 2
  02ac4d4  fsqrts 7, 7
  02ac4d8  fmuls 9, 2, 27
  02ac4dc  fmuls 2, 10, 25
  02ac4e0  fdivs 9, 9, 7
  02ac4e4  fsub 11, 29, 7
  02ac4e8  fsub 12, 29, 7
  02ac4ec  fsub 13, 29, 7
  02ac4f0  fsub 0, 7, 29
  02ac4f4  fsub 21, 7, 29
  02ac4f8  fsub 7, 7, 29
  02ac4fc  fmuls 20, 1, 9
  02ac500  fmuls 5, 5, 9
  02ac504  fmuls 8, 8, 9
  02ac508  fmuls 1, 10, 26
  02ac50c  fsel 9, 11, 29, 20
  02ac510  fsel 10, 12, 29, 5
  02ac514  fsel 11, 13, 29, 8
  02ac518  fsel 9, 0, 9, 20
  02ac51c  fsel 5, 21, 10, 5
  02ac520  fsel 7, 7, 11, 8
  02ac524  fadds 6, 6, 9
  02ac528  fadds 3, 3, 5
  02ac52c  fadds 4, 4, 7
  02ac530  stfs 6, 248(1)
  02ac534  stfs 3, 244(1)
  02ac538  stfs 4, 240(1)
  02ac53c  bl 0xfcbe8
  02ac540  nop
  02ac544  lfs 2, 244(1)
  02ac548  lfs 3, 240(1)
  02ac54c  fmuls 4, 2, 2
  02ac550  lfs 5, 248(1)
  02ac554  lfs 6, -3056(28)
  02ac558  fmuls 7, 6, 24
  02ac55c  fmuls 6, 6, 23
  02ac560  fmadds 4, 3, 3, 4
  02ac564  fctiwz 7, 7
  02ac568  fctiwz 6, 6
  02ac56c  fmadds 4, 5, 5, 4
  02ac570  stfd 7, 440(1)
  02ac574  fsqrts 4, 4
  02ac578  lwz 3, 444(1)
  02ac57c  stfd 6, 440(1)
  02ac580  lwz 4, 444(1)
  02ac584  extsw 3, 3
  02ac588  extsw 4, 4
  02ac58c  fdivs 1, 1, 4
  02ac590  fsub 6, 29, 4
  02ac594  fsub 7, 29, 4
  02ac598  fsub 8, 29, 4
  02ac59c  fsub 9, 4, 29
  02ac5a0  fsub 10, 4, 29
  02ac5a4  fsub 4, 4, 29
  02ac5a8  fmuls 3, 3, 1
  02ac5ac  fmuls 2, 2, 1
  02ac5b0  fmuls 1, 5, 1
  02ac5b4  fsel 5, 6, 29, 3
  02ac5b8  fsel 6, 7, 29, 2
  02ac5bc  fsel 7, 8, 29, 1
  02ac5c0  fsel 3, 9, 5, 3
  02ac5c4  fsel 2, 10, 6, 2
  02ac5c8  fsel 1, 4, 7, 1
  02ac5cc  stfs 3, 240(1)
  02ac5d0  stfs 2, 244(1)
  02ac5d4  stfs 1, 248(1)
  02ac5d8  bl 0xfe484
  02ac5dc  nop
  02ac5e0  lis 5, 24367
  02ac5e4  ori 6, 3, 0
  02ac5e8  fmr 1, 22
  02ac5ec  addic 4, 1, 240
  02ac5f0  ori 3, 25, 0
  02ac5f4  ori 5, 5, 20335
  02ac5f8  bl 0x128248
  02ac5fc  nop
  02ac600  addic 29, 29, 1
  02ac604  cmpwi 29, 5
  02ac608  bt 0, 0x2ac450
  02ac60c  lfs 1, 132(1)
  02ac610  lfs 2, 128(1)
  02ac614  fmuls 3, 1, 1
  02ac618  lfs 4, 136(1)
  02ac61c  lfs 5, -3052(26)
  02ac620  fmuls 5, 5, 28
  02ac624  fmadds 3, 2, 2, 3
  02ac628  lis 3, 43
  02ac62c  lfs 6, -3056(28)
  02ac630  addi 29, 3, -18176
  02ac634  fmadds 3, 4, 4, 3
  02ac638  fsqrts 3, 3
  02ac63c  fdivs 5, 5, 3
  02ac640  fsub 7, 29, 3
  02ac644  fsub 8, 29, 3
  02ac648  fsub 9, 29, 3
  02ac64c  fsub 10, 3, 29
  02ac650  fsub 11, 3, 29
  02ac654  fsub 3, 3, 29
  02ac658  fmuls 2, 2, 5
  02ac65c  fmuls 1, 1, 5
  02ac660  fmuls 4, 4, 5
  02ac664  fsel 5, 7, 29, 2
  02ac668  fsel 7, 8, 29, 1
  02ac66c  fsel 8, 9, 29, 4
  02ac670  fsel 2, 10, 5, 2
  02ac674  fsel 1, 11, 7, 1
  02ac678  fsel 3, 3, 8, 4
  02ac67c  stfs 2, 128(1)
  02ac680  stfs 1, 132(1)
  02ac684  stfs 3, 136(1)
  02ac688  lfs 1, 120(29)
  02ac68c  fmuls 1, 6, 1
  02ac690  fctiwz 1, 1
  02ac694  stfd 1, 440(1)
  02ac698  lfs 1, 4(29)
  02ac69c  lwz 3, 444(1)
  02ac6a0  fmuls 1, 6, 1
  02ac6a4  extsw 3, 3
  02ac6a8  fctiwz 1, 1
  02ac6ac  stfd 1, 440(1)
  02ac6b0  lwz 4, 444(1)
  02ac6b4  extsw 4, 4
  02ac6b8  bl 0xfe484
  02ac6bc  nop
  02ac6c0  lis 5, 12111
  02ac6c4  ori 6, 3, 0
  02ac6c8  lfs 1, 124(29)
  02ac6cc  ori 3, 25, 0
  02ac6d0  addic 4, 1, 128
  02ac6d4  ori 5, 5, 32639
  02ac6d8  bl 0x128248
  02ac6dc  nop
  02ac6e0  lbz 3, 83(31)
  02ac6e4  cmpwi 3, 4
  02ac6e8  bt 2, 0x2ac724
  02ac6ec  lis 3, 43
  02ac6f0  lfs 1, -3056(28)
  02ac6f4  addi 3, 3, -18176
  02ac6f8  li 4, 4
  02ac6fc  li 5, 0
  02ac700  lfs 2, 4(3)
  02ac704  ori 3, 31, 0
  02ac708  fmuls 1, 1, 2
  02ac70c  fctiwz 1, 1
  02ac710  stfd 1, 440(1)
  02ac714  lwz 6, 444(1)
  02ac718  extsw 6, 6
  02ac71c  bl 0xfddc0
  02ac720  nop
  02ac724  lis 3, 161
  02ac728  lis 4, 0
  02ac72c  addic 3, 3, -732
  02ac730  ori 5, 4, 65535
  02ac734  lhz 4, 120(3)
  02ac738  cmpw 4, 5
  02ac73c  bf 0, 0x2ac748
  02ac740  addic 4, 4, 1
  02ac744  sth 4, 120(3)
  02ac748  lis 4, 161
  02ac74c  lwz 4, -2344(4)
  02ac750  extsw 4, 4
  02ac754  std 4, 440(1)
  02ac758  lfs 1, -3056(28)
  02ac75c  lhz 5, 122(3)
  02ac760  lfd 2, 440(1)
  02ac764  fcfid 2, 2
  02ac768  lis 4, 6990
  02ac76c  ori 4, 4, 33205
  02ac770  frsp 2, 2
  02ac774  fadds 2, 2, 28
  02ac778  fmuls 1, 1, 2
  02ac77c  fctiwz 1, 1
  02ac780  stfd 1, 440(1)
  02ac784  lwz 28, 444(1)
  02ac788  mulhw 4, 4, 28
  02ac78c  srawi 4, 4, 6
  02ac790  srwi 6, 4, 31
  02ac794  addc 4, 4, 6
  02ac798  cmpw 4, 5
  02ac79c  bf 1, 0x2ac7bc
  02ac7a0  lis 4, 6990
  02ac7a4  ori 4, 4, 33205
  02ac7a8  mulhw 4, 4, 28
  02ac7ac  srawi 4, 4, 6
  02ac7b0  srwi 5, 4, 31
  02ac7b4  addc 4, 4, 5
  02ac7b8  sth 4, 122(3)
  02ac7bc  lis 4, 151
  02ac7c0  lwz 7, 124(3)
  02ac7c4  li 5, 1
  02ac7c8  lis 6, -32768
  02ac7cc  lwz 4, -25488(4)
  02ac7d0  slw 4, 5, 4
  02ac7d4  or 4, 7, 4
  02ac7d8  or 4, 4, 6
  02ac7dc  stw 4, 124(3)
  02ac7e0  lis 3, 150
  02ac7e4  lwz 4, 4256(27)
  02ac7e8  addic 3, 3, 19008
  02ac7ec  lwz 3, 160(3)
  02ac7f0  and 3, 3, 4
  02ac7f4  cmpwi 3, 0
  02ac7f8  bt 2, 0x2ac810
  02ac7fc  li 3, -1
  02ac800  bl 0x8e0f4
  02ac804  nop
  02ac808  cmpwi 3, 0
  02ac80c  bf 2, 0x2ac84c
  02ac810  lis 3, 43
  02ac814  lis 4, 114
  02ac818  addi 3, 3, -18176
  02ac81c  lfs 1, 128(3)
  02ac820  lfs 2, -3056(4)
  02ac824  lwz 3, 444(27)
  02ac828  fmuls 1, 2, 1
  02ac82c  fctiwz 1, 1
  02ac830  stfd 1, 440(1)
  02ac834  lwz 4, 444(1)
  02ac838  cmpw 3, 4
  02ac83c  bt 1, 0x2ac868
  02ac840  lbz 3, 8360(27)
  02ac844  cmpwi 3, 0
  02ac848  bt 2, 0x2ac868
  02ac84c  lwz 3, 8324(27)
  02ac850  cmpwi 3, 114
  02ac854  bt 2, 0x2ac868
  02ac858  lis 3, 161
  02ac85c  lwz 3, 1800(3)
  02ac860  cmpwi 3, 2
  02ac864  bf 2, 0x2ac930
  02ac868  lbz 3, 83(31)
  02ac86c  cmpwi 3, 0
  02ac870  cmpwi 1, 3, 1
  02ac874  bf 2, 0x2ac888
  02ac878  lbz 3, 112(31)
  02ac87c  rlwinm 3, 3, 0, 30, 30
  02ac880  cmpwi 3, 0
  02ac884  bt 2, 0x2ac8e8
  02ac888  lwz 3, 8324(27)
  02ac88c  cmpwi 3, 114
  02ac890  bt 2, 0x2ac8e8
  02ac894  lis 3, 161
  02ac898  lwz 3, 1800(3)
  02ac89c  cmpwi 3, 2
  02ac8a0  bt 2, 0x2ac8e8
  02ac8a4  bt 6, 0x2ac924
  02ac8a8  lis 3, 43
  02ac8ac  lis 4, 114
  02ac8b0  addi 3, 3, -18176
  02ac8b4  li 5, 0
  02ac8b8  lfs 1, 4(3)
  02ac8bc  lfs 2, -3056(4)
  02ac8c0  ori 3, 31, 0
  02ac8c4  li 4, 1
  02ac8c8  fmuls 1, 2, 1
  02ac8cc  fctiwz 1, 1
  02ac8d0  stfd 1, 440(1)
  02ac8d4  lwz 6, 444(1)
  02ac8d8  extsw 6, 6
  02ac8dc  bl 0xfddc0
  02ac8e0  nop
  02ac8e4  b 0x2ac924
  02ac8e8  lwz 3, 8324(27)
  02ac8ec  cmpwi 3, 114
  02ac8f0  bt 2, 0x2ac904
  02ac8f4  lis 3, 161
  02ac8f8  lwz 3, 1800(3)
  02ac8fc  cmpwi 3, 2
  02ac900  bf 2, 0x2ac924
  02ac904  ori 3, 31, 0
  02ac908  li 4, 1
  02ac90c  li 5, 0
  02ac910  bl 0xfdcf0
  02ac914  nop
  02ac918  ori 3, 31, 0
  02ac91c  bl 0xf98d8
  02ac920  nop
  02ac924  bl 0x855b8
  02ac928  nop
  02ac92c  stw 24, 0(30)
  02ac930  lbz 3, 82(31)
  02ac934  cmpwi 3, 2
  02ac938  bt 2, 0x2acbd4
  02ac93c  lwz 3, 20(30)
  02ac940  cmpwi 3, 0
  02ac944  bf 1, 0x2acbd4
  02ac948  lis 4, 43
  02ac94c  lis 29, 114
  02ac950  addi 31, 4, -18176
  02ac954  extsw 4, 3
  02ac958  lfs 28, 128(31)
  02ac95c  lfs 1, -3056(29)
  02ac960  fmuls 1, 1, 28
  02ac964  fctiwz 1, 1
  02ac968  stfd 1, 440(1)
  02ac96c  lwz 5, 444(1)
  02ac970  extsw 6, 5
  02ac974  subc 3, 3, 5
  02ac978  subc 4, 4, 6
  02ac97c  sradi 4, 4, 63
  02ac980  and 3, 4, 3
  02ac984  addc 3, 5, 3
  02ac988  extsw 3, 3
  02ac98c  bl 0x502730
  02ac990  nop
  02ac994  lfs 2, -3056(29)
  02ac998  lfs 27, 80(31)
  02ac99c  fmuls 3, 2, 28
  02ac9a0  fmuls 31, 1, 27
  02ac9a4  lwz 3, 20(30)
  02ac9a8  extsw 4, 3
  02ac9ac  fctidz 1, 3
  02ac9b0  fctiwz 2, 3
  02ac9b4  fcfid 1, 1
  02ac9b8  stfd 2, 440(1)
  02ac9bc  lwz 5, 444(1)
  02ac9c0  extsw 6, 5
  02ac9c4  subc 3, 3, 5
  02ac9c8  subc 4, 4, 6
  02ac9cc  frsp 1, 1
  02ac9d0  sradi 4, 4, 63
  02ac9d4  and 3, 4, 3
  02ac9d8  addc 3, 5, 3
  02ac9dc  extsw 3, 3
  02ac9e0  fdivs 31, 31, 1
  02ac9e4  bl 0x502730
  02ac9e8  nop
  02ac9ec  lfs 2, -3056(29)
  02ac9f0  fmuls 30, 1, 27
  02ac9f4  lwz 3, 20(30)
  02ac9f8  fmuls 1, 2, 28
  02ac9fc  extsw 4, 3
  02aca00  fctiwz 2, 1
  02aca04  fctidz 1, 1
  02aca08  fcfid 1, 1
  02aca0c  stfd 2, 440(1)
  02aca10  lwz 5, 444(1)
  02aca14  extsw 6, 5
  02aca18  subc 3, 3, 5
  02aca1c  subc 4, 4, 6
  02aca20  sradi 4, 4, 63
  02aca24  frsp 1, 1
  02aca28  and 3, 4, 3
  02aca2c  addc 3, 5, 3
  02aca30  extsw 3, 3
  02aca34  fdivs 30, 30, 1
  02aca38  bl 0x502730
  02aca3c  nop
  02aca40  lfs 2, -3056(29)
  02aca44  fmuls 4, 2, 28
  02aca48  fmuls 28, 1, 27
  02aca4c  lfs 1, 1648(27)
  02aca50  lfs 2, 1652(27)
  02aca54  lfs 27, 128(27)
  02aca58  fctidz 3, 4
  02aca5c  fcfid 3, 3
  02aca60  frsp 3, 3
  02aca64  fdivs 28, 28, 3
  02aca68  bl 0x5e8338
  02aca6c  nop
  02aca70  lfs 2, 52(31)
  02aca74  lfs 26, 56(31)
  02aca78  fadds 1, 1, 2
  02aca7c  lfs 25, 60(31)
  02aca80  lfs 24, 64(31)
  02aca84  lfs 23, 68(31)
  02aca88  lfs 22, 72(31)
  02aca8c  lfs 21, 76(31)
  02aca90  lfs 20, 132(31)
  02aca94  fsubs 2, 26, 1
  02aca98  fsubs 3, 25, 1
  02aca9c  fsub 5, 1, 2
  02acaa0  fsel 1, 5, 2, 1
  02acaa4  fsub 2, 3, 1
  02acaa8  fsel 1, 2, 3, 1
  02acaac  fmuls 3, 1, 1
  02acab0  fmuls 4, 3, 1
  02acab4  fmuls 2, 3, 4
  02acab8  fmadds 1, 4, 24, 1
  02acabc  lfs 4, 1648(27)
  02acac0  lfs 6, 1652(27)
  02acac4  lfs 19, 132(27)
  02acac8  fmuls 5, 3, 2
  02acacc  fmadds 2, 2, 23, 1
  02acad0  fmr 1, 4
  02acad4  fmuls 3, 3, 5
  02acad8  fmadds 4, 5, 22, 2
  02acadc  fmr 2, 6
  02acae0  fmadds 3, 3, 21, 4
  02acae4  fmadds 3, 3, 20, 27
  02acae8  stfs 3, 256(1)
  02acaec  bl 0x5e8338
  02acaf0  nop
  02acaf4  fsubs 2, 26, 1
  02acaf8  fsubs 3, 25, 1
  02acafc  fsub 4, 1, 2
  02acb00  fsel 1, 4, 2, 1
  02acb04  fsub 2, 3, 1
  02acb08  fsel 1, 2, 3, 1
  02acb0c  fmuls 2, 1, 1
  02acb10  fmuls 3, 2, 1
  02acb14  fmuls 4, 2, 3
  02acb18  fmadds 1, 3, 24, 1
  02acb1c  fmuls 3, 2, 4
  02acb20  fmadds 1, 4, 23, 1
  02acb24  lfs 4, 136(27)
  02acb28  fmuls 2, 2, 3
  02acb2c  fmadds 3, 3, 22, 1
  02acb30  lfs 1, 256(1)
  02acb34  lwz 3, 16(30)
  02acb38  cmpwi 3, -1
  02acb3c  fmadds 2, 2, 21, 3
  02acb40  fmadds 2, 2, 20, 19
  02acb44  stfs 2, 260(1)
  02acb48  lfs 2, 12(31)
  02acb4c  fadds 2, 4, 2
  02acb50  stfs 2, 264(1)
  02acb54  bf 2, 0x2acb88
  02acb58  lis 4, 43
  02acb5c  addic 3, 1, 256
  02acb60  fmr 2, 29
  02acb64  addi 4, 4, -18176
  02acb68  fmr 3, 31
  02acb6c  fmr 4, 30
  02acb70  fmr 5, 28
  02acb74  lfs 1, 104(4)
  02acb78  bl 0xda4ac
  02acb7c  nop
  02acb80  stw 3, 16(30)
  02acb84  b 0x2acbc4
  02acb88  lis 4, 162
  02acb8c  slwi 3, 3, 5
  02acb90  addic 4, 4, -8448
  02acb94  addc 3, 4, 3
  02acb98  lis 4, 16576
  02acb9c  clrldi 3, 3, 32
  02acba0  stfs 1, 16(3)
  02acba4  lfs 1, 260(1)
  02acba8  stfs 1, 20(3)
  02acbac  lfs 1, 264(1)
  02acbb0  stw 4, 28(3)
  02acbb4  stfs 1, 24(3)
  02acbb8  stfs 31, 0(3)
  02acbbc  stfs 30, 4(3)
  02acbc0  stfs 28, 8(3)
  02acbc4  addic 3, 30, 20
  02acbc8  bl 0x4fff60
  02acbcc  nop
  02acbd0  b 0x2acbf8
  02acbd4  lwz 3, 16(30)
  02acbd8  cmpwi 3, -1
  02acbdc  bt 2, 0x2acbf8
  02acbe0  extsw 3, 3
  02acbe4  bl 0xda9e8
  02acbe8  nop
  02acbec  li 3, -1
  02acbf0  stw 24, 20(30)
  02acbf4  stw 3, 16(30)
  02acbf8  ld 0, 656(1)
  02acbfc  mtlr 0
  02acc00  lfd 19, 536(1)
  02acc04  lfd 20, 544(1)
  02acc08  lfd 21, 552(1)
  02acc0c  lfd 22, 560(1)
  02acc10  lfd 23, 568(1)
  02acc14  lfd 24, 576(1)
  02acc18  lfd 25, 584(1)
  02acc1c  lfd 26, 592(1)
  02acc20  lfd 27, 600(1)
  02acc24  lfd 28, 608(1)
  02acc28  lfd 29, 616(1)
  02acc2c  lfd 30, 624(1)
  02acc30  lfd 31, 632(1)
  02acc34  ld 23, 464(1)
  02acc38  ld 24, 472(1)
  02acc3c  ld 25, 480(1)
  02acc40  ld 26, 488(1)
  02acc44  ld 27, 496(1)
  02acc48  ld 28, 504(1)
  02acc4c  ld 29, 512(1)
  02acc50  ld 30, 520(1)
  02acc54  ld 31, 528(1)
  02acc58  addi 1, 1, 640
  02acc5c  blr
