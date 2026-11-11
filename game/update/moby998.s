# game/update/moby998.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M998_004cf144:   # 0x4cf144, 0x14 bytes
  04cf144  lis 3, 144
  04cf148  lis 4, 1
  04cf14c  addic 3, 3, -28412
  04cf150  stw 4, 72(3)
  04cf154  blr

M998_004cf158:   # 0x4cf158, 0x148 bytes
  04cf158  stdu 1, -128(1)
  04cf15c  stfd 23, 56(1)
  04cf160  stfd 24, 64(1)
  04cf164  stfd 25, 72(1)
  04cf168  stfd 26, 80(1)
  04cf16c  stfd 27, 88(1)
  04cf170  stfd 28, 96(1)
  04cf174  stfd 29, 104(1)
  04cf178  stfd 30, 112(1)
  04cf17c  stfd 31, 120(1)
  04cf180  lwz 5, 120(3)
  04cf184  lwz 4, 220(5)
  04cf188  cmpwi 4, -1
  04cf18c  bt 2, 0x4cf274
  04cf190  lis 6, 165
  04cf194  slwi 4, 4, 2
  04cf198  addic 6, 6, 7136
  04cf19c  extsw 4, 4
  04cf1a0  lwzx 4, 6, 4
  04cf1a4  lwz 6, 0(4)
  04cf1a8  cmpwi 6, 7
  04cf1ac  bf 2, 0x4cf274
  04cf1b0  ori 6, 3, 0
  04cf1b4  lis 7, 144
  04cf1b8  li 8, 7
  04cf1bc  ori 3, 4, 0
  04cf1c0  addic 4, 7, -28272
  04cf1c4  lfs 31, 192(6)
  04cf1c8  lfs 0, 208(6)
  04cf1cc  mtctr 8
  04cf1d0  lfs 13, 224(6)
  04cf1d4  lfs 12, 196(6)
  04cf1d8  lfs 11, 212(6)
  04cf1dc  lfs 10, 228(6)
  04cf1e0  lfs 9, 200(6)
  04cf1e4  lfs 8, 216(6)
  04cf1e8  lfs 7, 232(6)
  04cf1ec  lfs 6, 204(6)
  04cf1f0  lfs 5, 220(6)
  04cf1f4  lfs 4, 236(6)
  04cf1f8  lfs 3, 16(6)
  04cf1fc  lfs 2, 20(6)
  04cf200  lfs 1, 24(6)
  04cf204  lfs 30, 4(4)
  04cf208  lfs 29, 0(4)
  04cf20c  fmuls 28, 30, 5
  04cf210  fmadds 27, 29, 31, 3
  04cf214  lfs 24, 8(4)
  04cf218  fmadds 26, 29, 12, 2
  04cf21c  lfs 23, 12(4)
  04cf220  fmadds 25, 29, 9, 1
  04cf224  addic 4, 4, 16
  04cf228  fmadds 29, 29, 6, 28
  04cf22c  fmadds 28, 24, 13, 27
  04cf230  fmadds 27, 24, 10, 26
  04cf234  fmadds 26, 24, 7, 25
  04cf238  fmadds 29, 24, 4, 29
  04cf23c  fmadds 28, 30, 0, 28
  04cf240  fmadds 27, 30, 11, 27
  04cf244  fmadds 30, 30, 8, 26
  04cf248  fadds 29, 29, 23
  04cf24c  stfs 28, 16(3)
  04cf250  stfs 27, 20(3)
  04cf254  stfs 30, 24(3)
  04cf258  stfs 29, 28(3)
  04cf25c  addic 3, 3, 16
  04cf260  bdnz 0x4cf204
  04cf264  lis 3, 151
  04cf268  lwz 4, 220(5)
  04cf26c  addic 3, 3, -25376
  04cf270  sth 4, 8922(3)
  04cf274  lfd 23, 56(1)
  04cf278  lfd 24, 64(1)
  04cf27c  lfd 25, 72(1)
  04cf280  lfd 26, 80(1)
  04cf284  lfd 27, 88(1)
  04cf288  lfd 28, 96(1)
  04cf28c  lfd 29, 104(1)
  04cf290  lfd 30, 112(1)
  04cf294  lfd 31, 120(1)
  04cf298  addi 1, 1, 128
  04cf29c  blr

M998_004cf2d8:   # 0x4cf2d8, 0x2b8 bytes
  04cf2d8  stdu 1, -208(1)
  04cf2dc  mflr 0
  04cf2e0  std 0, 224(1)
  04cf2e4  stfd 25, 152(1)
  04cf2e8  stfd 26, 160(1)
  04cf2ec  stfd 27, 168(1)
  04cf2f0  stfd 28, 176(1)
  04cf2f4  stfd 29, 184(1)
  04cf2f8  stfd 30, 192(1)
  04cf2fc  stfd 31, 200(1)
  04cf300  std 31, 144(1)
  04cf304  ori 31, 3, 0
  04cf308  std 29, 128(1)
  04cf30c  std 28, 120(1)
  04cf310  lis 3, 77
  04cf314  lis 28, 114
  04cf318  std 30, 136(1)
  04cf31c  addi 29, 3, -3424
  04cf320  lwz 30, 120(31)
  04cf324  lfs 1, 96(30)
  04cf328  stfs 1, 16(31)
  04cf32c  lfs 1, 100(30)
  04cf330  stfs 1, 20(31)
  04cf334  lfs 1, 104(30)
  04cf338  stfs 1, 24(31)
  04cf33c  lfs 1, 108(30)
  04cf340  stfs 1, 28(31)
  04cf344  lfs 1, 112(30)
  04cf348  stfs 1, 64(31)
  04cf34c  lfs 1, 116(30)
  04cf350  stfs 1, 68(31)
  04cf354  lfs 1, 120(30)
  04cf358  stfs 1, 72(31)
  04cf35c  lfs 1, 124(30)
  04cf360  stfs 1, 76(31)
  04cf364  lfs 3, 0(29)
  04cf368  lfs 1, 200(30)
  04cf36c  lfs 2, -3052(28)
  04cf370  fmuls 2, 2, 3
  04cf374  bl 0x502578
  04cf378  nop
  04cf37c  stfs 1, 200(30)
  04cf380  lfs 31, 4(29)
  04cf384  lfs 30, 8(29)
  04cf388  fsubs 2, 31, 1
  04cf38c  fsubs 3, 30, 1
  04cf390  lfs 29, 12(29)
  04cf394  lfs 28, 16(29)
  04cf398  lfs 27, 20(29)
  04cf39c  lfs 26, 24(29)
  04cf3a0  fsub 4, 1, 2
  04cf3a4  fsel 1, 4, 2, 1
  04cf3a8  fsub 4, 3, 1
  04cf3ac  fsel 1, 4, 3, 1
  04cf3b0  lfs 3, 24(31)
  04cf3b4  lfs 2, 28(29)
  04cf3b8  fmuls 4, 1, 1
  04cf3bc  fmuls 5, 4, 1
  04cf3c0  fmuls 6, 4, 5
  04cf3c4  fmadds 1, 5, 29, 1
  04cf3c8  fmuls 5, 4, 6
  04cf3cc  fmadds 1, 6, 28, 1
  04cf3d0  fmuls 4, 4, 5
  04cf3d4  fmadds 1, 5, 27, 1
  04cf3d8  fmadds 1, 4, 26, 1
  04cf3dc  fmadds 1, 1, 2, 3
  04cf3e0  stfs 1, 24(31)
  04cf3e4  lfs 3, 32(29)
  04cf3e8  lfs 1, 204(30)
  04cf3ec  lfs 4, -3052(28)
  04cf3f0  fmuls 2, 4, 3
  04cf3f4  bl 0x502578
  04cf3f8  nop
  04cf3fc  fsubs 2, 31, 1
  04cf400  stfs 1, 204(30)
  04cf404  fsubs 3, 30, 1
  04cf408  fsub 4, 1, 2
  04cf40c  fsel 2, 4, 2, 1
  04cf410  fsub 1, 3, 2
  04cf414  fsel 2, 1, 3, 2
  04cf418  lfs 1, 68(31)
  04cf41c  lfs 25, 36(29)
  04cf420  fmuls 3, 2, 2
  04cf424  fmuls 5, 3, 2
  04cf428  fmuls 4, 3, 5
  04cf42c  fmadds 2, 5, 29, 2
  04cf430  fmuls 5, 3, 4
  04cf434  fmadds 2, 4, 28, 2
  04cf438  fmuls 3, 3, 5
  04cf43c  fmadds 2, 5, 27, 2
  04cf440  fmadds 2, 3, 26, 2
  04cf444  fmuls 2, 2, 25
  04cf448  bl 0x502578
  04cf44c  nop
  04cf450  stfs 1, 68(31)
  04cf454  lfs 3, 40(29)
  04cf458  lfs 1, 208(30)
  04cf45c  lfs 4, -3052(28)
  04cf460  fmuls 2, 4, 3
  04cf464  bl 0x502578
  04cf468  nop
  04cf46c  fsubs 2, 31, 1
  04cf470  fsubs 3, 30, 1
  04cf474  stfs 1, 208(30)
  04cf478  fsub 4, 1, 2
  04cf47c  fsel 2, 4, 2, 1
  04cf480  lfs 1, 64(31)
  04cf484  fsub 4, 3, 2
  04cf488  fsel 2, 4, 3, 2
  04cf48c  fmuls 3, 2, 2
  04cf490  fmuls 4, 3, 2
  04cf494  fmuls 5, 3, 4
  04cf498  fmadds 2, 4, 29, 2
  04cf49c  fmuls 4, 3, 5
  04cf4a0  fmadds 2, 5, 28, 2
  04cf4a4  fmuls 3, 3, 4
  04cf4a8  fmadds 2, 4, 27, 2
  04cf4ac  fmadds 2, 3, 26, 2
  04cf4b0  fmuls 2, 2, 25
  04cf4b4  bl 0x502578
  04cf4b8  nop
  04cf4bc  lwz 3, 68(31)
  04cf4c0  stfs 1, 64(31)
  04cf4c4  lfs 2, 44(29)
  04cf4c8  srawi 4, 3, 31
  04cf4cc  fcmpu 0, 1, 2
  04cf4d0  srwi 5, 4, 1
  04cf4d4  xor 3, 5, 3
  04cf4d8  subc 3, 3, 4
  04cf4dc  cror 6, 0, 2
  04cf4e0  bt 6, 0x4cf4f4
  04cf4e4  lis 4, 15922
  04cf4e8  ori 4, 4, 47298
  04cf4ec  stw 4, 64(31)
  04cf4f0  b 0x4cf518
  04cf4f4  lis 4, 77
  04cf4f8  addi 4, 4, -3424
  04cf4fc  lfs 2, 48(4)
  04cf500  fcmpu 0, 1, 2
  04cf504  cror 6, 1, 2
  04cf508  bt 6, 0x4cf518
  04cf50c  lis 4, -16846
  04cf510  ori 4, 4, 47298
  04cf514  stw 4, 64(31)
  04cf518  lis 4, 15922
  04cf51c  ori 4, 4, 47298
  04cf520  cmpw 3, 4
  04cf524  bf 1, 0x4cf538
  04cf528  lis 3, 15922
  04cf52c  ori 3, 3, 47298
  04cf530  stw 3, 68(31)
  04cf534  b 0x4cf554
  04cf538  lis 4, -15923
  04cf53c  ori 4, 4, 18238
  04cf540  cmpw 3, 4
  04cf544  bf 0, 0x4cf554
  04cf548  lis 3, -16846
  04cf54c  ori 3, 3, 47298
  04cf550  stw 3, 68(31)
  04cf554  ld 0, 224(1)
  04cf558  mtlr 0
  04cf55c  lfd 25, 152(1)
  04cf560  lfd 26, 160(1)
  04cf564  lfd 27, 168(1)
  04cf568  lfd 28, 176(1)
  04cf56c  lfd 29, 184(1)
  04cf570  lfd 30, 192(1)
  04cf574  lfd 31, 200(1)
  04cf578  ld 28, 120(1)
  04cf57c  ld 29, 128(1)
  04cf580  ld 30, 136(1)
  04cf584  ld 31, 144(1)
  04cf588  addi 1, 1, 208
  04cf58c  blr

M998_004cf598:   # 0x4cf598, 0x1ec bytes
  04cf598  lis 4, 77
  04cf59c  lwz 5, 120(3)
  04cf5a0  lis 7, 165
  04cf5a4  addi 10, 4, -2672
  04cf5a8  li 6, -1
  04cf5ac  li 9, 0
  04cf5b0  ori 8, 5, 0
  04cf5b4  lwz 7, 7128(7)
  04cf5b8  sth 6, 180(5)
  04cf5bc  ori 4, 9, 0
  04cf5c0  lfs 1, 0(10)
  04cf5c4  lwz 10, 128(8)
  04cf5c8  lfs 2, 20(3)
  04cf5cc  slwi 10, 10, 7
  04cf5d0  lfs 3, 16(3)
  04cf5d4  addc 10, 10, 7
  04cf5d8  clrldi 10, 10, 32
  04cf5dc  lfs 4, 52(10)
  04cf5e0  lfs 5, 48(10)
  04cf5e4  fsubs 2, 2, 4
  04cf5e8  fsubs 3, 3, 5
  04cf5ec  lfs 4, 24(3)
  04cf5f0  lfs 5, 56(10)
  04cf5f4  fsubs 4, 4, 5
  04cf5f8  fmuls 2, 2, 2
  04cf5fc  fmadds 2, 3, 3, 2
  04cf600  fmadds 2, 4, 4, 2
  04cf604  fsqrts 2, 2
  04cf608  fcmpu 0, 2, 1
  04cf60c  cror 6, 1, 2
  04cf610  bt 6, 0x4cf61c
  04cf614  ori 6, 9, 0
  04cf618  sth 9, 180(5)
  04cf61c  addic 9, 9, 1
  04cf620  addic 8, 8, 4
  04cf624  cmpwi 9, 5
  04cf628  bt 0, 0x4cf5c4
  04cf62c  extsh 6, 6
  04cf630  cmpwi 6, -1
  04cf634  cmpwi 1, 6, 4
  04cf638  cmpwi 6, 6, 1
  04cf63c  cmpwi 7, 6, 2
  04cf640  bf 1, 0x4cf708
  04cf644  bt 29, 0x4cf650
  04cf648  bf 25, 0x4cf654
  04cf64c  b 0x4cf67c
  04cf650  bt 5, 0x4cf708
  04cf654  lwz 6, 36(3)
  04cf658  li 4, 1
  04cf65c  lhz 7, 52(3)
  04cf660  rlwinm 7, 7, 0, 0, 30
  04cf664  lwz 6, 16(6)
  04cf668  stb 4, 49(3)
  04cf66c  stw 6, 148(3)
  04cf670  sth 7, 52(3)
  04cf674  stb 4, 32(3)
  04cf678  b 0x4cf708
  04cf67c  lis 6, 151
  04cf680  lis 7, 161
  04cf684  lwz 8, 184(5)
  04cf688  addic 7, 7, -13692
  04cf68c  lwz 6, -25488(6)
  04cf690  addc 8, 8, 7
  04cf694  slwi 6, 6, 4
  04cf698  clrldi 8, 8, 32
  04cf69c  extsw 6, 6
  04cf6a0  lbzx 8, 8, 6
  04cf6a4  cmpwi 8, 255
  04cf6a8  bt 2, 0x4cf6e4
  04cf6ac  lwz 8, 188(5)
  04cf6b0  addc 7, 8, 7
  04cf6b4  clrldi 7, 7, 32
  04cf6b8  lbzx 6, 7, 6
  04cf6bc  cmpwi 6, 255
  04cf6c0  bt 2, 0x4cf6e4
  04cf6c4  lhz 7, 52(3)
  04cf6c8  li 6, 6
  04cf6cc  stw 4, 148(3)
  04cf6d0  ori 7, 7, 1
  04cf6d4  stb 4, 49(3)
  04cf6d8  stb 6, 32(3)
  04cf6dc  sth 7, 52(3)
  04cf6e0  b 0x4cf708
  04cf6e4  lwz 6, 36(3)
  04cf6e8  li 4, 1
  04cf6ec  lhz 7, 52(3)
  04cf6f0  rlwinm 7, 7, 0, 0, 30
  04cf6f4  lwz 6, 16(6)
  04cf6f8  stb 4, 49(3)
  04cf6fc  stw 6, 148(3)
  04cf700  sth 7, 52(3)
  04cf704  stb 4, 32(3)
  04cf708  lhz 4, 180(5)
  04cf70c  lis 3, 165
  04cf710  extsh 4, 4
  04cf714  sldi 4, 4, 2
  04cf718  lwz 3, 7128(3)
  04cf71c  addc 4, 5, 4
  04cf720  clrldi 4, 4, 32
  04cf724  lwz 4, 128(4)
  04cf728  slwi 6, 4, 7
  04cf72c  slwi 4, 4, 7
  04cf730  addc 6, 3, 6
  04cf734  addc 3, 3, 4
  04cf738  clrldi 6, 6, 32
  04cf73c  clrldi 3, 3, 32
  04cf740  lfs 1, 48(6)
  04cf744  stfs 1, 96(5)
  04cf748  lfs 1, 52(6)
  04cf74c  stfs 1, 100(5)
  04cf750  lfs 1, 56(6)
  04cf754  stfs 1, 104(5)
  04cf758  lfs 1, 60(6)
  04cf75c  stfs 1, 108(5)
  04cf760  lfs 1, 112(3)
  04cf764  stfs 1, 112(5)
  04cf768  lfs 1, 116(3)
  04cf76c  stfs 1, 116(5)
  04cf770  lfs 1, 120(3)
  04cf774  stfs 1, 120(5)
  04cf778  lfs 1, 124(3)
  04cf77c  stfs 1, 124(5)
  04cf780  blr

M998_004cf784:   # 0x4cf784, 0x74 bytes
  04cf784  lis 5, 165
  04cf788  lbz 3, 33(3)
  04cf78c  lis 6, 164
  04cf790  addic 5, 5, -28284
  04cf794  slwi 7, 3, 2
  04cf798  lwz 3, -28512(6)
  04cf79c  lwzx 5, 5, 7
  04cf7a0  cmpwi 5, 0
  04cf7a4  bf 2, 0x4cf7b0
  04cf7a8  li 3, 0
  04cf7ac  b 0x4cf7f4
  04cf7b0  lhz 6, 0(5)
  04cf7b4  rlwinm 6, 6, 8, 9, 23
  04cf7b8  addc 6, 3, 6
  04cf7bc  clrldi 6, 6, 32
  04cf7c0  lwz 7, 120(6)
  04cf7c4  lhz 7, 180(7)
  04cf7c8  extsh 7, 7
  04cf7cc  cmpw 7, 4
  04cf7d0  bf 2, 0x4cf7dc
  04cf7d4  ori 3, 6, 0
  04cf7d8  b 0x4cf7f4
  04cf7dc  lhz 6, 0(5)
  04cf7e0  addic 5, 5, 2
  04cf7e4  extsh 6, 6
  04cf7e8  cmpwi 6, 0
  04cf7ec  bf 0, 0x4cf7b0
  04cf7f0  li 3, 0
  04cf7f4  blr

M998_004cf7f8:   # 0x4cf7f8, 0x140 bytes
  04cf7f8  stdu 1, -128(1)
  04cf7fc  mflr 0
  04cf800  std 0, 144(1)
  04cf804  std 31, 120(1)
  04cf808  lwz 31, 120(3)
  04cf80c  lis 4, 165
  04cf810  lbz 3, 33(3)
  04cf814  lis 7, 164
  04cf818  addic 4, 4, -28284
  04cf81c  slwi 5, 3, 2
  04cf820  lhz 3, 182(31)
  04cf824  extsh 6, 3
  04cf828  lwzx 5, 4, 5
  04cf82c  lwz 4, -28512(7)
  04cf830  cmpwi 5, 0
  04cf834  bt 2, 0x4cf920
  04cf838  lhz 7, 0(5)
  04cf83c  rlwinm 7, 7, 8, 9, 23
  04cf840  addc 7, 4, 7
  04cf844  clrldi 7, 7, 32
  04cf848  lwz 8, 120(7)
  04cf84c  lhz 8, 180(8)
  04cf850  extsh 8, 8
  04cf854  cmpw 8, 6
  04cf858  bf 2, 0x4cf868
  04cf85c  cmpwi 7, 0
  04cf860  bf 2, 0x4cf880
  04cf864  b 0x4cf920
  04cf868  lhz 7, 0(5)
  04cf86c  addic 5, 5, 2
  04cf870  extsh 7, 7
  04cf874  cmpwi 7, 0
  04cf878  bf 0, 0x4cf838
  04cf87c  b 0x4cf920
  04cf880  lhz 4, 180(31)
  04cf884  lis 3, 165
  04cf888  extsh 4, 4
  04cf88c  sldi 4, 4, 2
  04cf890  addc 4, 31, 4
  04cf894  lwz 5, 7128(3)
  04cf898  clrldi 4, 4, 32
  04cf89c  lwz 4, 128(4)
  04cf8a0  slwi 4, 4, 7
  04cf8a4  addc 4, 5, 4
  04cf8a8  clrldi 4, 4, 32
  04cf8ac  lfs 1, 48(4)
  04cf8b0  stfs 1, 16(7)
  04cf8b4  lfs 1, 52(4)
  04cf8b8  stfs 1, 20(7)
  04cf8bc  lfs 1, 56(4)
  04cf8c0  stfs 1, 24(7)
  04cf8c4  lfs 1, 60(4)
  04cf8c8  stfs 1, 28(7)
  04cf8cc  lhz 4, 180(31)
  04cf8d0  lwz 3, 7128(3)
  04cf8d4  extsh 4, 4
  04cf8d8  sldi 4, 4, 2
  04cf8dc  addc 4, 31, 4
  04cf8e0  clrldi 4, 4, 32
  04cf8e4  lwz 4, 128(4)
  04cf8e8  slwi 4, 4, 7
  04cf8ec  addc 3, 3, 4
  04cf8f0  clrldi 4, 3, 32
  04cf8f4  ori 3, 7, 0
  04cf8f8  lfs 1, 112(4)
  04cf8fc  stfs 1, 64(7)
  04cf900  lfs 1, 116(4)
  04cf904  stfs 1, 68(7)
  04cf908  lfs 1, 120(4)
  04cf90c  stfs 1, 72(7)
  04cf910  lfs 1, 124(4)
  04cf914  stfs 1, 76(7)
  04cf918  bl 0x4cf598
  04cf91c  lhz 3, 182(31)
  04cf920  sth 3, 180(31)
  04cf924  ld 0, 144(1)
  04cf928  mtlr 0
  04cf92c  ld 31, 120(1)
  04cf930  addi 1, 1, 128
  04cf934  blr

M998_004cf940:   # 0x4cf940, 0xc4 bytes
  04cf940  stdu 1, -144(1)
  04cf944  mflr 0
  04cf948  std 0, 160(1)
  04cf94c  std 30, 128(1)
  04cf950  lis 4, 77
  04cf954  std 31, 136(1)
  04cf958  lwz 30, 120(3)
  04cf95c  lis 31, 16256
  04cf960  addi 4, 4, -1736
  04cf964  addic 3, 30, 192
  04cf968  addic 5, 30, 196
  04cf96c  lfs 1, 0(4)
  04cf970  lfs 3, 216(30)
  04cf974  lfs 4, 212(30)
  04cf978  fmr 2, 3
  04cf97c  bl 0x109c30
  04cf980  nop
  04cf984  lwz 3, 172(30)
  04cf988  addic 6, 30, 96
  04cf98c  addic 7, 30, 112
  04cf990  li 5, 0
  04cf994  lwz 4, 0(3)
  04cf998  addic 4, 4, -1
  04cf99c  li 8, 0
  04cf9a0  extsw 4, 4
  04cf9a4  std 4, 112(1)
  04cf9a8  lfs 1, 192(30)
  04cf9ac  lfd 2, 112(1)
  04cf9b0  fcfid 2, 2
  04cf9b4  frsp 2, 2
  04cf9b8  fmuls 1, 1, 2
  04cf9bc  bl 0x117390
  04cf9c0  nop
  04cf9c4  lwz 3, 192(30)
  04cf9c8  srawi 4, 3, 31
  04cf9cc  srwi 5, 4, 1
  04cf9d0  xor 3, 5, 3
  04cf9d4  subc 3, 3, 4
  04cf9d8  cmpw 3, 31
  04cf9dc  bt 0, 0x4cf9e8
  04cf9e0  li 3, 1
  04cf9e4  b 0x4cf9ec
  04cf9e8  li 3, 0
  04cf9ec  ld 0, 160(1)
  04cf9f0  mtlr 0
  04cf9f4  ld 30, 128(1)
  04cf9f8  ld 31, 136(1)
  04cf9fc  addi 1, 1, 144
  04cfa00  blr

M998_004cfa04:   # 0x4cfa04, 0xc4 bytes
  04cfa04  stdu 1, -112(1)
  04cfa08  mflr 0
  04cfa0c  std 0, 128(1)
  04cfa10  lwz 3, 120(3)
  04cfa14  lhz 3, 182(3)
  04cfa18  extsh 3, 3
  04cfa1c  cmpwi 3, 4
  04cfa20  cmpwi 1, 3, 0
  04cfa24  cmpwi 6, 3, 1
  04cfa28  cmpwi 7, 3, 2
  04cfa2c  bt 2, 0x4cfa94
  04cfa30  cmpwi 3, 3
  04cfa34  bt 2, 0x4cfa80
  04cfa38  bt 30, 0x4cfa6c
  04cfa3c  bt 26, 0x4cfa58
  04cfa40  bf 6, 0x4cfaa8
  04cfa44  li 3, 8
  04cfa48  li 4, 5029
  04cfa4c  bl 0x11aeec
  04cfa50  nop
  04cfa54  b 0x4cfab8
  04cfa58  li 3, 8
  04cfa5c  li 4, 5016
  04cfa60  bl 0x11aeec
  04cfa64  nop
  04cfa68  b 0x4cfab8
  04cfa6c  li 3, 8
  04cfa70  li 4, 5018
  04cfa74  bl 0x11aeec
  04cfa78  nop
  04cfa7c  b 0x4cfab8
  04cfa80  li 3, 8
  04cfa84  li 4, 5020
  04cfa88  bl 0x11aeec
  04cfa8c  nop
  04cfa90  b 0x4cfab8
  04cfa94  li 3, 8
  04cfa98  li 4, 5017
  04cfa9c  bl 0x11aeec
  04cfaa0  nop
  04cfaa4  b 0x4cfab8
  04cfaa8  li 3, 8
  04cfaac  li 4, 5019
  04cfab0  bl 0x11aeec
  04cfab4  nop
  04cfab8  ld 0, 128(1)
  04cfabc  mtlr 0
  04cfac0  addi 1, 1, 112
  04cfac4  blr

M998_004cfad8:   # 0x4cfad8, 0x1d8 bytes
  04cfad8  stdu 1, -64(1)
  04cfadc  ori 4, 3, 0
  04cfae0  lis 3, 165
  04cfae4  addic 3, 3, 7136
  04cfae8  lwz 4, 120(4)
  04cfaec  lhz 5, 180(4)
  04cfaf0  extsh 5, 5
  04cfaf4  cmpwi 5, 4
  04cfaf8  cmpwi 1, 5, 0
  04cfafc  cmpwi 6, 5, 1
  04cfb00  cmpwi 7, 5, 2
  04cfb04  bt 2, 0x4cfbf0
  04cfb08  cmpwi 5, 3
  04cfb0c  bt 2, 0x4cfbd0
  04cfb10  bt 30, 0x4cfb60
  04cfb14  bt 26, 0x4cfb40
  04cfb18  lwz 5, 172(4)
  04cfb1c  bf 6, 0x4cfc0c
  04cfb20  lwz 6, 148(4)
  04cfb24  li 5, 1
  04cfb28  slwi 6, 6, 2
  04cfb2c  extsw 6, 6
  04cfb30  sth 5, 182(4)
  04cfb34  lwzx 5, 3, 6
  04cfb38  stw 5, 172(4)
  04cfb3c  b 0x4cfc0c
  04cfb40  lwz 6, 152(4)
  04cfb44  li 5, 0
  04cfb48  slwi 6, 6, 2
  04cfb4c  extsw 6, 6
  04cfb50  sth 5, 182(4)
  04cfb54  lwzx 5, 3, 6
  04cfb58  stw 5, 172(4)
  04cfb5c  b 0x4cfc0c
  04cfb60  lis 5, 151
  04cfb64  lis 6, 161
  04cfb68  lwz 7, 184(4)
  04cfb6c  addic 6, 6, -13692
  04cfb70  lwz 5, -25488(5)
  04cfb74  addc 6, 7, 6
  04cfb78  slwi 5, 5, 4
  04cfb7c  clrldi 6, 6, 32
  04cfb80  extsw 5, 5
  04cfb84  lbzx 5, 6, 5
  04cfb88  cmpwi 5, 255
  04cfb8c  bt 2, 0x4cfbb0
  04cfb90  lwz 6, 156(4)
  04cfb94  li 5, 3
  04cfb98  slwi 6, 6, 2
  04cfb9c  extsw 6, 6
  04cfba0  sth 5, 182(4)
  04cfba4  lwzx 5, 3, 6
  04cfba8  stw 5, 172(4)
  04cfbac  b 0x4cfc0c
  04cfbb0  lwz 6, 164(4)
  04cfbb4  li 5, 4
  04cfbb8  slwi 6, 6, 2
  04cfbbc  extsw 6, 6
  04cfbc0  sth 5, 182(4)
  04cfbc4  lwzx 5, 3, 6
  04cfbc8  stw 5, 172(4)
  04cfbcc  b 0x4cfc0c
  04cfbd0  lwz 6, 160(4)
  04cfbd4  li 5, 2
  04cfbd8  slwi 6, 6, 2
  04cfbdc  extsw 6, 6
  04cfbe0  sth 5, 182(4)
  04cfbe4  lwzx 5, 3, 6
  04cfbe8  stw 5, 172(4)
  04cfbec  b 0x4cfc0c
  04cfbf0  lwz 6, 168(4)
  04cfbf4  li 5, 2
  04cfbf8  slwi 6, 6, 2
  04cfbfc  extsw 6, 6
  04cfc00  sth 5, 182(4)
  04cfc04  lwzx 5, 3, 6
  04cfc08  stw 5, 172(4)
  04cfc0c  lfs 1, 20(5)
  04cfc10  lfs 2, 36(5)
  04cfc14  lfs 3, 16(5)
  04cfc18  fsubs 1, 1, 2
  04cfc1c  lfs 2, 32(5)
  04cfc20  fsubs 2, 3, 2
  04cfc24  lfs 3, 24(5)
  04cfc28  lfs 4, 40(5)
  04cfc2c  fsubs 3, 3, 4
  04cfc30  lwz 3, 0(5)
  04cfc34  fmuls 1, 1, 1
  04cfc38  extsw 3, 3
  04cfc3c  std 3, 48(1)
  04cfc40  lis 3, 77
  04cfc44  fmadds 1, 2, 2, 1
  04cfc48  addi 3, 3, -1336
  04cfc4c  lis 5, 114
  04cfc50  li 6, 0
  04cfc54  fmadds 1, 3, 3, 1
  04cfc58  lfd 2, 48(1)
  04cfc5c  lfs 3, 0(3)
  04cfc60  fcfid 2, 2
  04cfc64  fsqrts 1, 1
  04cfc68  lfs 4, 4(3)
  04cfc6c  lfs 5, -3052(5)
  04cfc70  lis 5, 114
  04cfc74  frsp 2, 2
  04cfc78  fmuls 4, 5, 4
  04cfc7c  fmuls 1, 1, 2
  04cfc80  fdivs 1, 3, 1
  04cfc84  fmuls 2, 4, 1
  04cfc88  stfs 2, 212(4)
  04cfc8c  lfs 2, 8(3)
  04cfc90  lfs 3, -3048(5)
  04cfc94  stw 6, 192(4)
  04cfc98  fmuls 2, 3, 2
  04cfc9c  stw 6, 196(4)
  04cfca0  fmuls 1, 2, 1
  04cfca4  stfs 1, 216(4)
  04cfca8  addi 1, 1, 64
  04cfcac  blr

UpdateMoby_998:   # 0x4cfcc8, 0x7e4 bytes
  04cfcc8  stdu 1, -400(1)
  04cfccc  mflr 0
  04cfcd0  std 0, 416(1)
  04cfcd4  stfd 23, 328(1)
  04cfcd8  stfd 24, 336(1)
  04cfcdc  stfd 25, 344(1)
  04cfce0  stfd 26, 352(1)
  04cfce4  stfd 27, 360(1)
  04cfce8  stfd 28, 368(1)
  04cfcec  stfd 29, 376(1)
  04cfcf0  stfd 30, 384(1)
  04cfcf4  stfd 31, 392(1)
  04cfcf8  std 31, 320(1)
  04cfcfc  std 30, 312(1)
  04cfd00  ori 31, 3, 0
  04cfd04  lwz 30, 120(31)
  04cfd08  lfs 29, 16(31)
  04cfd0c  lfs 1, 64(31)
  04cfd10  lfs 30, 20(31)
  04cfd14  lfs 31, 24(31)
  04cfd18  lfs 2, 68(31)
  04cfd1c  lhz 4, 52(31)
  04cfd20  stfs 1, 112(1)
  04cfd24  lfs 1, 72(31)
  04cfd28  clrlwi 4, 4, 31
  04cfd2c  stfs 2, 116(1)
  04cfd30  lfs 2, 76(31)
  04cfd34  cntlzw 4, 4
  04cfd38  stfs 1, 120(1)
  04cfd3c  stfs 2, 124(1)
  04cfd40  std 29, 304(1)
  04cfd44  std 28, 296(1)
  04cfd48  rlwinm 4, 4, 27, 31, 31
  04cfd4c  bl 0x4d407c
  04cfd50  nop
  04cfd54  lbz 5, 32(31)
  04cfd58  lwz 4, 36(31)
  04cfd5c  cmpwi 5, 6
  04cfd60  lhz 3, 52(31)
  04cfd64  bt 2, 0x4d02d4
  04cfd68  cmpwi 5, 5
  04cfd6c  bt 2, 0x4d014c
  04cfd70  cmpwi 5, 4
  04cfd74  bt 2, 0x4d00a8
  04cfd78  cmpwi 5, 3
  04cfd7c  bt 2, 0x4cff48
  04cfd80  cmpwi 5, 2
  04cfd84  bt 2, 0x4d0338
  04cfd88  cmpwi 5, 1
  04cfd8c  bt 2, 0x4cfdb0
  04cfd90  cmpwi 5, 0
  04cfd94  bf 2, 0x4d0338
  04cfd98  li 4, -1
  04cfd9c  ori 3, 31, 0
  04cfda0  sth 4, 176(30)
  04cfda4  sth 4, 178(30)
  04cfda8  bl 0x4cf598
  04cfdac  b 0x4d0338
  04cfdb0  lis 29, 151
  04cfdb4  addic 29, 29, -25376
  04cfdb8  lwz 3, 764(29)
  04cfdbc  cmpw 3, 31
  04cfdc0  bf 2, 0x4d0338
  04cfdc4  lhz 3, 782(29)
  04cfdc8  cmpwi 3, 0
  04cfdcc  bf 2, 0x4d0338
  04cfdd0  addic 3, 1, 208
  04cfdd4  addic 4, 31, 192
  04cfdd8  bl 0x5010c0
  04cfddc  nop
  04cfde0  lfs 1, 132(29)
  04cfde4  lfs 2, 20(31)
  04cfde8  lfs 3, 128(29)
  04cfdec  fsubs 1, 1, 2
  04cfdf0  lfs 2, 16(31)
  04cfdf4  lis 3, 77
  04cfdf8  fsubs 2, 3, 2
  04cfdfc  lfs 3, 228(1)
  04cfe00  lfs 4, 136(29)
  04cfe04  lfs 5, 24(31)
  04cfe08  lfs 6, 212(1)
  04cfe0c  addi 3, 3, -848
  04cfe10  fsubs 4, 4, 5
  04cfe14  lfs 5, 244(1)
  04cfe18  fmuls 3, 3, 1
  04cfe1c  lfs 7, 224(1)
  04cfe20  fmuls 1, 7, 1
  04cfe24  lfs 7, 208(1)
  04cfe28  fmadds 3, 6, 2, 3
  04cfe2c  lfs 6, 0(3)
  04cfe30  fmadds 1, 7, 2, 1
  04cfe34  lfs 8, 240(1)
  04cfe38  fmadds 2, 5, 4, 3
  04cfe3c  fmadds 1, 8, 4, 1
  04cfe40  fabs 2, 2
  04cfe44  fcmpu 0, 2, 6
  04cfe48  cror 6, 1, 2
  04cfe4c  bt 6, 0x4d0338
  04cfe50  lis 3, 77
  04cfe54  addi 3, 3, -848
  04cfe58  lfs 2, 4(3)
  04cfe5c  fcmpu 0, 1, 2
  04cfe60  cror 6, 1, 2
  04cfe64  bt 6, 0x4d0338
  04cfe68  lis 3, 77
  04cfe6c  addi 3, 3, -848
  04cfe70  lfs 2, 8(3)
  04cfe74  fcmpu 0, 1, 2
  04cfe78  cror 6, 0, 2
  04cfe7c  bt 6, 0x4d0338
  04cfe80  ori 3, 31, 0
  04cfe84  bl 0x4cfad8
  04cfe88  ori 3, 31, 0
  04cfe8c  bl 0x4cfa04
  04cfe90  lis 3, 150
  04cfe94  addic 3, 3, 19008
  04cfe98  lwz 3, 164(3)
  04cfe9c  rlwinm 3, 3, 0, 27, 27
  04cfea0  cmpwi 3, 0
  04cfea4  bt 2, 0x4d0338
  04cfea8  li 3, 3
  04cfeac  lbz 6, 33(31)
  04cfeb0  lis 4, 165
  04cfeb4  lis 5, 164
  04cfeb8  addic 4, 4, -28284
  04cfebc  slwi 7, 6, 2
  04cfec0  stb 3, 32(31)
  04cfec4  lhz 6, 182(30)
  04cfec8  lwz 3, -28512(5)
  04cfecc  extsh 6, 6
  04cfed0  lwzx 5, 4, 7
  04cfed4  cmpwi 5, 0
  04cfed8  bt 2, 0x4d0338
  04cfedc  lhz 4, 0(5)
  04cfee0  rlwinm 4, 4, 8, 9, 23
  04cfee4  addc 4, 3, 4
  04cfee8  clrldi 4, 4, 32
  04cfeec  lwz 7, 120(4)
  04cfef0  lhz 7, 180(7)
  04cfef4  extsh 7, 7
  04cfef8  cmpw 7, 6
  04cfefc  bf 2, 0x4cff0c
  04cff00  cmpwi 4, 0
  04cff04  bf 2, 0x4cff24
  04cff08  b 0x4d0338
  04cff0c  lhz 4, 0(5)
  04cff10  addic 5, 5, 2
  04cff14  extsh 4, 4
  04cff18  cmpwi 4, 0
  04cff1c  bf 0, 0x4cfedc
  04cff20  b 0x4d0338
  04cff24  li 3, 0
  04cff28  lhz 6, 52(4)
  04cff2c  li 5, 2
  04cff30  ori 6, 6, 1
  04cff34  stw 3, 148(4)
  04cff38  stb 3, 49(4)
  04cff3c  stb 5, 32(4)
  04cff40  sth 6, 52(4)
  04cff44  b 0x4d0338
  04cff48  lis 3, 77
  04cff4c  lis 4, 114
  04cff50  addi 29, 3, -848
  04cff54  lis 6, 114
  04cff58  addic 3, 30, 192
  04cff5c  addic 5, 30, 196
  04cff60  lis 28, 16256
  04cff64  lfs 4, 12(29)
  04cff68  lfs 1, 4(29)
  04cff6c  lfs 3, -3048(4)
  04cff70  lfs 5, -3052(6)
  04cff74  fmr 2, 3
  04cff78  fmuls 4, 5, 4
  04cff7c  bl 0x109c30
  04cff80  nop
  04cff84  lhz 3, 180(30)
  04cff88  lis 4, 165
  04cff8c  extsh 3, 3
  04cff90  addic 6, 1, 144
  04cff94  sldi 3, 3, 2
  04cff98  addic 7, 1, 160
  04cff9c  addc 3, 30, 3
  04cffa0  lwz 4, 7128(4)
  04cffa4  li 8, 0
  04cffa8  clrldi 3, 3, 32
  04cffac  lwz 5, 172(30)
  04cffb0  lfs 1, 16(29)
  04cffb4  lwz 3, 128(3)
  04cffb8  slwi 3, 3, 7
  04cffbc  addc 3, 4, 3
  04cffc0  clrldi 4, 3, 32
  04cffc4  ori 3, 5, 0
  04cffc8  li 5, 0
  04cffcc  lfs 28, 48(4)
  04cffd0  lfs 27, 52(4)
  04cffd4  lfs 26, 56(4)
  04cffd8  lfs 25, 116(4)
  04cffdc  lfs 24, 120(4)
  04cffe0  bl 0x117390
  04cffe4  nop
  04cffe8  lfs 1, 144(1)
  04cffec  lfs 2, 148(1)
  04cfff0  fsubs 1, 1, 28
  04cfff4  lfs 3, 152(1)
  04cfff8  fsubs 4, 2, 27
  04cfffc  lfs 5, 192(30)
  04d0000  fsubs 3, 3, 26
  04d0004  lfs 6, 156(1)
  04d0008  fmr 2, 25
  04d000c  stfs 6, 108(30)
  04d0010  fmadds 1, 5, 1, 28
  04d0014  fmadds 4, 5, 4, 27
  04d0018  fmadds 3, 5, 3, 26
  04d001c  stfs 1, 96(30)
  04d0020  stfs 4, 100(30)
  04d0024  stfs 3, 104(30)
  04d0028  lfs 1, 164(1)
  04d002c  bl 0x5025e0
  04d0030  nop
  04d0034  lfs 3, 192(30)
  04d0038  fmr 2, 25
  04d003c  fmuls 1, 1, 3
  04d0040  bl 0x502578
  04d0044  nop
  04d0048  stfs 1, 116(30)
  04d004c  fmr 2, 24
  04d0050  lfs 1, 168(1)
  04d0054  bl 0x5025e0
  04d0058  nop
  04d005c  lfs 3, 192(30)
  04d0060  fmr 2, 24
  04d0064  fmuls 1, 1, 3
  04d0068  bl 0x502578
  04d006c  nop
  04d0070  lwz 3, 192(30)
  04d0074  stfs 1, 120(30)
  04d0078  srawi 4, 3, 31
  04d007c  srwi 5, 4, 1
  04d0080  xor 3, 5, 3
  04d0084  subc 3, 3, 4
  04d0088  cmpw 3, 28
  04d008c  bt 0, 0x4d0338
  04d0090  li 3, 0
  04d0094  li 4, 4
  04d0098  stw 3, 192(30)
  04d009c  stw 3, 196(30)
  04d00a0  stb 4, 32(31)
  04d00a4  b 0x4d0338
  04d00a8  lis 3, 77
  04d00ac  lwz 28, 120(31)
  04d00b0  lis 29, 16256
  04d00b4  addi 3, 3, -848
  04d00b8  addic 5, 28, 196
  04d00bc  lfs 1, 4(3)
  04d00c0  lfs 3, 216(28)
  04d00c4  addic 3, 28, 192
  04d00c8  lfs 4, 212(28)
  04d00cc  fmr 2, 3
  04d00d0  bl 0x109c30
  04d00d4  nop
  04d00d8  lwz 3, 172(28)
  04d00dc  addic 6, 28, 96
  04d00e0  addic 7, 28, 112
  04d00e4  li 5, 0
  04d00e8  li 8, 0
  04d00ec  lwz 4, 0(3)
  04d00f0  addic 4, 4, -1
  04d00f4  extsw 4, 4
  04d00f8  std 4, 272(1)
  04d00fc  lfs 1, 192(28)
  04d0100  lfd 2, 272(1)
  04d0104  fcfid 2, 2
  04d0108  frsp 2, 2
  04d010c  fmuls 1, 1, 2
  04d0110  bl 0x117390
  04d0114  nop
  04d0118  lwz 3, 192(28)
  04d011c  srawi 4, 3, 31
  04d0120  srwi 5, 4, 1
  04d0124  xor 3, 5, 3
  04d0128  subc 3, 3, 4
  04d012c  cmpw 3, 29
  04d0130  bt 0, 0x4d0338
  04d0134  li 3, 0
  04d0138  li 4, 5
  04d013c  stw 3, 192(30)
  04d0140  stw 3, 196(30)
  04d0144  stb 4, 32(31)
  04d0148  b 0x4d0338
  04d014c  lis 3, 77
  04d0150  lis 6, 114
  04d0154  addi 4, 3, -848
  04d0158  lis 7, 114
  04d015c  addic 3, 30, 192
  04d0160  addic 5, 30, 196
  04d0164  lis 29, 16256
  04d0168  lfs 4, 12(4)
  04d016c  lfs 1, 4(4)
  04d0170  lfs 3, -3048(6)
  04d0174  lfs 5, -3052(7)
  04d0178  fmr 2, 3
  04d017c  fmuls 4, 5, 4
  04d0180  bl 0x109c30
  04d0184  nop
  04d0188  lwz 3, 172(30)
  04d018c  lis 5, 165
  04d0190  lhz 4, 182(30)
  04d0194  addic 7, 1, 192
  04d0198  extsh 4, 4
  04d019c  sldi 4, 4, 2
  04d01a0  lwz 6, 0(3)
  04d01a4  addc 4, 30, 4
  04d01a8  extsw 6, 6
  04d01ac  lwz 5, 7128(5)
  04d01b0  clrldi 4, 4, 32
  04d01b4  li 8, 0
  04d01b8  std 6, 272(1)
  04d01bc  addic 6, 1, 176
  04d01c0  lwz 4, 128(4)
  04d01c4  slwi 4, 4, 7
  04d01c8  addc 4, 5, 4
  04d01cc  li 5, 0
  04d01d0  clrldi 4, 4, 32
  04d01d4  lfs 28, 48(4)
  04d01d8  lfs 27, 52(4)
  04d01dc  lfs 26, 56(4)
  04d01e0  lfd 1, 272(1)
  04d01e4  lfs 25, 60(4)
  04d01e8  fcfid 1, 1
  04d01ec  lfs 24, 116(4)
  04d01f0  lfs 23, 120(4)
  04d01f4  frsp 1, 1
  04d01f8  bl 0x117390
  04d01fc  nop
  04d0200  lfs 1, 176(1)
  04d0204  lfs 2, 192(30)
  04d0208  fsubs 3, 28, 1
  04d020c  lfs 4, 180(1)
  04d0210  lfs 5, 184(1)
  04d0214  fsubs 4, 27, 4
  04d0218  fsubs 5, 26, 5
  04d021c  fmadds 3, 2, 3, 1
  04d0220  fmr 1, 24
  04d0224  stfs 3, 96(30)
  04d0228  lfs 3, 180(1)
  04d022c  fmadds 3, 2, 4, 3
  04d0230  stfs 3, 100(30)
  04d0234  lfs 3, 184(1)
  04d0238  stfs 25, 108(30)
  04d023c  fmadds 2, 2, 5, 3
  04d0240  stfs 2, 104(30)
  04d0244  lfs 2, 196(1)
  04d0248  bl 0x5025e0
  04d024c  nop
  04d0250  lfs 2, 192(30)
  04d0254  lfs 3, 196(1)
  04d0258  fmuls 1, 1, 2
  04d025c  fmr 2, 3
  04d0260  bl 0x502578
  04d0264  nop
  04d0268  stfs 1, 116(30)
  04d026c  fmr 1, 23
  04d0270  lfs 2, 200(1)
  04d0274  bl 0x5025e0
  04d0278  nop
  04d027c  lfs 2, 192(30)
  04d0280  lfs 3, 200(1)
  04d0284  fmuls 1, 1, 2
  04d0288  fmr 2, 3
  04d028c  bl 0x502578
  04d0290  nop
  04d0294  lwz 3, 192(30)
  04d0298  stfs 1, 120(30)
  04d029c  srawi 4, 3, 31
  04d02a0  srwi 5, 4, 1
  04d02a4  xor 3, 5, 3
  04d02a8  subc 3, 3, 4
  04d02ac  cmpw 3, 29
  04d02b0  bt 0, 0x4d0338
  04d02b4  li 4, 0
  04d02b8  li 5, 1
  04d02bc  ori 3, 31, 0
  04d02c0  stw 4, 192(30)
  04d02c4  stw 4, 196(30)
  04d02c8  stb 5, 32(31)
  04d02cc  bl 0x4cf7f8
  04d02d0  b 0x4d0338
  04d02d4  lis 5, 151
  04d02d8  lwz 7, 184(30)
  04d02dc  lis 6, 161
  04d02e0  addic 6, 6, -13692
  04d02e4  lwz 5, -25488(5)
  04d02e8  addc 7, 7, 6
  04d02ec  slwi 5, 5, 4
  04d02f0  clrldi 7, 7, 32
  04d02f4  extsw 5, 5
  04d02f8  lbzx 7, 7, 5
  04d02fc  cmpwi 7, 255
  04d0300  bt 2, 0x4d031c
  04d0304  lwz 7, 188(30)
  04d0308  addc 6, 7, 6
  04d030c  clrldi 6, 6, 32
  04d0310  lbzx 5, 6, 5
  04d0314  cmpwi 5, 255
  04d0318  bf 2, 0x4d0338
  04d031c  rlwinm 3, 3, 0, 16, 30
  04d0320  lwz 4, 16(4)
  04d0324  li 5, 1
  04d0328  sth 3, 52(31)
  04d032c  stw 4, 148(31)
  04d0330  stb 5, 49(31)
  04d0334  stb 5, 32(31)
  04d0338  ori 3, 31, 0
  04d033c  bl 0x4cf2d8
  04d0340  lbz 3, 32(31)
  04d0344  cmpwi 3, 3
  04d0348  bt 2, 0x4d035c
  04d034c  cmpwi 3, 4
  04d0350  bt 2, 0x4d035c
  04d0354  cmpwi 3, 5
  04d0358  bf 2, 0x4d03b0
  04d035c  lis 3, 151
  04d0360  li 4, 2
  04d0364  addic 5, 3, -25376
  04d0368  ori 3, 31, 0
  04d036c  sth 4, 498(5)
  04d0370  sth 4, 500(5)
  04d0374  bl 0x4cf158
  04d0378  lhz 4, 178(30)
  04d037c  ori 3, 31, 0
  04d0380  extsh 4, 4
  04d0384  bl 0x15cc7c
  04d0388  nop
  04d038c  cmpwi 3, 0
  04d0390  bf 2, 0x4d0424
  04d0394  li 3, 0
  04d0398  li 4, 4
  04d039c  ori 5, 31, 0
  04d03a0  bl 0x15d12c
  04d03a4  nop
  04d03a8  sth 3, 178(30)
  04d03ac  b 0x4d0424
  04d03b0  ori 3, 31, 0
  04d03b4  lhz 4, 178(30)
  04d03b8  extsh 4, 4
  04d03bc  bl 0x15cc7c
  04d03c0  nop
  04d03c4  cmpwi 3, 0
  04d03c8  bt 2, 0x4d0424
  04d03cc  lhz 4, 178(30)
  04d03d0  extsh 4, 4
  04d03d4  cmpwi 4, -1
  04d03d8  bt 2, 0x4d041c
  04d03dc  lis 3, 150
  04d03e0  sldi 5, 4, 7
  04d03e4  sldi 6, 4, 4
  04d03e8  addic 7, 3, 14312
  04d03ec  subc 3, 5, 6
  04d03f0  lwzx 5, 7, 3
  04d03f4  cmpw 5, 31
  04d03f8  bf 2, 0x4d041c
  04d03fc  lis 5, 150
  04d0400  addic 5, 5, 14292
  04d0404  lbzx 3, 5, 3
  04d0408  cmpwi 3, 0
  04d040c  bt 2, 0x4d041c
  04d0410  ori 3, 4, 0
  04d0414  bl 0x15cdb0
  04d0418  nop
  04d041c  li 3, -1
  04d0420  sth 3, 178(30)
  04d0424  lfs 1, 16(31)
  04d0428  addic 3, 30, 32
  04d042c  lfs 2, 20(31)
  04d0430  addic 4, 1, 128
  04d0434  fsubs 1, 1, 29
  04d0438  lfs 3, 24(31)
  04d043c  fsubs 2, 2, 30
  04d0440  lfs 4, 28(31)
  04d0444  fsubs 3, 3, 31
  04d0448  addic 5, 1, 112
  04d044c  stfs 4, 140(1)
  04d0450  addic 6, 31, 64
  04d0454  stfs 1, 128(1)
  04d0458  stfs 2, 132(1)
  04d045c  stfs 3, 136(1)
  04d0460  bl 0x112900
  04d0464  nop
  04d0468  ld 0, 416(1)
  04d046c  mtlr 0
  04d0470  lfd 23, 328(1)
  04d0474  lfd 24, 336(1)
  04d0478  lfd 25, 344(1)
  04d047c  lfd 26, 352(1)
  04d0480  lfd 27, 360(1)
  04d0484  lfd 28, 368(1)
  04d0488  lfd 29, 376(1)
  04d048c  lfd 30, 384(1)
  04d0490  lfd 31, 392(1)
  04d0494  ld 28, 296(1)
  04d0498  ld 29, 304(1)
  04d049c  ld 30, 312(1)
  04d04a0  ld 31, 320(1)
  04d04a4  addi 1, 1, 400
  04d04a8  blr

M998_004d04ac:   # 0x4d04ac, 0x14 bytes
  04d04ac  lis 3, 144
  04d04b0  lis 4, 1
  04d04b4  addic 3, 3, -28156
  04d04b8  stw 4, 72(3)
  04d04bc  blr

STUB_004d04c0:   # 0x4d04c0, 0x8 bytes
  04d04c0  li 3, 0
  04d04c4  blr

STUB_004d04c8:   # 0x4d04c8, 0x8 bytes
  04d04c8  li 3, 0
  04d04cc  blr

STUB_004d04d0:   # 0x4d04d0, 0x8 bytes
  04d04d0  li 3, 0
  04d04d4  blr

FUN_004d04e0:   # 0x4d04e0, 0x9c bytes
  04d04e0  stdu 1, -144(1)
  04d04e4  mflr 0
  04d04e8  std 0, 160(1)
  04d04ec  stfd 30, 128(1)
  04d04f0  stfd 31, 136(1)
  04d04f4  fmr 31, 1
  04d04f8  fmr 30, 3
  04d04fc  lis 3, 77
  04d0500  std 31, 120(1)
  04d0504  fmr 1, 2
  04d0508  addi 31, 3, 1240
  04d050c  fmr 2, 31
  04d0510  bl 0x5025e0
  04d0514  nop
  04d0518  lfs 2, 0(31)
  04d051c  fneg 3, 30
  04d0520  fsub 2, 2, 1
  04d0524  fabs 1, 1
  04d0528  fsel 2, 2, 3, 30
  04d052c  fcmpu 0, 2, 1
  04d0530  cror 6, 0, 2
  04d0534  bt 6, 0x4d0540
  04d0538  fmr 2, 1
  04d053c  b 0x4d0554
  04d0540  fneg 1, 1
  04d0544  fcmpu 0, 2, 1
  04d0548  cror 6, 1, 2
  04d054c  bt 6, 0x4d0554
  04d0550  fmr 2, 1
  04d0554  fmr 1, 31
  04d0558  bl 0x502578
  04d055c  nop
  04d0560  ld 0, 160(1)
  04d0564  mtlr 0
  04d0568  lfd 30, 128(1)
  04d056c  lfd 31, 136(1)
  04d0570  ld 31, 120(1)
  04d0574  addi 1, 1, 144
  04d0578  blr

FUN_004d05b8:   # 0x4d05b8, 0x958 bytes
  04d05b8  stdu 1, -432(1)
  04d05bc  mflr 0
  04d05c0  std 0, 448(1)
  04d05c4  stfd 22, 352(1)
  04d05c8  stfd 23, 360(1)
  04d05cc  stfd 24, 368(1)
  04d05d0  stfd 25, 376(1)
  04d05d4  stfd 26, 384(1)
  04d05d8  stfd 27, 392(1)
  04d05dc  stfd 28, 400(1)
  04d05e0  stfd 29, 408(1)
  04d05e4  stfd 30, 416(1)
  04d05e8  stfd 31, 424(1)
  04d05ec  fmr 31, 1
  04d05f0  lfs 27, 16(3)
  04d05f4  fmr 30, 2
  04d05f8  std 28, 320(1)
  04d05fc  lfs 1, 0(4)
  04d0600  li 28, 0
  04d0604  lfs 26, 20(3)
  04d0608  fadds 1, 27, 1
  04d060c  std 26, 304(1)
  04d0610  lfs 25, 24(3)
  04d0614  std 25, 296(1)
  04d0618  lis 26, 161
  04d061c  lfs 4, 28(3)
  04d0620  std 29, 328(1)
  04d0624  ori 25, 28, 0
  04d0628  addic 26, 26, 2368
  04d062c  std 31, 344(1)
  04d0630  ori 29, 25, 0
  04d0634  std 30, 336(1)
  04d0638  ori 31, 3, 0
  04d063c  ori 30, 4, 0
  04d0640  stfs 1, 16(3)
  04d0644  lfs 2, 4(4)
  04d0648  fadds 2, 26, 2
  04d064c  stfs 2, 20(3)
  04d0650  lfs 3, 8(4)
  04d0654  std 27, 312(1)
  04d0658  fadds 3, 25, 3
  04d065c  stfs 3, 24(3)
  04d0660  fmr 5, 1
  04d0664  fadds 3, 3, 31
  04d0668  addic 3, 1, 112
  04d066c  fmr 1, 30
  04d0670  li 5, 4
  04d0674  ori 6, 31, 0
  04d0678  stfs 5, 112(1)
  04d067c  stfs 2, 116(1)
  04d0680  stfs 4, 124(1)
  04d0684  stfs 3, 120(1)
  04d0688  bl 0x59e20
  04d068c  nop
  04d0690  cmpwi 3, 0
  04d0694  bt 2, 0x4d06cc
  04d0698  lfs 1, 48(26)
  04d069c  addic 28, 28, 1
  04d06a0  stfs 1, 16(31)
  04d06a4  lfs 2, 52(26)
  04d06a8  cmpwi 28, 6
  04d06ac  ori 29, 29, 1
  04d06b0  stfs 2, 20(31)
  04d06b4  lfs 3, 56(26)
  04d06b8  lfs 4, 60(26)
  04d06bc  fsubs 3, 3, 31
  04d06c0  stfs 4, 28(31)
  04d06c4  stfs 3, 24(31)
  04d06c8  bt 0, 0x4d0660
  04d06cc  lfs 1, 16(31)
  04d06d0  lis 3, 77
  04d06d4  lfs 2, 20(31)
  04d06d8  stfs 1, 128(1)
  04d06dc  lfs 3, 28(31)
  04d06e0  addi 3, 3, 1404
  04d06e4  stfs 2, 132(1)
  04d06e8  ori 27, 29, 0
  04d06ec  stfs 3, 140(1)
  04d06f0  li 5, 2
  04d06f4  stfs 1, 144(1)
  04d06f8  li 7, 0
  04d06fc  stfs 2, 148(1)
  04d0700  stfs 3, 156(1)
  04d0704  lfs 1, 0(3)
  04d0708  lwz 3, 24(31)
  04d070c  fadds 1, 31, 1
  04d0710  lfs 2, 24(31)
  04d0714  srawi 28, 3, 31
  04d0718  srwi 4, 28, 1
  04d071c  xor 3, 4, 3
  04d0720  lis 4, 15395
  04d0724  subc 28, 3, 28
  04d0728  ori 6, 4, 55050
  04d072c  addic 3, 1, 128
  04d0730  fadds 1, 1, 2
  04d0734  addic 4, 1, 144
  04d0738  stw 6, 152(1)
  04d073c  ori 6, 31, 0
  04d0740  stfs 1, 136(1)
  04d0744  bl 0x57820
  04d0748  nop
  04d074c  lfs 1, 0(30)
  04d0750  cmpwi 3, 0
  04d0754  lfs 2, 4(30)
  04d0758  lfs 3, 8(30)
  04d075c  bt 2, 0x4d0e7c
  04d0760  lwz 3, 28(26)
  04d0764  cmpwi 3, 0
  04d0768  bf 1, 0x4d0e7c
  04d076c  lwz 3, 40(26)
  04d0770  srawi 4, 3, 31
  04d0774  srwi 5, 4, 1
  04d0778  xor 3, 5, 3
  04d077c  subc 3, 3, 4
  04d0780  cmpw 3, 28
  04d0784  bf 1, 0x4d0e7c
  04d0788  lfs 4, 68(26)
  04d078c  lfs 5, 64(26)
  04d0790  fmuls 4, 4, 4
  04d0794  lwz 4, 72(26)
  04d0798  lis 3, 77
  04d079c  addi 3, 3, 1404
  04d07a0  lis 28, 115
  04d07a4  fmadds 4, 5, 5, 4
  04d07a8  lfs 5, 72(26)
  04d07ac  fabs 6, 5
  04d07b0  addic 28, 28, 22784
  04d07b4  ori 29, 29, 2
  04d07b8  fsqrts 4, 4
  04d07bc  fabs 7, 4
  04d07c0  stfs 4, 180(1)
  04d07c4  fsubs 4, 6, 7
  04d07c8  stfs 4, 184(1)
  04d07cc  lfs 24, 4(3)
  04d07d0  lwz 5, 180(1)
  04d07d4  lfs 4, 180(1)
  04d07d8  lfs 31, 8(3)
  04d07dc  fabs 5, 4
  04d07e0  rlwinm 5, 5, 3, 29, 29
  04d07e4  lwz 3, 184(1)
  04d07e8  lfs 4, 184(1)
  04d07ec  rlwimi 5, 3, 2, 30, 30
  04d07f0  fsub 8, 4, 24
  04d07f4  fsub 9, 4, 24
  04d07f8  rlwimi 5, 4, 4, 28, 28
  04d07fc  ori 3, 28, 0
  04d0800  slwi 4, 5, 2
  04d0804  rlwimi 3, 5, 2, 26, 28
  04d0808  clrldi 3, 3, 32
  04d080c  lfsx 4, 28, 4
  04d0810  fsel 7, 8, 6, 7
  04d0814  fsel 6, 9, 5, 6
  04d0818  lfs 5, 4(3)
  04d081c  fcmpu 0, 7, 24
  04d0820  bt 1, 0x4d082c
  04d0824  fmr 4, 24
  04d0828  b 0x4d0944
  04d082c  fsubs 8, 6, 7
  04d0830  fadds 6, 6, 7
  04d0834  addic 3, 1, 16
  04d0838  li 6, 2
  04d083c  addic 4, 3, 236
  04d0840  addic 5, 3, 252
  04d0844  mtctr 6
  04d0848  fdivs 6, 8, 6
  04d084c  fmuls 7, 6, 6
  04d0850  stfs 6, 264(1)
  04d0854  stfs 6, 256(1)
  04d0858  stfs 6, 260(1)
  04d085c  stfs 6, 252(1)
  04d0860  lfs 9, 264(1)
  04d0864  lfs 10, 256(1)
  04d0868  lfs 11, 260(1)
  04d086c  fmuls 8, 7, 7
  04d0870  fmuls 10, 10, 7
  04d0874  fmuls 9, 9, 8
  04d0878  fmuls 6, 8, 8
  04d087c  fmuls 8, 11, 8
  04d0880  stfs 10, 256(1)
  04d0884  fmuls 7, 9, 7
  04d0888  stfs 8, 260(1)
  04d088c  stfs 7, 264(1)
  04d0890  lfs 7, 236(3)
  04d0894  fmuls 7, 7, 6
  04d0898  stfs 7, 252(3)
  04d089c  lfs 7, 4(4)
  04d08a0  addic 3, 3, 8
  04d08a4  addic 4, 4, 8
  04d08a8  fmuls 7, 7, 6
  04d08ac  stfs 7, 4(5)
  04d08b0  addic 5, 5, 8
  04d08b4  bdnz 0x4d0890
  04d08b8  li 5, 4
  04d08bc  ori 3, 1, 0
  04d08c0  mtctr 5
  04d08c4  lis 4, 115
  04d08c8  addic 5, 3, 252
  04d08cc  addic 4, 4, 22752
  04d08d0  ori 7, 5, 0
  04d08d4  lfs 6, 252(3)
  04d08d8  lfs 7, 0(4)
  04d08dc  fmuls 6, 6, 7
  04d08e0  lfs 7, 4(4)
  04d08e4  addic 4, 4, 8
  04d08e8  stfs 6, 252(3)
  04d08ec  lfs 6, 4(5)
  04d08f0  addic 3, 3, 8
  04d08f4  fmuls 6, 6, 7
  04d08f8  stfs 6, 4(5)
  04d08fc  addic 5, 5, 8
  04d0900  bdnz 0x4d08d4
  04d0904  fmr 6, 24
  04d0908  ori 3, 1, 0
  04d090c  mtctr 6
  04d0910  lfs 7, 252(3)
  04d0914  fadds 6, 6, 7
  04d0918  addic 3, 3, 16
  04d091c  lfs 7, 4(7)
  04d0920  lfs 8, 8(7)
  04d0924  lfs 9, 12(7)
  04d0928  addic 7, 7, 16
  04d092c  fadds 6, 6, 7
  04d0930  fadds 6, 6, 8
  04d0934  fadds 6, 6, 9
  04d0938  bdnz 0x4d0910
  04d093c  fadds 6, 6, 31
  04d0940  fmadds 4, 6, 4, 5
  04d0944  lis 3, 77
  04d0948  addi 3, 3, 1404
  04d094c  lfs 5, 12(3)
  04d0950  fcmpu 0, 4, 5
  04d0954  cror 6, 0, 2
  04d0958  bt 6, 0x4d0988
  04d095c  lis 3, 77
  04d0960  ori 29, 27, 6
  04d0964  addi 3, 3, 1404
  04d0968  lfs 4, 16(3)
  04d096c  fmuls 1, 1, 4
  04d0970  fmuls 2, 2, 4
  04d0974  fmuls 3, 3, 4
  04d0978  stfs 1, 0(30)
  04d097c  stfs 2, 4(30)
  04d0980  stfs 3, 8(30)
  04d0984  b 0x4d09c4
  04d0988  lis 3, 77
  04d098c  addi 3, 3, 1404
  04d0990  lfs 5, 16(3)
  04d0994  fcmpu 0, 4, 5
  04d0998  cror 6, 0, 2
  04d099c  bt 6, 0x4d09c4
  04d09a0  lis 3, 77
  04d09a4  addi 3, 3, 1404
  04d09a8  lfs 4, 20(3)
  04d09ac  fmuls 1, 1, 4
  04d09b0  fmuls 2, 2, 4
  04d09b4  fmuls 3, 3, 4
  04d09b8  stfs 1, 0(30)
  04d09bc  stfs 2, 4(30)
  04d09c0  stfs 3, 8(30)
  04d09c4  lis 3, 77
  04d09c8  lfs 1, 72(31)
  04d09cc  addi 3, 3, 1404
  04d09d0  lfs 2, 24(3)
  04d09d4  lfs 3, 28(3)
  04d09d8  fadds 2, 1, 2
  04d09dc  fsubs 5, 3, 1
  04d09e0  lfs 4, 32(3)
  04d09e4  fsubs 6, 4, 1
  04d09e8  fsubs 3, 3, 2
  04d09ec  fsub 7, 1, 5
  04d09f0  fsubs 4, 4, 2
  04d09f4  fsub 9, 2, 3
  04d09f8  fsel 1, 7, 5, 1
  04d09fc  lfs 5, 36(3)
  04d0a00  lfs 7, 40(3)
  04d0a04  fsel 2, 9, 3, 2
  04d0a08  fsub 3, 6, 1
  04d0a0c  fsub 9, 4, 2
  04d0a10  fsel 1, 3, 6, 1
  04d0a14  lfs 3, 44(3)
  04d0a18  lfs 6, 68(26)
  04d0a1c  lfs 8, 48(3)
  04d0a20  fsel 2, 9, 4, 2
  04d0a24  fmuls 4, 1, 1
  04d0a28  lfs 9, 64(26)
  04d0a2c  lwz 27, 72(26)
  04d0a30  lfs 30, 72(26)
  04d0a34  fmuls 10, 2, 2
  04d0a38  fmuls 11, 4, 1
  04d0a3c  fmuls 12, 10, 2
  04d0a40  fmuls 13, 4, 11
  04d0a44  fmadds 1, 11, 5, 1
  04d0a48  fmadds 2, 12, 5, 2
  04d0a4c  fmuls 11, 10, 12
  04d0a50  fmuls 5, 4, 13
  04d0a54  fmadds 1, 13, 7, 1
  04d0a58  fmuls 12, 10, 11
  04d0a5c  fmadds 2, 11, 7, 2
  04d0a60  fmuls 4, 4, 5
  04d0a64  fmadds 1, 5, 3, 1
  04d0a68  fmuls 5, 10, 12
  04d0a6c  fmadds 2, 12, 3, 2
  04d0a70  fmuls 3, 30, 30
  04d0a74  fmadds 1, 4, 8, 1
  04d0a78  fmadds 2, 5, 8, 2
  04d0a7c  fmuls 29, 6, 1
  04d0a80  fmuls 1, 9, 1
  04d0a84  fmadds 29, 9, 2, 29
  04d0a88  fmsubs 1, 6, 2, 1
  04d0a8c  fmadds 3, 29, 29, 3
  04d0a90  fabs 4, 1
  04d0a94  fsqrts 2, 3
  04d0a98  lfs 3, 40(26)
  04d0a9c  stfs 1, 172(1)
  04d0aa0  lfs 28, 64(31)
  04d0aa4  stfs 3, 24(31)
  04d0aa8  lwz 3, 172(1)
  04d0aac  lfs 1, 172(1)
  04d0ab0  fabs 3, 1
  04d0ab4  rlwinm 3, 3, 3, 29, 29
  04d0ab8  fabs 5, 2
  04d0abc  stfs 2, 168(1)
  04d0ac0  fsubs 1, 5, 4
  04d0ac4  stfs 1, 176(1)
  04d0ac8  lwz 4, 168(1)
  04d0acc  lfs 1, 168(1)
  04d0ad0  lwz 5, 176(1)
  04d0ad4  lfs 2, 176(1)
  04d0ad8  fabs 1, 1
  04d0adc  rlwimi 3, 5, 2, 30, 30
  04d0ae0  fsub 6, 2, 24
  04d0ae4  fsub 2, 2, 24
  04d0ae8  rlwimi 3, 4, 4, 28, 28
  04d0aec  ori 5, 28, 0
  04d0af0  slwi 4, 3, 2
  04d0af4  rlwimi 5, 3, 2, 26, 28
  04d0af8  clrldi 3, 5, 32
  04d0afc  fsel 4, 6, 1, 4
  04d0b00  lfsx 1, 28, 4
  04d0b04  fsel 3, 2, 3, 5
  04d0b08  lfs 2, 4(3)
  04d0b0c  fcmpu 0, 4, 24
  04d0b10  bt 1, 0x4d0b1c
  04d0b14  fmr 1, 24
  04d0b18  b 0x4d0c34
  04d0b1c  fsubs 5, 3, 4
  04d0b20  fadds 3, 3, 4
  04d0b24  addic 3, 1, 16
  04d0b28  li 7, 2
  04d0b2c  addic 4, 3, 204
  04d0b30  addic 5, 3, 220
  04d0b34  mtctr 7
  04d0b38  fdivs 3, 5, 3
  04d0b3c  fmuls 4, 3, 3
  04d0b40  stfs 3, 232(1)
  04d0b44  stfs 3, 224(1)
  04d0b48  stfs 3, 228(1)
  04d0b4c  stfs 3, 220(1)
  04d0b50  lfs 6, 232(1)
  04d0b54  lfs 7, 224(1)
  04d0b58  lfs 8, 228(1)
  04d0b5c  fmuls 5, 4, 4
  04d0b60  fmuls 7, 7, 4
  04d0b64  fmuls 6, 6, 5
  04d0b68  fmuls 3, 5, 5
  04d0b6c  fmuls 5, 8, 5
  04d0b70  stfs 7, 224(1)
  04d0b74  fmuls 4, 6, 4
  04d0b78  stfs 5, 228(1)
  04d0b7c  stfs 4, 232(1)
  04d0b80  lfs 4, 204(3)
  04d0b84  fmuls 4, 4, 3
  04d0b88  stfs 4, 220(3)
  04d0b8c  lfs 4, 4(4)
  04d0b90  addic 3, 3, 8
  04d0b94  addic 4, 4, 8
  04d0b98  fmuls 4, 4, 3
  04d0b9c  stfs 4, 4(5)
  04d0ba0  addic 5, 5, 8
  04d0ba4  bdnz 0x4d0b80
  04d0ba8  li 5, 4
  04d0bac  ori 3, 1, 0
  04d0bb0  mtctr 5
  04d0bb4  lis 4, 115
  04d0bb8  addic 5, 3, 220
  04d0bbc  addic 4, 4, 22752
  04d0bc0  ori 6, 5, 0
  04d0bc4  lfs 3, 220(3)
  04d0bc8  lfs 4, 0(4)
  04d0bcc  fmuls 3, 3, 4
  04d0bd0  lfs 4, 4(4)
  04d0bd4  addic 4, 4, 8
  04d0bd8  stfs 3, 220(3)
  04d0bdc  lfs 3, 4(5)
  04d0be0  addic 3, 3, 8
  04d0be4  fmuls 3, 3, 4
  04d0be8  stfs 3, 4(5)
  04d0bec  addic 5, 5, 8
  04d0bf0  bdnz 0x4d0bc4
  04d0bf4  fmr 3, 24
  04d0bf8  ori 3, 1, 0
  04d0bfc  mtctr 7
  04d0c00  lfs 4, 220(3)
  04d0c04  fadds 3, 3, 4
  04d0c08  addic 3, 3, 16
  04d0c0c  lfs 4, 4(6)
  04d0c10  lfs 5, 8(6)
  04d0c14  lfs 6, 12(6)
  04d0c18  addic 6, 6, 16
  04d0c1c  fadds 3, 3, 4
  04d0c20  fadds 3, 3, 5
  04d0c24  fadds 3, 3, 6
  04d0c28  bdnz 0x4d0c00
  04d0c2c  fadds 3, 3, 31
  04d0c30  fmadds 1, 3, 1, 2
  04d0c34  fneg 1, 1
  04d0c38  fmr 2, 28
  04d0c3c  bl 0x5025e0
  04d0c40  nop
  04d0c44  lis 3, 77
  04d0c48  fsub 3, 24, 1
  04d0c4c  fabs 2, 1
  04d0c50  addi 3, 3, 1404
  04d0c54  lfs 23, 52(3)
  04d0c58  lfs 22, 56(3)
  04d0c5c  fsel 1, 3, 22, 23
  04d0c60  fcmpu 0, 1, 2
  04d0c64  cror 6, 0, 2
  04d0c68  bt 6, 0x4d0c74
  04d0c6c  fmr 1, 2
  04d0c70  b 0x4d0c88
  04d0c74  fneg 2, 2
  04d0c78  fcmpu 0, 1, 2
  04d0c7c  cror 6, 1, 2
  04d0c80  bt 6, 0x4d0c88
  04d0c84  fmr 1, 2
  04d0c88  fmr 2, 1
  04d0c8c  fmr 1, 28
  04d0c90  bl 0x502578
  04d0c94  nop
  04d0c98  fabs 2, 30
  04d0c9c  fabs 3, 29
  04d0ca0  stfs 29, 160(1)
  04d0ca4  stfs 1, 64(31)
  04d0ca8  lfs 28, 68(31)
  04d0cac  fsubs 4, 2, 3
  04d0cb0  stfs 4, 164(1)
  04d0cb4  lwz 3, 160(1)
  04d0cb8  lfs 1, 160(1)
  04d0cbc  lwz 4, 164(1)
  04d0cc0  rlwinm 3, 3, 3, 29, 29
  04d0cc4  lfs 4, 164(1)
  04d0cc8  fabs 1, 1
  04d0ccc  rlwimi 3, 4, 2, 30, 30
  04d0cd0  fsub 5, 4, 24
  04d0cd4  fsub 4, 4, 24
  04d0cd8  rlwimi 3, 27, 4, 28, 28
  04d0cdc  ori 4, 28, 0
  04d0ce0  rlwimi 4, 3, 2, 26, 28
  04d0ce4  slwi 3, 3, 2
  04d0ce8  clrldi 4, 4, 32
  04d0cec  fsel 3, 5, 2, 3
  04d0cf0  lfsx 30, 28, 3
  04d0cf4  fsel 2, 4, 1, 2
  04d0cf8  lfs 1, 4(4)
  04d0cfc  fcmpu 0, 3, 24
  04d0d00  bt 1, 0x4d0d0c
  04d0d04  fmr 31, 24
  04d0d08  b 0x4d0e24
  04d0d0c  fsubs 4, 2, 3
  04d0d10  fadds 2, 2, 3
  04d0d14  addic 3, 1, 16
  04d0d18  li 6, 2
  04d0d1c  addic 4, 3, 172
  04d0d20  addic 5, 3, 188
  04d0d24  mtctr 6
  04d0d28  fdivs 2, 4, 2
  04d0d2c  fmuls 3, 2, 2
  04d0d30  stfs 2, 200(1)
  04d0d34  stfs 2, 192(1)
  04d0d38  stfs 2, 196(1)
  04d0d3c  stfs 2, 188(1)
  04d0d40  lfs 5, 200(1)
  04d0d44  lfs 6, 192(1)
  04d0d48  lfs 7, 196(1)
  04d0d4c  fmuls 4, 3, 3
  04d0d50  fmuls 6, 6, 3
  04d0d54  fmuls 5, 5, 4
  04d0d58  fmuls 2, 4, 4
  04d0d5c  fmuls 4, 7, 4
  04d0d60  stfs 6, 192(1)
  04d0d64  fmuls 3, 5, 3
  04d0d68  stfs 4, 196(1)
  04d0d6c  stfs 3, 200(1)
  04d0d70  lfs 3, 172(3)
  04d0d74  fmuls 3, 3, 2
  04d0d78  stfs 3, 188(3)
  04d0d7c  lfs 3, 4(4)
  04d0d80  addic 3, 3, 8
  04d0d84  addic 4, 4, 8
  04d0d88  fmuls 3, 3, 2
  04d0d8c  stfs 3, 4(5)
  04d0d90  addic 5, 5, 8
  04d0d94  bdnz 0x4d0d70
  04d0d98  li 5, 4
  04d0d9c  ori 3, 1, 0
  04d0da0  mtctr 5
  04d0da4  lis 4, 115
  04d0da8  addic 5, 3, 188
  04d0dac  addic 4, 4, 22752
  04d0db0  ori 7, 5, 0
  04d0db4  lfs 2, 188(3)
  04d0db8  lfs 3, 0(4)
  04d0dbc  fmuls 2, 2, 3
  04d0dc0  lfs 3, 4(4)
  04d0dc4  addic 4, 4, 8
  04d0dc8  stfs 2, 188(3)
  04d0dcc  lfs 2, 4(5)
  04d0dd0  addic 3, 3, 8
  04d0dd4  fmuls 2, 2, 3
  04d0dd8  stfs 2, 4(5)
  04d0ddc  addic 5, 5, 8
  04d0de0  bdnz 0x4d0db4
  04d0de4  fmr 2, 24
  04d0de8  ori 3, 1, 0
  04d0dec  mtctr 6
  04d0df0  lfs 3, 188(3)
  04d0df4  fadds 2, 2, 3
  04d0df8  addic 3, 3, 16
  04d0dfc  lfs 3, 4(7)
  04d0e00  lfs 4, 8(7)
  04d0e04  lfs 5, 12(7)
  04d0e08  addic 7, 7, 16
  04d0e0c  fadds 2, 2, 3
  04d0e10  fadds 2, 2, 4
  04d0e14  fadds 2, 2, 5
  04d0e18  bdnz 0x4d0df0
  04d0e1c  fadds 31, 2, 31
  04d0e20  fmadds 31, 31, 30, 1
  04d0e24  fmr 1, 31
  04d0e28  fmr 2, 28
  04d0e2c  bl 0x5025e0
  04d0e30  nop
  04d0e34  fsub 31, 24, 1
  04d0e38  fabs 1, 1
  04d0e3c  fsel 31, 31, 22, 23
  04d0e40  fcmpu 0, 31, 1
  04d0e44  cror 6, 0, 2
  04d0e48  bt 6, 0x4d0e54
  04d0e4c  fmr 31, 1
  04d0e50  b 0x4d0e68
  04d0e54  fneg 1, 1
  04d0e58  fcmpu 0, 31, 1
  04d0e5c  cror 6, 1, 2
  04d0e60  bt 6, 0x4d0e68
  04d0e64  fmr 31, 1
  04d0e68  fmr 1, 28
  04d0e6c  fmr 2, 31
  04d0e70  bl 0x502578
  04d0e74  nop
  04d0e78  stfs 1, 68(31)
  04d0e7c  lfs 1, 16(31)
  04d0e80  rlwinm 3, 29, 0, 30, 30
  04d0e84  fsubs 1, 1, 27
  04d0e88  cmpwi 3, 0
  04d0e8c  stfs 1, 0(30)
  04d0e90  lfs 1, 20(31)
  04d0e94  fsubs 1, 1, 26
  04d0e98  stfs 1, 4(30)
  04d0e9c  lfs 1, 24(31)
  04d0ea0  fsubs 1, 1, 25
  04d0ea4  stfs 1, 8(30)
  04d0ea8  lfs 1, 28(31)
  04d0eac  stfs 1, 12(30)
  04d0eb0  bt 2, 0x4d0eb8
  04d0eb4  stw 25, 8(30)
  04d0eb8  ori 3, 29, 0
  04d0ebc  ld 0, 448(1)
  04d0ec0  mtlr 0
  04d0ec4  lfd 22, 352(1)
  04d0ec8  lfd 23, 360(1)
  04d0ecc  lfd 24, 368(1)
  04d0ed0  lfd 25, 376(1)
  04d0ed4  lfd 26, 384(1)
  04d0ed8  lfd 27, 392(1)
  04d0edc  lfd 28, 400(1)
  04d0ee0  lfd 29, 408(1)
  04d0ee4  lfd 30, 416(1)
  04d0ee8  lfd 31, 424(1)
  04d0eec  ld 25, 296(1)
  04d0ef0  ld 26, 304(1)
  04d0ef4  ld 27, 312(1)
  04d0ef8  ld 28, 320(1)
  04d0efc  ld 29, 328(1)
  04d0f00  ld 30, 336(1)
  04d0f04  ld 31, 344(1)
  04d0f08  addi 1, 1, 432
  04d0f0c  blr

FUN_004d0f18:   # 0x4d0f18, 0x78 bytes
  04d0f18  lis 6, 77
  04d0f1c  cmpwi 5, 0
  04d0f20  addi 8, 6, 3856
  04d0f24  li 6, 0
  04d0f28  li 7, -1
  04d0f2c  lfs 4, 0(8)
  04d0f30  bf 1, 0x4d0f88
  04d0f34  lfs 2, 16(3)
  04d0f38  lfs 1, 20(3)
  04d0f3c  slwi 3, 6, 4
  04d0f40  addc 3, 3, 4
  04d0f44  clrldi 3, 3, 32
  04d0f48  lfs 3, 4(3)
  04d0f4c  lfs 5, 0(3)
  04d0f50  fsubs 3, 1, 3
  04d0f54  fsubs 5, 2, 5
  04d0f58  fmuls 3, 3, 3
  04d0f5c  fmadds 3, 5, 5, 3
  04d0f60  fsqrts 3, 3
  04d0f64  fcmpu 0, 4, 3
  04d0f68  cror 6, 0, 2
  04d0f6c  bt 6, 0x4d0f78
  04d0f70  fmr 4, 3
  04d0f74  ori 7, 6, 0
  04d0f78  addic 6, 6, 1
  04d0f7c  extsw 6, 6
  04d0f80  cmpw 6, 5
  04d0f84  bt 0, 0x4d0f3c
  04d0f88  ori 3, 7, 0
  04d0f8c  blr

FUN_004d0fd0:   # 0x4d0fd0, 0x1040 bytes
  04d0fd0  stdu 1, -400(1)
  04d0fd4  mflr 0
  04d0fd8  std 0, 416(1)
  04d0fdc  stfd 18, 288(1)
  04d0fe0  stfd 19, 296(1)
  04d0fe4  stfd 20, 304(1)
  04d0fe8  stfd 21, 312(1)
  04d0fec  stfd 22, 320(1)
  04d0ff0  stfd 23, 328(1)
  04d0ff4  stfd 24, 336(1)
  04d0ff8  stfd 25, 344(1)
  04d0ffc  stfd 26, 352(1)
  04d1000  stfd 27, 360(1)
  04d1004  stfd 28, 368(1)
  04d1008  stfd 29, 376(1)
  04d100c  stfd 30, 384(1)
  04d1010  stfd 31, 392(1)
  04d1014  std 23, 216(1)
  04d1018  std 30, 272(1)
  04d101c  lis 23, 77
  04d1020  std 31, 280(1)
  04d1024  ori 30, 4, 0
  04d1028  ori 31, 3, 0
  04d102c  std 29, 264(1)
  04d1030  std 28, 256(1)
  04d1034  std 27, 248(1)
  04d1038  std 26, 240(1)
  04d103c  std 25, 232(1)
  04d1040  std 24, 224(1)
  04d1044  std 22, 208(1)
  04d1048  addi 23, 23, 3984
  04d104c  li 26, 0
  04d1050  lfs 29, 0(23)
  04d1054  ori 22, 26, 0
  04d1058  fmr 4, 29
  04d105c  ori 3, 22, 0
  04d1060  ori 25, 3, 0
  04d1064  ori 24, 25, 0
  04d1068  ori 29, 5, 0
  04d106c  ori 28, 6, 0
  04d1070  stw 24, 12(6)
  04d1074  stw 24, 8(6)
  04d1078  stw 24, 4(6)
  04d107c  stw 24, 0(6)
  04d1080  lfs 25, 20(5)
  04d1084  lfs 26, 16(5)
  04d1088  fmr 9, 25
  04d108c  fmr 8, 26
  04d1090  lfs 24, 24(5)
  04d1094  fmr 3, 4
  04d1098  fmr 10, 24
  04d109c  lhz 4, 92(6)
  04d10a0  ori 27, 7, 0
  04d10a4  extsh 4, 4
  04d10a8  cmpwi 4, -1
  04d10ac  fsubs 1, 9, 31
  04d10b0  fsubs 5, 8, 31
  04d10b4  fmr 2, 3
  04d10b8  fsubs 6, 10, 31
  04d10bc  fmuls 1, 1, 1
  04d10c0  fmadds 1, 5, 5, 1
  04d10c4  fmadds 30, 6, 6, 1
  04d10c8  fsqrts 30, 30
  04d10cc  bt 2, 0x4d128c
  04d10d0  lis 3, 165
  04d10d4  sldi 4, 4, 2
  04d10d8  lfs 1, 4(23)
  04d10dc  addic 5, 3, 7136
  04d10e0  ori 3, 26, 0
  04d10e4  li 26, -1
  04d10e8  lwzx 24, 5, 4
  04d10ec  lwz 4, 0(24)
  04d10f0  cmpwi 4, 0
  04d10f4  bf 1, 0x4d113c
  04d10f8  ori 5, 24, 0
  04d10fc  lfs 2, 20(5)
  04d1100  lfs 3, 16(5)
  04d1104  fsubs 2, 25, 2
  04d1108  fsubs 3, 26, 3
  04d110c  fmuls 2, 2, 2
  04d1110  fmadds 2, 3, 3, 2
  04d1114  fsqrts 2, 2
  04d1118  fcmpu 0, 1, 2
  04d111c  cror 6, 0, 2
  04d1120  bt 6, 0x4d112c
  04d1124  fmr 1, 2
  04d1128  ori 26, 3, 0
  04d112c  addic 3, 3, 1
  04d1130  addic 5, 5, 16
  04d1134  cmpw 3, 4
  04d1138  bt 0, 0x4d10fc
  04d113c  ori 6, 4, 0
  04d1140  addic 3, 1, 112
  04d1144  addic 4, 29, 16
  04d1148  addic 5, 24, 16
  04d114c  extsw 6, 6
  04d1150  bl 0x105548
  04d1154  nop
  04d1158  cmpwi 3, 0
  04d115c  bf 2, 0x4d11b4
  04d1160  lfs 25, 20(29)
  04d1164  lfs 26, 16(29)
  04d1168  lfs 1, 116(1)
  04d116c  lfs 2, 112(1)
  04d1170  fsubs 1, 1, 25
  04d1174  fsubs 2, 2, 26
  04d1178  lfs 24, 24(29)
  04d117c  lfs 3, 120(1)
  04d1180  fsubs 3, 3, 24
  04d1184  fmuls 4, 1, 1
  04d1188  fmadds 4, 2, 2, 4
  04d118c  fmadds 5, 3, 3, 4
  04d1190  lfs 4, 8(23)
  04d1194  fsqrts 5, 5
  04d1198  fcmpu 0, 5, 29
  04d119c  bt 2, 0x4d11b0
  04d11a0  fmuls 4, 5, 5
  04d11a4  lfs 5, 8(27)
  04d11a8  fneg 5, 5
  04d11ac  fdivs 4, 5, 4
  04d11b0  b 0x4d120c
  04d11b4  lfs 25, 20(29)
  04d11b8  lfs 26, 16(29)
  04d11bc  lfs 1, 116(1)
  04d11c0  lfs 2, 112(1)
  04d11c4  fsubs 1, 1, 25
  04d11c8  lfs 24, 24(29)
  04d11cc  fsubs 2, 2, 26
  04d11d0  lfs 3, 120(1)
  04d11d4  fsubs 3, 3, 24
  04d11d8  lfs 5, 12(23)
  04d11dc  fmuls 4, 1, 1
  04d11e0  fmadds 4, 2, 2, 4
  04d11e4  fmadds 4, 3, 3, 4
  04d11e8  fsqrts 6, 4
  04d11ec  lfs 4, 16(23)
  04d11f0  fadds 5, 6, 5
  04d11f4  fcmpu 0, 5, 30
  04d11f8  cror 6, 0, 2
  04d11fc  bt 6, 0x4d120c
  04d1200  lfs 4, 8(27)
  04d1204  fmuls 4, 4, 5
  04d1208  fmuls 4, 4, 5
  04d120c  fmuls 5, 1, 1
  04d1210  lfs 6, 0(28)
  04d1214  fmr 10, 24
  04d1218  lfs 7, 4(28)
  04d121c  fmr 9, 25
  04d1220  lfs 11, 8(28)
  04d1224  fmr 8, 26
  04d1228  fmadds 5, 2, 2, 5
  04d122c  fmadds 5, 3, 3, 5
  04d1230  fsqrts 5, 5
  04d1234  fdivs 4, 4, 5
  04d1238  fsub 12, 29, 5
  04d123c  fsub 13, 29, 5
  04d1240  fsub 0, 29, 5
  04d1244  fsub 28, 5, 29
  04d1248  fsub 27, 5, 29
  04d124c  fsub 5, 5, 29
  04d1250  fmuls 3, 4, 3
  04d1254  fmuls 1, 4, 1
  04d1258  fmuls 2, 4, 2
  04d125c  fsel 4, 12, 29, 3
  04d1260  fsel 12, 13, 29, 1
  04d1264  fsel 13, 0, 29, 2
  04d1268  fsel 4, 28, 4, 3
  04d126c  fsel 3, 27, 12, 1
  04d1270  fsel 2, 5, 13, 2
  04d1274  fadds 4, 11, 4
  04d1278  fadds 3, 7, 3
  04d127c  fadds 2, 6, 2
  04d1280  stfs 4, 8(28)
  04d1284  stfs 3, 4(28)
  04d1288  stfs 2, 0(28)
  04d128c  fmr 27, 10
  04d1290  fmr 28, 9
  04d1294  fmr 0, 8
  04d1298  lwz 4, 0(27)
  04d129c  fmr 7, 4
  04d12a0  cmpwi 4, 0
  04d12a4  fmr 6, 3
  04d12a8  fmr 5, 2
  04d12ac  lfs 1, 0(27)
  04d12b0  fmr 13, 27
  04d12b4  fmr 12, 28
  04d12b8  fmr 11, 0
  04d12bc  bt 2, 0x4d1334
  04d12c0  lfs 5, 36(28)
  04d12c4  lfs 6, 32(28)
  04d12c8  fmuls 7, 5, 5
  04d12cc  lfs 23, 40(28)
  04d12d0  fmadds 7, 6, 6, 7
  04d12d4  fmadds 7, 23, 23, 7
  04d12d8  fsqrts 7, 7
  04d12dc  fdivs 1, 1, 7
  04d12e0  fsub 22, 29, 7
  04d12e4  fsub 21, 29, 7
  04d12e8  fsub 20, 29, 7
  04d12ec  fsub 19, 7, 29
  04d12f0  fsub 18, 7, 29
  04d12f4  fsub 7, 7, 29
  04d12f8  fmuls 23, 23, 1
  04d12fc  fmuls 5, 5, 1
  04d1300  fmuls 1, 6, 1
  04d1304  fsel 6, 22, 29, 23
  04d1308  fsel 22, 21, 29, 5
  04d130c  fsel 21, 20, 29, 1
  04d1310  fsel 6, 19, 6, 23
  04d1314  fsel 5, 18, 22, 5
  04d1318  fsel 1, 7, 21, 1
  04d131c  fadds 7, 4, 6
  04d1320  fadds 6, 3, 5
  04d1324  fadds 5, 2, 1
  04d1328  stfs 7, 8(28)
  04d132c  stfs 6, 4(28)
  04d1330  stfs 5, 0(28)
  04d1334  lwz 5, 80(28)
  04d1338  fmr 3, 7
  04d133c  cmpw 5, 29
  04d1340  fmr 2, 6
  04d1344  cmpwi 1, 5, 0
  04d1348  fmr 1, 5
  04d134c  bf 2, 0x4d13cc
  04d1350  lfs 1, 20(28)
  04d1354  lfs 2, 16(28)
  04d1358  fmuls 3, 1, 1
  04d135c  lfs 4, 24(28)
  04d1360  lfs 8, 4(27)
  04d1364  fmadds 3, 2, 2, 3
  04d1368  fmadds 3, 4, 4, 3
  04d136c  fsqrts 3, 3
  04d1370  fdivs 8, 8, 3
  04d1374  fsub 9, 29, 3
  04d1378  fsub 10, 29, 3
  04d137c  fsub 11, 29, 3
  04d1380  fsub 12, 3, 29
  04d1384  fsub 13, 3, 29
  04d1388  fsub 3, 3, 29
  04d138c  fmuls 4, 8, 4
  04d1390  fmuls 1, 8, 1
  04d1394  fmuls 2, 8, 2
  04d1398  fsel 8, 9, 29, 4
  04d139c  fsel 9, 10, 29, 1
  04d13a0  fsel 10, 11, 29, 2
  04d13a4  fsel 4, 12, 8, 4
  04d13a8  fsel 1, 13, 9, 1
  04d13ac  fsel 2, 3, 10, 2
  04d13b0  fadds 3, 7, 4
  04d13b4  fadds 1, 6, 1
  04d13b8  fadds 2, 5, 2
  04d13bc  stfs 3, 8(28)
  04d13c0  stfs 1, 4(28)
  04d13c4  stfs 2, 0(28)
  04d13c8  b 0x4d1918
  04d13cc  lhz 4, 92(28)
  04d13d0  extsh 4, 4
  04d13d4  cmpwi 4, -1
  04d13d8  bt 2, 0x4d162c
  04d13dc  ori 4, 26, 0
  04d13e0  lwz 6, 0(24)
  04d13e4  li 9, 0
  04d13e8  addic 8, 4, 1
  04d13ec  sldi 10, 4, 4
  04d13f0  extsw 11, 8
  04d13f4  extsw 7, 6
  04d13f8  addc 10, 24, 10
  04d13fc  subc 11, 11, 7
  04d1400  clrldi 10, 10, 32
  04d1404  subc 8, 8, 9
  04d1408  sradi 11, 11, 63
  04d140c  and 8, 11, 8
  04d1410  lfs 4, 20(10)
  04d1414  addc 8, 9, 8
  04d1418  fsubs 4, 4, 31
  04d141c  lfs 0, 16(10)
  04d1420  sldi 9, 8, 4
  04d1424  lfs 28, 24(10)
  04d1428  fsubs 0, 0, 31
  04d142c  addc 9, 24, 9
  04d1430  fsubs 28, 28, 31
  04d1434  clrldi 9, 9, 32
  04d1438  lfs 27, 20(9)
  04d143c  fmuls 4, 4, 4
  04d1440  lfs 23, 16(9)
  04d1444  fsubs 27, 27, 31
  04d1448  fsubs 23, 23, 31
  04d144c  lfs 22, 24(9)
  04d1450  fsubs 22, 22, 31
  04d1454  fmadds 4, 0, 0, 4
  04d1458  fmuls 0, 27, 27
  04d145c  fmadds 4, 28, 28, 4
  04d1460  fmadds 0, 23, 23, 0
  04d1464  fsqrts 4, 4
  04d1468  fmadds 0, 22, 22, 0
  04d146c  fsqrts 0, 0
  04d1470  fcmpu 0, 4, 0
  04d1474  cror 2, 1, 2
  04d1478  bt 2, 0x4d1484
  04d147c  ori 4, 8, 0
  04d1480  fmr 4, 0
  04d1484  addic 8, 26, -1
  04d1488  addic 26, 6, -1
  04d148c  li 6, 0
  04d1490  extsw 9, 8
  04d1494  ori 10, 3, 0
  04d1498  subc 3, 9, 6
  04d149c  subc 6, 26, 8
  04d14a0  sradi 3, 3, 63
  04d14a4  and 3, 3, 6
  04d14a8  addc 3, 8, 3
  04d14ac  sldi 6, 3, 4
  04d14b0  addc 6, 24, 6
  04d14b4  clrldi 6, 6, 32
  04d14b8  lfs 0, 20(6)
  04d14bc  lfs 28, 16(6)
  04d14c0  fsubs 0, 0, 31
  04d14c4  lfs 27, 24(6)
  04d14c8  fsubs 28, 28, 31
  04d14cc  fsubs 31, 27, 31
  04d14d0  cmpwi 6, 10, 0
  04d14d4  fmuls 0, 0, 0
  04d14d8  fmadds 0, 28, 28, 0
  04d14dc  fmadds 0, 31, 31, 0
  04d14e0  fsqrts 0, 0
  04d14e4  fcmpu 0, 4, 0
  04d14e8  cror 2, 1, 2
  04d14ec  bt 2, 0x4d14f4
  04d14f0  ori 4, 3, 0
  04d14f4  addic 3, 4, 1
  04d14f8  addic 6, 4, -1
  04d14fc  extsw 9, 3
  04d1500  li 8, 0
  04d1504  subc 7, 9, 7
  04d1508  li 10, 0
  04d150c  extsw 11, 6
  04d1510  subc 3, 3, 8
  04d1514  sradi 7, 7, 63
  04d1518  subc 10, 11, 10
  04d151c  and 3, 7, 3
  04d1520  subc 9, 26, 6
  04d1524  sradi 7, 10, 63
  04d1528  addc 3, 8, 3
  04d152c  and 7, 7, 9
  04d1530  sldi 3, 3, 4
  04d1534  addc 6, 6, 7
  04d1538  addc 3, 24, 3
  04d153c  sldi 6, 6, 4
  04d1540  clrldi 3, 3, 32
  04d1544  addc 6, 24, 6
  04d1548  sldi 4, 4, 4
  04d154c  clrldi 6, 6, 32
  04d1550  lfs 4, 16(3)
  04d1554  lfs 0, 20(3)
  04d1558  lfs 31, 24(3)
  04d155c  lfs 28, 16(6)
  04d1560  lfs 27, 20(6)
  04d1564  addc 3, 24, 4
  04d1568  fadds 4, 4, 28
  04d156c  lfs 28, 24(6)
  04d1570  fadds 0, 0, 27
  04d1574  clrldi 3, 3, 32
  04d1578  fadds 31, 31, 28
  04d157c  lfs 27, 16(3)
  04d1580  lfs 23, 20(3)
  04d1584  lfs 22, 24(3)
  04d1588  lfs 28, 20(23)
  04d158c  fadds 4, 4, 27
  04d1590  fadds 0, 0, 23
  04d1594  fadds 31, 31, 22
  04d1598  bf 26, 0x4d162c
  04d159c  fmsubs 1, 0, 28, 9
  04d15a0  fmsubs 2, 4, 28, 8
  04d15a4  fmsubs 3, 31, 28, 10
  04d15a8  lfs 0, 8(27)
  04d15ac  fmuls 4, 1, 1
  04d15b0  fmr 11, 26
  04d15b4  fmr 12, 25
  04d15b8  fmadds 4, 2, 2, 4
  04d15bc  fmr 13, 24
  04d15c0  fmadds 4, 3, 3, 4
  04d15c4  fsqrts 4, 4
  04d15c8  fmuls 31, 4, 4
  04d15cc  fsub 28, 29, 4
  04d15d0  fsub 27, 29, 4
  04d15d4  fsub 26, 4, 29
  04d15d8  fsub 25, 4, 29
  04d15dc  fmuls 0, 31, 0
  04d15e0  fsub 31, 29, 4
  04d15e4  fmuls 0, 0, 4
  04d15e8  fdivs 0, 0, 4
  04d15ec  fsub 4, 4, 29
  04d15f0  fmuls 3, 0, 3
  04d15f4  fmuls 1, 0, 1
  04d15f8  fmuls 2, 0, 2
  04d15fc  fsel 0, 31, 29, 3
  04d1600  fsel 31, 28, 29, 1
  04d1604  fsel 28, 27, 29, 2
  04d1608  fsel 3, 26, 0, 3
  04d160c  fsel 1, 25, 31, 1
  04d1610  fsel 4, 4, 28, 2
  04d1614  fadds 3, 7, 3
  04d1618  fadds 2, 6, 1
  04d161c  fadds 1, 5, 4
  04d1620  stfs 3, 8(28)
  04d1624  stfs 2, 4(28)
  04d1628  stfs 1, 0(28)
  04d162c  fmr 27, 13
  04d1630  fmr 28, 12
  04d1634  fmr 0, 11
  04d1638  fmr 25, 3
  04d163c  fmr 26, 2
  04d1640  fmr 31, 1
  04d1644  bt 6, 0x4d16e4
  04d1648  lfs 5, 20(5)
  04d164c  lfs 4, 16(5)
  04d1650  fsubs 5, 5, 9
  04d1654  lfs 6, 24(5)
  04d1658  fsubs 4, 4, 8
  04d165c  fsubs 6, 6, 10
  04d1660  fmuls 7, 5, 5
  04d1664  fmadds 7, 4, 4, 7
  04d1668  fmadds 7, 6, 6, 7
  04d166c  fsqrts 7, 7
  04d1670  fcmpu 0, 30, 7
  04d1674  cror 6, 0, 2
  04d1678  bt 6, 0x4d16e4
  04d167c  fmuls 31, 7, 7
  04d1680  lfs 26, 4(27)
  04d1684  fsub 25, 29, 7
  04d1688  fsub 24, 29, 7
  04d168c  fsub 23, 7, 29
  04d1690  fsub 22, 7, 29
  04d1694  fmuls 31, 31, 26
  04d1698  fsub 26, 29, 7
  04d169c  fmuls 31, 31, 7
  04d16a0  fdivs 31, 31, 7
  04d16a4  fsub 7, 7, 29
  04d16a8  fmuls 6, 31, 6
  04d16ac  fmuls 5, 31, 5
  04d16b0  fmuls 4, 31, 4
  04d16b4  fsel 31, 26, 29, 6
  04d16b8  fsel 26, 25, 29, 5
  04d16bc  fsel 25, 24, 29, 4
  04d16c0  fsel 6, 23, 31, 6
  04d16c4  fsel 26, 22, 26, 5
  04d16c8  fsel 31, 7, 25, 4
  04d16cc  fadds 25, 3, 6
  04d16d0  fadds 26, 2, 26
  04d16d4  fadds 31, 1, 31
  04d16d8  stfs 25, 8(28)
  04d16dc  stfs 26, 4(28)
  04d16e0  stfs 31, 0(28)
  04d16e4  lwz 3, 84(28)
  04d16e8  fmr 6, 25
  04d16ec  cmpwi 3, 0
  04d16f0  fmr 5, 26
  04d16f4  fmr 4, 31
  04d16f8  bt 2, 0x4d1798
  04d16fc  lfs 1, 4(3)
  04d1700  lfs 2, 0(3)
  04d1704  fsubs 1, 1, 9
  04d1708  fsubs 8, 2, 8
  04d170c  lfs 2, 8(3)
  04d1710  fsubs 2, 2, 10
  04d1714  fmuls 3, 1, 1
  04d1718  fmadds 3, 8, 8, 3
  04d171c  fmadds 3, 2, 2, 3
  04d1720  fsqrts 3, 3
  04d1724  fcmpu 0, 30, 3
  04d1728  cror 6, 0, 2
  04d172c  bt 6, 0x4d1798
  04d1730  fmuls 4, 3, 3
  04d1734  lfs 5, 4(27)
  04d1738  fsub 6, 29, 3
  04d173c  fsub 7, 29, 3
  04d1740  fsub 9, 3, 29
  04d1744  fsub 10, 3, 29
  04d1748  fmuls 4, 4, 5
  04d174c  fsub 5, 29, 3
  04d1750  fmuls 4, 4, 3
  04d1754  fdivs 4, 4, 3
  04d1758  fsub 3, 3, 29
  04d175c  fmuls 2, 4, 2
  04d1760  fmuls 1, 4, 1
  04d1764  fmuls 4, 4, 8
  04d1768  fsel 5, 5, 29, 2
  04d176c  fsel 6, 6, 29, 1
  04d1770  fsel 7, 7, 29, 4
  04d1774  fsel 2, 9, 5, 2
  04d1778  fsel 5, 10, 6, 1
  04d177c  fsel 4, 3, 7, 4
  04d1780  fadds 6, 25, 2
  04d1784  fadds 5, 26, 5
  04d1788  fadds 4, 31, 4
  04d178c  stfs 6, 8(28)
  04d1790  stfs 5, 4(28)
  04d1794  stfs 4, 0(28)
  04d1798  addic 4, 30, 1
  04d179c  ori 3, 22, 0
  04d17a0  cmpwi 4, 0
  04d17a4  bf 1, 0x4d1918
  04d17a8  lis 5, 151
  04d17ac  addic 5, 5, -25376
  04d17b0  cmpw 30, 3
  04d17b4  bf 1, 0x4d17c0
  04d17b8  lwz 6, 0(31)
  04d17bc  b 0x4d17c4
  04d17c0  lwz 6, 8320(5)
  04d17c4  lbz 8, 32(6)
  04d17c8  ori 7, 22, 0
  04d17cc  cmpwi 8, 128
  04d17d0  bf 0, 0x4d18fc
  04d17d4  cmpw 29, 6
  04d17d8  bt 2, 0x4d18fc
  04d17dc  fmr 28, 12
  04d17e0  lfs 3, 20(6)
  04d17e4  fmr 0, 11
  04d17e8  lfs 2, 16(6)
  04d17ec  fmr 27, 13
  04d17f0  lfs 7, 24(6)
  04d17f4  lfs 8, 76(28)
  04d17f8  fsubs 3, 28, 3
  04d17fc  fsubs 2, 0, 2
  04d1800  fsubs 7, 27, 7
  04d1804  fmuls 1, 3, 3
  04d1808  fmadds 1, 2, 2, 1
  04d180c  fmadds 1, 7, 7, 1
  04d1810  fsqrts 1, 1
  04d1814  fcmpu 0, 1, 8
  04d1818  bt 1, 0x4d18fc
  04d181c  ori 8, 28, 0
  04d1820  lhz 9, 166(6)
  04d1824  lhz 10, 96(8)
  04d1828  extsh 9, 9
  04d182c  extsh 10, 10
  04d1830  cmpw 9, 10
  04d1834  bt 2, 0x4d1850
  04d1838  lhz 9, 94(28)
  04d183c  addic 7, 7, 1
  04d1840  addic 8, 8, 2
  04d1844  extsh 9, 9
  04d1848  cmpw 7, 9
  04d184c  bt 0, 0x4d1820
  04d1850  lhz 8, 94(28)
  04d1854  extsh 8, 8
  04d1858  cmpw 7, 8
  04d185c  bf 0, 0x4d18fc
  04d1860  lfs 8, 16(27)
  04d1864  fcmpu 0, 1, 8
  04d1868  cror 6, 1, 2
  04d186c  bt 6, 0x4d1878
  04d1870  ori 25, 6, 0
  04d1874  b 0x4d1918
  04d1878  slwi 6, 7, 2
  04d187c  addc 7, 28, 6
  04d1880  clrldi 7, 7, 32
  04d1884  lfs 8, 144(7)
  04d1888  fdivs 8, 1, 8
  04d188c  lfs 9, 24(23)
  04d1890  fcmpu 0, 8, 29
  04d1894  bt 2, 0x4d18a4
  04d1898  fmuls 9, 8, 8
  04d189c  lfs 8, 112(7)
  04d18a0  fdivs 9, 8, 9
  04d18a4  fdivs 8, 9, 1
  04d18a8  fsub 9, 29, 1
  04d18ac  fsub 10, 29, 1
  04d18b0  fsub 0, 29, 1
  04d18b4  fsub 31, 1, 29
  04d18b8  fsub 30, 1, 29
  04d18bc  fsub 1, 1, 29
  04d18c0  fmuls 7, 8, 7
  04d18c4  fmuls 3, 8, 3
  04d18c8  fmuls 2, 8, 2
  04d18cc  fsel 8, 9, 29, 7
  04d18d0  fsel 9, 10, 29, 3
  04d18d4  fsel 10, 0, 29, 2
  04d18d8  fsel 7, 31, 8, 7
  04d18dc  fsel 3, 30, 9, 3
  04d18e0  fsel 1, 1, 10, 2
  04d18e4  fadds 6, 6, 7
  04d18e8  fadds 5, 5, 3
  04d18ec  fadds 4, 4, 1
  04d18f0  stfs 6, 8(28)
  04d18f4  stfs 5, 4(28)
  04d18f8  stfs 4, 0(28)
  04d18fc  addic 3, 3, 1
  04d1900  fmr 27, 13
  04d1904  addic 31, 31, 4
  04d1908  cmpw 3, 4
  04d190c  fmr 28, 12
  04d1910  fmr 0, 11
  04d1914  bt 0, 0x4d17b0
  04d1918  lwz 3, 72(28)
  04d191c  cmpwi 3, 0
  04d1920  bf 2, 0x4d1cb0
  04d1924  lfs 1, 16(28)
  04d1928  lfs 2, 20(28)
  04d192c  lis 3, 15395
  04d1930  fadds 1, 0, 1
  04d1934  lfs 3, 28(29)
  04d1938  fadds 2, 28, 2
  04d193c  lfs 4, 24(28)
  04d1940  stfs 3, 140(1)
  04d1944  ori 6, 3, 55050
  04d1948  fadds 4, 27, 4
  04d194c  stfs 3, 156(1)
  04d1950  li 7, 0
  04d1954  addic 3, 1, 128
  04d1958  addic 4, 1, 144
  04d195c  li 5, 2
  04d1960  stfs 1, 128(1)
  04d1964  stfs 2, 132(1)
  04d1968  stfs 1, 144(1)
  04d196c  stfs 2, 148(1)
  04d1970  lfs 1, 28(23)
  04d1974  stw 6, 152(1)
  04d1978  fadds 1, 4, 1
  04d197c  ori 6, 29, 0
  04d1980  stfs 1, 136(1)
  04d1984  bl 0x57820
  04d1988  nop
  04d198c  lfs 3, 0(28)
  04d1990  lfs 4, 4(28)
  04d1994  cmpwi 3, 0
  04d1998  lfs 5, 8(28)
  04d199c  lfs 0, 24(28)
  04d19a0  lfs 1, 16(28)
  04d19a4  lfs 2, 20(28)
  04d19a8  bt 2, 0x4d1d6c
  04d19ac  lis 3, 161
  04d19b0  addic 3, 3, 2368
  04d19b4  lwz 4, 28(3)
  04d19b8  cmpwi 4, 0
  04d19bc  bf 1, 0x4d1d6c
  04d19c0  lwz 4, 40(3)
  04d19c4  lwz 5, 24(29)
  04d19c8  srawi 6, 4, 31
  04d19cc  lfs 31, 40(3)
  04d19d0  srawi 7, 5, 31
  04d19d4  lfs 30, 24(29)
  04d19d8  srwi 8, 6, 1
  04d19dc  srwi 9, 7, 1
  04d19e0  xor 4, 8, 4
  04d19e4  xor 5, 9, 5
  04d19e8  subc 4, 4, 6
  04d19ec  subc 5, 5, 7
  04d19f0  cmpw 4, 5
  04d19f4  bf 1, 0x4d1d6c
  04d19f8  lfs 7, 68(3)
  04d19fc  lfs 6, 64(3)
  04d1a00  fmuls 9, 7, 7
  04d1a04  lwz 5, 72(3)
  04d1a08  lfs 8, 72(3)
  04d1a0c  lis 4, 115
  04d1a10  fabs 13, 8
  04d1a14  addic 4, 4, 22784
  04d1a18  fmadds 9, 6, 6, 9
  04d1a1c  fsqrts 10, 9
  04d1a20  fabs 28, 10
  04d1a24  stfs 10, 160(1)
  04d1a28  fsubs 11, 13, 28
  04d1a2c  stfs 11, 164(1)
  04d1a30  lwz 3, 160(1)
  04d1a34  lfs 11, 160(1)
  04d1a38  lwz 6, 164(1)
  04d1a3c  rlwinm 3, 3, 3, 29, 29
  04d1a40  fabs 12, 11
  04d1a44  lfs 11, 164(1)
  04d1a48  rlwimi 3, 6, 2, 30, 30
  04d1a4c  fsub 27, 11, 29
  04d1a50  fsub 26, 11, 29
  04d1a54  rlwimi 3, 5, 4, 28, 28
  04d1a58  ori 5, 4, 0
  04d1a5c  rlwimi 5, 3, 2, 26, 28
  04d1a60  slwi 3, 3, 2
  04d1a64  clrldi 5, 5, 32
  04d1a68  fsel 28, 27, 13, 28
  04d1a6c  lfsx 11, 4, 3
  04d1a70  fsel 13, 26, 12, 13
  04d1a74  lfs 12, 4(5)
  04d1a78  fcmpu 0, 28, 29
  04d1a7c  bt 1, 0x4d1a88
  04d1a80  fmr 11, 29
  04d1a84  b 0x4d1ba4
  04d1a88  fsubs 27, 13, 28
  04d1a8c  fadds 13, 13, 28
  04d1a90  addic 3, 1, 16
  04d1a94  li 6, 2
  04d1a98  addic 4, 3, 152
  04d1a9c  addic 5, 3, 168
  04d1aa0  mtctr 6
  04d1aa4  fdivs 13, 27, 13
  04d1aa8  fmuls 28, 13, 13
  04d1aac  stfs 13, 180(1)
  04d1ab0  stfs 13, 172(1)
  04d1ab4  stfs 13, 176(1)
  04d1ab8  stfs 13, 168(1)
  04d1abc  lfs 26, 180(1)
  04d1ac0  lfs 25, 172(1)
  04d1ac4  lfs 24, 176(1)
  04d1ac8  fmuls 27, 28, 28
  04d1acc  fmuls 25, 25, 28
  04d1ad0  fmuls 26, 26, 27
  04d1ad4  fmuls 13, 27, 27
  04d1ad8  fmuls 27, 24, 27
  04d1adc  stfs 25, 172(1)
  04d1ae0  fmuls 28, 26, 28
  04d1ae4  stfs 27, 176(1)
  04d1ae8  stfs 28, 180(1)
  04d1aec  lfs 28, 152(3)
  04d1af0  fmuls 28, 28, 13
  04d1af4  stfs 28, 168(3)
  04d1af8  lfs 28, 4(4)
  04d1afc  addic 3, 3, 8
  04d1b00  addic 4, 4, 8
  04d1b04  fmuls 28, 28, 13
  04d1b08  stfs 28, 4(5)
  04d1b0c  addic 5, 5, 8
  04d1b10  bdnz 0x4d1aec
  04d1b14  li 5, 4
  04d1b18  ori 3, 1, 0
  04d1b1c  mtctr 5
  04d1b20  lis 4, 115
  04d1b24  addic 5, 3, 168
  04d1b28  addic 4, 4, 22752
  04d1b2c  ori 7, 5, 0
  04d1b30  lfs 13, 168(3)
  04d1b34  lfs 28, 0(4)
  04d1b38  fmuls 13, 13, 28
  04d1b3c  lfs 28, 4(4)
  04d1b40  addic 4, 4, 8
  04d1b44  stfs 13, 168(3)
  04d1b48  lfs 13, 4(5)
  04d1b4c  addic 3, 3, 8
  04d1b50  fmuls 13, 13, 28
  04d1b54  stfs 13, 4(5)
  04d1b58  addic 5, 5, 8
  04d1b5c  bdnz 0x4d1b30
  04d1b60  fmr 13, 29
  04d1b64  ori 3, 1, 0
  04d1b68  mtctr 6
  04d1b6c  lfs 28, 168(3)
  04d1b70  fadds 13, 13, 28
  04d1b74  addic 3, 3, 16
  04d1b78  lfs 28, 4(7)
  04d1b7c  lfs 27, 8(7)
  04d1b80  lfs 26, 12(7)
  04d1b84  addic 7, 7, 16
  04d1b88  fadds 13, 13, 28
  04d1b8c  fadds 13, 13, 27
  04d1b90  fadds 13, 13, 26
  04d1b94  bdnz 0x4d1b6c
  04d1b98  lfs 28, 32(23)
  04d1b9c  fadds 13, 13, 28
  04d1ba0  fmadds 11, 13, 11, 12
  04d1ba4  fmr 13, 10
  04d1ba8  fmr 10, 29
  04d1bac  fmr 12, 10
  04d1bb0  fcmpu 0, 13, 12
  04d1bb4  bt 2, 0x4d1bfc
  04d1bb8  frsqrte 10, 9
  04d1bbc  lfs 12, 36(23)
  04d1bc0  lfs 13, 40(23)
  04d1bc4  fmuls 28, 9, 10
  04d1bc8  fmuls 27, 12, 10
  04d1bcc  fnmsubs 28, 28, 10, 13
  04d1bd0  fmadds 10, 28, 27, 10
  04d1bd4  fmuls 28, 9, 10
  04d1bd8  fmuls 27, 12, 10
  04d1bdc  fnmsubs 28, 28, 10, 13
  04d1be0  fmadds 10, 28, 27, 10
  04d1be4  fmuls 9, 9, 10
  04d1be8  fmuls 12, 12, 10
  04d1bec  fnmsubs 9, 9, 10, 13
  04d1bf0  fmadds 12, 9, 12, 10
  04d1bf4  fmuls 10, 6, 12
  04d1bf8  fmuls 12, 7, 12
  04d1bfc  lfs 9, 16(23)
  04d1c00  lfs 6, 12(27)
  04d1c04  fsubs 7, 30, 31
  04d1c08  fmuls 9, 11, 9
  04d1c0c  lfs 13, 44(23)
  04d1c10  fmuls 8, 6, 8
  04d1c14  lfs 31, 48(23)
  04d1c18  fmuls 12, 6, 12
  04d1c1c  fmuls 10, 6, 10
  04d1c20  fsub 30, 13, 11
  04d1c24  fsub 28, 13, 11
  04d1c28  fsub 11, 13, 11
  04d1c2c  fcmpu 0, 7, 31
  04d1c30  fmuls 9, 9, 6
  04d1c34  fadds 5, 5, 8
  04d1c38  fadds 4, 4, 12
  04d1c3c  fadds 3, 3, 10
  04d1c40  cror 6, 0, 2
  04d1c44  fmadds 7, 9, 8, 5
  04d1c48  fmadds 8, 9, 12, 4
  04d1c4c  fmadds 9, 9, 10, 3
  04d1c50  fsel 5, 30, 5, 7
  04d1c54  fsel 4, 28, 4, 8
  04d1c58  fsel 3, 11, 3, 9
  04d1c5c  bt 6, 0x4d1d6c
  04d1c60  fmuls 7, 2, 2
  04d1c64  lfs 8, 8(23)
  04d1c68  fmuls 6, 6, 8
  04d1c6c  fadds 5, 5, 0
  04d1c70  fmadds 7, 1, 1, 7
  04d1c74  fsqrts 7, 7
  04d1c78  fdivs 6, 6, 7
  04d1c7c  fsub 8, 29, 7
  04d1c80  fsub 9, 29, 7
  04d1c84  fsub 10, 7, 29
  04d1c88  fsub 7, 7, 29
  04d1c8c  fmuls 2, 2, 6
  04d1c90  fmuls 1, 1, 6
  04d1c94  fsel 6, 8, 29, 2
  04d1c98  fsel 8, 9, 29, 1
  04d1c9c  fsel 2, 10, 6, 2
  04d1ca0  fsel 1, 7, 8, 1
  04d1ca4  fadds 4, 4, 2
  04d1ca8  fadds 3, 3, 1
  04d1cac  b 0x4d1d6c
  04d1cb0  addic 3, 29, 16
  04d1cb4  lfs 1, 16(27)
  04d1cb8  li 5, 4
  04d1cbc  ori 6, 29, 0
  04d1cc0  bl 0x59e20
  04d1cc4  nop
  04d1cc8  lfs 3, 0(28)
  04d1ccc  cmpwi 3, 0
  04d1cd0  lfs 4, 4(28)
  04d1cd4  lfs 5, 8(28)
  04d1cd8  bt 2, 0x4d1d6c
  04d1cdc  lis 3, 161
  04d1ce0  lfs 1, 20(29)
  04d1ce4  addic 3, 3, 2368
  04d1ce8  lfs 2, 52(3)
  04d1cec  lfs 6, 48(3)
  04d1cf0  fsubs 1, 2, 1
  04d1cf4  lfs 2, 16(29)
  04d1cf8  lfs 7, 56(3)
  04d1cfc  fsubs 2, 6, 2
  04d1d00  lfs 6, 24(29)
  04d1d04  fsubs 6, 7, 6
  04d1d08  lfs 7, 12(27)
  04d1d0c  fmuls 8, 1, 1
  04d1d10  fadds 6, 6, 7
  04d1d14  fmadds 8, 2, 2, 8
  04d1d18  fmadds 8, 6, 6, 8
  04d1d1c  fsqrts 8, 8
  04d1d20  fdivs 7, 7, 8
  04d1d24  fsub 9, 29, 8
  04d1d28  fsub 10, 29, 8
  04d1d2c  fsub 11, 29, 8
  04d1d30  fsub 12, 8, 29
  04d1d34  fsub 13, 8, 29
  04d1d38  fsub 8, 8, 29
  04d1d3c  fmuls 6, 7, 6
  04d1d40  fmuls 1, 7, 1
  04d1d44  fmuls 2, 7, 2
  04d1d48  fsel 7, 9, 29, 6
  04d1d4c  fsel 9, 10, 29, 1
  04d1d50  fsel 10, 11, 29, 2
  04d1d54  fsel 6, 12, 7, 6
  04d1d58  fsel 1, 13, 9, 1
  04d1d5c  fsel 2, 8, 10, 2
  04d1d60  fadds 5, 5, 6
  04d1d64  fadds 4, 4, 1
  04d1d68  fadds 3, 3, 2
  04d1d6c  fmuls 1, 4, 4
  04d1d70  lwz 3, 72(28)
  04d1d74  lfs 2, 72(28)
  04d1d78  cmpwi 3, 0
  04d1d7c  fmadds 1, 3, 3, 1
  04d1d80  bf 2, 0x4d1d98
  04d1d84  fsqrts 2, 1
  04d1d88  lfs 5, 24(27)
  04d1d8c  fmr 1, 29
  04d1d90  fdivs 5, 5, 2
  04d1d94  b 0x4d1dc8
  04d1d98  fmr 6, 5
  04d1d9c  fmr 7, 2
  04d1da0  lfs 5, 24(27)
  04d1da4  fmadds 2, 6, 6, 1
  04d1da8  fsqrts 2, 2
  04d1dac  fdivs 5, 5, 2
  04d1db0  fsub 1, 29, 2
  04d1db4  fsub 8, 2, 29
  04d1db8  fmuls 6, 6, 5
  04d1dbc  fsel 1, 1, 29, 6
  04d1dc0  fsel 1, 8, 1, 6
  04d1dc4  fdivs 1, 1, 7
  04d1dc8  fmuls 3, 3, 5
  04d1dcc  stfs 1, 8(28)
  04d1dd0  fmuls 4, 4, 5
  04d1dd4  fsub 5, 29, 2
  04d1dd8  fsub 6, 29, 2
  04d1ddc  addic 3, 28, 68
  04d1de0  fsub 7, 2, 29
  04d1de4  fsub 2, 2, 29
  04d1de8  fsel 1, 5, 29, 4
  04d1dec  fsel 5, 6, 29, 3
  04d1df0  fsel 1, 7, 1, 4
  04d1df4  fsel 2, 2, 5, 3
  04d1df8  stfs 1, 4(28)
  04d1dfc  stfs 2, 0(28)
  04d1e00  bl 0x4fffb4
  04d1e04  nop
  04d1e08  cmpwi 3, 0
  04d1e0c  lfs 1, 56(28)
  04d1e10  bt 2, 0x4d1e90
  04d1e14  lfs 1, 52(23)
  04d1e18  lfs 2, 56(23)
  04d1e1c  bl 0xfcbe8
  04d1e20  nop
  04d1e24  bl 0x502758
  04d1e28  nop
  04d1e2c  fmr 1, 29
  04d1e30  lfs 2, 64(28)
  04d1e34  sth 3, 68(28)
  04d1e38  bl 0xfcbe8
  04d1e3c  nop
  04d1e40  lfs 31, 36(23)
  04d1e44  lfs 2, 64(28)
  04d1e48  fnmsubs 3, 2, 31, 1
  04d1e4c  fmr 1, 29
  04d1e50  stfs 3, 48(28)
  04d1e54  bl 0xfcbe8
  04d1e58  nop
  04d1e5c  lfs 2, 64(28)
  04d1e60  lwz 3, 72(28)
  04d1e64  fnmsubs 3, 2, 31, 1
  04d1e68  cmpwi 3, 0
  04d1e6c  fmr 1, 29
  04d1e70  stfs 3, 52(28)
  04d1e74  bt 2, 0x4d1e8c
  04d1e78  fmr 1, 29
  04d1e7c  bl 0xfcbe8
  04d1e80  nop
  04d1e84  lfs 2, 64(28)
  04d1e88  fnmsubs 1, 2, 31, 1
  04d1e8c  stfs 1, 56(28)
  04d1e90  lfs 2, 0(28)
  04d1e94  cmpwi 25, 0
  04d1e98  lfs 3, 48(28)
  04d1e9c  lfs 4, 4(28)
  04d1ea0  fadds 2, 2, 3
  04d1ea4  lfs 3, 52(28)
  04d1ea8  lfs 5, 8(28)
  04d1eac  fadds 3, 4, 3
  04d1eb0  fadds 1, 5, 1
  04d1eb4  stfs 2, 0(28)
  04d1eb8  stfs 3, 4(28)
  04d1ebc  stfs 1, 8(28)
  04d1ec0  bt 2, 0x4d1fa0
  04d1ec4  lfs 2, 16(29)
  04d1ec8  lfs 1, 16(25)
  04d1ecc  lfs 3, 20(29)
  04d1ed0  lfs 4, 20(25)
  04d1ed4  fsubs 2, 2, 1
  04d1ed8  lfs 5, 24(29)
  04d1edc  lfs 6, 24(25)
  04d1ee0  lfs 1, 28(29)
  04d1ee4  fsubs 3, 3, 4
  04d1ee8  lwz 3, 72(28)
  04d1eec  fsubs 4, 5, 6
  04d1ef0  cmpwi 3, 0
  04d1ef4  bt 2, 0x4d1f54
  04d1ef8  fmuls 5, 3, 3
  04d1efc  lfs 6, 24(27)
  04d1f00  fmadds 5, 2, 2, 5
  04d1f04  fmadds 5, 4, 4, 5
  04d1f08  fsqrts 5, 5
  04d1f0c  fcmpu 0, 5, 29
  04d1f10  bf 2, 0x4d1f30
  04d1f14  stfs 1, 12(28)
  04d1f18  fmr 1, 29
  04d1f1c  stfs 2, 0(28)
  04d1f20  stfs 3, 4(28)
  04d1f24  stfs 4, 8(28)
  04d1f28  fmr 2, 1
  04d1f2c  b 0x4d1f44
  04d1f30  fdivs 29, 6, 5
  04d1f34  stfs 1, 12(28)
  04d1f38  fmuls 2, 29, 2
  04d1f3c  fmuls 1, 29, 3
  04d1f40  fmuls 29, 29, 4
  04d1f44  stfs 2, 0(28)
  04d1f48  stfs 1, 4(28)
  04d1f4c  stfs 29, 8(28)
  04d1f50  b 0x4d1fa0
  04d1f54  fmuls 5, 3, 3
  04d1f58  fmadds 6, 2, 2, 5
  04d1f5c  lfs 5, 24(27)
  04d1f60  fsqrts 6, 6
  04d1f64  fcmpu 0, 6, 29
  04d1f68  bf 2, 0x4d1f84
  04d1f6c  stfs 2, 0(28)
  04d1f70  stfs 3, 4(28)
  04d1f74  stfs 1, 12(28)
  04d1f78  stfs 4, 8(28)
  04d1f7c  fmr 1, 29
  04d1f80  b 0x4d1f98
  04d1f84  fdivs 29, 5, 6
  04d1f88  stfs 4, 8(28)
  04d1f8c  stfs 1, 12(28)
  04d1f90  fmuls 1, 29, 2
  04d1f94  fmuls 29, 29, 3
  04d1f98  stfs 1, 0(28)
  04d1f9c  stfs 29, 4(28)
  04d1fa0  ld 0, 416(1)
  04d1fa4  mtlr 0
  04d1fa8  lfd 18, 288(1)
  04d1fac  lfd 19, 296(1)
  04d1fb0  lfd 20, 304(1)
  04d1fb4  lfd 21, 312(1)
  04d1fb8  lfd 22, 320(1)
  04d1fbc  lfd 23, 328(1)
  04d1fc0  lfd 24, 336(1)
  04d1fc4  lfd 25, 344(1)
  04d1fc8  lfd 26, 352(1)
  04d1fcc  lfd 27, 360(1)
  04d1fd0  lfd 28, 368(1)
  04d1fd4  lfd 29, 376(1)
  04d1fd8  lfd 30, 384(1)
  04d1fdc  lfd 31, 392(1)
  04d1fe0  ld 22, 208(1)
  04d1fe4  ld 23, 216(1)
  04d1fe8  ld 24, 224(1)
  04d1fec  ld 25, 232(1)
  04d1ff0  ld 26, 240(1)
  04d1ff4  ld 27, 248(1)
  04d1ff8  ld 28, 256(1)
  04d1ffc  ld 29, 264(1)
  04d2000  ld 30, 272(1)
  04d2004  ld 31, 280(1)
  04d2008  addi 1, 1, 400
  04d200c  blr

FUN_004d2040:   # 0x4d2040, 0x3e8 bytes
  04d2040  stdu 1, -224(1)
  04d2044  mflr 0
  04d2048  std 0, 240(1)
  04d204c  stfd 28, 192(1)
  04d2050  stfd 29, 200(1)
  04d2054  stfd 30, 208(1)
  04d2058  stfd 31, 216(1)
  04d205c  fmr 31, 3
  04d2060  fmr 29, 1
  04d2064  lfs 3, 20(4)
  04d2068  lfs 1, 4(4)
  04d206c  lfs 4, 16(4)
  04d2070  fadds 3, 3, 1
  04d2074  lfs 1, 0(4)
  04d2078  fadds 4, 4, 1
  04d207c  lis 6, 77
  04d2080  li 7, 0
  04d2084  fmr 30, 2
  04d2088  std 29, 168(1)
  04d208c  addi 6, 6, 8208
  04d2090  ori 29, 3, 0
  04d2094  fmuls 1, 3, 3
  04d2098  std 30, 176(1)
  04d209c  lfs 2, 0(6)
  04d20a0  stw 7, 8(4)
  04d20a4  std 31, 184(1)
  04d20a8  ori 30, 4, 0
  04d20ac  ori 31, 5, 0
  04d20b0  stfs 4, 16(4)
  04d20b4  stfs 3, 20(4)
  04d20b8  lfs 5, 28(5)
  04d20bc  fmadds 6, 4, 4, 1
  04d20c0  lfs 28, 24(4)
  04d20c4  lfs 1, 20(5)
  04d20c8  lwz 3, 0(5)
  04d20cc  cmpwi 1, 3, 0
  04d20d0  fsqrts 6, 6
  04d20d4  fcmpu 0, 6, 5
  04d20d8  cror 2, 0, 2
  04d20dc  bt 2, 0x4d2114
  04d20e0  fdivs 5, 5, 6
  04d20e4  fsub 7, 2, 6
  04d20e8  fsub 8, 2, 6
  04d20ec  fsub 9, 6, 2
  04d20f0  fsub 6, 6, 2
  04d20f4  fmuls 4, 4, 5
  04d20f8  fmuls 3, 3, 5
  04d20fc  fsel 5, 7, 2, 4
  04d2100  fsel 7, 8, 2, 3
  04d2104  fsel 4, 9, 5, 4
  04d2108  fsel 3, 6, 7, 3
  04d210c  stfs 4, 16(30)
  04d2110  stfs 3, 20(30)
  04d2114  bt 6, 0x4d2300
  04d2118  fabs 6, 4
  04d211c  fabs 5, 3
  04d2120  stfs 4, 112(1)
  04d2124  stfs 3, 116(1)
  04d2128  lis 3, 115
  04d212c  addic 3, 3, 22784
  04d2130  fsubs 4, 6, 5
  04d2134  stfs 4, 120(1)
  04d2138  lwz 4, 112(1)
  04d213c  lfs 3, 112(1)
  04d2140  lwz 5, 116(1)
  04d2144  lfs 4, 116(1)
  04d2148  fabs 3, 3
  04d214c  lwz 6, 120(1)
  04d2150  rlwinm 5, 5, 3, 29, 29
  04d2154  lfs 7, 120(1)
  04d2158  fabs 4, 4
  04d215c  rlwimi 5, 6, 2, 30, 30
  04d2160  fsub 8, 7, 2
  04d2164  fsub 7, 7, 2
  04d2168  rlwimi 5, 4, 4, 28, 28
  04d216c  ori 4, 3, 0
  04d2170  rlwimi 4, 5, 2, 26, 28
  04d2174  slwi 5, 5, 2
  04d2178  clrldi 4, 4, 32
  04d217c  fsel 5, 8, 3, 5
  04d2180  lfsx 3, 3, 5
  04d2184  fsel 6, 7, 4, 6
  04d2188  lfs 4, 4(4)
  04d218c  fcmpu 0, 5, 2
  04d2190  bt 1, 0x4d2198
  04d2194  b 0x4d22bc
  04d2198  fsubs 7, 6, 5
  04d219c  fadds 5, 6, 5
  04d21a0  addic 6, 1, 16
  04d21a4  li 3, 2
  04d21a8  addic 4, 6, 124
  04d21ac  addic 5, 6, 108
  04d21b0  mtctr 3
  04d21b4  fdivs 5, 7, 5
  04d21b8  fmuls 7, 5, 5
  04d21bc  stfs 5, 136(1)
  04d21c0  stfs 5, 128(1)
  04d21c4  stfs 5, 132(1)
  04d21c8  stfs 5, 124(1)
  04d21cc  lfs 8, 136(1)
  04d21d0  lfs 9, 128(1)
  04d21d4  lfs 10, 132(1)
  04d21d8  fmuls 5, 7, 7
  04d21dc  fmuls 9, 9, 7
  04d21e0  fmuls 8, 8, 5
  04d21e4  fmuls 6, 5, 5
  04d21e8  fmuls 5, 10, 5
  04d21ec  stfs 9, 128(1)
  04d21f0  fmuls 7, 8, 7
  04d21f4  stfs 5, 132(1)
  04d21f8  stfs 7, 136(1)
  04d21fc  lfs 5, 108(6)
  04d2200  fmuls 5, 5, 6
  04d2204  stfs 5, 124(6)
  04d2208  lfs 5, 4(5)
  04d220c  addic 5, 5, 8
  04d2210  fmuls 5, 5, 6
  04d2214  addic 6, 6, 8
  04d2218  stfs 5, 4(4)
  04d221c  addic 4, 4, 8
  04d2220  bdnz 0x4d21fc
  04d2224  ori 7, 1, 0
  04d2228  li 4, 4
  04d222c  lis 6, 115
  04d2230  addic 5, 7, 124
  04d2234  mtctr 4
  04d2238  addic 6, 6, 22752
  04d223c  ori 4, 5, 0
  04d2240  lfs 5, 124(7)
  04d2244  lfs 6, 0(6)
  04d2248  fmuls 5, 5, 6
  04d224c  lfs 6, 4(6)
  04d2250  addic 6, 6, 8
  04d2254  stfs 5, 124(7)
  04d2258  lfs 5, 4(5)
  04d225c  addic 7, 7, 8
  04d2260  fmuls 5, 5, 6
  04d2264  stfs 5, 4(5)
  04d2268  addic 5, 5, 8
  04d226c  bdnz 0x4d2240
  04d2270  ori 5, 3, 0
  04d2274  ori 3, 1, 0
  04d2278  mtctr 5
  04d227c  lfs 5, 124(3)
  04d2280  fadds 2, 2, 5
  04d2284  lfs 5, 4(4)
  04d2288  addic 3, 3, 16
  04d228c  lfs 6, 8(4)
  04d2290  lfs 7, 12(4)
  04d2294  addic 4, 4, 16
  04d2298  fadds 2, 2, 5
  04d229c  fadds 2, 2, 6
  04d22a0  fadds 2, 2, 7
  04d22a4  bdnz 0x4d227c
  04d22a8  lis 3, 77
  04d22ac  addi 3, 3, 8208
  04d22b0  lfs 5, 4(3)
  04d22b4  fadds 2, 2, 5
  04d22b8  fmadds 2, 2, 3, 4
  04d22bc  fmr 5, 1
  04d22c0  lis 3, 77
  04d22c4  fmr 1, 2
  04d22c8  lis 4, 114
  04d22cc  addi 3, 3, 8208
  04d22d0  addic 5, 30, 88
  04d22d4  lfs 6, 8(3)
  04d22d8  lfs 7, -3060(4)
  04d22dc  lfs 3, 12(3)
  04d22e0  fmuls 2, 5, 6
  04d22e4  fmr 4, 5
  04d22e8  ori 3, 29, 0
  04d22ec  fmuls 2, 2, 7
  04d22f0  bl 0xff2e8
  04d22f4  nop
  04d22f8  lfs 4, 16(30)
  04d22fc  lfs 3, 20(30)
  04d2300  fmuls 1, 3, 3
  04d2304  lis 3, 77
  04d2308  lfs 2, 72(29)
  04d230c  addi 5, 3, 8208
  04d2310  lfs 3, 20(5)
  04d2314  lfs 5, 16(5)
  04d2318  fmadds 1, 4, 4, 1
  04d231c  fadds 4, 2, 5
  04d2320  lfs 6, 24(5)
  04d2324  fsubs 5, 3, 2
  04d2328  addic 4, 30, 16
  04d232c  ori 3, 29, 0
  04d2330  fsqrts 7, 1
  04d2334  lfs 1, 28(5)
  04d2338  lfs 8, 32(5)
  04d233c  lfs 9, 36(5)
  04d2340  lfs 10, 40(5)
  04d2344  fsubs 3, 3, 4
  04d2348  fsub 11, 2, 5
  04d234c  fsubs 12, 6, 4
  04d2350  fsubs 6, 6, 2
  04d2354  fsub 13, 4, 3
  04d2358  fsel 2, 11, 5, 2
  04d235c  fmr 5, 8
  04d2360  fmr 8, 9
  04d2364  fsel 3, 13, 3, 4
  04d2368  fsub 4, 6, 2
  04d236c  fsub 9, 12, 3
  04d2370  fsel 2, 4, 6, 2
  04d2374  fmr 4, 10
  04d2378  fsel 3, 9, 12, 3
  04d237c  fmuls 6, 2, 2
  04d2380  fneg 9, 30
  04d2384  fsubs 12, 28, 31
  04d2388  fmuls 10, 3, 3
  04d238c  fmuls 11, 6, 2
  04d2390  fmuls 13, 10, 3
  04d2394  fmuls 0, 6, 11
  04d2398  fmadds 2, 11, 1, 2
  04d239c  fsub 11, 9, 28
  04d23a0  fmuls 31, 10, 13
  04d23a4  fmadds 1, 13, 1, 3
  04d23a8  fmuls 3, 6, 0
  04d23ac  fmadds 2, 0, 5, 2
  04d23b0  fmuls 13, 10, 31
  04d23b4  fmadds 1, 31, 5, 1
  04d23b8  fmuls 5, 6, 3
  04d23bc  fmadds 2, 3, 8, 2
  04d23c0  fsel 3, 11, 9, 12
  04d23c4  fmuls 6, 10, 13
  04d23c8  fmadds 1, 13, 8, 1
  04d23cc  fmadds 2, 5, 4, 2
  04d23d0  stfs 3, 24(30)
  04d23d4  fmadds 3, 6, 4, 1
  04d23d8  fmr 1, 29
  04d23dc  fmuls 2, 2, 7
  04d23e0  fmuls 3, 3, 7
  04d23e4  stfs 2, 20(30)
  04d23e8  lfs 2, 44(5)
  04d23ec  lfs 4, 16(31)
  04d23f0  fmuls 2, 4, 2
  04d23f4  stfs 3, 16(30)
  04d23f8  bl 0x4d05b8
  04d23fc  ld 0, 240(1)
  04d2400  mtlr 0
  04d2404  lfd 28, 192(1)
  04d2408  lfd 29, 200(1)
  04d240c  lfd 30, 208(1)
  04d2410  lfd 31, 216(1)
  04d2414  ld 29, 168(1)
  04d2418  ld 30, 176(1)
  04d241c  ld 31, 184(1)
  04d2420  addi 1, 1, 224
  04d2424  blr

FUN_004d2438:   # 0x4d2438, 0x354 bytes
  04d2438  stdu 1, -240(1)
  04d243c  mflr 0
  04d2440  std 0, 256(1)
  04d2444  stfd 29, 216(1)
  04d2448  stfd 30, 224(1)
  04d244c  stfd 31, 232(1)
  04d2450  fmr 30, 1
  04d2454  lfs 1, 20(4)
  04d2458  lfs 2, 4(4)
  04d245c  lfs 3, 16(4)
  04d2460  fadds 2, 1, 2
  04d2464  lfs 1, 0(4)
  04d2468  lfs 4, 24(4)
  04d246c  fadds 3, 3, 1
  04d2470  lfs 1, 8(4)
  04d2474  fadds 4, 4, 1
  04d2478  lfs 5, 28(5)
  04d247c  fmuls 1, 2, 2
  04d2480  lis 6, 77
  04d2484  addi 6, 6, 9256
  04d2488  fmadds 1, 3, 3, 1
  04d248c  lfs 31, 0(6)
  04d2490  lfs 7, 72(4)
  04d2494  fmadds 1, 4, 4, 1
  04d2498  lfs 8, 16(3)
  04d249c  std 28, 184(1)
  04d24a0  lfs 9, 20(3)
  04d24a4  lis 28, 161
  04d24a8  fsqrts 6, 1
  04d24ac  std 27, 176(1)
  04d24b0  lfs 10, 24(3)
  04d24b4  lfs 1, 28(3)
  04d24b8  std 31, 208(1)
  04d24bc  li 27, 0
  04d24c0  std 29, 192(1)
  04d24c4  ori 31, 3, 0
  04d24c8  addic 28, 28, 2368
  04d24cc  std 30, 200(1)
  04d24d0  ori 29, 4, 0
  04d24d4  ori 30, 5, 0
  04d24d8  fdivs 5, 5, 6
  04d24dc  fsub 11, 31, 6
  04d24e0  fsub 12, 6, 31
  04d24e4  fsub 13, 31, 6
  04d24e8  fsub 0, 31, 6
  04d24ec  fsub 29, 6, 31
  04d24f0  fsub 6, 6, 31
  04d24f4  fmuls 4, 4, 5
  04d24f8  fmuls 3, 3, 5
  04d24fc  fmuls 2, 2, 5
  04d2500  fsel 11, 11, 31, 4
  04d2504  fsel 5, 13, 31, 3
  04d2508  fsel 4, 12, 11, 4
  04d250c  fsel 11, 0, 31, 2
  04d2510  fsel 5, 29, 5, 3
  04d2514  fdivs 7, 4, 7
  04d2518  stfs 5, 16(4)
  04d251c  fsel 2, 6, 11, 2
  04d2520  fadds 4, 8, 5
  04d2524  fadds 3, 9, 2
  04d2528  stfs 2, 20(4)
  04d252c  fadds 2, 10, 7
  04d2530  stfs 7, 24(4)
  04d2534  stfs 4, 16(3)
  04d2538  stfs 3, 20(3)
  04d253c  stfs 2, 24(3)
  04d2540  lfs 29, 4(6)
  04d2544  fadds 2, 2, 30
  04d2548  stfs 4, 112(1)
  04d254c  addic 3, 1, 112
  04d2550  stfs 3, 116(1)
  04d2554  li 5, 4
  04d2558  stfs 1, 124(1)
  04d255c  ori 6, 31, 0
  04d2560  lfs 1, 16(30)
  04d2564  fmuls 1, 1, 29
  04d2568  stfs 2, 120(1)
  04d256c  bl 0x59e20
  04d2570  nop
  04d2574  cmpwi 3, 0
  04d2578  bt 2, 0x4d25ac
  04d257c  lfs 4, 48(28)
  04d2580  addic 27, 27, 1
  04d2584  stfs 4, 16(31)
  04d2588  lfs 3, 52(28)
  04d258c  cmpwi 27, 6
  04d2590  stfs 3, 20(31)
  04d2594  lfs 2, 56(28)
  04d2598  lfs 1, 60(28)
  04d259c  fsubs 2, 2, 30
  04d25a0  stfs 1, 28(31)
  04d25a4  stfs 2, 24(31)
  04d25a8  bt 0, 0x4d2544
  04d25ac  lwz 3, 16(29)
  04d25b0  lwz 4, 20(29)
  04d25b4  lfs 1, 16(29)
  04d25b8  lfs 2, 20(29)
  04d25bc  fabs 4, 1
  04d25c0  fabs 1, 2
  04d25c4  rlwinm 4, 4, 3, 29, 29
  04d25c8  lis 5, 115
  04d25cc  addic 5, 5, 22784
  04d25d0  fsubs 2, 4, 1
  04d25d4  stfs 2, 128(1)
  04d25d8  lwz 6, 128(1)
  04d25dc  lfs 2, 128(1)
  04d25e0  rlwimi 4, 6, 2, 30, 30
  04d25e4  fsub 3, 2, 31
  04d25e8  fsub 5, 2, 31
  04d25ec  rlwimi 4, 3, 4, 28, 28
  04d25f0  ori 3, 5, 0
  04d25f4  rlwimi 3, 4, 2, 26, 28
  04d25f8  slwi 4, 4, 2
  04d25fc  clrldi 3, 3, 32
  04d2600  fsel 3, 3, 4, 1
  04d2604  lfsx 2, 5, 4
  04d2608  fsel 4, 5, 1, 4
  04d260c  lfs 1, 4(3)
  04d2610  fcmpu 0, 3, 31
  04d2614  bt 1, 0x4d261c
  04d2618  b 0x4d2740
  04d261c  fsubs 5, 4, 3
  04d2620  fadds 3, 4, 3
  04d2624  addic 6, 1, 16
  04d2628  li 3, 2
  04d262c  addic 4, 6, 132
  04d2630  addic 5, 6, 116
  04d2634  mtctr 3
  04d2638  fdivs 3, 5, 3
  04d263c  fmuls 5, 3, 3
  04d2640  stfs 3, 144(1)
  04d2644  stfs 3, 136(1)
  04d2648  stfs 3, 140(1)
  04d264c  stfs 3, 132(1)
  04d2650  lfs 6, 144(1)
  04d2654  lfs 7, 136(1)
  04d2658  lfs 8, 140(1)
  04d265c  fmuls 3, 5, 5
  04d2660  fmuls 7, 7, 5
  04d2664  fmuls 6, 6, 3
  04d2668  fmuls 4, 3, 3
  04d266c  fmuls 3, 8, 3
  04d2670  stfs 7, 136(1)
  04d2674  fmuls 5, 6, 5
  04d2678  stfs 3, 140(1)
  04d267c  stfs 5, 144(1)
  04d2680  lfs 3, 116(6)
  04d2684  fmuls 3, 3, 4
  04d2688  stfs 3, 132(6)
  04d268c  lfs 3, 4(5)
  04d2690  addic 5, 5, 8
  04d2694  fmuls 3, 3, 4
  04d2698  addic 6, 6, 8
  04d269c  stfs 3, 4(4)
  04d26a0  addic 4, 4, 8
  04d26a4  bdnz 0x4d2680
  04d26a8  ori 7, 1, 0
  04d26ac  li 4, 4
  04d26b0  lis 6, 115
  04d26b4  addic 5, 7, 132
  04d26b8  mtctr 4
  04d26bc  addic 6, 6, 22752
  04d26c0  ori 4, 5, 0
  04d26c4  lfs 3, 132(7)
  04d26c8  lfs 4, 0(6)
  04d26cc  fmuls 3, 3, 4
  04d26d0  lfs 4, 4(6)
  04d26d4  addic 6, 6, 8
  04d26d8  stfs 3, 132(7)
  04d26dc  lfs 3, 4(5)
  04d26e0  addic 7, 7, 8
  04d26e4  fmuls 3, 3, 4
  04d26e8  stfs 3, 4(5)
  04d26ec  addic 5, 5, 8
  04d26f0  bdnz 0x4d26c4
  04d26f4  ori 5, 3, 0
  04d26f8  ori 3, 1, 0
  04d26fc  mtctr 5
  04d2700  lfs 3, 132(3)
  04d2704  lfs 4, 4(4)
  04d2708  fadds 3, 31, 3
  04d270c  lfs 5, 8(4)
  04d2710  lfs 31, 12(4)
  04d2714  addic 3, 3, 16
  04d2718  addic 4, 4, 16
  04d271c  fadds 3, 3, 4
  04d2720  fadds 3, 3, 5
  04d2724  fadds 31, 3, 31
  04d2728  bdnz 0x4d2700
  04d272c  lis 3, 77
  04d2730  addi 3, 3, 9256
  04d2734  lfs 3, 8(3)
  04d2738  fadds 31, 31, 3
  04d273c  fmadds 31, 31, 2, 1
  04d2740  lis 3, 77
  04d2744  fmr 1, 31
  04d2748  addi 3, 3, 9256
  04d274c  lfs 2, 12(3)
  04d2750  bl 0x502578
  04d2754  nop
  04d2758  stfs 1, 72(31)
  04d275c  ld 0, 256(1)
  04d2760  mtlr 0
  04d2764  lfd 29, 216(1)
  04d2768  lfd 30, 224(1)
  04d276c  lfd 31, 232(1)
  04d2770  ld 27, 176(1)
  04d2774  ld 28, 184(1)
  04d2778  ld 29, 192(1)
  04d277c  ld 30, 200(1)
  04d2780  ld 31, 208(1)
  04d2784  addi 1, 1, 240
  04d2788  blr

FUN_004d278c:   # 0x4d278c, 0x14 bytes
  04d278c  lis 3, 144
  04d2790  lis 4, 1
  04d2794  addic 3, 3, -28044
  04d2798  stw 4, 72(3)
  04d279c  blr

FUN_004d27a0:   # 0x4d27a0, 0x4 bytes
  04d27a0  blr
