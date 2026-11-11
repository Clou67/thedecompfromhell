# game/update/camera14.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA14:   # 0x3a810, 0x14 bytes
  003a810  lis 3, 114
  003a814  lis 4, 1
  003a818  addic 3, 3, -10164
  003a81c  stw 4, 72(3)
  003a820  blr

Cam14_0003a838:   # 0x3a838, 0x4a4 bytes
  003a838  stdu 1, -128(1)
  003a83c  stfd 22, 48(1)
  003a840  stfd 23, 56(1)
  003a844  stfd 24, 64(1)
  003a848  stfd 25, 72(1)
  003a84c  stfd 26, 80(1)
  003a850  stfd 27, 88(1)
  003a854  stfd 28, 96(1)
  003a858  stfd 29, 104(1)
  003a85c  stfd 30, 112(1)
  003a860  stfd 31, 120(1)
  003a864  lis 4, 151
  003a868  lwz 6, 112(3)
  003a86c  addic 4, 4, -25376
  003a870  lfs 2, 660(4)
  003a874  lfs 3, 656(4)
  003a878  fmuls 1, 2, 2
  003a87c  lfs 4, 244(6)
  003a880  lfs 5, 664(4)
  003a884  fmuls 7, 4, 4
  003a888  lfs 6, 240(6)
  003a88c  lfs 8, 248(6)
  003a890  lis 5, 4
  003a894  fmadds 1, 3, 3, 1
  003a898  fmadds 7, 6, 6, 7
  003a89c  addi 5, 5, -22488
  003a8a0  fmadds 1, 5, 5, 1
  003a8a4  fmadds 7, 8, 8, 7
  003a8a8  fsqrts 9, 1
  003a8ac  lfs 1, 224(6)
  003a8b0  lfs 10, 208(6)
  003a8b4  lfs 11, 0(5)
  003a8b8  lfs 12, 128(4)
  003a8bc  lfs 13, 132(4)
  003a8c0  lfs 0, 136(4)
  003a8c4  lfs 31, 140(4)
  003a8c8  stfs 31, 60(3)
  003a8cc  fsqrts 7, 7
  003a8d0  fneg 1, 1
  003a8d4  fneg 10, 10
  003a8d8  fdivs 30, 1, 9
  003a8dc  fmr 1, 11
  003a8e0  fsub 29, 1, 9
  003a8e4  fsub 11, 1, 9
  003a8e8  fdivs 10, 10, 7
  003a8ec  fsub 31, 1, 9
  003a8f0  fsub 28, 9, 1
  003a8f4  fsub 27, 9, 1
  003a8f8  fsub 9, 9, 1
  003a8fc  fsub 26, 1, 7
  003a900  fsub 25, 1, 7
  003a904  fsub 24, 1, 7
  003a908  fsub 23, 7, 1
  003a90c  fsub 22, 7, 1
  003a910  fsub 7, 7, 1
  003a914  fmuls 3, 3, 30
  003a918  fmuls 5, 5, 30
  003a91c  fmuls 2, 2, 30
  003a920  fsel 30, 29, 1, 3
  003a924  fsel 11, 11, 1, 5
  003a928  fsel 31, 31, 1, 2
  003a92c  fsel 3, 9, 30, 3
  003a930  fsel 5, 28, 11, 5
  003a934  fsel 2, 27, 31, 2
  003a938  fadds 3, 12, 3
  003a93c  fmuls 8, 8, 10
  003a940  fmuls 4, 4, 10
  003a944  fmuls 6, 6, 10
  003a948  fadds 5, 0, 5
  003a94c  fadds 2, 13, 2
  003a950  fsel 9, 26, 1, 8
  003a954  fsel 10, 25, 1, 4
  003a958  fsel 11, 24, 1, 6
  003a95c  fsel 8, 23, 9, 8
  003a960  fsel 4, 22, 10, 4
  003a964  fsel 6, 7, 11, 6
  003a968  fadds 7, 8, 5
  003a96c  fadds 8, 4, 2
  003a970  fadds 9, 6, 3
  003a974  stfs 7, 56(3)
  003a978  stfs 8, 52(3)
  003a97c  stfs 9, 48(3)
  003a980  lfs 6, 660(4)
  003a984  lfs 10, 656(4)
  003a988  fmuls 2, 6, 6
  003a98c  lfs 11, 664(4)
  003a990  lfs 3, 196(6)
  003a994  fneg 3, 3
  003a998  fmadds 2, 10, 10, 2
  003a99c  lfs 12, 132(4)
  003a9a0  lfs 13, 128(4)
  003a9a4  lfs 0, 136(4)
  003a9a8  fmadds 2, 11, 11, 2
  003a9ac  fmr 4, 1
  003a9b0  fsqrts 2, 2
  003a9b4  lfs 5, 140(4)
  003a9b8  fdivs 31, 3, 2
  003a9bc  fsub 30, 1, 2
  003a9c0  fsub 29, 2, 1
  003a9c4  fsub 28, 1, 2
  003a9c8  fsub 27, 1, 2
  003a9cc  fsub 26, 2, 1
  003a9d0  fsub 25, 2, 1
  003a9d4  fmr 3, 4
  003a9d8  fmr 2, 3
  003a9dc  fmuls 6, 6, 31
  003a9e0  fmuls 10, 10, 31
  003a9e4  fmuls 11, 11, 31
  003a9e8  fsel 31, 30, 1, 6
  003a9ec  fsel 30, 28, 1, 10
  003a9f0  fsel 28, 27, 1, 11
  003a9f4  fsel 6, 29, 31, 6
  003a9f8  fsel 10, 26, 30, 10
  003a9fc  fsel 11, 25, 28, 11
  003aa00  fadds 6, 12, 6
  003aa04  fadds 10, 13, 10
  003aa08  fadds 11, 0, 11
  003aa0c  fsubs 8, 6, 8
  003aa10  fsubs 9, 10, 9
  003aa14  fsubs 7, 11, 7
  003aa18  fmuls 6, 8, 8
  003aa1c  fmadds 6, 9, 9, 6
  003aa20  fmadds 6, 7, 7, 6
  003aa24  fsqrts 10, 6
  003aa28  fcmpu 0, 10, 2
  003aa2c  bt 2, 0x3aa78
  003aa30  frsqrte 2, 6
  003aa34  lfs 3, 4(5)
  003aa38  lfs 4, 8(5)
  003aa3c  fmuls 10, 6, 2
  003aa40  fmuls 11, 3, 2
  003aa44  fnmsubs 10, 10, 2, 4
  003aa48  fmadds 2, 10, 11, 2
  003aa4c  fmuls 10, 6, 2
  003aa50  fmuls 11, 3, 2
  003aa54  fnmsubs 10, 10, 2, 4
  003aa58  fmadds 2, 10, 11, 2
  003aa5c  fmuls 6, 6, 2
  003aa60  fmuls 3, 3, 2
  003aa64  fnmsubs 4, 6, 2, 4
  003aa68  fmadds 4, 4, 3, 2
  003aa6c  fmuls 2, 9, 4
  003aa70  fmuls 3, 8, 4
  003aa74  fmuls 4, 7, 4
  003aa78  fmuls 6, 3, 3
  003aa7c  stfs 5, 268(6)
  003aa80  stfs 2, 256(6)
  003aa84  stfs 3, 260(6)
  003aa88  stfs 4, 264(6)
  003aa8c  fmadds 5, 2, 2, 6
  003aa90  fmadds 5, 4, 4, 5
  003aa94  fsqrts 6, 5
  003aa98  fcmpu 0, 6, 1
  003aa9c  bf 2, 0x3aae0
  003aaa0  stfs 2, 0(3)
  003aaa4  lfs 2, 260(6)
  003aaa8  li 7, 0
  003aaac  stfs 2, 4(3)
  003aab0  lfs 2, 264(6)
  003aab4  stfs 2, 8(3)
  003aab8  fmr 2, 1
  003aabc  lfs 3, 268(6)
  003aac0  stfs 3, 12(3)
  003aac4  stw 7, 8(3)
  003aac8  stw 7, 4(3)
  003aacc  stw 7, 0(3)
  003aad0  lfs 5, 12(3)
  003aad4  fmr 3, 2
  003aad8  fmr 4, 3
  003aadc  b 0x3ab44
  003aae0  frsqrte 3, 5
  003aae4  lfs 4, 4(5)
  003aae8  lfs 6, 8(5)
  003aaec  fmuls 7, 5, 3
  003aaf0  fmuls 8, 4, 3
  003aaf4  fnmsubs 7, 7, 3, 6
  003aaf8  fmadds 3, 7, 8, 3
  003aafc  fmuls 7, 5, 3
  003ab00  fmuls 8, 4, 3
  003ab04  fnmsubs 7, 7, 3, 6
  003ab08  fmadds 3, 7, 8, 3
  003ab0c  fmuls 5, 5, 3
  003ab10  fmuls 4, 4, 3
  003ab14  fnmsubs 5, 5, 3, 6
  003ab18  fmadds 5, 5, 4, 3
  003ab1c  fmuls 4, 2, 5
  003ab20  stfs 4, 0(3)
  003ab24  lfs 3, 260(6)
  003ab28  fmuls 3, 3, 5
  003ab2c  stfs 3, 4(3)
  003ab30  lfs 2, 264(6)
  003ab34  fmuls 2, 2, 5
  003ab38  stfs 2, 8(3)
  003ab3c  lfs 5, 268(6)
  003ab40  stfs 5, 12(3)
  003ab44  fmuls 6, 3, 3
  003ab48  fmadds 6, 4, 4, 6
  003ab4c  fmadds 6, 2, 2, 6
  003ab50  fsqrts 7, 6
  003ab54  fcmpu 0, 7, 1
  003ab58  bf 2, 0x3ab8c
  003ab5c  fmr 3, 1
  003ab60  lfs 2, 0(3)
  003ab64  lfs 4, 4(3)
  003ab68  stfs 2, 64(3)
  003ab6c  lfs 5, 8(3)
  003ab70  stfs 4, 68(3)
  003ab74  lfs 4, 12(3)
  003ab78  stfs 5, 72(3)
  003ab7c  fmr 5, 4
  003ab80  fmr 2, 3
  003ab84  fmr 4, 2
  003ab88  b 0x3abd8
  003ab8c  frsqrte 7, 6
  003ab90  fmr 12, 2
  003ab94  lfs 8, 4(5)
  003ab98  lfs 9, 8(5)
  003ab9c  fmuls 10, 6, 7
  003aba0  fmuls 11, 8, 7
  003aba4  fnmsubs 10, 10, 7, 9
  003aba8  fmadds 2, 10, 11, 7
  003abac  fmuls 7, 6, 2
  003abb0  fmuls 10, 8, 2
  003abb4  fnmsubs 7, 7, 2, 9
  003abb8  fmadds 2, 7, 10, 2
  003abbc  fmuls 6, 6, 2
  003abc0  fmuls 7, 8, 2
  003abc4  fnmsubs 6, 6, 2, 9
  003abc8  fmadds 6, 6, 7, 2
  003abcc  fmuls 2, 3, 6
  003abd0  fmuls 4, 4, 6
  003abd4  fmuls 3, 12, 6
  003abd8  stfs 4, 64(3)
  003abdc  stfs 2, 68(3)
  003abe0  stfs 3, 72(3)
  003abe4  stfs 5, 76(3)
  003abe8  stfs 4, 0(3)
  003abec  stfs 2, 4(3)
  003abf0  stfs 3, 8(3)
  003abf4  stfs 5, 12(3)
  003abf8  lfs 5, 656(4)
  003abfc  lfs 6, 664(4)
  003ac00  fmuls 7, 5, 3
  003ac04  fmuls 8, 6, 2
  003ac08  lfs 9, 660(4)
  003ac0c  fmuls 10, 9, 4
  003ac10  li 4, 0
  003ac14  fmsubs 6, 6, 4, 7
  003ac18  fmsubs 7, 9, 3, 8
  003ac1c  fmsubs 5, 5, 2, 10
  003ac20  stw 4, 28(3)
  003ac24  lfs 9, 12(5)
  003ac28  fmuls 8, 6, 6
  003ac2c  stw 4, 44(3)
  003ac30  fmadds 8, 7, 7, 8
  003ac34  fmadds 8, 5, 5, 8
  003ac38  fsqrts 8, 8
  003ac3c  fdivs 9, 9, 8
  003ac40  fsub 10, 1, 8
  003ac44  fsub 11, 1, 8
  003ac48  fsub 12, 1, 8
  003ac4c  fsub 13, 8, 1
  003ac50  fsub 0, 8, 1
  003ac54  fsub 8, 8, 1
  003ac58  fmuls 7, 7, 9
  003ac5c  fmuls 6, 6, 9
  003ac60  fmuls 5, 5, 9
  003ac64  fsel 9, 10, 1, 7
  003ac68  fsel 10, 11, 1, 6
  003ac6c  fsel 1, 12, 1, 5
  003ac70  fsel 7, 13, 9, 7
  003ac74  fsel 6, 0, 10, 6
  003ac78  fsel 1, 8, 1, 5
  003ac7c  fmuls 5, 2, 7
  003ac80  fmuls 8, 3, 6
  003ac84  fmuls 9, 4, 1
  003ac88  stfs 7, 16(3)
  003ac8c  stfs 6, 20(3)
  003ac90  stfs 1, 24(3)
  003ac94  fmsubs 4, 4, 6, 5
  003ac98  fmsubs 1, 2, 1, 8
  003ac9c  fmsubs 2, 3, 7, 9
  003aca0  stfs 4, 40(3)
  003aca4  stfs 1, 32(3)
  003aca8  stfs 2, 36(3)
  003acac  lfd 22, 48(1)
  003acb0  lfd 23, 56(1)
  003acb4  lfd 24, 64(1)
  003acb8  lfd 25, 72(1)
  003acbc  lfd 26, 80(1)
  003acc0  lfd 27, 88(1)
  003acc4  lfd 28, 96(1)
  003acc8  lfd 29, 104(1)
  003accc  lfd 30, 112(1)
  003acd0  lfd 31, 120(1)
  003acd4  addi 1, 1, 128
  003acd8  blr

InitCamera_14:   # 0x3ace0, 0x1b8 bytes
  003ace0  stdu 1, -208(1)
  003ace4  mflr 0
  003ace8  std 0, 224(1)
  003acec  std 31, 200(1)
  003acf0  ori 31, 3, 0
  003acf4  lis 3, 149
  003acf8  lis 4, 151
  003acfc  lis 8, 16320
  003ad00  addic 4, 4, -25376
  003ad04  std 30, 192(1)
  003ad08  lhz 5, 132(31)
  003ad0c  li 30, 0
  003ad10  lwz 6, 16468(3)
  003ad14  extsh 7, 5
  003ad18  lwz 9, 112(31)
  003ad1c  sldi 7, 7, 5
  003ad20  addc 6, 6, 7
  003ad24  vspltisw 3, -1
  003ad28  lis 7, 4
  003ad2c  clrldi 6, 6, 32
  003ad30  addi 7, 7, -21284
  003ad34  vslw 3, 3, 3
  003ad38  lwz 6, 28(6)
  003ad3c  stw 8, 196(9)
  003ad40  lfs 1, 128(4)
  003ad44  lwz 8, 8320(4)
  003ad48  stfs 1, 176(9)
  003ad4c  lfs 2, 132(4)
  003ad50  stw 8, 192(9)
  003ad54  stfs 2, 180(9)
  003ad58  lfs 3, 136(4)
  003ad5c  std 29, 184(1)
  003ad60  lis 8, 15395
  003ad64  lwz 29, 112(31)
  003ad68  stfs 3, 184(9)
  003ad6c  lfs 4, 140(4)
  003ad70  ori 8, 8, 55050
  003ad74  stw 30, 188(9)
  003ad78  lis 4, 15948
  003ad7c  lfs 5, 32(6)
  003ad80  ori 4, 4, 52429
  003ad84  stfs 5, 216(29)
  003ad88  stfs 5, 208(29)
  003ad8c  lfs 5, 36(6)
  003ad90  stw 8, 32(29)
  003ad94  stfs 5, 224(29)
  003ad98  lis 6, 114
  003ad9c  stw 4, 36(29)
  003ada0  stw 30, 40(29)
  003ada4  stw 30, 28(29)
  003ada8  li 4, -3056
  003adac  stw 30, 24(29)
  003adb0  stw 30, 20(29)
  003adb4  stw 30, 16(29)
  003adb8  stfs 1, 0(29)
  003adbc  stfs 2, 4(29)
  003adc0  stfs 3, 8(29)
  003adc4  stfs 4, 12(29)
  003adc8  <unknown>
  003adcc  <unknown>
  003add0  vspltw 2, 2, 0
  003add4  li 6, 48
  003add8  lwz 3, 16468(3)
  003addc  extsh 4, 5
  003ade0  vmaddfp 2, 4, 2, 3
  003ade4  sldi 4, 4, 5
  003ade8  addc 3, 3, 4
  003adec  addic 4, 1, 112
  003adf0  clrldi 5, 3, 32
  003adf4  addic 3, 1, 128
  003adf8  vctsxs 2, 2, 0
  003adfc  vspltw 2, 2, 0
  003ae00  stvewx 2, 6, 29
  003ae04  stw 30, 288(29)
  003ae08  stw 30, 280(29)
  003ae0c  stw 30, 284(29)
  003ae10  stfs 3, 292(29)
  003ae14  stw 30, 272(29)
  003ae18  stw 30, 276(29)
  003ae1c  lfs 1, 16(5)
  003ae20  stfs 1, 112(1)
  003ae24  lfs 1, 20(5)
  003ae28  stfs 1, 116(1)
  003ae2c  lfs 1, 24(5)
  003ae30  stw 30, 124(1)
  003ae34  stfs 1, 120(1)
  003ae38  bl 0x500b64
  003ae3c  nop
  003ae40  lfs 1, 128(1)
  003ae44  ori 3, 31, 0
  003ae48  stfs 1, 240(29)
  003ae4c  lfs 1, 132(1)
  003ae50  stfs 1, 244(29)
  003ae54  lfs 1, 136(1)
  003ae58  stfs 1, 248(29)
  003ae5c  lfs 1, 140(1)
  003ae60  stfs 1, 252(29)
  003ae64  bl 0x3a838
  003ae68  lis 3, 149
  003ae6c  sth 30, 126(31)
  003ae70  li 4, 120
  003ae74  addic 3, 3, 5056
  003ae78  stw 4, 756(3)
  003ae7c  ld 0, 224(1)
  003ae80  mtlr 0
  003ae84  ld 29, 184(1)
  003ae88  ld 30, 192(1)
  003ae8c  ld 31, 200(1)
  003ae90  addi 1, 1, 208
  003ae94  blr

STUB_0003ae98:   # 0x3ae98, 0x4 bytes
  003ae98  blr

???_Cam14_RotateByStick:   # 0x3aeb8, 0x450 bytes
  003aeb8  stdu 1, -224(1)
  003aebc  mflr 0
  003aec0  std 0, 240(1)
  003aec4  stfd 26, 176(1)
  003aec8  stfd 27, 184(1)
  003aecc  stfd 28, 192(1)
  003aed0  stfd 29, 200(1)
  003aed4  stfd 30, 208(1)
  003aed8  stfd 31, 216(1)
  003aedc  std 31, 168(1)
  003aee0  lis 4, 4
  003aee4  std 27, 136(1)
  003aee8  ori 31, 3, 0
  003aeec  addi 27, 4, -20836
  003aef0  std 30, 160(1)
  003aef4  lis 3, 150
  003aef8  std 28, 144(1)
  003aefc  lis 30, 149
  003af00  lwz 28, 112(31)
  003af04  addic 30, 30, 5056
  003af08  lfs 31, 0(27)
  003af0c  lfs 30, 4(27)
  003af10  std 29, 152(1)
  003af14  lfs 29, 8(27)
  003af18  addic 29, 28, 240
  003af1c  lfs 2, 19008(3)
  003af20  addic 5, 28, 284
  003af24  lfs 1, 288(28)
  003af28  fmr 3, 31
  003af2c  fmr 4, 30
  003af30  fmr 5, 29
  003af34  bl 0x501e8
  003af38  nop
  003af3c  stfs 1, 288(28)
  003af40  addic 5, 30, 448
  003af44  lfs 2, 12(27)
  003af48  ori 3, 29, 0
  003af4c  ori 4, 29, 0
  003af50  fmuls 1, 1, 2
  003af54  bl 0x1113e0
  003af58  nop
  003af5c  lfs 7, 244(28)
  003af60  lfs 6, 240(28)
  003af64  fmuls 1, 7, 7
  003af68  lfs 8, 248(28)
  003af6c  fmr 2, 29
  003af70  fmadds 5, 6, 6, 1
  003af74  fmr 3, 2
  003af78  lfs 1, 296(28)
  003af7c  fmadds 5, 8, 8, 5
  003af80  fmr 4, 3
  003af84  fsqrts 9, 5
  003af88  fcmpu 0, 9, 4
  003af8c  bt 2, 0x3afe0
  003af90  frsqrte 2, 5
  003af94  lis 3, 4
  003af98  addi 3, 3, -20836
  003af9c  lfs 3, 16(3)
  003afa0  lfs 4, 20(3)
  003afa4  fmuls 9, 5, 2
  003afa8  fmuls 10, 3, 2
  003afac  fnmsubs 9, 9, 2, 4
  003afb0  fmadds 2, 9, 10, 2
  003afb4  fmuls 9, 5, 2
  003afb8  fmuls 10, 3, 2
  003afbc  fnmsubs 9, 9, 2, 4
  003afc0  fmadds 2, 9, 10, 2
  003afc4  fmuls 5, 5, 2
  003afc8  fmuls 3, 3, 2
  003afcc  fnmsubs 4, 5, 2, 4
  003afd0  fmadds 2, 4, 3, 2
  003afd4  fmuls 4, 6, 2
  003afd8  fmuls 3, 7, 2
  003afdc  fmuls 2, 8, 2
  003afe0  fmr 5, 3
  003afe4  lis 3, 150
  003afe8  stfs 4, 240(28)
  003afec  fmr 3, 31
  003aff0  addic 5, 28, 300
  003aff4  addic 3, 3, 19008
  003aff8  fmr 4, 30
  003affc  stfs 5, 244(28)
  003b000  stfs 2, 248(28)
  003b004  lfs 2, 4(3)
  003b008  fmr 5, 29
  003b00c  bl 0x501e8
  003b010  nop
  003b014  stfs 1, 296(28)
  003b018  lfs 2, 452(30)
  003b01c  lfs 4, 448(30)
  003b020  fmuls 3, 2, 2
  003b024  lfs 8, 456(30)
  003b028  lfs 9, 244(28)
  003b02c  lfs 10, 240(28)
  003b030  fmuls 5, 2, 9
  003b034  lfs 11, 248(28)
  003b038  fmadds 3, 4, 4, 3
  003b03c  fmadds 5, 4, 10, 5
  003b040  fmadds 3, 8, 8, 3
  003b044  fmadds 6, 8, 11, 5
  003b048  fsqrts 3, 3
  003b04c  lis 3, 114
  003b050  li 4, 0
  003b054  fmr 5, 29
  003b058  fdivs 12, 6, 3
  003b05c  fsub 13, 29, 3
  003b060  fsub 30, 29, 3
  003b064  fsub 0, 3, 29
  003b068  fsub 31, 29, 3
  003b06c  fsub 28, 3, 29
  003b070  fsub 3, 3, 29
  003b074  fmr 6, 5
  003b078  fmr 7, 6
  003b07c  fmuls 27, 8, 12
  003b080  fmuls 26, 2, 12
  003b084  fmuls 12, 4, 12
  003b088  fsel 13, 13, 29, 27
  003b08c  fsel 31, 31, 29, 26
  003b090  fsel 30, 30, 29, 12
  003b094  fsel 13, 0, 13, 27
  003b098  fsel 0, 28, 31, 26
  003b09c  fsel 3, 3, 30, 12
  003b0a0  fsubs 11, 11, 13
  003b0a4  fsubs 9, 9, 0
  003b0a8  fsubs 10, 10, 3
  003b0ac  fmuls 3, 4, 11
  003b0b0  fmuls 12, 8, 9
  003b0b4  fmuls 13, 2, 10
  003b0b8  stfs 10, 240(28)
  003b0bc  stfs 9, 244(28)
  003b0c0  stfs 11, 248(28)
  003b0c4  fmsubs 3, 8, 10, 3
  003b0c8  fmsubs 2, 2, 11, 12
  003b0cc  fmsubs 4, 4, 9, 13
  003b0d0  lfs 9, -10036(3)
  003b0d4  stw 4, 124(1)
  003b0d8  fmuls 31, 1, 9
  003b0dc  fmuls 8, 3, 3
  003b0e0  fneg 31, 31
  003b0e4  fmadds 8, 2, 2, 8
  003b0e8  fmadds 10, 4, 4, 8
  003b0ec  fsqrts 8, 10
  003b0f0  fmr 1, 10
  003b0f4  fcmpu 0, 8, 7
  003b0f8  bt 2, 0x3b14c
  003b0fc  frsqrte 5, 1
  003b100  lis 3, 4
  003b104  addi 3, 3, -20836
  003b108  lfs 6, 16(3)
  003b10c  lfs 7, 20(3)
  003b110  fmuls 8, 1, 5
  003b114  fmuls 9, 6, 5
  003b118  fnmsubs 8, 8, 5, 7
  003b11c  fmadds 5, 8, 9, 5
  003b120  fmuls 8, 1, 5
  003b124  fmuls 9, 6, 5
  003b128  fnmsubs 8, 8, 5, 7
  003b12c  fmadds 5, 8, 9, 5
  003b130  fmuls 1, 1, 5
  003b134  fmuls 6, 6, 5
  003b138  fnmsubs 1, 1, 5, 7
  003b13c  fmadds 5, 1, 6, 5
  003b140  fmuls 7, 2, 5
  003b144  fmuls 6, 3, 5
  003b148  fmuls 5, 4, 5
  003b14c  stfs 7, 112(1)
  003b150  fmr 1, 31
  003b154  stfs 6, 116(1)
  003b158  addic 5, 1, 112
  003b15c  stfs 5, 120(1)
  003b160  ori 3, 29, 0
  003b164  ori 4, 29, 0
  003b168  bl 0x1113e0
  003b16c  nop
  003b170  lfs 2, 244(28)
  003b174  lfs 1, 240(28)
  003b178  fmuls 4, 2, 2
  003b17c  lfs 3, 248(28)
  003b180  lfs 7, 196(28)
  003b184  fmadds 31, 1, 1, 4
  003b188  fmr 4, 29
  003b18c  fmadds 31, 3, 3, 31
  003b190  fmr 5, 4
  003b194  fsqrts 8, 31
  003b198  fmr 6, 5
  003b19c  fcmpu 0, 8, 6
  003b1a0  bt 2, 0x3b1f4
  003b1a4  frsqrte 4, 31
  003b1a8  lis 3, 4
  003b1ac  addi 3, 3, -20836
  003b1b0  lfs 5, 16(3)
  003b1b4  lfs 6, 20(3)
  003b1b8  fmuls 8, 31, 4
  003b1bc  fmuls 9, 5, 4
  003b1c0  fnmsubs 8, 8, 4, 6
  003b1c4  fmadds 4, 8, 9, 4
  003b1c8  fmuls 8, 31, 4
  003b1cc  fmuls 9, 5, 4
  003b1d0  fnmsubs 8, 8, 4, 6
  003b1d4  fmadds 4, 8, 9, 4
  003b1d8  fmuls 8, 31, 4
  003b1dc  fmuls 5, 5, 4
  003b1e0  fnmsubs 6, 8, 4, 6
  003b1e4  fmadds 4, 6, 5, 4
  003b1e8  fmuls 6, 1, 4
  003b1ec  fmuls 5, 2, 4
  003b1f0  fmuls 4, 3, 4
  003b1f4  lis 3, 151
  003b1f8  stfs 6, 240(28)
  003b1fc  stfs 5, 244(28)
  003b200  addic 3, 3, -25376
  003b204  stfs 4, 248(28)
  003b208  lfs 2, 136(3)
  003b20c  lfs 4, 128(3)
  003b210  lhz 4, 780(3)
  003b214  lfs 1, 132(3)
  003b218  cmpwi 4, 0
  003b21c  lfs 3, 140(3)
  003b220  bt 2, 0x3b22c
  003b224  lfs 2, 292(28)
  003b228  b 0x3b230
  003b22c  stfs 2, 292(28)
  003b230  lfs 5, 52(31)
  003b234  fadds 2, 2, 7
  003b238  lfs 6, 48(31)
  003b23c  fsubs 1, 1, 5
  003b240  lfs 5, 56(31)
  003b244  fsubs 4, 4, 6
  003b248  fmr 6, 29
  003b24c  fsubs 2, 2, 5
  003b250  fmuls 5, 1, 1
  003b254  fmr 7, 6
  003b258  fmadds 5, 4, 4, 5
  003b25c  fmadds 5, 2, 2, 5
  003b260  fsqrts 8, 5
  003b264  fcmpu 0, 8, 7
  003b268  bt 2, 0x3b2bc
  003b26c  frsqrte 6, 5
  003b270  lis 3, 4
  003b274  addi 3, 3, -20836
  003b278  lfs 7, 16(3)
  003b27c  lfs 8, 20(3)
  003b280  fmuls 9, 5, 6
  003b284  fmuls 10, 7, 6
  003b288  fnmsubs 9, 9, 6, 8
  003b28c  fmadds 6, 9, 10, 6
  003b290  fmuls 9, 5, 6
  003b294  fmuls 10, 7, 6
  003b298  fnmsubs 9, 9, 6, 8
  003b29c  fmadds 6, 9, 10, 6
  003b2a0  fmuls 5, 5, 6
  003b2a4  fmuls 7, 7, 6
  003b2a8  fnmsubs 5, 5, 6, 8
  003b2ac  fmadds 29, 5, 7, 6
  003b2b0  fmuls 7, 29, 4
  003b2b4  fmuls 6, 29, 1
  003b2b8  fmuls 29, 29, 2
  003b2bc  stfs 7, 256(28)
  003b2c0  stfs 6, 260(28)
  003b2c4  stfs 29, 264(28)
  003b2c8  stfs 3, 268(28)
  003b2cc  ld 0, 240(1)
  003b2d0  mtlr 0
  003b2d4  lfd 26, 176(1)
  003b2d8  lfd 27, 184(1)
  003b2dc  lfd 28, 192(1)
  003b2e0  lfd 29, 200(1)
  003b2e4  lfd 30, 208(1)
  003b2e8  lfd 31, 216(1)
  003b2ec  ld 27, 136(1)
  003b2f0  ld 28, 144(1)
  003b2f4  ld 29, 152(1)
  003b2f8  ld 30, 160(1)
  003b2fc  ld 31, 168(1)
  003b300  addi 1, 1, 224
  003b304  blr

Cam14_0003b310:   # 0x3b310, 0x26c bytes
  003b310  stdu 1, -272(1)
  003b314  mflr 0
  003b318  std 0, 288(1)
  003b31c  stfd 16, 144(1)
  003b320  stfd 17, 152(1)
  003b324  stfd 18, 160(1)
  003b328  stfd 19, 168(1)
  003b32c  stfd 20, 176(1)
  003b330  stfd 21, 184(1)
  003b334  stfd 22, 192(1)
  003b338  stfd 23, 200(1)
  003b33c  stfd 24, 208(1)
  003b340  stfd 25, 216(1)
  003b344  stfd 26, 224(1)
  003b348  stfd 27, 232(1)
  003b34c  stfd 28, 240(1)
  003b350  stfd 29, 248(1)
  003b354  stfd 30, 256(1)
  003b358  stfd 31, 264(1)
  003b35c  std 30, 128(1)
  003b360  std 31, 136(1)
  003b364  lis 30, 151
  003b368  std 29, 120(1)
  003b36c  ori 31, 3, 0
  003b370  lwz 29, 112(3)
  003b374  addic 30, 30, -25376
  003b378  lwz 3, 8836(30)
  003b37c  lfs 1, 136(30)
  003b380  cmpwi 3, 80
  003b384  bf 2, 0x3b394
  003b388  lwz 3, 8324(30)
  003b38c  cmpwi 3, 17
  003b390  bf 2, 0x3b398
  003b394  stfs 1, 292(29)
  003b398  lfs 5, 660(30)
  003b39c  lfs 6, 656(30)
  003b3a0  fmuls 1, 5, 5
  003b3a4  lfs 7, 664(30)
  003b3a8  lfs 8, 244(29)
  003b3ac  lfs 9, 240(29)
  003b3b0  fmuls 2, 8, 8
  003b3b4  lfs 10, 248(29)
  003b3b8  lfs 3, 224(29)
  003b3bc  fmadds 1, 6, 6, 1
  003b3c0  lfs 4, 208(29)
  003b3c4  fneg 3, 3
  003b3c8  fmadds 2, 9, 9, 2
  003b3cc  fneg 4, 4
  003b3d0  lis 3, 4
  003b3d4  fmadds 1, 7, 7, 1
  003b3d8  fmadds 2, 10, 10, 2
  003b3dc  addi 3, 3, -19704
  003b3e0  fsqrts 1, 1
  003b3e4  lfs 11, 0(3)
  003b3e8  lfs 12, 0(29)
  003b3ec  lfs 13, 128(30)
  003b3f0  lfs 0, 32(29)
  003b3f4  lfs 31, 36(29)
  003b3f8  addic 5, 29, 16
  003b3fc  lfs 30, 40(29)
  003b400  fsqrts 2, 2
  003b404  fdivs 29, 3, 1
  003b408  fsub 27, 11, 1
  003b40c  fsub 25, 11, 1
  003b410  fsub 24, 1, 11
  003b414  fsub 22, 1, 11
  003b418  fsub 26, 11, 1
  003b41c  fsub 23, 1, 11
  003b420  fmr 1, 12
  003b424  fmr 3, 0
  003b428  fdivs 28, 4, 2
  003b42c  fsub 21, 11, 2
  003b430  fsub 20, 11, 2
  003b434  fsub 19, 11, 2
  003b438  fsub 18, 2, 11
  003b43c  fsub 17, 2, 11
  003b440  fsub 16, 2, 11
  003b444  fmr 2, 13
  003b448  fmr 4, 31
  003b44c  fmuls 7, 7, 29
  003b450  fmuls 6, 6, 29
  003b454  fmuls 12, 5, 29
  003b458  fmr 5, 30
  003b45c  fsel 13, 27, 11, 7
  003b460  fsel 31, 25, 11, 6
  003b464  fsel 0, 26, 11, 12
  003b468  fsel 30, 24, 13, 7
  003b46c  fsel 31, 22, 31, 6
  003b470  fsel 29, 23, 0, 12
  003b474  fmuls 6, 10, 28
  003b478  fmuls 7, 8, 28
  003b47c  fmuls 8, 9, 28
  003b480  fsel 9, 21, 11, 6
  003b484  fsel 10, 20, 11, 7
  003b488  fsel 11, 19, 11, 8
  003b48c  fsel 28, 18, 9, 6
  003b490  fsel 27, 17, 10, 7
  003b494  fsel 26, 16, 11, 8
  003b498  bl 0x501e8
  003b49c  nop
  003b4a0  stfs 1, 0(29)
  003b4a4  lfs 1, 4(29)
  003b4a8  addic 5, 29, 20
  003b4ac  lfs 2, 132(30)
  003b4b0  lfs 3, 32(29)
  003b4b4  lfs 4, 36(29)
  003b4b8  lfs 5, 40(29)
  003b4bc  bl 0x501e8
  003b4c0  nop
  003b4c4  lfs 2, 8(29)
  003b4c8  addic 5, 29, 24
  003b4cc  stfs 1, 4(29)
  003b4d0  fmr 1, 2
  003b4d4  lfs 2, 292(29)
  003b4d8  lfs 3, 32(29)
  003b4dc  lfs 4, 36(29)
  003b4e0  lfs 6, 40(29)
  003b4e4  fmr 5, 6
  003b4e8  bl 0x501e8
  003b4ec  nop
  003b4f0  lfs 2, 0(29)
  003b4f4  fadds 3, 1, 30
  003b4f8  lfs 4, 4(29)
  003b4fc  fadds 2, 2, 31
  003b500  stfs 1, 8(29)
  003b504  fadds 4, 4, 29
  003b508  fadds 1, 28, 3
  003b50c  fadds 2, 26, 2
  003b510  fadds 3, 27, 4
  003b514  stfs 1, 56(31)
  003b518  stfs 2, 48(31)
  003b51c  stfs 3, 52(31)
  003b520  ld 0, 288(1)
  003b524  mtlr 0
  003b528  lfd 16, 144(1)
  003b52c  lfd 17, 152(1)
  003b530  lfd 18, 160(1)
  003b534  lfd 19, 168(1)
  003b538  lfd 20, 176(1)
  003b53c  lfd 21, 184(1)
  003b540  lfd 22, 192(1)
  003b544  lfd 23, 200(1)
  003b548  lfd 24, 208(1)
  003b54c  lfd 25, 216(1)
  003b550  lfd 26, 224(1)
  003b554  lfd 27, 232(1)
  003b558  lfd 28, 240(1)
  003b55c  lfd 29, 248(1)
  003b560  lfd 30, 256(1)
  003b564  lfd 31, 264(1)
  003b568  ld 29, 120(1)
  003b56c  ld 30, 128(1)
  003b570  ld 31, 136(1)
  003b574  addi 1, 1, 272
  003b578  blr

Cam14_0003b588:   # 0x3b588, 0x2d0 bytes
  003b588  stdu 1, -192(1)
  003b58c  mflr 0
  003b590  std 0, 208(1)
  003b594  stfd 25, 136(1)
  003b598  stfd 26, 144(1)
  003b59c  stfd 27, 152(1)
  003b5a0  stfd 28, 160(1)
  003b5a4  stfd 29, 168(1)
  003b5a8  stfd 30, 176(1)
  003b5ac  stfd 31, 184(1)
  003b5b0  std 31, 128(1)
  003b5b4  ori 31, 3, 0
  003b5b8  lis 4, 4
  003b5bc  lis 6, 114
  003b5c0  addi 3, 4, -19076
  003b5c4  std 30, 120(1)
  003b5c8  lis 4, 151
  003b5cc  lwz 30, 112(31)
  003b5d0  addic 4, 4, -25376
  003b5d4  addic 5, 30, 188
  003b5d8  lfs 31, 0(3)
  003b5dc  lfs 3, -10032(6)
  003b5e0  lis 3, 114
  003b5e4  lfs 30, 0(30)
  003b5e8  fmr 5, 31
  003b5ec  lfs 1, 184(30)
  003b5f0  lfs 29, 4(30)
  003b5f4  lfs 28, 8(30)
  003b5f8  lfs 2, 136(4)
  003b5fc  lfs 4, -10028(3)
  003b600  bl 0x501e8
  003b604  nop
  003b608  lis 3, 149
  003b60c  stfs 1, 184(30)
  003b610  addic 3, 3, 5056
  003b614  lfs 1, 452(3)
  003b618  lfs 5, 448(3)
  003b61c  fmuls 2, 1, 1
  003b620  lfs 6, 456(3)
  003b624  lfs 7, 196(30)
  003b628  lfs 10, 52(31)
  003b62c  fmadds 2, 5, 5, 2
  003b630  lfs 11, 48(31)
  003b634  lfs 12, 56(31)
  003b638  fmadds 2, 6, 6, 2
  003b63c  fsqrts 9, 2
  003b640  lfs 2, 436(3)
  003b644  lfs 3, 440(3)
  003b648  lfs 4, 432(3)
  003b64c  lfs 8, 460(3)
  003b650  fdivs 7, 7, 9
  003b654  fsub 13, 31, 9
  003b658  fsub 27, 31, 9
  003b65c  fsub 0, 9, 31
  003b660  fsub 25, 9, 31
  003b664  fsub 26, 31, 9
  003b668  fsub 9, 9, 31
  003b66c  fmuls 1, 1, 7
  003b670  fmuls 5, 5, 7
  003b674  fmuls 6, 6, 7
  003b678  fsel 7, 13, 31, 1
  003b67c  fsel 13, 27, 31, 5
  003b680  fsel 27, 26, 31, 6
  003b684  fsel 1, 0, 7, 1
  003b688  fsel 5, 25, 13, 5
  003b68c  fsel 6, 9, 27, 6
  003b690  fadds 1, 29, 1
  003b694  fadds 7, 30, 5
  003b698  fadds 6, 28, 6
  003b69c  fsubs 5, 1, 10
  003b6a0  fsubs 1, 7, 11
  003b6a4  fsubs 6, 6, 12
  003b6a8  fmuls 7, 5, 5
  003b6ac  fmadds 7, 1, 1, 7
  003b6b0  fmadds 7, 6, 6, 7
  003b6b4  fsqrts 9, 7
  003b6b8  fcmpu 0, 9, 31
  003b6bc  bf 2, 0x3b6e4
  003b6c0  fmr 7, 31
  003b6c4  stfs 8, 12(31)
  003b6c8  stfs 1, 0(31)
  003b6cc  stfs 5, 4(31)
  003b6d0  stfs 6, 8(31)
  003b6d4  lfs 1, 12(31)
  003b6d8  fmr 8, 7
  003b6dc  fmr 9, 8
  003b6e0  b 0x3b740
  003b6e4  frsqrte 9, 7
  003b6e8  lis 3, 4
  003b6ec  fmr 0, 8
  003b6f0  addi 3, 3, -19076
  003b6f4  lfs 10, 4(3)
  003b6f8  lfs 11, 8(3)
  003b6fc  fmuls 12, 7, 9
  003b700  fmuls 13, 10, 9
  003b704  stfs 0, 12(31)
  003b708  fnmsubs 12, 12, 9, 11
  003b70c  fmadds 8, 12, 13, 9
  003b710  fmuls 9, 7, 8
  003b714  fmuls 12, 10, 8
  003b718  fnmsubs 9, 9, 8, 11
  003b71c  fmadds 8, 9, 12, 8
  003b720  fmuls 7, 7, 8
  003b724  fmuls 9, 10, 8
  003b728  fnmsubs 7, 7, 8, 11
  003b72c  fmadds 7, 7, 9, 8
  003b730  fmuls 9, 1, 7
  003b734  fmuls 8, 5, 7
  003b738  fmuls 7, 6, 7
  003b73c  fmr 1, 0
  003b740  fmuls 5, 4, 7
  003b744  fmuls 6, 3, 8
  003b748  stfs 1, 76(31)
  003b74c  fmuls 10, 2, 9
  003b750  stfs 9, 0(31)
  003b754  stfs 8, 4(31)
  003b758  li 3, 0
  003b75c  stfs 7, 8(31)
  003b760  stfs 9, 64(31)
  003b764  fmsubs 3, 3, 9, 5
  003b768  fmsubs 2, 2, 7, 6
  003b76c  fmsubs 4, 4, 8, 10
  003b770  fmr 5, 31
  003b774  stfs 8, 68(31)
  003b778  stfs 7, 72(31)
  003b77c  fmuls 1, 3, 3
  003b780  stw 3, 28(31)
  003b784  fmr 6, 5
  003b788  fmadds 1, 2, 2, 1
  003b78c  fmadds 1, 4, 4, 1
  003b790  fsqrts 10, 1
  003b794  fcmpu 0, 10, 6
  003b798  bt 2, 0x3b7ec
  003b79c  frsqrte 5, 1
  003b7a0  lis 3, 4
  003b7a4  addi 3, 3, -19076
  003b7a8  lfs 6, 4(3)
  003b7ac  lfs 10, 8(3)
  003b7b0  fmuls 11, 1, 5
  003b7b4  fmuls 12, 6, 5
  003b7b8  fnmsubs 11, 11, 5, 10
  003b7bc  fmadds 5, 11, 12, 5
  003b7c0  fmuls 11, 1, 5
  003b7c4  fmuls 12, 6, 5
  003b7c8  fnmsubs 11, 11, 5, 10
  003b7cc  fmadds 5, 11, 12, 5
  003b7d0  fmuls 1, 1, 5
  003b7d4  fmuls 6, 6, 5
  003b7d8  fnmsubs 1, 1, 5, 10
  003b7dc  fmadds 31, 1, 6, 5
  003b7e0  fmuls 6, 2, 31
  003b7e4  fmuls 5, 3, 31
  003b7e8  fmuls 31, 4, 31
  003b7ec  fmuls 1, 7, 5
  003b7f0  li 3, 0
  003b7f4  fmuls 2, 9, 31
  003b7f8  stfs 6, 16(31)
  003b7fc  fmuls 3, 8, 6
  003b800  stfs 5, 20(31)
  003b804  stfs 31, 24(31)
  003b808  stw 3, 44(31)
  003b80c  fmsubs 1, 8, 31, 1
  003b810  fmsubs 2, 7, 6, 2
  003b814  fmsubs 3, 9, 5, 3
  003b818  stfs 1, 32(31)
  003b81c  stfs 2, 36(31)
  003b820  stfs 3, 40(31)
  003b824  ld 0, 208(1)
  003b828  mtlr 0
  003b82c  lfd 25, 136(1)
  003b830  lfd 26, 144(1)
  003b834  lfd 27, 152(1)
  003b838  lfd 28, 160(1)
  003b83c  lfd 29, 168(1)
  003b840  lfd 30, 176(1)
  003b844  lfd 31, 184(1)
  003b848  ld 30, 120(1)
  003b84c  ld 31, 128(1)
  003b850  addi 1, 1, 192
  003b854  blr

ActivateCamera_14:   # 0x3b858, 0x38 bytes
  003b858  lis 3, 151
  003b85c  addic 3, 3, -25376
  003b860  lwz 4, 8836(3)
  003b864  lwz 3, 8324(3)
  003b868  cmpwi 4, 80
  003b86c  cmpwi 1, 3, 6
  003b870  cmpwi 6, 3, 17
  003b874  bf 2, 0x3b87c
  003b878  bf 26, 0x3b880
  003b87c  bf 6, 0x3b888
  003b880  li 3, -1
  003b884  b 0x3b88c
  003b888  li 3, 0
  003b88c  blr

UpdateCamera_14:   # 0x3b890, 0x34 bytes
  003b890  stdu 1, -128(1)
  003b894  mflr 0
  003b898  std 0, 144(1)
  003b89c  std 31, 120(1)
  003b8a0  ori 31, 3, 0
  003b8a4  bl 0x3b310
  003b8a8  ori 3, 31, 0
  003b8ac  bl 0x3b588
  003b8b0  ld 0, 144(1)
  003b8b4  mtlr 0
  003b8b8  ld 31, 120(1)
  003b8bc  addi 1, 1, 128
  003b8c0  blr

ExitCamera_14:   # 0x3b8c4, 0x78 bytes
  003b8c4  stdu 1, -128(1)
  003b8c8  mflr 0
  003b8cc  std 0, 144(1)
  003b8d0  std 31, 120(1)
  003b8d4  ori 31, 3, 0
  003b8d8  lis 3, 149
  003b8dc  lhz 4, 132(31)
  003b8e0  lwz 3, 16468(3)
  003b8e4  extsh 4, 4
  003b8e8  sldi 4, 4, 5
  003b8ec  addc 3, 3, 4
  003b8f0  clrldi 3, 3, 32
  003b8f4  lwz 3, 28(3)
  003b8f8  lwz 3, 12(3)
  003b8fc  cmpwi 3, 0
  003b900  bt 0, 0x3b928
  003b904  lis 5, 151
  003b908  extsw 4, 3
  003b90c  addic 3, 5, -25248
  003b910  bl 0x110b70
  003b914  nop
  003b918  cmpwi 3, 0
  003b91c  bf 2, 0x3b928
  003b920  li 3, 3
  003b924  sth 3, 126(31)
  003b928  ld 0, 144(1)
  003b92c  mtlr 0
  003b930  ld 31, 120(1)
  003b934  addi 1, 1, 128
  003b938  blr
