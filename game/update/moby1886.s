# game/update/moby1886.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1885_002cf208:   # 0x2cf208, 0x198 bytes
  02cf208  stdu 1, -192(1)
  02cf20c  mflr 0
  02cf210  std 0, 208(1)
  02cf214  stfd 30, 176(1)
  02cf218  stfd 31, 184(1)
  02cf21c  std 29, 152(1)
  02cf220  ori 29, 3, 0
  02cf224  std 31, 168(1)
  02cf228  li 3, 1886
  02cf22c  std 30, 160(1)
  02cf230  ori 31, 5, 0
  02cf234  std 27, 136(1)
  02cf238  std 26, 128(1)
  02cf23c  ori 30, 4, 0
  02cf240  ori 26, 6, 0
  02cf244  std 28, 144(1)
  02cf248  std 25, 120(1)
  02cf24c  ori 27, 7, 0
  02cf250  bl 0xefa28
  02cf254  nop
  02cf258  ori 28, 3, 0
  02cf25c  cmpwi 28, 0
  02cf260  bt 2, 0x2cf368
  02cf264  lwz 25, 120(28)
  02cf268  lis 3, 45
  02cf26c  stw 29, 16(25)
  02cf270  lfs 1, 0(30)
  02cf274  stfs 1, 16(28)
  02cf278  lfs 1, 4(30)
  02cf27c  stfs 1, 20(28)
  02cf280  lfs 1, 8(30)
  02cf284  stfs 1, 24(28)
  02cf288  lfs 1, 12(30)
  02cf28c  addi 30, 3, -3592
  02cf290  stfs 1, 28(28)
  02cf294  lfs 1, 0(31)
  02cf298  stfs 1, 0(25)
  02cf29c  lfs 1, 4(31)
  02cf2a0  stfs 1, 4(25)
  02cf2a4  lfs 1, 8(31)
  02cf2a8  stfs 1, 8(25)
  02cf2ac  lfs 1, 12(31)
  02cf2b0  stfs 1, 12(25)
  02cf2b4  lfs 31, 0(30)
  02cf2b8  lfs 30, 4(30)
  02cf2bc  fmr 1, 31
  02cf2c0  fmr 2, 30
  02cf2c4  bl 0xfcbe8
  02cf2c8  nop
  02cf2cc  stfs 1, 64(28)
  02cf2d0  fmr 2, 30
  02cf2d4  fmr 1, 31
  02cf2d8  bl 0xfcbe8
  02cf2dc  nop
  02cf2e0  li 4, 0
  02cf2e4  li 3, 8
  02cf2e8  stfs 1, 68(28)
  02cf2ec  vspltisw 2, -1
  02cf2f0  lis 5, 114
  02cf2f4  li 6, -3056
  02cf2f8  stw 4, 20(25)
  02cf2fc  lvlx 3, 3, 30
  02cf300  vslw 2, 2, 2
  02cf304  vspltw 3, 3, 0
  02cf308  lvlx 4, 6, 5
  02cf30c  li 5, 24
  02cf310  li 6, 255
  02cf314  vmaddfp 2, 4, 3, 2
  02cf318  li 7, 64
  02cf31c  li 8, 1
  02cf320  ori 3, 28, 0
  02cf324  vctsxs 2, 2, 0
  02cf328  vsplth 2, 2, 1
  02cf32c  stvehx 2, 5, 25
  02cf330  stb 6, 48(28)
  02cf334  sth 7, 50(28)
  02cf338  stb 8, 49(28)
  02cf33c  stb 4, 32(28)
  02cf340  lfs 1, 12(30)
  02cf344  lwz 5, 36(28)
  02cf348  lfs 2, 36(5)
  02cf34c  fmuls 1, 2, 1
  02cf350  stfs 1, 44(28)
  02cf354  stb 4, 27(25)
  02cf358  stb 26, 26(25)
  02cf35c  stb 27, 28(25)
  02cf360  bl 0xf31a8
  02cf364  nop
  02cf368  ori 3, 28, 0
  02cf36c  ld 0, 208(1)
  02cf370  mtlr 0
  02cf374  lfd 30, 176(1)
  02cf378  lfd 31, 184(1)
  02cf37c  ld 25, 120(1)
  02cf380  ld 26, 128(1)
  02cf384  ld 27, 136(1)
  02cf388  ld 28, 144(1)
  02cf38c  ld 29, 152(1)
  02cf390  ld 30, 160(1)
  02cf394  ld 31, 168(1)
  02cf398  addi 1, 1, 192
  02cf39c  blr

M1886_002cf3a0:   # 0x2cf3a0, 0x6c bytes
  02cf3a0  stdu 1, -112(1)
  02cf3a4  mflr 0
  02cf3a8  std 0, 128(1)
  02cf3ac  lwz 5, 16(4)
  02cf3b0  cmpwi 5, 0
  02cf3b4  bt 2, 0x2cf3f4
  02cf3b8  lhz 6, 166(5)
  02cf3bc  cmpwi 6, 1885
  02cf3c0  bf 2, 0x2cf3f4
  02cf3c4  lbz 6, 32(5)
  02cf3c8  cmpwi 1, 6, 253
  02cf3cc  cmpwi 6, 254
  02cf3d0  cror 2, 2, 6
  02cf3d4  bt 2, 0x2cf3f4
  02cf3d8  lbz 4, 28(4)
  02cf3dc  li 6, 0
  02cf3e0  lwz 5, 120(5)
  02cf3e4  slwi 4, 4, 2
  02cf3e8  addc 4, 5, 4
  02cf3ec  clrldi 4, 4, 32
  02cf3f0  stw 6, 176(4)
  02cf3f4  bl 0xefb38
  02cf3f8  nop
  02cf3fc  ld 0, 128(1)
  02cf400  mtlr 0
  02cf404  addi 1, 1, 112
  02cf408  blr

UpdateMoby_1886:   # 0x2cf460, 0x11b0 bytes
  02cf460  stdu 1, -352(1)
  02cf464  mflr 0
  02cf468  std 0, 368(1)
  02cf46c  stfd 31, 344(1)
  02cf470  std 31, 336(1)
  02cf474  std 30, 328(1)
  02cf478  ori 31, 3, 0
  02cf47c  lwz 30, 120(31)
  02cf480  std 29, 320(1)
  02cf484  std 28, 312(1)
  02cf488  addic 3, 30, 27
  02cf48c  bl 0x5000b4
  02cf490  nop
  02cf494  lfs 1, 16(31)
  02cf498  lfs 2, 20(31)
  02cf49c  stfs 1, 112(1)
  02cf4a0  lfs 3, 24(31)
  02cf4a4  stfs 2, 116(1)
  02cf4a8  lfs 4, 28(31)
  02cf4ac  lbz 3, 32(31)
  02cf4b0  stfs 3, 120(1)
  02cf4b4  cmpwi 3, 0
  02cf4b8  stfs 4, 124(1)
  02cf4bc  bt 1, 0x2cf4cc
  02cf4c0  cmpwi 3, -1
  02cf4c4  bf 1, 0x2d0464
  02cf4c8  b 0x2cf4e0
  02cf4cc  cmpwi 3, 1
  02cf4d0  bf 1, 0x2d02bc
  02cf4d4  cmpwi 3, 2
  02cf4d8  bf 1, 0x2d032c
  02cf4dc  b 0x2d0464
  02cf4e0  lis 3, 45
  02cf4e4  lfs 4, 44(31)
  02cf4e8  lis 29, 114
  02cf4ec  addi 3, 3, -3060
  02cf4f0  lfs 5, 0(3)
  02cf4f4  lwz 4, 36(31)
  02cf4f8  lfs 6, -3064(29)
  02cf4fc  fmuls 5, 6, 5
  02cf500  lfs 7, 36(4)
  02cf504  fsubs 7, 7, 4
  02cf508  fmadds 4, 5, 7, 4
  02cf50c  stfs 4, 44(31)
  02cf510  lfs 4, 0(30)
  02cf514  fadds 1, 1, 4
  02cf518  stfs 1, 16(31)
  02cf51c  lfs 4, 4(30)
  02cf520  fadds 2, 2, 4
  02cf524  stfs 2, 20(31)
  02cf528  lfs 4, 8(30)
  02cf52c  fadds 3, 3, 4
  02cf530  stfs 3, 24(31)
  02cf534  lfs 4, 4(30)
  02cf538  lfs 5, 0(30)
  02cf53c  fmuls 4, 4, 4
  02cf540  lfs 6, 8(30)
  02cf544  lfs 31, 4(3)
  02cf548  fmadds 4, 5, 5, 4
  02cf54c  fmadds 4, 6, 6, 4
  02cf550  fsqrts 4, 4
  02cf554  fcmpu 0, 4, 31
  02cf558  bf 2, 0x2cf584
  02cf55c  fmr 6, 31
  02cf560  stfs 5, 128(1)
  02cf564  lfs 4, 4(30)
  02cf568  stfs 4, 132(1)
  02cf56c  lfs 4, 8(30)
  02cf570  stfs 4, 136(1)
  02cf574  lfs 7, 12(30)
  02cf578  fmr 5, 6
  02cf57c  fmr 4, 5
  02cf580  b 0x2cf5b8
  02cf584  lis 3, 45
  02cf588  addi 3, 3, -3060
  02cf58c  lfs 6, 8(3)
  02cf590  fdivs 6, 6, 4
  02cf594  fmuls 4, 5, 6
  02cf598  stfs 4, 128(1)
  02cf59c  lfs 5, 4(30)
  02cf5a0  fmuls 5, 5, 6
  02cf5a4  stfs 5, 132(1)
  02cf5a8  lfs 7, 8(30)
  02cf5ac  fmuls 6, 7, 6
  02cf5b0  stfs 6, 136(1)
  02cf5b4  lfs 7, 12(30)
  02cf5b8  fadds 1, 4, 1
  02cf5bc  fadds 2, 5, 2
  02cf5c0  li 8, 0
  02cf5c4  fadds 3, 6, 3
  02cf5c8  stfs 7, 140(1)
  02cf5cc  addic 3, 1, 112
  02cf5d0  addic 4, 1, 128
  02cf5d4  stw 8, 148(31)
  02cf5d8  li 5, 4
  02cf5dc  lwz 9, 16(30)
  02cf5e0  ori 6, 31, 0
  02cf5e4  li 7, 0
  02cf5e8  stfs 1, 128(1)
  02cf5ec  stfs 2, 132(1)
  02cf5f0  stfs 3, 136(1)
  02cf5f4  stw 8, 148(9)
  02cf5f8  bl 0x57820
  02cf5fc  nop
  02cf600  lfs 1, 16(31)
  02cf604  cmpwi 3, 0
  02cf608  lfs 2, 20(31)
  02cf60c  lfs 3, 24(31)
  02cf610  bt 2, 0x2cfba8
  02cf614  lis 28, 161
  02cf618  lfs 4, 132(1)
  02cf61c  addic 28, 28, 2368
  02cf620  lis 3, 45
  02cf624  lfs 5, 36(28)
  02cf628  lfs 6, 32(28)
  02cf62c  fsubs 4, 5, 4
  02cf630  lfs 5, 128(1)
  02cf634  fsubs 5, 6, 5
  02cf638  lfs 6, 40(28)
  02cf63c  lfs 7, 136(1)
  02cf640  fsubs 6, 6, 7
  02cf644  fmuls 7, 4, 4
  02cf648  addi 3, 3, -3060
  02cf64c  stfs 5, 128(1)
  02cf650  stfs 4, 132(1)
  02cf654  lfs 8, 44(28)
  02cf658  fmadds 7, 5, 5, 7
  02cf65c  stfs 6, 136(1)
  02cf660  stfs 8, 140(1)
  02cf664  lfs 8, 12(3)
  02cf668  fmadds 7, 6, 6, 7
  02cf66c  lwz 3, 24(28)
  02cf670  cmpwi 3, 0
  02cf674  fsqrts 7, 7
  02cf678  fdivs 8, 8, 7
  02cf67c  fsub 9, 31, 7
  02cf680  fsub 10, 31, 7
  02cf684  fsub 11, 31, 7
  02cf688  fsub 12, 7, 31
  02cf68c  fsub 13, 7, 31
  02cf690  fsub 7, 7, 31
  02cf694  fmuls 5, 5, 8
  02cf698  fmuls 4, 4, 8
  02cf69c  fmuls 6, 6, 8
  02cf6a0  fsel 8, 9, 31, 5
  02cf6a4  fsel 9, 10, 31, 4
  02cf6a8  fsel 10, 11, 31, 6
  02cf6ac  fsel 5, 12, 8, 5
  02cf6b0  fsel 4, 13, 9, 4
  02cf6b4  fsel 6, 7, 10, 6
  02cf6b8  fadds 1, 1, 5
  02cf6bc  fadds 2, 2, 4
  02cf6c0  fadds 3, 3, 6
  02cf6c4  stfs 5, 128(1)
  02cf6c8  stfs 4, 132(1)
  02cf6cc  stfs 6, 136(1)
  02cf6d0  stfs 1, 16(31)
  02cf6d4  stfs 2, 20(31)
  02cf6d8  stfs 3, 24(31)
  02cf6dc  bf 2, 0x2cf92c
  02cf6e0  addic 5, 28, 64
  02cf6e4  ori 3, 30, 0
  02cf6e8  ori 4, 30, 0
  02cf6ec  bl 0x500608
  02cf6f0  nop
  02cf6f4  lfs 1, 68(28)
  02cf6f8  lfs 2, 64(28)
  02cf6fc  fmuls 1, 1, 1
  02cf700  lwz 4, 72(28)
  02cf704  lis 3, 115
  02cf708  addic 3, 3, 22784
  02cf70c  fmadds 1, 2, 2, 1
  02cf710  lfs 2, 72(28)
  02cf714  fabs 3, 2
  02cf718  fsqrts 1, 1
  02cf71c  fabs 4, 1
  02cf720  stfs 1, 168(1)
  02cf724  fsubs 1, 3, 4
  02cf728  stfs 1, 172(1)
  02cf72c  lwz 5, 168(1)
  02cf730  lfs 1, 168(1)
  02cf734  lwz 6, 172(1)
  02cf738  rlwinm 5, 5, 3, 29, 29
  02cf73c  fabs 2, 1
  02cf740  lfs 1, 172(1)
  02cf744  rlwimi 5, 6, 2, 30, 30
  02cf748  fsub 5, 1, 31
  02cf74c  fsub 6, 1, 31
  02cf750  rlwimi 5, 4, 4, 28, 28
  02cf754  ori 4, 3, 0
  02cf758  rlwimi 4, 5, 2, 26, 28
  02cf75c  slwi 5, 5, 2
  02cf760  clrldi 4, 4, 32
  02cf764  fsel 4, 5, 3, 4
  02cf768  lfsx 1, 3, 5
  02cf76c  fsel 3, 6, 2, 3
  02cf770  lfs 2, 4(4)
  02cf774  fcmpu 0, 4, 31
  02cf778  bt 1, 0x2cf784
  02cf77c  fmr 1, 31
  02cf780  b 0x2cf8a8
  02cf784  fsubs 5, 3, 4
  02cf788  fadds 3, 3, 4
  02cf78c  addic 3, 1, 16
  02cf790  li 6, 2
  02cf794  addic 4, 3, 256
  02cf798  addic 5, 3, 272
  02cf79c  mtctr 6
  02cf7a0  fdivs 3, 5, 3
  02cf7a4  fmuls 4, 3, 3
  02cf7a8  stfs 3, 284(1)
  02cf7ac  stfs 3, 276(1)
  02cf7b0  stfs 3, 280(1)
  02cf7b4  stfs 3, 272(1)
  02cf7b8  lfs 6, 284(1)
  02cf7bc  lfs 7, 276(1)
  02cf7c0  lfs 8, 280(1)
  02cf7c4  fmuls 5, 4, 4
  02cf7c8  fmuls 7, 7, 4
  02cf7cc  fmuls 6, 6, 5
  02cf7d0  fmuls 3, 5, 5
  02cf7d4  fmuls 5, 8, 5
  02cf7d8  stfs 7, 276(1)
  02cf7dc  fmuls 4, 6, 4
  02cf7e0  stfs 5, 280(1)
  02cf7e4  stfs 4, 284(1)
  02cf7e8  lfs 4, 256(3)
  02cf7ec  fmuls 4, 4, 3
  02cf7f0  stfs 4, 272(3)
  02cf7f4  lfs 4, 4(4)
  02cf7f8  addic 3, 3, 8
  02cf7fc  addic 4, 4, 8
  02cf800  fmuls 4, 4, 3
  02cf804  stfs 4, 4(5)
  02cf808  addic 5, 5, 8
  02cf80c  bdnz 0x2cf7e8
  02cf810  li 5, 4
  02cf814  ori 3, 1, 0
  02cf818  mtctr 5
  02cf81c  lis 4, 115
  02cf820  addic 5, 3, 272
  02cf824  addic 4, 4, 22752
  02cf828  ori 7, 5, 0
  02cf82c  lfs 3, 272(3)
  02cf830  lfs 4, 0(4)
  02cf834  fmuls 3, 3, 4
  02cf838  lfs 4, 4(4)
  02cf83c  addic 4, 4, 8
  02cf840  stfs 3, 272(3)
  02cf844  lfs 3, 4(5)
  02cf848  addic 3, 3, 8
  02cf84c  fmuls 3, 3, 4
  02cf850  stfs 3, 4(5)
  02cf854  addic 5, 5, 8
  02cf858  bdnz 0x2cf82c
  02cf85c  fmr 3, 31
  02cf860  ori 3, 1, 0
  02cf864  mtctr 6
  02cf868  lfs 4, 272(3)
  02cf86c  fadds 3, 3, 4
  02cf870  addic 3, 3, 16
  02cf874  lfs 4, 4(7)
  02cf878  lfs 5, 8(7)
  02cf87c  lfs 6, 12(7)
  02cf880  addic 7, 7, 16
  02cf884  fadds 3, 3, 4
  02cf888  fadds 3, 3, 5
  02cf88c  fadds 3, 3, 6
  02cf890  bdnz 0x2cf868
  02cf894  lis 3, 45
  02cf898  addi 3, 3, -3060
  02cf89c  lfs 4, 16(3)
  02cf8a0  fadds 3, 3, 4
  02cf8a4  fmadds 1, 3, 1, 2
  02cf8a8  lis 3, 45
  02cf8ac  addi 3, 3, -3060
  02cf8b0  lfs 2, 20(3)
  02cf8b4  fcmpu 0, 1, 2
  02cf8b8  cror 6, 1, 2
  02cf8bc  bt 6, 0x2cfb80
  02cf8c0  bl 0x60780
  02cf8c4  nop
  02cf8c8  cmpwi 3, -1
  02cf8cc  bf 2, 0x2cfb80
  02cf8d0  lis 3, 45
  02cf8d4  lfs 1, 4(30)
  02cf8d8  addi 3, 3, -3060
  02cf8dc  lfs 2, 24(3)
  02cf8e0  lfs 3, 0(30)
  02cf8e4  fmuls 1, 1, 2
  02cf8e8  lfs 4, 8(30)
  02cf8ec  fmuls 3, 3, 2
  02cf8f0  fmuls 2, 4, 2
  02cf8f4  fmuls 4, 1, 1
  02cf8f8  stfs 3, 0(30)
  02cf8fc  stfs 1, 4(30)
  02cf900  stfs 2, 8(30)
  02cf904  fmadds 4, 3, 3, 4
  02cf908  fmadds 3, 2, 2, 4
  02cf90c  lfs 2, 28(3)
  02cf910  fsqrts 1, 3
  02cf914  fcmpu 0, 1, 2
  02cf918  cror 6, 1, 2
  02cf91c  bt 6, 0x2cfb80
  02cf920  li 3, 1
  02cf924  stb 3, 32(31)
  02cf928  b 0x2cfb80
  02cf92c  lhz 3, 166(3)
  02cf930  cmpwi 3, 1886
  02cf934  bt 2, 0x2cfb5c
  02cf938  addic 5, 28, 64
  02cf93c  ori 3, 30, 0
  02cf940  ori 4, 30, 0
  02cf944  bl 0x500608
  02cf948  nop
  02cf94c  lfs 1, 68(28)
  02cf950  lfs 2, 64(28)
  02cf954  fmuls 1, 1, 1
  02cf958  lwz 4, 72(28)
  02cf95c  lis 3, 115
  02cf960  addic 3, 3, 22784
  02cf964  fmadds 1, 2, 2, 1
  02cf968  lfs 2, 72(28)
  02cf96c  fabs 3, 2
  02cf970  fsqrts 1, 1
  02cf974  fabs 4, 1
  02cf978  stfs 1, 160(1)
  02cf97c  fsubs 1, 3, 4
  02cf980  stfs 1, 164(1)
  02cf984  lwz 5, 160(1)
  02cf988  lfs 1, 160(1)
  02cf98c  lwz 6, 164(1)
  02cf990  rlwinm 5, 5, 3, 29, 29
  02cf994  fabs 2, 1
  02cf998  lfs 1, 164(1)
  02cf99c  rlwimi 5, 6, 2, 30, 30
  02cf9a0  fsub 5, 1, 31
  02cf9a4  fsub 6, 1, 31
  02cf9a8  rlwimi 5, 4, 4, 28, 28
  02cf9ac  ori 4, 3, 0
  02cf9b0  rlwimi 4, 5, 2, 26, 28
  02cf9b4  slwi 5, 5, 2
  02cf9b8  clrldi 4, 4, 32
  02cf9bc  fsel 4, 5, 3, 4
  02cf9c0  lfsx 1, 3, 5
  02cf9c4  fsel 3, 6, 2, 3
  02cf9c8  lfs 2, 4(4)
  02cf9cc  fcmpu 0, 4, 31
  02cf9d0  bt 1, 0x2cf9dc
  02cf9d4  fmr 1, 31
  02cf9d8  b 0x2cfb00
  02cf9dc  fsubs 5, 3, 4
  02cf9e0  fadds 3, 3, 4
  02cf9e4  addic 3, 1, 16
  02cf9e8  li 7, 2
  02cf9ec  addic 4, 3, 224
  02cf9f0  addic 5, 3, 240
  02cf9f4  mtctr 7
  02cf9f8  fdivs 3, 5, 3
  02cf9fc  fmuls 4, 3, 3
  02cfa00  stfs 3, 252(1)
  02cfa04  stfs 3, 244(1)
  02cfa08  stfs 3, 248(1)
  02cfa0c  stfs 3, 240(1)
  02cfa10  lfs 6, 252(1)
  02cfa14  lfs 7, 244(1)
  02cfa18  lfs 8, 248(1)
  02cfa1c  fmuls 5, 4, 4
  02cfa20  fmuls 7, 7, 4
  02cfa24  fmuls 6, 6, 5
  02cfa28  fmuls 3, 5, 5
  02cfa2c  fmuls 5, 8, 5
  02cfa30  stfs 7, 244(1)
  02cfa34  fmuls 4, 6, 4
  02cfa38  stfs 5, 248(1)
  02cfa3c  stfs 4, 252(1)
  02cfa40  lfs 4, 224(3)
  02cfa44  fmuls 4, 4, 3
  02cfa48  stfs 4, 240(3)
  02cfa4c  lfs 4, 4(4)
  02cfa50  addic 3, 3, 8
  02cfa54  addic 4, 4, 8
  02cfa58  fmuls 4, 4, 3
  02cfa5c  stfs 4, 4(5)
  02cfa60  addic 5, 5, 8
  02cfa64  bdnz 0x2cfa40
  02cfa68  li 5, 4
  02cfa6c  ori 3, 1, 0
  02cfa70  mtctr 5
  02cfa74  lis 4, 115
  02cfa78  addic 5, 3, 240
  02cfa7c  addic 4, 4, 22752
  02cfa80  ori 6, 5, 0
  02cfa84  lfs 3, 240(3)
  02cfa88  lfs 4, 0(4)
  02cfa8c  fmuls 3, 3, 4
  02cfa90  lfs 4, 4(4)
  02cfa94  addic 4, 4, 8
  02cfa98  stfs 3, 240(3)
  02cfa9c  lfs 3, 4(5)
  02cfaa0  addic 3, 3, 8
  02cfaa4  fmuls 3, 3, 4
  02cfaa8  stfs 3, 4(5)
  02cfaac  addic 5, 5, 8
  02cfab0  bdnz 0x2cfa84
  02cfab4  fmr 3, 31
  02cfab8  ori 3, 1, 0
  02cfabc  mtctr 7
  02cfac0  lfs 4, 240(3)
  02cfac4  fadds 3, 3, 4
  02cfac8  addic 3, 3, 16
  02cfacc  lfs 4, 4(6)
  02cfad0  lfs 5, 8(6)
  02cfad4  lfs 6, 12(6)
  02cfad8  addic 6, 6, 16
  02cfadc  fadds 3, 3, 4
  02cfae0  fadds 3, 3, 5
  02cfae4  fadds 3, 3, 6
  02cfae8  bdnz 0x2cfac0
  02cfaec  lis 3, 45
  02cfaf0  addi 3, 3, -3060
  02cfaf4  lfs 4, 16(3)
  02cfaf8  fadds 3, 3, 4
  02cfafc  fmadds 1, 3, 1, 2
  02cfb00  lis 3, 45
  02cfb04  addi 3, 3, -3060
  02cfb08  lfs 2, 20(3)
  02cfb0c  fcmpu 0, 1, 2
  02cfb10  cror 6, 1, 2
  02cfb14  bt 6, 0x2cfb80
  02cfb18  bl 0x60780
  02cfb1c  nop
  02cfb20  cmpwi 3, -1
  02cfb24  bf 2, 0x2cfb80
  02cfb28  lis 3, 45
  02cfb2c  lfs 1, 0(30)
  02cfb30  addi 3, 3, -3060
  02cfb34  lfs 2, 32(3)
  02cfb38  lfs 3, 4(30)
  02cfb3c  lfs 4, 8(30)
  02cfb40  fmuls 1, 1, 2
  02cfb44  fmuls 3, 3, 2
  02cfb48  fmuls 2, 4, 2
  02cfb4c  stfs 1, 0(30)
  02cfb50  stfs 3, 4(30)
  02cfb54  stfs 2, 8(30)
  02cfb58  b 0x2cfb80
  02cfb5c  lis 3, 45
  02cfb60  addi 3, 3, -3060
  02cfb64  lfs 1, 36(3)
  02cfb68  lfs 2, 40(3)
  02cfb6c  bl 0xfcbe8
  02cfb70  nop
  02cfb74  lfs 2, 8(30)
  02cfb78  fmuls 1, 2, 1
  02cfb7c  stfs 1, 8(30)
  02cfb80  lbz 3, 27(30)
  02cfb84  cmpwi 3, 0
  02cfb88  bf 2, 0x2cfba8
  02cfb8c  li 3, 0
  02cfb90  li 4, 0
  02cfb94  ori 5, 31, 0
  02cfb98  bl 0x15d12c
  02cfb9c  nop
  02cfba0  li 3, 12
  02cfba4  stb 3, 27(30)
  02cfba8  lis 4, 45
  02cfbac  addic 3, 31, 16
  02cfbb0  addi 4, 4, -3060
  02cfbb4  li 5, 4
  02cfbb8  ori 6, 31, 0
  02cfbbc  lfs 1, 8(4)
  02cfbc0  bl 0x59e20
  02cfbc4  nop
  02cfbc8  cmpwi 3, 0
  02cfbcc  bt 2, 0x2d0164
  02cfbd0  lis 28, 161
  02cfbd4  addic 28, 28, 2368
  02cfbd8  lis 3, 45
  02cfbdc  lfs 1, 36(28)
  02cfbe0  lfs 2, 52(28)
  02cfbe4  lfs 3, 32(28)
  02cfbe8  fsubs 1, 1, 2
  02cfbec  lfs 2, 48(28)
  02cfbf0  lfs 4, 40(28)
  02cfbf4  lfs 5, 56(28)
  02cfbf8  fsubs 3, 3, 2
  02cfbfc  fsubs 4, 4, 5
  02cfc00  addi 3, 3, -3060
  02cfc04  fmuls 5, 1, 1
  02cfc08  stfs 3, 128(1)
  02cfc0c  stfs 1, 132(1)
  02cfc10  lfs 6, 44(28)
  02cfc14  fmadds 5, 3, 3, 5
  02cfc18  stfs 4, 136(1)
  02cfc1c  stfs 6, 140(1)
  02cfc20  lfs 6, 44(3)
  02cfc24  lwz 3, 24(28)
  02cfc28  fmadds 5, 4, 4, 5
  02cfc2c  cmpwi 3, 0
  02cfc30  fsqrts 5, 5
  02cfc34  fdivs 6, 6, 5
  02cfc38  fsub 7, 31, 5
  02cfc3c  fsub 9, 31, 5
  02cfc40  fsub 11, 31, 5
  02cfc44  fsub 8, 5, 31
  02cfc48  fsub 10, 5, 31
  02cfc4c  fsub 5, 5, 31
  02cfc50  fmuls 3, 3, 6
  02cfc54  fmuls 1, 1, 6
  02cfc58  fmuls 4, 4, 6
  02cfc5c  fsel 6, 7, 31, 3
  02cfc60  fsel 7, 9, 31, 1
  02cfc64  fsel 9, 11, 31, 4
  02cfc68  fsel 3, 8, 6, 3
  02cfc6c  fsel 1, 10, 7, 1
  02cfc70  fsel 4, 5, 9, 4
  02cfc74  fadds 2, 2, 3
  02cfc78  stfs 3, 128(1)
  02cfc7c  stfs 1, 132(1)
  02cfc80  stfs 4, 136(1)
  02cfc84  stfs 2, 16(31)
  02cfc88  lfs 2, 52(28)
  02cfc8c  fadds 1, 2, 1
  02cfc90  stfs 1, 20(31)
  02cfc94  lfs 1, 56(28)
  02cfc98  fadds 1, 1, 4
  02cfc9c  stfs 1, 24(31)
  02cfca0  lfs 1, 60(28)
  02cfca4  stfs 1, 28(31)
  02cfca8  bf 2, 0x2cfef0
  02cfcac  addic 5, 28, 64
  02cfcb0  ori 3, 30, 0
  02cfcb4  ori 4, 30, 0
  02cfcb8  bl 0x500608
  02cfcbc  nop
  02cfcc0  lfs 1, 68(28)
  02cfcc4  lfs 2, 64(28)
  02cfcc8  fmuls 1, 1, 1
  02cfccc  lwz 4, 72(28)
  02cfcd0  lis 3, 115
  02cfcd4  addic 3, 3, 22784
  02cfcd8  fmadds 1, 2, 2, 1
  02cfcdc  lfs 2, 72(28)
  02cfce0  fabs 3, 2
  02cfce4  fsqrts 1, 1
  02cfce8  fabs 4, 1
  02cfcec  stfs 1, 152(1)
  02cfcf0  fsubs 1, 3, 4
  02cfcf4  stfs 1, 156(1)
  02cfcf8  lwz 5, 152(1)
  02cfcfc  lfs 1, 152(1)
  02cfd00  lwz 6, 156(1)
  02cfd04  fabs 5, 1
  02cfd08  rlwinm 5, 5, 3, 29, 29
  02cfd0c  lfs 1, 156(1)
  02cfd10  rlwimi 5, 6, 2, 30, 30
  02cfd14  fsub 2, 1, 31
  02cfd18  fsub 6, 1, 31
  02cfd1c  rlwimi 5, 4, 4, 28, 28
  02cfd20  ori 4, 3, 0
  02cfd24  rlwimi 4, 5, 2, 26, 28
  02cfd28  slwi 5, 5, 2
  02cfd2c  clrldi 4, 4, 32
  02cfd30  fsel 4, 2, 3, 4
  02cfd34  lfsx 1, 3, 5
  02cfd38  fsel 3, 6, 5, 3
  02cfd3c  lfs 2, 4(4)
  02cfd40  fcmpu 0, 4, 31
  02cfd44  bt 1, 0x2cfd4c
  02cfd48  b 0x2cfe6c
  02cfd4c  fsubs 5, 3, 4
  02cfd50  fadds 3, 3, 4
  02cfd54  addic 3, 1, 16
  02cfd58  li 6, 2
  02cfd5c  addic 4, 3, 192
  02cfd60  addic 5, 3, 208
  02cfd64  mtctr 6
  02cfd68  fdivs 3, 5, 3
  02cfd6c  fmuls 4, 3, 3
  02cfd70  stfs 3, 220(1)
  02cfd74  stfs 3, 212(1)
  02cfd78  stfs 3, 216(1)
  02cfd7c  stfs 3, 208(1)
  02cfd80  lfs 6, 220(1)
  02cfd84  lfs 7, 212(1)
  02cfd88  lfs 8, 216(1)
  02cfd8c  fmuls 5, 4, 4
  02cfd90  fmuls 7, 7, 4
  02cfd94  fmuls 6, 6, 5
  02cfd98  fmuls 3, 5, 5
  02cfd9c  fmuls 5, 8, 5
  02cfda0  stfs 7, 212(1)
  02cfda4  fmuls 4, 6, 4
  02cfda8  stfs 5, 216(1)
  02cfdac  stfs 4, 220(1)
  02cfdb0  lfs 4, 192(3)
  02cfdb4  fmuls 4, 4, 3
  02cfdb8  stfs 4, 208(3)
  02cfdbc  lfs 4, 4(4)
  02cfdc0  addic 3, 3, 8
  02cfdc4  addic 4, 4, 8
  02cfdc8  fmuls 4, 4, 3
  02cfdcc  stfs 4, 4(5)
  02cfdd0  addic 5, 5, 8
  02cfdd4  bdnz 0x2cfdb0
  02cfdd8  li 5, 4
  02cfddc  ori 3, 1, 0
  02cfde0  mtctr 5
  02cfde4  lis 4, 115
  02cfde8  addic 5, 3, 208
  02cfdec  addic 4, 4, 22752
  02cfdf0  ori 7, 5, 0
  02cfdf4  lfs 3, 208(3)
  02cfdf8  lfs 4, 0(4)
  02cfdfc  fmuls 3, 3, 4
  02cfe00  lfs 4, 4(4)
  02cfe04  addic 4, 4, 8
  02cfe08  stfs 3, 208(3)
  02cfe0c  lfs 3, 4(5)
  02cfe10  addic 3, 3, 8
  02cfe14  fmuls 3, 3, 4
  02cfe18  stfs 3, 4(5)
  02cfe1c  addic 5, 5, 8
  02cfe20  bdnz 0x2cfdf4
  02cfe24  ori 3, 1, 0
  02cfe28  mtctr 6
  02cfe2c  lfs 3, 208(3)
  02cfe30  lfs 4, 4(7)
  02cfe34  fadds 3, 31, 3
  02cfe38  lfs 5, 8(7)
  02cfe3c  lfs 31, 12(7)
  02cfe40  addic 3, 3, 16
  02cfe44  addic 7, 7, 16
  02cfe48  fadds 3, 3, 4
  02cfe4c  fadds 3, 3, 5
  02cfe50  fadds 31, 3, 31
  02cfe54  bdnz 0x2cfe2c
  02cfe58  lis 3, 45
  02cfe5c  addi 3, 3, -3060
  02cfe60  lfs 3, 16(3)
  02cfe64  fadds 31, 31, 3
  02cfe68  fmadds 31, 31, 1, 2
  02cfe6c  lis 3, 45
  02cfe70  addi 3, 3, -3060
  02cfe74  lfs 1, 20(3)
  02cfe78  fcmpu 0, 31, 1
  02cfe7c  cror 6, 1, 2
  02cfe80  bt 6, 0x2d013c
  02cfe84  bl 0x60780
  02cfe88  nop
  02cfe8c  cmpwi 3, -1
  02cfe90  bf 2, 0x2d013c
  02cfe94  lis 3, 45
  02cfe98  lfs 1, 4(30)
  02cfe9c  addi 3, 3, -3060
  02cfea0  lfs 2, 24(3)
  02cfea4  lfs 3, 0(30)
  02cfea8  fmuls 1, 1, 2
  02cfeac  lfs 4, 8(30)
  02cfeb0  fmuls 3, 3, 2
  02cfeb4  fmuls 2, 4, 2
  02cfeb8  fmuls 4, 1, 1
  02cfebc  stfs 3, 0(30)
  02cfec0  stfs 1, 4(30)
  02cfec4  stfs 2, 8(30)
  02cfec8  fmadds 4, 3, 3, 4
  02cfecc  fmadds 4, 2, 2, 4
  02cfed0  lfs 2, 28(3)
  02cfed4  fsqrts 1, 4
  02cfed8  fcmpu 0, 1, 2
  02cfedc  cror 6, 1, 2
  02cfee0  bt 6, 0x2d013c
  02cfee4  li 3, 1
  02cfee8  stb 3, 32(31)
  02cfeec  b 0x2d013c
  02cfef0  lhz 3, 166(3)
  02cfef4  cmpwi 3, 1886
  02cfef8  bt 2, 0x2d0118
  02cfefc  addic 5, 28, 64
  02cff00  ori 3, 30, 0
  02cff04  ori 4, 30, 0
  02cff08  bl 0x500608
  02cff0c  nop
  02cff10  lfs 1, 68(28)
  02cff14  lfs 2, 64(28)
  02cff18  fmuls 1, 1, 1
  02cff1c  lwz 4, 72(28)
  02cff20  lis 3, 115
  02cff24  addic 3, 3, 22784
  02cff28  fmadds 1, 2, 2, 1
  02cff2c  lfs 2, 72(28)
  02cff30  fabs 3, 2
  02cff34  fsqrts 1, 1
  02cff38  fabs 4, 1
  02cff3c  stfs 1, 144(1)
  02cff40  fsubs 1, 3, 4
  02cff44  stfs 1, 148(1)
  02cff48  lwz 5, 144(1)
  02cff4c  lfs 1, 144(1)
  02cff50  lwz 6, 148(1)
  02cff54  fabs 5, 1
  02cff58  rlwinm 5, 5, 3, 29, 29
  02cff5c  lfs 1, 148(1)
  02cff60  rlwimi 5, 6, 2, 30, 30
  02cff64  fsub 2, 1, 31
  02cff68  fsub 6, 1, 31
  02cff6c  rlwimi 5, 4, 4, 28, 28
  02cff70  ori 4, 3, 0
  02cff74  rlwimi 4, 5, 2, 26, 28
  02cff78  slwi 5, 5, 2
  02cff7c  clrldi 4, 4, 32
  02cff80  fsel 4, 2, 3, 4
  02cff84  lfsx 1, 3, 5
  02cff88  fsel 3, 6, 5, 3
  02cff8c  lfs 2, 4(4)
  02cff90  fcmpu 0, 4, 31
  02cff94  bt 1, 0x2cff9c
  02cff98  b 0x2d00bc
  02cff9c  fsubs 5, 3, 4
  02cffa0  fadds 3, 3, 4
  02cffa4  addic 3, 1, 16
  02cffa8  li 6, 2
  02cffac  addic 4, 3, 160
  02cffb0  addic 5, 3, 176
  02cffb4  mtctr 6
  02cffb8  fdivs 3, 5, 3
  02cffbc  fmuls 4, 3, 3
  02cffc0  stfs 3, 188(1)
  02cffc4  stfs 3, 180(1)
  02cffc8  stfs 3, 184(1)
  02cffcc  stfs 3, 176(1)
  02cffd0  lfs 6, 188(1)
  02cffd4  lfs 7, 180(1)
  02cffd8  lfs 8, 184(1)
  02cffdc  fmuls 5, 4, 4
  02cffe0  fmuls 7, 7, 4
  02cffe4  fmuls 6, 6, 5
  02cffe8  fmuls 3, 5, 5
  02cffec  fmuls 5, 8, 5
  02cfff0  stfs 7, 180(1)
  02cfff4  fmuls 4, 6, 4
  02cfff8  stfs 5, 184(1)
  02cfffc  stfs 4, 188(1)
  02d0000  lfs 4, 160(3)
  02d0004  fmuls 4, 4, 3
  02d0008  stfs 4, 176(3)
  02d000c  lfs 4, 4(4)
  02d0010  addic 3, 3, 8
  02d0014  addic 4, 4, 8
  02d0018  fmuls 4, 4, 3
  02d001c  stfs 4, 4(5)
  02d0020  addic 5, 5, 8
  02d0024  bdnz 0x2d0000
  02d0028  li 5, 4
  02d002c  ori 3, 1, 0
  02d0030  mtctr 5
  02d0034  lis 4, 115
  02d0038  addic 5, 3, 176
  02d003c  addic 4, 4, 22752
  02d0040  ori 7, 5, 0
  02d0044  lfs 3, 176(3)
  02d0048  lfs 4, 0(4)
  02d004c  fmuls 3, 3, 4
  02d0050  lfs 4, 4(4)
  02d0054  addic 4, 4, 8
  02d0058  stfs 3, 176(3)
  02d005c  lfs 3, 4(5)
  02d0060  addic 3, 3, 8
  02d0064  fmuls 3, 3, 4
  02d0068  stfs 3, 4(5)
  02d006c  addic 5, 5, 8
  02d0070  bdnz 0x2d0044
  02d0074  ori 3, 1, 0
  02d0078  mtctr 6
  02d007c  lfs 3, 176(3)
  02d0080  lfs 4, 4(7)
  02d0084  fadds 3, 31, 3
  02d0088  lfs 5, 8(7)
  02d008c  lfs 31, 12(7)
  02d0090  addic 3, 3, 16
  02d0094  addic 7, 7, 16
  02d0098  fadds 3, 3, 4
  02d009c  fadds 3, 3, 5
  02d00a0  fadds 31, 3, 31
  02d00a4  bdnz 0x2d007c
  02d00a8  lis 3, 45
  02d00ac  addi 3, 3, -3060
  02d00b0  lfs 3, 16(3)
  02d00b4  fadds 31, 31, 3
  02d00b8  fmadds 31, 31, 1, 2
  02d00bc  lis 3, 45
  02d00c0  addi 3, 3, -3060
  02d00c4  lfs 1, 20(3)
  02d00c8  fcmpu 0, 31, 1
  02d00cc  cror 6, 1, 2
  02d00d0  bt 6, 0x2d013c
  02d00d4  bl 0x60780
  02d00d8  nop
  02d00dc  cmpwi 3, -1
  02d00e0  bf 2, 0x2d013c
  02d00e4  lis 3, 45
  02d00e8  lfs 1, 0(30)
  02d00ec  addi 3, 3, -3060
  02d00f0  lfs 2, 32(3)
  02d00f4  lfs 3, 4(30)
  02d00f8  lfs 4, 8(30)
  02d00fc  fmuls 1, 1, 2
  02d0100  fmuls 3, 3, 2
  02d0104  fmuls 2, 4, 2
  02d0108  stfs 1, 0(30)
  02d010c  stfs 3, 4(30)
  02d0110  stfs 2, 8(30)
  02d0114  b 0x2d013c
  02d0118  lis 3, 45
  02d011c  addi 3, 3, -3060
  02d0120  lfs 1, 36(3)
  02d0124  lfs 2, 40(3)
  02d0128  bl 0xfcbe8
  02d012c  nop
  02d0130  lfs 2, 8(30)
  02d0134  fmuls 1, 2, 1
  02d0138  stfs 1, 8(30)
  02d013c  lbz 3, 27(30)
  02d0140  cmpwi 3, 0
  02d0144  bf 2, 0x2d0164
  02d0148  li 3, 0
  02d014c  li 4, 0
  02d0150  ori 5, 31, 0
  02d0154  bl 0x15d12c
  02d0158  nop
  02d015c  li 3, 12
  02d0160  stb 3, 27(30)
  02d0164  lis 4, 45
  02d0168  lwz 5, 16(30)
  02d016c  li 3, 0
  02d0170  addi 4, 4, -3060
  02d0174  lfs 6, 48(4)
  02d0178  lfs 7, 52(4)
  02d017c  lfs 8, 56(4)
  02d0180  lwz 5, 120(5)
  02d0184  lwz 4, 176(5)
  02d0188  cmpwi 1, 4, 0
  02d018c  cmpw 4, 31
  02d0190  cror 2, 2, 6
  02d0194  bt 2, 0x2d0208
  02d0198  lhz 6, 166(4)
  02d019c  cmpwi 6, 1886
  02d01a0  bf 2, 0x2d0208
  02d01a4  lbz 6, 32(4)
  02d01a8  cmpwi 1, 6, 253
  02d01ac  cmpwi 6, 254
  02d01b0  cror 2, 2, 6
  02d01b4  bt 2, 0x2d0208
  02d01b8  lfs 5, 20(31)
  02d01bc  lfs 2, 20(4)
  02d01c0  lfs 4, 16(31)
  02d01c4  fsubs 2, 5, 2
  02d01c8  lfs 1, 16(4)
  02d01cc  fsubs 1, 4, 1
  02d01d0  fmuls 3, 2, 2
  02d01d4  fmadds 3, 1, 1, 3
  02d01d8  fsqrts 3, 3
  02d01dc  fcmpu 0, 3, 6
  02d01e0  cror 6, 1, 2
  02d01e4  bt 6, 0x2d0208
  02d01e8  lfs 9, -3064(29)
  02d01ec  fsubs 3, 6, 3
  02d01f0  fmadds 9, 9, 7, 8
  02d01f4  fmuls 3, 3, 9
  02d01f8  fmadds 1, 1, 3, 4
  02d01fc  fmadds 2, 2, 3, 5
  02d0200  stfs 1, 16(31)
  02d0204  stfs 2, 20(31)
  02d0208  addic 3, 3, 1
  02d020c  addic 5, 5, 4
  02d0210  cmpwi 3, 20
  02d0214  bt 0, 0x2d0184
  02d0218  addic 3, 30, 24
  02d021c  bl 0x4fffb4
  02d0220  nop
  02d0224  cmpwi 3, 0
  02d0228  bt 2, 0x2d0234
  02d022c  li 3, 2
  02d0230  stb 3, 32(31)
  02d0234  lfs 1, 0(30)
  02d0238  bl 0x10de78
  02d023c  nop
  02d0240  stfs 1, 64(31)
  02d0244  lfs 1, 4(30)
  02d0248  bl 0x10de78
  02d024c  nop
  02d0250  lwz 3, 36(31)
  02d0254  stfs 1, 68(31)
  02d0258  lis 4, 45
  02d025c  lis 5, 114
  02d0260  addi 4, 4, -3060
  02d0264  lwz 3, 16(3)
  02d0268  stw 3, 148(31)
  02d026c  lwz 3, 16(30)
  02d0270  lwz 6, 36(3)
  02d0274  lwz 6, 16(6)
  02d0278  stw 6, 148(3)
  02d027c  lfs 1, 60(4)
  02d0280  lfs 2, 8(30)
  02d0284  lfs 3, -3048(5)
  02d0288  fnmsubs 1, 3, 1, 2
  02d028c  stfs 1, 8(30)
  02d0290  lfs 1, 64(4)
  02d0294  lfs 2, 64(31)
  02d0298  lfs 3, -3064(29)
  02d029c  lfs 4, 68(31)
  02d02a0  fmadds 1, 3, 1, 2
  02d02a4  stfs 1, 64(31)
  02d02a8  lfs 1, 68(4)
  02d02ac  lfs 2, -3064(29)
  02d02b0  fmadds 1, 2, 1, 4
  02d02b4  stfs 1, 68(31)
  02d02b8  b 0x2d0464
  02d02bc  lis 3, 45
  02d02c0  li 4, 0
  02d02c4  addi 29, 3, -3060
  02d02c8  addic 3, 31, 16
  02d02cc  lfs 1, 24(29)
  02d02d0  bl 0xffb70
  02d02d4  nop
  02d02d8  lfs 2, 8(29)
  02d02dc  lfs 3, 16(31)
  02d02e0  li 4, 0
  02d02e4  fadds 1, 1, 2
  02d02e8  lwz 3, 16(30)
  02d02ec  stfs 1, 24(31)
  02d02f0  lfs 2, 4(29)
  02d02f4  stfs 3, 64(1)
  02d02f8  lfs 3, 20(31)
  02d02fc  stfs 1, 72(1)
  02d0300  stw 4, 28(31)
  02d0304  stfs 3, 68(1)
  02d0308  stfs 2, 76(1)
  02d030c  ld 5, 64(1)
  02d0310  ld 6, 72(1)
  02d0314  bl 0x2ce020
  02d0318  nop
  02d031c  stw 3, 20(30)
  02d0320  li 3, 2
  02d0324  stb 3, 32(31)
  02d0328  b 0x2d0464
  02d032c  lis 3, 45
  02d0330  lis 4, 114
  02d0334  addi 3, 3, -3060
  02d0338  lfs 1, 0(3)
  02d033c  lfs 2, -3064(4)
  02d0340  lfs 3, 44(31)
  02d0344  fmuls 2, 2, 1
  02d0348  lwz 3, 20(30)
  02d034c  cmpwi 3, 0
  02d0350  fnmsubs 2, 2, 3, 3
  02d0354  stfs 2, 44(31)
  02d0358  bt 2, 0x2d0390
  02d035c  lbz 4, 26(30)
  02d0360  cmpwi 4, 0
  02d0364  bt 2, 0x2d0390
  02d0368  lis 4, 114
  02d036c  lwz 5, 36(3)
  02d0370  lfs 2, -3064(4)
  02d0374  lfs 3, 44(3)
  02d0378  lfs 4, 36(5)
  02d037c  fmuls 2, 2, 1
  02d0380  fsubs 4, 4, 3
  02d0384  fmadds 2, 2, 4, 3
  02d0388  stfs 2, 44(3)
  02d038c  lfs 2, 44(31)
  02d0390  lis 3, 114
  02d0394  lfs 3, -3064(3)
  02d0398  lwz 3, 36(31)
  02d039c  fmuls 1, 3, 1
  02d03a0  lfs 3, 36(3)
  02d03a4  fmuls 1, 1, 3
  02d03a8  fcmpu 0, 2, 1
  02d03ac  cror 6, 1, 2
  02d03b0  bt 6, 0x2d0464
  02d03b4  lis 3, 14545
  02d03b8  ori 4, 3, 46871
  02d03bc  lwz 3, 20(30)
  02d03c0  cmpwi 3, 0
  02d03c4  stw 4, 44(31)
  02d03c8  bt 2, 0x2d0410
  02d03cc  lbz 4, 32(3)
  02d03d0  cmpwi 1, 4, 253
  02d03d4  cmpwi 4, 254
  02d03d8  cror 2, 2, 6
  02d03dc  bt 2, 0x2d0410
  02d03e0  lbz 4, 26(30)
  02d03e4  cmpwi 4, 0
  02d03e8  bt 2, 0x2d0410
  02d03ec  lis 4, 45
  02d03f0  lwz 5, 36(3)
  02d03f4  addi 4, 4, -3060
  02d03f8  lfs 1, 64(4)
  02d03fc  lfs 2, 36(5)
  02d0400  lfs 3, 44(3)
  02d0404  fsubs 1, 2, 1
  02d0408  fcmpu 0, 3, 1
  02d040c  bt 0, 0x2d0464
  02d0410  lwz 3, 16(30)
  02d0414  cmpwi 3, 0
  02d0418  bt 2, 0x2d0458
  02d041c  lhz 4, 166(3)
  02d0420  cmpwi 4, 1885
  02d0424  bf 2, 0x2d0458
  02d0428  lbz 4, 32(3)
  02d042c  cmpwi 1, 4, 253
  02d0430  cmpwi 4, 254
  02d0434  cror 2, 2, 6
  02d0438  bt 2, 0x2d0458
  02d043c  lbz 5, 28(30)
  02d0440  li 4, 0
  02d0444  lwz 3, 120(3)
  02d0448  slwi 5, 5, 2
  02d044c  addc 3, 3, 5
  02d0450  clrldi 3, 3, 32
  02d0454  stw 4, 176(3)
  02d0458  ori 3, 31, 0
  02d045c  bl 0xefb38
  02d0460  nop
  02d0464  lis 3, 45
  02d0468  lfs 1, 44(31)
  02d046c  addi 29, 3, -3060
  02d0470  ori 3, 31, 0
  02d0474  lfs 2, 72(29)
  02d0478  lwz 4, 36(31)
  02d047c  fmuls 1, 1, 2
  02d0480  lfs 3, 36(4)
  02d0484  fdivs 1, 1, 3
  02d0488  bl 0x106150
  02d048c  nop
  02d0490  lwz 3, 24(31)
  02d0494  lwz 4, 20(31)
  02d0498  lis 5, 16544
  02d049c  srawi 6, 3, 31
  02d04a0  lfs 2, 76(29)
  02d04a4  srawi 7, 4, 31
  02d04a8  lfs 1, 24(31)
  02d04ac  srwi 8, 6, 1
  02d04b0  lfs 4, 20(31)
  02d04b4  srwi 9, 7, 1
  02d04b8  xor 3, 8, 3
  02d04bc  xor 4, 9, 4
  02d04c0  subc 3, 3, 6
  02d04c4  subc 4, 4, 7
  02d04c8  cmpw 3, 5
  02d04cc  bt 0, 0x2d04dc
  02d04d0  lis 5, 17402
  02d04d4  cmpw 3, 5
  02d04d8  bf 1, 0x2d0534
  02d04dc  lwz 3, 16(30)
  02d04e0  cmpwi 3, 0
  02d04e4  bt 2, 0x2d0524
  02d04e8  lhz 4, 166(3)
  02d04ec  cmpwi 4, 1885
  02d04f0  bf 2, 0x2d0524
  02d04f4  lbz 4, 32(3)
  02d04f8  cmpwi 1, 4, 253
  02d04fc  cmpwi 4, 254
  02d0500  cror 2, 2, 6
  02d0504  bt 2, 0x2d0524
  02d0508  lbz 5, 28(30)
  02d050c  lwz 3, 120(3)
  02d0510  li 4, 0
  02d0514  slwi 5, 5, 2
  02d0518  addc 3, 3, 5
  02d051c  clrldi 3, 3, 32
  02d0520  stw 4, 176(3)
  02d0524  ori 3, 31, 0
  02d0528  bl 0xefb38
  02d052c  nop
  02d0530  b 0x2d05ec
  02d0534  lwz 6, 16(31)
  02d0538  lis 5, 16544
  02d053c  lfs 3, 16(31)
  02d0540  srawi 7, 6, 31
  02d0544  srwi 8, 7, 1
  02d0548  xor 6, 8, 6
  02d054c  subc 6, 6, 7
  02d0550  cmpw 6, 5
  02d0554  bf 0, 0x2d0564
  02d0558  lis 5, 16544
  02d055c  fmr 3, 2
  02d0560  stw 5, 16(31)
  02d0564  fmr 5, 3
  02d0568  lis 5, 45
  02d056c  addi 5, 5, -3060
  02d0570  lfs 3, 80(5)
  02d0574  fcmpu 0, 5, 3
  02d0578  cror 6, 0, 2
  02d057c  bt 6, 0x2d058c
  02d0580  lis 5, 17534
  02d0584  ori 5, 5, 32768
  02d0588  stw 5, 16(31)
  02d058c  lis 5, 16544
  02d0590  cmpw 4, 5
  02d0594  bf 0, 0x2d05a4
  02d0598  lis 4, 16544
  02d059c  fmr 4, 2
  02d05a0  stw 4, 20(31)
  02d05a4  fcmpu 0, 4, 3
  02d05a8  cror 6, 0, 2
  02d05ac  bt 6, 0x2d05bc
  02d05b0  lis 4, 17534
  02d05b4  ori 4, 4, 32768
  02d05b8  stw 4, 20(31)
  02d05bc  lis 4, 16544
  02d05c0  cmpw 3, 4
  02d05c4  bf 0, 0x2d05d4
  02d05c8  lis 3, 16544
  02d05cc  fmr 1, 2
  02d05d0  stw 3, 24(31)
  02d05d4  fcmpu 0, 1, 3
  02d05d8  cror 6, 0, 2
  02d05dc  bt 6, 0x2d05ec
  02d05e0  lis 3, 17534
  02d05e4  ori 3, 3, 32768
  02d05e8  stw 3, 24(31)
  02d05ec  ld 0, 368(1)
  02d05f0  mtlr 0
  02d05f4  lfd 31, 344(1)
  02d05f8  ld 28, 312(1)
  02d05fc  ld 29, 320(1)
  02d0600  ld 30, 328(1)
  02d0604  ld 31, 336(1)
  02d0608  addi 1, 1, 352
  02d060c  blr
