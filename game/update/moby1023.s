# game/update/moby1023.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1023_0018a80c:   # 0x18a80c, 0x14 bytes
  018a80c  lis 3, 116
  018a810  lis 4, 1
  018a814  addic 3, 3, -1784
  018a818  stw 4, 72(3)
  018a81c  blr

M1023_0018a840:   # 0x18a840, 0xa14 bytes
  018a840  stdu 1, -352(1)
  018a844  mflr 0
  018a848  std 0, 368(1)
  018a84c  stfd 31, 344(1)
  018a850  std 31, 336(1)
  018a854  lbz 4, 32(3)
  018a858  std 30, 328(1)
  018a85c  ori 31, 3, 0
  018a860  lwz 30, 120(3)
  018a864  std 29, 320(1)
  018a868  std 28, 312(1)
  018a86c  cmpwi 4, 0
  018a870  bt 2, 0x18b230
  018a874  lis 3, 116
  018a878  lwz 5, 36(31)
  018a87c  lis 4, 116
  018a880  lfs 1, -1676(3)
  018a884  lfs 2, 36(5)
  018a888  lis 3, 114
  018a88c  lwz 5, 504(30)
  018a890  fmuls 1, 2, 1
  018a894  cmpwi 5, 0
  018a898  stfs 1, 44(31)
  018a89c  lfs 1, -1628(4)
  018a8a0  lfs 2, -3052(3)
  018a8a4  fmuls 1, 1, 2
  018a8a8  stfs 1, 244(30)
  018a8ac  bf 2, 0x18a93c
  018a8b0  li 3, 1025
  018a8b4  bl 0xefa28
  018a8b8  nop
  018a8bc  cmpwi 3, 0
  018a8c0  stw 3, 504(30)
  018a8c4  bt 2, 0x18a92c
  018a8c8  li 4, 64
  018a8cc  li 6, 1
  018a8d0  addic 5, 1, 112
  018a8d4  sth 4, 50(3)
  018a8d8  lwz 3, 504(30)
  018a8dc  stb 4, 48(3)
  018a8e0  lwz 7, 504(30)
  018a8e4  ori 3, 31, 0
  018a8e8  li 4, 4
  018a8ec  stb 6, 49(7)
  018a8f0  lwz 6, 504(30)
  018a8f4  lhz 7, 52(6)
  018a8f8  ori 7, 7, 256
  018a8fc  sth 7, 52(6)
  018a900  bl 0xf1114
  018a904  nop
  018a908  lwz 3, 504(30)
  018a90c  lfs 1, 112(1)
  018a910  stfs 1, 16(3)
  018a914  lfs 1, 116(1)
  018a918  stfs 1, 20(3)
  018a91c  lfs 1, 120(1)
  018a920  stfs 1, 24(3)
  018a924  lfs 1, 124(1)
  018a928  stfs 1, 28(3)
  018a92c  lhz 3, 52(31)
  018a930  ori 3, 3, 4096
  018a934  sth 3, 52(31)
  018a938  b 0x18a9ac
  018a93c  addic 5, 1, 128
  018a940  ori 3, 31, 0
  018a944  li 4, 4
  018a948  bl 0xf1114
  018a94c  nop
  018a950  addic 29, 1, 144
  018a954  ori 3, 31, 0
  018a958  li 4, 4
  018a95c  ori 5, 29, 0
  018a960  bl 0xf1038
  018a964  nop
  018a968  lwz 3, 504(30)
  018a96c  ori 4, 29, 0
  018a970  addic 3, 3, 192
  018a974  bl 0x500fa8
  018a978  nop
  018a97c  lwz 3, 504(30)
  018a980  lfs 1, 128(1)
  018a984  stfs 1, 16(3)
  018a988  lfs 1, 132(1)
  018a98c  stfs 1, 20(3)
  018a990  lfs 1, 136(1)
  018a994  stfs 1, 24(3)
  018a998  lfs 1, 140(1)
  018a99c  stfs 1, 28(3)
  018a9a0  lwz 3, 504(30)
  018a9a4  bl 0xf31a8
  018a9a8  nop
  018a9ac  lis 4, 25
  018a9b0  li 7, 0
  018a9b4  addi 6, 4, -22496
  018a9b8  ori 3, 31, 0
  018a9bc  lis 4, 51
  018a9c0  li 5, 0
  018a9c4  lfs 31, 0(6)
  018a9c8  stw 7, 212(1)
  018a9cc  bl 0x10675c
  018a9d0  nop
  018a9d4  ori 29, 3, 0
  018a9d8  addic 5, 30, 32
  018a9dc  ori 4, 29, 0
  018a9e0  li 6, 0
  018a9e4  addic 7, 1, 208
  018a9e8  li 9, 0
  018a9ec  addic 8, 1, 212
  018a9f0  ori 3, 31, 0
  018a9f4  li 10, 4
  018a9f8  bl 0x106840
  018a9fc  nop
  018aa00  lwz 4, 208(1)
  018aa04  ori 28, 3, 0
  018aa08  cmpwi 4, 1
  018aa0c  bt 2, 0x18b018
  018aa10  lbz 3, 32(31)
  018aa14  cmpwi 3, 11
  018aa18  bt 2, 0x18b018
  018aa1c  lfs 1, 32(30)
  018aa20  li 3, 71
  018aa24  lfs 2, 212(1)
  018aa28  li 4, 3
  018aa2c  fsubs 1, 1, 2
  018aa30  subc 4, 4, 28
  018aa34  fcmpu 0, 1, 31
  018aa38  stfs 1, 32(30)
  018aa3c  lwz 5, 32(29)
  018aa40  lhz 5, 166(5)
  018aa44  subc 3, 3, 5
  018aa48  cntlzw 3, 3
  018aa4c  sldi 3, 3, 58
  018aa50  sradi 3, 3, 63
  018aa54  and 3, 3, 4
  018aa58  addc 28, 28, 3
  018aa5c  bt 1, 0x18aa64
  018aa60  li 28, 1
  018aa64  lis 3, 25
  018aa68  addi 3, 3, -22496
  018aa6c  lfs 1, 4(3)
  018aa70  bl 0x502758
  018aa74  nop
  018aa78  lis 4, 16128
  018aa7c  lis 5, 116
  018aa80  lis 6, 114
  018aa84  li 7, 0
  018aa88  stw 4, 152(30)
  018aa8c  li 4, 9
  018aa90  lfs 1, -1672(5)
  018aa94  lfs 2, -3048(6)
  018aa98  cmpwi 28, 2
  018aa9c  stw 3, 144(30)
  018aaa0  fmuls 1, 1, 2
  018aaa4  stb 7, 173(30)
  018aaa8  stw 4, 148(30)
  018aaac  stfs 1, 128(30)
  018aab0  bt 1, 0x18aac8
  018aab4  cmpwi 28, -1
  018aab8  cmpwi 1, 28, 0
  018aabc  bf 1, 0x18b008
  018aac0  bf 5, 0x18b008
  018aac4  b 0x18ad50
  018aac8  cmpwi 28, 10
  018aacc  cmpwi 1, 28, 8
  018aad0  bt 1, 0x18b008
  018aad4  bf 5, 0x18aae4
  018aad8  li 3, 250
  018aadc  stb 3, 103(30)
  018aae0  b 0x18b008
  018aae4  lis 3, 116
  018aae8  lis 4, 114
  018aaec  lis 5, 25
  018aaf0  lfs 1, -1664(3)
  018aaf4  lfs 2, -3052(4)
  018aaf8  addi 3, 5, -22496
  018aafc  lis 4, 16544
  018ab00  fmuls 1, 1, 2
  018ab04  lis 5, 16672
  018ab08  stfs 1, 136(30)
  018ab0c  lfs 1, 8(3)
  018ab10  stw 4, 192(30)
  018ab14  fmuls 1, 2, 1
  018ab18  stw 5, 196(30)
  018ab1c  stfs 1, 140(30)
  018ab20  lwz 3, 32(29)
  018ab24  lfs 1, 16(31)
  018ab28  lfs 2, 20(31)
  018ab2c  lfs 3, 16(3)
  018ab30  lfs 4, 20(3)
  018ab34  fsubs 1, 1, 3
  018ab38  fsubs 2, 2, 4
  018ab3c  lis 3, 115
  018ab40  addic 3, 3, 22784
  018ab44  fabs 3, 1
  018ab48  fabs 4, 2
  018ab4c  stfs 1, 236(1)
  018ab50  stfs 2, 240(1)
  018ab54  fsubs 1, 3, 4
  018ab58  stfs 1, 244(1)
  018ab5c  lwz 4, 236(1)
  018ab60  lfs 1, 236(1)
  018ab64  lwz 5, 240(1)
  018ab68  lfs 2, 240(1)
  018ab6c  lwz 6, 244(1)
  018ab70  rlwinm 5, 5, 3, 29, 29
  018ab74  lfs 5, 244(1)
  018ab78  fabs 1, 1
  018ab7c  rlwimi 5, 6, 2, 30, 30
  018ab80  fabs 2, 2
  018ab84  fsub 6, 5, 31
  018ab88  fsub 5, 5, 31
  018ab8c  rlwimi 5, 4, 4, 28, 28
  018ab90  ori 4, 3, 0
  018ab94  rlwimi 4, 5, 2, 26, 28
  018ab98  slwi 5, 5, 2
  018ab9c  clrldi 4, 4, 32
  018aba0  fsel 4, 6, 1, 4
  018aba4  lfsx 1, 3, 5
  018aba8  fsel 3, 5, 2, 3
  018abac  lfs 2, 4(4)
  018abb0  fcmpu 0, 4, 31
  018abb4  bt 1, 0x18abbc
  018abb8  b 0x18acdc
  018abbc  fsubs 5, 3, 4
  018abc0  fadds 3, 3, 4
  018abc4  addic 3, 1, 16
  018abc8  li 6, 2
  018abcc  addic 4, 3, 264
  018abd0  addic 5, 3, 280
  018abd4  mtctr 6
  018abd8  fdivs 3, 5, 3
  018abdc  fmuls 4, 3, 3
  018abe0  stfs 3, 292(1)
  018abe4  stfs 3, 284(1)
  018abe8  stfs 3, 288(1)
  018abec  stfs 3, 280(1)
  018abf0  lfs 6, 292(1)
  018abf4  lfs 7, 284(1)
  018abf8  lfs 8, 288(1)
  018abfc  fmuls 5, 4, 4
  018ac00  fmuls 7, 7, 4
  018ac04  fmuls 6, 6, 5
  018ac08  fmuls 3, 5, 5
  018ac0c  fmuls 5, 8, 5
  018ac10  stfs 7, 284(1)
  018ac14  fmuls 4, 6, 4
  018ac18  stfs 5, 288(1)
  018ac1c  stfs 4, 292(1)
  018ac20  lfs 4, 264(3)
  018ac24  fmuls 4, 4, 3
  018ac28  stfs 4, 280(3)
  018ac2c  lfs 4, 4(4)
  018ac30  addic 3, 3, 8
  018ac34  addic 4, 4, 8
  018ac38  fmuls 4, 4, 3
  018ac3c  stfs 4, 4(5)
  018ac40  addic 5, 5, 8
  018ac44  bdnz 0x18ac20
  018ac48  li 5, 4
  018ac4c  ori 3, 1, 0
  018ac50  mtctr 5
  018ac54  lis 4, 115
  018ac58  addic 5, 3, 280
  018ac5c  addic 4, 4, 22752
  018ac60  ori 7, 5, 0
  018ac64  lfs 3, 280(3)
  018ac68  lfs 4, 0(4)
  018ac6c  fmuls 3, 3, 4
  018ac70  lfs 4, 4(4)
  018ac74  addic 4, 4, 8
  018ac78  stfs 3, 280(3)
  018ac7c  lfs 3, 4(5)
  018ac80  addic 3, 3, 8
  018ac84  fmuls 3, 3, 4
  018ac88  stfs 3, 4(5)
  018ac8c  addic 5, 5, 8
  018ac90  bdnz 0x18ac64
  018ac94  ori 3, 1, 0
  018ac98  mtctr 6
  018ac9c  lfs 3, 280(3)
  018aca0  lfs 4, 4(7)
  018aca4  fadds 3, 31, 3
  018aca8  lfs 5, 8(7)
  018acac  lfs 31, 12(7)
  018acb0  addic 3, 3, 16
  018acb4  addic 7, 7, 16
  018acb8  fadds 3, 3, 4
  018acbc  fadds 3, 3, 5
  018acc0  fadds 31, 3, 31
  018acc4  bdnz 0x18ac9c
  018acc8  lis 3, 25
  018accc  addi 3, 3, -22496
  018acd0  lfs 3, 12(3)
  018acd4  fadds 31, 31, 3
  018acd8  fmadds 31, 31, 1, 2
  018acdc  stfs 31, 216(1)
  018ace0  addic 5, 1, 216
  018ace4  lfs 1, 16(29)
  018ace8  addic 6, 30, 136
  018acec  lfs 2, 24(29)
  018acf0  addic 7, 30, 140
  018acf4  stfs 1, 48(1)
  018acf8  stfs 2, 56(1)
  018acfc  lfs 1, 20(29)
  018ad00  lfs 2, 28(29)
  018ad04  stfs 1, 52(1)
  018ad08  stfs 2, 60(1)
  018ad0c  ld 3, 48(1)
  018ad10  ld 4, 56(1)
  018ad14  bl 0x107de8
  018ad18  nop
  018ad1c  ori 3, 31, 0
  018ad20  lfs 1, 216(1)
  018ad24  addic 4, 30, 112
  018ad28  li 6, 8
  018ad2c  li 7, 1
  018ad30  li 8, 0
  018ad34  bl 0x10ad80
  018ad38  nop
  018ad3c  li 3, 10
  018ad40  li 4, 120
  018ad44  stb 3, 32(31)
  018ad48  stb 4, 103(30)
  018ad4c  b 0x18b008
  018ad50  lis 3, 16000
  018ad54  lis 4, 116
  018ad58  lis 5, 114
  018ad5c  li 6, 0
  018ad60  stw 3, 152(30)
  018ad64  lis 3, 116
  018ad68  lfs 1, -1672(4)
  018ad6c  lfs 2, -3048(5)
  018ad70  lis 4, 114
  018ad74  lhz 5, 52(31)
  018ad78  fmuls 1, 1, 2
  018ad7c  rlwimi 5, 6, 0, 19, 19
  018ad80  lis 6, 116
  018ad84  sth 5, 52(31)
  018ad88  li 5, 512
  018ad8c  stfs 1, 128(30)
  018ad90  lfs 1, -1656(3)
  018ad94  lfs 2, -3052(4)
  018ad98  lis 3, 16688
  018ad9c  stw 5, 144(30)
  018ada0  lis 4, 16768
  018ada4  fmuls 1, 1, 2
  018ada8  stfs 1, 136(30)
  018adac  lfs 1, -1660(6)
  018adb0  stw 3, 192(30)
  018adb4  fmuls 1, 1, 2
  018adb8  stw 4, 196(30)
  018adbc  stfs 1, 140(30)
  018adc0  lwz 3, 32(29)
  018adc4  lfs 1, 16(31)
  018adc8  lfs 2, 20(31)
  018adcc  lfs 3, 16(3)
  018add0  lfs 4, 20(3)
  018add4  fsubs 1, 1, 3
  018add8  fsubs 2, 2, 4
  018addc  lis 3, 115
  018ade0  addic 3, 3, 22784
  018ade4  fabs 3, 1
  018ade8  fabs 4, 2
  018adec  stfs 1, 224(1)
  018adf0  stfs 2, 228(1)
  018adf4  fsubs 1, 3, 4
  018adf8  stfs 1, 232(1)
  018adfc  lwz 4, 224(1)
  018ae00  lfs 1, 224(1)
  018ae04  lwz 5, 228(1)
  018ae08  lfs 2, 228(1)
  018ae0c  lwz 6, 232(1)
  018ae10  rlwinm 5, 5, 3, 29, 29
  018ae14  fabs 5, 2
  018ae18  lfs 2, 232(1)
  018ae1c  fabs 1, 1
  018ae20  rlwimi 5, 6, 2, 30, 30
  018ae24  fsub 6, 2, 31
  018ae28  fsub 7, 2, 31
  018ae2c  rlwimi 5, 4, 4, 28, 28
  018ae30  ori 4, 3, 0
  018ae34  rlwimi 4, 5, 2, 26, 28
  018ae38  slwi 5, 5, 2
  018ae3c  clrldi 4, 4, 32
  018ae40  fsel 4, 6, 1, 4
  018ae44  lfsx 1, 3, 5
  018ae48  fsel 3, 7, 5, 3
  018ae4c  lfs 2, 4(4)
  018ae50  fcmpu 0, 4, 31
  018ae54  bt 1, 0x18ae5c
  018ae58  b 0x18af7c
  018ae5c  fsubs 5, 3, 4
  018ae60  fadds 3, 3, 4
  018ae64  addic 3, 1, 16
  018ae68  li 6, 2
  018ae6c  addic 4, 3, 232
  018ae70  addic 5, 3, 248
  018ae74  mtctr 6
  018ae78  fdivs 3, 5, 3
  018ae7c  fmuls 4, 3, 3
  018ae80  stfs 3, 260(1)
  018ae84  stfs 3, 252(1)
  018ae88  stfs 3, 256(1)
  018ae8c  stfs 3, 248(1)
  018ae90  lfs 6, 260(1)
  018ae94  lfs 7, 252(1)
  018ae98  lfs 8, 256(1)
  018ae9c  fmuls 5, 4, 4
  018aea0  fmuls 7, 7, 4
  018aea4  fmuls 6, 6, 5
  018aea8  fmuls 3, 5, 5
  018aeac  fmuls 5, 8, 5
  018aeb0  stfs 7, 252(1)
  018aeb4  fmuls 4, 6, 4
  018aeb8  stfs 5, 256(1)
  018aebc  stfs 4, 260(1)
  018aec0  lfs 4, 232(3)
  018aec4  fmuls 4, 4, 3
  018aec8  stfs 4, 248(3)
  018aecc  lfs 4, 4(4)
  018aed0  addic 3, 3, 8
  018aed4  addic 4, 4, 8
  018aed8  fmuls 4, 4, 3
  018aedc  stfs 4, 4(5)
  018aee0  addic 5, 5, 8
  018aee4  bdnz 0x18aec0
  018aee8  li 5, 4
  018aeec  ori 3, 1, 0
  018aef0  mtctr 5
  018aef4  lis 4, 115
  018aef8  addic 5, 3, 248
  018aefc  addic 4, 4, 22752
  018af00  ori 7, 5, 0
  018af04  lfs 3, 248(3)
  018af08  lfs 4, 0(4)
  018af0c  fmuls 3, 3, 4
  018af10  lfs 4, 4(4)
  018af14  addic 4, 4, 8
  018af18  stfs 3, 248(3)
  018af1c  lfs 3, 4(5)
  018af20  addic 3, 3, 8
  018af24  fmuls 3, 3, 4
  018af28  stfs 3, 4(5)
  018af2c  addic 5, 5, 8
  018af30  bdnz 0x18af04
  018af34  ori 3, 1, 0
  018af38  mtctr 6
  018af3c  lfs 3, 248(3)
  018af40  lfs 4, 4(7)
  018af44  fadds 3, 31, 3
  018af48  lfs 5, 8(7)
  018af4c  lfs 31, 12(7)
  018af50  addic 3, 3, 16
  018af54  addic 7, 7, 16
  018af58  fadds 3, 3, 4
  018af5c  fadds 3, 3, 5
  018af60  fadds 31, 3, 31
  018af64  bdnz 0x18af3c
  018af68  lis 3, 25
  018af6c  addi 3, 3, -22496
  018af70  lfs 3, 12(3)
  018af74  fadds 31, 31, 3
  018af78  fmadds 31, 31, 1, 2
  018af7c  stfs 31, 220(1)
  018af80  addic 5, 1, 220
  018af84  lfs 1, 16(29)
  018af88  addic 6, 30, 136
  018af8c  lfs 2, 24(29)
  018af90  addic 7, 30, 140
  018af94  stfs 1, 48(1)
  018af98  stfs 2, 56(1)
  018af9c  lfs 1, 20(29)
  018afa0  lfs 2, 28(29)
  018afa4  stfs 1, 52(1)
  018afa8  stfs 2, 60(1)
  018afac  ld 3, 48(1)
  018afb0  ld 4, 56(1)
  018afb4  bl 0x107de8
  018afb8  nop
  018afbc  addic 4, 30, 112
  018afc0  lfs 1, 220(1)
  018afc4  ori 3, 31, 0
  018afc8  li 6, 12
  018afcc  li 7, 1
  018afd0  li 8, 0
  018afd4  bl 0x10ad80
  018afd8  nop
  018afdc  li 4, 11
  018afe0  li 5, 240
  018afe4  ori 3, 31, 0
  018afe8  li 6, 0
  018afec  stb 4, 32(31)
  018aff0  li 7, -1
  018aff4  stb 5, 103(30)
  018aff8  li 4, 2
  018affc  li 5, 3
  018b000  bl 0xfcd60
  018b004  nop
  018b008  addic 4, 30, 96
  018b00c  ori 3, 31, 0
  018b010  bl 0x10c808
  018b014  nop
  018b018  li 5, 255
  018b01c  ori 3, 31, 0
  018b020  addic 4, 30, 96
  018b024  stb 5, 164(31)
  018b028  bl 0x10c9a0
  018b02c  nop
  018b030  lwz 3, 56(30)
  018b034  cmpwi 3, 0
  018b038  bt 2, 0x18b074
  018b03c  lis 3, 25
  018b040  addi 3, 3, -22496
  018b044  lfs 1, 16(3)
  018b048  lfs 2, 20(3)
  018b04c  bl 0xfcbe8
  018b050  nop
  018b054  lis 3, 114
  018b058  lfs 2, -3056(3)
  018b05c  fmuls 1, 1, 2
  018b060  bl 0x502758
  018b064  nop
  018b068  li 4, 0
  018b06c  sth 3, 472(30)
  018b070  stw 4, 56(30)
  018b074  addic 3, 30, 472
  018b078  bl 0x4fffb4
  018b07c  nop
  018b080  lhz 3, 472(30)
  018b084  cmpwi 3, 0
  018b088  bt 2, 0x18b0a4
  018b08c  lis 3, 25
  018b090  lfs 1, 484(30)
  018b094  addi 3, 3, -22496
  018b098  lfs 2, 24(3)
  018b09c  fadds 1, 1, 2
  018b0a0  b 0x18b0a8
  018b0a4  lfs 1, 484(30)
  018b0a8  li 3, 4
  018b0ac  stfs 1, 476(30)
  018b0b0  bl 0xfc620
  018b0b4  nop
  018b0b8  cmpwi 3, 0
  018b0bc  bf 2, 0x18b16c
  018b0c0  lis 3, 165
  018b0c4  addic 4, 30, 288
  018b0c8  addic 5, 3, 7136
  018b0cc  lwz 3, 464(30)
  018b0d0  li 6, 0
  018b0d4  lfs 1, 476(30)
  018b0d8  li 7, 0
  018b0dc  slwi 3, 3, 2
  018b0e0  extsw 8, 3
  018b0e4  ori 3, 31, 0
  018b0e8  lwzx 5, 5, 8
  018b0ec  addic 8, 5, 16
  018b0f0  lwz 9, 0(5)
  018b0f4  extsw 9, 9
  018b0f8  bl 0x111ba0
  018b0fc  nop
  018b100  cmpwi 3, 2
  018b104  bt 2, 0x18b1c0
  018b108  lfs 1, 20(31)
  018b10c  lfs 2, 292(30)
  018b110  lfs 3, 16(31)
  018b114  fsubs 1, 1, 2
  018b118  lfs 2, 288(30)
  018b11c  fsubs 2, 3, 2
  018b120  fmuls 1, 1, 1
  018b124  fmadds 1, 2, 2, 1
  018b128  lfs 2, 476(30)
  018b12c  fsqrts 1, 1
  018b130  fcmpu 0, 1, 2
  018b134  bt 1, 0x18b160
  018b138  lfs 1, 24(31)
  018b13c  lfs 2, 296(30)
  018b140  lis 3, 25
  018b144  fsubs 1, 1, 2
  018b148  addi 3, 3, -22496
  018b14c  lfs 2, 8(3)
  018b150  fabs 1, 1
  018b154  fcmpu 0, 1, 2
  018b158  cror 6, 0, 2
  018b15c  bt 6, 0x18b1c0
  018b160  li 3, 2
  018b164  stw 3, 356(30)
  018b168  b 0x18b1c0
  018b16c  lwz 3, 352(30)
  018b170  cmpwi 3, 0
  018b174  bt 2, 0x18b1b0
  018b178  lbz 4, 32(3)
  018b17c  cmpwi 1, 4, 253
  018b180  cmpwi 4, 254
  018b184  cror 2, 2, 6
  018b188  bt 2, 0x18b1b0
  018b18c  lfs 1, 16(3)
  018b190  stfs 1, 288(30)
  018b194  lfs 1, 20(3)
  018b198  stfs 1, 292(30)
  018b19c  lfs 1, 24(3)
  018b1a0  stfs 1, 296(30)
  018b1a4  lfs 1, 28(3)
  018b1a8  stfs 1, 300(30)
  018b1ac  b 0x18b1c0
  018b1b0  li 3, 0
  018b1b4  li 4, 2
  018b1b8  stw 3, 352(30)
  018b1bc  stw 4, 356(30)
  018b1c0  lwz 3, 352(30)
  018b1c4  cmpwi 3, 0
  018b1c8  bf 2, 0x18b1dc
  018b1cc  lis 3, 151
  018b1d0  addic 3, 3, -25376
  018b1d4  lwz 3, 8320(3)
  018b1d8  stw 3, 352(30)
  018b1dc  lbz 3, 32(31)
  018b1e0  cmpwi 1, 3, 5
  018b1e4  cmpwi 3, 0
  018b1e8  cror 2, 2, 6
  018b1ec  bt 2, 0x18b200
  018b1f0  cmpwi 3, 7
  018b1f4  bt 2, 0x18b200
  018b1f8  cmpwi 3, 4
  018b1fc  bf 2, 0x18b230
  018b200  lis 4, 25
  018b204  addic 3, 31, 16
  018b208  addi 5, 4, -22496
  018b20c  li 4, 0
  018b210  lfs 1, 28(5)
  018b214  bl 0xffb70
  018b218  nop
  018b21c  lfs 2, 24(31)
  018b220  fcmpu 0, 2, 1
  018b224  cror 6, 0, 2
  018b228  bt 6, 0x18b230
  018b22c  stfs 1, 24(31)
  018b230  ld 0, 368(1)
  018b234  mtlr 0
  018b238  lfd 31, 344(1)
  018b23c  ld 28, 312(1)
  018b240  ld 29, 320(1)
  018b244  ld 30, 328(1)
  018b248  ld 31, 336(1)
  018b24c  addi 1, 1, 352
  018b250  blr

UpdateMoby_1023:   # 0x18b2f8, 0x1a1c bytes
  018b2f8  stdu 1, -400(1)
  018b2fc  mflr 0
  018b300  std 0, 416(1)
  018b304  stfd 31, 392(1)
  018b308  std 31, 384(1)
  018b30c  lbz 4, 49(3)
  018b310  std 30, 376(1)
  018b314  ori 31, 3, 0
  018b318  lwz 30, 120(3)
  018b31c  std 29, 368(1)
  018b320  std 28, 360(1)
  018b324  std 27, 352(1)
  018b328  std 26, 344(1)
  018b32c  cmpwi 4, 0
  018b330  bf 2, 0x18b384
  018b334  lis 3, 149
  018b338  lfs 1, 20(31)
  018b33c  lfs 2, 16(31)
  018b340  addic 3, 3, 5056
  018b344  lfs 3, 324(3)
  018b348  lfs 4, 320(3)
  018b34c  fsubs 1, 1, 3
  018b350  fsubs 2, 2, 4
  018b354  lfs 3, 24(31)
  018b358  lfs 4, 328(3)
  018b35c  fsubs 3, 3, 4
  018b360  lis 3, 25
  018b364  fmuls 1, 1, 1
  018b368  addi 3, 3, -19884
  018b36c  fmadds 1, 2, 2, 1
  018b370  lfs 2, 0(3)
  018b374  fmadds 1, 3, 3, 1
  018b378  fsqrts 1, 1
  018b37c  fcmpu 0, 1, 2
  018b380  bt 1, 0x18cce8
  018b384  lis 4, 25
  018b388  ori 3, 31, 0
  018b38c  addi 6, 4, -19884
  018b390  li 4, 6
  018b394  addic 5, 30, 368
  018b398  lfs 1, 4(6)
  018b39c  bl 0x119a18
  018b3a0  nop
  018b3a4  lbz 3, 49(31)
  018b3a8  cmpwi 3, 0
  018b3ac  bt 2, 0x18b418
  018b3b0  lis 3, 149
  018b3b4  lfs 1, 20(31)
  018b3b8  addic 3, 3, 5056
  018b3bc  lfs 2, 16(31)
  018b3c0  lfs 3, 324(3)
  018b3c4  lfs 4, 320(3)
  018b3c8  fsubs 1, 1, 3
  018b3cc  fsubs 2, 2, 4
  018b3d0  lfs 3, 24(31)
  018b3d4  lfs 4, 328(3)
  018b3d8  fsubs 3, 3, 4
  018b3dc  lis 3, 25
  018b3e0  fmuls 1, 1, 1
  018b3e4  addi 3, 3, -19884
  018b3e8  fmadds 1, 2, 2, 1
  018b3ec  lfs 2, 8(3)
  018b3f0  fmadds 1, 3, 3, 1
  018b3f4  fsqrts 1, 1
  018b3f8  fcmpu 0, 1, 2
  018b3fc  cror 6, 1, 2
  018b400  bt 6, 0x18b418
  018b404  ori 3, 31, 0
  018b408  bl 0x106360
  018b40c  nop
  018b410  li 3, 23
  018b414  stb 3, 127(31)
  018b418  lis 3, 161
  018b41c  lwz 3, 1800(3)
  018b420  cmpwi 3, 2
  018b424  bt 2, 0x18cce8
  018b428  ori 3, 31, 0
  018b42c  bl 0x18a840
  018b430  lwz 3, 508(30)
  018b434  li 28, 0
  018b438  lwz 29, 352(30)
  018b43c  lbz 4, 32(31)
  018b440  cmpwi 3, -1
  018b444  lfs 1, 16(31)
  018b448  ori 27, 28, 0
  018b44c  lfs 2, 20(31)
  018b450  bt 2, 0x18b468
  018b454  lis 5, 165
  018b458  slwi 3, 3, 2
  018b45c  addic 5, 5, 7136
  018b460  extsw 3, 3
  018b464  lwzx 28, 5, 3
  018b468  lis 3, 151
  018b46c  addic 3, 3, -25376
  018b470  lwz 5, 8324(3)
  018b474  cmpwi 5, 61
  018b478  bf 2, 0x18b56c
  018b47c  lis 5, 25
  018b480  lis 6, 114
  018b484  addi 5, 5, -19884
  018b488  lfs 3, 12(5)
  018b48c  lfs 4, -3056(6)
  018b490  lwz 5, 408(3)
  018b494  fmuls 3, 4, 3
  018b498  fctiwz 3, 3
  018b49c  stfd 3, 320(1)
  018b4a0  lwz 6, 324(1)
  018b4a4  cmpw 5, 6
  018b4a8  bf 0, 0x18b56c
  018b4ac  cmpwi 1, 4, 10
  018b4b0  cmpwi 4, 8
  018b4b4  cror 2, 2, 6
  018b4b8  bt 2, 0x18b56c
  018b4bc  cmpwi 1, 4, 11
  018b4c0  cmpwi 4, 4
  018b4c4  cror 2, 2, 6
  018b4c8  bt 2, 0x18b56c
  018b4cc  lfs 3, 132(3)
  018b4d0  lfs 4, 128(3)
  018b4d4  fsubs 2, 2, 3
  018b4d8  fsubs 1, 1, 4
  018b4dc  lis 3, 25
  018b4e0  addi 3, 3, -19884
  018b4e4  fmuls 2, 2, 2
  018b4e8  fmadds 1, 1, 1, 2
  018b4ec  lfs 2, 16(3)
  018b4f0  fsqrts 1, 1
  018b4f4  fcmpu 0, 1, 2
  018b4f8  cror 6, 1, 2
  018b4fc  bt 6, 0x18b56c
  018b500  li 3, 49
  018b504  bl 0xfc620
  018b508  nop
  018b50c  cmpwi 3, 0
  018b510  lbz 4, 32(31)
  018b514  bf 2, 0x18b56c
  018b518  lbz 3, 83(31)
  018b51c  cmpwi 3, 14
  018b520  bt 2, 0x18b560
  018b524  lis 3, 25
  018b528  lis 4, 114
  018b52c  addi 3, 3, -19884
  018b530  li 5, 0
  018b534  lfs 1, 20(3)
  018b538  lfs 2, -3056(4)
  018b53c  ori 3, 31, 0
  018b540  li 4, 14
  018b544  fmuls 1, 2, 1
  018b548  fctiwz 1, 1
  018b54c  stfd 1, 320(1)
  018b550  lwz 6, 324(1)
  018b554  extsw 6, 6
  018b558  bl 0xfddc0
  018b55c  nop
  018b560  li 4, 8
  018b564  stb 4, 32(31)
  018b568  b 0x18b574
  018b56c  cmpwi 4, 0
  018b570  bf 1, 0x18b5a8
  018b574  lbz 3, 46(30)
  018b578  cmpwi 3, 2
  018b57c  bf 2, 0x18b5a8
  018b580  ori 3, 31, 0
  018b584  bl 0xefb38
  018b588  nop
  018b58c  lwz 31, 504(30)
  018b590  cmpwi 31, 0
  018b594  bt 2, 0x18cce8
  018b598  ori 3, 31, 0
  018b59c  bl 0xefb38
  018b5a0  nop
  018b5a4  b 0x18cce8
  018b5a8  cmpwi 4, 4
  018b5ac  cmpwi 1, 4, 1
  018b5b0  bt 1, 0x18b5e0
  018b5b4  cmpwi 6, 4, -1
  018b5b8  cmpwi 7, 4, 2
  018b5bc  bt 5, 0x18b5d0
  018b5c0  cmpwi 1, 4, 0
  018b5c4  bf 25, 0x18cce8
  018b5c8  bf 5, 0x18b61c
  018b5cc  b 0x18b870
  018b5d0  cmpwi 1, 4, 3
  018b5d4  bf 29, 0x18b984
  018b5d8  bf 5, 0x18ba84
  018b5dc  b 0x18be20
  018b5e0  cmpwi 4, 7
  018b5e4  cmpwi 6, 4, 5
  018b5e8  cmpwi 7, 4, 10
  018b5ec  bt 1, 0x18b600
  018b5f0  cmpwi 1, 4, 6
  018b5f4  bf 25, 0x18c214
  018b5f8  bf 5, 0x18c680
  018b5fc  b 0x18c864
  018b600  cmpwi 1, 4, 9
  018b604  cmpwi 6, 4, 11
  018b608  bt 29, 0x18b614
  018b60c  bf 5, 0x18ca1c
  018b610  b 0x18ca80
  018b614  bf 25, 0x18cbc8
  018b618  b 0x18cce8
  018b61c  lis 3, 16384
  018b620  li 4, 2
  018b624  li 5, 1
  018b628  lis 6, 25
  018b62c  stw 3, 32(30)
  018b630  addi 29, 6, -19884
  018b634  sth 4, 36(30)
  018b638  stb 5, 40(30)
  018b63c  stb 27, 41(30)
  018b640  stb 5, 46(30)
  018b644  lfs 1, 24(29)
  018b648  bl 0x502758
  018b64c  nop
  018b650  stb 3, 88(30)
  018b654  lfs 1, 28(29)
  018b658  bl 0x502758
  018b65c  nop
  018b660  lwz 4, 464(30)
  018b664  stb 3, 90(30)
  018b668  cmpwi 4, -1
  018b66c  bf 2, 0x18b698
  018b670  lis 3, 101
  018b674  lhz 4, 178(31)
  018b678  addic 3, 3, 16940
  018b67c  extsh 4, 4
  018b680  bl 0x5cd098
  018b684  nop
  018b688  ori 3, 31, 0
  018b68c  bl 0xefb38
  018b690  nop
  018b694  b 0x18cce8
  018b698  lwz 3, 468(30)
  018b69c  cmpwi 3, -1
  018b6a0  bf 2, 0x18b6cc
  018b6a4  lis 3, 101
  018b6a8  lhz 4, 178(31)
  018b6ac  addic 3, 3, 16988
  018b6b0  extsh 4, 4
  018b6b4  bl 0x5cd098
  018b6b8  nop
  018b6bc  ori 3, 31, 0
  018b6c0  bl 0xefb38
  018b6c4  nop
  018b6c8  b 0x18cce8
  018b6cc  addic 3, 30, 208
  018b6d0  bl 0x100f8c
  018b6d4  nop
  018b6d8  lis 4, 25
  018b6dc  lis 3, 16128
  018b6e0  addi 29, 4, -19884
  018b6e4  stw 3, 220(30)
  018b6e8  stw 3, 216(30)
  018b6ec  lfs 1, 32(29)
  018b6f0  bl 0x502758
  018b6f4  nop
  018b6f8  stw 3, 208(30)
  018b6fc  lis 4, 16050
  018b700  lis 3, 114
  018b704  lfs 1, 36(29)
  018b708  lis 5, 15948
  018b70c  ori 4, 4, 47298
  018b710  ori 5, 5, 52429
  018b714  lfs 2, -3048(3)
  018b718  lis 3, 114
  018b71c  fmuls 1, 2, 1
  018b720  stfs 1, 268(30)
  018b724  stfs 1, 272(30)
  018b728  lfs 1, 40(29)
  018b72c  lfs 2, -3052(3)
  018b730  stw 4, 248(30)
  018b734  fmuls 1, 2, 1
  018b738  stw 5, 252(30)
  018b73c  stfs 1, 276(30)
  018b740  bl 0x5c8318
  018b744  nop
  018b748  clrlwi 3, 3, 31
  018b74c  cmpwi 3, 0
  018b750  bt 2, 0x18b768
  018b754  lis 3, 0
  018b758  lhz 4, 52(31)
  018b75c  ori 3, 3, 32768
  018b760  or 3, 4, 3
  018b764  sth 3, 52(31)
  018b768  lwz 4, 468(30)
  018b76c  lis 3, 165
  018b770  cmpwi 28, 0
  018b774  slwi 4, 4, 2
  018b778  addic 3, 3, 7136
  018b77c  extsw 4, 4
  018b780  lwzx 3, 3, 4
  018b784  lfs 1, 16(3)
  018b788  stfs 1, 16(31)
  018b78c  lfs 1, 20(3)
  018b790  stfs 1, 20(31)
  018b794  lfs 1, 24(3)
  018b798  stfs 1, 24(31)
  018b79c  lfs 1, 28(3)
  018b7a0  stfs 1, 28(31)
  018b7a4  bt 2, 0x18b860
  018b7a8  bl 0x5c8318
  018b7ac  nop
  018b7b0  rlwinm 3, 3, 1, 30, 30
  018b7b4  lis 4, 25
  018b7b8  addic 5, 3, -1
  018b7bc  addi 6, 4, -19884
  018b7c0  ori 4, 28, 0
  018b7c4  addic 3, 31, 16
  018b7c8  sth 5, 524(30)
  018b7cc  lfs 1, 44(6)
  018b7d0  bl 0x1367d0
  018b7d4  nop
  018b7d8  lhz 4, 524(30)
  018b7dc  extsh 5, 4
  018b7e0  addc 3, 3, 5
  018b7e4  stw 3, 500(30)
  018b7e8  lwz 5, 0(28)
  018b7ec  cmpw 3, 5
  018b7f0  bf 0, 0x18b7fc
  018b7f4  cmpwi 3, 0
  018b7f8  bf 0, 0x18b814
  018b7fc  neg 4, 4
  018b800  extsh 5, 4
  018b804  sldi 5, 5, 1
  018b808  sth 4, 524(30)
  018b80c  addc 3, 3, 5
  018b810  stw 3, 500(30)
  018b814  lbz 3, 83(31)
  018b818  cmpwi 3, 2
  018b81c  bt 2, 0x18b854
  018b820  bl 0x5c8318
  018b824  nop
  018b828  srawi 5, 3, 2
  018b82c  li 4, 2
  018b830  addze 6, 5
  018b834  li 5, 0
  018b838  sldi 6, 6, 2
  018b83c  subc 6, 3, 6
  018b840  ori 3, 31, 0
  018b844  addic 6, 6, 7
  018b848  extsw 6, 6
  018b84c  bl 0xfddc0
  018b850  nop
  018b854  li 3, 1
  018b858  stb 3, 32(31)
  018b85c  b 0x18b868
  018b860  li 3, 3
  018b864  stb 3, 32(31)
  018b868  sth 27, 474(30)
  018b86c  b 0x18cce8
  018b870  lwz 5, 500(30)
  018b874  lfs 1, 20(31)
  018b878  slwi 3, 5, 4
  018b87c  lfs 2, 16(31)
  018b880  addc 3, 28, 3
  018b884  clrldi 3, 3, 32
  018b888  lfs 3, 20(3)
  018b88c  lfs 4, 16(3)
  018b890  fsubs 1, 1, 3
  018b894  fsubs 2, 2, 4
  018b898  fmuls 1, 1, 1
  018b89c  fmadds 1, 2, 2, 1
  018b8a0  lfs 2, 224(30)
  018b8a4  fsqrts 1, 1
  018b8a8  fcmpu 0, 1, 2
  018b8ac  cror 6, 1, 2
  018b8b0  bt 6, 0x18b8f8
  018b8b4  lhz 4, 524(30)
  018b8b8  extsh 3, 4
  018b8bc  addc 3, 5, 3
  018b8c0  stw 3, 500(30)
  018b8c4  lwz 5, 0(28)
  018b8c8  cmpw 3, 5
  018b8cc  bf 0, 0x18b8dc
  018b8d0  ori 5, 3, 0
  018b8d4  cmpwi 5, 0
  018b8d8  bf 0, 0x18b8f8
  018b8dc  neg 4, 4
  018b8e0  extsh 5, 4
  018b8e4  sldi 5, 5, 1
  018b8e8  sth 4, 524(30)
  018b8ec  addc 5, 3, 5
  018b8f0  stw 27, 224(30)
  018b8f4  stw 5, 500(30)
  018b8f8  sldi 3, 5, 4
  018b8fc  addic 6, 1, 128
  018b900  addc 5, 28, 3
  018b904  ori 3, 31, 0
  018b908  addic 5, 5, 16
  018b90c  addic 4, 30, 208
  018b910  clrldi 5, 5, 32
  018b914  bl 0x101cc0
  018b918  nop
  018b91c  cmpwi 29, 0
  018b920  bt 2, 0x18cce8
  018b924  lwz 3, 356(30)
  018b928  cmpwi 3, 2
  018b92c  bt 2, 0x18cce8
  018b930  addic 3, 30, 496
  018b934  bl 0x4fff60
  018b938  nop
  018b93c  cmpwi 3, 0
  018b940  bt 2, 0x18cce8
  018b944  lis 4, 25
  018b948  lwz 6, 468(30)
  018b94c  lis 3, 165
  018b950  addi 4, 4, -19884
  018b954  slwi 6, 6, 2
  018b958  addic 5, 3, 7136
  018b95c  addic 3, 31, 16
  018b960  lfs 1, 44(4)
  018b964  extsw 4, 6
  018b968  lwzx 4, 5, 4
  018b96c  bl 0x1367d0
  018b970  nop
  018b974  li 4, 2
  018b978  stw 3, 500(30)
  018b97c  stb 4, 32(31)
  018b980  b 0x18cce8
  018b984  lis 4, 25
  018b988  lis 3, 165
  018b98c  addi 29, 4, -19884
  018b990  lwz 4, 468(30)
  018b994  addic 28, 3, 7136
  018b998  addic 3, 31, 16
  018b99c  slwi 4, 4, 2
  018b9a0  extsw 4, 4
  018b9a4  lfs 1, 44(29)
  018b9a8  lwzx 4, 28, 4
  018b9ac  bl 0x1367d0
  018b9b0  nop
  018b9b4  lwz 4, 468(30)
  018b9b8  stw 3, 500(30)
  018b9bc  sldi 5, 3, 4
  018b9c0  slwi 4, 4, 2
  018b9c4  lfs 1, 20(31)
  018b9c8  extsw 4, 4
  018b9cc  lwzx 3, 28, 4
  018b9d0  lfs 2, 16(31)
  018b9d4  addc 3, 3, 5
  018b9d8  clrldi 4, 3, 32
  018b9dc  lfs 3, 20(4)
  018b9e0  lfs 4, 16(4)
  018b9e4  fsubs 1, 1, 3
  018b9e8  fsubs 2, 2, 4
  018b9ec  fmuls 1, 1, 1
  018b9f0  fmadds 1, 2, 2, 1
  018b9f4  lfs 2, 48(29)
  018b9f8  fsqrts 1, 1
  018b9fc  fcmpu 0, 1, 2
  018ba00  bt 0, 0x18ba14
  018ba04  lfs 2, 224(30)
  018ba08  fcmpu 0, 1, 2
  018ba0c  cror 6, 1, 2
  018ba10  bt 6, 0x18ba24
  018ba14  li 3, 3
  018ba18  stw 27, 224(30)
  018ba1c  stb 3, 32(31)
  018ba20  b 0x18cce8
  018ba24  addic 5, 3, 16
  018ba28  ori 3, 31, 0
  018ba2c  addic 4, 30, 208
  018ba30  clrldi 5, 5, 32
  018ba34  addic 6, 1, 144
  018ba38  bl 0x101cc0
  018ba3c  nop
  018ba40  lbz 3, 83(31)
  018ba44  cmpwi 3, 2
  018ba48  bt 2, 0x18cce8
  018ba4c  bl 0x5c8318
  018ba50  nop
  018ba54  srawi 4, 3, 2
  018ba58  addze 5, 4
  018ba5c  li 4, 2
  018ba60  sldi 5, 5, 2
  018ba64  subc 6, 3, 5
  018ba68  ori 3, 31, 0
  018ba6c  addic 6, 6, 7
  018ba70  li 5, 0
  018ba74  extsw 6, 6
  018ba78  bl 0xfddc0
  018ba7c  nop
  018ba80  b 0x18cce8
  018ba84  lfs 1, 16(29)
  018ba88  lfs 2, 16(31)
  018ba8c  addic 28, 31, 72
  018ba90  lfs 3, 20(29)
  018ba94  lfs 4, 20(31)
  018ba98  fsubs 1, 1, 2
  018ba9c  fsubs 2, 3, 4
  018baa0  bl 0x5e8338
  018baa4  nop
  018baa8  lis 3, 25
  018baac  lis 4, 114
  018bab0  addi 3, 3, -19884
  018bab4  lis 6, 114
  018bab8  addic 5, 30, 480
  018babc  lfs 2, 40(3)
  018bac0  lfs 3, -3048(4)
  018bac4  lfs 4, 52(3)
  018bac8  fmuls 2, 3, 2
  018bacc  lfs 5, -3052(6)
  018bad0  ori 3, 28, 0
  018bad4  fmuls 4, 5, 4
  018bad8  fmr 3, 2
  018badc  bl 0x10a2e0
  018bae0  nop
  018bae4  lbz 3, 112(31)
  018bae8  rlwinm 3, 3, 0, 30, 30
  018baec  cmpwi 3, 0
  018baf0  bt 2, 0x18bb88
  018baf4  lbz 28, 83(31)
  018baf8  bl 0x5c8318
  018bafc  nop
  018bb00  clrlwi 3, 3, 31
  018bb04  cmpw 28, 3
  018bb08  bt 2, 0x18bb88
  018bb0c  bl 0x5c8318
  018bb10  nop
  018bb14  lis 4, 25
  018bb18  lis 5, 114
  018bb1c  addi 4, 4, -19884
  018bb20  clrlwi 28, 3, 31
  018bb24  lfs 1, 56(4)
  018bb28  lfs 2, -3056(5)
  018bb2c  fmuls 1, 2, 1
  018bb30  fctiwz 1, 1
  018bb34  stfd 1, 320(1)
  018bb38  lwz 26, 324(1)
  018bb3c  bl 0x5c8318
  018bb40  nop
  018bb44  lis 4, -28087
  018bb48  ori 4, 4, 9363
  018bb4c  mulhw 4, 4, 3
  018bb50  addc 4, 4, 3
  018bb54  srawi 4, 4, 2
  018bb58  srwi 5, 4, 31
  018bb5c  addc 6, 4, 5
  018bb60  ori 4, 28, 0
  018bb64  sldi 7, 6, 3
  018bb68  li 5, 0
  018bb6c  subc 6, 7, 6
  018bb70  subc 6, 3, 6
  018bb74  ori 3, 31, 0
  018bb78  addc 6, 26, 6
  018bb7c  extsw 6, 6
  018bb80  bl 0xfddc0
  018bb84  nop
  018bb88  lis 3, 116
  018bb8c  lhz 4, 474(30)
  018bb90  extsh 4, 4
  018bb94  lwz 3, -1600(3)
  018bb98  cmpw 4, 3
  018bb9c  bf 1, 0x18bc20
  018bba0  sth 27, 474(30)
  018bba4  lbz 3, 83(31)
  018bba8  cmpwi 3, 10
  018bbac  bt 2, 0x18bc14
  018bbb0  lis 3, 25
  018bbb4  lis 4, 114
  018bbb8  addi 5, 3, -19884
  018bbbc  li 3, 0
  018bbc0  lfs 1, 56(5)
  018bbc4  lfs 2, -3056(4)
  018bbc8  fmuls 1, 2, 1
  018bbcc  fctiwz 1, 1
  018bbd0  stfd 1, 320(1)
  018bbd4  lfs 1, 60(5)
  018bbd8  lwz 30, 324(1)
  018bbdc  fmuls 1, 2, 1
  018bbe0  fctiwz 1, 1
  018bbe4  stfd 1, 320(1)
  018bbe8  lwz 4, 324(1)
  018bbec  extsw 4, 4
  018bbf0  bl 0xfe484
  018bbf4  nop
  018bbf8  addc 6, 30, 3
  018bbfc  ori 3, 31, 0
  018bc00  extsw 6, 6
  018bc04  li 4, 10
  018bc08  li 5, 2
  018bc0c  bl 0xfddc0
  018bc10  nop
  018bc14  li 3, 9
  018bc18  stb 3, 32(31)
  018bc1c  b 0x18cce8
  018bc20  cmpwi 29, 0
  018bc24  bt 2, 0x18cce8
  018bc28  lwz 3, 356(30)
  018bc2c  cmpwi 3, 2
  018bc30  bt 2, 0x18bd94
  018bc34  addic 3, 30, 496
  018bc38  bl 0x4fff60
  018bc3c  nop
  018bc40  cmpwi 3, 0
  018bc44  bt 2, 0x18bd94
  018bc48  lwz 5, 500(30)
  018bc4c  li 3, 4
  018bc50  lfs 1, 16(31)
  018bc54  lis 4, 165
  018bc58  addic 5, 5, 1
  018bc5c  stfs 1, 448(30)
  018bc60  lfs 1, 20(31)
  018bc64  clrlwi 5, 5, 31
  018bc68  addic 4, 4, 7136
  018bc6c  stfs 1, 452(30)
  018bc70  lfs 1, 24(31)
  018bc74  stw 5, 500(30)
  018bc78  stfs 1, 456(30)
  018bc7c  lfs 1, 28(31)
  018bc80  stfs 1, 460(30)
  018bc84  stb 3, 32(31)
  018bc88  lwz 3, 468(30)
  018bc8c  lfs 1, 20(31)
  018bc90  slwi 3, 3, 2
  018bc94  lfs 2, 16(31)
  018bc98  extsw 3, 3
  018bc9c  lwzx 3, 4, 3
  018bca0  lfs 3, 212(31)
  018bca4  lwz 4, 500(30)
  018bca8  lfs 4, 24(31)
  018bcac  slwi 4, 4, 4
  018bcb0  lfs 5, 208(31)
  018bcb4  addc 3, 3, 4
  018bcb8  clrldi 3, 3, 32
  018bcbc  lfs 6, 20(3)
  018bcc0  lfs 7, 16(3)
  018bcc4  fsubs 1, 6, 1
  018bcc8  fsubs 2, 7, 2
  018bccc  lfs 6, 24(3)
  018bcd0  lis 3, 25
  018bcd4  fsubs 4, 6, 4
  018bcd8  lfs 6, 216(31)
  018bcdc  addi 3, 3, -19884
  018bce0  fmuls 1, 3, 1
  018bce4  lfs 3, 44(3)
  018bce8  fmadds 1, 5, 2, 1
  018bcec  fmadds 1, 6, 4, 1
  018bcf0  fcmpu 0, 1, 3
  018bcf4  cror 6, 1, 2
  018bcf8  bt 6, 0x18bd48
  018bcfc  lbz 3, 83(31)
  018bd00  cmpwi 3, 18
  018bd04  bt 2, 0x18cce8
  018bd08  lis 3, 25
  018bd0c  lis 4, 114
  018bd10  addi 3, 3, -19884
  018bd14  li 5, 0
  018bd18  lfs 1, 60(3)
  018bd1c  lfs 2, -3056(4)
  018bd20  ori 3, 31, 0
  018bd24  fmuls 1, 2, 1
  018bd28  li 4, 18
  018bd2c  fctiwz 1, 1
  018bd30  stfd 1, 320(1)
  018bd34  lwz 6, 324(1)
  018bd38  extsw 6, 6
  018bd3c  bl 0xfddc0
  018bd40  nop
  018bd44  b 0x18cce8
  018bd48  lbz 3, 83(31)
  018bd4c  cmpwi 3, 16
  018bd50  bt 2, 0x18cce8
  018bd54  lis 3, 25
  018bd58  lis 4, 114
  018bd5c  addi 3, 3, -19884
  018bd60  li 5, 0
  018bd64  lfs 1, 60(3)
  018bd68  lfs 2, -3056(4)
  018bd6c  ori 3, 31, 0
  018bd70  li 4, 16
  018bd74  fmuls 1, 2, 1
  018bd78  fctiwz 1, 1
  018bd7c  stfd 1, 320(1)
  018bd80  lwz 6, 324(1)
  018bd84  extsw 6, 6
  018bd88  bl 0xfddc0
  018bd8c  nop
  018bd90  b 0x18cce8
  018bd94  lfs 1, 20(31)
  018bd98  lfs 2, 20(29)
  018bd9c  lfs 3, 16(31)
  018bda0  fsubs 1, 1, 2
  018bda4  lfs 2, 16(29)
  018bda8  fsubs 2, 3, 2
  018bdac  lis 3, 116
  018bdb0  fmuls 1, 1, 1
  018bdb4  fmadds 1, 2, 2, 1
  018bdb8  lfs 2, -1604(3)
  018bdbc  fsqrts 1, 1
  018bdc0  fcmpu 0, 1, 2
  018bdc4  cror 6, 1, 2
  018bdc8  bt 6, 0x18cce8
  018bdcc  li 3, 7
  018bdd0  lbz 4, 83(31)
  018bdd4  cmpwi 4, 13
  018bdd8  stb 3, 32(31)
  018bddc  bt 2, 0x18cce8
  018bde0  lis 3, 25
  018bde4  lis 4, 114
  018bde8  addi 3, 3, -19884
  018bdec  li 5, 0
  018bdf0  lfs 1, 64(3)
  018bdf4  lfs 2, -3056(4)
  018bdf8  ori 3, 31, 0
  018bdfc  fmuls 1, 2, 1
  018be00  li 4, 13
  018be04  fctiwz 1, 1
  018be08  stfd 1, 320(1)
  018be0c  lwz 6, 324(1)
  018be10  extsw 6, 6
  018be14  bl 0xfddc0
  018be18  nop
  018be1c  b 0x18cce8
  018be20  lfs 1, 16(29)
  018be24  addic 28, 31, 72
  018be28  lfs 2, 16(31)
  018be2c  lfs 3, 20(29)
  018be30  lfs 4, 20(31)
  018be34  fsubs 1, 1, 2
  018be38  fsubs 2, 3, 4
  018be3c  bl 0x5e8338
  018be40  nop
  018be44  lis 3, 25
  018be48  lis 4, 114
  018be4c  addi 26, 3, -19884
  018be50  lis 3, 114
  018be54  addic 5, 30, 480
  018be58  lfs 2, 40(26)
  018be5c  lfs 3, -3048(3)
  018be60  lfs 4, 52(26)
  018be64  ori 3, 28, 0
  018be68  fmuls 2, 3, 2
  018be6c  lfs 5, -3052(4)
  018be70  fmuls 4, 5, 4
  018be74  fmr 3, 2
  018be78  bl 0x10a2e0
  018be7c  nop
  018be80  ori 3, 31, 0
  018be84  bl 0xefe40
  018be88  nop
  018be8c  lfs 2, 28(26)
  018be90  lfs 3, 16(31)
  018be94  fcmpu 0, 1, 2
  018be98  lbz 3, 112(31)
  018be9c  lfs 4, 20(31)
  018bea0  lfs 5, 24(31)
  018bea4  lfs 6, 28(31)
  018bea8  cror 6, 0, 2
  018beac  bt 6, 0x18bfb8
  018beb0  lis 4, 25
  018beb4  addi 4, 4, -19884
  018beb8  lfs 2, 68(4)
  018bebc  fcmpu 0, 1, 2
  018bec0  cror 6, 1, 2
  018bec4  bt 6, 0x18bfb8
  018bec8  lbz 4, 82(31)
  018becc  lbz 5, 83(31)
  018bed0  cmpw 4, 5
  018bed4  bf 2, 0x18bfb8
  018bed8  lis 3, 25
  018bedc  fsubs 1, 2, 1
  018bee0  addi 3, 3, -19884
  018bee4  lfs 4, 72(3)
  018bee8  lfs 2, 48(3)
  018beec  fnmsubs 1, 1, 4, 2
  018bef0  fcmpu 0, 1, 2
  018bef4  cror 6, 0, 2
  018bef8  bt 6, 0x18bf04
  018befc  fmr 1, 2
  018bf00  b 0x18bf20
  018bf04  lis 3, 25
  018bf08  addi 3, 3, -19884
  018bf0c  lfs 3, 44(3)
  018bf10  fcmpu 0, 1, 3
  018bf14  cror 6, 1, 2
  018bf18  bt 6, 0x18bf20
  018bf1c  fmr 1, 3
  018bf20  lwz 5, 468(30)
  018bf24  lis 4, 25
  018bf28  lis 3, 165
  018bf2c  lwz 6, 500(30)
  018bf30  slwi 5, 5, 2
  018bf34  addi 4, 4, -19884
  018bf38  addic 3, 3, 7136
  018bf3c  extsw 5, 5
  018bf40  slwi 6, 6, 4
  018bf44  lfs 3, 76(4)
  018bf48  lwzx 3, 3, 5
  018bf4c  lfs 4, 80(4)
  018bf50  addc 3, 3, 6
  018bf54  lfs 5, 456(30)
  018bf58  fsubs 3, 1, 3
  018bf5c  lfs 6, 448(30)
  018bf60  clrldi 3, 3, 32
  018bf64  lfs 7, 452(30)
  018bf68  lis 4, 116
  018bf6c  lfs 8, 24(3)
  018bf70  lfs 9, 16(3)
  018bf74  fsubs 8, 8, 5
  018bf78  lfs 10, 20(3)
  018bf7c  fsubs 9, 9, 6
  018bf80  fmuls 3, 3, 4
  018bf84  lfs 11, 28(3)
  018bf88  fsubs 10, 10, 7
  018bf8c  fmadds 4, 1, 8, 5
  018bf90  fmadds 5, 1, 9, 6
  018bf94  fnmsubs 2, 3, 3, 2
  018bf98  fmadds 1, 1, 10, 7
  018bf9c  lfs 6, -1596(4)
  018bfa0  stfs 11, 28(31)
  018bfa4  stfs 5, 16(31)
  018bfa8  stfs 1, 20(31)
  018bfac  fmadds 1, 6, 2, 4
  018bfb0  stfs 1, 24(31)
  018bfb4  b 0x18cce8
  018bfb8  rlwinm 3, 3, 0, 30, 30
  018bfbc  cmpwi 3, 0
  018bfc0  bt 2, 0x18cce8
  018bfc4  stfs 3, 160(1)
  018bfc8  stfs 4, 164(1)
  018bfcc  lis 3, 25
  018bfd0  stfs 5, 168(1)
  018bfd4  stfs 6, 172(1)
  018bfd8  lfs 1, 16(29)
  018bfdc  addi 8, 3, -19884
  018bfe0  stfs 1, 176(1)
  018bfe4  lfs 1, 20(29)
  018bfe8  stfs 1, 180(1)
  018bfec  lfs 1, 24(29)
  018bff0  stfs 1, 184(1)
  018bff4  lfs 2, 28(29)
  018bff8  addic 4, 1, 176
  018bffc  stfs 2, 188(1)
  018c000  lfs 2, 48(8)
  018c004  addic 3, 1, 160
  018c008  li 5, 0
  018c00c  fadds 2, 5, 2
  018c010  ori 6, 31, 0
  018c014  li 7, 0
  018c018  stfs 2, 168(1)
  018c01c  lfs 2, 84(8)
  018c020  fadds 1, 1, 2
  018c024  stfs 1, 184(1)
  018c028  bl 0x57820
  018c02c  nop
  018c030  lis 4, 116
  018c034  lhz 3, 474(30)
  018c038  extsh 3, 3
  018c03c  lwz 4, -1600(4)
  018c040  cmpw 3, 4
  018c044  bf 1, 0x18c098
  018c048  sth 27, 474(30)
  018c04c  lbz 3, 83(31)
  018c050  cmpwi 3, 10
  018c054  bt 2, 0x18c08c
  018c058  bl 0x5c8318
  018c05c  nop
  018c060  srawi 5, 3, 2
  018c064  li 4, 10
  018c068  addze 6, 5
  018c06c  li 5, 2
  018c070  sldi 6, 6, 2
  018c074  subc 6, 3, 6
  018c078  ori 3, 31, 0
  018c07c  addic 6, 6, 5
  018c080  extsw 6, 6
  018c084  bl 0xfddc0
  018c088  nop
  018c08c  li 3, 9
  018c090  stb 3, 32(31)
  018c094  b 0x18cce8
  018c098  lfs 1, 20(31)
  018c09c  lfs 2, 20(29)
  018c0a0  lfs 3, 16(31)
  018c0a4  fsubs 1, 1, 2
  018c0a8  lfs 2, 16(29)
  018c0ac  fsubs 2, 3, 2
  018c0b0  lis 3, 116
  018c0b4  fmuls 1, 1, 1
  018c0b8  fmadds 1, 2, 2, 1
  018c0bc  lfs 2, -1604(3)
  018c0c0  fsqrts 1, 1
  018c0c4  fcmpu 0, 1, 2
  018c0c8  cror 6, 1, 2
  018c0cc  bt 6, 0x18c11c
  018c0d0  li 3, 7
  018c0d4  lbz 4, 83(31)
  018c0d8  cmpwi 4, 13
  018c0dc  stb 3, 32(31)
  018c0e0  bt 2, 0x18cce8
  018c0e4  bl 0x5c8318
  018c0e8  nop
  018c0ec  srawi 4, 3, 2
  018c0f0  addze 5, 4
  018c0f4  li 4, 13
  018c0f8  sldi 5, 5, 2
  018c0fc  subc 6, 3, 5
  018c100  ori 3, 31, 0
  018c104  addic 6, 6, 8
  018c108  li 5, 0
  018c10c  extsw 6, 6
  018c110  bl 0xfddc0
  018c114  nop
  018c118  b 0x18cce8
  018c11c  lis 3, 161
  018c120  addic 3, 3, 2368
  018c124  lwz 3, 24(3)
  018c128  cmpw 3, 29
  018c12c  bt 2, 0x18c1b4
  018c130  li 3, 3
  018c134  lbz 4, 83(31)
  018c138  cmpwi 4, 0
  018c13c  stb 3, 32(31)
  018c140  bt 2, 0x18c180
  018c144  lis 3, 25
  018c148  lis 4, 114
  018c14c  addi 3, 3, -19884
  018c150  li 5, 0
  018c154  lfs 1, 60(3)
  018c158  lfs 2, -3056(4)
  018c15c  ori 3, 31, 0
  018c160  li 4, 0
  018c164  fmuls 1, 2, 1
  018c168  fctiwz 1, 1
  018c16c  stfd 1, 320(1)
  018c170  lwz 6, 324(1)
  018c174  extsw 6, 6
  018c178  bl 0xfddc0
  018c17c  nop
  018c180  lis 3, 25
  018c184  addi 3, 3, -19884
  018c188  lfs 1, 88(3)
  018c18c  lfs 2, 92(3)
  018c190  bl 0xfcbe8
  018c194  nop
  018c198  lis 3, 114
  018c19c  lfs 2, -3056(3)
  018c1a0  fmuls 1, 1, 2
  018c1a4  bl 0x502758
  018c1a8  nop
  018c1ac  stw 3, 496(30)
  018c1b0  b 0x18cce8
  018c1b4  lis 3, 16256
  018c1b8  li 4, 5
  018c1bc  stw 3, 488(30)
  018c1c0  stb 4, 32(31)
  018c1c4  sth 27, 526(30)
  018c1c8  lbz 3, 83(31)
  018c1cc  cmpwi 3, 6
  018c1d0  bt 2, 0x18cce8
  018c1d4  lis 3, 25
  018c1d8  lis 4, 114
  018c1dc  addi 3, 3, -19884
  018c1e0  li 5, 0
  018c1e4  lfs 1, 64(3)
  018c1e8  lfs 2, -3056(4)
  018c1ec  ori 3, 31, 0
  018c1f0  li 4, 6
  018c1f4  fmuls 1, 2, 1
  018c1f8  fctiwz 1, 1
  018c1fc  stfd 1, 320(1)
  018c200  lwz 6, 324(1)
  018c204  extsw 6, 6
  018c208  bl 0xfddc0
  018c20c  nop
  018c210  b 0x18cce8
  018c214  lfs 1, 20(31)
  018c218  lfs 2, 20(29)
  018c21c  lfs 3, 16(31)
  018c220  fsubs 1, 1, 2
  018c224  lfs 2, 16(29)
  018c228  fsubs 2, 3, 2
  018c22c  lis 3, 116
  018c230  fmuls 1, 1, 1
  018c234  fmadds 1, 2, 2, 1
  018c238  lfs 2, -1604(3)
  018c23c  fsqrts 1, 1
  018c240  fcmpu 0, 1, 2
  018c244  cror 6, 1, 2
  018c248  bt 6, 0x18c29c
  018c24c  li 3, 7
  018c250  stb 3, 32(31)
  018c254  stw 27, 492(30)
  018c258  lbz 3, 83(31)
  018c25c  cmpwi 3, 13
  018c260  bt 2, 0x18cce8
  018c264  bl 0x5c8318
  018c268  nop
  018c26c  srawi 4, 3, 2
  018c270  addze 5, 4
  018c274  li 4, 13
  018c278  sldi 5, 5, 2
  018c27c  subc 6, 3, 5
  018c280  ori 3, 31, 0
  018c284  addic 6, 6, 8
  018c288  li 5, 0
  018c28c  extsw 6, 6
  018c290  bl 0xfddc0
  018c294  nop
  018c298  b 0x18cce8
  018c29c  addic 3, 30, 492
  018c2a0  bl 0x4fff60
  018c2a4  nop
  018c2a8  cmpwi 3, 0
  018c2ac  bt 2, 0x18cce8
  018c2b0  lis 3, 25
  018c2b4  lis 26, 161
  018c2b8  addi 28, 3, -19884
  018c2bc  lis 4, 161
  018c2c0  lfs 1, 96(28)
  018c2c4  lfs 2, 1816(26)
  018c2c8  lfs 3, 1812(4)
  018c2cc  fmadds 1, 2, 1, 3
  018c2d0  bl 0x502758
  018c2d4  nop
  018c2d8  lis 4, 116
  018c2dc  lis 5, 16204
  018c2e0  lwz 4, -1616(4)
  018c2e4  addc 3, 4, 3
  018c2e8  extsw 3, 3
  018c2ec  li 4, 492
  018c2f0  std 3, 320(1)
  018c2f4  lis 3, 114
  018c2f8  lfs 1, 76(28)
  018c2fc  ori 5, 5, 52429
  018c300  lfs 2, -3056(3)
  018c304  lfs 3, 488(30)
  018c308  lfd 4, 320(1)
  018c30c  lis 3, 116
  018c310  fcfid 4, 4
  018c314  frsp 4, 4
  018c318  fadds 1, 4, 1
  018c31c  fmuls 1, 2, 1
  018c320  fctiwz 1, 1
  018c324  stfiwx 1, 4, 30
  018c328  lfs 1, -1612(3)
  018c32c  fadds 1, 3, 1
  018c330  stfs 1, 488(30)
  018c334  lwz 3, 1816(26)
  018c338  srawi 4, 3, 31
  018c33c  srwi 6, 4, 1
  018c340  xor 3, 6, 3
  018c344  subc 3, 3, 4
  018c348  cmpw 3, 5
  018c34c  bf 0, 0x18c378
  018c350  lis 3, 161
  018c354  lis 4, 16204
  018c358  ori 4, 4, 52429
  018c35c  lwz 3, 1812(3)
  018c360  srawi 5, 3, 31
  018c364  srwi 6, 5, 1
  018c368  xor 3, 6, 3
  018c36c  subc 3, 3, 5
  018c370  cmpw 3, 4
  018c374  bt 0, 0x18c388
  018c378  lhz 3, 526(30)
  018c37c  clrlwi 3, 3, 31
  018c380  cmpwi 3, 0
  018c384  bf 2, 0x18c4ec
  018c388  addic 28, 1, 192
  018c38c  lwz 3, 504(30)
  018c390  li 4, 0
  018c394  ori 5, 28, 0
  018c398  bl 0xf1114
  018c39c  nop
  018c3a0  lis 3, 25
  018c3a4  lfs 1, 72(31)
  018c3a8  addi 7, 3, -19884
  018c3ac  lis 3, 116
  018c3b0  lfs 2, 100(7)
  018c3b4  lfs 3, 104(7)
  018c3b8  fadds 2, 1, 2
  018c3bc  lfs 4, 108(7)
  018c3c0  fsubs 5, 3, 1
  018c3c4  lis 4, 114
  018c3c8  ori 6, 29, 0
  018c3cc  fsubs 3, 3, 2
  018c3d0  fsub 7, 1, 5
  018c3d4  fsubs 6, 4, 2
  018c3d8  fsubs 4, 4, 1
  018c3dc  fsub 8, 2, 3
  018c3e0  fsel 1, 7, 5, 1
  018c3e4  ori 5, 31, 0
  018c3e8  fsel 2, 8, 3, 2
  018c3ec  fsub 5, 4, 1
  018c3f0  lfs 3, 112(7)
  018c3f4  fsub 7, 6, 2
  018c3f8  fsel 1, 5, 4, 1
  018c3fc  lfs 4, 116(7)
  018c400  lfs 5, 120(7)
  018c404  lfs 8, 124(7)
  018c408  fsel 2, 7, 6, 2
  018c40c  fmuls 6, 1, 1
  018c410  fmuls 7, 2, 2
  018c414  fmuls 9, 6, 1
  018c418  fmuls 10, 7, 2
  018c41c  fmuls 11, 6, 9
  018c420  fmadds 1, 9, 3, 1
  018c424  fmuls 9, 7, 10
  018c428  fmadds 2, 10, 3, 2
  018c42c  fmuls 3, 6, 11
  018c430  fmadds 1, 11, 4, 1
  018c434  lfs 10, -1608(3)
  018c438  lis 3, 114
  018c43c  fmuls 11, 7, 9
  018c440  fmadds 2, 9, 4, 2
  018c444  fmuls 6, 6, 3
  018c448  fmadds 1, 3, 5, 1
  018c44c  lfs 4, -3052(4)
  018c450  stw 27, 216(1)
  018c454  fmuls 9, 10, 4
  018c458  fmuls 3, 7, 11
  018c45c  fmadds 2, 11, 5, 2
  018c460  fmuls 5, 10, 4
  018c464  fmadds 1, 6, 8, 1
  018c468  ori 4, 28, 0
  018c46c  fmadds 2, 3, 8, 2
  018c470  fmuls 1, 5, 1
  018c474  fmuls 3, 10, 4
  018c478  fmuls 2, 9, 2
  018c47c  stfs 1, 212(1)
  018c480  stfs 2, 208(1)
  018c484  lfs 1, 128(7)
  018c488  lfs 2, 488(30)
  018c48c  fdivs 1, 1, 2
  018c490  lfs 2, -3056(3)
  018c494  addic 3, 1, 208
  018c498  lhz 8, 526(30)
  018c49c  extsh 8, 8
  018c4a0  fmuls 1, 3, 1
  018c4a4  stfs 1, 216(1)
  018c4a8  lfs 1, 132(7)
  018c4ac  fmuls 1, 2, 1
  018c4b0  fctiwz 1, 1
  018c4b4  stfd 1, 320(1)
  018c4b8  lwz 7, 324(1)
  018c4bc  extsw 7, 7
  018c4c0  bl 0x23e6e0
  018c4c4  nop
  018c4c8  ori 29, 3, 0
  018c4cc  cmpwi 29, 0
  018c4d0  bt 2, 0x18c4ec
  018c4d4  lis 3, 25
  018c4d8  lfs 1, 44(29)
  018c4dc  addi 3, 3, -19884
  018c4e0  lfs 2, 136(3)
  018c4e4  fmuls 1, 1, 2
  018c4e8  stfs 1, 44(29)
  018c4ec  lhz 3, 526(30)
  018c4f0  addic 3, 3, 1
  018c4f4  extsh 4, 3
  018c4f8  cmpwi 4, 4
  018c4fc  sth 3, 526(30)
  018c500  bf 1, 0x18c508
  018c504  sth 27, 526(30)
  018c508  lwz 4, 488(30)
  018c50c  lis 3, 16800
  018c510  srawi 5, 4, 31
  018c514  srwi 6, 5, 1
  018c518  xor 4, 6, 4
  018c51c  subc 4, 4, 5
  018c520  cmpw 4, 3
  018c524  bf 1, 0x18cce8
  018c528  lwz 5, 500(30)
  018c52c  li 3, 4
  018c530  lfs 1, 16(31)
  018c534  lis 4, 165
  018c538  addic 5, 5, 1
  018c53c  stfs 1, 448(30)
  018c540  lfs 1, 20(31)
  018c544  clrlwi 5, 5, 31
  018c548  lhz 6, 474(30)
  018c54c  addic 4, 4, 7136
  018c550  stfs 1, 452(30)
  018c554  lfs 1, 24(31)
  018c558  addic 6, 6, 1
  018c55c  stw 5, 500(30)
  018c560  stfs 1, 456(30)
  018c564  lfs 1, 28(31)
  018c568  sth 6, 474(30)
  018c56c  stfs 1, 460(30)
  018c570  stb 3, 32(31)
  018c574  lwz 3, 468(30)
  018c578  lfs 1, 20(31)
  018c57c  slwi 3, 3, 2
  018c580  extsw 3, 3
  018c584  lwzx 3, 4, 3
  018c588  lfs 2, 16(31)
  018c58c  lwz 4, 500(30)
  018c590  lfs 3, 212(31)
  018c594  slwi 4, 4, 4
  018c598  lfs 4, 24(31)
  018c59c  addc 3, 3, 4
  018c5a0  clrldi 3, 3, 32
  018c5a4  lfs 5, 20(3)
  018c5a8  lfs 6, 16(3)
  018c5ac  fsubs 1, 5, 1
  018c5b0  fsubs 2, 6, 2
  018c5b4  lfs 5, 24(3)
  018c5b8  lfs 6, 208(31)
  018c5bc  lis 3, 25
  018c5c0  fsubs 4, 5, 4
  018c5c4  lfs 5, 216(31)
  018c5c8  addi 3, 3, -19884
  018c5cc  fmuls 1, 3, 1
  018c5d0  lfs 3, 44(3)
  018c5d4  fmadds 1, 6, 2, 1
  018c5d8  fmadds 1, 5, 4, 1
  018c5dc  fcmpu 0, 1, 3
  018c5e0  cror 6, 1, 2
  018c5e4  bt 6, 0x18c634
  018c5e8  lbz 3, 83(31)
  018c5ec  cmpwi 3, 18
  018c5f0  bt 2, 0x18cce8
  018c5f4  lis 3, 25
  018c5f8  lis 4, 114
  018c5fc  addi 3, 3, -19884
  018c600  li 5, 0
  018c604  lfs 1, 60(3)
  018c608  lfs 2, -3056(4)
  018c60c  ori 3, 31, 0
  018c610  li 4, 18
  018c614  fmuls 1, 2, 1
  018c618  fctiwz 1, 1
  018c61c  stfd 1, 320(1)
  018c620  lwz 6, 324(1)
  018c624  extsw 6, 6
  018c628  bl 0xfddc0
  018c62c  nop
  018c630  b 0x18cce8
  018c634  lbz 3, 83(31)
  018c638  cmpwi 3, 16
  018c63c  bt 2, 0x18cce8
  018c640  lis 3, 25
  018c644  lis 4, 114
  018c648  addi 3, 3, -19884
  018c64c  li 5, 0
  018c650  lfs 1, 60(3)
  018c654  lfs 2, -3056(4)
  018c658  ori 3, 31, 0
  018c65c  fmuls 1, 2, 1
  018c660  li 4, 16
  018c664  fctiwz 1, 1
  018c668  stfd 1, 320(1)
  018c66c  lwz 6, 324(1)
  018c670  extsw 6, 6
  018c674  bl 0xfddc0
  018c678  nop
  018c67c  b 0x18cce8
  018c680  lfs 1, 16(29)
  018c684  addic 28, 31, 72
  018c688  lfs 2, 16(31)
  018c68c  lfs 3, 20(29)
  018c690  lfs 4, 20(31)
  018c694  fsubs 1, 1, 2
  018c698  fsubs 2, 3, 4
  018c69c  bl 0x5e8338
  018c6a0  nop
  018c6a4  lis 3, 25
  018c6a8  lis 4, 114
  018c6ac  addi 29, 3, -19884
  018c6b0  lis 3, 114
  018c6b4  addic 5, 30, 480
  018c6b8  lfs 2, 40(29)
  018c6bc  lfs 3, -3048(3)
  018c6c0  lfs 4, 52(29)
  018c6c4  ori 3, 28, 0
  018c6c8  fmuls 2, 3, 2
  018c6cc  lfs 5, -3052(4)
  018c6d0  fmuls 4, 5, 4
  018c6d4  fmr 3, 2
  018c6d8  bl 0x10a2e0
  018c6dc  nop
  018c6e0  ori 3, 31, 0
  018c6e4  bl 0xefe40
  018c6e8  nop
  018c6ec  lfs 2, 28(29)
  018c6f0  lbz 29, 112(31)
  018c6f4  fcmpu 0, 1, 2
  018c6f8  cror 6, 0, 2
  018c6fc  bt 6, 0x18c7d4
  018c700  lis 3, 25
  018c704  addi 3, 3, -19884
  018c708  lfs 2, 68(3)
  018c70c  fcmpu 0, 1, 2
  018c710  cror 6, 1, 2
  018c714  bt 6, 0x18c7d4
  018c718  lis 3, 25
  018c71c  lwz 4, 84(31)
  018c720  addi 3, 3, -19884
  018c724  cmpwi 4, 0
  018c728  lfs 31, 44(3)
  018c72c  bf 2, 0x18c7d4
  018c730  lwz 4, 468(30)
  018c734  lis 3, 165
  018c738  lfs 1, 16(31)
  018c73c  slwi 4, 4, 2
  018c740  addic 3, 3, 7136
  018c744  lfs 2, 20(31)
  018c748  extsw 4, 4
  018c74c  addic 30, 1, 224
  018c750  lwzx 4, 3, 4
  018c754  lis 3, 25
  018c758  addi 5, 3, -19884
  018c75c  lis 3, 114
  018c760  lfs 3, 16(4)
  018c764  fsubs 1, 3, 1
  018c768  lfs 3, 24(31)
  018c76c  stfs 1, 224(1)
  018c770  lfs 1, 20(4)
  018c774  fsubs 1, 1, 2
  018c778  lfs 2, -3052(3)
  018c77c  ori 3, 30, 0
  018c780  stfs 1, 228(1)
  018c784  lfs 1, 24(4)
  018c788  fsubs 1, 1, 3
  018c78c  stfs 1, 232(1)
  018c790  lfs 1, 28(4)
  018c794  stfs 1, 236(1)
  018c798  lfs 1, 140(5)
  018c79c  fmuls 1, 2, 1
  018c7a0  bl 0x110488
  018c7a4  nop
  018c7a8  lis 4, 116
  018c7ac  fmr 3, 31
  018c7b0  lis 5, 116
  018c7b4  li 8, 0
  018c7b8  ori 3, 31, 0
  018c7bc  lfs 1, -1624(4)
  018c7c0  ori 4, 30, 0
  018c7c4  lfs 2, -1620(5)
  018c7c8  bl 0x1009b0
  018c7cc  nop
  018c7d0  b 0x18cce8
  018c7d4  rlwinm 3, 29, 0, 30, 30
  018c7d8  cmpwi 3, 0
  018c7dc  bt 2, 0x18cce8
  018c7e0  lis 3, 25
  018c7e4  addi 3, 3, -19884
  018c7e8  lfs 1, 88(3)
  018c7ec  lfs 2, 92(3)
  018c7f0  bl 0xfcbe8
  018c7f4  nop
  018c7f8  lis 3, 114
  018c7fc  lfs 2, -3056(3)
  018c800  fmuls 1, 1, 2
  018c804  bl 0x502758
  018c808  nop
  018c80c  li 4, 3
  018c810  stw 3, 496(30)
  018c814  lbz 3, 83(31)
  018c818  cmpwi 3, 0
  018c81c  stb 4, 32(31)
  018c820  bt 2, 0x18cce8
  018c824  lis 3, 25
  018c828  lis 4, 114
  018c82c  addi 3, 3, -19884
  018c830  li 5, 0
  018c834  lfs 1, 64(3)
  018c838  lfs 2, -3056(4)
  018c83c  ori 3, 31, 0
  018c840  li 4, 0
  018c844  fmuls 1, 2, 1
  018c848  fctiwz 1, 1
  018c84c  stfd 1, 320(1)
  018c850  lwz 6, 324(1)
  018c854  extsw 6, 6
  018c858  bl 0xfddc0
  018c85c  nop
  018c860  b 0x18cce8
  018c864  lfs 1, 16(29)
  018c868  lfs 2, 16(31)
  018c86c  addic 28, 31, 72
  018c870  lfs 3, 20(29)
  018c874  lfs 4, 20(31)
  018c878  fsubs 1, 1, 2
  018c87c  fsubs 2, 3, 4
  018c880  bl 0x5e8338
  018c884  nop
  018c888  lis 3, 25
  018c88c  lis 4, 114
  018c890  addi 29, 3, -19884
  018c894  lis 3, 114
  018c898  addic 5, 30, 480
  018c89c  lfs 2, 40(29)
  018c8a0  lfs 3, -3048(3)
  018c8a4  lfs 4, 52(29)
  018c8a8  fmuls 2, 3, 2
  018c8ac  lfs 5, -3052(4)
  018c8b0  ori 3, 28, 0
  018c8b4  fmuls 4, 5, 4
  018c8b8  fmr 3, 2
  018c8bc  bl 0x10a2e0
  018c8c0  nop
  018c8c4  ori 3, 31, 0
  018c8c8  bl 0xefe40
  018c8cc  nop
  018c8d0  lfs 2, 144(29)
  018c8d4  fcmpu 0, 1, 2
  018c8d8  cror 6, 0, 2
  018c8dc  bt 6, 0x18ca00
  018c8e0  lis 3, 25
  018c8e4  addi 3, 3, -19884
  018c8e8  lfs 2, 148(3)
  018c8ec  fcmpu 0, 1, 2
  018c8f0  cror 6, 1, 2
  018c8f4  bt 6, 0x18ca00
  018c8f8  addic 5, 1, 240
  018c8fc  ori 3, 31, 0
  018c900  li 4, 4
  018c904  bl 0xf1114
  018c908  nop
  018c90c  lfs 2, 244(1)
  018c910  lfs 1, 20(31)
  018c914  lfs 3, 240(1)
  018c918  fsubs 2, 2, 1
  018c91c  lfs 1, 16(31)
  018c920  fsubs 1, 3, 1
  018c924  lis 3, 25
  018c928  lfs 4, 252(1)
  018c92c  addi 3, 3, -19884
  018c930  stfs 4, 268(1)
  018c934  fmuls 3, 2, 2
  018c938  lfs 5, 44(3)
  018c93c  lfs 4, 248(1)
  018c940  fmr 6, 5
  018c944  fmadds 3, 1, 1, 3
  018c948  fsqrts 7, 3
  018c94c  fcmpu 0, 7, 6
  018c950  bt 2, 0x18c9a0
  018c954  frsqrte 5, 3
  018c958  lis 3, 25
  018c95c  addi 3, 3, -19884
  018c960  lfs 6, 76(3)
  018c964  lfs 7, 48(3)
  018c968  fmuls 8, 3, 5
  018c96c  fmuls 9, 6, 5
  018c970  fnmsubs 8, 8, 5, 7
  018c974  fmadds 5, 8, 9, 5
  018c978  fmuls 8, 3, 5
  018c97c  fmuls 9, 6, 5
  018c980  fnmsubs 8, 8, 5, 7
  018c984  fmadds 5, 8, 9, 5
  018c988  fmuls 3, 3, 5
  018c98c  fmuls 6, 6, 5
  018c990  fnmsubs 3, 3, 5, 7
  018c994  fmadds 5, 3, 6, 5
  018c998  fmuls 6, 1, 5
  018c99c  fmuls 5, 2, 5
  018c9a0  lis 3, 25
  018c9a4  stfs 6, 256(1)
  018c9a8  lis 4, 16256
  018c9ac  stfs 5, 260(1)
  018c9b0  addi 30, 3, -19884
  018c9b4  addic 29, 1, 272
  018c9b8  addic 7, 1, 256
  018c9bc  ori 3, 29, 0
  018c9c0  li 5, 1
  018c9c4  lfs 1, 48(30)
  018c9c8  stw 4, 264(1)
  018c9cc  lfs 2, 152(30)
  018c9d0  ori 4, 31, 0
  018c9d4  fsubs 2, 4, 2
  018c9d8  stfs 2, 248(1)
  018c9dc  bl 0x10581c
  018c9e0  nop
  018c9e4  lfs 1, 156(30)
  018c9e8  addic 3, 1, 240
  018c9ec  li 5, 0
  018c9f0  ori 6, 31, 0
  018c9f4  ori 7, 29, 0
  018c9f8  bl 0x5e598
  018c9fc  nop
  018ca00  lbz 3, 112(31)
  018ca04  rlwinm 3, 3, 0, 30, 30
  018ca08  cmpwi 3, 0
  018ca0c  bt 2, 0x18cce8
  018ca10  li 3, 2
  018ca14  stb 3, 32(31)
  018ca18  b 0x18cce8
  018ca1c  lbz 3, 112(31)
  018ca20  rlwinm 3, 3, 0, 30, 30
  018ca24  cmpwi 3, 0
  018ca28  bt 2, 0x18cce8
  018ca2c  li 3, 3
  018ca30  lbz 4, 83(31)
  018ca34  cmpwi 4, 0
  018ca38  stb 3, 32(31)
  018ca3c  bt 2, 0x18cce8
  018ca40  lis 3, 25
  018ca44  lis 4, 114
  018ca48  addi 3, 3, -19884
  018ca4c  li 5, 0
  018ca50  lfs 1, 64(3)
  018ca54  lfs 2, -3056(4)
  018ca58  ori 3, 31, 0
  018ca5c  fmuls 1, 2, 1
  018ca60  li 4, 0
  018ca64  fctiwz 1, 1
  018ca68  stfd 1, 320(1)
  018ca6c  lwz 6, 324(1)
  018ca70  extsw 6, 6
  018ca74  bl 0xfddc0
  018ca78  nop
  018ca7c  b 0x18cce8
  018ca80  ori 3, 31, 0
  018ca84  addic 4, 30, 112
  018ca88  bl 0x10b030
  018ca8c  nop
  018ca90  rlwinm 4, 3, 0, 25, 25
  018ca94  cmpwi 4, 0
  018ca98  bt 2, 0x18cba8
  018ca9c  lfs 1, 20(31)
  018caa0  lfs 2, 20(29)
  018caa4  lfs 3, 16(31)
  018caa8  fsubs 1, 1, 2
  018caac  lfs 2, 16(29)
  018cab0  fsubs 2, 3, 2
  018cab4  lis 3, 116
  018cab8  fmuls 1, 1, 1
  018cabc  fmadds 1, 2, 2, 1
  018cac0  lfs 2, -1604(3)
  018cac4  fsqrts 1, 1
  018cac8  fcmpu 0, 1, 2
  018cacc  cror 6, 1, 2
  018cad0  bt 6, 0x18cb20
  018cad4  li 3, 7
  018cad8  lbz 4, 83(31)
  018cadc  cmpwi 4, 13
  018cae0  stb 3, 32(31)
  018cae4  bt 2, 0x18cce8
  018cae8  bl 0x5c8318
  018caec  nop
  018caf0  srawi 5, 3, 2
  018caf4  li 4, 13
  018caf8  addze 6, 5
  018cafc  li 5, 0
  018cb00  sldi 6, 6, 2
  018cb04  subc 6, 3, 6
  018cb08  ori 3, 31, 0
  018cb0c  addic 6, 6, 8
  018cb10  extsw 6, 6
  018cb14  bl 0xfddc0
  018cb18  nop
  018cb1c  b 0x18cce8
  018cb20  lis 3, 16256
  018cb24  li 4, 5
  018cb28  stw 3, 488(30)
  018cb2c  stb 4, 32(31)
  018cb30  sth 27, 526(30)
  018cb34  lbz 3, 83(31)
  018cb38  cmpwi 3, 6
  018cb3c  bt 2, 0x18cce8
  018cb40  lis 3, 25
  018cb44  lis 4, 114
  018cb48  addi 5, 3, -19884
  018cb4c  li 3, 0
  018cb50  lfs 1, 64(5)
  018cb54  lfs 2, -3056(4)
  018cb58  fmuls 1, 2, 1
  018cb5c  fctiwz 1, 1
  018cb60  stfd 1, 320(1)
  018cb64  lfs 1, 56(5)
  018cb68  lwz 30, 324(1)
  018cb6c  fmuls 1, 2, 1
  018cb70  fctiwz 1, 1
  018cb74  stfd 1, 320(1)
  018cb78  lwz 4, 324(1)
  018cb7c  extsw 4, 4
  018cb80  bl 0xfe484
  018cb84  nop
  018cb88  addc 6, 30, 3
  018cb8c  ori 3, 31, 0
  018cb90  extsw 6, 6
  018cb94  li 4, 6
  018cb98  li 5, 0
  018cb9c  bl 0xfddc0
  018cba0  nop
  018cba4  b 0x18cce8
  018cba8  li 4, 288
  018cbac  and 3, 3, 4
  018cbb0  cmpwi 3, 0
  018cbb4  bt 2, 0x18cce8
  018cbb8  ori 3, 31, 0
  018cbbc  bl 0xefb38
  018cbc0  nop
  018cbc4  b 0x18cce8
  018cbc8  addic 4, 30, 112
  018cbcc  ori 3, 31, 0
  018cbd0  bl 0x10b030
  018cbd4  nop
  018cbd8  li 4, 352
  018cbdc  and 3, 3, 4
  018cbe0  cmpwi 3, 0
  018cbe4  bt 2, 0x18cce8
  018cbe8  ori 3, 31, 0
  018cbec  li 4, 0
  018cbf0  li 5, -1
  018cbf4  bl 0xfd8d0
  018cbf8  nop
  018cbfc  lis 3, 25
  018cc00  addic 29, 31, 16
  018cc04  addi 28, 3, -19884
  018cc08  ori 3, 31, 0
  018cc0c  ori 4, 29, 0
  018cc10  li 6, 0
  018cc14  lfs 1, 76(28)
  018cc18  lfs 2, 160(28)
  018cc1c  bl 0x10fb28
  018cc20  nop
  018cc24  lis 3, 161
  018cc28  lfs 31, 44(28)
  018cc2c  addic 28, 31, 64
  018cc30  addic 27, 3, 23856
  018cc34  li 7, 0
  018cc38  fmr 1, 31
  018cc3c  ori 3, 31, 0
  018cc40  ori 10, 27, 0
  018cc44  std 27, 112(1)
  018cc48  li 4, 1692
  018cc4c  std 27, 120(1)
  018cc50  ori 5, 29, 0
  018cc54  ori 6, 28, 0
  018cc58  li 8, 0
  018cc5c  bl 0x11a560
  018cc60  nop
  018cc64  std 27, 112(1)
  018cc68  ori 3, 31, 0
  018cc6c  std 27, 120(1)
  018cc70  li 4, 1693
  018cc74  ori 10, 27, 0
  018cc78  fmr 1, 31
  018cc7c  ori 5, 29, 0
  018cc80  ori 6, 28, 0
  018cc84  li 7, 0
  018cc88  li 8, 0
  018cc8c  bl 0x11a560
  018cc90  nop
  018cc94  ori 3, 31, 0
  018cc98  std 27, 112(1)
  018cc9c  li 4, 1694
  018cca0  fmr 1, 31
  018cca4  ori 10, 27, 0
  018cca8  std 27, 120(1)
  018ccac  ori 5, 29, 0
  018ccb0  ori 6, 28, 0
  018ccb4  li 7, 0
  018ccb8  li 8, 0
  018ccbc  bl 0x11a560
  018ccc0  nop
  018ccc4  ori 3, 31, 0
  018ccc8  bl 0xefb38
  018cccc  nop
  018ccd0  lwz 31, 504(30)
  018ccd4  cmpwi 31, 0
  018ccd8  bt 2, 0x18cce8
  018ccdc  ori 3, 31, 0
  018cce0  bl 0xefb38
  018cce4  nop
  018cce8  ld 0, 416(1)
  018ccec  mtlr 0
  018ccf0  lfd 31, 392(1)
  018ccf4  ld 26, 344(1)
  018ccf8  ld 27, 352(1)
  018ccfc  ld 28, 360(1)
  018cd00  ld 29, 368(1)
  018cd04  ld 30, 376(1)
  018cd08  ld 31, 384(1)
  018cd0c  addi 1, 1, 400
  018cd10  blr
