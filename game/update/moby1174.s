# game/update/moby1174.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1174_001ed784:   # 0x1ed784, 0x14 bytes
  01ed784  lis 3, 118
  01ed788  lis 4, 1
  01ed78c  addic 3, 3, 23860
  01ed790  stw 4, 72(3)
  01ed794  blr

UpdateMoby_1174:   # 0x1ed7a8, 0x830 bytes
  01ed7a8  stdu 1, -320(1)
  01ed7ac  mflr 0
  01ed7b0  std 0, 336(1)
  01ed7b4  stfd 30, 304(1)
  01ed7b8  stfd 31, 312(1)
  01ed7bc  lfs 2, 16(3)
  01ed7c0  std 31, 296(1)
  01ed7c4  lfs 4, 20(3)
  01ed7c8  ori 31, 3, 0
  01ed7cc  std 30, 288(1)
  01ed7d0  lfs 6, 24(3)
  01ed7d4  lwz 30, 120(3)
  01ed7d8  lfs 1, 28(3)
  01ed7dc  fneg 3, 4
  01ed7e0  lfs 7, 64(3)
  01ed7e4  fneg 5, 6
  01ed7e8  stfs 1, 124(1)
  01ed7ec  fneg 1, 2
  01ed7f0  lfs 8, 68(3)
  01ed7f4  stfs 7, 128(1)
  01ed7f8  lfs 7, 72(3)
  01ed7fc  stfs 8, 132(1)
  01ed800  lfs 8, 76(3)
  01ed804  lbz 3, 32(3)
  01ed808  stfs 7, 136(1)
  01ed80c  stfs 8, 140(1)
  01ed810  cmpwi 3, 0
  01ed814  cmpwi 1, 3, 1
  01ed818  cmpwi 6, 3, -1
  01ed81c  stfs 1, 112(1)
  01ed820  stfs 3, 116(1)
  01ed824  std 29, 280(1)
  01ed828  std 28, 272(1)
  01ed82c  std 27, 264(1)
  01ed830  std 26, 256(1)
  01ed834  stfs 5, 120(1)
  01ed838  bt 1, 0x1ed844
  01ed83c  bf 25, 0x1edf78
  01ed840  b 0x1ed84c
  01ed844  bf 5, 0x1ed8d4
  01ed848  b 0x1edf78
  01ed84c  lwz 3, 96(30)
  01ed850  cmpwi 3, -1
  01ed854  bf 2, 0x1ed880
  01ed858  lis 3, 101
  01ed85c  lhz 4, 178(31)
  01ed860  addic 3, 3, 19536
  01ed864  extsh 4, 4
  01ed868  bl 0x5cd098
  01ed86c  nop
  01ed870  ori 3, 31, 0
  01ed874  bl 0xefb38
  01ed878  nop
  01ed87c  b 0x1edfa8
  01ed880  lis 4, 165
  01ed884  slwi 3, 3, 2
  01ed888  addic 4, 4, 7136
  01ed88c  extsw 3, 3
  01ed890  lwzx 3, 4, 3
  01ed894  lwz 3, 0(3)
  01ed898  cmpwi 3, 0
  01ed89c  bf 2, 0x1ed8c8
  01ed8a0  lis 3, 101
  01ed8a4  lhz 4, 178(31)
  01ed8a8  addic 3, 3, 19576
  01ed8ac  extsh 4, 4
  01ed8b0  bl 0x5cd098
  01ed8b4  nop
  01ed8b8  ori 3, 31, 0
  01ed8bc  bl 0xefb38
  01ed8c0  nop
  01ed8c4  b 0x1edfa8
  01ed8c8  li 3, 1
  01ed8cc  stb 3, 32(31)
  01ed8d0  b 0x1edf78
  01ed8d4  lis 3, 165
  01ed8d8  addic 29, 3, 7136
  01ed8dc  lwz 3, 96(30)
  01ed8e0  slwi 3, 3, 2
  01ed8e4  extsw 3, 3
  01ed8e8  lis 4, 114
  01ed8ec  lwzx 29, 29, 3
  01ed8f0  lis 3, 118
  01ed8f4  lfs 1, 20(29)
  01ed8f8  lfs 2, 36(29)
  01ed8fc  lfs 3, 16(29)
  01ed900  fsubs 1, 1, 2
  01ed904  lfs 2, 32(29)
  01ed908  fsubs 2, 3, 2
  01ed90c  lfs 3, 24(29)
  01ed910  lfs 4, 40(29)
  01ed914  fsubs 3, 3, 4
  01ed918  fmuls 1, 1, 1
  01ed91c  fmadds 1, 2, 2, 1
  01ed920  lfs 2, 23972(3)
  01ed924  fmadds 1, 3, 3, 1
  01ed928  lfs 3, -3052(4)
  01ed92c  fmuls 2, 2, 3
  01ed930  lfs 31, 104(30)
  01ed934  fsqrts 1, 1
  01ed938  fdivs 1, 2, 1
  01ed93c  fadds 31, 31, 1
  01ed940  stfs 31, 104(30)
  01ed944  lwz 3, 0(29)
  01ed948  addic 3, 3, -1
  01ed94c  extsw 3, 3
  01ed950  std 3, 232(1)
  01ed954  lfd 1, 232(1)
  01ed958  fcfid 1, 1
  01ed95c  frsp 1, 1
  01ed960  fcmpu 0, 31, 1
  01ed964  cror 6, 0, 2
  01ed968  bt 6, 0x1ed994
  01ed96c  fmr 1, 31
  01ed970  bl 0x502758
  01ed974  nop
  01ed978  extsw 3, 3
  01ed97c  std 3, 232(1)
  01ed980  lfd 1, 232(1)
  01ed984  fcfid 1, 1
  01ed988  frsp 1, 1
  01ed98c  fsubs 31, 31, 1
  01ed990  stfs 31, 104(30)
  01ed994  fmr 1, 31
  01ed998  bl 0x502758
  01ed99c  nop
  01ed9a0  extsw 4, 3
  01ed9a4  std 4, 232(1)
  01ed9a8  sldi 4, 3, 4
  01ed9ac  lfs 1, 104(30)
  01ed9b0  addc 4, 29, 4
  01ed9b4  clrldi 4, 4, 32
  01ed9b8  addic 3, 3, 2
  01ed9bc  lfs 3, 32(4)
  01ed9c0  lfs 2, 16(4)
  01ed9c4  lfs 4, 36(4)
  01ed9c8  lfs 5, 20(4)
  01ed9cc  fsubs 6, 3, 2
  01ed9d0  lfs 7, 40(4)
  01ed9d4  lfs 8, 24(4)
  01ed9d8  lfd 10, 232(1)
  01ed9dc  fsubs 9, 4, 5
  01ed9e0  fsubs 11, 7, 8
  01ed9e4  fcfid 10, 10
  01ed9e8  lfs 12, 44(4)
  01ed9ec  stfs 12, 28(31)
  01ed9f0  frsp 10, 10
  01ed9f4  fsubs 10, 1, 10
  01ed9f8  fmadds 6, 10, 6, 2
  01ed9fc  fmadds 5, 10, 9, 5
  01eda00  fmadds 8, 10, 11, 8
  01eda04  stfs 6, 16(31)
  01eda08  stfs 5, 20(31)
  01eda0c  stfs 8, 24(31)
  01eda10  lwz 4, 0(29)
  01eda14  divw 5, 3, 4
  01eda18  mullw 4, 5, 4
  01eda1c  subc 3, 3, 4
  01eda20  sldi 3, 3, 4
  01eda24  addc 3, 29, 3
  01eda28  clrldi 3, 3, 32
  01eda2c  lfs 1, 20(3)
  01eda30  lfs 2, 16(3)
  01eda34  fsubs 1, 1, 4
  01eda38  fsubs 9, 2, 3
  01eda3c  fmadds 2, 10, 1, 4
  01eda40  fmadds 1, 10, 9, 3
  01eda44  fsubs 3, 5, 2
  01eda48  fsubs 4, 6, 1
  01eda4c  lfs 5, 24(3)
  01eda50  fsubs 5, 5, 7
  01eda54  lfs 6, 72(31)
  01eda58  lis 3, 31
  01eda5c  addi 4, 3, -10344
  01eda60  fmuls 3, 3, 3
  01eda64  lis 3, 115
  01eda68  addic 3, 3, 22784
  01eda6c  fmadds 3, 4, 4, 3
  01eda70  fmadds 4, 10, 5, 7
  01eda74  fsqrts 3, 3
  01eda78  fsubs 4, 4, 8
  01eda7c  fabs 8, 4
  01eda80  stfs 4, 160(1)
  01eda84  fabs 7, 3
  01eda88  stfs 3, 156(1)
  01eda8c  lwz 5, 160(1)
  01eda90  rlwinm 5, 5, 3, 29, 29
  01eda94  fsubs 3, 7, 8
  01eda98  stfs 3, 164(1)
  01eda9c  lwz 6, 156(1)
  01edaa0  lfs 31, 0(4)
  01edaa4  lfs 3, 156(1)
  01edaa8  lfs 4, 160(1)
  01edaac  lfs 5, 4(4)
  01edab0  fabs 9, 4
  01edab4  lwz 4, 164(1)
  01edab8  lfs 4, 164(1)
  01edabc  fabs 3, 3
  01edac0  rlwimi 5, 4, 2, 30, 30
  01edac4  fsub 10, 4, 31
  01edac8  fsub 11, 4, 31
  01edacc  rlwimi 5, 6, 4, 28, 28
  01edad0  ori 4, 3, 0
  01edad4  rlwimi 4, 5, 2, 26, 28
  01edad8  slwi 5, 5, 2
  01edadc  clrldi 4, 4, 32
  01edae0  fsel 8, 10, 3, 8
  01edae4  lfsx 3, 3, 5
  01edae8  lfs 4, 4(4)
  01edaec  fsel 7, 11, 9, 7
  01edaf0  fcmpu 0, 8, 31
  01edaf4  bt 1, 0x1edb00
  01edaf8  fmr 3, 31
  01edafc  b 0x1edc18
  01edb00  fsubs 9, 7, 8
  01edb04  fadds 7, 7, 8
  01edb08  addic 4, 1, 16
  01edb0c  li 7, 2
  01edb10  addic 5, 4, 184
  01edb14  addic 6, 4, 200
  01edb18  mtctr 7
  01edb1c  fdivs 7, 9, 7
  01edb20  fmuls 8, 7, 7
  01edb24  stfs 7, 212(1)
  01edb28  stfs 7, 204(1)
  01edb2c  stfs 7, 208(1)
  01edb30  stfs 7, 200(1)
  01edb34  lfs 10, 212(1)
  01edb38  lfs 11, 204(1)
  01edb3c  lfs 12, 208(1)
  01edb40  fmuls 9, 8, 8
  01edb44  fmuls 11, 11, 8
  01edb48  fmuls 10, 10, 9
  01edb4c  fmuls 7, 9, 9
  01edb50  fmuls 9, 12, 9
  01edb54  stfs 11, 204(1)
  01edb58  fmuls 8, 10, 8
  01edb5c  stfs 9, 208(1)
  01edb60  stfs 8, 212(1)
  01edb64  lfs 8, 184(4)
  01edb68  fmuls 8, 8, 7
  01edb6c  stfs 8, 200(4)
  01edb70  lfs 8, 4(5)
  01edb74  addic 4, 4, 8
  01edb78  addic 5, 5, 8
  01edb7c  fmuls 8, 8, 7
  01edb80  stfs 8, 4(6)
  01edb84  addic 6, 6, 8
  01edb88  bdnz 0x1edb64
  01edb8c  li 6, 4
  01edb90  ori 4, 1, 0
  01edb94  mtctr 6
  01edb98  lis 5, 115
  01edb9c  addic 6, 4, 200
  01edba0  addic 5, 5, 22752
  01edba4  ori 8, 6, 0
  01edba8  lfs 7, 200(4)
  01edbac  lfs 8, 0(5)
  01edbb0  fmuls 7, 7, 8
  01edbb4  lfs 8, 4(5)
  01edbb8  addic 5, 5, 8
  01edbbc  stfs 7, 200(4)
  01edbc0  lfs 7, 4(6)
  01edbc4  addic 4, 4, 8
  01edbc8  fmuls 7, 7, 8
  01edbcc  stfs 7, 4(6)
  01edbd0  addic 6, 6, 8
  01edbd4  bdnz 0x1edba8
  01edbd8  fmr 7, 31
  01edbdc  ori 4, 1, 0
  01edbe0  mtctr 7
  01edbe4  lfs 8, 200(4)
  01edbe8  fadds 7, 7, 8
  01edbec  addic 4, 4, 16
  01edbf0  lfs 8, 4(8)
  01edbf4  lfs 9, 8(8)
  01edbf8  lfs 10, 12(8)
  01edbfc  addic 8, 8, 16
  01edc00  fadds 7, 7, 8
  01edc04  fadds 7, 7, 9
  01edc08  fadds 7, 7, 10
  01edc0c  bdnz 0x1edbe4
  01edc10  fadds 7, 7, 5
  01edc14  fmadds 3, 7, 3, 4
  01edc18  fneg 3, 3
  01edc1c  stfs 3, 68(31)
  01edc20  stfs 6, 108(30)
  01edc24  lfs 3, 16(31)
  01edc28  lfs 4, 20(31)
  01edc2c  fsubs 1, 1, 3
  01edc30  fsubs 2, 2, 4
  01edc34  fabs 3, 1
  01edc38  fabs 4, 2
  01edc3c  stfs 1, 144(1)
  01edc40  stfs 2, 148(1)
  01edc44  fsubs 1, 3, 4
  01edc48  stfs 1, 152(1)
  01edc4c  lwz 4, 144(1)
  01edc50  lfs 1, 144(1)
  01edc54  lwz 5, 148(1)
  01edc58  lfs 2, 148(1)
  01edc5c  fabs 1, 1
  01edc60  lwz 6, 152(1)
  01edc64  rlwinm 5, 5, 3, 29, 29
  01edc68  lfs 6, 152(1)
  01edc6c  fabs 2, 2
  01edc70  rlwimi 5, 6, 2, 30, 30
  01edc74  fsub 7, 6, 31
  01edc78  fsub 6, 6, 31
  01edc7c  rlwimi 5, 4, 4, 28, 28
  01edc80  ori 4, 3, 0
  01edc84  rlwimi 4, 5, 2, 26, 28
  01edc88  slwi 5, 5, 2
  01edc8c  clrldi 4, 4, 32
  01edc90  fsel 4, 7, 1, 4
  01edc94  lfsx 1, 3, 5
  01edc98  fsel 3, 6, 2, 3
  01edc9c  lfs 2, 4(4)
  01edca0  fcmpu 0, 4, 31
  01edca4  bt 1, 0x1edcb0
  01edca8  fmr 5, 31
  01edcac  b 0x1eddc8
  01edcb0  fsubs 6, 3, 4
  01edcb4  fadds 3, 3, 4
  01edcb8  addic 3, 1, 16
  01edcbc  li 6, 2
  01edcc0  addic 4, 3, 152
  01edcc4  addic 5, 3, 168
  01edcc8  mtctr 6
  01edccc  fdivs 3, 6, 3
  01edcd0  fmuls 4, 3, 3
  01edcd4  stfs 3, 180(1)
  01edcd8  stfs 3, 172(1)
  01edcdc  stfs 3, 176(1)
  01edce0  stfs 3, 168(1)
  01edce4  lfs 7, 180(1)
  01edce8  lfs 8, 172(1)
  01edcec  lfs 9, 176(1)
  01edcf0  fmuls 6, 4, 4
  01edcf4  fmuls 8, 8, 4
  01edcf8  fmuls 7, 7, 6
  01edcfc  fmuls 3, 6, 6
  01edd00  fmuls 6, 9, 6
  01edd04  stfs 8, 172(1)
  01edd08  fmuls 4, 7, 4
  01edd0c  stfs 6, 176(1)
  01edd10  stfs 4, 180(1)
  01edd14  lfs 4, 152(3)
  01edd18  fmuls 4, 4, 3
  01edd1c  stfs 4, 168(3)
  01edd20  lfs 4, 4(4)
  01edd24  addic 3, 3, 8
  01edd28  addic 4, 4, 8
  01edd2c  fmuls 4, 4, 3
  01edd30  stfs 4, 4(5)
  01edd34  addic 5, 5, 8
  01edd38  bdnz 0x1edd14
  01edd3c  li 5, 4
  01edd40  ori 3, 1, 0
  01edd44  mtctr 5
  01edd48  lis 4, 115
  01edd4c  addic 5, 3, 168
  01edd50  addic 4, 4, 22752
  01edd54  ori 7, 5, 0
  01edd58  lfs 3, 168(3)
  01edd5c  lfs 4, 0(4)
  01edd60  fmuls 3, 3, 4
  01edd64  lfs 4, 4(4)
  01edd68  addic 4, 4, 8
  01edd6c  stfs 3, 168(3)
  01edd70  lfs 3, 4(5)
  01edd74  addic 3, 3, 8
  01edd78  fmuls 3, 3, 4
  01edd7c  stfs 3, 4(5)
  01edd80  addic 5, 5, 8
  01edd84  bdnz 0x1edd58
  01edd88  fmr 3, 31
  01edd8c  ori 3, 1, 0
  01edd90  mtctr 6
  01edd94  lfs 4, 168(3)
  01edd98  fadds 3, 3, 4
  01edd9c  addic 3, 3, 16
  01edda0  lfs 4, 4(7)
  01edda4  lfs 6, 8(7)
  01edda8  lfs 7, 12(7)
  01eddac  addic 7, 7, 16
  01eddb0  fadds 3, 3, 4
  01eddb4  fadds 3, 3, 6
  01eddb8  fadds 3, 3, 7
  01eddbc  bdnz 0x1edd94
  01eddc0  fadds 5, 3, 5
  01eddc4  fmadds 5, 5, 1, 2
  01eddc8  stfs 5, 72(31)
  01eddcc  fmr 2, 5
  01eddd0  lfs 1, 108(30)
  01eddd4  bl 0x5025e0
  01eddd8  nop
  01edddc  lis 3, 241
  01edde0  stfs 1, 108(30)
  01edde4  lwz 3, -29156(3)
  01edde8  cmpwi 3, 0
  01eddec  bt 2, 0x1ede5c
  01eddf0  lwz 3, 0(29)
  01eddf4  li 28, 0
  01eddf8  cmpwi 3, 0
  01eddfc  bf 1, 0x1ede5c
  01ede00  lis 3, 31
  01ede04  lis 4, -32768
  01ede08  addi 5, 3, -10344
  01ede0c  ori 4, 4, 255
  01ede10  ori 3, 29, 0
  01ede14  clrldi 27, 4, 32
  01ede18  lfs 30, 8(5)
  01ede1c  addic 26, 3, 16
  01ede20  ori 4, 31, 0
  01ede24  fmr 1, 30
  01ede28  ori 3, 26, 0
  01ede2c  li 10, 255
  01ede30  li 5, 4
  01ede34  ori 6, 27, 0
  01ede38  li 8, 127
  01ede3c  li 9, 2
  01ede40  bl 0x12d0e8
  01ede44  nop
  01ede48  lwz 4, 0(29)
  01ede4c  addic 28, 28, 1
  01ede50  ori 3, 26, 0
  01ede54  cmpw 28, 4
  01ede58  bt 0, 0x1ede1c
  01ede5c  lfs 4, 228(31)
  01ede60  lfs 3, 224(31)
  01ede64  fmuls 1, 4, 4
  01ede68  lfs 5, 232(31)
  01ede6c  lis 3, 118
  01ede70  fmadds 1, 3, 3, 1
  01ede74  fmadds 2, 5, 5, 1
  01ede78  lfs 1, 23968(3)
  01ede7c  fsqrts 2, 2
  01ede80  fcmpu 0, 2, 31
  01ede84  bf 2, 0x1ede9c
  01ede88  fmr 1, 31
  01ede8c  lfs 4, 236(31)
  01ede90  fmr 2, 1
  01ede94  fmr 3, 2
  01ede98  b 0x1edeb0
  01ede9c  fdivs 6, 1, 2
  01edea0  fmuls 2, 4, 6
  01edea4  fmuls 1, 3, 6
  01edea8  lfs 4, 236(31)
  01edeac  fmuls 3, 5, 6
  01edeb0  lfs 5, 196(31)
  01edeb4  lfs 6, 192(31)
  01edeb8  fmuls 7, 5, 5
  01edebc  lfs 8, 200(31)
  01edec0  lis 3, 241
  01edec4  lfs 9, -29160(3)
  01edec8  fmadds 7, 6, 6, 7
  01edecc  lis 3, 164
  01eded0  lfs 10, 16(31)
  01eded4  lwz 4, 100(30)
  01eded8  fmadds 7, 8, 8, 7
  01ededc  slwi 4, 4, 8
  01edee0  lwz 3, -28512(3)
  01edee4  addc 3, 3, 4
  01edee8  fsqrts 7, 7
  01edeec  clrldi 3, 3, 32
  01edef0  fdivs 9, 9, 7
  01edef4  fsub 11, 31, 7
  01edef8  fsub 12, 7, 31
  01edefc  fsub 13, 31, 7
  01edf00  fsub 0, 7, 31
  01edf04  fsub 30, 31, 7
  01edf08  fsub 7, 7, 31
  01edf0c  fmuls 6, 6, 9
  01edf10  fmuls 5, 5, 9
  01edf14  fmuls 8, 8, 9
  01edf18  fsel 9, 11, 31, 6
  01edf1c  fsel 11, 13, 31, 5
  01edf20  fsel 13, 30, 31, 8
  01edf24  fsel 6, 12, 9, 6
  01edf28  fsel 5, 0, 11, 5
  01edf2c  fsel 7, 7, 13, 8
  01edf30  fadds 1, 1, 6
  01edf34  fadds 2, 2, 5
  01edf38  fadds 3, 3, 7
  01edf3c  fadds 1, 1, 10
  01edf40  stfs 1, 16(3)
  01edf44  lfs 1, 20(31)
  01edf48  fadds 1, 2, 1
  01edf4c  stfs 1, 20(3)
  01edf50  lfs 1, 24(31)
  01edf54  stfs 4, 28(3)
  01edf58  fadds 1, 3, 1
  01edf5c  stfs 1, 24(3)
  01edf60  lfs 1, 112(1)
  01edf64  lfs 2, 16(31)
  01edf68  lfs 3, 116(1)
  01edf6c  lfs 4, 20(31)
  01edf70  lfs 5, 120(1)
  01edf74  lfs 6, 24(31)
  01edf78  fadds 1, 1, 2
  01edf7c  addic 3, 30, 32
  01edf80  fadds 2, 3, 4
  01edf84  addic 4, 1, 112
  01edf88  fadds 3, 5, 6
  01edf8c  addic 5, 1, 128
  01edf90  addic 6, 31, 64
  01edf94  stfs 1, 112(1)
  01edf98  stfs 2, 116(1)
  01edf9c  stfs 3, 120(1)
  01edfa0  bl 0x112900
  01edfa4  nop
  01edfa8  ld 0, 336(1)
  01edfac  mtlr 0
  01edfb0  lfd 30, 304(1)
  01edfb4  lfd 31, 312(1)
  01edfb8  ld 26, 256(1)
  01edfbc  ld 27, 264(1)
  01edfc0  ld 28, 272(1)
  01edfc4  ld 29, 280(1)
  01edfc8  ld 30, 288(1)
  01edfcc  ld 31, 296(1)
  01edfd0  addi 1, 1, 320
  01edfd4  blr
