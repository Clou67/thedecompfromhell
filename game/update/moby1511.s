# game/update/moby1511.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0028e510:   # 0x28e510, 0x208 bytes
  028e510  stdu 1, -160(1)
  028e514  mflr 0
  028e518  std 0, 176(1)
  028e51c  stfd 31, 152(1)
  028e520  std 30, 136(1)
  028e524  ori 30, 3, 0
  028e528  li 3, 1510
  028e52c  std 31, 144(1)
  028e530  fmr 31, 1
  028e534  std 29, 128(1)
  028e538  std 28, 120(1)
  028e53c  ori 31, 4, 0
  028e540  bl 0xefa28
  028e544  nop
  028e548  ori 29, 3, 0
  028e54c  cmpwi 29, 0
  028e550  bt 2, 0x28e6f0
  028e554  ori 3, 30, 0
  028e558  lwz 30, 120(29)
  028e55c  li 4, 255
  028e560  li 5, 1
  028e564  lis 7, 41
  028e568  li 6, 0
  028e56c  stw 3, 36(30)
  028e570  addi 28, 7, -6932
  028e574  lfs 1, 16(3)
  028e578  stfs 1, 16(29)
  028e57c  lfs 1, 20(3)
  028e580  stfs 1, 20(29)
  028e584  lfs 1, 24(3)
  028e588  stfs 1, 24(29)
  028e58c  lfs 1, 28(3)
  028e590  stfs 1, 28(29)
  028e594  lfs 1, 64(3)
  028e598  lfs 2, 44(29)
  028e59c  stfs 1, 64(29)
  028e5a0  lfs 1, 68(3)
  028e5a4  fmuls 2, 2, 31
  028e5a8  stfs 1, 68(29)
  028e5ac  lfs 1, 72(3)
  028e5b0  stfs 1, 72(29)
  028e5b4  lfs 1, 76(3)
  028e5b8  stb 4, 48(29)
  028e5bc  stfs 1, 76(29)
  028e5c0  sth 4, 50(29)
  028e5c4  stb 5, 49(29)
  028e5c8  stb 6, 32(29)
  028e5cc  stfs 2, 44(29)
  028e5d0  lfs 1, 0(28)
  028e5d4  lfs 2, 4(28)
  028e5d8  bl 0xfcbe8
  028e5dc  nop
  028e5e0  lfs 2, 4(31)
  028e5e4  fmr 3, 1
  028e5e8  fmuls 2, 2, 2
  028e5ec  lfs 1, 0(31)
  028e5f0  lfs 4, 8(31)
  028e5f4  lfs 31, 8(28)
  028e5f8  fmadds 2, 1, 1, 2
  028e5fc  lfs 1, 0(31)
  028e600  fmadds 2, 4, 4, 2
  028e604  fsqrts 2, 2
  028e608  fcmpu 0, 2, 31
  028e60c  bf 2, 0x28e640
  028e610  lfs 1, 0(31)
  028e614  li 3, 0
  028e618  stfs 1, 0(30)
  028e61c  lfs 1, 4(31)
  028e620  stfs 1, 4(30)
  028e624  lfs 1, 8(31)
  028e628  stfs 1, 8(30)
  028e62c  lfs 3, 12(31)
  028e630  stw 3, 8(30)
  028e634  stw 3, 4(30)
  028e638  stw 3, 0(30)
  028e63c  b 0x28e668
  028e640  fdivs 2, 3, 2
  028e644  fmuls 1, 1, 2
  028e648  stfs 1, 0(30)
  028e64c  lfs 1, 4(31)
  028e650  fmuls 1, 1, 2
  028e654  stfs 1, 4(30)
  028e658  lfs 1, 8(31)
  028e65c  fmuls 1, 1, 2
  028e660  stfs 1, 8(30)
  028e664  lfs 3, 12(31)
  028e668  lis 3, 41
  028e66c  fmr 1, 31
  028e670  stfs 3, 12(30)
  028e674  addi 31, 3, -6932
  028e678  lfs 2, 12(31)
  028e67c  bl 0xfe4f0
  028e680  nop
  028e684  stfs 1, 16(30)
  028e688  lfs 1, 16(31)
  028e68c  lfs 2, 20(31)
  028e690  bl 0xfe4f0
  028e694  nop
  028e698  stfs 1, 20(30)
  028e69c  fmr 1, 31
  028e6a0  lfs 2, 24(31)
  028e6a4  bl 0xfe4f0
  028e6a8  nop
  028e6ac  li 3, 28
  028e6b0  vspltisw 2, -1
  028e6b4  stfs 1, 24(30)
  028e6b8  lis 4, 114
  028e6bc  li 5, -3056
  028e6c0  vslw 2, 2, 2
  028e6c4  lvlx 3, 3, 31
  028e6c8  vspltw 3, 3, 0
  028e6cc  lvlx 4, 5, 4
  028e6d0  ori 3, 29, 0
  028e6d4  li 4, 32
  028e6d8  vmaddfp 2, 4, 3, 2
  028e6dc  vctsxs 2, 2, 0
  028e6e0  vspltw 2, 2, 0
  028e6e4  stvewx 2, 4, 30
  028e6e8  bl 0xf31a8
  028e6ec  nop
  028e6f0  ori 3, 29, 0
  028e6f4  ld 0, 176(1)
  028e6f8  mtlr 0
  028e6fc  lfd 31, 152(1)
  028e700  ld 28, 120(1)
  028e704  ld 29, 128(1)
  028e708  ld 30, 136(1)
  028e70c  ld 31, 144(1)
  028e710  addi 1, 1, 160
  028e714  blr

M1511_0028e730:   # 0x28e730, 0x3d4 bytes
  028e730  stdu 1, -416(1)
  028e734  mflr 0
  028e738  std 0, 432(1)
  028e73c  stfd 24, 352(1)
  028e740  stfd 25, 360(1)
  028e744  stfd 26, 368(1)
  028e748  stfd 27, 376(1)
  028e74c  stfd 28, 384(1)
  028e750  stfd 29, 392(1)
  028e754  stfd 30, 400(1)
  028e758  stfd 31, 408(1)
  028e75c  lis 4, 123
  028e760  li 9, -19872
  028e764  li 5, 16
  028e768  addic 6, 4, -19872
  028e76c  li 7, 32
  028e770  li 10, 48
  028e774  li 8, 112
  028e778  li 12, 128
  028e77c  std 30, 336(1)
  028e780  lvx 2, 9, 4
  028e784  li 30, 144
  028e788  std 31, 344(1)
  028e78c  lvx 3, 5, 6
  028e790  ori 31, 3, 0
  028e794  lvx 4, 7, 6
  028e798  li 4, 160
  028e79c  lvx 5, 10, 6
  028e7a0  li 3, 11
  028e7a4  stvx 2, 8, 1
  028e7a8  stvx 3, 12, 1
  028e7ac  lis 11, 41
  028e7b0  std 29, 328(1)
  028e7b4  stvx 4, 30, 1
  028e7b8  addi 29, 11, -6376
  028e7bc  stvx 5, 4, 1
  028e7c0  bl 0x685c4
  028e7c4  nop
  028e7c8  std 3, 296(1)
  028e7cc  li 3, 0
  028e7d0  li 4, 2
  028e7d4  li 5, 0
  028e7d8  li 6, 1
  028e7dc  li 7, 128
  028e7e0  bl 0x502ea8
  028e7e4  nop
  028e7e8  std 3, 312(1)
  028e7ec  li 3, 0
  028e7f0  lis 9, 0
  028e7f4  li 4, 0
  028e7f8  li 5, 1
  028e7fc  li 6, 1
  028e800  li 7, 1
  028e804  li 8, 0
  028e808  ori 9, 9, 65424
  028e80c  bl 0x502fd4
  028e810  nop
  028e814  std 3, 304(1)
  028e818  li 4, 1
  028e81c  li 3, 1
  028e820  li 5, 0
  028e824  li 6, 0
  028e828  li 7, 0
  028e82c  li 8, 0
  028e830  bl 0x502f08
  028e834  nop
  028e838  lis 4, 123
  028e83c  lfs 1, 228(31)
  028e840  lis 5, 123
  028e844  lfs 2, 196(31)
  028e848  lfs 3, 224(31)
  028e84c  lfs 4, -19988(4)
  028e850  lfs 5, -19992(5)
  028e854  fmuls 1, 1, 4
  028e858  lfs 6, 192(31)
  028e85c  lfs 7, 232(31)
  028e860  fmuls 3, 3, 4
  028e864  lfs 8, 200(31)
  028e868  lis 4, 149
  028e86c  fmuls 4, 7, 4
  028e870  lfs 7, 20(31)
  028e874  addic 4, 4, 5056
  028e878  lfs 9, 16(31)
  028e87c  lfs 10, 24(31)
  028e880  fmadds 2, 2, 5, 1
  028e884  fmadds 1, 6, 5, 3
  028e888  lfs 11, 324(4)
  028e88c  lfs 12, 320(4)
  028e890  fmadds 3, 8, 5, 4
  028e894  lfs 4, 328(4)
  028e898  std 3, 288(1)
  028e89c  fadds 2, 2, 7
  028e8a0  fadds 1, 1, 9
  028e8a4  fadds 3, 3, 10
  028e8a8  lfs 7, 0(29)
  028e8ac  fmr 6, 7
  028e8b0  li 3, 0
  028e8b4  fsubs 11, 11, 2
  028e8b8  fsubs 12, 12, 1
  028e8bc  fsubs 10, 4, 3
  028e8c0  lis 5, 16256
  028e8c4  stw 3, 256(1)
  028e8c8  fmr 5, 6
  028e8cc  stw 3, 260(1)
  028e8d0  fmuls 4, 11, 11
  028e8d4  stw 3, 264(1)
  028e8d8  lfs 13, 4(29)
  028e8dc  stw 5, 268(1)
  028e8e0  stw 5, 272(1)
  028e8e4  stw 3, 276(1)
  028e8e8  stw 5, 280(1)
  028e8ec  fmadds 0, 12, 12, 4
  028e8f0  stw 5, 284(1)
  028e8f4  fmr 4, 5
  028e8f8  lfs 9, 204(31)
  028e8fc  lfs 8, 332(4)
  028e900  fmadds 0, 10, 10, 0
  028e904  fsqrts 31, 0
  028e908  fcmpu 0, 31, 4
  028e90c  bt 2, 0x28e95c
  028e910  frsqrte 4, 0
  028e914  lis 3, 41
  028e918  addi 3, 3, -6376
  028e91c  lfs 5, 8(3)
  028e920  fmuls 6, 0, 4
  028e924  fmuls 31, 5, 4
  028e928  fnmsubs 6, 6, 4, 13
  028e92c  fmadds 4, 6, 31, 4
  028e930  fmuls 6, 0, 4
  028e934  fmuls 31, 5, 4
  028e938  fnmsubs 6, 6, 4, 13
  028e93c  fmadds 4, 6, 31, 4
  028e940  fmuls 6, 0, 4
  028e944  fmuls 5, 5, 4
  028e948  fnmsubs 6, 6, 4, 13
  028e94c  fmadds 6, 6, 5, 4
  028e950  fmuls 4, 12, 6
  028e954  fmuls 5, 11, 6
  028e958  fmuls 6, 10, 6
  028e95c  lis 3, 151
  028e960  addic 3, 3, -25376
  028e964  lis 4, 8224
  028e968  lfs 10, 656(3)
  028e96c  lfs 11, 664(3)
  028e970  fmuls 12, 10, 6
  028e974  fmuls 0, 11, 5
  028e978  lfs 13, 660(3)
  028e97c  fmuls 31, 13, 4
  028e980  lis 3, 41
  028e984  ori 4, 4, 8447
  028e988  addi 3, 3, -6376
  028e98c  fmsubs 12, 11, 4, 12
  028e990  fmsubs 13, 13, 6, 0
  028e994  fmsubs 10, 10, 5, 31
  028e998  lfs 30, 12(3)
  028e99c  stw 4, 252(1)
  028e9a0  stw 4, 248(1)
  028e9a4  stw 4, 244(1)
  028e9a8  fmuls 11, 12, 12
  028e9ac  stw 4, 240(1)
  028e9b0  lfs 31, 16(3)
  028e9b4  li 5, 4
  028e9b8  fmadds 11, 13, 13, 11
  028e9bc  addic 4, 1, 176
  028e9c0  mtctr 5
  028e9c4  addic 3, 1, 112
  028e9c8  fmadds 11, 10, 10, 11
  028e9cc  fsqrts 0, 11
  028e9d0  fmuls 11, 31, 8
  028e9d4  fdivs 8, 30, 0
  028e9d8  fsub 30, 7, 0
  028e9dc  fsub 29, 7, 0
  028e9e0  fsub 28, 7, 0
  028e9e4  fsub 27, 0, 7
  028e9e8  fsub 26, 0, 7
  028e9ec  fsub 0, 0, 7
  028e9f0  fmuls 13, 13, 8
  028e9f4  fmuls 12, 12, 8
  028e9f8  fmuls 8, 10, 8
  028e9fc  fsel 10, 30, 7, 13
  028ea00  fsel 30, 29, 7, 12
  028ea04  fsel 7, 28, 7, 8
  028ea08  fsel 29, 27, 10, 13
  028ea0c  fsel 10, 26, 30, 12
  028ea10  fsel 7, 0, 7, 8
  028ea14  fmuls 8, 5, 29
  028ea18  fmuls 30, 6, 10
  028ea1c  fmuls 28, 4, 7
  028ea20  fmuls 13, 31, 10
  028ea24  fmuls 12, 31, 7
  028ea28  fmuls 0, 31, 29
  028ea2c  fmsubs 8, 4, 10, 8
  028ea30  fmsubs 10, 5, 7, 30
  028ea34  fmsubs 7, 6, 29, 28
  028ea38  lfs 30, 0(3)
  028ea3c  lfs 29, 4(3)
  028ea40  fmuls 28, 30, 31
  028ea44  fmuls 27, 29, 0
  028ea48  lfs 26, 8(3)
  028ea4c  fmuls 25, 29, 13
  028ea50  lfs 24, 12(3)
  028ea54  fmuls 29, 29, 12
  028ea58  fmuls 30, 30, 11
  028ea5c  fmuls 26, 26, 31
  028ea60  addic 3, 3, 16
  028ea64  fmadds 27, 28, 4, 27
  028ea68  fmadds 25, 28, 5, 25
  028ea6c  fmadds 29, 28, 6, 29
  028ea70  fmadds 30, 24, 9, 30
  028ea74  fmadds 28, 10, 26, 27
  028ea78  fmadds 27, 7, 26, 25
  028ea7c  fmadds 29, 8, 26, 29
  028ea80  stfs 30, 12(4)
  028ea84  fmadds 30, 24, 1, 28
  028ea88  fmadds 28, 24, 2, 27
  028ea8c  fmadds 29, 24, 3, 29
  028ea90  stfs 30, 0(4)
  028ea94  stfs 28, 4(4)
  028ea98  stfs 29, 8(4)
  028ea9c  addic 4, 4, 16
  028eaa0  bdnz 0x28ea38
  028eaa4  lis 3, 161
  028eaa8  li 4, 0
  028eaac  addic 6, 3, 24396
  028eab0  li 5, 0
  028eab4  addic 3, 1, 176
  028eab8  li 7, 9
  028eabc  lwz 6, 28(6)
  028eac0  bl 0x72280
  028eac4  nop
  028eac8  ld 0, 432(1)
  028eacc  mtlr 0
  028ead0  lfd 24, 352(1)
  028ead4  lfd 25, 360(1)
  028ead8  lfd 26, 368(1)
  028eadc  lfd 27, 376(1)
  028eae0  lfd 28, 384(1)
  028eae4  lfd 29, 392(1)
  028eae8  lfd 30, 400(1)
  028eaec  lfd 31, 408(1)
  028eaf0  ld 29, 328(1)
  028eaf4  ld 30, 336(1)
  028eaf8  ld 31, 344(1)
  028eafc  addi 1, 1, 416
  028eb00  blr

M1511_0028eb08:   # 0x28eb08, 0x34 bytes
  028eb08  lis 3, 41
  028eb0c  lis 4, 114
  028eb10  addi 3, 3, -5372
  028eb14  lis 5, 123
  028eb18  lfs 1, 0(3)
  028eb1c  lfs 2, -3052(4)
  028eb20  addic 4, 5, -19980
  028eb24  fmuls 1, 2, 1
  028eb28  lis 3, 1
  028eb2c  lis 5, 251
  028eb30  stw 3, 72(4)
  028eb34  stfs 1, -9624(5)
  028eb38  blr

UpdateMoby_1511:   # 0x28eba8, 0x83c bytes
  028eba8  stdu 1, -448(1)
  028ebac  mflr 0
  028ebb0  std 0, 464(1)
  028ebb4  stfd 14, 304(1)
  028ebb8  stfd 15, 312(1)
  028ebbc  stfd 16, 320(1)
  028ebc0  stfd 17, 328(1)
  028ebc4  stfd 18, 336(1)
  028ebc8  stfd 19, 344(1)
  028ebcc  stfd 20, 352(1)
  028ebd0  stfd 21, 360(1)
  028ebd4  stfd 22, 368(1)
  028ebd8  stfd 23, 376(1)
  028ebdc  stfd 24, 384(1)
  028ebe0  stfd 25, 392(1)
  028ebe4  stfd 26, 400(1)
  028ebe8  stfd 27, 408(1)
  028ebec  stfd 28, 416(1)
  028ebf0  stfd 29, 424(1)
  028ebf4  stfd 30, 432(1)
  028ebf8  stfd 31, 440(1)
  028ebfc  std 31, 296(1)
  028ec00  lbz 4, 32(3)
  028ec04  std 30, 288(1)
  028ec08  ori 31, 3, 0
  028ec0c  lwz 30, 120(3)
  028ec10  std 29, 280(1)
  028ec14  std 28, 272(1)
  028ec18  std 27, 264(1)
  028ec1c  std 26, 256(1)
  028ec20  std 25, 248(1)
  028ec24  std 24, 240(1)
  028ec28  std 23, 232(1)
  028ec2c  cmpwi 4, 0
  028ec30  bf 2, 0x28ec74
  028ec34  li 3, 1
  028ec38  stb 3, 32(31)
  028ec3c  lbz 3, 101(30)
  028ec40  lbz 4, 100(30)
  028ec44  lbz 5, 102(30)
  028ec48  rlwimi 4, 3, 8, 16, 23
  028ec4c  rlwimi 4, 5, 16, 8, 15
  028ec50  oris 3, 4, 32512
  028ec54  stw 3, 144(31)
  028ec58  lbz 3, 109(30)
  028ec5c  lbz 4, 110(30)
  028ec60  slwi 3, 3, 8
  028ec64  lbz 5, 108(30)
  028ec68  rlwimi 3, 4, 16, 8, 15
  028ec6c  or 3, 3, 5
  028ec70  stw 3, 104(30)
  028ec74  lis 3, 149
  028ec78  lfs 1, 20(31)
  028ec7c  addic 3, 3, 5056
  028ec80  lfs 2, 324(3)
  028ec84  lfs 3, 320(3)
  028ec88  fsubs 1, 2, 1
  028ec8c  lfs 2, 16(31)
  028ec90  fsubs 2, 3, 2
  028ec94  lis 3, 41
  028ec98  addi 3, 3, -5312
  028ec9c  fmuls 1, 1, 1
  028eca0  fmadds 2, 2, 2, 1
  028eca4  lfs 1, 0(3)
  028eca8  fsqrts 2, 2
  028ecac  fcmpu 0, 2, 1
  028ecb0  cror 6, 1, 2
  028ecb4  bt 6, 0x28f368
  028ecb8  lis 3, 41
  028ecbc  addi 3, 3, -5312
  028ecc0  lfs 1, 4(3)
  028ecc4  fcmpu 0, 2, 1
  028ecc8  bt 0, 0x28ed04
  028eccc  lis 3, 41
  028ecd0  fsubs 31, 2, 1
  028ecd4  addi 29, 3, -5312
  028ecd8  lbz 3, 111(30)
  028ecdc  lfs 1, 8(29)
  028ece0  fmr 30, 1
  028ece4  bl 0x502730
  028ece8  nop
  028ecec  lfs 2, 12(29)
  028ecf0  fnmsubs 2, 31, 30, 2
  028ecf4  fmuls 1, 1, 2
  028ecf8  bl 0x502758
  028ecfc  nop
  028ed00  b 0x28ed08
  028ed04  lbz 3, 111(30)
  028ed08  ori 5, 3, 0
  028ed0c  lis 3, 113
  028ed10  ori 4, 31, 0
  028ed14  addic 3, 3, -22368
  028ed18  stw 5, 96(30)
  028ed1c  bl 0x6d720
  028ed20  nop
  028ed24  lis 4, 129
  028ed28  ori 3, 31, 0
  028ed2c  li 5, 0
  028ed30  bl 0x10675c
  028ed34  nop
  028ed38  li 4, 255
  028ed3c  cmpwi 3, 0
  028ed40  stb 4, 164(31)
  028ed44  bt 2, 0x28f368
  028ed48  lis 4, 123
  028ed4c  lfs 1, 224(31)
  028ed50  lfs 2, -19808(4)
  028ed54  lfs 3, 228(31)
  028ed58  fmuls 1, 1, 2
  028ed5c  fmuls 5, 3, 2
  028ed60  lfs 3, 232(31)
  028ed64  lfs 4, 16(31)
  028ed68  lfs 6, 20(31)
  028ed6c  lfs 7, 24(31)
  028ed70  fmadds 2, 3, 2, 7
  028ed74  lfs 7, 28(31)
  028ed78  fadds 4, 4, 1
  028ed7c  fadds 3, 6, 5
  028ed80  stfs 1, 128(1)
  028ed84  stfs 5, 132(1)
  028ed88  stfs 7, 140(1)
  028ed8c  stfs 2, 136(1)
  028ed90  stfs 4, 128(1)
  028ed94  stfs 3, 132(1)
  028ed98  lwz 4, 36(3)
  028ed9c  rlwinm 4, 4, 0, 8, 8
  028eda0  cmpwi 4, 0
  028eda4  bf 2, 0x28ee28
  028eda8  lfs 1, 4(3)
  028edac  lfs 5, 0(3)
  028edb0  fsubs 1, 3, 1
  028edb4  fsubs 5, 4, 5
  028edb8  lfs 6, 8(3)
  028edbc  fsubs 6, 2, 6
  028edc0  lis 4, 41
  028edc4  addi 4, 4, -5312
  028edc8  fmuls 1, 1, 1
  028edcc  fmadds 1, 5, 5, 1
  028edd0  fmadds 1, 6, 6, 1
  028edd4  fsqrts 5, 1
  028edd8  lfs 1, 16(4)
  028eddc  fcmpu 0, 5, 1
  028ede0  cror 6, 0, 2
  028ede4  bt 6, 0x28ee28
  028ede8  lwz 3, 32(3)
  028edec  lhz 4, 166(3)
  028edf0  cmpwi 4, 71
  028edf4  bf 2, 0x28f368
  028edf8  lfs 5, 20(3)
  028edfc  lfs 6, 16(3)
  028ee00  fsubs 3, 3, 5
  028ee04  fsubs 4, 4, 6
  028ee08  lfs 5, 24(3)
  028ee0c  fsubs 2, 2, 5
  028ee10  fmuls 3, 3, 3
  028ee14  fmadds 3, 4, 4, 3
  028ee18  fmadds 2, 2, 2, 3
  028ee1c  fsqrts 2, 2
  028ee20  fcmpu 0, 2, 1
  028ee24  bt 1, 0x28f368
  028ee28  li 3, 0
  028ee2c  li 4, 0
  028ee30  ori 5, 31, 0
  028ee34  bl 0x15d12c
  028ee38  nop
  028ee3c  ori 3, 31, 0
  028ee40  bl 0x29125c
  028ee44  nop
  028ee48  lis 3, 41
  028ee4c  lis 29, 114
  028ee50  addi 7, 3, -5312
  028ee54  lis 28, 161
  028ee58  lis 3, 114
  028ee5c  addic 28, 28, 23856
  028ee60  addic 26, 31, 16
  028ee64  lfs 30, 20(7)
  028ee68  addic 27, 31, 64
  028ee6c  lfs 1, -3056(29)
  028ee70  li 4, 1517
  028ee74  lfs 2, -3048(3)
  028ee78  ori 5, 26, 0
  028ee7c  fmuls 1, 1, 30
  028ee80  std 28, 112(1)
  028ee84  std 28, 120(1)
  028ee88  ori 3, 31, 0
  028ee8c  ori 6, 27, 0
  028ee90  li 8, 0
  028ee94  ori 10, 28, 0
  028ee98  fctiwz 1, 1
  028ee9c  stfd 1, 192(1)
  028eea0  lfs 31, 24(7)
  028eea4  lwz 7, 196(1)
  028eea8  fmuls 1, 2, 31
  028eeac  extsw 7, 7
  028eeb0  bl 0x11a560
  028eeb4  nop
  028eeb8  cmpwi 3, 0
  028eebc  bt 2, 0x28eec8
  028eec0  ld 4, 56(31)
  028eec4  std 4, 56(3)
  028eec8  ori 3, 31, 0
  028eecc  bl 0x11a100
  028eed0  nop
  028eed4  lis 3, 114
  028eed8  lfs 1, 200(31)
  028eedc  lis 4, 123
  028eee0  addic 10, 1, 144
  028eee4  ori 5, 26, 0
  028eee8  lfs 2, -3064(3)
  028eeec  lfs 3, -19800(4)
  028eef0  lis 3, 123
  028eef4  lfs 4, -3056(29)
  028eef8  lis 4, 114
  028eefc  fmuls 3, 2, 3
  028ef00  lfs 5, 192(31)
  028ef04  fmuls 4, 4, 30
  028ef08  lfs 6, 196(31)
  028ef0c  ori 6, 27, 0
  028ef10  lfs 7, -19796(3)
  028ef14  ori 3, 31, 0
  028ef18  li 8, 0
  028ef1c  fmuls 8, 1, 3
  028ef20  fmuls 5, 5, 3
  028ef24  fmuls 3, 6, 3
  028ef28  lfs 1, 204(31)
  028ef2c  fctiwz 4, 4
  028ef30  lfs 6, -3048(4)
  028ef34  stfs 1, 156(1)
  028ef38  li 4, 1518
  028ef3c  fmuls 1, 6, 31
  028ef40  fmadds 2, 2, 7, 8
  028ef44  stfs 8, 152(1)
  028ef48  stfs 5, 144(1)
  028ef4c  stfs 3, 148(1)
  028ef50  stfd 4, 192(1)
  028ef54  lwz 7, 196(1)
  028ef58  std 28, 112(1)
  028ef5c  std 28, 120(1)
  028ef60  extsw 7, 7
  028ef64  stfs 2, 152(1)
  028ef68  bl 0x11a560
  028ef6c  nop
  028ef70  cmpwi 3, 0
  028ef74  bt 2, 0x28ef80
  028ef78  ld 4, 56(31)
  028ef7c  std 4, 56(3)
  028ef80  lfs 1, 144(1)
  028ef84  lfs 2, 148(1)
  028ef88  lis 3, 41
  028ef8c  fneg 3, 1
  028ef90  fneg 2, 2
  028ef94  addi 3, 3, -5312
  028ef98  lfs 1, 72(31)
  028ef9c  stfs 3, 144(1)
  028efa0  stfs 2, 148(1)
  028efa4  lfs 2, 28(3)
  028efa8  bl 0x502578
  028efac  nop
  028efb0  stfs 1, 72(31)
  028efb4  lfs 1, -3056(29)
  028efb8  lis 6, 114
  028efbc  std 28, 112(1)
  028efc0  ori 3, 31, 0
  028efc4  fmuls 2, 1, 30
  028efc8  ori 5, 26, 0
  028efcc  addic 10, 1, 144
  028efd0  li 4, 1518
  028efd4  lfs 1, -3048(6)
  028efd8  li 8, 0
  028efdc  std 28, 120(1)
  028efe0  ori 6, 27, 0
  028efe4  fmuls 1, 1, 31
  028efe8  fctiwz 2, 2
  028efec  stfd 2, 192(1)
  028eff0  lwz 7, 196(1)
  028eff4  extsw 7, 7
  028eff8  bl 0x11a560
  028effc  nop
  028f000  ori 26, 3, 0
  028f004  cmpwi 26, 0
  028f008  bt 2, 0x28f014
  028f00c  ld 3, 56(31)
  028f010  std 3, 56(26)
  028f014  lis 3, 41
  028f018  li 26, 0
  028f01c  addi 3, 3, -5312
  028f020  ori 28, 26, 0
  028f024  lfs 14, 32(3)
  028f028  lfs 15, 36(3)
  028f02c  lfs 16, 40(3)
  028f030  lfs 17, 44(3)
  028f034  lfs 18, 48(3)
  028f038  lfs 19, 52(3)
  028f03c  lfs 20, 56(3)
  028f040  lfs 21, 60(3)
  028f044  lfs 22, 64(3)
  028f048  lfs 23, 68(3)
  028f04c  lfs 24, 72(3)
  028f050  lfs 25, 76(3)
  028f054  lfs 26, 80(3)
  028f058  lfs 27, 84(3)
  028f05c  lfs 28, 88(3)
  028f060  lfs 29, 12(3)
  028f064  lfs 30, 92(3)
  028f068  lfs 31, 96(3)
  028f06c  fmr 1, 14
  028f070  stfs 31, 208(1)
  028f074  fmr 2, 15
  028f078  stfs 15, 212(1)
  028f07c  bl 0xfcbe8
  028f080  nop
  028f084  fmr 31, 1
  028f088  li 3, 2
  028f08c  bl 0xfc620
  028f090  nop
  028f094  li 4, 0
  028f098  addic 5, 3, -1
  028f09c  subc 4, 4, 3
  028f0a0  extsw 5, 5
  028f0a4  cntlzw 4, 4
  028f0a8  subc 5, 5, 3
  028f0ac  sldi 4, 4, 58
  028f0b0  sradi 4, 4, 63
  028f0b4  and 4, 4, 5
  028f0b8  addc 27, 3, 4
  028f0bc  bl 0xfcc68
  028f0c0  nop
  028f0c4  fmr 15, 1
  028f0c8  stfs 17, 216(1)
  028f0cc  fmr 1, 16
  028f0d0  fmr 2, 17
  028f0d4  bl 0xfcbe8
  028f0d8  nop
  028f0dc  fmr 17, 1
  028f0e0  fmr 1, 18
  028f0e4  fmr 2, 19
  028f0e8  bl 0xfcbe8
  028f0ec  nop
  028f0f0  lis 25, 114
  028f0f4  addic 24, 1, 160
  028f0f8  fmr 2, 15
  028f0fc  fmr 3, 17
  028f100  ori 3, 24, 0
  028f104  lfs 4, -3064(25)
  028f108  fmuls 1, 1, 4
  028f10c  bl 0xfe610
  028f110  nop
  028f114  lfs 2, 128(1)
  028f118  fmr 1, 20
  028f11c  lfs 3, 132(1)
  028f120  stfs 2, 176(1)
  028f124  lfs 4, 136(1)
  028f128  fmr 2, 21
  028f12c  stfs 3, 180(1)
  028f130  lfs 3, 140(1)
  028f134  stfs 4, 184(1)
  028f138  stfs 3, 188(1)
  028f13c  bl 0xfe4f0
  028f140  nop
  028f144  lfs 2, 176(1)
  028f148  fadds 3, 2, 1
  028f14c  fmr 1, 20
  028f150  fmr 2, 21
  028f154  stfs 3, 176(1)
  028f158  bl 0xfe4f0
  028f15c  nop
  028f160  lfs 2, 180(1)
  028f164  fadds 3, 2, 1
  028f168  fmr 2, 21
  028f16c  fmr 1, 20
  028f170  stfs 3, 180(1)
  028f174  bl 0xfe4f0
  028f178  nop
  028f17c  lfs 2, -3056(29)
  028f180  addic 23, 1, 176
  028f184  lfs 3, 184(1)
  028f188  li 8, 0
  028f18c  fmuls 2, 2, 22
  028f190  ori 3, 23, 0
  028f194  fadds 4, 3, 1
  028f198  ori 9, 27, 0
  028f19c  lwz 4, 104(30)
  028f1a0  ori 10, 24, 0
  028f1a4  fmuls 1, 31, 19
  028f1a8  oris 7, 4, 32512
  028f1ac  fmr 3, 23
  028f1b0  extsw 7, 7
  028f1b4  fctiwz 5, 2
  028f1b8  fmr 2, 31
  028f1bc  stfs 4, 184(1)
  028f1c0  stfd 5, 192(1)
  028f1c4  lwz 4, 196(1)
  028f1c8  extsw 4, 4
  028f1cc  bl 0x12f8c0
  028f1d0  nop
  028f1d4  lfs 1, -3056(29)
  028f1d8  lis 7, 32639
  028f1dc  neg 9, 27
  028f1e0  fmuls 2, 31, 25
  028f1e4  fmuls 4, 1, 22
  028f1e8  ori 3, 23, 0
  028f1ec  fmuls 1, 31, 24
  028f1f0  ori 7, 7, 32639
  028f1f4  fmr 3, 23
  028f1f8  li 8, 1
  028f1fc  ori 10, 24, 0
  028f200  fctiwz 4, 4
  028f204  stfd 4, 192(1)
  028f208  lwz 4, 196(1)
  028f20c  extsw 4, 4
  028f210  bl 0x12f8c0
  028f214  nop
  028f218  fmr 1, 26
  028f21c  stw 28, 164(1)
  028f220  fmr 2, 18
  028f224  stw 28, 160(1)
  028f228  bl 0xfcbe8
  028f22c  nop
  028f230  lfs 2, -3064(25)
  028f234  fmuls 3, 1, 2
  028f238  fmr 1, 27
  028f23c  fmr 2, 28
  028f240  stfs 3, 168(1)
  028f244  bl 0xfcbe8
  028f248  nop
  028f24c  li 3, 2
  028f250  fmr 31, 1
  028f254  bl 0xfc620
  028f258  nop
  028f25c  ori 27, 3, 0
  028f260  li 3, 2
  028f264  bl 0xfc620
  028f268  nop
  028f26c  li 4, 0
  028f270  fmr 1, 14
  028f274  neg 7, 27
  028f278  fmr 2, 29
  028f27c  subc 3, 4, 3
  028f280  fmr 3, 30
  028f284  subc 4, 27, 7
  028f288  fmr 4, 31
  028f28c  cntlzw 3, 3
  028f290  lis 10, 16511
  028f294  sldi 5, 3, 58
  028f298  addic 3, 1, 128
  028f29c  sradi 5, 5, 63
  028f2a0  ori 8, 24, 0
  028f2a4  and 4, 5, 4
  028f2a8  ori 10, 10, 32639
  028f2ac  addc 7, 7, 4
  028f2b0  bl 0x126f50
  028f2b4  nop
  028f2b8  ori 27, 3, 0
  028f2bc  lfs 31, 208(1)
  028f2c0  cmpwi 27, 0
  028f2c4  lfs 15, 212(1)
  028f2c8  lfs 17, 216(1)
  028f2cc  bt 2, 0x28f350
  028f2d0  li 3, 90
  028f2d4  li 4, 120
  028f2d8  bl 0xfe484
  028f2dc  nop
  028f2e0  extsw 3, 3
  028f2e4  li 5, 2
  028f2e8  std 3, 192(1)
  028f2ec  lfs 1, -3056(29)
  028f2f0  lfd 2, 192(1)
  028f2f4  fcfid 2, 2
  028f2f8  li 3, 64
  028f2fc  li 4, 96
  028f300  frsp 2, 2
  028f304  fadds 2, 2, 31
  028f308  fmuls 1, 1, 2
  028f30c  fctiwz 1, 1
  028f310  stfd 1, 192(1)
  028f314  lwz 6, 196(1)
  028f318  stw 5, 36(27)
  028f31c  sth 6, 10(27)
  028f320  bl 0xfe484
  028f324  nop
  028f328  lhz 4, 10(27)
  028f32c  stb 3, 42(27)
  028f330  li 3, 2
  028f334  stb 4, 43(27)
  028f338  bl 0xfc620
  028f33c  nop
  028f340  cmpwi 3, 0
  028f344  bt 2, 0x28f350
  028f348  li 3, 68
  028f34c  stb 3, 3(27)
  028f350  addic 26, 26, 1
  028f354  cmpwi 26, 24
  028f358  bt 0, 0x28f06c
  028f35c  ori 3, 31, 0
  028f360  bl 0xefb38
  028f364  nop
  028f368  ld 0, 464(1)
  028f36c  mtlr 0
  028f370  lfd 14, 304(1)
  028f374  lfd 15, 312(1)
  028f378  lfd 16, 320(1)
  028f37c  lfd 17, 328(1)
  028f380  lfd 18, 336(1)
  028f384  lfd 19, 344(1)
  028f388  lfd 20, 352(1)
  028f38c  lfd 21, 360(1)
  028f390  lfd 22, 368(1)
  028f394  lfd 23, 376(1)
  028f398  lfd 24, 384(1)
  028f39c  lfd 25, 392(1)
  028f3a0  lfd 26, 400(1)
  028f3a4  lfd 27, 408(1)
  028f3a8  lfd 28, 416(1)
  028f3ac  lfd 29, 424(1)
  028f3b0  lfd 30, 432(1)
  028f3b4  lfd 31, 440(1)
  028f3b8  ld 23, 232(1)
  028f3bc  ld 24, 240(1)
  028f3c0  ld 25, 248(1)
  028f3c4  ld 26, 256(1)
  028f3c8  ld 27, 264(1)
  028f3cc  ld 28, 272(1)
  028f3d0  ld 29, 280(1)
  028f3d4  ld 30, 288(1)
  028f3d8  ld 31, 296(1)
  028f3dc  addi 1, 1, 448
  028f3e0  blr
