# game/update/moby1208.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1208:   # 0x1ff4d0, 0x614 bytes
  01ff4d0  stdu 1, -448(1)
  01ff4d4  mflr 0
  01ff4d8  std 0, 464(1)
  01ff4dc  stfd 18, 336(1)
  01ff4e0  stfd 19, 344(1)
  01ff4e4  stfd 20, 352(1)
  01ff4e8  stfd 21, 360(1)
  01ff4ec  stfd 22, 368(1)
  01ff4f0  stfd 23, 376(1)
  01ff4f4  stfd 24, 384(1)
  01ff4f8  stfd 25, 392(1)
  01ff4fc  stfd 26, 400(1)
  01ff500  stfd 27, 408(1)
  01ff504  stfd 28, 416(1)
  01ff508  stfd 29, 424(1)
  01ff50c  stfd 30, 432(1)
  01ff510  stfd 31, 440(1)
  01ff514  std 31, 328(1)
  01ff518  lbz 4, 32(3)
  01ff51c  std 30, 320(1)
  01ff520  ori 31, 3, 0
  01ff524  lwz 30, 120(3)
  01ff528  cmpwi 4, 0
  01ff52c  cmpwi 1, 4, 1
  01ff530  std 29, 312(1)
  01ff534  std 28, 304(1)
  01ff538  std 27, 296(1)
  01ff53c  std 26, 288(1)
  01ff540  std 25, 280(1)
  01ff544  std 24, 272(1)
  01ff548  std 23, 264(1)
  01ff54c  std 22, 256(1)
  01ff550  cmpwi 6, 4, -1
  01ff554  bt 1, 0x1ff560
  01ff558  bf 25, 0x1ffa74
  01ff55c  b 0x1ff568
  01ff560  bf 5, 0x1ff578
  01ff564  b 0x1ffa74
  01ff568  ori 3, 31, 0
  01ff56c  bl 0xefb38
  01ff570  nop
  01ff574  b 0x1ffa74
  01ff578  lfs 1, 16(31)
  01ff57c  lfs 2, 0(30)
  01ff580  fadds 1, 1, 2
  01ff584  lis 3, 32
  01ff588  lfs 2, 20(31)
  01ff58c  lis 5, 118
  01ff590  lfs 3, 24(31)
  01ff594  addi 4, 3, -2944
  01ff598  lis 6, 114
  01ff59c  addic 3, 30, 8
  01ff5a0  stfs 1, 16(31)
  01ff5a4  lfs 1, 4(30)
  01ff5a8  fadds 1, 2, 1
  01ff5ac  stfs 1, 20(31)
  01ff5b0  lfs 1, 8(30)
  01ff5b4  fadds 1, 3, 1
  01ff5b8  stfs 1, 24(31)
  01ff5bc  lfs 31, 0(4)
  01ff5c0  lfs 2, 26024(5)
  01ff5c4  lfs 1, -3048(6)
  01ff5c8  fmuls 2, 2, 1
  01ff5cc  fmr 1, 31
  01ff5d0  bl 0x109af0
  01ff5d4  nop
  01ff5d8  lfs 1, 4(30)
  01ff5dc  lfs 2, 0(30)
  01ff5e0  fmuls 1, 1, 1
  01ff5e4  lis 3, 115
  01ff5e8  addic 3, 3, 22784
  01ff5ec  fmadds 1, 2, 2, 1
  01ff5f0  fsqrts 5, 1
  01ff5f4  lfs 1, 16(31)
  01ff5f8  lfs 2, 20(31)
  01ff5fc  lfs 3, 24(31)
  01ff600  lfs 4, 28(31)
  01ff604  lwz 4, 8(30)
  01ff608  lfs 6, 8(30)
  01ff60c  fabs 6, 6
  01ff610  rlwinm 4, 4, 3, 29, 29
  01ff614  fabs 8, 5
  01ff618  stfs 5, 192(1)
  01ff61c  fsubs 5, 8, 6
  01ff620  stfs 5, 196(1)
  01ff624  lwz 5, 192(1)
  01ff628  lfs 5, 192(1)
  01ff62c  lwz 6, 196(1)
  01ff630  fabs 7, 5
  01ff634  lfs 5, 196(1)
  01ff638  rlwimi 4, 6, 2, 30, 30
  01ff63c  fsub 9, 5, 31
  01ff640  fsub 10, 5, 31
  01ff644  rlwimi 4, 5, 4, 28, 28
  01ff648  ori 5, 3, 0
  01ff64c  rlwimi 5, 4, 2, 26, 28
  01ff650  slwi 4, 4, 2
  01ff654  clrldi 5, 5, 32
  01ff658  fsel 7, 9, 7, 6
  01ff65c  lfsx 30, 3, 4
  01ff660  lfs 5, 4(5)
  01ff664  fsel 6, 10, 6, 8
  01ff668  fcmpu 0, 7, 31
  01ff66c  bt 1, 0x1ff678
  01ff670  fmr 30, 31
  01ff674  b 0x1ff79c
  01ff678  fsubs 8, 6, 7
  01ff67c  fadds 6, 6, 7
  01ff680  addic 3, 1, 16
  01ff684  li 7, 2
  01ff688  addic 4, 3, 184
  01ff68c  addic 5, 3, 200
  01ff690  mtctr 7
  01ff694  fdivs 6, 8, 6
  01ff698  fmuls 7, 6, 6
  01ff69c  stfs 6, 212(1)
  01ff6a0  stfs 6, 204(1)
  01ff6a4  stfs 6, 208(1)
  01ff6a8  stfs 6, 200(1)
  01ff6ac  lfs 9, 212(1)
  01ff6b0  lfs 10, 204(1)
  01ff6b4  lfs 11, 208(1)
  01ff6b8  fmuls 8, 7, 7
  01ff6bc  fmuls 10, 10, 7
  01ff6c0  fmuls 9, 9, 8
  01ff6c4  fmuls 6, 8, 8
  01ff6c8  fmuls 8, 11, 8
  01ff6cc  stfs 10, 204(1)
  01ff6d0  fmuls 7, 9, 7
  01ff6d4  stfs 8, 208(1)
  01ff6d8  stfs 7, 212(1)
  01ff6dc  lfs 7, 184(3)
  01ff6e0  fmuls 7, 7, 6
  01ff6e4  stfs 7, 200(3)
  01ff6e8  lfs 7, 4(4)
  01ff6ec  addic 3, 3, 8
  01ff6f0  addic 4, 4, 8
  01ff6f4  fmuls 7, 7, 6
  01ff6f8  stfs 7, 4(5)
  01ff6fc  addic 5, 5, 8
  01ff700  bdnz 0x1ff6dc
  01ff704  ori 3, 1, 0
  01ff708  lis 4, 115
  01ff70c  li 8, 4
  01ff710  addic 5, 3, 200
  01ff714  addic 4, 4, 22752
  01ff718  ori 6, 5, 0
  01ff71c  mtctr 8
  01ff720  lfs 6, 200(3)
  01ff724  lfs 7, 0(4)
  01ff728  fmuls 6, 6, 7
  01ff72c  lfs 7, 4(4)
  01ff730  addic 4, 4, 8
  01ff734  stfs 6, 200(3)
  01ff738  lfs 6, 4(5)
  01ff73c  addic 3, 3, 8
  01ff740  fmuls 6, 6, 7
  01ff744  stfs 6, 4(5)
  01ff748  addic 5, 5, 8
  01ff74c  bdnz 0x1ff720
  01ff750  fmr 6, 31
  01ff754  ori 3, 1, 0
  01ff758  mtctr 7
  01ff75c  lfs 7, 200(3)
  01ff760  fadds 6, 6, 7
  01ff764  addic 3, 3, 16
  01ff768  lfs 7, 4(6)
  01ff76c  lfs 8, 8(6)
  01ff770  lfs 9, 12(6)
  01ff774  addic 6, 6, 16
  01ff778  fadds 6, 6, 7
  01ff77c  fadds 6, 6, 8
  01ff780  fadds 6, 6, 9
  01ff784  bdnz 0x1ff75c
  01ff788  lis 3, 32
  01ff78c  addi 3, 3, -2944
  01ff790  lfs 7, 4(3)
  01ff794  fadds 6, 6, 7
  01ff798  fmadds 30, 6, 30, 5
  01ff79c  lis 3, 32
  01ff7a0  addi 3, 3, -2944
  01ff7a4  lis 24, 165
  01ff7a8  li 29, 0
  01ff7ac  lfs 5, 8(3)
  01ff7b0  stfs 1, 144(1)
  01ff7b4  fsubs 1, 5, 30
  01ff7b8  stfs 2, 148(1)
  01ff7bc  stfs 3, 152(1)
  01ff7c0  stfs 4, 156(1)
  01ff7c4  addic 27, 1, 160
  01ff7c8  lis 26, 114
  01ff7cc  lis 25, 118
  01ff7d0  addic 24, 24, 10244
  01ff7d4  stfs 1, 68(31)
  01ff7d8  lfs 1, 16(3)
  01ff7dc  lfs 30, 0(30)
  01ff7e0  lfs 29, 12(3)
  01ff7e4  fmuls 2, 30, 1
  01ff7e8  lfs 28, 4(30)
  01ff7ec  lfs 27, 8(30)
  01ff7f0  stfs 2, 160(1)
  01ff7f4  lfs 2, 4(30)
  01ff7f8  fmuls 2, 2, 1
  01ff7fc  stfs 2, 164(1)
  01ff800  lfs 2, 8(30)
  01ff804  fmuls 1, 2, 1
  01ff808  stfs 1, 168(1)
  01ff80c  lfs 1, 12(30)
  01ff810  stfs 1, 172(1)
  01ff814  lfs 26, 20(3)
  01ff818  lfs 25, 24(3)
  01ff81c  lfs 24, 28(3)
  01ff820  lfs 23, 32(3)
  01ff824  lfs 22, 36(3)
  01ff828  lfs 21, 40(3)
  01ff82c  lfs 20, 44(3)
  01ff830  lfs 19, 48(3)
  01ff834  lfs 18, 52(3)
  01ff838  fmr 1, 26
  01ff83c  fmr 2, 25
  01ff840  bl 0xfcbe8
  01ff844  nop
  01ff848  bl 0x502758
  01ff84c  nop
  01ff850  extsw 3, 3
  01ff854  fmr 1, 24
  01ff858  fmr 2, 23
  01ff85c  std 3, 232(1)
  01ff860  lfs 3, -3056(26)
  01ff864  lwz 3, 26028(25)
  01ff868  lfd 4, 232(1)
  01ff86c  fcfid 4, 4
  01ff870  srawi 28, 3, 24
  01ff874  clrlwi 23, 3, 8
  01ff878  frsp 4, 4
  01ff87c  fadds 4, 4, 29
  01ff880  fmuls 3, 3, 4
  01ff884  fctiwz 3, 3
  01ff888  stfd 3, 232(1)
  01ff88c  lwz 3, 236(1)
  01ff890  extsw 22, 3
  01ff894  bl 0xfcbe8
  01ff898  nop
  01ff89c  addic 3, 1, 144
  01ff8a0  ori 6, 28, 0
  01ff8a4  fmr 2, 22
  01ff8a8  ori 4, 27, 0
  01ff8ac  fmr 3, 21
  01ff8b0  ori 5, 22, 0
  01ff8b4  fmr 4, 20
  01ff8b8  ori 7, 23, 0
  01ff8bc  fmr 5, 31
  01ff8c0  li 8, 3
  01ff8c4  bl 0x12e3e8
  01ff8c8  nop
  01ff8cc  ori 28, 3, 0
  01ff8d0  cmpwi 28, 0
  01ff8d4  bt 2, 0x1ff8f8
  01ff8d8  lwz 3, 92(24)
  01ff8dc  fmr 1, 19
  01ff8e0  lbz 3, 0(3)
  01ff8e4  stb 3, 2(28)
  01ff8e8  bl 0x502758
  01ff8ec  nop
  01ff8f0  addic 3, 3, 128
  01ff8f4  stb 3, 9(28)
  01ff8f8  lfs 3, 144(1)
  01ff8fc  fmr 1, 29
  01ff900  lfs 4, 148(1)
  01ff904  addic 3, 1, 176
  01ff908  fmadds 3, 30, 29, 3
  01ff90c  lfs 5, 152(1)
  01ff910  fmadds 4, 28, 29, 4
  01ff914  fmadds 5, 27, 29, 5
  01ff918  fmr 2, 18
  01ff91c  stfs 3, 144(1)
  01ff920  stfs 4, 148(1)
  01ff924  stfs 5, 152(1)
  01ff928  bl 0xfea60
  01ff92c  nop
  01ff930  lfs 1, 144(1)
  01ff934  addic 29, 29, 1
  01ff938  lfs 2, 176(1)
  01ff93c  lfs 3, 148(1)
  01ff940  fadds 1, 1, 2
  01ff944  cmpwi 29, 2
  01ff948  lfs 2, 180(1)
  01ff94c  lfs 4, 152(1)
  01ff950  fadds 2, 3, 2
  01ff954  lfs 3, 184(1)
  01ff958  fadds 3, 4, 3
  01ff95c  stfs 1, 144(1)
  01ff960  stfs 2, 148(1)
  01ff964  stfs 3, 152(1)
  01ff968  bt 0, 0x1ff838
  01ff96c  lis 3, 32
  01ff970  lfs 1, -3056(26)
  01ff974  lis 5, 118
  01ff978  addi 9, 3, -2944
  01ff97c  fmr 3, 21
  01ff980  addic 3, 31, 16
  01ff984  fmr 5, 31
  01ff988  ori 4, 27, 0
  01ff98c  li 8, 3
  01ff990  lfs 2, 56(9)
  01ff994  lwz 7, 26028(25)
  01ff998  fmuls 1, 1, 2
  01ff99c  lwz 6, 26032(5)
  01ff9a0  clrlwi 7, 7, 8
  01ff9a4  srawi 6, 6, 24
  01ff9a8  fctiwz 1, 1
  01ff9ac  stfd 1, 232(1)
  01ff9b0  lwz 5, 236(1)
  01ff9b4  lfs 1, 60(9)
  01ff9b8  lfs 2, 64(9)
  01ff9bc  extsw 5, 5
  01ff9c0  lfs 4, 68(9)
  01ff9c4  bl 0x12e3e8
  01ff9c8  nop
  01ff9cc  ori 27, 3, 0
  01ff9d0  cmpwi 27, 0
  01ff9d4  bt 2, 0x1ff9ec
  01ff9d8  fmr 1, 19
  01ff9dc  bl 0x502758
  01ff9e0  nop
  01ff9e4  addic 3, 3, 128
  01ff9e8  stb 3, 9(27)
  01ff9ec  lbz 3, 49(31)
  01ff9f0  cmpwi 3, 0
  01ff9f4  bf 2, 0x1ffa0c
  01ff9f8  addic 3, 30, 16
  01ff9fc  bl 0x4fff60
  01ffa00  nop
  01ffa04  lwz 30, 16(30)
  01ffa08  b 0x1ffa60
  01ffa0c  lis 3, 32
  01ffa10  li 4, 72
  01ffa14  vspltisw 2, -1
  01ffa18  addi 3, 3, -2944
  01ffa1c  lfs 1, -3056(26)
  01ffa20  li 5, -3056
  01ffa24  vslw 2, 2, 2
  01ffa28  <unknown>
  01ffa2c  lfs 2, 72(3)
  01ffa30  vspltw 3, 3, 0
  01ffa34  li 3, 16
  01ffa38  <unknown>
  01ffa3c  fmuls 1, 1, 2
  01ffa40  vmaddfp 2, 4, 3, 2
  01ffa44  fctiwz 1, 1
  01ffa48  vctsxs 2, 2, 0
  01ffa4c  stfd 1, 232(1)
  01ffa50  lwz 4, 236(1)
  01ffa54  vspltw 2, 2, 0
  01ffa58  stvewx 2, 3, 30
  01ffa5c  ori 30, 4, 0
  01ffa60  cmpwi 30, 0
  01ffa64  bf 2, 0x1ffa74
  01ffa68  ori 3, 31, 0
  01ffa6c  bl 0xefb38
  01ffa70  nop
  01ffa74  ld 0, 464(1)
  01ffa78  mtlr 0
  01ffa7c  lfd 18, 336(1)
  01ffa80  lfd 19, 344(1)
  01ffa84  lfd 20, 352(1)
  01ffa88  lfd 21, 360(1)
  01ffa8c  lfd 22, 368(1)
  01ffa90  lfd 23, 376(1)
  01ffa94  lfd 24, 384(1)
  01ffa98  lfd 25, 392(1)
  01ffa9c  lfd 26, 400(1)
  01ffaa0  lfd 27, 408(1)
  01ffaa4  lfd 28, 416(1)
  01ffaa8  lfd 29, 424(1)
  01ffaac  lfd 30, 432(1)
  01ffab0  lfd 31, 440(1)
  01ffab4  ld 22, 256(1)
  01ffab8  ld 23, 264(1)
  01ffabc  ld 24, 272(1)
  01ffac0  ld 25, 280(1)
  01ffac4  ld 26, 288(1)
  01ffac8  ld 27, 296(1)
  01ffacc  ld 28, 304(1)
  01ffad0  ld 29, 312(1)
  01ffad4  ld 30, 320(1)
  01ffad8  ld 31, 328(1)
  01ffadc  addi 1, 1, 448
  01ffae0  blr
