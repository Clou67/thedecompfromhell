# game/update/moby709.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M711_0042a688:   # 0x42a688, 0x14 bytes
  042a688  lis 3, 133
  042a68c  lis 4, 1
  042a690  addic 3, 3, 31740
  042a694  stw 4, 72(3)
  042a698  blr

UpdateMoby_709:   # 0x42a6e0, 0x474 bytes
  042a6e0  stdu 1, -368(1)
  042a6e4  mflr 0
  042a6e8  std 0, 384(1)
  042a6ec  stfd 14, 224(1)
  042a6f0  stfd 15, 232(1)
  042a6f4  stfd 16, 240(1)
  042a6f8  stfd 17, 248(1)
  042a6fc  stfd 18, 256(1)
  042a700  stfd 19, 264(1)
  042a704  stfd 20, 272(1)
  042a708  stfd 21, 280(1)
  042a70c  stfd 22, 288(1)
  042a710  stfd 23, 296(1)
  042a714  stfd 24, 304(1)
  042a718  stfd 25, 312(1)
  042a71c  stfd 26, 320(1)
  042a720  stfd 27, 328(1)
  042a724  stfd 28, 336(1)
  042a728  stfd 29, 344(1)
  042a72c  stfd 30, 352(1)
  042a730  stfd 31, 360(1)
  042a734  std 31, 216(1)
  042a738  ori 31, 3, 0
  042a73c  lis 4, 131
  042a740  std 30, 208(1)
  042a744  std 29, 200(1)
  042a748  std 28, 192(1)
  042a74c  li 5, 0
  042a750  bl 0x10675c
  042a754  nop
  042a758  lis 5, 165
  042a75c  lhz 4, 178(31)
  042a760  ori 30, 3, 0
  042a764  addic 5, 5, 17860
  042a768  extsh 3, 4
  042a76c  lbzx 5, 5, 3
  042a770  cmpwi 5, 0
  042a774  bf 2, 0x42a7bc
  042a778  lis 6, 151
  042a77c  lis 5, 161
  042a780  srawi 3, 3, 5
  042a784  addic 5, 5, -13028
  042a788  sldi 3, 3, 2
  042a78c  lwz 6, -25488(6)
  042a790  addc 3, 3, 5
  042a794  slwi 5, 6, 8
  042a798  clrldi 3, 3, 32
  042a79c  extsw 5, 5
  042a7a0  li 7, 1
  042a7a4  clrlwi 4, 4, 27
  042a7a8  slw 4, 7, 4
  042a7ac  lwzx 3, 3, 5
  042a7b0  and 3, 3, 4
  042a7b4  cmpwi 3, 0
  042a7b8  bt 2, 0x42a7c8
  042a7bc  ori 3, 31, 0
  042a7c0  bl 0xefb38
  042a7c4  nop
  042a7c8  li 3, 32000
  042a7cc  cmpwi 30, 0
  042a7d0  sth 3, 50(31)
  042a7d4  bt 2, 0x42aae4
  042a7d8  lwz 3, 32(30)
  042a7dc  lhz 3, 166(3)
  042a7e0  cmpwi 3, 686
  042a7e4  bf 2, 0x42aae4
  042a7e8  lis 3, 67
  042a7ec  li 29, 0
  042a7f0  addi 3, 3, -22880
  042a7f4  ori 30, 29, 0
  042a7f8  lfs 17, 0(3)
  042a7fc  lfs 18, 4(3)
  042a800  lfs 19, 8(3)
  042a804  lfs 20, 12(3)
  042a808  lfs 21, 16(3)
  042a80c  lfs 22, 20(3)
  042a810  lfs 23, 24(3)
  042a814  lfs 24, 28(3)
  042a818  lfs 25, 32(3)
  042a81c  lfs 26, 36(3)
  042a820  lfs 27, 40(3)
  042a824  lfs 28, 44(3)
  042a828  lfs 29, 48(3)
  042a82c  lfs 30, 52(3)
  042a830  lfs 31, 56(3)
  042a834  lis 28, 114
  042a838  lfs 2, -3052(28)
  042a83c  fneg 1, 2
  042a840  bl 0xfcbe8
  042a844  nop
  042a848  lfs 2, -3052(28)
  042a84c  fmr 16, 1
  042a850  fneg 1, 2
  042a854  bl 0xfcbe8
  042a858  nop
  042a85c  lfs 2, -3052(28)
  042a860  fmr 15, 1
  042a864  fneg 1, 2
  042a868  bl 0xfcbe8
  042a86c  nop
  042a870  fmr 14, 1
  042a874  stfs 19, 156(1)
  042a878  fmr 1, 18
  042a87c  fmr 2, 19
  042a880  bl 0xfcbe8
  042a884  nop
  042a888  fmr 19, 1
  042a88c  bl 0xfcc68
  042a890  nop
  042a894  fadds 2, 1, 20
  042a898  fsubs 3, 21, 1
  042a89c  fsubs 4, 22, 1
  042a8a0  fsubs 5, 21, 2
  042a8a4  fsub 6, 1, 3
  042a8a8  fsubs 7, 22, 2
  042a8ac  fsub 8, 2, 5
  042a8b0  fsel 1, 6, 3, 1
  042a8b4  fsel 2, 8, 5, 2
  042a8b8  fsub 3, 4, 1
  042a8bc  fsub 5, 7, 2
  042a8c0  fsel 1, 3, 4, 1
  042a8c4  lfs 3, -3052(28)
  042a8c8  stfs 27, 164(1)
  042a8cc  stfs 28, 160(1)
  042a8d0  stfs 24, 176(1)
  042a8d4  stfs 25, 172(1)
  042a8d8  stfs 26, 168(1)
  042a8dc  fsel 2, 5, 7, 2
  042a8e0  fmuls 4, 1, 1
  042a8e4  fmuls 5, 2, 2
  042a8e8  fmuls 6, 4, 1
  042a8ec  fmuls 7, 5, 2
  042a8f0  fmuls 8, 4, 6
  042a8f4  fmadds 6, 6, 23, 1
  042a8f8  fmuls 1, 3, 27
  042a8fc  fmuls 9, 5, 7
  042a900  fmadds 7, 7, 23, 2
  042a904  fmuls 2, 3, 28
  042a908  fmuls 10, 4, 8
  042a90c  fmadds 6, 8, 24, 6
  042a910  fmuls 3, 5, 9
  042a914  fmadds 7, 9, 24, 7
  042a918  fmuls 4, 4, 10
  042a91c  fmadds 6, 10, 25, 6
  042a920  fmuls 5, 5, 3
  042a924  fmadds 3, 3, 25, 7
  042a928  fmadds 28, 4, 26, 6
  042a92c  fmadds 27, 5, 26, 3
  042a930  bl 0xfcbe8
  042a934  nop
  042a938  fmuls 2, 15, 15
  042a93c  lfs 26, 16(31)
  042a940  li 3, 3
  042a944  lfs 25, 20(31)
  042a948  lfs 24, 24(31)
  042a94c  fmadds 2, 16, 16, 2
  042a950  fmadds 2, 14, 14, 2
  042a954  fsqrts 2, 2
  042a958  fdivs 1, 1, 2
  042a95c  fsub 3, 17, 2
  042a960  fsub 4, 17, 2
  042a964  fsub 5, 17, 2
  042a968  fsub 6, 2, 17
  042a96c  fsub 7, 2, 17
  042a970  fsub 2, 2, 17
  042a974  fmuls 8, 14, 1
  042a978  fmuls 9, 15, 1
  042a97c  fmuls 1, 16, 1
  042a980  fsel 3, 3, 17, 8
  042a984  fsel 4, 4, 17, 9
  042a988  fsel 5, 5, 17, 1
  042a98c  fsel 16, 6, 3, 8
  042a990  fsel 15, 7, 4, 9
  042a994  fsel 14, 2, 5, 1
  042a998  bl 0xfc620
  042a99c  nop
  042a9a0  sldi 3, 3, 2
  042a9a4  li 4, 698
  042a9a8  addc 3, 3, 1
  042a9ac  li 5, 697
  042a9b0  li 6, 696
  042a9b4  clrldi 7, 3, 32
  042a9b8  stw 4, 152(1)
  042a9bc  li 3, 180
  042a9c0  stw 5, 148(1)
  042a9c4  li 4, 300
  042a9c8  stw 6, 144(1)
  042a9cc  lwz 5, 144(7)
  042a9d0  extsw 28, 5
  042a9d4  bl 0xfe484
  042a9d8  nop
  042a9dc  fmadds 1, 27, 19, 26
  042a9e0  fmadds 2, 28, 19, 25
  042a9e4  stfs 24, 56(1)
  042a9e8  stfs 1, 48(1)
  042a9ec  stfs 2, 52(1)
  042a9f0  stfs 14, 64(1)
  042a9f4  stfs 16, 72(1)
  042a9f8  ori 9, 3, 0
  042a9fc  stfs 1, 60(1)
  042aa00  ori 7, 28, 0
  042aa04  ld 4, 48(1)
  042aa08  ld 5, 56(1)
  042aa0c  stfs 15, 68(1)
  042aa10  ori 3, 4, 0
  042aa14  stfs 17, 76(1)
  042aa18  ori 4, 5, 0
  042aa1c  std 30, 128(1)
  042aa20  fmr 1, 29
  042aa24  ld 5, 64(1)
  042aa28  ld 6, 72(1)
  042aa2c  fmr 2, 30
  042aa30  fmr 3, 30
  042aa34  fmr 4, 31
  042aa38  bl 0x425540
  042aa3c  nop
  042aa40  lfs 19, 156(1)
  042aa44  lfs 28, 160(1)
  042aa48  addic 29, 29, 1
  042aa4c  lfs 27, 164(1)
  042aa50  lfs 26, 168(1)
  042aa54  cmpwi 29, 20
  042aa58  lfs 25, 172(1)
  042aa5c  lfs 24, 176(1)
  042aa60  bt 0, 0x42a834
  042aa64  lhz 6, 178(31)
  042aa68  lis 4, 151
  042aa6c  lis 3, 161
  042aa70  extsh 7, 6
  042aa74  addic 3, 3, -13028
  042aa78  srawi 7, 7, 5
  042aa7c  lwz 4, -25488(4)
  042aa80  lis 5, 165
  042aa84  sldi 7, 7, 2
  042aa88  slwi 4, 4, 8
  042aa8c  addc 3, 7, 3
  042aa90  extsw 4, 4
  042aa94  extsh 7, 6
  042aa98  clrldi 9, 3, 32
  042aa9c  srawi 3, 7, 5
  042aaa0  clrlwi 8, 6, 27
  042aaa4  li 7, 1
  042aaa8  clrlwi 6, 6, 27
  042aaac  sldi 10, 3, 2
  042aab0  addic 5, 5, 19920
  042aab4  lwzx 3, 9, 4
  042aab8  slw 8, 7, 8
  042aabc  slw 6, 7, 6
  042aac0  or 7, 3, 8
  042aac4  ori 3, 31, 0
  042aac8  lwzx 8, 5, 10
  042aacc  stwx 7, 9, 4
  042aad0  or 4, 8, 6
  042aad4  stwx 4, 5, 10
  042aad8  bl 0xefb38
  042aadc  nop
  042aae0  b 0x42aaec
  042aae4  li 3, 255
  042aae8  stb 3, 164(31)
  042aaec  ld 0, 384(1)
  042aaf0  mtlr 0
  042aaf4  lfd 14, 224(1)
  042aaf8  lfd 15, 232(1)
  042aafc  lfd 16, 240(1)
  042ab00  lfd 17, 248(1)
  042ab04  lfd 18, 256(1)
  042ab08  lfd 19, 264(1)
  042ab0c  lfd 20, 272(1)
  042ab10  lfd 21, 280(1)
  042ab14  lfd 22, 288(1)
  042ab18  lfd 23, 296(1)
  042ab1c  lfd 24, 304(1)
  042ab20  lfd 25, 312(1)
  042ab24  lfd 26, 320(1)
  042ab28  lfd 27, 328(1)
  042ab2c  lfd 28, 336(1)
  042ab30  lfd 29, 344(1)
  042ab34  lfd 30, 352(1)
  042ab38  lfd 31, 360(1)
  042ab3c  ld 28, 192(1)
  042ab40  ld 29, 200(1)
  042ab44  ld 30, 208(1)
  042ab48  ld 31, 216(1)
  042ab4c  addi 1, 1, 368
  042ab50  blr

M711_0042ab54:   # 0x42ab54, 0x14 bytes
  042ab54  lis 3, 133
  042ab58  lis 4, 1
  042ab5c  addic 3, 3, 31852
  042ab60  stw 4, 72(3)
  042ab64  blr

M711_0042ab78:   # 0x42ab78, 0x5dc bytes
  042ab78  stdu 1, -448(1)
  042ab7c  mflr 0
  042ab80  std 0, 464(1)
  042ab84  stfd 28, 416(1)
  042ab88  stfd 29, 424(1)
  042ab8c  stfd 30, 432(1)
  042ab90  stfd 31, 440(1)
  042ab94  std 31, 408(1)
  042ab98  std 21, 328(1)
  042ab9c  lwz 31, 120(3)
  042aba0  lis 21, 67
  042aba4  cmpwi 31, 0
  042aba8  std 30, 400(1)
  042abac  std 29, 392(1)
  042abb0  std 28, 384(1)
  042abb4  std 27, 376(1)
  042abb8  std 26, 368(1)
  042abbc  std 25, 360(1)
  042abc0  std 24, 352(1)
  042abc4  std 23, 344(1)
  042abc8  std 22, 336(1)
  042abcc  std 20, 320(1)
  042abd0  std 19, 312(1)
  042abd4  std 18, 304(1)
  042abd8  std 17, 296(1)
  042abdc  std 16, 288(1)
  042abe0  std 15, 280(1)
  042abe4  std 14, 272(1)
  042abe8  addi 21, 21, -21656
  042abec  bt 2, 0x42b0ec
  042abf0  li 3, 112
  042abf4  addi 4, 3, 16
  042abf8  lvlx 2, 3, 31
  042abfc  lvrx 3, 4, 31
  042ac00  vor 2, 2, 3
  042ac04  vspltisw 3, 0
  042ac08  vspltw 4, 2, 0
  042ac0c  vcmpeqfp. 3, 4, 3
  042ac10  bf 26, 0x42b0ec
  042ac14  lvlx 3, 0, 21
  042ac18  lfs 29, 0(21)
  042ac1c  vspltw 3, 3, 0
  042ac20  vcmpeqfp. 5, 4, 3
  042ac24  bt 26, 0x42ac58
  042ac28  lis 3, 151
  042ac2c  addic 3, 3, -25376
  042ac30  lwz 3, 8320(3)
  042ac34  lbz 4, 82(3)
  042ac38  lbz 3, 83(3)
  042ac3c  cmpwi 1, 4, 255
  042ac40  cmpw 4, 3
  042ac44  bf 2, 0x42ac4c
  042ac48  bf 6, 0x42ac58
  042ac4c  li 3, 0
  042ac50  stw 3, 112(31)
  042ac54  b 0x42b0ec
  042ac58  lis 23, 151
  042ac5c  lis 30, 128
  042ac60  addic 23, 23, -25376
  042ac64  li 3, 20
  042ac68  li 24, 1
  042ac6c  ori 30, 30, 32896
  042ac70  lwz 4, 8320(23)
  042ac74  lbz 4, 82(4)
  042ac78  cmpwi 4, 23
  042ac7c  cmpwi 1, 4, 25
  042ac80  cmpwi 6, 4, 43
  042ac84  bt 0, 0x42ac8c
  042ac88  bf 5, 0x42ac9c
  042ac8c  bt 26, 0x42ac9c
  042ac90  lhz 4, 120(31)
  042ac94  extsh 4, 4
  042ac98  b 0x42ac9c
  042ac9c  cmpwi 4, 23
  042aca0  cmpwi 6, 4, 24
  042aca4  bf 2, 0x42acc0
  042aca8  fmr 30, 29
  042acac  li 4, 23
  042acb0  li 29, 0
  042acb4  sth 4, 120(31)
  042acb8  fmr 31, 30
  042acbc  b 0x42ad20
  042acc0  cmpwi 1, 4, 25
  042acc4  bf 26, 0x42ace0
  042acc8  fmr 30, 29
  042accc  li 4, 24
  042acd0  ori 29, 24, 0
  042acd4  sth 4, 120(31)
  042acd8  fmr 31, 30
  042acdc  b 0x42ad20
  042ace0  bf 6, 0x42acfc
  042ace4  fmr 30, 29
  042ace8  li 4, 25
  042acec  li 29, 2
  042acf0  sth 4, 120(31)
  042acf4  fmr 31, 30
  042acf8  b 0x42ad20
  042acfc  li 4, 43
  042ad00  lis 30, 64
  042ad04  li 29, 3
  042ad08  li 24, 2
  042ad0c  sth 4, 120(31)
  042ad10  lfs 31, 4(21)
  042ad14  li 3, 12
  042ad18  lfs 30, 8(21)
  042ad1c  ori 30, 30, 32896
  042ad20  sldi 4, 29, 5
  042ad24  vcmpeqfp. 3, 4, 3
  042ad28  lis 5, 134
  042ad2c  addc 6, 4, 4
  042ad30  addic 5, 5, -25872
  042ad34  addc 4, 4, 6
  042ad38  addc 29, 5, 4
  042ad3c  clrldi 29, 29, 32
  042ad40  lhz 28, 0(29)
  042ad44  lhz 27, 2(29)
  042ad48  lhz 26, 4(29)
  042ad4c  extsh 28, 28
  042ad50  lhz 25, 6(29)
  042ad54  extsh 27, 27
  042ad58  extsh 26, 26
  042ad5c  extsh 25, 25
  042ad60  bt 26, 0x42add8
  042ad64  lwz 4, 8320(23)
  042ad68  lis 5, 161
  042ad6c  lis 6, 269
  042ad70  lfs 1, 192(4)
  042ad74  stfs 1, 0(31)
  042ad78  lfs 1, 196(4)
  042ad7c  stfs 1, 4(31)
  042ad80  lfs 1, 200(4)
  042ad84  stfs 1, 8(31)
  042ad88  lfs 1, 204(4)
  042ad8c  stfs 1, 12(31)
  042ad90  lfs 1, 208(4)
  042ad94  stfs 1, 16(31)
  042ad98  lfs 1, 212(4)
  042ad9c  stfs 1, 20(31)
  042ada0  lfs 1, 216(4)
  042ada4  stfs 1, 24(31)
  042ada8  lfs 1, 220(4)
  042adac  stfs 1, 28(31)
  042adb0  lfs 1, 224(4)
  042adb4  stfs 1, 32(31)
  042adb8  lfs 1, 228(4)
  042adbc  stfs 1, 36(31)
  042adc0  lfs 1, 232(4)
  042adc4  lwz 5, 1808(5)
  042adc8  stfs 1, 40(31)
  042adcc  lfs 1, 236(4)
  042add0  stw 5, -13080(6)
  042add4  stfs 1, 44(31)
  042add8  lis 4, 161
  042addc  vspltisw 3, 1
  042ade0  li 5, 1808
  042ade4  lis 6, 269
  042ade8  li 7, -13080
  042adec  lvlx 4, 5, 4
  042adf0  li 4, 72
  042adf4  lvlx 5, 7, 6
  042adf8  addi 5, 4, 16
  042adfc  vsubuwm 5, 4, 5
  042ae00  vspltw 4, 4, 0
  042ae04  lvlx 7, 4, 29
  042ae08  vcmpgtsw 6, 3, 5
  042ae0c  li 4, 112
  042ae10  vsel 3, 5, 3, 6
  042ae14  lvrx 5, 5, 29
  042ae18  li 5, 88
  042ae1c  vspltisw 6, -16
  042ae20  vor 5, 7, 5
  042ae24  vcfsx 3, 3, 0
  042ae28  addi 8, 5, 16
  042ae2c  vspltisw 7, 2
  042ae30  vmaddfp 2, 3, 5, 2
  042ae34  vspltw 2, 2, 0
  042ae38  stvewx 2, 4, 31
  042ae3c  stvewx 4, 7, 6
  042ae40  lvlx 3, 5, 29
  042ae44  lvrx 4, 8, 29
  042ae48  vor 3, 3, 4
  042ae4c  vsraw 3, 3, 6
  042ae50  vmulosh 3, 3, 7
  042ae54  vcfsx 3, 3, 0
  042ae58  vspltw 3, 3, 0
  042ae5c  vcmpgefp. 2, 2, 3
  042ae60  bt 26, 0x42ae90
  042ae64  lwz 3, 8320(23)
  042ae68  lbz 3, 82(3)
  042ae6c  cmpwi 3, 23
  042ae70  cmpwi 1, 3, 25
  042ae74  cmpwi 6, 3, 43
  042ae78  bt 0, 0x42ae80
  042ae7c  bf 5, 0x42b0ec
  042ae80  bt 26, 0x42b0ec
  042ae84  li 3, 0
  042ae88  stw 3, 112(31)
  042ae8c  b 0x42b0ec
  042ae90  bl 0x685c4
  042ae94  nop
  042ae98  std 3, 232(1)
  042ae9c  lis 9, 0
  042aea0  li 3, 0
  042aea4  li 4, 0
  042aea8  li 5, 1
  042aeac  li 6, 1
  042aeb0  li 7, 1
  042aeb4  li 8, 0
  042aeb8  ori 9, 9, 65424
  042aebc  bl 0x502fd4
  042aec0  nop
  042aec4  std 3, 240(1)
  042aec8  li 3, 1
  042aecc  li 4, 1
  042aed0  li 5, 0
  042aed4  li 6, 0
  042aed8  li 7, 0
  042aedc  li 8, 0
  042aee0  bl 0x502f08
  042aee4  nop
  042aee8  std 3, 224(1)
  042aeec  ori 4, 24, 0
  042aef0  li 3, 0
  042aef4  li 5, 0
  042aef8  li 6, 1
  042aefc  li 7, 128
  042af00  bl 0x502ea8
  042af04  nop
  042af08  lwz 4, 8320(23)
  042af0c  li 24, 0
  042af10  std 3, 248(1)
  042af14  ori 16, 24, 0
  042af18  lfs 1, 16(4)
  042af1c  stfs 1, 48(31)
  042af20  lfs 1, 20(4)
  042af24  stfs 1, 52(31)
  042af28  lfs 1, 24(4)
  042af2c  stfs 1, 56(31)
  042af30  lfs 1, 28(4)
  042af34  stfs 1, 60(31)
  042af38  lhz 3, 88(29)
  042af3c  extsh 3, 3
  042af40  cmpwi 3, 0
  042af44  bf 1, 0x42b0ec
  042af48  ori 15, 24, 0
  042af4c  ori 23, 16, 0
  042af50  ori 19, 29, 0
  042af54  lfs 28, 12(21)
  042af58  addic 14, 1, 112
  042af5c  ori 20, 23, 0
  042af60  ori 18, 1, 0
  042af64  ori 17, 1, 0
  042af68  lwz 3, 80(29)
  042af6c  cmpw 28, 24
  042af70  cmpw 1, 27, 24
  042af74  addc 3, 3, 15
  042af78  clrldi 3, 3, 32
  042af7c  lhzx 22, 3, 20
  042af80  extsh 22, 22
  042af84  bf 2, 0x42af90
  042af88  lwz 3, 8(19)
  042af8c  b 0x42afc0
  042af90  cmpw 6, 26, 24
  042af94  bf 6, 0x42afa0
  042af98  lwz 3, 24(19)
  042af9c  b 0x42afc0
  042afa0  cmpw 1, 25, 24
  042afa4  bf 26, 0x42afb0
  042afa8  lwz 3, 40(19)
  042afac  b 0x42afc0
  042afb0  lis 3, 20608
  042afb4  ori 3, 3, 32896
  042afb8  bf 6, 0x42afc0
  042afbc  lwz 3, 56(19)
  042afc0  srawi 4, 3, 24
  042afc4  extsw 4, 4
  042afc8  std 4, 256(1)
  042afcc  stw 3, 176(18)
  042afd0  lfd 1, 256(1)
  042afd4  fcfid 1, 1
  042afd8  frsp 1, 1
  042afdc  fmuls 1, 1, 31
  042afe0  bl 0x502758
  042afe4  nop
  042afe8  ori 4, 30, 0
  042afec  rlwimi 4, 3, 24, 0, 7
  042aff0  sldi 3, 22, 4
  042aff4  stw 4, 176(18)
  042aff8  lwz 4, 76(29)
  042affc  addc 3, 4, 3
  042b000  clrldi 3, 3, 32
  042b004  lis 4, 134
  042b008  lfs 1, 0(3)
  042b00c  fmuls 1, 1, 30
  042b010  addic 23, 23, 1
  042b014  addic 19, 19, 4
  042b018  cmpwi 23, 4
  042b01c  addic 18, 18, 4
  042b020  stfs 1, 0(14)
  042b024  lfs 1, 4(3)
  042b028  fmuls 1, 1, 30
  042b02c  stfs 1, 4(14)
  042b030  lfs 1, 8(3)
  042b034  fmuls 1, 1, 30
  042b038  stfs 1, 8(14)
  042b03c  lfs 1, 12(3)
  042b040  stfs 1, 12(14)
  042b044  lwz 3, 80(29)
  042b048  lwz 5, 84(29)
  042b04c  addc 3, 3, 15
  042b050  lfs 1, -25876(4)
  042b054  addc 3, 3, 20
  042b058  clrldi 3, 3, 32
  042b05c  addic 14, 14, 16
  042b060  addic 20, 20, 4
  042b064  lhz 3, 2(3)
  042b068  lfs 2, 112(31)
  042b06c  extsh 3, 3
  042b070  sldi 3, 3, 3
  042b074  addc 4, 5, 3
  042b078  lfsx 3, 5, 3
  042b07c  clrldi 3, 4, 32
  042b080  lfs 4, 92(29)
  042b084  fsubs 3, 3, 28
  042b088  fnmsubs 2, 2, 4, 29
  042b08c  fmadds 3, 3, 1, 28
  042b090  stfs 3, 192(17)
  042b094  lfs 3, 4(3)
  042b098  fsubs 3, 3, 28
  042b09c  fmadds 1, 3, 1, 28
  042b0a0  fadds 1, 1, 2
  042b0a4  stfs 1, 196(17)
  042b0a8  addic 17, 17, 8
  042b0ac  bt 0, 0x42af68
  042b0b0  lis 4, 161
  042b0b4  addic 3, 1, 112
  042b0b8  addic 6, 4, 24396
  042b0bc  ori 4, 31, 0
  042b0c0  li 5, 0
  042b0c4  li 7, 9
  042b0c8  lwz 6, 28(6)
  042b0cc  bl 0x72280
  042b0d0  nop
  042b0d4  lhz 3, 88(29)
  042b0d8  addic 24, 24, 1
  042b0dc  addic 15, 15, 16
  042b0e0  extsh 3, 3
  042b0e4  cmpw 24, 3
  042b0e8  bt 0, 0x42af4c
  042b0ec  ld 0, 464(1)
  042b0f0  mtlr 0
  042b0f4  lfd 28, 416(1)
  042b0f8  lfd 29, 424(1)
  042b0fc  lfd 30, 432(1)
  042b100  lfd 31, 440(1)
  042b104  ld 14, 272(1)
  042b108  ld 15, 280(1)
  042b10c  ld 16, 288(1)
  042b110  ld 17, 296(1)
  042b114  ld 18, 304(1)
  042b118  ld 19, 312(1)
  042b11c  ld 20, 320(1)
  042b120  ld 21, 328(1)
  042b124  ld 22, 336(1)
  042b128  ld 23, 344(1)
  042b12c  ld 24, 352(1)
  042b130  ld 25, 360(1)
  042b134  ld 26, 368(1)
  042b138  ld 27, 376(1)
  042b13c  ld 28, 384(1)
  042b140  ld 29, 392(1)
  042b144  ld 30, 400(1)
  042b148  ld 31, 408(1)
  042b14c  addi 1, 1, 448
  042b150  blr

M711_0042b160:   # 0x42b160, 0x14c bytes
  042b160  stdu 1, -128(1)
  042b164  mflr 0
  042b168  std 0, 144(1)
  042b16c  lis 4, 151
  042b170  addic 4, 4, -25376
  042b174  lwz 5, 8324(4)
  042b178  cmpwi 5, 59
  042b17c  bf 2, 0x42b24c
  042b180  lwz 4, 8320(4)
  042b184  li 5, 64
  042b188  li 6, 19
  042b18c  li 7, 11
  042b190  subc 6, 6, 7
  042b194  lbz 8, 83(4)
  042b198  subc 5, 5, 8
  042b19c  cmpwi 8, 65
  042b1a0  cntlzw 5, 5
  042b1a4  sldi 5, 5, 58
  042b1a8  sradi 5, 5, 63
  042b1ac  and 5, 5, 6
  042b1b0  addc 5, 7, 5
  042b1b4  cmpwi 6, 5, 19
  042b1b8  bf 2, 0x42b1c4
  042b1bc  li 5, 18
  042b1c0  b 0x42b1d0
  042b1c4  cmpwi 1, 5, 18
  042b1c8  bt 26, 0x42b1d0
  042b1cc  bf 6, 0x42b210
  042b1d0  stb 5, 82(3)
  042b1d4  stb 5, 83(3)
  042b1d8  lfs 1, 84(4)
  042b1dc  stfs 1, 84(3)
  042b1e0  lbz 5, 80(4)
  042b1e4  stb 5, 80(3)
  042b1e8  lbz 5, 81(4)
  042b1ec  stb 5, 81(3)
  042b1f0  lbz 6, 82(4)
  042b1f4  lbz 4, 83(4)
  042b1f8  cmpw 6, 4
  042b1fc  bt 2, 0x42b204
  042b200  stb 5, 80(3)
  042b204  bl 0xef74c
  042b208  nop
  042b20c  b 0x42b29c
  042b210  lis 4, 67
  042b214  lis 6, 114
  042b218  addi 4, 4, -20140
  042b21c  lfs 1, 0(4)
  042b220  lfs 2, -3056(6)
  042b224  ori 4, 5, 0
  042b228  li 5, 0
  042b22c  fmuls 1, 2, 1
  042b230  fctiwz 1, 1
  042b234  stfd 1, 112(1)
  042b238  lwz 6, 116(1)
  042b23c  extsw 6, 6
  042b240  bl 0xfddc0
  042b244  nop
  042b248  b 0x42b29c
  042b24c  lwz 5, 8336(4)
  042b250  cmpwi 5, 59
  042b254  bf 2, 0x42b29c
  042b258  lwz 4, 408(4)
  042b25c  cmpwi 4, 1
  042b260  bf 2, 0x42b29c
  042b264  lis 4, 67
  042b268  lis 5, 114
  042b26c  addi 4, 4, -20140
  042b270  lfs 1, 4(4)
  042b274  lfs 2, -3056(5)
  042b278  li 4, 1
  042b27c  fmuls 1, 2, 1
  042b280  li 5, 0
  042b284  fctiwz 1, 1
  042b288  stfd 1, 112(1)
  042b28c  lwz 6, 116(1)
  042b290  extsw 6, 6
  042b294  bl 0xfddc0
  042b298  nop
  042b29c  ld 0, 144(1)
  042b2a0  mtlr 0
  042b2a4  addi 1, 1, 128
  042b2a8  blr

M711_0042b2ac:   # 0x42b2ac, 0x60 bytes
  042b2ac  stdu 1, -128(1)
  042b2b0  mflr 0
  042b2b4  std 0, 144(1)
  042b2b8  std 31, 120(1)
  042b2bc  lis 3, 161
  042b2c0  li 31, 0
  042b2c4  addic 3, 3, 2368
  042b2c8  lwz 3, 24(3)
  042b2cc  cmpwi 3, 0
  042b2d0  bt 2, 0x42b2f4
  042b2d4  bl 0xfcccc
  042b2d8  nop
  042b2dc  cmpwi 3, 0
  042b2e0  bt 2, 0x42b2f4
  042b2e4  lbz 3, 9(3)
  042b2e8  cmpwi 3, 1
  042b2ec  bf 2, 0x42b2f4
  042b2f0  li 31, 1
  042b2f4  ori 3, 31, 0
  042b2f8  ld 0, 144(1)
  042b2fc  mtlr 0
  042b300  ld 31, 120(1)
  042b304  addi 1, 1, 128
  042b308  blr

M711_0042b30c:   # 0x42b30c, 0x54 bytes
  042b30c  stdu 1, -112(1)
  042b310  mflr 0
  042b314  std 0, 128(1)
  042b318  lis 3, 161
  042b31c  addic 3, 3, 2368
  042b320  lwz 3, 24(3)
  042b324  bl 0xfcccc
  042b328  nop
  042b32c  cmpwi 3, 0
  042b330  bt 2, 0x42b34c
  042b334  lhz 3, 30(3)
  042b338  rlwinm 3, 3, 0, 30, 30
  042b33c  cmpwi 3, 0
  042b340  bt 2, 0x42b34c
  042b344  li 3, 1
  042b348  b 0x42b350
  042b34c  li 3, 0
  042b350  ld 0, 128(1)
  042b354  mtlr 0
  042b358  addi 1, 1, 112
  042b35c  blr

M711_0042b390:   # 0x42b390, 0x280 bytes
  042b390  stdu 1, -320(1)
  042b394  mflr 0
  042b398  std 0, 336(1)
  042b39c  stfd 18, 208(1)
  042b3a0  stfd 19, 216(1)
  042b3a4  stfd 20, 224(1)
  042b3a8  stfd 21, 232(1)
  042b3ac  stfd 22, 240(1)
  042b3b0  stfd 23, 248(1)
  042b3b4  stfd 24, 256(1)
  042b3b8  stfd 25, 264(1)
  042b3bc  stfd 26, 272(1)
  042b3c0  stfd 27, 280(1)
  042b3c4  stfd 28, 288(1)
  042b3c8  stfd 29, 296(1)
  042b3cc  stfd 30, 304(1)
  042b3d0  stfd 31, 312(1)
  042b3d4  std 30, 192(1)
  042b3d8  std 29, 184(1)
  042b3dc  cmpwi 4, 0
  042b3e0  li 29, 0
  042b3e4  std 31, 200(1)
  042b3e8  ori 30, 3, 0
  042b3ec  std 28, 176(1)
  042b3f0  std 27, 168(1)
  042b3f4  std 26, 160(1)
  042b3f8  ori 31, 4, 0
  042b3fc  bf 1, 0x42b5b0
  042b400  lis 3, 67
  042b404  addi 3, 3, -19616
  042b408  lfs 21, 0(3)
  042b40c  lfs 22, 4(3)
  042b410  lfs 23, 8(3)
  042b414  lfs 24, 12(3)
  042b418  lfs 25, 16(3)
  042b41c  lfs 26, 20(3)
  042b420  lfs 27, 24(3)
  042b424  lfs 28, 28(3)
  042b428  lfs 29, 32(3)
  042b42c  lfs 30, 36(3)
  042b430  lfs 31, 40(3)
  042b434  fmr 1, 21
  042b438  fmr 2, 22
  042b43c  bl 0xfcbe8
  042b440  nop
  042b444  li 3, 2
  042b448  fmr 20, 1
  042b44c  bl 0xfc620
  042b450  nop
  042b454  li 4, 0
  042b458  addic 5, 3, -1
  042b45c  subc 4, 4, 3
  042b460  extsw 5, 5
  042b464  cntlzw 4, 4
  042b468  subc 5, 5, 3
  042b46c  sldi 4, 4, 58
  042b470  sradi 4, 4, 63
  042b474  and 4, 4, 5
  042b478  addc 28, 3, 4
  042b47c  bl 0xfcc68
  042b480  nop
  042b484  fmr 19, 1
  042b488  fmr 1, 23
  042b48c  fmr 2, 24
  042b490  bl 0xfcbe8
  042b494  nop
  042b498  fmr 18, 1
  042b49c  fmr 1, 25
  042b4a0  fmr 2, 21
  042b4a4  bl 0xfcbe8
  042b4a8  nop
  042b4ac  addic 27, 1, 128
  042b4b0  fmr 2, 19
  042b4b4  ori 3, 27, 0
  042b4b8  fmr 3, 18
  042b4bc  bl 0xfe610
  042b4c0  nop
  042b4c4  fmr 1, 26
  042b4c8  fmr 2, 27
  042b4cc  bl 0xfe4f0
  042b4d0  nop
  042b4d4  lfs 2, 0(30)
  042b4d8  fadds 3, 2, 1
  042b4dc  fmr 1, 26
  042b4e0  fmr 2, 27
  042b4e4  stfs 3, 0(30)
  042b4e8  bl 0xfe4f0
  042b4ec  nop
  042b4f0  lfs 2, 4(30)
  042b4f4  fadds 3, 2, 1
  042b4f8  fmr 1, 26
  042b4fc  fmr 2, 27
  042b500  stfs 3, 4(30)
  042b504  bl 0xfe4f0
  042b508  nop
  042b50c  lfs 2, 8(30)
  042b510  lis 26, 114
  042b514  fadds 4, 2, 1
  042b518  lis 7, 32544
  042b51c  fmuls 1, 20, 21
  042b520  ori 3, 30, 0
  042b524  fmr 2, 20
  042b528  ori 7, 7, 32639
  042b52c  fmr 3, 29
  042b530  li 8, 0
  042b534  ori 9, 28, 0
  042b538  ori 10, 27, 0
  042b53c  stfs 4, 8(30)
  042b540  lfs 4, -3056(26)
  042b544  fmuls 4, 4, 28
  042b548  fctiwz 4, 4
  042b54c  stfd 4, 144(1)
  042b550  lwz 4, 148(1)
  042b554  extsw 4, 4
  042b558  bl 0x12f8c0
  042b55c  nop
  042b560  lfs 1, -3056(26)
  042b564  lis 7, 32639
  042b568  neg 9, 28
  042b56c  fmuls 2, 20, 31
  042b570  fmuls 4, 1, 28
  042b574  ori 3, 30, 0
  042b578  fmuls 1, 20, 30
  042b57c  ori 7, 7, 32639
  042b580  fmr 3, 29
  042b584  li 8, 1
  042b588  ori 10, 27, 0
  042b58c  fctiwz 4, 4
  042b590  stfd 4, 144(1)
  042b594  lwz 4, 148(1)
  042b598  extsw 4, 4
  042b59c  bl 0x12f8c0
  042b5a0  nop
  042b5a4  addic 29, 29, 1
  042b5a8  cmpw 29, 31
  042b5ac  bt 0, 0x42b434
  042b5b0  ld 0, 336(1)
  042b5b4  mtlr 0
  042b5b8  lfd 18, 208(1)
  042b5bc  lfd 19, 216(1)
  042b5c0  lfd 20, 224(1)
  042b5c4  lfd 21, 232(1)
  042b5c8  lfd 22, 240(1)
  042b5cc  lfd 23, 248(1)
  042b5d0  lfd 24, 256(1)
  042b5d4  lfd 25, 264(1)
  042b5d8  lfd 26, 272(1)
  042b5dc  lfd 27, 280(1)
  042b5e0  lfd 28, 288(1)
  042b5e4  lfd 29, 296(1)
  042b5e8  lfd 30, 304(1)
  042b5ec  lfd 31, 312(1)
  042b5f0  ld 26, 160(1)
  042b5f4  ld 27, 168(1)
  042b5f8  ld 28, 176(1)
  042b5fc  ld 29, 184(1)
  042b600  ld 30, 192(1)
  042b604  ld 31, 200(1)
  042b608  addi 1, 1, 320
  042b60c  blr
