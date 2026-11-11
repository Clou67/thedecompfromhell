# game/update/moby1109.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1109_001ca5d8:   # 0x1ca5d8, 0x308 bytes
  01ca5d8  stdu 1, -160(1)
  01ca5dc  mflr 0
  01ca5e0  std 0, 176(1)
  01ca5e4  lis 4, 118
  01ca5e8  lis 5, 118
  01ca5ec  lis 7, 118
  01ca5f0  lis 6, 118
  01ca5f4  lis 10, 118
  01ca5f8  lwz 4, 16872(4)
  01ca5fc  lis 8, 118
  01ca600  lwz 5, 16884(5)
  01ca604  std 31, 152(1)
  01ca608  lis 9, 29
  01ca60c  lwz 31, 120(3)
  01ca610  lwz 7, 16888(7)
  01ca614  addc 3, 4, 5
  01ca618  lwz 5, 16892(6)
  01ca61c  std 30, 144(1)
  01ca620  lis 6, 118
  01ca624  addi 30, 9, -23148
  01ca628  lwz 9, 16868(10)
  01ca62c  addc 4, 7, 4
  01ca630  lwz 8, 16896(8)
  01ca634  extsw 3, 3
  01ca638  addc 5, 9, 5
  01ca63c  lwz 7, 16900(6)
  01ca640  addc 6, 9, 8
  01ca644  extsw 4, 4
  01ca648  extsw 7, 7
  01ca64c  extsw 5, 5
  01ca650  extsw 6, 6
  01ca654  bl 0x6a718
  01ca658  nop
  01ca65c  lis 3, 161
  01ca660  lis 4, -30584
  01ca664  ori 4, 4, 34953
  01ca668  lwz 3, 1808(3)
  01ca66c  mulhw 4, 4, 3
  01ca670  addc 4, 4, 3
  01ca674  srawi 4, 4, 5
  01ca678  srwi 5, 4, 31
  01ca67c  addc 4, 4, 5
  01ca680  sldi 5, 4, 6
  01ca684  sldi 4, 4, 2
  01ca688  subc 4, 5, 4
  01ca68c  subc 3, 3, 4
  01ca690  extsw 3, 3
  01ca694  bl 0x502730
  01ca698  nop
  01ca69c  lfs 2, 0(30)
  01ca6a0  lfs 3, 4(30)
  01ca6a4  fmuls 1, 1, 2
  01ca6a8  lfs 4, 8(30)
  01ca6ac  lfs 2, 12(30)
  01ca6b0  fmuls 1, 1, 3
  01ca6b4  fsubs 3, 4, 1
  01ca6b8  fsubs 2, 2, 1
  01ca6bc  lfs 4, 16(30)
  01ca6c0  fsub 5, 1, 3
  01ca6c4  fsel 1, 5, 3, 1
  01ca6c8  lfs 3, 20(30)
  01ca6cc  fsub 5, 2, 1
  01ca6d0  fsel 1, 5, 2, 1
  01ca6d4  lfs 5, 24(30)
  01ca6d8  lfs 7, 28(30)
  01ca6dc  lfs 10, 32(30)
  01ca6e0  lfs 9, 36(30)
  01ca6e4  lfs 2, 40(30)
  01ca6e8  fmuls 6, 1, 1
  01ca6ec  fmuls 8, 6, 1
  01ca6f0  fmuls 11, 6, 8
  01ca6f4  fmadds 1, 8, 4, 1
  01ca6f8  fmuls 4, 6, 11
  01ca6fc  fmadds 1, 11, 3, 1
  01ca700  fmuls 3, 6, 4
  01ca704  fmadds 1, 4, 5, 1
  01ca708  fmadds 1, 3, 7, 1
  01ca70c  fmadds 1, 1, 10, 9
  01ca710  fcmpu 0, 1, 2
  01ca714  cror 6, 0, 2
  01ca718  bt 6, 0x1ca724
  01ca71c  fmr 1, 2
  01ca720  b 0x1ca740
  01ca724  lis 3, 29
  01ca728  addi 3, 3, -23148
  01ca72c  lfs 2, 44(3)
  01ca730  fcmpu 0, 1, 2
  01ca734  cror 6, 1, 2
  01ca738  bt 6, 0x1ca740
  01ca73c  fmr 1, 2
  01ca740  lis 3, 118
  01ca744  lis 4, 118
  01ca748  lwz 3, 16876(3)
  01ca74c  lwz 4, 16880(4)
  01ca750  extsw 3, 3
  01ca754  extsw 4, 4
  01ca758  bl 0x5027bc
  01ca75c  nop
  01ca760  lis 4, 29
  01ca764  li 5, 48
  01ca768  addi 4, 4, -23148
  01ca76c  lis 6, 114
  01ca770  stb 5, 112(1)
  01ca774  lfs 1, 48(4)
  01ca778  lfs 2, -3056(6)
  01ca77c  li 6, 58
  01ca780  fmuls 3, 2, 1
  01ca784  lwz 5, 180(31)
  01ca788  fmuls 1, 2, 1
  01ca78c  stb 6, 114(1)
  01ca790  ori 30, 3, 0
  01ca794  fctiwz 3, 3
  01ca798  fctiwz 1, 1
  01ca79c  stfd 3, 120(1)
  01ca7a0  lwz 7, 124(1)
  01ca7a4  stfd 1, 120(1)
  01ca7a8  divw 5, 5, 7
  01ca7ac  addic 5, 5, 48
  01ca7b0  lwz 7, 124(1)
  01ca7b4  stb 5, 113(1)
  01ca7b8  lwz 5, 180(31)
  01ca7bc  lfs 1, 52(4)
  01ca7c0  divw 8, 5, 7
  01ca7c4  fmuls 3, 2, 1
  01ca7c8  mullw 7, 8, 7
  01ca7cc  fctiwz 3, 3
  01ca7d0  subc 5, 5, 7
  01ca7d4  fmuls 1, 2, 1
  01ca7d8  fctiwz 1, 1
  01ca7dc  stfd 3, 120(1)
  01ca7e0  lwz 7, 124(1)
  01ca7e4  divw 5, 5, 7
  01ca7e8  addic 5, 5, 48
  01ca7ec  stfd 1, 120(1)
  01ca7f0  lwz 7, 124(1)
  01ca7f4  stb 5, 115(1)
  01ca7f8  lwz 5, 180(31)
  01ca7fc  lfs 1, 56(4)
  01ca800  divw 8, 5, 7
  01ca804  fmuls 3, 2, 1
  01ca808  mullw 7, 8, 7
  01ca80c  fctiwz 3, 3
  01ca810  stb 6, 117(1)
  01ca814  subc 5, 5, 7
  01ca818  fmuls 1, 2, 1
  01ca81c  stfd 3, 120(1)
  01ca820  lwz 3, 124(1)
  01ca824  fctiwz 1, 1
  01ca828  divw 3, 5, 3
  01ca82c  addic 3, 3, 48
  01ca830  stfd 1, 120(1)
  01ca834  lwz 5, 124(1)
  01ca838  stb 3, 116(1)
  01ca83c  lwz 3, 180(31)
  01ca840  lfs 1, 60(4)
  01ca844  divw 4, 3, 5
  01ca848  fmuls 1, 2, 1
  01ca84c  mullw 4, 4, 5
  01ca850  fctiwz 1, 1
  01ca854  subc 4, 3, 4
  01ca858  li 3, 10
  01ca85c  stfd 1, 120(1)
  01ca860  lwz 5, 124(1)
  01ca864  divw 4, 4, 5
  01ca868  addic 4, 4, 48
  01ca86c  stb 4, 118(1)
  01ca870  bl 0xfc620
  01ca874  nop
  01ca878  extsw 3, 3
  01ca87c  std 3, 120(1)
  01ca880  lfd 1, 120(1)
  01ca884  fcfid 1, 1
  01ca888  frsp 1, 1
  01ca88c  bl 0x502758
  01ca890  nop
  01ca894  lis 4, 118
  01ca898  addic 3, 3, 48
  01ca89c  lis 8, 118
  01ca8a0  addic 6, 1, 112
  01ca8a4  ori 5, 30, 0
  01ca8a8  lwz 4, 16868(4)
  01ca8ac  li 7, 8
  01ca8b0  stb 3, 119(1)
  01ca8b4  lwz 8, 16872(8)
  01ca8b8  extsw 3, 4
  01ca8bc  extsw 4, 8
  01ca8c0  bl 0x70998
  01ca8c4  nop
  01ca8c8  ld 0, 176(1)
  01ca8cc  mtlr 0
  01ca8d0  ld 30, 144(1)
  01ca8d4  ld 31, 152(1)
  01ca8d8  addi 1, 1, 160
  01ca8dc  blr

M1109_001ca8e8:   # 0x1ca8e8, 0x44 bytes
  01ca8e8  lis 3, 29
  01ca8ec  lis 4, 114
  01ca8f0  addi 3, 3, -22304
  01ca8f4  lis 5, 118
  01ca8f8  lis 6, 239
  01ca8fc  lfs 1, 0(3)
  01ca900  lfs 2, 4(3)
  01ca904  lfs 3, -3052(4)
  01ca908  addic 4, 5, 16908
  01ca90c  fmuls 1, 3, 1
  01ca910  fmuls 2, 3, 2
  01ca914  lis 3, 1
  01ca918  lis 5, 239
  01ca91c  stw 3, 72(4)
  01ca920  stfs 1, 6736(6)
  01ca924  stfs 2, 6740(5)
  01ca928  blr

M1109_001ca968:   # 0x1ca968, 0x5fc bytes
  01ca968  stdu 1, -400(1)
  01ca96c  mflr 0
  01ca970  std 0, 416(1)
  01ca974  stfd 25, 344(1)
  01ca978  stfd 26, 352(1)
  01ca97c  stfd 27, 360(1)
  01ca980  stfd 28, 368(1)
  01ca984  stfd 29, 376(1)
  01ca988  stfd 30, 384(1)
  01ca98c  stfd 31, 392(1)
  01ca990  lis 7, 29
  01ca994  std 25, 288(1)
  01ca998  fmr 31, 1
  01ca99c  std 23, 272(1)
  01ca9a0  ori 25, 6, 0
  01ca9a4  addi 7, 7, -22224
  01ca9a8  std 24, 280(1)
  01ca9ac  ori 23, 4, 0
  01ca9b0  ori 24, 5, 0
  01ca9b4  li 6, -1
  01ca9b8  lfs 1, 0(7)
  01ca9bc  std 31, 336(1)
  01ca9c0  std 30, 328(1)
  01ca9c4  std 29, 320(1)
  01ca9c8  std 28, 312(1)
  01ca9cc  std 27, 304(1)
  01ca9d0  std 26, 296(1)
  01ca9d4  std 22, 264(1)
  01ca9d8  lfs 2, 4(7)
  01ca9dc  bl 0x10fb28
  01ca9e0  nop
  01ca9e4  lis 3, 20224
  01ca9e8  lis 5, 20224
  01ca9ec  ori 3, 3, 36863
  01ca9f0  lis 6, 20224
  01ca9f4  lis 4, 12287
  01ca9f8  ori 5, 5, 32767
  01ca9fc  stw 3, 192(1)
  01caa00  ori 4, 4, 65535
  01caa04  stw 3, 196(1)
  01caa08  lis 7, 12032
  01caa0c  ori 3, 6, 28671
  01caa10  lis 6, 12032
  01caa14  stw 5, 200(1)
  01caa18  li 31, 0
  01caa1c  lis 5, 12032
  01caa20  stw 3, 204(1)
  01caa24  ori 3, 6, 24447
  01caa28  stw 4, 208(1)
  01caa2c  lis 6, 12032
  01caa30  stw 4, 212(1)
  01caa34  ori 4, 5, 20351
  01caa38  ori 5, 6, 16255
  01caa3c  stw 3, 216(1)
  01caa40  cmpwi 25, 0
  01caa44  ori 3, 7, 79
  01caa48  stw 4, 220(1)
  01caa4c  lis 4, 12032
  01caa50  stw 5, 224(1)
  01caa54  lis 5, 16128
  01caa58  stw 3, 228(1)
  01caa5c  ori 22, 31, 0
  01caa60  stw 4, 232(1)
  01caa64  stw 5, 236(1)
  01caa68  bf 1, 0x1cab88
  01caa6c  lis 3, 29
  01caa70  addi 3, 3, -22224
  01caa74  lfs 25, 8(3)
  01caa78  lfs 30, 28(3)
  01caa7c  lfs 26, 12(3)
  01caa80  fmuls 25, 25, 31
  01caa84  lfs 27, 16(3)
  01caa88  fmuls 30, 30, 31
  01caa8c  lfs 28, 20(3)
  01caa90  lfs 29, 24(3)
  01caa94  li 3, 6
  01caa98  bl 0xfc620
  01caa9c  nop
  01caaa0  sldi 3, 3, 2
  01caaa4  addc 3, 3, 1
  01caaa8  clrldi 4, 3, 32
  01caaac  li 3, 6
  01caab0  lwz 4, 192(4)
  01caab4  extsw 30, 4
  01caab8  bl 0xfc620
  01caabc  nop
  01caac0  lis 29, 114
  01caac4  sldi 3, 3, 2
  01caac8  addc 3, 3, 1
  01caacc  lfs 1, -3056(29)
  01caad0  clrldi 3, 3, 32
  01caad4  fmuls 2, 1, 26
  01caad8  fmuls 1, 1, 27
  01caadc  lwz 3, 216(3)
  01caae0  extsw 28, 3
  01caae4  fctiwz 2, 2
  01caae8  fctiwz 1, 1
  01caaec  stfd 2, 240(1)
  01caaf0  lwz 3, 244(1)
  01caaf4  stfd 1, 240(1)
  01caaf8  lwz 4, 244(1)
  01caafc  extsw 3, 3
  01cab00  extsw 4, 4
  01cab04  bl 0xfe484
  01cab08  nop
  01cab0c  lfs 1, -3056(29)
  01cab10  ori 29, 3, 0
  01cab14  fmuls 2, 1, 28
  01cab18  fmuls 1, 1, 29
  01cab1c  fctiwz 2, 2
  01cab20  fctiwz 1, 1
  01cab24  stfd 2, 240(1)
  01cab28  lwz 3, 244(1)
  01cab2c  stfd 1, 240(1)
  01cab30  lwz 4, 244(1)
  01cab34  extsw 3, 3
  01cab38  extsw 4, 4
  01cab3c  bl 0xfe484
  01cab40  nop
  01cab44  lis 5, 114
  01cab48  fmr 1, 25
  01cab4c  ori 9, 3, 0
  01cab50  ori 4, 24, 0
  01cab54  ori 8, 29, 0
  01cab58  ori 3, 23, 0
  01cab5c  lfs 2, -3052(5)
  01cab60  ori 6, 28, 0
  01cab64  std 22, 112(1)
  01cab68  ori 5, 30, 0
  01cab6c  fmuls 2, 2, 30
  01cab70  std 22, 120(1)
  01cab74  bl 0x123390
  01cab78  nop
  01cab7c  addic 31, 31, 1
  01cab80  cmpw 31, 25
  01cab84  bt 0, 0x1caa94
  01cab88  lis 3, 118
  01cab8c  lwz 3, 17092(3)
  01cab90  mullw 3, 3, 25
  01cab94  cmpwi 3, 0
  01cab98  bf 1, 0x1caf10
  01cab9c  lis 3, 29
  01caba0  addi 3, 3, -22224
  01caba4  lfs 26, 32(3)
  01caba8  lfs 27, 36(3)
  01cabac  lfs 28, 40(3)
  01cabb0  lfs 29, 44(3)
  01cabb4  lfs 30, 48(3)
  01cabb8  addic 31, 1, 128
  01cabbc  fmr 1, 26
  01cabc0  ori 3, 31, 0
  01cabc4  fmr 2, 27
  01cabc8  bl 0xfea60
  01cabcc  nop
  01cabd0  lfs 1, 128(1)
  01cabd4  lfs 2, 0(23)
  01cabd8  addic 30, 1, 144
  01cabdc  lfs 3, 132(1)
  01cabe0  fadds 4, 1, 2
  01cabe4  lfs 1, 4(23)
  01cabe8  ori 3, 30, 0
  01cabec  lfs 2, 136(1)
  01cabf0  fadds 3, 3, 1
  01cabf4  lfs 1, 8(23)
  01cabf8  fadds 5, 2, 1
  01cabfc  fmr 1, 26
  01cac00  fmr 2, 28
  01cac04  stfs 4, 128(1)
  01cac08  stfs 3, 132(1)
  01cac0c  stfs 5, 136(1)
  01cac10  bl 0xfea60
  01cac14  nop
  01cac18  lfs 1, 144(1)
  01cac1c  lfs 2, 0(24)
  01cac20  lis 3, 239
  01cac24  lfs 3, 148(1)
  01cac28  lis 4, 118
  01cac2c  fadds 2, 1, 2
  01cac30  lfs 1, 4(24)
  01cac34  lfs 4, 152(1)
  01cac38  fadds 3, 3, 1
  01cac3c  lfs 1, 8(24)
  01cac40  fadds 4, 4, 1
  01cac44  lfs 1, 6768(3)
  01cac48  lfs 5, 17040(4)
  01cac4c  stfs 2, 144(1)
  01cac50  fmr 2, 5
  01cac54  stfs 3, 148(1)
  01cac58  stfs 4, 152(1)
  01cac5c  bl 0xfcbe8
  01cac60  nop
  01cac64  lis 29, 114
  01cac68  lfs 3, 144(1)
  01cac6c  lfs 4, 148(1)
  01cac70  ori 3, 30, 0
  01cac74  lfs 2, -3052(29)
  01cac78  lfs 6, 152(1)
  01cac7c  fmuls 5, 1, 2
  01cac80  lfs 7, 156(1)
  01cac84  fmr 1, 26
  01cac88  stfs 7, 172(1)
  01cac8c  fmr 2, 28
  01cac90  fmuls 3, 3, 5
  01cac94  fmuls 4, 4, 5
  01cac98  fmuls 5, 6, 5
  01cac9c  stfs 3, 160(1)
  01caca0  stfs 4, 164(1)
  01caca4  stfs 5, 168(1)
  01caca8  bl 0xfea60
  01cacac  nop
  01cacb0  lfs 1, 144(1)
  01cacb4  lfs 2, 0(24)
  01cacb8  lis 3, 239
  01cacbc  lfs 3, 148(1)
  01cacc0  lis 4, 118
  01cacc4  fadds 2, 1, 2
  01cacc8  lfs 1, 4(24)
  01caccc  lfs 4, 152(1)
  01cacd0  fadds 3, 3, 1
  01cacd4  lfs 1, 8(24)
  01cacd8  fadds 4, 4, 1
  01cacdc  lfs 1, 6772(3)
  01cace0  lfs 5, 17052(4)
  01cace4  stfs 2, 144(1)
  01cace8  fmr 2, 5
  01cacec  stfs 3, 148(1)
  01cacf0  stfs 4, 152(1)
  01cacf4  bl 0xfcbe8
  01cacf8  nop
  01cacfc  lfs 2, -3052(29)
  01cad00  lis 3, 118
  01cad04  lis 4, 118
  01cad08  fmuls 1, 1, 2
  01cad0c  lfs 2, 144(1)
  01cad10  lfs 3, 148(1)
  01cad14  lfs 4, 152(1)
  01cad18  lfs 5, 156(1)
  01cad1c  stfs 5, 188(1)
  01cad20  fmuls 5, 2, 1
  01cad24  fmuls 3, 3, 1
  01cad28  fmuls 4, 4, 1
  01cad2c  lfs 1, 17044(3)
  01cad30  lfs 2, 17048(4)
  01cad34  stfs 5, 176(1)
  01cad38  stfs 3, 180(1)
  01cad3c  stfs 4, 184(1)
  01cad40  bl 0xfcbe8
  01cad44  nop
  01cad48  fmuls 3, 1, 31
  01cad4c  lis 3, 118
  01cad50  lis 4, 118
  01cad54  lfs 1, 17056(3)
  01cad58  lfs 2, 17060(4)
  01cad5c  stfs 3, 172(1)
  01cad60  bl 0xfcbe8
  01cad64  nop
  01cad68  fmuls 3, 1, 31
  01cad6c  lis 3, 118
  01cad70  fmr 1, 26
  01cad74  lis 4, 118
  01cad78  fmr 2, 27
  01cad7c  lwz 3, 17064(3)
  01cad80  lwz 4, 17068(4)
  01cad84  extsw 30, 3
  01cad88  extsw 29, 4
  01cad8c  stfs 3, 188(1)
  01cad90  bl 0xfcbe8
  01cad94  nop
  01cad98  ori 4, 29, 0
  01cad9c  ori 3, 30, 0
  01cada0  bl 0x5027bc
  01cada4  nop
  01cada8  lis 4, 118
  01cadac  lis 5, 118
  01cadb0  fmr 1, 26
  01cadb4  ori 30, 3, 0
  01cadb8  fmr 2, 27
  01cadbc  lwz 3, 17072(4)
  01cadc0  lwz 4, 17076(5)
  01cadc4  extsw 29, 3
  01cadc8  extsw 28, 4
  01cadcc  bl 0xfcbe8
  01cadd0  nop
  01cadd4  ori 4, 28, 0
  01cadd8  ori 3, 29, 0
  01caddc  bl 0x5027bc
  01cade0  nop
  01cade4  lis 4, 118
  01cade8  ori 29, 3, 0
  01cadec  lwz 4, 17080(4)
  01cadf0  extsw 5, 4
  01cadf4  slwi 4, 4, 1
  01cadf8  extsw 4, 4
  01cadfc  std 5, 240(1)
  01cae00  lfd 1, 240(1)
  01cae04  std 4, 240(1)
  01cae08  fcfid 1, 1
  01cae0c  frsp 1, 1
  01cae10  lfd 2, 240(1)
  01cae14  fcfid 2, 2
  01cae18  frsp 2, 2
  01cae1c  bl 0xfcbe8
  01cae20  nop
  01cae24  lis 28, 114
  01cae28  lfs 2, -3056(28)
  01cae2c  fmuls 1, 1, 2
  01cae30  bl 0x502758
  01cae34  nop
  01cae38  lis 4, 118
  01cae3c  ori 27, 3, 0
  01cae40  lwz 4, 17084(4)
  01cae44  extsw 4, 4
  01cae48  std 4, 240(1)
  01cae4c  lfd 1, 240(1)
  01cae50  fcfid 1, 1
  01cae54  frsp 1, 1
  01cae58  fmuls 2, 1, 29
  01cae5c  bl 0xfcbe8
  01cae60  nop
  01cae64  lfs 2, -3056(28)
  01cae68  fmuls 1, 1, 2
  01cae6c  bl 0x502758
  01cae70  nop
  01cae74  lis 4, 118
  01cae78  ori 26, 3, 0
  01cae7c  lwz 4, 17088(4)
  01cae80  extsw 4, 4
  01cae84  std 4, 240(1)
  01cae88  lfd 1, 240(1)
  01cae8c  fcfid 2, 1
  01cae90  frsp 2, 2
  01cae94  fmuls 1, 2, 30
  01cae98  bl 0xfcbe8
  01cae9c  nop
  01caea0  lfs 2, -3056(28)
  01caea4  fmuls 1, 1, 2
  01caea8  bl 0x502758
  01caeac  nop
  01caeb0  lis 6, 118
  01caeb4  lis 7, 118
  01caeb8  ori 10, 3, 0
  01caebc  addic 4, 1, 160
  01caec0  addic 5, 1, 176
  01caec4  lwz 3, 17100(6)
  01caec8  ori 8, 27, 0
  01caecc  lwz 7, 17096(7)
  01caed0  ori 6, 30, 0
  01caed4  slwi 3, 3, 16
  01caed8  ori 9, 26, 0
  01caedc  addc 3, 7, 3
  01caee0  ori 7, 29, 0
  01caee4  extsw 11, 3
  01caee8  ori 3, 31, 0
  01caeec  std 11, 112(1)
  01caef0  bl 0x1206e8
  01caef4  nop
  01caef8  lis 3, 118
  01caefc  addic 22, 22, 1
  01caf00  lwz 3, 17092(3)
  01caf04  mullw 3, 3, 25
  01caf08  cmpw 22, 3
  01caf0c  bt 0, 0x1cabb8
  01caf10  ld 0, 416(1)
  01caf14  mtlr 0
  01caf18  lfd 25, 344(1)
  01caf1c  lfd 26, 352(1)
  01caf20  lfd 27, 360(1)
  01caf24  lfd 28, 368(1)
  01caf28  lfd 29, 376(1)
  01caf2c  lfd 30, 384(1)
  01caf30  lfd 31, 392(1)
  01caf34  ld 22, 264(1)
  01caf38  ld 23, 272(1)
  01caf3c  ld 24, 280(1)
  01caf40  ld 25, 288(1)
  01caf44  ld 26, 296(1)
  01caf48  ld 27, 304(1)
  01caf4c  ld 28, 312(1)
  01caf50  ld 29, 320(1)
  01caf54  ld 30, 328(1)
  01caf58  ld 31, 336(1)
  01caf5c  addi 1, 1, 400
  01caf60  blr

M1109_001caf98:   # 0x1caf98, 0x644 bytes
  01caf98  stdu 1, -432(1)
  01caf9c  mflr 0
  01cafa0  std 0, 448(1)
  01cafa4  stfd 21, 344(1)
  01cafa8  stfd 22, 352(1)
  01cafac  stfd 23, 360(1)
  01cafb0  stfd 24, 368(1)
  01cafb4  stfd 25, 376(1)
  01cafb8  stfd 26, 384(1)
  01cafbc  stfd 27, 392(1)
  01cafc0  stfd 28, 400(1)
  01cafc4  stfd 29, 408(1)
  01cafc8  stfd 30, 416(1)
  01cafcc  stfd 31, 424(1)
  01cafd0  std 28, 312(1)
  01cafd4  lis 4, 118
  01cafd8  ori 28, 3, 0
  01cafdc  lis 3, 118
  01cafe0  lwz 4, 17028(4)
  01cafe4  extsw 4, 4
  01cafe8  std 4, 224(1)
  01cafec  std 24, 280(1)
  01caff0  lis 4, 29
  01caff4  addi 24, 4, -20636
  01caff8  lis 4, 114
  01caffc  lfs 1, 4(24)
  01cb000  lfs 2, -3056(4)
  01cb004  lfs 29, 0(24)
  01cb008  lfd 3, 224(1)
  01cb00c  fcfid 3, 3
  01cb010  std 25, 288(1)
  01cb014  lis 4, 118
  01cb018  lwz 25, 120(28)
  01cb01c  frsp 3, 3
  01cb020  fadds 1, 3, 1
  01cb024  fmuls 1, 2, 1
  01cb028  fctiwz 1, 1
  01cb02c  stfd 1, 224(1)
  01cb030  lfs 1, 8(24)
  01cb034  lwz 5, 228(1)
  01cb038  lwz 6, 17032(3)
  01cb03c  extsw 5, 5
  01cb040  stfs 1, 48(1)
  01cb044  lfs 1, 12(24)
  01cb048  lwz 7, 17036(4)
  01cb04c  extsw 6, 6
  01cb050  extsw 7, 7
  01cb054  stfs 1, 52(1)
  01cb058  lfs 1, 16(24)
  01cb05c  stfs 29, 60(1)
  01cb060  ld 3, 48(1)
  01cb064  stfs 1, 56(1)
  01cb068  std 31, 336(1)
  01cb06c  std 30, 328(1)
  01cb070  std 29, 320(1)
  01cb074  std 27, 304(1)
  01cb078  std 26, 296(1)
  01cb07c  std 23, 272(1)
  01cb080  std 22, 264(1)
  01cb084  std 21, 256(1)
  01cb088  std 20, 248(1)
  01cb08c  std 19, 240(1)
  01cb090  ld 4, 56(1)
  01cb094  bl 0x2d1440
  01cb098  nop
  01cb09c  fmr 28, 29
  01cb0a0  lwz 3, 204(25)
  01cb0a4  lis 27, 165
  01cb0a8  lfs 30, 20(24)
  01cb0ac  li 26, 0
  01cb0b0  slwi 3, 3, 2
  01cb0b4  addic 27, 27, -28284
  01cb0b8  extsw 3, 3
  01cb0bc  ori 30, 26, 0
  01cb0c0  lis 31, 164
  01cb0c4  fmr 27, 28
  01cb0c8  lwzx 29, 27, 3
  01cb0cc  lfs 24, 24(24)
  01cb0d0  lfs 31, 28(24)
  01cb0d4  fmr 26, 27
  01cb0d8  fmr 25, 26
  01cb0dc  addic 24, 1, 128
  01cb0e0  lhz 23, 0(29)
  01cb0e4  ori 3, 24, 0
  01cb0e8  fmr 1, 30
  01cb0ec  fmr 2, 24
  01cb0f0  bl 0xfea60
  01cb0f4  nop
  01cb0f8  lwz 3, -28512(31)
  01cb0fc  rlwinm 23, 23, 8, 9, 23
  01cb100  fmr 1, 31
  01cb104  ori 5, 24, 0
  01cb108  addc 4, 3, 23
  01cb10c  ori 3, 28, 0
  01cb110  addic 4, 4, 16
  01cb114  li 6, 1
  01cb118  clrldi 4, 4, 32
  01cb11c  bl 0x1ca968
  01cb120  lwz 3, -28512(31)
  01cb124  lhz 4, 0(29)
  01cb128  addic 26, 26, 1
  01cb12c  addc 3, 3, 23
  01cb130  extsh 4, 4
  01cb134  clrldi 3, 3, 32
  01cb138  cmpwi 4, 0
  01cb13c  addic 29, 29, 2
  01cb140  extsh 26, 26
  01cb144  lfs 1, 12(3)
  01cb148  lfs 2, 16(3)
  01cb14c  fsub 3, 25, 1
  01cb150  lfs 4, 20(3)
  01cb154  fadds 28, 28, 2
  01cb158  lfs 2, 24(3)
  01cb15c  fadds 27, 27, 4
  01cb160  fadds 26, 26, 2
  01cb164  fsel 25, 3, 25, 1
  01cb168  bf 0, 0x1cb0dc
  01cb16c  ori 3, 26, 0
  01cb170  bl 0x502730
  01cb174  nop
  01cb178  lwz 3, 204(25)
  01cb17c  fdivs 22, 30, 1
  01cb180  slwi 3, 3, 2
  01cb184  extsw 3, 3
  01cb188  lwzx 29, 27, 3
  01cb18c  lhz 28, 0(29)
  01cb190  lwz 3, -28512(31)
  01cb194  rlwinm 28, 28, 8, 9, 23
  01cb198  addc 3, 3, 28
  01cb19c  clrldi 3, 3, 32
  01cb1a0  lfs 1, 16(3)
  01cb1a4  fnmsubs 1, 28, 22, 1
  01cb1a8  lis 4, 29
  01cb1ac  addic 27, 1, 160
  01cb1b0  addi 4, 4, -20636
  01cb1b4  stfs 1, 144(1)
  01cb1b8  lfs 2, 20(3)
  01cb1bc  fnmsubs 2, 27, 22, 2
  01cb1c0  fmuls 4, 2, 2
  01cb1c4  stfs 2, 148(1)
  01cb1c8  lfs 3, 24(3)
  01cb1cc  fnmsubs 3, 26, 22, 3
  01cb1d0  fmadds 4, 1, 1, 4
  01cb1d4  stfs 3, 152(1)
  01cb1d8  lfs 5, 28(3)
  01cb1dc  stfs 5, 156(1)
  01cb1e0  fmadds 4, 3, 3, 4
  01cb1e4  lfs 5, 12(3)
  01cb1e8  fsubs 5, 5, 25
  01cb1ec  lis 3, 114
  01cb1f0  fsqrts 4, 4
  01cb1f4  lfs 6, -3052(3)
  01cb1f8  lis 3, 16576
  01cb1fc  stw 3, 156(1)
  01cb200  ori 3, 27, 0
  01cb204  fdivs 5, 5, 25
  01cb208  fmuls 7, 6, 31
  01cb20c  fsub 8, 29, 4
  01cb210  fsub 9, 29, 4
  01cb214  fsub 10, 4, 29
  01cb218  fsub 11, 4, 29
  01cb21c  fnmsubs 5, 7, 5, 7
  01cb220  fsub 7, 29, 4
  01cb224  fdivs 5, 5, 4
  01cb228  fsub 4, 4, 29
  01cb22c  fmuls 1, 1, 5
  01cb230  fmuls 2, 2, 5
  01cb234  fmuls 3, 3, 5
  01cb238  fsel 5, 7, 29, 1
  01cb23c  fsel 7, 8, 29, 2
  01cb240  fsel 8, 9, 29, 3
  01cb244  fsel 1, 10, 5, 1
  01cb248  fsel 2, 11, 7, 2
  01cb24c  fsel 3, 4, 8, 3
  01cb250  stfs 1, 144(1)
  01cb254  stfs 2, 148(1)
  01cb258  stfs 3, 152(1)
  01cb25c  lfs 1, 32(4)
  01cb260  lfs 2, 36(4)
  01cb264  fmuls 1, 6, 1
  01cb268  fmuls 2, 6, 2
  01cb26c  bl 0xfea60
  01cb270  nop
  01cb274  lwz 3, -28512(31)
  01cb278  addic 4, 1, 144
  01cb27c  ori 5, 27, 0
  01cb280  addc 3, 3, 28
  01cb284  clrldi 3, 3, 32
  01cb288  bl 0x1bc7c0
  01cb28c  nop
  01cb290  lis 3, 118
  01cb294  ori 26, 30, 0
  01cb298  lwz 3, 17156(3)
  01cb29c  cmpwi 3, 0
  01cb2a0  bf 1, 0x1cb544
  01cb2a4  lis 3, 29
  01cb2a8  addi 3, 3, -20636
  01cb2ac  lfs 23, 40(3)
  01cb2b0  lfs 24, 44(3)
  01cb2b4  lwz 4, -28512(31)
  01cb2b8  addic 27, 1, 176
  01cb2bc  fmr 1, 29
  01cb2c0  addc 4, 4, 28
  01cb2c4  ori 3, 27, 0
  01cb2c8  clrldi 4, 4, 32
  01cb2cc  lfs 2, 12(4)
  01cb2d0  fmuls 2, 2, 23
  01cb2d4  bl 0xfea60
  01cb2d8  nop
  01cb2dc  lwz 3, -28512(31)
  01cb2e0  lis 5, 114
  01cb2e4  lfs 1, 176(1)
  01cb2e8  addc 3, 3, 28
  01cb2ec  lfs 2, 180(1)
  01cb2f0  clrldi 4, 3, 32
  01cb2f4  lis 3, 118
  01cb2f8  addic 25, 1, 192
  01cb2fc  lfs 3, 16(4)
  01cb300  lfs 4, 184(1)
  01cb304  fadds 3, 1, 3
  01cb308  lfs 5, 17104(3)
  01cb30c  ori 3, 25, 0
  01cb310  fmr 1, 29
  01cb314  stfs 3, 176(1)
  01cb318  lfs 3, 20(4)
  01cb31c  fadds 3, 2, 3
  01cb320  lfs 2, -3052(5)
  01cb324  fmuls 2, 5, 2
  01cb328  stfs 3, 180(1)
  01cb32c  lfs 3, 24(4)
  01cb330  fadds 3, 4, 3
  01cb334  stfs 3, 184(1)
  01cb338  bl 0xfea60
  01cb33c  nop
  01cb340  lis 3, 118
  01cb344  stw 30, 220(1)
  01cb348  lis 4, 118
  01cb34c  stw 30, 216(1)
  01cb350  stw 30, 212(1)
  01cb354  stw 30, 208(1)
  01cb358  lfs 1, 17124(3)
  01cb35c  lfs 2, 17128(4)
  01cb360  bl 0xfcbe8
  01cb364  nop
  01cb368  lis 3, 118
  01cb36c  lis 4, 118
  01cb370  stfs 1, 204(1)
  01cb374  lfs 1, 17132(3)
  01cb378  lfs 2, 17136(4)
  01cb37c  bl 0xfcbe8
  01cb380  nop
  01cb384  lis 3, 118
  01cb388  stfs 1, 220(1)
  01cb38c  lis 4, 118
  01cb390  fmr 2, 30
  01cb394  fmr 1, 29
  01cb398  lwz 3, 17140(3)
  01cb39c  lwz 4, 17144(4)
  01cb3a0  extsw 24, 3
  01cb3a4  extsw 23, 4
  01cb3a8  bl 0xfcbe8
  01cb3ac  nop
  01cb3b0  ori 4, 23, 0
  01cb3b4  ori 3, 24, 0
  01cb3b8  bl 0x5027bc
  01cb3bc  nop
  01cb3c0  lis 4, 118
  01cb3c4  lis 5, 118
  01cb3c8  fmr 1, 29
  01cb3cc  ori 24, 3, 0
  01cb3d0  fmr 2, 30
  01cb3d4  lwz 3, 17148(4)
  01cb3d8  lwz 4, 17152(5)
  01cb3dc  extsw 23, 3
  01cb3e0  extsw 22, 4
  01cb3e4  bl 0xfcbe8
  01cb3e8  nop
  01cb3ec  ori 3, 23, 0
  01cb3f0  ori 4, 22, 0
  01cb3f4  bl 0x5027bc
  01cb3f8  nop
  01cb3fc  ori 23, 3, 0
  01cb400  fmr 1, 29
  01cb404  fmr 2, 30
  01cb408  bl 0xfcbe8
  01cb40c  nop
  01cb410  lis 3, 118
  01cb414  lis 22, 114
  01cb418  lwz 3, 17108(3)
  01cb41c  extsw 3, 3
  01cb420  std 3, 224(1)
  01cb424  lfs 2, -3056(22)
  01cb428  lfd 3, 224(1)
  01cb42c  fcfid 3, 3
  01cb430  frsp 3, 3
  01cb434  fmadds 1, 3, 1, 30
  01cb438  fmuls 1, 2, 1
  01cb43c  bl 0x502758
  01cb440  nop
  01cb444  lis 4, 118
  01cb448  lis 21, 118
  01cb44c  ori 20, 3, 0
  01cb450  lwz 4, 17112(4)
  01cb454  extsw 4, 4
  01cb458  std 4, 224(1)
  01cb45c  lfs 2, 17120(21)
  01cb460  lfd 3, 224(1)
  01cb464  fneg 1, 2
  01cb468  fcfid 3, 3
  01cb46c  frsp 21, 3
  01cb470  bl 0xfcbe8
  01cb474  nop
  01cb478  fadds 1, 1, 30
  01cb47c  lfs 2, -3056(22)
  01cb480  fmuls 1, 21, 1
  01cb484  fmuls 1, 2, 1
  01cb488  bl 0x502758
  01cb48c  nop
  01cb490  lis 4, 118
  01cb494  ori 19, 3, 0
  01cb498  lwz 4, 17116(4)
  01cb49c  extsw 4, 4
  01cb4a0  std 4, 224(1)
  01cb4a4  lfs 2, 17120(21)
  01cb4a8  lfd 3, 224(1)
  01cb4ac  fneg 1, 2
  01cb4b0  fcfid 3, 3
  01cb4b4  frsp 21, 3
  01cb4b8  bl 0xfcbe8
  01cb4bc  nop
  01cb4c0  fadds 1, 1, 30
  01cb4c4  lfs 2, -3056(22)
  01cb4c8  fmuls 1, 21, 1
  01cb4cc  fmuls 1, 2, 1
  01cb4d0  bl 0x502758
  01cb4d4  nop
  01cb4d8  lis 4, 118
  01cb4dc  ori 10, 3, 0
  01cb4e0  ori 3, 27, 0
  01cb4e4  ori 9, 19, 0
  01cb4e8  addic 5, 1, 208
  01cb4ec  lwz 6, 17160(4)
  01cb4f0  ori 7, 23, 0
  01cb4f4  ori 4, 25, 0
  01cb4f8  extsw 11, 6
  01cb4fc  ori 6, 24, 0
  01cb500  ori 8, 20, 0
  01cb504  std 11, 112(1)
  01cb508  bl 0x1206e8
  01cb50c  nop
  01cb510  ori 27, 3, 0
  01cb514  cmpwi 27, 0
  01cb518  bt 2, 0x1cb530
  01cb51c  fmr 1, 24
  01cb520  bl 0x502758
  01cb524  nop
  01cb528  addic 3, 3, 224
  01cb52c  stb 3, 9(27)
  01cb530  lis 3, 118
  01cb534  addic 26, 26, 1
  01cb538  lwz 3, 17156(3)
  01cb53c  cmpw 26, 3
  01cb540  bt 0, 0x1cb2b4
  01cb544  lhz 3, 0(29)
  01cb548  addic 29, 29, 2
  01cb54c  extsh 3, 3
  01cb550  cmpwi 3, 0
  01cb554  bf 0, 0x1cb18c
  01cb558  lwz 4, -28512(31)
  01cb55c  li 3, 30
  01cb560  addc 4, 4, 28
  01cb564  clrldi 4, 4, 32
  01cb568  stb 3, 188(4)
  01cb56c  ld 0, 448(1)
  01cb570  mtlr 0
  01cb574  lfd 21, 344(1)
  01cb578  lfd 22, 352(1)
  01cb57c  lfd 23, 360(1)
  01cb580  lfd 24, 368(1)
  01cb584  lfd 25, 376(1)
  01cb588  lfd 26, 384(1)
  01cb58c  lfd 27, 392(1)
  01cb590  lfd 28, 400(1)
  01cb594  lfd 29, 408(1)
  01cb598  lfd 30, 416(1)
  01cb59c  lfd 31, 424(1)
  01cb5a0  ld 19, 240(1)
  01cb5a4  ld 20, 248(1)
  01cb5a8  ld 21, 256(1)
  01cb5ac  ld 22, 264(1)
  01cb5b0  ld 23, 272(1)
  01cb5b4  ld 24, 280(1)
  01cb5b8  ld 25, 288(1)
  01cb5bc  ld 26, 296(1)
  01cb5c0  ld 27, 304(1)
  01cb5c4  ld 28, 312(1)
  01cb5c8  ld 29, 320(1)
  01cb5cc  ld 30, 328(1)
  01cb5d0  ld 31, 336(1)
  01cb5d4  addi 1, 1, 432
  01cb5d8  blr

M1109_001cb618:   # 0x1cb618, 0x16a0 bytes
  01cb618  stdu 1, -720(1)
  01cb61c  mflr 0
  01cb620  std 0, 736(1)
  01cb624  stfd 28, 688(1)
  01cb628  stfd 29, 696(1)
  01cb62c  stfd 30, 704(1)
  01cb630  stfd 31, 712(1)
  01cb634  std 31, 680(1)
  01cb638  lis 5, 29
  01cb63c  std 22, 608(1)
  01cb640  ori 31, 3, 0
  01cb644  addi 22, 5, -18980
  01cb648  lis 5, 114
  01cb64c  sldi 3, 4, 2
  01cb650  lis 4, 165
  01cb654  std 28, 656(1)
  01cb658  lfs 1, 0(22)
  01cb65c  lfs 2, -3056(5)
  01cb660  std 30, 672(1)
  01cb664  addic 28, 4, 7136
  01cb668  lwz 30, 120(31)
  01cb66c  fmuls 3, 2, 1
  01cb670  addc 3, 30, 3
  01cb674  lfs 1, 4(22)
  01cb678  clrldi 3, 3, 32
  01cb67c  lwz 4, 96(3)
  01cb680  lwz 5, 116(3)
  01cb684  fctidz 2, 3
  01cb688  slwi 4, 4, 2
  01cb68c  lwz 3, 136(3)
  01cb690  slwi 5, 5, 2
  01cb694  extsw 4, 4
  01cb698  std 29, 664(1)
  01cb69c  slwi 3, 3, 2
  01cb6a0  std 25, 632(1)
  01cb6a4  extsw 29, 5
  01cb6a8  lwzx 25, 28, 4
  01cb6ac  extsw 4, 3
  01cb6b0  fcfid 2, 2
  01cb6b4  addic 3, 30, 244
  01cb6b8  lwzx 29, 28, 29
  01cb6bc  lwzx 28, 28, 4
  01cb6c0  frsp 2, 2
  01cb6c4  std 27, 648(1)
  01cb6c8  std 26, 640(1)
  01cb6cc  std 24, 624(1)
  01cb6d0  std 23, 616(1)
  01cb6d4  std 21, 600(1)
  01cb6d8  fdivs 2, 1, 2
  01cb6dc  bl 0x109af0
  01cb6e0  nop
  01cb6e4  lwz 3, 0(25)
  01cb6e8  addic 3, 3, -1
  01cb6ec  extsw 3, 3
  01cb6f0  std 3, 584(1)
  01cb6f4  lfs 1, 244(30)
  01cb6f8  lfd 2, 584(1)
  01cb6fc  fcfid 2, 2
  01cb700  frsp 2, 2
  01cb704  fmuls 31, 1, 2
  01cb708  fmr 1, 31
  01cb70c  bl 0x502758
  01cb710  nop
  01cb714  ori 27, 3, 0
  01cb718  lwz 4, 0(29)
  01cb71c  extsw 3, 27
  01cb720  std 3, 584(1)
  01cb724  addic 3, 4, -1
  01cb728  lfs 1, 244(30)
  01cb72c  lfd 2, 584(1)
  01cb730  extsw 3, 3
  01cb734  fcfid 2, 2
  01cb738  std 3, 584(1)
  01cb73c  frsp 30, 2
  01cb740  fsubs 29, 31, 30
  01cb744  lfd 2, 584(1)
  01cb748  fcfid 2, 2
  01cb74c  frsp 2, 2
  01cb750  fmuls 1, 1, 2
  01cb754  bl 0x502758
  01cb758  nop
  01cb75c  lwz 4, 0(28)
  01cb760  ori 26, 3, 0
  01cb764  addic 4, 4, -1
  01cb768  extsw 4, 4
  01cb76c  std 4, 584(1)
  01cb770  lfs 1, 244(30)
  01cb774  lfd 2, 584(1)
  01cb778  fcfid 2, 2
  01cb77c  frsp 2, 2
  01cb780  fmuls 31, 1, 2
  01cb784  fmr 1, 31
  01cb788  bl 0x502758
  01cb78c  nop
  01cb790  sldi 4, 27, 4
  01cb794  addc 24, 25, 4
  01cb798  clrldi 24, 24, 32
  01cb79c  ori 21, 3, 0
  01cb7a0  fsubs 31, 31, 30
  01cb7a4  sldi 25, 21, 4
  01cb7a8  lfs 1, 32(24)
  01cb7ac  lfs 2, 16(24)
  01cb7b0  lfs 3, 36(24)
  01cb7b4  fsubs 1, 1, 2
  01cb7b8  lfs 4, 20(24)
  01cb7bc  fsubs 3, 3, 4
  01cb7c0  addc 23, 28, 25
  01cb7c4  lfs 4, 40(24)
  01cb7c8  lfs 5, 24(24)
  01cb7cc  lfs 6, 44(24)
  01cb7d0  clrldi 23, 23, 32
  01cb7d4  fsubs 4, 4, 5
  01cb7d8  addic 3, 1, 128
  01cb7dc  fmadds 1, 29, 1, 2
  01cb7e0  stfs 1, 128(1)
  01cb7e4  lfs 1, 20(24)
  01cb7e8  fmadds 1, 29, 3, 1
  01cb7ec  stfs 1, 132(1)
  01cb7f0  lfs 1, 24(24)
  01cb7f4  stfs 6, 140(1)
  01cb7f8  fmadds 1, 29, 4, 1
  01cb7fc  stfs 1, 136(1)
  01cb800  lfs 1, 32(23)
  01cb804  lfs 2, 16(23)
  01cb808  lfs 3, 36(23)
  01cb80c  lfs 4, 20(23)
  01cb810  fsubs 1, 1, 2
  01cb814  lfs 5, 40(23)
  01cb818  lfs 6, 24(23)
  01cb81c  fsubs 3, 3, 4
  01cb820  lfs 7, 44(23)
  01cb824  fsubs 5, 5, 6
  01cb828  stfs 7, 28(31)
  01cb82c  fmadds 1, 31, 1, 2
  01cb830  fmadds 2, 31, 3, 4
  01cb834  fmadds 3, 31, 5, 6
  01cb838  stfs 1, 16(31)
  01cb83c  stfs 2, 20(31)
  01cb840  stfs 3, 24(31)
  01cb844  bl 0x47b98
  01cb848  nop
  01cb84c  cmpwi 21, 1
  01cb850  lfs 29, 8(22)
  01cb854  bt 0, 0x1cc008
  01cb858  extsw 3, 25
  01cb85c  lfs 2, 16(23)
  01cb860  lfsx 1, 28, 3
  01cb864  lfs 3, 20(23)
  01cb868  lis 3, 29
  01cb86c  lfs 4, 4(23)
  01cb870  fsubs 1, 2, 1
  01cb874  addi 3, 3, -18980
  01cb878  fsubs 4, 3, 4
  01cb87c  lis 28, 115
  01cb880  addic 28, 28, 22784
  01cb884  fabs 6, 1
  01cb888  fabs 5, 4
  01cb88c  stfs 1, 252(1)
  01cb890  stfs 4, 256(1)
  01cb894  fsubs 1, 6, 5
  01cb898  stfs 1, 260(1)
  01cb89c  lwz 4, 252(1)
  01cb8a0  lfs 28, 12(3)
  01cb8a4  lfs 1, 252(1)
  01cb8a8  lwz 3, 256(1)
  01cb8ac  lfs 4, 256(1)
  01cb8b0  fabs 1, 1
  01cb8b4  lwz 5, 260(1)
  01cb8b8  rlwinm 3, 3, 3, 29, 29
  01cb8bc  lfs 7, 260(1)
  01cb8c0  fabs 4, 4
  01cb8c4  rlwimi 3, 5, 2, 30, 30
  01cb8c8  fsub 8, 7, 28
  01cb8cc  rlwimi 3, 4, 4, 28, 28
  01cb8d0  fsub 7, 7, 28
  01cb8d4  ori 4, 28, 0
  01cb8d8  rlwimi 4, 3, 2, 26, 28
  01cb8dc  slwi 3, 3, 2
  01cb8e0  clrldi 4, 4, 32
  01cb8e4  fsel 5, 8, 1, 5
  01cb8e8  lfsx 30, 28, 3
  01cb8ec  lfs 1, 4(4)
  01cb8f0  fsel 4, 7, 4, 6
  01cb8f4  fcmpu 0, 5, 28
  01cb8f8  bt 1, 0x1cb904
  01cb8fc  fmr 30, 28
  01cb900  b 0x1cba1c
  01cb904  fsubs 6, 4, 5
  01cb908  fadds 4, 4, 5
  01cb90c  addic 3, 1, 16
  01cb910  li 7, 2
  01cb914  addic 4, 3, 536
  01cb918  addic 5, 3, 552
  01cb91c  mtctr 7
  01cb920  fdivs 4, 6, 4
  01cb924  fmuls 5, 4, 4
  01cb928  stfs 4, 564(1)
  01cb92c  stfs 4, 556(1)
  01cb930  stfs 4, 560(1)
  01cb934  stfs 4, 552(1)
  01cb938  lfs 7, 564(1)
  01cb93c  lfs 8, 556(1)
  01cb940  lfs 9, 560(1)
  01cb944  fmuls 6, 5, 5
  01cb948  fmuls 8, 8, 5
  01cb94c  fmuls 7, 7, 6
  01cb950  fmuls 4, 6, 6
  01cb954  fmuls 6, 9, 6
  01cb958  stfs 8, 556(1)
  01cb95c  fmuls 5, 7, 5
  01cb960  stfs 6, 560(1)
  01cb964  stfs 5, 564(1)
  01cb968  lfs 5, 536(3)
  01cb96c  fmuls 5, 5, 4
  01cb970  stfs 5, 552(3)
  01cb974  lfs 5, 4(4)
  01cb978  addic 3, 3, 8
  01cb97c  addic 4, 4, 8
  01cb980  fmuls 5, 5, 4
  01cb984  stfs 5, 4(5)
  01cb988  addic 5, 5, 8
  01cb98c  bdnz 0x1cb968
  01cb990  li 5, 4
  01cb994  ori 3, 1, 0
  01cb998  mtctr 5
  01cb99c  lis 4, 115
  01cb9a0  addic 5, 3, 552
  01cb9a4  addic 4, 4, 22752
  01cb9a8  ori 6, 5, 0
  01cb9ac  lfs 4, 552(3)
  01cb9b0  lfs 5, 0(4)
  01cb9b4  fmuls 4, 4, 5
  01cb9b8  lfs 5, 4(4)
  01cb9bc  addic 4, 4, 8
  01cb9c0  stfs 4, 552(3)
  01cb9c4  lfs 4, 4(5)
  01cb9c8  addic 3, 3, 8
  01cb9cc  fmuls 4, 4, 5
  01cb9d0  stfs 4, 4(5)
  01cb9d4  addic 5, 5, 8
  01cb9d8  bdnz 0x1cb9ac
  01cb9dc  fmr 4, 28
  01cb9e0  ori 3, 1, 0
  01cb9e4  mtctr 7
  01cb9e8  lfs 5, 552(3)
  01cb9ec  fadds 4, 4, 5
  01cb9f0  addic 3, 3, 16
  01cb9f4  lfs 5, 4(6)
  01cb9f8  lfs 6, 8(6)
  01cb9fc  lfs 7, 12(6)
  01cba00  addic 6, 6, 16
  01cba04  fadds 4, 4, 5
  01cba08  fadds 4, 4, 6
  01cba0c  fadds 4, 4, 7
  01cba10  bdnz 0x1cb9e8
  01cba14  fadds 4, 4, 29
  01cba18  fmadds 30, 4, 30, 1
  01cba1c  lfs 1, 32(23)
  01cba20  lfs 4, 36(23)
  01cba24  fsubs 1, 1, 2
  01cba28  fsubs 2, 4, 3
  01cba2c  fabs 3, 1
  01cba30  fabs 4, 2
  01cba34  stfs 1, 240(1)
  01cba38  stfs 2, 244(1)
  01cba3c  fsubs 1, 3, 4
  01cba40  stfs 1, 248(1)
  01cba44  lwz 3, 240(1)
  01cba48  lfs 1, 240(1)
  01cba4c  lwz 4, 244(1)
  01cba50  lfs 2, 244(1)
  01cba54  lwz 5, 248(1)
  01cba58  rlwinm 4, 4, 3, 29, 29
  01cba5c  fabs 5, 2
  01cba60  lfs 2, 248(1)
  01cba64  fabs 1, 1
  01cba68  rlwimi 4, 5, 2, 30, 30
  01cba6c  fsub 6, 2, 28
  01cba70  fsub 7, 2, 28
  01cba74  rlwimi 4, 3, 4, 28, 28
  01cba78  ori 3, 28, 0
  01cba7c  rlwimi 3, 4, 2, 26, 28
  01cba80  slwi 4, 4, 2
  01cba84  clrldi 3, 3, 32
  01cba88  fsel 4, 6, 1, 4
  01cba8c  lfsx 2, 28, 4
  01cba90  fsel 3, 7, 5, 3
  01cba94  lfs 1, 4(3)
  01cba98  fcmpu 0, 4, 28
  01cba9c  bt 1, 0x1cbaa8
  01cbaa0  fmr 1, 28
  01cbaa4  b 0x1cbbc0
  01cbaa8  fsubs 5, 3, 4
  01cbaac  fadds 3, 3, 4
  01cbab0  addic 3, 1, 16
  01cbab4  li 6, 2
  01cbab8  addic 5, 3, 520
  01cbabc  addic 4, 3, 504
  01cbac0  mtctr 6
  01cbac4  fdivs 3, 5, 3
  01cbac8  fmuls 4, 3, 3
  01cbacc  stfs 3, 532(1)
  01cbad0  stfs 3, 524(1)
  01cbad4  stfs 3, 528(1)
  01cbad8  stfs 3, 520(1)
  01cbadc  lfs 6, 532(1)
  01cbae0  lfs 7, 524(1)
  01cbae4  lfs 8, 528(1)
  01cbae8  fmuls 5, 4, 4
  01cbaec  fmuls 7, 7, 4
  01cbaf0  fmuls 6, 6, 5
  01cbaf4  fmuls 3, 5, 5
  01cbaf8  fmuls 5, 8, 5
  01cbafc  stfs 7, 524(1)
  01cbb00  fmuls 4, 6, 4
  01cbb04  stfs 5, 528(1)
  01cbb08  stfs 4, 532(1)
  01cbb0c  lfs 4, 504(3)
  01cbb10  fmuls 4, 4, 3
  01cbb14  stfs 4, 520(3)
  01cbb18  lfs 4, 4(4)
  01cbb1c  addic 4, 4, 8
  01cbb20  fmuls 4, 4, 3
  01cbb24  addic 3, 3, 8
  01cbb28  stfs 4, 4(5)
  01cbb2c  addic 5, 5, 8
  01cbb30  bdnz 0x1cbb0c
  01cbb34  li 5, 4
  01cbb38  ori 3, 1, 0
  01cbb3c  mtctr 5
  01cbb40  lis 4, 115
  01cbb44  addic 5, 3, 520
  01cbb48  addic 4, 4, 22752
  01cbb4c  ori 7, 5, 0
  01cbb50  lfs 3, 520(3)
  01cbb54  lfs 4, 0(4)
  01cbb58  fmuls 3, 3, 4
  01cbb5c  lfs 4, 4(4)
  01cbb60  addic 4, 4, 8
  01cbb64  stfs 3, 520(3)
  01cbb68  lfs 3, 4(5)
  01cbb6c  addic 3, 3, 8
  01cbb70  fmuls 3, 3, 4
  01cbb74  stfs 3, 4(5)
  01cbb78  addic 5, 5, 8
  01cbb7c  bdnz 0x1cbb50
  01cbb80  ori 3, 1, 0
  01cbb84  fmr 3, 28
  01cbb88  mtctr 6
  01cbb8c  lfs 4, 520(3)
  01cbb90  fadds 3, 3, 4
  01cbb94  lfs 4, 4(7)
  01cbb98  addic 3, 3, 16
  01cbb9c  lfs 5, 8(7)
  01cbba0  lfs 6, 12(7)
  01cbba4  addic 7, 7, 16
  01cbba8  fadds 3, 3, 4
  01cbbac  fadds 3, 3, 5
  01cbbb0  fadds 3, 3, 6
  01cbbb4  bdnz 0x1cbb8c
  01cbbb8  fadds 3, 3, 29
  01cbbbc  fmadds 1, 3, 2, 1
  01cbbc0  fmr 2, 30
  01cbbc4  bl 0x5025e0
  01cbbc8  nop
  01cbbcc  fmuls 1, 31, 1
  01cbbd0  fmr 2, 30
  01cbbd4  bl 0x502578
  01cbbd8  nop
  01cbbdc  stfs 1, 72(31)
  01cbbe0  lfs 2, 4(23)
  01cbbe4  lfs 1, 20(23)
  01cbbe8  lfs 3, 0(23)
  01cbbec  fsubs 2, 2, 1
  01cbbf0  lfs 30, 16(23)
  01cbbf4  fsubs 3, 3, 30
  01cbbf8  lfs 4, 24(23)
  01cbbfc  fmuls 2, 2, 2
  01cbc00  fmadds 2, 3, 3, 2
  01cbc04  lfs 3, 8(23)
  01cbc08  fsubs 3, 4, 3
  01cbc0c  fsqrts 2, 2
  01cbc10  stfs 3, 232(1)
  01cbc14  fabs 8, 3
  01cbc18  fabs 7, 2
  01cbc1c  stfs 2, 228(1)
  01cbc20  lwz 3, 232(1)
  01cbc24  lfs 3, 232(1)
  01cbc28  rlwinm 3, 3, 3, 29, 29
  01cbc2c  fabs 10, 3
  01cbc30  fsubs 2, 7, 8
  01cbc34  stfs 2, 236(1)
  01cbc38  lwz 4, 228(1)
  01cbc3c  lfs 2, 228(1)
  01cbc40  lfs 5, 32(23)
  01cbc44  lfs 6, 36(23)
  01cbc48  fabs 2, 2
  01cbc4c  lfs 9, 40(23)
  01cbc50  lwz 5, 236(1)
  01cbc54  lfs 3, 236(1)
  01cbc58  rlwimi 3, 5, 2, 30, 30
  01cbc5c  fsub 11, 3, 28
  01cbc60  fsub 12, 3, 28
  01cbc64  rlwimi 3, 4, 4, 28, 28
  01cbc68  ori 4, 28, 0
  01cbc6c  rlwimi 4, 3, 2, 26, 28
  01cbc70  slwi 3, 3, 2
  01cbc74  clrldi 4, 4, 32
  01cbc78  fsel 8, 11, 2, 8
  01cbc7c  lfsx 2, 28, 3
  01cbc80  fsel 7, 12, 10, 7
  01cbc84  lfs 3, 4(4)
  01cbc88  fcmpu 0, 8, 28
  01cbc8c  bt 1, 0x1cbc98
  01cbc90  fmr 2, 28
  01cbc94  b 0x1cbdb0
  01cbc98  fsubs 10, 7, 8
  01cbc9c  fadds 7, 7, 8
  01cbca0  addic 3, 1, 16
  01cbca4  li 7, 2
  01cbca8  addic 5, 3, 488
  01cbcac  addic 4, 3, 472
  01cbcb0  mtctr 7
  01cbcb4  fdivs 7, 10, 7
  01cbcb8  fmuls 8, 7, 7
  01cbcbc  stfs 7, 500(1)
  01cbcc0  stfs 7, 492(1)
  01cbcc4  stfs 7, 496(1)
  01cbcc8  stfs 7, 488(1)
  01cbccc  lfs 11, 500(1)
  01cbcd0  lfs 12, 492(1)
  01cbcd4  lfs 13, 496(1)
  01cbcd8  fmuls 10, 8, 8
  01cbcdc  fmuls 12, 12, 8
  01cbce0  fmuls 11, 11, 10
  01cbce4  fmuls 7, 10, 10
  01cbce8  fmuls 10, 13, 10
  01cbcec  stfs 12, 492(1)
  01cbcf0  fmuls 8, 11, 8
  01cbcf4  stfs 10, 496(1)
  01cbcf8  stfs 8, 500(1)
  01cbcfc  lfs 8, 472(3)
  01cbd00  fmuls 8, 8, 7
  01cbd04  stfs 8, 488(3)
  01cbd08  lfs 8, 4(4)
  01cbd0c  addic 4, 4, 8
  01cbd10  fmuls 8, 8, 7
  01cbd14  addic 3, 3, 8
  01cbd18  stfs 8, 4(5)
  01cbd1c  addic 5, 5, 8
  01cbd20  bdnz 0x1cbcfc
  01cbd24  li 5, 4
  01cbd28  ori 3, 1, 0
  01cbd2c  mtctr 5
  01cbd30  lis 4, 115
  01cbd34  addic 5, 3, 488
  01cbd38  addic 4, 4, 22752
  01cbd3c  ori 6, 5, 0
  01cbd40  lfs 7, 488(3)
  01cbd44  lfs 8, 0(4)
  01cbd48  fmuls 7, 7, 8
  01cbd4c  lfs 8, 4(4)
  01cbd50  addic 4, 4, 8
  01cbd54  stfs 7, 488(3)
  01cbd58  lfs 7, 4(5)
  01cbd5c  addic 3, 3, 8
  01cbd60  fmuls 7, 7, 8
  01cbd64  stfs 7, 4(5)
  01cbd68  addic 5, 5, 8
  01cbd6c  bdnz 0x1cbd40
  01cbd70  ori 3, 1, 0
  01cbd74  fmr 7, 28
  01cbd78  mtctr 7
  01cbd7c  lfs 8, 488(3)
  01cbd80  fadds 7, 7, 8
  01cbd84  lfs 8, 4(6)
  01cbd88  addic 3, 3, 16
  01cbd8c  lfs 10, 8(6)
  01cbd90  lfs 11, 12(6)
  01cbd94  addic 6, 6, 16
  01cbd98  fadds 7, 7, 8
  01cbd9c  fadds 7, 7, 10
  01cbda0  fadds 7, 7, 11
  01cbda4  bdnz 0x1cbd7c
  01cbda8  fadds 7, 7, 29
  01cbdac  fmadds 2, 7, 2, 3
  01cbdb0  fsubs 1, 1, 6
  01cbdb4  fsubs 3, 30, 5
  01cbdb8  fmuls 1, 1, 1
  01cbdbc  fmadds 1, 3, 3, 1
  01cbdc0  fsubs 3, 9, 4
  01cbdc4  fsqrts 1, 1
  01cbdc8  stfs 3, 220(1)
  01cbdcc  fabs 4, 3
  01cbdd0  fabs 3, 1
  01cbdd4  stfs 1, 216(1)
  01cbdd8  lwz 3, 220(1)
  01cbddc  rlwinm 3, 3, 3, 29, 29
  01cbde0  fsubs 1, 3, 4
  01cbde4  stfs 1, 224(1)
  01cbde8  lwz 4, 216(1)
  01cbdec  lfs 1, 216(1)
  01cbdf0  lfs 5, 220(1)
  01cbdf4  lwz 5, 224(1)
  01cbdf8  lfs 6, 224(1)
  01cbdfc  fabs 1, 1
  01cbe00  rlwimi 3, 5, 2, 30, 30
  01cbe04  fsub 7, 6, 28
  01cbe08  fabs 5, 5
  01cbe0c  fsub 6, 6, 28
  01cbe10  rlwimi 3, 4, 4, 28, 28
  01cbe14  ori 4, 28, 0
  01cbe18  rlwimi 4, 3, 2, 26, 28
  01cbe1c  slwi 3, 3, 2
  01cbe20  clrldi 4, 4, 32
  01cbe24  fsel 4, 7, 1, 4
  01cbe28  lfsx 30, 28, 3
  01cbe2c  fsel 3, 6, 5, 3
  01cbe30  lfs 1, 4(4)
  01cbe34  fcmpu 0, 4, 28
  01cbe38  bt 1, 0x1cbe40
  01cbe3c  b 0x1cbf54
  01cbe40  fsubs 5, 3, 4
  01cbe44  fadds 3, 3, 4
  01cbe48  addic 3, 1, 16
  01cbe4c  li 6, 2
  01cbe50  addic 5, 3, 456
  01cbe54  addic 4, 3, 440
  01cbe58  mtctr 6
  01cbe5c  fdivs 3, 5, 3
  01cbe60  fmuls 4, 3, 3
  01cbe64  stfs 3, 468(1)
  01cbe68  stfs 3, 460(1)
  01cbe6c  stfs 3, 464(1)
  01cbe70  stfs 3, 456(1)
  01cbe74  lfs 6, 468(1)
  01cbe78  lfs 7, 460(1)
  01cbe7c  lfs 8, 464(1)
  01cbe80  fmuls 5, 4, 4
  01cbe84  fmuls 7, 7, 4
  01cbe88  fmuls 6, 6, 5
  01cbe8c  fmuls 3, 5, 5
  01cbe90  fmuls 5, 8, 5
  01cbe94  stfs 7, 460(1)
  01cbe98  fmuls 4, 6, 4
  01cbe9c  stfs 5, 464(1)
  01cbea0  stfs 4, 468(1)
  01cbea4  lfs 4, 440(3)
  01cbea8  fmuls 4, 4, 3
  01cbeac  stfs 4, 456(3)
  01cbeb0  lfs 4, 4(4)
  01cbeb4  addic 4, 4, 8
  01cbeb8  fmuls 4, 4, 3
  01cbebc  addic 3, 3, 8
  01cbec0  stfs 4, 4(5)
  01cbec4  addic 5, 5, 8
  01cbec8  bdnz 0x1cbea4
  01cbecc  li 5, 4
  01cbed0  ori 3, 1, 0
  01cbed4  mtctr 5
  01cbed8  lis 4, 115
  01cbedc  addic 5, 3, 456
  01cbee0  addic 4, 4, 22752
  01cbee4  ori 7, 5, 0
  01cbee8  lfs 3, 456(3)
  01cbeec  lfs 4, 0(4)
  01cbef0  fmuls 3, 3, 4
  01cbef4  lfs 4, 4(4)
  01cbef8  addic 4, 4, 8
  01cbefc  stfs 3, 456(3)
  01cbf00  lfs 3, 4(5)
  01cbf04  addic 3, 3, 8
  01cbf08  fmuls 3, 3, 4
  01cbf0c  stfs 3, 4(5)
  01cbf10  addic 5, 5, 8
  01cbf14  bdnz 0x1cbee8
  01cbf18  ori 3, 1, 0
  01cbf1c  mtctr 6
  01cbf20  lfs 3, 456(3)
  01cbf24  lfs 4, 4(7)
  01cbf28  fadds 3, 28, 3
  01cbf2c  lfs 5, 8(7)
  01cbf30  addic 3, 3, 16
  01cbf34  lfs 28, 12(7)
  01cbf38  addic 7, 7, 16
  01cbf3c  fadds 3, 3, 4
  01cbf40  fadds 3, 3, 5
  01cbf44  fadds 28, 3, 28
  01cbf48  bdnz 0x1cbf20
  01cbf4c  fadds 28, 28, 29
  01cbf50  fmadds 28, 28, 30, 1
  01cbf54  fneg 30, 2
  01cbf58  fneg 1, 28
  01cbf5c  fmr 2, 30
  01cbf60  bl 0x5025e0
  01cbf64  nop
  01cbf68  fmuls 1, 31, 1
  01cbf6c  fmr 2, 30
  01cbf70  bl 0x502578
  01cbf74  nop
  01cbf78  lis 3, 29
  01cbf7c  stfs 1, 68(31)
  01cbf80  addi 3, 3, -18980
  01cbf84  lfs 2, 176(30)
  01cbf88  lfs 3, 16(3)
  01cbf8c  lfs 4, 20(3)
  01cbf90  fadds 2, 2, 3
  01cbf94  lfs 5, 24(3)
  01cbf98  lfs 6, 28(3)
  01cbf9c  fsubs 3, 4, 2
  01cbfa0  fsubs 4, 5, 2
  01cbfa4  fsub 5, 2, 3
  01cbfa8  fsel 2, 5, 3, 2
  01cbfac  lfs 3, 32(3)
  01cbfb0  fsub 5, 4, 2
  01cbfb4  fsel 2, 5, 4, 2
  01cbfb8  lfs 4, 36(3)
  01cbfbc  lfs 5, 40(3)
  01cbfc0  lfs 8, 72(31)
  01cbfc4  fmuls 7, 2, 2
  01cbfc8  fmuls 9, 7, 2
  01cbfcc  fmuls 10, 7, 9
  01cbfd0  fmadds 2, 9, 6, 2
  01cbfd4  fmuls 6, 7, 10
  01cbfd8  fmadds 2, 10, 3, 2
  01cbfdc  fmuls 3, 7, 6
  01cbfe0  fmadds 2, 6, 4, 2
  01cbfe4  fmadds 2, 3, 5, 2
  01cbfe8  fmuls 2, 1, 2
  01cbfec  fmr 1, 8
  01cbff0  stfs 2, 68(31)
  01cbff4  lfs 2, 176(30)
  01cbff8  bl 0x502578
  01cbffc  nop
  01cc000  fmr 8, 1
  01cc004  b 0x1cc37c
  01cc008  lfs 6, 20(28)
  01cc00c  lfs 7, 36(28)
  01cc010  lfs 4, 16(28)
  01cc014  fsubs 1, 6, 7
  01cc018  lfs 5, 32(28)
  01cc01c  fsubs 2, 4, 5
  01cc020  lis 3, 29
  01cc024  addi 3, 3, -18980
  01cc028  fmuls 1, 1, 1
  01cc02c  fmadds 1, 2, 2, 1
  01cc030  lfs 2, 40(28)
  01cc034  lfs 3, 24(28)
  01cc038  fsubs 2, 2, 3
  01cc03c  lis 28, 115
  01cc040  fsqrts 1, 1
  01cc044  addic 28, 28, 22784
  01cc048  stfs 2, 208(1)
  01cc04c  fabs 9, 2
  01cc050  fabs 3, 1
  01cc054  stfs 1, 204(1)
  01cc058  lwz 4, 208(1)
  01cc05c  rlwinm 4, 4, 3, 29, 29
  01cc060  fsubs 1, 3, 9
  01cc064  stfs 1, 212(1)
  01cc068  lwz 5, 204(1)
  01cc06c  lfs 8, 12(3)
  01cc070  lfs 1, 204(1)
  01cc074  lfs 2, 208(1)
  01cc078  lwz 3, 212(1)
  01cc07c  fabs 10, 2
  01cc080  lfs 2, 212(1)
  01cc084  fabs 1, 1
  01cc088  rlwimi 4, 3, 2, 30, 30
  01cc08c  fsub 11, 2, 8
  01cc090  ori 3, 28, 0
  01cc094  fsub 12, 2, 8
  01cc098  rlwimi 4, 5, 4, 28, 28
  01cc09c  rlwimi 3, 4, 2, 26, 28
  01cc0a0  slwi 4, 4, 2
  01cc0a4  clrldi 3, 3, 32
  01cc0a8  fsel 9, 11, 1, 9
  01cc0ac  lfsx 1, 28, 4
  01cc0b0  fsel 3, 12, 10, 3
  01cc0b4  lfs 2, 4(3)
  01cc0b8  fcmpu 0, 9, 8
  01cc0bc  bt 1, 0x1cc0c8
  01cc0c0  fmr 1, 8
  01cc0c4  b 0x1cc1e0
  01cc0c8  fsubs 10, 3, 9
  01cc0cc  fadds 3, 3, 9
  01cc0d0  addic 3, 1, 16
  01cc0d4  li 6, 2
  01cc0d8  addic 5, 3, 424
  01cc0dc  addic 4, 3, 408
  01cc0e0  mtctr 6
  01cc0e4  fdivs 3, 10, 3
  01cc0e8  fmuls 9, 3, 3
  01cc0ec  stfs 3, 436(1)
  01cc0f0  stfs 3, 428(1)
  01cc0f4  stfs 3, 432(1)
  01cc0f8  stfs 3, 424(1)
  01cc0fc  lfs 11, 436(1)
  01cc100  lfs 12, 428(1)
  01cc104  lfs 13, 432(1)
  01cc108  fmuls 10, 9, 9
  01cc10c  fmuls 12, 12, 9
  01cc110  fmuls 11, 11, 10
  01cc114  fmuls 3, 10, 10
  01cc118  fmuls 10, 13, 10
  01cc11c  stfs 12, 428(1)
  01cc120  fmuls 9, 11, 9
  01cc124  stfs 10, 432(1)
  01cc128  stfs 9, 436(1)
  01cc12c  lfs 9, 408(3)
  01cc130  fmuls 9, 9, 3
  01cc134  stfs 9, 424(3)
  01cc138  lfs 9, 4(4)
  01cc13c  addic 4, 4, 8
  01cc140  fmuls 9, 9, 3
  01cc144  addic 3, 3, 8
  01cc148  stfs 9, 4(5)
  01cc14c  addic 5, 5, 8
  01cc150  bdnz 0x1cc12c
  01cc154  li 5, 4
  01cc158  ori 3, 1, 0
  01cc15c  mtctr 5
  01cc160  lis 4, 115
  01cc164  addic 5, 3, 424
  01cc168  addic 4, 4, 22752
  01cc16c  ori 7, 5, 0
  01cc170  lfs 3, 424(3)
  01cc174  lfs 9, 0(4)
  01cc178  fmuls 3, 3, 9
  01cc17c  lfs 9, 4(4)
  01cc180  addic 4, 4, 8
  01cc184  stfs 3, 424(3)
  01cc188  lfs 3, 4(5)
  01cc18c  addic 3, 3, 8
  01cc190  fmuls 3, 3, 9
  01cc194  stfs 3, 4(5)
  01cc198  addic 5, 5, 8
  01cc19c  bdnz 0x1cc170
  01cc1a0  ori 3, 1, 0
  01cc1a4  fmr 3, 8
  01cc1a8  mtctr 6
  01cc1ac  lfs 9, 424(3)
  01cc1b0  fadds 3, 3, 9
  01cc1b4  lfs 9, 4(7)
  01cc1b8  addic 3, 3, 16
  01cc1bc  lfs 10, 8(7)
  01cc1c0  lfs 11, 12(7)
  01cc1c4  addic 7, 7, 16
  01cc1c8  fadds 3, 3, 9
  01cc1cc  fadds 3, 3, 10
  01cc1d0  fadds 3, 3, 11
  01cc1d4  bdnz 0x1cc1ac
  01cc1d8  fadds 3, 3, 29
  01cc1dc  fmadds 1, 3, 1, 2
  01cc1e0  fsubs 2, 5, 4
  01cc1e4  fsubs 3, 7, 6
  01cc1e8  fneg 1, 1
  01cc1ec  fabs 5, 2
  01cc1f0  fabs 4, 3
  01cc1f4  stfs 2, 192(1)
  01cc1f8  stfs 3, 196(1)
  01cc1fc  fsubs 2, 5, 4
  01cc200  stfs 2, 200(1)
  01cc204  lwz 3, 192(1)
  01cc208  lfs 2, 192(1)
  01cc20c  lwz 4, 196(1)
  01cc210  stfs 1, 68(31)
  01cc214  lfs 1, 196(1)
  01cc218  fabs 2, 2
  01cc21c  lwz 5, 200(1)
  01cc220  rlwinm 4, 4, 3, 29, 29
  01cc224  fabs 3, 1
  01cc228  lfs 1, 200(1)
  01cc22c  rlwimi 4, 5, 2, 30, 30
  01cc230  fsub 6, 1, 8
  01cc234  fsub 7, 1, 8
  01cc238  rlwimi 4, 3, 4, 28, 28
  01cc23c  ori 3, 28, 0
  01cc240  rlwimi 3, 4, 2, 26, 28
  01cc244  slwi 4, 4, 2
  01cc248  clrldi 3, 3, 32
  01cc24c  fsel 4, 6, 2, 4
  01cc250  lfsx 1, 28, 4
  01cc254  fsel 3, 7, 3, 5
  01cc258  lfs 2, 4(3)
  01cc25c  fcmpu 0, 4, 8
  01cc260  bt 1, 0x1cc268
  01cc264  b 0x1cc37c
  01cc268  fsubs 5, 3, 4
  01cc26c  fadds 3, 3, 4
  01cc270  addic 3, 1, 16
  01cc274  li 6, 2
  01cc278  addic 5, 3, 392
  01cc27c  addic 4, 3, 376
  01cc280  mtctr 6
  01cc284  fdivs 3, 5, 3
  01cc288  fmuls 4, 3, 3
  01cc28c  stfs 3, 404(1)
  01cc290  stfs 3, 396(1)
  01cc294  stfs 3, 400(1)
  01cc298  stfs 3, 392(1)
  01cc29c  lfs 6, 404(1)
  01cc2a0  lfs 7, 396(1)
  01cc2a4  lfs 9, 400(1)
  01cc2a8  fmuls 5, 4, 4
  01cc2ac  fmuls 7, 7, 4
  01cc2b0  fmuls 6, 6, 5
  01cc2b4  fmuls 3, 5, 5
  01cc2b8  fmuls 5, 9, 5
  01cc2bc  stfs 7, 396(1)
  01cc2c0  fmuls 4, 6, 4
  01cc2c4  stfs 5, 400(1)
  01cc2c8  stfs 4, 404(1)
  01cc2cc  lfs 4, 376(3)
  01cc2d0  fmuls 4, 4, 3
  01cc2d4  stfs 4, 392(3)
  01cc2d8  lfs 4, 4(4)
  01cc2dc  addic 4, 4, 8
  01cc2e0  fmuls 4, 4, 3
  01cc2e4  addic 3, 3, 8
  01cc2e8  stfs 4, 4(5)
  01cc2ec  addic 5, 5, 8
  01cc2f0  bdnz 0x1cc2cc
  01cc2f4  li 5, 4
  01cc2f8  ori 3, 1, 0
  01cc2fc  mtctr 5
  01cc300  lis 4, 115
  01cc304  addic 5, 3, 392
  01cc308  addic 4, 4, 22752
  01cc30c  ori 7, 5, 0
  01cc310  lfs 3, 392(3)
  01cc314  lfs 4, 0(4)
  01cc318  fmuls 3, 3, 4
  01cc31c  lfs 4, 4(4)
  01cc320  addic 4, 4, 8
  01cc324  stfs 3, 392(3)
  01cc328  lfs 3, 4(5)
  01cc32c  addic 3, 3, 8
  01cc330  fmuls 3, 3, 4
  01cc334  stfs 3, 4(5)
  01cc338  addic 5, 5, 8
  01cc33c  bdnz 0x1cc310
  01cc340  ori 3, 1, 0
  01cc344  mtctr 6
  01cc348  lfs 3, 392(3)
  01cc34c  lfs 4, 4(7)
  01cc350  fadds 3, 8, 3
  01cc354  lfs 5, 8(7)
  01cc358  addic 3, 3, 16
  01cc35c  lfs 8, 12(7)
  01cc360  addic 7, 7, 16
  01cc364  fadds 3, 3, 4
  01cc368  fadds 3, 3, 5
  01cc36c  fadds 8, 3, 8
  01cc370  bdnz 0x1cc348
  01cc374  fadds 8, 8, 29
  01cc378  fmadds 8, 8, 1, 2
  01cc37c  cmpwi 27, 1
  01cc380  stfs 8, 72(31)
  01cc384  bt 0, 0x1ccadc
  01cc388  cmpwi 26, 1
  01cc38c  bt 0, 0x1ccadc
  01cc390  lis 3, 29
  01cc394  sldi 4, 26, 4
  01cc398  addi 3, 3, -18980
  01cc39c  li 5, 0
  01cc3a0  addc 28, 29, 4
  01cc3a4  clrldi 28, 28, 32
  01cc3a8  lfs 28, 12(3)
  01cc3ac  stw 5, 124(1)
  01cc3b0  stw 5, 120(1)
  01cc3b4  stw 5, 116(1)
  01cc3b8  stw 5, 112(1)
  01cc3bc  lfs 1, 16(28)
  01cc3c0  lfs 2, 128(1)
  01cc3c4  lfs 4, 20(28)
  01cc3c8  lfs 3, 132(1)
  01cc3cc  fsubs 1, 1, 2
  01cc3d0  fsubs 4, 4, 3
  01cc3d4  lis 29, 115
  01cc3d8  addic 29, 29, 22784
  01cc3dc  fabs 6, 1
  01cc3e0  fabs 7, 4
  01cc3e4  stfs 1, 180(1)
  01cc3e8  stfs 4, 184(1)
  01cc3ec  fsubs 1, 6, 7
  01cc3f0  stfs 1, 188(1)
  01cc3f4  lwz 3, 180(1)
  01cc3f8  lfs 1, 180(1)
  01cc3fc  lwz 4, 184(1)
  01cc400  lfs 4, 184(1)
  01cc404  fabs 1, 1
  01cc408  rlwinm 4, 4, 3, 29, 29
  01cc40c  fabs 8, 4
  01cc410  lfs 4, 32(28)
  01cc414  lfs 5, 36(28)
  01cc418  lwz 5, 188(1)
  01cc41c  lfs 9, 188(1)
  01cc420  rlwimi 4, 5, 2, 30, 30
  01cc424  fsub 10, 9, 28
  01cc428  fsub 9, 9, 28
  01cc42c  rlwimi 4, 3, 4, 28, 28
  01cc430  ori 3, 29, 0
  01cc434  rlwimi 3, 4, 2, 26, 28
  01cc438  slwi 4, 4, 2
  01cc43c  clrldi 3, 3, 32
  01cc440  fsel 7, 10, 1, 7
  01cc444  lfsx 30, 29, 4
  01cc448  lfs 1, 4(3)
  01cc44c  fsel 6, 9, 8, 6
  01cc450  fcmpu 0, 7, 28
  01cc454  bt 1, 0x1cc460
  01cc458  fmr 30, 28
  01cc45c  b 0x1cc578
  01cc460  fsubs 8, 6, 7
  01cc464  fadds 6, 6, 7
  01cc468  addic 3, 1, 16
  01cc46c  li 7, 2
  01cc470  addic 4, 3, 344
  01cc474  addic 5, 3, 360
  01cc478  mtctr 7
  01cc47c  fdivs 6, 8, 6
  01cc480  fmuls 7, 6, 6
  01cc484  stfs 6, 372(1)
  01cc488  stfs 6, 364(1)
  01cc48c  stfs 6, 368(1)
  01cc490  stfs 6, 360(1)
  01cc494  lfs 9, 372(1)
  01cc498  lfs 10, 364(1)
  01cc49c  lfs 11, 368(1)
  01cc4a0  fmuls 8, 7, 7
  01cc4a4  fmuls 10, 10, 7
  01cc4a8  fmuls 9, 9, 8
  01cc4ac  fmuls 6, 8, 8
  01cc4b0  fmuls 8, 11, 8
  01cc4b4  stfs 10, 364(1)
  01cc4b8  fmuls 7, 9, 7
  01cc4bc  stfs 8, 368(1)
  01cc4c0  stfs 7, 372(1)
  01cc4c4  lfs 7, 344(3)
  01cc4c8  fmuls 7, 7, 6
  01cc4cc  stfs 7, 360(3)
  01cc4d0  lfs 7, 4(4)
  01cc4d4  addic 3, 3, 8
  01cc4d8  addic 4, 4, 8
  01cc4dc  fmuls 7, 7, 6
  01cc4e0  stfs 7, 4(5)
  01cc4e4  addic 5, 5, 8
  01cc4e8  bdnz 0x1cc4c4
  01cc4ec  li 5, 4
  01cc4f0  ori 3, 1, 0
  01cc4f4  mtctr 5
  01cc4f8  lis 4, 115
  01cc4fc  addic 5, 3, 360
  01cc500  addic 4, 4, 22752
  01cc504  ori 6, 5, 0
  01cc508  lfs 6, 360(3)
  01cc50c  lfs 7, 0(4)
  01cc510  fmuls 6, 6, 7
  01cc514  lfs 7, 4(4)
  01cc518  addic 4, 4, 8
  01cc51c  stfs 6, 360(3)
  01cc520  lfs 6, 4(5)
  01cc524  addic 3, 3, 8
  01cc528  fmuls 6, 6, 7
  01cc52c  stfs 6, 4(5)
  01cc530  addic 5, 5, 8
  01cc534  bdnz 0x1cc508
  01cc538  fmr 6, 28
  01cc53c  ori 3, 1, 0
  01cc540  mtctr 7
  01cc544  lfs 7, 360(3)
  01cc548  fadds 6, 6, 7
  01cc54c  addic 3, 3, 16
  01cc550  lfs 7, 4(6)
  01cc554  lfs 8, 8(6)
  01cc558  lfs 9, 12(6)
  01cc55c  addic 6, 6, 16
  01cc560  fadds 6, 6, 7
  01cc564  fadds 6, 6, 8
  01cc568  fadds 6, 6, 9
  01cc56c  bdnz 0x1cc544
  01cc570  fadds 6, 6, 29
  01cc574  fmadds 30, 6, 30, 1
  01cc578  fsubs 1, 4, 2
  01cc57c  fsubs 2, 5, 3
  01cc580  fabs 3, 1
  01cc584  fabs 4, 2
  01cc588  stfs 1, 168(1)
  01cc58c  stfs 2, 172(1)
  01cc590  fsubs 1, 3, 4
  01cc594  stfs 1, 176(1)
  01cc598  lwz 3, 168(1)
  01cc59c  lfs 1, 168(1)
  01cc5a0  lwz 4, 172(1)
  01cc5a4  lfs 2, 172(1)
  01cc5a8  lwz 5, 176(1)
  01cc5ac  rlwinm 4, 4, 3, 29, 29
  01cc5b0  fabs 5, 2
  01cc5b4  lfs 2, 176(1)
  01cc5b8  fabs 1, 1
  01cc5bc  rlwimi 4, 5, 2, 30, 30
  01cc5c0  fsub 6, 2, 28
  01cc5c4  fsub 7, 2, 28
  01cc5c8  rlwimi 4, 3, 4, 28, 28
  01cc5cc  ori 3, 29, 0
  01cc5d0  rlwimi 3, 4, 2, 26, 28
  01cc5d4  slwi 4, 4, 2
  01cc5d8  clrldi 3, 3, 32
  01cc5dc  fsel 4, 6, 1, 4
  01cc5e0  lfsx 2, 29, 4
  01cc5e4  fsel 3, 7, 5, 3
  01cc5e8  lfs 1, 4(3)
  01cc5ec  fcmpu 0, 4, 28
  01cc5f0  bt 1, 0x1cc5fc
  01cc5f4  fmr 1, 28
  01cc5f8  b 0x1cc714
  01cc5fc  fsubs 5, 3, 4
  01cc600  fadds 3, 3, 4
  01cc604  addic 3, 1, 16
  01cc608  li 6, 2
  01cc60c  addic 5, 3, 328
  01cc610  addic 4, 3, 312
  01cc614  mtctr 6
  01cc618  fdivs 3, 5, 3
  01cc61c  fmuls 4, 3, 3
  01cc620  stfs 3, 340(1)
  01cc624  stfs 3, 332(1)
  01cc628  stfs 3, 336(1)
  01cc62c  stfs 3, 328(1)
  01cc630  lfs 6, 340(1)
  01cc634  lfs 7, 332(1)
  01cc638  lfs 8, 336(1)
  01cc63c  fmuls 5, 4, 4
  01cc640  fmuls 7, 7, 4
  01cc644  fmuls 6, 6, 5
  01cc648  fmuls 3, 5, 5
  01cc64c  fmuls 5, 8, 5
  01cc650  stfs 7, 332(1)
  01cc654  fmuls 4, 6, 4
  01cc658  stfs 5, 336(1)
  01cc65c  stfs 4, 340(1)
  01cc660  lfs 4, 312(3)
  01cc664  fmuls 4, 4, 3
  01cc668  stfs 4, 328(3)
  01cc66c  lfs 4, 4(4)
  01cc670  addic 4, 4, 8
  01cc674  fmuls 4, 4, 3
  01cc678  addic 3, 3, 8
  01cc67c  stfs 4, 4(5)
  01cc680  addic 5, 5, 8
  01cc684  bdnz 0x1cc660
  01cc688  li 5, 4
  01cc68c  ori 3, 1, 0
  01cc690  mtctr 5
  01cc694  lis 4, 115
  01cc698  addic 5, 3, 328
  01cc69c  addic 4, 4, 22752
  01cc6a0  ori 7, 5, 0
  01cc6a4  lfs 3, 328(3)
  01cc6a8  lfs 4, 0(4)
  01cc6ac  fmuls 3, 3, 4
  01cc6b0  lfs 4, 4(4)
  01cc6b4  addic 4, 4, 8
  01cc6b8  stfs 3, 328(3)
  01cc6bc  lfs 3, 4(5)
  01cc6c0  addic 3, 3, 8
  01cc6c4  fmuls 3, 3, 4
  01cc6c8  stfs 3, 4(5)
  01cc6cc  addic 5, 5, 8
  01cc6d0  bdnz 0x1cc6a4
  01cc6d4  ori 3, 1, 0
  01cc6d8  fmr 3, 28
  01cc6dc  mtctr 6
  01cc6e0  lfs 4, 328(3)
  01cc6e4  fadds 3, 3, 4
  01cc6e8  lfs 4, 4(7)
  01cc6ec  addic 3, 3, 16
  01cc6f0  lfs 5, 8(7)
  01cc6f4  lfs 6, 12(7)
  01cc6f8  addic 7, 7, 16
  01cc6fc  fadds 3, 3, 4
  01cc700  fadds 3, 3, 5
  01cc704  fadds 3, 3, 6
  01cc708  bdnz 0x1cc6e0
  01cc70c  fadds 3, 3, 29
  01cc710  fmadds 1, 3, 2, 1
  01cc714  fmr 2, 30
  01cc718  bl 0x5025e0
  01cc71c  nop
  01cc720  fmuls 1, 31, 1
  01cc724  fmr 2, 30
  01cc728  bl 0x502578
  01cc72c  nop
  01cc730  stfs 1, 120(1)
  01cc734  lfs 3, 132(1)
  01cc738  lfs 1, 20(28)
  01cc73c  lfs 2, 128(1)
  01cc740  fsubs 1, 3, 1
  01cc744  lfs 4, 16(28)
  01cc748  fsubs 4, 2, 4
  01cc74c  lfs 5, 24(28)
  01cc750  fmuls 1, 1, 1
  01cc754  fmadds 1, 4, 4, 1
  01cc758  lfs 4, 136(1)
  01cc75c  fsubs 5, 5, 4
  01cc760  fsqrts 1, 1
  01cc764  stfs 5, 160(1)
  01cc768  fabs 8, 5
  01cc76c  fabs 7, 1
  01cc770  stfs 1, 156(1)
  01cc774  lwz 3, 160(1)
  01cc778  lfs 5, 160(1)
  01cc77c  fabs 10, 5
  01cc780  rlwinm 3, 3, 3, 29, 29
  01cc784  fsubs 1, 7, 8
  01cc788  stfs 1, 164(1)
  01cc78c  lwz 4, 156(1)
  01cc790  lfs 1, 156(1)
  01cc794  lfs 5, 32(28)
  01cc798  lfs 6, 36(28)
  01cc79c  fabs 1, 1
  01cc7a0  lfs 9, 40(28)
  01cc7a4  lwz 5, 164(1)
  01cc7a8  lfs 11, 164(1)
  01cc7ac  rlwimi 3, 5, 2, 30, 30
  01cc7b0  fsub 12, 11, 28
  01cc7b4  fsub 11, 11, 28
  01cc7b8  rlwimi 3, 4, 4, 28, 28
  01cc7bc  ori 4, 29, 0
  01cc7c0  rlwimi 4, 3, 2, 26, 28
  01cc7c4  slwi 3, 3, 2
  01cc7c8  clrldi 4, 4, 32
  01cc7cc  fsel 8, 12, 1, 8
  01cc7d0  lfsx 30, 29, 3
  01cc7d4  fsel 7, 11, 10, 7
  01cc7d8  lfs 1, 4(4)
  01cc7dc  fcmpu 0, 8, 28
  01cc7e0  bt 1, 0x1cc7ec
  01cc7e4  fmr 30, 28
  01cc7e8  b 0x1cc904
  01cc7ec  fsubs 10, 7, 8
  01cc7f0  fadds 7, 7, 8
  01cc7f4  addic 3, 1, 16
  01cc7f8  li 6, 2
  01cc7fc  addic 5, 3, 296
  01cc800  addic 4, 3, 280
  01cc804  mtctr 6
  01cc808  fdivs 7, 10, 7
  01cc80c  fmuls 8, 7, 7
  01cc810  stfs 7, 308(1)
  01cc814  stfs 7, 300(1)
  01cc818  stfs 7, 304(1)
  01cc81c  stfs 7, 296(1)
  01cc820  lfs 11, 308(1)
  01cc824  lfs 12, 300(1)
  01cc828  lfs 13, 304(1)
  01cc82c  fmuls 10, 8, 8
  01cc830  fmuls 12, 12, 8
  01cc834  fmuls 11, 11, 10
  01cc838  fmuls 7, 10, 10
  01cc83c  fmuls 10, 13, 10
  01cc840  stfs 12, 300(1)
  01cc844  fmuls 8, 11, 8
  01cc848  stfs 10, 304(1)
  01cc84c  stfs 8, 308(1)
  01cc850  lfs 8, 280(3)
  01cc854  fmuls 8, 8, 7
  01cc858  stfs 8, 296(3)
  01cc85c  lfs 8, 4(4)
  01cc860  addic 4, 4, 8
  01cc864  fmuls 8, 8, 7
  01cc868  addic 3, 3, 8
  01cc86c  stfs 8, 4(5)
  01cc870  addic 5, 5, 8
  01cc874  bdnz 0x1cc850
  01cc878  li 5, 4
  01cc87c  ori 3, 1, 0
  01cc880  mtctr 5
  01cc884  lis 4, 115
  01cc888  addic 5, 3, 296
  01cc88c  addic 4, 4, 22752
  01cc890  ori 7, 5, 0
  01cc894  lfs 7, 296(3)
  01cc898  lfs 8, 0(4)
  01cc89c  fmuls 7, 7, 8
  01cc8a0  lfs 8, 4(4)
  01cc8a4  addic 4, 4, 8
  01cc8a8  stfs 7, 296(3)
  01cc8ac  lfs 7, 4(5)
  01cc8b0  addic 3, 3, 8
  01cc8b4  fmuls 7, 7, 8
  01cc8b8  stfs 7, 4(5)
  01cc8bc  addic 5, 5, 8
  01cc8c0  bdnz 0x1cc894
  01cc8c4  ori 3, 1, 0
  01cc8c8  fmr 7, 28
  01cc8cc  mtctr 6
  01cc8d0  lfs 8, 296(3)
  01cc8d4  fadds 7, 7, 8
  01cc8d8  lfs 8, 4(7)
  01cc8dc  addic 3, 3, 16
  01cc8e0  lfs 10, 8(7)
  01cc8e4  lfs 11, 12(7)
  01cc8e8  addic 7, 7, 16
  01cc8ec  fadds 7, 7, 8
  01cc8f0  fadds 7, 7, 10
  01cc8f4  fadds 7, 7, 11
  01cc8f8  bdnz 0x1cc8d0
  01cc8fc  fadds 7, 7, 29
  01cc900  fmadds 30, 7, 30, 1
  01cc904  fsubs 1, 3, 6
  01cc908  fsubs 2, 2, 5
  01cc90c  fmuls 1, 1, 1
  01cc910  fmadds 1, 2, 2, 1
  01cc914  fsubs 2, 9, 4
  01cc918  fsqrts 1, 1
  01cc91c  stfs 2, 148(1)
  01cc920  fabs 4, 2
  01cc924  fabs 3, 1
  01cc928  stfs 1, 144(1)
  01cc92c  lwz 3, 148(1)
  01cc930  rlwinm 3, 3, 3, 29, 29
  01cc934  fsubs 1, 3, 4
  01cc938  stfs 1, 152(1)
  01cc93c  lwz 4, 144(1)
  01cc940  lfs 1, 144(1)
  01cc944  lfs 2, 148(1)
  01cc948  lwz 5, 152(1)
  01cc94c  fabs 5, 2
  01cc950  lfs 2, 152(1)
  01cc954  fabs 1, 1
  01cc958  rlwimi 3, 5, 2, 30, 30
  01cc95c  fsub 6, 2, 28
  01cc960  fsub 7, 2, 28
  01cc964  rlwimi 3, 4, 4, 28, 28
  01cc968  ori 4, 29, 0
  01cc96c  rlwimi 4, 3, 2, 26, 28
  01cc970  slwi 3, 3, 2
  01cc974  clrldi 4, 4, 32
  01cc978  fsel 4, 6, 1, 4
  01cc97c  lfsx 2, 29, 3
  01cc980  fsel 3, 7, 5, 3
  01cc984  lfs 1, 4(4)
  01cc988  fcmpu 0, 4, 28
  01cc98c  bt 1, 0x1cc994
  01cc990  b 0x1ccaa8
  01cc994  fsubs 5, 3, 4
  01cc998  fadds 3, 3, 4
  01cc99c  addic 3, 1, 16
  01cc9a0  li 6, 2
  01cc9a4  addic 5, 3, 264
  01cc9a8  addic 4, 3, 248
  01cc9ac  mtctr 6
  01cc9b0  fdivs 3, 5, 3
  01cc9b4  fmuls 4, 3, 3
  01cc9b8  stfs 3, 276(1)
  01cc9bc  stfs 3, 268(1)
  01cc9c0  stfs 3, 272(1)
  01cc9c4  stfs 3, 264(1)
  01cc9c8  lfs 6, 276(1)
  01cc9cc  lfs 7, 268(1)
  01cc9d0  lfs 8, 272(1)
  01cc9d4  fmuls 5, 4, 4
  01cc9d8  fmuls 7, 7, 4
  01cc9dc  fmuls 6, 6, 5
  01cc9e0  fmuls 3, 5, 5
  01cc9e4  fmuls 5, 8, 5
  01cc9e8  stfs 7, 268(1)
  01cc9ec  fmuls 4, 6, 4
  01cc9f0  stfs 5, 272(1)
  01cc9f4  stfs 4, 276(1)
  01cc9f8  lfs 4, 248(3)
  01cc9fc  fmuls 4, 4, 3
  01cca00  stfs 4, 264(3)
  01cca04  lfs 4, 4(4)
  01cca08  addic 4, 4, 8
  01cca0c  fmuls 4, 4, 3
  01cca10  addic 3, 3, 8
  01cca14  stfs 4, 4(5)
  01cca18  addic 5, 5, 8
  01cca1c  bdnz 0x1cc9f8
  01cca20  li 5, 4
  01cca24  ori 3, 1, 0
  01cca28  mtctr 5
  01cca2c  lis 4, 115
  01cca30  addic 5, 3, 264
  01cca34  addic 4, 4, 22752
  01cca38  ori 7, 5, 0
  01cca3c  lfs 3, 264(3)
  01cca40  lfs 4, 0(4)
  01cca44  fmuls 3, 3, 4
  01cca48  lfs 4, 4(4)
  01cca4c  addic 4, 4, 8
  01cca50  stfs 3, 264(3)
  01cca54  lfs 3, 4(5)
  01cca58  addic 3, 3, 8
  01cca5c  fmuls 3, 3, 4
  01cca60  stfs 3, 4(5)
  01cca64  addic 5, 5, 8
  01cca68  bdnz 0x1cca3c
  01cca6c  ori 3, 1, 0
  01cca70  mtctr 6
  01cca74  lfs 3, 264(3)
  01cca78  lfs 4, 4(7)
  01cca7c  fadds 3, 28, 3
  01cca80  lfs 5, 8(7)
  01cca84  addic 3, 3, 16
  01cca88  lfs 28, 12(7)
  01cca8c  addic 7, 7, 16
  01cca90  fadds 3, 3, 4
  01cca94  fadds 3, 3, 5
  01cca98  fadds 28, 3, 28
  01cca9c  bdnz 0x1cca74
  01ccaa0  fadds 28, 28, 29
  01ccaa4  fmadds 28, 28, 2, 1
  01ccaa8  fneg 30, 30
  01ccaac  fneg 1, 28
  01ccab0  fmr 2, 30
  01ccab4  bl 0x5025e0
  01ccab8  nop
  01ccabc  fmuls 1, 31, 1
  01ccac0  fmr 2, 30
  01ccac4  bl 0x502578
  01ccac8  nop
  01ccacc  addic 3, 1, 112
  01ccad0  stfs 1, 116(1)
  01ccad4  bl 0x47c08
  01ccad8  nop
  01ccadc  lfs 1, 196(30)
  01ccae0  lfs 2, 200(30)
  01ccae4  lfs 3, 244(30)
  01ccae8  fsubs 2, 1, 2
  01ccaec  lwz 3, 36(31)
  01ccaf0  lfs 4, 36(3)
  01ccaf4  lis 3, 16204
  01ccaf8  fnmsubs 1, 2, 3, 1
  01ccafc  ori 3, 3, 52429
  01ccb00  fmuls 1, 4, 1
  01ccb04  stfs 1, 44(31)
  01ccb08  lwz 4, 244(30)
  01ccb0c  srawi 5, 4, 31
  01ccb10  srwi 6, 5, 1
  01ccb14  xor 4, 6, 4
  01ccb18  subc 4, 4, 5
  01ccb1c  cmpw 4, 3
  01ccb20  bf 1, 0x1ccb64
  01ccb24  lis 3, 29
  01ccb28  lis 5, 114
  01ccb2c  addi 4, 3, -18980
  01ccb30  lis 6, 114
  01ccb34  addic 3, 30, 176
  01ccb38  lfs 3, 48(4)
  01ccb3c  lfs 2, -3048(5)
  01ccb40  lfs 5, 52(4)
  01ccb44  addic 5, 30, 180
  01ccb48  fmuls 2, 2, 3
  01ccb4c  lfs 1, 44(4)
  01ccb50  lfs 4, -3052(6)
  01ccb54  fmuls 4, 4, 5
  01ccb58  fmr 3, 2
  01ccb5c  bl 0x10a2e0
  01ccb60  nop
  01ccb64  lfs 1, 28(24)
  01ccb68  bl 0x502758
  01ccb6c  nop
  01ccb70  ori 29, 3, 0
  01ccb74  cmpwi 27, 0
  01ccb78  li 3, -1
  01ccb7c  bt 2, 0x1ccb8c
  01ccb80  lfs 1, 12(24)
  01ccb84  bl 0x502758
  01ccb88  nop
  01ccb8c  cmpwi 29, -1
  01ccb90  cmpwi 1, 3, -1
  01ccb94  bt 1, 0x1ccb9c
  01ccb98  bf 5, 0x1ccc40
  01ccb9c  lis 4, -16512
  01ccba0  cmpwi 1, 3, 8
  01ccba4  cmpwi 29, 8
  01ccba8  crnand 2, 0, 4
  01ccbac  stw 4, 28(24)
  01ccbb0  stw 4, 12(24)
  01ccbb4  bt 2, 0x1ccc14
  01ccbb8  li 3, 0
  01ccbbc  li 4, 0
  01ccbc0  ori 5, 31, 0
  01ccbc4  bl 0x15d380
  01ccbc8  nop
  01ccbcc  sldi 3, 29, 2
  01ccbd0  lis 4, 165
  01ccbd4  addc 3, 30, 3
  01ccbd8  lis 5, 29
  01ccbdc  clrldi 3, 3, 32
  01ccbe0  addi 5, 5, -18980
  01ccbe4  lwz 4, 7128(4)
  01ccbe8  lwz 6, 208(3)
  01ccbec  lfs 1, 56(5)
  01ccbf0  slwi 7, 6, 7
  01ccbf4  ori 3, 31, 0
  01ccbf8  addc 4, 4, 7
  01ccbfc  li 6, 6
  01ccc00  addic 7, 4, 48
  01ccc04  clrldi 5, 4, 32
  01ccc08  clrldi 4, 7, 32
  01ccc0c  bl 0x1ca968
  01ccc10  b 0x1ccc40
  01ccc14  cmpwi 29, 10
  01ccc18  cmpwi 1, 3, 10
  01ccc1c  bt 2, 0x1ccc24
  01ccc20  bf 6, 0x1ccc40
  01ccc24  li 3, 1
  01ccc28  li 4, 0
  01ccc2c  ori 5, 31, 0
  01ccc30  bl 0x15d380
  01ccc34  nop
  01ccc38  ori 3, 31, 0
  01ccc3c  bl 0x1caf98
  01ccc40  lis 3, 16256
  01ccc44  lwz 6, 244(30)
  01ccc48  li 4, 1
  01ccc4c  subc 3, 3, 6
  01ccc50  li 5, 0
  01ccc54  cntlzw 3, 3
  01ccc58  subc 4, 4, 5
  01ccc5c  sldi 3, 3, 58
  01ccc60  sradi 3, 3, 63
  01ccc64  and 3, 3, 4
  01ccc68  addc 3, 5, 3
  01ccc6c  ld 0, 736(1)
  01ccc70  mtlr 0
  01ccc74  lfd 28, 688(1)
  01ccc78  lfd 29, 696(1)
  01ccc7c  lfd 30, 704(1)
  01ccc80  lfd 31, 712(1)
  01ccc84  ld 21, 600(1)
  01ccc88  ld 22, 608(1)
  01ccc8c  ld 23, 616(1)
  01ccc90  ld 24, 624(1)
  01ccc94  ld 25, 632(1)
  01ccc98  ld 26, 640(1)
  01ccc9c  ld 27, 648(1)
  01ccca0  ld 28, 656(1)
  01ccca4  ld 29, 664(1)
  01ccca8  ld 30, 672(1)
  01cccac  ld 31, 680(1)
  01cccb0  addi 1, 1, 720
  01cccb4  blr

M1109_001cccb8:   # 0x1cccb8, 0x1b0 bytes
  01cccb8  stdu 1, -128(1)
  01cccbc  mflr 0
  01cccc0  std 0, 144(1)
  01cccc4  std 31, 120(1)
  01cccc8  lwz 31, 120(3)
  01ccccc  lwz 3, 188(31)
  01cccd0  cmpwi 3, 0
  01cccd4  cmpwi 1, 3, -1
  01cccd8  cmpwi 6, 3, 1
  01cccdc  cmpwi 7, 3, 2
  01ccce0  bt 1, 0x1cccec
  01ccce4  bf 5, 0x1ccd80
  01ccce8  b 0x1cccf8
  01cccec  bf 25, 0x1ccd6c
  01cccf0  bf 29, 0x1ccd78
  01cccf4  b 0x1ccd80
  01cccf8  lis 3, 151
  01cccfc  lis 4, 161
  01ccd00  lwz 6, 248(31)
  01ccd04  li 5, 0
  01ccd08  addic 4, 4, -13692
  01ccd0c  lwz 3, -25488(3)
  01ccd10  addc 6, 6, 4
  01ccd14  slwi 3, 3, 4
  01ccd18  clrldi 6, 6, 32
  01ccd1c  extsw 3, 3
  01ccd20  lbzx 6, 6, 3
  01ccd24  cmpwi 6, 255
  01ccd28  bf 2, 0x1ccd64
  01ccd2c  lwz 6, 252(31)
  01ccd30  li 5, 255
  01ccd34  li 7, -1
  01ccd38  addc 4, 6, 4
  01ccd3c  li 6, 3
  01ccd40  clrldi 4, 4, 32
  01ccd44  lbzx 3, 4, 3
  01ccd48  subc 4, 6, 7
  01ccd4c  subc 3, 5, 3
  01ccd50  cntlzw 3, 3
  01ccd54  sldi 3, 3, 58
  01ccd58  sradi 3, 3, 63
  01ccd5c  and 5, 3, 4
  01ccd60  addc 5, 7, 5
  01ccd64  stw 5, 156(31)
  01ccd68  b 0x1ccd80
  01ccd6c  li 3, 1
  01ccd70  stw 3, 156(31)
  01ccd74  b 0x1ccd80
  01ccd78  li 3, 4
  01ccd7c  stw 3, 156(31)
  01ccd80  lis 3, 161
  01ccd84  addic 3, 3, 12
  01ccd88  lhz 3, 664(3)
  01ccd8c  cmpwi 3, 0
  01ccd90  bf 2, 0x1ccddc
  01ccd94  lwz 3, 156(31)
  01ccd98  cmpwi 3, 0
  01ccd9c  bf 2, 0x1ccddc
  01ccda0  lis 3, 114
  01ccda4  lbz 3, -1191(3)
  01ccda8  cmpwi 3, 0
  01ccdac  bf 2, 0x1ccdc0
  01ccdb0  lis 3, 114
  01ccdb4  lbz 3, -1192(3)
  01ccdb8  cmpwi 3, 0
  01ccdbc  bt 2, 0x1ccddc
  01ccdc0  li 3, 6010
  01ccdc4  li 4, 83
  01ccdc8  bl 0x7b310
  01ccdcc  nop
  01ccdd0  li 3, -1
  01ccdd4  stw 3, 156(31)
  01ccdd8  b 0x1cce54
  01ccddc  lwz 31, 156(31)
  01ccde0  cmpwi 31, 4
  01ccde4  cmpwi 1, 31, 3
  01ccde8  cmpwi 6, 31, 2
  01ccdec  cmpwi 7, 31, 1
  01ccdf0  bt 2, 0x1cce1c
  01ccdf4  bt 6, 0x1cce44
  01ccdf8  bt 26, 0x1cce30
  01ccdfc  bt 30, 0x1cce1c
  01cce00  cmpwi 31, 0
  01cce04  bf 2, 0x1cce54
  01cce08  li 3, 10
  01cce0c  li 4, 6018
  01cce10  bl 0x11aeec
  01cce14  nop
  01cce18  b 0x1cce54
  01cce1c  li 3, 10
  01cce20  li 4, 6021
  01cce24  bl 0x11aeec
  01cce28  nop
  01cce2c  b 0x1cce54
  01cce30  li 3, 10
  01cce34  li 4, 6022
  01cce38  bl 0x11aeec
  01cce3c  nop
  01cce40  b 0x1cce54
  01cce44  li 3, 10
  01cce48  li 4, 6020
  01cce4c  bl 0x11aeec
  01cce50  nop
  01cce54  ld 0, 144(1)
  01cce58  mtlr 0
  01cce5c  ld 31, 120(1)
  01cce60  addi 1, 1, 128
  01cce64  blr

M1109_001cce68:   # 0x1cce68, 0x74 bytes
  01cce68  stdu 1, -128(1)
  01cce6c  mflr 0
  01cce70  std 0, 144(1)
  01cce74  lwz 3, 120(3)
  01cce78  lis 4, 165
  01cce7c  addic 4, 4, -28284
  01cce80  lwz 3, 204(3)
  01cce84  slwi 3, 3, 2
  01cce88  std 31, 120(1)
  01cce8c  extsw 3, 3
  01cce90  lwzx 31, 4, 3
  01cce94  lis 3, 164
  01cce98  lhz 4, 0(31)
  01cce9c  rlwinm 4, 4, 8, 9, 23
  01ccea0  lwz 3, -28512(3)
  01ccea4  addc 3, 3, 4
  01ccea8  clrldi 3, 3, 32
  01cceac  bl 0xefb38
  01cceb0  nop
  01cceb4  lhz 3, 0(31)
  01cceb8  addic 31, 31, 2
  01ccebc  extsh 3, 3
  01ccec0  cmpwi 3, 0
  01ccec4  bf 0, 0x1cce94
  01ccec8  ld 0, 144(1)
  01ccecc  mtlr 0
  01cced0  ld 31, 120(1)
  01cced4  addi 1, 1, 128
  01cced8  blr

UpdateMoby_1109:   # 0x1ccf10, 0x11e0 bytes
  01ccf10  stdu 1, -448(1)
  01ccf14  mflr 0
  01ccf18  std 0, 464(1)
  01ccf1c  stfd 25, 392(1)
  01ccf20  stfd 26, 400(1)
  01ccf24  stfd 27, 408(1)
  01ccf28  stfd 28, 416(1)
  01ccf2c  stfd 29, 424(1)
  01ccf30  stfd 30, 432(1)
  01ccf34  stfd 31, 440(1)
  01ccf38  lfs 1, 64(3)
  01ccf3c  lfs 2, 68(3)
  01ccf40  lis 4, 118
  01ccf44  stfs 1, 112(1)
  01ccf48  lis 5, 239
  01ccf4c  std 31, 384(1)
  01ccf50  lfs 1, 72(3)
  01ccf54  ori 31, 3, 0
  01ccf58  lwz 6, 36(3)
  01ccf5c  stfs 2, 116(1)
  01ccf60  lfs 2, 76(3)
  01ccf64  stfs 1, 120(1)
  01ccf68  stfs 2, 124(1)
  01ccf6c  lfs 1, 36(6)
  01ccf70  std 29, 368(1)
  01ccf74  lfs 2, 17020(4)
  01ccf78  lwz 29, 120(3)
  01ccf7c  fmuls 1, 1, 2
  01ccf80  lfs 31, 16(3)
  01ccf84  lfs 30, 20(3)
  01ccf88  lfs 29, 24(3)
  01ccf8c  lwz 4, 6764(5)
  01ccf90  cmpwi 4, 0
  01ccf94  std 30, 376(1)
  01ccf98  std 28, 360(1)
  01ccf9c  std 27, 352(1)
  01ccfa0  stfs 1, 44(3)
  01ccfa4  bt 2, 0x1cd04c
  01ccfa8  lis 3, 118
  01ccfac  lis 4, 239
  01ccfb0  li 5, 0
  01ccfb4  lwz 3, 17028(3)
  01ccfb8  extsw 3, 3
  01ccfbc  std 3, 328(1)
  01ccfc0  lis 3, 29
  01ccfc4  stw 5, 6764(4)
  01ccfc8  lis 4, 114
  01ccfcc  addi 3, 3, -12580
  01ccfd0  lis 5, 118
  01ccfd4  lfs 1, 0(3)
  01ccfd8  lfs 2, -3056(4)
  01ccfdc  lfd 3, 328(1)
  01ccfe0  fcfid 3, 3
  01ccfe4  lis 3, 151
  01ccfe8  lis 4, 118
  01ccfec  addic 3, 3, -25376
  01ccff0  lfs 4, 208(3)
  01ccff4  lfs 5, 216(3)
  01ccff8  frsp 3, 3
  01ccffc  stfs 4, 48(1)
  01cd000  stfs 5, 56(1)
  01cd004  lwz 6, 17032(4)
  01cd008  lwz 7, 17036(5)
  01cd00c  lfs 4, 212(3)
  01cd010  extsw 6, 6
  01cd014  stfs 4, 52(1)
  01cd018  extsw 7, 7
  01cd01c  fadds 1, 3, 1
  01cd020  lfs 3, 220(3)
  01cd024  ld 3, 48(1)
  01cd028  stfs 3, 60(1)
  01cd02c  ld 4, 56(1)
  01cd030  fmuls 1, 2, 1
  01cd034  fctiwz 1, 1
  01cd038  stfd 1, 328(1)
  01cd03c  lwz 5, 332(1)
  01cd040  extsw 5, 5
  01cd044  bl 0x2d1440
  01cd048  nop
  01cd04c  lbz 3, 32(31)
  01cd050  cmpwi 3, 4
  01cd054  cmpwi 1, 3, 1
  01cd058  cmpwi 6, 3, -1
  01cd05c  cmpwi 7, 3, 0
  01cd060  bt 1, 0x1cd088
  01cd064  bt 5, 0x1cd074
  01cd068  bf 25, 0x1ce06c
  01cd06c  bf 29, 0x1cd0b8
  01cd070  b 0x1cd1b8
  01cd074  cmpwi 3, 2
  01cd078  bf 1, 0x1cdeec
  01cd07c  cmpwi 3, 3
  01cd080  bf 1, 0x1cdb10
  01cd084  b 0x1cdf4c
  01cd088  cmpwi 3, 7
  01cd08c  bt 1, 0x1cd0a4
  01cd090  cmpwi 3, 5
  01cd094  bf 1, 0x1ce06c
  01cd098  cmpwi 3, 6
  01cd09c  bf 1, 0x1cddb8
  01cd0a0  b 0x1cdfa0
  01cd0a4  cmpwi 3, 8
  01cd0a8  bf 1, 0x1ce048
  01cd0ac  cmpwi 3, 9
  01cd0b0  bf 1, 0x1ce010
  01cd0b4  b 0x1ce06c
  01cd0b8  lis 3, 162
  01cd0bc  li 5, 0
  01cd0c0  lis 4, 151
  01cd0c4  lis 6, 161
  01cd0c8  stw 5, 2080(3)
  01cd0cc  addic 6, 6, -13692
  01cd0d0  lwz 3, 248(29)
  01cd0d4  lwz 4, -25488(4)
  01cd0d8  addc 3, 3, 6
  01cd0dc  slwi 4, 4, 4
  01cd0e0  clrldi 3, 3, 32
  01cd0e4  extsw 4, 4
  01cd0e8  lbzx 3, 3, 4
  01cd0ec  cmpwi 3, 255
  01cd0f0  bf 2, 0x1cd148
  01cd0f4  lwz 4, 120(31)
  01cd0f8  lis 3, 165
  01cd0fc  addic 3, 3, -28284
  01cd100  lwz 4, 204(4)
  01cd104  slwi 4, 4, 2
  01cd108  extsw 4, 4
  01cd10c  lwzx 30, 3, 4
  01cd110  lis 3, 164
  01cd114  lhz 4, 0(30)
  01cd118  rlwinm 4, 4, 8, 9, 23
  01cd11c  lwz 3, -28512(3)
  01cd120  addc 3, 3, 4
  01cd124  clrldi 3, 3, 32
  01cd128  bl 0xefb38
  01cd12c  nop
  01cd130  lhz 3, 0(30)
  01cd134  addic 30, 30, 2
  01cd138  extsh 3, 3
  01cd13c  cmpwi 3, 0
  01cd140  bf 0, 0x1cd110
  01cd144  b 0x1cd158
  01cd148  lis 3, 151
  01cd14c  li 4, 0
  01cd150  addic 3, 3, -16400
  01cd154  stb 4, 36(3)
  01cd158  lis 4, 151
  01cd15c  li 3, 255
  01cd160  li 5, 128
  01cd164  addic 4, 4, -25376
  01cd168  stb 3, 48(31)
  01cd16c  sth 5, 50(31)
  01cd170  li 3, 1
  01cd174  lwz 4, 8320(4)
  01cd178  lbz 5, 83(31)
  01cd17c  cmpwi 5, 2
  01cd180  ld 4, 56(4)
  01cd184  stb 3, 32(31)
  01cd188  std 4, 56(31)
  01cd18c  bt 2, 0x1cd1a8
  01cd190  ori 3, 31, 0
  01cd194  li 4, 2
  01cd198  li 5, 0
  01cd19c  li 6, 0
  01cd1a0  bl 0xfddc0
  01cd1a4  nop
  01cd1a8  li 3, 0
  01cd1ac  stw 3, 188(29)
  01cd1b0  stw 3, 192(29)
  01cd1b4  b 0x1ce06c
  01cd1b8  lis 3, 114
  01cd1bc  li 30, 0
  01cd1c0  lbz 3, -1191(3)
  01cd1c4  cmpwi 3, 0
  01cd1c8  bf 2, 0x1cd1dc
  01cd1cc  lis 3, 114
  01cd1d0  lbz 3, -1192(3)
  01cd1d4  cmpwi 3, 0
  01cd1d8  bt 2, 0x1cd200
  01cd1dc  lis 3, 114
  01cd1e0  lwz 3, 2180(3)
  01cd1e4  cmpwi 3, 0
  01cd1e8  bf 2, 0x1cd220
  01cd1ec  lis 3, 114
  01cd1f0  addic 3, 3, 2180
  01cd1f4  lwz 3, 36(3)
  01cd1f8  cmpwi 3, -1
  01cd1fc  bf 2, 0x1cd220
  01cd200  lis 3, 151
  01cd204  addic 3, 3, -25376
  01cd208  lwz 4, 764(3)
  01cd20c  cmpw 4, 31
  01cd210  bf 2, 0x1cd220
  01cd214  lhz 3, 782(3)
  01cd218  cmpwi 3, 0
  01cd21c  bt 2, 0x1cd230
  01cd220  lis 3, 239
  01cd224  lwz 3, 6760(3)
  01cd228  cmpwi 3, 0
  01cd22c  bt 2, 0x1cd38c
  01cd230  ori 3, 31, 0
  01cd234  bl 0x1cccb8
  01cd238  lis 3, 239
  01cd23c  lis 4, 118
  01cd240  lwz 3, 6760(3)
  01cd244  lfs 1, 17020(4)
  01cd248  cmpwi 3, 0
  01cd24c  bf 2, 0x1cd284
  01cd250  lis 4, 150
  01cd254  addic 4, 4, 19008
  01cd258  lwz 4, 164(4)
  01cd25c  rlwinm 4, 4, 0, 27, 27
  01cd260  cmpwi 4, 0
  01cd264  bt 2, 0x1cd5a4
  01cd268  lis 4, 161
  01cd26c  lwz 4, 24360(4)
  01cd270  cmpwi 4, 10
  01cd274  bf 2, 0x1cd5a4
  01cd278  lwz 4, 156(29)
  01cd27c  cmpwi 4, -1
  01cd280  bf 1, 0x1cd5a4
  01cd284  cmpwi 3, 0
  01cd288  li 4, 1
  01cd28c  lis 3, 162
  01cd290  stw 4, 272(29)
  01cd294  stw 30, 2080(3)
  01cd298  bt 2, 0x1cd2ac
  01cd29c  li 3, 2
  01cd2a0  lis 4, 239
  01cd2a4  stw 3, 156(29)
  01cd2a8  stw 30, 6760(4)
  01cd2ac  lwz 3, 156(29)
  01cd2b0  cmpwi 3, 4
  01cd2b4  cmpwi 1, 3, 3
  01cd2b8  cmpwi 6, 3, 2
  01cd2bc  cmpwi 7, 3, 1
  01cd2c0  bt 2, 0x1cd374
  01cd2c4  bt 6, 0x1cd358
  01cd2c8  bt 26, 0x1cd338
  01cd2cc  bt 30, 0x1cd308
  01cd2d0  cmpwi 3, 0
  01cd2d4  bf 2, 0x1cd5a4
  01cd2d8  lis 5, 118
  01cd2dc  li 6, 1
  01cd2e0  stfs 1, 196(29)
  01cd2e4  stw 30, 192(29)
  01cd2e8  li 3, 4
  01cd2ec  li 4, 8
  01cd2f0  stw 6, 188(29)
  01cd2f4  lfs 1, 17016(5)
  01cd2f8  stfs 1, 200(29)
  01cd2fc  bl 0x11ccc8
  01cd300  nop
  01cd304  b 0x1cd5a4
  01cd308  lis 5, 118
  01cd30c  li 6, 1
  01cd310  li 3, 0
  01cd314  li 4, 10
  01cd318  stw 6, 192(29)
  01cd31c  lfs 2, 17016(5)
  01cd320  stw 30, 188(29)
  01cd324  stfs 2, 196(29)
  01cd328  stfs 1, 200(29)
  01cd32c  bl 0x11ccc8
  01cd330  nop
  01cd334  b 0x1cd5a4
  01cd338  lis 3, 118
  01cd33c  li 4, 2
  01cd340  stw 4, 192(29)
  01cd344  lfs 2, 17016(3)
  01cd348  stw 30, 188(29)
  01cd34c  stfs 2, 196(29)
  01cd350  stfs 1, 200(29)
  01cd354  b 0x1cd5a4
  01cd358  li 3, 3
  01cd35c  li 4, 2
  01cd360  stw 3, 192(29)
  01cd364  stw 4, 188(29)
  01cd368  stfs 1, 196(29)
  01cd36c  stfs 1, 200(29)
  01cd370  b 0x1cd5a4
  01cd374  li 3, 4
  01cd378  stw 3, 192(29)
  01cd37c  stw 30, 188(29)
  01cd380  stfs 1, 196(29)
  01cd384  stfs 1, 200(29)
  01cd388  b 0x1cd5a4
  01cd38c  lwz 3, 272(29)
  01cd390  cmpwi 3, 0
  01cd394  bf 2, 0x1cd5a4
  01cd398  lwz 3, 188(29)
  01cd39c  cmpwi 3, 0
  01cd3a0  bf 2, 0x1cd440
  01cd3a4  lis 3, 151
  01cd3a8  lwz 4, 256(29)
  01cd3ac  addic 3, 3, -25376
  01cd3b0  extsw 4, 4
  01cd3b4  addic 3, 3, 128
  01cd3b8  bl 0x110b70
  01cd3bc  nop
  01cd3c0  cmpwi 3, 0
  01cd3c4  bt 2, 0x1cd440
  01cd3c8  lis 3, 165
  01cd3cc  lwz 4, 168(29)
  01cd3d0  slwi 5, 4, 7
  01cd3d4  slwi 4, 4, 7
  01cd3d8  lwz 3, 7128(3)
  01cd3dc  addc 5, 3, 5
  01cd3e0  addc 3, 3, 4
  01cd3e4  clrldi 5, 5, 32
  01cd3e8  clrldi 3, 3, 32
  01cd3ec  li 4, 2
  01cd3f0  lfs 1, 48(5)
  01cd3f4  stfs 1, 16(31)
  01cd3f8  lfs 1, 52(5)
  01cd3fc  stfs 1, 20(31)
  01cd400  lfs 1, 56(5)
  01cd404  stfs 1, 24(31)
  01cd408  lfs 1, 60(5)
  01cd40c  lis 5, 162
  01cd410  stfs 1, 28(31)
  01cd414  lfs 1, 112(3)
  01cd418  stfs 1, 64(31)
  01cd41c  lfs 1, 116(3)
  01cd420  stfs 1, 68(31)
  01cd424  lfs 1, 120(3)
  01cd428  stfs 1, 72(31)
  01cd42c  lfs 1, 124(3)
  01cd430  stw 4, 188(29)
  01cd434  stfs 1, 76(31)
  01cd438  stw 30, 2080(5)
  01cd43c  b 0x1cd5a4
  01cd440  lwz 3, 188(29)
  01cd444  cmpwi 3, 2
  01cd448  bf 2, 0x1cd4e4
  01cd44c  lis 3, 151
  01cd450  lwz 4, 260(29)
  01cd454  addic 3, 3, -25376
  01cd458  extsw 4, 4
  01cd45c  addic 3, 3, 128
  01cd460  bl 0x110b70
  01cd464  nop
  01cd468  cmpwi 3, 0
  01cd46c  bt 2, 0x1cd4e4
  01cd470  lis 3, 165
  01cd474  lwz 4, 160(29)
  01cd478  slwi 5, 4, 7
  01cd47c  slwi 4, 4, 7
  01cd480  lwz 3, 7128(3)
  01cd484  addc 5, 3, 5
  01cd488  addc 3, 3, 4
  01cd48c  clrldi 5, 5, 32
  01cd490  clrldi 3, 3, 32
  01cd494  lis 4, 162
  01cd498  lfs 1, 48(5)
  01cd49c  stfs 1, 16(31)
  01cd4a0  lfs 1, 52(5)
  01cd4a4  stfs 1, 20(31)
  01cd4a8  lfs 1, 56(5)
  01cd4ac  stfs 1, 24(31)
  01cd4b0  lfs 1, 60(5)
  01cd4b4  stfs 1, 28(31)
  01cd4b8  lfs 1, 112(3)
  01cd4bc  stfs 1, 64(31)
  01cd4c0  lfs 1, 116(3)
  01cd4c4  stfs 1, 68(31)
  01cd4c8  lfs 1, 120(3)
  01cd4cc  stfs 1, 72(31)
  01cd4d0  lfs 1, 124(3)
  01cd4d4  stw 30, 188(29)
  01cd4d8  stfs 1, 76(31)
  01cd4dc  stw 30, 2080(4)
  01cd4e0  b 0x1cd5a4
  01cd4e4  lwz 3, 188(29)
  01cd4e8  cmpwi 3, 1
  01cd4ec  bt 2, 0x1cd5a4
  01cd4f0  lis 3, 151
  01cd4f4  lwz 4, 264(29)
  01cd4f8  addic 3, 3, -25376
  01cd4fc  extsw 4, 4
  01cd500  addic 3, 3, 128
  01cd504  bl 0x110b70
  01cd508  nop
  01cd50c  cmpwi 3, 0
  01cd510  bt 2, 0x1cd5a4
  01cd514  lis 3, 165
  01cd518  lwz 4, 164(29)
  01cd51c  slwi 5, 4, 7
  01cd520  slwi 4, 4, 7
  01cd524  lwz 3, 7128(3)
  01cd528  lis 6, 162
  01cd52c  addc 5, 3, 5
  01cd530  addc 3, 3, 4
  01cd534  clrldi 5, 5, 32
  01cd538  clrldi 4, 3, 32
  01cd53c  lis 3, 151
  01cd540  addic 3, 3, -16400
  01cd544  lfs 1, 48(5)
  01cd548  stfs 1, 16(31)
  01cd54c  lfs 1, 52(5)
  01cd550  stfs 1, 20(31)
  01cd554  lfs 1, 56(5)
  01cd558  stfs 1, 24(31)
  01cd55c  lfs 1, 60(5)
  01cd560  li 5, 1
  01cd564  stfs 1, 28(31)
  01cd568  lfs 1, 112(4)
  01cd56c  stfs 1, 64(31)
  01cd570  lfs 1, 116(4)
  01cd574  stfs 1, 68(31)
  01cd578  lfs 1, 120(4)
  01cd57c  stfs 1, 72(31)
  01cd580  lfs 1, 124(4)
  01cd584  stw 5, 188(29)
  01cd588  stfs 1, 76(31)
  01cd58c  lbz 4, 33(3)
  01cd590  stw 5, 2080(6)
  01cd594  cmpwi 4, 0
  01cd598  bf 2, 0x1cd5a4
  01cd59c  li 4, 1
  01cd5a0  stb 4, 33(3)
  01cd5a4  lwz 3, 272(29)
  01cd5a8  cmpwi 3, 0
  01cd5ac  bt 2, 0x1ce06c
  01cd5b0  li 4, 3
  01cd5b4  stw 30, 272(29)
  01cd5b8  li 3, 10
  01cd5bc  stb 4, 32(31)
  01cd5c0  bl 0x11b0b0
  01cd5c4  nop
  01cd5c8  lbz 3, 83(31)
  01cd5cc  cmpwi 3, 0
  01cd5d0  bt 2, 0x1cd5ec
  01cd5d4  ori 3, 31, 0
  01cd5d8  li 4, 0
  01cd5dc  li 5, 0
  01cd5e0  li 6, 0
  01cd5e4  bl 0xfddc0
  01cd5e8  nop
  01cd5ec  lis 3, 29
  01cd5f0  lis 4, 114
  01cd5f4  addi 28, 3, -12580
  01cd5f8  lfs 1, 4(28)
  01cd5fc  lfs 2, -3056(4)
  01cd600  fmuls 1, 2, 1
  01cd604  fctiwz 1, 1
  01cd608  stfd 1, 328(1)
  01cd60c  lwz 3, 332(1)
  01cd610  extsw 3, 3
  01cd614  bl 0x6dad0
  01cd618  nop
  01cd61c  lwz 3, 192(29)
  01cd620  lis 5, 165
  01cd624  lfs 11, 8(28)
  01cd628  slwi 4, 3, 2
  01cd62c  stw 30, 176(29)
  01cd630  slwi 3, 3, 2
  01cd634  addc 4, 29, 4
  01cd638  addic 5, 5, 7136
  01cd63c  clrldi 4, 4, 32
  01cd640  addc 3, 29, 3
  01cd644  clrldi 3, 3, 32
  01cd648  lwz 4, 96(4)
  01cd64c  slwi 4, 4, 2
  01cd650  extsw 4, 4
  01cd654  lwzx 4, 5, 4
  01cd658  lwz 3, 116(3)
  01cd65c  slwi 3, 3, 2
  01cd660  lfs 1, 16(4)
  01cd664  extsw 3, 3
  01cd668  stfs 1, 160(1)
  01cd66c  lfs 2, 20(4)
  01cd670  stfs 2, 164(1)
  01cd674  lfs 3, 24(4)
  01cd678  lwzx 3, 5, 3
  01cd67c  stfs 3, 168(1)
  01cd680  lfs 4, 28(4)
  01cd684  stfs 4, 172(1)
  01cd688  lfs 4, 16(3)
  01cd68c  lfs 5, 20(3)
  01cd690  fsubs 7, 4, 1
  01cd694  fsubs 8, 5, 2
  01cd698  lfs 6, 24(3)
  01cd69c  lis 3, 115
  01cd6a0  fabs 9, 7
  01cd6a4  fabs 12, 8
  01cd6a8  stfs 7, 252(1)
  01cd6ac  stfs 8, 256(1)
  01cd6b0  stw 30, 156(1)
  01cd6b4  stw 30, 152(1)
  01cd6b8  stw 30, 148(1)
  01cd6bc  stw 30, 144(1)
  01cd6c0  addic 30, 3, 22784
  01cd6c4  fsubs 7, 9, 12
  01cd6c8  stfs 7, 260(1)
  01cd6cc  lwz 4, 252(1)
  01cd6d0  lfs 7, 252(1)
  01cd6d4  lwz 5, 256(1)
  01cd6d8  lfs 8, 256(1)
  01cd6dc  rlwinm 3, 5, 3, 29, 29
  01cd6e0  lfs 10, 12(28)
  01cd6e4  fabs 13, 8
  01cd6e8  lwz 5, 260(1)
  01cd6ec  lfs 8, 260(1)
  01cd6f0  fabs 7, 7
  01cd6f4  rlwimi 3, 5, 2, 30, 30
  01cd6f8  fsub 0, 8, 11
  01cd6fc  fsub 28, 8, 11
  01cd700  rlwimi 3, 4, 4, 28, 28
  01cd704  ori 4, 30, 0
  01cd708  rlwimi 4, 3, 2, 26, 28
  01cd70c  slwi 3, 3, 2
  01cd710  clrldi 4, 4, 32
  01cd714  fsel 12, 0, 7, 12
  01cd718  lfsx 7, 30, 3
  01cd71c  lfs 8, 4(4)
  01cd720  fsel 9, 28, 13, 9
  01cd724  fcmpu 0, 12, 11
  01cd728  bt 1, 0x1cd734
  01cd72c  fmr 7, 11
  01cd730  b 0x1cd84c
  01cd734  fsubs 13, 9, 12
  01cd738  fadds 9, 9, 12
  01cd73c  addic 3, 1, 16
  01cd740  li 7, 2
  01cd744  addic 4, 3, 280
  01cd748  addic 5, 3, 296
  01cd74c  mtctr 7
  01cd750  fdivs 9, 13, 9
  01cd754  fmuls 12, 9, 9
  01cd758  stfs 9, 308(1)
  01cd75c  stfs 9, 300(1)
  01cd760  stfs 9, 304(1)
  01cd764  stfs 9, 296(1)
  01cd768  lfs 0, 308(1)
  01cd76c  lfs 28, 300(1)
  01cd770  lfs 27, 304(1)
  01cd774  fmuls 13, 12, 12
  01cd778  fmuls 28, 28, 12
  01cd77c  fmuls 0, 0, 13
  01cd780  fmuls 9, 13, 13
  01cd784  fmuls 13, 27, 13
  01cd788  stfs 28, 300(1)
  01cd78c  fmuls 12, 0, 12
  01cd790  stfs 13, 304(1)
  01cd794  stfs 12, 308(1)
  01cd798  lfs 12, 280(3)
  01cd79c  fmuls 12, 12, 9
  01cd7a0  stfs 12, 296(3)
  01cd7a4  lfs 12, 4(4)
  01cd7a8  addic 3, 3, 8
  01cd7ac  addic 4, 4, 8
  01cd7b0  fmuls 12, 12, 9
  01cd7b4  stfs 12, 4(5)
  01cd7b8  addic 5, 5, 8
  01cd7bc  bdnz 0x1cd798
  01cd7c0  li 5, 4
  01cd7c4  ori 3, 1, 0
  01cd7c8  mtctr 5
  01cd7cc  lis 4, 115
  01cd7d0  addic 5, 3, 296
  01cd7d4  addic 4, 4, 22752
  01cd7d8  ori 6, 5, 0
  01cd7dc  lfs 9, 296(3)
  01cd7e0  lfs 12, 0(4)
  01cd7e4  fmuls 9, 9, 12
  01cd7e8  lfs 12, 4(4)
  01cd7ec  addic 4, 4, 8
  01cd7f0  stfs 9, 296(3)
  01cd7f4  lfs 9, 4(5)
  01cd7f8  addic 3, 3, 8
  01cd7fc  fmuls 9, 9, 12
  01cd800  stfs 9, 4(5)
  01cd804  addic 5, 5, 8
  01cd808  bdnz 0x1cd7dc
  01cd80c  fmr 9, 11
  01cd810  ori 3, 1, 0
  01cd814  mtctr 7
  01cd818  lfs 12, 296(3)
  01cd81c  fadds 9, 9, 12
  01cd820  addic 3, 3, 16
  01cd824  lfs 12, 4(6)
  01cd828  lfs 13, 8(6)
  01cd82c  lfs 0, 12(6)
  01cd830  addic 6, 6, 16
  01cd834  fadds 9, 9, 12
  01cd838  fadds 9, 9, 13
  01cd83c  fadds 9, 9, 0
  01cd840  bdnz 0x1cd818
  01cd844  fadds 9, 9, 10
  01cd848  fmadds 7, 9, 7, 8
  01cd84c  fsubs 2, 2, 5
  01cd850  fsubs 1, 1, 4
  01cd854  stfs 7, 152(1)
  01cd858  fmuls 2, 2, 2
  01cd85c  fmadds 1, 1, 1, 2
  01cd860  fsubs 2, 6, 3
  01cd864  fsqrts 1, 1
  01cd868  stfs 2, 244(1)
  01cd86c  fabs 4, 2
  01cd870  fabs 3, 1
  01cd874  stfs 1, 240(1)
  01cd878  lwz 3, 244(1)
  01cd87c  rlwinm 3, 3, 3, 29, 29
  01cd880  fsubs 1, 3, 4
  01cd884  stfs 1, 248(1)
  01cd888  lwz 4, 240(1)
  01cd88c  lfs 1, 240(1)
  01cd890  lfs 2, 244(1)
  01cd894  lwz 5, 248(1)
  01cd898  lfs 5, 248(1)
  01cd89c  fabs 1, 1
  01cd8a0  rlwimi 3, 5, 2, 30, 30
  01cd8a4  fsub 6, 5, 11
  01cd8a8  fabs 2, 2
  01cd8ac  fsub 5, 5, 11
  01cd8b0  rlwimi 3, 4, 4, 28, 28
  01cd8b4  ori 4, 30, 0
  01cd8b8  rlwimi 4, 3, 2, 26, 28
  01cd8bc  slwi 3, 3, 2
  01cd8c0  clrldi 4, 4, 32
  01cd8c4  fsel 4, 6, 1, 4
  01cd8c8  lfsx 1, 30, 3
  01cd8cc  fsel 3, 5, 2, 3
  01cd8d0  lfs 2, 4(4)
  01cd8d4  fcmpu 0, 4, 11
  01cd8d8  bt 1, 0x1cd8e0
  01cd8dc  b 0x1cd9f4
  01cd8e0  fsubs 5, 3, 4
  01cd8e4  fadds 3, 3, 4
  01cd8e8  addic 3, 1, 16
  01cd8ec  li 6, 2
  01cd8f0  addic 5, 3, 264
  01cd8f4  addic 4, 3, 248
  01cd8f8  mtctr 6
  01cd8fc  fdivs 3, 5, 3
  01cd900  fmuls 4, 3, 3
  01cd904  stfs 3, 276(1)
  01cd908  stfs 3, 268(1)
  01cd90c  stfs 3, 272(1)
  01cd910  stfs 3, 264(1)
  01cd914  lfs 6, 276(1)
  01cd918  lfs 7, 268(1)
  01cd91c  lfs 8, 272(1)
  01cd920  fmuls 5, 4, 4
  01cd924  fmuls 7, 7, 4
  01cd928  fmuls 6, 6, 5
  01cd92c  fmuls 3, 5, 5
  01cd930  fmuls 5, 8, 5
  01cd934  stfs 7, 268(1)
  01cd938  fmuls 4, 6, 4
  01cd93c  stfs 5, 272(1)
  01cd940  stfs 4, 276(1)
  01cd944  lfs 4, 248(3)
  01cd948  fmuls 4, 4, 3
  01cd94c  stfs 4, 264(3)
  01cd950  lfs 4, 4(4)
  01cd954  addic 4, 4, 8
  01cd958  fmuls 4, 4, 3
  01cd95c  addic 3, 3, 8
  01cd960  stfs 4, 4(5)
  01cd964  addic 5, 5, 8
  01cd968  bdnz 0x1cd944
  01cd96c  li 5, 4
  01cd970  ori 3, 1, 0
  01cd974  mtctr 5
  01cd978  lis 4, 115
  01cd97c  addic 5, 3, 264
  01cd980  addic 4, 4, 22752
  01cd984  ori 7, 5, 0
  01cd988  lfs 3, 264(3)
  01cd98c  lfs 4, 0(4)
  01cd990  fmuls 3, 3, 4
  01cd994  lfs 4, 4(4)
  01cd998  addic 4, 4, 8
  01cd99c  stfs 3, 264(3)
  01cd9a0  lfs 3, 4(5)
  01cd9a4  addic 3, 3, 8
  01cd9a8  fmuls 3, 3, 4
  01cd9ac  stfs 3, 4(5)
  01cd9b0  addic 5, 5, 8
  01cd9b4  bdnz 0x1cd988
  01cd9b8  ori 3, 1, 0
  01cd9bc  mtctr 6
  01cd9c0  lfs 3, 264(3)
  01cd9c4  lfs 4, 4(7)
  01cd9c8  fadds 3, 11, 3
  01cd9cc  lfs 5, 8(7)
  01cd9d0  addic 3, 3, 16
  01cd9d4  lfs 11, 12(7)
  01cd9d8  addic 7, 7, 16
  01cd9dc  fadds 3, 3, 4
  01cd9e0  fadds 3, 3, 5
  01cd9e4  fadds 11, 3, 11
  01cd9e8  bdnz 0x1cd9c0
  01cd9ec  fadds 11, 11, 10
  01cd9f0  fmadds 11, 11, 1, 2
  01cd9f4  fneg 1, 11
  01cd9f8  lis 3, 29
  01cd9fc  addi 30, 3, -12580
  01cda00  lis 3, 114
  01cda04  addic 28, 1, 160
  01cda08  addic 27, 1, 144
  01cda0c  li 5, 2
  01cda10  ori 4, 27, 0
  01cda14  lfs 2, -3056(3)
  01cda18  li 7, 0
  01cda1c  ori 3, 28, 0
  01cda20  stfs 1, 148(1)
  01cda24  lfs 1, 16(30)
  01cda28  fmuls 1, 2, 1
  01cda2c  fctiwz 1, 1
  01cda30  stfd 1, 328(1)
  01cda34  lwz 6, 332(1)
  01cda38  extsw 6, 6
  01cda3c  bl 0x47f74
  01cda40  nop
  01cda44  lfs 1, 20(30)
  01cda48  lfs 2, 24(30)
  01cda4c  fmr 4, 1
  01cda50  fmr 3, 2
  01cda54  fmr 5, 2
  01cda58  fmr 6, 2
  01cda5c  bl 0x47f48
  01cda60  nop
  01cda64  ori 3, 28, 0
  01cda68  bl 0x47b98
  01cda6c  nop
  01cda70  ori 3, 27, 0
  01cda74  bl 0x47c08
  01cda78  nop
  01cda7c  lis 3, 165
  01cda80  lwz 4, 172(29)
  01cda84  li 5, 114
  01cda88  slwi 4, 4, 7
  01cda8c  li 6, 0
  01cda90  lwz 3, 7128(3)
  01cda94  addc 3, 3, 4
  01cda98  addic 4, 3, 48
  01cda9c  addic 7, 3, 112
  01cdaa0  clrldi 3, 4, 32
  01cdaa4  clrldi 4, 7, 32
  01cdaa8  bl 0xa0c38
  01cdaac  nop
  01cdab0  lis 3, 149
  01cdab4  lfs 28, 16(31)
  01cdab8  li 4, 0
  01cdabc  addic 6, 3, 5056
  01cdac0  lfs 27, 20(31)
  01cdac4  lfs 26, 24(31)
  01cdac8  li 3, 2
  01cdacc  lfs 25, 28(31)
  01cdad0  ori 5, 31, 0
  01cdad4  lfs 1, 320(6)
  01cdad8  stfs 1, 16(31)
  01cdadc  lfs 1, 324(6)
  01cdae0  stfs 1, 20(31)
  01cdae4  lfs 1, 328(6)
  01cdae8  stfs 1, 24(31)
  01cdaec  lfs 1, 332(6)
  01cdaf0  stfs 1, 28(31)
  01cdaf4  bl 0x15d12c
  01cdaf8  nop
  01cdafc  stfs 28, 16(31)
  01cdb00  stfs 27, 20(31)
  01cdb04  stfs 26, 24(31)
  01cdb08  stfs 25, 28(31)
  01cdb0c  b 0x1ce06c
  01cdb10  ori 3, 31, 0
  01cdb14  lwz 4, 192(29)
  01cdb18  extsw 4, 4
  01cdb1c  bl 0x1cb618
  01cdb20  cmpwi 3, 0
  01cdb24  bt 2, 0x1ce06c
  01cdb28  li 3, 4
  01cdb2c  lis 5, 29
  01cdb30  lis 4, 165
  01cdb34  addi 5, 5, -12580
  01cdb38  stb 3, 32(31)
  01cdb3c  li 6, 0
  01cdb40  lwz 3, 188(29)
  01cdb44  slwi 7, 3, 2
  01cdb48  lwz 4, 7128(4)
  01cdb4c  slwi 3, 3, 2
  01cdb50  addc 7, 29, 7
  01cdb54  lfs 28, 8(5)
  01cdb58  stw 6, 244(29)
  01cdb5c  addc 3, 29, 3
  01cdb60  clrldi 7, 7, 32
  01cdb64  clrldi 3, 3, 32
  01cdb68  lwz 5, 160(7)
  01cdb6c  lwz 3, 160(3)
  01cdb70  slwi 5, 5, 7
  01cdb74  slwi 3, 3, 7
  01cdb78  addc 5, 4, 5
  01cdb7c  addc 3, 4, 3
  01cdb80  clrldi 5, 5, 32
  01cdb84  clrldi 6, 3, 32
  01cdb88  addic 3, 31, 192
  01cdb8c  addic 4, 31, 64
  01cdb90  lfs 1, 48(5)
  01cdb94  stfs 1, 16(31)
  01cdb98  lfs 1, 52(5)
  01cdb9c  stfs 1, 20(31)
  01cdba0  lfs 1, 56(5)
  01cdba4  stfs 1, 24(31)
  01cdba8  lfs 1, 60(5)
  01cdbac  stfs 1, 28(31)
  01cdbb0  lfs 1, 112(6)
  01cdbb4  stfs 1, 64(31)
  01cdbb8  lfs 1, 116(6)
  01cdbbc  stfs 1, 68(31)
  01cdbc0  lfs 1, 120(6)
  01cdbc4  stfs 1, 72(31)
  01cdbc8  lfs 1, 124(6)
  01cdbcc  stfs 1, 76(31)
  01cdbd0  bl 0x500b64
  01cdbd4  nop
  01cdbd8  lwz 3, 36(31)
  01cdbdc  lwz 4, 188(29)
  01cdbe0  cmpwi 4, 1
  01cdbe4  lfs 1, 36(3)
  01cdbe8  stfs 1, 44(31)
  01cdbec  bf 2, 0x1cdc1c
  01cdbf0  lis 3, 151
  01cdbf4  lis 4, 162
  01cdbf8  addic 3, 3, -16400
  01cdbfc  li 5, 1
  01cdc00  lbz 6, 33(3)
  01cdc04  stw 5, 2080(4)
  01cdc08  cmpwi 6, 0
  01cdc0c  bf 2, 0x1cdc28
  01cdc10  li 4, 1
  01cdc14  stb 4, 33(3)
  01cdc18  b 0x1cdc28
  01cdc1c  lis 3, 162
  01cdc20  li 4, 0
  01cdc24  stw 4, 2080(3)
  01cdc28  lfs 2, 196(31)
  01cdc2c  lfs 3, 192(31)
  01cdc30  fmuls 1, 2, 2
  01cdc34  lfs 4, 200(31)
  01cdc38  lis 3, 29
  01cdc3c  lfs 5, 28(31)
  01cdc40  addi 3, 3, -12580
  01cdc44  stfs 5, 188(1)
  01cdc48  fmadds 1, 3, 3, 1
  01cdc4c  lfs 12, 28(3)
  01cdc50  lfs 5, 16(31)
  01cdc54  li 4, 0
  01cdc58  lfs 7, 20(31)
  01cdc5c  lfs 8, 24(31)
  01cdc60  fmadds 1, 4, 4, 1
  01cdc64  lfs 9, 224(31)
  01cdc68  lfs 10, 228(31)
  01cdc6c  lfs 11, 232(31)
  01cdc70  fsqrts 6, 1
  01cdc74  lfs 1, 72(31)
  01cdc78  stw 4, 204(1)
  01cdc7c  stw 4, 200(1)
  01cdc80  stw 4, 196(1)
  01cdc84  stw 4, 192(1)
  01cdc88  fdivs 12, 12, 6
  01cdc8c  fsub 13, 28, 6
  01cdc90  fsub 0, 28, 6
  01cdc94  fsub 27, 28, 6
  01cdc98  fsub 26, 6, 28
  01cdc9c  fsub 25, 6, 28
  01cdca0  fsub 6, 6, 28
  01cdca4  fmuls 4, 4, 12
  01cdca8  fmuls 2, 2, 12
  01cdcac  fmuls 3, 3, 12
  01cdcb0  fsel 12, 13, 28, 4
  01cdcb4  fsel 13, 0, 28, 2
  01cdcb8  fsel 0, 27, 28, 3
  01cdcbc  fsel 4, 26, 12, 4
  01cdcc0  fsel 2, 25, 13, 2
  01cdcc4  fsel 3, 6, 0, 3
  01cdcc8  fadds 4, 4, 11
  01cdccc  fadds 2, 2, 10
  01cdcd0  fadds 3, 3, 9
  01cdcd4  fadds 4, 8, 4
  01cdcd8  fadds 2, 7, 2
  01cdcdc  fadds 3, 5, 3
  01cdce0  stfs 4, 184(1)
  01cdce4  stfs 2, 180(1)
  01cdce8  stfs 3, 176(1)
  01cdcec  lfs 2, 32(3)
  01cdcf0  bl 0x502578
  01cdcf4  nop
  01cdcf8  addic 3, 1, 176
  01cdcfc  stfs 1, 200(1)
  01cdd00  addic 4, 1, 192
  01cdd04  li 5, 0
  01cdd08  li 6, 0
  01cdd0c  bl 0xa0c38
  01cdd10  nop
  01cdd14  lwz 3, 276(29)
  01cdd18  cmpwi 3, 0
  01cdd1c  bt 2, 0x1cdda8
  01cdd20  lis 3, 151
  01cdd24  lis 4, 164
  01cdd28  addic 3, 3, -16400
  01cdd2c  li 5, 1
  01cdd30  lwz 4, -28512(4)
  01cdd34  stb 5, 36(3)
  01cdd38  lwz 3, 268(29)
  01cdd3c  slwi 3, 3, 8
  01cdd40  addc 3, 4, 3
  01cdd44  clrldi 3, 3, 32
  01cdd48  bl 0x44cddc
  01cdd4c  nop
  01cdd50  li 3, 0
  01cdd54  li 4, 6
  01cdd58  stw 3, 276(29)
  01cdd5c  lbz 3, 83(31)
  01cdd60  stb 4, 32(31)
  01cdd64  cmpwi 3, 2
  01cdd68  bt 2, 0x1cdda8
  01cdd6c  lis 3, 29
  01cdd70  lis 4, 114
  01cdd74  addi 3, 3, -12580
  01cdd78  li 5, 0
  01cdd7c  lfs 1, 36(3)
  01cdd80  lfs 2, -3056(4)
  01cdd84  ori 3, 31, 0
  01cdd88  li 4, 2
  01cdd8c  fmuls 1, 2, 1
  01cdd90  fctiwz 1, 1
  01cdd94  stfd 1, 328(1)
  01cdd98  lwz 6, 332(1)
  01cdd9c  extsw 6, 6
  01cdda0  bl 0xfddc0
  01cdda4  nop
  01cdda8  li 3, 0
  01cddac  bl 0x481d0
  01cddb0  nop
  01cddb4  b 0x1ce06c
  01cddb8  lis 3, 164
  01cddbc  lwz 5, 268(29)
  01cddc0  lis 4, 151
  01cddc4  slwi 5, 5, 8
  01cddc8  addic 4, 4, -25376
  01cddcc  lwz 3, -28512(3)
  01cddd0  addc 30, 3, 5
  01cddd4  lfs 2, 132(4)
  01cddd8  clrldi 30, 30, 32
  01cdddc  lfs 3, 128(4)
  01cdde0  lis 3, 29
  01cdde4  lfs 4, 20(30)
  01cdde8  lfs 1, 16(30)
  01cddec  fsubs 2, 2, 4
  01cddf0  fsubs 3, 3, 1
  01cddf4  addi 3, 3, -12580
  01cddf8  fmuls 2, 2, 2
  01cddfc  fmadds 2, 3, 3, 2
  01cde00  lfs 3, 40(3)
  01cde04  fsqrts 2, 2
  01cde08  fcmpu 0, 2, 3
  01cde0c  cror 6, 1, 2
  01cde10  bt 6, 0x1ce06c
  01cde14  stfs 1, 208(1)
  01cde18  lfs 1, 20(30)
  01cde1c  lis 3, 29
  01cde20  stfs 1, 212(1)
  01cde24  addi 3, 3, -12580
  01cde28  lfs 1, 24(30)
  01cde2c  stfs 1, 216(1)
  01cde30  lfs 1, 28(30)
  01cde34  stfs 1, 220(1)
  01cde38  lfs 1, 64(30)
  01cde3c  stfs 1, 224(1)
  01cde40  lfs 1, 68(30)
  01cde44  stfs 1, 228(1)
  01cde48  lfs 1, 72(30)
  01cde4c  stfs 1, 232(1)
  01cde50  lfs 2, 76(30)
  01cde54  stfs 2, 236(1)
  01cde58  lfs 2, 44(3)
  01cde5c  bl 0x502578
  01cde60  nop
  01cde64  addic 28, 1, 208
  01cde68  addic 27, 1, 224
  01cde6c  stfs 1, 232(1)
  01cde70  ori 3, 28, 0
  01cde74  ori 4, 27, 0
  01cde78  li 5, 114
  01cde7c  li 6, 1
  01cde80  bl 0xa0c38
  01cde84  nop
  01cde88  li 3, 0
  01cde8c  li 4, 10
  01cde90  bl 0x11ccc8
  01cde94  nop
  01cde98  li 3, 12
  01cde9c  li 4, 0
  01cdea0  bl 0x167e60
  01cdea4  nop
  01cdea8  ori 3, 30, 0
  01cdeac  bl 0xefb38
  01cdeb0  nop
  01cdeb4  li 3, 5
  01cdeb8  bl 0x112c20
  01cdebc  nop
  01cdec0  li 3, 8
  01cdec4  stb 3, 32(31)
  01cdec8  lwz 3, 248(29)
  01cdecc  extsw 3, 3
  01cded0  bl 0xf1e50
  01cded4  nop
  01cded8  ori 3, 28, 0
  01cdedc  ori 4, 27, 0
  01cdee0  bl 0x151e70
  01cdee4  nop
  01cdee8  b 0x1ce06c
  01cdeec  lis 3, 151
  01cdef0  lwz 4, 240(29)
  01cdef4  addic 3, 3, -25376
  01cdef8  extsw 4, 4
  01cdefc  addic 3, 3, 128
  01cdf00  bl 0x110b70
  01cdf04  nop
  01cdf08  cmpwi 3, 0
  01cdf0c  bt 2, 0x1ce06c
  01cdf10  lis 3, 118
  01cdf14  li 4, 2
  01cdf18  li 5, 0
  01cdf1c  lis 7, 118
  01cdf20  li 6, 1
  01cdf24  lfs 1, 17016(3)
  01cdf28  stw 4, 192(29)
  01cdf2c  stfs 1, 196(29)
  01cdf30  stw 5, 188(29)
  01cdf34  lfs 1, 17020(7)
  01cdf38  stw 6, 272(29)
  01cdf3c  stfs 1, 200(29)
  01cdf40  stw 6, 276(29)
  01cdf44  stb 6, 32(31)
  01cdf48  b 0x1ce06c
  01cdf4c  li 3, 1
  01cdf50  lbz 4, 83(31)
  01cdf54  cmpwi 4, 2
  01cdf58  stb 3, 32(31)
  01cdf5c  bt 2, 0x1ce06c
  01cdf60  lis 3, 29
  01cdf64  lis 4, 114
  01cdf68  addi 3, 3, -12580
  01cdf6c  li 5, 0
  01cdf70  lfs 1, 36(3)
  01cdf74  lfs 2, -3056(4)
  01cdf78  ori 3, 31, 0
  01cdf7c  fmuls 1, 2, 1
  01cdf80  li 4, 2
  01cdf84  fctiwz 1, 1
  01cdf88  stfd 1, 328(1)
  01cdf8c  lwz 6, 332(1)
  01cdf90  extsw 6, 6
  01cdf94  bl 0xfddc0
  01cdf98  nop
  01cdf9c  b 0x1ce06c
  01cdfa0  lis 3, 161
  01cdfa4  lwz 3, 1800(3)
  01cdfa8  cmpwi 3, 2
  01cdfac  bt 2, 0x1ce06c
  01cdfb0  lis 3, 151
  01cdfb4  addic 3, 3, -16064
  01cdfb8  lbz 3, 30(3)
  01cdfbc  cmpwi 3, 0
  01cdfc0  bt 2, 0x1cdfe0
  01cdfc4  li 3, 5
  01cdfc8  li 4, 0
  01cdfcc  bl 0x167e60
  01cdfd0  nop
  01cdfd4  li 3, 9
  01cdfd8  stb 3, 32(31)
  01cdfdc  b 0x1ce06c
  01cdfe0  li 3, 5
  01cdfe4  bl 0x112af0
  01cdfe8  nop
  01cdfec  li 3, 1
  01cdff0  stb 3, 32(31)
  01cdff4  bl 0xa2560
  01cdff8  nop
  01cdffc  li 3, 0
  01ce000  li 4, -1
  01ce004  bl 0xe8aa4
  01ce008  nop
  01ce00c  b 0x1ce06c
  01ce010  lis 3, 161
  01ce014  lwz 3, 1800(3)
  01ce018  cmpwi 3, 2
  01ce01c  bt 2, 0x1ce06c
  01ce020  li 3, 5
  01ce024  bl 0x112af0
  01ce028  nop
  01ce02c  li 3, 0
  01ce030  li 4, -1
  01ce034  bl 0xe8aa4
  01ce038  nop
  01ce03c  li 3, 1
  01ce040  stb 3, 32(31)
  01ce044  b 0x1ce06c
  01ce048  lis 3, 161
  01ce04c  lwz 3, 1800(3)
  01ce050  cmpwi 3, 2
  01ce054  bt 2, 0x1ce06c
  01ce058  li 3, 5
  01ce05c  bl 0x168dec
  01ce060  nop
  01ce064  li 3, 7
  01ce068  stb 3, 32(31)
  01ce06c  lfs 1, 16(31)
  01ce070  lfs 2, 20(31)
  01ce074  addic 3, 29, 32
  01ce078  fsubs 1, 1, 31
  01ce07c  lfs 3, 24(31)
  01ce080  fsubs 2, 2, 30
  01ce084  lfs 4, 28(31)
  01ce088  fsubs 3, 3, 29
  01ce08c  addic 4, 1, 128
  01ce090  stfs 4, 140(1)
  01ce094  addic 5, 1, 112
  01ce098  addic 6, 31, 64
  01ce09c  stfs 1, 128(1)
  01ce0a0  stfs 2, 132(1)
  01ce0a4  stfs 3, 136(1)
  01ce0a8  bl 0x112900
  01ce0ac  nop
  01ce0b0  ld 0, 464(1)
  01ce0b4  mtlr 0
  01ce0b8  lfd 25, 392(1)
  01ce0bc  lfd 26, 400(1)
  01ce0c0  lfd 27, 408(1)
  01ce0c4  lfd 28, 416(1)
  01ce0c8  lfd 29, 424(1)
  01ce0cc  lfd 30, 432(1)
  01ce0d0  lfd 31, 440(1)
  01ce0d4  ld 27, 352(1)
  01ce0d8  ld 28, 360(1)
  01ce0dc  ld 29, 368(1)
  01ce0e0  ld 30, 376(1)
  01ce0e4  ld 31, 384(1)
  01ce0e8  addi 1, 1, 448
  01ce0ec  blr

FUN_001ce0f0:   # 0x1ce0f0, 0xc bytes
  01ce0f0  li 4, 2
  01ce0f4  stb 4, 32(3)
  01ce0f8  blr

FUN_001ce0fc:   # 0x1ce0fc, 0xc bytes
  01ce0fc  li 4, 5
  01ce100  stb 4, 32(3)
  01ce104  blr

M1109_001ce108:   # 0x1ce108, 0x14 bytes
  01ce108  lis 3, 118
  01ce10c  lis 4, 1
  01ce110  addic 3, 3, 17168
  01ce114  stw 4, 72(3)
  01ce118  blr

M111_001ce130:   # 0x1ce130, 0x2a8 bytes
  01ce130  stdu 1, -176(1)
  01ce134  mflr 0
  01ce138  std 0, 192(1)
  01ce13c  std 29, 152(1)
  01ce140  std 30, 160(1)
  01ce144  ori 29, 3, 0
  01ce148  lbz 3, 32(3)
  01ce14c  std 31, 168(1)
  01ce150  ori 30, 4, 0
  01ce154  ori 31, 5, 0
  01ce158  std 28, 144(1)
  01ce15c  std 27, 136(1)
  01ce160  cmpwi 3, 3
  01ce164  bt 2, 0x1ce3a4
  01ce168  ori 3, 29, 0
  01ce16c  lis 4, 51
  01ce170  li 5, 0
  01ce174  bl 0x10675c
  01ce178  nop
  01ce17c  ori 28, 3, 0
  01ce180  ori 3, 29, 0
  01ce184  ori 4, 28, 0
  01ce188  li 6, 0
  01ce18c  addic 7, 1, 128
  01ce190  li 9, 0
  01ce194  li 10, 4
  01ce198  ori 5, 31, 0
  01ce19c  li 8, 0
  01ce1a0  bl 0x106840
  01ce1a4  nop
  01ce1a8  ori 4, 3, 0
  01ce1ac  lwz 3, 128(1)
  01ce1b0  cmpwi 4, 0
  01ce1b4  bf 1, 0x1ce1c8
  01ce1b8  cmpwi 4, 2
  01ce1bc  bt 1, 0x1ce1c8
  01ce1c0  li 4, 0
  01ce1c4  stw 4, 0(31)
  01ce1c8  cmpwi 3, 1
  01ce1cc  bf 1, 0x1ce39c
  01ce1d0  lwz 3, 0(31)
  01ce1d4  lwz 4, 44(28)
  01ce1d8  srawi 6, 3, 31
  01ce1dc  srawi 5, 4, 31
  01ce1e0  lfs 1, 0(31)
  01ce1e4  srwi 8, 6, 1
  01ce1e8  lfs 6, 44(28)
  01ce1ec  srwi 7, 5, 1
  01ce1f0  xor 3, 8, 3
  01ce1f4  xor 4, 7, 4
  01ce1f8  subc 3, 3, 6
  01ce1fc  subc 4, 4, 5
  01ce200  cmpw 3, 4
  01ce204  bt 1, 0x1ce240
  01ce208  li 5, 0
  01ce20c  lhz 7, 52(29)
  01ce210  li 6, 120
  01ce214  ori 3, 29, 0
  01ce218  rlwimi 7, 5, 0, 19, 19
  01ce21c  stw 5, 0(31)
  01ce220  addic 4, 30, 96
  01ce224  sth 7, 52(29)
  01ce228  stb 6, 103(30)
  01ce22c  bl 0x10c808
  01ce230  nop
  01ce234  li 3, 3
  01ce238  stb 3, 32(29)
  01ce23c  b 0x1ce39c
  01ce240  fsubs 1, 1, 6
  01ce244  lis 3, 29
  01ce248  vspltisw 2, -1
  01ce24c  li 4, 250
  01ce250  addi 27, 3, -7904
  01ce254  lis 3, 114
  01ce258  li 5, -3056
  01ce25c  vslw 2, 2, 2
  01ce260  stfs 1, 0(31)
  01ce264  stb 4, 103(30)
  01ce268  <unknown>
  01ce26c  <unknown>
  01ce270  vspltw 3, 3, 0
  01ce274  li 5, 38
  01ce278  addic 4, 30, 96
  01ce27c  vmaddfp 2, 4, 3, 2
  01ce280  ori 3, 29, 0
  01ce284  vctsxs 2, 2, 0
  01ce288  vsplth 2, 2, 1
  01ce28c  stvehx 2, 5, 30
  01ce290  bl 0x10c808
  01ce294  nop
  01ce298  lfs 1, 20(28)
  01ce29c  lfs 5, 16(28)
  01ce2a0  fmuls 1, 1, 1
  01ce2a4  lfs 2, 24(28)
  01ce2a8  lfs 4, 4(27)
  01ce2ac  lfs 3, 16(29)
  01ce2b0  fmadds 1, 5, 5, 1
  01ce2b4  fmadds 6, 2, 2, 1
  01ce2b8  lfs 2, 20(29)
  01ce2bc  lfs 1, 24(29)
  01ce2c0  fsqrts 6, 6
  01ce2c4  fcmpu 0, 6, 4
  01ce2c8  bf 2, 0x1ce300
  01ce2cc  stfs 5, 112(1)
  01ce2d0  fmr 6, 4
  01ce2d4  lfs 5, 20(28)
  01ce2d8  li 3, 0
  01ce2dc  stfs 5, 116(1)
  01ce2e0  lfs 5, 24(28)
  01ce2e4  stfs 5, 120(1)
  01ce2e8  lfs 5, 28(28)
  01ce2ec  stw 3, 120(1)
  01ce2f0  stw 3, 116(1)
  01ce2f4  stw 3, 112(1)
  01ce2f8  fmr 7, 6
  01ce2fc  b 0x1ce334
  01ce300  lis 3, 29
  01ce304  addi 3, 3, -7904
  01ce308  lfs 4, 8(3)
  01ce30c  fdivs 4, 4, 6
  01ce310  fmuls 7, 5, 4
  01ce314  stfs 7, 112(1)
  01ce318  lfs 6, 20(28)
  01ce31c  fmuls 6, 6, 4
  01ce320  stfs 6, 116(1)
  01ce324  lfs 5, 24(28)
  01ce328  fmuls 4, 5, 4
  01ce32c  stfs 4, 120(1)
  01ce330  lfs 5, 28(28)
  01ce334  fadds 3, 3, 7
  01ce338  lis 3, 29
  01ce33c  fadds 2, 2, 6
  01ce340  stfs 5, 124(1)
  01ce344  fadds 1, 1, 4
  01ce348  addi 4, 3, -7904
  01ce34c  addic 3, 1, 112
  01ce350  stfs 3, 16(29)
  01ce354  stfs 2, 20(29)
  01ce358  stfs 1, 24(29)
  01ce35c  lfs 1, 12(4)
  01ce360  lfs 2, 8(4)
  01ce364  bl 0xfea60
  01ce368  nop
  01ce36c  lfs 1, 16(29)
  01ce370  lfs 2, 112(1)
  01ce374  lfs 3, 20(29)
  01ce378  fadds 1, 1, 2
  01ce37c  lfs 2, 116(1)
  01ce380  lfs 4, 24(29)
  01ce384  fadds 2, 3, 2
  01ce388  lfs 3, 120(1)
  01ce38c  fadds 3, 4, 3
  01ce390  stfs 1, 16(29)
  01ce394  stfs 2, 20(29)
  01ce398  stfs 3, 24(29)
  01ce39c  li 3, 255
  01ce3a0  stb 3, 164(29)
  01ce3a4  addic 4, 30, 96
  01ce3a8  ori 3, 29, 0
  01ce3ac  bl 0x10c9a0
  01ce3b0  nop
  01ce3b4  ld 0, 192(1)
  01ce3b8  mtlr 0
  01ce3bc  ld 27, 136(1)
  01ce3c0  ld 28, 144(1)
  01ce3c4  ld 29, 152(1)
  01ce3c8  ld 30, 160(1)
  01ce3cc  ld 31, 168(1)
  01ce3d0  addi 1, 1, 176
  01ce3d4  blr
