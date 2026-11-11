# game/update/moby911.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M911_004abfb0:   # 0x4abfb0, 0x14 bytes
  04abfb0  lis 3, 143
  04abfb4  lis 4, 1
  04abfb8  addic 3, 3, 16368
  04abfbc  stw 4, 72(3)
  04abfc0  blr

M911_004abff8:   # 0x4abff8, 0x3e0 bytes
  04abff8  stdu 1, -304(1)
  04abffc  mflr 0
  04ac000  std 0, 320(1)
  04ac004  stfd 22, 224(1)
  04ac008  stfd 23, 232(1)
  04ac00c  stfd 24, 240(1)
  04ac010  stfd 25, 248(1)
  04ac014  stfd 26, 256(1)
  04ac018  stfd 27, 264(1)
  04ac01c  stfd 28, 272(1)
  04ac020  stfd 29, 280(1)
  04ac024  stfd 30, 288(1)
  04ac028  stfd 31, 296(1)
  04ac02c  lfs 4, 212(3)
  04ac030  lfs 1, 208(3)
  04ac034  lis 4, 151
  04ac038  fmuls 2, 4, 4
  04ac03c  li 6, 6
  04ac040  addic 4, 4, -25376
  04ac044  lis 8, 1
  04ac048  lis 9, 16256
  04ac04c  lis 5, 75
  04ac050  lwz 4, 4440(4)
  04ac054  addi 5, 5, -16440
  04ac058  lfs 6, 216(3)
  04ac05c  subc 4, 6, 4
  04ac060  ori 6, 8, 1
  04ac064  lwz 7, 120(3)
  04ac068  fmadds 2, 1, 1, 2
  04ac06c  cntlzw 4, 4
  04ac070  lis 8, 1
  04ac074  stw 3, 160(1)
  04ac078  sldi 4, 4, 58
  04ac07c  stw 9, 172(1)
  04ac080  subc 8, 8, 6
  04ac084  sradi 4, 4, 63
  04ac088  and 4, 4, 8
  04ac08c  li 8, 1
  04ac090  addc 4, 6, 4
  04ac094  fmadds 2, 6, 6, 2
  04ac098  stw 8, 176(1)
  04ac09c  stw 4, 164(1)
  04ac0a0  li 4, 3
  04ac0a4  lfs 31, 0(5)
  04ac0a8  stb 8, 169(1)
  04ac0ac  li 8, 0
  04ac0b0  stb 4, 168(1)
  04ac0b4  lwz 4, 136(7)
  04ac0b8  lhz 6, 166(3)
  04ac0bc  fsqrts 2, 2
  04ac0c0  std 31, 216(1)
  04ac0c4  extsw 4, 4
  04ac0c8  ori 31, 3, 0
  04ac0cc  std 4, 192(1)
  04ac0d0  lis 4, 17839
  04ac0d4  stw 9, 152(1)
  04ac0d8  ori 4, 4, 57190
  04ac0dc  stw 8, 148(1)
  04ac0e0  stw 8, 144(1)
  04ac0e4  stw 4, 156(1)
  04ac0e8  sth 6, 170(1)
  04ac0ec  lis 4, 143
  04ac0f0  lfs 9, 4(5)
  04ac0f4  lis 5, 114
  04ac0f8  lfs 10, 112(7)
  04ac0fc  lfs 3, 16(3)
  04ac100  lfs 11, 16476(4)
  04ac104  lfs 12, -3052(5)
  04ac108  lfs 5, 20(3)
  04ac10c  lfs 7, 24(3)
  04ac110  lfd 13, 192(1)
  04ac114  lis 4, 143
  04ac118  lfs 8, 72(3)
  04ac11c  lfs 22, 16480(4)
  04ac120  fcfid 13, 13
  04ac124  fmuls 11, 11, 12
  04ac128  frsp 12, 13
  04ac12c  fmsubs 9, 10, 9, 12
  04ac130  fmuls 9, 11, 9
  04ac134  fsub 10, 22, 9
  04ac138  fcmpu 0, 2, 31
  04ac13c  fsel 22, 10, 9, 22
  04ac140  bf 2, 0x4ac158
  04ac144  fmr 6, 31
  04ac148  lfs 9, 220(31)
  04ac14c  fmr 4, 6
  04ac150  fmr 2, 4
  04ac154  b 0x4ac178
  04ac158  lis 3, 75
  04ac15c  addi 3, 3, -16440
  04ac160  lfs 9, 8(3)
  04ac164  fdivs 10, 9, 2
  04ac168  lfs 9, 220(31)
  04ac16c  fmuls 2, 1, 10
  04ac170  fmuls 4, 4, 10
  04ac174  fmuls 6, 6, 10
  04ac178  lis 3, 75
  04ac17c  addi 3, 3, -16440
  04ac180  fadds 2, 2, 3
  04ac184  fadds 3, 4, 5
  04ac188  fadds 6, 6, 7
  04ac18c  lfs 29, 12(3)
  04ac190  lfs 28, 16(3)
  04ac194  fadds 1, 8, 29
  04ac198  lfs 27, 20(3)
  04ac19c  fsubs 10, 28, 8
  04ac1a0  fsubs 11, 27, 8
  04ac1a4  lfs 26, 24(3)
  04ac1a8  lfs 25, 28(3)
  04ac1ac  lfs 24, 32(3)
  04ac1b0  addic 4, 1, 128
  04ac1b4  fsubs 12, 28, 1
  04ac1b8  fsub 0, 8, 10
  04ac1bc  fsubs 13, 27, 1
  04ac1c0  addic 7, 1, 144
  04ac1c4  li 5, 0
  04ac1c8  ori 6, 31, 0
  04ac1cc  fsub 30, 1, 12
  04ac1d0  fsel 8, 0, 10, 8
  04ac1d4  fsel 1, 30, 12, 1
  04ac1d8  fsub 10, 11, 8
  04ac1dc  lfs 30, 8(3)
  04ac1e0  lfs 23, 36(3)
  04ac1e4  fadds 6, 6, 30
  04ac1e8  addic 3, 1, 112
  04ac1ec  fsub 12, 13, 1
  04ac1f0  fsel 8, 10, 11, 8
  04ac1f4  stfs 6, 136(1)
  04ac1f8  stfs 6, 120(1)
  04ac1fc  fsel 1, 12, 13, 1
  04ac200  fmuls 10, 8, 8
  04ac204  stfs 3, 116(1)
  04ac208  stfs 2, 112(1)
  04ac20c  stfs 9, 124(1)
  04ac210  fmuls 4, 1, 1
  04ac214  fmuls 5, 10, 8
  04ac218  fmuls 7, 4, 1
  04ac21c  fmuls 11, 10, 5
  04ac220  fmadds 5, 5, 26, 8
  04ac224  fmuls 8, 4, 7
  04ac228  fmadds 1, 7, 26, 1
  04ac22c  fmuls 7, 10, 11
  04ac230  fmadds 5, 11, 25, 5
  04ac234  fmuls 11, 4, 8
  04ac238  fmadds 1, 8, 25, 1
  04ac23c  fmuls 8, 10, 7
  04ac240  fmadds 5, 7, 24, 5
  04ac244  fmuls 4, 4, 11
  04ac248  fmadds 1, 11, 24, 1
  04ac24c  fmadds 5, 8, 23, 5
  04ac250  fmadds 1, 4, 23, 1
  04ac254  fmadds 4, 5, 22, 3
  04ac258  fmadds 1, 1, 22, 2
  04ac25c  stfs 4, 132(1)
  04ac260  stfs 1, 128(1)
  04ac264  bl 0x57820
  04ac268  nop
  04ac26c  lfs 4, 212(31)
  04ac270  lfs 3, 208(31)
  04ac274  fmuls 1, 4, 4
  04ac278  lfs 5, 216(31)
  04ac27c  lfs 6, 16(31)
  04ac280  lfs 7, 20(31)
  04ac284  lfs 8, 24(31)
  04ac288  lfs 9, 72(31)
  04ac28c  fmadds 1, 3, 3, 1
  04ac290  fmadds 2, 5, 5, 1
  04ac294  fsqrts 2, 2
  04ac298  fcmpu 0, 2, 31
  04ac29c  bf 2, 0x4ac2b0
  04ac2a0  fmr 2, 31
  04ac2a4  lfs 3, 220(31)
  04ac2a8  fmr 1, 2
  04ac2ac  b 0x4ac2d0
  04ac2b0  lis 3, 75
  04ac2b4  addi 3, 3, -16440
  04ac2b8  lfs 1, 40(3)
  04ac2bc  fdivs 2, 1, 2
  04ac2c0  fmuls 31, 3, 2
  04ac2c4  fmuls 1, 4, 2
  04ac2c8  lfs 3, 220(31)
  04ac2cc  fmuls 2, 5, 2
  04ac2d0  fadds 4, 9, 29
  04ac2d4  fsubs 5, 28, 9
  04ac2d8  fsubs 10, 27, 9
  04ac2dc  fadds 1, 1, 7
  04ac2e0  fadds 2, 2, 8
  04ac2e4  fadds 6, 31, 6
  04ac2e8  addic 3, 1, 112
  04ac2ec  fsubs 11, 28, 4
  04ac2f0  fsub 12, 9, 5
  04ac2f4  fsubs 13, 27, 4
  04ac2f8  addic 4, 1, 128
  04ac2fc  fadds 2, 2, 30
  04ac300  addic 7, 1, 144
  04ac304  li 5, 0
  04ac308  ori 6, 31, 0
  04ac30c  fsub 0, 4, 11
  04ac310  fsel 5, 12, 5, 9
  04ac314  stfs 2, 136(1)
  04ac318  stfs 2, 120(1)
  04ac31c  fsel 4, 0, 11, 4
  04ac320  fsub 9, 10, 5
  04ac324  stfs 1, 116(1)
  04ac328  stfs 6, 112(1)
  04ac32c  stfs 3, 124(1)
  04ac330  fsub 11, 13, 4
  04ac334  fsel 5, 9, 10, 5
  04ac338  fsel 4, 11, 13, 4
  04ac33c  fmuls 9, 5, 5
  04ac340  fmuls 7, 4, 4
  04ac344  fmuls 8, 9, 5
  04ac348  fmuls 10, 7, 4
  04ac34c  fmuls 11, 9, 8
  04ac350  fmadds 5, 8, 26, 5
  04ac354  fmuls 8, 7, 10
  04ac358  fmadds 4, 10, 26, 4
  04ac35c  fmuls 10, 9, 11
  04ac360  fmadds 5, 11, 25, 5
  04ac364  fmuls 11, 7, 8
  04ac368  fmadds 4, 8, 25, 4
  04ac36c  fmuls 8, 9, 10
  04ac370  fmadds 5, 10, 24, 5
  04ac374  fmuls 7, 7, 11
  04ac378  fmadds 4, 11, 24, 4
  04ac37c  fmadds 5, 8, 23, 5
  04ac380  fmadds 2, 7, 23, 4
  04ac384  fmadds 1, 5, 22, 1
  04ac388  fmadds 2, 2, 22, 6
  04ac38c  stfs 1, 132(1)
  04ac390  stfs 2, 128(1)
  04ac394  bl 0x57820
  04ac398  nop
  04ac39c  ld 0, 320(1)
  04ac3a0  mtlr 0
  04ac3a4  lfd 22, 224(1)
  04ac3a8  lfd 23, 232(1)
  04ac3ac  lfd 24, 240(1)
  04ac3b0  lfd 25, 248(1)
  04ac3b4  lfd 26, 256(1)
  04ac3b8  lfd 27, 264(1)
  04ac3bc  lfd 28, 272(1)
  04ac3c0  lfd 29, 280(1)
  04ac3c4  lfd 30, 288(1)
  04ac3c8  lfd 31, 296(1)
  04ac3cc  ld 31, 216(1)
  04ac3d0  addi 1, 1, 304
  04ac3d4  blr

M911_004ac3f0:   # 0x4ac3f0, 0x64c bytes
  04ac3f0  stdu 1, -480(1)
  04ac3f4  mflr 0
  04ac3f8  std 0, 496(1)
  04ac3fc  stfd 25, 424(1)
  04ac400  stfd 26, 432(1)
  04ac404  stfd 27, 440(1)
  04ac408  stfd 28, 448(1)
  04ac40c  stfd 29, 456(1)
  04ac410  stfd 30, 464(1)
  04ac414  stfd 31, 472(1)
  04ac418  std 31, 416(1)
  04ac41c  lis 31, 151
  04ac420  lfs 6, 20(3)
  04ac424  addic 31, 31, -25376
  04ac428  lfs 5, 16(3)
  04ac42c  lis 4, 75
  04ac430  lfs 2, 132(31)
  04ac434  lfs 1, 128(31)
  04ac438  fsubs 4, 2, 6
  04ac43c  lfs 7, 24(3)
  04ac440  fsubs 8, 1, 5
  04ac444  lfs 3, 136(31)
  04ac448  fsubs 9, 3, 7
  04ac44c  addi 4, 4, -15400
  04ac450  lis 5, 16512
  04ac454  stfs 5, 176(1)
  04ac458  std 14, 280(1)
  04ac45c  stfs 6, 180(1)
  04ac460  ori 14, 3, 0
  04ac464  stfs 7, 184(1)
  04ac468  fmuls 4, 4, 4
  04ac46c  stw 5, 188(1)
  04ac470  lfs 10, 0(4)
  04ac474  fmadds 4, 8, 8, 4
  04ac478  fmadds 4, 9, 9, 4
  04ac47c  fsqrts 8, 4
  04ac480  lfs 4, 28(3)
  04ac484  fcmpu 0, 8, 10
  04ac488  std 30, 408(1)
  04ac48c  std 29, 400(1)
  04ac490  std 28, 392(1)
  04ac494  std 27, 384(1)
  04ac498  std 26, 376(1)
  04ac49c  std 25, 368(1)
  04ac4a0  std 24, 360(1)
  04ac4a4  std 23, 352(1)
  04ac4a8  std 22, 344(1)
  04ac4ac  std 21, 336(1)
  04ac4b0  std 20, 328(1)
  04ac4b4  std 19, 320(1)
  04ac4b8  std 18, 312(1)
  04ac4bc  std 17, 304(1)
  04ac4c0  std 16, 296(1)
  04ac4c4  std 15, 288(1)
  04ac4c8  cror 6, 0, 2
  04ac4cc  bt 6, 0x4ac50c
  04ac4d0  lis 4, 75
  04ac4d4  addic 3, 1, 176
  04ac4d8  addi 4, 4, -15400
  04ac4dc  lfs 1, 4(4)
  04ac4e0  bl 0x502910
  04ac4e4  nop
  04ac4e8  cmpwi 3, -1
  04ac4ec  bt 2, 0x4ac9c8
  04ac4f0  lfs 1, 128(31)
  04ac4f4  lfs 2, 132(31)
  04ac4f8  lfs 3, 136(31)
  04ac4fc  lfs 4, 28(14)
  04ac500  lfs 5, 16(14)
  04ac504  lfs 6, 20(14)
  04ac508  lfs 7, 24(14)
  04ac50c  fsubs 2, 2, 6
  04ac510  fsubs 1, 1, 5
  04ac514  fsubs 3, 3, 7
  04ac518  lis 3, 75
  04ac51c  addi 3, 3, -15400
  04ac520  fmuls 2, 2, 2
  04ac524  fmadds 1, 1, 1, 2
  04ac528  lfs 2, 4(3)
  04ac52c  fmadds 1, 3, 3, 1
  04ac530  fsqrts 1, 1
  04ac534  fcmpu 0, 1, 2
  04ac538  bt 1, 0x4ac9c8
  04ac53c  stfs 5, 128(1)
  04ac540  addic 3, 1, 192
  04ac544  stfs 6, 132(1)
  04ac548  addic 4, 14, 64
  04ac54c  stfs 7, 136(1)
  04ac550  stfs 4, 140(1)
  04ac554  bl 0x500ca4
  04ac558  nop
  04ac55c  lis 31, 143
  04ac560  lis 3, 143
  04ac564  lis 30, 114
  04ac568  lis 29, 143
  04ac56c  lis 5, 143
  04ac570  lwz 4, 16500(31)
  04ac574  lfs 1, 16476(3)
  04ac578  lis 6, 143
  04ac57c  lfs 2, -3052(30)
  04ac580  extsw 4, 4
  04ac584  lis 3, 75
  04ac588  fmuls 1, 1, 2
  04ac58c  addi 28, 3, -15400
  04ac590  std 4, 256(1)
  04ac594  lwz 3, 16504(29)
  04ac598  li 4, 0
  04ac59c  lfs 2, 192(1)
  04ac5a0  lfs 3, 196(1)
  04ac5a4  lfs 4, 200(1)
  04ac5a8  extsw 3, 3
  04ac5ac  lfs 5, 8(28)
  04ac5b0  lfs 6, 204(1)
  04ac5b4  stw 4, 156(1)
  04ac5b8  fmuls 31, 2, 1
  04ac5bc  fmuls 30, 3, 1
  04ac5c0  stw 4, 152(1)
  04ac5c4  fmuls 2, 4, 1
  04ac5c8  stw 4, 148(1)
  04ac5cc  fmuls 1, 6, 1
  04ac5d0  stw 4, 144(1)
  04ac5d4  lfd 3, 256(1)
  04ac5d8  lis 4, 143
  04ac5dc  std 3, 256(1)
  04ac5e0  fmr 29, 5
  04ac5e4  lis 3, 143
  04ac5e8  fcfid 3, 3
  04ac5ec  stfs 31, 144(1)
  04ac5f0  stfs 30, 148(1)
  04ac5f4  stfs 2, 152(1)
  04ac5f8  stfs 1, 156(1)
  04ac5fc  lfs 1, 16484(4)
  04ac600  lfs 28, 16524(5)
  04ac604  stfs 1, 156(1)
  04ac608  lfs 27, 16520(6)
  04ac60c  lfs 1, 16488(3)
  04ac610  lfs 26, -3052(30)
  04ac614  stfs 1, 172(1)
  04ac618  lfd 2, 256(1)
  04ac61c  frsp 1, 3
  04ac620  fcfid 2, 2
  04ac624  frsp 2, 2
  04ac628  bl 0xfcbe8
  04ac62c  nop
  04ac630  lis 27, 114
  04ac634  lfs 2, -3056(27)
  04ac638  fmuls 1, 1, 2
  04ac63c  bl 0x502758
  04ac640  nop
  04ac644  lis 26, 143
  04ac648  lis 25, 143
  04ac64c  ori 24, 3, 0
  04ac650  lwz 4, 16508(26)
  04ac654  lwz 5, 16512(25)
  04ac658  extsw 4, 4
  04ac65c  extsw 5, 5
  04ac660  std 4, 256(1)
  04ac664  lfd 1, 256(1)
  04ac668  std 5, 256(1)
  04ac66c  fcfid 1, 1
  04ac670  frsp 1, 1
  04ac674  lfd 2, 256(1)
  04ac678  fcfid 2, 2
  04ac67c  frsp 2, 2
  04ac680  bl 0xfcbe8
  04ac684  nop
  04ac688  lfs 2, -3056(27)
  04ac68c  fmuls 1, 1, 2
  04ac690  bl 0x502758
  04ac694  nop
  04ac698  lwz 4, 16500(31)
  04ac69c  lwz 5, 16504(29)
  04ac6a0  extsw 4, 4
  04ac6a4  ori 23, 3, 0
  04ac6a8  std 4, 256(1)
  04ac6ac  extsw 4, 5
  04ac6b0  lfd 1, 256(1)
  04ac6b4  std 4, 256(1)
  04ac6b8  fcfid 1, 1
  04ac6bc  frsp 1, 1
  04ac6c0  lfd 2, 256(1)
  04ac6c4  fcfid 2, 2
  04ac6c8  frsp 2, 2
  04ac6cc  bl 0xfcbe8
  04ac6d0  nop
  04ac6d4  lfs 2, -3056(27)
  04ac6d8  fmuls 1, 1, 2
  04ac6dc  bl 0x502758
  04ac6e0  nop
  04ac6e4  lwz 4, 16508(26)
  04ac6e8  lwz 5, 16504(29)
  04ac6ec  extsw 4, 4
  04ac6f0  extsw 5, 5
  04ac6f4  std 4, 256(1)
  04ac6f8  subc 4, 24, 3
  04ac6fc  subc 3, 3, 24
  04ac700  sradi 4, 4, 63
  04ac704  and 3, 4, 3
  04ac708  addc 24, 24, 3
  04ac70c  lfd 1, 256(1)
  04ac710  std 5, 256(1)
  04ac714  fcfid 1, 1
  04ac718  frsp 1, 1
  04ac71c  lfd 2, 256(1)
  04ac720  fcfid 2, 2
  04ac724  frsp 2, 2
  04ac728  bl 0xfcbe8
  04ac72c  nop
  04ac730  lfs 2, -3056(27)
  04ac734  fmuls 1, 1, 2
  04ac738  bl 0x502758
  04ac73c  nop
  04ac740  lis 4, 143
  04ac744  lwz 4, 16516(4)
  04ac748  extsw 4, 4
  04ac74c  std 4, 256(1)
  04ac750  lfs 1, 12(28)
  04ac754  lfs 2, -3056(27)
  04ac758  lfd 3, 256(1)
  04ac75c  fcfid 3, 3
  04ac760  subc 4, 23, 3
  04ac764  subc 3, 3, 23
  04ac768  sradi 4, 4, 63
  04ac76c  and 3, 4, 3
  04ac770  addc 23, 23, 3
  04ac774  frsp 3, 3
  04ac778  fadds 1, 3, 1
  04ac77c  fmuls 1, 2, 1
  04ac780  fctidz 1, 1
  04ac784  fcfid 1, 1
  04ac788  frsp 1, 1
  04ac78c  bl 0x502758
  04ac790  nop
  04ac794  fmr 1, 29
  04ac798  lfs 25, 16(28)
  04ac79c  ori 28, 3, 0
  04ac7a0  fmr 2, 25
  04ac7a4  bl 0xfcbe8
  04ac7a8  nop
  04ac7ac  lfs 2, 144(1)
  04ac7b0  lis 22, 143
  04ac7b4  lfs 3, 148(1)
  04ac7b8  addic 21, 1, 160
  04ac7bc  lfs 4, 152(1)
  04ac7c0  lfs 5, 16(14)
  04ac7c4  lfs 6, 20(14)
  04ac7c8  ori 3, 21, 0
  04ac7cc  fmadds 5, 2, 1, 5
  04ac7d0  lfs 2, 24(14)
  04ac7d4  fmadds 3, 3, 1, 6
  04ac7d8  fmadds 4, 4, 1, 2
  04ac7dc  lfs 2, 28(14)
  04ac7e0  fmr 1, 29
  04ac7e4  lfs 6, -3052(30)
  04ac7e8  stfs 2, 140(1)
  04ac7ec  lfs 2, 16528(22)
  04ac7f0  fmuls 2, 2, 6
  04ac7f4  stfs 5, 128(1)
  04ac7f8  stfs 3, 132(1)
  04ac7fc  stfs 4, 136(1)
  04ac800  bl 0xfea60
  04ac804  nop
  04ac808  lfs 1, 160(1)
  04ac80c  lfs 2, 164(1)
  04ac810  lis 20, 143
  04ac814  fmadds 1, 31, 28, 1
  04ac818  lfs 3, 168(1)
  04ac81c  fmadds 2, 30, 28, 2
  04ac820  lis 19, 143
  04ac824  fmadds 3, 27, 26, 3
  04ac828  li 16, 48
  04ac82c  addic 18, 1, 128
  04ac830  lwz 6, 16492(20)
  04ac834  addic 17, 1, 144
  04ac838  lwz 7, 16496(19)
  04ac83c  ori 3, 18, 0
  04ac840  ori 4, 17, 0
  04ac844  ori 5, 21, 0
  04ac848  extsw 6, 6
  04ac84c  ori 8, 24, 0
  04ac850  stfs 1, 160(1)
  04ac854  stfs 2, 164(1)
  04ac858  extsw 7, 7
  04ac85c  stfs 3, 168(1)
  04ac860  ori 9, 23, 0
  04ac864  std 16, 112(1)
  04ac868  ori 10, 28, 0
  04ac86c  bl 0x1206e8
  04ac870  nop
  04ac874  lwz 3, 16500(31)
  04ac878  lwz 4, 16504(29)
  04ac87c  extsw 3, 3
  04ac880  std 3, 256(1)
  04ac884  extsw 3, 4
  04ac888  lfd 1, 256(1)
  04ac88c  std 3, 256(1)
  04ac890  fcfid 1, 1
  04ac894  frsp 1, 1
  04ac898  lfd 2, 256(1)
  04ac89c  fcfid 2, 2
  04ac8a0  frsp 2, 2
  04ac8a4  bl 0xfcbe8
  04ac8a8  nop
  04ac8ac  lfs 2, -3056(27)
  04ac8b0  fmuls 1, 1, 2
  04ac8b4  bl 0x502758
  04ac8b8  nop
  04ac8bc  lwz 4, 16508(26)
  04ac8c0  lwz 5, 16512(25)
  04ac8c4  extsw 4, 4
  04ac8c8  ori 31, 3, 0
  04ac8cc  std 4, 256(1)
  04ac8d0  extsw 4, 5
  04ac8d4  lfd 1, 256(1)
  04ac8d8  std 4, 256(1)
  04ac8dc  fcfid 1, 1
  04ac8e0  frsp 1, 1
  04ac8e4  lfd 2, 256(1)
  04ac8e8  fcfid 2, 2
  04ac8ec  frsp 2, 2
  04ac8f0  bl 0xfcbe8
  04ac8f4  nop
  04ac8f8  lfs 2, -3056(27)
  04ac8fc  fmuls 1, 1, 2
  04ac900  bl 0x502758
  04ac904  nop
  04ac908  fmr 1, 29
  04ac90c  fmr 2, 25
  04ac910  ori 29, 3, 0
  04ac914  bl 0xfcbe8
  04ac918  nop
  04ac91c  lfs 2, 144(1)
  04ac920  ori 3, 21, 0
  04ac924  lfs 3, 148(1)
  04ac928  lfs 4, 152(1)
  04ac92c  lfs 5, 16(14)
  04ac930  lfs 6, 20(14)
  04ac934  fmadds 5, 2, 1, 5
  04ac938  lfs 2, 24(14)
  04ac93c  fmadds 3, 3, 1, 6
  04ac940  fmadds 4, 4, 1, 2
  04ac944  lfs 2, 28(14)
  04ac948  fmr 1, 29
  04ac94c  lfs 6, 16528(22)
  04ac950  lfs 7, -3052(30)
  04ac954  stfs 2, 140(1)
  04ac958  fmuls 2, 6, 7
  04ac95c  stfs 5, 128(1)
  04ac960  stfs 3, 132(1)
  04ac964  stfs 4, 136(1)
  04ac968  bl 0xfea60
  04ac96c  nop
  04ac970  lfs 1, 160(1)
  04ac974  lfs 2, 164(1)
  04ac978  ori 3, 18, 0
  04ac97c  fmadds 1, 31, 28, 1
  04ac980  lfs 3, 168(1)
  04ac984  fmadds 2, 30, 28, 2
  04ac988  ori 4, 17, 0
  04ac98c  fmadds 3, 27, 26, 3
  04ac990  ori 8, 31, 0
  04ac994  lwz 6, 16492(20)
  04ac998  ori 5, 21, 0
  04ac99c  lwz 7, 16496(19)
  04ac9a0  ori 9, 29, 0
  04ac9a4  std 16, 112(1)
  04ac9a8  extsw 6, 6
  04ac9ac  extsw 7, 7
  04ac9b0  ori 10, 28, 0
  04ac9b4  stfs 1, 160(1)
  04ac9b8  stfs 2, 164(1)
  04ac9bc  stfs 3, 168(1)
  04ac9c0  bl 0x1206e8
  04ac9c4  nop
  04ac9c8  ld 0, 496(1)
  04ac9cc  mtlr 0
  04ac9d0  lfd 25, 424(1)
  04ac9d4  lfd 26, 432(1)
  04ac9d8  lfd 27, 440(1)
  04ac9dc  lfd 28, 448(1)
  04ac9e0  lfd 29, 456(1)
  04ac9e4  lfd 30, 464(1)
  04ac9e8  lfd 31, 472(1)
  04ac9ec  ld 14, 280(1)
  04ac9f0  ld 15, 288(1)
  04ac9f4  ld 16, 296(1)
  04ac9f8  ld 17, 304(1)
  04ac9fc  ld 18, 312(1)
  04aca00  ld 19, 320(1)
  04aca04  ld 20, 328(1)
  04aca08  ld 21, 336(1)
  04aca0c  ld 22, 344(1)
  04aca10  ld 23, 352(1)
  04aca14  ld 24, 360(1)
  04aca18  ld 25, 368(1)
  04aca1c  ld 26, 376(1)
  04aca20  ld 27, 384(1)
  04aca24  ld 28, 392(1)
  04aca28  ld 29, 400(1)
  04aca2c  ld 30, 408(1)
  04aca30  ld 31, 416(1)
  04aca34  addi 1, 1, 480
  04aca38  blr

M911_004aca68:   # 0x4aca68, 0x3ec bytes
  04aca68  stdu 1, -368(1)
  04aca6c  mflr 0
  04aca70  std 0, 384(1)
  04aca74  stfd 17, 248(1)
  04aca78  stfd 18, 256(1)
  04aca7c  stfd 19, 264(1)
  04aca80  stfd 20, 272(1)
  04aca84  stfd 21, 280(1)
  04aca88  stfd 22, 288(1)
  04aca8c  stfd 23, 296(1)
  04aca90  stfd 24, 304(1)
  04aca94  stfd 25, 312(1)
  04aca98  stfd 26, 320(1)
  04aca9c  stfd 27, 328(1)
  04acaa0  stfd 28, 336(1)
  04acaa4  stfd 29, 344(1)
  04acaa8  stfd 30, 352(1)
  04acaac  stfd 31, 360(1)
  04acab0  lis 4, 143
  04acab4  std 30, 232(1)
  04acab8  lis 5, 114
  04acabc  lis 30, 143
  04acac0  lfs 1, 16476(4)
  04acac4  lfs 2, -3052(5)
  04acac8  fmuls 1, 1, 2
  04acacc  lfs 2, 16480(30)
  04acad0  std 31, 240(1)
  04acad4  lis 4, 75
  04acad8  std 28, 216(1)
  04acadc  ori 31, 3, 0
  04acae0  addi 28, 4, -13764
  04acae4  fdivs 1, 2, 1
  04acae8  std 29, 224(1)
  04acaec  lfs 22, 0(28)
  04acaf0  lwz 29, 120(31)
  04acaf4  fmuls 1, 1, 22
  04acaf8  bl 0x502758
  04acafc  nop
  04acb00  extsw 3, 3
  04acb04  std 3, 192(1)
  04acb08  lfs 20, 128(29)
  04acb0c  lfs 2, 4(28)
  04acb10  lfs 23, 16480(30)
  04acb14  lfs 1, 124(29)
  04acb18  lfd 3, 192(1)
  04acb1c  fmr 19, 23
  04acb20  fcfid 3, 3
  04acb24  frsp 3, 3
  04acb28  fmuls 20, 20, 3
  04acb2c  fmuls 2, 20, 2
  04acb30  bl 0x5025e0
  04acb34  nop
  04acb38  lis 3, 151
  04acb3c  li 5, 6
  04acb40  addic 3, 3, -25376
  04acb44  lis 4, 1
  04acb48  fmr 21, 1
  04acb4c  lis 6, 1
  04acb50  ori 4, 4, 1
  04acb54  li 8, 1
  04acb58  lwz 3, 4440(3)
  04acb5c  subc 6, 6, 4
  04acb60  lhz 7, 166(31)
  04acb64  subc 3, 5, 3
  04acb68  stw 31, 160(1)
  04acb6c  li 30, 0
  04acb70  cntlzw 3, 3
  04acb74  lis 5, 17839
  04acb78  sldi 3, 3, 58
  04acb7c  ori 5, 5, 57190
  04acb80  sradi 3, 3, 63
  04acb84  and 3, 3, 6
  04acb88  lis 6, 16256
  04acb8c  addc 3, 4, 3
  04acb90  li 4, 3
  04acb94  stw 6, 172(1)
  04acb98  stw 8, 176(1)
  04acb9c  stw 3, 164(1)
  04acba0  stw 30, 148(1)
  04acba4  stw 30, 144(1)
  04acba8  stw 6, 152(1)
  04acbac  stw 5, 156(1)
  04acbb0  stb 4, 168(1)
  04acbb4  stb 8, 169(1)
  04acbb8  sth 7, 170(1)
  04acbbc  lfs 24, 8(28)
  04acbc0  lfs 25, 12(28)
  04acbc4  lfs 26, 16(28)
  04acbc8  lfs 27, 20(28)
  04acbcc  lfs 28, 24(28)
  04acbd0  lfs 29, 28(28)
  04acbd4  lfs 30, 32(28)
  04acbd8  lfs 31, 36(28)
  04acbdc  fsubs 1, 24, 21
  04acbe0  lfs 4, 100(29)
  04acbe4  fsubs 2, 25, 21
  04acbe8  fsub 3, 21, 1
  04acbec  fsel 1, 3, 1, 21
  04acbf0  fsub 3, 2, 1
  04acbf4  fsel 2, 3, 2, 1
  04acbf8  fmuls 3, 4, 30
  04acbfc  lfs 1, 132(29)
  04acc00  fmuls 4, 2, 2
  04acc04  fmuls 5, 4, 2
  04acc08  fmuls 6, 4, 5
  04acc0c  fmadds 2, 5, 26, 2
  04acc10  fmuls 5, 4, 6
  04acc14  fmadds 2, 6, 27, 2
  04acc18  fmuls 4, 4, 5
  04acc1c  fmadds 2, 5, 28, 2
  04acc20  fmadds 2, 4, 29, 2
  04acc24  fmuls 2, 3, 2
  04acc28  bl 0x502578
  04acc2c  nop
  04acc30  fmr 18, 1
  04acc34  fmr 1, 21
  04acc38  fmr 2, 20
  04acc3c  bl 0x502578
  04acc40  nop
  04acc44  fmr 21, 1
  04acc48  lfs 4, 100(29)
  04acc4c  fsubs 1, 24, 21
  04acc50  fsubs 2, 25, 21
  04acc54  fsub 3, 21, 1
  04acc58  fsel 1, 3, 1, 21
  04acc5c  fsub 3, 2, 1
  04acc60  fsel 2, 3, 2, 1
  04acc64  fmuls 3, 4, 30
  04acc68  lfs 1, 132(29)
  04acc6c  fmuls 4, 2, 2
  04acc70  fmuls 5, 4, 2
  04acc74  fmuls 6, 4, 5
  04acc78  fmadds 2, 5, 26, 2
  04acc7c  fmuls 5, 4, 6
  04acc80  fmadds 2, 6, 27, 2
  04acc84  fmuls 4, 4, 5
  04acc88  fmadds 2, 5, 28, 2
  04acc8c  fmadds 2, 4, 29, 2
  04acc90  fmuls 2, 3, 2
  04acc94  bl 0x502578
  04acc98  nop
  04acc9c  fadds 3, 18, 31
  04acca0  fadds 2, 1, 31
  04acca4  fsubs 4, 24, 18
  04acca8  fsubs 5, 24, 1
  04accac  fsubs 6, 25, 18
  04accb0  addic 3, 1, 112
  04accb4  addic 4, 1, 128
  04accb8  fsubs 7, 24, 3
  04accbc  fsubs 8, 24, 2
  04accc0  fsub 9, 18, 4
  04accc4  fsub 11, 1, 5
  04accc8  fsubs 10, 25, 3
  04acccc  fsubs 12, 25, 2
  04accd0  addic 7, 1, 144
  04accd4  li 5, 0
  04accd8  fsub 13, 3, 7
  04accdc  fsub 0, 2, 8
  04acce0  fsel 4, 9, 4, 18
  04acce4  fsubs 9, 25, 1
  04acce8  fsel 1, 11, 5, 1
  04accec  lfs 18, 16(31)
  04accf0  ori 6, 31, 0
  04accf4  lfs 17, 20(31)
  04accf8  fsel 3, 13, 7, 3
  04accfc  fsel 2, 0, 8, 2
  04acd00  fsub 5, 6, 4
  04acd04  fsub 7, 9, 1
  04acd08  fsub 8, 10, 3
  04acd0c  fsub 11, 12, 2
  04acd10  fsel 4, 5, 6, 4
  04acd14  fsel 1, 7, 9, 1
  04acd18  fsel 3, 8, 10, 3
  04acd1c  fsel 2, 11, 12, 2
  04acd20  fmuls 5, 4, 4
  04acd24  fmuls 6, 1, 1
  04acd28  fmr 10, 19
  04acd2c  fnmsubs 19, 23, 22, 19
  04acd30  fmuls 7, 3, 3
  04acd34  fmuls 8, 2, 2
  04acd38  fmuls 9, 5, 4
  04acd3c  fmuls 11, 6, 1
  04acd40  fmuls 12, 7, 3
  04acd44  fmuls 13, 8, 2
  04acd48  fmuls 0, 5, 9
  04acd4c  fmadds 4, 9, 26, 4
  04acd50  fmuls 9, 6, 11
  04acd54  fmadds 1, 11, 26, 1
  04acd58  fmuls 11, 7, 12
  04acd5c  fmadds 3, 12, 26, 3
  04acd60  fmuls 12, 8, 13
  04acd64  fmadds 2, 13, 26, 2
  04acd68  fmuls 13, 5, 0
  04acd6c  fmadds 4, 0, 27, 4
  04acd70  fmadds 1, 9, 27, 1
  04acd74  fmuls 0, 7, 11
  04acd78  fmadds 3, 11, 27, 3
  04acd7c  fmuls 11, 8, 12
  04acd80  fmadds 2, 12, 27, 2
  04acd84  fmuls 5, 5, 13
  04acd88  fmadds 4, 13, 28, 4
  04acd8c  fmuls 12, 6, 9
  04acd90  lfs 13, 24(31)
  04acd94  stfs 13, 120(1)
  04acd98  fmuls 7, 7, 0
  04acd9c  fmadds 3, 0, 28, 3
  04acda0  stfs 13, 136(1)
  04acda4  fmuls 8, 8, 11
  04acda8  fmadds 2, 11, 28, 2
  04acdac  fmadds 4, 5, 29, 4
  04acdb0  fmuls 5, 6, 12
  04acdb4  fmadds 1, 12, 28, 1
  04acdb8  fmadds 3, 7, 29, 3
  04acdbc  fmadds 2, 8, 29, 2
  04acdc0  fmadds 4, 4, 10, 17
  04acdc4  fmadds 1, 5, 29, 1
  04acdc8  fmadds 3, 3, 10, 18
  04acdcc  fmadds 2, 2, 19, 18
  04acdd0  fmadds 1, 1, 19, 17
  04acdd4  stfs 4, 116(1)
  04acdd8  stfs 3, 112(1)
  04acddc  stfs 2, 128(1)
  04acde0  stfs 1, 132(1)
  04acde4  bl 0x57820
  04acde8  nop
  04acdec  addic 30, 30, 1
  04acdf0  cmpwi 30, 4
  04acdf4  bt 0, 0x4acbdc
  04acdf8  ld 0, 384(1)
  04acdfc  mtlr 0
  04ace00  lfd 17, 248(1)
  04ace04  lfd 18, 256(1)
  04ace08  lfd 19, 264(1)
  04ace0c  lfd 20, 272(1)
  04ace10  lfd 21, 280(1)
  04ace14  lfd 22, 288(1)
  04ace18  lfd 23, 296(1)
  04ace1c  lfd 24, 304(1)
  04ace20  lfd 25, 312(1)
  04ace24  lfd 26, 320(1)
  04ace28  lfd 27, 328(1)
  04ace2c  lfd 28, 336(1)
  04ace30  lfd 29, 344(1)
  04ace34  lfd 30, 352(1)
  04ace38  lfd 31, 360(1)
  04ace3c  ld 28, 216(1)
  04ace40  ld 29, 224(1)
  04ace44  ld 30, 232(1)
  04ace48  ld 31, 240(1)
  04ace4c  addi 1, 1, 368
  04ace50  blr

UpdateMoby_911:   # 0x4ace80, 0x3e4 bytes
  04ace80  stdu 1, -160(1)
  04ace84  mflr 0
  04ace88  std 0, 176(1)
  04ace8c  stfd 31, 152(1)
  04ace90  std 31, 144(1)
  04ace94  std 30, 136(1)
  04ace98  ori 31, 3, 0
  04ace9c  lwz 30, 120(31)
  04acea0  lwz 3, 144(30)
  04acea4  std 29, 128(1)
  04acea8  cmpwi 3, -1
  04aceac  bf 1, 0x4acef4
  04aceb0  lis 5, 151
  04aceb4  extsw 4, 3
  04aceb8  addic 3, 5, -25248
  04acebc  bl 0x110b70
  04acec0  nop
  04acec4  cmpwi 3, 0
  04acec8  bt 2, 0x4acee8
  04acecc  lis 3, 143
  04aced0  lis 4, 143
  04aced4  lfs 1, 16532(3)
  04aced8  stfs 1, 80(30)
  04acedc  lfs 1, 16536(4)
  04acee0  stfs 1, 84(30)
  04acee4  b 0x4acef4
  04acee8  li 3, 0
  04aceec  stw 3, 80(30)
  04acef0  stw 3, 84(30)
  04acef4  lbz 3, 32(31)
  04acef8  cmpwi 3, 1
  04acefc  cmpwi 1, 3, 3
  04acf00  cmpwi 6, 3, 2
  04acf04  cmpwi 7, 3, 0
  04acf08  bt 1, 0x4acf1c
  04acf0c  cmpwi 3, -1
  04acf10  bf 1, 0x4ad244
  04acf14  bf 29, 0x4acf28
  04acf18  b 0x4acfe8
  04acf1c  bf 25, 0x4ad0cc
  04acf20  bf 5, 0x4ad1d8
  04acf24  b 0x4ad244
  04acf28  lwz 3, 96(30)
  04acf2c  cmpwi 3, 0
  04acf30  bt 2, 0x4acf80
  04acf34  lis 4, 75
  04acf38  li 3, 1
  04acf3c  addi 4, 4, -12716
  04acf40  stb 3, 32(31)
  04acf44  lfs 1, 108(30)
  04acf48  lfs 2, 0(4)
  04acf4c  lfs 3, 104(30)
  04acf50  fmuls 1, 1, 2
  04acf54  lis 3, 114
  04acf58  stfs 1, 124(30)
  04acf5c  lfs 1, 4(4)
  04acf60  fdivs 1, 1, 3
  04acf64  lfs 3, -3052(3)
  04acf68  fmuls 1, 1, 2
  04acf6c  fmuls 1, 1, 3
  04acf70  stfs 1, 128(30)
  04acf74  lfs 1, 72(31)
  04acf78  stfs 1, 132(30)
  04acf7c  b 0x4acfdc
  04acf80  lis 4, 75
  04acf84  li 3, 3
  04acf88  addi 29, 4, -12716
  04acf8c  stb 3, 32(31)
  04acf90  lfs 1, 116(30)
  04acf94  lfs 2, 8(29)
  04acf98  lfs 3, 120(30)
  04acf9c  fmadds 1, 3, 2, 1
  04acfa0  bl 0x502758
  04acfa4  nop
  04acfa8  extsw 3, 3
  04acfac  li 4, 136
  04acfb0  std 3, 112(1)
  04acfb4  lis 3, 114
  04acfb8  lfs 1, 12(29)
  04acfbc  lfs 2, -3056(3)
  04acfc0  lfd 3, 112(1)
  04acfc4  fcfid 3, 3
  04acfc8  frsp 3, 3
  04acfcc  fadds 1, 3, 1
  04acfd0  fmuls 1, 2, 1
  04acfd4  fctiwz 1, 1
  04acfd8  stfiwx 1, 4, 30
  04acfdc  li 3, -1
  04acfe0  stw 3, 148(30)
  04acfe4  b 0x4ad244
  04acfe8  ori 3, 31, 0
  04acfec  lwz 4, 148(30)
  04acff0  extsw 4, 4
  04acff4  bl 0x15cc7c
  04acff8  nop
  04acffc  cmpwi 3, 0
  04ad000  bf 2, 0x4ad01c
  04ad004  li 3, 0
  04ad008  li 4, 4
  04ad00c  ori 5, 31, 0
  04ad010  bl 0x15d12c
  04ad014  nop
  04ad018  stw 3, 148(30)
  04ad01c  ori 3, 31, 0
  04ad020  bl 0x4ac3f0
  04ad024  ori 3, 31, 0
  04ad028  bl 0x4aca68
  04ad02c  lis 3, 75
  04ad030  lfs 1, 124(30)
  04ad034  addi 3, 3, -12716
  04ad038  lfs 2, 16(3)
  04ad03c  lfs 3, 20(3)
  04ad040  fsubs 2, 2, 1
  04ad044  fsubs 3, 3, 1
  04ad048  lfs 5, 24(3)
  04ad04c  fsub 4, 1, 2
  04ad050  fsel 2, 4, 2, 1
  04ad054  lfs 4, 28(3)
  04ad058  fsub 6, 3, 2
  04ad05c  fsel 2, 6, 3, 2
  04ad060  lfs 3, 32(3)
  04ad064  lfs 8, 100(30)
  04ad068  lfs 6, 36(3)
  04ad06c  lfs 7, 0(3)
  04ad070  fmuls 7, 8, 7
  04ad074  lfs 11, 128(30)
  04ad078  fmuls 9, 2, 2
  04ad07c  fmuls 10, 9, 2
  04ad080  fmuls 8, 9, 10
  04ad084  fmadds 2, 10, 5, 2
  04ad088  fmuls 5, 9, 8
  04ad08c  fmadds 4, 8, 4, 2
  04ad090  fmr 2, 11
  04ad094  fmuls 8, 9, 5
  04ad098  fmadds 3, 5, 3, 4
  04ad09c  fmadds 3, 8, 6, 3
  04ad0a0  fmuls 31, 7, 3
  04ad0a4  bl 0x502578
  04ad0a8  nop
  04ad0ac  lfs 3, 132(30)
  04ad0b0  stfs 1, 124(30)
  04ad0b4  fmr 2, 31
  04ad0b8  fmr 1, 3
  04ad0bc  bl 0x502578
  04ad0c0  nop
  04ad0c4  stfs 1, 72(31)
  04ad0c8  b 0x4ad244
  04ad0cc  ori 3, 31, 0
  04ad0d0  lwz 4, 148(30)
  04ad0d4  extsw 4, 4
  04ad0d8  bl 0x15cc7c
  04ad0dc  nop
  04ad0e0  cmpwi 3, 0
  04ad0e4  bf 2, 0x4ad100
  04ad0e8  li 3, 0
  04ad0ec  li 4, 4
  04ad0f0  ori 5, 31, 0
  04ad0f4  bl 0x15d12c
  04ad0f8  nop
  04ad0fc  stw 3, 148(30)
  04ad100  ori 3, 31, 0
  04ad104  bl 0x4ac3f0
  04ad108  ori 3, 31, 0
  04ad10c  bl 0x4abff8
  04ad110  addic 3, 30, 136
  04ad114  bl 0x4fff60
  04ad118  nop
  04ad11c  cmpwi 3, 0
  04ad120  bt 2, 0x4ad244
  04ad124  lis 4, 75
  04ad128  li 3, 3
  04ad12c  addi 29, 4, -12716
  04ad130  stb 3, 32(31)
  04ad134  lfs 1, 116(30)
  04ad138  lfs 2, 8(29)
  04ad13c  fmuls 1, 1, 2
  04ad140  bl 0x502758
  04ad144  nop
  04ad148  extsw 3, 3
  04ad14c  li 5, 136
  04ad150  std 3, 112(1)
  04ad154  lis 3, 114
  04ad158  lfs 1, 12(29)
  04ad15c  lwz 4, 148(30)
  04ad160  lfs 2, -3056(3)
  04ad164  lfd 3, 112(1)
  04ad168  fcfid 3, 3
  04ad16c  cmpwi 4, -1
  04ad170  frsp 3, 3
  04ad174  fadds 1, 3, 1
  04ad178  fmuls 1, 2, 1
  04ad17c  fctiwz 1, 1
  04ad180  stfiwx 1, 5, 30
  04ad184  bt 2, 0x4ad1cc
  04ad188  sldi 3, 4, 7
  04ad18c  sldi 6, 4, 4
  04ad190  lis 5, 150
  04ad194  subc 3, 3, 6
  04ad198  addic 5, 5, 14312
  04ad19c  extsw 3, 3
  04ad1a0  lwzx 5, 5, 3
  04ad1a4  cmpw 5, 31
  04ad1a8  bf 2, 0x4ad1cc
  04ad1ac  lis 5, 150
  04ad1b0  addic 5, 5, 14292
  04ad1b4  lbzx 3, 5, 3
  04ad1b8  cmpwi 3, 0
  04ad1bc  bt 2, 0x4ad1cc
  04ad1c0  extsw 3, 4
  04ad1c4  bl 0x15cdb0
  04ad1c8  nop
  04ad1cc  li 3, -1
  04ad1d0  stw 3, 148(30)
  04ad1d4  b 0x4ad244
  04ad1d8  addic 3, 30, 136
  04ad1dc  bl 0x4fff60
  04ad1e0  nop
  04ad1e4  cmpwi 3, 0
  04ad1e8  bt 2, 0x4ad244
  04ad1ec  lis 4, 75
  04ad1f0  li 3, 2
  04ad1f4  addi 29, 4, -12716
  04ad1f8  stb 3, 32(31)
  04ad1fc  lfs 1, 112(30)
  04ad200  lfs 2, 8(29)
  04ad204  fmuls 1, 1, 2
  04ad208  bl 0x502758
  04ad20c  nop
  04ad210  extsw 3, 3
  04ad214  li 4, 136
  04ad218  std 3, 112(1)
  04ad21c  lis 3, 114
  04ad220  lfs 1, 12(29)
  04ad224  lfs 2, -3056(3)
  04ad228  lfd 3, 112(1)
  04ad22c  fcfid 3, 3
  04ad230  frsp 3, 3
  04ad234  fadds 1, 3, 1
  04ad238  fmuls 1, 2, 1
  04ad23c  fctiwz 1, 1
  04ad240  stfiwx 1, 4, 30
  04ad244  ld 0, 176(1)
  04ad248  mtlr 0
  04ad24c  lfd 31, 152(1)
  04ad250  ld 29, 128(1)
  04ad254  ld 30, 136(1)
  04ad258  ld 31, 144(1)
  04ad25c  addi 1, 1, 160
  04ad260  blr
