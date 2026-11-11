# game/update/moby750.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M750_0044a708:   # 0x44a708, 0xa0c bytes
  044a708  stdu 1, -352(1)
  044a70c  mflr 0
  044a710  std 0, 368(1)
  044a714  stfd 29, 328(1)
  044a718  stfd 30, 336(1)
  044a71c  stfd 31, 344(1)
  044a720  std 31, 320(1)
  044a724  std 27, 288(1)
  044a728  lis 6, 69
  044a72c  ori 31, 3, 0
  044a730  std 30, 312(1)
  044a734  addi 27, 6, -22872
  044a738  std 29, 304(1)
  044a73c  ori 30, 4, 0
  044a740  ori 29, 5, 0
  044a744  ori 3, 30, 0
  044a748  addic 4, 31, 16
  044a74c  lfs 30, 8(27)
  044a750  std 28, 296(1)
  044a754  addic 5, 1, 128
  044a758  lwz 28, 120(31)
  044a75c  addic 6, 1, 148
  044a760  lfs 1, 0(27)
  044a764  addic 7, 1, 144
  044a768  lfs 2, 4(27)
  044a76c  li 9, 0
  044a770  fmr 3, 30
  044a774  bl 0x10d7a0
  044a778  nop
  044a77c  lwz 3, 148(1)
  044a780  extsw 3, 3
  044a784  bl 0x502730
  044a788  nop
  044a78c  lwz 3, 0(30)
  044a790  lfs 2, 20(31)
  044a794  lis 4, 114
  044a798  slwi 3, 3, 4
  044a79c  lfs 3, 16(31)
  044a7a0  lfs 31, 12(27)
  044a7a4  addc 3, 30, 3
  044a7a8  lfs 29, 16(27)
  044a7ac  clrldi 3, 3, 32
  044a7b0  lfs 5, 4(3)
  044a7b4  lfs 6, 0(3)
  044a7b8  fsubs 5, 2, 5
  044a7bc  fsubs 3, 3, 6
  044a7c0  lfs 6, 24(31)
  044a7c4  lfs 4, 8(3)
  044a7c8  lfs 2, -3048(4)
  044a7cc  fsubs 4, 6, 4
  044a7d0  fmuls 8, 2, 29
  044a7d4  fmr 6, 1
  044a7d8  lfs 1, 96(28)
  044a7dc  fmuls 5, 5, 5
  044a7e0  fmuls 7, 1, 1
  044a7e4  fmr 1, 6
  044a7e8  fmadds 3, 3, 3, 5
  044a7ec  fmuls 5, 8, 31
  044a7f0  fmadds 3, 4, 4, 3
  044a7f4  fdivs 4, 7, 5
  044a7f8  lfs 5, 28(30)
  044a7fc  lfs 7, 144(1)
  044a800  fsqrts 3, 3
  044a804  fmadds 1, 1, 5, 7
  044a808  fadds 31, 1, 31
  044a80c  lfs 1, 96(28)
  044a810  fcmpu 0, 3, 4
  044a814  bt 1, 0x44a848
  044a818  fnmsubs 2, 2, 29, 1
  044a81c  lis 3, 134
  044a820  lis 4, 114
  044a824  stfs 2, 96(28)
  044a828  lfs 1, -22500(3)
  044a82c  lfs 3, -3052(4)
  044a830  fmuls 1, 1, 3
  044a834  fcmpu 0, 2, 1
  044a838  cror 6, 1, 2
  044a83c  bt 6, 0x44a86c
  044a840  stfs 1, 96(28)
  044a844  b 0x44a86c
  044a848  fmadds 2, 2, 29, 1
  044a84c  lis 3, 114
  044a850  stfs 2, 96(28)
  044a854  lfs 1, -3052(3)
  044a858  fmuls 1, 1, 29
  044a85c  fcmpu 0, 2, 1
  044a860  cror 6, 0, 2
  044a864  bt 6, 0x44a86c
  044a868  stfs 1, 96(28)
  044a86c  lfs 1, 28(30)
  044a870  fdivs 1, 31, 1
  044a874  bl 0x502758
  044a878  nop
  044a87c  stw 3, 148(1)
  044a880  bl 0x502730
  044a884  nop
  044a888  lfs 2, 28(30)
  044a88c  fnmsubs 31, 1, 2, 31
  044a890  lfs 1, 16(31)
  044a894  fdivs 31, 31, 2
  044a898  lfs 2, 20(31)
  044a89c  lfs 3, 72(31)
  044a8a0  lwz 4, 148(1)
  044a8a4  lwz 3, 0(30)
  044a8a8  addic 5, 3, -1
  044a8ac  cmpw 4, 5
  044a8b0  stfs 31, 144(1)
  044a8b4  bt 0, 0x44a8d4
  044a8b8  lis 5, 69
  044a8bc  addic 4, 3, -2
  044a8c0  addi 5, 5, -22872
  044a8c4  lis 6, 16256
  044a8c8  stw 4, 148(1)
  044a8cc  lfs 31, 20(5)
  044a8d0  stw 6, 144(1)
  044a8d4  slwi 5, 4, 4
  044a8d8  slwi 6, 3, 4
  044a8dc  addc 5, 30, 5
  044a8e0  clrldi 5, 5, 32
  044a8e4  lfs 4, 32(5)
  044a8e8  lfs 5, 16(5)
  044a8ec  lfs 6, 36(5)
  044a8f0  lfs 7, 20(5)
  044a8f4  fsubs 4, 4, 5
  044a8f8  lfs 8, 40(5)
  044a8fc  lfs 9, 24(5)
  044a900  fsubs 6, 6, 7
  044a904  lfs 10, 44(5)
  044a908  fsubs 8, 8, 9
  044a90c  addc 5, 30, 6
  044a910  stfs 10, 140(1)
  044a914  clrldi 5, 5, 32
  044a918  fmadds 4, 4, 31, 5
  044a91c  fmadds 5, 6, 31, 7
  044a920  fmadds 6, 8, 31, 9
  044a924  stfs 4, 128(1)
  044a928  stfs 5, 132(1)
  044a92c  stfs 6, 136(1)
  044a930  lfs 4, 4(5)
  044a934  lfs 5, 0(5)
  044a938  fsubs 4, 4, 2
  044a93c  fsubs 5, 5, 1
  044a940  lis 5, 69
  044a944  addi 5, 5, -22872
  044a948  fmuls 4, 4, 4
  044a94c  fmadds 4, 5, 5, 4
  044a950  lfs 5, 20(5)
  044a954  fsqrts 4, 4
  044a958  fcmpu 0, 4, 5
  044a95c  cror 6, 1, 2
  044a960  bt 6, 0x44a988
  044a964  lis 5, 134
  044a968  lis 6, 114
  044a96c  lfs 4, -22500(5)
  044a970  lfs 5, -3052(6)
  044a974  lfs 6, 96(28)
  044a978  fmuls 4, 4, 5
  044a97c  fcmpu 0, 6, 4
  044a980  bt 1, 0x44a988
  044a984  stb 29, 32(31)
  044a988  lis 5, 69
  044a98c  addic 4, 4, 1
  044a990  addi 5, 5, -22872
  044a994  addic 3, 3, -8
  044a998  cmpw 4, 3
  044a99c  lfs 31, 24(5)
  044a9a0  bf 0, 0x44ab8c
  044a9a4  slwi 3, 4, 4
  044a9a8  addc 3, 30, 3
  044a9ac  clrldi 3, 3, 32
  044a9b0  lfs 4, 16(3)
  044a9b4  lfs 5, 20(3)
  044a9b8  fsubs 1, 4, 1
  044a9bc  fsubs 2, 5, 2
  044a9c0  lis 3, 115
  044a9c4  addic 3, 3, 22784
  044a9c8  fabs 4, 1
  044a9cc  fabs 5, 2
  044a9d0  stfs 1, 176(1)
  044a9d4  stfs 2, 180(1)
  044a9d8  fsubs 1, 4, 5
  044a9dc  stfs 1, 184(1)
  044a9e0  lwz 4, 176(1)
  044a9e4  lfs 1, 176(1)
  044a9e8  lwz 5, 180(1)
  044a9ec  lfs 2, 180(1)
  044a9f0  lwz 6, 184(1)
  044a9f4  rlwinm 5, 5, 3, 29, 29
  044a9f8  fabs 6, 2
  044a9fc  lfs 2, 184(1)
  044aa00  fabs 1, 1
  044aa04  rlwimi 5, 6, 2, 30, 30
  044aa08  fsub 7, 2, 30
  044aa0c  fsub 8, 2, 30
  044aa10  rlwimi 5, 4, 4, 28, 28
  044aa14  ori 4, 3, 0
  044aa18  rlwimi 4, 5, 2, 26, 28
  044aa1c  slwi 5, 5, 2
  044aa20  clrldi 4, 4, 32
  044aa24  fsel 5, 7, 1, 5
  044aa28  lfsx 1, 3, 5
  044aa2c  fsel 4, 8, 6, 4
  044aa30  lfs 2, 4(4)
  044aa34  fcmpu 0, 5, 30
  044aa38  bt 1, 0x44aa44
  044aa3c  fmr 1, 30
  044aa40  b 0x44ab5c
  044aa44  fsubs 6, 4, 5
  044aa48  fadds 4, 4, 5
  044aa4c  addic 3, 1, 16
  044aa50  li 6, 2
  044aa54  addic 5, 3, 252
  044aa58  addic 4, 3, 236
  044aa5c  mtctr 6
  044aa60  fdivs 4, 6, 4
  044aa64  fmuls 5, 4, 4
  044aa68  stfs 4, 264(1)
  044aa6c  stfs 4, 256(1)
  044aa70  stfs 4, 260(1)
  044aa74  stfs 4, 252(1)
  044aa78  lfs 7, 264(1)
  044aa7c  lfs 8, 256(1)
  044aa80  lfs 9, 260(1)
  044aa84  fmuls 6, 5, 5
  044aa88  fmuls 8, 8, 5
  044aa8c  fmuls 7, 7, 6
  044aa90  fmuls 4, 6, 6
  044aa94  fmuls 6, 9, 6
  044aa98  stfs 8, 256(1)
  044aa9c  fmuls 5, 7, 5
  044aaa0  stfs 6, 260(1)
  044aaa4  stfs 5, 264(1)
  044aaa8  lfs 5, 236(3)
  044aaac  fmuls 5, 5, 4
  044aab0  stfs 5, 252(3)
  044aab4  lfs 5, 4(4)
  044aab8  addic 4, 4, 8
  044aabc  fmuls 5, 5, 4
  044aac0  addic 3, 3, 8
  044aac4  stfs 5, 4(5)
  044aac8  addic 5, 5, 8
  044aacc  bdnz 0x44aaa8
  044aad0  li 5, 4
  044aad4  ori 3, 1, 0
  044aad8  mtctr 5
  044aadc  lis 4, 115
  044aae0  addic 5, 3, 252
  044aae4  addic 4, 4, 22752
  044aae8  ori 7, 5, 0
  044aaec  lfs 4, 252(3)
  044aaf0  lfs 5, 0(4)
  044aaf4  fmuls 4, 4, 5
  044aaf8  lfs 5, 4(4)
  044aafc  addic 4, 4, 8
  044ab00  stfs 4, 252(3)
  044ab04  lfs 4, 4(5)
  044ab08  addic 3, 3, 8
  044ab0c  fmuls 4, 4, 5
  044ab10  stfs 4, 4(5)
  044ab14  addic 5, 5, 8
  044ab18  bdnz 0x44aaec
  044ab1c  ori 3, 1, 0
  044ab20  fmr 4, 30
  044ab24  mtctr 6
  044ab28  lfs 5, 252(3)
  044ab2c  fadds 4, 4, 5
  044ab30  lfs 5, 4(7)
  044ab34  addic 3, 3, 16
  044ab38  lfs 6, 8(7)
  044ab3c  lfs 7, 12(7)
  044ab40  addic 7, 7, 16
  044ab44  fadds 4, 4, 5
  044ab48  fadds 4, 4, 6
  044ab4c  fadds 4, 4, 7
  044ab50  bdnz 0x44ab28
  044ab54  fadds 4, 4, 31
  044ab58  fmadds 1, 4, 1, 2
  044ab5c  fmr 2, 1
  044ab60  fmr 1, 3
  044ab64  lis 3, 69
  044ab68  addic 5, 28, 108
  044ab6c  addi 3, 3, -22872
  044ab70  lfs 3, 28(3)
  044ab74  lfs 4, 32(3)
  044ab78  lfs 5, 36(3)
  044ab7c  bl 0xff190
  044ab80  nop
  044ab84  fmr 3, 1
  044ab88  b 0x44ad6c
  044ab8c  lis 3, 151
  044ab90  addic 3, 3, -25376
  044ab94  lfs 4, 128(3)
  044ab98  lfs 5, 132(3)
  044ab9c  fsubs 1, 4, 1
  044aba0  fsubs 2, 5, 2
  044aba4  lis 3, 115
  044aba8  addic 3, 3, 22784
  044abac  fabs 4, 1
  044abb0  fabs 5, 2
  044abb4  stfs 1, 164(1)
  044abb8  stfs 2, 168(1)
  044abbc  fsubs 1, 4, 5
  044abc0  stfs 1, 172(1)
  044abc4  lwz 4, 164(1)
  044abc8  lfs 1, 164(1)
  044abcc  lwz 5, 168(1)
  044abd0  lfs 2, 168(1)
  044abd4  fabs 1, 1
  044abd8  lwz 6, 172(1)
  044abdc  rlwinm 5, 5, 3, 29, 29
  044abe0  lfs 6, 172(1)
  044abe4  fabs 2, 2
  044abe8  rlwimi 5, 6, 2, 30, 30
  044abec  fsub 7, 6, 30
  044abf0  fsub 6, 6, 30
  044abf4  rlwimi 5, 4, 4, 28, 28
  044abf8  ori 4, 3, 0
  044abfc  rlwimi 4, 5, 2, 26, 28
  044ac00  slwi 5, 5, 2
  044ac04  clrldi 4, 4, 32
  044ac08  fsel 5, 7, 1, 5
  044ac0c  lfsx 1, 3, 5
  044ac10  fsel 4, 6, 2, 4
  044ac14  lfs 2, 4(4)
  044ac18  fcmpu 0, 5, 30
  044ac1c  bt 1, 0x44ac28
  044ac20  fmr 1, 30
  044ac24  b 0x44ad40
  044ac28  fsubs 6, 4, 5
  044ac2c  fadds 4, 4, 5
  044ac30  addic 3, 1, 16
  044ac34  li 6, 2
  044ac38  addic 4, 3, 204
  044ac3c  addic 5, 3, 220
  044ac40  mtctr 6
  044ac44  fdivs 4, 6, 4
  044ac48  fmuls 5, 4, 4
  044ac4c  stfs 4, 232(1)
  044ac50  stfs 4, 224(1)
  044ac54  stfs 4, 228(1)
  044ac58  stfs 4, 220(1)
  044ac5c  lfs 7, 232(1)
  044ac60  lfs 8, 224(1)
  044ac64  lfs 9, 228(1)
  044ac68  fmuls 6, 5, 5
  044ac6c  fmuls 8, 8, 5
  044ac70  fmuls 7, 7, 6
  044ac74  fmuls 4, 6, 6
  044ac78  fmuls 6, 9, 6
  044ac7c  stfs 8, 224(1)
  044ac80  fmuls 5, 7, 5
  044ac84  stfs 6, 228(1)
  044ac88  stfs 5, 232(1)
  044ac8c  lfs 5, 204(3)
  044ac90  fmuls 5, 5, 4
  044ac94  stfs 5, 220(3)
  044ac98  lfs 5, 4(4)
  044ac9c  addic 3, 3, 8
  044aca0  addic 4, 4, 8
  044aca4  fmuls 5, 5, 4
  044aca8  stfs 5, 4(5)
  044acac  addic 5, 5, 8
  044acb0  bdnz 0x44ac8c
  044acb4  li 5, 4
  044acb8  ori 3, 1, 0
  044acbc  mtctr 5
  044acc0  lis 4, 115
  044acc4  addic 5, 3, 220
  044acc8  addic 4, 4, 22752
  044accc  ori 7, 5, 0
  044acd0  lfs 4, 220(3)
  044acd4  lfs 5, 0(4)
  044acd8  fmuls 4, 4, 5
  044acdc  lfs 5, 4(4)
  044ace0  addic 4, 4, 8
  044ace4  stfs 4, 220(3)
  044ace8  lfs 4, 4(5)
  044acec  addic 3, 3, 8
  044acf0  fmuls 4, 4, 5
  044acf4  stfs 4, 4(5)
  044acf8  addic 5, 5, 8
  044acfc  bdnz 0x44acd0
  044ad00  fmr 4, 30
  044ad04  ori 3, 1, 0
  044ad08  mtctr 6
  044ad0c  lfs 5, 220(3)
  044ad10  fadds 4, 4, 5
  044ad14  addic 3, 3, 16
  044ad18  lfs 5, 4(7)
  044ad1c  lfs 6, 8(7)
  044ad20  lfs 7, 12(7)
  044ad24  addic 7, 7, 16
  044ad28  fadds 4, 4, 5
  044ad2c  fadds 4, 4, 6
  044ad30  fadds 4, 4, 7
  044ad34  bdnz 0x44ad0c
  044ad38  fadds 4, 4, 31
  044ad3c  fmadds 1, 4, 1, 2
  044ad40  fmr 2, 1
  044ad44  lis 3, 69
  044ad48  fmr 1, 3
  044ad4c  addic 5, 28, 108
  044ad50  addi 3, 3, -22872
  044ad54  lfs 3, 28(3)
  044ad58  lfs 4, 32(3)
  044ad5c  lfs 5, 36(3)
  044ad60  bl 0xff190
  044ad64  nop
  044ad68  fmr 3, 1
  044ad6c  lfs 1, 132(1)
  044ad70  lfs 2, 20(31)
  044ad74  lfs 4, 128(1)
  044ad78  fsubs 1, 1, 2
  044ad7c  lfs 5, 16(31)
  044ad80  lfs 6, 136(1)
  044ad84  fsubs 4, 4, 5
  044ad88  lfs 7, 24(31)
  044ad8c  fsubs 6, 6, 7
  044ad90  stfs 3, 72(31)
  044ad94  fmuls 8, 1, 1
  044ad98  lfs 9, 96(28)
  044ad9c  fmadds 8, 4, 4, 8
  044ada0  lis 3, 115
  044ada4  fmadds 8, 6, 6, 8
  044ada8  addic 3, 3, 22784
  044adac  fsqrts 8, 8
  044adb0  fsub 10, 9, 8
  044adb4  fsub 11, 30, 8
  044adb8  fsub 12, 8, 30
  044adbc  fsub 13, 8, 30
  044adc0  fsub 0, 30, 8
  044adc4  fsel 9, 10, 8, 9
  044adc8  fsub 10, 30, 8
  044adcc  fdivs 9, 9, 8
  044add0  fsub 8, 8, 30
  044add4  fmuls 1, 1, 9
  044add8  fmuls 4, 4, 9
  044addc  fmuls 6, 6, 9
  044ade0  fsel 10, 10, 30, 1
  044ade4  fsel 11, 11, 30, 4
  044ade8  fsel 9, 0, 30, 6
  044adec  fsel 1, 12, 10, 1
  044adf0  fsel 4, 13, 11, 4
  044adf4  fsel 6, 8, 9, 6
  044adf8  fabs 10, 1
  044adfc  fabs 11, 4
  044ae00  stfs 4, 152(1)
  044ae04  stfs 1, 156(1)
  044ae08  fadds 4, 5, 4
  044ae0c  fadds 1, 2, 1
  044ae10  fadds 2, 7, 6
  044ae14  fsubs 8, 11, 10
  044ae18  stfs 8, 160(1)
  044ae1c  lwz 4, 152(1)
  044ae20  lfs 5, 152(1)
  044ae24  lwz 5, 156(1)
  044ae28  stfs 4, 16(31)
  044ae2c  fabs 5, 5
  044ae30  stfs 1, 20(31)
  044ae34  rlwinm 5, 5, 3, 29, 29
  044ae38  stfs 2, 24(31)
  044ae3c  lfs 1, 156(1)
  044ae40  lwz 6, 160(1)
  044ae44  fabs 4, 1
  044ae48  lfs 1, 160(1)
  044ae4c  rlwimi 5, 6, 2, 30, 30
  044ae50  fsub 2, 1, 30
  044ae54  rlwimi 5, 4, 4, 28, 28
  044ae58  fsub 6, 1, 30
  044ae5c  ori 4, 3, 0
  044ae60  rlwimi 4, 5, 2, 26, 28
  044ae64  slwi 5, 5, 2
  044ae68  clrldi 4, 4, 32
  044ae6c  lfsx 1, 3, 5
  044ae70  fsel 5, 2, 5, 10
  044ae74  lfs 2, 4(4)
  044ae78  fsel 4, 6, 4, 11
  044ae7c  fcmpu 0, 5, 30
  044ae80  bt 1, 0x44ae88
  044ae84  b 0x44af9c
  044ae88  fsubs 6, 4, 5
  044ae8c  fadds 4, 4, 5
  044ae90  addic 3, 1, 16
  044ae94  li 6, 2
  044ae98  addic 4, 3, 172
  044ae9c  addic 5, 3, 188
  044aea0  mtctr 6
  044aea4  fdivs 4, 6, 4
  044aea8  fmuls 5, 4, 4
  044aeac  stfs 4, 200(1)
  044aeb0  stfs 4, 192(1)
  044aeb4  stfs 4, 196(1)
  044aeb8  stfs 4, 188(1)
  044aebc  lfs 7, 200(1)
  044aec0  lfs 8, 192(1)
  044aec4  lfs 9, 196(1)
  044aec8  fmuls 6, 5, 5
  044aecc  fmuls 8, 8, 5
  044aed0  fmuls 7, 7, 6
  044aed4  fmuls 4, 6, 6
  044aed8  fmuls 6, 9, 6
  044aedc  stfs 8, 192(1)
  044aee0  fmuls 5, 7, 5
  044aee4  stfs 6, 196(1)
  044aee8  stfs 5, 200(1)
  044aeec  lfs 5, 172(3)
  044aef0  fmuls 5, 5, 4
  044aef4  stfs 5, 188(3)
  044aef8  lfs 5, 4(4)
  044aefc  addic 3, 3, 8
  044af00  addic 4, 4, 8
  044af04  fmuls 5, 5, 4
  044af08  stfs 5, 4(5)
  044af0c  addic 5, 5, 8
  044af10  bdnz 0x44aeec
  044af14  li 5, 4
  044af18  ori 3, 1, 0
  044af1c  mtctr 5
  044af20  lis 4, 115
  044af24  addic 5, 3, 188
  044af28  addic 4, 4, 22752
  044af2c  ori 7, 5, 0
  044af30  lfs 4, 188(3)
  044af34  lfs 5, 0(4)
  044af38  fmuls 4, 4, 5
  044af3c  lfs 5, 4(4)
  044af40  addic 4, 4, 8
  044af44  stfs 4, 188(3)
  044af48  lfs 4, 4(5)
  044af4c  addic 3, 3, 8
  044af50  fmuls 4, 4, 5
  044af54  stfs 4, 4(5)
  044af58  addic 5, 5, 8
  044af5c  bdnz 0x44af30
  044af60  ori 3, 1, 0
  044af64  mtctr 6
  044af68  lfs 4, 188(3)
  044af6c  lfs 5, 4(7)
  044af70  fadds 4, 30, 4
  044af74  lfs 6, 8(7)
  044af78  lfs 30, 12(7)
  044af7c  addic 3, 3, 16
  044af80  addic 7, 7, 16
  044af84  fadds 4, 4, 5
  044af88  fadds 4, 4, 6
  044af8c  fadds 30, 4, 30
  044af90  bdnz 0x44af68
  044af94  fadds 30, 30, 31
  044af98  fmadds 30, 30, 1, 2
  044af9c  fmr 1, 30
  044afa0  fmr 2, 3
  044afa4  bl 0x5025e0
  044afa8  nop
  044afac  lis 3, 69
  044afb0  addi 30, 3, -22872
  044afb4  lis 29, 114
  044afb8  lfs 2, 44(30)
  044afbc  lfs 3, 48(30)
  044afc0  fsubs 5, 2, 1
  044afc4  lfs 4, 40(30)
  044afc8  fsubs 6, 3, 1
  044afcc  fadds 4, 1, 4
  044afd0  lfs 8, 52(30)
  044afd4  lis 27, 114
  044afd8  addic 5, 28, 104
  044afdc  fsub 7, 1, 5
  044afe0  fsubs 2, 2, 4
  044afe4  fsubs 3, 3, 4
  044afe8  fsel 1, 7, 5, 1
  044afec  fsub 7, 4, 2
  044aff0  lfs 5, 56(30)
  044aff4  lfs 9, 60(30)
  044aff8  lfs 11, 96(28)
  044affc  fsub 10, 6, 1
  044b000  fsel 2, 7, 2, 4
  044b004  lfs 4, 64(30)
  044b008  fsel 1, 10, 6, 1
  044b00c  lfs 6, -3052(29)
  044b010  fsub 7, 3, 2
  044b014  fmuls 13, 6, 29
  044b018  fmuls 10, 1, 1
  044b01c  fsel 2, 7, 3, 2
  044b020  lfs 7, 72(30)
  044b024  fmuls 3, 10, 1
  044b028  fmuls 12, 2, 2
  044b02c  fmuls 0, 10, 3
  044b030  fmadds 1, 3, 8, 1
  044b034  fmuls 3, 11, 7
  044b038  fmuls 7, 12, 2
  044b03c  fmuls 30, 10, 0
  044b040  fmadds 1, 0, 5, 1
  044b044  fmuls 0, 12, 7
  044b048  fmadds 2, 7, 8, 2
  044b04c  fmuls 7, 10, 30
  044b050  fmadds 1, 30, 9, 1
  044b054  fmuls 10, 12, 0
  044b058  fmadds 2, 0, 5, 2
  044b05c  lfs 5, 68(30)
  044b060  lfs 8, 68(31)
  044b064  fmadds 1, 7, 4, 1
  044b068  fmuls 7, 12, 10
  044b06c  fmadds 2, 10, 9, 2
  044b070  lfs 9, -3048(27)
  044b074  fmuls 1, 3, 1
  044b078  fmuls 3, 11, 5
  044b07c  fmuls 5, 6, 31
  044b080  fmadds 2, 7, 4, 2
  044b084  fdivs 30, 1, 13
  044b088  fmuls 2, 3, 2
  044b08c  fmr 1, 8
  044b090  lfs 3, 76(30)
  044b094  lfs 29, 80(30)
  044b098  fmuls 3, 9, 3
  044b09c  fmuls 4, 9, 29
  044b0a0  fdivs 2, 2, 13
  044b0a4  bl 0xff190
  044b0a8  nop
  044b0ac  stfs 1, 68(31)
  044b0b0  lfs 4, 84(30)
  044b0b4  addic 5, 28, 100
  044b0b8  lfs 5, 88(30)
  044b0bc  lfs 1, 64(31)
  044b0c0  lfs 6, -3048(27)
  044b0c4  lfs 7, -3052(29)
  044b0c8  fmuls 3, 6, 29
  044b0cc  fmuls 4, 6, 4
  044b0d0  fmuls 5, 7, 5
  044b0d4  fmr 2, 30
  044b0d8  bl 0xff190
  044b0dc  nop
  044b0e0  stfs 1, 64(31)
  044b0e4  ld 0, 368(1)
  044b0e8  mtlr 0
  044b0ec  lfd 29, 328(1)
  044b0f0  lfd 30, 336(1)
  044b0f4  lfd 31, 344(1)
  044b0f8  ld 27, 288(1)
  044b0fc  ld 28, 296(1)
  044b100  ld 29, 304(1)
  044b104  ld 30, 312(1)
  044b108  ld 31, 320(1)
  044b10c  addi 1, 1, 352
  044b110  blr

M750_0044b130:   # 0x44b130, 0x324 bytes
  044b130  stdu 1, -256(1)
  044b134  mflr 0
  044b138  std 0, 272(1)
  044b13c  stfd 25, 200(1)
  044b140  stfd 26, 208(1)
  044b144  stfd 27, 216(1)
  044b148  stfd 28, 224(1)
  044b14c  stfd 29, 232(1)
  044b150  stfd 30, 240(1)
  044b154  stfd 31, 248(1)
  044b158  addi 0, 1, 144
  044b15c  stvx 31, 0, 0
  044b160  std 30, 184(1)
  044b164  lhz 4, 52(3)
  044b168  lwz 30, 120(3)
  044b16c  clrlwi 4, 4, 31
  044b170  std 31, 192(1)
  044b174  std 29, 176(1)
  044b178  std 28, 168(1)
  044b17c  cmpwi 4, 0
  044b180  bf 2, 0x44b410
  044b184  lis 4, 149
  044b188  lfs 1, 20(3)
  044b18c  addic 4, 4, 5056
  044b190  lfs 2, 324(4)
  044b194  lfs 3, 320(4)
  044b198  fsubs 2, 2, 1
  044b19c  lfs 4, 16(3)
  044b1a0  lfs 5, 24(3)
  044b1a4  fsubs 3, 3, 4
  044b1a8  lfs 6, 328(4)
  044b1ac  fsubs 6, 6, 5
  044b1b0  lis 3, 69
  044b1b4  fmuls 7, 2, 2
  044b1b8  addi 3, 3, -20204
  044b1bc  stfs 3, 112(1)
  044b1c0  stfs 2, 116(1)
  044b1c4  lfs 8, 332(4)
  044b1c8  fmadds 7, 3, 3, 7
  044b1cc  stfs 6, 120(1)
  044b1d0  stfs 8, 124(1)
  044b1d4  lfs 8, 4(3)
  044b1d8  lfs 25, 0(3)
  044b1dc  fmadds 7, 6, 6, 7
  044b1e0  lfs 9, 8(3)
  044b1e4  fsqrts 7, 7
  044b1e8  li 4, 16
  044b1ec  li 29, 0
  044b1f0  addic 31, 30, 48
  044b1f4  fdivs 8, 8, 7
  044b1f8  fsub 10, 25, 7
  044b1fc  fsub 11, 25, 7
  044b200  fsub 0, 25, 7
  044b204  fsub 12, 7, 25
  044b208  fsub 13, 7, 25
  044b20c  fsub 7, 7, 25
  044b210  fmuls 2, 2, 8
  044b214  fmuls 3, 3, 8
  044b218  fmuls 6, 6, 8
  044b21c  fsel 8, 10, 25, 2
  044b220  fsel 10, 11, 25, 3
  044b224  fsel 11, 0, 25, 6
  044b228  fsel 2, 12, 8, 2
  044b22c  fsel 3, 13, 10, 3
  044b230  fsel 6, 7, 11, 6
  044b234  fmuls 7, 2, 2
  044b238  fadds 4, 3, 4
  044b23c  fadds 1, 2, 1
  044b240  fadds 5, 6, 5
  044b244  fmadds 7, 3, 3, 7
  044b248  stfs 4, 112(1)
  044b24c  stfs 1, 116(1)
  044b250  fmadds 7, 6, 6, 7
  044b254  stfs 5, 120(1)
  044b258  lfs 26, 12(3)
  044b25c  <unknown>
  044b260  lfs 27, 16(3)
  044b264  fsqrts 7, 7
  044b268  vspltw 31, 31, 0
  044b26c  lfs 28, 20(3)
  044b270  fdivs 1, 9, 7
  044b274  fsub 4, 25, 7
  044b278  fsub 5, 25, 7
  044b27c  fsub 8, 25, 7
  044b280  fsub 29, 7, 25
  044b284  fsub 30, 7, 25
  044b288  fsub 31, 7, 25
  044b28c  fmuls 6, 6, 1
  044b290  fmuls 2, 2, 1
  044b294  fmuls 1, 3, 1
  044b298  fsel 3, 4, 25, 6
  044b29c  fsel 4, 5, 25, 2
  044b2a0  fsel 5, 8, 25, 1
  044b2a4  fsel 29, 29, 3, 6
  044b2a8  fsel 30, 30, 4, 2
  044b2ac  fsel 31, 31, 5, 1
  044b2b0  lfs 1, 16(30)
  044b2b4  lfs 2, 32(30)
  044b2b8  fadds 1, 1, 2
  044b2bc  fcmpu 0, 1, 26
  044b2c0  fcmpu 1, 1, 25
  044b2c4  stfs 1, 16(30)
  044b2c8  bt 0, 0x44b2d8
  044b2cc  fsubs 1, 1, 26
  044b2d0  stfs 1, 16(30)
  044b2d4  b 0x44b2e4
  044b2d8  bt 5, 0x44b2e4
  044b2dc  fadds 1, 1, 26
  044b2e0  stfs 1, 16(30)
  044b2e4  addic 3, 30, 48
  044b2e8  bl 0x4fff60
  044b2ec  nop
  044b2f0  lis 4, 114
  044b2f4  li 5, -3056
  044b2f8  lwz 28, 48(30)
  044b2fc  cmpwi 3, 0
  044b300  lfs 1, -3056(4)
  044b304  <unknown>
  044b308  bt 2, 0x44b334
  044b30c  vspltisw 3, -1
  044b310  fmuls 2, 1, 27
  044b314  vslw 3, 3, 3
  044b318  vmaddfp 2, 2, 31, 3
  044b31c  fctiwz 2, 2
  044b320  vctsxs 2, 2, 0
  044b324  stfd 2, 128(1)
  044b328  lwz 28, 132(1)
  044b32c  vspltw 2, 2, 0
  044b330  stvewx 2, 0, 31
  044b334  fmuls 1, 1, 27
  044b338  fctiwz 1, 1
  044b33c  stfd 1, 128(1)
  044b340  lwz 3, 132(1)
  044b344  subc 3, 3, 28
  044b348  extsw 3, 3
  044b34c  bl 0x502730
  044b350  nop
  044b354  lis 3, 114
  044b358  lfs 2, -3056(3)
  044b35c  fmuls 2, 2, 27
  044b360  lis 4, 4160
  044b364  lis 3, 16448
  044b368  ori 4, 4, 65535
  044b36c  ori 3, 3, 65535
  044b370  fctidz 2, 2
  044b374  fcfid 2, 2
  044b378  frsp 2, 2
  044b37c  fdivs 1, 1, 2
  044b380  fsubs 1, 28, 1
  044b384  fabs 1, 1
  044b388  bl 0x5027bc
  044b38c  nop
  044b390  lis 4, 161
  044b394  ori 28, 3, 0
  044b398  lwz 3, 1800(4)
  044b39c  cmpwi 3, 2
  044b3a0  bt 2, 0x44b3d8
  044b3a4  lfs 1, 16(30)
  044b3a8  bl 0x502758
  044b3ac  nop
  044b3b0  clrlwi 5, 3, 24
  044b3b4  lfs 1, 64(30)
  044b3b8  addic 3, 1, 112
  044b3bc  li 10, 0
  044b3c0  ori 4, 28, 0
  044b3c4  li 6, 53
  044b3c8  li 7, 1
  044b3cc  li 8, 2
  044b3d0  bl 0x130ed0
  044b3d4  nop
  044b3d8  lfs 1, 112(1)
  044b3dc  lfs 2, 116(1)
  044b3e0  addic 29, 29, 1
  044b3e4  fadds 1, 1, 31
  044b3e8  lfs 3, 120(1)
  044b3ec  fadds 2, 2, 30
  044b3f0  cmpwi 29, 4
  044b3f4  fadds 3, 3, 29
  044b3f8  addic 31, 31, 4
  044b3fc  addic 30, 30, 4
  044b400  stfs 1, 112(1)
  044b404  stfs 2, 116(1)
  044b408  stfs 3, 120(1)
  044b40c  bt 0, 0x44b2b0
  044b410  li 0, 144
  044b414  lvx 31, 1, 0
  044b418  ld 0, 272(1)
  044b41c  mtlr 0
  044b420  lfd 25, 200(1)
  044b424  lfd 26, 208(1)
  044b428  lfd 27, 216(1)
  044b42c  lfd 28, 224(1)
  044b430  lfd 29, 232(1)
  044b434  lfd 30, 240(1)
  044b438  lfd 31, 248(1)
  044b43c  ld 28, 168(1)
  044b440  ld 29, 176(1)
  044b444  ld 30, 184(1)
  044b448  ld 31, 192(1)
  044b44c  addi 1, 1, 256
  044b450  blr

M750_0044b460:   # 0x44b460, 0x120 bytes
  044b460  stdu 1, -160(1)
  044b464  mflr 0
  044b468  std 0, 176(1)
  044b46c  std 29, 136(1)
  044b470  std 31, 152(1)
  044b474  lwz 31, 120(3)
  044b478  std 30, 144(1)
  044b47c  li 29, 0
  044b480  ori 30, 31, 0
  044b484  li 3, 255
  044b488  bl 0xfc620
  044b48c  nop
  044b490  extsw 3, 3
  044b494  addic 29, 29, 1
  044b498  std 3, 112(1)
  044b49c  cmpwi 29, 4
  044b4a0  lfd 1, 112(1)
  044b4a4  fcfid 1, 1
  044b4a8  frsp 1, 1
  044b4ac  stfs 1, 16(30)
  044b4b0  addic 30, 30, 4
  044b4b4  bt 0, 0x44b484
  044b4b8  lis 3, -16512
  044b4bc  lis 4, -16368
  044b4c0  vspltisw 4, 0
  044b4c4  lis 5, 16288
  044b4c8  lis 6, 69
  044b4cc  stw 3, 32(31)
  044b4d0  lis 7, 114
  044b4d4  stw 4, 36(31)
  044b4d8  lis 3, 16416
  044b4dc  addi 4, 6, -19372
  044b4e0  stw 5, 40(31)
  044b4e4  li 5, -3056
  044b4e8  li 6, 4
  044b4ec  li 8, 8
  044b4f0  stw 3, 44(31)
  044b4f4  li 9, 4
  044b4f8  <unknown>
  044b4fc  <unknown>
  044b500  addic 3, 31, 48
  044b504  <unknown>
  044b508  mtctr 9
  044b50c  <unknown>
  044b510  vspltw 6, 6, 0
  044b514  vspltw 3, 3, 0
  044b518  vspltw 2, 2, 0
  044b51c  vadduwm 7, 4, 3
  044b520  vspltisw 8, -1
  044b524  vadduwm 4, 4, 2
  044b528  vcfsx 7, 7, 0
  044b52c  vslw 8, 8, 8
  044b530  vaddfp 7, 7, 6
  044b534  vmaddfp 7, 7, 5, 8
  044b538  vctsxs 7, 7, 0
  044b53c  vspltw 7, 7, 0
  044b540  stvewx 7, 0, 3
  044b544  addic 3, 3, 4
  044b548  bdnz 0x44b51c
  044b54c  lis 3, 16416
  044b550  lis 4, 16448
  044b554  stw 3, 64(31)
  044b558  stw 4, 68(31)
  044b55c  stw 4, 72(31)
  044b560  stw 3, 76(31)
  044b564  ld 0, 176(1)
  044b568  mtlr 0
  044b56c  ld 29, 136(1)
  044b570  ld 30, 144(1)
  044b574  ld 31, 152(1)
  044b578  addi 1, 1, 160
  044b57c  blr

UpdateMoby_750:   # 0x44b5f0, 0x17ec bytes
  044b5f0  stdu 1, -480(1)
  044b5f4  mflr 0
  044b5f8  std 0, 496(1)
  044b5fc  stfd 29, 456(1)
  044b600  stfd 30, 464(1)
  044b604  stfd 31, 472(1)
  044b608  std 31, 448(1)
  044b60c  lis 4, 69
  044b610  std 28, 424(1)
  044b614  ori 31, 3, 0
  044b618  addi 4, 4, -19072
  044b61c  std 30, 440(1)
  044b620  li 28, 0
  044b624  lwz 30, 120(31)
  044b628  lbz 3, 32(31)
  044b62c  lfs 30, 0(4)
  044b630  stw 28, 128(1)
  044b634  cmpwi 1, 3, 5
  044b638  stw 28, 132(1)
  044b63c  cmpwi 6, 3, 4
  044b640  stw 28, 136(1)
  044b644  cmpwi 7, 3, 3
  044b648  stw 28, 140(1)
  044b64c  std 29, 432(1)
  044b650  std 27, 416(1)
  044b654  std 26, 408(1)
  044b658  std 25, 400(1)
  044b65c  lfs 1, 72(31)
  044b660  bt 5, 0x44b684
  044b664  bt 6, 0x44bd4c
  044b668  bt 26, 0x44bcf4
  044b66c  bt 30, 0x44b9c8
  044b670  cmpwi 3, 2
  044b674  bt 2, 0x44b84c
  044b678  cmpwi 3, 0
  044b67c  bt 2, 0x44b6b8
  044b680  b 0x44ccdc
  044b684  cmpwi 3, 11
  044b688  bt 2, 0x44cc9c
  044b68c  cmpwi 3, 10
  044b690  bt 2, 0x44cc64
  044b694  cmpwi 3, 9
  044b698  bt 2, 0x44cc30
  044b69c  cmpwi 3, 8
  044b6a0  bt 2, 0x44cbac
  044b6a4  cmpwi 3, 7
  044b6a8  bt 2, 0x44c908
  044b6ac  cmpwi 3, 6
  044b6b0  bt 2, 0x44c13c
  044b6b4  b 0x44ccdc
  044b6b8  li 3, 255
  044b6bc  stb 3, 48(31)
  044b6c0  stfs 1, 172(30)
  044b6c4  lfs 1, 16(31)
  044b6c8  stfs 1, 192(30)
  044b6cc  lfs 1, 20(31)
  044b6d0  stfs 1, 196(30)
  044b6d4  lfs 1, 24(31)
  044b6d8  lwz 3, 0(30)
  044b6dc  stfs 1, 200(30)
  044b6e0  lfs 1, 28(31)
  044b6e4  cmpwi 3, 0
  044b6e8  stfs 1, 204(30)
  044b6ec  lhz 3, 52(31)
  044b6f0  bt 2, 0x44b708
  044b6f4  li 4, 2
  044b6f8  ori 3, 31, 0
  044b6fc  stb 4, 32(31)
  044b700  bl 0x44b460
  044b704  b 0x44b740
  044b708  li 5, 0
  044b70c  lwz 7, 176(30)
  044b710  ori 3, 3, 65
  044b714  li 4, 1
  044b718  subc 5, 5, 7
  044b71c  li 6, 2
  044b720  cntlzw 5, 5
  044b724  subc 4, 4, 6
  044b728  sth 3, 52(31)
  044b72c  sldi 5, 5, 58
  044b730  sradi 5, 5, 63
  044b734  and 3, 5, 4
  044b738  addc 3, 6, 3
  044b73c  stb 3, 32(31)
  044b740  lwz 3, 80(30)
  044b744  cmpwi 3, -1
  044b748  bt 2, 0x44b760
  044b74c  li 4, 5
  044b750  ori 3, 31, 0
  044b754  stb 4, 32(31)
  044b758  bl 0x44b460
  044b75c  b 0x44ccdc
  044b760  lwz 3, 112(30)
  044b764  cmpwi 3, -1
  044b768  bt 2, 0x44ccdc
  044b76c  lis 7, 165
  044b770  ori 6, 30, 0
  044b774  addic 7, 7, 7136
  044b778  ori 3, 28, 0
  044b77c  lwz 4, 112(6)
  044b780  cmpwi 4, -1
  044b784  bt 2, 0x44b7fc
  044b788  slwi 4, 4, 2
  044b78c  ori 5, 28, 0
  044b790  extsw 4, 4
  044b794  lwzx 4, 7, 4
  044b798  lwz 8, 0(4)
  044b79c  addic 8, 8, -2
  044b7a0  cmpwi 8, 0
  044b7a4  bf 1, 0x44b7fc
  044b7a8  ori 8, 4, 0
  044b7ac  lfs 1, 20(8)
  044b7b0  lfs 2, 36(8)
  044b7b4  lfs 3, 16(8)
  044b7b8  fsubs 1, 1, 2
  044b7bc  lfs 2, 32(8)
  044b7c0  fsubs 2, 3, 2
  044b7c4  lfs 3, 24(8)
  044b7c8  lfs 4, 40(8)
  044b7cc  fsubs 3, 3, 4
  044b7d0  fmuls 1, 1, 1
  044b7d4  addic 5, 5, 1
  044b7d8  fmadds 1, 2, 2, 1
  044b7dc  fmadds 1, 3, 3, 1
  044b7e0  fsqrts 1, 1
  044b7e4  stfs 1, 28(8)
  044b7e8  lwz 9, 0(4)
  044b7ec  addic 8, 8, 16
  044b7f0  addic 9, 9, -2
  044b7f4  cmpw 5, 9
  044b7f8  bt 0, 0x44b7ac
  044b7fc  addic 3, 3, 1
  044b800  addic 6, 6, 4
  044b804  cmpwi 3, 8
  044b808  bt 0, 0x44b77c
  044b80c  lwz 4, 112(30)
  044b810  li 3, 3
  044b814  slwi 4, 4, 2
  044b818  extsw 4, 4
  044b81c  lwzx 4, 7, 4
  044b820  lfs 1, 16(4)
  044b824  stfs 1, 16(31)
  044b828  lfs 1, 20(4)
  044b82c  stfs 1, 20(31)
  044b830  lfs 1, 24(4)
  044b834  stfs 1, 24(31)
  044b838  lfs 1, 28(4)
  044b83c  stfs 1, 28(31)
  044b840  stw 28, 168(30)
  044b844  stb 3, 32(31)
  044b848  b 0x44ccdc
  044b84c  lis 3, 69
  044b850  lwz 4, 176(30)
  044b854  addi 3, 3, -19072
  044b858  cmpwi 4, 0
  044b85c  lfs 31, 4(3)
  044b860  bt 2, 0x44b880
  044b864  lhz 3, 52(31)
  044b868  clrlwi 3, 3, 31
  044b86c  cmpwi 3, 0
  044b870  bt 2, 0x44b880
  044b874  lis 3, 69
  044b878  addi 3, 3, -19072
  044b87c  lfs 31, 8(3)
  044b880  lwz 3, 4(30)
  044b884  cmpwi 3, 12
  044b888  bf 2, 0x44b898
  044b88c  lis 3, 69
  044b890  addi 3, 3, -19072
  044b894  lfs 31, 8(3)
  044b898  lis 3, 69
  044b89c  lfs 2, 172(30)
  044b8a0  addic 5, 30, 108
  044b8a4  addi 29, 3, -19072
  044b8a8  lfs 3, 12(29)
  044b8ac  lfs 4, 16(29)
  044b8b0  lfs 5, 20(29)
  044b8b4  bl 0xff190
  044b8b8  nop
  044b8bc  stfs 1, 72(31)
  044b8c0  lis 27, 114
  044b8c4  lfs 3, 24(29)
  044b8c8  lis 26, 114
  044b8cc  lfs 29, 28(29)
  044b8d0  lfs 5, 32(29)
  044b8d4  addic 5, 30, 104
  044b8d8  lfs 1, 68(31)
  044b8dc  fmr 2, 30
  044b8e0  lfs 4, -3048(27)
  044b8e4  lfs 6, -3052(26)
  044b8e8  fmuls 3, 4, 3
  044b8ec  fmuls 4, 4, 29
  044b8f0  fmuls 5, 6, 5
  044b8f4  bl 0xff190
  044b8f8  nop
  044b8fc  stfs 1, 68(31)
  044b900  lfs 4, 36(29)
  044b904  addic 5, 30, 100
  044b908  lfs 5, 40(29)
  044b90c  fmr 2, 30
  044b910  lfs 1, 64(31)
  044b914  lfs 6, -3048(27)
  044b918  lfs 7, -3052(26)
  044b91c  fmuls 3, 6, 29
  044b920  fmuls 4, 6, 4
  044b924  fmuls 5, 7, 5
  044b928  bl 0xff190
  044b92c  nop
  044b930  stfs 1, 64(31)
  044b934  ori 3, 31, 0
  044b938  bl 0x44b130
  044b93c  lwz 3, 4(30)
  044b940  lis 4, 151
  044b944  addic 4, 4, -13812
  044b948  extsw 3, 3
  044b94c  lbzx 3, 4, 3
  044b950  cmpwi 3, 0
  044b954  bt 2, 0x44b968
  044b958  ori 3, 31, 0
  044b95c  bl 0xefb38
  044b960  nop
  044b964  b 0x44cda4
  044b968  lis 3, 151
  044b96c  lfs 1, 20(31)
  044b970  addic 3, 3, -25376
  044b974  lfs 2, 132(3)
  044b978  lfs 3, 128(3)
  044b97c  fsubs 1, 2, 1
  044b980  lfs 2, 16(31)
  044b984  fsubs 2, 3, 2
  044b988  lfs 3, 136(3)
  044b98c  lfs 4, 24(31)
  044b990  fsubs 3, 3, 4
  044b994  fmuls 1, 1, 1
  044b998  fmadds 1, 2, 2, 1
  044b99c  fmadds 1, 3, 3, 1
  044b9a0  fsqrts 1, 1
  044b9a4  fcmpu 0, 1, 31
  044b9a8  cror 6, 1, 2
  044b9ac  bt 6, 0x44ccdc
  044b9b0  lwz 3, 8872(3)
  044b9b4  cmpwi 3, 0
  044b9b8  bt 2, 0x44ccdc
  044b9bc  li 3, 8
  044b9c0  stb 3, 32(31)
  044b9c4  b 0x44ccdc
  044b9c8  ori 3, 31, 0
  044b9cc  bl 0x44b130
  044b9d0  lis 3, 151
  044b9d4  lwz 4, 4(30)
  044b9d8  addic 3, 3, -13812
  044b9dc  extsw 4, 4
  044b9e0  lbzx 3, 3, 4
  044b9e4  cmpwi 3, 0
  044b9e8  bt 2, 0x44b9fc
  044b9ec  ori 3, 31, 0
  044b9f0  bl 0xefb38
  044b9f4  nop
  044b9f8  b 0x44cda4
  044b9fc  lwz 3, 168(30)
  044ba00  slwi 3, 3, 2
  044ba04  addc 3, 30, 3
  044ba08  clrldi 3, 3, 32
  044ba0c  lwz 3, 112(3)
  044ba10  cmpwi 3, -1
  044ba14  bf 2, 0x44ba24
  044ba18  li 3, 2
  044ba1c  stb 3, 32(31)
  044ba20  b 0x44ccdc
  044ba24  lis 29, 151
  044ba28  lfs 1, 16(31)
  044ba2c  addic 29, 29, -25376
  044ba30  lfs 2, 20(31)
  044ba34  lis 3, 115
  044ba38  lfs 3, 128(29)
  044ba3c  lfs 4, 132(29)
  044ba40  fsubs 1, 3, 1
  044ba44  fsubs 2, 4, 2
  044ba48  addic 3, 3, 22784
  044ba4c  fabs 3, 1
  044ba50  fabs 5, 2
  044ba54  stfs 1, 252(1)
  044ba58  stfs 2, 256(1)
  044ba5c  lfs 4, 72(31)
  044ba60  fsubs 1, 3, 5
  044ba64  stfs 1, 260(1)
  044ba68  lwz 4, 252(1)
  044ba6c  lfs 1, 252(1)
  044ba70  lwz 5, 256(1)
  044ba74  lfs 2, 256(1)
  044ba78  lwz 6, 260(1)
  044ba7c  rlwinm 5, 5, 3, 29, 29
  044ba80  fabs 6, 2
  044ba84  lfs 2, 260(1)
  044ba88  fabs 1, 1
  044ba8c  rlwimi 5, 6, 2, 30, 30
  044ba90  fsub 7, 2, 30
  044ba94  fsub 8, 2, 30
  044ba98  rlwimi 5, 4, 4, 28, 28
  044ba9c  ori 4, 3, 0
  044baa0  rlwimi 4, 5, 2, 26, 28
  044baa4  slwi 5, 5, 2
  044baa8  clrldi 4, 4, 32
  044baac  fsel 5, 7, 1, 5
  044bab0  lfsx 1, 3, 5
  044bab4  fsel 3, 8, 6, 3
  044bab8  lfs 2, 4(4)
  044babc  fcmpu 0, 5, 30
  044bac0  bt 1, 0x44bacc
  044bac4  fmr 1, 30
  044bac8  b 0x44bbf0
  044bacc  fsubs 6, 3, 5
  044bad0  fadds 3, 3, 5
  044bad4  addic 3, 1, 16
  044bad8  li 7, 2
  044badc  addic 5, 3, 360
  044bae0  addic 4, 3, 344
  044bae4  mtctr 7
  044bae8  fdivs 3, 6, 3
  044baec  fmuls 5, 3, 3
  044baf0  stfs 3, 372(1)
  044baf4  stfs 3, 364(1)
  044baf8  stfs 3, 368(1)
  044bafc  stfs 3, 360(1)
  044bb00  lfs 7, 372(1)
  044bb04  lfs 8, 364(1)
  044bb08  lfs 9, 368(1)
  044bb0c  fmuls 6, 5, 5
  044bb10  fmuls 8, 8, 5
  044bb14  fmuls 7, 7, 6
  044bb18  fmuls 3, 6, 6
  044bb1c  fmuls 6, 9, 6
  044bb20  stfs 8, 364(1)
  044bb24  fmuls 5, 7, 5
  044bb28  stfs 6, 368(1)
  044bb2c  stfs 5, 372(1)
  044bb30  lfs 5, 344(3)
  044bb34  fmuls 5, 5, 3
  044bb38  stfs 5, 360(3)
  044bb3c  lfs 5, 4(4)
  044bb40  addic 4, 4, 8
  044bb44  fmuls 5, 5, 3
  044bb48  addic 3, 3, 8
  044bb4c  stfs 5, 4(5)
  044bb50  addic 5, 5, 8
  044bb54  bdnz 0x44bb30
  044bb58  li 5, 4
  044bb5c  ori 3, 1, 0
  044bb60  mtctr 5
  044bb64  lis 4, 115
  044bb68  addic 5, 3, 360
  044bb6c  addic 4, 4, 22752
  044bb70  ori 6, 5, 0
  044bb74  lfs 3, 360(3)
  044bb78  lfs 5, 0(4)
  044bb7c  fmuls 3, 3, 5
  044bb80  lfs 5, 4(4)
  044bb84  addic 4, 4, 8
  044bb88  stfs 3, 360(3)
  044bb8c  lfs 3, 4(5)
  044bb90  addic 3, 3, 8
  044bb94  fmuls 3, 3, 5
  044bb98  stfs 3, 4(5)
  044bb9c  addic 5, 5, 8
  044bba0  bdnz 0x44bb74
  044bba4  ori 3, 1, 0
  044bba8  fmr 3, 30
  044bbac  mtctr 7
  044bbb0  lfs 5, 360(3)
  044bbb4  fadds 3, 3, 5
  044bbb8  lfs 5, 4(6)
  044bbbc  addic 3, 3, 16
  044bbc0  lfs 6, 8(6)
  044bbc4  lfs 7, 12(6)
  044bbc8  addic 6, 6, 16
  044bbcc  fadds 3, 3, 5
  044bbd0  fadds 3, 3, 6
  044bbd4  fadds 3, 3, 7
  044bbd8  bdnz 0x44bbb0
  044bbdc  lis 3, 69
  044bbe0  addi 3, 3, -19072
  044bbe4  lfs 5, 32(3)
  044bbe8  fadds 3, 3, 5
  044bbec  fmadds 1, 3, 1, 2
  044bbf0  lis 3, 69
  044bbf4  fmr 2, 1
  044bbf8  fmr 1, 4
  044bbfc  addic 5, 30, 108
  044bc00  addi 27, 3, -19072
  044bc04  lfs 6, 16(27)
  044bc08  lfs 3, 12(27)
  044bc0c  lfs 5, 20(27)
  044bc10  fmr 4, 6
  044bc14  bl 0xff190
  044bc18  nop
  044bc1c  stfs 1, 72(31)
  044bc20  lis 26, 114
  044bc24  lfs 3, 24(27)
  044bc28  lis 25, 114
  044bc2c  lfs 31, 28(27)
  044bc30  lfs 5, 32(27)
  044bc34  addic 5, 30, 104
  044bc38  lfs 1, 68(31)
  044bc3c  fmr 2, 30
  044bc40  lfs 4, -3048(26)
  044bc44  lfs 6, -3052(25)
  044bc48  fmuls 3, 4, 3
  044bc4c  fmuls 4, 4, 31
  044bc50  fmuls 5, 6, 5
  044bc54  bl 0xff190
  044bc58  nop
  044bc5c  stfs 1, 68(31)
  044bc60  lfs 4, 36(27)
  044bc64  addic 5, 30, 100
  044bc68  lfs 5, 40(27)
  044bc6c  fmr 2, 30
  044bc70  lfs 1, 64(31)
  044bc74  lfs 6, -3048(26)
  044bc78  lfs 7, -3052(25)
  044bc7c  fmuls 3, 6, 31
  044bc80  fmuls 4, 6, 4
  044bc84  fmuls 5, 7, 5
  044bc88  bl 0xff190
  044bc8c  nop
  044bc90  stfs 1, 64(31)
  044bc94  lfs 1, 132(29)
  044bc98  lfs 2, 20(31)
  044bc9c  lfs 3, 128(29)
  044bca0  fsubs 1, 1, 2
  044bca4  lfs 2, 16(31)
  044bca8  fsubs 2, 3, 2
  044bcac  lfs 3, 136(29)
  044bcb0  lfs 4, 24(31)
  044bcb4  fsubs 3, 3, 4
  044bcb8  fmuls 1, 1, 1
  044bcbc  fmadds 1, 2, 2, 1
  044bcc0  lfs 2, 44(27)
  044bcc4  fmadds 1, 3, 3, 1
  044bcc8  fsqrts 1, 1
  044bccc  fcmpu 0, 1, 2
  044bcd0  cror 6, 1, 2
  044bcd4  bt 6, 0x44ccdc
  044bcd8  li 5, 4
  044bcdc  ori 3, 31, 0
  044bce0  li 4, 1
  044bce4  stb 5, 32(31)
  044bce8  bl 0x4d407c
  044bcec  nop
  044bcf0  b 0x44ccdc
  044bcf4  lis 3, 165
  044bcf8  li 5, 3
  044bcfc  addic 4, 3, 7136
  044bd00  lwz 3, 168(30)
  044bd04  slwi 3, 3, 2
  044bd08  addc 3, 30, 3
  044bd0c  clrldi 6, 3, 32
  044bd10  ori 3, 31, 0
  044bd14  lwz 6, 112(6)
  044bd18  slwi 6, 6, 2
  044bd1c  extsw 6, 6
  044bd20  lwzx 4, 4, 6
  044bd24  bl 0x44a708
  044bd28  ori 3, 31, 0
  044bd2c  bl 0x44b130
  044bd30  lbz 3, 32(31)
  044bd34  cmpwi 3, 4
  044bd38  bt 2, 0x44ccdc
  044bd3c  lwz 3, 168(30)
  044bd40  addic 3, 3, 1
  044bd44  stw 3, 168(30)
  044bd48  b 0x44ccdc
  044bd4c  ori 3, 31, 0
  044bd50  bl 0x44b130
  044bd54  lwz 3, 4(30)
  044bd58  lis 4, 151
  044bd5c  addic 4, 4, -13812
  044bd60  extsw 3, 3
  044bd64  lbzx 3, 4, 3
  044bd68  cmpwi 3, 0
  044bd6c  bt 2, 0x44bd80
  044bd70  ori 3, 31, 0
  044bd74  bl 0xefb38
  044bd78  nop
  044bd7c  b 0x44cda4
  044bd80  lis 3, 69
  044bd84  lfs 1, 92(30)
  044bd88  addi 29, 3, -19072
  044bd8c  lis 3, 114
  044bd90  lfs 2, 48(29)
  044bd94  lfs 3, -3052(3)
  044bd98  fmuls 2, 3, 2
  044bd9c  bl 0x502578
  044bda0  nop
  044bda4  lfs 2, 52(29)
  044bda8  lfs 3, 56(29)
  044bdac  fadds 2, 1, 2
  044bdb0  lfs 4, 60(29)
  044bdb4  lfs 8, 64(29)
  044bdb8  fsubs 5, 3, 2
  044bdbc  fsubs 6, 4, 2
  044bdc0  lis 3, 16448
  044bdc4  fsub 7, 2, 5
  044bdc8  fsel 2, 7, 5, 2
  044bdcc  lfs 5, 68(29)
  044bdd0  fsub 7, 6, 2
  044bdd4  fsel 2, 7, 6, 2
  044bdd8  lfs 6, 72(29)
  044bddc  lfs 7, 76(29)
  044bde0  stfs 1, 92(30)
  044bde4  fmuls 9, 2, 2
  044bde8  fmuls 1, 9, 2
  044bdec  fmuls 10, 9, 1
  044bdf0  fmadds 1, 1, 8, 2
  044bdf4  fmuls 2, 9, 10
  044bdf8  fmadds 1, 10, 5, 1
  044bdfc  fmuls 9, 9, 2
  044be00  fmadds 1, 2, 6, 1
  044be04  fmadds 1, 9, 7, 1
  044be08  stfs 1, 128(1)
  044be0c  lfs 1, 92(30)
  044be10  fsubs 2, 3, 1
  044be14  fsubs 3, 4, 1
  044be18  stw 3, 136(1)
  044be1c  fsub 4, 1, 2
  044be20  fsel 1, 4, 2, 1
  044be24  fsub 2, 3, 1
  044be28  fsel 1, 2, 3, 1
  044be2c  fmuls 2, 1, 1
  044be30  fmuls 3, 2, 1
  044be34  fmuls 4, 2, 3
  044be38  fmadds 1, 3, 8, 1
  044be3c  fmuls 3, 2, 4
  044be40  fmadds 1, 4, 5, 1
  044be44  fmuls 2, 2, 3
  044be48  fmadds 1, 3, 6, 1
  044be4c  fmadds 1, 2, 7, 1
  044be50  stfs 1, 132(1)
  044be54  lfs 1, 92(30)
  044be58  lfs 2, 40(29)
  044be5c  bl 0x502578
  044be60  nop
  044be64  lwz 3, 84(30)
  044be68  stfs 1, 72(31)
  044be6c  cmpwi 3, -1
  044be70  bt 2, 0x44ccdc
  044be74  lis 4, 164
  044be78  slwi 3, 3, 8
  044be7c  lwz 4, -28512(4)
  044be80  addc 3, 4, 3
  044be84  clrldi 3, 3, 32
  044be88  lhz 4, 166(3)
  044be8c  cmpwi 4, 822
  044be90  bf 2, 0x44ccdc
  044be94  lbz 3, 188(3)
  044be98  cmpwi 3, 6
  044be9c  bf 2, 0x44ccdc
  044bea0  lwz 3, 88(30)
  044bea4  cmpwi 3, -1
  044bea8  bt 2, 0x44ccdc
  044beac  li 4, 6
  044beb0  lis 3, 165
  044beb4  li 5, -1
  044beb8  addic 3, 3, 7136
  044bebc  stb 4, 32(31)
  044bec0  lwz 4, 88(30)
  044bec4  stw 5, 80(30)
  044bec8  slwi 4, 4, 2
  044becc  extsw 4, 4
  044bed0  lwzx 4, 3, 4
  044bed4  lfs 1, 16(4)
  044bed8  stfs 1, 16(31)
  044bedc  lfs 1, 20(4)
  044bee0  stfs 1, 20(31)
  044bee4  lfs 1, 24(4)
  044bee8  stfs 1, 24(31)
  044beec  lfs 1, 28(4)
  044bef0  stfs 1, 28(31)
  044bef4  lwz 4, 88(30)
  044bef8  slwi 4, 4, 2
  044befc  extsw 4, 4
  044bf00  lwzx 4, 3, 4
  044bf04  lfs 1, 32(4)
  044bf08  lfs 2, 16(4)
  044bf0c  lfs 3, 36(4)
  044bf10  lfs 4, 20(4)
  044bf14  fsubs 1, 1, 2
  044bf18  fsubs 2, 3, 4
  044bf1c  lis 4, 115
  044bf20  addic 4, 4, 22784
  044bf24  fabs 3, 1
  044bf28  fabs 4, 2
  044bf2c  stfs 1, 240(1)
  044bf30  stfs 2, 244(1)
  044bf34  fsubs 1, 3, 4
  044bf38  stfs 1, 248(1)
  044bf3c  lwz 5, 240(1)
  044bf40  lfs 1, 240(1)
  044bf44  lwz 6, 244(1)
  044bf48  lfs 2, 244(1)
  044bf4c  fabs 1, 1
  044bf50  lwz 7, 248(1)
  044bf54  rlwinm 6, 6, 3, 29, 29
  044bf58  lfs 5, 248(1)
  044bf5c  fabs 2, 2
  044bf60  rlwimi 6, 7, 2, 30, 30
  044bf64  fsub 6, 5, 30
  044bf68  fsub 5, 5, 30
  044bf6c  rlwimi 6, 5, 4, 28, 28
  044bf70  ori 5, 4, 0
  044bf74  rlwimi 5, 6, 2, 26, 28
  044bf78  slwi 6, 6, 2
  044bf7c  clrldi 5, 5, 32
  044bf80  fsel 4, 6, 1, 4
  044bf84  lfsx 1, 4, 6
  044bf88  fsel 3, 5, 2, 3
  044bf8c  lfs 2, 4(5)
  044bf90  fcmpu 0, 4, 30
  044bf94  bt 1, 0x44bf9c
  044bf98  b 0x44c0bc
  044bf9c  fsubs 5, 3, 4
  044bfa0  fadds 3, 3, 4
  044bfa4  addic 4, 1, 16
  044bfa8  li 8, 2
  044bfac  addic 6, 4, 328
  044bfb0  addic 5, 4, 312
  044bfb4  mtctr 8
  044bfb8  fdivs 3, 5, 3
  044bfbc  fmuls 4, 3, 3
  044bfc0  stfs 3, 340(1)
  044bfc4  stfs 3, 332(1)
  044bfc8  stfs 3, 336(1)
  044bfcc  stfs 3, 328(1)
  044bfd0  lfs 6, 340(1)
  044bfd4  lfs 7, 332(1)
  044bfd8  lfs 8, 336(1)
  044bfdc  fmuls 5, 4, 4
  044bfe0  fmuls 7, 7, 4
  044bfe4  fmuls 6, 6, 5
  044bfe8  fmuls 3, 5, 5
  044bfec  fmuls 5, 8, 5
  044bff0  stfs 7, 332(1)
  044bff4  fmuls 4, 6, 4
  044bff8  stfs 5, 336(1)
  044bffc  stfs 4, 340(1)
  044c000  lfs 4, 312(4)
  044c004  fmuls 4, 4, 3
  044c008  stfs 4, 328(4)
  044c00c  lfs 4, 4(5)
  044c010  addic 5, 5, 8
  044c014  fmuls 4, 4, 3
  044c018  addic 4, 4, 8
  044c01c  stfs 4, 4(6)
  044c020  addic 6, 6, 8
  044c024  bdnz 0x44c000
  044c028  li 6, 4
  044c02c  ori 4, 1, 0
  044c030  mtctr 6
  044c034  lis 5, 115
  044c038  addic 6, 4, 328
  044c03c  addic 5, 5, 22752
  044c040  ori 7, 6, 0
  044c044  lfs 3, 328(4)
  044c048  lfs 4, 0(5)
  044c04c  fmuls 3, 3, 4
  044c050  lfs 4, 4(5)
  044c054  addic 5, 5, 8
  044c058  stfs 3, 328(4)
  044c05c  lfs 3, 4(6)
  044c060  addic 4, 4, 8
  044c064  fmuls 3, 3, 4
  044c068  stfs 3, 4(6)
  044c06c  addic 6, 6, 8
  044c070  bdnz 0x44c044
  044c074  ori 4, 1, 0
  044c078  mtctr 8
  044c07c  lfs 3, 328(4)
  044c080  lfs 4, 4(7)
  044c084  fadds 3, 30, 3
  044c088  lfs 5, 8(7)
  044c08c  addic 4, 4, 16
  044c090  lfs 30, 12(7)
  044c094  addic 7, 7, 16
  044c098  fadds 3, 3, 4
  044c09c  fadds 3, 3, 5
  044c0a0  fadds 30, 3, 30
  044c0a4  bdnz 0x44c07c
  044c0a8  lis 4, 69
  044c0ac  addi 4, 4, -19072
  044c0b0  lfs 3, 32(4)
  044c0b4  fadds 30, 30, 3
  044c0b8  fmadds 30, 30, 1, 2
  044c0bc  lwz 4, 88(30)
  044c0c0  stfs 30, 72(31)
  044c0c4  slwi 4, 4, 2
  044c0c8  extsw 4, 4
  044c0cc  lwzx 3, 3, 4
  044c0d0  lwz 4, 0(3)
  044c0d4  addic 4, 4, -2
  044c0d8  cmpwi 4, 0
  044c0dc  bf 1, 0x44ccdc
  044c0e0  ori 5, 3, 0
  044c0e4  ori 4, 28, 0
  044c0e8  lfs 1, 20(5)
  044c0ec  lfs 2, 36(5)
  044c0f0  lfs 3, 16(5)
  044c0f4  fsubs 1, 1, 2
  044c0f8  lfs 2, 32(5)
  044c0fc  fsubs 2, 3, 2
  044c100  lfs 3, 24(5)
  044c104  lfs 4, 40(5)
  044c108  fsubs 3, 3, 4
  044c10c  fmuls 1, 1, 1
  044c110  addic 4, 4, 1
  044c114  fmadds 1, 2, 2, 1
  044c118  fmadds 1, 3, 3, 1
  044c11c  fsqrts 1, 1
  044c120  stfs 1, 28(5)
  044c124  lwz 6, 0(3)
  044c128  addic 5, 5, 16
  044c12c  addic 6, 6, -2
  044c130  cmpw 4, 6
  044c134  bt 0, 0x44c0e8
  044c138  b 0x44ccdc
  044c13c  lwz 4, 88(30)
  044c140  lis 3, 165
  044c144  slwi 4, 4, 2
  044c148  addic 29, 3, 7136
  044c14c  extsw 4, 4
  044c150  ori 3, 31, 0
  044c154  lwzx 29, 29, 4
  044c158  bl 0x44b130
  044c15c  lis 3, 69
  044c160  fmr 3, 30
  044c164  addic 4, 31, 16
  044c168  addi 27, 3, -19072
  044c16c  ori 3, 29, 0
  044c170  addic 5, 1, 144
  044c174  addic 6, 1, 212
  044c178  addic 7, 1, 208
  044c17c  lfs 1, 80(27)
  044c180  li 9, 0
  044c184  lfs 2, 84(27)
  044c188  bl 0x10d7a0
  044c18c  nop
  044c190  lwz 3, 212(1)
  044c194  extsw 3, 3
  044c198  bl 0x502730
  044c19c  nop
  044c1a0  lwz 3, 0(29)
  044c1a4  lfs 2, 20(31)
  044c1a8  lis 4, 114
  044c1ac  slwi 3, 3, 4
  044c1b0  lfs 3, 16(31)
  044c1b4  lfs 31, 88(27)
  044c1b8  addc 3, 29, 3
  044c1bc  clrldi 3, 3, 32
  044c1c0  lfs 5, 4(3)
  044c1c4  lfs 6, 0(3)
  044c1c8  fsubs 5, 2, 5
  044c1cc  fsubs 3, 3, 6
  044c1d0  lfs 29, 92(27)
  044c1d4  lfs 4, 24(31)
  044c1d8  lfs 6, 8(3)
  044c1dc  lfs 2, -3048(4)
  044c1e0  fsubs 4, 4, 6
  044c1e4  fmuls 8, 2, 29
  044c1e8  fmr 6, 1
  044c1ec  lfs 1, 96(30)
  044c1f0  fmuls 5, 5, 5
  044c1f4  fmuls 7, 1, 1
  044c1f8  fmr 1, 6
  044c1fc  fmadds 3, 3, 3, 5
  044c200  fmuls 5, 8, 31
  044c204  fmadds 3, 4, 4, 3
  044c208  fdivs 4, 7, 5
  044c20c  lfs 5, 28(29)
  044c210  lfs 7, 208(1)
  044c214  fsqrts 3, 3
  044c218  fmadds 1, 1, 5, 7
  044c21c  fadds 31, 1, 31
  044c220  lfs 1, 96(30)
  044c224  fcmpu 0, 3, 4
  044c228  bt 1, 0x44c248
  044c22c  fnmsubs 1, 2, 29, 1
  044c230  fcmpu 0, 1, 30
  044c234  stfs 1, 96(30)
  044c238  cror 6, 1, 2
  044c23c  bt 6, 0x44c26c
  044c240  stw 28, 96(30)
  044c244  b 0x44c26c
  044c248  fmadds 2, 2, 29, 1
  044c24c  lis 3, 114
  044c250  stfs 2, 96(30)
  044c254  lfs 1, -3052(3)
  044c258  fmuls 1, 1, 29
  044c25c  fcmpu 0, 2, 1
  044c260  cror 6, 0, 2
  044c264  bt 6, 0x44c26c
  044c268  stfs 1, 96(30)
  044c26c  lfs 1, 28(29)
  044c270  fdivs 1, 31, 1
  044c274  bl 0x502758
  044c278  nop
  044c27c  stw 3, 212(1)
  044c280  bl 0x502730
  044c284  nop
  044c288  lfs 2, 28(29)
  044c28c  fnmsubs 1, 1, 2, 31
  044c290  lfs 31, 72(31)
  044c294  lwz 3, 212(1)
  044c298  fdivs 1, 1, 2
  044c29c  stfs 1, 208(1)
  044c2a0  lwz 4, 0(29)
  044c2a4  addic 5, 4, -1
  044c2a8  cmpw 3, 5
  044c2ac  bt 0, 0x44c31c
  044c2b0  lis 3, 114
  044c2b4  lfs 1, -3048(3)
  044c2b8  lfs 2, 96(30)
  044c2bc  fmuls 1, 1, 29
  044c2c0  fcmpu 0, 2, 1
  044c2c4  bt 1, 0x44c300
  044c2c8  slwi 3, 4, 4
  044c2cc  li 4, 7
  044c2d0  addc 3, 29, 3
  044c2d4  clrldi 3, 3, 32
  044c2d8  lfs 1, 0(3)
  044c2dc  stfs 1, 16(31)
  044c2e0  lfs 1, 4(3)
  044c2e4  stfs 1, 20(31)
  044c2e8  lfs 1, 8(3)
  044c2ec  stfs 1, 24(31)
  044c2f0  lfs 1, 12(3)
  044c2f4  stb 4, 32(31)
  044c2f8  stfs 1, 28(31)
  044c2fc  b 0x44ccdc
  044c300  lis 5, 69
  044c304  addic 3, 4, -2
  044c308  addi 5, 5, -19072
  044c30c  lis 4, 16256
  044c310  stw 3, 212(1)
  044c314  lfs 1, 4(5)
  044c318  stw 4, 208(1)
  044c31c  slwi 3, 3, 4
  044c320  addc 3, 29, 3
  044c324  clrldi 3, 3, 32
  044c328  lfs 2, 32(3)
  044c32c  lfs 3, 16(3)
  044c330  fsubs 2, 2, 3
  044c334  lis 29, 115
  044c338  addic 29, 29, 22784
  044c33c  stfs 2, 144(1)
  044c340  lfs 3, 36(3)
  044c344  lfs 4, 20(3)
  044c348  fmuls 2, 2, 1
  044c34c  fsubs 3, 3, 4
  044c350  stfs 3, 148(1)
  044c354  lfs 4, 40(3)
  044c358  fmuls 3, 3, 1
  044c35c  lfs 5, 24(3)
  044c360  fsubs 4, 4, 5
  044c364  fmuls 1, 4, 1
  044c368  stfs 4, 152(1)
  044c36c  lfs 4, 44(3)
  044c370  stfs 2, 144(1)
  044c374  stfs 4, 156(1)
  044c378  stfs 3, 148(1)
  044c37c  stfs 1, 152(1)
  044c380  lfs 4, 16(3)
  044c384  fadds 2, 2, 4
  044c388  stfs 2, 144(1)
  044c38c  lfs 2, 20(3)
  044c390  fadds 2, 3, 2
  044c394  stfs 2, 148(1)
  044c398  lfs 2, 24(3)
  044c39c  fadds 1, 1, 2
  044c3a0  stfs 1, 152(1)
  044c3a4  lfs 1, 32(3)
  044c3a8  lfs 2, 16(3)
  044c3ac  lfs 3, 36(3)
  044c3b0  lfs 4, 20(3)
  044c3b4  fsubs 1, 1, 2
  044c3b8  fsubs 2, 3, 4
  044c3bc  fabs 3, 1
  044c3c0  fabs 4, 2
  044c3c4  stfs 1, 228(1)
  044c3c8  stfs 2, 232(1)
  044c3cc  fsubs 1, 3, 4
  044c3d0  stfs 1, 236(1)
  044c3d4  lwz 3, 228(1)
  044c3d8  lfs 1, 228(1)
  044c3dc  lwz 4, 232(1)
  044c3e0  lfs 2, 232(1)
  044c3e4  lwz 5, 236(1)
  044c3e8  rlwinm 4, 4, 3, 29, 29
  044c3ec  fabs 5, 2
  044c3f0  lfs 2, 236(1)
  044c3f4  fabs 1, 1
  044c3f8  rlwimi 4, 5, 2, 30, 30
  044c3fc  fsub 6, 2, 30
  044c400  fsub 7, 2, 30
  044c404  rlwimi 4, 3, 4, 28, 28
  044c408  ori 3, 29, 0
  044c40c  rlwimi 3, 4, 2, 26, 28
  044c410  slwi 4, 4, 2
  044c414  clrldi 3, 3, 32
  044c418  fsel 4, 6, 1, 4
  044c41c  lfsx 1, 29, 4
  044c420  fsel 3, 7, 5, 3
  044c424  lfs 2, 4(3)
  044c428  fcmpu 0, 4, 30
  044c42c  bt 1, 0x44c438
  044c430  fmr 1, 30
  044c434  b 0x44c55c
  044c438  fsubs 5, 3, 4
  044c43c  fadds 3, 3, 4
  044c440  addic 3, 1, 16
  044c444  li 7, 2
  044c448  addic 5, 3, 296
  044c44c  addic 4, 3, 280
  044c450  mtctr 7
  044c454  fdivs 3, 5, 3
  044c458  fmuls 4, 3, 3
  044c45c  stfs 3, 308(1)
  044c460  stfs 3, 300(1)
  044c464  stfs 3, 304(1)
  044c468  stfs 3, 296(1)
  044c46c  lfs 6, 308(1)
  044c470  lfs 7, 300(1)
  044c474  lfs 8, 304(1)
  044c478  fmuls 5, 4, 4
  044c47c  fmuls 7, 7, 4
  044c480  fmuls 6, 6, 5
  044c484  fmuls 3, 5, 5
  044c488  fmuls 5, 8, 5
  044c48c  stfs 7, 300(1)
  044c490  fmuls 4, 6, 4
  044c494  stfs 5, 304(1)
  044c498  stfs 4, 308(1)
  044c49c  lfs 4, 280(3)
  044c4a0  fmuls 4, 4, 3
  044c4a4  stfs 4, 296(3)
  044c4a8  lfs 4, 4(4)
  044c4ac  addic 4, 4, 8
  044c4b0  fmuls 4, 4, 3
  044c4b4  addic 3, 3, 8
  044c4b8  stfs 4, 4(5)
  044c4bc  addic 5, 5, 8
  044c4c0  bdnz 0x44c49c
  044c4c4  li 5, 4
  044c4c8  ori 3, 1, 0
  044c4cc  mtctr 5
  044c4d0  lis 4, 115
  044c4d4  addic 5, 3, 296
  044c4d8  addic 4, 4, 22752
  044c4dc  ori 6, 5, 0
  044c4e0  lfs 3, 296(3)
  044c4e4  lfs 4, 0(4)
  044c4e8  fmuls 3, 3, 4
  044c4ec  lfs 4, 4(4)
  044c4f0  addic 4, 4, 8
  044c4f4  stfs 3, 296(3)
  044c4f8  lfs 3, 4(5)
  044c4fc  addic 3, 3, 8
  044c500  fmuls 3, 3, 4
  044c504  stfs 3, 4(5)
  044c508  addic 5, 5, 8
  044c50c  bdnz 0x44c4e0
  044c510  ori 3, 1, 0
  044c514  fmr 3, 30
  044c518  mtctr 7
  044c51c  lfs 4, 296(3)
  044c520  fadds 3, 3, 4
  044c524  lfs 4, 4(6)
  044c528  addic 3, 3, 16
  044c52c  lfs 5, 8(6)
  044c530  lfs 6, 12(6)
  044c534  addic 6, 6, 16
  044c538  fadds 3, 3, 4
  044c53c  fadds 3, 3, 5
  044c540  fadds 3, 3, 6
  044c544  bdnz 0x44c51c
  044c548  lis 3, 69
  044c54c  addi 3, 3, -19072
  044c550  lfs 4, 32(3)
  044c554  fadds 3, 3, 4
  044c558  fmadds 1, 3, 1, 2
  044c55c  lis 3, 69
  044c560  fmr 2, 1
  044c564  addic 5, 30, 108
  044c568  fmr 1, 31
  044c56c  addi 3, 3, -19072
  044c570  lfs 3, 12(3)
  044c574  lfs 4, 16(3)
  044c578  lfs 5, 20(3)
  044c57c  bl 0xff190
  044c580  nop
  044c584  lfs 2, 148(1)
  044c588  lfs 3, 20(31)
  044c58c  lfs 4, 144(1)
  044c590  fsubs 2, 2, 3
  044c594  lfs 5, 16(31)
  044c598  lfs 6, 152(1)
  044c59c  fsubs 4, 4, 5
  044c5a0  lfs 7, 24(31)
  044c5a4  fsubs 6, 6, 7
  044c5a8  stfs 1, 72(31)
  044c5ac  lfs 9, 96(30)
  044c5b0  fmuls 8, 2, 2
  044c5b4  fmadds 8, 4, 4, 8
  044c5b8  fmadds 8, 6, 6, 8
  044c5bc  fsqrts 8, 8
  044c5c0  fsub 10, 9, 8
  044c5c4  fsub 11, 30, 8
  044c5c8  fsub 12, 8, 30
  044c5cc  fsub 13, 8, 30
  044c5d0  fsub 0, 30, 8
  044c5d4  fsel 9, 10, 8, 9
  044c5d8  fsub 10, 30, 8
  044c5dc  fdivs 9, 9, 8
  044c5e0  fsub 8, 8, 30
  044c5e4  fmuls 2, 2, 9
  044c5e8  fmuls 4, 4, 9
  044c5ec  fmuls 6, 6, 9
  044c5f0  fsel 10, 10, 30, 2
  044c5f4  fsel 11, 11, 30, 4
  044c5f8  fsel 9, 0, 30, 6
  044c5fc  fsel 2, 12, 10, 2
  044c600  fsel 4, 13, 11, 4
  044c604  fsel 6, 8, 9, 6
  044c608  fabs 10, 2
  044c60c  fabs 11, 4
  044c610  stfs 4, 216(1)
  044c614  fadds 4, 5, 4
  044c618  stfs 2, 220(1)
  044c61c  fadds 2, 3, 2
  044c620  fadds 3, 7, 6
  044c624  fsubs 8, 11, 10
  044c628  stfs 8, 224(1)
  044c62c  lwz 3, 216(1)
  044c630  lfs 5, 216(1)
  044c634  stfs 4, 16(31)
  044c638  lwz 4, 220(1)
  044c63c  stfs 2, 20(31)
  044c640  fabs 5, 5
  044c644  stfs 3, 24(31)
  044c648  rlwinm 4, 4, 3, 29, 29
  044c64c  lfs 2, 220(1)
  044c650  lwz 5, 224(1)
  044c654  fabs 4, 2
  044c658  lfs 2, 224(1)
  044c65c  rlwimi 4, 5, 2, 30, 30
  044c660  fsub 3, 2, 30
  044c664  fsub 6, 2, 30
  044c668  rlwimi 4, 3, 4, 28, 28
  044c66c  ori 3, 29, 0
  044c670  rlwimi 3, 4, 2, 26, 28
  044c674  slwi 4, 4, 2
  044c678  clrldi 3, 3, 32
  044c67c  fsel 5, 3, 5, 10
  044c680  lfsx 2, 29, 4
  044c684  fsel 4, 6, 4, 11
  044c688  lfs 3, 4(3)
  044c68c  fcmpu 0, 5, 30
  044c690  bt 1, 0x44c698
  044c694  b 0x44c7b8
  044c698  fsubs 6, 4, 5
  044c69c  fadds 4, 4, 5
  044c6a0  addic 3, 1, 16
  044c6a4  li 6, 2
  044c6a8  addic 5, 3, 264
  044c6ac  addic 4, 3, 248
  044c6b0  mtctr 6
  044c6b4  fdivs 4, 6, 4
  044c6b8  fmuls 5, 4, 4
  044c6bc  stfs 4, 276(1)
  044c6c0  stfs 4, 268(1)
  044c6c4  stfs 4, 272(1)
  044c6c8  stfs 4, 264(1)
  044c6cc  lfs 7, 276(1)
  044c6d0  lfs 8, 268(1)
  044c6d4  lfs 9, 272(1)
  044c6d8  fmuls 6, 5, 5
  044c6dc  fmuls 8, 8, 5
  044c6e0  fmuls 7, 7, 6
  044c6e4  fmuls 4, 6, 6
  044c6e8  fmuls 6, 9, 6
  044c6ec  stfs 8, 268(1)
  044c6f0  fmuls 5, 7, 5
  044c6f4  stfs 6, 272(1)
  044c6f8  stfs 5, 276(1)
  044c6fc  lfs 5, 248(3)
  044c700  fmuls 5, 5, 4
  044c704  stfs 5, 264(3)
  044c708  lfs 5, 4(4)
  044c70c  addic 4, 4, 8
  044c710  fmuls 5, 5, 4
  044c714  addic 3, 3, 8
  044c718  stfs 5, 4(5)
  044c71c  addic 5, 5, 8
  044c720  bdnz 0x44c6fc
  044c724  li 5, 4
  044c728  ori 3, 1, 0
  044c72c  mtctr 5
  044c730  lis 4, 115
  044c734  addic 5, 3, 264
  044c738  addic 4, 4, 22752
  044c73c  ori 7, 5, 0
  044c740  lfs 4, 264(3)
  044c744  lfs 5, 0(4)
  044c748  fmuls 4, 4, 5
  044c74c  lfs 5, 4(4)
  044c750  addic 4, 4, 8
  044c754  stfs 4, 264(3)
  044c758  lfs 4, 4(5)
  044c75c  addic 3, 3, 8
  044c760  fmuls 4, 4, 5
  044c764  stfs 4, 4(5)
  044c768  addic 5, 5, 8
  044c76c  bdnz 0x44c740
  044c770  ori 3, 1, 0
  044c774  mtctr 6
  044c778  lfs 4, 264(3)
  044c77c  lfs 5, 4(7)
  044c780  fadds 4, 30, 4
  044c784  lfs 6, 8(7)
  044c788  addic 3, 3, 16
  044c78c  lfs 30, 12(7)
  044c790  addic 7, 7, 16
  044c794  fadds 4, 4, 5
  044c798  fadds 4, 4, 6
  044c79c  fadds 30, 4, 30
  044c7a0  bdnz 0x44c778
  044c7a4  lis 3, 69
  044c7a8  addi 3, 3, -19072
  044c7ac  lfs 4, 32(3)
  044c7b0  fadds 30, 30, 4
  044c7b4  fmadds 30, 30, 2, 3
  044c7b8  fmr 2, 1
  044c7bc  fmr 1, 30
  044c7c0  bl 0x5025e0
  044c7c4  nop
  044c7c8  lis 3, 69
  044c7cc  addi 29, 3, -19072
  044c7d0  lis 27, 114
  044c7d4  lfs 2, 56(29)
  044c7d8  lfs 3, 60(29)
  044c7dc  fsubs 5, 2, 1
  044c7e0  lfs 4, 52(29)
  044c7e4  fsubs 6, 3, 1
  044c7e8  fadds 4, 1, 4
  044c7ec  lfs 8, 64(29)
  044c7f0  lis 26, 114
  044c7f4  addic 5, 30, 104
  044c7f8  fsub 7, 1, 5
  044c7fc  fsubs 2, 2, 4
  044c800  fsubs 3, 3, 4
  044c804  fsel 1, 7, 5, 1
  044c808  fsub 7, 4, 2
  044c80c  lfs 5, 68(29)
  044c810  lfs 9, 72(29)
  044c814  lfs 11, 96(30)
  044c818  fsub 10, 6, 1
  044c81c  fsel 2, 7, 2, 4
  044c820  lfs 4, 76(29)
  044c824  fsel 1, 10, 6, 1
  044c828  fsub 6, 3, 2
  044c82c  lfs 10, 100(29)
  044c830  fmuls 7, 1, 1
  044c834  fsel 2, 6, 3, 2
  044c838  lfs 6, -3052(27)
  044c83c  fmuls 13, 6, 29
  044c840  fmuls 3, 7, 1
  044c844  fmuls 12, 2, 2
  044c848  fmuls 0, 7, 3
  044c84c  fmadds 1, 3, 8, 1
  044c850  fmuls 3, 11, 10
  044c854  fmuls 10, 12, 2
  044c858  fmuls 31, 7, 0
  044c85c  fmadds 1, 0, 5, 1
  044c860  fmuls 0, 12, 10
  044c864  fmadds 2, 10, 8, 2
  044c868  fmuls 7, 7, 31
  044c86c  fmadds 1, 31, 9, 1
  044c870  fmuls 10, 12, 0
  044c874  fmadds 2, 0, 5, 2
  044c878  lfs 5, 96(29)
  044c87c  lfs 8, 68(31)
  044c880  fmadds 1, 7, 4, 1
  044c884  fmuls 7, 12, 10
  044c888  fmadds 2, 10, 9, 2
  044c88c  lfs 9, -3048(26)
  044c890  fmuls 1, 3, 1
  044c894  fmuls 3, 11, 5
  044c898  fmadds 2, 7, 4, 2
  044c89c  fdivs 31, 1, 13
  044c8a0  fmuls 2, 3, 2
  044c8a4  fmr 1, 8
  044c8a8  lfs 3, 24(29)
  044c8ac  lfs 30, 28(29)
  044c8b0  lfs 5, 32(29)
  044c8b4  fmuls 3, 9, 3
  044c8b8  fmuls 4, 9, 30
  044c8bc  fmuls 5, 6, 5
  044c8c0  fdivs 2, 2, 13
  044c8c4  bl 0xff190
  044c8c8  nop
  044c8cc  stfs 1, 68(31)
  044c8d0  addic 5, 30, 100
  044c8d4  lfs 4, 36(29)
  044c8d8  lfs 5, 40(29)
  044c8dc  lfs 1, 64(31)
  044c8e0  lfs 6, -3048(26)
  044c8e4  lfs 7, -3052(27)
  044c8e8  fmuls 3, 6, 30
  044c8ec  fmuls 4, 6, 4
  044c8f0  fmuls 5, 7, 5
  044c8f4  fmr 2, 31
  044c8f8  bl 0xff190
  044c8fc  nop
  044c900  stfs 1, 64(31)
  044c904  b 0x44ccdc
  044c908  lwz 4, 88(30)
  044c90c  lis 3, 165
  044c910  slwi 4, 4, 2
  044c914  addic 29, 3, 7136
  044c918  extsw 4, 4
  044c91c  ori 3, 31, 0
  044c920  lwzx 29, 29, 4
  044c924  bl 0x44b130
  044c928  lis 3, 114
  044c92c  lfs 1, 164(30)
  044c930  lis 4, 69
  044c934  addi 4, 4, -19072
  044c938  lfs 31, -3052(3)
  044c93c  fadds 2, 1, 31
  044c940  lfs 1, 92(30)
  044c944  stfs 2, 164(30)
  044c948  lfs 3, 4(4)
  044c94c  fcmpu 0, 2, 3
  044c950  cror 6, 0, 2
  044c954  bt 6, 0x44c960
  044c958  lis 3, 16256
  044c95c  stw 3, 164(30)
  044c960  lis 3, 69
  044c964  addi 27, 3, -19072
  044c968  lfs 2, 48(27)
  044c96c  fmuls 2, 31, 2
  044c970  bl 0x502578
  044c974  nop
  044c978  stfs 1, 92(30)
  044c97c  lfs 2, 52(27)
  044c980  lfs 3, 56(27)
  044c984  fadds 1, 1, 2
  044c988  lfs 4, 60(27)
  044c98c  lfs 7, 64(27)
  044c990  fsubs 2, 3, 1
  044c994  fsubs 5, 4, 1
  044c998  fsub 6, 1, 2
  044c99c  fsel 1, 6, 2, 1
  044c9a0  lfs 2, 68(27)
  044c9a4  fsub 6, 5, 1
  044c9a8  fsel 1, 6, 5, 1
  044c9ac  lfs 5, 72(27)
  044c9b0  lfs 6, 76(27)
  044c9b4  lfs 9, 164(30)
  044c9b8  fmuls 8, 1, 1
  044c9bc  fmuls 10, 8, 1
  044c9c0  fmuls 11, 8, 10
  044c9c4  fmadds 1, 10, 7, 1
  044c9c8  fmuls 10, 8, 11
  044c9cc  fmadds 1, 11, 2, 1
  044c9d0  fmuls 8, 8, 10
  044c9d4  fmadds 1, 10, 5, 1
  044c9d8  fmadds 1, 8, 6, 1
  044c9dc  fmuls 1, 1, 9
  044c9e0  stfs 1, 128(1)
  044c9e4  lfs 1, 92(30)
  044c9e8  fsubs 3, 3, 1
  044c9ec  fsubs 4, 4, 1
  044c9f0  fsub 8, 1, 3
  044c9f4  fsel 1, 8, 3, 1
  044c9f8  fsub 3, 4, 1
  044c9fc  fsel 1, 3, 4, 1
  044ca00  lfs 3, 164(30)
  044ca04  lfs 29, 72(31)
  044ca08  stw 28, 136(1)
  044ca0c  fmuls 4, 1, 1
  044ca10  fmuls 8, 4, 1
  044ca14  fmuls 9, 4, 8
  044ca18  fmadds 1, 8, 7, 1
  044ca1c  fmuls 7, 4, 9
  044ca20  fmadds 1, 9, 2, 1
  044ca24  fmuls 2, 4, 7
  044ca28  fmadds 1, 7, 5, 1
  044ca2c  fmadds 1, 2, 6, 1
  044ca30  fmuls 1, 1, 3
  044ca34  stfs 1, 132(1)
  044ca38  lfs 31, 40(27)
  044ca3c  lfs 1, 92(30)
  044ca40  fmr 2, 31
  044ca44  bl 0x502578
  044ca48  nop
  044ca4c  lis 3, 114
  044ca50  lfs 3, 104(27)
  044ca54  fmr 2, 1
  044ca58  lfs 5, 108(27)
  044ca5c  fmr 1, 29
  044ca60  addic 5, 30, 108
  044ca64  lfs 4, -3052(3)
  044ca68  fmuls 3, 4, 3
  044ca6c  fmuls 5, 4, 5
  044ca70  fmr 4, 3
  044ca74  bl 0xff190
  044ca78  nop
  044ca7c  stfs 1, 72(31)
  044ca80  lwz 4, 0(29)
  044ca84  addic 3, 1, 160
  044ca88  slwi 5, 4, 4
  044ca8c  addic 4, 1, 128
  044ca90  addc 5, 29, 5
  044ca94  clrldi 5, 5, 32
  044ca98  bl 0x5023f0
  044ca9c  nop
  044caa0  lfs 1, 160(1)
  044caa4  lis 3, 151
  044caa8  stfs 1, 16(31)
  044caac  lfs 1, 164(1)
  044cab0  stfs 1, 20(31)
  044cab4  lfs 1, 168(1)
  044cab8  stfs 1, 24(31)
  044cabc  lfs 1, 172(1)
  044cac0  stfs 1, 28(31)
  044cac4  lwz 4, 0(29)
  044cac8  slwi 4, 4, 4
  044cacc  addc 4, 29, 4
  044cad0  addic 29, 3, -25376
  044cad4  clrldi 3, 4, 32
  044cad8  lfs 1, 132(29)
  044cadc  lfs 2, 4(3)
  044cae0  lfs 3, 128(29)
  044cae4  fsubs 1, 1, 2
  044cae8  lfs 2, 0(3)
  044caec  fsubs 2, 3, 2
  044caf0  lfs 3, 136(29)
  044caf4  lfs 4, 8(3)
  044caf8  fsubs 3, 3, 4
  044cafc  fmuls 1, 1, 1
  044cb00  fmadds 1, 2, 2, 1
  044cb04  lfs 2, 88(27)
  044cb08  fmadds 1, 3, 3, 1
  044cb0c  fsqrts 3, 1
  044cb10  lfs 1, 68(31)
  044cb14  fcmpu 0, 3, 2
  044cb18  cror 6, 1, 2
  044cb1c  bt 6, 0x44cb34
  044cb20  lwz 3, 8872(29)
  044cb24  cmpwi 3, 0
  044cb28  bt 2, 0x44cb34
  044cb2c  li 3, 8
  044cb30  stb 3, 32(31)
  044cb34  lis 3, 69
  044cb38  lis 27, 114
  044cb3c  fmr 2, 30
  044cb40  addi 29, 3, -19072
  044cb44  lis 26, 114
  044cb48  addic 5, 30, 104
  044cb4c  lfs 4, 24(29)
  044cb50  lfs 29, 28(29)
  044cb54  lfs 6, 32(29)
  044cb58  lfs 5, -3048(27)
  044cb5c  lfs 7, -3052(26)
  044cb60  fmuls 3, 5, 4
  044cb64  fmuls 4, 5, 29
  044cb68  fmuls 5, 7, 6
  044cb6c  bl 0xff190
  044cb70  nop
  044cb74  stfs 1, 68(31)
  044cb78  lfs 4, 36(29)
  044cb7c  addic 5, 30, 100
  044cb80  lfs 1, 64(31)
  044cb84  fmr 2, 30
  044cb88  lfs 6, -3048(27)
  044cb8c  lfs 5, -3052(26)
  044cb90  fmuls 3, 6, 29
  044cb94  fmuls 5, 5, 31
  044cb98  fmuls 4, 6, 4
  044cb9c  bl 0xff190
  044cba0  nop
  044cba4  stfs 1, 64(31)
  044cba8  b 0x44ccdc
  044cbac  lhz 4, 52(31)
  044cbb0  lwz 3, 4(30)
  044cbb4  ori 4, 4, 65
  044cbb8  extsw 3, 3
  044cbbc  sth 4, 52(31)
  044cbc0  bl 0x112c20
  044cbc4  nop
  044cbc8  lbz 3, 176(31)
  044cbcc  bl 0xf1e50
  044cbd0  nop
  044cbd4  lwz 3, 8(30)
  044cbd8  cmpwi 3, -1
  044cbdc  bt 2, 0x44cc08
  044cbe0  lis 4, 165
  044cbe4  slwi 3, 3, 7
  044cbe8  lwz 4, 7128(4)
  044cbec  addc 3, 4, 3
  044cbf0  addic 4, 3, 48
  044cbf4  addic 5, 3, 112
  044cbf8  clrldi 3, 4, 32
  044cbfc  clrldi 4, 5, 32
  044cc00  bl 0x151e70
  044cc04  nop
  044cc08  li 3, 9
  044cc0c  stb 3, 32(31)
  044cc10  lbz 3, 12(30)
  044cc14  extsb 3, 3
  044cc18  cmpwi 3, -1
  044cc1c  bt 2, 0x44ccdc
  044cc20  li 4, 0
  044cc24  bl 0x167e60
  044cc28  nop
  044cc2c  b 0x44ccdc
  044cc30  lis 3, 161
  044cc34  lwz 3, 1800(3)
  044cc38  cmpwi 3, 2
  044cc3c  bt 2, 0x44ccdc
  044cc40  li 3, 10
  044cc44  stb 3, 32(31)
  044cc48  lbz 3, 13(30)
  044cc4c  extsb 3, 3
  044cc50  cmpwi 3, -1
  044cc54  bt 2, 0x44ccdc
  044cc58  bl 0x168dec
  044cc5c  nop
  044cc60  b 0x44ccdc
  044cc64  lis 3, 161
  044cc68  lwz 3, 1800(3)
  044cc6c  cmpwi 3, 2
  044cc70  bt 2, 0x44ccdc
  044cc74  lbz 3, 14(30)
  044cc78  extsb 3, 3
  044cc7c  cmpwi 3, -1
  044cc80  bt 2, 0x44cc90
  044cc84  li 4, 0
  044cc88  bl 0x167e60
  044cc8c  nop
  044cc90  li 3, 11
  044cc94  stb 3, 32(31)
  044cc98  b 0x44ccdc
  044cc9c  lis 3, 161
  044cca0  lwz 3, 1800(3)
  044cca4  cmpwi 3, 2
  044cca8  bt 2, 0x44cda4
  044ccac  li 3, 0
  044ccb0  li 4, -1
  044ccb4  bl 0xe8aa4
  044ccb8  nop
  044ccbc  lwz 3, 4(30)
  044ccc0  extsw 3, 3
  044ccc4  bl 0x112af0
  044ccc8  nop
  044cccc  ori 3, 31, 0
  044ccd0  bl 0xefb38
  044ccd4  nop
  044ccd8  b 0x44cda4
  044ccdc  lwz 3, 80(30)
  044cce0  cmpwi 3, -1
  044cce4  bt 2, 0x44cda4
  044cce8  lwz 3, 84(30)
  044ccec  cmpwi 3, -1
  044ccf0  bt 2, 0x44cda4
  044ccf4  lis 4, 164
  044ccf8  slwi 3, 3, 8
  044ccfc  lwz 4, -28512(4)
  044cd00  addc 3, 4, 3
  044cd04  clrldi 3, 3, 32
  044cd08  lhz 4, 166(3)
  044cd0c  cmpwi 4, 822
  044cd10  bf 2, 0x44cda4
  044cd14  lis 29, 165
  044cd18  ori 4, 3, 0
  044cd1c  lwz 3, 80(30)
  044cd20  addic 6, 1, 176
  044cd24  slwi 3, 3, 7
  044cd28  lwz 5, 7128(29)
  044cd2c  ori 8, 6, 0
  044cd30  stw 28, 176(1)
  044cd34  addc 3, 5, 3
  044cd38  stw 28, 180(1)
  044cd3c  addic 5, 3, 48
  044cd40  stw 28, 184(1)
  044cd44  ori 3, 31, 0
  044cd48  clrldi 5, 5, 32
  044cd4c  stw 28, 188(1)
  044cd50  ori 7, 5, 0
  044cd54  bl 0x1122e0
  044cd58  nop
  044cd5c  lwz 3, 80(30)
  044cd60  lwz 4, 7128(29)
  044cd64  slwi 5, 3, 7
  044cd68  addic 3, 1, 192
  044cd6c  addc 5, 4, 5
  044cd70  addic 4, 1, 128
  044cd74  addic 5, 5, 48
  044cd78  clrldi 5, 5, 32
  044cd7c  bl 0x5023f0
  044cd80  nop
  044cd84  lfs 1, 192(1)
  044cd88  stfs 1, 16(31)
  044cd8c  lfs 1, 196(1)
  044cd90  stfs 1, 20(31)
  044cd94  lfs 1, 200(1)
  044cd98  stfs 1, 24(31)
  044cd9c  lfs 1, 204(1)
  044cda0  stfs 1, 28(31)
  044cda4  ld 0, 496(1)
  044cda8  mtlr 0
  044cdac  lfd 29, 456(1)
  044cdb0  lfd 30, 464(1)
  044cdb4  lfd 31, 472(1)
  044cdb8  ld 25, 400(1)
  044cdbc  ld 26, 408(1)
  044cdc0  ld 27, 416(1)
  044cdc4  ld 28, 424(1)
  044cdc8  ld 29, 432(1)
  044cdcc  ld 30, 440(1)
  044cdd0  ld 31, 448(1)
  044cdd4  addi 1, 1, 480
  044cdd8  blr
