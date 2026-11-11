# game/update/moby1399.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1399:   # 0x26a978, 0x410 bytes
  026a978  stdu 1, -160(1)
  026a97c  mflr 0
  026a980  std 0, 176(1)
  026a984  std 31, 152(1)
  026a988  lbz 4, 32(3)
  026a98c  std 30, 144(1)
  026a990  ori 31, 3, 0
  026a994  lwz 30, 120(3)
  026a998  cmpwi 4, 0
  026a99c  cmpwi 1, 4, -1
  026a9a0  cmpwi 6, 4, 1
  026a9a4  std 29, 136(1)
  026a9a8  std 28, 128(1)
  026a9ac  cmpwi 7, 4, 2
  026a9b0  bt 1, 0x26a9bc
  026a9b4  bf 5, 0x26ad68
  026a9b8  b 0x26a9c8
  026a9bc  bf 25, 0x26aa60
  026a9c0  bf 29, 0x26aa6c
  026a9c4  b 0x26ad68
  026a9c8  lwz 3, 96(30)
  026a9cc  cmpwi 3, -1
  026a9d0  bf 2, 0x26a9e4
  026a9d4  ori 3, 31, 0
  026a9d8  bl 0xefb38
  026a9dc  nop
  026a9e0  b 0x26ad68
  026a9e4  lis 4, 164
  026a9e8  slwi 3, 3, 8
  026a9ec  li 6, 0
  026a9f0  lis 5, 151
  026a9f4  lwz 4, -28512(4)
  026a9f8  addc 3, 4, 3
  026a9fc  li 4, 1
  026aa00  clrldi 3, 3, 32
  026aa04  lhz 7, 52(3)
  026aa08  stw 6, 148(3)
  026aa0c  ori 7, 7, 1
  026aa10  stb 6, 49(3)
  026aa14  sth 7, 52(3)
  026aa18  lwz 3, -25488(5)
  026aa1c  cmpwi 3, 18
  026aa20  bf 2, 0x26aa50
  026aa24  lis 5, 161
  026aa28  lbz 6, 176(31)
  026aa2c  slwi 3, 3, 4
  026aa30  addic 5, 5, -13692
  026aa34  extsw 3, 3
  026aa38  addc 5, 6, 5
  026aa3c  clrldi 5, 5, 32
  026aa40  lbzx 3, 5, 3
  026aa44  cmpwi 3, 255
  026aa48  bf 2, 0x26aa50
  026aa4c  li 4, 3
  026aa50  li 3, -1
  026aa54  stb 4, 32(31)
  026aa58  stw 3, 104(30)
  026aa5c  b 0x26ad68
  026aa60  li 3, 2
  026aa64  stb 3, 32(31)
  026aa68  b 0x26ad68
  026aa6c  lis 29, 151
  026aa70  addic 29, 29, -25376
  026aa74  lwz 3, 764(29)
  026aa78  cmpw 3, 31
  026aa7c  bf 2, 0x26ad60
  026aa80  lhz 3, 782(29)
  026aa84  cmpwi 3, 0
  026aa88  bf 2, 0x26ad60
  026aa8c  lis 3, 161
  026aa90  lwz 3, 1800(3)
  026aa94  cmpwi 3, 2
  026aa98  bt 2, 0x26ad60
  026aa9c  lwz 3, 8324(29)
  026aaa0  cmpwi 3, 29
  026aaa4  bt 2, 0x26ad60
  026aaa8  lbz 3, 8356(29)
  026aaac  cmpwi 3, 0
  026aab0  cmpwi 1, 3, 2
  026aab4  bf 2, 0x26aacc
  026aab8  li 3, 4
  026aabc  li 4, 15012
  026aac0  bl 0x11aeec
  026aac4  nop
  026aac8  b 0x26aaf0
  026aacc  bf 6, 0x26aaf0
  026aad0  lis 3, 151
  026aad4  lwz 3, -25488(3)
  026aad8  cmpwi 3, 18
  026aadc  bt 2, 0x26aaf0
  026aae0  li 3, 4
  026aae4  li 4, 15013
  026aae8  bl 0x11aeec
  026aaec  nop
  026aaf0  lis 3, 150
  026aaf4  addic 3, 3, 19008
  026aaf8  lwz 3, 164(3)
  026aafc  rlwinm 3, 3, 0, 27, 27
  026ab00  cmpwi 3, 0
  026ab04  bt 2, 0x26ad68
  026ab08  lis 3, 161
  026ab0c  lwz 3, 24360(3)
  026ab10  cmpwi 3, 4
  026ab14  bf 2, 0x26ad68
  026ab18  lbz 3, 8356(29)
  026ab1c  cmpwi 3, 2
  026ab20  cmpwi 1, 3, 0
  026ab24  bf 2, 0x26abb8
  026ab28  lis 3, 151
  026ab2c  lwz 3, -25488(3)
  026ab30  cmpwi 3, 15
  026ab34  bf 2, 0x26abb8
  026ab38  lis 3, 164
  026ab3c  lwz 5, 96(30)
  026ab40  li 4, 0
  026ab44  slwi 5, 5, 8
  026ab48  lwz 3, -28512(3)
  026ab4c  addc 3, 3, 5
  026ab50  clrldi 31, 3, 32
  026ab54  lhz 3, 52(31)
  026ab58  stw 4, 148(31)
  026ab5c  ori 3, 3, 1
  026ab60  stb 4, 49(31)
  026ab64  sth 3, 52(31)
  026ab68  bl 0x836ac
  026ab6c  nop
  026ab70  ori 3, 31, 0
  026ab74  li 4, 0
  026ab78  li 5, 0
  026ab7c  bl 0xfdcf0
  026ab80  nop
  026ab84  lis 3, 151
  026ab88  lwz 3, -25488(3)
  026ab8c  cmpwi 3, 15
  026ab90  bf 2, 0x26ad68
  026ab94  li 3, 9
  026ab98  li 4, 0
  026ab9c  bl 0x167e60
  026aba0  nop
  026aba4  li 3, 0
  026aba8  li 4, 5
  026abac  bl 0x11ccc8
  026abb0  nop
  026abb4  b 0x26ad68
  026abb8  bf 6, 0x26ad68
  026abbc  lis 5, 39
  026abc0  lis 3, 164
  026abc4  lfs 1, 16(31)
  026abc8  addi 28, 5, -22160
  026abcc  lwz 5, 96(30)
  026abd0  stfs 1, 112(1)
  026abd4  li 4, 0
  026abd8  lfs 1, 20(31)
  026abdc  slwi 5, 5, 8
  026abe0  lwz 3, -28512(3)
  026abe4  stfs 1, 116(1)
  026abe8  lfs 1, 24(31)
  026abec  addc 30, 3, 5
  026abf0  addic 3, 1, 112
  026abf4  stfs 1, 120(1)
  026abf8  lfs 1, 28(31)
  026abfc  clrldi 30, 30, 32
  026ac00  stfs 1, 124(1)
  026ac04  lfs 1, 0(28)
  026ac08  bl 0xffb70
  026ac0c  nop
  026ac10  lfs 2, 4(28)
  026ac14  lis 3, 151
  026ac18  fadds 1, 1, 2
  026ac1c  stfs 1, 120(1)
  026ac20  lwz 3, -25488(3)
  026ac24  cmpwi 3, 15
  026ac28  bf 2, 0x26ac3c
  026ac2c  addic 4, 31, 64
  026ac30  addic 3, 1, 112
  026ac34  bl 0x151e70
  026ac38  nop
  026ac3c  addic 4, 31, 64
  026ac40  addic 3, 1, 112
  026ac44  li 5, 0
  026ac48  li 6, 1
  026ac4c  bl 0xa0c38
  026ac50  nop
  026ac54  lwz 4, 36(30)
  026ac58  lhz 3, 52(30)
  026ac5c  li 5, 1
  026ac60  rlwinm 6, 3, 0, 0, 30
  026ac64  li 3, 2
  026ac68  lwz 7, 16(4)
  026ac6c  stb 5, 49(30)
  026ac70  stw 7, 148(30)
  026ac74  ori 5, 30, 0
  026ac78  sth 6, 52(30)
  026ac7c  li 4, 90
  026ac80  bl 0x86b60
  026ac84  nop
  026ac88  lis 30, 151
  026ac8c  lwz 30, -25488(30)
  026ac90  cmpwi 30, 15
  026ac94  bf 2, 0x26acfc
  026ac98  li 3, 8
  026ac9c  li 4, 0
  026aca0  bl 0x167e60
  026aca4  nop
  026aca8  lfs 1, 128(29)
  026acac  li 3, 2
  026acb0  lfs 2, 132(29)
  026acb4  li 4, 4
  026acb8  stfs 1, 7424(29)
  026acbc  lfs 1, 136(29)
  026acc0  stfs 2, 7428(29)
  026acc4  lfs 2, 140(29)
  026acc8  stfs 1, 7432(29)
  026accc  lfs 1, 144(29)
  026acd0  stfs 2, 7436(29)
  026acd4  lfs 2, 148(29)
  026acd8  stfs 1, 7440(29)
  026acdc  lfs 1, 152(29)
  026ace0  stfs 2, 7444(29)
  026ace4  lfs 2, 156(29)
  026ace8  stfs 1, 7448(29)
  026acec  stfs 2, 7452(29)
  026acf0  bl 0x11ccc8
  026acf4  nop
  026acf8  b 0x26ad68
  026acfc  cmpwi 30, 18
  026ad00  bf 2, 0x26ad68
  026ad04  li 3, 6
  026ad08  li 4, 0
  026ad0c  bl 0x167e60
  026ad10  nop
  026ad14  lfs 1, 128(29)
  026ad18  lfs 2, 132(29)
  026ad1c  li 3, 3
  026ad20  stfs 1, 7424(29)
  026ad24  lfs 1, 136(29)
  026ad28  stfs 2, 7428(29)
  026ad2c  lfs 2, 140(29)
  026ad30  stfs 1, 7432(29)
  026ad34  lfs 1, 144(29)
  026ad38  stfs 2, 7436(29)
  026ad3c  lfs 2, 148(29)
  026ad40  stfs 1, 7440(29)
  026ad44  lfs 1, 152(29)
  026ad48  stfs 2, 7444(29)
  026ad4c  lfs 2, 156(29)
  026ad50  stfs 1, 7448(29)
  026ad54  stfs 2, 7452(29)
  026ad58  stb 3, 32(31)
  026ad5c  b 0x26ad68
  026ad60  li 3, -1
  026ad64  stw 3, 104(30)
  026ad68  ld 0, 176(1)
  026ad6c  mtlr 0
  026ad70  ld 28, 128(1)
  026ad74  ld 29, 136(1)
  026ad78  ld 30, 144(1)
  026ad7c  ld 31, 152(1)
  026ad80  addi 1, 1, 160
  026ad84  blr

M1899_0026ad88:   # 0x26ad88, 0x14 bytes
  026ad88  lis 3, 122
  026ad8c  lis 4, 1
  026ad90  addic 3, 3, -13444
  026ad94  stw 4, 72(3)
  026ad98  blr
