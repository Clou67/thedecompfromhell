# game/update/moby211.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M211_002ed724:   # 0x2ed724, 0x14 bytes
  02ed724  lis 3, 128
  02ed728  lis 4, 1
  02ed72c  addic 3, 3, -5228
  02ed730  stw 4, 72(3)
  02ed734  blr

M211_002ed768:   # 0x2ed768, 0x368 bytes
  02ed768  stdu 1, -272(1)
  02ed76c  mflr 0
  02ed770  std 0, 288(1)
  02ed774  stfd 28, 240(1)
  02ed778  stfd 29, 248(1)
  02ed77c  stfd 30, 256(1)
  02ed780  stfd 31, 264(1)
  02ed784  addi 0, 1, 160
  02ed788  stvx 31, 0, 0
  02ed78c  std 31, 232(1)
  02ed790  std 30, 224(1)
  02ed794  ori 31, 3, 0
  02ed798  std 29, 216(1)
  02ed79c  lis 30, 47
  02ed7a0  addic 29, 1, 112
  02ed7a4  li 4, 1
  02ed7a8  std 28, 208(1)
  02ed7ac  addi 30, 30, -10440
  02ed7b0  lwz 28, 120(31)
  02ed7b4  std 27, 200(1)
  02ed7b8  std 26, 192(1)
  02ed7bc  std 25, 184(1)
  02ed7c0  ori 5, 29, 0
  02ed7c4  bl 0xf1114
  02ed7c8  nop
  02ed7cc  lis 3, 149
  02ed7d0  lfs 1, 116(1)
  02ed7d4  lfs 3, 112(1)
  02ed7d8  addic 3, 3, 5056
  02ed7dc  lfs 2, 324(3)
  02ed7e0  lfs 4, 320(3)
  02ed7e4  fsubs 1, 1, 2
  02ed7e8  lfs 2, 120(1)
  02ed7ec  lfs 5, 328(3)
  02ed7f0  fsubs 4, 3, 4
  02ed7f4  fsubs 5, 2, 5
  02ed7f8  lfs 6, 4(30)
  02ed7fc  fmuls 2, 1, 1
  02ed800  fmadds 2, 4, 4, 2
  02ed804  fmadds 2, 5, 5, 2
  02ed808  fsqrts 7, 2
  02ed80c  lfs 2, 0(30)
  02ed810  fdivs 6, 6, 7
  02ed814  fsub 8, 2, 7
  02ed818  fsub 9, 7, 2
  02ed81c  fsub 10, 2, 7
  02ed820  fsub 11, 7, 2
  02ed824  fsub 12, 2, 7
  02ed828  fsub 7, 7, 2
  02ed82c  fmuls 4, 4, 6
  02ed830  fmuls 1, 1, 6
  02ed834  fmuls 5, 5, 6
  02ed838  fsel 6, 8, 2, 4
  02ed83c  fsel 8, 10, 2, 1
  02ed840  fsel 10, 12, 2, 5
  02ed844  fsel 4, 9, 6, 4
  02ed848  fsel 1, 11, 8, 1
  02ed84c  fsel 5, 7, 10, 5
  02ed850  fadds 3, 3, 4
  02ed854  stfs 3, 224(28)
  02ed858  lfs 3, 116(1)
  02ed85c  fadds 1, 3, 1
  02ed860  stfs 1, 228(28)
  02ed864  lfs 1, 120(1)
  02ed868  fadds 1, 1, 5
  02ed86c  stfs 1, 232(28)
  02ed870  lfs 1, 124(1)
  02ed874  stfs 1, 236(28)
  02ed878  lbz 3, 32(31)
  02ed87c  lfs 1, 120(1)
  02ed880  cmpwi 3, 3
  02ed884  bt 2, 0x2ed898
  02ed888  cmpwi 3, 4
  02ed88c  bt 2, 0x2ed898
  02ed890  cmpwi 3, 5
  02ed894  bf 2, 0x2ed920
  02ed898  lfs 31, 8(30)
  02ed89c  lwz 3, 240(28)
  02ed8a0  fadds 1, 1, 31
  02ed8a4  cmpwi 3, -1
  02ed8a8  stfs 1, 120(1)
  02ed8ac  bf 2, 0x2ed8d4
  02ed8b0  lis 4, 128
  02ed8b4  ori 3, 29, 0
  02ed8b8  lfs 3, 12(30)
  02ed8bc  fmr 5, 31
  02ed8c0  fmr 4, 3
  02ed8c4  lfs 1, -5068(4)
  02ed8c8  bl 0xda4ac
  02ed8cc  nop
  02ed8d0  stw 3, 240(28)
  02ed8d4  cmpwi 3, 0
  02ed8d8  bt 0, 0x2ed914
  02ed8dc  lis 4, 162
  02ed8e0  lfs 1, 112(1)
  02ed8e4  sldi 3, 3, 5
  02ed8e8  addic 4, 4, -8448
  02ed8ec  addc 3, 4, 3
  02ed8f0  lis 4, 128
  02ed8f4  clrldi 3, 3, 32
  02ed8f8  stfs 1, 16(3)
  02ed8fc  lfs 1, 116(1)
  02ed900  stfs 1, 20(3)
  02ed904  lfs 1, 120(1)
  02ed908  stfs 1, 24(3)
  02ed90c  lfs 1, -5068(4)
  02ed910  stfs 1, 28(3)
  02ed914  lfs 1, 120(1)
  02ed918  fsubs 1, 1, 31
  02ed91c  stfs 1, 120(1)
  02ed920  addic 27, 1, 128
  02ed924  lfs 1, 16(30)
  02ed928  ori 3, 27, 0
  02ed92c  lfs 2, 20(30)
  02ed930  bl 0xfe788
  02ed934  nop
  02ed938  ori 3, 29, 0
  02ed93c  ori 4, 27, 0
  02ed940  li 5, 127
  02ed944  ori 6, 31, 0
  02ed948  bl 0x133580
  02ed94c  nop
  02ed950  ori 27, 3, 0
  02ed954  cmpwi 27, 0
  02ed958  bt 2, 0x2ed970
  02ed95c  lfs 1, 24(30)
  02ed960  lfs 2, 28(30)
  02ed964  bl 0xfcbe8
  02ed968  nop
  02ed96c  stfs 1, 12(27)
  02ed970  li 3, 40
  02ed974  lfs 28, 32(30)
  02ed978  lis 27, 161
  02ed97c  lfs 29, 36(30)
  02ed980  li 25, 0
  02ed984  addic 27, 27, 23856
  02ed988  <unknown>
  02ed98c  lfs 30, 40(30)
  02ed990  vspltw 31, 31, 0
  02ed994  lfs 31, 8(30)
  02ed998  ori 3, 29, 0
  02ed99c  ori 4, 27, 0
  02ed9a0  li 5, 127
  02ed9a4  ori 6, 31, 0
  02ed9a8  bl 0x133580
  02ed9ac  nop
  02ed9b0  ori 26, 3, 0
  02ed9b4  cmpwi 26, 0
  02ed9b8  bt 2, 0x2eda58
  02ed9bc  cmpwi 25, 2
  02ed9c0  bf 2, 0x2ed9e0
  02ed9c4  li 3, 8
  02ed9c8  bl 0xfc620
  02ed9cc  nop
  02ed9d0  cmpwi 3, 0
  02ed9d4  bf 2, 0x2ed9e0
  02ed9d8  lfs 1, 44(30)
  02ed9dc  b 0x2ed9f0
  02ed9e0  fmr 1, 28
  02ed9e4  fmr 2, 29
  02ed9e8  bl 0xfcbe8
  02ed9ec  nop
  02ed9f0  vspltisw 2, -1
  02ed9f4  lis 3, 114
  02ed9f8  stfs 1, 12(26)
  02ed9fc  li 4, -3056
  02eda00  vslw 2, 2, 2
  02eda04  <unknown>
  02eda08  lfs 1, -3056(3)
  02eda0c  vmaddfp 2, 3, 31, 2
  02eda10  li 4, 10
  02eda14  fmuls 1, 1, 30
  02eda18  fctiwz 1, 1
  02eda1c  vctsxs 2, 2, 0
  02eda20  stfd 1, 144(1)
  02eda24  vsplth 2, 2, 1
  02eda28  lwz 3, 148(1)
  02eda2c  extsh 3, 3
  02eda30  stvehx 2, 4, 26
  02eda34  bl 0x502730
  02eda38  nop
  02eda3c  fdivs 1, 31, 1
  02eda40  lis 3, 127
  02eda44  li 4, 3
  02eda48  ori 3, 3, 32639
  02eda4c  sth 4, 54(26)
  02eda50  stw 3, 56(26)
  02eda54  stfs 1, 48(26)
  02eda58  addic 25, 25, 1
  02eda5c  cmpwi 25, 3
  02eda60  bt 0, 0x2ed998
  02eda64  ori 3, 31, 0
  02eda68  addic 5, 28, 512
  02eda6c  li 4, 6
  02eda70  bl 0xf1114
  02eda74  nop
  02eda78  lis 3, 113
  02eda7c  ori 4, 31, 0
  02eda80  addic 3, 3, -18504
  02eda84  bl 0x6d7e0
  02eda88  nop
  02eda8c  li 0, 160
  02eda90  lvx 31, 1, 0
  02eda94  ld 0, 288(1)
  02eda98  mtlr 0
  02eda9c  lfd 28, 240(1)
  02edaa0  lfd 29, 248(1)
  02edaa4  lfd 30, 256(1)
  02edaa8  lfd 31, 264(1)
  02edaac  ld 25, 184(1)
  02edab0  ld 26, 192(1)
  02edab4  ld 27, 200(1)
  02edab8  ld 28, 208(1)
  02edabc  ld 29, 216(1)
  02edac0  ld 30, 224(1)
  02edac4  ld 31, 232(1)
  02edac8  addi 1, 1, 272
  02edacc  blr

M211_002edb38:   # 0x2edb38, 0x14a0 bytes
  02edb38  stdu 1, -1120(1)
  02edb3c  mflr 0
  02edb40  std 0, 1136(1)
  02edb44  stfd 20, 1024(1)
  02edb48  stfd 21, 1032(1)
  02edb4c  stfd 22, 1040(1)
  02edb50  stfd 23, 1048(1)
  02edb54  stfd 24, 1056(1)
  02edb58  stfd 25, 1064(1)
  02edb5c  stfd 26, 1072(1)
  02edb60  stfd 27, 1080(1)
  02edb64  stfd 28, 1088(1)
  02edb68  stfd 29, 1096(1)
  02edb6c  stfd 30, 1104(1)
  02edb70  stfd 31, 1112(1)
  02edb74  std 31, 1016(1)
  02edb78  ori 31, 3, 0
  02edb7c  std 30, 1008(1)
  02edb80  lis 3, 162
  02edb84  lwz 30, 120(31)
  02edb88  lwz 4, -22436(3)
  02edb8c  lwz 3, 96(30)
  02edb90  lhz 5, 142(30)
  02edb94  slwi 6, 3, 5
  02edb98  lwz 3, 100(30)
  02edb9c  addc 6, 4, 6
  02edba0  std 29, 1000(1)
  02edba4  extsh 4, 5
  02edba8  clrldi 29, 6, 32
  02edbac  cmpw 3, 4
  02edbb0  cmpw 1, 4, 3
  02edbb4  std 28, 992(1)
  02edbb8  std 27, 984(1)
  02edbbc  std 26, 976(1)
  02edbc0  std 25, 968(1)
  02edbc4  std 24, 960(1)
  02edbc8  lwz 29, 16(29)
  02edbcc  bt 0, 0x2edc44
  02edbd0  lis 5, 47
  02edbd4  addi 5, 5, -9520
  02edbd8  lfs 1, 0(5)
  02edbdc  bf 4, 0x2edc08
  02edbe0  sldi 5, 4, 4
  02edbe4  subc 4, 3, 4
  02edbe8  addc 5, 29, 5
  02edbec  clrldi 3, 5, 32
  02edbf0  addic 4, 4, -1
  02edbf4  lfs 2, 28(3)
  02edbf8  addic 3, 3, 16
  02edbfc  cmpwi 4, 0
  02edc00  fadds 1, 1, 2
  02edc04  bt 1, 0x2edbf0
  02edc08  lfs 2, 104(30)
  02edc0c  fadds 1, 1, 2
  02edc10  lfs 2, 120(30)
  02edc14  lis 3, 47
  02edc18  lis 4, 128
  02edc1c  addi 3, 3, -9520
  02edc20  fdivs 1, 1, 2
  02edc24  lfs 2, 4(3)
  02edc28  lfs 3, 8(3)
  02edc2c  lfs 4, -5108(4)
  02edc30  fsubs 3, 3, 4
  02edc34  fsub 5, 2, 1
  02edc38  fsel 1, 5, 1, 2
  02edc3c  fmadds 1, 3, 1, 4
  02edc40  stfs 1, 116(30)
  02edc44  lis 3, 47
  02edc48  li 4, 0
  02edc4c  addi 26, 3, -9520
  02edc50  lis 27, 151
  02edc54  addic 28, 1, 128
  02edc58  stw 4, 100(30)
  02edc5c  addic 27, 27, -25376
  02edc60  addic 25, 30, 100
  02edc64  lfs 23, 0(26)
  02edc68  stw 4, 104(30)
  02edc6c  addic 24, 30, 104
  02edc70  lfs 1, 12(26)
  02edc74  addic 4, 27, 128
  02edc78  lfs 2, 16(26)
  02edc7c  ori 3, 29, 0
  02edc80  ori 5, 28, 0
  02edc84  fmr 3, 23
  02edc88  ori 6, 25, 0
  02edc8c  ori 7, 24, 0
  02edc90  li 9, 0
  02edc94  bl 0x10d7a0
  02edc98  nop
  02edc9c  lfs 1, 116(30)
  02edca0  ori 3, 29, 0
  02edca4  ori 4, 28, 0
  02edca8  ori 5, 25, 0
  02edcac  fneg 1, 1
  02edcb0  ori 6, 24, 0
  02edcb4  li 8, 0
  02edcb8  bl 0x10ce18
  02edcbc  nop
  02edcc0  lfs 31, 20(26)
  02edcc4  addic 3, 31, 16
  02edcc8  lfs 30, 24(26)
  02edccc  addic 5, 30, 144
  02edcd0  lfs 1, 128(1)
  02edcd4  fmr 4, 23
  02edcd8  fmr 2, 31
  02edcdc  fmr 3, 30
  02edce0  bl 0x109b40
  02edce4  nop
  02edce8  lfs 1, 132(1)
  02edcec  addic 3, 31, 20
  02edcf0  fmr 2, 31
  02edcf4  addic 5, 30, 148
  02edcf8  fmr 3, 30
  02edcfc  fmr 4, 23
  02edd00  bl 0x109b40
  02edd04  nop
  02edd08  addic 3, 31, 24
  02edd0c  lfs 1, 136(1)
  02edd10  addic 5, 30, 152
  02edd14  fmr 2, 31
  02edd18  fmr 3, 30
  02edd1c  fmr 4, 23
  02edd20  bl 0x109b40
  02edd24  nop
  02edd28  lwz 3, 100(30)
  02edd2c  slwi 3, 3, 4
  02edd30  addc 3, 29, 3
  02edd34  clrldi 3, 3, 32
  02edd38  lis 28, 115
  02edd3c  lfs 1, 96(3)
  02edd40  lfs 2, 16(3)
  02edd44  lfs 3, 100(3)
  02edd48  lfs 4, 20(3)
  02edd4c  fsubs 1, 1, 2
  02edd50  fsubs 2, 3, 4
  02edd54  addic 28, 28, 22784
  02edd58  fabs 3, 1
  02edd5c  fabs 4, 2
  02edd60  stfs 1, 832(1)
  02edd64  stfs 2, 836(1)
  02edd68  fsubs 1, 3, 4
  02edd6c  stfs 1, 840(1)
  02edd70  lwz 3, 832(1)
  02edd74  lfs 1, 832(1)
  02edd78  lwz 4, 836(1)
  02edd7c  lfs 2, 836(1)
  02edd80  lbz 5, 188(31)
  02edd84  rlwinm 4, 4, 3, 29, 29
  02edd88  lfs 31, 28(26)
  02edd8c  fabs 5, 2
  02edd90  lwz 6, 840(1)
  02edd94  lfs 2, 840(1)
  02edd98  fabs 1, 1
  02edd9c  rlwimi 4, 6, 2, 30, 30
  02edda0  fsub 6, 2, 23
  02edda4  fsub 7, 2, 23
  02edda8  rlwimi 4, 3, 4, 28, 28
  02eddac  ori 3, 28, 0
  02eddb0  rlwimi 3, 4, 2, 26, 28
  02eddb4  slwi 4, 4, 2
  02eddb8  clrldi 3, 3, 32
  02eddbc  fsel 4, 6, 1, 4
  02eddc0  lfsx 1, 28, 4
  02eddc4  fsel 3, 7, 5, 3
  02eddc8  lfs 2, 4(3)
  02eddcc  fcmpu 0, 4, 23
  02eddd0  bt 1, 0x2edddc
  02eddd4  fmr 1, 23
  02eddd8  b 0x2edef4
  02edddc  fsubs 5, 3, 4
  02edde0  fadds 3, 3, 4
  02edde4  addic 3, 1, 16
  02edde8  li 7, 2
  02eddec  addic 6, 3, 908
  02eddf0  addic 4, 3, 892
  02eddf4  mtctr 7
  02eddf8  fdivs 3, 5, 3
  02eddfc  fmuls 4, 3, 3
  02ede00  stfs 3, 920(1)
  02ede04  stfs 3, 912(1)
  02ede08  stfs 3, 916(1)
  02ede0c  stfs 3, 908(1)
  02ede10  lfs 6, 920(1)
  02ede14  lfs 7, 912(1)
  02ede18  lfs 8, 916(1)
  02ede1c  fmuls 5, 4, 4
  02ede20  fmuls 7, 7, 4
  02ede24  fmuls 6, 6, 5
  02ede28  fmuls 3, 5, 5
  02ede2c  fmuls 5, 8, 5
  02ede30  stfs 7, 912(1)
  02ede34  fmuls 4, 6, 4
  02ede38  stfs 5, 916(1)
  02ede3c  stfs 4, 920(1)
  02ede40  lfs 4, 892(3)
  02ede44  fmuls 4, 4, 3
  02ede48  stfs 4, 908(3)
  02ede4c  lfs 4, 4(4)
  02ede50  addic 4, 4, 8
  02ede54  fmuls 4, 4, 3
  02ede58  addic 3, 3, 8
  02ede5c  stfs 4, 4(6)
  02ede60  addic 6, 6, 8
  02ede64  bdnz 0x2ede40
  02ede68  li 6, 4
  02ede6c  ori 3, 1, 0
  02ede70  mtctr 6
  02ede74  lis 4, 115
  02ede78  addic 6, 3, 908
  02ede7c  addic 4, 4, 22752
  02ede80  ori 8, 6, 0
  02ede84  lfs 3, 908(3)
  02ede88  lfs 4, 0(4)
  02ede8c  fmuls 3, 3, 4
  02ede90  lfs 4, 4(4)
  02ede94  addic 4, 4, 8
  02ede98  stfs 3, 908(3)
  02ede9c  lfs 3, 4(6)
  02edea0  addic 3, 3, 8
  02edea4  fmuls 3, 3, 4
  02edea8  stfs 3, 4(6)
  02edeac  addic 6, 6, 8
  02edeb0  bdnz 0x2ede84
  02edeb4  ori 3, 1, 0
  02edeb8  fmr 3, 23
  02edebc  mtctr 7
  02edec0  lfs 4, 908(3)
  02edec4  fadds 3, 3, 4
  02edec8  lfs 4, 4(8)
  02edecc  addic 3, 3, 16
  02eded0  lfs 5, 8(8)
  02eded4  lfs 6, 12(8)
  02eded8  addic 8, 8, 16
  02ededc  fadds 3, 3, 4
  02edee0  fadds 3, 3, 5
  02edee4  fadds 3, 3, 6
  02edee8  bdnz 0x2edec0
  02edeec  fadds 3, 3, 31
  02edef0  fmadds 1, 3, 1, 2
  02edef4  cmpwi 5, 5
  02edef8  stfs 1, 72(31)
  02edefc  bf 2, 0x2edf20
  02edf00  addic 3, 30, 456
  02edf04  bl 0x4fff60
  02edf08  nop
  02edf0c  cmpwi 3, 0
  02edf10  lbz 5, 188(31)
  02edf14  bt 2, 0x2edf20
  02edf18  li 5, 1
  02edf1c  stb 5, 188(31)
  02edf20  cmpwi 5, 1
  02edf24  bf 2, 0x2ee1a4
  02edf28  lis 3, 128
  02edf2c  vspltisw 4, -1
  02edf30  li 4, -5104
  02edf34  lis 5, 47
  02edf38  li 6, 32
  02edf3c  addi 5, 5, -9520
  02edf40  vslw 4, 4, 4
  02edf44  <unknown>
  02edf48  lis 3, 114
  02edf4c  vcfsx 2, 2, 0
  02edf50  <unknown>
  02edf54  li 4, -3056
  02edf58  vspltw 3, 3, 0
  02edf5c  li 6, 448
  02edf60  li 7, 0
  02edf64  <unknown>
  02edf68  li 8, 2
  02edf6c  lfs 30, 32(5)
  02edf70  addic 5, 1, 288
  02edf74  ori 3, 31, 0
  02edf78  li 4, 4
  02edf7c  vaddfp 2, 2, 3
  02edf80  vmaddfp 2, 5, 2, 4
  02edf84  vctsxs 2, 2, 0
  02edf88  vspltw 2, 2, 0
  02edf8c  stvewx 2, 6, 30
  02edf90  stw 7, 452(30)
  02edf94  stb 8, 188(31)
  02edf98  bl 0xf1038
  02edf9c  nop
  02edfa0  addic 5, 1, 352
  02edfa4  ori 3, 31, 0
  02edfa8  li 4, 5
  02edfac  bl 0xf1038
  02edfb0  nop
  02edfb4  lfs 3, 356(1)
  02edfb8  lfs 2, 352(1)
  02edfbc  fmuls 1, 3, 3
  02edfc0  lfs 4, 360(1)
  02edfc4  fmr 5, 23
  02edfc8  lfs 8, 368(1)
  02edfcc  lfs 9, 372(1)
  02edfd0  lfs 10, 376(1)
  02edfd4  lfs 11, 384(1)
  02edfd8  lfs 12, 388(1)
  02edfdc  fmadds 1, 2, 2, 1
  02edfe0  fmr 6, 5
  02edfe4  lfs 13, 392(1)
  02edfe8  fmadds 1, 4, 4, 1
  02edfec  fmr 7, 6
  02edff0  fsqrts 0, 1
  02edff4  fcmpu 0, 0, 7
  02edff8  bt 2, 0x2ee048
  02edffc  frsqrte 5, 1
  02ee000  lis 3, 47
  02ee004  addi 3, 3, -9520
  02ee008  lfs 6, 4(3)
  02ee00c  fmuls 7, 1, 5
  02ee010  fmuls 0, 30, 5
  02ee014  fnmsubs 7, 7, 5, 6
  02ee018  fmadds 5, 7, 0, 5
  02ee01c  fmuls 7, 1, 5
  02ee020  fmuls 0, 30, 5
  02ee024  fnmsubs 7, 7, 5, 6
  02ee028  fmadds 5, 7, 0, 5
  02ee02c  fmuls 1, 1, 5
  02ee030  fmuls 7, 30, 5
  02ee034  fnmsubs 1, 1, 5, 6
  02ee038  fmadds 5, 1, 7, 5
  02ee03c  fmuls 7, 2, 5
  02ee040  fmuls 6, 3, 5
  02ee044  fmuls 5, 4, 5
  02ee048  fmuls 1, 9, 9
  02ee04c  stfs 5, 360(1)
  02ee050  stfs 7, 352(1)
  02ee054  stfs 6, 356(1)
  02ee058  fmadds 5, 8, 8, 1
  02ee05c  fmr 1, 23
  02ee060  fmadds 5, 10, 10, 5
  02ee064  fmr 2, 1
  02ee068  fsqrts 4, 5
  02ee06c  fmr 3, 2
  02ee070  fcmpu 0, 4, 3
  02ee074  bt 2, 0x2ee0c4
  02ee078  frsqrte 1, 5
  02ee07c  lis 3, 47
  02ee080  addi 3, 3, -9520
  02ee084  lfs 2, 4(3)
  02ee088  fmuls 3, 5, 1
  02ee08c  fmuls 4, 30, 1
  02ee090  fnmsubs 3, 3, 1, 2
  02ee094  fmadds 1, 3, 4, 1
  02ee098  fmuls 3, 5, 1
  02ee09c  fmuls 4, 30, 1
  02ee0a0  fnmsubs 3, 3, 1, 2
  02ee0a4  fmadds 1, 3, 4, 1
  02ee0a8  fmuls 3, 5, 1
  02ee0ac  fmuls 4, 30, 1
  02ee0b0  fnmsubs 2, 3, 1, 2
  02ee0b4  fmadds 1, 2, 4, 1
  02ee0b8  fmuls 3, 8, 1
  02ee0bc  fmuls 2, 9, 1
  02ee0c0  fmuls 1, 10, 1
  02ee0c4  fmuls 4, 12, 12
  02ee0c8  stfs 1, 376(1)
  02ee0cc  stfs 2, 372(1)
  02ee0d0  fmr 2, 23
  02ee0d4  stfs 3, 368(1)
  02ee0d8  fmadds 1, 11, 11, 4
  02ee0dc  fmr 3, 2
  02ee0e0  fmadds 1, 13, 13, 1
  02ee0e4  fmr 4, 3
  02ee0e8  fsqrts 5, 1
  02ee0ec  fcmpu 0, 5, 4
  02ee0f0  bt 2, 0x2ee140
  02ee0f4  frsqrte 2, 1
  02ee0f8  lis 3, 47
  02ee0fc  addi 3, 3, -9520
  02ee100  lfs 3, 4(3)
  02ee104  fmuls 4, 1, 2
  02ee108  fmuls 5, 30, 2
  02ee10c  fnmsubs 4, 4, 2, 3
  02ee110  fmadds 2, 4, 5, 2
  02ee114  fmuls 4, 1, 2
  02ee118  fmuls 5, 30, 2
  02ee11c  fnmsubs 4, 4, 2, 3
  02ee120  fmadds 2, 4, 5, 2
  02ee124  fmuls 1, 1, 2
  02ee128  fmuls 4, 30, 2
  02ee12c  fnmsubs 1, 1, 2, 3
  02ee130  fmadds 2, 1, 4, 2
  02ee134  fmuls 4, 11, 2
  02ee138  fmuls 3, 12, 2
  02ee13c  fmuls 2, 13, 2
  02ee140  addic 26, 1, 416
  02ee144  stfs 4, 384(1)
  02ee148  stfs 3, 388(1)
  02ee14c  addic 4, 1, 352
  02ee150  ori 3, 26, 0
  02ee154  stfs 2, 392(1)
  02ee158  bl 0x5010c0
  02ee15c  nop
  02ee160  li 6, 0
  02ee164  lis 7, 16256
  02ee168  addic 25, 1, 480
  02ee16c  addic 5, 1, 288
  02ee170  stw 6, 472(1)
  02ee174  ori 3, 25, 0
  02ee178  stw 6, 468(1)
  02ee17c  ori 4, 26, 0
  02ee180  stw 6, 464(1)
  02ee184  stw 7, 476(1)
  02ee188  bl 0x50162c
  02ee18c  nop
  02ee190  addic 3, 30, 464
  02ee194  ori 4, 25, 0
  02ee198  bl 0x10bcf0
  02ee19c  nop
  02ee1a0  lbz 5, 188(31)
  02ee1a4  cmpwi 5, 2
  02ee1a8  cmpwi 6, 5, 3
  02ee1ac  lfs 30, 72(31)
  02ee1b0  bt 2, 0x2ee1c0
  02ee1b4  cmpwi 1, 5, 4
  02ee1b8  bt 26, 0x2ee1c0
  02ee1bc  bf 6, 0x2eed50
  02ee1c0  ori 26, 29, 0
  02ee1c4  addic 29, 30, 160
  02ee1c8  ori 3, 31, 0
  02ee1cc  li 4, 0
  02ee1d0  ori 5, 29, 0
  02ee1d4  bl 0xf1038
  02ee1d8  nop
  02ee1dc  lis 3, 47
  02ee1e0  addi 25, 3, -9520
  02ee1e4  lwz 3, 448(30)
  02ee1e8  extsw 3, 3
  02ee1ec  lfs 29, 4(25)
  02ee1f0  fmr 20, 29
  02ee1f4  bl 0x502730
  02ee1f8  nop
  02ee1fc  lis 3, 128
  02ee200  fmr 30, 1
  02ee204  lwz 3, -5104(3)
  02ee208  extsw 3, 3
  02ee20c  std 3, 944(1)
  02ee210  lis 3, 114
  02ee214  lfs 22, 32(25)
  02ee218  lfs 1, -3056(3)
  02ee21c  lfd 2, 944(1)
  02ee220  fcfid 2, 2
  02ee224  frsp 2, 2
  02ee228  fadds 2, 2, 22
  02ee22c  fmuls 1, 1, 2
  02ee230  fctiwz 1, 1
  02ee234  stfd 1, 944(1)
  02ee238  lwz 3, 948(1)
  02ee23c  extsw 3, 3
  02ee240  bl 0x502730
  02ee244  nop
  02ee248  fdivs 1, 30, 1
  02ee24c  lis 3, 128
  02ee250  addic 4, 1, 144
  02ee254  addic 5, 1, 800
  02ee258  addic 6, 1, 804
  02ee25c  li 8, 0
  02ee260  lfs 2, -5100(3)
  02ee264  ori 3, 26, 0
  02ee268  fsubs 3, 20, 2
  02ee26c  lwz 7, 100(30)
  02ee270  stw 7, 800(1)
  02ee274  lfs 4, 104(30)
  02ee278  stfs 4, 804(1)
  02ee27c  fmadds 1, 3, 1, 2
  02ee280  bl 0x10ce18
  02ee284  nop
  02ee288  lfs 1, 144(1)
  02ee28c  stfs 1, 480(30)
  02ee290  lfs 1, 148(1)
  02ee294  stfs 1, 484(30)
  02ee298  lfs 1, 152(1)
  02ee29c  stfs 1, 488(30)
  02ee2a0  lfs 1, 156(1)
  02ee2a4  stfs 1, 492(30)
  02ee2a8  lfs 27, 144(1)
  02ee2ac  lfs 1, 16(31)
  02ee2b0  lfs 26, 148(1)
  02ee2b4  lfs 2, 20(31)
  02ee2b8  fsubs 27, 27, 1
  02ee2bc  fsubs 26, 26, 2
  02ee2c0  fabs 2, 27
  02ee2c4  fabs 3, 26
  02ee2c8  stfs 27, 820(1)
  02ee2cc  stfs 26, 824(1)
  02ee2d0  lfs 25, 152(1)
  02ee2d4  lfs 4, 24(31)
  02ee2d8  lfs 28, 156(1)
  02ee2dc  fsubs 25, 25, 4
  02ee2e0  fsubs 1, 2, 3
  02ee2e4  stfs 1, 828(1)
  02ee2e8  lwz 3, 820(1)
  02ee2ec  lfs 1, 820(1)
  02ee2f0  lwz 4, 824(1)
  02ee2f4  lfs 4, 824(1)
  02ee2f8  lfs 24, 72(31)
  02ee2fc  fabs 1, 1
  02ee300  lwz 5, 828(1)
  02ee304  rlwinm 4, 4, 3, 29, 29
  02ee308  lfs 5, 828(1)
  02ee30c  fabs 4, 4
  02ee310  rlwimi 4, 5, 2, 30, 30
  02ee314  fsub 6, 5, 23
  02ee318  fsub 5, 5, 23
  02ee31c  rlwimi 4, 3, 4, 28, 28
  02ee320  ori 3, 28, 0
  02ee324  rlwimi 3, 4, 2, 26, 28
  02ee328  slwi 4, 4, 2
  02ee32c  clrldi 3, 3, 32
  02ee330  fsel 3, 6, 1, 3
  02ee334  lfsx 30, 28, 4
  02ee338  fsel 2, 5, 4, 2
  02ee33c  lfs 1, 4(3)
  02ee340  fcmpu 0, 3, 23
  02ee344  bt 1, 0x2ee350
  02ee348  fmr 30, 23
  02ee34c  b 0x2ee468
  02ee350  fsubs 4, 2, 3
  02ee354  fadds 2, 2, 3
  02ee358  addic 3, 1, 16
  02ee35c  li 7, 2
  02ee360  addic 4, 3, 860
  02ee364  addic 5, 3, 876
  02ee368  mtctr 7
  02ee36c  fdivs 2, 4, 2
  02ee370  fmuls 3, 2, 2
  02ee374  stfs 2, 888(1)
  02ee378  stfs 2, 880(1)
  02ee37c  stfs 2, 884(1)
  02ee380  stfs 2, 876(1)
  02ee384  lfs 5, 888(1)
  02ee388  lfs 6, 880(1)
  02ee38c  lfs 7, 884(1)
  02ee390  fmuls 4, 3, 3
  02ee394  fmuls 6, 6, 3
  02ee398  fmuls 5, 5, 4
  02ee39c  fmuls 2, 4, 4
  02ee3a0  fmuls 4, 7, 4
  02ee3a4  stfs 6, 880(1)
  02ee3a8  fmuls 3, 5, 3
  02ee3ac  stfs 4, 884(1)
  02ee3b0  stfs 3, 888(1)
  02ee3b4  lfs 3, 860(3)
  02ee3b8  fmuls 3, 3, 2
  02ee3bc  stfs 3, 876(3)
  02ee3c0  lfs 3, 4(4)
  02ee3c4  addic 3, 3, 8
  02ee3c8  addic 4, 4, 8
  02ee3cc  fmuls 3, 3, 2
  02ee3d0  stfs 3, 4(5)
  02ee3d4  addic 5, 5, 8
  02ee3d8  bdnz 0x2ee3b4
  02ee3dc  li 5, 4
  02ee3e0  ori 3, 1, 0
  02ee3e4  mtctr 5
  02ee3e8  lis 4, 115
  02ee3ec  addic 5, 3, 876
  02ee3f0  addic 4, 4, 22752
  02ee3f4  ori 6, 5, 0
  02ee3f8  lfs 2, 876(3)
  02ee3fc  lfs 3, 0(4)
  02ee400  fmuls 2, 2, 3
  02ee404  lfs 3, 4(4)
  02ee408  addic 4, 4, 8
  02ee40c  stfs 2, 876(3)
  02ee410  lfs 2, 4(5)
  02ee414  addic 3, 3, 8
  02ee418  fmuls 2, 2, 3
  02ee41c  stfs 2, 4(5)
  02ee420  addic 5, 5, 8
  02ee424  bdnz 0x2ee3f8
  02ee428  fmr 2, 23
  02ee42c  ori 3, 1, 0
  02ee430  mtctr 7
  02ee434  lfs 3, 876(3)
  02ee438  fadds 2, 2, 3
  02ee43c  addic 3, 3, 16
  02ee440  lfs 3, 4(6)
  02ee444  lfs 4, 8(6)
  02ee448  lfs 5, 12(6)
  02ee44c  addic 6, 6, 16
  02ee450  fadds 2, 2, 3
  02ee454  fadds 2, 2, 4
  02ee458  fadds 2, 2, 5
  02ee45c  bdnz 0x2ee434
  02ee460  fadds 2, 2, 31
  02ee464  fmadds 30, 2, 30, 1
  02ee468  fmr 1, 30
  02ee46c  fmr 2, 24
  02ee470  bl 0x5025e0
  02ee474  nop
  02ee478  fmr 24, 1
  02ee47c  lis 3, 47
  02ee480  lis 5, 114
  02ee484  addi 4, 3, -9520
  02ee488  lwz 3, 452(30)
  02ee48c  lfs 2, 36(4)
  02ee490  lfs 1, -3056(5)
  02ee494  fcmpu 0, 24, 2
  02ee498  cror 6, 0, 2
  02ee49c  bt 6, 0x2ee4a8
  02ee4a0  fmr 24, 2
  02ee4a4  b 0x2ee4c4
  02ee4a8  lis 4, 47
  02ee4ac  addi 4, 4, -9520
  02ee4b0  lfs 2, 40(4)
  02ee4b4  fcmpu 0, 24, 2
  02ee4b8  cror 6, 1, 2
  02ee4bc  bt 6, 0x2ee4c4
  02ee4c0  fmr 24, 2
  02ee4c4  lis 4, 47
  02ee4c8  addic 3, 3, 1
  02ee4cc  addi 4, 4, -9520
  02ee4d0  stw 3, 452(30)
  02ee4d4  lfs 21, 44(4)
  02ee4d8  fmuls 1, 1, 21
  02ee4dc  fctiwz 1, 1
  02ee4e0  stfd 1, 944(1)
  02ee4e4  lwz 4, 948(1)
  02ee4e8  cmpw 3, 4
  02ee4ec  bf 1, 0x2ee574
  02ee4f0  lbz 3, 188(31)
  02ee4f4  cmpwi 3, 4
  02ee4f8  bf 2, 0x2ee508
  02ee4fc  li 3, 0
  02ee500  stb 3, 188(31)
  02ee504  b 0x2ee524
  02ee508  ori 3, 31, 0
  02ee50c  li 4, 3
  02ee510  li 5, 1
  02ee514  bl 0x24d2e4
  02ee518  nop
  02ee51c  li 3, 3
  02ee520  stb 3, 188(31)
  02ee524  lis 3, 47
  02ee528  li 5, 44
  02ee52c  vspltisw 2, -1
  02ee530  addi 3, 3, -9520
  02ee534  li 4, -3056
  02ee538  lis 6, 114
  02ee53c  vslw 2, 2, 2
  02ee540  <unknown>
  02ee544  vspltw 3, 3, 0
  02ee548  <unknown>
  02ee54c  lfs 1, -3056(6)
  02ee550  li 4, 452
  02ee554  vmaddfp 2, 4, 3, 2
  02ee558  fmuls 1, 1, 21
  02ee55c  fctiwz 1, 1
  02ee560  vctsxs 2, 2, 0
  02ee564  stfd 1, 944(1)
  02ee568  vspltw 2, 2, 0
  02ee56c  lwz 3, 948(1)
  02ee570  stvewx 2, 4, 30
  02ee574  lbz 4, 188(31)
  02ee578  cmpwi 4, 2
  02ee57c  cmpwi 1, 4, 4
  02ee580  bt 2, 0x2ee588
  02ee584  bf 6, 0x2ee5d4
  02ee588  extsw 3, 3
  02ee58c  bl 0x502730
  02ee590  nop
  02ee594  lis 3, 114
  02ee598  fmr 29, 1
  02ee59c  lfs 1, -3056(3)
  02ee5a0  fmuls 1, 1, 21
  02ee5a4  fctiwz 1, 1
  02ee5a8  stfd 1, 944(1)
  02ee5ac  lwz 3, 948(1)
  02ee5b0  extsw 3, 3
  02ee5b4  bl 0x502730
  02ee5b8  nop
  02ee5bc  lbz 3, 188(31)
  02ee5c0  fdivs 29, 29, 1
  02ee5c4  cmpwi 3, 4
  02ee5c8  bf 2, 0x2ee5d0
  02ee5cc  fsubs 29, 20, 29
  02ee5d0  fmuls 24, 29, 24
  02ee5d4  addic 3, 30, 336
  02ee5d8  fmr 1, 24
  02ee5dc  li 4, 2
  02ee5e0  bl 0x501980
  02ee5e4  nop
  02ee5e8  addic 5, 1, 160
  02ee5ec  ori 3, 31, 0
  02ee5f0  li 4, 4
  02ee5f4  bl 0xf1114
  02ee5f8  nop
  02ee5fc  fmuls 1, 26, 26
  02ee600  fmr 24, 23
  02ee604  fmadds 3, 27, 27, 1
  02ee608  fmr 1, 24
  02ee60c  fmadds 3, 25, 25, 3
  02ee610  fmr 2, 1
  02ee614  fsqrts 4, 3
  02ee618  fcmpu 0, 4, 2
  02ee61c  bt 2, 0x2ee660
  02ee620  frsqrte 1, 3
  02ee624  fmuls 2, 3, 1
  02ee628  fmuls 4, 22, 1
  02ee62c  fnmsubs 2, 2, 1, 20
  02ee630  fmadds 1, 2, 4, 1
  02ee634  fmuls 2, 3, 1
  02ee638  fmuls 4, 22, 1
  02ee63c  fnmsubs 2, 2, 1, 20
  02ee640  fmadds 1, 2, 4, 1
  02ee644  fmuls 2, 3, 1
  02ee648  fmuls 3, 22, 1
  02ee64c  fnmsubs 2, 2, 1, 20
  02ee650  fmadds 24, 2, 3, 1
  02ee654  fmuls 2, 27, 24
  02ee658  fmuls 1, 26, 24
  02ee65c  fmuls 24, 25, 24
  02ee660  fmuls 3, 1, 1
  02ee664  stfs 28, 572(1)
  02ee668  fmr 28, 23
  02ee66c  li 3, 0
  02ee670  stfs 2, 560(1)
  02ee674  stfs 1, 564(1)
  02ee678  stfs 24, 568(1)
  02ee67c  stw 3, 588(1)
  02ee680  fneg 3, 3
  02ee684  fneg 4, 3
  02ee688  fmr 3, 28
  02ee68c  fmadds 4, 2, 2, 4
  02ee690  fsqrts 5, 4
  02ee694  fcmpu 0, 5, 3
  02ee698  bt 2, 0x2ee6dc
  02ee69c  frsqrte 3, 4
  02ee6a0  fmuls 5, 4, 3
  02ee6a4  fmuls 6, 22, 3
  02ee6a8  fnmsubs 5, 5, 3, 20
  02ee6ac  fmadds 3, 5, 6, 3
  02ee6b0  fmuls 5, 4, 3
  02ee6b4  fmuls 6, 22, 3
  02ee6b8  fnmsubs 5, 5, 3, 20
  02ee6bc  fmadds 3, 5, 6, 3
  02ee6c0  fmuls 4, 4, 3
  02ee6c4  fmuls 5, 22, 3
  02ee6c8  fnmsubs 4, 4, 3, 20
  02ee6cc  fmadds 28, 4, 5, 3
  02ee6d0  fmuls 3, 1, 28
  02ee6d4  fmuls 28, 2, 28
  02ee6d8  fneg 3, 3
  02ee6dc  fmuls 4, 24, 28
  02ee6e0  fmuls 5, 1, 3
  02ee6e4  li 6, 0
  02ee6e8  fmsubs 6, 24, 3, 23
  02ee6ec  stfs 3, 576(1)
  02ee6f0  stfs 28, 580(1)
  02ee6f4  addic 5, 1, 608
  02ee6f8  ori 3, 31, 0
  02ee6fc  stw 6, 584(1)
  02ee700  stw 6, 556(1)
  02ee704  li 4, 5
  02ee708  stw 6, 600(1)
  02ee70c  fmsubs 1, 1, 23, 4
  02ee710  fmsubs 2, 2, 28, 5
  02ee714  stfs 6, 548(1)
  02ee718  stw 6, 596(1)
  02ee71c  stw 6, 592(1)
  02ee720  stfs 20, 604(1)
  02ee724  stfs 1, 544(1)
  02ee728  stfs 2, 552(1)
  02ee72c  bl 0xf1038
  02ee730  nop
  02ee734  lfs 2, 612(1)
  02ee738  lfs 1, 608(1)
  02ee73c  fmuls 4, 2, 2
  02ee740  lfs 3, 616(1)
  02ee744  lfs 7, 624(1)
  02ee748  lfs 8, 628(1)
  02ee74c  lfs 9, 632(1)
  02ee750  lfs 10, 640(1)
  02ee754  lfs 11, 644(1)
  02ee758  fmadds 28, 1, 1, 4
  02ee75c  fmr 4, 23
  02ee760  lfs 12, 648(1)
  02ee764  fmadds 28, 3, 3, 28
  02ee768  fmr 5, 4
  02ee76c  fsqrts 13, 28
  02ee770  fmr 6, 5
  02ee774  fcmpu 0, 13, 6
  02ee778  bt 2, 0x2ee7bc
  02ee77c  frsqrte 4, 28
  02ee780  fmuls 5, 28, 4
  02ee784  fmuls 6, 22, 4
  02ee788  fnmsubs 5, 5, 4, 20
  02ee78c  fmadds 4, 5, 6, 4
  02ee790  fmuls 5, 28, 4
  02ee794  fmuls 6, 22, 4
  02ee798  fnmsubs 5, 5, 4, 20
  02ee79c  fmadds 4, 5, 6, 4
  02ee7a0  fmuls 5, 28, 4
  02ee7a4  fmuls 6, 22, 4
  02ee7a8  fnmsubs 5, 5, 4, 20
  02ee7ac  fmadds 4, 5, 6, 4
  02ee7b0  fmuls 6, 1, 4
  02ee7b4  fmuls 5, 2, 4
  02ee7b8  fmuls 4, 3, 4
  02ee7bc  fmuls 1, 8, 8
  02ee7c0  stfs 4, 616(1)
  02ee7c4  stfs 6, 608(1)
  02ee7c8  stfs 5, 612(1)
  02ee7cc  fmadds 4, 7, 7, 1
  02ee7d0  fmr 1, 23
  02ee7d4  fmadds 4, 9, 9, 4
  02ee7d8  fmr 2, 1
  02ee7dc  fsqrts 13, 4
  02ee7e0  fmr 3, 2
  02ee7e4  fcmpu 0, 13, 3
  02ee7e8  bt 2, 0x2ee82c
  02ee7ec  frsqrte 1, 4
  02ee7f0  fmuls 2, 4, 1
  02ee7f4  fmuls 3, 22, 1
  02ee7f8  fnmsubs 2, 2, 1, 20
  02ee7fc  fmadds 1, 2, 3, 1
  02ee800  fmuls 2, 4, 1
  02ee804  fmuls 3, 22, 1
  02ee808  fnmsubs 2, 2, 1, 20
  02ee80c  fmadds 1, 2, 3, 1
  02ee810  fmuls 2, 4, 1
  02ee814  fmuls 3, 22, 1
  02ee818  fnmsubs 2, 2, 1, 20
  02ee81c  fmadds 1, 2, 3, 1
  02ee820  fmuls 3, 7, 1
  02ee824  fmuls 2, 8, 1
  02ee828  fmuls 1, 9, 1
  02ee82c  fmuls 4, 11, 11
  02ee830  stfs 1, 632(1)
  02ee834  fmr 1, 23
  02ee838  stfs 2, 628(1)
  02ee83c  stfs 3, 624(1)
  02ee840  fmadds 4, 10, 10, 4
  02ee844  fmr 2, 1
  02ee848  fmadds 4, 12, 12, 4
  02ee84c  fmr 3, 2
  02ee850  fsqrts 5, 4
  02ee854  fcmpu 0, 5, 3
  02ee858  bt 2, 0x2ee89c
  02ee85c  frsqrte 1, 4
  02ee860  fmuls 2, 4, 1
  02ee864  fmuls 3, 22, 1
  02ee868  fnmsubs 2, 2, 1, 20
  02ee86c  fmadds 1, 2, 3, 1
  02ee870  fmuls 2, 4, 1
  02ee874  fmuls 3, 22, 1
  02ee878  fnmsubs 2, 2, 1, 20
  02ee87c  fmadds 1, 2, 3, 1
  02ee880  fmuls 2, 4, 1
  02ee884  fmuls 3, 22, 1
  02ee888  fnmsubs 2, 2, 1, 20
  02ee88c  fmadds 1, 2, 3, 1
  02ee890  fmuls 3, 10, 1
  02ee894  fmuls 2, 11, 1
  02ee898  fmuls 1, 12, 1
  02ee89c  addic 26, 1, 672
  02ee8a0  stfs 3, 640(1)
  02ee8a4  addic 4, 1, 608
  02ee8a8  stfs 2, 644(1)
  02ee8ac  ori 3, 26, 0
  02ee8b0  stfs 1, 648(1)
  02ee8b4  bl 0x5010c0
  02ee8b8  nop
  02ee8bc  li 6, 0
  02ee8c0  stfs 20, 732(1)
  02ee8c4  addic 25, 1, 736
  02ee8c8  addic 5, 1, 544
  02ee8cc  ori 3, 25, 0
  02ee8d0  stw 6, 728(1)
  02ee8d4  ori 4, 26, 0
  02ee8d8  stw 6, 724(1)
  02ee8dc  stw 6, 720(1)
  02ee8e0  bl 0x50162c
  02ee8e4  nop
  02ee8e8  lis 3, 47
  02ee8ec  lfs 28, 44(31)
  02ee8f0  ori 4, 25, 0
  02ee8f4  addi 5, 3, -9520
  02ee8f8  addic 3, 1, 176
  02ee8fc  lfs 1, 48(5)
  02ee900  fdivs 28, 1, 28
  02ee904  bl 0x10bcf0
  02ee908  nop
  02ee90c  lbz 3, 188(31)
  02ee910  cmpwi 3, 2
  02ee914  bt 2, 0x2ee920
  02ee918  cmpwi 3, 4
  02ee91c  bf 2, 0x2ee93c
  02ee920  fmr 1, 29
  02ee924  addic 3, 30, 400
  02ee928  addic 4, 30, 464
  02ee92c  addic 5, 1, 176
  02ee930  bl 0x501848
  02ee934  nop
  02ee938  b 0x2ee95c
  02ee93c  lfs 1, 176(1)
  02ee940  stfs 1, 400(30)
  02ee944  lfs 1, 180(1)
  02ee948  stfs 1, 404(30)
  02ee94c  lfs 1, 184(1)
  02ee950  stfs 1, 408(30)
  02ee954  lfs 1, 188(1)
  02ee958  stfs 1, 412(30)
  02ee95c  li 6, 1
  02ee960  addic 4, 1, 192
  02ee964  addic 3, 30, 416
  02ee968  li 5, 16
  02ee96c  stb 6, 387(30)
  02ee970  stfs 20, 396(30)
  02ee974  stfs 20, 192(1)
  02ee978  stfs 20, 196(1)
  02ee97c  stfs 20, 200(1)
  02ee980  stfs 20, 204(1)
  02ee984  bl 0x5c5ad0
  02ee988  nop
  02ee98c  li 4, 0
  02ee990  stfs 28, 436(30)
  02ee994  addic 3, 30, 448
  02ee998  stfs 20, 444(30)
  02ee99c  stw 4, 432(30)
  02ee9a0  stw 4, 440(30)
  02ee9a4  bl 0x4fff60
  02ee9a8  nop
  02ee9ac  cmpwi 3, 0
  02ee9b0  bt 2, 0x2ee9c4
  02ee9b4  li 3, 4
  02ee9b8  li 4, 0
  02ee9bc  stb 3, 188(31)
  02ee9c0  stw 4, 452(30)
  02ee9c4  lbz 3, 188(31)
  02ee9c8  cmpwi 3, 3
  02ee9cc  cmpwi 1, 3, 2
  02ee9d0  cmpwi 6, 3, 4
  02ee9d4  bf 2, 0x2eeb18
  02ee9d8  ori 4, 29, 0
  02ee9dc  ori 3, 31, 0
  02ee9e0  addic 29, 30, 480
  02ee9e4  ori 5, 29, 0
  02ee9e8  bl 0x24d50c
  02ee9ec  nop
  02ee9f0  cmpwi 3, 0
  02ee9f4  bf 2, 0x2eea0c
  02ee9f8  ori 3, 31, 0
  02ee9fc  li 4, 3
  02eea00  li 5, 1
  02eea04  bl 0x24d2e4
  02eea08  nop
  02eea0c  lis 3, 47
  02eea10  lfs 1, 72(31)
  02eea14  addi 3, 3, -9520
  02eea18  lis 4, 1
  02eea1c  lfs 2, 52(3)
  02eea20  lfs 3, 56(3)
  02eea24  fadds 2, 1, 2
  02eea28  fsubs 5, 3, 1
  02eea2c  lfs 4, 60(3)
  02eea30  ori 8, 4, 1
  02eea34  li 4, 0
  02eea38  li 9, 1
  02eea3c  addic 7, 1, 240
  02eea40  ori 6, 31, 0
  02eea44  fsubs 3, 3, 2
  02eea48  fsub 7, 1, 5
  02eea4c  fsubs 6, 4, 2
  02eea50  fsubs 4, 4, 1
  02eea54  fsub 8, 2, 3
  02eea58  fsel 1, 7, 5, 1
  02eea5c  fsel 2, 8, 3, 2
  02eea60  fsub 5, 4, 1
  02eea64  lfs 3, 64(3)
  02eea68  fsub 7, 6, 2
  02eea6c  fsel 1, 5, 4, 1
  02eea70  lfs 4, 68(3)
  02eea74  lfs 5, 72(3)
  02eea78  lfs 9, 76(3)
  02eea7c  lis 3, 17839
  02eea80  stfs 20, 248(1)
  02eea84  ori 3, 3, 57190
  02eea88  fsel 2, 7, 6, 2
  02eea8c  fmuls 6, 1, 1
  02eea90  lhz 5, 166(31)
  02eea94  stw 3, 252(1)
  02eea98  stb 4, 264(1)
  02eea9c  addic 3, 30, 208
  02eeaa0  stb 9, 265(1)
  02eeaa4  ori 4, 29, 0
  02eeaa8  sth 5, 266(1)
  02eeaac  li 5, 9
  02eeab0  fmuls 7, 2, 2
  02eeab4  fmuls 8, 6, 1
  02eeab8  fmuls 10, 7, 2
  02eeabc  fmuls 11, 6, 8
  02eeac0  fmadds 1, 8, 3, 1
  02eeac4  fmuls 8, 7, 10
  02eeac8  fmadds 2, 10, 3, 2
  02eeacc  fmuls 3, 6, 11
  02eead0  fmadds 1, 11, 4, 1
  02eead4  fmuls 10, 7, 8
  02eead8  fmadds 2, 8, 4, 2
  02eeadc  fmuls 4, 6, 3
  02eeae0  fmadds 1, 3, 5, 1
  02eeae4  fmuls 3, 7, 10
  02eeae8  fmadds 2, 10, 5, 2
  02eeaec  fmadds 1, 4, 9, 1
  02eeaf0  fmadds 2, 3, 9, 2
  02eeaf4  stfs 1, 244(1)
  02eeaf8  stfs 20, 268(1)
  02eeafc  stw 9, 272(1)
  02eeb00  stw 8, 260(1)
  02eeb04  stw 31, 256(1)
  02eeb08  stfs 2, 240(1)
  02eeb0c  bl 0x57820
  02eeb10  nop
  02eeb14  b 0x2eed70
  02eeb18  bt 6, 0x2eeb20
  02eeb1c  bf 26, 0x2eed2c
  02eeb20  lis 3, 128
  02eeb24  lfs 1, 160(30)
  02eeb28  lis 4, 161
  02eeb2c  lfs 2, -5096(3)
  02eeb30  fmuls 1, 1, 2
  02eeb34  addic 3, 1, 208
  02eeb38  addic 4, 4, 23856
  02eeb3c  li 5, 127
  02eeb40  ori 6, 31, 0
  02eeb44  stfs 1, 208(1)
  02eeb48  lfs 3, 164(30)
  02eeb4c  fmuls 3, 3, 2
  02eeb50  stfs 3, 212(1)
  02eeb54  lfs 4, 168(30)
  02eeb58  fmuls 2, 4, 2
  02eeb5c  stfs 2, 216(1)
  02eeb60  lfs 4, 172(30)
  02eeb64  stfs 4, 220(1)
  02eeb68  lfs 4, 208(30)
  02eeb6c  fadds 1, 1, 4
  02eeb70  stfs 1, 208(1)
  02eeb74  lfs 1, 212(30)
  02eeb78  fadds 1, 3, 1
  02eeb7c  stfs 1, 212(1)
  02eeb80  lfs 1, 216(30)
  02eeb84  fadds 1, 2, 1
  02eeb88  stfs 1, 216(1)
  02eeb8c  bl 0x133580
  02eeb90  nop
  02eeb94  ori 29, 3, 0
  02eeb98  cmpwi 29, 0
  02eeb9c  bt 2, 0x2eec4c
  02eeba0  lis 3, 47
  02eeba4  addi 26, 3, -9520
  02eeba8  lis 3, 128
  02eebac  lfs 1, 80(26)
  02eebb0  lfs 2, -5092(3)
  02eebb4  fsubs 2, 2, 1
  02eebb8  fmadds 1, 2, 29, 1
  02eebbc  stfs 1, 12(29)
  02eebc0  lfs 1, 84(26)
  02eebc4  lfs 2, 88(26)
  02eebc8  fmadds 1, 29, 1, 2
  02eebcc  bl 0x502758
  02eebd0  nop
  02eebd4  sth 3, 52(29)
  02eebd8  li 3, 1
  02eebdc  vspltisw 3, -1
  02eebe0  li 4, 92
  02eebe4  li 5, -3056
  02eebe8  sth 3, 54(29)
  02eebec  lis 3, 114
  02eebf0  lfs 1, 92(26)
  02eebf4  <unknown>
  02eebf8  vslw 3, 3, 3
  02eebfc  li 4, 10
  02eec00  vspltw 2, 2, 0
  02eec04  <unknown>
  02eec08  lfs 2, -3056(3)
  02eec0c  vmaddfp 2, 4, 2, 3
  02eec10  fmuls 1, 2, 1
  02eec14  fctiwz 1, 1
  02eec18  vctsxs 2, 2, 0
  02eec1c  stfd 1, 944(1)
  02eec20  vsplth 2, 2, 1
  02eec24  lwz 3, 948(1)
  02eec28  extsh 3, 3
  02eec2c  stvehx 2, 4, 29
  02eec30  bl 0x502730
  02eec34  nop
  02eec38  fdivs 1, 20, 1
  02eec3c  lis 3, 127
  02eec40  ori 3, 3, 32639
  02eec44  stw 3, 56(29)
  02eec48  stfs 1, 48(29)
  02eec4c  lfs 1, 208(30)
  02eec50  lis 3, 47
  02eec54  stfs 1, 224(1)
  02eec58  lfs 2, 212(30)
  02eec5c  lis 5, 128
  02eec60  addi 4, 3, -9520
  02eec64  stfs 2, 228(1)
  02eec68  lfs 2, 216(30)
  02eec6c  fsubs 3, 2, 22
  02eec70  stfs 2, 232(1)
  02eec74  lfs 2, 220(30)
  02eec78  stfs 2, 236(1)
  02eec7c  lwz 3, 240(30)
  02eec80  lfs 2, -5088(5)
  02eec84  cmpwi 3, -1
  02eec88  stfs 3, 232(1)
  02eec8c  lfs 3, 96(4)
  02eec90  fsubs 2, 2, 3
  02eec94  fmadds 29, 2, 29, 3
  02eec98  bf 2, 0x2eecd0
  02eec9c  lis 4, 128
  02eeca0  lis 5, 128
  02eeca4  fmr 1, 29
  02eeca8  lis 6, 128
  02eecac  fmr 2, 23
  02eecb0  addic 3, 1, 224
  02eecb4  lfs 3, -5084(4)
  02eecb8  lfs 4, -5080(5)
  02eecbc  lfs 5, -5076(6)
  02eecc0  bl 0xda4ac
  02eecc4  nop
  02eecc8  lfs 1, 224(1)
  02eeccc  stw 3, 240(30)
  02eecd0  cmpwi 3, 0
  02eecd4  bt 0, 0x2eed70
  02eecd8  lis 4, 162
  02eecdc  sldi 3, 3, 5
  02eece0  addic 4, 4, -8448
  02eece4  lis 5, 128
  02eece8  addc 3, 4, 3
  02eecec  lis 4, 128
  02eecf0  clrldi 3, 3, 32
  02eecf4  lis 6, 128
  02eecf8  stfs 1, 16(3)
  02eecfc  lfs 1, 228(1)
  02eed00  stfs 1, 20(3)
  02eed04  lfs 1, 232(1)
  02eed08  stfs 29, 28(3)
  02eed0c  stfs 1, 24(3)
  02eed10  lfs 1, -5084(5)
  02eed14  stfs 1, 0(3)
  02eed18  lfs 1, -5080(4)
  02eed1c  stfs 1, 4(3)
  02eed20  lfs 1, -5076(6)
  02eed24  stfs 1, 8(3)
  02eed28  b 0x2eed70
  02eed2c  lwz 3, 240(30)
  02eed30  cmpwi 3, -1
  02eed34  bt 2, 0x2eed70
  02eed38  extsw 3, 3
  02eed3c  bl 0xda9e8
  02eed40  nop
  02eed44  li 3, -1
  02eed48  stw 3, 240(30)
  02eed4c  b 0x2eed70
  02eed50  lwz 3, 240(30)
  02eed54  cmpwi 3, -1
  02eed58  bt 2, 0x2eed70
  02eed5c  extsw 3, 3
  02eed60  bl 0xda9e8
  02eed64  nop
  02eed68  li 3, -1
  02eed6c  stw 3, 240(30)
  02eed70  lfs 1, 128(27)
  02eed74  lfs 2, 16(31)
  02eed78  lfs 3, 132(27)
  02eed7c  lfs 4, 20(31)
  02eed80  fsubs 1, 1, 2
  02eed84  fsubs 2, 3, 4
  02eed88  fabs 3, 1
  02eed8c  fabs 4, 2
  02eed90  stfs 1, 808(1)
  02eed94  stfs 2, 812(1)
  02eed98  fsubs 1, 3, 4
  02eed9c  stfs 1, 816(1)
  02eeda0  lwz 3, 808(1)
  02eeda4  lfs 1, 808(1)
  02eeda8  lwz 4, 812(1)
  02eedac  lfs 2, 812(1)
  02eedb0  lwz 5, 816(1)
  02eedb4  rlwinm 4, 4, 3, 29, 29
  02eedb8  fabs 5, 2
  02eedbc  lfs 2, 816(1)
  02eedc0  fabs 1, 1
  02eedc4  rlwimi 4, 5, 2, 30, 30
  02eedc8  fsub 6, 2, 23
  02eedcc  fsub 7, 2, 23
  02eedd0  rlwimi 4, 3, 4, 28, 28
  02eedd4  ori 3, 28, 0
  02eedd8  rlwimi 3, 4, 2, 26, 28
  02eeddc  slwi 4, 4, 2
  02eede0  clrldi 3, 3, 32
  02eede4  fsel 4, 6, 1, 4
  02eede8  lfsx 1, 28, 4
  02eedec  fsel 3, 7, 5, 3
  02eedf0  lfs 2, 4(3)
  02eedf4  fcmpu 0, 4, 23
  02eedf8  bt 1, 0x2eee00
  02eedfc  b 0x2eef14
  02eee00  fsubs 5, 3, 4
  02eee04  fadds 3, 3, 4
  02eee08  addic 3, 1, 16
  02eee0c  li 7, 2
  02eee10  addic 4, 3, 828
  02eee14  addic 5, 3, 844
  02eee18  mtctr 7
  02eee1c  fdivs 3, 5, 3
  02eee20  fmuls 4, 3, 3
  02eee24  stfs 3, 856(1)
  02eee28  stfs 3, 848(1)
  02eee2c  stfs 3, 852(1)
  02eee30  stfs 3, 844(1)
  02eee34  lfs 6, 856(1)
  02eee38  lfs 7, 848(1)
  02eee3c  lfs 8, 852(1)
  02eee40  fmuls 5, 4, 4
  02eee44  fmuls 7, 7, 4
  02eee48  fmuls 6, 6, 5
  02eee4c  fmuls 3, 5, 5
  02eee50  fmuls 5, 8, 5
  02eee54  stfs 7, 848(1)
  02eee58  fmuls 4, 6, 4
  02eee5c  stfs 5, 852(1)
  02eee60  stfs 4, 856(1)
  02eee64  lfs 4, 828(3)
  02eee68  fmuls 4, 4, 3
  02eee6c  stfs 4, 844(3)
  02eee70  lfs 4, 4(4)
  02eee74  addic 3, 3, 8
  02eee78  addic 4, 4, 8
  02eee7c  fmuls 4, 4, 3
  02eee80  stfs 4, 4(5)
  02eee84  addic 5, 5, 8
  02eee88  bdnz 0x2eee64
  02eee8c  li 5, 4
  02eee90  ori 3, 1, 0
  02eee94  mtctr 5
  02eee98  lis 4, 115
  02eee9c  addic 5, 3, 844
  02eeea0  addic 4, 4, 22752
  02eeea4  ori 6, 5, 0
  02eeea8  lfs 3, 844(3)
  02eeeac  lfs 4, 0(4)
  02eeeb0  fmuls 3, 3, 4
  02eeeb4  lfs 4, 4(4)
  02eeeb8  addic 4, 4, 8
  02eeebc  stfs 3, 844(3)
  02eeec0  lfs 3, 4(5)
  02eeec4  addic 3, 3, 8
  02eeec8  fmuls 3, 3, 4
  02eeecc  stfs 3, 4(5)
  02eeed0  addic 5, 5, 8
  02eeed4  bdnz 0x2eeea8
  02eeed8  ori 3, 1, 0
  02eeedc  mtctr 7
  02eeee0  lfs 3, 844(3)
  02eeee4  lfs 4, 4(6)
  02eeee8  fadds 3, 23, 3
  02eeeec  lfs 5, 8(6)
  02eeef0  lfs 23, 12(6)
  02eeef4  addic 3, 3, 16
  02eeef8  addic 6, 6, 16
  02eeefc  fadds 3, 3, 4
  02eef00  fadds 3, 3, 5
  02eef04  fadds 23, 3, 23
  02eef08  bdnz 0x2eeee0
  02eef0c  fadds 23, 23, 31
  02eef10  fmadds 23, 23, 1, 2
  02eef14  fmr 1, 23
  02eef18  fmr 2, 30
  02eef1c  bl 0x5025e0
  02eef20  nop
  02eef24  fmr 30, 1
  02eef28  lis 3, 47
  02eef2c  addi 3, 3, -9520
  02eef30  lfs 1, 36(3)
  02eef34  fcmpu 0, 30, 1
  02eef38  cror 6, 0, 2
  02eef3c  bt 6, 0x2eef48
  02eef40  fmr 30, 1
  02eef44  b 0x2eef64
  02eef48  lis 3, 47
  02eef4c  addi 3, 3, -9520
  02eef50  lfs 1, 40(3)
  02eef54  fcmpu 0, 30, 1
  02eef58  cror 6, 1, 2
  02eef5c  bt 6, 0x2eef64
  02eef60  fmr 30, 1
  02eef64  addic 3, 30, 272
  02eef68  fmr 1, 30
  02eef6c  li 4, 2
  02eef70  bl 0x501980
  02eef74  nop
  02eef78  ld 0, 1136(1)
  02eef7c  mtlr 0
  02eef80  lfd 20, 1024(1)
  02eef84  lfd 21, 1032(1)
  02eef88  lfd 22, 1040(1)
  02eef8c  lfd 23, 1048(1)
  02eef90  lfd 24, 1056(1)
  02eef94  lfd 25, 1064(1)
  02eef98  lfd 26, 1072(1)
  02eef9c  lfd 27, 1080(1)
  02eefa0  lfd 28, 1088(1)
  02eefa4  lfd 29, 1096(1)
  02eefa8  lfd 30, 1104(1)
  02eefac  lfd 31, 1112(1)
  02eefb0  ld 24, 960(1)
  02eefb4  ld 25, 968(1)
  02eefb8  ld 26, 976(1)
  02eefbc  ld 27, 984(1)
  02eefc0  ld 28, 992(1)
  02eefc4  ld 29, 1000(1)
  02eefc8  ld 30, 1008(1)
  02eefcc  ld 31, 1016(1)
  02eefd0  addi 1, 1, 1120
  02eefd4  blr

M211_002eefd8:   # 0x2eefd8, 0x68 bytes
  02eefd8  stdu 1, -112(1)
  02eefdc  mflr 0
  02eefe0  std 0, 128(1)
  02eefe4  lis 4, 162
  02eefe8  lis 5, 114
  02eefec  lwz 7, 120(3)
  02eeff0  lis 6, 128
  02eeff4  lwz 8, -22436(4)
  02eeff8  lfs 1, -3052(5)
  02eeffc  addic 4, 3, 16
  02ef000  lwz 3, 96(7)
  02ef004  addic 5, 7, 100
  02ef008  lfs 2, -5116(6)
  02ef00c  slwi 3, 3, 5
  02ef010  addic 6, 7, 104
  02ef014  fmuls 1, 1, 2
  02ef018  addc 3, 8, 3
  02ef01c  li 8, 0
  02ef020  clrldi 3, 3, 32
  02ef024  lwz 3, 16(3)
  02ef028  bl 0x10ce18
  02ef02c  nop
  02ef030  ld 0, 128(1)
  02ef034  mtlr 0
  02ef038  addi 1, 1, 112
  02ef03c  blr

M211_002ef040:   # 0x2ef040, 0x10c bytes
  02ef040  stdu 1, -144(1)
  02ef044  mflr 0
  02ef048  std 0, 160(1)
  02ef04c  std 31, 136(1)
  02ef050  ori 31, 3, 0
  02ef054  std 30, 128(1)
  02ef058  lis 3, 162
  02ef05c  lwz 30, 120(31)
  02ef060  lwz 4, -22436(3)
  02ef064  addic 3, 30, 108
  02ef068  lwz 5, 96(30)
  02ef06c  slwi 5, 5, 5
  02ef070  addc 4, 4, 5
  02ef074  std 29, 120(1)
  02ef078  clrldi 4, 4, 32
  02ef07c  std 28, 112(1)
  02ef080  lwz 29, 16(4)
  02ef084  bl 0x4fff60
  02ef088  nop
  02ef08c  li 4, 0
  02ef090  lwz 5, 108(30)
  02ef094  li 6, 1
  02ef098  subc 3, 4, 3
  02ef09c  cntlzw 4, 3
  02ef0a0  extsw 3, 5
  02ef0a4  sldi 4, 4, 58
  02ef0a8  li 5, 0
  02ef0ac  sradi 4, 4, 63
  02ef0b0  subc 5, 5, 6
  02ef0b4  and 4, 4, 5
  02ef0b8  addc 28, 6, 4
  02ef0bc  bl 0x502730
  02ef0c0  nop
  02ef0c4  lwz 4, 132(30)
  02ef0c8  lis 3, 165
  02ef0cc  lfs 2, 112(30)
  02ef0d0  slwi 4, 4, 2
  02ef0d4  addic 3, 3, 7136
  02ef0d8  extsw 4, 4
  02ef0dc  fmuls 1, 1, 2
  02ef0e0  lfs 2, 16(29)
  02ef0e4  lfs 3, 20(29)
  02ef0e8  lfs 4, 24(29)
  02ef0ec  lwzx 3, 3, 4
  02ef0f0  lfs 5, 16(3)
  02ef0f4  lfs 6, 20(3)
  02ef0f8  fsubs 5, 5, 2
  02ef0fc  lfs 7, 24(3)
  02ef100  fsubs 6, 6, 3
  02ef104  lfs 8, 28(3)
  02ef108  fsubs 7, 7, 4
  02ef10c  ori 3, 28, 0
  02ef110  stfs 8, 28(31)
  02ef114  fmadds 2, 1, 5, 2
  02ef118  fmadds 3, 1, 6, 3
  02ef11c  fmadds 1, 1, 7, 4
  02ef120  stfs 2, 16(31)
  02ef124  stfs 3, 20(31)
  02ef128  stfs 1, 24(31)
  02ef12c  ld 0, 160(1)
  02ef130  mtlr 0
  02ef134  ld 28, 112(1)
  02ef138  ld 29, 120(1)
  02ef13c  ld 30, 128(1)
  02ef140  ld 31, 136(1)
  02ef144  addi 1, 1, 144
  02ef148  blr

M211_002ef158:   # 0x2ef158, 0x1a8 bytes
  02ef158  stdu 1, -240(1)
  02ef15c  mflr 0
  02ef160  std 0, 256(1)
  02ef164  stfd 29, 216(1)
  02ef168  stfd 30, 224(1)
  02ef16c  stfd 31, 232(1)
  02ef170  std 30, 200(1)
  02ef174  lis 4, 162
  02ef178  lwz 30, 120(3)
  02ef17c  lis 5, 47
  02ef180  std 29, 192(1)
  02ef184  li 29, 0
  02ef188  addi 3, 5, -3764
  02ef18c  lis 6, 128
  02ef190  lwz 4, -22436(4)
  02ef194  std 27, 176(1)
  02ef198  lwz 5, 96(30)
  02ef19c  std 26, 168(1)
  02ef1a0  addic 27, 1, 128
  02ef1a4  addic 26, 1, 148
  02ef1a8  std 25, 160(1)
  02ef1ac  slwi 5, 5, 5
  02ef1b0  addic 25, 1, 144
  02ef1b4  addc 4, 4, 5
  02ef1b8  std 31, 208(1)
  02ef1bc  ori 5, 27, 0
  02ef1c0  clrldi 31, 4, 32
  02ef1c4  lis 4, 165
  02ef1c8  std 28, 184(1)
  02ef1cc  ori 7, 25, 0
  02ef1d0  addic 28, 4, 7136
  02ef1d4  li 9, 0
  02ef1d8  lwz 31, 16(31)
  02ef1dc  stw 29, 100(30)
  02ef1e0  lfs 31, 0(3)
  02ef1e4  stw 29, 104(30)
  02ef1e8  lfs 1, -5108(6)
  02ef1ec  fmr 3, 31
  02ef1f0  ori 6, 26, 0
  02ef1f4  stfs 1, 116(30)
  02ef1f8  stw 29, 144(1)
  02ef1fc  stw 29, 148(1)
  02ef200  lwz 4, 136(30)
  02ef204  lfs 30, 4(3)
  02ef208  slwi 4, 4, 2
  02ef20c  lfs 29, 8(3)
  02ef210  ori 3, 31, 0
  02ef214  fmr 1, 30
  02ef218  extsw 4, 4
  02ef21c  fmr 2, 29
  02ef220  lwzx 4, 28, 4
  02ef224  addic 4, 4, 48
  02ef228  bl 0x10d7a0
  02ef22c  nop
  02ef230  lwz 3, 148(1)
  02ef234  ori 5, 27, 0
  02ef238  li 9, 0
  02ef23c  fmr 1, 30
  02ef240  sth 3, 140(30)
  02ef244  fmr 2, 29
  02ef248  stw 29, 144(1)
  02ef24c  ori 6, 26, 0
  02ef250  stw 29, 148(1)
  02ef254  ori 7, 25, 0
  02ef258  lwz 3, 136(30)
  02ef25c  fmr 3, 31
  02ef260  slwi 3, 3, 2
  02ef264  extsw 4, 3
  02ef268  ori 3, 31, 0
  02ef26c  lwzx 4, 28, 4
  02ef270  addic 4, 4, 32
  02ef274  bl 0x10d7a0
  02ef278  nop
  02ef27c  lwz 4, 148(1)
  02ef280  lhz 3, 140(30)
  02ef284  sth 4, 142(30)
  02ef288  extsh 4, 4
  02ef28c  stw 29, 120(30)
  02ef290  extsh 3, 3
  02ef294  cmpw 4, 3
  02ef298  bf 0, 0x2ef2c8
  02ef29c  sldi 5, 4, 4
  02ef2a0  addc 5, 31, 5
  02ef2a4  subc 31, 3, 4
  02ef2a8  clrldi 3, 5, 32
  02ef2ac  lfs 1, 28(3)
  02ef2b0  addic 31, 31, -1
  02ef2b4  fadds 31, 31, 1
  02ef2b8  cmpwi 31, 0
  02ef2bc  addic 3, 3, 16
  02ef2c0  stfs 31, 120(30)
  02ef2c4  bt 1, 0x2ef2ac
  02ef2c8  ld 0, 256(1)
  02ef2cc  mtlr 0
  02ef2d0  lfd 29, 216(1)
  02ef2d4  lfd 30, 224(1)
  02ef2d8  lfd 31, 232(1)
  02ef2dc  ld 25, 160(1)
  02ef2e0  ld 26, 168(1)
  02ef2e4  ld 27, 176(1)
  02ef2e8  ld 28, 184(1)
  02ef2ec  ld 29, 192(1)
  02ef2f0  ld 30, 200(1)
  02ef2f4  ld 31, 208(1)
  02ef2f8  addi 1, 1, 240
  02ef2fc  blr

UpdateMoby_211:   # 0x2ef340, 0x674 bytes
  02ef340  stdu 1, -256(1)
  02ef344  mflr 0
  02ef348  std 0, 272(1)
  02ef34c  std 31, 248(1)
  02ef350  ori 31, 3, 0
  02ef354  std 30, 240(1)
  02ef358  lbz 3, 32(31)
  02ef35c  lwz 30, 120(31)
  02ef360  cmpwi 3, 6
  02ef364  cmpwi 1, 3, 5
  02ef368  cmpwi 6, 3, 4
  02ef36c  std 29, 232(1)
  02ef370  std 28, 224(1)
  02ef374  cmpwi 7, 3, 3
  02ef378  bt 2, 0x2ef7dc
  02ef37c  bt 6, 0x2ef790
  02ef380  bt 26, 0x2ef728
  02ef384  bt 30, 0x2ef6b4
  02ef388  cmpwi 3, 2
  02ef38c  bt 2, 0x2ef58c
  02ef390  cmpwi 3, 1
  02ef394  bt 2, 0x2ef514
  02ef398  cmpwi 3, 0
  02ef39c  bf 2, 0x2ef98c
  02ef3a0  lwz 3, 96(30)
  02ef3a4  cmpwi 3, -1
  02ef3a8  bf 2, 0x2ef3bc
  02ef3ac  ori 3, 31, 0
  02ef3b0  bl 0xefb38
  02ef3b4  nop
  02ef3b8  b 0x2ef994
  02ef3bc  lis 4, 162
  02ef3c0  slwi 3, 3, 5
  02ef3c4  lwz 4, -22436(4)
  02ef3c8  addc 3, 4, 3
  02ef3cc  clrldi 3, 3, 32
  02ef3d0  lwz 3, 16(3)
  02ef3d4  lwz 3, 0(3)
  02ef3d8  cmpwi 3, 0
  02ef3dc  bf 2, 0x2ef3f0
  02ef3e0  ori 3, 31, 0
  02ef3e4  bl 0xefb38
  02ef3e8  nop
  02ef3ec  b 0x2ef994
  02ef3f0  lwz 3, 136(30)
  02ef3f4  cmpwi 3, -1
  02ef3f8  bf 2, 0x2ef40c
  02ef3fc  ori 3, 31, 0
  02ef400  bl 0xefb38
  02ef404  nop
  02ef408  b 0x2ef994
  02ef40c  lis 4, 165
  02ef410  slwi 3, 3, 2
  02ef414  addic 4, 4, 7136
  02ef418  extsw 3, 3
  02ef41c  lwzx 3, 4, 3
  02ef420  lwz 3, 0(3)
  02ef424  cmpwi 3, 3
  02ef428  bt 2, 0x2ef43c
  02ef42c  ori 3, 31, 0
  02ef430  bl 0xefb38
  02ef434  nop
  02ef438  b 0x2ef994
  02ef43c  lwz 3, 460(30)
  02ef440  cmpwi 3, -1
  02ef444  bf 2, 0x2ef458
  02ef448  ori 3, 31, 0
  02ef44c  bl 0xefb38
  02ef450  nop
  02ef454  b 0x2ef994
  02ef458  ori 3, 31, 0
  02ef45c  bl 0x2ef158
  02ef460  li 3, 0
  02ef464  li 5, 1
  02ef468  lhz 4, 52(31)
  02ef46c  li 6, -1
  02ef470  rlwimi 4, 3, 0, 19, 19
  02ef474  stw 3, 148(31)
  02ef478  addic 29, 30, 256
  02ef47c  stb 5, 32(31)
  02ef480  ori 5, 4, 65
  02ef484  stw 6, 244(30)
  02ef488  ori 3, 29, 0
  02ef48c  stw 6, 240(30)
  02ef490  li 4, 0
  02ef494  sth 5, 52(31)
  02ef498  li 5, 64
  02ef49c  bl 0x5001fc
  02ef4a0  nop
  02ef4a4  ori 5, 29, 0
  02ef4a8  ori 3, 31, 0
  02ef4ac  li 4, 2
  02ef4b0  bl 0xf0ea8
  02ef4b4  nop
  02ef4b8  addic 29, 30, 320
  02ef4bc  li 4, 0
  02ef4c0  ori 3, 29, 0
  02ef4c4  li 5, 64
  02ef4c8  bl 0x5001fc
  02ef4cc  nop
  02ef4d0  ori 3, 31, 0
  02ef4d4  li 4, 3
  02ef4d8  ori 5, 29, 0
  02ef4dc  bl 0xf0ea8
  02ef4e0  nop
  02ef4e4  addic 30, 30, 384
  02ef4e8  li 4, 0
  02ef4ec  ori 3, 30, 0
  02ef4f0  li 5, 64
  02ef4f4  bl 0x5001fc
  02ef4f8  nop
  02ef4fc  ori 3, 31, 0
  02ef500  li 4, 4
  02ef504  ori 5, 30, 0
  02ef508  bl 0xf0ea8
  02ef50c  nop
  02ef510  b 0x2ef994
  02ef514  lis 3, 149
  02ef518  addic 3, 3, 5056
  02ef51c  lwz 3, 384(3)
  02ef520  lhz 3, 134(3)
  02ef524  cmpwi 3, 20
  02ef528  bf 2, 0x2ef994
  02ef52c  li 3, 128
  02ef530  lis 5, 47
  02ef534  vspltisw 4, -1
  02ef538  addi 4, 3, 16
  02ef53c  <unknown>
  02ef540  addi 3, 5, -3328
  02ef544  vslw 4, 4, 4
  02ef548  <unknown>
  02ef54c  li 4, -3056
  02ef550  vor 2, 2, 3
  02ef554  <unknown>
  02ef558  lis 3, 114
  02ef55c  vcfsx 2, 2, 0
  02ef560  vspltw 3, 3, 0
  02ef564  <unknown>
  02ef568  li 3, 108
  02ef56c  li 4, 2
  02ef570  vaddfp 2, 2, 3
  02ef574  vmaddfp 2, 5, 2, 4
  02ef578  vctsxs 2, 2, 0
  02ef57c  vspltw 2, 2, 0
  02ef580  stvewx 2, 3, 30
  02ef584  stb 4, 32(31)
  02ef588  b 0x2ef994
  02ef58c  addic 3, 30, 108
  02ef590  bl 0x4fff60
  02ef594  nop
  02ef598  cmpwi 3, 0
  02ef59c  bt 2, 0x2ef994
  02ef5a0  lhz 5, 52(31)
  02ef5a4  li 4, -66
  02ef5a8  lwz 7, 36(31)
  02ef5ac  li 6, 3
  02ef5b0  ori 5, 5, 4096
  02ef5b4  ori 3, 31, 0
  02ef5b8  and 8, 5, 4
  02ef5bc  li 4, 2
  02ef5c0  li 5, 0
  02ef5c4  sth 8, 52(31)
  02ef5c8  lwz 7, 16(7)
  02ef5cc  stb 6, 32(31)
  02ef5d0  stw 7, 148(31)
  02ef5d4  bl 0xfdcf0
  02ef5d8  nop
  02ef5dc  lis 3, 128
  02ef5e0  lis 4, 47
  02ef5e4  lis 5, 16128
  02ef5e8  addi 29, 4, -3328
  02ef5ec  vspltisw 4, -1
  02ef5f0  lwz 6, -5120(3)
  02ef5f4  extsw 4, 6
  02ef5f8  li 6, -5120
  02ef5fc  vslw 4, 4, 4
  02ef600  std 4, 208(1)
  02ef604  <unknown>
  02ef608  lfs 1, 0(29)
  02ef60c  li 4, -3056
  02ef610  stw 5, 88(31)
  02ef614  <unknown>
  02ef618  lis 3, 114
  02ef61c  vspltw 2, 2, 0
  02ef620  vcfsx 3, 3, 0
  02ef624  lfs 2, -3056(3)
  02ef628  <unknown>
  02ef62c  lfd 3, 208(1)
  02ef630  fcfid 3, 3
  02ef634  li 3, 108
  02ef638  vaddfp 2, 3, 2
  02ef63c  frsp 3, 3
  02ef640  vmaddfp 2, 5, 2, 4
  02ef644  fadds 1, 3, 1
  02ef648  vctsxs 2, 2, 0
  02ef64c  fmuls 1, 2, 1
  02ef650  fctiwz 1, 1
  02ef654  vspltw 2, 2, 0
  02ef658  stfd 1, 208(1)
  02ef65c  lwz 4, 212(1)
  02ef660  stvewx 2, 3, 30
  02ef664  extsw 3, 4
  02ef668  bl 0x502730
  02ef66c  nop
  02ef670  lfs 2, 4(29)
  02ef674  fdivs 1, 2, 1
  02ef678  lis 3, 165
  02ef67c  addic 3, 3, 7136
  02ef680  lwz 4, 132(30)
  02ef684  slwi 4, 4, 2
  02ef688  extsw 4, 4
  02ef68c  lwzx 3, 3, 4
  02ef690  stfs 1, 112(30)
  02ef694  lfs 1, 16(3)
  02ef698  stfs 1, 16(31)
  02ef69c  lfs 1, 20(3)
  02ef6a0  stfs 1, 20(31)
  02ef6a4  lfs 1, 24(3)
  02ef6a8  stfs 1, 24(31)
  02ef6ac  lfs 1, 28(3)
  02ef6b0  stfs 1, 28(31)
  02ef6b4  ori 3, 31, 0
  02ef6b8  bl 0xefe40
  02ef6bc  nop
  02ef6c0  lis 3, 47
  02ef6c4  addi 3, 3, -3328
  02ef6c8  lfs 2, 8(3)
  02ef6cc  fcmpu 0, 1, 2
  02ef6d0  bt 0, 0x2ef6dc
  02ef6d4  ori 3, 31, 0
  02ef6d8  bl 0x2ef040
  02ef6dc  lbz 3, 112(31)
  02ef6e0  rlwinm 3, 3, 0, 30, 30
  02ef6e4  cmpwi 3, 0
  02ef6e8  bt 2, 0x2ef98c
  02ef6ec  lbz 3, 82(31)
  02ef6f0  lbz 4, 83(31)
  02ef6f4  cmpw 3, 4
  02ef6f8  bf 2, 0x2ef98c
  02ef6fc  li 6, 4
  02ef700  ori 3, 31, 0
  02ef704  li 4, 0
  02ef708  li 5, 0
  02ef70c  stb 6, 32(31)
  02ef710  li 6, 10
  02ef714  bl 0xfddc0
  02ef718  nop
  02ef71c  lis 3, 16256
  02ef720  stw 3, 88(31)
  02ef724  b 0x2ef98c
  02ef728  ori 3, 31, 0
  02ef72c  bl 0x2ef040
  02ef730  cmpwi 3, 0
  02ef734  bt 2, 0x2ef98c
  02ef738  li 3, 5
  02ef73c  vspltisw 4, -1
  02ef740  lis 4, 128
  02ef744  li 5, -5112
  02ef748  lis 6, 47
  02ef74c  stb 3, 32(31)
  02ef750  addi 3, 6, -3328
  02ef754  vslw 4, 4, 4
  02ef758  <unknown>
  02ef75c  li 4, -3056
  02ef760  vcfsx 2, 2, 0
  02ef764  <unknown>
  02ef768  lis 3, 114
  02ef76c  vspltw 3, 3, 0
  02ef770  <unknown>
  02ef774  li 3, 108
  02ef778  vaddfp 2, 2, 3
  02ef77c  vmaddfp 2, 5, 2, 4
  02ef780  vctsxs 2, 2, 0
  02ef784  vspltw 2, 2, 0
  02ef788  stvewx 2, 3, 30
  02ef78c  b 0x2ef98c
  02ef790  lis 3, 162
  02ef794  lwz 5, 96(30)
  02ef798  lis 6, 114
  02ef79c  slwi 8, 5, 5
  02ef7a0  lis 7, 128
  02ef7a4  addic 4, 31, 16
  02ef7a8  lwz 3, -22436(3)
  02ef7ac  addic 5, 30, 100
  02ef7b0  lfs 1, -3052(6)
  02ef7b4  addc 3, 3, 8
  02ef7b8  lfs 2, -5116(7)
  02ef7bc  addic 6, 30, 104
  02ef7c0  clrldi 3, 3, 32
  02ef7c4  li 8, 0
  02ef7c8  fmuls 1, 1, 2
  02ef7cc  lwz 3, 16(3)
  02ef7d0  bl 0x10ce18
  02ef7d4  nop
  02ef7d8  b 0x2ef98c
  02ef7dc  ori 3, 31, 0
  02ef7e0  bl 0x2edb38
  02ef7e4  addic 29, 31, 16
  02ef7e8  lwz 4, 460(30)
  02ef7ec  ori 3, 29, 0
  02ef7f0  extsw 4, 4
  02ef7f4  bl 0x110b70
  02ef7f8  nop
  02ef7fc  cmpwi 3, 0
  02ef800  bt 2, 0x2ef98c
  02ef804  addic 28, 1, 192
  02ef808  ori 3, 31, 0
  02ef80c  li 4, 2
  02ef810  ori 5, 28, 0
  02ef814  bl 0xf1114
  02ef818  nop
  02ef81c  ori 3, 31, 0
  02ef820  ori 4, 28, 0
  02ef824  bl 0x3426d8
  02ef828  nop
  02ef82c  cmpwi 3, 0
  02ef830  bt 2, 0x2ef8fc
  02ef834  lis 4, 47
  02ef838  lfs 1, 72(31)
  02ef83c  addi 4, 4, -3328
  02ef840  lfs 2, 12(4)
  02ef844  lfs 3, 16(4)
  02ef848  fadds 2, 1, 2
  02ef84c  fsubs 5, 3, 1
  02ef850  lfs 4, 20(4)
  02ef854  fsubs 3, 3, 2
  02ef858  fsub 7, 1, 5
  02ef85c  fsubs 6, 4, 2
  02ef860  fsubs 4, 4, 1
  02ef864  fsub 8, 2, 3
  02ef868  fsel 1, 7, 5, 1
  02ef86c  lfs 5, 24(4)
  02ef870  fsel 2, 8, 3, 2
  02ef874  fsub 3, 4, 1
  02ef878  fsub 8, 6, 2
  02ef87c  fsel 1, 3, 4, 1
  02ef880  lfs 3, 28(4)
  02ef884  lfs 4, 32(4)
  02ef888  lfs 9, 36(4)
  02ef88c  fsel 2, 8, 6, 2
  02ef890  fmuls 6, 1, 1
  02ef894  fmuls 7, 2, 2
  02ef898  fmuls 8, 6, 1
  02ef89c  fmuls 11, 7, 2
  02ef8a0  fmuls 12, 6, 8
  02ef8a4  fmadds 1, 8, 5, 1
  02ef8a8  lfs 8, 40(4)
  02ef8ac  lis 4, 114
  02ef8b0  lfs 10, -3064(4)
  02ef8b4  fmuls 13, 7, 11
  02ef8b8  fmadds 2, 11, 5, 2
  02ef8bc  fmuls 5, 6, 12
  02ef8c0  fmadds 1, 12, 3, 1
  02ef8c4  fmuls 8, 10, 8
  02ef8c8  lwz 3, 120(3)
  02ef8cc  fmuls 10, 7, 13
  02ef8d0  fmadds 2, 13, 3, 2
  02ef8d4  fmuls 3, 6, 5
  02ef8d8  fmadds 1, 5, 4, 1
  02ef8dc  fmuls 5, 7, 10
  02ef8e0  fmadds 2, 10, 4, 2
  02ef8e4  fmadds 1, 3, 9, 1
  02ef8e8  fmadds 2, 5, 9, 2
  02ef8ec  fmuls 1, 8, 1
  02ef8f0  fmuls 2, 8, 2
  02ef8f4  stfs 1, 4(3)
  02ef8f8  stfs 2, 0(3)
  02ef8fc  lis 4, 128
  02ef900  ori 3, 31, 0
  02ef904  addic 4, 4, -5072
  02ef908  li 5, 0
  02ef90c  bl 0x363aa0
  02ef910  nop
  02ef914  lis 3, 47
  02ef918  li 6, 1
  02ef91c  addi 3, 3, -3328
  02ef920  li 7, 5
  02ef924  li 11, -1
  02ef928  li 12, 0
  02ef92c  addic 4, 30, 64
  02ef930  lfs 1, 44(3)
  02ef934  lfs 3, 48(3)
  02ef938  ori 5, 29, 0
  02ef93c  lfs 4, 52(3)
  02ef940  li 8, 5
  02ef944  lfs 5, 56(3)
  02ef948  li 9, 2
  02ef94c  lfs 6, 4(3)
  02ef950  li 10, 4
  02ef954  lfs 7, 60(3)
  02ef958  fmr 2, 1
  02ef95c  std 6, 144(1)
  02ef960  ori 3, 31, 0
  02ef964  std 6, 160(1)
  02ef968  std 7, 168(1)
  02ef96c  std 11, 176(1)
  02ef970  std 12, 184(1)
  02ef974  bl 0x10e030
  02ef978  nop
  02ef97c  ori 3, 31, 0
  02ef980  bl 0xefb38
  02ef984  nop
  02ef988  b 0x2ef994
  02ef98c  ori 3, 31, 0
  02ef990  bl 0x2ed768
  02ef994  ld 0, 272(1)
  02ef998  mtlr 0
  02ef99c  ld 28, 224(1)
  02ef9a0  ld 29, 232(1)
  02ef9a4  ld 30, 240(1)
  02ef9a8  ld 31, 248(1)
  02ef9ac  addi 1, 1, 256
  02ef9b0  blr
