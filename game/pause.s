# game/pause.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_PAUSE:   # 0x13a9c4, 0x14 bytes
  013a9c4  lis 3, 115
  013a9c8  lis 4, 1
  013a9cc  addic 3, 3, -26672
  013a9d0  stw 4, 72(3)
  013a9d4  blr

GetMenuScreen:   # 0x13a9d8, 0x10 bytes
  013a9d8  lis 3, 165
  013a9dc  lwz 3, 11184(3)
  013a9e0  extsw 3, 3
  013a9e4  blr

LoadHudSequences:   # 0x13a9e8, 0x124 bytes
  013a9e8  stdu 1, -400(1)
  013a9ec  mflr 0
  013a9f0  std 0, 416(1)
  013a9f4  lis 3, 161
  013a9f8  std 30, 384(1)
  013a9fc  lis 4, 64
  013aa00  addic 3, 3, 2264
  013aa04  std 31, 392(1)
  013aa08  li 30, 0
  013aa0c  ori 31, 30, 0
  013aa10  std 29, 376(1)
  013aa14  lwz 3, 64(3)
  013aa18  std 28, 368(1)
  013aa1c  addc 29, 3, 4
  013aa20  clrldi 29, 29, 32
  013aa24  lis 4, 101
  013aa28  addic 28, 1, 112
  013aa2c  addic 4, 4, 13468
  013aa30  ori 5, 30, 0
  013aa34  ori 3, 28, 0
  013aa38  bl 0x5cd2a8
  013aa3c  nop
  013aa40  li 5, -1
  013aa44  ori 4, 29, 0
  013aa48  ori 3, 28, 0
  013aa4c  bl 0x503e00
  013aa50  nop
  013aa54  lis 4, 165
  013aa58  slwi 5, 30, 2
  013aa5c  addic 4, 4, 11524
  013aa60  extsw 5, 5
  013aa64  lis 6, 165
  013aa68  addc 3, 29, 3
  013aa6c  addic 6, 6, 11184
  013aa70  addic 3, 3, 15
  013aa74  stwx 29, 4, 5
  013aa78  addc 4, 6, 5
  013aa7c  rldicr 29, 3, 0, 59
  013aa80  clrldi 29, 29, 32
  013aa84  lwz 3, 340(4)
  013aa88  lwz 4, 20(3)
  013aa8c  cmpwi 4, 0
  013aa90  bt 2, 0x13aa9c
  013aa94  addc 4, 3, 4
  013aa98  stw 4, 20(3)
  013aa9c  ori 5, 31, 0
  013aaa0  lbz 4, 16(3)
  013aaa4  cmpw 4, 5
  013aaa8  bf 1, 0x13aadc
  013aaac  ori 4, 31, 0
  013aab0  addic 6, 3, 28
  013aab4  addic 5, 5, 1
  013aab8  addc 6, 6, 4
  013aabc  addic 4, 4, 4
  013aac0  clrldi 6, 6, 32
  013aac4  lwz 7, 0(6)
  013aac8  addc 7, 3, 7
  013aacc  stw 7, 0(6)
  013aad0  lbz 6, 16(3)
  013aad4  cmpw 5, 6
  013aad8  bt 0, 0x13aab0
  013aadc  addic 30, 30, 1
  013aae0  extsw 30, 30
  013aae4  cmpwi 30, 20
  013aae8  bt 0, 0x13aa24
  013aaec  ld 0, 416(1)
  013aaf0  mtlr 0
  013aaf4  ld 28, 368(1)
  013aaf8  ld 29, 376(1)
  013aafc  ld 30, 384(1)
  013ab00  ld 31, 392(1)
  013ab04  addi 1, 1, 400
  013ab08  blr

ResetMenuCamera:   # 0x13ab10, 0xbc bytes
  013ab10  stdu 1, -144(1)
  013ab14  mflr 0
  013ab18  std 0, 160(1)
  013ab1c  lis 3, 149
  013ab20  std 31, 136(1)
  013ab24  lis 4, 20
  013ab28  std 30, 128(1)
  013ab2c  addic 31, 3, 5056
  013ab30  addi 30, 4, -21748
  013ab34  lis 4, 17280
  013ab38  std 29, 120(1)
  013ab3c  lis 6, 17024
  013ab40  std 28, 112(1)
  013ab44  li 29, 0
  013ab48  li 28, 16
  013ab4c  stw 4, 320(31)
  013ab50  stw 4, 324(31)
  013ab54  addic 3, 31, 848
  013ab58  ori 5, 28, 0
  013ab5c  stw 6, 328(31)
  013ab60  ori 4, 29, 0
  013ab64  bl 0x5d0140
  013ab68  nop
  013ab6c  addic 3, 31, 864
  013ab70  ori 4, 29, 0
  013ab74  ori 5, 28, 0
  013ab78  bl 0x5d0140
  013ab7c  nop
  013ab80  addic 3, 31, 880
  013ab84  ori 4, 29, 0
  013ab88  ori 5, 28, 0
  013ab8c  bl 0x5d0140
  013ab90  nop
  013ab94  lfs 1, 0(30)
  013ab98  lis 3, 16256
  013ab9c  stw 3, 848(31)
  013aba0  stfs 1, 868(31)
  013aba4  stfs 1, 888(31)
  013aba8  stfs 1, 892(31)
  013abac  ld 0, 160(1)
  013abb0  mtlr 0
  013abb4  ld 28, 112(1)
  013abb8  ld 29, 120(1)
  013abbc  ld 30, 128(1)
  013abc0  ld 31, 136(1)
  013abc4  addi 1, 1, 144
  013abc8  blr

BeginMenu:   # 0x13abcc, 0x344 bytes
  013abcc  stdu 1, -144(1)
  013abd0  mflr 0
  013abd4  std 0, 160(1)
  013abd8  std 30, 128(1)
  013abdc  lis 4, 144
  013abe0  lis 5, 165
  013abe4  std 31, 136(1)
  013abe8  li 30, 0
  013abec  ori 31, 3, 0
  013abf0  li 3, 29
  013abf4  lwz 4, -23196(4)
  013abf8  lfs 1, 6776(4)
  013abfc  stfs 1, 13476(5)
  013ac00  std 29, 120(1)
  013ac04  std 28, 112(1)
  013ac08  stw 30, 6776(4)
  013ac0c  bl 0x60bc8c
  013ac10  nop
  013ac14  ori 3, 30, 0
  013ac18  bl 0x11ce20
  013ac1c  nop
  013ac20  bl 0x505d20
  013ac24  nop
  013ac28  lis 3, 273
  013ac2c  li 4, 1
  013ac30  addic 3, 3, 5888
  013ac34  bl 0x4edce4
  013ac38  nop
  013ac3c  lis 3, 150
  013ac40  addic 3, 3, -14912
  013ac44  lwz 3, 20(3)
  013ac48  cmpwi 3, 0
  013ac4c  bt 2, 0x13ac60
  013ac50  lis 3, 161
  013ac54  li 4, 1
  013ac58  stw 4, 23672(3)
  013ac5c  b 0x13aef0
  013ac60  lis 3, 165
  013ac64  lis 4, 151
  013ac68  lis 5, 165
  013ac6c  lwz 3, 11876(3)
  013ac70  lwz 4, -25476(4)
  013ac74  stw 3, 11880(5)
  013ac78  cmpwi 4, 36
  013ac7c  bf 2, 0x13ac8c
  013ac80  lis 3, 151
  013ac84  li 4, 0
  013ac88  stw 4, -25476(3)
  013ac8c  lis 4, 151
  013ac90  li 3, 0
  013ac94  lwz 5, -25488(4)
  013ac98  cmpwi 5, 13
  013ac9c  bt 2, 0x13acb4
  013aca0  lis 5, 151
  013aca4  addic 5, 5, -25376
  013aca8  lbz 5, 8907(5)
  013acac  cmpwi 5, 0
  013acb0  bt 2, 0x13acb8
  013acb4  li 3, 1
  013acb8  lis 28, 165
  013acbc  lwz 5, -25488(4)
  013acc0  addic 28, 28, 11184
  013acc4  cmpwi 5, 0
  013acc8  stw 3, 304(28)
  013accc  li 3, 0
  013acd0  bt 2, 0x13ace0
  013acd4  lwz 5, -25488(4)
  013acd8  cmpwi 5, 14
  013acdc  bf 2, 0x13ace4
  013ace0  li 3, 1
  013ace4  lis 5, 151
  013ace8  lis 6, 151
  013acec  lwz 5, -13828(5)
  013acf0  lwz 6, -25392(6)
  013acf4  stw 3, 308(28)
  013acf8  or 5, 5, 6
  013acfc  li 3, 0
  013ad00  cmpwi 5, 0
  013ad04  bf 2, 0x13ad14
  013ad08  lbz 5, 244(28)
  013ad0c  cmpwi 5, 0
  013ad10  bt 2, 0x13ad18
  013ad14  li 3, 1
  013ad18  addic 5, 31, -35
  013ad1c  stb 3, 216(28)
  013ad20  cmpwi 1, 3, 0
  013ad24  cntlzw 5, 5
  013ad28  srwi 5, 5, 5
  013ad2c  stb 5, 217(28)
  013ad30  bt 6, 0x13ad40
  013ad34  lis 3, 115
  013ad38  addic 3, 3, -25200
  013ad3c  b 0x13ad48
  013ad40  lis 3, 115
  013ad44  addic 3, 3, -25280
  013ad48  lis 5, 115
  013ad4c  ori 6, 3, 0
  013ad50  addic 3, 5, -25680
  013ad54  stw 6, 56(3)
  013ad58  bt 6, 0x13ad68
  013ad5c  lis 3, 115
  013ad60  addic 3, 3, -25200
  013ad64  b 0x13ad68
  013ad68  lis 5, 115
  013ad6c  lis 6, 165
  013ad70  addic 5, 5, -25280
  013ad74  lis 7, 161
  013ad78  li 8, 3
  013ad7c  stw 31, 11184(6)
  013ad80  li 31, 0
  013ad84  stw 3, 60(5)
  013ad88  stw 8, 1800(7)
  013ad8c  lwz 3, -25488(4)
  013ad90  stw 31, 12(28)
  013ad94  stw 31, 16(28)
  013ad98  cmpwi 3, 18
  013ad9c  stw 31, 268(28)
  013ada0  bt 1, 0x13ada8
  013ada4  ori 31, 3, 0
  013ada8  lis 3, 162
  013adac  addic 3, 3, 1216
  013adb0  stw 31, 548(3)
  013adb4  bl 0xea5b0
  013adb8  nop
  013adbc  lis 3, 115
  013adc0  li 31, 0
  013adc4  addic 3, 3, -17852
  013adc8  stw 31, 64(3)
  013adcc  bl 0x11b494
  013add0  nop
  013add4  cmpwi 3, 15
  013add8  bt 0, 0x13ade0
  013addc  li 31, 1
  013ade0  li 30, 0
  013ade4  bl 0x11b494
  013ade8  nop
  013adec  cmpwi 3, 30
  013adf0  bt 0, 0x13adf8
  013adf4  li 30, 1
  013adf8  li 29, 0
  013adfc  bl 0x11b124
  013ae00  nop
  013ae04  cmpwi 3, 10
  013ae08  bt 0, 0x13ae10
  013ae0c  li 29, 1
  013ae10  li 3, 2
  013ae14  cmpwi 31, 0
  013ae18  ori 5, 3, 0
  013ae1c  cmpwi 1, 30, 0
  013ae20  bt 2, 0x13ae28
  013ae24  li 3, 3
  013ae28  lis 4, 115
  013ae2c  addic 4, 4, -7744
  013ae30  sth 3, 62(4)
  013ae34  ori 3, 5, 0
  013ae38  bt 6, 0x13ae40
  013ae3c  li 3, 3
  013ae40  cmpwi 1, 29, 0
  013ae44  sth 3, 74(4)
  013ae48  ori 3, 5, 0
  013ae4c  bt 6, 0x13ae54
  013ae50  li 3, 10
  013ae54  cmpwi 6, 31, 0
  013ae58  sth 3, 86(4)
  013ae5c  bt 6, 0x13ae64
  013ae60  li 5, 3
  013ae64  sth 5, 98(4)
  013ae68  cmpwi 1, 30, 0
  013ae6c  li 5, 20441
  013ae70  bt 26, 0x13ae78
  013ae74  li 5, 20435
  013ae78  lis 3, 115
  013ae7c  addic 3, 3, -7624
  013ae80  stw 5, 20(3)
  013ae84  li 5, 20442
  013ae88  bt 6, 0x13ae90
  013ae8c  li 5, 20436
  013ae90  stw 5, 24(3)
  013ae94  li 5, 20443
  013ae98  cmpwi 1, 29, 0
  013ae9c  ori 6, 5, 0
  013aea0  bt 6, 0x13aea8
  013aea4  li 5, 20439
  013aea8  stw 5, 28(3)
  013aeac  bt 6, 0x13aeb4
  013aeb0  li 6, 20440
  013aeb4  lis 5, 346
  013aeb8  lbz 5, -15535(5)
  013aebc  stw 6, 32(3)
  013aec0  cmpwi 5, 0
  013aec4  bf 2, 0x13aee0
  013aec8  lis 3, 150
  013aecc  lwz 3, 27376(3)
  013aed0  cmpwi 3, 0
  013aed4  bt 2, 0x13aee0
  013aed8  li 3, 0
  013aedc  sth 3, 96(4)
  013aee0  li 3, 0
  013aee4  li 4, 1
  013aee8  stw 3, 316(28)
  013aeec  stw 4, 312(28)
  013aef0  ld 0, 160(1)
  013aef4  mtlr 0
  013aef8  ld 28, 112(1)
  013aefc  ld 29, 120(1)
  013af00  ld 30, 128(1)
  013af04  ld 31, 136(1)
  013af08  addi 1, 1, 144
  013af0c  blr

Menu_UpdateViewMtxIfChanged:   # 0x13af10, 0x58 bytes
  013af10  stdu 1, -112(1)
  013af14  mflr 0
  013af18  std 0, 128(1)
  013af1c  lis 3, 165
  013af20  lis 4, 165
  013af24  lwz 5, 11876(3)
  013af28  lwz 4, 11880(4)
  013af2c  cmpw 5, 4
  013af30  bt 2, 0x13af58
  013af34  lis 4, 144
  013af38  lis 5, 165
  013af3c  lwz 3, 11876(3)
  013af40  lwz 6, -23196(4)
  013af44  extsw 4, 3
  013af48  stw 3, 11880(5)
  013af4c  ori 3, 6, 0
  013af50  bl 0x4d6f50
  013af54  nop
  013af58  ld 0, 128(1)
  013af5c  mtlr 0
  013af60  addi 1, 1, 112
  013af64  blr

Menu_InitStreamBuffers:   # 0x13af68, 0x194 bytes
  013af68  stdu 1, -64(1)
  013af6c  lis 4, 165
  013af70  cmpwi 3, 0
  013af74  addic 4, 4, 11184
  013af78  li 3, 1
  013af7c  lwz 7, 260(4)
  013af80  std 31, 56(1)
  013af84  std 30, 48(1)
  013af88  lwz 6, 264(4)
  013af8c  bf 2, 0x13afa0
  013af90  li 8, 0
  013af94  ori 10, 3, 0
  013af98  ori 9, 8, 0
  013af9c  b 0x13afac
  013afa0  li 10, 2
  013afa4  ori 8, 3, 0
  013afa8  ori 9, 10, 0
  013afac  li 5, 0
  013afb0  ori 4, 5, 0
  013afb4  cmpw 10, 4
  013afb8  bf 1, 0x13aff0
  013afbc  ori 11, 5, 0
  013afc0  lis 12, 165
  013afc4  lis 31, 1
  013afc8  addic 12, 12, 12440
  013afcc  addic 5, 5, 1
  013afd0  addc 30, 12, 11
  013afd4  ori 31, 31, 6144
  013afd8  cmpw 5, 10
  013afdc  stwx 7, 12, 11
  013afe0  addc 7, 7, 31
  013afe4  stw 4, 4(30)
  013afe8  addic 11, 11, 8
  013afec  bt 0, 0x13afc0
  013aff0  addc 8, 10, 8
  013aff4  cmpw 5, 8
  013aff8  bf 0, 0x13b034
  013affc  slwi 10, 5, 3
  013b000  lis 11, 165
  013b004  extsw 12, 10
  013b008  addic 11, 11, 12440
  013b00c  lis 31, 1
  013b010  addc 30, 11, 12
  013b014  addic 5, 5, 1
  013b018  ori 31, 31, 6144
  013b01c  stwx 6, 11, 12
  013b020  cmpw 5, 8
  013b024  addic 10, 10, 8
  013b028  addc 6, 6, 31
  013b02c  stw 4, 4(30)
  013b030  bt 0, 0x13b000
  013b034  addc 8, 8, 9
  013b038  cmpw 5, 8
  013b03c  bf 0, 0x13b078
  013b040  slwi 9, 5, 3
  013b044  lis 10, 165
  013b048  extsw 12, 9
  013b04c  addic 10, 10, 12440
  013b050  lis 11, 4
  013b054  addc 31, 10, 12
  013b058  addic 5, 5, 1
  013b05c  ori 11, 11, 61440
  013b060  cmpw 5, 8
  013b064  stwx 7, 10, 12
  013b068  addic 9, 9, 8
  013b06c  addc 7, 7, 11
  013b070  stw 3, 4(31)
  013b074  bt 0, 0x13b044
  013b078  cmpw 5, 8
  013b07c  bf 0, 0x13b0b8
  013b080  slwi 7, 5, 3
  013b084  lis 9, 165
  013b088  extsw 11, 7
  013b08c  addic 9, 9, 12440
  013b090  lis 10, 4
  013b094  addc 12, 9, 11
  013b098  addic 5, 5, 1
  013b09c  ori 10, 10, 61440
  013b0a0  cmpw 5, 8
  013b0a4  stwx 6, 9, 11
  013b0a8  addic 7, 7, 8
  013b0ac  addc 6, 6, 10
  013b0b0  stw 3, 4(12)
  013b0b4  bt 0, 0x13b084
  013b0b8  cmpwi 5, 5
  013b0bc  bf 0, 0x13b0ec
  013b0c0  slwi 3, 5, 3
  013b0c4  lis 6, 165
  013b0c8  extsw 7, 3
  013b0cc  addic 6, 6, 12440
  013b0d0  addic 5, 5, 1
  013b0d4  addc 8, 6, 7
  013b0d8  cmpwi 5, 5
  013b0dc  addic 3, 3, 8
  013b0e0  stwx 4, 6, 7
  013b0e4  stw 4, 4(8)
  013b0e8  bt 0, 0x13b0c4
  013b0ec  ld 30, 48(1)
  013b0f0  ld 31, 56(1)
  013b0f4  addi 1, 1, 64
  013b0f8  blr

OpenPauseMenu:   # 0x13b108, 0x728 bytes
  013b108  stdu 1, -176(1)
  013b10c  mflr 0
  013b110  std 0, 192(1)
  013b114  stfd 31, 168(1)
  013b118  lis 3, 161
  013b11c  lis 4, 165
  013b120  std 31, 160(1)
  013b124  addic 5, 3, 2368
  013b128  std 28, 136(1)
  013b12c  li 31, 0
  013b130  std 25, 112(1)
  013b134  addic 28, 4, 11184
  013b138  ori 25, 31, 0
  013b13c  lwz 3, 11184(4)
  013b140  lis 6, -32768
  013b144  lwz 4, 16(5)
  013b148  cmpwi 3, 10
  013b14c  or 4, 4, 6
  013b150  stw 25, 288(28)
  013b154  cmpwi 6, 3, 35
  013b158  stw 25, 208(28)
  013b15c  cmpwi 1, 3, 33
  013b160  cmpwi 7, 3, 45
  013b164  std 30, 152(1)
  013b168  std 29, 144(1)
  013b16c  std 27, 128(1)
  013b170  std 26, 120(1)
  013b174  stw 4, 16(5)
  013b178  bf 2, 0x13b1a0
  013b17c  lis 3, 165
  013b180  lis 5, 115
  013b184  li 4, 11
  013b188  addic 5, 5, -22032
  013b18c  li 31, 1
  013b190  stw 4, 11184(3)
  013b194  stw 5, 4(28)
  013b198  stw 5, 8(28)
  013b19c  b 0x13b258
  013b1a0  cmpwi 3, 14
  013b1a4  bf 2, 0x13b1cc
  013b1a8  lis 3, 165
  013b1ac  lis 5, 115
  013b1b0  li 4, 15
  013b1b4  addic 5, 5, -10116
  013b1b8  li 31, 1
  013b1bc  stw 4, 11184(3)
  013b1c0  stw 5, 4(28)
  013b1c4  stw 5, 8(28)
  013b1c8  b 0x13b258
  013b1cc  bf 6, 0x13b200
  013b1d0  lis 3, 165
  013b1d4  li 5, 34
  013b1d8  li 4, 1
  013b1dc  lis 6, 161
  013b1e0  lis 7, 115
  013b1e4  stw 5, 11184(3)
  013b1e8  addic 7, 7, -5176
  013b1ec  stw 4, 288(28)
  013b1f0  stb 4, 24377(6)
  013b1f4  stw 7, 4(28)
  013b1f8  stw 7, 8(28)
  013b1fc  b 0x13b258
  013b200  bf 26, 0x13b218
  013b204  lis 3, 115
  013b208  addic 3, 3, -7108
  013b20c  stw 3, 4(28)
  013b210  stw 3, 8(28)
  013b214  b 0x13b258
  013b218  bf 30, 0x13b23c
  013b21c  lis 3, 165
  013b220  lis 4, 115
  013b224  li 5, 2
  013b228  addic 4, 4, 52
  013b22c  stw 5, 11184(3)
  013b230  stw 4, 4(28)
  013b234  stw 4, 8(28)
  013b238  b 0x13b258
  013b23c  lis 3, 165
  013b240  lis 4, 115
  013b244  li 5, 2
  013b248  addic 4, 4, -25984
  013b24c  stw 5, 11184(3)
  013b250  stw 4, 4(28)
  013b254  stw 4, 8(28)
  013b258  lwz 3, 236(28)
  013b25c  cmpwi 3, 0
  013b260  bt 2, 0x13b2b8
  013b264  lis 4, 151
  013b268  lwz 6, 300(28)
  013b26c  lis 5, 165
  013b270  lwz 7, 240(28)
  013b274  cmpwi 1, 7, 15
  013b278  stw 6, -25388(4)
  013b27c  cmpwi 7, 11
  013b280  stw 3, 4(28)
  013b284  crnor 2, 2, 6
  013b288  stw 3, 8(28)
  013b28c  stw 7, 11184(5)
  013b290  bt 2, 0x13b2b0
  013b294  lis 3, 162
  013b298  lwz 4, 224(28)
  013b29c  li 31, 1
  013b2a0  addic 3, 3, 1216
  013b2a4  stw 4, 548(3)
  013b2a8  bl 0xea5b0
  013b2ac  nop
  013b2b0  stw 25, 236(28)
  013b2b4  stw 25, 240(28)
  013b2b8  lis 3, 115
  013b2bc  lis 4, 115
  013b2c0  lis 5, 162
  013b2c4  addic 6, 3, -26416
  013b2c8  addic 30, 5, -9472
  013b2cc  lfs 1, -26416(3)
  013b2d0  lfs 2, -26400(4)
  013b2d4  addic 7, 4, -26400
  013b2d8  li 29, 16
  013b2dc  lfs 3, 4(6)
  013b2e0  stfs 1, 912(30)
  013b2e4  addic 3, 30, 944
  013b2e8  lfs 1, 8(6)
  013b2ec  ori 4, 25, 0
  013b2f0  stfs 3, 916(30)
  013b2f4  ori 5, 29, 0
  013b2f8  lfs 3, 12(6)
  013b2fc  stfs 1, 920(30)
  013b300  stfs 3, 924(30)
  013b304  lfs 1, 4(7)
  013b308  stfs 2, 896(30)
  013b30c  lfs 2, 8(7)
  013b310  stfs 1, 900(30)
  013b314  lfs 1, 12(7)
  013b318  stfs 2, 904(30)
  013b31c  stfs 1, 908(30)
  013b320  bl 0x5d0140
  013b324  nop
  013b328  addic 3, 30, 928
  013b32c  ori 4, 25, 0
  013b330  ori 5, 29, 0
  013b334  bl 0x5d0140
  013b338  nop
  013b33c  lis 27, 149
  013b340  lis 3, 20
  013b344  addic 27, 27, 5056
  013b348  lis 4, 150
  013b34c  addi 30, 3, -20228
  013b350  addic 3, 4, -12416
  013b354  lis 4, 18688
  013b358  lfs 1, 320(27)
  013b35c  lis 6, 16161
  013b360  lfs 2, 324(27)
  013b364  lis 5, 17279
  013b368  stfs 1, 64(28)
  013b36c  ori 6, 6, 18350
  013b370  lfs 1, 328(27)
  013b374  stfs 2, 68(28)
  013b378  lfs 2, 332(27)
  013b37c  stfs 1, 72(28)
  013b380  lfs 1, 336(27)
  013b384  stfs 2, 76(28)
  013b388  lfs 2, 340(27)
  013b38c  stfs 1, 80(28)
  013b390  lfs 1, 344(27)
  013b394  stfs 2, 84(28)
  013b398  lfs 2, 348(27)
  013b39c  stfs 1, 88(28)
  013b3a0  stfs 2, 92(28)
  013b3a4  lfs 1, 176(3)
  013b3a8  stfs 1, 228(28)
  013b3ac  lfs 31, 0(30)
  013b3b0  stw 25, 536(3)
  013b3b4  stw 4, 540(3)
  013b3b8  stw 5, 552(3)
  013b3bc  stw 6, 176(3)
  013b3c0  stfs 31, 556(3)
  013b3c4  bl 0x668d0
  013b3c8  nop
  013b3cc  lis 4, 17280
  013b3d0  lfs 1, 4(30)
  013b3d4  lis 6, 17024
  013b3d8  addic 3, 27, 848
  013b3dc  ori 5, 29, 0
  013b3e0  stw 4, 320(27)
  013b3e4  stw 6, 328(27)
  013b3e8  ori 4, 25, 0
  013b3ec  stfs 1, 324(27)
  013b3f0  bl 0x5d0140
  013b3f4  nop
  013b3f8  addic 3, 27, 864
  013b3fc  ori 4, 25, 0
  013b400  ori 5, 29, 0
  013b404  bl 0x5d0140
  013b408  nop
  013b40c  addic 3, 27, 880
  013b410  ori 4, 25, 0
  013b414  ori 5, 29, 0
  013b418  bl 0x5d0140
  013b41c  nop
  013b420  lfs 1, 8(30)
  013b424  lis 3, 16256
  013b428  stw 3, 848(27)
  013b42c  stfs 1, 868(27)
  013b430  stfs 1, 888(27)
  013b434  stfs 1, 892(27)
  013b438  bl 0x66088
  013b43c  nop
  013b440  li 26, 1
  013b444  ori 3, 26, 0
  013b448  bl 0x174cf4
  013b44c  nop
  013b450  ori 3, 25, 0
  013b454  bl 0x503078
  013b458  nop
  013b45c  lis 4, 346
  013b460  lis 3, 161
  013b464  cmpwi 31, 0
  013b468  addic 3, 3, 2264
  013b46c  lwz 5, -15568(4)
  013b470  addic 5, 5, 1
  013b474  stw 5, -15568(4)
  013b478  bt 2, 0x13b4d8
  013b47c  lis 4, 230
  013b480  lis 5, 3
  013b484  lwz 3, 64(3)
  013b488  lis 6, 30
  013b48c  lis 7, 16
  013b490  lis 8, 4
  013b494  stw 5, -21916(4)
  013b498  lis 9, 3
  013b49c  stw 3, 256(28)
  013b4a0  addc 4, 3, 6
  013b4a4  addc 5, 3, 7
  013b4a8  ori 6, 8, 55296
  013b4ac  ori 7, 9, 49152
  013b4b0  addc 6, 3, 6
  013b4b4  stw 4, 252(28)
  013b4b8  addc 7, 3, 7
  013b4bc  stw 5, 16(28)
  013b4c0  stw 4, 264(28)
  013b4c4  ori 3, 25, 0
  013b4c8  stw 6, 248(28)
  013b4cc  stw 7, 260(28)
  013b4d0  bl 0x13af68
  013b4d4  b 0x13b550
  013b4d8  lis 6, 230
  013b4dc  lwz 3, 64(3)
  013b4e0  lis 4, 0
  013b4e4  lis 7, 6
  013b4e8  ori 4, 4, 49152
  013b4ec  lis 9, 16
  013b4f0  addc 4, 3, 4
  013b4f4  stw 7, -21916(6)
  013b4f8  lis 5, 3
  013b4fc  ori 6, 9, 49152
  013b500  ori 5, 5, 49152
  013b504  stw 4, 256(28)
  013b508  lis 8, 30
  013b50c  addc 6, 3, 6
  013b510  addc 5, 3, 5
  013b514  lis 7, 31
  013b518  ori 4, 8, 49152
  013b51c  lis 8, 15
  013b520  ori 7, 7, 55296
  013b524  stw 6, 16(28)
  013b528  addc 4, 3, 4
  013b52c  stw 5, 260(28)
  013b530  ori 6, 8, 53248
  013b534  addc 7, 3, 7
  013b538  addc 5, 3, 6
  013b53c  stw 4, 264(28)
  013b540  ori 3, 26, 0
  013b544  stw 7, 252(28)
  013b548  stw 5, 248(28)
  013b54c  bl 0x13af68
  013b550  lis 3, 114
  013b554  li 4, 8192
  013b558  stw 4, -1068(3)
  013b55c  bl 0x174c24
  013b560  nop
  013b564  lis 3, 165
  013b568  lwz 3, 11184(3)
  013b56c  cmpwi 3, 11
  013b570  bt 2, 0x13b57c
  013b574  cmpwi 3, 15
  013b578  bf 2, 0x13b584
  013b57c  bl 0xe1f28
  013b580  nop
  013b584  ori 3, 25, 0
  013b588  bl 0xc8818
  013b58c  nop
  013b590  lis 3, 165
  013b594  lwz 3, 11184(3)
  013b598  cmpwi 3, 11
  013b59c  bt 2, 0x13b5b0
  013b5a0  cmpwi 3, 15
  013b5a4  bt 2, 0x13b5b0
  013b5a8  cmpwi 3, 18
  013b5ac  bf 2, 0x13b5c0
  013b5b0  ori 3, 26, 0
  013b5b4  bl 0xc8810
  013b5b8  nop
  013b5bc  b 0x13b5cc
  013b5c0  ori 3, 25, 0
  013b5c4  bl 0xc8810
  013b5c8  nop
  013b5cc  lwz 3, 16(28)
  013b5d0  bl 0x6e068
  013b5d4  nop
  013b5d8  lis 5, 150
  013b5dc  lis 3, 165
  013b5e0  lwz 4, 27348(5)
  013b5e4  lwz 3, 11184(3)
  013b5e8  stw 4, 24(28)
  013b5ec  cmpwi 3, 11
  013b5f0  bt 2, 0x13b5fc
  013b5f4  cmpwi 3, 15
  013b5f8  bf 2, 0x13b658
  013b5fc  lis 4, 162
  013b600  lis 7, 4
  013b604  lwz 8, 27348(5)
  013b608  lis 6, 4
  013b60c  addic 4, 4, 1216
  013b610  ori 7, 7, 1024
  013b614  addc 6, 8, 6
  013b618  addc 7, 8, 7
  013b61c  ori 3, 25, 0
  013b620  stw 8, 576(4)
  013b624  stw 6, 580(4)
  013b628  stw 7, 27348(5)
  013b62c  slwi 6, 3, 2
  013b630  lwz 7, 27348(5)
  013b634  addic 3, 3, 1
  013b638  extsw 6, 6
  013b63c  addic 8, 7, 16384
  013b640  addc 6, 4, 6
  013b644  cmpwi 3, 4
  013b648  stw 7, 584(6)
  013b64c  stw 8, 27348(5)
  013b650  bt 0, 0x13b62c
  013b654  b 0x13b680
  013b658  lis 4, 162
  013b65c  li 3, 4
  013b660  addic 4, 4, 1216
  013b664  stw 25, 576(4)
  013b668  stw 25, 580(4)
  013b66c  addic 3, 3, -1
  013b670  stw 25, 584(4)
  013b674  cmpwi 3, 0
  013b678  addic 4, 4, 4
  013b67c  bf 2, 0x13b66c
  013b680  ori 3, 26, 0
  013b684  bl 0xc8820
  013b688  nop
  013b68c  lis 5, 163
  013b690  ori 3, 25, 0
  013b694  li 4, 4
  013b698  lwz 6, 19456(5)
  013b69c  ori 5, 28, 0
  013b6a0  lbz 7, 12(6)
  013b6a4  stw 7, 204(28)
  013b6a8  lbz 7, 12(6)
  013b6ac  addic 7, 7, 28
  013b6b0  stb 7, 12(6)
  013b6b4  lis 6, 151
  013b6b8  addic 4, 4, -1
  013b6bc  addic 6, 6, -25476
  013b6c0  cmpwi 4, 0
  013b6c4  lwzx 6, 6, 3
  013b6c8  addic 3, 3, 4
  013b6cc  stw 6, 48(5)
  013b6d0  addic 5, 5, 4
  013b6d4  bf 2, 0x13b6b4
  013b6d8  lwz 3, 4(28)
  013b6dc  cmpwi 3, 0
  013b6e0  bt 2, 0x13b800
  013b6e4  ori 31, 25, 0
  013b6e8  ori 29, 31, 0
  013b6ec  lis 3, 163
  013b6f0  addic 3, 3, 21696
  013b6f4  lbz 3, 1138(3)
  013b6f8  cmpwi 3, 255
  013b6fc  bf 2, 0x13b708
  013b700  ori 30, 25, 0
  013b704  b 0x13b760
  013b708  li 3, 1138
  013b70c  bl 0xefa28
  013b710  nop
  013b714  ori 30, 3, 0
  013b718  cmpwi 30, 0
  013b71c  bt 2, 0x13b760
  013b720  li 4, 255
  013b724  ori 3, 30, 0
  013b728  stb 4, 48(30)
  013b72c  sth 4, 50(30)
  013b730  stb 26, 49(30)
  013b734  stb 25, 32(30)
  013b738  bl 0xf31a8
  013b73c  nop
  013b740  lis 4, 32
  013b744  li 5, 14
  013b748  ori 3, 30, 0
  013b74c  ori 7, 25, 0
  013b750  ori 4, 4, 8224
  013b754  ori 6, 5, 0
  013b758  bl 0xf1ea0
  013b75c  nop
  013b760  lis 3, 165
  013b764  addic 3, 3, 11616
  013b768  stwx 30, 3, 29
  013b76c  lwzx 4, 3, 29
  013b770  cmpwi 4, 0
  013b774  bt 2, 0x13b7f0
  013b778  lis 4, 113
  013b77c  lwzx 5, 3, 29
  013b780  addic 4, 4, -28880
  013b784  lfs 1, 320(27)
  013b788  stw 4, 116(5)
  013b78c  lwzx 3, 3, 29
  013b790  lwz 4, 4(28)
  013b794  lhz 6, 52(5)
  013b798  rlwimi 6, 25, 0, 30, 30
  013b79c  lwz 7, 36(3)
  013b7a0  lwzx 4, 4, 29
  013b7a4  stfs 1, 16(3)
  013b7a8  addic 7, 7, 72
  013b7ac  extsw 4, 4
  013b7b0  lfs 1, 324(27)
  013b7b4  sth 6, 52(5)
  013b7b8  slwi 8, 4, 2
  013b7bc  stfs 1, 20(3)
  013b7c0  addc 7, 7, 8
  013b7c4  lfs 1, 328(27)
  013b7c8  clrldi 5, 7, 32
  013b7cc  stfs 31, 64(3)
  013b7d0  stfs 1, 24(3)
  013b7d4  stfs 31, 68(3)
  013b7d8  stfs 31, 72(3)
  013b7dc  lwz 5, 0(5)
  013b7e0  lbz 5, 16(5)
  013b7e4  addic 5, 5, -1
  013b7e8  bl 0xfdcf0
  013b7ec  nop
  013b7f0  addic 31, 31, 1
  013b7f4  addic 29, 29, 4
  013b7f8  cmpwi 31, 14
  013b7fc  bt 0, 0x13b6ec
  013b800  ld 0, 192(1)
  013b804  mtlr 0
  013b808  lfd 31, 168(1)
  013b80c  ld 25, 112(1)
  013b810  ld 26, 120(1)
  013b814  ld 27, 128(1)
  013b818  ld 28, 136(1)
  013b81c  ld 29, 144(1)
  013b820  ld 30, 152(1)
  013b824  ld 31, 160(1)
  013b828  addi 1, 1, 176
  013b82c  blr

UpdatePause:   # 0x13b838, 0xda8 bytes
  013b838  stdu 1, -208(1)
  013b83c  mflr 0
  013b840  std 0, 224(1)
  013b844  stfd 31, 200(1)
  013b848  std 26, 152(1)
  013b84c  lis 26, 165
  013b850  std 25, 144(1)
  013b854  li 4, 32000
  013b858  addic 25, 26, 11184
  013b85c  lwz 3, 268(25)
  013b860  addic 3, 3, 1
  013b864  std 31, 192(1)
  013b868  std 30, 184(1)
  013b86c  std 29, 176(1)
  013b870  std 28, 168(1)
  013b874  std 27, 160(1)
  013b878  std 24, 136(1)
  013b87c  cmpwi 3, 32000
  013b880  bt 1, 0x13b888
  013b884  ori 4, 3, 0
  013b888  stw 4, 268(25)
  013b88c  lwz 4, 324(25)
  013b890  cmpwi 4, 0
  013b894  bt 2, 0x13b8a0
  013b898  addic 3, 4, -1
  013b89c  stw 3, 324(25)
  013b8a0  li 28, 0
  013b8a4  ori 31, 28, 0
  013b8a8  bl 0xe886c
  013b8ac  nop
  013b8b0  cmpwi 3, 0
  013b8b4  bt 2, 0x13b8c0
  013b8b8  lwz 31, 336(25)
  013b8bc  addic 31, 31, 1
  013b8c0  stw 31, 336(25)
  013b8c4  lwz 31, 11184(26)
  013b8c8  cmpwi 31, 29
  013b8cc  cmpwi 6, 31, 2
  013b8d0  cmpwi 1, 31, 31
  013b8d4  bt 1, 0x13b8f4
  013b8d8  cmpwi 1, 31, 1
  013b8dc  cmpwi 7, 31, 26
  013b8e0  bt 25, 0x13b8ec
  013b8e4  bf 5, 0x13b904
  013b8e8  b 0x13b8f8
  013b8ec  bt 30, 0x13b8f8
  013b8f0  b 0x13b904
  013b8f4  bt 5, 0x13b904
  013b8f8  lis 3, 161
  013b8fc  li 4, 1
  013b900  stb 4, 24378(3)
  013b904  lwz 3, 11184(26)
  013b908  cmpwi 3, 20
  013b90c  cmpwi 1, 3, 10
  013b910  cmpwi 6, 3, 14
  013b914  cmpwi 7, 3, 17
  013b918  bf 2, 0x13bc94
  013b91c  lwz 3, 20(25)
  013b920  cmpwi 3, 0
  013b924  bt 2, 0x13b930
  013b928  addic 3, 3, -1
  013b92c  stw 3, 20(25)
  013b930  lwz 3, 20(25)
  013b934  cmpwi 3, 0
  013b938  bf 2, 0x13c5ac
  013b93c  lis 3, 150
  013b940  addic 3, 3, 14024
  013b944  lhz 3, 8(3)
  013b948  cmpwi 3, 0
  013b94c  bf 2, 0x13c5ac
  013b950  lis 3, 1
  013b954  lis 4, 114
  013b958  ori 3, 3, 57344
  013b95c  stw 3, -1068(4)
  013b960  bl 0x174bdc
  013b964  nop
  013b968  lis 3, 149
  013b96c  lfs 1, 64(25)
  013b970  addic 4, 3, 5056
  013b974  lfs 2, 68(25)
  013b978  lis 3, 150
  013b97c  lfs 3, 72(25)
  013b980  lfs 4, 76(25)
  013b984  lfs 5, 80(25)
  013b988  addic 5, 3, -12416
  013b98c  stfs 1, 320(4)
  013b990  ori 3, 28, 0
  013b994  stfs 2, 324(4)
  013b998  stfs 3, 328(4)
  013b99c  stfs 4, 332(4)
  013b9a0  lfs 1, 84(25)
  013b9a4  stfs 5, 336(4)
  013b9a8  lfs 2, 88(25)
  013b9ac  stfs 1, 340(4)
  013b9b0  lfs 1, 92(25)
  013b9b4  stfs 2, 344(4)
  013b9b8  lfs 2, 228(25)
  013b9bc  stfs 1, 348(4)
  013b9c0  stfs 2, 176(5)
  013b9c4  bl 0xc8820
  013b9c8  nop
  013b9cc  lwz 3, 316(25)
  013b9d0  cmpwi 3, 0
  013b9d4  bt 2, 0x13b9f8
  013b9d8  lis 4, 165
  013b9dc  li 5, -1
  013b9e0  extsw 3, 3
  013b9e4  stw 5, -9496(4)
  013b9e8  lwz 4, 320(25)
  013b9ec  extsw 4, 4
  013b9f0  bl 0xe0854
  013b9f4  nop
  013b9f8  bl 0x678d8
  013b9fc  nop
  013ba00  lis 4, 161
  013ba04  li 5, 1
  013ba08  lwz 3, 12(25)
  013ba0c  stw 28, 260(25)
  013ba10  stw 28, 264(25)
  013ba14  cmpwi 3, 2
  013ba18  stw 5, 1820(4)
  013ba1c  stw 28, 256(25)
  013ba20  stw 28, 16(25)
  013ba24  bf 2, 0x13ba5c
  013ba28  lis 3, 162
  013ba2c  lis 4, 101
  013ba30  addic 31, 3, 1216
  013ba34  addic 3, 4, 13504
  013ba38  lwz 4, 548(31)
  013ba3c  extsw 4, 4
  013ba40  bl 0x5cd098
  013ba44  nop
  013ba48  lwz 3, 548(31)
  013ba4c  extsw 3, 3
  013ba50  bl 0x15e8a0
  013ba54  nop
  013ba58  b 0x13bc60
  013ba5c  cmpwi 3, 3
  013ba60  bf 2, 0x13bac4
  013ba64  lis 3, 151
  013ba68  lis 4, 20
  013ba6c  li 5, 2
  013ba70  addi 4, 4, -18384
  013ba74  lis 7, 114
  013ba78  lwz 6, -25388(3)
  013ba7c  stw 5, -25388(3)
  013ba80  stw 6, 300(25)
  013ba84  lfs 1, 0(4)
  013ba88  lfs 2, -3056(7)
  013ba8c  fmuls 1, 2, 1
  013ba90  fctiwz 1, 1
  013ba94  stfd 1, 112(1)
  013ba98  lwz 3, 116(1)
  013ba9c  extsw 3, 3
  013baa0  bl 0x6dad0
  013baa4  nop
  013baa8  lis 4, 161
  013baac  lwz 3, 224(25)
  013bab0  extsw 3, 3
  013bab4  stw 28, 1800(4)
  013bab8  bl 0x168dec
  013babc  nop
  013bac0  b 0x13bc60
  013bac4  cmpwi 3, 4
  013bac8  bf 2, 0x13bb2c
  013bacc  lis 3, 151
  013bad0  lis 4, 20
  013bad4  li 5, 1
  013bad8  addi 4, 4, -18384
  013badc  lis 7, 114
  013bae0  lwz 6, -25388(3)
  013bae4  stw 5, -25388(3)
  013bae8  stw 6, 300(25)
  013baec  lfs 1, 0(4)
  013baf0  lfs 2, -3056(7)
  013baf4  fmuls 1, 2, 1
  013baf8  fctiwz 1, 1
  013bafc  stfd 1, 112(1)
  013bb00  lwz 3, 116(1)
  013bb04  extsw 3, 3
  013bb08  bl 0x6dad0
  013bb0c  nop
  013bb10  lis 4, 161
  013bb14  lwz 3, 224(25)
  013bb18  extsw 3, 3
  013bb1c  stw 28, 1800(4)
  013bb20  bl 0x169268
  013bb24  nop
  013bb28  b 0x13bc60
  013bb2c  cmpwi 3, 6
  013bb30  bf 2, 0x13bb94
  013bb34  lis 3, 151
  013bb38  lis 4, 20
  013bb3c  li 5, 1
  013bb40  addi 4, 4, -18384
  013bb44  lis 7, 114
  013bb48  lwz 6, -25388(3)
  013bb4c  stw 5, -25388(3)
  013bb50  stw 6, 300(25)
  013bb54  lfs 1, 0(4)
  013bb58  lfs 2, -3056(7)
  013bb5c  fmuls 1, 2, 1
  013bb60  fctiwz 1, 1
  013bb64  stfd 1, 112(1)
  013bb68  lwz 3, 116(1)
  013bb6c  extsw 3, 3
  013bb70  bl 0x6dad0
  013bb74  nop
  013bb78  lis 4, 161
  013bb7c  lwz 3, 224(25)
  013bb80  extsw 3, 3
  013bb84  stw 28, 1800(4)
  013bb88  bl 0x16910c
  013bb8c  nop
  013bb90  b 0x13bc60
  013bb94  cmpwi 3, 5
  013bb98  bf 2, 0x13bc00
  013bb9c  lis 3, 151
  013bba0  lis 4, 20
  013bba4  li 5, 1
  013bba8  addi 4, 4, -18384
  013bbac  lis 7, 114
  013bbb0  lwz 6, -25388(3)
  013bbb4  stw 5, -25388(3)
  013bbb8  stw 6, 300(25)
  013bbbc  lfs 1, 0(4)
  013bbc0  lfs 2, -3056(7)
  013bbc4  fmuls 1, 2, 1
  013bbc8  fctiwz 1, 1
  013bbcc  stfd 1, 112(1)
  013bbd0  lwz 3, 116(1)
  013bbd4  extsw 3, 3
  013bbd8  bl 0x6dad0
  013bbdc  nop
  013bbe0  lis 5, 161
  013bbe4  lwz 3, 224(25)
  013bbe8  ori 4, 28, 0
  013bbec  extsw 3, 3
  013bbf0  stw 28, 1800(5)
  013bbf4  bl 0x167e60
  013bbf8  nop
  013bbfc  b 0x13bc60
  013bc00  cmpwi 3, 7
  013bc04  bf 2, 0x13bc58
  013bc08  lis 3, 151
  013bc0c  lis 4, 20
  013bc10  lis 5, 114
  013bc14  addi 4, 4, -18384
  013bc18  lwz 3, -25388(3)
  013bc1c  stw 3, 300(25)
  013bc20  lfs 1, 0(4)
  013bc24  lfs 2, -3056(5)
  013bc28  fmuls 1, 2, 1
  013bc2c  fctiwz 1, 1
  013bc30  stfd 1, 112(1)
  013bc34  lwz 3, 116(1)
  013bc38  extsw 3, 3
  013bc3c  bl 0x6dad0
  013bc40  nop
  013bc44  lis 3, 161
  013bc48  stw 28, 1800(3)
  013bc4c  bl 0x1698a0
  013bc50  nop
  013bc54  b 0x13bc60
  013bc58  lis 3, 161
  013bc5c  stw 28, 1800(3)
  013bc60  li 3, 29
  013bc64  bl 0x60bb90
  013bc68  nop
  013bc6c  lwz 3, 12(25)
  013bc70  cmpwi 3, 2
  013bc74  bt 2, 0x13bc80
  013bc78  bl 0x11ce64
  013bc7c  nop
  013bc80  bl 0x505d20
  013bc84  nop
  013bc88  bl 0x15be68
  013bc8c  nop
  013bc90  b 0x13c5ac
  013bc94  cmpwi 3, 0
  013bc98  bt 2, 0x13bcc0
  013bc9c  bt 6, 0x13bcc0
  013bca0  bt 26, 0x13bcc0
  013bca4  bt 30, 0x13bcc0
  013bca8  cmpwi 3, 33
  013bcac  bt 2, 0x13bcc0
  013bcb0  cmpwi 3, 45
  013bcb4  bt 2, 0x13bcc0
  013bcb8  cmpwi 3, 35
  013bcbc  bf 2, 0x13bcc4
  013bcc0  bl 0x13b108
  013bcc4  lis 5, 150
  013bcc8  addic 5, 5, 19008
  013bccc  lwz 3, 192(5)
  013bcd0  rlwinm 4, 3, 0, 30, 30
  013bcd4  cmpwi 4, 0
  013bcd8  bt 2, 0x13becc
  013bcdc  rlwinm 4, 3, 0, 29, 29
  013bce0  cmpwi 4, 0
  013bce4  bt 2, 0x13becc
  013bce8  rlwinm 4, 3, 0, 28, 28
  013bcec  cmpwi 4, 0
  013bcf0  bf 2, 0x13becc
  013bcf4  clrlwi 3, 3, 31
  013bcf8  cmpwi 3, 0
  013bcfc  bf 2, 0x13becc
  013bd00  lis 3, 0
  013bd04  lwz 5, 196(5)
  013bd08  ori 3, 3, 61600
  013bd0c  and 3, 5, 3
  013bd10  cmpwi 3, 0
  013bd14  bt 2, 0x13bed4
  013bd18  lis 4, 165
  013bd1c  lwz 3, 13504(4)
  013bd20  cmpwi 3, 20
  013bd24  bf 0, 0x13bed4
  013bd28  rlwinm 6, 5, 0, 19, 19
  013bd2c  ori 3, 28, 0
  013bd30  cmpwi 6, 0
  013bd34  bf 2, 0x13bd7c
  013bd38  rlwinm 6, 5, 0, 17, 17
  013bd3c  li 3, 1
  013bd40  cmpwi 6, 0
  013bd44  bf 2, 0x13bd7c
  013bd48  rlwinm 6, 5, 0, 16, 16
  013bd4c  li 3, 2
  013bd50  cmpwi 6, 0
  013bd54  bf 2, 0x13bd7c
  013bd58  rlwinm 6, 5, 0, 18, 18
  013bd5c  li 3, 3
  013bd60  cmpwi 6, 0
  013bd64  bf 2, 0x13bd7c
  013bd68  rlwinm 5, 5, 0, 24, 24
  013bd6c  li 3, 5
  013bd70  cmpwi 5, 0
  013bd74  bt 2, 0x13bd7c
  013bd78  li 3, 4
  013bd7c  lis 5, 165
  013bd80  ori 6, 3, 0
  013bd84  addic 3, 5, 13508
  013bd88  lwz 5, 13504(4)
  013bd8c  slwi 7, 5, 1
  013bd90  addic 5, 5, 1
  013bd94  extsw 7, 7
  013bd98  cmpwi 5, 20
  013bd9c  stw 5, 13504(4)
  013bda0  sthx 6, 3, 7
  013bda4  bf 2, 0x13bed4
  013bda8  li 5, 2
  013bdac  li 4, -1
  013bdb0  ori 7, 28, 0
  013bdb4  li 6, 1
  013bdb8  ori 8, 7, 0
  013bdbc  lis 10, 115
  013bdc0  addic 7, 8, 1
  013bdc4  mullw 9, 5, 7
  013bdc8  slwi 8, 8, 1
  013bdcc  clrlwi 9, 9, 24
  013bdd0  extsw 8, 8
  013bdd4  addic 10, 10, 5528
  013bdd8  lhzx 8, 3, 8
  013bddc  lbzx 9, 10, 9
  013bde0  extsh 8, 8
  013bde4  cmpw 8, 9
  013bde8  bt 2, 0x13bdf4
  013bdec  ori 6, 28, 0
  013bdf0  b 0x13be00
  013bdf4  extsw 7, 7
  013bdf8  cmpwi 7, 20
  013bdfc  bt 0, 0x13bdb8
  013be00  cmpwi 6, 0
  013be04  bt 2, 0x13be14
  013be08  addic 4, 5, -2
  013be0c  extsw 4, 4
  013be10  b 0x13be24
  013be14  addic 5, 5, 1
  013be18  extsw 5, 5
  013be1c  cmpwi 5, 147
  013be20  bt 0, 0x13bdb0
  013be24  cmpwi 4, -1
  013be28  cmpwi 1, 4, 37
  013be2c  bt 2, 0x13bed4
  013be30  addic 3, 4, -36
  013be34  extsw 3, 3
  013be38  addic 5, 3, -19
  013be3c  cmpwi 6, 3, 0
  013be40  extsw 5, 5
  013be44  cmpwi 7, 3, 19
  013be48  addic 6, 5, -6
  013be4c  extsw 6, 6
  013be50  bf 4, 0x13be74
  013be54  lis 3, 151
  013be58  lis 5, 151
  013be5c  addic 3, 3, -16064
  013be60  li 6, 1
  013be64  addic 5, 5, -16027
  013be68  stbx 6, 3, 4
  013be6c  stbx 6, 5, 4
  013be70  b 0x13bed4
  013be74  bf 25, 0x13be88
  013be78  bf 28, 0x13be88
  013be7c  bl 0x112c20
  013be80  nop
  013be84  b 0x13bed4
  013be88  cmpwi 5, -1
  013be8c  bf 1, 0x13beac
  013be90  cmpwi 5, 6
  013be94  bf 0, 0x13beac
  013be98  lis 3, 151
  013be9c  li 4, 1
  013bea0  addic 3, 3, -16400
  013bea4  stbx 4, 3, 5
  013bea8  b 0x13bed4
  013beac  cmpwi 6, -1
  013beb0  bf 1, 0x13bed4
  013beb4  cmpwi 6, 30
  013beb8  bf 0, 0x13bed4
  013bebc  ori 3, 6, 0
  013bec0  bl 0x11b728
  013bec4  nop
  013bec8  b 0x13bed4
  013becc  lis 3, 165
  013bed0  stw 28, 13504(3)
  013bed4  lwz 3, 11184(26)
  013bed8  cmpwi 3, 1
  013bedc  bf 2, 0x13bf7c
  013bee0  lwz 3, 20(25)
  013bee4  ori 4, 28, 0
  013bee8  cmpwi 3, 0
  013beec  bf 1, 0x13bef4
  013bef0  addic 4, 3, -1
  013bef4  cmpwi 4, 0
  013bef8  stw 4, 20(25)
  013befc  bf 2, 0x13c1b0
  013bf00  lwz 3, 8(25)
  013bf04  stw 28, 8(25)
  013bf08  ori 31, 28, 0
  013bf0c  stw 3, 4(25)
  013bf10  lwz 3, 60(3)
  013bf14  stw 3, 11184(26)
  013bf18  lwz 4, 4(25)
  013bf1c  slwi 3, 31, 2
  013bf20  addic 4, 4, 68
  013bf24  addc 3, 4, 3
  013bf28  clrldi 3, 3, 32
  013bf2c  lwz 4, 0(3)
  013bf30  cmpwi 4, 0
  013bf34  bt 2, 0x13bf6c
  013bf38  lwz 4, 0(3)
  013bf3c  lwz 4, 8(4)
  013bf40  cmpwi 4, 0
  013bf44  bt 2, 0x13bf6c
  013bf48  lwz 3, 0(3)
  013bf4c  std 2, 40(1)
  013bf50  ori 4, 28, 0
  013bf54  lwz 5, 8(3)
  013bf58  lwz 6, 0(5)
  013bf5c  lwz 2, 4(5)
  013bf60  mtctr 6
  013bf64  bcctrl 20, 30
  013bf68  ld 2, 40(1)
  013bf6c  addic 31, 31, 1
  013bf70  cmpwi 31, 14
  013bf74  bt 0, 0x13bf18
  013bf78  b 0x13c1b0
  013bf7c  lwz 3, 8(25)
  013bf80  cmpwi 3, 0
  013bf84  bt 2, 0x13c1b0
  013bf88  lwz 4, 4(25)
  013bf8c  cmpw 4, 3
  013bf90  bf 2, 0x13bfb0
  013bf94  lis 5, 165
  013bf98  li 3, 3
  013bf9c  li 4, 17
  013bfa0  lwz 5, 11616(5)
  013bfa4  bl 0x15d12c
  013bfa8  nop
  013bfac  b 0x13bfc8
  013bfb0  lis 5, 165
  013bfb4  li 3, 4
  013bfb8  li 4, 17
  013bfbc  lwz 5, 11616(5)
  013bfc0  bl 0x15d12c
  013bfc4  nop
  013bfc8  ori 31, 28, 0
  013bfcc  ori 30, 31, 0
  013bfd0  lwz 3, 4(25)
  013bfd4  addic 3, 3, 68
  013bfd8  addc 3, 3, 30
  013bfdc  clrldi 3, 3, 32
  013bfe0  lwz 4, 0(3)
  013bfe4  cmpwi 4, 0
  013bfe8  bt 2, 0x13c020
  013bfec  lwz 4, 0(3)
  013bff0  lwz 4, 12(4)
  013bff4  cmpwi 4, 0
  013bff8  bt 2, 0x13c020
  013bffc  lwz 3, 0(3)
  013c000  ori 4, 28, 0
  013c004  std 2, 40(1)
  013c008  lwz 5, 12(3)
  013c00c  lwz 6, 0(5)
  013c010  lwz 2, 4(5)
  013c014  mtctr 6
  013c018  bcctrl 20, 30
  013c01c  ld 2, 40(1)
  013c020  addic 31, 31, 1
  013c024  addic 30, 30, 4
  013c028  cmpwi 31, 14
  013c02c  bt 0, 0x13bfd0
  013c030  lwz 3, 4(25)
  013c034  lwz 4, 8(25)
  013c038  cmpw 3, 4
  013c03c  lwz 5, 56(3)
  013c040  subc 4, 4, 5
  013c044  cntlzw 31, 4
  013c048  rlwinm 31, 31, 27, 24, 31
  013c04c  bf 2, 0x13c0c4
  013c050  lis 4, 115
  013c054  addic 4, 4, -5176
  013c058  cmpw 3, 4
  013c05c  bt 2, 0x13c0c4
  013c060  lis 4, 115
  013c064  addic 4, 4, -2200
  013c068  cmpw 3, 4
  013c06c  bt 2, 0x13c0c4
  013c070  lis 4, 115
  013c074  addic 4, 4, -1420
  013c078  cmpw 3, 4
  013c07c  bt 2, 0x13c0c4
  013c080  lis 4, 115
  013c084  addic 4, 4, -9096
  013c088  cmpw 3, 4
  013c08c  bt 2, 0x13c0c4
  013c090  lis 4, 115
  013c094  addic 4, 4, -3248
  013c098  cmpw 3, 4
  013c09c  bt 2, 0x13c0c4
  013c0a0  lis 4, 115
  013c0a4  addic 4, 4, -7968
  013c0a8  cmpw 3, 4
  013c0ac  bt 2, 0x13c0c4
  013c0b0  lwz 3, 11184(26)
  013c0b4  cmpwi 3, 35
  013c0b8  bt 2, 0x13c0c4
  013c0bc  cntlzw 31, 31
  013c0c0  rlwinm 31, 31, 27, 24, 31
  013c0c4  ori 30, 28, 0
  013c0c8  ori 29, 30, 0
  013c0cc  lwz 3, 8(25)
  013c0d0  cmpwi 1, 31, 0
  013c0d4  addic 4, 3, 68
  013c0d8  addc 4, 4, 29
  013c0dc  clrldi 4, 4, 32
  013c0e0  lwz 5, 0(4)
  013c0e4  cmpwi 5, 0
  013c0e8  bt 2, 0x13c100
  013c0ec  lis 5, 165
  013c0f0  lwz 4, 0(4)
  013c0f4  addic 5, 5, 11616
  013c0f8  lwzx 5, 5, 29
  013c0fc  stw 5, 20(4)
  013c100  bt 6, 0x13c158
  013c104  lis 3, 165
  013c108  addic 27, 3, 11616
  013c10c  lwz 3, 4(25)
  013c110  lwzx 5, 27, 29
  013c114  lwzx 4, 3, 29
  013c118  extsw 4, 4
  013c11c  lwz 3, 36(5)
  013c120  slwi 6, 4, 2
  013c124  addic 3, 3, 72
  013c128  addc 3, 3, 6
  013c12c  clrldi 6, 3, 32
  013c130  ori 3, 5, 0
  013c134  lwz 5, 0(6)
  013c138  lbz 5, 16(5)
  013c13c  addic 5, 5, -1
  013c140  bl 0xfdcf0
  013c144  nop
  013c148  lwzx 4, 27, 29
  013c14c  lis 3, -16512
  013c150  stw 3, 88(4)
  013c154  b 0x13c184
  013c158  lis 4, 165
  013c15c  ori 5, 28, 0
  013c160  addic 27, 4, 11616
  013c164  lwzx 4, 3, 29
  013c168  extsw 4, 4
  013c16c  lwzx 3, 27, 29
  013c170  bl 0xfdcf0
  013c174  nop
  013c178  lwzx 3, 27, 29
  013c17c  lis 4, 16256
  013c180  stw 4, 88(3)
  013c184  addic 30, 30, 1
  013c188  addic 29, 29, 4
  013c18c  cmpwi 30, 14
  013c190  bt 0, 0x13c0cc
  013c194  li 3, 1
  013c198  li 4, 12
  013c19c  stw 3, 11184(26)
  013c1a0  lwz 3, 4(25)
  013c1a4  stw 4, 20(25)
  013c1a8  stw 3, 208(25)
  013c1ac  stw 28, 4(25)
  013c1b0  lwz 29, 4(25)
  013c1b4  cmpwi 29, 0
  013c1b8  bt 2, 0x13c2c0
  013c1bc  addic 31, 29, 68
  013c1c0  ori 30, 28, 0
  013c1c4  cmpwi 31, 0
  013c1c8  bt 2, 0x13c228
  013c1cc  lwz 3, 68(29)
  013c1d0  cmpwi 3, 0
  013c1d4  bt 2, 0x13c228
  013c1d8  lwz 4, 0(3)
  013c1dc  cmpwi 4, 0
  013c1e0  bt 2, 0x13c228
  013c1e4  lwz 4, 0(3)
  013c1e8  std 2, 40(1)
  013c1ec  lwz 5, 0(4)
  013c1f0  lwz 2, 4(4)
  013c1f4  mtctr 5
  013c1f8  bcctrl 20, 30
  013c1fc  cmpwi 3, 0
  013c200  ld 2, 40(1)
  013c204  bt 2, 0x13c228
  013c208  lwz 3, 11184(26)
  013c20c  li 4, 1
  013c210  cmpwi 3, 15
  013c214  bt 2, 0x13c220
  013c218  cmpwi 3, 16
  013c21c  bf 2, 0x13c224
  013c220  li 4, 2
  013c224  stw 4, 12(25)
  013c228  addic 30, 30, 1
  013c22c  addic 29, 29, 4
  013c230  cmpwi 30, 14
  013c234  bt 0, 0x13c1c4
  013c238  lwz 3, 4(25)
  013c23c  cmpwi 3, 0
  013c240  bt 2, 0x13c2c0
  013c244  lwz 4, 128(3)
  013c248  cmpwi 4, 0
  013c24c  bt 2, 0x13c2c0
  013c250  lwz 3, 64(3)
  013c254  lwz 4, 12(3)
  013c258  cmpwi 4, 0
  013c25c  bt 2, 0x13c280
  013c260  lwz 5, 12(3)
  013c264  std 2, 40(1)
  013c268  li 4, 1
  013c26c  lwz 6, 0(5)
  013c270  lwz 2, 4(5)
  013c274  mtctr 6
  013c278  bcctrl 20, 30
  013c27c  ld 2, 40(1)
  013c280  lwz 3, 4(25)
  013c284  lwz 4, 128(3)
  013c288  stw 4, 64(3)
  013c28c  stw 28, 128(3)
  013c290  lwz 3, 64(3)
  013c294  lwz 4, 8(3)
  013c298  cmpwi 4, 0
  013c29c  bt 2, 0x13c2c0
  013c2a0  lwz 5, 8(3)
  013c2a4  std 2, 40(1)
  013c2a8  li 4, 1
  013c2ac  lwz 6, 0(5)
  013c2b0  lwz 2, 4(5)
  013c2b4  mtctr 6
  013c2b8  bcctrl 20, 30
  013c2bc  ld 2, 40(1)
  013c2c0  bl 0xfc168
  013c2c4  nop
  013c2c8  bl 0x15be68
  013c2cc  nop
  013c2d0  lwz 3, 12(25)
  013c2d4  cmpwi 3, 0
  013c2d8  bt 2, 0x13c5ac
  013c2dc  lwz 3, 268(25)
  013c2e0  cmpwi 3, 10
  013c2e4  bt 0, 0x13c5ac
  013c2e8  li 24, 1
  013c2ec  ori 3, 24, 0
  013c2f0  bl 0x174cf4
  013c2f4  nop
  013c2f8  bl 0x174c24
  013c2fc  nop
  013c300  lwz 3, 4(25)
  013c304  cmpwi 3, 0
  013c308  bt 2, 0x13c378
  013c30c  ori 31, 28, 0
  013c310  ori 30, 31, 0
  013c314  lwz 3, 4(25)
  013c318  addic 3, 3, 68
  013c31c  addc 3, 3, 30
  013c320  clrldi 3, 3, 32
  013c324  lwz 4, 0(3)
  013c328  cmpwi 4, 0
  013c32c  bt 2, 0x13c364
  013c330  lwz 4, 0(3)
  013c334  lwz 4, 12(4)
  013c338  cmpwi 4, 0
  013c33c  bt 2, 0x13c364
  013c340  lwz 3, 0(3)
  013c344  std 2, 40(1)
  013c348  ori 4, 28, 0
  013c34c  lwz 5, 12(3)
  013c350  lwz 6, 0(5)
  013c354  lwz 2, 4(5)
  013c358  mtctr 6
  013c35c  bcctrl 20, 30
  013c360  ld 2, 40(1)
  013c364  addic 31, 31, 1
  013c368  addic 30, 30, 4
  013c36c  cmpwi 31, 14
  013c370  bt 0, 0x13c314
  013c374  stw 28, 4(25)
  013c378  ori 3, 28, 0
  013c37c  ori 7, 25, 0
  013c380  ori 5, 3, 0
  013c384  lis 4, 151
  013c388  lwz 8, 48(7)
  013c38c  addic 6, 25, 48
  013c390  addic 4, 4, -25476
  013c394  lwzx 4, 4, 5
  013c398  cmpw 4, 8
  013c39c  bt 2, 0x13c3c0
  013c3a0  lwzx 8, 6, 5
  013c3a4  li 4, 38
  013c3a8  cmpwi 8, 0
  013c3ac  bt 2, 0x13c3b4
  013c3b0  lwzx 4, 6, 5
  013c3b4  lis 6, 151
  013c3b8  addic 6, 6, -17000
  013c3bc  stwx 4, 6, 5
  013c3c0  addic 3, 3, 1
  013c3c4  addic 7, 7, 4
  013c3c8  cmpwi 3, 4
  013c3cc  addic 5, 5, 4
  013c3d0  bt 0, 0x13c384
  013c3d4  lis 3, 150
  013c3d8  lwz 4, 24(25)
  013c3dc  ori 30, 28, 0
  013c3e0  ori 27, 30, 0
  013c3e4  stw 4, 27348(3)
  013c3e8  lis 31, 165
  013c3ec  addic 31, 31, 11616
  013c3f0  lwzx 29, 31, 27
  013c3f4  cmpwi 29, 0
  013c3f8  bt 2, 0x13c420
  013c3fc  ori 3, 29, 0
  013c400  bl 0xefb38
  013c404  nop
  013c408  lis 3, 161
  013c40c  lwz 3, 1808(3)
  013c410  extsw 3, 3
  013c414  std 3, 56(29)
  013c418  ori 29, 28, 0
  013c41c  b 0x13c420
  013c420  addic 30, 30, 1
  013c424  stwx 29, 31, 27
  013c428  addic 27, 27, 4
  013c42c  cmpwi 30, 14
  013c430  bt 0, 0x13c3e8
  013c434  bl 0xc8578
  013c438  nop
  013c43c  lis 4, 20
  013c440  lis 31, 114
  013c444  addi 4, 4, -18384
  013c448  lfs 31, 4(4)
  013c44c  lfs 1, -3056(31)
  013c450  fmuls 1, 1, 31
  013c454  fctiwz 1, 1
  013c458  stfd 1, 112(1)
  013c45c  lwz 4, 116(1)
  013c460  extsw 4, 4
  013c464  bl 0xc90a0
  013c468  nop
  013c46c  li 30, 2
  013c470  lis 5, 112
  013c474  lis 9, 152
  013c478  lis 6, 112
  013c47c  lis 7, 112
  013c480  lis 8, 151
  013c484  li 4, 30030
  013c488  addic 5, 5, 22544
  013c48c  ori 9, 9, 38527
  013c490  ori 3, 30, 0
  013c494  addic 6, 6, 22552
  013c498  addic 7, 7, 22560
  013c49c  addic 8, 8, -25440
  013c4a0  bl 0xc8444
  013c4a4  nop
  013c4a8  lfs 1, -3056(31)
  013c4ac  fmuls 1, 1, 31
  013c4b0  fctiwz 1, 1
  013c4b4  stfd 1, 112(1)
  013c4b8  lwz 4, 116(1)
  013c4bc  extsw 4, 4
  013c4c0  bl 0xc90a0
  013c4c4  nop
  013c4c8  li 4, 20
  013c4cc  stw 30, 20(25)
  013c4d0  lis 3, 163
  013c4d4  stw 4, 11184(26)
  013c4d8  lwz 26, 204(25)
  013c4dc  lwz 4, 19456(3)
  013c4e0  lbz 4, 12(4)
  013c4e4  cmpw 26, 4
  013c4e8  bf 0, 0x13c51c
  013c4ec  slwi 4, 26, 2
  013c4f0  lwz 5, 19456(3)
  013c4f4  addic 26, 26, 1
  013c4f8  addic 5, 5, 72
  013c4fc  addc 5, 5, 4
  013c500  addic 4, 4, 4
  013c504  clrldi 5, 5, 32
  013c508  stw 28, 0(5)
  013c50c  lwz 5, 19456(3)
  013c510  lbz 5, 12(5)
  013c514  cmpw 26, 5
  013c518  bt 0, 0x13c4f0
  013c51c  lis 4, 161
  013c520  lwz 3, 19456(3)
  013c524  lis 5, 161
  013c528  addic 4, 4, 2368
  013c52c  lwz 6, 204(25)
  013c530  stb 6, 12(3)
  013c534  lwz 3, 16(4)
  013c538  stw 24, 1820(5)
  013c53c  clrlwi 3, 3, 1
  013c540  stw 3, 16(4)
  013c544  bl 0x174cf0
  013c548  nop
  013c54c  ori 3, 24, 0
  013c550  bl 0x174cf4
  013c554  nop
  013c558  lis 4, 144
  013c55c  lis 3, 165
  013c560  lis 5, 165
  013c564  lis 6, 165
  013c568  lwz 4, -23196(4)
  013c56c  lwz 7, 11876(3)
  013c570  lfs 1, 13476(5)
  013c574  lwz 6, 11880(6)
  013c578  stfs 1, 6776(4)
  013c57c  cmpw 7, 6
  013c580  stw 28, 13476(5)
  013c584  bt 2, 0x13c5ac
  013c588  lis 4, 144
  013c58c  lwz 3, 11876(3)
  013c590  lis 5, 165
  013c594  lwz 6, -23196(4)
  013c598  stw 3, 11880(5)
  013c59c  extsw 4, 3
  013c5a0  ori 3, 6, 0
  013c5a4  bl 0x4d6f50
  013c5a8  nop
  013c5ac  ld 0, 224(1)
  013c5b0  mtlr 0
  013c5b4  lfd 31, 200(1)
  013c5b8  ld 24, 136(1)
  013c5bc  ld 25, 144(1)
  013c5c0  ld 26, 152(1)
  013c5c4  ld 27, 160(1)
  013c5c8  ld 28, 168(1)
  013c5cc  ld 29, 176(1)
  013c5d0  ld 30, 184(1)
  013c5d4  ld 31, 192(1)
  013c5d8  addi 1, 1, 208
  013c5dc  blr

DrawTVTextures:   # 0x13c5e8, 0x47c bytes
  013c5e8  stdu 1, -256(1)
  013c5ec  mflr 0
  013c5f0  std 0, 272(1)
  013c5f4  std 31, 248(1)
  013c5f8  std 30, 240(1)
  013c5fc  std 29, 232(1)
  013c600  std 28, 224(1)
  013c604  std 27, 216(1)
  013c608  std 26, 208(1)
  013c60c  std 25, 200(1)
  013c610  std 24, 192(1)
  013c614  std 23, 184(1)
  013c618  std 22, 176(1)
  013c61c  std 21, 168(1)
  013c620  std 20, 160(1)
  013c624  std 19, 152(1)
  013c628  cmpwi 3, 0
  013c62c  bt 2, 0x13ca20
  013c630  lwz 31, 120(3)
  013c634  cmpwi 31, 0
  013c638  bt 2, 0x13ca20
  013c63c  lwz 30, 80(31)
  013c640  lwz 29, 84(31)
  013c644  lwz 28, 88(31)
  013c648  extsw 30, 30
  013c64c  lwz 27, 92(31)
  013c650  extsw 29, 29
  013c654  cmpwi 30, 512
  013c658  extsw 28, 28
  013c65c  extsw 27, 27
  013c660  bf 0, 0x13ca20
  013c664  addc 3, 28, 30
  013c668  cmpwi 3, 0
  013c66c  bt 0, 0x13ca20
  013c670  lis 4, 150
  013c674  li 3, 416
  013c678  lwz 4, 27372(4)
  013c67c  cmpwi 4, 0
  013c680  bt 2, 0x13c688
  013c684  li 3, 448
  013c688  cmpw 29, 3
  013c68c  bt 1, 0x13ca20
  013c690  addc 3, 27, 29
  013c694  cmpwi 3, 0
  013c698  bt 0, 0x13ca20
  013c69c  li 24, 0
  013c6a0  li 21, 6
  013c6a4  ori 3, 24, 0
  013c6a8  ori 4, 24, 0
  013c6ac  ori 5, 24, 0
  013c6b0  ori 8, 24, 0
  013c6b4  ori 6, 24, 0
  013c6b8  ori 7, 24, 0
  013c6bc  bl 0x502f08
  013c6c0  nop
  013c6c4  ori 4, 3, 0
  013c6c8  ori 3, 21, 0
  013c6cc  bl 0x174f80
  013c6d0  nop
  013c6d4  li 25, 1
  013c6d8  li 26, 3
  013c6dc  ori 22, 25, 0
  013c6e0  li 23, 128
  013c6e4  ori 3, 24, 0
  013c6e8  ori 4, 22, 0
  013c6ec  ori 20, 26, 0
  013c6f0  ori 5, 24, 0
  013c6f4  ori 6, 22, 0
  013c6f8  ori 7, 23, 0
  013c6fc  bl 0x502ea8
  013c700  nop
  013c704  ori 4, 3, 0
  013c708  ori 3, 20, 0
  013c70c  bl 0x174f80
  013c710  nop
  013c714  lis 3, 0
  013c718  li 4, 7
  013c71c  ori 3, 3, 59806
  013c720  bl 0xca3e4
  013c724  nop
  013c728  slwi 4, 30, 4
  013c72c  slwi 5, 29, 4
  013c730  slwi 6, 28, 4
  013c734  slwi 7, 27, 4
  013c738  extsw 4, 4
  013c73c  ori 8, 23, 0
  013c740  extsw 5, 5
  013c744  extsw 6, 6
  013c748  extsw 7, 7
  013c74c  bl 0xca0f4
  013c750  nop
  013c754  lwz 3, 72(31)
  013c758  cmpwi 3, 0
  013c75c  bt 2, 0x13c878
  013c760  lwz 4, 76(31)
  013c764  li 24, 200
  013c768  addic 4, 4, 2
  013c76c  ori 3, 24, 0
  013c770  stw 4, 76(31)
  013c774  bl 0xfc620
  013c778  nop
  013c77c  ori 23, 3, 0
  013c780  ori 3, 24, 0
  013c784  bl 0xfc620
  013c788  nop
  013c78c  lwz 4, 76(31)
  013c790  ori 24, 3, 0
  013c794  addic 3, 4, -128
  013c798  extsw 3, 3
  013c79c  bl 0x5c4988
  013c7a0  nop
  013c7a4  subfic 19, 3, 128
  013c7a8  li 3, 0
  013c7ac  ori 4, 3, 0
  013c7b0  ori 5, 3, 0
  013c7b4  ori 6, 3, 0
  013c7b8  ori 7, 3, 0
  013c7bc  ori 8, 3, 0
  013c7c0  bl 0x502f08
  013c7c4  nop
  013c7c8  ori 4, 3, 0
  013c7cc  ori 3, 21, 0
  013c7d0  bl 0x174f80
  013c7d4  nop
  013c7d8  sldi 4, 19, 1
  013c7dc  li 3, 128
  013c7e0  cmpwi 4, 128
  013c7e4  bt 1, 0x13c7ec
  013c7e8  ori 3, 4, 0
  013c7ec  li 4, 2
  013c7f0  clrldi 7, 3, 32
  013c7f4  li 3, 0
  013c7f8  ori 5, 4, 0
  013c7fc  ori 6, 25, 0
  013c800  bl 0x502ea8
  013c804  nop
  013c808  ori 4, 3, 0
  013c80c  ori 3, 26, 0
  013c810  bl 0x174f80
  013c814  nop
  013c818  lis 4, 128
  013c81c  li 3, 26
  013c820  ori 26, 4, 32896
  013c824  bl 0x685c4
  013c828  nop
  013c82c  ori 11, 3, 0
  013c830  std 26, 112(1)
  013c834  ori 3, 30, 0
  013c838  ori 8, 24, 0
  013c83c  ori 9, 28, 0
  013c840  std 11, 120(1)
  013c844  ori 4, 29, 0
  013c848  ori 10, 27, 0
  013c84c  ori 5, 28, 0
  013c850  ori 6, 27, 0
  013c854  ori 7, 23, 0
  013c858  bl 0x6a5c4
  013c85c  nop
  013c860  lwz 3, 76(31)
  013c864  cmpwi 3, 255
  013c868  bf 1, 0x13c898
  013c86c  li 3, 0
  013c870  stw 3, 72(31)
  013c874  b 0x13c898
  013c878  li 3, 2000
  013c87c  bl 0xfc620
  013c880  nop
  013c884  cmpwi 3, 0
  013c888  bf 2, 0x13c898
  013c88c  li 3, 0
  013c890  stw 3, 76(31)
  013c894  stw 25, 72(31)
  013c898  li 31, 0
  013c89c  ori 3, 31, 0
  013c8a0  ori 4, 31, 0
  013c8a4  ori 8, 31, 0
  013c8a8  ori 5, 31, 0
  013c8ac  ori 6, 31, 0
  013c8b0  ori 7, 31, 0
  013c8b4  bl 0x502f08
  013c8b8  nop
  013c8bc  ori 4, 3, 0
  013c8c0  ori 3, 21, 0
  013c8c4  bl 0x174f80
  013c8c8  nop
  013c8cc  ori 3, 31, 0
  013c8d0  ori 4, 22, 0
  013c8d4  li 7, 128
  013c8d8  ori 5, 31, 0
  013c8dc  ori 6, 22, 0
  013c8e0  bl 0x502ea8
  013c8e4  nop
  013c8e8  ori 4, 3, 0
  013c8ec  ori 3, 20, 0
  013c8f0  bl 0x174f80
  013c8f4  nop
  013c8f8  extsw 3, 27
  013c8fc  lis 4, 8224
  013c900  std 3, 128(1)
  013c904  lis 3, 20
  013c908  addi 3, 3, -14880
  013c90c  ori 26, 4, 8224
  013c910  lfs 1, 0(3)
  013c914  lfd 2, 128(1)
  013c918  li 3, 28
  013c91c  fcfid 2, 2
  013c920  frsp 2, 2
  013c924  fmuls 1, 2, 1
  013c928  fctiwz 1, 1
  013c92c  stfd 1, 128(1)
  013c930  lwz 4, 132(1)
  013c934  extsw 25, 4
  013c938  bl 0x685c4
  013c93c  nop
  013c940  ori 11, 3, 0
  013c944  std 26, 112(1)
  013c948  ori 8, 31, 0
  013c94c  ori 3, 30, 0
  013c950  ori 9, 28, 0
  013c954  ori 4, 29, 0
  013c958  std 11, 120(1)
  013c95c  ori 10, 25, 0
  013c960  ori 5, 28, 0
  013c964  ori 6, 27, 0
  013c968  ori 7, 31, 0
  013c96c  bl 0x6a5c4
  013c970  nop
  013c974  li 21, -2
  013c978  cmpwi 28, 75
  013c97c  ori 3, 21, 0
  013c980  bf 1, 0x13c988
  013c984  li 21, -1
  013c988  cmpwi 28, 150
  013c98c  bf 1, 0x13c994
  013c990  li 21, 0
  013c994  cmpwi 27, 75
  013c998  bf 1, 0x13c9a0
  013c99c  li 3, -1
  013c9a0  cmpwi 27, 150
  013c9a4  bf 1, 0x13c9ac
  013c9a8  li 3, 0
  013c9ac  addic 4, 30, 1
  013c9b0  lis 6, -32640
  013c9b4  extsw 30, 4
  013c9b8  addic 5, 29, 1
  013c9bc  addc 4, 28, 21
  013c9c0  ori 6, 6, 32896
  013c9c4  extsw 29, 5
  013c9c8  extsw 28, 4
  013c9cc  addc 5, 27, 3
  013c9d0  clrldi 4, 6, 32
  013c9d4  li 3, 25
  013c9d8  ori 26, 4, 0
  013c9dc  li 31, 62
  013c9e0  extsw 27, 5
  013c9e4  bl 0x685c4
  013c9e8  nop
  013c9ec  ori 11, 3, 0
  013c9f0  std 26, 112(1)
  013c9f4  ori 8, 22, 0
  013c9f8  ori 3, 30, 0
  013c9fc  ori 9, 31, 0
  013ca00  ori 4, 29, 0
  013ca04  ori 10, 31, 0
  013ca08  std 11, 120(1)
  013ca0c  ori 5, 28, 0
  013ca10  ori 6, 27, 0
  013ca14  ori 7, 22, 0
  013ca18  bl 0x6a5c4
  013ca1c  nop
  013ca20  ld 0, 272(1)
  013ca24  mtlr 0
  013ca28  ld 19, 152(1)
  013ca2c  ld 20, 160(1)
  013ca30  ld 21, 168(1)
  013ca34  ld 22, 176(1)
  013ca38  ld 23, 184(1)
  013ca3c  ld 24, 192(1)
  013ca40  ld 25, 200(1)
  013ca44  ld 26, 208(1)
  013ca48  ld 27, 216(1)
  013ca4c  ld 28, 224(1)
  013ca50  ld 29, 232(1)
  013ca54  ld 30, 240(1)
  013ca58  ld 31, 248(1)
  013ca5c  addi 1, 1, 256
  013ca60  blr

DrawPauseMenu:   # 0x13ca68, 0x7b0 bytes
  013ca68  stdu 1, -272(1)
  013ca6c  mflr 0
  013ca70  std 0, 288(1)
  013ca74  std 31, 264(1)
  013ca78  std 29, 248(1)
  013ca7c  li 31, 0
  013ca80  std 17, 152(1)
  013ca84  ori 29, 3, 0
  013ca88  std 30, 256(1)
  013ca8c  std 28, 240(1)
  013ca90  std 27, 232(1)
  013ca94  std 26, 224(1)
  013ca98  std 25, 216(1)
  013ca9c  std 24, 208(1)
  013caa0  std 23, 200(1)
  013caa4  std 22, 192(1)
  013caa8  std 21, 184(1)
  013caac  std 20, 176(1)
  013cab0  std 19, 168(1)
  013cab4  std 18, 160(1)
  013cab8  std 16, 144(1)
  013cabc  ori 17, 31, 0
  013cac0  bl 0x78100
  013cac4  nop
  013cac8  lis 3, 144
  013cacc  lis 4, 4
  013cad0  li 5, -256
  013cad4  ori 4, 4, 7564
  013cad8  lis 7, 4
  013cadc  lwz 6, -23532(3)
  013cae0  ori 7, 7, 7572
  013cae4  li 30, 1
  013cae8  lwz 8, 8(6)
  013caec  stw 4, 0(8)
  013caf0  lwz 4, 8(6)
  013caf4  stw 5, 4(4)
  013caf8  lwz 4, 8(6)
  013cafc  lis 5, 4
  013cb00  addic 4, 4, 8
  013cb04  ori 5, 5, 256
  013cb08  stw 4, 8(6)
  013cb0c  lwz 4, -23532(3)
  013cb10  lwz 3, 8(4)
  013cb14  stw 7, 0(3)
  013cb18  lwz 3, 8(4)
  013cb1c  stw 30, 4(3)
  013cb20  lwz 3, 8(4)
  013cb24  addic 3, 3, 8
  013cb28  stw 3, 8(4)
  013cb2c  stw 5, 0(3)
  013cb30  lwz 5, 8(4)
  013cb34  ori 3, 17, 0
  013cb38  stw 17, 4(5)
  013cb3c  lwz 5, 8(4)
  013cb40  addic 5, 5, 8
  013cb44  stw 5, 8(4)
  013cb48  bl 0x6e0d8
  013cb4c  nop
  013cb50  clrlwi 3, 29, 24
  013cb54  cmpwi 3, 0
  013cb58  bf 2, 0x13d1c8
  013cb5c  li 6, 48
  013cb60  ori 3, 31, 0
  013cb64  ori 4, 31, 0
  013cb68  ori 5, 31, 0
  013cb6c  bl 0x6b5dc
  013cb70  nop
  013cb74  lis 18, 165
  013cb78  lwz 3, 11184(18)
  013cb7c  cmpwi 3, 20
  013cb80  bt 2, 0x13d1c8
  013cb84  ori 3, 30, 0
  013cb88  li 29, 22
  013cb8c  li 4, 5
  013cb90  ori 7, 31, 0
  013cb94  li 5, 96
  013cb98  ori 8, 31, 0
  013cb9c  li 6, 3
  013cba0  ori 9, 30, 0
  013cba4  li 10, 2
  013cba8  bl 0x502f7c
  013cbac  nop
  013cbb0  ori 4, 3, 0
  013cbb4  ori 3, 29, 0
  013cbb8  bl 0x174f80
  013cbbc  nop
  013cbc0  bl 0xf1850
  013cbc4  nop
  013cbc8  ori 28, 31, 0
  013cbcc  ori 27, 28, 0
  013cbd0  lis 29, 115
  013cbd4  addic 29, 29, -26476
  013cbd8  lwzx 3, 29, 27
  013cbdc  cmpwi 3, 0
  013cbe0  bt 2, 0x13cc20
  013cbe4  lis 3, 165
  013cbe8  cmpwi 1, 28, 6
  013cbec  addic 3, 3, 11616
  013cbf0  lwzx 4, 3, 27
  013cbf4  cmpwi 4, 0
  013cbf8  bt 2, 0x13cc20
  013cbfc  bf 6, 0x13cc10
  013cc00  addic 4, 18, 11184
  013cc04  lbz 4, 216(4)
  013cc08  cmpwi 4, 0
  013cc0c  bt 2, 0x13cc20
  013cc10  ori 4, 30, 0
  013cc14  lwzx 3, 3, 27
  013cc18  bl 0xf1934
  013cc1c  nop
  013cc20  addic 28, 28, 1
  013cc24  addic 27, 27, 4
  013cc28  cmpwi 28, 14
  013cc2c  bt 0, 0x13cbd0
  013cc30  addic 18, 18, 11184
  013cc34  lwz 3, 4(18)
  013cc38  cmpwi 3, 0
  013cc3c  bt 2, 0x13cc44
  013cc40  addic 31, 3, 68
  013cc44  ori 28, 17, 0
  013cc48  ori 26, 28, 0
  013cc4c  lis 16, 165
  013cc50  addic 16, 16, 11616
  013cc54  lwzx 3, 16, 26
  013cc58  cmpwi 3, 0
  013cc5c  bt 2, 0x13cda8
  013cc60  lwzx 3, 29, 26
  013cc64  cmpwi 1, 28, 6
  013cc68  cmpwi 3, 0
  013cc6c  bt 2, 0x13cda8
  013cc70  bf 6, 0x13cc80
  013cc74  lbz 3, 216(18)
  013cc78  cmpwi 3, 0
  013cc7c  bt 2, 0x13cda8
  013cc80  lwzx 27, 16, 26
  013cc84  addic 7, 1, 128
  013cc88  addic 8, 1, 132
  013cc8c  addic 9, 1, 136
  013cc90  addic 10, 1, 140
  013cc94  lwz 27, 120(27)
  013cc98  lfs 1, 0(27)
  013cc9c  lfs 2, 8(27)
  013cca0  lfs 3, 48(27)
  013cca4  lfs 4, 56(27)
  013cca8  stfs 1, 48(1)
  013ccac  stfs 2, 56(1)
  013ccb0  stfs 3, 64(1)
  013ccb4  stfs 4, 72(1)
  013ccb8  lfs 1, 4(27)
  013ccbc  lfs 2, 12(27)
  013ccc0  lfs 3, 52(27)
  013ccc4  lfs 4, 60(27)
  013ccc8  stfs 1, 52(1)
  013cccc  stfs 2, 60(1)
  013ccd0  stfs 3, 68(1)
  013ccd4  stfs 4, 76(1)
  013ccd8  ld 3, 48(1)
  013ccdc  ld 4, 56(1)
  013cce0  ld 5, 64(1)
  013cce4  ld 6, 72(1)
  013cce8  bl 0x16a108
  013ccec  nop
  013ccf0  lwz 3, 136(1)
  013ccf4  cmpwi 31, 0
  013ccf8  lwz 4, 140(1)
  013ccfc  addic 5, 3, 1
  013cd00  addic 4, 4, 1
  013cd04  lwz 3, 128(1)
  013cd08  lwz 6, 132(1)
  013cd0c  stw 3, 128(1)
  013cd10  stw 5, 136(1)
  013cd14  stw 4, 140(1)
  013cd18  stw 6, 132(1)
  013cd1c  bt 2, 0x13cd48
  013cd20  lwzx 4, 31, 26
  013cd24  cmpwi 4, 0
  013cd28  bt 2, 0x13cd48
  013cd2c  stw 3, 32(4)
  013cd30  lwz 3, 132(1)
  013cd34  stw 3, 36(4)
  013cd38  lwz 3, 136(1)
  013cd3c  stw 3, 24(4)
  013cd40  lwz 3, 140(1)
  013cd44  stw 3, 28(4)
  013cd48  lwz 3, 136(1)
  013cd4c  lis 5, 115
  013cd50  ori 8, 17, 0
  013cd54  stw 3, 80(27)
  013cd58  lwz 6, 140(1)
  013cd5c  addic 4, 3, 1
  013cd60  stw 6, 84(27)
  013cd64  addic 10, 6, 1
  013cd68  lwz 7, 128(1)
  013cd6c  stw 7, 88(27)
  013cd70  lwz 9, 132(1)
  013cd74  addc 7, 7, 3
  013cd78  extsw 3, 4
  013cd7c  stw 9, 92(27)
  013cd80  addc 6, 9, 6
  013cd84  addic 9, 7, -1
  013cd88  lwz 7, -26560(5)
  013cd8c  addic 6, 6, -1
  013cd90  extsw 4, 10
  013cd94  extsw 7, 7
  013cd98  extsw 5, 9
  013cd9c  extsw 6, 6
  013cda0  bl 0xca72c
  013cda4  nop
  013cda8  addic 28, 28, 1
  013cdac  addic 26, 26, 4
  013cdb0  cmpwi 28, 14
  013cdb4  bt 0, 0x13cc4c
  013cdb8  ori 28, 17, 0
  013cdbc  ori 27, 17, 0
  013cdc0  ori 19, 27, 0
  013cdc4  lwzx 25, 16, 19
  013cdc8  cmpwi 1, 31, 0
  013cdcc  cmpwi 25, 0
  013cdd0  cror 2, 2, 6
  013cdd4  bt 2, 0x13d130
  013cdd8  lwzx 3, 31, 19
  013cddc  cmpwi 3, 0
  013cde0  bt 2, 0x13d130
  013cde4  lwz 4, 16(3)
  013cde8  rlwinm 4, 4, 0, 29, 29
  013cdec  cmpwi 4, 0
  013cdf0  bf 2, 0x13d130
  013cdf4  lwzx 4, 29, 19
  013cdf8  cmpwi 4, 0
  013cdfc  bt 2, 0x13d130
  013ce00  lwz 4, 4(3)
  013ce04  cmpwi 1, 27, 6
  013ce08  cmpwi 4, 0
  013ce0c  bt 2, 0x13d130
  013ce10  bf 6, 0x13ce20
  013ce14  lbz 4, 216(18)
  013ce18  cmpwi 4, 0
  013ce1c  bt 2, 0x13d130
  013ce20  cmpwi 28, 0
  013ce24  bf 2, 0x13ce38
  013ce28  lwz 3, 16(3)
  013ce2c  rlwinm 3, 3, 0, 30, 30
  013ce30  cmpwi 3, 0
  013ce34  bt 2, 0x13d130
  013ce38  cmpwi 28, 1
  013ce3c  bf 2, 0x13ce54
  013ce40  lwzx 3, 31, 19
  013ce44  lwz 3, 16(3)
  013ce48  rlwinm 3, 3, 0, 30, 30
  013ce4c  cmpwi 3, 0
  013ce50  bf 2, 0x13d130
  013ce54  lwzx 3, 31, 19
  013ce58  cmpwi 3, 0
  013ce5c  bt 2, 0x13ce90
  013ce60  lwz 4, 16(3)
  013ce64  clrlwi 4, 4, 31
  013ce68  cmpwi 4, 0
  013ce6c  bt 2, 0x13ce90
  013ce70  lwz 4, 4(3)
  013ce74  std 2, 40(1)
  013ce78  lwz 5, 0(4)
  013ce7c  lwz 2, 4(4)
  013ce80  mtctr 5
  013ce84  bcctrl 20, 30
  013ce88  ld 2, 40(1)
  013ce8c  b 0x13d130
  013ce90  lwz 4, 120(25)
  013ce94  li 3, 256
  013ce98  li 21, 8
  013ce9c  ori 20, 21, 0
  013cea0  lwz 23, 88(4)
  013cea4  lwz 25, 80(4)
  013cea8  lwz 24, 84(4)
  013ceac  extsw 23, 23
  013ceb0  lwz 22, 92(4)
  013ceb4  extsw 25, 25
  013ceb8  cmpw 23, 3
  013cebc  extsw 22, 22
  013cec0  extsw 24, 24
  013cec4  cmpw 1, 22, 3
  013cec8  bf 1, 0x13cee0
  013cecc  addic 21, 21, 1
  013ced0  extsw 21, 21
  013ced4  slw 3, 30, 21
  013ced8  cmpw 3, 23
  013cedc  bt 0, 0x13cecc
  013cee0  bf 5, 0x13cef8
  013cee4  addic 20, 20, 1
  013cee8  extsw 20, 20
  013ceec  slw 3, 30, 20
  013cef0  cmpw 3, 22
  013cef4  bt 0, 0x13cee4
  013cef8  lis 3, 20
  013cefc  lis 4, 115
  013cf00  addi 5, 3, -13724
  013cf04  cntlzw 6, 28
  013cf08  ori 3, 21, 0
  013cf0c  srwi 6, 6, 5
  013cf10  lwz 7, -26556(4)
  013cf14  lfs 1, 0(5)
  013cf18  extsw 7, 7
  013cf1c  xori 6, 6, 1
  013cf20  ori 4, 20, 0
  013cf24  bl 0x71180
  013cf28  nop
  013cf2c  lwzx 3, 31, 19
  013cf30  std 2, 40(1)
  013cf34  lwz 4, 4(3)
  013cf38  lwz 5, 0(4)
  013cf3c  lwz 2, 4(4)
  013cf40  mtctr 5
  013cf44  bcctrl 20, 30
  013cf48  ori 26, 3, 0
  013cf4c  ld 2, 40(1)
  013cf50  bl 0x71ac0
  013cf54  nop
  013cf58  ori 3, 17, 0
  013cf5c  ori 4, 30, 0
  013cf60  li 7, 128
  013cf64  li 5, 2
  013cf68  ori 6, 30, 0
  013cf6c  bl 0x502ea8
  013cf70  nop
  013cf74  ori 4, 3, 0
  013cf78  li 3, 3
  013cf7c  bl 0x174f80
  013cf80  nop
  013cf84  ori 3, 30, 0
  013cf88  ori 4, 30, 0
  013cf8c  li 5, 4
  013cf90  ori 9, 17, 0
  013cf94  ori 6, 17, 0
  013cf98  ori 7, 17, 0
  013cf9c  ori 8, 17, 0
  013cfa0  ori 10, 17, 0
  013cfa4  bl 0x502f98
  013cfa8  nop
  013cfac  ori 4, 3, 0
  013cfb0  li 3, 22
  013cfb4  bl 0x174f80
  013cfb8  nop
  013cfbc  clrlwi 3, 26, 31
  013cfc0  cmpwi 3, 0
  013cfc4  bf 2, 0x13d130
  013cfc8  rlwinm 4, 26, 0, 30, 30
  013cfcc  slw 21, 30, 21
  013cfd0  slw 3, 30, 20
  013cfd4  ori 6, 17, 0
  013cfd8  cmpwi 4, 0
  013cfdc  ori 7, 3, 0
  013cfe0  ori 9, 21, 0
  013cfe4  ori 8, 6, 0
  013cfe8  bt 2, 0x13cff8
  013cfec  ori 9, 23, 0
  013cff0  ori 7, 22, 0
  013cff4  b 0x13d0bc
  013cff8  rlwinm 4, 26, 0, 28, 28
  013cffc  cmpwi 4, 0
  013d000  bt 2, 0x13d05c
  013d004  subc 4, 21, 23
  013d008  subc 5, 3, 22
  013d00c  srawi 6, 4, 1
  013d010  addze 6, 6
  013d014  srawi 8, 5, 1
  013d018  cmpwi 6, 0
  013d01c  addze 8, 8
  013d020  subc 9, 21, 6
  013d024  subc 4, 3, 8
  013d028  bf 0, 0x13d030
  013d02c  ori 6, 17, 0
  013d030  cmpwi 8, 0
  013d034  bf 0, 0x13d03c
  013d038  ori 8, 17, 0
  013d03c  cmpw 21, 9
  013d040  bf 0, 0x13d048
  013d044  ori 9, 21, 0
  013d048  ori 7, 4, 0
  013d04c  cmpw 3, 7
  013d050  bf 0, 0x13d058
  013d054  ori 7, 3, 0
  013d058  b 0x13d0bc
  013d05c  rlwinm 4, 26, 0, 29, 29
  013d060  cmpwi 4, 0
  013d064  bt 2, 0x13d0b0
  013d068  cmpw 22, 23
  013d06c  bf 1, 0x13d090
  013d070  mullw 3, 21, 23
  013d074  slwi 4, 22, 1
  013d078  divw 6, 3, 4
  013d07c  srawi 3, 21, 1
  013d080  addze 3, 3
  013d084  subc 6, 3, 6
  013d088  subc 9, 21, 6
  013d08c  b 0x13d0bc
  013d090  mullw 4, 3, 22
  013d094  slwi 5, 23, 1
  013d098  divw 8, 4, 5
  013d09c  srawi 4, 3, 1
  013d0a0  addze 4, 4
  013d0a4  subc 8, 4, 8
  013d0a8  subc 7, 3, 8
  013d0ac  b 0x13d0bc
  013d0b0  rlwinm 3, 26, 0, 27, 27
  013d0b4  cmpwi 3, 0
  013d0b8  bt 2, 0x13d130
  013d0bc  lis 4, 115
  013d0c0  srawi 5, 8, 1
  013d0c4  lis 10, 150
  013d0c8  addze 5, 5
  013d0cc  srawi 3, 6, 1
  013d0d0  lwz 4, 2756(4)
  013d0d4  extsw 11, 5
  013d0d8  addze 3, 3
  013d0dc  subc 6, 9, 6
  013d0e0  clrldi 5, 4, 32
  013d0e4  subc 4, 7, 8
  013d0e8  srawi 6, 6, 1
  013d0ec  extsw 3, 3
  013d0f0  addze 9, 6
  013d0f4  std 5, 112(1)
  013d0f8  srawi 4, 4, 1
  013d0fc  ori 7, 3, 0
  013d100  addze 6, 4
  013d104  addic 8, 10, -4580
  013d108  extsw 10, 6
  013d10c  extsw 9, 9
  013d110  ori 3, 25, 0
  013d114  std 8, 120(1)
  013d118  ori 4, 24, 0
  013d11c  ori 5, 23, 0
  013d120  ori 6, 22, 0
  013d124  ori 8, 11, 0
  013d128  bl 0x6889c
  013d12c  nop
  013d130  addic 27, 27, 1
  013d134  addic 19, 19, 4
  013d138  cmpwi 27, 14
  013d13c  bt 0, 0x13cdc4
  013d140  cmpwi 28, 0
  013d144  bf 2, 0x13d16c
  013d148  bl 0xf184c
  013d14c  nop
  013d150  bl 0xf1974
  013d154  nop
  013d158  li 3, 16
  013d15c  bl 0x174cf4
  013d160  nop
  013d164  bl 0xf1448
  013d168  nop
  013d16c  addic 28, 28, 1
  013d170  cmpwi 28, 2
  013d174  bt 0, 0x13cdbc
  013d178  ori 3, 17, 0
  013d17c  bl 0x6d704
  013d180  nop
  013d184  ori 31, 17, 0
  013d188  lwzx 3, 29, 31
  013d18c  cmpwi 1, 17, 6
  013d190  cmpwi 3, 0
  013d194  bt 2, 0x13d1b0
  013d198  bf 6, 0x13d1a8
  013d19c  lbz 3, 216(18)
  013d1a0  cmpwi 3, 0
  013d1a4  bt 2, 0x13d1b0
  013d1a8  lwzx 3, 16, 31
  013d1ac  bl 0x13c5e8
  013d1b0  addic 17, 17, 1
  013d1b4  addic 31, 31, 4
  013d1b8  cmpwi 17, 14
  013d1bc  bt 0, 0x13d188
  013d1c0  bl 0x6d708
  013d1c4  nop
  013d1c8  ld 0, 288(1)
  013d1cc  mtlr 0
  013d1d0  ld 16, 144(1)
  013d1d4  ld 17, 152(1)
  013d1d8  ld 18, 160(1)
  013d1dc  ld 19, 168(1)
  013d1e0  ld 20, 176(1)
  013d1e4  ld 21, 184(1)
  013d1e8  ld 22, 192(1)
  013d1ec  ld 23, 200(1)
  013d1f0  ld 24, 208(1)
  013d1f4  ld 25, 216(1)
  013d1f8  ld 26, 224(1)
  013d1fc  ld 27, 232(1)
  013d200  ld 28, 240(1)
  013d204  ld 29, 248(1)
  013d208  ld 30, 256(1)
  013d20c  ld 31, 264(1)
  013d210  addi 1, 1, 272
  013d214  blr

???_Unused_Pause_InitEntry9:   # 0x13d218, 0x14 bytes
  013d218  li 6, 9
  013d21c  sth 4, 0(3)
  013d220  sth 6, 2(3)
  013d224  stw 5, 4(3)
  013d228  blr

InitMenuTextIds:   # 0x13d22c, 0x1b4 bytes
  013d22c  stdu 1, -128(1)
  013d230  mflr 0
  013d234  std 0, 144(1)
  013d238  lis 4, 144
  013d23c  li 6, 0
  013d240  ori 3, 6, 0
  013d244  lwz 5, 11984(4)
  013d248  lwz 5, 192(5)
  013d24c  std 31, 120(1)
  013d250  std 30, 112(1)
  013d254  cmpwi 5, 0
  013d258  bf 2, 0x13d260
  013d25c  li 6, 1
  013d260  lwz 7, 11984(4)
  013d264  ori 5, 3, 0
  013d268  lwz 7, 192(7)
  013d26c  cmpwi 7, 1
  013d270  bf 2, 0x13d278
  013d274  li 5, 1
  013d278  ori 7, 4, 0
  013d27c  cmpwi 1, 6, 0
  013d280  ori 4, 3, 0
  013d284  lwz 6, 11984(7)
  013d288  lwz 6, 192(6)
  013d28c  cmpwi 6, 3
  013d290  bf 2, 0x13d298
  013d294  li 4, 1
  013d298  lis 6, 115
  013d29c  cmpwi 6, 5, 0
  013d2a0  addic 5, 6, 1160
  013d2a4  bt 6, 0x13d304
  013d2a8  ori 4, 3, 0
  013d2ac  ori 6, 5, 0
  013d2b0  lis 3, 115
  013d2b4  li 5, 20268
  013d2b8  li 8, 9
  013d2bc  li 10, 20269
  013d2c0  li 7, 2
  013d2c4  sth 5, 1160(3)
  013d2c8  li 9, 20270
  013d2cc  stw 4, 4(6)
  013d2d0  li 11, 4
  013d2d4  sth 8, 2(6)
  013d2d8  addic 3, 6, 36
  013d2dc  sth 8, 14(6)
  013d2e0  li 5, 12
  013d2e4  sth 10, 12(6)
  013d2e8  stw 7, 16(6)
  013d2ec  sth 9, 24(6)
  013d2f0  sth 8, 26(6)
  013d2f4  stw 11, 28(6)
  013d2f8  bl 0x5d0140
  013d2fc  nop
  013d300  b 0x13d3c8
  013d304  cmpwi 1, 4, 0
  013d308  bt 26, 0x13d390
  013d30c  ori 4, 3, 0
  013d310  lis 3, 115
  013d314  ori 6, 5, 0
  013d318  li 7, 20268
  013d31c  li 9, 9
  013d320  li 5, 20269
  013d324  li 8, 2
  013d328  sth 7, 1160(3)
  013d32c  stw 4, 4(6)
  013d330  li 7, 20271
  013d334  sth 9, 2(6)
  013d338  li 11, 3
  013d33c  sth 5, 12(6)
  013d340  li 10, 20270
  013d344  sth 9, 14(6)
  013d348  li 12, 4
  013d34c  stw 8, 16(6)
  013d350  li 31, 20272
  013d354  sth 7, 24(6)
  013d358  li 30, 5
  013d35c  sth 9, 26(6)
  013d360  addic 3, 6, 60
  013d364  stw 11, 28(6)
  013d368  li 5, 12
  013d36c  sth 10, 36(6)
  013d370  sth 9, 38(6)
  013d374  stw 12, 40(6)
  013d378  sth 31, 48(6)
  013d37c  sth 9, 50(6)
  013d380  stw 30, 52(6)
  013d384  bl 0x5d0140
  013d388  nop
  013d38c  b 0x13d3c8
  013d390  bt 6, 0x13d3c8
  013d394  lis 7, 115
  013d398  ori 6, 5, 0
  013d39c  li 9, -1234
  013d3a0  li 10, 9
  013d3a4  li 8, 6
  013d3a8  ori 4, 3, 0
  013d3ac  sth 9, 1160(7)
  013d3b0  addic 3, 6, 12
  013d3b4  sth 10, 2(6)
  013d3b8  li 5, 12
  013d3bc  stw 8, 4(6)
  013d3c0  bl 0x5d0140
  013d3c4  nop
  013d3c8  ld 0, 144(1)
  013d3cc  mtlr 0
  013d3d0  ld 30, 112(1)
  013d3d4  ld 31, 120(1)
  013d3d8  addi 1, 1, 128
  013d3dc  blr

EnterPauseState:   # 0x13d3e0, 0x40 bytes
  013d3e0  lis 3, 161
  013d3e4  lis 4, 165
  013d3e8  lis 5, 165
  013d3ec  li 7, 3
  013d3f0  addic 6, 5, 11184
  013d3f4  li 9, 45
  013d3f8  li 10, 0
  013d3fc  lis 8, 165
  013d400  stw 7, 1800(3)
  013d404  lwz 3, 11876(4)
  013d408  stw 9, 11184(5)
  013d40c  stw 10, 12(6)
  013d410  stw 10, 16(6)
  013d414  stw 3, 11880(8)
  013d418  stw 10, 268(6)
  013d41c  blr

FrontEnd_InitMenu:   # 0x13d428, 0x2e0 bytes
  013d428  stdu 1, -160(1)
  013d42c  mflr 0
  013d430  std 0, 176(1)
  013d434  lis 4, 162
  013d438  std 31, 152(1)
  013d43c  lis 3, 165
  013d440  std 29, 136(1)
  013d444  addic 31, 4, -9472
  013d448  addic 29, 3, 11184
  013d44c  std 30, 144(1)
  013d450  lis 4, 115
  013d454  li 30, 0
  013d458  addic 5, 4, -26416
  013d45c  lis 6, 115
  013d460  li 7, 2
  013d464  stw 30, 288(29)
  013d468  addic 6, 6, 52
  013d46c  lfs 1, -26416(4)
  013d470  lis 8, 115
  013d474  std 28, 128(1)
  013d478  lfs 2, 4(5)
  013d47c  li 28, 16
  013d480  stw 7, 11184(3)
  013d484  addic 9, 8, -26400
  013d488  stfs 1, 912(31)
  013d48c  addic 3, 31, 944
  013d490  stw 6, 4(29)
  013d494  ori 4, 30, 0
  013d498  stw 6, 8(29)
  013d49c  lfs 1, 8(5)
  013d4a0  stfs 2, 916(31)
  013d4a4  lfs 2, 12(5)
  013d4a8  stfs 1, 920(31)
  013d4ac  ori 5, 28, 0
  013d4b0  lfs 1, -26400(8)
  013d4b4  stfs 2, 924(31)
  013d4b8  lfs 2, 4(9)
  013d4bc  stfs 1, 896(31)
  013d4c0  lfs 1, 8(9)
  013d4c4  stfs 2, 900(31)
  013d4c8  lfs 2, 12(9)
  013d4cc  stfs 1, 904(31)
  013d4d0  std 27, 120(1)
  013d4d4  std 26, 112(1)
  013d4d8  stfs 2, 908(31)
  013d4dc  bl 0x5d0140
  013d4e0  nop
  013d4e4  addic 3, 31, 928
  013d4e8  ori 4, 30, 0
  013d4ec  ori 5, 28, 0
  013d4f0  bl 0x5d0140
  013d4f4  nop
  013d4f8  li 31, 1
  013d4fc  ori 3, 31, 0
  013d500  bl 0x174cf4
  013d504  nop
  013d508  ori 3, 30, 0
  013d50c  bl 0x503078
  013d510  nop
  013d514  lis 3, 346
  013d518  lis 4, 161
  013d51c  lis 8, 230
  013d520  addic 4, 4, 2264
  013d524  lis 9, 10
  013d528  lwz 7, -15568(3)
  013d52c  lis 5, 3
  013d530  lis 10, 16
  013d534  addic 7, 7, 1
  013d538  lwz 4, 64(4)
  013d53c  lis 11, 15
  013d540  stw 9, -21916(8)
  013d544  lis 6, 30
  013d548  addc 8, 4, 10
  013d54c  stw 7, -15568(3)
  013d550  addc 3, 4, 5
  013d554  stw 4, 256(29)
  013d558  lis 7, 31
  013d55c  ori 5, 11, 4096
  013d560  addc 6, 4, 6
  013d564  stw 8, 16(29)
  013d568  ori 7, 7, 6144
  013d56c  stw 3, 260(29)
  013d570  addc 5, 4, 5
  013d574  addc 4, 4, 7
  013d578  stw 6, 264(29)
  013d57c  ori 3, 31, 0
  013d580  stw 5, 248(29)
  013d584  stw 4, 252(29)
  013d588  bl 0x13af68
  013d58c  bl 0x174c24
  013d590  nop
  013d594  lis 3, 150
  013d598  lwz 4, 4(29)
  013d59c  cmpwi 4, 0
  013d5a0  lwz 3, 27348(3)
  013d5a4  stw 3, 24(29)
  013d5a8  bt 2, 0x13d6e0
  013d5ac  ori 27, 30, 0
  013d5b0  ori 28, 27, 0
  013d5b4  lis 3, 163
  013d5b8  addic 3, 3, 21696
  013d5bc  lbz 3, 1138(3)
  013d5c0  cmpwi 3, 255
  013d5c4  bf 2, 0x13d5d0
  013d5c8  ori 26, 30, 0
  013d5cc  b 0x13d628
  013d5d0  li 3, 1138
  013d5d4  bl 0xefa28
  013d5d8  nop
  013d5dc  ori 26, 3, 0
  013d5e0  cmpwi 26, 0
  013d5e4  bt 2, 0x13d628
  013d5e8  li 4, 255
  013d5ec  ori 3, 26, 0
  013d5f0  stb 4, 48(26)
  013d5f4  sth 4, 50(26)
  013d5f8  stb 31, 49(26)
  013d5fc  stb 30, 32(26)
  013d600  bl 0xf31a8
  013d604  nop
  013d608  lis 4, 32
  013d60c  li 5, 14
  013d610  ori 3, 26, 0
  013d614  ori 7, 30, 0
  013d618  ori 4, 4, 8224
  013d61c  ori 6, 5, 0
  013d620  bl 0xf1ea0
  013d624  nop
  013d628  lis 3, 165
  013d62c  addic 3, 3, 11616
  013d630  stwx 26, 3, 28
  013d634  lwzx 4, 3, 28
  013d638  cmpwi 4, 0
  013d63c  bt 2, 0x13d6d0
  013d640  lis 5, 149
  013d644  lis 4, 113
  013d648  lwzx 6, 3, 28
  013d64c  addic 5, 5, 5056
  013d650  addic 4, 4, -28880
  013d654  lis 7, 20
  013d658  addi 7, 7, -11232
  013d65c  lfs 1, 320(5)
  013d660  stw 4, 116(6)
  013d664  lhz 4, 52(6)
  013d668  lwzx 8, 3, 28
  013d66c  rlwimi 4, 30, 0, 30, 30
  013d670  lwz 3, 4(29)
  013d674  stfs 1, 16(8)
  013d678  sth 4, 52(6)
  013d67c  lfs 1, 324(5)
  013d680  stfs 1, 20(8)
  013d684  lfs 1, 328(5)
  013d688  lwzx 4, 3, 28
  013d68c  stfs 1, 24(8)
  013d690  lfs 1, 0(7)
  013d694  lwz 3, 36(8)
  013d698  extsw 4, 4
  013d69c  stw 30, 64(8)
  013d6a0  slwi 5, 4, 2
  013d6a4  addic 3, 3, 72
  013d6a8  addc 3, 3, 5
  013d6ac  clrldi 5, 3, 32
  013d6b0  ori 3, 8, 0
  013d6b4  lwz 5, 0(5)
  013d6b8  stfs 1, 68(8)
  013d6bc  stfs 1, 72(8)
  013d6c0  lbz 5, 16(5)
  013d6c4  addic 5, 5, -1
  013d6c8  bl 0xfdcf0
  013d6cc  nop
  013d6d0  addic 27, 27, 1
  013d6d4  addic 28, 28, 4
  013d6d8  cmpwi 27, 14
  013d6dc  bt 0, 0x13d5b4
  013d6e0  ld 0, 176(1)
  013d6e4  mtlr 0
  013d6e8  ld 26, 112(1)
  013d6ec  ld 27, 120(1)
  013d6f0  ld 28, 128(1)
  013d6f4  ld 29, 136(1)
  013d6f8  ld 30, 144(1)
  013d6fc  ld 31, 152(1)
  013d700  addi 1, 1, 160
  013d704  blr

FrontEnd_ShutdownMenu:   # 0x13d708, 0x190 bytes
  013d708  stdu 1, -160(1)
  013d70c  mflr 0
  013d710  std 0, 176(1)
  013d714  std 31, 152(1)
  013d718  lis 31, 165
  013d71c  addic 31, 31, 11184
  013d720  lwz 3, 268(31)
  013d724  std 30, 144(1)
  013d728  std 29, 136(1)
  013d72c  std 28, 128(1)
  013d730  std 27, 120(1)
  013d734  std 26, 112(1)
  013d738  cmpwi 3, 10
  013d73c  bt 0, 0x13d870
  013d740  lwz 3, 4(31)
  013d744  cmpwi 3, 0
  013d748  bt 2, 0x13d7bc
  013d74c  li 28, 0
  013d750  ori 30, 28, 0
  013d754  ori 29, 30, 0
  013d758  lwz 3, 4(31)
  013d75c  addic 3, 3, 68
  013d760  addc 3, 3, 29
  013d764  clrldi 3, 3, 32
  013d768  lwz 4, 0(3)
  013d76c  cmpwi 4, 0
  013d770  bt 2, 0x13d7a8
  013d774  lwz 4, 0(3)
  013d778  lwz 4, 12(4)
  013d77c  cmpwi 4, 0
  013d780  bt 2, 0x13d7a8
  013d784  lwz 3, 0(3)
  013d788  std 2, 40(1)
  013d78c  ori 4, 30, 0
  013d790  lwz 5, 12(3)
  013d794  lwz 6, 0(5)
  013d798  lwz 2, 4(5)
  013d79c  mtctr 6
  013d7a0  bcctrl 20, 30
  013d7a4  ld 2, 40(1)
  013d7a8  addic 28, 28, 1
  013d7ac  addic 29, 29, 4
  013d7b0  cmpwi 28, 14
  013d7b4  bt 0, 0x13d758
  013d7b8  stw 30, 4(31)
  013d7bc  lis 3, 150
  013d7c0  li 26, 0
  013d7c4  lwz 4, 24(31)
  013d7c8  ori 30, 26, 0
  013d7cc  ori 29, 30, 0
  013d7d0  stw 4, 27348(3)
  013d7d4  lis 27, 165
  013d7d8  addic 27, 27, 11616
  013d7dc  lwzx 28, 27, 29
  013d7e0  cmpwi 28, 0
  013d7e4  bt 2, 0x13d80c
  013d7e8  ori 3, 28, 0
  013d7ec  bl 0xefb38
  013d7f0  nop
  013d7f4  lis 3, 161
  013d7f8  lwz 3, 1808(3)
  013d7fc  extsw 3, 3
  013d800  std 3, 56(28)
  013d804  ori 28, 30, 0
  013d808  b 0x13d80c
  013d80c  addic 26, 26, 1
  013d810  stwx 28, 27, 29
  013d814  addic 29, 29, 4
  013d818  cmpwi 26, 14
  013d81c  bt 0, 0x13d7d4
  013d820  lis 3, 165
  013d824  lis 4, 165
  013d828  lwz 5, 11876(3)
  013d82c  lwz 4, 11880(4)
  013d830  cmpw 5, 4
  013d834  bt 2, 0x13d85c
  013d838  lis 4, 144
  013d83c  lis 5, 165
  013d840  lwz 3, 11876(3)
  013d844  lwz 6, -23196(4)
  013d848  extsw 4, 3
  013d84c  stw 3, 11880(5)
  013d850  ori 3, 6, 0
  013d854  bl 0x4d6f50
  013d858  nop
  013d85c  lis 3, 165
  013d860  li 4, 20
  013d864  li 5, 2
  013d868  stw 4, 11184(3)
  013d86c  stw 5, 20(31)
  013d870  ld 0, 176(1)
  013d874  mtlr 0
  013d878  ld 26, 112(1)
  013d87c  ld 27, 120(1)
  013d880  ld 28, 128(1)
  013d884  ld 29, 136(1)
  013d888  ld 30, 144(1)
  013d88c  ld 31, 152(1)
  013d890  addi 1, 1, 160
  013d894  blr

FrontEnd_UpdateMenu:   # 0x13d8a0, 0x578 bytes
  013d8a0  stdu 1, -176(1)
  013d8a4  mflr 0
  013d8a8  std 0, 192(1)
  013d8ac  stfd 31, 168(1)
  013d8b0  std 28, 136(1)
  013d8b4  std 27, 128(1)
  013d8b8  lis 28, 165
  013d8bc  li 27, 32000
  013d8c0  addic 28, 28, 11184
  013d8c4  lwz 3, 268(28)
  013d8c8  addic 3, 3, 1
  013d8cc  std 31, 160(1)
  013d8d0  std 30, 152(1)
  013d8d4  std 29, 144(1)
  013d8d8  std 26, 120(1)
  013d8dc  std 25, 112(1)
  013d8e0  cmpwi 3, 32000
  013d8e4  bt 1, 0x13d8ec
  013d8e8  ori 27, 3, 0
  013d8ec  lis 3, 149
  013d8f0  lis 4, 17280
  013d8f4  stw 27, 268(28)
  013d8f8  addic 31, 3, 5056
  013d8fc  lis 5, 17024
  013d900  li 30, 16
  013d904  li 27, 0
  013d908  addic 3, 31, 848
  013d90c  stw 4, 320(31)
  013d910  stw 4, 324(31)
  013d914  stw 5, 328(31)
  013d918  ori 4, 27, 0
  013d91c  ori 5, 30, 0
  013d920  bl 0x5d0140
  013d924  nop
  013d928  addic 3, 31, 864
  013d92c  ori 4, 27, 0
  013d930  ori 5, 30, 0
  013d934  bl 0x5d0140
  013d938  nop
  013d93c  addic 3, 31, 880
  013d940  ori 4, 27, 0
  013d944  ori 5, 30, 0
  013d948  bl 0x5d0140
  013d94c  nop
  013d950  lis 3, 20
  013d954  lis 5, 16256
  013d958  addi 4, 3, -10088
  013d95c  lwz 3, 324(28)
  013d960  cmpwi 3, 0
  013d964  lfs 31, 0(4)
  013d968  stw 5, 848(31)
  013d96c  stfs 31, 868(31)
  013d970  stfs 31, 888(31)
  013d974  stfs 31, 892(31)
  013d978  bt 2, 0x13d984
  013d97c  addic 3, 3, -1
  013d980  stw 3, 324(28)
  013d984  ori 31, 27, 0
  013d988  bl 0xe886c
  013d98c  nop
  013d990  cmpwi 3, 0
  013d994  bt 2, 0x13d9a0
  013d998  lwz 31, 336(28)
  013d99c  addic 31, 31, 1
  013d9a0  lis 3, 165
  013d9a4  stw 31, 336(28)
  013d9a8  lwz 31, 11184(3)
  013d9ac  cmpwi 31, 20
  013d9b0  cmpwi 1, 31, 45
  013d9b4  bf 2, 0x13da34
  013d9b8  lwz 3, 20(28)
  013d9bc  cmpwi 3, 0
  013d9c0  bt 2, 0x13d9cc
  013d9c4  addic 3, 3, -1
  013d9c8  stw 3, 20(28)
  013d9cc  lwz 3, 20(28)
  013d9d0  cmpwi 3, 0
  013d9d4  bf 2, 0x13dde8
  013d9d8  lis 3, 150
  013d9dc  addic 3, 3, 14024
  013d9e0  lhz 3, 8(3)
  013d9e4  cmpwi 3, 0
  013d9e8  bf 2, 0x13dde8
  013d9ec  lis 3, 1
  013d9f0  lis 4, 114
  013d9f4  ori 3, 3, 57344
  013d9f8  stw 3, -1068(4)
  013d9fc  bl 0x174bdc
  013da00  nop
  013da04  bl 0x678d8
  013da08  nop
  013da0c  lis 3, 161
  013da10  li 4, 1
  013da14  stw 27, 260(28)
  013da18  lis 5, 161
  013da1c  stw 27, 264(28)
  013da20  stw 27, 256(28)
  013da24  stw 27, 16(28)
  013da28  stw 4, 1820(3)
  013da2c  stw 27, 1800(5)
  013da30  b 0x13dde8
  013da34  cmpwi 31, 0
  013da38  bt 2, 0x13da40
  013da3c  bf 6, 0x13da44
  013da40  bl 0x13d428
  013da44  lis 3, 161
  013da48  lwz 3, -736(3)
  013da4c  clrlwi 3, 3, 31
  013da50  cmpwi 3, 0
  013da54  bt 2, 0x13da74
  013da58  lwz 4, 4(28)
  013da5c  li 3, 3
  013da60  ori 5, 27, 0
  013da64  extsw 4, 4
  013da68  bl 0x78178
  013da6c  nop
  013da70  b 0x13dde8
  013da74  lis 3, 165
  013da78  lwz 3, 11184(3)
  013da7c  cmpwi 3, 1
  013da80  bf 2, 0x13db24
  013da84  lwz 3, 20(28)
  013da88  ori 4, 27, 0
  013da8c  cmpwi 3, 0
  013da90  bf 1, 0x13da98
  013da94  addic 4, 3, -1
  013da98  cmpwi 4, 0
  013da9c  stw 4, 20(28)
  013daa0  bf 2, 0x13dcd4
  013daa4  lwz 4, 8(28)
  013daa8  lis 3, 165
  013daac  stw 27, 8(28)
  013dab0  stw 4, 4(28)
  013dab4  ori 31, 27, 0
  013dab8  lwz 4, 60(4)
  013dabc  stw 4, 11184(3)
  013dac0  lwz 4, 4(28)
  013dac4  slwi 3, 31, 2
  013dac8  addic 4, 4, 68
  013dacc  addc 3, 4, 3
  013dad0  clrldi 3, 3, 32
  013dad4  lwz 4, 0(3)
  013dad8  cmpwi 4, 0
  013dadc  bt 2, 0x13db14
  013dae0  lwz 4, 0(3)
  013dae4  lwz 4, 8(4)
  013dae8  cmpwi 4, 0
  013daec  bt 2, 0x13db14
  013daf0  lwz 3, 0(3)
  013daf4  ori 4, 27, 0
  013daf8  std 2, 40(1)
  013dafc  lwz 5, 8(3)
  013db00  lwz 6, 0(5)
  013db04  lwz 2, 4(5)
  013db08  mtctr 6
  013db0c  bcctrl 20, 30
  013db10  ld 2, 40(1)
  013db14  addic 31, 31, 1
  013db18  cmpwi 31, 14
  013db1c  bt 0, 0x13dac0
  013db20  b 0x13dcd4
  013db24  lwz 3, 8(28)
  013db28  cmpwi 3, 0
  013db2c  bt 2, 0x13dcd4
  013db30  lwz 4, 4(28)
  013db34  lis 26, 165
  013db38  cmpw 4, 3
  013db3c  bf 2, 0x13db58
  013db40  li 3, 3
  013db44  lwz 5, 11616(26)
  013db48  li 4, 17
  013db4c  bl 0x15d12c
  013db50  nop
  013db54  b 0x13db6c
  013db58  li 3, 4
  013db5c  lwz 5, 11616(26)
  013db60  li 4, 17
  013db64  bl 0x15d12c
  013db68  nop
  013db6c  ori 31, 27, 0
  013db70  ori 30, 31, 0
  013db74  lwz 3, 4(28)
  013db78  addic 3, 3, 68
  013db7c  addc 3, 3, 30
  013db80  clrldi 3, 3, 32
  013db84  lwz 4, 0(3)
  013db88  cmpwi 4, 0
  013db8c  bt 2, 0x13dbc4
  013db90  lwz 4, 0(3)
  013db94  lwz 4, 12(4)
  013db98  cmpwi 4, 0
  013db9c  bt 2, 0x13dbc4
  013dba0  lwz 3, 0(3)
  013dba4  ori 4, 27, 0
  013dba8  std 2, 40(1)
  013dbac  lwz 5, 12(3)
  013dbb0  lwz 6, 0(5)
  013dbb4  lwz 2, 4(5)
  013dbb8  mtctr 6
  013dbbc  bcctrl 20, 30
  013dbc0  ld 2, 40(1)
  013dbc4  addic 31, 31, 1
  013dbc8  addic 30, 30, 4
  013dbcc  cmpwi 31, 14
  013dbd0  bt 0, 0x13db74
  013dbd4  lwz 3, 4(28)
  013dbd8  lwz 4, 8(28)
  013dbdc  cmpw 3, 4
  013dbe0  lwz 3, 56(3)
  013dbe4  subc 3, 4, 3
  013dbe8  cntlzw 31, 3
  013dbec  rlwinm 31, 31, 27, 24, 31
  013dbf0  bf 2, 0x13dbfc
  013dbf4  cntlzw 31, 31
  013dbf8  rlwinm 31, 31, 27, 24, 31
  013dbfc  ori 30, 27, 0
  013dc00  ori 29, 30, 0
  013dc04  lwz 3, 8(28)
  013dc08  addic 25, 26, 11616
  013dc0c  addic 4, 3, 68
  013dc10  cmpwi 1, 31, 0
  013dc14  addc 4, 4, 29
  013dc18  clrldi 4, 4, 32
  013dc1c  lwz 5, 0(4)
  013dc20  cmpwi 5, 0
  013dc24  bt 2, 0x13dc34
  013dc28  lwzx 5, 25, 29
  013dc2c  lwz 4, 0(4)
  013dc30  stw 5, 20(4)
  013dc34  bt 6, 0x13dc84
  013dc38  lwz 3, 4(28)
  013dc3c  lwzx 5, 25, 29
  013dc40  lwzx 4, 3, 29
  013dc44  lwz 3, 36(5)
  013dc48  extsw 4, 4
  013dc4c  addic 3, 3, 72
  013dc50  slwi 6, 4, 2
  013dc54  addc 3, 3, 6
  013dc58  clrldi 6, 3, 32
  013dc5c  ori 3, 5, 0
  013dc60  lwz 5, 0(6)
  013dc64  lbz 5, 16(5)
  013dc68  addic 5, 5, -1
  013dc6c  bl 0xfdcf0
  013dc70  nop
  013dc74  lwzx 4, 25, 29
  013dc78  lis 3, -16512
  013dc7c  stw 3, 88(4)
  013dc80  b 0x13dca4
  013dc84  lwzx 4, 3, 29
  013dc88  lwzx 3, 25, 29
  013dc8c  ori 5, 27, 0
  013dc90  extsw 4, 4
  013dc94  bl 0xfdcf0
  013dc98  nop
  013dc9c  lwzx 3, 25, 29
  013dca0  stfs 31, 88(3)
  013dca4  addic 30, 30, 1
  013dca8  addic 29, 29, 4
  013dcac  cmpwi 30, 14
  013dcb0  bt 0, 0x13dc04
  013dcb4  lis 3, 165
  013dcb8  li 4, 1
  013dcbc  li 5, 12
  013dcc0  stw 4, 11184(3)
  013dcc4  lwz 3, 4(28)
  013dcc8  stw 5, 20(28)
  013dccc  stw 3, 208(28)
  013dcd0  stw 27, 4(28)
  013dcd4  lwz 29, 4(28)
  013dcd8  cmpwi 29, 0
  013dcdc  bt 2, 0x13ddd0
  013dce0  addic 31, 29, 68
  013dce4  ori 30, 27, 0
  013dce8  cmpwi 31, 0
  013dcec  bt 2, 0x13dd34
  013dcf0  lwz 3, 68(29)
  013dcf4  cmpwi 3, 0
  013dcf8  bt 2, 0x13dd34
  013dcfc  lwz 4, 0(3)
  013dd00  cmpwi 4, 0
  013dd04  bt 2, 0x13dd34
  013dd08  lwz 4, 0(3)
  013dd0c  std 2, 40(1)
  013dd10  lwz 5, 0(4)
  013dd14  lwz 2, 4(4)
  013dd18  mtctr 5
  013dd1c  bcctrl 20, 30
  013dd20  cmpwi 3, 0
  013dd24  ld 2, 40(1)
  013dd28  bt 2, 0x13dd34
  013dd2c  li 3, 1
  013dd30  stw 3, 12(28)
  013dd34  addic 30, 30, 1
  013dd38  addic 29, 29, 4
  013dd3c  cmpwi 30, 14
  013dd40  bt 0, 0x13dce8
  013dd44  lwz 3, 4(28)
  013dd48  cmpwi 3, 0
  013dd4c  bt 2, 0x13ddd0
  013dd50  lwz 4, 128(3)
  013dd54  cmpwi 4, 0
  013dd58  bt 2, 0x13ddd0
  013dd5c  lwz 3, 64(3)
  013dd60  lwz 4, 12(3)
  013dd64  cmpwi 4, 0
  013dd68  bt 2, 0x13dd8c
  013dd6c  lwz 5, 12(3)
  013dd70  std 2, 40(1)
  013dd74  li 4, 1
  013dd78  lwz 6, 0(5)
  013dd7c  lwz 2, 4(5)
  013dd80  mtctr 6
  013dd84  bcctrl 20, 30
  013dd88  ld 2, 40(1)
  013dd8c  lwz 3, 4(28)
  013dd90  lwz 4, 128(3)
  013dd94  stw 4, 64(3)
  013dd98  stw 27, 128(3)
  013dd9c  lwz 27, 64(3)
  013dda0  lwz 3, 8(27)
  013dda4  cmpwi 3, 0
  013dda8  bt 2, 0x13ddd0
  013ddac  lwz 5, 8(27)
  013ddb0  std 2, 40(1)
  013ddb4  li 4, 1
  013ddb8  ori 3, 27, 0
  013ddbc  lwz 6, 0(5)
  013ddc0  lwz 2, 4(5)
  013ddc4  mtctr 6
  013ddc8  bcctrl 20, 30
  013ddcc  ld 2, 40(1)
  013ddd0  bl 0xfc168
  013ddd4  nop
  013ddd8  lwz 3, 12(28)
  013dddc  cmpwi 3, 0
  013dde0  bt 2, 0x13dde8
  013dde4  bl 0x13d708
  013dde8  ld 0, 192(1)
  013ddec  mtlr 0
  013ddf0  lfd 31, 168(1)
  013ddf4  ld 25, 112(1)
  013ddf8  ld 26, 120(1)
  013ddfc  ld 27, 128(1)
  013de00  ld 28, 136(1)
  013de04  ld 29, 144(1)
  013de08  ld 30, 152(1)
  013de0c  ld 31, 160(1)
  013de10  addi 1, 1, 176
  013de14  blr

FrontEnd_DrawMenu:   # 0x13de20, 0x7e4 bytes
  013de20  stdu 1, -352(1)
  013de24  mflr 0
  013de28  std 0, 368(1)
  013de2c  stfd 31, 344(1)
  013de30  std 24, 280(1)
  013de34  lis 3, 20
  013de38  std 30, 328(1)
  013de3c  li 24, 1
  013de40  std 22, 264(1)
  013de44  addi 30, 3, -8680
  013de48  li 22, 0
  013de4c  std 31, 336(1)
  013de50  ori 3, 24, 0
  013de54  li 31, 22
  013de58  li 4, 5
  013de5c  li 10, 2
  013de60  ori 7, 22, 0
  013de64  li 5, 96
  013de68  ori 8, 22, 0
  013de6c  li 6, 3
  013de70  std 29, 320(1)
  013de74  std 28, 312(1)
  013de78  std 27, 304(1)
  013de7c  std 26, 296(1)
  013de80  std 25, 288(1)
  013de84  std 23, 272(1)
  013de88  std 21, 256(1)
  013de8c  std 20, 248(1)
  013de90  std 19, 240(1)
  013de94  std 18, 232(1)
  013de98  std 17, 224(1)
  013de9c  std 16, 216(1)
  013dea0  std 15, 208(1)
  013dea4  ori 9, 24, 0
  013dea8  bl 0x502f7c
  013deac  nop
  013deb0  ori 4, 3, 0
  013deb4  ori 3, 31, 0
  013deb8  bl 0x174f80
  013debc  nop
  013dec0  bl 0xf1850
  013dec4  nop
  013dec8  bl 0xf1844
  013decc  nop
  013ded0  bl 0xf1848
  013ded4  nop
  013ded8  lis 3, 149
  013dedc  lis 5, 17280
  013dee0  addic 29, 3, 5056
  013dee4  lis 6, 17024
  013dee8  li 31, 16
  013deec  addic 3, 29, 848
  013def0  ori 4, 22, 0
  013def4  stw 5, 320(29)
  013def8  stw 5, 324(29)
  013defc  ori 5, 31, 0
  013df00  stw 6, 328(29)
  013df04  bl 0x5d0140
  013df08  nop
  013df0c  addic 3, 29, 864
  013df10  ori 4, 22, 0
  013df14  ori 5, 31, 0
  013df18  bl 0x5d0140
  013df1c  nop
  013df20  addic 3, 29, 880
  013df24  ori 4, 22, 0
  013df28  ori 5, 31, 0
  013df2c  bl 0x5d0140
  013df30  nop
  013df34  lfs 31, 0(30)
  013df38  lis 3, 16256
  013df3c  stw 3, 848(29)
  013df40  stfs 31, 868(29)
  013df44  stfs 31, 888(29)
  013df48  stfs 31, 892(29)
  013df4c  bl 0x66088
  013df50  nop
  013df54  ori 31, 22, 0
  013df58  ori 30, 31, 0
  013df5c  lis 16, 115
  013df60  addic 16, 16, -26476
  013df64  lwzx 3, 16, 30
  013df68  cmpwi 3, 0
  013df6c  bt 2, 0x13dfb0
  013df70  lis 3, 165
  013df74  cmpwi 1, 31, 6
  013df78  addic 3, 3, 11616
  013df7c  lwzx 4, 3, 30
  013df80  cmpwi 4, 0
  013df84  bt 2, 0x13dfb0
  013df88  bf 6, 0x13dfa0
  013df8c  lis 4, 165
  013df90  addic 4, 4, 11184
  013df94  lbz 4, 216(4)
  013df98  cmpwi 4, 0
  013df9c  bt 2, 0x13dfb0
  013dfa0  ori 4, 24, 0
  013dfa4  lwzx 3, 3, 30
  013dfa8  bl 0xf1934
  013dfac  nop
  013dfb0  addic 31, 31, 1
  013dfb4  addic 30, 30, 4
  013dfb8  cmpwi 31, 14
  013dfbc  bt 0, 0x13df5c
  013dfc0  lis 15, 165
  013dfc4  ori 21, 22, 0
  013dfc8  addic 15, 15, 11184
  013dfcc  lwz 3, 4(15)
  013dfd0  cmpwi 3, 0
  013dfd4  bt 2, 0x13dfdc
  013dfd8  addic 21, 3, 68
  013dfdc  ori 31, 22, 0
  013dfe0  ori 29, 31, 0
  013dfe4  lis 17, 165
  013dfe8  addic 17, 17, 11616
  013dfec  lwzx 3, 17, 29
  013dff0  cmpwi 3, 0
  013dff4  bt 2, 0x13e140
  013dff8  lwzx 3, 16, 29
  013dffc  cmpwi 1, 31, 6
  013e000  cmpwi 3, 0
  013e004  bt 2, 0x13e140
  013e008  bf 6, 0x13e018
  013e00c  lbz 3, 216(15)
  013e010  cmpwi 3, 0
  013e014  bt 2, 0x13e140
  013e018  lwzx 30, 17, 29
  013e01c  addic 7, 1, 128
  013e020  addic 8, 1, 132
  013e024  addic 9, 1, 136
  013e028  addic 10, 1, 140
  013e02c  lwz 30, 120(30)
  013e030  lfs 1, 0(30)
  013e034  lfs 2, 8(30)
  013e038  lfs 3, 48(30)
  013e03c  lfs 4, 56(30)
  013e040  stfs 1, 48(1)
  013e044  stfs 2, 56(1)
  013e048  stfs 3, 64(1)
  013e04c  stfs 4, 72(1)
  013e050  lfs 1, 4(30)
  013e054  lfs 2, 12(30)
  013e058  lfs 3, 52(30)
  013e05c  lfs 4, 60(30)
  013e060  stfs 1, 52(1)
  013e064  stfs 2, 60(1)
  013e068  stfs 3, 68(1)
  013e06c  stfs 4, 76(1)
  013e070  ld 3, 48(1)
  013e074  ld 4, 56(1)
  013e078  ld 5, 64(1)
  013e07c  ld 6, 72(1)
  013e080  bl 0x16a108
  013e084  nop
  013e088  lwz 3, 136(1)
  013e08c  cmpwi 21, 0
  013e090  lwz 4, 140(1)
  013e094  addic 5, 3, 1
  013e098  addic 4, 4, 1
  013e09c  lwz 3, 128(1)
  013e0a0  lwz 6, 132(1)
  013e0a4  stw 3, 128(1)
  013e0a8  stw 5, 136(1)
  013e0ac  stw 4, 140(1)
  013e0b0  stw 6, 132(1)
  013e0b4  bt 2, 0x13e0e0
  013e0b8  lwzx 4, 21, 29
  013e0bc  cmpwi 4, 0
  013e0c0  bt 2, 0x13e0e0
  013e0c4  stw 3, 32(4)
  013e0c8  lwz 3, 132(1)
  013e0cc  stw 3, 36(4)
  013e0d0  lwz 3, 136(1)
  013e0d4  stw 3, 24(4)
  013e0d8  lwz 3, 140(1)
  013e0dc  stw 3, 28(4)
  013e0e0  lwz 3, 136(1)
  013e0e4  lis 5, 115
  013e0e8  ori 8, 22, 0
  013e0ec  stw 3, 80(30)
  013e0f0  lwz 6, 140(1)
  013e0f4  addic 4, 3, 1
  013e0f8  stw 6, 84(30)
  013e0fc  addic 10, 6, 1
  013e100  lwz 7, 128(1)
  013e104  stw 7, 88(30)
  013e108  lwz 9, 132(1)
  013e10c  addc 7, 7, 3
  013e110  extsw 3, 4
  013e114  stw 9, 92(30)
  013e118  addc 6, 9, 6
  013e11c  addic 9, 7, -1
  013e120  lwz 7, -26560(5)
  013e124  addic 6, 6, -1
  013e128  extsw 4, 10
  013e12c  extsw 7, 7
  013e130  extsw 5, 9
  013e134  extsw 6, 6
  013e138  bl 0xca72c
  013e13c  nop
  013e140  addic 31, 31, 1
  013e144  addic 29, 29, 4
  013e148  cmpwi 31, 14
  013e14c  bt 0, 0x13dfe4
  013e150  ori 18, 22, 0
  013e154  ori 23, 22, 0
  013e158  slwi 29, 23, 2
  013e15c  cmpwi 1, 21, 0
  013e160  extsw 29, 29
  013e164  lwzx 3, 17, 29
  013e168  cmpwi 3, 0
  013e16c  cror 2, 2, 6
  013e170  bt 2, 0x13e528
  013e174  lwzx 3, 21, 29
  013e178  cmpwi 3, 0
  013e17c  bt 2, 0x13e528
  013e180  lwzx 3, 21, 29
  013e184  lwz 4, 16(3)
  013e188  rlwinm 4, 4, 0, 29, 29
  013e18c  cmpwi 4, 0
  013e190  bf 2, 0x13e528
  013e194  lwzx 4, 16, 29
  013e198  cmpwi 4, 0
  013e19c  bt 2, 0x13e528
  013e1a0  lwz 3, 4(3)
  013e1a4  cmpwi 1, 23, 6
  013e1a8  cmpwi 3, 0
  013e1ac  bt 2, 0x13e528
  013e1b0  bf 6, 0x13e1c0
  013e1b4  lbz 3, 216(15)
  013e1b8  cmpwi 3, 0
  013e1bc  bt 2, 0x13e528
  013e1c0  cmpwi 18, 0
  013e1c4  bf 2, 0x13e1dc
  013e1c8  lwzx 3, 21, 29
  013e1cc  lwz 3, 16(3)
  013e1d0  rlwinm 3, 3, 0, 30, 30
  013e1d4  cmpwi 3, 0
  013e1d8  bt 2, 0x13e528
  013e1dc  cmpwi 18, 1
  013e1e0  bf 2, 0x13e1f8
  013e1e4  lwzx 3, 21, 29
  013e1e8  lwz 3, 16(3)
  013e1ec  rlwinm 3, 3, 0, 30, 30
  013e1f0  cmpwi 3, 0
  013e1f4  bf 2, 0x13e528
  013e1f8  lwzx 3, 21, 29
  013e1fc  cmpwi 3, 0
  013e200  bt 2, 0x13e234
  013e204  lwz 4, 16(3)
  013e208  clrlwi 4, 4, 31
  013e20c  cmpwi 4, 0
  013e210  bt 2, 0x13e234
  013e214  lwz 4, 4(3)
  013e218  std 2, 40(1)
  013e21c  lwz 5, 0(4)
  013e220  lwz 2, 4(4)
  013e224  mtctr 5
  013e228  bcctrl 20, 30
  013e22c  ld 2, 40(1)
  013e230  b 0x13e528
  013e234  lwzx 4, 17, 29
  013e238  li 3, 256
  013e23c  li 30, 8
  013e240  ori 31, 30, 0
  013e244  lwz 4, 120(4)
  013e248  lwz 27, 88(4)
  013e24c  lwz 19, 80(4)
  013e250  lwz 20, 84(4)
  013e254  extsw 27, 27
  013e258  lwz 28, 92(4)
  013e25c  extsw 19, 19
  013e260  cmpw 27, 3
  013e264  extsw 28, 28
  013e268  extsw 20, 20
  013e26c  cmpw 1, 28, 3
  013e270  bf 1, 0x13e288
  013e274  addic 30, 30, 1
  013e278  extsw 30, 30
  013e27c  slw 3, 24, 30
  013e280  cmpw 3, 27
  013e284  bt 0, 0x13e274
  013e288  bf 5, 0x13e2a0
  013e28c  addic 31, 31, 1
  013e290  extsw 31, 31
  013e294  slw 3, 24, 31
  013e298  cmpw 3, 28
  013e29c  bt 0, 0x13e28c
  013e2a0  addc 3, 30, 31
  013e2a4  cmpwi 3, 17
  013e2a8  bf 1, 0x13e2c0
  013e2ac  addic 31, 31, -1
  013e2b0  extsw 31, 31
  013e2b4  addc 3, 30, 31
  013e2b8  cmpwi 3, 17
  013e2bc  bt 1, 0x13e2ac
  013e2c0  addic 26, 1, 144
  013e2c4  lis 4, 101
  013e2c8  ori 3, 26, 0
  013e2cc  ori 5, 23, 0
  013e2d0  addic 4, 4, 13528
  013e2d4  bl 0x5cd2a8
  013e2d8  nop
  013e2dc  lis 3, 144
  013e2e0  ori 4, 26, 0
  013e2e4  addic 25, 3, -23532
  013e2e8  lwz 3, 40(25)
  013e2ec  bl 0x50eaf8
  013e2f0  nop
  013e2f4  lis 5, 115
  013e2f8  cntlzw 4, 18
  013e2fc  fmr 1, 31
  013e300  ori 3, 30, 0
  013e304  srwi 6, 4, 5
  013e308  ori 4, 31, 0
  013e30c  lwz 7, -26556(5)
  013e310  xori 6, 6, 1
  013e314  extsw 7, 7
  013e318  bl 0x71180
  013e31c  nop
  013e320  lwzx 3, 21, 29
  013e324  std 2, 40(1)
  013e328  lwz 4, 4(3)
  013e32c  lwz 5, 0(4)
  013e330  lwz 2, 4(4)
  013e334  mtctr 5
  013e338  bcctrl 20, 30
  013e33c  ori 29, 3, 0
  013e340  ld 2, 40(1)
  013e344  bl 0x71ac0
  013e348  nop
  013e34c  lwz 3, 40(25)
  013e350  bl 0x50ec5c
  013e354  nop
  013e358  clrlwi 3, 29, 31
  013e35c  cmpwi 3, 0
  013e360  bf 2, 0x13e528
  013e364  slw 4, 24, 31
  013e368  rlwinm 5, 29, 0, 30, 30
  013e36c  slw 3, 24, 30
  013e370  ori 31, 22, 0
  013e374  cmpwi 5, 0
  013e378  ori 25, 3, 0
  013e37c  ori 26, 31, 0
  013e380  ori 30, 4, 0
  013e384  bt 2, 0x13e394
  013e388  ori 25, 27, 0
  013e38c  ori 30, 28, 0
  013e390  b 0x13e458
  013e394  rlwinm 5, 29, 0, 28, 28
  013e398  cmpwi 5, 0
  013e39c  bt 2, 0x13e3f8
  013e3a0  subc 5, 3, 27
  013e3a4  subc 6, 4, 28
  013e3a8  srawi 31, 5, 1
  013e3ac  addze 31, 31
  013e3b0  srawi 26, 6, 1
  013e3b4  cmpwi 31, 0
  013e3b8  addze 26, 26
  013e3bc  subc 25, 3, 31
  013e3c0  subc 5, 4, 26
  013e3c4  bf 0, 0x13e3cc
  013e3c8  ori 31, 22, 0
  013e3cc  cmpwi 26, 0
  013e3d0  bf 0, 0x13e3d8
  013e3d4  ori 26, 22, 0
  013e3d8  cmpw 3, 25
  013e3dc  bf 0, 0x13e3e4
  013e3e0  ori 25, 3, 0
  013e3e4  ori 30, 5, 0
  013e3e8  cmpw 4, 30
  013e3ec  bf 0, 0x13e3f4
  013e3f0  ori 30, 4, 0
  013e3f4  b 0x13e458
  013e3f8  rlwinm 5, 29, 0, 29, 29
  013e3fc  cmpwi 5, 0
  013e400  bt 2, 0x13e44c
  013e404  cmpw 28, 27
  013e408  bf 1, 0x13e42c
  013e40c  mullw 4, 3, 27
  013e410  slwi 5, 28, 1
  013e414  divw 31, 4, 5
  013e418  srawi 4, 3, 1
  013e41c  addze 4, 4
  013e420  subc 31, 4, 31
  013e424  subc 25, 3, 31
  013e428  b 0x13e458
  013e42c  mullw 3, 4, 28
  013e430  slwi 5, 27, 1
  013e434  divw 26, 3, 5
  013e438  srawi 3, 4, 1
  013e43c  addze 3, 3
  013e440  subc 26, 3, 26
  013e444  subc 30, 4, 26
  013e448  b 0x13e458
  013e44c  rlwinm 3, 29, 0, 27, 27
  013e450  cmpwi 3, 0
  013e454  bt 2, 0x13e528
  013e458  ori 3, 22, 0
  013e45c  ori 4, 24, 0
  013e460  li 7, 128
  013e464  li 5, 2
  013e468  ori 6, 24, 0
  013e46c  bl 0x502ea8
  013e470  nop
  013e474  ori 4, 3, 0
  013e478  li 3, 3
  013e47c  bl 0x174f80
  013e480  nop
  013e484  ori 3, 24, 0
  013e488  ori 4, 24, 0
  013e48c  li 5, 4
  013e490  ori 9, 22, 0
  013e494  ori 6, 22, 0
  013e498  ori 7, 22, 0
  013e49c  ori 8, 22, 0
  013e4a0  ori 10, 22, 0
  013e4a4  bl 0x502f98
  013e4a8  nop
  013e4ac  ori 4, 3, 0
  013e4b0  li 3, 22
  013e4b4  bl 0x174f80
  013e4b8  nop
  013e4bc  srawi 3, 31, 1
  013e4c0  lis 4, -32640
  013e4c4  addze 7, 3
  013e4c8  srawi 3, 26, 1
  013e4cc  ori 4, 4, 32896
  013e4d0  addze 8, 3
  013e4d4  subc 3, 25, 31
  013e4d8  clrldi 11, 4, 32
  013e4dc  srawi 3, 3, 1
  013e4e0  lis 6, 150
  013e4e4  addze 9, 3
  013e4e8  subc 5, 30, 26
  013e4ec  addic 12, 6, -4580
  013e4f0  srawi 3, 5, 1
  013e4f4  std 11, 112(1)
  013e4f8  extsw 7, 7
  013e4fc  addze 10, 3
  013e500  extsw 8, 8
  013e504  std 12, 120(1)
  013e508  extsw 9, 9
  013e50c  ori 3, 19, 0
  013e510  extsw 10, 10
  013e514  ori 4, 20, 0
  013e518  ori 5, 27, 0
  013e51c  ori 6, 28, 0
  013e520  bl 0x6889c
  013e524  nop
  013e528  addic 23, 23, 1
  013e52c  extsw 23, 23
  013e530  cmpwi 23, 14
  013e534  bt 0, 0x13e158
  013e538  cmpwi 18, 0
  013e53c  bf 2, 0x13e550
  013e540  bl 0xf184c
  013e544  nop
  013e548  bl 0xf1974
  013e54c  nop
  013e550  addic 18, 18, 1
  013e554  cmpwi 18, 2
  013e558  bt 0, 0x13e154
  013e55c  ori 3, 22, 0
  013e560  bl 0x6d704
  013e564  nop
  013e568  ori 31, 22, 0
  013e56c  lwzx 3, 16, 31
  013e570  cmpwi 1, 22, 6
  013e574  cmpwi 3, 0
  013e578  bt 2, 0x13e594
  013e57c  bf 6, 0x13e58c
  013e580  lbz 3, 216(15)
  013e584  cmpwi 3, 0
  013e588  bt 2, 0x13e594
  013e58c  lwzx 3, 17, 31
  013e590  bl 0x13c5e8
  013e594  addic 22, 22, 1
  013e598  addic 31, 31, 4
  013e59c  cmpwi 22, 14
  013e5a0  bt 0, 0x13e56c
  013e5a4  bl 0x6d708
  013e5a8  nop
  013e5ac  ld 0, 368(1)
  013e5b0  mtlr 0
  013e5b4  lfd 31, 344(1)
  013e5b8  ld 15, 208(1)
  013e5bc  ld 16, 216(1)
  013e5c0  ld 17, 224(1)
  013e5c4  ld 18, 232(1)
  013e5c8  ld 19, 240(1)
  013e5cc  ld 20, 248(1)
  013e5d0  ld 21, 256(1)
  013e5d4  ld 22, 264(1)
  013e5d8  ld 23, 272(1)
  013e5dc  ld 24, 280(1)
  013e5e0  ld 25, 288(1)
  013e5e4  ld 26, 296(1)
  013e5e8  ld 27, 304(1)
  013e5ec  ld 28, 312(1)
  013e5f0  ld 29, 320(1)
  013e5f4  ld 30, 328(1)
  013e5f8  ld 31, 336(1)
  013e5fc  addi 1, 1, 352
  013e600  blr

GetMissionScreenshotPath:   # 0x13e604, 0x30 bytes
  013e604  cmpwi 1, 3, 16
  013e608  cmpwi 3, 0
  013e60c  crorc 2, 0, 4
  013e610  bt 2, 0x13e62c
  013e614  lis 4, 115
  013e618  sldi 3, 3, 2
  013e61c  addic 4, 4, -26540
  013e620  extsw 3, 3
  013e624  lwzx 3, 4, 3
  013e628  b 0x13e630
  013e62c  li 3, 0
  013e630  blr

PrepareChallengeModeSave:   # 0x13e634, 0x414 bytes
  013e634  stdu 1, -336(1)
  013e638  mflr 0
  013e63c  std 0, 352(1)
  013e640  std 27, 296(1)
  013e644  lis 27, 144
  013e648  std 31, 328(1)
  013e64c  lis 4, 151
  013e650  std 30, 320(1)
  013e654  li 31, 40
  013e658  addic 30, 4, -25432
  013e65c  ori 5, 31, 0
  013e660  lwz 27, 11976(27)
  013e664  ori 4, 30, 0
  013e668  std 3, 184(1)
  013e66c  std 29, 312(1)
  013e670  std 28, 304(1)
  013e674  std 26, 288(1)
  013e678  std 25, 280(1)
  013e67c  std 24, 272(1)
  013e680  std 23, 264(1)
  013e684  std 22, 256(1)
  013e688  std 21, 248(1)
  013e68c  std 20, 240(1)
  013e690  std 19, 232(1)
  013e694  std 18, 224(1)
  013e698  std 17, 216(1)
  013e69c  std 16, 208(1)
  013e6a0  std 15, 200(1)
  013e6a4  std 14, 192(1)
  013e6a8  ori 3, 27, 0
  013e6ac  bl 0x50027c
  013e6b0  nop
  013e6b4  lis 26, 151
  013e6b8  addic 3, 27, 48
  013e6bc  addic 26, 26, -16064
  013e6c0  li 5, 37
  013e6c4  ori 4, 26, 0
  013e6c8  bl 0x50027c
  013e6cc  nop
  013e6d0  lis 22, 151
  013e6d4  addic 19, 27, 96
  013e6d8  addic 22, 22, -16212
  013e6dc  ori 3, 19, 0
  013e6e0  li 5, 148
  013e6e4  ori 4, 22, 0
  013e6e8  bl 0x50027c
  013e6ec  nop
  013e6f0  lis 23, 161
  013e6f4  addic 20, 27, 256
  013e6f8  addic 23, 23, -13772
  013e6fc  ori 3, 20, 0
  013e700  li 5, 80
  013e704  ori 4, 23, 0
  013e708  bl 0x50027c
  013e70c  nop
  013e710  lis 25, 151
  013e714  li 14, 32
  013e718  addic 25, 25, -15908
  013e71c  addic 3, 27, 336
  013e720  ori 4, 25, 0
  013e724  ori 5, 14, 0
  013e728  bl 0x50027c
  013e72c  nop
  013e730  addic 3, 27, 368
  013e734  lis 15, 114
  013e738  li 21, 12
  013e73c  addic 15, 15, -1236
  013e740  stw 3, 180(1)
  013e744  ori 5, 21, 0
  013e748  ori 4, 15, 0
  013e74c  bl 0x50027c
  013e750  nop
  013e754  addic 3, 27, 384
  013e758  lis 16, 151
  013e75c  ori 5, 14, 0
  013e760  addic 16, 16, -16244
  013e764  stw 3, 176(1)
  013e768  ori 4, 16, 0
  013e76c  bl 0x50027c
  013e770  nop
  013e774  addic 3, 27, 416
  013e778  lis 17, 151
  013e77c  ori 5, 21, 0
  013e780  addic 17, 17, -16268
  013e784  stw 3, 172(1)
  013e788  ori 4, 17, 0
  013e78c  bl 0x50027c
  013e790  nop
  013e794  addic 3, 27, 432
  013e798  lis 18, 151
  013e79c  ori 5, 21, 0
  013e7a0  addic 18, 18, -16256
  013e7a4  stw 3, 168(1)
  013e7a8  ori 4, 18, 0
  013e7ac  bl 0x50027c
  013e7b0  nop
  013e7b4  lis 3, 151
  013e7b8  lis 4, 151
  013e7bc  lis 5, 151
  013e7c0  lis 6, 151
  013e7c4  addic 5, 5, -16400
  013e7c8  lwz 3, -25440(3)
  013e7cc  lwz 7, -13820(4)
  013e7d0  std 3, 160(1)
  013e7d4  std 4, 112(1)
  013e7d8  lbz 3, 4(5)
  013e7dc  lbz 4, 5(5)
  013e7e0  std 7, 152(1)
  013e7e4  std 5, 120(1)
  013e7e8  lwz 5, -13828(6)
  013e7ec  std 3, 144(1)
  013e7f0  std 4, 136(1)
  013e7f4  std 5, 128(1)
  013e7f8  bl 0xe7638
  013e7fc  nop
  013e800  ori 3, 30, 0
  013e804  ori 4, 27, 0
  013e808  ori 5, 31, 0
  013e80c  bl 0x50027c
  013e810  nop
  013e814  lis 28, 115
  013e818  li 24, 0
  013e81c  addic 28, 28, 5784
  013e820  lwz 3, 0(28)
  013e824  cmpwi 3, -1
  013e828  bt 2, 0x13e85c
  013e82c  ori 3, 24, 0
  013e830  addic 4, 3, 4
  013e834  lwzx 3, 28, 3
  013e838  extsw 5, 4
  013e83c  extsw 6, 3
  013e840  lwzx 3, 28, 5
  013e844  addc 5, 27, 6
  013e848  cmpwi 3, -1
  013e84c  ori 3, 4, 0
  013e850  lbz 4, 48(5)
  013e854  stbx 4, 26, 6
  013e858  bf 2, 0x13e830
  013e85c  ori 3, 22, 0
  013e860  li 5, 148
  013e864  ori 4, 19, 0
  013e868  bl 0x50027c
  013e86c  nop
  013e870  ori 3, 23, 0
  013e874  li 5, 80
  013e878  ori 4, 20, 0
  013e87c  bl 0x50027c
  013e880  nop
  013e884  ori 19, 24, 0
  013e888  ld 31, 120(1)
  013e88c  ori 3, 19, 0
  013e890  lwz 9, 336(27)
  013e894  ori 8, 24, 0
  013e898  extsw 4, 9
  013e89c  lbzx 4, 26, 4
  013e8a0  cmpwi 4, 0
  013e8a4  bt 2, 0x13e8ac
  013e8a8  ori 8, 9, 0
  013e8ac  addic 19, 19, 1
  013e8b0  stwx 8, 25, 3
  013e8b4  addic 27, 27, 4
  013e8b8  cmpwi 19, 8
  013e8bc  addic 3, 3, 4
  013e8c0  bt 0, 0x13e890
  013e8c4  ori 3, 15, 0
  013e8c8  lwz 4, 180(1)
  013e8cc  ori 5, 21, 0
  013e8d0  bl 0x50027c
  013e8d4  nop
  013e8d8  ori 3, 16, 0
  013e8dc  lwz 4, 176(1)
  013e8e0  ori 5, 14, 0
  013e8e4  bl 0x50027c
  013e8e8  nop
  013e8ec  lwz 4, 172(1)
  013e8f0  ori 3, 17, 0
  013e8f4  ori 5, 21, 0
  013e8f8  bl 0x50027c
  013e8fc  nop
  013e900  ori 3, 18, 0
  013e904  lwz 4, 168(1)
  013e908  ori 5, 21, 0
  013e90c  bl 0x50027c
  013e910  nop
  013e914  ld 3, 112(1)
  013e918  lis 4, 151
  013e91c  ld 5, 160(1)
  013e920  addic 6, 3, -13820
  013e924  ld 7, 152(1)
  013e928  ld 8, 144(1)
  013e92c  stw 5, -25440(4)
  013e930  cmpwi 8, 0
  013e934  stw 7, -13820(3)
  013e938  stw 24, 4(6)
  013e93c  bt 2, 0x13e954
  013e940  li 3, 1
  013e944  lis 4, 114
  013e948  li 5, 5
  013e94c  stb 3, 4(31)
  013e950  stw 5, -1240(4)
  013e954  ld 3, 136(1)
  013e958  cmpwi 3, 0
  013e95c  bt 2, 0x13e974
  013e960  li 3, 1
  013e964  lis 4, 114
  013e968  li 5, 8
  013e96c  stb 3, 5(31)
  013e970  stw 5, -1240(4)
  013e974  lis 4, 114
  013e978  ld 6, 128(1)
  013e97c  lis 5, 114
  013e980  lis 3, 151
  013e984  stb 24, -1192(4)
  013e988  addic 4, 6, 1
  013e98c  stb 24, -1191(5)
  013e990  stw 4, -13828(3)
  013e994  ld 3, 184(1)
  013e998  cmpwi 3, 0
  013e99c  bt 0, 0x13e9f0
  013e9a0  lis 4, 114
  013e9a4  sldi 5, 3, 5
  013e9a8  sldi 7, 3, 2
  013e9ac  addic 30, 4, -1500
  013e9b0  subc 4, 5, 7
  013e9b4  lis 6, 165
  013e9b8  extsw 4, 4
  013e9bc  addic 31, 6, 11184
  013e9c0  addc 4, 30, 4
  013e9c4  stw 3, 20(30)
  013e9c8  lwz 3, 220(31)
  013e9cc  stw 24, 32(4)
  013e9d0  bl 0xe7984
  013e9d4  nop
  013e9d8  lwz 4, 220(31)
  013e9dc  stw 24, 200(30)
  013e9e0  ori 3, 24, 0
  013e9e4  stw 4, 244(30)
  013e9e8  bl 0xe8888
  013e9ec  nop
  013e9f0  ld 0, 352(1)
  013e9f4  mtlr 0
  013e9f8  ld 14, 192(1)
  013e9fc  ld 15, 200(1)
  013ea00  ld 16, 208(1)
  013ea04  ld 17, 216(1)
  013ea08  ld 18, 224(1)
  013ea0c  ld 19, 232(1)
  013ea10  ld 20, 240(1)
  013ea14  ld 21, 248(1)
  013ea18  ld 22, 256(1)
  013ea1c  ld 23, 264(1)
  013ea20  ld 24, 272(1)
  013ea24  ld 25, 280(1)
  013ea28  ld 26, 288(1)
  013ea2c  ld 27, 296(1)
  013ea30  ld 28, 304(1)
  013ea34  ld 29, 312(1)
  013ea38  ld 30, 320(1)
  013ea3c  ld 31, 328(1)
  013ea40  addi 1, 1, 336
  013ea44  blr

MakeWholeSaveWithMode:   # 0x13ea48, 0x30 bytes
  013ea48  stdu 1, -112(1)
  013ea4c  mflr 0
  013ea50  std 0, 128(1)
  013ea54  lis 4, 165
  013ea58  addic 4, 4, 11184
  013ea5c  stw 3, 220(4)
  013ea60  bl 0xe7984
  013ea64  nop
  013ea68  ld 0, 128(1)
  013ea6c  mtlr 0
  013ea70  addi 1, 1, 112
  013ea74  blr

ClearMenuQueue:   # 0x13ea78, 0x74 bytes
  013ea78  stdu 1, -128(1)
  013ea7c  mflr 0
  013ea80  std 0, 144(1)
  013ea84  lis 3, 150
  013ea88  addic 3, 3, 14024
  013ea8c  lhz 3, 8(3)
  013ea90  std 31, 120(1)
  013ea94  cmpwi 3, 0
  013ea98  bt 2, 0x13eac0
  013ea9c  lis 31, 165
  013eaa0  addic 31, 31, 11184
  013eaa4  lbz 3, 203(31)
  013eaa8  cmpwi 3, 0
  013eaac  bt 2, 0x13eac0
  013eab0  bl 0x11d9e0
  013eab4  nop
  013eab8  li 3, 0
  013eabc  stb 3, 203(31)
  013eac0  lis 4, 165
  013eac4  lis 5, 165
  013eac8  li 3, 0
  013eacc  addic 4, 4, 12384
  013ead0  stw 3, 11932(5)
  013ead4  stw 3, 12(4)
  013ead8  ld 0, 144(1)
  013eadc  mtlr 0
  013eae0  ld 31, 120(1)
  013eae4  addi 1, 1, 128
  013eae8  blr

PopMenuQueueEntry:   # 0x13eaec, 0xc0 bytes
  013eaec  li 4, 56
  013eaf0  li 3, 7
  013eaf4  lis 6, 165
  013eaf8  lis 5, 165
  013eafc  addic 6, 6, 11936
  013eb00  addic 5, 5, 11880
  013eb04  addc 6, 6, 4
  013eb08  addc 5, 5, 4
  013eb0c  clrldi 6, 6, 32
  013eb10  clrldi 5, 5, 32
  013eb14  addic 3, 3, -1
  013eb18  addic 4, 4, 56
  013eb1c  cmpwi 3, 0
  013eb20  lwz 7, 0(6)
  013eb24  lwz 8, 4(6)
  013eb28  lwz 9, 8(6)
  013eb2c  lwz 10, 12(6)
  013eb30  stw 7, 0(5)
  013eb34  stw 8, 4(5)
  013eb38  stw 9, 8(5)
  013eb3c  stw 10, 12(5)
  013eb40  lwz 7, 16(6)
  013eb44  lwz 8, 20(6)
  013eb48  lwz 9, 24(6)
  013eb4c  lwz 10, 28(6)
  013eb50  stw 7, 16(5)
  013eb54  stw 8, 20(5)
  013eb58  stw 9, 24(5)
  013eb5c  stw 10, 28(5)
  013eb60  lwz 7, 32(6)
  013eb64  lwz 8, 36(6)
  013eb68  lwz 9, 40(6)
  013eb6c  lwz 10, 44(6)
  013eb70  stw 7, 32(5)
  013eb74  stw 8, 36(5)
  013eb78  stw 9, 40(5)
  013eb7c  stw 10, 44(5)
  013eb80  lwz 7, 48(6)
  013eb84  lwz 6, 52(6)
  013eb88  stw 7, 48(5)
  013eb8c  stw 6, 52(5)
  013eb90  bf 2, 0x13eaf4
  013eb94  lis 4, 165
  013eb98  li 3, 0
  013eb9c  lwz 5, 11932(4)
  013eba0  addic 5, 5, -1
  013eba4  stw 5, 11932(4)
  013eba8  blr

LoadMenuRatchetModel:   # 0x13ebb0, 0xd74 bytes
  013ebb0  stdu 1, -496(1)
  013ebb4  mflr 0
  013ebb8  std 0, 512(1)
  013ebbc  std 17, 376(1)
  013ebc0  std 21, 408(1)
  013ebc4  lis 17, 165
  013ebc8  std 31, 488(1)
  013ebcc  std 25, 440(1)
  013ebd0  li 21, 0
  013ebd4  ori 31, 3, 0
  013ebd8  std 30, 480(1)
  013ebdc  ori 25, 21, 0
  013ebe0  std 24, 432(1)
  013ebe4  ori 30, 4, 0
  013ebe8  lwz 3, 11932(17)
  013ebec  std 26, 448(1)
  013ebf0  ori 24, 25, 0
  013ebf4  std 23, 424(1)
  013ebf8  ori 26, 8, 0
  013ebfc  cmpwi 3, 0
  013ec00  std 29, 472(1)
  013ec04  ori 23, 24, 0
  013ec08  std 28, 464(1)
  013ec0c  ori 29, 5, 0
  013ec10  std 27, 456(1)
  013ec14  ori 28, 6, 0
  013ec18  std 22, 416(1)
  013ec1c  std 20, 400(1)
  013ec20  std 19, 392(1)
  013ec24  std 18, 384(1)
  013ec28  std 16, 368(1)
  013ec2c  ori 27, 7, 0
  013ec30  bt 2, 0x13f8d0
  013ec34  lbz 3, 112(31)
  013ec38  rlwinm 3, 3, 0, 30, 30
  013ec3c  cmpwi 3, 0
  013ec40  bt 2, 0x13ec70
  013ec44  lis 4, 165
  013ec48  li 25, 1
  013ec4c  addic 4, 4, 12384
  013ec50  lwz 3, 12(4)
  013ec54  cmpwi 3, 0
  013ec58  bt 2, 0x13ec6c
  013ec5c  addic 3, 3, -1
  013ec60  cmpwi 3, 0
  013ec64  stw 3, 12(4)
  013ec68  bf 2, 0x13ec70
  013ec6c  ori 24, 25, 0
  013ec70  lis 20, 165
  013ec74  addic 20, 20, 11184
  013ec78  lbz 3, 203(20)
  013ec7c  cmpwi 3, 0
  013ec80  bt 2, 0x13ed58
  013ec84  lis 4, 150
  013ec88  addic 4, 4, 14024
  013ec8c  lhz 4, 8(4)
  013ec90  cmpwi 4, 0
  013ec94  bf 2, 0x13ed58
  013ec98  addic 3, 3, -1
  013ec9c  ori 5, 21, 0
  013eca0  sldi 6, 3, 2
  013eca4  addc 6, 20, 6
  013eca8  lwz 4, 160(6)
  013ecac  stw 21, 188(20)
  013ecb0  lis 8, 165
  013ecb4  slwi 7, 5, 3
  013ecb8  addic 8, 8, 12440
  013ecbc  extsw 7, 7
  013ecc0  lwzx 9, 8, 7
  013ecc4  cmpw 9, 4
  013ecc8  bf 2, 0x13ece4
  013eccc  addc 4, 8, 7
  013ecd0  addic 5, 8, 4
  013ecd4  lwz 4, 4(4)
  013ecd8  rlwimi 4, 21, 0, 29, 29
  013ecdc  stwx 4, 5, 7
  013ece0  b 0x13ecf0
  013ece4  addic 5, 5, 1
  013ece8  cmpwi 5, 5
  013ecec  bt 0, 0x13ecb0
  013ecf0  lis 4, 165
  013ecf4  lwz 7, 328(20)
  013ecf8  addc 5, 20, 3
  013ecfc  addic 4, 4, 11936
  013ed00  lwz 3, 328(20)
  013ed04  lwz 4, 4(4)
  013ed08  stb 7, 200(5)
  013ed0c  cmpw 4, 3
  013ed10  bf 2, 0x13ed20
  013ed14  lis 4, 165
  013ed18  li 5, 2
  013ed1c  stw 5, 11936(4)
  013ed20  lis 4, 163
  013ed24  slwi 3, 3, 2
  013ed28  lwz 5, 19456(4)
  013ed2c  lwz 6, 160(6)
  013ed30  addic 5, 5, 72
  013ed34  addc 3, 5, 3
  013ed38  clrldi 3, 3, 32
  013ed3c  stw 6, 0(3)
  013ed40  lwz 3, 19456(4)
  013ed44  lwz 4, 328(20)
  013ed48  extsw 4, 4
  013ed4c  bl 0xdcb64
  013ed50  nop
  013ed54  stb 21, 203(20)
  013ed58  lbz 3, 203(20)
  013ed5c  cmpwi 3, 0
  013ed60  bf 2, 0x13eeac
  013ed64  lis 3, 150
  013ed68  addic 3, 3, 14024
  013ed6c  lhz 3, 8(3)
  013ed70  cmpwi 3, 0
  013ed74  bf 2, 0x13eeac
  013ed78  lwz 3, 11932(17)
  013ed7c  cmpwi 3, 0
  013ed80  bf 1, 0x13eeac
  013ed84  lis 3, 165
  013ed88  lwz 3, 11936(3)
  013ed8c  cmpwi 3, 0
  013ed90  bf 2, 0x13eeac
  013ed94  lis 19, 165
  013ed98  lbz 22, 202(20)
  013ed9c  addic 18, 20, 200
  013eda0  addic 19, 19, 11936
  013eda4  addc 3, 22, 20
  013eda8  lwz 4, 4(19)
  013edac  lbz 3, 200(3)
  013edb0  cmpw 3, 4
  013edb4  bt 2, 0x13edcc
  013edb8  cntlzw 3, 22
  013edbc  srwi 3, 3, 5
  013edc0  lbzx 3, 3, 18
  013edc4  cmpw 3, 4
  013edc8  bf 2, 0x13eddc
  013edcc  lis 3, 165
  013edd0  li 4, 2
  013edd4  stw 4, 11936(3)
  013edd8  b 0x13eeac
  013eddc  lwz 3, 204(20)
  013ede0  cmplw 4, 3
  013ede4  bf 0, 0x13edf8
  013ede8  lis 3, 165
  013edec  li 4, 3
  013edf0  stw 4, 11936(3)
  013edf4  b 0x13eeac
  013edf8  slwi 5, 22, 2
  013edfc  subc 3, 4, 3
  013ee00  addc 22, 20, 5
  013ee04  addic 16, 1, 112
  013ee08  lis 4, 101
  013ee0c  extsw 5, 3
  013ee10  ori 3, 16, 0
  013ee14  lwz 22, 160(22)
  013ee18  addic 4, 4, 14028
  013ee1c  stw 22, 188(20)
  013ee20  bl 0x5cd2a8
  013ee24  nop
  013ee28  lis 5, 4
  013ee2c  ori 3, 16, 0
  013ee30  ori 5, 5, 61440
  013ee34  ori 4, 22, 0
  013ee38  bl 0x503e00
  013ee3c  nop
  013ee40  ori 3, 21, 0
  013ee44  lis 4, 165
  013ee48  slwi 5, 3, 3
  013ee4c  addic 4, 4, 12440
  013ee50  extsw 5, 5
  013ee54  lwzx 6, 4, 5
  013ee58  cmpw 6, 22
  013ee5c  bf 2, 0x13ee78
  013ee60  addc 3, 4, 5
  013ee64  addic 4, 4, 4
  013ee68  lwz 3, 4(3)
  013ee6c  ori 3, 3, 4
  013ee70  stwx 3, 4, 5
  013ee74  b 0x13ee84
  013ee78  addic 3, 3, 1
  013ee7c  cmpwi 3, 5
  013ee80  bt 0, 0x13ee44
  013ee84  lis 3, 165
  013ee88  li 4, 1
  013ee8c  lbz 6, 202(20)
  013ee90  li 5, 255
  013ee94  stw 4, 11936(3)
  013ee98  addic 3, 6, 1
  013ee9c  lwz 4, 4(19)
  013eea0  stw 4, 328(20)
  013eea4  stbx 5, 6, 18
  013eea8  stb 3, 203(20)
  013eeac  lwz 3, 11932(17)
  013eeb0  cmpwi 3, 0
  013eeb4  bf 1, 0x13f0b4
  013eeb8  lis 3, 165
  013eebc  lwz 4, 11936(3)
  013eec0  cmpwi 4, 2
  013eec4  bt 2, 0x13eed4
  013eec8  lwz 4, 11936(3)
  013eecc  cmpwi 4, 3
  013eed0  bf 2, 0x13f0b4
  013eed4  addic 3, 3, 11936
  013eed8  lwz 4, 16(3)
  013eedc  cmpwi 4, 0
  013eee0  bt 2, 0x13efb8
  013eee4  lwz 5, 48(20)
  013eee8  cmpw 5, 4
  013eeec  bt 2, 0x13efb8
  013eef0  lwz 5, 56(20)
  013eef4  cmpw 5, 4
  013eef8  bt 2, 0x13efb8
  013eefc  lwz 5, 52(20)
  013ef00  cmpw 5, 4
  013ef04  bt 2, 0x13efb8
  013ef08  ori 23, 21, 0
  013ef0c  li 4, 56
  013ef10  li 5, 7
  013ef14  addic 6, 3, 56
  013ef18  addic 7, 3, -56
  013ef1c  lwz 8, 0(6)
  013ef20  lwz 9, 4(6)
  013ef24  addic 5, 5, -1
  013ef28  addc 7, 7, 4
  013ef2c  lwz 10, 8(6)
  013ef30  lwz 11, 12(6)
  013ef34  cmpwi 5, 0
  013ef38  clrldi 7, 7, 32
  013ef3c  addic 4, 4, 56
  013ef40  stw 8, 0(7)
  013ef44  stw 9, 4(7)
  013ef48  stw 10, 8(7)
  013ef4c  stw 11, 12(7)
  013ef50  lwz 8, 16(6)
  013ef54  lwz 9, 20(6)
  013ef58  lwz 10, 24(6)
  013ef5c  lwz 11, 28(6)
  013ef60  stw 8, 16(7)
  013ef64  stw 9, 20(7)
  013ef68  stw 10, 24(7)
  013ef6c  stw 11, 28(7)
  013ef70  lwz 8, 32(6)
  013ef74  lwz 9, 36(6)
  013ef78  lwz 10, 40(6)
  013ef7c  lwz 11, 44(6)
  013ef80  stw 8, 32(7)
  013ef84  stw 9, 36(7)
  013ef88  stw 10, 40(7)
  013ef8c  stw 11, 44(7)
  013ef90  lwz 8, 48(6)
  013ef94  lwz 9, 52(6)
  013ef98  stw 8, 48(7)
  013ef9c  addic 6, 6, 56
  013efa0  stw 9, 52(7)
  013efa4  bf 2, 0x13ef18
  013efa8  lwz 3, 11932(17)
  013efac  addic 3, 3, -1
  013efb0  stw 3, 11932(17)
  013efb4  b 0x13f0b4
  013efb8  lwz 4, 8(3)
  013efbc  cmpwi 4, 0
  013efc0  bf 2, 0x13efcc
  013efc4  li 23, 1
  013efc8  b 0x13f0b4
  013efcc  cmpwi 1, 25, 0
  013efd0  cmpwi 4, 1
  013efd4  crorc 2, 6, 2
  013efd8  bt 2, 0x13efe4
  013efdc  li 23, 1
  013efe0  b 0x13f0b4
  013efe4  lwz 4, 8(3)
  013efe8  cmpwi 1, 24, 0
  013efec  cmpwi 4, 2
  013eff0  crorc 2, 6, 2
  013eff4  bt 2, 0x13f000
  013eff8  li 23, 1
  013effc  b 0x13f0b4
  013f000  cmpwi 4, 3
  013f004  bf 2, 0x13f0b4
  013f008  ori 23, 21, 0
  013f00c  li 4, 56
  013f010  li 5, 7
  013f014  addic 6, 3, 56
  013f018  addic 7, 3, -56
  013f01c  lwz 8, 0(6)
  013f020  lwz 9, 4(6)
  013f024  addic 5, 5, -1
  013f028  addc 7, 7, 4
  013f02c  lwz 10, 8(6)
  013f030  lwz 11, 12(6)
  013f034  cmpwi 5, 0
  013f038  clrldi 7, 7, 32
  013f03c  addic 4, 4, 56
  013f040  stw 8, 0(7)
  013f044  stw 9, 4(7)
  013f048  stw 10, 8(7)
  013f04c  stw 11, 12(7)
  013f050  lwz 8, 16(6)
  013f054  lwz 9, 20(6)
  013f058  lwz 10, 24(6)
  013f05c  lwz 11, 28(6)
  013f060  stw 8, 16(7)
  013f064  stw 9, 20(7)
  013f068  stw 10, 24(7)
  013f06c  stw 11, 28(7)
  013f070  lwz 8, 32(6)
  013f074  lwz 9, 36(6)
  013f078  lwz 10, 40(6)
  013f07c  lwz 11, 44(6)
  013f080  stw 8, 32(7)
  013f084  stw 9, 36(7)
  013f088  stw 10, 40(7)
  013f08c  stw 11, 44(7)
  013f090  lwz 8, 48(6)
  013f094  lwz 9, 52(6)
  013f098  stw 8, 48(7)
  013f09c  addic 6, 6, 56
  013f0a0  stw 9, 52(7)
  013f0a4  bf 2, 0x13f018
  013f0a8  lwz 3, 11932(17)
  013f0ac  addic 3, 3, -1
  013f0b0  stw 3, 11932(17)
  013f0b4  cmpwi 23, 0
  013f0b8  bt 2, 0x13f8d0
  013f0bc  lis 3, 165
  013f0c0  lis 4, 165
  013f0c4  addic 3, 3, 11936
  013f0c8  addic 25, 4, 12384
  013f0cc  lwz 5, 0(3)
  013f0d0  lwz 6, 4(3)
  013f0d4  lwz 7, 8(3)
  013f0d8  lwz 8, 12(3)
  013f0dc  stw 5, 12384(4)
  013f0e0  stw 6, 4(25)
  013f0e4  stw 7, 8(25)
  013f0e8  stw 8, 12(25)
  013f0ec  lwz 4, 16(3)
  013f0f0  lwz 5, 20(3)
  013f0f4  lwz 6, 24(3)
  013f0f8  lwz 7, 28(3)
  013f0fc  stw 4, 16(25)
  013f100  stw 5, 20(25)
  013f104  li 4, 56
  013f108  stw 6, 24(25)
  013f10c  stw 7, 28(25)
  013f110  lwz 5, 32(3)
  013f114  lwz 6, 36(3)
  013f118  lwz 7, 40(3)
  013f11c  lwz 8, 44(3)
  013f120  stw 5, 32(25)
  013f124  stw 6, 36(25)
  013f128  stw 7, 40(25)
  013f12c  li 5, 7
  013f130  stw 8, 44(25)
  013f134  addic 6, 3, 56
  013f138  lwz 7, 48(3)
  013f13c  lwz 8, 52(3)
  013f140  stw 7, 48(25)
  013f144  stw 8, 52(25)
  013f148  addic 7, 3, -56
  013f14c  lwz 8, 0(6)
  013f150  lwz 9, 4(6)
  013f154  addic 5, 5, -1
  013f158  addc 7, 7, 4
  013f15c  lwz 10, 8(6)
  013f160  lwz 11, 12(6)
  013f164  cmpwi 5, 0
  013f168  clrldi 7, 7, 32
  013f16c  addic 4, 4, 56
  013f170  stw 8, 0(7)
  013f174  stw 9, 4(7)
  013f178  stw 10, 8(7)
  013f17c  stw 11, 12(7)
  013f180  lwz 8, 16(6)
  013f184  lwz 9, 20(6)
  013f188  lwz 10, 24(6)
  013f18c  lwz 11, 28(6)
  013f190  stw 8, 16(7)
  013f194  stw 9, 20(7)
  013f198  stw 10, 24(7)
  013f19c  stw 11, 28(7)
  013f1a0  lwz 8, 32(6)
  013f1a4  lwz 9, 36(6)
  013f1a8  lwz 10, 40(6)
  013f1ac  lwz 11, 44(6)
  013f1b0  stw 8, 32(7)
  013f1b4  stw 9, 36(7)
  013f1b8  stw 10, 40(7)
  013f1bc  stw 11, 44(7)
  013f1c0  lwz 8, 48(6)
  013f1c4  lwz 9, 52(6)
  013f1c8  stw 8, 48(7)
  013f1cc  addic 6, 6, 56
  013f1d0  stw 9, 52(7)
  013f1d4  bf 2, 0x13f148
  013f1d8  lwz 3, 11932(17)
  013f1dc  lwz 4, 172(20)
  013f1e0  addic 3, 3, -1
  013f1e4  stw 3, 11932(17)
  013f1e8  lwz 17, 168(20)
  013f1ec  addc 3, 17, 4
  013f1f0  cmpw 17, 3
  013f1f4  bf 0, 0x13f264
  013f1f8  slwi 3, 17, 3
  013f1fc  lis 4, 115
  013f200  extsw 5, 3
  013f204  addic 4, 4, 5328
  013f208  lis 6, 163
  013f20c  lis 8, 163
  013f210  addic 6, 6, 21696
  013f214  addic 17, 17, 1
  013f218  lwzx 7, 4, 5
  013f21c  addic 3, 3, 8
  013f220  addc 4, 4, 5
  013f224  extsw 7, 7
  013f228  addic 5, 8, 19456
  013f22c  lbzx 6, 6, 7
  013f230  lwz 4, 4(4)
  013f234  slwi 6, 6, 2
  013f238  slwi 4, 4, 2
  013f23c  lwzx 5, 5, 6
  013f240  addic 5, 5, 72
  013f244  addc 4, 5, 4
  013f248  clrldi 4, 4, 32
  013f24c  stw 21, 0(4)
  013f250  lwz 4, 168(20)
  013f254  lwz 5, 172(20)
  013f258  addc 4, 4, 5
  013f25c  cmpw 17, 4
  013f260  bt 0, 0x13f1fc
  013f264  ori 5, 21, 0
  013f268  lwz 4, 52(25)
  013f26c  lwz 3, 48(25)
  013f270  stw 4, 172(20)
  013f274  cmpw 4, 5
  013f278  stw 3, 168(20)
  013f27c  bf 1, 0x13f2f8
  013f280  addc 6, 5, 3
  013f284  slwi 3, 6, 3
  013f288  slwi 6, 6, 2
  013f28c  lis 7, 115
  013f290  extsw 8, 3
  013f294  addic 7, 7, 5328
  013f298  lis 9, 163
  013f29c  extsw 11, 6
  013f2a0  addic 9, 9, 21696
  013f2a4  addic 5, 5, 1
  013f2a8  lwzx 10, 7, 8
  013f2ac  addic 6, 6, 4
  013f2b0  addc 7, 7, 8
  013f2b4  extsw 8, 10
  013f2b8  lis 10, 163
  013f2bc  cmpw 5, 4
  013f2c0  addic 10, 10, 19456
  013f2c4  addic 3, 3, 8
  013f2c8  lbzx 8, 9, 8
  013f2cc  addc 9, 20, 11
  013f2d0  slwi 8, 8, 2
  013f2d4  lwz 7, 4(7)
  013f2d8  slwi 7, 7, 2
  013f2dc  lwz 9, 340(9)
  013f2e0  lwzx 8, 10, 8
  013f2e4  addic 8, 8, 72
  013f2e8  addc 7, 8, 7
  013f2ec  clrldi 7, 7, 32
  013f2f0  stw 9, 0(7)
  013f2f4  bt 0, 0x13f28c
  013f2f8  li 24, 10
  013f2fc  lwz 4, 4(25)
  013f300  ori 3, 31, 0
  013f304  li 7, 5
  013f308  ori 5, 21, 0
  013f30c  ori 6, 24, 0
  013f310  extsw 4, 4
  013f314  bl 0xfdf80
  013f318  nop
  013f31c  lwz 3, 4(25)
  013f320  lbz 4, 200(20)
  013f324  cmpw 3, 4
  013f328  bf 2, 0x13f338
  013f32c  li 3, 1
  013f330  stb 3, 202(20)
  013f334  b 0x13f348
  013f338  lbz 4, 201(20)
  013f33c  cmpw 3, 4
  013f340  bf 2, 0x13f348
  013f344  stb 21, 202(20)
  013f348  lwz 4, 16(25)
  013f34c  lis 3, 114
  013f350  sldi 5, 4, 4
  013f354  addic 3, 3, 4104
  013f358  subc 4, 4, 5
  013f35c  sldi 4, 4, 2
  013f360  subc 4, 5, 4
  013f364  extsw 4, 4
  013f368  lwzx 3, 3, 4
  013f36c  cmpwi 3, 2
  013f370  bf 2, 0x13f3bc
  013f374  cmpwi 29, 0
  013f378  bt 2, 0x13f39c
  013f37c  lwz 4, 20(25)
  013f380  li 7, 5
  013f384  ori 3, 29, 0
  013f388  ori 5, 21, 0
  013f38c  ori 6, 24, 0
  013f390  extsw 4, 4
  013f394  bl 0xfdf80
  013f398  nop
  013f39c  cmpwi 30, 0
  013f3a0  bt 2, 0x13f3e4
  013f3a4  li 4, 1
  013f3a8  ori 3, 30, 0
  013f3ac  ori 5, 21, 0
  013f3b0  bl 0xfdcf0
  013f3b4  nop
  013f3b8  b 0x13f3e4
  013f3bc  cmpwi 30, 0
  013f3c0  bt 2, 0x13f3e4
  013f3c4  lwz 4, 20(25)
  013f3c8  li 7, 5
  013f3cc  ori 3, 30, 0
  013f3d0  ori 5, 21, 0
  013f3d4  ori 6, 24, 0
  013f3d8  extsw 4, 4
  013f3dc  bl 0xfdf80
  013f3e0  nop
  013f3e4  lwz 30, 0(28)
  013f3e8  cmpwi 30, 0
  013f3ec  bt 2, 0x13f414
  013f3f0  ori 3, 30, 0
  013f3f4  bl 0xefb38
  013f3f8  nop
  013f3fc  lis 3, 161
  013f400  lwz 3, 1808(3)
  013f404  extsw 3, 3
  013f408  std 3, 56(30)
  013f40c  ori 30, 21, 0
  013f410  b 0x13f414
  013f414  stw 30, 0(28)
  013f418  lwz 30, 0(27)
  013f41c  cmpwi 30, 0
  013f420  bt 2, 0x13f448
  013f424  ori 3, 30, 0
  013f428  bl 0xefb38
  013f42c  nop
  013f430  lis 3, 161
  013f434  lwz 3, 1808(3)
  013f438  extsw 3, 3
  013f43c  std 3, 56(30)
  013f440  ori 30, 21, 0
  013f444  b 0x13f448
  013f448  stw 30, 0(27)
  013f44c  lwz 30, 0(26)
  013f450  cmpwi 30, 0
  013f454  bt 2, 0x13f47c
  013f458  ori 3, 30, 0
  013f45c  bl 0xefb38
  013f460  nop
  013f464  lis 3, 161
  013f468  lwz 3, 1808(3)
  013f46c  extsw 3, 3
  013f470  std 3, 56(30)
  013f474  ori 30, 21, 0
  013f478  b 0x13f47c
  013f47c  stw 30, 0(26)
  013f480  lwz 30, 24(25)
  013f484  cmpwi 30, -1
  013f488  bt 2, 0x13f5f8
  013f48c  lis 3, 163
  013f490  extsw 30, 30
  013f494  addic 3, 3, 21696
  013f498  lbzx 3, 3, 30
  013f49c  cmpwi 3, 255
  013f4a0  bf 2, 0x13f4ac
  013f4a4  ori 30, 21, 0
  013f4a8  b 0x13f508
  013f4ac  ori 3, 30, 0
  013f4b0  bl 0xefa28
  013f4b4  nop
  013f4b8  ori 30, 3, 0
  013f4bc  cmpwi 30, 0
  013f4c0  bt 2, 0x13f508
  013f4c4  li 4, 255
  013f4c8  li 5, 1
  013f4cc  ori 3, 30, 0
  013f4d0  stb 4, 48(30)
  013f4d4  sth 4, 50(30)
  013f4d8  stb 5, 49(30)
  013f4dc  stb 21, 32(30)
  013f4e0  bl 0xf31a8
  013f4e4  nop
  013f4e8  lis 4, 32
  013f4ec  li 5, 14
  013f4f0  ori 7, 21, 0
  013f4f4  ori 4, 4, 8224
  013f4f8  ori 3, 30, 0
  013f4fc  ori 6, 5, 0
  013f500  bl 0xf1ea0
  013f504  nop
  013f508  cmpwi 30, 0
  013f50c  stw 30, 0(28)
  013f510  bt 2, 0x13f5f8
  013f514  lwz 3, 24(25)
  013f518  cmpwi 3, 634
  013f51c  bt 2, 0x13f554
  013f520  lwz 4, 28(25)
  013f524  ori 3, 30, 0
  013f528  ori 5, 21, 0
  013f52c  extsw 4, 4
  013f530  bl 0xfdcf0
  013f534  nop
  013f538  lwz 3, 0(28)
  013f53c  ori 5, 21, 0
  013f540  lwz 4, 28(25)
  013f544  ori 6, 24, 0
  013f548  extsw 4, 4
  013f54c  bl 0xfddc0
  013f550  nop
  013f554  lwz 3, 0(28)
  013f558  sth 21, 52(3)
  013f55c  lwz 3, 0(28)
  013f560  lfs 1, 16(31)
  013f564  addic 4, 3, 16
  013f568  addic 3, 3, 16
  013f56c  stfs 1, 0(3)
  013f570  lfs 1, 20(31)
  013f574  stfs 1, 4(4)
  013f578  lfs 1, 24(31)
  013f57c  stfs 1, 8(4)
  013f580  lfs 1, 28(31)
  013f584  stfs 1, 12(4)
  013f588  lwz 3, 0(28)
  013f58c  lfs 1, 64(31)
  013f590  addic 4, 3, 64
  013f594  addic 3, 3, 64
  013f598  stfs 1, 0(4)
  013f59c  lfs 1, 68(31)
  013f5a0  stfs 1, 4(3)
  013f5a4  lfs 1, 72(31)
  013f5a8  stfs 1, 8(3)
  013f5ac  lfs 1, 76(31)
  013f5b0  stfs 1, 12(3)
  013f5b4  lwz 3, 0(28)
  013f5b8  lhz 4, 166(3)
  013f5bc  cmpwi 4, 74
  013f5c0  bf 2, 0x13f5dc
  013f5c4  lis 4, 20
  013f5c8  lfs 1, 44(3)
  013f5cc  addi 4, 4, -5204
  013f5d0  lfs 2, 0(4)
  013f5d4  fmuls 1, 1, 2
  013f5d8  stfs 1, 44(3)
  013f5dc  lwz 3, 0(28)
  013f5e0  bl 0xf31a8
  013f5e4  nop
  013f5e8  lis 3, 112
  013f5ec  lwz 4, 0(28)
  013f5f0  addic 3, 3, 30952
  013f5f4  stw 3, 116(4)
  013f5f8  lwz 30, 32(25)
  013f5fc  cmpwi 30, -1
  013f600  bt 2, 0x13f764
  013f604  lis 3, 163
  013f608  extsw 30, 30
  013f60c  addic 3, 3, 21696
  013f610  lbzx 3, 3, 30
  013f614  cmpwi 3, 255
  013f618  bf 2, 0x13f624
  013f61c  ori 30, 21, 0
  013f620  b 0x13f680
  013f624  ori 3, 30, 0
  013f628  bl 0xefa28
  013f62c  nop
  013f630  ori 30, 3, 0
  013f634  cmpwi 30, 0
  013f638  bt 2, 0x13f680
  013f63c  li 4, 255
  013f640  li 5, 1
  013f644  ori 3, 30, 0
  013f648  stb 4, 48(30)
  013f64c  sth 4, 50(30)
  013f650  stb 5, 49(30)
  013f654  stb 21, 32(30)
  013f658  bl 0xf31a8
  013f65c  nop
  013f660  lis 4, 32
  013f664  li 5, 14
  013f668  ori 3, 30, 0
  013f66c  ori 7, 21, 0
  013f670  ori 4, 4, 8224
  013f674  ori 6, 5, 0
  013f678  bl 0xf1ea0
  013f67c  nop
  013f680  cmpwi 30, 0
  013f684  stw 30, 0(27)
  013f688  bt 2, 0x13f764
  013f68c  lwz 4, 36(25)
  013f690  ori 3, 30, 0
  013f694  ori 5, 21, 0
  013f698  extsw 4, 4
  013f69c  bl 0xfdcf0
  013f6a0  nop
  013f6a4  lwz 3, 0(27)
  013f6a8  ori 5, 21, 0
  013f6ac  lwz 4, 36(25)
  013f6b0  ori 6, 24, 0
  013f6b4  extsw 4, 4
  013f6b8  bl 0xfddc0
  013f6bc  nop
  013f6c0  lwz 3, 0(27)
  013f6c4  sth 21, 52(3)
  013f6c8  lwz 3, 0(27)
  013f6cc  lfs 1, 16(31)
  013f6d0  addic 4, 3, 16
  013f6d4  addic 3, 3, 16
  013f6d8  stfs 1, 0(3)
  013f6dc  lfs 1, 20(31)
  013f6e0  stfs 1, 4(4)
  013f6e4  lfs 1, 24(31)
  013f6e8  stfs 1, 8(4)
  013f6ec  lfs 1, 28(31)
  013f6f0  stfs 1, 12(4)
  013f6f4  lwz 3, 0(27)
  013f6f8  lfs 1, 64(31)
  013f6fc  addic 4, 3, 64
  013f700  addic 3, 3, 64
  013f704  stfs 1, 0(4)
  013f708  lfs 1, 68(31)
  013f70c  stfs 1, 4(3)
  013f710  lfs 1, 72(31)
  013f714  stfs 1, 8(3)
  013f718  lfs 1, 76(31)
  013f71c  stfs 1, 12(3)
  013f720  lwz 30, 0(27)
  013f724  lhz 3, 166(30)
  013f728  cmpwi 3, 74
  013f72c  bf 2, 0x13f748
  013f730  lis 3, 20
  013f734  lfs 1, 44(30)
  013f738  addi 3, 3, -5204
  013f73c  lfs 2, 0(3)
  013f740  fmuls 1, 1, 2
  013f744  stfs 1, 44(30)
  013f748  lwz 3, 0(27)
  013f74c  bl 0xf31a8
  013f750  nop
  013f754  lis 3, 112
  013f758  lwz 4, 0(27)
  013f75c  addic 3, 3, 30952
  013f760  stw 3, 116(4)
  013f764  lwz 30, 40(25)
  013f768  cmpwi 30, -1
  013f76c  bt 2, 0x13f8d0
  013f770  lis 3, 163
  013f774  extsw 30, 30
  013f778  addic 3, 3, 21696
  013f77c  lbzx 3, 3, 30
  013f780  cmpwi 3, 255
  013f784  bf 2, 0x13f790
  013f788  ori 30, 21, 0
  013f78c  b 0x13f7ec
  013f790  ori 3, 30, 0
  013f794  bl 0xefa28
  013f798  nop
  013f79c  ori 30, 3, 0
  013f7a0  cmpwi 30, 0
  013f7a4  bt 2, 0x13f7ec
  013f7a8  li 4, 255
  013f7ac  li 5, 1
  013f7b0  ori 3, 30, 0
  013f7b4  stb 4, 48(30)
  013f7b8  sth 4, 50(30)
  013f7bc  stb 5, 49(30)
  013f7c0  stb 21, 32(30)
  013f7c4  bl 0xf31a8
  013f7c8  nop
  013f7cc  lis 4, 32
  013f7d0  li 5, 14
  013f7d4  ori 3, 30, 0
  013f7d8  ori 7, 21, 0
  013f7dc  ori 4, 4, 8224
  013f7e0  ori 6, 5, 0
  013f7e4  bl 0xf1ea0
  013f7e8  nop
  013f7ec  cmpwi 30, 0
  013f7f0  stw 30, 0(26)
  013f7f4  bt 2, 0x13f8d0
  013f7f8  lwz 4, 44(25)
  013f7fc  ori 3, 30, 0
  013f800  ori 5, 21, 0
  013f804  extsw 4, 4
  013f808  bl 0xfdcf0
  013f80c  nop
  013f810  lwz 3, 0(26)
  013f814  ori 5, 21, 0
  013f818  lwz 4, 44(25)
  013f81c  ori 6, 24, 0
  013f820  extsw 4, 4
  013f824  bl 0xfddc0
  013f828  nop
  013f82c  lwz 3, 0(26)
  013f830  sth 21, 52(3)
  013f834  lwz 3, 0(26)
  013f838  lfs 1, 16(31)
  013f83c  addic 4, 3, 16
  013f840  addic 3, 3, 16
  013f844  stfs 1, 0(3)
  013f848  lfs 1, 20(31)
  013f84c  stfs 1, 4(4)
  013f850  lfs 1, 24(31)
  013f854  stfs 1, 8(4)
  013f858  lfs 1, 28(31)
  013f85c  stfs 1, 12(4)
  013f860  lwz 3, 0(26)
  013f864  lfs 1, 64(31)
  013f868  addic 4, 3, 64
  013f86c  addic 3, 3, 64
  013f870  stfs 1, 0(4)
  013f874  lfs 1, 68(31)
  013f878  stfs 1, 4(3)
  013f87c  lfs 1, 72(31)
  013f880  stfs 1, 8(3)
  013f884  lfs 1, 76(31)
  013f888  stfs 1, 12(3)
  013f88c  lwz 31, 0(26)
  013f890  lhz 3, 166(31)
  013f894  cmpwi 3, 74
  013f898  bf 2, 0x13f8b4
  013f89c  lis 3, 20
  013f8a0  lfs 1, 44(31)
  013f8a4  addi 3, 3, -5204
  013f8a8  lfs 2, 0(3)
  013f8ac  fmuls 1, 1, 2
  013f8b0  stfs 1, 44(31)
  013f8b4  lwz 3, 0(26)
  013f8b8  bl 0xf31a8
  013f8bc  nop
  013f8c0  lis 3, 112
  013f8c4  lwz 4, 0(26)
  013f8c8  addic 3, 3, 30952
  013f8cc  stw 3, 116(4)
  013f8d0  ori 3, 21, 0
  013f8d4  ld 0, 512(1)
  013f8d8  mtlr 0
  013f8dc  ld 16, 368(1)
  013f8e0  ld 17, 376(1)
  013f8e4  ld 18, 384(1)
  013f8e8  ld 19, 392(1)
  013f8ec  ld 20, 400(1)
  013f8f0  ld 21, 408(1)
  013f8f4  ld 22, 416(1)
  013f8f8  ld 23, 424(1)
  013f8fc  ld 24, 432(1)
  013f900  ld 25, 440(1)
  013f904  ld 26, 448(1)
  013f908  ld 27, 456(1)
  013f90c  ld 28, 464(1)
  013f910  ld 29, 472(1)
  013f914  ld 30, 480(1)
  013f918  ld 31, 488(1)
  013f91c  addi 1, 1, 496
  013f920  blr

PushMenuQueueEntry:   # 0x13f924, 0xf0 bytes
  013f924  stdu 1, -128(1)
  013f928  lis 11, 165
  013f92c  li 12, 128
  013f930  std 31, 120(1)
  013f934  addc 12, 1, 12
  013f938  lwz 31, 11932(11)
  013f93c  std 29, 104(1)
  013f940  std 28, 96(1)
  013f944  cmpwi 31, 8
  013f948  lwz 28, 116(12)
  013f94c  std 30, 112(1)
  013f950  lwz 29, 124(12)
  013f954  lwz 30, 132(12)
  013f958  lwz 31, 140(12)
  013f95c  std 27, 88(1)
  013f960  std 26, 80(1)
  013f964  std 25, 72(1)
  013f968  std 24, 64(1)
  013f96c  std 23, 56(1)
  013f970  lwz 12, 148(12)
  013f974  bt 0, 0x13f980
  013f978  li 3, -1
  013f97c  b 0x13f9e8
  013f980  lwz 25, 11932(11)
  013f984  lis 27, 165
  013f988  sldi 24, 25, 6
  013f98c  sldi 23, 25, 3
  013f990  addic 25, 25, 1
  013f994  addic 27, 27, 11936
  013f998  subc 24, 24, 23
  013f99c  li 26, 0
  013f9a0  addc 27, 27, 24
  013f9a4  stw 25, 11932(11)
  013f9a8  clrldi 11, 27, 32
  013f9ac  stw 3, 4(11)
  013f9b0  stw 26, 0(11)
  013f9b4  stw 4, 8(11)
  013f9b8  ori 3, 26, 0
  013f9bc  stw 5, 12(11)
  013f9c0  stw 6, 16(11)
  013f9c4  stw 7, 20(11)
  013f9c8  stw 8, 24(11)
  013f9cc  stw 9, 28(11)
  013f9d0  stw 10, 32(11)
  013f9d4  stw 28, 36(11)
  013f9d8  stw 29, 40(11)
  013f9dc  stw 30, 44(11)
  013f9e0  stw 31, 48(11)
  013f9e4  stw 12, 52(11)
  013f9e8  ld 23, 56(1)
  013f9ec  ld 24, 64(1)
  013f9f0  ld 25, 72(1)
  013f9f4  ld 26, 80(1)
  013f9f8  ld 27, 88(1)
  013f9fc  ld 28, 96(1)
  013fa00  ld 29, 104(1)
  013fa04  ld 30, 112(1)
  013fa08  ld 31, 120(1)
  013fa0c  addi 1, 1, 128
  013fa10  blr

STUB_0013fa14:   # 0x13fa14, 0x4 bytes
  013fa14  blr

SetFrameCount:   # 0x13fa18, 0x74 bytes
  013fa18  lis 3, 161
  013fa1c  lbz 3, 24378(3)
  013fa20  cmpwi 3, 0
  013fa24  bf 2, 0x13fa88
  013fa28  lis 3, 151
  013fa2c  lis 4, 20971
  013fa30  ori 4, 4, 34079
  013fa34  lwz 5, -13824(3)
  013fa38  addic 5, 5, 1
  013fa3c  mulhw 4, 4, 5
  013fa40  stw 5, -13824(3)
  013fa44  srawi 4, 4, 4
  013fa48  srwi 6, 4, 31
  013fa4c  addc 4, 4, 6
  013fa50  sldi 6, 4, 4
  013fa54  addc 4, 4, 6
  013fa58  addc 6, 6, 4
  013fa5c  addc 4, 6, 4
  013fa60  subc 4, 5, 4
  013fa64  cmpwi 4, 0
  013fa68  bf 2, 0x13fa88
  013fa6c  lis 4, 150
  013fa70  lwz 4, 27368(4)
  013fa74  cmpwi 4, 0
  013fa78  bt 2, 0x13fa88
  013fa7c  lwz 4, -13824(3)
  013fa80  addic 4, 4, 10
  013fa84  stw 4, -13824(3)
  013fa88  blr

MenuText_Update:   # 0x13fa8c, 0x9c bytes
  013fa8c  lis 4, 165
  013fa90  ori 5, 3, 0
  013fa94  addic 4, 4, 11184
  013fa98  lwz 3, 4(4)
  013fa9c  lwz 6, 64(3)
  013faa0  subc 5, 6, 5
  013faa4  cmpwi 5, 0
  013faa8  bt 2, 0x13fab4
  013faac  li 3, 0
  013fab0  b 0x13fb24
  013fab4  lis 5, 150
  013fab8  li 6, 3328
  013fabc  addic 5, 5, 19008
  013fac0  lwz 5, 196(5)
  013fac4  and 6, 5, 6
  013fac8  cmpwi 6, 0
  013facc  bt 2, 0x13fae4
  013fad0  lwz 6, 288(4)
  013fad4  cmpwi 6, 0
  013fad8  bf 2, 0x13fae4
  013fadc  li 3, 1
  013fae0  b 0x13fb24
  013fae4  rlwinm 5, 5, 0, 27, 27
  013fae8  cmpwi 5, 0
  013faec  bt 2, 0x13fb20
  013faf0  lwz 3, 56(3)
  013faf4  cmpwi 3, 0
  013faf8  bt 2, 0x13fb0c
  013fafc  ori 5, 3, 0
  013fb00  li 3, 0
  013fb04  stw 5, 8(4)
  013fb08  b 0x13fb24
  013fb0c  lwz 3, 288(4)
  013fb10  cmpwi 3, 0
  013fb14  bf 2, 0x13fb20
  013fb18  li 3, -1
  013fb1c  b 0x13fb24
  013fb20  li 3, 0
  013fb24  blr

IconList_Update:   # 0x13fb28, 0x1e0 bytes
  013fb28  stdu 1, -128(1)
  013fb2c  mflr 0
  013fb30  std 0, 144(1)
  013fb34  std 31, 120(1)
  013fb38  ori 31, 3, 0
  013fb3c  lis 3, 150
  013fb40  li 5, 3328
  013fb44  std 30, 112(1)
  013fb48  addic 3, 3, 19008
  013fb4c  ori 30, 31, 0
  013fb50  lwz 4, 196(3)
  013fb54  and 5, 4, 5
  013fb58  cmpwi 5, 0
  013fb5c  bt 2, 0x13fb7c
  013fb60  lis 5, 165
  013fb64  addic 5, 5, 11184
  013fb68  lwz 5, 288(5)
  013fb6c  cmpwi 5, 0
  013fb70  bf 2, 0x13fb7c
  013fb74  li 3, 1
  013fb78  b 0x13fcf0
  013fb7c  rlwinm 4, 4, 0, 27, 27
  013fb80  cmpwi 4, 0
  013fb84  bt 2, 0x13fbc4
  013fb88  lis 4, 165
  013fb8c  addic 4, 4, 11184
  013fb90  lwz 5, 4(4)
  013fb94  lwz 6, 56(5)
  013fb98  cmpwi 6, 0
  013fb9c  bt 2, 0x13fbb0
  013fba0  lwz 5, 56(5)
  013fba4  li 3, 0
  013fba8  stw 5, 8(4)
  013fbac  b 0x13fcf0
  013fbb0  lwz 4, 288(4)
  013fbb4  cmpwi 4, 0
  013fbb8  bf 2, 0x13fbc4
  013fbbc  li 3, -1
  013fbc0  b 0x13fcf0
  013fbc4  lwz 4, 196(3)
  013fbc8  lwz 3, 60(31)
  013fbcc  rlwinm 5, 4, 0, 19, 19
  013fbd0  cmpwi 5, 0
  013fbd4  bt 2, 0x13fbe8
  013fbd8  cmpwi 3, 0
  013fbdc  bt 2, 0x13fbe8
  013fbe0  addic 5, 3, -1
  013fbe4  stw 5, 60(31)
  013fbe8  rlwinm 4, 4, 0, 17, 17
  013fbec  cmpwi 4, 0
  013fbf0  bt 2, 0x13fc0c
  013fbf4  lwz 4, 60(31)
  013fbf8  lwz 5, 64(31)
  013fbfc  addic 4, 4, 1
  013fc00  cmpw 4, 5
  013fc04  bf 0, 0x13fc0c
  013fc08  stw 4, 60(31)
  013fc0c  lwz 4, 60(31)
  013fc10  cmpw 4, 3
  013fc14  bt 2, 0x13fc2c
  013fc18  li 3, 1
  013fc1c  li 4, 17
  013fc20  lwz 5, 20(30)
  013fc24  bl 0x15d12c
  013fc28  nop
  013fc2c  lis 3, -8857
  013fc30  lwz 30, 36(30)
  013fc34  lwz 4, 64(31)
  013fc38  ori 3, 3, 51367
  013fc3c  mulhw 3, 3, 30
  013fc40  addc 3, 3, 30
  013fc44  srawi 3, 3, 5
  013fc48  srwi 5, 3, 31
  013fc4c  addc 3, 3, 5
  013fc50  cmpw 3, 4
  013fc54  bt 0, 0x13fc64
  013fc58  li 3, 5
  013fc5c  stw 3, 92(31)
  013fc60  b 0x13fcec
  013fc64  lis 3, -8857
  013fc68  lwz 5, 96(31)
  013fc6c  addic 4, 30, -40
  013fc70  ori 3, 3, 51367
  013fc74  mulhw 3, 3, 4
  013fc78  addc 3, 3, 4
  013fc7c  lwz 4, 60(31)
  013fc80  srawi 3, 3, 5
  013fc84  cmpw 5, 4
  013fc88  srwi 5, 3, 31
  013fc8c  addc 3, 3, 5
  013fc90  bt 0, 0x13fcb0
  013fc94  ori 5, 4, 0
  013fc98  li 4, 0
  013fc9c  addic 5, 5, -1
  013fca0  cmpwi 5, 0
  013fca4  bt 0, 0x13fcac
  013fca8  ori 4, 5, 0
  013fcac  stw 4, 96(31)
  013fcb0  lwz 5, 60(31)
  013fcb4  lwz 4, 96(31)
  013fcb8  subc 3, 5, 3
  013fcbc  addic 3, 3, 2
  013fcc0  cmpw 4, 3
  013fcc4  bf 0, 0x13fcd0
  013fcc8  ori 4, 3, 0
  013fccc  b 0x13fcd0
  013fcd0  sldi 3, 4, 5
  013fcd4  sldi 5, 4, 2
  013fcd8  stw 4, 96(31)
  013fcdc  addc 3, 4, 3
  013fce0  addc 3, 3, 5
  013fce4  subfic 3, 3, 23
  013fce8  stw 3, 92(31)
  013fcec  li 3, 0
  013fcf0  ld 0, 144(1)
  013fcf4  mtlr 0
  013fcf8  ld 30, 112(1)
  013fcfc  ld 31, 120(1)
  013fd00  addi 1, 1, 128
  013fd04  blr

IconList_Draw:   # 0x13fd08, 0x2c0 bytes
  013fd08  stdu 1, -224(1)
  013fd0c  mflr 0
  013fd10  std 0, 240(1)
  013fd14  std 31, 216(1)
  013fd18  std 27, 184(1)
  013fd1c  ori 31, 3, 0
  013fd20  std 24, 160(1)
  013fd24  li 27, 0
  013fd28  ori 24, 31, 0
  013fd2c  ori 3, 27, 0
  013fd30  std 30, 208(1)
  013fd34  lwz 4, 32(31)
  013fd38  std 29, 200(1)
  013fd3c  lwz 30, 92(24)
  013fd40  addic 29, 4, -32
  013fd44  std 26, 176(1)
  013fd48  extsw 30, 30
  013fd4c  srawi 29, 29, 1
  013fd50  std 28, 192(1)
  013fd54  std 25, 168(1)
  013fd58  std 23, 152(1)
  013fd5c  std 22, 144(1)
  013fd60  std 21, 136(1)
  013fd64  std 20, 128(1)
  013fd68  std 19, 120(1)
  013fd6c  ori 26, 30, 0
  013fd70  bl 0x6d704
  013fd74  nop
  013fd78  lwz 3, 64(24)
  013fd7c  cmpw 3, 27
  013fd80  bf 1, 0x13fe98
  013fd84  li 28, 0
  013fd88  lwz 3, 72(24)
  013fd8c  lwz 4, 60(24)
  013fd90  addc 25, 3, 28
  013fd94  cmpw 4, 27
  013fd98  clrldi 25, 25, 32
  013fd9c  bf 2, 0x13fe4c
  013fda0  lis 3, 346
  013fda4  addic 4, 29, -3
  013fda8  addic 5, 29, 35
  013fdac  extsw 23, 4
  013fdb0  addic 4, 30, -3
  013fdb4  lwz 3, -15568(3)
  013fdb8  extsw 22, 5
  013fdbc  addic 5, 30, 35
  013fdc0  clrlwi 3, 3, 26
  013fdc4  extsw 21, 4
  013fdc8  extsw 20, 5
  013fdcc  addic 3, 3, -32
  013fdd0  bl 0x5c4988
  013fdd4  nop
  013fdd8  lis 4, 1
  013fddc  addic 3, 3, 64
  013fde0  ori 4, 4, 514
  013fde4  mullw 4, 3, 4
  013fde8  lis 5, -32768
  013fdec  li 19, 1
  013fdf0  or 7, 4, 5
  013fdf4  ori 4, 21, 0
  013fdf8  ori 3, 23, 0
  013fdfc  clrldi 7, 7, 32
  013fe00  ori 5, 22, 0
  013fe04  ori 6, 20, 0
  013fe08  ori 8, 19, 0
  013fe0c  bl 0xca72c
  013fe10  nop
  013fe14  lis 4, 115
  013fe18  addic 5, 21, 2
  013fe1c  addic 6, 22, -2
  013fe20  addic 3, 23, 2
  013fe24  addic 9, 20, -2
  013fe28  lwz 7, -26560(4)
  013fe2c  extsw 4, 5
  013fe30  extsw 5, 6
  013fe34  extsw 3, 3
  013fe38  ori 8, 19, 0
  013fe3c  extsw 7, 7
  013fe40  extsw 6, 9
  013fe44  bl 0xca72c
  013fe48  nop
  013fe4c  lhz 3, 0(25)
  013fe50  lhz 4, 2(25)
  013fe54  extsh 4, 4
  013fe58  bl 0xca3e4
  013fe5c  nop
  013fe60  li 6, 32
  013fe64  li 8, 128
  013fe68  ori 7, 6, 0
  013fe6c  ori 4, 29, 0
  013fe70  ori 5, 30, 0
  013fe74  bl 0xca0f4
  013fe78  nop
  013fe7c  lwz 3, 64(24)
  013fe80  addic 27, 27, 1
  013fe84  addic 30, 30, 37
  013fe88  cmpw 27, 3
  013fe8c  extsw 30, 30
  013fe90  addic 28, 28, 10
  013fe94  bt 0, 0x13fd88
  013fe98  cmpwi 26, 0
  013fe9c  bf 0, 0x13fefc
  013fea0  lis 5, 115
  013fea4  lwz 7, 32(31)
  013fea8  li 3, 0
  013feac  li 6, 20
  013feb0  ori 4, 3, 0
  013feb4  lwz 8, -26560(5)
  013feb8  extsw 5, 7
  013febc  extsw 7, 8
  013fec0  ori 8, 3, 0
  013fec4  bl 0xca72c
  013fec8  nop
  013fecc  lis 3, 0
  013fed0  li 4, 6
  013fed4  ori 3, 3, 59806
  013fed8  bl 0xca3e4
  013fedc  nop
  013fee0  li 5, 2
  013fee4  li 6, 32
  013fee8  li 7, 16
  013feec  li 8, 128
  013fef0  ori 4, 29, 0
  013fef4  bl 0xcc0f0
  013fef8  nop
  013fefc  lwz 3, 36(31)
  013ff00  slwi 4, 3, 4
  013ff04  cmpw 30, 4
  013ff08  bf 1, 0x13ff78
  013ff0c  lis 5, 115
  013ff10  lwz 7, 32(31)
  013ff14  ori 4, 3, 0
  013ff18  extsw 6, 3
  013ff1c  li 3, 0
  013ff20  addic 4, 4, -20
  013ff24  lwz 9, -26560(5)
  013ff28  ori 8, 3, 0
  013ff2c  extsw 5, 7
  013ff30  extsw 4, 4
  013ff34  extsw 7, 9
  013ff38  bl 0xca72c
  013ff3c  nop
  013ff40  lis 3, 0
  013ff44  li 4, 6
  013ff48  ori 3, 3, 59806
  013ff4c  bl 0xca3e4
  013ff50  nop
  013ff54  lwz 4, 36(31)
  013ff58  li 6, 2
  013ff5c  li 7, 16
  013ff60  addic 5, 4, -18
  013ff64  srawi 4, 29, 4
  013ff68  extsw 5, 5
  013ff6c  li 8, 128
  013ff70  bl 0xcbb98
  013ff74  nop
  013ff78  bl 0x6d708
  013ff7c  nop
  013ff80  li 3, 2
  013ff84  ld 0, 240(1)
  013ff88  mtlr 0
  013ff8c  ld 19, 120(1)
  013ff90  ld 20, 128(1)
  013ff94  ld 21, 136(1)
  013ff98  ld 22, 144(1)
  013ff9c  ld 23, 152(1)
  013ffa0  ld 24, 160(1)
  013ffa4  ld 25, 168(1)
  013ffa8  ld 26, 176(1)
  013ffac  ld 27, 184(1)
  013ffb0  ld 28, 192(1)
  013ffb4  ld 29, 200(1)
  013ffb8  ld 30, 208(1)
  013ffbc  ld 31, 216(1)
  013ffc0  addi 1, 1, 224
  013ffc4  blr

SelectItemList_OnEnter:   # 0x13ffc8, 0x34 bytes
  013ffc8  lis 4, 150
  013ffcc  lwz 4, 27376(4)
  013ffd0  cmpwi 4, 0
  013ffd4  bt 2, 0x13ffe4
  013ffd8  lis 4, 115
  013ffdc  addic 4, 4, 636
  013ffe0  b 0x13ffec
  013ffe4  lis 4, 115
  013ffe8  addic 4, 4, 684
  013ffec  ori 5, 3, 0
  013fff0  li 3, 0
  013fff4  stw 4, 52(5)
  013fff8  blr

BuildCheatsList:   # 0x13fffc, 0x148 bytes
  013fffc  stdu 1, -128(1)
  0140000  li 3, 1
  0140004  li 6, 3
  0140008  li 5, 0
  014000c  li 4, 4
  0140010  stw 3, 76(1)
  0140014  li 7, 6
  0140018  li 3, 7
  014001c  stw 6, 80(1)
  0140020  li 8, 2
  0140024  stw 5, 84(1)
  0140028  li 6, -1
  014002c  stw 4, 92(1)
  0140030  li 9, 20506
  0140034  stw 3, 88(1)
  0140038  li 4, 20507
  014003c  stw 7, 96(1)
  0140040  li 3, 20508
  0140044  stw 8, 100(1)
  0140048  li 7, 20509
  014004c  stw 6, 104(1)
  0140050  li 8, 20510
  0140054  stw 9, 48(1)
  0140058  li 10, 20512
  014005c  stw 4, 52(1)
  0140060  li 9, 20513
  0140064  stw 3, 56(1)
  0140068  stw 7, 60(1)
  014006c  ori 4, 5, 0
  0140070  stw 8, 64(1)
  0140074  stw 10, 68(1)
  0140078  std 31, 120(1)
  014007c  ori 6, 4, 0
  0140080  stw 9, 72(1)
  0140084  cmpwi 4, 12
  0140088  bf 0, 0x140118
  014008c  slwi 3, 4, 2
  0140090  addc 3, 1, 3
  0140094  clrldi 3, 3, 32
  0140098  lwz 7, 76(3)
  014009c  cmpwi 7, -1
  01400a0  bt 2, 0x140118
  01400a4  lis 7, 151
  01400a8  lwz 8, 76(3)
  01400ac  addic 7, 7, -16256
  01400b0  extsw 8, 8
  01400b4  lbzx 7, 7, 8
  01400b8  cmpwi 7, 0
  01400bc  bt 2, 0x140110
  01400c0  sldi 7, 6, 4
  01400c4  sldi 10, 6, 2
  01400c8  lis 8, 165
  01400cc  addc 7, 7, 10
  01400d0  lis 9, 151
  01400d4  addic 8, 8, 13192
  01400d8  lwz 10, 48(3)
  01400dc  extsw 7, 7
  01400e0  lwz 3, 76(3)
  01400e4  addic 9, 9, -16268
  01400e8  addc 12, 8, 7
  01400ec  li 11, 20314
  01400f0  addc 3, 9, 3
  01400f4  li 31, 20315
  01400f8  stwx 10, 8, 7
  01400fc  addic 6, 6, 1
  0140100  stw 11, 8(12)
  0140104  stw 3, 4(12)
  0140108  stw 31, 12(12)
  014010c  stw 5, 16(12)
  0140110  addic 4, 4, 1
  0140114  b 0x140084
  0140118  sldi 3, 6, 4
  014011c  sldi 6, 6, 2
  0140120  lis 4, 165
  0140124  addc 6, 3, 6
  0140128  addic 4, 4, 13192
  014012c  extsw 6, 6
  0140130  ori 3, 5, 0
  0140134  stwx 5, 4, 6
  0140138  ld 31, 120(1)
  014013c  addi 1, 1, 128
  0140140  blr

CameraSettings_OnEnter:   # 0x140144, 0x8 bytes
  0140144  li 3, 0
  0140148  blr

CameraSettings_OnExit:   # 0x14014c, 0x8 bytes
  014014c  li 3, 0
  0140150  blr

MenuText_OnEnter:   # 0x140154, 0x10 bytes
  0140154  li 4, -1
  0140158  stw 4, 68(3)
  014015c  li 3, 0
  0140160  blr

GetMenuFadeColor:   # 0x140170, 0x148 bytes
  0140170  stdu 1, -128(1)
  0140174  mflr 0
  0140178  std 0, 144(1)
  014017c  ori 6, 5, 0
  0140180  ori 5, 3, 0
  0140184  ori 3, 6, 0
  0140188  cmpwi 4, -1
  014018c  cmpwi 1, 3, -1
  0140190  bf 2, 0x14019c
  0140194  lis 4, -32513
  0140198  ori 4, 4, 43144
  014019c  bf 6, 0x1401a8
  01401a0  lis 3, -32736
  01401a4  ori 3, 3, 65535
  01401a8  cmpwi 5, 0
  01401ac  bf 0, 0x1401b4
  01401b0  li 5, 0
  01401b4  lis 7, 115
  01401b8  lwz 6, -26552(7)
  01401bc  extsw 6, 6
  01401c0  std 6, 112(1)
  01401c4  lis 6, 20
  01401c8  addi 8, 6, 356
  01401cc  lis 6, 114
  01401d0  lfs 2, 0(8)
  01401d4  lfs 1, -3056(6)
  01401d8  lfd 3, 112(1)
  01401dc  fcfid 3, 3
  01401e0  frsp 3, 3
  01401e4  fadds 3, 3, 2
  01401e8  fmuls 1, 1, 3
  01401ec  fctiwz 1, 1
  01401f0  stfd 1, 112(1)
  01401f4  lwz 9, 116(1)
  01401f8  lfs 1, 4(8)
  01401fc  cmpw 5, 9
  0140200  bt 1, 0x140294
  0140204  lwz 7, -26552(7)
  0140208  extsw 8, 7
  014020c  std 8, 112(1)
  0140210  lfs 3, -3056(6)
  0140214  lfd 4, 112(1)
  0140218  fcfid 4, 4
  014021c  extsw 6, 7
  0140220  frsp 4, 4
  0140224  fadds 4, 4, 2
  0140228  fmuls 4, 3, 4
  014022c  fctiwz 4, 4
  0140230  stfd 4, 112(1)
  0140234  lwz 7, 116(1)
  0140238  subc 5, 7, 5
  014023c  extsw 5, 5
  0140240  std 5, 112(1)
  0140244  lfd 4, 112(1)
  0140248  std 6, 112(1)
  014024c  fcfid 4, 4
  0140250  frsp 4, 4
  0140254  lfd 5, 112(1)
  0140258  fcfid 5, 5
  014025c  frsp 5, 5
  0140260  fadds 2, 5, 2
  0140264  fmuls 2, 3, 2
  0140268  fctiwz 2, 2
  014026c  stfd 2, 112(1)
  0140270  lwz 5, 116(1)
  0140274  extsw 5, 5
  0140278  std 5, 112(1)
  014027c  lfd 2, 112(1)
  0140280  fcfid 2, 2
  0140284  frsp 2, 2
  0140288  fdivs 2, 4, 2
  014028c  fsubs 1, 1, 2
  0140290  b 0x140294
  0140294  ori 5, 3, 0
  0140298  ori 3, 4, 0
  014029c  ori 4, 5, 0
  01402a0  bl 0x5027bc
  01402a4  nop
  01402a8  ld 0, 144(1)
  01402ac  mtlr 0
  01402b0  addi 1, 1, 128
  01402b4  blr

MenuText_Draw:   # 0x1402c8, 0x1138 bytes
  01402c8  stdu 1, -352(1)
  01402cc  mflr 0
  01402d0  std 0, 368(1)
  01402d4  stfd 30, 336(1)
  01402d8  stfd 31, 344(1)
  01402dc  std 21, 248(1)
  01402e0  lis 4, 20
  01402e4  std 24, 272(1)
  01402e8  lis 21, 346
  01402ec  addi 4, 4, 696
  01402f0  std 29, 312(1)
  01402f4  std 22, 256(1)
  01402f8  li 24, 0
  01402fc  lis 29, 101
  0140300  std 30, 320(1)
  0140304  ori 22, 24, 0
  0140308  ori 30, 3, 0
  014030c  lfs 31, 0(4)
  0140310  std 28, 304(1)
  0140314  addic 29, 29, 13540
  0140318  lbz 4, -15535(21)
  014031c  std 31, 328(1)
  0140320  ori 28, 22, 0
  0140324  ori 31, 3, 0
  0140328  fmr 30, 31
  014032c  std 27, 296(1)
  0140330  std 26, 288(1)
  0140334  std 25, 280(1)
  0140338  std 23, 264(1)
  014033c  std 20, 240(1)
  0140340  cmpwi 4, 0
  0140344  bf 2, 0x140354
  0140348  lis 27, 115
  014034c  addic 27, 27, 26800
  0140350  b 0x14035c
  0140354  lis 27, 115
  0140358  addic 27, 27, 29584
  014035c  lwz 3, 48(30)
  0140360  li 26, 1
  0140364  rlwinm 4, 3, 0, 28, 28
  0140368  ori 23, 26, 0
  014036c  cmpwi 4, 0
  0140370  bt 2, 0x140398
  0140374  lbz 4, -15535(21)
  0140378  cmpwi 4, 0
  014037c  bf 2, 0x140390
  0140380  lis 27, 115
  0140384  li 26, 3
  0140388  addic 27, 27, 28656
  014038c  b 0x140398
  0140390  lis 27, 115
  0140394  addic 27, 27, 29584
  0140398  rlwinm 3, 3, 0, 27, 27
  014039c  cmpwi 3, 0
  01403a0  bt 2, 0x1403cc
  01403a4  lbz 3, -15535(21)
  01403a8  cmpwi 3, 0
  01403ac  bf 2, 0x1403c0
  01403b0  lis 27, 115
  01403b4  li 26, 2
  01403b8  addic 27, 27, 27728
  01403bc  b 0x1403cc
  01403c0  lis 27, 115
  01403c4  ori 26, 23, 0
  01403c8  addic 27, 27, 29584
  01403cc  ori 3, 24, 0
  01403d0  li 25, 3
  01403d4  ori 4, 23, 0
  01403d8  ori 5, 24, 0
  01403dc  ori 6, 23, 0
  01403e0  ori 7, 24, 0
  01403e4  bl 0x502ea8
  01403e8  nop
  01403ec  ori 4, 3, 0
  01403f0  ori 3, 25, 0
  01403f4  bl 0x174f80
  01403f8  nop
  01403fc  ori 3, 23, 0
  0140400  li 25, 22
  0140404  li 4, 5
  0140408  ori 8, 24, 0
  014040c  li 5, 4
  0140410  ori 10, 23, 0
  0140414  ori 6, 24, 0
  0140418  ori 7, 24, 0
  014041c  ori 9, 24, 0
  0140420  bl 0x502f7c
  0140424  nop
  0140428  ori 4, 3, 0
  014042c  ori 3, 25, 0
  0140430  bl 0x174f80
  0140434  nop
  0140438  lwz 3, 48(30)
  014043c  rlwinm 4, 3, 0, 26, 26
  0140440  cmpwi 4, 0
  0140444  bt 2, 0x140470
  0140448  lis 3, 151
  014044c  lwz 3, -25488(3)
  0140450  addic 25, 3, -1
  0140454  extsw 25, 25
  0140458  cmpwi 1, 25, 17
  014045c  cmpwi 25, 0
  0140460  crnor 2, 0, 5
  0140464  bt 2, 0x140794
  0140468  li 25, -1
  014046c  b 0x140794
  0140470  rlwinm 4, 3, 0, 25, 25
  0140474  cmpwi 4, 0
  0140478  bt 2, 0x140494
  014047c  lis 3, 162
  0140480  addic 3, 3, 1216
  0140484  lwz 3, 548(3)
  0140488  addic 25, 3, -1
  014048c  extsw 25, 25
  0140490  b 0x140794
  0140494  rlwinm 4, 3, 0, 29, 29
  0140498  cmpwi 4, 0
  014049c  bt 2, 0x1405e8
  01404a0  lis 3, 115
  01404a4  lis 4, 20
  01404a8  lwz 3, -26552(3)
  01404ac  extsw 3, 3
  01404b0  std 3, 224(1)
  01404b4  addi 3, 4, 696
  01404b8  lis 4, 114
  01404bc  lfs 1, 4(3)
  01404c0  lfs 2, -3056(4)
  01404c4  lwz 3, 68(30)
  01404c8  lfd 3, 224(1)
  01404cc  fcfid 3, 3
  01404d0  frsp 3, 3
  01404d4  fadds 3, 3, 1
  01404d8  fmuls 2, 2, 3
  01404dc  fctiwz 2, 2
  01404e0  stfd 2, 224(1)
  01404e4  lwz 4, 228(1)
  01404e8  cmpw 3, 4
  01404ec  bf 0, 0x1405d8
  01404f0  lis 3, 115
  01404f4  lwz 3, -26552(3)
  01404f8  extsw 3, 3
  01404fc  std 3, 224(1)
  0140500  lis 3, 114
  0140504  li 0, 208
  0140508  lfs 2, -3056(3)
  014050c  lfd 3, 224(1)
  0140510  fcfid 3, 3
  0140514  frsp 3, 3
  0140518  fadds 1, 3, 1
  014051c  fmuls 1, 2, 1
  0140520  fctiwz 1, 1
  0140524  stfd 1, 224(1)
  0140528  lwz 3, 228(1)
  014052c  stw 3, 208(1)
  0140530  stw 3, 212(1)
  0140534  stw 3, 216(1)
  0140538  stw 3, 220(1)
  014053c  lvx 2, 1, 0
  0140540  vspltw 2, 2, 0
  0140544  vspltw 2, 2, 0
  0140548  vspltw 2, 2, 0
  014054c  vspltw 2, 2, 0
  0140550  vspltw 2, 2, 0
  0140554  vspltw 2, 2, 0
  0140558  vspltw 2, 2, 0
  014055c  li 3, 68
  0140560  vspltw 2, 2, 0
  0140564  vspltw 2, 2, 0
  0140568  vspltw 2, 2, 0
  014056c  vspltw 2, 2, 0
  0140570  vspltw 2, 2, 0
  0140574  vspltw 2, 2, 0
  0140578  vspltw 2, 2, 0
  014057c  vspltw 2, 2, 0
  0140580  vspltw 2, 2, 0
  0140584  vspltw 2, 2, 0
  0140588  vspltw 2, 2, 0
  014058c  vspltw 2, 2, 0
  0140590  vspltw 2, 2, 0
  0140594  vspltw 2, 2, 0
  0140598  vspltw 2, 2, 0
  014059c  vspltw 2, 2, 0
  01405a0  vspltw 2, 2, 0
  01405a4  vspltw 2, 2, 0
  01405a8  vspltw 2, 2, 0
  01405ac  vspltw 2, 2, 0
  01405b0  vspltw 2, 2, 0
  01405b4  vspltw 2, 2, 0
  01405b8  vspltw 2, 2, 0
  01405bc  vspltw 2, 2, 0
  01405c0  vspltw 2, 2, 0
  01405c4  vspltw 2, 2, 0
  01405c8  vspltw 2, 2, 0
  01405cc  vspltw 2, 2, 0
  01405d0  vspltw 2, 2, 0
  01405d4  stvewx 2, 3, 30
  01405d8  ori 25, 24, 0
  01405dc  stw 25, 72(30)
  01405e0  stw 25, 76(30)
  01405e4  b 0x140794
  01405e8  rlwinm 4, 3, 0, 24, 24
  01405ec  cmpwi 4, 0
  01405f0  bt 2, 0x140630
  01405f4  lis 4, 165
  01405f8  rlwinm 3, 3, 0, 16, 16
  01405fc  addic 4, 4, 11184
  0140600  cmpwi 3, 0
  0140604  lwz 4, 4(4)
  0140608  lwz 3, 64(4)
  014060c  lwz 25, 64(3)
  0140610  extsw 25, 25
  0140614  bt 2, 0x140794
  0140618  lis 3, 150
  014061c  lwz 3, 27372(3)
  0140620  cmpwi 3, 0
  0140624  bt 2, 0x140794
  0140628  ori 24, 23, 0
  014062c  b 0x140794
  0140630  rlwinm 4, 3, 0, 23, 23
  0140634  cmpwi 4, 0
  0140638  bt 2, 0x1406b4
  014063c  lis 3, 165
  0140640  addic 3, 3, 11184
  0140644  lwz 3, 4(3)
  0140648  lwz 3, 64(3)
  014064c  lwz 25, 60(3)
  0140650  lwz 3, 72(3)
  0140654  sldi 4, 25, 3
  0140658  addc 4, 25, 4
  014065c  addc 4, 25, 4
  0140660  extsw 25, 25
  0140664  addc 3, 3, 4
  0140668  clrldi 3, 3, 32
  014066c  lhz 4, 4(3)
  0140670  cmpwi 4, 0
  0140674  bf 2, 0x140690
  0140678  lis 4, 151
  014067c  lhz 3, 6(3)
  0140680  addic 4, 4, -16064
  0140684  extsh 3, 3
  0140688  lbzx 3, 4, 3
  014068c  b 0x1406a4
  0140690  lis 4, 151
  0140694  lhz 3, 6(3)
  0140698  addic 4, 4, -16400
  014069c  extsh 3, 3
  01406a0  lbzx 3, 4, 3
  01406a4  cmpwi 3, 0
  01406a8  bf 2, 0x140794
  01406ac  li 25, -1
  01406b0  b 0x140794
  01406b4  rlwinm 3, 3, 0, 19, 19
  01406b8  cmpwi 3, 0
  01406bc  bt 2, 0x140740
  01406c0  lis 3, 165
  01406c4  lis 4, 151
  01406c8  addic 3, 3, 11184
  01406cc  lis 5, 0
  01406d0  ori 5, 5, 65535
  01406d4  lwz 3, 4(3)
  01406d8  lwz 3, 64(3)
  01406dc  lwz 6, -25484(4)
  01406e0  cmpwi 6, 1
  01406e4  lwz 25, 64(3)
  01406e8  lwz 3, 52(3)
  01406ec  extsw 25, 25
  01406f0  addc 7, 25, 25
  01406f4  addc 7, 25, 7
  01406f8  sldi 6, 7, 2
  01406fc  extsw 6, 6
  0140700  lhzx 3, 3, 6
  0140704  stw 5, 52(30)
  0140708  bf 1, 0x140728
  014070c  lwz 4, -25484(4)
  0140710  cmpwi 4, 5
  0140714  bt 1, 0x140728
  0140718  lis 4, 20
  014071c  li 28, 20
  0140720  addi 4, 4, 696
  0140724  lfs 31, 8(4)
  0140728  extsh 3, 3
  014072c  ori 4, 23, 0
  0140730  bl 0x7cea4
  0140734  nop
  0140738  stw 3, 52(30)
  014073c  b 0x140794
  0140740  lis 3, 165
  0140744  addic 3, 3, 11184
  0140748  lis 4, 151
  014074c  addic 4, 4, -25432
  0140750  lwz 3, 4(3)
  0140754  lwz 3, 64(3)
  0140758  lwz 5, 60(3)
  014075c  lwz 3, 72(3)
  0140760  sldi 6, 5, 3
  0140764  addic 3, 3, 6
  0140768  addc 6, 5, 6
  014076c  addc 5, 5, 6
  0140770  addc 3, 3, 5
  0140774  clrldi 3, 3, 32
  0140778  lhz 25, 0(3)
  014077c  extsh 3, 25
  0140780  extsh 25, 25
  0140784  lbzx 3, 4, 3
  0140788  cmpwi 3, 0
  014078c  bt 2, 0x140794
  0140790  ori 24, 23, 0
  0140794  lwz 3, 68(30)
  0140798  cmpwi 3, -1
  014079c  bf 2, 0x14089c
  01407a0  lis 3, 115
  01407a4  lis 4, 114
  01407a8  lwz 3, -26552(3)
  01407ac  extsw 3, 3
  01407b0  std 3, 224(1)
  01407b4  lis 3, 20
  01407b8  addi 3, 3, 696
  01407bc  li 0, 208
  01407c0  lfs 1, 4(3)
  01407c4  lfs 2, -3056(4)
  01407c8  lfd 3, 224(1)
  01407cc  fcfid 3, 3
  01407d0  frsp 3, 3
  01407d4  fadds 1, 3, 1
  01407d8  fmuls 1, 2, 1
  01407dc  fctiwz 1, 1
  01407e0  stfd 1, 224(1)
  01407e4  lwz 3, 228(1)
  01407e8  stw 3, 208(1)
  01407ec  stw 3, 212(1)
  01407f0  stw 3, 216(1)
  01407f4  stw 3, 220(1)
  01407f8  lvx 2, 1, 0
  01407fc  vspltw 2, 2, 0
  0140800  vspltw 2, 2, 0
  0140804  vspltw 2, 2, 0
  0140808  vspltw 2, 2, 0
  014080c  vspltw 2, 2, 0
  0140810  vspltw 2, 2, 0
  0140814  vspltw 2, 2, 0
  0140818  li 3, 68
  014081c  vspltw 2, 2, 0
  0140820  vspltw 2, 2, 0
  0140824  vspltw 2, 2, 0
  0140828  vspltw 2, 2, 0
  014082c  vspltw 2, 2, 0
  0140830  vspltw 2, 2, 0
  0140834  vspltw 2, 2, 0
  0140838  vspltw 2, 2, 0
  014083c  vspltw 2, 2, 0
  0140840  vspltw 2, 2, 0
  0140844  vspltw 2, 2, 0
  0140848  vspltw 2, 2, 0
  014084c  vspltw 2, 2, 0
  0140850  vspltw 2, 2, 0
  0140854  vspltw 2, 2, 0
  0140858  vspltw 2, 2, 0
  014085c  vspltw 2, 2, 0
  0140860  vspltw 2, 2, 0
  0140864  vspltw 2, 2, 0
  0140868  vspltw 2, 2, 0
  014086c  vspltw 2, 2, 0
  0140870  vspltw 2, 2, 0
  0140874  vspltw 2, 2, 0
  0140878  vspltw 2, 2, 0
  014087c  vspltw 2, 2, 0
  0140880  vspltw 2, 2, 0
  0140884  vspltw 2, 2, 0
  0140888  vspltw 2, 2, 0
  014088c  vspltw 2, 2, 0
  0140890  stvewx 2, 3, 30
  0140894  stw 25, 72(30)
  0140898  stw 24, 76(30)
  014089c  lwz 4, 72(30)
  01408a0  cmpw 25, 4
  01408a4  bt 2, 0x140a48
  01408a8  lis 3, 115
  01408ac  lis 5, 114
  01408b0  lwz 3, -26552(3)
  01408b4  extsw 3, 3
  01408b8  std 3, 224(1)
  01408bc  lis 3, 20
  01408c0  addi 3, 3, 696
  01408c4  lfs 1, 4(3)
  01408c8  lfs 2, -3056(5)
  01408cc  lwz 3, 68(30)
  01408d0  lfd 3, 224(1)
  01408d4  fcfid 3, 3
  01408d8  frsp 3, 3
  01408dc  fadds 3, 3, 1
  01408e0  fmuls 2, 2, 3
  01408e4  fctiwz 2, 2
  01408e8  stfd 2, 224(1)
  01408ec  lwz 5, 228(1)
  01408f0  cmpw 3, 5
  01408f4  bf 1, 0x1409e0
  01408f8  lis 3, 115
  01408fc  lwz 3, -26552(3)
  0140900  extsw 3, 3
  0140904  std 3, 224(1)
  0140908  lis 3, 114
  014090c  li 0, 208
  0140910  lfs 2, -3056(3)
  0140914  lfd 3, 224(1)
  0140918  fcfid 3, 3
  014091c  frsp 3, 3
  0140920  fadds 1, 3, 1
  0140924  fmuls 1, 2, 1
  0140928  fctiwz 1, 1
  014092c  stfd 1, 224(1)
  0140930  lwz 3, 228(1)
  0140934  stw 3, 208(1)
  0140938  stw 3, 212(1)
  014093c  stw 3, 216(1)
  0140940  stw 3, 220(1)
  0140944  lvx 2, 1, 0
  0140948  vspltw 2, 2, 0
  014094c  vspltw 2, 2, 0
  0140950  vspltw 2, 2, 0
  0140954  vspltw 2, 2, 0
  0140958  vspltw 2, 2, 0
  014095c  vspltw 2, 2, 0
  0140960  li 3, 68
  0140964  vspltw 2, 2, 0
  0140968  vspltw 2, 2, 0
  014096c  vspltw 2, 2, 0
  0140970  vspltw 2, 2, 0
  0140974  vspltw 2, 2, 0
  0140978  vspltw 2, 2, 0
  014097c  vspltw 2, 2, 0
  0140980  vspltw 2, 2, 0
  0140984  vspltw 2, 2, 0
  0140988  vspltw 2, 2, 0
  014098c  vspltw 2, 2, 0
  0140990  vspltw 2, 2, 0
  0140994  vspltw 2, 2, 0
  0140998  vspltw 2, 2, 0
  014099c  vspltw 2, 2, 0
  01409a0  vspltw 2, 2, 0
  01409a4  vspltw 2, 2, 0
  01409a8  vspltw 2, 2, 0
  01409ac  vspltw 2, 2, 0
  01409b0  vspltw 2, 2, 0
  01409b4  vspltw 2, 2, 0
  01409b8  vspltw 2, 2, 0
  01409bc  vspltw 2, 2, 0
  01409c0  vspltw 2, 2, 0
  01409c4  vspltw 2, 2, 0
  01409c8  vspltw 2, 2, 0
  01409cc  vspltw 2, 2, 0
  01409d0  vspltw 2, 2, 0
  01409d4  vspltw 2, 2, 0
  01409d8  vspltw 2, 2, 0
  01409dc  stvewx 2, 3, 30
  01409e0  lwz 3, 68(30)
  01409e4  ori 5, 22, 0
  01409e8  cmpwi 3, 0
  01409ec  bf 1, 0x1409f4
  01409f0  addic 5, 3, -1
  01409f4  cmpwi 5, 0
  01409f8  ori 3, 22, 0
  01409fc  bf 1, 0x140a04
  0140a00  addic 3, 5, -1
  0140a04  cmpwi 3, 0
  0140a08  ori 5, 22, 0
  0140a0c  bf 1, 0x140a14
  0140a10  addic 5, 3, -1
  0140a14  cmpwi 5, 0
  0140a18  stw 5, 68(30)
  0140a1c  bt 2, 0x140a2c
  0140a20  extsw 25, 4
  0140a24  lwz 24, 76(30)
  0140a28  b 0x140a54
  0140a2c  lwz 3, 48(30)
  0140a30  stw 25, 72(30)
  0140a34  rlwimi 3, 22, 0, 21, 21
  0140a38  stw 24, 76(30)
  0140a3c  stw 22, 60(30)
  0140a40  stw 3, 48(30)
  0140a44  b 0x140a54
  0140a48  lwz 3, 68(30)
  0140a4c  addic 3, 3, 3
  0140a50  stw 3, 68(30)
  0140a54  lwz 3, 48(30)
  0140a58  rlwinm 4, 3, 0, 29, 29
  0140a5c  cmpwi 4, 0
  0140a60  bt 2, 0x140a84
  0140a64  lwz 29, 52(30)
  0140a68  cmpwi 29, 0
  0140a6c  bt 2, 0x140aa4
  0140a70  extsw 3, 29
  0140a74  bl 0x7b740
  0140a78  nop
  0140a7c  ori 29, 3, 0
  0140a80  b 0x140b1c
  0140a84  rlwinm 4, 3, 0, 19, 19
  0140a88  cmpwi 4, 0
  0140a8c  bt 2, 0x140ac0
  0140a90  lis 3, 0
  0140a94  lwz 29, 52(30)
  0140a98  ori 3, 3, 65535
  0140a9c  cmpw 29, 3
  0140aa0  bf 2, 0x140aac
  0140aa4  ori 3, 23, 0
  0140aa8  b 0x1413b8
  0140aac  extsw 3, 29
  0140ab0  bl 0x7b740
  0140ab4  nop
  0140ab8  ori 29, 3, 0
  0140abc  b 0x140b1c
  0140ac0  rlwinm 3, 3, 0, 23, 23
  0140ac4  cmpwi 1, 25, -1
  0140ac8  cmpwi 3, 0
  0140acc  crorc 2, 2, 6
  0140ad0  bt 2, 0x140ae0
  0140ad4  lis 29, 101
  0140ad8  addic 29, 29, 13548
  0140adc  b 0x140b1c
  0140ae0  lwz 3, 52(30)
  0140ae4  cmpwi 3, 0
  0140ae8  bt 2, 0x140b1c
  0140aec  slwi 4, 24, 2
  0140af0  addc 3, 3, 4
  0140af4  lwz 4, 56(30)
  0140af8  mullw 4, 25, 4
  0140afc  clrldi 3, 3, 32
  0140b00  rlwinm 4, 4, 0, 0, 29
  0140b04  extsw 4, 4
  0140b08  lwzx 3, 3, 4
  0140b0c  extsw 3, 3
  0140b10  bl 0x7b740
  0140b14  nop
  0140b18  ori 29, 3, 0
  0140b1c  li 4, 4580
  0140b20  lwz 3, 48(30)
  0140b24  and 4, 3, 4
  0140b28  cmpwi 4, 0
  0140b2c  bf 2, 0x140b4c
  0140b30  lis 4, 151
  0140b34  addic 4, 4, -16064
  0140b38  lbzx 4, 4, 25
  0140b3c  cmpwi 4, 0
  0140b40  bf 2, 0x140b4c
  0140b44  lis 29, 101
  0140b48  addic 29, 29, 13548
  0140b4c  rlwinm 3, 3, 0, 22, 22
  0140b50  cmpwi 3, 0
  0140b54  bt 2, 0x140bc0
  0140b58  lwz 3, 56(30)
  0140b5c  mullw 3, 25, 3
  0140b60  lwz 4, 52(30)
  0140b64  rlwinm 3, 3, 0, 0, 29
  0140b68  addc 3, 4, 3
  0140b6c  clrldi 3, 3, 32
  0140b70  lwz 3, 0(3)
  0140b74  cmpwi 6, 3, 20185
  0140b78  cmpwi 3, 20178
  0140b7c  cror 2, 2, 26
  0140b80  cmpwi 1, 3, 20189
  0140b84  bt 2, 0x140bc0
  0140b88  bt 6, 0x140bc0
  0140b8c  lis 3, 101
  0140b90  addic 24, 1, 136
  0140b94  addic 23, 3, 13556
  0140b98  li 3, 20172
  0140b9c  bl 0x7b740
  0140ba0  nop
  0140ba4  ori 5, 3, 0
  0140ba8  ori 6, 29, 0
  0140bac  ori 3, 24, 0
  0140bb0  ori 4, 23, 0
  0140bb4  bl 0x5cd2a8
  0140bb8  nop
  0140bbc  ori 29, 24, 0
  0140bc0  lwz 20, 48(30)
  0140bc4  li 24, 4
  0140bc8  rlwinm 3, 20, 0, 17, 17
  0140bcc  cmpwi 3, 0
  0140bd0  bt 2, 0x140bfc
  0140bd4  rlwinm 3, 20, 0, 29, 29
  0140bd8  li 24, 4
  0140bdc  cmpwi 3, 0
  0140be0  bt 2, 0x140bfc
  0140be4  lwz 3, 52(30)
  0140be8  li 24, 4
  0140bec  cmpwi 3, 21054
  0140bf0  bf 2, 0x140bfc
  0140bf4  li 24, 12
  0140bf8  ori 20, 20, 1
  0140bfc  lwz 3, 48(30)
  0140c00  rlwinm 3, 3, 0, 20, 20
  0140c04  cmpwi 3, 0
  0140c08  bt 2, 0x140c34
  0140c0c  lis 3, 151
  0140c10  addic 3, 3, -16244
  0140c14  lbzx 3, 3, 25
  0140c18  cmpwi 3, 0
  0140c1c  bf 2, 0x140c34
  0140c20  li 3, 20308
  0140c24  bl 0x7b740
  0140c28  nop
  0140c2c  ori 29, 3, 0
  0140c30  ori 20, 20, 3
  0140c34  cmpwi 29, 0
  0140c38  bf 2, 0x140c44
  0140c3c  lis 29, 101
  0140c40  addic 29, 29, 13564
  0140c44  clrlwi 3, 20, 31
  0140c48  li 23, 8
  0140c4c  cmpwi 3, 0
  0140c50  li 25, 4
  0140c54  bt 2, 0x140c68
  0140c58  lwz 3, 32(31)
  0140c5c  li 23, 9
  0140c60  srawi 25, 3, 1
  0140c64  addze 25, 25
  0140c68  rlwinm 3, 20, 0, 30, 30
  0140c6c  cmpwi 3, 0
  0140c70  bt 2, 0x140c84
  0140c74  lwz 3, 36(31)
  0140c78  ori 23, 23, 2
  0140c7c  srawi 24, 3, 1
  0140c80  addze 24, 24
  0140c84  ori 3, 22, 0
  0140c88  ori 20, 23, 0
  0140c8c  bl 0x6d704
  0140c90  nop
  0140c94  ori 3, 26, 0
  0140c98  bl 0x685c4
  0140c9c  nop
  0140ca0  lis 4, 115
  0140ca4  addic 23, 1, 112
  0140ca8  ori 26, 3, 0
  0140cac  addic 4, 4, 5976
  0140cb0  li 5, 24
  0140cb4  ori 3, 23, 0
  0140cb8  bl 0x5c5ad0
  0140cbc  nop
  0140cc0  lis 4, 115
  0140cc4  lwz 5, 36(31)
  0140cc8  lwz 3, 32(31)
  0140ccc  sth 25, 120(1)
  0140cd0  lwz 6, 60(30)
  0140cd4  addic 7, 3, -4
  0140cd8  lis 25, 115
  0140cdc  lwz 4, 2760(4)
  0140ce0  srawi 8, 6, 4
  0140ce4  sth 4, 112(1)
  0140ce8  subc 4, 5, 4
  0140cec  sth 7, 118(1)
  0140cf0  subc 8, 24, 8
  0140cf4  sth 20, 130(1)
  0140cf8  clrlwi 5, 6, 28
  0140cfc  lwz 7, 2772(25)
  0140d00  lis 6, 115
  0140d04  neg 5, 5
  0140d08  sth 4, 114(1)
  0140d0c  addic 4, 6, -14900
  0140d10  sth 8, 122(1)
  0140d14  sth 7, 128(1)
  0140d18  cmpw 30, 4
  0140d1c  sth 5, 134(1)
  0140d20  bf 2, 0x140d48
  0140d24  lis 4, 151
  0140d28  lwz 5, -25484(4)
  0140d2c  cmpwi 5, 1
  0140d30  bf 1, 0x140d48
  0140d34  lwz 4, -25484(4)
  0140d38  cmpwi 4, 5
  0140d3c  bt 1, 0x140d48
  0140d40  addic 3, 3, -24
  0140d44  sth 3, 118(1)
  0140d48  lis 3, 115
  0140d4c  addic 3, 3, -13844
  0140d50  cmpw 30, 3
  0140d54  bt 2, 0x140d78
  0140d58  lis 3, 115
  0140d5c  addic 3, 3, -13932
  0140d60  cmpw 30, 3
  0140d64  bt 2, 0x140d78
  0140d68  lis 3, 115
  0140d6c  addic 3, 3, -16532
  0140d70  cmpw 30, 3
  0140d74  bf 2, 0x140da0
  0140d78  lis 3, 151
  0140d7c  lwz 4, -25484(3)
  0140d80  cmpwi 4, 1
  0140d84  bf 1, 0x140da0
  0140d88  lwz 3, -25484(3)
  0140d8c  cmpwi 3, 5
  0140d90  bt 1, 0x140da0
  0140d94  lhz 3, 118(1)
  0140d98  addic 3, 3, -20
  0140d9c  sth 3, 118(1)
  0140da0  lwz 3, 48(30)
  0140da4  rlwinm 4, 3, 0, 15, 15
  0140da8  cmpwi 4, 0
  0140dac  bt 2, 0x140dbc
  0140db0  lwz 4, 36(31)
  0140db4  addic 4, 4, -1
  0140db8  sth 4, 114(1)
  0140dbc  rlwinm 3, 3, 0, 19, 19
  0140dc0  cmpwi 3, 0
  0140dc4  bt 2, 0x140df4
  0140dc8  lis 3, 151
  0140dcc  lwz 4, -25484(3)
  0140dd0  cmpwi 4, 1
  0140dd4  bf 1, 0x140e1c
  0140dd8  lwz 3, -25484(3)
  0140ddc  cmpwi 3, 5
  0140de0  bt 1, 0x140e1c
  0140de4  lhz 3, 118(1)
  0140de8  subc 3, 3, 28
  0140dec  sth 3, 118(1)
  0140df0  b 0x140e1c
  0140df4  lis 3, 151
  0140df8  lwz 4, -25484(3)
  0140dfc  cmpwi 4, 1
  0140e00  bf 1, 0x140e1c
  0140e04  lwz 3, -25484(3)
  0140e08  cmpwi 3, 6
  0140e0c  bt 1, 0x140e1c
  0140e10  lhz 3, 118(1)
  0140e14  addic 3, 3, -20
  0140e18  sth 3, 118(1)
  0140e1c  lis 3, 115
  0140e20  lis 4, 20
  0140e24  lis 5, -32513
  0140e28  addi 6, 4, 696
  0140e2c  ori 28, 5, 43144
  0140e30  lwz 3, -26560(3)
  0140e34  ori 4, 28, 0
  0140e38  extsw 3, 3
  0140e3c  lfs 1, 4(6)
  0140e40  bl 0x5027bc
  0140e44  nop
  0140e48  ori 4, 3, 0
  0140e4c  lwz 3, 68(30)
  0140e50  ori 5, 28, 0
  0140e54  extsw 3, 3
  0140e58  bl 0x140170
  0140e5c  lbz 4, -15535(21)
  0140e60  ori 28, 3, 0
  0140e64  cmpwi 4, 0
  0140e68  bt 2, 0x140e84
  0140e6c  lwz 3, 48(30)
  0140e70  rlwinm 3, 3, 0, 17, 17
  0140e74  cmpwi 3, 0
  0140e78  bt 2, 0x140e84
  0140e7c  li 3, 190
  0140e80  sth 3, 118(1)
  0140e84  lis 3, 115
  0140e88  fmr 1, 30
  0140e8c  addic 3, 3, -24808
  0140e90  cmpw 30, 3
  0140e94  bt 2, 0x140ec8
  0140e98  lis 3, 115
  0140e9c  addic 3, 3, -24632
  0140ea0  cmpw 30, 3
  0140ea4  bt 2, 0x140ec8
  0140ea8  lis 3, 115
  0140eac  addic 3, 3, -24720
  0140eb0  cmpw 30, 3
  0140eb4  bt 2, 0x140ec8
  0140eb8  lis 3, 115
  0140ebc  addic 3, 3, -24544
  0140ec0  cmpw 30, 3
  0140ec4  bf 2, 0x140f2c
  0140ec8  lis 3, 151
  0140ecc  lwz 4, -25484(3)
  0140ed0  cmpwi 4, 1
  0140ed4  bf 1, 0x140f2c
  0140ed8  lwz 4, -25484(3)
  0140edc  cmpwi 4, 5
  0140ee0  bt 1, 0x140f2c
  0140ee4  lis 4, 20
  0140ee8  li 5, 40
  0140eec  addi 4, 4, 696
  0140ef0  lis 7, 115
  0140ef4  li 6, 50
  0140ef8  lfs 1, 12(4)
  0140efc  addic 4, 7, -24720
  0140f00  sth 22, 112(1)
  0140f04  sth 5, 114(1)
  0140f08  cmpw 30, 4
  0140f0c  sth 22, 116(1)
  0140f10  sth 6, 118(1)
  0140f14  bf 2, 0x140f2c
  0140f18  lwz 3, -25484(3)
  0140f1c  cmpwi 3, 4
  0140f20  bf 2, 0x140f2c
  0140f24  li 3, 60
  0140f28  sth 3, 118(1)
  0140f2c  lhz 3, 130(1)
  0140f30  lbz 4, -15535(21)
  0140f34  ori 3, 3, 4
  0140f38  cmpwi 4, 0
  0140f3c  sth 3, 130(1)
  0140f40  bf 2, 0x140f68
  0140f44  li 6, -1
  0140f48  ori 3, 23, 0
  0140f4c  ori 4, 28, 0
  0140f50  ori 5, 29, 0
  0140f54  ori 7, 26, 0
  0140f58  ori 8, 27, 0
  0140f5c  bl 0x69db8
  0140f60  nop
  0140f64  b 0x140f8c
  0140f68  li 6, -1
  0140f6c  fmr 1, 30
  0140f70  ori 3, 23, 0
  0140f74  ori 4, 28, 0
  0140f78  ori 5, 29, 0
  0140f7c  ori 7, 26, 0
  0140f80  ori 8, 27, 0
  0140f84  bl 0x690e0
  0140f88  nop
  0140f8c  lhz 3, 130(1)
  0140f90  xori 5, 3, 4
  0140f94  lwz 3, 48(30)
  0140f98  rlwinm 4, 3, 0, 18, 18
  0140f9c  sth 5, 130(1)
  0140fa0  cmpwi 4, 0
  0140fa4  bf 2, 0x140ff8
  0140fa8  lhz 4, 126(1)
  0140fac  lhz 5, 114(1)
  0140fb0  lhz 6, 112(1)
  0140fb4  extsh 4, 4
  0140fb8  extsh 5, 5
  0140fbc  extsh 6, 6
  0140fc0  addic 4, 4, 4
  0140fc4  subc 5, 5, 6
  0140fc8  cmpw 4, 5
  0140fcc  bt 0, 0x140ff8
  0140fd0  rlwinm 4, 3, 0, 21, 21
  0140fd4  cmpwi 4, 0
  0140fd8  bf 2, 0x141014
  0140fdc  ori 3, 3, 1024
  0140fe0  stw 3, 48(30)
  0140fe4  lwz 3, 36(31)
  0140fe8  slwi 3, 3, 3
  0140fec  neg 3, 3
  0140ff0  stw 3, 60(30)
  0140ff4  b 0x141014
  0140ff8  rlwinm 3, 3, 0, 21, 21
  0140ffc  cmpwi 3, 0
  0141000  bt 2, 0x141014
  0141004  lwz 3, 48(30)
  0141008  stw 22, 60(30)
  014100c  xori 3, 3, 1024
  0141010  stw 3, 48(30)
  0141014  lis 31, 115
  0141018  lwz 3, 60(30)
  014101c  lis 22, 115
  0141020  lhz 4, 112(1)
  0141024  srawi 3, 3, 4
  0141028  lwz 5, -26544(31)
  014102c  subc 3, 24, 3
  0141030  lhz 6, 114(1)
  0141034  addc 4, 4, 5
  0141038  lhz 7, 116(1)
  014103c  addc 6, 6, 5
  0141040  lwz 8, -26548(22)
  0141044  addc 3, 3, 5
  0141048  sth 4, 112(1)
  014104c  addc 4, 7, 8
  0141050  lhz 5, 118(1)
  0141054  sth 6, 114(1)
  0141058  lhz 6, 120(1)
  014105c  addc 5, 5, 8
  0141060  sth 4, 116(1)
  0141064  addc 4, 6, 8
  0141068  sth 3, 122(1)
  014106c  sth 5, 118(1)
  0141070  sth 4, 120(1)
  0141074  bl 0x6ccb4
  0141078  nop
  014107c  lis 3, -32768
  0141080  lbz 4, -15535(21)
  0141084  cmpwi 4, 0
  0141088  clrldi 24, 3, 32
  014108c  bf 2, 0x1410b8
  0141090  li 6, -1
  0141094  ori 3, 23, 0
  0141098  fmr 1, 30
  014109c  ori 4, 24, 0
  01410a0  ori 5, 29, 0
  01410a4  ori 7, 26, 0
  01410a8  ori 8, 27, 0
  01410ac  bl 0x69db8
  01410b0  nop
  01410b4  b 0x1410dc
  01410b8  li 6, -1
  01410bc  ori 3, 23, 0
  01410c0  fmr 1, 30
  01410c4  ori 4, 24, 0
  01410c8  ori 5, 29, 0
  01410cc  ori 7, 26, 0
  01410d0  ori 8, 27, 0
  01410d4  bl 0x690e0
  01410d8  nop
  01410dc  bl 0x6c5dc
  01410e0  nop
  01410e4  lhz 3, 112(1)
  01410e8  lwz 4, -26544(31)
  01410ec  lhz 5, 114(1)
  01410f0  subc 3, 3, 4
  01410f4  lhz 6, 116(1)
  01410f8  subc 5, 5, 4
  01410fc  lwz 7, -26548(22)
  0141100  lhz 8, 118(1)
  0141104  sth 3, 112(1)
  0141108  subc 3, 6, 7
  014110c  lhz 6, 120(1)
  0141110  subc 8, 8, 7
  0141114  sth 5, 114(1)
  0141118  subc 5, 6, 7
  014111c  lhz 6, 122(1)
  0141120  sth 3, 116(1)
  0141124  lwz 3, 48(30)
  0141128  subc 4, 6, 4
  014112c  sth 8, 118(1)
  0141130  rlwinm 3, 3, 0, 14, 14
  0141134  sth 5, 120(1)
  0141138  cmpwi 3, 0
  014113c  sth 4, 122(1)
  0141140  bt 2, 0x14114c
  0141144  bl 0x6ccb4
  0141148  nop
  014114c  lbz 3, -15535(21)
  0141150  cmpwi 3, 0
  0141154  bf 2, 0x141180
  0141158  li 6, -1
  014115c  ori 3, 23, 0
  0141160  fmr 1, 31
  0141164  ori 4, 28, 0
  0141168  ori 5, 29, 0
  014116c  ori 7, 26, 0
  0141170  ori 8, 27, 0
  0141174  bl 0x69db8
  0141178  nop
  014117c  b 0x1411a4
  0141180  li 6, -1
  0141184  ori 3, 23, 0
  0141188  fmr 1, 30
  014118c  ori 4, 28, 0
  0141190  ori 5, 29, 0
  0141194  ori 7, 26, 0
  0141198  ori 8, 27, 0
  014119c  bl 0x690e0
  01411a0  nop
  01411a4  lwz 3, 48(30)
  01411a8  rlwinm 3, 3, 0, 14, 14
  01411ac  cmpwi 3, 0
  01411b0  bt 2, 0x1411bc
  01411b4  bl 0x6c5dc
  01411b8  nop
  01411bc  lwz 3, 48(30)
  01411c0  rlwinm 3, 3, 0, 21, 21
  01411c4  cmpwi 3, 0
  01411c8  bt 2, 0x141344
  01411cc  lwz 3, 2772(25)
  01411d0  lhz 4, 126(1)
  01411d4  addc 5, 3, 3
  01411d8  lhz 6, 122(1)
  01411dc  lhz 7, 112(1)
  01411e0  addc 3, 3, 5
  01411e4  lwz 5, -26544(31)
  01411e8  addc 3, 4, 3
  01411ec  lhz 4, 114(1)
  01411f0  addc 7, 7, 5
  01411f4  lhz 8, 116(1)
  01411f8  addc 3, 3, 6
  01411fc  lwz 6, -26548(22)
  0141200  addc 4, 4, 5
  0141204  lhz 9, 118(1)
  0141208  addc 3, 3, 5
  014120c  sth 7, 112(1)
  0141210  addc 5, 8, 6
  0141214  lhz 7, 120(1)
  0141218  addc 8, 9, 6
  014121c  sth 4, 114(1)
  0141220  addc 4, 7, 6
  0141224  sth 5, 116(1)
  0141228  sth 8, 118(1)
  014122c  sth 3, 122(1)
  0141230  sth 4, 120(1)
  0141234  bl 0x6ccb4
  0141238  nop
  014123c  lbz 3, -15535(21)
  0141240  cmpwi 3, 0
  0141244  bf 2, 0x141270
  0141248  li 6, -1
  014124c  ori 3, 23, 0
  0141250  fmr 1, 30
  0141254  ori 4, 24, 0
  0141258  ori 5, 29, 0
  014125c  ori 7, 26, 0
  0141260  ori 8, 27, 0
  0141264  bl 0x69db8
  0141268  nop
  014126c  b 0x141294
  0141270  li 6, -1
  0141274  ori 3, 23, 0
  0141278  fmr 1, 30
  014127c  ori 4, 24, 0
  0141280  ori 5, 29, 0
  0141284  ori 7, 26, 0
  0141288  ori 8, 27, 0
  014128c  bl 0x690e0
  0141290  nop
  0141294  bl 0x6c5dc
  0141298  nop
  014129c  lhz 3, 112(1)
  01412a0  lwz 4, -26544(31)
  01412a4  lhz 5, 114(1)
  01412a8  subc 3, 3, 4
  01412ac  lhz 6, 116(1)
  01412b0  subc 5, 5, 4
  01412b4  lwz 7, -26548(22)
  01412b8  lhz 8, 118(1)
  01412bc  sth 3, 112(1)
  01412c0  subc 3, 6, 7
  01412c4  lhz 6, 120(1)
  01412c8  subc 8, 8, 7
  01412cc  sth 5, 114(1)
  01412d0  subc 5, 6, 7
  01412d4  lhz 6, 122(1)
  01412d8  sth 3, 116(1)
  01412dc  sth 8, 118(1)
  01412e0  subc 3, 6, 4
  01412e4  lbz 4, -15535(21)
  01412e8  sth 5, 120(1)
  01412ec  cmpwi 4, 0
  01412f0  sth 3, 122(1)
  01412f4  bf 2, 0x141320
  01412f8  li 6, -1
  01412fc  ori 3, 23, 0
  0141300  fmr 1, 30
  0141304  ori 4, 28, 0
  0141308  ori 5, 29, 0
  014130c  ori 7, 26, 0
  0141310  ori 8, 27, 0
  0141314  bl 0x69db8
  0141318  nop
  014131c  b 0x141344
  0141320  li 6, -1
  0141324  ori 3, 23, 0
  0141328  fmr 1, 30
  014132c  ori 4, 28, 0
  0141330  ori 5, 29, 0
  0141334  ori 7, 26, 0
  0141338  ori 8, 27, 0
  014133c  bl 0x690e0
  0141340  nop
  0141344  lwz 3, 48(30)
  0141348  rlwinm 3, 3, 0, 21, 21
  014134c  cmpwi 3, 0
  0141350  bt 2, 0x1413ac
  0141354  lis 3, 150
  0141358  li 4, 3
  014135c  addic 5, 3, 19008
  0141360  lwz 3, 60(30)
  0141364  lwz 5, 160(5)
  0141368  clrlwi 5, 5, 31
  014136c  cmpwi 5, 0
  0141370  bt 2, 0x141378
  0141374  li 4, 10
  0141378  addc 3, 3, 4
  014137c  stw 3, 60(30)
  0141380  lwz 4, 2772(25)
  0141384  lhz 5, 126(1)
  0141388  addc 6, 4, 4
  014138c  extsh 5, 5
  0141390  addc 4, 4, 6
  0141394  addc 4, 5, 4
  0141398  sldi 4, 4, 4
  014139c  divw 5, 3, 4
  01413a0  mullw 4, 5, 4
  01413a4  subc 3, 3, 4
  01413a8  stw 3, 60(30)
  01413ac  bl 0x6d708
  01413b0  nop
  01413b4  li 3, 2
  01413b8  ld 0, 368(1)
  01413bc  mtlr 0
  01413c0  lfd 30, 336(1)
  01413c4  lfd 31, 344(1)
  01413c8  ld 20, 240(1)
  01413cc  ld 21, 248(1)
  01413d0  ld 22, 256(1)
  01413d4  ld 23, 264(1)
  01413d8  ld 24, 272(1)
  01413dc  ld 25, 280(1)
  01413e0  ld 26, 288(1)
  01413e4  ld 27, 296(1)
  01413e8  ld 28, 304(1)
  01413ec  ld 29, 312(1)
  01413f0  ld 30, 320(1)
  01413f4  ld 31, 328(1)
  01413f8  addi 1, 1, 352
  01413fc  blr

UpdatePauseMenu:   # 0x141408, 0x878 bytes
  0141408  stdu 1, -192(1)
  014140c  mflr 0
  0141410  std 0, 208(1)
  0141414  std 29, 168(1)
  0141418  std 30, 176(1)
  014141c  lis 29, 165
  0141420  ori 30, 3, 0
  0141424  addic 29, 29, 11184
  0141428  lis 4, 20
  014142c  std 31, 184(1)
  0141430  li 3, 0
  0141434  ori 31, 30, 0
  0141438  lwz 5, 52(30)
  014143c  lwz 6, 4(29)
  0141440  std 27, 152(1)
  0141444  addi 4, 4, 5120
  0141448  ori 27, 3, 0
  014144c  lhz 5, 0(5)
  0141450  lwz 6, 64(6)
  0141454  cmpwi 5, 0
  0141458  subc 5, 6, 30
  014145c  std 28, 160(1)
  0141460  cmpwi 1, 5, 0
  0141464  bt 2, 0x141634
  0141468  ori 7, 3, 0
  014146c  ori 8, 7, 0
  0141470  bf 6, 0x1414b8
  0141474  lwz 5, 64(30)
  0141478  cmpw 5, 3
  014147c  bf 2, 0x1414b8
  0141480  lwz 5, 52(30)
  0141484  addic 5, 5, 10
  0141488  addc 5, 5, 7
  014148c  clrldi 5, 5, 32
  0141490  lhz 6, 0(5)
  0141494  addic 6, 6, 1
  0141498  sth 6, 0(5)
  014149c  lhz 6, 0(5)
  01414a0  extsh 6, 6
  01414a4  cmpwi 6, 32000
  01414a8  bf 1, 0x141614
  01414ac  li 6, 32000
  01414b0  sth 6, 0(5)
  01414b4  b 0x141614
  01414b8  lis 5, 115
  01414bc  lwz 5, -26552(5)
  01414c0  extsw 5, 5
  01414c4  std 5, 128(1)
  01414c8  lis 5, 114
  01414cc  lfs 1, 0(4)
  01414d0  lwz 6, 52(30)
  01414d4  lfs 2, -3056(5)
  01414d8  lfd 3, 128(1)
  01414dc  fcfid 3, 3
  01414e0  addic 6, 6, 10
  01414e4  addc 9, 6, 7
  01414e8  clrldi 9, 9, 32
  01414ec  frsp 3, 3
  01414f0  lhz 5, 0(9)
  01414f4  extsh 5, 5
  01414f8  fadds 3, 3, 1
  01414fc  fmuls 2, 2, 3
  0141500  fctiwz 2, 2
  0141504  stfd 2, 128(1)
  0141508  lwz 6, 132(1)
  014150c  cmpw 5, 6
  0141510  bf 1, 0x1415f8
  0141514  lis 5, 115
  0141518  lwz 5, -26552(5)
  014151c  extsw 5, 5
  0141520  std 5, 128(1)
  0141524  lis 5, 114
  0141528  li 0, 112
  014152c  lfs 2, -3056(5)
  0141530  lfd 3, 128(1)
  0141534  fcfid 3, 3
  0141538  frsp 3, 3
  014153c  fadds 1, 3, 1
  0141540  fmuls 1, 2, 1
  0141544  fctiwz 1, 1
  0141548  stfd 1, 128(1)
  014154c  lwz 5, 132(1)
  0141550  stw 5, 112(1)
  0141554  stw 5, 116(1)
  0141558  stw 5, 120(1)
  014155c  stw 5, 124(1)
  0141560  lvx 2, 1, 0
  0141564  vspltw 2, 2, 0
  0141568  vspltw 2, 2, 0
  014156c  vspltw 2, 2, 0
  0141570  vspltw 2, 2, 0
  0141574  vspltw 2, 2, 0
  0141578  vspltw 2, 2, 0
  014157c  vspltw 2, 2, 0
  0141580  vspltw 2, 2, 0
  0141584  vspltw 2, 2, 0
  0141588  vspltw 2, 2, 0
  014158c  vspltw 2, 2, 0
  0141590  vspltw 2, 2, 0
  0141594  vspltw 2, 2, 0
  0141598  vspltw 2, 2, 0
  014159c  vspltw 2, 2, 0
  01415a0  vspltw 2, 2, 0
  01415a4  vspltw 2, 2, 0
  01415a8  vspltw 2, 2, 0
  01415ac  vspltw 2, 2, 0
  01415b0  vspltw 2, 2, 0
  01415b4  vspltw 2, 2, 0
  01415b8  vspltw 2, 2, 0
  01415bc  vspltw 2, 2, 0
  01415c0  vspltw 2, 2, 0
  01415c4  vspltw 2, 2, 0
  01415c8  vspltw 2, 2, 0
  01415cc  vspltw 2, 2, 0
  01415d0  vspltw 2, 2, 0
  01415d4  vspltw 2, 2, 0
  01415d8  vspltw 2, 2, 0
  01415dc  vspltw 2, 2, 0
  01415e0  vspltw 2, 2, 0
  01415e4  vspltw 2, 2, 0
  01415e8  vspltw 2, 2, 0
  01415ec  vspltw 2, 2, 0
  01415f0  vsplth 2, 2, 1
  01415f4  stvehx 2, 0, 9
  01415f8  lhz 5, 0(9)
  01415fc  ori 6, 27, 0
  0141600  extsh 10, 5
  0141604  cmpwi 10, 0
  0141608  bf 1, 0x141610
  014160c  addic 6, 5, -1
  0141610  sth 6, 0(9)
  0141614  addic 8, 8, 12
  0141618  lwz 6, 52(30)
  014161c  addic 7, 7, 12
  0141620  extsw 5, 8
  0141624  addic 3, 3, 1
  0141628  lhzx 5, 6, 5
  014162c  cmpwi 5, 0
  0141630  bf 2, 0x141470
  0141634  bf 6, 0x141c58
  0141638  lis 28, 150
  014163c  li 4, 3328
  0141640  addic 28, 28, 19008
  0141644  lwz 3, 196(28)
  0141648  and 4, 3, 4
  014164c  cmpwi 4, 0
  0141650  bt 2, 0x141680
  0141654  lwz 3, 48(30)
  0141658  rlwinm 3, 3, 0, 26, 26
  014165c  cmpwi 3, 0
  0141660  bt 2, 0x141678
  0141664  lis 3, 151
  0141668  lis 4, 162
  014166c  addic 4, 4, 1216
  0141670  lwz 3, -25488(3)
  0141674  stw 3, 548(4)
  0141678  li 3, -1
  014167c  b 0x141c5c
  0141680  rlwinm 3, 3, 0, 27, 27
  0141684  cmpwi 3, 0
  0141688  bt 2, 0x1416e8
  014168c  lwz 3, 48(30)
  0141690  rlwinm 3, 3, 0, 26, 26
  0141694  cmpwi 3, 0
  0141698  bt 2, 0x1416b0
  014169c  lis 3, 151
  01416a0  lis 4, 162
  01416a4  addic 4, 4, 1216
  01416a8  lwz 3, -25488(3)
  01416ac  stw 3, 548(4)
  01416b0  lwz 3, 4(29)
  01416b4  lwz 4, 56(3)
  01416b8  cmpwi 4, 0
  01416bc  bt 2, 0x1416d4
  01416c0  ori 4, 3, 0
  01416c4  ori 3, 27, 0
  01416c8  lwz 4, 56(4)
  01416cc  stw 4, 8(29)
  01416d0  b 0x141c5c
  01416d4  lwz 3, 288(29)
  01416d8  cmpwi 3, 0
  01416dc  bf 2, 0x1416e8
  01416e0  li 3, -1
  01416e4  b 0x141c5c
  01416e8  lis 3, 144
  01416ec  lwz 4, 196(28)
  01416f0  lwz 3, 11988(3)
  01416f4  and 3, 4, 3
  01416f8  cmpwi 3, 0
  01416fc  bt 2, 0x141aa0
  0141700  lis 3, 161
  0141704  lwz 3, -736(3)
  0141708  clrlwi 3, 3, 31
  014170c  cmpwi 3, 0
  0141710  bf 2, 0x141aa0
  0141714  lwz 3, 64(30)
  0141718  lwz 5, 52(30)
  014171c  addc 4, 3, 3
  0141720  addic 6, 5, 2
  0141724  addc 4, 3, 4
  0141728  sldi 4, 4, 2
  014172c  addc 3, 6, 4
  0141730  clrldi 3, 3, 32
  0141734  lhz 3, 0(3)
  0141738  extsh 3, 3
  014173c  cmpwi 3, 6
  0141740  cmpwi 1, 3, 3
  0141744  cmpwi 6, 3, 1
  0141748  cmpwi 7, 3, 2
  014174c  bt 1, 0x141774
  0141750  bt 5, 0x141760
  0141754  bf 25, 0x141aa0
  0141758  bf 29, 0x141a8c
  014175c  b 0x1417a4
  0141760  cmpwi 3, 4
  0141764  bf 1, 0x1417bc
  0141768  cmpwi 3, 5
  014176c  bf 1, 0x14181c
  0141770  b 0x14187c
  0141774  cmpwi 3, 9
  0141778  bt 1, 0x141790
  014177c  cmpwi 3, 7
  0141780  bf 1, 0x141900
  0141784  cmpwi 3, 8
  0141788  bf 1, 0x141948
  014178c  b 0x141a14
  0141790  cmpwi 3, 10
  0141794  bf 1, 0x141994
  0141798  cmpwi 3, 11
  014179c  bf 1, 0x1419e0
  01417a0  b 0x141aa0
  01417a4  addic 3, 5, 4
  01417a8  addc 3, 3, 4
  01417ac  clrldi 3, 3, 32
  01417b0  lwz 3, 0(3)
  01417b4  stw 3, 8(29)
  01417b8  b 0x141aa0
  01417bc  ori 3, 27, 0
  01417c0  lwz 5, 20(31)
  01417c4  li 4, 17
  01417c8  bl 0x15d12c
  01417cc  nop
  01417d0  ori 3, 27, 0
  01417d4  stb 27, 332(29)
  01417d8  bl 0xe8888
  01417dc  nop
  01417e0  lwz 3, 64(30)
  01417e4  ori 5, 27, 0
  01417e8  lwz 4, 52(30)
  01417ec  addc 6, 3, 3
  01417f0  addic 4, 4, 4
  01417f4  addc 3, 3, 6
  01417f8  sldi 6, 3, 2
  01417fc  li 3, 3
  0141800  addc 4, 4, 6
  0141804  clrldi 4, 4, 32
  0141808  lwz 4, 0(4)
  014180c  extsw 4, 4
  0141810  bl 0x78178
  0141814  nop
  0141818  b 0x141aa0
  014181c  ori 3, 27, 0
  0141820  li 4, 17
  0141824  lwz 5, 20(31)
  0141828  bl 0x15d12c
  014182c  nop
  0141830  li 3, 1
  0141834  stb 3, 332(29)
  0141838  bl 0xe8888
  014183c  nop
  0141840  lwz 3, 64(30)
  0141844  ori 5, 27, 0
  0141848  lwz 4, 52(30)
  014184c  addc 6, 3, 3
  0141850  addic 4, 4, 4
  0141854  addc 3, 3, 6
  0141858  sldi 6, 3, 2
  014185c  li 3, 3
  0141860  addc 4, 4, 6
  0141864  clrldi 4, 4, 32
  0141868  lwz 4, 0(4)
  014186c  extsw 4, 4
  0141870  bl 0x78178
  0141874  nop
  0141878  b 0x141aa0
  014187c  addic 3, 5, 4
  0141880  addc 3, 3, 4
  0141884  clrldi 3, 3, 32
  0141888  lwz 5, 0(3)
  014188c  srawi 5, 5, 16
  0141890  cmpwi 5, 0
  0141894  bt 2, 0x1418b0
  0141898  lis 3, 161
  014189c  slwi 5, 5, 2
  01418a0  addic 3, 3, 23872
  01418a4  extsw 5, 5
  01418a8  lwzx 3, 3, 5
  01418ac  stw 3, 232(29)
  01418b0  lwz 6, 4(29)
  01418b4  li 5, 5
  01418b8  ori 3, 4, 0
  01418bc  stw 6, 236(29)
  01418c0  lwz 6, 52(30)
  01418c4  li 4, 17
  01418c8  stw 27, 240(29)
  01418cc  addic 6, 6, 4
  01418d0  stw 5, 12(29)
  01418d4  addc 3, 6, 3
  01418d8  clrldi 5, 3, 32
  01418dc  ori 3, 27, 0
  01418e0  lwz 7, 0(5)
  01418e4  lwz 5, 20(31)
  01418e8  clrlwi 6, 7, 16
  01418ec  stw 6, 224(29)
  01418f0  bl 0x15d12c
  01418f4  nop
  01418f8  ori 3, 27, 0
  01418fc  b 0x141c5c
  0141900  addic 5, 5, 4
  0141904  li 3, 2
  0141908  addc 4, 5, 4
  014190c  li 6, 3
  0141910  lwz 5, 4(29)
  0141914  clrldi 7, 4, 32
  0141918  stw 5, 236(29)
  014191c  stw 3, 240(29)
  0141920  li 4, 17
  0141924  stw 6, 12(29)
  0141928  ori 3, 27, 0
  014192c  lwz 5, 20(31)
  0141930  lwz 6, 0(7)
  0141934  stw 6, 224(29)
  0141938  bl 0x15d12c
  014193c  nop
  0141940  ori 3, 27, 0
  0141944  b 0x141c5c
  0141948  addic 5, 5, 4
  014194c  lwz 7, 4(29)
  0141950  li 3, 2
  0141954  addc 4, 5, 4
  0141958  li 6, 4
  014195c  clrldi 5, 4, 32
  0141960  stw 3, 240(29)
  0141964  li 4, 17
  0141968  stw 7, 236(29)
  014196c  ori 3, 27, 0
  0141970  stw 6, 12(29)
  0141974  lwz 6, 20(31)
  0141978  lwz 5, 0(5)
  014197c  stw 5, 224(29)
  0141980  ori 5, 6, 0
  0141984  bl 0x15d12c
  0141988  nop
  014198c  ori 3, 27, 0
  0141990  b 0x141c5c
  0141994  addic 5, 5, 4
  0141998  lwz 7, 4(29)
  014199c  li 3, 2
  01419a0  addc 4, 5, 4
  01419a4  li 6, 6
  01419a8  clrldi 5, 4, 32
  01419ac  stw 3, 240(29)
  01419b0  li 4, 17
  01419b4  stw 7, 236(29)
  01419b8  ori 3, 27, 0
  01419bc  stw 6, 12(29)
  01419c0  lwz 6, 20(31)
  01419c4  lwz 5, 0(5)
  01419c8  stw 5, 224(29)
  01419cc  ori 5, 6, 0
  01419d0  bl 0x15d12c
  01419d4  nop
  01419d8  ori 3, 27, 0
  01419dc  b 0x141c5c
  01419e0  li 5, 2
  01419e4  lwz 7, 4(29)
  01419e8  li 6, 7
  01419ec  ori 3, 27, 0
  01419f0  li 4, 17
  01419f4  stw 5, 240(29)
  01419f8  stw 7, 236(29)
  01419fc  lwz 5, 20(31)
  0141a00  stw 6, 12(29)
  0141a04  bl 0x15d12c
  0141a08  nop
  0141a0c  ori 3, 27, 0
  0141a10  b 0x141c5c
  0141a14  addic 3, 5, 4
  0141a18  lis 5, 151
  0141a1c  addc 3, 3, 4
  0141a20  clrldi 3, 3, 32
  0141a24  lwz 3, 0(3)
  0141a28  stw 3, -25484(5)
  0141a2c  lwz 3, -25484(5)
  0141a30  cmpwi 3, 6
  0141a34  bf 2, 0x141a5c
  0141a38  lis 3, 346
  0141a3c  li 4, 1
  0141a40  lis 5, 144
  0141a44  li 6, 96
  0141a48  lis 7, 144
  0141a4c  stb 4, -15535(3)
  0141a50  stw 6, 11988(5)
  0141a54  stw 6, 11992(7)
  0141a58  b 0x141a7c
  0141a5c  lis 3, 346
  0141a60  lis 4, 144
  0141a64  li 5, 64
  0141a68  lis 6, 144
  0141a6c  li 7, 32
  0141a70  stb 27, -15535(3)
  0141a74  stw 5, 11988(4)
  0141a78  stw 7, 11992(6)
  0141a7c  bl 0x11530
  0141a80  nop
  0141a84  ori 3, 27, 0
  0141a88  b 0x141c5c
  0141a8c  li 3, 2
  0141a90  li 4, 17
  0141a94  lwz 5, 20(31)
  0141a98  bl 0x15d12c
  0141a9c  nop
  0141aa0  lwz 3, 52(30)
  0141aa4  ori 4, 27, 0
  0141aa8  lhz 3, 0(3)
  0141aac  cmpwi 3, 0
  0141ab0  bt 2, 0x141ad4
  0141ab4  ori 3, 27, 0
  0141ab8  addic 3, 3, 12
  0141abc  lwz 6, 52(30)
  0141ac0  addic 4, 4, 1
  0141ac4  extsw 5, 3
  0141ac8  lhzx 5, 6, 5
  0141acc  cmpwi 5, 0
  0141ad0  bf 2, 0x141ab8
  0141ad4  lwz 3, 48(30)
  0141ad8  lwz 5, 64(30)
  0141adc  clrlwi 6, 3, 31
  0141ae0  cmpwi 6, 0
  0141ae4  bt 2, 0x141af0
  0141ae8  lwz 28, 180(28)
  0141aec  b 0x141af4
  0141af0  lwz 28, 196(28)
  0141af4  rlwinm 6, 28, 0, 19, 19
  0141af8  cmpwi 6, 0
  0141afc  bf 2, 0x141b18
  0141b00  rlwinm 3, 3, 0, 23, 23
  0141b04  cmpwi 3, 0
  0141b08  bt 2, 0x141b58
  0141b0c  rlwinm 3, 28, 0, 29, 29
  0141b10  cmpwi 3, 0
  0141b14  bt 2, 0x141b58
  0141b18  cmpwi 5, 0
  0141b1c  bt 2, 0x141b30
  0141b20  lwz 3, 64(30)
  0141b24  addic 3, 3, -1
  0141b28  stw 3, 64(30)
  0141b2c  b 0x141b58
  0141b30  lwz 3, 48(30)
  0141b34  rlwinm 3, 3, 0, 19, 19
  0141b38  cmpwi 3, 0
  0141b3c  bt 2, 0x141b4c
  0141b40  addic 3, 4, -1
  0141b44  stw 3, 64(30)
  0141b48  b 0x141b58
  0141b4c  lwz 3, 4(29)
  0141b50  lwz 4, 56(30)
  0141b54  stw 4, 128(3)
  0141b58  rlwinm 3, 28, 0, 17, 17
  0141b5c  cmpwi 3, 0
  0141b60  bf 2, 0x141b80
  0141b64  lwz 3, 48(30)
  0141b68  rlwinm 3, 3, 0, 23, 23
  0141b6c  cmpwi 3, 0
  0141b70  bt 2, 0x141bf4
  0141b74  rlwinm 3, 28, 0, 28, 28
  0141b78  cmpwi 3, 0
  0141b7c  bt 2, 0x141bf4
  0141b80  lwz 4, 64(30)
  0141b84  lwz 3, 52(30)
  0141b88  addc 6, 4, 4
  0141b8c  addic 7, 3, 12
  0141b90  addc 6, 4, 6
  0141b94  sldi 6, 6, 2
  0141b98  addc 7, 7, 6
  0141b9c  clrldi 7, 7, 32
  0141ba0  lhz 7, 0(7)
  0141ba4  cmpwi 7, 0
  0141ba8  bt 2, 0x141bd0
  0141bac  addic 3, 3, 14
  0141bb0  addc 3, 3, 6
  0141bb4  clrldi 3, 3, 32
  0141bb8  lhz 3, 0(3)
  0141bbc  cmpwi 3, 0
  0141bc0  bt 2, 0x141bd0
  0141bc4  addic 3, 4, 1
  0141bc8  stw 3, 64(30)
  0141bcc  b 0x141bf4
  0141bd0  lwz 3, 48(30)
  0141bd4  rlwinm 3, 3, 0, 19, 19
  0141bd8  cmpwi 3, 0
  0141bdc  bt 2, 0x141be8
  0141be0  stw 27, 64(30)
  0141be4  b 0x141bf4
  0141be8  lwz 3, 4(29)
  0141bec  lwz 4, 60(30)
  0141bf0  stw 4, 128(3)
  0141bf4  lwz 3, 64(30)
  0141bf8  cmpw 3, 5
  0141bfc  bf 2, 0x141c10
  0141c00  lwz 3, 4(29)
  0141c04  lwz 3, 128(3)
  0141c08  cmpwi 3, 0
  0141c0c  bt 2, 0x141c58
  0141c10  li 3, 1
  0141c14  lwz 5, 20(31)
  0141c18  li 4, 17
  0141c1c  bl 0x15d12c
  0141c20  nop
  0141c24  lwz 3, 48(30)
  0141c28  rlwinm 3, 3, 0, 26, 26
  0141c2c  cmpwi 3, 0
  0141c30  bt 2, 0x141c58
  0141c34  lis 3, 115
  0141c38  lwz 5, 64(30)
  0141c3c  lis 4, 162
  0141c40  slwi 5, 5, 2
  0141c44  addic 4, 4, 1216
  0141c48  lwz 3, -26256(3)
  0141c4c  extsw 5, 5
  0141c50  lwzx 3, 3, 5
  0141c54  stw 3, 548(4)
  0141c58  ori 3, 27, 0
  0141c5c  ld 0, 208(1)
  0141c60  mtlr 0
  0141c64  ld 27, 152(1)
  0141c68  ld 28, 160(1)
  0141c6c  ld 29, 168(1)
  0141c70  ld 30, 176(1)
  0141c74  ld 31, 184(1)
  0141c78  addi 1, 1, 192
  0141c7c  blr

DrawPauseStrings:   # 0x141c90, 0xa18 bytes
  0141c90  stdu 1, -320(1)
  0141c94  mflr 0
  0141c98  std 0, 336(1)
  0141c9c  stfd 28, 288(1)
  0141ca0  stfd 29, 296(1)
  0141ca4  stfd 30, 304(1)
  0141ca8  stfd 31, 312(1)
  0141cac  std 22, 208(1)
  0141cb0  lis 4, 165
  0141cb4  std 27, 248(1)
  0141cb8  lis 22, 346
  0141cbc  addic 4, 4, 11184
  0141cc0  std 31, 280(1)
  0141cc4  ori 27, 3, 0
  0141cc8  std 14, 144(1)
  0141ccc  ori 31, 3, 0
  0141cd0  lis 14, 20
  0141cd4  lwz 4, 4(4)
  0141cd8  lbz 5, -15535(22)
  0141cdc  addi 14, 14, 7296
  0141ce0  cmpwi 5, 0
  0141ce4  std 30, 272(1)
  0141ce8  std 29, 264(1)
  0141cec  std 28, 256(1)
  0141cf0  std 26, 240(1)
  0141cf4  std 25, 232(1)
  0141cf8  std 24, 224(1)
  0141cfc  std 23, 216(1)
  0141d00  std 21, 200(1)
  0141d04  std 20, 192(1)
  0141d08  std 19, 184(1)
  0141d0c  std 18, 176(1)
  0141d10  std 17, 168(1)
  0141d14  std 16, 160(1)
  0141d18  std 15, 152(1)
  0141d1c  lwz 4, 64(4)
  0141d20  subc 3, 4, 3
  0141d24  std 3, 112(1)
  0141d28  bf 2, 0x141d3c
  0141d2c  lis 24, 115
  0141d30  li 25, 12
  0141d34  addic 24, 24, 26800
  0141d38  b 0x141d48
  0141d3c  lis 24, 115
  0141d40  li 25, 14
  0141d44  addic 24, 24, 29584
  0141d48  lwz 4, 48(27)
  0141d4c  li 23, 1
  0141d50  rlwinm 3, 4, 0, 29, 29
  0141d54  ori 16, 23, 0
  0141d58  cmpwi 3, 0
  0141d5c  bt 2, 0x141d8c
  0141d60  lbz 3, -15535(22)
  0141d64  cmpwi 3, 0
  0141d68  bf 2, 0x141d80
  0141d6c  lis 24, 115
  0141d70  li 25, 14
  0141d74  addic 24, 24, 28656
  0141d78  li 23, 3
  0141d7c  b 0x141d8c
  0141d80  lis 24, 115
  0141d84  li 25, 14
  0141d88  addic 24, 24, 29584
  0141d8c  lis 3, 151
  0141d90  lfs 31, 0(14)
  0141d94  lwz 3, -25484(3)
  0141d98  cmpwi 3, 6
  0141d9c  cmpwi 1, 3, 5
  0141da0  cmpwi 6, 3, 4
  0141da4  cmpwi 7, 3, 3
  0141da8  bt 2, 0x141dc4
  0141dac  bt 6, 0x141dcc
  0141db0  bt 26, 0x141dd4
  0141db4  bt 30, 0x141ddc
  0141db8  cmpwi 3, 2
  0141dbc  bt 2, 0x141de4
  0141dc0  b 0x141de8
  0141dc4  lfs 31, 4(14)
  0141dc8  b 0x141de8
  0141dcc  lfs 31, 8(14)
  0141dd0  b 0x141de8
  0141dd4  lfs 31, 8(14)
  0141dd8  b 0x141de8
  0141ddc  lfs 31, 8(14)
  0141de0  b 0x141de8
  0141de4  lfs 31, 8(14)
  0141de8  rlwinm 3, 4, 0, 28, 28
  0141dec  cmpwi 3, 0
  0141df0  bt 2, 0x141e24
  0141df4  lbz 3, -15535(22)
  0141df8  cmpwi 3, 0
  0141dfc  bf 2, 0x141e14
  0141e00  lis 24, 115
  0141e04  li 25, 10
  0141e08  addic 24, 24, 27728
  0141e0c  li 23, 2
  0141e10  b 0x141e24
  0141e14  lis 24, 115
  0141e18  li 25, 14
  0141e1c  addic 24, 24, 29584
  0141e20  ori 23, 16, 0
  0141e24  li 15, 0
  0141e28  li 30, 3
  0141e2c  ori 3, 15, 0
  0141e30  ori 4, 16, 0
  0141e34  ori 5, 15, 0
  0141e38  ori 6, 16, 0
  0141e3c  ori 7, 15, 0
  0141e40  bl 0x502ea8
  0141e44  nop
  0141e48  ori 4, 3, 0
  0141e4c  ori 3, 30, 0
  0141e50  bl 0x174f80
  0141e54  nop
  0141e58  ori 3, 16, 0
  0141e5c  li 30, 22
  0141e60  li 4, 5
  0141e64  ori 6, 15, 0
  0141e68  ori 8, 15, 0
  0141e6c  li 5, 4
  0141e70  ori 10, 16, 0
  0141e74  ori 7, 15, 0
  0141e78  ori 9, 15, 0
  0141e7c  bl 0x502f7c
  0141e80  nop
  0141e84  ori 4, 3, 0
  0141e88  ori 3, 30, 0
  0141e8c  bl 0x174f80
  0141e90  nop
  0141e94  ori 3, 15, 0
  0141e98  bl 0x6d704
  0141e9c  nop
  0141ea0  lwz 3, 52(27)
  0141ea4  ori 18, 15, 0
  0141ea8  lhz 3, 0(3)
  0141eac  cmpwi 3, 0
  0141eb0  bt 2, 0x141ed4
  0141eb4  ori 3, 15, 0
  0141eb8  addic 3, 3, 12
  0141ebc  lwz 5, 52(27)
  0141ec0  addic 18, 18, 1
  0141ec4  extsw 4, 3
  0141ec8  lhzx 4, 5, 4
  0141ecc  cmpwi 4, 0
  0141ed0  bf 2, 0x141eb8
  0141ed4  lwz 3, 48(27)
  0141ed8  rlwinm 4, 3, 0, 27, 27
  0141edc  cmpwi 4, 0
  0141ee0  bt 2, 0x141eec
  0141ee4  addic 18, 25, 3
  0141ee8  b 0x141ef8
  0141eec  addic 18, 18, 1
  0141ef0  lwz 4, 36(31)
  0141ef4  divw 18, 4, 18
  0141ef8  srawi 4, 25, 1
  0141efc  lwz 20, 32(31)
  0141f00  lis 5, 165
  0141f04  addze 4, 4
  0141f08  ori 17, 15, 0
  0141f0c  subc 25, 18, 4
  0141f10  srawi 20, 20, 1
  0141f14  lwz 4, 11184(5)
  0141f18  addic 25, 25, -1
  0141f1c  cmpwi 4, 42
  0141f20  bf 2, 0x141f38
  0141f24  lis 4, 151
  0141f28  lwz 4, -25484(4)
  0141f2c  cmpwi 4, 2
  0141f30  bf 2, 0x141f38
  0141f34  lfs 31, 12(14)
  0141f38  rlwinm 3, 3, 0, 17, 17
  0141f3c  cmpwi 3, 0
  0141f40  bt 2, 0x141fe4
  0141f44  lwz 3, 52(27)
  0141f48  lhz 3, 0(3)
  0141f4c  cmpwi 3, 0
  0141f50  bt 2, 0x141fe4
  0141f54  ori 30, 15, 0
  0141f58  ori 29, 30, 0
  0141f5c  lbz 3, -15535(22)
  0141f60  cmpwi 3, 0
  0141f64  bf 2, 0x141f94
  0141f68  lwz 3, 52(27)
  0141f6c  lhzx 3, 3, 30
  0141f70  extsh 3, 3
  0141f74  bl 0x7b740
  0141f78  nop
  0141f7c  li 4, -1
  0141f80  fmr 1, 31
  0141f84  ori 6, 24, 0
  0141f88  bl 0x69058
  0141f8c  nop
  0141f90  b 0x141fbc
  0141f94  lwz 3, 52(27)
  0141f98  lhzx 3, 3, 30
  0141f9c  extsh 3, 3
  0141fa0  bl 0x7b740
  0141fa4  nop
  0141fa8  fmr 1, 31
  0141fac  li 4, -1
  0141fb0  ori 6, 24, 0
  0141fb4  bl 0x6f918
  0141fb8  nop
  0141fbc  cmpw 17, 3
  0141fc0  bf 0, 0x141fc8
  0141fc4  ori 17, 3, 0
  0141fc8  addic 29, 29, 12
  0141fcc  lwz 4, 52(27)
  0141fd0  addic 30, 30, 12
  0141fd4  extsw 3, 29
  0141fd8  lhzx 3, 4, 3
  0141fdc  cmpwi 3, 0
  0141fe0  bf 2, 0x141f5c
  0141fe4  lwz 3, 48(27)
  0141fe8  rlwinm 4, 3, 0, 14, 14
  0141fec  cmpwi 4, 0
  0141ff0  bt 2, 0x142020
  0141ff4  addic 4, 17, 6
  0141ff8  lwz 5, 32(31)
  0141ffc  cmpw 4, 5
  0142000  bf 1, 0x142020
  0142004  rlwinm 4, 3, 0, 28, 28
  0142008  cmpwi 4, 0
  014200c  bf 2, 0x142020
  0142010  ori 4, 3, 8
  0142014  ori 3, 16, 0
  0142018  stw 4, 48(27)
  014201c  b 0x142640
  0142020  lwz 3, 32(31)
  0142024  cmpw 17, 3
  0142028  bf 1, 0x142030
  014202c  ori 17, 3, 0
  0142030  lwz 3, 52(27)
  0142034  ori 21, 15, 0
  0142038  lhz 3, 0(3)
  014203c  cmpwi 3, 0
  0142040  bt 2, 0x142634
  0142044  ori 28, 15, 0
  0142048  ori 19, 28, 0
  014204c  ld 4, 112(1)
  0142050  ori 3, 15, 0
  0142054  cmpwi 4, 0
  0142058  bf 2, 0x14206c
  014205c  lwz 4, 64(27)
  0142060  cmpw 4, 21
  0142064  bf 2, 0x14206c
  0142068  ori 3, 16, 0
  014206c  cmpwi 1, 3, 0
  0142070  lwz 3, 52(27)
  0142074  lwz 5, 48(27)
  0142078  lis 26, -32513
  014207c  addic 4, 3, 2
  0142080  rlwinm 5, 5, 0, 30, 30
  0142084  addc 4, 4, 28
  0142088  cmpwi 5, 0
  014208c  clrldi 4, 4, 32
  0142090  ori 26, 26, 43144
  0142094  lhz 4, 0(4)
  0142098  cmpwi 6, 4, 0
  014209c  bf 2, 0x14210c
  01420a0  bt 6, 0x1420dc
  01420a4  lis 4, -32768
  01420a8  ori 4, 4, 24672
  01420ac  bt 26, 0x1420d4
  01420b0  addic 3, 3, 10
  01420b4  li 4, -1
  01420b8  addc 3, 3, 28
  01420bc  ori 5, 4, 0
  01420c0  clrldi 3, 3, 32
  01420c4  lhz 3, 0(3)
  01420c8  extsh 3, 3
  01420cc  bl 0x140170
  01420d0  ori 4, 3, 0
  01420d4  ori 26, 4, 0
  01420d8  b 0x14210c
  01420dc  lis 26, -32720
  01420e0  ori 26, 26, 12336
  01420e4  bt 26, 0x14210c
  01420e8  addic 3, 3, 10
  01420ec  li 4, -1
  01420f0  addc 3, 3, 28
  01420f4  ori 5, 4, 0
  01420f8  clrldi 3, 3, 32
  01420fc  lhz 3, 0(3)
  0142100  extsh 3, 3
  0142104  bl 0x140170
  0142108  ori 26, 3, 0
  014210c  lwz 3, 52(27)
  0142110  lhzx 3, 3, 28
  0142114  extsh 3, 3
  0142118  bl 0x7b740
  014211c  nop
  0142120  lwz 4, 52(27)
  0142124  ori 30, 3, 0
  0142128  addic 4, 4, 2
  014212c  addc 4, 4, 28
  0142130  clrldi 3, 4, 32
  0142134  lhz 3, 0(3)
  0142138  cmpwi 3, 2
  014213c  bf 2, 0x142150
  0142140  li 3, 20308
  0142144  bl 0x7b740
  0142148  nop
  014214c  ori 30, 3, 0
  0142150  lbz 3, -15535(22)
  0142154  cmpwi 3, 0
  0142158  bf 2, 0x142180
  014215c  ori 3, 30, 0
  0142160  fmr 1, 31
  0142164  li 4, -1
  0142168  ori 6, 24, 0
  014216c  bl 0x69058
  0142170  nop
  0142174  srawi 31, 3, 1
  0142178  subc 31, 20, 31
  014217c  b 0x1421a0
  0142180  ori 3, 30, 0
  0142184  li 4, -1
  0142188  fmr 1, 31
  014218c  ori 6, 24, 0
  0142190  bl 0x6f918
  0142194  nop
  0142198  srawi 31, 3, 1
  014219c  subc 31, 20, 31
  01421a0  lwz 3, 48(27)
  01421a4  rlwinm 4, 3, 0, 25, 25
  01421a8  cmpwi 4, 0
  01421ac  bt 2, 0x1421b8
  01421b0  li 31, 4
  01421b4  b 0x1421cc
  01421b8  rlwinm 3, 3, 0, 17, 17
  01421bc  cmpwi 3, 0
  01421c0  bt 2, 0x1421cc
  01421c4  srawi 31, 17, 1
  01421c8  subc 31, 20, 31
  01421cc  bl 0x6ccb4
  01421d0  nop
  01421d4  lis 4, -32768
  01421d8  lbz 3, -15535(22)
  01421dc  cmpwi 3, 0
  01421e0  clrldi 29, 4, 32
  01421e4  bf 2, 0x142260
  01421e8  lis 3, 115
  01421ec  lis 4, 115
  01421f0  lwz 3, -26548(3)
  01421f4  lwz 4, -26544(4)
  01421f8  addc 3, 3, 31
  01421fc  extsw 3, 3
  0142200  std 3, 120(1)
  0142204  addc 3, 4, 25
  0142208  extsw 4, 3
  014220c  ori 3, 23, 0
  0142210  lfd 1, 120(1)
  0142214  std 4, 120(1)
  0142218  fcfid 1, 1
  014221c  frsp 30, 1
  0142220  lfd 1, 120(1)
  0142224  fcfid 1, 1
  0142228  frsp 29, 1
  014222c  bl 0x685c4
  0142230  nop
  0142234  fmr 1, 30
  0142238  ori 5, 29, 0
  014223c  fmr 2, 29
  0142240  ori 6, 30, 0
  0142244  fmr 3, 31
  0142248  li 7, -1
  014224c  ori 9, 3, 0
  0142250  ori 10, 24, 0
  0142254  bl 0x69a50
  0142258  nop
  014225c  b 0x1422d4
  0142260  lis 3, 115
  0142264  lis 4, 115
  0142268  lwz 3, -26548(3)
  014226c  lwz 4, -26544(4)
  0142270  addc 3, 3, 31
  0142274  extsw 3, 3
  0142278  std 3, 120(1)
  014227c  addc 3, 4, 25
  0142280  extsw 4, 3
  0142284  ori 3, 23, 0
  0142288  lfd 1, 120(1)
  014228c  std 4, 120(1)
  0142290  fcfid 1, 1
  0142294  frsp 30, 1
  0142298  lfd 1, 120(1)
  014229c  fcfid 1, 1
  01422a0  frsp 29, 1
  01422a4  bl 0x685c4
  01422a8  nop
  01422ac  fmr 1, 30
  01422b0  ori 5, 29, 0
  01422b4  fmr 2, 29
  01422b8  ori 6, 30, 0
  01422bc  fmr 3, 31
  01422c0  li 7, -1
  01422c4  ori 9, 3, 0
  01422c8  ori 10, 24, 0
  01422cc  bl 0x68c70
  01422d0  nop
  01422d4  bl 0x6c5dc
  01422d8  nop
  01422dc  lwz 3, 48(27)
  01422e0  rlwinm 3, 3, 0, 24, 24
  01422e4  cmpwi 3, 0
  01422e8  bt 2, 0x1422f4
  01422ec  bl 0x6ccb4
  01422f0  nop
  01422f4  extsw 3, 25
  01422f8  extsw 4, 31
  01422fc  std 3, 120(1)
  0142300  lbz 3, -15535(22)
  0142304  lfd 1, 120(1)
  0142308  std 4, 120(1)
  014230c  cmpwi 3, 0
  0142310  fcfid 30, 1
  0142314  frsp 30, 30
  0142318  lfd 1, 120(1)
  014231c  fcfid 29, 1
  0142320  frsp 29, 29
  0142324  bf 2, 0x142360
  0142328  ori 3, 23, 0
  014232c  bl 0x685c4
  0142330  nop
  0142334  fmr 1, 29
  0142338  ori 5, 26, 0
  014233c  fmr 2, 30
  0142340  ori 6, 30, 0
  0142344  fmr 3, 31
  0142348  li 7, -1
  014234c  ori 9, 3, 0
  0142350  ori 10, 24, 0
  0142354  bl 0x69a50
  0142358  nop
  014235c  b 0x142394
  0142360  ori 3, 23, 0
  0142364  bl 0x685c4
  0142368  nop
  014236c  fmr 1, 29
  0142370  ori 5, 26, 0
  0142374  fmr 2, 30
  0142378  ori 6, 30, 0
  014237c  fmr 3, 31
  0142380  li 7, -1
  0142384  ori 9, 3, 0
  0142388  ori 10, 24, 0
  014238c  bl 0x68c70
  0142390  nop
  0142394  lwz 3, 52(27)
  0142398  addc 25, 25, 18
  014239c  addic 3, 3, 8
  01423a0  addc 3, 3, 28
  01423a4  clrldi 3, 3, 32
  01423a8  lhz 3, 0(3)
  01423ac  cmpwi 3, 0
  01423b0  bt 2, 0x1425fc
  01423b4  bl 0x6ccb4
  01423b8  nop
  01423bc  lbz 3, -15535(22)
  01423c0  cmpwi 3, 0
  01423c4  bf 2, 0x142468
  01423c8  lis 3, 115
  01423cc  lis 4, 115
  01423d0  lwz 3, -26548(3)
  01423d4  lwz 4, -26544(4)
  01423d8  addc 3, 3, 31
  01423dc  extsw 3, 3
  01423e0  std 3, 120(1)
  01423e4  addc 3, 4, 25
  01423e8  lwz 4, 52(27)
  01423ec  extsw 3, 3
  01423f0  addic 4, 4, 8
  01423f4  addc 4, 4, 28
  01423f8  clrldi 4, 4, 32
  01423fc  lhz 4, 0(4)
  0142400  lfd 1, 120(1)
  0142404  std 3, 120(1)
  0142408  fcfid 1, 1
  014240c  extsh 3, 4
  0142410  frsp 30, 1
  0142414  lfd 1, 120(1)
  0142418  fcfid 1, 1
  014241c  frsp 28, 1
  0142420  bl 0x7b740
  0142424  nop
  0142428  ori 31, 3, 0
  014242c  li 30, -1
  0142430  ori 3, 23, 0
  0142434  bl 0x685c4
  0142438  nop
  014243c  ori 5, 29, 0
  0142440  fmr 1, 30
  0142444  ori 6, 31, 0
  0142448  fmr 2, 28
  014244c  ori 7, 30, 0
  0142450  fmr 3, 31
  0142454  ori 9, 3, 0
  0142458  ori 10, 24, 0
  014245c  bl 0x69a50
  0142460  nop
  0142464  b 0x142504
  0142468  lis 3, 115
  014246c  lis 4, 115
  0142470  lwz 3, -26548(3)
  0142474  lwz 4, -26544(4)
  0142478  addc 3, 3, 31
  014247c  extsw 3, 3
  0142480  std 3, 120(1)
  0142484  addc 3, 4, 25
  0142488  lwz 4, 52(27)
  014248c  extsw 3, 3
  0142490  addic 4, 4, 8
  0142494  addc 4, 4, 28
  0142498  clrldi 4, 4, 32
  014249c  lhz 4, 0(4)
  01424a0  lfd 1, 120(1)
  01424a4  std 3, 120(1)
  01424a8  fcfid 1, 1
  01424ac  extsh 3, 4
  01424b0  frsp 30, 1
  01424b4  lfd 1, 120(1)
  01424b8  fcfid 1, 1
  01424bc  frsp 28, 1
  01424c0  bl 0x7b740
  01424c4  nop
  01424c8  ori 31, 3, 0
  01424cc  li 30, -1
  01424d0  ori 3, 23, 0
  01424d4  bl 0x685c4
  01424d8  nop
  01424dc  ori 5, 29, 0
  01424e0  fmr 1, 30
  01424e4  ori 6, 31, 0
  01424e8  fmr 2, 28
  01424ec  ori 7, 30, 0
  01424f0  fmr 3, 31
  01424f4  ori 9, 3, 0
  01424f8  ori 10, 24, 0
  01424fc  bl 0x68c70
  0142500  nop
  0142504  lwz 3, 48(27)
  0142508  rlwinm 3, 3, 0, 24, 24
  014250c  cmpwi 3, 0
  0142510  bf 2, 0x14251c
  0142514  bl 0x6c5dc
  0142518  nop
  014251c  extsw 3, 25
  0142520  std 3, 120(1)
  0142524  lbz 3, -15535(22)
  0142528  lfd 1, 120(1)
  014252c  cmpwi 3, 0
  0142530  fcfid 30, 1
  0142534  frsp 30, 30
  0142538  bf 2, 0x14259c
  014253c  lwz 3, 52(27)
  0142540  addic 3, 3, 8
  0142544  addc 3, 3, 28
  0142548  clrldi 3, 3, 32
  014254c  lhz 3, 0(3)
  0142550  extsh 3, 3
  0142554  bl 0x7b740
  0142558  nop
  014255c  ori 31, 3, 0
  0142560  li 30, -1
  0142564  ori 3, 23, 0
  0142568  bl 0x685c4
  014256c  nop
  0142570  fmr 1, 29
  0142574  ori 5, 26, 0
  0142578  fmr 2, 30
  014257c  ori 6, 31, 0
  0142580  fmr 3, 31
  0142584  ori 7, 30, 0
  0142588  ori 9, 3, 0
  014258c  ori 10, 24, 0
  0142590  bl 0x69a50
  0142594  nop
  0142598  b 0x1425f8
  014259c  lwz 3, 52(27)
  01425a0  addic 3, 3, 8
  01425a4  addc 3, 3, 28
  01425a8  clrldi 3, 3, 32
  01425ac  lhz 3, 0(3)
  01425b0  extsh 3, 3
  01425b4  bl 0x7b740
  01425b8  nop
  01425bc  ori 31, 3, 0
  01425c0  li 30, -1
  01425c4  ori 3, 23, 0
  01425c8  bl 0x685c4
  01425cc  nop
  01425d0  fmr 1, 29
  01425d4  ori 5, 26, 0
  01425d8  fmr 2, 30
  01425dc  ori 6, 31, 0
  01425e0  fmr 3, 31
  01425e4  ori 7, 30, 0
  01425e8  ori 9, 3, 0
  01425ec  ori 10, 24, 0
  01425f0  bl 0x68c70
  01425f4  nop
  01425f8  addc 25, 25, 18
  01425fc  lwz 3, 48(27)
  0142600  rlwinm 3, 3, 0, 24, 24
  0142604  cmpwi 3, 0
  0142608  bt 2, 0x142614
  014260c  bl 0x6c5dc
  0142610  nop
  0142614  addic 19, 19, 12
  0142618  lwz 4, 52(27)
  014261c  addic 21, 21, 1
  0142620  extsw 3, 19
  0142624  addic 28, 28, 12
  0142628  lhzx 3, 4, 3
  014262c  cmpwi 3, 0
  0142630  bf 2, 0x14204c
  0142634  bl 0x6d708
  0142638  nop
  014263c  li 3, 2
  0142640  ld 0, 336(1)
  0142644  mtlr 0
  0142648  lfd 28, 288(1)
  014264c  lfd 29, 296(1)
  0142650  lfd 30, 304(1)
  0142654  lfd 31, 312(1)
  0142658  ld 14, 144(1)
  014265c  ld 15, 152(1)
  0142660  ld 16, 160(1)
  0142664  ld 17, 168(1)
  0142668  ld 18, 176(1)
  014266c  ld 19, 184(1)
  0142670  ld 20, 192(1)
  0142674  ld 21, 200(1)
  0142678  ld 22, 208(1)
  014267c  ld 23, 216(1)
  0142680  ld 24, 224(1)
  0142684  ld 25, 232(1)
  0142688  ld 26, 240(1)
  014268c  ld 27, 248(1)
  0142690  ld 28, 256(1)
  0142694  ld 29, 264(1)
  0142698  ld 30, 272(1)
  014269c  ld 31, 280(1)
  01426a0  addi 1, 1, 320
  01426a4  blr

MenuButton_OnEnter:   # 0x1426a8, 0xdc bytes
  01426a8  ori 6, 4, 0
  01426ac  li 5, 0
  01426b0  ori 4, 3, 0
  01426b4  cmpwi 6, 0
  01426b8  ori 3, 5, 0
  01426bc  bt 2, 0x1426c8
  01426c0  ori 3, 5, 0
  01426c4  b 0x142780
  01426c8  lis 6, 165
  01426cc  addic 6, 6, 11184
  01426d0  lwz 7, 304(6)
  01426d4  cmpwi 7, 0
  01426d8  bt 2, 0x1426f0
  01426dc  lwz 7, 48(4)
  01426e0  rlwinm 7, 7, 0, 28, 28
  01426e4  cmpwi 7, 0
  01426e8  bt 2, 0x1426f0
  01426ec  li 5, 1
  01426f0  lwz 7, 308(6)
  01426f4  cmpwi 7, 0
  01426f8  bt 2, 0x142710
  01426fc  lwz 7, 48(4)
  0142700  rlwinm 7, 7, 0, 29, 29
  0142704  cmpwi 7, 0
  0142708  bt 2, 0x142710
  014270c  li 5, 1
  0142710  cmpwi 5, 0
  0142714  ori 7, 3, 0
  0142718  bt 2, 0x142770
  014271c  lwz 4, 76(4)
  0142720  li 7, 1
  0142724  lwz 8, 304(6)
  0142728  ori 5, 3, 0
  014272c  cmpwi 8, 0
  0142730  bt 2, 0x142748
  0142734  lwz 8, 48(4)
  0142738  rlwinm 8, 8, 0, 28, 28
  014273c  cmpwi 8, 0
  0142740  bt 2, 0x142748
  0142744  ori 5, 7, 0
  0142748  lwz 8, 308(6)
  014274c  cmpwi 8, 0
  0142750  bt 2, 0x142768
  0142754  lwz 8, 48(4)
  0142758  rlwinm 8, 8, 0, 29, 29
  014275c  cmpwi 8, 0
  0142760  bt 2, 0x142768
  0142764  ori 5, 7, 0
  0142768  cmpwi 5, 0
  014276c  bf 2, 0x14271c
  0142770  cmpwi 7, 0
  0142774  bt 2, 0x142780
  0142778  lwz 5, 4(6)
  014277c  stw 4, 128(5)
  0142780  blr

MenuButton_Update:   # 0x142784, 0x5dc bytes
  0142784  stdu 1, -160(1)
  0142788  mflr 0
  014278c  std 0, 176(1)
  0142790  std 29, 136(1)
  0142794  std 30, 144(1)
  0142798  lis 29, 165
  014279c  ori 30, 3, 0
  01427a0  std 31, 152(1)
  01427a4  addic 29, 29, 11184
  01427a8  ori 31, 30, 0
  01427ac  lwz 3, 4(29)
  01427b0  lwz 4, 64(3)
  01427b4  subc 4, 4, 30
  01427b8  std 28, 128(1)
  01427bc  std 27, 120(1)
  01427c0  cmpwi 4, 0
  01427c4  bt 2, 0x1427d0
  01427c8  li 3, 0
  01427cc  b 0x142d3c
  01427d0  lis 28, 150
  01427d4  li 5, 3328
  01427d8  addic 28, 28, 19008
  01427dc  lwz 4, 196(28)
  01427e0  and 5, 4, 5
  01427e4  cmpwi 5, 0
  01427e8  bt 2, 0x142800
  01427ec  lwz 5, 288(29)
  01427f0  cmpwi 5, 0
  01427f4  bf 2, 0x142800
  01427f8  li 3, 1
  01427fc  b 0x142d3c
  0142800  rlwinm 4, 4, 0, 27, 27
  0142804  cmpwi 4, 0
  0142808  bt 2, 0x14283c
  014280c  lwz 3, 56(3)
  0142810  cmpwi 3, 0
  0142814  bt 2, 0x142828
  0142818  ori 4, 3, 0
  014281c  li 3, 0
  0142820  stw 4, 8(29)
  0142824  b 0x142d3c
  0142828  lwz 3, 288(29)
  014282c  cmpwi 3, 0
  0142830  bf 2, 0x14283c
  0142834  li 3, -1
  0142838  b 0x142d3c
  014283c  lwz 4, 68(30)
  0142840  lwz 8, 60(30)
  0142844  divw 3, 8, 4
  0142848  divw 5, 8, 4
  014284c  mullw 6, 3, 4
  0142850  lwz 3, 64(30)
  0142854  ori 7, 8, 0
  0142858  lwz 9, 196(28)
  014285c  subc 6, 8, 6
  0142860  cmpwi 1, 5, 0
  0142864  rlwinm 9, 9, 0, 19, 19
  0142868  cmpwi 9, 0
  014286c  bt 2, 0x142990
  0142870  bt 6, 0x142880
  0142874  subc 8, 8, 4
  0142878  stw 8, 60(30)
  014287c  b 0x142990
  0142880  lwz 9, 76(30)
  0142884  cmpwi 9, 0
  0142888  bt 2, 0x142970
  014288c  ori 8, 30, 0
  0142890  lwz 8, 76(8)
  0142894  li 11, 0
  0142898  lwz 9, 304(29)
  014289c  ori 12, 11, 0
  01428a0  cmpwi 9, 0
  01428a4  lwz 9, 64(8)
  01428a8  lwz 10, 68(8)
  01428ac  bt 2, 0x1428c4
  01428b0  lwz 27, 48(8)
  01428b4  rlwinm 27, 27, 0, 28, 28
  01428b8  cmpwi 27, 0
  01428bc  bt 2, 0x1428c4
  01428c0  li 11, 1
  01428c4  lwz 27, 308(29)
  01428c8  cmpwi 27, 0
  01428cc  bt 2, 0x1428e4
  01428d0  lwz 27, 48(8)
  01428d4  rlwinm 27, 27, 0, 29, 29
  01428d8  cmpwi 27, 0
  01428dc  bt 2, 0x1428e4
  01428e0  li 11, 1
  01428e4  cmpwi 11, 0
  01428e8  bf 2, 0x142890
  01428ec  lwz 11, 4(29)
  01428f0  cmpwi 10, 5
  01428f4  stw 8, 128(11)
  01428f8  bf 2, 0x14290c
  01428fc  lwz 11, 68(30)
  0142900  cmpwi 11, 3
  0142904  bf 2, 0x14290c
  0142908  addic 6, 6, 1
  014290c  cmpwi 10, 3
  0142910  bf 2, 0x142944
  0142914  lwz 11, 68(30)
  0142918  cmpwi 11, 5
  014291c  bf 2, 0x142944
  0142920  addic 6, 6, -1
  0142924  li 11, 2
  0142928  cmpwi 6, 2
  014292c  bt 1, 0x142940
  0142930  ori 11, 6, 0
  0142934  cmpwi 11, 0
  0142938  bf 0, 0x142940
  014293c  ori 11, 12, 0
  0142940  ori 6, 11, 0
  0142944  ori 12, 10, 0
  0142948  ori 10, 6, 0
  014294c  addic 11, 12, -1
  0142950  addic 9, 9, -1
  0142954  cmpw 10, 11
  0142958  mullw 9, 9, 12
  014295c  bt 0, 0x142964
  0142960  ori 10, 11, 0
  0142964  addc 9, 9, 10
  0142968  stw 9, 60(8)
  014296c  b 0x142990
  0142970  lwz 9, 48(30)
  0142974  rlwinm 9, 9, 0, 16, 16
  0142978  cmpwi 9, 0
  014297c  bf 2, 0x142990
  0142980  addic 9, 3, -1
  0142984  mullw 9, 4, 9
  0142988  addc 8, 8, 9
  014298c  stw 8, 60(30)
  0142990  lwz 8, 196(28)
  0142994  rlwinm 8, 8, 0, 17, 17
  0142998  cmpwi 8, 0
  014299c  bt 2, 0x142ac8
  01429a0  addic 5, 5, 1
  01429a4  cmpw 5, 3
  01429a8  bf 0, 0x1429bc
  01429ac  lwz 3, 60(30)
  01429b0  addc 3, 3, 4
  01429b4  stw 3, 60(30)
  01429b8  b 0x142ac8
  01429bc  lwz 3, 80(30)
  01429c0  cmpwi 3, 0
  01429c4  bt 2, 0x142a9c
  01429c8  ori 3, 30, 0
  01429cc  lwz 3, 80(3)
  01429d0  li 8, 0
  01429d4  lwz 5, 304(29)
  01429d8  ori 9, 8, 0
  01429dc  cmpwi 5, 0
  01429e0  lwz 5, 68(3)
  01429e4  bt 2, 0x1429fc
  01429e8  lwz 10, 48(3)
  01429ec  rlwinm 10, 10, 0, 28, 28
  01429f0  cmpwi 10, 0
  01429f4  bt 2, 0x1429fc
  01429f8  li 8, 1
  01429fc  lwz 10, 308(29)
  0142a00  cmpwi 10, 0
  0142a04  bt 2, 0x142a1c
  0142a08  lwz 10, 48(3)
  0142a0c  rlwinm 10, 10, 0, 29, 29
  0142a10  cmpwi 10, 0
  0142a14  bt 2, 0x142a1c
  0142a18  li 8, 1
  0142a1c  cmpwi 8, 0
  0142a20  bf 2, 0x1429cc
  0142a24  lwz 8, 4(29)
  0142a28  cmpwi 5, 5
  0142a2c  stw 3, 128(8)
  0142a30  bf 2, 0x142a44
  0142a34  lwz 8, 68(30)
  0142a38  cmpwi 8, 3
  0142a3c  bf 2, 0x142a44
  0142a40  addic 6, 6, 1
  0142a44  cmpwi 5, 3
  0142a48  bf 2, 0x142a7c
  0142a4c  lwz 8, 68(30)
  0142a50  cmpwi 8, 5
  0142a54  bf 2, 0x142a7c
  0142a58  addic 6, 6, -1
  0142a5c  li 8, 2
  0142a60  cmpwi 6, 2
  0142a64  bt 1, 0x142a78
  0142a68  ori 8, 6, 0
  0142a6c  cmpwi 8, 0
  0142a70  bf 0, 0x142a78
  0142a74  ori 8, 9, 0
  0142a78  ori 6, 8, 0
  0142a7c  ori 8, 5, 0
  0142a80  ori 5, 6, 0
  0142a84  addic 8, 8, -1
  0142a88  cmpw 5, 8
  0142a8c  bt 0, 0x142a94
  0142a90  ori 5, 8, 0
  0142a94  stw 5, 60(3)
  0142a98  b 0x142ac8
  0142a9c  lwz 3, 48(30)
  0142aa0  rlwinm 3, 3, 0, 16, 16
  0142aa4  cmpwi 3, 0
  0142aa8  bf 2, 0x142ac8
  0142aac  lwz 3, 64(30)
  0142ab0  lwz 5, 68(30)
  0142ab4  addic 3, 3, -1
  0142ab8  mullw 3, 5, 3
  0142abc  lwz 5, 60(30)
  0142ac0  subc 3, 5, 3
  0142ac4  stw 3, 60(30)
  0142ac8  lwz 3, 196(28)
  0142acc  cmpwi 1, 6, 0
  0142ad0  rlwinm 5, 3, 0, 16, 16
  0142ad4  cmpwi 5, 0
  0142ad8  bt 2, 0x142b2c
  0142adc  bt 6, 0x142af0
  0142ae0  lwz 5, 60(30)
  0142ae4  addic 5, 5, -1
  0142ae8  stw 5, 60(30)
  0142aec  b 0x142b2c
  0142af0  lwz 5, 84(30)
  0142af4  cmpwi 5, 0
  0142af8  bt 2, 0x142b08
  0142afc  lwz 8, 4(29)
  0142b00  stw 5, 128(8)
  0142b04  b 0x142b2c
  0142b08  lwz 5, 48(30)
  0142b0c  rlwinm 5, 5, 0, 16, 16
  0142b10  cmpwi 5, 0
  0142b14  bf 2, 0x142b2c
  0142b18  lwz 5, 60(30)
  0142b1c  lwz 8, 68(30)
  0142b20  addc 5, 5, 8
  0142b24  addic 5, 5, -1
  0142b28  stw 5, 60(30)
  0142b2c  rlwinm 3, 3, 0, 18, 18
  0142b30  cmpwi 3, 0
  0142b34  bt 2, 0x142b90
  0142b38  addic 3, 6, 1
  0142b3c  cmpw 3, 4
  0142b40  bf 0, 0x142b54
  0142b44  lwz 3, 60(30)
  0142b48  addic 3, 3, 1
  0142b4c  stw 3, 60(30)
  0142b50  b 0x142b90
  0142b54  lwz 3, 88(30)
  0142b58  cmpwi 3, 0
  0142b5c  bt 2, 0x142b6c
  0142b60  lwz 4, 4(29)
  0142b64  stw 3, 128(4)
  0142b68  b 0x142b90
  0142b6c  lwz 3, 48(30)
  0142b70  rlwinm 3, 3, 0, 16, 16
  0142b74  cmpwi 3, 0
  0142b78  bf 2, 0x142b90
  0142b7c  lwz 3, 60(30)
  0142b80  lwz 4, 68(30)
  0142b84  subc 3, 3, 4
  0142b88  addic 3, 3, 1
  0142b8c  stw 3, 60(30)
  0142b90  lwz 3, 60(30)
  0142b94  cmpw 3, 7
  0142b98  bf 2, 0x142bac
  0142b9c  lwz 3, 4(29)
  0142ba0  lwz 3, 128(3)
  0142ba4  cmpwi 3, 0
  0142ba8  bt 2, 0x142bc0
  0142bac  li 3, 1
  0142bb0  li 4, 17
  0142bb4  lwz 5, 20(31)
  0142bb8  bl 0x15d12c
  0142bbc  nop
  0142bc0  lis 3, 144
  0142bc4  lwz 4, 196(28)
  0142bc8  lwz 3, 11988(3)
  0142bcc  and 3, 4, 3
  0142bd0  cmpwi 3, 0
  0142bd4  bt 2, 0x142d38
  0142bd8  lwz 3, 48(30)
  0142bdc  clrlwi 3, 3, 31
  0142be0  cmpwi 3, 0
  0142be4  bf 2, 0x142d38
  0142be8  lwz 3, 324(29)
  0142bec  cmpwi 3, 0
  0142bf0  bf 2, 0x142d38
  0142bf4  lwz 3, 60(30)
  0142bf8  lwz 4, 72(30)
  0142bfc  sldi 5, 3, 3
  0142c00  addc 5, 3, 5
  0142c04  addc 3, 3, 5
  0142c08  addc 30, 4, 3
  0142c0c  clrldi 30, 30, 32
  0142c10  lhz 3, 6(30)
  0142c14  cmpwi 3, 0
  0142c18  bt 2, 0x142d24
  0142c1c  lis 4, 151
  0142c20  extsh 3, 3
  0142c24  addic 4, 4, -16064
  0142c28  lbzx 4, 4, 3
  0142c2c  cmpwi 4, 0
  0142c30  bt 2, 0x142d24
  0142c34  sldi 5, 3, 4
  0142c38  lis 4, 114
  0142c3c  subc 3, 3, 5
  0142c40  addic 6, 4, 4104
  0142c44  sldi 3, 3, 2
  0142c48  li 4, 17
  0142c4c  subc 7, 5, 3
  0142c50  lwz 5, 20(31)
  0142c54  li 3, 0
  0142c58  lwzx 31, 6, 7
  0142c5c  bl 0x15d12c
  0142c60  nop
  0142c64  slwi 5, 31, 2
  0142c68  li 3, 10
  0142c6c  extsw 5, 5
  0142c70  addic 4, 29, 48
  0142c74  addc 6, 29, 5
  0142c78  stw 3, 324(29)
  0142c7c  lhz 3, 6(30)
  0142c80  extsh 7, 3
  0142c84  lwz 6, 48(6)
  0142c88  cmpw 6, 7
  0142c8c  bf 2, 0x142cac
  0142c90  cmpwi 31, 0
  0142c94  bt 2, 0x142cac
  0142c98  cmpwi 31, 3
  0142c9c  bt 2, 0x142cac
  0142ca0  li 3, 0
  0142ca4  stwx 3, 4, 5
  0142ca8  b 0x142d38
  0142cac  cmpwi 3, 24
  0142cb0  bf 2, 0x142d14
  0142cb4  li 3, 24
  0142cb8  bl 0x8e0f4
  0142cbc  nop
  0142cc0  cmpwi 3, 0
  0142cc4  bt 2, 0x142d38
  0142cc8  lis 3, 165
  0142ccc  lwz 3, 11184(3)
  0142cd0  cmpwi 3, 3
  0142cd4  bf 2, 0x142d38
  0142cd8  li 3, 24
  0142cdc  bl 0x8e0f4
  0142ce0  nop
  0142ce4  lis 4, 151
  0142ce8  ori 5, 3, 0
  0142cec  addic 3, 4, -25376
  0142cf0  lbz 4, 8183(3)
  0142cf4  addc 4, 4, 5
  0142cf8  cmpwi 4, 6
  0142cfc  bf 1, 0x142d04
  0142d00  li 4, 6
  0142d04  li 5, 1
  0142d08  stb 4, 8183(3)
  0142d0c  stb 5, 8181(3)
  0142d10  b 0x142d38
  0142d14  lhz 3, 6(30)
  0142d18  extsh 3, 3
  0142d1c  stwx 3, 4, 5
  0142d20  b 0x142d38
  0142d24  li 3, 2
  0142d28  li 4, 17
  0142d2c  lwz 5, 20(31)
  0142d30  bl 0x15d12c
  0142d34  nop
  0142d38  li 3, 0
  0142d3c  ld 0, 176(1)
  0142d40  mtlr 0
  0142d44  ld 27, 120(1)
  0142d48  ld 28, 128(1)
  0142d4c  ld 29, 136(1)
  0142d50  ld 30, 144(1)
  0142d54  ld 31, 152(1)
  0142d58  addi 1, 1, 160
  0142d5c  blr

STUB_00142d60:   # 0x142d60, 0x8 bytes
  0142d60  li 3, 0
  0142d64  blr

MapPage_OnExit:   # 0x142d68, 0xd0 bytes
  0142d68  stdu 1, -128(1)
  0142d6c  mflr 0
  0142d70  std 0, 144(1)
  0142d74  lis 3, 150
  0142d78  addic 5, 3, 14024
  0142d7c  lhz 5, 8(5)
  0142d80  std 31, 120(1)
  0142d84  cmpwi 5, 0
  0142d88  bf 2, 0x142dd0
  0142d8c  lis 3, 162
  0142d90  addic 3, 3, 1216
  0142d94  lwz 4, 784(3)
  0142d98  cmpwi 4, -1
  0142d9c  bt 2, 0x142dd0
  0142da0  slwi 4, 4, 2
  0142da4  li 8, -1
  0142da8  extsw 4, 4
  0142dac  lis 6, 165
  0142db0  addc 4, 3, 4
  0142db4  addic 6, 6, 11184
  0142db8  li 7, 0
  0142dbc  lwz 9, 764(4)
  0142dc0  stw 8, 784(3)
  0142dc4  xori 3, 9, 4096
  0142dc8  stb 7, 203(6)
  0142dcc  stw 3, 764(4)
  0142dd0  cmpwi 5, 0
  0142dd4  bt 2, 0x142e20
  0142dd8  lis 31, 165
  0142ddc  addic 31, 31, 11184
  0142de0  lbz 3, 203(31)
  0142de4  cmpwi 3, 0
  0142de8  bt 2, 0x142e20
  0142dec  bl 0x11d9e0
  0142df0  nop
  0142df4  lis 3, 162
  0142df8  li 4, 0
  0142dfc  addic 3, 3, 1216
  0142e00  li 5, -1
  0142e04  lwz 6, 784(3)
  0142e08  stb 4, 203(31)
  0142e0c  slwi 6, 6, 2
  0142e10  stw 5, 784(3)
  0142e14  extsw 4, 6
  0142e18  addc 3, 3, 4
  0142e1c  stw 5, 764(3)
  0142e20  li 3, 0
  0142e24  ld 0, 144(1)
  0142e28  mtlr 0
  0142e2c  ld 31, 120(1)
  0142e30  addi 1, 1, 128
  0142e34  blr

MapPage_Update:   # 0x142e38, 0x754 bytes
  0142e38  mr 11, 1
  0142e3c  lis 12, -1
  0142e40  ori 12, 12, 32528
  0142e44  stdux 1, 1, 12
  0142e48  mflr 0
  0142e4c  std 0, 16(11)
  0142e50  std 31, -8(11)
  0142e54  std 30, -16(11)
  0142e58  ori 31, 3, 0
  0142e5c  std 29, -24(11)
  0142e60  std 28, -32(11)
  0142e64  std 27, -40(11)
  0142e68  std 26, -48(11)
  0142e6c  std 25, -56(11)
  0142e70  ori 30, 31, 0
  0142e74  bl 0xe2848
  0142e78  nop
  0142e7c  lwz 3, 52(30)
  0142e80  rlwinm 3, 3, 0, 25, 25
  0142e84  cmpwi 3, 0
  0142e88  bf 2, 0x14305c
  0142e8c  lis 27, 162
  0142e90  lis 28, 150
  0142e94  addic 27, 27, 1216
  0142e98  addic 28, 28, 19008
  0142e9c  li 4, 3328
  0142ea0  lwz 29, 548(27)
  0142ea4  lwz 3, 196(28)
  0142ea8  cmpwi 1, 29, 0
  0142eac  and 4, 3, 4
  0142eb0  cmpwi 4, 0
  0142eb4  bt 2, 0x142ed4
  0142eb8  lis 4, 165
  0142ebc  addic 4, 4, 11184
  0142ec0  lwz 4, 288(4)
  0142ec4  cmpwi 4, 0
  0142ec8  bf 2, 0x142ed4
  0142ecc  li 3, 1
  0142ed0  b 0x14355c
  0142ed4  rlwinm 3, 3, 0, 27, 27
  0142ed8  cmpwi 3, 0
  0142edc  bt 2, 0x142f20
  0142ee0  lis 4, 165
  0142ee4  addic 4, 4, 11184
  0142ee8  lwz 3, 4(4)
  0142eec  lwz 5, 56(3)
  0142ef0  cmpwi 5, 0
  0142ef4  bt 2, 0x142f0c
  0142ef8  ori 5, 3, 0
  0142efc  li 3, 0
  0142f00  lwz 5, 56(5)
  0142f04  stw 5, 8(4)
  0142f08  b 0x14355c
  0142f0c  lwz 3, 288(4)
  0142f10  cmpwi 3, 0
  0142f14  bf 2, 0x142f20
  0142f18  li 3, -1
  0142f1c  b 0x14355c
  0142f20  lwz 3, 196(28)
  0142f24  rlwinm 4, 3, 0, 25, 25
  0142f28  cmpwi 4, 0
  0142f2c  bt 2, 0x142f44
  0142f30  lis 5, 165
  0142f34  lis 4, 115
  0142f38  addic 5, 5, 11184
  0142f3c  addic 4, 4, -21280
  0142f40  stw 4, 8(5)
  0142f44  rlwinm 3, 3, 0, 26, 26
  0142f48  cmpwi 3, 0
  0142f4c  bt 2, 0x142f9c
  0142f50  bt 6, 0x142f9c
  0142f54  lis 4, 165
  0142f58  lis 3, 115
  0142f5c  addic 6, 4, 11184
  0142f60  addic 3, 3, -22032
  0142f64  li 5, 11
  0142f68  li 7, 3
  0142f6c  li 30, 0
  0142f70  stw 3, 236(6)
  0142f74  stw 5, 240(6)
  0142f78  ori 3, 30, 0
  0142f7c  stw 7, 12(6)
  0142f80  li 4, 17
  0142f84  stw 29, 224(6)
  0142f88  lwz 5, 20(31)
  0142f8c  bl 0x15d12c
  0142f90  nop
  0142f94  ori 3, 30, 0
  0142f98  b 0x14355c
  0142f9c  lwz 3, 548(27)
  0142fa0  extsw 3, 3
  0142fa4  bl 0xe24ac
  0142fa8  nop
  0142fac  cmpwi 3, 0
  0142fb0  bt 0, 0x143034
  0142fb4  lwz 28, 196(28)
  0142fb8  sldi 4, 3, 2
  0142fbc  rlwinm 5, 28, 0, 28, 28
  0142fc0  cmpwi 5, 0
  0142fc4  bt 2, 0x142ff8
  0142fc8  cmpwi 3, 19
  0142fcc  bf 0, 0x142ff8
  0142fd0  lis 5, 115
  0142fd4  lwz 5, -26256(5)
  0142fd8  addic 5, 5, 4
  0142fdc  addc 5, 5, 4
  0142fe0  clrldi 5, 5, 32
  0142fe4  lwz 6, 0(5)
  0142fe8  cmpwi 6, 0
  0142fec  bt 2, 0x142ff8
  0142ff0  lwz 5, 0(5)
  0142ff4  stw 5, 548(27)
  0142ff8  rlwinm 5, 28, 0, 29, 29
  0142ffc  cmpwi 5, 0
  0143000  bt 2, 0x143034
  0143004  cmpwi 3, 0
  0143008  bt 2, 0x143034
  014300c  lis 3, 115
  0143010  lwz 3, -26256(3)
  0143014  addic 3, 3, -4
  0143018  addc 4, 3, 4
  014301c  clrldi 4, 4, 32
  0143020  lwz 3, 0(4)
  0143024  cmpwi 3, 0
  0143028  bt 2, 0x143034
  014302c  lwz 3, 0(4)
  0143030  stw 3, 548(27)
  0143034  lwz 3, 548(27)
  0143038  cmpw 3, 29
  014303c  bt 2, 0x14305c
  0143040  li 3, 1
  0143044  lwz 5, 20(31)
  0143048  li 4, 17
  014304c  bl 0x15d12c
  0143050  nop
  0143054  bl 0xea5b0
  0143058  nop
  014305c  lis 28, 162
  0143060  addic 28, 28, 1216
  0143064  lwz 3, 548(28)
  0143068  lwz 4, 552(28)
  014306c  cmpw 3, 4
  0143070  bt 2, 0x1433d8
  0143074  lis 31, 151
  0143078  addic 31, 31, -16064
  014307c  lbz 4, 33(31)
  0143080  cmpwi 4, 0
  0143084  bt 2, 0x1430b0
  0143088  lis 5, 101
  014308c  ori 6, 3, 0
  0143090  addic 3, 1, 112
  0143094  addic 4, 5, 13572
  0143098  extsw 5, 6
  014309c  bl 0x5cd2a8
  01430a0  nop
  01430a4  li 3, 1
  01430a8  stw 3, 560(28)
  01430ac  b 0x1430d4
  01430b0  lis 5, 101
  01430b4  ori 6, 3, 0
  01430b8  addic 3, 1, 112
  01430bc  addic 4, 5, 13612
  01430c0  extsw 5, 6
  01430c4  bl 0x5cd2a8
  01430c8  nop
  01430cc  li 3, 0
  01430d0  stw 3, 560(28)
  01430d4  lis 3, 161
  01430d8  li 4, 1
  01430dc  addic 29, 3, 2264
  01430e0  addic 3, 1, 112
  01430e4  lis 5, 9
  01430e8  stw 4, 40(28)
  01430ec  lwz 4, 64(29)
  01430f0  bl 0x503e00
  01430f4  nop
  01430f8  lbz 3, 33(31)
  01430fc  lwz 31, 64(29)
  0143100  cmpwi 3, 0
  0143104  bt 2, 0x143128
  0143108  lis 4, 101
  014310c  lwz 5, 548(28)
  0143110  addic 3, 1, 112
  0143114  addic 4, 4, 13652
  0143118  extsw 5, 5
  014311c  bl 0x5cd2a8
  0143120  nop
  0143124  b 0x143144
  0143128  lis 4, 101
  014312c  lwz 5, 548(28)
  0143130  addic 3, 1, 112
  0143134  addic 4, 4, 13700
  0143138  extsw 5, 5
  014313c  bl 0x5cd2a8
  0143140  nop
  0143144  lwz 4, 848(28)
  0143148  lis 5, 48
  014314c  addic 3, 1, 112
  0143150  bl 0x503e00
  0143154  nop
  0143158  lis 4, 144
  014315c  lwz 3, 8(31)
  0143160  lwz 5, 848(28)
  0143164  li 29, 0
  0143168  addc 3, 31, 3
  014316c  ori 6, 29, 0
  0143170  clrldi 3, 3, 32
  0143174  lwz 4, 11932(4)
  0143178  li 7, 5
  014317c  lwz 8, 1196(4)
  0143180  subc 5, 5, 8
  0143184  lwzx 8, 3, 6
  0143188  addic 7, 7, -1
  014318c  addc 8, 8, 5
  0143190  cmpwi 7, 0
  0143194  stwx 8, 3, 6
  0143198  addic 6, 6, 36
  014319c  bf 2, 0x143184
  01431a0  lis 5, 1
  01431a4  lwz 3, 852(28)
  01431a8  lis 7, 1
  01431ac  lwz 4, 1196(4)
  01431b0  ori 5, 5, 57641
  01431b4  ori 7, 7, 771
  01431b8  subc 4, 3, 4
  01431bc  lis 6, 0
  01431c0  stw 5, 812(28)
  01431c4  lis 8, -32768
  01431c8  stw 7, 816(28)
  01431cc  ori 6, 6, 43775
  01431d0  stw 4, 808(28)
  01431d4  lis 5, 518
  01431d8  lis 4, 512
  01431dc  stw 8, 820(28)
  01431e0  ori 7, 4, 512
  01431e4  lis 9, 16
  01431e8  ori 5, 5, 8192
  01431ec  lwz 4, 548(28)
  01431f0  stw 6, 824(28)
  01431f4  lis 8, 151
  01431f8  ori 6, 9, 512
  01431fc  li 9, 1
  0143200  stw 5, 828(28)
  0143204  stw 7, 832(28)
  0143208  stw 6, 836(28)
  014320c  lwz 5, -25488(8)
  0143210  stw 9, 36(28)
  0143214  cmpw 4, 5
  0143218  bf 2, 0x14322c
  014321c  lwz 4, 12(28)
  0143220  bl 0xe27bc
  0143224  nop
  0143228  b 0x143298
  014322c  lis 5, 151
  0143230  extsw 6, 4
  0143234  addic 5, 5, -13792
  0143238  lbzx 5, 5, 6
  014323c  cmpwi 5, 0
  0143240  bt 2, 0x143264
  0143244  lis 5, 151
  0143248  slwi 4, 4, 15
  014324c  addic 5, 5, -13772
  0143250  addc 4, 5, 4
  0143254  clrldi 4, 4, 32
  0143258  bl 0xe27bc
  014325c  nop
  0143260  b 0x143298
  0143264  li 3, 176
  0143268  lis 5, 0
  014326c  addc 3, 1, 3
  0143270  ori 4, 29, 0
  0143274  clrldi 27, 3, 32
  0143278  ori 5, 5, 32768
  014327c  ori 3, 27, 0
  0143280  bl 0x5d0140
  0143284  nop
  0143288  lwz 3, 852(28)
  014328c  ori 4, 27, 0
  0143290  bl 0xe27bc
  0143294  nop
  0143298  lwz 3, 52(30)
  014329c  rlwinm 3, 3, 0, 24, 24
  01432a0  cmpwi 3, 0
  01432a4  bf 2, 0x1433c0
  01432a8  lwz 7, 8(31)
  01432ac  addic 3, 28, 600
  01432b0  addic 5, 28, 4
  01432b4  addc 7, 31, 7
  01432b8  addic 6, 28, 8
  01432bc  clrldi 7, 7, 32
  01432c0  addic 4, 28, 12
  01432c4  addic 9, 28, 16
  01432c8  addic 8, 28, 24
  01432cc  addic 10, 28, 28
  01432d0  lwz 11, 0(7)
  01432d4  lwz 12, 4(7)
  01432d8  lwz 31, 8(7)
  01432dc  lwz 30, 12(7)
  01432e0  stw 11, 0(3)
  01432e4  stw 12, 600(5)
  01432e8  stw 31, 600(6)
  01432ec  addic 3, 28, 20
  01432f0  stw 30, 600(4)
  01432f4  addic 31, 28, 32
  01432f8  lwz 11, 16(7)
  01432fc  lwz 12, 20(7)
  0143300  lwz 30, 24(7)
  0143304  lwz 27, 28(7)
  0143308  stw 11, 600(9)
  014330c  stw 12, 600(3)
  0143310  addic 11, 7, 36
  0143314  stw 30, 600(8)
  0143318  stw 27, 600(10)
  014331c  addic 12, 28, 636
  0143320  lwz 30, 32(7)
  0143324  addic 7, 7, 72
  0143328  stw 30, 600(31)
  014332c  lwz 30, 0(11)
  0143330  lwz 27, 4(11)
  0143334  lwz 26, 8(11)
  0143338  lwz 25, 12(11)
  014333c  stw 30, 0(12)
  0143340  stw 27, 636(5)
  0143344  stw 26, 636(6)
  0143348  stw 25, 636(4)
  014334c  lwz 12, 16(11)
  0143350  lwz 30, 20(11)
  0143354  addic 25, 28, 672
  0143358  lwz 27, 24(11)
  014335c  lwz 26, 28(11)
  0143360  stw 12, 636(9)
  0143364  stw 30, 636(3)
  0143368  stw 27, 636(8)
  014336c  stw 26, 636(10)
  0143370  lwz 11, 32(11)
  0143374  stw 11, 636(31)
  0143378  lwz 11, 0(7)
  014337c  lwz 12, 4(7)
  0143380  lwz 30, 8(7)
  0143384  lwz 27, 12(7)
  0143388  stw 11, 0(25)
  014338c  stw 12, 672(5)
  0143390  stw 30, 672(6)
  0143394  stw 27, 672(4)
  0143398  lwz 4, 16(7)
  014339c  lwz 5, 20(7)
  01433a0  lwz 6, 24(7)
  01433a4  lwz 11, 28(7)
  01433a8  stw 4, 672(9)
  01433ac  stw 5, 672(3)
  01433b0  stw 6, 672(8)
  01433b4  stw 11, 672(10)
  01433b8  lwz 3, 32(7)
  01433bc  stw 3, 672(31)
  01433c0  lwz 3, 548(28)
  01433c4  ori 4, 29, 0
  01433c8  stw 3, 552(28)
  01433cc  extsw 3, 3
  01433d0  bl 0xea958
  01433d4  nop
  01433d8  lis 3, 150
  01433dc  addic 3, 3, 14024
  01433e0  lhz 3, 8(3)
  01433e4  cmpwi 3, 0
  01433e8  bf 2, 0x14342c
  01433ec  lwz 4, 784(28)
  01433f0  cmpwi 4, -1
  01433f4  bt 2, 0x14342c
  01433f8  slwi 4, 4, 2
  01433fc  lis 7, 165
  0143400  extsw 4, 4
  0143404  li 8, -1
  0143408  addc 6, 28, 4
  014340c  addic 7, 7, 11184
  0143410  addic 5, 28, 764
  0143414  li 9, 0
  0143418  lwz 6, 764(6)
  014341c  stw 8, 784(28)
  0143420  xori 6, 6, 4096
  0143424  stb 9, 203(7)
  0143428  stwx 6, 5, 4
  014342c  cmpwi 3, 0
  0143430  bf 2, 0x143558
  0143434  bl 0xe2190
  0143438  nop
  014343c  ori 31, 3, 0
  0143440  cmpwi 31, -1
  0143444  bt 2, 0x143558
  0143448  bl 0xe22f4
  014344c  nop
  0143450  ori 30, 3, 0
  0143454  cmpwi 30, -1
  0143458  bt 2, 0x143558
  014345c  lis 5, 151
  0143460  lwz 6, 560(28)
  0143464  li 3, 0
  0143468  ori 4, 3, 0
  014346c  lwz 5, -25488(5)
  0143470  addc 5, 5, 6
  0143474  cmpwi 5, 0
  0143478  bt 2, 0x143480
  014347c  li 3, 256
  0143480  cmpw 3, 30
  0143484  bf 2, 0x1434c4
  0143488  sldi 3, 31, 2
  014348c  ori 7, 4, 0
  0143490  extsw 3, 3
  0143494  ori 5, 4, 0
  0143498  addc 29, 28, 3
  014349c  lwz 3, 556(28)
  01434a0  lwz 6, 564(28)
  01434a4  extsw 4, 3
  01434a8  extsw 6, 6
  01434ac  lwz 3, 744(29)
  01434b0  bl 0x165800
  01434b4  nop
  01434b8  lwz 3, 564(28)
  01434bc  stw 3, 788(29)
  01434c0  b 0x143540
  01434c4  rlwinm 3, 30, 0, 23, 23
  01434c8  cmpwi 3, 0
  01434cc  bt 2, 0x1434ec
  01434d0  lis 3, 271
  01434d4  xori 4, 30, 256
  01434d8  addic 3, 3, -26888
  01434dc  sldi 4, 4, 3
  01434e0  addc 29, 3, 4
  01434e4  clrldi 29, 29, 32
  01434e8  b 0x143500
  01434ec  lis 3, 271
  01434f0  sldi 4, 30, 3
  01434f4  addic 3, 3, -27040
  01434f8  addc 29, 3, 4
  01434fc  clrldi 29, 29, 32
  0143500  sldi 3, 31, 2
  0143504  lis 4, 101
  0143508  extsw 3, 3
  014350c  addic 4, 4, 13740
  0143510  addc 27, 28, 3
  0143514  lwz 3, 744(27)
  0143518  bl 0x5034c4
  014351c  nop
  0143520  lis 3, 165
  0143524  li 4, 1
  0143528  addic 3, 3, 11184
  014352c  stb 4, 203(3)
  0143530  lwz 3, 4(29)
  0143534  slwi 3, 3, 11
  0143538  srawi 3, 3, 4
  014353c  stw 3, 788(27)
  0143540  sldi 3, 31, 2
  0143544  stw 31, 784(28)
  0143548  ori 4, 30, 4096
  014354c  extsw 3, 3
  0143550  addc 3, 28, 3
  0143554  stw 4, 764(3)
  0143558  li 3, 0
  014355c  ld 11, 0(1)
  0143560  ld 0, 16(11)
  0143564  mtlr 0
  0143568  ld 25, -56(11)
  014356c  ld 26, -48(11)
  0143570  ld 27, -40(11)
  0143574  ld 28, -32(11)
  0143578  ld 29, -24(11)
  014357c  ld 30, -16(11)
  0143580  ld 31, -8(11)
  0143584  mr 1, 11
  0143588  blr

Missions_OnEnter:   # 0x14358c, 0xc0 bytes
  014358c  stdu 1, -128(1)
  0143590  mflr 0
  0143594  std 0, 144(1)
  0143598  std 30, 112(1)
  014359c  std 31, 120(1)
  01435a0  ori 30, 3, 0
  01435a4  bl 0xea5b0
  01435a8  nop
  01435ac  lis 31, 144
  01435b0  li 4, 0
  01435b4  li 6, 1
  01435b8  lwz 3, 11976(31)
  01435bc  addic 5, 3, 256
  01435c0  bl 0xea7a8
  01435c4  nop
  01435c8  lis 4, 162
  01435cc  stw 3, 124(30)
  01435d0  addic 4, 4, 1216
  01435d4  addic 3, 30, 48
  01435d8  lwz 4, 548(4)
  01435dc  slwi 4, 4, 2
  01435e0  addc 3, 3, 4
  01435e4  clrldi 3, 3, 32
  01435e8  lwz 4, 0(3)
  01435ec  cmpwi 4, -1
  01435f0  bt 2, 0x143630
  01435f4  lwz 3, 0(3)
  01435f8  lis 4, 115
  01435fc  lwz 6, 11976(31)
  0143600  lis 5, 115
  0143604  slwi 7, 3, 2
  0143608  slwi 3, 3, 2
  014360c  extsw 7, 7
  0143610  extsw 3, 3
  0143614  addic 4, 4, -20752
  0143618  addc 7, 6, 7
  014361c  addic 5, 5, -21144
  0143620  lwzx 3, 6, 3
  0143624  stw 3, 52(4)
  0143628  lwz 3, 256(7)
  014362c  stw 3, 88(5)
  0143630  li 3, 0
  0143634  ld 0, 144(1)
  0143638  mtlr 0
  014363c  ld 30, 112(1)
  0143640  ld 31, 120(1)
  0143644  addi 1, 1, 128
  0143648  blr

Missions_Update:   # 0x14364c, 0x330 bytes
  014364c  stdu 1, -176(1)
  0143650  mflr 0
  0143654  std 0, 192(1)
  0143658  std 31, 168(1)
  014365c  std 29, 152(1)
  0143660  lis 31, 165
  0143664  lis 29, 162
  0143668  std 26, 128(1)
  014366c  addic 31, 31, 11184
  0143670  addic 29, 29, 1216
  0143674  std 30, 160(1)
  0143678  ori 26, 3, 0
  014367c  ori 30, 3, 0
  0143680  std 27, 136(1)
  0143684  lwz 4, 4(31)
  0143688  lwz 27, 548(29)
  014368c  cmpwi 1, 27, 20
  0143690  lwz 4, 64(4)
  0143694  subc 3, 4, 3
  0143698  std 28, 144(1)
  014369c  std 25, 120(1)
  01436a0  std 24, 112(1)
  01436a4  cmpwi 3, 0
  01436a8  bt 2, 0x1436d0
  01436ac  bf 4, 0x1436c8
  01436b0  addic 3, 26, 48
  01436b4  slwi 4, 27, 2
  01436b8  li 5, -1
  01436bc  addc 3, 3, 4
  01436c0  clrldi 3, 3, 32
  01436c4  stw 5, 0(3)
  01436c8  li 3, 0
  01436cc  b 0x14394c
  01436d0  lis 28, 150
  01436d4  li 4, 3328
  01436d8  addic 28, 28, 19008
  01436dc  lwz 3, 196(28)
  01436e0  and 4, 3, 4
  01436e4  cmpwi 4, 0
  01436e8  bt 2, 0x143700
  01436ec  lwz 4, 288(31)
  01436f0  cmpwi 4, 0
  01436f4  bf 2, 0x143700
  01436f8  li 3, 1
  01436fc  b 0x14394c
  0143700  rlwinm 3, 3, 0, 28, 28
  0143704  cmpwi 3, 0
  0143708  bt 2, 0x14375c
  014370c  lwz 3, 548(29)
  0143710  addic 3, 3, 1
  0143714  extsw 3, 3
  0143718  cmpwi 3, 20
  014371c  bf 0, 0x14375c
  0143720  lis 4, 151
  0143724  addic 4, 4, -13812
  0143728  lbzx 4, 4, 3
  014372c  cmpwi 4, 0
  0143730  bf 2, 0x143744
  0143734  lis 4, 151
  0143738  lwz 4, -25488(4)
  014373c  cmpw 4, 3
  0143740  bf 2, 0x14374c
  0143744  stw 3, 548(29)
  0143748  b 0x14375c
  014374c  addic 3, 3, 1
  0143750  extsw 3, 3
  0143754  cmpwi 3, 20
  0143758  bt 0, 0x143720
  014375c  lwz 3, 196(28)
  0143760  rlwinm 3, 3, 0, 29, 29
  0143764  cmpwi 3, 0
  0143768  bt 2, 0x1437bc
  014376c  lwz 3, 548(29)
  0143770  addic 3, 3, -1
  0143774  extsw 3, 3
  0143778  cmpwi 3, 0
  014377c  bt 0, 0x1437bc
  0143780  lis 4, 151
  0143784  addic 4, 4, -13812
  0143788  lbzx 4, 4, 3
  014378c  cmpwi 4, 0
  0143790  bf 2, 0x1437a4
  0143794  lis 4, 151
  0143798  lwz 4, -25488(4)
  014379c  cmpw 4, 3
  01437a0  bf 2, 0x1437ac
  01437a4  stw 3, 548(29)
  01437a8  b 0x1437bc
  01437ac  addic 3, 3, -1
  01437b0  extsw 3, 3
  01437b4  cmpwi 3, 0
  01437b8  bf 0, 0x143780
  01437bc  lwz 3, 548(29)
  01437c0  cmpw 3, 27
  01437c4  bt 2, 0x1437e4
  01437c8  li 3, 1
  01437cc  li 4, 17
  01437d0  lwz 5, 20(30)
  01437d4  bl 0x15d12c
  01437d8  nop
  01437dc  bl 0xea5b0
  01437e0  nop
  01437e4  lwz 3, 124(26)
  01437e8  cmpwi 3, 0
  01437ec  bt 2, 0x143900
  01437f0  lwz 4, 548(29)
  01437f4  lwz 25, 196(28)
  01437f8  addic 24, 26, 48
  01437fc  slwi 4, 4, 2
  0143800  rlwinm 5, 25, 0, 19, 19
  0143804  addc 4, 24, 4
  0143808  cmpwi 5, 0
  014380c  clrldi 5, 4, 32
  0143810  lwz 4, 0(5)
  0143814  bt 2, 0x143830
  0143818  addc 6, 4, 3
  014381c  addic 6, 6, -1
  0143820  divw 7, 6, 3
  0143824  mullw 3, 7, 3
  0143828  subc 3, 6, 3
  014382c  stw 3, 0(5)
  0143830  rlwinm 3, 25, 0, 17, 17
  0143834  cmpwi 3, 0
  0143838  bt 2, 0x143858
  014383c  lwz 3, 0(5)
  0143840  lwz 6, 124(26)
  0143844  addic 3, 3, 1
  0143848  divw 7, 3, 6
  014384c  mullw 6, 7, 6
  0143850  subc 3, 3, 6
  0143854  stw 3, 0(5)
  0143858  lwz 3, 0(5)
  014385c  cmpw 3, 4
  0143860  bt 2, 0x143878
  0143864  li 3, 1
  0143868  lwz 5, 20(30)
  014386c  li 4, 17
  0143870  bl 0x15d12c
  0143874  nop
  0143878  li 3, 20480
  014387c  and 3, 25, 3
  0143880  cmpwi 3, 0
  0143884  bf 2, 0x143894
  0143888  lwz 3, 548(29)
  014388c  cmpw 3, 27
  0143890  bt 2, 0x143900
  0143894  lis 30, 144
  0143898  li 4, 0
  014389c  li 6, 1
  01438a0  lwz 3, 11976(30)
  01438a4  addic 5, 3, 256
  01438a8  bl 0xea7a8
  01438ac  nop
  01438b0  stw 3, 124(26)
  01438b4  lwz 3, 548(29)
  01438b8  lis 5, 115
  01438bc  lwz 4, 11976(30)
  01438c0  lis 6, 115
  01438c4  slwi 3, 3, 2
  01438c8  addic 5, 5, -20752
  01438cc  addc 3, 24, 3
  01438d0  addic 6, 6, -21144
  01438d4  clrldi 3, 3, 32
  01438d8  lwz 3, 0(3)
  01438dc  slwi 7, 3, 2
  01438e0  slwi 3, 3, 2
  01438e4  extsw 7, 7
  01438e8  extsw 3, 3
  01438ec  addc 3, 4, 3
  01438f0  lwzx 4, 4, 7
  01438f4  stw 4, 52(5)
  01438f8  lwz 3, 256(3)
  01438fc  stw 3, 88(6)
  0143900  lwz 3, 196(28)
  0143904  rlwinm 3, 3, 0, 27, 27
  0143908  cmpwi 3, 0
  014390c  bt 2, 0x143948
  0143910  lwz 3, 4(31)
  0143914  lwz 4, 56(3)
  0143918  cmpwi 4, 0
  014391c  bt 2, 0x143934
  0143920  ori 4, 3, 0
  0143924  li 3, 0
  0143928  lwz 4, 56(4)
  014392c  stw 4, 8(31)
  0143930  b 0x14394c
  0143934  lwz 3, 288(31)
  0143938  cmpwi 3, 0
  014393c  bf 2, 0x143948
  0143940  li 3, -1
  0143944  b 0x14394c
  0143948  li 3, 0
  014394c  ld 0, 192(1)
  0143950  mtlr 0
  0143954  ld 24, 112(1)
  0143958  ld 25, 120(1)
  014395c  ld 26, 128(1)
  0143960  ld 27, 136(1)
  0143964  ld 28, 144(1)
  0143968  ld 29, 152(1)
  014396c  ld 30, 160(1)
  0143970  ld 31, 168(1)
  0143974  addi 1, 1, 176
  0143978  blr

SlotConfig_Update:   # 0x143980, 0x2b0 bytes
  0143980  stdu 1, -160(1)
  0143984  mflr 0
  0143988  std 0, 176(1)
  014398c  std 29, 136(1)
  0143990  lis 4, 165
  0143994  lis 29, 150
  0143998  addic 4, 4, 11184
  014399c  std 30, 144(1)
  01439a0  addic 29, 29, 19008
  01439a4  ori 30, 3, 0
  01439a8  lwz 4, 4(4)
  01439ac  lwz 5, 64(4)
  01439b0  lwz 4, 196(29)
  01439b4  rlwinm 8, 4, 0, 28, 28
  01439b8  lwz 6, 60(5)
  01439bc  cmpwi 8, 0
  01439c0  lwz 5, 72(5)
  01439c4  sldi 7, 6, 3
  01439c8  addic 5, 5, 6
  01439cc  addc 7, 6, 7
  01439d0  addc 6, 6, 7
  01439d4  lwz 7, 80(30)
  01439d8  addc 5, 5, 6
  01439dc  clrldi 6, 5, 32
  01439e0  std 31, 152(1)
  01439e4  ori 5, 7, 0
  01439e8  lhz 31, 0(6)
  01439ec  extsh 31, 31
  01439f0  bt 2, 0x143a0c
  01439f4  addic 6, 5, 1
  01439f8  srawi 7, 6, 3
  01439fc  addze 7, 7
  0143a00  sldi 7, 7, 3
  0143a04  subc 6, 6, 7
  0143a08  stw 6, 80(30)
  0143a0c  rlwinm 4, 4, 0, 29, 29
  0143a10  cmpwi 4, 0
  0143a14  bt 2, 0x143a34
  0143a18  lwz 4, 80(30)
  0143a1c  addic 4, 4, 7
  0143a20  srawi 6, 4, 3
  0143a24  addze 6, 6
  0143a28  sldi 6, 6, 3
  0143a2c  subc 4, 4, 6
  0143a30  stw 4, 80(30)
  0143a34  lwz 4, 80(30)
  0143a38  cmpw 4, 5
  0143a3c  bt 2, 0x143a58
  0143a40  ori 5, 3, 0
  0143a44  li 3, 1
  0143a48  li 4, 17
  0143a4c  lwz 5, 20(5)
  0143a50  bl 0x15d12c
  0143a54  nop
  0143a58  cmpwi 31, 0
  0143a5c  bt 2, 0x143c10
  0143a60  lis 3, 151
  0143a64  addic 3, 3, -16064
  0143a68  lbzx 3, 3, 31
  0143a6c  cmpwi 3, 0
  0143a70  bt 2, 0x143c10
  0143a74  lis 3, 144
  0143a78  lwz 4, 196(29)
  0143a7c  lwz 3, 11988(3)
  0143a80  and 3, 4, 3
  0143a84  cmpwi 3, 0
  0143a88  bt 2, 0x143c10
  0143a8c  lis 3, 161
  0143a90  lis 4, 0
  0143a94  addic 3, 3, -276
  0143a98  ori 5, 4, 65535
  0143a9c  lhz 4, 168(3)
  0143aa0  cmpw 4, 5
  0143aa4  bf 0, 0x143ab0
  0143aa8  addic 4, 4, 1
  0143aac  sth 4, 168(3)
  0143ab0  lis 4, 161
  0143ab4  lis 5, 114
  0143ab8  lwz 4, -2344(4)
  0143abc  extsw 4, 4
  0143ac0  std 4, 112(1)
  0143ac4  lis 4, 20
  0143ac8  addi 4, 4, 14716
  0143acc  lfs 1, 0(4)
  0143ad0  lfs 2, -3056(5)
  0143ad4  lfd 3, 112(1)
  0143ad8  lis 4, 6990
  0143adc  fcfid 3, 3
  0143ae0  ori 4, 4, 33205
  0143ae4  lhz 5, 170(3)
  0143ae8  frsp 3, 3
  0143aec  fadds 3, 3, 1
  0143af0  fmuls 2, 2, 3
  0143af4  fctiwz 2, 2
  0143af8  stfd 2, 112(1)
  0143afc  lwz 6, 116(1)
  0143b00  mulhw 4, 4, 6
  0143b04  srawi 4, 4, 6
  0143b08  srwi 6, 4, 31
  0143b0c  addc 4, 4, 6
  0143b10  cmpw 4, 5
  0143b14  bf 1, 0x143b6c
  0143b18  lis 4, 161
  0143b1c  lis 5, 6990
  0143b20  lwz 4, -2344(4)
  0143b24  extsw 4, 4
  0143b28  std 4, 112(1)
  0143b2c  lis 4, 114
  0143b30  lfs 2, -3056(4)
  0143b34  lfd 3, 112(1)
  0143b38  ori 4, 5, 33205
  0143b3c  fcfid 3, 3
  0143b40  frsp 3, 3
  0143b44  fadds 1, 3, 1
  0143b48  fmuls 1, 2, 1
  0143b4c  fctiwz 1, 1
  0143b50  stfd 1, 112(1)
  0143b54  lwz 5, 116(1)
  0143b58  mulhw 4, 4, 5
  0143b5c  srawi 4, 4, 6
  0143b60  srwi 5, 4, 31
  0143b64  addc 4, 4, 5
  0143b68  sth 4, 170(3)
  0143b6c  lis 5, 151
  0143b70  lwz 8, 172(3)
  0143b74  li 6, 1
  0143b78  lis 7, -32768
  0143b7c  li 4, 0
  0143b80  lwz 5, -25488(5)
  0143b84  slw 5, 6, 5
  0143b88  or 5, 8, 5
  0143b8c  or 5, 5, 7
  0143b90  stw 5, 172(3)
  0143b94  ori 3, 4, 0
  0143b98  cmpwi 4, 8
  0143b9c  bf 0, 0x143bc4
  0143ba0  addic 5, 30, 48
  0143ba4  slwi 6, 4, 2
  0143ba8  addc 5, 5, 6
  0143bac  clrldi 5, 5, 32
  0143bb0  lwz 5, 0(5)
  0143bb4  cmpw 5, 31
  0143bb8  bt 2, 0x143bc4
  0143bbc  addic 4, 4, 1
  0143bc0  b 0x143b98
  0143bc4  cmpwi 4, 8
  0143bc8  bf 0, 0x143be0
  0143bcc  addic 5, 30, 48
  0143bd0  slwi 4, 4, 2
  0143bd4  addc 4, 5, 4
  0143bd8  clrldi 4, 4, 32
  0143bdc  stw 3, 0(4)
  0143be0  lwz 4, 80(30)
  0143be4  addic 3, 30, 48
  0143be8  addic 5, 4, 1
  0143bec  slwi 4, 4, 2
  0143bf0  srawi 6, 5, 3
  0143bf4  addze 6, 6
  0143bf8  addc 3, 3, 4
  0143bfc  sldi 6, 6, 3
  0143c00  clrldi 3, 3, 32
  0143c04  subc 4, 5, 6
  0143c08  stw 4, 80(30)
  0143c0c  stw 31, 0(3)
  0143c10  li 3, 0
  0143c14  ld 0, 176(1)
  0143c18  mtlr 0
  0143c1c  ld 29, 136(1)
  0143c20  ld 30, 144(1)
  0143c24  ld 31, 152(1)
  0143c28  addi 1, 1, 160
  0143c2c  blr

SlotConfig_OnEnter:   # 0x143c30, 0x8c bytes
  0143c30  ori 4, 3, 0
  0143c34  li 3, 0
  0143c38  li 5, 8
  0143c3c  ori 6, 3, 0
  0143c40  lis 8, 151
  0143c44  addic 7, 4, 48
  0143c48  addic 8, 8, -15908
  0143c4c  addc 9, 7, 6
  0143c50  addic 5, 5, -1
  0143c54  clrldi 9, 9, 32
  0143c58  cmpwi 5, 0
  0143c5c  lwzx 8, 8, 6
  0143c60  addic 6, 6, 4
  0143c64  stw 8, 0(9)
  0143c68  bf 2, 0x143c40
  0143c6c  stw 3, 80(4)
  0143c70  lwz 5, 80(4)
  0143c74  slwi 6, 5, 2
  0143c78  addc 6, 7, 6
  0143c7c  clrldi 6, 6, 32
  0143c80  lwz 6, 0(6)
  0143c84  cmpwi 6, 0
  0143c88  bt 2, 0x143ca0
  0143c8c  cmpwi 5, 8
  0143c90  bf 0, 0x143ca0
  0143c94  addic 5, 5, 1
  0143c98  stw 5, 80(4)
  0143c9c  b 0x143c70
  0143ca0  lwz 5, 80(4)
  0143ca4  srawi 6, 5, 3
  0143ca8  addze 6, 6
  0143cac  sldi 6, 6, 3
  0143cb0  subc 5, 5, 6
  0143cb4  stw 5, 80(4)
  0143cb8  blr

SlotConfig_OnExit:   # 0x143cbc, 0x40 bytes
  0143cbc  li 5, 0
  0143cc0  ori 6, 3, 0
  0143cc4  ori 3, 5, 0
  0143cc8  ori 4, 3, 0
  0143ccc  addic 7, 6, 48
  0143cd0  lis 8, 151
  0143cd4  addc 7, 7, 4
  0143cd8  addic 8, 8, -15908
  0143cdc  clrldi 7, 7, 32
  0143ce0  addic 5, 5, 1
  0143ce4  cmpwi 5, 8
  0143ce8  lwz 7, 0(7)
  0143cec  stwx 7, 8, 4
  0143cf0  addic 4, 4, 4
  0143cf4  bt 0, 0x143ccc
  0143cf8  blr

SelectPackItemList_OnEnter:   # 0x143cfc, 0x38 bytes
  0143cfc  lis 4, 151
  0143d00  addic 4, 4, -16064
  0143d04  lbz 4, 2(4)
  0143d08  cmpwi 4, 0
  0143d0c  bt 2, 0x143d1c
  0143d10  lis 4, 115
  0143d14  addic 4, 4, -16892
  0143d18  b 0x143d24
  0143d1c  lis 4, 115
  0143d20  addic 4, 4, -16840
  0143d24  ori 5, 3, 0
  0143d28  li 3, 0
  0143d2c  stw 4, 52(5)
  0143d30  blr

MapPage_OnEnter:   # 0x143d34, 0x18 bytes
  0143d34  lis 3, 162
  0143d38  li 4, -1
  0143d3c  addic 5, 3, 1216
  0143d40  li 3, 0
  0143d44  stw 4, 552(5)
  0143d48  blr

MenuText_OnEnterResetBuffers:   # 0x143d4c, 0x28 bytes
  0143d4c  stdu 1, -112(1)
  0143d50  mflr 0
  0143d54  std 0, 128(1)
  0143d58  li 3, 1
  0143d5c  bl 0x13af68
  0143d60  li 3, 0
  0143d64  ld 0, 128(1)
  0143d68  mtlr 0
  0143d6c  addi 1, 1, 112
  0143d70  blr

SoundOptions_OnExit:   # 0x143d74, 0x38 bytes
  0143d74  lis 3, 114
  0143d78  lis 4, 26214
  0143d7c  ori 4, 4, 26215
  0143d80  lwz 3, -1204(3)
  0143d84  slwi 3, 3, 3
  0143d88  mulhw 3, 4, 3
  0143d8c  lis 4, 150
  0143d90  srawi 3, 3, 2
  0143d94  addic 4, 4, 14176
  0143d98  srwi 5, 3, 31
  0143d9c  addc 5, 3, 5
  0143da0  li 3, 0
  0143da4  stw 5, 80(4)
  0143da8  blr

SoundOptions_Update:   # 0x143dac, 0x2d8 bytes
  0143dac  stdu 1, -128(1)
  0143db0  mflr 0
  0143db4  std 0, 144(1)
  0143db8  std 30, 112(1)
  0143dbc  lis 30, 150
  0143dc0  li 5, 3328
  0143dc4  std 31, 120(1)
  0143dc8  addic 30, 30, 19008
  0143dcc  ori 31, 3, 0
  0143dd0  lwz 4, 196(30)
  0143dd4  and 5, 4, 5
  0143dd8  cmpwi 5, 0
  0143ddc  bt 2, 0x143dfc
  0143de0  lis 5, 165
  0143de4  addic 5, 5, 11184
  0143de8  lwz 5, 288(5)
  0143dec  cmpwi 5, 0
  0143df0  bf 2, 0x143dfc
  0143df4  li 3, 1
  0143df8  b 0x14406c
  0143dfc  rlwinm 4, 4, 0, 27, 27
  0143e00  cmpwi 4, 0
  0143e04  bt 2, 0x143e44
  0143e08  lis 4, 165
  0143e0c  addic 4, 4, 11184
  0143e10  lwz 5, 4(4)
  0143e14  lwz 6, 56(5)
  0143e18  cmpwi 6, 0
  0143e1c  bt 2, 0x143e30
  0143e20  lwz 5, 56(5)
  0143e24  li 3, 0
  0143e28  stw 5, 8(4)
  0143e2c  b 0x14406c
  0143e30  lwz 4, 288(4)
  0143e34  cmpwi 4, 0
  0143e38  bf 2, 0x143e44
  0143e3c  li 3, -1
  0143e40  b 0x14406c
  0143e44  lwz 4, 196(30)
  0143e48  lwz 5, 64(31)
  0143e4c  rlwinm 6, 4, 0, 19, 19
  0143e50  cmpwi 6, 0
  0143e54  bt 2, 0x143e70
  0143e58  addic 6, 5, 1
  0143e5c  srawi 7, 6, 1
  0143e60  addze 7, 7
  0143e64  sldi 7, 7, 1
  0143e68  subc 6, 6, 7
  0143e6c  stw 6, 64(31)
  0143e70  rlwinm 4, 4, 0, 17, 17
  0143e74  cmpwi 4, 0
  0143e78  bt 2, 0x143e98
  0143e7c  lwz 4, 64(31)
  0143e80  addic 4, 4, 1
  0143e84  srawi 6, 4, 1
  0143e88  addze 6, 6
  0143e8c  sldi 6, 6, 1
  0143e90  subc 4, 4, 6
  0143e94  stw 4, 64(31)
  0143e98  lwz 4, 64(31)
  0143e9c  cmpw 4, 5
  0143ea0  bf 2, 0x143ebc
  0143ea4  lis 4, 165
  0143ea8  addic 4, 4, 11184
  0143eac  lwz 4, 4(4)
  0143eb0  lwz 4, 128(4)
  0143eb4  cmpwi 4, 0
  0143eb8  bt 2, 0x143f08
  0143ebc  ori 5, 3, 0
  0143ec0  li 3, 1
  0143ec4  li 4, 17
  0143ec8  lwz 5, 20(5)
  0143ecc  bl 0x15d12c
  0143ed0  nop
  0143ed4  lwz 3, 48(31)
  0143ed8  rlwinm 3, 3, 0, 26, 26
  0143edc  cmpwi 3, 0
  0143ee0  bt 2, 0x143f08
  0143ee4  lis 3, 115
  0143ee8  lwz 5, 64(31)
  0143eec  lis 4, 162
  0143ef0  slwi 5, 5, 2
  0143ef4  addic 4, 4, 1216
  0143ef8  lwz 3, -26256(3)
  0143efc  extsw 5, 5
  0143f00  lwzx 3, 3, 5
  0143f04  stw 3, 548(4)
  0143f08  lis 4, 114
  0143f0c  lis 3, 114
  0143f10  lwz 6, -1208(4)
  0143f14  lwz 5, 192(30)
  0143f18  rlwinm 8, 5, 0, 18, 18
  0143f1c  lwz 5, -1204(3)
  0143f20  cmpwi 8, 0
  0143f24  bt 2, 0x143f80
  0143f28  lwz 7, 64(31)
  0143f2c  cmpwi 7, 0
  0143f30  bf 2, 0x143f54
  0143f34  lwz 8, -1204(3)
  0143f38  li 7, 1024
  0143f3c  addic 8, 8, 3
  0143f40  cmpwi 8, 1024
  0143f44  bf 0, 0x143f50
  0143f48  lwz 7, -1204(3)
  0143f4c  addic 7, 7, 3
  0143f50  stw 7, -1204(3)
  0143f54  lwz 7, 64(31)
  0143f58  cmpwi 7, 1
  0143f5c  bf 2, 0x143f80
  0143f60  lwz 8, -1208(4)
  0143f64  li 7, 1024
  0143f68  addic 8, 8, 3
  0143f6c  cmpwi 8, 1024
  0143f70  bf 0, 0x143f7c
  0143f74  lwz 7, -1208(4)
  0143f78  addic 7, 7, 3
  0143f7c  stw 7, -1208(4)
  0143f80  lwz 7, 192(30)
  0143f84  rlwinm 7, 7, 0, 16, 16
  0143f88  cmpwi 7, 0
  0143f8c  bt 2, 0x143fe0
  0143f90  lwz 7, 64(31)
  0143f94  cmpwi 7, 0
  0143f98  bf 2, 0x143fb8
  0143f9c  lwz 7, -1204(3)
  0143fa0  li 8, 0
  0143fa4  addic 7, 7, -3
  0143fa8  cmpwi 7, 0
  0143fac  bf 1, 0x143fb4
  0143fb0  ori 8, 7, 0
  0143fb4  stw 8, -1204(3)
  0143fb8  lwz 7, 64(31)
  0143fbc  cmpwi 7, 1
  0143fc0  bf 2, 0x143fe0
  0143fc4  lwz 7, -1208(4)
  0143fc8  li 8, 0
  0143fcc  addic 7, 7, -3
  0143fd0  cmpwi 7, 0
  0143fd4  bf 1, 0x143fdc
  0143fd8  ori 8, 7, 0
  0143fdc  stw 8, -1208(4)
  0143fe0  ori 7, 6, 0
  0143fe4  lwz 6, -1208(4)
  0143fe8  cmpw 6, 7
  0143fec  bf 2, 0x143ffc
  0143ff0  lwz 7, -1204(3)
  0143ff4  cmpw 7, 5
  0143ff8  bt 2, 0x144068
  0143ffc  lis 5, 26214
  0144000  lwz 3, -1204(3)
  0144004  lis 10, 150
  0144008  ori 5, 5, 26215
  014400c  lwz 4, -1208(4)
  0144010  slwi 7, 3, 3
  0144014  mulhw 7, 5, 7
  0144018  sldi 8, 3, 3
  014401c  srawi 7, 7, 2
  0144020  subc 8, 8, 3
  0144024  mulhw 9, 5, 8
  0144028  mulhw 5, 5, 8
  014402c  srwi 8, 7, 31
  0144030  srawi 9, 9, 2
  0144034  addc 7, 7, 8
  0144038  addic 8, 10, 14176
  014403c  srawi 5, 5, 2
  0144040  srwi 11, 9, 31
  0144044  srwi 10, 5, 31
  0144048  addc 9, 9, 11
  014404c  stw 7, 72(8)
  0144050  addc 5, 5, 10
  0144054  stw 6, 76(8)
  0144058  stw 4, 80(8)
  014405c  stw 9, 84(8)
  0144060  stw 5, 88(8)
  0144064  stw 3, 92(8)
  0144068  li 3, 0
  014406c  ld 0, 144(1)
  0144070  mtlr 0
  0144074  ld 30, 112(1)
  0144078  ld 31, 120(1)
  014407c  addi 1, 1, 128
  0144080  blr

DrawSoundOptionsFrame:   # 0x144084, 0x350 bytes
  0144084  stdu 1, -240(1)
  0144088  mflr 0
  014408c  std 0, 256(1)
  0144090  std 31, 232(1)
  0144094  ori 31, 3, 0
  0144098  std 27, 200(1)
  014409c  lis 3, 21845
  01440a0  ori 27, 31, 0
  01440a4  std 29, 216(1)
  01440a8  ori 3, 3, 21846
  01440ac  std 22, 160(1)
  01440b0  li 29, 0
  01440b4  lwz 4, 36(31)
  01440b8  std 28, 208(1)
  01440bc  mulhw 22, 3, 4
  01440c0  lwz 28, 32(31)
  01440c4  srwi 3, 22, 31
  01440c8  srawi 28, 28, 1
  01440cc  addc 22, 22, 3
  01440d0  std 23, 168(1)
  01440d4  ori 3, 29, 0
  01440d8  std 30, 224(1)
  01440dc  std 26, 192(1)
  01440e0  std 25, 184(1)
  01440e4  std 24, 176(1)
  01440e8  std 21, 152(1)
  01440ec  std 20, 144(1)
  01440f0  std 19, 136(1)
  01440f4  addic 23, 28, 16
  01440f8  bl 0x6d704
  01440fc  nop
  0144100  lwz 3, 64(27)
  0144104  lis 4, -32513
  0144108  addic 24, 28, 8
  014410c  cmpwi 3, 0
  0144110  addic 25, 22, -8
  0144114  ori 3, 4, 43144
  0144118  extsw 24, 24
  014411c  extsw 25, 25
  0144120  ori 30, 3, 0
  0144124  bf 2, 0x144130
  0144128  lis 3, -32736
  014412c  ori 3, 3, 65535
  0144130  ori 21, 27, 0
  0144134  clrldi 27, 3, 32
  0144138  li 3, 21010
  014413c  ori 20, 30, 0
  0144140  bl 0x7b740
  0144144  nop
  0144148  ori 6, 3, 0
  014414c  ori 4, 25, 0
  0144150  li 7, -1
  0144154  ori 3, 24, 0
  0144158  ori 5, 27, 0
  014415c  bl 0x70130
  0144160  nop
  0144164  lis 4, -32663
  0144168  lwz 3, 32(31)
  014416c  addic 26, 28, 23
  0144170  ori 5, 4, 26985
  0144174  addic 6, 3, -63
  0144178  addic 7, 22, 8
  014417c  clrldi 27, 5, 32
  0144180  extsw 26, 26
  0144184  extsw 5, 6
  0144188  ori 4, 25, 0
  014418c  extsw 6, 7
  0144190  ori 3, 26, 0
  0144194  ori 8, 29, 0
  0144198  ori 7, 27, 0
  014419c  bl 0xca72c
  01441a0  nop
  01441a4  addic 4, 22, -6
  01441a8  lis 5, -32712
  01441ac  lwz 3, 32(31)
  01441b0  addic 30, 28, 25
  01441b4  extsw 25, 4
  01441b8  ori 4, 5, 14392
  01441bc  extsw 30, 30
  01441c0  addic 6, 22, 6
  01441c4  addic 5, 3, -65
  01441c8  clrldi 28, 4, 32
  01441cc  ori 3, 30, 0
  01441d0  extsw 6, 6
  01441d4  extsw 5, 5
  01441d8  ori 4, 25, 0
  01441dc  ori 8, 29, 0
  01441e0  ori 7, 28, 0
  01441e4  bl 0xca72c
  01441e8  nop
  01441ec  lis 3, 114
  01441f0  lwz 4, 32(31)
  01441f4  subc 4, 4, 23
  01441f8  lwz 3, -1204(3)
  01441fc  addic 4, 4, -74
  0144200  mullw 3, 4, 3
  0144204  lis 4, 0
  0144208  srawi 5, 3, 10
  014420c  ori 3, 4, 59806
  0144210  addze 19, 5
  0144214  li 4, 8
  0144218  bl 0xca3e4
  014421c  nop
  0144220  li 11, 43
  0144224  addc 4, 23, 19
  0144228  li 12, 128
  014422c  addic 6, 4, 8
  0144230  addic 7, 22, 5
  0144234  std 11, 112(1)
  0144238  extsw 6, 6
  014423c  ori 4, 30, 0
  0144240  extsw 7, 7
  0144244  std 12, 120(1)
  0144248  ori 5, 25, 0
  014424c  li 9, 19
  0144250  ori 8, 29, 0
  0144254  li 10, 53
  0144258  bl 0xd8364
  014425c  nop
  0144260  sldi 22, 22, 1
  0144264  lwz 4, 64(21)
  0144268  ori 3, 20, 0
  014426c  addic 25, 22, -8
  0144270  cmpwi 4, 1
  0144274  extsw 25, 25
  0144278  bf 2, 0x144284
  014427c  lis 3, -32736
  0144280  ori 3, 3, 65535
  0144284  clrldi 21, 3, 32
  0144288  li 3, 21011
  014428c  bl 0x7b740
  0144290  nop
  0144294  ori 6, 3, 0
  0144298  ori 5, 21, 0
  014429c  li 7, -1
  01442a0  ori 3, 24, 0
  01442a4  ori 4, 25, 0
  01442a8  bl 0x70130
  01442ac  nop
  01442b0  lwz 5, 32(31)
  01442b4  addic 6, 22, 8
  01442b8  ori 3, 26, 0
  01442bc  addic 5, 5, -63
  01442c0  ori 4, 25, 0
  01442c4  ori 7, 27, 0
  01442c8  ori 8, 29, 0
  01442cc  extsw 5, 5
  01442d0  extsw 6, 6
  01442d4  bl 0xca72c
  01442d8  nop
  01442dc  addic 3, 22, -6
  01442e0  lwz 4, 32(31)
  01442e4  addic 6, 22, 6
  01442e8  extsw 27, 3
  01442ec  addic 5, 4, -65
  01442f0  ori 4, 27, 0
  01442f4  extsw 6, 6
  01442f8  ori 7, 28, 0
  01442fc  extsw 5, 5
  0144300  ori 3, 30, 0
  0144304  ori 8, 29, 0
  0144308  bl 0xca72c
  014430c  nop
  0144310  lis 4, 114
  0144314  lwz 3, 32(31)
  0144318  subc 3, 3, 23
  014431c  addic 3, 3, -74
  0144320  lwz 4, -1208(4)
  0144324  mullw 4, 3, 4
  0144328  lis 3, 0
  014432c  srawi 5, 4, 10
  0144330  ori 3, 3, 59806
  0144334  addze 31, 5
  0144338  li 4, 9
  014433c  bl 0xca3e4
  0144340  nop
  0144344  li 11, 43
  0144348  addc 4, 23, 31
  014434c  li 12, 128
  0144350  addic 7, 22, 5
  0144354  addic 6, 4, 8
  0144358  std 11, 112(1)
  014435c  ori 4, 30, 0
  0144360  extsw 6, 6
  0144364  std 12, 120(1)
  0144368  ori 5, 27, 0
  014436c  extsw 7, 7
  0144370  ori 8, 29, 0
  0144374  li 9, 19
  0144378  li 10, 53
  014437c  bl 0xd8364
  0144380  nop
  0144384  bl 0x6d708
  0144388  nop
  014438c  li 3, 2
  0144390  ld 0, 256(1)
  0144394  mtlr 0
  0144398  ld 19, 136(1)
  014439c  ld 20, 144(1)
  01443a0  ld 21, 152(1)
  01443a4  ld 22, 160(1)
  01443a8  ld 23, 168(1)
  01443ac  ld 24, 176(1)
  01443b0  ld 25, 184(1)
  01443b4  ld 26, 192(1)
  01443b8  ld 27, 200(1)
  01443bc  ld 28, 208(1)
  01443c0  ld 29, 216(1)
  01443c4  ld 30, 224(1)
  01443c8  ld 31, 232(1)
  01443cc  addi 1, 1, 240
  01443d0  blr

SkillPoints_OnEnter:   # 0x1443d4, 0xa4 bytes
  01443d4  stdu 1, -64(1)
  01443d8  lis 5, 114
  01443dc  li 6, 0
  01443e0  ori 3, 6, 0
  01443e4  lwz 4, -1188(5)
  01443e8  std 31, 56(1)
  01443ec  cmpw 4, 3
  01443f0  bf 1, 0x144448
  01443f4  ori 4, 6, 0
  01443f8  lwz 9, -1188(5)
  01443fc  lis 7, 161
  0144400  subc 11, 9, 6
  0144404  addic 7, 7, 1195
  0144408  extsw 11, 11
  014440c  lis 8, 115
  0144410  lis 10, 114
  0144414  addic 8, 8, -19664
  0144418  addic 10, 10, 2254
  014441c  lbzx 7, 7, 11
  0144420  addc 12, 8, 4
  0144424  li 31, 1
  0144428  slwi 7, 7, 2
  014442c  addic 6, 6, 1
  0144430  sth 31, 2(12)
  0144434  cmpw 6, 9
  0144438  lhzx 7, 10, 7
  014443c  sthx 7, 8, 4
  0144440  addic 4, 4, 12
  0144444  bt 0, 0x1443f8
  0144448  lwz 5, -1188(5)
  014444c  lis 4, 115
  0144450  addc 6, 5, 5
  0144454  addic 4, 4, -19664
  0144458  addc 5, 5, 6
  014445c  ori 7, 3, 0
  0144460  sldi 5, 5, 2
  0144464  extsw 5, 5
  0144468  sthx 7, 4, 5
  014446c  ld 31, 56(1)
  0144470  addi 1, 1, 64
  0144474  blr

SkillPoints_OnExit:   # 0x144478, 0x8 bytes
  0144478  li 3, 0
  014447c  blr

MusicWidget_OnEnter:   # 0x144480, 0xc8 bytes
  0144480  stdu 1, -128(1)
  0144484  mflr 0
  0144488  std 0, 144(1)
  014448c  std 31, 120(1)
  0144490  ori 31, 3, 0
  0144494  std 30, 112(1)
  0144498  li 3, 1
  014449c  ori 30, 31, 0
  01444a0  bl 0x13af68
  01444a4  li 3, 0
  01444a8  ori 5, 3, 0
  01444ac  stw 3, 84(30)
  01444b0  ori 4, 5, 0
  01444b4  stw 3, 56(30)
  01444b8  lis 6, 165
  01444bc  addic 6, 6, 12440
  01444c0  lwzx 7, 6, 4
  01444c4  cmpwi 7, 0
  01444c8  bt 2, 0x1444f4
  01444cc  lis 7, 165
  01444d0  lwzx 8, 6, 4
  01444d4  addic 7, 7, 11184
  01444d8  lwz 7, 264(7)
  01444dc  cmplw 8, 7
  01444e0  bf 0, 0x1444f4
  01444e4  addc 6, 6, 4
  01444e8  lwz 7, 4(6)
  01444ec  ori 7, 7, 2
  01444f0  stw 7, 4(6)
  01444f4  addic 5, 5, 1
  01444f8  addic 4, 4, 8
  01444fc  cmpwi 5, 5
  0144500  bt 0, 0x1444b8
  0144504  lis 4, 150
  0144508  stw 3, 80(30)
  014450c  addic 4, 4, 14024
  0144510  lhz 4, 8(4)
  0144514  cmpwi 4, 0
  0144518  bf 2, 0x144524
  014451c  li 4, 1
  0144520  stw 4, 80(30)
  0144524  lwz 4, 16(31)
  0144528  ori 4, 4, 4
  014452c  stw 4, 16(31)
  0144530  ld 0, 144(1)
  0144534  mtlr 0
  0144538  ld 30, 112(1)
  014453c  ld 31, 120(1)
  0144540  addi 1, 1, 128
  0144544  blr

MusicWidget_OnExit:   # 0x144548, 0x50 bytes
  0144548  stdu 1, -112(1)
  014454c  mflr 0
  0144550  std 0, 128(1)
  0144554  lis 4, 150
  0144558  addic 4, 4, 14024
  014455c  lhz 4, 8(4)
  0144560  cmpwi 4, 0
  0144564  bt 2, 0x14457c
  0144568  lwz 3, 80(3)
  014456c  cmpwi 3, 1
  0144570  bf 2, 0x14457c
  0144574  bl 0x11d9e0
  0144578  nop
  014457c  li 3, 1
  0144580  bl 0x13af68
  0144584  li 3, 0
  0144588  ld 0, 128(1)
  014458c  mtlr 0
  0144590  addi 1, 1, 112
  0144594  blr

MusicWidget_Update:   # 0x144598, 0x8c bytes
  0144598  ori 5, 3, 0
  014459c  lwz 4, 80(5)
  01445a0  cmpwi 4, 1
  01445a4  cmpwi 1, 4, 3
  01445a8  cmpwi 6, 4, 2
  01445ac  cmpwi 7, 4, 0
  01445b0  bt 1, 0x1445c4
  01445b4  cmpwi 4, -1
  01445b8  bf 1, 0x14461c
  01445bc  bf 29, 0x1445d0
  01445c0  b 0x1445f0
  01445c4  bf 25, 0x14461c
  01445c8  bf 5, 0x14461c
  01445cc  b 0x14461c
  01445d0  lis 3, 150
  01445d4  addic 3, 3, 14024
  01445d8  lhz 3, 8(3)
  01445dc  cmpwi 3, 0
  01445e0  bf 2, 0x14461c
  01445e4  li 3, 1
  01445e8  stw 3, 80(5)
  01445ec  b 0x14461c
  01445f0  lis 4, 150
  01445f4  addic 4, 4, 14024
  01445f8  lhz 4, 8(4)
  01445fc  cmpwi 4, 0
  0144600  bf 2, 0x14461c
  0144604  li 4, 2
  0144608  li 6, 0
  014460c  stw 4, 80(5)
  0144610  lwz 4, 16(3)
  0144614  rlwimi 4, 6, 0, 29, 29
  0144618  stw 4, 16(3)
  014461c  li 3, 0
  0144620  blr

DrawSkillPointsFrame:   # 0x144638, 0x874 bytes
  0144638  stdu 1, -288(1)
  014463c  mflr 0
  0144640  std 0, 304(1)
  0144644  stfd 30, 272(1)
  0144648  stfd 31, 280(1)
  014464c  std 18, 160(1)
  0144650  lis 4, 165
  0144654  std 30, 256(1)
  0144658  lis 18, 346
  014465c  addic 4, 4, 11184
  0144660  std 31, 264(1)
  0144664  ori 30, 3, 0
  0144668  ori 31, 3, 0
  014466c  lwz 4, 4(4)
  0144670  lbz 5, -15535(18)
  0144674  std 29, 248(1)
  0144678  cmpwi 5, 0
  014467c  lwz 29, 64(4)
  0144680  std 28, 240(1)
  0144684  std 27, 232(1)
  0144688  std 26, 224(1)
  014468c  std 25, 216(1)
  0144690  std 24, 208(1)
  0144694  std 23, 200(1)
  0144698  std 22, 192(1)
  014469c  std 21, 184(1)
  01446a0  std 20, 176(1)
  01446a4  std 19, 168(1)
  01446a8  std 17, 152(1)
  01446ac  std 16, 144(1)
  01446b0  subc 29, 29, 3
  01446b4  bf 2, 0x1446c8
  01446b8  lis 28, 115
  01446bc  li 24, 12
  01446c0  addic 28, 28, 26800
  01446c4  b 0x1446d4
  01446c8  lis 28, 115
  01446cc  li 24, 14
  01446d0  addic 28, 28, 29584
  01446d4  lwz 3, 48(30)
  01446d8  li 25, 1
  01446dc  rlwinm 4, 3, 0, 29, 29
  01446e0  ori 19, 25, 0
  01446e4  cmpwi 4, 0
  01446e8  bt 2, 0x144718
  01446ec  lbz 4, -15535(18)
  01446f0  cmpwi 4, 0
  01446f4  bf 2, 0x14470c
  01446f8  lis 28, 115
  01446fc  li 24, 14
  0144700  addic 28, 28, 28656
  0144704  li 25, 3
  0144708  b 0x144718
  014470c  lis 28, 115
  0144710  li 24, 14
  0144714  addic 28, 28, 29584
  0144718  rlwinm 3, 3, 0, 28, 28
  014471c  cmpwi 3, 0
  0144720  bt 2, 0x144754
  0144724  lbz 3, -15535(18)
  0144728  cmpwi 3, 0
  014472c  bf 2, 0x144744
  0144730  lis 28, 115
  0144734  li 24, 10
  0144738  addic 28, 28, 27728
  014473c  li 25, 2
  0144740  b 0x144754
  0144744  lis 28, 115
  0144748  li 24, 14
  014474c  addic 28, 28, 29584
  0144750  ori 25, 19, 0
  0144754  lis 3, 115
  0144758  li 27, 0
  014475c  addic 3, 3, -17852
  0144760  ori 20, 27, 0
  0144764  cmpw 3, 30
  0144768  bf 2, 0x144770
  014476c  ori 27, 19, 0
  0144770  ori 3, 20, 0
  0144774  li 26, 3
  0144778  ori 4, 19, 0
  014477c  ori 5, 20, 0
  0144780  ori 6, 19, 0
  0144784  ori 7, 20, 0
  0144788  bl 0x502ea8
  014478c  nop
  0144790  ori 4, 3, 0
  0144794  ori 3, 26, 0
  0144798  bl 0x174f80
  014479c  nop
  01447a0  ori 3, 19, 0
  01447a4  li 26, 22
  01447a8  li 4, 5
  01447ac  ori 6, 20, 0
  01447b0  ori 8, 20, 0
  01447b4  li 5, 4
  01447b8  ori 10, 19, 0
  01447bc  ori 7, 20, 0
  01447c0  ori 9, 20, 0
  01447c4  bl 0x502f7c
  01447c8  nop
  01447cc  ori 4, 3, 0
  01447d0  ori 3, 26, 0
  01447d4  bl 0x174f80
  01447d8  nop
  01447dc  ori 3, 20, 0
  01447e0  bl 0x6d704
  01447e4  nop
  01447e8  lwz 3, 52(30)
  01447ec  ori 26, 20, 0
  01447f0  lhz 3, 0(3)
  01447f4  cmpwi 3, 0
  01447f8  bt 2, 0x14481c
  01447fc  ori 3, 20, 0
  0144800  addic 3, 3, 12
  0144804  lwz 5, 52(30)
  0144808  addic 26, 26, 1
  014480c  extsw 4, 3
  0144810  lhzx 4, 5, 4
  0144814  cmpwi 4, 0
  0144818  bf 2, 0x144800
  014481c  lwz 3, 48(30)
  0144820  rlwinm 4, 3, 0, 27, 27
  0144824  cmpwi 4, 0
  0144828  bt 2, 0x144834
  014482c  addic 26, 24, 3
  0144830  b 0x144840
  0144834  addic 26, 26, 1
  0144838  lwz 4, 36(31)
  014483c  divw 26, 4, 26
  0144840  li 5, 4
  0144844  sth 20, 132(1)
  0144848  sth 20, 134(1)
  014484c  rlwinm 8, 3, 0, 22, 22
  0144850  lwz 7, 36(31)
  0144854  srawi 4, 24, 1
  0144858  cmpwi 8, 0
  014485c  sth 5, 112(1)
  0144860  sth 20, 116(1)
  0144864  addze 4, 4
  0144868  sth 20, 120(1)
  014486c  addic 5, 7, -4
  0144870  lwz 3, 32(31)
  0144874  subc 4, 26, 4
  0144878  sth 20, 124(1)
  014487c  addic 6, 24, 2
  0144880  sth 20, 126(1)
  0144884  addic 7, 3, -2
  0144888  sth 20, 130(1)
  014488c  cmpwi 1, 27, 0
  0144890  lwz 8, 68(30)
  0144894  sth 5, 114(1)
  0144898  subc 4, 4, 8
  014489c  sth 7, 118(1)
  01448a0  sth 6, 128(1)
  01448a4  sth 4, 122(1)
  01448a8  bt 2, 0x1448b4
  01448ac  li 4, 16
  01448b0  sth 4, 130(1)
  01448b4  bt 6, 0x1448dc
  01448b8  lis 4, 151
  01448bc  lwz 5, -25484(4)
  01448c0  cmpwi 5, 1
  01448c4  bf 1, 0x1448dc
  01448c8  lwz 4, -25484(4)
  01448cc  cmpwi 4, 5
  01448d0  bt 1, 0x1448dc
  01448d4  addic 3, 3, -20
  01448d8  sth 3, 118(1)
  01448dc  ori 3, 25, 0
  01448e0  bl 0x685c4
  01448e4  nop
  01448e8  lwz 4, 52(30)
  01448ec  ori 25, 3, 0
  01448f0  ori 24, 20, 0
  01448f4  lhz 3, 0(4)
  01448f8  cmpwi 3, 0
  01448fc  bt 2, 0x144e1c
  0144900  cmpwi 29, 0
  0144904  ori 23, 20, 0
  0144908  bf 2, 0x14491c
  014490c  lwz 3, 64(30)
  0144910  cmpw 3, 24
  0144914  bf 2, 0x14491c
  0144918  ori 23, 19, 0
  014491c  addc 3, 24, 24
  0144920  lis 22, -32513
  0144924  addc 16, 24, 3
  0144928  lwz 3, 52(30)
  014492c  cmpwi 1, 23, 0
  0144930  sldi 16, 16, 2
  0144934  lwz 4, 48(30)
  0144938  addic 3, 3, 2
  014493c  rlwinm 4, 4, 0, 30, 30
  0144940  addc 3, 3, 16
  0144944  cmpwi 4, 0
  0144948  clrldi 3, 3, 32
  014494c  ori 22, 22, 43144
  0144950  lhz 3, 0(3)
  0144954  cmpwi 6, 3, 0
  0144958  bf 2, 0x14498c
  014495c  bt 6, 0x144978
  0144960  lis 22, -32768
  0144964  ori 22, 22, 24672
  0144968  bt 26, 0x144974
  014496c  lis 22, -32736
  0144970  ori 22, 22, 65535
  0144974  b 0x14498c
  0144978  lis 3, -32720
  014497c  ori 3, 3, 12336
  0144980  bt 26, 0x144988
  0144984  ori 3, 22, 0
  0144988  ori 22, 3, 0
  014498c  lwz 3, 48(30)
  0144990  cmpwi 1, 23, 0
  0144994  rlwinm 3, 3, 0, 15, 15
  0144998  cmpwi 3, 0
  014499c  crorc 2, 6, 2
  01449a0  bt 2, 0x1449c0
  01449a4  lhz 3, 122(1)
  01449a8  extsh 3, 3
  01449ac  cmpwi 3, 4
  01449b0  bf 0, 0x1449c0
  01449b4  lwz 3, 68(30)
  01449b8  addic 3, 3, -4
  01449bc  stw 3, 68(30)
  01449c0  extsw 17, 16
  01449c4  lwz 3, 52(30)
  01449c8  lhzx 3, 3, 17
  01449cc  extsh 3, 3
  01449d0  bl 0x7b740
  01449d4  nop
  01449d8  li 5, 2560
  01449dc  lwz 4, 48(30)
  01449e0  ori 21, 3, 0
  01449e4  ori 3, 20, 0
  01449e8  and 5, 4, 5
  01449ec  cmpwi 5, 0
  01449f0  bt 2, 0x1449f8
  01449f4  li 3, 28
  01449f8  addic 3, 3, 4
  01449fc  rlwinm 4, 4, 0, 21, 21
  0144a00  cmpwi 4, 0
  0144a04  sth 3, 120(1)
  0144a08  bt 2, 0x144a1c
  0144a0c  lwz 3, 32(31)
  0144a10  sth 19, 130(1)
  0144a14  srawi 3, 3, 1
  0144a18  sth 3, 120(1)
  0144a1c  lis 3, 20
  0144a20  lbz 4, -15535(18)
  0144a24  addi 3, 3, 17956
  0144a28  cmpwi 4, 0
  0144a2c  lfs 31, 0(3)
  0144a30  fmr 30, 31
  0144a34  bt 2, 0x144a64
  0144a38  lwz 3, 52(30)
  0144a3c  lhzx 4, 3, 17
  0144a40  cmpwi 4, 20167
  0144a44  bt 2, 0x144a54
  0144a48  lhzx 3, 3, 17
  0144a4c  cmpwi 3, 20157
  0144a50  bf 2, 0x144a64
  0144a54  lis 3, 20
  0144a58  addi 3, 3, 17956
  0144a5c  lfs 31, 4(3)
  0144a60  b 0x144a94
  0144a64  cmpwi 27, 0
  0144a68  bt 2, 0x144a94
  0144a6c  lis 3, 151
  0144a70  lwz 4, -25484(3)
  0144a74  cmpwi 4, 1
  0144a78  bf 1, 0x144a94
  0144a7c  lwz 3, -25484(3)
  0144a80  cmpwi 3, 5
  0144a84  bt 1, 0x144a94
  0144a88  lis 3, 20
  0144a8c  addi 3, 3, 17956
  0144a90  lfs 31, 8(3)
  0144a94  lwz 3, 52(30)
  0144a98  lhzx 4, 3, 17
  0144a9c  cmpwi 4, 20163
  0144aa0  bt 2, 0x144ab0
  0144aa4  lhzx 3, 3, 17
  0144aa8  cmpwi 3, 20456
  0144aac  bf 2, 0x144acc
  0144ab0  lis 3, 151
  0144ab4  lwz 3, -25484(3)
  0144ab8  cmpwi 3, 2
  0144abc  bf 2, 0x144acc
  0144ac0  lis 3, 20
  0144ac4  addi 3, 3, 17956
  0144ac8  lfs 31, 8(3)
  0144acc  lwz 3, 52(30)
  0144ad0  lhzx 3, 3, 17
  0144ad4  cmpwi 3, 20456
  0144ad8  bf 2, 0x144af8
  0144adc  lis 3, 151
  0144ae0  lwz 3, -25484(3)
  0144ae4  cmpwi 3, 2
  0144ae8  bf 2, 0x144af8
  0144aec  lis 3, 20
  0144af0  addi 3, 3, 17956
  0144af4  lfs 31, 12(3)
  0144af8  cmpwi 23, 0
  0144afc  bt 2, 0x144b08
  0144b00  bl 0x6ccb4
  0144b04  nop
  0144b08  lbz 3, -15535(18)
  0144b0c  cmpwi 3, 0
  0144b10  bf 2, 0x144b3c
  0144b14  addic 3, 1, 112
  0144b18  fmr 1, 31
  0144b1c  ori 8, 28, 0
  0144b20  li 6, -1
  0144b24  ori 4, 22, 0
  0144b28  ori 5, 21, 0
  0144b2c  ori 7, 25, 0
  0144b30  bl 0x69db8
  0144b34  nop
  0144b38  b 0x144b60
  0144b3c  addic 3, 1, 112
  0144b40  fmr 1, 31
  0144b44  ori 8, 28, 0
  0144b48  li 6, -1
  0144b4c  ori 4, 22, 0
  0144b50  ori 5, 21, 0
  0144b54  ori 7, 25, 0
  0144b58  bl 0x690e0
  0144b5c  nop
  0144b60  cmpwi 23, 0
  0144b64  bt 2, 0x144b70
  0144b68  bl 0x6c5dc
  0144b6c  nop
  0144b70  lwz 3, 48(30)
  0144b74  rlwinm 3, 3, 0, 22, 22
  0144b78  cmpwi 3, 0
  0144b7c  bt 2, 0x144c1c
  0144b80  lis 4, -32513
  0144b84  lis 3, 151
  0144b88  lhz 21, 122(1)
  0144b8c  ori 7, 4, 43144
  0144b90  addic 4, 3, -16244
  0144b94  extsh 21, 21
  0144b98  li 3, 10
  0144b9c  addic 6, 21, 14
  0144ba0  li 5, 20
  0144ba4  lbzx 17, 4, 24
  0144ba8  ori 8, 20, 0
  0144bac  addic 4, 21, 4
  0144bb0  clrldi 7, 7, 32
  0144bb4  bl 0xca72c
  0144bb8  nop
  0144bbc  lis 6, 115
  0144bc0  li 3, 11
  0144bc4  ori 8, 20, 0
  0144bc8  addic 4, 21, 5
  0144bcc  li 5, 19
  0144bd0  lwz 7, -26560(6)
  0144bd4  addic 6, 21, 13
  0144bd8  extsw 7, 7
  0144bdc  bl 0xca72c
  0144be0  nop
  0144be4  cmpwi 17, 0
  0144be8  bt 2, 0x144c1c
  0144bec  lis 3, 0
  0144bf0  ori 4, 19, 0
  0144bf4  ori 3, 3, 59806
  0144bf8  bl 0xca3e4
  0144bfc  nop
  0144c00  li 6, 30
  0144c04  li 4, 2
  0144c08  addic 5, 21, -9
  0144c0c  li 8, 128
  0144c10  ori 7, 6, 0
  0144c14  bl 0xcc0f0
  0144c18  nop
  0144c1c  lwz 3, 48(30)
  0144c20  rlwinm 3, 3, 0, 20, 20
  0144c24  cmpwi 3, 0
  0144c28  bt 2, 0x144cdc
  0144c2c  lwz 5, 52(30)
  0144c30  lis 3, 151
  0144c34  lhz 21, 122(1)
  0144c38  lis 4, -32513
  0144c3c  addic 5, 5, 4
  0144c40  extsh 21, 21
  0144c44  addc 5, 5, 16
  0144c48  lwz 6, -25484(3)
  0144c4c  clrldi 5, 5, 32
  0144c50  ori 7, 4, 43144
  0144c54  addic 4, 21, 4
  0144c58  ori 8, 20, 0
  0144c5c  li 3, 10
  0144c60  lwz 9, 0(5)
  0144c64  li 5, 20
  0144c68  subc 17, 6, 9
  0144c6c  addic 6, 21, 14
  0144c70  clrldi 7, 7, 32
  0144c74  bl 0xca72c
  0144c78  nop
  0144c7c  lis 6, 115
  0144c80  li 3, 11
  0144c84  ori 8, 20, 0
  0144c88  addic 4, 21, 5
  0144c8c  li 5, 19
  0144c90  lwz 7, -26560(6)
  0144c94  addic 6, 21, 13
  0144c98  extsw 7, 7
  0144c9c  bl 0xca72c
  0144ca0  nop
  0144ca4  cmpwi 17, 0
  0144ca8  bf 2, 0x144cdc
  0144cac  lis 3, 0
  0144cb0  ori 4, 19, 0
  0144cb4  ori 3, 3, 59806
  0144cb8  bl 0xca3e4
  0144cbc  nop
  0144cc0  li 6, 30
  0144cc4  li 4, 2
  0144cc8  addic 5, 21, -9
  0144ccc  li 8, 128
  0144cd0  ori 7, 6, 0
  0144cd4  bl 0xcc0f0
  0144cd8  nop
  0144cdc  lwz 3, 52(30)
  0144ce0  lhz 4, 122(1)
  0144ce4  addic 3, 3, 8
  0144ce8  lhz 5, 126(1)
  0144cec  addc 16, 3, 16
  0144cf0  addc 4, 4, 5
  0144cf4  clrldi 16, 16, 32
  0144cf8  sth 4, 122(1)
  0144cfc  lhz 3, 0(16)
  0144d00  cmpwi 3, 0
  0144d04  bt 2, 0x144d88
  0144d08  lhz 3, 0(16)
  0144d0c  extsh 3, 3
  0144d10  bl 0x7b740
  0144d14  nop
  0144d18  li 5, 20
  0144d1c  lbz 4, -15535(18)
  0144d20  ori 16, 3, 0
  0144d24  cmpwi 4, 0
  0144d28  sth 5, 120(1)
  0144d2c  bf 2, 0x144d58
  0144d30  addic 3, 1, 112
  0144d34  li 6, -1
  0144d38  fmr 1, 30
  0144d3c  ori 4, 22, 0
  0144d40  ori 5, 16, 0
  0144d44  ori 7, 25, 0
  0144d48  ori 8, 28, 0
  0144d4c  bl 0x69db8
  0144d50  nop
  0144d54  b 0x144d7c
  0144d58  addic 3, 1, 112
  0144d5c  li 6, -1
  0144d60  fmr 1, 30
  0144d64  ori 4, 22, 0
  0144d68  ori 5, 16, 0
  0144d6c  ori 7, 25, 0
  0144d70  ori 8, 28, 0
  0144d74  bl 0x690e0
  0144d78  nop
  0144d7c  lhz 3, 122(1)
  0144d80  addc 3, 3, 26
  0144d84  sth 3, 122(1)
  0144d88  lhz 3, 122(1)
  0144d8c  lwz 4, 48(30)
  0144d90  cmpwi 1, 23, 0
  0144d94  addic 3, 3, 8
  0144d98  rlwinm 5, 4, 0, 15, 15
  0144d9c  cmpwi 5, 0
  0144da0  crorc 2, 6, 2
  0144da4  sth 3, 122(1)
  0144da8  bt 2, 0x144df4
  0144dac  lhz 6, 126(1)
  0144db0  extsh 3, 3
  0144db4  lhz 5, 114(1)
  0144db8  extsh 6, 6
  0144dbc  extsh 5, 5
  0144dc0  addc 3, 3, 6
  0144dc4  cmpw 3, 5
  0144dc8  bf 1, 0x144df4
  0144dcc  rlwinm 4, 4, 0, 16, 16
  0144dd0  cmpwi 4, 0
  0144dd4  bt 2, 0x144de8
  0144dd8  subc 3, 3, 5
  0144ddc  lwz 4, 68(30)
  0144de0  addc 3, 4, 3
  0144de4  b 0x144df0
  0144de8  lwz 3, 68(30)
  0144dec  addic 3, 3, 4
  0144df0  stw 3, 68(30)
  0144df4  addic 24, 24, 1
  0144df8  lwz 4, 52(30)
  0144dfc  extsw 24, 24
  0144e00  addc 3, 24, 24
  0144e04  addc 3, 24, 3
  0144e08  sldi 3, 3, 2
  0144e0c  extsw 3, 3
  0144e10  lhzx 3, 4, 3
  0144e14  cmpwi 3, 0
  0144e18  bf 2, 0x144900
  0144e1c  bl 0x6d708
  0144e20  nop
  0144e24  lwz 3, 48(30)
  0144e28  rlwinm 4, 3, 0, 16, 16
  0144e2c  cmpwi 4, 0
  0144e30  bt 2, 0x144e50
  0144e34  lis 4, 0
  0144e38  ori 5, 3, 0
  0144e3c  ori 4, 4, 32768
  0144e40  ori 3, 19, 0
  0144e44  xor 4, 5, 4
  0144e48  stw 4, 48(30)
  0144e4c  b 0x144e54
  0144e50  li 3, 2
  0144e54  ld 0, 304(1)
  0144e58  mtlr 0
  0144e5c  lfd 30, 272(1)
  0144e60  lfd 31, 280(1)
  0144e64  ld 16, 144(1)
  0144e68  ld 17, 152(1)
  0144e6c  ld 18, 160(1)
  0144e70  ld 19, 168(1)
  0144e74  ld 20, 176(1)
  0144e78  ld 21, 184(1)
  0144e7c  ld 22, 192(1)
  0144e80  ld 23, 200(1)
  0144e84  ld 24, 208(1)
  0144e88  ld 25, 216(1)
  0144e8c  ld 26, 224(1)
  0144e90  ld 27, 232(1)
  0144e94  ld 28, 240(1)
  0144e98  ld 29, 248(1)
  0144e9c  ld 30, 256(1)
  0144ea0  ld 31, 264(1)
  0144ea4  addi 1, 1, 288
  0144ea8  blr

MenuButton_Draw:   # 0x144ec0, 0x5cc bytes
  0144ec0  stdu 1, -288(1)
  0144ec4  mflr 0
  0144ec8  std 0, 304(1)
  0144ecc  stfd 26, 240(1)
  0144ed0  stfd 27, 248(1)
  0144ed4  stfd 28, 256(1)
  0144ed8  stfd 29, 264(1)
  0144edc  stfd 30, 272(1)
  0144ee0  stfd 31, 280(1)
  0144ee4  std 29, 216(1)
  0144ee8  std 26, 192(1)
  0144eec  lis 29, 165
  0144ef0  ori 26, 3, 0
  0144ef4  std 31, 232(1)
  0144ef8  addic 29, 29, 11184
  0144efc  std 27, 200(1)
  0144f00  std 24, 176(1)
  0144f04  ori 31, 26, 0
  0144f08  li 27, 0
  0144f0c  std 25, 184(1)
  0144f10  li 24, 1
  0144f14  std 23, 168(1)
  0144f18  lwz 25, 20(26)
  0144f1c  lwz 3, 4(29)
  0144f20  std 30, 224(1)
  0144f24  li 23, 3
  0144f28  lwz 30, 72(31)
  0144f2c  ori 4, 24, 0
  0144f30  li 7, 128
  0144f34  ori 5, 27, 0
  0144f38  lwz 25, 120(25)
  0144f3c  std 28, 208(1)
  0144f40  ori 6, 24, 0
  0144f44  lwz 28, 64(3)
  0144f48  ori 3, 27, 0
  0144f4c  std 22, 160(1)
  0144f50  std 21, 152(1)
  0144f54  std 20, 144(1)
  0144f58  std 19, 136(1)
  0144f5c  std 18, 128(1)
  0144f60  subc 28, 28, 26
  0144f64  bl 0x502ea8
  0144f68  nop
  0144f6c  ori 4, 3, 0
  0144f70  ori 3, 23, 0
  0144f74  bl 0x174f80
  0144f78  nop
  0144f7c  ori 3, 24, 0
  0144f80  li 23, 22
  0144f84  li 4, 5
  0144f88  ori 6, 27, 0
  0144f8c  ori 9, 27, 0
  0144f90  ori 10, 27, 0
  0144f94  ori 5, 27, 0
  0144f98  ori 7, 27, 0
  0144f9c  ori 8, 27, 0
  0144fa0  bl 0x502f98
  0144fa4  nop
  0144fa8  ori 4, 3, 0
  0144fac  ori 3, 23, 0
  0144fb0  bl 0x174f80
  0144fb4  nop
  0144fb8  ori 3, 27, 0
  0144fbc  bl 0x6d704
  0144fc0  nop
  0144fc4  lwz 3, 68(31)
  0144fc8  cmpwi 3, 1
  0144fcc  bf 1, 0x145034
  0144fd0  extsw 4, 3
  0144fd4  lis 5, 20
  0144fd8  addic 3, 3, -1
  0144fdc  std 4, 112(1)
  0144fe0  addi 4, 5, 20140
  0144fe4  lfs 31, 52(31)
  0144fe8  extsw 3, 3
  0144fec  lfs 1, 0(4)
  0144ff0  lis 4, 115
  0144ff4  lfs 2, 64(25)
  0144ff8  fmuls 1, 31, 1
  0144ffc  lfs 30, 2776(4)
  0145000  lfd 3, 112(1)
  0145004  std 3, 112(1)
  0145008  fcfid 3, 3
  014500c  fsubs 1, 2, 1
  0145010  frsp 2, 3
  0145014  lfd 3, 112(1)
  0145018  fmuls 2, 30, 2
  014501c  fcfid 3, 3
  0145020  fsubs 1, 1, 2
  0145024  frsp 2, 3
  0145028  fdivs 1, 1, 2
  014502c  fadds 30, 30, 1
  0145030  b 0x145058
  0145034  lis 3, 115
  0145038  lfs 1, 64(25)
  014503c  lis 4, 20
  0145040  addi 4, 4, 20140
  0145044  lfs 2, 2776(3)
  0145048  fsubs 31, 1, 2
  014504c  lfs 1, 4(4)
  0145050  lfs 30, 8(4)
  0145054  fmuls 31, 31, 1
  0145058  lwz 4, 48(31)
  014505c  lis 3, 115
  0145060  rlwinm 4, 4, 0, 30, 30
  0145064  cmpwi 4, 0
  0145068  bt 2, 0x145088
  014506c  lis 4, 20
  0145070  lfs 27, 56(31)
  0145074  addi 4, 4, 20140
  0145078  lfs 1, 12(4)
  014507c  lfs 29, 2780(3)
  0145080  fadds 29, 29, 1
  0145084  b 0x145114
  0145088  lwz 4, 64(31)
  014508c  cmpwi 4, 1
  0145090  bf 1, 0x1450f4
  0145094  lis 5, 20
  0145098  extsw 6, 4
  014509c  addi 5, 5, 20140
  01450a0  addic 4, 4, -1
  01450a4  extsw 4, 4
  01450a8  lfs 1, 0(5)
  01450ac  std 6, 112(1)
  01450b0  lfs 27, 56(31)
  01450b4  lfs 2, 68(25)
  01450b8  lfs 29, 2780(3)
  01450bc  fmuls 1, 27, 1
  01450c0  lfd 3, 112(1)
  01450c4  std 4, 112(1)
  01450c8  fcfid 3, 3
  01450cc  fsubs 1, 2, 1
  01450d0  frsp 2, 3
  01450d4  lfd 3, 112(1)
  01450d8  fmuls 2, 29, 2
  01450dc  fcfid 3, 3
  01450e0  fsubs 1, 1, 2
  01450e4  frsp 2, 3
  01450e8  fdivs 1, 1, 2
  01450ec  fadds 29, 29, 1
  01450f0  b 0x145114
  01450f4  lfs 1, 68(25)
  01450f8  lfs 2, 2780(3)
  01450fc  lis 4, 20
  0145100  fsubs 27, 1, 2
  0145104  addi 4, 4, 20140
  0145108  lfs 1, 4(4)
  014510c  lfs 29, 8(4)
  0145110  fmuls 27, 27, 1
  0145114  ori 4, 26, 0
  0145118  lwz 26, 32(4)
  014511c  lwz 4, 36(4)
  0145120  cmpw 26, 4
  0145124  bf 1, 0x14512c
  0145128  b 0x145130
  014512c  ori 26, 4, 0
  0145130  lfs 28, 64(25)
  0145134  lfs 1, 68(25)
  0145138  fcmpu 0, 28, 1
  014513c  cror 6, 0, 2
  0145140  bt 6, 0x145148
  0145144  b 0x14514c
  0145148  fmr 28, 1
  014514c  extsw 4, 26
  0145150  std 4, 112(1)
  0145154  lis 4, 115
  0145158  lfs 1, 2780(3)
  014515c  ori 24, 27, 0
  0145160  lfs 2, 2776(4)
  0145164  lfd 3, 112(1)
  0145168  fcfid 3, 3
  014516c  lwz 3, 64(31)
  0145170  cmpw 3, 24
  0145174  frsp 3, 3
  0145178  fdivs 28, 3, 28
  014517c  fmuls 2, 2, 28
  0145180  fmuls 1, 1, 28
  0145184  fctiwz 2, 2
  0145188  fctiwz 1, 1
  014518c  stfd 2, 112(1)
  0145190  lwz 26, 116(1)
  0145194  stfd 1, 112(1)
  0145198  lwz 25, 116(1)
  014519c  extsw 26, 26
  01451a0  extsw 25, 25
  01451a4  bf 1, 0x145420
  01451a8  ori 23, 27, 0
  01451ac  lwz 3, 68(31)
  01451b0  fmr 26, 31
  01451b4  cmpw 3, 23
  01451b8  bf 1, 0x14540c
  01451bc  fmuls 1, 26, 28
  01451c0  fmuls 2, 27, 28
  01451c4  cmpwi 28, 0
  01451c8  fctiwz 1, 1
  01451cc  fctiwz 2, 2
  01451d0  stfd 1, 112(1)
  01451d4  lwz 22, 116(1)
  01451d8  stfd 2, 112(1)
  01451dc  lwz 21, 116(1)
  01451e0  extsw 22, 22
  01451e4  extsw 21, 21
  01451e8  addc 20, 26, 22
  01451ec  addc 19, 25, 21
  01451f0  bf 2, 0x1452bc
  01451f4  lis 3, 26214
  01451f8  lwz 4, 72(31)
  01451fc  ori 3, 3, 26215
  0145200  subc 4, 30, 4
  0145204  mulhw 3, 3, 4
  0145208  lwz 4, 60(31)
  014520c  srawi 3, 3, 2
  0145210  srwi 5, 3, 31
  0145214  addc 3, 3, 5
  0145218  cmpw 4, 3
  014521c  bf 2, 0x1452bc
  0145220  lis 3, 346
  0145224  lwz 3, -15568(3)
  0145228  clrlwi 3, 3, 26
  014522c  addic 3, 3, -32
  0145230  bl 0x5c4988
  0145234  nop
  0145238  lis 4, 1
  014523c  addic 3, 3, 64
  0145240  ori 4, 4, 514
  0145244  mullw 3, 3, 4
  0145248  lis 5, -32768
  014524c  addic 4, 22, -3
  0145250  addic 6, 21, -3
  0145254  or 7, 3, 5
  0145258  extsw 3, 4
  014525c  addic 5, 20, 3
  0145260  extsw 4, 6
  0145264  li 18, 1
  0145268  addic 6, 19, 3
  014526c  extsw 5, 5
  0145270  clrldi 7, 7, 32
  0145274  ori 8, 18, 0
  0145278  extsw 6, 6
  014527c  bl 0xca72c
  0145280  nop
  0145284  lis 5, 115
  0145288  addic 6, 20, 2
  014528c  addic 3, 22, -2
  0145290  addic 4, 21, -2
  0145294  addic 9, 19, 2
  0145298  lwz 7, -26560(5)
  014529c  ori 8, 18, 0
  01452a0  extsw 5, 6
  01452a4  extsw 3, 3
  01452a8  extsw 4, 4
  01452ac  extsw 6, 9
  01452b0  extsw 7, 7
  01452b4  bl 0xca72c
  01452b8  nop
  01452bc  lhz 3, 4(30)
  01452c0  cmpwi 3, 0
  01452c4  bf 2, 0x1452e0
  01452c8  lis 4, 151
  01452cc  lhz 5, 6(30)
  01452d0  addic 4, 4, -16064
  01452d4  extsh 5, 5
  01452d8  lbzx 4, 4, 5
  01452dc  b 0x1452f4
  01452e0  lis 4, 151
  01452e4  lhz 5, 6(30)
  01452e8  addic 4, 4, -16400
  01452ec  extsh 5, 5
  01452f0  lbzx 4, 4, 5
  01452f4  cmpwi 4, 0
  01452f8  bt 2, 0x1453f0
  01452fc  cmpwi 3, 0
  0145300  ori 4, 27, 0
  0145304  bf 2, 0x1453bc
  0145308  lis 3, 114
  014530c  addic 5, 3, 4104
  0145310  lhz 3, 6(30)
  0145314  extsh 3, 3
  0145318  sldi 4, 3, 4
  014531c  subc 6, 3, 4
  0145320  sldi 6, 6, 2
  0145324  subc 6, 4, 6
  0145328  ori 4, 27, 0
  014532c  lwzx 5, 5, 6
  0145330  slwi 5, 5, 2
  0145334  extsw 5, 5
  0145338  addc 5, 29, 5
  014533c  lwz 5, 48(5)
  0145340  cmpw 5, 3
  0145344  bf 2, 0x14535c
  0145348  lwz 5, 48(31)
  014534c  rlwinm 5, 5, 0, 26, 26
  0145350  cmpwi 5, 0
  0145354  bf 2, 0x14535c
  0145358  li 4, 1
  014535c  cmpwi 4, 0
  0145360  bf 2, 0x14537c
  0145364  lis 5, 151
  0145368  addic 5, 5, -25432
  014536c  lbzx 3, 5, 3
  0145370  cmpwi 3, 0
  0145374  bt 2, 0x14537c
  0145378  li 4, 4
  014537c  lwz 3, 304(29)
  0145380  cmpwi 3, 0
  0145384  bt 2, 0x14539c
  0145388  lwz 3, 48(31)
  014538c  rlwinm 3, 3, 0, 28, 28
  0145390  cmpwi 3, 0
  0145394  bt 2, 0x14539c
  0145398  li 4, 2
  014539c  lwz 3, 308(29)
  01453a0  cmpwi 3, 0
  01453a4  bt 2, 0x1453bc
  01453a8  lwz 3, 48(31)
  01453ac  rlwinm 3, 3, 0, 29, 29
  01453b0  cmpwi 3, 0
  01453b4  bt 2, 0x1453bc
  01453b8  li 4, 2
  01453bc  lhz 5, 2(30)
  01453c0  lhz 3, 0(30)
  01453c4  extsh 5, 5
  01453c8  addc 4, 5, 4
  01453cc  bl 0xca3e4
  01453d0  nop
  01453d4  li 8, 128
  01453d8  ori 4, 22, 0
  01453dc  ori 5, 21, 0
  01453e0  ori 6, 26, 0
  01453e4  ori 7, 25, 0
  01453e8  bl 0xca0f4
  01453ec  nop
  01453f0  addic 23, 23, 1
  01453f4  lwz 3, 68(31)
  01453f8  addic 30, 30, 10
  01453fc  fadds 26, 26, 30
  0145400  cmpw 23, 3
  0145404  clrldi 30, 30, 32
  0145408  bt 0, 0x1451bc
  014540c  addic 24, 24, 1
  0145410  lwz 3, 64(31)
  0145414  fadds 27, 27, 29
  0145418  cmpw 24, 3
  014541c  bt 0, 0x1451a8
  0145420  bl 0x6d708
  0145424  nop
  0145428  li 3, 2
  014542c  ld 0, 304(1)
  0145430  mtlr 0
  0145434  lfd 26, 240(1)
  0145438  lfd 27, 248(1)
  014543c  lfd 28, 256(1)
  0145440  lfd 29, 264(1)
  0145444  lfd 30, 272(1)
  0145448  lfd 31, 280(1)
  014544c  ld 18, 128(1)
  0145450  ld 19, 136(1)
  0145454  ld 20, 144(1)
  0145458  ld 21, 152(1)
  014545c  ld 22, 160(1)
  0145460  ld 23, 168(1)
  0145464  ld 24, 176(1)
  0145468  ld 25, 184(1)
  014546c  ld 26, 192(1)
  0145470  ld 27, 200(1)
  0145474  ld 28, 208(1)
  0145478  ld 29, 216(1)
  014547c  ld 30, 224(1)
  0145480  ld 31, 232(1)
  0145484  addi 1, 1, 288
  0145488  blr

???_Pause_SetEntryByHeroType:   # 0x14548c, 0x34 bytes
  014548c  lis 5, 151
  0145490  ori 4, 3, 0
  0145494  addic 5, 5, -25376
  0145498  li 3, 3
  014549c  lbz 5, 8356(5)
  01454a0  cmpwi 5, 1
  01454a4  bf 2, 0x1454ac
  01454a8  li 3, 0
  01454ac  ori 5, 3, 0
  01454b0  lwz 4, 52(4)
  01454b4  li 3, 0
  01454b8  sth 5, 2(4)
  01454bc  blr

MenuHero_Draw:   # 0x1454d0, 0x2e0 bytes
  01454d0  stdu 1, -192(1)
  01454d4  mflr 0
  01454d8  std 0, 208(1)
  01454dc  stfd 31, 184(1)
  01454e0  std 27, 144(1)
  01454e4  std 28, 152(1)
  01454e8  ori 27, 3, 0
  01454ec  std 29, 160(1)
  01454f0  li 28, 0
  01454f4  std 31, 176(1)
  01454f8  std 30, 168(1)
  01454fc  ori 29, 27, 0
  0145500  ori 30, 28, 0
  0145504  addic 3, 27, 68
  0145508  addc 31, 3, 30
  014550c  clrldi 31, 31, 32
  0145510  lwz 3, 0(31)
  0145514  cmpwi 3, 0
  0145518  bt 2, 0x145770
  014551c  lbz 3, 164(29)
  0145520  cmpwi 3, 0
  0145524  bf 2, 0x145770
  0145528  lis 3, 115
  014552c  cmpwi 1, 28, 7
  0145530  addic 3, 3, 2792
  0145534  lwzx 3, 3, 30
  0145538  cmpwi 3, 0
  014553c  bt 2, 0x145770
  0145540  bf 6, 0x145568
  0145544  lwz 3, 0(31)
  0145548  lhz 3, 166(3)
  014554c  cmpwi 3, 74
  0145550  bf 2, 0x145568
  0145554  lwz 3, 68(27)
  0145558  lbz 4, 82(3)
  014555c  lbz 3, 83(3)
  0145560  cmpw 4, 3
  0145564  bf 2, 0x145770
  0145568  cmpwi 28, 6
  014556c  cmpwi 6, 28, 3
  0145570  bt 1, 0x145590
  0145574  cmpwi 1, 28, 0
  0145578  cmpwi 7, 28, 4
  014557c  bt 25, 0x145588
  0145580  bf 5, 0x1455d0
  0145584  b 0x1455a0
  0145588  bf 29, 0x1455d0
  014558c  b 0x1455a0
  0145590  cmpwi 1, 28, 12
  0145594  cmpwi 28, 9
  0145598  crorc 2, 5, 1
  014559c  bt 2, 0x1455d0
  01455a0  lwz 3, 68(27)
  01455a4  lbz 4, 82(3)
  01455a8  cmpwi 4, 153
  01455ac  bf 2, 0x1455d0
  01455b0  lbz 4, 83(3)
  01455b4  cmpwi 4, 153
  01455b8  bf 2, 0x1455d0
  01455bc  lbz 3, 80(3)
  01455c0  cmpwi 3, 77
  01455c4  bt 0, 0x1455d0
  01455c8  cmpwi 3, 145
  01455cc  bf 1, 0x145770
  01455d0  lwz 4, 0(31)
  01455d4  cmpwi 28, 7
  01455d8  lwz 3, 68(27)
  01455dc  lfs 31, 44(4)
  01455e0  bf 2, 0x145758
  01455e4  lhz 4, 166(4)
  01455e8  cmpwi 4, 634
  01455ec  bf 2, 0x145758
  01455f0  lis 4, 20
  01455f4  addi 5, 4, 21696
  01455f8  lbz 4, 80(3)
  01455fc  cmpwi 1, 4, 81
  0145600  cmpwi 6, 4, 141
  0145604  lfs 2, 0(5)
  0145608  bt 4, 0x145770
  014560c  cmpwi 4, 146
  0145610  bt 1, 0x145770
  0145614  lis 5, 20
  0145618  addi 5, 5, 21696
  014561c  lfs 1, 4(5)
  0145620  bf 5, 0x14565c
  0145624  bt 25, 0x14565c
  0145628  lis 3, 20
  014562c  addic 4, 4, -81
  0145630  addi 3, 3, 21696
  0145634  cmpwi 4, 5
  0145638  lfs 2, 8(3)
  014563c  bt 1, 0x14569c
  0145640  extsw 3, 4
  0145644  std 3, 128(1)
  0145648  lfd 2, 128(1)
  014564c  fcfid 2, 2
  0145650  frsp 2, 2
  0145654  fmuls 2, 2, 1
  0145658  b 0x14569c
  014565c  lbz 3, 80(3)
  0145660  cmpwi 3, 141
  0145664  bf 1, 0x14569c
  0145668  addic 3, 3, -141
  014566c  cmpwi 3, 5
  0145670  bt 1, 0x14569c
  0145674  extsw 3, 3
  0145678  std 3, 128(1)
  014567c  lis 3, 20
  0145680  addi 3, 3, 21696
  0145684  lfs 2, 8(3)
  0145688  lfd 3, 128(1)
  014568c  fcfid 3, 3
  0145690  frsp 3, 3
  0145694  fmuls 1, 3, 1
  0145698  fsubs 2, 2, 1
  014569c  lwz 3, 0(31)
  01456a0  li 0, 112
  01456a4  lfs 1, 44(3)
  01456a8  fmuls 1, 1, 2
  01456ac  li 4, 44
  01456b0  stfs 1, 112(1)
  01456b4  stfs 1, 116(1)
  01456b8  stfs 1, 120(1)
  01456bc  stfs 1, 124(1)
  01456c0  lvx 2, 1, 0
  01456c4  vspltw 2, 2, 0
  01456c8  vspltw 2, 2, 0
  01456cc  vspltw 2, 2, 0
  01456d0  vspltw 2, 2, 0
  01456d4  vspltw 2, 2, 0
  01456d8  vspltw 2, 2, 0
  01456dc  vspltw 2, 2, 0
  01456e0  vspltw 2, 2, 0
  01456e4  vspltw 2, 2, 0
  01456e8  vspltw 2, 2, 0
  01456ec  vspltw 2, 2, 0
  01456f0  vspltw 2, 2, 0
  01456f4  vspltw 2, 2, 0
  01456f8  vspltw 2, 2, 0
  01456fc  vspltw 2, 2, 0
  0145700  vspltw 2, 2, 0
  0145704  vspltw 2, 2, 0
  0145708  vspltw 2, 2, 0
  014570c  vspltw 2, 2, 0
  0145710  vspltw 2, 2, 0
  0145714  vspltw 2, 2, 0
  0145718  vspltw 2, 2, 0
  014571c  vspltw 2, 2, 0
  0145720  vspltw 2, 2, 0
  0145724  vspltw 2, 2, 0
  0145728  vspltw 2, 2, 0
  014572c  vspltw 2, 2, 0
  0145730  vspltw 2, 2, 0
  0145734  vspltw 2, 2, 0
  0145738  vspltw 2, 2, 0
  014573c  vspltw 2, 2, 0
  0145740  vspltw 2, 2, 0
  0145744  vspltw 2, 2, 0
  0145748  vspltw 2, 2, 0
  014574c  vspltw 2, 2, 0
  0145750  vspltw 2, 2, 0
  0145754  stvewx 2, 4, 3
  0145758  lwz 3, 0(31)
  014575c  li 4, 1
  0145760  bl 0xf1934
  0145764  nop
  0145768  lwz 3, 0(31)
  014576c  stfs 31, 44(3)
  0145770  addic 28, 28, 1
  0145774  addic 29, 29, 1
  0145778  cmpwi 28, 24
  014577c  addic 30, 30, 4
  0145780  bt 0, 0x145504
  0145784  li 3, 4
  0145788  ld 0, 208(1)
  014578c  mtlr 0
  0145790  lfd 31, 184(1)
  0145794  ld 27, 144(1)
  0145798  ld 28, 152(1)
  014579c  ld 29, 160(1)
  01457a0  ld 30, 168(1)
  01457a4  ld 31, 176(1)
  01457a8  addi 1, 1, 192
  01457ac  blr

STUB_001457b0:   # 0x1457b0, 0x8 bytes
  01457b0  li 3, 0
  01457b4  blr

ItemView_OnEnter:   # 0x1457b8, 0x24 bytes
  01457b8  lis 4, 16457
  01457bc  li 5, 0
  01457c0  ori 4, 4, 4059
  01457c4  stw 5, 52(3)
  01457c8  stw 4, 56(3)
  01457cc  stw 5, 68(3)
  01457d0  stw 5, 72(3)
  01457d4  ori 3, 5, 0
  01457d8  blr

ItemView_OnExit:   # 0x1457dc, 0x9c bytes
  01457dc  stdu 1, -128(1)
  01457e0  mflr 0
  01457e4  std 0, 144(1)
  01457e8  std 31, 120(1)
  01457ec  std 30, 112(1)
  01457f0  ori 31, 3, 0
  01457f4  lwz 30, 68(31)
  01457f8  cmpwi 30, 0
  01457fc  bt 2, 0x145824
  0145800  ori 3, 30, 0
  0145804  bl 0xefb38
  0145808  nop
  014580c  lis 3, 161
  0145810  lwz 3, 1808(3)
  0145814  extsw 3, 3
  0145818  std 3, 56(30)
  014581c  li 30, 0
  0145820  b 0x145824
  0145824  stw 30, 68(31)
  0145828  lwz 30, 72(31)
  014582c  cmpwi 30, 0
  0145830  bt 2, 0x145858
  0145834  ori 3, 30, 0
  0145838  bl 0xefb38
  014583c  nop
  0145840  lis 3, 161
  0145844  lwz 3, 1808(3)
  0145848  extsw 3, 3
  014584c  std 3, 56(30)
  0145850  li 30, 0
  0145854  b 0x145858
  0145858  li 3, 0
  014585c  stw 30, 72(31)
  0145860  ld 0, 144(1)
  0145864  mtlr 0
  0145868  ld 30, 112(1)
  014586c  ld 31, 120(1)
  0145870  addi 1, 1, 128
  0145874  blr

ItemView_Update:   # 0x145880, 0x30c bytes
  0145880  stdu 1, -144(1)
  0145884  mflr 0
  0145888  std 0, 160(1)
  014588c  std 31, 136(1)
  0145890  lis 4, 165
  0145894  ori 31, 3, 0
  0145898  addic 4, 4, 11184
  014589c  li 3, -1
  01458a0  lwz 4, 4(4)
  01458a4  std 30, 128(1)
  01458a8  lwz 4, 64(4)
  01458ac  lwz 30, 68(31)
  01458b0  cmpwi 30, 0
  01458b4  lwz 5, 60(4)
  01458b8  lwz 4, 72(4)
  01458bc  sldi 6, 5, 3
  01458c0  addic 4, 4, 6
  01458c4  addc 6, 5, 6
  01458c8  addc 5, 5, 6
  01458cc  addc 4, 4, 5
  01458d0  clrldi 4, 4, 32
  01458d4  lhz 4, 0(4)
  01458d8  std 29, 120(1)
  01458dc  extsh 4, 4
  01458e0  bt 2, 0x1458ec
  01458e4  lhz 3, 166(30)
  01458e8  extsh 3, 3
  01458ec  sldi 5, 4, 4
  01458f0  lis 6, 114
  01458f4  subc 4, 4, 5
  01458f8  addic 6, 6, 4154
  01458fc  sldi 4, 4, 2
  0145900  cmpwi 1, 3, -1
  0145904  subc 4, 5, 4
  0145908  lhzx 4, 6, 4
  014590c  extsh 4, 4
  0145910  cmpwi 6, 4, -1
  0145914  bt 26, 0x145a08
  0145918  bf 6, 0x145a08
  014591c  lis 3, 163
  0145920  addic 3, 3, 21696
  0145924  lbzx 3, 3, 4
  0145928  cmpwi 3, 255
  014592c  bf 2, 0x145938
  0145930  li 30, 0
  0145934  b 0x145998
  0145938  ori 3, 4, 0
  014593c  bl 0xefa28
  0145940  nop
  0145944  ori 30, 3, 0
  0145948  cmpwi 30, 0
  014594c  bt 2, 0x145998
  0145950  li 4, 255
  0145954  li 5, 1
  0145958  li 29, 0
  014595c  ori 3, 30, 0
  0145960  stb 4, 48(30)
  0145964  sth 4, 50(30)
  0145968  stb 5, 49(30)
  014596c  stb 29, 32(30)
  0145970  bl 0xf31a8
  0145974  nop
  0145978  lis 4, 32
  014597c  li 5, 14
  0145980  ori 7, 29, 0
  0145984  ori 4, 4, 8224
  0145988  ori 3, 30, 0
  014598c  ori 6, 5, 0
  0145990  bl 0xf1ea0
  0145994  nop
  0145998  cmpwi 30, 0
  014599c  bt 2, 0x145b6c
  01459a0  lis 4, 20
  01459a4  stw 30, 68(31)
  01459a8  lis 5, 149
  01459ac  li 3, 0
  01459b0  addi 4, 4, 22648
  01459b4  addic 5, 5, 5056
  01459b8  lis 6, 112
  01459bc  sth 3, 52(30)
  01459c0  lis 3, 16457
  01459c4  lfs 1, 0(4)
  01459c8  lfs 2, 320(5)
  01459cc  ori 3, 3, 4059
  01459d0  lwz 7, 120(30)
  01459d4  addic 6, 6, 30448
  01459d8  fadds 1, 2, 1
  01459dc  stfs 1, 16(30)
  01459e0  lfs 1, 324(5)
  01459e4  stfs 1, 20(30)
  01459e8  lfs 1, 4(4)
  01459ec  lfs 2, 328(5)
  01459f0  stw 3, 72(30)
  01459f4  fsubs 1, 2, 1
  01459f8  stw 6, 116(30)
  01459fc  stfs 1, 24(30)
  0145a00  stw 31, 0(7)
  0145a04  b 0x145b6c
  0145a08  cmpw 1, 3, 4
  0145a0c  bf 26, 0x145a48
  0145a10  lwz 30, 68(31)
  0145a14  cmpwi 30, 0
  0145a18  bt 2, 0x145a40
  0145a1c  ori 3, 30, 0
  0145a20  bl 0xefb38
  0145a24  nop
  0145a28  lis 3, 161
  0145a2c  lwz 3, 1808(3)
  0145a30  extsw 3, 3
  0145a34  std 3, 56(30)
  0145a38  li 30, 0
  0145a3c  b 0x145a40
  0145a40  stw 30, 68(31)
  0145a44  b 0x145b6c
  0145a48  bt 6, 0x145b6c
  0145a4c  lis 3, 163
  0145a50  addic 3, 3, 21696
  0145a54  lbzx 3, 3, 4
  0145a58  cmpwi 3, 255
  0145a5c  bf 2, 0x145a68
  0145a60  li 29, 0
  0145a64  b 0x145acc
  0145a68  ori 3, 4, 0
  0145a6c  bl 0xefa28
  0145a70  nop
  0145a74  ori 30, 3, 0
  0145a78  cmpwi 30, 0
  0145a7c  bt 2, 0x145ac8
  0145a80  li 4, 255
  0145a84  li 5, 1
  0145a88  li 29, 0
  0145a8c  ori 3, 30, 0
  0145a90  stb 4, 48(30)
  0145a94  sth 4, 50(30)
  0145a98  stb 5, 49(30)
  0145a9c  stb 29, 32(30)
  0145aa0  bl 0xf31a8
  0145aa4  nop
  0145aa8  lis 4, 32
  0145aac  li 5, 14
  0145ab0  ori 7, 29, 0
  0145ab4  ori 4, 4, 8224
  0145ab8  ori 3, 30, 0
  0145abc  ori 6, 5, 0
  0145ac0  bl 0xf1ea0
  0145ac4  nop
  0145ac8  ori 29, 30, 0
  0145acc  cmpwi 29, 0
  0145ad0  bt 2, 0x145b40
  0145ad4  li 3, 0
  0145ad8  sth 3, 52(29)
  0145adc  lwz 3, 68(31)
  0145ae0  addic 4, 3, 16
  0145ae4  addic 5, 3, 16
  0145ae8  addic 6, 3, 64
  0145aec  lfs 1, 0(4)
  0145af0  addic 4, 3, 64
  0145af4  stfs 1, 16(29)
  0145af8  lfs 1, 4(5)
  0145afc  stfs 1, 20(29)
  0145b00  lfs 1, 8(5)
  0145b04  stfs 1, 24(29)
  0145b08  lfs 1, 12(5)
  0145b0c  stfs 1, 28(29)
  0145b10  lfs 1, 0(4)
  0145b14  stfs 1, 64(29)
  0145b18  lfs 1, 4(6)
  0145b1c  stfs 1, 68(29)
  0145b20  lfs 1, 8(6)
  0145b24  lwz 4, 120(29)
  0145b28  stfs 1, 72(29)
  0145b2c  lfs 1, 12(6)
  0145b30  stfs 1, 76(29)
  0145b34  lwz 3, 116(3)
  0145b38  stw 3, 116(29)
  0145b3c  stw 31, 0(4)
  0145b40  lwz 30, 68(31)
  0145b44  cmpwi 30, 0
  0145b48  bt 2, 0x145b68
  0145b4c  ori 3, 30, 0
  0145b50  bl 0xefb38
  0145b54  nop
  0145b58  lis 3, 161
  0145b5c  lwz 3, 1808(3)
  0145b60  extsw 3, 3
  0145b64  std 3, 56(30)
  0145b68  stw 29, 68(31)
  0145b6c  li 3, 0
  0145b70  ld 0, 160(1)
  0145b74  mtlr 0
  0145b78  ld 29, 120(1)
  0145b7c  ld 30, 128(1)
  0145b80  ld 31, 136(1)
  0145b84  addi 1, 1, 144
  0145b88  blr

ItemView_Draw:   # 0x145b8c, 0x14c bytes
  0145b8c  stdu 1, -160(1)
  0145b90  mflr 0
  0145b94  std 0, 176(1)
  0145b98  std 31, 152(1)
  0145b9c  lis 4, 165
  0145ba0  ori 31, 3, 0
  0145ba4  std 30, 144(1)
  0145ba8  addic 4, 4, 11184
  0145bac  ori 30, 3, 0
  0145bb0  lis 5, 151
  0145bb4  addic 5, 5, -16064
  0145bb8  lwz 4, 4(4)
  0145bbc  lwz 4, 64(4)
  0145bc0  lwz 6, 60(4)
  0145bc4  lwz 4, 72(4)
  0145bc8  sldi 7, 6, 3
  0145bcc  addic 4, 4, 6
  0145bd0  addc 7, 6, 7
  0145bd4  addc 6, 6, 7
  0145bd8  addc 4, 4, 6
  0145bdc  clrldi 4, 4, 32
  0145be0  lhz 3, 0(4)
  0145be4  extsh 3, 3
  0145be8  lbzx 3, 5, 3
  0145bec  cmpwi 3, 0
  0145bf0  bf 2, 0x145bfc
  0145bf4  li 3, 0
  0145bf8  b 0x145cc0
  0145bfc  lwz 3, 68(31)
  0145c00  cmpwi 3, 0
  0145c04  bt 2, 0x145c38
  0145c08  li 4, 1
  0145c0c  bl 0xf1934
  0145c10  nop
  0145c14  lwz 31, 72(31)
  0145c18  cmpwi 31, 0
  0145c1c  bt 2, 0x145c30
  0145c20  li 4, 1
  0145c24  ori 3, 31, 0
  0145c28  bl 0xf1934
  0145c2c  nop
  0145c30  li 3, 8
  0145c34  b 0x145cc0
  0145c38  li 31, 0
  0145c3c  ori 3, 31, 0
  0145c40  bl 0x6d704
  0145c44  nop
  0145c48  lwz 3, 36(30)
  0145c4c  lwz 4, 32(30)
  0145c50  li 5, 16
  0145c54  sth 31, 112(1)
  0145c58  srawi 6, 3, 1
  0145c5c  sth 3, 114(1)
  0145c60  lis 7, -32513
  0145c64  srawi 3, 4, 1
  0145c68  sth 31, 116(1)
  0145c6c  sth 4, 118(1)
  0145c70  sth 6, 122(1)
  0145c74  ori 6, 7, 43144
  0145c78  sth 3, 120(1)
  0145c7c  li 4, 3
  0145c80  sth 5, 128(1)
  0145c84  clrldi 5, 6, 32
  0145c88  li 3, 20301
  0145c8c  ori 31, 5, 0
  0145c90  sth 4, 130(1)
  0145c94  bl 0x7b740
  0145c98  nop
  0145c9c  ori 5, 3, 0
  0145ca0  addic 3, 1, 112
  0145ca4  li 6, -1
  0145ca8  ori 4, 31, 0
  0145cac  bl 0x6a510
  0145cb0  nop
  0145cb4  bl 0x6d708
  0145cb8  nop
  0145cbc  li 3, 2
  0145cc0  ld 0, 176(1)
  0145cc4  mtlr 0
  0145cc8  ld 30, 144(1)
  0145ccc  ld 31, 152(1)
  0145cd0  addi 1, 1, 160
  0145cd4  blr

ItemView_SpinMobyUpdate:   # 0x145ce0, 0x44 bytes
  0145ce0  stdu 1, -128(1)
  0145ce4  mflr 0
  0145ce8  std 0, 144(1)
  0145cec  std 31, 120(1)
  0145cf0  ori 31, 3, 0
  0145cf4  lis 4, 20
  0145cf8  addi 3, 4, 23768
  0145cfc  lfs 1, 72(31)
  0145d00  lfs 2, 0(3)
  0145d04  bl 0x502578
  0145d08  nop
  0145d0c  stfs 1, 72(31)
  0145d10  ld 0, 144(1)
  0145d14  mtlr 0
  0145d18  ld 31, 120(1)
  0145d1c  addi 1, 1, 128
  0145d20  blr

WeaponView_Update:   # 0x145d28, 0x648 bytes
  0145d28  stdu 1, -208(1)
  0145d2c  mflr 0
  0145d30  std 0, 224(1)
  0145d34  std 25, 152(1)
  0145d38  std 30, 192(1)
  0145d3c  lis 25, 165
  0145d40  std 23, 136(1)
  0145d44  ori 30, 3, 0
  0145d48  addic 25, 25, 11184
  0145d4c  std 31, 200(1)
  0145d50  li 23, -1
  0145d54  ori 31, 30, 0
  0145d58  lwz 3, 4(25)
  0145d5c  lwz 4, 64(3)
  0145d60  lwz 3, 68(30)
  0145d64  cmpwi 3, 0
  0145d68  lwz 5, 60(4)
  0145d6c  lwz 4, 72(4)
  0145d70  sldi 6, 5, 3
  0145d74  addic 4, 4, 6
  0145d78  addc 6, 5, 6
  0145d7c  addc 5, 5, 6
  0145d80  addc 4, 4, 5
  0145d84  std 29, 184(1)
  0145d88  clrldi 4, 4, 32
  0145d8c  lhz 29, 0(4)
  0145d90  extsh 29, 29
  0145d94  std 28, 176(1)
  0145d98  std 27, 168(1)
  0145d9c  std 26, 160(1)
  0145da0  std 24, 144(1)
  0145da4  std 22, 128(1)
  0145da8  std 21, 120(1)
  0145dac  std 20, 112(1)
  0145db0  cmpwi 1, 29, 24
  0145db4  bt 2, 0x145dc0
  0145db8  lhz 23, 166(3)
  0145dbc  extsh 23, 23
  0145dc0  sldi 21, 29, 4
  0145dc4  lis 22, 114
  0145dc8  subc 3, 29, 21
  0145dcc  addic 22, 22, 4096
  0145dd0  sldi 3, 3, 2
  0145dd4  subc 21, 21, 3
  0145dd8  addc 28, 22, 21
  0145ddc  lwz 24, 16(28)
  0145de0  extsw 24, 24
  0145de4  bf 6, 0x145dec
  0145de8  li 24, 479
  0145dec  lis 3, 20
  0145df0  lfs 1, 56(30)
  0145df4  addi 3, 3, 23844
  0145df8  lfs 2, 0(3)
  0145dfc  bl 0x502578
  0145e00  nop
  0145e04  addic 3, 22, 8
  0145e08  lwz 4, 8(28)
  0145e0c  li 27, 0
  0145e10  stfs 1, 56(30)
  0145e14  addic 4, 4, -2
  0145e18  lwzx 3, 3, 21
  0145e1c  cmpwi 4, 0
  0145e20  ori 21, 27, 0
  0145e24  addic 28, 3, -3
  0145e28  addic 3, 3, -1
  0145e2c  bt 2, 0x145e44
  0145e30  cmpwi 28, 0
  0145e34  bt 2, 0x145e44
  0145e38  cmpwi 3, 0
  0145e3c  bt 2, 0x145e44
  0145e40  li 27, 1
  0145e44  cmpwi 29, 24
  0145e48  bf 2, 0x145e50
  0145e4c  ori 27, 21, 0
  0145e50  lwz 3, 52(30)
  0145e54  lwz 26, 48(30)
  0145e58  cmpwi 3, 1
  0145e5c  cmpwi 1, 3, -1
  0145e60  cmpwi 6, 3, 0
  0145e64  cmpwi 7, 3, 2
  0145e68  bt 1, 0x145e7c
  0145e6c  bf 5, 0x14632c
  0145e70  cmpwi 1, 24, -1
  0145e74  bf 25, 0x145e90
  0145e78  b 0x145e9c
  0145e7c  bf 29, 0x145eac
  0145e80  cmpwi 3, 3
  0145e84  cmpw 1, 23, 24
  0145e88  bf 1, 0x1462b8
  0145e8c  b 0x14632c
  0145e90  li 3, 1
  0145e94  stw 3, 52(30)
  0145e98  b 0x14632c
  0145e9c  bt 6, 0x14632c
  0145ea0  li 3, 2
  0145ea4  stw 3, 52(30)
  0145ea8  b 0x14632c
  0145eac  lis 23, 144
  0145eb0  lwz 23, -23196(23)
  0145eb4  lbz 3, 17(23)
  0145eb8  cmpwi 3, 129
  0145ebc  bf 2, 0x145f24
  0145ec0  lwz 3, 20(23)
  0145ec4  rlwinm 3, 3, 31, 31, 31
  0145ec8  cmpwi 3, 0
  0145ecc  bf 2, 0x145ef4
  0145ed0  lwz 4, 0(23)
  0145ed4  ori 3, 23, 0
  0145ed8  std 2, 40(1)
  0145edc  lwz 4, 24(4)
  0145ee0  lwz 5, 0(4)
  0145ee4  lwz 2, 4(4)
  0145ee8  mtctr 5
  0145eec  bcctrl 20, 30
  0145ef0  ld 2, 40(1)
  0145ef4  lwz 4, 0(23)
  0145ef8  std 2, 40(1)
  0145efc  ori 3, 23, 0
  0145f00  lwz 4, 24(4)
  0145f04  lwz 5, 0(4)
  0145f08  lwz 2, 4(4)
  0145f0c  mtctr 5
  0145f10  bcctrl 20, 30
  0145f14  lwz 3, 6796(23)
  0145f18  ld 2, 40(1)
  0145f1c  addic 3, 3, 2
  0145f20  stw 3, 6796(23)
  0145f24  cmpwi 24, -1
  0145f28  cmpwi 1, 27, 0
  0145f2c  bf 2, 0x145f3c
  0145f30  li 3, 1
  0145f34  stw 3, 52(30)
  0145f38  b 0x14632c
  0145f3c  bt 6, 0x145fe8
  0145f40  lis 3, 151
  0145f44  addic 3, 3, -25376
  0145f48  lwz 3, 4280(3)
  0145f4c  cmpwi 3, 0
  0145f50  bt 2, 0x145f6c
  0145f54  cmpw 24, 3
  0145f58  bt 2, 0x145f6c
  0145f5c  ori 3, 21, 0
  0145f60  ori 4, 21, 0
  0145f64  bl 0x86814
  0145f68  nop
  0145f6c  lwz 3, 280(25)
  0145f70  cmpw 24, 3
  0145f74  bf 2, 0x145f9c
  0145f78  lis 3, 163
  0145f7c  lis 4, 163
  0145f80  addic 3, 3, 21696
  0145f84  addic 4, 4, 19456
  0145f88  lbzx 3, 3, 24
  0145f8c  slwi 3, 3, 2
  0145f90  lwzx 3, 4, 3
  0145f94  cmpwi 3, 0
  0145f98  bf 2, 0x145fe8
  0145f9c  lwz 4, 276(25)
  0145fa0  ori 3, 24, 0
  0145fa4  cntlzw 4, 4
  0145fa8  srwi 4, 4, 5
  0145fac  bl 0xe0854
  0145fb0  nop
  0145fb4  lis 3, 163
  0145fb8  stw 24, 284(25)
  0145fbc  lis 5, 165
  0145fc0  addic 3, 3, 21696
  0145fc4  stw 24, 316(25)
  0145fc8  lis 4, 163
  0145fcc  addic 4, 4, 19456
  0145fd0  lbzx 3, 3, 24
  0145fd4  lwz 5, -9492(5)
  0145fd8  slwi 3, 3, 2
  0145fdc  stw 5, 320(25)
  0145fe0  lwzx 3, 4, 3
  0145fe4  stb 21, 13(3)
  0145fe8  lis 25, 163
  0145fec  addic 25, 25, 21696
  0145ff0  lbzx 3, 25, 24
  0145ff4  cmpwi 3, 255
  0145ff8  bf 2, 0x146004
  0145ffc  ori 24, 21, 0
  0146000  b 0x146060
  0146004  ori 3, 24, 0
  0146008  bl 0xefa28
  014600c  nop
  0146010  ori 24, 3, 0
  0146014  cmpwi 24, 0
  0146018  bt 2, 0x146060
  014601c  li 4, 255
  0146020  li 5, 1
  0146024  ori 3, 24, 0
  0146028  stb 4, 48(24)
  014602c  sth 4, 50(24)
  0146030  stb 5, 49(24)
  0146034  stb 21, 32(24)
  0146038  bl 0xf31a8
  014603c  nop
  0146040  lis 4, 32
  0146044  li 5, 14
  0146048  ori 3, 24, 0
  014604c  ori 7, 21, 0
  0146050  ori 4, 4, 8224
  0146054  ori 6, 5, 0
  0146058  bl 0xf1ea0
  014605c  nop
  0146060  addic 3, 29, -2
  0146064  li 23, 1
  0146068  cmpwi 3, 0
  014606c  ori 20, 23, 0
  0146070  cmpwi 6, 24, 0
  0146074  bf 2, 0x14607c
  0146078  li 23, 6
  014607c  cmpwi 1, 27, 0
  0146080  bt 26, 0x14617c
  0146084  bt 6, 0x1460ac
  0146088  lis 3, 151
  014608c  addic 3, 3, -25432
  0146090  lbzx 3, 3, 29
  0146094  cmpwi 3, 0
  0146098  bt 2, 0x1460ac
  014609c  ori 3, 24, 0
  01460a0  lwz 4, 20(31)
  01460a4  bl 0x8d7e8
  01460a8  nop
  01460ac  lis 3, 149
  01460b0  stw 24, 68(30)
  01460b4  clrlwi 5, 26, 31
  01460b8  sth 21, 52(24)
  01460bc  addic 3, 3, 5056
  01460c0  lis 26, 116
  01460c4  cmpwi 5, 0
  01460c8  sldi 4, 29, 5
  01460cc  addic 26, 26, -32376
  01460d0  lfs 1, 320(3)
  01460d4  bt 2, 0x1460e0
  01460d8  lfsx 2, 26, 4
  01460dc  b 0x1460e8
  01460e0  addc 5, 26, 4
  01460e4  lfs 2, 4(5)
  01460e8  fadds 1, 1, 2
  01460ec  addc 4, 26, 4
  01460f0  lwz 7, 120(24)
  01460f4  lis 5, 16457
  01460f8  lis 6, 112
  01460fc  ori 5, 5, 4059
  0146100  addic 6, 6, 30472
  0146104  stfs 1, 16(24)
  0146108  lfs 1, 324(3)
  014610c  lfs 2, 8(4)
  0146110  fadds 1, 1, 2
  0146114  stfs 1, 20(24)
  0146118  lfs 1, 328(3)
  014611c  lfs 2, 12(4)
  0146120  ori 3, 23, 0
  0146124  fadds 1, 1, 2
  0146128  stfs 1, 24(24)
  014612c  lfs 1, 16(4)
  0146130  stfs 1, 64(24)
  0146134  lfs 1, 20(4)
  0146138  stw 5, 72(24)
  014613c  stfs 1, 68(24)
  0146140  stw 6, 116(24)
  0146144  stw 30, 0(7)
  0146148  stw 29, 12(7)
  014614c  lwz 4, 36(24)
  0146150  lbz 5, 12(4)
  0146154  addic 5, 5, -1
  0146158  cmpw 3, 5
  014615c  bt 0, 0x146168
  0146160  lbz 3, 12(4)
  0146164  addic 3, 3, -1
  0146168  ori 4, 3, 0
  014616c  ori 3, 24, 0
  0146170  ori 5, 21, 0
  0146174  bl 0xfdcf0
  0146178  nop
  014617c  cmpwi 1, 24, 0
  0146180  cmpwi 28, 0
  0146184  crorc 2, 6, 2
  0146188  bt 2, 0x1462ac
  014618c  lwz 22, 92(22)
  0146190  extsw 22, 22
  0146194  lbzx 3, 25, 22
  0146198  cmpwi 3, 255
  014619c  bf 2, 0x1461a8
  01461a0  ori 31, 21, 0
  01461a4  b 0x146200
  01461a8  ori 3, 22, 0
  01461ac  bl 0xefa28
  01461b0  nop
  01461b4  ori 31, 3, 0
  01461b8  cmpwi 31, 0
  01461bc  bt 2, 0x146200
  01461c0  li 4, 255
  01461c4  ori 3, 31, 0
  01461c8  stb 4, 48(31)
  01461cc  sth 4, 50(31)
  01461d0  stb 20, 49(31)
  01461d4  stb 21, 32(31)
  01461d8  bl 0xf31a8
  01461dc  nop
  01461e0  lis 4, 32
  01461e4  li 5, 14
  01461e8  ori 7, 21, 0
  01461ec  ori 4, 4, 8224
  01461f0  ori 3, 31, 0
  01461f4  ori 6, 5, 0
  01461f8  bl 0xf1ea0
  01461fc  nop
  0146200  cmpwi 31, 0
  0146204  bt 2, 0x1462ac
  0146208  sth 21, 52(31)
  014620c  lwz 3, 68(30)
  0146210  addic 4, 3, 16
  0146214  addic 5, 3, 16
  0146218  addic 6, 3, 64
  014621c  addic 3, 3, 64
  0146220  lfs 1, 0(4)
  0146224  lis 4, 112
  0146228  stfs 1, 16(31)
  014622c  lfs 1, 4(5)
  0146230  addic 4, 4, 30472
  0146234  stfs 1, 20(31)
  0146238  lfs 1, 8(5)
  014623c  stfs 1, 24(31)
  0146240  lfs 1, 12(5)
  0146244  stfs 1, 28(31)
  0146248  lfs 1, 0(6)
  014624c  stfs 1, 64(31)
  0146250  lfs 1, 4(3)
  0146254  stfs 1, 68(31)
  0146258  lfs 1, 8(3)
  014625c  stfs 1, 72(31)
  0146260  lfs 1, 12(3)
  0146264  stfs 1, 76(31)
  0146268  stw 31, 72(30)
  014626c  lwz 3, 120(31)
  0146270  stw 4, 116(31)
  0146274  stw 30, 0(3)
  0146278  stw 29, 12(3)
  014627c  lwz 29, 36(31)
  0146280  lbz 3, 12(29)
  0146284  addic 3, 3, -1
  0146288  cmpw 23, 3
  014628c  bt 0, 0x146298
  0146290  lbz 23, 12(29)
  0146294  addic 23, 23, -1
  0146298  ori 3, 31, 0
  014629c  ori 4, 23, 0
  01462a0  ori 5, 21, 0
  01462a4  bl 0xfdcf0
  01462a8  nop
  01462ac  li 3, 3
  01462b0  stw 3, 52(30)
  01462b4  b 0x14632c
  01462b8  bt 6, 0x14632c
  01462bc  lwz 31, 68(30)
  01462c0  cmpwi 31, 0
  01462c4  bt 2, 0x1462ec
  01462c8  ori 3, 31, 0
  01462cc  bl 0xefb38
  01462d0  nop
  01462d4  lis 3, 161
  01462d8  lwz 3, 1808(3)
  01462dc  extsw 3, 3
  01462e0  std 3, 56(31)
  01462e4  ori 31, 21, 0
  01462e8  b 0x1462ec
  01462ec  stw 31, 68(30)
  01462f0  lwz 31, 72(30)
  01462f4  cmpwi 31, 0
  01462f8  bt 2, 0x146320
  01462fc  ori 3, 31, 0
  0146300  bl 0xefb38
  0146304  nop
  0146308  lis 3, 161
  014630c  lwz 3, 1808(3)
  0146310  extsw 3, 3
  0146314  std 3, 56(31)
  0146318  ori 31, 21, 0
  014631c  b 0x146320
  0146320  li 3, 2
  0146324  stw 31, 72(30)
  0146328  stw 3, 52(30)
  014632c  ori 3, 21, 0
  0146330  ld 0, 224(1)
  0146334  mtlr 0
  0146338  ld 20, 112(1)
  014633c  ld 21, 120(1)
  0146340  ld 22, 128(1)
  0146344  ld 23, 136(1)
  0146348  ld 24, 144(1)
  014634c  ld 25, 152(1)
  0146350  ld 26, 160(1)
  0146354  ld 27, 168(1)
  0146358  ld 28, 176(1)
  014635c  ld 29, 184(1)
  0146360  ld 30, 192(1)
  0146364  ld 31, 200(1)
  0146368  addi 1, 1, 208
  014636c  blr

WeaponView_Draw:   # 0x146370, 0xb4 bytes
  0146370  stdu 1, -128(1)
  0146374  mflr 0
  0146378  std 0, 144(1)
  014637c  std 31, 120(1)
  0146380  lis 4, 165
  0146384  ori 31, 3, 0
  0146388  addic 4, 4, 11184
  014638c  lis 3, 151
  0146390  addic 3, 3, -16064
  0146394  lwz 4, 4(4)
  0146398  lwz 4, 64(4)
  014639c  lwz 5, 60(4)
  01463a0  lwz 4, 72(4)
  01463a4  sldi 6, 5, 3
  01463a8  addic 4, 4, 6
  01463ac  addc 6, 5, 6
  01463b0  addc 5, 5, 6
  01463b4  addc 4, 4, 5
  01463b8  clrldi 4, 4, 32
  01463bc  lhz 4, 0(4)
  01463c0  extsh 4, 4
  01463c4  lbzx 3, 3, 4
  01463c8  cmpwi 3, 0
  01463cc  bf 2, 0x1463d8
  01463d0  li 3, 0
  01463d4  b 0x146410
  01463d8  lwz 3, 68(31)
  01463dc  cmpwi 3, 0
  01463e0  bt 2, 0x1463f0
  01463e4  li 4, 1
  01463e8  bl 0xf1934
  01463ec  nop
  01463f0  lwz 31, 72(31)
  01463f4  cmpwi 31, 0
  01463f8  bt 2, 0x14640c
  01463fc  li 4, 1
  0146400  ori 3, 31, 0
  0146404  bl 0xf1934
  0146408  nop
  014640c  li 3, 8
  0146410  ld 0, 144(1)
  0146414  mtlr 0
  0146418  ld 31, 120(1)
  014641c  addi 1, 1, 128
  0146420  blr

WeaponView_MobyUpdate:   # 0x146440, 0x1b8 bytes
  0146440  stdu 1, -80(1)
  0146444  stfd 29, 56(1)
  0146448  stfd 30, 64(1)
  014644c  stfd 31, 72(1)
  0146450  lwz 4, 120(3)
  0146454  lis 6, 149
  0146458  lis 7, 20
  014645c  addic 6, 6, 5056
  0146460  lis 5, 116
  0146464  addi 7, 7, 25636
  0146468  lwz 8, 0(4)
  014646c  addic 5, 5, -32376
  0146470  lwz 4, 12(4)
  0146474  slwi 4, 4, 5
  0146478  lwz 9, 48(8)
  014647c  extsw 4, 4
  0146480  lfs 5, 56(8)
  0146484  clrlwi 8, 9, 31
  0146488  stfs 5, 72(3)
  014648c  cmpwi 8, 0
  0146490  lfs 1, 320(6)
  0146494  bt 2, 0x1464a0
  0146498  lfsx 4, 5, 4
  014649c  b 0x1464a8
  01464a0  addc 8, 5, 4
  01464a4  lfs 4, 4(8)
  01464a8  fadds 4, 1, 4
  01464ac  addc 4, 5, 4
  01464b0  stfs 4, 16(3)
  01464b4  lfs 3, 324(6)
  01464b8  lfs 1, 8(4)
  01464bc  fadds 3, 3, 1
  01464c0  stfs 3, 20(3)
  01464c4  lfs 1, 328(6)
  01464c8  lfs 2, 12(4)
  01464cc  fadds 1, 1, 2
  01464d0  stfs 1, 24(3)
  01464d4  lfs 7, 0(7)
  01464d8  lfs 6, 4(7)
  01464dc  fadds 7, 5, 7
  01464e0  lfs 2, 28(4)
  01464e4  lfs 1, 24(4)
  01464e8  fneg 2, 2
  01464ec  fmr 8, 7
  01464f0  fsubs 9, 6, 8
  01464f4  fcmpu 0, 8, 9
  01464f8  bt 0, 0x146500
  01464fc  fmr 8, 9
  0146500  fmr 9, 7
  0146504  lfs 7, 8(7)
  0146508  fsubs 9, 7, 9
  014650c  fcmpu 0, 8, 9
  0146510  bt 1, 0x146518
  0146514  fmr 8, 9
  0146518  fmuls 13, 8, 8
  014651c  lfs 12, 12(7)
  0146520  lfs 11, 16(7)
  0146524  lfs 10, 20(7)
  0146528  fmuls 9, 13, 8
  014652c  fmuls 31, 9, 12
  0146530  fmuls 30, 13, 9
  0146534  lfs 9, 24(7)
  0146538  fadds 0, 8, 31
  014653c  fmuls 31, 13, 30
  0146540  fmr 8, 5
  0146544  fmuls 30, 30, 11
  0146548  fmuls 29, 13, 31
  014654c  fsubs 13, 6, 8
  0146550  fadds 6, 0, 30
  0146554  fmuls 0, 31, 10
  0146558  fmuls 31, 29, 9
  014655c  fcmpu 0, 8, 13
  0146560  fadds 6, 6, 0
  0146564  fadds 6, 6, 31
  0146568  bt 0, 0x146570
  014656c  fmr 8, 13
  0146570  fmr 13, 7
  0146574  fmr 7, 8
  0146578  fsubs 5, 13, 5
  014657c  fcmpu 0, 7, 5
  0146580  bt 1, 0x146588
  0146584  fmr 7, 5
  0146588  fmuls 5, 7, 7
  014658c  fmuls 8, 5, 7
  0146590  fmuls 13, 5, 8
  0146594  fmuls 8, 8, 12
  0146598  fmuls 12, 6, 1
  014659c  fmuls 6, 6, 2
  01465a0  fmuls 0, 5, 13
  01465a4  fadds 7, 7, 8
  01465a8  fmuls 8, 13, 11
  01465ac  fmuls 5, 5, 0
  01465b0  fmuls 10, 0, 10
  01465b4  fadds 7, 7, 8
  01465b8  fmuls 5, 5, 9
  01465bc  fadds 7, 7, 10
  01465c0  fadds 5, 7, 5
  01465c4  fmuls 2, 5, 2
  01465c8  fmuls 1, 5, 1
  01465cc  fadds 2, 2, 12
  01465d0  fsubs 1, 1, 6
  01465d4  fadds 2, 2, 4
  01465d8  fadds 1, 3, 1
  01465dc  stfs 2, 16(3)
  01465e0  stfs 1, 20(3)
  01465e4  lfd 29, 56(1)
  01465e8  lfd 30, 64(1)
  01465ec  lfd 31, 72(1)
  01465f0  addi 1, 1, 80
  01465f4  blr

PlanetInfo_Update:   # 0x1465f8, 0x108 bytes
  01465f8  ori 5, 3, 0
  01465fc  lis 3, 150
  0146600  li 6, 3328
  0146604  addic 3, 3, 19008
  0146608  lwz 4, 196(3)
  014660c  and 6, 4, 6
  0146610  cmpwi 6, 0
  0146614  bt 2, 0x146644
  0146618  lwz 3, 48(5)
  014661c  rlwinm 3, 3, 0, 26, 26
  0146620  cmpwi 3, 0
  0146624  bt 2, 0x14663c
  0146628  lis 3, 151
  014662c  lis 4, 162
  0146630  addic 4, 4, 1216
  0146634  lwz 3, -25488(3)
  0146638  stw 3, 548(4)
  014663c  li 3, -1
  0146640  b 0x1466fc
  0146644  rlwinm 4, 4, 0, 27, 27
  0146648  cmpwi 4, 0
  014664c  bt 2, 0x1466b0
  0146650  lwz 4, 48(5)
  0146654  rlwinm 4, 4, 0, 26, 26
  0146658  cmpwi 4, 0
  014665c  bt 2, 0x146674
  0146660  lis 4, 151
  0146664  lis 5, 162
  0146668  addic 5, 5, 1216
  014666c  lwz 4, -25488(4)
  0146670  stw 4, 548(5)
  0146674  lis 4, 165
  0146678  addic 4, 4, 11184
  014667c  lwz 5, 4(4)
  0146680  lwz 6, 56(5)
  0146684  cmpwi 6, 0
  0146688  bt 2, 0x14669c
  014668c  lwz 5, 56(5)
  0146690  li 3, 0
  0146694  stw 5, 8(4)
  0146698  b 0x1466fc
  014669c  lwz 4, 288(4)
  01466a0  cmpwi 4, 0
  01466a4  bf 2, 0x1466b0
  01466a8  li 3, -1
  01466ac  b 0x1466fc
  01466b0  lis 4, 144
  01466b4  lwz 3, 196(3)
  01466b8  lwz 4, 11992(4)
  01466bc  and 3, 3, 4
  01466c0  cmpwi 3, 0
  01466c4  bt 2, 0x1466f8
  01466c8  lis 3, 114
  01466cc  li 4, 0
  01466d0  addic 3, 3, -1500
  01466d4  lis 7, 161
  01466d8  lis 5, 161
  01466dc  li 8, -1
  01466e0  lis 6, 161
  01466e4  li 9, 1
  01466e8  stw 4, 252(3)
  01466ec  stw 8, 1796(7)
  01466f0  stw 9, 1792(5)
  01466f4  stw 9, 1820(6)
  01466f8  li 3, 0
  01466fc  blr

PlanetInfo_Draw:   # 0x146708, 0x27c bytes
  0146708  stdu 1, -192(1)
  014670c  mflr 0
  0146710  std 0, 208(1)
  0146714  stfd 31, 184(1)
  0146718  std 31, 176(1)
  014671c  ori 31, 3, 0
  0146720  lis 4, 20
  0146724  li 3, 0
  0146728  li 5, 16
  014672c  std 29, 160(1)
  0146730  std 28, 152(1)
  0146734  li 7, 4
  0146738  lwz 29, 32(31)
  014673c  std 30, 168(1)
  0146740  addi 28, 4, 26368
  0146744  lwz 30, 36(31)
  0146748  li 4, 6
  014674c  li 6, 1
  0146750  sth 3, 112(1)
  0146754  sth 5, 128(1)
  0146758  sth 7, 116(1)
  014675c  srawi 5, 29, 1
  0146760  sth 4, 122(1)
  0146764  sth 6, 130(1)
  0146768  addze 5, 5
  014676c  addic 4, 29, -4
  0146770  sth 3, 132(1)
  0146774  sth 3, 134(1)
  0146778  sth 30, 114(1)
  014677c  sth 4, 118(1)
  0146780  sth 5, 120(1)
  0146784  sth 29, 124(1)
  0146788  std 27, 144(1)
  014678c  std 26, 136(1)
  0146790  sth 30, 126(1)
  0146794  bl 0x6d704
  0146798  nop
  014679c  lis 3, 151
  01467a0  lfs 31, 0(28)
  01467a4  lwz 3, -25484(3)
  01467a8  cmpwi 3, 3
  01467ac  bt 1, 0x1467bc
  01467b0  cmpwi 3, -1
  01467b4  bf 1, 0x1467e8
  01467b8  b 0x1467d8
  01467bc  lis 4, 20
  01467c0  cmpwi 3, 4
  01467c4  addi 4, 4, 26368
  01467c8  lfs 1, 4(4)
  01467cc  bf 1, 0x1467dc
  01467d0  cmpwi 3, 5
  01467d4  bf 1, 0x1467e4
  01467d8  b 0x1467e8
  01467dc  fmr 31, 1
  01467e0  b 0x1467e8
  01467e4  fmr 31, 1
  01467e8  li 6, 0
  01467ec  li 3, 1
  01467f0  li 28, 22
  01467f4  li 4, 5
  01467f8  ori 27, 29, 0
  01467fc  li 5, 4
  0146800  ori 7, 6, 0
  0146804  ori 8, 6, 0
  0146808  ori 9, 6, 0
  014680c  ori 10, 3, 0
  0146810  bl 0x502f7c
  0146814  nop
  0146818  ori 4, 3, 0
  014681c  ori 3, 28, 0
  0146820  bl 0x174f80
  0146824  nop
  0146828  lis 4, -32513
  014682c  li 3, 20333
  0146830  ori 4, 4, 43144
  0146834  clrldi 29, 4, 32
  0146838  bl 0x7b740
  014683c  nop
  0146840  li 28, -1
  0146844  ori 5, 3, 0
  0146848  addic 3, 1, 112
  014684c  ori 4, 29, 0
  0146850  ori 6, 28, 0
  0146854  bl 0x6a510
  0146858  nop
  014685c  srawi 4, 27, 1
  0146860  li 3, 20287
  0146864  addze 4, 4
  0146868  addic 5, 30, -64
  014686c  extsw 27, 4
  0146870  extsw 26, 5
  0146874  bl 0x7b740
  0146878  nop
  014687c  ori 6, 3, 0
  0146880  fmr 1, 31
  0146884  ori 3, 27, 0
  0146888  ori 4, 26, 0
  014688c  ori 5, 29, 0
  0146890  ori 7, 28, 0
  0146894  bl 0x70680
  0146898  nop
  014689c  li 3, 21067
  01468a0  bl 0x7b740
  01468a4  nop
  01468a8  ori 4, 28, 0
  01468ac  bl 0x6cde8
  01468b0  nop
  01468b4  ori 27, 3, 0
  01468b8  li 3, 21071
  01468bc  bl 0x7b740
  01468c0  nop
  01468c4  ori 4, 28, 0
  01468c8  bl 0x6cde8
  01468cc  nop
  01468d0  cmpw 27, 3
  01468d4  bf 1, 0x1468dc
  01468d8  ori 3, 27, 0
  01468dc  addic 5, 30, -40
  01468e0  ori 4, 3, 0
  01468e4  extsw 27, 5
  01468e8  lwz 5, 32(31)
  01468ec  li 3, 21067
  01468f0  subc 4, 5, 4
  01468f4  srawi 31, 4, 1
  01468f8  bl 0x7b740
  01468fc  nop
  0146900  ori 6, 3, 0
  0146904  ori 3, 31, 0
  0146908  ori 4, 27, 0
  014690c  ori 5, 29, 0
  0146910  ori 7, 28, 0
  0146914  bl 0x6cc0c
  0146918  nop
  014691c  addic 4, 30, -20
  0146920  li 3, 21071
  0146924  extsw 30, 4
  0146928  bl 0x7b740
  014692c  nop
  0146930  ori 6, 3, 0
  0146934  ori 3, 31, 0
  0146938  ori 4, 30, 0
  014693c  ori 5, 29, 0
  0146940  ori 7, 28, 0
  0146944  bl 0x6cc0c
  0146948  nop
  014694c  bl 0x6d708
  0146950  nop
  0146954  li 3, 2
  0146958  ld 0, 208(1)
  014695c  mtlr 0
  0146960  lfd 31, 184(1)
  0146964  ld 26, 136(1)
  0146968  ld 27, 144(1)
  014696c  ld 28, 152(1)
  0146970  ld 29, 160(1)
  0146974  ld 30, 168(1)
  0146978  ld 31, 176(1)
  014697c  addi 1, 1, 192
  0146980  blr

GoldBoltWidget_SpawnMoby:   # 0x146984, 0x128 bytes
  0146984  stdu 1, -144(1)
  0146988  mflr 0
  014698c  std 0, 160(1)
  0146990  std 30, 128(1)
  0146994  lis 4, 163
  0146998  ori 30, 3, 0
  014699c  std 31, 136(1)
  01469a0  addic 3, 4, 21696
  01469a4  li 31, 0
  01469a8  lbz 3, 1134(3)
  01469ac  std 29, 120(1)
  01469b0  cmpwi 3, 255
  01469b4  bf 2, 0x1469c0
  01469b8  ori 29, 31, 0
  01469bc  b 0x146a1c
  01469c0  li 3, 1134
  01469c4  bl 0xefa28
  01469c8  nop
  01469cc  ori 29, 3, 0
  01469d0  cmpwi 29, 0
  01469d4  bt 2, 0x146a1c
  01469d8  li 4, 255
  01469dc  li 5, 1
  01469e0  ori 3, 29, 0
  01469e4  stb 4, 48(29)
  01469e8  sth 4, 50(29)
  01469ec  stb 5, 49(29)
  01469f0  stb 31, 32(29)
  01469f4  bl 0xf31a8
  01469f8  nop
  01469fc  lis 4, 32
  0146a00  li 5, 14
  0146a04  ori 7, 31, 0
  0146a08  ori 4, 4, 8224
  0146a0c  ori 3, 29, 0
  0146a10  ori 6, 5, 0
  0146a14  bl 0xf1ea0
  0146a18  nop
  0146a1c  lis 3, 115
  0146a20  cmpwi 29, 0
  0146a24  addic 3, 3, 2912
  0146a28  bt 2, 0x146a8c
  0146a2c  lis 4, 149
  0146a30  stw 29, 68(30)
  0146a34  sth 31, 52(29)
  0146a38  addic 4, 4, 5056
  0146a3c  lis 5, -16397
  0146a40  lis 6, 112
  0146a44  ori 5, 5, 13107
  0146a48  lfs 1, 320(4)
  0146a4c  lfs 2, 0(3)
  0146a50  addic 6, 6, 30528
  0146a54  lwz 7, 120(29)
  0146a58  fadds 1, 1, 2
  0146a5c  stfs 1, 16(29)
  0146a60  lfs 1, 324(4)
  0146a64  lfs 2, 4(3)
  0146a68  fadds 1, 1, 2
  0146a6c  stfs 1, 20(29)
  0146a70  lfs 1, 328(4)
  0146a74  lfs 2, 8(3)
  0146a78  stw 5, 68(29)
  0146a7c  fsubs 1, 1, 2
  0146a80  stw 6, 116(29)
  0146a84  stfs 1, 24(29)
  0146a88  stw 30, 0(7)
  0146a8c  ori 3, 31, 0
  0146a90  ld 0, 160(1)
  0146a94  mtlr 0
  0146a98  ld 29, 120(1)
  0146a9c  ld 30, 128(1)
  0146aa0  ld 31, 136(1)
  0146aa4  addi 1, 1, 144
  0146aa8  blr

GoldBoltWidget_DeleteMoby:   # 0x146aac, 0x68 bytes
  0146aac  stdu 1, -128(1)
  0146ab0  mflr 0
  0146ab4  std 0, 144(1)
  0146ab8  std 30, 112(1)
  0146abc  std 31, 120(1)
  0146ac0  ori 30, 3, 0
  0146ac4  lwz 31, 68(30)
  0146ac8  cmpwi 31, 0
  0146acc  bt 2, 0x146af4
  0146ad0  ori 3, 31, 0
  0146ad4  bl 0xefb38
  0146ad8  nop
  0146adc  lis 3, 161
  0146ae0  lwz 3, 1808(3)
  0146ae4  extsw 3, 3
  0146ae8  std 3, 56(31)
  0146aec  li 31, 0
  0146af0  b 0x146af4
  0146af4  li 3, 0
  0146af8  stw 31, 68(30)
  0146afc  ld 0, 144(1)
  0146b00  mtlr 0
  0146b04  ld 30, 112(1)
  0146b08  ld 31, 120(1)
  0146b0c  addi 1, 1, 128
  0146b10  blr

GoldBoltWidget_Update:   # 0x146b14, 0x530 bytes
  0146b14  stdu 1, -368(1)
  0146b18  mflr 0
  0146b1c  std 0, 384(1)
  0146b20  std 31, 360(1)
  0146b24  ori 31, 3, 0
  0146b28  lwz 3, 68(31)
  0146b2c  std 30, 352(1)
  0146b30  std 29, 344(1)
  0146b34  std 28, 336(1)
  0146b38  std 27, 328(1)
  0146b3c  std 26, 320(1)
  0146b40  std 25, 312(1)
  0146b44  std 24, 304(1)
  0146b48  std 23, 296(1)
  0146b4c  std 22, 288(1)
  0146b50  std 21, 280(1)
  0146b54  std 20, 272(1)
  0146b58  cmpwi 3, 0
  0146b5c  bt 2, 0x146b6c
  0146b60  li 4, 1
  0146b64  bl 0xf1934
  0146b68  nop
  0146b6c  li 30, 0
  0146b70  ori 3, 30, 0
  0146b74  bl 0x6d704
  0146b78  nop
  0146b7c  lis 4, 21845
  0146b80  lwz 3, 32(31)
  0146b84  sth 30, 112(1)
  0146b88  li 5, 16
  0146b8c  ori 4, 4, 21846
  0146b90  sth 30, 122(1)
  0146b94  mulhw 3, 4, 3
  0146b98  li 4, 8
  0146b9c  srwi 6, 3, 31
  0146ba0  li 7, 5
  0146ba4  addc 6, 3, 6
  0146ba8  sth 4, 116(1)
  0146bac  sth 30, 124(1)
  0146bb0  extsh 3, 4
  0146bb4  sth 30, 126(1)
  0146bb8  extsh 4, 6
  0146bbc  sth 5, 128(1)
  0146bc0  sth 7, 130(1)
  0146bc4  addc 3, 3, 4
  0146bc8  lwz 5, 36(31)
  0146bcc  sth 30, 132(1)
  0146bd0  addic 31, 1, 136
  0146bd4  srawi 4, 3, 1
  0146bd8  sth 30, 134(1)
  0146bdc  sth 5, 114(1)
  0146be0  li 3, 20302
  0146be4  sth 6, 118(1)
  0146be8  sth 4, 120(1)
  0146bec  bl 0x7b740
  0146bf0  nop
  0146bf4  ori 4, 3, 0
  0146bf8  ori 3, 31, 0
  0146bfc  bl 0x5cc8d8
  0146c00  nop
  0146c04  lis 3, 151
  0146c08  lwz 3, -25484(3)
  0146c0c  cmpwi 3, 3
  0146c10  bf 2, 0x146c80
  0146c14  ori 3, 31, 0
  0146c18  li 4, 45
  0146c1c  bl 0x5cc578
  0146c20  nop
  0146c24  ori 29, 3, 0
  0146c28  cmpwi 29, 0
  0146c2c  bt 2, 0x146c80
  0146c30  ori 3, 31, 0
  0146c34  bl 0x5c8510
  0146c38  nop
  0146c3c  ori 4, 3, 0
  0146c40  addc 3, 1, 4
  0146c44  addic 5, 3, 136
  0146c48  cmplw 5, 29
  0146c4c  bf 1, 0x146c70
  0146c50  clrldi 5, 3, 32
  0146c54  addic 3, 3, -1
  0146c58  addic 4, 4, -1
  0146c5c  addic 6, 3, 136
  0146c60  lbz 7, 136(5)
  0146c64  cmplw 6, 29
  0146c68  stb 7, 137(5)
  0146c6c  bt 1, 0x146c50
  0146c70  addc 3, 1, 4
  0146c74  li 4, 32
  0146c78  clrldi 3, 3, 32
  0146c7c  stb 4, 137(3)
  0146c80  lis 3, -32768
  0146c84  addic 28, 1, 112
  0146c88  ori 3, 3, 49344
  0146c8c  li 29, -1
  0146c90  clrldi 27, 3, 32
  0146c94  ori 3, 28, 0
  0146c98  ori 4, 27, 0
  0146c9c  ori 5, 31, 0
  0146ca0  ori 6, 29, 0
  0146ca4  bl 0x6a510
  0146ca8  nop
  0146cac  lhz 3, 130(1)
  0146cb0  li 4, 43
  0146cb4  li 5, 110
  0146cb8  xori 6, 3, 4
  0146cbc  ori 3, 28, 0
  0146cc0  sth 4, 120(1)
  0146cc4  sth 5, 122(1)
  0146cc8  sth 6, 130(1)
  0146ccc  ori 4, 27, 0
  0146cd0  ori 5, 31, 0
  0146cd4  ori 6, 29, 0
  0146cd8  bl 0x6a510
  0146cdc  nop
  0146ce0  lis 28, 115
  0146ce4  lis 3, -32768
  0146ce8  lis 27, 115
  0146cec  ori 4, 3, 0
  0146cf0  li 26, 20303
  0146cf4  lwz 3, -26548(28)
  0146cf8  clrldi 4, 4, 32
  0146cfc  addic 3, 3, 200
  0146d00  lwz 5, -26544(27)
  0146d04  ori 23, 4, 0
  0146d08  extsw 25, 3
  0146d0c  addic 5, 5, 89
  0146d10  ori 3, 26, 0
  0146d14  extsw 24, 5
  0146d18  bl 0x7b740
  0146d1c  nop
  0146d20  ori 6, 3, 0
  0146d24  ori 3, 25, 0
  0146d28  ori 4, 24, 0
  0146d2c  ori 5, 23, 0
  0146d30  ori 7, 29, 0
  0146d34  bl 0x70130
  0146d38  nop
  0146d3c  lwz 3, -26548(28)
  0146d40  lwz 4, -26544(27)
  0146d44  li 25, 20304
  0146d48  addic 5, 3, 200
  0146d4c  ori 3, 25, 0
  0146d50  addic 4, 4, 114
  0146d54  extsw 24, 5
  0146d58  extsw 22, 4
  0146d5c  bl 0x7b740
  0146d60  nop
  0146d64  ori 6, 3, 0
  0146d68  ori 3, 24, 0
  0146d6c  ori 4, 22, 0
  0146d70  ori 5, 23, 0
  0146d74  ori 7, 29, 0
  0146d78  bl 0x70130
  0146d7c  nop
  0146d80  lwz 3, -26548(28)
  0146d84  li 24, 20305
  0146d88  lwz 4, -26544(27)
  0146d8c  addic 5, 3, 200
  0146d90  ori 3, 24, 0
  0146d94  addic 4, 4, 144
  0146d98  extsw 22, 5
  0146d9c  extsw 21, 4
  0146da0  bl 0x7b740
  0146da4  nop
  0146da8  ori 6, 3, 0
  0146dac  ori 3, 22, 0
  0146db0  ori 4, 21, 0
  0146db4  ori 5, 23, 0
  0146db8  ori 7, 29, 0
  0146dbc  bl 0x70130
  0146dc0  nop
  0146dc4  lis 3, -32513
  0146dc8  li 22, 200
  0146dcc  ori 4, 3, 43144
  0146dd0  ori 3, 26, 0
  0146dd4  clrldi 4, 4, 32
  0146dd8  li 21, 89
  0146ddc  ori 26, 4, 0
  0146de0  bl 0x7b740
  0146de4  nop
  0146de8  ori 6, 3, 0
  0146dec  ori 3, 22, 0
  0146df0  ori 4, 21, 0
  0146df4  ori 5, 26, 0
  0146df8  ori 7, 29, 0
  0146dfc  bl 0x70130
  0146e00  nop
  0146e04  ori 3, 25, 0
  0146e08  li 20, 114
  0146e0c  bl 0x7b740
  0146e10  nop
  0146e14  ori 6, 3, 0
  0146e18  ori 3, 22, 0
  0146e1c  ori 4, 20, 0
  0146e20  ori 5, 26, 0
  0146e24  ori 7, 29, 0
  0146e28  bl 0x70130
  0146e2c  nop
  0146e30  ori 3, 24, 0
  0146e34  li 25, 144
  0146e38  bl 0x7b740
  0146e3c  nop
  0146e40  ori 6, 3, 0
  0146e44  ori 3, 22, 0
  0146e48  ori 4, 25, 0
  0146e4c  ori 5, 26, 0
  0146e50  ori 7, 29, 0
  0146e54  bl 0x70130
  0146e58  nop
  0146e5c  lis 3, 101
  0146e60  addic 24, 3, 13752
  0146e64  bl 0x11b1b4
  0146e68  nop
  0146e6c  ori 5, 3, 0
  0146e70  ori 3, 31, 0
  0146e74  ori 4, 24, 0
  0146e78  bl 0x5cd2a8
  0146e7c  nop
  0146e80  lwz 3, -26548(28)
  0146e84  ori 5, 23, 0
  0146e88  lwz 4, -26544(27)
  0146e8c  ori 7, 29, 0
  0146e90  addic 3, 3, 240
  0146e94  addic 4, 4, 89
  0146e98  extsw 3, 3
  0146e9c  extsw 4, 4
  0146ea0  ori 6, 31, 0
  0146ea4  bl 0x703c8
  0146ea8  nop
  0146eac  li 22, 240
  0146eb0  ori 5, 26, 0
  0146eb4  ori 3, 22, 0
  0146eb8  ori 4, 21, 0
  0146ebc  ori 6, 31, 0
  0146ec0  ori 7, 29, 0
  0146ec4  bl 0x703c8
  0146ec8  nop
  0146ecc  bl 0x11b124
  0146ed0  nop
  0146ed4  sldi 5, 3, 2
  0146ed8  ori 3, 31, 0
  0146edc  extsw 5, 5
  0146ee0  ori 4, 24, 0
  0146ee4  bl 0x5cd2a8
  0146ee8  nop
  0146eec  lwz 3, -26548(28)
  0146ef0  lwz 4, -26544(27)
  0146ef4  ori 5, 23, 0
  0146ef8  addic 3, 3, 240
  0146efc  addic 4, 4, 114
  0146f00  extsw 3, 3
  0146f04  ori 7, 29, 0
  0146f08  extsw 4, 4
  0146f0c  ori 6, 31, 0
  0146f10  bl 0x703c8
  0146f14  nop
  0146f18  ori 3, 22, 0
  0146f1c  ori 5, 26, 0
  0146f20  ori 4, 20, 0
  0146f24  ori 6, 31, 0
  0146f28  ori 7, 29, 0
  0146f2c  bl 0x703c8
  0146f30  nop
  0146f34  bl 0x11b2c4
  0146f38  nop
  0146f3c  ori 5, 3, 0
  0146f40  ori 3, 31, 0
  0146f44  ori 4, 24, 0
  0146f48  bl 0x5cd2a8
  0146f4c  nop
  0146f50  lwz 3, -26548(28)
  0146f54  ori 5, 23, 0
  0146f58  lwz 4, -26544(27)
  0146f5c  ori 6, 31, 0
  0146f60  addic 3, 3, 240
  0146f64  addic 4, 4, 144
  0146f68  extsw 3, 3
  0146f6c  extsw 4, 4
  0146f70  ori 7, 29, 0
  0146f74  bl 0x703c8
  0146f78  nop
  0146f7c  ori 3, 22, 0
  0146f80  ori 4, 25, 0
  0146f84  ori 5, 26, 0
  0146f88  ori 6, 31, 0
  0146f8c  ori 7, 29, 0
  0146f90  bl 0x703c8
  0146f94  nop
  0146f98  lwz 3, -26548(28)
  0146f9c  ori 7, 23, 0
  0146fa0  lwz 4, -26544(27)
  0146fa4  ori 8, 30, 0
  0146fa8  addic 5, 3, 242
  0146fac  addic 3, 3, 208
  0146fb0  addic 6, 4, 140
  0146fb4  addic 4, 4, 137
  0146fb8  extsw 3, 3
  0146fbc  extsw 5, 5
  0146fc0  extsw 4, 4
  0146fc4  extsw 6, 6
  0146fc8  bl 0xca72c
  0146fcc  nop
  0146fd0  lis 3, -32640
  0146fd4  ori 8, 30, 0
  0146fd8  ori 7, 3, 21572
  0146fdc  li 3, 208
  0146fe0  li 4, 137
  0146fe4  li 5, 242
  0146fe8  li 6, 140
  0146fec  clrldi 7, 7, 32
  0146ff0  bl 0xca72c
  0146ff4  nop
  0146ff8  bl 0x6d708
  0146ffc  nop
  0147000  li 3, 8
  0147004  ld 0, 384(1)
  0147008  mtlr 0
  014700c  ld 20, 272(1)
  0147010  ld 21, 280(1)
  0147014  ld 22, 288(1)
  0147018  ld 23, 296(1)
  014701c  ld 24, 304(1)
  0147020  ld 25, 312(1)
  0147024  ld 26, 320(1)
  0147028  ld 27, 328(1)
  014702c  ld 28, 336(1)
  0147030  ld 29, 344(1)
  0147034  ld 30, 352(1)
  0147038  ld 31, 360(1)
  014703c  addi 1, 1, 368
  0147040  blr

Update_FoundGBsShipMenu:   # 0x147044, 0x2a8 bytes
  0147044  stdu 1, -432(1)
  0147048  mflr 0
  014704c  std 0, 448(1)
  0147050  std 31, 424(1)
  0147054  lis 4, 165
  0147058  ori 31, 3, 0
  014705c  lbz 4, 13552(4)
  0147060  std 30, 416(1)
  0147064  std 29, 408(1)
  0147068  std 28, 400(1)
  014706c  std 27, 392(1)
  0147070  std 26, 384(1)
  0147074  std 25, 376(1)
  0147078  cmpwi 4, 0
  014707c  bf 2, 0x1470b0
  0147080  lis 5, 144
  0147084  li 4, 0
  0147088  lwz 5, -23196(5)
  014708c  lwz 5, 12(5)
  0147090  cmpwi 5, 0
  0147094  bf 2, 0x14709c
  0147098  li 4, 1
  014709c  lis 5, 165
  01470a0  lis 6, 165
  01470a4  li 7, 1
  01470a8  stb 4, 13560(5)
  01470ac  stb 7, 13552(6)
  01470b0  lis 4, 165
  01470b4  lbz 4, 13560(4)
  01470b8  cmpwi 4, 0
  01470bc  bt 2, 0x1470cc
  01470c0  lis 4, 115
  01470c4  addic 4, 4, 2928
  01470c8  b 0x1470d4
  01470cc  lis 4, 115
  01470d0  addic 4, 4, 2940
  01470d4  lis 5, 149
  01470d8  lfs 1, 0(4)
  01470dc  lis 6, 115
  01470e0  addic 5, 5, 5056
  01470e4  lwz 3, 68(3)
  01470e8  cmpwi 3, 0
  01470ec  lfs 2, 320(5)
  01470f0  fadds 1, 2, 1
  01470f4  stfs 1, 16(3)
  01470f8  lfs 1, 324(5)
  01470fc  lfs 2, 2924(6)
  0147100  fadds 1, 1, 2
  0147104  lfs 2, 4(4)
  0147108  fadds 1, 1, 2
  014710c  stfs 1, 20(3)
  0147110  lfs 1, 328(5)
  0147114  lfs 2, 8(4)
  0147118  fsubs 1, 1, 2
  014711c  stfs 1, 24(3)
  0147120  bt 2, 0x147130
  0147124  li 4, 1
  0147128  bl 0xf1934
  014712c  nop
  0147130  li 29, 0
  0147134  ori 3, 29, 0
  0147138  bl 0x6d704
  014713c  nop
  0147140  ori 3, 29, 0
  0147144  lis 30, 162
  0147148  lis 4, 161
  014714c  addic 30, 30, 1216
  0147150  addic 4, 4, -13772
  0147154  addc 4, 3, 4
  0147158  lwz 5, 548(30)
  014715c  clrldi 4, 4, 32
  0147160  slwi 5, 5, 2
  0147164  extsw 5, 5
  0147168  lbzx 4, 4, 5
  014716c  cmpwi 4, 0
  0147170  bt 2, 0x14717c
  0147174  addic 29, 29, 1
  0147178  extsw 29, 29
  014717c  addic 3, 3, 1
  0147180  cmpwi 3, 4
  0147184  bt 0, 0x147144
  0147188  lis 3, 151
  014718c  li 28, 16
  0147190  lwz 3, -25484(3)
  0147194  cmpwi 3, 2
  0147198  cmpwi 1, 3, 4
  014719c  cmpwi 6, 3, 3
  01471a0  cmpwi 7, 3, 1
  01471a4  bt 1, 0x1471b0
  01471a8  bf 29, 0x1471d0
  01471ac  b 0x1471c4
  01471b0  bf 25, 0x1471bc
  01471b4  bf 5, 0x1471cc
  01471b8  b 0x1471d0
  01471bc  li 28, 5
  01471c0  b 0x1471d0
  01471c4  li 28, 10
  01471c8  b 0x1471d0
  01471cc  li 28, -20
  01471d0  lis 3, 101
  01471d4  addic 27, 1, 112
  01471d8  addic 26, 3, 13756
  01471dc  li 3, 20303
  01471e0  bl 0x7b740
  01471e4  nop
  01471e8  ori 25, 3, 0
  01471ec  li 3, 20307
  01471f0  bl 0x7b740
  01471f4  nop
  01471f8  lwz 4, 548(30)
  01471fc  ori 7, 3, 0
  0147200  lis 5, 116
  0147204  slwi 3, 4, 2
  0147208  addic 8, 5, -31224
  014720c  extsw 9, 3
  0147210  ori 3, 27, 0
  0147214  ori 4, 26, 0
  0147218  ori 5, 25, 0
  014721c  ori 6, 29, 0
  0147220  lwzx 8, 8, 9
  0147224  extsw 8, 8
  0147228  bl 0x5cd2a8
  014722c  nop
  0147230  lis 3, 150
  0147234  lwz 4, 32(31)
  0147238  li 29, -1
  014723c  addic 30, 3, 27392
  0147240  subc 3, 4, 28
  0147244  lis 4, -32768
  0147248  extsw 3, 3
  014724c  ori 8, 4, 0
  0147250  lwz 5, 4(30)
  0147254  ori 6, 27, 0
  0147258  ori 7, 29, 0
  014725c  srawi 5, 5, 1
  0147260  addic 5, 5, -8
  0147264  extsw 4, 5
  0147268  clrldi 5, 8, 32
  014726c  bl 0x70130
  0147270  nop
  0147274  lis 4, -32513
  0147278  lwz 3, 32(31)
  014727c  ori 7, 29, 0
  0147280  ori 4, 4, 43144
  0147284  lwz 5, 4(30)
  0147288  subc 3, 3, 28
  014728c  clrldi 4, 4, 32
  0147290  srawi 6, 5, 1
  0147294  addic 3, 3, -1
  0147298  ori 5, 4, 0
  014729c  addic 4, 6, -9
  01472a0  extsw 3, 3
  01472a4  ori 6, 27, 0
  01472a8  extsw 4, 4
  01472ac  bl 0x70130
  01472b0  nop
  01472b4  bl 0x6d708
  01472b8  nop
  01472bc  li 3, 8
  01472c0  ld 0, 448(1)
  01472c4  mtlr 0
  01472c8  ld 25, 376(1)
  01472cc  ld 26, 384(1)
  01472d0  ld 27, 392(1)
  01472d4  ld 28, 400(1)
  01472d8  ld 29, 408(1)
  01472dc  ld 30, 416(1)
  01472e0  ld 31, 424(1)
  01472e4  addi 1, 1, 432
  01472e8  blr

GoldBolt_SpinMobyUpdate:   # 0x1472f0, 0x44 bytes
  01472f0  stdu 1, -128(1)
  01472f4  mflr 0
  01472f8  std 0, 144(1)
  01472fc  std 31, 120(1)
  0147300  ori 31, 3, 0
  0147304  lis 4, 20
  0147308  addi 3, 4, 29420
  014730c  lfs 1, 64(31)
  0147310  lfs 2, 0(3)
  0147314  bl 0x502578
  0147318  nop
  014731c  stfs 1, 64(31)
  0147320  ld 0, 144(1)
  0147324  mtlr 0
  0147328  ld 31, 120(1)
  014732c  addi 1, 1, 128
  0147330  blr

ItemInfo_DrawCost:   # 0x147334, 0x2fc bytes
  0147334  stdu 1, -288(1)
  0147338  mflr 0
  014733c  std 0, 304(1)
  0147340  lis 4, 165
  0147344  addic 4, 4, 11184
  0147348  std 31, 280(1)
  014734c  lis 5, 151
  0147350  ori 31, 3, 0
  0147354  std 27, 248(1)
  0147358  addic 5, 5, -16064
  014735c  lwz 4, 4(4)
  0147360  std 30, 272(1)
  0147364  addic 27, 1, 136
  0147368  ori 30, 27, 0
  014736c  lwz 4, 64(4)
  0147370  lwz 6, 60(4)
  0147374  lwz 4, 72(4)
  0147378  sldi 7, 6, 3
  014737c  addic 4, 4, 6
  0147380  addc 7, 6, 7
  0147384  addc 6, 6, 7
  0147388  addc 4, 4, 6
  014738c  std 29, 264(1)
  0147390  clrldi 4, 4, 32
  0147394  lhz 29, 0(4)
  0147398  extsh 29, 29
  014739c  lbzx 3, 5, 29
  01473a0  std 28, 256(1)
  01473a4  std 26, 240(1)
  01473a8  std 25, 232(1)
  01473ac  std 24, 224(1)
  01473b0  std 23, 216(1)
  01473b4  cmpwi 3, 0
  01473b8  bf 2, 0x1473c4
  01473bc  li 3, 0
  01473c0  b 0x1475fc
  01473c4  lis 3, 151
  01473c8  sldi 5, 29, 3
  01473cc  sldi 4, 29, 2
  01473d0  addic 3, 3, -16212
  01473d4  lis 6, 115
  01473d8  addc 7, 5, 5
  01473dc  addic 29, 6, 32062
  01473e0  addc 25, 5, 7
  01473e4  li 23, 0
  01473e8  lwzx 28, 3, 4
  01473ec  li 26, 1
  01473f0  ori 3, 23, 0
  01473f4  li 24, 3
  01473f8  ori 4, 26, 0
  01473fc  extsw 28, 28
  0147400  lhzx 29, 29, 25
  0147404  ori 5, 23, 0
  0147408  ori 6, 26, 0
  014740c  ori 7, 23, 0
  0147410  bl 0x502ea8
  0147414  nop
  0147418  ori 4, 3, 0
  014741c  ori 3, 24, 0
  0147420  bl 0x174f80
  0147424  nop
  0147428  ori 3, 26, 0
  014742c  li 24, 22
  0147430  li 4, 5
  0147434  ori 9, 23, 0
  0147438  ori 10, 23, 0
  014743c  ori 5, 23, 0
  0147440  ori 6, 23, 0
  0147444  ori 7, 23, 0
  0147448  ori 8, 23, 0
  014744c  bl 0x502f98
  0147450  nop
  0147454  ori 4, 3, 0
  0147458  ori 3, 24, 0
  014745c  bl 0x174f80
  0147460  nop
  0147464  lis 3, 115
  0147468  addic 3, 3, 32056
  014746c  lhzx 3, 3, 25
  0147470  cmpwi 3, 0
  0147474  bf 2, 0x147498
  0147478  li 3, 20306
  014747c  bl 0x7b740
  0147480  nop
  0147484  ori 4, 3, 0
  0147488  ori 3, 27, 0
  014748c  bl 0x5cd2a8
  0147490  nop
  0147494  b 0x147588
  0147498  cmpwi 28, 1000
  014749c  bf 0, 0x1474c4
  01474a0  lis 4, 101
  01474a4  ori 3, 27, 0
  01474a8  addic 4, 4, 13768
  01474ac  ori 5, 28, 0
  01474b0  bl 0x5cd2a8
  01474b4  nop
  01474b8  addc 27, 27, 3
  01474bc  clrldi 27, 27, 32
  01474c0  b 0x147518
  01474c4  lis 3, 4194
  01474c8  lis 6, 101
  01474cc  ori 3, 3, 19923
  01474d0  mulhw 4, 3, 28
  01474d4  mulhw 3, 3, 28
  01474d8  srawi 4, 4, 6
  01474dc  srawi 3, 3, 6
  01474e0  srwi 5, 4, 31
  01474e4  addc 4, 4, 5
  01474e8  mulli 7, 4, 1000
  01474ec  srwi 5, 3, 31
  01474f0  addic 4, 6, 13776
  01474f4  addc 5, 3, 5
  01474f8  ori 3, 27, 0
  01474fc  subc 6, 28, 7
  0147500  extsw 5, 5
  0147504  extsw 6, 6
  0147508  bl 0x5cd2a8
  014750c  nop
  0147510  addc 27, 27, 3
  0147514  clrldi 27, 27, 32
  0147518  cmpwi 29, 1000
  014751c  bf 0, 0x14753c
  0147520  lis 4, 101
  0147524  ori 3, 27, 0
  0147528  addic 4, 4, 13752
  014752c  ori 5, 29, 0
  0147530  bl 0x5cd2a8
  0147534  nop
  0147538  b 0x147588
  014753c  lis 3, 4194
  0147540  lis 6, 101
  0147544  ori 3, 3, 19923
  0147548  mulhw 4, 3, 29
  014754c  mulhw 3, 3, 29
  0147550  srawi 4, 4, 6
  0147554  srawi 3, 3, 6
  0147558  srwi 5, 4, 31
  014755c  addc 4, 4, 5
  0147560  mulli 7, 4, 1000
  0147564  srwi 5, 3, 31
  0147568  addic 4, 6, 13792
  014756c  addc 5, 3, 5
  0147570  subc 6, 29, 7
  0147574  ori 3, 27, 0
  0147578  extsw 5, 5
  014757c  extsw 6, 6
  0147580  bl 0x5cd2a8
  0147584  nop
  0147588  li 29, 0
  014758c  ori 3, 29, 0
  0147590  bl 0x6d704
  0147594  nop
  0147598  lwz 3, 36(31)
  014759c  lwz 4, 32(31)
  01475a0  li 5, 16
  01475a4  sth 29, 112(1)
  01475a8  srawi 6, 3, 1
  01475ac  sth 3, 114(1)
  01475b0  li 7, 3
  01475b4  srawi 3, 4, 1
  01475b8  sth 29, 116(1)
  01475bc  sth 4, 118(1)
  01475c0  lis 4, -32513
  01475c4  sth 6, 122(1)
  01475c8  ori 4, 4, 43144
  01475cc  sth 3, 120(1)
  01475d0  li 6, -1
  01475d4  addic 3, 1, 112
  01475d8  sth 5, 128(1)
  01475dc  clrldi 4, 4, 32
  01475e0  sth 7, 130(1)
  01475e4  ori 5, 30, 0
  01475e8  bl 0x6a510
  01475ec  nop
  01475f0  bl 0x6d708
  01475f4  nop
  01475f8  li 3, 2
  01475fc  ld 0, 304(1)
  0147600  mtlr 0
  0147604  ld 23, 216(1)
  0147608  ld 24, 224(1)
  014760c  ld 25, 232(1)
  0147610  ld 26, 240(1)
  0147614  ld 27, 248(1)
  0147618  ld 28, 256(1)
  014761c  ld 29, 264(1)
  0147620  ld 30, 272(1)
  0147624  ld 31, 280(1)
  0147628  addi 1, 1, 288
  014762c  blr

MapPage_Draw:   # 0x147630, 0xb4 bytes
  0147630  stdu 1, -144(1)
  0147634  mflr 0
  0147638  std 0, 160(1)
  014763c  std 29, 120(1)
  0147640  std 31, 136(1)
  0147644  li 29, 0
  0147648  li 31, 1
  014764c  std 30, 128(1)
  0147650  ori 3, 29, 0
  0147654  li 30, 3
  0147658  ori 4, 31, 0
  014765c  ori 6, 31, 0
  0147660  ori 5, 29, 0
  0147664  ori 7, 29, 0
  0147668  bl 0x502ea8
  014766c  nop
  0147670  ori 4, 3, 0
  0147674  ori 3, 30, 0
  0147678  bl 0x174f80
  014767c  nop
  0147680  ori 3, 31, 0
  0147684  li 30, 22
  0147688  li 4, 5
  014768c  ori 9, 29, 0
  0147690  ori 10, 29, 0
  0147694  ori 5, 29, 0
  0147698  ori 6, 29, 0
  014769c  ori 7, 29, 0
  01476a0  ori 8, 29, 0
  01476a4  bl 0x502f98
  01476a8  nop
  01476ac  ori 4, 3, 0
  01476b0  ori 3, 30, 0
  01476b4  bl 0x174f80
  01476b8  nop
  01476bc  bl 0xe2e10
  01476c0  nop
  01476c4  li 3, 8
  01476c8  ld 0, 160(1)
  01476cc  mtlr 0
  01476d0  ld 29, 120(1)
  01476d4  ld 30, 128(1)
  01476d8  ld 31, 136(1)
  01476dc  addi 1, 1, 144
  01476e0  blr

MapMenu_DrawOptions:   # 0x1476f0, 0x4c0 bytes
  01476f0  stdu 1, -208(1)
  01476f4  mflr 0
  01476f8  std 0, 224(1)
  01476fc  stfd 29, 184(1)
  0147700  stfd 30, 192(1)
  0147704  stfd 31, 200(1)
  0147708  std 29, 160(1)
  014770c  std 27, 144(1)
  0147710  lis 4, 20
  0147714  li 27, 0
  0147718  std 31, 176(1)
  014771c  ori 29, 3, 0
  0147720  std 28, 152(1)
  0147724  li 31, 1
  0147728  addi 28, 4, 30436
  014772c  std 30, 168(1)
  0147730  ori 3, 27, 0
  0147734  li 30, 3
  0147738  ori 4, 31, 0
  014773c  ori 6, 31, 0
  0147740  ori 5, 27, 0
  0147744  std 26, 136(1)
  0147748  ori 7, 27, 0
  014774c  bl 0x502ea8
  0147750  nop
  0147754  ori 4, 3, 0
  0147758  ori 3, 30, 0
  014775c  bl 0x174f80
  0147760  nop
  0147764  ori 3, 31, 0
  0147768  li 30, 22
  014776c  li 4, 5
  0147770  ori 6, 27, 0
  0147774  ori 9, 27, 0
  0147778  ori 10, 27, 0
  014777c  ori 5, 27, 0
  0147780  ori 7, 27, 0
  0147784  ori 8, 27, 0
  0147788  bl 0x502f98
  014778c  nop
  0147790  ori 4, 3, 0
  0147794  ori 3, 30, 0
  0147798  bl 0x174f80
  014779c  nop
  01477a0  ori 3, 27, 0
  01477a4  bl 0x6d704
  01477a8  nop
  01477ac  lis 3, 151
  01477b0  lfs 30, 0(28)
  01477b4  lwz 3, -25484(3)
  01477b8  cmpwi 3, 2
  01477bc  bt 1, 0x1477d4
  01477c0  cmpwi 3, -1
  01477c4  bf 1, 0x147830
  01477c8  cmpwi 3, 1
  01477cc  bf 1, 0x1477f0
  01477d0  b 0x1477f4
  01477d4  cmpwi 3, 4
  01477d8  bt 1, 0x1477e8
  01477dc  cmpwi 3, 3
  01477e0  bf 1, 0x147804
  01477e4  b 0x147814
  01477e8  cmpwi 3, 5
  01477ec  bf 1, 0x147824
  01477f0  b 0x147830
  01477f4  lis 3, 20
  01477f8  addi 3, 3, 30436
  01477fc  lfs 30, 4(3)
  0147800  b 0x147830
  0147804  lis 3, 20
  0147808  addi 3, 3, 30436
  014780c  lfs 30, 4(3)
  0147810  b 0x147830
  0147814  lis 3, 20
  0147818  addi 3, 3, 30436
  014781c  lfs 30, 4(3)
  0147820  b 0x147830
  0147824  lis 3, 20
  0147828  addi 3, 3, 30436
  014782c  lfs 30, 4(3)
  0147830  li 3, 20206
  0147834  bl 0x7b740
  0147838  nop
  014783c  li 31, -1
  0147840  fmr 1, 30
  0147844  ori 4, 31, 0
  0147848  bl 0x6fac8
  014784c  nop
  0147850  ori 30, 3, 0
  0147854  li 3, 20218
  0147858  bl 0x7b740
  014785c  nop
  0147860  fmr 1, 30
  0147864  ori 4, 31, 0
  0147868  bl 0x6fac8
  014786c  nop
  0147870  ori 28, 3, 0
  0147874  cmpw 30, 28
  0147878  bf 1, 0x147880
  014787c  ori 28, 30, 0
  0147880  lis 30, 151
  0147884  lwz 3, -25488(30)
  0147888  cmpwi 3, 0
  014788c  bt 2, 0x1478bc
  0147890  li 3, 20207
  0147894  bl 0x7b740
  0147898  nop
  014789c  fmr 1, 30
  01478a0  ori 4, 31, 0
  01478a4  bl 0x6fac8
  01478a8  nop
  01478ac  cmpw 28, 3
  01478b0  bf 1, 0x1478b8
  01478b4  ori 3, 28, 0
  01478b8  ori 28, 3, 0
  01478bc  li 3, 20219
  01478c0  bl 0x7b740
  01478c4  nop
  01478c8  fmr 1, 30
  01478cc  ori 4, 31, 0
  01478d0  bl 0x6fac8
  01478d4  nop
  01478d8  ori 27, 3, 0
  01478dc  cmpw 28, 27
  01478e0  bf 1, 0x1478e8
  01478e4  ori 27, 28, 0
  01478e8  li 3, 20220
  01478ec  bl 0x7b740
  01478f0  nop
  01478f4  fmr 1, 30
  01478f8  ori 4, 31, 0
  01478fc  bl 0x6fac8
  0147900  nop
  0147904  ori 28, 3, 0
  0147908  cmpw 27, 28
  014790c  bf 1, 0x147914
  0147910  ori 28, 27, 0
  0147914  li 3, 20192
  0147918  bl 0x7b740
  014791c  nop
  0147920  fmr 1, 30
  0147924  ori 4, 31, 0
  0147928  bl 0x6fac8
  014792c  nop
  0147930  cmpw 28, 3
  0147934  bf 1, 0x14793c
  0147938  ori 3, 28, 0
  014793c  lwz 4, 32(29)
  0147940  subc 28, 4, 3
  0147944  srawi 28, 28, 1
  0147948  cmpwi 28, 2
  014794c  bf 0, 0x147954
  0147950  li 28, 2
  0147954  lwz 4, -25488(30)
  0147958  lwz 3, 36(29)
  014795c  cmpwi 4, 0
  0147960  li 29, 6
  0147964  bt 2, 0x14796c
  0147968  li 29, 7
  014796c  ori 27, 28, 0
  0147970  divw 28, 3, 29
  0147974  ori 26, 30, 0
  0147978  li 29, -6
  014797c  bl 0x6ccb4
  0147980  nop
  0147984  extsw 3, 27
  0147988  addc 29, 29, 28
  014798c  extsw 4, 29
  0147990  std 3, 112(1)
  0147994  lis 3, -32513
  0147998  ori 5, 3, 43144
  014799c  li 3, 20206
  01479a0  clrldi 30, 5, 32
  01479a4  lfd 1, 112(1)
  01479a8  std 4, 112(1)
  01479ac  fcfid 31, 1
  01479b0  frsp 31, 31
  01479b4  lfd 1, 112(1)
  01479b8  fcfid 1, 1
  01479bc  frsp 29, 1
  01479c0  bl 0x7b740
  01479c4  nop
  01479c8  ori 6, 3, 0
  01479cc  fmr 1, 31
  01479d0  ori 5, 30, 0
  01479d4  fmr 2, 29
  01479d8  ori 7, 31, 0
  01479dc  fmr 3, 30
  01479e0  bl 0x6fe44
  01479e4  nop
  01479e8  lwz 3, -25488(26)
  01479ec  cmpwi 3, 0
  01479f0  bt 2, 0x147a38
  01479f4  addc 29, 29, 28
  01479f8  extsw 3, 29
  01479fc  std 3, 112(1)
  0147a00  li 3, 20207
  0147a04  lfd 1, 112(1)
  0147a08  fcfid 1, 1
  0147a0c  frsp 29, 1
  0147a10  bl 0x7b740
  0147a14  nop
  0147a18  ori 5, 30, 0
  0147a1c  fmr 1, 31
  0147a20  ori 6, 3, 0
  0147a24  fmr 2, 29
  0147a28  ori 7, 31, 0
  0147a2c  fmr 3, 30
  0147a30  bl 0x6fe44
  0147a34  nop
  0147a38  addc 29, 29, 28
  0147a3c  extsw 3, 29
  0147a40  std 3, 112(1)
  0147a44  li 3, 20218
  0147a48  lfd 1, 112(1)
  0147a4c  fcfid 1, 1
  0147a50  frsp 29, 1
  0147a54  bl 0x7b740
  0147a58  nop
  0147a5c  fmr 1, 31
  0147a60  ori 5, 30, 0
  0147a64  fmr 2, 29
  0147a68  ori 6, 3, 0
  0147a6c  fmr 3, 30
  0147a70  ori 7, 31, 0
  0147a74  bl 0x6fe44
  0147a78  nop
  0147a7c  addc 29, 29, 28
  0147a80  extsw 3, 29
  0147a84  std 3, 112(1)
  0147a88  li 3, 20219
  0147a8c  lfd 1, 112(1)
  0147a90  fcfid 1, 1
  0147a94  frsp 29, 1
  0147a98  bl 0x7b740
  0147a9c  nop
  0147aa0  ori 6, 3, 0
  0147aa4  ori 5, 30, 0
  0147aa8  fmr 1, 31
  0147aac  fmr 2, 29
  0147ab0  ori 7, 31, 0
  0147ab4  fmr 3, 30
  0147ab8  bl 0x6fe44
  0147abc  nop
  0147ac0  addc 29, 29, 28
  0147ac4  li 3, 20220
  0147ac8  bl 0x7b740
  0147acc  nop
  0147ad0  lis 4, 151
  0147ad4  fmr 1, 30
  0147ad8  lwz 4, -25484(4)
  0147adc  cmpwi 4, 2
  0147ae0  bf 2, 0x147af4
  0147ae4  lis 4, 20
  0147ae8  addi 4, 4, 30436
  0147aec  lfs 1, 8(4)
  0147af0  fsubs 1, 30, 1
  0147af4  extsw 4, 29
  0147af8  fmr 3, 1
  0147afc  ori 6, 3, 0
  0147b00  fmr 1, 31
  0147b04  ori 5, 30, 0
  0147b08  std 4, 112(1)
  0147b0c  ori 7, 31, 0
  0147b10  lfd 2, 112(1)
  0147b14  fcfid 2, 2
  0147b18  frsp 2, 2
  0147b1c  bl 0x6fe44
  0147b20  nop
  0147b24  addc 3, 29, 28
  0147b28  extsw 3, 3
  0147b2c  std 3, 112(1)
  0147b30  li 3, 20192
  0147b34  lfd 1, 112(1)
  0147b38  fcfid 1, 1
  0147b3c  frsp 29, 1
  0147b40  bl 0x7b740
  0147b44  nop
  0147b48  ori 6, 3, 0
  0147b4c  fmr 1, 31
  0147b50  ori 5, 30, 0
  0147b54  fmr 2, 29
  0147b58  ori 7, 31, 0
  0147b5c  fmr 3, 30
  0147b60  bl 0x6fe44
  0147b64  nop
  0147b68  bl 0x6c5dc
  0147b6c  nop
  0147b70  bl 0x6d708
  0147b74  nop
  0147b78  li 3, 2
  0147b7c  ld 0, 224(1)
  0147b80  mtlr 0
  0147b84  lfd 29, 184(1)
  0147b88  lfd 30, 192(1)
  0147b8c  lfd 31, 200(1)
  0147b90  ld 26, 136(1)
  0147b94  ld 27, 144(1)
  0147b98  ld 28, 152(1)
  0147b9c  ld 29, 160(1)
  0147ba0  ld 30, 168(1)
  0147ba4  ld 31, 176(1)
  0147ba8  addi 1, 1, 208
  0147bac  blr

ExitSelectPrompt_Draw:   # 0x147bb0, 0x138 bytes
  0147bb0  stdu 1, -144(1)
  0147bb4  mflr 0
  0147bb8  std 0, 160(1)
  0147bbc  std 29, 120(1)
  0147bc0  std 31, 136(1)
  0147bc4  li 29, 0
  0147bc8  li 31, 1
  0147bcc  std 30, 128(1)
  0147bd0  ori 3, 29, 0
  0147bd4  li 30, 3
  0147bd8  ori 4, 31, 0
  0147bdc  ori 6, 31, 0
  0147be0  ori 5, 29, 0
  0147be4  std 28, 112(1)
  0147be8  ori 7, 29, 0
  0147bec  bl 0x502ea8
  0147bf0  nop
  0147bf4  ori 4, 3, 0
  0147bf8  ori 3, 30, 0
  0147bfc  bl 0x174f80
  0147c00  nop
  0147c04  ori 3, 31, 0
  0147c08  li 30, 22
  0147c0c  li 4, 5
  0147c10  ori 9, 29, 0
  0147c14  ori 10, 29, 0
  0147c18  ori 5, 29, 0
  0147c1c  ori 6, 29, 0
  0147c20  ori 7, 29, 0
  0147c24  ori 8, 29, 0
  0147c28  bl 0x502f98
  0147c2c  nop
  0147c30  ori 4, 3, 0
  0147c34  ori 3, 30, 0
  0147c38  bl 0x174f80
  0147c3c  nop
  0147c40  ori 3, 29, 0
  0147c44  bl 0x6d704
  0147c48  nop
  0147c4c  lis 4, -32513
  0147c50  li 3, 20192
  0147c54  ori 4, 4, 43144
  0147c58  li 31, 4
  0147c5c  clrldi 4, 4, 32
  0147c60  li 30, 7
  0147c64  ori 29, 4, 0
  0147c68  bl 0x7b740
  0147c6c  nop
  0147c70  li 28, -1
  0147c74  ori 6, 3, 0
  0147c78  ori 3, 31, 0
  0147c7c  ori 4, 30, 0
  0147c80  ori 5, 29, 0
  0147c84  ori 7, 28, 0
  0147c88  bl 0x6cc0c
  0147c8c  nop
  0147c90  li 3, 20229
  0147c94  li 30, 23
  0147c98  bl 0x7b740
  0147c9c  nop
  0147ca0  ori 6, 3, 0
  0147ca4  ori 3, 31, 0
  0147ca8  ori 4, 30, 0
  0147cac  ori 5, 29, 0
  0147cb0  ori 7, 28, 0
  0147cb4  bl 0x6cc0c
  0147cb8  nop
  0147cbc  bl 0x6d708
  0147cc0  nop
  0147cc4  li 3, 2
  0147cc8  ld 0, 160(1)
  0147ccc  mtlr 0
  0147cd0  ld 28, 112(1)
  0147cd4  ld 29, 120(1)
  0147cd8  ld 30, 128(1)
  0147cdc  ld 31, 136(1)
  0147ce0  addi 1, 1, 144
  0147ce4  blr

DrawMissionsFrame:   # 0x147cf8, 0x3fc bytes
  0147cf8  stdu 1, -288(1)
  0147cfc  mflr 0
  0147d00  std 0, 304(1)
  0147d04  stfd 31, 280(1)
  0147d08  std 30, 264(1)
  0147d0c  std 17, 160(1)
  0147d10  lis 30, 144
  0147d14  std 31, 272(1)
  0147d18  li 17, 0
  0147d1c  std 19, 176(1)
  0147d20  ori 31, 3, 0
  0147d24  lis 19, 20
  0147d28  ori 3, 17, 0
  0147d2c  std 29, 256(1)
  0147d30  lwz 30, 11976(30)
  0147d34  ori 29, 31, 0
  0147d38  addi 19, 19, 31976
  0147d3c  std 28, 248(1)
  0147d40  std 27, 240(1)
  0147d44  std 26, 232(1)
  0147d48  std 25, 224(1)
  0147d4c  std 24, 216(1)
  0147d50  std 23, 208(1)
  0147d54  std 22, 200(1)
  0147d58  std 21, 192(1)
  0147d5c  std 20, 184(1)
  0147d60  std 18, 168(1)
  0147d64  std 16, 152(1)
  0147d68  stw 17, 112(1)
  0147d6c  bl 0x6d704
  0147d70  nop
  0147d74  ori 3, 30, 0
  0147d78  addic 4, 1, 112
  0147d7c  ori 5, 17, 0
  0147d80  ori 6, 17, 0
  0147d84  bl 0xea7a8
  0147d88  nop
  0147d8c  li 27, 1
  0147d90  ori 28, 3, 0
  0147d94  ori 3, 17, 0
  0147d98  ori 4, 27, 0
  0147d9c  li 26, 3
  0147da0  ori 5, 17, 0
  0147da4  ori 6, 27, 0
  0147da8  ori 7, 17, 0
  0147dac  bl 0x502ea8
  0147db0  nop
  0147db4  ori 4, 3, 0
  0147db8  ori 3, 26, 0
  0147dbc  bl 0x174f80
  0147dc0  nop
  0147dc4  ori 3, 27, 0
  0147dc8  li 16, 16
  0147dcc  li 26, 22
  0147dd0  li 4, 5
  0147dd4  ori 5, 16, 0
  0147dd8  ori 6, 17, 0
  0147ddc  ori 7, 17, 0
  0147de0  ori 8, 17, 0
  0147de4  ori 9, 17, 0
  0147de8  ori 10, 17, 0
  0147dec  bl 0x502f98
  0147df0  nop
  0147df4  ori 4, 3, 0
  0147df8  ori 3, 26, 0
  0147dfc  bl 0x174f80
  0147e00  nop
  0147e04  lis 4, -32513
  0147e08  li 3, 20313
  0147e0c  ori 4, 4, 43144
  0147e10  li 26, 4
  0147e14  clrldi 25, 4, 32
  0147e18  bl 0x7b740
  0147e1c  nop
  0147e20  li 24, -1
  0147e24  ori 6, 3, 0
  0147e28  ori 4, 26, 0
  0147e2c  ori 3, 26, 0
  0147e30  ori 5, 25, 0
  0147e34  ori 7, 24, 0
  0147e38  bl 0x6cc0c
  0147e3c  nop
  0147e40  sth 17, 116(1)
  0147e44  sth 17, 120(1)
  0147e48  ori 23, 17, 0
  0147e4c  sth 17, 124(1)
  0147e50  li 26, 24
  0147e54  sth 17, 126(1)
  0147e58  cmpw 28, 23
  0147e5c  sth 17, 128(1)
  0147e60  sth 17, 130(1)
  0147e64  sth 16, 132(1)
  0147e68  sth 17, 134(1)
  0147e6c  lwz 3, 36(31)
  0147e70  sth 17, 136(1)
  0147e74  sth 17, 138(1)
  0147e78  lwz 4, 32(31)
  0147e7c  sth 3, 118(1)
  0147e80  sth 4, 122(1)
  0147e84  bf 1, 0x14800c
  0147e88  ori 18, 17, 0
  0147e8c  lis 3, 162
  0147e90  addic 4, 29, 48
  0147e94  addic 3, 3, 1216
  0147e98  lis 20, -32513
  0147e9c  addic 22, 26, 10
  0147ea0  ori 20, 20, 43144
  0147ea4  lwz 3, 548(3)
  0147ea8  slwi 3, 3, 2
  0147eac  addc 3, 4, 3
  0147eb0  clrldi 3, 3, 32
  0147eb4  lwz 21, 0(3)
  0147eb8  subc 21, 21, 23
  0147ebc  cmpwi 21, 0
  0147ec0  bf 2, 0x147ed4
  0147ec4  lis 20, -32736
  0147ec8  ori 20, 20, 65535
  0147ecc  bl 0x6ccb4
  0147ed0  nop
  0147ed4  sth 16, 124(1)
  0147ed8  lwzx 3, 30, 18
  0147edc  sth 26, 126(1)
  0147ee0  extsw 3, 3
  0147ee4  bl 0x7b740
  0147ee8  nop
  0147eec  lis 4, 346
  0147ef0  lbz 4, -15535(4)
  0147ef4  cmpwi 4, 0
  0147ef8  bt 2, 0x147f04
  0147efc  lfs 1, 0(19)
  0147f00  b 0x147f08
  0147f04  lfs 1, 4(19)
  0147f08  ori 5, 3, 0
  0147f0c  addic 3, 1, 116
  0147f10  ori 4, 20, 0
  0147f14  ori 6, 24, 0
  0147f18  bl 0x7100c
  0147f1c  nop
  0147f20  cmpwi 21, 0
  0147f24  bf 2, 0x147f30
  0147f28  bl 0x6c5dc
  0147f2c  nop
  0147f30  lhz 3, 130(1)
  0147f34  lhz 4, 132(1)
  0147f38  extsh 21, 3
  0147f3c  extsh 3, 4
  0147f40  divw 21, 21, 3
  0147f44  cmpwi 21, 2
  0147f48  bf 2, 0x147f50
  0147f4c  addic 22, 26, 16
  0147f50  addic 22, 22, -5
  0147f54  slw 7, 27, 23
  0147f58  lwz 8, 112(1)
  0147f5c  extsw 22, 22
  0147f60  and 20, 8, 7
  0147f64  addic 6, 22, 10
  0147f68  ori 4, 22, 0
  0147f6c  li 5, 14
  0147f70  li 3, 4
  0147f74  extsw 6, 6
  0147f78  ori 7, 25, 0
  0147f7c  ori 8, 17, 0
  0147f80  bl 0xca72c
  0147f84  nop
  0147f88  lis 4, 115
  0147f8c  addic 5, 22, 1
  0147f90  addic 6, 22, 9
  0147f94  li 3, 5
  0147f98  ori 8, 17, 0
  0147f9c  lwz 7, -26560(4)
  0147fa0  extsw 6, 6
  0147fa4  extsw 4, 5
  0147fa8  li 5, 13
  0147fac  extsw 7, 7
  0147fb0  bl 0xca72c
  0147fb4  nop
  0147fb8  cmpwi 20, 0
  0147fbc  bt 2, 0x147ff4
  0147fc0  lis 3, 0
  0147fc4  ori 4, 27, 0
  0147fc8  ori 3, 3, 59806
  0147fcc  bl 0xca3e4
  0147fd0  nop
  0147fd4  addic 5, 22, -13
  0147fd8  li 6, 30
  0147fdc  li 4, -4
  0147fe0  extsw 5, 5
  0147fe4  li 8, 128
  0147fe8  ori 7, 6, 0
  0147fec  bl 0xcc0f0
  0147ff0  nop
  0147ff4  addic 23, 23, 1
  0147ff8  sldi 3, 21, 4
  0147ffc  cmpw 23, 28
  0148000  addic 18, 18, 4
  0148004  addc 26, 26, 3
  0148008  bt 0, 0x147e8c
  014800c  lwz 3, 112(1)
  0148010  rlwinm 3, 3, 0, 0, 0
  0148014  cmpwi 3, 0
  0148018  bt 2, 0x148094
  014801c  addic 3, 26, 8
  0148020  lwz 5, 36(31)
  0148024  lis 4, 151
  0148028  sth 27, 134(1)
  014802c  srawi 5, 5, 1
  0148030  sth 3, 126(1)
  0148034  lwz 3, -25484(4)
  0148038  sth 5, 124(1)
  014803c  cmpwi 3, 1
  0148040  lfs 31, 4(19)
  0148044  bf 1, 0x14805c
  0148048  lis 3, 151
  014804c  lwz 3, -25484(3)
  0148050  cmpwi 3, 6
  0148054  bt 1, 0x14805c
  0148058  lfs 31, 8(19)
  014805c  lis 4, -32736
  0148060  li 3, 21053
  0148064  ori 4, 4, 65535
  0148068  clrldi 4, 4, 32
  014806c  ori 31, 4, 0
  0148070  bl 0x7b740
  0148074  nop
  0148078  ori 5, 3, 0
  014807c  fmr 1, 31
  0148080  addic 3, 1, 116
  0148084  ori 4, 31, 0
  0148088  ori 6, 24, 0
  014808c  bl 0x7100c
  0148090  nop
  0148094  bl 0x6d708
  0148098  nop
  014809c  li 3, 2
  01480a0  ld 0, 304(1)
  01480a4  mtlr 0
  01480a8  lfd 31, 280(1)
  01480ac  ld 16, 152(1)
  01480b0  ld 17, 160(1)
  01480b4  ld 18, 168(1)
  01480b8  ld 19, 176(1)
  01480bc  ld 20, 184(1)
  01480c0  ld 21, 192(1)
  01480c4  ld 22, 200(1)
  01480c8  ld 23, 208(1)
  01480cc  ld 24, 216(1)
  01480d0  ld 25, 224(1)
  01480d4  ld 26, 232(1)
  01480d8  ld 27, 240(1)
  01480dc  ld 28, 248(1)
  01480e0  ld 29, 256(1)
  01480e4  ld 30, 264(1)
  01480e8  ld 31, 272(1)
  01480ec  addi 1, 1, 288
  01480f0  blr

ImageWidget_Update:   # 0x1480f4, 0x3b0 bytes
  01480f4  stdu 1, -432(1)
  01480f8  mflr 0
  01480fc  std 0, 448(1)
  0148100  std 31, 424(1)
  0148104  ori 31, 3, 0
  0148108  lwz 3, 52(31)
  014810c  clrlwi 4, 3, 31
  0148110  std 30, 416(1)
  0148114  std 29, 408(1)
  0148118  std 28, 400(1)
  014811c  std 27, 392(1)
  0148120  std 26, 384(1)
  0148124  std 25, 376(1)
  0148128  std 24, 368(1)
  014812c  cmpwi 4, 0
  0148130  bt 2, 0x14814c
  0148134  lwz 30, 88(31)
  0148138  extsw 30, 30
  014813c  cmpwi 30, -1
  0148140  bf 2, 0x148254
  0148144  li 3, 0
  0148148  b 0x148474
  014814c  rlwinm 4, 3, 0, 30, 30
  0148150  cmpwi 4, 0
  0148154  bt 2, 0x14816c
  0148158  lis 3, 162
  014815c  addic 3, 3, 1216
  0148160  lwz 30, 548(3)
  0148164  extsw 30, 30
  0148168  b 0x148254
  014816c  rlwinm 4, 3, 0, 29, 29
  0148170  cmpwi 4, 0
  0148174  bt 2, 0x148194
  0148178  lis 3, 165
  014817c  addic 3, 3, 11184
  0148180  lwz 3, 4(3)
  0148184  lwz 3, 64(3)
  0148188  lwz 30, 60(3)
  014818c  extsw 30, 30
  0148190  b 0x148254
  0148194  rlwinm 3, 3, 0, 23, 23
  0148198  cmpwi 3, 0
  014819c  bt 2, 0x148230
  01481a0  lis 29, 165
  01481a4  addic 29, 29, 11184
  01481a8  lwz 3, 4(29)
  01481ac  lwz 3, 64(3)
  01481b0  lwz 30, 64(3)
  01481b4  extsw 30, 30
  01481b8  cmpwi 30, 0
  01481bc  bf 0, 0x1481c4
  01481c0  li 30, 0
  01481c4  cmpwi 30, 4
  01481c8  bf 1, 0x1481d0
  01481cc  li 30, 4
  01481d0  bl 0xe886c
  01481d4  nop
  01481d8  cmpwi 3, 0
  01481dc  bt 2, 0x148224
  01481e0  lwz 3, 336(29)
  01481e4  cmpwi 3, 10
  01481e8  bf 1, 0x148224
  01481ec  lwz 3, 68(31)
  01481f0  cmpwi 3, -1
  01481f4  bf 2, 0x148200
  01481f8  li 3, 0
  01481fc  stw 3, 68(31)
  0148200  sldi 3, 30, 5
  0148204  sldi 5, 30, 2
  0148208  lis 4, 114
  014820c  subc 3, 3, 5
  0148210  addic 4, 4, -1468
  0148214  extsw 3, 3
  0148218  lwzx 30, 4, 3
  014821c  extsw 30, 30
  0148220  b 0x148254
  0148224  li 3, -1
  0148228  stw 3, 68(31)
  014822c  b 0x148254
  0148230  lis 3, 165
  0148234  addic 3, 3, 11184
  0148238  lwz 3, 4(3)
  014823c  lwz 3, 64(3)
  0148240  lwz 30, 64(3)
  0148244  extsw 30, 30
  0148248  cmpwi 30, 0
  014824c  bf 0, 0x148254
  0148250  li 30, 0
  0148254  lwz 3, 68(31)
  0148258  cmpwi 3, 1
  014825c  cmpwi 1, 3, -1
  0148260  cmpwi 6, 3, 0
  0148264  cmpwi 7, 3, 2
  0148268  bt 1, 0x148278
  014826c  bf 5, 0x148470
  0148270  bf 25, 0x148288
  0148274  b 0x148454
  0148278  bf 29, 0x148288
  014827c  cmpwi 3, 3
  0148280  bf 1, 0x148454
  0148284  b 0x148470
  0148288  lwz 3, 80(31)
  014828c  cmpw 30, 3
  0148290  bt 2, 0x148470
  0148294  lwz 3, 72(31)
  0148298  cmpwi 3, 0
  014829c  bt 2, 0x148470
  01482a0  lis 3, 150
  01482a4  addic 3, 3, 14024
  01482a8  lhz 3, 8(3)
  01482ac  cmpwi 3, 0
  01482b0  bf 2, 0x148470
  01482b4  lis 29, 144
  01482b8  lwz 3, 48(31)
  01482bc  cmpwi 1, 3, 16
  01482c0  cmpwi 3, 0
  01482c4  crorc 2, 0, 4
  01482c8  lwz 29, 11932(29)
  01482cc  bt 2, 0x1482e8
  01482d0  lis 4, 115
  01482d4  slwi 3, 3, 2
  01482d8  addic 4, 4, -26540
  01482dc  extsw 3, 3
  01482e0  lwzx 3, 4, 3
  01482e4  b 0x1482ec
  01482e8  li 3, 0
  01482ec  addic 28, 1, 112
  01482f0  lis 4, 101
  01482f4  ori 5, 3, 0
  01482f8  ori 3, 28, 0
  01482fc  addic 4, 4, 13800
  0148300  ori 6, 30, 0
  0148304  bl 0x5cd2a8
  0148308  nop
  014830c  addic 27, 1, 240
  0148310  lis 4, 101
  0148314  ori 3, 27, 0
  0148318  ori 5, 28, 0
  014831c  addic 4, 4, 13808
  0148320  bl 0x5cd2a8
  0148324  nop
  0148328  lis 3, 161
  014832c  lis 26, 16
  0148330  addic 25, 3, 2264
  0148334  ori 3, 27, 0
  0148338  ori 5, 26, 0
  014833c  lwz 4, 64(25)
  0148340  bl 0x503e00
  0148344  nop
  0148348  lis 4, 101
  014834c  lwz 24, 64(25)
  0148350  ori 5, 28, 0
  0148354  addic 4, 4, 13816
  0148358  ori 3, 27, 0
  014835c  bl 0x5cd2a8
  0148360  nop
  0148364  lis 4, 32
  0148368  lwz 5, 76(25)
  014836c  ori 3, 27, 0
  0148370  addc 4, 5, 4
  0148374  ori 5, 26, 0
  0148378  clrldi 28, 4, 32
  014837c  ori 4, 28, 0
  0148380  bl 0x503e00
  0148384  nop
  0148388  lwz 4, 1196(29)
  014838c  lwz 6, 0(24)
  0148390  addic 5, 31, 100
  0148394  subc 4, 28, 4
  0148398  lwz 7, 4(24)
  014839c  addc 4, 6, 4
  01483a0  lwz 6, 8(24)
  01483a4  lwz 8, 12(24)
  01483a8  cmpwi 3, 0
  01483ac  stw 4, 0(24)
  01483b0  stw 4, 0(5)
  01483b4  stw 7, 4(5)
  01483b8  stw 6, 8(5)
  01483bc  stw 8, 12(5)
  01483c0  lwz 9, 16(24)
  01483c4  lwz 10, 20(24)
  01483c8  lwz 11, 24(24)
  01483cc  lwz 12, 28(24)
  01483d0  stw 9, 16(5)
  01483d4  stw 10, 20(5)
  01483d8  stw 11, 24(5)
  01483dc  stw 12, 28(5)
  01483e0  li 10, 1
  01483e4  lwz 9, 32(24)
  01483e8  stw 9, 32(5)
  01483ec  lis 9, 162
  01483f0  stb 10, 172(31)
  01483f4  addic 9, 9, 1816
  01483f8  stw 4, 0(9)
  01483fc  stw 7, 4(9)
  0148400  stw 6, 8(9)
  0148404  stw 8, 12(9)
  0148408  lwz 3, 16(5)
  014840c  lwz 4, 20(5)
  0148410  lwz 6, 24(5)
  0148414  lwz 7, 28(5)
  0148418  stw 3, 16(9)
  014841c  stw 4, 20(9)
  0148420  stw 6, 24(9)
  0148424  stw 7, 28(9)
  0148428  lwz 3, 32(5)
  014842c  stw 3, 32(9)
  0148430  bt 2, 0x148448
  0148434  lwz 3, 68(31)
  0148438  stw 30, 80(31)
  014843c  addic 3, 3, 1
  0148440  stw 3, 68(31)
  0148444  b 0x148470
  0148448  li 3, -1
  014844c  stw 3, 68(31)
  0148450  b 0x148470
  0148454  lis 3, 150
  0148458  addic 3, 3, 14024
  014845c  lhz 3, 8(3)
  0148460  cmpwi 3, 0
  0148464  bf 2, 0x148470
  0148468  li 3, 2
  014846c  stw 3, 68(31)
  0148470  li 3, 0
  0148474  ld 0, 448(1)
  0148478  mtlr 0
  014847c  ld 24, 368(1)
  0148480  ld 25, 376(1)
  0148484  ld 26, 384(1)
  0148488  ld 27, 392(1)
  014848c  ld 28, 400(1)
  0148490  ld 29, 408(1)
  0148494  ld 30, 416(1)
  0148498  ld 31, 424(1)
  014849c  addi 1, 1, 432
  01484a0  blr

ImageWidget_Draw:   # 0x1484a4, 0x94 bytes
  01484a4  stdu 1, -128(1)
  01484a8  mflr 0
  01484ac  std 0, 144(1)
  01484b0  lwz 4, 68(3)
  01484b4  cmpwi 4, 2
  01484b8  bf 0, 0x1484c4
  01484bc  li 3, 0
  01484c0  b 0x148528
  01484c4  ori 4, 3, 0
  01484c8  lis 3, 150
  01484cc  lis 5, -32640
  01484d0  addic 6, 3, 27456
  01484d4  ori 5, 5, 32896
  01484d8  lwz 9, 56(4)
  01484dc  li 3, 0
  01484e0  clrldi 8, 5, 32
  01484e4  lwz 10, 60(4)
  01484e8  lis 4, 162
  01484ec  lhz 7, 76(6)
  01484f0  addic 11, 4, 1816
  01484f4  lhz 6, 78(6)
  01484f8  extsh 5, 7
  01484fc  std 8, 112(1)
  0148500  ori 4, 3, 0
  0148504  ori 7, 3, 0
  0148508  ori 8, 3, 0
  014850c  std 11, 120(1)
  0148510  extsw 9, 9
  0148514  extsh 6, 6
  0148518  extsw 10, 10
  014851c  bl 0x6889c
  0148520  nop
  0148524  li 3, 16
  0148528  ld 0, 144(1)
  014852c  mtlr 0
  0148530  addi 1, 1, 128
  0148534  blr

Menu_AllocStreamBuffer:   # 0x148538, 0x150 bytes
  0148538  stdu 1, -128(1)
  014853c  mflr 0
  0148540  std 0, 144(1)
  0148544  li 5, 0
  0148548  std 31, 120(1)
  014854c  std 30, 112(1)
  0148550  cmpwi 1, 3, 0
  0148554  ori 4, 5, 0
  0148558  bt 6, 0x148580
  014855c  lis 3, 165
  0148560  slwi 6, 5, 3
  0148564  addic 3, 3, 12440
  0148568  extsw 6, 6
  014856c  addc 3, 3, 6
  0148570  lwz 3, 4(3)
  0148574  clrlwi 3, 3, 31
  0148578  cmpwi 3, 0
  014857c  bt 2, 0x148660
  0148580  bf 6, 0x1485a8
  0148584  lis 3, 165
  0148588  slwi 6, 5, 3
  014858c  addic 3, 3, 12440
  0148590  extsw 6, 6
  0148594  addc 3, 3, 6
  0148598  lwz 3, 4(3)
  014859c  clrlwi 3, 3, 31
  01485a0  cmpwi 3, 0
  01485a4  bf 2, 0x148660
  01485a8  lis 31, 165
  01485ac  slwi 30, 5, 3
  01485b0  addic 31, 31, 12440
  01485b4  extsw 30, 30
  01485b8  lwzx 3, 31, 30
  01485bc  cmpwi 3, 0
  01485c0  bt 2, 0x148660
  01485c4  addc 6, 31, 30
  01485c8  addic 3, 31, 4
  01485cc  lwz 6, 4(6)
  01485d0  rlwinm 6, 6, 0, 30, 30
  01485d4  cmpwi 6, 0
  01485d8  bf 2, 0x148660
  01485dc  ori 6, 4, 0
  01485e0  lwzx 4, 3, 30
  01485e4  ori 5, 4, 2
  01485e8  lwzx 4, 31, 30
  01485ec  lwzx 7, 31, 30
  01485f0  stwx 5, 3, 30
  01485f4  slwi 5, 6, 3
  01485f8  extsw 5, 5
  01485fc  lwzx 8, 31, 5
  0148600  cmpw 8, 7
  0148604  bf 2, 0x148630
  0148608  ori 6, 3, 0
  014860c  lis 3, 1
  0148610  ori 3, 3, 6144
  0148614  lwzx 5, 6, 5
  0148618  clrlwi 5, 5, 31
  014861c  cmpwi 5, 0
  0148620  bt 2, 0x14862c
  0148624  lis 3, 4
  0148628  ori 3, 3, 61440
  014862c  b 0x148640
  0148630  addic 6, 6, 1
  0148634  cmpwi 6, 5
  0148638  bt 0, 0x1485f4
  014863c  li 3, -1
  0148640  ori 5, 3, 0
  0148644  lis 6, -8531
  0148648  ori 3, 4, 0
  014864c  ori 4, 6, 48879
  0148650  bl 0x5001fc
  0148654  nop
  0148658  lwzx 3, 31, 30
  014865c  b 0x148670
  0148660  addic 5, 5, 1
  0148664  cmpwi 5, 5
  0148668  bt 0, 0x148558
  014866c  ori 3, 4, 0
  0148670  ld 0, 144(1)
  0148674  mtlr 0
  0148678  ld 30, 112(1)
  014867c  ld 31, 120(1)
  0148680  addi 1, 1, 128
  0148684  blr

ImageWidget_OnEnter:   # 0x148688, 0xe4 bytes
  0148688  stdu 1, -144(1)
  014868c  mflr 0
  0148690  std 0, 160(1)
  0148694  std 30, 128(1)
  0148698  std 31, 136(1)
  014869c  ori 30, 3, 0
  01486a0  li 31, 0
  01486a4  lwz 3, 52(30)
  01486a8  stw 31, 68(30)
  01486ac  std 29, 120(1)
  01486b0  rlwinm 3, 3, 0, 22, 22
  01486b4  bl 0x148538
  01486b8  ori 4, 3, 0
  01486bc  lwz 3, 52(30)
  01486c0  rlwinm 3, 3, 0, 22, 22
  01486c4  stw 4, 72(30)
  01486c8  bl 0x148538
  01486cc  lwz 4, 52(30)
  01486d0  stw 3, 76(30)
  01486d4  rlwinm 3, 4, 0, 22, 22
  01486d8  cmpwi 3, 0
  01486dc  bf 2, 0x148710
  01486e0  lwz 3, 72(30)
  01486e4  cmpwi 3, 0
  01486e8  bf 2, 0x1486f8
  01486ec  li 3, 1
  01486f0  bl 0x148538
  01486f4  stw 3, 72(30)
  01486f8  lwz 3, 76(30)
  01486fc  cmpwi 3, 0
  0148700  bf 2, 0x148710
  0148704  li 3, 1
  0148708  bl 0x148538
  014870c  stw 3, 76(30)
  0148710  li 29, 36
  0148714  ori 4, 31, 0
  0148718  addic 3, 30, 100
  014871c  ori 5, 29, 0
  0148720  bl 0x5d0140
  0148724  nop
  0148728  ori 4, 31, 0
  014872c  addic 3, 30, 136
  0148730  ori 5, 29, 0
  0148734  bl 0x5d0140
  0148738  nop
  014873c  li 4, -1
  0148740  stw 31, 92(30)
  0148744  ori 3, 31, 0
  0148748  stw 4, 80(30)
  014874c  stw 4, 84(30)
  0148750  ld 0, 160(1)
  0148754  mtlr 0
  0148758  ld 29, 120(1)
  014875c  ld 30, 128(1)
  0148760  ld 31, 136(1)
  0148764  addi 1, 1, 144
  0148768  blr

ImageWidget_OnExit:   # 0x14876c, 0x194 bytes
  014876c  stdu 1, -160(1)
  0148770  mflr 0
  0148774  std 0, 176(1)
  0148778  std 30, 144(1)
  014877c  ori 30, 3, 0
  0148780  std 31, 152(1)
  0148784  li 3, 0
  0148788  std 29, 136(1)
  014878c  std 28, 128(1)
  0148790  std 27, 120(1)
  0148794  std 26, 112(1)
  0148798  ori 31, 3, 0
  014879c  lwz 4, 72(30)
  01487a0  lis 29, 165
  01487a4  slwi 28, 3, 3
  01487a8  addic 29, 29, 12440
  01487ac  extsw 28, 28
  01487b0  lwzx 5, 29, 28
  01487b4  cmpw 5, 4
  01487b8  bf 2, 0x148820
  01487bc  addc 5, 29, 28
  01487c0  addic 27, 29, 4
  01487c4  lwz 5, 4(5)
  01487c8  rlwinm 5, 5, 0, 30, 30
  01487cc  cmpwi 5, 0
  01487d0  bt 2, 0x148820
  01487d4  lwzx 3, 27, 28
  01487d8  rlwinm 3, 3, 0, 29, 29
  01487dc  cmpwi 3, 0
  01487e0  bt 2, 0x148810
  01487e4  lis 26, 165
  01487e8  lwzx 3, 27, 28
  01487ec  addic 26, 26, 11184
  01487f0  xori 3, 3, 4
  01487f4  lbz 4, 203(26)
  01487f8  stwx 3, 27, 28
  01487fc  cmpwi 4, 0
  0148800  bt 2, 0x148810
  0148804  bl 0x11d9e0
  0148808  nop
  014880c  stb 31, 203(26)
  0148810  lwzx 3, 27, 28
  0148814  rlwimi 3, 31, 0, 30, 30
  0148818  stwx 3, 27, 28
  014881c  b 0x14882c
  0148820  addic 3, 3, 1
  0148824  cmpwi 3, 5
  0148828  bt 0, 0x1487a0
  014882c  stw 31, 72(30)
  0148830  ori 3, 31, 0
  0148834  lwz 4, 76(30)
  0148838  slwi 28, 3, 3
  014883c  extsw 28, 28
  0148840  lwzx 5, 29, 28
  0148844  cmpw 5, 4
  0148848  bf 2, 0x1488b0
  014884c  addc 5, 29, 28
  0148850  addic 27, 29, 4
  0148854  lwz 5, 4(5)
  0148858  rlwinm 5, 5, 0, 30, 30
  014885c  cmpwi 5, 0
  0148860  bt 2, 0x1488b0
  0148864  lwzx 3, 27, 28
  0148868  rlwinm 3, 3, 0, 29, 29
  014886c  cmpwi 3, 0
  0148870  bt 2, 0x1488a0
  0148874  lis 29, 165
  0148878  lwzx 3, 27, 28
  014887c  addic 29, 29, 11184
  0148880  xori 3, 3, 4
  0148884  lbz 4, 203(29)
  0148888  stwx 3, 27, 28
  014888c  cmpwi 4, 0
  0148890  bt 2, 0x1488a0
  0148894  bl 0x11d9e0
  0148898  nop
  014889c  stb 31, 203(29)
  01488a0  lwzx 3, 27, 28
  01488a4  rlwimi 3, 31, 0, 30, 30
  01488a8  stwx 3, 27, 28
  01488ac  b 0x1488bc
  01488b0  addic 3, 3, 1
  01488b4  cmpwi 3, 5
  01488b8  bt 0, 0x148838
  01488bc  li 4, -1
  01488c0  stw 31, 76(30)
  01488c4  stb 31, 172(30)
  01488c8  ori 3, 31, 0
  01488cc  stw 4, 80(30)
  01488d0  stw 4, 84(30)
  01488d4  stw 4, 68(30)
  01488d8  ld 0, 176(1)
  01488dc  mtlr 0
  01488e0  ld 26, 112(1)
  01488e4  ld 27, 120(1)
  01488e8  ld 28, 128(1)
  01488ec  ld 29, 136(1)
  01488f0  ld 30, 144(1)
  01488f4  ld 31, 152(1)
  01488f8  addi 1, 1, 160
  01488fc  blr

UpdateOptionsMenus:   # 0x148908, 0x8e4 bytes
  0148908  stdu 1, -992(1)
  014890c  mflr 0
  0148910  std 0, 1008(1)
  0148914  std 31, 984(1)
  0148918  std 30, 976(1)
  014891c  ori 31, 3, 0
  0148920  lwz 30, 92(31)
  0148924  lwz 3, 52(31)
  0148928  addic 30, 30, 1
  014892c  clrlwi 4, 3, 31
  0148930  cmpwi 4, 0
  0148934  std 29, 968(1)
  0148938  std 28, 960(1)
  014893c  std 27, 952(1)
  0148940  std 26, 944(1)
  0148944  std 25, 936(1)
  0148948  stw 30, 92(31)
  014894c  bt 2, 0x148968
  0148950  lwz 30, 88(31)
  0148954  extsw 30, 30
  0148958  cmpwi 30, -1
  014895c  bf 2, 0x148be0
  0148960  li 3, 0
  0148964  b 0x1491c0
  0148968  rlwinm 4, 3, 0, 30, 30
  014896c  cmpwi 4, 0
  0148970  bt 2, 0x148988
  0148974  lis 3, 162
  0148978  addic 3, 3, 1216
  014897c  lwz 30, 548(3)
  0148980  extsw 30, 30
  0148984  b 0x148be0
  0148988  rlwinm 4, 3, 0, 29, 29
  014898c  cmpwi 4, 0
  0148990  bt 2, 0x1489b0
  0148994  lis 3, 165
  0148998  addic 3, 3, 11184
  014899c  lwz 3, 4(3)
  01489a0  lwz 3, 64(3)
  01489a4  lwz 30, 60(3)
  01489a8  extsw 30, 30
  01489ac  b 0x148be0
  01489b0  rlwinm 4, 3, 0, 23, 23
  01489b4  cmpwi 4, 0
  01489b8  bt 2, 0x148a5c
  01489bc  lis 29, 165
  01489c0  addic 29, 29, 11184
  01489c4  lwz 3, 4(29)
  01489c8  lwz 3, 64(3)
  01489cc  lwz 30, 64(3)
  01489d0  extsw 30, 30
  01489d4  cmpwi 30, 0
  01489d8  bf 0, 0x1489e0
  01489dc  li 30, 0
  01489e0  cmpwi 30, 4
  01489e4  bf 1, 0x1489ec
  01489e8  li 30, 4
  01489ec  bl 0xe886c
  01489f0  nop
  01489f4  cmpwi 3, 0
  01489f8  bt 2, 0x148a50
  01489fc  lwz 3, 336(29)
  0148a00  cmpwi 3, 10
  0148a04  bf 1, 0x148a50
  0148a08  lwz 3, 68(31)
  0148a0c  cmpwi 3, -1
  0148a10  bf 2, 0x148a1c
  0148a14  li 3, 0
  0148a18  stw 3, 68(31)
  0148a1c  sldi 3, 30, 5
  0148a20  sldi 5, 30, 2
  0148a24  lis 4, 114
  0148a28  subc 3, 3, 5
  0148a2c  addic 4, 4, -1468
  0148a30  extsw 3, 3
  0148a34  lwzx 30, 4, 3
  0148a38  extsw 30, 30
  0148a3c  cmpwi 30, -1
  0148a40  bf 2, 0x148be0
  0148a44  li 3, -1
  0148a48  stw 3, 68(31)
  0148a4c  b 0x148be0
  0148a50  li 3, -1
  0148a54  stw 3, 68(31)
  0148a58  b 0x148be0
  0148a5c  rlwinm 4, 3, 0, 28, 28
  0148a60  cmpwi 4, 0
  0148a64  bt 2, 0x148ab8
  0148a68  lis 3, 165
  0148a6c  addic 3, 3, 11184
  0148a70  lwz 3, 4(3)
  0148a74  lwz 3, 64(3)
  0148a78  lwz 4, 60(3)
  0148a7c  lwz 5, 72(3)
  0148a80  sldi 6, 4, 3
  0148a84  lwz 3, 64(3)
  0148a88  addic 5, 5, 8
  0148a8c  addc 6, 4, 6
  0148a90  cmpwi 3, 0
  0148a94  addc 4, 4, 6
  0148a98  addc 4, 5, 4
  0148a9c  clrldi 4, 4, 32
  0148aa0  lhz 30, 0(4)
  0148aa4  extsh 30, 30
  0148aa8  bf 2, 0x148be0
  0148aac  li 3, -1
  0148ab0  stw 3, 68(31)
  0148ab4  b 0x148be0
  0148ab8  rlwinm 4, 3, 0, 21, 21
  0148abc  cmpwi 4, 0
  0148ac0  bt 2, 0x148b20
  0148ac4  lis 3, 21
  0148ac8  lis 4, 114
  0148acc  addi 3, 3, -30464
  0148ad0  lfs 1, 0(3)
  0148ad4  lfs 2, -3056(4)
  0148ad8  fmuls 1, 2, 1
  0148adc  lis 3, 27594
  0148ae0  ori 3, 3, 6899
  0148ae4  fctiwz 1, 1
  0148ae8  stfd 1, 912(1)
  0148aec  lwz 4, 916(1)
  0148af0  divw 4, 30, 4
  0148af4  mulhw 3, 3, 4
  0148af8  srawi 3, 3, 3
  0148afc  srwi 5, 3, 31
  0148b00  addc 3, 3, 5
  0148b04  sldi 5, 3, 4
  0148b08  addc 5, 3, 5
  0148b0c  addc 5, 3, 5
  0148b10  addc 3, 3, 5
  0148b14  subc 30, 4, 3
  0148b18  extsw 30, 30
  0148b1c  b 0x148be0
  0148b20  rlwinm 4, 3, 0, 19, 19
  0148b24  cmpwi 4, 0
  0148b28  bt 2, 0x148b88
  0148b2c  lis 3, 151
  0148b30  li 4, 0
  0148b34  li 6, 12
  0148b38  li 7, 36
  0148b3c  li 8, 48
  0148b40  lwz 3, -25484(3)
  0148b44  li 5, 24
  0148b48  stw 4, 112(1)
  0148b4c  slwi 3, 3, 2
  0148b50  stw 4, 116(1)
  0148b54  stw 6, 120(1)
  0148b58  addc 3, 1, 3
  0148b5c  stw 7, 124(1)
  0148b60  lwz 6, 64(31)
  0148b64  clrldi 3, 3, 32
  0148b68  stw 8, 128(1)
  0148b6c  stw 5, 132(1)
  0148b70  stw 4, 136(1)
  0148b74  lwz 4, 0(6)
  0148b78  lwz 3, 112(3)
  0148b7c  addc 30, 4, 3
  0148b80  extsw 30, 30
  0148b84  b 0x148be0
  0148b88  lis 4, 165
  0148b8c  addic 4, 4, 11184
  0148b90  lwz 4, 4(4)
  0148b94  lwz 4, 64(4)
  0148b98  lwz 30, 64(4)
  0148b9c  extsw 30, 30
  0148ba0  cmpwi 30, 0
  0148ba4  bf 0, 0x148bac
  0148ba8  li 30, 0
  0148bac  rlwinm 3, 3, 0, 17, 17
  0148bb0  cmpwi 3, 0
  0148bb4  bt 2, 0x148be0
  0148bb8  addc 3, 30, 30
  0148bbc  lwz 4, 52(4)
  0148bc0  addc 3, 30, 3
  0148bc4  sldi 3, 3, 2
  0148bc8  addc 3, 4, 3
  0148bcc  clrldi 3, 3, 32
  0148bd0  lhz 3, 2(3)
  0148bd4  cmpwi 3, 2
  0148bd8  bf 2, 0x148be0
  0148bdc  li 30, 9
  0148be0  lwz 3, 52(31)
  0148be4  rlwinm 4, 3, 0, 18, 18
  0148be8  cmpwi 4, 0
  0148bec  bt 2, 0x148c08
  0148bf0  lis 4, 151
  0148bf4  addic 4, 4, -16244
  0148bf8  lbzx 4, 4, 30
  0148bfc  cmpwi 4, 0
  0148c00  bf 2, 0x148c08
  0148c04  li 30, 30
  0148c08  lwz 4, 68(31)
  0148c0c  cmpwi 4, 6
  0148c10  cmpwi 1, 4, 5
  0148c14  cmpwi 6, 4, 4
  0148c18  cmpwi 7, 4, 3
  0148c1c  bt 2, 0x148e0c
  0148c20  bt 6, 0x148dec
  0148c24  bt 26, 0x149018
  0148c28  bt 30, 0x148dec
  0148c2c  cmpwi 4, 2
  0148c30  bt 2, 0x148e14
  0148c34  cmpwi 4, 1
  0148c38  bt 2, 0x148dec
  0148c3c  cmpwi 4, 0
  0148c40  bf 2, 0x1491bc
  0148c44  lwz 3, 72(31)
  0148c48  cmpwi 3, 0
  0148c4c  bt 2, 0x1491bc
  0148c50  lis 3, 150
  0148c54  addic 3, 3, 14024
  0148c58  lhz 3, 8(3)
  0148c5c  cmpwi 3, 0
  0148c60  bf 2, 0x1491bc
  0148c64  lis 29, 144
  0148c68  lwz 3, 48(31)
  0148c6c  cmpwi 1, 3, 16
  0148c70  cmpwi 3, 0
  0148c74  crorc 2, 0, 4
  0148c78  lwz 29, 11932(29)
  0148c7c  bt 2, 0x148c98
  0148c80  lis 4, 115
  0148c84  slwi 3, 3, 2
  0148c88  addic 4, 4, -26540
  0148c8c  extsw 3, 3
  0148c90  lwzx 3, 4, 3
  0148c94  b 0x148c9c
  0148c98  li 3, 0
  0148c9c  addic 28, 1, 144
  0148ca0  lis 4, 101
  0148ca4  ori 5, 3, 0
  0148ca8  ori 3, 28, 0
  0148cac  addic 4, 4, 13800
  0148cb0  ori 6, 30, 0
  0148cb4  bl 0x5cd2a8
  0148cb8  nop
  0148cbc  addic 27, 1, 272
  0148cc0  lis 4, 101
  0148cc4  ori 3, 27, 0
  0148cc8  addic 4, 4, 13808
  0148ccc  ori 5, 28, 0
  0148cd0  bl 0x5cd2a8
  0148cd4  nop
  0148cd8  lis 3, 161
  0148cdc  lis 5, 16
  0148ce0  addic 26, 3, 2264
  0148ce4  ori 3, 27, 0
  0148ce8  lwz 4, 64(26)
  0148cec  bl 0x503e00
  0148cf0  nop
  0148cf4  lis 4, 101
  0148cf8  lwz 25, 64(26)
  0148cfc  ori 3, 27, 0
  0148d00  addic 4, 4, 13816
  0148d04  ori 5, 28, 0
  0148d08  bl 0x5cd2a8
  0148d0c  nop
  0148d10  lwz 4, 76(26)
  0148d14  lis 5, 32
  0148d18  ori 3, 27, 0
  0148d1c  bl 0x503e00
  0148d20  nop
  0148d24  lwz 4, 76(26)
  0148d28  lwz 5, 1196(29)
  0148d2c  addic 6, 31, 100
  0148d30  lwz 7, 0(25)
  0148d34  cmpwi 3, 0
  0148d38  subc 4, 4, 5
  0148d3c  lwz 5, 4(25)
  0148d40  addc 4, 7, 4
  0148d44  lwz 7, 8(25)
  0148d48  lwz 8, 12(25)
  0148d4c  stw 4, 0(25)
  0148d50  stw 4, 0(6)
  0148d54  stw 5, 4(6)
  0148d58  stw 7, 8(6)
  0148d5c  li 4, 1
  0148d60  stw 8, 12(6)
  0148d64  lwz 5, 16(25)
  0148d68  lwz 7, 20(25)
  0148d6c  lwz 8, 24(25)
  0148d70  lwz 9, 28(25)
  0148d74  stw 5, 16(6)
  0148d78  stw 7, 20(6)
  0148d7c  stw 8, 24(6)
  0148d80  stw 9, 28(6)
  0148d84  lwz 3, 32(25)
  0148d88  stw 3, 32(6)
  0148d8c  stb 4, 172(31)
  0148d90  bf 1, 0x1491bc
  0148d94  li 3, 0
  0148d98  lwz 6, 72(31)
  0148d9c  lis 5, 165
  0148da0  slwi 4, 3, 3
  0148da4  addic 5, 5, 12440
  0148da8  extsw 4, 4
  0148dac  lwzx 7, 5, 4
  0148db0  cmpw 7, 6
  0148db4  bf 2, 0x148dcc
  0148db8  addc 3, 5, 4
  0148dbc  lwz 4, 4(3)
  0148dc0  ori 4, 4, 4
  0148dc4  stw 4, 4(3)
  0148dc8  b 0x148dd8
  0148dcc  addic 3, 3, 1
  0148dd0  cmpwi 3, 5
  0148dd4  bt 0, 0x148d9c
  0148dd8  lwz 3, 68(31)
  0148ddc  stw 30, 80(31)
  0148de0  addic 3, 3, 1
  0148de4  stw 3, 68(31)
  0148de8  b 0x1491bc
  0148dec  lis 3, 150
  0148df0  addic 3, 3, 14024
  0148df4  lhz 3, 8(3)
  0148df8  cmpwi 3, 0
  0148dfc  bf 2, 0x1491bc
  0148e00  addic 3, 4, 1
  0148e04  stw 3, 68(31)
  0148e08  b 0x1491bc
  0148e0c  li 4, 2
  0148e10  stw 4, 68(31)
  0148e14  lwz 4, 80(31)
  0148e18  cmpw 30, 4
  0148e1c  bt 2, 0x1491bc
  0148e20  lwz 4, 76(31)
  0148e24  cmpwi 4, 0
  0148e28  bf 2, 0x148e38
  0148e2c  li 3, 0
  0148e30  stw 3, 68(31)
  0148e34  b 0x1491bc
  0148e38  lis 5, 150
  0148e3c  addic 5, 5, 14024
  0148e40  lhz 5, 8(5)
  0148e44  cmpwi 5, 0
  0148e48  bf 2, 0x1491bc
  0148e4c  rlwinm 3, 3, 0, 27, 27
  0148e50  cmpwi 3, 0
  0148e54  bt 2, 0x148e70
  0148e58  lis 5, 101
  0148e5c  ori 3, 4, 0
  0148e60  addic 4, 5, 13824
  0148e64  bl 0x503434
  0148e68  nop
  0148e6c  b 0x148e84
  0148e70  lis 5, 101
  0148e74  ori 3, 4, 0
  0148e78  addic 4, 5, 13824
  0148e7c  bl 0x5034c4
  0148e80  nop
  0148e84  lwz 3, 48(31)
  0148e88  cmpwi 1, 3, 16
  0148e8c  cmpwi 3, 0
  0148e90  crorc 2, 0, 4
  0148e94  bt 2, 0x148eb0
  0148e98  lis 4, 115
  0148e9c  slwi 3, 3, 2
  0148ea0  addic 4, 4, -26540
  0148ea4  extsw 3, 3
  0148ea8  lwzx 3, 4, 3
  0148eac  b 0x148eb4
  0148eb0  li 3, 0
  0148eb4  lis 4, 101
  0148eb8  addic 29, 1, 400
  0148ebc  ori 5, 3, 0
  0148ec0  addic 4, 4, 13800
  0148ec4  ori 3, 29, 0
  0148ec8  ori 6, 30, 0
  0148ecc  bl 0x5cd2a8
  0148ed0  nop
  0148ed4  lis 4, 144
  0148ed8  addic 28, 1, 528
  0148edc  lis 5, 101
  0148ee0  ori 3, 28, 0
  0148ee4  lwz 27, 11932(4)
  0148ee8  addic 4, 5, 13808
  0148eec  ori 5, 29, 0
  0148ef0  bl 0x5cd2a8
  0148ef4  nop
  0148ef8  lis 3, 161
  0148efc  lis 5, 16
  0148f00  addic 26, 3, 2264
  0148f04  ori 3, 28, 0
  0148f08  lwz 4, 64(26)
  0148f0c  bl 0x503e00
  0148f10  nop
  0148f14  lis 4, 101
  0148f18  lwz 25, 64(26)
  0148f1c  ori 3, 28, 0
  0148f20  addic 4, 4, 13816
  0148f24  ori 5, 29, 0
  0148f28  bl 0x5cd2a8
  0148f2c  nop
  0148f30  lwz 4, 76(26)
  0148f34  lis 5, 32
  0148f38  ori 3, 28, 0
  0148f3c  bl 0x503e00
  0148f40  nop
  0148f44  lwz 4, 76(26)
  0148f48  lwz 5, 1196(27)
  0148f4c  addic 6, 31, 100
  0148f50  lwz 7, 0(25)
  0148f54  cmpwi 3, 0
  0148f58  subc 4, 4, 5
  0148f5c  lwz 5, 4(25)
  0148f60  addc 4, 7, 4
  0148f64  lwz 7, 8(25)
  0148f68  lwz 8, 12(25)
  0148f6c  stw 4, 0(25)
  0148f70  stw 4, 0(6)
  0148f74  stw 5, 4(6)
  0148f78  stw 7, 8(6)
  0148f7c  li 4, 1
  0148f80  stw 8, 12(6)
  0148f84  lwz 5, 16(25)
  0148f88  lwz 7, 20(25)
  0148f8c  lwz 8, 24(25)
  0148f90  lwz 9, 28(25)
  0148f94  stw 5, 16(6)
  0148f98  stw 7, 20(6)
  0148f9c  stw 8, 24(6)
  0148fa0  stw 9, 28(6)
  0148fa4  lwz 3, 32(25)
  0148fa8  stw 3, 32(6)
  0148fac  stb 4, 172(31)
  0148fb0  bf 1, 0x14900c
  0148fb4  li 5, 0
  0148fb8  lwz 4, 76(31)
  0148fbc  lis 3, 165
  0148fc0  slwi 6, 5, 3
  0148fc4  addic 3, 3, 12440
  0148fc8  extsw 6, 6
  0148fcc  lwzx 7, 3, 6
  0148fd0  cmpw 7, 4
  0148fd4  bf 2, 0x148fec
  0148fd8  addc 3, 3, 6
  0148fdc  lwz 4, 4(3)
  0148fe0  ori 4, 4, 4
  0148fe4  stw 4, 4(3)
  0148fe8  b 0x148ff8
  0148fec  addic 5, 5, 1
  0148ff0  cmpwi 5, 5
  0148ff4  bt 0, 0x148fbc
  0148ff8  lwz 3, 68(31)
  0148ffc  stw 30, 84(31)
  0149000  addic 3, 3, 1
  0149004  stw 3, 68(31)
  0149008  b 0x1491bc
  014900c  li 3, -1
  0149010  stw 3, 68(31)
  0149014  b 0x1491bc
  0149018  lwz 4, 84(31)
  014901c  cmpw 30, 4
  0149020  bt 2, 0x1491bc
  0149024  lwz 4, 72(31)
  0149028  cmpwi 4, 0
  014902c  bf 2, 0x14903c
  0149030  li 3, -1
  0149034  stw 3, 68(31)
  0149038  b 0x1491bc
  014903c  lis 5, 150
  0149040  addic 5, 5, 14024
  0149044  lhz 5, 8(5)
  0149048  cmpwi 5, 0
  014904c  bf 2, 0x1491bc
  0149050  rlwinm 3, 3, 0, 27, 27
  0149054  cmpwi 3, 0
  0149058  bt 2, 0x149074
  014905c  lis 5, 101
  0149060  ori 3, 4, 0
  0149064  addic 4, 5, 13824
  0149068  bl 0x503434
  014906c  nop
  0149070  b 0x149088
  0149074  lis 5, 101
  0149078  ori 3, 4, 0
  014907c  addic 4, 5, 13824
  0149080  bl 0x5034c4
  0149084  nop
  0149088  lwz 3, 48(31)
  014908c  cmpwi 1, 3, 16
  0149090  cmpwi 3, 0
  0149094  crorc 2, 0, 4
  0149098  bt 2, 0x1490b4
  014909c  lis 4, 115
  01490a0  slwi 3, 3, 2
  01490a4  addic 4, 4, -26540
  01490a8  extsw 3, 3
  01490ac  lwzx 3, 4, 3
  01490b0  b 0x1490b8
  01490b4  li 3, 0
  01490b8  lis 4, 101
  01490bc  addic 29, 1, 656
  01490c0  ori 5, 3, 0
  01490c4  addic 4, 4, 13800
  01490c8  ori 3, 29, 0
  01490cc  ori 6, 30, 0
  01490d0  bl 0x5cd2a8
  01490d4  nop
  01490d8  lis 4, 144
  01490dc  addic 28, 1, 784
  01490e0  ori 5, 29, 0
  01490e4  ori 3, 28, 0
  01490e8  lwz 27, 11932(4)
  01490ec  lis 4, 101
  01490f0  addic 4, 4, 13808
  01490f4  bl 0x5cd2a8
  01490f8  nop
  01490fc  lis 3, 161
  0149100  lis 5, 16
  0149104  addic 26, 3, 2264
  0149108  ori 3, 28, 0
  014910c  lwz 4, 64(26)
  0149110  bl 0x503e00
  0149114  nop
  0149118  lis 4, 101
  014911c  lwz 25, 64(26)
  0149120  ori 3, 28, 0
  0149124  addic 4, 4, 13816
  0149128  ori 5, 29, 0
  014912c  bl 0x5cd2a8
  0149130  nop
  0149134  lwz 4, 76(26)
  0149138  ori 3, 28, 0
  014913c  lis 5, 32
  0149140  bl 0x503e00
  0149144  nop
  0149148  lwz 3, 76(26)
  014914c  addic 4, 31, 100
  0149150  lwz 5, 1196(27)
  0149154  li 8, 1
  0149158  lwz 6, 0(25)
  014915c  subc 3, 3, 5
  0149160  lwz 5, 4(25)
  0149164  addc 3, 6, 3
  0149168  lwz 7, 8(25)
  014916c  lwz 6, 12(25)
  0149170  stw 3, 0(25)
  0149174  stw 3, 0(4)
  0149178  stw 5, 4(4)
  014917c  stw 7, 8(4)
  0149180  stw 6, 12(4)
  0149184  lwz 3, 16(25)
  0149188  lwz 5, 20(25)
  014918c  li 6, 2
  0149190  lwz 7, 24(25)
  0149194  lwz 9, 28(25)
  0149198  stw 3, 16(4)
  014919c  stw 5, 20(4)
  01491a0  stw 7, 24(4)
  01491a4  stw 9, 28(4)
  01491a8  lwz 3, 32(25)
  01491ac  stw 3, 32(4)
  01491b0  stb 8, 172(31)
  01491b4  stw 30, 80(31)
  01491b8  stw 6, 68(31)
  01491bc  li 3, 0
  01491c0  ld 0, 1008(1)
  01491c4  mtlr 0
  01491c8  ld 25, 936(1)
  01491cc  ld 26, 944(1)
  01491d0  ld 27, 952(1)
  01491d4  ld 28, 960(1)
  01491d8  ld 29, 968(1)
  01491dc  ld 30, 976(1)
  01491e0  ld 31, 984(1)
  01491e4  addi 1, 1, 992
  01491e8  blr

ImageWidget_DrawWithText:   # 0x1491f0, 0x4b4 bytes
  01491f0  stdu 1, -240(1)
  01491f4  mflr 0
  01491f8  std 0, 256(1)
  01491fc  stfd 31, 232(1)
  0149200  std 31, 224(1)
  0149204  std 30, 216(1)
  0149208  ori 31, 3, 0
  014920c  ori 30, 31, 0
  0149210  lwz 3, 68(31)
  0149214  std 29, 208(1)
  0149218  std 28, 200(1)
  014921c  std 27, 192(1)
  0149220  cmpwi 3, 2
  0149224  bf 0, 0x1493d8
  0149228  lwz 3, 52(31)
  014922c  rlwinm 3, 3, 0, 23, 23
  0149230  cmpwi 3, 0
  0149234  bt 2, 0x1493d0
  0149238  bl 0xe886c
  014923c  nop
  0149240  cmpwi 3, 0
  0149244  bf 2, 0x1493c8
  0149248  li 3, 0
  014924c  bl 0x6d704
  0149250  nop
  0149254  lis 3, 165
  0149258  li 4, 20409
  014925c  addic 3, 3, 11184
  0149260  lwz 5, 292(3)
  0149264  cmpwi 5, 0
  0149268  bt 2, 0x149274
  014926c  lwz 4, 296(3)
  0149270  extsw 4, 4
  0149274  ori 3, 4, 0
  0149278  bl 0x7b740
  014927c  nop
  0149280  li 4, 1
  0149284  li 6, 5
  0149288  li 7, 0
  014928c  li 5, 16
  0149290  sth 4, 164(1)
  0149294  lis 8, 21
  0149298  sth 4, 168(1)
  014929c  ori 31, 3, 0
  01492a0  sth 6, 174(1)
  01492a4  addi 3, 8, -28180
  01492a8  lwz 4, 36(30)
  01492ac  addic 29, 1, 164
  01492b0  sth 7, 176(1)
  01492b4  li 27, -1
  01492b8  sth 7, 178(1)
  01492bc  addic 4, 4, 1
  01492c0  lwz 8, 32(30)
  01492c4  sth 5, 180(1)
  01492c8  sth 6, 182(1)
  01492cc  addic 5, 8, 1
  01492d0  sth 7, 184(1)
  01492d4  srawi 6, 8, 1
  01492d8  sth 7, 186(1)
  01492dc  sth 4, 166(1)
  01492e0  lis 4, -32768
  01492e4  sth 5, 170(1)
  01492e8  sth 6, 172(1)
  01492ec  ori 5, 31, 0
  01492f0  lfs 31, 0(3)
  01492f4  ori 3, 29, 0
  01492f8  clrldi 28, 4, 32
  01492fc  ori 6, 27, 0
  0149300  fmr 1, 31
  0149304  ori 4, 28, 0
  0149308  bl 0x7100c
  014930c  nop
  0149310  lhz 3, 178(1)
  0149314  lwz 4, 36(30)
  0149318  ori 6, 27, 0
  014931c  extsh 3, 3
  0149320  lhz 5, 182(1)
  0149324  fmr 1, 31
  0149328  subc 3, 4, 3
  014932c  xori 5, 5, 4
  0149330  srawi 7, 3, 1
  0149334  ori 3, 29, 0
  0149338  ori 4, 28, 0
  014933c  sth 5, 182(1)
  0149340  sth 7, 174(1)
  0149344  ori 5, 31, 0
  0149348  bl 0x7100c
  014934c  nop
  0149350  lhz 3, 164(1)
  0149354  lhz 4, 166(1)
  0149358  lis 7, -32513
  014935c  addic 3, 3, -1
  0149360  lhz 5, 168(1)
  0149364  addic 4, 4, -1
  0149368  lhz 6, 170(1)
  014936c  lhz 8, 172(1)
  0149370  addic 5, 5, -1
  0149374  ori 7, 7, 43144
  0149378  fmr 1, 31
  014937c  sth 3, 164(1)
  0149380  addic 3, 6, -1
  0149384  sth 4, 166(1)
  0149388  lhz 6, 174(1)
  014938c  addic 4, 8, -1
  0149390  sth 5, 168(1)
  0149394  addic 6, 6, -1
  0149398  sth 3, 170(1)
  014939c  clrldi 5, 7, 32
  01493a0  ori 3, 29, 0
  01493a4  sth 4, 172(1)
  01493a8  ori 4, 5, 0
  01493ac  sth 6, 174(1)
  01493b0  ori 5, 31, 0
  01493b4  ori 6, 27, 0
  01493b8  bl 0x7100c
  01493bc  nop
  01493c0  bl 0x6d708
  01493c4  nop
  01493c8  li 3, 2
  01493cc  b 0x14967c
  01493d0  li 3, 1
  01493d4  b 0x14967c
  01493d8  lwz 4, 52(31)
  01493dc  rlwinm 4, 4, 0, 29, 29
  01493e0  cmpwi 4, 0
  01493e4  bt 2, 0x149494
  01493e8  ori 4, 3, 0
  01493ec  li 3, 0
  01493f0  cmpwi 4, 4
  01493f4  bt 0, 0x1493fc
  01493f8  li 3, 1
  01493fc  lis 4, 165
  0149400  addic 5, 31, 80
  0149404  addic 4, 4, 11184
  0149408  slwi 3, 3, 2
  014940c  addc 3, 5, 3
  0149410  clrldi 3, 3, 32
  0149414  lwz 4, 4(4)
  0149418  lwz 3, 0(3)
  014941c  lwz 4, 64(4)
  0149420  sldi 5, 3, 3
  0149424  addc 5, 3, 5
  0149428  addc 3, 3, 5
  014942c  lwz 4, 72(4)
  0149430  addc 4, 4, 3
  0149434  clrldi 4, 4, 32
  0149438  lhz 3, 4(4)
  014943c  cmpwi 3, 0
  0149440  bf 2, 0x149468
  0149444  lis 5, 151
  0149448  lhz 6, 6(4)
  014944c  addic 5, 5, -16064
  0149450  extsh 6, 6
  0149454  lbzx 5, 5, 6
  0149458  cmpwi 5, 0
  014945c  bf 2, 0x149468
  0149460  li 3, 1
  0149464  b 0x14967c
  0149468  cmpwi 3, 1
  014946c  bf 2, 0x149494
  0149470  lis 3, 151
  0149474  lhz 4, 6(4)
  0149478  addic 3, 3, -16400
  014947c  extsh 4, 4
  0149480  lbzx 3, 3, 4
  0149484  cmpwi 3, 0
  0149488  bf 2, 0x149494
  014948c  li 3, 1
  0149490  b 0x14967c
  0149494  li 3, 0
  0149498  bl 0x6d704
  014949c  nop
  01494a0  lwz 3, 68(31)
  01494a4  cmpwi 3, 4
  01494a8  bt 1, 0x1494f8
  01494ac  addic 3, 31, 100
  01494b0  lwz 4, 0(3)
  01494b4  lwz 5, 4(3)
  01494b8  lwz 6, 8(3)
  01494bc  lwz 7, 12(3)
  01494c0  stw 4, 128(1)
  01494c4  stw 5, 132(1)
  01494c8  stw 6, 136(1)
  01494cc  stw 7, 140(1)
  01494d0  lwz 4, 16(3)
  01494d4  lwz 5, 20(3)
  01494d8  lwz 6, 24(3)
  01494dc  lwz 7, 28(3)
  01494e0  stw 4, 144(1)
  01494e4  stw 5, 148(1)
  01494e8  stw 6, 152(1)
  01494ec  stw 7, 156(1)
  01494f0  lwz 3, 32(3)
  01494f4  stw 3, 160(1)
  01494f8  lwz 3, 128(1)
  01494fc  cmpwi 3, 0
  0149500  bf 2, 0x14950c
  0149504  li 3, 16
  0149508  b 0x14967c
  014950c  lwz 3, 48(31)
  0149510  cmpwi 3, 10
  0149514  cmpwi 1, 3, 3
  0149518  cmpwi 6, 3, 0
  014951c  cmpwi 7, 3, 6
  0149520  bt 1, 0x149538
  0149524  bt 5, 0x149530
  0149528  bf 25, 0x149608
  014952c  b 0x149548
  0149530  bt 30, 0x149548
  0149534  b 0x149608
  0149538  cmpwi 3, 11
  014953c  bf 1, 0x1495a4
  0149540  cmpwi 3, 15
  0149544  bt 1, 0x149608
  0149548  lis 3, 150
  014954c  lwz 9, 56(31)
  0149550  lis 4, -32640
  0149554  lwz 10, 60(31)
  0149558  addic 3, 3, 27456
  014955c  ori 4, 4, 32896
  0149560  addic 7, 1, 128
  0149564  clrldi 4, 4, 32
  0149568  extsw 9, 9
  014956c  lhz 5, 76(3)
  0149570  lhz 6, 78(3)
  0149574  extsw 10, 10
  0149578  li 3, 0
  014957c  std 4, 112(1)
  0149580  std 7, 120(1)
  0149584  extsh 5, 5
  0149588  extsh 6, 6
  014958c  ori 4, 3, 0
  0149590  ori 7, 3, 0
  0149594  ori 8, 3, 0
  0149598  bl 0x6889c
  014959c  nop
  01495a0  b 0x149670
  01495a4  lis 3, 150
  01495a8  lis 4, -32640
  01495ac  lwz 5, 56(31)
  01495b0  addic 3, 3, 27456
  01495b4  ori 4, 4, 32896
  01495b8  addic 7, 1, 128
  01495bc  clrldi 4, 4, 32
  01495c0  slwi 9, 5, 1
  01495c4  lhz 8, 76(3)
  01495c8  lhz 6, 78(3)
  01495cc  extsw 9, 9
  01495d0  lwz 10, 60(31)
  01495d4  extsh 5, 8
  01495d8  std 4, 112(1)
  01495dc  li 3, 0
  01495e0  std 7, 120(1)
  01495e4  extsh 6, 6
  01495e8  sldi 5, 5, 1
  01495ec  extsw 10, 10
  01495f0  ori 4, 3, 0
  01495f4  ori 7, 3, 0
  01495f8  ori 8, 3, 0
  01495fc  bl 0x6889c
  0149600  nop
  0149604  b 0x149670
  0149608  lis 3, 150
  014960c  lwz 5, 56(31)
  0149610  lis 4, -32640
  0149614  lwz 8, 60(31)
  0149618  addic 3, 3, 27456
  014961c  ori 4, 4, 32896
  0149620  addic 7, 1, 128
  0149624  clrldi 4, 4, 32
  0149628  srawi 9, 5, 1
  014962c  lhz 6, 76(3)
  0149630  lhz 3, 78(3)
  0149634  addze 9, 9
  0149638  extsh 5, 6
  014963c  srawi 8, 8, 1
  0149640  extsh 6, 3
  0149644  std 4, 112(1)
  0149648  addze 10, 8
  014964c  std 7, 120(1)
  0149650  li 3, 0
  0149654  extsw 9, 9
  0149658  extsw 10, 10
  014965c  ori 4, 3, 0
  0149660  ori 7, 3, 0
  0149664  ori 8, 3, 0
  0149668  bl 0x6889c
  014966c  nop
  0149670  bl 0x6d708
  0149674  nop
  0149678  li 3, 16
  014967c  ld 0, 256(1)
  0149680  mtlr 0
  0149684  lfd 31, 232(1)
  0149688  ld 27, 192(1)
  014968c  ld 28, 200(1)
  0149690  ld 29, 208(1)
  0149694  ld 30, 216(1)
  0149698  ld 31, 224(1)
  014969c  addi 1, 1, 240
  01496a0  blr

HelpControls_Update:   # 0x1496a4, 0x320 bytes
  01496a4  stdu 1, -672(1)
  01496a8  mflr 0
  01496ac  std 0, 688(1)
  01496b0  std 31, 664(1)
  01496b4  ori 31, 3, 0
  01496b8  lwz 3, 68(31)
  01496bc  cmpwi 3, 1
  01496c0  cmpwi 1, 3, 3
  01496c4  cmpwi 6, 3, 2
  01496c8  std 30, 656(1)
  01496cc  std 29, 648(1)
  01496d0  std 28, 640(1)
  01496d4  std 27, 632(1)
  01496d8  std 26, 624(1)
  01496dc  cmpwi 7, 3, 0
  01496e0  bt 1, 0x1496f4
  01496e4  cmpwi 3, -1
  01496e8  bf 1, 0x149998
  01496ec  bf 29, 0x149700
  01496f0  b 0x149824
  01496f4  bf 25, 0x149844
  01496f8  bf 5, 0x14997c
  01496fc  b 0x149998
  0149700  lwz 3, 72(31)
  0149704  cmpwi 3, 0
  0149708  bt 2, 0x149998
  014970c  lis 3, 150
  0149710  addic 3, 3, 14024
  0149714  lhz 3, 8(3)
  0149718  cmpwi 3, 0
  014971c  bf 2, 0x149998
  0149720  lis 4, 144
  0149724  lis 5, 151
  0149728  addic 30, 1, 112
  014972c  lis 6, 101
  0149730  ori 3, 30, 0
  0149734  lwz 29, 11932(4)
  0149738  lwz 5, -25484(5)
  014973c  addic 4, 6, 13844
  0149740  extsw 5, 5
  0149744  bl 0x5cd2a8
  0149748  nop
  014974c  addic 28, 1, 240
  0149750  lis 4, 101
  0149754  ori 3, 28, 0
  0149758  ori 5, 30, 0
  014975c  addic 4, 4, 13808
  0149760  bl 0x5cd2a8
  0149764  nop
  0149768  lis 3, 161
  014976c  li 5, 36
  0149770  addic 27, 3, 2264
  0149774  ori 3, 28, 0
  0149778  lwz 4, 64(27)
  014977c  bl 0x503e00
  0149780  nop
  0149784  lis 4, 101
  0149788  lwz 26, 64(27)
  014978c  ori 5, 30, 0
  0149790  ori 3, 28, 0
  0149794  addic 4, 4, 13816
  0149798  bl 0x5cd2a8
  014979c  nop
  01497a0  lwz 30, 76(27)
  01497a4  ori 3, 28, 0
  01497a8  lis 5, 16
  01497ac  ori 4, 30, 0
  01497b0  bl 0x503e00
  01497b4  nop
  01497b8  lwz 3, 1196(29)
  01497bc  lwz 5, 0(26)
  01497c0  addic 4, 31, 100
  01497c4  subc 3, 30, 3
  01497c8  lwz 6, 4(26)
  01497cc  addc 3, 5, 3
  01497d0  lwz 5, 8(26)
  01497d4  lwz 7, 12(26)
  01497d8  stw 3, 0(26)
  01497dc  stw 3, 0(4)
  01497e0  stw 6, 4(4)
  01497e4  stw 5, 8(4)
  01497e8  stw 7, 12(4)
  01497ec  lwz 3, 16(26)
  01497f0  lwz 5, 20(26)
  01497f4  lwz 6, 24(26)
  01497f8  lwz 7, 28(26)
  01497fc  stw 3, 16(4)
  0149800  stw 5, 20(4)
  0149804  stw 6, 24(4)
  0149808  stw 7, 28(4)
  014980c  lwz 3, 32(26)
  0149810  stw 3, 32(4)
  0149814  lwz 3, 68(31)
  0149818  addic 3, 3, 1
  014981c  stw 3, 68(31)
  0149820  b 0x149998
  0149824  lis 4, 150
  0149828  addic 4, 4, 14024
  014982c  lhz 4, 8(4)
  0149830  cmpwi 4, 0
  0149834  bf 2, 0x149998
  0149838  addic 3, 3, 1
  014983c  stw 3, 68(31)
  0149840  b 0x149998
  0149844  lwz 3, 76(31)
  0149848  cmpwi 3, 0
  014984c  bt 2, 0x149998
  0149850  lis 3, 150
  0149854  addic 3, 3, 14024
  0149858  lhz 3, 8(3)
  014985c  cmpwi 3, 0
  0149860  bf 2, 0x149998
  0149864  lis 4, 144
  0149868  lis 5, 151
  014986c  addic 30, 1, 368
  0149870  ori 3, 30, 0
  0149874  lwz 29, 11932(4)
  0149878  lis 4, 101
  014987c  lwz 5, -25484(5)
  0149880  addic 4, 4, 13900
  0149884  extsw 5, 5
  0149888  bl 0x5cd2a8
  014988c  nop
  0149890  addic 28, 1, 496
  0149894  lis 4, 101
  0149898  ori 3, 28, 0
  014989c  addic 4, 4, 13808
  01498a0  ori 5, 30, 0
  01498a4  bl 0x5cd2a8
  01498a8  nop
  01498ac  lis 3, 161
  01498b0  li 5, 36
  01498b4  addic 27, 3, 2264
  01498b8  ori 3, 28, 0
  01498bc  lwz 4, 64(27)
  01498c0  bl 0x503e00
  01498c4  nop
  01498c8  lis 4, 101
  01498cc  lwz 26, 64(27)
  01498d0  ori 3, 28, 0
  01498d4  addic 4, 4, 13816
  01498d8  ori 5, 30, 0
  01498dc  bl 0x5cd2a8
  01498e0  nop
  01498e4  lis 3, 16
  01498e8  lwz 4, 76(27)
  01498ec  lis 5, 16
  01498f0  addc 4, 4, 3
  01498f4  ori 3, 28, 0
  01498f8  clrldi 30, 4, 32
  01498fc  ori 4, 30, 0
  0149900  bl 0x503e00
  0149904  nop
  0149908  lwz 3, 1196(29)
  014990c  lwz 5, 0(26)
  0149910  addic 4, 31, 136
  0149914  subc 3, 30, 3
  0149918  lwz 6, 4(26)
  014991c  addc 3, 5, 3
  0149920  lwz 5, 8(26)
  0149924  lwz 7, 12(26)
  0149928  stw 3, 0(26)
  014992c  stw 3, 0(4)
  0149930  stw 6, 4(4)
  0149934  stw 5, 8(4)
  0149938  stw 7, 12(4)
  014993c  lwz 3, 16(26)
  0149940  lwz 5, 20(26)
  0149944  lwz 6, 24(26)
  0149948  lwz 7, 28(26)
  014994c  stw 3, 16(4)
  0149950  stw 5, 20(4)
  0149954  stw 6, 24(4)
  0149958  li 3, 1
  014995c  stw 7, 28(4)
  0149960  lwz 5, 32(26)
  0149964  stw 5, 32(4)
  0149968  lwz 4, 68(31)
  014996c  stb 3, 172(31)
  0149970  addic 3, 4, 1
  0149974  stw 3, 68(31)
  0149978  b 0x149998
  014997c  lis 4, 150
  0149980  addic 4, 4, 14024
  0149984  lhz 4, 8(4)
  0149988  cmpwi 4, 0
  014998c  bf 2, 0x149998
  0149990  addic 3, 3, 1
  0149994  stw 3, 68(31)
  0149998  li 3, 0
  014999c  ld 0, 688(1)
  01499a0  mtlr 0
  01499a4  ld 26, 624(1)
  01499a8  ld 27, 632(1)
  01499ac  ld 28, 640(1)
  01499b0  ld 29, 648(1)
  01499b4  ld 30, 656(1)
  01499b8  ld 31, 664(1)
  01499bc  addi 1, 1, 672
  01499c0  blr

HelpControls_Draw:   # 0x1499c4, 0x184 bytes
  01499c4  stdu 1, -208(1)
  01499c8  mflr 0
  01499cc  std 0, 224(1)
  01499d0  std 31, 200(1)
  01499d4  ori 31, 3, 0
  01499d8  lwz 3, 68(31)
  01499dc  std 30, 192(1)
  01499e0  std 29, 184(1)
  01499e4  std 28, 176(1)
  01499e8  std 27, 168(1)
  01499ec  cmpwi 3, 4
  01499f0  bf 0, 0x1499fc
  01499f4  li 3, 0
  01499f8  b 0x149b24
  01499fc  li 30, 0
  0149a00  ori 3, 30, 0
  0149a04  bl 0x6d704
  0149a08  nop
  0149a0c  addic 6, 31, 100
  0149a10  lis 3, -32640
  0149a14  addic 27, 1, 128
  0149a18  ori 3, 3, 32896
  0149a1c  li 29, 256
  0149a20  lwz 4, 0(6)
  0149a24  lwz 5, 4(6)
  0149a28  clrldi 28, 3, 32
  0149a2c  lwz 7, 8(6)
  0149a30  li 3, 10
  0149a34  lwz 8, 12(6)
  0149a38  ori 10, 29, 0
  0149a3c  stw 4, 128(1)
  0149a40  stw 5, 132(1)
  0149a44  stw 7, 136(1)
  0149a48  ori 4, 30, 0
  0149a4c  stw 8, 140(1)
  0149a50  lwz 5, 16(6)
  0149a54  lwz 7, 20(6)
  0149a58  lwz 8, 24(6)
  0149a5c  lwz 9, 28(6)
  0149a60  stw 5, 144(1)
  0149a64  stw 7, 148(1)
  0149a68  li 5, 246
  0149a6c  stw 8, 152(1)
  0149a70  stw 9, 156(1)
  0149a74  lwz 7, 32(6)
  0149a78  ori 8, 30, 0
  0149a7c  ori 6, 29, 0
  0149a80  stw 7, 160(1)
  0149a84  std 28, 112(1)
  0149a88  ori 7, 30, 0
  0149a8c  std 27, 120(1)
  0149a90  ori 9, 29, 0
  0149a94  bl 0x6889c
  0149a98  nop
  0149a9c  addic 8, 31, 136
  0149aa0  ori 3, 29, 0
  0149aa4  ori 9, 29, 0
  0149aa8  lwz 4, 0(8)
  0149aac  lwz 5, 4(8)
  0149ab0  lwz 6, 8(8)
  0149ab4  lwz 7, 12(8)
  0149ab8  stw 4, 128(1)
  0149abc  stw 5, 132(1)
  0149ac0  stw 6, 136(1)
  0149ac4  stw 7, 140(1)
  0149ac8  lwz 4, 16(8)
  0149acc  lwz 5, 20(8)
  0149ad0  lwz 6, 24(8)
  0149ad4  lwz 7, 28(8)
  0149ad8  stw 4, 144(1)
  0149adc  stw 5, 148(1)
  0149ae0  ori 4, 30, 0
  0149ae4  stw 6, 152(1)
  0149ae8  ori 5, 29, 0
  0149aec  stw 7, 156(1)
  0149af0  ori 6, 29, 0
  0149af4  lwz 10, 32(8)
  0149af8  ori 7, 30, 0
  0149afc  ori 8, 30, 0
  0149b00  stw 10, 160(1)
  0149b04  std 28, 112(1)
  0149b08  ori 10, 29, 0
  0149b0c  std 27, 120(1)
  0149b10  bl 0x6889c
  0149b14  nop
  0149b18  bl 0x6d708
  0149b1c  nop
  0149b20  li 3, 8
  0149b24  ld 0, 224(1)
  0149b28  mtlr 0
  0149b2c  ld 27, 168(1)
  0149b30  ld 28, 176(1)
  0149b34  ld 29, 184(1)
  0149b38  ld 30, 192(1)
  0149b3c  ld 31, 200(1)
  0149b40  addi 1, 1, 208
  0149b44  blr

MapPage_DrawOverlay:   # 0x149b50, 0x40c bytes
  0149b50  stdu 1, -224(1)
  0149b54  mflr 0
  0149b58  std 0, 240(1)
  0149b5c  stfd 28, 192(1)
  0149b60  stfd 29, 200(1)
  0149b64  stfd 30, 208(1)
  0149b68  stfd 31, 216(1)
  0149b6c  std 31, 184(1)
  0149b70  lis 31, 162
  0149b74  addic 31, 31, 1216
  0149b78  lwz 3, 552(31)
  0149b7c  cmpwi 3, 0
  0149b80  cmpwi 1, 3, 17
  0149b84  std 30, 176(1)
  0149b88  std 29, 168(1)
  0149b8c  std 28, 160(1)
  0149b90  std 27, 152(1)
  0149b94  cmpwi 6, 3, 13
  0149b98  bf 0, 0x149ba4
  0149b9c  li 3, 0
  0149ba0  b 0x149f28
  0149ba4  cmpwi 3, 6
  0149ba8  bt 2, 0x149bb4
  0149bac  bt 26, 0x149bb4
  0149bb0  bf 6, 0x149dc0
  0149bb4  li 30, 0
  0149bb8  li 28, 22
  0149bbc  ori 3, 30, 0
  0149bc0  ori 4, 30, 0
  0149bc4  ori 8, 30, 0
  0149bc8  ori 9, 30, 0
  0149bcc  ori 10, 30, 0
  0149bd0  ori 5, 30, 0
  0149bd4  ori 6, 30, 0
  0149bd8  ori 7, 30, 0
  0149bdc  bl 0x502f7c
  0149be0  nop
  0149be4  ori 4, 3, 0
  0149be8  ori 3, 28, 0
  0149bec  bl 0x174f80
  0149bf0  nop
  0149bf4  li 27, 1
  0149bf8  li 29, 6
  0149bfc  ori 3, 27, 0
  0149c00  ori 4, 27, 0
  0149c04  ori 8, 30, 0
  0149c08  ori 5, 30, 0
  0149c0c  ori 6, 30, 0
  0149c10  ori 7, 30, 0
  0149c14  bl 0x502f08
  0149c18  nop
  0149c1c  ori 4, 3, 0
  0149c20  ori 3, 29, 0
  0149c24  bl 0x174f80
  0149c28  nop
  0149c2c  lis 3, 150
  0149c30  addic 3, 3, 27456
  0149c34  li 29, 128
  0149c38  li 6, 8
  0149c3c  lhz 4, 76(3)
  0149c40  lhz 3, 78(3)
  0149c44  extsh 4, 4
  0149c48  extsh 3, 3
  0149c4c  extsw 4, 4
  0149c50  ori 7, 6, 0
  0149c54  std 4, 128(1)
  0149c58  extsw 4, 3
  0149c5c  lis 3, 21
  0149c60  addi 5, 3, -25784
  0149c64  addic 3, 31, 600
  0149c68  lfd 1, 128(1)
  0149c6c  std 4, 128(1)
  0149c70  lfs 29, 0(5)
  0149c74  fcfid 31, 1
  0149c78  std 29, 120(1)
  0149c7c  lfd 3, 128(1)
  0149c80  fmr 1, 29
  0149c84  fcfid 30, 3
  0149c88  fmr 2, 29
  0149c8c  fmr 5, 29
  0149c90  fmr 6, 29
  0149c94  frsp 31, 31
  0149c98  frsp 30, 30
  0149c9c  fmr 3, 31
  0149ca0  fmr 4, 30
  0149ca4  bl 0xd78a4
  0149ca8  nop
  0149cac  ori 3, 27, 0
  0149cb0  li 4, 5
  0149cb4  ori 8, 30, 0
  0149cb8  li 5, 96
  0149cbc  ori 9, 30, 0
  0149cc0  li 6, 3
  0149cc4  ori 7, 30, 0
  0149cc8  ori 10, 30, 0
  0149ccc  bl 0x502f7c
  0149cd0  nop
  0149cd4  ori 4, 3, 0
  0149cd8  ori 3, 28, 0
  0149cdc  bl 0x174f80
  0149ce0  nop
  0149ce4  lis 30, 346
  0149ce8  lis 3, -30584
  0149cec  ori 3, 3, 34953
  0149cf0  lwz 4, -15568(30)
  0149cf4  mulhw 3, 3, 4
  0149cf8  addc 3, 3, 4
  0149cfc  srawi 3, 3, 5
  0149d00  srwi 5, 3, 31
  0149d04  addc 3, 3, 5
  0149d08  sldi 5, 3, 6
  0149d0c  sldi 3, 3, 2
  0149d10  subc 3, 5, 3
  0149d14  subc 3, 4, 3
  0149d18  cmpwi 3, 40
  0149d1c  bf 0, 0x149d50
  0149d20  li 6, 8
  0149d24  fmr 1, 29
  0149d28  fmr 2, 29
  0149d2c  addic 3, 31, 636
  0149d30  fmr 3, 31
  0149d34  ori 7, 6, 0
  0149d38  fmr 4, 30
  0149d3c  std 29, 120(1)
  0149d40  fmr 5, 29
  0149d44  fmr 6, 29
  0149d48  bl 0xd78a4
  0149d4c  nop
  0149d50  lis 3, 6990
  0149d54  lwz 4, -15568(30)
  0149d58  ori 3, 3, 33205
  0149d5c  mulhw 3, 3, 4
  0149d60  srawi 3, 3, 4
  0149d64  srwi 5, 3, 31
  0149d68  addc 3, 3, 5
  0149d6c  sldi 5, 3, 5
  0149d70  subc 5, 5, 3
  0149d74  subc 3, 5, 3
  0149d78  sldi 5, 3, 2
  0149d7c  addc 3, 3, 5
  0149d80  subc 3, 4, 3
  0149d84  cmpwi 3, 90
  0149d88  bf 0, 0x149f24
  0149d8c  li 6, 8
  0149d90  fmr 1, 29
  0149d94  addic 3, 31, 672
  0149d98  fmr 2, 29
  0149d9c  ori 7, 6, 0
  0149da0  fmr 3, 31
  0149da4  std 29, 120(1)
  0149da8  fmr 4, 30
  0149dac  fmr 5, 29
  0149db0  fmr 6, 29
  0149db4  bl 0xd78a4
  0149db8  nop
  0149dbc  b 0x149f24
  0149dc0  lis 4, 115
  0149dc4  slwi 5, 3, 2
  0149dc8  addic 4, 4, 21716
  0149dcc  extsw 5, 5
  0149dd0  lis 6, 150
  0149dd4  lis 7, 21
  0149dd8  mulli 3, 3, 683
  0149ddc  lwzx 4, 4, 5
  0149de0  addic 5, 6, 27456
  0149de4  addi 8, 7, -25784
  0149de8  extsw 6, 4
  0149dec  slwi 4, 4, 1
  0149df0  li 29, 128
  0149df4  lhz 7, 76(5)
  0149df8  lfs 5, 4(8)
  0149dfc  extsh 7, 7
  0149e00  std 6, 128(1)
  0149e04  sldi 6, 7, 4
  0149e08  lhz 5, 78(5)
  0149e0c  lis 7, 346
  0149e10  subc 6, 6, 4
  0149e14  lfd 2, 128(1)
  0149e18  extsh 5, 5
  0149e1c  srawi 6, 6, 4
  0149e20  sldi 5, 5, 4
  0149e24  fcfid 2, 2
  0149e28  extsw 6, 6
  0149e2c  subc 4, 5, 4
  0149e30  srawi 4, 4, 4
  0149e34  std 6, 128(1)
  0149e38  lwz 5, -15568(7)
  0149e3c  extsw 4, 4
  0149e40  lfd 1, 128(1)
  0149e44  addc 3, 5, 3
  0149e48  fcfid 1, 1
  0149e4c  std 4, 128(1)
  0149e50  srawi 5, 3, 11
  0149e54  std 29, 120(1)
  0149e58  frsp 2, 2
  0149e5c  addze 5, 5
  0149e60  sldi 5, 5, 11
  0149e64  li 30, 8
  0149e68  subc 3, 3, 5
  0149e6c  frsp 30, 1
  0149e70  lfd 1, 128(1)
  0149e74  extsw 5, 3
  0149e78  fcfid 4, 1
  0149e7c  addic 3, 31, 600
  0149e80  fmuls 31, 2, 5
  0149e84  ori 6, 30, 0
  0149e88  std 5, 128(1)
  0149e8c  ori 7, 30, 0
  0149e90  lfs 29, 0(8)
  0149e94  fmr 6, 29
  0149e98  fmr 3, 30
  0149e9c  frsp 28, 4
  0149ea0  lfd 4, 128(1)
  0149ea4  fmr 1, 31
  0149ea8  fmr 2, 31
  0149eac  fcfid 7, 4
  0149eb0  fmr 4, 28
  0149eb4  frsp 7, 7
  0149eb8  fmuls 5, 7, 5
  0149ebc  bl 0xd78a4
  0149ec0  nop
  0149ec4  addic 3, 31, 636
  0149ec8  fmr 1, 31
  0149ecc  ori 6, 30, 0
  0149ed0  fmr 2, 31
  0149ed4  ori 7, 30, 0
  0149ed8  fmr 3, 30
  0149edc  std 29, 120(1)
  0149ee0  fmr 4, 28
  0149ee4  fmr 5, 29
  0149ee8  fmr 6, 29
  0149eec  bl 0xd78a4
  0149ef0  nop
  0149ef4  addic 3, 31, 672
  0149ef8  fmr 1, 31
  0149efc  ori 6, 30, 0
  0149f00  fmr 2, 31
  0149f04  ori 7, 30, 0
  0149f08  fmr 3, 30
  0149f0c  std 29, 120(1)
  0149f10  fmr 4, 28
  0149f14  fmr 5, 29
  0149f18  fmr 6, 29
  0149f1c  bl 0xd78a4
  0149f20  nop
  0149f24  li 3, 4
  0149f28  ld 0, 240(1)
  0149f2c  mtlr 0
  0149f30  lfd 28, 192(1)
  0149f34  lfd 29, 200(1)
  0149f38  lfd 30, 208(1)
  0149f3c  lfd 31, 216(1)
  0149f40  ld 27, 152(1)
  0149f44  ld 28, 160(1)
  0149f48  ld 29, 168(1)
  0149f4c  ld 30, 176(1)
  0149f50  ld 31, 184(1)
  0149f54  addi 1, 1, 224
  0149f58  blr

SlotConfig_Draw:   # 0x149f88, 0x4cc bytes
  0149f88  stdu 1, -240(1)
  0149f8c  mflr 0
  0149f90  std 0, 256(1)
  0149f94  stfd 27, 200(1)
  0149f98  stfd 28, 208(1)
  0149f9c  stfd 29, 216(1)
  0149fa0  stfd 30, 224(1)
  0149fa4  stfd 31, 232(1)
  0149fa8  std 31, 192(1)
  0149fac  std 27, 160(1)
  0149fb0  ori 31, 3, 0
  0149fb4  std 29, 176(1)
  0149fb8  lis 27, 21
  0149fbc  li 29, 0
  0149fc0  std 30, 184(1)
  0149fc4  addi 27, 27, -24740
  0149fc8  ori 30, 31, 0
  0149fcc  std 28, 168(1)
  0149fd0  std 26, 152(1)
  0149fd4  std 25, 144(1)
  0149fd8  std 24, 136(1)
  0149fdc  ori 3, 29, 0
  0149fe0  bl 0x6d704
  0149fe4  nop
  0149fe8  lwz 28, 32(31)
  0149fec  lwz 3, 36(31)
  0149ff0  extsw 4, 28
  0149ff4  cmpw 28, 3
  0149ff8  std 4, 112(1)
  0149ffc  extsw 4, 3
  014a000  lfs 29, 0(27)
  014a004  lfd 1, 112(1)
  014a008  fcfid 1, 1
  014a00c  std 4, 112(1)
  014a010  frsp 31, 1
  014a014  fmuls 31, 31, 29
  014a018  lfd 1, 112(1)
  014a01c  fcfid 1, 1
  014a020  frsp 30, 1
  014a024  fmuls 30, 30, 29
  014a028  bt 0, 0x14a034
  014a02c  ori 28, 3, 0
  014a030  b 0x14a034
  014a034  extsw 3, 28
  014a038  ori 28, 29, 0
  014a03c  std 3, 112(1)
  014a040  lfs 1, 4(27)
  014a044  lfd 2, 112(1)
  014a048  ori 26, 28, 0
  014a04c  fcfid 2, 2
  014a050  frsp 2, 2
  014a054  fmuls 29, 2, 29
  014a058  fsubs 29, 29, 1
  014a05c  extsw 3, 28
  014a060  std 3, 112(1)
  014a064  lfs 1, 8(27)
  014a068  lfs 2, 12(27)
  014a06c  lfd 3, 112(1)
  014a070  fcfid 3, 3
  014a074  frsp 3, 3
  014a078  fmuls 1, 3, 1
  014a07c  fadds 1, 1, 2
  014a080  bl 0x502648
  014a084  nop
  014a088  fmr 4, 1
  014a08c  lfs 2, 16(27)
  014a090  lfs 1, 20(27)
  014a094  fadds 2, 4, 2
  014a098  fmr 3, 2
  014a09c  fsubs 5, 1, 3
  014a0a0  fcmpu 0, 3, 5
  014a0a4  bt 0, 0x14a0ac
  014a0a8  fmr 3, 5
  014a0ac  fmr 6, 2
  014a0b0  lfs 5, 24(27)
  014a0b4  fmr 2, 3
  014a0b8  fsubs 3, 5, 6
  014a0bc  fcmpu 0, 2, 3
  014a0c0  bt 1, 0x14a0c8
  014a0c4  fmr 2, 3
  014a0c8  fmuls 8, 2, 2
  014a0cc  lfs 27, 28(27)
  014a0d0  fmr 7, 1
  014a0d4  lfs 1, 32(27)
  014a0d8  lfs 10, 36(27)
  014a0dc  fmr 6, 4
  014a0e0  lfs 3, 40(27)
  014a0e4  fmuls 9, 8, 2
  014a0e8  fsubs 7, 7, 6
  014a0ec  fmuls 11, 8, 9
  014a0f0  fmuls 9, 9, 27
  014a0f4  fcmpu 0, 6, 7
  014a0f8  fmuls 12, 8, 11
  014a0fc  fadds 9, 2, 9
  014a100  fmuls 11, 11, 1
  014a104  fmr 2, 10
  014a108  fmuls 8, 8, 12
  014a10c  fadds 9, 9, 11
  014a110  fmuls 10, 12, 2
  014a114  fmuls 8, 8, 3
  014a118  fadds 9, 9, 10
  014a11c  fadds 8, 9, 8
  014a120  fmuls 28, 8, 29
  014a124  fadds 28, 31, 28
  014a128  bt 0, 0x14a130
  014a12c  fmr 6, 7
  014a130  fsubs 4, 5, 4
  014a134  fcmpu 0, 6, 4
  014a138  bt 1, 0x14a140
  014a13c  fmr 6, 4
  014a140  fmuls 4, 6, 6
  014a144  lwz 3, 80(30)
  014a148  cmpw 28, 3
  014a14c  fmuls 5, 4, 6
  014a150  fmuls 7, 4, 5
  014a154  fmuls 5, 5, 27
  014a158  fmuls 8, 4, 7
  014a15c  fadds 5, 6, 5
  014a160  fmuls 1, 7, 1
  014a164  fmuls 4, 4, 8
  014a168  fmuls 2, 8, 2
  014a16c  fadds 1, 5, 1
  014a170  fmuls 3, 4, 3
  014a174  fadds 1, 1, 2
  014a178  fadds 1, 1, 3
  014a17c  fmuls 27, 1, 29
  014a180  fadds 27, 30, 27
  014a184  bf 2, 0x14a238
  014a188  lis 3, 346
  014a18c  lwz 3, -15568(3)
  014a190  clrlwi 3, 3, 26
  014a194  addic 3, 3, -32
  014a198  bl 0x5c4988
  014a19c  nop
  014a1a0  fctiwz 1, 28
  014a1a4  lis 4, 1
  014a1a8  fctiwz 2, 27
  014a1ac  addic 3, 3, 64
  014a1b0  ori 4, 4, 514
  014a1b4  mullw 7, 3, 4
  014a1b8  stfd 1, 112(1)
  014a1bc  lis 9, -32768
  014a1c0  lwz 25, 116(1)
  014a1c4  ori 8, 29, 0
  014a1c8  stfd 2, 112(1)
  014a1cc  or 7, 7, 9
  014a1d0  lwz 24, 116(1)
  014a1d4  addic 5, 25, 19
  014a1d8  addic 3, 25, -19
  014a1dc  addic 4, 24, -19
  014a1e0  addic 6, 24, 19
  014a1e4  extsw 4, 4
  014a1e8  extsw 5, 5
  014a1ec  extsw 3, 3
  014a1f0  extsw 6, 6
  014a1f4  clrldi 7, 7, 32
  014a1f8  bl 0xca72c
  014a1fc  nop
  014a200  lis 4, 115
  014a204  addic 5, 24, -18
  014a208  addic 6, 25, 18
  014a20c  addic 3, 25, -18
  014a210  addic 9, 24, 18
  014a214  lwz 7, -26560(4)
  014a218  extsw 4, 5
  014a21c  extsw 5, 6
  014a220  extsw 3, 3
  014a224  ori 8, 29, 0
  014a228  extsw 7, 7
  014a22c  extsw 6, 9
  014a230  bl 0xca72c
  014a234  nop
  014a238  addic 3, 30, 48
  014a23c  addc 3, 3, 26
  014a240  clrldi 3, 3, 32
  014a244  lwz 3, 0(3)
  014a248  extsw 3, 3
  014a24c  cmpwi 3, 0
  014a250  bf 2, 0x14a2a4
  014a254  fctiwz 1, 28
  014a258  fctiwz 2, 27
  014a25c  lis 7, 16448
  014a260  ori 8, 29, 0
  014a264  ori 7, 7, 16448
  014a268  stfd 1, 112(1)
  014a26c  lwz 3, 116(1)
  014a270  stfd 2, 112(1)
  014a274  lwz 4, 116(1)
  014a278  addic 5, 3, 15
  014a27c  addic 6, 4, 15
  014a280  addic 3, 3, -15
  014a284  addic 4, 4, -15
  014a288  extsw 5, 5
  014a28c  extsw 3, 3
  014a290  extsw 6, 6
  014a294  extsw 4, 4
  014a298  bl 0xca72c
  014a29c  nop
  014a2a0  b 0x14a324
  014a2a4  sldi 5, 3, 4
  014a2a8  lis 7, 151
  014a2ac  subc 8, 3, 5
  014a2b0  addic 7, 7, -25432
  014a2b4  sldi 8, 8, 2
  014a2b8  lis 4, 114
  014a2bc  subc 5, 5, 8
  014a2c0  addic 6, 4, 4152
  014a2c4  extsw 5, 5
  014a2c8  lbzx 3, 7, 3
  014a2cc  ori 4, 29, 0
  014a2d0  cmpwi 3, 0
  014a2d4  lhzx 3, 6, 5
  014a2d8  bt 2, 0x14a2e0
  014a2dc  li 4, 4
  014a2e0  bl 0xca3e4
  014a2e4  nop
  014a2e8  fctiwz 1, 28
  014a2ec  li 6, 32
  014a2f0  fctiwz 2, 27
  014a2f4  li 8, 128
  014a2f8  ori 7, 6, 0
  014a2fc  stfd 1, 112(1)
  014a300  lwz 4, 116(1)
  014a304  stfd 2, 112(1)
  014a308  lwz 5, 116(1)
  014a30c  addic 4, 4, -17
  014a310  addic 5, 5, -17
  014a314  extsw 4, 4
  014a318  extsw 5, 5
  014a31c  bl 0xcc0f0
  014a320  nop
  014a324  addic 28, 28, 1
  014a328  addic 26, 26, 4
  014a32c  cmpwi 28, 8
  014a330  bt 0, 0x14a05c
  014a334  lis 3, 0
  014a338  ori 4, 29, 0
  014a33c  ori 30, 3, 59806
  014a340  ori 3, 30, 0
  014a344  bl 0xca3e4
  014a348  nop
  014a34c  li 28, 39
  014a350  li 27, -32
  014a354  li 26, 128
  014a358  li 4, 8
  014a35c  ori 5, 28, 0
  014a360  ori 7, 27, 0
  014a364  ori 8, 26, 0
  014a368  li 6, 32
  014a36c  bl 0xcc0f0
  014a370  nop
  014a374  ori 4, 29, 0
  014a378  ori 3, 30, 0
  014a37c  bl 0xca3e4
  014a380  nop
  014a384  lwz 4, 32(31)
  014a388  ori 5, 28, 0
  014a38c  addic 4, 4, -10
  014a390  ori 6, 27, 0
  014a394  extsw 4, 4
  014a398  ori 7, 27, 0
  014a39c  ori 8, 26, 0
  014a3a0  bl 0xcc0f0
  014a3a4  nop
  014a3a8  lis 3, -32513
  014a3ac  li 30, 15
  014a3b0  ori 3, 3, 43144
  014a3b4  lis 6, 101
  014a3b8  li 29, -1
  014a3bc  clrldi 28, 3, 32
  014a3c0  li 3, 40
  014a3c4  addic 6, 6, 13956
  014a3c8  ori 4, 30, 0
  014a3cc  ori 7, 29, 0
  014a3d0  ori 5, 28, 0
  014a3d4  bl 0x6cc0c
  014a3d8  nop
  014a3dc  lwz 3, 32(31)
  014a3e0  lis 6, 101
  014a3e4  addic 3, 3, -60
  014a3e8  addic 6, 6, 13964
  014a3ec  extsw 3, 3
  014a3f0  ori 4, 30, 0
  014a3f4  ori 5, 28, 0
  014a3f8  ori 7, 29, 0
  014a3fc  bl 0x6cc0c
  014a400  nop
  014a404  bl 0x6d708
  014a408  nop
  014a40c  li 3, 2
  014a410  ld 0, 256(1)
  014a414  mtlr 0
  014a418  lfd 27, 200(1)
  014a41c  lfd 28, 208(1)
  014a420  lfd 29, 216(1)
  014a424  lfd 30, 224(1)
  014a428  lfd 31, 232(1)
  014a42c  ld 24, 136(1)
  014a430  ld 25, 144(1)
  014a434  ld 26, 152(1)
  014a438  ld 27, 160(1)
  014a43c  ld 28, 168(1)
  014a440  ld 29, 176(1)
  014a444  ld 30, 184(1)
  014a448  ld 31, 192(1)
  014a44c  addi 1, 1, 240
  014a450  blr

ConfirmDialog_Update:   # 0x14a460, 0x40c bytes
  014a460  stdu 1, -192(1)
  014a464  mflr 0
  014a468  std 0, 208(1)
  014a46c  std 29, 168(1)
  014a470  std 31, 184(1)
  014a474  lis 29, 165
  014a478  ori 31, 3, 0
  014a47c  std 30, 176(1)
  014a480  addic 29, 29, 11184
  014a484  ori 30, 31, 0
  014a488  lwz 4, 4(29)
  014a48c  lwz 3, 60(31)
  014a490  cmpwi 3, 0
  014a494  lwz 5, 64(4)
  014a498  subc 5, 5, 31
  014a49c  std 28, 160(1)
  014a4a0  std 27, 152(1)
  014a4a4  cmpwi 1, 5, 0
  014a4a8  bt 2, 0x14a5a4
  014a4ac  addic 3, 3, -1
  014a4b0  cmpwi 3, 4
  014a4b4  stw 3, 60(31)
  014a4b8  li 31, 4
  014a4bc  bf 0, 0x14a4c4
  014a4c0  ori 31, 3, 0
  014a4c4  extsw 3, 31
  014a4c8  lis 4, 21
  014a4cc  li 0, 112
  014a4d0  std 3, 128(1)
  014a4d4  addi 3, 4, -23468
  014a4d8  lfs 1, 0(3)
  014a4dc  lfd 2, 128(1)
  014a4e0  fcfid 2, 2
  014a4e4  lis 3, 150
  014a4e8  addic 4, 3, -12528
  014a4ec  li 3, 0
  014a4f0  frsp 2, 2
  014a4f4  fmuls 1, 2, 1
  014a4f8  stfs 1, 112(1)
  014a4fc  stfs 1, 116(1)
  014a500  stfs 1, 120(1)
  014a504  stfs 1, 124(1)
  014a508  lvx 2, 1, 0
  014a50c  vspltw 2, 2, 0
  014a510  vspltw 2, 2, 0
  014a514  vspltw 2, 2, 0
  014a518  vspltw 2, 2, 0
  014a51c  vspltw 2, 2, 0
  014a520  vspltw 2, 2, 0
  014a524  vspltw 2, 2, 0
  014a528  vspltw 2, 2, 0
  014a52c  vspltw 2, 2, 0
  014a530  vspltw 2, 2, 0
  014a534  vspltw 2, 2, 0
  014a538  vspltw 2, 2, 0
  014a53c  vspltw 2, 2, 0
  014a540  vspltw 2, 2, 0
  014a544  vspltw 2, 2, 0
  014a548  vspltw 2, 2, 0
  014a54c  vspltw 2, 2, 0
  014a550  vspltw 2, 2, 0
  014a554  vspltw 2, 2, 0
  014a558  vspltw 2, 2, 0
  014a55c  vspltw 2, 2, 0
  014a560  vspltw 2, 2, 0
  014a564  vspltw 2, 2, 0
  014a568  vspltw 2, 2, 0
  014a56c  vspltw 2, 2, 0
  014a570  vspltw 2, 2, 0
  014a574  vspltw 2, 2, 0
  014a578  vspltw 2, 2, 0
  014a57c  vspltw 2, 2, 0
  014a580  vspltw 2, 2, 0
  014a584  vspltw 2, 2, 0
  014a588  vspltw 2, 2, 0
  014a58c  vspltw 2, 2, 0
  014a590  vspltw 2, 2, 0
  014a594  vspltw 2, 2, 0
  014a598  vspltw 2, 2, 0
  014a59c  stvewx 2, 0, 4
  014a5a0  b 0x14a848
  014a5a4  bt 6, 0x14a5b0
  014a5a8  li 3, 0
  014a5ac  b 0x14a848
  014a5b0  lis 3, 150
  014a5b4  li 6, 3328
  014a5b8  addic 3, 3, 19008
  014a5bc  lwz 5, 196(3)
  014a5c0  and 6, 5, 6
  014a5c4  cmpwi 6, 0
  014a5c8  bt 2, 0x14a5e0
  014a5cc  lwz 6, 288(29)
  014a5d0  cmpwi 6, 0
  014a5d4  bf 2, 0x14a5e0
  014a5d8  li 3, 1
  014a5dc  b 0x14a848
  014a5e0  rlwinm 5, 5, 0, 27, 27
  014a5e4  cmpwi 5, 0
  014a5e8  bt 2, 0x14a618
  014a5ec  lwz 4, 56(4)
  014a5f0  cmpwi 4, 0
  014a5f4  bt 2, 0x14a604
  014a5f8  li 3, 0
  014a5fc  stw 4, 8(29)
  014a600  b 0x14a848
  014a604  lwz 4, 288(29)
  014a608  cmpwi 4, 0
  014a60c  bf 2, 0x14a618
  014a610  li 3, -1
  014a614  b 0x14a848
  014a618  lwz 5, 196(3)
  014a61c  lwz 28, 56(31)
  014a620  rlwinm 4, 5, 0, 19, 19
  014a624  cmpwi 4, 0
  014a628  bt 2, 0x14a63c
  014a62c  cmpwi 28, 0
  014a630  bt 2, 0x14a63c
  014a634  addic 4, 28, -1
  014a638  stw 4, 56(31)
  014a63c  rlwinm 4, 5, 0, 17, 17
  014a640  cmpwi 4, 0
  014a644  bt 2, 0x14a67c
  014a648  lwz 4, 56(31)
  014a64c  lwz 5, 52(31)
  014a650  sldi 6, 4, 4
  014a654  sldi 7, 4, 2
  014a658  addic 5, 5, 20
  014a65c  addc 6, 6, 7
  014a660  addc 5, 5, 6
  014a664  clrldi 5, 5, 32
  014a668  lwz 5, 0(5)
  014a66c  cmpwi 5, 0
  014a670  bt 2, 0x14a67c
  014a674  addic 4, 4, 1
  014a678  stw 4, 56(31)
  014a67c  lis 4, 144
  014a680  lwz 3, 196(3)
  014a684  lwz 4, 11988(4)
  014a688  and 3, 3, 4
  014a68c  cmpwi 3, 0
  014a690  bt 2, 0x14a824
  014a694  li 3, 0
  014a698  lwz 5, 20(30)
  014a69c  li 4, 17
  014a6a0  bl 0x15d12c
  014a6a4  nop
  014a6a8  lwz 3, 56(31)
  014a6ac  lwz 4, 52(31)
  014a6b0  sldi 5, 3, 4
  014a6b4  sldi 3, 3, 2
  014a6b8  addic 6, 4, 16
  014a6bc  addc 3, 5, 3
  014a6c0  addc 5, 6, 3
  014a6c4  clrldi 5, 5, 32
  014a6c8  lwz 5, 0(5)
  014a6cc  clrlwi 5, 5, 31
  014a6d0  cmpwi 5, 0
  014a6d4  bt 2, 0x14a7f8
  014a6d8  lis 27, 165
  014a6dc  lbz 3, 11872(27)
  014a6e0  cmpwi 3, 0
  014a6e4  bt 2, 0x14a704
  014a6e8  lwz 4, 4(29)
  014a6ec  li 3, 6
  014a6f0  li 5, 0
  014a6f4  extsw 4, 4
  014a6f8  bl 0x78178
  014a6fc  nop
  014a700  b 0x14a824
  014a704  li 3, 4
  014a708  bl 0x6dad0
  014a70c  nop
  014a710  lis 3, 21
  014a714  lis 4, 114
  014a718  addi 3, 3, -23468
  014a71c  li 0, 112
  014a720  lfs 1, 4(3)
  014a724  lfs 2, -3056(4)
  014a728  fmuls 1, 2, 1
  014a72c  fctiwz 1, 1
  014a730  stfd 1, 128(1)
  014a734  lwz 3, 132(1)
  014a738  stw 3, 112(1)
  014a73c  stw 3, 116(1)
  014a740  stw 3, 120(1)
  014a744  stw 3, 124(1)
  014a748  lvx 2, 1, 0
  014a74c  vspltw 2, 2, 0
  014a750  vspltw 2, 2, 0
  014a754  vspltw 2, 2, 0
  014a758  vspltw 2, 2, 0
  014a75c  vspltw 2, 2, 0
  014a760  vspltw 2, 2, 0
  014a764  li 3, 60
  014a768  vspltw 2, 2, 0
  014a76c  vspltw 2, 2, 0
  014a770  vspltw 2, 2, 0
  014a774  vspltw 2, 2, 0
  014a778  vspltw 2, 2, 0
  014a77c  vspltw 2, 2, 0
  014a780  vspltw 2, 2, 0
  014a784  vspltw 2, 2, 0
  014a788  vspltw 2, 2, 0
  014a78c  vspltw 2, 2, 0
  014a790  vspltw 2, 2, 0
  014a794  vspltw 2, 2, 0
  014a798  vspltw 2, 2, 0
  014a79c  vspltw 2, 2, 0
  014a7a0  vspltw 2, 2, 0
  014a7a4  vspltw 2, 2, 0
  014a7a8  vspltw 2, 2, 0
  014a7ac  vspltw 2, 2, 0
  014a7b0  vspltw 2, 2, 0
  014a7b4  vspltw 2, 2, 0
  014a7b8  vspltw 2, 2, 0
  014a7bc  vspltw 2, 2, 0
  014a7c0  vspltw 2, 2, 0
  014a7c4  vspltw 2, 2, 0
  014a7c8  vspltw 2, 2, 0
  014a7cc  vspltw 2, 2, 0
  014a7d0  vspltw 2, 2, 0
  014a7d4  vspltw 2, 2, 0
  014a7d8  vspltw 2, 2, 0
  014a7dc  vspltw 2, 2, 0
  014a7e0  stvewx 2, 3, 31
  014a7e4  lbz 3, 11872(27)
  014a7e8  cntlzw 3, 3
  014a7ec  srwi 3, 3, 5
  014a7f0  stb 3, 11872(27)
  014a7f4  b 0x14a824
  014a7f8  addic 4, 4, 4
  014a7fc  addc 4, 4, 3
  014a800  clrldi 4, 4, 32
  014a804  lwz 3, 0(4)
  014a808  cmpwi 3, 0
  014a80c  bt 2, 0x14a824
  014a810  lwz 3, 0(4)
  014a814  lbz 4, 0(3)
  014a818  cntlzw 4, 4
  014a81c  srwi 4, 4, 5
  014a820  stb 4, 0(3)
  014a824  lwz 3, 56(31)
  014a828  cmpw 3, 28
  014a82c  bt 2, 0x14a844
  014a830  li 3, 1
  014a834  lwz 5, 20(30)
  014a838  li 4, 17
  014a83c  bl 0x15d12c
  014a840  nop
  014a844  li 3, 0
  014a848  ld 0, 208(1)
  014a84c  mtlr 0
  014a850  ld 27, 152(1)
  014a854  ld 28, 160(1)
  014a858  ld 29, 168(1)
  014a85c  ld 30, 176(1)
  014a860  ld 31, 184(1)
  014a864  addi 1, 1, 192
  014a868  blr

ConfirmDialog_Draw:   # 0x14a86c, 0x2f8 bytes
  014a86c  stdu 1, -240(1)
  014a870  mflr 0
  014a874  std 0, 256(1)
  014a878  std 31, 232(1)
  014a87c  std 29, 216(1)
  014a880  std 23, 168(1)
  014a884  ori 31, 3, 0
  014a888  li 29, 1
  014a88c  std 30, 224(1)
  014a890  lis 23, 21
  014a894  std 20, 144(1)
  014a898  ori 30, 31, 0
  014a89c  li 20, 0
  014a8a0  ori 3, 29, 0
  014a8a4  std 28, 208(1)
  014a8a8  li 4, 5
  014a8ac  li 28, 22
  014a8b0  addi 23, 23, -22420
  014a8b4  ori 6, 20, 0
  014a8b8  li 5, 4
  014a8bc  ori 10, 29, 0
  014a8c0  ori 7, 20, 0
  014a8c4  ori 8, 20, 0
  014a8c8  std 27, 200(1)
  014a8cc  std 26, 192(1)
  014a8d0  std 25, 184(1)
  014a8d4  std 24, 176(1)
  014a8d8  std 22, 160(1)
  014a8dc  std 21, 152(1)
  014a8e0  std 19, 136(1)
  014a8e4  ori 9, 20, 0
  014a8e8  bl 0x502f7c
  014a8ec  nop
  014a8f0  ori 4, 3, 0
  014a8f4  ori 3, 28, 0
  014a8f8  bl 0x174f80
  014a8fc  nop
  014a900  ori 3, 20, 0
  014a904  bl 0x6d704
  014a908  nop
  014a90c  lwz 3, 48(30)
  014a910  clrlwi 3, 3, 31
  014a914  cmpwi 3, 0
  014a918  bt 2, 0x14a9b8
  014a91c  lwz 3, 52(30)
  014a920  lwz 3, 0(3)
  014a924  cmpwi 3, 0
  014a928  bf 2, 0x14a9b8
  014a92c  lis 3, 21845
  014a930  lwz 5, 36(31)
  014a934  li 4, 16
  014a938  ori 3, 3, 21846
  014a93c  sth 29, 112(1)
  014a940  mulhw 3, 3, 5
  014a944  sth 29, 116(1)
  014a948  srwi 6, 3, 31
  014a94c  sth 20, 124(1)
  014a950  sth 20, 126(1)
  014a954  addic 5, 5, 1
  014a958  addc 6, 3, 6
  014a95c  lwz 3, 32(31)
  014a960  sth 4, 128(1)
  014a964  lis 7, -32513
  014a968  addic 4, 3, 1
  014a96c  sth 29, 130(1)
  014a970  srawi 8, 3, 1
  014a974  sth 20, 132(1)
  014a978  sth 20, 134(1)
  014a97c  ori 7, 7, 43144
  014a980  sth 5, 114(1)
  014a984  li 3, 20416
  014a988  sth 4, 118(1)
  014a98c  clrldi 29, 7, 32
  014a990  sth 8, 120(1)
  014a994  sth 6, 122(1)
  014a998  bl 0x7b740
  014a99c  nop
  014a9a0  ori 5, 3, 0
  014a9a4  li 6, -1
  014a9a8  addic 3, 1, 112
  014a9ac  ori 4, 29, 0
  014a9b0  bl 0x6a510
  014a9b4  nop
  014a9b8  lwz 3, 52(30)
  014a9bc  ori 28, 20, 0
  014a9c0  lwz 3, 0(3)
  014a9c4  cmpwi 3, 0
  014a9c8  bt 2, 0x14a9ec
  014a9cc  ori 3, 20, 0
  014a9d0  addic 3, 3, 20
  014a9d4  lwz 5, 52(30)
  014a9d8  addic 28, 28, 1
  014a9dc  extsw 4, 3
  014a9e0  lwzx 4, 5, 4
  014a9e4  cmpwi 4, 0
  014a9e8  bf 2, 0x14a9d0
  014a9ec  addic 27, 28, 1
  014a9f0  lwz 3, 36(31)
  014a9f4  ori 26, 20, 0
  014a9f8  lwz 5, 52(30)
  014a9fc  divw 4, 3, 27
  014aa00  divw 27, 3, 27
  014aa04  lwz 3, 0(5)
  014aa08  addic 28, 4, -8
  014aa0c  cmpwi 3, 0
  014aa10  extsw 28, 28
  014aa14  bt 2, 0x14ab14
  014aa18  ori 22, 20, 0
  014aa1c  ori 21, 22, 0
  014aa20  lwz 4, 52(30)
  014aa24  lis 3, -32513
  014aa28  lwz 5, 56(30)
  014aa2c  addc 25, 4, 22
  014aa30  cmpw 26, 5
  014aa34  ori 3, 3, 43144
  014aa38  clrldi 25, 25, 32
  014aa3c  bf 2, 0x14aa48
  014aa40  lis 3, -32736
  014aa44  ori 3, 3, 65535
  014aa48  lwz 4, 4(25)
  014aa4c  ori 29, 20, 0
  014aa50  cmpwi 4, 0
  014aa54  bt 2, 0x14aa5c
  014aa58  lbz 29, 0(4)
  014aa5c  ori 19, 3, 0
  014aa60  lwz 3, 0(25)
  014aa64  li 24, 12
  014aa68  extsw 3, 3
  014aa6c  bl 0x7b740
  014aa70  nop
  014aa74  ori 6, 3, 0
  014aa78  ori 3, 24, 0
  014aa7c  ori 4, 28, 0
  014aa80  li 7, -1
  014aa84  ori 5, 19, 0
  014aa88  bl 0x6cc0c
  014aa8c  nop
  014aa90  lis 3, -32513
  014aa94  lwz 4, 32(31)
  014aa98  cmpwi 29, 0
  014aa9c  ori 3, 3, 43144
  014aaa0  addic 24, 4, -12
  014aaa4  clrldi 29, 3, 32
  014aaa8  extsw 24, 24
  014aaac  bt 2, 0x14aabc
  014aab0  lwz 25, 8(25)
  014aab4  extsw 25, 25
  014aab8  b 0x14aac4
  014aabc  lwz 25, 12(25)
  014aac0  extsw 25, 25
  014aac4  ori 3, 25, 0
  014aac8  bl 0x7b740
  014aacc  nop
  014aad0  ori 6, 3, 0
  014aad4  li 7, -1
  014aad8  ori 3, 24, 0
  014aadc  ori 4, 28, 0
  014aae0  ori 5, 29, 0
  014aae4  bl 0x70130
  014aae8  nop
  014aaec  addic 21, 21, 20
  014aaf0  lwz 3, 52(30)
  014aaf4  addc 28, 28, 27
  014aaf8  extsw 4, 21
  014aafc  addic 22, 22, 20
  014ab00  extsw 28, 28
  014ab04  addic 26, 26, 1
  014ab08  lwzx 3, 3, 4
  014ab0c  cmpwi 3, 0
  014ab10  bf 2, 0x14aa20
  014ab14  bl 0x6d708
  014ab18  nop
  014ab1c  li 3, 2
  014ab20  ld 0, 256(1)
  014ab24  mtlr 0
  014ab28  ld 19, 136(1)
  014ab2c  ld 20, 144(1)
  014ab30  ld 21, 152(1)
  014ab34  ld 22, 160(1)
  014ab38  ld 23, 168(1)
  014ab3c  ld 24, 176(1)
  014ab40  ld 25, 184(1)
  014ab44  ld 26, 192(1)
  014ab48  ld 27, 200(1)
  014ab4c  ld 28, 208(1)
  014ab50  ld 29, 216(1)
  014ab54  ld 30, 224(1)
  014ab58  ld 31, 232(1)
  014ab5c  addi 1, 1, 240
  014ab60  blr

CameraSettings_Update:   # 0x14ab64, 0x218 bytes
  014ab64  stdu 1, -144(1)
  014ab68  mflr 0
  014ab6c  std 0, 160(1)
  014ab70  std 30, 128(1)
  014ab74  lis 4, 165
  014ab78  ori 30, 3, 0
  014ab7c  std 31, 136(1)
  014ab80  addic 4, 4, 11184
  014ab84  ori 31, 30, 0
  014ab88  lwz 3, 4(4)
  014ab8c  lwz 5, 64(3)
  014ab90  subc 5, 5, 30
  014ab94  std 29, 120(1)
  014ab98  std 28, 112(1)
  014ab9c  cmpwi 5, 0
  014aba0  bt 2, 0x14abac
  014aba4  li 3, 0
  014aba8  b 0x14ad5c
  014abac  lis 29, 150
  014abb0  li 6, 3328
  014abb4  addic 29, 29, 19008
  014abb8  lwz 5, 196(29)
  014abbc  and 6, 5, 6
  014abc0  cmpwi 6, 0
  014abc4  bt 2, 0x14abdc
  014abc8  lwz 6, 288(4)
  014abcc  cmpwi 6, 0
  014abd0  bf 2, 0x14abdc
  014abd4  li 3, 1
  014abd8  b 0x14ad5c
  014abdc  rlwinm 5, 5, 0, 27, 27
  014abe0  cmpwi 5, 0
  014abe4  bt 2, 0x14ac18
  014abe8  lwz 3, 56(3)
  014abec  cmpwi 3, 0
  014abf0  bt 2, 0x14ac04
  014abf4  ori 5, 3, 0
  014abf8  li 3, 0
  014abfc  stw 5, 8(4)
  014ac00  b 0x14ad5c
  014ac04  lwz 3, 288(4)
  014ac08  cmpwi 3, 0
  014ac0c  bf 2, 0x14ac18
  014ac10  li 3, -1
  014ac14  b 0x14ad5c
  014ac18  lwz 5, 196(29)
  014ac1c  lwz 3, 56(30)
  014ac20  rlwinm 4, 5, 0, 19, 19
  014ac24  cmpwi 4, 0
  014ac28  bt 2, 0x14ac3c
  014ac2c  cmpwi 3, 0
  014ac30  bt 2, 0x14ac3c
  014ac34  addic 4, 3, -1
  014ac38  stw 4, 56(30)
  014ac3c  rlwinm 4, 5, 0, 17, 17
  014ac40  cmpwi 4, 0
  014ac44  bt 2, 0x14ac74
  014ac48  lwz 5, 52(30)
  014ac4c  lwz 4, 56(30)
  014ac50  addic 5, 5, 32
  014ac54  slwi 6, 4, 5
  014ac58  addc 5, 5, 6
  014ac5c  clrldi 5, 5, 32
  014ac60  lwz 5, 0(5)
  014ac64  cmpwi 5, 0
  014ac68  bt 2, 0x14ac74
  014ac6c  addic 4, 4, 1
  014ac70  stw 4, 56(30)
  014ac74  lwz 4, 56(30)
  014ac78  cmpw 3, 4
  014ac7c  bt 2, 0x14ac94
  014ac80  li 3, 1
  014ac84  li 4, 17
  014ac88  lwz 5, 20(31)
  014ac8c  bl 0x15d12c
  014ac90  nop
  014ac94  lwz 4, 56(30)
  014ac98  li 3, 0
  014ac9c  lwz 5, 52(30)
  014aca0  slwi 4, 4, 5
  014aca4  ori 28, 3, 0
  014aca8  addc 4, 5, 4
  014acac  clrldi 4, 4, 32
  014acb0  addic 5, 4, 8
  014acb4  slwi 6, 3, 2
  014acb8  cmpwi 1, 3, 6
  014acbc  addc 5, 5, 6
  014acc0  clrldi 5, 5, 32
  014acc4  lwz 5, 0(5)
  014acc8  cmpwi 5, 0
  014accc  crorc 2, 2, 4
  014acd0  bt 2, 0x14acdc
  014acd4  addic 3, 3, 1
  014acd8  b 0x14acb0
  014acdc  lis 5, 144
  014ace0  lwz 6, 196(29)
  014ace4  lwz 5, 11988(5)
  014ace8  and 5, 6, 5
  014acec  cmpwi 5, 0
  014acf0  bt 2, 0x14ad58
  014acf4  lwz 4, 4(4)
  014acf8  cmpwi 4, 0
  014acfc  bt 2, 0x14ad58
  014ad00  lis 5, 115
  014ad04  addic 5, 5, -11424
  014ad08  cmpw 30, 5
  014ad0c  bf 2, 0x14ad2c
  014ad10  lwz 5, 0(4)
  014ad14  addic 5, 5, 1
  014ad18  divw 6, 5, 3
  014ad1c  mullw 3, 6, 3
  014ad20  subc 3, 5, 3
  014ad24  stw 3, 0(4)
  014ad28  b 0x14ad44
  014ad2c  lbz 5, 0(4)
  014ad30  addic 5, 5, 1
  014ad34  divw 6, 5, 3
  014ad38  mullw 3, 6, 3
  014ad3c  subc 3, 5, 3
  014ad40  stb 3, 0(4)
  014ad44  li 4, 17
  014ad48  lwz 5, 20(31)
  014ad4c  ori 3, 28, 0
  014ad50  bl 0x15d12c
  014ad54  nop
  014ad58  ori 3, 28, 0
  014ad5c  ld 0, 160(1)
  014ad60  mtlr 0
  014ad64  ld 28, 112(1)
  014ad68  ld 29, 120(1)
  014ad6c  ld 30, 128(1)
  014ad70  ld 31, 136(1)
  014ad74  addi 1, 1, 144
  014ad78  blr

DrawCameraSettingsFrame:   # 0x14ad88, 0x48c bytes
  014ad88  stdu 1, -272(1)
  014ad8c  mflr 0
  014ad90  std 0, 288(1)
  014ad94  stfd 29, 248(1)
  014ad98  stfd 30, 256(1)
  014ad9c  stfd 31, 264(1)
  014ada0  std 31, 240(1)
  014ada4  std 20, 152(1)
  014ada8  ori 31, 3, 0
  014adac  lis 3, 21
  014adb0  std 28, 216(1)
  014adb4  li 20, 0
  014adb8  addi 28, 3, -21124
  014adbc  std 29, 224(1)
  014adc0  li 3, 1
  014adc4  li 29, 22
  014adc8  std 30, 232(1)
  014adcc  li 4, 5
  014add0  ori 30, 31, 0
  014add4  ori 7, 20, 0
  014add8  li 5, 4
  014addc  ori 10, 3, 0
  014ade0  ori 6, 20, 0
  014ade4  ori 8, 20, 0
  014ade8  std 27, 208(1)
  014adec  std 26, 200(1)
  014adf0  std 25, 192(1)
  014adf4  std 24, 184(1)
  014adf8  std 23, 176(1)
  014adfc  std 22, 168(1)
  014ae00  std 21, 160(1)
  014ae04  std 19, 144(1)
  014ae08  ori 9, 20, 0
  014ae0c  bl 0x502f7c
  014ae10  nop
  014ae14  ori 4, 3, 0
  014ae18  ori 3, 29, 0
  014ae1c  bl 0x174f80
  014ae20  nop
  014ae24  ori 3, 20, 0
  014ae28  bl 0x6d704
  014ae2c  nop
  014ae30  lis 3, 151
  014ae34  lfs 31, 0(28)
  014ae38  lfs 1, 4(28)
  014ae3c  lwz 3, -25484(3)
  014ae40  cmpwi 3, 3
  014ae44  bt 1, 0x14ae5c
  014ae48  cmpwi 3, 1
  014ae4c  bf 1, 0x14ae88
  014ae50  cmpwi 3, 2
  014ae54  bf 1, 0x14ae84
  014ae58  b 0x14ae7c
  014ae5c  cmpwi 3, 4
  014ae60  bf 1, 0x14ae74
  014ae64  cmpwi 3, 5
  014ae68  bt 1, 0x14ae88
  014ae6c  fmr 31, 1
  014ae70  b 0x14ae88
  014ae74  fmr 31, 1
  014ae78  b 0x14ae88
  014ae7c  fmr 31, 1
  014ae80  b 0x14ae88
  014ae84  fmr 31, 1
  014ae88  lwz 3, 52(30)
  014ae8c  ori 29, 20, 0
  014ae90  lwz 3, 0(3)
  014ae94  cmpwi 3, 0
  014ae98  bt 2, 0x14aebc
  014ae9c  ori 3, 20, 0
  014aea0  addic 3, 3, 32
  014aea4  lwz 5, 52(30)
  014aea8  addic 29, 29, 1
  014aeac  extsw 4, 3
  014aeb0  lwzx 4, 5, 4
  014aeb4  cmpwi 4, 0
  014aeb8  bf 2, 0x14aea0
  014aebc  addic 28, 29, 1
  014aec0  lwz 3, 36(31)
  014aec4  ori 27, 20, 0
  014aec8  lwz 5, 52(30)
  014aecc  divw 4, 3, 28
  014aed0  divw 28, 3, 28
  014aed4  lwz 3, 0(5)
  014aed8  addic 29, 4, -8
  014aedc  cmpwi 3, 0
  014aee0  extsw 29, 29
  014aee4  bt 2, 0x14b1b8
  014aee8  ori 23, 20, 0
  014aeec  ori 21, 23, 0
  014aef0  lis 5, -32513
  014aef4  lwz 6, 52(30)
  014aef8  lwz 3, 56(30)
  014aefc  cmpwi 1, 27, 3
  014af00  ori 5, 5, 43144
  014af04  addc 26, 6, 23
  014af08  cmpw 27, 3
  014af0c  ori 22, 29, 0
  014af10  ori 4, 5, 0
  014af14  clrldi 26, 26, 32
  014af18  bf 2, 0x14af24
  014af1c  lis 5, -32736
  014af20  ori 5, 5, 65535
  014af24  bf 6, 0x14b0d4
  014af28  lis 6, 115
  014af2c  addic 6, 6, -11424
  014af30  cmpw 30, 6
  014af34  bf 2, 0x14b0d4
  014af38  lis 6, 144
  014af3c  lis 7, 1
  014af40  ori 7, 7, 34212
  014af44  lwz 6, -23196(6)
  014af48  lbzx 6, 6, 7
  014af4c  cmpwi 6, 0
  014af50  bt 2, 0x14b0d4
  014af54  lis 5, 21
  014af58  lwz 26, 32(31)
  014af5c  cmpwi 3, 3
  014af60  addi 5, 5, -21124
  014af64  srawi 26, 26, 1
  014af68  addic 29, 29, 6
  014af6c  addic 24, 22, 4
  014af70  addic 25, 26, 80
  014af74  lfs 30, 8(5)
  014af78  bf 2, 0x14af84
  014af7c  lis 4, -32736
  014af80  ori 4, 4, 65535
  014af84  lis 3, 0
  014af88  clrldi 19, 4, 32
  014af8c  ori 3, 3, 60000
  014af90  bl 0x7b740
  014af94  nop
  014af98  extsw 4, 24
  014af9c  fmr 1, 30
  014afa0  li 7, -1
  014afa4  fmr 3, 31
  014afa8  ori 5, 19, 0
  014afac  std 4, 128(1)
  014afb0  ori 6, 3, 0
  014afb4  lfd 2, 128(1)
  014afb8  fcfid 2, 2
  014afbc  frsp 2, 2
  014afc0  bl 0x6fda4
  014afc4  nop
  014afc8  lwz 4, 32(31)
  014afcc  lis 5, -32663
  014afd0  addic 7, 22, 18
  014afd4  addic 6, 4, -10
  014afd8  ori 9, 5, 26985
  014afdc  addic 3, 26, 87
  014afe0  extsw 5, 6
  014afe4  extsw 6, 7
  014afe8  extsw 3, 3
  014afec  extsw 4, 24
  014aff0  ori 8, 20, 0
  014aff4  clrldi 7, 9, 32
  014aff8  bl 0xca72c
  014affc  nop
  014b000  addic 5, 22, 5
  014b004  lwz 3, 32(31)
  014b008  addic 4, 26, 89
  014b00c  lis 6, -32712
  014b010  extsw 24, 5
  014b014  addic 7, 22, 15
  014b018  extsw 26, 4
  014b01c  addic 5, 3, -12
  014b020  ori 9, 6, 14392
  014b024  ori 4, 24, 0
  014b028  extsw 6, 7
  014b02c  ori 3, 26, 0
  014b030  extsw 5, 5
  014b034  ori 8, 20, 0
  014b038  clrldi 7, 9, 32
  014b03c  bl 0xca72c
  014b040  nop
  014b044  lis 4, 165
  014b048  lwz 3, 32(31)
  014b04c  subc 3, 3, 25
  014b050  addic 3, 3, -21
  014b054  lwz 4, 11876(4)
  014b058  mullw 3, 3, 4
  014b05c  lis 4, 26214
  014b060  ori 4, 4, 26215
  014b064  mulhw 3, 4, 3
  014b068  lis 4, 0
  014b06c  srawi 5, 3, 1
  014b070  ori 3, 4, 59806
  014b074  srwi 6, 5, 31
  014b078  li 4, 8
  014b07c  addc 19, 5, 6
  014b080  bl 0xca3e4
  014b084  nop
  014b088  li 11, 43
  014b08c  addc 4, 25, 19
  014b090  li 12, 128
  014b094  addic 7, 22, 14
  014b098  addic 6, 4, 8
  014b09c  std 11, 112(1)
  014b0a0  ori 4, 26, 0
  014b0a4  extsw 6, 6
  014b0a8  ori 5, 24, 0
  014b0ac  std 12, 120(1)
  014b0b0  extsw 7, 7
  014b0b4  ori 8, 20, 0
  014b0b8  li 9, 19
  014b0bc  li 10, 53
  014b0c0  bl 0xd8364
  014b0c4  nop
  014b0c8  addc 29, 29, 28
  014b0cc  extsw 29, 29
  014b0d0  b 0x14b198
  014b0d4  lis 3, 21
  014b0d8  extsw 4, 29
  014b0dc  addi 3, 3, -21124
  014b0e0  ori 25, 5, 0
  014b0e4  lfs 30, 8(3)
  014b0e8  std 4, 128(1)
  014b0ec  lwz 3, 0(26)
  014b0f0  lfd 1, 128(1)
  014b0f4  extsw 3, 3
  014b0f8  fcfid 1, 1
  014b0fc  frsp 29, 1
  014b100  bl 0x7b740
  014b104  nop
  014b108  li 24, -1
  014b10c  fmr 1, 30
  014b110  ori 6, 3, 0
  014b114  fmr 2, 29
  014b118  ori 5, 25, 0
  014b11c  fmr 3, 31
  014b120  ori 7, 24, 0
  014b124  bl 0x6fda4
  014b128  nop
  014b12c  lwz 3, 4(26)
  014b130  lwz 5, 32(31)
  014b134  addic 4, 26, 8
  014b138  lis 6, -32513
  014b13c  addic 5, 5, -12
  014b140  ori 6, 6, 43144
  014b144  lwz 3, 0(3)
  014b148  extsw 26, 5
  014b14c  slwi 3, 3, 2
  014b150  clrldi 5, 6, 32
  014b154  addc 3, 4, 3
  014b158  ori 25, 5, 0
  014b15c  clrldi 3, 3, 32
  014b160  lwz 3, 0(3)
  014b164  extsw 3, 3
  014b168  bl 0x7b740
  014b16c  nop
  014b170  ori 6, 3, 0
  014b174  fmr 1, 31
  014b178  ori 4, 29, 0
  014b17c  ori 3, 26, 0
  014b180  ori 5, 25, 0
  014b184  ori 7, 24, 0
  014b188  bl 0x6ff88
  014b18c  nop
  014b190  addc 29, 29, 28
  014b194  extsw 29, 29
  014b198  addic 21, 21, 32
  014b19c  lwz 4, 52(30)
  014b1a0  addic 23, 23, 32
  014b1a4  extsw 3, 21
  014b1a8  addic 27, 27, 1
  014b1ac  lwzx 3, 4, 3
  014b1b0  cmpwi 3, 0
  014b1b4  bf 2, 0x14aef0
  014b1b8  bl 0x6d708
  014b1bc  nop
  014b1c0  li 3, 2
  014b1c4  ld 0, 288(1)
  014b1c8  mtlr 0
  014b1cc  lfd 29, 248(1)
  014b1d0  lfd 30, 256(1)
  014b1d4  lfd 31, 264(1)
  014b1d8  ld 19, 144(1)
  014b1dc  ld 20, 152(1)
  014b1e0  ld 21, 160(1)
  014b1e4  ld 22, 168(1)
  014b1e8  ld 23, 176(1)
  014b1ec  ld 24, 184(1)
  014b1f0  ld 25, 192(1)
  014b1f4  ld 26, 200(1)
  014b1f8  ld 27, 208(1)
  014b1fc  ld 28, 216(1)
  014b200  ld 29, 224(1)
  014b204  ld 30, 232(1)
  014b208  ld 31, 240(1)
  014b20c  addi 1, 1, 272
  014b210  blr

GoldWeapons_OnEnter:   # 0x14b214, 0x118 bytes
  014b214  stdu 1, -80(1)
  014b218  li 6, 0
  014b21c  ori 4, 6, 0
  014b220  std 31, 72(1)
  014b224  std 30, 64(1)
  014b228  std 29, 56(1)
  014b22c  ori 7, 4, 0
  014b230  ori 5, 7, 0
  014b234  lis 3, 115
  014b238  lis 8, 151
  014b23c  addic 3, 3, -22782
  014b240  addic 9, 8, -16064
  014b244  lhzx 8, 3, 5
  014b248  extsh 31, 8
  014b24c  lbzx 3, 9, 31
  014b250  cmpwi 3, 0
  014b254  bt 2, 0x14b2f8
  014b258  sldi 3, 31, 4
  014b25c  lis 9, 114
  014b260  subc 10, 31, 3
  014b264  addic 9, 9, 4096
  014b268  sldi 10, 10, 2
  014b26c  sldi 11, 7, 3
  014b270  subc 3, 3, 10
  014b274  addc 10, 7, 11
  014b278  addc 3, 9, 3
  014b27c  lis 9, 151
  014b280  lis 12, 165
  014b284  addic 9, 9, -25432
  014b288  addc 11, 7, 10
  014b28c  addic 12, 12, 12480
  014b290  lhz 30, 56(3)
  014b294  extsw 11, 11
  014b298  ori 10, 4, 0
  014b29c  lbzx 29, 9, 31
  014b2a0  cmpwi 29, 0
  014b2a4  sthx 30, 12, 11
  014b2a8  bt 2, 0x14b2b0
  014b2ac  li 10, 4
  014b2b0  addc 11, 12, 11
  014b2b4  lbzx 9, 9, 31
  014b2b8  cmpwi 9, 0
  014b2bc  sth 10, 2(11)
  014b2c0  sth 4, 4(11)
  014b2c4  sth 8, 6(11)
  014b2c8  sth 6, 8(11)
  014b2cc  bt 2, 0x14b2d8
  014b2d0  lhz 3, 66(3)
  014b2d4  b 0x14b2dc
  014b2d8  lhz 3, 64(3)
  014b2dc  lis 8, 165
  014b2e0  sldi 9, 7, 2
  014b2e4  addic 8, 8, 12632
  014b2e8  extsw 9, 9
  014b2ec  extsh 3, 3
  014b2f0  addic 7, 7, 1
  014b2f4  stwx 3, 8, 9
  014b2f8  addic 6, 6, 1
  014b2fc  addic 5, 5, 10
  014b300  cmpwi 6, 15
  014b304  bt 0, 0x14b234
  014b308  lis 5, 115
  014b30c  ori 3, 4, 0
  014b310  addic 4, 5, -15180
  014b314  stw 7, 64(4)
  014b318  ld 29, 56(1)
  014b31c  ld 30, 64(1)
  014b320  ld 31, 72(1)
  014b324  addi 1, 1, 80
  014b328  blr

Weapons_OnEnter:   # 0x14b32c, 0x14c bytes
  014b32c  stdu 1, -80(1)
  014b330  li 6, 0
  014b334  ori 3, 6, 0
  014b338  std 31, 72(1)
  014b33c  std 30, 64(1)
  014b340  std 29, 56(1)
  014b344  ori 7, 3, 0
  014b348  ori 4, 7, 0
  014b34c  cmpwi 6, 6
  014b350  cmpwi 6, 6, 9
  014b354  bf 0, 0x14b36c
  014b358  lis 5, 115
  014b35c  addic 5, 5, -24034
  014b360  lhzx 5, 5, 4
  014b364  extsh 5, 5
  014b368  b 0x14b3b0
  014b36c  cmpwi 1, 6, 12
  014b370  bf 24, 0x14b388
  014b374  lis 5, 115
  014b378  addic 5, 5, -24034
  014b37c  lhzx 5, 5, 4
  014b380  extsh 5, 5
  014b384  b 0x14b3b0
  014b388  bf 4, 0x14b3a0
  014b38c  lis 5, 115
  014b390  addic 5, 5, -24034
  014b394  lhzx 5, 5, 4
  014b398  extsh 5, 5
  014b39c  b 0x14b3b0
  014b3a0  lis 5, 115
  014b3a4  addic 5, 5, -24034
  014b3a8  lhzx 5, 5, 4
  014b3ac  extsh 5, 5
  014b3b0  lis 8, 151
  014b3b4  addic 8, 8, -16064
  014b3b8  lbzx 8, 8, 5
  014b3bc  cmpwi 8, 0
  014b3c0  bt 2, 0x14b448
  014b3c4  sldi 8, 5, 4
  014b3c8  lis 9, 114
  014b3cc  subc 10, 5, 8
  014b3d0  sldi 11, 7, 3
  014b3d4  sldi 10, 10, 2
  014b3d8  addic 9, 9, 4096
  014b3dc  subc 8, 8, 10
  014b3e0  addc 11, 7, 11
  014b3e4  addc 8, 9, 8
  014b3e8  lis 12, 165
  014b3ec  addc 9, 7, 11
  014b3f0  addic 10, 12, 12692
  014b3f4  extsw 9, 9
  014b3f8  lhz 12, 56(8)
  014b3fc  addc 31, 10, 9
  014b400  lhz 30, 64(8)
  014b404  lhz 8, 68(8)
  014b408  lis 11, 165
  014b40c  sldi 29, 7, 2
  014b410  sthx 12, 10, 9
  014b414  lis 12, 165
  014b418  addic 11, 11, 12832
  014b41c  extsw 10, 29
  014b420  sth 3, 2(31)
  014b424  extsh 9, 30
  014b428  sth 3, 4(31)
  014b42c  addic 12, 12, 12888
  014b430  sth 5, 6(31)
  014b434  extsh 8, 8
  014b438  sth 6, 8(31)
  014b43c  addic 7, 7, 1
  014b440  stwx 9, 11, 10
  014b444  stwx 8, 12, 10
  014b448  addic 6, 6, 1
  014b44c  addic 4, 4, 10
  014b450  cmpwi 6, 14
  014b454  bt 0, 0x14b34c
  014b458  lis 4, 115
  014b45c  addic 4, 4, -14212
  014b460  stw 7, 64(4)
  014b464  ld 29, 56(1)
  014b468  ld 30, 64(1)
  014b46c  ld 31, 72(1)
  014b470  addi 1, 1, 80
  014b474  blr

STUB_0014b478:   # 0x14b478, 0x8 bytes
  014b478  li 3, 0
  014b47c  blr

PlanetList_OnEnter:   # 0x14b480, 0x138 bytes
  014b480  li 4, 0
  014b484  ori 5, 3, 0
  014b488  ori 3, 4, 0
  014b48c  cmpwi 4, 20
  014b490  bf 0, 0x14b524
  014b494  lis 6, 151
  014b498  slwi 7, 4, 2
  014b49c  addic 6, 6, -15988
  014b4a0  extsw 7, 7
  014b4a4  lwzx 8, 6, 7
  014b4a8  cmpwi 8, 0
  014b4ac  bt 2, 0x14b524
  014b4b0  addc 9, 4, 4
  014b4b4  lwzx 6, 6, 7
  014b4b8  lis 8, 115
  014b4bc  addc 7, 4, 9
  014b4c0  addc 9, 6, 6
  014b4c4  addic 8, 8, 21168
  014b4c8  addc 9, 6, 9
  014b4cc  lis 10, 165
  014b4d0  sldi 9, 9, 2
  014b4d4  addc 11, 6, 6
  014b4d8  extsw 9, 9
  014b4dc  sldi 7, 7, 2
  014b4e0  addc 6, 6, 11
  014b4e4  addic 10, 10, 12944
  014b4e8  extsw 7, 7
  014b4ec  lwzx 8, 8, 9
  014b4f0  lis 12, 115
  014b4f4  addc 9, 10, 7
  014b4f8  sldi 6, 6, 2
  014b4fc  li 11, 1
  014b500  addic 12, 12, 21172
  014b504  sthx 8, 10, 7
  014b508  extsw 6, 6
  014b50c  addic 4, 4, 1
  014b510  sth 11, 2(9)
  014b514  stw 3, 4(9)
  014b518  lwzx 6, 12, 6
  014b51c  sth 6, 8(9)
  014b520  b 0x14b48c
  014b524  addc 6, 4, 4
  014b528  lis 8, 165
  014b52c  lis 9, 0
  014b530  addc 4, 4, 6
  014b534  addic 6, 8, 12944
  014b538  lis 7, 115
  014b53c  ori 8, 9, 32768
  014b540  lwz 9, 48(5)
  014b544  sldi 4, 4, 2
  014b548  stw 3, 64(5)
  014b54c  or 8, 9, 8
  014b550  extsw 9, 4
  014b554  lwz 10, -26256(7)
  014b558  ori 4, 3, 0
  014b55c  stw 8, 48(5)
  014b560  sthx 3, 6, 9
  014b564  lwz 6, 0(10)
  014b568  cmpwi 6, 0
  014b56c  bt 2, 0x14b5b4
  014b570  lis 6, 162
  014b574  slwi 8, 4, 2
  014b578  addic 9, 6, 1216
  014b57c  extsw 8, 8
  014b580  lwz 6, -26256(7)
  014b584  lwz 9, 548(9)
  014b588  lwzx 8, 6, 8
  014b58c  cmpw 9, 8
  014b590  bf 2, 0x14b59c
  014b594  stw 4, 64(5)
  014b598  b 0x14b5b4
  014b59c  addic 4, 4, 1
  014b5a0  slwi 8, 4, 2
  014b5a4  extsw 8, 8
  014b5a8  lwzx 6, 6, 8
  014b5ac  cmpwi 6, 0
  014b5b0  bf 2, 0x14b570
  014b5b4  blr

GalacticMap_Update:   # 0x14b5b8, 0x3c bytes
  014b5b8  lis 3, 150
  014b5bc  lis 4, 144
  014b5c0  addic 3, 3, 19008
  014b5c4  lwz 4, 11988(4)
  014b5c8  lwz 3, 196(3)
  014b5cc  and 3, 3, 4
  014b5d0  cmpwi 3, 0
  014b5d4  bt 2, 0x14b5ec
  014b5d8  lis 4, 165
  014b5dc  lis 3, 115
  014b5e0  addic 4, 4, 11184
  014b5e4  addic 3, 3, -9096
  014b5e8  stw 3, 8(4)
  014b5ec  li 3, 0
  014b5f0  blr

pause_DrawGalacticMapFrame:   # 0x14b5f4, 0xb4 bytes
  014b5f4  stdu 1, -160(1)
  014b5f8  mflr 0
  014b5fc  std 0, 176(1)
  014b600  lis 4, 144
  014b604  std 31, 152(1)
  014b608  lis 5, 101
  014b60c  addic 31, 4, -23532
  014b610  lwz 4, 24(3)
  014b614  lwz 6, 32(3)
  014b618  std 30, 144(1)
  014b61c  lwz 7, 28(3)
  014b620  extsw 30, 4
  014b624  std 28, 128(1)
  014b628  addc 6, 4, 6
  014b62c  lwz 3, 36(3)
  014b630  std 29, 136(1)
  014b634  extsw 28, 7
  014b638  extsw 29, 6
  014b63c  addc 3, 7, 3
  014b640  lwz 6, 40(31)
  014b644  std 27, 120(1)
  014b648  addic 4, 5, 13968
  014b64c  extsw 27, 3
  014b650  ori 3, 6, 0
  014b654  bl 0x50eaf8
  014b658  nop
  014b65c  ori 3, 30, 0
  014b660  ori 4, 29, 0
  014b664  ori 5, 28, 0
  014b668  ori 6, 27, 0
  014b66c  bl 0x4d27b0
  014b670  nop
  014b674  lwz 3, 40(31)
  014b678  bl 0x50ec5c
  014b67c  nop
  014b680  li 3, 2
  014b684  ld 0, 176(1)
  014b688  mtlr 0
  014b68c  ld 27, 120(1)
  014b690  ld 28, 128(1)
  014b694  ld 29, 136(1)
  014b698  ld 30, 144(1)
  014b69c  ld 31, 152(1)
  014b6a0  addi 1, 1, 160
  014b6a4  blr

PlanetSelect_Update:   # 0x14b6a8, 0x124 bytes
  014b6a8  stdu 1, -112(1)
  014b6ac  mflr 0
  014b6b0  std 0, 128(1)
  014b6b4  lis 4, 150
  014b6b8  addic 4, 4, 19008
  014b6bc  lwz 4, 196(4)
  014b6c0  rlwinm 5, 4, 0, 27, 27
  014b6c4  cmpwi 5, 0
  014b6c8  bt 2, 0x14b70c
  014b6cc  lis 3, 165
  014b6d0  addic 3, 3, 11184
  014b6d4  lwz 4, 4(3)
  014b6d8  lwz 5, 56(4)
  014b6dc  cmpwi 5, 0
  014b6e0  bt 2, 0x14b6f8
  014b6e4  ori 5, 3, 0
  014b6e8  lwz 4, 56(4)
  014b6ec  li 3, 0
  014b6f0  stw 4, 8(5)
  014b6f4  b 0x14b7bc
  014b6f8  lwz 3, 288(3)
  014b6fc  cmpwi 3, 0
  014b700  bf 2, 0x14b7b8
  014b704  li 3, -1
  014b708  b 0x14b7bc
  014b70c  rlwinm 5, 4, 0, 20, 20
  014b710  cmpwi 5, 0
  014b714  bt 2, 0x14b734
  014b718  lis 4, 151
  014b71c  lis 5, 162
  014b720  li 3, 1
  014b724  addic 5, 5, 1216
  014b728  lwz 4, -25488(4)
  014b72c  stw 4, 548(5)
  014b730  b 0x14b7bc
  014b734  rlwinm 5, 4, 0, 25, 25
  014b738  cmpwi 5, 0
  014b73c  bt 2, 0x14b760
  014b740  ori 5, 3, 0
  014b744  li 3, 0
  014b748  li 4, 17
  014b74c  lwz 5, 20(5)
  014b750  bl 0x15d12c
  014b754  nop
  014b758  li 3, 1
  014b75c  b 0x14b7bc
  014b760  rlwinm 4, 4, 0, 26, 26
  014b764  cmpwi 4, 0
  014b768  bt 2, 0x14b7b8
  014b76c  ori 5, 3, 0
  014b770  lis 3, 165
  014b774  lis 4, 162
  014b778  addic 6, 3, 11184
  014b77c  li 3, 15
  014b780  addic 7, 4, 1216
  014b784  li 8, 3
  014b788  li 10, 0
  014b78c  lwz 9, 4(6)
  014b790  stw 3, 240(6)
  014b794  li 4, 17
  014b798  stw 9, 236(6)
  014b79c  ori 3, 10, 0
  014b7a0  stw 8, 12(6)
  014b7a4  lwz 7, 548(7)
  014b7a8  lwz 5, 20(5)
  014b7ac  stw 7, 224(6)
  014b7b0  bl 0x15d12c
  014b7b4  nop
  014b7b8  li 3, 0
  014b7bc  ld 0, 128(1)
  014b7c0  mtlr 0
  014b7c4  addi 1, 1, 112
  014b7c8  blr

MessageBox_OnEnter:   # 0x14b7cc, 0x54 bytes
  014b7cc  stdu 1, -128(1)
  014b7d0  mflr 0
  014b7d4  std 0, 144(1)
  014b7d8  std 30, 112(1)
  014b7dc  lis 4, 165
  014b7e0  li 30, 0
  014b7e4  std 31, 120(1)
  014b7e8  addic 4, 4, 11184
  014b7ec  ori 31, 3, 0
  014b7f0  ori 3, 30, 0
  014b7f4  lwz 4, 4(4)
  014b7f8  stw 30, 132(4)
  014b7fc  bl 0x148538
  014b800  stw 3, 84(31)
  014b804  ori 3, 30, 0
  014b808  ld 0, 144(1)
  014b80c  mtlr 0
  014b810  ld 30, 112(1)
  014b814  ld 31, 120(1)
  014b818  addi 1, 1, 128
  014b81c  blr

MessageBox_OnExit:   # 0x14b820, 0xe8 bytes
  014b820  stdu 1, -160(1)
  014b824  mflr 0
  014b828  std 0, 176(1)
  014b82c  std 28, 128(1)
  014b830  ori 28, 3, 0
  014b834  std 29, 136(1)
  014b838  li 3, 0
  014b83c  std 31, 152(1)
  014b840  std 30, 144(1)
  014b844  std 27, 120(1)
  014b848  ori 29, 3, 0
  014b84c  lwz 4, 84(28)
  014b850  lis 5, 165
  014b854  slwi 31, 3, 3
  014b858  addic 5, 5, 12440
  014b85c  extsw 31, 31
  014b860  lwzx 6, 5, 31
  014b864  cmpw 6, 4
  014b868  bf 2, 0x14b8d0
  014b86c  addc 6, 5, 31
  014b870  addic 30, 5, 4
  014b874  lwz 5, 4(6)
  014b878  rlwinm 5, 5, 0, 30, 30
  014b87c  cmpwi 5, 0
  014b880  bt 2, 0x14b8d0
  014b884  lwzx 3, 30, 31
  014b888  rlwinm 3, 3, 0, 29, 29
  014b88c  cmpwi 3, 0
  014b890  bt 2, 0x14b8c0
  014b894  lis 27, 165
  014b898  lwzx 3, 30, 31
  014b89c  addic 27, 27, 11184
  014b8a0  xori 3, 3, 4
  014b8a4  lbz 4, 203(27)
  014b8a8  stwx 3, 30, 31
  014b8ac  cmpwi 4, 0
  014b8b0  bt 2, 0x14b8c0
  014b8b4  bl 0x11d9e0
  014b8b8  nop
  014b8bc  stb 29, 203(27)
  014b8c0  lwzx 3, 30, 31
  014b8c4  rlwimi 3, 29, 0, 30, 30
  014b8c8  stwx 3, 30, 31
  014b8cc  b 0x14b8dc
  014b8d0  addic 3, 3, 1
  014b8d4  cmpwi 3, 5
  014b8d8  bt 0, 0x14b850
  014b8dc  ori 3, 29, 0
  014b8e0  stw 29, 84(28)
  014b8e4  ld 0, 176(1)
  014b8e8  mtlr 0
  014b8ec  ld 27, 120(1)
  014b8f0  ld 28, 128(1)
  014b8f4  ld 29, 136(1)
  014b8f8  ld 30, 144(1)
  014b8fc  ld 31, 152(1)
  014b900  addi 1, 1, 160
  014b904  blr

MessageBox_Update:   # 0x14b908, 0x98 bytes
  014b908  lis 5, 161
  014b90c  lis 4, 165
  014b910  li 3, 0
  014b914  addic 4, 4, 11184
  014b918  lwz 5, -740(5)
  014b91c  cmpwi 5, 16
  014b920  bt 2, 0x14b944
  014b924  lis 5, 161
  014b928  lwz 5, -740(5)
  014b92c  cmpwi 5, 1
  014b930  bt 2, 0x14b944
  014b934  lwz 5, 4(4)
  014b938  lwz 5, 56(5)
  014b93c  stw 5, 8(4)
  014b940  b 0x14b99c
  014b944  lis 5, 150
  014b948  lis 6, 144
  014b94c  addic 5, 5, 19008
  014b950  lwz 6, 11992(6)
  014b954  lwz 5, 164(5)
  014b958  and 6, 5, 6
  014b95c  cmpwi 6, 0
  014b960  bt 2, 0x14b980
  014b964  lwz 6, 4(4)
  014b968  li 5, 1
  014b96c  stw 3, 212(4)
  014b970  lwz 7, 56(6)
  014b974  stw 5, 132(6)
  014b978  stw 7, 8(4)
  014b97c  b 0x14b99c
  014b980  rlwinm 5, 5, 0, 27, 27
  014b984  cmpwi 5, 0
  014b988  bt 2, 0x14b99c
  014b98c  lwz 5, 4(4)
  014b990  lwz 6, 56(5)
  014b994  stw 3, 132(5)
  014b998  stw 6, 8(4)
  014b99c  blr

MessageBox_Draw:   # 0x14b9a8, 0x270 bytes
  014b9a8  stdu 1, -192(1)
  014b9ac  mflr 0
  014b9b0  std 0, 208(1)
  014b9b4  stfd 31, 184(1)
  014b9b8  std 29, 160(1)
  014b9bc  std 28, 152(1)
  014b9c0  li 28, 0
  014b9c4  std 31, 176(1)
  014b9c8  li 29, 1
  014b9cc  ori 31, 3, 0
  014b9d0  ori 3, 28, 0
  014b9d4  std 30, 168(1)
  014b9d8  ori 4, 29, 0
  014b9dc  li 30, 3
  014b9e0  ori 6, 29, 0
  014b9e4  ori 5, 28, 0
  014b9e8  std 27, 144(1)
  014b9ec  ori 7, 28, 0
  014b9f0  bl 0x502ea8
  014b9f4  nop
  014b9f8  ori 4, 3, 0
  014b9fc  ori 3, 30, 0
  014ba00  bl 0x174f80
  014ba04  nop
  014ba08  li 30, 5
  014ba0c  ori 3, 29, 0
  014ba10  ori 4, 30, 0
  014ba14  li 27, 22
  014ba18  ori 7, 28, 0
  014ba1c  li 5, 4
  014ba20  ori 9, 28, 0
  014ba24  ori 6, 28, 0
  014ba28  ori 8, 28, 0
  014ba2c  ori 10, 29, 0
  014ba30  bl 0x502f7c
  014ba34  nop
  014ba38  ori 4, 3, 0
  014ba3c  ori 3, 27, 0
  014ba40  bl 0x174f80
  014ba44  nop
  014ba48  ori 3, 28, 0
  014ba4c  bl 0x6d704
  014ba50  nop
  014ba54  lis 3, 165
  014ba58  lis 29, 101
  014ba5c  addic 3, 3, 11184
  014ba60  addic 29, 29, 13988
  014ba64  lwz 3, 212(3)
  014ba68  cmpwi 3, 2
  014ba6c  bt 1, 0x14ba7c
  014ba70  cmpwi 3, -1
  014ba74  bf 1, 0x14baac
  014ba78  b 0x14ba88
  014ba7c  cmpwi 3, 3
  014ba80  bf 1, 0x14ba9c
  014ba84  b 0x14baac
  014ba88  li 3, 20403
  014ba8c  bl 0x7b740
  014ba90  nop
  014ba94  ori 29, 3, 0
  014ba98  b 0x14baac
  014ba9c  li 3, 20405
  014baa0  bl 0x7b740
  014baa4  nop
  014baa8  ori 29, 3, 0
  014baac  li 3, 1
  014bab0  li 4, 0
  014bab4  lis 6, 21
  014bab8  li 5, 16
  014babc  sth 3, 112(1)
  014bac0  sth 3, 116(1)
  014bac4  li 28, -1
  014bac8  addi 3, 6, -18016
  014bacc  sth 30, 122(1)
  014bad0  lwz 6, 36(31)
  014bad4  sth 4, 124(1)
  014bad8  sth 4, 126(1)
  014badc  addic 6, 6, 1
  014bae0  lwz 7, 32(31)
  014bae4  sth 5, 128(1)
  014bae8  addic 5, 7, 1
  014baec  sth 30, 130(1)
  014baf0  srawi 7, 7, 1
  014baf4  sth 4, 132(1)
  014baf8  sth 4, 134(1)
  014bafc  addic 30, 1, 112
  014bb00  sth 6, 114(1)
  014bb04  lis 4, -32768
  014bb08  sth 5, 118(1)
  014bb0c  ori 6, 28, 0
  014bb10  sth 7, 120(1)
  014bb14  ori 5, 29, 0
  014bb18  lfs 31, 0(3)
  014bb1c  ori 3, 4, 0
  014bb20  fmr 1, 31
  014bb24  clrldi 27, 3, 32
  014bb28  ori 3, 30, 0
  014bb2c  ori 4, 27, 0
  014bb30  bl 0x7100c
  014bb34  nop
  014bb38  lhz 3, 126(1)
  014bb3c  lwz 4, 36(31)
  014bb40  extsh 3, 3
  014bb44  lhz 5, 130(1)
  014bb48  fmr 1, 31
  014bb4c  subc 4, 4, 3
  014bb50  xori 7, 5, 4
  014bb54  srawi 6, 4, 1
  014bb58  ori 3, 30, 0
  014bb5c  ori 4, 27, 0
  014bb60  ori 5, 29, 0
  014bb64  sth 6, 122(1)
  014bb68  sth 7, 130(1)
  014bb6c  ori 6, 28, 0
  014bb70  bl 0x7100c
  014bb74  nop
  014bb78  lhz 3, 112(1)
  014bb7c  lhz 4, 114(1)
  014bb80  lhz 5, 116(1)
  014bb84  addic 3, 3, -1
  014bb88  lhz 6, 118(1)
  014bb8c  addic 4, 4, -1
  014bb90  lhz 7, 120(1)
  014bb94  addic 5, 5, -1
  014bb98  lhz 8, 122(1)
  014bb9c  addic 6, 6, -1
  014bba0  sth 3, 112(1)
  014bba4  fmr 1, 31
  014bba8  sth 4, 114(1)
  014bbac  addic 3, 7, -1
  014bbb0  sth 5, 116(1)
  014bbb4  lis 4, -32513
  014bbb8  addic 5, 8, -1
  014bbbc  sth 6, 118(1)
  014bbc0  ori 4, 4, 43144
  014bbc4  sth 3, 120(1)
  014bbc8  ori 3, 30, 0
  014bbcc  sth 5, 122(1)
  014bbd0  clrldi 4, 4, 32
  014bbd4  ori 5, 29, 0
  014bbd8  ori 6, 28, 0
  014bbdc  bl 0x7100c
  014bbe0  nop
  014bbe4  bl 0x6d708
  014bbe8  nop
  014bbec  li 3, 2
  014bbf0  ld 0, 208(1)
  014bbf4  mtlr 0
  014bbf8  lfd 31, 184(1)
  014bbfc  ld 27, 144(1)
  014bc00  ld 28, 152(1)
  014bc04  ld 29, 160(1)
  014bc08  ld 30, 168(1)
  014bc0c  ld 31, 176(1)
  014bc10  addi 1, 1, 192
  014bc14  blr

LevelTips_OnEnter:   # 0x14bc18, 0x80 bytes
  014bc18  ori 4, 3, 0
  014bc1c  lis 5, 115
  014bc20  lis 3, 151
  014bc24  lwz 5, 6016(5)
  014bc28  lwz 6, -25488(3)
  014bc2c  cmpw 5, 6
  014bc30  bt 2, 0x14bc3c
  014bc34  li 5, 0
  014bc38  stw 5, 64(4)
  014bc3c  lis 5, -20696
  014bc40  lwz 3, -25488(3)
  014bc44  lis 7, 115
  014bc48  ori 5, 5, 27595
  014bc4c  mulhwu 5, 5, 3
  014bc50  stw 3, 6016(7)
  014bc54  subc 6, 3, 5
  014bc58  srwi 6, 6, 1
  014bc5c  addc 5, 6, 5
  014bc60  lis 6, 115
  014bc64  srwi 5, 5, 4
  014bc68  addic 6, 6, -104
  014bc6c  sldi 8, 5, 4
  014bc70  addc 8, 5, 8
  014bc74  addc 8, 5, 8
  014bc78  addc 5, 5, 8
  014bc7c  subc 3, 3, 5
  014bc80  sldi 3, 3, 2
  014bc84  extsw 5, 3
  014bc88  li 3, 0
  014bc8c  lwzx 5, 6, 5
  014bc90  stw 5, 52(4)
  014bc94  blr

MenuCycle30_Update:   # 0x14bc98, 0x154 bytes
  014bc98  stdu 1, -112(1)
  014bc9c  mflr 0
  014bca0  std 0, 128(1)
  014bca4  lis 4, 150
  014bca8  li 7, 3328
  014bcac  addic 4, 4, 19008
  014bcb0  ori 5, 3, 0
  014bcb4  lwz 6, 196(4)
  014bcb8  and 7, 6, 7
  014bcbc  cmpwi 7, 0
  014bcc0  bt 2, 0x14bce0
  014bcc4  lis 7, 165
  014bcc8  addic 7, 7, 11184
  014bccc  lwz 7, 288(7)
  014bcd0  cmpwi 7, 0
  014bcd4  bf 2, 0x14bce0
  014bcd8  li 3, 1
  014bcdc  b 0x14bddc
  014bce0  rlwinm 6, 6, 0, 27, 27
  014bce4  cmpwi 6, 0
  014bce8  bt 2, 0x14bd28
  014bcec  lis 6, 165
  014bcf0  addic 6, 6, 11184
  014bcf4  lwz 7, 4(6)
  014bcf8  lwz 8, 56(7)
  014bcfc  cmpwi 8, 0
  014bd00  bt 2, 0x14bd14
  014bd04  lwz 4, 56(7)
  014bd08  li 3, 0
  014bd0c  stw 4, 8(6)
  014bd10  b 0x14bddc
  014bd14  lwz 6, 288(6)
  014bd18  cmpwi 6, 0
  014bd1c  bf 2, 0x14bd28
  014bd20  li 3, -1
  014bd24  b 0x14bddc
  014bd28  lwz 4, 164(4)
  014bd2c  lwz 6, 64(5)
  014bd30  rlwinm 7, 4, 0, 25, 25
  014bd34  cmpwi 7, 0
  014bd38  bt 2, 0x14bd74
  014bd3c  lis 4, -30584
  014bd40  addic 7, 6, 1
  014bd44  ori 4, 4, 34953
  014bd48  mulhw 4, 4, 7
  014bd4c  addc 4, 4, 7
  014bd50  srawi 4, 4, 4
  014bd54  srwi 8, 4, 31
  014bd58  addc 4, 4, 8
  014bd5c  sldi 8, 4, 5
  014bd60  subc 8, 8, 4
  014bd64  subc 4, 8, 4
  014bd68  subc 4, 7, 4
  014bd6c  stw 4, 64(5)
  014bd70  b 0x14bdb4
  014bd74  rlwinm 4, 4, 0, 26, 26
  014bd78  cmpwi 4, 0
  014bd7c  bt 2, 0x14bdb4
  014bd80  lis 4, -30584
  014bd84  addic 7, 6, 29
  014bd88  ori 4, 4, 34953
  014bd8c  mulhw 4, 4, 7
  014bd90  addc 4, 4, 7
  014bd94  srawi 4, 4, 4
  014bd98  srwi 8, 4, 31
  014bd9c  addc 4, 4, 8
  014bda0  sldi 8, 4, 5
  014bda4  subc 8, 8, 4
  014bda8  subc 4, 8, 4
  014bdac  subc 4, 7, 4
  014bdb0  stw 4, 64(5)
  014bdb4  lwz 4, 64(5)
  014bdb8  cmpw 4, 6
  014bdbc  bt 2, 0x14bdd8
  014bdc0  ori 5, 3, 0
  014bdc4  li 3, 1
  014bdc8  li 4, 17
  014bdcc  lwz 5, 20(5)
  014bdd0  bl 0x15d12c
  014bdd4  nop
  014bdd8  li 3, 0
  014bddc  ld 0, 128(1)
  014bde0  mtlr 0
  014bde4  addi 1, 1, 112
  014bde8  blr

MenuCycle12_Update:   # 0x14bdec, 0x170 bytes
  014bdec  stdu 1, -112(1)
  014bdf0  mflr 0
  014bdf4  std 0, 128(1)
  014bdf8  lis 4, 150
  014bdfc  li 7, 3328
  014be00  addic 4, 4, 19008
  014be04  ori 5, 3, 0
  014be08  lwz 6, 196(4)
  014be0c  and 7, 6, 7
  014be10  cmpwi 7, 0
  014be14  bt 2, 0x14be34
  014be18  lis 7, 165
  014be1c  addic 7, 7, 11184
  014be20  lwz 7, 288(7)
  014be24  cmpwi 7, 0
  014be28  bf 2, 0x14be34
  014be2c  li 3, 1
  014be30  b 0x14bf4c
  014be34  rlwinm 6, 6, 0, 27, 27
  014be38  cmpwi 6, 0
  014be3c  bt 2, 0x14be7c
  014be40  lis 6, 165
  014be44  addic 6, 6, 11184
  014be48  lwz 7, 4(6)
  014be4c  lwz 8, 56(7)
  014be50  cmpwi 8, 0
  014be54  bt 2, 0x14be68
  014be58  lwz 4, 56(7)
  014be5c  li 3, 0
  014be60  stw 4, 8(6)
  014be64  b 0x14bf4c
  014be68  lwz 6, 288(6)
  014be6c  cmpwi 6, 0
  014be70  bf 2, 0x14be7c
  014be74  li 3, -1
  014be78  b 0x14bf4c
  014be7c  li 6, 8256
  014be80  lwz 4, 164(4)
  014be84  and 6, 4, 6
  014be88  cmpwi 6, 0
  014be8c  bt 2, 0x14bee4
  014be90  ori 6, 5, 0
  014be94  lis 4, 10922
  014be98  ori 4, 4, 43691
  014be9c  lwz 5, 84(6)
  014bea0  addic 5, 5, 1
  014bea4  mulhw 4, 4, 5
  014bea8  srawi 4, 4, 1
  014beac  srwi 7, 4, 31
  014beb0  addc 7, 4, 7
  014beb4  li 4, 17
  014beb8  addc 8, 7, 7
  014bebc  addc 7, 7, 8
  014bec0  lwz 8, 20(3)
  014bec4  sldi 7, 7, 2
  014bec8  li 3, 1
  014becc  subc 7, 5, 7
  014bed0  ori 5, 8, 0
  014bed4  stw 7, 84(6)
  014bed8  bl 0x15d12c
  014bedc  nop
  014bee0  b 0x14bf48
  014bee4  lis 6, 0
  014bee8  ori 6, 6, 32800
  014beec  and 4, 4, 6
  014bef0  cmpwi 4, 0
  014bef4  bt 2, 0x14bf48
  014bef8  ori 6, 5, 0
  014befc  lis 4, 10922
  014bf00  ori 4, 4, 43691
  014bf04  lwz 5, 84(6)
  014bf08  addic 5, 5, 11
  014bf0c  mulhw 4, 4, 5
  014bf10  srawi 4, 4, 1
  014bf14  srwi 7, 4, 31
  014bf18  addc 7, 4, 7
  014bf1c  li 4, 17
  014bf20  addc 8, 7, 7
  014bf24  addc 7, 7, 8
  014bf28  lwz 8, 20(3)
  014bf2c  sldi 7, 7, 2
  014bf30  li 3, 1
  014bf34  subc 7, 5, 7
  014bf38  ori 5, 8, 0
  014bf3c  stw 7, 84(6)
  014bf40  bl 0x15d12c
  014bf44  nop
  014bf48  li 3, 0
  014bf4c  ld 0, 128(1)
  014bf50  mtlr 0
  014bf54  addi 1, 1, 112
  014bf58  blr

MenuIconText_Draw:   # 0x14bf78, 0x210 bytes
  014bf78  stdu 1, -208(1)
  014bf7c  mflr 0
  014bf80  std 0, 224(1)
  014bf84  stfd 27, 168(1)
  014bf88  stfd 28, 176(1)
  014bf8c  stfd 29, 184(1)
  014bf90  stfd 30, 192(1)
  014bf94  stfd 31, 200(1)
  014bf98  std 31, 160(1)
  014bf9c  lis 4, 21
  014bfa0  std 30, 152(1)
  014bfa4  ori 31, 3, 0
  014bfa8  addi 30, 4, -16548
  014bfac  li 3, 0
  014bfb0  bl 0x6d704
  014bfb4  nop
  014bfb8  lis 3, -32513
  014bfbc  lfs 31, 0(30)
  014bfc0  lwz 4, 56(31)
  014bfc4  ori 3, 3, 43144
  014bfc8  cmpwi 4, 0
  014bfcc  clrldi 3, 3, 32
  014bfd0  bt 2, 0x14c0a4
  014bfd4  li 30, 16
  014bfd8  lwz 8, 36(31)
  014bfdc  li 4, 0
  014bfe0  srawi 8, 8, 1
  014bfe4  ori 5, 3, 0
  014bfe8  stb 30, 112(1)
  014bfec  stb 4, 113(1)
  014bff0  li 3, 4
  014bff4  addze 4, 8
  014bff8  addic 6, 1, 112
  014bffc  addic 4, 4, -8
  014c000  li 7, -1
  014c004  extsw 4, 4
  014c008  bl 0x6cc0c
  014c00c  nop
  014c010  li 3, 24
  014c014  li 5, 14
  014c018  extsw 3, 3
  014c01c  li 4, 6
  014c020  std 3, 128(1)
  014c024  srawi 3, 5, 1
  014c028  extsw 5, 5
  014c02c  addze 3, 3
  014c030  extsw 6, 3
  014c034  lis 3, 0
  014c038  ori 3, 3, 59806
  014c03c  lfd 1, 128(1)
  014c040  std 6, 128(1)
  014c044  fcfid 1, 1
  014c048  frsp 30, 1
  014c04c  lfd 1, 128(1)
  014c050  std 5, 128(1)
  014c054  fcfid 1, 1
  014c058  frsp 29, 1
  014c05c  lfd 1, 128(1)
  014c060  fcfid 1, 1
  014c064  frsp 28, 1
  014c068  bl 0xca3e4
  014c06c  nop
  014c070  bl 0xd6bf8
  014c074  nop
  014c078  fmr 1, 30
  014c07c  li 8, 32
  014c080  fmr 2, 30
  014c084  ori 9, 30, 0
  014c088  fmr 3, 29
  014c08c  ori 10, 3, 0
  014c090  fmr 4, 28
  014c094  fmr 5, 31
  014c098  bl 0xd7f88
  014c09c  nop
  014c0a0  b 0x14c150
  014c0a4  li 4, 17
  014c0a8  lwz 8, 36(31)
  014c0ac  lwz 9, 32(31)
  014c0b0  li 5, 0
  014c0b4  addic 6, 1, 120
  014c0b8  li 7, -1
  014c0bc  stb 4, 120(1)
  014c0c0  srawi 4, 8, 1
  014c0c4  stb 5, 121(1)
  014c0c8  addze 4, 4
  014c0cc  addic 8, 9, -24
  014c0d0  ori 5, 3, 0
  014c0d4  addic 4, 4, -8
  014c0d8  extsw 3, 8
  014c0dc  extsw 4, 4
  014c0e0  bl 0x6cc0c
  014c0e4  nop
  014c0e8  lis 3, 21
  014c0ec  lis 5, 0
  014c0f0  addi 3, 3, -16548
  014c0f4  li 4, 6
  014c0f8  lfs 31, 4(3)
  014c0fc  lfs 30, 8(3)
  014c100  lfs 29, 12(3)
  014c104  lfs 2, 16(3)
  014c108  lfs 1, 20(3)
  014c10c  fmr 28, 2
  014c110  ori 3, 5, 59806
  014c114  fmr 27, 1
  014c118  bl 0xca3e4
  014c11c  nop
  014c120  bl 0xd6bf8
  014c124  nop
  014c128  li 9, 16
  014c12c  fmr 1, 31
  014c130  li 8, 32
  014c134  fmr 2, 30
  014c138  ori 10, 3, 0
  014c13c  fmr 3, 29
  014c140  fmr 4, 28
  014c144  fmr 5, 27
  014c148  bl 0xd7f88
  014c14c  nop
  014c150  bl 0x6d708
  014c154  nop
  014c158  li 3, 2
  014c15c  ld 0, 224(1)
  014c160  mtlr 0
  014c164  lfd 27, 168(1)
  014c168  lfd 28, 176(1)
  014c16c  lfd 29, 184(1)
  014c170  lfd 30, 192(1)
  014c174  lfd 31, 200(1)
  014c178  ld 30, 152(1)
  014c17c  ld 31, 160(1)
  014c180  addi 1, 1, 208
  014c184  blr

LevelFilter_Draw:   # 0x14c188, 0x1e0 bytes
  014c188  stdu 1, -176(1)
  014c18c  mflr 0
  014c190  std 0, 192(1)
  014c194  lis 4, 165
  014c198  std 31, 168(1)
  014c19c  ori 31, 3, 0
  014c1a0  addic 4, 4, 11184
  014c1a4  li 3, 0
  014c1a8  lwz 4, 4(4)
  014c1ac  lwz 4, 64(4)
  014c1b0  lwz 5, 64(4)
  014c1b4  lwz 4, 52(4)
  014c1b8  addc 6, 5, 5
  014c1bc  addic 4, 4, 4
  014c1c0  addc 5, 5, 6
  014c1c4  sldi 5, 5, 2
  014c1c8  std 29, 152(1)
  014c1cc  addc 4, 4, 5
  014c1d0  clrldi 29, 4, 32
  014c1d4  std 30, 160(1)
  014c1d8  std 28, 144(1)
  014c1dc  std 27, 136(1)
  014c1e0  std 26, 128(1)
  014c1e4  std 25, 120(1)
  014c1e8  lwz 29, 0(29)
  014c1ec  bl 0x6d704
  014c1f0  nop
  014c1f4  lis 3, -32513
  014c1f8  cmpwi 29, -1
  014c1fc  ori 3, 3, 43144
  014c200  clrldi 30, 3, 32
  014c204  bf 2, 0x14c258
  014c208  lwz 4, 32(31)
  014c20c  lwz 5, 36(31)
  014c210  li 3, 20505
  014c214  srawi 4, 4, 1
  014c218  addze 4, 4
  014c21c  srawi 5, 5, 1
  014c220  extsw 31, 4
  014c224  addze 4, 5
  014c228  addic 4, 4, -8
  014c22c  extsw 29, 4
  014c230  bl 0x7b740
  014c234  nop
  014c238  ori 6, 3, 0
  014c23c  li 7, -1
  014c240  ori 3, 31, 0
  014c244  ori 4, 29, 0
  014c248  ori 5, 30, 0
  014c24c  bl 0x70514
  014c250  nop
  014c254  b 0x14c330
  014c258  lis 3, 21845
  014c25c  lwz 4, 36(31)
  014c260  lis 6, 115
  014c264  ori 28, 3, 21846
  014c268  lwz 5, 32(31)
  014c26c  mulhw 4, 28, 4
  014c270  addc 3, 29, 29
  014c274  srwi 7, 4, 31
  014c278  addc 3, 29, 3
  014c27c  addic 6, 6, 21168
  014c280  sldi 3, 3, 2
  014c284  addc 4, 4, 7
  014c288  extsw 27, 3
  014c28c  addic 3, 4, -8
  014c290  srawi 5, 5, 1
  014c294  extsw 26, 3
  014c298  addze 5, 5
  014c29c  lwzx 3, 6, 27
  014c2a0  extsw 29, 5
  014c2a4  extsw 3, 3
  014c2a8  bl 0x7b740
  014c2ac  nop
  014c2b0  li 25, -1
  014c2b4  ori 6, 3, 0
  014c2b8  ori 3, 29, 0
  014c2bc  ori 4, 26, 0
  014c2c0  ori 5, 30, 0
  014c2c4  ori 7, 25, 0
  014c2c8  bl 0x70514
  014c2cc  nop
  014c2d0  lwz 3, 36(31)
  014c2d4  lis 5, 115
  014c2d8  lwz 4, 32(31)
  014c2dc  slwi 3, 3, 1
  014c2e0  mulhw 3, 28, 3
  014c2e4  addic 5, 5, 21172
  014c2e8  srwi 6, 3, 31
  014c2ec  srawi 4, 4, 1
  014c2f0  addze 4, 4
  014c2f4  addc 3, 3, 6
  014c2f8  extsw 31, 4
  014c2fc  addic 3, 3, -8
  014c300  extsw 29, 3
  014c304  lwzx 3, 5, 27
  014c308  extsw 3, 3
  014c30c  bl 0x7b740
  014c310  nop
  014c314  ori 6, 3, 0
  014c318  ori 3, 31, 0
  014c31c  ori 4, 29, 0
  014c320  ori 5, 30, 0
  014c324  ori 7, 25, 0
  014c328  bl 0x70514
  014c32c  nop
  014c330  bl 0x6d708
  014c334  nop
  014c338  li 3, 2
  014c33c  ld 0, 192(1)
  014c340  mtlr 0
  014c344  ld 25, 120(1)
  014c348  ld 26, 128(1)
  014c34c  ld 27, 136(1)
  014c350  ld 28, 144(1)
  014c354  ld 29, 152(1)
  014c358  ld 30, 160(1)
  014c35c  ld 31, 168(1)
  014c360  addi 1, 1, 176
  014c364  blr

ShowScreenAfterDrekDefeat:   # 0x14c370, 0x240 bytes
  014c370  stdu 1, -240(1)
  014c374  mflr 0
  014c378  std 0, 256(1)
  014c37c  std 31, 232(1)
  014c380  std 30, 224(1)
  014c384  std 29, 216(1)
  014c388  std 28, 208(1)
  014c38c  std 27, 200(1)
  014c390  std 26, 192(1)
  014c394  std 25, 184(1)
  014c398  std 24, 176(1)
  014c39c  std 23, 168(1)
  014c3a0  li 3, 4
  014c3a4  bl 0x112dc0
  014c3a8  nop
  014c3ac  lis 3, 150
  014c3b0  addic 3, 3, 19008
  014c3b4  lwz 3, 164(3)
  014c3b8  rlwinm 4, 3, 0, 26, 26
  014c3bc  cmpwi 4, 0
  014c3c0  bt 2, 0x14c400
  014c3c4  lis 6, 161
  014c3c8  lis 3, 115
  014c3cc  li 31, 0
  014c3d0  addic 7, 3, 2344
  014c3d4  li 3, 3
  014c3d8  lwz 4, -736(6)
  014c3dc  ori 5, 31, 0
  014c3e0  ori 8, 4, 2
  014c3e4  extsw 4, 7
  014c3e8  stw 8, -736(6)
  014c3ec  bl 0x78178
  014c3f0  nop
  014c3f4  ori 3, 31, 0
  014c3f8  bl 0x13e634
  014c3fc  b 0x14c578
  014c400  rlwinm 3, 3, 0, 25, 25
  014c404  cmpwi 3, 0
  014c408  bt 2, 0x14c578
  014c40c  lis 30, 151
  014c410  li 3, 0
  014c414  addic 30, 30, -16244
  014c418  ori 31, 3, 0
  014c41c  lbz 28, 29(30)
  014c420  lis 29, 161
  014c424  addc 5, 1, 3
  014c428  addic 29, 29, -13700
  014c42c  addic 4, 3, 1
  014c430  clrldi 5, 5, 32
  014c434  lbzx 6, 29, 3
  014c438  extsw 3, 4
  014c43c  stb 6, 112(5)
  014c440  cmpwi 3, 4
  014c444  bt 0, 0x14c420
  014c448  lis 26, 151
  014c44c  ori 24, 30, 0
  014c450  li 30, 12
  014c454  addic 25, 1, 120
  014c458  addic 26, 26, -16268
  014c45c  ori 23, 28, 0
  014c460  ori 3, 25, 0
  014c464  ori 5, 30, 0
  014c468  ori 4, 26, 0
  014c46c  bl 0x50027c
  014c470  nop
  014c474  lis 28, 151
  014c478  addic 27, 1, 136
  014c47c  addic 28, 28, -16256
  014c480  ori 3, 27, 0
  014c484  ori 5, 30, 0
  014c488  ori 4, 28, 0
  014c48c  bl 0x50027c
  014c490  nop
  014c494  lis 3, 165
  014c498  addic 3, 3, 11184
  014c49c  lwz 3, 220(3)
  014c4a0  bl 0xe6fe4
  014c4a4  nop
  014c4a8  ori 3, 31, 0
  014c4ac  stb 23, 29(24)
  014c4b0  addc 4, 1, 3
  014c4b4  addic 5, 3, 1
  014c4b8  clrldi 4, 4, 32
  014c4bc  lbz 4, 112(4)
  014c4c0  stbx 4, 29, 3
  014c4c4  extsw 3, 5
  014c4c8  cmpwi 3, 4
  014c4cc  bt 0, 0x14c4b0
  014c4d0  ori 4, 25, 0
  014c4d4  ori 3, 26, 0
  014c4d8  ori 5, 30, 0
  014c4dc  bl 0x50027c
  014c4e0  nop
  014c4e4  ori 4, 27, 0
  014c4e8  ori 3, 28, 0
  014c4ec  ori 5, 30, 0
  014c4f0  bl 0x50027c
  014c4f4  nop
  014c4f8  lis 4, 151
  014c4fc  li 30, 1
  014c500  li 3, 4
  014c504  stw 30, -25392(4)
  014c508  bl 0x112dc0
  014c50c  nop
  014c510  lis 5, 161
  014c514  li 29, -1
  014c518  ori 3, 31, 0
  014c51c  ori 4, 29, 0
  014c520  stb 31, 24377(5)
  014c524  bl 0xe8aa4
  014c528  nop
  014c52c  bl 0x151e0c
  014c530  nop
  014c534  lis 3, 21
  014c538  lis 4, 114
  014c53c  addi 3, 3, -15512
  014c540  lfs 1, 0(3)
  014c544  lfs 2, -3056(4)
  014c548  fmuls 1, 2, 1
  014c54c  fctiwz 1, 1
  014c550  stfd 1, 152(1)
  014c554  lwz 3, 156(1)
  014c558  extsw 3, 3
  014c55c  bl 0x6dad0
  014c560  nop
  014c564  lis 4, 151
  014c568  ori 3, 29, 0
  014c56c  addic 4, 4, -25376
  014c570  stb 30, 8369(4)
  014c574  b 0x14c57c
  014c578  li 3, 0
  014c57c  ld 0, 256(1)
  014c580  mtlr 0
  014c584  ld 23, 168(1)
  014c588  ld 24, 176(1)
  014c58c  ld 25, 184(1)
  014c590  ld 26, 192(1)
  014c594  ld 27, 200(1)
  014c598  ld 28, 208(1)
  014c59c  ld 29, 216(1)
  014c5a0  ld 30, 224(1)
  014c5a4  ld 31, 232(1)
  014c5a8  addi 1, 1, 240
  014c5ac  blr

SecretMenu_OnEnter:   # 0x14c5b0, 0x18 bytes
  014c5b0  li 4, 0
  014c5b4  stw 4, 64(3)
  014c5b8  stw 4, 80(3)
  014c5bc  stw 4, 60(3)
  014c5c0  ori 3, 4, 0
  014c5c4  blr

SecretMenu_Update:   # 0x14c5d8, 0xc18 bytes
  014c5d8  stdu 1, -80(1)
  014c5dc  lis 8, 150
  014c5e0  li 5, 0
  014c5e4  addic 8, 8, 19008
  014c5e8  lis 4, 21
  014c5ec  ori 6, 3, 0
  014c5f0  ori 3, 5, 0
  014c5f4  addi 4, 4, -14904
  014c5f8  lwz 7, 160(8)
  014c5fc  rlwinm 7, 7, 0, 29, 29
  014c600  cmpwi 7, 0
  014c604  bt 2, 0x14c638
  014c608  lwz 7, 160(8)
  014c60c  clrlwi 7, 7, 31
  014c610  cmpwi 7, 0
  014c614  bt 2, 0x14c638
  014c618  lwz 7, 160(8)
  014c61c  rlwinm 9, 7, 0, 28, 28
  014c620  cmpwi 9, 0
  014c624  bt 2, 0x14c638
  014c628  rlwinm 7, 7, 0, 30, 30
  014c62c  cmpwi 7, 0
  014c630  bt 2, 0x14c638
  014c634  li 5, 1
  014c638  lis 7, 165
  014c63c  cmpwi 1, 5, 0
  014c640  addic 7, 7, 11184
  014c644  lbz 9, 217(7)
  014c648  cmpwi 9, 0
  014c64c  bt 2, 0x14c664
  014c650  bt 6, 0x14c6c8
  014c654  lwz 9, 160(8)
  014c658  rlwinm 9, 9, 0, 27, 27
  014c65c  cmpwi 9, 0
  014c660  bt 2, 0x14c6c8
  014c664  li 9, 3328
  014c668  lwz 8, 196(8)
  014c66c  and 9, 8, 9
  014c670  cmpwi 9, 0
  014c674  bt 2, 0x14c68c
  014c678  lwz 9, 288(7)
  014c67c  cmpwi 9, 0
  014c680  bf 2, 0x14c68c
  014c684  li 3, 1
  014c688  b 0x14d1e8
  014c68c  rlwinm 8, 8, 0, 27, 27
  014c690  cmpwi 8, 0
  014c694  bt 2, 0x14c6c8
  014c698  lwz 8, 4(7)
  014c69c  lwz 9, 56(8)
  014c6a0  cmpwi 9, 0
  014c6a4  bt 2, 0x14c6b4
  014c6a8  lwz 4, 56(8)
  014c6ac  stw 4, 8(7)
  014c6b0  b 0x14d1e8
  014c6b4  lwz 8, 288(7)
  014c6b8  cmpwi 8, 0
  014c6bc  bf 2, 0x14c6c8
  014c6c0  li 3, -1
  014c6c4  b 0x14d1e8
  014c6c8  lwz 8, 64(6)
  014c6cc  cmpwi 5, 0
  014c6d0  addic 9, 8, -1
  014c6d4  stw 9, 64(6)
  014c6d8  bt 2, 0x14c6e4
  014c6dc  addic 8, 8, -2
  014c6e0  stw 8, 64(6)
  014c6e4  lwz 8, 64(6)
  014c6e8  ori 9, 3, 0
  014c6ec  cmpwi 8, 0
  014c6f0  bt 0, 0x14c6f8
  014c6f4  ori 9, 8, 0
  014c6f8  lwz 8, 80(6)
  014c6fc  stw 9, 64(6)
  014c700  cmpwi 8, 9
  014c704  cmpwi 1, 8, 3
  014c708  cmpwi 6, 8, 0
  014c70c  cmpwi 7, 8, -1
  014c710  bt 1, 0x14c774
  014c714  bt 5, 0x14c73c
  014c718  bt 25, 0x14c724
  014c71c  bf 29, 0x14d1e8
  014c720  b 0x14c7e8
  014c724  cmpwi 8, 1
  014c728  bf 1, 0x14c8e0
  014c72c  cmpwi 8, 2
  014c730  cmpwi 1, 9, 0
  014c734  bf 1, 0x14c8f8
  014c738  b 0x14caf4
  014c73c  cmpwi 8, 6
  014c740  bt 1, 0x14c75c
  014c744  cmpwi 8, 4
  014c748  cmpwi 1, 9, 0
  014c74c  bf 1, 0x14c9f8
  014c750  cmpwi 8, 5
  014c754  bf 1, 0x14c8e0
  014c758  b 0x14c8f8
  014c75c  cmpwi 8, 7
  014c760  cmpwi 1, 9, 0
  014c764  bf 1, 0x14cbf0
  014c768  cmpwi 8, 8
  014c76c  bf 1, 0x14c8e0
  014c770  b 0x14c8f8
  014c774  cmpwi 8, 14
  014c778  bt 1, 0x14c7ac
  014c77c  cmpwi 8, 11
  014c780  bt 1, 0x14c794
  014c784  cmpwi 8, 10
  014c788  cmpwi 1, 9, 0
  014c78c  bf 1, 0x14ccf0
  014c790  b 0x14cdec
  014c794  cmpwi 8, 12
  014c798  bf 1, 0x14c8e0
  014c79c  cmpwi 8, 13
  014c7a0  cmpwi 1, 9, 0
  014c7a4  bf 1, 0x14c8f8
  014c7a8  b 0x14cee8
  014c7ac  cmpwi 8, 17
  014c7b0  bt 1, 0x14c7cc
  014c7b4  cmpwi 8, 15
  014c7b8  cmpwi 1, 9, 0
  014c7bc  bf 1, 0x14cfe0
  014c7c0  cmpwi 8, 16
  014c7c4  bf 1, 0x14c8e0
  014c7c8  b 0x14c8f8
  014c7cc  cmpwi 8, 18
  014c7d0  cmpwi 1, 9, 0
  014c7d4  bf 1, 0x14d0dc
  014c7d8  cmpwi 8, 19
  014c7dc  cmpwi 1, 9, 0
  014c7e0  bf 1, 0x14d1d0
  014c7e4  b 0x14d1e8
  014c7e8  addic 7, 8, 1
  014c7ec  lis 5, 114
  014c7f0  li 0, 48
  014c7f4  stw 7, 80(6)
  014c7f8  lfs 1, 0(4)
  014c7fc  lfs 2, -3056(5)
  014c800  fmuls 1, 2, 1
  014c804  lis 5, 115
  014c808  lis 8, 115
  014c80c  addic 5, 5, -6972
  014c810  li 7, 20650
  014c814  addic 8, 8, 2960
  014c818  fctiwz 1, 1
  014c81c  stfd 1, 64(1)
  014c820  lwz 4, 68(1)
  014c824  stw 4, 48(1)
  014c828  stw 4, 52(1)
  014c82c  stw 4, 56(1)
  014c830  stw 4, 60(1)
  014c834  lvx 2, 1, 0
  014c838  vspltw 2, 2, 0
  014c83c  vspltw 2, 2, 0
  014c840  vspltw 2, 2, 0
  014c844  vspltw 2, 2, 0
  014c848  vspltw 2, 2, 0
  014c84c  vspltw 2, 2, 0
  014c850  vspltw 2, 2, 0
  014c854  li 4, 64
  014c858  vspltw 2, 2, 0
  014c85c  vspltw 2, 2, 0
  014c860  vspltw 2, 2, 0
  014c864  vspltw 2, 2, 0
  014c868  vspltw 2, 2, 0
  014c86c  vspltw 2, 2, 0
  014c870  vspltw 2, 2, 0
  014c874  vspltw 2, 2, 0
  014c878  vspltw 2, 2, 0
  014c87c  vspltw 2, 2, 0
  014c880  vspltw 2, 2, 0
  014c884  vspltw 2, 2, 0
  014c888  vspltw 2, 2, 0
  014c88c  vspltw 2, 2, 0
  014c890  vspltw 2, 2, 0
  014c894  vspltw 2, 2, 0
  014c898  vspltw 2, 2, 0
  014c89c  vspltw 2, 2, 0
  014c8a0  vspltw 2, 2, 0
  014c8a4  vspltw 2, 2, 0
  014c8a8  vspltw 2, 2, 0
  014c8ac  vspltw 2, 2, 0
  014c8b0  vspltw 2, 2, 0
  014c8b4  vspltw 2, 2, 0
  014c8b8  vspltw 2, 2, 0
  014c8bc  vspltw 2, 2, 0
  014c8c0  vspltw 2, 2, 0
  014c8c4  vspltw 2, 2, 0
  014c8c8  vspltw 2, 2, 0
  014c8cc  stvewx 2, 4, 6
  014c8d0  stw 3, 60(6)
  014c8d4  stw 7, 52(5)
  014c8d8  stw 8, 52(6)
  014c8dc  b 0x14d1e8
  014c8e0  cmpwi 9, 0
  014c8e4  bf 2, 0x14d1e8
  014c8e8  addic 4, 8, 1
  014c8ec  stw 3, 84(6)
  014c8f0  stw 4, 80(6)
  014c8f4  b 0x14d1e8
  014c8f8  cmpwi 5, 0
  014c8fc  lwz 5, 60(6)
  014c900  addic 7, 5, 10
  014c904  stw 7, 60(6)
  014c908  bt 2, 0x14c914
  014c90c  addic 5, 5, 20
  014c910  stw 5, 60(6)
  014c914  lwz 5, 84(6)
  014c918  cmpwi 5, 0
  014c91c  bt 2, 0x14d1e8
  014c920  lis 5, 114
  014c924  lfs 1, 0(4)
  014c928  li 0, 48
  014c92c  lfs 2, -3056(5)
  014c930  fmuls 1, 2, 1
  014c934  addic 5, 8, 1
  014c938  fctiwz 1, 1
  014c93c  stfd 1, 64(1)
  014c940  lwz 4, 68(1)
  014c944  stw 4, 48(1)
  014c948  stw 4, 52(1)
  014c94c  stw 4, 56(1)
  014c950  stw 4, 60(1)
  014c954  lvx 2, 1, 0
  014c958  vspltw 2, 2, 0
  014c95c  vspltw 2, 2, 0
  014c960  vspltw 2, 2, 0
  014c964  vspltw 2, 2, 0
  014c968  vspltw 2, 2, 0
  014c96c  vspltw 2, 2, 0
  014c970  vspltw 2, 2, 0
  014c974  li 4, 64
  014c978  vspltw 2, 2, 0
  014c97c  vspltw 2, 2, 0
  014c980  vspltw 2, 2, 0
  014c984  vspltw 2, 2, 0
  014c988  vspltw 2, 2, 0
  014c98c  vspltw 2, 2, 0
  014c990  vspltw 2, 2, 0
  014c994  vspltw 2, 2, 0
  014c998  vspltw 2, 2, 0
  014c99c  vspltw 2, 2, 0
  014c9a0  vspltw 2, 2, 0
  014c9a4  vspltw 2, 2, 0
  014c9a8  vspltw 2, 2, 0
  014c9ac  vspltw 2, 2, 0
  014c9b0  vspltw 2, 2, 0
  014c9b4  vspltw 2, 2, 0
  014c9b8  vspltw 2, 2, 0
  014c9bc  vspltw 2, 2, 0
  014c9c0  vspltw 2, 2, 0
  014c9c4  vspltw 2, 2, 0
  014c9c8  vspltw 2, 2, 0
  014c9cc  vspltw 2, 2, 0
  014c9d0  vspltw 2, 2, 0
  014c9d4  vspltw 2, 2, 0
  014c9d8  vspltw 2, 2, 0
  014c9dc  vspltw 2, 2, 0
  014c9e0  vspltw 2, 2, 0
  014c9e4  vspltw 2, 2, 0
  014c9e8  vspltw 2, 2, 0
  014c9ec  stvewx 2, 4, 6
  014c9f0  stw 5, 80(6)
  014c9f4  b 0x14d1e8
  014c9f8  bf 6, 0x14d1e8
  014c9fc  li 5, 5
  014ca00  lis 7, 114
  014ca04  li 0, 48
  014ca08  stw 5, 80(6)
  014ca0c  lfs 1, 0(4)
  014ca10  lfs 2, -3056(7)
  014ca14  fmuls 1, 2, 1
  014ca18  lis 5, 115
  014ca1c  lis 8, 115
  014ca20  addic 5, 5, -6972
  014ca24  li 7, 20695
  014ca28  fctiwz 1, 1
  014ca2c  addic 8, 8, 3132
  014ca30  stfd 1, 64(1)
  014ca34  lwz 4, 68(1)
  014ca38  stw 4, 48(1)
  014ca3c  stw 4, 52(1)
  014ca40  stw 4, 56(1)
  014ca44  stw 4, 60(1)
  014ca48  lvx 2, 1, 0
  014ca4c  vspltw 2, 2, 0
  014ca50  vspltw 2, 2, 0
  014ca54  vspltw 2, 2, 0
  014ca58  vspltw 2, 2, 0
  014ca5c  vspltw 2, 2, 0
  014ca60  vspltw 2, 2, 0
  014ca64  li 4, 64
  014ca68  vspltw 2, 2, 0
  014ca6c  vspltw 2, 2, 0
  014ca70  vspltw 2, 2, 0
  014ca74  vspltw 2, 2, 0
  014ca78  vspltw 2, 2, 0
  014ca7c  vspltw 2, 2, 0
  014ca80  vspltw 2, 2, 0
  014ca84  vspltw 2, 2, 0
  014ca88  vspltw 2, 2, 0
  014ca8c  vspltw 2, 2, 0
  014ca90  vspltw 2, 2, 0
  014ca94  vspltw 2, 2, 0
  014ca98  vspltw 2, 2, 0
  014ca9c  vspltw 2, 2, 0
  014caa0  vspltw 2, 2, 0
  014caa4  vspltw 2, 2, 0
  014caa8  vspltw 2, 2, 0
  014caac  vspltw 2, 2, 0
  014cab0  vspltw 2, 2, 0
  014cab4  vspltw 2, 2, 0
  014cab8  vspltw 2, 2, 0
  014cabc  vspltw 2, 2, 0
  014cac0  vspltw 2, 2, 0
  014cac4  vspltw 2, 2, 0
  014cac8  vspltw 2, 2, 0
  014cacc  vspltw 2, 2, 0
  014cad0  vspltw 2, 2, 0
  014cad4  vspltw 2, 2, 0
  014cad8  vspltw 2, 2, 0
  014cadc  vspltw 2, 2, 0
  014cae0  stvewx 2, 4, 6
  014cae4  stw 3, 60(6)
  014cae8  stw 7, 52(5)
  014caec  stw 8, 52(6)
  014caf0  b 0x14d1e8
  014caf4  bf 6, 0x14d1e8
  014caf8  lis 5, 115
  014cafc  li 8, 20693
  014cb00  addic 5, 5, -6972
  014cb04  li 7, 20694
  014cb08  lis 9, 114
  014cb0c  li 0, 48
  014cb10  stw 8, 52(5)
  014cb14  stw 7, 52(6)
  014cb18  lfs 1, 4(4)
  014cb1c  lfs 2, -3056(9)
  014cb20  fmuls 1, 2, 1
  014cb24  fctiwz 1, 1
  014cb28  stfd 1, 64(1)
  014cb2c  lwz 4, 68(1)
  014cb30  stw 4, 48(1)
  014cb34  stw 4, 52(1)
  014cb38  stw 4, 56(1)
  014cb3c  stw 4, 60(1)
  014cb40  lvx 2, 1, 0
  014cb44  vspltw 2, 2, 0
  014cb48  vspltw 2, 2, 0
  014cb4c  vspltw 2, 2, 0
  014cb50  vspltw 2, 2, 0
  014cb54  vspltw 2, 2, 0
  014cb58  vspltw 2, 2, 0
  014cb5c  li 4, 64
  014cb60  vspltw 2, 2, 0
  014cb64  vspltw 2, 2, 0
  014cb68  vspltw 2, 2, 0
  014cb6c  vspltw 2, 2, 0
  014cb70  vspltw 2, 2, 0
  014cb74  vspltw 2, 2, 0
  014cb78  vspltw 2, 2, 0
  014cb7c  vspltw 2, 2, 0
  014cb80  lwz 5, 80(6)
  014cb84  vspltw 2, 2, 0
  014cb88  addic 5, 5, 1
  014cb8c  vspltw 2, 2, 0
  014cb90  vspltw 2, 2, 0
  014cb94  vspltw 2, 2, 0
  014cb98  vspltw 2, 2, 0
  014cb9c  vspltw 2, 2, 0
  014cba0  vspltw 2, 2, 0
  014cba4  vspltw 2, 2, 0
  014cba8  vspltw 2, 2, 0
  014cbac  vspltw 2, 2, 0
  014cbb0  vspltw 2, 2, 0
  014cbb4  vspltw 2, 2, 0
  014cbb8  vspltw 2, 2, 0
  014cbbc  vspltw 2, 2, 0
  014cbc0  vspltw 2, 2, 0
  014cbc4  vspltw 2, 2, 0
  014cbc8  vspltw 2, 2, 0
  014cbcc  vspltw 2, 2, 0
  014cbd0  vspltw 2, 2, 0
  014cbd4  vspltw 2, 2, 0
  014cbd8  vspltw 2, 2, 0
  014cbdc  vspltw 2, 2, 0
  014cbe0  stvewx 2, 4, 6
  014cbe4  stw 3, 60(6)
  014cbe8  stw 5, 80(6)
  014cbec  b 0x14d1e8
  014cbf0  bf 6, 0x14d1e8
  014cbf4  lis 5, 115
  014cbf8  lis 8, 115
  014cbfc  addic 5, 5, -6972
  014cc00  li 7, 20743
  014cc04  addic 8, 8, 3324
  014cc08  lis 9, 114
  014cc0c  li 0, 48
  014cc10  stw 7, 52(5)
  014cc14  stw 8, 52(6)
  014cc18  lfs 1, 4(4)
  014cc1c  lfs 2, -3056(9)
  014cc20  fmuls 1, 2, 1
  014cc24  fctiwz 1, 1
  014cc28  stfd 1, 64(1)
  014cc2c  lwz 4, 68(1)
  014cc30  stw 4, 48(1)
  014cc34  stw 4, 52(1)
  014cc38  stw 4, 56(1)
  014cc3c  stw 4, 60(1)
  014cc40  lvx 2, 1, 0
  014cc44  vspltw 2, 2, 0
  014cc48  vspltw 2, 2, 0
  014cc4c  vspltw 2, 2, 0
  014cc50  vspltw 2, 2, 0
  014cc54  vspltw 2, 2, 0
  014cc58  vspltw 2, 2, 0
  014cc5c  li 4, 64
  014cc60  vspltw 2, 2, 0
  014cc64  vspltw 2, 2, 0
  014cc68  vspltw 2, 2, 0
  014cc6c  vspltw 2, 2, 0
  014cc70  vspltw 2, 2, 0
  014cc74  vspltw 2, 2, 0
  014cc78  vspltw 2, 2, 0
  014cc7c  vspltw 2, 2, 0
  014cc80  lwz 5, 80(6)
  014cc84  vspltw 2, 2, 0
  014cc88  addic 5, 5, 1
  014cc8c  vspltw 2, 2, 0
  014cc90  vspltw 2, 2, 0
  014cc94  vspltw 2, 2, 0
  014cc98  vspltw 2, 2, 0
  014cc9c  vspltw 2, 2, 0
  014cca0  vspltw 2, 2, 0
  014cca4  vspltw 2, 2, 0
  014cca8  vspltw 2, 2, 0
  014ccac  vspltw 2, 2, 0
  014ccb0  vspltw 2, 2, 0
  014ccb4  vspltw 2, 2, 0
  014ccb8  vspltw 2, 2, 0
  014ccbc  vspltw 2, 2, 0
  014ccc0  vspltw 2, 2, 0
  014ccc4  vspltw 2, 2, 0
  014ccc8  vspltw 2, 2, 0
  014cccc  vspltw 2, 2, 0
  014ccd0  vspltw 2, 2, 0
  014ccd4  vspltw 2, 2, 0
  014ccd8  vspltw 2, 2, 0
  014ccdc  vspltw 2, 2, 0
  014cce0  stvewx 2, 4, 6
  014cce4  stw 3, 60(6)
  014cce8  stw 5, 80(6)
  014ccec  b 0x14d1e8
  014ccf0  bf 6, 0x14d1e8
  014ccf4  lis 5, 115
  014ccf8  li 7, 20790
  014ccfc  addic 5, 5, -6972
  014cd00  li 8, 20791
  014cd04  lis 9, 114
  014cd08  li 0, 48
  014cd0c  stw 7, 52(5)
  014cd10  stw 8, 52(6)
  014cd14  lfs 1, 4(4)
  014cd18  lfs 2, -3056(9)
  014cd1c  fmuls 1, 2, 1
  014cd20  fctiwz 1, 1
  014cd24  stfd 1, 64(1)
  014cd28  lwz 4, 68(1)
  014cd2c  stw 4, 48(1)
  014cd30  stw 4, 52(1)
  014cd34  stw 4, 56(1)
  014cd38  stw 4, 60(1)
  014cd3c  lvx 2, 1, 0
  014cd40  vspltw 2, 2, 0
  014cd44  vspltw 2, 2, 0
  014cd48  vspltw 2, 2, 0
  014cd4c  vspltw 2, 2, 0
  014cd50  vspltw 2, 2, 0
  014cd54  vspltw 2, 2, 0
  014cd58  vspltw 2, 2, 0
  014cd5c  li 4, 64
  014cd60  vspltw 2, 2, 0
  014cd64  vspltw 2, 2, 0
  014cd68  vspltw 2, 2, 0
  014cd6c  vspltw 2, 2, 0
  014cd70  vspltw 2, 2, 0
  014cd74  vspltw 2, 2, 0
  014cd78  vspltw 2, 2, 0
  014cd7c  lwz 5, 80(6)
  014cd80  vspltw 2, 2, 0
  014cd84  addic 5, 5, 1
  014cd88  vspltw 2, 2, 0
  014cd8c  vspltw 2, 2, 0
  014cd90  vspltw 2, 2, 0
  014cd94  vspltw 2, 2, 0
  014cd98  vspltw 2, 2, 0
  014cd9c  vspltw 2, 2, 0
  014cda0  vspltw 2, 2, 0
  014cda4  vspltw 2, 2, 0
  014cda8  vspltw 2, 2, 0
  014cdac  vspltw 2, 2, 0
  014cdb0  vspltw 2, 2, 0
  014cdb4  vspltw 2, 2, 0
  014cdb8  vspltw 2, 2, 0
  014cdbc  vspltw 2, 2, 0
  014cdc0  vspltw 2, 2, 0
  014cdc4  vspltw 2, 2, 0
  014cdc8  vspltw 2, 2, 0
  014cdcc  vspltw 2, 2, 0
  014cdd0  vspltw 2, 2, 0
  014cdd4  vspltw 2, 2, 0
  014cdd8  vspltw 2, 2, 0
  014cddc  stvewx 2, 4, 6
  014cde0  stw 3, 60(6)
  014cde4  stw 5, 80(6)
  014cde8  b 0x14d1e8
  014cdec  bf 6, 0x14d1e8
  014cdf0  lis 5, 114
  014cdf4  lfs 1, 0(4)
  014cdf8  li 0, 48
  014cdfc  lfs 2, -3056(5)
  014ce00  fmuls 1, 2, 1
  014ce04  lis 5, 115
  014ce08  lis 8, 115
  014ce0c  addic 5, 5, -6972
  014ce10  li 7, 20792
  014ce14  addic 8, 8, 3468
  014ce18  fctiwz 1, 1
  014ce1c  li 9, 12
  014ce20  stfd 1, 64(1)
  014ce24  lwz 4, 68(1)
  014ce28  stw 4, 48(1)
  014ce2c  stw 4, 52(1)
  014ce30  stw 4, 56(1)
  014ce34  stw 4, 60(1)
  014ce38  lvx 2, 1, 0
  014ce3c  vspltw 2, 2, 0
  014ce40  vspltw 2, 2, 0
  014ce44  vspltw 2, 2, 0
  014ce48  vspltw 2, 2, 0
  014ce4c  vspltw 2, 2, 0
  014ce50  vspltw 2, 2, 0
  014ce54  li 4, 64
  014ce58  vspltw 2, 2, 0
  014ce5c  vspltw 2, 2, 0
  014ce60  vspltw 2, 2, 0
  014ce64  vspltw 2, 2, 0
  014ce68  vspltw 2, 2, 0
  014ce6c  vspltw 2, 2, 0
  014ce70  vspltw 2, 2, 0
  014ce74  vspltw 2, 2, 0
  014ce78  vspltw 2, 2, 0
  014ce7c  vspltw 2, 2, 0
  014ce80  vspltw 2, 2, 0
  014ce84  vspltw 2, 2, 0
  014ce88  vspltw 2, 2, 0
  014ce8c  vspltw 2, 2, 0
  014ce90  vspltw 2, 2, 0
  014ce94  vspltw 2, 2, 0
  014ce98  vspltw 2, 2, 0
  014ce9c  vspltw 2, 2, 0
  014cea0  vspltw 2, 2, 0
  014cea4  vspltw 2, 2, 0
  014cea8  vspltw 2, 2, 0
  014ceac  vspltw 2, 2, 0
  014ceb0  vspltw 2, 2, 0
  014ceb4  vspltw 2, 2, 0
  014ceb8  vspltw 2, 2, 0
  014cebc  vspltw 2, 2, 0
  014cec0  vspltw 2, 2, 0
  014cec4  vspltw 2, 2, 0
  014cec8  vspltw 2, 2, 0
  014cecc  vspltw 2, 2, 0
  014ced0  stvewx 2, 4, 6
  014ced4  stw 3, 60(6)
  014ced8  stw 7, 52(5)
  014cedc  stw 8, 52(6)
  014cee0  stw 9, 80(6)
  014cee4  b 0x14d1e8
  014cee8  bf 6, 0x14d1e8
  014ceec  lis 5, 115
  014cef0  li 7, 20803
  014cef4  addic 5, 5, -6972
  014cef8  lis 8, 114
  014cefc  li 0, 48
  014cf00  stw 3, 52(5)
  014cf04  stw 7, 52(6)
  014cf08  lfs 1, 4(4)
  014cf0c  lfs 2, -3056(8)
  014cf10  fmuls 1, 2, 1
  014cf14  fctiwz 1, 1
  014cf18  stfd 1, 64(1)
  014cf1c  lwz 4, 68(1)
  014cf20  stw 4, 48(1)
  014cf24  stw 4, 52(1)
  014cf28  stw 4, 56(1)
  014cf2c  stw 4, 60(1)
  014cf30  lvx 2, 1, 0
  014cf34  vspltw 2, 2, 0
  014cf38  vspltw 2, 2, 0
  014cf3c  vspltw 2, 2, 0
  014cf40  vspltw 2, 2, 0
  014cf44  vspltw 2, 2, 0
  014cf48  vspltw 2, 2, 0
  014cf4c  li 4, 64
  014cf50  vspltw 2, 2, 0
  014cf54  vspltw 2, 2, 0
  014cf58  vspltw 2, 2, 0
  014cf5c  vspltw 2, 2, 0
  014cf60  vspltw 2, 2, 0
  014cf64  vspltw 2, 2, 0
  014cf68  vspltw 2, 2, 0
  014cf6c  vspltw 2, 2, 0
  014cf70  lwz 5, 80(6)
  014cf74  vspltw 2, 2, 0
  014cf78  addic 5, 5, 1
  014cf7c  vspltw 2, 2, 0
  014cf80  vspltw 2, 2, 0
  014cf84  vspltw 2, 2, 0
  014cf88  vspltw 2, 2, 0
  014cf8c  vspltw 2, 2, 0
  014cf90  vspltw 2, 2, 0
  014cf94  vspltw 2, 2, 0
  014cf98  vspltw 2, 2, 0
  014cf9c  vspltw 2, 2, 0
  014cfa0  vspltw 2, 2, 0
  014cfa4  vspltw 2, 2, 0
  014cfa8  vspltw 2, 2, 0
  014cfac  vspltw 2, 2, 0
  014cfb0  vspltw 2, 2, 0
  014cfb4  vspltw 2, 2, 0
  014cfb8  vspltw 2, 2, 0
  014cfbc  vspltw 2, 2, 0
  014cfc0  vspltw 2, 2, 0
  014cfc4  vspltw 2, 2, 0
  014cfc8  vspltw 2, 2, 0
  014cfcc  vspltw 2, 2, 0
  014cfd0  stvewx 2, 4, 6
  014cfd4  stw 3, 60(6)
  014cfd8  stw 5, 80(6)
  014cfdc  b 0x14d1e8
  014cfe0  bf 6, 0x14d1e8
  014cfe4  lis 5, 114
  014cfe8  lfs 1, 0(4)
  014cfec  li 0, 48
  014cff0  lfs 2, -3056(5)
  014cff4  fmuls 1, 2, 1
  014cff8  lis 5, 115
  014cffc  lis 8, 115
  014d000  addic 5, 5, -6972
  014d004  li 7, 20804
  014d008  fctiwz 1, 1
  014d00c  addic 8, 8, 3492
  014d010  li 9, 16
  014d014  stfd 1, 64(1)
  014d018  lwz 4, 68(1)
  014d01c  stw 4, 48(1)
  014d020  stw 4, 52(1)
  014d024  stw 4, 56(1)
  014d028  stw 4, 60(1)
  014d02c  lvx 2, 1, 0
  014d030  vspltw 2, 2, 0
  014d034  vspltw 2, 2, 0
  014d038  vspltw 2, 2, 0
  014d03c  vspltw 2, 2, 0
  014d040  vspltw 2, 2, 0
  014d044  vspltw 2, 2, 0
  014d048  vspltw 2, 2, 0
  014d04c  li 4, 64
  014d050  vspltw 2, 2, 0
  014d054  vspltw 2, 2, 0
  014d058  vspltw 2, 2, 0
  014d05c  vspltw 2, 2, 0
  014d060  vspltw 2, 2, 0
  014d064  vspltw 2, 2, 0
  014d068  vspltw 2, 2, 0
  014d06c  vspltw 2, 2, 0
  014d070  vspltw 2, 2, 0
  014d074  vspltw 2, 2, 0
  014d078  vspltw 2, 2, 0
  014d07c  vspltw 2, 2, 0
  014d080  vspltw 2, 2, 0
  014d084  vspltw 2, 2, 0
  014d088  vspltw 2, 2, 0
  014d08c  vspltw 2, 2, 0
  014d090  vspltw 2, 2, 0
  014d094  vspltw 2, 2, 0
  014d098  vspltw 2, 2, 0
  014d09c  vspltw 2, 2, 0
  014d0a0  vspltw 2, 2, 0
  014d0a4  vspltw 2, 2, 0
  014d0a8  vspltw 2, 2, 0
  014d0ac  vspltw 2, 2, 0
  014d0b0  vspltw 2, 2, 0
  014d0b4  vspltw 2, 2, 0
  014d0b8  vspltw 2, 2, 0
  014d0bc  vspltw 2, 2, 0
  014d0c0  vspltw 2, 2, 0
  014d0c4  stvewx 2, 4, 6
  014d0c8  stw 3, 60(6)
  014d0cc  stw 7, 52(5)
  014d0d0  stw 8, 52(6)
  014d0d4  stw 9, 80(6)
  014d0d8  b 0x14d1e8
  014d0dc  bf 6, 0x14d1e8
  014d0e0  lis 5, 115
  014d0e4  lwz 9, 80(6)
  014d0e8  li 7, 20853
  014d0ec  addic 5, 5, -6972
  014d0f0  addic 9, 9, 1
  014d0f4  lis 8, 114
  014d0f8  li 0, 48
  014d0fc  stw 3, 52(5)
  014d100  stw 7, 52(6)
  014d104  stw 9, 80(6)
  014d108  lfs 1, 8(4)
  014d10c  lfs 2, -3056(8)
  014d110  fmuls 1, 2, 1
  014d114  fctiwz 1, 1
  014d118  stfd 1, 64(1)
  014d11c  lwz 4, 68(1)
  014d120  stw 4, 48(1)
  014d124  stw 4, 52(1)
  014d128  stw 4, 56(1)
  014d12c  stw 4, 60(1)
  014d130  lvx 2, 1, 0
  014d134  vspltw 2, 2, 0
  014d138  vspltw 2, 2, 0
  014d13c  vspltw 2, 2, 0
  014d140  vspltw 2, 2, 0
  014d144  vspltw 2, 2, 0
  014d148  vspltw 2, 2, 0
  014d14c  li 4, 64
  014d150  vspltw 2, 2, 0
  014d154  vspltw 2, 2, 0
  014d158  vspltw 2, 2, 0
  014d15c  vspltw 2, 2, 0
  014d160  vspltw 2, 2, 0
  014d164  vspltw 2, 2, 0
  014d168  vspltw 2, 2, 0
  014d16c  vspltw 2, 2, 0
  014d170  vspltw 2, 2, 0
  014d174  vspltw 2, 2, 0
  014d178  vspltw 2, 2, 0
  014d17c  vspltw 2, 2, 0
  014d180  vspltw 2, 2, 0
  014d184  vspltw 2, 2, 0
  014d188  vspltw 2, 2, 0
  014d18c  vspltw 2, 2, 0
  014d190  vspltw 2, 2, 0
  014d194  vspltw 2, 2, 0
  014d198  vspltw 2, 2, 0
  014d19c  vspltw 2, 2, 0
  014d1a0  vspltw 2, 2, 0
  014d1a4  vspltw 2, 2, 0
  014d1a8  vspltw 2, 2, 0
  014d1ac  vspltw 2, 2, 0
  014d1b0  vspltw 2, 2, 0
  014d1b4  vspltw 2, 2, 0
  014d1b8  vspltw 2, 2, 0
  014d1bc  vspltw 2, 2, 0
  014d1c0  vspltw 2, 2, 0
  014d1c4  vspltw 2, 2, 0
  014d1c8  stvewx 2, 4, 6
  014d1cc  b 0x14d1e8
  014d1d0  bf 6, 0x14d1e8
  014d1d4  lbz 4, 217(7)
  014d1d8  cmpwi 4, 0
  014d1dc  bt 2, 0x14d1e8
  014d1e0  li 3, 1
  014d1e4  b 0x14d1e8
  014d1e8  addi 1, 1, 80
  014d1ec  blr

SecretMenu_Draw:   # 0x14d1f0, 0x2ac bytes
  014d1f0  stdu 1, -192(1)
  014d1f4  mflr 0
  014d1f8  std 0, 208(1)
  014d1fc  std 30, 176(1)
  014d200  std 31, 184(1)
  014d204  li 30, 0
  014d208  std 29, 168(1)
  014d20c  ori 31, 3, 0
  014d210  lis 29, 21
  014d214  std 26, 144(1)
  014d218  ori 3, 30, 0
  014d21c  li 26, 1
  014d220  std 27, 152(1)
  014d224  ori 4, 30, 0
  014d228  li 27, 22
  014d22c  std 28, 160(1)
  014d230  addi 29, 29, -11792
  014d234  ori 28, 31, 0
  014d238  ori 5, 30, 0
  014d23c  ori 6, 30, 0
  014d240  ori 7, 30, 0
  014d244  ori 8, 30, 0
  014d248  ori 9, 26, 0
  014d24c  std 25, 136(1)
  014d250  ori 10, 26, 0
  014d254  bl 0x502f98
  014d258  nop
  014d25c  ori 4, 3, 0
  014d260  ori 3, 27, 0
  014d264  bl 0x174f80
  014d268  nop
  014d26c  ori 3, 30, 0
  014d270  li 27, 3
  014d274  ori 4, 26, 0
  014d278  ori 6, 26, 0
  014d27c  li 7, 128
  014d280  ori 5, 30, 0
  014d284  bl 0x502ea8
  014d288  nop
  014d28c  ori 4, 3, 0
  014d290  ori 3, 27, 0
  014d294  bl 0x174f80
  014d298  nop
  014d29c  ori 3, 30, 0
  014d2a0  bl 0x6d704
  014d2a4  nop
  014d2a8  lwz 3, 36(31)
  014d2ac  lwz 4, 32(31)
  014d2b0  li 5, 16
  014d2b4  lwz 6, 24(31)
  014d2b8  srawi 7, 3, 1
  014d2bc  lwz 8, 28(31)
  014d2c0  li 9, 9
  014d2c4  sth 6, 116(1)
  014d2c8  addc 10, 6, 4
  014d2cc  sth 5, 128(1)
  014d2d0  addc 3, 8, 3
  014d2d4  sth 7, 122(1)
  014d2d8  addic 5, 8, 4
  014d2dc  srawi 4, 4, 1
  014d2e0  sth 9, 130(1)
  014d2e4  addic 7, 3, -4
  014d2e8  sth 10, 118(1)
  014d2ec  addc 4, 6, 4
  014d2f0  lwz 3, 80(28)
  014d2f4  sth 5, 112(1)
  014d2f8  cmpwi 3, 10
  014d2fc  sth 7, 114(1)
  014d300  sth 4, 120(1)
  014d304  sth 30, 132(1)
  014d308  sth 30, 134(1)
  014d30c  bt 1, 0x14d330
  014d310  cmpwi 3, 0
  014d314  bt 1, 0x14d324
  014d318  cmpwi 3, -1
  014d31c  bf 1, 0x14d464
  014d320  b 0x14d360
  014d324  cmpwi 3, 4
  014d328  bt 2, 0x14d424
  014d32c  b 0x14d364
  014d330  cmpwi 3, 18
  014d334  bt 1, 0x14d358
  014d338  cmpwi 3, 14
  014d33c  bt 1, 0x14d34c
  014d340  cmpwi 3, 11
  014d344  bf 1, 0x14d424
  014d348  b 0x14d364
  014d34c  cmpwi 3, 15
  014d350  bf 1, 0x14d424
  014d354  b 0x14d364
  014d358  cmpwi 3, 19
  014d35c  bf 1, 0x14d424
  014d360  b 0x14d464
  014d364  lwz 3, 60(28)
  014d368  lwz 4, 52(28)
  014d36c  lwz 5, 28(31)
  014d370  srawi 3, 3, 4
  014d374  subc 27, 5, 3
  014d378  lwz 3, 0(4)
  014d37c  addic 27, 27, 4
  014d380  cmpwi 3, -1
  014d384  bt 2, 0x14d400
  014d388  lwz 4, 60(28)
  014d38c  lis 3, -32513
  014d390  sth 27, 122(1)
  014d394  addic 26, 30, 4
  014d398  srawi 4, 4, 4
  014d39c  lwz 5, 52(28)
  014d3a0  ori 3, 3, 43144
  014d3a4  clrlwi 4, 4, 28
  014d3a8  clrldi 25, 3, 32
  014d3ac  sth 4, 134(1)
  014d3b0  lwzx 3, 5, 30
  014d3b4  extsw 3, 3
  014d3b8  bl 0x7b740
  014d3bc  nop
  014d3c0  ori 5, 3, 0
  014d3c4  addic 3, 1, 112
  014d3c8  li 6, -1
  014d3cc  ori 4, 25, 0
  014d3d0  bl 0x6a510
  014d3d4  nop
  014d3d8  lhz 3, 126(1)
  014d3dc  extsw 4, 26
  014d3e0  lwz 5, 52(28)
  014d3e4  ori 30, 26, 0
  014d3e8  extsh 3, 3
  014d3ec  addc 27, 27, 3
  014d3f0  lwzx 3, 5, 4
  014d3f4  addic 27, 27, 10
  014d3f8  cmpwi 3, -1
  014d3fc  bf 2, 0x14d388
  014d400  lwz 4, 28(31)
  014d404  addic 3, 27, 24
  014d408  lwz 5, 36(31)
  014d40c  addc 4, 4, 5
  014d410  cmpw 3, 4
  014d414  bf 0, 0x14d464
  014d418  li 3, 1
  014d41c  stw 3, 84(28)
  014d420  b 0x14d464
  014d424  lis 3, -32513
  014d428  lwz 4, 28(31)
  014d42c  ori 3, 3, 43144
  014d430  lwz 5, 52(28)
  014d434  addic 4, 4, 32
  014d438  clrldi 31, 3, 32
  014d43c  extsw 3, 5
  014d440  sth 4, 122(1)
  014d444  bl 0x7b740
  014d448  nop
  014d44c  ori 5, 3, 0
  014d450  li 6, -1
  014d454  addic 3, 1, 112
  014d458  ori 4, 31, 0
  014d45c  bl 0x6a510
  014d460  nop
  014d464  bl 0x6d708
  014d468  nop
  014d46c  li 3, 2
  014d470  ld 0, 208(1)
  014d474  mtlr 0
  014d478  ld 25, 136(1)
  014d47c  ld 26, 144(1)
  014d480  ld 27, 152(1)
  014d484  ld 28, 160(1)
  014d488  ld 29, 168(1)
  014d48c  ld 30, 176(1)
  014d490  ld 31, 184(1)
  014d494  addi 1, 1, 192
  014d498  blr

DrawUnusedCompletedGameFrame:   # 0x14d49c, 0x1a0 bytes
  014d49c  stdu 1, -208(1)
  014d4a0  mflr 0
  014d4a4  std 0, 224(1)
  014d4a8  std 31, 200(1)
  014d4ac  li 4, 0
  014d4b0  li 31, 16
  014d4b4  sth 4, 112(1)
  014d4b8  sth 4, 116(1)
  014d4bc  sth 4, 120(1)
  014d4c0  sth 4, 122(1)
  014d4c4  sth 4, 124(1)
  014d4c8  sth 4, 126(1)
  014d4cc  sth 31, 128(1)
  014d4d0  sth 4, 130(1)
  014d4d4  lwz 5, 36(3)
  014d4d8  sth 4, 132(1)
  014d4dc  sth 4, 134(1)
  014d4e0  lwz 6, 32(3)
  014d4e4  ori 3, 4, 0
  014d4e8  sth 5, 114(1)
  014d4ec  std 30, 192(1)
  014d4f0  std 29, 184(1)
  014d4f4  std 28, 176(1)
  014d4f8  std 27, 168(1)
  014d4fc  std 26, 160(1)
  014d500  std 25, 152(1)
  014d504  std 24, 144(1)
  014d508  sth 6, 118(1)
  014d50c  bl 0x6d704
  014d510  nop
  014d514  lis 3, 0
  014d518  li 28, 6
  014d51c  ori 29, 3, 59802
  014d520  li 30, 4
  014d524  ori 3, 29, 0
  014d528  ori 4, 28, 0
  014d52c  bl 0xca3e4
  014d530  nop
  014d534  li 27, 128
  014d538  ori 4, 30, 0
  014d53c  ori 6, 31, 0
  014d540  li 5, 12
  014d544  ori 7, 31, 0
  014d548  ori 8, 27, 0
  014d54c  bl 0xcc0f0
  014d550  nop
  014d554  lis 4, -32513
  014d558  sth 30, 122(1)
  014d55c  li 3, 24
  014d560  ori 4, 4, 43144
  014d564  addic 26, 1, 112
  014d568  clrldi 4, 4, 32
  014d56c  sth 3, 120(1)
  014d570  li 3, 20866
  014d574  ori 25, 4, 0
  014d578  bl 0x7b740
  014d57c  nop
  014d580  li 24, -1
  014d584  ori 5, 3, 0
  014d588  ori 4, 25, 0
  014d58c  ori 3, 26, 0
  014d590  ori 6, 24, 0
  014d594  bl 0x6a510
  014d598  nop
  014d59c  lhz 4, 126(1)
  014d5a0  ori 3, 29, 0
  014d5a4  extsh 4, 4
  014d5a8  addc 29, 30, 4
  014d5ac  ori 4, 28, 0
  014d5b0  addic 5, 29, 12
  014d5b4  sth 5, 122(1)
  014d5b8  bl 0xca3e4
  014d5bc  nop
  014d5c0  addic 5, 29, 20
  014d5c4  ori 4, 30, 0
  014d5c8  ori 6, 31, 0
  014d5cc  ori 7, 31, 0
  014d5d0  ori 8, 27, 0
  014d5d4  bl 0xcc0f0
  014d5d8  nop
  014d5dc  li 3, 20867
  014d5e0  bl 0x7b740
  014d5e4  nop
  014d5e8  ori 5, 3, 0
  014d5ec  ori 3, 26, 0
  014d5f0  ori 4, 25, 0
  014d5f4  ori 6, 24, 0
  014d5f8  bl 0x6a510
  014d5fc  nop
  014d600  bl 0x6d708
  014d604  nop
  014d608  li 3, 2
  014d60c  ld 0, 224(1)
  014d610  mtlr 0
  014d614  ld 24, 144(1)
  014d618  ld 25, 152(1)
  014d61c  ld 26, 160(1)
  014d620  ld 27, 168(1)
  014d624  ld 28, 176(1)
  014d628  ld 29, 184(1)
  014d62c  ld 30, 192(1)
  014d630  ld 31, 200(1)
  014d634  addi 1, 1, 208
  014d638  blr

Draw_GameCompletedFrame:   # 0x14d63c, 0x688 bytes
  014d63c  stdu 1, -336(1)
  014d640  mflr 0
  014d644  std 0, 352(1)
  014d648  std 31, 328(1)
  014d64c  std 26, 288(1)
  014d650  ori 31, 3, 0
  014d654  li 26, 0
  014d658  std 30, 320(1)
  014d65c  std 29, 312(1)
  014d660  std 28, 304(1)
  014d664  std 27, 296(1)
  014d668  std 25, 280(1)
  014d66c  std 24, 272(1)
  014d670  std 23, 264(1)
  014d674  std 22, 256(1)
  014d678  std 21, 248(1)
  014d67c  std 20, 240(1)
  014d680  std 19, 232(1)
  014d684  std 18, 224(1)
  014d688  std 17, 216(1)
  014d68c  std 16, 208(1)
  014d690  std 15, 200(1)
  014d694  ori 3, 26, 0
  014d698  bl 0x6d704
  014d69c  nop
  014d6a0  lis 4, 26214
  014d6a4  lwz 3, 36(31)
  014d6a8  addic 18, 1, 112
  014d6ac  ori 4, 4, 26215
  014d6b0  mulhw 5, 4, 3
  014d6b4  mulhw 3, 4, 3
  014d6b8  srawi 4, 5, 1
  014d6bc  srawi 29, 3, 1
  014d6c0  srwi 3, 4, 31
  014d6c4  srwi 5, 29, 31
  014d6c8  addc 3, 4, 3
  014d6cc  addc 29, 29, 5
  014d6d0  addic 30, 3, -8
  014d6d4  li 3, 21039
  014d6d8  extsw 30, 30
  014d6dc  bl 0x7b740
  014d6e0  nop
  014d6e4  ori 28, 3, 0
  014d6e8  bl 0x11b1b4
  014d6ec  nop
  014d6f0  ori 5, 3, 0
  014d6f4  li 6, 40
  014d6f8  ori 3, 18, 0
  014d6fc  ori 4, 28, 0
  014d700  bl 0x5cd2a8
  014d704  nop
  014d708  li 16, -1
  014d70c  ori 3, 18, 0
  014d710  ori 4, 16, 0
  014d714  bl 0x6cde8
  014d718  nop
  014d71c  ori 28, 26, 0
  014d720  cmpw 3, 28
  014d724  bf 1, 0x14d72c
  014d728  ori 28, 3, 0
  014d72c  li 3, 21040
  014d730  bl 0x7b740
  014d734  nop
  014d738  ori 27, 3, 0
  014d73c  bl 0x11b124
  014d740  nop
  014d744  ori 5, 3, 0
  014d748  ori 3, 18, 0
  014d74c  li 6, 10
  014d750  ori 4, 27, 0
  014d754  bl 0x5cd2a8
  014d758  nop
  014d75c  ori 3, 18, 0
  014d760  ori 4, 16, 0
  014d764  bl 0x6cde8
  014d768  nop
  014d76c  cmpw 3, 28
  014d770  bf 1, 0x14d778
  014d774  ori 28, 3, 0
  014d778  li 3, 21041
  014d77c  bl 0x7b740
  014d780  nop
  014d784  ori 27, 3, 0
  014d788  bl 0x11b494
  014d78c  nop
  014d790  ori 5, 3, 0
  014d794  ori 3, 18, 0
  014d798  li 6, 30
  014d79c  ori 4, 27, 0
  014d7a0  bl 0x5cd2a8
  014d7a4  nop
  014d7a8  ori 3, 18, 0
  014d7ac  ori 4, 16, 0
  014d7b0  bl 0x6cde8
  014d7b4  nop
  014d7b8  ori 4, 3, 0
  014d7bc  ori 3, 28, 0
  014d7c0  cmpw 4, 3
  014d7c4  bf 1, 0x14d7cc
  014d7c8  ori 3, 4, 0
  014d7cc  lis 20, 346
  014d7d0  lbz 4, -15535(20)
  014d7d4  cmpwi 4, 0
  014d7d8  bf 2, 0x14d7e8
  014d7dc  lis 28, 115
  014d7e0  addic 28, 28, 26800
  014d7e4  b 0x14d7f0
  014d7e8  lis 28, 115
  014d7ec  addic 28, 28, 29584
  014d7f0  addic 3, 3, 24
  014d7f4  lwz 4, 32(31)
  014d7f8  li 27, 1
  014d7fc  cmpw 3, 4
  014d800  ori 22, 27, 0
  014d804  bf 1, 0x14d82c
  014d808  lbz 3, -15535(20)
  014d80c  cmpwi 3, 0
  014d810  bf 2, 0x14d824
  014d814  lis 28, 115
  014d818  li 27, 2
  014d81c  addic 28, 28, 27728
  014d820  b 0x14d82c
  014d824  lis 28, 115
  014d828  addic 28, 28, 29584
  014d82c  bl 0x6ccb4
  014d830  nop
  014d834  lis 3, -32513
  014d838  lwz 4, 32(31)
  014d83c  ori 5, 3, 43144
  014d840  li 3, 21038
  014d844  srawi 31, 4, 1
  014d848  clrldi 21, 5, 32
  014d84c  bl 0x7b740
  014d850  nop
  014d854  ori 6, 3, 0
  014d858  ori 4, 30, 0
  014d85c  ori 3, 31, 0
  014d860  ori 5, 21, 0
  014d864  ori 7, 16, 0
  014d868  bl 0x70514
  014d86c  nop
  014d870  addc 30, 29, 30
  014d874  extsw 30, 30
  014d878  bl 0x11b1b4
  014d87c  nop
  014d880  addic 31, 30, 4
  014d884  li 19, 16
  014d888  extsw 31, 31
  014d88c  li 17, 6
  014d890  addic 6, 31, 10
  014d894  addic 15, 3, -40
  014d898  ori 4, 31, 0
  014d89c  ori 3, 17, 0
  014d8a0  ori 5, 19, 0
  014d8a4  extsw 6, 6
  014d8a8  ori 7, 21, 0
  014d8ac  ori 8, 26, 0
  014d8b0  bl 0xca72c
  014d8b4  nop
  014d8b8  lis 24, 115
  014d8bc  li 25, 7
  014d8c0  addic 4, 31, 1
  014d8c4  li 23, 15
  014d8c8  addic 6, 31, 9
  014d8cc  lwz 7, -26560(24)
  014d8d0  ori 3, 25, 0
  014d8d4  extsw 4, 4
  014d8d8  ori 5, 23, 0
  014d8dc  extsw 6, 6
  014d8e0  extsw 7, 7
  014d8e4  ori 8, 26, 0
  014d8e8  bl 0xca72c
  014d8ec  nop
  014d8f0  cmpwi 15, 0
  014d8f4  bf 2, 0x14d92c
  014d8f8  lis 3, 0
  014d8fc  ori 4, 22, 0
  014d900  ori 3, 3, 59806
  014d904  bl 0xca3e4
  014d908  nop
  014d90c  addic 5, 31, -13
  014d910  li 6, 30
  014d914  li 4, -2
  014d918  extsw 5, 5
  014d91c  li 8, 128
  014d920  ori 7, 6, 0
  014d924  bl 0xcc0f0
  014d928  nop
  014d92c  li 3, 21039
  014d930  bl 0x7b740
  014d934  nop
  014d938  ori 31, 3, 0
  014d93c  bl 0x11b1b4
  014d940  nop
  014d944  ori 5, 3, 0
  014d948  ori 3, 18, 0
  014d94c  li 6, 40
  014d950  ori 4, 31, 0
  014d954  bl 0x5cd2a8
  014d958  nop
  014d95c  lbz 3, -15535(20)
  014d960  cmpwi 3, 0
  014d964  bf 2, 0x14d99c
  014d968  ori 3, 27, 0
  014d96c  bl 0x685c4
  014d970  nop
  014d974  ori 8, 3, 0
  014d978  li 3, 20
  014d97c  ori 4, 30, 0
  014d980  ori 5, 21, 0
  014d984  ori 6, 18, 0
  014d988  ori 7, 16, 0
  014d98c  ori 9, 28, 0
  014d990  bl 0x6c8d0
  014d994  nop
  014d998  b 0x14d9cc
  014d99c  ori 3, 27, 0
  014d9a0  bl 0x685c4
  014d9a4  nop
  014d9a8  ori 8, 3, 0
  014d9ac  ori 7, 16, 0
  014d9b0  li 3, 20
  014d9b4  ori 4, 30, 0
  014d9b8  ori 5, 21, 0
  014d9bc  ori 6, 18, 0
  014d9c0  ori 9, 28, 0
  014d9c4  bl 0x6c5ec
  014d9c8  nop
  014d9cc  addc 30, 29, 30
  014d9d0  extsw 30, 30
  014d9d4  bl 0x11b124
  014d9d8  nop
  014d9dc  addic 31, 30, 4
  014d9e0  addic 15, 3, -10
  014d9e4  extsw 31, 31
  014d9e8  ori 7, 21, 0
  014d9ec  addic 6, 31, 10
  014d9f0  ori 4, 31, 0
  014d9f4  extsw 6, 6
  014d9f8  ori 3, 17, 0
  014d9fc  ori 5, 19, 0
  014da00  ori 8, 26, 0
  014da04  bl 0xca72c
  014da08  nop
  014da0c  addic 4, 31, 1
  014da10  lwz 7, -26560(24)
  014da14  addic 6, 31, 9
  014da18  extsw 4, 4
  014da1c  ori 5, 23, 0
  014da20  extsw 6, 6
  014da24  extsw 7, 7
  014da28  ori 3, 25, 0
  014da2c  ori 8, 26, 0
  014da30  bl 0xca72c
  014da34  nop
  014da38  cmpwi 15, 0
  014da3c  bf 2, 0x14da74
  014da40  lis 3, 0
  014da44  ori 4, 22, 0
  014da48  ori 3, 3, 59806
  014da4c  bl 0xca3e4
  014da50  nop
  014da54  addic 5, 31, -13
  014da58  li 6, 30
  014da5c  li 4, -2
  014da60  extsw 5, 5
  014da64  li 8, 128
  014da68  ori 7, 6, 0
  014da6c  bl 0xcc0f0
  014da70  nop
  014da74  li 3, 21040
  014da78  bl 0x7b740
  014da7c  nop
  014da80  ori 31, 3, 0
  014da84  bl 0x11b124
  014da88  nop
  014da8c  ori 5, 3, 0
  014da90  ori 3, 18, 0
  014da94  li 6, 10
  014da98  ori 4, 31, 0
  014da9c  bl 0x5cd2a8
  014daa0  nop
  014daa4  lbz 3, -15535(20)
  014daa8  cmpwi 3, 0
  014daac  bf 2, 0x14dae4
  014dab0  ori 3, 27, 0
  014dab4  bl 0x685c4
  014dab8  nop
  014dabc  ori 8, 3, 0
  014dac0  li 3, 20
  014dac4  ori 4, 30, 0
  014dac8  ori 5, 21, 0
  014dacc  ori 6, 18, 0
  014dad0  ori 7, 16, 0
  014dad4  ori 9, 28, 0
  014dad8  bl 0x6c8d0
  014dadc  nop
  014dae0  b 0x14db14
  014dae4  ori 3, 27, 0
  014dae8  bl 0x685c4
  014daec  nop
  014daf0  ori 8, 3, 0
  014daf4  ori 7, 16, 0
  014daf8  li 3, 20
  014dafc  ori 4, 30, 0
  014db00  ori 5, 21, 0
  014db04  ori 6, 18, 0
  014db08  ori 9, 28, 0
  014db0c  bl 0x6c5ec
  014db10  nop
  014db14  addc 30, 29, 30
  014db18  extsw 30, 30
  014db1c  bl 0x11b494
  014db20  nop
  014db24  addic 29, 30, 4
  014db28  addic 31, 3, -30
  014db2c  extsw 29, 29
  014db30  ori 7, 21, 0
  014db34  addic 6, 29, 10
  014db38  ori 4, 29, 0
  014db3c  extsw 6, 6
  014db40  ori 3, 17, 0
  014db44  ori 5, 19, 0
  014db48  ori 8, 26, 0
  014db4c  bl 0xca72c
  014db50  nop
  014db54  addic 4, 29, 1
  014db58  lwz 7, -26560(24)
  014db5c  addic 6, 29, 9
  014db60  extsw 4, 4
  014db64  ori 5, 23, 0
  014db68  extsw 6, 6
  014db6c  extsw 7, 7
  014db70  ori 3, 25, 0
  014db74  ori 8, 26, 0
  014db78  bl 0xca72c
  014db7c  nop
  014db80  cmpwi 31, 0
  014db84  bf 2, 0x14dbbc
  014db88  lis 3, 0
  014db8c  ori 4, 22, 0
  014db90  ori 3, 3, 59806
  014db94  bl 0xca3e4
  014db98  nop
  014db9c  addic 5, 29, -13
  014dba0  li 6, 30
  014dba4  li 4, -2
  014dba8  extsw 5, 5
  014dbac  li 8, 128
  014dbb0  ori 7, 6, 0
  014dbb4  bl 0xcc0f0
  014dbb8  nop
  014dbbc  li 3, 21041
  014dbc0  bl 0x7b740
  014dbc4  nop
  014dbc8  ori 31, 3, 0
  014dbcc  bl 0x11b494
  014dbd0  nop
  014dbd4  ori 5, 3, 0
  014dbd8  ori 3, 18, 0
  014dbdc  li 6, 30
  014dbe0  ori 4, 31, 0
  014dbe4  bl 0x5cd2a8
  014dbe8  nop
  014dbec  lbz 3, -15535(20)
  014dbf0  cmpwi 3, 0
  014dbf4  bf 2, 0x14dc2c
  014dbf8  ori 3, 27, 0
  014dbfc  bl 0x685c4
  014dc00  nop
  014dc04  ori 8, 3, 0
  014dc08  li 3, 20
  014dc0c  ori 4, 30, 0
  014dc10  ori 5, 21, 0
  014dc14  ori 6, 18, 0
  014dc18  ori 7, 16, 0
  014dc1c  ori 9, 28, 0
  014dc20  bl 0x6c8d0
  014dc24  nop
  014dc28  b 0x14dc5c
  014dc2c  ori 3, 27, 0
  014dc30  bl 0x685c4
  014dc34  nop
  014dc38  ori 8, 3, 0
  014dc3c  ori 7, 16, 0
  014dc40  li 3, 20
  014dc44  ori 4, 30, 0
  014dc48  ori 5, 21, 0
  014dc4c  ori 6, 18, 0
  014dc50  ori 9, 28, 0
  014dc54  bl 0x6c5ec
  014dc58  nop
  014dc5c  bl 0x6c5dc
  014dc60  nop
  014dc64  bl 0x6d708
  014dc68  nop
  014dc6c  li 3, 2
  014dc70  ld 0, 352(1)
  014dc74  mtlr 0
  014dc78  ld 15, 200(1)
  014dc7c  ld 16, 208(1)
  014dc80  ld 17, 216(1)
  014dc84  ld 18, 224(1)
  014dc88  ld 19, 232(1)
  014dc8c  ld 20, 240(1)
  014dc90  ld 21, 248(1)
  014dc94  ld 22, 256(1)
  014dc98  ld 23, 264(1)
  014dc9c  ld 24, 272(1)
  014dca0  ld 25, 280(1)
  014dca4  ld 26, 288(1)
  014dca8  ld 27, 296(1)
  014dcac  ld 28, 304(1)
  014dcb0  ld 29, 312(1)
  014dcb4  ld 30, 320(1)
  014dcb8  ld 31, 328(1)
  014dcbc  addi 1, 1, 336
  014dcc0  blr

SaveSlotInfo_Draw:   # 0x14dcc4, 0x1a4 bytes
  014dcc4  stdu 1, -160(1)
  014dcc8  mflr 0
  014dccc  std 0, 176(1)
  014dcd0  lis 4, 165
  014dcd4  lis 5, 114
  014dcd8  addic 4, 4, 11184
  014dcdc  std 31, 152(1)
  014dce0  addic 5, 5, -1500
  014dce4  ori 31, 3, 0
  014dce8  li 3, 0
  014dcec  lwz 4, 4(4)
  014dcf0  lwz 4, 64(4)
  014dcf4  lwz 4, 64(4)
  014dcf8  sldi 6, 4, 5
  014dcfc  sldi 4, 4, 2
  014dd00  subc 4, 6, 4
  014dd04  std 29, 136(1)
  014dd08  extsw 4, 4
  014dd0c  addc 29, 5, 4
  014dd10  std 30, 144(1)
  014dd14  std 28, 128(1)
  014dd18  std 27, 120(1)
  014dd1c  std 26, 112(1)
  014dd20  lwz 29, 32(29)
  014dd24  bl 0x6d704
  014dd28  nop
  014dd2c  lis 3, -32513
  014dd30  cmpwi 29, -1
  014dd34  ori 3, 3, 43144
  014dd38  clrldi 30, 3, 32
  014dd3c  bf 2, 0x14dd90
  014dd40  lwz 4, 32(31)
  014dd44  lwz 5, 36(31)
  014dd48  li 3, 21015
  014dd4c  srawi 4, 4, 1
  014dd50  addze 4, 4
  014dd54  srawi 5, 5, 1
  014dd58  extsw 31, 4
  014dd5c  addze 4, 5
  014dd60  addic 4, 4, -8
  014dd64  extsw 29, 4
  014dd68  bl 0x7b740
  014dd6c  nop
  014dd70  ori 6, 3, 0
  014dd74  li 7, -1
  014dd78  ori 3, 31, 0
  014dd7c  ori 4, 29, 0
  014dd80  ori 5, 30, 0
  014dd84  bl 0x70514
  014dd88  nop
  014dd8c  b 0x14de34
  014dd90  addc 3, 29, 29
  014dd94  lis 4, 115
  014dd98  lwz 5, 32(31)
  014dd9c  addc 3, 29, 3
  014dda0  addic 4, 4, 21168
  014dda4  sldi 3, 3, 2
  014dda8  li 28, 4
  014ddac  extsw 29, 3
  014ddb0  srawi 3, 5, 1
  014ddb4  addze 3, 3
  014ddb8  extsw 27, 3
  014ddbc  lwzx 3, 4, 29
  014ddc0  extsw 3, 3
  014ddc4  bl 0x7b740
  014ddc8  nop
  014ddcc  li 26, -1
  014ddd0  ori 6, 3, 0
  014ddd4  ori 4, 28, 0
  014ddd8  ori 3, 27, 0
  014dddc  ori 5, 30, 0
  014dde0  ori 7, 26, 0
  014dde4  bl 0x70514
  014dde8  nop
  014ddec  lwz 3, 32(31)
  014ddf0  lis 4, 115
  014ddf4  li 31, 20
  014ddf8  srawi 3, 3, 1
  014ddfc  addze 3, 3
  014de00  addic 4, 4, 21172
  014de04  extsw 28, 3
  014de08  lwzx 3, 4, 29
  014de0c  extsw 3, 3
  014de10  bl 0x7b740
  014de14  nop
  014de18  ori 6, 3, 0
  014de1c  ori 3, 28, 0
  014de20  ori 4, 31, 0
  014de24  ori 5, 30, 0
  014de28  ori 7, 26, 0
  014de2c  bl 0x70514
  014de30  nop
  014de34  bl 0x6d708
  014de38  nop
  014de3c  li 3, 2
  014de40  ld 0, 176(1)
  014de44  mtlr 0
  014de48  ld 26, 112(1)
  014de4c  ld 27, 120(1)
  014de50  ld 28, 128(1)
  014de54  ld 29, 136(1)
  014de58  ld 30, 144(1)
  014de5c  ld 31, 152(1)
  014de60  addi 1, 1, 160
  014de64  blr

SaveLoad_OnEnter:   # 0x14de68, 0x50 bytes
  014de68  stdu 1, -128(1)
  014de6c  mflr 0
  014de70  std 0, 144(1)
  014de74  std 31, 120(1)
  014de78  ori 31, 3, 0
  014de7c  std 30, 112(1)
  014de80  li 3, 1
  014de84  bl 0x13af68
  014de88  li 30, 0
  014de8c  ori 3, 30, 0
  014de90  bl 0x148538
  014de94  stw 3, 72(31)
  014de98  stw 30, 76(31)
  014de9c  ori 3, 30, 0
  014dea0  ld 0, 144(1)
  014dea4  mtlr 0
  014dea8  ld 30, 112(1)
  014deac  ld 31, 120(1)
  014deb0  addi 1, 1, 128
  014deb4  blr

SaveLoad_OnExit:   # 0x14deb8, 0xe8 bytes
  014deb8  stdu 1, -160(1)
  014debc  mflr 0
  014dec0  std 0, 176(1)
  014dec4  std 28, 128(1)
  014dec8  ori 28, 3, 0
  014decc  std 29, 136(1)
  014ded0  li 3, 0
  014ded4  std 31, 152(1)
  014ded8  std 30, 144(1)
  014dedc  std 27, 120(1)
  014dee0  ori 29, 3, 0
  014dee4  lwz 4, 72(28)
  014dee8  lis 5, 165
  014deec  slwi 31, 3, 3
  014def0  addic 5, 5, 12440
  014def4  extsw 31, 31
  014def8  lwzx 6, 5, 31
  014defc  cmpw 6, 4
  014df00  bf 2, 0x14df68
  014df04  addc 6, 5, 31
  014df08  addic 30, 5, 4
  014df0c  lwz 5, 4(6)
  014df10  rlwinm 5, 5, 0, 30, 30
  014df14  cmpwi 5, 0
  014df18  bt 2, 0x14df68
  014df1c  lwzx 3, 30, 31
  014df20  rlwinm 3, 3, 0, 29, 29
  014df24  cmpwi 3, 0
  014df28  bt 2, 0x14df58
  014df2c  lis 27, 165
  014df30  lwzx 3, 30, 31
  014df34  addic 27, 27, 11184
  014df38  xori 3, 3, 4
  014df3c  lbz 4, 203(27)
  014df40  stwx 3, 30, 31
  014df44  cmpwi 4, 0
  014df48  bt 2, 0x14df58
  014df4c  bl 0x11d9e0
  014df50  nop
  014df54  stb 29, 203(27)
  014df58  lwzx 3, 30, 31
  014df5c  rlwimi 3, 29, 0, 30, 30
  014df60  stwx 3, 30, 31
  014df64  b 0x14df74
  014df68  addic 3, 3, 1
  014df6c  cmpwi 3, 5
  014df70  bt 0, 0x14dee8
  014df74  ori 3, 29, 0
  014df78  stw 29, 72(28)
  014df7c  ld 0, 176(1)
  014df80  mtlr 0
  014df84  ld 27, 120(1)
  014df88  ld 28, 128(1)
  014df8c  ld 29, 136(1)
  014df90  ld 30, 144(1)
  014df94  ld 31, 152(1)
  014df98  addi 1, 1, 160
  014df9c  blr

SaveGame_Update:   # 0x14dfa0, 0x44c bytes
  014dfa0  stdu 1, -176(1)
  014dfa4  mflr 0
  014dfa8  std 0, 192(1)
  014dfac  std 30, 160(1)
  014dfb0  std 31, 168(1)
  014dfb4  lis 30, 165
  014dfb8  ori 31, 3, 0
  014dfbc  std 29, 152(1)
  014dfc0  addic 30, 30, 11184
  014dfc4  ori 29, 3, 0
  014dfc8  lwz 4, 4(30)
  014dfcc  lwz 4, 64(4)
  014dfd0  subc 3, 4, 3
  014dfd4  std 28, 144(1)
  014dfd8  std 27, 136(1)
  014dfdc  std 26, 128(1)
  014dfe0  std 25, 120(1)
  014dfe4  cmpwi 3, 0
  014dfe8  bt 2, 0x14dff4
  014dfec  li 3, 0
  014dff0  b 0x14e3c0
  014dff4  lwz 3, 76(29)
  014dff8  cmpwi 3, 0
  014dffc  bf 2, 0x14e028
  014e000  lis 3, 115
  014e004  lwz 4, 208(30)
  014e008  addic 3, 3, -8388
  014e00c  cmpw 4, 3
  014e010  bf 2, 0x14e028
  014e014  lwz 3, 132(3)
  014e018  cmpwi 3, 0
  014e01c  bt 2, 0x14e028
  014e020  li 3, 1
  014e024  stw 3, 76(29)
  014e028  lwz 3, 76(29)
  014e02c  cmpwi 3, 1
  014e030  bf 2, 0x14e0a8
  014e034  lwz 28, 72(29)
  014e038  lwz 27, 64(29)
  014e03c  bl 0xe50bc
  014e040  nop
  014e044  lis 3, 151
  014e048  lis 4, 151
  014e04c  addic 4, 4, -13772
  014e050  lwz 3, -25488(3)
  014e054  slwi 3, 3, 15
  014e058  addc 3, 4, 3
  014e05c  clrldi 3, 3, 32
  014e060  bl 0xe4c0c
  014e064  nop
  014e068  lis 3, 114
  014e06c  li 25, 0
  014e070  addic 5, 3, -1500
  014e074  li 26, 1
  014e078  li 4, -1
  014e07c  ori 3, 26, 0
  014e080  stw 28, 244(5)
  014e084  stw 25, 200(5)
  014e088  stw 27, 20(5)
  014e08c  bl 0xe8aa4
  014e090  nop
  014e094  lis 3, 162
  014e098  li 4, 20405
  014e09c  stw 26, 292(30)
  014e0a0  stw 25, 2180(3)
  014e0a4  stw 4, 296(30)
  014e0a8  li 3, 2
  014e0ac  stw 3, 76(29)
  014e0b0  lwz 28, 64(29)
  014e0b4  lwz 3, 292(30)
  014e0b8  cmpwi 3, 0
  014e0bc  bt 2, 0x14e1e0
  014e0c0  bl 0xe886c
  014e0c4  nop
  014e0c8  cmpwi 3, 0
  014e0cc  bt 2, 0x14e0dc
  014e0d0  lwz 3, 336(30)
  014e0d4  cmpwi 3, 10
  014e0d8  bt 1, 0x14e0e4
  014e0dc  li 3, 0
  014e0e0  b 0x14e3c0
  014e0e4  lis 3, 114
  014e0e8  li 27, 0
  014e0ec  addic 3, 3, -1500
  014e0f0  stw 27, 292(30)
  014e0f4  lwz 4, 236(3)
  014e0f8  cmpwi 4, 0
  014e0fc  bf 2, 0x14e11c
  014e100  lwz 4, 28(3)
  014e104  cmpwi 4, 0
  014e108  bf 2, 0x14e11c
  014e10c  lis 4, 162
  014e110  lwz 4, 2180(4)
  014e114  cmpwi 4, 0
  014e118  bt 2, 0x14e154
  014e11c  lis 6, 161
  014e120  ori 4, 3, 0
  014e124  li 3, 3
  014e128  ori 5, 27, 0
  014e12c  lwz 7, -736(6)
  014e130  stw 27, 252(4)
  014e134  ori 7, 7, 128
  014e138  lwz 4, 4(30)
  014e13c  extsw 4, 4
  014e140  stw 7, -736(6)
  014e144  bl 0x78178
  014e148  nop
  014e14c  ori 3, 27, 0
  014e150  b 0x14e3c0
  014e154  lwz 7, 20(3)
  014e158  lis 4, 151
  014e15c  sldi 9, 7, 5
  014e160  sldi 11, 7, 2
  014e164  li 5, 1
  014e168  subc 9, 9, 11
  014e16c  lis 12, 151
  014e170  extsw 9, 9
  014e174  lwz 4, -25440(4)
  014e178  sldi 8, 7, 5
  014e17c  stw 5, 252(3)
  014e180  sldi 10, 7, 2
  014e184  addc 9, 3, 9
  014e188  subc 8, 8, 10
  014e18c  lwz 11, -25488(12)
  014e190  lis 6, 151
  014e194  extsw 8, 8
  014e198  sldi 5, 7, 5
  014e19c  stw 4, 36(9)
  014e1a0  addc 4, 3, 8
  014e1a4  sldi 10, 7, 5
  014e1a8  sldi 12, 7, 2
  014e1ac  lwz 6, -13824(6)
  014e1b0  sldi 7, 7, 2
  014e1b4  subc 5, 5, 12
  014e1b8  subc 7, 10, 7
  014e1bc  stw 11, 32(4)
  014e1c0  extsw 5, 5
  014e1c4  lis 8, 151
  014e1c8  extsw 4, 7
  014e1cc  addc 5, 3, 5
  014e1d0  addc 3, 3, 4
  014e1d4  lwz 4, -13828(8)
  014e1d8  stw 6, 44(5)
  014e1dc  stw 4, 40(3)
  014e1e0  lis 27, 150
  014e1e4  li 4, 3328
  014e1e8  addic 27, 27, 19008
  014e1ec  lwz 3, 196(27)
  014e1f0  and 4, 3, 4
  014e1f4  cmpwi 4, 0
  014e1f8  bt 2, 0x14e210
  014e1fc  lwz 4, 288(30)
  014e200  cmpwi 4, 0
  014e204  bf 2, 0x14e210
  014e208  li 3, 1
  014e20c  b 0x14e3c0
  014e210  rlwinm 3, 3, 0, 27, 27
  014e214  cmpwi 3, 0
  014e218  bt 2, 0x14e254
  014e21c  lwz 3, 4(30)
  014e220  lwz 4, 56(3)
  014e224  cmpwi 4, 0
  014e228  bt 2, 0x14e240
  014e22c  ori 4, 3, 0
  014e230  li 3, 0
  014e234  lwz 4, 56(4)
  014e238  stw 4, 8(30)
  014e23c  b 0x14e3c0
  014e240  lwz 3, 288(30)
  014e244  cmpwi 3, 0
  014e248  bf 2, 0x14e254
  014e24c  li 3, -1
  014e250  b 0x14e3c0
  014e254  lis 3, 161
  014e258  lwz 3, -740(3)
  014e25c  cmpwi 3, 16
  014e260  bt 2, 0x14e288
  014e264  lis 3, 161
  014e268  lwz 3, -740(3)
  014e26c  cmpwi 3, 1
  014e270  bt 2, 0x14e288
  014e274  lwz 4, 4(30)
  014e278  li 3, 0
  014e27c  lwz 4, 56(4)
  014e280  stw 4, 8(30)
  014e284  b 0x14e3c0
  014e288  bl 0xe886c
  014e28c  nop
  014e290  cmpwi 3, 0
  014e294  bt 2, 0x14e2b8
  014e298  lwz 3, 336(30)
  014e29c  cmpwi 3, 10
  014e2a0  bf 1, 0x14e2b8
  014e2a4  lis 3, 114
  014e2a8  addic 3, 3, -1500
  014e2ac  lwz 4, 8(3)
  014e2b0  cmpwi 4, 9
  014e2b4  bt 2, 0x14e2c0
  014e2b8  li 3, 0
  014e2bc  b 0x14e3c0
  014e2c0  lwz 5, 48(29)
  014e2c4  clrlwi 5, 5, 31
  014e2c8  cmpwi 5, 0
  014e2cc  bt 2, 0x14e2d8
  014e2d0  lwz 27, 180(27)
  014e2d4  b 0x14e2dc
  014e2d8  lwz 27, 164(27)
  014e2dc  lis 5, 161
  014e2e0  rlwinm 6, 27, 0, 19, 19
  014e2e4  cmpwi 6, 0
  014e2e8  lwz 5, 1348(5)
  014e2ec  cmpwi 1, 5, 0
  014e2f0  stw 5, 64(29)
  014e2f4  cror 2, 2, 6
  014e2f8  bt 2, 0x14e304
  014e2fc  addic 5, 5, -1
  014e300  stw 5, 64(29)
  014e304  rlwinm 5, 27, 0, 17, 17
  014e308  cmpwi 5, 0
  014e30c  bt 2, 0x14e324
  014e310  lwz 5, 64(29)
  014e314  cmpwi 5, 4
  014e318  bf 0, 0x14e324
  014e31c  addic 5, 5, 1
  014e320  stw 5, 64(29)
  014e324  lis 5, 144
  014e328  lis 6, 161
  014e32c  lwz 5, 11988(5)
  014e330  lwz 7, 64(29)
  014e334  and 5, 27, 5
  014e338  stw 7, 1348(6)
  014e33c  cmpwi 5, 0
  014e340  bt 2, 0x14e39c
  014e344  cmpwi 4, 9
  014e348  bf 2, 0x14e39c
  014e34c  lwz 5, 64(29)
  014e350  sldi 4, 5, 5
  014e354  sldi 6, 5, 2
  014e358  subc 4, 4, 6
  014e35c  extsw 4, 4
  014e360  addc 3, 3, 4
  014e364  lwz 3, 32(3)
  014e368  cmpwi 3, -1
  014e36c  bt 2, 0x14e394
  014e370  lis 3, 115
  014e374  lis 4, 115
  014e378  addic 3, 3, -8388
  014e37c  li 6, 0
  014e380  addic 4, 4, -8252
  014e384  stw 3, 8(30)
  014e388  stw 6, 212(30)
  014e38c  stw 5, 64(4)
  014e390  b 0x14e39c
  014e394  li 3, 1
  014e398  stw 3, 76(29)
  014e39c  lwz 3, 64(29)
  014e3a0  cmpw 3, 28
  014e3a4  bt 2, 0x14e3bc
  014e3a8  li 3, 1
  014e3ac  li 4, 17
  014e3b0  lwz 5, 20(31)
  014e3b4  bl 0x15d12c
  014e3b8  nop
  014e3bc  li 3, 0
  014e3c0  ld 0, 192(1)
  014e3c4  mtlr 0
  014e3c8  ld 25, 120(1)
  014e3cc  ld 26, 128(1)
  014e3d0  ld 27, 136(1)
  014e3d4  ld 28, 144(1)
  014e3d8  ld 29, 152(1)
  014e3dc  ld 30, 160(1)
  014e3e0  ld 31, 168(1)
  014e3e4  addi 1, 1, 176
  014e3e8  blr

SaveLoad_Update2:   # 0x14e3ec, 0x2d4 bytes
  014e3ec  stdu 1, -160(1)
  014e3f0  mflr 0
  014e3f4  std 0, 176(1)
  014e3f8  std 30, 144(1)
  014e3fc  std 28, 128(1)
  014e400  lis 30, 165
  014e404  ori 28, 3, 0
  014e408  std 31, 152(1)
  014e40c  addic 30, 30, 11184
  014e410  std 29, 136(1)
  014e414  ori 31, 3, 0
  014e418  lwz 29, 64(28)
  014e41c  lwz 3, 292(30)
  014e420  std 27, 120(1)
  014e424  std 26, 112(1)
  014e428  cmpwi 3, 0
  014e42c  bt 2, 0x14e4c4
  014e430  bl 0xe886c
  014e434  nop
  014e438  cmpwi 3, 0
  014e43c  bt 2, 0x14e44c
  014e440  lwz 3, 336(30)
  014e444  cmpwi 3, 10
  014e448  bt 1, 0x14e454
  014e44c  li 3, 0
  014e450  b 0x14e698
  014e454  lis 3, 114
  014e458  li 27, 0
  014e45c  addic 3, 3, -1500
  014e460  stw 27, 292(30)
  014e464  lwz 4, 236(3)
  014e468  cmpwi 4, 0
  014e46c  bf 2, 0x14e48c
  014e470  lwz 4, 28(3)
  014e474  cmpwi 4, 0
  014e478  bf 2, 0x14e48c
  014e47c  lis 4, 162
  014e480  lwz 4, 2180(4)
  014e484  cmpwi 4, 0
  014e488  bt 2, 0x14e4c4
  014e48c  lis 6, 161
  014e490  ori 4, 3, 0
  014e494  li 3, 3
  014e498  ori 5, 27, 0
  014e49c  lwz 7, -736(6)
  014e4a0  stw 27, 252(4)
  014e4a4  ori 7, 7, 256
  014e4a8  lwz 4, 4(30)
  014e4ac  extsw 4, 4
  014e4b0  stw 7, -736(6)
  014e4b4  bl 0x78178
  014e4b8  nop
  014e4bc  ori 3, 27, 0
  014e4c0  b 0x14e698
  014e4c4  lis 3, 150
  014e4c8  li 5, 3328
  014e4cc  addic 3, 3, 19008
  014e4d0  lwz 4, 196(3)
  014e4d4  and 5, 4, 5
  014e4d8  cmpwi 5, 0
  014e4dc  bt 2, 0x14e4f4
  014e4e0  lwz 5, 288(30)
  014e4e4  cmpwi 5, 0
  014e4e8  bf 2, 0x14e4f4
  014e4ec  li 3, 1
  014e4f0  b 0x14e698
  014e4f4  rlwinm 4, 4, 0, 27, 27
  014e4f8  cmpwi 4, 0
  014e4fc  bt 2, 0x14e534
  014e500  lwz 4, 4(30)
  014e504  lwz 5, 56(4)
  014e508  cmpwi 5, 0
  014e50c  bt 2, 0x14e520
  014e510  lwz 4, 56(4)
  014e514  li 3, 0
  014e518  stw 4, 8(30)
  014e51c  b 0x14e698
  014e520  lwz 4, 288(30)
  014e524  cmpwi 4, 0
  014e528  bf 2, 0x14e534
  014e52c  li 3, -1
  014e530  b 0x14e698
  014e534  lis 4, 161
  014e538  lwz 4, -740(4)
  014e53c  cmpwi 4, 16
  014e540  bt 2, 0x14e568
  014e544  lis 4, 161
  014e548  lwz 4, -740(4)
  014e54c  cmpwi 4, 1
  014e550  bt 2, 0x14e568
  014e554  lwz 4, 4(30)
  014e558  li 3, 0
  014e55c  lwz 4, 56(4)
  014e560  stw 4, 8(30)
  014e564  b 0x14e698
  014e568  lwz 4, 48(28)
  014e56c  clrlwi 4, 4, 31
  014e570  cmpwi 4, 0
  014e574  bt 2, 0x14e580
  014e578  lwz 3, 180(3)
  014e57c  b 0x14e584
  014e580  lwz 3, 196(3)
  014e584  lis 4, 161
  014e588  rlwinm 5, 3, 0, 19, 19
  014e58c  cmpwi 5, 0
  014e590  lwz 4, 1348(4)
  014e594  cmpwi 1, 4, 0
  014e598  stw 4, 64(28)
  014e59c  cror 2, 2, 6
  014e5a0  bt 2, 0x14e5ac
  014e5a4  addic 4, 4, -1
  014e5a8  stw 4, 64(28)
  014e5ac  rlwinm 4, 3, 0, 17, 17
  014e5b0  cmpwi 4, 0
  014e5b4  bt 2, 0x14e5cc
  014e5b8  lwz 4, 64(28)
  014e5bc  cmpwi 4, 4
  014e5c0  bf 0, 0x14e5cc
  014e5c4  addic 4, 4, 1
  014e5c8  stw 4, 64(28)
  014e5cc  lis 4, 144
  014e5d0  lis 5, 161
  014e5d4  lwz 4, 11988(4)
  014e5d8  lwz 6, 64(28)
  014e5dc  and 3, 3, 4
  014e5e0  stw 6, 1348(5)
  014e5e4  cmpwi 3, 0
  014e5e8  bt 2, 0x14e674
  014e5ec  lwz 3, 64(28)
  014e5f0  lis 27, 114
  014e5f4  sldi 4, 3, 5
  014e5f8  sldi 3, 3, 2
  014e5fc  addic 27, 27, -1500
  014e600  subc 3, 4, 3
  014e604  extsw 3, 3
  014e608  addc 3, 27, 3
  014e60c  lwz 3, 32(3)
  014e610  cmpwi 3, 0
  014e614  bt 0, 0x14e674
  014e618  li 26, 0
  014e61c  lwz 5, 20(31)
  014e620  li 4, 17
  014e624  ori 3, 26, 0
  014e628  bl 0x15d12c
  014e62c  nop
  014e630  stw 26, 200(27)
  014e634  lwz 3, 64(28)
  014e638  lwz 4, 228(27)
  014e63c  stw 3, 20(27)
  014e640  cmpwi 4, 0
  014e644  bf 0, 0x14e658
  014e648  li 3, 13
  014e64c  li 4, 0
  014e650  stw 3, 228(27)
  014e654  stw 4, 232(27)
  014e658  li 3, 1
  014e65c  lis 4, 162
  014e660  li 5, 0
  014e664  li 6, 20406
  014e668  stw 3, 292(30)
  014e66c  stw 5, 2180(4)
  014e670  stw 6, 296(30)
  014e674  lwz 3, 64(28)
  014e678  cmpw 3, 29
  014e67c  bt 2, 0x14e694
  014e680  li 3, 1
  014e684  li 4, 17
  014e688  lwz 5, 20(31)
  014e68c  bl 0x15d12c
  014e690  nop
  014e694  li 3, 0
  014e698  ld 0, 176(1)
  014e69c  mtlr 0
  014e6a0  ld 26, 112(1)
  014e6a4  ld 27, 120(1)
  014e6a8  ld 28, 128(1)
  014e6ac  ld 29, 136(1)
  014e6b0  ld 30, 144(1)
  014e6b4  ld 31, 152(1)
  014e6b8  addi 1, 1, 160
  014e6bc  blr

LoadGame_Update:   # 0x14e6c0, 0x59c bytes
  014e6c0  stdu 1, -160(1)
  014e6c4  mflr 0
  014e6c8  std 0, 176(1)
  014e6cc  std 31, 152(1)
  014e6d0  std 30, 144(1)
  014e6d4  lis 31, 165
  014e6d8  ori 30, 3, 0
  014e6dc  std 28, 128(1)
  014e6e0  addic 31, 31, 11184
  014e6e4  ori 28, 3, 0
  014e6e8  lwz 4, 4(31)
  014e6ec  lwz 4, 64(4)
  014e6f0  subc 3, 4, 3
  014e6f4  std 29, 136(1)
  014e6f8  std 27, 120(1)
  014e6fc  cmpwi 3, 0
  014e700  bt 2, 0x14e70c
  014e704  li 3, 0
  014e708  b 0x14ec38
  014e70c  lwz 29, 64(28)
  014e710  lwz 3, 76(28)
  014e714  cmpwi 3, 0
  014e718  bf 2, 0x14e744
  014e71c  lis 3, 115
  014e720  lwz 4, 208(31)
  014e724  addic 3, 3, 2208
  014e728  cmpw 4, 3
  014e72c  bf 2, 0x14e744
  014e730  lwz 3, 132(3)
  014e734  cmpwi 3, 0
  014e738  bt 2, 0x14e744
  014e73c  li 3, 1
  014e740  stw 3, 76(28)
  014e744  lwz 3, 76(28)
  014e748  cmpwi 3, 0
  014e74c  bf 2, 0x14e778
  014e750  lis 3, 115
  014e754  lwz 4, 208(31)
  014e758  addic 3, 3, 2560
  014e75c  cmpw 4, 3
  014e760  bf 2, 0x14e778
  014e764  lwz 3, 132(3)
  014e768  cmpwi 3, 0
  014e76c  bt 2, 0x14e778
  014e770  li 3, 1
  014e774  stw 3, 76(28)
  014e778  lwz 3, 76(28)
  014e77c  cmpwi 3, 1
  014e780  bf 2, 0x14e800
  014e784  lwz 3, 48(28)
  014e788  rlwinm 3, 3, 0, 18, 18
  014e78c  cmpwi 3, 0
  014e790  bt 2, 0x14e7a0
  014e794  extsw 3, 29
  014e798  bl 0x13e634
  014e79c  b 0x14e7e4
  014e7a0  lwz 27, 72(28)
  014e7a4  bl 0xe7638
  014e7a8  nop
  014e7ac  sldi 4, 29, 5
  014e7b0  sldi 5, 29, 2
  014e7b4  lis 3, 114
  014e7b8  subc 4, 4, 5
  014e7bc  addic 6, 3, -1500
  014e7c0  li 3, 0
  014e7c4  extsw 4, 4
  014e7c8  addc 4, 6, 4
  014e7cc  stw 3, 200(6)
  014e7d0  stw 29, 20(6)
  014e7d4  stw 27, 244(6)
  014e7d8  stw 3, 32(4)
  014e7dc  bl 0xe8888
  014e7e0  nop
  014e7e4  li 3, 1
  014e7e8  lis 4, 162
  014e7ec  li 5, 0
  014e7f0  li 6, 20405
  014e7f4  stw 3, 292(31)
  014e7f8  stw 5, 2180(4)
  014e7fc  stw 6, 296(31)
  014e800  li 3, 2
  014e804  stw 3, 76(28)
  014e808  lwz 3, 292(31)
  014e80c  cmpwi 3, 0
  014e810  bt 2, 0x14e998
  014e814  bl 0xe886c
  014e818  nop
  014e81c  cmpwi 3, 0
  014e820  bt 2, 0x14e830
  014e824  lwz 3, 336(31)
  014e828  cmpwi 3, 10
  014e82c  bt 1, 0x14e838
  014e830  li 3, 0
  014e834  b 0x14ec38
  014e838  lis 29, 114
  014e83c  li 30, 0
  014e840  addic 29, 29, -1500
  014e844  stw 30, 292(31)
  014e848  lwz 3, 236(29)
  014e84c  cmpwi 3, 0
  014e850  bf 2, 0x14e870
  014e854  lwz 3, 28(29)
  014e858  cmpwi 3, 0
  014e85c  bf 2, 0x14e870
  014e860  lis 3, 162
  014e864  lwz 3, 2180(3)
  014e868  cmpwi 3, 0
  014e86c  bt 2, 0x14e8ec
  014e870  lis 3, 161
  014e874  lbz 3, 24377(3)
  014e878  cmpwi 3, 0
  014e87c  bt 2, 0x14e8b8
  014e880  lis 5, 161
  014e884  li 3, 8
  014e888  lwz 4, -736(5)
  014e88c  ori 6, 4, 128
  014e890  lwz 4, 4(31)
  014e894  lwz 7, 252(29)
  014e898  extsw 4, 4
  014e89c  stw 6, -736(5)
  014e8a0  extsw 5, 7
  014e8a4  bl 0x78178
  014e8a8  nop
  014e8ac  ori 3, 30, 0
  014e8b0  stw 30, 252(29)
  014e8b4  b 0x14ec38
  014e8b8  lis 6, 161
  014e8bc  li 3, 3
  014e8c0  ori 5, 30, 0
  014e8c4  lwz 4, -736(6)
  014e8c8  stw 30, 252(29)
  014e8cc  ori 7, 4, 128
  014e8d0  lwz 4, 4(31)
  014e8d4  extsw 4, 4
  014e8d8  stw 7, -736(6)
  014e8dc  bl 0x78178
  014e8e0  nop
  014e8e4  ori 3, 30, 0
  014e8e8  b 0x14ec38
  014e8ec  lwz 5, 20(29)
  014e8f0  lis 3, 151
  014e8f4  sldi 7, 5, 5
  014e8f8  sldi 9, 5, 2
  014e8fc  li 31, 1
  014e900  subc 7, 7, 9
  014e904  lis 10, 151
  014e908  extsw 7, 7
  014e90c  lwz 3, -25440(3)
  014e910  sldi 6, 5, 5
  014e914  stw 31, 252(29)
  014e918  sldi 8, 5, 2
  014e91c  addc 7, 29, 7
  014e920  subc 6, 6, 8
  014e924  lwz 10, -25488(10)
  014e928  lis 4, 151
  014e92c  extsw 6, 6
  014e930  sldi 8, 5, 5
  014e934  stw 3, 36(7)
  014e938  addc 3, 29, 6
  014e93c  sldi 9, 5, 5
  014e940  sldi 11, 5, 2
  014e944  lwz 4, -13824(4)
  014e948  sldi 5, 5, 2
  014e94c  subc 6, 8, 11
  014e950  subc 5, 9, 5
  014e954  stw 10, 32(3)
  014e958  extsw 6, 6
  014e95c  lis 7, 151
  014e960  extsw 3, 5
  014e964  addc 6, 29, 6
  014e968  addc 5, 29, 3
  014e96c  ori 3, 30, 0
  014e970  lwz 7, -13828(7)
  014e974  stw 4, 44(6)
  014e978  stw 7, 40(5)
  014e97c  bl 0x15ea84
  014e980  nop
  014e984  lis 4, 150
  014e988  ori 3, 30, 0
  014e98c  addic 4, 4, 17776
  014e990  sth 31, 42(4)
  014e994  b 0x14ec38
  014e998  lis 3, 150
  014e99c  li 5, 3328
  014e9a0  addic 3, 3, 19008
  014e9a4  lwz 4, 196(3)
  014e9a8  and 5, 4, 5
  014e9ac  cmpwi 5, 0
  014e9b0  bt 2, 0x14e9c8
  014e9b4  lwz 5, 288(31)
  014e9b8  cmpwi 5, 0
  014e9bc  bf 2, 0x14e9c8
  014e9c0  li 3, 1
  014e9c4  b 0x14ec38
  014e9c8  rlwinm 4, 4, 0, 27, 27
  014e9cc  cmpwi 4, 0
  014e9d0  bt 2, 0x14ea08
  014e9d4  lwz 4, 4(31)
  014e9d8  lwz 5, 56(4)
  014e9dc  cmpwi 5, 0
  014e9e0  bt 2, 0x14e9f4
  014e9e4  lwz 4, 56(4)
  014e9e8  li 3, 0
  014e9ec  stw 4, 8(31)
  014e9f0  b 0x14ec38
  014e9f4  lwz 4, 288(31)
  014e9f8  cmpwi 4, 0
  014e9fc  bf 2, 0x14ea08
  014ea00  li 3, -1
  014ea04  b 0x14ec38
  014ea08  lis 4, 161
  014ea0c  lwz 4, -740(4)
  014ea10  cmpwi 4, 16
  014ea14  bt 2, 0x14ea3c
  014ea18  lis 4, 161
  014ea1c  lwz 4, -740(4)
  014ea20  cmpwi 4, 1
  014ea24  bt 2, 0x14ea3c
  014ea28  lwz 4, 4(31)
  014ea2c  li 3, 0
  014ea30  lwz 4, 56(4)
  014ea34  stw 4, 8(31)
  014ea38  b 0x14ec38
  014ea3c  lwz 4, 48(28)
  014ea40  clrlwi 4, 4, 31
  014ea44  cmpwi 4, 0
  014ea48  bt 2, 0x14ea54
  014ea4c  lwz 4, 180(3)
  014ea50  b 0x14ea58
  014ea54  lwz 4, 164(3)
  014ea58  lis 3, 161
  014ea5c  rlwinm 5, 4, 0, 19, 19
  014ea60  cmpwi 5, 0
  014ea64  lwz 3, 1348(3)
  014ea68  cmpwi 1, 3, 0
  014ea6c  cror 2, 2, 6
  014ea70  stw 3, 64(28)
  014ea74  bt 2, 0x14ea80
  014ea78  addic 3, 3, -1
  014ea7c  stw 3, 64(28)
  014ea80  rlwinm 3, 4, 0, 17, 17
  014ea84  cmpwi 3, 0
  014ea88  bt 2, 0x14eaa0
  014ea8c  lwz 3, 64(28)
  014ea90  cmpwi 3, 4
  014ea94  bf 0, 0x14eaa0
  014ea98  addic 3, 3, 1
  014ea9c  stw 3, 64(28)
  014eaa0  lis 3, 161
  014eaa4  rlwinm 5, 4, 0, 25, 25
  014eaa8  cmpwi 5, 0
  014eaac  lwz 5, 64(28)
  014eab0  stw 5, 1348(3)
  014eab4  bt 2, 0x14eb3c
  014eab8  lis 3, 114
  014eabc  addic 4, 3, -1500
  014eac0  lwz 3, 64(28)
  014eac4  sldi 5, 3, 5
  014eac8  sldi 6, 3, 2
  014eacc  subc 5, 5, 6
  014ead0  extsw 5, 5
  014ead4  addc 4, 4, 5
  014ead8  lwz 4, 32(4)
  014eadc  cmpwi 4, -1
  014eae0  bt 2, 0x14eb30
  014eae4  lwz 5, 48(28)
  014eae8  rlwinm 5, 5, 0, 18, 18
  014eaec  cmpwi 5, 0
  014eaf0  bt 2, 0x14eb00
  014eaf4  lis 4, 115
  014eaf8  addic 4, 4, 2560
  014eafc  b 0x14eb08
  014eb00  lis 4, 115
  014eb04  addic 4, 4, 2208
  014eb08  cmpwi 5, 0
  014eb0c  stw 4, 8(31)
  014eb10  li 4, 1
  014eb14  bt 2, 0x14eb1c
  014eb18  li 4, 2
  014eb1c  lis 5, 115
  014eb20  stw 4, 212(31)
  014eb24  addic 5, 5, -8252
  014eb28  stw 3, 64(5)
  014eb2c  b 0x14ec14
  014eb30  li 3, 1
  014eb34  stw 3, 76(28)
  014eb38  b 0x14ec14
  014eb3c  rlwinm 3, 4, 0, 26, 26
  014eb40  cmpwi 3, 0
  014eb44  bt 2, 0x14ec14
  014eb48  lwz 3, 48(28)
  014eb4c  rlwinm 3, 3, 0, 18, 18
  014eb50  cmpwi 3, 0
  014eb54  bt 2, 0x14ebbc
  014eb58  lis 3, 114
  014eb5c  addic 3, 3, -1500
  014eb60  lwz 4, 252(3)
  014eb64  cmpwi 4, 0
  014eb68  bt 2, 0x14eb84
  014eb6c  li 4, 0
  014eb70  li 3, 7
  014eb74  ori 5, 4, 0
  014eb78  bl 0x78178
  014eb7c  nop
  014eb80  b 0x14ec14
  014eb84  ori 4, 3, 0
  014eb88  li 31, 0
  014eb8c  li 3, -1
  014eb90  stw 31, 252(4)
  014eb94  bl 0x13e634
  014eb98  ori 3, 31, 0
  014eb9c  bl 0x15ea84
  014eba0  nop
  014eba4  lis 3, 150
  014eba8  li 4, 1
  014ebac  addic 5, 3, 17776
  014ebb0  ori 3, 31, 0
  014ebb4  sth 4, 42(5)
  014ebb8  b 0x14ec38
  014ebbc  lis 3, 161
  014ebc0  li 31, 0
  014ebc4  lwz 4, -736(3)
  014ebc8  rlwimi 4, 31, 0, 30, 30
  014ebcc  stw 4, -736(3)
  014ebd0  lis 4, 114
  014ebd4  addic 4, 4, -1500
  014ebd8  stw 31, 252(4)
  014ebdc  lwz 4, -736(3)
  014ebe0  rlwimi 4, 31, 0, 29, 29
  014ebe4  stw 4, -736(3)
  014ebe8  bl 0xe7638
  014ebec  nop
  014ebf0  ori 3, 31, 0
  014ebf4  bl 0x15ea84
  014ebf8  nop
  014ebfc  lis 3, 150
  014ec00  li 4, 1
  014ec04  addic 5, 3, 17776
  014ec08  ori 3, 31, 0
  014ec0c  sth 4, 42(5)
  014ec10  b 0x14ec38
  014ec14  lwz 3, 64(28)
  014ec18  cmpw 3, 29
  014ec1c  bt 2, 0x14ec34
  014ec20  li 3, 1
  014ec24  lwz 5, 20(30)
  014ec28  li 4, 17
  014ec2c  bl 0x15d12c
  014ec30  nop
  014ec34  li 3, 0
  014ec38  ld 0, 176(1)
  014ec3c  mtlr 0
  014ec40  ld 27, 120(1)
  014ec44  ld 28, 128(1)
  014ec48  ld 29, 136(1)
  014ec4c  ld 30, 144(1)
  014ec50  ld 31, 152(1)
  014ec54  addi 1, 1, 160
  014ec58  blr

DrawSaveLoadFrame:   # 0x14ec5c, 0x58c bytes
  014ec5c  stdu 1, -304(1)
  014ec60  mflr 0
  014ec64  std 0, 320(1)
  014ec68  std 31, 296(1)
  014ec6c  std 28, 272(1)
  014ec70  ori 31, 3, 0
  014ec74  std 30, 288(1)
  014ec78  li 28, 0
  014ec7c  ori 30, 31, 0
  014ec80  std 29, 280(1)
  014ec84  std 27, 264(1)
  014ec88  std 26, 256(1)
  014ec8c  std 25, 248(1)
  014ec90  std 24, 240(1)
  014ec94  std 23, 232(1)
  014ec98  std 22, 224(1)
  014ec9c  std 21, 216(1)
  014eca0  std 20, 208(1)
  014eca4  std 19, 200(1)
  014eca8  ori 3, 28, 0
  014ecac  bl 0x6d704
  014ecb0  nop
  014ecb4  li 29, 4
  014ecb8  ori 25, 28, 0
  014ecbc  ori 24, 29, 0
  014ecc0  addic 22, 29, -4
  014ecc4  lwz 21, 32(31)
  014ecc8  extsw 22, 22
  014eccc  extsw 21, 21
  014ecd0  addic 20, 22, 56
  014ecd4  addic 27, 22, 3
  014ecd8  extsw 20, 20
  014ecdc  addic 26, 21, -3
  014ece0  addic 23, 20, -3
  014ece4  extsw 27, 27
  014ece8  extsw 26, 26
  014ecec  extsw 23, 23
  014ecf0  bl 0xe886c
  014ecf4  nop
  014ecf8  cmpwi 3, 0
  014ecfc  bt 2, 0x14ed74
  014ed00  lis 3, 165
  014ed04  addic 3, 3, 11184
  014ed08  lwz 3, 336(3)
  014ed0c  cmpwi 3, 10
  014ed10  bf 1, 0x14ed74
  014ed14  lwz 3, 64(30)
  014ed18  cmpw 3, 28
  014ed1c  bf 2, 0x14ed74
  014ed20  lis 3, -32736
  014ed24  ori 4, 22, 0
  014ed28  ori 3, 3, 65535
  014ed2c  li 22, 0
  014ed30  clrldi 7, 3, 32
  014ed34  ori 6, 20, 0
  014ed38  ori 5, 21, 0
  014ed3c  ori 8, 22, 0
  014ed40  ori 3, 22, 0
  014ed44  bl 0xca72c
  014ed48  nop
  014ed4c  lis 6, 115
  014ed50  ori 4, 27, 0
  014ed54  li 3, 3
  014ed58  ori 5, 26, 0
  014ed5c  ori 8, 22, 0
  014ed60  lwz 7, -26560(6)
  014ed64  ori 6, 23, 0
  014ed68  extsw 7, 7
  014ed6c  bl 0xca72c
  014ed70  nop
  014ed74  lis 4, -32720
  014ed78  li 3, 3
  014ed7c  ori 5, 4, 12336
  014ed80  li 8, 0
  014ed84  clrldi 7, 5, 32
  014ed88  ori 5, 26, 0
  014ed8c  ori 4, 27, 0
  014ed90  ori 6, 23, 0
  014ed94  bl 0xca72c
  014ed98  nop
  014ed9c  lis 26, 114
  014eda0  addic 26, 26, -1500
  014eda4  addic 3, 26, 32
  014eda8  addc 27, 3, 25
  014edac  clrldi 27, 27, 32
  014edb0  bl 0xe886c
  014edb4  nop
  014edb8  cmpwi 3, 0
  014edbc  bt 2, 0x14ede0
  014edc0  lis 3, 165
  014edc4  addic 3, 3, 11184
  014edc8  lwz 3, 336(3)
  014edcc  cmpwi 3, 10
  014edd0  bf 1, 0x14ede0
  014edd4  lwz 3, 8(26)
  014edd8  cmpwi 3, 9
  014eddc  bt 2, 0x14ede8
  014ede0  addic 29, 29, 48
  014ede4  b 0x14f168
  014ede8  lwz 3, 0(27)
  014edec  cmpwi 3, -1
  014edf0  bf 2, 0x14ee48
  014edf4  addic 3, 29, 16
  014edf8  lis 4, -32513
  014edfc  extsw 29, 3
  014ee00  ori 3, 4, 43144
  014ee04  lwz 4, 32(31)
  014ee08  clrldi 27, 3, 32
  014ee0c  srawi 4, 4, 1
  014ee10  li 3, 21015
  014ee14  addze 4, 4
  014ee18  extsw 26, 4
  014ee1c  bl 0x7b740
  014ee20  nop
  014ee24  ori 6, 3, 0
  014ee28  ori 4, 29, 0
  014ee2c  li 7, -1
  014ee30  ori 3, 26, 0
  014ee34  ori 5, 27, 0
  014ee38  bl 0x70834
  014ee3c  nop
  014ee40  addic 29, 29, 32
  014ee44  b 0x14f168
  014ee48  lis 3, -25768
  014ee4c  lwz 4, 12(27)
  014ee50  lis 5, -28254
  014ee54  ori 3, 3, 14137
  014ee58  mulhw 3, 3, 4
  014ee5c  ori 5, 5, 46021
  014ee60  mulhw 5, 5, 4
  014ee64  addc 3, 3, 4
  014ee68  addc 4, 5, 4
  014ee6c  srawi 3, 3, 17
  014ee70  srawi 4, 4, 11
  014ee74  srwi 5, 3, 31
  014ee78  lis 26, -32513
  014ee7c  addc 23, 3, 5
  014ee80  srwi 3, 4, 31
  014ee84  extsw 23, 23
  014ee88  addc 3, 4, 3
  014ee8c  sldi 5, 23, 6
  014ee90  sldi 6, 23, 2
  014ee94  ori 26, 26, 43144
  014ee98  subc 4, 5, 6
  014ee9c  lwz 5, 64(30)
  014eea0  subc 3, 3, 4
  014eea4  cmpw 5, 28
  014eea8  extsw 3, 3
  014eeac  cmpwi 1, 23, 99
  014eeb0  bf 2, 0x14eebc
  014eeb4  lis 26, -32736
  014eeb8  ori 26, 26, 65535
  014eebc  bf 5, 0x14eec8
  014eec0  li 23, 99
  014eec4  li 3, 59
  014eec8  addic 21, 1, 112
  014eecc  lis 4, 101
  014eed0  ori 6, 3, 0
  014eed4  ori 3, 21, 0
  014eed8  ori 5, 23, 0
  014eedc  addic 4, 4, 13996
  014eee0  bl 0x5cd2a8
  014eee4  nop
  014eee8  lis 20, 0
  014eeec  li 4, 3
  014eef0  ori 20, 20, 59806
  014eef4  ori 3, 20, 0
  014eef8  bl 0xca3e4
  014eefc  nop
  014ef00  li 6, 16
  014ef04  li 22, 128
  014ef08  ori 4, 24, 0
  014ef0c  ori 8, 22, 0
  014ef10  ori 5, 29, 0
  014ef14  ori 7, 6, 0
  014ef18  bl 0xcc0f0
  014ef1c  nop
  014ef20  li 23, 22
  014ef24  li 19, -1
  014ef28  ori 3, 23, 0
  014ef2c  ori 4, 29, 0
  014ef30  ori 5, 26, 0
  014ef34  ori 6, 21, 0
  014ef38  ori 7, 19, 0
  014ef3c  bl 0x6fc54
  014ef40  nop
  014ef44  lwz 3, 8(27)
  014ef48  cmpwi 3, 0
  014ef4c  bt 2, 0x14efc0
  014ef50  ori 3, 20, 0
  014ef54  ori 4, 24, 0
  014ef58  bl 0xca3e4
  014ef5c  nop
  014ef60  li 6, 16
  014ef64  ori 8, 22, 0
  014ef68  li 4, 78
  014ef6c  ori 7, 6, 0
  014ef70  ori 5, 29, 0
  014ef74  bl 0xcc0f0
  014ef78  nop
  014ef7c  lwz 3, 8(27)
  014ef80  lis 4, 101
  014ef84  cmpwi 3, 99
  014ef88  li 5, 99
  014ef8c  addic 4, 4, 13752
  014ef90  bf 0, 0x14ef98
  014ef94  extsw 5, 3
  014ef98  ori 3, 21, 0
  014ef9c  bl 0x5cd2a8
  014efa0  nop
  014efa4  li 3, 96
  014efa8  ori 4, 29, 0
  014efac  ori 5, 26, 0
  014efb0  ori 6, 21, 0
  014efb4  ori 7, 19, 0
  014efb8  bl 0x6fc54
  014efbc  nop
  014efc0  lis 3, 152
  014efc4  lwz 27, 4(27)
  014efc8  addic 29, 29, 16
  014efcc  ori 3, 3, 38527
  014efd0  extsw 29, 29
  014efd4  cmpw 27, 3
  014efd8  bf 0, 0x14efe0
  014efdc  extsw 3, 27
  014efe0  cmpwi 3, 1000
  014efe4  bf 0, 0x14f004
  014efe8  lis 4, 101
  014efec  ori 5, 3, 0
  014eff0  ori 3, 21, 0
  014eff4  addic 4, 4, 13752
  014eff8  bl 0x5cd2a8
  014effc  nop
  014f000  b 0x14f0c8
  014f004  lis 4, 15
  014f008  ori 4, 4, 16960
  014f00c  cmpw 3, 4
  014f010  bf 0, 0x14f064
  014f014  lis 4, 4194
  014f018  ori 4, 4, 19923
  014f01c  mulhw 5, 4, 3
  014f020  mulhw 4, 4, 3
  014f024  srawi 5, 5, 6
  014f028  srawi 6, 4, 6
  014f02c  srwi 4, 5, 31
  014f030  srwi 8, 6, 31
  014f034  addc 4, 5, 4
  014f038  mulli 5, 4, 1000
  014f03c  lis 7, 101
  014f040  subc 3, 3, 5
  014f044  addc 5, 6, 8
  014f048  extsw 6, 3
  014f04c  addic 4, 7, 13792
  014f050  extsw 5, 5
  014f054  ori 3, 21, 0
  014f058  bl 0x5cd2a8
  014f05c  nop
  014f060  b 0x14f0c8
  014f064  divw 5, 3, 4
  014f068  mullw 5, 5, 4
  014f06c  lis 6, 4194
  014f070  divw 4, 3, 4
  014f074  ori 6, 6, 19923
  014f078  mulhw 7, 6, 3
  014f07c  subc 5, 3, 5
  014f080  mulhw 5, 6, 5
  014f084  srawi 6, 7, 6
  014f088  lis 7, 101
  014f08c  srwi 8, 6, 31
  014f090  addic 9, 7, 14012
  014f094  addc 6, 6, 8
  014f098  mulli 6, 6, 1000
  014f09c  srawi 7, 5, 6
  014f0a0  extsw 5, 4
  014f0a4  srwi 4, 7, 31
  014f0a8  subc 3, 3, 6
  014f0ac  addc 6, 7, 4
  014f0b0  extsw 7, 3
  014f0b4  ori 3, 21, 0
  014f0b8  extsw 6, 6
  014f0bc  ori 4, 9, 0
  014f0c0  bl 0x5cd2a8
  014f0c4  nop
  014f0c8  li 3, 30031
  014f0cc  li 4, 15
  014f0d0  bl 0xca3e4
  014f0d4  nop
  014f0d8  li 27, 16
  014f0dc  ori 8, 22, 0
  014f0e0  ori 4, 24, 0
  014f0e4  ori 5, 29, 0
  014f0e8  ori 6, 27, 0
  014f0ec  ori 7, 27, 0
  014f0f0  bl 0xcc0f0
  014f0f4  nop
  014f0f8  ori 3, 23, 0
  014f0fc  ori 4, 29, 0
  014f100  ori 5, 26, 0
  014f104  ori 6, 21, 0
  014f108  ori 7, 19, 0
  014f10c  bl 0x6fc54
  014f110  nop
  014f114  addic 3, 29, 16
  014f118  li 4, 2
  014f11c  extsw 29, 3
  014f120  ori 3, 20, 0
  014f124  bl 0xca3e4
  014f128  nop
  014f12c  ori 4, 24, 0
  014f130  ori 5, 29, 0
  014f134  ori 6, 27, 0
  014f138  ori 7, 27, 0
  014f13c  ori 8, 22, 0
  014f140  bl 0xcc0f0
  014f144  nop
  014f148  ori 4, 29, 0
  014f14c  ori 3, 23, 0
  014f150  ori 5, 26, 0
  014f154  ori 6, 21, 0
  014f158  ori 7, 19, 0
  014f15c  bl 0x6fc54
  014f160  nop
  014f164  addic 29, 29, 16
  014f168  lis 4, 150
  014f16c  li 3, 27
  014f170  lwz 4, 27372(4)
  014f174  cmpwi 4, 0
  014f178  bt 2, 0x14f180
  014f17c  li 3, 36
  014f180  addic 28, 28, 1
  014f184  addc 29, 29, 3
  014f188  cmpwi 28, 5
  014f18c  addic 25, 25, 28
  014f190  extsw 29, 29
  014f194  bt 0, 0x14ecc0
  014f198  bl 0x6d708
  014f19c  nop
  014f1a0  li 3, 2
  014f1a4  ld 0, 320(1)
  014f1a8  mtlr 0
  014f1ac  ld 19, 200(1)
  014f1b0  ld 20, 208(1)
  014f1b4  ld 21, 216(1)
  014f1b8  ld 22, 224(1)
  014f1bc  ld 23, 232(1)
  014f1c0  ld 24, 240(1)
  014f1c4  ld 25, 248(1)
  014f1c8  ld 26, 256(1)
  014f1cc  ld 27, 264(1)
  014f1d0  ld 28, 272(1)
  014f1d4  ld 29, 280(1)
  014f1d8  ld 30, 288(1)
  014f1dc  ld 31, 296(1)
  014f1e0  addi 1, 1, 304
  014f1e4  blr

SpawnHeroInMenu?:   # 0x14f1f0, 0x318 bytes
  014f1f0  stdu 1, -192(1)
  014f1f4  mflr 0
  014f1f8  std 0, 208(1)
  014f1fc  std 30, 176(1)
  014f200  std 31, 184(1)
  014f204  li 30, 1
  014f208  ori 31, 3, 0
  014f20c  std 29, 168(1)
  014f210  std 28, 160(1)
  014f214  std 27, 152(1)
  014f218  std 26, 144(1)
  014f21c  std 25, 136(1)
  014f220  ori 3, 30, 0
  014f224  bl 0x13af68
  014f228  lis 3, 150
  014f22c  addic 3, 3, 14024
  014f230  lhz 3, 8(3)
  014f234  cmpwi 3, 0
  014f238  bt 2, 0x14f260
  014f23c  lis 29, 165
  014f240  addic 29, 29, 11184
  014f244  lbz 3, 203(29)
  014f248  cmpwi 3, 0
  014f24c  bt 2, 0x14f260
  014f250  bl 0x11d9e0
  014f254  nop
  014f258  li 3, 0
  014f25c  stb 3, 203(29)
  014f260  lis 3, 165
  014f264  lis 4, 165
  014f268  lis 26, 165
  014f26c  li 29, 0
  014f270  addic 5, 3, 12384
  014f274  lis 6, 165
  014f278  addic 26, 26, 11184
  014f27c  li 27, -1
  014f280  stw 29, 11932(4)
  014f284  ori 3, 30, 0
  014f288  stw 29, 12(5)
  014f28c  stw 27, -9496(6)
  014f290  stw 27, 280(26)
  014f294  stw 27, 284(26)
  014f298  bl 0x148538
  014f29c  ori 4, 3, 0
  014f2a0  ori 3, 30, 0
  014f2a4  stw 4, 160(26)
  014f2a8  bl 0x148538
  014f2ac  li 28, 255
  014f2b0  stw 3, 164(26)
  014f2b4  stb 29, 202(26)
  014f2b8  ori 4, 29, 0
  014f2bc  ori 3, 26, 0
  014f2c0  stb 28, 200(26)
  014f2c4  stb 28, 201(26)
  014f2c8  ori 5, 3, 0
  014f2cc  std 4, 120(1)
  014f2d0  ori 3, 29, 0
  014f2d4  std 5, 112(1)
  014f2d8  bl 0x148538
  014f2dc  ld 5, 112(1)
  014f2e0  ld 4, 120(1)
  014f2e4  addic 4, 4, 1
  014f2e8  stw 3, 176(5)
  014f2ec  cmpwi 4, 3
  014f2f0  addic 3, 5, 4
  014f2f4  bt 0, 0x14f2c8
  014f2f8  lis 3, 165
  014f2fc  lis 4, 165
  014f300  addic 3, 3, 11680
  014f304  addic 4, 4, 11744
  014f308  lis 6, 163
  014f30c  lis 5, 165
  014f310  stb 29, 1(3)
  014f314  addic 5, 5, 11808
  014f318  stw 27, 28(26)
  014f31c  stb 29, 1(4)
  014f320  lbz 3, 21696(6)
  014f324  cmpwi 3, 255
  014f328  stb 29, 1(5)
  014f32c  bf 2, 0x14f338
  014f330  ori 25, 29, 0
  014f334  b 0x14f38c
  014f338  ori 3, 29, 0
  014f33c  bl 0xefa28
  014f340  nop
  014f344  ori 25, 3, 0
  014f348  cmpwi 25, 0
  014f34c  bt 2, 0x14f38c
  014f350  stb 28, 48(25)
  014f354  sth 28, 50(25)
  014f358  ori 3, 25, 0
  014f35c  stb 30, 49(25)
  014f360  stb 29, 32(25)
  014f364  bl 0xf31a8
  014f368  nop
  014f36c  lis 4, 32
  014f370  li 5, 14
  014f374  ori 3, 25, 0
  014f378  ori 7, 29, 0
  014f37c  ori 4, 4, 8224
  014f380  ori 6, 5, 0
  014f384  bl 0xf1ea0
  014f388  nop
  014f38c  ori 4, 31, 0
  014f390  li 3, 24
  014f394  addic 3, 3, -1
  014f398  stb 29, 164(4)
  014f39c  cmpwi 3, 0
  014f3a0  addic 4, 4, 1
  014f3a4  bf 2, 0x14f394
  014f3a8  cmpwi 25, 0
  014f3ac  bt 2, 0x14f440
  014f3b0  lis 3, 21
  014f3b4  stw 25, 68(31)
  014f3b8  lis 4, 149
  014f3bc  sth 29, 52(25)
  014f3c0  addi 6, 3, -3608
  014f3c4  addic 7, 4, 5056
  014f3c8  lis 3, 16457
  014f3cc  lis 4, 112
  014f3d0  ori 8, 3, 4059
  014f3d4  lfs 1, 0(6)
  014f3d8  lfs 2, 320(7)
  014f3dc  addic 10, 4, 30944
  014f3e0  lwz 9, 120(25)
  014f3e4  fadds 1, 2, 1
  014f3e8  lis 3, 162
  014f3ec  li 5, 64
  014f3f0  addic 3, 3, -16768
  014f3f4  ori 4, 29, 0
  014f3f8  stfs 1, 16(25)
  014f3fc  lfs 1, 324(7)
  014f400  stfs 1, 20(25)
  014f404  lfs 1, 4(6)
  014f408  lfs 2, 328(7)
  014f40c  stw 8, 72(25)
  014f410  fsubs 1, 2, 1
  014f414  stw 10, 116(25)
  014f418  stfs 1, 24(25)
  014f41c  stw 31, 0(9)
  014f420  stw 29, 4(9)
  014f424  stw 29, 8(9)
  014f428  stw 27, 192(26)
  014f42c  bl 0x5001fc
  014f430  nop
  014f434  ori 3, 25, 0
  014f438  bl 0xaa5e0
  014f43c  nop
  014f440  lis 3, 163
  014f444  addic 3, 3, 21696
  014f448  lbz 3, 601(3)
  014f44c  cmpwi 3, 255
  014f450  bf 2, 0x14f45c
  014f454  ori 27, 29, 0
  014f458  b 0x14f4b0
  014f45c  li 3, 601
  014f460  bl 0xefa28
  014f464  nop
  014f468  ori 27, 3, 0
  014f46c  cmpwi 27, 0
  014f470  bt 2, 0x14f4b0
  014f474  stb 28, 48(27)
  014f478  sth 28, 50(27)
  014f47c  ori 3, 27, 0
  014f480  stb 30, 49(27)
  014f484  stb 29, 32(27)
  014f488  bl 0xf31a8
  014f48c  nop
  014f490  lis 4, 32
  014f494  li 5, 14
  014f498  ori 3, 27, 0
  014f49c  ori 7, 29, 0
  014f4a0  ori 4, 4, 8224
  014f4a4  ori 6, 5, 0
  014f4a8  bl 0xf1ea0
  014f4ac  nop
  014f4b0  cmpwi 27, 0
  014f4b4  bt 2, 0x14f4d4
  014f4b8  lis 3, 112
  014f4bc  lwz 5, 120(27)
  014f4c0  li 4, 4
  014f4c4  addic 3, 3, 30984
  014f4c8  stw 31, 0(5)
  014f4cc  stw 3, 116(27)
  014f4d0  sth 4, 52(27)
  014f4d4  ori 3, 29, 0
  014f4d8  stw 27, 72(31)
  014f4dc  ld 0, 208(1)
  014f4e0  mtlr 0
  014f4e4  ld 25, 136(1)
  014f4e8  ld 26, 144(1)
  014f4ec  ld 27, 152(1)
  014f4f0  ld 28, 160(1)
  014f4f4  ld 29, 168(1)
  014f4f8  ld 30, 176(1)
  014f4fc  ld 31, 184(1)
  014f500  addi 1, 1, 192
  014f504  blr

UpdateAfterEquipGadget:   # 0x14f508, 0x310 bytes
  014f508  stdu 1, -176(1)
  014f50c  mflr 0
  014f510  std 0, 192(1)
  014f514  std 30, 160(1)
  014f518  std 31, 168(1)
  014f51c  std 28, 144(1)
  014f520  li 30, 0
  014f524  ori 31, 3, 0
  014f528  std 29, 152(1)
  014f52c  std 27, 136(1)
  014f530  std 26, 128(1)
  014f534  std 25, 120(1)
  014f538  ori 28, 30, 0
  014f53c  ori 26, 28, 0
  014f540  addic 3, 31, 68
  014f544  addc 29, 3, 26
  014f548  clrldi 29, 29, 32
  014f54c  lwz 27, 0(29)
  014f550  cmpwi 27, 0
  014f554  bt 2, 0x14f57c
  014f558  ori 3, 27, 0
  014f55c  bl 0xefb38
  014f560  nop
  014f564  lis 3, 161
  014f568  lwz 3, 1808(3)
  014f56c  extsw 3, 3
  014f570  std 3, 56(27)
  014f574  ori 27, 28, 0
  014f578  b 0x14f57c
  014f57c  addic 30, 30, 1
  014f580  addic 26, 26, 4
  014f584  stw 27, 0(29)
  014f588  cmpwi 30, 24
  014f58c  bt 0, 0x14f540
  014f590  lis 29, 165
  014f594  ori 4, 28, 0
  014f598  addic 29, 29, 11184
  014f59c  lwz 3, 160(29)
  014f5a0  lis 31, 165
  014f5a4  slwi 27, 4, 3
  014f5a8  addic 31, 31, 12440
  014f5ac  extsw 27, 27
  014f5b0  lwzx 5, 31, 27
  014f5b4  cmpw 5, 3
  014f5b8  bf 2, 0x14f618
  014f5bc  addc 5, 31, 27
  014f5c0  addic 30, 31, 4
  014f5c4  lwz 5, 4(5)
  014f5c8  rlwinm 5, 5, 0, 30, 30
  014f5cc  cmpwi 5, 0
  014f5d0  bt 2, 0x14f618
  014f5d4  lwzx 3, 30, 27
  014f5d8  rlwinm 3, 3, 0, 29, 29
  014f5dc  cmpwi 3, 0
  014f5e0  bt 2, 0x14f608
  014f5e4  lwzx 3, 30, 27
  014f5e8  lbz 4, 203(29)
  014f5ec  xori 3, 3, 4
  014f5f0  cmpwi 4, 0
  014f5f4  stwx 3, 30, 27
  014f5f8  bt 2, 0x14f608
  014f5fc  bl 0x11d9e0
  014f600  nop
  014f604  stb 28, 203(29)
  014f608  lwzx 3, 30, 27
  014f60c  rlwimi 3, 28, 0, 30, 30
  014f610  stwx 3, 30, 27
  014f614  b 0x14f624
  014f618  addic 4, 4, 1
  014f61c  cmpwi 4, 5
  014f620  bt 0, 0x14f5a0
  014f624  stw 28, 160(29)
  014f628  ori 4, 28, 0
  014f62c  lwz 3, 164(29)
  014f630  slwi 27, 4, 3
  014f634  extsw 27, 27
  014f638  lwzx 5, 31, 27
  014f63c  cmpw 5, 3
  014f640  bf 2, 0x14f6a0
  014f644  addc 5, 31, 27
  014f648  addic 30, 31, 4
  014f64c  lwz 5, 4(5)
  014f650  rlwinm 5, 5, 0, 30, 30
  014f654  cmpwi 5, 0
  014f658  bt 2, 0x14f6a0
  014f65c  lwzx 3, 30, 27
  014f660  rlwinm 3, 3, 0, 29, 29
  014f664  cmpwi 3, 0
  014f668  bt 2, 0x14f690
  014f66c  lwzx 3, 30, 27
  014f670  lbz 4, 203(29)
  014f674  xori 3, 3, 4
  014f678  cmpwi 4, 0
  014f67c  stwx 3, 30, 27
  014f680  bt 2, 0x14f690
  014f684  bl 0x11d9e0
  014f688  nop
  014f68c  stb 28, 203(29)
  014f690  lwzx 3, 30, 27
  014f694  rlwimi 3, 28, 0, 30, 30
  014f698  stwx 3, 30, 27
  014f69c  b 0x14f6ac
  014f6a0  addic 4, 4, 1
  014f6a4  cmpwi 4, 5
  014f6a8  bt 0, 0x14f630
  014f6ac  li 4, 255
  014f6b0  lwz 3, 168(29)
  014f6b4  lwz 5, 172(29)
  014f6b8  stw 28, 164(29)
  014f6bc  addc 5, 3, 5
  014f6c0  stb 4, 200(29)
  014f6c4  stb 4, 201(29)
  014f6c8  cmpw 3, 5
  014f6cc  stb 28, 202(29)
  014f6d0  bf 0, 0x14f744
  014f6d4  slwi 4, 3, 3
  014f6d8  lis 5, 115
  014f6dc  extsw 7, 4
  014f6e0  addic 5, 5, 5328
  014f6e4  lis 6, 163
  014f6e8  lis 8, 115
  014f6ec  addic 6, 6, 21696
  014f6f0  lis 9, 163
  014f6f4  lwzx 5, 5, 7
  014f6f8  addic 8, 8, 5332
  014f6fc  extsw 5, 5
  014f700  addic 9, 9, 19456
  014f704  addic 3, 3, 1
  014f708  addic 4, 4, 8
  014f70c  lbzx 5, 6, 5
  014f710  lwzx 6, 8, 7
  014f714  slwi 5, 5, 2
  014f718  slwi 6, 6, 2
  014f71c  lwzx 5, 9, 5
  014f720  addic 5, 5, 72
  014f724  addc 5, 5, 6
  014f728  clrldi 5, 5, 32
  014f72c  stw 28, 0(5)
  014f730  lwz 5, 168(29)
  014f734  lwz 6, 172(29)
  014f738  addc 5, 5, 6
  014f73c  cmpw 3, 5
  014f740  bt 0, 0x14f6d8
  014f744  ori 30, 28, 0
  014f748  ori 25, 29, 0
  014f74c  stw 28, 172(29)
  014f750  ori 4, 28, 0
  014f754  lwz 3, 176(25)
  014f758  slwi 26, 4, 3
  014f75c  extsw 26, 26
  014f760  lwzx 5, 31, 26
  014f764  cmpw 5, 3
  014f768  bf 2, 0x14f7c8
  014f76c  addc 5, 31, 26
  014f770  addic 27, 31, 4
  014f774  lwz 5, 4(5)
  014f778  rlwinm 5, 5, 0, 30, 30
  014f77c  cmpwi 5, 0
  014f780  bt 2, 0x14f7c8
  014f784  lwzx 3, 27, 26
  014f788  rlwinm 3, 3, 0, 29, 29
  014f78c  cmpwi 3, 0
  014f790  bt 2, 0x14f7b8
  014f794  lwzx 3, 27, 26
  014f798  lbz 4, 203(29)
  014f79c  xori 3, 3, 4
  014f7a0  cmpwi 4, 0
  014f7a4  stwx 3, 27, 26
  014f7a8  bt 2, 0x14f7b8
  014f7ac  bl 0x11d9e0
  014f7b0  nop
  014f7b4  stb 28, 203(29)
  014f7b8  lwzx 3, 27, 26
  014f7bc  rlwimi 3, 28, 0, 30, 30
  014f7c0  stwx 3, 27, 26
  014f7c4  b 0x14f7d4
  014f7c8  addic 4, 4, 1
  014f7cc  cmpwi 4, 5
  014f7d0  bt 0, 0x14f758
  014f7d4  addic 30, 30, 1
  014f7d8  stw 28, 176(25)
  014f7dc  cmpwi 30, 3
  014f7e0  addic 25, 25, 4
  014f7e4  bt 0, 0x14f750
  014f7e8  ori 3, 28, 0
  014f7ec  ld 0, 192(1)
  014f7f0  mtlr 0
  014f7f4  ld 25, 120(1)
  014f7f8  ld 26, 128(1)
  014f7fc  ld 27, 136(1)
  014f800  ld 28, 144(1)
  014f804  ld 29, 152(1)
  014f808  ld 30, 160(1)
  014f80c  ld 31, 168(1)
  014f810  addi 1, 1, 176
  014f814  blr

MenuHero_Update:   # 0x14f828, 0xe2c bytes
  014f828  stdu 1, -224(1)
  014f82c  mflr 0
  014f830  std 0, 240(1)
  014f834  std 31, 216(1)
  014f838  std 24, 160(1)
  014f83c  ori 31, 3, 0
  014f840  std 26, 176(1)
  014f844  std 25, 168(1)
  014f848  lis 24, 21
  014f84c  li 26, 0
  014f850  std 27, 184(1)
  014f854  li 25, -1
  014f858  addi 24, 24, -2024
  014f85c  std 30, 208(1)
  014f860  lwz 27, 84(31)
  014f864  ori 30, 26, 0
  014f868  ori 3, 25, 0
  014f86c  std 29, 200(1)
  014f870  std 28, 192(1)
  014f874  std 23, 152(1)
  014f878  std 22, 144(1)
  014f87c  std 21, 136(1)
  014f880  std 20, 128(1)
  014f884  std 19, 120(1)
  014f888  std 18, 112(1)
  014f88c  cmpwi 27, 0
  014f890  bt 2, 0x14f89c
  014f894  lhz 3, 166(27)
  014f898  extsh 3, 3
  014f89c  lis 21, 165
  014f8a0  lis 4, 114
  014f8a4  addic 21, 21, 11184
  014f8a8  addic 23, 4, 4096
  014f8ac  lwz 29, 48(21)
  014f8b0  extsw 29, 29
  014f8b4  sldi 4, 29, 4
  014f8b8  subc 5, 29, 4
  014f8bc  sldi 5, 5, 2
  014f8c0  subc 4, 4, 5
  014f8c4  lwz 5, 284(21)
  014f8c8  extsw 4, 4
  014f8cc  addc 4, 23, 4
  014f8d0  addic 23, 23, 16
  014f8d4  lwz 28, 16(4)
  014f8d8  extsw 28, 28
  014f8dc  subc 4, 28, 5
  014f8e0  cmpw 3, 28
  014f8e4  cmpwi 1, 4, 0
  014f8e8  crorc 2, 2, 6
  014f8ec  bt 2, 0x14faa8
  014f8f0  cmpwi 27, 0
  014f8f4  bt 2, 0x14f914
  014f8f8  ori 3, 27, 0
  014f8fc  bl 0xefb38
  014f900  nop
  014f904  lis 3, 161
  014f908  lwz 3, 1808(3)
  014f90c  extsw 3, 3
  014f910  std 3, 56(27)
  014f914  lis 27, 165
  014f918  addic 27, 27, 11680
  014f91c  lbz 3, 1(27)
  014f920  cmpwi 3, 0
  014f924  bt 2, 0x14f938
  014f928  ori 4, 27, 0
  014f92c  lwz 3, 68(31)
  014f930  bl 0xf0f1c
  014f934  nop
  014f938  lis 3, 151
  014f93c  addic 3, 3, -25376
  014f940  lwz 3, 4280(3)
  014f944  cmpwi 3, 0
  014f948  bt 2, 0x14f964
  014f94c  cmpw 29, 3
  014f950  bt 2, 0x14f964
  014f954  ori 3, 26, 0
  014f958  ori 4, 26, 0
  014f95c  bl 0x86814
  014f960  nop
  014f964  lwz 5, 276(21)
  014f968  lis 22, 165
  014f96c  cntlzw 5, 5
  014f970  ori 3, 28, 0
  014f974  srwi 5, 5, 5
  014f978  ori 4, 25, 0
  014f97c  stw 5, -9492(22)
  014f980  bl 0xe0854
  014f984  nop
  014f988  lis 3, 163
  014f98c  lis 4, 163
  014f990  addic 3, 3, 21696
  014f994  addic 4, 4, 19456
  014f998  lwz 5, -9492(22)
  014f99c  stw 28, 280(21)
  014f9a0  lbzx 6, 3, 28
  014f9a4  stw 5, 276(21)
  014f9a8  slwi 6, 6, 2
  014f9ac  stw 28, 316(21)
  014f9b0  stw 5, 320(21)
  014f9b4  lwzx 4, 4, 6
  014f9b8  stb 26, 13(4)
  014f9bc  lbzx 3, 3, 28
  014f9c0  cmpwi 3, 255
  014f9c4  bf 2, 0x14f9d0
  014f9c8  ori 28, 26, 0
  014f9cc  b 0x14fa2c
  014f9d0  ori 3, 28, 0
  014f9d4  bl 0xefa28
  014f9d8  nop
  014f9dc  ori 28, 3, 0
  014f9e0  cmpwi 28, 0
  014f9e4  bt 2, 0x14fa2c
  014f9e8  li 4, 255
  014f9ec  li 5, 1
  014f9f0  ori 3, 28, 0
  014f9f4  stb 4, 48(28)
  014f9f8  sth 4, 50(28)
  014f9fc  stb 5, 49(28)
  014fa00  stb 26, 32(28)
  014fa04  bl 0xf31a8
  014fa08  nop
  014fa0c  lis 4, 32
  014fa10  li 5, 14
  014fa14  ori 7, 26, 0
  014fa18  ori 4, 4, 8224
  014fa1c  ori 3, 28, 0
  014fa20  ori 6, 5, 0
  014fa24  bl 0xf1ea0
  014fa28  nop
  014fa2c  cmpwi 28, 0
  014fa30  bt 2, 0x14faa4
  014fa34  lis 3, 151
  014fa38  ori 30, 29, 0
  014fa3c  addic 3, 3, -25432
  014fa40  lbzx 3, 3, 30
  014fa44  cmpwi 3, 0
  014fa48  bt 2, 0x14fa5c
  014fa4c  ori 3, 28, 0
  014fa50  lwz 4, 68(31)
  014fa54  bl 0x8d7e8
  014fa58  nop
  014fa5c  lis 3, 112
  014fa60  lwz 5, 120(28)
  014fa64  li 4, 4
  014fa68  addic 3, 3, 30960
  014fa6c  cmpwi 29, 18
  014fa70  stw 31, 0(5)
  014fa74  stw 3, 116(28)
  014fa78  sth 4, 52(28)
  014fa7c  bf 2, 0x14faa4
  014fa80  lwz 3, 68(31)
  014fa84  ori 4, 26, 0
  014fa88  ori 5, 27, 0
  014fa8c  bl 0xf0ea8
  014fa90  nop
  014fa94  lfs 1, 0(24)
  014fa98  stw 26, 32(27)
  014fa9c  stfs 1, 36(27)
  014faa0  stfs 1, 40(27)
  014faa4  stw 28, 84(31)
  014faa8  lwz 29, 80(31)
  014faac  ori 3, 25, 0
  014fab0  cmpwi 1, 29, 0
  014fab4  bt 6, 0x14fac0
  014fab8  lhz 3, 166(29)
  014fabc  extsh 3, 3
  014fac0  lwz 4, 56(21)
  014fac4  sldi 5, 4, 4
  014fac8  subc 4, 4, 5
  014facc  sldi 4, 4, 2
  014fad0  subc 4, 5, 4
  014fad4  extsw 4, 4
  014fad8  lwzx 28, 23, 4
  014fadc  extsw 28, 28
  014fae0  cmpw 3, 28
  014fae4  bt 2, 0x14fbc0
  014fae8  bt 6, 0x14fb10
  014faec  ori 3, 29, 0
  014faf0  bl 0xefb38
  014faf4  nop
  014faf8  lis 3, 161
  014fafc  lwz 3, 1808(3)
  014fb00  extsw 3, 3
  014fb04  std 3, 56(29)
  014fb08  ori 29, 26, 0
  014fb0c  b 0x14fb10
  014fb10  cmpwi 28, -1
  014fb14  bt 2, 0x14fbbc
  014fb18  lis 3, 163
  014fb1c  addic 3, 3, 21696
  014fb20  lbzx 3, 3, 28
  014fb24  cmpwi 3, 255
  014fb28  bf 2, 0x14fb34
  014fb2c  ori 29, 26, 0
  014fb30  b 0x14fb94
  014fb34  ori 3, 28, 0
  014fb38  bl 0xefa28
  014fb3c  nop
  014fb40  ori 28, 3, 0
  014fb44  cmpwi 28, 0
  014fb48  bt 2, 0x14fb90
  014fb4c  li 4, 255
  014fb50  li 5, 1
  014fb54  ori 3, 28, 0
  014fb58  stb 4, 48(28)
  014fb5c  sth 4, 50(28)
  014fb60  stb 5, 49(28)
  014fb64  stb 26, 32(28)
  014fb68  bl 0xf31a8
  014fb6c  nop
  014fb70  lis 4, 32
  014fb74  li 5, 14
  014fb78  ori 3, 28, 0
  014fb7c  ori 7, 26, 0
  014fb80  ori 4, 4, 8224
  014fb84  ori 6, 5, 0
  014fb88  bl 0xf1ea0
  014fb8c  nop
  014fb90  ori 29, 28, 0
  014fb94  cmpwi 29, 0
  014fb98  bt 2, 0x14fbbc
  014fb9c  lis 3, 112
  014fba0  lwz 5, 120(29)
  014fba4  li 4, 4
  014fba8  addic 3, 3, 30968
  014fbac  lwz 30, 56(21)
  014fbb0  stw 31, 0(5)
  014fbb4  stw 3, 116(29)
  014fbb8  sth 4, 52(29)
  014fbbc  stw 29, 80(31)
  014fbc0  lwz 28, 88(31)
  014fbc4  ori 3, 25, 0
  014fbc8  cmpwi 1, 28, 0
  014fbcc  bt 6, 0x14fbd8
  014fbd0  lhz 3, 166(28)
  014fbd4  extsh 3, 3
  014fbd8  lwz 4, 52(21)
  014fbdc  sldi 5, 4, 4
  014fbe0  subc 4, 4, 5
  014fbe4  sldi 4, 4, 2
  014fbe8  subc 4, 5, 4
  014fbec  extsw 4, 4
  014fbf0  lwzx 29, 23, 4
  014fbf4  extsw 29, 29
  014fbf8  cmpw 3, 29
  014fbfc  bt 2, 0x14fe48
  014fc00  bf 6, 0x14fc0c
  014fc04  ori 22, 28, 0
  014fc08  b 0x14fc2c
  014fc0c  ori 3, 28, 0
  014fc10  bl 0xefb38
  014fc14  nop
  014fc18  lis 3, 161
  014fc1c  ori 22, 26, 0
  014fc20  lwz 3, 1808(3)
  014fc24  extsw 3, 3
  014fc28  std 3, 56(28)
  014fc2c  lis 28, 165
  014fc30  addic 28, 28, 11744
  014fc34  lbz 3, 1(28)
  014fc38  cmpwi 3, 0
  014fc3c  bt 2, 0x14fc50
  014fc40  ori 4, 28, 0
  014fc44  lwz 3, 68(31)
  014fc48  bl 0xf0f1c
  014fc4c  nop
  014fc50  lis 27, 165
  014fc54  addic 27, 27, 11808
  014fc58  lbz 3, 1(27)
  014fc5c  cmpwi 3, 0
  014fc60  bt 2, 0x14fc74
  014fc64  ori 4, 27, 0
  014fc68  lwz 3, 68(31)
  014fc6c  bl 0xf0f1c
  014fc70  nop
  014fc74  cmpwi 29, -1
  014fc78  bt 2, 0x14fd68
  014fc7c  lis 3, 163
  014fc80  addic 3, 3, 21696
  014fc84  lbzx 3, 3, 29
  014fc88  cmpwi 3, 255
  014fc8c  bf 2, 0x14fc98
  014fc90  ori 22, 26, 0
  014fc94  b 0x14fcf4
  014fc98  ori 3, 29, 0
  014fc9c  bl 0xefa28
  014fca0  nop
  014fca4  ori 22, 3, 0
  014fca8  cmpwi 22, 0
  014fcac  bt 2, 0x14fcf4
  014fcb0  li 4, 255
  014fcb4  li 5, 1
  014fcb8  ori 3, 22, 0
  014fcbc  stb 4, 48(22)
  014fcc0  sth 4, 50(22)
  014fcc4  stb 5, 49(22)
  014fcc8  stb 26, 32(22)
  014fccc  bl 0xf31a8
  014fcd0  nop
  014fcd4  lis 4, 32
  014fcd8  li 5, 14
  014fcdc  ori 7, 26, 0
  014fce0  ori 4, 4, 8224
  014fce4  ori 3, 22, 0
  014fce8  ori 6, 5, 0
  014fcec  bl 0xf1ea0
  014fcf0  nop
  014fcf4  cmpwi 22, 0
  014fcf8  bt 2, 0x14fd68
  014fcfc  lis 3, 112
  014fd00  lwz 5, 120(22)
  014fd04  li 6, 4
  014fd08  lwz 30, 52(21)
  014fd0c  addic 3, 3, 30976
  014fd10  li 4, 22
  014fd14  stw 31, 0(5)
  014fd18  stw 3, 116(22)
  014fd1c  sth 6, 52(22)
  014fd20  ori 5, 28, 0
  014fd24  lwz 3, 68(31)
  014fd28  bl 0xf0ea8
  014fd2c  nop
  014fd30  lwz 3, 68(31)
  014fd34  li 4, 23
  014fd38  ori 5, 27, 0
  014fd3c  bl 0xf0ea8
  014fd40  nop
  014fd44  lis 3, 15395
  014fd48  lfs 1, 4(24)
  014fd4c  ori 3, 3, 55050
  014fd50  stw 3, 32(28)
  014fd54  stfs 1, 36(28)
  014fd58  stfs 1, 40(28)
  014fd5c  stfs 1, 32(27)
  014fd60  stfs 1, 36(27)
  014fd64  stfs 1, 40(27)
  014fd68  stw 22, 88(31)
  014fd6c  lwz 22, 92(31)
  014fd70  cmpwi 22, 0
  014fd74  bt 2, 0x14fd9c
  014fd78  ori 3, 22, 0
  014fd7c  bl 0xefb38
  014fd80  nop
  014fd84  lis 3, 161
  014fd88  lwz 3, 1808(3)
  014fd8c  extsw 3, 3
  014fd90  std 3, 56(22)
  014fd94  ori 22, 26, 0
  014fd98  b 0x14fd9c
  014fd9c  cmpwi 29, -1
  014fda0  bt 2, 0x14fe44
  014fda4  lis 3, 163
  014fda8  addic 3, 3, 21696
  014fdac  lbzx 3, 3, 29
  014fdb0  cmpwi 3, 255
  014fdb4  bf 2, 0x14fdc0
  014fdb8  ori 22, 26, 0
  014fdbc  b 0x14fe20
  014fdc0  ori 3, 29, 0
  014fdc4  bl 0xefa28
  014fdc8  nop
  014fdcc  ori 29, 3, 0
  014fdd0  cmpwi 29, 0
  014fdd4  bt 2, 0x14fe1c
  014fdd8  li 4, 255
  014fddc  li 5, 1
  014fde0  ori 3, 29, 0
  014fde4  stb 4, 48(29)
  014fde8  sth 4, 50(29)
  014fdec  stb 5, 49(29)
  014fdf0  stb 26, 32(29)
  014fdf4  bl 0xf31a8
  014fdf8  nop
  014fdfc  lis 4, 32
  014fe00  li 5, 14
  014fe04  ori 7, 26, 0
  014fe08  ori 4, 4, 8224
  014fe0c  ori 3, 29, 0
  014fe10  ori 6, 5, 0
  014fe14  bl 0xf1ea0
  014fe18  nop
  014fe1c  ori 22, 29, 0
  014fe20  cmpwi 22, 0
  014fe24  bt 2, 0x14fe44
  014fe28  lis 3, 112
  014fe2c  lwz 5, 120(22)
  014fe30  li 4, 4
  014fe34  addic 3, 3, 30976
  014fe38  stw 31, 0(5)
  014fe3c  stw 3, 116(22)
  014fe40  sth 4, 52(22)
  014fe44  stw 22, 92(31)
  014fe48  lwz 29, 76(31)
  014fe4c  ori 3, 25, 0
  014fe50  cmpwi 1, 29, 0
  014fe54  bt 6, 0x14fe60
  014fe58  lhz 3, 166(29)
  014fe5c  extsh 3, 3
  014fe60  lwz 4, 60(21)
  014fe64  sldi 5, 4, 4
  014fe68  subc 4, 4, 5
  014fe6c  sldi 4, 4, 2
  014fe70  subc 4, 5, 4
  014fe74  extsw 4, 4
  014fe78  lwzx 23, 23, 4
  014fe7c  extsw 23, 23
  014fe80  cmpw 3, 23
  014fe84  bt 2, 0x14ff94
  014fe88  bt 6, 0x14feb0
  014fe8c  ori 3, 29, 0
  014fe90  bl 0xefb38
  014fe94  nop
  014fe98  lis 3, 161
  014fe9c  lwz 3, 1808(3)
  014fea0  extsw 3, 3
  014fea4  std 3, 56(29)
  014fea8  ori 29, 26, 0
  014feac  b 0x14feb0
  014feb0  cmpwi 23, -1
  014feb4  bt 2, 0x14ff90
  014feb8  lis 3, 163
  014febc  addic 3, 3, 21696
  014fec0  lbzx 3, 3, 23
  014fec4  cmpwi 3, 255
  014fec8  bf 2, 0x14fed4
  014fecc  ori 29, 26, 0
  014fed0  b 0x14ff34
  014fed4  ori 3, 23, 0
  014fed8  bl 0xefa28
  014fedc  nop
  014fee0  ori 23, 3, 0
  014fee4  cmpwi 23, 0
  014fee8  bt 2, 0x14ff30
  014feec  li 4, 255
  014fef0  li 5, 1
  014fef4  ori 3, 23, 0
  014fef8  stb 4, 48(23)
  014fefc  sth 4, 50(23)
  014ff00  stb 5, 49(23)
  014ff04  stb 26, 32(23)
  014ff08  bl 0xf31a8
  014ff0c  nop
  014ff10  lis 4, 32
  014ff14  li 5, 14
  014ff18  ori 7, 26, 0
  014ff1c  ori 4, 4, 8224
  014ff20  ori 3, 23, 0
  014ff24  ori 6, 5, 0
  014ff28  bl 0xf1ea0
  014ff2c  nop
  014ff30  ori 29, 23, 0
  014ff34  cmpwi 29, 0
  014ff38  bt 2, 0x14ff90
  014ff3c  lwz 5, 120(29)
  014ff40  lis 3, 112
  014ff44  li 4, 4
  014ff48  addic 3, 3, 30984
  014ff4c  stw 31, 0(5)
  014ff50  lhz 5, 166(29)
  014ff54  stw 3, 116(29)
  014ff58  cmpwi 5, 607
  014ff5c  sth 4, 52(29)
  014ff60  bf 2, 0x14ff90
  014ff64  lbz 3, 83(29)
  014ff68  cmpwi 3, 6
  014ff6c  bt 2, 0x14ff88
  014ff70  li 4, 6
  014ff74  li 6, 10
  014ff78  ori 3, 29, 0
  014ff7c  ori 5, 26, 0
  014ff80  bl 0xfddc0
  014ff84  nop
  014ff88  li 3, 8
  014ff8c  stb 3, 32(29)
  014ff90  stw 29, 76(31)
  014ff94  lwz 29, 108(31)
  014ff98  ori 3, 25, 0
  014ff9c  cmpwi 1, 29, 0
  014ffa0  bt 6, 0x14ffac
  014ffa4  lhz 3, 166(29)
  014ffa8  extsh 3, 3
  014ffac  lis 27, 151
  014ffb0  ori 28, 25, 0
  014ffb4  addic 27, 27, -16064
  014ffb8  lbz 4, 35(27)
  014ffbc  cmpwi 4, 0
  014ffc0  bt 2, 0x14ffc8
  014ffc4  li 28, 407
  014ffc8  cmpw 3, 28
  014ffcc  bt 2, 0x1500a4
  014ffd0  bt 6, 0x14fff8
  014ffd4  ori 3, 29, 0
  014ffd8  bl 0xefb38
  014ffdc  nop
  014ffe0  lis 3, 161
  014ffe4  lwz 3, 1808(3)
  014ffe8  extsw 3, 3
  014ffec  std 3, 56(29)
  014fff0  ori 29, 26, 0
  014fff4  b 0x14fff8
  014fff8  cmpwi 28, -1
  014fffc  bt 2, 0x1500a0
  0150000  lis 3, 163
  0150004  addic 3, 3, 21696
  0150008  lbzx 3, 3, 28
  015000c  cmpwi 3, 255
  0150010  bf 2, 0x15001c
  0150014  ori 29, 26, 0
  0150018  b 0x15007c
  015001c  ori 3, 28, 0
  0150020  bl 0xefa28
  0150024  nop
  0150028  ori 28, 3, 0
  015002c  cmpwi 28, 0
  0150030  bt 2, 0x150078
  0150034  li 4, 255
  0150038  li 5, 1
  015003c  ori 3, 28, 0
  0150040  stb 4, 48(28)
  0150044  sth 4, 50(28)
  0150048  stb 5, 49(28)
  015004c  stb 26, 32(28)
  0150050  bl 0xf31a8
  0150054  nop
  0150058  lis 4, 32
  015005c  li 5, 14
  0150060  ori 3, 28, 0
  0150064  ori 7, 26, 0
  0150068  ori 4, 4, 8224
  015006c  ori 6, 5, 0
  0150070  bl 0xf1ea0
  0150074  nop
  0150078  ori 29, 28, 0
  015007c  cmpwi 29, 0
  0150080  bt 2, 0x1500a0
  0150084  lis 3, 112
  0150088  lwz 5, 120(29)
  015008c  li 4, 4
  0150090  addic 3, 3, 30992
  0150094  stw 31, 0(5)
  0150098  stw 3, 116(29)
  015009c  sth 4, 52(29)
  01500a0  stw 29, 108(31)
  01500a4  lwz 29, 112(31)
  01500a8  ori 3, 25, 0
  01500ac  cmpwi 1, 29, 0
  01500b0  bt 6, 0x1500bc
  01500b4  lhz 3, 166(29)
  01500b8  extsh 3, 3
  01500bc  lbz 4, 33(27)
  01500c0  ori 28, 25, 0
  01500c4  cmpwi 4, 0
  01500c8  bt 2, 0x1500d0
  01500cc  li 28, 614
  01500d0  cmpw 3, 28
  01500d4  bt 2, 0x1501ac
  01500d8  bt 6, 0x150100
  01500dc  ori 3, 29, 0
  01500e0  bl 0xefb38
  01500e4  nop
  01500e8  lis 3, 161
  01500ec  lwz 3, 1808(3)
  01500f0  extsw 3, 3
  01500f4  std 3, 56(29)
  01500f8  ori 29, 26, 0
  01500fc  b 0x150100
  0150100  cmpwi 28, -1
  0150104  bt 2, 0x1501a8
  0150108  lis 3, 163
  015010c  addic 3, 3, 21696
  0150110  lbzx 3, 3, 28
  0150114  cmpwi 3, 255
  0150118  bf 2, 0x150124
  015011c  ori 29, 26, 0
  0150120  b 0x150184
  0150124  ori 3, 28, 0
  0150128  bl 0xefa28
  015012c  nop
  0150130  ori 28, 3, 0
  0150134  cmpwi 28, 0
  0150138  bt 2, 0x150180
  015013c  li 4, 255
  0150140  li 5, 1
  0150144  ori 3, 28, 0
  0150148  stb 4, 48(28)
  015014c  sth 4, 50(28)
  0150150  stb 5, 49(28)
  0150154  stb 26, 32(28)
  0150158  bl 0xf31a8
  015015c  nop
  0150160  lis 4, 32
  0150164  li 5, 14
  0150168  ori 7, 26, 0
  015016c  ori 4, 4, 8224
  0150170  ori 3, 28, 0
  0150174  ori 6, 5, 0
  0150178  bl 0xf1ea0
  015017c  nop
  0150180  ori 29, 28, 0
  0150184  cmpwi 29, 0
  0150188  bt 2, 0x1501a8
  015018c  lis 3, 112
  0150190  lwz 5, 120(29)
  0150194  li 4, 4
  0150198  addic 3, 3, 30992
  015019c  stw 31, 0(5)
  01501a0  stw 3, 116(29)
  01501a4  sth 4, 52(29)
  01501a8  stw 29, 112(31)
  01501ac  lwz 29, 116(31)
  01501b0  ori 3, 25, 0
  01501b4  cmpwi 1, 29, 0
  01501b8  bt 6, 0x1501c4
  01501bc  lhz 3, 166(29)
  01501c0  extsh 3, 3
  01501c4  lbz 4, 34(27)
  01501c8  ori 28, 25, 0
  01501cc  cmpwi 4, 0
  01501d0  bt 2, 0x1501d8
  01501d4  li 28, 618
  01501d8  cmpw 3, 28
  01501dc  bt 2, 0x1502b4
  01501e0  bt 6, 0x150208
  01501e4  ori 3, 29, 0
  01501e8  bl 0xefb38
  01501ec  nop
  01501f0  lis 3, 161
  01501f4  lwz 3, 1808(3)
  01501f8  extsw 3, 3
  01501fc  std 3, 56(29)
  0150200  ori 29, 26, 0
  0150204  b 0x150208
  0150208  cmpwi 28, -1
  015020c  bt 2, 0x1502b0
  0150210  lis 3, 163
  0150214  addic 3, 3, 21696
  0150218  lbzx 3, 3, 28
  015021c  cmpwi 3, 255
  0150220  bf 2, 0x15022c
  0150224  ori 29, 26, 0
  0150228  b 0x15028c
  015022c  ori 3, 28, 0
  0150230  bl 0xefa28
  0150234  nop
  0150238  ori 28, 3, 0
  015023c  cmpwi 28, 0
  0150240  bt 2, 0x150288
  0150244  li 4, 255
  0150248  li 5, 1
  015024c  ori 3, 28, 0
  0150250  stb 4, 48(28)
  0150254  sth 4, 50(28)
  0150258  stb 5, 49(28)
  015025c  stb 26, 32(28)
  0150260  bl 0xf31a8
  0150264  nop
  0150268  lis 4, 32
  015026c  li 5, 14
  0150270  ori 3, 28, 0
  0150274  ori 7, 26, 0
  0150278  ori 4, 4, 8224
  015027c  ori 6, 5, 0
  0150280  bl 0xf1ea0
  0150284  nop
  0150288  ori 29, 28, 0
  015028c  cmpwi 29, 0
  0150290  bt 2, 0x1502b0
  0150294  lis 3, 112
  0150298  lwz 5, 120(29)
  015029c  li 4, 4
  01502a0  addic 3, 3, 30992
  01502a4  stw 31, 0(5)
  01502a8  stw 3, 116(29)
  01502ac  sth 4, 52(29)
  01502b0  stw 29, 116(31)
  01502b4  ori 28, 26, 0
  01502b8  ori 23, 28, 0
  01502bc  addic 3, 31, 120
  01502c0  addc 27, 3, 23
  01502c4  ori 3, 25, 0
  01502c8  clrldi 27, 27, 32
  01502cc  lwz 20, 0(27)
  01502d0  cmpwi 1, 20, 0
  01502d4  bt 6, 0x1502e0
  01502d8  lhz 3, 166(20)
  01502dc  extsh 3, 3
  01502e0  lis 22, 151
  01502e4  ori 29, 25, 0
  01502e8  addic 22, 22, -25376
  01502ec  lbz 4, 8183(22)
  01502f0  cmpw 28, 4
  01502f4  bf 0, 0x1502fc
  01502f8  li 29, 479
  01502fc  cmpw 3, 29
  0150300  bt 2, 0x15040c
  0150304  bt 6, 0x15032c
  0150308  ori 3, 20, 0
  015030c  bl 0xefb38
  0150310  nop
  0150314  lis 3, 161
  0150318  lwz 3, 1808(3)
  015031c  extsw 3, 3
  0150320  std 3, 56(20)
  0150324  ori 20, 26, 0
  0150328  b 0x15032c
  015032c  cmpwi 29, -1
  0150330  bt 2, 0x150408
  0150334  lis 3, 163
  0150338  addic 3, 3, 21696
  015033c  lbzx 3, 3, 29
  0150340  cmpwi 3, 255
  0150344  bf 2, 0x150350
  0150348  ori 20, 26, 0
  015034c  b 0x1503b0
  0150350  ori 3, 29, 0
  0150354  bl 0xefa28
  0150358  nop
  015035c  ori 29, 3, 0
  0150360  cmpwi 29, 0
  0150364  bt 2, 0x1503ac
  0150368  li 4, 255
  015036c  li 5, 1
  0150370  ori 3, 29, 0
  0150374  stb 4, 48(29)
  0150378  sth 4, 50(29)
  015037c  stb 5, 49(29)
  0150380  stb 26, 32(29)
  0150384  bl 0xf31a8
  0150388  nop
  015038c  lis 4, 32
  0150390  li 5, 14
  0150394  ori 3, 29, 0
  0150398  ori 7, 26, 0
  015039c  ori 4, 4, 8224
  01503a0  ori 6, 5, 0
  01503a4  bl 0xf1ea0
  01503a8  nop
  01503ac  ori 20, 29, 0
  01503b0  lbz 3, 8182(22)
  01503b4  cmpwi 1, 20, 0
  01503b8  cmpw 28, 3
  01503bc  bf 0, 0x1503c8
  01503c0  lfs 1, 0(24)
  01503c4  b 0x1503cc
  01503c8  lfs 1, 8(24)
  01503cc  lis 3, 165
  01503d0  lis 4, 165
  01503d4  addic 3, 3, 11884
  01503d8  addic 4, 4, 11908
  01503dc  stfsx 1, 3, 23
  01503e0  stwx 26, 4, 23
  01503e4  bt 6, 0x150408
  01503e8  lis 3, 112
  01503ec  lwz 5, 120(20)
  01503f0  li 4, 4
  01503f4  addic 3, 3, 31000
  01503f8  stw 31, 0(5)
  01503fc  stw 3, 116(20)
  0150400  sth 4, 52(20)
  0150404  stb 28, 188(20)
  0150408  stw 20, 0(27)
  015040c  addic 28, 28, 1
  0150410  addic 23, 23, 4
  0150414  cmpwi 28, 8
  0150418  bt 0, 0x1502bc
  015041c  lwz 3, 28(21)
  0150420  cmpw 30, 3
  0150424  bt 2, 0x1505c0
  0150428  cmpwi 1, 30, 36
  015042c  cmpwi 30, 0
  0150430  crnand 2, 1, 4
  0150434  bt 2, 0x1505c0
  0150438  lis 3, 150
  015043c  stw 30, 28(21)
  0150440  addic 3, 3, 14024
  0150444  lhz 3, 8(3)
  0150448  cmpwi 3, 0
  015044c  bt 2, 0x150468
  0150450  lbz 3, 203(21)
  0150454  cmpwi 3, 0
  0150458  bt 2, 0x150468
  015045c  bl 0x11d9e0
  0150460  nop
  0150464  stb 26, 203(21)
  0150468  sldi 3, 30, 4
  015046c  lis 4, 115
  0150470  addc 5, 3, 3
  0150474  lis 24, 165
  0150478  lis 6, 165
  015047c  addc 3, 3, 5
  0150480  addic 28, 4, 3552
  0150484  addic 4, 6, 12384
  0150488  extsw 3, 3
  015048c  stw 26, 11932(24)
  0150490  addic 5, 28, 12
  0150494  addc 23, 28, 3
  0150498  lwz 21, 204(21)
  015049c  stw 26, 12(4)
  01504a0  lwzx 28, 28, 3
  01504a4  lwz 4, 8(23)
  01504a8  lwz 6, 12(23)
  01504ac  lwz 7, 16(23)
  01504b0  addc 4, 4, 21
  01504b4  lwz 8, 24(23)
  01504b8  lwz 9, 28(23)
  01504bc  lwz 10, 32(23)
  01504c0  lwz 11, 36(23)
  01504c4  lwz 12, 40(23)
  01504c8  lwz 29, 44(23)
  01504cc  lwz 22, 11932(24)
  01504d0  lwz 27, 4(23)
  01504d4  cmpwi 22, 8
  01504d8  bf 0, 0x15053c
  01504dc  lwz 20, 11932(24)
  01504e0  lis 22, 165
  01504e4  sldi 19, 20, 6
  01504e8  sldi 18, 20, 3
  01504ec  addic 22, 22, 11936
  01504f0  subc 19, 19, 18
  01504f4  addic 20, 20, 1
  01504f8  addc 22, 22, 19
  01504fc  clrldi 22, 22, 32
  0150500  stw 20, 11932(24)
  0150504  stw 26, 0(22)
  0150508  stw 4, 4(22)
  015050c  stw 26, 8(22)
  0150510  stw 6, 12(22)
  0150514  stw 30, 16(22)
  0150518  stw 7, 20(22)
  015051c  stw 8, 24(22)
  0150520  stw 9, 28(22)
  0150524  stw 10, 32(22)
  0150528  stw 11, 36(22)
  015052c  stw 12, 40(22)
  0150530  stw 29, 44(22)
  0150534  stw 28, 48(22)
  0150538  stw 27, 52(22)
  015053c  lwzx 3, 5, 3
  0150540  cmpwi 3, 0
  0150544  bt 2, 0x1505c0
  0150548  lwz 3, 11932(24)
  015054c  lwz 4, 20(23)
  0150550  cmpwi 3, 8
  0150554  addc 21, 4, 21
  0150558  bf 0, 0x1505c0
  015055c  lis 4, 165
  0150560  sldi 5, 3, 6
  0150564  sldi 6, 3, 3
  0150568  addic 4, 4, 11936
  015056c  subc 5, 5, 6
  0150570  addic 3, 3, 1
  0150574  addc 4, 4, 5
  0150578  li 6, 2
  015057c  clrldi 4, 4, 32
  0150580  stw 3, 11932(24)
  0150584  li 3, 1
  0150588  stw 26, 0(4)
  015058c  stw 21, 4(4)
  0150590  stw 6, 8(4)
  0150594  stw 26, 12(4)
  0150598  stw 30, 16(4)
  015059c  stw 3, 20(4)
  01505a0  stw 25, 24(4)
  01505a4  stw 26, 28(4)
  01505a8  stw 25, 32(4)
  01505ac  stw 26, 36(4)
  01505b0  stw 25, 40(4)
  01505b4  stw 26, 44(4)
  01505b8  stw 26, 48(4)
  01505bc  stw 26, 52(4)
  01505c0  ori 3, 26, 0
  01505c4  ori 5, 31, 0
  01505c8  lbz 4, 164(5)
  01505cc  cmpwi 4, 0
  01505d0  bt 2, 0x1505dc
  01505d4  addic 4, 4, -1
  01505d8  stb 4, 164(5)
  01505dc  addic 3, 3, 1
  01505e0  addic 5, 5, 1
  01505e4  cmpwi 3, 24
  01505e8  bt 0, 0x1505c8
  01505ec  lwz 3, 68(31)
  01505f0  addic 6, 31, 96
  01505f4  lwz 4, 84(31)
  01505f8  addic 7, 31, 100
  01505fc  addic 8, 31, 104
  0150600  lwz 5, 80(31)
  0150604  bl 0x13ebb0
  0150608  ori 3, 26, 0
  015060c  ld 0, 240(1)
  0150610  mtlr 0
  0150614  ld 18, 112(1)
  0150618  ld 19, 120(1)
  015061c  ld 20, 128(1)
  0150620  ld 21, 136(1)
  0150624  ld 22, 144(1)
  0150628  ld 23, 152(1)
  015062c  ld 24, 160(1)
  0150630  ld 25, 168(1)
  0150634  ld 26, 176(1)
  0150638  ld 27, 184(1)
  015063c  ld 28, 192(1)
  0150640  ld 29, 200(1)
  0150644  ld 30, 208(1)
  0150648  ld 31, 216(1)
  015064c  addi 1, 1, 224
  0150650  blr

STUB_00150654:   # 0x150654, 0x4 bytes
  0150654  blr

STUB_00150658:   # 0x150658, 0x4 bytes
  0150658  blr

MenuHero_MobyUpdateA:   # 0x150660, 0x21c bytes
  0150660  stdu 1, -224(1)
  0150664  mflr 0
  0150668  std 0, 240(1)
  015066c  std 31, 216(1)
  0150670  lwz 4, 120(3)
  0150674  ori 31, 3, 0
  0150678  lbz 3, 112(3)
  015067c  std 28, 192(1)
  0150680  rlwinm 3, 3, 0, 30, 30
  0150684  lwz 28, 0(4)
  0150688  cmpwi 3, 0
  015068c  std 30, 208(1)
  0150690  std 29, 200(1)
  0150694  std 27, 184(1)
  0150698  std 26, 176(1)
  015069c  lwz 28, 68(28)
  01506a0  bt 2, 0x1506c8
  01506a4  lbz 3, 83(31)
  01506a8  cmpwi 3, 1
  01506ac  bt 2, 0x1506c8
  01506b0  li 5, 0
  01506b4  li 4, 1
  01506b8  ori 3, 31, 0
  01506bc  ori 6, 5, 0
  01506c0  bl 0xfddc0
  01506c4  nop
  01506c8  li 3, 0
  01506cc  ori 30, 3, 0
  01506d0  sldi 4, 3, 4
  01506d4  lis 29, 114
  01506d8  subc 5, 3, 4
  01506dc  addic 29, 29, 4096
  01506e0  sldi 5, 5, 2
  01506e4  subc 4, 4, 5
  01506e8  lhz 5, 166(31)
  01506ec  extsw 4, 4
  01506f0  extsh 5, 5
  01506f4  addc 4, 29, 4
  01506f8  lwz 4, 16(4)
  01506fc  cmpw 4, 5
  0150700  bt 2, 0x150710
  0150704  addic 3, 3, 1
  0150708  cmpwi 3, 37
  015070c  bt 0, 0x1506d0
  0150710  sldi 4, 3, 4
  0150714  addic 26, 1, 112
  0150718  subc 3, 3, 4
  015071c  ori 5, 26, 0
  0150720  sldi 3, 3, 2
  0150724  subc 4, 4, 3
  0150728  ori 3, 28, 0
  015072c  extsw 4, 4
  0150730  addc 29, 29, 4
  0150734  lwz 4, 12(29)
  0150738  extsw 4, 4
  015073c  bl 0xf1038
  0150740  nop
  0150744  lfs 1, 160(1)
  0150748  lfs 2, 164(1)
  015074c  ori 3, 31, 0
  0150750  stfs 1, 16(31)
  0150754  lfs 1, 168(1)
  0150758  stfs 2, 20(31)
  015075c  lfs 2, 172(1)
  0150760  stfs 1, 24(31)
  0150764  stfs 2, 28(31)
  0150768  bl 0xf31a8
  015076c  nop
  0150770  lwz 29, 24(29)
  0150774  addic 27, 31, 192
  0150778  ori 4, 26, 0
  015077c  ori 3, 27, 0
  0150780  bl 0x500fa8
  0150784  nop
  0150788  cmpwi 29, 0
  015078c  bt 2, 0x15079c
  0150790  ori 3, 27, 0
  0150794  bl 0x10a788
  0150798  nop
  015079c  ori 3, 31, 0
  01507a0  bl 0xf30a0
  01507a4  nop
  01507a8  lis 27, 165
  01507ac  ori 26, 30, 0
  01507b0  addic 27, 27, 11680
  01507b4  lbz 3, 1(27)
  01507b8  cmpwi 3, 0
  01507bc  bt 2, 0x1507d4
  01507c0  li 26, 1
  01507c4  ori 3, 28, 0
  01507c8  ori 4, 27, 0
  01507cc  bl 0xf0f1c
  01507d0  nop
  01507d4  cmpwi 29, 0
  01507d8  bf 2, 0x150820
  01507dc  lis 3, 162
  01507e0  lis 5, 114
  01507e4  lwz 8, 36(31)
  01507e8  addic 29, 3, -18304
  01507ec  addic 3, 5, 6908
  01507f0  ori 6, 30, 0
  01507f4  ori 4, 29, 0
  01507f8  ori 7, 28, 0
  01507fc  ori 5, 8, 0
  0150800  bl 0x91090
  0150804  nop
  0150808  addic 3, 31, 80
  015080c  stw 29, 104(31)
  0150810  stw 29, 108(31)
  0150814  stw 30, 84(31)
  0150818  stw 30, 88(31)
  015081c  stw 30, 0(3)
  0150820  cmpwi 26, 0
  0150824  bt 2, 0x150854
  0150828  ori 3, 28, 0
  015082c  ori 4, 30, 0
  0150830  ori 5, 27, 0
  0150834  bl 0xf0ea8
  0150838  nop
  015083c  lis 3, 21
  0150840  addi 3, 3, 1628
  0150844  lfs 1, 0(3)
  0150848  stw 30, 32(27)
  015084c  stfs 1, 36(27)
  0150850  stfs 1, 40(27)
  0150854  ld 0, 240(1)
  0150858  mtlr 0
  015085c  ld 26, 176(1)
  0150860  ld 27, 184(1)
  0150864  ld 28, 192(1)
  0150868  ld 29, 200(1)
  015086c  ld 30, 208(1)
  0150870  ld 31, 216(1)
  0150874  addi 1, 1, 224
  0150878  blr

MenuHero_MobyUpdateB:   # 0x15087c, 0x134 bytes
  015087c  stdu 1, -208(1)
  0150880  mflr 0
  0150884  std 0, 224(1)
  0150888  std 31, 200(1)
  015088c  ori 31, 3, 0
  0150890  std 29, 184(1)
  0150894  lwz 4, 120(31)
  0150898  lwz 29, 0(4)
  015089c  std 30, 192(1)
  01508a0  std 28, 176(1)
  01508a4  lwz 29, 68(29)
  01508a8  bl 0xf98d8
  01508ac  nop
  01508b0  ori 3, 31, 0
  01508b4  bl 0xf31a8
  01508b8  nop
  01508bc  addic 30, 1, 112
  01508c0  li 4, 4
  01508c4  ori 3, 29, 0
  01508c8  ori 5, 30, 0
  01508cc  bl 0xf1038
  01508d0  nop
  01508d4  lfs 1, 160(1)
  01508d8  addic 28, 31, 192
  01508dc  lfs 2, 164(1)
  01508e0  ori 4, 30, 0
  01508e4  stfs 1, 16(31)
  01508e8  ori 3, 28, 0
  01508ec  lfs 1, 168(1)
  01508f0  stfs 2, 20(31)
  01508f4  lfs 2, 172(1)
  01508f8  stfs 1, 24(31)
  01508fc  stfs 2, 28(31)
  0150900  bl 0x500fa8
  0150904  nop
  0150908  ori 3, 28, 0
  015090c  bl 0x10a788
  0150910  nop
  0150914  ori 3, 31, 0
  0150918  bl 0xf30a0
  015091c  nop
  0150920  lhz 3, 166(31)
  0150924  lis 30, 162
  0150928  cmpwi 3, 433
  015092c  addic 30, 30, -17792
  0150930  bf 2, 0x150958
  0150934  lis 3, 114
  0150938  lwz 5, 36(31)
  015093c  li 6, 6
  0150940  addic 3, 3, 6980
  0150944  ori 4, 30, 0
  0150948  ori 7, 29, 0
  015094c  bl 0x91090
  0150950  nop
  0150954  b 0x150978
  0150958  lis 3, 114
  015095c  li 6, 0
  0150960  lwz 5, 36(31)
  0150964  ori 7, 29, 0
  0150968  addic 3, 3, 7048
  015096c  ori 4, 30, 0
  0150970  bl 0x91090
  0150974  nop
  0150978  li 3, 0
  015097c  addic 4, 31, 80
  0150980  stw 30, 104(31)
  0150984  stw 30, 108(31)
  0150988  stw 3, 84(31)
  015098c  stw 3, 0(4)
  0150990  ld 0, 224(1)
  0150994  mtlr 0
  0150998  ld 28, 176(1)
  015099c  ld 29, 184(1)
  01509a0  ld 30, 192(1)
  01509a4  ld 31, 200(1)
  01509a8  addi 1, 1, 208
  01509ac  blr

MenuHero_MobyUpdateC:   # 0x1509b8, 0x23c bytes
  01509b8  stdu 1, -240(1)
  01509bc  mflr 0
  01509c0  std 0, 256(1)
  01509c4  std 31, 232(1)
  01509c8  std 30, 224(1)
  01509cc  ori 31, 3, 0
  01509d0  std 25, 184(1)
  01509d4  lwz 30, 120(31)
  01509d8  lwz 25, 0(30)
  01509dc  std 29, 216(1)
  01509e0  std 28, 208(1)
  01509e4  std 27, 200(1)
  01509e8  std 26, 192(1)
  01509ec  std 24, 176(1)
  01509f0  lwz 25, 68(25)
  01509f4  bl 0xf98d8
  01509f8  nop
  01509fc  ori 3, 31, 0
  0150a00  bl 0xf31a8
  0150a04  nop
  0150a08  lwz 3, 0(30)
  0150a0c  li 27, 2
  0150a10  lwz 26, 92(3)
  0150a14  subc 26, 31, 26
  0150a18  cmpwi 26, 0
  0150a1c  bf 2, 0x150a24
  0150a20  li 27, 3
  0150a24  addic 30, 1, 112
  0150a28  ori 3, 25, 0
  0150a2c  ori 4, 27, 0
  0150a30  ori 5, 30, 0
  0150a34  bl 0xf1038
  0150a38  nop
  0150a3c  lfs 1, 160(1)
  0150a40  lfs 2, 164(1)
  0150a44  addic 29, 31, 192
  0150a48  stfs 1, 16(31)
  0150a4c  ori 4, 30, 0
  0150a50  lfs 1, 168(1)
  0150a54  ori 3, 29, 0
  0150a58  stfs 2, 20(31)
  0150a5c  lfs 2, 172(1)
  0150a60  stfs 1, 24(31)
  0150a64  stfs 2, 28(31)
  0150a68  bl 0x500fa8
  0150a6c  nop
  0150a70  ori 3, 29, 0
  0150a74  bl 0x10a788
  0150a78  nop
  0150a7c  ori 3, 31, 0
  0150a80  bl 0xf30a0
  0150a84  nop
  0150a88  lis 29, 165
  0150a8c  li 27, 0
  0150a90  addic 29, 29, 11808
  0150a94  ori 30, 27, 0
  0150a98  ori 28, 30, 0
  0150a9c  lbz 3, 1(29)
  0150aa0  cmpwi 3, 0
  0150aa4  bt 2, 0x150abc
  0150aa8  li 27, 1
  0150aac  ori 3, 25, 0
  0150ab0  ori 4, 29, 0
  0150ab4  bl 0xf0f1c
  0150ab8  nop
  0150abc  lis 24, 165
  0150ac0  addic 24, 24, 11744
  0150ac4  lbz 3, 1(24)
  0150ac8  cmpwi 3, 0
  0150acc  bt 2, 0x150ae4
  0150ad0  li 28, 1
  0150ad4  ori 3, 25, 0
  0150ad8  ori 4, 24, 0
  0150adc  bl 0xf0f1c
  0150ae0  nop
  0150ae4  cmpwi 26, 0
  0150ae8  bt 2, 0x150b20
  0150aec  lis 3, 162
  0150af0  lis 4, 114
  0150af4  lwz 5, 36(31)
  0150af8  addic 26, 3, -17280
  0150afc  addic 3, 4, 7064
  0150b00  ori 4, 26, 0
  0150b04  ori 6, 30, 0
  0150b08  ori 7, 25, 0
  0150b0c  bl 0x91090
  0150b10  nop
  0150b14  stw 26, 104(31)
  0150b18  stw 26, 108(31)
  0150b1c  b 0x150b50
  0150b20  lis 3, 162
  0150b24  lis 5, 114
  0150b28  addic 26, 3, -17024
  0150b2c  addic 3, 5, 7088
  0150b30  lwz 5, 36(31)
  0150b34  ori 4, 26, 0
  0150b38  ori 6, 30, 0
  0150b3c  ori 7, 25, 0
  0150b40  bl 0x91090
  0150b44  nop
  0150b48  stw 26, 104(31)
  0150b4c  stw 26, 108(31)
  0150b50  cmpwi 27, 0
  0150b54  bt 2, 0x150b84
  0150b58  ori 3, 25, 0
  0150b5c  li 4, 23
  0150b60  ori 5, 29, 0
  0150b64  bl 0xf0ea8
  0150b68  nop
  0150b6c  lis 3, 21
  0150b70  addi 3, 3, 2480
  0150b74  lfs 1, 0(3)
  0150b78  stw 30, 32(29)
  0150b7c  stfs 1, 36(29)
  0150b80  stfs 1, 40(29)
  0150b84  cmpwi 28, 0
  0150b88  bt 2, 0x150bb8
  0150b8c  ori 3, 25, 0
  0150b90  li 4, 22
  0150b94  ori 5, 24, 0
  0150b98  bl 0xf0ea8
  0150b9c  nop
  0150ba0  lis 3, 21
  0150ba4  addi 3, 3, 2480
  0150ba8  lfs 1, 0(3)
  0150bac  stw 30, 32(24)
  0150bb0  stfs 1, 36(24)
  0150bb4  stfs 1, 40(24)
  0150bb8  addic 3, 31, 80
  0150bbc  stw 30, 84(31)
  0150bc0  stw 30, 0(3)
  0150bc4  ld 0, 256(1)
  0150bc8  mtlr 0
  0150bcc  ld 24, 176(1)
  0150bd0  ld 25, 184(1)
  0150bd4  ld 26, 192(1)
  0150bd8  ld 27, 200(1)
  0150bdc  ld 28, 208(1)
  0150be0  ld 29, 216(1)
  0150be4  ld 30, 224(1)
  0150be8  ld 31, 232(1)
  0150bec  addi 1, 1, 240
  0150bf0  blr

MenuHero_MobyUpdateD:   # 0x150bf4, 0x184 bytes
  0150bf4  stdu 1, -208(1)
  0150bf8  mflr 0
  0150bfc  std 0, 224(1)
  0150c00  std 31, 200(1)
  0150c04  lwz 4, 120(3)
  0150c08  ori 31, 3, 0
  0150c0c  lbz 3, 112(3)
  0150c10  std 30, 192(1)
  0150c14  rlwinm 3, 3, 0, 30, 30
  0150c18  lwz 30, 0(4)
  0150c1c  cmpwi 3, 0
  0150c20  std 29, 184(1)
  0150c24  lwz 30, 68(30)
  0150c28  bt 2, 0x150cf8
  0150c2c  lhz 3, 166(31)
  0150c30  cmpwi 3, 607
  0150c34  bf 2, 0x150cd4
  0150c38  lbz 3, 82(31)
  0150c3c  cmpwi 3, 6
  0150c40  bf 2, 0x150cac
  0150c44  lbz 3, 32(31)
  0150c48  addic 3, 3, -1
  0150c4c  clrlwi 4, 3, 24
  0150c50  cmpwi 4, 0
  0150c54  stb 3, 32(31)
  0150c58  bf 2, 0x150c84
  0150c5c  lbz 3, 83(31)
  0150c60  cmpwi 3, 1
  0150c64  bt 2, 0x150cd0
  0150c68  li 4, 1
  0150c6c  li 6, 10
  0150c70  li 5, 0
  0150c74  ori 3, 31, 0
  0150c78  bl 0xfddc0
  0150c7c  nop
  0150c80  b 0x150cd0
  0150c84  lbz 3, 83(31)
  0150c88  cmpwi 3, 6
  0150c8c  bt 2, 0x150cd0
  0150c90  li 5, 0
  0150c94  li 4, 6
  0150c98  ori 3, 31, 0
  0150c9c  ori 6, 5, 0
  0150ca0  bl 0xfddc0
  0150ca4  nop
  0150ca8  b 0x150cd0
  0150cac  lbz 3, 83(31)
  0150cb0  cmpwi 3, 1
  0150cb4  bt 2, 0x150cd0
  0150cb8  li 5, 0
  0150cbc  li 4, 1
  0150cc0  ori 3, 31, 0
  0150cc4  ori 6, 5, 0
  0150cc8  bl 0xfddc0
  0150ccc  nop
  0150cd0  b 0x150cf8
  0150cd4  lbz 3, 83(31)
  0150cd8  cmpwi 3, 1
  0150cdc  bt 2, 0x150cf8
  0150ce0  li 5, 0
  0150ce4  li 4, 1
  0150ce8  ori 3, 31, 0
  0150cec  ori 6, 5, 0
  0150cf0  bl 0xfddc0
  0150cf4  nop
  0150cf8  addic 29, 1, 112
  0150cfc  li 4, 5
  0150d00  ori 3, 30, 0
  0150d04  ori 5, 29, 0
  0150d08  bl 0xf1038
  0150d0c  nop
  0150d10  lfs 1, 160(1)
  0150d14  addic 30, 31, 192
  0150d18  lfs 2, 164(1)
  0150d1c  ori 4, 29, 0
  0150d20  stfs 1, 16(31)
  0150d24  ori 3, 30, 0
  0150d28  lfs 1, 168(1)
  0150d2c  stfs 2, 20(31)
  0150d30  lfs 2, 172(1)
  0150d34  stfs 1, 24(31)
  0150d38  stfs 2, 28(31)
  0150d3c  bl 0x500fa8
  0150d40  nop
  0150d44  ori 3, 30, 0
  0150d48  bl 0x10a788
  0150d4c  nop
  0150d50  ori 3, 31, 0
  0150d54  bl 0xf30a0
  0150d58  nop
  0150d5c  ld 0, 224(1)
  0150d60  mtlr 0
  0150d64  ld 29, 184(1)
  0150d68  ld 30, 192(1)
  0150d6c  ld 31, 200(1)
  0150d70  addi 1, 1, 208
  0150d74  blr

MenuHero_MobyUpdateE:   # 0x150d78, 0xd0 bytes
  0150d78  stdu 1, -208(1)
  0150d7c  mflr 0
  0150d80  std 0, 224(1)
  0150d84  std 31, 200(1)
  0150d88  ori 31, 3, 0
  0150d8c  std 30, 192(1)
  0150d90  lwz 4, 120(31)
  0150d94  lwz 30, 0(4)
  0150d98  std 29, 184(1)
  0150d9c  lwz 30, 68(30)
  0150da0  bl 0xf98d8
  0150da4  nop
  0150da8  ori 3, 31, 0
  0150dac  bl 0xf31a8
  0150db0  nop
  0150db4  lhz 4, 166(31)
  0150db8  li 3, 29
  0150dbc  cmpwi 4, 407
  0150dc0  bf 2, 0x150dc8
  0150dc4  li 3, 30
  0150dc8  addic 29, 1, 112
  0150dcc  ori 4, 3, 0
  0150dd0  ori 3, 30, 0
  0150dd4  ori 5, 29, 0
  0150dd8  bl 0xf1038
  0150ddc  nop
  0150de0  lfs 1, 160(1)
  0150de4  lfs 2, 164(1)
  0150de8  addic 30, 31, 192
  0150dec  stfs 1, 16(31)
  0150df0  ori 4, 29, 0
  0150df4  lfs 1, 168(1)
  0150df8  ori 3, 30, 0
  0150dfc  stfs 2, 20(31)
  0150e00  lfs 2, 172(1)
  0150e04  stfs 1, 24(31)
  0150e08  stfs 2, 28(31)
  0150e0c  bl 0x500fa8
  0150e10  nop
  0150e14  ori 3, 30, 0
  0150e18  bl 0x10a788
  0150e1c  nop
  0150e20  ori 3, 31, 0
  0150e24  bl 0xf30a0
  0150e28  nop
  0150e2c  ld 0, 224(1)
  0150e30  mtlr 0
  0150e34  ld 29, 184(1)
  0150e38  ld 30, 192(1)
  0150e3c  ld 31, 200(1)
  0150e40  addi 1, 1, 208
  0150e44  blr

MenuHero_MobyUpdateF:   # 0x150e88, 0x554 bytes
  0150e88  stdu 1, -288(1)
  0150e8c  mflr 0
  0150e90  std 0, 304(1)
  0150e94  stfd 27, 248(1)
  0150e98  stfd 28, 256(1)
  0150e9c  stfd 29, 264(1)
  0150ea0  stfd 30, 272(1)
  0150ea4  stfd 31, 280(1)
  0150ea8  std 31, 240(1)
  0150eac  ori 31, 3, 0
  0150eb0  std 30, 232(1)
  0150eb4  lwz 4, 120(31)
  0150eb8  lwz 30, 0(4)
  0150ebc  std 29, 224(1)
  0150ec0  std 28, 216(1)
  0150ec4  std 27, 208(1)
  0150ec8  std 26, 200(1)
  0150ecc  std 25, 192(1)
  0150ed0  lwz 30, 68(30)
  0150ed4  bl 0xf98d8
  0150ed8  nop
  0150edc  ori 3, 31, 0
  0150ee0  bl 0xf31a8
  0150ee4  nop
  0150ee8  lfs 1, 16(30)
  0150eec  addic 28, 31, 192
  0150ef0  lfs 2, 20(30)
  0150ef4  addic 4, 30, 192
  0150ef8  stfs 1, 16(31)
  0150efc  ori 3, 28, 0
  0150f00  lfs 1, 24(30)
  0150f04  stfs 2, 20(31)
  0150f08  lfs 2, 28(30)
  0150f0c  stfs 1, 24(31)
  0150f10  stfs 2, 28(31)
  0150f14  bl 0x500fa8
  0150f18  nop
  0150f1c  ori 3, 28, 0
  0150f20  bl 0x10a788
  0150f24  nop
  0150f28  lwz 3, 36(31)
  0150f2c  lbz 29, 188(31)
  0150f30  cmpwi 29, 3
  0150f34  lfs 1, 36(3)
  0150f38  stfs 1, 44(31)
  0150f3c  bf 0, 0x150f64
  0150f40  slwi 29, 29, 1
  0150f44  addic 3, 29, 1
  0150f48  mulli 3, 3, 341
  0150f4c  srwi 3, 3, 11
  0150f50  addc 4, 3, 3
  0150f54  addc 3, 3, 4
  0150f58  addc 3, 3, 3
  0150f5c  subc 29, 29, 3
  0150f60  b 0x150f88
  0150f64  slwi 3, 29, 1
  0150f68  addic 4, 3, 2
  0150f6c  mulli 4, 4, 341
  0150f70  addic 29, 3, 1
  0150f74  srwi 3, 4, 11
  0150f78  addc 4, 3, 3
  0150f7c  addc 3, 3, 4
  0150f80  addc 3, 3, 3
  0150f84  subc 29, 29, 3
  0150f88  li 3, 200
  0150f8c  bl 0x502730
  0150f90  nop
  0150f94  lis 27, 346
  0150f98  lis 3, 20971
  0150f9c  ori 3, 3, 34079
  0150fa0  lwz 4, -15568(27)
  0150fa4  mulhw 3, 3, 4
  0150fa8  srawi 3, 3, 6
  0150fac  srwi 5, 3, 31
  0150fb0  addc 3, 3, 5
  0150fb4  sldi 5, 3, 6
  0150fb8  addc 3, 3, 3
  0150fbc  addc 3, 5, 3
  0150fc0  sldi 3, 3, 2
  0150fc4  subc 3, 3, 5
  0150fc8  subc 3, 4, 3
  0150fcc  extsw 3, 3
  0150fd0  std 3, 176(1)
  0150fd4  lis 3, 21
  0150fd8  addi 26, 3, 3656
  0150fdc  li 25, 6
  0150fe0  lfs 2, 0(26)
  0150fe4  lfd 3, 176(1)
  0150fe8  fcfid 3, 3
  0150fec  ori 3, 25, 0
  0150ff0  fmr 31, 2
  0150ff4  frsp 3, 3
  0150ff8  fdivs 1, 3, 1
  0150ffc  lfs 3, 4(26)
  0151000  fmr 30, 3
  0151004  fmuls 1, 1, 31
  0151008  fsubs 29, 1, 30
  015100c  bl 0x502730
  0151010  nop
  0151014  extsw 3, 29
  0151018  std 3, 176(1)
  015101c  li 3, 170
  0151020  lfd 2, 176(1)
  0151024  fcfid 2, 2
  0151028  frsp 28, 2
  015102c  fmuls 2, 28, 31
  0151030  fdivs 1, 2, 1
  0151034  fsubs 27, 1, 30
  0151038  bl 0x502730
  015103c  nop
  0151040  lis 3, 24672
  0151044  lwz 4, -15568(27)
  0151048  ori 3, 3, 24673
  015104c  mulhw 3, 3, 4
  0151050  srawi 3, 3, 6
  0151054  srwi 5, 3, 31
  0151058  addc 3, 3, 5
  015105c  sldi 5, 3, 5
  0151060  addc 5, 3, 5
  0151064  addc 3, 3, 5
  0151068  sldi 5, 3, 2
  015106c  addc 3, 3, 5
  0151070  subc 3, 4, 3
  0151074  extsw 3, 3
  0151078  std 3, 176(1)
  015107c  ori 3, 25, 0
  0151080  lfd 2, 176(1)
  0151084  fcfid 2, 2
  0151088  frsp 2, 2
  015108c  fdivs 1, 2, 1
  0151090  fmuls 1, 1, 31
  0151094  fsubs 30, 1, 30
  0151098  bl 0x502730
  015109c  nop
  01510a0  lfs 2, 8(26)
  01510a4  fmuls 2, 28, 2
  01510a8  fdivs 28, 2, 1
  01510ac  fmr 1, 28
  01510b0  bl 0x502648
  01510b4  nop
  01510b8  fmr 1, 29
  01510bc  fmr 2, 27
  01510c0  bl 0x502578
  01510c4  nop
  01510c8  fmr 31, 1
  01510cc  fmr 1, 30
  01510d0  fmr 2, 28
  01510d4  bl 0x502578
  01510d8  nop
  01510dc  lfs 29, 12(26)
  01510e0  lis 29, 165
  01510e4  lbz 3, 188(31)
  01510e8  fmr 30, 1
  01510ec  addic 29, 29, 11884
  01510f0  slwi 4, 3, 2
  01510f4  lfsx 1, 29, 4
  01510f8  fcmpu 0, 1, 29
  01510fc  bt 2, 0x151150
  0151100  lis 5, 21
  0151104  fmr 1, 29
  0151108  lis 6, 114
  015110c  addi 5, 5, 3656
  0151110  lis 8, 114
  0151114  lis 7, 165
  0151118  rlwinm 3, 3, 2, 22, 29
  015111c  addic 7, 7, 11908
  0151120  lfs 4, 20(5)
  0151124  addc 3, 29, 3
  0151128  lfs 2, 16(5)
  015112c  lfs 3, -3048(6)
  0151130  addc 5, 7, 4
  0151134  lfs 5, -3052(8)
  0151138  fmuls 3, 3, 4
  015113c  clrldi 3, 3, 32
  0151140  clrldi 5, 5, 32
  0151144  fmuls 4, 5, 4
  0151148  bl 0x109c30
  015114c  nop
  0151150  lis 3, 21
  0151154  addi 3, 3, 3656
  0151158  lfs 2, 24(3)
  015115c  lfs 1, 28(3)
  0151160  fadds 2, 31, 2
  0151164  fmr 3, 2
  0151168  fsubs 4, 1, 3
  015116c  fcmpu 0, 3, 4
  0151170  bt 0, 0x151178
  0151174  fmr 3, 4
  0151178  fmr 4, 2
  015117c  lis 3, 21
  0151180  addi 3, 3, 3656
  0151184  lfs 2, 32(3)
  0151188  fsubs 4, 2, 4
  015118c  fcmpu 0, 3, 4
  0151190  bt 1, 0x151198
  0151194  fmr 3, 4
  0151198  fmuls 10, 3, 3
  015119c  lis 3, 21
  01511a0  fmr 4, 31
  01511a4  addi 3, 3, 3656
  01511a8  lfs 6, 36(3)
  01511ac  lfs 7, 40(3)
  01511b0  lfs 8, 44(3)
  01511b4  fmuls 9, 10, 3
  01511b8  fsubs 5, 1, 4
  01511bc  fmuls 12, 10, 9
  01511c0  fmuls 13, 9, 6
  01511c4  fcmpu 0, 4, 5
  01511c8  lfs 9, 48(3)
  01511cc  fmuls 11, 10, 12
  01511d0  fadds 3, 3, 13
  01511d4  fmuls 12, 12, 7
  01511d8  fmuls 10, 10, 11
  01511dc  fmuls 11, 11, 8
  01511e0  fadds 3, 3, 12
  01511e4  fmuls 10, 10, 9
  01511e8  fadds 3, 3, 11
  01511ec  fadds 3, 3, 10
  01511f0  bt 0, 0x1511f8
  01511f4  fmr 4, 5
  01511f8  fsubs 5, 2, 31
  01511fc  fcmpu 0, 4, 5
  0151200  bt 1, 0x151208
  0151204  fmr 4, 5
  0151208  fmuls 10, 4, 4
  015120c  fmr 5, 1
  0151210  fmr 1, 30
  0151214  fmuls 11, 10, 4
  0151218  fsubs 5, 5, 1
  015121c  fmuls 12, 10, 11
  0151220  fmuls 11, 11, 6
  0151224  fcmpu 0, 1, 5
  0151228  fmuls 13, 10, 12
  015122c  fadds 4, 4, 11
  0151230  fmuls 11, 12, 7
  0151234  fmuls 10, 10, 13
  0151238  fmuls 12, 13, 8
  015123c  fadds 4, 4, 11
  0151240  fmuls 10, 10, 9
  0151244  fadds 4, 4, 12
  0151248  fadds 4, 4, 10
  015124c  bt 0, 0x151254
  0151250  fmr 1, 5
  0151254  fsubs 2, 2, 30
  0151258  fcmpu 0, 1, 2
  015125c  bt 1, 0x151264
  0151260  fmr 1, 2
  0151264  fmuls 2, 1, 1
  0151268  lis 3, 21
  015126c  addi 3, 3, 3656
  0151270  fmuls 5, 2, 1
  0151274  fmuls 10, 2, 5
  0151278  fmuls 5, 5, 6
  015127c  lfs 6, 52(3)
  0151280  fmuls 11, 2, 10
  0151284  fadds 1, 1, 5
  0151288  fmuls 5, 10, 7
  015128c  fmuls 2, 2, 11
  0151290  fmuls 8, 11, 8
  0151294  fadds 1, 1, 5
  0151298  lfs 5, 56(3)
  015129c  lbz 4, 188(31)
  01512a0  lfs 7, 192(30)
  01512a4  slwi 4, 4, 2
  01512a8  fmuls 7, 7, 3
  01512ac  fmuls 2, 2, 9
  01512b0  fadds 1, 1, 8
  01512b4  lfs 8, 208(30)
  01512b8  fmuls 8, 8, 4
  01512bc  fadds 1, 1, 2
  01512c0  lfsx 2, 29, 4
  01512c4  lfs 9, 196(30)
  01512c8  lfs 10, 212(30)
  01512cc  fadds 7, 7, 8
  01512d0  fmuls 9, 9, 3
  01512d4  lfs 11, 200(30)
  01512d8  fmuls 10, 10, 4
  01512dc  fmuls 3, 11, 3
  01512e0  fmuls 1, 1, 6
  01512e4  lfs 6, 216(30)
  01512e8  lfs 11, 224(30)
  01512ec  fmuls 4, 6, 4
  01512f0  lfs 6, 228(30)
  01512f4  fadds 9, 9, 10
  01512f8  lfs 8, 232(30)
  01512fc  fadds 1, 1, 5
  0151300  fadds 3, 3, 4
  0151304  lfs 4, 16(31)
  0151308  lfs 5, 20(31)
  015130c  fadds 1, 1, 2
  0151310  lfs 2, 24(31)
  0151314  stfs 29, 124(1)
  0151318  stfs 29, 120(1)
  015131c  stfs 29, 116(1)
  0151320  stfs 29, 112(1)
  0151324  fmuls 10, 11, 1
  0151328  fmuls 6, 6, 1
  015132c  fmuls 8, 8, 1
  0151330  fmr 1, 31
  0151334  fadds 7, 7, 10
  0151338  fadds 6, 9, 6
  015133c  fadds 3, 3, 8
  0151340  fadds 4, 4, 7
  0151344  fadds 5, 5, 6
  0151348  fadds 2, 2, 3
  015134c  stfs 4, 16(31)
  0151350  stfs 5, 20(31)
  0151354  stfs 2, 24(31)
  0151358  lfs 2, 60(3)
  015135c  bl 0x502578
  0151360  nop
  0151364  addic 30, 1, 128
  0151368  stfs 1, 120(1)
  015136c  addic 4, 1, 112
  0151370  ori 3, 30, 0
  0151374  bl 0x500b64
  0151378  nop
  015137c  ori 3, 28, 0
  0151380  ori 4, 30, 0
  0151384  ori 5, 28, 0
  0151388  bl 0x5014d4
  015138c  nop
  0151390  ori 3, 31, 0
  0151394  bl 0xf30a0
  0151398  nop
  015139c  ld 0, 304(1)
  01513a0  mtlr 0
  01513a4  lfd 27, 248(1)
  01513a8  lfd 28, 256(1)
  01513ac  lfd 29, 264(1)
  01513b0  lfd 30, 272(1)
  01513b4  lfd 31, 280(1)
  01513b8  ld 25, 192(1)
  01513bc  ld 26, 200(1)
  01513c0  ld 27, 208(1)
  01513c4  ld 28, 216(1)
  01513c8  ld 29, 224(1)
  01513cc  ld 30, 232(1)
  01513d0  ld 31, 240(1)
  01513d4  addi 1, 1, 288
  01513d8  blr

Spawn_Moby1957_HelpdeskLady:   # 0x1513e8, 0x160 bytes
  01513e8  stdu 1, -144(1)
  01513ec  mflr 0
  01513f0  std 0, 160(1)
  01513f4  std 31, 136(1)
  01513f8  lis 4, 163
  01513fc  ori 31, 3, 0
  0151400  addic 3, 4, 21696
  0151404  lbz 3, 1957(3)
  0151408  std 30, 128(1)
  015140c  std 29, 120(1)
  0151410  cmpwi 3, 255
  0151414  bf 2, 0x151420
  0151418  li 30, 0
  015141c  b 0x151480
  0151420  li 3, 1957
  0151424  bl 0xefa28
  0151428  nop
  015142c  ori 30, 3, 0
  0151430  cmpwi 30, 0
  0151434  bt 2, 0x151480
  0151438  li 4, 255
  015143c  li 5, 1
  0151440  li 29, 0
  0151444  ori 3, 30, 0
  0151448  stb 4, 48(30)
  015144c  sth 4, 50(30)
  0151450  stb 5, 49(30)
  0151454  stb 29, 32(30)
  0151458  bl 0xf31a8
  015145c  nop
  0151460  lis 4, 32
  0151464  li 5, 14
  0151468  ori 7, 29, 0
  015146c  ori 4, 4, 8224
  0151470  ori 3, 30, 0
  0151474  ori 6, 5, 0
  0151478  bl 0xf1ea0
  015147c  nop
  0151480  li 3, 0
  0151484  cmpwi 30, 0
  0151488  stw 3, 52(31)
  015148c  bt 2, 0x1514fc
  0151490  lis 4, 21
  0151494  stw 30, 68(31)
  0151498  lis 5, 149
  015149c  sth 3, 52(30)
  01514a0  addi 4, 4, 5084
  01514a4  addic 5, 5, 5056
  01514a8  lis 6, 16457
  01514ac  lis 7, 112
  01514b0  ori 6, 6, 4059
  01514b4  lfs 1, 0(4)
  01514b8  lfs 2, 320(5)
  01514bc  addic 7, 7, 31040
  01514c0  lwz 8, 120(30)
  01514c4  fadds 1, 2, 1
  01514c8  stfs 1, 16(30)
  01514cc  lfs 1, 324(5)
  01514d0  stfs 1, 20(30)
  01514d4  lfs 1, 4(4)
  01514d8  lfs 2, 328(5)
  01514dc  stw 6, 72(30)
  01514e0  fadds 1, 2, 1
  01514e4  stw 7, 116(30)
  01514e8  stfs 1, 24(30)
  01514ec  stw 31, 0(8)
  01514f0  stw 3, 4(8)
  01514f4  stw 3, 8(8)
  01514f8  b 0x151504
  01514fc  li 4, 3
  0151500  stw 4, 52(31)
  0151504  ori 4, 3, 0
  0151508  li 3, 1
  015150c  std 4, 112(1)
  0151510  bl 0x148538
  0151514  cmpwi 3, 0
  0151518  stw 3, 60(31)
  015151c  ld 3, 112(1)
  0151520  bf 2, 0x15152c
  0151524  li 4, 3
  0151528  stw 4, 52(31)
  015152c  ld 0, 160(1)
  0151530  mtlr 0
  0151534  ld 29, 120(1)
  0151538  ld 30, 128(1)
  015153c  ld 31, 136(1)
  0151540  addi 1, 1, 144
  0151544  blr

GameComplete_OnExit:   # 0x151548, 0x16c bytes
  0151548  stdu 1, -160(1)
  015154c  mflr 0
  0151550  std 0, 176(1)
  0151554  std 26, 112(1)
  0151558  std 30, 144(1)
  015155c  li 26, 0
  0151560  std 31, 152(1)
  0151564  ori 30, 3, 0
  0151568  std 29, 136(1)
  015156c  std 28, 128(1)
  0151570  std 27, 120(1)
  0151574  ori 31, 26, 0
  0151578  ori 29, 31, 0
  015157c  addic 3, 30, 68
  0151580  addc 27, 3, 29
  0151584  clrldi 27, 27, 32
  0151588  lwz 28, 0(27)
  015158c  cmpwi 28, 0
  0151590  bt 2, 0x1515b8
  0151594  ori 3, 28, 0
  0151598  bl 0xefb38
  015159c  nop
  01515a0  lis 3, 161
  01515a4  lwz 3, 1808(3)
  01515a8  extsw 3, 3
  01515ac  std 3, 56(28)
  01515b0  ori 28, 31, 0
  01515b4  b 0x1515b8
  01515b8  addic 26, 26, 1
  01515bc  addic 29, 29, 4
  01515c0  stw 28, 0(27)
  01515c4  cmpwi 26, 24
  01515c8  bt 0, 0x15157c
  01515cc  ori 4, 31, 0
  01515d0  lwz 5, 60(30)
  01515d4  lis 3, 165
  01515d8  slwi 28, 4, 3
  01515dc  addic 3, 3, 12440
  01515e0  extsw 28, 28
  01515e4  lwzx 6, 3, 28
  01515e8  cmpw 6, 5
  01515ec  bf 2, 0x151654
  01515f0  addc 6, 3, 28
  01515f4  addic 29, 3, 4
  01515f8  lwz 3, 4(6)
  01515fc  rlwinm 3, 3, 0, 30, 30
  0151600  cmpwi 3, 0
  0151604  bt 2, 0x151654
  0151608  lwzx 3, 29, 28
  015160c  rlwinm 3, 3, 0, 29, 29
  0151610  cmpwi 3, 0
  0151614  bt 2, 0x151644
  0151618  lis 27, 165
  015161c  lwzx 3, 29, 28
  0151620  addic 27, 27, 11184
  0151624  xori 3, 3, 4
  0151628  lbz 4, 203(27)
  015162c  stwx 3, 29, 28
  0151630  cmpwi 4, 0
  0151634  bt 2, 0x151644
  0151638  bl 0x11d9e0
  015163c  nop
  0151640  stb 31, 203(27)
  0151644  lwzx 3, 29, 28
  0151648  rlwimi 3, 31, 0, 30, 30
  015164c  stwx 3, 29, 28
  0151650  b 0x151660
  0151654  addic 4, 4, 1
  0151658  cmpwi 4, 5
  015165c  bt 0, 0x1515d4
  0151660  lis 3, 150
  0151664  stw 31, 60(30)
  0151668  addic 30, 3, 14024
  015166c  lhz 3, 102(30)
  0151670  cmpwi 3, 6
  0151674  bt 2, 0x151688
  0151678  cmpwi 3, 7
  015167c  bt 2, 0x151688
  0151680  li 3, 5
  0151684  sth 3, 102(30)
  0151688  ori 3, 31, 0
  015168c  ld 0, 176(1)
  0151690  mtlr 0
  0151694  ld 26, 112(1)
  0151698  ld 27, 120(1)
  015169c  ld 28, 128(1)
  01516a0  ld 29, 136(1)
  01516a4  ld 30, 144(1)
  01516a8  ld 31, 152(1)
  01516ac  addi 1, 1, 160
  01516b0  blr

M1957_Update_GirlwadOnGameComplete:   # 0x1516c0, 0x608 bytes
  01516c0  stdu 1, -192(1)
  01516c4  mflr 0
  01516c8  std 0, 208(1)
  01516cc  std 31, 184(1)
  01516d0  ori 31, 3, 0
  01516d4  lwz 3, 52(31)
  01516d8  cmpwi 3, 0
  01516dc  cmpwi 1, 3, -1
  01516e0  cmpwi 6, 3, 1
  01516e4  std 30, 176(1)
  01516e8  std 29, 168(1)
  01516ec  std 28, 160(1)
  01516f0  std 27, 152(1)
  01516f4  cmpwi 7, 3, 2
  01516f8  bt 1, 0x151704
  01516fc  bf 5, 0x151c98
  0151700  b 0x151710
  0151704  bf 25, 0x1517d0
  0151708  bf 29, 0x1518a8
  015170c  b 0x151c98
  0151710  lis 3, 150
  0151714  addic 3, 3, 14024
  0151718  lhz 3, 8(3)
  015171c  cmpwi 3, 0
  0151720  bf 2, 0x151ca0
  0151724  lis 3, 271
  0151728  lis 4, 4
  015172c  addic 3, 3, -29120
  0151730  ori 30, 4, 61440
  0151734  lis 4, 101
  0151738  addic 4, 4, 14068
  015173c  lwz 3, 5652(3)
  0151740  lwz 5, 60(31)
  0151744  slwi 3, 3, 11
  0151748  subc 30, 30, 3
  015174c  addc 3, 5, 30
  0151750  clrldi 3, 3, 32
  0151754  bl 0x5034c4
  0151758  nop
  015175c  cmpwi 3, 0
  0151760  bt 2, 0x1517c4
  0151764  lis 4, 165
  0151768  li 3, 1
  015176c  addic 4, 4, 11184
  0151770  stw 3, 52(31)
  0151774  stw 30, 64(31)
  0151778  stb 3, 203(4)
  015177c  lwz 3, 60(31)
  0151780  li 31, 0
  0151784  lis 5, 165
  0151788  slwi 4, 31, 3
  015178c  addic 5, 5, 12440
  0151790  extsw 4, 4
  0151794  lwzx 6, 5, 4
  0151798  cmpw 6, 3
  015179c  bf 2, 0x1517b4
  01517a0  addc 3, 5, 4
  01517a4  lwz 4, 4(3)
  01517a8  ori 4, 4, 4
  01517ac  stw 4, 4(3)
  01517b0  b 0x1517c0
  01517b4  addic 31, 31, 1
  01517b8  cmpwi 31, 5
  01517bc  bt 0, 0x151784
  01517c0  b 0x151ca0
  01517c4  li 3, 3
  01517c8  stw 3, 52(31)
  01517cc  b 0x151ca0
  01517d0  lis 3, 150
  01517d4  addic 3, 3, 14024
  01517d8  lhz 3, 8(3)
  01517dc  cmpwi 3, 0
  01517e0  bf 2, 0x151ca0
  01517e4  lis 3, 165
  01517e8  li 30, 0
  01517ec  addic 3, 3, 11184
  01517f0  stb 30, 203(3)
  01517f4  lwz 4, 60(31)
  01517f8  lwz 5, 64(31)
  01517fc  addc 3, 4, 5
  0151800  clrldi 3, 3, 32
  0151804  bl 0xe9150
  0151808  nop
  015180c  lis 4, 163
  0151810  lwz 28, 60(31)
  0151814  ori 3, 30, 0
  0151818  addic 29, 4, 21696
  015181c  lbz 29, 1957(29)
  0151820  lis 4, 163
  0151824  slwi 5, 29, 2
  0151828  addic 6, 4, 19456
  015182c  addic 27, 3, 1
  0151830  lwz 3, 60(31)
  0151834  extsw 4, 27
  0151838  lwzx 7, 6, 5
  015183c  slwi 9, 4, 2
  0151840  lwzx 8, 28, 30
  0151844  addic 7, 7, 72
  0151848  addc 3, 3, 8
  015184c  addc 7, 7, 9
  0151850  clrldi 7, 7, 32
  0151854  stw 3, 0(7)
  0151858  lwzx 3, 6, 5
  015185c  bl 0xdcb64
  0151860  nop
  0151864  ori 3, 27, 0
  0151868  addic 30, 30, 8
  015186c  cmpwi 3, 3
  0151870  bt 0, 0x151820
  0151874  li 4, 2
  0151878  lis 5, 151
  015187c  li 3, 4
  0151880  stw 4, 52(31)
  0151884  lwz 4, -13828(5)
  0151888  cmpwi 4, 0
  015188c  bf 2, 0x151894
  0151890  li 3, 0
  0151894  lwz 5, 68(31)
  0151898  li 4, 0
  015189c  stb 3, 32(5)
  01518a0  stb 4, 188(5)
  01518a4  b 0x151ca0
  01518a8  lwz 31, 68(31)
  01518ac  lbz 3, 32(31)
  01518b0  cmpwi 3, 6
  01518b4  cmpwi 6, 3, 5
  01518b8  bt 2, 0x151b50
  01518bc  cmpwi 1, 3, 4
  01518c0  bt 26, 0x151ab4
  01518c4  cmpwi 6, 3, 3
  01518c8  bt 6, 0x1518e8
  01518cc  cmpwi 1, 3, 2
  01518d0  bt 26, 0x151ab4
  01518d4  cmpwi 6, 3, 1
  01518d8  bt 6, 0x1518e8
  01518dc  cmpwi 1, 3, 0
  01518e0  bt 26, 0x151ab4
  01518e4  bf 6, 0x151c94
  01518e8  lis 4, 151
  01518ec  srwi 3, 3, 1
  01518f0  lwz 5, -25484(4)
  01518f4  addic 5, 5, -1
  01518f8  cmpwi 5, 0
  01518fc  bf 0, 0x151904
  0151900  li 5, 0
  0151904  lbz 4, 188(31)
  0151908  cmpwi 4, 0
  015190c  bf 2, 0x151938
  0151910  addc 6, 3, 3
  0151914  lis 7, 0
  0151918  addc 6, 3, 6
  015191c  lis 8, 150
  0151920  addc 6, 6, 6
  0151924  ori 7, 7, 60000
  0151928  addc 5, 6, 5
  015192c  addic 8, 8, 14024
  0151930  addc 5, 5, 7
  0151934  stw 5, 28(8)
  0151938  lis 5, 21
  015193c  addic 6, 4, 1
  0151940  addi 5, 5, 5812
  0151944  lis 4, 114
  0151948  stb 6, 188(31)
  015194c  lfs 1, 0(5)
  0151950  lfs 2, -3056(4)
  0151954  clrlwi 5, 6, 24
  0151958  fmuls 2, 2, 1
  015195c  fctiwz 2, 2
  0151960  stfd 2, 128(1)
  0151964  lwz 6, 132(1)
  0151968  cmpw 5, 6
  015196c  bf 1, 0x151a34
  0151970  lfs 2, -3056(4)
  0151974  li 0, 112
  0151978  fmuls 2, 2, 1
  015197c  fctiwz 2, 2
  0151980  stfd 2, 128(1)
  0151984  lwz 5, 132(1)
  0151988  stw 5, 112(1)
  015198c  stw 5, 116(1)
  0151990  stw 5, 120(1)
  0151994  stw 5, 124(1)
  0151998  lvx 2, 1, 0
  015199c  vspltw 2, 2, 0
  01519a0  vspltw 2, 2, 0
  01519a4  vspltw 2, 2, 0
  01519a8  vspltw 2, 2, 0
  01519ac  vspltw 2, 2, 0
  01519b0  vspltw 2, 2, 0
  01519b4  vspltw 2, 2, 0
  01519b8  li 5, 188
  01519bc  vspltw 2, 2, 0
  01519c0  vspltw 2, 2, 0
  01519c4  vspltw 2, 2, 0
  01519c8  vspltw 2, 2, 0
  01519cc  vspltw 2, 2, 0
  01519d0  vspltw 2, 2, 0
  01519d4  vspltw 2, 2, 0
  01519d8  vspltw 2, 2, 0
  01519dc  vspltw 2, 2, 0
  01519e0  vspltw 2, 2, 0
  01519e4  vspltw 2, 2, 0
  01519e8  vspltw 2, 2, 0
  01519ec  vspltw 2, 2, 0
  01519f0  vspltw 2, 2, 0
  01519f4  vspltw 2, 2, 0
  01519f8  vspltw 2, 2, 0
  01519fc  vspltw 2, 2, 0
  0151a00  vspltw 2, 2, 0
  0151a04  vspltw 2, 2, 0
  0151a08  vspltw 2, 2, 0
  0151a0c  vspltw 2, 2, 0
  0151a10  vspltw 2, 2, 0
  0151a14  vspltw 2, 2, 0
  0151a18  vspltw 2, 2, 0
  0151a1c  vspltw 2, 2, 0
  0151a20  vspltw 2, 2, 0
  0151a24  vspltw 2, 2, 0
  0151a28  vspltw 2, 2, 0
  0151a2c  vspltb 2, 2, 3
  0151a30  stvebx 2, 5, 31
  0151a34  lfs 2, -3056(4)
  0151a38  lbz 5, 188(31)
  0151a3c  fmuls 1, 2, 1
  0151a40  fctiwz 1, 1
  0151a44  stfd 1, 128(1)
  0151a48  lwz 6, 132(1)
  0151a4c  cmpw 5, 6
  0151a50  bt 0, 0x151c94
  0151a54  lis 5, 150
  0151a58  addic 5, 5, 14024
  0151a5c  lhz 5, 102(5)
  0151a60  cmpwi 5, 3
  0151a64  bf 2, 0x151c94
  0151a68  lis 6, 21
  0151a6c  lbz 7, 32(31)
  0151a70  li 5, 0
  0151a74  addi 6, 6, 5812
  0151a78  addic 7, 7, 1
  0151a7c  stb 5, 188(31)
  0151a80  stb 7, 32(31)
  0151a84  lfs 1, 4(6)
  0151a88  lfs 2, -3056(4)
  0151a8c  addic 4, 3, 1
  0151a90  fmuls 1, 2, 1
  0151a94  ori 3, 31, 0
  0151a98  fctiwz 1, 1
  0151a9c  stfd 1, 128(1)
  0151aa0  lwz 6, 132(1)
  0151aa4  extsw 6, 6
  0151aa8  bl 0xfddc0
  0151aac  nop
  0151ab0  b 0x151c94
  0151ab4  lbz 3, 188(31)
  0151ab8  cmpwi 3, 0
  0151abc  bf 2, 0x151ae0
  0151ac0  lbz 3, 82(31)
  0151ac4  lbz 4, 83(31)
  0151ac8  cmpw 3, 4
  0151acc  bf 2, 0x151ae0
  0151ad0  bl 0x11c830
  0151ad4  nop
  0151ad8  li 3, 1
  0151adc  stb 3, 188(31)
  0151ae0  lbz 3, 112(31)
  0151ae4  rlwinm 3, 3, 0, 30, 30
  0151ae8  cmpwi 3, 0
  0151aec  bt 2, 0x151c94
  0151af0  lbz 3, 32(31)
  0151af4  li 4, 6
  0151af8  cmpwi 3, 1
  0151afc  bf 2, 0x151b04
  0151b00  addic 4, 3, 1
  0151b04  lis 5, 21
  0151b08  ori 3, 4, 0
  0151b0c  li 4, 0
  0151b10  addi 5, 5, 5812
  0151b14  lis 6, 114
  0151b18  stb 3, 32(31)
  0151b1c  stb 4, 188(31)
  0151b20  ori 3, 31, 0
  0151b24  lfs 1, 4(5)
  0151b28  lfs 2, -3056(6)
  0151b2c  ori 5, 4, 0
  0151b30  fmuls 1, 2, 1
  0151b34  fctiwz 1, 1
  0151b38  stfd 1, 128(1)
  0151b3c  lwz 6, 132(1)
  0151b40  extsw 6, 6
  0151b44  bl 0xfddc0
  0151b48  nop
  0151b4c  b 0x151c94
  0151b50  lis 3, 21
  0151b54  addi 4, 3, 5812
  0151b58  lbz 3, 188(31)
  0151b5c  addic 5, 3, 1
  0151b60  lis 3, 114
  0151b64  stb 5, 188(31)
  0151b68  lfs 1, 8(4)
  0151b6c  lfs 2, -3056(3)
  0151b70  clrlwi 4, 5, 24
  0151b74  fmuls 2, 2, 1
  0151b78  fctiwz 2, 2
  0151b7c  stfd 2, 128(1)
  0151b80  lwz 5, 132(1)
  0151b84  cmpw 4, 5
  0151b88  bf 1, 0x151c50
  0151b8c  lfs 2, -3056(3)
  0151b90  li 0, 112
  0151b94  fmuls 2, 2, 1
  0151b98  fctiwz 2, 2
  0151b9c  stfd 2, 128(1)
  0151ba0  lwz 4, 132(1)
  0151ba4  stw 4, 112(1)
  0151ba8  stw 4, 116(1)
  0151bac  stw 4, 120(1)
  0151bb0  stw 4, 124(1)
  0151bb4  lvx 2, 1, 0
  0151bb8  vspltw 2, 2, 0
  0151bbc  vspltw 2, 2, 0
  0151bc0  vspltw 2, 2, 0
  0151bc4  vspltw 2, 2, 0
  0151bc8  vspltw 2, 2, 0
  0151bcc  vspltw 2, 2, 0
  0151bd0  li 4, 188
  0151bd4  vspltw 2, 2, 0
  0151bd8  vspltw 2, 2, 0
  0151bdc  vspltw 2, 2, 0
  0151be0  vspltw 2, 2, 0
  0151be4  vspltw 2, 2, 0
  0151be8  vspltw 2, 2, 0
  0151bec  vspltw 2, 2, 0
  0151bf0  vspltw 2, 2, 0
  0151bf4  vspltw 2, 2, 0
  0151bf8  vspltw 2, 2, 0
  0151bfc  vspltw 2, 2, 0
  0151c00  vspltw 2, 2, 0
  0151c04  vspltw 2, 2, 0
  0151c08  vspltw 2, 2, 0
  0151c0c  vspltw 2, 2, 0
  0151c10  vspltw 2, 2, 0
  0151c14  vspltw 2, 2, 0
  0151c18  vspltw 2, 2, 0
  0151c1c  vspltw 2, 2, 0
  0151c20  vspltw 2, 2, 0
  0151c24  vspltw 2, 2, 0
  0151c28  vspltw 2, 2, 0
  0151c2c  vspltw 2, 2, 0
  0151c30  vspltw 2, 2, 0
  0151c34  vspltw 2, 2, 0
  0151c38  vspltw 2, 2, 0
  0151c3c  vspltw 2, 2, 0
  0151c40  vspltw 2, 2, 0
  0151c44  vspltw 2, 2, 0
  0151c48  vspltb 2, 2, 3
  0151c4c  stvebx 2, 4, 31
  0151c50  lfs 2, -3056(3)
  0151c54  lbz 3, 188(31)
  0151c58  fmuls 1, 2, 1
  0151c5c  fctiwz 1, 1
  0151c60  stfd 1, 128(1)
  0151c64  lwz 4, 132(1)
  0151c68  cmpw 3, 4
  0151c6c  bt 0, 0x151c94
  0151c70  lis 4, 151
  0151c74  li 3, 4
  0151c78  lwz 4, -13828(4)
  0151c7c  cmpwi 4, 0
  0151c80  bf 2, 0x151c88
  0151c84  li 3, 0
  0151c88  li 4, 0
  0151c8c  stb 3, 32(31)
  0151c90  stb 4, 188(31)
  0151c94  b 0x151ca0
  0151c98  li 3, 0
  0151c9c  b 0x151ca4
  0151ca0  li 3, 0
  0151ca4  ld 0, 208(1)
  0151ca8  mtlr 0
  0151cac  ld 27, 152(1)
  0151cb0  ld 28, 160(1)
  0151cb4  ld 29, 168(1)
  0151cb8  ld 30, 176(1)
  0151cbc  ld 31, 184(1)
  0151cc0  addi 1, 1, 192
  0151cc4  blr

GameComplete_Draw:   # 0x151cc8, 0x7c bytes
  0151cc8  stdu 1, -144(1)
  0151ccc  mflr 0
  0151cd0  std 0, 160(1)
  0151cd4  std 29, 120(1)
  0151cd8  std 30, 128(1)
  0151cdc  li 30, 0
  0151ce0  std 31, 136(1)
  0151ce4  ori 29, 3, 0
  0151ce8  ori 31, 30, 0
  0151cec  addic 3, 29, 68
  0151cf0  addc 3, 3, 31
  0151cf4  clrldi 3, 3, 32
  0151cf8  lwz 4, 0(3)
  0151cfc  cmpwi 4, 0
  0151d00  bt 2, 0x151d14
  0151d04  li 4, 1
  0151d08  lwz 3, 0(3)
  0151d0c  bl 0xf1934
  0151d10  nop
  0151d14  addic 30, 30, 1
  0151d18  addic 31, 31, 4
  0151d1c  cmpwi 30, 24
  0151d20  bt 0, 0x151cec
  0151d24  li 3, 4
  0151d28  ld 0, 160(1)
  0151d2c  mtlr 0
  0151d30  ld 29, 120(1)
  0151d34  ld 30, 128(1)
  0151d38  ld 31, 136(1)
  0151d3c  addi 1, 1, 144
  0151d40  blr

STUB_UpdateMoby_1957_HelpdeskLady:   # 0x151d44, 0x4 bytes
  0151d44  blr
