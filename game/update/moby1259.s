# game/update/moby1259.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1259_0022a704:   # 0x22a704, 0x14 bytes
  022a704  lis 3, 119
  022a708  lis 4, 1
  022a70c  addic 3, 3, -10936
  022a710  stw 4, 72(3)
  022a714  blr

M1259_0022a720:   # 0x22a720, 0x448 bytes
  022a720  stdu 1, -896(1)
  022a724  mflr 0
  022a728  std 0, 912(1)
  022a72c  stfd 30, 880(1)
  022a730  stfd 31, 888(1)
  022a734  std 30, 864(1)
  022a738  lis 4, 35
  022a73c  std 29, 856(1)
  022a740  ori 30, 3, 0
  022a744  addi 29, 4, -22760
  022a748  addic 3, 1, 112
  022a74c  std 31, 872(1)
  022a750  addic 4, 30, 64
  022a754  std 28, 848(1)
  022a758  std 27, 840(1)
  022a75c  std 26, 832(1)
  022a760  std 25, 824(1)
  022a764  std 24, 816(1)
  022a768  std 23, 808(1)
  022a76c  std 22, 800(1)
  022a770  std 21, 792(1)
  022a774  std 20, 784(1)
  022a778  lwz 31, 120(30)
  022a77c  bl 0x500ca4
  022a780  nop
  022a784  ori 28, 1, 0
  022a788  lfs 31, 0(29)
  022a78c  lis 25, 119
  022a790  li 29, 0
  022a794  addic 27, 28, 464
  022a798  addic 25, 25, -10624
  022a79c  ori 26, 29, 0
  022a7a0  addic 24, 1, 512
  022a7a4  ori 21, 27, 0
  022a7a8  ori 4, 25, 0
  022a7ac  ori 3, 27, 0
  022a7b0  bl 0x500ca4
  022a7b4  nop
  022a7b8  addic 4, 1, 112
  022a7bc  ori 3, 27, 0
  022a7c0  ori 5, 27, 0
  022a7c4  bl 0x50162c
  022a7c8  nop
  022a7cc  srawi 3, 29, 1
  022a7d0  lfs 1, 16(30)
  022a7d4  addze 3, 3
  022a7d8  lfs 2, 20(30)
  022a7dc  sldi 3, 3, 1
  022a7e0  lfs 3, 24(30)
  022a7e4  subc 3, 29, 3
  022a7e8  cmpwi 3, 0
  022a7ec  bf 2, 0x22a820
  022a7f0  lwz 3, 8980(31)
  022a7f4  cmpwi 3, -1
  022a7f8  bt 2, 0x22a820
  022a7fc  lis 4, 164
  022a800  slwi 3, 3, 8
  022a804  lwz 4, -28512(4)
  022a808  addc 3, 4, 3
  022a80c  clrldi 3, 3, 32
  022a810  lfs 1, 16(3)
  022a814  lfs 2, 20(3)
  022a818  lfs 3, 24(3)
  022a81c  b 0x22a820
  022a820  lfs 4, 0(24)
  022a824  lfs 5, 4(24)
  022a828  lis 3, 16256
  022a82c  fadds 1, 4, 1
  022a830  addic 29, 29, 1
  022a834  lfs 4, 8(24)
  022a838  fadds 2, 5, 2
  022a83c  cmpwi 29, 2
  022a840  fadds 3, 4, 3
  022a844  addic 25, 25, 16
  022a848  addic 27, 27, 64
  022a84c  stfs 1, 0(24)
  022a850  stfs 2, 4(24)
  022a854  stfs 3, 8(24)
  022a858  stw 3, 524(28)
  022a85c  addic 24, 24, 64
  022a860  addic 28, 28, 64
  022a864  bt 0, 0x22a7a8
  022a868  li 3, 14
  022a86c  bl 0x685c4
  022a870  nop
  022a874  std 3, 440(1)
  022a878  lis 9, 0
  022a87c  li 3, 0
  022a880  li 4, 0
  022a884  li 5, 1
  022a888  li 6, 1
  022a88c  li 7, 1
  022a890  li 8, 0
  022a894  ori 9, 9, 65424
  022a898  bl 0x502fd4
  022a89c  nop
  022a8a0  std 3, 448(1)
  022a8a4  li 3, 0
  022a8a8  li 4, 0
  022a8ac  li 5, 0
  022a8b0  li 6, 0
  022a8b4  li 7, 0
  022a8b8  li 8, 0
  022a8bc  bl 0x502f08
  022a8c0  nop
  022a8c4  std 3, 432(1)
  022a8c8  lis 4, 241
  022a8cc  lis 3, 241
  022a8d0  lis 5, 119
  022a8d4  lis 6, 119
  022a8d8  li 7, 128
  022a8dc  lwz 8, -11524(3)
  022a8e0  lwz 3, -11528(4)
  022a8e4  lwz 4, -10816(5)
  022a8e8  lwz 6, -10812(6)
  022a8ec  ori 5, 8, 0
  022a8f0  bl 0x502ea8
  022a8f4  nop
  022a8f8  lis 20, 119
  022a8fc  std 3, 456(1)
  022a900  ori 27, 31, 0
  022a904  addic 20, 20, -10792
  022a908  li 23, 4
  022a90c  ori 30, 26, 0
  022a910  ori 22, 27, 0
  022a914  lfs 1, 4(20)
  022a918  stfs 1, 404(1)
  022a91c  lfs 1, 12(20)
  022a920  lfs 2, 28(20)
  022a924  stfs 1, 412(1)
  022a928  lfs 1, 20(20)
  022a92c  stfs 2, 428(1)
  022a930  stfs 1, 420(1)
  022a934  lis 4, 241
  022a938  lwz 3, 8960(27)
  022a93c  lwz 4, -11504(4)
  022a940  cmpw 3, 4
  022a944  bf 1, 0x22a984
  022a948  subc 3, 3, 4
  022a94c  extsw 3, 3
  022a950  bl 0x502730
  022a954  nop
  022a958  lis 3, 241
  022a95c  fmr 30, 1
  022a960  lis 4, 241
  022a964  lwz 3, -11508(3)
  022a968  lwz 4, -11504(4)
  022a96c  subc 3, 3, 4
  022a970  extsw 3, 3
  022a974  bl 0x502730
  022a978  nop
  022a97c  fdivs 30, 30, 1
  022a980  b 0x22a9b0
  022a984  extsw 3, 3
  022a988  bl 0x502730
  022a98c  nop
  022a990  fmr 30, 1
  022a994  lis 3, 241
  022a998  lwz 3, -11504(3)
  022a99c  extsw 3, 3
  022a9a0  bl 0x502730
  022a9a4  nop
  022a9a8  fdivs 30, 30, 1
  022a9ac  fsubs 30, 31, 30
  022a9b0  lis 3, 119
  022a9b4  lis 4, 119
  022a9b8  fmr 1, 30
  022a9bc  lwz 3, -10800(3)
  022a9c0  lwz 4, -10796(4)
  022a9c4  extsw 3, 3
  022a9c8  extsw 4, 4
  022a9cc  bl 0x5027bc
  022a9d0  nop
  022a9d4  stw 3, 396(1)
  022a9d8  lis 4, 35
  022a9dc  stw 3, 392(1)
  022a9e0  ori 29, 26, 0
  022a9e4  stw 3, 388(1)
  022a9e8  addi 4, 4, -22760
  022a9ec  stw 3, 384(1)
  022a9f0  lwz 3, 9004(31)
  022a9f4  addic 3, 3, -1
  022a9f8  lfs 30, 4(4)
  022a9fc  cmpwi 3, 0
  022aa00  bf 1, 0x22ab0c
  022aa04  lis 25, 161
  022aa08  addic 25, 25, 24396
  022aa0c  lis 4, 119
  022aa10  ori 3, 1, 0
  022aa14  mtctr 23
  022aa18  lfs 1, -10592(4)
  022aa1c  ori 4, 20, 0
  022aa20  fadds 30, 1, 30
  022aa24  fsubs 1, 30, 31
  022aa28  fsub 2, 31, 30
  022aa2c  fsel 30, 2, 30, 1
  022aa30  lfs 1, 0(4)
  022aa34  lis 5, 241
  022aa38  fadds 1, 1, 30
  022aa3c  addic 4, 4, 8
  022aa40  lfs 2, -11512(5)
  022aa44  fadds 1, 1, 2
  022aa48  stfs 1, 400(3)
  022aa4c  addic 3, 3, 8
  022aa50  bdnz 0x22aa30
  022aa54  lis 5, 119
  022aa58  ori 3, 26, 0
  022aa5c  addic 4, 1, 320
  022aa60  addic 5, 5, -10752
  022aa64  mtctr 23
  022aa68  srawi 6, 3, 1
  022aa6c  lfs 1, 0(5)
  022aa70  addc 6, 6, 29
  022aa74  slwi 6, 6, 4
  022aa78  addc 6, 6, 22
  022aa7c  clrldi 6, 6, 32
  022aa80  addic 3, 3, 1
  022aa84  lfs 2, 0(6)
  022aa88  fadds 1, 1, 2
  022aa8c  stfs 1, 0(4)
  022aa90  lfs 1, 4(5)
  022aa94  lfs 2, 4(6)
  022aa98  fadds 1, 1, 2
  022aa9c  stfs 1, 4(4)
  022aaa0  lfs 1, 8(5)
  022aaa4  lfs 2, 8(6)
  022aaa8  fadds 1, 1, 2
  022aaac  stfs 1, 8(4)
  022aab0  lfs 1, 12(5)
  022aab4  addic 5, 5, 16
  022aab8  stfs 1, 12(4)
  022aabc  addic 4, 4, 16
  022aac0  bdnz 0x22aa68
  022aac4  ori 28, 26, 0
  022aac8  ori 24, 21, 0
  022aacc  addic 3, 1, 320
  022aad0  lwz 6, 28(25)
  022aad4  ori 4, 24, 0
  022aad8  li 5, 0
  022aadc  li 7, 9
  022aae0  bl 0x72280
  022aae4  nop
  022aae8  addic 28, 28, 1
  022aaec  addic 24, 24, 64
  022aaf0  cmpwi 28, 2
  022aaf4  bt 0, 0x22aacc
  022aaf8  lwz 3, 9004(31)
  022aafc  addic 29, 29, 1
  022ab00  addic 3, 3, -1
  022ab04  cmpw 29, 3
  022ab08  bt 0, 0x22aa0c
  022ab0c  addic 30, 30, 1
  022ab10  addic 27, 27, 4
  022ab14  cmpwi 30, 4
  022ab18  addic 22, 22, 1120
  022ab1c  bt 0, 0x22a934
  022ab20  ld 0, 912(1)
  022ab24  mtlr 0
  022ab28  lfd 30, 880(1)
  022ab2c  lfd 31, 888(1)
  022ab30  ld 20, 784(1)
  022ab34  ld 21, 792(1)
  022ab38  ld 22, 800(1)
  022ab3c  ld 23, 808(1)
  022ab40  ld 24, 816(1)
  022ab44  ld 25, 824(1)
  022ab48  ld 26, 832(1)
  022ab4c  ld 27, 840(1)
  022ab50  ld 28, 848(1)
  022ab54  ld 29, 856(1)
  022ab58  ld 30, 864(1)
  022ab5c  ld 31, 872(1)
  022ab60  addi 1, 1, 896
  022ab64  blr

M1259_0022ab80:   # 0x22ab80, 0x430 bytes
  022ab80  mr 11, 1
  022ab84  stdu 1, -288(1)
  022ab88  mflr 0
  022ab8c  std 0, 16(11)
  022ab90  stfd 31, -8(11)
  022ab94  std 31, -16(11)
  022ab98  addi 0, 1, 128
  022ab9c  stvx 30, 0, 0
  022aba0  addic 0, 0, 16
  022aba4  stvx 31, 0, 0
  022aba8  mr 31, 1
  022abac  lis 4, 119
  022abb0  lis 5, 114
  022abb4  std 25, -64(11)
  022abb8  lis 6, 241
  022abbc  lis 25, 35
  022abc0  lfs 1, -10588(4)
  022abc4  lfs 2, -3052(5)
  022abc8  addi 25, 25, -21656
  022abcc  std 30, -24(11)
  022abd0  lfs 3, -11512(6)
  022abd4  std 29, -32(11)
  022abd8  ori 30, 3, 0
  022abdc  lwz 29, 120(3)
  022abe0  fmadds 1, 1, 2, 3
  022abe4  stfs 1, -11512(6)
  022abe8  lfs 2, 0(25)
  022abec  fcmpu 0, 1, 2
  022abf0  std 28, -40(11)
  022abf4  std 27, -48(11)
  022abf8  std 26, -56(11)
  022abfc  std 24, -72(11)
  022ac00  std 23, -80(11)
  022ac04  std 22, -88(11)
  022ac08  std 21, -96(11)
  022ac0c  std 20, -104(11)
  022ac10  std 19, -112(11)
  022ac14  std 18, -120(11)
  022ac18  cror 6, 0, 2
  022ac1c  bt 6, 0x22ac2c
  022ac20  fsubs 1, 1, 2
  022ac24  lis 3, 241
  022ac28  stfs 1, -11512(3)
  022ac2c  li 28, 0
  022ac30  ori 24, 29, 0
  022ac34  ori 23, 28, 0
  022ac38  ori 26, 1, 0
  022ac3c  ori 21, 23, 0
  022ac40  ori 18, 24, 0
  022ac44  addic 3, 24, 8960
  022ac48  bl 0x4fff60
  022ac4c  nop
  022ac50  cmpwi 3, 0
  022ac54  bt 2, 0x22ae70
  022ac58  lwz 3, 9004(29)
  022ac5c  ld 4, 0(26)
  022ac60  ori 27, 23, 0
  022ac64  slwi 3, 3, 4
  022ac68  extsw 3, 3
  022ac6c  addic 3, 3, 127
  022ac70  rldicr 3, 3, 0, 59
  022ac74  neg 3, 3
  022ac78  addc 1, 3, 26
  022ac7c  stdx 4, 3, 26
  022ac80  lwz 3, 9004(29)
  022ac84  cmpwi 3, 0
  022ac88  bf 1, 0x22ad9c
  022ac8c  li 4, 8
  022ac90  lfs 31, 4(25)
  022ac94  addic 3, 29, 12
  022ac98  vspltisw 31, 0
  022ac9c  addic 22, 1, 112
  022aca0  addc 19, 21, 3
  022aca4  ori 20, 18, 0
  022aca8  lvlx 30, 4, 25
  022acac  clrldi 22, 22, 32
  022acb0  clrldi 19, 19, 32
  022acb4  vspltw 30, 30, 0
  022acb8  li 3, 9004
  022acbc  stw 23, 12(20)
  022acc0  addi 4, 3, 16
  022acc4  stw 23, 8(20)
  022acc8  stw 23, 4(20)
  022accc  stw 23, 0(20)
  022acd0  lvlx 2, 3, 29
  022acd4  lvrx 3, 4, 29
  022acd8  li 3, 8996
  022acdc  vor 2, 2, 3
  022ace0  addi 4, 3, 16
  022ace4  vspltisw 3, -1
  022ace8  vspltisw 5, -1
  022acec  vcfsx 2, 2, 0
  022acf0  vslw 3, 3, 3
  022acf4  lvlx 8, 3, 29
  022acf8  lvrx 9, 4, 29
  022acfc  vslw 5, 5, 5
  022ad00  vor 8, 8, 9
  022ad04  vspltisw 7, -1
  022ad08  vcfsx 10, 31, 0
  022ad0c  lis 4, 16256
  022ad10  fmr 1, 31
  022ad14  lis 5, 119
  022ad18  vrefp 4, 2
  022ad1c  lis 6, 114
  022ad20  ori 3, 22, 0
  022ad24  vnmsubfp 6, 4, 2, 30
  022ad28  vmaddfp 3, 4, 6, 3
  022ad2c  vslw 4, 7, 7
  022ad30  vspltisw 6, -1
  022ad34  vspltisw 7, -1
  022ad38  vslw 6, 6, 6
  022ad3c  vslw 7, 7, 7
  022ad40  vnmsubfp 9, 3, 2, 30
  022ad44  vmaddfp 3, 3, 9, 5
  022ad48  vnmsubfp 2, 3, 2, 30
  022ad4c  vmaddfp 2, 3, 2, 4
  022ad50  vmaddfp 2, 2, 8, 6
  022ad54  vmaddfp 2, 10, 2, 7
  022ad58  vspltw 2, 2, 0
  022ad5c  stvewx 2, 0, 20
  022ad60  stw 4, 0(19)
  022ad64  lfs 2, -10584(5)
  022ad68  lfs 3, -3052(6)
  022ad6c  fmuls 2, 2, 3
  022ad70  bl 0xfea60
  022ad74  nop
  022ad78  vspltisw 2, 1
  022ad7c  addic 27, 27, 1
  022ad80  lwz 3, 9004(29)
  022ad84  addic 20, 20, 16
  022ad88  cmpw 27, 3
  022ad8c  addic 19, 19, 16
  022ad90  vadduwm 31, 31, 2
  022ad94  addic 22, 22, 16
  022ad98  bt 0, 0x22acb8
  022ad9c  ori 4, 3, 0
  022ada0  li 3, 1
  022ada4  addic 4, 4, -1
  022ada8  cmpwi 4, 1
  022adac  bf 1, 0x22ae5c
  022adb0  addic 5, 1, 16
  022adb4  addic 4, 1, 128
  022adb8  lfs 1, 12(25)
  022adbc  clrldi 5, 5, 32
  022adc0  clrldi 4, 4, 32
  022adc4  addic 6, 18, 4496
  022adc8  lfs 2, 96(5)
  022adcc  lfs 3, 0(4)
  022add0  fadds 2, 2, 3
  022add4  addic 3, 3, 1
  022add8  stfs 2, 0(6)
  022addc  lfs 3, 100(5)
  022ade0  lfs 4, 4(4)
  022ade4  fadds 3, 3, 4
  022ade8  stfs 3, 4(6)
  022adec  lfs 4, 104(5)
  022adf0  lfs 5, 8(4)
  022adf4  fadds 4, 4, 5
  022adf8  addic 4, 4, 16
  022adfc  stfs 4, 8(6)
  022ae00  lfs 5, 108(5)
  022ae04  stfs 5, 12(6)
  022ae08  lfs 6, 128(5)
  022ae0c  fadds 2, 2, 6
  022ae10  stfs 2, 0(6)
  022ae14  lfs 6, 132(5)
  022ae18  fmuls 2, 2, 1
  022ae1c  fadds 3, 3, 6
  022ae20  stfs 3, 4(6)
  022ae24  lfs 6, 136(5)
  022ae28  fmuls 3, 3, 1
  022ae2c  stfs 2, 0(6)
  022ae30  addic 5, 5, 16
  022ae34  fadds 4, 4, 6
  022ae38  stfs 5, 12(6)
  022ae3c  fmuls 2, 4, 1
  022ae40  stfs 3, 4(6)
  022ae44  stfs 2, 8(6)
  022ae48  lwz 7, 9004(29)
  022ae4c  addic 6, 6, 16
  022ae50  addic 7, 7, -1
  022ae54  cmpw 3, 7
  022ae58  bt 0, 0x22adc8
  022ae5c  lis 3, 241
  022ae60  ori 1, 26, 0
  022ae64  lwz 3, -11508(3)
  022ae68  stw 3, 8960(24)
  022ae6c  b 0x22aed8
  022ae70  lwz 4, 9004(29)
  022ae74  li 3, 1
  022ae78  addic 4, 4, -1
  022ae7c  cmpwi 4, 1
  022ae80  bf 1, 0x22aed8
  022ae84  addic 4, 18, 16
  022ae88  addic 5, 18, 4496
  022ae8c  lfs 1, 0(4)
  022ae90  lfs 2, 0(5)
  022ae94  fadds 1, 1, 2
  022ae98  lfs 2, 4(4)
  022ae9c  lfs 3, 8(4)
  022aea0  addic 3, 3, 1
  022aea4  stfs 1, 0(4)
  022aea8  lfs 1, 4(5)
  022aeac  fadds 1, 2, 1
  022aeb0  stfs 1, 4(4)
  022aeb4  lfs 1, 8(5)
  022aeb8  addic 5, 5, 16
  022aebc  fadds 1, 3, 1
  022aec0  stfs 1, 8(4)
  022aec4  lwz 6, 9004(29)
  022aec8  addic 4, 4, 16
  022aecc  addic 6, 6, -1
  022aed0  cmpw 3, 6
  022aed4  bt 0, 0x22ae8c
  022aed8  addic 28, 28, 1
  022aedc  addic 24, 24, 4
  022aee0  cmpwi 28, 4
  022aee4  addic 21, 21, 1120
  022aee8  addic 18, 18, 1120
  022aeec  bt 0, 0x22ac44
  022aef0  lis 3, 149
  022aef4  lfs 1, 20(30)
  022aef8  addic 3, 3, 5056
  022aefc  lfs 2, 16(30)
  022af00  lfs 3, 324(3)
  022af04  lfs 4, 320(3)
  022af08  fsubs 1, 1, 3
  022af0c  fsubs 2, 2, 4
  022af10  lfs 3, 24(30)
  022af14  lfs 4, 328(3)
  022af18  fsubs 3, 3, 4
  022af1c  fmuls 1, 1, 1
  022af20  fmadds 1, 2, 2, 1
  022af24  lfs 2, 16(25)
  022af28  fmadds 1, 3, 3, 1
  022af2c  fsqrts 1, 1
  022af30  fcmpu 0, 1, 2
  022af34  cror 6, 1, 2
  022af38  bt 6, 0x22af50
  022af3c  lis 3, 113
  022af40  ori 4, 30, 0
  022af44  addic 3, 3, -26304
  022af48  bl 0x6d720
  022af4c  nop
  022af50  addi 11, 31, 288
  022af54  li 0, 128
  022af58  lvx 30, 31, 0
  022af5c  addic 0, 0, 16
  022af60  lvx 31, 31, 0
  022af64  ld 0, 16(11)
  022af68  mtlr 0
  022af6c  lfd 31, -8(11)
  022af70  ld 18, -120(11)
  022af74  ld 19, -112(11)
  022af78  ld 20, -104(11)
  022af7c  ld 21, -96(11)
  022af80  ld 22, -88(11)
  022af84  ld 23, -80(11)
  022af88  ld 24, -72(11)
  022af8c  ld 25, -64(11)
  022af90  ld 26, -56(11)
  022af94  ld 27, -48(11)
  022af98  ld 28, -40(11)
  022af9c  ld 29, -32(11)
  022afa0  ld 30, -24(11)
  022afa4  ld 31, -16(11)
  022afa8  mr 1, 11
  022afac  blr

UpdateMoby_1259:   # 0x22aff8, 0x648 bytes
  022aff8  stdu 1, -304(1)
  022affc  mflr 0
  022b000  std 0, 320(1)
  022b004  stfd 30, 288(1)
  022b008  stfd 31, 296(1)
  022b00c  std 31, 280(1)
  022b010  std 30, 272(1)
  022b014  ori 31, 3, 0
  022b018  lwz 30, 120(31)
  022b01c  lfs 1, 24(31)
  022b020  lwz 3, 8980(30)
  022b024  std 29, 264(1)
  022b028  cmpwi 3, -1
  022b02c  bt 2, 0x22b61c
  022b030  lbz 4, 32(31)
  022b034  cmpwi 4, 0
  022b038  cmpwi 1, 4, 1
  022b03c  cmpwi 6, 4, -1
  022b040  bt 1, 0x22b04c
  022b044  bf 25, 0x22b61c
  022b048  b 0x22b054
  022b04c  bf 5, 0x22b0a0
  022b050  b 0x22b61c
  022b054  lis 3, 241
  022b058  li 5, 22
  022b05c  lis 7, 241
  022b060  li 4, 0
  022b064  li 6, 11
  022b068  stw 5, -11504(3)
  022b06c  li 3, 45
  022b070  li 8, 23
  022b074  li 5, 34
  022b078  li 9, -1
  022b07c  stw 3, -11508(7)
  022b080  stw 4, 8960(30)
  022b084  li 3, 1
  022b088  stw 6, 8964(30)
  022b08c  stw 8, 8968(30)
  022b090  stw 5, 8972(30)
  022b094  stw 9, 8988(30)
  022b098  stb 3, 32(31)
  022b09c  b 0x22b61c
  022b0a0  lis 4, 164
  022b0a4  slwi 3, 3, 8
  022b0a8  lwz 4, -28512(4)
  022b0ac  lfs 3, 16(31)
  022b0b0  addc 3, 4, 3
  022b0b4  lfs 2, 20(31)
  022b0b8  clrldi 3, 3, 32
  022b0bc  lis 4, 115
  022b0c0  lfs 4, 16(3)
  022b0c4  lfs 5, 20(3)
  022b0c8  fsubs 4, 4, 3
  022b0cc  fsubs 5, 5, 2
  022b0d0  lis 3, 35
  022b0d4  addi 3, 3, -20560
  022b0d8  addic 4, 4, 22784
  022b0dc  fabs 8, 4
  022b0e0  fabs 7, 5
  022b0e4  stfs 4, 208(1)
  022b0e8  stfs 5, 212(1)
  022b0ec  fsubs 4, 8, 7
  022b0f0  stfs 4, 216(1)
  022b0f4  lwz 5, 208(1)
  022b0f8  lfs 4, 0(3)
  022b0fc  lfs 5, 208(1)
  022b100  lwz 3, 212(1)
  022b104  lfs 6, 212(1)
  022b108  fabs 5, 5
  022b10c  lwz 6, 216(1)
  022b110  rlwinm 3, 3, 3, 29, 29
  022b114  fabs 9, 6
  022b118  lfs 6, 216(1)
  022b11c  rlwimi 3, 6, 2, 30, 30
  022b120  fsub 10, 6, 4
  022b124  rlwimi 3, 5, 4, 28, 28
  022b128  fsub 11, 6, 4
  022b12c  ori 5, 4, 0
  022b130  rlwimi 5, 3, 2, 26, 28
  022b134  slwi 3, 3, 2
  022b138  clrldi 5, 5, 32
  022b13c  fsel 7, 10, 5, 7
  022b140  lfsx 6, 4, 3
  022b144  lfs 5, 4(5)
  022b148  fsel 8, 11, 9, 8
  022b14c  fcmpu 0, 7, 4
  022b150  bt 1, 0x22b158
  022b154  b 0x22b27c
  022b158  fsubs 9, 8, 7
  022b15c  fadds 7, 8, 7
  022b160  addic 6, 1, 16
  022b164  li 3, 2
  022b168  addic 4, 6, 220
  022b16c  addic 5, 6, 204
  022b170  mtctr 3
  022b174  fdivs 7, 9, 7
  022b178  fmuls 9, 7, 7
  022b17c  stfs 7, 232(1)
  022b180  stfs 7, 224(1)
  022b184  stfs 7, 228(1)
  022b188  stfs 7, 220(1)
  022b18c  lfs 10, 232(1)
  022b190  lfs 11, 224(1)
  022b194  lfs 12, 228(1)
  022b198  fmuls 7, 9, 9
  022b19c  fmuls 11, 11, 9
  022b1a0  fmuls 10, 10, 7
  022b1a4  fmuls 8, 7, 7
  022b1a8  fmuls 7, 12, 7
  022b1ac  stfs 11, 224(1)
  022b1b0  fmuls 9, 10, 9
  022b1b4  stfs 7, 228(1)
  022b1b8  stfs 9, 232(1)
  022b1bc  lfs 7, 204(6)
  022b1c0  fmuls 7, 7, 8
  022b1c4  stfs 7, 220(6)
  022b1c8  lfs 7, 4(5)
  022b1cc  addic 5, 5, 8
  022b1d0  fmuls 7, 7, 8
  022b1d4  addic 6, 6, 8
  022b1d8  stfs 7, 4(4)
  022b1dc  addic 4, 4, 8
  022b1e0  bdnz 0x22b1bc
  022b1e4  ori 7, 1, 0
  022b1e8  li 4, 4
  022b1ec  lis 6, 115
  022b1f0  addic 5, 7, 220
  022b1f4  mtctr 4
  022b1f8  addic 6, 6, 22752
  022b1fc  ori 4, 5, 0
  022b200  lfs 7, 220(7)
  022b204  lfs 8, 0(6)
  022b208  fmuls 7, 7, 8
  022b20c  lfs 8, 4(6)
  022b210  addic 6, 6, 8
  022b214  stfs 7, 220(7)
  022b218  lfs 7, 4(5)
  022b21c  addic 7, 7, 8
  022b220  fmuls 7, 7, 8
  022b224  stfs 7, 4(5)
  022b228  addic 5, 5, 8
  022b22c  bdnz 0x22b200
  022b230  ori 5, 3, 0
  022b234  ori 3, 1, 0
  022b238  mtctr 5
  022b23c  lfs 7, 220(3)
  022b240  fadds 4, 4, 7
  022b244  lfs 7, 4(4)
  022b248  addic 3, 3, 16
  022b24c  lfs 8, 8(4)
  022b250  lfs 9, 12(4)
  022b254  addic 4, 4, 16
  022b258  fadds 4, 4, 7
  022b25c  fadds 4, 4, 8
  022b260  fadds 4, 4, 9
  022b264  bdnz 0x22b23c
  022b268  lis 3, 35
  022b26c  addi 3, 3, -20560
  022b270  lfs 7, 4(3)
  022b274  fadds 4, 4, 7
  022b278  fmadds 4, 4, 6, 5
  022b27c  lis 3, 164
  022b280  lwz 4, 8980(30)
  022b284  slwi 4, 4, 8
  022b288  lwz 3, -28512(3)
  022b28c  stfs 4, 72(31)
  022b290  addc 3, 3, 4
  022b294  clrldi 3, 3, 32
  022b298  lfs 4, 20(3)
  022b29c  lfs 5, 16(3)
  022b2a0  fsubs 2, 2, 4
  022b2a4  fsubs 3, 3, 5
  022b2a8  lfs 4, 24(3)
  022b2ac  fsubs 1, 1, 4
  022b2b0  lis 3, 35
  022b2b4  addi 29, 3, -20560
  022b2b8  lis 3, 114
  022b2bc  fmuls 2, 2, 2
  022b2c0  fmadds 2, 3, 3, 2
  022b2c4  lfs 3, 9000(30)
  022b2c8  fmadds 1, 1, 1, 2
  022b2cc  fsqrts 2, 1
  022b2d0  lfs 1, 8984(30)
  022b2d4  stfs 2, 8996(30)
  022b2d8  lfs 2, 8(29)
  022b2dc  lfs 4, -3052(3)
  022b2e0  fmuls 2, 3, 2
  022b2e4  fmuls 2, 2, 4
  022b2e8  bl 0x502578
  022b2ec  nop
  022b2f0  fmr 4, 1
  022b2f4  lis 3, 165
  022b2f8  addic 3, 3, 7136
  022b2fc  fmr 2, 4
  022b300  stfs 2, 8984(30)
  022b304  lfs 1, 12(29)
  022b308  lfs 3, 16(29)
  022b30c  fsubs 1, 1, 2
  022b310  fsubs 3, 3, 2
  022b314  lfs 6, 20(29)
  022b318  fsub 5, 2, 1
  022b31c  fsel 1, 5, 1, 2
  022b320  lfs 5, 24(29)
  022b324  lwz 4, 8976(30)
  022b328  slwi 4, 4, 2
  022b32c  extsw 4, 4
  022b330  fsub 7, 3, 1
  022b334  fsel 1, 7, 3, 1
  022b338  lfs 7, 28(29)
  022b33c  lwzx 3, 3, 4
  022b340  lfs 9, 36(29)
  022b344  fcmpu 0, 2, 9
  022b348  lfs 3, 16(3)
  022b34c  lfs 10, 32(29)
  022b350  fmuls 8, 1, 1
  022b354  cror 6, 0, 2
  022b358  fmuls 11, 8, 1
  022b35c  fmuls 9, 8, 11
  022b360  fmadds 1, 11, 6, 1
  022b364  fmuls 6, 8, 9
  022b368  fmadds 1, 9, 5, 1
  022b36c  fmuls 5, 8, 6
  022b370  fmadds 1, 6, 7, 1
  022b374  fmadds 1, 5, 10, 1
  022b378  bt 6, 0x22b3a4
  022b37c  lis 4, 35
  022b380  addi 4, 4, -20560
  022b384  lfs 5, 40(4)
  022b388  fcmpu 0, 2, 5
  022b38c  cror 6, 1, 2
  022b390  bt 6, 0x22b3a4
  022b394  lis 4, 35
  022b398  addi 4, 4, -20560
  022b39c  lfs 5, 44(4)
  022b3a0  fsubs 1, 5, 1
  022b3a4  lis 4, 35
  022b3a8  addi 4, 4, -20560
  022b3ac  lfs 5, 48(4)
  022b3b0  fcmpu 0, 4, 5
  022b3b4  cror 6, 0, 2
  022b3b8  bt 6, 0x22b3e4
  022b3bc  lis 4, 35
  022b3c0  addi 4, 4, -20560
  022b3c4  lfs 4, 52(4)
  022b3c8  fcmpu 0, 2, 4
  022b3cc  cror 6, 1, 2
  022b3d0  bt 6, 0x22b3e4
  022b3d4  lis 4, 35
  022b3d8  addi 4, 4, -20560
  022b3dc  lfs 2, 44(4)
  022b3e0  fsubs 1, 2, 1
  022b3e4  lis 4, 35
  022b3e8  addi 29, 4, -20560
  022b3ec  addic 4, 31, 16
  022b3f0  lfs 30, 56(29)
  022b3f4  lfs 31, 60(29)
  022b3f8  fmadds 1, 1, 30, 30
  022b3fc  lfs 2, 44(29)
  022b400  stfs 3, 64(1)
  022b404  lfs 3, 20(3)
  022b408  stfs 3, 68(1)
  022b40c  lfs 3, 24(3)
  022b410  stfs 3, 72(1)
  022b414  lfs 3, 28(3)
  022b418  fsubs 2, 1, 2
  022b41c  fsub 4, 31, 1
  022b420  stfs 3, 76(1)
  022b424  lfs 3, 32(3)
  022b428  stfs 3, 80(1)
  022b42c  lfs 3, 36(3)
  022b430  stfs 3, 84(1)
  022b434  lfs 3, 40(3)
  022b438  stfs 3, 88(1)
  022b43c  fsel 1, 4, 1, 2
  022b440  ld 5, 64(1)
  022b444  lfs 3, 44(3)
  022b448  ori 3, 4, 0
  022b44c  stfs 3, 92(1)
  022b450  ld 6, 72(1)
  022b454  ld 7, 80(1)
  022b458  ld 8, 88(1)
  022b45c  fabs 1, 1
  022b460  bl 0x1099f8
  022b464  nop
  022b468  lis 3, 151
  022b46c  lfs 1, 20(31)
  022b470  addic 3, 3, -25376
  022b474  lfs 2, 16(31)
  022b478  lfs 3, 132(3)
  022b47c  lfs 4, 128(3)
  022b480  fsubs 3, 1, 3
  022b484  fsubs 4, 2, 4
  022b488  fmuls 3, 3, 3
  022b48c  fmadds 3, 4, 4, 3
  022b490  lfs 4, 64(29)
  022b494  fsqrts 3, 3
  022b498  fcmpu 0, 3, 4
  022b49c  bt 1, 0x22b61c
  022b4a0  lbz 3, 49(31)
  022b4a4  cmpwi 3, 0
  022b4a8  bf 2, 0x22b538
  022b4ac  lis 3, 164
  022b4b0  lwz 4, 8980(30)
  022b4b4  slwi 4, 4, 8
  022b4b8  lwz 3, -28512(3)
  022b4bc  addc 3, 3, 4
  022b4c0  clrldi 3, 3, 32
  022b4c4  lbz 4, 49(3)
  022b4c8  cmpwi 4, 0
  022b4cc  bf 2, 0x22b538
  022b4d0  ori 4, 3, 0
  022b4d4  lis 5, 16768
  022b4d8  lis 6, 35
  022b4dc  addic 3, 1, 112
  022b4e0  lfs 3, 16(4)
  022b4e4  fadds 2, 2, 3
  022b4e8  lfs 3, 24(31)
  022b4ec  addi 6, 6, -20560
  022b4f0  stfs 2, 112(1)
  022b4f4  lfs 4, 20(4)
  022b4f8  fmuls 2, 2, 30
  022b4fc  fadds 1, 1, 4
  022b500  stfs 1, 116(1)
  022b504  lfs 4, 24(4)
  022b508  fmuls 1, 1, 30
  022b50c  stfs 2, 112(1)
  022b510  fadds 3, 3, 4
  022b514  stw 5, 124(1)
  022b518  fmuls 2, 3, 30
  022b51c  stfs 1, 116(1)
  022b520  stfs 2, 120(1)
  022b524  lfs 1, 68(6)
  022b528  bl 0x502910
  022b52c  nop
  022b530  cmpwi 3, -1
  022b534  bt 2, 0x22b61c
  022b538  lwz 3, 9008(30)
  022b53c  cmpwi 3, -1
  022b540  bt 2, 0x22b560
  022b544  lis 5, 149
  022b548  extsw 4, 3
  022b54c  addic 3, 5, 5376
  022b550  bl 0x110b70
  022b554  nop
  022b558  cmpwi 3, 0
  022b55c  bf 2, 0x22b61c
  022b560  lwz 3, 8992(30)
  022b564  cmpwi 3, 0
  022b568  bt 2, 0x22b61c
  022b56c  ori 3, 31, 0
  022b570  bl 0x22ab80
  022b574  lwz 3, 8980(30)
  022b578  cmpwi 3, -1
  022b57c  bt 2, 0x22b61c
  022b580  lis 3, 164
  022b584  lwz 4, 8980(30)
  022b588  lfs 1, 16(31)
  022b58c  lis 5, 1
  022b590  slwi 4, 4, 8
  022b594  addic 30, 1, 160
  022b598  lis 7, 161
  022b59c  lwz 3, -28512(3)
  022b5a0  lfs 2, 20(31)
  022b5a4  addic 7, 7, 23856
  022b5a8  addc 3, 3, 4
  022b5ac  stfs 1, 128(1)
  022b5b0  lfs 1, 24(31)
  022b5b4  ori 4, 31, 0
  022b5b8  clrldi 6, 3, 32
  022b5bc  stfs 2, 132(1)
  022b5c0  lfs 2, 28(31)
  022b5c4  ori 3, 30, 0
  022b5c8  stfs 1, 136(1)
  022b5cc  ori 5, 5, 1
  022b5d0  stfs 2, 140(1)
  022b5d4  lfs 1, 16(6)
  022b5d8  stfs 1, 144(1)
  022b5dc  lfs 1, 20(6)
  022b5e0  stfs 1, 148(1)
  022b5e4  lfs 1, 24(6)
  022b5e8  stfs 1, 152(1)
  022b5ec  lfs 2, 28(6)
  022b5f0  fmr 1, 31
  022b5f4  stfs 2, 156(1)
  022b5f8  bl 0x10581c
  022b5fc  nop
  022b600  addic 3, 1, 128
  022b604  addic 4, 1, 144
  022b608  li 5, 0
  022b60c  li 6, 0
  022b610  ori 7, 30, 0
  022b614  bl 0x57820
  022b618  nop
  022b61c  ld 0, 320(1)
  022b620  mtlr 0
  022b624  lfd 30, 288(1)
  022b628  lfd 31, 296(1)
  022b62c  ld 29, 264(1)
  022b630  ld 30, 272(1)
  022b634  ld 31, 280(1)
  022b638  addi 1, 1, 304
  022b63c  blr

M1259_0022b640:   # 0x22b640, 0x14 bytes
  022b640  lis 3, 119
  022b644  lis 4, 1
  022b648  addic 3, 3, -10576
  022b64c  stw 4, 72(3)
  022b650  blr

M1259_0022b658:   # 0x22b658, 0x10 bytes
  022b658  lis 3, 119
  022b65c  addic 3, 3, 4928
  022b660  lfs 1, 8(3)
  022b664  blr

M1259_0022b668:   # 0x22b668, 0x2c bytes
  022b668  stdu 1, -112(1)
  022b66c  mflr 0
  022b670  std 0, 128(1)
  022b674  lis 3, 119
  022b678  addic 3, 3, 4928
  022b67c  bl 0x17e558
  022b680  nop
  022b684  ld 0, 128(1)
  022b688  mtlr 0
  022b68c  addi 1, 1, 112
  022b690  blr
