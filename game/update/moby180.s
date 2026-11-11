# game/update/moby180.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M180_002ba398:   # 0x2ba398, 0x14 bytes
  02ba398  lis 3, 123
  02ba39c  lis 4, 1
  02ba3a0  addic 3, 3, 31652
  02ba3a4  stw 4, 72(3)
  02ba3a8  blr

UpdateMoby_180:   # 0x2ba3d8, 0x7a8 bytes
  02ba3d8  stdu 1, -432(1)
  02ba3dc  mflr 0
  02ba3e0  std 0, 448(1)
  02ba3e4  stfd 25, 376(1)
  02ba3e8  stfd 26, 384(1)
  02ba3ec  stfd 27, 392(1)
  02ba3f0  stfd 28, 400(1)
  02ba3f4  stfd 29, 408(1)
  02ba3f8  stfd 30, 416(1)
  02ba3fc  stfd 31, 424(1)
  02ba400  std 31, 368(1)
  02ba404  lis 4, 151
  02ba408  std 27, 336(1)
  02ba40c  ori 31, 3, 0
  02ba410  addic 4, 4, -25376
  02ba414  std 30, 360(1)
  02ba418  lis 27, 44
  02ba41c  li 30, 0
  02ba420  std 24, 312(1)
  02ba424  addi 27, 27, -23632
  02ba428  ori 24, 30, 0
  02ba42c  lwz 3, 8320(4)
  02ba430  lwz 4, 8324(4)
  02ba434  cmpwi 7, 4, 32
  02ba438  lbz 3, 83(3)
  02ba43c  std 29, 352(1)
  02ba440  std 28, 344(1)
  02ba444  std 26, 328(1)
  02ba448  std 25, 320(1)
  02ba44c  std 23, 304(1)
  02ba450  std 22, 296(1)
  02ba454  std 21, 288(1)
  02ba458  std 20, 280(1)
  02ba45c  std 19, 272(1)
  02ba460  std 18, 264(1)
  02ba464  std 17, 256(1)
  02ba468  std 16, 248(1)
  02ba46c  std 15, 240(1)
  02ba470  cmpwi 3, 130
  02ba474  bt 2, 0x2ba48c
  02ba478  lis 3, 114
  02ba47c  lis 4, 15820
  02ba480  addic 3, 3, 7120
  02ba484  ori 4, 4, 52429
  02ba488  stw 4, 2108(3)
  02ba48c  lbz 3, 32(31)
  02ba490  cmpwi 3, 0
  02ba494  cmpwi 1, 3, -1
  02ba498  cmpwi 6, 3, 2
  02ba49c  bt 1, 0x2ba4a8
  02ba4a0  bf 5, 0x2ba784
  02ba4a4  b 0x2ba4b0
  02ba4a8  bt 26, 0x2ba584
  02ba4ac  b 0x2ba784
  02ba4b0  li 3, 2
  02ba4b4  li 7, 31800
  02ba4b8  lis 8, 123
  02ba4bc  li 4, 5
  02ba4c0  lis 5, 266
  02ba4c4  stb 3, 32(31)
  02ba4c8  lis 6, 266
  02ba4cc  lis 9, 266
  02ba4d0  mtctr 4
  02ba4d4  <unknown>
  02ba4d8  addic 5, 5, 2928
  02ba4dc  addic 6, 6, 2968
  02ba4e0  li 4, 1
  02ba4e4  addic 7, 9, 2988
  02ba4e8  sth 30, 0(5)
  02ba4ec  sth 3, 0(6)
  02ba4f0  sth 4, 0(7)
  02ba4f4  sth 30, 2(5)
  02ba4f8  sth 3, 2(6)
  02ba4fc  addic 5, 5, 4
  02ba500  sth 4, 2(7)
  02ba504  addic 6, 6, 4
  02ba508  addic 7, 7, 4
  02ba50c  bdnz 0x2ba4e8
  02ba510  vcfsx 2, 2, 0
  02ba514  lis 3, 123
  02ba518  li 4, 31804
  02ba51c  <unknown>
  02ba520  vspltisw 5, -1
  02ba524  lis 5, 114
  02ba528  vspltw 3, 3, 0
  02ba52c  li 6, -3056
  02ba530  vspltisw 6, -1
  02ba534  <unknown>
  02ba538  vslw 5, 5, 5
  02ba53c  vcfsx 4, 4, 0
  02ba540  <unknown>
  02ba544  lis 3, 266
  02ba548  vslw 6, 6, 6
  02ba54c  li 4, 3008
  02ba550  vaddfp 2, 2, 3
  02ba554  lis 5, 266
  02ba558  li 6, 3012
  02ba55c  vaddfp 3, 4, 3
  02ba560  vmaddfp 2, 7, 2, 5
  02ba564  vmaddfp 3, 7, 3, 6
  02ba568  vctsxs 2, 2, 0
  02ba56c  vctsxs 3, 3, 0
  02ba570  vspltw 2, 2, 0
  02ba574  stvewx 2, 4, 3
  02ba578  vspltw 2, 3, 0
  02ba57c  stvewx 2, 6, 5
  02ba580  b 0x2ba784
  02ba584  bf 30, 0x2ba6d8
  02ba588  ori 3, 31, 0
  02ba58c  bl 0xefe40
  02ba590  nop
  02ba594  fmr 31, 1
  02ba598  lfs 1, 4(27)
  02ba59c  fcmpu 0, 31, 1
  02ba5a0  bt 0, 0x2ba784
  02ba5a4  lis 3, 266
  02ba5a8  li 30, 1
  02ba5ac  addic 3, 3, 3008
  02ba5b0  bl 0x4fff60
  02ba5b4  nop
  02ba5b8  cmpwi 3, 0
  02ba5bc  bf 2, 0x2ba638
  02ba5c0  lis 3, 266
  02ba5c4  lwz 3, 3008(3)
  02ba5c8  extsw 3, 3
  02ba5cc  bl 0x502730
  02ba5d0  nop
  02ba5d4  lis 3, 123
  02ba5d8  fmr 31, 1
  02ba5dc  lwz 3, 31800(3)
  02ba5e0  extsw 3, 3
  02ba5e4  std 3, 224(1)
  02ba5e8  lis 3, 114
  02ba5ec  lfs 2, 0(27)
  02ba5f0  lfs 1, -3056(3)
  02ba5f4  lfd 3, 224(1)
  02ba5f8  fcfid 3, 3
  02ba5fc  frsp 3, 3
  02ba600  fadds 2, 3, 2
  02ba604  fmuls 1, 1, 2
  02ba608  fctiwz 1, 1
  02ba60c  stfd 1, 224(1)
  02ba610  lwz 3, 228(1)
  02ba614  extsw 3, 3
  02ba618  bl 0x502730
  02ba61c  nop
  02ba620  fdivs 1, 31, 1
  02ba624  lfs 2, 8(27)
  02ba628  lis 3, 266
  02ba62c  fsubs 1, 2, 1
  02ba630  stfs 1, 3016(3)
  02ba634  b 0x2ba784
  02ba638  lfs 1, 12(27)
  02ba63c  fcmpu 0, 31, 1
  02ba640  bt 0, 0x2ba6c8
  02ba644  lis 3, 266
  02ba648  addic 3, 3, 3012
  02ba64c  bl 0x4fff60
  02ba650  nop
  02ba654  cmpwi 3, 0
  02ba658  lfs 1, 16(27)
  02ba65c  bf 2, 0x2ba6c4
  02ba660  lis 3, 266
  02ba664  lwz 3, 3012(3)
  02ba668  extsw 3, 3
  02ba66c  bl 0x502730
  02ba670  nop
  02ba674  lis 3, 123
  02ba678  fmr 31, 1
  02ba67c  lwz 3, 31804(3)
  02ba680  extsw 3, 3
  02ba684  std 3, 224(1)
  02ba688  lis 3, 114
  02ba68c  lfs 2, 0(27)
  02ba690  lfs 1, -3056(3)
  02ba694  lfd 3, 224(1)
  02ba698  fcfid 3, 3
  02ba69c  frsp 3, 3
  02ba6a0  fadds 2, 3, 2
  02ba6a4  fmuls 1, 1, 2
  02ba6a8  fctiwz 1, 1
  02ba6ac  stfd 1, 224(1)
  02ba6b0  lwz 3, 228(1)
  02ba6b4  extsw 3, 3
  02ba6b8  bl 0x502730
  02ba6bc  nop
  02ba6c0  fdivs 1, 31, 1
  02ba6c4  b 0x2ba6cc
  02ba6c8  lfs 1, 8(27)
  02ba6cc  lis 3, 266
  02ba6d0  stfs 1, 3016(3)
  02ba6d4  b 0x2ba784
  02ba6d8  li 3, 31800
  02ba6dc  vspltisw 5, -1
  02ba6e0  lis 4, 123
  02ba6e4  vspltisw 6, -1
  02ba6e8  lis 5, 123
  02ba6ec  li 6, 31804
  02ba6f0  vslw 5, 5, 5
  02ba6f4  li 7, 3012
  02ba6f8  vslw 6, 6, 6
  02ba6fc  <unknown>
  02ba700  <unknown>
  02ba704  lis 3, 114
  02ba708  <unknown>
  02ba70c  li 4, -3056
  02ba710  vcfsx 2, 2, 0
  02ba714  vspltw 3, 3, 0
  02ba718  vcfsx 4, 4, 0
  02ba71c  li 5, 3008
  02ba720  lis 6, 266
  02ba724  <unknown>
  02ba728  lis 4, 266
  02ba72c  lfs 1, -3056(3)
  02ba730  ori 3, 31, 0
  02ba734  vaddfp 2, 2, 3
  02ba738  vaddfp 3, 4, 3
  02ba73c  vmaddfp 2, 7, 2, 5
  02ba740  vmaddfp 3, 7, 3, 6
  02ba744  vctsxs 2, 2, 0
  02ba748  vctsxs 3, 3, 0
  02ba74c  vspltw 2, 2, 0
  02ba750  vspltw 3, 3, 0
  02ba754  stvewx 2, 5, 4
  02ba758  stvewx 3, 7, 6
  02ba75c  li 4, 1
  02ba760  lfs 2, 20(27)
  02ba764  li 5, 0
  02ba768  fmuls 1, 1, 2
  02ba76c  fctiwz 1, 1
  02ba770  stfd 1, 224(1)
  02ba774  lwz 6, 228(1)
  02ba778  extsw 6, 6
  02ba77c  bl 0xfddc0
  02ba780  nop
  02ba784  lfs 29, 24(27)
  02ba788  lfs 31, 208(31)
  02ba78c  lis 5, 266
  02ba790  lfs 30, 212(31)
  02ba794  ori 4, 24, 0
  02ba798  lfs 1, 216(31)
  02ba79c  addic 5, 5, 2928
  02ba7a0  lfs 2, 16(31)
  02ba7a4  ori 3, 4, 0
  02ba7a8  lfs 28, 220(31)
  02ba7ac  ori 17, 5, 0
  02ba7b0  lfs 3, 20(31)
  02ba7b4  fmadds 31, 31, 29, 2
  02ba7b8  lfs 4, 24(31)
  02ba7bc  fmadds 30, 30, 29, 3
  02ba7c0  fmadds 29, 1, 29, 4
  02ba7c4  lhz 6, 0(5)
  02ba7c8  cmpwi 6, 0
  02ba7cc  bt 2, 0x2ba7d8
  02ba7d0  li 3, 1
  02ba7d4  b 0x2ba7e8
  02ba7d8  addic 4, 4, 1
  02ba7dc  addic 5, 5, 2
  02ba7e0  cmpwi 4, 10
  02ba7e4  bt 0, 0x2ba7c4
  02ba7e8  or 3, 3, 30
  02ba7ec  cmpwi 3, 0
  02ba7f0  bt 2, 0x2bab10
  02ba7f4  ori 29, 24, 0
  02ba7f8  ori 26, 29, 0
  02ba7fc  ori 21, 26, 0
  02ba800  lhz 3, 0(17)
  02ba804  addic 3, 3, -1
  02ba808  extsh 4, 3
  02ba80c  cmpwi 4, 0
  02ba810  sth 3, 0(17)
  02ba814  bf 0, 0x2ba820
  02ba818  ori 3, 24, 0
  02ba81c  sth 24, 0(17)
  02ba820  clrlwi 3, 3, 16
  02ba824  cmpwi 1, 30, 0
  02ba828  cmpwi 3, 0
  02ba82c  crorc 2, 6, 2
  02ba830  bt 2, 0x2ba960
  02ba834  lis 3, 266
  02ba838  li 4, 2
  02ba83c  addic 6, 3, 2948
  02ba840  li 5, 64
  02ba844  lis 7, 123
  02ba848  sth 4, 0(17)
  02ba84c  addic 3, 1, 112
  02ba850  sthx 5, 6, 26
  02ba854  lfs 2, 31796(7)
  02ba858  fmr 1, 2
  02ba85c  bl 0xfe788
  02ba860  nop
  02ba864  lis 3, 266
  02ba868  lis 25, 149
  02ba86c  addic 3, 3, 2128
  02ba870  li 28, 1
  02ba874  addc 4, 3, 21
  02ba878  addc 3, 3, 21
  02ba87c  clrldi 4, 4, 32
  02ba880  addic 23, 3, 16
  02ba884  clrldi 22, 3, 32
  02ba888  addic 25, 25, 5056
  02ba88c  clrldi 23, 23, 32
  02ba890  stfs 31, 0(4)
  02ba894  stfs 30, 4(4)
  02ba898  stfs 29, 8(4)
  02ba89c  stfs 28, 12(4)
  02ba8a0  lfs 27, 8(27)
  02ba8a4  lfs 26, 28(27)
  02ba8a8  lfs 25, 32(27)
  02ba8ac  lfs 1, 0(22)
  02ba8b0  lfs 2, 320(25)
  02ba8b4  lfs 4, 324(25)
  02ba8b8  fsubs 3, 1, 2
  02ba8bc  lfs 5, 328(25)
  02ba8c0  fmr 1, 26
  02ba8c4  fmr 2, 25
  02ba8c8  stfs 3, 128(1)
  02ba8cc  lfs 3, 4(22)
  02ba8d0  fsubs 3, 3, 4
  02ba8d4  stfs 3, 132(1)
  02ba8d8  lfs 3, 8(22)
  02ba8dc  fsubs 3, 3, 5
  02ba8e0  stfs 3, 136(1)
  02ba8e4  lfs 3, 12(22)
  02ba8e8  stfs 3, 140(1)
  02ba8ec  bl 0xfcbe8
  02ba8f0  nop
  02ba8f4  addic 3, 1, 112
  02ba8f8  fmuls 1, 1, 27
  02ba8fc  addic 5, 1, 128
  02ba900  fneg 27, 27
  02ba904  ori 4, 3, 0
  02ba908  bl 0x1113e0
  02ba90c  nop
  02ba910  lfs 1, 0(22)
  02ba914  lfs 2, 112(1)
  02ba918  fadds 1, 1, 2
  02ba91c  addic 28, 28, 1
  02ba920  cmpwi 28, 5
  02ba924  stfs 1, 0(23)
  02ba928  lfs 1, 4(22)
  02ba92c  lfs 2, 116(1)
  02ba930  fadds 1, 1, 2
  02ba934  stfs 1, 4(23)
  02ba938  lfs 1, 8(22)
  02ba93c  lfs 2, 120(1)
  02ba940  fadds 1, 1, 2
  02ba944  stfs 1, 8(23)
  02ba948  lfs 1, 12(22)
  02ba94c  addic 22, 22, 16
  02ba950  stfs 1, 12(23)
  02ba954  addic 23, 23, 16
  02ba958  bt 0, 0x2ba8ac
  02ba95c  b 0x2baae4
  02ba960  cmpwi 3, 0
  02ba964  bt 2, 0x2baae4
  02ba968  lis 22, 266
  02ba96c  lfs 27, 16(27)
  02ba970  addic 23, 1, 160
  02ba974  lfs 26, 36(27)
  02ba978  addic 22, 22, 2128
  02ba97c  ori 20, 23, 0
  02ba980  addc 3, 22, 21
  02ba984  li 28, 1
  02ba988  addic 19, 3, 16
  02ba98c  clrldi 18, 3, 32
  02ba990  clrldi 19, 19, 32
  02ba994  addic 25, 1, 16
  02ba998  ori 15, 18, 0
  02ba99c  ori 16, 19, 0
  02ba9a0  lfs 1, 0(19)
  02ba9a4  lfs 2, 0(18)
  02ba9a8  fsubs 3, 1, 2
  02ba9ac  fmr 1, 27
  02ba9b0  fmr 2, 26
  02ba9b4  stfs 3, 0(20)
  02ba9b8  lfs 3, 4(19)
  02ba9bc  lfs 4, 4(18)
  02ba9c0  fsubs 3, 3, 4
  02ba9c4  stfs 3, 4(20)
  02ba9c8  lfs 3, 8(19)
  02ba9cc  lfs 4, 8(18)
  02ba9d0  fsubs 3, 3, 4
  02ba9d4  stfs 3, 8(20)
  02ba9d8  lfs 3, 12(19)
  02ba9dc  stfs 3, 12(20)
  02ba9e0  bl 0xfe4f0
  02ba9e4  nop
  02ba9e8  lfs 2, 144(25)
  02ba9ec  fadds 3, 2, 1
  02ba9f0  fmr 1, 27
  02ba9f4  fmr 2, 26
  02ba9f8  stfs 3, 144(25)
  02ba9fc  bl 0xfe4f0
  02baa00  nop
  02baa04  lfs 2, 148(25)
  02baa08  fadds 3, 2, 1
  02baa0c  fmr 1, 27
  02baa10  fmr 2, 26
  02baa14  stfs 3, 148(25)
  02baa18  bl 0xfe4f0
  02baa1c  nop
  02baa20  lfs 2, 152(25)
  02baa24  addic 28, 28, 1
  02baa28  addic 20, 20, 16
  02baa2c  fadds 1, 2, 1
  02baa30  cmpwi 28, 5
  02baa34  addic 19, 19, 16
  02baa38  addic 18, 18, 16
  02baa3c  stfs 1, 152(25)
  02baa40  addic 25, 25, 16
  02baa44  bt 0, 0x2ba9a0
  02baa48  addc 3, 22, 21
  02baa4c  li 5, 4
  02baa50  clrldi 4, 3, 32
  02baa54  lhz 3, 0(17)
  02baa58  mtctr 5
  02baa5c  stfs 31, 0(4)
  02baa60  stfs 30, 4(4)
  02baa64  stfs 29, 8(4)
  02baa68  stfs 28, 12(4)
  02baa6c  lfs 1, 0(15)
  02baa70  lfs 2, 0(23)
  02baa74  fadds 1, 1, 2
  02baa78  stfs 1, 0(16)
  02baa7c  lfs 1, 4(15)
  02baa80  lfs 2, 4(23)
  02baa84  fadds 1, 1, 2
  02baa88  stfs 1, 4(16)
  02baa8c  lfs 1, 8(15)
  02baa90  lfs 2, 8(23)
  02baa94  addic 23, 23, 16
  02baa98  fadds 1, 1, 2
  02baa9c  stfs 1, 8(16)
  02baaa0  lfs 1, 12(15)
  02baaa4  addic 15, 15, 16
  02baaa8  stfs 1, 12(16)
  02baaac  addic 16, 16, 16
  02baab0  bdnz 0x2baa6c
  02baab4  extsh 3, 3
  02baab8  li 4, 1
  02baabc  li 5, 0
  02baac0  subc 3, 3, 4
  02baac4  li 6, 32
  02baac8  sradi 3, 3, 63
  02baacc  subc 5, 5, 6
  02baad0  lis 4, 266
  02baad4  and 3, 3, 5
  02baad8  addic 4, 4, 2948
  02baadc  addc 3, 6, 3
  02baae0  sthx 3, 4, 26
  02baae4  addic 29, 29, 1
  02baae8  addic 17, 17, 2
  02baaec  cmpwi 29, 10
  02baaf0  addic 21, 21, 80
  02baaf4  addic 26, 26, 2
  02baaf8  bt 0, 0x2ba800
  02baafc  lis 3, 113
  02bab00  ori 4, 31, 0
  02bab04  addic 3, 3, -20640
  02bab08  bl 0x6d7e0
  02bab0c  nop
  02bab10  ld 0, 448(1)
  02bab14  mtlr 0
  02bab18  lfd 25, 376(1)
  02bab1c  lfd 26, 384(1)
  02bab20  lfd 27, 392(1)
  02bab24  lfd 28, 400(1)
  02bab28  lfd 29, 408(1)
  02bab2c  lfd 30, 416(1)
  02bab30  lfd 31, 424(1)
  02bab34  ld 15, 240(1)
  02bab38  ld 16, 248(1)
  02bab3c  ld 17, 256(1)
  02bab40  ld 18, 264(1)
  02bab44  ld 19, 272(1)
  02bab48  ld 20, 280(1)
  02bab4c  ld 21, 288(1)
  02bab50  ld 22, 296(1)
  02bab54  ld 23, 304(1)
  02bab58  ld 24, 312(1)
  02bab5c  ld 25, 320(1)
  02bab60  ld 26, 328(1)
  02bab64  ld 27, 336(1)
  02bab68  ld 28, 344(1)
  02bab6c  ld 29, 352(1)
  02bab70  ld 30, 360(1)
  02bab74  ld 31, 368(1)
  02bab78  addi 1, 1, 432
  02bab7c  blr
