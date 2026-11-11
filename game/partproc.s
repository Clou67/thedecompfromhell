# game/partproc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_PARTPROC:   # 0x11e448, 0x14 bytes
  011e448  lis 3, 115
  011e44c  lis 4, 1
  011e450  addic 3, 3, -27172
  011e454  stw 4, 72(3)
  011e458  blr

UpdatePartsDebug:   # 0x11e45c, 0x11c bytes
  011e45c  stdu 1, -144(1)
  011e460  mflr 0
  011e464  std 0, 160(1)
  011e468  lis 3, 150
  011e46c  li 4, 11
  011e470  addic 3, 3, 19008
  011e474  lwz 5, 160(3)
  011e478  and 4, 5, 4
  011e47c  std 31, 136(1)
  011e480  std 30, 128(1)
  011e484  std 29, 120(1)
  011e488  cmpwi 4, 11
  011e48c  bf 2, 0x11e554
  011e490  lwz 3, 164(3)
  011e494  rlwinm 3, 3, 0, 29, 29
  011e498  cmpwi 3, 0
  011e49c  bt 2, 0x11e554
  011e4a0  lis 3, 101
  011e4a4  addic 31, 3, 12700
  011e4a8  ori 3, 31, 0
  011e4ac  bl 0x5cd098
  011e4b0  nop
  011e4b4  lis 4, 346
  011e4b8  lis 3, 101
  011e4bc  addic 3, 3, 12708
  011e4c0  lwz 4, -15568(4)
  011e4c4  extsw 4, 4
  011e4c8  bl 0x5cd098
  011e4cc  nop
  011e4d0  ori 3, 31, 0
  011e4d4  bl 0x5cd098
  011e4d8  nop
  011e4dc  lis 3, 146
  011e4e0  li 4, 129
  011e4e4  lwz 3, 29180(3)
  011e4e8  stw 4, 0(3)
  011e4ec  bl 0x11eb10
  011e4f0  nop
  011e4f4  lis 29, 4352
  011e4f8  lis 31, 101
  011e4fc  li 30, 0
  011e500  ori 29, 29, 16384
  011e504  addic 31, 31, 12732
  011e508  lwz 3, 0(29)
  011e50c  cmpwi 3, 0
  011e510  bt 2, 0x11e538
  011e514  lwz 4, 4(29)
  011e518  extsw 5, 3
  011e51c  slwi 4, 4, 5
  011e520  divw 6, 4, 3
  011e524  extsw 6, 6
  011e528  ori 3, 31, 0
  011e52c  ori 4, 30, 0
  011e530  bl 0x5cd098
  011e534  nop
  011e538  addic 30, 30, 1
  011e53c  addic 29, 29, 8
  011e540  extsw 30, 30
  011e544  clrldi 29, 29, 32
  011e548  cmpwi 30, 128
  011e54c  bt 0, 0x11e508
  011e550  b 0x11e55c
  011e554  bl 0x11e8a0
  011e558  nop
  011e55c  ld 0, 160(1)
  011e560  mtlr 0
  011e564  ld 29, 120(1)
  011e568  ld 30, 128(1)
  011e56c  ld 31, 136(1)
  011e570  addi 1, 1, 144
  011e574  blr

CreatePartEx:   # 0x11e580, 0x148 bytes
  011e580  stdu 1, -80(1)
  011e584  std 30, 64(1)
  011e588  lis 9, 165
  011e58c  lis 30, 165
  011e590  addic 30, 30, 8192
  011e594  lwz 8, 8132(9)
  011e598  std 31, 72(1)
  011e59c  std 29, 56(1)
  011e5a0  cmpwi 8, 4096
  011e5a4  bt 0, 0x11e5b0
  011e5a8  li 3, 0
  011e5ac  b 0x11e6b4
  011e5b0  lis 5, 165
  011e5b4  addic 4, 8, 1
  011e5b8  srawi 6, 8, 3
  011e5bc  clrlwi 7, 8, 29
  011e5c0  li 31, 1
  011e5c4  lwz 10, 8140(5)
  011e5c8  lis 11, 165
  011e5cc  stw 4, 8132(9)
  011e5d0  slw 7, 31, 7
  011e5d4  addic 10, 10, 1
  011e5d8  stw 10, 8140(5)
  011e5dc  lbzx 5, 30, 6
  011e5e0  or 5, 5, 7
  011e5e4  stbx 5, 30, 6
  011e5e8  lwz 7, 8136(11)
  011e5ec  cmpw 4, 7
  011e5f0  bt 1, 0x11e650
  011e5f4  rlwinm 4, 4, 0, 0, 28
  011e5f8  cmpwi 4, 4096
  011e5fc  srawi 12, 4, 3
  011e600  stw 4, 8132(9)
  011e604  bf 0, 0x11e650
  011e608  ori 10, 31, 0
  011e60c  ori 5, 4, 0
  011e610  lbzx 11, 30, 12
  011e614  ori 6, 10, 0
  011e618  and 29, 6, 11
  011e61c  cmpwi 29, 0
  011e620  bt 2, 0x11e650
  011e624  addic 5, 5, 1
  011e628  rlwinm 4, 6, 1, 24, 30
  011e62c  slwi 10, 10, 1
  011e630  cmpwi 4, 0
  011e634  ori 4, 5, 0
  011e638  stw 5, 8132(9)
  011e63c  bf 2, 0x11e614
  011e640  addic 12, 12, 1
  011e644  cmpwi 5, 4096
  011e648  extsw 12, 12
  011e64c  bt 0, 0x11e608
  011e650  addic 4, 4, -1
  011e654  extsw 5, 7
  011e658  vspltisw 2, 0
  011e65c  extsw 9, 4
  011e660  lis 6, 165
  011e664  subc 5, 9, 5
  011e668  subc 7, 7, 4
  011e66c  sradi 5, 5, 63
  011e670  slwi 8, 8, 6
  011e674  lwz 6, 8128(6)
  011e678  and 5, 5, 7
  011e67c  lis 9, 165
  011e680  addc 6, 6, 8
  011e684  addc 4, 4, 5
  011e688  clrldi 6, 6, 32
  011e68c  li 7, 16
  011e690  li 5, 32
  011e694  stw 4, 8136(9)
  011e698  li 4, 48
  011e69c  stvx 2, 0, 6
  011e6a0  stvx 2, 7, 6
  011e6a4  stvx 2, 5, 6
  011e6a8  stvx 2, 4, 6
  011e6ac  stb 3, 0(6)
  011e6b0  ori 3, 6, 0
  011e6b4  ld 29, 56(1)
  011e6b8  ld 30, 64(1)
  011e6bc  ld 31, 72(1)
  011e6c0  addi 1, 1, 80
  011e6c4  blr

CreatePart:   # 0x11e6c8, 0x24 bytes
  011e6c8  stdu 1, -112(1)
  011e6cc  mflr 0
  011e6d0  std 0, 128(1)
  011e6d4  li 4, 0
  011e6d8  bl 0x11e580
  011e6dc  ld 0, 128(1)
  011e6e0  mtlr 0
  011e6e4  addi 1, 1, 112
  011e6e8  blr

DeletePart:   # 0x11e6ec, 0x104 bytes
  011e6ec  lis 4, 165
  011e6f0  lis 7, 165
  011e6f4  lis 6, 165
  011e6f8  li 8, 1
  011e6fc  addic 6, 6, 8192
  011e700  lwz 4, 8128(4)
  011e704  lwz 9, 8140(7)
  011e708  subc 4, 3, 4
  011e70c  srawi 5, 4, 6
  011e710  addze 5, 5
  011e714  addic 4, 9, -1
  011e718  clrlwi 9, 5, 29
  011e71c  srawi 10, 5, 3
  011e720  slw 8, 8, 9
  011e724  stw 4, 8140(7)
  011e728  xori 7, 8, 255
  011e72c  lis 4, 165
  011e730  lbzx 8, 6, 10
  011e734  and 7, 8, 7
  011e738  stbx 7, 6, 10
  011e73c  lwz 7, 8136(4)
  011e740  cmpw 7, 5
  011e744  bf 2, 0x11e7bc
  011e748  addic 7, 7, -1
  011e74c  cmpwi 7, 0
  011e750  stw 7, 8136(4)
  011e754  bt 0, 0x11e7bc
  011e758  srawi 10, 7, 3
  011e75c  clrlwi 8, 7, 29
  011e760  li 9, 1
  011e764  slw 8, 9, 8
  011e768  lbzx 9, 6, 10
  011e76c  b 0x11e778
  011e770  li 8, 128
  011e774  lbzx 9, 6, 10
  011e778  cmpwi 8, 0
  011e77c  ori 11, 7, 0
  011e780  bt 2, 0x11e7a8
  011e784  and 11, 8, 9
  011e788  cmpwi 11, 0
  011e78c  bf 2, 0x11e7bc
  011e790  addic 7, 7, -1
  011e794  srawi 8, 8, 1
  011e798  ori 11, 7, 0
  011e79c  cmpwi 8, 0
  011e7a0  stw 7, 8136(4)
  011e7a4  bf 2, 0x11e784
  011e7a8  ori 7, 11, 0
  011e7ac  addic 10, 10, -1
  011e7b0  cmpwi 7, 0
  011e7b4  extsw 10, 10
  011e7b8  bf 0, 0x11e770
  011e7bc  li 4, 128
  011e7c0  lis 6, 165
  011e7c4  extsw 7, 5
  011e7c8  stb 4, 1(3)
  011e7cc  lwz 3, 8132(6)
  011e7d0  extsw 4, 3
  011e7d4  subc 3, 3, 5
  011e7d8  subc 4, 4, 7
  011e7dc  sradi 4, 4, 63
  011e7e0  and 3, 4, 3
  011e7e4  addc 3, 5, 3
  011e7e8  stw 3, 8132(6)
  011e7ec  blr

CountActiveParts:   # 0x11e7f0, 0x64 bytes
  011e7f0  lis 3, 165
  011e7f4  li 4, 0
  011e7f8  lis 7, 165
  011e7fc  ori 5, 4, 0
  011e800  addic 7, 7, 8192
  011e804  lwz 6, 8136(3)
  011e808  srawi 6, 6, 3
  011e80c  cmpwi 6, 0
  011e810  bf 1, 0x11e84c
  011e814  lis 3, 115
  011e818  addic 3, 3, 21872
  011e81c  addic 8, 4, 1
  011e820  lbzx 4, 7, 4
  011e824  clrlwi 9, 4, 28
  011e828  srwi 10, 4, 4
  011e82c  extsw 4, 8
  011e830  cmpw 4, 6
  011e834  lbzx 8, 3, 9
  011e838  lbzx 9, 3, 10
  011e83c  addc 5, 5, 8
  011e840  addc 5, 5, 9
  011e844  extsw 5, 5
  011e848  bt 0, 0x11e81c
  011e84c  ori 3, 5, 0
  011e850  blr

UpdateParts:   # 0x11e8a0, 0x270 bytes
  011e8a0  stdu 1, -144(1)
  011e8a4  mflr 0
  011e8a8  std 0, 160(1)
  011e8ac  lis 3, 144
  011e8b0  li 4, 160
  011e8b4  li 6, 176
  011e8b8  lis 5, 18
  011e8bc  li 8, 192
  011e8c0  lwz 3, 11932(3)
  011e8c4  li 7, 208
  011e8c8  addi 5, 5, -6048
  011e8cc  li 10, 16
  011e8d0  lis 9, 165
  011e8d4  li 11, 11072
  011e8d8  lvx 2, 4, 3
  011e8dc  li 4, 20
  011e8e0  lvx 3, 6, 3
  011e8e4  lvx 4, 8, 3
  011e8e8  vspltw 6, 2, 0
  011e8ec  addic 6, 9, 11072
  011e8f0  lvx 5, 7, 3
  011e8f4  li 8, 8
  011e8f8  vspltw 10, 3, 0
  011e8fc  li 7, 4
  011e900  lvx 7, 0, 5
  011e904  vspltw 11, 4, 0
  011e908  <unknown>
  011e90c  <unknown>
  011e910  li 10, 0
  011e914  stvewx 6, 11, 9
  011e918  li 4, 32
  011e91c  stvewx 10, 7, 6
  011e920  stvewx 11, 8, 6
  011e924  stw 10, 12(6)
  011e928  lvx 6, 4, 5
  011e92c  vperm 10, 2, 4, 6
  011e930  vperm 11, 3, 5, 6
  011e934  vperm 12, 3, 4, 6
  011e938  vperm 13, 5, 2, 6
  011e93c  vperm 0, 4, 5, 6
  011e940  vmrghw 10, 10, 11
  011e944  vspltisw 11, 0
  011e948  vperm 12, 12, 13, 7
  011e94c  vperm 6, 2, 3, 6
  011e950  vmaddfp 13, 10, 10, 11
  011e954  vspltw 8, 8, 0
  011e958  vperm 6, 0, 6, 7
  011e95c  vspltw 9, 9, 0
  011e960  lis 4, 165
  011e964  li 6, 11088
  011e968  addic 9, 4, 11088
  011e96c  li 11, 48
  011e970  vmaddfp 12, 12, 12, 13
  011e974  std 30, 128(1)
  011e978  li 12, 11120
  011e97c  lis 30, 165
  011e980  vmaddfp 6, 6, 6, 12
  011e984  vspltw 6, 6, 0
  011e988  vrsqrtefp 12, 6
  011e98c  vmaddfp 6, 12, 6, 11
  011e990  vmaddfp 13, 12, 8, 11
  011e994  vnmsubfp 6, 12, 6, 9
  011e998  vmaddfp 6, 6, 13, 12
  011e99c  vcmpeqfp 13, 6, 6
  011e9a0  vsel 6, 12, 6, 13
  011e9a4  vmaddfp 6, 10, 6, 11
  011e9a8  vspltw 10, 6, 0
  011e9ac  vspltw 12, 6, 1
  011e9b0  vspltw 6, 6, 2
  011e9b4  stvewx 10, 6, 4
  011e9b8  stvewx 12, 7, 9
  011e9bc  stvewx 6, 8, 9
  011e9c0  stw 10, 12(9)
  011e9c4  lvx 6, 11, 5
  011e9c8  vperm 10, 2, 4, 6
  011e9cc  vperm 12, 3, 5, 6
  011e9d0  vperm 13, 3, 4, 6
  011e9d4  vperm 0, 5, 2, 6
  011e9d8  vperm 2, 2, 3, 6
  011e9dc  vmrghw 10, 10, 12
  011e9e0  vperm 4, 4, 5, 6
  011e9e4  vperm 12, 13, 0, 7
  011e9e8  vmaddfp 13, 10, 10, 11
  011e9ec  vperm 2, 4, 2, 7
  011e9f0  lis 4, 165
  011e9f4  li 5, 11104
  011e9f8  addic 9, 4, 11104
  011e9fc  li 6, 32
  011ea00  std 31, 136(1)
  011ea04  lis 11, 165
  011ea08  addic 31, 11, 11120
  011ea0c  vmaddfp 3, 12, 12, 13
  011ea10  vmaddfp 2, 2, 2, 3
  011ea14  vspltw 2, 2, 0
  011ea18  vrsqrtefp 3, 2
  011ea1c  vmaddfp 2, 3, 2, 11
  011ea20  vmaddfp 4, 3, 8, 11
  011ea24  vnmsubfp 2, 3, 2, 9
  011ea28  vmaddfp 2, 2, 4, 3
  011ea2c  vcmpeqfp 4, 2, 2
  011ea30  vsel 2, 3, 2, 4
  011ea34  vmaddfp 2, 10, 2, 11
  011ea38  vspltw 3, 2, 0
  011ea3c  vspltw 4, 2, 1
  011ea40  vspltw 2, 2, 2
  011ea44  stvewx 3, 5, 4
  011ea48  stvewx 4, 7, 9
  011ea4c  stvewx 2, 8, 9
  011ea50  stw 10, 12(9)
  011ea54  lvx 2, 6, 3
  011ea58  vspltw 3, 2, 0
  011ea5c  vspltw 4, 2, 1
  011ea60  vspltw 2, 2, 2
  011ea64  stvewx 3, 12, 11
  011ea68  stvewx 4, 7, 31
  011ea6c  stvewx 2, 8, 31
  011ea70  stw 10, 12(31)
  011ea74  lwz 3, 8136(30)
  011ea78  std 29, 120(1)
  011ea7c  cmpwi 3, 0
  011ea80  bt 0, 0x11eaf4
  011ea84  li 30, 0
  011ea88  lis 31, 165
  011ea8c  ori 29, 30, 0
  011ea90  addic 31, 31, 9732
  011ea94  lis 4, 165
  011ea98  lwz 4, 8128(4)
  011ea9c  addc 4, 4, 30
  011eaa0  clrldi 4, 4, 32
  011eaa4  lbz 5, 1(4)
  011eaa8  extsb 5, 5
  011eaac  cmpwi 5, 0
  011eab0  bt 0, 0x11eae4
  011eab4  ori 3, 4, 0
  011eab8  lbz 4, 0(4)
  011eabc  std 2, 40(1)
  011eac0  slwi 4, 4, 2
  011eac4  lwzx 4, 31, 4
  011eac8  lwz 5, 0(4)
  011eacc  lwz 2, 4(4)
  011ead0  mtctr 5
  011ead4  bcctrl 20, 30
  011ead8  lis 3, 165
  011eadc  ld 2, 40(1)
  011eae0  lwz 3, 8136(3)
  011eae4  addic 29, 29, 1
  011eae8  addic 30, 30, 64
  011eaec  cmpw 29, 3
  011eaf0  bf 1, 0x11ea94
  011eaf4  ld 0, 160(1)
  011eaf8  mtlr 0
  011eafc  ld 29, 120(1)
  011eb00  ld 30, 128(1)
  011eb04  ld 31, 136(1)
  011eb08  addi 1, 1, 144
  011eb0c  blr

UpdateParts_NotUsed:   # 0x11eb10, 0xb4 bytes
  011eb10  stdu 1, -144(1)
  011eb14  mflr 0
  011eb18  std 0, 160(1)
  011eb1c  std 29, 120(1)
  011eb20  lis 3, 165
  011eb24  li 29, 0
  011eb28  lwz 3, 8136(3)
  011eb2c  std 31, 136(1)
  011eb30  std 30, 128(1)
  011eb34  cmpwi 3, 0
  011eb38  bt 0, 0x11eba8
  011eb3c  lis 31, 165
  011eb40  ori 30, 29, 0
  011eb44  addic 31, 31, 9732
  011eb48  lis 4, 165
  011eb4c  lwz 4, 8128(4)
  011eb50  addc 4, 4, 30
  011eb54  clrldi 4, 4, 32
  011eb58  lbz 5, 1(4)
  011eb5c  extsb 5, 5
  011eb60  cmpwi 5, 0
  011eb64  bt 0, 0x11eb98
  011eb68  ori 3, 4, 0
  011eb6c  lbz 4, 0(4)
  011eb70  std 2, 40(1)
  011eb74  slwi 4, 4, 2
  011eb78  lwzx 4, 31, 4
  011eb7c  lwz 5, 0(4)
  011eb80  lwz 2, 4(4)
  011eb84  mtctr 5
  011eb88  bcctrl 20, 30
  011eb8c  lis 3, 165
  011eb90  ld 2, 40(1)
  011eb94  lwz 3, 8136(3)
  011eb98  addic 29, 29, 1
  011eb9c  addic 30, 30, 64
  011eba0  cmpw 29, 3
  011eba4  bf 1, 0x11eb48
  011eba8  ld 0, 160(1)
  011ebac  mtlr 0
  011ebb0  ld 29, 120(1)
  011ebb4  ld 30, 128(1)
  011ebb8  ld 31, 136(1)
  011ebbc  addi 1, 1, 144
  011ebc0  blr

???_DrawParts_DepthPass:   # 0x11ebc4, 0x2f4 bytes
  011ebc4  stdu 1, -144(1)
  011ebc8  mflr 0
  011ebcc  std 0, 160(1)
  011ebd0  std 30, 128(1)
  011ebd4  ori 30, 3, 0
  011ebd8  std 29, 120(1)
  011ebdc  lis 3, 144
  011ebe0  lwz 29, 0(4)
  011ebe4  lis 5, 165
  011ebe8  std 31, 136(1)
  011ebec  sldi 6, 30, 5
  011ebf0  addic 31, 3, -23532
  011ebf4  addc 3, 6, 6
  011ebf8  addc 6, 6, 3
  011ebfc  lwz 3, 11136(5)
  011ec00  addc 5, 29, 6
  011ec04  lwz 31, 36(31)
  011ec08  cmpwi 3, 0
  011ec0c  stw 5, 0(4)
  011ec10  bt 2, 0x11ec24
  011ec14  extsw 4, 3
  011ec18  ori 3, 31, 0
  011ec1c  bl 0x4d5fe4
  011ec20  nop
  011ec24  lis 3, 28
  011ec28  lis 4, 165
  011ec2c  lwz 5, 8(31)
  011ec30  ori 3, 3, 6656
  011ec34  lis 6, 1
  011ec38  lwz 4, 11140(4)
  011ec3c  stw 3, 0(5)
  011ec40  lwz 3, 8(31)
  011ec44  lwz 5, 0(4)
  011ec48  stw 5, 4(3)
  011ec4c  lwz 5, 8(31)
  011ec50  ori 3, 6, 771
  011ec54  lwz 6, 4(4)
  011ec58  stw 6, 8(5)
  011ec5c  lwz 5, 8(31)
  011ec60  lis 6, 4
  011ec64  ori 6, 6, 6208
  011ec68  stw 3, 12(5)
  011ec6c  lwz 3, 8(31)
  011ec70  lwz 5, 12(4)
  011ec74  lis 9, 4
  011ec78  stw 5, 16(3)
  011ec7c  lwz 3, 8(31)
  011ec80  lwz 5, 16(4)
  011ec84  stw 5, 20(3)
  011ec88  lwz 3, 8(31)
  011ec8c  lwz 5, 20(4)
  011ec90  stw 5, 24(3)
  011ec94  lwz 3, 8(31)
  011ec98  lwz 5, 24(4)
  011ec9c  stw 5, 28(3)
  011eca0  lwz 3, 8(31)
  011eca4  lis 5, 144
  011eca8  stw 6, 32(3)
  011ecac  lwz 3, 8(31)
  011ecb0  lwz 4, 28(4)
  011ecb4  lis 6, 4
  011ecb8  stw 4, 36(3)
  011ecbc  lwz 3, 8(31)
  011ecc0  addic 4, 3, 40
  011ecc4  stw 4, 8(31)
  011ecc8  lwz 5, -23196(5)
  011eccc  ori 4, 6, 5760
  011ecd0  lis 6, -32768
  011ecd4  lwz 5, 1192(5)
  011ecd8  stw 4, 40(3)
  011ecdc  subc 3, 29, 5
  011ece0  lwz 8, 8(31)
  011ece4  lis 5, 4
  011ece8  or 4, 3, 6
  011ecec  ori 5, 5, 5764
  011ecf0  addic 7, 3, 12
  011ecf4  addic 3, 3, 20
  011ecf8  stw 4, 4(8)
  011ecfc  or 7, 7, 6
  011ed00  lwz 4, 8(31)
  011ed04  or 3, 3, 6
  011ed08  addic 8, 4, 8
  011ed0c  stw 8, 8(31)
  011ed10  stw 5, 8(4)
  011ed14  lis 5, 16396
  011ed18  lis 4, 4
  011ed1c  ori 6, 5, 5908
  011ed20  lwz 5, 8(31)
  011ed24  ori 4, 4, 5772
  011ed28  stw 7, 4(5)
  011ed2c  lwz 5, 8(31)
  011ed30  addic 7, 5, 8
  011ed34  stw 7, 8(31)
  011ed38  sldi 7, 30, 2
  011ed3c  stw 4, 8(5)
  011ed40  li 4, 0
  011ed44  addic 5, 7, -256
  011ed48  srawi 8, 5, 31
  011ed4c  and 5, 5, 8
  011ed50  ori 8, 9, 6152
  011ed54  lwz 9, 8(31)
  011ed58  addic 5, 5, 256
  011ed5c  cmpwi 5, 0
  011ed60  stw 3, 4(9)
  011ed64  lwz 3, 8(31)
  011ed68  addic 9, 3, 8
  011ed6c  stw 9, 8(31)
  011ed70  stw 6, 8(3)
  011ed74  lwz 10, 8(31)
  011ed78  subc 3, 7, 5
  011ed7c  li 7, 8
  011ed80  srawi 6, 3, 31
  011ed84  stw 4, 4(10)
  011ed88  lwz 10, 8(31)
  011ed8c  not 6, 6
  011ed90  and 3, 3, 6
  011ed94  cntlzw 6, 5
  011ed98  rlwinm 30, 3, 0, 0, 23
  011ed9c  stw 4, 8(10)
  011eda0  lwz 10, 8(31)
  011eda4  subc 30, 3, 30
  011eda8  rlwinm 6, 6, 27, 31, 31
  011edac  cntlzw 9, 30
  011edb0  srwi 3, 3, 8
  011edb4  rlwinm 9, 9, 27, 31, 31
  011edb8  stw 4, 12(10)
  011edbc  xori 6, 6, 1
  011edc0  lwz 10, 8(31)
  011edc4  xori 9, 9, 1
  011edc8  cmpwi 1, 30, 0
  011edcc  addc 9, 3, 9
  011edd0  addc 6, 9, 6
  011edd4  stw 8, 16(10)
  011edd8  lwz 8, 8(31)
  011eddc  slwi 6, 6, 18
  011ede0  ori 6, 6, 6164
  011ede4  oris 6, 6, 16384
  011ede8  stw 7, 20(8)
  011edec  lwz 7, 8(31)
  011edf0  addic 8, 7, 28
  011edf4  stw 8, 8(31)
  011edf8  stw 6, 24(7)
  011edfc  bt 2, 0x11ee20
  011ee00  slwi 4, 5, 24
  011ee04  lis 6, 256
  011ee08  subc 6, 4, 6
  011ee0c  ori 4, 5, 0
  011ee10  lwz 5, 8(31)
  011ee14  addic 7, 5, 4
  011ee18  stw 7, 8(31)
  011ee1c  stw 6, 0(5)
  011ee20  cmpwi 3, 0
  011ee24  bt 2, 0x11ee50
  011ee28  lis 5, -256
  011ee2c  lwz 7, 8(31)
  011ee30  or 6, 4, 5
  011ee34  addic 8, 7, 4
  011ee38  addic 3, 3, -1
  011ee3c  addic 4, 4, 256
  011ee40  cmpwi 3, 0
  011ee44  stw 8, 8(31)
  011ee48  stw 6, 0(7)
  011ee4c  bt 1, 0x11ee2c
  011ee50  bt 6, 0x11ee74
  011ee54  slwi 3, 30, 24
  011ee58  lis 5, 256
  011ee5c  subc 3, 3, 5
  011ee60  lwz 5, 8(31)
  011ee64  or 3, 4, 3
  011ee68  addic 4, 5, 4
  011ee6c  stw 4, 8(31)
  011ee70  stw 3, 0(5)
  011ee74  lis 3, 4
  011ee78  lwz 5, 8(31)
  011ee7c  li 4, 0
  011ee80  ori 3, 3, 6152
  011ee84  stw 3, 0(5)
  011ee88  lwz 3, 8(31)
  011ee8c  stw 4, 4(3)
  011ee90  lwz 3, 8(31)
  011ee94  addic 3, 3, 8
  011ee98  stw 3, 8(31)
  011ee9c  ld 0, 160(1)
  011eea0  mtlr 0
  011eea4  ld 29, 120(1)
  011eea8  ld 30, 128(1)
  011eeac  ld 31, 136(1)
  011eeb0  addi 1, 1, 144
  011eeb4  blr

DrawParts:   # 0x11ef18, 0x9f0 bytes
  011ef18  stdu 1, -352(1)
  011ef1c  mflr 0
  011ef20  std 0, 368(1)
  011ef24  stfd 23, 280(1)
  011ef28  stfd 24, 288(1)
  011ef2c  stfd 25, 296(1)
  011ef30  stfd 26, 304(1)
  011ef34  stfd 27, 312(1)
  011ef38  stfd 28, 320(1)
  011ef3c  stfd 29, 328(1)
  011ef40  stfd 30, 336(1)
  011ef44  stfd 31, 344(1)
  011ef48  std 25, 224(1)
  011ef4c  lis 25, 165
  011ef50  lis 3, 144
  011ef54  std 31, 272(1)
  011ef58  lis 4, 144
  011ef5c  addic 31, 3, -23532
  011ef60  lis 3, 18
  011ef64  std 29, 256(1)
  011ef68  lwz 5, 8136(25)
  011ef6c  addi 29, 3, -4416
  011ef70  slwi 3, 5, 2
  011ef74  lwz 4, -23488(4)
  011ef78  lwz 31, 36(31)
  011ef7c  li 5, 16
  011ef80  addic 3, 3, 4
  011ef84  sldi 6, 3, 3
  011ef88  ori 3, 4, 0
  011ef8c  addc 7, 6, 6
  011ef90  addc 4, 6, 7
  011ef94  std 30, 264(1)
  011ef98  std 28, 248(1)
  011ef9c  std 27, 240(1)
  011efa0  std 26, 232(1)
  011efa4  std 24, 216(1)
  011efa8  std 23, 208(1)
  011efac  std 22, 200(1)
  011efb0  extsw 4, 4
  011efb4  bl 0x4fe098
  011efb8  nop
  011efbc  lis 6, 144
  011efc0  stw 3, 176(1)
  011efc4  ori 30, 3, 0
  011efc8  ori 4, 31, 0
  011efcc  li 5, 5
  011efd0  lwz 28, -23196(6)
  011efd4  ori 3, 28, 0
  011efd8  bl 0x4d83ec
  011efdc  nop
  011efe0  ori 4, 31, 0
  011efe4  ori 3, 28, 0
  011efe8  li 5, 6
  011efec  bl 0x4d82b8
  011eff0  nop
  011eff4  lis 4, 4
  011eff8  lwz 3, 8(31)
  011effc  li 5, 6194
  011f000  ori 4, 4, 5952
  011f004  li 7, 16
  011f008  li 10, 48
  011f00c  stw 4, 0(3)
  011f010  lwz 3, 8(31)
  011f014  li 6, 112
  011f018  li 8, 128
  011f01c  li 11, 160
  011f020  stw 5, 4(3)
  011f024  lwz 3, 8(31)
  011f028  lis 5, 4
  011f02c  addic 4, 3, 8
  011f030  li 28, 4
  011f034  li 27, 8
  011f038  stw 4, 8(31)
  011f03c  ori 4, 5, 5956
  011f040  li 5, 6178
  011f044  mtctr 27
  011f048  stw 4, 8(3)
  011f04c  lwz 9, 8(31)
  011f050  lis 3, 4
  011f054  li 4, 6212
  011f058  ori 3, 3, 5964
  011f05c  stw 5, 4(9)
  011f060  lwz 5, 8(31)
  011f064  addic 9, 5, 8
  011f068  stw 9, 8(31)
  011f06c  stw 3, 8(5)
  011f070  li 9, 144
  011f074  lwz 26, 8(31)
  011f078  li 5, 32
  011f07c  lis 3, 68
  011f080  ori 12, 3, 7932
  011f084  addic 3, 1, 112
  011f088  stw 4, 4(26)
  011f08c  lwz 4, 8(31)
  011f090  addic 26, 4, 8
  011f094  stw 26, 8(31)
  011f098  lvx 2, 0, 29
  011f09c  lvx 3, 7, 29
  011f0a0  lvx 4, 5, 29
  011f0a4  lvx 5, 10, 29
  011f0a8  stvx 2, 6, 1
  011f0ac  stvx 3, 8, 1
  011f0b0  li 29, 0
  011f0b4  stvx 4, 9, 1
  011f0b8  stvx 5, 11, 1
  011f0bc  stw 12, 8(4)
  011f0c0  lwz 4, 8(31)
  011f0c4  stw 28, 4(4)
  011f0c8  lwz 4, 8(31)
  011f0cc  addic 4, 4, 8
  011f0d0  stw 4, 8(31)
  011f0d4  lwz 5, 0(3)
  011f0d8  stw 5, 0(4)
  011f0dc  lwz 4, 8(31)
  011f0e0  addic 5, 4, 4
  011f0e4  stw 5, 8(31)
  011f0e8  lwz 5, 4(3)
  011f0ec  addic 3, 3, 8
  011f0f0  stw 5, 4(4)
  011f0f4  lwz 4, 8(31)
  011f0f8  addic 4, 4, 4
  011f0fc  stw 4, 8(31)
  011f100  bdnz 0x11f0d4
  011f104  lwz 3, 8136(25)
  011f108  ori 28, 29, 0
  011f10c  cmpwi 3, 0
  011f110  bt 0, 0x11f820
  011f114  ori 24, 30, 0
  011f118  ori 23, 29, 0
  011f11c  lis 3, 165
  011f120  lwz 3, 8128(3)
  011f124  addc 27, 3, 23
  011f128  clrldi 27, 27, 32
  011f12c  lbz 3, 1(27)
  011f130  extsb 4, 3
  011f134  cmpwi 1, 3, 3
  011f138  cmpwi 4, 0
  011f13c  bt 0, 0x11f80c
  011f140  clrlwi 3, 3, 30
  011f144  cmpwi 3, 1
  011f148  cmpwi 6, 3, 3
  011f14c  cmpwi 7, 3, -1
  011f150  bt 1, 0x11f15c
  011f154  bf 29, 0x11f80c
  011f158  b 0x11f164
  011f15c  bf 25, 0x11f584
  011f160  b 0x11f80c
  011f164  lis 3, 18
  011f168  lfs 31, 12(27)
  011f16c  lis 4, 162
  011f170  addi 5, 3, -4416
  011f174  ori 3, 29, 0
  011f178  addic 4, 4, 17832
  011f17c  lfs 1, 64(5)
  011f180  lfs 30, 16(27)
  011f184  lfs 29, 20(27)
  011f188  fmuls 31, 31, 1
  011f18c  lfs 28, 24(27)
  011f190  lfs 26, 4(5)
  011f194  lfs 1, 0(4)
  011f198  lfs 2, 12(4)
  011f19c  lfs 3, 8(4)
  011f1a0  fmadds 1, 1, 30, 2
  011f1a4  lfs 2, 4(4)
  011f1a8  fmadds 1, 3, 28, 1
  011f1ac  fmadds 1, 2, 29, 1
  011f1b0  fadds 1, 1, 31
  011f1b4  fcmpu 0, 1, 26
  011f1b8  bt 0, 0x11f80c
  011f1bc  addic 3, 3, 1
  011f1c0  addic 4, 4, 16
  011f1c4  cmpwi 3, 6
  011f1c8  bt 0, 0x11f194
  011f1cc  lis 3, 144
  011f1d0  lbz 3, -23220(3)
  011f1d4  cmpwi 3, 0
  011f1d8  bf 2, 0x11f218
  011f1dc  lis 3, 18
  011f1e0  addi 3, 3, -4416
  011f1e4  lfs 1, 68(3)
  011f1e8  fcmpu 0, 31, 1
  011f1ec  cror 6, 0, 2
  011f1f0  bt 6, 0x11f218
  011f1f4  lis 3, 18
  011f1f8  addi 3, 3, -4416
  011f1fc  lfs 2, 72(3)
  011f200  lfs 3, 76(3)
  011f204  fmuls 31, 31, 2
  011f208  fsub 2, 31, 1
  011f20c  fsel 31, 2, 31, 1
  011f210  fmuls 1, 31, 3
  011f214  stfs 1, 12(27)
  011f218  lis 3, 161
  011f21c  ori 22, 27, 0
  011f220  addic 3, 3, 24396
  011f224  lbz 27, 3(22)
  011f228  lwz 26, 28(3)
  011f22c  lbz 4, 2(22)
  011f230  ori 3, 4, 0
  011f234  bl 0x6d70c
  011f238  nop
  011f23c  lwz 4, 4(22)
  011f240  lis 5, 18
  011f244  lis 7, 16256
  011f248  rlwinm 6, 4, 8, 8, 15
  011f24c  rlwimi 6, 4, 24, 0, 7
  011f250  rlwimi 6, 4, 24, 16, 23
  011f254  rlwimi 6, 4, 8, 24, 31
  011f258  addi 4, 5, -4416
  011f25c  stw 6, 92(30)
  011f260  stw 6, 68(30)
  011f264  stw 6, 44(30)
  011f268  stw 6, 20(30)
  011f26c  lfs 27, 0(4)
  011f270  stw 7, 36(30)
  011f274  stw 7, 40(30)
  011f278  stw 7, 12(30)
  011f27c  stw 29, 16(30)
  011f280  stw 29, 60(30)
  011f284  stw 7, 64(30)
  011f288  stw 29, 84(30)
  011f28c  stw 29, 88(30)
  011f290  lbz 5, 8(22)
  011f294  addic 5, 5, 32
  011f298  extsw 5, 5
  011f29c  std 5, 184(1)
  011f2a0  sldi 5, 3, 5
  011f2a4  sldi 3, 3, 2
  011f2a8  lfs 1, 80(4)
  011f2ac  lfs 2, 84(4)
  011f2b0  addc 3, 5, 3
  011f2b4  addc 26, 26, 3
  011f2b8  lbz 3, 1(22)
  011f2bc  lfd 3, 184(1)
  011f2c0  cmpwi 3, 0
  011f2c4  fcfid 3, 3
  011f2c8  frsp 3, 3
  011f2cc  fmuls 3, 3, 1
  011f2d0  fmadds 1, 3, 2, 1
  011f2d4  bf 2, 0x11f35c
  011f2d8  lis 3, 18
  011f2dc  lis 4, 165
  011f2e0  addi 3, 3, -4416
  011f2e4  lfs 2, 68(3)
  011f2e8  addic 3, 4, 11104
  011f2ec  fmuls 24, 1, 2
  011f2f0  lfs 26, 11104(4)
  011f2f4  li 4, 0
  011f2f8  lfs 27, 4(3)
  011f2fc  lfs 25, 8(3)
  011f300  fmr 1, 24
  011f304  bl 0x5dd914
  011f308  nop
  011f30c  fmr 23, 1
  011f310  li 4, 1
  011f314  fmr 1, 24
  011f318  bl 0x5dd914
  011f31c  nop
  011f320  lis 3, 165
  011f324  lis 4, 165
  011f328  fmr 2, 1
  011f32c  addic 5, 3, 11072
  011f330  fmuls 1, 27, 23
  011f334  addic 6, 4, 11088
  011f338  fmuls 26, 26, 23
  011f33c  fmuls 27, 25, 23
  011f340  lfs 3, 11072(3)
  011f344  lfs 6, 11088(4)
  011f348  lfs 4, 4(5)
  011f34c  lfs 5, 8(5)
  011f350  lfs 7, 4(6)
  011f354  lfs 8, 8(6)
  011f358  b 0x11f3b4
  011f35c  lis 3, 18
  011f360  fmr 25, 27
  011f364  li 4, 0
  011f368  addi 3, 3, -4416
  011f36c  lfs 2, 68(3)
  011f370  fmuls 24, 1, 2
  011f374  fmr 1, 24
  011f378  bl 0x5dd914
  011f37c  nop
  011f380  fmr 27, 1
  011f384  fmr 1, 24
  011f388  li 4, 1
  011f38c  bl 0x5dd914
  011f390  nop
  011f394  fmr 2, 1
  011f398  fmr 1, 26
  011f39c  fmr 7, 25
  011f3a0  fmr 8, 1
  011f3a4  fmr 3, 7
  011f3a8  fmr 6, 8
  011f3ac  fmr 5, 6
  011f3b0  fmr 4, 5
  011f3b4  fmuls 9, 1, 5
  011f3b8  fmuls 10, 27, 3
  011f3bc  fmuls 11, 26, 4
  011f3c0  fmuls 12, 1, 4
  011f3c4  fmuls 13, 1, 8
  011f3c8  fmuls 0, 27, 6
  011f3cc  fmuls 25, 26, 7
  011f3d0  lis 3, 18
  011f3d4  addi 3, 3, -4416
  011f3d8  fmadds 9, 2, 3, 9
  011f3dc  fmadds 10, 2, 4, 10
  011f3e0  fmadds 11, 2, 5, 11
  011f3e4  fmadds 12, 26, 3, 12
  011f3e8  fmadds 13, 2, 6, 13
  011f3ec  fmadds 0, 2, 7, 0
  011f3f0  fmadds 25, 2, 8, 25
  011f3f4  fnmsubs 4, 27, 4, 9
  011f3f8  fnmsubs 9, 26, 5, 10
  011f3fc  fmuls 10, 1, 7
  011f400  fnmsubs 3, 1, 3, 11
  011f404  fmadds 5, 27, 5, 12
  011f408  fnmsubs 7, 27, 7, 13
  011f40c  fnmsubs 11, 26, 8, 0
  011f410  fnmsubs 12, 1, 6, 25
  011f414  fmuls 13, 2, 4
  011f418  fmuls 0, 2, 9
  011f41c  fmadds 6, 26, 6, 10
  011f420  fmuls 25, 2, 3
  011f424  fmuls 10, 2, 7
  011f428  fmuls 24, 2, 11
  011f42c  fmuls 2, 2, 12
  011f430  fmadds 13, 26, 5, 13
  011f434  fmadds 0, 1, 5, 0
  011f438  fmadds 6, 27, 8, 6
  011f43c  fmadds 5, 27, 5, 25
  011f440  fnmsubs 8, 27, 9, 13
  011f444  fnmsubs 13, 26, 3, 0
  011f448  fmadds 10, 26, 6, 10
  011f44c  fmadds 0, 1, 6, 24
  011f450  fnmsubs 5, 1, 4, 5
  011f454  fmadds 2, 27, 6, 2
  011f458  fmadds 3, 1, 3, 8
  011f45c  fmadds 4, 27, 4, 13
  011f460  fnmsubs 6, 27, 11, 10
  011f464  fnmsubs 8, 26, 12, 0
  011f468  fmadds 5, 26, 9, 5
  011f46c  fnmsubs 2, 1, 7, 2
  011f470  lfs 9, 68(3)
  011f474  lis 3, 165
  011f478  fmuls 3, 3, 31
  011f47c  fmuls 4, 4, 31
  011f480  fmadds 1, 1, 12, 6
  011f484  fmadds 6, 27, 7, 8
  011f488  fmr 7, 9
  011f48c  fmuls 5, 5, 31
  011f490  fmadds 2, 26, 11, 2
  011f494  fmuls 1, 1, 31
  011f498  fmuls 6, 6, 31
  011f49c  fnmsubs 8, 3, 7, 30
  011f4a0  fnmsubs 9, 4, 7, 29
  011f4a4  fmuls 2, 2, 31
  011f4a8  fnmsubs 10, 5, 7, 28
  011f4ac  fnmsubs 8, 1, 7, 8
  011f4b0  fnmsubs 9, 6, 7, 9
  011f4b4  fnmsubs 7, 2, 7, 10
  011f4b8  fadds 10, 8, 3
  011f4bc  fadds 11, 9, 4
  011f4c0  fadds 12, 7, 5
  011f4c4  stfs 8, 24(30)
  011f4c8  stfs 9, 28(30)
  011f4cc  stfs 7, 32(30)
  011f4d0  fadds 1, 10, 1
  011f4d4  fadds 6, 11, 6
  011f4d8  stfs 10, 0(30)
  011f4dc  fadds 2, 12, 2
  011f4e0  stfs 11, 4(30)
  011f4e4  stfs 12, 8(30)
  011f4e8  lwz 3, 11136(3)
  011f4ec  cmpw 27, 3
  011f4f0  fsubs 1, 1, 3
  011f4f4  fsubs 6, 6, 4
  011f4f8  fsubs 2, 2, 5
  011f4fc  fadds 3, 1, 3
  011f500  fadds 4, 6, 4
  011f504  stfs 1, 48(30)
  011f508  fadds 5, 2, 5
  011f50c  stfs 6, 52(30)
  011f510  stfs 2, 56(30)
  011f514  stfs 3, 72(30)
  011f518  stfs 4, 76(30)
  011f51c  stfs 5, 80(30)
  011f520  addic 30, 24, 96
  011f524  ori 24, 30, 0
  011f528  bf 2, 0x11f53c
  011f52c  lis 3, 165
  011f530  lwz 3, 11140(3)
  011f534  cmpw 3, 26
  011f538  bt 2, 0x11f560
  011f53c  lis 3, 115
  011f540  lwz 3, -27064(3)
  011f544  cmpwi 3, 0
  011f548  bt 2, 0x11f558
  011f54c  extsw 3, 3
  011f550  addic 4, 1, 176
  011f554  bl 0x11ebc4
  011f558  lis 3, 115
  011f55c  stw 29, -27064(3)
  011f560  lis 3, 115
  011f564  lis 4, 165
  011f568  lis 5, 165
  011f56c  lwz 6, -27064(3)
  011f570  stw 27, 11136(4)
  011f574  addic 4, 6, 1
  011f578  stw 26, 11140(5)
  011f57c  stw 4, -27064(3)
  011f580  b 0x11f80c
  011f584  lfs 28, 16(27)
  011f588  lfs 27, 20(27)
  011f58c  lfs 26, 24(27)
  011f590  lfs 31, 32(27)
  011f594  lfs 30, 36(27)
  011f598  lfs 29, 40(27)
  011f59c  lbz 26, 3(27)
  011f5a0  bf 6, 0x11f5cc
  011f5a4  lis 3, 161
  011f5a8  addic 3, 3, 24396
  011f5ac  lwz 22, 28(3)
  011f5b0  lbz 4, 2(27)
  011f5b4  ori 3, 4, 0
  011f5b8  bl 0x6d70c
  011f5bc  nop
  011f5c0  ori 4, 3, 0
  011f5c4  ori 3, 22, 0
  011f5c8  b 0x11f5f8
  011f5cc  lis 3, 15692
  011f5d0  lis 4, 161
  011f5d4  ori 5, 3, 52429
  011f5d8  addic 4, 4, 24396
  011f5dc  li 3, 22
  011f5e0  stw 5, 28(27)
  011f5e4  lwz 22, 28(4)
  011f5e8  bl 0x685c4
  011f5ec  nop
  011f5f0  ori 4, 3, 0
  011f5f4  ori 3, 22, 0
  011f5f8  ori 5, 27, 0
  011f5fc  fadds 1, 28, 31
  011f600  fadds 3, 26, 29
  011f604  fadds 5, 27, 30
  011f608  lwz 6, 4(5)
  011f60c  fsubs 6, 29, 26
  011f610  rlwinm 7, 6, 8, 8, 15
  011f614  rlwimi 7, 6, 24, 0, 7
  011f618  fsubs 8, 30, 27
  011f61c  rlwimi 7, 6, 24, 16, 23
  011f620  fsubs 7, 31, 28
  011f624  rlwimi 7, 6, 8, 24, 31
  011f628  lis 6, 18
  011f62c  addi 6, 6, -4416
  011f630  stw 7, 68(30)
  011f634  stw 7, 44(30)
  011f638  lwz 7, 12(5)
  011f63c  rlwinm 8, 7, 8, 8, 15
  011f640  rlwimi 8, 7, 24, 0, 7
  011f644  rlwimi 8, 7, 24, 16, 23
  011f648  rlwimi 8, 7, 8, 24, 31
  011f64c  lis 7, 165
  011f650  stw 8, 92(30)
  011f654  stw 8, 20(30)
  011f658  lfs 2, 68(6)
  011f65c  lfs 4, 11120(7)
  011f660  addic 7, 7, 11120
  011f664  fmsubs 1, 1, 2, 4
  011f668  lfs 9, 8(7)
  011f66c  lfs 10, 4(7)
  011f670  fmsubs 3, 3, 2, 9
  011f674  fmsubs 4, 5, 2, 10
  011f678  fmuls 5, 1, 6
  011f67c  fmuls 9, 3, 8
  011f680  fmuls 10, 4, 7
  011f684  fmsubs 3, 3, 7, 5
  011f688  fmsubs 4, 4, 6, 9
  011f68c  fmsubs 1, 1, 8, 10
  011f690  fmuls 5, 3, 3
  011f694  lfs 9, 4(6)
  011f698  lfs 10, 28(5)
  011f69c  lis 6, 16256
  011f6a0  stw 29, 16(30)
  011f6a4  fmadds 5, 4, 4, 5
  011f6a8  stw 29, 60(30)
  011f6ac  stw 29, 84(30)
  011f6b0  stw 29, 88(30)
  011f6b4  stw 6, 36(30)
  011f6b8  stw 6, 40(30)
  011f6bc  fmadds 5, 1, 1, 5
  011f6c0  stw 6, 12(30)
  011f6c4  stw 6, 64(30)
  011f6c8  sldi 7, 4, 5
  011f6cc  lfs 11, 16(5)
  011f6d0  sldi 4, 4, 2
  011f6d4  lfs 12, 20(5)
  011f6d8  lfs 13, 24(5)
  011f6dc  fsqrts 5, 5
  011f6e0  addc 27, 7, 4
  011f6e4  addc 27, 3, 27
  011f6e8  lis 3, 165
  011f6ec  addic 4, 30, 96
  011f6f0  addic 24, 24, 96
  011f6f4  lwz 3, 11136(3)
  011f6f8  cmpw 26, 3
  011f6fc  fdivs 0, 1, 5
  011f700  fdivs 31, 3, 5
  011f704  fdivs 30, 4, 5
  011f708  fsub 29, 9, 5
  011f70c  fsub 28, 9, 5
  011f710  fsub 26, 5, 9
  011f714  fsub 27, 9, 5
  011f718  fsub 25, 5, 9
  011f71c  fsub 5, 5, 9
  011f720  fsel 1, 29, 1, 0
  011f724  fsel 1, 26, 1, 0
  011f728  fsel 3, 28, 3, 31
  011f72c  fmuls 1, 1, 10
  011f730  fsel 3, 25, 3, 31
  011f734  fnmsubs 9, 1, 2, 13
  011f738  fsel 4, 27, 4, 30
  011f73c  fmuls 3, 3, 10
  011f740  fsel 4, 5, 4, 30
  011f744  fnmsubs 5, 3, 2, 12
  011f748  fadds 12, 9, 6
  011f74c  fmuls 4, 4, 10
  011f750  fadds 10, 5, 8
  011f754  fadds 1, 12, 1
  011f758  stfs 5, 28(30)
  011f75c  fnmsubs 2, 4, 2, 11
  011f760  fadds 3, 10, 3
  011f764  fsubs 1, 1, 6
  011f768  fadds 11, 2, 7
  011f76c  stfs 2, 24(30)
  011f770  stfs 9, 32(30)
  011f774  fsubs 3, 3, 8
  011f778  stfs 10, 4(30)
  011f77c  fadds 2, 1, 6
  011f780  stfs 12, 8(30)
  011f784  fadds 4, 11, 4
  011f788  stfs 11, 0(30)
  011f78c  stfs 1, 56(30)
  011f790  fadds 5, 3, 8
  011f794  stfs 3, 52(30)
  011f798  stfs 2, 80(30)
  011f79c  fsubs 1, 4, 7
  011f7a0  stfs 5, 76(30)
  011f7a4  fadds 2, 1, 7
  011f7a8  stfs 1, 48(30)
  011f7ac  stfs 2, 72(30)
  011f7b0  clrldi 30, 4, 32
  011f7b4  bf 2, 0x11f7c8
  011f7b8  lis 3, 165
  011f7bc  lwz 3, 11140(3)
  011f7c0  cmpw 3, 27
  011f7c4  bt 2, 0x11f7ec
  011f7c8  lis 3, 115
  011f7cc  lwz 3, -27064(3)
  011f7d0  cmpwi 3, 0
  011f7d4  bt 2, 0x11f7e4
  011f7d8  extsw 3, 3
  011f7dc  addic 4, 1, 176
  011f7e0  bl 0x11ebc4
  011f7e4  lis 3, 115
  011f7e8  stw 29, -27064(3)
  011f7ec  lis 3, 115
  011f7f0  lis 4, 165
  011f7f4  lis 5, 165
  011f7f8  lwz 6, -27064(3)
  011f7fc  stw 26, 11136(4)
  011f800  addic 4, 6, 1
  011f804  stw 27, 11140(5)
  011f808  stw 4, -27064(3)
  011f80c  addic 28, 28, 1
  011f810  lwz 3, 8136(25)
  011f814  addic 23, 23, 64
  011f818  cmpw 28, 3
  011f81c  bf 1, 0x11f11c
  011f820  lis 3, 115
  011f824  lwz 3, -27064(3)
  011f828  cmpwi 3, 0
  011f82c  bt 2, 0x11f83c
  011f830  extsw 3, 3
  011f834  addic 4, 1, 176
  011f838  bl 0x11ebc4
  011f83c  lis 3, 4
  011f840  lwz 5, 8(31)
  011f844  li 4, 2
  011f848  ori 3, 3, 5952
  011f84c  lis 6, 4
  011f850  stw 3, 0(5)
  011f854  lwz 3, 8(31)
  011f858  stw 4, 4(3)
  011f85c  lwz 3, 8(31)
  011f860  addic 5, 3, 8
  011f864  stw 5, 8(31)
  011f868  ori 5, 6, 5956
  011f86c  stw 5, 8(3)
  011f870  lis 5, 115
  011f874  lis 3, 4
  011f878  ori 3, 3, 5964
  011f87c  stw 29, -27064(5)
  011f880  lwz 5, 8(31)
  011f884  stw 4, 4(5)
  011f888  lwz 5, 8(31)
  011f88c  addic 6, 5, 8
  011f890  stw 6, 8(31)
  011f894  stw 3, 8(5)
  011f898  lwz 3, 8(31)
  011f89c  stw 4, 4(3)
  011f8a0  lwz 3, 8(31)
  011f8a4  addic 3, 3, 8
  011f8a8  stw 3, 8(31)
  011f8ac  ld 0, 368(1)
  011f8b0  mtlr 0
  011f8b4  lfd 23, 280(1)
  011f8b8  lfd 24, 288(1)
  011f8bc  lfd 25, 296(1)
  011f8c0  lfd 26, 304(1)
  011f8c4  lfd 27, 312(1)
  011f8c8  lfd 28, 320(1)
  011f8cc  lfd 29, 328(1)
  011f8d0  lfd 30, 336(1)
  011f8d4  lfd 31, 344(1)
  011f8d8  ld 22, 200(1)
  011f8dc  ld 23, 208(1)
  011f8e0  ld 24, 216(1)
  011f8e4  ld 25, 224(1)
  011f8e8  ld 26, 232(1)
  011f8ec  ld 27, 240(1)
  011f8f0  ld 28, 248(1)
  011f8f4  ld 29, 256(1)
  011f8f8  ld 30, 264(1)
  011f8fc  ld 31, 272(1)
  011f900  addi 1, 1, 352
  011f904  blr

UpdatePart_22:   # 0x11f918, 0x27c bytes
  011f918  stdu 1, -112(1)
  011f91c  mflr 0
  011f920  std 0, 128(1)
  011f924  li 5, 10
  011f928  vspltisw 2, -16
  011f92c  vspltisw 3, 1
  011f930  <unknown>
  011f934  lhz 6, 10(3)
  011f938  vsrw 4, 4, 2
  011f93c  addic 6, 6, -1
  011f940  extsh 6, 6
  011f944  vsubuwm 3, 4, 3
  011f948  cmpwi 6, 0
  011f94c  vsplth 4, 3, 1
  011f950  vslw 3, 3, 2
  011f954  vsraw 2, 3, 2
  011f958  stvehx 4, 5, 3
  011f95c  bt 1, 0x11f968
  011f960  bl 0x11e6ec
  011f964  b 0x11fb84
  011f968  lbz 4, 8(3)
  011f96c  li 5, 56
  011f970  vspltisw 4, -16
  011f974  addic 4, 4, 1
  011f978  vspltisw 6, -1
  011f97c  li 6, 48
  011f980  vspltisw 5, 8
  011f984  stb 4, 8(3)
  011f988  <unknown>
  011f98c  lis 4, 18
  011f990  li 5, 4
  011f994  vsraw 3, 3, 4
  011f998  addi 4, 4, -1784
  011f99c  vslw 6, 6, 6
  011f9a0  vspltisw 11, -1
  011f9a4  vcmpgtsw 7, 2, 5
  011f9a8  vcfsx 3, 3, 0
  011f9ac  vsel 5, 2, 5, 7
  011f9b0  <unknown>
  011f9b4  li 7, 49
  011f9b8  vspltw 4, 4, 0
  011f9bc  li 5, 51
  011f9c0  vspltisw 7, 9
  011f9c4  li 8, 50
  011f9c8  vslw 11, 11, 11
  011f9cc  vcfsx 2, 2, 0
  011f9d0  <unknown>
  011f9d4  vspltisw 13, -8
  011f9d8  vslw 5, 5, 7
  011f9dc  vspltw 7, 9, 0
  011f9e0  vrefp 8, 3
  011f9e4  vcfsx 5, 5, 0
  011f9e8  vspltisw 9, -1
  011f9ec  <unknown>
  011f9f0  li 5, 55
  011f9f4  <unknown>
  011f9f8  li 6, 52
  011f9fc  vslw 9, 9, 9
  011fa00  vnmsubfp 10, 8, 3, 4
  011fa04  vmaddfp 5, 5, 7, 9
  011fa08  <unknown>
  011fa0c  vsrw 7, 0, 13
  011fa10  li 7, 53
  011fa14  vsrw 9, 9, 13
  011fa18  vcfsx 7, 7, 0
  011fa1c  vcfsx 9, 9, 0
  011fa20  vmaddfp 6, 8, 10, 6
  011fa24  vsrw 8, 12, 13
  011fa28  vspltisw 12, -1
  011fa2c  <unknown>
  011fa30  <unknown>
  011fa34  li 5, 54
  011fa38  vslw 12, 12, 12
  011fa3c  vcfsx 8, 8, 0
  011fa40  <unknown>
  011fa44  <unknown>
  011fa48  lfs 1, 16(3)
  011fa4c  <unknown>
  011fa50  vnmsubfp 1, 6, 3, 4
  011fa54  vsrw 0, 0, 13
  011fa58  vsrw 10, 10, 13
  011fa5c  li 5, 8
  011fa60  vsrw 14, 14, 13
  011fa64  vsrw 15, 15, 13
  011fa68  vcfsx 0, 0, 0
  011fa6c  lfs 2, 20(3)
  011fa70  lfs 3, 24(3)
  011fa74  vcfsx 10, 10, 0
  011fa78  lfs 4, 32(3)
  011fa7c  lfs 5, 36(3)
  011fa80  lfs 6, 40(3)
  011fa84  vcfsx 15, 15, 0
  011fa88  lfs 7, 44(3)
  011fa8c  fadds 1, 4, 1
  011fa90  fadds 2, 5, 2
  011fa94  vmaddfp 6, 6, 1, 11
  011fa98  vsrw 11, 16, 13
  011fa9c  vspltisw 13, -1
  011faa0  vspltisw 1, -1
  011faa4  fadds 3, 6, 3
  011faa8  vspltisw 16, -1
  011faac  fadds 4, 7, 6
  011fab0  vcfsx 11, 11, 0
  011fab4  vslw 13, 13, 13
  011fab8  vslw 1, 1, 1
  011fabc  li 6, 5
  011fac0  li 7, 6
  011fac4  vmaddfp 8, 8, 5, 1
  011fac8  vnmsubfp 3, 6, 3, 4
  011facc  vcfsx 1, 14, 0
  011fad0  vspltisw 14, -1
  011fad4  <unknown>
  011fad8  stfs 1, 16(3)
  011fadc  vspltw 4, 4, 0
  011fae0  stfs 2, 20(3)
  011fae4  li 4, 4
  011fae8  stfs 3, 24(3)
  011faec  li 5, 7
  011faf0  stfs 4, 40(3)
  011faf4  lfs 1, 12(3)
  011faf8  lfs 2, 60(3)
  011fafc  vmaddfp 3, 6, 3, 12
  011fb00  vslw 12, 16, 16
  011fb04  vspltisw 6, -1
  011fb08  vspltisw 16, -1
  011fb0c  fadds 1, 1, 2
  011fb10  vmaddfp 5, 0, 5, 12
  011fb14  vspltisw 12, -1
  011fb18  vslw 6, 6, 6
  011fb1c  vslw 0, 14, 14
  011fb20  vslw 14, 16, 16
  011fb24  vmaddfp 2, 3, 2, 13
  011fb28  vslw 3, 12, 12
  011fb2c  stfs 1, 12(3)
  011fb30  vsubfp 4, 4, 2
  011fb34  vmaddfp 6, 7, 2, 6
  011fb38  vmaddfp 7, 9, 2, 0
  011fb3c  vmaddfp 9, 10, 2, 14
  011fb40  vmaddfp 2, 8, 2, 3
  011fb44  vmaddfp 3, 1, 4, 6
  011fb48  vmaddfp 6, 15, 4, 7
  011fb4c  vmaddfp 7, 11, 4, 9
  011fb50  vmaddfp 2, 5, 4, 2
  011fb54  vctsxs 3, 3, 0
  011fb58  vctsxs 4, 6, 0
  011fb5c  vctsxs 5, 7, 0
  011fb60  vctsxs 2, 2, 0
  011fb64  vspltb 3, 3, 3
  011fb68  vspltb 4, 4, 3
  011fb6c  vspltb 5, 5, 3
  011fb70  vspltb 2, 2, 3
  011fb74  stvebx 3, 4, 3
  011fb78  stvebx 4, 6, 3
  011fb7c  stvebx 5, 7, 3
  011fb80  stvebx 2, 5, 3
  011fb84  ld 0, 128(1)
  011fb88  mtlr 0
  011fb8c  addi 1, 1, 112
  011fb90  blr
