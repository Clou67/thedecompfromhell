# sdk/libc/fs_posix_api.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

copy_stat:   # 0x5cef94, 0x8c bytes
  05cef94  lwz 0, 4(3)
  05cef98  li 9, 0
  05cef9c  stw 0, 16(4)
  05cefa0  lwz 11, 8(3)
  05cefa4  stw 9, 68(4)
  05cefa8  stw 11, 20(4)
  05cefac  stw 9, 0(4)
  05cefb0  stw 9, 4(4)
  05cefb4  stw 9, 12(4)
  05cefb8  stw 9, 24(4)
  05cefbc  lwz 0, 12(3)
  05cefc0  lwz 9, 16(3)
  05cefc4  sldi 0, 0, 32
  05cefc8  lwz 11, 0(3)
  05cefcc  or 9, 9, 0
  05cefd0  std 9, 40(4)
  05cefd4  lwz 0, 20(3)
  05cefd8  lwz 9, 24(3)
  05cefdc  sldi 0, 0, 32
  05cefe0  or 9, 9, 0
  05cefe4  std 9, 48(4)
  05cefe8  lwz 0, 28(3)
  05cefec  lwz 9, 32(3)
  05ceff0  sldi 0, 0, 32
  05ceff4  stw 11, 8(4)
  05ceff8  or 9, 9, 0
  05ceffc  std 9, 56(4)
  05cf000  lwz 0, 36(3)
  05cf004  lwz 9, 40(3)
  05cf008  sldi 0, 0, 32
  05cf00c  or 9, 9, 0
  05cf010  std 9, 32(4)
  05cf014  lwz 0, 48(3)
  05cf018  stw 0, 64(4)
  05cf01c  blr

FUN_005cf020:   # 0x5cf020, 0x54 bytes
  05cf020  stdu 1, -128(1)
  05cf024  mflr 0
  05cf028  std 31, 120(1)
  05cf02c  std 0, 144(1)
  05cf030  li 11, 834
  05cf034  sc
  05cf038  mr 31, 3
  05cf03c  li 3, 0
  05cf040  cmpwi 7, 31, 0
  05cf044  bf- 30, 0x5cf060
  05cf048  ld 0, 144(1)
  05cf04c  extsw 3, 3
  05cf050  ld 31, 120(1)
  05cf054  addi 1, 1, 128
  05cf058  mtlr 0
  05cf05c  blr
  05cf060  bl 0x5d5904
  05cf064  nop
  05cf068  stw 31, 0(3)
  05cf06c  li 3, -1
  05cf070  b 0x5cf048

utime:   # 0x5cf074, 0x94 bytes
  05cf074  cmpdi 4, 0
  05cf078  mflr 0
  05cf07c  stdu 1, -144(1)
  05cf080  mr 9, 4
  05cf084  std 31, 136(1)
  05cf088  std 0, 160(1)
  05cf08c  li 11, 815
  05cf090  addi 4, 1, 112
  05cf094  clrldi 3, 3, 32
  05cf098  bt- 2, 0x5cf0ec
  05cf09c  ld 0, 0(9)
  05cf0a0  std 0, 112(1)
  05cf0a4  ld 9, 8(9)
  05cf0a8  std 9, 120(1)
  05cf0ac  sc
  05cf0b0  cmpwi 7, 3, 0
  05cf0b4  mr 31, 3
  05cf0b8  li 9, 0
  05cf0bc  bf- 30, 0x5cf0d8
  05cf0c0  ld 0, 160(1)
  05cf0c4  extsw 3, 9
  05cf0c8  ld 31, 136(1)
  05cf0cc  addi 1, 1, 144
  05cf0d0  mtlr 0
  05cf0d4  blr
  05cf0d8  bl 0x5d5904
  05cf0dc  nop
  05cf0e0  li 9, -1
  05cf0e4  stw 31, 0(3)
  05cf0e8  b 0x5cf0c0
  05cf0ec  bl 0x5d5904
  05cf0f0  nop
  05cf0f4  lis 0, -32767
  05cf0f8  li 9, -1
  05cf0fc  ori 0, 0, 13
  05cf100  stw 0, 0(3)
  05cf104  b 0x5cf0c0

FUN_005cf108:   # 0x5cf108, 0x54 bytes
  05cf108  stdu 1, -128(1)
  05cf10c  mflr 0
  05cf110  std 31, 120(1)
  05cf114  std 0, 144(1)
  05cf118  li 11, 811
  05cf11c  sc
  05cf120  mr 31, 3
  05cf124  li 3, 0
  05cf128  cmpwi 7, 31, 0
  05cf12c  bf- 30, 0x5cf148
  05cf130  ld 0, 144(1)
  05cf134  extsw 3, 3
  05cf138  ld 31, 120(1)
  05cf13c  addi 1, 1, 128
  05cf140  mtlr 0
  05cf144  blr
  05cf148  bl 0x5d5904
  05cf14c  nop
  05cf150  stw 31, 0(3)
  05cf154  li 3, -1
  05cf158  b 0x5cf130

FUN_005cf15c:   # 0x5cf15c, 0x54 bytes
  05cf15c  stdu 1, -128(1)
  05cf160  mflr 0
  05cf164  std 31, 120(1)
  05cf168  std 0, 144(1)
  05cf16c  li 11, 813
  05cf170  sc
  05cf174  mr 31, 3
  05cf178  li 3, 0
  05cf17c  cmpwi 7, 31, 0
  05cf180  bf- 30, 0x5cf19c
  05cf184  ld 0, 144(1)
  05cf188  extsw 3, 3
  05cf18c  ld 31, 120(1)
  05cf190  addi 1, 1, 128
  05cf194  mtlr 0
  05cf198  blr
  05cf19c  bl 0x5d5904
  05cf1a0  nop
  05cf1a4  stw 31, 0(3)
  05cf1a8  li 3, -1
  05cf1ac  b 0x5cf184

FUN_005cf1b0:   # 0x5cf1b0, 0x7c bytes
  05cf1b0  stdu 1, -208(1)
  05cf1b4  mflr 0
  05cf1b8  std 29, 184(1)
  05cf1bc  addi 29, 1, 112
  05cf1c0  std 31, 200(1)
  05cf1c4  std 30, 192(1)
  05cf1c8  mr 31, 4
  05cf1cc  std 0, 224(1)
  05cf1d0  li 11, 808
  05cf1d4  mr 4, 29
  05cf1d8  sc
  05cf1dc  cmpwi 7, 3, 0
  05cf1e0  mr 30, 3
  05cf1e4  clrldi 4, 31, 32
  05cf1e8  mr 3, 29
  05cf1ec  bf 30, 0x5cf218
  05cf1f0  bl 0x5cef94
  05cf1f4  li 0, 0
  05cf1f8  extsw 3, 0
  05cf1fc  ld 0, 224(1)
  05cf200  ld 29, 184(1)
  05cf204  ld 30, 192(1)
  05cf208  mtlr 0
  05cf20c  ld 31, 200(1)
  05cf210  addi 1, 1, 208
  05cf214  blr
  05cf218  bl 0x5d5904
  05cf21c  nop
  05cf220  li 0, -1
  05cf224  stw 30, 0(3)
  05cf228  b 0x5cf1f8

FUN_005cf22c:   # 0x5cf22c, 0x7c bytes
  05cf22c  stdu 1, -208(1)
  05cf230  mflr 0
  05cf234  std 29, 184(1)
  05cf238  addi 29, 1, 112
  05cf23c  std 31, 200(1)
  05cf240  std 30, 192(1)
  05cf244  mr 31, 4
  05cf248  std 0, 224(1)
  05cf24c  li 11, 809
  05cf250  mr 4, 29
  05cf254  sc
  05cf258  cmpwi 7, 3, 0
  05cf25c  mr 30, 3
  05cf260  clrldi 4, 31, 32
  05cf264  mr 3, 29
  05cf268  bf 30, 0x5cf294
  05cf26c  bl 0x5cef94
  05cf270  li 0, 0
  05cf274  extsw 3, 0
  05cf278  ld 0, 224(1)
  05cf27c  ld 29, 184(1)
  05cf280  ld 30, 192(1)
  05cf284  mtlr 0
  05cf288  ld 31, 200(1)
  05cf28c  addi 1, 1, 208
  05cf290  blr
  05cf294  bl 0x5d5904
  05cf298  nop
  05cf29c  li 0, -1
  05cf2a0  stw 30, 0(3)
  05cf2a4  b 0x5cf274

FUN_005cf2a8:   # 0x5cf2a8, 0x54 bytes
  05cf2a8  stdu 1, -128(1)
  05cf2ac  mflr 0
  05cf2b0  std 31, 120(1)
  05cf2b4  std 0, 144(1)
  05cf2b8  li 11, 831
  05cf2bc  sc
  05cf2c0  mr 31, 3
  05cf2c4  li 3, 0
  05cf2c8  cmpwi 7, 31, 0
  05cf2cc  bf- 30, 0x5cf2e8
  05cf2d0  ld 0, 144(1)
  05cf2d4  extsw 3, 3
  05cf2d8  ld 31, 120(1)
  05cf2dc  addi 1, 1, 128
  05cf2e0  mtlr 0
  05cf2e4  blr
  05cf2e8  bl 0x5d5904
  05cf2ec  nop
  05cf2f0  stw 31, 0(3)
  05cf2f4  li 3, -1
  05cf2f8  b 0x5cf2d0

FUN_005cf2fc:   # 0x5cf2fc, 0x54 bytes
  05cf2fc  stdu 1, -128(1)
  05cf300  mflr 0
  05cf304  std 31, 120(1)
  05cf308  std 0, 144(1)
  05cf30c  li 11, 832
  05cf310  sc
  05cf314  mr 31, 3
  05cf318  li 3, 0
  05cf31c  cmpwi 7, 31, 0
  05cf320  bf- 30, 0x5cf33c
  05cf324  ld 0, 144(1)
  05cf328  extsw 3, 3
  05cf32c  ld 31, 120(1)
  05cf330  addi 1, 1, 128
  05cf334  mtlr 0
  05cf338  blr
  05cf33c  bl 0x5d5904
  05cf340  nop
  05cf344  stw 31, 0(3)
  05cf348  li 3, -1
  05cf34c  b 0x5cf324

fsync:   # 0x5cf350, 0x80 bytes
  05cf350  stdu 1, -128(1)
  05cf354  mflr 0
  05cf358  std 31, 120(1)
  05cf35c  std 0, 144(1)
  05cf360  mr 0, 3
  05cf364  li 11, 820
  05cf368  cmplwi 7, 0, 2
  05cf36c  extsw 3, 3
  05cf370  bf- 29, 0x5cf3a0
  05cf374  sc
  05cf378  cmpwi 7, 3, 0
  05cf37c  mr 31, 3
  05cf380  li 9, 0
  05cf384  bf- 30, 0x5cf3bc
  05cf388  ld 0, 144(1)
  05cf38c  extsw 3, 9
  05cf390  ld 31, 120(1)
  05cf394  addi 1, 1, 128
  05cf398  mtlr 0
  05cf39c  blr
  05cf3a0  bl 0x5d5904
  05cf3a4  nop
  05cf3a8  lis 0, -32767
  05cf3ac  li 9, -1
  05cf3b0  ori 0, 0, 42
  05cf3b4  stw 0, 0(3)
  05cf3b8  b 0x5cf388
  05cf3bc  bl 0x5d5904
  05cf3c0  nop
  05cf3c4  li 9, -1
  05cf3c8  stw 31, 0(3)
  05cf3cc  b 0x5cf388

FUN_005cf3d0:   # 0x5cf3d0, 0x54 bytes
  05cf3d0  stdu 1, -128(1)
  05cf3d4  mflr 0
  05cf3d8  std 31, 120(1)
  05cf3dc  std 0, 144(1)
  05cf3e0  li 11, 812
  05cf3e4  sc
  05cf3e8  mr 31, 3
  05cf3ec  li 3, 0
  05cf3f0  cmpwi 7, 31, 0
  05cf3f4  bf- 30, 0x5cf410
  05cf3f8  ld 0, 144(1)
  05cf3fc  extsw 3, 3
  05cf400  ld 31, 120(1)
  05cf404  addi 1, 1, 128
  05cf408  mtlr 0
  05cf40c  blr
  05cf410  bl 0x5d5904
  05cf414  nop
  05cf418  stw 31, 0(3)
  05cf41c  li 3, -1
  05cf420  b 0x5cf3f8

FUN_005cf424:   # 0x5cf424, 0x54 bytes
  05cf424  stdu 1, -128(1)
  05cf428  mflr 0
  05cf42c  std 31, 120(1)
  05cf430  std 0, 144(1)
  05cf434  li 11, 810
  05cf438  sc
  05cf43c  mr 31, 3
  05cf440  li 3, 0
  05cf444  cmpwi 7, 31, 0
  05cf448  bf- 30, 0x5cf464
  05cf44c  ld 0, 144(1)
  05cf450  extsw 3, 3
  05cf454  ld 31, 120(1)
  05cf458  addi 1, 1, 128
  05cf45c  mtlr 0
  05cf460  blr
  05cf464  bl 0x5d5904
  05cf468  nop
  05cf46c  stw 31, 0(3)
  05cf470  li 3, -1
  05cf474  b 0x5cf44c

FUN_005cf478:   # 0x5cf478, 0x54 bytes
  05cf478  stdu 1, -128(1)
  05cf47c  mflr 0
  05cf480  std 31, 120(1)
  05cf484  std 0, 144(1)
  05cf488  li 11, 814
  05cf48c  sc
  05cf490  mr 31, 3
  05cf494  li 3, 0
  05cf498  cmpwi 7, 31, 0
  05cf49c  bf- 30, 0x5cf4b8
  05cf4a0  ld 0, 144(1)
  05cf4a4  extsw 3, 3
  05cf4a8  ld 31, 120(1)
  05cf4ac  addi 1, 1, 128
  05cf4b0  mtlr 0
  05cf4b4  blr
  05cf4b8  bl 0x5d5904
  05cf4bc  nop
  05cf4c0  stw 31, 0(3)
  05cf4c4  li 3, -1
  05cf4c8  b 0x5cf4a0

lseek64:   # 0x5cf4cc, 0x88 bytes
  05cf4cc  stdu 1, -144(1)
  05cf4d0  mflr 0
  05cf4d4  std 31, 136(1)
  05cf4d8  std 0, 160(1)
  05cf4dc  mr 0, 3
  05cf4e0  addi 6, 1, 112
  05cf4e4  cmplwi 7, 0, 2
  05cf4e8  extsw 3, 3
  05cf4ec  li 11, 818
  05cf4f0  extsw 5, 5
  05cf4f4  bf- 29, 0x5cf524
  05cf4f8  sc
  05cf4fc  cmpwi 7, 3, 0
  05cf500  mr 31, 3
  05cf504  bf- 30, 0x5cf540
  05cf508  ld 9, 112(1)
  05cf50c  ld 0, 160(1)
  05cf510  mr 3, 9
  05cf514  ld 31, 136(1)
  05cf518  addi 1, 1, 144
  05cf51c  mtlr 0
  05cf520  blr
  05cf524  bl 0x5d5904
  05cf528  nop
  05cf52c  lis 0, -32767
  05cf530  li 9, -1
  05cf534  ori 0, 0, 42
  05cf538  stw 0, 0(3)
  05cf53c  b 0x5cf50c
  05cf540  bl 0x5d5904
  05cf544  nop
  05cf548  li 9, -1
  05cf54c  stw 31, 0(3)
  05cf550  b 0x5cf50c

close:   # 0x5cf554, 0x64 bytes
  05cf554  stdu 1, -128(1)
  05cf558  mflr 0
  05cf55c  std 31, 120(1)
  05cf560  std 0, 144(1)
  05cf564  mr 0, 3
  05cf568  li 11, 804
  05cf56c  cmplwi 7, 0, 2
  05cf570  extsw 3, 3
  05cf574  bf 29, 0x5cf588
  05cf578  sc
  05cf57c  cmpwi 7, 3, 0
  05cf580  mr 31, 3
  05cf584  bf- 30, 0x5cf5a4
  05cf588  li 0, 0
  05cf58c  extsw 3, 0
  05cf590  ld 0, 144(1)
  05cf594  ld 31, 120(1)
  05cf598  addi 1, 1, 128
  05cf59c  mtlr 0
  05cf5a0  blr
  05cf5a4  bl 0x5d5904
  05cf5a8  nop
  05cf5ac  li 0, -1
  05cf5b0  stw 31, 0(3)
  05cf5b4  b 0x5cf58c

open:   # 0x5cf5b8, 0x98 bytes
  05cf5b8  stdu 1, -144(1)
  05cf5bc  mflr 0
  05cf5c0  addi 9, 1, 208
  05cf5c4  std 0, 160(1)
  05cf5c8  rlwinm 0, 4, 0, 25, 25
  05cf5cc  clrldi 10, 9, 32
  05cf5d0  cmpwi 7, 0, 0
  05cf5d4  std 5, 208(1)
  05cf5d8  std 31, 136(1)
  05cf5dc  extsw 4, 4
  05cf5e0  li 7, 0
  05cf5e4  li 8, 0
  05cf5e8  li 11, 801
  05cf5ec  addi 9, 9, 8
  05cf5f0  addi 5, 1, 112
  05cf5f4  li 6, 0
  05cf5f8  clrldi 3, 3, 32
  05cf5fc  bf 30, 0x5cf62c
  05cf600  sc
  05cf604  cmpwi 7, 3, 0
  05cf608  mr 31, 3
  05cf60c  bf- 30, 0x5cf63c
  05cf610  lwz 0, 112(1)
  05cf614  extsw 3, 0
  05cf618  ld 0, 160(1)
  05cf61c  ld 31, 136(1)
  05cf620  addi 1, 1, 144
  05cf624  mtlr 0
  05cf628  blr
  05cf62c  lwz 0, 4(10)
  05cf630  stw 9, 116(1)
  05cf634  extsw 6, 0
  05cf638  b 0x5cf600
  05cf63c  bl 0x5d5904
  05cf640  nop
  05cf644  li 0, -1
  05cf648  stw 31, 0(3)
  05cf64c  b 0x5cf614

readdir:   # 0x5cf650, 0x17c bytes
  05cf650  mfcr 12
  05cf654  cmpdi 3, 0
  05cf658  stdu 1, -416(1)
  05cf65c  std 31, 408(1)
  05cf660  std 29, 392(1)
  05cf664  std 30, 400(1)
  05cf668  mr 31, 3
  05cf66c  stw 12, 424(1)
  05cf670  mflr 0
  05cf674  std 0, 432(1)
  05cf678  bt- 2, 0x5cf7b0
  05cf67c  lwz 3, 16(3)
  05cf680  li 4, 0
  05cf684  li 11, 102
  05cf688  sc
  05cf68c  cmpwi 4, 3, 0
  05cf690  bf 18, 0x5cf794
  05cf694  lwz 0, 8(31)
  05cf698  lwz 9, 12(31)
  05cf69c  cmpw 7, 0, 9
  05cf6a0  bf 28, 0x5cf75c
  05cf6a4  lwz 3, 0(31)
  05cf6a8  addi 4, 1, 120
  05cf6ac  addi 5, 1, 112
  05cf6b0  extsw 3, 3
  05cf6b4  li 11, 806
  05cf6b8  sc
  05cf6bc  cmpwi 7, 3, 0
  05cf6c0  mr 30, 3
  05cf6c4  bf 30, 0x5cf750
  05cf6c8  ld 0, 112(1)
  05cf6cc  cmpdi 7, 0, 0
  05cf6d0  bt 30, 0x5cf75c
  05cf6d4  lwz 3, 8(31)
  05cf6d8  addi 4, 1, 122
  05cf6dc  lwz 0, 4(31)
  05cf6e0  mulli 3, 3, 268
  05cf6e4  add 3, 3, 0
  05cf6e8  clrldi 29, 3, 32
  05cf6ec  addi 3, 3, 11
  05cf6f0  clrldi 3, 3, 32
  05cf6f4  stw 30, 4(29)
  05cf6f8  sth 30, 8(29)
  05cf6fc  stw 30, 0(29)
  05cf700  lbz 0, 120(1)
  05cf704  stb 0, 10(29)
  05cf708  bl 0x5cc8d8
  05cf70c  nop
  05cf710  lwz 9, 8(31)
  05cf714  lwz 3, 16(31)
  05cf718  addi 9, 9, 1
  05cf71c  li 11, 104
  05cf720  stw 9, 8(31)
  05cf724  sc
  05cf728  ld 0, 432(1)
  05cf72c  mr 3, 29
  05cf730  lwz 12, 424(1)
  05cf734  ld 29, 392(1)
  05cf738  mtlr 0
  05cf73c  ld 30, 400(1)
  05cf740  mtocrf 8, 12
  05cf744  ld 31, 408(1)
  05cf748  addi 1, 1, 416
  05cf74c  blr
  05cf750  bl 0x5d5904
  05cf754  nop
  05cf758  stw 30, 0(3)
  05cf75c  lwz 3, 16(31)
  05cf760  li 11, 104
  05cf764  sc
  05cf768  li 29, 0
  05cf76c  ld 0, 432(1)
  05cf770  lwz 12, 424(1)
  05cf774  mr 3, 29
  05cf778  ld 30, 400(1)
  05cf77c  ld 29, 392(1)
  05cf780  mtlr 0
  05cf784  ld 31, 408(1)
  05cf788  mtocrf 8, 12
  05cf78c  addi 1, 1, 416
  05cf790  blr
  05cf794  bl 0x5d5904
  05cf798  nop
  05cf79c  lis 0, -32767
  05cf7a0  li 29, 0
  05cf7a4  ori 0, 0, 42
  05cf7a8  stw 0, 0(3)
  05cf7ac  b 0x5cf728
  05cf7b0  bl 0x5d5904
  05cf7b4  nop
  05cf7b8  lis 0, -32767
  05cf7bc  li 29, 0
  05cf7c0  ori 0, 0, 13
  05cf7c4  stw 0, 0(3)
  05cf7c8  b 0x5cf728

closedir:   # 0x5cf7cc, 0x108 bytes
  05cf7cc  cmpwi 7, 3, 0
  05cf7d0  mflr 0
  05cf7d4  stdu 1, -144(1)
  05cf7d8  std 29, 120(1)
  05cf7dc  std 31, 136(1)
  05cf7e0  std 30, 128(1)
  05cf7e4  std 0, 160(1)
  05cf7e8  mr 31, 3
  05cf7ec  li 4, 0
  05cf7f0  li 11, 102
  05cf7f4  clrldi 29, 3, 32
  05cf7f8  bt- 30, 0x5cf8b8
  05cf7fc  lwz 3, 16(3)
  05cf800  sc
  05cf804  cmpwi 7, 3, 0
  05cf808  li 11, 807
  05cf80c  bf- 30, 0x5cf89c
  05cf810  lwz 3, 0(31)
  05cf814  extsw 3, 3
  05cf818  sc
  05cf81c  cmpwi 7, 3, 0
  05cf820  mr 30, 3
  05cf824  li 11, 104
  05cf828  bf 30, 0x5cf87c
  05cf82c  lwz 3, 16(31)
  05cf830  sc
  05cf834  li 11, 101
  05cf838  lwz 3, 16(31)
  05cf83c  sc
  05cf840  lwz 3, 4(31)
  05cf844  bl 0x5d580c
  05cf848  nop
  05cf84c  mr 3, 29
  05cf850  bl 0x5d580c
  05cf854  nop
  05cf858  li 9, 0
  05cf85c  ld 0, 160(1)
  05cf860  extsw 3, 9
  05cf864  ld 29, 120(1)
  05cf868  ld 30, 128(1)
  05cf86c  mtlr 0
  05cf870  ld 31, 136(1)
  05cf874  addi 1, 1, 144
  05cf878  blr
  05cf87c  bl 0x5d5904
  05cf880  nop
  05cf884  li 11, 104
  05cf888  stw 30, 0(3)
  05cf88c  lwz 3, 16(31)
  05cf890  sc
  05cf894  li 9, -1
  05cf898  b 0x5cf85c
  05cf89c  bl 0x5d5904
  05cf8a0  nop
  05cf8a4  lis 0, -32767
  05cf8a8  li 9, -1
  05cf8ac  ori 0, 0, 42
  05cf8b0  stw 0, 0(3)
  05cf8b4  b 0x5cf85c
  05cf8b8  bl 0x5d5904
  05cf8bc  nop
  05cf8c0  lis 0, -32767
  05cf8c4  li 9, -1
  05cf8c8  ori 0, 0, 13
  05cf8cc  stw 0, 0(3)
  05cf8d0  b 0x5cf85c

opendir:   # 0x5cf8d4, 0x23c bytes
  05cf8d4  stdu 1, -480(1)
  05cf8d8  mflr 0
  05cf8dc  std 27, 440(1)
  05cf8e0  std 28, 448(1)
  05cf8e4  std 29, 456(1)
  05cf8e8  std 30, 464(1)
  05cf8ec  std 31, 472(1)
  05cf8f0  std 0, 496(1)
  05cf8f4  mr 27, 3
  05cf8f8  addi 4, 1, 116
  05cf8fc  li 11, 805
  05cf900  sc
  05cf904  cmpwi 7, 3, 0
  05cf908  mr 31, 3
  05cf90c  bf 30, 0x5cf994
  05cf910  addi 28, 1, 168
  05cf914  lwz 3, 116(1)
  05cf918  addi 29, 1, 120
  05cf91c  extsw 3, 3
  05cf920  mr 4, 28
  05cf924  mr 5, 29
  05cf928  li 11, 806
  05cf92c  sc
  05cf930  cmpwi 7, 3, 0
  05cf934  mr 31, 3
  05cf938  bf 30, 0x5cf984
  05cf93c  ld 0, 120(1)
  05cf940  li 30, 0
  05cf944  cmpdi 7, 0, 0
  05cf948  bf 30, 0x5cf95c
  05cf94c  b 0x5cfab8
  05cf950  ld 0, 120(1)
  05cf954  cmpdi 7, 0, 0
  05cf958  bt 30, 0x5cf9cc
  05cf95c  lwz 3, 116(1)
  05cf960  mr 4, 28
  05cf964  mr 5, 29
  05cf968  extsw 3, 3
  05cf96c  li 11, 806
  05cf970  sc
  05cf974  cmpwi 7, 3, 0
  05cf978  mr 31, 3
  05cf97c  addi 30, 30, 1
  05cf980  bt 30, 0x5cf950
  05cf984  lwz 3, 116(1)
  05cf988  li 11, 807
  05cf98c  extsw 3, 3
  05cf990  sc
  05cf994  bl 0x5d5904
  05cf998  nop
  05cf99c  li 27, 0
  05cf9a0  stw 31, 0(3)
  05cf9a4  ld 0, 496(1)
  05cf9a8  mr 3, 27
  05cf9ac  ld 28, 448(1)
  05cf9b0  ld 27, 440(1)
  05cf9b4  mtlr 0
  05cf9b8  ld 29, 456(1)
  05cf9bc  ld 30, 464(1)
  05cf9c0  ld 31, 472(1)
  05cf9c4  addi 1, 1, 480
  05cf9c8  blr
  05cf9cc  clrldi 30, 30, 32
  05cf9d0  lwz 3, 116(1)
  05cf9d4  li 11, 807
  05cf9d8  extsw 3, 3
  05cf9dc  sc
  05cf9e0  li 11, 805
  05cf9e4  mr 3, 27
  05cf9e8  addi 4, 1, 112
  05cf9ec  sc
  05cf9f0  cmpwi 7, 3, 0
  05cf9f4  mr 31, 3
  05cf9f8  mr 28, 3
  05cf9fc  bf 30, 0x5cf994
  05cfa00  mulli 3, 30, 268
  05cfa04  rlwinm 3, 3, 0, 0, 29
  05cfa08  bl 0x5d5838
  05cfa0c  nop
  05cfa10  mr 29, 3
  05cfa14  li 3, 20
  05cfa18  bl 0x5d5838
  05cfa1c  nop
  05cfa20  cmpwi 7, 29, 0
  05cfa24  bt 30, 0x5cfaf8
  05cfa28  cmpwi 7, 3, 0
  05cfa2c  bt 30, 0x5cfac0
  05cfa30  clrldi 27, 3, 32
  05cfa34  lwz 0, 112(1)
  05cfa38  li 9, 32
  05cfa3c  li 11, 0
  05cfa40  addi 3, 3, 16
  05cfa44  std 11, 144(1)
  05cfa48  stw 0, 0(27)
  05cfa4c  li 0, 2
  05cfa50  stw 9, 132(1)
  05cfa54  stw 0, 128(1)
  05cfa58  li 0, 512
  05cfa5c  li 9, 8192
  05cfa60  stw 0, 136(1)
  05cfa64  li 0, 0
  05cfa68  stw 29, 4(27)
  05cfa6c  stw 28, 8(27)
  05cfa70  stw 30, 12(27)
  05cfa74  stw 11, 152(1)
  05cfa78  stw 9, 140(1)
  05cfa7c  stb 0, 160(1)
  05cfa80  clrldi 3, 3, 32
  05cfa84  addi 4, 1, 128
  05cfa88  li 11, 100
  05cfa8c  sc
  05cfa90  ld 0, 496(1)
  05cfa94  mr 3, 27
  05cfa98  ld 28, 448(1)
  05cfa9c  ld 27, 440(1)
  05cfaa0  mtlr 0
  05cfaa4  ld 29, 456(1)
  05cfaa8  ld 30, 464(1)
  05cfaac  ld 31, 472(1)
  05cfab0  addi 1, 1, 480
  05cfab4  blr
  05cfab8  li 30, 0
  05cfabc  b 0x5cf9d0
  05cfac0  clrldi 3, 29, 32
  05cfac4  bl 0x5d580c
  05cfac8  nop
  05cfacc  lwz 3, 112(1)
  05cfad0  li 11, 807
  05cfad4  extsw 3, 3
  05cfad8  sc
  05cfadc  bl 0x5d5904
  05cfae0  nop
  05cfae4  lis 0, -32767
  05cfae8  li 27, 0
  05cfaec  ori 0, 0, 4
  05cfaf0  stw 0, 0(3)
  05cfaf4  b 0x5cf9a4
  05cfaf8  cmpwi 7, 3, 0
  05cfafc  bt 30, 0x5cfacc
  05cfb00  clrldi 3, 3, 32
  05cfb04  bl 0x5d580c
  05cfb08  nop
  05cfb0c  b 0x5cfacc

lseek:   # 0x5cfb10, 0x8c bytes
  05cfb10  stdu 1, -144(1)
  05cfb14  mflr 0
  05cfb18  std 31, 136(1)
  05cfb1c  std 0, 160(1)
  05cfb20  mr 0, 3
  05cfb24  addi 6, 1, 112
  05cfb28  cmplwi 7, 0, 2
  05cfb2c  extsw 3, 3
  05cfb30  li 11, 818
  05cfb34  extsw 4, 4
  05cfb38  extsw 5, 5
  05cfb3c  bf- 29, 0x5cfb6c
  05cfb40  sc
  05cfb44  cmpwi 7, 3, 0
  05cfb48  mr 31, 3
  05cfb4c  bf- 30, 0x5cfb88
  05cfb50  lwz 9, 116(1)
  05cfb54  ld 0, 160(1)
  05cfb58  extsw 3, 9
  05cfb5c  ld 31, 136(1)
  05cfb60  addi 1, 1, 144
  05cfb64  mtlr 0
  05cfb68  blr
  05cfb6c  bl 0x5d5904
  05cfb70  nop
  05cfb74  lis 0, -32767
  05cfb78  li 9, -1
  05cfb7c  ori 0, 0, 42
  05cfb80  stw 0, 0(3)
  05cfb84  b 0x5cfb54
  05cfb88  bl 0x5d5904
  05cfb8c  nop
  05cfb90  li 9, -1
  05cfb94  stw 31, 0(3)
  05cfb98  b 0x5cfb54

FUN_005cfb9c:   # 0x5cfb9c, 0x54 bytes
  05cfb9c  stdu 1, -128(1)
  05cfba0  mflr 0
  05cfba4  std 31, 120(1)
  05cfba8  std 0, 144(1)
  05cfbac  li 11, 831
  05cfbb0  sc
  05cfbb4  mr 31, 3
  05cfbb8  li 3, 0
  05cfbbc  cmpwi 7, 31, 0
  05cfbc0  bf- 30, 0x5cfbdc
  05cfbc4  ld 0, 144(1)
  05cfbc8  extsw 3, 3
  05cfbcc  ld 31, 120(1)
  05cfbd0  addi 1, 1, 128
  05cfbd4  mtlr 0
  05cfbd8  blr
  05cfbdc  bl 0x5d5904
  05cfbe0  nop
  05cfbe4  stw 31, 0(3)
  05cfbe8  li 3, -1
  05cfbec  b 0x5cfbc4

FUN_005cfbf0:   # 0x5cfbf0, 0x54 bytes
  05cfbf0  stdu 1, -128(1)
  05cfbf4  mflr 0
  05cfbf8  std 31, 120(1)
  05cfbfc  std 0, 144(1)
  05cfc00  li 11, 832
  05cfc04  sc
  05cfc08  mr 31, 3
  05cfc0c  li 3, 0
  05cfc10  cmpwi 7, 31, 0
  05cfc14  bf- 30, 0x5cfc30
  05cfc18  ld 0, 144(1)
  05cfc1c  extsw 3, 3
  05cfc20  ld 31, 120(1)
  05cfc24  addi 1, 1, 128
  05cfc28  mtlr 0
  05cfc2c  blr
  05cfc30  bl 0x5d5904
  05cfc34  nop
  05cfc38  stw 31, 0(3)
  05cfc3c  li 3, -1
  05cfc40  b 0x5cfc18

read:   # 0x5cfc44, 0x228 bytes
  05cfc44  cmpwi 7, 3, 0
  05cfc48  mflr 0
  05cfc4c  stdu 1, -176(1)
  05cfc50  std 30, 160(1)
  05cfc54  std 31, 168(1)
  05cfc58  std 26, 128(1)
  05cfc5c  std 27, 136(1)
  05cfc60  std 28, 144(1)
  05cfc64  std 29, 152(1)
  05cfc68  std 0, 192(1)
  05cfc6c  mr 30, 4
  05cfc70  mr 31, 5
  05cfc74  bf 30, 0x5cfd5c
  05cfc78  cmpwi 7, 4, 0
  05cfc7c  bt- 30, 0x5cfe3c
  05cfc80  cmpwi 7, 5, 0
  05cfc84  li 28, 0
  05cfc88  bf 29, 0x5cfd90
  05cfc8c  addi 26, 1, 112
  05cfc90  addi 27, 1, 116
  05cfc94  li 3, 0
  05cfc98  mr 4, 26
  05cfc9c  li 5, 1
  05cfca0  mr 6, 27
  05cfca4  li 11, 402
  05cfca8  sc
  05cfcac  cmpwi 7, 3, 0
  05cfcb0  mr 29, 3
  05cfcb4  clrldi 31, 31, 32
  05cfcb8  bt 30, 0x5cfcec
  05cfcbc  b 0x5cfdbc
  05cfcc0  lbz 0, 112(1)
  05cfcc4  stb 9, 0(10)
  05cfcc8  cmpwi 7, 0, 10
  05cfccc  bt 30, 0x5cfd2c
  05cfcd0  addic. 31, 31, -1
  05cfcd4  addi 28, 28, 1
  05cfcd8  bt 2, 0x5cfd90
  05cfcdc  sc
  05cfce0  cmpwi 7, 3, 0
  05cfce4  mr 29, 3
  05cfce8  bf 30, 0x5cfdbc
  05cfcec  lbz 9, 112(1)
  05cfcf0  add 0, 28, 30
  05cfcf4  li 3, 0
  05cfcf8  cmpwi 7, 9, 13
  05cfcfc  mr 4, 26
  05cfd00  li 5, 1
  05cfd04  mr 6, 27
  05cfd08  li 11, 402
  05cfd0c  clrldi 10, 0, 32
  05cfd10  bf 30, 0x5cfcc0
  05cfd14  li 9, 10
  05cfd18  stb 9, 112(1)
  05cfd1c  lbz 0, 112(1)
  05cfd20  stb 9, 0(10)
  05cfd24  cmpwi 7, 0, 10
  05cfd28  bf 30, 0x5cfcd0
  05cfd2c  addi 28, 28, 1
  05cfd30  ld 0, 192(1)
  05cfd34  ld 26, 128(1)
  05cfd38  extsw 3, 28
  05cfd3c  ld 27, 136(1)
  05cfd40  ld 28, 144(1)
  05cfd44  mtlr 0
  05cfd48  ld 29, 152(1)
  05cfd4c  ld 30, 160(1)
  05cfd50  ld 31, 168(1)
  05cfd54  addi 1, 1, 176
  05cfd58  blr
  05cfd5c  addi 0, 3, -1
  05cfd60  cmplwi 7, 0, 1
  05cfd64  bf- 29, 0x5cfdf8
  05cfd68  extsw 3, 3
  05cfd6c  clrldi 4, 4, 32
  05cfd70  clrldi 5, 5, 32
  05cfd74  addi 6, 1, 120
  05cfd78  li 11, 802
  05cfd7c  sc
  05cfd80  cmpwi 7, 3, 0
  05cfd84  mr 31, 3
  05cfd88  bf- 30, 0x5cfe58
  05cfd8c  lwz 28, 124(1)
  05cfd90  ld 0, 192(1)
  05cfd94  extsw 3, 28
  05cfd98  ld 26, 128(1)
  05cfd9c  ld 27, 136(1)
  05cfda0  mtlr 0
  05cfda4  ld 28, 144(1)
  05cfda8  ld 29, 152(1)
  05cfdac  ld 30, 160(1)
  05cfdb0  ld 31, 168(1)
  05cfdb4  addi 1, 1, 176
  05cfdb8  blr
  05cfdbc  bl 0x5d5904
  05cfdc0  nop
  05cfdc4  li 28, -1
  05cfdc8  ld 0, 192(1)
  05cfdcc  stw 29, 0(3)
  05cfdd0  ld 26, 128(1)
  05cfdd4  extsw 3, 28
  05cfdd8  ld 27, 136(1)
  05cfddc  mtlr 0
  05cfde0  ld 28, 144(1)
  05cfde4  ld 29, 152(1)
  05cfde8  ld 30, 160(1)
  05cfdec  ld 31, 168(1)
  05cfdf0  addi 1, 1, 176
  05cfdf4  blr
  05cfdf8  lwz 29, -24344(2)
  05cfdfc  mr 3, 29
  05cfe00  bl 0x5c8510
  05cfe04  nop
  05cfe08  mr 4, 29
  05cfe0c  clrldi 5, 3, 32
  05cfe10  addi 6, 1, 116
  05cfe14  li 3, 1
  05cfe18  li 11, 403
  05cfe1c  sc
  05cfe20  bl 0x5d5904
  05cfe24  nop
  05cfe28  lis 0, -32767
  05cfe2c  li 28, -1
  05cfe30  ori 0, 0, 2
  05cfe34  stw 0, 0(3)
  05cfe38  b 0x5cfd90
  05cfe3c  bl 0x5d5904
  05cfe40  nop
  05cfe44  lis 0, -32767
  05cfe48  li 28, -1
  05cfe4c  ori 0, 0, 13
  05cfe50  stw 0, 0(3)
  05cfe54  b 0x5cfd90
  05cfe58  li 28, -1
  05cfe5c  bl 0x5d5904
  05cfe60  nop
  05cfe64  stw 31, 0(3)
  05cfe68  b 0x5cfd90

write:   # 0x5cfe6c, 0x13c bytes
  05cfe6c  stdu 1, -160(1)
  05cfe70  mflr 0
  05cfe74  std 29, 136(1)
  05cfe78  std 0, 176(1)
  05cfe7c  addi 0, 3, -1
  05cfe80  std 31, 152(1)
  05cfe84  cmplwi 7, 0, 1
  05cfe88  mr 29, 5
  05cfe8c  bf 29, 0x5cfedc
  05cfe90  cmpwi 7, 3, 0
  05cfe94  bt- 30, 0x5cff34
  05cfe98  extsw 3, 3
  05cfe9c  clrldi 4, 4, 32
  05cfea0  clrldi 5, 5, 32
  05cfea4  addi 6, 1, 120
  05cfea8  li 11, 803
  05cfeac  sc
  05cfeb0  cmpwi 7, 3, 0
  05cfeb4  mr 29, 3
  05cfeb8  bf- 30, 0x5cff78
  05cfebc  lwz 5, 124(1)
  05cfec0  ld 0, 176(1)
  05cfec4  extsw 3, 5
  05cfec8  ld 29, 136(1)
  05cfecc  ld 31, 152(1)
  05cfed0  mtlr 0
  05cfed4  addi 1, 1, 160
  05cfed8  blr
  05cfedc  cmpwi 7, 4, 0
  05cfee0  bt- 30, 0x5cff8c
  05cfee4  cmpwi 7, 3, 1
  05cfee8  bt 30, 0x5cff28
  05cfeec  clrldi 4, 4, 32
  05cfef0  li 3, 1
  05cfef4  clrldi 5, 29, 32
  05cfef8  addi 6, 1, 112
  05cfefc  li 11, 403
  05cff00  sc
  05cff04  cmpwi 7, 3, 0
  05cff08  mr 31, 3
  05cff0c  mr 5, 29
  05cff10  bt+ 30, 0x5cfec0
  05cff14  bl 0x5d5904
  05cff18  nop
  05cff1c  li 5, -1
  05cff20  stw 31, 0(3)
  05cff24  b 0x5cfec0
  05cff28  clrldi 4, 4, 32
  05cff2c  li 3, 0
  05cff30  b 0x5cfef4
  05cff34  lwz 29, -24340(2)
  05cff38  mr 3, 29
  05cff3c  bl 0x5c8510
  05cff40  nop
  05cff44  mr 4, 29
  05cff48  clrldi 5, 3, 32
  05cff4c  addi 6, 1, 112
  05cff50  li 3, 1
  05cff54  li 11, 403
  05cff58  sc
  05cff5c  bl 0x5d5904
  05cff60  nop
  05cff64  lis 0, -32767
  05cff68  li 5, -1
  05cff6c  ori 0, 0, 2
  05cff70  stw 0, 0(3)
  05cff74  b 0x5cfec0
  05cff78  bl 0x5d5904
  05cff7c  nop
  05cff80  li 5, -1
  05cff84  stw 29, 0(3)
  05cff88  b 0x5cfec0
  05cff8c  bl 0x5d5904
  05cff90  nop
  05cff94  lis 0, -32767
  05cff98  li 5, -1
  05cff9c  ori 0, 0, 13
  05cffa0  stw 0, 0(3)
  05cffa4  b 0x5cfec0
