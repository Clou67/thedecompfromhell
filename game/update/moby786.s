# game/update/moby786.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M786_0045aa28:   # 0x45aa28, 0x5d4 bytes
  045aa28  stdu 1, -704(1)
  045aa2c  mflr 0
  045aa30  std 0, 720(1)
  045aa34  stfd 21, 616(1)
  045aa38  stfd 22, 624(1)
  045aa3c  stfd 23, 632(1)
  045aa40  stfd 24, 640(1)
  045aa44  stfd 25, 648(1)
  045aa48  stfd 26, 656(1)
  045aa4c  stfd 27, 664(1)
  045aa50  stfd 28, 672(1)
  045aa54  stfd 29, 680(1)
  045aa58  stfd 30, 688(1)
  045aa5c  stfd 31, 696(1)
  045aa60  std 30, 600(1)
  045aa64  ori 30, 3, 0
  045aa68  addic 3, 1, 112
  045aa6c  std 31, 608(1)
  045aa70  addic 4, 30, 192
  045aa74  std 29, 592(1)
  045aa78  std 28, 584(1)
  045aa7c  std 27, 576(1)
  045aa80  std 26, 568(1)
  045aa84  std 25, 560(1)
  045aa88  std 24, 552(1)
  045aa8c  std 23, 544(1)
  045aa90  std 22, 536(1)
  045aa94  std 21, 528(1)
  045aa98  std 20, 520(1)
  045aa9c  std 19, 512(1)
  045aaa0  std 18, 504(1)
  045aaa4  std 17, 496(1)
  045aaa8  std 16, 488(1)
  045aaac  lwz 31, 120(30)
  045aab0  bl 0x500f6c
  045aab4  nop
  045aab8  lfs 1, 16(30)
  045aabc  lfs 2, 20(30)
  045aac0  lis 4, 16256
  045aac4  li 3, 44
  045aac8  stfs 1, 160(1)
  045aacc  lfs 1, 24(30)
  045aad0  stfs 2, 164(1)
  045aad4  stfs 1, 168(1)
  045aad8  stw 4, 172(1)
  045aadc  bl 0x685c4
  045aae0  nop
  045aae4  std 3, 296(1)
  045aae8  lis 9, 0
  045aaec  li 3, 0
  045aaf0  li 4, 0
  045aaf4  li 5, 1
  045aaf8  li 6, 1
  045aafc  li 7, 1
  045ab00  li 8, 0
  045ab04  ori 9, 9, 65424
  045ab08  bl 0x502fd4
  045ab0c  nop
  045ab10  std 3, 304(1)
  045ab14  li 3, 0
  045ab18  li 4, 0
  045ab1c  li 5, 0
  045ab20  li 6, 0
  045ab24  li 7, 0
  045ab28  li 8, 0
  045ab2c  bl 0x502f08
  045ab30  nop
  045ab34  std 3, 288(1)
  045ab38  li 3, 44
  045ab3c  bl 0x685c4
  045ab40  nop
  045ab44  std 3, 440(1)
  045ab48  lis 9, 0
  045ab4c  li 3, 0
  045ab50  li 4, 0
  045ab54  li 5, 1
  045ab58  li 6, 1
  045ab5c  li 7, 1
  045ab60  li 8, 0
  045ab64  ori 9, 9, 65424
  045ab68  bl 0x502fd4
  045ab6c  nop
  045ab70  std 3, 448(1)
  045ab74  li 3, 0
  045ab78  li 4, 0
  045ab7c  li 5, 0
  045ab80  li 6, 0
  045ab84  li 7, 0
  045ab88  li 8, 0
  045ab8c  bl 0x502f08
  045ab90  nop
  045ab94  li 27, 0
  045ab98  std 3, 432(1)
  045ab9c  lis 4, 135
  045aba0  lis 6, 135
  045aba4  li 20, 4
  045aba8  stw 27, 396(1)
  045abac  addic 3, 1, 176
  045abb0  stw 27, 388(1)
  045abb4  addic 4, 4, 15008
  045abb8  addic 5, 1, 320
  045abbc  addic 6, 6, 14944
  045abc0  mtctr 20
  045abc4  lfs 1, 0(4)
  045abc8  stfs 1, 0(3)
  045abcc  lfs 1, 4(4)
  045abd0  stfs 1, 4(3)
  045abd4  lfs 1, 8(4)
  045abd8  stfs 1, 8(3)
  045abdc  lfs 1, 12(4)
  045abe0  addic 4, 4, 16
  045abe4  stfs 1, 12(3)
  045abe8  lfs 1, 0(6)
  045abec  addic 3, 3, 16
  045abf0  stfs 1, 0(5)
  045abf4  lfs 1, 4(6)
  045abf8  stfs 1, 4(5)
  045abfc  lfs 1, 8(6)
  045ac00  stfs 1, 8(5)
  045ac04  lfs 1, 12(6)
  045ac08  addic 6, 6, 16
  045ac0c  stfs 1, 12(5)
  045ac10  addic 5, 5, 16
  045ac14  bdnz 0x45abc4
  045ac18  ori 26, 27, 0
  045ac1c  ori 29, 26, 0
  045ac20  ori 17, 29, 0
  045ac24  lis 3, 135
  045ac28  lis 4, 135
  045ac2c  addic 30, 3, 14880
  045ac30  lis 3, 135
  045ac34  rlwinm 28, 29, 2, 29, 29
  045ac38  addic 25, 4, 14904
  045ac3c  lis 4, 135
  045ac40  addic 24, 3, 14888
  045ac44  addic 23, 4, 14896
  045ac48  lwzx 3, 30, 28
  045ac4c  lwzx 6, 25, 28
  045ac50  li 7, 128
  045ac54  lwzx 4, 24, 28
  045ac58  lwzx 5, 23, 28
  045ac5c  bl 0x502ea8
  045ac60  nop
  045ac64  lwzx 4, 30, 28
  045ac68  li 7, 128
  045ac6c  std 3, 312(1)
  045ac70  ori 3, 4, 0
  045ac74  lwzx 4, 24, 28
  045ac78  lwzx 5, 23, 28
  045ac7c  lwzx 8, 25, 28
  045ac80  ori 6, 8, 0
  045ac84  bl 0x502ea8
  045ac88  nop
  045ac8c  std 3, 456(1)
  045ac90  lis 30, 135
  045ac94  lwz 3, 20(31)
  045ac98  addic 30, 30, 14720
  045ac9c  cmpwi 3, 0
  045aca0  bt 2, 0x45ace4
  045aca4  extsw 3, 3
  045aca8  lis 4, 70
  045acac  std 3, 464(1)
  045acb0  addi 3, 4, -22028
  045acb4  lwzx 5, 30, 26
  045acb8  li 4, 0
  045acbc  lfs 1, 0(3)
  045acc0  lfd 2, 464(1)
  045acc4  extsw 3, 5
  045acc8  fcfid 2, 2
  045accc  frsp 2, 2
  045acd0  fmuls 1, 2, 1
  045acd4  bl 0x5027bc
  045acd8  nop
  045acdc  ori 30, 3, 0
  045ace0  b 0x45ace8
  045ace4  lwzx 30, 30, 26
  045ace8  lis 3, 70
  045acec  stw 30, 392(1)
  045acf0  lis 19, 135
  045acf4  addi 3, 3, -22028
  045acf8  stw 30, 384(1)
  045acfc  stw 30, 252(1)
  045ad00  lis 18, 135
  045ad04  stw 30, 248(1)
  045ad08  lis 16, 135
  045ad0c  stw 30, 244(1)
  045ad10  ori 21, 1, 0
  045ad14  stw 30, 240(1)
  045ad18  addic 19, 19, 14752
  045ad1c  lfs 31, 4(3)
  045ad20  ori 30, 27, 0
  045ad24  lfs 30, 8(3)
  045ad28  addic 18, 18, 14816
  045ad2c  lfs 29, 12(3)
  045ad30  addic 16, 16, 14912
  045ad34  lfs 28, 16(3)
  045ad38  lfs 27, 20(3)
  045ad3c  lfs 26, 24(3)
  045ad40  lfs 25, 28(3)
  045ad44  lfs 24, 32(3)
  045ad48  lfs 23, 36(3)
  045ad4c  lfs 22, 40(3)
  045ad50  lfs 21, 44(3)
  045ad54  ori 28, 27, 0
  045ad58  ori 25, 21, 0
  045ad5c  addc 24, 19, 17
  045ad60  addc 23, 18, 17
  045ad64  ori 22, 16, 0
  045ad68  lfs 1, 0(24)
  045ad6c  fmuls 1, 1, 31
  045ad70  bl 0x502758
  045ad74  nop
  045ad78  lis 4, 346
  045ad7c  lwz 4, -15568(4)
  045ad80  divw 5, 4, 3
  045ad84  mullw 3, 5, 3
  045ad88  subc 3, 4, 3
  045ad8c  extsw 3, 3
  045ad90  bl 0x502730
  045ad94  nop
  045ad98  lfs 2, 0(24)
  045ad9c  fdivs 1, 1, 2
  045ada0  lfs 2, 0(22)
  045ada4  lwz 3, 0(23)
  045ada8  cmpwi 3, 0
  045adac  fsubs 1, 1, 30
  045adb0  bt 2, 0x45add4
  045adb4  fmadds 1, 1, 29, 28
  045adb8  fsubs 3, 27, 1
  045adbc  fsubs 4, 26, 1
  045adc0  fsub 5, 1, 3
  045adc4  fsel 1, 5, 3, 1
  045adc8  fsub 3, 4, 1
  045adcc  fsel 1, 3, 4, 1
  045add0  b 0x45adf0
  045add4  fmuls 1, 1, 29
  045add8  fsubs 3, 27, 1
  045addc  fsubs 4, 26, 1
  045ade0  fsub 5, 1, 3
  045ade4  fsel 1, 5, 3, 1
  045ade8  fsub 3, 4, 1
  045adec  fsel 1, 3, 4, 1
  045adf0  fmuls 3, 1, 1
  045adf4  addic 28, 28, 1
  045adf8  addic 24, 24, 4
  045adfc  cmpwi 28, 2
  045ae00  addic 23, 23, 4
  045ae04  addic 22, 22, 4
  045ae08  fmuls 4, 3, 1
  045ae0c  fmuls 5, 3, 4
  045ae10  fmadds 1, 4, 25, 1
  045ae14  fmuls 4, 3, 5
  045ae18  fmadds 1, 5, 24, 1
  045ae1c  fmuls 3, 3, 4
  045ae20  fmadds 1, 4, 23, 1
  045ae24  fmadds 1, 3, 22, 1
  045ae28  fmadds 1, 1, 21, 2
  045ae2c  stfs 1, 256(25)
  045ae30  addic 25, 25, 4
  045ae34  bt 0, 0x45ad68
  045ae38  addic 30, 30, 1
  045ae3c  addic 21, 21, 8
  045ae40  cmpwi 30, 4
  045ae44  addic 16, 16, 8
  045ae48  bt 0, 0x45ad54
  045ae4c  lis 3, 70
  045ae50  vspltisw 3, 0
  045ae54  li 4, 44
  045ae58  vspltisw 4, 1
  045ae5c  addi 3, 3, -22028
  045ae60  li 6, 424
  045ae64  li 8, 2
  045ae68  li 9, 400
  045ae6c  li 5, 264
  045ae70  <unknown>
  045ae74  li 3, 408
  045ae78  li 7, 280
  045ae7c  li 10, 416
  045ae80  vspltw 2, 2, 0
  045ae84  mtctr 8
  045ae88  addc 4, 1, 6
  045ae8c  addc 5, 1, 5
  045ae90  addc 7, 1, 7
  045ae94  addc 3, 1, 3
  045ae98  addc 6, 1, 9
  045ae9c  addc 8, 1, 10
  045aea0  vcfsx 5, 3, 0
  045aea4  <unknown>
  045aea8  <unknown>
  045aeac  vspltw 8, 6, 0
  045aeb0  addic 5, 5, 4
  045aeb4  vspltw 9, 7, 0
  045aeb8  addic 7, 7, 4
  045aebc  vadduwm 3, 3, 4
  045aec0  stvewx 8, 0, 6
  045aec4  addic 6, 6, 4
  045aec8  vmaddfp 6, 5, 2, 6
  045aecc  vmaddfp 5, 5, 2, 7
  045aed0  vspltw 6, 6, 0
  045aed4  vspltw 5, 5, 0
  045aed8  stvewx 6, 0, 3
  045aedc  stvewx 9, 0, 8
  045aee0  addic 3, 3, 4
  045aee4  stvewx 5, 0, 4
  045aee8  addic 8, 8, 4
  045aeec  addic 4, 4, 4
  045aef0  bdnz 0x45aea0
  045aef4  lis 3, 161
  045aef8  addic 28, 1, 112
  045aefc  addic 30, 3, 24396
  045af00  ori 4, 28, 0
  045af04  li 5, 0
  045af08  li 7, 9
  045af0c  addic 3, 1, 176
  045af10  lwz 6, 28(30)
  045af14  bl 0x72280
  045af18  nop
  045af1c  ori 4, 28, 0
  045af20  lwz 6, 28(30)
  045af24  addic 3, 1, 320
  045af28  li 5, 0
  045af2c  li 7, 9
  045af30  bl 0x72280
  045af34  nop
  045af38  lis 4, 70
  045af3c  ori 3, 1, 0
  045af40  addi 4, 4, -22028
  045af44  mtctr 20
  045af48  lfs 1, 48(4)
  045af4c  lfs 2, 176(3)
  045af50  lfs 3, 320(3)
  045af54  fadds 2, 2, 1
  045af58  fadds 3, 3, 1
  045af5c  stfs 2, 176(3)
  045af60  stfs 3, 320(3)
  045af64  addic 3, 3, 16
  045af68  bdnz 0x45af4c
  045af6c  addic 29, 29, 1
  045af70  addic 17, 17, 8
  045af74  cmpwi 29, 6
  045af78  addic 26, 26, 4
  045af7c  bt 0, 0x45ac24
  045af80  ld 0, 720(1)
  045af84  mtlr 0
  045af88  lfd 21, 616(1)
  045af8c  lfd 22, 624(1)
  045af90  lfd 23, 632(1)
  045af94  lfd 24, 640(1)
  045af98  lfd 25, 648(1)
  045af9c  lfd 26, 656(1)
  045afa0  lfd 27, 664(1)
  045afa4  lfd 28, 672(1)
  045afa8  lfd 29, 680(1)
  045afac  lfd 30, 688(1)
  045afb0  lfd 31, 696(1)
  045afb4  ld 16, 488(1)
  045afb8  ld 17, 496(1)
  045afbc  ld 18, 504(1)
  045afc0  ld 19, 512(1)
  045afc4  ld 20, 520(1)
  045afc8  ld 21, 528(1)
  045afcc  ld 22, 536(1)
  045afd0  ld 23, 544(1)
  045afd4  ld 24, 552(1)
  045afd8  ld 25, 560(1)
  045afdc  ld 26, 568(1)
  045afe0  ld 27, 576(1)
  045afe4  ld 28, 584(1)
  045afe8  ld 29, 592(1)
  045afec  ld 30, 600(1)
  045aff0  ld 31, 608(1)
  045aff4  addi 1, 1, 704
  045aff8  blr

M786_0045affc:   # 0x45affc, 0x14 bytes
  045affc  lis 3, 135
  045b000  lis 4, 1
  045b004  addic 3, 3, 15076
  045b008  stw 4, 72(3)
  045b00c  blr

M786_0045b010:   # 0x45b010, 0xf4 bytes
  045b010  stdu 1, -160(1)
  045b014  mflr 0
  045b018  std 0, 176(1)
  045b01c  std 31, 152(1)
  045b020  lis 4, 161
  045b024  ori 31, 3, 0
  045b028  lwz 3, 1800(4)
  045b02c  std 30, 144(1)
  045b030  std 29, 136(1)
  045b034  std 28, 128(1)
  045b038  std 27, 120(1)
  045b03c  cmpwi 3, 2
  045b040  bf 2, 0x45b0e0
  045b044  lis 3, 151
  045b048  lbz 3, -16268(3)
  045b04c  cmpwi 3, 0
  045b050  bt 2, 0x45b0e0
  045b054  lis 28, 150
  045b058  li 27, 0
  045b05c  addic 28, 28, -12976
  045b060  lhz 3, 68(28)
  045b064  extsh 4, 3
  045b068  cmpwi 4, 0
  045b06c  bf 1, 0x45b0e0
  045b070  lis 29, 162
  045b074  ori 30, 28, 0
  045b078  addic 29, 29, -16512
  045b07c  lwz 4, 376(30)
  045b080  lhz 5, 166(31)
  045b084  extsh 5, 5
  045b088  lhz 6, 166(4)
  045b08c  extsh 6, 6
  045b090  cmpw 6, 5
  045b094  bf 2, 0x45b0cc
  045b098  lbz 5, 1(29)
  045b09c  cmpwi 5, 0
  045b0a0  bf 2, 0x45b0cc
  045b0a4  ori 3, 4, 0
  045b0a8  li 4, 0
  045b0ac  ori 5, 29, 0
  045b0b0  bl 0xf0ea8
  045b0b4  nop
  045b0b8  lis 4, 16432
  045b0bc  lhz 3, 68(28)
  045b0c0  stw 4, 32(29)
  045b0c4  stw 4, 36(29)
  045b0c8  stw 4, 40(29)
  045b0cc  extsh 4, 3
  045b0d0  addic 27, 27, 1
  045b0d4  addic 30, 30, 4
  045b0d8  cmpw 27, 4
  045b0dc  bt 0, 0x45b07c
  045b0e0  ld 0, 176(1)
  045b0e4  mtlr 0
  045b0e8  ld 27, 120(1)
  045b0ec  ld 28, 128(1)
  045b0f0  ld 29, 136(1)
  045b0f4  ld 30, 144(1)
  045b0f8  ld 31, 152(1)
  045b0fc  addi 1, 1, 160
  045b100  blr

UpdateMoby_786:   # 0x45b190, 0x1328 bytes
  045b190  stdu 1, -464(1)
  045b194  mflr 0
  045b198  std 0, 480(1)
  045b19c  stfd 25, 408(1)
  045b1a0  stfd 26, 416(1)
  045b1a4  stfd 27, 424(1)
  045b1a8  stfd 28, 432(1)
  045b1ac  stfd 29, 440(1)
  045b1b0  stfd 30, 448(1)
  045b1b4  stfd 31, 456(1)
  045b1b8  std 31, 400(1)
  045b1bc  lis 4, 161
  045b1c0  ori 31, 3, 0
  045b1c4  std 30, 392(1)
  045b1c8  lwz 4, 1800(4)
  045b1cc  lwz 30, 120(3)
  045b1d0  std 29, 384(1)
  045b1d4  std 28, 376(1)
  045b1d8  std 27, 368(1)
  045b1dc  std 26, 360(1)
  045b1e0  cmpwi 4, 2
  045b1e4  bf 2, 0x45b280
  045b1e8  lis 3, 151
  045b1ec  lbz 3, -16268(3)
  045b1f0  cmpwi 3, 0
  045b1f4  bt 2, 0x45b280
  045b1f8  lis 28, 150
  045b1fc  li 29, 0
  045b200  addic 28, 28, -12976
  045b204  lhz 4, 68(28)
  045b208  extsh 3, 4
  045b20c  cmpwi 3, 0
  045b210  bf 1, 0x45b280
  045b214  lis 27, 162
  045b218  ori 26, 28, 0
  045b21c  addic 27, 27, -16512
  045b220  lwz 3, 376(26)
  045b224  lhz 5, 166(31)
  045b228  extsh 5, 5
  045b22c  lhz 6, 166(3)
  045b230  extsh 6, 6
  045b234  cmpw 6, 5
  045b238  bf 2, 0x45b26c
  045b23c  lbz 5, 1(27)
  045b240  cmpwi 5, 0
  045b244  bf 2, 0x45b26c
  045b248  li 4, 0
  045b24c  ori 5, 27, 0
  045b250  bl 0xf0ea8
  045b254  nop
  045b258  lis 3, 16432
  045b25c  lhz 4, 68(28)
  045b260  stw 3, 32(27)
  045b264  stw 3, 36(27)
  045b268  stw 3, 40(27)
  045b26c  extsh 3, 4
  045b270  addic 29, 29, 1
  045b274  addic 26, 26, 4
  045b278  cmpw 29, 3
  045b27c  bt 0, 0x45b220
  045b280  lbz 3, 32(31)
  045b284  cmpwi 3, 5
  045b288  cmpwi 1, 3, 4
  045b28c  cmpwi 6, 3, 3
  045b290  cmpwi 7, 3, 2
  045b294  bt 2, 0x45b884
  045b298  bt 6, 0x45bab8
  045b29c  bt 26, 0x45b8b4
  045b2a0  bt 30, 0x45b6d0
  045b2a4  cmpwi 3, 1
  045b2a8  bt 2, 0x45b348
  045b2ac  cmpwi 3, 0
  045b2b0  bf 2, 0x45bb14
  045b2b4  lis 3, 151
  045b2b8  addic 3, 3, -16027
  045b2bc  lbz 3, 5(3)
  045b2c0  cmpwi 3, 0
  045b2c4  bt 2, 0x45b2d8
  045b2c8  ori 3, 31, 0
  045b2cc  bl 0xefb38
  045b2d0  nop
  045b2d4  b 0x45c474
  045b2d8  lis 4, 102
  045b2dc  li 29, 1
  045b2e0  addic 5, 4, -31968
  045b2e4  ori 3, 31, 0
  045b2e8  ori 4, 30, 0
  045b2ec  stw 5, 32(30)
  045b2f0  stb 29, 32(31)
  045b2f4  bl 0x4d3720
  045b2f8  nop
  045b2fc  ori 3, 31, 0
  045b300  bl 0x106308
  045b304  nop
  045b308  li 3, 56
  045b30c  bl 0xefa28
  045b310  nop
  045b314  li 4, 64
  045b318  stw 3, 376(30)
  045b31c  sth 4, 50(3)
  045b320  lwz 3, 376(30)
  045b324  stb 29, 49(3)
  045b328  lwz 3, 376(30)
  045b32c  ld 4, 56(31)
  045b330  std 4, 56(3)
  045b334  lwz 3, 376(30)
  045b338  lhz 4, 52(3)
  045b33c  ori 4, 4, 256
  045b340  sth 4, 52(3)
  045b344  b 0x45bb14
  045b348  lbz 3, 8(30)
  045b34c  cmpwi 3, 1
  045b350  bf 2, 0x45b388
  045b354  lis 3, 151
  045b358  lwz 4, 340(30)
  045b35c  addic 3, 3, -25376
  045b360  extsw 4, 4
  045b364  addic 3, 3, 128
  045b368  bl 0x110b70
  045b36c  nop
  045b370  cmpwi 3, 0
  045b374  bt 2, 0x45b388
  045b378  lis 3, 70
  045b37c  addi 3, 3, -20220
  045b380  lfs 1, 0(3)
  045b384  b 0x45b394
  045b388  lis 3, 70
  045b38c  addi 3, 3, -20220
  045b390  lfs 1, 4(3)
  045b394  ori 3, 31, 0
  045b398  ori 4, 30, 0
  045b39c  stfs 1, 12(30)
  045b3a0  bl 0x4d3870
  045b3a4  nop
  045b3a8  cmpwi 3, 0
  045b3ac  bt 2, 0x45b3d4
  045b3b0  lis 3, 70
  045b3b4  addi 4, 3, -20220
  045b3b8  ori 3, 31, 0
  045b3bc  lfs 1, 8(4)
  045b3c0  bl 0x119488
  045b3c4  nop
  045b3c8  li 3, 2
  045b3cc  stb 3, 32(31)
  045b3d0  b 0x45b5dc
  045b3d4  lis 3, 151
  045b3d8  addic 3, 3, -16064
  045b3dc  lbz 3, 5(3)
  045b3e0  cmpwi 3, 0
  045b3e4  bf 2, 0x45b5dc
  045b3e8  lis 3, 151
  045b3ec  lfs 1, 20(31)
  045b3f0  lfs 2, 16(31)
  045b3f4  addic 3, 3, -25376
  045b3f8  lfs 3, 132(3)
  045b3fc  lfs 4, 128(3)
  045b400  fsubs 1, 1, 3
  045b404  fsubs 2, 2, 4
  045b408  lis 3, 70
  045b40c  addi 3, 3, -20220
  045b410  fmuls 1, 1, 1
  045b414  fmadds 1, 2, 2, 1
  045b418  lfs 2, 12(3)
  045b41c  fsqrts 1, 1
  045b420  fcmpu 0, 1, 2
  045b424  cror 6, 1, 2
  045b428  bt 6, 0x45b5dc
  045b42c  lis 5, 161
  045b430  addic 5, 5, 12
  045b434  lhz 3, 112(5)
  045b438  cmpwi 3, 0
  045b43c  bt 2, 0x45b51c
  045b440  lis 3, 161
  045b444  lis 4, 70
  045b448  lwz 3, -2344(3)
  045b44c  extsw 3, 3
  045b450  std 3, 344(1)
  045b454  addi 3, 4, -20220
  045b458  lis 4, 114
  045b45c  lfs 1, 16(3)
  045b460  lfs 2, -3056(4)
  045b464  lfd 3, 344(1)
  045b468  fcfid 3, 3
  045b46c  frsp 3, 3
  045b470  fadds 1, 3, 1
  045b474  fmuls 1, 2, 1
  045b478  fctiwz 1, 1
  045b47c  stfd 1, 344(1)
  045b480  lfs 1, 20(3)
  045b484  fmuls 1, 2, 1
  045b488  lfs 3, 24(3)
  045b48c  lhz 4, 114(5)
  045b490  mulli 6, 4, 600
  045b494  fctidz 1, 1
  045b498  lwz 3, 348(1)
  045b49c  cmpwi 1, 6, 0
  045b4a0  subc 7, 3, 6
  045b4a4  fcfid 1, 1
  045b4a8  frsp 1, 1
  045b4ac  fmuls 1, 1, 3
  045b4b0  fctiwz 1, 1
  045b4b4  stfd 1, 344(1)
  045b4b8  lwz 6, 348(1)
  045b4bc  cmpw 7, 6
  045b4c0  bt 1, 0x45b4c8
  045b4c4  bf 6, 0x45b4dc
  045b4c8  li 3, 2004
  045b4cc  li 4, 14
  045b4d0  bl 0x7b310
  045b4d4  nop
  045b4d8  b 0x45b5dc
  045b4dc  lis 6, 6990
  045b4e0  ori 6, 6, 33205
  045b4e4  mulhw 6, 6, 3
  045b4e8  srawi 6, 6, 6
  045b4ec  srwi 7, 6, 31
  045b4f0  addc 6, 6, 7
  045b4f4  cmpw 6, 4
  045b4f8  bf 1, 0x45b5dc
  045b4fc  lis 4, 6990
  045b500  ori 4, 4, 33205
  045b504  mulhw 3, 4, 3
  045b508  srawi 3, 3, 6
  045b50c  srwi 4, 3, 31
  045b510  addc 3, 3, 4
  045b514  sth 3, 114(5)
  045b518  b 0x45b5dc
  045b51c  lis 4, 0
  045b520  ori 4, 4, 65535
  045b524  cmpw 3, 4
  045b528  bf 0, 0x45b534
  045b52c  addic 3, 3, 1
  045b530  sth 3, 112(5)
  045b534  lis 3, 161
  045b538  lis 4, 114
  045b53c  lwz 3, -2344(3)
  045b540  extsw 3, 3
  045b544  std 3, 344(1)
  045b548  lis 3, 70
  045b54c  addi 3, 3, -20220
  045b550  lfs 1, 16(3)
  045b554  lfs 2, -3056(4)
  045b558  lfd 3, 344(1)
  045b55c  lis 3, 6990
  045b560  fcfid 3, 3
  045b564  ori 4, 3, 33205
  045b568  lhz 6, 114(5)
  045b56c  frsp 3, 3
  045b570  fadds 1, 3, 1
  045b574  fmuls 1, 2, 1
  045b578  fctiwz 1, 1
  045b57c  stfd 1, 344(1)
  045b580  lwz 3, 348(1)
  045b584  mulhw 4, 4, 3
  045b588  srawi 4, 4, 6
  045b58c  srwi 7, 4, 31
  045b590  addc 4, 4, 7
  045b594  cmpw 4, 6
  045b598  bf 1, 0x45b5b8
  045b59c  lis 4, 6990
  045b5a0  ori 4, 4, 33205
  045b5a4  mulhw 3, 4, 3
  045b5a8  srawi 3, 3, 6
  045b5ac  srwi 4, 3, 31
  045b5b0  addc 3, 3, 4
  045b5b4  sth 3, 114(5)
  045b5b8  lis 3, 151
  045b5bc  lwz 7, 116(5)
  045b5c0  li 4, 1
  045b5c4  lis 6, -32768
  045b5c8  lwz 3, -25488(3)
  045b5cc  slw 3, 4, 3
  045b5d0  or 3, 7, 3
  045b5d4  or 3, 3, 6
  045b5d8  stw 3, 116(5)
  045b5dc  lis 3, 70
  045b5e0  addi 3, 3, -20220
  045b5e4  lfs 31, 28(3)
  045b5e8  lbz 3, 83(31)
  045b5ec  cmpwi 3, 0
  045b5f0  bf 2, 0x45b67c
  045b5f4  addic 3, 30, 370
  045b5f8  bl 0x4fffb4
  045b5fc  nop
  045b600  cmpwi 3, 0
  045b604  lbz 3, 83(31)
  045b608  bt 2, 0x45b67c
  045b60c  lis 3, 70
  045b610  addi 3, 3, -20220
  045b614  lfs 1, 32(3)
  045b618  lfs 2, 36(3)
  045b61c  bl 0xfcbe8
  045b620  nop
  045b624  lis 3, 114
  045b628  lfs 2, -3056(3)
  045b62c  fmuls 1, 1, 2
  045b630  bl 0x502758
  045b634  nop
  045b638  sth 3, 370(30)
  045b63c  lbz 3, 83(31)
  045b640  cmpwi 3, 1
  045b644  bt 2, 0x45bb14
  045b648  lis 3, 114
  045b64c  li 4, 1
  045b650  li 5, 0
  045b654  lfs 1, -3056(3)
  045b658  ori 3, 31, 0
  045b65c  fmuls 1, 1, 31
  045b660  fctiwz 1, 1
  045b664  stfd 1, 344(1)
  045b668  lwz 6, 348(1)
  045b66c  extsw 6, 6
  045b670  bl 0xfddc0
  045b674  nop
  045b678  b 0x45bb14
  045b67c  cmpwi 3, 1
  045b680  bf 2, 0x45bb14
  045b684  cmpwi 1, 3, 0
  045b688  lbz 3, 112(31)
  045b68c  rlwinm 3, 3, 0, 30, 30
  045b690  cmpwi 3, 0
  045b694  cror 2, 2, 6
  045b698  bt 2, 0x45bb14
  045b69c  lis 3, 114
  045b6a0  li 4, 0
  045b6a4  li 5, 0
  045b6a8  lfs 1, -3056(3)
  045b6ac  ori 3, 31, 0
  045b6b0  fmuls 1, 1, 31
  045b6b4  fctiwz 1, 1
  045b6b8  stfd 1, 344(1)
  045b6bc  lwz 6, 348(1)
  045b6c0  extsw 6, 6
  045b6c4  bl 0xfddc0
  045b6c8  nop
  045b6cc  b 0x45bb14
  045b6d0  lis 3, 161
  045b6d4  lwz 3, 1800(3)
  045b6d8  cmpwi 3, 2
  045b6dc  bt 2, 0x45b794
  045b6e0  li 3, 1
  045b6e4  stb 3, 32(31)
  045b6e8  lhz 3, 4(30)
  045b6ec  cmpwi 3, 0
  045b6f0  cmpwi 1, 3, 2
  045b6f4  bf 2, 0x45b73c
  045b6f8  lbz 3, 176(31)
  045b6fc  bl 0xf1e50
  045b700  nop
  045b704  lwz 3, 336(30)
  045b708  cmpwi 3, -1
  045b70c  bt 2, 0x45bb14
  045b710  lis 4, 165
  045b714  slwi 3, 3, 7
  045b718  lwz 4, 7128(4)
  045b71c  addc 3, 4, 3
  045b720  addic 4, 3, 48
  045b724  addic 5, 3, 112
  045b728  clrldi 3, 4, 32
  045b72c  clrldi 4, 5, 32
  045b730  bl 0x151e70
  045b734  nop
  045b738  b 0x45bb14
  045b73c  bf 6, 0x45bb14
  045b740  li 3, 0
  045b744  lhz 4, 52(31)
  045b748  ori 4, 4, 1
  045b74c  stb 3, 49(31)
  045b750  stw 3, 148(31)
  045b754  lwz 3, 376(30)
  045b758  sth 4, 52(31)
  045b75c  cmpwi 3, 0
  045b760  bt 2, 0x45b77c
  045b764  lhz 5, 52(3)
  045b768  li 4, 0
  045b76c  ori 5, 5, 1
  045b770  sth 5, 52(3)
  045b774  lwz 3, 376(30)
  045b778  stb 4, 49(3)
  045b77c  li 3, 2
  045b780  bl 0x168f7c
  045b784  nop
  045b788  li 3, 5
  045b78c  stb 3, 32(31)
  045b790  b 0x45bb14
  045b794  lis 29, 150
  045b798  addic 29, 29, -12976
  045b79c  lbz 3, 74(29)
  045b7a0  cmpwi 3, 0
  045b7a4  bf 2, 0x45bb14
  045b7a8  lfs 3, 196(31)
  045b7ac  lfs 2, 192(31)
  045b7b0  fmuls 1, 3, 3
  045b7b4  lfs 4, 200(31)
  045b7b8  lis 3, 70
  045b7bc  addi 3, 3, -20220
  045b7c0  fmadds 1, 2, 2, 1
  045b7c4  lfs 5, 40(3)
  045b7c8  fmadds 1, 4, 4, 1
  045b7cc  fsqrts 1, 1
  045b7d0  fcmpu 0, 1, 5
  045b7d4  bf 2, 0x45b7e8
  045b7d8  fmr 2, 5
  045b7dc  lfs 3, 204(31)
  045b7e0  fmr 1, 2
  045b7e4  b 0x45b808
  045b7e8  lis 3, 70
  045b7ec  addi 3, 3, -20220
  045b7f0  lfs 5, 44(3)
  045b7f4  fdivs 6, 5, 1
  045b7f8  fmuls 1, 3, 6
  045b7fc  fmuls 5, 2, 6
  045b800  lfs 3, 204(31)
  045b804  fmuls 2, 4, 6
  045b808  stfs 3, 28(29)
  045b80c  lfs 3, 16(31)
  045b810  fadds 3, 5, 3
  045b814  lis 4, 70
  045b818  addic 3, 29, 16
  045b81c  addi 28, 4, -20220
  045b820  li 4, 0
  045b824  stfs 3, 16(29)
  045b828  lfs 3, 20(31)
  045b82c  fadds 1, 1, 3
  045b830  stfs 1, 20(29)
  045b834  lfs 1, 24(31)
  045b838  fadds 1, 2, 1
  045b83c  stfs 1, 24(29)
  045b840  lfs 1, 16(28)
  045b844  bl 0xffb70
  045b848  nop
  045b84c  li 3, 0
  045b850  stfs 1, 24(29)
  045b854  stw 3, 44(29)
  045b858  stw 3, 40(29)
  045b85c  stw 3, 36(29)
  045b860  stw 3, 32(29)
  045b864  lfs 1, 72(31)
  045b868  lfs 2, 48(28)
  045b86c  bl 0x502578
  045b870  nop
  045b874  li 3, 1
  045b878  stfs 1, 40(29)
  045b87c  stb 3, 74(29)
  045b880  b 0x45bb14
  045b884  li 3, 5
  045b888  li 4, 1
  045b88c  bl 0x112e18
  045b890  nop
  045b894  li 3, 0
  045b898  li 4, -1
  045b89c  bl 0xe8aa4
  045b8a0  nop
  045b8a4  ori 3, 31, 0
  045b8a8  bl 0xefb38
  045b8ac  nop
  045b8b0  b 0x45c474
  045b8b4  lis 3, 70
  045b8b8  lis 4, 114
  045b8bc  addi 6, 3, -20220
  045b8c0  lis 7, 114
  045b8c4  addic 3, 30, 384
  045b8c8  addic 5, 30, 388
  045b8cc  lis 29, 16256
  045b8d0  lfs 31, 52(6)
  045b8d4  lfs 30, 56(6)
  045b8d8  lfs 3, 60(6)
  045b8dc  lfs 4, 16(6)
  045b8e0  fmr 1, 31
  045b8e4  lfs 5, -3048(4)
  045b8e8  lfs 6, -3052(7)
  045b8ec  fmuls 2, 5, 30
  045b8f0  fmuls 3, 5, 3
  045b8f4  fmuls 4, 6, 4
  045b8f8  bl 0x109c30
  045b8fc  nop
  045b900  lis 3, 165
  045b904  lwz 4, 344(30)
  045b908  lwz 5, 348(30)
  045b90c  slwi 6, 4, 7
  045b910  slwi 7, 5, 7
  045b914  lwz 3, 7128(3)
  045b918  lfs 1, 384(30)
  045b91c  addc 6, 3, 6
  045b920  addc 7, 3, 7
  045b924  clrldi 6, 6, 32
  045b928  clrldi 7, 7, 32
  045b92c  slwi 5, 5, 7
  045b930  slwi 4, 4, 7
  045b934  lfs 2, 48(6)
  045b938  lfs 3, 48(7)
  045b93c  lfs 4, 52(7)
  045b940  fsubs 3, 3, 2
  045b944  lfs 5, 52(6)
  045b948  addc 5, 3, 5
  045b94c  fsubs 4, 4, 5
  045b950  addc 3, 3, 4
  045b954  lfs 5, 56(7)
  045b958  lfs 6, 56(6)
  045b95c  lfs 7, 60(7)
  045b960  clrldi 3, 3, 32
  045b964  fsubs 5, 5, 6
  045b968  clrldi 4, 5, 32
  045b96c  fmadds 2, 1, 3, 2
  045b970  stfs 2, 112(1)
  045b974  lfs 2, 52(6)
  045b978  fmadds 2, 1, 4, 2
  045b97c  stfs 2, 116(1)
  045b980  lfs 2, 56(6)
  045b984  stfs 7, 124(1)
  045b988  fmadds 1, 1, 5, 2
  045b98c  stfs 1, 120(1)
  045b990  lfs 29, 120(3)
  045b994  lfs 28, 112(3)
  045b998  lfs 27, 116(3)
  045b99c  lfs 1, 120(4)
  045b9a0  fmr 2, 29
  045b9a4  lfs 26, 112(4)
  045b9a8  lfs 25, 116(4)
  045b9ac  bl 0x5025e0
  045b9b0  nop
  045b9b4  lfs 3, 384(30)
  045b9b8  fmr 2, 29
  045b9bc  fmuls 1, 1, 3
  045b9c0  bl 0x502578
  045b9c4  nop
  045b9c8  stfs 1, 136(1)
  045b9cc  fmr 1, 25
  045b9d0  fmr 2, 27
  045b9d4  bl 0x5025e0
  045b9d8  nop
  045b9dc  lfs 3, 384(30)
  045b9e0  fmr 2, 27
  045b9e4  fmuls 1, 1, 3
  045b9e8  bl 0x502578
  045b9ec  nop
  045b9f0  stfs 1, 132(1)
  045b9f4  fmr 1, 26
  045b9f8  fmr 2, 28
  045b9fc  bl 0x5025e0
  045ba00  nop
  045ba04  lfs 3, 384(30)
  045ba08  fmr 2, 28
  045ba0c  fmuls 1, 1, 3
  045ba10  bl 0x502578
  045ba14  nop
  045ba18  addic 3, 1, 112
  045ba1c  stfs 1, 128(1)
  045ba20  bl 0x47b98
  045ba24  nop
  045ba28  addic 3, 1, 128
  045ba2c  bl 0x47c08
  045ba30  nop
  045ba34  lwz 3, 384(30)
  045ba38  srawi 4, 3, 31
  045ba3c  srwi 5, 4, 1
  045ba40  xor 3, 5, 3
  045ba44  subc 3, 3, 4
  045ba48  cmpw 3, 29
  045ba4c  bf 0, 0x45ba70
  045ba50  lis 4, 70
  045ba54  addic 3, 30, 380
  045ba58  fmr 2, 30
  045ba5c  addi 4, 4, -20220
  045ba60  lfs 1, 40(4)
  045ba64  bl 0x109af0
  045ba68  nop
  045ba6c  b 0x45baa8
  045ba70  addic 3, 30, 380
  045ba74  fmr 1, 31
  045ba78  fmr 2, 30
  045ba7c  bl 0x109af0
  045ba80  nop
  045ba84  lwz 3, 380(30)
  045ba88  lis 4, 16256
  045ba8c  cmpw 3, 4
  045ba90  bf 2, 0x45baa8
  045ba94  li 4, 4
  045ba98  li 3, 0
  045ba9c  stb 4, 32(31)
  045baa0  bl 0x481d0
  045baa4  nop
  045baa8  lis 3, 150
  045baac  lfs 1, 380(30)
  045bab0  stfs 1, -12528(3)
  045bab4  b 0x45bb14
  045bab8  lis 4, 70
  045babc  addic 3, 30, 380
  045bac0  addi 4, 4, -20220
  045bac4  lfs 1, 40(4)
  045bac8  lfs 2, 56(4)
  045bacc  bl 0x109af0
  045bad0  nop
  045bad4  lis 4, 150
  045bad8  lwz 3, 380(30)
  045badc  lfs 1, 380(30)
  045bae0  cmpwi 3, 0
  045bae4  stfs 1, -12528(4)
  045bae8  bf 2, 0x45bb14
  045baec  lwz 30, 376(30)
  045baf0  cmpwi 30, 0
  045baf4  bt 2, 0x45bb04
  045baf8  ori 3, 30, 0
  045bafc  bl 0xefb38
  045bb00  nop
  045bb04  ori 3, 31, 0
  045bb08  bl 0xefb38
  045bb0c  nop
  045bb10  b 0x45c474
  045bb14  lwz 3, 376(30)
  045bb18  cmpwi 3, 0
  045bb1c  bt 2, 0x45bbf0
  045bb20  addic 5, 3, 16
  045bb24  ori 3, 31, 0
  045bb28  li 4, 2
  045bb2c  bl 0xf1114
  045bb30  nop
  045bb34  addic 29, 1, 144
  045bb38  ori 3, 31, 0
  045bb3c  li 4, 2
  045bb40  ori 5, 29, 0
  045bb44  bl 0xf1038
  045bb48  nop
  045bb4c  lwz 3, 376(30)
  045bb50  ori 4, 29, 0
  045bb54  addic 3, 3, 192
  045bb58  bl 0x500fa8
  045bb5c  nop
  045bb60  lwz 3, 376(30)
  045bb64  lis 4, 135
  045bb68  addic 5, 4, 15184
  045bb6c  lfs 1, 208(3)
  045bb70  lfs 2, 212(3)
  045bb74  lfs 3, 4(5)
  045bb78  lfs 4, 192(3)
  045bb7c  lfs 5, 15184(4)
  045bb80  fmuls 1, 1, 3
  045bb84  lfs 6, 216(3)
  045bb88  fmuls 2, 2, 3
  045bb8c  lfs 7, 196(3)
  045bb90  fmuls 3, 6, 3
  045bb94  lfs 6, 200(3)
  045bb98  lfs 8, 224(3)
  045bb9c  lfs 9, 8(5)
  045bba0  lfs 10, 228(3)
  045bba4  fmadds 1, 4, 5, 1
  045bba8  fmadds 2, 7, 5, 2
  045bbac  lfs 4, 232(3)
  045bbb0  fmadds 3, 6, 5, 3
  045bbb4  lfs 5, 16(3)
  045bbb8  lfs 6, 20(3)
  045bbbc  lfs 7, 24(3)
  045bbc0  fmadds 1, 8, 9, 1
  045bbc4  fmadds 2, 10, 9, 2
  045bbc8  fmadds 3, 4, 9, 3
  045bbcc  fadds 1, 5, 1
  045bbd0  fadds 2, 6, 2
  045bbd4  fadds 3, 7, 3
  045bbd8  stfs 1, 16(3)
  045bbdc  stfs 2, 20(3)
  045bbe0  stfs 3, 24(3)
  045bbe4  lwz 3, 376(30)
  045bbe8  bl 0xf31a8
  045bbec  nop
  045bbf0  lis 3, 70
  045bbf4  lbz 4, 83(31)
  045bbf8  addi 3, 3, -20220
  045bbfc  cmpwi 4, 0
  045bc00  lfs 31, 64(3)
  045bc04  bf 2, 0x45c40c
  045bc08  lis 29, 151
  045bc0c  lfs 2, 20(31)
  045bc10  lfs 1, 16(31)
  045bc14  addic 29, 29, -25376
  045bc18  lis 3, 70
  045bc1c  lfs 3, 132(29)
  045bc20  lfs 4, 128(29)
  045bc24  fsubs 3, 2, 3
  045bc28  fsubs 4, 1, 4
  045bc2c  addi 3, 3, -20220
  045bc30  fmuls 3, 3, 3
  045bc34  fmadds 3, 4, 4, 3
  045bc38  lfs 4, 68(3)
  045bc3c  fsqrts 3, 3
  045bc40  fcmpu 0, 3, 4
  045bc44  cror 6, 1, 2
  045bc48  bt 6, 0x45beb8
  045bc4c  lfs 3, 208(29)
  045bc50  lfs 4, 212(29)
  045bc54  lis 3, 70
  045bc58  fsubs 1, 3, 1
  045bc5c  fsubs 2, 4, 2
  045bc60  addi 3, 3, -20220
  045bc64  lis 4, 115
  045bc68  addic 4, 4, 22784
  045bc6c  fabs 5, 1
  045bc70  fabs 6, 2
  045bc74  stfs 1, 232(1)
  045bc78  stfs 2, 236(1)
  045bc7c  lfs 3, 72(31)
  045bc80  fsubs 1, 5, 6
  045bc84  stfs 1, 240(1)
  045bc88  lwz 5, 232(1)
  045bc8c  lfs 4, 40(3)
  045bc90  lfs 1, 232(1)
  045bc94  lwz 3, 236(1)
  045bc98  lfs 2, 236(1)
  045bc9c  fabs 1, 1
  045bca0  lwz 6, 240(1)
  045bca4  rlwinm 3, 3, 3, 29, 29
  045bca8  fabs 7, 2
  045bcac  lfs 2, 240(1)
  045bcb0  rlwimi 3, 6, 2, 30, 30
  045bcb4  fsub 8, 2, 4
  045bcb8  rlwimi 3, 5, 4, 28, 28
  045bcbc  fsub 9, 2, 4
  045bcc0  ori 5, 4, 0
  045bcc4  rlwimi 5, 3, 2, 26, 28
  045bcc8  slwi 3, 3, 2
  045bccc  clrldi 5, 5, 32
  045bcd0  fsel 6, 8, 1, 6
  045bcd4  lfsx 1, 4, 3
  045bcd8  lfs 2, 4(5)
  045bcdc  fsel 5, 9, 7, 5
  045bce0  fcmpu 0, 6, 4
  045bce4  bt 1, 0x45bcec
  045bce8  b 0x45be0c
  045bcec  fsubs 7, 5, 6
  045bcf0  fadds 5, 5, 6
  045bcf4  addic 3, 1, 16
  045bcf8  li 6, 2
  045bcfc  addic 5, 3, 308
  045bd00  addic 4, 3, 292
  045bd04  mtctr 6
  045bd08  fdivs 5, 7, 5
  045bd0c  fmuls 6, 5, 5
  045bd10  stfs 5, 320(1)
  045bd14  stfs 5, 312(1)
  045bd18  stfs 5, 316(1)
  045bd1c  stfs 5, 308(1)
  045bd20  lfs 8, 320(1)
  045bd24  lfs 9, 312(1)
  045bd28  lfs 10, 316(1)
  045bd2c  fmuls 7, 6, 6
  045bd30  fmuls 9, 9, 6
  045bd34  fmuls 8, 8, 7
  045bd38  fmuls 5, 7, 7
  045bd3c  fmuls 7, 10, 7
  045bd40  stfs 9, 312(1)
  045bd44  fmuls 6, 8, 6
  045bd48  stfs 7, 316(1)
  045bd4c  stfs 6, 320(1)
  045bd50  lfs 6, 292(3)
  045bd54  fmuls 6, 6, 5
  045bd58  stfs 6, 308(3)
  045bd5c  lfs 6, 4(4)
  045bd60  addic 4, 4, 8
  045bd64  fmuls 6, 6, 5
  045bd68  addic 3, 3, 8
  045bd6c  stfs 6, 4(5)
  045bd70  addic 5, 5, 8
  045bd74  bdnz 0x45bd50
  045bd78  li 5, 4
  045bd7c  ori 3, 1, 0
  045bd80  mtctr 5
  045bd84  lis 4, 115
  045bd88  addic 5, 3, 308
  045bd8c  addic 4, 4, 22752
  045bd90  ori 7, 5, 0
  045bd94  lfs 5, 308(3)
  045bd98  lfs 6, 0(4)
  045bd9c  fmuls 5, 5, 6
  045bda0  lfs 6, 4(4)
  045bda4  addic 4, 4, 8
  045bda8  stfs 5, 308(3)
  045bdac  lfs 5, 4(5)
  045bdb0  addic 3, 3, 8
  045bdb4  fmuls 5, 5, 6
  045bdb8  stfs 5, 4(5)
  045bdbc  addic 5, 5, 8
  045bdc0  bdnz 0x45bd94
  045bdc4  ori 3, 1, 0
  045bdc8  mtctr 6
  045bdcc  lfs 5, 308(3)
  045bdd0  fadds 4, 4, 5
  045bdd4  addic 3, 3, 16
  045bdd8  lfs 5, 4(7)
  045bddc  lfs 6, 8(7)
  045bde0  lfs 7, 12(7)
  045bde4  addic 7, 7, 16
  045bde8  fadds 4, 4, 5
  045bdec  fadds 4, 4, 6
  045bdf0  fadds 4, 4, 7
  045bdf4  bdnz 0x45bdcc
  045bdf8  lis 3, 70
  045bdfc  addi 3, 3, -20220
  045be00  lfs 5, 72(3)
  045be04  fadds 4, 4, 5
  045be08  fmadds 4, 4, 1, 2
  045be0c  fmr 1, 3
  045be10  fmr 2, 4
  045be14  bl 0x5026a0
  045be18  nop
  045be1c  lis 3, 70
  045be20  addi 3, 3, -20220
  045be24  lfs 2, 76(3)
  045be28  fcmpu 0, 1, 2
  045be2c  cror 6, 1, 2
  045be30  bt 6, 0x45beb8
  045be34  lfs 1, 260(29)
  045be38  lfs 2, 256(29)
  045be3c  fmuls 1, 1, 1
  045be40  lfs 3, 264(29)
  045be44  lis 3, 70
  045be48  addi 3, 3, -20220
  045be4c  fmadds 1, 2, 2, 1
  045be50  lfs 2, 80(3)
  045be54  fmadds 1, 3, 3, 1
  045be58  fsqrts 1, 1
  045be5c  fcmpu 0, 1, 2
  045be60  cror 6, 0, 2
  045be64  bt 6, 0x45bea8
  045be68  lis 3, 70
  045be6c  vspltisw 2, -1
  045be70  li 5, 84
  045be74  addi 3, 3, -20220
  045be78  lis 4, 114
  045be7c  li 6, -3056
  045be80  vslw 2, 2, 2
  045be84  <unknown>
  045be88  li 3, 372
  045be8c  vspltw 3, 3, 0
  045be90  <unknown>
  045be94  vmaddfp 2, 4, 3, 2
  045be98  vctsxs 2, 2, 0
  045be9c  vsplth 2, 2, 1
  045bea0  stvehx 2, 3, 30
  045bea4  b 0x45beec
  045bea8  addic 3, 30, 372
  045beac  bl 0x4fffb4
  045beb0  nop
  045beb4  b 0x45beec
  045beb8  lhz 3, 372(30)
  045bebc  cmpwi 3, 0
  045bec0  bt 2, 0x45beec
  045bec4  li 3, 0
  045bec8  sth 3, 372(30)
  045becc  lfs 1, 208(29)
  045bed0  stfs 1, 352(30)
  045bed4  lfs 1, 212(29)
  045bed8  stfs 1, 356(30)
  045bedc  lfs 1, 216(29)
  045bee0  stfs 1, 360(30)
  045bee4  lfs 1, 220(29)
  045bee8  stfs 1, 364(30)
  045beec  addic 3, 30, 374
  045bef0  bl 0x4fffb4
  045bef4  nop
  045bef8  cmpwi 3, 0
  045befc  bt 2, 0x45bfb4
  045bf00  lis 3, 70
  045bf04  addi 28, 3, -20220
  045bf08  lfs 1, 88(28)
  045bf0c  lfs 2, 92(28)
  045bf10  bl 0xfcbe8
  045bf14  nop
  045bf18  lis 3, 114
  045bf1c  lfs 2, -3056(3)
  045bf20  fmuls 1, 1, 2
  045bf24  bl 0x502758
  045bf28  nop
  045bf2c  sth 3, 374(30)
  045bf30  lfs 1, 96(28)
  045bf34  lfs 30, 72(31)
  045bf38  lfs 2, 100(28)
  045bf3c  bl 0xfcbe8
  045bf40  nop
  045bf44  lfs 29, 104(28)
  045bf48  fmuls 2, 1, 29
  045bf4c  fmr 1, 30
  045bf50  bl 0x502578
  045bf54  nop
  045bf58  fmr 30, 1
  045bf5c  lfs 1, 40(28)
  045bf60  lfs 2, 108(28)
  045bf64  bl 0xfcbe8
  045bf68  nop
  045bf6c  fmuls 3, 1, 29
  045bf70  lfs 1, 112(28)
  045bf74  addic 3, 30, 352
  045bf78  fmr 2, 30
  045bf7c  bl 0xfe610
  045bf80  nop
  045bf84  lfs 1, 352(30)
  045bf88  lfs 2, 16(31)
  045bf8c  fadds 1, 1, 2
  045bf90  lfs 2, 356(30)
  045bf94  lfs 3, 360(30)
  045bf98  stfs 1, 352(30)
  045bf9c  lfs 1, 20(31)
  045bfa0  fadds 1, 2, 1
  045bfa4  stfs 1, 356(30)
  045bfa8  lfs 1, 24(31)
  045bfac  fadds 1, 3, 1
  045bfb0  stfs 1, 360(30)
  045bfb4  lhz 3, 372(30)
  045bfb8  cmpwi 3, 0
  045bfbc  bt 2, 0x45bfdc
  045bfc0  lis 3, 70
  045bfc4  lfs 30, 208(29)
  045bfc8  lfs 29, 212(29)
  045bfcc  addi 3, 3, -20220
  045bfd0  lfs 28, 216(29)
  045bfd4  lfs 31, 116(3)
  045bfd8  b 0x45bfe8
  045bfdc  lfs 30, 352(30)
  045bfe0  lfs 29, 356(30)
  045bfe4  lfs 28, 360(30)
  045bfe8  lfs 1, 16(31)
  045bfec  lis 3, 70
  045bff0  lfs 2, 20(31)
  045bff4  fsubs 30, 30, 1
  045bff8  fsubs 29, 29, 2
  045bffc  addi 3, 3, -20220
  045c000  lis 29, 115
  045c004  addic 29, 29, 22784
  045c008  lfs 1, 52(3)
  045c00c  fabs 3, 30
  045c010  fabs 4, 29
  045c014  stfs 30, 220(1)
  045c018  stfs 29, 224(1)
  045c01c  lfs 5, 24(31)
  045c020  fadds 1, 5, 1
  045c024  fsubs 2, 3, 4
  045c028  fsubs 28, 28, 1
  045c02c  stfs 2, 228(1)
  045c030  lwz 4, 220(1)
  045c034  lfs 27, 40(3)
  045c038  lfs 2, 220(1)
  045c03c  lwz 3, 224(1)
  045c040  lfs 1, 224(1)
  045c044  fabs 2, 2
  045c048  lwz 5, 228(1)
  045c04c  rlwinm 3, 3, 3, 29, 29
  045c050  fabs 5, 1
  045c054  lfs 1, 228(1)
  045c058  rlwimi 3, 5, 2, 30, 30
  045c05c  fsub 6, 1, 27
  045c060  fsub 7, 1, 27
  045c064  rlwimi 3, 4, 4, 28, 28
  045c068  ori 4, 29, 0
  045c06c  rlwimi 4, 3, 2, 26, 28
  045c070  slwi 3, 3, 2
  045c074  clrldi 4, 4, 32
  045c078  fsel 4, 6, 2, 4
  045c07c  lfsx 1, 29, 3
  045c080  fsel 3, 7, 5, 3
  045c084  lfs 2, 4(4)
  045c088  fcmpu 0, 4, 27
  045c08c  bt 1, 0x45c098
  045c090  fmr 1, 27
  045c094  b 0x45c1bc
  045c098  fsubs 5, 3, 4
  045c09c  fadds 3, 3, 4
  045c0a0  addic 3, 1, 16
  045c0a4  li 7, 2
  045c0a8  addic 4, 3, 260
  045c0ac  addic 5, 3, 276
  045c0b0  mtctr 7
  045c0b4  fdivs 3, 5, 3
  045c0b8  fmuls 4, 3, 3
  045c0bc  stfs 3, 288(1)
  045c0c0  stfs 3, 280(1)
  045c0c4  stfs 3, 284(1)
  045c0c8  stfs 3, 276(1)
  045c0cc  lfs 6, 288(1)
  045c0d0  lfs 7, 280(1)
  045c0d4  lfs 8, 284(1)
  045c0d8  fmuls 5, 4, 4
  045c0dc  fmuls 7, 7, 4
  045c0e0  fmuls 6, 6, 5
  045c0e4  fmuls 3, 5, 5
  045c0e8  fmuls 5, 8, 5
  045c0ec  stfs 7, 280(1)
  045c0f0  fmuls 4, 6, 4
  045c0f4  stfs 5, 284(1)
  045c0f8  stfs 4, 288(1)
  045c0fc  lfs 4, 260(3)
  045c100  fmuls 4, 4, 3
  045c104  stfs 4, 276(3)
  045c108  lfs 4, 4(4)
  045c10c  addic 3, 3, 8
  045c110  addic 4, 4, 8
  045c114  fmuls 4, 4, 3
  045c118  stfs 4, 4(5)
  045c11c  addic 5, 5, 8
  045c120  bdnz 0x45c0fc
  045c124  li 5, 4
  045c128  ori 3, 1, 0
  045c12c  mtctr 5
  045c130  lis 4, 115
  045c134  addic 5, 3, 276
  045c138  addic 4, 4, 22752
  045c13c  ori 6, 5, 0
  045c140  lfs 3, 276(3)
  045c144  lfs 4, 0(4)
  045c148  fmuls 3, 3, 4
  045c14c  lfs 4, 4(4)
  045c150  addic 4, 4, 8
  045c154  stfs 3, 276(3)
  045c158  lfs 3, 4(5)
  045c15c  addic 3, 3, 8
  045c160  fmuls 3, 3, 4
  045c164  stfs 3, 4(5)
  045c168  addic 5, 5, 8
  045c16c  bdnz 0x45c140
  045c170  fmr 3, 27
  045c174  ori 3, 1, 0
  045c178  mtctr 7
  045c17c  lfs 4, 276(3)
  045c180  fadds 3, 3, 4
  045c184  addic 3, 3, 16
  045c188  lfs 4, 4(6)
  045c18c  lfs 5, 8(6)
  045c190  lfs 6, 12(6)
  045c194  addic 6, 6, 16
  045c198  fadds 3, 3, 4
  045c19c  fadds 3, 3, 5
  045c1a0  fadds 3, 3, 6
  045c1a4  bdnz 0x45c17c
  045c1a8  lis 3, 70
  045c1ac  addi 3, 3, -20220
  045c1b0  lfs 4, 72(3)
  045c1b4  fadds 3, 3, 4
  045c1b8  fmadds 1, 3, 1, 2
  045c1bc  lfs 2, 72(31)
  045c1c0  bl 0x5025e0
  045c1c4  nop
  045c1c8  fmuls 2, 29, 29
  045c1cc  stfs 28, 212(1)
  045c1d0  fabs 4, 28
  045c1d4  fmadds 2, 30, 30, 2
  045c1d8  fsqrts 2, 2
  045c1dc  lwz 3, 212(1)
  045c1e0  lfs 3, 212(1)
  045c1e4  rlwinm 3, 3, 3, 29, 29
  045c1e8  fabs 3, 3
  045c1ec  fabs 5, 2
  045c1f0  stfs 2, 208(1)
  045c1f4  fsubs 2, 5, 4
  045c1f8  stfs 2, 216(1)
  045c1fc  lwz 4, 208(1)
  045c200  lfs 2, 208(1)
  045c204  lwz 5, 216(1)
  045c208  lfs 6, 216(1)
  045c20c  fabs 2, 2
  045c210  rlwimi 3, 5, 2, 30, 30
  045c214  fsub 7, 6, 27
  045c218  fsub 6, 6, 27
  045c21c  rlwimi 3, 4, 4, 28, 28
  045c220  ori 4, 29, 0
  045c224  rlwimi 4, 3, 2, 26, 28
  045c228  slwi 3, 3, 2
  045c22c  clrldi 4, 4, 32
  045c230  fsel 4, 7, 2, 4
  045c234  lfsx 30, 29, 3
  045c238  lfs 2, 4(4)
  045c23c  fsel 3, 6, 3, 5
  045c240  fcmpu 0, 4, 27
  045c244  bt 1, 0x45c24c
  045c248  b 0x45c36c
  045c24c  fsubs 5, 3, 4
  045c250  fadds 3, 3, 4
  045c254  addic 3, 1, 16
  045c258  li 6, 2
  045c25c  addic 5, 3, 244
  045c260  addic 4, 3, 228
  045c264  mtctr 6
  045c268  fdivs 3, 5, 3
  045c26c  fmuls 4, 3, 3
  045c270  stfs 3, 256(1)
  045c274  stfs 3, 248(1)
  045c278  stfs 3, 252(1)
  045c27c  stfs 3, 244(1)
  045c280  lfs 6, 256(1)
  045c284  lfs 7, 248(1)
  045c288  lfs 8, 252(1)
  045c28c  fmuls 5, 4, 4
  045c290  fmuls 7, 7, 4
  045c294  fmuls 6, 6, 5
  045c298  fmuls 3, 5, 5
  045c29c  fmuls 5, 8, 5
  045c2a0  stfs 7, 248(1)
  045c2a4  fmuls 4, 6, 4
  045c2a8  stfs 5, 252(1)
  045c2ac  stfs 4, 256(1)
  045c2b0  lfs 4, 228(3)
  045c2b4  fmuls 4, 4, 3
  045c2b8  stfs 4, 244(3)
  045c2bc  lfs 4, 4(4)
  045c2c0  addic 4, 4, 8
  045c2c4  fmuls 4, 4, 3
  045c2c8  addic 3, 3, 8
  045c2cc  stfs 4, 4(5)
  045c2d0  addic 5, 5, 8
  045c2d4  bdnz 0x45c2b0
  045c2d8  li 5, 4
  045c2dc  ori 3, 1, 0
  045c2e0  mtctr 5
  045c2e4  lis 4, 115
  045c2e8  addic 5, 3, 244
  045c2ec  addic 4, 4, 22752
  045c2f0  ori 7, 5, 0
  045c2f4  lfs 3, 244(3)
  045c2f8  lfs 4, 0(4)
  045c2fc  fmuls 3, 3, 4
  045c300  lfs 4, 4(4)
  045c304  addic 4, 4, 8
  045c308  stfs 3, 244(3)
  045c30c  lfs 3, 4(5)
  045c310  addic 3, 3, 8
  045c314  fmuls 3, 3, 4
  045c318  stfs 3, 4(5)
  045c31c  addic 5, 5, 8
  045c320  bdnz 0x45c2f4
  045c324  ori 3, 1, 0
  045c328  mtctr 6
  045c32c  lfs 3, 244(3)
  045c330  lfs 4, 4(7)
  045c334  fadds 3, 27, 3
  045c338  lfs 5, 8(7)
  045c33c  addic 3, 3, 16
  045c340  lfs 27, 12(7)
  045c344  addic 7, 7, 16
  045c348  fadds 3, 3, 4
  045c34c  fadds 3, 3, 5
  045c350  fadds 27, 3, 27
  045c354  bdnz 0x45c32c
  045c358  lis 3, 70
  045c35c  addi 3, 3, -20220
  045c360  lfs 3, 72(3)
  045c364  fadds 27, 27, 3
  045c368  fmadds 27, 27, 30, 2
  045c36c  lis 3, 70
  045c370  fneg 27, 27
  045c374  addi 3, 3, -20220
  045c378  lfs 2, 76(3)
  045c37c  fcmpu 0, 1, 2
  045c380  cror 6, 0, 2
  045c384  bt 6, 0x45c390
  045c388  fmr 1, 2
  045c38c  b 0x45c3ac
  045c390  lis 3, 70
  045c394  addi 3, 3, -20220
  045c398  lfs 2, 120(3)
  045c39c  fcmpu 0, 1, 2
  045c3a0  cror 6, 1, 2
  045c3a4  bt 6, 0x45c3ac
  045c3a8  fmr 1, 2
  045c3ac  lis 3, 70
  045c3b0  addi 3, 3, -20220
  045c3b4  lfs 2, 124(3)
  045c3b8  fcmpu 0, 27, 2
  045c3bc  cror 6, 0, 2
  045c3c0  bt 6, 0x45c3cc
  045c3c4  fmr 27, 2
  045c3c8  b 0x45c3e8
  045c3cc  lis 3, 70
  045c3d0  addi 3, 3, -20220
  045c3d4  lfs 2, 128(3)
  045c3d8  fcmpu 0, 27, 2
  045c3dc  cror 6, 1, 2
  045c3e0  bt 6, 0x45c3e8
  045c3e4  fmr 27, 2
  045c3e8  lis 3, 70
  045c3ec  addi 3, 3, -20220
  045c3f0  lfs 2, 132(3)
  045c3f4  fmuls 2, 1, 2
  045c3f8  stfs 2, 168(30)
  045c3fc  lfs 2, 136(3)
  045c400  stfs 27, 164(30)
  045c404  fmuls 1, 1, 2
  045c408  stfs 1, 296(30)
  045c40c  lis 3, 151
  045c410  lbz 3, -16268(3)
  045c414  cmpwi 3, 0
  045c418  bt 2, 0x45c424
  045c41c  lis 3, 16432
  045c420  stw 3, 176(30)
  045c424  lis 3, 70
  045c428  lis 29, 114
  045c42c  addi 5, 3, -20220
  045c430  addic 4, 30, 64
  045c434  ori 3, 31, 0
  045c438  lfs 30, 136(5)
  045c43c  lfs 2, -3060(29)
  045c440  li 5, 0
  045c444  fmuls 1, 2, 31
  045c448  fmuls 2, 2, 30
  045c44c  bl 0x1167c8
  045c450  nop
  045c454  lfs 2, -3060(29)
  045c458  addic 4, 30, 192
  045c45c  fmuls 1, 2, 31
  045c460  ori 3, 31, 0
  045c464  fmuls 2, 2, 30
  045c468  li 5, 1
  045c46c  bl 0x1167c8
  045c470  nop
  045c474  ld 0, 480(1)
  045c478  mtlr 0
  045c47c  lfd 25, 408(1)
  045c480  lfd 26, 416(1)
  045c484  lfd 27, 424(1)
  045c488  lfd 28, 432(1)
  045c48c  lfd 29, 440(1)
  045c490  lfd 30, 448(1)
  045c494  lfd 31, 456(1)
  045c498  ld 26, 360(1)
  045c49c  ld 27, 368(1)
  045c4a0  ld 28, 376(1)
  045c4a4  ld 29, 384(1)
  045c4a8  ld 30, 392(1)
  045c4ac  ld 31, 400(1)
  045c4b0  addi 1, 1, 464
  045c4b4  blr
