# game/update/moby438.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M438_0037a2b8:   # 0x37a2b8, 0x23c bytes
  037a2b8  stdu 1, -256(1)
  037a2bc  mflr 0
  037a2c0  std 0, 272(1)
  037a2c4  stfd 20, 160(1)
  037a2c8  stfd 21, 168(1)
  037a2cc  stfd 22, 176(1)
  037a2d0  stfd 23, 184(1)
  037a2d4  stfd 24, 192(1)
  037a2d8  stfd 25, 200(1)
  037a2dc  stfd 26, 208(1)
  037a2e0  stfd 27, 216(1)
  037a2e4  stfd 28, 224(1)
  037a2e8  stfd 29, 232(1)
  037a2ec  stfd 30, 240(1)
  037a2f0  stfd 31, 248(1)
  037a2f4  std 30, 144(1)
  037a2f8  lis 4, 56
  037a2fc  lis 30, 161
  037a300  std 29, 136(1)
  037a304  addi 4, 4, -23928
  037a308  li 29, 1000
  037a30c  std 31, 152(1)
  037a310  addic 30, 30, 23856
  037a314  ori 31, 3, 0
  037a318  lfs 21, 0(4)
  037a31c  lfs 22, 4(4)
  037a320  lfs 23, 8(4)
  037a324  lfs 24, 12(4)
  037a328  lfs 25, 16(4)
  037a32c  lfs 26, 20(4)
  037a330  lfs 27, 24(4)
  037a334  lfs 28, 28(4)
  037a338  lfs 29, 32(4)
  037a33c  std 28, 128(1)
  037a340  lfs 30, 36(4)
  037a344  lfs 31, 40(4)
  037a348  extsw 3, 29
  037a34c  li 4, 5
  037a350  li 6, 1
  037a354  subc 4, 3, 4
  037a358  li 7, 5
  037a35c  sradi 4, 4, 63
  037a360  subc 6, 6, 7
  037a364  li 5, 20
  037a368  and 4, 4, 6
  037a36c  subc 5, 3, 5
  037a370  li 6, 20
  037a374  addc 4, 7, 4
  037a378  sradi 5, 5, 63
  037a37c  subc 4, 4, 6
  037a380  li 8, 50
  037a384  and 4, 5, 4
  037a388  li 7, 50
  037a38c  subc 3, 3, 8
  037a390  addc 4, 6, 4
  037a394  sradi 3, 3, 63
  037a398  subc 4, 4, 7
  037a39c  and 3, 3, 4
  037a3a0  addc 28, 7, 3
  037a3a4  subc 29, 29, 28
  037a3a8  bl 0xfcc68
  037a3ac  nop
  037a3b0  fmr 20, 1
  037a3b4  fmr 2, 22
  037a3b8  fmr 1, 21
  037a3bc  bl 0xfcbe8
  037a3c0  nop
  037a3c4  fadds 2, 20, 23
  037a3c8  fsubs 3, 24, 20
  037a3cc  fsubs 4, 25, 20
  037a3d0  fsubs 5, 24, 2
  037a3d4  fsub 6, 20, 3
  037a3d8  fsubs 7, 25, 2
  037a3dc  fsub 8, 2, 5
  037a3e0  fsel 3, 6, 3, 20
  037a3e4  fsel 2, 8, 5, 2
  037a3e8  fsub 5, 4, 3
  037a3ec  fsub 6, 7, 2
  037a3f0  fsel 3, 5, 4, 3
  037a3f4  lfs 5, 16(31)
  037a3f8  fsel 2, 6, 7, 2
  037a3fc  fmuls 4, 3, 3
  037a400  lfs 6, 20(31)
  037a404  lfs 9, 24(31)
  037a408  stfs 9, 120(1)
  037a40c  fmuls 7, 2, 2
  037a410  fmuls 8, 4, 3
  037a414  fmuls 10, 7, 2
  037a418  fmuls 11, 4, 8
  037a41c  fmadds 3, 8, 26, 3
  037a420  fmuls 8, 7, 10
  037a424  fmadds 2, 10, 26, 2
  037a428  fmuls 10, 4, 11
  037a42c  fmadds 3, 11, 27, 3
  037a430  fmuls 11, 7, 8
  037a434  fmadds 2, 8, 27, 2
  037a438  fmuls 4, 4, 10
  037a43c  fmadds 3, 10, 28, 3
  037a440  fmuls 7, 7, 11
  037a444  fmadds 8, 11, 28, 2
  037a448  fmr 2, 31
  037a44c  fmadds 3, 4, 29, 3
  037a450  fmadds 4, 7, 29, 8
  037a454  fmadds 3, 3, 1, 6
  037a458  fmadds 4, 4, 1, 5
  037a45c  fmr 1, 30
  037a460  stfs 3, 116(1)
  037a464  stfs 4, 112(1)
  037a468  bl 0xfcbe8
  037a46c  nop
  037a470  lfs 2, 120(1)
  037a474  addic 4, 1, 112
  037a478  ori 3, 31, 0
  037a47c  fadds 1, 2, 1
  037a480  ori 5, 30, 0
  037a484  li 6, 0
  037a488  ori 7, 28, 0
  037a48c  li 8, 0
  037a490  stfs 1, 120(1)
  037a494  bl 0x242738
  037a498  nop
  037a49c  cmpwi 29, 0
  037a4a0  bt 1, 0x37a348
  037a4a4  ld 0, 272(1)
  037a4a8  mtlr 0
  037a4ac  lfd 20, 160(1)
  037a4b0  lfd 21, 168(1)
  037a4b4  lfd 22, 176(1)
  037a4b8  lfd 23, 184(1)
  037a4bc  lfd 24, 192(1)
  037a4c0  lfd 25, 200(1)
  037a4c4  lfd 26, 208(1)
  037a4c8  lfd 27, 216(1)
  037a4cc  lfd 28, 224(1)
  037a4d0  lfd 29, 232(1)
  037a4d4  lfd 30, 240(1)
  037a4d8  lfd 31, 248(1)
  037a4dc  ld 28, 128(1)
  037a4e0  ld 29, 136(1)
  037a4e4  ld 30, 144(1)
  037a4e8  ld 31, 152(1)
  037a4ec  addi 1, 1, 256
  037a4f0  blr

M438_0037a4f4:   # 0x37a4f4, 0x14 bytes
  037a4f4  lis 3, 132
  037a4f8  lis 4, 1
  037a4fc  addic 3, 3, 6340
  037a500  stw 4, 72(3)
  037a504  blr

M438_0037a520:   # 0x37a520, 0x36c bytes
  037a520  stdu 1, -272(1)
  037a524  mflr 0
  037a528  std 0, 288(1)
  037a52c  stfd 30, 256(1)
  037a530  stfd 31, 264(1)
  037a534  lis 5, 56
  037a538  std 31, 248(1)
  037a53c  addi 31, 5, -23288
  037a540  lis 5, 132
  037a544  lfs 1, 4(31)
  037a548  lfs 2, 0(31)
  037a54c  lfs 3, 236(3)
  037a550  lfs 4, 16(3)
  037a554  lfs 5, 0(4)
  037a558  fmuls 3, 3, 1
  037a55c  lfs 6, 20(3)
  037a560  lfs 7, 4(4)
  037a564  lfs 8, 24(3)
  037a568  fsubs 5, 4, 5
  037a56c  lfs 9, 8(4)
  037a570  fsubs 7, 6, 7
  037a574  lfs 10, 204(3)
  037a578  lis 4, 132
  037a57c  lfs 11, 192(3)
  037a580  fsubs 9, 8, 9
  037a584  lfs 12, 196(3)
  037a588  lfs 13, 200(3)
  037a58c  fmadds 4, 11, 2, 4
  037a590  lfs 0, 28(3)
  037a594  fmadds 6, 12, 2, 6
  037a598  lfs 11, 224(3)
  037a59c  fmadds 8, 13, 2, 8
  037a5a0  lfs 12, 228(3)
  037a5a4  fmadds 2, 10, 2, 3
  037a5a8  lfs 13, 232(3)
  037a5ac  lis 3, 132
  037a5b0  stfs 0, 140(1)
  037a5b4  stfs 0, 156(1)
  037a5b8  fmadds 3, 11, 1, 4
  037a5bc  fmadds 4, 12, 1, 6
  037a5c0  fmadds 1, 13, 1, 8
  037a5c4  stfs 2, 188(1)
  037a5c8  lfs 2, 6452(3)
  037a5cc  lfs 6, 6456(4)
  037a5d0  addic 3, 1, 160
  037a5d4  fmuls 8, 2, 5
  037a5d8  lis 4, 114
  037a5dc  fmuls 10, 2, 7
  037a5e0  fmuls 2, 2, 9
  037a5e4  stfs 3, 176(1)
  037a5e8  stfs 4, 180(1)
  037a5ec  fmuls 3, 6, 5
  037a5f0  stfs 1, 184(1)
  037a5f4  fmuls 1, 6, 7
  037a5f8  lfs 5, 6460(5)
  037a5fc  fmuls 4, 6, 9
  037a600  stfs 8, 128(1)
  037a604  stfs 10, 132(1)
  037a608  stfs 2, 136(1)
  037a60c  stfs 3, 144(1)
  037a610  stfs 1, 148(1)
  037a614  stfs 4, 152(1)
  037a618  lfs 31, 8(31)
  037a61c  lfs 2, -3052(4)
  037a620  fmr 1, 31
  037a624  std 30, 240(1)
  037a628  std 29, 232(1)
  037a62c  std 28, 224(1)
  037a630  std 27, 216(1)
  037a634  std 26, 208(1)
  037a638  fmuls 2, 5, 2
  037a63c  bl 0xfea60
  037a640  nop
  037a644  lfs 1, 144(1)
  037a648  lfs 2, 160(1)
  037a64c  lis 3, 132
  037a650  lfs 3, 148(1)
  037a654  lis 4, 132
  037a658  fadds 2, 1, 2
  037a65c  lfs 1, 164(1)
  037a660  lfs 4, 152(1)
  037a664  fadds 3, 3, 1
  037a668  lfs 1, 168(1)
  037a66c  fadds 4, 4, 1
  037a670  lfs 1, 6480(3)
  037a674  lfs 5, 6484(4)
  037a678  stfs 2, 144(1)
  037a67c  fmr 2, 5
  037a680  stfs 3, 148(1)
  037a684  stfs 4, 152(1)
  037a688  bl 0xfcbe8
  037a68c  nop
  037a690  lis 3, 132
  037a694  stfs 1, 140(1)
  037a698  lis 4, 132
  037a69c  lfs 1, 6488(3)
  037a6a0  lfs 2, 6492(4)
  037a6a4  bl 0xfcbe8
  037a6a8  nop
  037a6ac  lis 3, 132
  037a6b0  lis 4, 132
  037a6b4  stfs 1, 156(1)
  037a6b8  lfs 30, 12(31)
  037a6bc  fmr 1, 31
  037a6c0  fmr 2, 30
  037a6c4  lwz 3, 6496(3)
  037a6c8  lwz 4, 6500(4)
  037a6cc  extsw 31, 3
  037a6d0  extsw 30, 4
  037a6d4  bl 0xfcbe8
  037a6d8  nop
  037a6dc  ori 4, 30, 0
  037a6e0  ori 3, 31, 0
  037a6e4  bl 0x5027bc
  037a6e8  nop
  037a6ec  lis 4, 132
  037a6f0  lis 5, 132
  037a6f4  fmr 1, 31
  037a6f8  ori 31, 3, 0
  037a6fc  fmr 2, 30
  037a700  lwz 3, 6504(4)
  037a704  lwz 4, 6508(5)
  037a708  extsw 30, 3
  037a70c  extsw 29, 4
  037a710  bl 0xfcbe8
  037a714  nop
  037a718  ori 3, 30, 0
  037a71c  ori 4, 29, 0
  037a720  bl 0x5027bc
  037a724  nop
  037a728  ori 30, 3, 0
  037a72c  fmr 1, 31
  037a730  fmr 2, 30
  037a734  bl 0xfcbe8
  037a738  nop
  037a73c  lis 3, 132
  037a740  lis 29, 114
  037a744  lwz 3, 6464(3)
  037a748  extsw 3, 3
  037a74c  std 3, 192(1)
  037a750  lfs 2, -3056(29)
  037a754  lfd 3, 192(1)
  037a758  fcfid 3, 3
  037a75c  frsp 3, 3
  037a760  fmadds 1, 3, 1, 30
  037a764  fmuls 1, 2, 1
  037a768  bl 0x502758
  037a76c  nop
  037a770  lis 4, 132
  037a774  lis 28, 132
  037a778  ori 27, 3, 0
  037a77c  lwz 4, 6468(4)
  037a780  extsw 4, 4
  037a784  std 4, 192(1)
  037a788  lfs 2, 6476(28)
  037a78c  lfd 3, 192(1)
  037a790  fneg 1, 2
  037a794  fcfid 3, 3
  037a798  frsp 31, 3
  037a79c  bl 0xfcbe8
  037a7a0  nop
  037a7a4  fadds 1, 1, 30
  037a7a8  lfs 2, -3056(29)
  037a7ac  fmuls 1, 31, 1
  037a7b0  fmuls 1, 2, 1
  037a7b4  bl 0x502758
  037a7b8  nop
  037a7bc  lis 4, 132
  037a7c0  ori 26, 3, 0
  037a7c4  lwz 4, 6472(4)
  037a7c8  extsw 4, 4
  037a7cc  std 4, 192(1)
  037a7d0  lfs 2, 6476(28)
  037a7d4  lfd 3, 192(1)
  037a7d8  fneg 1, 2
  037a7dc  fcfid 3, 3
  037a7e0  frsp 31, 3
  037a7e4  bl 0xfcbe8
  037a7e8  nop
  037a7ec  fadds 1, 1, 30
  037a7f0  lfs 2, -3056(29)
  037a7f4  fmuls 1, 31, 1
  037a7f8  fmuls 1, 2, 1
  037a7fc  bl 0x502758
  037a800  nop
  037a804  li 11, -1
  037a808  ori 10, 3, 0
  037a80c  addic 3, 1, 176
  037a810  ori 6, 31, 0
  037a814  ori 7, 30, 0
  037a818  ori 8, 27, 0
  037a81c  std 11, 112(1)
  037a820  addic 4, 1, 128
  037a824  ori 9, 26, 0
  037a828  addic 5, 1, 144
  037a82c  bl 0x1206e8
  037a830  nop
  037a834  ori 31, 3, 0
  037a838  cmpwi 31, 0
  037a83c  bt 2, 0x37a85c
  037a840  lis 3, 56
  037a844  addi 3, 3, -23288
  037a848  lfs 1, 16(3)
  037a84c  bl 0x502758
  037a850  nop
  037a854  addic 3, 3, 144
  037a858  stb 3, 9(31)
  037a85c  ld 0, 288(1)
  037a860  mtlr 0
  037a864  lfd 30, 256(1)
  037a868  lfd 31, 264(1)
  037a86c  ld 26, 208(1)
  037a870  ld 27, 216(1)
  037a874  ld 28, 224(1)
  037a878  ld 29, 232(1)
  037a87c  ld 30, 240(1)
  037a880  ld 31, 248(1)
  037a884  addi 1, 1, 272
  037a888  blr

UpdateMoby_438:   # 0x37a8b8, 0x6d8 bytes
  037a8b8  stdu 1, -320(1)
  037a8bc  mflr 0
  037a8c0  std 0, 336(1)
  037a8c4  stfd 29, 296(1)
  037a8c8  stfd 30, 304(1)
  037a8cc  stfd 31, 312(1)
  037a8d0  std 31, 288(1)
  037a8d4  std 29, 272(1)
  037a8d8  ori 31, 3, 0
  037a8dc  lis 3, 165
  037a8e0  std 30, 280(1)
  037a8e4  addic 29, 3, 7136
  037a8e8  lwz 30, 120(31)
  037a8ec  lfs 1, 16(31)
  037a8f0  lfs 2, 20(31)
  037a8f4  stfs 1, 192(1)
  037a8f8  lfs 1, 24(31)
  037a8fc  lwz 3, 0(30)
  037a900  stfs 2, 196(1)
  037a904  slwi 4, 3, 2
  037a908  lfs 2, 28(31)
  037a90c  cmpwi 1, 3, -1
  037a910  extsw 4, 4
  037a914  stfs 1, 200(1)
  037a918  stfs 2, 204(1)
  037a91c  lbz 3, 32(31)
  037a920  cmpwi 3, 0
  037a924  lwzx 29, 29, 4
  037a928  cmpwi 6, 3, 2
  037a92c  cmpwi 7, 3, 1
  037a930  bt 1, 0x37a940
  037a934  cmpwi 3, -1
  037a938  bf 1, 0x37adb4
  037a93c  b 0x37a94c
  037a940  bf 29, 0x37aa0c
  037a944  bf 25, 0x37aab0
  037a948  b 0x37adb4
  037a94c  bf 6, 0x37a960
  037a950  ori 3, 31, 0
  037a954  bl 0xefb38
  037a958  nop
  037a95c  b 0x37af68
  037a960  lfs 1, 20(29)
  037a964  lfs 2, 36(29)
  037a968  lfs 3, 16(29)
  037a96c  fsubs 1, 1, 2
  037a970  lfs 2, 32(29)
  037a974  fsubs 2, 3, 2
  037a978  lfs 3, 24(29)
  037a97c  lfs 4, 40(29)
  037a980  fsubs 3, 3, 4
  037a984  lis 3, 132
  037a988  fmuls 1, 1, 1
  037a98c  lis 4, 114
  037a990  vspltisw 2, -1
  037a994  lis 5, 56
  037a998  addi 5, 5, -22388
  037a99c  vslw 2, 2, 2
  037a9a0  fmadds 1, 2, 2, 1
  037a9a4  lfs 2, 6448(3)
  037a9a8  li 3, 4
  037a9ac  fmadds 1, 3, 3, 1
  037a9b0  lfs 3, -3052(4)
  037a9b4  fmuls 2, 2, 3
  037a9b8  <unknown>
  037a9bc  addi 4, 3, 16
  037a9c0  <unknown>
  037a9c4  vcfsx 3, 3, 0
  037a9c8  fsqrts 1, 1
  037a9cc  <unknown>
  037a9d0  vor 4, 4, 5
  037a9d4  vmaddfp 2, 4, 3, 2
  037a9d8  vspltw 2, 2, 0
  037a9dc  stvewx 2, 3, 30
  037a9e0  fdivs 1, 2, 1
  037a9e4  stfs 1, 8(30)
  037a9e8  lfs 1, 0(5)
  037a9ec  lfs 2, 4(5)
  037a9f0  bl 0xfe4f0
  037a9f4  nop
  037a9f8  li 3, 1
  037a9fc  stfs 1, 12(30)
  037aa00  li 4, 255
  037aa04  stb 3, 32(31)
  037aa08  stb 4, 48(31)
  037aa0c  ori 3, 29, 0
  037aa10  addic 6, 31, 16
  037aa14  lfs 1, 4(30)
  037aa18  addic 7, 31, 64
  037aa1c  li 5, 1
  037aa20  li 8, 0
  037aa24  bl 0x117390
  037aa28  nop
  037aa2c  lis 3, 56
  037aa30  lfs 1, 68(31)
  037aa34  addi 3, 3, -22388
  037aa38  li 4, 8
  037aa3c  addi 6, 4, 16
  037aa40  lfs 2, 8(3)
  037aa44  lfs 3, 24(31)
  037aa48  fmuls 1, 1, 2
  037aa4c  li 3, 4
  037aa50  <unknown>
  037aa54  addi 5, 3, 16
  037aa58  vcfsx 2, 2, 0
  037aa5c  stfs 1, 68(31)
  037aa60  lfs 1, 12(30)
  037aa64  fadds 1, 3, 1
  037aa68  vspltw 4, 2, 0
  037aa6c  stfs 1, 24(31)
  037aa70  <unknown>
  037aa74  <unknown>
  037aa78  <unknown>
  037aa7c  vor 3, 3, 5
  037aa80  <unknown>
  037aa84  vor 5, 6, 5
  037aa88  vaddfp 3, 3, 5
  037aa8c  vspltw 5, 3, 0
  037aa90  vcmpgtfp. 4, 5, 4
  037aa94  stvewx 5, 3, 30
  037aa98  bt 26, 0x37adb4
  037aa9c  vsubfp 2, 3, 2
  037aaa0  li 3, 4
  037aaa4  vspltw 2, 2, 0
  037aaa8  stvewx 2, 3, 30
  037aaac  b 0x37adb4
  037aab0  lis 3, 56
  037aab4  lfs 1, 24(30)
  037aab8  addi 29, 3, -22388
  037aabc  lis 3, 114
  037aac0  lfs 30, 12(29)
  037aac4  lfs 2, -3048(3)
  037aac8  lis 3, 114
  037aacc  fnmsubs 1, 2, 30, 1
  037aad0  stfs 1, 24(30)
  037aad4  lfs 3, 16(29)
  037aad8  lfs 1, 64(31)
  037aadc  lfs 4, -3052(3)
  037aae0  fmuls 2, 4, 3
  037aae4  bl 0x502578
  037aae8  nop
  037aaec  lfs 2, 64(31)
  037aaf0  fadds 1, 2, 1
  037aaf4  lis 3, 115
  037aaf8  addic 3, 3, 22784
  037aafc  stfs 1, 64(31)
  037ab00  lfs 1, 20(30)
  037ab04  lfs 2, 16(30)
  037ab08  fmuls 1, 1, 1
  037ab0c  fmadds 1, 2, 2, 1
  037ab10  lfs 2, 16(31)
  037ab14  fsqrts 3, 1
  037ab18  lfs 1, 20(31)
  037ab1c  lfs 29, 24(31)
  037ab20  lwz 4, 24(30)
  037ab24  lfs 4, 24(30)
  037ab28  fabs 6, 4
  037ab2c  rlwinm 4, 4, 3, 29, 29
  037ab30  fabs 7, 3
  037ab34  stfs 3, 224(1)
  037ab38  fsubs 3, 7, 6
  037ab3c  stfs 3, 228(1)
  037ab40  lfs 31, 0(29)
  037ab44  lwz 5, 224(1)
  037ab48  lfs 3, 224(1)
  037ab4c  lwz 6, 228(1)
  037ab50  fabs 5, 3
  037ab54  lfs 3, 228(1)
  037ab58  rlwimi 4, 6, 2, 30, 30
  037ab5c  fsub 4, 3, 31
  037ab60  fsub 8, 3, 31
  037ab64  rlwimi 4, 5, 4, 28, 28
  037ab68  ori 5, 3, 0
  037ab6c  rlwimi 5, 4, 2, 26, 28
  037ab70  slwi 4, 4, 2
  037ab74  clrldi 5, 5, 32
  037ab78  fsel 5, 4, 5, 6
  037ab7c  lfsx 4, 3, 4
  037ab80  lfs 3, 4(5)
  037ab84  fsel 6, 8, 6, 7
  037ab88  fcmpu 0, 5, 31
  037ab8c  bt 1, 0x37ab98
  037ab90  fmr 4, 31
  037ab94  b 0x37acc0
  037ab98  fsubs 7, 6, 5
  037ab9c  fadds 5, 6, 5
  037aba0  addic 6, 1, 16
  037aba4  li 3, 2
  037aba8  addic 5, 6, 216
  037abac  addic 4, 6, 232
  037abb0  mtctr 3
  037abb4  fdivs 5, 7, 5
  037abb8  fmuls 7, 5, 5
  037abbc  stfs 5, 244(1)
  037abc0  stfs 5, 236(1)
  037abc4  stfs 5, 240(1)
  037abc8  stfs 5, 232(1)
  037abcc  lfs 8, 244(1)
  037abd0  lfs 9, 236(1)
  037abd4  lfs 10, 240(1)
  037abd8  fmuls 5, 7, 7
  037abdc  fmuls 9, 9, 7
  037abe0  fmuls 8, 8, 5
  037abe4  fmuls 6, 5, 5
  037abe8  fmuls 5, 10, 5
  037abec  stfs 9, 236(1)
  037abf0  fmuls 7, 8, 7
  037abf4  stfs 5, 240(1)
  037abf8  stfs 7, 244(1)
  037abfc  lfs 5, 216(6)
  037ac00  fmuls 5, 5, 6
  037ac04  stfs 5, 232(6)
  037ac08  lfs 5, 4(5)
  037ac0c  addic 6, 6, 8
  037ac10  addic 5, 5, 8
  037ac14  fmuls 5, 5, 6
  037ac18  stfs 5, 4(4)
  037ac1c  addic 4, 4, 8
  037ac20  bdnz 0x37abfc
  037ac24  ori 7, 1, 0
  037ac28  lis 6, 115
  037ac2c  li 8, 4
  037ac30  addic 5, 7, 232
  037ac34  addic 6, 6, 22752
  037ac38  ori 4, 5, 0
  037ac3c  mtctr 8
  037ac40  lfs 5, 232(7)
  037ac44  lfs 6, 0(6)
  037ac48  fmuls 5, 5, 6
  037ac4c  lfs 6, 4(6)
  037ac50  addic 6, 6, 8
  037ac54  stfs 5, 232(7)
  037ac58  lfs 5, 4(5)
  037ac5c  addic 7, 7, 8
  037ac60  fmuls 5, 5, 6
  037ac64  stfs 5, 4(5)
  037ac68  addic 5, 5, 8
  037ac6c  bdnz 0x37ac40
  037ac70  ori 5, 3, 0
  037ac74  fmr 5, 31
  037ac78  ori 3, 1, 0
  037ac7c  mtctr 5
  037ac80  lfs 6, 232(3)
  037ac84  fadds 5, 5, 6
  037ac88  lfs 6, 4(4)
  037ac8c  addic 3, 3, 16
  037ac90  lfs 7, 8(4)
  037ac94  lfs 8, 12(4)
  037ac98  addic 4, 4, 16
  037ac9c  fadds 5, 5, 6
  037aca0  fadds 5, 5, 7
  037aca4  fadds 5, 5, 8
  037aca8  bdnz 0x37ac80
  037acac  lis 3, 56
  037acb0  addi 3, 3, -22388
  037acb4  lfs 6, 20(3)
  037acb8  fadds 5, 5, 6
  037acbc  fmadds 4, 5, 4, 3
  037acc0  fneg 3, 4
  037acc4  lis 3, 56
  037acc8  addi 3, 3, -22388
  037accc  stfs 3, 68(31)
  037acd0  lfs 3, 16(30)
  037acd4  fadds 2, 2, 3
  037acd8  stfs 2, 16(31)
  037acdc  lfs 2, 20(30)
  037ace0  fadds 1, 1, 2
  037ace4  stfs 1, 20(31)
  037ace8  lfs 1, 24(30)
  037acec  fadds 1, 29, 1
  037acf0  stfs 1, 24(31)
  037acf4  lfs 29, 24(3)
  037acf8  fcmpu 0, 1, 29
  037acfc  cror 6, 1, 2
  037ad00  bt 6, 0x37ad14
  037ad04  ori 3, 31, 0
  037ad08  bl 0xefb38
  037ad0c  nop
  037ad10  b 0x37af68
  037ad14  lis 3, 56
  037ad18  addic 29, 31, 16
  037ad1c  addi 4, 3, -22388
  037ad20  ori 3, 29, 0
  037ad24  li 5, 0
  037ad28  ori 6, 31, 0
  037ad2c  lfs 1, 28(4)
  037ad30  bl 0x59e20
  037ad34  nop
  037ad38  cmpwi 3, 0
  037ad3c  bt 2, 0x37adb4
  037ad40  lis 3, 56
  037ad44  fmr 1, 31
  037ad48  li 12, -1
  037ad4c  fmr 2, 31
  037ad50  addi 7, 3, -22388
  037ad54  fmr 3, 29
  037ad58  li 11, 1
  037ad5c  fmr 7, 30
  037ad60  li 6, 0
  037ad64  ori 3, 31, 0
  037ad68  addic 4, 30, 16
  037ad6c  lfs 4, 4(7)
  037ad70  lfs 5, 32(7)
  037ad74  ori 5, 29, 0
  037ad78  lfs 6, 36(7)
  037ad7c  li 8, 20
  037ad80  std 12, 144(1)
  037ad84  li 9, 40
  037ad88  std 11, 160(1)
  037ad8c  li 10, 16
  037ad90  std 11, 168(1)
  037ad94  std 12, 176(1)
  037ad98  std 6, 184(1)
  037ad9c  bl 0x10e030
  037ada0  nop
  037ada4  ori 3, 31, 0
  037ada8  bl 0xefb38
  037adac  nop
  037adb0  b 0x37af68
  037adb4  lwz 4, 16(31)
  037adb8  lis 3, 16512
  037adbc  srawi 5, 4, 31
  037adc0  srwi 6, 5, 1
  037adc4  xor 4, 6, 4
  037adc8  subc 4, 4, 5
  037adcc  cmpw 4, 3
  037add0  bt 0, 0x37ae14
  037add4  lwz 4, 20(31)
  037add8  lis 3, 16512
  037addc  srawi 5, 4, 31
  037ade0  srwi 6, 5, 1
  037ade4  xor 4, 6, 4
  037ade8  subc 4, 4, 5
  037adec  cmpw 4, 3
  037adf0  bt 0, 0x37ae14
  037adf4  lwz 4, 24(31)
  037adf8  lis 3, 16512
  037adfc  srawi 5, 4, 31
  037ae00  srwi 6, 5, 1
  037ae04  xor 4, 6, 4
  037ae08  subc 4, 4, 5
  037ae0c  cmpw 4, 3
  037ae10  bf 0, 0x37ae1c
  037ae14  li 3, 0
  037ae18  b 0x37ae24
  037ae1c  lwz 3, 36(31)
  037ae20  lwz 3, 16(3)
  037ae24  ori 6, 3, 0
  037ae28  ori 3, 31, 0
  037ae2c  lis 4, 1
  037ae30  li 5, 0
  037ae34  stw 6, 148(31)
  037ae38  bl 0x10675c
  037ae3c  nop
  037ae40  cmpwi 3, 0
  037ae44  bt 2, 0x37af48
  037ae48  lbz 3, 32(31)
  037ae4c  cmpwi 3, 2
  037ae50  bt 2, 0x37af48
  037ae54  lis 3, 151
  037ae58  addic 3, 3, -25376
  037ae5c  lwz 3, 8324(3)
  037ae60  cmpwi 3, 50
  037ae64  bf 2, 0x37ae74
  037ae68  li 3, 12
  037ae6c  bl 0x11b728
  037ae70  nop
  037ae74  lfs 1, 20(31)
  037ae78  lfs 2, 196(1)
  037ae7c  lis 3, 56
  037ae80  lfs 3, 24(31)
  037ae84  fsubs 1, 1, 2
  037ae88  lfs 2, 200(1)
  037ae8c  addi 6, 3, -22388
  037ae90  lis 3, 114
  037ae94  fsubs 2, 3, 2
  037ae98  lfs 3, 16(31)
  037ae9c  lfs 4, 192(1)
  037aea0  lfs 5, 28(31)
  037aea4  li 11, -1
  037aea8  fsubs 3, 3, 4
  037aeac  li 7, 1
  037aeb0  stfs 5, 220(1)
  037aeb4  li 12, 0
  037aeb8  addic 4, 1, 208
  037aebc  addic 5, 31, 16
  037aec0  stfs 1, 212(1)
  037aec4  li 8, 20
  037aec8  li 9, 40
  037aecc  stfs 2, 216(1)
  037aed0  li 10, 16
  037aed4  stfs 3, 208(1)
  037aed8  stfs 3, 16(30)
  037aedc  lfs 1, 212(1)
  037aee0  stfs 1, 20(30)
  037aee4  lfs 1, 216(1)
  037aee8  stfs 1, 24(30)
  037aeec  lfs 2, 220(1)
  037aef0  stfs 2, 28(30)
  037aef4  lfs 2, 40(6)
  037aef8  lfs 3, -3052(3)
  037aefc  std 11, 144(1)
  037af00  fmadds 1, 3, 2, 1
  037af04  std 7, 160(1)
  037af08  std 7, 168(1)
  037af0c  ori 3, 31, 0
  037af10  std 11, 176(1)
  037af14  std 12, 184(1)
  037af18  stfs 1, 24(30)
  037af1c  lfs 1, 0(6)
  037af20  lfs 3, 24(6)
  037af24  lfs 4, 4(6)
  037af28  lfs 5, 32(6)
  037af2c  fmr 2, 1
  037af30  lfs 6, 36(6)
  037af34  lfs 7, 12(6)
  037af38  bl 0x10e030
  037af3c  nop
  037af40  li 3, 2
  037af44  stb 3, 32(31)
  037af48  li 3, 255
  037af4c  lbz 4, 49(31)
  037af50  cmpwi 4, 0
  037af54  stb 3, 164(31)
  037af58  bt 2, 0x37af68
  037af5c  addic 4, 1, 192
  037af60  ori 3, 31, 0
  037af64  bl 0x37a520
  037af68  ld 0, 336(1)
  037af6c  mtlr 0
  037af70  lfd 29, 296(1)
  037af74  lfd 30, 304(1)
  037af78  lfd 31, 312(1)
  037af7c  ld 29, 272(1)
  037af80  ld 30, 280(1)
  037af84  ld 31, 288(1)
  037af88  addi 1, 1, 320
  037af8c  blr
