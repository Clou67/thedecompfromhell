# game/update/moby1326.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1326_0024a5d4:   # 0x24a5d4, 0x14 bytes
  024a5d4  lis 3, 121
  024a5d8  lis 4, 1
  024a5dc  addic 3, 3, -6812
  024a5e0  stw 4, 72(3)
  024a5e4  blr

UpdateMoby_1326:   # 0x24a600, 0x514 bytes
  024a600  stdu 1, -192(1)
  024a604  mflr 0
  024a608  std 0, 208(1)
  024a60c  std 31, 184(1)
  024a610  std 29, 168(1)
  024a614  ori 31, 3, 0
  024a618  lwz 29, 120(31)
  024a61c  std 30, 176(1)
  024a620  std 28, 160(1)
  024a624  addic 3, 29, 4
  024a628  bl 0x4fff60
  024a62c  nop
  024a630  lbz 3, 32(31)
  024a634  cmpwi 3, 0
  024a638  bt 1, 0x24a648
  024a63c  cmpwi 3, -1
  024a640  bf 1, 0x24aaf4
  024a644  b 0x24a654
  024a648  cmpwi 3, 1
  024a64c  bf 1, 0x24aa40
  024a650  b 0x24aaf4
  024a654  lis 30, 151
  024a658  lfs 1, 16(31)
  024a65c  addic 30, 30, -25376
  024a660  lfs 2, 20(31)
  024a664  lis 3, 37
  024a668  addi 3, 3, -23064
  024a66c  lfs 3, 128(30)
  024a670  lfs 4, 132(30)
  024a674  fsubs 1, 3, 1
  024a678  fsubs 2, 4, 2
  024a67c  lis 4, 115
  024a680  addic 4, 4, 22784
  024a684  fabs 6, 1
  024a688  fabs 5, 2
  024a68c  stfs 1, 112(1)
  024a690  stfs 2, 116(1)
  024a694  lfs 4, 72(31)
  024a698  fsubs 1, 6, 5
  024a69c  stfs 1, 120(1)
  024a6a0  lwz 5, 112(1)
  024a6a4  lfs 1, 0(3)
  024a6a8  lfs 2, 112(1)
  024a6ac  lwz 3, 116(1)
  024a6b0  lfs 3, 116(1)
  024a6b4  fabs 2, 2
  024a6b8  lwz 6, 120(1)
  024a6bc  rlwinm 3, 3, 3, 29, 29
  024a6c0  fabs 7, 3
  024a6c4  lfs 3, 120(1)
  024a6c8  rlwimi 3, 6, 2, 30, 30
  024a6cc  fsub 8, 3, 1
  024a6d0  rlwimi 3, 5, 4, 28, 28
  024a6d4  fsub 9, 3, 1
  024a6d8  ori 5, 4, 0
  024a6dc  rlwimi 5, 3, 2, 26, 28
  024a6e0  slwi 3, 3, 2
  024a6e4  clrldi 5, 5, 32
  024a6e8  fsel 5, 8, 2, 5
  024a6ec  lfsx 3, 4, 3
  024a6f0  lfs 2, 4(5)
  024a6f4  fsel 6, 9, 7, 6
  024a6f8  fcmpu 0, 5, 1
  024a6fc  bt 1, 0x24a704
  024a700  b 0x24a828
  024a704  fsubs 7, 6, 5
  024a708  fadds 5, 6, 5
  024a70c  addic 6, 1, 16
  024a710  li 3, 2
  024a714  addic 4, 6, 124
  024a718  addic 5, 6, 108
  024a71c  mtctr 3
  024a720  fdivs 5, 7, 5
  024a724  fmuls 7, 5, 5
  024a728  stfs 5, 136(1)
  024a72c  stfs 5, 128(1)
  024a730  stfs 5, 132(1)
  024a734  stfs 5, 124(1)
  024a738  lfs 8, 136(1)
  024a73c  lfs 9, 128(1)
  024a740  lfs 10, 132(1)
  024a744  fmuls 5, 7, 7
  024a748  fmuls 9, 9, 7
  024a74c  fmuls 8, 8, 5
  024a750  fmuls 6, 5, 5
  024a754  fmuls 5, 10, 5
  024a758  stfs 9, 128(1)
  024a75c  fmuls 7, 8, 7
  024a760  stfs 5, 132(1)
  024a764  stfs 7, 136(1)
  024a768  lfs 5, 108(6)
  024a76c  fmuls 5, 5, 6
  024a770  stfs 5, 124(6)
  024a774  lfs 5, 4(5)
  024a778  addic 5, 5, 8
  024a77c  fmuls 5, 5, 6
  024a780  addic 6, 6, 8
  024a784  stfs 5, 4(4)
  024a788  addic 4, 4, 8
  024a78c  bdnz 0x24a768
  024a790  ori 7, 1, 0
  024a794  li 4, 4
  024a798  lis 6, 115
  024a79c  addic 5, 7, 124
  024a7a0  mtctr 4
  024a7a4  addic 6, 6, 22752
  024a7a8  ori 4, 5, 0
  024a7ac  lfs 5, 124(7)
  024a7b0  lfs 6, 0(6)
  024a7b4  fmuls 5, 5, 6
  024a7b8  lfs 6, 4(6)
  024a7bc  addic 6, 6, 8
  024a7c0  stfs 5, 124(7)
  024a7c4  lfs 5, 4(5)
  024a7c8  addic 7, 7, 8
  024a7cc  fmuls 5, 5, 6
  024a7d0  stfs 5, 4(5)
  024a7d4  addic 5, 5, 8
  024a7d8  bdnz 0x24a7ac
  024a7dc  ori 5, 3, 0
  024a7e0  ori 3, 1, 0
  024a7e4  mtctr 5
  024a7e8  lfs 5, 124(3)
  024a7ec  fadds 1, 1, 5
  024a7f0  lfs 5, 4(4)
  024a7f4  addic 3, 3, 16
  024a7f8  lfs 6, 8(4)
  024a7fc  lfs 7, 12(4)
  024a800  addic 4, 4, 16
  024a804  fadds 1, 1, 5
  024a808  fadds 1, 1, 6
  024a80c  fadds 1, 1, 7
  024a810  bdnz 0x24a7e8
  024a814  lis 3, 37
  024a818  addi 3, 3, -23064
  024a81c  lfs 5, 4(3)
  024a820  fadds 1, 1, 5
  024a824  fmadds 1, 1, 3, 2
  024a828  fmr 2, 1
  024a82c  fmr 1, 4
  024a830  bl 0x5026a0
  024a834  nop
  024a838  lis 3, 37
  024a83c  addi 3, 3, -23064
  024a840  lfs 2, 8(3)
  024a844  fcmpu 0, 1, 2
  024a848  cror 6, 1, 2
  024a84c  bt 6, 0x24aaf4
  024a850  lfs 1, 20(31)
  024a854  lfs 2, 132(30)
  024a858  lfs 3, 16(31)
  024a85c  fsubs 1, 1, 2
  024a860  lfs 2, 128(30)
  024a864  fsubs 2, 3, 2
  024a868  lis 3, 37
  024a86c  addi 3, 3, -23064
  024a870  fmuls 1, 1, 1
  024a874  fmadds 1, 2, 2, 1
  024a878  lfs 2, 12(3)
  024a87c  fsqrts 1, 1
  024a880  fcmpu 0, 1, 2
  024a884  cror 6, 1, 2
  024a888  bt 6, 0x24aaf4
  024a88c  lwz 3, 4(29)
  024a890  cmpwi 3, 0
  024a894  bf 2, 0x24aaf4
  024a898  lis 3, 161
  024a89c  lwz 3, 1800(3)
  024a8a0  cmpwi 3, 2
  024a8a4  bt 2, 0x24aaf4
  024a8a8  ori 3, 31, 0
  024a8ac  li 4, 1
  024a8b0  bl 0x4d407c
  024a8b4  nop
  024a8b8  lis 28, 151
  024a8bc  addic 28, 28, -16400
  024a8c0  lbz 3, 4(28)
  024a8c4  cmpwi 3, 0
  024a8c8  bf 2, 0x24a96c
  024a8cc  lis 3, 151
  024a8d0  lwz 3, -25440(3)
  024a8d4  cmpwi 3, 4000
  024a8d8  bf 1, 0x24a958
  024a8dc  li 4, 10014
  024a8e0  li 3, 1
  024a8e4  bl 0x11aeec
  024a8e8  nop
  024a8ec  lis 4, 150
  024a8f0  addic 4, 4, 19008
  024a8f4  lwz 4, 164(4)
  024a8f8  rlwinm 4, 4, 0, 27, 27
  024a8fc  cmpwi 4, 0
  024a900  bt 2, 0x24aaf4
  024a904  cmpwi 3, 0
  024a908  bt 2, 0x24aaf4
  024a90c  lis 4, 151
  024a910  li 29, 1
  024a914  li 3, 27
  024a918  lwz 5, -25440(4)
  024a91c  stb 29, 4(28)
  024a920  addic 5, 5, -4000
  024a924  stw 5, -25440(4)
  024a928  bl 0x112dc0
  024a92c  nop
  024a930  lis 5, 114
  024a934  li 6, 5
  024a938  li 3, 0
  024a93c  li 4, 0
  024a940  stw 6, -1240(5)
  024a944  stw 6, 8872(30)
  024a948  bl 0x167e60
  024a94c  nop
  024a950  stb 29, 32(31)
  024a954  b 0x24aaf4
  024a958  li 3, 1
  024a95c  li 4, 10016
  024a960  bl 0x11aeec
  024a964  nop
  024a968  b 0x24aaf4
  024a96c  lbz 3, 5(28)
  024a970  cmpwi 3, 0
  024a974  bf 2, 0x24aaf4
  024a978  lwz 3, 4(29)
  024a97c  cmpwi 3, 0
  024a980  bf 2, 0x24aaf4
  024a984  lis 3, 151
  024a988  lwz 3, -25440(3)
  024a98c  cmpwi 3, 30000
  024a990  bf 1, 0x24aa2c
  024a994  li 4, 10015
  024a998  li 3, 1
  024a99c  bl 0x11aeec
  024a9a0  nop
  024a9a4  lis 4, 150
  024a9a8  addic 4, 4, 19008
  024a9ac  lwz 4, 164(4)
  024a9b0  rlwinm 4, 4, 0, 27, 27
  024a9b4  cmpwi 4, 0
  024a9b8  bt 2, 0x24aaf4
  024a9bc  cmpwi 3, 0
  024a9c0  bt 2, 0x24aaf4
  024a9c4  lis 3, 151
  024a9c8  li 4, 1
  024a9cc  lwz 5, -25440(3)
  024a9d0  lbz 6, 4(28)
  024a9d4  addic 5, 5, -30000
  024a9d8  stb 4, 5(28)
  024a9dc  cmpwi 6, 0
  024a9e0  stw 5, -25440(3)
  024a9e4  bt 2, 0x24a9f4
  024a9e8  li 3, 27
  024a9ec  bl 0x112dc0
  024a9f0  nop
  024a9f4  li 3, 12
  024a9f8  bl 0x112dc0
  024a9fc  nop
  024aa00  lis 5, 114
  024aa04  li 6, 8
  024aa08  li 3, 1
  024aa0c  li 4, 0
  024aa10  stw 6, -1240(5)
  024aa14  stw 6, 8872(30)
  024aa18  bl 0x167e60
  024aa1c  nop
  024aa20  li 3, 1
  024aa24  stb 3, 32(31)
  024aa28  b 0x24aaf4
  024aa2c  li 3, 1
  024aa30  li 4, 10017
  024aa34  bl 0x11aeec
  024aa38  nop
  024aa3c  b 0x24aaf4
  024aa40  lis 3, 161
  024aa44  lwz 3, 1800(3)
  024aa48  cmpwi 3, 2
  024aa4c  bt 2, 0x24aaf4
  024aa50  li 3, 0
  024aa54  li 4, -1
  024aa58  bl 0xe8aa4
  024aa5c  nop
  024aa60  lis 3, 151
  024aa64  addic 3, 3, -16400
  024aa68  lbz 3, 5(3)
  024aa6c  cmpwi 3, 0
  024aa70  bt 2, 0x24aa94
  024aa74  li 3, 10013
  024aa78  li 4, -1
  024aa7c  bl 0x112a38
  024aa80  nop
  024aa84  lis 3, 114
  024aa88  li 4, -3056
  024aa8c  lvlx 2, 4, 3
  024aa90  b 0x24aab0
  024aa94  li 3, 10012
  024aa98  li 4, -1
  024aa9c  bl 0x112a38
  024aaa0  nop
  024aaa4  lis 3, 114
  024aaa8  li 4, -3056
  024aaac  lvlx 2, 4, 3
  024aab0  lis 3, 37
  024aab4  vspltisw 3, -1
  024aab8  li 4, 16
  024aabc  vspltw 2, 2, 0
  024aac0  addi 3, 3, -23064
  024aac4  li 6, 4
  024aac8  vslw 3, 3, 3
  024aacc  li 5, 0
  024aad0  lvlx 4, 4, 3
  024aad4  lis 3, 161
  024aad8  vspltw 4, 4, 0
  024aadc  li 4, 180
  024aae0  vmaddfp 2, 2, 4, 3
  024aae4  stw 4, 23680(3)
  024aae8  vctsxs 2, 2, 0
  024aaec  stvewx 2, 6, 29
  024aaf0  stb 5, 32(31)
  024aaf4  ld 0, 208(1)
  024aaf8  mtlr 0
  024aafc  ld 28, 160(1)
  024ab00  ld 29, 168(1)
  024ab04  ld 30, 176(1)
  024ab08  ld 31, 184(1)
  024ab0c  addi 1, 1, 192
  024ab10  blr
