# game/update/moby1475.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY1475:   # 0xeb4fc, 0x14 bytes
  00eb4fc  lis 3, 115
  00eb500  lis 4, 1
  00eb504  addic 3, 3, -29032
  00eb508  stw 4, 72(3)
  00eb50c  blr

Spawn_Moby1475_KaleboRocket:   # 0xeb520, 0x130 bytes
  00eb520  stdu 1, -160(1)
  00eb524  mflr 0
  00eb528  std 0, 176(1)
  00eb52c  stfd 30, 144(1)
  00eb530  stfd 31, 152(1)
  00eb534  std 29, 120(1)
  00eb538  ori 29, 3, 0
  00eb53c  li 3, 1475
  00eb540  std 31, 136(1)
  00eb544  fmr 31, 2
  00eb548  ori 31, 5, 0
  00eb54c  std 30, 128(1)
  00eb550  fmr 30, 1
  00eb554  ori 30, 4, 0
  00eb558  bl 0xefa28
  00eb55c  nop
  00eb560  cmpwi 3, 0
  00eb564  bt 2, 0xeb62c
  00eb568  li 4, 255
  00eb56c  li 5, 1
  00eb570  lwz 7, 120(3)
  00eb574  li 6, 0
  00eb578  stb 4, 48(3)
  00eb57c  sth 4, 50(3)
  00eb580  stb 5, 49(3)
  00eb584  stb 6, 32(3)
  00eb588  lis 4, 15
  00eb58c  stfs 30, 72(3)
  00eb590  lis 5, 114
  00eb594  stfs 31, 68(3)
  00eb598  addi 4, 4, -19184
  00eb59c  stw 29, 0(7)
  00eb5a0  lfs 1, 0(30)
  00eb5a4  stfs 1, 16(3)
  00eb5a8  lfs 1, 4(30)
  00eb5ac  stfs 1, 20(3)
  00eb5b0  lfs 1, 8(30)
  00eb5b4  stfs 1, 24(3)
  00eb5b8  lfs 1, 12(30)
  00eb5bc  stfs 1, 28(3)
  00eb5c0  stw 6, 20(7)
  00eb5c4  stw 6, 24(7)
  00eb5c8  lfs 1, 0(4)
  00eb5cc  lfs 2, -3052(5)
  00eb5d0  lfs 3, 4(4)
  00eb5d4  fmuls 1, 2, 1
  00eb5d8  stw 31, 8(7)
  00eb5dc  sth 6, 6(7)
  00eb5e0  li 5, 12
  00eb5e4  vspltisw 2, -1
  00eb5e8  lis 6, 114
  00eb5ec  li 8, -3056
  00eb5f0  li 9, 4
  00eb5f4  vslw 2, 2, 2
  00eb5f8  fmuls 1, 1, 3
  00eb5fc  stfs 1, 16(7)
  00eb600  lfs 1, 8(4)
  00eb604  lfs 2, 44(3)
  00eb608  fmuls 1, 2, 1
  00eb60c  stfs 1, 44(3)
  00eb610  lvlx 3, 5, 4
  00eb614  lvlx 4, 8, 6
  00eb618  vspltw 3, 3, 0
  00eb61c  vmaddfp 2, 4, 3, 2
  00eb620  vctsxs 2, 2, 0
  00eb624  vsplth 2, 2, 1
  00eb628  stvehx 2, 9, 7
  00eb62c  ld 0, 176(1)
  00eb630  mtlr 0
  00eb634  lfd 30, 144(1)
  00eb638  lfd 31, 152(1)
  00eb63c  ld 29, 120(1)
  00eb640  ld 30, 128(1)
  00eb644  ld 31, 136(1)
  00eb648  addi 1, 1, 160
  00eb64c  blr

UpdateMoby_1475_KaleboRace_Rocket:   # 0xeb6c0, 0xb88 bytes
  00eb6c0  stdu 1, -512(1)
  00eb6c4  mflr 0
  00eb6c8  std 0, 528(1)
  00eb6cc  stfd 28, 480(1)
  00eb6d0  stfd 29, 488(1)
  00eb6d4  stfd 30, 496(1)
  00eb6d8  stfd 31, 504(1)
  00eb6dc  std 31, 472(1)
  00eb6e0  lbz 4, 32(3)
  00eb6e4  std 30, 464(1)
  00eb6e8  ori 31, 3, 0
  00eb6ec  lwz 30, 120(3)
  00eb6f0  cmpwi 4, 0
  00eb6f4  cmpwi 1, 4, 1
  00eb6f8  std 29, 456(1)
  00eb6fc  std 28, 448(1)
  00eb700  std 27, 440(1)
  00eb704  std 26, 432(1)
  00eb708  std 25, 424(1)
  00eb70c  cmpwi 6, 4, -1
  00eb710  bt 1, 0xeb71c
  00eb714  bf 25, 0xec20c
  00eb718  b 0xeb724
  00eb71c  bf 5, 0xec19c
  00eb720  b 0xec20c
  00eb724  lis 3, 15
  00eb728  lhz 6, 6(30)
  00eb72c  lis 4, 114
  00eb730  addi 5, 3, -18864
  00eb734  addic 6, 6, 1
  00eb738  lis 29, 114
  00eb73c  addic 3, 30, 16
  00eb740  lfs 2, -3048(4)
  00eb744  sth 6, 6(30)
  00eb748  lfs 1, 0(5)
  00eb74c  lfs 3, 4(5)
  00eb750  lfs 4, -3052(29)
  00eb754  fmuls 2, 2, 3
  00eb758  fmuls 1, 4, 1
  00eb75c  bl 0x109af0
  00eb760  nop
  00eb764  lwz 3, 8(30)
  00eb768  lfs 11, 24(31)
  00eb76c  cmpwi 3, 0
  00eb770  lfs 12, -3052(29)
  00eb774  bt 2, 0xebb90
  00eb778  lis 4, 15
  00eb77c  lis 5, 114
  00eb780  addi 4, 4, -18864
  00eb784  lfs 1, 8(4)
  00eb788  lfs 2, -3056(5)
  00eb78c  lhz 4, 6(30)
  00eb790  fmuls 1, 2, 1
  00eb794  extsh 4, 4
  00eb798  fctiwz 1, 1
  00eb79c  stfd 1, 408(1)
  00eb7a0  lwz 5, 412(1)
  00eb7a4  cmpw 4, 5
  00eb7a8  bf 1, 0xebb90
  00eb7ac  lfs 1, 16(3)
  00eb7b0  lis 4, 15
  00eb7b4  lfs 2, 20(3)
  00eb7b8  lfs 8, 16(31)
  00eb7bc  lfs 9, 20(31)
  00eb7c0  addi 4, 4, -18864
  00eb7c4  fsubs 3, 1, 8
  00eb7c8  lfs 5, 24(3)
  00eb7cc  fsubs 4, 2, 9
  00eb7d0  lis 3, 115
  00eb7d4  lfs 6, 12(4)
  00eb7d8  addic 3, 3, 22784
  00eb7dc  fabs 7, 3
  00eb7e0  fabs 13, 4
  00eb7e4  stfs 3, 332(1)
  00eb7e8  stfs 4, 336(1)
  00eb7ec  fmr 4, 6
  00eb7f0  fsubs 3, 7, 13
  00eb7f4  stfs 3, 340(1)
  00eb7f8  lwz 5, 332(1)
  00eb7fc  lfs 10, 16(4)
  00eb800  lfs 3, 332(1)
  00eb804  lwz 6, 336(1)
  00eb808  fabs 6, 3
  00eb80c  fadds 3, 5, 4
  00eb810  rlwinm 6, 6, 3, 29, 29
  00eb814  lfs 4, 336(1)
  00eb818  lfs 0, 20(4)
  00eb81c  fabs 5, 4
  00eb820  lwz 4, 340(1)
  00eb824  lfs 4, 340(1)
  00eb828  rlwimi 6, 4, 2, 30, 30
  00eb82c  fsub 31, 4, 10
  00eb830  ori 4, 3, 0
  00eb834  fsub 30, 4, 10
  00eb838  rlwimi 6, 5, 4, 28, 28
  00eb83c  rlwimi 4, 6, 2, 26, 28
  00eb840  slwi 5, 6, 2
  00eb844  clrldi 4, 4, 32
  00eb848  lfsx 4, 3, 5
  00eb84c  fsel 13, 31, 6, 13
  00eb850  fsel 6, 30, 5, 7
  00eb854  lfs 5, 4(4)
  00eb858  fmr 7, 0
  00eb85c  fcmpu 0, 13, 10
  00eb860  bt 1, 0xeb86c
  00eb864  fmr 4, 10
  00eb868  b 0xeb984
  00eb86c  fsubs 0, 6, 13
  00eb870  fadds 6, 6, 13
  00eb874  addic 4, 1, 16
  00eb878  li 7, 2
  00eb87c  addic 5, 4, 360
  00eb880  addic 6, 4, 376
  00eb884  mtctr 7
  00eb888  fdivs 6, 0, 6
  00eb88c  fmuls 13, 6, 6
  00eb890  stfs 6, 388(1)
  00eb894  stfs 6, 380(1)
  00eb898  stfs 6, 384(1)
  00eb89c  stfs 6, 376(1)
  00eb8a0  lfs 31, 388(1)
  00eb8a4  lfs 30, 380(1)
  00eb8a8  lfs 29, 384(1)
  00eb8ac  fmuls 0, 13, 13
  00eb8b0  fmuls 30, 30, 13
  00eb8b4  fmuls 31, 31, 0
  00eb8b8  fmuls 6, 0, 0
  00eb8bc  fmuls 0, 29, 0
  00eb8c0  stfs 30, 380(1)
  00eb8c4  fmuls 13, 31, 13
  00eb8c8  stfs 0, 384(1)
  00eb8cc  stfs 13, 388(1)
  00eb8d0  lfs 13, 360(4)
  00eb8d4  fmuls 13, 13, 6
  00eb8d8  stfs 13, 376(4)
  00eb8dc  lfs 13, 4(5)
  00eb8e0  addic 4, 4, 8
  00eb8e4  addic 5, 5, 8
  00eb8e8  fmuls 13, 13, 6
  00eb8ec  stfs 13, 4(6)
  00eb8f0  addic 6, 6, 8
  00eb8f4  bdnz 0xeb8d0
  00eb8f8  li 6, 4
  00eb8fc  ori 4, 1, 0
  00eb900  mtctr 6
  00eb904  lis 5, 115
  00eb908  addic 6, 4, 376
  00eb90c  addic 5, 5, 22752
  00eb910  ori 8, 6, 0
  00eb914  lfs 6, 376(4)
  00eb918  lfs 13, 0(5)
  00eb91c  fmuls 6, 6, 13
  00eb920  lfs 13, 4(5)
  00eb924  addic 5, 5, 8
  00eb928  stfs 6, 376(4)
  00eb92c  lfs 6, 4(6)
  00eb930  addic 4, 4, 8
  00eb934  fmuls 6, 6, 13
  00eb938  stfs 6, 4(6)
  00eb93c  addic 6, 6, 8
  00eb940  bdnz 0xeb914
  00eb944  fmr 6, 10
  00eb948  ori 4, 1, 0
  00eb94c  mtctr 7
  00eb950  lfs 13, 376(4)
  00eb954  fadds 6, 6, 13
  00eb958  addic 4, 4, 16
  00eb95c  lfs 13, 4(8)
  00eb960  lfs 0, 8(8)
  00eb964  lfs 31, 12(8)
  00eb968  addic 8, 8, 16
  00eb96c  fadds 6, 6, 13
  00eb970  fadds 6, 6, 0
  00eb974  fadds 6, 6, 31
  00eb978  bdnz 0xeb950
  00eb97c  fadds 6, 6, 7
  00eb980  fmadds 4, 6, 4, 5
  00eb984  fsubs 2, 9, 2
  00eb988  fsubs 1, 8, 1
  00eb98c  fmuls 2, 2, 2
  00eb990  fmadds 1, 1, 1, 2
  00eb994  fsubs 2, 3, 11
  00eb998  fsqrts 1, 1
  00eb99c  stfs 2, 324(1)
  00eb9a0  fabs 5, 2
  00eb9a4  fabs 3, 1
  00eb9a8  stfs 1, 320(1)
  00eb9ac  lwz 4, 324(1)
  00eb9b0  lfs 2, 324(1)
  00eb9b4  rlwinm 4, 4, 3, 29, 29
  00eb9b8  fabs 6, 2
  00eb9bc  fsubs 1, 3, 5
  00eb9c0  stfs 1, 328(1)
  00eb9c4  lwz 5, 320(1)
  00eb9c8  lfs 1, 320(1)
  00eb9cc  lwz 6, 328(1)
  00eb9d0  lfs 2, 328(1)
  00eb9d4  fabs 1, 1
  00eb9d8  rlwimi 4, 6, 2, 30, 30
  00eb9dc  fsub 8, 2, 10
  00eb9e0  fsub 9, 2, 10
  00eb9e4  rlwimi 4, 5, 4, 28, 28
  00eb9e8  ori 5, 3, 0
  00eb9ec  rlwimi 5, 4, 2, 26, 28
  00eb9f0  slwi 4, 4, 2
  00eb9f4  clrldi 5, 5, 32
  00eb9f8  fsel 5, 8, 1, 5
  00eb9fc  lfsx 1, 3, 4
  00eba00  fsel 3, 9, 6, 3
  00eba04  lfs 2, 4(5)
  00eba08  fcmpu 0, 5, 10
  00eba0c  bt 1, 0xeba14
  00eba10  b 0xebb28
  00eba14  fsubs 6, 3, 5
  00eba18  fadds 3, 3, 5
  00eba1c  addic 3, 1, 16
  00eba20  li 6, 2
  00eba24  addic 4, 3, 328
  00eba28  addic 5, 3, 344
  00eba2c  mtctr 6
  00eba30  fdivs 3, 6, 3
  00eba34  fmuls 5, 3, 3
  00eba38  stfs 3, 356(1)
  00eba3c  stfs 3, 348(1)
  00eba40  stfs 3, 352(1)
  00eba44  stfs 3, 344(1)
  00eba48  lfs 8, 356(1)
  00eba4c  lfs 9, 348(1)
  00eba50  lfs 11, 352(1)
  00eba54  fmuls 6, 5, 5
  00eba58  fmuls 9, 9, 5
  00eba5c  fmuls 8, 8, 6
  00eba60  fmuls 3, 6, 6
  00eba64  fmuls 6, 11, 6
  00eba68  stfs 9, 348(1)
  00eba6c  fmuls 5, 8, 5
  00eba70  stfs 6, 352(1)
  00eba74  stfs 5, 356(1)
  00eba78  lfs 5, 328(3)
  00eba7c  fmuls 5, 5, 3
  00eba80  stfs 5, 344(3)
  00eba84  lfs 5, 4(4)
  00eba88  addic 3, 3, 8
  00eba8c  addic 4, 4, 8
  00eba90  fmuls 5, 5, 3
  00eba94  stfs 5, 4(5)
  00eba98  addic 5, 5, 8
  00eba9c  bdnz 0xeba78
  00ebaa0  li 5, 4
  00ebaa4  ori 3, 1, 0
  00ebaa8  mtctr 5
  00ebaac  lis 4, 115
  00ebab0  addic 5, 3, 344
  00ebab4  addic 4, 4, 22752
  00ebab8  ori 7, 5, 0
  00ebabc  lfs 3, 344(3)
  00ebac0  lfs 5, 0(4)
  00ebac4  fmuls 3, 3, 5
  00ebac8  lfs 5, 4(4)
  00ebacc  addic 4, 4, 8
  00ebad0  stfs 3, 344(3)
  00ebad4  lfs 3, 4(5)
  00ebad8  addic 3, 3, 8
  00ebadc  fmuls 3, 3, 5
  00ebae0  stfs 3, 4(5)
  00ebae4  addic 5, 5, 8
  00ebae8  bdnz 0xebabc
  00ebaec  ori 3, 1, 0
  00ebaf0  mtctr 6
  00ebaf4  lfs 3, 344(3)
  00ebaf8  lfs 5, 4(7)
  00ebafc  fadds 3, 10, 3
  00ebb00  lfs 6, 8(7)
  00ebb04  lfs 10, 12(7)
  00ebb08  addic 3, 3, 16
  00ebb0c  addic 7, 7, 16
  00ebb10  fadds 3, 3, 5
  00ebb14  fadds 3, 3, 6
  00ebb18  fadds 10, 3, 10
  00ebb1c  bdnz 0xebaf4
  00ebb20  fadds 10, 10, 7
  00ebb24  fmadds 10, 10, 1, 2
  00ebb28  lis 3, 15
  00ebb2c  fneg 31, 10
  00ebb30  addic 5, 30, 20
  00ebb34  addi 4, 3, -18864
  00ebb38  fmr 1, 4
  00ebb3c  addic 3, 31, 72
  00ebb40  li 9, 0
  00ebb44  lfs 30, 32(4)
  00ebb48  lfs 29, 24(4)
  00ebb4c  lfs 28, 28(4)
  00ebb50  fmuls 4, 12, 30
  00ebb54  fmr 2, 29
  00ebb58  fmr 3, 28
  00ebb5c  bl 0x10a050
  00ebb60  nop
  00ebb64  lis 4, 114
  00ebb68  fmr 1, 31
  00ebb6c  li 9, 0
  00ebb70  fmr 2, 29
  00ebb74  addic 3, 31, 68
  00ebb78  fmr 3, 28
  00ebb7c  addic 5, 30, 24
  00ebb80  lfs 4, -3052(4)
  00ebb84  fmuls 4, 4, 30
  00ebb88  bl 0x10a050
  00ebb8c  nop
  00ebb90  lfs 1, 16(30)
  00ebb94  lfs 2, 72(31)
  00ebb98  addic 3, 1, 192
  00ebb9c  lfs 3, 68(31)
  00ebba0  fneg 3, 3
  00ebba4  bl 0xfe610
  00ebba8  nop
  00ebbac  lis 3, 15
  00ebbb0  li 4, 0
  00ebbb4  addi 29, 3, -18864
  00ebbb8  lfs 31, 16(29)
  00ebbbc  stw 4, 240(1)
  00ebbc0  stw 4, 244(1)
  00ebbc4  stw 4, 248(1)
  00ebbc8  stw 4, 252(1)
  00ebbcc  lfs 29, 36(29)
  00ebbd0  lfs 30, 40(29)
  00ebbd4  fmr 1, 29
  00ebbd8  fmr 2, 30
  00ebbdc  bl 0xfcbe8
  00ebbe0  nop
  00ebbe4  stfs 1, 240(1)
  00ebbe8  fmr 2, 30
  00ebbec  fmr 1, 29
  00ebbf0  bl 0xfcbe8
  00ebbf4  nop
  00ebbf8  stfs 1, 244(1)
  00ebbfc  fmr 1, 29
  00ebc00  fmr 2, 30
  00ebc04  bl 0xfcbe8
  00ebc08  nop
  00ebc0c  stfs 1, 248(1)
  00ebc10  lfs 29, 44(29)
  00ebc14  lfs 2, 48(29)
  00ebc18  fmr 1, 29
  00ebc1c  bl 0xfcbe8
  00ebc20  nop
  00ebc24  lfs 3, 244(1)
  00ebc28  lfs 4, 240(1)
  00ebc2c  fmuls 2, 3, 3
  00ebc30  lfs 5, 248(1)
  00ebc34  lis 3, 114
  00ebc38  fmadds 2, 4, 4, 2
  00ebc3c  fmadds 2, 5, 5, 2
  00ebc40  fsqrts 6, 2
  00ebc44  lfs 2, -3052(3)
  00ebc48  fmuls 7, 1, 2
  00ebc4c  fmuls 1, 2, 29
  00ebc50  fdivs 7, 7, 6
  00ebc54  fsub 8, 31, 6
  00ebc58  fsub 9, 31, 6
  00ebc5c  fsub 10, 31, 6
  00ebc60  fsub 11, 6, 31
  00ebc64  fsub 12, 6, 31
  00ebc68  fsub 6, 6, 31
  00ebc6c  fmuls 4, 4, 7
  00ebc70  fmuls 3, 3, 7
  00ebc74  fmuls 5, 5, 7
  00ebc78  fsel 7, 8, 31, 4
  00ebc7c  fsel 8, 9, 31, 3
  00ebc80  fsel 9, 10, 31, 5
  00ebc84  fsel 4, 11, 7, 4
  00ebc88  fsel 3, 12, 8, 3
  00ebc8c  fsel 5, 6, 9, 5
  00ebc90  stfs 4, 240(1)
  00ebc94  stfs 3, 244(1)
  00ebc98  stfs 5, 248(1)
  00ebc9c  bl 0xfcbe8
  00ebca0  nop
  00ebca4  lfs 3, 196(1)
  00ebca8  lfs 4, 192(1)
  00ebcac  fmuls 2, 3, 3
  00ebcb0  lfs 5, 200(1)
  00ebcb4  fneg 6, 1
  00ebcb8  lfs 8, 240(1)
  00ebcbc  lfs 9, 244(1)
  00ebcc0  lfs 10, 248(1)
  00ebcc4  fmadds 2, 4, 4, 2
  00ebcc8  lfs 1, 204(1)
  00ebccc  stfs 1, 236(1)
  00ebcd0  fmr 1, 31
  00ebcd4  fmadds 2, 5, 5, 2
  00ebcd8  fsqrts 7, 2
  00ebcdc  fmr 2, 30
  00ebce0  fdivs 6, 6, 7
  00ebce4  fsub 11, 31, 7
  00ebce8  fsub 12, 31, 7
  00ebcec  fsub 13, 31, 7
  00ebcf0  fsub 0, 7, 31
  00ebcf4  fsub 29, 7, 31
  00ebcf8  fsub 7, 7, 31
  00ebcfc  fmuls 4, 4, 6
  00ebd00  fmuls 3, 3, 6
  00ebd04  fmuls 5, 5, 6
  00ebd08  fsel 6, 11, 31, 4
  00ebd0c  fsel 11, 12, 31, 3
  00ebd10  fsel 12, 13, 31, 5
  00ebd14  fsel 4, 0, 6, 4
  00ebd18  fsel 3, 29, 11, 3
  00ebd1c  fsel 5, 7, 12, 5
  00ebd20  fadds 6, 8, 4
  00ebd24  fadds 7, 9, 3
  00ebd28  fadds 8, 10, 5
  00ebd2c  stfs 4, 224(1)
  00ebd30  stfs 3, 228(1)
  00ebd34  stfs 5, 232(1)
  00ebd38  stfs 6, 240(1)
  00ebd3c  stfs 7, 244(1)
  00ebd40  stfs 8, 248(1)
  00ebd44  bl 0xfcbe8
  00ebd48  nop
  00ebd4c  lfs 2, 196(1)
  00ebd50  lfs 4, 192(1)
  00ebd54  fmuls 3, 2, 2
  00ebd58  lfs 6, 200(1)
  00ebd5c  lfs 5, 16(30)
  00ebd60  fmuls 1, 1, 5
  00ebd64  fmadds 3, 4, 4, 3
  00ebd68  lfs 8, 16(31)
  00ebd6c  lfs 9, 20(31)
  00ebd70  lis 3, 114
  00ebd74  lfs 10, 24(31)
  00ebd78  lis 7, 96
  00ebd7c  fmadds 3, 6, 6, 3
  00ebd80  addic 4, 1, 240
  00ebd84  li 6, 127
  00ebd88  fmr 5, 31
  00ebd8c  ori 7, 7, 24672
  00ebd90  fsqrts 7, 3
  00ebd94  lfs 3, 204(1)
  00ebd98  li 8, 3
  00ebd9c  stfs 3, 236(1)
  00ebda0  lfs 11, -3056(3)
  00ebda4  addic 3, 1, 224
  00ebda8  fmr 3, 30
  00ebdac  fdivs 1, 1, 7
  00ebdb0  fsub 12, 31, 7
  00ebdb4  fsub 13, 31, 7
  00ebdb8  fsub 0, 31, 7
  00ebdbc  fsub 29, 7, 31
  00ebdc0  fsub 28, 7, 31
  00ebdc4  fsub 7, 7, 31
  00ebdc8  fmuls 6, 6, 1
  00ebdcc  fmuls 2, 2, 1
  00ebdd0  fmuls 1, 4, 1
  00ebdd4  fsel 4, 12, 31, 6
  00ebdd8  fsel 12, 13, 31, 2
  00ebddc  fsel 13, 0, 31, 1
  00ebde0  fsel 4, 29, 4, 6
  00ebde4  fsel 2, 28, 12, 2
  00ebde8  fsel 1, 7, 13, 1
  00ebdec  fadds 4, 4, 10
  00ebdf0  fadds 2, 2, 9
  00ebdf4  fadds 1, 1, 8
  00ebdf8  stfs 4, 232(1)
  00ebdfc  stfs 2, 228(1)
  00ebe00  stfs 1, 224(1)
  00ebe04  lfs 1, 52(29)
  00ebe08  fmuls 1, 11, 1
  00ebe0c  fctiwz 1, 1
  00ebe10  stfd 1, 408(1)
  00ebe14  lfs 29, 56(29)
  00ebe18  lfs 28, 60(29)
  00ebe1c  lfs 4, 64(29)
  00ebe20  fmr 1, 29
  00ebe24  lwz 5, 412(1)
  00ebe28  fmr 2, 28
  00ebe2c  extsw 5, 5
  00ebe30  bl 0x12e3e8
  00ebe34  nop
  00ebe38  cmpwi 3, 0
  00ebe3c  bt 2, 0xebe5c
  00ebe40  lis 4, 165
  00ebe44  li 5, 68
  00ebe48  addic 4, 4, 10244
  00ebe4c  lwz 4, 92(4)
  00ebe50  lbz 4, 0(4)
  00ebe54  stb 5, 3(3)
  00ebe58  stb 4, 2(3)
  00ebe5c  lis 3, 15
  00ebe60  lis 28, 114
  00ebe64  addi 27, 3, -18864
  00ebe68  fmr 3, 30
  00ebe6c  addic 29, 31, 16
  00ebe70  fmr 5, 31
  00ebe74  lis 7, 176
  00ebe78  li 8, 3
  00ebe7c  addic 4, 1, 240
  00ebe80  lfs 1, 68(27)
  00ebe84  lfs 2, -3056(28)
  00ebe88  ori 3, 29, 0
  00ebe8c  li 6, 127
  00ebe90  fmuls 4, 2, 1
  00ebe94  fmr 1, 29
  00ebe98  ori 7, 7, 45232
  00ebe9c  fmr 2, 28
  00ebea0  fctiwz 4, 4
  00ebea4  stfd 4, 408(1)
  00ebea8  lwz 5, 412(1)
  00ebeac  lfs 4, 72(27)
  00ebeb0  extsw 5, 5
  00ebeb4  bl 0x12e3e8
  00ebeb8  nop
  00ebebc  lfs 1, 76(27)
  00ebec0  addic 26, 1, 256
  00ebec4  lfs 2, 224(31)
  00ebec8  addic 25, 31, 192
  00ebecc  lfs 3, 228(31)
  00ebed0  lfs 4, 232(31)
  00ebed4  fmuls 2, 2, 1
  00ebed8  lfs 5, 236(31)
  00ebedc  fmuls 3, 3, 1
  00ebee0  fmuls 4, 4, 1
  00ebee4  fmuls 1, 5, 1
  00ebee8  stfs 2, 256(1)
  00ebeec  stfs 3, 260(1)
  00ebef0  stfs 4, 264(1)
  00ebef4  stfs 1, 268(1)
  00ebef8  bl 0xfcc68
  00ebefc  nop
  00ebf00  ori 3, 26, 0
  00ebf04  ori 4, 26, 0
  00ebf08  ori 5, 25, 0
  00ebf0c  bl 0x1113e0
  00ebf10  nop
  00ebf14  lfs 2, 84(27)
  00ebf18  lis 5, 20224
  00ebf1c  lfs 3, -3056(28)
  00ebf20  lis 6, 8191
  00ebf24  lfs 1, 80(27)
  00ebf28  addic 3, 1, 224
  00ebf2c  fmuls 2, 3, 2
  00ebf30  li 9, 1
  00ebf34  ori 4, 26, 0
  00ebf38  ori 5, 5, 32767
  00ebf3c  ori 6, 6, 65535
  00ebf40  fctiwz 2, 2
  00ebf44  stfd 2, 408(1)
  00ebf48  lwz 8, 412(1)
  00ebf4c  extsw 8, 8
  00ebf50  bl 0x1268f8
  00ebf54  nop
  00ebf58  lfs 1, 16(31)
  00ebf5c  lfs 4, 20(31)
  00ebf60  lfs 5, 24(31)
  00ebf64  lfs 2, 192(1)
  00ebf68  lfs 3, 196(1)
  00ebf6c  fadds 6, 1, 2
  00ebf70  lfs 7, 200(1)
  00ebf74  fadds 29, 4, 3
  00ebf78  stfs 1, 208(1)
  00ebf7c  fadds 1, 5, 7
  00ebf80  stfs 4, 212(1)
  00ebf84  lfs 4, 28(31)
  00ebf88  stfs 5, 216(1)
  00ebf8c  stfs 4, 220(1)
  00ebf90  lhz 3, 166(31)
  00ebf94  stfs 6, 16(31)
  00ebf98  stfs 29, 20(31)
  00ebf9c  stfs 1, 24(31)
  00ebfa0  lfs 4, 88(27)
  00ebfa4  fcmpu 0, 6, 4
  00ebfa8  bt 0, 0xebfc0
  00ebfac  fcmpu 0, 29, 4
  00ebfb0  bt 0, 0xebfc0
  00ebfb4  fcmpu 0, 1, 4
  00ebfb8  cror 6, 1, 2
  00ebfbc  bt 6, 0xebfd0
  00ebfc0  ori 3, 31, 0
  00ebfc4  bl 0xefb38
  00ebfc8  nop
  00ebfcc  b 0xec20c
  00ebfd0  fmuls 1, 3, 3
  00ebfd4  lis 4, 131
  00ebfd8  fmr 4, 31
  00ebfdc  lis 5, 16256
  00ebfe0  li 6, 1
  00ebfe4  stw 31, 288(1)
  00ebfe8  stw 4, 292(1)
  00ebfec  stw 5, 300(1)
  00ebff0  stw 6, 304(1)
  00ebff4  fmadds 1, 2, 2, 1
  00ebff8  fsqrts 5, 1
  00ebffc  fcmpu 0, 5, 4
  00ec000  bt 2, 0xec04c
  00ec004  frsqrte 4, 1
  00ec008  lis 4, 15
  00ec00c  addi 4, 4, -18864
  00ec010  lfs 5, 92(4)
  00ec014  fmuls 6, 1, 4
  00ec018  fmuls 7, 5, 4
  00ec01c  fnmsubs 6, 6, 4, 30
  00ec020  fmadds 4, 6, 7, 4
  00ec024  fmuls 6, 1, 4
  00ec028  fmuls 7, 5, 4
  00ec02c  fnmsubs 6, 6, 4, 30
  00ec030  fmadds 4, 6, 7, 4
  00ec034  fmuls 1, 1, 4
  00ec038  fmuls 5, 5, 4
  00ec03c  fnmsubs 1, 1, 4, 30
  00ec040  fmadds 31, 1, 5, 4
  00ec044  fmuls 4, 2, 31
  00ec048  fmuls 31, 3, 31
  00ec04c  ori 6, 3, 0
  00ec050  lis 3, 17839
  00ec054  stfs 4, 272(1)
  00ec058  lis 5, 16256
  00ec05c  stfs 31, 276(1)
  00ec060  ori 4, 29, 0
  00ec064  ori 3, 3, 57190
  00ec068  lis 29, 151
  00ec06c  li 7, 3
  00ec070  li 8, 1
  00ec074  stw 5, 280(1)
  00ec078  addic 29, 29, -25376
  00ec07c  stw 3, 284(1)
  00ec080  addic 3, 1, 208
  00ec084  stb 7, 296(1)
  00ec088  stb 8, 297(1)
  00ec08c  addic 7, 1, 272
  00ec090  sth 6, 298(1)
  00ec094  li 5, 0
  00ec098  lwz 6, 8320(29)
  00ec09c  bl 0x57820
  00ec0a0  nop
  00ec0a4  cmpwi 3, 0
  00ec0a8  bt 2, 0xec13c
  00ec0ac  lis 4, 161
  00ec0b0  addic 4, 4, 2368
  00ec0b4  lwz 3, 24(4)
  00ec0b8  cmpwi 3, 0
  00ec0bc  bt 2, 0xec104
  00ec0c0  lwz 5, 8320(29)
  00ec0c4  cmpw 3, 5
  00ec0c8  bt 2, 0xec20c
  00ec0cc  lwz 5, 0(30)
  00ec0d0  cmpw 3, 5
  00ec0d4  bt 2, 0xec20c
  00ec0d8  lfs 1, 32(4)
  00ec0dc  li 3, 1
  00ec0e0  stfs 1, 16(31)
  00ec0e4  lfs 1, 36(4)
  00ec0e8  stfs 1, 20(31)
  00ec0ec  lfs 1, 40(4)
  00ec0f0  stfs 1, 24(31)
  00ec0f4  lfs 1, 44(4)
  00ec0f8  stb 3, 32(31)
  00ec0fc  stfs 1, 28(31)
  00ec100  b 0xec20c
  00ec104  lwz 3, 28(4)
  00ec108  cmpwi 3, 0
  00ec10c  bf 1, 0xec20c
  00ec110  lfs 1, 32(4)
  00ec114  li 3, 1
  00ec118  stfs 1, 16(31)
  00ec11c  lfs 1, 36(4)
  00ec120  stfs 1, 20(31)
  00ec124  lfs 1, 40(4)
  00ec128  stfs 1, 24(31)
  00ec12c  lfs 1, 44(4)
  00ec130  stb 3, 32(31)
  00ec134  stfs 1, 28(31)
  00ec138  b 0xec20c
  00ec13c  addic 3, 30, 4
  00ec140  bl 0x4fffb4
  00ec144  nop
  00ec148  cmpwi 3, 0
  00ec14c  bf 2, 0xec18c
  00ec150  lfs 1, 20(31)
  00ec154  lfs 2, 132(29)
  00ec158  lfs 3, 16(31)
  00ec15c  fsubs 1, 1, 2
  00ec160  lfs 2, 128(29)
  00ec164  fsubs 2, 3, 2
  00ec168  lis 3, 15
  00ec16c  addi 3, 3, -18864
  00ec170  fmuls 1, 1, 1
  00ec174  fmadds 1, 2, 2, 1
  00ec178  lfs 2, 96(3)
  00ec17c  fsqrts 1, 1
  00ec180  fcmpu 0, 1, 2
  00ec184  cror 6, 0, 2
  00ec188  bt 6, 0xec20c
  00ec18c  ori 3, 31, 0
  00ec190  bl 0xefb38
  00ec194  nop
  00ec198  b 0xec20c
  00ec19c  lis 3, 15
  00ec1a0  li 7, 0
  00ec1a4  addi 6, 3, -18864
  00ec1a8  li 11, -1
  00ec1ac  lis 4, 161
  00ec1b0  ori 3, 31, 0
  00ec1b4  addic 4, 4, 23856
  00ec1b8  lfs 1, 16(6)
  00ec1bc  lfs 3, 40(6)
  00ec1c0  li 5, 0
  00ec1c4  lfs 4, 92(6)
  00ec1c8  li 8, 3
  00ec1cc  lfs 5, 100(6)
  00ec1d0  li 9, 3
  00ec1d4  lfs 6, 12(6)
  00ec1d8  li 10, 5
  00ec1dc  lfs 7, 104(6)
  00ec1e0  fmr 2, 1
  00ec1e4  std 7, 144(1)
  00ec1e8  std 7, 160(1)
  00ec1ec  std 7, 168(1)
  00ec1f0  std 11, 176(1)
  00ec1f4  std 7, 184(1)
  00ec1f8  bl 0x10e030
  00ec1fc  nop
  00ec200  ori 3, 31, 0
  00ec204  bl 0xefb38
  00ec208  nop
  00ec20c  ld 0, 528(1)
  00ec210  mtlr 0
  00ec214  lfd 28, 480(1)
  00ec218  lfd 29, 488(1)
  00ec21c  lfd 30, 496(1)
  00ec220  lfd 31, 504(1)
  00ec224  ld 25, 424(1)
  00ec228  ld 26, 432(1)
  00ec22c  ld 27, 440(1)
  00ec230  ld 28, 448(1)
  00ec234  ld 29, 456(1)
  00ec238  ld 30, 464(1)
  00ec23c  ld 31, 472(1)
  00ec240  addi 1, 1, 512
  00ec244  blr

M1475_000ec248:   # 0xec248, 0x14 bytes
  00ec248  lis 3, 115
  00ec24c  lis 4, 1
  00ec250  addic 3, 3, -28920
  00ec254  stw 4, 72(3)
  00ec258  blr

M1475_000ec260:   # 0xec260, 0x30 bytes
  00ec260  cmpwi 3, 0
  00ec264  bf 2, 0xec270
  00ec268  li 3, 0
  00ec26c  b 0xec28c
  00ec270  lwz 3, 120(3)
  00ec274  cmpwi 3, 0
  00ec278  bf 2, 0xec284
  00ec27c  li 3, 0
  00ec280  b 0xec28c
  00ec284  lwz 3, 36(3)
  00ec288  extsw 3, 3
  00ec28c  blr

M1475_000ec290:   # 0xec290, 0x40 bytes
  00ec290  cmpwi 3, 0
  00ec294  bf 2, 0xec2a0
  00ec298  li 3, 0
  00ec29c  b 0xec2cc
  00ec2a0  lwz 3, 120(3)
  00ec2a4  cmpwi 3, 0
  00ec2a8  bf 2, 0xec2b4
  00ec2ac  li 3, 0
  00ec2b0  b 0xec2cc
  00ec2b4  lwz 6, 36(3)
  00ec2b8  or 4, 6, 4
  00ec2bc  andc 4, 4, 5
  00ec2c0  ori 5, 3, 0
  00ec2c4  extsw 3, 4
  00ec2c8  stw 4, 36(5)
  00ec2cc  blr
