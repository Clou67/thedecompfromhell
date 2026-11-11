# sdk/libfios/psarclib_md5.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios5PSArc3MD56encodeEPhPjj:   # 0x52eb40, 0x50 bytes
  052eb40  cmpwi 7, 5, 0
  052eb44  bclr 12, 30
  052eb48  li 8, 0
  052eb4c  add 11, 8, 4
  052eb50  add 10, 8, 3
  052eb54  clrldi 11, 11, 32
  052eb58  clrldi 10, 10, 32
  052eb5c  addi 8, 8, 4
  052eb60  cmplw 7, 5, 8
  052eb64  lwz 9, 0(11)
  052eb68  stb 9, 0(10)
  052eb6c  lwz 0, 0(11)
  052eb70  srwi 0, 0, 8
  052eb74  stb 0, 1(10)
  052eb78  lhz 9, 0(11)
  052eb7c  stb 9, 2(10)
  052eb80  lbz 0, 0(11)
  052eb84  stb 0, 3(10)
  052eb88  bt 29, 0x52eb4c
  052eb8c  blr

_ZN4cell4fios5PSArc3MD56decodeEPjPKhj:   # 0x52eb90, 0x58 bytes
  052eb90  cmpwi 7, 5, 0
  052eb94  bclr 12, 30
  052eb98  li 6, 0
  052eb9c  add 11, 4, 6
  052eba0  add 7, 6, 3
  052eba4  clrldi 11, 11, 32
  052eba8  clrldi 7, 7, 32
  052ebac  addi 6, 6, 4
  052ebb0  cmplw 7, 5, 6
  052ebb4  lbz 10, 3(11)
  052ebb8  lbz 8, 1(11)
  052ebbc  lbz 9, 2(11)
  052ebc0  slwi 10, 10, 24
  052ebc4  lbz 0, 0(11)
  052ebc8  slwi 8, 8, 8
  052ebcc  slwi 9, 9, 16
  052ebd0  or 0, 0, 8
  052ebd4  or 9, 9, 10
  052ebd8  or 0, 0, 9
  052ebdc  stw 0, 0(7)
  052ebe0  bt 29, 0x52eb9c
  052ebe4  blr

_ZN4cell4fios5PSArc3MD59transformEPKh:   # 0x52ebe8, 0xb4c bytes
  052ebe8  stdu 1, -416(1)
  052ebec  mflr 0
  052ebf0  std 3, 176(1)
  052ebf4  ld 6, 176(1)
  052ebf8  addi 3, 1, 112
  052ebfc  std 0, 432(1)
  052ec00  std 26, 368(1)
  052ec04  std 27, 376(1)
  052ec08  std 28, 384(1)
  052ec0c  lwz 26, 8(6)
  052ec10  li 5, 64
  052ec14  lwz 28, 4(6)
  052ec18  lwz 27, 12(6)
  052ec1c  std 14, 272(1)
  052ec20  std 15, 280(1)
  052ec24  std 16, 288(1)
  052ec28  std 17, 296(1)
  052ec2c  std 18, 304(1)
  052ec30  std 19, 312(1)
  052ec34  std 20, 320(1)
  052ec38  std 21, 328(1)
  052ec3c  std 22, 336(1)
  052ec40  std 23, 344(1)
  052ec44  std 24, 352(1)
  052ec48  std 25, 360(1)
  052ec4c  std 29, 392(1)
  052ec50  std 30, 400(1)
  052ec54  std 31, 408(1)
  052ec58  lwz 29, 0(6)
  052ec5c  bl 0x52eb90
  052ec60  andc 11, 27, 28
  052ec64  lwz 3, 112(1)
  052ec68  and 0, 28, 26
  052ec6c  lwz 4, 116(1)
  052ec70  addis 9, 3, -10389
  052ec74  lwz 5, 120(1)
  052ec78  or 0, 0, 11
  052ec7c  lwz 6, 124(1)
  052ec80  addi 9, 9, -23432
  052ec84  lwz 25, 128(1)
  052ec88  add 29, 29, 0
  052ec8c  lwz 31, 136(1)
  052ec90  addis 11, 4, -5944
  052ec94  add 9, 9, 29
  052ec98  lwz 29, 132(1)
  052ec9c  addi 11, 11, -18602
  052eca0  rotlwi 9, 9, 7
  052eca4  addis 8, 5, 9248
  052eca8  add 9, 28, 9
  052ecac  addi 8, 8, 28891
  052ecb0  andc 10, 26, 9
  052ecb4  and 0, 28, 9
  052ecb8  addis 7, 6, -15938
  052ecbc  or 0, 0, 10
  052ecc0  addi 7, 7, -12562
  052ecc4  add 27, 27, 0
  052ecc8  addis 6, 25, -2692
  052eccc  lwz 25, 144(1)
  052ecd0  add 11, 11, 27
  052ecd4  addi 6, 6, 4015
  052ecd8  rotlwi 11, 11, 12
  052ecdc  addis 5, 29, 18312
  052ece0  add 11, 9, 11
  052ece4  addi 5, 5, -14806
  052ece8  andc 10, 28, 11
  052ecec  and 0, 9, 11
  052ecf0  addis 4, 31, -22480
  052ecf4  lwz 31, 148(1)
  052ecf8  or 0, 0, 10
  052ecfc  addi 4, 4, 17939
  052ed00  add 26, 26, 0
  052ed04  addis 29, 25, 27009
  052ed08  lwz 25, 152(1)
  052ed0c  add 8, 8, 26
  052ed10  addi 29, 29, -26408
  052ed14  rotlwi 8, 8, 17
  052ed18  add 8, 11, 8
  052ed1c  andc 10, 9, 8
  052ed20  and 0, 11, 8
  052ed24  or 0, 0, 10
  052ed28  lwz 10, 140(1)
  052ed2c  add 28, 28, 0
  052ed30  addis 3, 10, -697
  052ed34  add 7, 7, 28
  052ed38  addi 3, 3, -27391
  052ed3c  rotlwi 7, 7, 22
  052ed40  addis 28, 25, -1
  052ed44  lwz 25, 160(1)
  052ed48  add 7, 8, 7
  052ed4c  addi 28, 28, 23473
  052ed50  andc 10, 11, 7
  052ed54  and 0, 8, 7
  052ed58  or 0, 0, 10
  052ed5c  addis 10, 31, -29883
  052ed60  lwz 31, 156(1)
  052ed64  add 9, 9, 0
  052ed68  addi 10, 10, -2129
  052ed6c  add 6, 6, 9
  052ed70  addis 27, 31, -30371
  052ed74  lwz 31, 164(1)
  052ed78  rotlwi 6, 6, 7
  052ed7c  addi 27, 27, -10306
  052ed80  add 6, 7, 6
  052ed84  addis 26, 31, -616
  052ed88  lwz 31, 172(1)
  052ed8c  andc 9, 8, 6
  052ed90  and 0, 7, 6
  052ed94  addi 26, 26, 29075
  052ed98  or 0, 0, 9
  052ed9c  add 11, 11, 0
  052eda0  add 5, 5, 11
  052eda4  addis 11, 25, 27536
  052eda8  rotlwi 5, 5, 12
  052edac  addi 11, 11, 4386
  052edb0  add 5, 6, 5
  052edb4  andc 9, 7, 5
  052edb8  and 0, 6, 5
  052edbc  or 0, 0, 9
  052edc0  add 8, 8, 0
  052edc4  lwz 0, 168(1)
  052edc8  add 4, 4, 8
  052edcc  mtctr 0
  052edd0  rotlwi 4, 4, 17
  052edd4  add 4, 5, 4
  052edd8  andc 9, 6, 4
  052eddc  and 0, 5, 4
  052ede0  or 0, 0, 9
  052ede4  lwz 9, 116(1)
  052ede8  add 7, 7, 0
  052edec  add 3, 3, 7
  052edf0  addis 7, 9, -2530
  052edf4  rotlwi 3, 3, 22
  052edf8  addi 7, 7, 9570
  052edfc  add 3, 4, 3
  052ee00  andc 9, 5, 3
  052ee04  and 0, 4, 3
  052ee08  or 0, 0, 9
  052ee0c  lwz 9, 112(1)
  052ee10  add 6, 6, 0
  052ee14  add 29, 29, 6
  052ee18  lwz 6, 156(1)
  052ee1c  rotlwi 29, 29, 7
  052ee20  addis 23, 6, 9822
  052ee24  add 29, 3, 29
  052ee28  mfctr 25
  052ee2c  addis 6, 9, -5705
  052ee30  and 0, 3, 29
  052ee34  andc 9, 4, 29
  052ee38  addis 8, 25, -22919
  052ee3c  or 0, 0, 9
  052ee40  lwz 9, 172(1)
  052ee44  addis 25, 31, 18868
  052ee48  lwz 31, 136(1)
  052ee4c  add 5, 5, 0
  052ee50  addis 20, 9, -10078
  052ee54  add 10, 10, 5
  052ee58  lwz 5, 152(1)
  052ee5c  addis 24, 31, -16319
  052ee60  lwz 31, 132(1)
  052ee64  rotlwi 10, 10, 12
  052ee68  addis 21, 5, 580
  052ee6c  mfctr 5
  052ee70  add 10, 29, 10
  052ee74  addis 22, 31, -10705
  052ee78  lwz 31, 128(1)
  052ee7c  andc 9, 3, 10
  052ee80  and 0, 29, 10
  052ee84  addis 19, 31, -6188
  052ee88  lwz 31, 144(1)
  052ee8c  or 0, 0, 9
  052ee90  addis 16, 31, 17754
  052ee94  lwz 31, 160(1)
  052ee98  add 4, 4, 0
  052ee9c  addi 8, 8, 17294
  052eea0  add 28, 28, 4
  052eea4  lwz 4, 148(1)
  052eea8  addi 25, 25, 2081
  052eeac  rotlwi 28, 28, 17
  052eeb0  addis 18, 4, 8674
  052eeb4  add 28, 10, 28
  052eeb8  addis 4, 5, -15561
  052eebc  lwz 5, 164(1)
  052eec0  andc 9, 29, 28
  052eec4  and 0, 10, 28
  052eec8  addi 24, 24, -19648
  052eecc  or 0, 0, 9
  052eed0  lwz 9, 124(1)
  052eed4  addi 23, 23, 23121
  052eed8  add 3, 3, 0
  052eedc  addis 17, 9, -2859
  052eee0  add 27, 27, 3
  052eee4  addis 3, 5, -22044
  052eee8  lwz 5, 132(1)
  052eeec  rotlwi 27, 27, 22
  052eef0  addis 12, 5, -6
  052eef4  add 27, 28, 27
  052eef8  addi 6, 6, -14422
  052eefc  andc 9, 10, 27
  052ef00  and 0, 28, 27
  052ef04  addi 22, 22, 4189
  052ef08  or 0, 0, 9
  052ef0c  lwz 9, 120(1)
  052ef10  addi 21, 21, 5203
  052ef14  add 29, 29, 0
  052ef18  addis 15, 9, -784
  052ef1c  add 11, 11, 29
  052ef20  lwz 29, 140(1)
  052ef24  addi 20, 20, -6527
  052ef28  rotlwi 11, 11, 7
  052ef2c  addis 14, 29, 26479
  052ef30  add 11, 27, 11
  052ef34  addis 29, 31, -29398
  052ef38  lwz 31, 156(1)
  052ef3c  andc 9, 28, 11
  052ef40  and 0, 27, 11
  052ef44  addi 19, 19, -1080
  052ef48  or 0, 0, 9
  052ef4c  lwz 9, 144(1)
  052ef50  addi 18, 18, -12826
  052ef54  add 10, 10, 0
  052ef58  addis 9, 9, -30862
  052ef5c  add 26, 26, 10
  052ef60  addi 9, 9, -2431
  052ef64  rotlwi 26, 26, 12
  052ef68  mtlr 9
  052ef6c  addis 10, 31, 28061
  052ef70  add 26, 11, 26
  052ef74  addi 10, 10, 24866
  052ef78  not 5, 26
  052ef7c  and 0, 11, 26
  052ef80  and 9, 27, 5
  052ef84  stw 10, 184(1)
  052ef88  mfctr 10
  052ef8c  or 0, 0, 9
  052ef90  lwz 31, 116(1)
  052ef94  addis 9, 10, -539
  052ef98  add 28, 28, 0
  052ef9c  addi 9, 9, 14348
  052efa0  add 8, 8, 28
  052efa4  stw 9, 188(1)
  052efa8  rotlwi 8, 8, 17
  052efac  lwz 9, 128(1)
  052efb0  addis 28, 31, -23361
  052efb4  add 8, 26, 8
  052efb8  addis 31, 9, 19423
  052efbc  not 10, 8
  052efc0  and 0, 26, 8
  052efc4  and 9, 11, 10
  052efc8  and 5, 5, 8
  052efcc  or 0, 0, 9
  052efd0  addi 31, 31, -12375
  052efd4  add 27, 27, 0
  052efd8  stw 31, 192(1)
  052efdc  add 25, 25, 27
  052efe0  lwz 31, 140(1)
  052efe4  addi 4, 4, 2006
  052efe8  rotlwi 25, 25, 22
  052efec  addis 9, 31, -2373
  052eff0  lwz 31, 164(1)
  052eff4  add 25, 8, 25
  052eff8  addi 9, 9, 19296
  052effc  and 0, 26, 25
  052f000  and 10, 10, 25
  052f004  or 0, 0, 5
  052f008  stw 9, 196(1)
  052f00c  add 11, 11, 0
  052f010  lwz 9, 152(1)
  052f014  addis 5, 31, 10395
  052f018  add 7, 7, 11
  052f01c  addis 27, 9, -16704
  052f020  lwz 9, 112(1)
  052f024  rotlwi 7, 7, 5
  052f028  addis 11, 9, -5471
  052f02c  lwz 9, 124(1)
  052f030  add 7, 25, 7
  052f034  addis 31, 9, -11025
  052f038  and 0, 8, 7
  052f03c  andc 9, 7, 25
  052f040  or 0, 0, 10
  052f044  addi 31, 31, 12421
  052f048  add 26, 26, 0
  052f04c  stw 31, 200(1)
  052f050  add 24, 24, 26
  052f054  lwz 31, 136(1)
  052f058  addi 17, 17, 3463
  052f05c  rotlwi 24, 24, 9
  052f060  addis 10, 31, 1160
  052f064  lwz 31, 148(1)
  052f068  add 24, 7, 24
  052f06c  addis 26, 31, -9771
  052f070  lwz 31, 160(1)
  052f074  and 0, 25, 24
  052f078  andc 30, 24, 7
  052f07c  or 0, 0, 9
  052f080  addis 9, 31, -6436
  052f084  add 8, 8, 0
  052f088  addi 9, 9, -26139
  052f08c  add 23, 23, 8
  052f090  stw 9, 204(1)
  052f094  rotlwi 23, 23, 14
  052f098  lwz 9, 172(1)
  052f09c  addi 16, 16, 5357
  052f0a0  add 23, 24, 23
  052f0a4  addis 8, 9, 8098
  052f0a8  lwz 9, 120(1)
  052f0ac  and 0, 7, 23
  052f0b0  addis 31, 9, -15188
  052f0b4  or 0, 0, 30
  052f0b8  andc 9, 23, 24
  052f0bc  add 25, 25, 0
  052f0c0  stw 9, 256(1)
  052f0c4  add 6, 6, 25
  052f0c8  lwz 9, 112(1)
  052f0cc  addi 30, 31, 22117
  052f0d0  lwz 25, 140(1)
  052f0d4  rotlwi 6, 6, 20
  052f0d8  addis 31, 9, -3031
  052f0dc  lwz 9, 256(1)
  052f0e0  add 6, 23, 6
  052f0e4  addi 31, 31, 8772
  052f0e8  and 0, 24, 6
  052f0ec  stw 31, 208(1)
  052f0f0  or 0, 0, 9
  052f0f4  mfctr 9
  052f0f8  addis 31, 25, 17195
  052f0fc  add 7, 7, 0
  052f100  andc 25, 6, 23
  052f104  add 22, 22, 7
  052f108  lwz 7, 132(1)
  052f10c  addis 9, 9, -21612
  052f110  rotlwi 22, 22, 5
  052f114  addi 9, 9, 9127
  052f118  add 22, 6, 22
  052f11c  mtctr 9
  052f120  addis 9, 7, -876
  052f124  and 0, 23, 22
  052f128  addi 9, 9, -24519
  052f12c  or 0, 0, 25
  052f130  lwz 25, 124(1)
  052f134  stw 9, 212(1)
  052f138  add 24, 24, 0
  052f13c  lwz 9, 160(1)
  052f140  addi 3, 3, -5883
  052f144  add 21, 21, 24
  052f148  addis 7, 9, 25947
  052f14c  rotlwi 21, 21, 9
  052f150  andc 9, 22, 6
  052f154  add 21, 22, 21
  052f158  addi 7, 7, 22979
  052f15c  and 0, 6, 21
  052f160  stw 7, 216(1)
  052f164  or 0, 0, 9
  052f168  addis 7, 25, -28915
  052f16c  lwz 25, 152(1)
  052f170  add 23, 23, 0
  052f174  addi 7, 7, -13166
  052f178  add 20, 20, 23
  052f17c  stw 7, 220(1)
  052f180  rotlwi 20, 20, 14
  052f184  addis 7, 25, -16
  052f188  lwz 25, 116(1)
  052f18c  add 20, 21, 20
  052f190  addi 7, 7, -2947
  052f194  and 0, 22, 20
  052f198  stw 7, 224(1)
  052f19c  andc 7, 21, 22
  052f1a0  addis 9, 25, -31356
  052f1a4  lwz 25, 144(1)
  052f1a8  or 0, 0, 7
  052f1ac  addi 9, 9, 24017
  052f1b0  add 6, 6, 0
  052f1b4  stw 9, 228(1)
  052f1b8  add 19, 19, 6
  052f1bc  addis 9, 25, 28584
  052f1c0  rotlwi 19, 19, 20
  052f1c4  addi 9, 9, 32335
  052f1c8  add 19, 20, 19
  052f1cc  stw 9, 232(1)
  052f1d0  lwz 9, 172(1)
  052f1d4  and 0, 21, 19
  052f1d8  lwz 6, 164(1)
  052f1dc  addi 15, 15, -23560
  052f1e0  addis 25, 9, -467
  052f1e4  andc 9, 20, 21
  052f1e8  addis 7, 6, 19976
  052f1ec  or 0, 0, 9
  052f1f0  lwz 9, 128(1)
  052f1f4  addi 7, 7, 4513
  052f1f8  add 22, 22, 0
  052f1fc  stw 7, 244(1)
  052f200  add 18, 18, 22
  052f204  andc 7, 19, 20
  052f208  rotlwi 18, 18, 5
  052f20c  addis 6, 9, -2221
  052f210  lwz 9, 120(1)
  052f214  add 18, 19, 18
  052f218  addi 6, 6, 32386
  052f21c  and 0, 20, 18
  052f220  stw 6, 248(1)
  052f224  or 0, 0, 7
  052f228  addis 6, 9, 10968
  052f22c  add 21, 21, 0
  052f230  andc 9, 18, 19
  052f234  add 4, 4, 21
  052f238  addi 25, 25, -6432
  052f23c  rotlwi 4, 4, 9
  052f240  stw 25, 236(1)
  052f244  add 4, 18, 4
  052f248  lwz 25, 136(1)
  052f24c  addi 14, 14, 729
  052f250  and 0, 19, 4
  052f254  addis 24, 25, -23807
  052f258  lwz 25, 156(1)
  052f25c  or 0, 0, 9
  052f260  ld 9, 176(1)
  052f264  addis 23, 25, -17093
  052f268  lwz 25, 148(1)
  052f26c  add 20, 20, 0
  052f270  addis 7, 25, -5241
  052f274  add 17, 17, 20
  052f278  addi 21, 7, -11375
  052f27c  lwz 25, 12(9)
  052f280  rotlwi 17, 17, 14
  052f284  andc 7, 4, 18
  052f288  add 17, 4, 17
  052f28c  addi 22, 23, -3531
  052f290  lwz 23, 8(9)
  052f294  and 0, 18, 17
  052f298  andc 9, 17, 4
  052f29c  or 0, 0, 7
  052f2a0  addi 29, 29, 19594
  052f2a4  add 19, 19, 0
  052f2a8  addi 12, 12, 14658
  052f2ac  add 16, 16, 19
  052f2b0  addi 28, 28, -5564
  052f2b4  rotlwi 16, 16, 20
  052f2b8  addi 27, 27, -17296
  052f2bc  add 16, 17, 16
  052f2c0  addi 5, 5, 32454
  052f2c4  and 0, 4, 16
  052f2c8  andc 7, 16, 17
  052f2cc  or 0, 0, 9
  052f2d0  addi 11, 11, 10234
  052f2d4  add 18, 18, 0
  052f2d8  addi 10, 10, 7429
  052f2dc  add 3, 3, 18
  052f2e0  addi 26, 26, -12231
  052f2e4  rotlwi 3, 3, 5
  052f2e8  addi 8, 8, 31992
  052f2ec  add 3, 16, 3
  052f2f0  addi 31, 31, -105
  052f2f4  and 0, 17, 3
  052f2f8  andc 9, 3, 16
  052f2fc  or 0, 0, 7
  052f300  addi 24, 24, 17172
  052f304  add 4, 4, 0
  052f308  stw 24, 240(1)
  052f30c  add 15, 15, 4
  052f310  addi 6, 6, -11589
  052f314  rotlwi 15, 15, 9
  052f318  stw 6, 252(1)
  052f31c  add 15, 3, 15
  052f320  ld 6, 176(1)
  052f324  and 0, 16, 15
  052f328  andc 7, 15, 3
  052f32c  or 0, 0, 9
  052f330  lwz 24, 4(6)
  052f334  add 17, 17, 0
  052f338  lwz 6, 0(6)
  052f33c  add 14, 14, 17
  052f340  rotlwi 14, 14, 14
  052f344  add 14, 15, 14
  052f348  and 0, 3, 14
  052f34c  xor 9, 15, 14
  052f350  or 0, 0, 7
  052f354  add 16, 16, 0
  052f358  add 29, 29, 16
  052f35c  rotlwi 29, 29, 20
  052f360  add 29, 14, 29
  052f364  xor 9, 29, 9
  052f368  xor 0, 14, 29
  052f36c  add 3, 3, 9
  052f370  add 12, 12, 3
  052f374  lwz 3, 184(1)
  052f378  rotlwi 12, 12, 4
  052f37c  add 12, 29, 12
  052f380  xor 0, 12, 0
  052f384  xor 9, 29, 12
  052f388  add 15, 15, 0
  052f38c  mflr 0
  052f390  add 0, 0, 15
  052f394  rotlwi 0, 0, 11
  052f398  add 0, 12, 0
  052f39c  mtlr 0
  052f3a0  xor 9, 0, 9
  052f3a4  xor 0, 12, 0
  052f3a8  add 14, 14, 9
  052f3ac  add 9, 3, 14
  052f3b0  lwz 3, 188(1)
  052f3b4  rotlwi 9, 9, 16
  052f3b8  mflr 7
  052f3bc  add 4, 7, 9
  052f3c0  xor 0, 4, 0
  052f3c4  xor 9, 7, 4
  052f3c8  add 29, 29, 0
  052f3cc  add 0, 3, 29
  052f3d0  lwz 29, 192(1)
  052f3d4  rotlwi 0, 0, 23
  052f3d8  add 3, 4, 0
  052f3dc  xor 9, 3, 9
  052f3e0  xor 0, 4, 3
  052f3e4  add 12, 12, 9
  052f3e8  add 28, 28, 12
  052f3ec  rotlwi 28, 28, 4
  052f3f0  add 28, 3, 28
  052f3f4  xor 0, 28, 0
  052f3f8  xor 9, 3, 28
  052f3fc  add 7, 7, 0
  052f400  add 0, 29, 7
  052f404  lwz 29, 204(1)
  052f408  rotlwi 0, 0, 11
  052f40c  add 7, 28, 0
  052f410  xor 9, 7, 9
  052f414  xor 0, 28, 7
  052f418  add 9, 4, 9
  052f41c  lwz 4, 196(1)
  052f420  add 9, 4, 9
  052f424  rotlwi 9, 9, 16
  052f428  add 4, 7, 9
  052f42c  xor 0, 4, 0
  052f430  xor 9, 7, 4
  052f434  add 0, 3, 0
  052f438  add 27, 27, 0
  052f43c  rotlwi 27, 27, 23
  052f440  add 27, 4, 27
  052f444  xor 9, 27, 9
  052f448  xor 0, 4, 27
  052f44c  add 28, 28, 9
  052f450  add 5, 5, 28
  052f454  rotlwi 5, 5, 4
  052f458  add 5, 27, 5
  052f45c  xor 0, 5, 0
  052f460  xor 9, 27, 5
  052f464  add 28, 7, 0
  052f468  lwz 7, 200(1)
  052f46c  add 11, 11, 28
  052f470  rotlwi 11, 11, 11
  052f474  add 11, 5, 11
  052f478  xor 9, 11, 9
  052f47c  xor 0, 5, 11
  052f480  add 9, 4, 9
  052f484  mfctr 4
  052f488  add 9, 7, 9
  052f48c  rotlwi 9, 9, 16
  052f490  add 7, 11, 9
  052f494  xor 0, 7, 0
  052f498  xor 9, 11, 7
  052f49c  add 27, 27, 0
  052f4a0  add 10, 10, 27
  052f4a4  rotlwi 10, 10, 23
  052f4a8  add 10, 7, 10
  052f4ac  xor 9, 10, 9
  052f4b0  xor 0, 7, 10
  052f4b4  add 5, 5, 9
  052f4b8  add 26, 26, 5
  052f4bc  lwz 5, 212(1)
  052f4c0  rotlwi 26, 26, 4
  052f4c4  add 26, 10, 26
  052f4c8  xor 0, 26, 0
  052f4cc  xor 9, 10, 26
  052f4d0  add 11, 11, 0
  052f4d4  add 28, 29, 11
  052f4d8  lwz 29, 228(1)
  052f4dc  rotlwi 28, 28, 11
  052f4e0  add 28, 26, 28
  052f4e4  xor 9, 28, 9
  052f4e8  xor 0, 26, 28
  052f4ec  add 11, 7, 9
  052f4f0  lwz 7, 216(1)
  052f4f4  add 8, 8, 11
  052f4f8  rotlwi 8, 8, 16
  052f4fc  add 8, 28, 8
  052f500  xor 0, 8, 0
  052f504  add 10, 10, 0
  052f508  add 9, 30, 10
  052f50c  lwz 10, 220(1)
  052f510  rotlwi 0, 9, 23
  052f514  add 11, 8, 0
  052f518  orc 0, 11, 28
  052f51c  xor 0, 8, 0
  052f520  add 26, 26, 0
  052f524  lwz 0, 208(1)
  052f528  add 9, 0, 26
  052f52c  rotlwi 0, 9, 6
  052f530  add 9, 11, 0
  052f534  orc 0, 9, 8
  052f538  xor 0, 11, 0
  052f53c  add 3, 28, 0
  052f540  add 3, 31, 3
  052f544  lwz 31, 232(1)
  052f548  rotlwi 0, 3, 10
  052f54c  add 3, 9, 0
  052f550  orc 0, 3, 11
  052f554  xor 0, 9, 0
  052f558  add 8, 8, 0
  052f55c  add 0, 4, 8
  052f560  rotlwi 0, 0, 15
  052f564  add 4, 3, 0
  052f568  orc 0, 4, 9
  052f56c  xor 0, 3, 0
  052f570  add 0, 11, 0
  052f574  lwz 11, 224(1)
  052f578  add 0, 5, 0
  052f57c  rotlwi 0, 0, 21
  052f580  add 5, 4, 0
  052f584  orc 0, 5, 3
  052f588  xor 0, 4, 0
  052f58c  add 0, 9, 0
  052f590  add 0, 7, 0
  052f594  lwz 7, 248(1)
  052f598  rotlwi 0, 0, 6
  052f59c  add 9, 5, 0
  052f5a0  orc 0, 9, 4
  052f5a4  xor 0, 5, 0
  052f5a8  add 0, 3, 0
  052f5ac  add 0, 10, 0
  052f5b0  ld 10, 176(1)
  052f5b4  rotlwi 0, 0, 10
  052f5b8  add 3, 9, 0
  052f5bc  orc 0, 3, 5
  052f5c0  xor 0, 9, 0
  052f5c4  add 0, 4, 0
  052f5c8  add 0, 11, 0
  052f5cc  rotlwi 0, 0, 15
  052f5d0  add 4, 3, 0
  052f5d4  orc 0, 4, 9
  052f5d8  xor 0, 3, 0
  052f5dc  add 0, 5, 0
  052f5e0  add 0, 29, 0
  052f5e4  rotlwi 0, 0, 21
  052f5e8  add 5, 4, 0
  052f5ec  orc 0, 5, 3
  052f5f0  xor 0, 4, 0
  052f5f4  add 0, 9, 0
  052f5f8  add 0, 31, 0
  052f5fc  rotlwi 0, 0, 6
  052f600  add 9, 5, 0
  052f604  orc 0, 9, 4
  052f608  xor 0, 5, 0
  052f60c  add 0, 3, 0
  052f610  lwz 3, 236(1)
  052f614  add 0, 3, 0
  052f618  rotlwi 0, 0, 10
  052f61c  add 3, 9, 0
  052f620  orc 0, 3, 5
  052f624  xor 0, 9, 0
  052f628  add 0, 4, 0
  052f62c  lwz 4, 240(1)
  052f630  add 0, 4, 0
  052f634  rotlwi 0, 0, 15
  052f638  add 4, 3, 0
  052f63c  orc 0, 4, 9
  052f640  xor 0, 3, 0
  052f644  add 0, 5, 0
  052f648  lwz 5, 244(1)
  052f64c  add 0, 5, 0
  052f650  rotlwi 0, 0, 21
  052f654  add 5, 4, 0
  052f658  orc 0, 5, 3
  052f65c  xor 0, 4, 0
  052f660  add 0, 9, 0
  052f664  add 0, 7, 0
  052f668  rotlwi 0, 0, 6
  052f66c  add 9, 5, 0
  052f670  orc 0, 9, 4
  052f674  add 6, 9, 6
  052f678  xor 0, 5, 0
  052f67c  stw 6, 0(10)
  052f680  add 0, 3, 0
  052f684  lwz 11, 252(1)
  052f688  ld 14, 272(1)
  052f68c  add 0, 22, 0
  052f690  ld 15, 280(1)
  052f694  ld 16, 288(1)
  052f698  rotlwi 0, 0, 10
  052f69c  ld 17, 296(1)
  052f6a0  ld 18, 304(1)
  052f6a4  add 3, 9, 0
  052f6a8  ld 19, 312(1)
  052f6ac  ld 20, 320(1)
  052f6b0  orc 0, 3, 5
  052f6b4  ld 22, 336(1)
  052f6b8  add 25, 3, 25
  052f6bc  ld 26, 368(1)
  052f6c0  xor 0, 9, 0
  052f6c4  ld 27, 376(1)
  052f6c8  stw 25, 12(10)
  052f6cc  add 0, 4, 0
  052f6d0  ld 25, 360(1)
  052f6d4  ld 28, 384(1)
  052f6d8  add 0, 11, 0
  052f6dc  ld 29, 392(1)
  052f6e0  ld 30, 400(1)
  052f6e4  rotlwi 0, 0, 15
  052f6e8  ld 31, 408(1)
  052f6ec  add 0, 3, 0
  052f6f0  orc 6, 0, 9
  052f6f4  add 24, 0, 24
  052f6f8  xor 3, 3, 6
  052f6fc  add 4, 0, 23
  052f700  ld 23, 344(1)
  052f704  add 0, 5, 3
  052f708  stw 4, 8(10)
  052f70c  add 0, 21, 0
  052f710  ld 21, 328(1)
  052f714  rotlwi 0, 0, 21
  052f718  add 0, 0, 24
  052f71c  ld 24, 352(1)
  052f720  stw 0, 4(10)
  052f724  ld 0, 432(1)
  052f728  addi 1, 1, 416
  052f72c  mtlr 0
  052f730  blr

_ZN4cell4fios5PSArc3MD54initEv:   # 0x52f734, 0x8c bytes
  052f734  lis 10, 26437
  052f738  lis 8, -4147
  052f73c  lis 7, -26438
  052f740  lis 6, 4146
  052f744  addi 9, 3, 88
  052f748  li 0, 0
  052f74c  ori 10, 10, 8961
  052f750  ori 8, 8, 43913
  052f754  ori 7, 7, 56574
  052f758  ori 6, 6, 21622
  052f75c  li 11, 0
  052f760  stw 10, 0(3)
  052f764  stb 11, 104(3)
  052f768  stw 8, 4(3)
  052f76c  stw 7, 8(3)
  052f770  stw 6, 12(3)
  052f774  stw 0, 16(3)
  052f778  stw 0, 20(3)
  052f77c  stb 0, 15(9)
  052f780  stb 0, 0(9)
  052f784  stb 0, 1(9)
  052f788  stb 0, 2(9)
  052f78c  stb 0, 3(9)
  052f790  stb 0, 4(9)
  052f794  stb 0, 5(9)
  052f798  stb 0, 6(9)
  052f79c  stb 0, 7(9)
  052f7a0  stb 0, 8(9)
  052f7a4  stb 0, 9(9)
  052f7a8  stb 0, 10(9)
  052f7ac  stb 0, 11(9)
  052f7b0  stb 0, 12(9)
  052f7b4  stb 0, 13(9)
  052f7b8  stb 0, 14(9)
  052f7bc  blr

thunk_FUN_0052f734:   # 0x52f7c0, 0x4 bytes
  052f7c0  b 0x52f734

thunk_FUN_0052f734:   # 0x52f7c4, 0x4 bytes
  052f7c4  b 0x52f734

_ZN4cell4fios5PSArc3MD56updateEPKhj:   # 0x52f7c8, 0x170 bytes
  052f7c8  stdu 1, -160(1)
  052f7cc  mflr 0
  052f7d0  std 26, 112(1)
  052f7d4  std 27, 120(1)
  052f7d8  std 29, 136(1)
  052f7dc  std 28, 128(1)
  052f7e0  std 30, 144(1)
  052f7e4  std 31, 152(1)
  052f7e8  std 0, 176(1)
  052f7ec  lbz 0, 104(3)
  052f7f0  mr 27, 4
  052f7f4  mr 11, 3
  052f7f8  cmpwi 7, 0, 0
  052f7fc  mr 29, 5
  052f800  clrldi 26, 3, 32
  052f804  bf 30, 0x52f878
  052f808  lwz 0, 16(3)
  052f80c  slwi 9, 5, 3
  052f810  rldicl 10, 0, 61, 58
  052f814  add 0, 0, 9
  052f818  cmplw 7, 9, 0
  052f81c  stw 0, 16(3)
  052f820  bf 29, 0x52f8a0
  052f824  lwz 9, 20(3)
  052f828  subfic 31, 10, 64
  052f82c  srwi 0, 29, 29
  052f830  addi 9, 9, 1
  052f834  cmplw 7, 29, 31
  052f838  add 0, 9, 0
  052f83c  stw 9, 20(3)
  052f840  mr 4, 10
  052f844  stw 0, 20(3)
  052f848  li 30, 0
  052f84c  li 9, 0
  052f850  addi 28, 11, 24
  052f854  bf 28, 0x52f8cc
  052f858  add 3, 28, 4
  052f85c  sub 5, 29, 30
  052f860  add 4, 27, 9
  052f864  clrldi 3, 3, 32
  052f868  clrldi 4, 4, 32
  052f86c  clrldi 5, 5, 32
  052f870  bl 0x5c5ad0
  052f874  nop
  052f878  ld 0, 176(1)
  052f87c  ld 26, 112(1)
  052f880  ld 27, 120(1)
  052f884  mtlr 0
  052f888  ld 28, 128(1)
  052f88c  ld 29, 136(1)
  052f890  ld 30, 144(1)
  052f894  ld 31, 152(1)
  052f898  addi 1, 1, 160
  052f89c  blr
  052f8a0  subfic 31, 10, 64
  052f8a4  lwz 9, 20(3)
  052f8a8  srwi 0, 29, 29
  052f8ac  cmplw 7, 29, 31
  052f8b0  add 0, 9, 0
  052f8b4  mr 4, 10
  052f8b8  stw 0, 20(3)
  052f8bc  li 30, 0
  052f8c0  li 9, 0
  052f8c4  addi 28, 11, 24
  052f8c8  bt 28, 0x52f858
  052f8cc  add 3, 28, 10
  052f8d0  clrldi 4, 27, 32
  052f8d4  clrldi 5, 31, 32
  052f8d8  clrldi 3, 3, 32
  052f8dc  mr 30, 31
  052f8e0  bl 0x5c5ad0
  052f8e4  nop
  052f8e8  clrldi 4, 28, 32
  052f8ec  mr 3, 26
  052f8f0  bl 0x52ebe8
  052f8f4  addi 0, 31, 63
  052f8f8  mr 9, 31
  052f8fc  cmplw 7, 0, 29
  052f900  li 4, 0
  052f904  bf 28, 0x52f858
  052f908  add 31, 27, 31
  052f90c  clrldi 4, 31, 32
  052f910  addi 30, 30, 64
  052f914  mr 3, 26
  052f918  addi 31, 31, 64
  052f91c  bl 0x52ebe8
  052f920  addi 0, 30, 63
  052f924  cmplw 7, 0, 29
  052f928  bt 28, 0x52f90c
  052f92c  mr 9, 30
  052f930  li 4, 0
  052f934  b 0x52f858

_ZN4cell4fios5PSArc3MD58finalizeEv:   # 0x52f938, 0xe0 bytes
  052f938  stdu 1, -160(1)
  052f93c  mflr 0
  052f940  std 30, 144(1)
  052f944  mr 30, 3
  052f948  std 28, 128(1)
  052f94c  std 29, 136(1)
  052f950  std 31, 152(1)
  052f954  std 0, 176(1)
  052f958  lbz 0, 104(30)
  052f95c  addi 28, 1, 112
  052f960  addi 4, 30, 16
  052f964  cmpwi 7, 0, 0
  052f968  li 5, 8
  052f96c  mr 3, 28
  052f970  mr 31, 30
  052f974  clrldi 29, 30, 32
  052f978  clrldi 4, 4, 32
  052f97c  bt 30, 0x52f9a0
  052f980  ld 0, 176(1)
  052f984  ld 28, 128(1)
  052f988  ld 29, 136(1)
  052f98c  mtlr 0
  052f990  ld 30, 144(1)
  052f994  ld 31, 152(1)
  052f998  addi 1, 1, 160
  052f99c  blr
  052f9a0  bl 0x52eb40
  052f9a4  lwz 0, 16(30)
  052f9a8  mr 3, 29
  052f9ac  rldicl 0, 0, 61, 58
  052f9b0  cmplwi 7, 0, 55
  052f9b4  subfic 5, 0, 56
  052f9b8  bf 29, 0x52f9c0
  052f9bc  subfic 5, 0, 120
  052f9c0  clrldi 5, 5, 32
  052f9c4  lwz 4, -29788(2)
  052f9c8  bl 0x52f7c8
  052f9cc  mr 3, 29
  052f9d0  mr 4, 28
  052f9d4  li 5, 8
  052f9d8  bl 0x52f7c8
  052f9dc  addi 3, 31, 88
  052f9e0  mr 4, 29
  052f9e4  clrldi 3, 3, 32
  052f9e8  li 5, 16
  052f9ec  bl 0x52eb40
  052f9f0  li 0, 1
  052f9f4  stb 0, 104(30)
  052f9f8  ld 0, 176(1)
  052f9fc  ld 28, 128(1)
  052fa00  ld 29, 136(1)
  052fa04  mtlr 0
  052fa08  ld 30, 144(1)
  052fa0c  ld 31, 152(1)
  052fa10  addi 1, 1, 160
  052fa14  blr

_ZN4cell4fios5PSArc3MD512updateStringEPKcb:   # 0x52fa18, 0xe0 bytes
  052fa18  cmpwi 7, 5, 0
  052fa1c  mflr 0
  052fa20  stdu 1, -160(1)
  052fa24  std 29, 136(1)
  052fa28  std 30, 144(1)
  052fa2c  std 31, 152(1)
  052fa30  std 0, 176(1)
  052fa34  mr 29, 4
  052fa38  bt 30, 0x52fab0
  052fa3c  lbz 9, 0(4)
  052fa40  clrldi 31, 3, 32
  052fa44  cmpwi 7, 9, 0
  052fa48  bt 30, 0x52fa8c
  052fa4c  addi 30, 1, 112
  052fa50  addi 0, 9, -97
  052fa54  mr 3, 31
  052fa58  clrlwi 0, 0, 24
  052fa5c  clrldi 4, 30, 32
  052fa60  cmplwi 7, 0, 25
  052fa64  li 5, 1
  052fa68  addi 11, 9, -32
  052fa6c  stb 9, 112(1)
  052fa70  addi 29, 29, 1
  052fa74  bt 29, 0x52fa7c
  052fa78  stb 11, 112(1)
  052fa7c  bl 0x52f7c8
  052fa80  lbz 9, 0(29)
  052fa84  cmpwi 7, 9, 0
  052fa88  bf 30, 0x52fa50
  052fa8c  mr 3, 31
  052fa90  bl 0x52f938
  052fa94  ld 0, 176(1)
  052fa98  ld 29, 136(1)
  052fa9c  ld 30, 144(1)
  052faa0  mtlr 0
  052faa4  ld 31, 152(1)
  052faa8  addi 1, 1, 160
  052faac  blr
  052fab0  clrldi 29, 4, 32
  052fab4  clrldi 31, 3, 32
  052fab8  mr 3, 29
  052fabc  bl 0x5c8510
  052fac0  nop
  052fac4  mr 4, 29
  052fac8  clrldi 5, 3, 32
  052facc  mr 3, 31
  052fad0  bl 0x52f7c8
  052fad4  mr 3, 31
  052fad8  bl 0x52f938
  052fadc  ld 0, 176(1)
  052fae0  ld 29, 136(1)
  052fae4  ld 30, 144(1)
  052fae8  mtlr 0
  052faec  ld 31, 152(1)
  052faf0  addi 1, 1, 160
  052faf4  blr

FUN_0052faf8:   # 0x52faf8, 0x58 bytes
  052faf8  stdu 1, -160(1)
  052fafc  mflr 0
  052fb00  std 27, 120(1)
  052fb04  std 28, 128(1)
  052fb08  std 29, 136(1)
  052fb0c  mr 28, 4
  052fb10  mr 29, 3
  052fb14  mr 27, 5
  052fb18  std 0, 176(1)
  052fb1c  bl 0x52f734
  052fb20  mr 3, 29
  052fb24  clrldi 4, 28, 32
  052fb28  clrldi 5, 27, 56
  052fb2c  bl 0x52fa18
  052fb30  ld 0, 176(1)
  052fb34  mr 3, 29
  052fb38  ld 27, 120(1)
  052fb3c  ld 28, 128(1)
  052fb40  mtlr 0
  052fb44  ld 29, 136(1)
  052fb48  addi 1, 1, 160
  052fb4c  b 0x52f938

FUN_0052fb50:   # 0x52fb50, 0x58 bytes
  052fb50  stdu 1, -160(1)
  052fb54  mflr 0
  052fb58  std 27, 120(1)
  052fb5c  std 28, 128(1)
  052fb60  std 29, 136(1)
  052fb64  mr 28, 4
  052fb68  mr 29, 3
  052fb6c  mr 27, 5
  052fb70  std 0, 176(1)
  052fb74  bl 0x52f734
  052fb78  mr 3, 29
  052fb7c  clrldi 4, 28, 32
  052fb80  clrldi 5, 27, 56
  052fb84  bl 0x52fa18
  052fb88  ld 0, 176(1)
  052fb8c  mr 3, 29
  052fb90  ld 27, 120(1)
  052fb94  ld 28, 128(1)
  052fb98  mtlr 0
  052fb9c  ld 29, 136(1)
  052fba0  addi 1, 1, 160
  052fba4  b 0x52f938
