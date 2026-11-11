# game/update/moby808.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M808_0046a680:   # 0x46a680, 0x58 bytes
  046a680  stdu 1, -128(1)
  046a684  mflr 0
  046a688  std 0, 144(1)
  046a68c  std 31, 120(1)
  046a690  ori 31, 3, 0
  046a694  bl 0x48a718
  046a698  nop
  046a69c  cmpwi 3, 0
  046a6a0  bt 2, 0x46a6b0
  046a6a4  li 4, 9
  046a6a8  stb 4, 32(31)
  046a6ac  b 0x46a6c4
  046a6b0  lbz 4, 32(31)
  046a6b4  cmpwi 4, 9
  046a6b8  bf 2, 0x46a6c4
  046a6bc  li 4, 5
  046a6c0  stb 4, 32(31)
  046a6c4  ld 0, 144(1)
  046a6c8  mtlr 0
  046a6cc  ld 31, 120(1)
  046a6d0  addi 1, 1, 128
  046a6d4  blr

M808_0046a6d8:   # 0x46a6d8, 0x58 bytes
  046a6d8  stdu 1, -128(1)
  046a6dc  mflr 0
  046a6e0  std 0, 144(1)
  046a6e4  std 31, 120(1)
  046a6e8  ori 31, 3, 0
  046a6ec  bl 0x48aa70
  046a6f0  nop
  046a6f4  cmpwi 3, 0
  046a6f8  bt 2, 0x46a708
  046a6fc  li 4, 9
  046a700  stb 4, 32(31)
  046a704  b 0x46a71c
  046a708  lbz 4, 32(31)
  046a70c  cmpwi 4, 9
  046a710  bf 2, 0x46a71c
  046a714  li 4, 5
  046a718  stb 4, 32(31)
  046a71c  ld 0, 144(1)
  046a720  mtlr 0
  046a724  ld 31, 120(1)
  046a728  addi 1, 1, 128
  046a72c  blr

M808_0046a730:   # 0x46a730, 0x58 bytes
  046a730  stdu 1, -128(1)
  046a734  mflr 0
  046a738  std 0, 144(1)
  046a73c  std 31, 120(1)
  046a740  ori 31, 3, 0
  046a744  bl 0x48acb8
  046a748  nop
  046a74c  cmpwi 3, 0
  046a750  bt 2, 0x46a760
  046a754  li 4, 9
  046a758  stb 4, 32(31)
  046a75c  b 0x46a774
  046a760  lbz 4, 32(31)
  046a764  cmpwi 4, 9
  046a768  bf 2, 0x46a774
  046a76c  li 4, 5
  046a770  stb 4, 32(31)
  046a774  ld 0, 144(1)
  046a778  mtlr 0
  046a77c  ld 31, 120(1)
  046a780  addi 1, 1, 128
  046a784  blr

M808_0046a788:   # 0x46a788, 0x38 bytes
  046a788  stdu 1, -128(1)
  046a78c  mflr 0
  046a790  std 0, 144(1)
  046a794  std 31, 120(1)
  046a798  ori 31, 3, 0
  046a79c  bl 0x48afe8
  046a7a0  nop
  046a7a4  li 4, 9
  046a7a8  stb 4, 32(31)
  046a7ac  ld 0, 144(1)
  046a7b0  mtlr 0
  046a7b4  ld 31, 120(1)
  046a7b8  addi 1, 1, 128
  046a7bc  blr

M808_0046a7c0:   # 0x46a7c0, 0x40 bytes
  046a7c0  cmpwi 3, 0
  046a7c4  bt 2, 0x46a7f8
  046a7c8  li 4, 0
  046a7cc  lwz 3, 120(3)
  046a7d0  li 5, 0
  046a7d4  subc 4, 4, 3
  046a7d8  addic 3, 3, 208
  046a7dc  cntlzw 4, 4
  046a7e0  subc 5, 5, 3
  046a7e4  sldi 4, 4, 58
  046a7e8  sradi 4, 4, 63
  046a7ec  and 4, 4, 5
  046a7f0  addc 3, 3, 4
  046a7f4  b 0x46a7fc
  046a7f8  li 3, 0
  046a7fc  blr

M808_0046a800:   # 0x46a800, 0x14 bytes
  046a800  lis 3, 135
  046a804  lis 4, 1
  046a808  addic 3, 3, 30128
  046a80c  stw 4, 72(3)
  046a810  blr

M808_0046a830:   # 0x46a830, 0x640 bytes
  046a830  stdu 1, -208(1)
  046a834  mflr 0
  046a838  std 0, 224(1)
  046a83c  stfd 31, 200(1)
  046a840  std 31, 192(1)
  046a844  lbz 4, 32(3)
  046a848  std 30, 184(1)
  046a84c  ori 31, 3, 0
  046a850  lwz 30, 120(3)
  046a854  std 29, 176(1)
  046a858  std 28, 168(1)
  046a85c  cmpwi 4, 0
  046a860  bt 2, 0x46ae4c
  046a864  lis 3, 71
  046a868  li 6, 0
  046a86c  addi 7, 3, -22504
  046a870  ori 3, 31, 0
  046a874  lis 4, 51
  046a878  li 5, 0
  046a87c  lfs 31, 0(7)
  046a880  stw 6, 116(1)
  046a884  bl 0x10675c
  046a888  nop
  046a88c  ori 29, 3, 0
  046a890  ori 3, 31, 0
  046a894  addic 5, 30, 32
  046a898  li 6, 0
  046a89c  addic 7, 1, 112
  046a8a0  li 9, 0
  046a8a4  addic 8, 1, 116
  046a8a8  ori 4, 29, 0
  046a8ac  li 10, 4
  046a8b0  bl 0x106840
  046a8b4  nop
  046a8b8  lwz 3, 112(1)
  046a8bc  cmpwi 3, 1
  046a8c0  bt 2, 0x46ac94
  046a8c4  lbz 3, 32(31)
  046a8c8  cmpwi 3, 8
  046a8cc  bt 2, 0x46ac94
  046a8d0  lwz 3, 116(1)
  046a8d4  lfs 1, 116(1)
  046a8d8  cmpwi 3, 0
  046a8dc  bt 2, 0x46ac94
  046a8e0  lfs 2, 32(30)
  046a8e4  lis 3, 16128
  046a8e8  fsubs 1, 2, 1
  046a8ec  lis 4, 135
  046a8f0  lis 5, 114
  046a8f4  stw 3, 152(30)
  046a8f8  lis 6, 135
  046a8fc  lis 3, 135
  046a900  lis 7, 114
  046a904  lis 8, 71
  046a908  li 9, 0
  046a90c  fcmpu 0, 1, 31
  046a910  stfs 1, 32(30)
  046a914  lfs 2, 30240(4)
  046a918  lfs 3, -3048(5)
  046a91c  li 5, 512
  046a920  fmuls 2, 2, 3
  046a924  lis 4, 135
  046a928  stw 5, 144(30)
  046a92c  stfs 2, 128(30)
  046a930  lfs 2, 30244(3)
  046a934  fmuls 2, 2, 3
  046a938  addi 3, 8, -22504
  046a93c  stfs 2, 132(30)
  046a940  lfs 1, 30248(6)
  046a944  lfs 2, -3052(7)
  046a948  fmuls 1, 1, 2
  046a94c  stfs 1, 136(30)
  046a950  lfs 1, 30252(4)
  046a954  stb 9, 173(30)
  046a958  fmuls 1, 1, 2
  046a95c  stfs 1, 140(30)
  046a960  lfs 1, 4(3)
  046a964  fmuls 1, 2, 1
  046a968  stfs 1, 188(30)
  046a96c  bt 1, 0x46aa30
  046a970  li 28, 0
  046a974  lhz 4, 52(31)
  046a978  li 3, 41
  046a97c  addic 5, 1, 120
  046a980  rlwimi 4, 28, 0, 19, 19
  046a984  addic 6, 30, 136
  046a988  stw 3, 148(30)
  046a98c  addic 7, 30, 140
  046a990  sth 4, 52(31)
  046a994  lfs 1, 16(29)
  046a998  lfs 2, 24(29)
  046a99c  stfs 1, 48(1)
  046a9a0  stfs 2, 56(1)
  046a9a4  lfs 1, 20(29)
  046a9a8  lfs 2, 28(29)
  046a9ac  stfs 1, 52(1)
  046a9b0  stfs 2, 60(1)
  046a9b4  ld 3, 48(1)
  046a9b8  ld 4, 56(1)
  046a9bc  bl 0x107de8
  046a9c0  nop
  046a9c4  ori 3, 31, 0
  046a9c8  lfs 1, 120(1)
  046a9cc  addic 4, 30, 112
  046a9d0  li 6, 14
  046a9d4  li 7, 1
  046a9d8  li 8, 0
  046a9dc  bl 0x10ad80
  046a9e0  nop
  046a9e4  lis 3, 16608
  046a9e8  stw 28, 148(31)
  046a9ec  lis 5, 16736
  046a9f0  li 6, 8
  046a9f4  li 7, 120
  046a9f8  stw 3, 192(30)
  046a9fc  stw 5, 196(30)
  046aa00  addic 4, 30, 96
  046aa04  ori 3, 31, 0
  046aa08  stb 6, 32(31)
  046aa0c  stb 7, 103(30)
  046aa10  bl 0x10c808
  046aa14  nop
  046aa18  ori 3, 31, 0
  046aa1c  li 4, 0
  046aa20  li 5, -1
  046aa24  bl 0xfd8d0
  046aa28  nop
  046aa2c  b 0x46ac94
  046aa30  li 3, 9
  046aa34  addic 5, 1, 124
  046aa38  addic 6, 30, 136
  046aa3c  addic 7, 30, 140
  046aa40  stw 3, 148(30)
  046aa44  lfs 1, 16(29)
  046aa48  lfs 2, 24(29)
  046aa4c  stfs 1, 48(1)
  046aa50  stfs 2, 56(1)
  046aa54  lfs 1, 20(29)
  046aa58  lfs 2, 28(29)
  046aa5c  stfs 1, 52(1)
  046aa60  stfs 2, 60(1)
  046aa64  ld 3, 48(1)
  046aa68  ld 4, 56(1)
  046aa6c  bl 0x107de8
  046aa70  nop
  046aa74  lwz 4, 16(29)
  046aa78  lwz 3, 20(29)
  046aa7c  lfs 1, 16(29)
  046aa80  lfs 2, 20(29)
  046aa84  fabs 3, 1
  046aa88  fabs 2, 2
  046aa8c  rlwinm 5, 3, 3, 29, 29
  046aa90  lis 6, 115
  046aa94  addic 3, 30, 112
  046aa98  addic 6, 6, 22784
  046aa9c  fsubs 1, 3, 2
  046aaa0  stfs 1, 128(1)
  046aaa4  lwz 7, 128(1)
  046aaa8  lfs 1, 128(1)
  046aaac  rlwimi 5, 7, 2, 30, 30
  046aab0  fsub 4, 1, 31
  046aab4  fsub 5, 1, 31
  046aab8  rlwimi 5, 4, 4, 28, 28
  046aabc  ori 4, 6, 0
  046aac0  rlwimi 4, 5, 2, 26, 28
  046aac4  slwi 5, 5, 2
  046aac8  clrldi 4, 4, 32
  046aacc  fsel 4, 4, 3, 2
  046aad0  lfsx 1, 6, 5
  046aad4  fsel 3, 5, 2, 3
  046aad8  lfs 2, 4(4)
  046aadc  fcmpu 0, 4, 31
  046aae0  bt 1, 0x46aae8
  046aae4  b 0x46ac08
  046aae8  fsubs 5, 3, 4
  046aaec  fadds 3, 3, 4
  046aaf0  addic 4, 1, 16
  046aaf4  li 8, 2
  046aaf8  addic 6, 4, 132
  046aafc  addic 5, 4, 116
  046ab00  mtctr 8
  046ab04  fdivs 3, 5, 3
  046ab08  fmuls 4, 3, 3
  046ab0c  stfs 3, 144(1)
  046ab10  stfs 3, 136(1)
  046ab14  stfs 3, 140(1)
  046ab18  stfs 3, 132(1)
  046ab1c  lfs 6, 144(1)
  046ab20  lfs 7, 136(1)
  046ab24  lfs 8, 140(1)
  046ab28  fmuls 5, 4, 4
  046ab2c  fmuls 7, 7, 4
  046ab30  fmuls 6, 6, 5
  046ab34  fmuls 3, 5, 5
  046ab38  fmuls 5, 8, 5
  046ab3c  stfs 7, 136(1)
  046ab40  fmuls 4, 6, 4
  046ab44  stfs 5, 140(1)
  046ab48  stfs 4, 144(1)
  046ab4c  lfs 4, 116(4)
  046ab50  fmuls 4, 4, 3
  046ab54  stfs 4, 132(4)
  046ab58  lfs 4, 4(5)
  046ab5c  addic 5, 5, 8
  046ab60  fmuls 4, 4, 3
  046ab64  addic 4, 4, 8
  046ab68  stfs 4, 4(6)
  046ab6c  addic 6, 6, 8
  046ab70  bdnz 0x46ab4c
  046ab74  li 6, 4
  046ab78  ori 4, 1, 0
  046ab7c  mtctr 6
  046ab80  lis 5, 115
  046ab84  addic 6, 4, 132
  046ab88  addic 5, 5, 22752
  046ab8c  ori 7, 6, 0
  046ab90  lfs 3, 132(4)
  046ab94  lfs 4, 0(5)
  046ab98  fmuls 3, 3, 4
  046ab9c  lfs 4, 4(5)
  046aba0  addic 5, 5, 8
  046aba4  stfs 3, 132(4)
  046aba8  lfs 3, 4(6)
  046abac  addic 4, 4, 8
  046abb0  fmuls 3, 3, 4
  046abb4  stfs 3, 4(6)
  046abb8  addic 6, 6, 8
  046abbc  bdnz 0x46ab90
  046abc0  ori 4, 1, 0
  046abc4  mtctr 8
  046abc8  lfs 3, 132(4)
  046abcc  lfs 4, 4(7)
  046abd0  fadds 3, 31, 3
  046abd4  lfs 5, 8(7)
  046abd8  addic 4, 4, 16
  046abdc  lfs 31, 12(7)
  046abe0  addic 7, 7, 16
  046abe4  fadds 3, 3, 4
  046abe8  fadds 3, 3, 5
  046abec  fadds 31, 3, 31
  046abf0  bdnz 0x46abc8
  046abf4  lis 4, 71
  046abf8  addi 4, 4, -22504
  046abfc  lfs 3, 8(4)
  046ac00  fadds 31, 31, 3
  046ac04  fmadds 31, 31, 1, 2
  046ac08  ori 4, 3, 0
  046ac0c  ori 3, 31, 0
  046ac10  fmr 1, 31
  046ac14  li 6, 11
  046ac18  li 7, 1
  046ac1c  li 8, 0
  046ac20  bl 0x10ad80
  046ac24  nop
  046ac28  lis 3, 16544
  046ac2c  lis 4, 16672
  046ac30  vspltisw 2, -1
  046ac34  li 6, 7
  046ac38  lis 7, 71
  046ac3c  stw 3, 192(30)
  046ac40  li 5, 12
  046ac44  li 3, 250
  046ac48  stw 4, 196(30)
  046ac4c  addi 4, 7, -22504
  046ac50  stb 6, 32(31)
  046ac54  lis 6, 114
  046ac58  vslw 2, 2, 2
  046ac5c  stb 3, 103(30)
  046ac60  li 3, -3056
  046ac64  <unknown>
  046ac68  li 5, 38
  046ac6c  vspltw 3, 3, 0
  046ac70  addic 4, 30, 96
  046ac74  <unknown>
  046ac78  vmaddfp 2, 4, 3, 2
  046ac7c  ori 3, 31, 0
  046ac80  vctsxs 2, 2, 0
  046ac84  vsplth 2, 2, 1
  046ac88  stvehx 2, 5, 30
  046ac8c  bl 0x10c808
  046ac90  nop
  046ac94  li 5, 255
  046ac98  addic 4, 30, 96
  046ac9c  ori 3, 31, 0
  046aca0  stb 5, 164(31)
  046aca4  bl 0x10c9a0
  046aca8  nop
  046acac  lbz 4, 32(31)
  046acb0  lis 5, 165
  046acb4  addic 3, 30, 208
  046acb8  cmpwi 4, 1
  046acbc  addic 4, 5, 7136
  046acc0  bf 2, 0x46ad0c
  046acc4  ori 5, 4, 0
  046acc8  lwz 6, 308(30)
  046accc  ori 4, 3, 0
  046acd0  lis 3, 71
  046acd4  slwi 6, 6, 2
  046acd8  addi 3, 3, -22504
  046acdc  extsw 7, 6
  046ace0  li 6, 0
  046ace4  lfs 1, 16(3)
  046ace8  lwzx 5, 5, 7
  046acec  ori 3, 31, 0
  046acf0  li 7, 0
  046acf4  addic 8, 5, 16
  046acf8  lwz 9, 0(5)
  046acfc  extsw 9, 9
  046ad00  bl 0x111ba0
  046ad04  nop
  046ad08  b 0x46ad50
  046ad0c  ori 5, 4, 0
  046ad10  lwz 6, 304(30)
  046ad14  ori 4, 3, 0
  046ad18  lis 3, 71
  046ad1c  slwi 6, 6, 2
  046ad20  addi 3, 3, -22504
  046ad24  extsw 7, 6
  046ad28  li 6, 0
  046ad2c  lfs 1, 20(3)
  046ad30  lwzx 5, 5, 7
  046ad34  ori 3, 31, 0
  046ad38  li 7, 0
  046ad3c  addic 8, 5, 16
  046ad40  lwz 9, 0(5)
  046ad44  extsw 9, 9
  046ad48  bl 0x111ba0
  046ad4c  nop
  046ad50  lwz 4, 272(30)
  046ad54  cmpwi 4, 0
  046ad58  bf 2, 0x46ad8c
  046ad5c  lis 3, 151
  046ad60  addic 3, 3, -25376
  046ad64  lfs 1, 128(3)
  046ad68  lwz 4, 8320(3)
  046ad6c  stfs 1, 208(30)
  046ad70  lfs 1, 132(3)
  046ad74  stw 4, 272(30)
  046ad78  stfs 1, 212(30)
  046ad7c  lfs 1, 136(3)
  046ad80  stfs 1, 216(30)
  046ad84  lfs 1, 140(3)
  046ad88  stfs 1, 220(30)
  046ad8c  lwz 3, 316(30)
  046ad90  cmpwi 3, -1
  046ad94  bf 1, 0x46ae4c
  046ad98  lis 5, 164
  046ad9c  slwi 3, 3, 8
  046ada0  lwz 5, -28512(5)
  046ada4  addc 3, 5, 3
  046ada8  clrldi 3, 3, 32
  046adac  cmpwi 3, 0
  046adb0  bt 2, 0x46adc8
  046adb4  lbz 5, 32(3)
  046adb8  cmpwi 5, 254
  046adbc  cmpwi 1, 5, 253
  046adc0  bt 2, 0x46adc8
  046adc4  bf 6, 0x46add4
  046adc8  li 3, -1
  046adcc  stw 3, 316(30)
  046add0  b 0x46ae4c
  046add4  lfs 1, 20(31)
  046add8  lfs 2, 20(3)
  046addc  lfs 3, 20(4)
  046ade0  fsubs 2, 1, 2
  046ade4  fsubs 1, 1, 3
  046ade8  lfs 4, 16(31)
  046adec  lfs 3, 16(3)
  046adf0  lfs 5, 16(4)
  046adf4  fsubs 3, 4, 3
  046adf8  fsubs 4, 4, 5
  046adfc  fmuls 2, 2, 2
  046ae00  fmuls 1, 1, 1
  046ae04  fmadds 2, 3, 3, 2
  046ae08  fmadds 1, 4, 4, 1
  046ae0c  fsqrts 2, 2
  046ae10  fsqrts 1, 1
  046ae14  fcmpu 0, 2, 1
  046ae18  cror 6, 1, 2
  046ae1c  bt 6, 0x46ae4c
  046ae20  stw 3, 272(30)
  046ae24  lfs 1, 16(3)
  046ae28  li 4, 1
  046ae2c  stfs 1, 208(30)
  046ae30  lfs 1, 20(3)
  046ae34  stfs 1, 212(30)
  046ae38  lfs 1, 24(3)
  046ae3c  stfs 1, 216(30)
  046ae40  lfs 1, 28(3)
  046ae44  stw 4, 276(30)
  046ae48  stfs 1, 220(30)
  046ae4c  ld 0, 224(1)
  046ae50  mtlr 0
  046ae54  lfd 31, 200(1)
  046ae58  ld 28, 168(1)
  046ae5c  ld 29, 176(1)
  046ae60  ld 30, 184(1)
  046ae64  ld 31, 192(1)
  046ae68  addi 1, 1, 208
  046ae6c  blr

UpdateMoby_808:   # 0x46aec0, 0x146c bytes
  046aec0  stdu 1, -528(1)
  046aec4  mflr 0
  046aec8  std 0, 544(1)
  046aecc  stfd 27, 488(1)
  046aed0  stfd 28, 496(1)
  046aed4  stfd 29, 504(1)
  046aed8  stfd 30, 512(1)
  046aedc  stfd 31, 520(1)
  046aee0  std 31, 480(1)
  046aee4  std 30, 472(1)
  046aee8  ori 31, 3, 0
  046aeec  std 29, 464(1)
  046aef0  std 28, 456(1)
  046aef4  std 27, 448(1)
  046aef8  lwz 30, 120(31)
  046aefc  bl 0x46a830
  046af00  lbz 4, 32(31)
  046af04  lwz 3, 272(30)
  046af08  cmpwi 4, 3
  046af0c  bt 1, 0x46af38
  046af10  cmpwi 4, 0
  046af14  bt 1, 0x46af24
  046af18  cmpwi 4, -1
  046af1c  bf 1, 0x46c2f4
  046af20  b 0x46af68
  046af24  cmpwi 4, 1
  046af28  bf 1, 0x46b024
  046af2c  cmpwi 4, 2
  046af30  bf 1, 0x46b084
  046af34  b 0x46b3e4
  046af38  cmpwi 4, 6
  046af3c  bt 1, 0x46af54
  046af40  cmpwi 4, 4
  046af44  bf 1, 0x46b644
  046af48  cmpwi 4, 5
  046af4c  bf 1, 0x46b8b0
  046af50  b 0x46bf70
  046af54  cmpwi 4, 7
  046af58  bf 1, 0x46c23c
  046af5c  cmpwi 4, 8
  046af60  bf 1, 0x46c2b0
  046af64  b 0x46c2f4
  046af68  lfs 1, 16(31)
  046af6c  li 3, 2
  046af70  stfs 1, 288(30)
  046af74  lfs 1, 20(31)
  046af78  stfs 1, 292(30)
  046af7c  lfs 1, 24(31)
  046af80  stfs 1, 296(30)
  046af84  lfs 1, 28(31)
  046af88  stfs 1, 300(30)
  046af8c  bl 0xfc620
  046af90  nop
  046af94  cmpwi 3, 0
  046af98  bt 2, 0x46afb0
  046af9c  lis 3, 0
  046afa0  lhz 4, 52(31)
  046afa4  ori 3, 3, 32768
  046afa8  or 3, 4, 3
  046afac  sth 3, 52(31)
  046afb0  lwz 3, 312(30)
  046afb4  cmpwi 3, -1
  046afb8  bf 1, 0x46b018
  046afbc  lwz 4, 308(30)
  046afc0  cmpwi 4, -1
  046afc4  bf 2, 0x46afd8
  046afc8  ori 3, 31, 0
  046afcc  bl 0xefb38
  046afd0  nop
  046afd4  b 0x46c2f4
  046afd8  lis 4, 165
  046afdc  slwi 3, 3, 2
  046afe0  addic 4, 4, 7136
  046afe4  extsw 3, 3
  046afe8  li 5, 1
  046afec  lwzx 3, 4, 3
  046aff0  lfs 1, 16(3)
  046aff4  stfs 1, 16(31)
  046aff8  lfs 1, 20(3)
  046affc  stfs 1, 20(31)
  046b000  lfs 1, 24(3)
  046b004  stfs 1, 24(31)
  046b008  lfs 1, 28(3)
  046b00c  stb 5, 32(31)
  046b010  stfs 1, 28(31)
  046b014  b 0x46c2f4
  046b018  li 3, 3
  046b01c  stb 3, 32(31)
  046b020  b 0x46c2f4
  046b024  lwz 3, 276(30)
  046b028  cmpwi 3, 2
  046b02c  bt 2, 0x46c2f4
  046b030  li 3, 2
  046b034  lbz 4, 83(31)
  046b038  cmpwi 4, 5
  046b03c  stb 3, 32(31)
  046b040  bt 2, 0x46c2f4
  046b044  lis 3, 71
  046b048  lis 4, 114
  046b04c  addi 3, 3, -20880
  046b050  li 5, 0
  046b054  lfs 1, 0(3)
  046b058  lfs 2, -3056(4)
  046b05c  ori 3, 31, 0
  046b060  fmuls 1, 2, 1
  046b064  li 4, 5
  046b068  fctiwz 1, 1
  046b06c  stfd 1, 432(1)
  046b070  lwz 6, 436(1)
  046b074  extsw 6, 6
  046b078  bl 0xfddc0
  046b07c  nop
  046b080  b 0x46c2f4
  046b084  lis 3, 71
  046b088  li 4, 0
  046b08c  addi 3, 3, -20880
  046b090  lis 5, 165
  046b094  addic 5, 5, 7136
  046b098  lfs 28, 4(3)
  046b09c  stw 4, 160(1)
  046b0a0  lwz 3, 312(30)
  046b0a4  lfs 1, 16(31)
  046b0a8  slwi 3, 3, 2
  046b0ac  extsw 3, 3
  046b0b0  lwzx 3, 5, 3
  046b0b4  lfs 2, 20(31)
  046b0b8  lwz 4, 0(3)
  046b0bc  slwi 4, 4, 4
  046b0c0  addc 3, 3, 4
  046b0c4  clrldi 3, 3, 32
  046b0c8  lis 4, 115
  046b0cc  lfs 31, 0(3)
  046b0d0  lfs 30, 4(3)
  046b0d4  fsubs 1, 31, 1
  046b0d8  lfs 29, 8(3)
  046b0dc  fsubs 2, 30, 2
  046b0e0  addic 4, 4, 22784
  046b0e4  addic 3, 31, 72
  046b0e8  fabs 3, 1
  046b0ec  fabs 4, 2
  046b0f0  stfs 1, 224(1)
  046b0f4  stfs 2, 228(1)
  046b0f8  fsubs 1, 3, 4
  046b0fc  stfs 1, 232(1)
  046b100  lwz 5, 224(1)
  046b104  lfs 1, 224(1)
  046b108  lwz 6, 228(1)
  046b10c  lfs 2, 228(1)
  046b110  fabs 1, 1
  046b114  lwz 7, 232(1)
  046b118  rlwinm 6, 6, 3, 29, 29
  046b11c  fabs 5, 2
  046b120  lfs 2, 232(1)
  046b124  rlwimi 6, 7, 2, 30, 30
  046b128  fsub 6, 2, 28
  046b12c  fsub 7, 2, 28
  046b130  rlwimi 6, 5, 4, 28, 28
  046b134  ori 5, 4, 0
  046b138  rlwimi 5, 6, 2, 26, 28
  046b13c  slwi 6, 6, 2
  046b140  clrldi 5, 5, 32
  046b144  fsel 4, 6, 1, 4
  046b148  lfsx 1, 4, 6
  046b14c  lfs 2, 4(5)
  046b150  fsel 3, 7, 5, 3
  046b154  fcmpu 0, 4, 28
  046b158  bt 1, 0x46b164
  046b15c  fmr 1, 28
  046b160  b 0x46b288
  046b164  fsubs 5, 3, 4
  046b168  fadds 3, 3, 4
  046b16c  addic 4, 1, 16
  046b170  li 8, 2
  046b174  addic 5, 4, 380
  046b178  addic 6, 4, 396
  046b17c  mtctr 8
  046b180  fdivs 3, 5, 3
  046b184  fmuls 4, 3, 3
  046b188  stfs 3, 408(1)
  046b18c  stfs 3, 400(1)
  046b190  stfs 3, 404(1)
  046b194  stfs 3, 396(1)
  046b198  lfs 6, 408(1)
  046b19c  lfs 7, 400(1)
  046b1a0  lfs 8, 404(1)
  046b1a4  fmuls 5, 4, 4
  046b1a8  fmuls 7, 7, 4
  046b1ac  fmuls 6, 6, 5
  046b1b0  fmuls 3, 5, 5
  046b1b4  fmuls 5, 8, 5
  046b1b8  stfs 7, 400(1)
  046b1bc  fmuls 4, 6, 4
  046b1c0  stfs 5, 404(1)
  046b1c4  stfs 4, 408(1)
  046b1c8  lfs 4, 380(4)
  046b1cc  fmuls 4, 4, 3
  046b1d0  stfs 4, 396(4)
  046b1d4  lfs 4, 4(5)
  046b1d8  addic 4, 4, 8
  046b1dc  addic 5, 5, 8
  046b1e0  fmuls 4, 4, 3
  046b1e4  stfs 4, 4(6)
  046b1e8  addic 6, 6, 8
  046b1ec  bdnz 0x46b1c8
  046b1f0  li 6, 4
  046b1f4  ori 4, 1, 0
  046b1f8  mtctr 6
  046b1fc  lis 5, 115
  046b200  addic 6, 4, 396
  046b204  addic 5, 5, 22752
  046b208  ori 7, 6, 0
  046b20c  lfs 3, 396(4)
  046b210  lfs 4, 0(5)
  046b214  fmuls 3, 3, 4
  046b218  lfs 4, 4(5)
  046b21c  addic 5, 5, 8
  046b220  stfs 3, 396(4)
  046b224  lfs 3, 4(6)
  046b228  addic 4, 4, 8
  046b22c  fmuls 3, 3, 4
  046b230  stfs 3, 4(6)
  046b234  addic 6, 6, 8
  046b238  bdnz 0x46b20c
  046b23c  fmr 3, 28
  046b240  ori 4, 1, 0
  046b244  mtctr 8
  046b248  lfs 4, 396(4)
  046b24c  fadds 3, 3, 4
  046b250  addic 4, 4, 16
  046b254  lfs 4, 4(7)
  046b258  lfs 5, 8(7)
  046b25c  lfs 6, 12(7)
  046b260  addic 7, 7, 16
  046b264  fadds 3, 3, 4
  046b268  fadds 3, 3, 5
  046b26c  fadds 3, 3, 6
  046b270  bdnz 0x46b248
  046b274  lis 4, 71
  046b278  addi 4, 4, -20880
  046b27c  lfs 4, 8(4)
  046b280  fadds 3, 3, 4
  046b284  fmadds 1, 3, 1, 2
  046b288  lis 4, 71
  046b28c  lis 28, 114
  046b290  addi 29, 4, -20880
  046b294  lis 27, 114
  046b298  addic 5, 30, 320
  046b29c  lfs 4, 12(29)
  046b2a0  lfs 3, -3048(28)
  046b2a4  lfs 5, -3052(27)
  046b2a8  fmuls 2, 3, 4
  046b2ac  fmuls 4, 5, 4
  046b2b0  fmr 3, 2
  046b2b4  bl 0x10a2e0
  046b2b8  nop
  046b2bc  lfs 1, 20(31)
  046b2c0  lfs 2, 16(31)
  046b2c4  fsubs 30, 30, 1
  046b2c8  lfs 1, 24(31)
  046b2cc  fsubs 31, 31, 2
  046b2d0  fsubs 29, 29, 1
  046b2d4  addic 3, 1, 160
  046b2d8  addic 5, 30, 324
  046b2dc  fmuls 1, 30, 30
  046b2e0  fmadds 1, 31, 31, 1
  046b2e4  fmadds 1, 29, 29, 1
  046b2e8  fsqrts 27, 1
  046b2ec  lfs 1, 16(29)
  046b2f0  lfs 6, 20(29)
  046b2f4  lfs 7, 24(29)
  046b2f8  lfs 4, -3048(28)
  046b2fc  lfs 5, -3052(27)
  046b300  fmuls 2, 4, 1
  046b304  fmuls 3, 4, 6
  046b308  fmuls 4, 5, 7
  046b30c  fmr 1, 27
  046b310  bl 0x109c30
  046b314  nop
  046b318  lfs 1, 324(30)
  046b31c  fdivs 1, 1, 27
  046b320  lfs 2, 16(31)
  046b324  lfs 3, 20(31)
  046b328  lfs 4, 24(31)
  046b32c  fsub 5, 28, 27
  046b330  fsub 6, 28, 27
  046b334  fsub 7, 28, 27
  046b338  fsub 8, 27, 28
  046b33c  fsub 9, 27, 28
  046b340  fsub 10, 27, 28
  046b344  lbz 30, 83(31)
  046b348  fmuls 11, 29, 1
  046b34c  fmuls 12, 30, 1
  046b350  fmuls 1, 31, 1
  046b354  fsel 5, 5, 28, 11
  046b358  fsel 6, 6, 28, 12
  046b35c  fsel 7, 7, 28, 1
  046b360  fsel 5, 8, 5, 11
  046b364  fsel 6, 9, 6, 12
  046b368  fsel 1, 10, 7, 1
  046b36c  fadds 4, 4, 5
  046b370  fadds 3, 3, 6
  046b374  fadds 1, 2, 1
  046b378  stfs 4, 24(31)
  046b37c  stfs 3, 20(31)
  046b380  stfs 1, 16(31)
  046b384  lfs 1, 28(29)
  046b388  fcmpu 0, 27, 1
  046b38c  cror 6, 1, 2
  046b390  bt 6, 0x46c2f4
  046b394  li 3, 3
  046b398  cmpwi 30, 0
  046b39c  stb 3, 32(31)
  046b3a0  bt 2, 0x46c2f4
  046b3a4  lis 3, 71
  046b3a8  lis 4, 114
  046b3ac  addi 3, 3, -20880
  046b3b0  li 5, 0
  046b3b4  lfs 1, 0(3)
  046b3b8  lfs 2, -3056(4)
  046b3bc  ori 3, 31, 0
  046b3c0  fmuls 1, 2, 1
  046b3c4  li 4, 0
  046b3c8  fctiwz 1, 1
  046b3cc  stfd 1, 432(1)
  046b3d0  lwz 6, 436(1)
  046b3d4  extsw 6, 6
  046b3d8  bl 0xfddc0
  046b3dc  nop
  046b3e0  b 0x46c2f4
  046b3e4  lfs 1, 16(3)
  046b3e8  lfs 2, 16(31)
  046b3ec  lfs 3, 20(3)
  046b3f0  lfs 4, 20(31)
  046b3f4  fsubs 1, 1, 2
  046b3f8  lis 3, 71
  046b3fc  fsubs 2, 3, 4
  046b400  addi 4, 3, -20880
  046b404  lis 5, 115
  046b408  addic 3, 31, 72
  046b40c  addic 5, 5, 22784
  046b410  fabs 3, 1
  046b414  fabs 5, 2
  046b418  stfs 1, 212(1)
  046b41c  stfs 2, 216(1)
  046b420  fsubs 1, 3, 5
  046b424  stfs 1, 220(1)
  046b428  lwz 6, 212(1)
  046b42c  lfs 4, 4(4)
  046b430  lfs 1, 212(1)
  046b434  lwz 4, 216(1)
  046b438  lfs 2, 216(1)
  046b43c  lwz 7, 220(1)
  046b440  rlwinm 4, 4, 3, 29, 29
  046b444  fabs 6, 2
  046b448  lfs 2, 220(1)
  046b44c  fabs 1, 1
  046b450  rlwimi 4, 7, 2, 30, 30
  046b454  fsub 7, 2, 4
  046b458  rlwimi 4, 6, 4, 28, 28
  046b45c  fsub 8, 2, 4
  046b460  ori 6, 5, 0
  046b464  rlwimi 6, 4, 2, 26, 28
  046b468  slwi 4, 4, 2
  046b46c  clrldi 6, 6, 32
  046b470  fsel 5, 7, 1, 5
  046b474  lfsx 1, 5, 4
  046b478  lfs 2, 4(6)
  046b47c  fsel 3, 8, 6, 3
  046b480  fcmpu 0, 5, 4
  046b484  bt 1, 0x46b48c
  046b488  b 0x46b5ac
  046b48c  fsubs 6, 3, 5
  046b490  fadds 3, 3, 5
  046b494  addic 4, 1, 16
  046b498  li 8, 2
  046b49c  addic 5, 4, 348
  046b4a0  addic 6, 4, 364
  046b4a4  mtctr 8
  046b4a8  fdivs 3, 6, 3
  046b4ac  fmuls 5, 3, 3
  046b4b0  stfs 3, 376(1)
  046b4b4  stfs 3, 368(1)
  046b4b8  stfs 3, 372(1)
  046b4bc  stfs 3, 364(1)
  046b4c0  lfs 7, 376(1)
  046b4c4  lfs 8, 368(1)
  046b4c8  lfs 9, 372(1)
  046b4cc  fmuls 6, 5, 5
  046b4d0  fmuls 8, 8, 5
  046b4d4  fmuls 7, 7, 6
  046b4d8  fmuls 3, 6, 6
  046b4dc  fmuls 6, 9, 6
  046b4e0  stfs 8, 368(1)
  046b4e4  fmuls 5, 7, 5
  046b4e8  stfs 6, 372(1)
  046b4ec  stfs 5, 376(1)
  046b4f0  lfs 5, 348(4)
  046b4f4  fmuls 5, 5, 3
  046b4f8  stfs 5, 364(4)
  046b4fc  lfs 5, 4(5)
  046b500  addic 4, 4, 8
  046b504  addic 5, 5, 8
  046b508  fmuls 5, 5, 3
  046b50c  stfs 5, 4(6)
  046b510  addic 6, 6, 8
  046b514  bdnz 0x46b4f0
  046b518  li 6, 4
  046b51c  ori 4, 1, 0
  046b520  mtctr 6
  046b524  lis 5, 115
  046b528  addic 6, 4, 364
  046b52c  addic 5, 5, 22752
  046b530  ori 7, 6, 0
  046b534  lfs 3, 364(4)
  046b538  lfs 5, 0(5)
  046b53c  fmuls 3, 3, 5
  046b540  lfs 5, 4(5)
  046b544  addic 5, 5, 8
  046b548  stfs 3, 364(4)
  046b54c  lfs 3, 4(6)
  046b550  addic 4, 4, 8
  046b554  fmuls 3, 3, 5
  046b558  stfs 3, 4(6)
  046b55c  addic 6, 6, 8
  046b560  bdnz 0x46b534
  046b564  ori 4, 1, 0
  046b568  mtctr 8
  046b56c  lfs 3, 364(4)
  046b570  fadds 3, 4, 3
  046b574  lfs 4, 4(7)
  046b578  addic 4, 4, 16
  046b57c  lfs 5, 8(7)
  046b580  lfs 6, 12(7)
  046b584  addic 7, 7, 16
  046b588  fadds 3, 3, 4
  046b58c  fadds 4, 3, 5
  046b590  fadds 4, 4, 6
  046b594  bdnz 0x46b56c
  046b598  lis 4, 71
  046b59c  addi 4, 4, -20880
  046b5a0  lfs 3, 8(4)
  046b5a4  fadds 4, 4, 3
  046b5a8  fmadds 4, 4, 1, 2
  046b5ac  lis 4, 71
  046b5b0  fmr 1, 4
  046b5b4  lis 6, 114
  046b5b8  addi 4, 4, -20880
  046b5bc  lis 5, 114
  046b5c0  lfs 3, 12(4)
  046b5c4  lfs 2, -3048(6)
  046b5c8  lfs 5, -3052(5)
  046b5cc  fmuls 2, 2, 3
  046b5d0  addic 5, 30, 320
  046b5d4  fmuls 4, 5, 3
  046b5d8  fmr 3, 2
  046b5dc  bl 0x10a2e0
  046b5e0  nop
  046b5e4  lwz 3, 276(30)
  046b5e8  cmpwi 3, 2
  046b5ec  bt 2, 0x46c2f4
  046b5f0  li 3, 4
  046b5f4  lbz 4, 83(31)
  046b5f8  cmpwi 4, 7
  046b5fc  stb 3, 32(31)
  046b600  bt 2, 0x46c2f4
  046b604  lis 3, 71
  046b608  lis 4, 114
  046b60c  addi 3, 3, -20880
  046b610  li 5, 0
  046b614  lfs 1, 0(3)
  046b618  lfs 2, -3056(4)
  046b61c  ori 3, 31, 0
  046b620  fmuls 1, 2, 1
  046b624  li 4, 7
  046b628  fctiwz 1, 1
  046b62c  stfd 1, 432(1)
  046b630  lwz 6, 436(1)
  046b634  extsw 6, 6
  046b638  bl 0xfddc0
  046b63c  nop
  046b640  b 0x46c2f4
  046b644  lfs 1, 16(3)
  046b648  lfs 2, 16(31)
  046b64c  lfs 3, 20(3)
  046b650  lfs 4, 20(31)
  046b654  fsubs 1, 1, 2
  046b658  lis 3, 71
  046b65c  fsubs 2, 3, 4
  046b660  addi 4, 3, -20880
  046b664  lis 5, 115
  046b668  addic 3, 31, 72
  046b66c  addic 5, 5, 22784
  046b670  fabs 3, 1
  046b674  fabs 5, 2
  046b678  stfs 1, 200(1)
  046b67c  stfs 2, 204(1)
  046b680  fsubs 1, 3, 5
  046b684  stfs 1, 208(1)
  046b688  lwz 6, 200(1)
  046b68c  lfs 4, 4(4)
  046b690  lfs 1, 200(1)
  046b694  lwz 4, 204(1)
  046b698  lfs 2, 204(1)
  046b69c  lwz 7, 208(1)
  046b6a0  rlwinm 4, 4, 3, 29, 29
  046b6a4  fabs 6, 2
  046b6a8  lfs 2, 208(1)
  046b6ac  fabs 1, 1
  046b6b0  rlwimi 4, 7, 2, 30, 30
  046b6b4  fsub 7, 2, 4
  046b6b8  rlwimi 4, 6, 4, 28, 28
  046b6bc  fsub 8, 2, 4
  046b6c0  ori 6, 5, 0
  046b6c4  rlwimi 6, 4, 2, 26, 28
  046b6c8  slwi 4, 4, 2
  046b6cc  clrldi 6, 6, 32
  046b6d0  fsel 5, 7, 1, 5
  046b6d4  lfsx 1, 5, 4
  046b6d8  lfs 2, 4(6)
  046b6dc  fsel 3, 8, 6, 3
  046b6e0  fcmpu 0, 5, 4
  046b6e4  bt 1, 0x46b6ec
  046b6e8  b 0x46b80c
  046b6ec  fsubs 6, 3, 5
  046b6f0  fadds 3, 3, 5
  046b6f4  addic 4, 1, 16
  046b6f8  li 8, 2
  046b6fc  addic 5, 4, 316
  046b700  addic 6, 4, 332
  046b704  mtctr 8
  046b708  fdivs 3, 6, 3
  046b70c  fmuls 5, 3, 3
  046b710  stfs 3, 344(1)
  046b714  stfs 3, 336(1)
  046b718  stfs 3, 340(1)
  046b71c  stfs 3, 332(1)
  046b720  lfs 7, 344(1)
  046b724  lfs 8, 336(1)
  046b728  lfs 9, 340(1)
  046b72c  fmuls 6, 5, 5
  046b730  fmuls 8, 8, 5
  046b734  fmuls 7, 7, 6
  046b738  fmuls 3, 6, 6
  046b73c  fmuls 6, 9, 6
  046b740  stfs 8, 336(1)
  046b744  fmuls 5, 7, 5
  046b748  stfs 6, 340(1)
  046b74c  stfs 5, 344(1)
  046b750  lfs 5, 316(4)
  046b754  fmuls 5, 5, 3
  046b758  stfs 5, 332(4)
  046b75c  lfs 5, 4(5)
  046b760  addic 4, 4, 8
  046b764  addic 5, 5, 8
  046b768  fmuls 5, 5, 3
  046b76c  stfs 5, 4(6)
  046b770  addic 6, 6, 8
  046b774  bdnz 0x46b750
  046b778  li 6, 4
  046b77c  ori 4, 1, 0
  046b780  mtctr 6
  046b784  lis 5, 115
  046b788  addic 6, 4, 332
  046b78c  addic 5, 5, 22752
  046b790  ori 7, 6, 0
  046b794  lfs 3, 332(4)
  046b798  lfs 5, 0(5)
  046b79c  fmuls 3, 3, 5
  046b7a0  lfs 5, 4(5)
  046b7a4  addic 5, 5, 8
  046b7a8  stfs 3, 332(4)
  046b7ac  lfs 3, 4(6)
  046b7b0  addic 4, 4, 8
  046b7b4  fmuls 3, 3, 5
  046b7b8  stfs 3, 4(6)
  046b7bc  addic 6, 6, 8
  046b7c0  bdnz 0x46b794
  046b7c4  ori 4, 1, 0
  046b7c8  mtctr 8
  046b7cc  lfs 3, 332(4)
  046b7d0  fadds 3, 4, 3
  046b7d4  lfs 4, 4(7)
  046b7d8  addic 4, 4, 16
  046b7dc  lfs 5, 8(7)
  046b7e0  lfs 6, 12(7)
  046b7e4  addic 7, 7, 16
  046b7e8  fadds 3, 3, 4
  046b7ec  fadds 4, 3, 5
  046b7f0  fadds 4, 4, 6
  046b7f4  bdnz 0x46b7cc
  046b7f8  lis 4, 71
  046b7fc  addi 4, 4, -20880
  046b800  lfs 3, 8(4)
  046b804  fadds 4, 4, 3
  046b808  fmadds 4, 4, 1, 2
  046b80c  lis 4, 71
  046b810  fmr 1, 4
  046b814  lis 6, 114
  046b818  addi 4, 4, -20880
  046b81c  lis 5, 114
  046b820  lfs 3, 12(4)
  046b824  lfs 2, -3048(6)
  046b828  lfs 5, -3052(5)
  046b82c  fmuls 2, 2, 3
  046b830  addic 5, 30, 320
  046b834  fmuls 4, 5, 3
  046b838  fmr 3, 2
  046b83c  bl 0x10a2e0
  046b840  nop
  046b844  lbz 3, 112(31)
  046b848  rlwinm 3, 3, 0, 30, 30
  046b84c  cmpwi 3, 0
  046b850  bt 2, 0x46c2f4
  046b854  li 3, 0
  046b858  li 4, 5
  046b85c  stw 3, 328(30)
  046b860  lbz 3, 83(31)
  046b864  stb 4, 32(31)
  046b868  cmpwi 3, 8
  046b86c  bt 2, 0x46c2f4
  046b870  lis 3, 71
  046b874  lis 4, 114
  046b878  addi 3, 3, -20880
  046b87c  li 5, 0
  046b880  lfs 1, 0(3)
  046b884  lfs 2, -3056(4)
  046b888  ori 3, 31, 0
  046b88c  li 4, 8
  046b890  fmuls 1, 2, 1
  046b894  fctiwz 1, 1
  046b898  stfd 1, 432(1)
  046b89c  lwz 6, 436(1)
  046b8a0  extsw 6, 6
  046b8a4  bl 0xfddc0
  046b8a8  nop
  046b8ac  b 0x46c2f4
  046b8b0  lbz 3, 112(31)
  046b8b4  rlwinm 3, 3, 0, 30, 30
  046b8b8  cmpwi 3, 0
  046b8bc  bt 2, 0x46c2f4
  046b8c0  ori 3, 31, 0
  046b8c4  addic 5, 1, 128
  046b8c8  li 4, 0
  046b8cc  bl 0xf1114
  046b8d0  nop
  046b8d4  lis 3, 71
  046b8d8  lfs 1, 72(31)
  046b8dc  addi 5, 3, -20880
  046b8e0  lis 3, 135
  046b8e4  lfs 2, 32(5)
  046b8e8  lfs 3, 36(5)
  046b8ec  fadds 2, 1, 2
  046b8f0  lfs 4, 40(5)
  046b8f4  fsubs 5, 3, 1
  046b8f8  li 4, 0
  046b8fc  fsubs 3, 3, 2
  046b900  fsub 7, 1, 5
  046b904  fsubs 6, 4, 2
  046b908  fsubs 4, 4, 1
  046b90c  fsub 8, 2, 3
  046b910  fsel 1, 7, 5, 1
  046b914  lfs 5, 44(5)
  046b918  fsel 2, 8, 3, 2
  046b91c  fsub 3, 4, 1
  046b920  fsub 8, 6, 2
  046b924  fsel 1, 3, 4, 1
  046b928  lfs 3, 48(5)
  046b92c  lfs 4, 52(5)
  046b930  lfs 7, 128(1)
  046b934  lfs 10, 132(1)
  046b938  fsel 2, 8, 6, 2
  046b93c  fmuls 6, 1, 1
  046b940  fmuls 8, 2, 2
  046b944  fmuls 9, 6, 1
  046b948  fmuls 12, 8, 2
  046b94c  fmuls 13, 6, 9
  046b950  fmadds 1, 9, 5, 1
  046b954  lfs 9, 56(5)
  046b958  fmuls 11, 8, 12
  046b95c  fmadds 2, 12, 5, 2
  046b960  fmuls 5, 6, 13
  046b964  fmadds 1, 13, 3, 1
  046b968  lfs 12, 136(1)
  046b96c  lfs 13, 140(1)
  046b970  fmuls 0, 8, 11
  046b974  fmadds 2, 11, 3, 2
  046b978  fmuls 3, 6, 5
  046b97c  fmadds 1, 5, 4, 1
  046b980  lfs 5, 30236(3)
  046b984  stfs 13, 156(1)
  046b988  addic 3, 1, 144
  046b98c  stfs 10, 148(1)
  046b990  stfs 12, 152(1)
  046b994  stfs 7, 144(1)
  046b998  fmuls 6, 8, 0
  046b99c  fmadds 2, 0, 4, 2
  046b9a0  fmadds 1, 3, 9, 1
  046b9a4  fmadds 2, 6, 9, 2
  046b9a8  fmadds 1, 1, 5, 10
  046b9ac  fmadds 2, 2, 5, 7
  046b9b0  stfs 1, 148(1)
  046b9b4  stfs 2, 144(1)
  046b9b8  lfs 1, 60(5)
  046b9bc  bl 0xffb70
  046b9c0  nop
  046b9c4  fmr 3, 1
  046b9c8  lfs 4, 24(31)
  046b9cc  li 3, 144
  046b9d0  lfs 1, 144(1)
  046b9d4  li 4, 132
  046b9d8  lfs 8, 128(1)
  046b9dc  li 5, 128
  046b9e0  lfs 2, 148(1)
  046b9e4  li 6, 148
  046b9e8  <unknown>
  046b9ec  <unknown>
  046b9f0  <unknown>
  046b9f4  <unknown>
  046b9f8  fcmpu 0, 3, 4
  046b9fc  stfs 3, 152(1)
  046ba00  lfs 9, 132(1)
  046ba04  lfs 10, 136(1)
  046ba08  lfs 11, 156(1)
  046ba0c  lfs 12, 140(1)
  046ba10  cror 6, 1, 2
  046ba14  bt 6, 0x46ba20
  046ba18  fmr 3, 4
  046ba1c  stfs 4, 152(1)
  046ba20  lis 3, 71
  046ba24  lis 4, 114
  046ba28  fsubs 4, 1, 8
  046ba2c  addi 3, 3, -20880
  046ba30  vspltisw 7, -1
  046ba34  li 5, 64
  046ba38  li 6, -3056
  046ba3c  vslw 7, 7, 7
  046ba40  lfs 1, 64(3)
  046ba44  lfs 5, -3056(4)
  046ba48  <unknown>
  046ba4c  fmuls 1, 5, 1
  046ba50  vspltw 6, 6, 0
  046ba54  <unknown>
  046ba58  lfs 5, 68(3)
  046ba5c  vmaddfp 6, 8, 6, 7
  046ba60  li 4, 72
  046ba64  vspltisw 8, -1
  046ba68  vsubfp 4, 4, 5
  046ba6c  vspltisw 11, -1
  046ba70  vsubfp 2, 2, 3
  046ba74  fmr 6, 1
  046ba78  vslw 8, 8, 8
  046ba7c  <unknown>
  046ba80  vslw 5, 11, 11
  046ba84  vspltw 7, 7, 0
  046ba88  fsubs 7, 2, 9
  046ba8c  vspltisw 10, -1
  046ba90  vctsxs 6, 6, 0
  046ba94  fctidz 6, 6
  046ba98  vslw 3, 10, 10
  046ba9c  vspltisw 10, -1
  046baa0  fsubs 13, 3, 10
  046baa4  li 4, 188
  046baa8  li 5, 192
  046baac  vslw 10, 10, 10
  046bab0  vcfsx 6, 6, 0
  046bab4  fcfid 6, 6
  046bab8  frsp 6, 6
  046babc  vrefp 9, 6
  046bac0  fdivs 5, 5, 6
  046bac4  vnmsubfp 12, 9, 6, 7
  046bac8  vmaddfp 8, 9, 12, 8
  046bacc  vspltisw 9, -1
  046bad0  vslw 9, 9, 9
  046bad4  vnmsubfp 11, 8, 6, 7
  046bad8  vmaddfp 3, 8, 11, 3
  046badc  vnmsubfp 6, 3, 6, 7
  046bae0  fmuls 2, 4, 5
  046bae4  fmuls 3, 7, 5
  046bae8  vmaddfp 3, 3, 6, 10
  046baec  fabs 6, 2
  046baf0  fabs 0, 3
  046baf4  vmaddfp 2, 2, 3, 5
  046baf8  vmaddfp 3, 4, 3, 9
  046bafc  fsubs 4, 6, 0
  046bb00  vspltw 2, 2, 0
  046bb04  vspltw 3, 3, 0
  046bb08  stvewx 2, 4, 1
  046bb0c  stvewx 3, 5, 1
  046bb10  stfs 4, 196(1)
  046bb14  lwz 4, 188(1)
  046bb18  lfs 7, 4(3)
  046bb1c  lfs 4, 188(1)
  046bb20  lwz 5, 192(1)
  046bb24  fabs 31, 4
  046bb28  fmuls 4, 13, 5
  046bb2c  lfs 5, 192(1)
  046bb30  rlwinm 5, 5, 3, 29, 29
  046bb34  lwz 6, 196(1)
  046bb38  lis 3, 115
  046bb3c  fabs 13, 5
  046bb40  lfs 5, 196(1)
  046bb44  rlwimi 5, 6, 2, 30, 30
  046bb48  fsub 30, 5, 7
  046bb4c  addic 3, 3, 22784
  046bb50  fsub 29, 5, 7
  046bb54  rlwimi 5, 4, 4, 28, 28
  046bb58  ori 4, 3, 0
  046bb5c  rlwimi 4, 5, 2, 26, 28
  046bb60  slwi 5, 5, 2
  046bb64  clrldi 4, 4, 32
  046bb68  fsel 0, 30, 31, 0
  046bb6c  lfsx 5, 3, 5
  046bb70  fsel 13, 29, 13, 6
  046bb74  lfs 6, 4(4)
  046bb78  fcmpu 0, 0, 7
  046bb7c  bt 1, 0x46bb88
  046bb80  fmr 5, 7
  046bb84  b 0x46bcac
  046bb88  fsubs 31, 13, 0
  046bb8c  fadds 13, 13, 0
  046bb90  addic 4, 1, 16
  046bb94  li 8, 2
  046bb98  addic 6, 4, 300
  046bb9c  addic 5, 4, 284
  046bba0  mtctr 8
  046bba4  fdivs 13, 31, 13
  046bba8  fmuls 0, 13, 13
  046bbac  stfs 13, 312(1)
  046bbb0  stfs 13, 304(1)
  046bbb4  stfs 13, 308(1)
  046bbb8  stfs 13, 300(1)
  046bbbc  lfs 30, 312(1)
  046bbc0  lfs 29, 304(1)
  046bbc4  lfs 28, 308(1)
  046bbc8  fmuls 31, 0, 0
  046bbcc  fmuls 29, 29, 0
  046bbd0  fmuls 30, 30, 31
  046bbd4  fmuls 13, 31, 31
  046bbd8  fmuls 31, 28, 31
  046bbdc  stfs 29, 304(1)
  046bbe0  fmuls 0, 30, 0
  046bbe4  stfs 31, 308(1)
  046bbe8  stfs 0, 312(1)
  046bbec  lfs 0, 284(4)
  046bbf0  fmuls 0, 0, 13
  046bbf4  stfs 0, 300(4)
  046bbf8  lfs 0, 4(5)
  046bbfc  addic 5, 5, 8
  046bc00  fmuls 0, 0, 13
  046bc04  addic 4, 4, 8
  046bc08  stfs 0, 4(6)
  046bc0c  addic 6, 6, 8
  046bc10  bdnz 0x46bbec
  046bc14  li 6, 4
  046bc18  ori 4, 1, 0
  046bc1c  mtctr 6
  046bc20  lis 5, 115
  046bc24  addic 6, 4, 300
  046bc28  addic 5, 5, 22752
  046bc2c  ori 7, 6, 0
  046bc30  lfs 13, 300(4)
  046bc34  lfs 0, 0(5)
  046bc38  fmuls 13, 13, 0
  046bc3c  lfs 0, 4(5)
  046bc40  addic 5, 5, 8
  046bc44  stfs 13, 300(4)
  046bc48  lfs 13, 4(6)
  046bc4c  addic 4, 4, 8
  046bc50  fmuls 13, 13, 0
  046bc54  stfs 13, 4(6)
  046bc58  addic 6, 6, 8
  046bc5c  bdnz 0x46bc30
  046bc60  ori 4, 1, 0
  046bc64  fmr 13, 7
  046bc68  mtctr 8
  046bc6c  lfs 0, 300(4)
  046bc70  fadds 13, 13, 0
  046bc74  lfs 0, 4(7)
  046bc78  addic 4, 4, 16
  046bc7c  lfs 31, 8(7)
  046bc80  lfs 30, 12(7)
  046bc84  addic 7, 7, 16
  046bc88  fadds 13, 13, 0
  046bc8c  fadds 13, 13, 31
  046bc90  fadds 13, 13, 30
  046bc94  bdnz 0x46bc6c
  046bc98  lis 4, 71
  046bc9c  addi 4, 4, -20880
  046bca0  lfs 0, 8(4)
  046bca4  fadds 13, 13, 0
  046bca8  fmadds 5, 13, 5, 6
  046bcac  fmuls 6, 3, 3
  046bcb0  stfs 4, 180(1)
  046bcb4  fabs 31, 4
  046bcb8  fmadds 6, 2, 2, 6
  046bcbc  fsqrts 6, 6
  046bcc0  lwz 4, 180(1)
  046bcc4  lfs 13, 180(1)
  046bcc8  fabs 0, 13
  046bccc  rlwinm 4, 4, 3, 29, 29
  046bcd0  fabs 13, 6
  046bcd4  stfs 6, 176(1)
  046bcd8  fsubs 6, 13, 31
  046bcdc  stfs 6, 184(1)
  046bce0  lwz 5, 176(1)
  046bce4  lfs 6, 176(1)
  046bce8  lwz 6, 184(1)
  046bcec  lfs 30, 184(1)
  046bcf0  fabs 6, 6
  046bcf4  rlwimi 4, 6, 2, 30, 30
  046bcf8  fsub 29, 30, 7
  046bcfc  fsub 30, 30, 7
  046bd00  rlwimi 4, 5, 4, 28, 28
  046bd04  ori 5, 3, 0
  046bd08  rlwimi 5, 4, 2, 26, 28
  046bd0c  slwi 4, 4, 2
  046bd10  clrldi 5, 5, 32
  046bd14  fsel 31, 29, 6, 31
  046bd18  lfsx 6, 3, 4
  046bd1c  fsel 0, 30, 0, 13
  046bd20  lfs 13, 4(5)
  046bd24  fcmpu 0, 31, 7
  046bd28  bt 1, 0x46bd30
  046bd2c  b 0x46be50
  046bd30  fsubs 30, 0, 31
  046bd34  fadds 0, 0, 31
  046bd38  addic 3, 1, 16
  046bd3c  li 6, 2
  046bd40  addic 5, 3, 268
  046bd44  addic 4, 3, 252
  046bd48  mtctr 6
  046bd4c  fdivs 0, 30, 0
  046bd50  fmuls 31, 0, 0
  046bd54  stfs 0, 280(1)
  046bd58  stfs 0, 272(1)
  046bd5c  stfs 0, 276(1)
  046bd60  stfs 0, 268(1)
  046bd64  lfs 29, 280(1)
  046bd68  lfs 28, 272(1)
  046bd6c  lfs 27, 276(1)
  046bd70  fmuls 30, 31, 31
  046bd74  fmuls 28, 28, 31
  046bd78  fmuls 29, 29, 30
  046bd7c  fmuls 0, 30, 30
  046bd80  fmuls 30, 27, 30
  046bd84  stfs 28, 272(1)
  046bd88  fmuls 31, 29, 31
  046bd8c  stfs 30, 276(1)
  046bd90  stfs 31, 280(1)
  046bd94  lfs 31, 252(3)
  046bd98  fmuls 31, 31, 0
  046bd9c  stfs 31, 268(3)
  046bda0  lfs 31, 4(4)
  046bda4  addic 4, 4, 8
  046bda8  fmuls 31, 31, 0
  046bdac  addic 3, 3, 8
  046bdb0  stfs 31, 4(5)
  046bdb4  addic 5, 5, 8
  046bdb8  bdnz 0x46bd94
  046bdbc  li 5, 4
  046bdc0  ori 3, 1, 0
  046bdc4  mtctr 5
  046bdc8  lis 4, 115
  046bdcc  addic 5, 3, 268
  046bdd0  addic 4, 4, 22752
  046bdd4  ori 7, 5, 0
  046bdd8  lfs 0, 268(3)
  046bddc  lfs 31, 0(4)
  046bde0  fmuls 0, 0, 31
  046bde4  lfs 31, 4(4)
  046bde8  addic 4, 4, 8
  046bdec  stfs 0, 268(3)
  046bdf0  lfs 0, 4(5)
  046bdf4  addic 3, 3, 8
  046bdf8  fmuls 0, 0, 31
  046bdfc  stfs 0, 4(5)
  046be00  addic 5, 5, 8
  046be04  bdnz 0x46bdd8
  046be08  ori 3, 1, 0
  046be0c  mtctr 6
  046be10  lfs 0, 268(3)
  046be14  fadds 7, 7, 0
  046be18  addic 3, 3, 16
  046be1c  lfs 0, 4(7)
  046be20  lfs 31, 8(7)
  046be24  lfs 30, 12(7)
  046be28  addic 7, 7, 16
  046be2c  fadds 7, 7, 0
  046be30  fadds 7, 7, 31
  046be34  fadds 7, 7, 30
  046be38  bdnz 0x46be10
  046be3c  lis 3, 71
  046be40  addi 3, 3, -20880
  046be44  lfs 0, 8(3)
  046be48  fadds 7, 7, 0
  046be4c  fmadds 7, 7, 6, 13
  046be50  fctiwz 1, 1
  046be54  stfs 8, 64(1)
  046be58  ori 3, 31, 0
  046be5c  stfs 10, 72(1)
  046be60  stfs 2, 80(1)
  046be64  stfs 4, 88(1)
  046be68  fmr 2, 7
  046be6c  stfs 9, 68(1)
  046be70  stfs 12, 76(1)
  046be74  stfd 1, 432(1)
  046be78  lwz 4, 436(1)
  046be7c  stfs 3, 84(1)
  046be80  fmr 1, 5
  046be84  extsw 4, 4
  046be88  stfs 11, 92(1)
  046be8c  std 4, 112(1)
  046be90  ld 5, 64(1)
  046be94  ld 6, 72(1)
  046be98  ld 7, 80(1)
  046be9c  ld 8, 88(1)
  046bea0  bl 0x434898
  046bea4  nop
  046bea8  lwz 3, 328(30)
  046beac  addic 4, 3, 1
  046beb0  cmpwi 3, 5
  046beb4  stw 4, 328(30)
  046beb8  bf 2, 0x46c2f4
  046bebc  li 4, 6
  046bec0  li 3, 2
  046bec4  stb 4, 32(31)
  046bec8  bl 0xfc620
  046becc  nop
  046bed0  cmpwi 3, 0
  046bed4  bt 2, 0x46bf24
  046bed8  lbz 3, 83(31)
  046bedc  cmpwi 3, 9
  046bee0  bt 2, 0x46c2f4
  046bee4  lis 3, 71
  046bee8  lis 4, 114
  046beec  addi 3, 3, -20880
  046bef0  li 5, 0
  046bef4  lfs 1, 0(3)
  046bef8  lfs 2, -3056(4)
  046befc  ori 3, 31, 0
  046bf00  fmuls 1, 2, 1
  046bf04  li 4, 9
  046bf08  fctiwz 1, 1
  046bf0c  stfd 1, 432(1)
  046bf10  lwz 6, 436(1)
  046bf14  extsw 6, 6
  046bf18  bl 0xfddc0
  046bf1c  nop
  046bf20  b 0x46c2f4
  046bf24  lbz 3, 83(31)
  046bf28  cmpwi 3, 10
  046bf2c  bt 2, 0x46c2f4
  046bf30  lis 3, 71
  046bf34  lis 4, 114
  046bf38  addi 3, 3, -20880
  046bf3c  li 5, 0
  046bf40  lfs 1, 0(3)
  046bf44  lfs 2, -3056(4)
  046bf48  ori 3, 31, 0
  046bf4c  li 4, 10
  046bf50  fmuls 1, 2, 1
  046bf54  fctiwz 1, 1
  046bf58  stfd 1, 432(1)
  046bf5c  lwz 6, 436(1)
  046bf60  extsw 6, 6
  046bf64  bl 0xfddc0
  046bf68  nop
  046bf6c  b 0x46c2f4
  046bf70  lfs 1, 16(3)
  046bf74  lfs 2, 16(31)
  046bf78  lfs 3, 20(3)
  046bf7c  lfs 4, 20(31)
  046bf80  fsubs 1, 1, 2
  046bf84  lis 3, 71
  046bf88  fsubs 2, 3, 4
  046bf8c  addi 4, 3, -20880
  046bf90  lis 5, 115
  046bf94  addic 3, 31, 72
  046bf98  addic 5, 5, 22784
  046bf9c  fabs 3, 1
  046bfa0  fabs 5, 2
  046bfa4  stfs 1, 164(1)
  046bfa8  stfs 2, 168(1)
  046bfac  fsubs 1, 3, 5
  046bfb0  stfs 1, 172(1)
  046bfb4  lwz 6, 164(1)
  046bfb8  lfs 4, 4(4)
  046bfbc  lfs 1, 164(1)
  046bfc0  lwz 4, 168(1)
  046bfc4  lfs 2, 168(1)
  046bfc8  fabs 1, 1
  046bfcc  lwz 7, 172(1)
  046bfd0  rlwinm 4, 4, 3, 29, 29
  046bfd4  fabs 6, 2
  046bfd8  lfs 2, 172(1)
  046bfdc  rlwimi 4, 7, 2, 30, 30
  046bfe0  fsub 7, 2, 4
  046bfe4  rlwimi 4, 6, 4, 28, 28
  046bfe8  fsub 8, 2, 4
  046bfec  ori 6, 5, 0
  046bff0  rlwimi 6, 4, 2, 26, 28
  046bff4  slwi 4, 4, 2
  046bff8  clrldi 6, 6, 32
  046bffc  fsel 5, 7, 1, 5
  046c000  lfsx 1, 5, 4
  046c004  lfs 2, 4(6)
  046c008  fsel 3, 8, 6, 3
  046c00c  fcmpu 0, 5, 4
  046c010  bt 1, 0x46c018
  046c014  b 0x46c138
  046c018  fsubs 6, 3, 5
  046c01c  fadds 3, 3, 5
  046c020  addic 4, 1, 16
  046c024  li 7, 2
  046c028  addic 6, 4, 236
  046c02c  addic 5, 4, 220
  046c030  mtctr 7
  046c034  fdivs 3, 6, 3
  046c038  fmuls 5, 3, 3
  046c03c  stfs 3, 248(1)
  046c040  stfs 3, 240(1)
  046c044  stfs 3, 244(1)
  046c048  stfs 3, 236(1)
  046c04c  lfs 7, 248(1)
  046c050  lfs 8, 240(1)
  046c054  lfs 9, 244(1)
  046c058  fmuls 6, 5, 5
  046c05c  fmuls 8, 8, 5
  046c060  fmuls 7, 7, 6
  046c064  fmuls 3, 6, 6
  046c068  fmuls 6, 9, 6
  046c06c  stfs 8, 240(1)
  046c070  fmuls 5, 7, 5
  046c074  stfs 6, 244(1)
  046c078  stfs 5, 248(1)
  046c07c  lfs 5, 220(4)
  046c080  fmuls 5, 5, 3
  046c084  stfs 5, 236(4)
  046c088  lfs 5, 4(5)
  046c08c  addic 5, 5, 8
  046c090  fmuls 5, 5, 3
  046c094  addic 4, 4, 8
  046c098  stfs 5, 4(6)
  046c09c  addic 6, 6, 8
  046c0a0  bdnz 0x46c07c
  046c0a4  li 6, 4
  046c0a8  ori 4, 1, 0
  046c0ac  mtctr 6
  046c0b0  lis 5, 115
  046c0b4  addic 6, 4, 236
  046c0b8  addic 5, 5, 22752
  046c0bc  ori 8, 6, 0
  046c0c0  lfs 3, 236(4)
  046c0c4  lfs 5, 0(5)
  046c0c8  fmuls 3, 3, 5
  046c0cc  lfs 5, 4(5)
  046c0d0  addic 5, 5, 8
  046c0d4  stfs 3, 236(4)
  046c0d8  lfs 3, 4(6)
  046c0dc  addic 4, 4, 8
  046c0e0  fmuls 3, 3, 5
  046c0e4  stfs 3, 4(6)
  046c0e8  addic 6, 6, 8
  046c0ec  bdnz 0x46c0c0
  046c0f0  ori 4, 1, 0
  046c0f4  mtctr 7
  046c0f8  lfs 3, 236(4)
  046c0fc  fadds 3, 4, 3
  046c100  addic 4, 4, 16
  046c104  lfs 4, 4(8)
  046c108  lfs 5, 8(8)
  046c10c  lfs 6, 12(8)
  046c110  addic 8, 8, 16
  046c114  fadds 3, 3, 4
  046c118  fadds 4, 3, 5
  046c11c  fadds 4, 4, 6
  046c120  bdnz 0x46c0f8
  046c124  lis 4, 71
  046c128  addi 4, 4, -20880
  046c12c  lfs 3, 8(4)
  046c130  fadds 4, 4, 3
  046c134  fmadds 4, 4, 1, 2
  046c138  lis 4, 71
  046c13c  lis 6, 114
  046c140  fmr 1, 4
  046c144  addi 4, 4, -20880
  046c148  lis 5, 114
  046c14c  lfs 3, 12(4)
  046c150  lfs 2, -3048(6)
  046c154  lfs 5, -3052(5)
  046c158  fmuls 2, 2, 3
  046c15c  fmuls 4, 5, 3
  046c160  addic 5, 30, 320
  046c164  fmr 3, 2
  046c168  bl 0x10a2e0
  046c16c  nop
  046c170  lbz 3, 112(31)
  046c174  rlwinm 3, 3, 0, 30, 30
  046c178  cmpwi 3, 0
  046c17c  bt 2, 0x46c2f4
  046c180  lwz 3, 276(30)
  046c184  cmpwi 3, 2
  046c188  bf 2, 0x46c1e0
  046c18c  li 3, 3
  046c190  lbz 4, 83(31)
  046c194  cmpwi 4, 0
  046c198  stb 3, 32(31)
  046c19c  bt 2, 0x46c2f4
  046c1a0  lis 3, 71
  046c1a4  lis 4, 114
  046c1a8  addi 3, 3, -20880
  046c1ac  li 5, 0
  046c1b0  lfs 1, 0(3)
  046c1b4  lfs 2, -3056(4)
  046c1b8  ori 3, 31, 0
  046c1bc  li 4, 0
  046c1c0  fmuls 1, 2, 1
  046c1c4  fctiwz 1, 1
  046c1c8  stfd 1, 432(1)
  046c1cc  lwz 6, 436(1)
  046c1d0  extsw 6, 6
  046c1d4  bl 0xfddc0
  046c1d8  nop
  046c1dc  b 0x46c2f4
  046c1e0  li 3, 0
  046c1e4  li 4, 5
  046c1e8  stw 3, 328(30)
  046c1ec  lbz 3, 83(31)
  046c1f0  stb 4, 32(31)
  046c1f4  cmpwi 3, 8
  046c1f8  bt 2, 0x46c2f4
  046c1fc  lis 3, 71
  046c200  lis 4, 114
  046c204  addi 3, 3, -20880
  046c208  li 5, 0
  046c20c  lfs 1, 0(3)
  046c210  lfs 2, -3056(4)
  046c214  ori 3, 31, 0
  046c218  fmuls 1, 2, 1
  046c21c  li 4, 8
  046c220  fctiwz 1, 1
  046c224  stfd 1, 432(1)
  046c228  lwz 6, 436(1)
  046c22c  extsw 6, 6
  046c230  bl 0xfddc0
  046c234  nop
  046c238  b 0x46c2f4
  046c23c  addic 4, 30, 112
  046c240  ori 3, 31, 0
  046c244  bl 0x10b030
  046c248  nop
  046c24c  li 4, 320
  046c250  and 3, 3, 4
  046c254  cmpwi 3, 0
  046c258  bt 2, 0x46c2f4
  046c25c  li 3, 3
  046c260  lbz 4, 83(31)
  046c264  cmpwi 4, 0
  046c268  stb 3, 32(31)
  046c26c  bt 2, 0x46c2f4
  046c270  lis 3, 71
  046c274  lis 4, 114
  046c278  addi 3, 3, -20880
  046c27c  li 5, 0
  046c280  lfs 1, 0(3)
  046c284  lfs 2, -3056(4)
  046c288  ori 3, 31, 0
  046c28c  li 4, 0
  046c290  fmuls 1, 2, 1
  046c294  fctiwz 1, 1
  046c298  stfd 1, 432(1)
  046c29c  lwz 6, 436(1)
  046c2a0  extsw 6, 6
  046c2a4  bl 0xfddc0
  046c2a8  nop
  046c2ac  b 0x46c2f4
  046c2b0  addic 4, 30, 112
  046c2b4  ori 3, 31, 0
  046c2b8  bl 0x10b030
  046c2bc  nop
  046c2c0  li 4, 320
  046c2c4  and 3, 3, 4
  046c2c8  cmpwi 3, 0
  046c2cc  bt 2, 0x46c2f4
  046c2d0  ori 3, 31, 0
  046c2d4  li 4, 0
  046c2d8  li 5, -1
  046c2dc  bl 0xfd8d0
  046c2e0  nop
  046c2e4  ori 3, 31, 0
  046c2e8  bl 0xefb38
  046c2ec  nop
  046c2f0  b 0x46c2f4
  046c2f4  ld 0, 544(1)
  046c2f8  mtlr 0
  046c2fc  lfd 27, 488(1)
  046c300  lfd 28, 496(1)
  046c304  lfd 29, 504(1)
  046c308  lfd 30, 512(1)
  046c30c  lfd 31, 520(1)
  046c310  ld 27, 448(1)
  046c314  ld 28, 456(1)
  046c318  ld 29, 464(1)
  046c31c  ld 30, 472(1)
  046c320  ld 31, 480(1)
  046c324  addi 1, 1, 528
  046c328  blr
