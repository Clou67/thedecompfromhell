# game/update/moby520.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M520_003ab498:   # 0x3ab498, 0x14 bytes
  03ab498  lis 3, 132
  03ab49c  lis 4, 1
  03ab4a0  addic 3, 3, 14012
  03ab4a4  stw 4, 72(3)
  03ab4a8  blr

M520_003ab4e8:   # 0x3ab4e8, 0x38c bytes
  03ab4e8  stdu 1, -256(1)
  03ab4ec  mflr 0
  03ab4f0  std 0, 272(1)
  03ab4f4  stfd 26, 208(1)
  03ab4f8  stfd 27, 216(1)
  03ab4fc  stfd 28, 224(1)
  03ab500  stfd 29, 232(1)
  03ab504  stfd 30, 240(1)
  03ab508  stfd 31, 248(1)
  03ab50c  std 31, 200(1)
  03ab510  std 28, 176(1)
  03ab514  ori 31, 3, 0
  03ab518  lis 5, 59
  03ab51c  std 30, 192(1)
  03ab520  ori 28, 4, 0
  03ab524  addi 30, 5, -19280
  03ab528  li 3, 0
  03ab52c  li 4, 0
  03ab530  std 29, 184(1)
  03ab534  ori 5, 31, 0
  03ab538  bl 0x15d12c
  03ab53c  nop
  03ab540  lfs 1, 16(31)
  03ab544  lis 10, 16512
  03ab548  lfs 2, 20(31)
  03ab54c  addic 3, 1, 112
  03ab550  stfs 1, 112(1)
  03ab554  li 7, 1
  03ab558  lfs 1, 28(31)
  03ab55c  ori 10, 10, 32896
  03ab560  stfs 2, 116(1)
  03ab564  stfs 1, 124(1)
  03ab568  lfs 31, 0(30)
  03ab56c  lfs 1, 24(31)
  03ab570  fadds 2, 1, 31
  03ab574  fmr 1, 31
  03ab578  stfs 2, 120(1)
  03ab57c  lfs 27, 4(30)
  03ab580  lfs 28, 12(30)
  03ab584  lfs 29, 16(30)
  03ab588  lfs 3, 8(30)
  03ab58c  fmr 2, 27
  03ab590  fmr 4, 28
  03ab594  fmr 5, 29
  03ab598  bl 0x1246b8
  03ab59c  nop
  03ab5a0  li 29, 0
  03ab5a4  lfs 30, 20(30)
  03ab5a8  ori 30, 29, 0
  03ab5ac  lis 10, 16512
  03ab5b0  addic 3, 1, 112
  03ab5b4  fmr 1, 31
  03ab5b8  li 7, 1
  03ab5bc  fmr 2, 27
  03ab5c0  fmr 3, 30
  03ab5c4  ori 10, 10, 32896
  03ab5c8  fmr 4, 28
  03ab5cc  fmr 5, 29
  03ab5d0  bl 0x1246b8
  03ab5d4  nop
  03ab5d8  addic 29, 29, 1
  03ab5dc  cmpwi 29, 5
  03ab5e0  bt 0, 0x3ab5ac
  03ab5e4  cmpwi 28, 0
  03ab5e8  bt 2, 0x3ab608
  03ab5ec  lfs 1, 16(28)
  03ab5f0  lfs 2, 20(28)
  03ab5f4  stfs 1, 128(1)
  03ab5f8  lfs 27, 24(28)
  03ab5fc  stfs 2, 132(1)
  03ab600  lfs 1, 28(28)
  03ab604  b 0x3ab644
  03ab608  lis 3, 151
  03ab60c  lfs 1, 16(31)
  03ab610  addic 3, 3, -25376
  03ab614  lwz 3, 8320(3)
  03ab618  lfs 2, 20(31)
  03ab61c  lfs 3, 16(3)
  03ab620  lfs 27, 24(31)
  03ab624  fsubs 3, 1, 3
  03ab628  lfs 1, 28(31)
  03ab62c  stfs 3, 128(1)
  03ab630  lfs 3, 20(3)
  03ab634  fsubs 2, 2, 3
  03ab638  stfs 2, 132(1)
  03ab63c  lfs 2, 24(3)
  03ab640  fsubs 27, 27, 2
  03ab644  lis 3, 59
  03ab648  stfs 27, 136(1)
  03ab64c  lis 28, 161
  03ab650  addi 3, 3, -19280
  03ab654  stfs 1, 140(1)
  03ab658  ori 29, 30, 0
  03ab65c  addic 28, 28, 23856
  03ab660  lfs 27, 24(3)
  03ab664  lfs 28, 28(3)
  03ab668  lfs 29, 32(3)
  03ab66c  lfs 30, 36(3)
  03ab670  lfs 26, 40(3)
  03ab674  fmr 1, 28
  03ab678  stw 30, 144(1)
  03ab67c  fmr 2, 29
  03ab680  stw 30, 148(1)
  03ab684  stw 30, 152(1)
  03ab688  stw 30, 156(1)
  03ab68c  bl 0xfcbe8
  03ab690  nop
  03ab694  stfs 1, 144(1)
  03ab698  fmr 1, 28
  03ab69c  fmr 2, 29
  03ab6a0  bl 0xfcbe8
  03ab6a4  nop
  03ab6a8  stfs 1, 148(1)
  03ab6ac  fmr 2, 30
  03ab6b0  fmr 1, 27
  03ab6b4  bl 0xfcbe8
  03ab6b8  nop
  03ab6bc  lfs 2, 144(1)
  03ab6c0  lfs 3, 112(1)
  03ab6c4  addic 4, 1, 128
  03ab6c8  lfs 4, 148(1)
  03ab6cc  addic 5, 1, 144
  03ab6d0  fadds 3, 2, 3
  03ab6d4  li 10, 0
  03ab6d8  lfs 2, 116(1)
  03ab6dc  ori 3, 31, 0
  03ab6e0  lfs 5, 120(1)
  03ab6e4  ori 6, 28, 0
  03ab6e8  fadds 4, 4, 2
  03ab6ec  li 7, 357
  03ab6f0  fadds 5, 1, 5
  03ab6f4  fmr 1, 31
  03ab6f8  fmr 2, 26
  03ab6fc  stfs 3, 144(1)
  03ab700  stfs 4, 148(1)
  03ab704  stfs 5, 152(1)
  03ab708  bl 0x28cce0
  03ab70c  nop
  03ab710  addic 29, 29, 1
  03ab714  cmpwi 29, 4
  03ab718  bt 0, 0x3ab674
  03ab71c  lis 3, 59
  03ab720  ori 29, 30, 0
  03ab724  addi 3, 3, -19280
  03ab728  lfs 26, 44(3)
  03ab72c  lfs 31, 48(3)
  03ab730  fmr 1, 28
  03ab734  stw 30, 160(1)
  03ab738  stw 30, 164(1)
  03ab73c  fmr 2, 29
  03ab740  stw 30, 168(1)
  03ab744  stw 30, 172(1)
  03ab748  bl 0xfcbe8
  03ab74c  nop
  03ab750  stfs 1, 160(1)
  03ab754  fmr 2, 29
  03ab758  fmr 1, 28
  03ab75c  bl 0xfcbe8
  03ab760  nop
  03ab764  stfs 1, 164(1)
  03ab768  fmr 1, 27
  03ab76c  fmr 2, 30
  03ab770  bl 0xfcbe8
  03ab774  nop
  03ab778  lfs 2, 160(1)
  03ab77c  li 3, 2
  03ab780  lfs 3, 112(1)
  03ab784  lfs 4, 164(1)
  03ab788  fadds 2, 2, 3
  03ab78c  lfs 3, 116(1)
  03ab790  lfs 5, 120(1)
  03ab794  fadds 3, 4, 3
  03ab798  fadds 1, 1, 5
  03ab79c  stfs 2, 160(1)
  03ab7a0  stfs 3, 164(1)
  03ab7a4  stfs 1, 168(1)
  03ab7a8  bl 0xfc620
  03ab7ac  nop
  03ab7b0  addic 7, 3, 358
  03ab7b4  fmr 1, 26
  03ab7b8  li 10, 0
  03ab7bc  fmr 2, 31
  03ab7c0  extsw 7, 7
  03ab7c4  addic 4, 1, 128
  03ab7c8  addic 5, 1, 160
  03ab7cc  ori 3, 31, 0
  03ab7d0  ori 6, 28, 0
  03ab7d4  bl 0x28cce0
  03ab7d8  nop
  03ab7dc  addic 29, 29, 1
  03ab7e0  cmpwi 29, 8
  03ab7e4  bt 0, 0x3ab730
  03ab7e8  li 3, 2
  03ab7ec  lhz 6, 52(31)
  03ab7f0  lis 5, 59
  03ab7f4  vspltisw 2, -1
  03ab7f8  li 4, 52
  03ab7fc  addi 5, 5, -19280
  03ab800  stb 3, 32(31)
  03ab804  lis 7, 114
  03ab808  ori 3, 6, 1
  03ab80c  stw 30, 148(31)
  03ab810  li 6, -3056
  03ab814  vslw 2, 2, 2
  03ab818  sth 3, 52(31)
  03ab81c  lvlx 3, 4, 5
  03ab820  lvlx 4, 6, 7
  03ab824  li 3, 188
  03ab828  vspltw 3, 3, 0
  03ab82c  vmaddfp 2, 4, 3, 2
  03ab830  vctsxs 2, 2, 0
  03ab834  vspltb 2, 2, 3
  03ab838  stvebx 2, 3, 31
  03ab83c  ld 0, 272(1)
  03ab840  mtlr 0
  03ab844  lfd 26, 208(1)
  03ab848  lfd 27, 216(1)
  03ab84c  lfd 28, 224(1)
  03ab850  lfd 29, 232(1)
  03ab854  lfd 30, 240(1)
  03ab858  lfd 31, 248(1)
  03ab85c  ld 28, 176(1)
  03ab860  ld 29, 184(1)
  03ab864  ld 30, 192(1)
  03ab868  ld 31, 200(1)
  03ab86c  addi 1, 1, 256
  03ab870  blr

M520_003ab874:   # 0x3ab874, 0xb4 bytes
  03ab874  stdu 1, -128(1)
  03ab878  mflr 0
  03ab87c  std 0, 144(1)
  03ab880  std 31, 120(1)
  03ab884  ori 31, 3, 0
  03ab888  std 30, 112(1)
  03ab88c  li 3, 520
  03ab890  bl 0xefa28
  03ab894  nop
  03ab898  ori 30, 3, 0
  03ab89c  cmpwi 30, 0
  03ab8a0  bt 2, 0x3ab90c
  03ab8a4  li 4, 255
  03ab8a8  li 5, 1
  03ab8ac  li 6, 0
  03ab8b0  ori 3, 30, 0
  03ab8b4  stb 4, 48(30)
  03ab8b8  sth 4, 50(30)
  03ab8bc  lhz 4, 52(30)
  03ab8c0  stb 5, 49(30)
  03ab8c4  lfs 1, 72(31)
  03ab8c8  ori 4, 4, 4096
  03ab8cc  stw 6, 64(30)
  03ab8d0  stw 6, 68(30)
  03ab8d4  ld 5, 56(31)
  03ab8d8  stfs 1, 72(30)
  03ab8dc  std 5, 56(30)
  03ab8e0  lfs 1, 16(31)
  03ab8e4  sth 4, 52(30)
  03ab8e8  lfs 2, 20(31)
  03ab8ec  stfs 1, 16(30)
  03ab8f0  lfs 1, 24(31)
  03ab8f4  stfs 2, 20(30)
  03ab8f8  lfs 2, 28(31)
  03ab8fc  stfs 1, 24(30)
  03ab900  stfs 2, 28(30)
  03ab904  bl 0xf31a8
  03ab908  nop
  03ab90c  ori 3, 30, 0
  03ab910  ld 0, 144(1)
  03ab914  mtlr 0
  03ab918  ld 30, 112(1)
  03ab91c  ld 31, 120(1)
  03ab920  addi 1, 1, 128
  03ab924  blr

UpdateMoby_520:   # 0x3ab940, 0xe8 bytes
  03ab940  stdu 1, -128(1)
  03ab944  mflr 0
  03ab948  std 0, 144(1)
  03ab94c  std 31, 120(1)
  03ab950  ori 31, 3, 0
  03ab954  lis 4, 1
  03ab958  li 5, 0
  03ab95c  bl 0x10675c
  03ab960  nop
  03ab964  li 5, 255
  03ab968  ori 4, 3, 0
  03ab96c  lbz 3, 32(31)
  03ab970  cmpwi 3, 0
  03ab974  stb 5, 164(31)
  03ab978  bt 1, 0x3ab988
  03ab97c  cmpwi 3, -1
  03ab980  bf 1, 0x3aba14
  03ab984  b 0x3ab99c
  03ab988  cmpwi 3, 1
  03ab98c  bf 1, 0x3ab9a8
  03ab990  cmpwi 3, 2
  03ab994  bf 1, 0x3ab9bc
  03ab998  b 0x3aba14
  03ab99c  li 3, 1
  03ab9a0  stb 3, 32(31)
  03ab9a4  b 0x3aba14
  03ab9a8  cmpwi 4, 0
  03ab9ac  bt 2, 0x3aba14
  03ab9b0  ori 3, 31, 0
  03ab9b4  bl 0x3ab4e8
  03ab9b8  b 0x3aba14
  03ab9bc  lis 3, 59
  03ab9c0  lis 10, 16512
  03ab9c4  addi 4, 3, -18136
  03ab9c8  addic 3, 31, 16
  03ab9cc  li 7, 1
  03ab9d0  ori 10, 10, 32896
  03ab9d4  lfs 1, 0(4)
  03ab9d8  lfs 2, 4(4)
  03ab9dc  lfs 3, 8(4)
  03ab9e0  lfs 4, 12(4)
  03ab9e4  lfs 5, 16(4)
  03ab9e8  bl 0x1246b8
  03ab9ec  nop
  03ab9f0  addic 3, 31, 188
  03ab9f4  bl 0x500060
  03ab9f8  nop
  03ab9fc  cmpwi 3, 0
  03aba00  bt 2, 0x3aba14
  03aba04  ori 3, 31, 0
  03aba08  bl 0xefb38
  03aba0c  nop
  03aba10  b 0x3aba14
  03aba14  ld 0, 144(1)
  03aba18  mtlr 0
  03aba1c  ld 31, 120(1)
  03aba20  addi 1, 1, 128
  03aba24  blr
