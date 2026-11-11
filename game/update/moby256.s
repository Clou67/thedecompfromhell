# game/update/moby256.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY256:   # 0xed3ac, 0x14 bytes
  00ed3ac  lis 3, 115
  00ed3b0  lis 4, 1
  00ed3b4  addic 3, 3, -28804
  00ed3b8  stw 4, 72(3)
  00ed3bc  blr

Spawn_Moby256_Rocket:   # 0xed3e0, 0x444 bytes
  00ed3e0  stdu 1, -240(1)
  00ed3e4  mflr 0
  00ed3e8  std 0, 256(1)
  00ed3ec  stfd 30, 224(1)
  00ed3f0  stfd 31, 232(1)
  00ed3f4  std 30, 208(1)
  00ed3f8  ori 30, 3, 0
  00ed3fc  li 3, 256
  00ed400  stfs 1, 160(1)
  00ed404  stfs 2, 164(1)
  00ed408  std 31, 216(1)
  00ed40c  fmr 31, 5
  00ed410  ori 31, 4, 0
  00ed414  std 27, 184(1)
  00ed418  fmr 30, 4
  00ed41c  ori 27, 7, 0
  00ed420  std 29, 200(1)
  00ed424  std 28, 192(1)
  00ed428  stfs 3, 168(1)
  00ed42c  bl 0xefa28
  00ed430  nop
  00ed434  ori 28, 3, 0
  00ed438  cmpwi 28, 0
  00ed43c  bt 2, 0xed7f4
  00ed440  li 3, 255
  00ed444  li 4, 1
  00ed448  li 6, 0
  00ed44c  lis 5, 115
  00ed450  stb 3, 48(28)
  00ed454  stb 4, 49(28)
  00ed458  cmpwi 27, 0
  00ed45c  stb 6, 32(28)
  00ed460  stfs 30, 72(28)
  00ed464  stfs 31, 68(28)
  00ed468  lfs 1, 44(28)
  00ed46c  lfs 2, -28688(5)
  00ed470  lwz 29, 120(28)
  00ed474  fmuls 1, 1, 2
  00ed478  sth 3, 50(28)
  00ed47c  stfs 1, 44(28)
  00ed480  bf 2, 0xed524
  00ed484  lis 3, 15
  00ed488  fmr 2, 30
  00ed48c  lis 4, 114
  00ed490  fmr 3, 31
  00ed494  addi 27, 3, -11328
  00ed498  addic 3, 1, 144
  00ed49c  lfs 1, 0(27)
  00ed4a0  lfs 4, -3052(4)
  00ed4a4  fmuls 1, 4, 1
  00ed4a8  bl 0xfe610
  00ed4ac  nop
  00ed4b0  lfs 1, 4(27)
  00ed4b4  lfs 2, 0(31)
  00ed4b8  addic 4, 1, 168
  00ed4bc  lfs 3, 4(31)
  00ed4c0  ori 3, 30, 0
  00ed4c4  stfs 2, 64(1)
  00ed4c8  addic 9, 1, 160
  00ed4cc  lfs 2, 8(31)
  00ed4d0  addic 10, 1, 164
  00ed4d4  lfs 4, 12(31)
  00ed4d8  stfs 2, 72(1)
  00ed4dc  lfs 2, 144(1)
  00ed4e0  lfs 5, 152(1)
  00ed4e4  stfs 2, 80(1)
  00ed4e8  stfs 5, 88(1)
  00ed4ec  stfs 3, 68(1)
  00ed4f0  stfs 4, 76(1)
  00ed4f4  lfs 2, 148(1)
  00ed4f8  lfs 3, 156(1)
  00ed4fc  stfs 2, 84(1)
  00ed500  stfs 3, 92(1)
  00ed504  std 4, 112(1)
  00ed508  ld 5, 64(1)
  00ed50c  ld 6, 72(1)
  00ed510  ld 7, 80(1)
  00ed514  ld 8, 88(1)
  00ed518  bl 0x1180f0
  00ed51c  nop
  00ed520  ori 27, 3, 0
  00ed524  stw 30, 16(29)
  00ed528  li 3, 0
  00ed52c  lfs 1, 0(31)
  00ed530  lis 6, 15
  00ed534  li 4, 1
  00ed538  stfs 1, 16(28)
  00ed53c  lfs 1, 4(31)
  00ed540  lis 5, 114
  00ed544  addi 6, 6, -11328
  00ed548  stfs 1, 20(28)
  00ed54c  lfs 1, 8(31)
  00ed550  cmpwi 27, 0
  00ed554  stfs 1, 24(28)
  00ed558  lfs 1, 12(31)
  00ed55c  stfs 1, 28(28)
  00ed560  stw 3, 36(29)
  00ed564  stw 3, 40(29)
  00ed568  stw 3, 32(29)
  00ed56c  stw 27, 24(29)
  00ed570  stw 4, 56(29)
  00ed574  lfs 1, -3052(5)
  00ed578  lfs 2, 8(6)
  00ed57c  fmuls 2, 1, 2
  00ed580  stfs 2, 52(29)
  00ed584  bt 2, 0xed60c
  00ed588  ori 3, 27, 0
  00ed58c  bl 0xfcccc
  00ed590  nop
  00ed594  lis 4, 114
  00ed598  cmpwi 3, 0
  00ed59c  lfs 1, -3052(4)
  00ed5a0  bt 2, 0xed60c
  00ed5a4  lhz 6, 30(3)
  00ed5a8  lis 4, 114
  00ed5ac  li 5, -3052
  00ed5b0  lbz 7, 11(3)
  00ed5b4  ori 6, 6, 128
  00ed5b8  cmpwi 7, 0
  00ed5bc  sth 6, 30(3)
  00ed5c0  lfs 1, -3052(4)
  00ed5c4  <unknown>
  00ed5c8  bt 2, 0xed5d4
  00ed5cc  li 4, 0
  00ed5d0  stw 4, 56(29)
  00ed5d4  li 4, 12
  00ed5d8  vspltisw 3, -8
  00ed5dc  <unknown>
  00ed5e0  lbz 3, 12(3)
  00ed5e4  vsrw 3, 4, 3
  00ed5e8  cmpwi 3, 0
  00ed5ec  bt 2, 0xed60c
  00ed5f0  vcfux 3, 3, 0
  00ed5f4  vspltisw 4, -1
  00ed5f8  li 3, 52
  00ed5fc  vslw 4, 4, 4
  00ed600  vmaddfp 2, 3, 2, 4
  00ed604  vspltw 2, 2, 0
  00ed608  stvewx 2, 3, 29
  00ed60c  lis 3, 15
  00ed610  lfs 2, 160(1)
  00ed614  li 5, 12
  00ed618  vspltisw 3, -1
  00ed61c  addi 3, 3, -11328
  00ed620  stfs 2, 44(29)
  00ed624  lfs 2, 164(1)
  00ed628  lis 4, 114
  00ed62c  li 6, -3056
  00ed630  stfs 2, 48(29)
  00ed634  vslw 3, 3, 3
  00ed638  <unknown>
  00ed63c  li 3, 20
  00ed640  vspltw 4, 2, 0
  00ed644  <unknown>
  00ed648  cmpwi 27, 0
  00ed64c  vmaddfp 3, 2, 4, 3
  00ed650  vctsxs 3, 3, 0
  00ed654  vspltw 3, 3, 0
  00ed658  stvewx 3, 3, 29
  00ed65c  bt 2, 0xed690
  00ed660  lfs 2, 16(27)
  00ed664  stfs 2, 0(29)
  00ed668  lfs 2, 20(27)
  00ed66c  stfs 2, 4(29)
  00ed670  lfs 2, 24(27)
  00ed674  stfs 2, 8(29)
  00ed678  lfs 3, 28(27)
  00ed67c  stfs 3, 12(29)
  00ed680  lfs 3, 168(1)
  00ed684  fadds 2, 2, 3
  00ed688  stfs 3, 28(29)
  00ed68c  stfs 2, 8(29)
  00ed690  lis 3, 151
  00ed694  addic 3, 3, -25376
  00ed698  lis 4, 15
  00ed69c  lfs 2, 324(3)
  00ed6a0  lfs 3, 320(3)
  00ed6a4  fmuls 2, 2, 2
  00ed6a8  lfs 4, 328(3)
  00ed6ac  addi 4, 4, -11328
  00ed6b0  fmadds 2, 3, 3, 2
  00ed6b4  lfs 3, 16(4)
  00ed6b8  fmuls 1, 1, 3
  00ed6bc  fmadds 2, 4, 4, 2
  00ed6c0  fsqrts 2, 2
  00ed6c4  fcmpu 0, 2, 1
  00ed6c8  cror 6, 0, 2
  00ed6cc  bt 6, 0xed704
  00ed6d0  lis 4, 15
  00ed6d4  li 5, 20
  00ed6d8  vspltisw 3, -1
  00ed6dc  addi 4, 4, -11328
  00ed6e0  vslw 3, 3, 3
  00ed6e4  <unknown>
  00ed6e8  li 4, 62
  00ed6ec  vspltw 4, 4, 0
  00ed6f0  vmaddfp 2, 2, 4, 3
  00ed6f4  vctsxs 2, 2, 0
  00ed6f8  vsplth 3, 2, 1
  00ed6fc  stvehx 3, 4, 29
  00ed700  b 0xed734
  00ed704  lis 4, 15
  00ed708  vspltisw 3, -1
  00ed70c  li 5, 24
  00ed710  addi 4, 4, -11328
  00ed714  vslw 3, 3, 3
  00ed718  <unknown>
  00ed71c  li 4, 62
  00ed720  vspltw 4, 4, 0
  00ed724  vmaddfp 2, 2, 4, 3
  00ed728  vctsxs 2, 2, 0
  00ed72c  vsplth 3, 2, 1
  00ed730  stvehx 3, 4, 29
  00ed734  ori 6, 3, 0
  00ed738  vsplth 2, 2, 1
  00ed73c  li 3, 60
  00ed740  ori 4, 31, 0
  00ed744  li 5, 0
  00ed748  li 7, 0
  00ed74c  stvehx 2, 3, 29
  00ed750  lfs 1, 16(30)
  00ed754  addic 3, 1, 128
  00ed758  stfs 1, 128(1)
  00ed75c  lfs 1, 20(30)
  00ed760  lfs 2, 8(31)
  00ed764  stfs 1, 132(1)
  00ed768  lfs 1, 28(30)
  00ed76c  lwz 6, 8320(6)
  00ed770  stfs 1, 140(1)
  00ed774  stfs 2, 136(1)
  00ed778  bl 0x57820
  00ed77c  nop
  00ed780  cmpwi 3, 0
  00ed784  bt 2, 0xed7b8
  00ed788  lis 3, 161
  00ed78c  li 4, 1
  00ed790  addic 3, 3, 2368
  00ed794  stb 4, 188(28)
  00ed798  lfs 1, 32(3)
  00ed79c  stfs 1, 16(28)
  00ed7a0  lfs 1, 36(3)
  00ed7a4  stfs 1, 20(28)
  00ed7a8  lfs 1, 40(3)
  00ed7ac  stfs 1, 24(28)
  00ed7b0  lfs 1, 44(3)
  00ed7b4  stfs 1, 28(28)
  00ed7b8  ori 3, 28, 0
  00ed7bc  bl 0xf31a8
  00ed7c0  nop
  00ed7c4  lis 4, 165
  00ed7c8  ori 3, 28, 0
  00ed7cc  addic 4, 4, 7848
  00ed7d0  li 5, 31
  00ed7d4  bl 0x110724
  00ed7d8  nop
  00ed7dc  lis 3, 15
  00ed7e0  lfs 1, 44(28)
  00ed7e4  addi 3, 3, -11328
  00ed7e8  lfs 2, 28(3)
  00ed7ec  fmuls 1, 1, 2
  00ed7f0  stfs 1, 44(28)
  00ed7f4  ori 3, 28, 0
  00ed7f8  ld 0, 256(1)
  00ed7fc  mtlr 0
  00ed800  lfd 30, 224(1)
  00ed804  lfd 31, 232(1)
  00ed808  ld 27, 184(1)
  00ed80c  ld 28, 192(1)
  00ed810  ld 29, 200(1)
  00ed814  ld 30, 208(1)
  00ed818  ld 31, 216(1)
  00ed81c  addi 1, 1, 240
  00ed820  blr

M256_000ed830:   # 0xed830, 0x5c bytes
  00ed830  lis 4, 15
  00ed834  cmpwi 3, 0
  00ed838  addi 4, 4, -10204
  00ed83c  lfs 4, 0(4)
  00ed840  fmr 5, 4
  00ed844  bf 1, 0xed884
  00ed848  lis 4, 15
  00ed84c  lis 6, 114
  00ed850  addi 4, 4, -10204
  00ed854  lis 5, 114
  00ed858  lfs 1, 8(4)
  00ed85c  lfs 3, 4(4)
  00ed860  lfs 6, -3060(6)
  00ed864  lfs 2, -3052(5)
  00ed868  fmuls 1, 1, 6
  00ed86c  fmsubs 6, 2, 3, 5
  00ed870  addic 3, 3, -1
  00ed874  cmpwi 3, 0
  00ed878  fmadds 5, 6, 1, 5
  00ed87c  fadds 4, 4, 5
  00ed880  bt 1, 0xed86c
  00ed884  fmr 1, 4
  00ed888  blr

UpdateMoby_256_GC_Rocket:   # 0xed970, 0x1d48 bytes
  00ed970  stdu 1, -1232(1)
  00ed974  mflr 0
  00ed978  std 0, 1248(1)
  00ed97c  stfd 14, 1088(1)
  00ed980  stfd 15, 1096(1)
  00ed984  stfd 16, 1104(1)
  00ed988  stfd 17, 1112(1)
  00ed98c  stfd 18, 1120(1)
  00ed990  stfd 19, 1128(1)
  00ed994  stfd 20, 1136(1)
  00ed998  stfd 21, 1144(1)
  00ed99c  stfd 22, 1152(1)
  00ed9a0  stfd 23, 1160(1)
  00ed9a4  stfd 24, 1168(1)
  00ed9a8  stfd 25, 1176(1)
  00ed9ac  stfd 26, 1184(1)
  00ed9b0  stfd 27, 1192(1)
  00ed9b4  stfd 28, 1200(1)
  00ed9b8  stfd 29, 1208(1)
  00ed9bc  stfd 30, 1216(1)
  00ed9c0  stfd 31, 1224(1)
  00ed9c4  lis 4, 115
  00ed9c8  li 5, 16
  00ed9cc  addic 6, 4, -28560
  00ed9d0  li 9, -28560
  00ed9d4  li 7, 32
  00ed9d8  li 10, 48
  00ed9dc  li 8, 768
  00ed9e0  lvx 2, 5, 6
  00ed9e4  li 12, 784
  00ed9e8  lvx 3, 9, 4
  00ed9ec  lis 11, 15
  00ed9f0  li 4, 800
  00ed9f4  lvx 4, 7, 6
  00ed9f8  li 7, 816
  00ed9fc  lvx 5, 10, 6
  00eda00  li 9, 64
  00eda04  stvx 3, 8, 1
  00eda08  li 8, 832
  00eda0c  stvx 2, 12, 1
  00eda10  addi 5, 11, -10100
  00eda14  std 24, 1024(1)
  00eda18  stvx 4, 4, 1
  00eda1c  stvx 5, 7, 1
  00eda20  std 28, 1056(1)
  00eda24  li 24, 0
  00eda28  lvx 2, 9, 6
  00eda2c  std 31, 1080(1)
  00eda30  lis 28, 114
  00eda34  ori 31, 3, 0
  00eda38  stvx 2, 8, 1
  00eda3c  lfs 23, 0(5)
  00eda40  lis 3, 114
  00eda44  stw 24, 176(1)
  00eda48  stw 24, 180(1)
  00eda4c  stw 24, 184(1)
  00eda50  stw 24, 188(1)
  00eda54  lfs 1, 4(5)
  00eda58  std 30, 1072(1)
  00eda5c  lfs 2, -3052(28)
  00eda60  lwz 30, 120(31)
  00eda64  fmuls 2, 2, 1
  00eda68  lfs 3, -3060(3)
  00eda6c  stfs 1, 948(1)
  00eda70  std 27, 1048(1)
  00eda74  lwz 27, 24(30)
  00eda78  addic 3, 30, 60
  00eda7c  stfs 2, 184(1)
  00eda80  lfs 1, 32(30)
  00eda84  lfs 2, 52(30)
  00eda88  lfs 16, 12(5)
  00eda8c  fsubs 2, 2, 1
  00eda90  lfs 30, 8(5)
  00eda94  fmr 18, 30
  00eda98  fmuls 2, 2, 16
  00eda9c  fmadds 1, 2, 3, 1
  00edaa0  std 29, 1064(1)
  00edaa4  std 26, 1040(1)
  00edaa8  std 25, 1032(1)
  00edaac  std 23, 1016(1)
  00edab0  std 22, 1008(1)
  00edab4  std 21, 1000(1)
  00edab8  std 20, 992(1)
  00edabc  stfs 1, 32(30)
  00edac0  bl 0x4fffb4
  00edac4  nop
  00edac8  lhz 3, 60(30)
  00edacc  extsh 3, 3
  00edad0  bl 0x502730
  00edad4  nop
  00edad8  fmr 31, 1
  00edadc  lhz 3, 62(30)
  00edae0  extsh 3, 3
  00edae4  bl 0x502730
  00edae8  nop
  00edaec  fdivs 1, 31, 1
  00edaf0  lis 29, 151
  00edaf4  lis 3, 150
  00edaf8  addic 29, 29, -25376
  00edafc  lfs 2, 320(29)
  00edb00  lfs 3, 324(29)
  00edb04  lfs 4, 328(29)
  00edb08  lfs 5, 332(29)
  00edb0c  stfs 5, 252(1)
  00edb10  lbz 3, -12520(3)
  00edb14  cmpwi 3, 0
  00edb18  fmuls 2, 2, 1
  00edb1c  fmuls 3, 3, 1
  00edb20  fmuls 1, 4, 1
  00edb24  stfs 2, 240(1)
  00edb28  stfs 3, 244(1)
  00edb2c  stfs 1, 248(1)
  00edb30  bt 2, 0xedbf0
  00edb34  cmpwi 27, 0
  00edb38  bt 2, 0xede48
  00edb3c  lis 3, 149
  00edb40  lfs 1, 20(27)
  00edb44  addic 3, 3, 5056
  00edb48  li 4, 4
  00edb4c  lfs 2, 324(3)
  00edb50  lfs 3, 320(3)
  00edb54  fsubs 1, 2, 1
  00edb58  lfs 2, 16(27)
  00edb5c  lfs 4, 328(3)
  00edb60  fsubs 3, 3, 2
  00edb64  lfs 5, 24(27)
  00edb68  fsubs 4, 4, 5
  00edb6c  lis 3, 15
  00edb70  addi 5, 3, -10100
  00edb74  fmuls 1, 1, 1
  00edb78  lfs 5, 16(5)
  00edb7c  stfs 2, 256(1)
  00edb80  lfs 2, 20(27)
  00edb84  lis 8, -241
  00edb88  stfs 2, 260(1)
  00edb8c  lfs 2, 24(27)
  00edb90  fmadds 1, 3, 3, 1
  00edb94  stfs 2, 264(1)
  00edb98  addic 6, 1, 256
  00edb9c  li 7, 13
  00edba0  li 9, -1
  00edba4  ori 3, 31, 0
  00edba8  fmadds 1, 4, 4, 1
  00edbac  lfs 4, 28(27)
  00edbb0  stfs 4, 268(1)
  00edbb4  lfs 4, 28(30)
  00edbb8  std 4, 112(1)
  00edbbc  fadds 3, 2, 4
  00edbc0  fsqrts 1, 1
  00edbc4  ori 4, 8, 65535
  00edbc8  stfs 3, 264(1)
  00edbcc  lfs 6, 20(5)
  00edbd0  lfs 4, 24(5)
  00edbd4  lfs 3, 28(5)
  00edbd8  fmr 2, 23
  00edbdc  fmuls 1, 1, 5
  00edbe0  fnmsubs 1, 1, 6, 4
  00edbe4  fabs 1, 1
  00edbe8  bl 0x55284
  00edbec  nop
  00edbf0  cmpwi 27, 0
  00edbf4  bt 2, 0xede48
  00edbf8  lis 3, 15
  00edbfc  lis 4, 114
  00edc00  addi 3, 3, -10100
  00edc04  lfs 22, 32(3)
  00edc08  lfs 1, -3056(4)
  00edc0c  lwz 4, 20(30)
  00edc10  fmuls 2, 1, 22
  00edc14  fctiwz 2, 2
  00edc18  stfd 2, 960(1)
  00edc1c  lfs 2, 24(3)
  00edc20  lwz 3, 964(1)
  00edc24  fmuls 1, 1, 2
  00edc28  fctiwz 1, 1
  00edc2c  stfd 1, 960(1)
  00edc30  lwz 5, 964(1)
  00edc34  subc 3, 3, 5
  00edc38  cmpw 4, 3
  00edc3c  bf 0, 0xede48
  00edc40  lbz 3, 32(27)
  00edc44  cmpwi 3, 128
  00edc48  bf 0, 0xede48
  00edc4c  lfs 27, 24(27)
  00edc50  lfs 2, 28(30)
  00edc54  fmr 1, 23
  00edc58  lfs 31, 16(27)
  00edc5c  fadds 27, 27, 2
  00edc60  lfs 29, 20(27)
  00edc64  lfs 28, 28(27)
  00edc68  lfs 26, 16(31)
  00edc6c  lfs 25, 20(31)
  00edc70  lfs 24, 24(31)
  00edc74  fsubs 26, 31, 26
  00edc78  lwz 3, 56(30)
  00edc7c  fsubs 25, 29, 25
  00edc80  cmpwi 3, 0
  00edc84  fsubs 24, 27, 24
  00edc88  bt 2, 0xedd94
  00edc8c  lfs 1, 0(30)
  00edc90  fsubs 1, 31, 1
  00edc94  addic 3, 1, 288
  00edc98  addic 4, 1, 272
  00edc9c  addic 5, 1, 240
  00edca0  stfs 1, 272(1)
  00edca4  lfs 1, 4(30)
  00edca8  fsubs 1, 29, 1
  00edcac  stfs 1, 276(1)
  00edcb0  lfs 1, 8(30)
  00edcb4  stfs 28, 284(1)
  00edcb8  fsubs 1, 27, 1
  00edcbc  stfs 1, 280(1)
  00edcc0  bl 0x502b6c
  00edcc4  nop
  00edcc8  stfs 31, 0(30)
  00edccc  fmuls 5, 25, 25
  00edcd0  stfs 29, 4(30)
  00edcd4  stfs 27, 8(30)
  00edcd8  stfs 28, 12(30)
  00edcdc  lfs 1, 276(1)
  00edce0  lfs 2, 272(1)
  00edce4  lis 3, 15
  00edce8  fmuls 3, 1, 1
  00edcec  lfs 4, 280(1)
  00edcf0  fmuls 1, 1, 25
  00edcf4  lfs 6, 32(30)
  00edcf8  addi 3, 3, -10100
  00edcfc  fmadds 5, 26, 26, 5
  00edd00  lfs 7, 40(3)
  00edd04  fmadds 3, 2, 2, 3
  00edd08  fmadds 1, 2, 26, 1
  00edd0c  fmadds 5, 24, 24, 5
  00edd10  fmadds 2, 4, 4, 3
  00edd14  fmadds 1, 4, 24, 1
  00edd18  lfs 3, 36(3)
  00edd1c  lfs 4, 44(3)
  00edd20  fmsubs 2, 6, 6, 2
  00edd24  fmuls 1, 1, 3
  00edd28  fmuls 3, 2, 7
  00edd2c  fmuls 2, 2, 4
  00edd30  fneg 4, 1
  00edd34  fmuls 3, 5, 3
  00edd38  fneg 3, 3
  00edd3c  fmsubs 3, 1, 1, 3
  00edd40  fsqrts 3, 3
  00edd44  fsubs 31, 3, 1
  00edd48  fsubs 1, 4, 3
  00edd4c  fdivs 31, 31, 2
  00edd50  fdivs 1, 1, 2
  00edd54  fcmpu 0, 31, 23
  00edd58  cror 6, 0, 2
  00edd5c  bt 6, 0xedd78
  00edd60  fcmpu 0, 1, 23
  00edd64  cror 6, 0, 2
  00edd68  bt 6, 0xedd78
  00edd6c  fsub 2, 1, 31
  00edd70  fsel 1, 2, 1, 31
  00edd74  b 0xedd94
  00edd78  fsub 2, 23, 1
  00edd7c  lis 3, 15
  00edd80  fsub 3, 23, 31
  00edd84  addi 3, 3, -10100
  00edd88  lfs 4, 48(3)
  00edd8c  fsel 1, 2, 4, 1
  00edd90  fsel 1, 3, 1, 31
  00edd94  fcmpu 0, 1, 23
  00edd98  cror 6, 0, 2
  00edd9c  bt 6, 0xede10
  00edda0  lis 3, 114
  00edda4  lfs 2, -3056(3)
  00edda8  fmuls 2, 2, 22
  00eddac  fctidz 2, 2
  00eddb0  fcfid 2, 2
  00eddb4  frsp 2, 2
  00eddb8  fcmpu 0, 1, 2
  00eddbc  cror 6, 1, 2
  00eddc0  bt 6, 0xede10
  00eddc4  lfs 2, 272(1)
  00eddc8  lfs 3, 276(1)
  00eddcc  fmadds 31, 2, 1, 26
  00eddd0  fmadds 29, 3, 1, 25
  00eddd4  lfs 2, 280(1)
  00eddd8  fmadds 28, 2, 1, 24
  00edddc  fmr 1, 31
  00edde0  fmr 2, 29
  00edde4  bl 0x5e8338
  00edde8  nop
  00eddec  fmuls 3, 29, 29
  00eddf0  fmr 26, 1
  00eddf4  fmr 2, 28
  00eddf8  fmadds 1, 31, 31, 3
  00eddfc  fsqrts 1, 1
  00ede00  bl 0x5e8338
  00ede04  nop
  00ede08  fneg 31, 1
  00ede0c  b 0xedea4
  00ede10  fmr 31, 26
  00ede14  fmr 2, 25
  00ede18  fmr 1, 31
  00ede1c  bl 0x5e8338
  00ede20  nop
  00ede24  fmuls 3, 25, 25
  00ede28  fmr 26, 1
  00ede2c  fmr 2, 24
  00ede30  fmadds 1, 31, 31, 3
  00ede34  fsqrts 1, 1
  00ede38  bl 0x5e8338
  00ede3c  nop
  00ede40  fneg 31, 1
  00ede44  b 0xedea4
  00ede48  lis 3, 15
  00ede4c  lis 4, 114
  00ede50  addi 3, 3, -10100
  00ede54  lfs 1, 32(3)
  00ede58  lfs 2, -3056(4)
  00ede5c  lwz 4, 20(30)
  00ede60  fmuls 1, 2, 1
  00ede64  fctiwz 1, 1
  00ede68  stfd 1, 960(1)
  00ede6c  lfs 1, 24(3)
  00ede70  lwz 3, 964(1)
  00ede74  fmuls 1, 2, 1
  00ede78  fctiwz 1, 1
  00ede7c  stfd 1, 960(1)
  00ede80  lwz 5, 964(1)
  00ede84  subc 3, 3, 5
  00ede88  cmpw 4, 3
  00ede8c  bf 0, 0xede9c
  00ede90  lfs 26, 44(30)
  00ede94  lfs 31, 48(30)
  00ede98  b 0xedea4
  00ede9c  lfs 26, 72(31)
  00edea0  lfs 31, 68(31)
  00edea4  lis 4, 15
  00edea8  ori 5, 27, 0
  00edeac  addi 4, 4, -10100
  00edeb0  cmpwi 5, 0
  00edeb4  addic 3, 30, 36
  00edeb8  addic 27, 30, 40
  00edebc  lfs 28, 52(4)
  00edec0  lfs 29, 56(4)
  00edec4  bt 2, 0xedf28
  00edec8  lis 26, 114
  00edecc  lfs 1, 72(31)
  00eded0  fmr 2, 26
  00eded4  ori 5, 3, 0
  00eded8  lfs 4, -3048(26)
  00ededc  lfs 5, -3052(28)
  00edee0  fmuls 3, 4, 29
  00edee4  fmuls 4, 4, 28
  00edee8  fmuls 5, 5, 29
  00edeec  bl 0xff190
  00edef0  nop
  00edef4  stfs 1, 72(31)
  00edef8  ori 5, 27, 0
  00edefc  lfs 1, 68(31)
  00edf00  fmr 2, 31
  00edf04  lfs 4, -3048(26)
  00edf08  lfs 5, -3052(28)
  00edf0c  fmuls 3, 4, 29
  00edf10  fmuls 4, 4, 28
  00edf14  fmuls 5, 5, 29
  00edf18  bl 0xff190
  00edf1c  nop
  00edf20  fmr 26, 1
  00edf24  b 0xedf90
  00edf28  lis 4, 15
  00edf2c  lis 26, 114
  00edf30  lfs 1, 72(31)
  00edf34  addi 4, 4, -10100
  00edf38  fmr 2, 26
  00edf3c  ori 5, 3, 0
  00edf40  lfs 4, -3048(26)
  00edf44  lfs 27, 60(4)
  00edf48  lfs 5, -3052(28)
  00edf4c  fmuls 3, 4, 29
  00edf50  fmuls 4, 4, 28
  00edf54  fmuls 5, 5, 27
  00edf58  bl 0xff190
  00edf5c  nop
  00edf60  stfs 1, 72(31)
  00edf64  lfs 1, 68(31)
  00edf68  ori 5, 27, 0
  00edf6c  lfs 4, -3048(26)
  00edf70  fmr 2, 31
  00edf74  lfs 5, -3052(28)
  00edf78  fmuls 3, 4, 29
  00edf7c  fmuls 4, 4, 28
  00edf80  fmuls 5, 5, 27
  00edf84  bl 0xff190
  00edf88  nop
  00edf8c  fmr 26, 1
  00edf90  stfs 26, 68(31)
  00edf94  addic 3, 1, 208
  00edf98  lfs 1, 32(30)
  00edf9c  fneg 3, 26
  00edfa0  lfs 2, 72(31)
  00edfa4  bl 0xfe610
  00edfa8  nop
  00edfac  lis 3, 15
  00edfb0  stw 24, 304(1)
  00edfb4  stw 24, 308(1)
  00edfb8  fmr 2, 30
  00edfbc  addi 26, 3, -10100
  00edfc0  stw 24, 312(1)
  00edfc4  stw 24, 316(1)
  00edfc8  lfs 19, 48(26)
  00edfcc  fmr 1, 19
  00edfd0  bl 0xfcbe8
  00edfd4  nop
  00edfd8  stfs 1, 304(1)
  00edfdc  fmr 1, 19
  00edfe0  fmr 2, 30
  00edfe4  bl 0xfcbe8
  00edfe8  nop
  00edfec  stfs 1, 308(1)
  00edff0  fmr 2, 30
  00edff4  fmr 1, 19
  00edff8  bl 0xfcbe8
  00edffc  nop
  00ee000  stfs 1, 312(1)
  00ee004  lfs 3, 64(26)
  00ee008  fmr 1, 16
  00ee00c  fmr 2, 3
  00ee010  stfd 3, 952(1)
  00ee014  bl 0xfcbe8
  00ee018  nop
  00ee01c  lfs 3, 308(1)
  00ee020  lfs 4, 304(1)
  00ee024  fmuls 2, 3, 3
  00ee028  lfs 5, 312(1)
  00ee02c  lfs 6, -3052(28)
  00ee030  fmuls 7, 1, 6
  00ee034  fmuls 1, 6, 16
  00ee038  fmadds 2, 4, 4, 2
  00ee03c  fmadds 2, 5, 5, 2
  00ee040  fsqrts 8, 2
  00ee044  fmr 2, 6
  00ee048  fdivs 6, 7, 8
  00ee04c  fsub 7, 23, 8
  00ee050  fsub 9, 23, 8
  00ee054  fsub 10, 23, 8
  00ee058  fsub 11, 8, 23
  00ee05c  fsub 12, 8, 23
  00ee060  fsub 8, 8, 23
  00ee064  fmuls 4, 4, 6
  00ee068  fmuls 3, 3, 6
  00ee06c  fmuls 5, 5, 6
  00ee070  fsel 6, 7, 23, 4
  00ee074  fsel 7, 9, 23, 3
  00ee078  fsel 9, 10, 23, 5
  00ee07c  fsel 4, 11, 6, 4
  00ee080  fsel 3, 12, 7, 3
  00ee084  fsel 5, 8, 9, 5
  00ee088  stfs 4, 304(1)
  00ee08c  stfs 3, 308(1)
  00ee090  stfs 5, 312(1)
  00ee094  bl 0xfcbe8
  00ee098  nop
  00ee09c  lfs 3, 212(1)
  00ee0a0  lfs 4, 208(1)
  00ee0a4  fmuls 2, 3, 3
  00ee0a8  lfs 5, 216(1)
  00ee0ac  fneg 6, 1
  00ee0b0  lfs 8, 304(1)
  00ee0b4  lfs 9, 308(1)
  00ee0b8  lfs 10, 312(1)
  00ee0bc  fmadds 2, 4, 4, 2
  00ee0c0  lfs 1, 220(1)
  00ee0c4  stfs 1, 204(1)
  00ee0c8  fmr 1, 23
  00ee0cc  fmadds 2, 5, 5, 2
  00ee0d0  fsqrts 7, 2
  00ee0d4  fmr 2, 30
  00ee0d8  fdivs 6, 6, 7
  00ee0dc  fsub 11, 23, 7
  00ee0e0  fsub 12, 23, 7
  00ee0e4  fsub 13, 23, 7
  00ee0e8  fsub 0, 7, 23
  00ee0ec  fsub 31, 7, 23
  00ee0f0  fsub 7, 7, 23
  00ee0f4  fmuls 4, 4, 6
  00ee0f8  fmuls 3, 3, 6
  00ee0fc  fmuls 5, 5, 6
  00ee100  fsel 6, 11, 23, 4
  00ee104  fsel 11, 12, 23, 3
  00ee108  fsel 12, 13, 23, 5
  00ee10c  fsel 4, 0, 6, 4
  00ee110  fsel 3, 31, 11, 3
  00ee114  fsel 5, 7, 12, 5
  00ee118  fadds 6, 8, 4
  00ee11c  fadds 7, 9, 3
  00ee120  fadds 8, 10, 5
  00ee124  stfs 4, 192(1)
  00ee128  stfs 3, 196(1)
  00ee12c  stfs 5, 200(1)
  00ee130  stfs 6, 304(1)
  00ee134  stfs 7, 308(1)
  00ee138  stfs 8, 312(1)
  00ee13c  bl 0xfcbe8
  00ee140  nop
  00ee144  lfs 2, 212(1)
  00ee148  lfs 4, 208(1)
  00ee14c  fmuls 3, 2, 2
  00ee150  lfs 6, 216(1)
  00ee154  lfs 5, 32(30)
  00ee158  fmuls 1, 1, 5
  00ee15c  fmadds 3, 4, 4, 3
  00ee160  lfs 8, 16(31)
  00ee164  lfs 9, 20(31)
  00ee168  lis 27, 114
  00ee16c  lfs 10, 24(31)
  00ee170  addic 3, 1, 192
  00ee174  fmadds 3, 6, 6, 3
  00ee178  lis 7, 96
  00ee17c  addic 4, 1, 304
  00ee180  fmr 5, 23
  00ee184  li 6, 127
  00ee188  fsqrts 7, 3
  00ee18c  lfs 3, 220(1)
  00ee190  ori 7, 7, 24672
  00ee194  stfs 3, 204(1)
  00ee198  lfs 11, -3056(27)
  00ee19c  li 8, 3
  00ee1a0  fmr 3, 30
  00ee1a4  fdivs 1, 1, 7
  00ee1a8  fsub 12, 23, 7
  00ee1ac  fsub 13, 23, 7
  00ee1b0  fsub 0, 23, 7
  00ee1b4  fsub 31, 7, 23
  00ee1b8  fsub 29, 7, 23
  00ee1bc  fsub 7, 7, 23
  00ee1c0  fmuls 6, 6, 1
  00ee1c4  fmuls 2, 2, 1
  00ee1c8  fmuls 1, 4, 1
  00ee1cc  fsel 4, 12, 23, 6
  00ee1d0  fsel 12, 13, 23, 2
  00ee1d4  fsel 13, 0, 23, 1
  00ee1d8  fsel 4, 31, 4, 6
  00ee1dc  fsel 2, 29, 12, 2
  00ee1e0  fsel 1, 7, 13, 1
  00ee1e4  fadds 4, 4, 10
  00ee1e8  fadds 2, 2, 9
  00ee1ec  fadds 1, 1, 8
  00ee1f0  stfs 4, 200(1)
  00ee1f4  stfs 2, 196(1)
  00ee1f8  stfs 1, 192(1)
  00ee1fc  lfs 16, 68(26)
  00ee200  fmuls 1, 11, 16
  00ee204  fctiwz 1, 1
  00ee208  stfd 1, 960(1)
  00ee20c  lfs 17, 72(26)
  00ee210  lfs 31, 76(26)
  00ee214  lfs 4, 80(26)
  00ee218  fmr 1, 17
  00ee21c  lwz 5, 964(1)
  00ee220  fmr 2, 31
  00ee224  extsw 5, 5
  00ee228  bl 0x12e3e8
  00ee22c  nop
  00ee230  cmpwi 3, 0
  00ee234  bt 2, 0xee254
  00ee238  lis 4, 165
  00ee23c  li 5, 68
  00ee240  addic 4, 4, 10244
  00ee244  lwz 4, 92(4)
  00ee248  lbz 4, 0(4)
  00ee24c  stb 5, 3(3)
  00ee250  stb 4, 2(3)
  00ee254  lis 3, 15
  00ee258  lfs 1, -3056(27)
  00ee25c  addi 25, 3, -10100
  00ee260  fmr 3, 30
  00ee264  addic 26, 31, 16
  00ee268  fmr 5, 23
  00ee26c  lis 7, 176
  00ee270  addic 4, 1, 304
  00ee274  li 8, 3
  00ee278  lfs 2, 84(25)
  00ee27c  ori 3, 26, 0
  00ee280  fmuls 4, 1, 2
  00ee284  fmr 1, 17
  00ee288  li 6, 127
  00ee28c  ori 7, 7, 45232
  00ee290  fmr 2, 31
  00ee294  fctiwz 4, 4
  00ee298  stfd 4, 960(1)
  00ee29c  lwz 5, 964(1)
  00ee2a0  lfs 4, 88(25)
  00ee2a4  extsw 5, 5
  00ee2a8  bl 0x12e3e8
  00ee2ac  nop
  00ee2b0  lfs 1, 16(25)
  00ee2b4  lfs 2, 224(31)
  00ee2b8  addic 23, 1, 320
  00ee2bc  lfs 3, 228(31)
  00ee2c0  addic 22, 31, 192
  00ee2c4  lfs 4, 232(31)
  00ee2c8  fmuls 2, 2, 1
  00ee2cc  lfs 5, 236(31)
  00ee2d0  fmuls 3, 3, 1
  00ee2d4  fmuls 4, 4, 1
  00ee2d8  fmuls 1, 5, 1
  00ee2dc  stfs 2, 320(1)
  00ee2e0  stfs 3, 324(1)
  00ee2e4  stfs 4, 328(1)
  00ee2e8  stfs 1, 332(1)
  00ee2ec  bl 0xfcc68
  00ee2f0  nop
  00ee2f4  ori 3, 23, 0
  00ee2f8  ori 4, 23, 0
  00ee2fc  ori 5, 22, 0
  00ee300  bl 0x1113e0
  00ee304  nop
  00ee308  lfs 14, 96(25)
  00ee30c  lfs 2, -3056(27)
  00ee310  lis 5, 20224
  00ee314  lfs 1, 92(25)
  00ee318  lis 6, 8191
  00ee31c  fmuls 2, 2, 14
  00ee320  addic 3, 1, 192
  00ee324  ori 4, 23, 0
  00ee328  li 9, 1
  00ee32c  ori 5, 5, 32767
  00ee330  ori 6, 6, 65535
  00ee334  fctiwz 2, 2
  00ee338  stfd 2, 960(1)
  00ee33c  lwz 8, 964(1)
  00ee340  extsw 8, 8
  00ee344  bl 0x1268f8
  00ee348  nop
  00ee34c  lfs 1, 16(31)
  00ee350  addic 3, 1, 336
  00ee354  lfs 2, 20(31)
  00ee358  addic 5, 1, 240
  00ee35c  stfs 1, 160(1)
  00ee360  addic 4, 1, 208
  00ee364  lfs 1, 24(31)
  00ee368  stfs 2, 164(1)
  00ee36c  lfs 2, 28(31)
  00ee370  stfs 1, 168(1)
  00ee374  stfs 2, 172(1)
  00ee378  bl 0x502b08
  00ee37c  nop
  00ee380  lfs 1, 16(31)
  00ee384  lfs 31, 208(1)
  00ee388  lfs 2, 20(31)
  00ee38c  fadds 4, 1, 31
  00ee390  lfs 1, 212(1)
  00ee394  lfs 3, 24(31)
  00ee398  lfs 5, 216(1)
  00ee39c  fadds 2, 2, 1
  00ee3a0  fadds 3, 3, 5
  00ee3a4  lhz 3, 166(31)
  00ee3a8  fcmpu 0, 4, 23
  00ee3ac  stfs 4, 16(31)
  00ee3b0  stfs 2, 20(31)
  00ee3b4  stfs 3, 24(31)
  00ee3b8  bt 0, 0xee3d0
  00ee3bc  fcmpu 0, 2, 23
  00ee3c0  bt 0, 0xee3d0
  00ee3c4  fcmpu 0, 3, 23
  00ee3c8  cror 6, 1, 2
  00ee3cc  bt 6, 0xee3f4
  00ee3d0  lis 4, 165
  00ee3d4  ori 3, 31, 0
  00ee3d8  addic 4, 4, 7848
  00ee3dc  bl 0x110798
  00ee3e0  nop
  00ee3e4  ori 3, 31, 0
  00ee3e8  bl 0xefb38
  00ee3ec  nop
  00ee3f0  b 0xef630
  00ee3f4  fmuls 2, 1, 1
  00ee3f8  fmr 3, 23
  00ee3fc  lis 4, 15
  00ee400  lis 5, 131
  00ee404  stw 31, 416(1)
  00ee408  addi 4, 4, -10100
  00ee40c  lis 6, 16448
  00ee410  stw 5, 420(1)
  00ee414  fmadds 2, 31, 31, 2
  00ee418  fmr 4, 3
  00ee41c  li 5, 1
  00ee420  lfs 15, 100(4)
  00ee424  stw 6, 428(1)
  00ee428  stw 5, 432(1)
  00ee42c  fsqrts 5, 2
  00ee430  fcmpu 0, 5, 4
  00ee434  bt 2, 0xee480
  00ee438  frsqrte 3, 2
  00ee43c  lis 4, 15
  00ee440  addi 4, 4, -10100
  00ee444  lfs 4, 24(4)
  00ee448  fmuls 5, 2, 3
  00ee44c  fmuls 6, 4, 3
  00ee450  fnmsubs 5, 5, 3, 30
  00ee454  fmadds 3, 5, 6, 3
  00ee458  fmuls 5, 2, 3
  00ee45c  fmuls 6, 4, 3
  00ee460  fnmsubs 5, 5, 3, 30
  00ee464  fmadds 3, 5, 6, 3
  00ee468  fmuls 2, 2, 3
  00ee46c  fmuls 4, 4, 3
  00ee470  fnmsubs 2, 2, 3, 30
  00ee474  fmadds 3, 2, 4, 3
  00ee478  fmuls 4, 31, 3
  00ee47c  fmuls 3, 1, 3
  00ee480  ori 6, 3, 0
  00ee484  stfs 4, 400(1)
  00ee488  lis 3, 17839
  00ee48c  stfs 3, 404(1)
  00ee490  lis 5, 16256
  00ee494  ori 9, 3, 57190
  00ee498  li 8, 3
  00ee49c  li 10, 1
  00ee4a0  stw 5, 408(1)
  00ee4a4  addic 3, 1, 160
  00ee4a8  stw 9, 412(1)
  00ee4ac  addic 7, 1, 400
  00ee4b0  stb 8, 424(1)
  00ee4b4  ori 4, 26, 0
  00ee4b8  stb 10, 425(1)
  00ee4bc  li 5, 0
  00ee4c0  lwz 8, 8320(29)
  00ee4c4  sth 6, 426(1)
  00ee4c8  ori 6, 8, 0
  00ee4cc  bl 0x57820
  00ee4d0  nop
  00ee4d4  cmpwi 3, 0
  00ee4d8  bt 2, 0xee924
  00ee4dc  lis 25, 161
  00ee4e0  addic 25, 25, 2368
  00ee4e4  lwz 3, 24(25)
  00ee4e8  cmpwi 3, 0
  00ee4ec  bt 2, 0xee714
  00ee4f0  fmr 20, 23
  00ee4f4  lwz 4, 8320(29)
  00ee4f8  ori 29, 24, 0
  00ee4fc  cmpw 3, 4
  00ee500  fmr 31, 20
  00ee504  bt 2, 0xee9a4
  00ee508  fmr 20, 23
  00ee50c  ori 29, 24, 0
  00ee510  lwz 4, 16(30)
  00ee514  cmpw 3, 4
  00ee518  fmr 31, 20
  00ee51c  bt 2, 0xee9a4
  00ee520  li 3, 2
  00ee524  fmr 31, 23
  00ee528  stb 3, 188(31)
  00ee52c  lfs 1, 32(25)
  00ee530  stfs 1, 16(31)
  00ee534  lfs 1, 36(25)
  00ee538  stfs 1, 20(31)
  00ee53c  lfs 1, 40(25)
  00ee540  stfs 1, 24(31)
  00ee544  lfs 1, 44(25)
  00ee548  stfs 1, 28(31)
  00ee54c  lfs 4, 84(25)
  00ee550  lfs 1, 100(25)
  00ee554  lfs 3, 80(25)
  00ee558  fsubs 4, 4, 1
  00ee55c  lfs 1, 96(25)
  00ee560  lfs 5, 88(25)
  00ee564  fsubs 3, 3, 1
  00ee568  lfs 1, 104(25)
  00ee56c  fsubs 5, 5, 1
  00ee570  fmuls 1, 4, 4
  00ee574  ori 29, 31, 0
  00ee578  stfs 3, 224(1)
  00ee57c  stfs 4, 228(1)
  00ee580  lfs 2, 92(25)
  00ee584  fmadds 6, 3, 3, 1
  00ee588  fmr 1, 31
  00ee58c  stfs 5, 232(1)
  00ee590  stfs 2, 236(1)
  00ee594  fmadds 6, 5, 5, 6
  00ee598  fmr 2, 1
  00ee59c  fsqrts 7, 6
  00ee5a0  fcmpu 0, 7, 2
  00ee5a4  bt 2, 0xee5f4
  00ee5a8  frsqrte 1, 6
  00ee5ac  lis 3, 15
  00ee5b0  addi 3, 3, -10100
  00ee5b4  lfs 2, 24(3)
  00ee5b8  fmuls 7, 6, 1
  00ee5bc  fmuls 8, 2, 1
  00ee5c0  fnmsubs 7, 7, 1, 30
  00ee5c4  fmadds 1, 7, 8, 1
  00ee5c8  fmuls 7, 6, 1
  00ee5cc  fmuls 8, 2, 1
  00ee5d0  fnmsubs 7, 7, 1, 30
  00ee5d4  fmadds 1, 7, 8, 1
  00ee5d8  fmuls 6, 6, 1
  00ee5dc  fmuls 2, 2, 1
  00ee5e0  fnmsubs 6, 6, 1, 30
  00ee5e4  fmadds 31, 6, 2, 1
  00ee5e8  fmuls 2, 3, 31
  00ee5ec  fmuls 1, 4, 31
  00ee5f0  fmuls 31, 5, 31
  00ee5f4  stfs 2, 224(1)
  00ee5f8  stfs 1, 228(1)
  00ee5fc  addic 3, 1, 176
  00ee600  stfs 31, 232(1)
  00ee604  addic 5, 25, 64
  00ee608  addic 4, 1, 208
  00ee60c  bl 0x500608
  00ee610  nop
  00ee614  lfs 3, 180(1)
  00ee618  lfs 4, 176(1)
  00ee61c  fmuls 1, 3, 3
  00ee620  lfs 5, 184(1)
  00ee624  lis 3, 15
  00ee628  addi 3, 3, -10100
  00ee62c  fmadds 1, 4, 4, 1
  00ee630  lfs 2, 44(3)
  00ee634  lfs 6, -3052(28)
  00ee638  lfs 20, 68(25)
  00ee63c  fmuls 6, 6, 2
  00ee640  fmuls 2, 20, 20
  00ee644  lfs 31, 64(25)
  00ee648  fmadds 1, 5, 5, 1
  00ee64c  fmadds 2, 31, 31, 2
  00ee650  fsqrts 7, 1
  00ee654  lfs 1, 72(25)
  00ee658  fmadds 2, 1, 1, 2
  00ee65c  fsqrts 8, 2
  00ee660  fdivs 6, 6, 7
  00ee664  fsub 9, 23, 7
  00ee668  fsub 10, 23, 7
  00ee66c  fsub 11, 23, 7
  00ee670  fsub 12, 7, 23
  00ee674  fsub 13, 7, 23
  00ee678  fsub 7, 7, 23
  00ee67c  fcmpu 0, 8, 23
  00ee680  fmuls 4, 4, 6
  00ee684  fmuls 3, 3, 6
  00ee688  fmuls 5, 5, 6
  00ee68c  fsel 6, 9, 23, 4
  00ee690  fsel 8, 10, 23, 3
  00ee694  fsel 9, 11, 23, 5
  00ee698  fsel 4, 12, 6, 4
  00ee69c  fsel 3, 13, 8, 3
  00ee6a0  fsel 5, 7, 9, 5
  00ee6a4  stfs 4, 176(1)
  00ee6a8  stfs 3, 180(1)
  00ee6ac  stfs 5, 184(1)
  00ee6b0  bf 2, 0xee6c4
  00ee6b4  fmr 31, 23
  00ee6b8  fmr 20, 31
  00ee6bc  fmr 30, 20
  00ee6c0  b 0xee9a4
  00ee6c4  frsqrte 3, 2
  00ee6c8  lis 3, 15
  00ee6cc  addi 3, 3, -10100
  00ee6d0  lfs 4, 24(3)
  00ee6d4  fmuls 5, 2, 3
  00ee6d8  fmuls 6, 4, 3
  00ee6dc  fnmsubs 5, 5, 3, 30
  00ee6e0  fmadds 3, 5, 6, 3
  00ee6e4  fmuls 5, 2, 3
  00ee6e8  fmuls 6, 4, 3
  00ee6ec  fnmsubs 5, 5, 3, 30
  00ee6f0  fmadds 3, 5, 6, 3
  00ee6f4  fmuls 2, 2, 3
  00ee6f8  fmuls 4, 4, 3
  00ee6fc  fnmsubs 2, 2, 3, 30
  00ee700  fmadds 30, 2, 4, 3
  00ee704  fmuls 31, 31, 30
  00ee708  fmuls 20, 20, 30
  00ee70c  fmuls 30, 1, 30
  00ee710  b 0xee9a4
  00ee714  fmr 20, 23
  00ee718  lwz 3, 28(25)
  00ee71c  ori 29, 24, 0
  00ee720  cmpwi 3, 0
  00ee724  fmr 31, 20
  00ee728  bf 1, 0xee9a4
  00ee72c  li 3, 1
  00ee730  stb 3, 188(31)
  00ee734  lfs 1, 32(25)
  00ee738  stfs 1, 16(31)
  00ee73c  lfs 1, 36(25)
  00ee740  stfs 1, 20(31)
  00ee744  lfs 1, 40(25)
  00ee748  stfs 1, 24(31)
  00ee74c  lfs 1, 44(25)
  00ee750  stfs 1, 28(31)
  00ee754  lfs 4, 84(25)
  00ee758  lfs 1, 100(25)
  00ee75c  lfs 3, 80(25)
  00ee760  fsubs 4, 4, 1
  00ee764  lfs 1, 96(25)
  00ee768  lfs 5, 88(25)
  00ee76c  fsubs 3, 3, 1
  00ee770  lfs 1, 104(25)
  00ee774  fsubs 5, 5, 1
  00ee778  fmr 31, 23
  00ee77c  fmuls 1, 4, 4
  00ee780  stfs 3, 224(1)
  00ee784  stfs 4, 228(1)
  00ee788  lfs 2, 92(25)
  00ee78c  fmadds 6, 3, 3, 1
  00ee790  fmr 1, 31
  00ee794  stfs 5, 232(1)
  00ee798  stfs 2, 236(1)
  00ee79c  fmadds 6, 5, 5, 6
  00ee7a0  fmr 2, 1
  00ee7a4  fsqrts 7, 6
  00ee7a8  fcmpu 0, 7, 2
  00ee7ac  bt 2, 0xee7fc
  00ee7b0  frsqrte 1, 6
  00ee7b4  lis 3, 15
  00ee7b8  addi 3, 3, -10100
  00ee7bc  lfs 2, 24(3)
  00ee7c0  fmuls 7, 6, 1
  00ee7c4  fmuls 8, 2, 1
  00ee7c8  fnmsubs 7, 7, 1, 30
  00ee7cc  fmadds 1, 7, 8, 1
  00ee7d0  fmuls 7, 6, 1
  00ee7d4  fmuls 8, 2, 1
  00ee7d8  fnmsubs 7, 7, 1, 30
  00ee7dc  fmadds 1, 7, 8, 1
  00ee7e0  fmuls 6, 6, 1
  00ee7e4  fmuls 2, 2, 1
  00ee7e8  fnmsubs 6, 6, 1, 30
  00ee7ec  fmadds 31, 6, 2, 1
  00ee7f0  fmuls 2, 3, 31
  00ee7f4  fmuls 1, 4, 31
  00ee7f8  fmuls 31, 5, 31
  00ee7fc  stfs 2, 224(1)
  00ee800  stfs 1, 228(1)
  00ee804  addic 3, 1, 176
  00ee808  stfs 31, 232(1)
  00ee80c  addic 5, 25, 64
  00ee810  addic 4, 1, 208
  00ee814  bl 0x500608
  00ee818  nop
  00ee81c  lfs 3, 180(1)
  00ee820  lfs 4, 176(1)
  00ee824  fmuls 1, 3, 3
  00ee828  lfs 5, 184(1)
  00ee82c  lis 3, 15
  00ee830  addi 3, 3, -10100
  00ee834  fmadds 1, 4, 4, 1
  00ee838  lfs 7, 44(3)
  00ee83c  lfs 6, -3052(28)
  00ee840  lfs 20, 68(25)
  00ee844  fmuls 6, 6, 7
  00ee848  fmuls 7, 20, 20
  00ee84c  fmadds 1, 5, 5, 1
  00ee850  fsqrts 8, 1
  00ee854  lfs 1, 64(25)
  00ee858  lfs 2, 72(25)
  00ee85c  fmadds 31, 1, 1, 7
  00ee860  fmadds 31, 2, 2, 31
  00ee864  fsqrts 7, 31
  00ee868  fdivs 6, 6, 8
  00ee86c  fsub 9, 23, 8
  00ee870  fsub 10, 23, 8
  00ee874  fsub 11, 23, 8
  00ee878  fsub 12, 8, 23
  00ee87c  fsub 13, 8, 23
  00ee880  fsub 8, 8, 23
  00ee884  fcmpu 0, 7, 23
  00ee888  fmuls 4, 4, 6
  00ee88c  fmuls 3, 3, 6
  00ee890  fmuls 5, 5, 6
  00ee894  fsel 6, 9, 23, 4
  00ee898  fsel 7, 10, 23, 3
  00ee89c  fsel 9, 11, 23, 5
  00ee8a0  fsel 4, 12, 6, 4
  00ee8a4  fsel 3, 13, 7, 3
  00ee8a8  fsel 5, 8, 9, 5
  00ee8ac  stfs 4, 176(1)
  00ee8b0  stfs 3, 180(1)
  00ee8b4  stfs 5, 184(1)
  00ee8b8  bf 2, 0xee8d0
  00ee8bc  fmr 31, 23
  00ee8c0  ori 29, 24, 0
  00ee8c4  fmr 20, 31
  00ee8c8  fmr 30, 20
  00ee8cc  b 0xee9a4
  00ee8d0  frsqrte 3, 31
  00ee8d4  lis 3, 15
  00ee8d8  addi 3, 3, -10100
  00ee8dc  ori 29, 24, 0
  00ee8e0  lfs 4, 24(3)
  00ee8e4  fmuls 5, 31, 3
  00ee8e8  fmuls 6, 4, 3
  00ee8ec  fnmsubs 5, 5, 3, 30
  00ee8f0  fmadds 3, 5, 6, 3
  00ee8f4  fmuls 5, 31, 3
  00ee8f8  fmuls 6, 4, 3
  00ee8fc  fnmsubs 5, 5, 3, 30
  00ee900  fmadds 3, 5, 6, 3
  00ee904  fmuls 5, 31, 3
  00ee908  fmuls 4, 4, 3
  00ee90c  fnmsubs 5, 5, 3, 30
  00ee910  fmadds 30, 5, 4, 3
  00ee914  fmuls 31, 1, 30
  00ee918  fmuls 20, 20, 30
  00ee91c  fmuls 30, 2, 30
  00ee920  b 0xee9a4
  00ee924  addic 3, 30, 20
  00ee928  bl 0x4fff60
  00ee92c  nop
  00ee930  cmpwi 3, 0
  00ee934  bf 2, 0xee980
  00ee938  lfs 1, 20(31)
  00ee93c  lfs 2, 132(29)
  00ee940  lfs 3, 16(31)
  00ee944  fsubs 1, 1, 2
  00ee948  lfs 2, 128(29)
  00ee94c  fsubs 2, 3, 2
  00ee950  lis 3, 15
  00ee954  fmr 20, 23
  00ee958  ori 29, 24, 0
  00ee95c  addi 3, 3, -10100
  00ee960  fmuls 1, 1, 1
  00ee964  fmr 31, 20
  00ee968  fmadds 1, 2, 2, 1
  00ee96c  lfs 2, 104(3)
  00ee970  fsqrts 1, 1
  00ee974  fcmpu 0, 1, 2
  00ee978  cror 6, 0, 2
  00ee97c  bt 6, 0xee9a4
  00ee980  lis 4, 165
  00ee984  ori 3, 31, 0
  00ee988  addic 4, 4, 7848
  00ee98c  bl 0x110798
  00ee990  nop
  00ee994  ori 3, 31, 0
  00ee998  bl 0xefb38
  00ee99c  nop
  00ee9a0  b 0xef630
  00ee9a4  lbz 3, 188(31)
  00ee9a8  cmpwi 3, 0
  00ee9ac  bt 2, 0xef630
  00ee9b0  lis 3, 15
  00ee9b4  li 5, 16
  00ee9b8  addi 30, 3, -10100
  00ee9bc  ori 3, 26, 0
  00ee9c0  ori 6, 31, 0
  00ee9c4  li 7, 0
  00ee9c8  lfs 2, 44(30)
  00ee9cc  fmr 1, 2
  00ee9d0  stfs 2, 944(1)
  00ee9d4  bl 0x5e598
  00ee9d8  nop
  00ee9dc  lfs 1, 16(31)
  00ee9e0  li 4, 3
  00ee9e4  lfs 2, 24(31)
  00ee9e8  li 5, 1
  00ee9ec  stfs 1, 64(1)
  00ee9f0  lis 7, 161
  00ee9f4  stfs 2, 72(1)
  00ee9f8  ori 8, 3, 0
  00ee9fc  lfs 1, 20(31)
  00eea00  addic 7, 7, 18944
  00eea04  lfs 2, 28(31)
  00eea08  ori 3, 31, 0
  00eea0c  stfs 1, 68(1)
  00eea10  ori 9, 29, 0
  00eea14  stfs 2, 76(1)
  00eea18  fmr 1, 15
  00eea1c  std 4, 120(1)
  00eea20  fmr 2, 18
  00eea24  std 5, 128(1)
  00eea28  lis 10, 129
  00eea2c  ld 5, 64(1)
  00eea30  fmr 3, 18
  00eea34  ld 6, 72(1)
  00eea38  bl 0x107860
  00eea3c  nop
  00eea40  fneg 1, 30
  00eea44  fneg 2, 31
  00eea48  stw 24, 448(1)
  00eea4c  fneg 3, 20
  00eea50  stfs 20, 480(1)
  00eea54  stw 24, 496(1)
  00eea58  addic 4, 1, 448
  00eea5c  stfs 30, 452(1)
  00eea60  addic 3, 1, 512
  00eea64  stw 24, 468(1)
  00eea68  ori 5, 4, 0
  00eea6c  stw 24, 500(1)
  00eea70  stfs 31, 472(1)
  00eea74  stw 24, 488(1)
  00eea78  stw 24, 504(1)
  00eea7c  stfs 1, 464(1)
  00eea80  stfs 2, 484(1)
  00eea84  stfs 3, 456(1)
  00eea88  stw 24, 460(1)
  00eea8c  stw 24, 476(1)
  00eea90  stw 24, 492(1)
  00eea94  stw 24, 508(1)
  00eea98  bl 0x50162c
  00eea9c  nop
  00eeaa0  lfs 20, 108(30)
  00eeaa4  lfs 24, 112(30)
  00eeaa8  ori 29, 24, 0
  00eeaac  lfs 25, 116(30)
  00eeab0  lfs 26, 120(30)
  00eeab4  lfs 27, 124(30)
  00eeab8  lfs 28, 128(30)
  00eeabc  lfs 29, 132(30)
  00eeac0  lfs 30, 136(30)
  00eeac4  lfs 31, 140(30)
  00eeac8  lfs 21, 144(30)
  00eeacc  lfs 22, 148(30)
  00eead0  lbz 3, 188(31)
  00eead4  cmpwi 3, 1
  00eead8  bf 2, 0xeec68
  00eeadc  stfs 22, 976(1)
  00eeae0  bl 0xfcc68
  00eeae4  nop
  00eeae8  fmr 22, 1
  00eeaec  addic 30, 1, 704
  00eeaf0  addic 4, 1, 512
  00eeaf4  ori 3, 30, 0
  00eeaf8  fadds 1, 22, 20
  00eeafc  fsubs 2, 24, 1
  00eeb00  fsubs 3, 25, 1
  00eeb04  fsub 4, 1, 2
  00eeb08  fsel 1, 4, 2, 1
  00eeb0c  fsub 2, 3, 1
  00eeb10  fsel 1, 2, 3, 1
  00eeb14  fmuls 2, 1, 1
  00eeb18  fmuls 3, 2, 1
  00eeb1c  fmuls 4, 2, 3
  00eeb20  fmadds 1, 3, 26, 1
  00eeb24  fmuls 3, 2, 4
  00eeb28  fmadds 1, 4, 27, 1
  00eeb2c  fmuls 2, 2, 3
  00eeb30  fmadds 1, 3, 28, 1
  00eeb34  fmadds 1, 2, 29, 1
  00eeb38  fsubs 1, 18, 1
  00eeb3c  bl 0x501188
  00eeb40  nop
  00eeb44  fsubs 1, 24, 22
  00eeb48  fsubs 2, 25, 22
  00eeb4c  addic 25, 1, 640
  00eeb50  addic 4, 1, 448
  00eeb54  ori 3, 25, 0
  00eeb58  fsub 3, 22, 1
  00eeb5c  fsel 1, 3, 1, 22
  00eeb60  fsub 3, 2, 1
  00eeb64  fsel 1, 3, 2, 1
  00eeb68  fmuls 2, 1, 1
  00eeb6c  fmuls 3, 2, 1
  00eeb70  fmuls 4, 2, 3
  00eeb74  fmadds 1, 3, 26, 1
  00eeb78  fmuls 3, 2, 4
  00eeb7c  fmadds 1, 4, 27, 1
  00eeb80  fmuls 2, 2, 3
  00eeb84  fmadds 1, 3, 28, 1
  00eeb88  fmadds 1, 2, 29, 1
  00eeb8c  bl 0x501188
  00eeb90  nop
  00eeb94  ori 3, 25, 0
  00eeb98  ori 4, 25, 0
  00eeb9c  ori 5, 30, 0
  00eeba0  bl 0x5016e0
  00eeba4  nop
  00eeba8  ori 3, 30, 0
  00eebac  bl 0x500af8
  00eebb0  nop
  00eebb4  addic 23, 1, 576
  00eebb8  ori 4, 25, 0
  00eebbc  ori 3, 23, 0
  00eebc0  ori 5, 30, 0
  00eebc4  bl 0x5016e0
  00eebc8  nop
  00eebcc  addic 3, 1, 368
  00eebd0  addic 4, 1, 224
  00eebd4  ori 5, 23, 0
  00eebd8  bl 0x5e825c
  00eebdc  nop
  00eebe0  fmr 2, 31
  00eebe4  fmr 1, 30
  00eebe8  bl 0xfcbe8
  00eebec  nop
  00eebf0  lfs 2, 372(1)
  00eebf4  lfs 3, 368(1)
  00eebf8  fmuls 4, 2, 2
  00eebfc  lfs 5, 376(1)
  00eec00  lfs 6, -3052(28)
  00eec04  fmuls 1, 1, 6
  00eec08  fmadds 4, 3, 3, 4
  00eec0c  fmadds 4, 5, 5, 4
  00eec10  fsqrts 4, 4
  00eec14  fdivs 1, 1, 4
  00eec18  fsub 6, 23, 4
  00eec1c  fsub 7, 23, 4
  00eec20  fsub 8, 23, 4
  00eec24  fsub 9, 4, 23
  00eec28  fsub 10, 4, 23
  00eec2c  fsub 4, 4, 23
  00eec30  fmuls 3, 3, 1
  00eec34  fmuls 11, 2, 1
  00eec38  fmuls 1, 5, 1
  00eec3c  fsel 2, 6, 23, 3
  00eec40  fsel 5, 7, 23, 11
  00eec44  fsel 6, 8, 23, 1
  00eec48  fsel 2, 9, 2, 3
  00eec4c  fsel 3, 10, 5, 11
  00eec50  fsel 1, 4, 6, 1
  00eec54  stfs 2, 368(1)
  00eec58  stfs 3, 372(1)
  00eec5c  stfs 1, 376(1)
  00eec60  lfs 22, 976(1)
  00eec64  b 0xeecc8
  00eec68  fmr 1, 30
  00eec6c  stfs 21, 980(1)
  00eec70  fmr 2, 31
  00eec74  stfs 22, 976(1)
  00eec78  bl 0xfcbe8
  00eec7c  nop
  00eec80  lfs 2, -3052(28)
  00eec84  fmuls 22, 1, 2
  00eec88  bl 0xfcc68
  00eec8c  nop
  00eec90  fmr 21, 1
  00eec94  bl 0xfcc68
  00eec98  nop
  00eec9c  fmr 3, 1
  00eeca0  addic 3, 1, 368
  00eeca4  fmr 1, 22
  00eeca8  fmr 2, 21
  00eecac  bl 0xfe610
  00eecb0  nop
  00eecb4  lfs 1, 376(1)
  00eecb8  lfs 2, 368(1)
  00eecbc  lfs 3, 372(1)
  00eecc0  lfs 22, 976(1)
  00eecc4  lfs 21, 980(1)
  00eecc8  lfs 4, -3052(28)
  00eeccc  lfs 5, -3056(27)
  00eecd0  fmadds 1, 4, 21, 1
  00eecd4  fmuls 4, 5, 16
  00eecd8  lfs 6, 176(1)
  00eecdc  fmuls 5, 5, 22
  00eece0  lfs 7, 180(1)
  00eece4  fadds 2, 2, 6
  00eece8  lfs 6, 184(1)
  00eecec  fadds 3, 3, 7
  00eecf0  fadds 1, 1, 6
  00eecf4  fctiwz 4, 4
  00eecf8  fctiwz 5, 5
  00eecfc  stfs 2, 368(1)
  00eed00  stfs 3, 372(1)
  00eed04  stfs 1, 376(1)
  00eed08  stfd 4, 960(1)
  00eed0c  lwz 3, 964(1)
  00eed10  stfd 5, 960(1)
  00eed14  lwz 4, 964(1)
  00eed18  extsw 3, 3
  00eed1c  extsw 4, 4
  00eed20  bl 0xfe484
  00eed24  nop
  00eed28  li 6, -1
  00eed2c  lis 5, 20224
  00eed30  fmr 1, 17
  00eed34  lis 7, 7936
  00eed38  ori 8, 3, 0
  00eed3c  std 6, 112(1)
  00eed40  li 9, 1
  00eed44  addic 4, 1, 368
  00eed48  li 10, -1
  00eed4c  ori 3, 26, 0
  00eed50  ori 5, 5, 32767
  00eed54  ori 6, 7, 127
  00eed58  bl 0x124e10
  00eed5c  nop
  00eed60  addic 29, 29, 1
  00eed64  cmpwi 29, 10
  00eed68  bt 0, 0xeead0
  00eed6c  fmr 1, 19
  00eed70  stw 24, 352(1)
  00eed74  stw 24, 356(1)
  00eed78  fmr 2, 18
  00eed7c  stw 24, 360(1)
  00eed80  stw 24, 364(1)
  00eed84  bl 0xfcbe8
  00eed88  nop
  00eed8c  stfs 1, 352(1)
  00eed90  fmr 2, 18
  00eed94  fmr 1, 19
  00eed98  bl 0xfcbe8
  00eed9c  nop
  00eeda0  stfs 1, 356(1)
  00eeda4  fmr 1, 19
  00eeda8  fmr 2, 18
  00eedac  bl 0xfcbe8
  00eedb0  nop
  00eedb4  lis 25, 149
  00eedb8  lfs 2, 20(31)
  00eedbc  lfs 3, 16(31)
  00eedc0  addic 25, 25, 5056
  00eedc4  lfs 4, 24(31)
  00eedc8  lis 3, 15
  00eedcc  lfs 5, 324(25)
  00eedd0  lfs 6, 320(25)
  00eedd4  fsubs 2, 5, 2
  00eedd8  lfs 5, 328(25)
  00eeddc  fsubs 3, 6, 3
  00eede0  fsubs 4, 5, 4
  00eede4  stfs 1, 360(1)
  00eede8  addi 3, 3, -10100
  00eedec  lfs 6, 356(1)
  00eedf0  lfs 7, 352(1)
  00eedf4  fmuls 10, 6, 6
  00eedf8  fmuls 5, 2, 2
  00eedfc  lfs 30, 24(3)
  00eee00  lfd 8, 952(1)
  00eee04  lfs 9, -3052(28)
  00eee08  fmadds 10, 7, 7, 10
  00eee0c  fmadds 5, 3, 3, 5
  00eee10  lfs 20, 944(1)
  00eee14  fmadds 10, 1, 1, 10
  00eee18  fmadds 31, 4, 4, 5
  00eee1c  fsqrts 10, 10
  00eee20  fsqrts 31, 31
  00eee24  fsub 12, 23, 10
  00eee28  fsub 13, 23, 10
  00eee2c  fsub 28, 23, 10
  00eee30  fsub 0, 10, 23
  00eee34  fsub 29, 10, 23
  00eee38  fmadds 4, 31, 30, 4
  00eee3c  fmuls 8, 31, 8
  00eee40  fmuls 11, 31, 20
  00eee44  fmadds 5, 4, 4, 5
  00eee48  fmuls 8, 8, 9
  00eee4c  fmuls 11, 11, 9
  00eee50  fsqrts 5, 5
  00eee54  fdivs 8, 8, 10
  00eee58  fsub 10, 10, 23
  00eee5c  fdivs 11, 11, 5
  00eee60  fsub 27, 23, 5
  00eee64  fsub 25, 23, 5
  00eee68  fsub 26, 5, 23
  00eee6c  fsub 22, 5, 23
  00eee70  fsub 24, 23, 5
  00eee74  fsub 5, 5, 23
  00eee78  fmuls 6, 6, 8
  00eee7c  fmuls 7, 7, 8
  00eee80  fmuls 1, 1, 8
  00eee84  fsel 8, 12, 23, 6
  00eee88  fsel 12, 13, 23, 7
  00eee8c  fsel 13, 28, 23, 1
  00eee90  fsel 6, 0, 8, 6
  00eee94  fsel 7, 29, 12, 7
  00eee98  fsel 8, 10, 13, 1
  00eee9c  stfs 7, 352(1)
  00eeea0  stfs 6, 356(1)
  00eeea4  stfs 8, 360(1)
  00eeea8  fmuls 1, 2, 11
  00eeeac  fmuls 2, 3, 11
  00eeeb0  fmuls 3, 4, 11
  00eeeb4  fsel 4, 27, 23, 1
  00eeeb8  fsel 10, 25, 23, 2
  00eeebc  fsel 11, 24, 23, 3
  00eeec0  fsel 1, 26, 4, 1
  00eeec4  fsel 4, 22, 10, 2
  00eeec8  fsel 3, 5, 11, 3
  00eeecc  fadds 2, 6, 1
  00eeed0  fadds 1, 7, 4
  00eeed4  fadds 3, 8, 3
  00eeed8  fmuls 4, 2, 2
  00eeedc  stfs 1, 352(1)
  00eeee0  stfs 2, 356(1)
  00eeee4  stfs 3, 360(1)
  00eeee8  lfs 29, 152(3)
  00eeeec  fmadds 4, 1, 1, 4
  00eeef0  fmadds 5, 3, 3, 4
  00eeef4  fmuls 4, 9, 29
  00eeef8  fsqrts 5, 5
  00eeefc  fcmpu 0, 4, 5
  00eef00  cror 6, 1, 2
  00eef04  bt 6, 0xeef24
  00eef08  fdivs 4, 4, 5
  00eef0c  fmuls 1, 1, 4
  00eef10  fmuls 2, 2, 4
  00eef14  fmuls 3, 3, 4
  00eef18  stfs 1, 352(1)
  00eef1c  stfs 2, 356(1)
  00eef20  stfs 3, 360(1)
  00eef24  lfs 1, -3056(27)
  00eef28  lis 3, 15
  00eef2c  fmuls 2, 1, 16
  00eef30  addi 30, 3, -10100
  00eef34  fctiwz 2, 2
  00eef38  stfd 2, 960(1)
  00eef3c  lfs 2, 156(30)
  00eef40  lwz 3, 964(1)
  00eef44  fmuls 1, 1, 2
  00eef48  extsw 3, 3
  00eef4c  fctiwz 1, 1
  00eef50  stfd 1, 960(1)
  00eef54  lwz 4, 964(1)
  00eef58  extsw 4, 4
  00eef5c  bl 0xfe484
  00eef60  nop
  00eef64  ori 5, 3, 0
  00eef68  ori 3, 26, 0
  00eef6c  addic 4, 1, 352
  00eef70  li 6, 0
  00eef74  li 7, 0
  00eef78  bl 0x20bb70
  00eef7c  nop
  00eef80  lfs 1, 160(30)
  00eef84  li 30, 3
  00eef88  fcmpu 0, 31, 1
  00eef8c  cror 6, 1, 2
  00eef90  bt 6, 0xeefa8
  00eef94  fmr 1, 31
  00eef98  bl 0x502758
  00eef9c  nop
  00eefa0  srawi 30, 3, 1
  00eefa4  addze 30, 30
  00eefa8  lis 3, 15
  00eefac  cmpwi 30, 0
  00eefb0  addi 3, 3, -10100
  00eefb4  ori 29, 24, 0
  00eefb8  lfs 1, 164(3)
  00eefbc  fsubs 21, 1, 31
  00eefc0  fsub 1, 31, 1
  00eefc4  fsel 21, 1, 23, 21
  00eefc8  bf 1, 0xef214
  00eefcc  lis 3, 15
  00eefd0  lfs 17, 948(1)
  00eefd4  addi 3, 3, -10100
  00eefd8  lfs 28, 168(3)
  00eefdc  lfs 27, 172(3)
  00eefe0  lfs 26, 176(3)
  00eefe4  lfs 25, 180(3)
  00eefe8  lfs 24, 184(3)
  00eefec  lfs 22, 188(3)
  00eeff0  fmr 1, 17
  00eeff4  fmr 2, 29
  00eeff8  bl 0xfcbe8
  00eeffc  nop
  00ef000  lis 3, 20224
  00ef004  lfs 2, -3052(28)
  00ef008  lis 4, 20224
  00ef00c  ori 3, 3, 36863
  00ef010  lis 6, 20224
  00ef014  lis 5, 12287
  00ef018  fmuls 3, 2, 21
  00ef01c  ori 4, 4, 32767
  00ef020  stw 3, 848(1)
  00ef024  stw 3, 852(1)
  00ef028  ori 5, 5, 65535
  00ef02c  ori 3, 6, 28671
  00ef030  lis 7, 12032
  00ef034  stw 4, 856(1)
  00ef038  lis 6, 12032
  00ef03c  ori 4, 7, 24447
  00ef040  stw 3, 860(1)
  00ef044  stw 5, 864(1)
  00ef048  lis 3, 12032
  00ef04c  ori 6, 6, 20351
  00ef050  stw 5, 868(1)
  00ef054  lis 5, 12032
  00ef058  stw 4, 872(1)
  00ef05c  ori 3, 3, 16255
  00ef060  fmsubs 16, 1, 2, 3
  00ef064  ori 4, 5, 79
  00ef068  lis 5, 12032
  00ef06c  stw 6, 876(1)
  00ef070  lis 6, 16128
  00ef074  stw 3, 880(1)
  00ef078  li 3, 6
  00ef07c  stw 4, 884(1)
  00ef080  stw 5, 888(1)
  00ef084  stw 6, 892(1)
  00ef088  bl 0xfc620
  00ef08c  nop
  00ef090  sldi 3, 3, 2
  00ef094  addc 3, 3, 1
  00ef098  clrldi 4, 3, 32
  00ef09c  li 3, 6
  00ef0a0  lwz 4, 848(4)
  00ef0a4  extsw 23, 4
  00ef0a8  bl 0xfc620
  00ef0ac  nop
  00ef0b0  lfs 1, -3056(27)
  00ef0b4  sldi 3, 3, 2
  00ef0b8  fmuls 2, 1, 27
  00ef0bc  fmuls 1, 1, 26
  00ef0c0  addc 3, 3, 1
  00ef0c4  clrldi 3, 3, 32
  00ef0c8  lwz 3, 872(3)
  00ef0cc  fctiwz 2, 2
  00ef0d0  extsw 22, 3
  00ef0d4  fctiwz 1, 1
  00ef0d8  stfd 2, 960(1)
  00ef0dc  lwz 3, 964(1)
  00ef0e0  stfd 1, 960(1)
  00ef0e4  lwz 4, 964(1)
  00ef0e8  extsw 3, 3
  00ef0ec  extsw 4, 4
  00ef0f0  bl 0xfe484
  00ef0f4  nop
  00ef0f8  lfs 1, -3056(27)
  00ef0fc  ori 21, 3, 0
  00ef100  fmuls 2, 1, 25
  00ef104  fmuls 1, 1, 24
  00ef108  fctiwz 2, 2
  00ef10c  fctiwz 1, 1
  00ef110  stfd 2, 960(1)
  00ef114  lwz 3, 964(1)
  00ef118  stfd 1, 960(1)
  00ef11c  lwz 4, 964(1)
  00ef120  extsw 3, 3
  00ef124  extsw 4, 4
  00ef128  bl 0xfe484
  00ef12c  nop
  00ef130  addic 20, 1, 176
  00ef134  std 24, 112(1)
  00ef138  ori 9, 3, 0
  00ef13c  fmr 1, 28
  00ef140  std 24, 120(1)
  00ef144  ori 8, 21, 0
  00ef148  fmr 2, 16
  00ef14c  ori 3, 26, 0
  00ef150  ori 4, 20, 0
  00ef154  ori 5, 23, 0
  00ef158  ori 6, 22, 0
  00ef15c  bl 0x123390
  00ef160  nop
  00ef164  lfs 1, -3056(27)
  00ef168  fmuls 2, 1, 14
  00ef16c  fmuls 1, 1, 22
  00ef170  fctiwz 2, 2
  00ef174  fctiwz 1, 1
  00ef178  stfd 2, 960(1)
  00ef17c  lwz 3, 964(1)
  00ef180  stfd 1, 960(1)
  00ef184  lwz 4, 964(1)
  00ef188  extsw 3, 3
  00ef18c  extsw 4, 4
  00ef190  bl 0xfe484
  00ef194  nop
  00ef198  lfs 1, -3056(27)
  00ef19c  ori 23, 3, 0
  00ef1a0  fmuls 2, 1, 27
  00ef1a4  fmuls 1, 1, 26
  00ef1a8  fctiwz 2, 2
  00ef1ac  fctiwz 1, 1
  00ef1b0  stfd 2, 960(1)
  00ef1b4  lwz 3, 964(1)
  00ef1b8  stfd 1, 960(1)
  00ef1bc  lwz 4, 964(1)
  00ef1c0  extsw 3, 3
  00ef1c4  extsw 4, 4
  00ef1c8  bl 0xfe484
  00ef1cc  nop
  00ef1d0  lis 5, 32767
  00ef1d4  lis 6, 255
  00ef1d8  std 24, 112(1)
  00ef1dc  ori 9, 3, 0
  00ef1e0  fmuls 2, 16, 30
  00ef1e4  ori 3, 26, 0
  00ef1e8  fmr 1, 28
  00ef1ec  ori 8, 23, 0
  00ef1f0  std 24, 120(1)
  00ef1f4  ori 4, 20, 0
  00ef1f8  ori 5, 5, 65535
  00ef1fc  ori 6, 6, 65535
  00ef200  bl 0x123390
  00ef204  nop
  00ef208  addic 29, 29, 1
  00ef20c  cmpw 29, 30
  00ef210  bt 0, 0xeeff0
  00ef214  lis 3, 15
  00ef218  ori 30, 24, 0
  00ef21c  addi 3, 3, -10100
  00ef220  lfs 30, 192(3)
  00ef224  lfs 29, 176(3)
  00ef228  lfs 28, 196(3)
  00ef22c  lis 3, 20224
  00ef230  fmr 1, 19
  00ef234  lis 5, 20224
  00ef238  fmr 2, 18
  00ef23c  ori 3, 3, 36863
  00ef240  lis 6, 20224
  00ef244  lis 4, 12287
  00ef248  ori 5, 5, 32767
  00ef24c  stw 3, 896(1)
  00ef250  ori 4, 4, 65535
  00ef254  stw 3, 900(1)
  00ef258  lis 7, 12032
  00ef25c  ori 3, 6, 28671
  00ef260  stw 5, 904(1)
  00ef264  lis 6, 12032
  00ef268  lis 5, 12032
  00ef26c  stw 3, 908(1)
  00ef270  stw 4, 912(1)
  00ef274  ori 3, 6, 24447
  00ef278  stw 4, 916(1)
  00ef27c  lis 6, 12032
  00ef280  ori 4, 5, 20351
  00ef284  ori 5, 6, 16255
  00ef288  ori 6, 7, 79
  00ef28c  stw 3, 920(1)
  00ef290  lis 3, 12032
  00ef294  stw 4, 924(1)
  00ef298  lis 4, 16128
  00ef29c  stw 5, 928(1)
  00ef2a0  stw 6, 932(1)
  00ef2a4  stw 3, 936(1)
  00ef2a8  stw 4, 940(1)
  00ef2ac  stw 24, 384(1)
  00ef2b0  stw 24, 388(1)
  00ef2b4  stw 24, 392(1)
  00ef2b8  stw 24, 396(1)
  00ef2bc  bl 0xfcbe8
  00ef2c0  nop
  00ef2c4  stfs 1, 384(1)
  00ef2c8  fmr 2, 18
  00ef2cc  fmr 1, 19
  00ef2d0  bl 0xfcbe8
  00ef2d4  nop
  00ef2d8  stfs 1, 388(1)
  00ef2dc  fmr 1, 19
  00ef2e0  fmr 2, 18
  00ef2e4  bl 0xfcbe8
  00ef2e8  nop
  00ef2ec  stfs 1, 392(1)
  00ef2f0  fmr 2, 15
  00ef2f4  fmr 1, 23
  00ef2f8  bl 0xfcbe8
  00ef2fc  nop
  00ef300  lfs 2, 388(1)
  00ef304  lfs 3, 384(1)
  00ef308  fmuls 4, 2, 2
  00ef30c  lfs 5, 392(1)
  00ef310  lfs 6, -3052(28)
  00ef314  fmuls 1, 1, 6
  00ef318  fmadds 4, 3, 3, 4
  00ef31c  li 3, 6
  00ef320  fmadds 4, 5, 5, 4
  00ef324  fsqrts 4, 4
  00ef328  fdivs 1, 1, 4
  00ef32c  fsub 6, 23, 4
  00ef330  fsub 7, 23, 4
  00ef334  fsub 8, 23, 4
  00ef338  fsub 9, 4, 23
  00ef33c  fsub 10, 4, 23
  00ef340  fsub 4, 4, 23
  00ef344  fmuls 3, 3, 1
  00ef348  fmuls 2, 2, 1
  00ef34c  fmuls 1, 5, 1
  00ef350  fsel 5, 6, 23, 3
  00ef354  fsel 6, 7, 23, 2
  00ef358  fsel 7, 8, 23, 1
  00ef35c  fsel 3, 9, 5, 3
  00ef360  fsel 2, 10, 6, 2
  00ef364  fsel 1, 4, 7, 1
  00ef368  stfs 3, 384(1)
  00ef36c  stfs 2, 388(1)
  00ef370  stfs 1, 392(1)
  00ef374  bl 0xfc620
  00ef378  nop
  00ef37c  sldi 4, 3, 2
  00ef380  li 3, 6
  00ef384  addc 4, 4, 1
  00ef388  clrldi 4, 4, 32
  00ef38c  lwz 4, 896(4)
  00ef390  extsw 29, 4
  00ef394  bl 0xfc620
  00ef398  nop
  00ef39c  lfs 1, -3056(27)
  00ef3a0  sldi 3, 3, 2
  00ef3a4  fmuls 2, 1, 29
  00ef3a8  addc 3, 3, 1
  00ef3ac  fmuls 1, 1, 28
  00ef3b0  clrldi 3, 3, 32
  00ef3b4  lwz 3, 920(3)
  00ef3b8  extsw 23, 3
  00ef3bc  fctiwz 2, 2
  00ef3c0  fctiwz 1, 1
  00ef3c4  stfd 2, 960(1)
  00ef3c8  lwz 3, 964(1)
  00ef3cc  stfd 1, 960(1)
  00ef3d0  extsw 3, 3
  00ef3d4  lwz 4, 964(1)
  00ef3d8  extsw 4, 4
  00ef3dc  bl 0xfe484
  00ef3e0  nop
  00ef3e4  ori 8, 3, 0
  00ef3e8  fmr 1, 30
  00ef3ec  addic 4, 1, 384
  00ef3f0  ori 3, 26, 0
  00ef3f4  ori 5, 29, 0
  00ef3f8  ori 6, 23, 0
  00ef3fc  bl 0x1229a8
  00ef400  nop
  00ef404  addic 30, 30, 1
  00ef408  cmpwi 30, 10
  00ef40c  bt 0, 0xef22c
  00ef410  lis 3, 161
  00ef414  lis 4, 16243
  00ef418  ori 4, 4, 13107
  00ef41c  lwz 3, 1812(3)
  00ef420  srawi 5, 3, 31
  00ef424  srwi 6, 5, 1
  00ef428  xor 3, 6, 3
  00ef42c  subc 3, 3, 5
  00ef430  cmpw 3, 4
  00ef434  bf 0, 0xef4f0
  00ef438  lis 3, 15
  00ef43c  addi 3, 3, -10100
  00ef440  lfs 1, 200(3)
  00ef444  fcmpu 0, 31, 1
  00ef448  cror 6, 0, 2
  00ef44c  bt 6, 0xef4f0
  00ef450  lis 3, 15
  00ef454  lfs 1, -3056(27)
  00ef458  li 28, 32
  00ef45c  addi 30, 3, -10100
  00ef460  addic 29, 1, 176
  00ef464  ori 3, 31, 0
  00ef468  li 10, 127
  00ef46c  ori 4, 26, 0
  00ef470  lfs 2, 172(30)
  00ef474  lfs 3, 40(30)
  00ef478  ori 5, 29, 0
  00ef47c  fmuls 2, 1, 2
  00ef480  std 28, 112(1)
  00ef484  fmr 30, 3
  00ef488  li 8, 127
  00ef48c  li 9, 127
  00ef490  fctiwz 2, 2
  00ef494  fmr 1, 30
  00ef498  stfd 2, 960(1)
  00ef49c  lwz 7, 964(1)
  00ef4a0  extsw 7, 7
  00ef4a4  bl 0x1d4d88
  00ef4a8  nop
  00ef4ac  lfs 2, 204(30)
  00ef4b0  ori 5, 29, 0
  00ef4b4  lfs 3, -3056(27)
  00ef4b8  ori 3, 31, 0
  00ef4bc  std 28, 112(1)
  00ef4c0  fmr 1, 30
  00ef4c4  fmuls 2, 3, 2
  00ef4c8  ori 4, 26, 0
  00ef4cc  li 8, 127
  00ef4d0  li 9, 127
  00ef4d4  li 10, 127
  00ef4d8  fctiwz 2, 2
  00ef4dc  stfd 2, 960(1)
  00ef4e0  lwz 7, 964(1)
  00ef4e4  extsw 7, 7
  00ef4e8  bl 0x1d4d88
  00ef4ec  nop
  00ef4f0  lfs 1, -3056(27)
  00ef4f4  lis 3, 15
  00ef4f8  fmuls 2, 1, 29
  00ef4fc  addi 29, 3, -10100
  00ef500  li 6, 48
  00ef504  addic 30, 1, 176
  00ef508  ori 4, 26, 0
  00ef50c  ori 3, 31, 0
  00ef510  lfs 1, 40(29)
  00ef514  std 6, 112(1)
  00ef518  ori 5, 30, 0
  00ef51c  li 8, 127
  00ef520  li 9, 127
  00ef524  fctiwz 2, 2
  00ef528  li 10, 0
  00ef52c  stfd 2, 960(1)
  00ef530  lwz 7, 964(1)
  00ef534  extsw 7, 7
  00ef538  bl 0x1d4d88
  00ef53c  nop
  00ef540  lfs 2, 208(29)
  00ef544  lfs 3, -3056(27)
  00ef548  li 6, 32
  00ef54c  li 8, 255
  00ef550  fmr 1, 20
  00ef554  fmuls 2, 3, 2
  00ef558  ori 3, 31, 0
  00ef55c  ori 4, 26, 0
  00ef560  std 6, 112(1)
  00ef564  ori 5, 30, 0
  00ef568  li 9, 255
  00ef56c  li 10, 255
  00ef570  fctiwz 2, 2
  00ef574  stfd 2, 960(1)
  00ef578  lwz 7, 964(1)
  00ef57c  extsw 7, 7
  00ef580  bl 0x1d4d88
  00ef584  nop
  00ef588  stw 24, 208(1)
  00ef58c  stb 24, 188(31)
  00ef590  li 3, -3056
  00ef594  lfs 1, 212(29)
  00ef598  lfs 2, 216(29)
  00ef59c  fsub 1, 31, 1
  00ef5a0  lfs 3, 20(29)
  00ef5a4  fmuls 2, 31, 2
  00ef5a8  lfs 4, 220(29)
  00ef5ac  li 6, 180
  00ef5b0  <unknown>
  00ef5b4  vspltisw 3, -1
  00ef5b8  li 7, 360
  00ef5bc  li 4, 0
  00ef5c0  li 3, 0
  00ef5c4  vslw 3, 3, 3
  00ef5c8  ori 5, 31, 0
  00ef5cc  fsel 1, 1, 3, 2
  00ef5d0  fsubs 1, 4, 1
  00ef5d4  stfs 1, 352(25)
  00ef5d8  <unknown>
  00ef5dc  vspltw 4, 4, 0
  00ef5e0  vmaddfp 2, 2, 4, 3
  00ef5e4  vctsxs 2, 2, 0
  00ef5e8  vspltw 2, 2, 0
  00ef5ec  stvewx 2, 7, 25
  00ef5f0  bl 0x15d12c
  00ef5f4  nop
  00ef5f8  ori 4, 26, 0
  00ef5fc  addic 3, 1, 768
  00ef600  li 5, 0
  00ef604  li 6, 0
  00ef608  bl 0x3fda38
  00ef60c  nop
  00ef610  lis 4, 165
  00ef614  ori 3, 31, 0
  00ef618  addic 4, 4, 7848
  00ef61c  bl 0x110798
  00ef620  nop
  00ef624  ori 3, 31, 0
  00ef628  bl 0xefb38
  00ef62c  nop
  00ef630  ld 0, 1248(1)
  00ef634  mtlr 0
  00ef638  lfd 14, 1088(1)
  00ef63c  lfd 15, 1096(1)
  00ef640  lfd 16, 1104(1)
  00ef644  lfd 17, 1112(1)
  00ef648  lfd 18, 1120(1)
  00ef64c  lfd 19, 1128(1)
  00ef650  lfd 20, 1136(1)
  00ef654  lfd 21, 1144(1)
  00ef658  lfd 22, 1152(1)
  00ef65c  lfd 23, 1160(1)
  00ef660  lfd 24, 1168(1)
  00ef664  lfd 25, 1176(1)
  00ef668  lfd 26, 1184(1)
  00ef66c  lfd 27, 1192(1)
  00ef670  lfd 28, 1200(1)
  00ef674  lfd 29, 1208(1)
  00ef678  lfd 30, 1216(1)
  00ef67c  lfd 31, 1224(1)
  00ef680  ld 20, 992(1)
  00ef684  ld 21, 1000(1)
  00ef688  ld 22, 1008(1)
  00ef68c  ld 23, 1016(1)
  00ef690  ld 24, 1024(1)
  00ef694  ld 25, 1032(1)
  00ef698  ld 26, 1040(1)
  00ef69c  ld 27, 1048(1)
  00ef6a0  ld 28, 1056(1)
  00ef6a4  ld 29, 1064(1)
  00ef6a8  ld 30, 1072(1)
  00ef6ac  ld 31, 1080(1)
  00ef6b0  addi 1, 1, 1232
  00ef6b4  blr
