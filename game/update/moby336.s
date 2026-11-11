# game/update/moby336.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY336:   # 0x1e6c8, 0x14 bytes
  001e6c8  lis 3, 114
  001e6cc  lis 4, 1
  001e6d0  addic 3, 3, -12220
  001e6d4  stw 4, 72(3)
  001e6d8  blr

M336_0001e700:   # 0x1e700, 0x24c bytes
  001e700  stdu 1, -272(1)
  001e704  mflr 0
  001e708  std 0, 288(1)
  001e70c  stfd 31, 264(1)
  001e710  std 30, 248(1)
  001e714  std 31, 256(1)
  001e718  ori 30, 3, 0
  001e71c  ori 31, 4, 0
  001e720  lis 4, 163
  001e724  std 29, 240(1)
  001e728  li 5, 0
  001e72c  std 28, 232(1)
  001e730  std 27, 224(1)
  001e734  lwz 29, 120(30)
  001e738  bl 0x10675c
  001e73c  nop
  001e740  cmpwi 3, 0
  001e744  bt 2, 0x1e86c
  001e748  lis 3, 151
  001e74c  addic 3, 3, -25376
  001e750  lwz 3, 8324(3)
  001e754  cmpwi 3, 50
  001e758  bt 2, 0x1e780
  001e75c  lis 3, 151
  001e760  lwz 4, -13844(3)
  001e764  addic 4, 4, 1
  001e768  cmpwi 4, 5
  001e76c  stw 4, -13844(3)
  001e770  bt 0, 0x1e780
  001e774  li 3, 21
  001e778  bl 0x11b728
  001e77c  nop
  001e780  lfs 1, 16(30)
  001e784  lis 3, 2
  001e788  lfs 2, 20(30)
  001e78c  li 28, 0
  001e790  stfs 1, 192(1)
  001e794  addi 27, 3, -6432
  001e798  lfs 1, 24(30)
  001e79c  ori 3, 30, 0
  001e7a0  stfs 2, 196(1)
  001e7a4  li 4, 31
  001e7a8  lfs 2, 28(30)
  001e7ac  li 5, 74
  001e7b0  stfs 1, 200(1)
  001e7b4  li 6, 2
  001e7b8  stfs 2, 204(1)
  001e7bc  li 7, -1
  001e7c0  lfs 1, 0(27)
  001e7c4  stw 28, 220(1)
  001e7c8  stw 28, 216(1)
  001e7cc  fmr 31, 1
  001e7d0  stw 28, 212(1)
  001e7d4  stw 28, 208(1)
  001e7d8  bl 0xfcd60
  001e7dc  nop
  001e7e0  li 3, 4
  001e7e4  vspltisw 2, -1
  001e7e8  lis 4, 114
  001e7ec  li 5, -3056
  001e7f0  li 6, 164
  001e7f4  vslw 2, 2, 2
  001e7f8  <unknown>
  001e7fc  li 11, -1
  001e800  vspltw 3, 3, 0
  001e804  <unknown>
  001e808  li 7, 1
  001e80c  fmr 1, 31
  001e810  vmaddfp 2, 4, 3, 2
  001e814  addic 4, 1, 208
  001e818  addic 5, 1, 192
  001e81c  fmr 2, 31
  001e820  ori 3, 30, 0
  001e824  li 8, 20
  001e828  li 9, 3
  001e82c  li 10, 4
  001e830  vctsxs 2, 2, 0
  001e834  vspltw 2, 2, 0
  001e838  stvewx 2, 6, 29
  001e83c  lfs 3, 8(27)
  001e840  lfs 4, 12(27)
  001e844  lfs 5, 16(27)
  001e848  lfs 6, 20(27)
  001e84c  lfs 7, 24(27)
  001e850  std 11, 144(1)
  001e854  std 7, 160(1)
  001e858  std 7, 168(1)
  001e85c  std 11, 176(1)
  001e860  std 28, 184(1)
  001e864  bl 0x10e030
  001e868  nop
  001e86c  li 3, 255
  001e870  lis 4, 146
  001e874  stb 3, 164(30)
  001e878  lwz 3, 29140(4)
  001e87c  cmpwi 3, 0
  001e880  bt 2, 0x1e8a4
  001e884  cmpwi 31, 0
  001e888  bt 2, 0x1e8a4
  001e88c  lhz 4, 52(30)
  001e890  li 3, 0
  001e894  ori 4, 4, 65
  001e898  rlwimi 4, 3, 0, 19, 19
  001e89c  stw 3, 148(30)
  001e8a0  sth 4, 52(30)
  001e8a4  lwz 3, 164(29)
  001e8a8  cmpwi 3, 0
  001e8ac  bf 2, 0x1e8c0
  001e8b0  lhz 3, 52(30)
  001e8b4  clrlwi 3, 3, 31
  001e8b8  cmpwi 3, 0
  001e8bc  bt 2, 0x1e924
  001e8c0  addic 3, 29, 164
  001e8c4  bl 0x4fff60
  001e8c8  nop
  001e8cc  cmpwi 3, 0
  001e8d0  lhz 29, 52(30)
  001e8d4  bt 2, 0x1e910
  001e8d8  cmpwi 31, 0
  001e8dc  bt 2, 0x1e910
  001e8e0  lis 3, 146
  001e8e4  lwz 3, 29140(3)
  001e8e8  cmpwi 3, 0
  001e8ec  bf 2, 0x1e910
  001e8f0  li 3, -66
  001e8f4  lwz 4, 36(30)
  001e8f8  and 3, 29, 3
  001e8fc  ori 3, 3, 4096
  001e900  lwz 4, 16(4)
  001e904  sth 3, 52(30)
  001e908  stw 4, 148(30)
  001e90c  b 0x1e924
  001e910  li 3, 0
  001e914  ori 4, 29, 65
  001e918  rlwimi 4, 3, 0, 19, 19
  001e91c  stw 3, 148(30)
  001e920  sth 4, 52(30)
  001e924  ld 0, 288(1)
  001e928  mtlr 0
  001e92c  lfd 31, 264(1)
  001e930  ld 27, 224(1)
  001e934  ld 28, 232(1)
  001e938  ld 29, 240(1)
  001e93c  ld 30, 248(1)
  001e940  ld 31, 256(1)
  001e944  addi 1, 1, 272
  001e948  blr

UpdateMoby_336:   # 0x1e958, 0x8b8 bytes
  001e958  stdu 1, -352(1)
  001e95c  mflr 0
  001e960  std 0, 368(1)
  001e964  stfd 24, 288(1)
  001e968  stfd 25, 296(1)
  001e96c  stfd 26, 304(1)
  001e970  stfd 27, 312(1)
  001e974  stfd 28, 320(1)
  001e978  stfd 29, 328(1)
  001e97c  stfd 30, 336(1)
  001e980  stfd 31, 344(1)
  001e984  std 30, 272(1)
  001e988  std 31, 280(1)
  001e98c  lwz 30, 120(3)
  001e990  ori 31, 3, 0
  001e994  std 29, 264(1)
  001e998  std 28, 256(1)
  001e99c  cmpwi 30, 0
  001e9a0  bt 2, 0x1f1d0
  001e9a4  lhz 3, 50(31)
  001e9a8  extsh 3, 3
  001e9ac  bl 0x502730
  001e9b0  nop
  001e9b4  ori 3, 31, 0
  001e9b8  bl 0x1129d0
  001e9bc  nop
  001e9c0  addic 4, 3, 1
  001e9c4  ori 3, 31, 0
  001e9c8  cntlzw 4, 4
  001e9cc  rlwinm 4, 4, 27, 31, 31
  001e9d0  bl 0x1e700
  001e9d4  lbz 3, 32(31)
  001e9d8  cmpwi 3, 0
  001e9dc  bt 1, 0x1e9ec
  001e9e0  cmpwi 3, -1
  001e9e4  bf 1, 0x1f1d0
  001e9e8  b 0x1e9f8
  001e9ec  cmpwi 3, 1
  001e9f0  bf 1, 0x1eacc
  001e9f4  b 0x1f1d0
  001e9f8  lwz 3, 116(30)
  001e9fc  cmpwi 3, -1
  001ea00  bt 2, 0x1f1d0
  001ea04  addic 3, 30, 96
  001ea08  bl 0x136724
  001ea0c  nop
  001ea10  lwz 4, 116(30)
  001ea14  lis 3, 165
  001ea18  lwz 5, 160(30)
  001ea1c  slwi 4, 4, 2
  001ea20  addic 3, 3, 7136
  001ea24  extsw 4, 4
  001ea28  extsw 6, 5
  001ea2c  li 8, 1
  001ea30  lis 9, 16307
  001ea34  lwzx 3, 3, 4
  001ea38  ori 9, 9, 13107
  001ea3c  stw 3, 112(30)
  001ea40  lwz 4, 0(3)
  001ea44  addic 4, 4, -1
  001ea48  extsw 7, 4
  001ea4c  subc 4, 4, 5
  001ea50  subc 6, 7, 6
  001ea54  li 7, 44
  001ea58  sradi 6, 6, 63
  001ea5c  and 4, 6, 4
  001ea60  li 6, 2
  001ea64  addc 4, 5, 4
  001ea68  sldi 5, 4, 4
  001ea6c  addc 3, 3, 5
  001ea70  li 5, 16
  001ea74  clrldi 3, 3, 32
  001ea78  lfs 1, 16(3)
  001ea7c  stfs 1, 16(31)
  001ea80  lfs 1, 20(3)
  001ea84  stfs 1, 20(31)
  001ea88  lfs 1, 24(3)
  001ea8c  stfs 1, 24(31)
  001ea90  lfs 1, 28(3)
  001ea94  li 3, 170
  001ea98  stfs 1, 28(31)
  001ea9c  stb 6, 40(30)
  001eaa0  stb 7, 44(30)
  001eaa4  stb 8, 43(30)
  001eaa8  stw 4, 96(30)
  001eaac  stb 5, 42(30)
  001eab0  lhz 4, 52(31)
  001eab4  stw 9, 48(30)
  001eab8  ori 4, 4, 4096
  001eabc  sth 3, 50(31)
  001eac0  stb 8, 32(31)
  001eac4  sth 4, 52(31)
  001eac8  b 0x1f1d0
  001eacc  lwz 3, 112(30)
  001ead0  lwz 4, 96(30)
  001ead4  lbz 5, 100(30)
  001ead8  extsb 5, 5
  001eadc  lwz 6, 0(3)
  001eae0  addc 7, 4, 6
  001eae4  subc 8, 7, 5
  001eae8  addc 29, 7, 5
  001eaec  divw 9, 8, 6
  001eaf0  mullw 9, 9, 6
  001eaf4  divw 7, 29, 6
  001eaf8  subc 5, 8, 9
  001eafc  slwi 4, 4, 4
  001eb00  sldi 5, 5, 4
  001eb04  addc 4, 3, 4
  001eb08  addc 5, 3, 5
  001eb0c  clrldi 4, 4, 32
  001eb10  clrldi 5, 5, 32
  001eb14  mullw 6, 7, 6
  001eb18  lfs 28, 16(5)
  001eb1c  lfs 27, 20(5)
  001eb20  subc 29, 29, 6
  001eb24  lfs 2, 16(4)
  001eb28  lis 10, 2
  001eb2c  lfs 3, 20(4)
  001eb30  sldi 6, 29, 4
  001eb34  fsubs 28, 2, 28
  001eb38  lfs 26, 24(5)
  001eb3c  fsubs 27, 3, 27
  001eb40  addc 3, 3, 6
  001eb44  lfs 1, 24(4)
  001eb48  clrldi 3, 3, 32
  001eb4c  fsubs 26, 1, 26
  001eb50  lis 28, 115
  001eb54  addic 28, 28, 22784
  001eb58  lfs 31, 16(3)
  001eb5c  lfs 30, 20(3)
  001eb60  fabs 5, 28
  001eb64  fabs 6, 27
  001eb68  lfs 29, 24(3)
  001eb6c  addi 3, 10, -5812
  001eb70  stfs 28, 136(1)
  001eb74  stfs 27, 140(1)
  001eb78  fsubs 2, 31, 2
  001eb7c  fsubs 3, 30, 3
  001eb80  fsubs 4, 5, 6
  001eb84  stfs 4, 144(1)
  001eb88  lfs 24, 0(3)
  001eb8c  lwz 4, 136(1)
  001eb90  lfs 1, 136(1)
  001eb94  lwz 5, 140(1)
  001eb98  lfs 4, 140(1)
  001eb9c  lwz 6, 144(1)
  001eba0  rlwinm 5, 5, 3, 29, 29
  001eba4  fabs 7, 4
  001eba8  lfs 4, 144(1)
  001ebac  fabs 1, 1
  001ebb0  rlwimi 5, 6, 2, 30, 30
  001ebb4  fsub 8, 4, 24
  001ebb8  rlwimi 5, 4, 4, 28, 28
  001ebbc  fsub 9, 4, 24
  001ebc0  ori 4, 28, 0
  001ebc4  rlwimi 4, 5, 2, 26, 28
  001ebc8  slwi 5, 5, 2
  001ebcc  clrldi 4, 4, 32
  001ebd0  fsel 6, 8, 1, 6
  001ebd4  lfsx 1, 28, 5
  001ebd8  lfs 4, 4(4)
  001ebdc  fsel 5, 9, 7, 5
  001ebe0  lfs 25, 4(3)
  001ebe4  fcmpu 0, 6, 24
  001ebe8  bt 1, 0x1ebf4
  001ebec  fmr 1, 24
  001ebf0  b 0x1ed0c
  001ebf4  fsubs 7, 5, 6
  001ebf8  fadds 5, 5, 6
  001ebfc  addic 3, 1, 16
  001ec00  li 7, 2
  001ec04  addic 4, 3, 196
  001ec08  addic 5, 3, 212
  001ec0c  mtctr 7
  001ec10  fdivs 5, 7, 5
  001ec14  fmuls 6, 5, 5
  001ec18  stfs 5, 224(1)
  001ec1c  stfs 5, 216(1)
  001ec20  stfs 5, 220(1)
  001ec24  stfs 5, 212(1)
  001ec28  lfs 8, 224(1)
  001ec2c  lfs 9, 216(1)
  001ec30  lfs 10, 220(1)
  001ec34  fmuls 7, 6, 6
  001ec38  fmuls 9, 9, 6
  001ec3c  fmuls 8, 8, 7
  001ec40  fmuls 5, 7, 7
  001ec44  fmuls 7, 10, 7
  001ec48  stfs 9, 216(1)
  001ec4c  fmuls 6, 8, 6
  001ec50  stfs 7, 220(1)
  001ec54  stfs 6, 224(1)
  001ec58  lfs 6, 196(3)
  001ec5c  fmuls 6, 6, 5
  001ec60  stfs 6, 212(3)
  001ec64  lfs 6, 4(4)
  001ec68  addic 3, 3, 8
  001ec6c  addic 4, 4, 8
  001ec70  fmuls 6, 6, 5
  001ec74  stfs 6, 4(5)
  001ec78  addic 5, 5, 8
  001ec7c  bdnz 0x1ec58
  001ec80  li 5, 4
  001ec84  ori 3, 1, 0
  001ec88  mtctr 5
  001ec8c  lis 4, 115
  001ec90  addic 5, 3, 212
  001ec94  addic 4, 4, 22752
  001ec98  ori 6, 5, 0
  001ec9c  lfs 5, 212(3)
  001eca0  lfs 6, 0(4)
  001eca4  fmuls 5, 5, 6
  001eca8  lfs 6, 4(4)
  001ecac  addic 4, 4, 8
  001ecb0  stfs 5, 212(3)
  001ecb4  lfs 5, 4(5)
  001ecb8  addic 3, 3, 8
  001ecbc  fmuls 5, 5, 6
  001ecc0  stfs 5, 4(5)
  001ecc4  addic 5, 5, 8
  001ecc8  bdnz 0x1ec9c
  001eccc  fmr 5, 24
  001ecd0  ori 3, 1, 0
  001ecd4  mtctr 7
  001ecd8  lfs 6, 212(3)
  001ecdc  fadds 5, 5, 6
  001ece0  addic 3, 3, 16
  001ece4  lfs 6, 4(6)
  001ece8  lfs 7, 8(6)
  001ecec  lfs 8, 12(6)
  001ecf0  addic 6, 6, 16
  001ecf4  fadds 5, 5, 6
  001ecf8  fadds 5, 5, 7
  001ecfc  fadds 5, 5, 8
  001ed00  bdnz 0x1ecd8
  001ed04  fadds 5, 5, 25
  001ed08  fmadds 1, 5, 1, 4
  001ed0c  fabs 4, 2
  001ed10  stfs 2, 124(1)
  001ed14  fabs 5, 3
  001ed18  stfs 3, 128(1)
  001ed1c  fsubs 2, 4, 5
  001ed20  stfs 2, 132(1)
  001ed24  lwz 3, 124(1)
  001ed28  lfs 2, 124(1)
  001ed2c  lwz 4, 128(1)
  001ed30  lfs 3, 128(1)
  001ed34  lwz 5, 132(1)
  001ed38  rlwinm 4, 4, 3, 29, 29
  001ed3c  fabs 6, 3
  001ed40  lfs 3, 132(1)
  001ed44  fabs 2, 2
  001ed48  rlwimi 4, 5, 2, 30, 30
  001ed4c  fsub 7, 3, 24
  001ed50  fsub 8, 3, 24
  001ed54  rlwimi 4, 3, 4, 28, 28
  001ed58  ori 3, 28, 0
  001ed5c  rlwimi 3, 4, 2, 26, 28
  001ed60  slwi 4, 4, 2
  001ed64  clrldi 3, 3, 32
  001ed68  fsel 5, 7, 2, 5
  001ed6c  lfsx 2, 28, 4
  001ed70  fsel 4, 8, 6, 4
  001ed74  lfs 3, 4(3)
  001ed78  fcmpu 0, 5, 24
  001ed7c  bt 1, 0x1ed88
  001ed80  fmr 2, 24
  001ed84  b 0x1eea0
  001ed88  fsubs 6, 4, 5
  001ed8c  fadds 4, 4, 5
  001ed90  addic 3, 1, 16
  001ed94  li 6, 2
  001ed98  addic 5, 3, 180
  001ed9c  addic 4, 3, 164
  001eda0  mtctr 6
  001eda4  fdivs 4, 6, 4
  001eda8  fmuls 5, 4, 4
  001edac  stfs 4, 192(1)
  001edb0  stfs 4, 184(1)
  001edb4  stfs 4, 188(1)
  001edb8  stfs 4, 180(1)
  001edbc  lfs 7, 192(1)
  001edc0  lfs 8, 184(1)
  001edc4  lfs 9, 188(1)
  001edc8  fmuls 6, 5, 5
  001edcc  fmuls 8, 8, 5
  001edd0  fmuls 7, 7, 6
  001edd4  fmuls 4, 6, 6
  001edd8  fmuls 6, 9, 6
  001eddc  stfs 8, 184(1)
  001ede0  fmuls 5, 7, 5
  001ede4  stfs 6, 188(1)
  001ede8  stfs 5, 192(1)
  001edec  lfs 5, 164(3)
  001edf0  fmuls 5, 5, 4
  001edf4  stfs 5, 180(3)
  001edf8  lfs 5, 4(4)
  001edfc  addic 4, 4, 8
  001ee00  fmuls 5, 5, 4
  001ee04  addic 3, 3, 8
  001ee08  stfs 5, 4(5)
  001ee0c  addic 5, 5, 8
  001ee10  bdnz 0x1edec
  001ee14  li 5, 4
  001ee18  ori 3, 1, 0
  001ee1c  mtctr 5
  001ee20  lis 4, 115
  001ee24  addic 5, 3, 180
  001ee28  addic 4, 4, 22752
  001ee2c  ori 7, 5, 0
  001ee30  lfs 4, 180(3)
  001ee34  lfs 5, 0(4)
  001ee38  fmuls 4, 4, 5
  001ee3c  lfs 5, 4(4)
  001ee40  addic 4, 4, 8
  001ee44  stfs 4, 180(3)
  001ee48  lfs 4, 4(5)
  001ee4c  addic 3, 3, 8
  001ee50  fmuls 4, 4, 5
  001ee54  stfs 4, 4(5)
  001ee58  addic 5, 5, 8
  001ee5c  bdnz 0x1ee30
  001ee60  ori 3, 1, 0
  001ee64  fmr 4, 24
  001ee68  mtctr 6
  001ee6c  lfs 5, 180(3)
  001ee70  fadds 4, 4, 5
  001ee74  lfs 5, 4(7)
  001ee78  addic 3, 3, 16
  001ee7c  lfs 6, 8(7)
  001ee80  lfs 7, 12(7)
  001ee84  addic 7, 7, 16
  001ee88  fadds 4, 4, 5
  001ee8c  fadds 4, 4, 6
  001ee90  fadds 4, 4, 7
  001ee94  bdnz 0x1ee6c
  001ee98  fadds 4, 4, 25
  001ee9c  fmadds 2, 4, 2, 3
  001eea0  bl 0x5025e0
  001eea4  nop
  001eea8  fmuls 2, 27, 27
  001eeac  lis 3, 114
  001eeb0  fmadds 2, 28, 28, 2
  001eeb4  lfs 28, 64(31)
  001eeb8  lfs 4, -12108(3)
  001eebc  fmadds 2, 26, 26, 2
  001eec0  fsqrts 3, 2
  001eec4  fmr 2, 28
  001eec8  fdivs 1, 1, 3
  001eecc  fmuls 1, 1, 4
  001eed0  bl 0x5025e0
  001eed4  nop
  001eed8  lis 3, 114
  001eedc  lfs 2, -12104(3)
  001eee0  fdivs 2, 1, 2
  001eee4  fmr 1, 28
  001eee8  bl 0x502578
  001eeec  nop
  001eef0  lfs 3, 20(31)
  001eef4  lfs 2, 16(31)
  001eef8  fsubs 5, 3, 30
  001eefc  fsubs 6, 2, 31
  001ef00  lfs 4, 24(31)
  001ef04  stfs 1, 64(31)
  001ef08  fsubs 7, 4, 29
  001ef0c  lis 3, 114
  001ef10  lis 4, 114
  001ef14  fmuls 5, 5, 5
  001ef18  lfs 28, -12112(3)
  001ef1c  fmadds 1, 6, 6, 5
  001ef20  fmadds 1, 7, 7, 1
  001ef24  fsqrts 5, 1
  001ef28  lfs 1, -3052(4)
  001ef2c  fmuls 6, 28, 1
  001ef30  fcmpu 0, 5, 6
  001ef34  cror 6, 1, 2
  001ef38  bt 6, 0x1ef90
  001ef3c  stw 29, 96(30)
  001ef40  lwz 30, 112(30)
  001ef44  lfs 2, 16(31)
  001ef48  lfs 3, 20(31)
  001ef4c  lfs 4, 24(31)
  001ef50  lwz 3, 0(30)
  001ef54  addic 3, 3, -1
  001ef58  cmpw 29, 3
  001ef5c  bf 2, 0x1ef90
  001ef60  lfs 2, 16(30)
  001ef64  lis 3, 114
  001ef68  stfs 2, 16(31)
  001ef6c  lfs 3, 20(30)
  001ef70  lis 4, 114
  001ef74  stfs 3, 20(31)
  001ef78  lfs 4, 24(30)
  001ef7c  stfs 4, 24(31)
  001ef80  lfs 1, 28(30)
  001ef84  stfs 1, 28(31)
  001ef88  lfs 28, -12112(3)
  001ef8c  lfs 1, -3052(4)
  001ef90  fsubs 5, 30, 3
  001ef94  fsubs 6, 31, 2
  001ef98  fsubs 7, 29, 4
  001ef9c  fmuls 1, 28, 1
  001efa0  fmuls 8, 5, 5
  001efa4  lfs 31, 72(31)
  001efa8  fmadds 8, 6, 6, 8
  001efac  fmadds 8, 7, 7, 8
  001efb0  fsqrts 8, 8
  001efb4  fdivs 1, 1, 8
  001efb8  fsub 9, 24, 8
  001efbc  fsub 10, 24, 8
  001efc0  fsub 13, 24, 8
  001efc4  fsub 11, 8, 24
  001efc8  fsub 12, 8, 24
  001efcc  fsub 8, 8, 24
  001efd0  fmuls 5, 5, 1
  001efd4  fmuls 6, 6, 1
  001efd8  fmuls 1, 7, 1
  001efdc  fsel 7, 9, 24, 5
  001efe0  fsel 9, 10, 24, 6
  001efe4  fsel 10, 13, 24, 1
  001efe8  fsel 5, 11, 7, 5
  001efec  fsel 6, 12, 9, 6
  001eff0  fsel 1, 8, 10, 1
  001eff4  fabs 7, 5
  001eff8  fabs 8, 6
  001effc  fadds 1, 4, 1
  001f000  fadds 2, 2, 6
  001f004  fadds 3, 3, 5
  001f008  stfs 6, 112(1)
  001f00c  stfs 5, 116(1)
  001f010  fsubs 4, 8, 7
  001f014  stfs 4, 120(1)
  001f018  lwz 3, 112(1)
  001f01c  lfs 4, 112(1)
  001f020  lwz 4, 116(1)
  001f024  stfs 2, 16(31)
  001f028  fabs 4, 4
  001f02c  stfs 3, 20(31)
  001f030  rlwinm 4, 4, 3, 29, 29
  001f034  stfs 1, 24(31)
  001f038  lfs 1, 116(1)
  001f03c  lwz 5, 120(1)
  001f040  fabs 3, 1
  001f044  lfs 1, 120(1)
  001f048  rlwimi 4, 5, 2, 30, 30
  001f04c  fsub 2, 1, 24
  001f050  rlwimi 4, 3, 4, 28, 28
  001f054  fsub 5, 1, 24
  001f058  ori 3, 28, 0
  001f05c  rlwimi 3, 4, 2, 26, 28
  001f060  slwi 4, 4, 2
  001f064  clrldi 3, 3, 32
  001f068  lfsx 1, 28, 4
  001f06c  fsel 4, 2, 4, 7
  001f070  lfs 2, 4(3)
  001f074  fsel 3, 5, 3, 8
  001f078  fcmpu 0, 4, 24
  001f07c  bt 1, 0x1f084
  001f080  b 0x1f198
  001f084  fsubs 5, 3, 4
  001f088  fadds 3, 3, 4
  001f08c  addic 3, 1, 16
  001f090  li 7, 2
  001f094  addic 4, 3, 132
  001f098  addic 5, 3, 148
  001f09c  mtctr 7
  001f0a0  fdivs 3, 5, 3
  001f0a4  fmuls 4, 3, 3
  001f0a8  stfs 3, 160(1)
  001f0ac  stfs 3, 152(1)
  001f0b0  stfs 3, 156(1)
  001f0b4  stfs 3, 148(1)
  001f0b8  lfs 6, 160(1)
  001f0bc  lfs 7, 152(1)
  001f0c0  lfs 8, 156(1)
  001f0c4  fmuls 5, 4, 4
  001f0c8  fmuls 7, 7, 4
  001f0cc  fmuls 6, 6, 5
  001f0d0  fmuls 3, 5, 5
  001f0d4  fmuls 5, 8, 5
  001f0d8  stfs 7, 152(1)
  001f0dc  fmuls 4, 6, 4
  001f0e0  stfs 5, 156(1)
  001f0e4  stfs 4, 160(1)
  001f0e8  lfs 4, 132(3)
  001f0ec  fmuls 4, 4, 3
  001f0f0  stfs 4, 148(3)
  001f0f4  lfs 4, 4(4)
  001f0f8  addic 3, 3, 8
  001f0fc  addic 4, 4, 8
  001f100  fmuls 4, 4, 3
  001f104  stfs 4, 4(5)
  001f108  addic 5, 5, 8
  001f10c  bdnz 0x1f0e8
  001f110  li 5, 4
  001f114  ori 3, 1, 0
  001f118  mtctr 5
  001f11c  lis 4, 115
  001f120  addic 5, 3, 148
  001f124  addic 4, 4, 22752
  001f128  ori 6, 5, 0
  001f12c  lfs 3, 148(3)
  001f130  lfs 4, 0(4)
  001f134  fmuls 3, 3, 4
  001f138  lfs 4, 4(4)
  001f13c  addic 4, 4, 8
  001f140  stfs 3, 148(3)
  001f144  lfs 3, 4(5)
  001f148  addic 3, 3, 8
  001f14c  fmuls 3, 3, 4
  001f150  stfs 3, 4(5)
  001f154  addic 5, 5, 8
  001f158  bdnz 0x1f12c
  001f15c  ori 3, 1, 0
  001f160  mtctr 7
  001f164  lfs 3, 148(3)
  001f168  lfs 4, 4(6)
  001f16c  fadds 3, 24, 3
  001f170  lfs 5, 8(6)
  001f174  lfs 24, 12(6)
  001f178  addic 3, 3, 16
  001f17c  addic 6, 6, 16
  001f180  fadds 3, 3, 4
  001f184  fadds 3, 3, 5
  001f188  fadds 24, 3, 24
  001f18c  bdnz 0x1f164
  001f190  fadds 24, 24, 25
  001f194  fmadds 24, 24, 1, 2
  001f198  fmr 1, 24
  001f19c  fmr 2, 31
  001f1a0  bl 0x5025e0
  001f1a4  nop
  001f1a8  lis 3, 114
  001f1ac  lfs 2, -12104(3)
  001f1b0  fdivs 2, 1, 2
  001f1b4  fmr 1, 31
  001f1b8  bl 0x502578
  001f1bc  nop
  001f1c0  lis 3, 16134
  001f1c4  stfs 1, 72(31)
  001f1c8  ori 3, 3, 2706
  001f1cc  stw 3, 68(31)
  001f1d0  ld 0, 368(1)
  001f1d4  mtlr 0
  001f1d8  lfd 24, 288(1)
  001f1dc  lfd 25, 296(1)
  001f1e0  lfd 26, 304(1)
  001f1e4  lfd 27, 312(1)
  001f1e8  lfd 28, 320(1)
  001f1ec  lfd 29, 328(1)
  001f1f0  lfd 30, 336(1)
  001f1f4  lfd 31, 344(1)
  001f1f8  ld 28, 256(1)
  001f1fc  ld 29, 264(1)
  001f200  ld 30, 272(1)
  001f204  ld 31, 280(1)
  001f208  addi 1, 1, 352
  001f20c  blr
