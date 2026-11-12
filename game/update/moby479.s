# game/update/moby479.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SpawnMoby_479_DroneDevice:   # 0x39a708, 0x4e4 bytes
  039a708  stdu 1, -224(1)
  039a70c  mflr 0
  039a710  std 0, 240(1)
  039a714  std 31, 216(1)
  039a718  ori 31, 3, 0
  039a71c  std 30, 208(1)
  039a720  li 3, 479
  039a724  std 29, 200(1)
  039a728  ori 30, 4, 0
  039a72c  bl 0xefa28
  039a730  nop
  039a734  ori 29, 3, 0
  039a738  cmpwi 29, 0
  039a73c  bt 2, 0x39abcc
  039a740  li 3, 255
  039a744  li 4, 1
  039a748  li 5, 2
  039a74c  li 6, 0
  039a750  stb 3, 48(29)
  039a754  stb 4, 49(29)
  039a758  ori 7, 31, 0
  039a75c  stb 5, 32(29)
  039a760  lis 4, 151
  039a764  stb 6, 188(29)
  039a768  lfs 1, 0(30)
  039a76c  lwz 31, 120(29)
  039a770  stfs 1, 16(29)
  039a774  lfs 1, 4(30)
  039a778  sth 3, 50(29)
  039a77c  stfs 1, 20(29)
  039a780  ori 3, 29, 0
  039a784  lfs 1, 8(30)
  039a788  stfs 1, 24(29)
  039a78c  lfs 1, 12(30)
  039a790  addic 30, 4, -25376
  039a794  stw 7, 68(31)
  039a798  stfs 1, 28(29)
  039a79c  lbz 4, 8182(30)
  039a7a0  addic 4, 4, 1
  039a7a4  stb 4, 8182(30)
  039a7a8  bl 0xf31a8
  039a7ac  nop
  039a7b0  ori 3, 29, 0
  039a7b4  bl 0x10c000
  039a7b8  nop
  039a7bc  lfs 1, 16(29)
  039a7c0  lfs 2, 128(30)
  039a7c4  lfs 3, 20(29)
  039a7c8  lis 3, 58
  039a7cc  lfs 4, 132(30)
  039a7d0  fsubs 1, 1, 2
  039a7d4  addi 4, 3, -22784
  039a7d8  fsubs 2, 3, 4
  039a7dc  lis 3, 115
  039a7e0  addic 3, 3, 22784
  039a7e4  fabs 5, 1
  039a7e8  fabs 6, 2
  039a7ec  stfs 1, 124(1)
  039a7f0  stfs 2, 128(1)
  039a7f4  fsubs 1, 5, 6
  039a7f8  stfs 1, 132(1)
  039a7fc  lwz 5, 124(1)
  039a800  lfs 4, 0(4)
  039a804  lfs 1, 124(1)
  039a808  lwz 6, 128(1)
  039a80c  lfs 2, 128(1)
  039a810  fabs 1, 1
  039a814  lfs 7, 4(4)
  039a818  rlwinm 6, 6, 3, 29, 29
  039a81c  lwz 4, 132(1)
  039a820  lfs 3, 132(1)
  039a824  fabs 2, 2
  039a828  rlwimi 6, 4, 2, 30, 30
  039a82c  fsub 8, 3, 4
  039a830  ori 4, 3, 0
  039a834  fsub 9, 3, 4
  039a838  rlwimi 6, 5, 4, 28, 28
  039a83c  rlwimi 4, 6, 2, 26, 28
  039a840  slwi 5, 6, 2
  039a844  clrldi 4, 4, 32
  039a848  fsel 6, 8, 1, 6
  039a84c  lfsx 1, 3, 5
  039a850  fsel 5, 9, 2, 5
  039a854  lfs 3, 4(4)
  039a858  fmr 2, 7
  039a85c  fcmpu 0, 6, 4
  039a860  bt 1, 0x39a86c
  039a864  fmr 1, 4
  039a868  b 0x39a988
  039a86c  fsubs 7, 5, 6
  039a870  fadds 5, 5, 6
  039a874  addic 4, 1, 16
  039a878  li 7, 2
  039a87c  addic 5, 4, 152
  039a880  addic 6, 4, 168
  039a884  mtctr 7
  039a888  fdivs 5, 7, 5
  039a88c  fmuls 6, 5, 5
  039a890  stfs 5, 180(1)
  039a894  stfs 5, 172(1)
  039a898  stfs 5, 176(1)
  039a89c  stfs 5, 168(1)
  039a8a0  lfs 8, 180(1)
  039a8a4  lfs 9, 172(1)
  039a8a8  lfs 10, 176(1)
  039a8ac  fmuls 7, 6, 6
  039a8b0  fmuls 9, 9, 6
  039a8b4  fmuls 8, 8, 7
  039a8b8  fmuls 5, 7, 7
  039a8bc  fmuls 7, 10, 7
  039a8c0  stfs 9, 172(1)
  039a8c4  fmuls 6, 8, 6
  039a8c8  stfs 7, 176(1)
  039a8cc  stfs 6, 180(1)
  039a8d0  lfs 6, 152(4)
  039a8d4  fmuls 6, 6, 5
  039a8d8  stfs 6, 168(4)
  039a8dc  lfs 6, 4(5)
  039a8e0  addic 4, 4, 8
  039a8e4  addic 5, 5, 8
  039a8e8  fmuls 6, 6, 5
  039a8ec  stfs 6, 4(6)
  039a8f0  addic 6, 6, 8
  039a8f4  bdnz 0x39a8d0
  039a8f8  li 6, 4
  039a8fc  ori 4, 1, 0
  039a900  mtctr 6
  039a904  lis 5, 115
  039a908  addic 6, 4, 168
  039a90c  addic 5, 5, 22752
  039a910  ori 7, 6, 0
  039a914  lfs 5, 168(4)
  039a918  lfs 6, 0(5)
  039a91c  fmuls 5, 5, 6
  039a920  lfs 6, 4(5)
  039a924  addic 5, 5, 8
  039a928  stfs 5, 168(4)
  039a92c  lfs 5, 4(6)
  039a930  addic 4, 4, 8
  039a934  fmuls 5, 5, 6
  039a938  stfs 5, 4(6)
  039a93c  addic 6, 6, 8
  039a940  bdnz 0x39a914
  039a944  li 5, 2
  039a948  fmr 5, 4
  039a94c  ori 4, 1, 0
  039a950  mtctr 5
  039a954  lfs 6, 168(4)
  039a958  fadds 5, 5, 6
  039a95c  lfs 6, 4(7)
  039a960  addic 4, 4, 16
  039a964  lfs 7, 8(7)
  039a968  lfs 8, 12(7)
  039a96c  addic 7, 7, 16
  039a970  fadds 5, 5, 6
  039a974  fadds 5, 5, 7
  039a978  fadds 5, 5, 8
  039a97c  bdnz 0x39a954
  039a980  fadds 5, 5, 2
  039a984  fmadds 1, 5, 1, 3
  039a988  stfs 1, 40(31)
  039a98c  lfs 1, 132(30)
  039a990  lfs 3, 20(29)
  039a994  lfs 5, 128(30)
  039a998  fsubs 1, 1, 3
  039a99c  lfs 3, 16(29)
  039a9a0  fsubs 3, 5, 3
  039a9a4  fmuls 1, 1, 1
  039a9a8  fmadds 1, 3, 3, 1
  039a9ac  lfs 3, 24(29)
  039a9b0  lfs 5, 136(30)
  039a9b4  fsubs 3, 3, 5
  039a9b8  fsqrts 1, 1
  039a9bc  stfs 3, 116(1)
  039a9c0  fabs 6, 3
  039a9c4  fabs 5, 1
  039a9c8  stfs 1, 112(1)
  039a9cc  lwz 4, 116(1)
  039a9d0  lfs 3, 116(1)
  039a9d4  rlwinm 4, 4, 3, 29, 29
  039a9d8  fabs 7, 3
  039a9dc  fsubs 1, 5, 6
  039a9e0  stfs 1, 120(1)
  039a9e4  lwz 5, 112(1)
  039a9e8  lfs 1, 112(1)
  039a9ec  lwz 6, 120(1)
  039a9f0  lfs 3, 120(1)
  039a9f4  fabs 1, 1
  039a9f8  rlwimi 4, 6, 2, 30, 30
  039a9fc  fsub 8, 3, 4
  039aa00  fsub 9, 3, 4
  039aa04  rlwimi 4, 5, 4, 28, 28
  039aa08  ori 5, 3, 0
  039aa0c  rlwimi 5, 4, 2, 26, 28
  039aa10  slwi 4, 4, 2
  039aa14  clrldi 5, 5, 32
  039aa18  fsel 6, 8, 1, 6
  039aa1c  lfsx 1, 3, 4
  039aa20  fsel 5, 9, 7, 5
  039aa24  lfs 3, 4(5)
  039aa28  fcmpu 0, 6, 4
  039aa2c  bt 1, 0x39aa34
  039aa30  b 0x39ab4c
  039aa34  fsubs 7, 5, 6
  039aa38  fadds 5, 5, 6
  039aa3c  addic 3, 1, 16
  039aa40  li 6, 2
  039aa44  addic 4, 3, 120
  039aa48  addic 5, 3, 136
  039aa4c  mtctr 6
  039aa50  fdivs 5, 7, 5
  039aa54  fmuls 6, 5, 5
  039aa58  stfs 5, 148(1)
  039aa5c  stfs 5, 140(1)
  039aa60  stfs 5, 144(1)
  039aa64  stfs 5, 136(1)
  039aa68  lfs 8, 148(1)
  039aa6c  lfs 9, 140(1)
  039aa70  lfs 10, 144(1)
  039aa74  fmuls 7, 6, 6
  039aa78  fmuls 9, 9, 6
  039aa7c  fmuls 8, 8, 7
  039aa80  fmuls 5, 7, 7
  039aa84  fmuls 7, 10, 7
  039aa88  stfs 9, 140(1)
  039aa8c  fmuls 6, 8, 6
  039aa90  stfs 7, 144(1)
  039aa94  stfs 6, 148(1)
  039aa98  lfs 6, 120(3)
  039aa9c  fmuls 6, 6, 5
  039aaa0  stfs 6, 136(3)
  039aaa4  lfs 6, 4(4)
  039aaa8  addic 3, 3, 8
  039aaac  addic 4, 4, 8
  039aab0  fmuls 6, 6, 5
  039aab4  stfs 6, 4(5)
  039aab8  addic 5, 5, 8
  039aabc  bdnz 0x39aa98
  039aac0  li 5, 4
  039aac4  ori 3, 1, 0
  039aac8  mtctr 5
  039aacc  lis 4, 115
  039aad0  addic 5, 3, 136
  039aad4  addic 4, 4, 22752
  039aad8  ori 6, 5, 0
  039aadc  lfs 5, 136(3)
  039aae0  lfs 6, 0(4)
  039aae4  fmuls 5, 5, 6
  039aae8  lfs 6, 4(4)
  039aaec  addic 4, 4, 8
  039aaf0  stfs 5, 136(3)
  039aaf4  lfs 5, 4(5)
  039aaf8  addic 3, 3, 8
  039aafc  fmuls 5, 5, 6
  039ab00  stfs 5, 4(5)
  039ab04  addic 5, 5, 8
  039ab08  bdnz 0x39aadc
  039ab0c  li 4, 2
  039ab10  ori 3, 1, 0
  039ab14  mtctr 4
  039ab18  lfs 5, 136(3)
  039ab1c  fadds 4, 4, 5
  039ab20  addic 3, 3, 16
  039ab24  lfs 5, 4(6)
  039ab28  lfs 6, 8(6)
  039ab2c  lfs 7, 12(6)
  039ab30  addic 6, 6, 16
  039ab34  fadds 4, 4, 5
  039ab38  fadds 4, 4, 6
  039ab3c  fadds 4, 4, 7
  039ab40  bdnz 0x39ab18
  039ab44  fadds 4, 4, 2
  039ab48  fmadds 4, 4, 1, 3
  039ab4c  stfs 4, 36(31)
  039ab50  lfs 1, 20(29)
  039ab54  lfs 2, 132(30)
  039ab58  lfs 3, 16(29)
  039ab5c  fsubs 1, 1, 2
  039ab60  lfs 2, 128(30)
  039ab64  fsubs 2, 3, 2
  039ab68  li 3, 0
  039ab6c  fmuls 1, 1, 1
  039ab70  sth 3, 84(31)
  039ab74  fmadds 1, 2, 2, 1
  039ab78  fsqrts 1, 1
  039ab7c  stfs 1, 32(31)
  039ab80  lfs 1, 136(30)
  039ab84  stfs 1, 60(31)
  039ab88  extsh 4, 3
  039ab8c  sldi 4, 4, 2
  039ab90  addc 4, 30, 4
  039ab94  lwz 5, 8224(4)
  039ab98  cmpwi 5, 0
  039ab9c  bf 2, 0x39aba8
  039aba0  stw 29, 8224(4)
  039aba4  b 0x39abbc
  039aba8  addic 3, 3, 1
  039abac  extsh 4, 3
  039abb0  cmpwi 4, 6
  039abb4  sth 3, 84(31)
  039abb8  bt 0, 0x39ab88
  039abbc  li 3, 100
  039abc0  li 4, 0
  039abc4  sth 3, 86(31)
  039abc8  stw 4, 148(29)
  039abcc  ori 3, 29, 0
  039abd0  ld 0, 240(1)
  039abd4  mtlr 0
  039abd8  ld 29, 200(1)
  039abdc  ld 30, 208(1)
  039abe0  ld 31, 216(1)
  039abe4  addi 1, 1, 224
  039abe8  blr

M479_0039ac10:   # 0x39ac10, 0x29c bytes
  039ac10  stdu 1, -176(1)
  039ac14  mflr 0
  039ac18  std 0, 192(1)
  039ac1c  stfd 30, 160(1)
  039ac20  stfd 31, 168(1)
  039ac24  std 31, 152(1)
  039ac28  lis 31, 151
  039ac2c  li 4, 0
  039ac30  addic 31, 31, -25376
  039ac34  li 3, 24
  039ac38  stb 4, 8181(31)
  039ac3c  bl 0x8e0f4
  039ac40  nop
  039ac44  ori 4, 3, 0
  039ac48  lbz 3, 8182(31)
  039ac4c  cmpwi 4, 0
  039ac50  bt 2, 0x39ae90
  039ac54  lis 4, 58
  039ac58  lfs 1, 152(31)
  039ac5c  addi 4, 4, -21524
  039ac60  lfs 2, 0(4)
  039ac64  lfs 3, 4(4)
  039ac68  fadds 2, 1, 2
  039ac6c  fsubs 5, 3, 1
  039ac70  lfs 4, 8(4)
  039ac74  cmpwi 3, 6
  039ac78  fsubs 3, 3, 2
  039ac7c  fsub 7, 1, 5
  039ac80  fsubs 6, 4, 2
  039ac84  fsubs 4, 4, 1
  039ac88  fsub 8, 2, 3
  039ac8c  fsel 1, 7, 5, 1
  039ac90  lfs 5, 12(4)
  039ac94  fsel 2, 8, 3, 2
  039ac98  fsub 3, 4, 1
  039ac9c  fsub 8, 6, 2
  039aca0  fsel 1, 3, 4, 1
  039aca4  lfs 3, 16(4)
  039aca8  lfs 4, 20(4)
  039acac  lfs 9, 24(4)
  039acb0  lfs 30, 28(4)
  039acb4  fsel 2, 8, 6, 2
  039acb8  fmuls 6, 1, 1
  039acbc  fmuls 7, 2, 2
  039acc0  fmuls 8, 6, 1
  039acc4  fmuls 10, 7, 2
  039acc8  fmuls 11, 6, 8
  039accc  fmadds 1, 8, 5, 1
  039acd0  fmuls 12, 7, 10
  039acd4  fmadds 2, 10, 5, 2
  039acd8  fmuls 5, 6, 11
  039acdc  fmadds 1, 11, 3, 1
  039ace0  fmuls 8, 7, 12
  039ace4  fmadds 2, 12, 3, 2
  039ace8  fmuls 3, 6, 5
  039acec  fmadds 1, 5, 4, 1
  039acf0  fmuls 5, 7, 8
  039acf4  fmadds 2, 8, 4, 2
  039acf8  fmadds 31, 3, 9, 1
  039acfc  fmadds 1, 5, 9, 2
  039ad00  fmuls 31, 31, 30
  039ad04  fmuls 30, 1, 30
  039ad08  bf 0, 0x39ae90
  039ad0c  li 3, 24
  039ad10  li 4, 1
  039ad14  bl 0xaa258
  039ad18  nop
  039ad1c  lis 5, 161
  039ad20  lis 3, 0
  039ad24  addic 5, 5, -732
  039ad28  ori 8, 3, 65535
  039ad2c  lwz 3, 8320(31)
  039ad30  lfs 1, 128(31)
  039ad34  lhz 7, 192(5)
  039ad38  lhz 6, 194(5)
  039ad3c  cmpw 7, 8
  039ad40  lwz 4, 196(5)
  039ad44  bf 0, 0x39ad50
  039ad48  addic 7, 7, 1
  039ad4c  sth 7, 192(5)
  039ad50  lis 7, 161
  039ad54  lis 8, 114
  039ad58  lwz 7, -2344(7)
  039ad5c  extsw 7, 7
  039ad60  std 7, 128(1)
  039ad64  lis 7, 58
  039ad68  addi 7, 7, -21524
  039ad6c  lfs 2, 32(7)
  039ad70  lfs 3, -3056(8)
  039ad74  lfd 4, 128(1)
  039ad78  ori 7, 6, 0
  039ad7c  fcfid 4, 4
  039ad80  lis 6, 6990
  039ad84  ori 8, 6, 33205
  039ad88  frsp 4, 4
  039ad8c  fadds 2, 4, 2
  039ad90  fmuls 2, 3, 2
  039ad94  fctiwz 2, 2
  039ad98  stfd 2, 128(1)
  039ad9c  lwz 6, 132(1)
  039ada0  mulhw 8, 8, 6
  039ada4  srawi 8, 8, 6
  039ada8  srwi 9, 8, 31
  039adac  addc 8, 8, 9
  039adb0  cmpw 8, 7
  039adb4  bf 1, 0x39add4
  039adb8  lis 7, 6990
  039adbc  ori 7, 7, 33205
  039adc0  mulhw 6, 7, 6
  039adc4  srawi 6, 6, 6
  039adc8  srwi 7, 6, 31
  039adcc  addc 6, 6, 7
  039add0  sth 6, 194(5)
  039add4  lis 6, 151
  039add8  li 7, 1
  039addc  lis 8, -32768
  039ade0  lwz 6, -25488(6)
  039ade4  lfs 2, 132(31)
  039ade8  slw 6, 7, 6
  039adec  or 4, 4, 6
  039adf0  or 4, 4, 8
  039adf4  stw 4, 196(5)
  039adf8  lfs 3, 224(3)
  039adfc  fadds 1, 1, 3
  039ae00  lfs 3, 136(31)
  039ae04  lwz 4, 8320(31)
  039ae08  lfs 4, 140(31)
  039ae0c  stfs 1, 112(1)
  039ae10  lfs 5, 228(3)
  039ae14  fadds 2, 2, 5
  039ae18  stfs 2, 116(1)
  039ae1c  lfs 5, 232(3)
  039ae20  stfs 4, 124(1)
  039ae24  fadds 3, 3, 5
  039ae28  stfs 3, 120(1)
  039ae2c  lfs 4, 192(4)
  039ae30  fadds 1, 1, 4
  039ae34  stfs 1, 112(1)
  039ae38  lfs 1, 196(4)
  039ae3c  fadds 1, 2, 1
  039ae40  stfs 1, 116(1)
  039ae44  lfs 1, 200(4)
  039ae48  fadds 1, 3, 1
  039ae4c  stfs 1, 120(1)
  039ae50  lbz 31, 8182(31)
  039ae54  cmpwi 31, 6
  039ae58  bf 0, 0x39ae90
  039ae5c  addic 4, 1, 112
  039ae60  bl 0x39a708
  039ae64  cmpwi 3, 0
  039ae68  bt 2, 0x39ae84
  039ae6c  lwz 5, 120(3)
  039ae70  lis 4, 16000
  039ae74  stfs 30, 0(5)
  039ae78  stfs 31, 4(5)
  039ae7c  stw 4, 8(5)
  039ae80  stfs 1, 12(5)
  039ae84  addic 31, 31, 1
  039ae88  cmpwi 31, 6
  039ae8c  bt 0, 0x39ae5c
  039ae90  ld 0, 192(1)
  039ae94  mtlr 0
  039ae98  lfd 30, 160(1)
  039ae9c  lfd 31, 168(1)
  039aea0  ld 31, 152(1)
  039aea4  addi 1, 1, 176
  039aea8  blr

M479_0039aeb8:   # 0x39aeb8, 0xb4 bytes
  039aeb8  stdu 1, -128(1)
  039aebc  mflr 0
  039aec0  std 0, 144(1)
  039aec4  std 30, 112(1)
  039aec8  std 31, 120(1)
  039aecc  lwz 30, 120(3)
  039aed0  ori 31, 3, 0
  039aed4  lwz 3, 76(30)
  039aed8  cmpwi 3, 0
  039aedc  bf 2, 0x39af14
  039aee0  lis 3, 58
  039aee4  lis 6, -32640
  039aee8  addi 5, 3, -20820
  039aeec  ori 3, 31, 0
  039aef0  lis 8, 4224
  039aef4  li 4, 0
  039aef8  ori 6, 6, 32896
  039aefc  lfs 1, 0(5)
  039af00  lfs 2, 4(5)
  039af04  ori 8, 8, 32896
  039af08  bl 0x1300d0
  039af0c  nop
  039af10  stw 3, 76(30)
  039af14  lwz 3, 80(30)
  039af18  cmpwi 3, 0
  039af1c  bf 2, 0x39af54
  039af20  lis 3, 58
  039af24  lis 6, -32640
  039af28  addi 5, 3, -20820
  039af2c  ori 3, 31, 0
  039af30  lis 8, 4224
  039af34  li 4, 1
  039af38  ori 6, 6, 32896
  039af3c  lfs 1, 0(5)
  039af40  lfs 2, 4(5)
  039af44  ori 8, 8, 32896
  039af48  bl 0x1300d0
  039af4c  nop
  039af50  stw 3, 80(30)
  039af54  ld 0, 144(1)
  039af58  mtlr 0
  039af5c  ld 30, 112(1)
  039af60  ld 31, 120(1)
  039af64  addi 1, 1, 128
  039af68  blr

M479_0039af88:   # 0x39af88, 0x348 bytes
  039af88  stdu 1, -208(1)
  039af8c  mflr 0
  039af90  std 0, 224(1)
  039af94  stfd 27, 168(1)
  039af98  stfd 28, 176(1)
  039af9c  stfd 29, 184(1)
  039afa0  stfd 30, 192(1)
  039afa4  stfd 31, 200(1)
  039afa8  lis 6, 164
  039afac  std 27, 128(1)
  039afb0  lis 5, 58
  039afb4  li 27, 0
  039afb8  std 30, 152(1)
  039afbc  addi 5, 5, -20628
  039afc0  std 29, 144(1)
  039afc4  std 28, 136(1)
  039afc8  ori 30, 3, 0
  039afcc  lwz 28, -28500(6)
  039afd0  std 31, 160(1)
  039afd4  ori 29, 27, 0
  039afd8  ori 31, 4, 0
  039afdc  cmpwi 28, 0
  039afe0  lfs 30, 0(5)
  039afe4  bt 2, 0x39b294
  039afe8  lwz 4, 36(28)
  039afec  ori 3, 29, 0
  039aff0  cmpwi 4, 0
  039aff4  bt 2, 0x39affc
  039aff8  lhz 3, 70(4)
  039affc  lbz 4, 32(28)
  039b000  clrlwi 3, 3, 24
  039b004  cmpwi 1, 4, 253
  039b008  cmpwi 4, 254
  039b00c  cror 2, 2, 6
  039b010  bt 2, 0x39b288
  039b014  cmpwi 3, 5
  039b018  bt 2, 0x39b02c
  039b01c  cmpwi 3, 7
  039b020  bt 2, 0x39b02c
  039b024  cmpwi 3, 8
  039b028  bf 2, 0x39b288
  039b02c  cmpwi 31, 0
  039b030  bt 2, 0x39b058
  039b034  ori 5, 29, 0
  039b038  ori 4, 31, 0
  039b03c  lwz 6, 0(4)
  039b040  cmpw 6, 28
  039b044  bt 2, 0x39b288
  039b048  addic 5, 5, 1
  039b04c  addic 4, 4, 4
  039b050  cmpwi 5, 9
  039b054  bt 0, 0x39b03c
  039b058  cmpwi 3, 5
  039b05c  bf 2, 0x39b070
  039b060  lhz 4, 52(28)
  039b064  rlwinm 4, 4, 0, 19, 19
  039b068  cmpwi 4, 0
  039b06c  bt 2, 0x39b288
  039b070  lbz 4, 49(28)
  039b074  cmpwi 4, 0
  039b078  bf 2, 0x39b090
  039b07c  lhz 4, 166(28)
  039b080  cmpwi 4, 848
  039b084  cmpwi 1, 4, 49
  039b088  bt 2, 0x39b090
  039b08c  bf 6, 0x39b288
  039b090  lfs 4, 4(30)
  039b094  lfs 3, 20(28)
  039b098  lfs 6, 0(30)
  039b09c  fsubs 7, 4, 3
  039b0a0  lfs 5, 16(28)
  039b0a4  lfs 2, 8(30)
  039b0a8  fsubs 8, 6, 5
  039b0ac  lfs 1, 24(28)
  039b0b0  lhz 4, 166(28)
  039b0b4  fsubs 9, 2, 1
  039b0b8  cmpwi 4, 1238
  039b0bc  fmuls 7, 7, 7
  039b0c0  fmadds 7, 8, 8, 7
  039b0c4  fmadds 31, 9, 9, 7
  039b0c8  fsqrts 31, 31
  039b0cc  bf 2, 0x39b170
  039b0d0  lwz 3, 120(28)
  039b0d4  lfs 7, 4(3)
  039b0d8  lfs 8, 0(3)
  039b0dc  fmuls 9, 7, 7
  039b0e0  lfs 10, 8(3)
  039b0e4  lis 3, 58
  039b0e8  addi 3, 3, -20628
  039b0ec  fmadds 9, 8, 8, 9
  039b0f0  lfs 11, 4(3)
  039b0f4  fmadds 9, 10, 10, 9
  039b0f8  fsqrts 9, 9
  039b0fc  fdivs 12, 31, 9
  039b100  fsub 13, 11, 9
  039b104  fsub 29, 11, 9
  039b108  fsub 28, 11, 9
  039b10c  fsub 0, 9, 11
  039b110  fsub 27, 9, 11
  039b114  fsub 9, 9, 11
  039b118  fmuls 7, 7, 12
  039b11c  fmuls 8, 8, 12
  039b120  fmuls 10, 10, 12
  039b124  fsel 12, 13, 11, 7
  039b128  fsel 13, 29, 11, 8
  039b12c  fsel 11, 28, 11, 10
  039b130  fsel 7, 0, 12, 7
  039b134  fsel 8, 27, 13, 8
  039b138  fsel 9, 9, 11, 10
  039b13c  fadds 3, 7, 3
  039b140  fadds 5, 8, 5
  039b144  fadds 1, 9, 1
  039b148  fsubs 3, 4, 3
  039b14c  fsubs 4, 6, 5
  039b150  fsubs 1, 2, 1
  039b154  fmuls 2, 3, 3
  039b158  fmadds 2, 4, 4, 2
  039b15c  fmadds 1, 1, 1, 2
  039b160  fsqrts 1, 1
  039b164  fcmpu 0, 31, 1
  039b168  bt 0, 0x39b288
  039b16c  b 0x39b1dc
  039b170  cmpwi 3, 6
  039b174  bt 1, 0x39b184
  039b178  cmpwi 3, 5
  039b17c  bt 2, 0x39b198
  039b180  b 0x39b1dc
  039b184  cmpwi 3, 7
  039b188  bf 1, 0x39b1b0
  039b18c  cmpwi 3, 8
  039b190  bf 1, 0x39b1c8
  039b194  b 0x39b1dc
  039b198  lis 3, 58
  039b19c  addi 3, 3, -20628
  039b1a0  lfs 1, 8(3)
  039b1a4  fcmpu 0, 31, 1
  039b1a8  bt 1, 0x39b288
  039b1ac  b 0x39b1dc
  039b1b0  lis 3, 58
  039b1b4  addi 3, 3, -20628
  039b1b8  lfs 1, 12(3)
  039b1bc  fcmpu 0, 31, 1
  039b1c0  bt 1, 0x39b288
  039b1c4  b 0x39b1dc
  039b1c8  lis 3, 58
  039b1cc  addi 3, 3, -20628
  039b1d0  lfs 1, 16(3)
  039b1d4  fcmpu 0, 31, 1
  039b1d8  bt 1, 0x39b288
  039b1dc  fcmpu 0, 30, 31
  039b1e0  cror 6, 0, 2
  039b1e4  bt 6, 0x39b288
  039b1e8  ori 3, 28, 0
  039b1ec  bl 0x486828
  039b1f0  nop
  039b1f4  cmpwi 3, 0
  039b1f8  bt 2, 0x39b20c
  039b1fc  lhz 3, 104(3)
  039b200  extsh 3, 3
  039b204  cmpwi 3, 0
  039b208  bt 1, 0x39b288
  039b20c  ori 3, 28, 0
  039b210  bl 0xfcccc
  039b214  nop
  039b218  lfs 1, 16(28)
  039b21c  cmpwi 3, 0
  039b220  stfs 1, 112(1)
  039b224  lfs 1, 20(28)
  039b228  stfs 1, 116(1)
  039b22c  lfs 1, 24(28)
  039b230  stfs 1, 120(1)
  039b234  lfs 2, 28(28)
  039b238  stfs 2, 124(1)
  039b23c  bt 2, 0x39b25c
  039b240  lis 4, 58
  039b244  lfs 2, 16(3)
  039b248  addi 4, 4, -20628
  039b24c  lfs 3, 20(4)
  039b250  fadds 2, 2, 3
  039b254  fadds 1, 2, 1
  039b258  stfs 1, 120(1)
  039b25c  ori 3, 30, 0
  039b260  addic 4, 1, 112
  039b264  li 5, 6
  039b268  ori 6, 28, 0
  039b26c  li 7, 0
  039b270  bl 0x57820
  039b274  nop
  039b278  cmpwi 3, 0
  039b27c  bf 2, 0x39b288
  039b280  fmr 30, 31
  039b284  ori 27, 28, 0
  039b288  lwz 28, 40(28)
  039b28c  cmpwi 28, 0
  039b290  bf 2, 0x39afe8
  039b294  ori 3, 27, 0
  039b298  ld 0, 224(1)
  039b29c  mtlr 0
  039b2a0  lfd 27, 168(1)
  039b2a4  lfd 28, 176(1)
  039b2a8  lfd 29, 184(1)
  039b2ac  lfd 30, 192(1)
  039b2b0  lfd 31, 200(1)
  039b2b4  ld 27, 128(1)
  039b2b8  ld 28, 136(1)
  039b2bc  ld 29, 144(1)
  039b2c0  ld 30, 152(1)
  039b2c4  ld 31, 160(1)
  039b2c8  addi 1, 1, 208
  039b2cc  blr

UpdateMoby_479:   # 0x39b390, 0x1a38 bytes
  039b390  stdu 1, -720(1)
  039b394  mflr 0
  039b398  std 0, 736(1)
  039b39c  stfd 24, 656(1)
  039b3a0  stfd 25, 664(1)
  039b3a4  stfd 26, 672(1)
  039b3a8  stfd 27, 680(1)
  039b3ac  stfd 28, 688(1)
  039b3b0  stfd 29, 696(1)
  039b3b4  stfd 30, 704(1)
  039b3b8  stfd 31, 712(1)
  039b3bc  std 31, 648(1)
  039b3c0  lis 4, 161
  039b3c4  ori 31, 3, 0
  039b3c8  std 27, 616(1)
  039b3cc  lwz 4, 1800(4)
  039b3d0  lwz 27, 120(31)
  039b3d4  cmpwi 1, 4, 5
  039b3d8  cmpwi 4, 2
  039b3dc  lhz 3, 52(31)
  039b3e0  std 30, 640(1)
  039b3e4  std 29, 632(1)
  039b3e8  std 28, 624(1)
  039b3ec  std 26, 608(1)
  039b3f0  std 25, 600(1)
  039b3f4  cror 2, 2, 6
  039b3f8  bt 2, 0x39b418
  039b3fc  cmpwi 4, 6
  039b400  bt 2, 0x39b418
  039b404  lis 26, 151
  039b408  addic 26, 26, -25376
  039b40c  lwz 4, 8324(26)
  039b410  cmpwi 4, 50
  039b414  bf 2, 0x39b424
  039b418  ori 3, 3, 65
  039b41c  sth 3, 52(31)
  039b420  b 0x39cd7c
  039b424  li 4, -66
  039b428  and 3, 3, 4
  039b42c  lbz 4, 32(31)
  039b430  cmpwi 4, 4
  039b434  sth 3, 52(31)
  039b438  bt 1, 0x39b810
  039b43c  lbz 3, 8180(26)
  039b440  lbz 4, 8182(26)
  039b444  addic 3, 3, 1
  039b448  clrlwi 5, 3, 24
  039b44c  cmpw 5, 4
  039b450  stb 3, 8180(26)
  039b454  bf 1, 0x39b6cc
  039b458  li 3, 1
  039b45c  lis 4, 58
  039b460  li 30, 0
  039b464  addi 29, 4, -19760
  039b468  stb 3, 8180(26)
  039b46c  lis 3, 114
  039b470  stb 30, 8183(26)
  039b474  lfs 1, 8184(26)
  039b478  lfs 2, 0(29)
  039b47c  lfs 3, -3064(3)
  039b480  fmuls 2, 3, 2
  039b484  bl 0x502578
  039b488  nop
  039b48c  ori 6, 30, 0
  039b490  stfs 1, 8184(26)
  039b494  addic 7, 26, 8224
  039b498  ori 3, 6, 0
  039b49c  lfs 31, 4(29)
  039b4a0  ori 25, 7, 0
  039b4a4  ori 29, 3, 0
  039b4a8  lwz 4, 0(7)
  039b4ac  cmpwi 4, 0
  039b4b0  bt 2, 0x39b518
  039b4b4  lhz 5, 166(4)
  039b4b8  cmpwi 5, 479
  039b4bc  bf 2, 0x39b514
  039b4c0  lbz 5, 32(4)
  039b4c4  cmpwi 1, 5, 253
  039b4c8  cmpwi 5, 254
  039b4cc  cror 2, 2, 6
  039b4d0  bt 2, 0x39b514
  039b4d4  ori 8, 6, 0
  039b4d8  lwz 4, 120(4)
  039b4dc  cmpwi 5, 4
  039b4e0  extsw 8, 8
  039b4e4  addic 29, 29, 1
  039b4e8  addc 5, 26, 8
  039b4ec  addic 6, 6, 4
  039b4f0  lwz 4, 48(4)
  039b4f4  cmpwi 1, 29, 9
  039b4f8  stw 4, 8188(5)
  039b4fc  bf 0, 0x39b50c
  039b500  lbz 4, 8183(26)
  039b504  addic 4, 4, 1
  039b508  stb 4, 8183(26)
  039b50c  bf 4, 0x39b528
  039b510  b 0x39b518
  039b514  stw 30, 0(7)
  039b518  addic 3, 3, 1
  039b51c  addic 7, 7, 4
  039b520  cmpwi 3, 6
  039b524  bt 0, 0x39b4a8
  039b528  cmpwi 29, 9
  039b52c  bf 0, 0x39b558
  039b530  li 4, 9
  039b534  sldi 3, 29, 2
  039b538  subc 4, 4, 29
  039b53c  extsw 5, 3
  039b540  addic 4, 4, -1
  039b544  addc 5, 5, 26
  039b548  cmpwi 4, 0
  039b54c  addic 3, 3, 4
  039b550  stw 30, 8188(5)
  039b554  bt 1, 0x39b53c
  039b558  addic 3, 26, 128
  039b55c  addic 4, 26, 8188
  039b560  bl 0x39af88
  039b564  ori 28, 3, 0
  039b568  cmpwi 28, 0
  039b56c  bt 2, 0x39b6cc
  039b570  ori 3, 28, 0
  039b574  bl 0xfcccc
  039b578  nop
  039b57c  lfs 2, 16(28)
  039b580  ori 3, 30, 0
  039b584  lfs 3, 20(28)
  039b588  lwz 4, 0(25)
  039b58c  cmpwi 4, 0
  039b590  bt 2, 0x39b5e8
  039b594  lwz 5, 120(4)
  039b598  lwz 5, 48(5)
  039b59c  cmpwi 5, 0
  039b5a0  bt 2, 0x39b5b8
  039b5a4  lbz 5, 32(5)
  039b5a8  cmpwi 5, 254
  039b5ac  cmpwi 1, 5, 253
  039b5b0  bt 2, 0x39b5b8
  039b5b4  bf 6, 0x39b5e8
  039b5b8  lfs 1, 20(4)
  039b5bc  lfs 4, 16(4)
  039b5c0  fsubs 1, 1, 3
  039b5c4  fsubs 4, 4, 2
  039b5c8  fmuls 1, 1, 1
  039b5cc  fmadds 1, 4, 4, 1
  039b5d0  fsqrts 1, 1
  039b5d4  fcmpu 0, 31, 1
  039b5d8  cror 6, 0, 2
  039b5dc  bt 6, 0x39b5e8
  039b5e0  ori 30, 4, 0
  039b5e4  fmr 31, 1
  039b5e8  addic 3, 3, 1
  039b5ec  addic 25, 25, 4
  039b5f0  cmpwi 3, 6
  039b5f4  bt 0, 0x39b588
  039b5f8  cmpwi 30, 0
  039b5fc  bt 2, 0x39b6cc
  039b600  ori 25, 28, 0
  039b604  lwz 28, 120(30)
  039b608  ori 3, 25, 0
  039b60c  stw 25, 48(28)
  039b610  lhz 4, 166(25)
  039b614  extsh 4, 4
  039b618  stw 4, 72(28)
  039b61c  bl 0xfcccc
  039b620  nop
  039b624  lfs 4, 24(25)
  039b628  cmpwi 3, 0
  039b62c  lfs 1, 16(25)
  039b630  lfs 2, 20(25)
  039b634  lfs 3, 28(25)
  039b638  bt 2, 0x39b644
  039b63c  lfs 5, 16(3)
  039b640  fadds 4, 4, 5
  039b644  li 3, 3
  039b648  stfs 1, 16(28)
  039b64c  stfs 2, 20(28)
  039b650  stfs 4, 24(28)
  039b654  stfs 3, 28(28)
  039b658  stb 3, 32(30)
  039b65c  bl 0x5c8318
  039b660  nop
  039b664  lis 4, 21845
  039b668  ori 4, 4, 21846
  039b66c  mulhw 4, 4, 3
  039b670  srwi 5, 4, 31
  039b674  addc 4, 4, 5
  039b678  addc 5, 4, 4
  039b67c  addc 4, 4, 5
  039b680  li 5, 0
  039b684  subc 3, 3, 4
  039b688  extsw 4, 3
  039b68c  addic 6, 3, 1
  039b690  subc 4, 5, 4
  039b694  subc 5, 6, 3
  039b698  sradi 4, 4, 63
  039b69c  and 5, 4, 5
  039b6a0  li 4, 0
  039b6a4  addc 3, 3, 5
  039b6a8  ori 5, 31, 0
  039b6ac  clrldi 3, 3, 32
  039b6b0  bl 0x15d12c
  039b6b4  nop
  039b6b8  sldi 3, 29, 2
  039b6bc  lwz 4, 48(28)
  039b6c0  extsw 3, 3
  039b6c4  addc 3, 26, 3
  039b6c8  stw 4, 8188(3)
  039b6cc  li 3, 1
  039b6d0  lbz 5, 8182(26)
  039b6d4  li 4, 1
  039b6d8  lbz 30, 8180(26)
  039b6dc  li 6, 1
  039b6e0  addic 7, 5, 1
  039b6e4  subc 3, 5, 3
  039b6e8  li 8, 1
  039b6ec  subc 4, 7, 4
  039b6f0  sradi 3, 3, 63
  039b6f4  subc 6, 6, 5
  039b6f8  subc 8, 8, 7
  039b6fc  sradi 4, 4, 63
  039b700  and 6, 3, 6
  039b704  and 4, 4, 8
  039b708  addc 28, 5, 6
  039b70c  ori 3, 30, 0
  039b710  addc 29, 7, 4
  039b714  bl 0x502730
  039b718  nop
  039b71c  extsw 3, 28
  039b720  std 3, 576(1)
  039b724  addic 3, 29, 1
  039b728  sldi 4, 3, 4
  039b72c  addc 3, 3, 4
  039b730  addc 4, 3, 3
  039b734  addc 3, 3, 4
  039b738  lis 4, 58
  039b73c  srwi 3, 3, 8
  039b740  mullw 3, 30, 3
  039b744  lfd 2, 576(1)
  039b748  fcfid 2, 2
  039b74c  addi 30, 4, -19760
  039b750  divw 4, 3, 29
  039b754  frsp 31, 2
  039b758  lfs 2, 8(30)
  039b75c  lfs 3, 12(30)
  039b760  fmr 30, 2
  039b764  fmr 29, 3
  039b768  mullw 4, 4, 29
  039b76c  fdivs 1, 1, 31
  039b770  subc 3, 3, 4
  039b774  extsw 3, 3
  039b778  fmsubs 1, 1, 30, 29
  039b77c  stfs 1, 64(27)
  039b780  bl 0x502730
  039b784  nop
  039b788  fdivs 1, 1, 31
  039b78c  lfs 2, 16(30)
  039b790  ori 3, 31, 0
  039b794  li 4, 1
  039b798  li 5, 0
  039b79c  fmsubs 1, 1, 30, 29
  039b7a0  fmuls 1, 1, 2
  039b7a4  stfs 1, 52(27)
  039b7a8  bl 0x10675c
  039b7ac  nop
  039b7b0  cmpwi 3, 0
  039b7b4  bt 2, 0x39b810
  039b7b8  lwz 3, 32(3)
  039b7bc  cmpwi 3, 0
  039b7c0  bt 2, 0x39b810
  039b7c4  lwz 4, 36(3)
  039b7c8  cmpwi 4, 0
  039b7cc  bt 2, 0x39b810
  039b7d0  lhz 4, 70(4)
  039b7d4  extsh 4, 4
  039b7d8  cmpwi 4, 4
  039b7dc  cmpwi 1, 4, 8
  039b7e0  bf 1, 0x39b810
  039b7e4  bt 5, 0x39b810
  039b7e8  lhz 3, 166(3)
  039b7ec  cmpwi 3, 1238
  039b7f0  bf 2, 0x39b808
  039b7f4  addic 3, 27, 86
  039b7f8  bl 0x4fffb4
  039b7fc  nop
  039b800  cmpwi 3, 0
  039b804  bt 2, 0x39b810
  039b808  li 3, 4
  039b80c  stb 3, 32(31)
  039b810  lbz 3, 32(31)
  039b814  cmpwi 3, 3
  039b818  cmpwi 1, 3, 1
  039b81c  cmpwi 6, 3, 2
  039b820  cmpwi 7, 3, 4
  039b824  bt 1, 0x39b834
  039b828  bf 5, 0x39cd64
  039b82c  bf 25, 0x39b844
  039b830  b 0x39c34c
  039b834  bf 29, 0x39cbdc
  039b838  cmpwi 3, 5
  039b83c  bf 1, 0x39cd30
  039b840  b 0x39cd64
  039b844  li 3, 0
  039b848  lwz 30, 120(31)
  039b84c  stw 3, 148(31)
  039b850  lfs 31, 16(31)
  039b854  lfs 30, 20(31)
  039b858  lfs 29, 24(31)
  039b85c  lwz 3, 76(30)
  039b860  cmpwi 3, 0
  039b864  bf 2, 0x39b89c
  039b868  lis 3, 58
  039b86c  lis 6, -32640
  039b870  addi 5, 3, -19760
  039b874  ori 3, 31, 0
  039b878  lis 8, 4224
  039b87c  li 4, 0
  039b880  ori 6, 6, 32896
  039b884  lfs 1, 0(5)
  039b888  ori 8, 8, 32896
  039b88c  lfs 2, 20(5)
  039b890  bl 0x1300d0
  039b894  nop
  039b898  stw 3, 76(30)
  039b89c  lwz 3, 80(30)
  039b8a0  cmpwi 3, 0
  039b8a4  bf 2, 0x39b8dc
  039b8a8  lis 3, 58
  039b8ac  lis 6, -32640
  039b8b0  addi 5, 3, -19760
  039b8b4  ori 3, 31, 0
  039b8b8  lis 8, 4224
  039b8bc  li 4, 1
  039b8c0  ori 6, 6, 32896
  039b8c4  lfs 1, 0(5)
  039b8c8  ori 8, 8, 32896
  039b8cc  lfs 2, 20(5)
  039b8d0  bl 0x1300d0
  039b8d4  nop
  039b8d8  stw 3, 80(30)
  039b8dc  lis 3, 58
  039b8e0  lfs 1, 44(31)
  039b8e4  lis 29, 114
  039b8e8  addi 30, 3, -19760
  039b8ec  lfs 26, 0(30)
  039b8f0  lwz 3, 36(31)
  039b8f4  lfs 2, -3064(29)
  039b8f8  fmuls 2, 2, 26
  039b8fc  lfs 3, 36(3)
  039b900  fsubs 3, 3, 1
  039b904  fmadds 1, 2, 3, 1
  039b908  stfs 1, 44(31)
  039b90c  lfs 28, 24(30)
  039b910  lfs 2, 32(27)
  039b914  lfs 1, -3064(29)
  039b918  fsubs 4, 28, 2
  039b91c  fmuls 3, 1, 26
  039b920  lfs 1, 64(27)
  039b924  lfs 27, 40(27)
  039b928  fmadds 2, 3, 4, 2
  039b92c  stfs 2, 32(27)
  039b930  lfs 2, 8184(26)
  039b934  bl 0x502578
  039b938  nop
  039b93c  lfs 2, 40(27)
  039b940  bl 0x5025e0
  039b944  nop
  039b948  lfs 2, -3064(29)
  039b94c  fmuls 2, 2, 26
  039b950  fmuls 2, 2, 1
  039b954  fmr 1, 27
  039b958  bl 0x502578
  039b95c  nop
  039b960  lfs 27, 36(27)
  039b964  stfs 1, 40(27)
  039b968  lfs 1, 52(27)
  039b96c  fmr 2, 27
  039b970  bl 0x5025e0
  039b974  nop
  039b978  lfs 2, 20(30)
  039b97c  lfs 3, -3064(29)
  039b980  fmuls 2, 3, 2
  039b984  fmuls 2, 2, 1
  039b988  fmr 1, 27
  039b98c  bl 0x502578
  039b990  nop
  039b994  lfs 2, 28(30)
  039b998  lfs 3, 32(30)
  039b99c  lfs 4, 40(27)
  039b9a0  lfs 5, 36(30)
  039b9a4  fadds 2, 4, 2
  039b9a8  fsubs 6, 3, 4
  039b9ac  fsubs 7, 5, 4
  039b9b0  li 5, 0
  039b9b4  addic 3, 1, 336
  039b9b8  addic 4, 1, 208
  039b9bc  fsubs 3, 3, 2
  039b9c0  fsub 8, 4, 6
  039b9c4  fsubs 5, 5, 2
  039b9c8  fsub 10, 2, 3
  039b9cc  fsel 4, 8, 6, 4
  039b9d0  lfs 6, 40(30)
  039b9d4  lfs 8, 44(30)
  039b9d8  fsel 2, 10, 3, 2
  039b9dc  fsub 3, 7, 4
  039b9e0  fsub 10, 5, 2
  039b9e4  fsel 3, 3, 7, 4
  039b9e8  lfs 4, 48(30)
  039b9ec  lfs 7, 52(30)
  039b9f0  lfs 9, 32(27)
  039b9f4  lfs 27, 56(30)
  039b9f8  stfs 1, 36(27)
  039b9fc  stw 5, 208(1)
  039ba00  fsel 2, 10, 5, 2
  039ba04  fmuls 5, 3, 3
  039ba08  fmuls 10, 2, 2
  039ba0c  fmuls 11, 5, 3
  039ba10  fmuls 12, 10, 2
  039ba14  fmuls 13, 5, 11
  039ba18  fmadds 3, 11, 6, 3
  039ba1c  fmuls 1, 10, 12
  039ba20  fmadds 2, 12, 6, 2
  039ba24  fmuls 6, 5, 13
  039ba28  fmadds 3, 13, 8, 3
  039ba2c  fmuls 11, 10, 1
  039ba30  fmadds 1, 1, 8, 2
  039ba34  fmuls 2, 5, 6
  039ba38  fmadds 3, 6, 4, 3
  039ba3c  fmuls 5, 10, 11
  039ba40  fmadds 1, 11, 4, 1
  039ba44  fmadds 2, 2, 7, 3
  039ba48  lfs 3, 36(27)
  039ba4c  stw 5, 216(1)
  039ba50  stfs 3, 212(1)
  039ba54  stw 5, 220(1)
  039ba58  fmadds 1, 5, 7, 1
  039ba5c  fmuls 25, 2, 9
  039ba60  fmuls 24, 1, 9
  039ba64  bl 0x500ca4
  039ba68  nop
  039ba6c  lfs 1, 352(1)
  039ba70  lfs 2, 336(1)
  039ba74  fmuls 1, 1, 25
  039ba78  lfs 3, 384(1)
  039ba7c  fmadds 1, 2, 24, 1
  039ba80  lfs 4, 356(1)
  039ba84  fmadds 1, 3, 2, 1
  039ba88  lwz 3, 8320(26)
  039ba8c  fmuls 4, 4, 25
  039ba90  lfs 5, 128(26)
  039ba94  lfs 6, 340(1)
  039ba98  lfs 3, 388(1)
  039ba9c  lfs 7, 224(3)
  039baa0  fadds 5, 5, 7
  039baa4  lfs 7, 132(26)
  039baa8  fmadds 4, 6, 24, 4
  039baac  lfs 6, 136(26)
  039bab0  lfs 8, 360(1)
  039bab4  lfs 9, 140(26)
  039bab8  fmuls 8, 8, 25
  039babc  fadds 1, 5, 1
  039bac0  stfs 5, 224(1)
  039bac4  lfs 10, 228(3)
  039bac8  fmadds 3, 3, 2, 4
  039bacc  lfs 5, 344(1)
  039bad0  fadds 4, 7, 10
  039bad4  lfs 7, -3064(29)
  039bad8  fmadds 5, 5, 24, 8
  039badc  lfs 8, 392(1)
  039bae0  fmuls 7, 7, 26
  039bae4  fadds 3, 4, 3
  039bae8  stfs 4, 228(1)
  039baec  lfs 4, 232(3)
  039baf0  stfs 9, 236(1)
  039baf4  fadds 4, 6, 4
  039baf8  stfs 1, 224(1)
  039bafc  fmadds 1, 8, 2, 5
  039bb00  stfs 3, 228(1)
  039bb04  lis 3, 114
  039bb08  stfs 4, 232(1)
  039bb0c  lfs 2, 60(27)
  039bb10  fsubs 3, 4, 2
  039bb14  fmadds 2, 7, 3, 2
  039bb18  fadds 6, 2, 1
  039bb1c  stfs 2, 60(27)
  039bb20  lfs 3, 228(1)
  039bb24  lfs 4, 20(31)
  039bb28  lfs 5, 224(1)
  039bb2c  fsubs 2, 3, 4
  039bb30  lfs 1, 16(31)
  039bb34  lfs 3, 24(31)
  039bb38  fsubs 1, 5, 1
  039bb3c  fsubs 3, 6, 3
  039bb40  fmuls 4, 2, 2
  039bb44  stfs 1, 224(1)
  039bb48  stfs 2, 228(1)
  039bb4c  stfs 3, 232(1)
  039bb50  fmadds 4, 1, 1, 4
  039bb54  fmadds 5, 3, 3, 4
  039bb58  lfs 4, 60(30)
  039bb5c  lfs 6, -3052(3)
  039bb60  fmuls 4, 6, 4
  039bb64  fsqrts 5, 5
  039bb68  fcmpu 0, 4, 5
  039bb6c  cror 6, 1, 2
  039bb70  bt 6, 0x39bb90
  039bb74  fdivs 4, 4, 5
  039bb78  fmuls 1, 1, 4
  039bb7c  fmuls 2, 2, 4
  039bb80  fmuls 3, 3, 4
  039bb84  stfs 1, 224(1)
  039bb88  stfs 2, 228(1)
  039bb8c  stfs 3, 232(1)
  039bb90  lis 4, 58
  039bb94  fmr 1, 27
  039bb98  ori 3, 31, 0
  039bb9c  fmr 3, 27
  039bba0  addi 5, 4, -19760
  039bba4  li 8, 0
  039bba8  addic 4, 1, 224
  039bbac  lfs 2, 64(5)
  039bbb0  bl 0x1009b0
  039bbb4  nop
  039bbb8  clrlwi 3, 3, 31
  039bbbc  cmpwi 3, 0
  039bbc0  bt 2, 0x39bc28
  039bbc4  lbz 3, 49(31)
  039bbc8  cmpwi 3, 0
  039bbcc  bf 2, 0x39bc28
  039bbd0  lis 3, 149
  039bbd4  addic 3, 3, 5056
  039bbd8  lfs 1, 320(3)
  039bbdc  lfs 2, 880(3)
  039bbe0  fadds 1, 1, 2
  039bbe4  lfs 2, 324(3)
  039bbe8  lfs 3, 884(3)
  039bbec  lfs 4, 328(3)
  039bbf0  lfs 5, 888(3)
  039bbf4  fadds 2, 2, 3
  039bbf8  lfs 6, 332(3)
  039bbfc  fadds 4, 4, 5
  039bc00  stfs 6, 28(31)
  039bc04  lfs 3, 848(3)
  039bc08  fsubs 1, 1, 3
  039bc0c  stfs 1, 16(31)
  039bc10  lfs 1, 852(3)
  039bc14  fsubs 1, 2, 1
  039bc18  stfs 1, 20(31)
  039bc1c  lfs 1, 856(3)
  039bc20  fsubs 1, 4, 1
  039bc24  stfs 1, 24(31)
  039bc28  lfs 1, 16(31)
  039bc2c  lis 3, 58
  039bc30  lfs 2, 20(31)
  039bc34  li 5, 0
  039bc38  stfs 1, 192(1)
  039bc3c  addi 3, 3, -19760
  039bc40  lfs 1, 24(31)
  039bc44  ori 6, 31, 0
  039bc48  stfs 2, 196(1)
  039bc4c  lfs 2, 28(31)
  039bc50  stfs 1, 200(1)
  039bc54  stfs 2, 204(1)
  039bc58  lfs 26, 68(3)
  039bc5c  addic 3, 1, 192
  039bc60  fmr 1, 26
  039bc64  bl 0x59e20
  039bc68  nop
  039bc6c  cmpwi 3, 0
  039bc70  bt 2, 0x39bf38
  039bc74  lis 29, 161
  039bc78  addic 29, 29, 2368
  039bc7c  lwz 3, 24(29)
  039bc80  cmpwi 6, 3, 0
  039bc84  bt 26, 0x39bca8
  039bc88  lhz 4, 166(3)
  039bc8c  cmpwi 4, 0
  039bc90  bf 2, 0x39bca8
  039bc94  lbz 4, 32(3)
  039bc98  cmpwi 4, 254
  039bc9c  cmpwi 1, 4, 253
  039bca0  bt 2, 0x39bca8
  039bca4  bf 6, 0x39bf38
  039bca8  li 30, 0
  039bcac  bt 26, 0x39bcc4
  039bcb0  lwz 4, 36(3)
  039bcb4  li 30, 0
  039bcb8  cmpwi 4, 0
  039bcbc  bt 2, 0x39bcc4
  039bcc0  lhz 30, 70(4)
  039bcc4  clrlwi 30, 30, 24
  039bcc8  bt 26, 0x39bf38
  039bccc  lbz 3, 32(3)
  039bcd0  cmpwi 1, 3, 253
  039bcd4  cmpwi 3, 254
  039bcd8  cror 2, 2, 6
  039bcdc  bt 2, 0x39bf38
  039bce0  cmpwi 30, 5
  039bce4  bt 2, 0x39bcf8
  039bce8  cmpwi 30, 7
  039bcec  bt 2, 0x39bcf8
  039bcf0  cmpwi 30, 8
  039bcf4  bf 2, 0x39bf38
  039bcf8  fmr 1, 28
  039bcfc  addic 3, 1, 240
  039bd00  ori 4, 31, 0
  039bd04  lis 5, 1
  039bd08  bl 0x1057f4
  039bd0c  nop
  039bd10  lfs 2, 4(27)
  039bd14  lfs 1, 0(27)
  039bd18  fmuls 2, 2, 2
  039bd1c  li 3, 166
  039bd20  vspltisw 2, -16
  039bd24  lvlx 3, 3, 31
  039bd28  lwz 3, 24(29)
  039bd2c  fmadds 2, 1, 1, 2
  039bd30  vsrw 2, 3, 2
  039bd34  fsqrts 3, 2
  039bd38  fcmpu 0, 3, 27
  039bd3c  bf 2, 0x39bd50
  039bd40  li 4, 0
  039bd44  stw 4, 244(1)
  039bd48  stw 4, 240(1)
  039bd4c  b 0x39bda4
  039bd50  frsqrte 3, 2
  039bd54  lis 4, 58
  039bd58  addi 4, 4, -19760
  039bd5c  lfs 4, 72(4)
  039bd60  fmuls 5, 2, 3
  039bd64  fmuls 6, 4, 3
  039bd68  fnmsubs 5, 5, 3, 28
  039bd6c  fmadds 3, 5, 6, 3
  039bd70  fmuls 5, 2, 3
  039bd74  fmuls 6, 4, 3
  039bd78  fnmsubs 5, 5, 3, 28
  039bd7c  fmadds 3, 5, 6, 3
  039bd80  fmuls 2, 2, 3
  039bd84  fmuls 4, 4, 3
  039bd88  fnmsubs 2, 2, 3, 28
  039bd8c  fmadds 2, 2, 4, 3
  039bd90  fmuls 1, 1, 2
  039bd94  stfs 1, 240(1)
  039bd98  lfs 1, 4(27)
  039bd9c  fmuls 1, 1, 2
  039bda0  stfs 1, 244(1)
  039bda4  li 4, 240
  039bda8  lis 5, 17839
  039bdac  vsplth 4, 2, 1
  039bdb0  lis 7, 16256
  039bdb4  li 6, 256
  039bdb8  li 8, 1
  039bdbc  lvx 3, 4, 1
  039bdc0  ori 4, 5, 57190
  039bdc4  stw 7, 248(1)
  039bdc8  lis 9, 58
  039bdcc  li 5, 2
  039bdd0  li 7, 266
  039bdd4  stw 4, 252(1)
  039bdd8  li 10, 112
  039bddc  lvx 5, 6, 1
  039bde0  addi 4, 9, -19760
  039bde4  stb 8, 264(1)
  039bde8  li 6, 80
  039bdec  stb 5, 265(1)
  039bdf0  li 8, 96
  039bdf4  stvehx 4, 7, 1
  039bdf8  li 5, 128
  039bdfc  li 7, 144
  039be00  lvlx 4, 10, 4
  039be04  li 9, 272
  039be08  lvx 6, 6, 4
  039be0c  vspltw 4, 4, 0
  039be10  lvx 7, 8, 4
  039be14  li 6, 80
  039be18  lvx 8, 5, 4
  039be1c  vperm 3, 3, 6, 7
  039be20  vperm 2, 2, 4, 8
  039be24  li 5, 64
  039be28  lvx 4, 7, 4
  039be2c  li 4, 96
  039be30  lvx 6, 9, 1
  039be34  vperm 2, 2, 5, 4
  039be38  stvx 3, 5, 1
  039be3c  stvx 6, 4, 1
  039be40  ld 5, 64(1)
  039be44  ld 4, 72(1)
  039be48  ld 9, 96(1)
  039be4c  stvx 2, 6, 1
  039be50  ld 7, 80(1)
  039be54  ori 6, 4, 0
  039be58  ld 8, 88(1)
  039be5c  ld 10, 104(1)
  039be60  bl 0x105ab4
  039be64  nop
  039be68  cmpwi 30, 5
  039be6c  bf 2, 0x39bf38
  039be70  lwz 29, 24(29)
  039be74  cmpwi 29, 0
  039be78  bt 2, 0x39becc
  039be7c  lhz 3, 166(29)
  039be80  cmpwi 3, 1238
  039be84  bf 2, 0x39becc
  039be88  lhz 30, 86(27)
  039be8c  extsh 3, 30
  039be90  cmpwi 3, 0
  039be94  bf 1, 0x39becc
  039be98  lfs 1, 268(1)
  039be9c  bl 0x502758
  039bea0  nop
  039bea4  ori 4, 3, 0
  039bea8  li 3, 1
  039beac  cmpwi 4, 1
  039beb0  bt 0, 0x39bec0
  039beb4  lfs 1, 268(1)
  039beb8  bl 0x502758
  039bebc  nop
  039bec0  subc 3, 30, 3
  039bec4  sth 3, 86(27)
  039bec8  b 0x39bf38
  039becc  lis 3, 58
  039bed0  li 11, 1
  039bed4  fmr 1, 27
  039bed8  addi 5, 3, -19760
  039bedc  fmr 2, 27
  039bee0  li 6, -1
  039bee4  fmr 4, 26
  039bee8  li 7, 0
  039beec  fmr 6, 28
  039bef0  ori 3, 31, 0
  039bef4  ori 4, 27, 0
  039bef8  lfs 3, 160(5)
  039befc  li 8, 0
  039bf00  lfs 5, 164(5)
  039bf04  li 9, 1
  039bf08  lfs 7, 168(5)
  039bf0c  li 10, 1
  039bf10  std 11, 144(1)
  039bf14  li 5, 0
  039bf18  std 11, 160(1)
  039bf1c  std 11, 168(1)
  039bf20  std 6, 176(1)
  039bf24  std 7, 184(1)
  039bf28  bl 0x10e030
  039bf2c  nop
  039bf30  li 3, 4
  039bf34  stb 3, 32(31)
  039bf38  lfs 1, 16(31)
  039bf3c  fsubs 1, 1, 31
  039bf40  lis 3, 115
  039bf44  addic 3, 3, 22784
  039bf48  stfs 1, 0(27)
  039bf4c  lfs 1, 20(31)
  039bf50  fsubs 1, 1, 30
  039bf54  stfs 1, 4(27)
  039bf58  lfs 1, 24(31)
  039bf5c  fsubs 1, 1, 29
  039bf60  stfs 1, 8(27)
  039bf64  lfs 1, 28(31)
  039bf68  stfs 1, 12(27)
  039bf6c  lfs 4, 16(31)
  039bf70  lfs 5, 20(31)
  039bf74  fsubs 1, 4, 31
  039bf78  fsubs 2, 5, 30
  039bf7c  fabs 3, 1
  039bf80  fabs 8, 2
  039bf84  stfs 1, 436(1)
  039bf88  stfs 2, 440(1)
  039bf8c  fsubs 1, 3, 8
  039bf90  stfs 1, 444(1)
  039bf94  lwz 4, 436(1)
  039bf98  lfs 1, 436(1)
  039bf9c  lwz 5, 440(1)
  039bfa0  lfs 2, 440(1)
  039bfa4  fabs 1, 1
  039bfa8  lfs 6, 24(31)
  039bfac  rlwinm 5, 5, 3, 29, 29
  039bfb0  lfs 7, 72(31)
  039bfb4  fabs 2, 2
  039bfb8  lwz 6, 444(1)
  039bfbc  lfs 9, 444(1)
  039bfc0  rlwimi 5, 6, 2, 30, 30
  039bfc4  fsub 10, 9, 27
  039bfc8  fsub 9, 9, 27
  039bfcc  rlwimi 5, 4, 4, 28, 28
  039bfd0  ori 4, 3, 0
  039bfd4  rlwimi 4, 5, 2, 26, 28
  039bfd8  slwi 5, 5, 2
  039bfdc  clrldi 4, 4, 32
  039bfe0  fsel 8, 10, 1, 8
  039bfe4  lfsx 1, 3, 5
  039bfe8  fsel 3, 9, 2, 3
  039bfec  lfs 2, 4(4)
  039bff0  fcmpu 0, 8, 27
  039bff4  bt 1, 0x39c000
  039bff8  fmr 1, 27
  039bffc  b 0x39c124
  039c000  fsubs 9, 3, 8
  039c004  fadds 3, 3, 8
  039c008  addic 4, 1, 16
  039c00c  li 8, 2
  039c010  addic 5, 4, 528
  039c014  addic 6, 4, 544
  039c018  mtctr 8
  039c01c  fdivs 3, 9, 3
  039c020  fmuls 8, 3, 3
  039c024  stfs 3, 556(1)
  039c028  stfs 3, 548(1)
  039c02c  stfs 3, 552(1)
  039c030  stfs 3, 544(1)
  039c034  lfs 10, 556(1)
  039c038  lfs 11, 548(1)
  039c03c  lfs 12, 552(1)
  039c040  fmuls 9, 8, 8
  039c044  fmuls 11, 11, 8
  039c048  fmuls 10, 10, 9
  039c04c  fmuls 3, 9, 9
  039c050  fmuls 9, 12, 9
  039c054  stfs 11, 548(1)
  039c058  fmuls 8, 10, 8
  039c05c  stfs 9, 552(1)
  039c060  stfs 8, 556(1)
  039c064  lfs 8, 528(4)
  039c068  fmuls 8, 8, 3
  039c06c  stfs 8, 544(4)
  039c070  lfs 8, 4(5)
  039c074  addic 4, 4, 8
  039c078  addic 5, 5, 8
  039c07c  fmuls 8, 8, 3
  039c080  stfs 8, 4(6)
  039c084  addic 6, 6, 8
  039c088  bdnz 0x39c064
  039c08c  li 6, 4
  039c090  ori 4, 1, 0
  039c094  mtctr 6
  039c098  lis 5, 115
  039c09c  addic 6, 4, 544
  039c0a0  addic 5, 5, 22752
  039c0a4  ori 7, 6, 0
  039c0a8  lfs 3, 544(4)
  039c0ac  lfs 8, 0(5)
  039c0b0  fmuls 3, 3, 8
  039c0b4  lfs 8, 4(5)
  039c0b8  addic 5, 5, 8
  039c0bc  stfs 3, 544(4)
  039c0c0  lfs 3, 4(6)
  039c0c4  addic 4, 4, 8
  039c0c8  fmuls 3, 3, 8
  039c0cc  stfs 3, 4(6)
  039c0d0  addic 6, 6, 8
  039c0d4  bdnz 0x39c0a8
  039c0d8  fmr 3, 27
  039c0dc  ori 4, 1, 0
  039c0e0  mtctr 8
  039c0e4  lfs 8, 544(4)
  039c0e8  fadds 3, 3, 8
  039c0ec  addic 4, 4, 16
  039c0f0  lfs 8, 4(7)
  039c0f4  lfs 9, 8(7)
  039c0f8  lfs 10, 12(7)
  039c0fc  addic 7, 7, 16
  039c100  fadds 3, 3, 8
  039c104  fadds 3, 3, 9
  039c108  fadds 3, 3, 10
  039c10c  bdnz 0x39c0e4
  039c110  lis 4, 58
  039c114  addi 4, 4, -19760
  039c118  lfs 8, 172(4)
  039c11c  fadds 3, 3, 8
  039c120  fmadds 1, 3, 1, 2
  039c124  fsubs 2, 30, 5
  039c128  fsubs 3, 31, 4
  039c12c  fmuls 2, 2, 2
  039c130  fmadds 2, 3, 3, 2
  039c134  fsubs 3, 6, 29
  039c138  fsqrts 2, 2
  039c13c  stfs 3, 428(1)
  039c140  fabs 4, 3
  039c144  fabs 3, 2
  039c148  stfs 2, 424(1)
  039c14c  lwz 4, 428(1)
  039c150  rlwinm 4, 4, 3, 29, 29
  039c154  fsubs 2, 3, 4
  039c158  stfs 2, 432(1)
  039c15c  lwz 5, 424(1)
  039c160  lfs 2, 424(1)
  039c164  lfs 5, 428(1)
  039c168  lwz 6, 432(1)
  039c16c  lfs 6, 432(1)
  039c170  fabs 2, 2
  039c174  rlwimi 4, 6, 2, 30, 30
  039c178  fsub 8, 6, 27
  039c17c  fabs 5, 5
  039c180  fsub 6, 6, 27
  039c184  rlwimi 4, 5, 4, 28, 28
  039c188  ori 5, 3, 0
  039c18c  rlwimi 5, 4, 2, 26, 28
  039c190  slwi 4, 4, 2
  039c194  clrldi 5, 5, 32
  039c198  fsel 4, 8, 2, 4
  039c19c  lfsx 31, 3, 4
  039c1a0  fsel 3, 6, 5, 3
  039c1a4  lfs 2, 4(5)
  039c1a8  fcmpu 0, 4, 27
  039c1ac  bt 1, 0x39c1b4
  039c1b0  b 0x39c2d4
  039c1b4  fsubs 5, 3, 4
  039c1b8  fadds 3, 3, 4
  039c1bc  addic 3, 1, 16
  039c1c0  li 6, 2
  039c1c4  addic 5, 3, 512
  039c1c8  addic 4, 3, 496
  039c1cc  mtctr 6
  039c1d0  fdivs 3, 5, 3
  039c1d4  fmuls 4, 3, 3
  039c1d8  stfs 3, 524(1)
  039c1dc  stfs 3, 516(1)
  039c1e0  stfs 3, 520(1)
  039c1e4  stfs 3, 512(1)
  039c1e8  lfs 6, 524(1)
  039c1ec  lfs 8, 516(1)
  039c1f0  lfs 9, 520(1)
  039c1f4  fmuls 5, 4, 4
  039c1f8  fmuls 8, 8, 4
  039c1fc  fmuls 6, 6, 5
  039c200  fmuls 3, 5, 5
  039c204  fmuls 5, 9, 5
  039c208  stfs 8, 516(1)
  039c20c  fmuls 4, 6, 4
  039c210  stfs 5, 520(1)
  039c214  stfs 4, 524(1)
  039c218  lfs 4, 496(3)
  039c21c  fmuls 4, 4, 3
  039c220  stfs 4, 512(3)
  039c224  lfs 4, 4(4)
  039c228  addic 4, 4, 8
  039c22c  fmuls 4, 4, 3
  039c230  addic 3, 3, 8
  039c234  stfs 4, 4(5)
  039c238  addic 5, 5, 8
  039c23c  bdnz 0x39c218
  039c240  li 5, 4
  039c244  ori 3, 1, 0
  039c248  mtctr 5
  039c24c  lis 4, 115
  039c250  addic 5, 3, 512
  039c254  addic 4, 4, 22752
  039c258  ori 7, 5, 0
  039c25c  lfs 3, 512(3)
  039c260  lfs 4, 0(4)
  039c264  fmuls 3, 3, 4
  039c268  lfs 4, 4(4)
  039c26c  addic 4, 4, 8
  039c270  stfs 3, 512(3)
  039c274  lfs 3, 4(5)
  039c278  addic 3, 3, 8
  039c27c  fmuls 3, 3, 4
  039c280  stfs 3, 4(5)
  039c284  addic 5, 5, 8
  039c288  bdnz 0x39c25c
  039c28c  ori 3, 1, 0
  039c290  mtctr 6
  039c294  lfs 3, 512(3)
  039c298  lfs 4, 4(7)
  039c29c  fadds 3, 27, 3
  039c2a0  lfs 5, 8(7)
  039c2a4  addic 3, 3, 16
  039c2a8  lfs 27, 12(7)
  039c2ac  addic 7, 7, 16
  039c2b0  fadds 3, 3, 4
  039c2b4  fadds 3, 3, 5
  039c2b8  fadds 27, 3, 27
  039c2bc  bdnz 0x39c294
  039c2c0  lis 3, 58
  039c2c4  addi 3, 3, -19760
  039c2c8  lfs 3, 172(3)
  039c2cc  fadds 27, 27, 3
  039c2d0  fmadds 27, 27, 31, 2
  039c2d4  lis 3, 58
  039c2d8  lis 30, 114
  039c2dc  fmr 2, 1
  039c2e0  addi 3, 3, -19760
  039c2e4  fmr 1, 7
  039c2e8  lis 29, 114
  039c2ec  fneg 31, 27
  039c2f0  addic 5, 27, 88
  039c2f4  lfs 30, 8(3)
  039c2f8  lfs 29, 12(3)
  039c2fc  lfs 4, -3048(30)
  039c300  lfs 5, -3052(29)
  039c304  fmuls 3, 4, 30
  039c308  fmuls 4, 4, 29
  039c30c  fmuls 5, 5, 30
  039c310  bl 0xff190
  039c314  nop
  039c318  stfs 1, 72(31)
  039c31c  addic 5, 27, 92
  039c320  lfs 1, 68(31)
  039c324  fmr 2, 31
  039c328  lfs 4, -3048(30)
  039c32c  lfs 5, -3052(29)
  039c330  fmuls 3, 4, 30
  039c334  fmuls 4, 4, 29
  039c338  fmuls 5, 5, 30
  039c33c  bl 0xff190
  039c340  nop
  039c344  stfs 1, 68(31)
  039c348  b 0x39cd64
  039c34c  lwz 4, 36(31)
  039c350  lis 3, 58
  039c354  lfs 1, 44(31)
  039c358  lis 5, 114
  039c35c  addi 3, 3, -19760
  039c360  lwz 6, 16(4)
  039c364  stw 6, 148(31)
  039c368  lfs 28, 0(3)
  039c36c  lfs 2, -3064(5)
  039c370  lfs 3, 36(4)
  039c374  fmuls 2, 2, 28
  039c378  fsubs 3, 3, 1
  039c37c  lfs 31, 16(31)
  039c380  lfs 30, 20(31)
  039c384  lfs 29, 24(31)
  039c388  lwz 30, 120(31)
  039c38c  stw 6, 148(31)
  039c390  fmadds 1, 2, 3, 1
  039c394  stfs 1, 44(31)
  039c398  lwz 3, 76(30)
  039c39c  cmpwi 3, 0
  039c3a0  bf 2, 0x39c3d8
  039c3a4  lis 3, 58
  039c3a8  lis 8, 4224
  039c3ac  fmr 1, 28
  039c3b0  addi 4, 3, -19760
  039c3b4  ori 3, 31, 0
  039c3b8  lis 6, -32640
  039c3bc  ori 8, 8, 32896
  039c3c0  ori 6, 6, 32896
  039c3c4  lfs 2, 20(4)
  039c3c8  li 4, 0
  039c3cc  bl 0x1300d0
  039c3d0  nop
  039c3d4  stw 3, 76(30)
  039c3d8  lwz 3, 80(30)
  039c3dc  cmpwi 3, 0
  039c3e0  bf 2, 0x39c418
  039c3e4  lis 3, 58
  039c3e8  lis 8, 4224
  039c3ec  fmr 1, 28
  039c3f0  addi 4, 3, -19760
  039c3f4  ori 3, 31, 0
  039c3f8  lis 6, -32640
  039c3fc  ori 8, 8, 32896
  039c400  ori 6, 6, 32896
  039c404  lfs 2, 20(4)
  039c408  li 4, 1
  039c40c  bl 0x1300d0
  039c410  nop
  039c414  stw 3, 80(30)
  039c418  lwz 3, 48(27)
  039c41c  cmpwi 3, 0
  039c420  bt 2, 0x39c83c
  039c424  lhz 4, 166(3)
  039c428  lwz 5, 72(27)
  039c42c  extsh 4, 4
  039c430  cmpw 4, 5
  039c434  bf 2, 0x39c83c
  039c438  lbz 4, 32(3)
  039c43c  cmpwi 1, 4, 253
  039c440  cmpwi 4, 254
  039c444  cror 2, 2, 6
  039c448  bt 2, 0x39c83c
  039c44c  bl 0xfcccc
  039c450  nop
  039c454  lwz 4, 48(27)
  039c458  lfs 28, 16(27)
  039c45c  lis 5, 114
  039c460  lfs 5, 20(27)
  039c464  cmpwi 3, 0
  039c468  lfs 6, 24(27)
  039c46c  lfs 7, 16(31)
  039c470  lfs 3, 24(4)
  039c474  lfs 1, 16(4)
  039c478  lfs 2, 20(4)
  039c47c  lfs 4, 28(4)
  039c480  lfs 8, -3064(5)
  039c484  bt 2, 0x39c490
  039c488  lfs 9, 16(3)
  039c48c  fadds 3, 3, 9
  039c490  fsubs 9, 1, 28
  039c494  lis 3, 58
  039c498  fsubs 5, 2, 5
  039c49c  addi 4, 3, -19760
  039c4a0  fsubs 6, 3, 6
  039c4a4  lfs 10, 176(4)
  039c4a8  fmadds 9, 9, 10, 1
  039c4ac  fmadds 5, 5, 10, 2
  039c4b0  fmadds 6, 6, 10, 3
  039c4b4  addic 3, 1, 192
  039c4b8  li 5, 0
  039c4bc  ori 6, 31, 0
  039c4c0  fsubs 7, 9, 7
  039c4c4  stfs 7, 0(27)
  039c4c8  lfs 9, 20(31)
  039c4cc  fsubs 5, 5, 9
  039c4d0  stfs 5, 4(27)
  039c4d4  lfs 9, 24(31)
  039c4d8  stfs 4, 12(27)
  039c4dc  lfs 10, 180(4)
  039c4e0  lfs 28, 24(4)
  039c4e4  fsubs 6, 6, 9
  039c4e8  fmadds 8, 8, 10, 28
  039c4ec  fmuls 5, 5, 8
  039c4f0  fmuls 7, 7, 8
  039c4f4  fmuls 6, 6, 8
  039c4f8  stfs 5, 4(27)
  039c4fc  stfs 7, 0(27)
  039c500  stfs 6, 8(27)
  039c504  lfs 5, 16(31)
  039c508  lfs 6, 20(31)
  039c50c  fadds 5, 5, 7
  039c510  lfs 7, 24(31)
  039c514  stfs 5, 16(31)
  039c518  lfs 5, 4(27)
  039c51c  fadds 5, 6, 5
  039c520  stfs 5, 20(31)
  039c524  lfs 5, 8(27)
  039c528  fadds 5, 7, 5
  039c52c  stfs 5, 24(31)
  039c530  stfs 1, 16(27)
  039c534  stfs 2, 20(27)
  039c538  stfs 3, 24(27)
  039c53c  stfs 4, 28(27)
  039c540  lfs 1, 16(31)
  039c544  lfs 2, 20(31)
  039c548  stfs 1, 192(1)
  039c54c  stfs 2, 196(1)
  039c550  lfs 1, 28(31)
  039c554  stfs 1, 204(1)
  039c558  lfs 1, 24(31)
  039c55c  stfs 1, 200(1)
  039c560  lfs 1, 16(4)
  039c564  bl 0x59e20
  039c568  nop
  039c56c  cmpwi 3, 0
  039c570  bt 2, 0x39c854
  039c574  lis 29, 161
  039c578  addic 29, 29, 2368
  039c57c  lwz 3, 24(29)
  039c580  cmpwi 3, 0
  039c584  bt 2, 0x39c5b4
  039c588  lbz 4, 32(3)
  039c58c  cmpwi 1, 4, 253
  039c590  cmpwi 4, 254
  039c594  cror 2, 2, 6
  039c598  bt 2, 0x39c5b4
  039c59c  lwz 4, 48(27)
  039c5a0  cmpw 3, 4
  039c5a4  bf 2, 0x39c5b4
  039c5a8  lhz 4, 166(3)
  039c5ac  cmpwi 4, 0
  039c5b0  bf 2, 0x39c5d8
  039c5b4  lfs 1, 48(29)
  039c5b8  stfs 1, 16(31)
  039c5bc  lfs 1, 52(29)
  039c5c0  stfs 1, 20(31)
  039c5c4  lfs 1, 56(29)
  039c5c8  stfs 1, 24(31)
  039c5cc  lfs 1, 60(29)
  039c5d0  stfs 1, 28(31)
  039c5d4  b 0x39c854
  039c5d8  lwz 3, 36(3)
  039c5dc  li 30, 0
  039c5e0  cmpwi 3, 0
  039c5e4  ori 28, 30, 0
  039c5e8  bt 2, 0x39c5f0
  039c5ec  lhz 30, 70(3)
  039c5f0  clrlwi 30, 30, 24
  039c5f4  fmr 1, 28
  039c5f8  addic 3, 1, 288
  039c5fc  ori 4, 31, 0
  039c600  lis 5, 1
  039c604  bl 0x1057f4
  039c608  nop
  039c60c  lfs 2, 4(27)
  039c610  lfs 1, 0(27)
  039c614  fmuls 2, 2, 2
  039c618  lis 3, 58
  039c61c  vspltisw 2, -16
  039c620  addi 3, 3, -19760
  039c624  fmadds 2, 1, 1, 2
  039c628  lfs 27, 56(3)
  039c62c  li 3, 166
  039c630  lvlx 3, 3, 31
  039c634  fsqrts 3, 2
  039c638  vsrw 2, 3, 2
  039c63c  lwz 3, 24(29)
  039c640  fcmpu 0, 3, 27
  039c644  bf 2, 0x39c654
  039c648  stw 28, 292(1)
  039c64c  stw 28, 288(1)
  039c650  b 0x39c6a8
  039c654  frsqrte 3, 2
  039c658  lis 4, 58
  039c65c  addi 4, 4, -19760
  039c660  lfs 4, 72(4)
  039c664  fmuls 5, 2, 3
  039c668  fmuls 6, 4, 3
  039c66c  fnmsubs 5, 5, 3, 28
  039c670  fmadds 3, 5, 6, 3
  039c674  fmuls 5, 2, 3
  039c678  fmuls 6, 4, 3
  039c67c  fnmsubs 5, 5, 3, 28
  039c680  fmadds 3, 5, 6, 3
  039c684  fmuls 2, 2, 3
  039c688  fmuls 4, 4, 3
  039c68c  fnmsubs 2, 2, 3, 28
  039c690  fmadds 2, 2, 4, 3
  039c694  fmuls 1, 1, 2
  039c698  stfs 1, 288(1)
  039c69c  lfs 1, 4(27)
  039c6a0  fmuls 1, 1, 2
  039c6a4  stfs 1, 292(1)
  039c6a8  li 4, 288
  039c6ac  vsplth 4, 2, 1
  039c6b0  lis 6, 17839
  039c6b4  lis 8, 16256
  039c6b8  li 5, 304
  039c6bc  li 7, 1
  039c6c0  lvx 3, 4, 1
  039c6c4  li 9, 2
  039c6c8  ori 4, 6, 57190
  039c6cc  stw 8, 296(1)
  039c6d0  li 6, 314
  039c6d4  lis 8, 58
  039c6d8  stw 4, 300(1)
  039c6dc  lvx 5, 5, 1
  039c6e0  addi 4, 8, -19760
  039c6e4  stb 7, 312(1)
  039c6e8  li 5, 112
  039c6ec  stb 9, 313(1)
  039c6f0  li 7, 80
  039c6f4  stvehx 4, 6, 1
  039c6f8  li 8, 96
  039c6fc  li 6, 128
  039c700  lvlx 4, 5, 4
  039c704  li 5, 144
  039c708  lvx 6, 7, 4
  039c70c  vspltw 4, 4, 0
  039c710  lvx 7, 8, 4
  039c714  li 7, 320
  039c718  lvx 8, 6, 4
  039c71c  vperm 3, 3, 6, 7
  039c720  li 6, 64
  039c724  vperm 2, 2, 4, 8
  039c728  lvx 4, 5, 4
  039c72c  li 5, 96
  039c730  lvx 6, 7, 1
  039c734  li 4, 80
  039c738  vperm 2, 2, 5, 4
  039c73c  stvx 3, 6, 1
  039c740  ld 6, 64(1)
  039c744  stvx 6, 5, 1
  039c748  ori 5, 6, 0
  039c74c  ld 6, 72(1)
  039c750  stvx 2, 4, 1
  039c754  ld 7, 80(1)
  039c758  ld 8, 88(1)
  039c75c  ld 9, 96(1)
  039c760  ld 10, 104(1)
  039c764  bl 0x105ab4
  039c768  nop
  039c76c  cmpwi 30, 5
  039c770  bf 2, 0x39c854
  039c774  lwz 29, 24(29)
  039c778  cmpwi 29, 0
  039c77c  bt 2, 0x39c7d0
  039c780  lhz 3, 166(29)
  039c784  cmpwi 3, 1238
  039c788  bf 2, 0x39c7d0
  039c78c  lhz 30, 86(27)
  039c790  extsh 3, 30
  039c794  cmpwi 3, 0
  039c798  bf 1, 0x39c7d0
  039c79c  lfs 1, 316(1)
  039c7a0  bl 0x502758
  039c7a4  nop
  039c7a8  ori 4, 3, 0
  039c7ac  li 3, 1
  039c7b0  cmpwi 4, 1
  039c7b4  bt 0, 0x39c7c4
  039c7b8  lfs 1, 316(1)
  039c7bc  bl 0x502758
  039c7c0  nop
  039c7c4  subc 3, 30, 3
  039c7c8  sth 3, 86(27)
  039c7cc  b 0x39c854
  039c7d0  lis 3, 58
  039c7d4  fmr 1, 27
  039c7d8  li 11, 1
  039c7dc  fmr 2, 27
  039c7e0  addi 6, 3, -19760
  039c7e4  fmr 6, 28
  039c7e8  li 7, -1
  039c7ec  ori 3, 31, 0
  039c7f0  li 8, 0
  039c7f4  ori 4, 27, 0
  039c7f8  lfs 3, 160(6)
  039c7fc  li 5, 0
  039c800  lfs 4, 68(6)
  039c804  li 9, 1
  039c808  lfs 5, 164(6)
  039c80c  li 10, 1
  039c810  lfs 7, 168(6)
  039c814  std 11, 144(1)
  039c818  std 11, 160(1)
  039c81c  std 11, 168(1)
  039c820  std 7, 176(1)
  039c824  std 28, 184(1)
  039c828  bl 0x10e030
  039c82c  nop
  039c830  li 3, 4
  039c834  stb 3, 32(31)
  039c838  b 0x39c854
  039c83c  li 3, 2
  039c840  li 4, 0
  039c844  li 5, -1
  039c848  stb 3, 32(31)
  039c84c  stw 4, 48(27)
  039c850  stw 5, 72(27)
  039c854  lfs 4, 16(31)
  039c858  lfs 5, 20(31)
  039c85c  lis 3, 58
  039c860  fsubs 1, 4, 31
  039c864  fsubs 2, 5, 30
  039c868  addi 4, 3, -19760
  039c86c  lis 3, 115
  039c870  addic 3, 3, 22784
  039c874  fabs 3, 1
  039c878  fabs 7, 2
  039c87c  stfs 1, 412(1)
  039c880  stfs 2, 416(1)
  039c884  fsubs 1, 3, 7
  039c888  stfs 1, 420(1)
  039c88c  lwz 5, 412(1)
  039c890  lfs 6, 56(4)
  039c894  lfs 1, 412(1)
  039c898  lwz 4, 416(1)
  039c89c  lfs 2, 416(1)
  039c8a0  lwz 6, 420(1)
  039c8a4  rlwinm 4, 4, 3, 29, 29
  039c8a8  fabs 8, 2
  039c8ac  lfs 2, 420(1)
  039c8b0  fabs 1, 1
  039c8b4  rlwimi 4, 6, 2, 30, 30
  039c8b8  fsub 9, 2, 6
  039c8bc  rlwimi 4, 5, 4, 28, 28
  039c8c0  fsub 10, 2, 6
  039c8c4  ori 5, 3, 0
  039c8c8  rlwimi 5, 4, 2, 26, 28
  039c8cc  slwi 4, 4, 2
  039c8d0  clrldi 5, 5, 32
  039c8d4  fsel 7, 9, 1, 7
  039c8d8  lfsx 1, 3, 4
  039c8dc  lfs 2, 4(5)
  039c8e0  fsel 3, 10, 8, 3
  039c8e4  fcmpu 0, 7, 6
  039c8e8  bt 1, 0x39c8f4
  039c8ec  fmr 1, 6
  039c8f0  b 0x39ca18
  039c8f4  fsubs 8, 3, 7
  039c8f8  fadds 3, 3, 7
  039c8fc  addic 4, 1, 16
  039c900  li 7, 2
  039c904  addic 6, 4, 480
  039c908  addic 5, 4, 464
  039c90c  mtctr 7
  039c910  fdivs 3, 8, 3
  039c914  fmuls 7, 3, 3
  039c918  stfs 3, 492(1)
  039c91c  stfs 3, 484(1)
  039c920  stfs 3, 488(1)
  039c924  stfs 3, 480(1)
  039c928  lfs 9, 492(1)
  039c92c  lfs 10, 484(1)
  039c930  lfs 11, 488(1)
  039c934  fmuls 8, 7, 7
  039c938  fmuls 10, 10, 7
  039c93c  fmuls 9, 9, 8
  039c940  fmuls 3, 8, 8
  039c944  fmuls 8, 11, 8
  039c948  stfs 10, 484(1)
  039c94c  fmuls 7, 9, 7
  039c950  stfs 8, 488(1)
  039c954  stfs 7, 492(1)
  039c958  lfs 7, 464(4)
  039c95c  fmuls 7, 7, 3
  039c960  stfs 7, 480(4)
  039c964  lfs 7, 4(5)
  039c968  addic 5, 5, 8
  039c96c  fmuls 7, 7, 3
  039c970  addic 4, 4, 8
  039c974  stfs 7, 4(6)
  039c978  addic 6, 6, 8
  039c97c  bdnz 0x39c958
  039c980  li 6, 4
  039c984  ori 4, 1, 0
  039c988  mtctr 6
  039c98c  lis 5, 115
  039c990  addic 6, 4, 480
  039c994  addic 5, 5, 22752
  039c998  ori 8, 6, 0
  039c99c  lfs 3, 480(4)
  039c9a0  lfs 7, 0(5)
  039c9a4  fmuls 3, 3, 7
  039c9a8  lfs 7, 4(5)
  039c9ac  addic 5, 5, 8
  039c9b0  stfs 3, 480(4)
  039c9b4  lfs 3, 4(6)
  039c9b8  addic 4, 4, 8
  039c9bc  fmuls 3, 3, 7
  039c9c0  stfs 3, 4(6)
  039c9c4  addic 6, 6, 8
  039c9c8  bdnz 0x39c99c
  039c9cc  ori 4, 1, 0
  039c9d0  fmr 3, 6
  039c9d4  mtctr 7
  039c9d8  lfs 7, 480(4)
  039c9dc  fadds 3, 3, 7
  039c9e0  lfs 7, 4(8)
  039c9e4  addic 4, 4, 16
  039c9e8  lfs 8, 8(8)
  039c9ec  lfs 9, 12(8)
  039c9f0  addic 8, 8, 16
  039c9f4  fadds 3, 3, 7
  039c9f8  fadds 3, 3, 8
  039c9fc  fadds 3, 3, 9
  039ca00  bdnz 0x39c9d8
  039ca04  lis 4, 58
  039ca08  addi 4, 4, -19760
  039ca0c  lfs 7, 172(4)
  039ca10  fadds 3, 3, 7
  039ca14  fmadds 1, 3, 1, 2
  039ca18  fsubs 2, 30, 5
  039ca1c  fsubs 3, 31, 4
  039ca20  fmuls 2, 2, 2
  039ca24  fmadds 2, 3, 3, 2
  039ca28  lfs 3, 24(31)
  039ca2c  stfs 1, 72(31)
  039ca30  fsubs 1, 3, 29
  039ca34  fsqrts 2, 2
  039ca38  stfs 1, 404(1)
  039ca3c  fabs 4, 1
  039ca40  fabs 3, 2
  039ca44  stfs 2, 400(1)
  039ca48  lwz 4, 404(1)
  039ca4c  lfs 2, 404(1)
  039ca50  rlwinm 4, 4, 3, 29, 29
  039ca54  fabs 5, 2
  039ca58  fsubs 1, 3, 4
  039ca5c  stfs 1, 408(1)
  039ca60  lwz 5, 400(1)
  039ca64  lfs 1, 400(1)
  039ca68  lwz 6, 408(1)
  039ca6c  lfs 2, 408(1)
  039ca70  fabs 1, 1
  039ca74  rlwimi 4, 6, 2, 30, 30
  039ca78  fsub 7, 2, 6
  039ca7c  fsub 8, 2, 6
  039ca80  rlwimi 4, 5, 4, 28, 28
  039ca84  ori 5, 3, 0
  039ca88  rlwimi 5, 4, 2, 26, 28
  039ca8c  slwi 4, 4, 2
  039ca90  clrldi 5, 5, 32
  039ca94  fsel 4, 7, 1, 4
  039ca98  lfsx 1, 3, 4
  039ca9c  fsel 3, 8, 5, 3
  039caa0  lfs 2, 4(5)
  039caa4  fcmpu 0, 4, 6
  039caa8  bt 1, 0x39cab0
  039caac  b 0x39cbd0
  039cab0  fsubs 5, 3, 4
  039cab4  fadds 3, 3, 4
  039cab8  addic 3, 1, 16
  039cabc  li 6, 2
  039cac0  addic 4, 3, 432
  039cac4  addic 5, 3, 448
  039cac8  mtctr 6
  039cacc  fdivs 3, 5, 3
  039cad0  fmuls 4, 3, 3
  039cad4  stfs 3, 460(1)
  039cad8  stfs 3, 452(1)
  039cadc  stfs 3, 456(1)
  039cae0  stfs 3, 448(1)
  039cae4  lfs 7, 460(1)
  039cae8  lfs 8, 452(1)
  039caec  lfs 9, 456(1)
  039caf0  fmuls 5, 4, 4
  039caf4  fmuls 8, 8, 4
  039caf8  fmuls 7, 7, 5
  039cafc  fmuls 3, 5, 5
  039cb00  fmuls 5, 9, 5
  039cb04  stfs 8, 452(1)
  039cb08  fmuls 4, 7, 4
  039cb0c  stfs 5, 456(1)
  039cb10  stfs 4, 460(1)
  039cb14  lfs 4, 432(3)
  039cb18  fmuls 4, 4, 3
  039cb1c  stfs 4, 448(3)
  039cb20  lfs 4, 4(4)
  039cb24  addic 3, 3, 8
  039cb28  addic 4, 4, 8
  039cb2c  fmuls 4, 4, 3
  039cb30  stfs 4, 4(5)
  039cb34  addic 5, 5, 8
  039cb38  bdnz 0x39cb14
  039cb3c  li 5, 4
  039cb40  ori 3, 1, 0
  039cb44  mtctr 5
  039cb48  lis 4, 115
  039cb4c  addic 5, 3, 448
  039cb50  addic 4, 4, 22752
  039cb54  ori 7, 5, 0
  039cb58  lfs 3, 448(3)
  039cb5c  lfs 4, 0(4)
  039cb60  fmuls 3, 3, 4
  039cb64  lfs 4, 4(4)
  039cb68  addic 4, 4, 8
  039cb6c  stfs 3, 448(3)
  039cb70  lfs 3, 4(5)
  039cb74  addic 3, 3, 8
  039cb78  fmuls 3, 3, 4
  039cb7c  stfs 3, 4(5)
  039cb80  addic 5, 5, 8
  039cb84  bdnz 0x39cb58
  039cb88  ori 3, 1, 0
  039cb8c  mtctr 6
  039cb90  lfs 3, 448(3)
  039cb94  lfs 4, 4(7)
  039cb98  fadds 3, 6, 3
  039cb9c  lfs 5, 8(7)
  039cba0  lfs 6, 12(7)
  039cba4  addic 3, 3, 16
  039cba8  addic 7, 7, 16
  039cbac  fadds 3, 3, 4
  039cbb0  fadds 3, 3, 5
  039cbb4  fadds 6, 3, 6
  039cbb8  bdnz 0x39cb90
  039cbbc  lis 3, 58
  039cbc0  addi 3, 3, -19760
  039cbc4  lfs 3, 172(3)
  039cbc8  fadds 6, 6, 3
  039cbcc  fmadds 6, 6, 1, 2
  039cbd0  fneg 1, 6
  039cbd4  stfs 1, 68(31)
  039cbd8  b 0x39cd64
  039cbdc  lwz 3, 48(27)
  039cbe0  cmpwi 3, 0
  039cbe4  bt 2, 0x39cd04
  039cbe8  lhz 4, 166(3)
  039cbec  lwz 5, 72(27)
  039cbf0  extsh 4, 4
  039cbf4  cmpw 4, 5
  039cbf8  bf 2, 0x39cd04
  039cbfc  lbz 4, 32(3)
  039cc00  cmpwi 1, 4, 253
  039cc04  cmpwi 4, 254
  039cc08  cror 2, 2, 6
  039cc0c  bt 2, 0x39cd04
  039cc10  bl 0xfcccc
  039cc14  nop
  039cc18  lwz 4, 48(27)
  039cc1c  cmpwi 3, 0
  039cc20  lfs 5, 16(31)
  039cc24  lfs 3, 24(4)
  039cc28  lfs 1, 16(4)
  039cc2c  lfs 2, 20(4)
  039cc30  lfs 4, 28(4)
  039cc34  bt 2, 0x39cc40
  039cc38  lfs 6, 16(3)
  039cc3c  fadds 3, 3, 6
  039cc40  fsubs 5, 1, 5
  039cc44  lis 3, 58
  039cc48  lis 4, 114
  039cc4c  addi 3, 3, -19760
  039cc50  stfs 5, 0(27)
  039cc54  lfs 1, 20(31)
  039cc58  fsubs 1, 2, 1
  039cc5c  stfs 1, 4(27)
  039cc60  lfs 2, 24(31)
  039cc64  stfs 4, 12(27)
  039cc68  lfs 4, 180(3)
  039cc6c  fsubs 2, 3, 2
  039cc70  lfs 6, 24(3)
  039cc74  lfs 7, -3064(4)
  039cc78  fmadds 3, 7, 4, 6
  039cc7c  fmuls 1, 1, 3
  039cc80  fmuls 5, 5, 3
  039cc84  fmuls 2, 2, 3
  039cc88  fmuls 3, 1, 1
  039cc8c  stfs 5, 0(27)
  039cc90  stfs 1, 4(27)
  039cc94  stfs 2, 8(27)
  039cc98  fmadds 3, 5, 5, 3
  039cc9c  fmadds 4, 2, 2, 3
  039cca0  lfs 3, 184(3)
  039cca4  fmuls 3, 7, 3
  039cca8  fsqrts 4, 4
  039ccac  fcmpu 0, 3, 4
  039ccb0  cror 6, 1, 2
  039ccb4  bt 6, 0x39ccd4
  039ccb8  fdivs 3, 3, 4
  039ccbc  fmuls 5, 5, 3
  039ccc0  fmuls 1, 1, 3
  039ccc4  fmuls 2, 2, 3
  039ccc8  stfs 5, 0(27)
  039cccc  stfs 1, 4(27)
  039ccd0  stfs 2, 8(27)
  039ccd4  lfs 1, 16(31)
  039ccd8  lfs 2, 20(31)
  039ccdc  fadds 1, 1, 5
  039cce0  lfs 3, 24(31)
  039cce4  stfs 1, 16(31)
  039cce8  lfs 1, 4(27)
  039ccec  fadds 1, 2, 1
  039ccf0  stfs 1, 20(31)
  039ccf4  lfs 1, 8(27)
  039ccf8  fadds 1, 3, 1
  039ccfc  stfs 1, 24(31)
  039cd00  b 0x39cd0c
  039cd04  li 3, 0
  039cd08  stw 3, 48(27)
  039cd0c  lbz 3, 35(31)
  039cd10  addic 3, 3, -4
  039cd14  clrlwi 4, 3, 24
  039cd18  cmpwi 4, 6
  039cd1c  stb 3, 35(31)
  039cd20  bf 0, 0x39cd64
  039cd24  li 3, 5
  039cd28  stb 3, 32(31)
  039cd2c  b 0x39cd64
  039cd30  lbz 5, 8182(26)
  039cd34  li 4, 0
  039cd38  ori 3, 31, 0
  039cd3c  addic 5, 5, -1
  039cd40  stb 5, 8182(26)
  039cd44  lhz 5, 84(27)
  039cd48  extsh 5, 5
  039cd4c  sldi 5, 5, 2
  039cd50  addc 5, 26, 5
  039cd54  stw 4, 8224(5)
  039cd58  bl 0xefb38
  039cd5c  nop
  039cd60  b 0x39cd7c
  039cd64  lis 3, 58
  039cd68  addi 4, 3, -19760
  039cd6c  ori 3, 31, 0
  039cd70  lfs 1, 188(4)
  039cd74  bl 0x106150
  039cd78  nop
  039cd7c  ld 0, 736(1)
  039cd80  mtlr 0
  039cd84  lfd 24, 656(1)
  039cd88  lfd 25, 664(1)
  039cd8c  lfd 26, 672(1)
  039cd90  lfd 27, 680(1)
  039cd94  lfd 28, 688(1)
  039cd98  lfd 29, 696(1)
  039cd9c  lfd 30, 704(1)
  039cda0  lfd 31, 712(1)
  039cda4  ld 25, 600(1)
  039cda8  ld 26, 608(1)
  039cdac  ld 27, 616(1)
  039cdb0  ld 28, 624(1)
  039cdb4  ld 29, 632(1)
  039cdb8  ld 30, 640(1)
  039cdbc  ld 31, 648(1)
  039cdc0  addi 1, 1, 720
  039cdc4  blr

M479_0039cdcc:   # 0x39cdcc, 0x14 bytes
  039cdcc  lis 3, 132
  039cdd0  lis 4, 1
  039cdd4  addic 3, 3, 12196
  039cdd8  stw 4, 72(3)
  039cddc  blr

M48_0039cdf0:   # 0x39cdf0, 0x3d8 bytes
  039cdf0  stdu 1, -208(1)
  039cdf4  mflr 0
  039cdf8  std 0, 224(1)
  039cdfc  stfd 31, 200(1)
  039ce00  std 30, 184(1)
  039ce04  ori 30, 3, 0
  039ce08  std 31, 192(1)
  039ce0c  cmpwi 5, 0
  039ce10  ori 31, 4, 0
  039ce14  std 29, 176(1)
  039ce18  lwz 3, 120(30)
  039ce1c  bt 2, 0x39cecc
  039ce20  lfs 1, 4(31)
  039ce24  lfs 2, 20(30)
  039ce28  lfs 3, 0(31)
  039ce2c  fsubs 1, 1, 2
  039ce30  lfs 2, 16(30)
  039ce34  fsubs 2, 3, 2
  039ce38  lfs 3, 8(31)
  039ce3c  lfs 4, 24(30)
  039ce40  fsubs 3, 3, 4
  039ce44  lis 3, 132
  039ce48  fmuls 4, 1, 1
  039ce4c  lis 4, 114
  039ce50  lfs 5, 12332(3)
  039ce54  lfs 6, -3052(4)
  039ce58  fmuls 5, 5, 6
  039ce5c  fmadds 4, 2, 2, 4
  039ce60  lis 3, 58
  039ce64  stfs 2, 112(1)
  039ce68  stfs 1, 116(1)
  039ce6c  addi 3, 3, -12832
  039ce70  lfs 7, 12(31)
  039ce74  fmadds 4, 3, 3, 4
  039ce78  stfs 3, 120(1)
  039ce7c  stfs 7, 124(1)
  039ce80  lfs 6, 0(3)
  039ce84  fsqrts 4, 4
  039ce88  fdivs 5, 5, 4
  039ce8c  fsub 7, 6, 4
  039ce90  fsub 8, 6, 4
  039ce94  fsub 9, 6, 4
  039ce98  fsub 31, 4, 6
  039ce9c  fsub 10, 4, 6
  039cea0  fsub 4, 4, 6
  039cea4  fmuls 2, 2, 5
  039cea8  fmuls 1, 1, 5
  039ceac  fmuls 3, 3, 5
  039ceb0  fsel 5, 7, 6, 2
  039ceb4  fsel 7, 8, 6, 1
  039ceb8  fsel 6, 9, 6, 3
  039cebc  fsel 31, 31, 5, 2
  039cec0  fsel 1, 10, 7, 1
  039cec4  fsel 2, 4, 6, 3
  039cec8  b 0x39d140
  039cecc  lfs 1, 0(31)
  039ced0  lfs 2, 16(30)
  039ced4  lfs 3, 4(31)
  039ced8  lfs 4, 20(30)
  039cedc  fsubs 1, 1, 2
  039cee0  lis 4, 58
  039cee4  fsubs 2, 3, 4
  039cee8  addi 4, 4, -12832
  039ceec  lis 6, 115
  039cef0  addic 5, 30, 72
  039cef4  addic 6, 6, 22784
  039cef8  fabs 3, 1
  039cefc  fabs 4, 2
  039cf00  stfs 1, 128(1)
  039cf04  stfs 2, 132(1)
  039cf08  fsubs 1, 3, 4
  039cf0c  stfs 1, 136(1)
  039cf10  lwz 7, 128(1)
  039cf14  lfs 31, 0(4)
  039cf18  lfs 1, 128(1)
  039cf1c  lwz 4, 132(1)
  039cf20  fabs 2, 1
  039cf24  lfs 1, 132(1)
  039cf28  lwz 8, 136(1)
  039cf2c  rlwinm 4, 4, 3, 29, 29
  039cf30  fabs 6, 1
  039cf34  lfs 1, 136(1)
  039cf38  rlwimi 4, 8, 2, 30, 30
  039cf3c  fsub 5, 1, 31
  039cf40  rlwimi 4, 7, 4, 28, 28
  039cf44  fsub 7, 1, 31
  039cf48  ori 7, 6, 0
  039cf4c  rlwimi 7, 4, 2, 26, 28
  039cf50  slwi 4, 4, 2
  039cf54  clrldi 7, 7, 32
  039cf58  fsel 2, 5, 2, 4
  039cf5c  lfsx 1, 6, 4
  039cf60  lfs 5, 4(7)
  039cf64  fsel 3, 7, 6, 3
  039cf68  fcmpu 0, 2, 31
  039cf6c  bt 1, 0x39cf78
  039cf70  fmr 5, 31
  039cf74  b 0x39d0a0
  039cf78  fsubs 4, 3, 2
  039cf7c  fadds 2, 3, 2
  039cf80  addic 8, 1, 16
  039cf84  li 4, 2
  039cf88  addic 7, 8, 124
  039cf8c  addic 6, 8, 140
  039cf90  mtctr 4
  039cf94  fdivs 2, 4, 2
  039cf98  fmuls 4, 2, 2
  039cf9c  stfs 2, 152(1)
  039cfa0  stfs 2, 144(1)
  039cfa4  stfs 2, 148(1)
  039cfa8  stfs 2, 140(1)
  039cfac  lfs 6, 152(1)
  039cfb0  lfs 7, 144(1)
  039cfb4  lfs 8, 148(1)
  039cfb8  fmuls 2, 4, 4
  039cfbc  fmuls 7, 7, 4
  039cfc0  fmuls 6, 6, 2
  039cfc4  fmuls 3, 2, 2
  039cfc8  fmuls 2, 8, 2
  039cfcc  stfs 7, 144(1)
  039cfd0  fmuls 4, 6, 4
  039cfd4  stfs 2, 148(1)
  039cfd8  stfs 4, 152(1)
  039cfdc  lfs 2, 124(8)
  039cfe0  fmuls 2, 2, 3
  039cfe4  stfs 2, 140(8)
  039cfe8  lfs 2, 4(7)
  039cfec  addic 8, 8, 8
  039cff0  addic 7, 7, 8
  039cff4  fmuls 2, 2, 3
  039cff8  stfs 2, 4(6)
  039cffc  addic 6, 6, 8
  039d000  bdnz 0x39cfdc
  039d004  ori 9, 1, 0
  039d008  lis 8, 115
  039d00c  li 10, 4
  039d010  addic 7, 9, 140
  039d014  addic 8, 8, 22752
  039d018  ori 6, 7, 0
  039d01c  mtctr 10
  039d020  lfs 2, 140(9)
  039d024  lfs 3, 0(8)
  039d028  fmuls 2, 2, 3
  039d02c  lfs 3, 4(8)
  039d030  addic 8, 8, 8
  039d034  stfs 2, 140(9)
  039d038  lfs 2, 4(7)
  039d03c  addic 9, 9, 8
  039d040  fmuls 2, 2, 3
  039d044  stfs 2, 4(7)
  039d048  addic 7, 7, 8
  039d04c  bdnz 0x39d020
  039d050  ori 7, 4, 0
  039d054  fmr 2, 31
  039d058  ori 4, 1, 0
  039d05c  mtctr 7
  039d060  lfs 3, 140(4)
  039d064  fadds 2, 2, 3
  039d068  lfs 3, 4(6)
  039d06c  addic 4, 4, 16
  039d070  lfs 4, 8(6)
  039d074  lfs 6, 12(6)
  039d078  addic 6, 6, 16
  039d07c  fadds 2, 2, 3
  039d080  fadds 2, 2, 4
  039d084  fadds 2, 2, 6
  039d088  bdnz 0x39d060
  039d08c  lis 4, 58
  039d090  addi 4, 4, -12832
  039d094  lfs 3, 4(4)
  039d098  fadds 2, 2, 3
  039d09c  fmadds 5, 2, 1, 5
  039d0a0  lis 4, 58
  039d0a4  fmr 1, 5
  039d0a8  lis 6, 114
  039d0ac  addi 4, 4, -12832
  039d0b0  lis 29, 114
  039d0b4  addic 7, 3, 308
  039d0b8  ori 3, 5, 0
  039d0bc  ori 5, 7, 0
  039d0c0  lfs 4, 8(4)
  039d0c4  lfs 2, -3048(6)
  039d0c8  lfs 3, -3052(29)
  039d0cc  fmuls 2, 2, 4
  039d0d0  fmuls 4, 3, 4
  039d0d4  fmr 3, 2
  039d0d8  bl 0x10a2e0
  039d0dc  nop
  039d0e0  lfs 1, 196(30)
  039d0e4  lfs 2, 192(30)
  039d0e8  fmuls 4, 1, 1
  039d0ec  lfs 3, 200(30)
  039d0f0  lis 3, 132
  039d0f4  lfs 5, -3052(29)
  039d0f8  lfs 6, 12328(3)
  039d0fc  fmadds 4, 2, 2, 4
  039d100  fmuls 5, 6, 5
  039d104  fmadds 4, 3, 3, 4
  039d108  fsqrts 4, 4
  039d10c  fcmpu 0, 4, 31
  039d110  bf 2, 0x39d124
  039d114  fmr 2, 31
  039d118  lfs 3, 204(30)
  039d11c  fmr 1, 2
  039d120  b 0x39d13c
  039d124  fdivs 4, 5, 4
  039d128  lfs 5, 204(30)
  039d12c  fmuls 31, 2, 4
  039d130  fmuls 2, 3, 4
  039d134  fmuls 1, 1, 4
  039d138  fmr 3, 5
  039d13c  stfs 3, 124(1)
  039d140  lis 3, 58
  039d144  stfs 31, 112(1)
  039d148  stfs 1, 116(1)
  039d14c  addic 4, 1, 112
  039d150  addi 5, 3, -12832
  039d154  stfs 2, 120(1)
  039d158  ori 3, 30, 0
  039d15c  li 8, 0
  039d160  lfs 1, 12(5)
  039d164  lfs 3, 0(5)
  039d168  fmr 2, 1
  039d16c  bl 0x1009b0
  039d170  nop
  039d174  lfs 1, 20(30)
  039d178  lfs 2, 4(31)
  039d17c  lfs 3, 16(30)
  039d180  fsubs 1, 1, 2
  039d184  lfs 2, 0(31)
  039d188  fsubs 2, 3, 2
  039d18c  lfs 3, 24(30)
  039d190  lfs 4, 8(31)
  039d194  fsubs 3, 3, 4
  039d198  fmuls 1, 1, 1
  039d19c  fmadds 1, 2, 2, 1
  039d1a0  fmadds 1, 3, 3, 1
  039d1a4  fsqrts 1, 1
  039d1a8  ld 0, 224(1)
  039d1ac  mtlr 0
  039d1b0  lfd 31, 200(1)
  039d1b4  ld 29, 176(1)
  039d1b8  ld 30, 184(1)
  039d1bc  ld 31, 192(1)
  039d1c0  addi 1, 1, 208
  039d1c4  blr
