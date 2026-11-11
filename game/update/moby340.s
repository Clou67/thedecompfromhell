# game/update/moby340.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M340_0034a598:   # 0x34a598, 0x14 bytes
  034a598  lis 3, 132
  034a59c  lis 4, 1
  034a5a0  addic 3, 3, -108
  034a5a4  stw 4, 72(3)
  034a5a8  blr

M340_0034a5d0:   # 0x34a5d0, 0x2f0 bytes
  034a5d0  stdu 1, -160(1)
  034a5d4  mflr 0
  034a5d8  std 0, 176(1)
  034a5dc  stfd 30, 144(1)
  034a5e0  stfd 31, 152(1)
  034a5e4  std 31, 136(1)
  034a5e8  lbz 4, 32(3)
  034a5ec  std 30, 128(1)
  034a5f0  ori 31, 3, 0
  034a5f4  lwz 30, 120(3)
  034a5f8  std 29, 120(1)
  034a5fc  std 28, 112(1)
  034a600  cmpwi 4, 9
  034a604  bf 2, 0x34a660
  034a608  lwz 4, 568(30)
  034a60c  cmpwi 4, -1
  034a610  bt 2, 0x34a654
  034a614  sldi 3, 4, 7
  034a618  sldi 6, 4, 4
  034a61c  lis 5, 150
  034a620  subc 3, 3, 6
  034a624  addic 5, 5, 14176
  034a628  extsw 3, 3
  034a62c  addc 3, 5, 3
  034a630  lwz 5, 136(3)
  034a634  cmpw 5, 31
  034a638  bf 2, 0x34a654
  034a63c  lbz 3, 116(3)
  034a640  cmpwi 3, 0
  034a644  bt 2, 0x34a654
  034a648  extsw 3, 4
  034a64c  bl 0x15cdb0
  034a650  nop
  034a654  li 3, -1
  034a658  stw 3, 568(30)
  034a65c  b 0x34a898
  034a660  ori 3, 31, 0
  034a664  lwz 4, 568(30)
  034a668  extsw 4, 4
  034a66c  bl 0x15cc7c
  034a670  nop
  034a674  cmpwi 3, 0
  034a678  bf 2, 0x34a6b8
  034a67c  lbz 3, 83(31)
  034a680  cmpwi 3, 7
  034a684  bt 1, 0x34a6b8
  034a688  li 3, 0
  034a68c  li 4, 4
  034a690  ori 5, 31, 0
  034a694  bl 0x15d12c
  034a698  nop
  034a69c  stw 3, 568(30)
  034a6a0  li 3, 1024
  034a6a4  bl 0x502730
  034a6a8  nop
  034a6ac  li 3, 0
  034a6b0  stfs 1, 560(30)
  034a6b4  stw 3, 564(30)
  034a6b8  lbz 3, 83(31)
  034a6bc  cmpwi 3, 1
  034a6c0  cmpwi 1, 3, -1
  034a6c4  cmpwi 6, 3, 0
  034a6c8  cmpwi 7, 3, 4
  034a6cc  bt 1, 0x34a6dc
  034a6d0  bf 5, 0x34a7a0
  034a6d4  bf 25, 0x34a6f8
  034a6d8  b 0x34a71c
  034a6dc  bt 29, 0x34a6ec
  034a6e0  cmpwi 3, 2
  034a6e4  bf 1, 0x34a73c
  034a6e8  b 0x34a75c
  034a6ec  cmpwi 3, 7
  034a6f0  bf 1, 0x34a77c
  034a6f4  b 0x34a7a0
  034a6f8  li 3, 1024
  034a6fc  bl 0x502730
  034a700  nop
  034a704  lis 3, 53
  034a708  addi 3, 3, -23120
  034a70c  lfs 30, 0(3)
  034a710  lfs 31, 4(3)
  034a714  fmuls 30, 1, 30
  034a718  b 0x34a7f8
  034a71c  li 3, 1024
  034a720  bl 0x502730
  034a724  nop
  034a728  lis 3, 53
  034a72c  fmr 30, 1
  034a730  addi 3, 3, -23120
  034a734  lfs 31, 8(3)
  034a738  b 0x34a7f8
  034a73c  li 3, 1024
  034a740  bl 0x502730
  034a744  nop
  034a748  lis 3, 53
  034a74c  fmr 30, 1
  034a750  addi 3, 3, -23120
  034a754  lfs 31, 12(3)
  034a758  b 0x34a7f8
  034a75c  li 3, 1024
  034a760  bl 0x502730
  034a764  nop
  034a768  lis 3, 53
  034a76c  fmr 30, 1
  034a770  addi 3, 3, -23120
  034a774  lfs 31, 16(3)
  034a778  b 0x34a7f8
  034a77c  li 3, 1024
  034a780  bl 0x502730
  034a784  nop
  034a788  lis 3, 53
  034a78c  addi 3, 3, -23120
  034a790  lfs 30, 20(3)
  034a794  lfs 31, 4(3)
  034a798  fmuls 30, 1, 30
  034a79c  b 0x34a7f8
  034a7a0  lwz 4, 568(30)
  034a7a4  cmpwi 4, -1
  034a7a8  bt 2, 0x34a7ec
  034a7ac  sldi 3, 4, 7
  034a7b0  sldi 6, 4, 4
  034a7b4  lis 5, 150
  034a7b8  subc 3, 3, 6
  034a7bc  addic 5, 5, 14176
  034a7c0  extsw 3, 3
  034a7c4  addc 3, 5, 3
  034a7c8  lwz 5, 136(3)
  034a7cc  cmpw 5, 31
  034a7d0  bf 2, 0x34a7ec
  034a7d4  lbz 3, 116(3)
  034a7d8  cmpwi 3, 0
  034a7dc  bt 2, 0x34a7ec
  034a7e0  extsw 3, 4
  034a7e4  bl 0x15cdb0
  034a7e8  nop
  034a7ec  li 3, -1
  034a7f0  stw 3, 568(30)
  034a7f4  b 0x34a898
  034a7f8  addic 31, 30, 560
  034a7fc  li 3, 1024
  034a800  bl 0x502730
  034a804  nop
  034a808  lis 29, 114
  034a80c  lis 3, 53
  034a810  addi 28, 3, -23120
  034a814  ori 3, 31, 0
  034a818  lfs 2, -3052(29)
  034a81c  fmuls 2, 1, 2
  034a820  lfs 3, 24(28)
  034a824  fmr 1, 30
  034a828  fmuls 2, 2, 3
  034a82c  bl 0x109af0
  034a830  nop
  034a834  lfs 3, 28(28)
  034a838  lfs 2, -3052(29)
  034a83c  addic 3, 30, 564
  034a840  fmr 1, 31
  034a844  fmuls 2, 2, 3
  034a848  bl 0x109af0
  034a84c  nop
  034a850  lwz 3, 568(30)
  034a854  lfs 1, 560(30)
  034a858  extsw 31, 3
  034a85c  bl 0x502758
  034a860  nop
  034a864  ori 4, 3, 0
  034a868  ori 3, 31, 0
  034a86c  bl 0x15d710
  034a870  nop
  034a874  lwz 3, 568(30)
  034a878  lfs 1, 564(30)
  034a87c  extsw 31, 3
  034a880  bl 0x502758
  034a884  nop
  034a888  ori 4, 3, 0
  034a88c  ori 3, 31, 0
  034a890  bl 0x15d734
  034a894  nop
  034a898  ld 0, 176(1)
  034a89c  mtlr 0
  034a8a0  lfd 30, 144(1)
  034a8a4  lfd 31, 152(1)
  034a8a8  ld 28, 112(1)
  034a8ac  ld 29, 120(1)
  034a8b0  ld 30, 128(1)
  034a8b4  ld 31, 136(1)
  034a8b8  addi 1, 1, 160
  034a8bc  blr

M340_0034a8d8:   # 0x34a8d8, 0x15c bytes
  034a8d8  stdu 1, -256(1)
  034a8dc  mflr 0
  034a8e0  std 0, 272(1)
  034a8e4  stfd 31, 248(1)
  034a8e8  std 31, 240(1)
  034a8ec  ori 31, 3, 0
  034a8f0  lis 3, 53
  034a8f4  li 4, 0
  034a8f8  std 30, 232(1)
  034a8fc  addi 3, 3, -22336
  034a900  lwz 30, 120(31)
  034a904  lfs 31, 0(3)
  034a908  stw 4, 220(1)
  034a90c  stw 4, 216(1)
  034a910  lwz 3, 568(30)
  034a914  stw 4, 212(1)
  034a918  cmpwi 3, -1
  034a91c  std 29, 224(1)
  034a920  stw 4, 208(1)
  034a924  bt 2, 0x34a96c
  034a928  sldi 4, 3, 7
  034a92c  sldi 6, 3, 4
  034a930  lis 5, 150
  034a934  subc 4, 4, 6
  034a938  addic 5, 5, 14312
  034a93c  extsw 4, 4
  034a940  lwzx 5, 5, 4
  034a944  cmpw 5, 31
  034a948  bf 2, 0x34a96c
  034a94c  lis 5, 150
  034a950  addic 5, 5, 14292
  034a954  lbzx 4, 5, 4
  034a958  cmpwi 4, 0
  034a95c  bt 2, 0x34a96c
  034a960  extsw 3, 3
  034a964  bl 0x15cdb0
  034a968  nop
  034a96c  li 29, -1
  034a970  ori 3, 31, 0
  034a974  li 4, 0
  034a978  li 5, -1
  034a97c  stw 29, 568(30)
  034a980  bl 0xfd8d0
  034a984  nop
  034a988  addic 30, 1, 192
  034a98c  ori 3, 31, 0
  034a990  li 4, 5
  034a994  ori 5, 30, 0
  034a998  bl 0xf1114
  034a99c  nop
  034a9a0  lis 3, 53
  034a9a4  fmr 1, 31
  034a9a8  li 6, 1
  034a9ac  fmr 2, 31
  034a9b0  addi 5, 3, -22336
  034a9b4  li 7, 0
  034a9b8  addic 4, 1, 208
  034a9bc  ori 3, 31, 0
  034a9c0  li 8, 10
  034a9c4  lfs 4, 12(5)
  034a9c8  lfs 3, 4(5)
  034a9cc  li 9, 3
  034a9d0  lfs 5, 8(5)
  034a9d4  li 10, 4
  034a9d8  lfs 7, 16(5)
  034a9dc  fmr 6, 4
  034a9e0  std 29, 144(1)
  034a9e4  ori 5, 30, 0
  034a9e8  std 6, 160(1)
  034a9ec  std 6, 168(1)
  034a9f0  std 29, 176(1)
  034a9f4  std 7, 184(1)
  034a9f8  bl 0x10e030
  034a9fc  nop
  034aa00  li 3, 1
  034aa04  li 4, 0
  034aa08  ori 5, 31, 0
  034aa0c  bl 0x15d12c
  034aa10  nop
  034aa14  ld 0, 272(1)
  034aa18  mtlr 0
  034aa1c  lfd 31, 248(1)
  034aa20  ld 29, 224(1)
  034aa24  ld 30, 232(1)
  034aa28  ld 31, 240(1)
  034aa2c  addi 1, 1, 256
  034aa30  blr

M340_0034aa40:   # 0x34aa40, 0x130 bytes
  034aa40  stdu 1, -208(1)
  034aa44  mflr 0
  034aa48  std 0, 224(1)
  034aa4c  std 31, 200(1)
  034aa50  std 30, 192(1)
  034aa54  ori 31, 3, 0
  034aa58  li 30, 0
  034aa5c  lwz 3, 120(31)
  034aa60  lwz 4, 56(3)
  034aa64  cmpwi 4, 0
  034aa68  bf 2, 0x34aa78
  034aa6c  lhz 4, 310(3)
  034aa70  cmpwi 4, 0
  034aa74  bt 2, 0x34aa90
  034aa78  lis 4, 53
  034aa7c  lfs 5, 320(3)
  034aa80  addi 4, 4, -21964
  034aa84  lfs 1, 0(4)
  034aa88  fmuls 5, 5, 1
  034aa8c  b 0x34aa94
  034aa90  lfs 5, 320(3)
  034aa94  addic 5, 1, 112
  034aa98  fmr 1, 5
  034aa9c  ori 3, 31, 0
  034aaa0  bl 0x1118d8
  034aaa4  nop
  034aaa8  lfs 2, 20(31)
  034aaac  lis 3, 164
  034aab0  lfs 1, 116(1)
  034aab4  lfs 4, 16(31)
  034aab8  fsubs 5, 2, 1
  034aabc  lfs 3, 112(1)
  034aac0  fsubs 6, 4, 3
  034aac4  lwz 3, -28500(3)
  034aac8  cmpwi 3, 0
  034aacc  fmuls 5, 5, 5
  034aad0  fmadds 5, 6, 6, 5
  034aad4  fsqrts 5, 5
  034aad8  bt 2, 0x34ab54
  034aadc  lis 4, 53
  034aae0  addi 4, 4, -21964
  034aae4  lfs 6, 4(4)
  034aae8  cmpw 3, 31
  034aaec  bt 2, 0x34ab48
  034aaf0  lhz 4, 166(3)
  034aaf4  cmpwi 4, 340
  034aaf8  bf 2, 0x34ab48
  034aafc  lfs 7, 20(3)
  034ab00  lfs 8, 16(3)
  034ab04  fsubs 9, 2, 7
  034ab08  fsubs 10, 4, 8
  034ab0c  fmuls 9, 9, 9
  034ab10  fmadds 9, 10, 10, 9
  034ab14  fsqrts 9, 9
  034ab18  fcmpu 0, 9, 6
  034ab1c  bt 0, 0x34ab40
  034ab20  fsubs 7, 7, 1
  034ab24  fsubs 8, 8, 3
  034ab28  fmuls 7, 7, 7
  034ab2c  fmadds 7, 8, 8, 7
  034ab30  fsqrts 7, 7
  034ab34  fcmpu 0, 7, 5
  034ab38  cror 6, 1, 2
  034ab3c  bt 6, 0x34ab48
  034ab40  ori 3, 30, 0
  034ab44  b 0x34ab58
  034ab48  lwz 3, 40(3)
  034ab4c  cmpwi 3, 0
  034ab50  bf 2, 0x34aae8
  034ab54  li 3, 1
  034ab58  ld 0, 224(1)
  034ab5c  mtlr 0
  034ab60  ld 30, 192(1)
  034ab64  ld 31, 200(1)
  034ab68  addi 1, 1, 208
  034ab6c  blr

M340_0034ab98:   # 0x34ab98, 0x690 bytes
  034ab98  stdu 1, -336(1)
  034ab9c  mflr 0
  034aba0  std 0, 352(1)
  034aba4  stfd 29, 312(1)
  034aba8  stfd 30, 320(1)
  034abac  stfd 31, 328(1)
  034abb0  std 31, 304(1)
  034abb4  std 30, 296(1)
  034abb8  ori 31, 3, 0
  034abbc  std 29, 288(1)
  034abc0  ori 30, 4, 0
  034abc4  li 29, 0
  034abc8  lwz 3, 120(31)
  034abcc  lwz 4, 56(3)
  034abd0  cmpwi 4, 0
  034abd4  bf 2, 0x34abe4
  034abd8  lhz 4, 310(3)
  034abdc  cmpwi 4, 0
  034abe0  bt 2, 0x34abfc
  034abe4  lis 4, 53
  034abe8  lfs 1, 320(3)
  034abec  addi 4, 4, -21648
  034abf0  lfs 2, 0(4)
  034abf4  fmuls 1, 1, 2
  034abf8  b 0x34ac00
  034abfc  lfs 1, 320(3)
  034ac00  addic 5, 1, 112
  034ac04  ori 3, 31, 0
  034ac08  bl 0x1118d8
  034ac0c  nop
  034ac10  lfs 1, 20(31)
  034ac14  lis 3, 53
  034ac18  lfs 4, 116(1)
  034ac1c  lis 4, 164
  034ac20  addi 3, 3, -21648
  034ac24  lfs 2, 16(31)
  034ac28  fsubs 1, 1, 4
  034ac2c  lfs 3, 112(1)
  034ac30  fsubs 2, 2, 3
  034ac34  lfs 5, 4(3)
  034ac38  lfs 31, 120(1)
  034ac3c  li 3, 1
  034ac40  fmr 11, 5
  034ac44  lwz 4, -28500(4)
  034ac48  cmpwi 4, 0
  034ac4c  fmuls 1, 1, 1
  034ac50  fmr 10, 11
  034ac54  fmadds 1, 2, 2, 1
  034ac58  fmr 9, 10
  034ac5c  fsqrts 1, 1
  034ac60  bt 2, 0x34ae44
  034ac64  lis 6, 53
  034ac68  lis 5, 132
  034ac6c  fmr 2, 5
  034ac70  addi 6, 6, -21648
  034ac74  lfs 8, 8(6)
  034ac78  stw 29, 0(30)
  034ac7c  stw 29, 4(30)
  034ac80  stw 29, 8(30)
  034ac84  stw 29, 12(30)
  034ac88  lfs 0, 12(5)
  034ac8c  cmpw 4, 31
  034ac90  bt 2, 0x34ad3c
  034ac94  lhz 6, 166(4)
  034ac98  lhz 7, 166(31)
  034ac9c  extsh 6, 6
  034aca0  extsh 7, 7
  034aca4  cmpw 6, 7
  034aca8  bf 2, 0x34ad3c
  034acac  lfs 13, 20(4)
  034acb0  lfs 12, 16(4)
  034acb4  lfs 7, 20(31)
  034acb8  lfs 6, 16(31)
  034acbc  fsubs 30, 13, 7
  034acc0  fsubs 29, 12, 6
  034acc4  fmuls 30, 30, 30
  034acc8  fmadds 30, 29, 29, 30
  034accc  fsqrts 30, 30
  034acd0  fcmpu 0, 30, 8
  034acd4  cror 6, 1, 2
  034acd8  bt 6, 0x34ad18
  034acdc  fsubs 6, 6, 12
  034ace0  fsubs 7, 7, 13
  034ace4  lfs 12, 24(31)
  034ace8  lfs 13, 24(4)
  034acec  fsubs 12, 12, 13
  034acf0  fmadds 9, 0, 6, 9
  034acf4  fmadds 10, 0, 7, 10
  034acf8  fmadds 11, 0, 12, 11
  034acfc  stfs 9, 0(30)
  034ad00  stfs 10, 4(30)
  034ad04  stfs 11, 8(30)
  034ad08  lfs 0, 12(5)
  034ad0c  lfs 12, 16(4)
  034ad10  lfs 13, 20(4)
  034ad14  fadds 2, 0, 2
  034ad18  fsubs 6, 13, 4
  034ad1c  fsubs 7, 12, 3
  034ad20  fmuls 6, 6, 6
  034ad24  fmadds 6, 7, 7, 6
  034ad28  fsqrts 6, 6
  034ad2c  fcmpu 0, 6, 1
  034ad30  cror 6, 1, 2
  034ad34  bt 6, 0x34ad3c
  034ad38  ori 3, 29, 0
  034ad3c  lwz 4, 40(4)
  034ad40  cmpwi 4, 0
  034ad44  bf 2, 0x34ac8c
  034ad48  cmpwi 3, 0
  034ad4c  bf 2, 0x34ae44
  034ad50  lfs 6, 20(31)
  034ad54  lfs 7, 16(31)
  034ad58  fsubs 6, 6, 4
  034ad5c  lfs 8, 24(31)
  034ad60  fsubs 7, 7, 3
  034ad64  fsubs 8, 8, 31
  034ad68  lis 3, 53
  034ad6c  addi 3, 3, -21648
  034ad70  fmuls 12, 6, 6
  034ad74  lfs 13, 24(3)
  034ad78  lfs 0, 12(3)
  034ad7c  fsub 13, 13, 1
  034ad80  lfs 31, 20(3)
  034ad84  fsub 1, 1, 0
  034ad88  lfs 30, 16(3)
  034ad8c  lfs 0, 28(3)
  034ad90  fmadds 12, 7, 7, 12
  034ad94  lfs 29, 32(3)
  034ad98  fsel 13, 13, 5, 31
  034ad9c  fadds 2, 2, 0
  034ada0  fmadds 12, 8, 8, 12
  034ada4  fsel 1, 1, 13, 30
  034ada8  fmr 13, 29
  034adac  stw 29, 12(30)
  034adb0  fsqrts 12, 12
  034adb4  fmuls 1, 1, 0
  034adb8  fdivs 2, 13, 2
  034adbc  fdivs 1, 1, 12
  034adc0  fsub 13, 5, 12
  034adc4  fsub 0, 5, 12
  034adc8  fsub 31, 5, 12
  034adcc  fsub 30, 12, 5
  034add0  fsub 29, 12, 5
  034add4  fsub 12, 12, 5
  034add8  fmuls 8, 1, 8
  034addc  fmuls 6, 1, 6
  034ade0  fmuls 1, 1, 7
  034ade4  fsel 7, 13, 5, 8
  034ade8  fsel 13, 0, 5, 6
  034adec  fsel 0, 31, 5, 1
  034adf0  fsel 7, 30, 7, 8
  034adf4  fsel 6, 29, 13, 6
  034adf8  fsel 1, 12, 0, 1
  034adfc  fadds 7, 11, 7
  034ae00  fadds 6, 10, 6
  034ae04  fadds 1, 9, 1
  034ae08  fmuls 31, 7, 2
  034ae0c  fmuls 6, 6, 2
  034ae10  fmuls 1, 1, 2
  034ae14  stfs 31, 8(30)
  034ae18  stfs 6, 4(30)
  034ae1c  stfs 1, 0(30)
  034ae20  lfs 2, 16(31)
  034ae24  fadds 1, 1, 2
  034ae28  stfs 1, 0(30)
  034ae2c  lfs 2, 20(31)
  034ae30  fadds 2, 6, 2
  034ae34  stfs 2, 4(30)
  034ae38  lfs 6, 24(31)
  034ae3c  fadds 31, 31, 6
  034ae40  b 0x34ae5c
  034ae44  stfs 3, 0(30)
  034ae48  stfs 4, 4(30)
  034ae4c  fmr 1, 3
  034ae50  lfs 6, 124(1)
  034ae54  fmr 2, 4
  034ae58  stfs 6, 12(30)
  034ae5c  stfs 31, 8(30)
  034ae60  lfs 7, 20(31)
  034ae64  lfs 6, 16(31)
  034ae68  fsubs 8, 7, 2
  034ae6c  fsubs 9, 6, 1
  034ae70  lis 3, 53
  034ae74  addi 3, 3, -21648
  034ae78  fmuls 8, 8, 8
  034ae7c  fmadds 8, 9, 9, 8
  034ae80  lfs 9, 32(3)
  034ae84  lfs 31, 36(3)
  034ae88  fsqrts 8, 8
  034ae8c  fcmpu 0, 8, 9
  034ae90  cror 6, 1, 2
  034ae94  bt 6, 0x34b060
  034ae98  stfs 6, 0(30)
  034ae9c  lfs 1, 20(31)
  034aea0  stfs 1, 4(30)
  034aea4  lfs 1, 24(31)
  034aea8  stfs 1, 8(30)
  034aeac  lfs 1, 28(31)
  034aeb0  stfs 1, 12(30)
  034aeb4  lfs 1, 16(31)
  034aeb8  lfs 2, 20(31)
  034aebc  fsubs 1, 3, 1
  034aec0  fsubs 2, 4, 2
  034aec4  lis 3, 115
  034aec8  addic 3, 3, 22784
  034aecc  fabs 6, 1
  034aed0  fabs 4, 2
  034aed4  stfs 1, 204(1)
  034aed8  stfs 2, 208(1)
  034aedc  fsubs 1, 6, 4
  034aee0  stfs 1, 212(1)
  034aee4  lwz 4, 204(1)
  034aee8  lfs 1, 204(1)
  034aeec  lwz 5, 208(1)
  034aef0  lfs 2, 208(1)
  034aef4  fabs 1, 1
  034aef8  lwz 6, 212(1)
  034aefc  rlwinm 5, 5, 3, 29, 29
  034af00  lfs 3, 212(1)
  034af04  fabs 2, 2
  034af08  rlwimi 5, 6, 2, 30, 30
  034af0c  fsub 7, 3, 5
  034af10  fsub 8, 3, 5
  034af14  rlwimi 5, 4, 4, 28, 28
  034af18  ori 4, 3, 0
  034af1c  rlwimi 4, 5, 2, 26, 28
  034af20  slwi 5, 5, 2
  034af24  clrldi 4, 4, 32
  034af28  fsel 4, 7, 1, 4
  034af2c  lfsx 3, 3, 5
  034af30  fsel 2, 8, 2, 6
  034af34  lfs 1, 4(4)
  034af38  fcmpu 0, 4, 5
  034af3c  bt 1, 0x34af48
  034af40  fmr 1, 5
  034af44  b 0x34b05c
  034af48  fsubs 6, 2, 4
  034af4c  fadds 2, 2, 4
  034af50  addic 3, 1, 16
  034af54  li 6, 2
  034af58  addic 4, 3, 232
  034af5c  addic 5, 3, 248
  034af60  mtctr 6
  034af64  fdivs 2, 6, 2
  034af68  fmuls 4, 2, 2
  034af6c  stfs 2, 260(1)
  034af70  stfs 2, 252(1)
  034af74  stfs 2, 256(1)
  034af78  stfs 2, 248(1)
  034af7c  lfs 7, 260(1)
  034af80  lfs 8, 252(1)
  034af84  lfs 9, 256(1)
  034af88  fmuls 6, 4, 4
  034af8c  fmuls 8, 8, 4
  034af90  fmuls 7, 7, 6
  034af94  fmuls 2, 6, 6
  034af98  fmuls 6, 9, 6
  034af9c  stfs 8, 252(1)
  034afa0  fmuls 4, 7, 4
  034afa4  stfs 6, 256(1)
  034afa8  stfs 4, 260(1)
  034afac  lfs 4, 232(3)
  034afb0  fmuls 4, 4, 2
  034afb4  stfs 4, 248(3)
  034afb8  lfs 4, 4(4)
  034afbc  addic 3, 3, 8
  034afc0  addic 4, 4, 8
  034afc4  fmuls 4, 4, 2
  034afc8  stfs 4, 4(5)
  034afcc  addic 5, 5, 8
  034afd0  bdnz 0x34afac
  034afd4  li 5, 4
  034afd8  ori 3, 1, 0
  034afdc  mtctr 5
  034afe0  lis 4, 115
  034afe4  addic 5, 3, 248
  034afe8  addic 4, 4, 22752
  034afec  ori 7, 5, 0
  034aff0  lfs 2, 248(3)
  034aff4  lfs 4, 0(4)
  034aff8  fmuls 2, 2, 4
  034affc  lfs 4, 4(4)
  034b000  addic 4, 4, 8
  034b004  stfs 2, 248(3)
  034b008  lfs 2, 4(5)
  034b00c  addic 3, 3, 8
  034b010  fmuls 2, 2, 4
  034b014  stfs 2, 4(5)
  034b018  addic 5, 5, 8
  034b01c  bdnz 0x34aff0
  034b020  ori 3, 1, 0
  034b024  mtctr 6
  034b028  lfs 2, 248(3)
  034b02c  lfs 4, 4(7)
  034b030  fadds 2, 5, 2
  034b034  addic 3, 3, 16
  034b038  lfs 5, 8(7)
  034b03c  lfs 6, 12(7)
  034b040  addic 7, 7, 16
  034b044  fadds 2, 2, 4
  034b048  fadds 5, 2, 5
  034b04c  fadds 5, 5, 6
  034b050  bdnz 0x34b028
  034b054  fadds 2, 5, 31
  034b058  fmadds 1, 2, 3, 1
  034b05c  b 0x34b200
  034b060  fsubs 1, 1, 6
  034b064  fsubs 2, 2, 7
  034b068  lis 3, 115
  034b06c  addic 3, 3, 22784
  034b070  fabs 4, 1
  034b074  fabs 3, 2
  034b078  stfs 1, 192(1)
  034b07c  stfs 2, 196(1)
  034b080  fsubs 1, 4, 3
  034b084  stfs 1, 200(1)
  034b088  lwz 4, 192(1)
  034b08c  lfs 1, 192(1)
  034b090  lwz 5, 196(1)
  034b094  lfs 2, 196(1)
  034b098  lwz 6, 200(1)
  034b09c  rlwinm 5, 5, 3, 29, 29
  034b0a0  lfs 6, 200(1)
  034b0a4  fabs 1, 1
  034b0a8  rlwimi 5, 6, 2, 30, 30
  034b0ac  fabs 2, 2
  034b0b0  fsub 7, 6, 5
  034b0b4  fsub 8, 6, 5
  034b0b8  rlwimi 5, 4, 4, 28, 28
  034b0bc  ori 4, 3, 0
  034b0c0  rlwimi 4, 5, 2, 26, 28
  034b0c4  slwi 5, 5, 2
  034b0c8  clrldi 4, 4, 32
  034b0cc  fsel 3, 7, 1, 3
  034b0d0  lfsx 6, 3, 5
  034b0d4  fsel 2, 8, 2, 4
  034b0d8  lfs 1, 4(4)
  034b0dc  fcmpu 0, 3, 5
  034b0e0  bt 1, 0x34b0ec
  034b0e4  fmr 1, 5
  034b0e8  b 0x34b200
  034b0ec  fsubs 4, 2, 3
  034b0f0  fadds 2, 2, 3
  034b0f4  addic 3, 1, 16
  034b0f8  li 6, 2
  034b0fc  addic 5, 3, 216
  034b100  addic 4, 3, 200
  034b104  mtctr 6
  034b108  fdivs 2, 4, 2
  034b10c  fmuls 3, 2, 2
  034b110  stfs 2, 228(1)
  034b114  stfs 2, 220(1)
  034b118  stfs 2, 224(1)
  034b11c  stfs 2, 216(1)
  034b120  lfs 7, 228(1)
  034b124  lfs 8, 220(1)
  034b128  lfs 9, 224(1)
  034b12c  fmuls 4, 3, 3
  034b130  fmuls 8, 8, 3
  034b134  fmuls 7, 7, 4
  034b138  fmuls 2, 4, 4
  034b13c  fmuls 4, 9, 4
  034b140  stfs 8, 220(1)
  034b144  fmuls 3, 7, 3
  034b148  stfs 4, 224(1)
  034b14c  stfs 3, 228(1)
  034b150  lfs 3, 200(3)
  034b154  fmuls 3, 3, 2
  034b158  stfs 3, 216(3)
  034b15c  lfs 3, 4(4)
  034b160  addic 4, 4, 8
  034b164  fmuls 3, 3, 2
  034b168  addic 3, 3, 8
  034b16c  stfs 3, 4(5)
  034b170  addic 5, 5, 8
  034b174  bdnz 0x34b150
  034b178  li 5, 4
  034b17c  ori 3, 1, 0
  034b180  mtctr 5
  034b184  lis 4, 115
  034b188  addic 5, 3, 216
  034b18c  addic 4, 4, 22752
  034b190  ori 7, 5, 0
  034b194  lfs 2, 216(3)
  034b198  lfs 3, 0(4)
  034b19c  fmuls 2, 2, 3
  034b1a0  lfs 3, 4(4)
  034b1a4  addic 4, 4, 8
  034b1a8  stfs 2, 216(3)
  034b1ac  lfs 2, 4(5)
  034b1b0  addic 3, 3, 8
  034b1b4  fmuls 2, 2, 3
  034b1b8  stfs 2, 4(5)
  034b1bc  addic 5, 5, 8
  034b1c0  bdnz 0x34b194
  034b1c4  ori 3, 1, 0
  034b1c8  mtctr 6
  034b1cc  lfs 2, 216(3)
  034b1d0  lfs 3, 4(7)
  034b1d4  fadds 2, 5, 2
  034b1d8  lfs 4, 8(7)
  034b1dc  addic 3, 3, 16
  034b1e0  lfs 5, 12(7)
  034b1e4  addic 7, 7, 16
  034b1e8  fadds 2, 2, 3
  034b1ec  fadds 2, 2, 4
  034b1f0  fadds 5, 2, 5
  034b1f4  bdnz 0x34b1cc
  034b1f8  fadds 2, 5, 31
  034b1fc  fmadds 1, 2, 6, 1
  034b200  ld 0, 352(1)
  034b204  mtlr 0
  034b208  lfd 29, 312(1)
  034b20c  lfd 30, 320(1)
  034b210  lfd 31, 328(1)
  034b214  ld 29, 288(1)
  034b218  ld 30, 296(1)
  034b21c  ld 31, 304(1)
  034b220  addi 1, 1, 336
  034b224  blr

UpdateMoby_340:   # 0x34b2e8, 0x2434 bytes
  034b2e8  stdu 1, -672(1)
  034b2ec  mflr 0
  034b2f0  std 0, 688(1)
  034b2f4  stfd 27, 632(1)
  034b2f8  stfd 28, 640(1)
  034b2fc  stfd 29, 648(1)
  034b300  stfd 30, 656(1)
  034b304  stfd 31, 664(1)
  034b308  std 30, 616(1)
  034b30c  std 31, 624(1)
  034b310  lwz 30, 120(3)
  034b314  ori 31, 3, 0
  034b318  std 29, 608(1)
  034b31c  lfs 31, 72(3)
  034b320  std 24, 568(1)
  034b324  li 29, 0
  034b328  ori 24, 29, 0
  034b32c  lwz 3, 56(30)
  034b330  std 28, 600(1)
  034b334  std 27, 592(1)
  034b338  std 26, 584(1)
  034b33c  std 25, 576(1)
  034b340  std 23, 560(1)
  034b344  std 22, 552(1)
  034b348  std 21, 544(1)
  034b34c  std 20, 536(1)
  034b350  std 19, 528(1)
  034b354  cmpwi 3, 0
  034b358  bf 2, 0x34b368
  034b35c  lhz 3, 310(30)
  034b360  cmpwi 3, 0
  034b364  bt 2, 0x34b36c
  034b368  li 29, 1
  034b36c  lis 3, 53
  034b370  addic 5, 30, 624
  034b374  addi 6, 3, -19928
  034b378  ori 3, 31, 0
  034b37c  li 4, 7
  034b380  lfs 1, 0(6)
  034b384  bl 0x119a18
  034b388  nop
  034b38c  lbz 3, 49(31)
  034b390  cmpwi 3, 0
  034b394  bt 2, 0x34b3d8
  034b398  lis 4, 149
  034b39c  addic 3, 31, 16
  034b3a0  addic 4, 4, 5376
  034b3a4  bl 0x5e8548
  034b3a8  nop
  034b3ac  lis 3, 53
  034b3b0  addi 3, 3, -19928
  034b3b4  lfs 2, 4(3)
  034b3b8  fcmpu 0, 1, 2
  034b3bc  cror 6, 1, 2
  034b3c0  bt 6, 0x34b3d8
  034b3c4  ori 3, 31, 0
  034b3c8  bl 0x106360
  034b3cc  nop
  034b3d0  li 3, 21
  034b3d4  stb 3, 127(31)
  034b3d8  cmpwi 29, 0
  034b3dc  bt 2, 0x34b3f8
  034b3e0  lis 3, 53
  034b3e4  lfs 30, 320(30)
  034b3e8  addi 3, 3, -19928
  034b3ec  lfs 1, 8(3)
  034b3f0  fmuls 30, 30, 1
  034b3f4  b 0x34b3fc
  034b3f8  lfs 30, 320(30)
  034b3fc  fmr 1, 30
  034b400  addic 27, 1, 384
  034b404  ori 3, 31, 0
  034b408  ori 5, 27, 0
  034b40c  bl 0x1118d8
  034b410  nop
  034b414  ori 3, 31, 0
  034b418  lwz 28, 448(1)
  034b41c  bl 0xefe40
  034b420  nop
  034b424  addic 26, 31, 16
  034b428  ori 4, 27, 0
  034b42c  fmr 30, 1
  034b430  ori 3, 26, 0
  034b434  bl 0x5e8588
  034b438  nop
  034b43c  ori 4, 26, 0
  034b440  addic 3, 1, 112
  034b444  fmr 29, 1
  034b448  bl 0x5e7e98
  034b44c  nop
  034b450  ori 4, 26, 0
  034b454  addic 3, 1, 128
  034b458  bl 0x5e7e98
  034b45c  nop
  034b460  li 4, 32
  034b464  ori 3, 31, 0
  034b468  stb 4, 48(31)
  034b46c  bl 0x34a5d0
  034b470  lbz 3, 32(31)
  034b474  cmpwi 3, 1
  034b478  bt 2, 0x34b484
  034b47c  cmpwi 3, 3
  034b480  bf 2, 0x34b4fc
  034b484  lis 3, 151
  034b488  addic 3, 3, -25376
  034b48c  lwz 4, 576(3)
  034b490  cmpw 4, 31
  034b494  bt 2, 0x34b4c0
  034b498  addic 4, 3, 128
  034b49c  ori 3, 26, 0
  034b4a0  bl 0x5e8548
  034b4a4  nop
  034b4a8  lis 3, 53
  034b4ac  addi 3, 3, -19928
  034b4b0  lfs 2, 12(3)
  034b4b4  fcmpu 0, 1, 2
  034b4b8  cror 6, 1, 2
  034b4bc  bt 6, 0x34b4fc
  034b4c0  li 3, 10
  034b4c4  bl 0x5e7e18
  034b4c8  nop
  034b4cc  ori 6, 3, 0
  034b4d0  ori 3, 31, 0
  034b4d4  li 4, 7
  034b4d8  li 5, 0
  034b4dc  bl 0xfddc0
  034b4e0  nop
  034b4e4  li 3, 60
  034b4e8  bl 0x5e7e18
  034b4ec  nop
  034b4f0  li 4, 7
  034b4f4  sth 3, 326(30)
  034b4f8  stb 4, 32(31)
  034b4fc  addic 3, 30, 333
  034b500  bl 0x5000b4
  034b504  nop
  034b508  lbz 3, 32(31)
  034b50c  cmpwi 3, 8
  034b510  bt 2, 0x34b804
  034b514  cmpwi 3, 0
  034b518  bt 2, 0x34b804
  034b51c  lis 4, 53
  034b520  ori 3, 31, 0
  034b524  addi 6, 4, -19928
  034b528  lis 4, 33
  034b52c  li 5, 0
  034b530  lfs 27, 16(6)
  034b534  stw 24, 468(1)
  034b538  bl 0x10675c
  034b53c  nop
  034b540  ori 27, 3, 0
  034b544  ori 3, 31, 0
  034b548  ori 4, 27, 0
  034b54c  addic 5, 30, 32
  034b550  li 6, 0
  034b554  addic 7, 1, 464
  034b558  li 9, 0
  034b55c  addic 8, 1, 468
  034b560  li 10, 4
  034b564  bl 0x106840
  034b568  nop
  034b56c  cmpwi 27, 0
  034b570  ori 25, 3, 0
  034b574  bt 2, 0x34b804
  034b578  lbz 3, 32(31)
  034b57c  cmpwi 3, 0
  034b580  bt 2, 0x34b804
  034b584  lbz 3, 333(30)
  034b588  cmpwi 3, 0
  034b58c  bf 2, 0x34b804
  034b590  lwz 3, 32(27)
  034b594  cmpwi 3, 0
  034b598  bt 2, 0x34b600
  034b59c  lis 4, 151
  034b5a0  addic 4, 4, -25376
  034b5a4  lwz 5, 4240(4)
  034b5a8  cmpw 3, 5
  034b5ac  bt 2, 0x34b5d8
  034b5b0  lfs 1, 16(31)
  034b5b4  lfs 2, 16(3)
  034b5b8  lfs 3, 20(31)
  034b5bc  fsubs 1, 1, 2
  034b5c0  lfs 4, 20(3)
  034b5c4  fsubs 2, 3, 4
  034b5c8  bl 0x5e8338
  034b5cc  nop
  034b5d0  fmr 28, 1
  034b5d4  b 0x34b5fc
  034b5d8  lfs 1, 16(31)
  034b5dc  lfs 2, 128(4)
  034b5e0  lfs 3, 20(31)
  034b5e4  fsubs 1, 1, 2
  034b5e8  lfs 4, 132(4)
  034b5ec  fsubs 2, 3, 4
  034b5f0  bl 0x5e8338
  034b5f4  nop
  034b5f8  fmr 28, 1
  034b5fc  b 0x34b62c
  034b600  lis 3, 151
  034b604  lfs 1, 16(31)
  034b608  addic 3, 3, -25376
  034b60c  lfs 2, 20(31)
  034b610  lfs 3, 128(3)
  034b614  lfs 4, 132(3)
  034b618  fsubs 1, 1, 3
  034b61c  fsubs 2, 2, 4
  034b620  bl 0x5e8338
  034b624  nop
  034b628  fmr 28, 1
  034b62c  lis 3, 15363
  034b630  lis 4, 53
  034b634  lis 5, 14851
  034b638  ori 3, 3, 4719
  034b63c  addi 4, 4, -19928
  034b640  ori 5, 5, 4719
  034b644  lis 6, 114
  034b648  stw 3, 208(30)
  034b64c  li 3, 9
  034b650  stw 5, 212(30)
  034b654  lfs 1, 20(4)
  034b658  lfs 2, -3052(6)
  034b65c  stb 24, 253(30)
  034b660  fmuls 1, 2, 1
  034b664  stw 3, 228(30)
  034b668  stfs 1, 216(30)
  034b66c  lwz 3, 32(27)
  034b670  lhz 3, 166(3)
  034b674  cmpwi 3, 176
  034b678  cmpwi 1, 3, 177
  034b67c  bt 2, 0x34b684
  034b680  bf 6, 0x34b690
  034b684  lis 3, 16256
  034b688  stw 3, 44(27)
  034b68c  stw 3, 468(1)
  034b690  lfs 1, 32(30)
  034b694  lfs 2, 468(1)
  034b698  fsubs 1, 1, 2
  034b69c  fcmpu 0, 1, 27
  034b6a0  stfs 1, 32(30)
  034b6a4  bt 1, 0x34b6ac
  034b6a8  li 25, 1
  034b6ac  li 3, 240
  034b6b0  bl 0x5e7e18
  034b6b4  nop
  034b6b8  cmpwi 25, 2
  034b6bc  sth 3, 310(30)
  034b6c0  bt 1, 0x34b6d8
  034b6c4  cmpwi 25, -1
  034b6c8  cmpwi 1, 25, 0
  034b6cc  bf 1, 0x34b804
  034b6d0  bf 5, 0x34b804
  034b6d4  b 0x34b6ec
  034b6d8  cmpwi 25, 10
  034b6dc  cmpwi 1, 25, 6
  034b6e0  bt 1, 0x34b804
  034b6e4  bf 5, 0x34b704
  034b6e8  b 0x34b804
  034b6ec  ori 3, 31, 0
  034b6f0  bl 0x34a8d8
  034b6f4  ori 3, 31, 0
  034b6f8  bl 0xefb38
  034b6fc  nop
  034b700  b 0x34d6c4
  034b704  li 3, 5
  034b708  bl 0x5e7e18
  034b70c  nop
  034b710  ori 6, 3, 0
  034b714  ori 3, 31, 0
  034b718  li 4, 8
  034b71c  li 5, 0
  034b720  bl 0xfddc0
  034b724  nop
  034b728  lwz 27, 32(27)
  034b72c  lhz 27, 166(27)
  034b730  cmpwi 27, 305
  034b734  bt 2, 0x34b740
  034b738  cmpwi 27, 176
  034b73c  bf 2, 0x34b76c
  034b740  lis 3, 53
  034b744  lis 4, 114
  034b748  addi 3, 3, -19928
  034b74c  lfs 1, 24(3)
  034b750  lfs 2, -3056(4)
  034b754  lfs 3, 28(3)
  034b758  fmuls 1, 2, 1
  034b75c  lfs 2, 32(3)
  034b760  fdivs 1, 3, 1
  034b764  fmuls 1, 1, 2
  034b768  b 0x34b78c
  034b76c  lis 3, 53
  034b770  lis 4, 114
  034b774  addi 3, 3, -19928
  034b778  lfs 1, 24(3)
  034b77c  lfs 2, -3056(4)
  034b780  lfs 3, 28(3)
  034b784  fmuls 1, 2, 1
  034b788  fdivs 1, 3, 1
  034b78c  lis 3, 53
  034b790  stfs 1, 316(30)
  034b794  li 4, 6
  034b798  fmr 2, 28
  034b79c  addi 3, 3, -19928
  034b7a0  stb 4, 32(31)
  034b7a4  lfs 1, 36(3)
  034b7a8  bl 0x502578
  034b7ac  nop
  034b7b0  li 27, 120
  034b7b4  addic 25, 30, 176
  034b7b8  stfs 1, 72(31)
  034b7bc  ori 3, 31, 0
  034b7c0  ori 4, 25, 0
  034b7c4  stb 27, 183(30)
  034b7c8  bl 0x10c808
  034b7cc  nop
  034b7d0  li 3, 20
  034b7d4  bl 0x5e7e18
  034b7d8  nop
  034b7dc  stb 3, 333(30)
  034b7e0  ori 4, 25, 0
  034b7e4  ori 3, 31, 0
  034b7e8  stb 27, 183(30)
  034b7ec  bl 0x10c808
  034b7f0  nop
  034b7f4  li 3, 20
  034b7f8  bl 0x5e7e18
  034b7fc  nop
  034b800  stb 3, 333(30)
  034b804  li 3, 255
  034b808  stb 3, 164(31)
  034b80c  lwz 3, 56(30)
  034b810  cmpwi 3, 0
  034b814  bt 2, 0x34b828
  034b818  li 3, 240
  034b81c  bl 0x5e7e18
  034b820  nop
  034b824  sth 3, 310(30)
  034b828  addic 3, 30, 310
  034b82c  stw 24, 56(30)
  034b830  bl 0x4fffb4
  034b834  nop
  034b838  lbz 3, 32(31)
  034b83c  cmpwi 3, 7
  034b840  bf 2, 0x34b9a4
  034b844  lbz 3, 82(31)
  034b848  cmpwi 3, 7
  034b84c  bf 2, 0x34b9a4
  034b850  lis 3, 53
  034b854  addi 3, 3, -19928
  034b858  lfs 1, 24(3)
  034b85c  fcmpu 0, 30, 1
  034b860  cror 6, 0, 2
  034b864  bt 6, 0x34b9a4
  034b868  lis 3, 53
  034b86c  addi 3, 3, -19928
  034b870  lfs 1, 40(3)
  034b874  fcmpu 0, 30, 1
  034b878  cror 6, 1, 2
  034b87c  bt 6, 0x34b9a4
  034b880  lis 3, 53
  034b884  lis 4, 151
  034b888  addi 3, 3, -19928
  034b88c  lis 22, 161
  034b890  addic 23, 4, -25376
  034b894  ori 27, 24, 0
  034b898  ori 25, 1, 0
  034b89c  lfs 28, 28(3)
  034b8a0  addic 23, 23, 128
  034b8a4  lfs 27, 32(3)
  034b8a8  addic 22, 22, 2368
  034b8ac  li 21, 1
  034b8b0  li 3, 2
  034b8b4  li 4, 3
  034b8b8  li 6, 4
  034b8bc  stw 21, 472(1)
  034b8c0  addic 20, 1, 144
  034b8c4  stw 3, 476(1)
  034b8c8  stw 4, 480(1)
  034b8cc  stw 6, 484(1)
  034b8d0  ori 3, 31, 0
  034b8d4  lwz 4, 472(25)
  034b8d8  ori 5, 20, 0
  034b8dc  extsw 4, 4
  034b8e0  bl 0xf1114
  034b8e4  nop
  034b8e8  lis 3, 1
  034b8ec  lis 5, 16256
  034b8f0  stw 31, 352(1)
  034b8f4  ori 3, 3, 1
  034b8f8  addic 19, 1, 336
  034b8fc  ori 4, 23, 0
  034b900  stw 5, 364(1)
  034b904  stw 3, 356(1)
  034b908  ori 5, 26, 0
  034b90c  ori 3, 19, 0
  034b910  bl 0x5e81f0
  034b914  nop
  034b918  lis 5, 114
  034b91c  ori 3, 19, 0
  034b920  ori 4, 19, 0
  034b924  lfs 1, -3052(5)
  034b928  fmuls 1, 1, 28
  034b92c  bl 0x5e7f98
  034b930  nop
  034b934  stw 21, 368(1)
  034b938  ori 3, 20, 0
  034b93c  fmr 1, 27
  034b940  li 5, 16
  034b944  ori 6, 31, 0
  034b948  ori 7, 19, 0
  034b94c  bl 0x5e598
  034b950  nop
  034b954  lwz 3, 24(22)
  034b958  cmpw 3, 28
  034b95c  bf 2, 0x34b994
  034b960  lhz 4, 326(30)
  034b964  li 3, 60
  034b968  extsh 21, 4
  034b96c  bl 0x5e7e18
  034b970  nop
  034b974  cmpw 21, 3
  034b978  bf 0, 0x34b984
  034b97c  lhz 3, 326(30)
  034b980  b 0x34b990
  034b984  li 3, 60
  034b988  bl 0x5e7e18
  034b98c  nop
  034b990  sth 3, 326(30)
  034b994  addic 27, 27, 1
  034b998  addic 25, 25, 4
  034b99c  cmpwi 27, 4
  034b9a0  bt 0, 0x34b8ac
  034b9a4  lbz 3, 32(31)
  034b9a8  cmpwi 3, 0
  034b9ac  bt 2, 0x34ba24
  034b9b0  lbz 3, 46(30)
  034b9b4  cmpwi 3, 1
  034b9b8  bt 2, 0x34ba24
  034b9bc  lwz 3, 568(30)
  034b9c0  cmpwi 3, -1
  034b9c4  bt 2, 0x34ba0c
  034b9c8  sldi 4, 3, 7
  034b9cc  sldi 6, 3, 4
  034b9d0  lis 5, 150
  034b9d4  subc 4, 4, 6
  034b9d8  addic 5, 5, 14312
  034b9dc  extsw 4, 4
  034b9e0  lwzx 5, 5, 4
  034b9e4  cmpw 5, 31
  034b9e8  bf 2, 0x34ba0c
  034b9ec  lis 5, 150
  034b9f0  addic 5, 5, 14292
  034b9f4  lbzx 4, 5, 4
  034b9f8  cmpwi 4, 0
  034b9fc  bt 2, 0x34ba0c
  034ba00  extsw 3, 3
  034ba04  bl 0x15cdb0
  034ba08  nop
  034ba0c  li 4, -1
  034ba10  ori 3, 31, 0
  034ba14  stw 4, 568(30)
  034ba18  bl 0xefb38
  034ba1c  nop
  034ba20  b 0x34d6c4
  034ba24  addic 3, 30, 326
  034ba28  bl 0x4fffb4
  034ba2c  nop
  034ba30  lbz 3, 32(31)
  034ba34  cmpwi 3, 4
  034ba38  bt 1, 0x34ba70
  034ba3c  cmpwi 3, 1
  034ba40  bt 1, 0x34ba58
  034ba44  cmpwi 3, -1
  034ba48  bf 1, 0x34ccb4
  034ba4c  cmpwi 3, 0
  034ba50  bf 1, 0x34baa8
  034ba54  b 0x34bbc8
  034ba58  cmpwi 3, 2
  034ba5c  bf 1, 0x34be44
  034ba60  cmpwi 3, 3
  034ba64  cmpwi 1, 29, 0
  034ba68  bf 1, 0x34bed4
  034ba6c  b 0x34c0c0
  034ba70  cmpwi 3, 7
  034ba74  bt 1, 0x34ba94
  034ba78  cmpwi 3, 5
  034ba7c  cmpwi 1, 29, 0
  034ba80  bf 1, 0x34c4c4
  034ba84  cmpwi 3, 6
  034ba88  cmpwi 1, 29, 0
  034ba8c  bf 1, 0x34cbe4
  034ba90  b 0x34cabc
  034ba94  cmpwi 3, 8
  034ba98  bf 1, 0x34cc6c
  034ba9c  cmpwi 3, 9
  034baa0  bf 1, 0x34cc94
  034baa4  b 0x34ccb4
  034baa8  lis 29, 16256
  034baac  li 5, 1
  034bab0  lis 7, 16192
  034bab4  li 4, 8
  034bab8  stw 29, 32(30)
  034babc  li 6, 6
  034bac0  sth 5, 36(30)
  034bac4  addic 3, 30, 96
  034bac8  stb 24, 40(30)
  034bacc  stw 7, 48(30)
  034bad0  stb 5, 46(30)
  034bad4  stb 24, 41(30)
  034bad8  stb 4, 88(30)
  034badc  stb 6, 90(30)
  034bae0  bl 0x100f8c
  034bae4  nop
  034bae8  lis 3, 15897
  034baec  stw 29, 100(30)
  034baf0  lis 4, 16000
  034baf4  lis 6, 53
  034baf8  ori 3, 3, 39322
  034bafc  li 5, 512
  034bb00  addi 29, 6, -19928
  034bb04  stw 4, 104(30)
  034bb08  lis 28, 114
  034bb0c  stw 3, 108(30)
  034bb10  stw 5, 96(30)
  034bb14  li 4, 4
  034bb18  addic 3, 30, 576
  034bb1c  lfs 1, 44(29)
  034bb20  lfs 2, -3052(28)
  034bb24  stw 4, 152(30)
  034bb28  fmuls 1, 2, 1
  034bb2c  ori 4, 26, 0
  034bb30  stfs 1, 132(30)
  034bb34  bl 0x5e7e98
  034bb38  nop
  034bb3c  lis 3, 16384
  034bb40  lfs 1, 8(29)
  034bb44  ori 4, 26, 0
  034bb48  stw 3, 604(30)
  034bb4c  lfs 2, 48(29)
  034bb50  lfs 3, -3052(28)
  034bb54  addic 3, 30, 288
  034bb58  fmuls 1, 3, 1
  034bb5c  fmuls 2, 3, 2
  034bb60  stfs 1, 596(30)
  034bb64  stfs 2, 600(30)
  034bb68  bl 0x5e7e98
  034bb6c  nop
  034bb70  li 3, 60
  034bb74  bl 0x5e7e18
  034bb78  nop
  034bb7c  lwz 4, 336(30)
  034bb80  li 5, -1
  034bb84  sth 3, 326(30)
  034bb88  lis 6, 132
  034bb8c  sth 24, 310(30)
  034bb90  subc 4, 5, 4
  034bb94  sth 24, 324(30)
  034bb98  li 5, 1
  034bb9c  cntlzw 3, 4
  034bba0  addic 4, 6, 0
  034bba4  sldi 3, 3, 58
  034bba8  li 6, 4
  034bbac  sradi 3, 3, 63
  034bbb0  stw 4, 496(30)
  034bbb4  subc 4, 5, 6
  034bbb8  and 3, 3, 4
  034bbbc  addc 3, 6, 3
  034bbc0  stb 3, 32(31)
  034bbc4  b 0x34ccb4
  034bbc8  ori 4, 26, 0
  034bbcc  addic 3, 1, 160
  034bbd0  bl 0x5e7e98
  034bbd4  nop
  034bbd8  lis 4, 53
  034bbdc  ori 3, 31, 0
  034bbe0  addi 5, 4, -19928
  034bbe4  addic 4, 30, 576
  034bbe8  lfs 1, 52(5)
  034bbec  lfs 2, 56(5)
  034bbf0  bl 0x1136c8
  034bbf4  nop
  034bbf8  lwz 3, 312(30)
  034bbfc  cmpwi 3, -1
  034bc00  bt 2, 0x34bc48
  034bc04  lis 4, 165
  034bc08  slwi 3, 3, 2
  034bc0c  addic 4, 4, 7136
  034bc10  extsw 5, 3
  034bc14  ori 3, 26, 0
  034bc18  lwzx 5, 4, 5
  034bc1c  addic 4, 5, 16
  034bc20  lwz 5, 0(5)
  034bc24  extsw 5, 5
  034bc28  bl 0x104e44
  034bc2c  nop
  034bc30  cmpwi 3, 0
  034bc34  bf 2, 0x34bc48
  034bc38  addic 4, 1, 160
  034bc3c  ori 3, 26, 0
  034bc40  bl 0x5e7e98
  034bc44  nop
  034bc48  lbz 3, 82(31)
  034bc4c  cmpwi 3, 0
  034bc50  bt 2, 0x34bc88
  034bc54  lbz 3, 112(31)
  034bc58  rlwinm 3, 3, 0, 30, 30
  034bc5c  cmpwi 3, 0
  034bc60  bt 2, 0x34bc88
  034bc64  li 3, 5
  034bc68  bl 0x5e7e18
  034bc6c  nop
  034bc70  ori 6, 3, 0
  034bc74  ori 3, 31, 0
  034bc78  li 4, 0
  034bc7c  li 5, 0
  034bc80  bl 0xfddc0
  034bc84  nop
  034bc88  cmpwi 29, 0
  034bc8c  bt 2, 0x34bca8
  034bc90  lis 3, 53
  034bc94  lfs 1, 320(30)
  034bc98  addi 3, 3, -19928
  034bc9c  lfs 2, 8(3)
  034bca0  fmuls 1, 1, 2
  034bca4  b 0x34bcac
  034bca8  lfs 1, 320(30)
  034bcac  fcmpu 0, 29, 1
  034bcb0  cmpwi 1, 29, 0
  034bcb4  cror 2, 1, 2
  034bcb8  bt 2, 0x34ccb4
  034bcbc  bf 6, 0x34bd00
  034bcc0  lwz 3, 312(30)
  034bcc4  cmpwi 3, -1
  034bcc8  bt 2, 0x34bd00
  034bccc  lis 4, 165
  034bcd0  slwi 3, 3, 2
  034bcd4  addic 4, 4, 7136
  034bcd8  extsw 5, 3
  034bcdc  addic 3, 1, 384
  034bce0  lwzx 5, 4, 5
  034bce4  addic 4, 5, 16
  034bce8  lwz 5, 0(5)
  034bcec  extsw 5, 5
  034bcf0  bl 0x104e44
  034bcf4  nop
  034bcf8  cmpwi 3, 0
  034bcfc  bt 2, 0x34ccb4
  034bd00  lhz 3, 334(30)
  034bd04  clrlwi 4, 3, 31
  034bd08  cmpwi 4, 0
  034bd0c  bf 2, 0x34bd4c
  034bd10  ori 4, 3, 1
  034bd14  li 3, 10
  034bd18  sth 4, 334(30)
  034bd1c  bl 0x5e7e18
  034bd20  nop
  034bd24  ori 6, 3, 0
  034bd28  ori 3, 31, 0
  034bd2c  li 4, 6
  034bd30  li 5, 0
  034bd34  bl 0xfddc0
  034bd38  nop
  034bd3c  li 3, 60
  034bd40  bl 0x5e7e18
  034bd44  nop
  034bd48  sth 3, 326(30)
  034bd4c  lfs 1, 384(1)
  034bd50  lfs 2, 16(31)
  034bd54  lfs 3, 388(1)
  034bd58  lfs 4, 20(31)
  034bd5c  fsubs 1, 1, 2
  034bd60  fsubs 2, 3, 4
  034bd64  bl 0x5e8338
  034bd68  nop
  034bd6c  lis 3, 53
  034bd70  addi 3, 3, -19928
  034bd74  lfs 31, 8(3)
  034bd78  fcmpu 0, 29, 31
  034bd7c  cror 6, 1, 2
  034bd80  bt 6, 0x34bde0
  034bd84  lhz 3, 326(30)
  034bd88  cmpwi 3, 0
  034bd8c  bf 2, 0x34bde0
  034bd90  ori 3, 31, 0
  034bd94  bl 0x34aa40
  034bd98  cmpwi 3, 0
  034bd9c  bt 2, 0x34bde0
  034bda0  li 3, 10
  034bda4  bl 0x5e7e18
  034bda8  nop
  034bdac  ori 6, 3, 0
  034bdb0  ori 3, 31, 0
  034bdb4  li 4, 7
  034bdb8  li 5, 0
  034bdbc  bl 0xfddc0
  034bdc0  nop
  034bdc4  li 3, 60
  034bdc8  bl 0x5e7e18
  034bdcc  nop
  034bdd0  li 4, 7
  034bdd4  sth 3, 326(30)
  034bdd8  stb 4, 32(31)
  034bddc  b 0x34ccb4
  034bde0  cmpwi 29, 0
  034bde4  bt 2, 0x34bdf4
  034bde8  lfs 1, 320(30)
  034bdec  fmuls 31, 1, 31
  034bdf0  b 0x34bdf8
  034bdf4  lfs 31, 320(30)
  034bdf8  fcmpu 0, 29, 31
  034bdfc  cror 6, 1, 2
  034be00  bt 6, 0x34ccb4
  034be04  lhz 3, 326(30)
  034be08  cmpwi 3, 0
  034be0c  bf 2, 0x34ccb4
  034be10  li 3, 10
  034be14  bl 0x5e7e18
  034be18  nop
  034be1c  ori 6, 3, 0
  034be20  ori 3, 31, 0
  034be24  li 4, 1
  034be28  li 5, 0
  034be2c  bl 0xfddc0
  034be30  nop
  034be34  li 3, 3
  034be38  stb 24, 332(30)
  034be3c  stb 3, 32(31)
  034be40  b 0x34ccb4
  034be44  lbz 3, 83(31)
  034be48  cmpwi 3, 5
  034be4c  bt 2, 0x34be94
  034be50  li 3, 5
  034be54  bl 0x5e7e18
  034be58  nop
  034be5c  ori 6, 3, 0
  034be60  ori 3, 31, 0
  034be64  li 4, 5
  034be68  li 5, 0
  034be6c  bl 0xfddc0
  034be70  nop
  034be74  lis 3, 53
  034be78  lis 4, 114
  034be7c  addi 3, 3, -19928
  034be80  lfs 1, 60(3)
  034be84  lfs 2, -3052(4)
  034be88  fmuls 1, 2, 1
  034be8c  stfs 1, 120(30)
  034be90  b 0x34ccb4
  034be94  lbz 3, 112(31)
  034be98  rlwinm 3, 3, 0, 30, 30
  034be9c  cmpwi 3, 0
  034bea0  bt 2, 0x34ccb4
  034bea4  li 3, 10
  034bea8  bl 0x5e7e18
  034beac  nop
  034beb0  ori 6, 3, 0
  034beb4  ori 3, 31, 0
  034beb8  li 4, 0
  034bebc  li 5, 0
  034bec0  bl 0xfddc0
  034bec4  nop
  034bec8  li 3, 1
  034becc  stb 3, 32(31)
  034bed0  b 0x34ccb4
  034bed4  bt 6, 0x34bef0
  034bed8  lis 3, 53
  034bedc  lfs 1, 320(30)
  034bee0  addi 3, 3, -19928
  034bee4  lfs 2, 8(3)
  034bee8  fmuls 1, 1, 2
  034beec  b 0x34bef4
  034bef0  lfs 1, 320(30)
  034bef4  fcmpu 0, 29, 1
  034bef8  cmpwi 1, 29, 0
  034befc  cror 2, 1, 2
  034bf00  bt 2, 0x34bff4
  034bf04  bf 6, 0x34bf48
  034bf08  lwz 3, 312(30)
  034bf0c  cmpwi 3, -1
  034bf10  bt 2, 0x34bf48
  034bf14  lis 4, 165
  034bf18  slwi 3, 3, 2
  034bf1c  addic 4, 4, 7136
  034bf20  extsw 5, 3
  034bf24  addic 3, 1, 384
  034bf28  lwzx 5, 4, 5
  034bf2c  addic 4, 5, 16
  034bf30  lwz 5, 0(5)
  034bf34  extsw 5, 5
  034bf38  bl 0x104e44
  034bf3c  nop
  034bf40  cmpwi 3, 0
  034bf44  bt 2, 0x34bff4
  034bf48  cmpwi 29, 0
  034bf4c  bt 2, 0x34bf68
  034bf50  lis 3, 53
  034bf54  lfs 31, 320(30)
  034bf58  addi 3, 3, -19928
  034bf5c  lfs 1, 8(3)
  034bf60  fmuls 31, 31, 1
  034bf64  b 0x34bf6c
  034bf68  lfs 31, 320(30)
  034bf6c  fmr 1, 31
  034bf70  ori 3, 31, 0
  034bf74  addic 4, 1, 128
  034bf78  bl 0x34ab98
  034bf7c  lis 3, 53
  034bf80  fmr 31, 1
  034bf84  addi 3, 3, -19928
  034bf88  lfs 1, 8(3)
  034bf8c  fcmpu 0, 29, 1
  034bf90  cror 6, 1, 2
  034bf94  bt 6, 0x34c07c
  034bf98  lhz 3, 326(30)
  034bf9c  cmpwi 3, 0
  034bfa0  bf 2, 0x34c07c
  034bfa4  ori 3, 31, 0
  034bfa8  bl 0x34aa40
  034bfac  cmpwi 3, 0
  034bfb0  bt 2, 0x34c07c
  034bfb4  li 3, 10
  034bfb8  bl 0x5e7e18
  034bfbc  nop
  034bfc0  ori 6, 3, 0
  034bfc4  ori 3, 31, 0
  034bfc8  li 4, 7
  034bfcc  li 5, 0
  034bfd0  bl 0xfddc0
  034bfd4  nop
  034bfd8  li 3, 60
  034bfdc  bl 0x5e7e18
  034bfe0  nop
  034bfe4  sth 3, 326(30)
  034bfe8  li 3, 7
  034bfec  stb 3, 32(31)
  034bff0  b 0x34c07c
  034bff4  cmpwi 29, 0
  034bff8  bf 2, 0x34c07c
  034bffc  addic 29, 30, 288
  034c000  addic 3, 1, 128
  034c004  ori 4, 29, 0
  034c008  bl 0x5e7e98
  034c00c  nop
  034c010  ori 3, 26, 0
  034c014  ori 4, 29, 0
  034c018  bl 0x5e8588
  034c01c  nop
  034c020  lis 3, 53
  034c024  addi 3, 3, -19928
  034c028  lfs 2, 64(3)
  034c02c  fcmpu 0, 1, 2
  034c030  cror 6, 1, 2
  034c034  bt 6, 0x34c07c
  034c038  lis 3, 53
  034c03c  lis 4, 114
  034c040  addi 3, 3, -19928
  034c044  li 5, 0
  034c048  lfs 1, 68(3)
  034c04c  lfs 2, -3056(4)
  034c050  ori 3, 31, 0
  034c054  li 4, 0
  034c058  fmuls 1, 2, 1
  034c05c  fctiwz 1, 1
  034c060  stfd 1, 504(1)
  034c064  lwz 6, 508(1)
  034c068  extsw 6, 6
  034c06c  bl 0xfddc0
  034c070  nop
  034c074  li 3, 1
  034c078  stb 3, 32(31)
  034c07c  lis 3, 53
  034c080  fmr 1, 31
  034c084  lis 4, 114
  034c088  addi 3, 3, -19928
  034c08c  lis 6, 114
  034c090  addic 5, 30, 304
  034c094  lfs 3, 72(3)
  034c098  lfs 4, 36(3)
  034c09c  lfs 5, -3048(4)
  034c0a0  ori 3, 31, 0
  034c0a4  lfs 6, -3052(6)
  034c0a8  fmuls 2, 5, 3
  034c0ac  fmuls 3, 5, 4
  034c0b0  fmuls 4, 6, 4
  034c0b4  bl 0xff2e8
  034c0b8  nop
  034c0bc  b 0x34ccb4
  034c0c0  lwz 4, 336(30)
  034c0c4  lis 3, 165
  034c0c8  slwi 4, 4, 2
  034c0cc  addic 3, 3, 7136
  034c0d0  extsw 28, 4
  034c0d4  lwzx 28, 3, 28
  034c0d8  bt 6, 0x34c0f4
  034c0dc  lis 4, 53
  034c0e0  lfs 1, 320(30)
  034c0e4  addi 4, 4, -19928
  034c0e8  lfs 2, 8(4)
  034c0ec  fmuls 1, 1, 2
  034c0f0  b 0x34c0f8
  034c0f4  lfs 1, 320(30)
  034c0f8  fcmpu 0, 29, 1
  034c0fc  cmpwi 1, 29, 0
  034c100  cror 2, 1, 2
  034c104  bt 2, 0x34c310
  034c108  bf 6, 0x34c148
  034c10c  lwz 4, 312(30)
  034c110  cmpwi 4, -1
  034c114  bt 2, 0x34c148
  034c118  ori 5, 3, 0
  034c11c  slwi 3, 4, 2
  034c120  extsw 4, 3
  034c124  addic 3, 1, 384
  034c128  lwzx 5, 5, 4
  034c12c  addic 4, 5, 16
  034c130  lwz 5, 0(5)
  034c134  extsw 5, 5
  034c138  bl 0x104e44
  034c13c  nop
  034c140  cmpwi 3, 0
  034c144  bt 2, 0x34c310
  034c148  lhz 3, 334(30)
  034c14c  clrlwi 4, 3, 31
  034c150  cmpwi 4, 0
  034c154  bf 2, 0x34c1cc
  034c158  lis 4, 53
  034c15c  ori 3, 3, 1
  034c160  addi 27, 4, -19928
  034c164  lis 25, 114
  034c168  li 4, 6
  034c16c  sth 3, 334(30)
  034c170  li 5, 0
  034c174  ori 3, 31, 0
  034c178  lfs 1, 68(27)
  034c17c  lfs 2, -3056(25)
  034c180  fmuls 1, 2, 1
  034c184  fctiwz 1, 1
  034c188  stfd 1, 504(1)
  034c18c  lwz 6, 508(1)
  034c190  extsw 6, 6
  034c194  bl 0xfddc0
  034c198  nop
  034c19c  li 3, 76
  034c1a0  vspltisw 2, -1
  034c1a4  li 4, -3056
  034c1a8  vslw 2, 2, 2
  034c1ac  <unknown>
  034c1b0  <unknown>
  034c1b4  vspltw 3, 3, 0
  034c1b8  li 3, 326
  034c1bc  vmaddfp 2, 4, 3, 2
  034c1c0  vctsxs 2, 2, 0
  034c1c4  vsplth 2, 2, 1
  034c1c8  stvehx 2, 3, 30
  034c1cc  lfs 1, 384(1)
  034c1d0  lfs 2, 16(31)
  034c1d4  lfs 3, 388(1)
  034c1d8  lfs 4, 20(31)
  034c1dc  fsubs 1, 1, 2
  034c1e0  fsubs 2, 3, 4
  034c1e4  bl 0x5e8338
  034c1e8  nop
  034c1ec  lis 3, 53
  034c1f0  addi 3, 3, -19928
  034c1f4  lfs 31, 8(3)
  034c1f8  fcmpu 0, 29, 31
  034c1fc  cror 6, 1, 2
  034c200  bt 6, 0x34c298
  034c204  lhz 3, 326(30)
  034c208  cmpwi 3, 0
  034c20c  bf 2, 0x34c298
  034c210  ori 3, 31, 0
  034c214  bl 0x34aa40
  034c218  cmpwi 3, 0
  034c21c  bt 2, 0x34c298
  034c220  lis 3, 53
  034c224  lis 29, 114
  034c228  addi 27, 3, -19928
  034c22c  ori 3, 31, 0
  034c230  li 4, 7
  034c234  li 5, 0
  034c238  lfs 1, 68(27)
  034c23c  lfs 2, -3056(29)
  034c240  fmuls 1, 2, 1
  034c244  fctiwz 1, 1
  034c248  stfd 1, 504(1)
  034c24c  lwz 6, 508(1)
  034c250  extsw 6, 6
  034c254  bl 0xfddc0
  034c258  nop
  034c25c  li 3, 76
  034c260  vspltisw 2, -1
  034c264  li 4, -3056
  034c268  <unknown>
  034c26c  vslw 2, 2, 2
  034c270  vspltw 3, 3, 0
  034c274  li 3, 326
  034c278  <unknown>
  034c27c  li 4, 7
  034c280  vmaddfp 2, 4, 3, 2
  034c284  vctsxs 2, 2, 0
  034c288  vsplth 2, 2, 1
  034c28c  stvehx 2, 3, 30
  034c290  stb 4, 32(31)
  034c294  b 0x34c310
  034c298  cmpwi 29, 0
  034c29c  bt 2, 0x34c2ac
  034c2a0  lfs 1, 320(30)
  034c2a4  fmuls 31, 1, 31
  034c2a8  b 0x34c2b0
  034c2ac  lfs 31, 320(30)
  034c2b0  fcmpu 0, 29, 31
  034c2b4  cror 6, 1, 2
  034c2b8  bt 6, 0x34c310
  034c2bc  lhz 3, 326(30)
  034c2c0  cmpwi 3, 0
  034c2c4  bf 2, 0x34c310
  034c2c8  lis 3, 53
  034c2cc  lis 4, 114
  034c2d0  addi 3, 3, -19928
  034c2d4  li 5, 0
  034c2d8  lfs 1, 68(3)
  034c2dc  lfs 2, -3056(4)
  034c2e0  ori 3, 31, 0
  034c2e4  fmuls 1, 2, 1
  034c2e8  li 4, 1
  034c2ec  fctiwz 1, 1
  034c2f0  stfd 1, 504(1)
  034c2f4  lwz 6, 508(1)
  034c2f8  extsw 6, 6
  034c2fc  bl 0xfddc0
  034c300  nop
  034c304  li 3, 3
  034c308  stb 24, 332(30)
  034c30c  stb 3, 32(31)
  034c310  lwz 3, 340(30)
  034c314  ori 4, 26, 0
  034c318  slwi 3, 3, 4
  034c31c  addc 3, 28, 3
  034c320  addic 3, 3, 16
  034c324  clrldi 3, 3, 32
  034c328  bl 0x5e8588
  034c32c  nop
  034c330  lis 3, 53
  034c334  addi 3, 3, -19928
  034c338  lfs 2, 64(3)
  034c33c  fcmpu 0, 1, 2
  034c340  bt 0, 0x34c3a0
  034c344  lwz 3, 340(30)
  034c348  lfs 31, 72(31)
  034c34c  slwi 3, 3, 4
  034c350  lfs 1, 16(31)
  034c354  addc 3, 28, 3
  034c358  lfs 2, 20(31)
  034c35c  clrldi 3, 3, 32
  034c360  lfs 3, 16(3)
  034c364  lfs 4, 20(3)
  034c368  fsubs 1, 3, 1
  034c36c  fsubs 2, 4, 2
  034c370  bl 0x5e8338
  034c374  nop
  034c378  fmr 2, 1
  034c37c  fmr 1, 31
  034c380  bl 0x5026a0
  034c384  nop
  034c388  lis 3, 53
  034c38c  addi 3, 3, -19928
  034c390  lfs 2, 80(3)
  034c394  fcmpu 0, 1, 2
  034c398  cror 6, 0, 2
  034c39c  bt 6, 0x34c3bc
  034c3a0  lwz 3, 340(30)
  034c3a4  addic 3, 3, 1
  034c3a8  stw 3, 340(30)
  034c3ac  lwz 4, 0(28)
  034c3b0  cmpw 3, 4
  034c3b4  bf 2, 0x34c3bc
  034c3b8  stw 24, 340(30)
  034c3bc  ori 29, 24, 0
  034c3c0  ori 27, 30, 0
  034c3c4  lhz 3, 326(30)
  034c3c8  cmpwi 3, 0
  034c3cc  bf 2, 0x34c418
  034c3d0  lwz 3, 352(27)
  034c3d4  cmpwi 3, -1
  034c3d8  bt 2, 0x34c418
  034c3dc  extsw 4, 3
  034c3e0  ori 3, 26, 0
  034c3e4  bl 0x110b70
  034c3e8  nop
  034c3ec  cmpwi 3, 0
  034c3f0  bt 2, 0x34c418
  034c3f4  slwi 3, 29, 2
  034c3f8  li 4, 5
  034c3fc  addc 3, 30, 3
  034c400  clrldi 3, 3, 32
  034c404  lwz 3, 352(3)
  034c408  sth 3, 344(30)
  034c40c  stb 4, 32(31)
  034c410  sth 24, 346(30)
  034c414  b 0x34c428
  034c418  addic 29, 29, 1
  034c41c  addic 27, 27, 4
  034c420  cmpwi 29, 4
  034c424  bt 0, 0x34c3c4
  034c428  lwz 3, 340(30)
  034c42c  lfs 1, 16(31)
  034c430  slwi 4, 3, 4
  034c434  slwi 3, 3, 4
  034c438  addc 4, 28, 4
  034c43c  addc 3, 28, 3
  034c440  clrldi 4, 4, 32
  034c444  clrldi 3, 3, 32
  034c448  lfs 2, 16(4)
  034c44c  stfs 2, 128(1)
  034c450  lfs 2, 20(4)
  034c454  stfs 2, 132(1)
  034c458  lfs 2, 24(4)
  034c45c  stfs 2, 136(1)
  034c460  lfs 2, 28(4)
  034c464  lfs 3, 20(31)
  034c468  stfs 2, 140(1)
  034c46c  lfs 2, 16(3)
  034c470  lfs 4, 20(3)
  034c474  fsubs 1, 2, 1
  034c478  fsubs 2, 4, 3
  034c47c  bl 0x5e8338
  034c480  nop
  034c484  lis 4, 53
  034c488  lis 6, 114
  034c48c  addi 4, 4, -19928
  034c490  lis 7, 114
  034c494  ori 3, 31, 0
  034c498  addic 5, 30, 304
  034c49c  lfs 2, 72(4)
  034c4a0  lfs 4, 36(4)
  034c4a4  lfs 3, -3048(6)
  034c4a8  lfs 5, -3052(7)
  034c4ac  fmuls 2, 3, 2
  034c4b0  fmuls 3, 3, 4
  034c4b4  fmuls 4, 5, 4
  034c4b8  bl 0xff2e8
  034c4bc  nop
  034c4c0  b 0x34ccb4
  034c4c4  lwz 4, 336(30)
  034c4c8  lis 3, 165
  034c4cc  slwi 4, 4, 2
  034c4d0  addic 3, 3, 7136
  034c4d4  extsw 28, 4
  034c4d8  lwzx 28, 3, 28
  034c4dc  bt 6, 0x34c4f8
  034c4e0  lis 4, 53
  034c4e4  lfs 1, 320(30)
  034c4e8  addi 4, 4, -19928
  034c4ec  lfs 2, 8(4)
  034c4f0  fmuls 1, 1, 2
  034c4f4  b 0x34c4fc
  034c4f8  lfs 1, 320(30)
  034c4fc  fcmpu 0, 29, 1
  034c500  cmpwi 1, 29, 0
  034c504  cror 2, 1, 2
  034c508  bt 2, 0x34c718
  034c50c  bf 6, 0x34c54c
  034c510  lwz 4, 312(30)
  034c514  cmpwi 4, -1
  034c518  bt 2, 0x34c54c
  034c51c  ori 5, 3, 0
  034c520  slwi 3, 4, 2
  034c524  extsw 4, 3
  034c528  addic 3, 1, 384
  034c52c  lwzx 5, 5, 4
  034c530  addic 4, 5, 16
  034c534  lwz 5, 0(5)
  034c538  extsw 5, 5
  034c53c  bl 0x104e44
  034c540  nop
  034c544  cmpwi 3, 0
  034c548  bt 2, 0x34c718
  034c54c  lhz 3, 334(30)
  034c550  clrlwi 4, 3, 31
  034c554  cmpwi 4, 0
  034c558  bf 2, 0x34c5d0
  034c55c  lis 4, 53
  034c560  ori 3, 3, 1
  034c564  addi 27, 4, -19928
  034c568  lis 25, 114
  034c56c  li 4, 6
  034c570  sth 3, 334(30)
  034c574  li 5, 0
  034c578  ori 3, 31, 0
  034c57c  lfs 1, 68(27)
  034c580  lfs 2, -3056(25)
  034c584  fmuls 1, 2, 1
  034c588  fctiwz 1, 1
  034c58c  stfd 1, 504(1)
  034c590  lwz 6, 508(1)
  034c594  extsw 6, 6
  034c598  bl 0xfddc0
  034c59c  nop
  034c5a0  li 3, 76
  034c5a4  vspltisw 2, -1
  034c5a8  li 4, -3056
  034c5ac  vslw 2, 2, 2
  034c5b0  <unknown>
  034c5b4  <unknown>
  034c5b8  vspltw 3, 3, 0
  034c5bc  li 3, 326
  034c5c0  vmaddfp 2, 4, 3, 2
  034c5c4  vctsxs 2, 2, 0
  034c5c8  vsplth 2, 2, 1
  034c5cc  stvehx 2, 3, 30
  034c5d0  lfs 1, 384(1)
  034c5d4  lfs 2, 16(31)
  034c5d8  lfs 3, 388(1)
  034c5dc  lfs 4, 20(31)
  034c5e0  fsubs 1, 1, 2
  034c5e4  fsubs 2, 3, 4
  034c5e8  bl 0x5e8338
  034c5ec  nop
  034c5f0  lis 3, 53
  034c5f4  addi 3, 3, -19928
  034c5f8  lfs 31, 8(3)
  034c5fc  fcmpu 0, 29, 31
  034c600  cror 6, 1, 2
  034c604  bt 6, 0x34c6a0
  034c608  lhz 3, 326(30)
  034c60c  cmpwi 3, 0
  034c610  bf 2, 0x34c6a0
  034c614  ori 3, 31, 0
  034c618  bl 0x34aa40
  034c61c  cmpwi 3, 0
  034c620  bt 2, 0x34c6a0
  034c624  lis 3, 53
  034c628  lis 29, 114
  034c62c  addi 27, 3, -19928
  034c630  ori 3, 31, 0
  034c634  li 4, 7
  034c638  li 5, 0
  034c63c  lfs 1, 68(27)
  034c640  lfs 2, -3056(29)
  034c644  fmuls 1, 2, 1
  034c648  fctiwz 1, 1
  034c64c  stfd 1, 504(1)
  034c650  lwz 6, 508(1)
  034c654  extsw 6, 6
  034c658  bl 0xfddc0
  034c65c  nop
  034c660  li 3, 76
  034c664  vspltisw 2, -1
  034c668  li 4, -3056
  034c66c  <unknown>
  034c670  vslw 2, 2, 2
  034c674  vspltw 3, 3, 0
  034c678  li 3, 326
  034c67c  <unknown>
  034c680  li 4, 7
  034c684  vmaddfp 2, 4, 3, 2
  034c688  vctsxs 2, 2, 0
  034c68c  vsplth 2, 2, 1
  034c690  stvehx 2, 3, 30
  034c694  stb 4, 32(31)
  034c698  stw 24, 304(30)
  034c69c  b 0x34c718
  034c6a0  cmpwi 29, 0
  034c6a4  bt 2, 0x34c6b4
  034c6a8  lfs 1, 320(30)
  034c6ac  fmuls 31, 1, 31
  034c6b0  b 0x34c6b8
  034c6b4  lfs 31, 320(30)
  034c6b8  fcmpu 0, 29, 31
  034c6bc  cror 6, 1, 2
  034c6c0  bt 6, 0x34c718
  034c6c4  lhz 3, 326(30)
  034c6c8  cmpwi 3, 0
  034c6cc  bf 2, 0x34c718
  034c6d0  lis 3, 53
  034c6d4  lis 4, 114
  034c6d8  addi 3, 3, -19928
  034c6dc  li 5, 0
  034c6e0  lfs 1, 68(3)
  034c6e4  lfs 2, -3056(4)
  034c6e8  ori 3, 31, 0
  034c6ec  li 4, 1
  034c6f0  fmuls 1, 2, 1
  034c6f4  fctiwz 1, 1
  034c6f8  stfd 1, 504(1)
  034c6fc  lwz 6, 508(1)
  034c700  extsw 6, 6
  034c704  bl 0xfddc0
  034c708  nop
  034c70c  li 3, 3
  034c710  stb 24, 332(30)
  034c714  stb 3, 32(31)
  034c718  lhz 3, 346(30)
  034c71c  extsh 3, 3
  034c720  cmpwi 3, 0
  034c724  cmpwi 1, 3, -1
  034c728  cmpwi 6, 3, 1
  034c72c  cmpwi 7, 3, 2
  034c730  bt 1, 0x34c73c
  034c734  bf 5, 0x34ccb4
  034c738  b 0x34c748
  034c73c  bf 25, 0x34c894
  034c740  bf 29, 0x34c978
  034c744  b 0x34ccb4
  034c748  lis 3, 165
  034c74c  lhz 4, 344(30)
  034c750  lis 6, 53
  034c754  extsh 5, 4
  034c758  extsh 4, 4
  034c75c  lwz 3, 7128(3)
  034c760  sldi 5, 5, 7
  034c764  sldi 4, 4, 7
  034c768  addc 5, 3, 5
  034c76c  addi 6, 6, -19928
  034c770  clrldi 5, 5, 32
  034c774  addc 3, 3, 4
  034c778  lis 4, 114
  034c77c  clrldi 3, 3, 32
  034c780  lfs 1, 48(5)
  034c784  stfs 1, 128(1)
  034c788  lfs 1, 52(5)
  034c78c  stfs 1, 132(1)
  034c790  lfs 1, 56(5)
  034c794  stfs 1, 136(1)
  034c798  lfs 1, 60(5)
  034c79c  lis 5, 114
  034c7a0  stfs 1, 140(1)
  034c7a4  lfs 3, 72(6)
  034c7a8  lfs 5, 36(6)
  034c7ac  lfs 4, -3048(5)
  034c7b0  lfs 1, 120(3)
  034c7b4  lfs 6, -3052(4)
  034c7b8  fmuls 2, 4, 3
  034c7bc  ori 3, 31, 0
  034c7c0  fmuls 3, 4, 5
  034c7c4  addic 5, 30, 304
  034c7c8  fmuls 4, 6, 5
  034c7cc  bl 0xff2e8
  034c7d0  nop
  034c7d4  lbz 3, 83(31)
  034c7d8  cmpwi 3, 1
  034c7dc  bt 2, 0x34c81c
  034c7e0  lis 3, 53
  034c7e4  lis 4, 114
  034c7e8  addi 3, 3, -19928
  034c7ec  li 5, 0
  034c7f0  lfs 1, 68(3)
  034c7f4  lfs 2, -3056(4)
  034c7f8  ori 3, 31, 0
  034c7fc  li 4, 1
  034c800  fmuls 1, 2, 1
  034c804  fctiwz 1, 1
  034c808  stfd 1, 504(1)
  034c80c  lwz 6, 508(1)
  034c810  extsw 6, 6
  034c814  bl 0xfddc0
  034c818  nop
  034c81c  ori 3, 26, 0
  034c820  addic 4, 1, 128
  034c824  bl 0x5e8588
  034c828  nop
  034c82c  lis 3, 53
  034c830  addi 3, 3, -19928
  034c834  lfs 2, 64(3)
  034c838  fcmpu 0, 1, 2
  034c83c  cror 6, 1, 2
  034c840  bt 6, 0x34ccb4
  034c844  lis 3, 165
  034c848  lhz 4, 344(30)
  034c84c  extsh 4, 4
  034c850  sldi 4, 4, 7
  034c854  lwz 3, 7128(3)
  034c858  lfs 1, 72(31)
  034c85c  addc 3, 3, 4
  034c860  clrldi 3, 3, 32
  034c864  lfs 2, 120(3)
  034c868  bl 0x5026a0
  034c86c  nop
  034c870  lis 3, 53
  034c874  addi 3, 3, -19928
  034c878  lfs 2, 84(3)
  034c87c  fcmpu 0, 1, 2
  034c880  cror 6, 1, 2
  034c884  bt 6, 0x34ccb4
  034c888  li 3, 1
  034c88c  sth 3, 346(30)
  034c890  b 0x34ccb4
  034c894  lis 3, 165
  034c898  lhz 4, 344(30)
  034c89c  extsh 4, 4
  034c8a0  sldi 4, 4, 7
  034c8a4  lwz 3, 7128(3)
  034c8a8  addc 3, 3, 4
  034c8ac  lbz 4, 83(31)
  034c8b0  clrldi 3, 3, 32
  034c8b4  cmpwi 4, 7
  034c8b8  lfs 1, 48(3)
  034c8bc  stfs 1, 128(1)
  034c8c0  lfs 1, 52(3)
  034c8c4  stfs 1, 132(1)
  034c8c8  lfs 1, 56(3)
  034c8cc  stfs 1, 136(1)
  034c8d0  lfs 1, 60(3)
  034c8d4  stfs 1, 140(1)
  034c8d8  bt 2, 0x34c91c
  034c8dc  lis 3, 53
  034c8e0  lis 4, 114
  034c8e4  addi 3, 3, -19928
  034c8e8  li 5, 0
  034c8ec  lfs 1, 68(3)
  034c8f0  lfs 2, -3056(4)
  034c8f4  ori 3, 31, 0
  034c8f8  fmuls 1, 2, 1
  034c8fc  li 4, 7
  034c900  fctiwz 1, 1
  034c904  stfd 1, 504(1)
  034c908  lwz 6, 508(1)
  034c90c  extsw 6, 6
  034c910  bl 0xfddc0
  034c914  nop
  034c918  b 0x34ccb4
  034c91c  lbz 3, 112(31)
  034c920  rlwinm 3, 3, 0, 30, 30
  034c924  cmpwi 3, 0
  034c928  bt 2, 0x34ccb4
  034c92c  lis 3, 53
  034c930  lis 4, 114
  034c934  addi 3, 3, -19928
  034c938  li 5, 0
  034c93c  lfs 1, 68(3)
  034c940  lfs 2, -3056(4)
  034c944  ori 3, 31, 0
  034c948  fmuls 1, 2, 1
  034c94c  li 4, 0
  034c950  fctiwz 1, 1
  034c954  stfd 1, 504(1)
  034c958  lwz 6, 508(1)
  034c95c  extsw 6, 6
  034c960  bl 0xfddc0
  034c964  nop
  034c968  li 3, 2
  034c96c  stw 24, 304(30)
  034c970  sth 3, 346(30)
  034c974  b 0x34ccb4
  034c978  lis 3, 165
  034c97c  lhz 4, 344(30)
  034c980  extsh 4, 4
  034c984  lwz 3, 7128(3)
  034c988  sldi 4, 4, 7
  034c98c  addc 3, 3, 4
  034c990  lwz 4, 340(30)
  034c994  clrldi 3, 3, 32
  034c998  slwi 4, 4, 4
  034c99c  addc 4, 28, 4
  034c9a0  lfs 1, 48(3)
  034c9a4  clrldi 4, 4, 32
  034c9a8  stfs 1, 128(1)
  034c9ac  lfs 1, 52(3)
  034c9b0  stfs 1, 132(1)
  034c9b4  lfs 1, 56(3)
  034c9b8  stfs 1, 136(1)
  034c9bc  lfs 1, 60(3)
  034c9c0  lfs 2, 16(31)
  034c9c4  stfs 1, 140(1)
  034c9c8  lfs 1, 16(4)
  034c9cc  lfs 3, 20(4)
  034c9d0  lfs 4, 20(31)
  034c9d4  fsubs 1, 1, 2
  034c9d8  fsubs 2, 3, 4
  034c9dc  bl 0x5e8338
  034c9e0  nop
  034c9e4  lis 3, 53
  034c9e8  lis 4, 114
  034c9ec  addi 29, 3, -19928
  034c9f0  lis 3, 114
  034c9f4  addic 5, 30, 304
  034c9f8  lfs 2, 72(29)
  034c9fc  lfs 4, 36(29)
  034ca00  lfs 3, -3048(3)
  034ca04  lfs 5, -3052(4)
  034ca08  ori 3, 31, 0
  034ca0c  fmuls 2, 3, 2
  034ca10  fmuls 3, 3, 4
  034ca14  fmuls 4, 5, 4
  034ca18  bl 0xff2e8
  034ca1c  nop
  034ca20  lwz 3, 340(30)
  034ca24  lfs 31, 72(31)
  034ca28  slwi 3, 3, 4
  034ca2c  lfs 1, 16(31)
  034ca30  addc 3, 28, 3
  034ca34  lfs 2, 20(31)
  034ca38  clrldi 3, 3, 32
  034ca3c  lfs 3, 16(3)
  034ca40  lfs 4, 20(3)
  034ca44  fsubs 1, 3, 1
  034ca48  fsubs 2, 4, 2
  034ca4c  bl 0x5e8338
  034ca50  nop
  034ca54  fmr 2, 1
  034ca58  fmr 1, 31
  034ca5c  bl 0x5026a0
  034ca60  nop
  034ca64  lfs 2, 84(29)
  034ca68  fcmpu 0, 1, 2
  034ca6c  cror 6, 1, 2
  034ca70  bt 6, 0x34ccb4
  034ca74  lis 3, 53
  034ca78  vspltisw 2, -1
  034ca7c  li 4, 4
  034ca80  addi 3, 3, -19928
  034ca84  li 6, 88
  034ca88  lis 5, 114
  034ca8c  stb 4, 32(31)
  034ca90  li 4, -3056
  034ca94  vslw 2, 2, 2
  034ca98  <unknown>
  034ca9c  li 3, 326
  034caa0  vspltw 3, 3, 0
  034caa4  <unknown>
  034caa8  vmaddfp 2, 4, 3, 2
  034caac  vctsxs 2, 2, 0
  034cab0  vsplth 2, 2, 1
  034cab4  stvehx 2, 3, 30
  034cab8  b 0x34ccb4
  034cabc  bt 6, 0x34cad8
  034cac0  lis 3, 53
  034cac4  lfs 31, 320(30)
  034cac8  addi 3, 3, -19928
  034cacc  lfs 1, 8(3)
  034cad0  fmuls 31, 31, 1
  034cad4  b 0x34cadc
  034cad8  lfs 31, 320(30)
  034cadc  fmr 1, 31
  034cae0  ori 3, 31, 0
  034cae4  addic 4, 1, 128
  034cae8  bl 0x34ab98
  034caec  lhz 3, 326(30)
  034caf0  fmr 31, 1
  034caf4  cmpwi 3, 0
  034caf8  bf 2, 0x34cba0
  034cafc  lis 3, 53
  034cb00  addi 3, 3, -19928
  034cb04  lfs 1, 40(3)
  034cb08  fcmpu 0, 30, 1
  034cb0c  bt 1, 0x34cb20
  034cb10  lbz 3, 112(31)
  034cb14  rlwinm 3, 3, 0, 30, 30
  034cb18  cmpwi 3, 0
  034cb1c  bt 2, 0x34cba0
  034cb20  lis 3, 53
  034cb24  lis 29, 114
  034cb28  addi 28, 3, -19928
  034cb2c  ori 3, 31, 0
  034cb30  li 4, 0
  034cb34  li 5, 0
  034cb38  lfs 1, 92(28)
  034cb3c  lfs 2, -3056(29)
  034cb40  fmuls 1, 2, 1
  034cb44  fctiwz 1, 1
  034cb48  stfd 1, 504(1)
  034cb4c  lwz 6, 508(1)
  034cb50  extsw 6, 6
  034cb54  bl 0xfddc0
  034cb58  nop
  034cb5c  li 3, 96
  034cb60  vspltisw 2, -1
  034cb64  li 4, -3056
  034cb68  <unknown>
  034cb6c  vslw 2, 2, 2
  034cb70  vspltw 3, 3, 0
  034cb74  li 3, 326
  034cb78  <unknown>
  034cb7c  li 4, 1
  034cb80  vmaddfp 2, 4, 3, 2
  034cb84  vctsxs 2, 2, 0
  034cb88  vsplth 2, 2, 1
  034cb8c  stvehx 2, 3, 30
  034cb90  stb 4, 32(31)
  034cb94  lhz 3, 334(30)
  034cb98  ori 3, 3, 2
  034cb9c  sth 3, 334(30)
  034cba0  lis 3, 53
  034cba4  fmr 1, 31
  034cba8  lis 4, 114
  034cbac  addi 3, 3, -19928
  034cbb0  lis 6, 114
  034cbb4  addic 5, 30, 304
  034cbb8  lfs 3, 72(3)
  034cbbc  lfs 4, 36(3)
  034cbc0  lfs 5, -3048(4)
  034cbc4  ori 3, 31, 0
  034cbc8  lfs 6, -3052(6)
  034cbcc  fmuls 2, 5, 3
  034cbd0  fmuls 3, 5, 4
  034cbd4  fmuls 4, 6, 4
  034cbd8  bl 0xff2e8
  034cbdc  nop
  034cbe0  b 0x34ccb4
  034cbe4  lbz 3, 82(31)
  034cbe8  cmpwi 3, 8
  034cbec  bf 2, 0x34cc10
  034cbf0  ori 3, 31, 0
  034cbf4  bl 0xefe40
  034cbf8  nop
  034cbfc  lis 3, 53
  034cc00  addi 3, 3, -19928
  034cc04  lfs 2, 100(3)
  034cc08  fcmpu 0, 1, 2
  034cc0c  bt 1, 0x34cc20
  034cc10  lbz 3, 112(31)
  034cc14  rlwinm 3, 3, 0, 30, 30
  034cc18  cmpwi 3, 0
  034cc1c  bt 2, 0x34ccb4
  034cc20  lis 3, 53
  034cc24  lis 4, 114
  034cc28  addi 3, 3, -19928
  034cc2c  li 5, 0
  034cc30  lfs 1, 68(3)
  034cc34  lfs 2, -3056(4)
  034cc38  ori 3, 31, 0
  034cc3c  fmuls 1, 2, 1
  034cc40  li 4, 0
  034cc44  fctiwz 1, 1
  034cc48  stfd 1, 504(1)
  034cc4c  lwz 6, 508(1)
  034cc50  extsw 6, 6
  034cc54  bl 0xfddc0
  034cc58  nop
  034cc5c  li 3, 1
  034cc60  stb 3, 32(31)
  034cc64  sth 24, 326(30)
  034cc68  b 0x34ccb4
  034cc6c  lbz 3, 112(31)
  034cc70  rlwinm 3, 3, 0, 30, 30
  034cc74  cmpwi 3, 0
  034cc78  bt 2, 0x34ccb4
  034cc7c  ori 3, 31, 0
  034cc80  bl 0x34a8d8
  034cc84  ori 3, 31, 0
  034cc88  bl 0xefb38
  034cc8c  nop
  034cc90  b 0x34d6c4
  034cc94  ori 3, 31, 0
  034cc98  addic 4, 30, 192
  034cc9c  bl 0x48c188
  034cca0  nop
  034cca4  cmpwi 3, 0
  034cca8  bt 2, 0x34ccb4
  034ccac  stb 24, 32(31)
  034ccb0  sth 24, 488(30)
  034ccb4  lis 3, 53
  034ccb8  lwz 4, 316(30)
  034ccbc  addi 3, 3, -19928
  034ccc0  cmpwi 4, 0
  034ccc4  lfs 31, 16(3)
  034ccc8  bf 1, 0x34cd8c
  034cccc  lis 3, 53
  034ccd0  lfs 1, 72(31)
  034ccd4  addi 29, 3, -19928
  034ccd8  lfs 29, 36(29)
  034ccdc  fmr 2, 29
  034cce0  bl 0x502578
  034cce4  nop
  034cce8  bl 0x5e8078
  034ccec  nop
  034ccf0  lfs 2, 316(30)
  034ccf4  fmuls 3, 1, 2
  034ccf8  lfs 1, 72(31)
  034ccfc  fmr 2, 29
  034cd00  stfs 3, 176(1)
  034cd04  bl 0x502578
  034cd08  nop
  034cd0c  bl 0x5e8128
  034cd10  nop
  034cd14  lfs 2, 316(30)
  034cd18  addic 28, 1, 176
  034cd1c  stw 24, 184(1)
  034cd20  fmuls 1, 1, 2
  034cd24  ori 5, 26, 0
  034cd28  ori 3, 28, 0
  034cd2c  ori 4, 28, 0
  034cd30  stfs 1, 180(1)
  034cd34  bl 0x5e7f54
  034cd38  nop
  034cd3c  lis 3, 114
  034cd40  lfs 1, 24(29)
  034cd44  lfs 2, 104(29)
  034cd48  lfs 3, -3056(3)
  034cd4c  fmuls 1, 3, 1
  034cd50  ori 3, 31, 0
  034cd54  ori 4, 26, 0
  034cd58  ori 5, 28, 0
  034cd5c  li 10, 1
  034cd60  fmuls 1, 1, 1
  034cd64  fdivs 1, 2, 1
  034cd68  lfs 2, 316(30)
  034cd6c  fadds 1, 2, 1
  034cd70  stfs 1, 316(30)
  034cd74  lfs 1, 56(29)
  034cd78  lfs 2, 108(29)
  034cd7c  lfs 3, 32(29)
  034cd80  lfs 4, 112(29)
  034cd84  bl 0xffcd0
  034cd88  nop
  034cd8c  lbz 3, 32(31)
  034cd90  cmpwi 3, 9
  034cd94  cmpwi 1, 3, 4
  034cd98  cmpwi 6, 3, 3
  034cd9c  cmpwi 7, 3, 5
  034cda0  bt 2, 0x34d6c4
  034cda4  bf 6, 0x34cf04
  034cda8  lbz 3, 83(31)
  034cdac  cmpwi 3, 1
  034cdb0  bt 2, 0x34cdf0
  034cdb4  lis 3, 53
  034cdb8  lis 4, 114
  034cdbc  addi 3, 3, -19928
  034cdc0  li 5, 0
  034cdc4  lfs 1, 68(3)
  034cdc8  lfs 2, -3056(4)
  034cdcc  ori 3, 31, 0
  034cdd0  li 4, 1
  034cdd4  fmuls 1, 2, 1
  034cdd8  fctiwz 1, 1
  034cddc  stfd 1, 504(1)
  034cde0  lwz 6, 508(1)
  034cde4  extsw 6, 6
  034cde8  bl 0xfddc0
  034cdec  nop
  034cdf0  lfs 1, 72(31)
  034cdf4  bl 0x5e8078
  034cdf8  nop
  034cdfc  lis 3, 53
  034ce00  lis 28, 114
  034ce04  addi 29, 3, -19928
  034ce08  lfs 31, 8(29)
  034ce0c  lfs 3, -3052(28)
  034ce10  lfs 2, 72(31)
  034ce14  fmuls 3, 3, 31
  034ce18  fmuls 3, 3, 1
  034ce1c  fmr 1, 2
  034ce20  stfs 3, 192(1)
  034ce24  bl 0x5e8128
  034ce28  nop
  034ce2c  lfs 2, -3052(28)
  034ce30  addic 28, 1, 192
  034ce34  stw 24, 200(1)
  034ce38  fmuls 2, 2, 31
  034ce3c  ori 5, 26, 0
  034ce40  ori 3, 28, 0
  034ce44  ori 4, 28, 0
  034ce48  fmuls 1, 2, 1
  034ce4c  stfs 1, 196(1)
  034ce50  bl 0x5e7f54
  034ce54  nop
  034ce58  lfs 1, 16(31)
  034ce5c  ori 3, 31, 0
  034ce60  lfs 2, 20(31)
  034ce64  addic 4, 1, 208
  034ce68  stfs 1, 208(1)
  034ce6c  ori 5, 28, 0
  034ce70  lfs 1, 24(31)
  034ce74  li 10, 0
  034ce78  stfs 2, 212(1)
  034ce7c  lfs 2, 28(31)
  034ce80  stfs 1, 216(1)
  034ce84  stfs 2, 220(1)
  034ce88  lfs 1, 56(29)
  034ce8c  lfs 2, 108(29)
  034ce90  lfs 3, 32(29)
  034ce94  lfs 4, 112(29)
  034ce98  bl 0xffcd0
  034ce9c  nop
  034cea0  lwz 3, 312(30)
  034cea4  cmpwi 3, -1
  034cea8  bt 2, 0x34cee0
  034ceac  lis 4, 165
  034ceb0  slwi 3, 3, 2
  034ceb4  addic 4, 4, 7136
  034ceb8  extsw 5, 3
  034cebc  addic 3, 1, 208
  034cec0  lwzx 5, 4, 5
  034cec4  addic 4, 5, 16
  034cec8  lwz 5, 0(5)
  034cecc  extsw 5, 5
  034ced0  bl 0x104e44
  034ced4  nop
  034ced8  cmpwi 3, 0
  034cedc  bt 2, 0x34d458
  034cee0  lfs 1, 208(1)
  034cee4  lfs 2, 212(1)
  034cee8  stfs 1, 16(31)
  034ceec  lfs 1, 216(1)
  034cef0  stfs 2, 20(31)
  034cef4  lfs 2, 220(1)
  034cef8  stfs 1, 24(31)
  034cefc  stfs 2, 28(31)
  034cf00  b 0x34d458
  034cf04  bf 26, 0x34d250
  034cf08  lfs 1, 128(1)
  034cf0c  lfs 2, 16(31)
  034cf10  lfs 3, 132(1)
  034cf14  fsubs 1, 1, 2
  034cf18  lfs 4, 20(31)
  034cf1c  fsubs 2, 3, 4
  034cf20  bl 0x5e8338
  034cf24  nop
  034cf28  ori 3, 26, 0
  034cf2c  lbz 29, 83(31)
  034cf30  addic 4, 1, 128
  034cf34  fmr 30, 1
  034cf38  bl 0x5e8588
  034cf3c  nop
  034cf40  lis 3, 53
  034cf44  lis 4, 114
  034cf48  addi 3, 3, -19928
  034cf4c  lfs 29, 44(3)
  034cf50  lfs 2, -3052(4)
  034cf54  lfs 3, 8(3)
  034cf58  fmuls 2, 2, 29
  034cf5c  fmuls 2, 2, 3
  034cf60  fcmpu 0, 1, 2
  034cf64  bt 0, 0x34d0e4
  034cf68  fmr 1, 30
  034cf6c  lfs 2, 72(31)
  034cf70  bl 0x5025e0
  034cf74  nop
  034cf78  lis 3, 53
  034cf7c  fmr 28, 1
  034cf80  addi 28, 3, -19928
  034cf84  lfs 2, 116(28)
  034cf88  bl 0x502578
  034cf8c  nop
  034cf90  lfs 2, 120(28)
  034cf94  fsub 31, 1, 31
  034cf98  lbz 3, 332(30)
  034cf9c  fadds 2, 1, 2
  034cfa0  fsel 31, 31, 1, 2
  034cfa4  bl 0x502730
  034cfa8  nop
  034cfac  lfs 30, 124(28)
  034cfb0  fmuls 1, 1, 30
  034cfb4  bl 0x502648
  034cfb8  nop
  034cfbc  bl 0x502648
  034cfc0  nop
  034cfc4  fmr 2, 28
  034cfc8  bl 0x5026a0
  034cfcc  nop
  034cfd0  lfs 2, 128(28)
  034cfd4  lbz 3, 332(30)
  034cfd8  fcmpu 0, 1, 2
  034cfdc  cror 6, 0, 2
  034cfe0  bt 6, 0x34d044
  034cfe4  lis 3, 53
  034cfe8  addi 3, 3, -19928
  034cfec  lfs 1, 132(3)
  034cff0  lfs 2, 136(3)
  034cff4  fmuls 1, 31, 1
  034cff8  fmuls 1, 1, 2
  034cffc  bl 0x502758
  034d000  nop
  034d004  rlwinm 6, 3, 2, 22, 29
  034d008  ori 7, 3, 0
  034d00c  stb 3, 332(30)
  034d010  li 5, 3
  034d014  li 3, 2
  034d018  addc 4, 1, 6
  034d01c  li 6, 4
  034d020  stw 5, 500(1)
  034d024  clrldi 4, 4, 32
  034d028  stw 3, 496(1)
  034d02c  li 3, 1
  034d030  stw 6, 492(1)
  034d034  stw 3, 488(1)
  034d038  lwz 29, 488(4)
  034d03c  ori 3, 7, 0
  034d040  extsw 29, 29
  034d044  clrlwi 3, 3, 24
  034d048  bl 0x502730
  034d04c  nop
  034d050  fmuls 1, 1, 30
  034d054  bl 0x502648
  034d058  nop
  034d05c  fmr 31, 1
  034d060  lfs 1, 72(31)
  034d064  fmr 2, 31
  034d068  bl 0x502578
  034d06c  nop
  034d070  bl 0x5e8078
  034d074  nop
  034d078  lis 28, 114
  034d07c  lfs 3, 72(31)
  034d080  lfs 2, -3052(28)
  034d084  fmuls 4, 2, 29
  034d088  fmr 2, 31
  034d08c  fmuls 4, 4, 1
  034d090  fmr 1, 3
  034d094  stfs 4, 224(1)
  034d098  bl 0x502578
  034d09c  nop
  034d0a0  bl 0x5e8128
  034d0a4  nop
  034d0a8  lfs 2, -3052(28)
  034d0ac  addic 3, 1, 224
  034d0b0  stw 24, 232(1)
  034d0b4  ori 5, 26, 0
  034d0b8  fmuls 2, 2, 29
  034d0bc  ori 4, 3, 0
  034d0c0  fmuls 1, 2, 1
  034d0c4  stfs 1, 228(1)
  034d0c8  bl 0x5e7f54
  034d0cc  nop
  034d0d0  lfs 29, 16(31)
  034d0d4  lfs 1, 20(31)
  034d0d8  lfs 2, 24(31)
  034d0dc  lfs 3, 28(31)
  034d0e0  b 0x34d108
  034d0e4  lfs 29, 16(31)
  034d0e8  lfs 1, 20(31)
  034d0ec  ori 29, 24, 0
  034d0f0  lfs 2, 24(31)
  034d0f4  lfs 3, 28(31)
  034d0f8  stfs 29, 224(1)
  034d0fc  stfs 1, 228(1)
  034d100  stfs 2, 232(1)
  034d104  stfs 3, 236(1)
  034d108  lis 3, 53
  034d10c  stfs 29, 240(1)
  034d110  stfs 1, 244(1)
  034d114  addic 4, 1, 240
  034d118  addi 6, 3, -19928
  034d11c  stfs 2, 248(1)
  034d120  stfs 3, 252(1)
  034d124  ori 3, 31, 0
  034d128  addic 5, 1, 224
  034d12c  li 10, 0
  034d130  lfs 1, 56(6)
  034d134  lfs 2, 108(6)
  034d138  lfs 3, 32(6)
  034d13c  lfs 4, 112(6)
  034d140  bl 0xffcd0
  034d144  nop
  034d148  ori 28, 3, 0
  034d14c  lwz 3, 312(30)
  034d150  cmpwi 3, -1
  034d154  bt 2, 0x34d18c
  034d158  lis 4, 165
  034d15c  slwi 3, 3, 2
  034d160  addic 4, 4, 7136
  034d164  extsw 5, 3
  034d168  addic 3, 1, 240
  034d16c  lwzx 5, 4, 5
  034d170  addic 4, 5, 16
  034d174  lwz 5, 0(5)
  034d178  extsw 5, 5
  034d17c  bl 0x104e44
  034d180  nop
  034d184  cmpwi 3, 0
  034d188  bt 2, 0x34d1bc
  034d18c  lfs 1, 240(1)
  034d190  lfs 2, 244(1)
  034d194  cmpwi 28, 0
  034d198  stfs 1, 16(31)
  034d19c  lfs 1, 248(1)
  034d1a0  stfs 2, 20(31)
  034d1a4  lfs 2, 252(1)
  034d1a8  stfs 1, 24(31)
  034d1ac  stfs 2, 28(31)
  034d1b0  bf 2, 0x34d1c0
  034d1b4  ori 29, 24, 0
  034d1b8  b 0x34d1c0
  034d1bc  ori 29, 24, 0
  034d1c0  addic 3, 30, 324
  034d1c4  bl 0x4fffb4
  034d1c8  nop
  034d1cc  cmpwi 3, 0
  034d1d0  bt 2, 0x34d458
  034d1d4  lbz 3, 83(31)
  034d1d8  cmpw 29, 3
  034d1dc  bt 2, 0x34d458
  034d1e0  lis 3, 53
  034d1e4  lis 28, 114
  034d1e8  addi 27, 3, -19928
  034d1ec  ori 3, 31, 0
  034d1f0  ori 4, 29, 0
  034d1f4  li 5, 0
  034d1f8  lfs 1, 68(27)
  034d1fc  lfs 2, -3056(28)
  034d200  fmuls 1, 2, 1
  034d204  fctiwz 1, 1
  034d208  stfd 1, 504(1)
  034d20c  lwz 6, 508(1)
  034d210  extsw 6, 6
  034d214  bl 0xfddc0
  034d218  nop
  034d21c  li 3, 140
  034d220  vspltisw 2, -1
  034d224  li 4, -3056
  034d228  <unknown>
  034d22c  vslw 2, 2, 2
  034d230  vspltw 3, 3, 0
  034d234  li 3, 324
  034d238  <unknown>
  034d23c  vmaddfp 2, 4, 3, 2
  034d240  vctsxs 2, 2, 0
  034d244  vsplth 2, 2, 1
  034d248  stvehx 2, 3, 30
  034d24c  b 0x34d458
  034d250  bt 30, 0x34d280
  034d254  cmpwi 3, 7
  034d258  bf 2, 0x34d3f8
  034d25c  lbz 4, 82(31)
  034d260  cmpwi 4, 7
  034d264  bf 2, 0x34d3f8
  034d268  lis 4, 53
  034d26c  addi 4, 4, -19928
  034d270  lfs 1, 24(4)
  034d274  fcmpu 0, 30, 1
  034d278  cror 6, 0, 2
  034d27c  bt 6, 0x34d3f8
  034d280  ori 3, 26, 0
  034d284  addic 4, 1, 128
  034d288  bl 0x5e8588
  034d28c  nop
  034d290  lis 3, 53
  034d294  lis 4, 114
  034d298  addi 3, 3, -19928
  034d29c  lfs 31, 8(3)
  034d2a0  lfs 2, -3052(4)
  034d2a4  fmuls 2, 2, 31
  034d2a8  fcmpu 0, 1, 2
  034d2ac  cror 6, 0, 2
  034d2b0  bt 6, 0x34d458
  034d2b4  lfs 1, 128(1)
  034d2b8  lfs 2, 16(31)
  034d2bc  lfs 3, 132(1)
  034d2c0  lfs 4, 20(31)
  034d2c4  fsubs 1, 1, 2
  034d2c8  fsubs 2, 3, 4
  034d2cc  bl 0x5e8338
  034d2d0  nop
  034d2d4  bl 0x5e8078
  034d2d8  nop
  034d2dc  lis 29, 114
  034d2e0  lfs 3, 128(1)
  034d2e4  lfs 4, 16(31)
  034d2e8  lfs 2, -3052(29)
  034d2ec  fmuls 5, 2, 31
  034d2f0  lfs 2, 132(1)
  034d2f4  lfs 6, 20(31)
  034d2f8  fsubs 2, 2, 6
  034d2fc  fmuls 5, 5, 1
  034d300  fsubs 1, 3, 4
  034d304  stfs 5, 256(1)
  034d308  bl 0x5e8338
  034d30c  nop
  034d310  bl 0x5e8128
  034d314  nop
  034d318  lfs 2, -3052(29)
  034d31c  ori 5, 26, 0
  034d320  stw 24, 264(1)
  034d324  addic 29, 1, 256
  034d328  fmuls 2, 2, 31
  034d32c  ori 3, 29, 0
  034d330  ori 4, 29, 0
  034d334  fmuls 1, 2, 1
  034d338  stfs 1, 260(1)
  034d33c  bl 0x5e7f54
  034d340  nop
  034d344  lfs 1, 16(31)
  034d348  lis 3, 53
  034d34c  lfs 2, 20(31)
  034d350  stfs 1, 272(1)
  034d354  addic 4, 1, 272
  034d358  addi 6, 3, -19928
  034d35c  lfs 1, 24(31)
  034d360  stfs 2, 276(1)
  034d364  ori 3, 31, 0
  034d368  lfs 2, 28(31)
  034d36c  ori 5, 29, 0
  034d370  stfs 1, 280(1)
  034d374  li 10, 0
  034d378  stfs 2, 284(1)
  034d37c  lfs 1, 56(6)
  034d380  lfs 2, 144(6)
  034d384  lfs 3, 32(6)
  034d388  lfs 4, 112(6)
  034d38c  bl 0xffcd0
  034d390  nop
  034d394  lwz 3, 312(30)
  034d398  cmpwi 3, -1
  034d39c  bt 2, 0x34d3d4
  034d3a0  lis 4, 165
  034d3a4  slwi 3, 3, 2
  034d3a8  addic 4, 4, 7136
  034d3ac  extsw 5, 3
  034d3b0  addic 3, 1, 272
  034d3b4  lwzx 5, 4, 5
  034d3b8  addic 4, 5, 16
  034d3bc  lwz 5, 0(5)
  034d3c0  extsw 5, 5
  034d3c4  bl 0x104e44
  034d3c8  nop
  034d3cc  cmpwi 3, 0
  034d3d0  bt 2, 0x34d458
  034d3d4  lfs 1, 272(1)
  034d3d8  lfs 2, 276(1)
  034d3dc  stfs 1, 16(31)
  034d3e0  lfs 1, 280(1)
  034d3e4  stfs 2, 20(31)
  034d3e8  lfs 2, 284(1)
  034d3ec  stfs 1, 24(31)
  034d3f0  stfs 2, 28(31)
  034d3f4  b 0x34d458
  034d3f8  cmpwi 3, 6
  034d3fc  bt 2, 0x34d458
  034d400  cmpwi 3, 8
  034d404  bt 2, 0x34d458
  034d408  lfs 1, 16(31)
  034d40c  lis 3, 53
  034d410  lfs 2, 20(31)
  034d414  addic 5, 1, 288
  034d418  stfs 1, 288(1)
  034d41c  addi 6, 3, -19928
  034d420  lfs 1, 24(31)
  034d424  ori 3, 31, 0
  034d428  stfs 2, 292(1)
  034d42c  ori 4, 26, 0
  034d430  lfs 2, 28(31)
  034d434  li 10, 0
  034d438  stfs 1, 296(1)
  034d43c  stfs 2, 300(1)
  034d440  lfs 1, 56(6)
  034d444  lfs 2, 108(6)
  034d448  lfs 3, 32(6)
  034d44c  lfs 4, 112(6)
  034d450  bl 0xffcd0
  034d454  nop
  034d458  lis 3, 53
  034d45c  lfs 1, 120(30)
  034d460  addi 5, 3, -19928
  034d464  lis 3, 114
  034d468  li 4, 0
  034d46c  lfs 2, 148(5)
  034d470  lfs 3, -3048(3)
  034d474  fmadds 1, 3, 2, 1
  034d478  ori 3, 26, 0
  034d47c  stfs 1, 120(30)
  034d480  lfs 31, 8(5)
  034d484  lfs 2, 24(31)
  034d488  fsubs 1, 1, 31
  034d48c  fsubs 1, 2, 1
  034d490  stfs 1, 24(31)
  034d494  lfs 30, 32(5)
  034d498  fmr 1, 30
  034d49c  bl 0xffb70
  034d4a0  nop
  034d4a4  lfs 2, 24(31)
  034d4a8  fsubs 2, 2, 31
  034d4ac  fcmpu 0, 2, 1
  034d4b0  stfs 2, 24(31)
  034d4b4  cror 6, 1, 2
  034d4b8  bt 6, 0x34d4c8
  034d4bc  stfs 1, 24(31)
  034d4c0  stw 24, 120(30)
  034d4c4  lfs 2, 24(31)
  034d4c8  lis 3, 53
  034d4cc  lfs 1, 296(30)
  034d4d0  addi 3, 3, -19928
  034d4d4  lfs 3, 152(3)
  034d4d8  fsubs 1, 1, 3
  034d4dc  fcmpu 0, 2, 1
  034d4e0  cror 6, 1, 2
  034d4e4  bt 6, 0x34d500
  034d4e8  ori 3, 31, 0
  034d4ec  bl 0x34a8d8
  034d4f0  ori 3, 31, 0
  034d4f4  bl 0xefb38
  034d4f8  nop
  034d4fc  b 0x34d6c4
  034d500  lis 4, 149
  034d504  ori 3, 26, 0
  034d508  addic 4, 4, 5376
  034d50c  bl 0x5e8588
  034d510  nop
  034d514  lis 3, 53
  034d518  addi 3, 3, -19928
  034d51c  lfs 2, 156(3)
  034d520  fcmpu 0, 1, 2
  034d524  cror 6, 1, 2
  034d528  bt 6, 0x34d6b4
  034d52c  lis 3, 53
  034d530  stw 24, 304(1)
  034d534  addi 29, 3, -19928
  034d538  stw 24, 308(1)
  034d53c  stw 24, 312(1)
  034d540  stw 24, 316(1)
  034d544  lfs 31, 64(29)
  034d548  lfs 29, 160(29)
  034d54c  fmr 1, 31
  034d550  fmr 2, 29
  034d554  bl 0xfcbe8
  034d558  nop
  034d55c  lis 28, 114
  034d560  lfs 28, 164(29)
  034d564  fmr 2, 29
  034d568  lfs 3, -3052(28)
  034d56c  fmuls 3, 3, 28
  034d570  fmuls 3, 3, 1
  034d574  fmr 1, 31
  034d578  stfs 3, 304(1)
  034d57c  bl 0xfcbe8
  034d580  nop
  034d584  lfs 2, -3052(28)
  034d588  fmuls 2, 2, 28
  034d58c  fmuls 1, 2, 1
  034d590  stfs 1, 308(1)
  034d594  lfs 1, 168(29)
  034d598  lfs 2, 172(29)
  034d59c  bl 0xfcbe8
  034d5a0  nop
  034d5a4  lfs 2, 176(29)
  034d5a8  lfs 3, -3052(28)
  034d5ac  li 3, 100
  034d5b0  fmuls 2, 3, 2
  034d5b4  fmuls 1, 2, 1
  034d5b8  stfs 1, 312(1)
  034d5bc  bl 0xfc620
  034d5c0  nop
  034d5c4  clrlwi 28, 3, 31
  034d5c8  ori 3, 31, 0
  034d5cc  addic 5, 1, 320
  034d5d0  li 4, 0
  034d5d4  bl 0xf1114
  034d5d8  nop
  034d5dc  addic 3, 1, 304
  034d5e0  addic 5, 31, 192
  034d5e4  ori 4, 3, 0
  034d5e8  bl 0x5e7d64
  034d5ec  nop
  034d5f0  li 3, 0
  034d5f4  lfs 1, 180(29)
  034d5f8  lis 4, 16511
  034d5fc  lfs 2, 184(29)
  034d600  subc 3, 3, 28
  034d604  lis 5, 16399
  034d608  cntlzw 3, 3
  034d60c  ori 4, 4, 32639
  034d610  ori 24, 5, 3967
  034d614  sldi 3, 3, 58
  034d618  subc 4, 4, 24
  034d61c  sradi 3, 3, 63
  034d620  and 3, 3, 4
  034d624  addc 24, 24, 3
  034d628  bl 0xfcbe8
  034d62c  nop
  034d630  cmpwi 28, 0
  034d634  fmr 31, 1
  034d638  bt 2, 0x34d650
  034d63c  li 3, 10
  034d640  li 4, 15
  034d644  bl 0xfe484
  034d648  nop
  034d64c  b 0x34d660
  034d650  li 3, 20
  034d654  li 4, 30
  034d658  bl 0xfe484
  034d65c  nop
  034d660  extsw 3, 3
  034d664  fmr 1, 31
  034d668  lis 6, 39
  034d66c  std 3, 504(1)
  034d670  lis 3, 114
  034d674  addic 4, 1, 304
  034d678  ori 5, 24, 0
  034d67c  ori 6, 6, 10023
  034d680  lfs 2, -3056(3)
  034d684  lfd 3, 504(1)
  034d688  fcfid 3, 3
  034d68c  addic 3, 1, 320
  034d690  frsp 3, 3
  034d694  fadds 3, 3, 30
  034d698  fmuls 2, 2, 3
  034d69c  fctiwz 2, 2
  034d6a0  stfd 2, 504(1)
  034d6a4  lwz 8, 508(1)
  034d6a8  extsw 8, 8
  034d6ac  bl 0x126dd8
  034d6b0  nop
  034d6b4  addic 4, 30, 176
  034d6b8  ori 3, 31, 0
  034d6bc  bl 0x10c9a0
  034d6c0  nop
  034d6c4  ld 0, 688(1)
  034d6c8  mtlr 0
  034d6cc  lfd 27, 632(1)
  034d6d0  lfd 28, 640(1)
  034d6d4  lfd 29, 648(1)
  034d6d8  lfd 30, 656(1)
  034d6dc  lfd 31, 664(1)
  034d6e0  ld 19, 528(1)
  034d6e4  ld 20, 536(1)
  034d6e8  ld 21, 544(1)
  034d6ec  ld 22, 552(1)
  034d6f0  ld 23, 560(1)
  034d6f4  ld 24, 568(1)
  034d6f8  ld 25, 576(1)
  034d6fc  ld 26, 584(1)
  034d700  ld 27, 592(1)
  034d704  ld 28, 600(1)
  034d708  ld 29, 608(1)
  034d70c  ld 30, 616(1)
  034d710  ld 31, 624(1)
  034d714  addi 1, 1, 672
  034d718  blr
