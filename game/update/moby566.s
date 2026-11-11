# game/update/moby566.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003bb4a8:   # 0x3bb4a8, 0x4b8 bytes
  03bb4a8  stdu 1, -272(1)
  03bb4ac  mflr 0
  03bb4b0  std 0, 288(1)
  03bb4b4  stfd 30, 256(1)
  03bb4b8  stfd 31, 264(1)
  03bb4bc  std 31, 248(1)
  03bb4c0  ori 31, 3, 0
  03bb4c4  li 3, 564
  03bb4c8  std 27, 216(1)
  03bb4cc  fmr 30, 2
  03bb4d0  ori 27, 9, 0
  03bb4d4  std 29, 232(1)
  03bb4d8  std 28, 224(1)
  03bb4dc  fmr 31, 1
  03bb4e0  ori 28, 8, 0
  03bb4e4  std 30, 240(1)
  03bb4e8  ori 29, 5, 0
  03bb4ec  std 26, 208(1)
  03bb4f0  std 25, 200(1)
  03bb4f4  ori 30, 4, 0
  03bb4f8  bl 0xefa28
  03bb4fc  nop
  03bb500  ori 26, 3, 0
  03bb504  cmpwi 26, 0
  03bb508  bt 2, 0x3bb928
  03bb50c  li 5, 255
  03bb510  li 6, 1
  03bb514  li 25, 0
  03bb518  ori 3, 26, 0
  03bb51c  stb 5, 48(26)
  03bb520  li 4, 192
  03bb524  sth 5, 50(26)
  03bb528  stb 6, 49(26)
  03bb52c  li 5, 192
  03bb530  stb 25, 32(26)
  03bb534  li 6, 192
  03bb538  bl 0xf1ec8
  03bb53c  nop
  03bb540  lis 3, 132
  03bb544  lfs 1, 44(26)
  03bb548  srawi 4, 28, 1
  03bb54c  lis 5, 60
  03bb550  lfs 2, 23504(3)
  03bb554  lwz 3, 120(26)
  03bb558  fmuls 1, 1, 2
  03bb55c  addi 5, 5, -19300
  03bb560  stfs 1, 44(26)
  03bb564  lfs 1, 0(31)
  03bb568  stfs 1, 16(26)
  03bb56c  lfs 1, 4(31)
  03bb570  stfs 1, 20(26)
  03bb574  lfs 1, 8(31)
  03bb578  stfs 1, 24(26)
  03bb57c  lfs 1, 12(31)
  03bb580  stfs 1, 28(26)
  03bb584  lfs 1, 0(30)
  03bb588  stfs 1, 0(3)
  03bb58c  lfs 1, 4(30)
  03bb590  stfs 1, 4(3)
  03bb594  lfs 1, 8(30)
  03bb598  stfs 1, 8(3)
  03bb59c  lfs 1, 12(30)
  03bb5a0  stfs 1, 12(3)
  03bb5a4  lfs 1, 0(29)
  03bb5a8  stfs 1, 16(3)
  03bb5ac  lfs 1, 4(29)
  03bb5b0  stfs 1, 20(3)
  03bb5b4  lfs 1, 8(29)
  03bb5b8  stfs 1, 24(3)
  03bb5bc  lfs 1, 12(29)
  03bb5c0  stw 25, 44(3)
  03bb5c4  stfs 1, 28(3)
  03bb5c8  stw 28, 52(3)
  03bb5cc  stw 4, 48(3)
  03bb5d0  stfs 31, 36(3)
  03bb5d4  stfs 30, 40(3)
  03bb5d8  stw 27, 56(3)
  03bb5dc  lwz 3, 0(30)
  03bb5e0  lwz 4, 4(30)
  03bb5e4  lfs 1, 0(30)
  03bb5e8  lfs 2, 4(30)
  03bb5ec  fabs 4, 1
  03bb5f0  fabs 6, 2
  03bb5f4  rlwinm 4, 4, 3, 29, 29
  03bb5f8  lis 31, 115
  03bb5fc  addic 31, 31, 22784
  03bb600  fsubs 1, 4, 6
  03bb604  stfs 1, 120(1)
  03bb608  lfs 3, 0(5)
  03bb60c  lfs 2, 4(5)
  03bb610  lwz 5, 120(1)
  03bb614  lfs 1, 120(1)
  03bb618  rlwimi 4, 5, 2, 30, 30
  03bb61c  fsub 5, 1, 3
  03bb620  fsub 7, 1, 3
  03bb624  rlwimi 4, 3, 4, 28, 28
  03bb628  ori 3, 31, 0
  03bb62c  rlwimi 3, 4, 2, 26, 28
  03bb630  slwi 4, 4, 2
  03bb634  clrldi 3, 3, 32
  03bb638  fsel 5, 5, 4, 6
  03bb63c  lfsx 31, 31, 4
  03bb640  fsel 4, 7, 6, 4
  03bb644  lfs 1, 4(3)
  03bb648  fcmpu 0, 5, 3
  03bb64c  bt 1, 0x3bb658
  03bb650  fmr 31, 3
  03bb654  b 0x3bb770
  03bb658  fsubs 6, 4, 5
  03bb65c  fadds 4, 4, 5
  03bb660  addic 3, 1, 16
  03bb664  li 7, 2
  03bb668  addic 5, 3, 156
  03bb66c  addic 4, 3, 140
  03bb670  mtctr 7
  03bb674  fdivs 4, 6, 4
  03bb678  fmuls 5, 4, 4
  03bb67c  stfs 4, 168(1)
  03bb680  stfs 4, 160(1)
  03bb684  stfs 4, 164(1)
  03bb688  stfs 4, 156(1)
  03bb68c  lfs 7, 168(1)
  03bb690  lfs 8, 160(1)
  03bb694  lfs 9, 164(1)
  03bb698  fmuls 6, 5, 5
  03bb69c  fmuls 8, 8, 5
  03bb6a0  fmuls 7, 7, 6
  03bb6a4  fmuls 4, 6, 6
  03bb6a8  fmuls 6, 9, 6
  03bb6ac  stfs 8, 160(1)
  03bb6b0  fmuls 5, 7, 5
  03bb6b4  stfs 6, 164(1)
  03bb6b8  stfs 5, 168(1)
  03bb6bc  lfs 5, 140(3)
  03bb6c0  fmuls 5, 5, 4
  03bb6c4  stfs 5, 156(3)
  03bb6c8  lfs 5, 4(4)
  03bb6cc  addic 4, 4, 8
  03bb6d0  fmuls 5, 5, 4
  03bb6d4  addic 3, 3, 8
  03bb6d8  stfs 5, 4(5)
  03bb6dc  addic 5, 5, 8
  03bb6e0  bdnz 0x3bb6bc
  03bb6e4  li 5, 4
  03bb6e8  ori 3, 1, 0
  03bb6ec  mtctr 5
  03bb6f0  lis 4, 115
  03bb6f4  addic 5, 3, 156
  03bb6f8  addic 4, 4, 22752
  03bb6fc  ori 6, 5, 0
  03bb700  lfs 4, 156(3)
  03bb704  lfs 5, 0(4)
  03bb708  fmuls 4, 4, 5
  03bb70c  lfs 5, 4(4)
  03bb710  addic 4, 4, 8
  03bb714  stfs 4, 156(3)
  03bb718  lfs 4, 4(5)
  03bb71c  addic 3, 3, 8
  03bb720  fmuls 4, 4, 5
  03bb724  stfs 4, 4(5)
  03bb728  addic 5, 5, 8
  03bb72c  bdnz 0x3bb700
  03bb730  ori 3, 1, 0
  03bb734  fmr 4, 3
  03bb738  mtctr 7
  03bb73c  lfs 5, 156(3)
  03bb740  fadds 4, 4, 5
  03bb744  lfs 5, 4(6)
  03bb748  addic 3, 3, 16
  03bb74c  lfs 6, 8(6)
  03bb750  lfs 7, 12(6)
  03bb754  addic 6, 6, 16
  03bb758  fadds 4, 4, 5
  03bb75c  fadds 4, 4, 6
  03bb760  fadds 4, 4, 7
  03bb764  bdnz 0x3bb73c
  03bb768  fadds 4, 4, 2
  03bb76c  fmadds 31, 4, 31, 1
  03bb770  stfs 31, 72(26)
  03bb774  lfs 1, 4(30)
  03bb778  lfs 4, 0(30)
  03bb77c  fmuls 1, 1, 1
  03bb780  lwz 3, 8(30)
  03bb784  rlwinm 3, 3, 3, 29, 29
  03bb788  fmadds 1, 4, 4, 1
  03bb78c  lfs 4, 8(30)
  03bb790  fabs 4, 4
  03bb794  fsqrts 1, 1
  03bb798  fabs 6, 1
  03bb79c  stfs 1, 112(1)
  03bb7a0  fsubs 1, 6, 4
  03bb7a4  stfs 1, 116(1)
  03bb7a8  lwz 4, 112(1)
  03bb7ac  lfs 1, 112(1)
  03bb7b0  lwz 5, 116(1)
  03bb7b4  fabs 5, 1
  03bb7b8  lfs 1, 116(1)
  03bb7bc  rlwimi 3, 5, 2, 30, 30
  03bb7c0  fsub 7, 1, 3
  03bb7c4  fsub 1, 1, 3
  03bb7c8  rlwimi 3, 4, 4, 28, 28
  03bb7cc  ori 4, 31, 0
  03bb7d0  rlwimi 4, 3, 2, 26, 28
  03bb7d4  slwi 3, 3, 2
  03bb7d8  clrldi 4, 4, 32
  03bb7dc  fsel 5, 7, 5, 4
  03bb7e0  lfsx 31, 31, 3
  03bb7e4  fsel 4, 1, 4, 6
  03bb7e8  lfs 1, 4(4)
  03bb7ec  fcmpu 0, 5, 3
  03bb7f0  bt 1, 0x3bb7f8
  03bb7f4  b 0x3bb90c
  03bb7f8  fsubs 6, 4, 5
  03bb7fc  fadds 4, 4, 5
  03bb800  addic 3, 1, 16
  03bb804  li 7, 2
  03bb808  addic 5, 3, 124
  03bb80c  addic 4, 3, 108
  03bb810  mtctr 7
  03bb814  fdivs 4, 6, 4
  03bb818  fmuls 5, 4, 4
  03bb81c  stfs 4, 136(1)
  03bb820  stfs 4, 128(1)
  03bb824  stfs 4, 132(1)
  03bb828  stfs 4, 124(1)
  03bb82c  lfs 7, 136(1)
  03bb830  lfs 8, 128(1)
  03bb834  lfs 9, 132(1)
  03bb838  fmuls 6, 5, 5
  03bb83c  fmuls 8, 8, 5
  03bb840  fmuls 7, 7, 6
  03bb844  fmuls 4, 6, 6
  03bb848  fmuls 6, 9, 6
  03bb84c  stfs 8, 128(1)
  03bb850  fmuls 5, 7, 5
  03bb854  stfs 6, 132(1)
  03bb858  stfs 5, 136(1)
  03bb85c  lfs 5, 108(3)
  03bb860  fmuls 5, 5, 4
  03bb864  stfs 5, 124(3)
  03bb868  lfs 5, 4(4)
  03bb86c  addic 4, 4, 8
  03bb870  fmuls 5, 5, 4
  03bb874  addic 3, 3, 8
  03bb878  stfs 5, 4(5)
  03bb87c  addic 5, 5, 8
  03bb880  bdnz 0x3bb85c
  03bb884  li 5, 4
  03bb888  ori 3, 1, 0
  03bb88c  mtctr 5
  03bb890  lis 4, 115
  03bb894  addic 5, 3, 124
  03bb898  addic 4, 4, 22752
  03bb89c  ori 6, 5, 0
  03bb8a0  lfs 4, 124(3)
  03bb8a4  lfs 5, 0(4)
  03bb8a8  fmuls 4, 4, 5
  03bb8ac  lfs 5, 4(4)
  03bb8b0  addic 4, 4, 8
  03bb8b4  stfs 4, 124(3)
  03bb8b8  lfs 4, 4(5)
  03bb8bc  addic 3, 3, 8
  03bb8c0  fmuls 4, 4, 5
  03bb8c4  stfs 4, 4(5)
  03bb8c8  addic 5, 5, 8
  03bb8cc  bdnz 0x3bb8a0
  03bb8d0  ori 3, 1, 0
  03bb8d4  mtctr 7
  03bb8d8  lfs 4, 124(3)
  03bb8dc  fadds 3, 3, 4
  03bb8e0  addic 3, 3, 16
  03bb8e4  lfs 4, 4(6)
  03bb8e8  lfs 5, 8(6)
  03bb8ec  lfs 6, 12(6)
  03bb8f0  addic 6, 6, 16
  03bb8f4  fadds 3, 3, 4
  03bb8f8  fadds 3, 3, 5
  03bb8fc  fadds 3, 3, 6
  03bb900  bdnz 0x3bb8d8
  03bb904  fadds 3, 3, 2
  03bb908  fmadds 3, 3, 31, 1
  03bb90c  fneg 1, 3
  03bb910  li 3, 0
  03bb914  li 4, 0
  03bb918  ori 5, 26, 0
  03bb91c  stfs 1, 68(26)
  03bb920  bl 0x15d12c
  03bb924  nop
  03bb928  ori 3, 26, 0
  03bb92c  ld 0, 288(1)
  03bb930  mtlr 0
  03bb934  lfd 30, 256(1)
  03bb938  lfd 31, 264(1)
  03bb93c  ld 25, 200(1)
  03bb940  ld 26, 208(1)
  03bb944  ld 27, 216(1)
  03bb948  ld 28, 224(1)
  03bb94c  ld 29, 232(1)
  03bb950  ld 30, 240(1)
  03bb954  ld 31, 248(1)
  03bb958  addi 1, 1, 272
  03bb95c  blr

M566_003bb988:   # 0x3bb988, 0x250 bytes
  03bb988  stdu 1, -288(1)
  03bb98c  mflr 0
  03bb990  std 0, 304(1)
  03bb994  std 30, 272(1)
  03bb998  lwz 30, 120(3)
  03bb99c  lis 4, 60
  03bb9a0  std 31, 280(1)
  03bb9a4  addi 31, 4, -18080
  03bb9a8  lwz 3, 44(30)
  03bb9ac  clrlwi 3, 3, 28
  03bb9b0  extsw 3, 3
  03bb9b4  std 3, 256(1)
  03bb9b8  lfs 1, 0(31)
  03bb9bc  lfs 2, 4(31)
  03bb9c0  lfd 3, 256(1)
  03bb9c4  fcfid 3, 3
  03bb9c8  frsp 3, 3
  03bb9cc  fmuls 1, 3, 1
  03bb9d0  fmuls 1, 1, 2
  03bb9d4  bl 0x502648
  03bb9d8  nop
  03bb9dc  lfs 2, 8(31)
  03bb9e0  lfs 3, 12(31)
  03bb9e4  fsubs 2, 2, 1
  03bb9e8  fsubs 3, 3, 1
  03bb9ec  lis 3, 132
  03bb9f0  lis 4, 132
  03bb9f4  fsub 4, 1, 2
  03bb9f8  fsel 1, 4, 2, 1
  03bb9fc  lfs 2, 16(31)
  03bba00  lfs 4, 20(31)
  03bba04  fsub 5, 3, 1
  03bba08  fsel 1, 5, 3, 1
  03bba0c  lfs 3, 24(31)
  03bba10  lfs 5, 28(31)
  03bba14  lfs 7, 32(31)
  03bba18  lwz 3, 23624(3)
  03bba1c  lwz 4, 23628(4)
  03bba20  extsw 3, 3
  03bba24  extsw 4, 4
  03bba28  fmuls 6, 1, 1
  03bba2c  fmuls 8, 6, 1
  03bba30  fmuls 9, 6, 8
  03bba34  fmadds 1, 8, 2, 1
  03bba38  lfs 2, 36(31)
  03bba3c  fmuls 8, 6, 9
  03bba40  fmadds 1, 9, 4, 1
  03bba44  fmuls 4, 6, 8
  03bba48  fmadds 1, 8, 3, 1
  03bba4c  fmadds 1, 4, 5, 1
  03bba50  fadds 1, 1, 7
  03bba54  fmuls 1, 1, 2
  03bba58  bl 0x5027bc
  03bba5c  nop
  03bba60  ori 31, 3, 0
  03bba64  li 3, 13
  03bba68  bl 0x685c4
  03bba6c  nop
  03bba70  std 3, 232(1)
  03bba74  lis 9, 0
  03bba78  li 3, 0
  03bba7c  li 4, 0
  03bba80  li 5, 1
  03bba84  li 6, 1
  03bba88  li 7, 1
  03bba8c  li 8, 0
  03bba90  ori 9, 9, 65424
  03bba94  bl 0x502fd4
  03bba98  nop
  03bba9c  std 3, 240(1)
  03bbaa0  li 3, 0
  03bbaa4  li 4, 0
  03bbaa8  li 5, 0
  03bbaac  li 6, 0
  03bbab0  li 7, 0
  03bbab4  li 8, 0
  03bbab8  bl 0x502f08
  03bbabc  nop
  03bbac0  std 3, 224(1)
  03bbac4  lis 4, 269
  03bbac8  lis 3, 269
  03bbacc  lis 5, 132
  03bbad0  lis 6, 132
  03bbad4  li 7, 128
  03bbad8  lwz 8, -24752(3)
  03bbadc  lwz 3, -24756(4)
  03bbae0  lwz 4, 23616(5)
  03bbae4  lwz 6, 23620(6)
  03bbae8  ori 5, 8, 0
  03bbaec  bl 0x502ea8
  03bbaf0  nop
  03bbaf4  std 3, 248(1)
  03bbaf8  lis 3, 132
  03bbafc  lis 6, 132
  03bbb00  lis 5, 132
  03bbb04  li 10, 4
  03bbb08  ori 9, 1, 0
  03bbb0c  addic 4, 1, 112
  03bbb10  ori 8, 1, 0
  03bbb14  addic 3, 3, 23520
  03bbb18  ori 7, 1, 0
  03bbb1c  addic 6, 6, 23584
  03bbb20  addic 5, 5, 23588
  03bbb24  mtctr 10
  03bbb28  lfs 1, 0(3)
  03bbb2c  lfs 2, 16(30)
  03bbb30  fadds 1, 1, 2
  03bbb34  lis 10, 16256
  03bbb38  stfs 1, 0(4)
  03bbb3c  lfs 1, 4(3)
  03bbb40  lfs 2, 20(30)
  03bbb44  fadds 1, 1, 2
  03bbb48  stfs 1, 4(4)
  03bbb4c  lfs 1, 8(3)
  03bbb50  lfs 2, 24(30)
  03bbb54  fadds 1, 1, 2
  03bbb58  stfs 1, 8(4)
  03bbb5c  lfs 1, 12(3)
  03bbb60  addic 3, 3, 16
  03bbb64  stfs 1, 12(4)
  03bbb68  lfs 1, 0(6)
  03bbb6c  addic 4, 4, 16
  03bbb70  stw 10, 124(9)
  03bbb74  addic 6, 6, 8
  03bbb78  stw 31, 176(8)
  03bbb7c  addic 9, 9, 16
  03bbb80  lfs 2, 0(5)
  03bbb84  addic 8, 8, 4
  03bbb88  stfs 1, 192(7)
  03bbb8c  addic 5, 5, 8
  03bbb90  stfs 2, 196(7)
  03bbb94  addic 7, 7, 8
  03bbb98  bdnz 0x3bbb28
  03bbb9c  lis 4, 161
  03bbba0  addic 3, 1, 112
  03bbba4  addic 6, 4, 24396
  03bbba8  li 4, 0
  03bbbac  li 5, 0
  03bbbb0  li 7, 9
  03bbbb4  lwz 6, 28(6)
  03bbbb8  bl 0x72280
  03bbbbc  nop
  03bbbc0  ld 0, 304(1)
  03bbbc4  mtlr 0
  03bbbc8  ld 30, 272(1)
  03bbbcc  ld 31, 280(1)
  03bbbd0  addi 1, 1, 288
  03bbbd4  blr

M566_003bbbd8:   # 0x3bbbd8, 0x14 bytes
  03bbbd8  lis 3, 132
  03bbbdc  lis 4, 1
  03bbbe0  addic 3, 3, 23636
  03bbbe4  stw 4, 72(3)
  03bbbe8  blr

UpdateMoby_566:   # 0x3bbbf0, 0x4 bytes
  03bbbf0  blr
