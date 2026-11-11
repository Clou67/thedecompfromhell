# game/update/moby1169.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1169_001ea390:   # 0x1ea390, 0x50c bytes
  01ea390  stdu 1, -464(1)
  01ea394  mflr 0
  01ea398  std 0, 480(1)
  01ea39c  stfd 23, 392(1)
  01ea3a0  stfd 24, 400(1)
  01ea3a4  stfd 25, 408(1)
  01ea3a8  stfd 26, 416(1)
  01ea3ac  stfd 27, 424(1)
  01ea3b0  stfd 28, 432(1)
  01ea3b4  stfd 29, 440(1)
  01ea3b8  stfd 30, 448(1)
  01ea3bc  stfd 31, 456(1)
  01ea3c0  std 31, 384(1)
  01ea3c4  ori 31, 3, 0
  01ea3c8  li 3, 0
  01ea3cc  lis 9, 0
  01ea3d0  li 4, 0
  01ea3d4  std 30, 376(1)
  01ea3d8  li 5, 1
  01ea3dc  lwz 30, 120(31)
  01ea3e0  li 6, 1
  01ea3e4  li 7, 1
  01ea3e8  li 8, 0
  01ea3ec  std 29, 368(1)
  01ea3f0  std 28, 360(1)
  01ea3f4  std 27, 352(1)
  01ea3f8  std 26, 344(1)
  01ea3fc  ori 9, 9, 65424
  01ea400  bl 0x502fd4
  01ea404  nop
  01ea408  std 3, 304(1)
  01ea40c  li 4, 0
  01ea410  li 3, 0
  01ea414  li 5, 0
  01ea418  li 6, 0
  01ea41c  li 7, 0
  01ea420  li 8, 0
  01ea424  bl 0x502f08
  01ea428  nop
  01ea42c  lis 4, 241
  01ea430  std 3, 288(1)
  01ea434  lis 5, 118
  01ea438  lis 6, 118
  01ea43c  lis 7, 241
  01ea440  lis 8, 118
  01ea444  lwz 3, -29168(4)
  01ea448  lwz 4, 23448(5)
  01ea44c  lwz 5, 23440(6)
  01ea450  lwz 6, -29164(7)
  01ea454  ori 7, 4, 0
  01ea458  lwz 8, 23444(8)
  01ea45c  ori 4, 5, 0
  01ea460  ori 5, 6, 0
  01ea464  ori 6, 8, 0
  01ea468  bl 0x502ea8
  01ea46c  nop
  01ea470  std 3, 312(1)
  01ea474  li 3, 21
  01ea478  bl 0x685c4
  01ea47c  nop
  01ea480  std 3, 296(1)
  01ea484  addic 3, 1, 112
  01ea488  bl 0x500af8
  01ea48c  nop
  01ea490  ori 3, 1, 0
  01ea494  lis 4, 118
  01ea498  lis 5, 118
  01ea49c  li 8, 2
  01ea4a0  addic 6, 3, 256
  01ea4a4  addic 7, 3, 260
  01ea4a8  li 29, 0
  01ea4ac  addic 4, 4, 23392
  01ea4b0  addic 5, 5, 23396
  01ea4b4  mtctr 8
  01ea4b8  lfs 1, 0(4)
  01ea4bc  lfs 2, 0(5)
  01ea4c0  stfs 1, 256(3)
  01ea4c4  lfs 1, 8(4)
  01ea4c8  stfs 2, 260(3)
  01ea4cc  lfs 2, 8(5)
  01ea4d0  addic 4, 4, 16
  01ea4d4  stfs 1, 8(6)
  01ea4d8  addic 5, 5, 16
  01ea4dc  stfs 2, 8(7)
  01ea4e0  addic 6, 6, 16
  01ea4e4  addic 7, 7, 16
  01ea4e8  addic 3, 3, 16
  01ea4ec  bdnz 0x1ea4b8
  01ea4f0  ori 28, 29, 0
  01ea4f4  lis 4, 31
  01ea4f8  extsw 3, 28
  01ea4fc  addi 8, 4, -23704
  01ea500  addic 28, 28, 1
  01ea504  std 3, 320(1)
  01ea508  extsw 5, 28
  01ea50c  lfs 1, 0(8)
  01ea510  lfs 30, 4(8)
  01ea514  lfs 2, 8(8)
  01ea518  lfd 3, 320(1)
  01ea51c  std 5, 320(1)
  01ea520  fcfid 3, 3
  01ea524  lfs 29, 12(8)
  01ea528  lfs 28, 16(8)
  01ea52c  lfs 27, 20(8)
  01ea530  lfs 26, 24(8)
  01ea534  lfs 25, 28(8)
  01ea538  lfs 24, 32(8)
  01ea53c  lfs 23, 36(8)
  01ea540  addic 27, 1, 176
  01ea544  lfd 4, 320(1)
  01ea548  ori 3, 29, 0
  01ea54c  frsp 3, 3
  01ea550  ori 4, 1, 0
  01ea554  ori 5, 1, 0
  01ea558  lis 6, 118
  01ea55c  lis 7, 118
  01ea560  ori 8, 27, 0
  01ea564  fmuls 31, 3, 1
  01ea568  fcfid 3, 4
  01ea56c  fmsubs 31, 31, 30, 2
  01ea570  frsp 3, 3
  01ea574  fmuls 1, 3, 1
  01ea578  fmsubs 30, 1, 30, 2
  01ea57c  srawi 9, 3, 1
  01ea580  cmpwi 1, 3, 0
  01ea584  addze 9, 9
  01ea588  sldi 9, 9, 1
  01ea58c  subc 9, 3, 9
  01ea590  cmpwi 9, 0
  01ea594  bt 2, 0x1ea5c4
  01ea598  lwz 9, 23424(6)
  01ea59c  lfs 1, 16(31)
  01ea5a0  stw 9, 240(4)
  01ea5a4  stfs 1, 0(8)
  01ea5a8  lfs 1, 20(31)
  01ea5ac  stfs 1, 4(8)
  01ea5b0  lfs 1, 24(31)
  01ea5b4  stfs 1, 8(8)
  01ea5b8  lfs 1, 28(31)
  01ea5bc  stfs 1, 12(8)
  01ea5c0  b 0x1ea694
  01ea5c4  lwz 9, 23428(7)
  01ea5c8  fmr 1, 30
  01ea5cc  stw 9, 240(4)
  01ea5d0  lfs 2, 128(30)
  01ea5d4  bf 6, 0x1ea5dc
  01ea5d8  fmr 1, 31
  01ea5dc  fadds 3, 1, 29
  01ea5e0  fsubs 4, 28, 1
  01ea5e4  fsubs 5, 27, 1
  01ea5e8  stfs 2, 0(8)
  01ea5ec  lis 9, 118
  01ea5f0  fsubs 6, 28, 3
  01ea5f4  fsub 8, 1, 4
  01ea5f8  fsubs 7, 27, 3
  01ea5fc  fsub 9, 3, 6
  01ea600  fsel 1, 8, 4, 1
  01ea604  fsel 3, 9, 6, 3
  01ea608  fsub 4, 5, 1
  01ea60c  fsub 6, 7, 3
  01ea610  fsel 1, 4, 5, 1
  01ea614  lfs 4, 132(30)
  01ea618  stfs 4, 4(8)
  01ea61c  lfs 4, 136(30)
  01ea620  stfs 4, 8(8)
  01ea624  fsel 2, 6, 7, 3
  01ea628  fmuls 3, 1, 1
  01ea62c  lfs 4, 140(30)
  01ea630  stfs 4, 12(8)
  01ea634  lfs 4, 176(5)
  01ea638  fmuls 5, 2, 2
  01ea63c  fmuls 6, 3, 1
  01ea640  fmuls 7, 5, 2
  01ea644  fmuls 8, 3, 6
  01ea648  fmadds 1, 6, 26, 1
  01ea64c  fmuls 6, 5, 7
  01ea650  fmadds 2, 7, 26, 2
  01ea654  fmuls 7, 3, 8
  01ea658  fmadds 1, 8, 25, 1
  01ea65c  lfs 8, 23452(9)
  01ea660  lfs 9, 180(5)
  01ea664  fmuls 10, 5, 6
  01ea668  fmadds 2, 6, 25, 2
  01ea66c  fmuls 3, 3, 7
  01ea670  fmadds 1, 7, 24, 1
  01ea674  fmuls 5, 5, 10
  01ea678  fmadds 2, 10, 24, 2
  01ea67c  fmadds 1, 3, 23, 1
  01ea680  fmadds 2, 5, 23, 2
  01ea684  fmadds 1, 1, 8, 9
  01ea688  fmadds 2, 2, 8, 4
  01ea68c  stfs 1, 180(5)
  01ea690  stfs 2, 176(5)
  01ea694  lis 9, 16256
  01ea698  addic 3, 3, 1
  01ea69c  addic 8, 8, 16
  01ea6a0  cmpwi 3, 4
  01ea6a4  stw 9, 188(5)
  01ea6a8  addic 4, 4, 4
  01ea6ac  addic 5, 5, 16
  01ea6b0  bt 0, 0x1ea57c
  01ea6b4  lis 3, 161
  01ea6b8  li 4, 0
  01ea6bc  addic 26, 3, 24396
  01ea6c0  li 5, 0
  01ea6c4  addic 3, 1, 176
  01ea6c8  li 7, 9
  01ea6cc  lwz 6, 28(26)
  01ea6d0  bl 0x72280
  01ea6d4  nop
  01ea6d8  ori 6, 27, 0
  01ea6dc  ori 3, 29, 0
  01ea6e0  lwz 27, 28(26)
  01ea6e4  ori 4, 1, 0
  01ea6e8  ori 5, 1, 0
  01ea6ec  srawi 7, 3, 1
  01ea6f0  cmpwi 1, 3, 0
  01ea6f4  addze 7, 7
  01ea6f8  sldi 7, 7, 1
  01ea6fc  subc 7, 3, 7
  01ea700  cmpwi 7, 0
  01ea704  bt 2, 0x1ea738
  01ea708  lis 7, 118
  01ea70c  lwz 7, 23432(7)
  01ea710  stw 7, 240(4)
  01ea714  lfs 1, 128(30)
  01ea718  stfs 1, 0(6)
  01ea71c  lfs 1, 132(30)
  01ea720  stfs 1, 4(6)
  01ea724  lfs 1, 136(30)
  01ea728  stfs 1, 8(6)
  01ea72c  lfs 1, 140(30)
  01ea730  stfs 1, 12(6)
  01ea734  b 0x1ea80c
  01ea738  lis 7, 118
  01ea73c  fmr 1, 30
  01ea740  lwz 7, 23436(7)
  01ea744  stw 7, 240(4)
  01ea748  lfs 2, 128(30)
  01ea74c  bf 6, 0x1ea754
  01ea750  fmr 1, 31
  01ea754  fadds 3, 1, 29
  01ea758  fsubs 4, 28, 1
  01ea75c  fsubs 5, 27, 1
  01ea760  stfs 2, 0(6)
  01ea764  lis 7, 118
  01ea768  fsubs 6, 28, 3
  01ea76c  fsub 8, 1, 4
  01ea770  fsubs 7, 27, 3
  01ea774  fsub 9, 3, 6
  01ea778  fsel 1, 8, 4, 1
  01ea77c  fsel 3, 9, 6, 3
  01ea780  fsub 4, 5, 1
  01ea784  fsub 6, 7, 3
  01ea788  fsel 1, 4, 5, 1
  01ea78c  lfs 4, 132(30)
  01ea790  stfs 4, 4(6)
  01ea794  lfs 4, 136(30)
  01ea798  stfs 4, 8(6)
  01ea79c  fsel 2, 6, 7, 3
  01ea7a0  fmuls 3, 1, 1
  01ea7a4  lfs 4, 140(30)
  01ea7a8  stfs 4, 12(6)
  01ea7ac  lfs 4, 176(5)
  01ea7b0  fmuls 5, 2, 2
  01ea7b4  fmuls 6, 3, 1
  01ea7b8  fmuls 7, 5, 2
  01ea7bc  fmuls 8, 3, 6
  01ea7c0  fmadds 1, 6, 26, 1
  01ea7c4  fmuls 6, 5, 7
  01ea7c8  fmadds 2, 7, 26, 2
  01ea7cc  fmuls 7, 3, 8
  01ea7d0  fmadds 1, 8, 25, 1
  01ea7d4  lfs 8, 23452(7)
  01ea7d8  lfs 9, 180(5)
  01ea7dc  fmuls 10, 5, 6
  01ea7e0  fmadds 2, 6, 25, 2
  01ea7e4  fmuls 3, 3, 7
  01ea7e8  fmadds 1, 7, 24, 1
  01ea7ec  fmuls 5, 5, 10
  01ea7f0  fmadds 2, 10, 24, 2
  01ea7f4  fmadds 1, 3, 23, 1
  01ea7f8  fmadds 2, 5, 23, 2
  01ea7fc  fmadds 1, 1, 8, 9
  01ea800  fmadds 2, 2, 8, 4
  01ea804  stfs 1, 180(5)
  01ea808  stfs 2, 176(5)
  01ea80c  lis 7, 16256
  01ea810  addic 3, 3, 1
  01ea814  addic 6, 6, 16
  01ea818  cmpwi 3, 4
  01ea81c  stw 7, 188(5)
  01ea820  addic 4, 4, 4
  01ea824  addic 5, 5, 16
  01ea828  bt 0, 0x1ea6ec
  01ea82c  addic 3, 1, 176
  01ea830  li 4, 0
  01ea834  li 5, 0
  01ea838  ori 6, 27, 0
  01ea83c  li 7, 9
  01ea840  bl 0x72280
  01ea844  nop
  01ea848  cmpwi 28, 32
  01ea84c  bt 0, 0x1ea4f4
  01ea850  ld 0, 480(1)
  01ea854  mtlr 0
  01ea858  lfd 23, 392(1)
  01ea85c  lfd 24, 400(1)
  01ea860  lfd 25, 408(1)
  01ea864  lfd 26, 416(1)
  01ea868  lfd 27, 424(1)
  01ea86c  lfd 28, 432(1)
  01ea870  lfd 29, 440(1)
  01ea874  lfd 30, 448(1)
  01ea878  lfd 31, 456(1)
  01ea87c  ld 26, 344(1)
  01ea880  ld 27, 352(1)
  01ea884  ld 28, 360(1)
  01ea888  ld 29, 368(1)
  01ea88c  ld 30, 376(1)
  01ea890  ld 31, 384(1)
  01ea894  addi 1, 1, 464
  01ea898  blr

M1169_001ea89c:   # 0x1ea89c, 0x14 bytes
  01ea89c  lis 3, 118
  01ea8a0  lis 4, 1
  01ea8a4  addic 3, 3, 23460
  01ea8a8  stw 4, 72(3)
  01ea8ac  blr

M1169_001ea8b8:   # 0x1ea8b8, 0x9c bytes
  01ea8b8  cmpwi 3, -1
  01ea8bc  bt 2, 0x1ea950
  01ea8c0  lis 4, 165
  01ea8c4  sldi 3, 3, 2
  01ea8c8  addic 4, 4, -28284
  01ea8cc  extsw 3, 3
  01ea8d0  lwzx 3, 4, 3
  01ea8d4  cmpwi 3, 0
  01ea8d8  bt 2, 0x1ea950
  01ea8dc  lis 4, 31
  01ea8e0  vspltisw 2, -1
  01ea8e4  lis 5, 114
  01ea8e8  addi 4, 4, -22352
  01ea8ec  li 6, -3056
  01ea8f0  vslw 2, 2, 2
  01ea8f4  <unknown>
  01ea8f8  <unknown>
  01ea8fc  li 4, 400
  01ea900  vspltw 3, 3, 0
  01ea904  lis 5, 164
  01ea908  vmaddfp 2, 4, 3, 2
  01ea90c  lwz 5, -28512(5)
  01ea910  vctsxs 2, 2, 0
  01ea914  vspltw 2, 2, 0
  01ea918  lhz 6, 0(3)
  01ea91c  rlwinm 6, 6, 8, 9, 23
  01ea920  addc 6, 5, 6
  01ea924  clrldi 6, 6, 32
  01ea928  lhz 7, 166(6)
  01ea92c  lwz 6, 120(6)
  01ea930  cmpwi 7, 1169
  01ea934  bf 2, 0x1ea93c
  01ea938  stvewx 2, 4, 6
  01ea93c  lhz 6, 0(3)
  01ea940  addic 3, 3, 2
  01ea944  extsh 6, 6
  01ea948  cmpwi 6, 0
  01ea94c  bf 0, 0x1ea918
  01ea950  blr

M1169_001ea988:   # 0x1ea988, 0x314 bytes
  01ea988  stdu 1, -224(1)
  01ea98c  mflr 0
  01ea990  std 0, 240(1)
  01ea994  std 31, 216(1)
  01ea998  ori 31, 3, 0
  01ea99c  lfs 1, 0(4)
  01ea9a0  lis 3, 31
  01ea9a4  lis 5, 115
  01ea9a8  lfs 2, 16(31)
  01ea9ac  lfs 3, 4(4)
  01ea9b0  lfs 4, 20(31)
  01ea9b4  fsubs 1, 1, 2
  01ea9b8  addi 4, 3, -22188
  01ea9bc  fsubs 2, 3, 4
  01ea9c0  addic 5, 5, 22784
  01ea9c4  addic 3, 31, 72
  01ea9c8  fabs 5, 1
  01ea9cc  fabs 4, 2
  01ea9d0  stfs 1, 144(1)
  01ea9d4  std 30, 208(1)
  01ea9d8  stfs 2, 148(1)
  01ea9dc  lwz 30, 120(31)
  01ea9e0  fsubs 1, 5, 4
  01ea9e4  stfs 1, 152(1)
  01ea9e8  lwz 6, 144(1)
  01ea9ec  lfs 1, 0(4)
  01ea9f0  lfs 2, 144(1)
  01ea9f4  lwz 4, 148(1)
  01ea9f8  lfs 3, 148(1)
  01ea9fc  fabs 2, 2
  01eaa00  lwz 7, 152(1)
  01eaa04  rlwinm 4, 4, 3, 29, 29
  01eaa08  fabs 6, 3
  01eaa0c  lfs 3, 152(1)
  01eaa10  rlwimi 4, 7, 2, 30, 30
  01eaa14  fsub 7, 3, 1
  01eaa18  fsub 8, 3, 1
  01eaa1c  rlwimi 4, 6, 4, 28, 28
  01eaa20  ori 6, 5, 0
  01eaa24  rlwimi 6, 4, 2, 26, 28
  01eaa28  slwi 4, 4, 2
  01eaa2c  clrldi 6, 6, 32
  01eaa30  fsel 4, 7, 2, 4
  01eaa34  lfsx 3, 5, 4
  01eaa38  lfs 2, 4(6)
  01eaa3c  fsel 5, 8, 6, 5
  01eaa40  std 29, 200(1)
  01eaa44  fcmpu 0, 4, 1
  01eaa48  bt 1, 0x1eaa50
  01eaa4c  b 0x1eab74
  01eaa50  fsubs 6, 5, 4
  01eaa54  fadds 4, 5, 4
  01eaa58  addic 7, 1, 16
  01eaa5c  li 4, 2
  01eaa60  addic 5, 7, 156
  01eaa64  addic 6, 7, 140
  01eaa68  mtctr 4
  01eaa6c  fdivs 4, 6, 4
  01eaa70  fmuls 6, 4, 4
  01eaa74  stfs 4, 168(1)
  01eaa78  stfs 4, 160(1)
  01eaa7c  stfs 4, 164(1)
  01eaa80  stfs 4, 156(1)
  01eaa84  lfs 7, 168(1)
  01eaa88  lfs 8, 160(1)
  01eaa8c  lfs 9, 164(1)
  01eaa90  fmuls 4, 6, 6
  01eaa94  fmuls 8, 8, 6
  01eaa98  fmuls 7, 7, 4
  01eaa9c  fmuls 5, 4, 4
  01eaaa0  fmuls 4, 9, 4
  01eaaa4  stfs 8, 160(1)
  01eaaa8  fmuls 6, 7, 6
  01eaaac  stfs 4, 164(1)
  01eaab0  stfs 6, 168(1)
  01eaab4  lfs 4, 140(7)
  01eaab8  fmuls 4, 4, 5
  01eaabc  stfs 4, 156(7)
  01eaac0  lfs 4, 4(6)
  01eaac4  addic 6, 6, 8
  01eaac8  fmuls 4, 4, 5
  01eaacc  addic 7, 7, 8
  01eaad0  stfs 4, 4(5)
  01eaad4  addic 5, 5, 8
  01eaad8  bdnz 0x1eaab4
  01eaadc  ori 8, 1, 0
  01eaae0  li 5, 4
  01eaae4  lis 7, 115
  01eaae8  addic 6, 8, 156
  01eaaec  mtctr 5
  01eaaf0  addic 7, 7, 22752
  01eaaf4  ori 5, 6, 0
  01eaaf8  lfs 4, 156(8)
  01eaafc  lfs 5, 0(7)
  01eab00  fmuls 4, 4, 5
  01eab04  lfs 5, 4(7)
  01eab08  addic 7, 7, 8
  01eab0c  stfs 4, 156(8)
  01eab10  lfs 4, 4(6)
  01eab14  addic 8, 8, 8
  01eab18  fmuls 4, 4, 5
  01eab1c  stfs 4, 4(6)
  01eab20  addic 6, 6, 8
  01eab24  bdnz 0x1eaaf8
  01eab28  ori 6, 4, 0
  01eab2c  ori 4, 1, 0
  01eab30  mtctr 6
  01eab34  lfs 4, 156(4)
  01eab38  fadds 1, 1, 4
  01eab3c  lfs 4, 4(5)
  01eab40  addic 4, 4, 16
  01eab44  lfs 5, 8(5)
  01eab48  lfs 6, 12(5)
  01eab4c  addic 5, 5, 16
  01eab50  fadds 1, 1, 4
  01eab54  fadds 1, 1, 5
  01eab58  fadds 1, 1, 6
  01eab5c  bdnz 0x1eab34
  01eab60  lis 4, 31
  01eab64  addi 4, 4, -22188
  01eab68  lfs 4, 4(4)
  01eab6c  fadds 1, 1, 4
  01eab70  fmadds 1, 1, 3, 2
  01eab74  lis 4, 31
  01eab78  lis 6, 114
  01eab7c  addi 29, 4, -22188
  01eab80  lis 4, 114
  01eab84  addic 5, 30, 392
  01eab88  lfs 2, 8(29)
  01eab8c  lfs 3, -3048(4)
  01eab90  lfs 4, 12(29)
  01eab94  fmuls 2, 3, 2
  01eab98  lfs 5, -3052(6)
  01eab9c  fmuls 4, 5, 4
  01eaba0  fmr 3, 2
  01eaba4  bl 0x10a2e0
  01eaba8  nop
  01eabac  lfs 1, 16(29)
  01eabb0  lfs 2, 20(29)
  01eabb4  lfs 3, 72(31)
  01eabb8  lfs 4, 24(29)
  01eabbc  fadds 1, 3, 1
  01eabc0  fsubs 5, 2, 3
  01eabc4  fsubs 6, 4, 3
  01eabc8  li 5, 0
  01eabcc  addic 4, 30, 192
  01eabd0  ori 3, 31, 0
  01eabd4  addic 6, 1, 128
  01eabd8  fsubs 2, 2, 1
  01eabdc  fsub 7, 3, 5
  01eabe0  fsubs 4, 4, 1
  01eabe4  fsub 9, 1, 2
  01eabe8  fsel 3, 7, 5, 3
  01eabec  lfs 5, 28(29)
  01eabf0  fsel 1, 9, 2, 1
  01eabf4  fsub 2, 6, 3
  01eabf8  fsub 8, 4, 1
  01eabfc  fsel 2, 2, 6, 3
  01eac00  lfs 3, 32(29)
  01eac04  lfs 6, 36(29)
  01eac08  lfs 7, 40(29)
  01eac0c  fsel 1, 8, 4, 1
  01eac10  fmuls 4, 2, 2
  01eac14  fmuls 8, 1, 1
  01eac18  fmuls 9, 4, 2
  01eac1c  fmuls 11, 8, 1
  01eac20  fmuls 12, 4, 9
  01eac24  fmadds 2, 9, 5, 2
  01eac28  lfs 9, 44(29)
  01eac2c  stw 5, 120(1)
  01eac30  addic 5, 1, 112
  01eac34  fmuls 10, 8, 11
  01eac38  fmadds 1, 11, 5, 1
  01eac3c  fmuls 5, 4, 12
  01eac40  fmadds 2, 12, 3, 2
  01eac44  fmuls 11, 8, 10
  01eac48  fmadds 1, 10, 3, 1
  01eac4c  fmuls 3, 4, 5
  01eac50  fmadds 2, 5, 6, 2
  01eac54  fmuls 4, 8, 11
  01eac58  fmadds 1, 11, 6, 1
  01eac5c  fmadds 2, 3, 7, 2
  01eac60  fmadds 1, 4, 7, 1
  01eac64  fmuls 2, 2, 9
  01eac68  fmuls 3, 1, 9
  01eac6c  stfs 2, 116(1)
  01eac70  lfs 1, 48(29)
  01eac74  stfs 3, 112(1)
  01eac78  bl 0x101058
  01eac7c  nop
  01eac80  ld 0, 240(1)
  01eac84  mtlr 0
  01eac88  ld 29, 200(1)
  01eac8c  ld 30, 208(1)
  01eac90  ld 31, 216(1)
  01eac94  addi 1, 1, 224
  01eac98  blr

M1169_001eaca0:   # 0x1eaca0, 0xb0 bytes
  01eaca0  cmpwi 3, -1
  01eaca4  bt 2, 0x1ead4c
  01eaca8  lis 5, 31
  01eacac  lis 4, 165
  01eacb0  sldi 3, 3, 2
  01eacb4  addi 5, 5, -21348
  01eacb8  addic 6, 4, -28284
  01eacbc  extsw 3, 3
  01eacc0  lis 7, 164
  01eacc4  lis 8, 114
  01eacc8  li 9, -3056
  01eaccc  <unknown>
  01eacd0  li 4, 420
  01eacd4  lwzx 6, 6, 3
  01eacd8  lwz 5, -28512(7)
  01eacdc  li 3, 404
  01eace0  vspltw 2, 2, 0
  01eace4  <unknown>
  01eace8  lhz 7, 0(6)
  01eacec  rlwinm 7, 7, 8, 9, 23
  01eacf0  addc 7, 5, 7
  01eacf4  clrldi 7, 7, 32
  01eacf8  lhz 8, 166(7)
  01eacfc  lwz 7, 120(7)
  01ead00  cmpwi 8, 1169
  01ead04  bf 2, 0x1ead38
  01ead08  addi 8, 4, 16
  01ead0c  <unknown>
  01ead10  <unknown>
  01ead14  vor 4, 4, 5
  01ead18  vspltisw 5, -1
  01ead1c  vcfsx 4, 4, 0
  01ead20  vslw 5, 5, 5
  01ead24  vaddfp 4, 4, 2
  01ead28  vmaddfp 4, 3, 4, 5
  01ead2c  vctsxs 4, 4, 0
  01ead30  vspltw 4, 4, 0
  01ead34  stvewx 4, 3, 7
  01ead38  lhz 7, 0(6)
  01ead3c  addic 6, 6, 2
  01ead40  extsh 7, 7
  01ead44  cmpwi 7, 0
  01ead48  bf 0, 0x1eace8
  01ead4c  blr

M1169_001ead68:   # 0x1ead68, 0x734 bytes
  01ead68  stdu 1, -224(1)
  01ead6c  mflr 0
  01ead70  std 0, 240(1)
  01ead74  stfd 31, 216(1)
  01ead78  std 31, 208(1)
  01ead7c  lbz 4, 32(3)
  01ead80  std 30, 200(1)
  01ead84  ori 31, 3, 0
  01ead88  lwz 30, 120(3)
  01ead8c  std 29, 192(1)
  01ead90  cmpwi 4, 0
  01ead94  bt 2, 0x1eb47c
  01ead98  lwz 3, 400(30)
  01ead9c  cmpwi 3, 0
  01eada0  bt 2, 0x1eadac
  01eada4  addic 3, 3, -1
  01eada8  stw 3, 400(30)
  01eadac  lwz 3, 416(30)
  01eadb0  cmpwi 3, 0
  01eadb4  bt 2, 0x1eadc0
  01eadb8  addic 3, 3, -1
  01eadbc  stw 3, 416(30)
  01eadc0  lwz 3, 404(30)
  01eadc4  cmpwi 3, 0
  01eadc8  bt 2, 0x1eadd4
  01eadcc  addic 3, 3, -1
  01eadd0  stw 3, 404(30)
  01eadd4  lis 3, 118
  01eadd8  lwz 4, 36(31)
  01eaddc  lfs 1, 23576(3)
  01eade0  lwz 3, 56(30)
  01eade4  lfs 2, 36(4)
  01eade8  cmpwi 3, 0
  01eadec  fmuls 1, 2, 1
  01eadf0  stfs 1, 44(31)
  01eadf4  bt 2, 0x1eae30
  01eadf8  lis 3, 31
  01eadfc  addi 3, 3, -21168
  01eae00  lfs 1, 0(3)
  01eae04  lfs 2, 4(3)
  01eae08  bl 0xfcbe8
  01eae0c  nop
  01eae10  lis 3, 114
  01eae14  lfs 2, -3056(3)
  01eae18  fmuls 1, 1, 2
  01eae1c  bl 0x502758
  01eae20  nop
  01eae24  li 4, 0
  01eae28  stw 3, 388(30)
  01eae2c  stw 4, 56(30)
  01eae30  addic 3, 30, 388
  01eae34  bl 0x4fff60
  01eae38  nop
  01eae3c  lis 3, 31
  01eae40  li 6, 0
  01eae44  addi 7, 3, -21168
  01eae48  ori 3, 31, 0
  01eae4c  lis 4, 51
  01eae50  li 5, 0
  01eae54  lfs 31, 8(7)
  01eae58  stw 6, 116(1)
  01eae5c  bl 0x10675c
  01eae60  nop
  01eae64  ori 29, 3, 0
  01eae68  cmpwi 29, 0
  01eae6c  bt 2, 0x1eaea0
  01eae70  lwz 3, 32(29)
  01eae74  cmpwi 3, 0
  01eae78  bt 2, 0x1eaea0
  01eae7c  lhz 3, 166(3)
  01eae80  lhz 4, 166(31)
  01eae84  cmpwi 1, 3, 880
  01eae88  extsh 3, 3
  01eae8c  extsh 4, 4
  01eae90  cmpw 3, 4
  01eae94  bt 2, 0x1eae9c
  01eae98  bf 6, 0x1eaea0
  01eae9c  li 29, 0
  01eaea0  addic 5, 30, 32
  01eaea4  li 6, 0
  01eaea8  addic 7, 1, 112
  01eaeac  li 9, 0
  01eaeb0  addic 8, 1, 116
  01eaeb4  ori 3, 31, 0
  01eaeb8  ori 4, 29, 0
  01eaebc  li 10, 4
  01eaec0  bl 0x106840
  01eaec4  nop
  01eaec8  lwz 5, 112(1)
  01eaecc  ori 4, 3, 0
  01eaed0  cmpwi 5, 1
  01eaed4  bt 2, 0x1eb390
  01eaed8  lbz 3, 32(31)
  01eaedc  cmpwi 3, 10
  01eaee0  bt 2, 0x1eb390
  01eaee4  lfs 1, 32(30)
  01eaee8  lfs 2, 116(1)
  01eaeec  lhz 3, 52(31)
  01eaef0  fsubs 1, 1, 2
  01eaef4  fcmpu 0, 1, 31
  01eaef8  stfs 1, 32(30)
  01eaefc  cror 6, 0, 2
  01eaf00  bt 6, 0x1eb164
  01eaf04  cmpwi 4, 2
  01eaf08  bt 1, 0x1eaf20
  01eaf0c  cmpwi 4, -1
  01eaf10  bf 1, 0x1eb380
  01eaf14  cmpwi 4, 0
  01eaf18  bf 1, 0x1eb380
  01eaf1c  b 0x1eb164
  01eaf20  cmpwi 4, 10
  01eaf24  bt 1, 0x1eb380
  01eaf28  lis 3, 31
  01eaf2c  vspltisw 2, -1
  01eaf30  li 4, 9
  01eaf34  addi 3, 3, -21168
  01eaf38  li 6, 12
  01eaf3c  lis 5, 114
  01eaf40  stb 4, 32(31)
  01eaf44  li 4, -3056
  01eaf48  vslw 2, 2, 2
  01eaf4c  <unknown>
  01eaf50  lis 3, 118
  01eaf54  vspltw 3, 3, 0
  01eaf58  <unknown>
  01eaf5c  lis 6, 16872
  01eaf60  lis 4, 114
  01eaf64  li 5, 38
  01eaf68  vmaddfp 2, 4, 3, 2
  01eaf6c  lfs 1, 23584(3)
  01eaf70  lis 3, 118
  01eaf74  lfs 2, -3052(4)
  01eaf78  lis 4, 16752
  01eaf7c  fmuls 1, 1, 2
  01eaf80  vctsxs 2, 2, 0
  01eaf84  vsplth 2, 2, 1
  01eaf88  stvehx 2, 5, 30
  01eaf8c  stfs 1, 120(30)
  01eaf90  lfs 1, 23580(3)
  01eaf94  stw 4, 176(30)
  01eaf98  fmuls 1, 1, 2
  01eaf9c  stw 6, 180(30)
  01eafa0  lis 6, 115
  01eafa4  addic 6, 6, 22784
  01eafa8  stfs 1, 124(30)
  01eafac  lwz 4, 16(29)
  01eafb0  lwz 3, 20(29)
  01eafb4  lfs 1, 16(29)
  01eafb8  lfs 2, 20(29)
  01eafbc  fabs 3, 1
  01eafc0  fabs 5, 2
  01eafc4  rlwinm 5, 3, 3, 29, 29
  01eafc8  addic 3, 30, 96
  01eafcc  fsubs 1, 3, 5
  01eafd0  stfs 1, 124(1)
  01eafd4  lwz 7, 124(1)
  01eafd8  lfs 1, 124(1)
  01eafdc  rlwimi 5, 7, 2, 30, 30
  01eafe0  fsub 4, 1, 31
  01eafe4  fsub 6, 1, 31
  01eafe8  rlwimi 5, 4, 4, 28, 28
  01eafec  ori 4, 6, 0
  01eaff0  rlwimi 4, 5, 2, 26, 28
  01eaff4  slwi 5, 5, 2
  01eaff8  clrldi 4, 4, 32
  01eaffc  fsel 4, 4, 3, 5
  01eb000  lfsx 1, 6, 5
  01eb004  fsel 3, 6, 5, 3
  01eb008  lfs 2, 4(4)
  01eb00c  fcmpu 0, 4, 31
  01eb010  bt 1, 0x1eb018
  01eb014  b 0x1eb138
  01eb018  fsubs 5, 3, 4
  01eb01c  fadds 3, 3, 4
  01eb020  addic 4, 1, 16
  01eb024  li 8, 2
  01eb028  addic 5, 4, 144
  01eb02c  addic 6, 4, 160
  01eb030  mtctr 8
  01eb034  fdivs 3, 5, 3
  01eb038  fmuls 4, 3, 3
  01eb03c  stfs 3, 172(1)
  01eb040  stfs 3, 164(1)
  01eb044  stfs 3, 168(1)
  01eb048  stfs 3, 160(1)
  01eb04c  lfs 6, 172(1)
  01eb050  lfs 7, 164(1)
  01eb054  lfs 8, 168(1)
  01eb058  fmuls 5, 4, 4
  01eb05c  fmuls 7, 7, 4
  01eb060  fmuls 6, 6, 5
  01eb064  fmuls 3, 5, 5
  01eb068  fmuls 5, 8, 5
  01eb06c  stfs 7, 164(1)
  01eb070  fmuls 4, 6, 4
  01eb074  stfs 5, 168(1)
  01eb078  stfs 4, 172(1)
  01eb07c  lfs 4, 144(4)
  01eb080  fmuls 4, 4, 3
  01eb084  stfs 4, 160(4)
  01eb088  lfs 4, 4(5)
  01eb08c  addic 4, 4, 8
  01eb090  addic 5, 5, 8
  01eb094  fmuls 4, 4, 3
  01eb098  stfs 4, 4(6)
  01eb09c  addic 6, 6, 8
  01eb0a0  bdnz 0x1eb07c
  01eb0a4  li 6, 4
  01eb0a8  ori 4, 1, 0
  01eb0ac  mtctr 6
  01eb0b0  lis 5, 115
  01eb0b4  addic 6, 4, 160
  01eb0b8  addic 5, 5, 22752
  01eb0bc  ori 7, 6, 0
  01eb0c0  lfs 3, 160(4)
  01eb0c4  lfs 4, 0(5)
  01eb0c8  fmuls 3, 3, 4
  01eb0cc  lfs 4, 4(5)
  01eb0d0  addic 5, 5, 8
  01eb0d4  stfs 3, 160(4)
  01eb0d8  lfs 3, 4(6)
  01eb0dc  addic 4, 4, 8
  01eb0e0  fmuls 3, 3, 4
  01eb0e4  stfs 3, 4(6)
  01eb0e8  addic 6, 6, 8
  01eb0ec  bdnz 0x1eb0c0
  01eb0f0  ori 4, 1, 0
  01eb0f4  mtctr 8
  01eb0f8  lfs 3, 160(4)
  01eb0fc  lfs 4, 4(7)
  01eb100  fadds 3, 31, 3
  01eb104  lfs 5, 8(7)
  01eb108  lfs 31, 12(7)
  01eb10c  addic 4, 4, 16
  01eb110  addic 7, 7, 16
  01eb114  fadds 3, 3, 4
  01eb118  fadds 3, 3, 5
  01eb11c  fadds 31, 3, 31
  01eb120  bdnz 0x1eb0f8
  01eb124  lis 4, 31
  01eb128  addi 4, 4, -21168
  01eb12c  lfs 3, 16(4)
  01eb130  fadds 31, 31, 3
  01eb134  fmadds 31, 31, 1, 2
  01eb138  ori 4, 3, 0
  01eb13c  fmr 1, 31
  01eb140  ori 3, 31, 0
  01eb144  li 6, 5
  01eb148  li 7, 1
  01eb14c  li 8, 0
  01eb150  bl 0x10ad80
  01eb154  nop
  01eb158  li 3, 250
  01eb15c  stb 3, 279(30)
  01eb160  b 0x1eb380
  01eb164  li 4, 10
  01eb168  lis 5, 118
  01eb16c  lis 6, 114
  01eb170  stb 4, 32(31)
  01eb174  lis 4, 118
  01eb178  lfs 1, 23592(5)
  01eb17c  lfs 2, -3052(6)
  01eb180  li 5, 0
  01eb184  fmuls 1, 1, 2
  01eb188  rlwimi 3, 5, 0, 19, 19
  01eb18c  lis 5, 16416
  01eb190  lis 6, 16544
  01eb194  sth 3, 52(31)
  01eb198  stfs 1, 120(30)
  01eb19c  lfs 1, 23588(4)
  01eb1a0  stw 5, 176(30)
  01eb1a4  fmuls 1, 1, 2
  01eb1a8  stw 6, 180(30)
  01eb1ac  lis 6, 115
  01eb1b0  addic 6, 6, 22784
  01eb1b4  stfs 1, 124(30)
  01eb1b8  lwz 4, 16(29)
  01eb1bc  lwz 3, 20(29)
  01eb1c0  lfs 1, 16(29)
  01eb1c4  lfs 2, 20(29)
  01eb1c8  fabs 3, 1
  01eb1cc  fabs 2, 2
  01eb1d0  rlwinm 5, 3, 3, 29, 29
  01eb1d4  addic 3, 30, 96
  01eb1d8  fsubs 1, 3, 2
  01eb1dc  stfs 1, 120(1)
  01eb1e0  lwz 7, 120(1)
  01eb1e4  lfs 1, 120(1)
  01eb1e8  rlwimi 5, 7, 2, 30, 30
  01eb1ec  fsub 4, 1, 31
  01eb1f0  fsub 5, 1, 31
  01eb1f4  rlwimi 5, 4, 4, 28, 28
  01eb1f8  ori 4, 6, 0
  01eb1fc  rlwimi 4, 5, 2, 26, 28
  01eb200  slwi 5, 5, 2
  01eb204  clrldi 4, 4, 32
  01eb208  fsel 4, 4, 3, 2
  01eb20c  lfsx 1, 6, 5
  01eb210  fsel 3, 5, 2, 3
  01eb214  lfs 2, 4(4)
  01eb218  fcmpu 0, 4, 31
  01eb21c  bt 1, 0x1eb224
  01eb220  b 0x1eb344
  01eb224  fsubs 5, 3, 4
  01eb228  fadds 3, 3, 4
  01eb22c  addic 4, 1, 16
  01eb230  li 8, 2
  01eb234  addic 6, 4, 128
  01eb238  addic 5, 4, 112
  01eb23c  mtctr 8
  01eb240  fdivs 3, 5, 3
  01eb244  fmuls 4, 3, 3
  01eb248  stfs 3, 140(1)
  01eb24c  stfs 3, 132(1)
  01eb250  stfs 3, 136(1)
  01eb254  stfs 3, 128(1)
  01eb258  lfs 6, 140(1)
  01eb25c  lfs 7, 132(1)
  01eb260  lfs 8, 136(1)
  01eb264  fmuls 5, 4, 4
  01eb268  fmuls 7, 7, 4
  01eb26c  fmuls 6, 6, 5
  01eb270  fmuls 3, 5, 5
  01eb274  fmuls 5, 8, 5
  01eb278  stfs 7, 132(1)
  01eb27c  fmuls 4, 6, 4
  01eb280  stfs 5, 136(1)
  01eb284  stfs 4, 140(1)
  01eb288  lfs 4, 112(4)
  01eb28c  fmuls 4, 4, 3
  01eb290  stfs 4, 128(4)
  01eb294  lfs 4, 4(5)
  01eb298  addic 5, 5, 8
  01eb29c  fmuls 4, 4, 3
  01eb2a0  addic 4, 4, 8
  01eb2a4  stfs 4, 4(6)
  01eb2a8  addic 6, 6, 8
  01eb2ac  bdnz 0x1eb288
  01eb2b0  li 6, 4
  01eb2b4  ori 4, 1, 0
  01eb2b8  mtctr 6
  01eb2bc  lis 5, 115
  01eb2c0  addic 6, 4, 128
  01eb2c4  addic 5, 5, 22752
  01eb2c8  ori 7, 6, 0
  01eb2cc  lfs 3, 128(4)
  01eb2d0  lfs 4, 0(5)
  01eb2d4  fmuls 3, 3, 4
  01eb2d8  lfs 4, 4(5)
  01eb2dc  addic 5, 5, 8
  01eb2e0  stfs 3, 128(4)
  01eb2e4  lfs 3, 4(6)
  01eb2e8  addic 4, 4, 8
  01eb2ec  fmuls 3, 3, 4
  01eb2f0  stfs 3, 4(6)
  01eb2f4  addic 6, 6, 8
  01eb2f8  bdnz 0x1eb2cc
  01eb2fc  ori 4, 1, 0
  01eb300  mtctr 8
  01eb304  lfs 3, 128(4)
  01eb308  lfs 4, 4(7)
  01eb30c  fadds 3, 31, 3
  01eb310  lfs 5, 8(7)
  01eb314  addic 4, 4, 16
  01eb318  lfs 31, 12(7)
  01eb31c  addic 7, 7, 16
  01eb320  fadds 3, 3, 4
  01eb324  fadds 3, 3, 5
  01eb328  fadds 31, 3, 31
  01eb32c  bdnz 0x1eb304
  01eb330  lis 4, 31
  01eb334  addi 4, 4, -21168
  01eb338  lfs 3, 16(4)
  01eb33c  fadds 31, 31, 3
  01eb340  fmadds 31, 31, 1, 2
  01eb344  ori 4, 3, 0
  01eb348  li 6, 6
  01eb34c  fmr 1, 31
  01eb350  ori 3, 31, 0
  01eb354  li 7, 1
  01eb358  li 8, 0
  01eb35c  bl 0x10ad80
  01eb360  nop
  01eb364  li 6, 250
  01eb368  ori 3, 31, 0
  01eb36c  li 4, 0
  01eb370  li 5, -1
  01eb374  stb 6, 279(30)
  01eb378  bl 0xfd8d0
  01eb37c  nop
  01eb380  addic 4, 30, 272
  01eb384  ori 3, 31, 0
  01eb388  bl 0x10c808
  01eb38c  nop
  01eb390  li 5, 255
  01eb394  addic 4, 30, 272
  01eb398  ori 3, 31, 0
  01eb39c  stb 5, 164(31)
  01eb3a0  bl 0x10c9a0
  01eb3a4  nop
  01eb3a8  lwz 4, 388(30)
  01eb3ac  lwz 3, 376(30)
  01eb3b0  cmpwi 4, 0
  01eb3b4  bt 2, 0x1eb3d4
  01eb3b8  lis 4, 31
  01eb3bc  lis 5, 118
  01eb3c0  addi 4, 4, -21168
  01eb3c4  lfs 1, 20(4)
  01eb3c8  lfs 2, 23612(5)
  01eb3cc  fadds 1, 2, 1
  01eb3d0  b 0x1eb3dc
  01eb3d4  lis 4, 118
  01eb3d8  lfs 1, 23612(4)
  01eb3dc  lis 4, 165
  01eb3e0  slwi 3, 3, 2
  01eb3e4  stfs 1, 384(30)
  01eb3e8  addic 5, 4, 7136
  01eb3ec  extsw 7, 3
  01eb3f0  ori 3, 31, 0
  01eb3f4  addic 4, 30, 288
  01eb3f8  li 6, 0
  01eb3fc  lwzx 5, 5, 7
  01eb400  li 7, 0
  01eb404  addic 8, 5, 16
  01eb408  lwz 9, 0(5)
  01eb40c  extsw 9, 9
  01eb410  bl 0x111ba0
  01eb414  nop
  01eb418  ori 4, 3, 0
  01eb41c  lwz 3, 352(30)
  01eb420  cmpwi 4, 2
  01eb424  bt 2, 0x1eb464
  01eb428  lfs 1, 20(31)
  01eb42c  lfs 2, 292(30)
  01eb430  lfs 3, 16(31)
  01eb434  fsubs 1, 1, 2
  01eb438  lfs 2, 288(30)
  01eb43c  fsubs 2, 3, 2
  01eb440  fmuls 1, 1, 1
  01eb444  fmadds 1, 2, 2, 1
  01eb448  lfs 2, 384(30)
  01eb44c  fsqrts 1, 1
  01eb450  fcmpu 0, 1, 2
  01eb454  cror 6, 0, 2
  01eb458  bt 6, 0x1eb464
  01eb45c  li 4, 2
  01eb460  stw 4, 356(30)
  01eb464  cmpwi 3, 0
  01eb468  bf 2, 0x1eb47c
  01eb46c  lis 3, 151
  01eb470  addic 3, 3, -25376
  01eb474  lwz 3, 8320(3)
  01eb478  stw 3, 352(30)
  01eb47c  ld 0, 240(1)
  01eb480  mtlr 0
  01eb484  lfd 31, 216(1)
  01eb488  ld 29, 192(1)
  01eb48c  ld 30, 200(1)
  01eb490  ld 31, 208(1)
  01eb494  addi 1, 1, 224
  01eb498  blr

UpdateMoby_1169:   # 0x1eb4f8, 0x13b4 bytes
  01eb4f8  stdu 1, -320(1)
  01eb4fc  mflr 0
  01eb500  std 0, 336(1)
  01eb504  stfd 28, 288(1)
  01eb508  stfd 29, 296(1)
  01eb50c  stfd 30, 304(1)
  01eb510  stfd 31, 312(1)
  01eb514  std 31, 280(1)
  01eb518  std 30, 272(1)
  01eb51c  ori 31, 3, 0
  01eb520  std 29, 264(1)
  01eb524  std 28, 256(1)
  01eb528  std 27, 248(1)
  01eb52c  lwz 30, 120(31)
  01eb530  bl 0x1ead68
  01eb534  lbz 3, 32(31)
  01eb538  lwz 29, 352(30)
  01eb53c  cmpwi 3, 4
  01eb540  bt 1, 0x1eb574
  01eb544  cmpwi 3, 1
  01eb548  bt 1, 0x1eb560
  01eb54c  cmpwi 3, -1
  01eb550  bf 1, 0x1ec878
  01eb554  cmpwi 3, 0
  01eb558  bf 1, 0x1eb5a0
  01eb55c  b 0x1eb7b8
  01eb560  cmpwi 3, 2
  01eb564  bf 1, 0x1eb9f4
  01eb568  cmpwi 3, 3
  01eb56c  bf 1, 0x1ebb04
  01eb570  b 0x1ebbec
  01eb574  cmpwi 3, 10
  01eb578  bt 2, 0x1ec848
  01eb57c  cmpwi 3, 9
  01eb580  bt 2, 0x1ec7b4
  01eb584  cmpwi 3, 8
  01eb588  bt 2, 0x1ec4cc
  01eb58c  cmpwi 3, 7
  01eb590  bt 2, 0x1ec1b8
  01eb594  cmpwi 3, 5
  01eb598  bt 2, 0x1ebfc0
  01eb59c  b 0x1ec878
  01eb5a0  lwz 3, 372(30)
  01eb5a4  cmpwi 3, -1
  01eb5a8  bf 2, 0x1eb5d4
  01eb5ac  lis 3, 101
  01eb5b0  lhz 4, 178(31)
  01eb5b4  addic 3, 3, 18924
  01eb5b8  extsh 4, 4
  01eb5bc  bl 0x5cd098
  01eb5c0  nop
  01eb5c4  ori 3, 31, 0
  01eb5c8  bl 0xefb38
  01eb5cc  nop
  01eb5d0  b 0x1ec878
  01eb5d4  lis 4, 165
  01eb5d8  slwi 5, 3, 2
  01eb5dc  addic 3, 4, 7136
  01eb5e0  extsw 4, 5
  01eb5e4  lwzx 4, 3, 4
  01eb5e8  lwz 4, 0(4)
  01eb5ec  cmpwi 4, 0
  01eb5f0  bf 2, 0x1eb61c
  01eb5f4  lis 3, 101
  01eb5f8  lhz 4, 178(31)
  01eb5fc  addic 3, 3, 18964
  01eb600  extsh 4, 4
  01eb604  bl 0x5cd098
  01eb608  nop
  01eb60c  ori 3, 31, 0
  01eb610  bl 0xefb38
  01eb614  nop
  01eb618  b 0x1ec878
  01eb61c  lwz 4, 376(30)
  01eb620  cmpwi 4, -1
  01eb624  bf 2, 0x1eb650
  01eb628  lis 3, 101
  01eb62c  lhz 4, 178(31)
  01eb630  addic 3, 3, 19028
  01eb634  extsh 4, 4
  01eb638  bl 0x5cd098
  01eb63c  nop
  01eb640  ori 3, 31, 0
  01eb644  bl 0xefb38
  01eb648  nop
  01eb64c  b 0x1ec878
  01eb650  slwi 4, 4, 2
  01eb654  extsw 4, 4
  01eb658  lwzx 3, 3, 4
  01eb65c  lwz 3, 0(3)
  01eb660  cmpwi 3, 0
  01eb664  bf 2, 0x1eb690
  01eb668  lis 3, 101
  01eb66c  lhz 4, 178(31)
  01eb670  addic 3, 3, 19068
  01eb674  extsh 4, 4
  01eb678  bl 0x5cd098
  01eb67c  nop
  01eb680  ori 3, 31, 0
  01eb684  bl 0xefb38
  01eb688  nop
  01eb68c  b 0x1ec878
  01eb690  lwz 3, 368(30)
  01eb694  cmpwi 3, -1
  01eb698  bf 2, 0x1eb6c4
  01eb69c  lis 3, 101
  01eb6a0  lhz 4, 178(31)
  01eb6a4  addic 3, 3, 19132
  01eb6a8  extsh 4, 4
  01eb6ac  bl 0x5cd098
  01eb6b0  nop
  01eb6b4  ori 3, 31, 0
  01eb6b8  bl 0xefb38
  01eb6bc  nop
  01eb6c0  b 0x1ec878
  01eb6c4  li 3, 2
  01eb6c8  bl 0xfc620
  01eb6cc  nop
  01eb6d0  cmpwi 3, 0
  01eb6d4  bt 2, 0x1eb6ec
  01eb6d8  lis 3, 0
  01eb6dc  lhz 4, 52(31)
  01eb6e0  ori 3, 3, 32768
  01eb6e4  or 3, 4, 3
  01eb6e8  sth 3, 52(31)
  01eb6ec  lis 29, 16384
  01eb6f0  li 4, 2
  01eb6f4  li 28, 1
  01eb6f8  addic 3, 30, 192
  01eb6fc  stw 29, 32(30)
  01eb700  sth 4, 36(30)
  01eb704  stb 28, 40(30)
  01eb708  bl 0x100f8c
  01eb70c  nop
  01eb710  lis 4, 31
  01eb714  stw 29, 200(30)
  01eb718  lis 3, 16128
  01eb71c  addi 29, 4, -19300
  01eb720  lis 27, 118
  01eb724  stw 3, 204(30)
  01eb728  lfs 1, 0(29)
  01eb72c  lfs 2, 23576(27)
  01eb730  fmuls 1, 2, 1
  01eb734  bl 0x502758
  01eb738  nop
  01eb73c  stw 3, 192(30)
  01eb740  lfs 1, 4(29)
  01eb744  lis 5, 165
  01eb748  lfs 2, 23576(27)
  01eb74c  lis 3, 118
  01eb750  lis 4, 114
  01eb754  lwz 6, 368(30)
  01eb758  fmuls 1, 2, 1
  01eb75c  slwi 6, 6, 7
  01eb760  lwz 5, 7128(5)
  01eb764  addc 5, 5, 6
  01eb768  lis 6, 118
  01eb76c  clrldi 5, 5, 32
  01eb770  stfs 1, 196(30)
  01eb774  lfs 1, 23596(3)
  01eb778  lfs 2, -3052(4)
  01eb77c  fmuls 1, 1, 2
  01eb780  stfs 1, 228(30)
  01eb784  lfs 1, 48(5)
  01eb788  stfs 1, 16(31)
  01eb78c  lfs 1, 52(5)
  01eb790  stfs 1, 20(31)
  01eb794  lfs 1, 56(5)
  01eb798  stfs 1, 24(31)
  01eb79c  lfs 2, 60(5)
  01eb7a0  stfs 2, 28(31)
  01eb7a4  lfs 2, 23616(6)
  01eb7a8  stb 28, 32(31)
  01eb7ac  fsubs 1, 1, 2
  01eb7b0  stfs 1, 24(31)
  01eb7b4  b 0x1ec878
  01eb7b8  lwz 3, 356(30)
  01eb7bc  cmpwi 3, 2
  01eb7c0  bt 2, 0x1ec878
  01eb7c4  lwz 3, 400(30)
  01eb7c8  cmpwi 3, 0
  01eb7cc  bf 2, 0x1ec878
  01eb7d0  lis 4, 118
  01eb7d4  vspltisw 2, -1
  01eb7d8  li 5, 23608
  01eb7dc  lbz 3, 33(31)
  01eb7e0  lis 6, 114
  01eb7e4  li 7, -3056
  01eb7e8  vslw 4, 2, 2
  01eb7ec  cmpwi 3, -1
  01eb7f0  <unknown>
  01eb7f4  <unknown>
  01eb7f8  vmaddfp 3, 3, 2, 4
  01eb7fc  bt 2, 0x1eb884
  01eb800  lis 4, 165
  01eb804  slwi 3, 3, 2
  01eb808  addic 4, 4, -28284
  01eb80c  lwzx 3, 4, 3
  01eb810  cmpwi 3, 0
  01eb814  bt 2, 0x1eb884
  01eb818  lis 4, 31
  01eb81c  vspltisw 4, -1
  01eb820  li 5, 8
  01eb824  addi 4, 4, -19300
  01eb828  li 6, 400
  01eb82c  vslw 4, 4, 4
  01eb830  <unknown>
  01eb834  lis 5, 164
  01eb838  vspltw 5, 5, 0
  01eb83c  vmaddfp 2, 2, 5, 4
  01eb840  lwz 5, -28512(5)
  01eb844  vctsxs 2, 2, 0
  01eb848  vspltw 2, 2, 0
  01eb84c  lhz 4, 0(3)
  01eb850  rlwinm 4, 4, 8, 9, 23
  01eb854  addc 4, 5, 4
  01eb858  clrldi 4, 4, 32
  01eb85c  lhz 7, 166(4)
  01eb860  lwz 4, 120(4)
  01eb864  cmpwi 7, 1169
  01eb868  bf 2, 0x1eb870
  01eb86c  stvewx 2, 6, 4
  01eb870  lhz 4, 0(3)
  01eb874  addic 3, 3, 2
  01eb878  extsh 4, 4
  01eb87c  cmpwi 4, 0
  01eb880  bf 0, 0x1eb84c
  01eb884  li 3, 2
  01eb888  lis 4, 165
  01eb88c  li 5, 16
  01eb890  addic 4, 4, 7136
  01eb894  stb 3, 32(31)
  01eb898  lwz 3, 372(30)
  01eb89c  li 6, 64
  01eb8a0  slwi 3, 3, 2
  01eb8a4  extsw 3, 3
  01eb8a8  lis 7, 31
  01eb8ac  vspltisw 11, -1
  01eb8b0  lwzx 3, 4, 3
  01eb8b4  <unknown>
  01eb8b8  li 4, 20
  01eb8bc  <unknown>
  01eb8c0  vsubfp 2, 4, 2
  01eb8c4  li 5, 68
  01eb8c8  vrefp 4, 3
  01eb8cc  vspltisw 10, -1
  01eb8d0  lis 8, 118
  01eb8d4  li 9, 23600
  01eb8d8  lis 10, 114
  01eb8dc  li 11, -3048
  01eb8e0  vspltw 5, 2, 0
  01eb8e4  li 12, 24
  01eb8e8  stvewx 5, 6, 30
  01eb8ec  <unknown>
  01eb8f0  <unknown>
  01eb8f4  vsubfp 5, 5, 6
  01eb8f8  addi 4, 7, -19300
  01eb8fc  vspltisw 6, -1
  01eb900  li 7, 12
  01eb904  vslw 6, 6, 6
  01eb908  li 29, 16
  01eb90c  vspltw 7, 5, 0
  01eb910  li 28, 20
  01eb914  stvewx 7, 5, 30
  01eb918  lfs 1, 24(3)
  01eb91c  lfs 2, 24(31)
  01eb920  fsubs 1, 1, 2
  01eb924  vspltisw 7, -1
  01eb928  vslw 7, 7, 7
  01eb92c  stfs 1, 72(30)
  01eb930  lfs 1, 28(3)
  01eb934  stfs 1, 76(30)
  01eb938  <unknown>
  01eb93c  vspltw 8, 8, 0
  01eb940  li 7, 0
  01eb944  vnmsubfp 9, 4, 3, 8
  01eb948  vmaddfp 4, 4, 9, 6
  01eb94c  vslw 9, 11, 11
  01eb950  vslw 6, 10, 10
  01eb954  vspltisw 10, -1
  01eb958  vslw 10, 10, 10
  01eb95c  vnmsubfp 11, 4, 3, 8
  01eb960  vmaddfp 4, 4, 11, 7
  01eb964  vspltisw 7, -1
  01eb968  vspltisw 11, -1
  01eb96c  vslw 7, 7, 7
  01eb970  vnmsubfp 8, 4, 3, 8
  01eb974  vmaddfp 3, 3, 3, 7
  01eb978  vspltisw 7, -1
  01eb97c  vslw 7, 7, 7
  01eb980  vmaddfp 4, 4, 8, 6
  01eb984  vslw 6, 11, 11
  01eb988  vmaddfp 2, 2, 4, 9
  01eb98c  vmaddfp 5, 5, 4, 10
  01eb990  vspltw 2, 2, 0
  01eb994  vspltw 5, 5, 0
  01eb998  stvewx 2, 6, 30
  01eb99c  stvewx 5, 5, 30
  01eb9a0  stw 7, 72(30)
  01eb9a4  <unknown>
  01eb9a8  <unknown>
  01eb9ac  <unknown>
  01eb9b0  vmaddfp 2, 2, 5, 6
  01eb9b4  <unknown>
  01eb9b8  <unknown>
  01eb9bc  vsubfp 5, 8, 5
  01eb9c0  vspltw 6, 6, 0
  01eb9c4  li 3, 72
  01eb9c8  <unknown>
  01eb9cc  vmaddfp 2, 3, 2, 7
  01eb9d0  vspltw 3, 8, 0
  01eb9d4  vspltisw 7, -1
  01eb9d8  vslw 7, 7, 7
  01eb9dc  vmaddfp 2, 2, 6, 5
  01eb9e0  vxor 2, 2, 3
  01eb9e4  vmaddfp 2, 4, 2, 7
  01eb9e8  vspltw 2, 2, 0
  01eb9ec  stvewx 2, 3, 30
  01eb9f0  b 0x1ec878
  01eb9f4  lfs 1, 16(31)
  01eb9f8  lfs 2, 64(30)
  01eb9fc  lis 3, 118
  01eba00  fadds 1, 1, 2
  01eba04  lfs 2, 20(31)
  01eba08  lfs 3, 24(31)
  01eba0c  lis 4, 114
  01eba10  lis 5, 31
  01eba14  addi 5, 5, -19300
  01eba18  stfs 1, 16(31)
  01eba1c  lfs 1, 68(30)
  01eba20  fadds 1, 2, 1
  01eba24  stfs 1, 20(31)
  01eba28  lfs 1, 72(30)
  01eba2c  fadds 1, 3, 1
  01eba30  stfs 1, 24(31)
  01eba34  lfs 1, 72(30)
  01eba38  lfs 2, 23600(3)
  01eba3c  lfs 3, -3048(4)
  01eba40  fnmsubs 1, 2, 3, 1
  01eba44  stfs 1, 72(30)
  01eba48  lfs 2, 24(5)
  01eba4c  fcmpu 0, 1, 2
  01eba50  cror 6, 1, 2
  01eba54  bt 6, 0x1ec878
  01eba58  lwz 4, 372(30)
  01eba5c  lis 3, 165
  01eba60  lwz 5, 24(31)
  01eba64  slwi 4, 4, 2
  01eba68  addic 3, 3, 7136
  01eba6c  extsw 4, 4
  01eba70  srawi 6, 5, 31
  01eba74  srwi 7, 6, 1
  01eba78  lwzx 3, 3, 4
  01eba7c  xor 4, 7, 5
  01eba80  subc 4, 4, 6
  01eba84  lwz 5, 24(3)
  01eba88  lfs 1, 24(3)
  01eba8c  srawi 6, 5, 31
  01eba90  srwi 3, 6, 1
  01eba94  xor 3, 3, 5
  01eba98  subc 3, 3, 6
  01eba9c  cmpw 4, 3
  01ebaa0  bf 0, 0x1ec878
  01ebaa4  li 3, 0
  01ebaa8  li 4, 3
  01ebaac  stw 3, 412(30)
  01ebab0  stfs 1, 24(31)
  01ebab4  lbz 3, 83(31)
  01ebab8  stb 4, 32(31)
  01ebabc  cmpwi 3, 4
  01ebac0  bt 2, 0x1ec878
  01ebac4  lis 3, 31
  01ebac8  lis 4, 114
  01ebacc  addi 3, 3, -19300
  01ebad0  li 5, 0
  01ebad4  lfs 1, 28(3)
  01ebad8  lfs 2, -3056(4)
  01ebadc  ori 3, 31, 0
  01ebae0  li 4, 4
  01ebae4  fmuls 1, 2, 1
  01ebae8  fctiwz 1, 1
  01ebaec  stfd 1, 232(1)
  01ebaf0  lwz 6, 236(1)
  01ebaf4  extsw 6, 6
  01ebaf8  bl 0xfddc0
  01ebafc  nop
  01ebb00  b 0x1ec878
  01ebb04  lwz 4, 372(30)
  01ebb08  lis 3, 165
  01ebb0c  lwz 5, 412(30)
  01ebb10  slwi 4, 4, 2
  01ebb14  addic 29, 3, 7136
  01ebb18  extsw 4, 4
  01ebb1c  slwi 5, 5, 4
  01ebb20  ori 3, 31, 0
  01ebb24  lwzx 29, 29, 4
  01ebb28  addc 4, 29, 5
  01ebb2c  addic 4, 4, 16
  01ebb30  clrldi 4, 4, 32
  01ebb34  bl 0x1ea988
  01ebb38  lwz 3, 412(30)
  01ebb3c  lfs 1, 20(31)
  01ebb40  slwi 4, 3, 4
  01ebb44  lfs 2, 16(31)
  01ebb48  addc 4, 29, 4
  01ebb4c  clrldi 4, 4, 32
  01ebb50  lfs 3, 20(4)
  01ebb54  lfs 4, 16(4)
  01ebb58  fsubs 1, 1, 3
  01ebb5c  fsubs 2, 2, 4
  01ebb60  lis 4, 31
  01ebb64  addi 4, 4, -19300
  01ebb68  fmuls 1, 1, 1
  01ebb6c  fmadds 1, 2, 2, 1
  01ebb70  lfs 2, 32(4)
  01ebb74  fsqrts 1, 1
  01ebb78  fcmpu 0, 1, 2
  01ebb7c  cror 6, 1, 2
  01ebb80  bt 6, 0x1ec878
  01ebb84  addic 3, 3, 1
  01ebb88  stw 3, 412(30)
  01ebb8c  lwz 4, 0(29)
  01ebb90  cmpw 3, 4
  01ebb94  bf 2, 0x1ec878
  01ebb98  li 3, 4
  01ebb9c  lbz 4, 83(31)
  01ebba0  cmpwi 4, 2
  01ebba4  stb 3, 32(31)
  01ebba8  bt 2, 0x1ec878
  01ebbac  lis 3, 31
  01ebbb0  lis 4, 114
  01ebbb4  addi 3, 3, -19300
  01ebbb8  li 5, 0
  01ebbbc  lfs 1, 28(3)
  01ebbc0  lfs 2, -3056(4)
  01ebbc4  ori 3, 31, 0
  01ebbc8  fmuls 1, 2, 1
  01ebbcc  li 4, 2
  01ebbd0  fctiwz 1, 1
  01ebbd4  stfd 1, 232(1)
  01ebbd8  lwz 6, 236(1)
  01ebbdc  extsw 6, 6
  01ebbe0  bl 0xfddc0
  01ebbe4  nop
  01ebbe8  b 0x1ec878
  01ebbec  lfs 1, 16(29)
  01ebbf0  lfs 2, 16(31)
  01ebbf4  lfs 3, 20(29)
  01ebbf8  lis 3, 31
  01ebbfc  lfs 4, 20(31)
  01ebc00  fsubs 1, 1, 2
  01ebc04  addi 3, 3, -19300
  01ebc08  fsubs 2, 3, 4
  01ebc0c  lis 4, 115
  01ebc10  addic 4, 4, 22784
  01ebc14  fabs 3, 1
  01ebc18  fabs 5, 2
  01ebc1c  stfs 1, 156(1)
  01ebc20  stfs 2, 160(1)
  01ebc24  fsubs 1, 3, 5
  01ebc28  stfs 1, 164(1)
  01ebc2c  lwz 5, 156(1)
  01ebc30  lfs 4, 24(3)
  01ebc34  lfs 1, 156(1)
  01ebc38  lwz 3, 160(1)
  01ebc3c  lfs 2, 160(1)
  01ebc40  fabs 1, 1
  01ebc44  lwz 6, 164(1)
  01ebc48  rlwinm 3, 3, 3, 29, 29
  01ebc4c  fabs 6, 2
  01ebc50  lfs 2, 164(1)
  01ebc54  rlwimi 3, 6, 2, 30, 30
  01ebc58  fsub 7, 2, 4
  01ebc5c  rlwimi 3, 5, 4, 28, 28
  01ebc60  fsub 8, 2, 4
  01ebc64  ori 5, 4, 0
  01ebc68  rlwimi 5, 3, 2, 26, 28
  01ebc6c  slwi 3, 3, 2
  01ebc70  clrldi 5, 5, 32
  01ebc74  fsel 5, 7, 1, 5
  01ebc78  lfsx 1, 4, 3
  01ebc7c  lfs 2, 4(5)
  01ebc80  fsel 3, 8, 6, 3
  01ebc84  fcmpu 0, 5, 4
  01ebc88  bt 1, 0x1ebc90
  01ebc8c  b 0x1ebdb0
  01ebc90  fsubs 6, 3, 5
  01ebc94  fadds 3, 3, 5
  01ebc98  addic 3, 1, 16
  01ebc9c  li 7, 2
  01ebca0  addic 5, 3, 200
  01ebca4  addic 4, 3, 184
  01ebca8  mtctr 7
  01ebcac  fdivs 3, 6, 3
  01ebcb0  fmuls 5, 3, 3
  01ebcb4  stfs 3, 212(1)
  01ebcb8  stfs 3, 204(1)
  01ebcbc  stfs 3, 208(1)
  01ebcc0  stfs 3, 200(1)
  01ebcc4  lfs 7, 212(1)
  01ebcc8  lfs 8, 204(1)
  01ebccc  lfs 9, 208(1)
  01ebcd0  fmuls 6, 5, 5
  01ebcd4  fmuls 8, 8, 5
  01ebcd8  fmuls 7, 7, 6
  01ebcdc  fmuls 3, 6, 6
  01ebce0  fmuls 6, 9, 6
  01ebce4  stfs 8, 204(1)
  01ebce8  fmuls 5, 7, 5
  01ebcec  stfs 6, 208(1)
  01ebcf0  stfs 5, 212(1)
  01ebcf4  lfs 5, 184(3)
  01ebcf8  fmuls 5, 5, 3
  01ebcfc  stfs 5, 200(3)
  01ebd00  lfs 5, 4(4)
  01ebd04  addic 4, 4, 8
  01ebd08  fmuls 5, 5, 3
  01ebd0c  addic 3, 3, 8
  01ebd10  stfs 5, 4(5)
  01ebd14  addic 5, 5, 8
  01ebd18  bdnz 0x1ebcf4
  01ebd1c  li 5, 4
  01ebd20  ori 3, 1, 0
  01ebd24  mtctr 5
  01ebd28  lis 4, 115
  01ebd2c  addic 5, 3, 200
  01ebd30  addic 4, 4, 22752
  01ebd34  ori 6, 5, 0
  01ebd38  lfs 3, 200(3)
  01ebd3c  lfs 5, 0(4)
  01ebd40  fmuls 3, 3, 5
  01ebd44  lfs 5, 4(4)
  01ebd48  addic 4, 4, 8
  01ebd4c  stfs 3, 200(3)
  01ebd50  lfs 3, 4(5)
  01ebd54  addic 3, 3, 8
  01ebd58  fmuls 3, 3, 5
  01ebd5c  stfs 3, 4(5)
  01ebd60  addic 5, 5, 8
  01ebd64  bdnz 0x1ebd38
  01ebd68  ori 3, 1, 0
  01ebd6c  mtctr 7
  01ebd70  lfs 3, 200(3)
  01ebd74  fadds 3, 4, 3
  01ebd78  addic 3, 3, 16
  01ebd7c  lfs 4, 4(6)
  01ebd80  lfs 5, 8(6)
  01ebd84  lfs 6, 12(6)
  01ebd88  addic 6, 6, 16
  01ebd8c  fadds 3, 3, 4
  01ebd90  fadds 4, 3, 5
  01ebd94  fadds 4, 4, 6
  01ebd98  bdnz 0x1ebd70
  01ebd9c  lis 3, 31
  01ebda0  addi 3, 3, -19300
  01ebda4  lfs 3, 36(3)
  01ebda8  fadds 4, 4, 3
  01ebdac  fmadds 4, 4, 1, 2
  01ebdb0  lis 3, 31
  01ebdb4  fmr 1, 4
  01ebdb8  addi 28, 3, -19300
  01ebdbc  lfs 2, 40(28)
  01ebdc0  bl 0x5025e0
  01ebdc4  nop
  01ebdc8  lis 3, 114
  01ebdcc  lfs 2, 44(28)
  01ebdd0  lis 4, 114
  01ebdd4  lfs 4, 48(28)
  01ebdd8  fmr 31, 1
  01ebddc  addic 5, 30, 392
  01ebde0  lfs 3, -3048(3)
  01ebde4  lfs 5, -3052(4)
  01ebde8  addic 3, 31, 72
  01ebdec  fmuls 2, 3, 2
  01ebdf0  fmuls 4, 5, 4
  01ebdf4  fmr 3, 2
  01ebdf8  bl 0x10a2e0
  01ebdfc  nop
  01ebe00  lwz 3, 356(30)
  01ebe04  cmpwi 3, 2
  01ebe08  bf 2, 0x1ebe60
  01ebe0c  li 3, 7
  01ebe10  lbz 4, 83(31)
  01ebe14  cmpwi 4, 4
  01ebe18  stb 3, 32(31)
  01ebe1c  bt 2, 0x1ec878
  01ebe20  lis 3, 31
  01ebe24  lis 4, 114
  01ebe28  addi 3, 3, -19300
  01ebe2c  li 5, 0
  01ebe30  lfs 1, 28(3)
  01ebe34  lfs 2, -3056(4)
  01ebe38  ori 3, 31, 0
  01ebe3c  li 4, 4
  01ebe40  fmuls 1, 2, 1
  01ebe44  fctiwz 1, 1
  01ebe48  stfd 1, 232(1)
  01ebe4c  lwz 6, 236(1)
  01ebe50  extsw 6, 6
  01ebe54  bl 0xfddc0
  01ebe58  nop
  01ebe5c  b 0x1ec878
  01ebe60  lwz 3, 404(30)
  01ebe64  cmpwi 3, 0
  01ebe68  bf 2, 0x1ec878
  01ebe6c  li 3, 4
  01ebe70  bl 0xfc620
  01ebe74  nop
  01ebe78  cmpwi 3, 0
  01ebe7c  bf 2, 0x1ec878
  01ebe80  fmr 2, 31
  01ebe84  lfs 1, 72(31)
  01ebe88  bl 0x5026a0
  01ebe8c  nop
  01ebe90  lis 3, 31
  01ebe94  addi 3, 3, -19300
  01ebe98  lfs 2, 52(3)
  01ebe9c  fcmpu 0, 1, 2
  01ebea0  cror 6, 1, 2
  01ebea4  bt 6, 0x1ec878
  01ebea8  lwz 3, 376(30)
  01ebeac  addic 4, 31, 16
  01ebeb0  extsw 3, 3
  01ebeb4  addic 5, 29, 16
  01ebeb8  bl 0x113fa0
  01ebebc  nop
  01ebec0  cmpwi 3, 0
  01ebec4  bf 2, 0x1ec878
  01ebec8  lbz 3, 33(31)
  01ebecc  cmpwi 3, -1
  01ebed0  bt 2, 0x1ebf78
  01ebed4  lis 4, 165
  01ebed8  lis 5, 31
  01ebedc  addic 4, 4, -28284
  01ebee0  slwi 3, 3, 2
  01ebee4  addi 5, 5, -19300
  01ebee8  li 7, 56
  01ebeec  lis 9, 164
  01ebef0  lis 8, 114
  01ebef4  li 10, -3056
  01ebef8  lwzx 3, 4, 3
  01ebefc  li 6, 420
  01ebf00  <unknown>
  01ebf04  lwz 5, -28512(9)
  01ebf08  li 7, 404
  01ebf0c  vspltw 3, 3, 0
  01ebf10  <unknown>
  01ebf14  lhz 4, 0(3)
  01ebf18  rlwinm 4, 4, 8, 9, 23
  01ebf1c  addc 4, 5, 4
  01ebf20  clrldi 4, 4, 32
  01ebf24  lhz 8, 166(4)
  01ebf28  lwz 4, 120(4)
  01ebf2c  cmpwi 8, 1169
  01ebf30  bf 2, 0x1ebf64
  01ebf34  addi 8, 6, 16
  01ebf38  <unknown>
  01ebf3c  <unknown>
  01ebf40  vor 4, 4, 5
  01ebf44  vspltisw 5, -1
  01ebf48  vcfsx 4, 4, 0
  01ebf4c  vslw 5, 5, 5
  01ebf50  vaddfp 4, 4, 3
  01ebf54  vmaddfp 4, 2, 4, 5
  01ebf58  vctsxs 4, 4, 0
  01ebf5c  vspltw 4, 4, 0
  01ebf60  stvewx 4, 7, 4
  01ebf64  lhz 4, 0(3)
  01ebf68  addic 3, 3, 2
  01ebf6c  extsh 4, 4
  01ebf70  cmpwi 4, 0
  01ebf74  bf 0, 0x1ebf14
  01ebf78  lis 3, 31
  01ebf7c  li 4, 5
  01ebf80  vspltisw 2, -1
  01ebf84  addi 3, 3, -19300
  01ebf88  li 5, 60
  01ebf8c  lis 6, 114
  01ebf90  stb 4, 32(31)
  01ebf94  li 4, -3056
  01ebf98  vslw 2, 2, 2
  01ebf9c  <unknown>
  01ebfa0  li 3, 416
  01ebfa4  vspltw 3, 3, 0
  01ebfa8  <unknown>
  01ebfac  vmaddfp 2, 4, 3, 2
  01ebfb0  vctsxs 2, 2, 0
  01ebfb4  vspltw 2, 2, 0
  01ebfb8  stvewx 2, 3, 30
  01ebfbc  b 0x1ec878
  01ebfc0  lwz 3, 416(30)
  01ebfc4  cmpwi 3, 0
  01ebfc8  bt 2, 0x1ec1ac
  01ebfcc  lis 3, 31
  01ebfd0  lis 4, 114
  01ebfd4  addi 3, 3, -19300
  01ebfd8  lfs 1, 64(3)
  01ebfdc  lfs 2, -3056(4)
  01ebfe0  lfs 3, 68(3)
  01ebfe4  fmuls 1, 2, 1
  01ebfe8  lfs 2, 52(3)
  01ebfec  fdivs 3, 3, 1
  01ebff0  lfs 1, 72(31)
  01ebff4  fmuls 2, 3, 2
  01ebff8  bl 0x502578
  01ebffc  nop
  01ec000  lis 3, 161
  01ec004  stfs 1, 72(31)
  01ec008  lfs 7, 16(31)
  01ec00c  lwz 3, 1808(3)
  01ec010  lfs 9, 20(31)
  01ec014  srawi 4, 3, 2
  01ec018  lfs 11, 24(31)
  01ec01c  addze 4, 4
  01ec020  sldi 4, 4, 2
  01ec024  subc 3, 3, 4
  01ec028  cmpwi 3, 0
  01ec02c  bf 2, 0x1ec878
  01ec030  lfs 3, 196(31)
  01ec034  lfs 2, 192(31)
  01ec038  fmuls 1, 3, 3
  01ec03c  lfs 4, 200(31)
  01ec040  lis 3, 31
  01ec044  addi 3, 3, -19300
  01ec048  fmadds 1, 2, 2, 1
  01ec04c  lfs 5, 24(3)
  01ec050  fmadds 1, 4, 4, 1
  01ec054  fsqrts 1, 1
  01ec058  fcmpu 0, 1, 5
  01ec05c  bf 2, 0x1ec074
  01ec060  fmr 10, 5
  01ec064  lfs 12, 204(31)
  01ec068  fmr 8, 10
  01ec06c  fmr 6, 8
  01ec070  b 0x1ec094
  01ec074  lis 3, 31
  01ec078  addi 3, 3, -19300
  01ec07c  lfs 6, 72(3)
  01ec080  fdivs 10, 6, 1
  01ec084  lfs 12, 204(31)
  01ec088  fmuls 6, 2, 10
  01ec08c  fmuls 8, 3, 10
  01ec090  fmuls 10, 4, 10
  01ec094  lis 3, 118
  01ec098  lis 4, 114
  01ec09c  fadds 6, 6, 7
  01ec0a0  lfs 13, 23568(3)
  01ec0a4  lfs 0, -3052(4)
  01ec0a8  fmuls 31, 13, 0
  01ec0ac  stfs 12, 124(1)
  01ec0b0  lis 3, 31
  01ec0b4  fsub 30, 5, 1
  01ec0b8  addi 3, 3, -19300
  01ec0bc  fsub 29, 1, 5
  01ec0c0  fsub 28, 1, 5
  01ec0c4  stfs 6, 112(1)
  01ec0c8  fadds 6, 8, 9
  01ec0cc  fadds 8, 10, 11
  01ec0d0  fdivs 31, 31, 1
  01ec0d4  lis 4, 151
  01ec0d8  addic 4, 4, -25376
  01ec0dc  stfs 6, 116(1)
  01ec0e0  lfs 6, 76(3)
  01ec0e4  stfs 12, 140(1)
  01ec0e8  fadds 6, 8, 6
  01ec0ec  fsub 10, 5, 1
  01ec0f0  fsub 11, 5, 1
  01ec0f4  fsub 1, 1, 5
  01ec0f8  stfs 6, 120(1)
  01ec0fc  fmuls 2, 2, 31
  01ec100  fmuls 3, 3, 31
  01ec104  fmuls 4, 4, 31
  01ec108  fsel 6, 10, 5, 2
  01ec10c  fsel 8, 11, 5, 3
  01ec110  fsel 5, 30, 5, 4
  01ec114  fsel 2, 29, 6, 2
  01ec118  fsel 3, 28, 8, 3
  01ec11c  fsel 1, 1, 5, 4
  01ec120  stfs 2, 128(1)
  01ec124  stfs 3, 132(1)
  01ec128  stfs 1, 136(1)
  01ec12c  lfs 1, 20(29)
  01ec130  lfs 2, 16(29)
  01ec134  fsubs 1, 1, 9
  01ec138  fsubs 2, 2, 7
  01ec13c  fmuls 1, 1, 1
  01ec140  fmadds 1, 2, 2, 1
  01ec144  lfs 2, 80(3)
  01ec148  lfs 3, 544(4)
  01ec14c  fsubs 2, 3, 2
  01ec150  fmuls 3, 13, 0
  01ec154  fsqrts 1, 1
  01ec158  fdivs 1, 2, 1
  01ec15c  fmuls 2, 3, 1
  01ec160  stfs 2, 136(1)
  01ec164  lfs 1, 12(3)
  01ec168  fmuls 1, 0, 1
  01ec16c  fcmpu 0, 2, 1
  01ec170  cror 6, 0, 2
  01ec174  bt 6, 0x1ec17c
  01ec178  stfs 1, 136(1)
  01ec17c  addic 4, 1, 128
  01ec180  ori 5, 31, 0
  01ec184  li 6, 1
  01ec188  addic 3, 1, 112
  01ec18c  bl 0x49fba0
  01ec190  nop
  01ec194  li 4, 255
  01ec198  li 5, 224
  01ec19c  li 6, 224
  01ec1a0  bl 0xf1ec8
  01ec1a4  nop
  01ec1a8  b 0x1ec878
  01ec1ac  li 3, 4
  01ec1b0  stb 3, 32(31)
  01ec1b4  b 0x1ec878
  01ec1b8  lwz 3, 372(30)
  01ec1bc  lis 29, 165
  01ec1c0  lfs 1, 20(31)
  01ec1c4  slwi 3, 3, 2
  01ec1c8  lfs 2, 16(31)
  01ec1cc  addic 29, 29, 7136
  01ec1d0  extsw 3, 3
  01ec1d4  lis 4, 31
  01ec1d8  lwzx 3, 29, 3
  01ec1dc  addi 4, 4, -19300
  01ec1e0  lfs 3, 20(3)
  01ec1e4  lfs 4, 16(3)
  01ec1e8  fsubs 1, 1, 3
  01ec1ec  fsubs 2, 2, 4
  01ec1f0  fmuls 1, 1, 1
  01ec1f4  fmadds 1, 2, 2, 1
  01ec1f8  lfs 2, 32(4)
  01ec1fc  fsqrts 1, 1
  01ec200  fcmpu 0, 1, 2
  01ec204  cror 6, 0, 2
  01ec208  bt 6, 0x1ec24c
  01ec20c  addic 4, 3, 16
  01ec210  ori 3, 31, 0
  01ec214  bl 0x1ea988
  01ec218  lwz 3, 356(30)
  01ec21c  cmpwi 3, 2
  01ec220  bt 2, 0x1ec878
  01ec224  lwz 4, 372(30)
  01ec228  li 3, 3
  01ec22c  slwi 4, 4, 2
  01ec230  extsw 4, 4
  01ec234  lwzx 4, 29, 4
  01ec238  lwz 4, 0(4)
  01ec23c  addic 4, 4, -1
  01ec240  stw 4, 412(30)
  01ec244  stb 3, 32(31)
  01ec248  b 0x1ec878
  01ec24c  lwz 3, 400(30)
  01ec250  cmpwi 3, 0
  01ec254  bf 2, 0x1ec480
  01ec258  lis 4, 118
  01ec25c  vspltisw 2, -1
  01ec260  li 5, 23608
  01ec264  lbz 3, 33(31)
  01ec268  lis 6, 114
  01ec26c  li 7, -3056
  01ec270  vslw 4, 2, 2
  01ec274  cmpwi 3, -1
  01ec278  <unknown>
  01ec27c  <unknown>
  01ec280  vmaddfp 3, 3, 2, 4
  01ec284  bt 2, 0x1ec30c
  01ec288  lis 4, 165
  01ec28c  slwi 3, 3, 2
  01ec290  addic 4, 4, -28284
  01ec294  lwzx 3, 4, 3
  01ec298  cmpwi 3, 0
  01ec29c  bt 2, 0x1ec30c
  01ec2a0  lis 4, 31
  01ec2a4  vspltisw 4, -1
  01ec2a8  li 5, 8
  01ec2ac  addi 4, 4, -19300
  01ec2b0  li 6, 400
  01ec2b4  vslw 4, 4, 4
  01ec2b8  <unknown>
  01ec2bc  lis 5, 164
  01ec2c0  vspltw 5, 5, 0
  01ec2c4  vmaddfp 2, 2, 5, 4
  01ec2c8  lwz 5, -28512(5)
  01ec2cc  vctsxs 2, 2, 0
  01ec2d0  vspltw 2, 2, 0
  01ec2d4  lhz 4, 0(3)
  01ec2d8  rlwinm 4, 4, 8, 9, 23
  01ec2dc  addc 4, 5, 4
  01ec2e0  clrldi 4, 4, 32
  01ec2e4  lhz 7, 166(4)
  01ec2e8  lwz 4, 120(4)
  01ec2ec  cmpwi 7, 1169
  01ec2f0  bf 2, 0x1ec2f8
  01ec2f4  stvewx 2, 6, 4
  01ec2f8  lhz 4, 0(3)
  01ec2fc  addic 3, 3, 2
  01ec300  extsh 4, 4
  01ec304  cmpwi 4, 0
  01ec308  bf 0, 0x1ec2d4
  01ec30c  lis 3, 165
  01ec310  lwz 6, 368(30)
  01ec314  li 5, 16
  01ec318  li 4, 48
  01ec31c  vrefp 6, 3
  01ec320  slwi 6, 6, 7
  01ec324  vspltisw 9, -1
  01ec328  li 7, 23616
  01ec32c  lwz 3, 7128(3)
  01ec330  <unknown>
  01ec334  lis 8, 31
  01ec338  addc 3, 3, 6
  01ec33c  li 5, 52
  01ec340  clrldi 3, 3, 32
  01ec344  vslw 9, 9, 9
  01ec348  li 6, 56
  01ec34c  vspltisw 12, -1
  01ec350  <unknown>
  01ec354  lis 4, 118
  01ec358  vsubfp 2, 4, 2
  01ec35c  <unknown>
  01ec360  li 5, 8
  01ec364  <unknown>
  01ec368  li 6, 64
  01ec36c  lfs 1, 60(3)
  01ec370  li 3, 20
  01ec374  <unknown>
  01ec378  addi 4, 8, -19300
  01ec37c  stb 5, 32(31)
  01ec380  li 5, 12
  01ec384  vsubfp 5, 5, 7
  01ec388  li 7, 0
  01ec38c  vspltw 8, 2, 0
  01ec390  li 8, 23600
  01ec394  lis 9, 114
  01ec398  stvewx 8, 6, 30
  01ec39c  <unknown>
  01ec3a0  stfs 1, 76(30)
  01ec3a4  <unknown>
  01ec3a8  vspltw 10, 10, 0
  01ec3ac  vsubfp 4, 4, 8
  01ec3b0  vslw 8, 12, 12
  01ec3b4  li 3, 68
  01ec3b8  vnmsubfp 11, 6, 3, 10
  01ec3bc  vspltisw 12, -1
  01ec3c0  lis 5, 118
  01ec3c4  li 10, -3048
  01ec3c8  li 11, 24
  01ec3cc  li 12, 16
  01ec3d0  li 29, 20
  01ec3d4  vmaddfp 6, 6, 11, 9
  01ec3d8  vspltisw 9, -1
  01ec3dc  vspltisw 11, -1
  01ec3e0  vslw 7, 9, 9
  01ec3e4  vslw 11, 11, 11
  01ec3e8  vnmsubfp 9, 6, 3, 10
  01ec3ec  vmaddfp 6, 6, 9, 8
  01ec3f0  vslw 8, 12, 12
  01ec3f4  vnmsubfp 9, 6, 3, 10
  01ec3f8  vspltisw 10, -1
  01ec3fc  vslw 10, 10, 10
  01ec400  vmaddfp 3, 3, 3, 10
  01ec404  vmaddfp 6, 6, 9, 7
  01ec408  vspltisw 7, -1
  01ec40c  vspltisw 9, -1
  01ec410  vslw 7, 7, 7
  01ec414  vmaddfp 2, 2, 6, 11
  01ec418  vmaddfp 4, 4, 6, 8
  01ec41c  vslw 8, 9, 9
  01ec420  vspltw 2, 2, 0
  01ec424  vspltw 4, 4, 0
  01ec428  stvewx 2, 6, 30
  01ec42c  stvewx 4, 3, 30
  01ec430  stw 7, 72(30)
  01ec434  <unknown>
  01ec438  <unknown>
  01ec43c  <unknown>
  01ec440  vmaddfp 2, 2, 4, 7
  01ec444  vsubfp 4, 9, 5
  01ec448  <unknown>
  01ec44c  li 3, 72
  01ec450  <unknown>
  01ec454  vspltw 5, 5, 0
  01ec458  vspltisw 9, -1
  01ec45c  vspltw 7, 7, 0
  01ec460  vmaddfp 2, 3, 2, 8
  01ec464  vslw 3, 9, 9
  01ec468  vmaddfp 2, 2, 5, 4
  01ec46c  vxor 2, 2, 7
  01ec470  vmaddfp 2, 6, 2, 3
  01ec474  vspltw 2, 2, 0
  01ec478  stvewx 2, 3, 30
  01ec47c  b 0x1ec878
  01ec480  lbz 3, 83(31)
  01ec484  cmpwi 3, 0
  01ec488  bt 2, 0x1ec878
  01ec48c  lis 3, 31
  01ec490  lis 4, 114
  01ec494  addi 3, 3, -19300
  01ec498  li 5, 0
  01ec49c  lfs 1, 28(3)
  01ec4a0  lfs 2, -3056(4)
  01ec4a4  ori 3, 31, 0
  01ec4a8  li 4, 0
  01ec4ac  fmuls 1, 2, 1
  01ec4b0  fctiwz 1, 1
  01ec4b4  stfd 1, 232(1)
  01ec4b8  lwz 6, 236(1)
  01ec4bc  extsw 6, 6
  01ec4c0  bl 0xfddc0
  01ec4c4  nop
  01ec4c8  b 0x1ec878
  01ec4cc  lfs 1, 16(31)
  01ec4d0  lfs 2, 64(30)
  01ec4d4  lis 3, 118
  01ec4d8  fadds 1, 1, 2
  01ec4dc  lfs 2, 20(31)
  01ec4e0  lfs 3, 24(31)
  01ec4e4  lis 4, 114
  01ec4e8  lis 5, 31
  01ec4ec  addi 5, 5, -19300
  01ec4f0  stfs 1, 16(31)
  01ec4f4  lfs 1, 68(30)
  01ec4f8  fadds 1, 2, 1
  01ec4fc  stfs 1, 20(31)
  01ec500  lfs 1, 72(30)
  01ec504  fadds 1, 3, 1
  01ec508  stfs 1, 24(31)
  01ec50c  lfs 1, 72(30)
  01ec510  lfs 2, 23600(3)
  01ec514  lfs 3, -3048(4)
  01ec518  fnmsubs 1, 2, 3, 1
  01ec51c  stfs 1, 72(30)
  01ec520  lfs 3, 24(5)
  01ec524  lbz 3, 83(31)
  01ec528  fcmpu 0, 1, 3
  01ec52c  cmpwi 1, 3, 0
  01ec530  cror 2, 1, 2
  01ec534  bt 2, 0x1ec878
  01ec538  lis 3, 165
  01ec53c  lwz 5, 368(30)
  01ec540  lis 4, 118
  01ec544  slwi 5, 5, 7
  01ec548  lwz 3, 7128(3)
  01ec54c  lfs 2, 23616(4)
  01ec550  addc 3, 3, 5
  01ec554  lfs 4, 24(31)
  01ec558  clrldi 3, 3, 32
  01ec55c  lfs 1, 56(3)
  01ec560  fsubs 2, 1, 2
  01ec564  fcmpu 0, 4, 2
  01ec568  cror 2, 1, 2
  01ec56c  bt 2, 0x1ec878
  01ec570  lfs 2, 48(3)
  01ec574  lis 4, 118
  01ec578  lis 5, 165
  01ec57c  stfs 2, 16(31)
  01ec580  lfs 4, 52(3)
  01ec584  stfs 1, 24(31)
  01ec588  stfs 4, 20(31)
  01ec58c  lfs 5, 60(3)
  01ec590  addic 3, 5, 7136
  01ec594  stfs 5, 28(31)
  01ec598  lfs 5, 23616(4)
  01ec59c  lwz 4, 372(30)
  01ec5a0  fsubs 1, 1, 5
  01ec5a4  slwi 4, 4, 2
  01ec5a8  extsw 4, 4
  01ec5ac  lwzx 3, 3, 4
  01ec5b0  stfs 1, 24(31)
  01ec5b4  lfs 1, 16(3)
  01ec5b8  lfs 5, 20(3)
  01ec5bc  fsubs 1, 1, 2
  01ec5c0  fsubs 2, 5, 4
  01ec5c4  lis 3, 115
  01ec5c8  addic 3, 3, 22784
  01ec5cc  fabs 4, 1
  01ec5d0  fabs 5, 2
  01ec5d4  stfs 1, 144(1)
  01ec5d8  stfs 2, 148(1)
  01ec5dc  fsubs 1, 4, 5
  01ec5e0  stfs 1, 152(1)
  01ec5e4  lwz 4, 144(1)
  01ec5e8  lfs 1, 144(1)
  01ec5ec  lwz 5, 148(1)
  01ec5f0  lfs 2, 148(1)
  01ec5f4  fabs 1, 1
  01ec5f8  lwz 6, 152(1)
  01ec5fc  rlwinm 5, 5, 3, 29, 29
  01ec600  lfs 6, 152(1)
  01ec604  fabs 2, 2
  01ec608  rlwimi 5, 6, 2, 30, 30
  01ec60c  fsub 7, 6, 3
  01ec610  fsub 6, 6, 3
  01ec614  rlwimi 5, 4, 4, 28, 28
  01ec618  ori 4, 3, 0
  01ec61c  rlwimi 4, 5, 2, 26, 28
  01ec620  slwi 5, 5, 2
  01ec624  clrldi 4, 4, 32
  01ec628  fsel 5, 7, 1, 5
  01ec62c  lfsx 1, 3, 5
  01ec630  fsel 4, 6, 2, 4
  01ec634  lfs 2, 4(4)
  01ec638  fcmpu 0, 5, 3
  01ec63c  bt 1, 0x1ec644
  01ec640  b 0x1ec764
  01ec644  fsubs 6, 4, 5
  01ec648  fadds 4, 4, 5
  01ec64c  addic 3, 1, 16
  01ec650  li 7, 2
  01ec654  addic 5, 3, 168
  01ec658  addic 4, 3, 152
  01ec65c  mtctr 7
  01ec660  fdivs 4, 6, 4
  01ec664  fmuls 5, 4, 4
  01ec668  stfs 4, 180(1)
  01ec66c  stfs 4, 172(1)
  01ec670  stfs 4, 176(1)
  01ec674  stfs 4, 168(1)
  01ec678  lfs 7, 180(1)
  01ec67c  lfs 8, 172(1)
  01ec680  lfs 9, 176(1)
  01ec684  fmuls 6, 5, 5
  01ec688  fmuls 8, 8, 5
  01ec68c  fmuls 7, 7, 6
  01ec690  fmuls 4, 6, 6
  01ec694  fmuls 6, 9, 6
  01ec698  stfs 8, 172(1)
  01ec69c  fmuls 5, 7, 5
  01ec6a0  stfs 6, 176(1)
  01ec6a4  stfs 5, 180(1)
  01ec6a8  lfs 5, 152(3)
  01ec6ac  fmuls 5, 5, 4
  01ec6b0  stfs 5, 168(3)
  01ec6b4  lfs 5, 4(4)
  01ec6b8  addic 4, 4, 8
  01ec6bc  fmuls 5, 5, 4
  01ec6c0  addic 3, 3, 8
  01ec6c4  stfs 5, 4(5)
  01ec6c8  addic 5, 5, 8
  01ec6cc  bdnz 0x1ec6a8
  01ec6d0  li 5, 4
  01ec6d4  ori 3, 1, 0
  01ec6d8  mtctr 5
  01ec6dc  lis 4, 115
  01ec6e0  addic 5, 3, 168
  01ec6e4  addic 4, 4, 22752
  01ec6e8  ori 6, 5, 0
  01ec6ec  lfs 4, 168(3)
  01ec6f0  lfs 5, 0(4)
  01ec6f4  fmuls 4, 4, 5
  01ec6f8  lfs 5, 4(4)
  01ec6fc  addic 4, 4, 8
  01ec700  stfs 4, 168(3)
  01ec704  lfs 4, 4(5)
  01ec708  addic 3, 3, 8
  01ec70c  fmuls 4, 4, 5
  01ec710  stfs 4, 4(5)
  01ec714  addic 5, 5, 8
  01ec718  bdnz 0x1ec6ec
  01ec71c  ori 3, 1, 0
  01ec720  mtctr 7
  01ec724  lfs 4, 168(3)
  01ec728  fadds 3, 3, 4
  01ec72c  addic 3, 3, 16
  01ec730  lfs 4, 4(6)
  01ec734  lfs 5, 8(6)
  01ec738  lfs 6, 12(6)
  01ec73c  addic 6, 6, 16
  01ec740  fadds 3, 3, 4
  01ec744  fadds 3, 3, 5
  01ec748  fadds 3, 3, 6
  01ec74c  bdnz 0x1ec724
  01ec750  lis 3, 31
  01ec754  addi 3, 3, -19300
  01ec758  lfs 4, 36(3)
  01ec75c  fadds 3, 3, 4
  01ec760  fmadds 3, 3, 1, 2
  01ec764  li 3, 1
  01ec768  stfs 3, 72(31)
  01ec76c  stb 3, 32(31)
  01ec770  bt 6, 0x1ec878
  01ec774  lis 3, 31
  01ec778  lis 4, 114
  01ec77c  addi 3, 3, -19300
  01ec780  li 5, 0
  01ec784  lfs 1, 28(3)
  01ec788  lfs 2, -3056(4)
  01ec78c  ori 3, 31, 0
  01ec790  li 4, 0
  01ec794  fmuls 1, 2, 1
  01ec798  fctiwz 1, 1
  01ec79c  stfd 1, 232(1)
  01ec7a0  lwz 6, 236(1)
  01ec7a4  extsw 6, 6
  01ec7a8  bl 0xfddc0
  01ec7ac  nop
  01ec7b0  b 0x1ec878
  01ec7b4  ori 3, 31, 0
  01ec7b8  addic 4, 30, 96
  01ec7bc  bl 0x10b030
  01ec7c0  nop
  01ec7c4  ori 30, 3, 0
  01ec7c8  rlwinm 3, 30, 0, 25, 25
  01ec7cc  cmpwi 3, 0
  01ec7d0  bt 2, 0x1ec828
  01ec7d4  li 3, 4
  01ec7d8  lbz 4, 83(31)
  01ec7dc  cmpwi 4, 2
  01ec7e0  stb 3, 32(31)
  01ec7e4  bt 2, 0x1ec878
  01ec7e8  lis 3, 31
  01ec7ec  lis 4, 114
  01ec7f0  addi 3, 3, -19300
  01ec7f4  li 5, 0
  01ec7f8  lfs 1, 84(3)
  01ec7fc  lfs 2, -3056(4)
  01ec800  ori 3, 31, 0
  01ec804  fmuls 1, 2, 1
  01ec808  li 4, 2
  01ec80c  fctiwz 1, 1
  01ec810  stfd 1, 232(1)
  01ec814  lwz 6, 236(1)
  01ec818  extsw 6, 6
  01ec81c  bl 0xfddc0
  01ec820  nop
  01ec824  b 0x1ec878
  01ec828  li 3, 288
  01ec82c  and 3, 30, 3
  01ec830  cmpwi 3, 0
  01ec834  bt 2, 0x1ec878
  01ec838  ori 3, 31, 0
  01ec83c  bl 0xefb38
  01ec840  nop
  01ec844  b 0x1ec878
  01ec848  addic 4, 30, 96
  01ec84c  ori 3, 31, 0
  01ec850  bl 0x10b030
  01ec854  nop
  01ec858  li 4, 352
  01ec85c  and 3, 3, 4
  01ec860  cmpwi 3, 0
  01ec864  bt 2, 0x1ec878
  01ec868  ori 3, 31, 0
  01ec86c  bl 0xefb38
  01ec870  nop
  01ec874  b 0x1ec878
  01ec878  ld 0, 336(1)
  01ec87c  mtlr 0
  01ec880  lfd 28, 288(1)
  01ec884  lfd 29, 296(1)
  01ec888  lfd 30, 304(1)
  01ec88c  lfd 31, 312(1)
  01ec890  ld 27, 248(1)
  01ec894  ld 28, 256(1)
  01ec898  ld 29, 264(1)
  01ec89c  ld 30, 272(1)
  01ec8a0  ld 31, 280(1)
  01ec8a4  addi 1, 1, 320
  01ec8a8  blr
