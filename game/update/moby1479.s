# game/update/moby1479.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1479:   # 0x28a9f0, 0x10c0 bytes
  028a9f0  stdu 1, -448(1)
  028a9f4  mflr 0
  028a9f8  std 0, 464(1)
  028a9fc  stfd 29, 424(1)
  028aa00  stfd 30, 432(1)
  028aa04  stfd 31, 440(1)
  028aa08  std 31, 416(1)
  028aa0c  ori 31, 3, 0
  028aa10  std 30, 408(1)
  028aa14  lbz 3, 32(31)
  028aa18  lwz 30, 120(31)
  028aa1c  cmpwi 3, 1
  028aa20  cmpwi 1, 3, 3
  028aa24  cmpwi 6, 3, 2
  028aa28  std 29, 400(1)
  028aa2c  std 28, 392(1)
  028aa30  std 27, 384(1)
  028aa34  std 26, 376(1)
  028aa38  std 25, 368(1)
  028aa3c  std 24, 360(1)
  028aa40  std 23, 352(1)
  028aa44  std 22, 344(1)
  028aa48  std 21, 336(1)
  028aa4c  cmpwi 7, 3, 0
  028aa50  bt 1, 0x28aa64
  028aa54  cmpwi 3, -1
  028aa58  bf 1, 0x28ba68
  028aa5c  bf 29, 0x28aa70
  028aa60  b 0x28aa90
  028aa64  bf 25, 0x28b228
  028aa68  bf 5, 0x28ba5c
  028aa6c  b 0x28ba68
  028aa70  lwz 5, 0(30)
  028aa74  addic 3, 31, 192
  028aa78  addic 4, 31, 64
  028aa7c  addic 5, 5, 1
  028aa80  stb 5, 32(31)
  028aa84  bl 0x500b64
  028aa88  nop
  028aa8c  b 0x28ba68
  028aa90  lis 5, 41
  028aa94  lfs 1, 16(31)
  028aa98  lfs 2, 20(31)
  028aa9c  lis 4, 16576
  028aaa0  addi 5, 5, -22048
  028aaa4  stfs 1, 128(1)
  028aaa8  lfs 1, 24(31)
  028aaac  addic 3, 1, 128
  028aab0  stfs 2, 132(1)
  028aab4  stfs 1, 136(1)
  028aab8  stw 4, 140(1)
  028aabc  lfs 1, 0(5)
  028aac0  bl 0x502910
  028aac4  nop
  028aac8  cmpwi 3, -1
  028aacc  bt 2, 0x28ba68
  028aad0  addic 3, 30, 192
  028aad4  bl 0x4fff60
  028aad8  nop
  028aadc  cmpwi 3, 0
  028aae0  bt 2, 0x28aec8
  028aae4  lis 3, 123
  028aae8  lis 4, 123
  028aaec  lwz 3, -20416(3)
  028aaf0  lwz 4, -20412(4)
  028aaf4  extsw 3, 3
  028aaf8  std 3, 320(1)
  028aafc  extsw 3, 4
  028ab00  lfd 1, 320(1)
  028ab04  std 3, 320(1)
  028ab08  fcfid 1, 1
  028ab0c  frsp 1, 1
  028ab10  lfd 2, 320(1)
  028ab14  fcfid 2, 2
  028ab18  frsp 2, 2
  028ab1c  bl 0xfcbe8
  028ab20  nop
  028ab24  lis 3, 114
  028ab28  lfs 2, -3056(3)
  028ab2c  fmuls 1, 1, 2
  028ab30  bl 0x502758
  028ab34  nop
  028ab38  stw 3, 192(30)
  028ab3c  li 3, 7
  028ab40  li 30, 1
  028ab44  bl 0xfc620
  028ab48  nop
  028ab4c  cmpwi 3, 0
  028ab50  bf 2, 0x28ab64
  028ab54  li 3, 5
  028ab58  bl 0xfc620
  028ab5c  nop
  028ab60  addic 30, 3, 5
  028ab64  cmpwi 30, 0
  028ab68  li 28, 0
  028ab6c  bf 1, 0x28aec8
  028ab70  lis 3, 41
  028ab74  addic 29, 31, 16
  028ab78  addi 3, 3, -22048
  028ab7c  lfs 30, 4(3)
  028ab80  lfs 31, 8(3)
  028ab84  lis 4, 123
  028ab88  lis 27, 114
  028ab8c  fmr 1, 30
  028ab90  addic 3, 1, 176
  028ab94  lfs 2, -20464(4)
  028ab98  lfs 3, -3052(27)
  028ab9c  fmuls 2, 2, 3
  028aba0  bl 0xfea60
  028aba4  nop
  028aba8  lis 3, 123
  028abac  lfs 2, -20468(3)
  028abb0  fneg 1, 2
  028abb4  bl 0xfcbe8
  028abb8  nop
  028abbc  lfs 5, 196(31)
  028abc0  lfs 7, 192(31)
  028abc4  fmuls 2, 5, 5
  028abc8  lfs 3, 200(31)
  028abcc  fadds 1, 1, 31
  028abd0  lis 3, 123
  028abd4  lfs 9, -3052(27)
  028abd8  lfs 6, 176(1)
  028abdc  lfs 10, -20480(3)
  028abe0  fmadds 2, 7, 7, 2
  028abe4  lfs 4, 180(1)
  028abe8  fmuls 8, 10, 1
  028abec  fmadds 2, 3, 3, 2
  028abf0  fmuls 8, 8, 9
  028abf4  fsqrts 11, 2
  028abf8  lfs 2, 184(1)
  028abfc  fmr 1, 11
  028ac00  fcmpu 0, 1, 30
  028ac04  bf 2, 0x28ac1c
  028ac08  fmr 3, 30
  028ac0c  lfs 1, 204(31)
  028ac10  fmr 5, 3
  028ac14  fmr 7, 5
  028ac18  b 0x28ac30
  028ac1c  fdivs 8, 8, 1
  028ac20  lfs 1, 204(31)
  028ac24  fmuls 7, 7, 8
  028ac28  fmuls 5, 5, 8
  028ac2c  fmuls 3, 3, 8
  028ac30  fadds 6, 7, 6
  028ac34  lis 3, 123
  028ac38  fadds 4, 5, 4
  028ac3c  stfs 1, 156(1)
  028ac40  fadds 3, 3, 2
  028ac44  lfs 2, -20468(3)
  028ac48  fneg 1, 2
  028ac4c  stfs 6, 144(1)
  028ac50  stfs 4, 148(1)
  028ac54  stfs 3, 152(1)
  028ac58  bl 0xfcbe8
  028ac5c  nop
  028ac60  lfs 3, 148(1)
  028ac64  fadds 1, 1, 31
  028ac68  lfs 4, 144(1)
  028ac6c  lis 3, 123
  028ac70  fmuls 2, 3, 3
  028ac74  lfs 5, 152(1)
  028ac78  lfs 6, -20476(3)
  028ac7c  lis 3, 114
  028ac80  fmuls 1, 6, 1
  028ac84  fmadds 2, 4, 4, 2
  028ac88  lfs 7, -3052(3)
  028ac8c  lis 4, 123
  028ac90  lis 3, 123
  028ac94  lis 5, 123
  028ac98  fmadds 2, 5, 5, 2
  028ac9c  fmuls 10, 1, 7
  028aca0  fsqrts 6, 2
  028aca4  lfs 2, 156(1)
  028aca8  stfs 2, 172(1)
  028acac  lfs 8, -20472(3)
  028acb0  lfs 1, -20448(4)
  028acb4  lfs 2, -20444(5)
  028acb8  fdivs 9, 10, 6
  028acbc  fsub 10, 30, 6
  028acc0  fsub 11, 30, 6
  028acc4  fsub 12, 30, 6
  028acc8  fsub 13, 6, 30
  028accc  fsub 0, 6, 30
  028acd0  fsub 6, 6, 30
  028acd4  fmuls 5, 5, 9
  028acd8  fmuls 4, 4, 9
  028acdc  fmuls 3, 3, 9
  028ace0  fsel 9, 10, 30, 5
  028ace4  fsel 10, 11, 30, 4
  028ace8  fsel 11, 12, 30, 3
  028acec  fsel 5, 13, 9, 5
  028acf0  fsel 4, 0, 10, 4
  028acf4  fsel 3, 6, 11, 3
  028acf8  fnmsubs 6, 8, 7, 5
  028acfc  stfs 5, 168(1)
  028ad00  stfs 4, 160(1)
  028ad04  stfs 3, 164(1)
  028ad08  stfs 6, 168(1)
  028ad0c  bl 0xfcbe8
  028ad10  nop
  028ad14  lis 3, 123
  028ad18  lis 4, 123
  028ad1c  stfs 1, 156(1)
  028ad20  lfs 1, -20440(3)
  028ad24  lfs 2, -20436(4)
  028ad28  bl 0xfcbe8
  028ad2c  nop
  028ad30  lis 3, 123
  028ad34  stfs 1, 172(1)
  028ad38  lis 4, 123
  028ad3c  fmr 1, 30
  028ad40  fmr 2, 31
  028ad44  lwz 3, -20432(3)
  028ad48  lwz 4, -20428(4)
  028ad4c  extsw 27, 3
  028ad50  extsw 26, 4
  028ad54  bl 0xfcbe8
  028ad58  nop
  028ad5c  ori 4, 26, 0
  028ad60  ori 3, 27, 0
  028ad64  bl 0x5027bc
  028ad68  nop
  028ad6c  lis 4, 123
  028ad70  lis 5, 123
  028ad74  fmr 1, 30
  028ad78  ori 27, 3, 0
  028ad7c  fmr 2, 31
  028ad80  lwz 3, -20424(4)
  028ad84  lwz 4, -20420(5)
  028ad88  extsw 26, 3
  028ad8c  extsw 25, 4
  028ad90  bl 0xfcbe8
  028ad94  nop
  028ad98  ori 3, 26, 0
  028ad9c  ori 4, 25, 0
  028ada0  bl 0x5027bc
  028ada4  nop
  028ada8  ori 26, 3, 0
  028adac  fmr 1, 30
  028adb0  fmr 2, 31
  028adb4  bl 0xfcbe8
  028adb8  nop
  028adbc  lis 3, 251
  028adc0  lis 25, 114
  028adc4  lwz 3, -9728(3)
  028adc8  extsw 3, 3
  028adcc  std 3, 320(1)
  028add0  lfs 2, -3056(25)
  028add4  lfd 3, 320(1)
  028add8  fcfid 3, 3
  028addc  frsp 3, 3
  028ade0  fmadds 1, 3, 1, 31
  028ade4  fmuls 1, 2, 1
  028ade8  bl 0x502758
  028adec  nop
  028adf0  lis 4, 123
  028adf4  lis 24, 123
  028adf8  ori 23, 3, 0
  028adfc  lwz 4, -20460(4)
  028ae00  extsw 4, 4
  028ae04  std 4, 320(1)
  028ae08  lfs 2, -20452(24)
  028ae0c  lfd 3, 320(1)
  028ae10  fneg 1, 2
  028ae14  fcfid 3, 3
  028ae18  frsp 29, 3
  028ae1c  bl 0xfcbe8
  028ae20  nop
  028ae24  fadds 1, 1, 31
  028ae28  lfs 2, -3056(25)
  028ae2c  fmuls 1, 29, 1
  028ae30  fmuls 1, 2, 1
  028ae34  bl 0x502758
  028ae38  nop
  028ae3c  lis 4, 123
  028ae40  ori 22, 3, 0
  028ae44  lwz 4, -20456(4)
  028ae48  extsw 4, 4
  028ae4c  std 4, 320(1)
  028ae50  lfs 2, -20452(24)
  028ae54  lfd 3, 320(1)
  028ae58  fneg 1, 2
  028ae5c  fcfid 3, 3
  028ae60  frsp 29, 3
  028ae64  bl 0xfcbe8
  028ae68  nop
  028ae6c  fadds 1, 1, 31
  028ae70  lfs 2, -3056(25)
  028ae74  fmuls 1, 29, 1
  028ae78  fmuls 1, 2, 1
  028ae7c  bl 0x502758
  028ae80  nop
  028ae84  lis 5, 123
  028ae88  ori 10, 3, 0
  028ae8c  addic 4, 1, 144
  028ae90  ori 8, 23, 0
  028ae94  ori 6, 27, 0
  028ae98  lwz 3, -20408(5)
  028ae9c  ori 7, 26, 0
  028aea0  addic 5, 1, 160
  028aea4  extsw 9, 3
  028aea8  ori 3, 29, 0
  028aeac  std 9, 112(1)
  028aeb0  ori 9, 22, 0
  028aeb4  bl 0x1206e8
  028aeb8  nop
  028aebc  addic 28, 28, 1
  028aec0  cmpw 28, 30
  028aec4  bt 0, 0x28ab84
  028aec8  li 3, 4
  028aecc  bl 0xfc620
  028aed0  nop
  028aed4  cmpwi 3, 0
  028aed8  bf 2, 0x28ba68
  028aedc  lis 3, 123
  028aee0  lfs 2, -20532(3)
  028aee4  fneg 1, 2
  028aee8  bl 0xfcbe8
  028aeec  nop
  028aef0  fmr 5, 1
  028aef4  lfs 1, 196(31)
  028aef8  lfs 2, 192(31)
  028aefc  fmuls 3, 1, 1
  028af00  lfs 4, 200(31)
  028af04  lis 3, 41
  028af08  lis 4, 114
  028af0c  addi 3, 3, -22048
  028af10  fmr 1, 5
  028af14  fmadds 3, 2, 2, 3
  028af18  lfs 30, 8(3)
  028af1c  lfs 31, 4(3)
  028af20  lis 3, 123
  028af24  fadds 1, 1, 30
  028af28  fmadds 3, 4, 4, 3
  028af2c  lfs 6, -20544(3)
  028af30  lfs 7, -3052(4)
  028af34  fmuls 5, 6, 1
  028af38  fsqrts 3, 3
  028af3c  lfs 1, 196(31)
  028af40  fmuls 5, 5, 7
  028af44  fcmpu 0, 3, 31
  028af48  bf 2, 0x28af60
  028af4c  fmr 3, 31
  028af50  lfs 4, 204(31)
  028af54  fmr 2, 3
  028af58  fmr 1, 2
  028af5c  b 0x28af78
  028af60  fdivs 5, 5, 3
  028af64  fmr 7, 1
  028af68  fmuls 3, 4, 5
  028af6c  fmuls 1, 2, 5
  028af70  lfs 4, 204(31)
  028af74  fmuls 2, 7, 5
  028af78  lis 3, 123
  028af7c  stfs 1, 192(1)
  028af80  stfs 2, 196(1)
  028af84  stfs 3, 200(1)
  028af88  lfs 2, -20532(3)
  028af8c  stfs 4, 204(1)
  028af90  fneg 1, 2
  028af94  bl 0xfcbe8
  028af98  nop
  028af9c  fadds 1, 1, 30
  028afa0  lis 3, 123
  028afa4  lis 30, 114
  028afa8  lis 4, 123
  028afac  lfs 2, -20540(3)
  028afb0  lfs 3, -3052(30)
  028afb4  li 3, 0
  028afb8  fmuls 2, 2, 1
  028afbc  stw 3, 220(1)
  028afc0  stw 3, 212(1)
  028afc4  stw 3, 208(1)
  028afc8  lfs 4, -20536(4)
  028afcc  fneg 1, 4
  028afd0  fmuls 3, 2, 3
  028afd4  fmr 2, 4
  028afd8  stfs 3, 216(1)
  028afdc  bl 0xfcbe8
  028afe0  nop
  028afe4  lfs 3, 212(31)
  028afe8  lfs 4, 208(31)
  028afec  fmuls 2, 3, 3
  028aff0  lfs 5, 216(31)
  028aff4  lfs 6, -3052(30)
  028aff8  fmuls 6, 1, 6
  028affc  fmadds 2, 4, 4, 2
  028b000  lfs 8, 208(1)
  028b004  lis 3, 123
  028b008  lfs 9, 212(1)
  028b00c  lis 4, 123
  028b010  lfs 10, 216(1)
  028b014  fmadds 2, 5, 5, 2
  028b018  lfs 1, -20512(3)
  028b01c  fsqrts 7, 2
  028b020  lfs 2, -20508(4)
  028b024  fdivs 6, 6, 7
  028b028  fsub 11, 31, 7
  028b02c  fsub 12, 31, 7
  028b030  fsub 13, 31, 7
  028b034  fsub 0, 7, 31
  028b038  fsub 29, 7, 31
  028b03c  fsub 7, 7, 31
  028b040  fmuls 5, 5, 6
  028b044  fmuls 3, 3, 6
  028b048  fmuls 4, 4, 6
  028b04c  fsel 6, 11, 31, 5
  028b050  fsel 11, 12, 31, 3
  028b054  fsel 12, 13, 31, 4
  028b058  fsel 5, 0, 6, 5
  028b05c  fsel 3, 29, 11, 3
  028b060  fsel 4, 7, 12, 4
  028b064  fadds 5, 10, 5
  028b068  fadds 3, 9, 3
  028b06c  fadds 4, 8, 4
  028b070  stfs 5, 216(1)
  028b074  stfs 3, 212(1)
  028b078  stfs 4, 208(1)
  028b07c  bl 0xfcbe8
  028b080  nop
  028b084  lis 3, 123
  028b088  lis 4, 123
  028b08c  stfs 1, 204(1)
  028b090  lfs 1, -20504(3)
  028b094  lfs 2, -20500(4)
  028b098  bl 0xfcbe8
  028b09c  nop
  028b0a0  lis 3, 123
  028b0a4  stfs 1, 220(1)
  028b0a8  lis 4, 123
  028b0ac  fmr 1, 31
  028b0b0  fmr 2, 30
  028b0b4  lwz 3, -20496(3)
  028b0b8  lwz 4, -20492(4)
  028b0bc  extsw 30, 3
  028b0c0  extsw 29, 4
  028b0c4  bl 0xfcbe8
  028b0c8  nop
  028b0cc  ori 4, 29, 0
  028b0d0  ori 3, 30, 0
  028b0d4  bl 0x5027bc
  028b0d8  nop
  028b0dc  lis 4, 123
  028b0e0  lis 5, 123
  028b0e4  fmr 1, 31
  028b0e8  ori 30, 3, 0
  028b0ec  fmr 2, 30
  028b0f0  lwz 3, -20488(4)
  028b0f4  lwz 4, -20484(5)
  028b0f8  extsw 29, 3
  028b0fc  extsw 28, 4
  028b100  bl 0xfcbe8
  028b104  nop
  028b108  ori 3, 29, 0
  028b10c  ori 4, 28, 0
  028b110  bl 0x5027bc
  028b114  nop
  028b118  ori 29, 3, 0
  028b11c  fmr 1, 31
  028b120  fmr 2, 30
  028b124  bl 0xfcbe8
  028b128  nop
  028b12c  lis 3, 123
  028b130  lis 28, 114
  028b134  lwz 3, -20528(3)
  028b138  extsw 3, 3
  028b13c  std 3, 320(1)
  028b140  lfs 2, -3056(28)
  028b144  lfd 3, 320(1)
  028b148  fcfid 3, 3
  028b14c  frsp 3, 3
  028b150  fmadds 1, 3, 1, 30
  028b154  fmuls 1, 2, 1
  028b158  bl 0x502758
  028b15c  nop
  028b160  lis 4, 123
  028b164  lis 27, 123
  028b168  ori 26, 3, 0
  028b16c  lwz 4, -20524(4)
  028b170  extsw 4, 4
  028b174  std 4, 320(1)
  028b178  lfs 2, -20516(27)
  028b17c  lfd 3, 320(1)
  028b180  fneg 1, 2
  028b184  fcfid 3, 3
  028b188  frsp 31, 3
  028b18c  bl 0xfcbe8
  028b190  nop
  028b194  fadds 1, 1, 30
  028b198  lfs 2, -3056(28)
  028b19c  fmuls 1, 31, 1
  028b1a0  fmuls 1, 2, 1
  028b1a4  bl 0x502758
  028b1a8  nop
  028b1ac  lis 4, 123
  028b1b0  ori 25, 3, 0
  028b1b4  lwz 4, -20520(4)
  028b1b8  extsw 4, 4
  028b1bc  std 4, 320(1)
  028b1c0  lfs 2, -20516(27)
  028b1c4  lfd 3, 320(1)
  028b1c8  fneg 1, 2
  028b1cc  fcfid 3, 3
  028b1d0  frsp 31, 3
  028b1d4  bl 0xfcbe8
  028b1d8  nop
  028b1dc  fadds 1, 1, 30
  028b1e0  lfs 2, -3056(28)
  028b1e4  fmuls 1, 31, 1
  028b1e8  fmuls 1, 2, 1
  028b1ec  bl 0x502758
  028b1f0  nop
  028b1f4  li 11, -1
  028b1f8  ori 10, 3, 0
  028b1fc  ori 6, 30, 0
  028b200  ori 7, 29, 0
  028b204  addic 3, 31, 16
  028b208  ori 8, 26, 0
  028b20c  std 11, 112(1)
  028b210  addic 4, 1, 192
  028b214  ori 9, 25, 0
  028b218  addic 5, 1, 208
  028b21c  bl 0x1206e8
  028b220  nop
  028b224  b 0x28ba68
  028b228  addic 3, 30, 196
  028b22c  bl 0x4fff60
  028b230  nop
  028b234  cmpwi 3, 0
  028b238  bt 2, 0x28b2c8
  028b23c  lis 3, 41
  028b240  lwz 4, 200(30)
  028b244  addi 3, 3, -22048
  028b248  cmpwi 4, 20
  028b24c  lfs 1, 12(3)
  028b250  bf 1, 0x28b290
  028b254  lis 3, 41
  028b258  li 4, 10
  028b25c  fmr 2, 1
  028b260  addi 3, 3, -22048
  028b264  stw 4, 200(30)
  028b268  lfs 1, 0(3)
  028b26c  bl 0xfcbe8
  028b270  nop
  028b274  lis 3, 114
  028b278  lfs 2, -3056(3)
  028b27c  fmuls 1, 1, 2
  028b280  bl 0x502758
  028b284  nop
  028b288  stw 3, 196(30)
  028b28c  b 0x28b2c8
  028b290  lis 3, 41
  028b294  fmr 2, 1
  028b298  li 4, 30
  028b29c  addi 3, 3, -22048
  028b2a0  stw 4, 200(30)
  028b2a4  lfs 1, 0(3)
  028b2a8  bl 0xfcbe8
  028b2ac  nop
  028b2b0  lis 3, 114
  028b2b4  lfs 2, -3056(3)
  028b2b8  fmuls 1, 1, 2
  028b2bc  bl 0x502758
  028b2c0  nop
  028b2c4  stw 3, 196(30)
  028b2c8  lis 5, 41
  028b2cc  lfs 1, 16(31)
  028b2d0  lfs 2, 20(31)
  028b2d4  lis 4, 16576
  028b2d8  addi 5, 5, -22048
  028b2dc  stfs 1, 224(1)
  028b2e0  lfs 1, 24(31)
  028b2e4  addic 3, 1, 224
  028b2e8  stfs 2, 228(1)
  028b2ec  stfs 1, 232(1)
  028b2f0  stw 4, 236(1)
  028b2f4  lfs 1, 0(5)
  028b2f8  bl 0x502910
  028b2fc  nop
  028b300  cmpwi 3, -1
  028b304  bf 2, 0x28b31c
  028b308  li 3, 4
  028b30c  bl 0xfc620
  028b310  nop
  028b314  cmpwi 3, 0
  028b318  bf 2, 0x28ba68
  028b31c  addic 3, 30, 192
  028b320  bl 0x4fff60
  028b324  nop
  028b328  cmpwi 3, 0
  028b32c  bt 2, 0x28b714
  028b330  lis 3, 123
  028b334  lis 4, 123
  028b338  lwz 3, -20336(3)
  028b33c  lwz 4, -20332(4)
  028b340  extsw 3, 3
  028b344  extsw 4, 4
  028b348  std 3, 320(1)
  028b34c  lfd 1, 320(1)
  028b350  std 4, 320(1)
  028b354  fcfid 1, 1
  028b358  frsp 1, 1
  028b35c  lfd 2, 320(1)
  028b360  fcfid 2, 2
  028b364  frsp 2, 2
  028b368  bl 0xfcbe8
  028b36c  nop
  028b370  lis 3, 114
  028b374  lfs 2, -3056(3)
  028b378  fmuls 1, 1, 2
  028b37c  bl 0x502758
  028b380  nop
  028b384  stw 3, 192(30)
  028b388  li 3, 7
  028b38c  li 27, 1
  028b390  bl 0xfc620
  028b394  nop
  028b398  cmpwi 3, 0
  028b39c  bf 2, 0x28b3b0
  028b3a0  li 3, 5
  028b3a4  bl 0xfc620
  028b3a8  nop
  028b3ac  addic 27, 3, 5
  028b3b0  cmpwi 27, 0
  028b3b4  li 28, 0
  028b3b8  bf 1, 0x28b714
  028b3bc  lis 3, 41
  028b3c0  addic 29, 31, 16
  028b3c4  addi 3, 3, -22048
  028b3c8  lfs 30, 4(3)
  028b3cc  lfs 31, 8(3)
  028b3d0  lis 4, 123
  028b3d4  fmr 1, 30
  028b3d8  lis 26, 114
  028b3dc  addic 3, 1, 304
  028b3e0  lfs 2, -20388(4)
  028b3e4  lfs 3, -3052(26)
  028b3e8  fmuls 2, 2, 3
  028b3ec  bl 0xfea60
  028b3f0  nop
  028b3f4  lis 3, 123
  028b3f8  lfs 2, -20392(3)
  028b3fc  fneg 1, 2
  028b400  bl 0xfcbe8
  028b404  nop
  028b408  lfs 5, 196(31)
  028b40c  lfs 7, 192(31)
  028b410  fmuls 2, 5, 5
  028b414  lfs 3, 200(31)
  028b418  fadds 1, 1, 31
  028b41c  lis 3, 123
  028b420  lfs 9, -20404(3)
  028b424  fmadds 2, 7, 7, 2
  028b428  fmuls 8, 9, 1
  028b42c  lfs 10, -3052(26)
  028b430  lfs 6, 304(1)
  028b434  lfs 4, 308(1)
  028b438  fmadds 2, 3, 3, 2
  028b43c  fmuls 8, 8, 10
  028b440  fsqrts 11, 2
  028b444  lfs 2, 312(1)
  028b448  fmr 1, 11
  028b44c  fcmpu 0, 1, 30
  028b450  bf 2, 0x28b468
  028b454  fmr 3, 30
  028b458  lfs 1, 204(31)
  028b45c  fmr 5, 3
  028b460  fmr 7, 5
  028b464  b 0x28b47c
  028b468  fdivs 8, 8, 1
  028b46c  lfs 1, 204(31)
  028b470  fmuls 7, 7, 8
  028b474  fmuls 5, 5, 8
  028b478  fmuls 3, 3, 8
  028b47c  fadds 6, 7, 6
  028b480  fadds 4, 5, 4
  028b484  lis 3, 123
  028b488  fadds 3, 3, 2
  028b48c  stfs 1, 284(1)
  028b490  lfs 2, -20392(3)
  028b494  fneg 1, 2
  028b498  stfs 6, 272(1)
  028b49c  stfs 4, 276(1)
  028b4a0  stfs 3, 280(1)
  028b4a4  bl 0xfcbe8
  028b4a8  nop
  028b4ac  lfs 3, 276(1)
  028b4b0  lfs 4, 272(1)
  028b4b4  fadds 1, 1, 31
  028b4b8  fmuls 2, 3, 3
  028b4bc  lfs 5, 280(1)
  028b4c0  lis 3, 123
  028b4c4  lfs 6, -20400(3)
  028b4c8  lis 3, 114
  028b4cc  fmuls 1, 6, 1
  028b4d0  fmadds 2, 4, 4, 2
  028b4d4  lfs 7, -3052(3)
  028b4d8  lis 3, 123
  028b4dc  fmadds 2, 5, 5, 2
  028b4e0  fmuls 10, 1, 7
  028b4e4  lis 4, 123
  028b4e8  lis 5, 123
  028b4ec  fsqrts 6, 2
  028b4f0  lfs 2, 284(1)
  028b4f4  stfs 2, 300(1)
  028b4f8  lfs 8, -20396(3)
  028b4fc  lfs 1, -20368(4)
  028b500  lfs 2, -20364(5)
  028b504  fdivs 9, 10, 6
  028b508  fsub 10, 30, 6
  028b50c  fsub 11, 30, 6
  028b510  fsub 12, 30, 6
  028b514  fsub 13, 6, 30
  028b518  fsub 0, 6, 30
  028b51c  fsub 6, 6, 30
  028b520  fmuls 5, 5, 9
  028b524  fmuls 4, 4, 9
  028b528  fmuls 3, 3, 9
  028b52c  fsel 9, 10, 30, 5
  028b530  fsel 10, 11, 30, 4
  028b534  fsel 11, 12, 30, 3
  028b538  fsel 5, 13, 9, 5
  028b53c  fsel 4, 0, 10, 4
  028b540  fsel 3, 6, 11, 3
  028b544  fnmsubs 6, 8, 7, 5
  028b548  stfs 5, 296(1)
  028b54c  stfs 4, 288(1)
  028b550  stfs 3, 292(1)
  028b554  stfs 6, 296(1)
  028b558  bl 0xfcbe8
  028b55c  nop
  028b560  lis 3, 123
  028b564  stfs 1, 284(1)
  028b568  lis 4, 123
  028b56c  lfs 1, -20360(3)
  028b570  lfs 2, -20356(4)
  028b574  bl 0xfcbe8
  028b578  nop
  028b57c  lis 3, 123
  028b580  lis 4, 123
  028b584  stfs 1, 300(1)
  028b588  fmr 2, 31
  028b58c  fmr 1, 30
  028b590  lwz 3, -20352(3)
  028b594  lwz 4, -20348(4)
  028b598  extsw 26, 3
  028b59c  extsw 25, 4
  028b5a0  bl 0xfcbe8
  028b5a4  nop
  028b5a8  ori 4, 25, 0
  028b5ac  ori 3, 26, 0
  028b5b0  bl 0x5027bc
  028b5b4  nop
  028b5b8  lis 4, 123
  028b5bc  fmr 1, 30
  028b5c0  lis 5, 123
  028b5c4  fmr 2, 31
  028b5c8  ori 26, 3, 0
  028b5cc  lwz 3, -20344(4)
  028b5d0  lwz 4, -20340(5)
  028b5d4  extsw 25, 3
  028b5d8  extsw 24, 4
  028b5dc  bl 0xfcbe8
  028b5e0  nop
  028b5e4  ori 3, 25, 0
  028b5e8  ori 4, 24, 0
  028b5ec  bl 0x5027bc
  028b5f0  nop
  028b5f4  ori 25, 3, 0
  028b5f8  fmr 1, 30
  028b5fc  fmr 2, 31
  028b600  bl 0xfcbe8
  028b604  nop
  028b608  lis 3, 123
  028b60c  lis 24, 114
  028b610  lwz 3, -20384(3)
  028b614  extsw 3, 3
  028b618  std 3, 320(1)
  028b61c  lfs 2, -3056(24)
  028b620  lfd 3, 320(1)
  028b624  fcfid 3, 3
  028b628  frsp 3, 3
  028b62c  fmadds 1, 3, 1, 31
  028b630  fmuls 1, 2, 1
  028b634  bl 0x502758
  028b638  nop
  028b63c  lis 4, 123
  028b640  lis 23, 123
  028b644  ori 22, 3, 0
  028b648  lwz 4, -20380(4)
  028b64c  extsw 4, 4
  028b650  std 4, 320(1)
  028b654  lfs 2, -20372(23)
  028b658  lfd 3, 320(1)
  028b65c  fneg 1, 2
  028b660  fcfid 3, 3
  028b664  frsp 29, 3
  028b668  bl 0xfcbe8
  028b66c  nop
  028b670  fadds 1, 1, 31
  028b674  lfs 2, -3056(24)
  028b678  fmuls 1, 29, 1
  028b67c  fmuls 1, 2, 1
  028b680  bl 0x502758
  028b684  nop
  028b688  lis 4, 123
  028b68c  ori 21, 3, 0
  028b690  lwz 4, -20376(4)
  028b694  extsw 4, 4
  028b698  std 4, 320(1)
  028b69c  lfs 2, -20372(23)
  028b6a0  lfd 3, 320(1)
  028b6a4  fneg 1, 2
  028b6a8  fcfid 3, 3
  028b6ac  frsp 29, 3
  028b6b0  bl 0xfcbe8
  028b6b4  nop
  028b6b8  fadds 1, 1, 31
  028b6bc  lfs 2, -3056(24)
  028b6c0  fmuls 1, 29, 1
  028b6c4  fmuls 1, 2, 1
  028b6c8  bl 0x502758
  028b6cc  nop
  028b6d0  lis 5, 123
  028b6d4  ori 10, 3, 0
  028b6d8  ori 7, 25, 0
  028b6dc  addic 4, 1, 272
  028b6e0  ori 8, 22, 0
  028b6e4  lwz 3, -20328(5)
  028b6e8  addic 5, 1, 288
  028b6ec  extsw 11, 3
  028b6f0  ori 3, 29, 0
  028b6f4  ori 6, 26, 0
  028b6f8  ori 9, 21, 0
  028b6fc  std 11, 112(1)
  028b700  bl 0x1206e8
  028b704  nop
  028b708  addic 28, 28, 1
  028b70c  cmpw 28, 27
  028b710  bt 0, 0x28b3d0
  028b714  lis 3, 123
  028b718  lfs 2, -20596(3)
  028b71c  fneg 1, 2
  028b720  bl 0xfcbe8
  028b724  nop
  028b728  fmr 5, 1
  028b72c  lfs 1, 196(31)
  028b730  lfs 2, 192(31)
  028b734  fmuls 3, 1, 1
  028b738  lfs 4, 200(31)
  028b73c  lis 3, 41
  028b740  lis 4, 114
  028b744  addi 3, 3, -22048
  028b748  fmr 1, 5
  028b74c  fmadds 3, 2, 2, 3
  028b750  lfs 30, 8(3)
  028b754  lfs 31, 4(3)
  028b758  lis 3, 123
  028b75c  fadds 1, 1, 30
  028b760  fmadds 3, 4, 4, 3
  028b764  lfs 6, -20608(3)
  028b768  lfs 7, -3052(4)
  028b76c  fmuls 5, 6, 1
  028b770  fsqrts 3, 3
  028b774  lfs 1, 196(31)
  028b778  fmuls 5, 5, 7
  028b77c  fcmpu 0, 3, 31
  028b780  bf 2, 0x28b798
  028b784  fmr 3, 31
  028b788  lfs 4, 204(31)
  028b78c  fmr 2, 3
  028b790  fmr 1, 2
  028b794  b 0x28b7b0
  028b798  fdivs 5, 5, 3
  028b79c  fmr 7, 1
  028b7a0  fmuls 3, 4, 5
  028b7a4  fmuls 1, 2, 5
  028b7a8  lfs 4, 204(31)
  028b7ac  fmuls 2, 7, 5
  028b7b0  lis 3, 123
  028b7b4  stfs 1, 240(1)
  028b7b8  stfs 2, 244(1)
  028b7bc  stfs 3, 248(1)
  028b7c0  lfs 2, -20596(3)
  028b7c4  stfs 4, 252(1)
  028b7c8  fneg 1, 2
  028b7cc  bl 0xfcbe8
  028b7d0  nop
  028b7d4  fadds 1, 1, 30
  028b7d8  lis 3, 123
  028b7dc  lis 29, 114
  028b7e0  lis 4, 123
  028b7e4  lfs 2, -20604(3)
  028b7e8  lfs 3, -3052(29)
  028b7ec  li 3, 0
  028b7f0  fmuls 2, 2, 1
  028b7f4  stw 3, 268(1)
  028b7f8  stw 3, 260(1)
  028b7fc  stw 3, 256(1)
  028b800  lfs 4, -20600(4)
  028b804  fneg 1, 4
  028b808  fmuls 3, 2, 3
  028b80c  fmr 2, 4
  028b810  stfs 3, 264(1)
  028b814  bl 0xfcbe8
  028b818  nop
  028b81c  lfs 3, 212(31)
  028b820  lfs 4, 208(31)
  028b824  fmuls 2, 3, 3
  028b828  lfs 5, 216(31)
  028b82c  lfs 6, -3052(29)
  028b830  fmuls 6, 1, 6
  028b834  fmadds 2, 4, 4, 2
  028b838  lfs 8, 256(1)
  028b83c  lis 3, 123
  028b840  lfs 9, 260(1)
  028b844  lis 4, 123
  028b848  lfs 10, 264(1)
  028b84c  fmadds 2, 5, 5, 2
  028b850  lfs 1, -20576(3)
  028b854  fsqrts 7, 2
  028b858  lfs 2, -20572(4)
  028b85c  fdivs 6, 6, 7
  028b860  fsub 11, 31, 7
  028b864  fsub 12, 31, 7
  028b868  fsub 13, 31, 7
  028b86c  fsub 0, 7, 31
  028b870  fsub 29, 7, 31
  028b874  fsub 7, 7, 31
  028b878  fmuls 5, 5, 6
  028b87c  fmuls 3, 3, 6
  028b880  fmuls 4, 4, 6
  028b884  fsel 6, 11, 31, 5
  028b888  fsel 11, 12, 31, 3
  028b88c  fsel 12, 13, 31, 4
  028b890  fsel 5, 0, 6, 5
  028b894  fsel 3, 29, 11, 3
  028b898  fsel 4, 7, 12, 4
  028b89c  fadds 5, 10, 5
  028b8a0  fadds 3, 9, 3
  028b8a4  fadds 4, 8, 4
  028b8a8  stfs 5, 264(1)
  028b8ac  stfs 3, 260(1)
  028b8b0  stfs 4, 256(1)
  028b8b4  bl 0xfcbe8
  028b8b8  nop
  028b8bc  lis 3, 123
  028b8c0  lis 4, 123
  028b8c4  stfs 1, 252(1)
  028b8c8  lfs 1, -20568(3)
  028b8cc  lfs 2, -20564(4)
  028b8d0  bl 0xfcbe8
  028b8d4  nop
  028b8d8  lis 3, 123
  028b8dc  stfs 1, 268(1)
  028b8e0  lis 4, 123
  028b8e4  fmr 1, 31
  028b8e8  fmr 2, 30
  028b8ec  lwz 3, -20560(3)
  028b8f0  lwz 4, -20556(4)
  028b8f4  extsw 29, 3
  028b8f8  extsw 28, 4
  028b8fc  bl 0xfcbe8
  028b900  nop
  028b904  ori 4, 28, 0
  028b908  ori 3, 29, 0
  028b90c  bl 0x5027bc
  028b910  nop
  028b914  lis 4, 123
  028b918  lis 5, 123
  028b91c  fmr 1, 31
  028b920  ori 29, 3, 0
  028b924  fmr 2, 30
  028b928  lwz 3, -20552(4)
  028b92c  lwz 4, -20548(5)
  028b930  extsw 28, 3
  028b934  extsw 27, 4
  028b938  bl 0xfcbe8
  028b93c  nop
  028b940  ori 3, 28, 0
  028b944  ori 4, 27, 0
  028b948  bl 0x5027bc
  028b94c  nop
  028b950  ori 28, 3, 0
  028b954  fmr 1, 31
  028b958  fmr 2, 30
  028b95c  bl 0xfcbe8
  028b960  nop
  028b964  lwz 3, 200(30)
  028b968  lis 30, 114
  028b96c  extsw 3, 3
  028b970  std 3, 320(1)
  028b974  lfs 2, -3056(30)
  028b978  lfd 3, 320(1)
  028b97c  fcfid 3, 3
  028b980  frsp 3, 3
  028b984  fmadds 1, 3, 1, 30
  028b988  fmuls 1, 2, 1
  028b98c  bl 0x502758
  028b990  nop
  028b994  lis 4, 123
  028b998  lis 27, 123
  028b99c  ori 26, 3, 0
  028b9a0  lwz 4, -20588(4)
  028b9a4  extsw 4, 4
  028b9a8  std 4, 320(1)
  028b9ac  lfs 2, -20580(27)
  028b9b0  lfd 3, 320(1)
  028b9b4  fneg 1, 2
  028b9b8  fcfid 3, 3
  028b9bc  frsp 31, 3
  028b9c0  bl 0xfcbe8
  028b9c4  nop
  028b9c8  fadds 1, 1, 30
  028b9cc  lfs 2, -3056(30)
  028b9d0  fmuls 1, 31, 1
  028b9d4  fmuls 1, 2, 1
  028b9d8  bl 0x502758
  028b9dc  nop
  028b9e0  lis 4, 123
  028b9e4  ori 25, 3, 0
  028b9e8  lwz 4, -20584(4)
  028b9ec  extsw 4, 4
  028b9f0  std 4, 320(1)
  028b9f4  lfs 2, -20580(27)
  028b9f8  lfd 3, 320(1)
  028b9fc  fneg 1, 2
  028ba00  fcfid 3, 3
  028ba04  frsp 31, 3
  028ba08  bl 0xfcbe8
  028ba0c  nop
  028ba10  fadds 1, 1, 30
  028ba14  lfs 2, -3056(30)
  028ba18  fmuls 1, 31, 1
  028ba1c  fmuls 1, 2, 1
  028ba20  bl 0x502758
  028ba24  nop
  028ba28  li 9, -1
  028ba2c  ori 10, 3, 0
  028ba30  ori 6, 29, 0
  028ba34  addic 3, 31, 16
  028ba38  std 9, 112(1)
  028ba3c  ori 7, 28, 0
  028ba40  addic 4, 1, 240
  028ba44  ori 8, 26, 0
  028ba48  addic 5, 1, 256
  028ba4c  ori 9, 25, 0
  028ba50  bl 0x1206e8
  028ba54  nop
  028ba58  b 0x28ba68
  028ba5c  ori 3, 31, 0
  028ba60  bl 0xefb38
  028ba64  nop
  028ba68  ld 0, 464(1)
  028ba6c  mtlr 0
  028ba70  lfd 29, 424(1)
  028ba74  lfd 30, 432(1)
  028ba78  lfd 31, 440(1)
  028ba7c  ld 21, 336(1)
  028ba80  ld 22, 344(1)
  028ba84  ld 23, 352(1)
  028ba88  ld 24, 360(1)
  028ba8c  ld 25, 368(1)
  028ba90  ld 26, 376(1)
  028ba94  ld 27, 384(1)
  028ba98  ld 28, 392(1)
  028ba9c  ld 29, 400(1)
  028baa0  ld 30, 408(1)
  028baa4  ld 31, 416(1)
  028baa8  addi 1, 1, 448
  028baac  blr

M1479_0028bac0:   # 0x28bac0, 0x448 bytes
  028bac0  stdu 1, -288(1)
  028bac4  mflr 0
  028bac8  std 0, 304(1)
  028bacc  stfd 30, 272(1)
  028bad0  stfd 31, 280(1)
  028bad4  std 28, 240(1)
  028bad8  std 29, 248(1)
  028badc  ori 28, 3, 0
  028bae0  lhz 3, 0(7)
  028bae4  std 30, 256(1)
  028bae8  ori 29, 4, 0
  028baec  ori 30, 6, 0
  028baf0  std 31, 264(1)
  028baf4  extsh 4, 3
  028baf8  ori 31, 7, 0
  028bafc  std 27, 232(1)
  028bb00  std 26, 224(1)
  028bb04  std 25, 216(1)
  028bb08  std 24, 208(1)
  028bb0c  cmpwi 4, 0
  028bb10  bf 0, 0x28bb94
  028bb14  addic 3, 3, 1
  028bb18  extsh 4, 3
  028bb1c  cmpwi 4, 0
  028bb20  sth 3, 0(31)
  028bb24  bf 2, 0x28bed0
  028bb28  lis 3, 123
  028bb2c  lis 4, 123
  028bb30  lwz 3, -20256(3)
  028bb34  lwz 4, -20252(4)
  028bb38  extsw 3, 3
  028bb3c  extsw 4, 4
  028bb40  std 3, 192(1)
  028bb44  lfd 1, 192(1)
  028bb48  std 4, 192(1)
  028bb4c  fcfid 1, 1
  028bb50  frsp 1, 1
  028bb54  lfd 2, 192(1)
  028bb58  fcfid 2, 2
  028bb5c  frsp 2, 2
  028bb60  bl 0xfcbe8
  028bb64  nop
  028bb68  bl 0x502758
  028bb6c  nop
  028bb70  lis 4, 41
  028bb74  sth 3, 0(31)
  028bb78  addi 3, 4, -17744
  028bb7c  lfs 1, 0(3)
  028bb80  lfs 2, 4(3)
  028bb84  bl 0xfcbe8
  028bb88  nop
  028bb8c  stfs 1, 12(28)
  028bb90  b 0x28bbfc
  028bb94  ori 3, 31, 0
  028bb98  bl 0x4fffb4
  028bb9c  nop
  028bba0  cmpwi 3, 0
  028bba4  bt 2, 0x28bbfc
  028bba8  lis 3, 123
  028bbac  lis 4, 123
  028bbb0  lwz 3, -20248(3)
  028bbb4  lwz 4, -20244(4)
  028bbb8  extsw 3, 3
  028bbbc  extsw 4, 4
  028bbc0  std 3, 192(1)
  028bbc4  lfd 1, 192(1)
  028bbc8  std 4, 192(1)
  028bbcc  fcfid 1, 1
  028bbd0  frsp 1, 1
  028bbd4  lfd 2, 192(1)
  028bbd8  fcfid 2, 2
  028bbdc  frsp 2, 2
  028bbe0  bl 0xfcbe8
  028bbe4  nop
  028bbe8  bl 0x502758
  028bbec  nop
  028bbf0  neg 3, 3
  028bbf4  sth 3, 0(31)
  028bbf8  b 0x28bed0
  028bbfc  lfs 1, 0(29)
  028bc00  lis 3, 41
  028bc04  lfs 2, 0(28)
  028bc08  lfs 3, 4(29)
  028bc0c  lfs 4, 4(28)
  028bc10  fsubs 1, 1, 2
  028bc14  lfs 5, 8(29)
  028bc18  addi 4, 3, -17744
  028bc1c  lfs 6, 8(28)
  028bc20  fsubs 3, 3, 4
  028bc24  lfs 7, 12(28)
  028bc28  fsubs 5, 5, 6
  028bc2c  lfs 8, 12(29)
  028bc30  lis 5, 16448
  028bc34  addic 3, 1, 144
  028bc38  stfs 8, 140(1)
  028bc3c  fmadds 1, 7, 1, 2
  028bc40  fmadds 2, 7, 3, 4
  028bc44  fmadds 3, 7, 5, 6
  028bc48  stfs 1, 128(1)
  028bc4c  stfs 2, 132(1)
  028bc50  stfs 1, 144(1)
  028bc54  stfs 3, 136(1)
  028bc58  stfs 2, 148(1)
  028bc5c  lfs 1, 8(4)
  028bc60  stw 5, 156(1)
  028bc64  fsubs 1, 3, 1
  028bc68  stfs 1, 152(1)
  028bc6c  lfs 1, 12(4)
  028bc70  bl 0x502910
  028bc74  nop
  028bc78  cmpwi 3, -1
  028bc7c  bt 2, 0x28bed0
  028bc80  ori 3, 30, 0
  028bc84  bl 0x4fffb4
  028bc88  nop
  028bc8c  cmpwi 3, 0
  028bc90  bt 2, 0x28bed0
  028bc94  lis 3, 41
  028bc98  lis 4, 123
  028bc9c  addi 31, 3, -17744
  028bca0  lfs 31, 4(31)
  028bca4  lfs 2, -20284(4)
  028bca8  fsubs 1, 31, 2
  028bcac  fadds 2, 2, 31
  028bcb0  bl 0xfcbe8
  028bcb4  nop
  028bcb8  lis 3, 123
  028bcbc  fmr 30, 1
  028bcc0  lwz 3, -20296(3)
  028bcc4  extsw 3, 3
  028bcc8  std 3, 192(1)
  028bccc  lfd 1, 192(1)
  028bcd0  fcfid 1, 1
  028bcd4  frsp 1, 1
  028bcd8  fmuls 1, 1, 30
  028bcdc  bl 0x502758
  028bce0  nop
  028bce4  lis 4, 123
  028bce8  ori 29, 3, 0
  028bcec  lwz 4, -20292(4)
  028bcf0  extsw 4, 4
  028bcf4  std 4, 192(1)
  028bcf8  lfd 1, 192(1)
  028bcfc  fcfid 1, 1
  028bd00  frsp 1, 1
  028bd04  fmuls 1, 1, 30
  028bd08  bl 0x502758
  028bd0c  nop
  028bd10  lis 4, 123
  028bd14  ori 28, 3, 0
  028bd18  lwz 4, -20288(4)
  028bd1c  extsw 4, 4
  028bd20  std 4, 192(1)
  028bd24  lfd 1, 192(1)
  028bd28  fcfid 1, 1
  028bd2c  frsp 1, 1
  028bd30  fmuls 1, 1, 30
  028bd34  bl 0x502758
  028bd38  nop
  028bd3c  lis 4, 123
  028bd40  lfs 30, 0(31)
  028bd44  lis 31, 114
  028bd48  li 5, 0
  028bd4c  addic 26, 1, 176
  028bd50  ori 27, 3, 0
  028bd54  lfs 1, -20324(4)
  028bd58  ori 3, 26, 0
  028bd5c  lfs 2, -3052(31)
  028bd60  lis 4, 123
  028bd64  stw 5, 168(1)
  028bd68  fmuls 3, 1, 2
  028bd6c  stw 5, 172(1)
  028bd70  fmr 1, 30
  028bd74  stw 5, 164(1)
  028bd78  stw 5, 160(1)
  028bd7c  lfs 4, -20316(4)
  028bd80  fmuls 2, 4, 2
  028bd84  stfs 3, 168(1)
  028bd88  bl 0xfea60
  028bd8c  nop
  028bd90  lis 3, 123
  028bd94  lfs 1, 184(1)
  028bd98  lis 4, 123
  028bd9c  lfs 2, -3052(31)
  028bda0  lis 5, 123
  028bda4  lfs 3, -20320(3)
  028bda8  fmadds 3, 3, 2, 1
  028bdac  lfs 1, -20312(4)
  028bdb0  lfs 2, -20308(5)
  028bdb4  stfs 3, 184(1)
  028bdb8  bl 0xfcbe8
  028bdbc  nop
  028bdc0  lis 3, 123
  028bdc4  lis 4, 123
  028bdc8  stfs 1, 172(1)
  028bdcc  lfs 1, -20304(3)
  028bdd0  lfs 2, -20300(4)
  028bdd4  bl 0xfcbe8
  028bdd8  nop
  028bddc  lis 3, 123
  028bde0  stfs 1, 188(1)
  028bde4  lis 4, 123
  028bde8  fmr 2, 31
  028bdec  fmr 1, 30
  028bdf0  lwz 3, -20280(3)
  028bdf4  lwz 4, -20276(4)
  028bdf8  extsw 31, 3
  028bdfc  extsw 25, 4
  028be00  bl 0xfcbe8
  028be04  nop
  028be08  ori 4, 25, 0
  028be0c  ori 3, 31, 0
  028be10  bl 0x5027bc
  028be14  nop
  028be18  lis 4, 123
  028be1c  lis 5, 123
  028be20  fmr 1, 30
  028be24  ori 31, 3, 0
  028be28  fmr 2, 31
  028be2c  lwz 3, -20272(4)
  028be30  lwz 4, -20268(5)
  028be34  extsw 25, 3
  028be38  extsw 24, 4
  028be3c  bl 0xfcbe8
  028be40  nop
  028be44  ori 3, 25, 0
  028be48  ori 4, 24, 0
  028be4c  bl 0x5027bc
  028be50  nop
  028be54  li 9, -1
  028be58  ori 7, 3, 0
  028be5c  addic 3, 1, 128
  028be60  ori 5, 26, 0
  028be64  std 9, 112(1)
  028be68  ori 6, 31, 0
  028be6c  ori 8, 29, 0
  028be70  addic 4, 1, 160
  028be74  ori 9, 28, 0
  028be78  ori 10, 27, 0
  028be7c  bl 0x1206e8
  028be80  nop
  028be84  lis 3, 123
  028be88  lis 4, 123
  028be8c  lwz 3, -20264(3)
  028be90  lwz 4, -20260(4)
  028be94  extsw 3, 3
  028be98  extsw 4, 4
  028be9c  std 3, 192(1)
  028bea0  lfd 1, 192(1)
  028bea4  std 4, 192(1)
  028bea8  fcfid 1, 1
  028beac  frsp 1, 1
  028beb0  lfd 2, 192(1)
  028beb4  fcfid 2, 2
  028beb8  frsp 2, 2
  028bebc  bl 0xfcbe8
  028bec0  nop
  028bec4  bl 0x502758
  028bec8  nop
  028becc  sth 3, 0(30)
  028bed0  ld 0, 304(1)
  028bed4  mtlr 0
  028bed8  lfd 30, 272(1)
  028bedc  lfd 31, 280(1)
  028bee0  ld 24, 208(1)
  028bee4  ld 25, 216(1)
  028bee8  ld 26, 224(1)
  028beec  ld 27, 232(1)
  028bef0  ld 28, 240(1)
  028bef4  ld 29, 248(1)
  028bef8  ld 30, 256(1)
  028befc  ld 31, 264(1)
  028bf00  addi 1, 1, 288
  028bf04  blr
