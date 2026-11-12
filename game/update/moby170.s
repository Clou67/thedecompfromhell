# game/update/moby170.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M170_002ad088:   # 0x2ad088, 0x14 bytes
  02ad088  lis 3, 123
  02ad08c  lis 4, 1
  02ad090  addic 3, 3, 29348
  02ad094  stw 4, 72(3)
  02ad098  blr

M170_002ad118:   # 0x2ad118, 0x884 bytes
  02ad118  stdu 1, -416(1)
  02ad11c  mflr 0
  02ad120  std 0, 432(1)
  02ad124  stfd 23, 344(1)
  02ad128  stfd 24, 352(1)
  02ad12c  stfd 25, 360(1)
  02ad130  stfd 26, 368(1)
  02ad134  stfd 27, 376(1)
  02ad138  stfd 28, 384(1)
  02ad13c  stfd 29, 392(1)
  02ad140  stfd 30, 400(1)
  02ad144  stfd 31, 408(1)
  02ad148  std 29, 320(1)
  02ad14c  std 28, 312(1)
  02ad150  li 29, 416
  02ad154  lis 4, 43
  02ad158  std 30, 328(1)
  02ad15c  addc 28, 1, 29
  02ad160  std 27, 304(1)
  02ad164  addi 30, 4, -12128
  02ad168  lis 10, 16512
  02ad16c  std 31, 336(1)
  02ad170  ori 27, 7, 0
  02ad174  ori 31, 3, 0
  02ad178  std 5, 64(28)
  02ad17c  std 6, 72(28)
  02ad180  addic 29, 29, 64
  02ad184  lfs 1, 68(28)
  02ad188  addic 3, 1, 128
  02ad18c  lfs 2, 76(28)
  02ad190  li 7, 1
  02ad194  stfs 1, 132(1)
  02ad198  ori 10, 10, 32896
  02ad19c  stfs 2, 140(1)
  02ad1a0  lfs 1, 64(28)
  02ad1a4  stfs 1, 128(1)
  02ad1a8  lfs 27, 0(30)
  02ad1ac  lfs 1, 72(28)
  02ad1b0  fadds 2, 1, 27
  02ad1b4  fmr 1, 27
  02ad1b8  stfs 2, 136(1)
  02ad1bc  lfs 28, 4(30)
  02ad1c0  lfs 29, 12(30)
  02ad1c4  lfs 30, 16(30)
  02ad1c8  fmr 2, 28
  02ad1cc  lfs 3, 8(30)
  02ad1d0  fmr 4, 29
  02ad1d4  std 26, 296(1)
  02ad1d8  std 25, 288(1)
  02ad1dc  std 24, 280(1)
  02ad1e0  std 23, 272(1)
  02ad1e4  fmr 5, 30
  02ad1e8  bl 0x1246b8
  02ad1ec  nop
  02ad1f0  li 25, 0
  02ad1f4  lfs 31, 20(30)
  02ad1f8  ori 30, 25, 0
  02ad1fc  lis 10, 16512
  02ad200  fmr 1, 27
  02ad204  addic 3, 1, 128
  02ad208  fmr 2, 28
  02ad20c  li 7, 1
  02ad210  fmr 3, 31
  02ad214  fmr 4, 29
  02ad218  ori 10, 10, 32896
  02ad21c  fmr 5, 30
  02ad220  bl 0x1246b8
  02ad224  nop
  02ad228  addic 25, 25, 1
  02ad22c  cmpwi 25, 5
  02ad230  bt 0, 0x2ad1fc
  02ad234  lis 3, 43
  02ad238  lis 26, 161
  02ad23c  addi 3, 3, -12128
  02ad240  ori 25, 30, 0
  02ad244  addic 26, 26, 23856
  02ad248  lfs 31, 24(3)
  02ad24c  lfs 26, 28(3)
  02ad250  lfs 27, 32(3)
  02ad254  lfs 28, 36(3)
  02ad258  lfs 29, 40(3)
  02ad25c  lfs 30, 44(3)
  02ad260  lfs 24, 48(3)
  02ad264  lfs 25, 52(3)
  02ad268  fmr 1, 26
  02ad26c  stw 30, 160(1)
  02ad270  fmr 2, 27
  02ad274  stw 30, 164(1)
  02ad278  stw 30, 168(1)
  02ad27c  stw 30, 172(1)
  02ad280  bl 0xfcbe8
  02ad284  nop
  02ad288  stfs 1, 160(1)
  02ad28c  fmr 1, 26
  02ad290  fmr 2, 27
  02ad294  bl 0xfcbe8
  02ad298  nop
  02ad29c  stfs 1, 164(1)
  02ad2a0  fmr 2, 28
  02ad2a4  fmr 1, 31
  02ad2a8  bl 0xfcbe8
  02ad2ac  nop
  02ad2b0  lfs 2, 160(1)
  02ad2b4  lfs 3, 128(1)
  02ad2b8  lfs 4, 164(1)
  02ad2bc  fadds 2, 2, 3
  02ad2c0  lfs 3, 132(1)
  02ad2c4  lfs 5, 136(1)
  02ad2c8  fadds 3, 4, 3
  02ad2cc  fadds 4, 1, 5
  02ad2d0  lfs 5, 64(28)
  02ad2d4  lfs 6, 68(28)
  02ad2d8  fmr 1, 29
  02ad2dc  lfs 7, 72(28)
  02ad2e0  lfs 8, 172(1)
  02ad2e4  fsubs 5, 2, 5
  02ad2e8  stfs 2, 160(1)
  02ad2ec  fsubs 6, 3, 6
  02ad2f0  fsubs 7, 4, 7
  02ad2f4  stfs 3, 164(1)
  02ad2f8  fmr 2, 30
  02ad2fc  stfs 4, 168(1)
  02ad300  stfs 8, 156(1)
  02ad304  stfs 5, 144(1)
  02ad308  stfs 6, 148(1)
  02ad30c  stfs 7, 152(1)
  02ad310  bl 0xfcbe8
  02ad314  nop
  02ad318  lfs 3, 148(1)
  02ad31c  lfs 4, 144(1)
  02ad320  fmuls 2, 3, 3
  02ad324  lfs 5, 152(1)
  02ad328  addic 4, 1, 144
  02ad32c  li 10, 0
  02ad330  addic 5, 1, 160
  02ad334  fmadds 2, 4, 4, 2
  02ad338  ori 3, 31, 0
  02ad33c  ori 6, 26, 0
  02ad340  li 7, 354
  02ad344  fmadds 2, 5, 5, 2
  02ad348  fsqrts 6, 2
  02ad34c  fmr 2, 25
  02ad350  fdivs 7, 1, 6
  02ad354  fsub 8, 31, 6
  02ad358  fsub 9, 31, 6
  02ad35c  fsub 10, 31, 6
  02ad360  fsub 11, 6, 31
  02ad364  fsub 12, 6, 31
  02ad368  fsub 6, 6, 31
  02ad36c  fmr 1, 24
  02ad370  fmuls 4, 4, 7
  02ad374  fmuls 3, 3, 7
  02ad378  fmuls 5, 5, 7
  02ad37c  fsel 7, 8, 31, 4
  02ad380  fsel 8, 9, 31, 3
  02ad384  fsel 9, 10, 31, 5
  02ad388  fsel 4, 11, 7, 4
  02ad38c  fsel 3, 12, 8, 3
  02ad390  fsel 5, 6, 9, 5
  02ad394  stfs 4, 144(1)
  02ad398  stfs 3, 148(1)
  02ad39c  stfs 5, 152(1)
  02ad3a0  bl 0x28cce0
  02ad3a4  nop
  02ad3a8  addic 25, 25, 1
  02ad3ac  cmpwi 25, 4
  02ad3b0  bt 0, 0x2ad268
  02ad3b4  lis 3, 43
  02ad3b8  ori 25, 30, 0
  02ad3bc  addi 3, 3, -12128
  02ad3c0  lfs 24, 56(3)
  02ad3c4  lfs 25, 60(3)
  02ad3c8  fmr 1, 26
  02ad3cc  stw 30, 176(1)
  02ad3d0  fmr 2, 27
  02ad3d4  stw 30, 180(1)
  02ad3d8  stw 30, 184(1)
  02ad3dc  stw 30, 188(1)
  02ad3e0  bl 0xfcbe8
  02ad3e4  nop
  02ad3e8  stfs 1, 176(1)
  02ad3ec  fmr 1, 26
  02ad3f0  fmr 2, 27
  02ad3f4  bl 0xfcbe8
  02ad3f8  nop
  02ad3fc  stfs 1, 180(1)
  02ad400  fmr 2, 28
  02ad404  fmr 1, 31
  02ad408  bl 0xfcbe8
  02ad40c  nop
  02ad410  lfs 2, 176(1)
  02ad414  lfs 3, 128(1)
  02ad418  lfs 4, 180(1)
  02ad41c  fadds 2, 2, 3
  02ad420  lfs 3, 132(1)
  02ad424  lfs 5, 136(1)
  02ad428  fadds 3, 4, 3
  02ad42c  fadds 4, 1, 5
  02ad430  lfs 5, 64(28)
  02ad434  lfs 6, 68(28)
  02ad438  fmr 1, 29
  02ad43c  lfs 7, 72(28)
  02ad440  lfs 8, 188(1)
  02ad444  fsubs 5, 2, 5
  02ad448  stfs 2, 176(1)
  02ad44c  fsubs 6, 3, 6
  02ad450  fsubs 7, 4, 7
  02ad454  stfs 3, 180(1)
  02ad458  fmr 2, 30
  02ad45c  stfs 4, 184(1)
  02ad460  stfs 8, 156(1)
  02ad464  stfs 5, 144(1)
  02ad468  stfs 6, 148(1)
  02ad46c  stfs 7, 152(1)
  02ad470  bl 0xfcbe8
  02ad474  nop
  02ad478  lfs 2, 148(1)
  02ad47c  lfs 3, 144(1)
  02ad480  fmuls 4, 2, 2
  02ad484  lfs 5, 152(1)
  02ad488  li 3, 2
  02ad48c  fmadds 4, 3, 3, 4
  02ad490  fmadds 4, 5, 5, 4
  02ad494  fsqrts 4, 4
  02ad498  fdivs 1, 1, 4
  02ad49c  fsub 6, 31, 4
  02ad4a0  fsub 7, 31, 4
  02ad4a4  fsub 8, 31, 4
  02ad4a8  fsub 9, 4, 31
  02ad4ac  fsub 10, 4, 31
  02ad4b0  fsub 4, 4, 31
  02ad4b4  fmuls 3, 3, 1
  02ad4b8  fmuls 2, 2, 1
  02ad4bc  fmuls 1, 5, 1
  02ad4c0  fsel 5, 6, 31, 3
  02ad4c4  fsel 6, 7, 31, 2
  02ad4c8  fsel 7, 8, 31, 1
  02ad4cc  fsel 3, 9, 5, 3
  02ad4d0  fsel 2, 10, 6, 2
  02ad4d4  fsel 1, 4, 7, 1
  02ad4d8  stfs 3, 144(1)
  02ad4dc  stfs 2, 148(1)
  02ad4e0  stfs 1, 152(1)
  02ad4e4  bl 0xfc620
  02ad4e8  nop
  02ad4ec  addic 7, 3, 355
  02ad4f0  fmr 1, 24
  02ad4f4  li 10, 0
  02ad4f8  fmr 2, 25
  02ad4fc  extsw 7, 7
  02ad500  addic 4, 1, 144
  02ad504  addic 5, 1, 176
  02ad508  ori 3, 31, 0
  02ad50c  ori 6, 26, 0
  02ad510  bl 0x28cce0
  02ad514  nop
  02ad518  addic 25, 25, 1
  02ad51c  cmpwi 25, 4
  02ad520  bt 0, 0x2ad3c8
  02ad524  clrlwi 3, 27, 24
  02ad528  cmpwi 3, 0
  02ad52c  bt 2, 0x2ad944
  02ad530  lis 3, 149
  02ad534  lfs 1, 68(28)
  02ad538  addic 3, 3, 5056
  02ad53c  lfs 2, 324(3)
  02ad540  lfs 3, 320(3)
  02ad544  fsubs 1, 2, 1
  02ad548  lfs 2, 64(28)
  02ad54c  fsubs 2, 3, 2
  02ad550  lfs 3, 328(3)
  02ad554  lfs 4, 72(28)
  02ad558  fsubs 3, 3, 4
  02ad55c  fmuls 1, 1, 1
  02ad560  lis 3, 43
  02ad564  stw 30, 204(1)
  02ad568  li 28, 10
  02ad56c  addi 3, 3, -12128
  02ad570  stw 30, 200(1)
  02ad574  stw 30, 196(1)
  02ad578  stw 30, 192(1)
  02ad57c  fmadds 1, 2, 2, 1
  02ad580  lfs 30, 64(3)
  02ad584  fmadds 29, 3, 3, 1
  02ad588  fsqrts 29, 29
  02ad58c  fcmpu 0, 29, 30
  02ad590  cror 6, 1, 2
  02ad594  bt 6, 0x2ad5a8
  02ad598  fmr 1, 29
  02ad59c  bl 0x502758
  02ad5a0  nop
  02ad5a4  addic 28, 3, 2
  02ad5a8  lis 3, 43
  02ad5ac  cmpwi 28, 0
  02ad5b0  addi 3, 3, -12128
  02ad5b4  ori 26, 30, 0
  02ad5b8  lfs 1, 68(3)
  02ad5bc  fsubs 2, 1, 29
  02ad5c0  fsub 1, 29, 1
  02ad5c4  fsel 31, 1, 31, 2
  02ad5c8  bf 1, 0x2ad778
  02ad5cc  lis 3, 43
  02ad5d0  addc 27, 1, 29
  02ad5d4  addi 3, 3, -12128
  02ad5d8  clrldi 27, 27, 32
  02ad5dc  lfs 24, 72(3)
  02ad5e0  lfs 25, 76(3)
  02ad5e4  lfs 26, 80(3)
  02ad5e8  lfs 27, 84(3)
  02ad5ec  lfs 28, 88(3)
  02ad5f0  lfs 29, 92(3)
  02ad5f4  fmr 1, 30
  02ad5f8  fmr 2, 24
  02ad5fc  bl 0xfcbe8
  02ad600  nop
  02ad604  lis 3, 114
  02ad608  lis 5, 20224
  02ad60c  lis 4, 20224
  02ad610  lis 6, 12287
  02ad614  ori 4, 4, 28671
  02ad618  lfs 2, -3052(3)
  02ad61c  ori 3, 5, 36863
  02ad620  lis 5, 20224
  02ad624  ori 6, 6, 65535
  02ad628  fmuls 3, 2, 31
  02ad62c  ori 5, 5, 32767
  02ad630  stw 3, 208(1)
  02ad634  stw 3, 212(1)
  02ad638  lis 3, 12032
  02ad63c  stw 4, 220(1)
  02ad640  lis 4, 12032
  02ad644  stw 6, 224(1)
  02ad648  ori 3, 3, 24447
  02ad64c  stw 5, 216(1)
  02ad650  ori 4, 4, 20351
  02ad654  lis 5, 12032
  02ad658  stw 6, 228(1)
  02ad65c  lis 6, 12032
  02ad660  fmsubs 23, 1, 2, 3
  02ad664  ori 5, 5, 16255
  02ad668  stw 3, 232(1)
  02ad66c  stw 4, 236(1)
  02ad670  li 3, 6
  02ad674  ori 4, 6, 79
  02ad678  lis 6, 12032
  02ad67c  stw 5, 240(1)
  02ad680  lis 5, 16128
  02ad684  stw 4, 244(1)
  02ad688  stw 6, 248(1)
  02ad68c  stw 5, 252(1)
  02ad690  bl 0xfc620
  02ad694  nop
  02ad698  sldi 3, 3, 2
  02ad69c  addc 3, 3, 1
  02ad6a0  clrldi 4, 3, 32
  02ad6a4  li 3, 6
  02ad6a8  lwz 4, 208(4)
  02ad6ac  extsw 25, 4
  02ad6b0  bl 0xfc620
  02ad6b4  nop
  02ad6b8  lis 24, 114
  02ad6bc  sldi 3, 3, 2
  02ad6c0  addc 3, 3, 1
  02ad6c4  lfs 1, -3056(24)
  02ad6c8  clrldi 3, 3, 32
  02ad6cc  fmuls 2, 1, 26
  02ad6d0  fmuls 1, 1, 27
  02ad6d4  lwz 3, 232(3)
  02ad6d8  extsw 23, 3
  02ad6dc  fctiwz 2, 2
  02ad6e0  fctiwz 1, 1
  02ad6e4  stfd 2, 256(1)
  02ad6e8  lwz 3, 260(1)
  02ad6ec  stfd 1, 256(1)
  02ad6f0  lwz 4, 260(1)
  02ad6f4  extsw 3, 3
  02ad6f8  extsw 4, 4
  02ad6fc  bl 0xfe484
  02ad700  nop
  02ad704  lfs 1, -3056(24)
  02ad708  ori 24, 3, 0
  02ad70c  fmuls 2, 1, 28
  02ad710  fmuls 1, 1, 29
  02ad714  fctiwz 2, 2
  02ad718  fctiwz 1, 1
  02ad71c  stfd 2, 256(1)
  02ad720  lwz 3, 260(1)
  02ad724  stfd 1, 256(1)
  02ad728  extsw 3, 3
  02ad72c  lwz 4, 260(1)
  02ad730  extsw 4, 4
  02ad734  bl 0xfe484
  02ad738  nop
  02ad73c  ori 9, 3, 0
  02ad740  std 30, 112(1)
  02ad744  ori 8, 24, 0
  02ad748  fmr 1, 25
  02ad74c  addic 4, 1, 192
  02ad750  fmr 2, 23
  02ad754  ori 3, 27, 0
  02ad758  std 30, 120(1)
  02ad75c  ori 5, 25, 0
  02ad760  ori 6, 23, 0
  02ad764  bl 0x123390
  02ad768  nop
  02ad76c  addic 26, 26, 1
  02ad770  cmpw 26, 28
  02ad774  bt 0, 0x2ad5f4
  02ad778  lis 3, 161
  02ad77c  lis 4, 43
  02ad780  lis 5, 16243
  02ad784  addi 4, 4, -12128
  02ad788  ori 5, 5, 13107
  02ad78c  lwz 3, 1812(3)
  02ad790  srawi 6, 3, 31
  02ad794  lfs 31, 96(4)
  02ad798  srwi 7, 6, 1
  02ad79c  lfs 30, 100(4)
  02ad7a0  xor 3, 7, 3
  02ad7a4  subc 3, 3, 6
  02ad7a8  cmpw 3, 5
  02ad7ac  bf 0, 0x2ad854
  02ad7b0  lis 3, 43
  02ad7b4  lis 28, 114
  02ad7b8  addi 30, 3, -12128
  02ad7bc  li 25, 32
  02ad7c0  addc 3, 1, 29
  02ad7c4  addic 27, 1, 192
  02ad7c8  clrldi 26, 3, 32
  02ad7cc  lfs 1, 80(30)
  02ad7d0  li 8, 127
  02ad7d4  lfs 2, -3056(28)
  02ad7d8  ori 3, 31, 0
  02ad7dc  std 25, 112(1)
  02ad7e0  ori 4, 26, 0
  02ad7e4  fmuls 2, 2, 1
  02ad7e8  ori 5, 27, 0
  02ad7ec  fmr 1, 30
  02ad7f0  li 9, 127
  02ad7f4  li 10, 127
  02ad7f8  fctiwz 2, 2
  02ad7fc  stfd 2, 256(1)
  02ad800  lwz 7, 260(1)
  02ad804  extsw 7, 7
  02ad808  bl 0x1d4d88
  02ad80c  nop
  02ad810  lfs 2, 104(30)
  02ad814  lfs 3, -3056(28)
  02ad818  ori 3, 31, 0
  02ad81c  std 25, 112(1)
  02ad820  fmr 1, 31
  02ad824  fmuls 2, 3, 2
  02ad828  ori 4, 26, 0
  02ad82c  ori 5, 27, 0
  02ad830  li 8, 127
  02ad834  li 9, 32
  02ad838  li 10, 0
  02ad83c  fctiwz 2, 2
  02ad840  stfd 2, 256(1)
  02ad844  lwz 7, 260(1)
  02ad848  extsw 7, 7
  02ad84c  bl 0x1d4d88
  02ad850  nop
  02ad854  lis 3, 43
  02ad858  lis 30, 114
  02ad85c  addi 28, 3, -12128
  02ad860  li 6, 48
  02ad864  addc 3, 1, 29
  02ad868  addic 27, 1, 192
  02ad86c  clrldi 29, 3, 32
  02ad870  lfs 1, 84(28)
  02ad874  lfs 2, -3056(30)
  02ad878  ori 3, 31, 0
  02ad87c  std 6, 112(1)
  02ad880  li 8, 127
  02ad884  fmuls 2, 2, 1
  02ad888  ori 4, 29, 0
  02ad88c  fmr 1, 30
  02ad890  ori 5, 27, 0
  02ad894  li 9, 64
  02ad898  li 10, 0
  02ad89c  fctiwz 2, 2
  02ad8a0  stfd 2, 256(1)
  02ad8a4  lwz 7, 260(1)
  02ad8a8  extsw 7, 7
  02ad8ac  bl 0x1d4d88
  02ad8b0  nop
  02ad8b4  lfs 2, 108(28)
  02ad8b8  li 6, 64
  02ad8bc  lfs 3, -3056(30)
  02ad8c0  li 8, 96
  02ad8c4  fmr 1, 31
  02ad8c8  ori 3, 31, 0
  02ad8cc  fmuls 2, 3, 2
  02ad8d0  ori 4, 29, 0
  02ad8d4  std 6, 112(1)
  02ad8d8  ori 5, 27, 0
  02ad8dc  li 9, 16
  02ad8e0  li 10, 0
  02ad8e4  fctiwz 2, 2
  02ad8e8  stfd 2, 256(1)
  02ad8ec  lwz 7, 260(1)
  02ad8f0  extsw 7, 7
  02ad8f4  bl 0x1d4d88
  02ad8f8  nop
  02ad8fc  lfs 2, 116(28)
  02ad900  li 6, 32
  02ad904  lfs 3, -3056(30)
  02ad908  ori 3, 31, 0
  02ad90c  lfs 1, 112(28)
  02ad910  ori 4, 29, 0
  02ad914  fmuls 2, 3, 2
  02ad918  ori 5, 27, 0
  02ad91c  std 6, 112(1)
  02ad920  li 8, 32
  02ad924  li 9, 0
  02ad928  li 10, 0
  02ad92c  fctiwz 2, 2
  02ad930  stfd 2, 256(1)
  02ad934  lwz 7, 260(1)
  02ad938  extsw 7, 7
  02ad93c  bl 0x1d4d88
  02ad940  nop
  02ad944  ld 0, 432(1)
  02ad948  mtlr 0
  02ad94c  lfd 23, 344(1)
  02ad950  lfd 24, 352(1)
  02ad954  lfd 25, 360(1)
  02ad958  lfd 26, 368(1)
  02ad95c  lfd 27, 376(1)
  02ad960  lfd 28, 384(1)
  02ad964  lfd 29, 392(1)
  02ad968  lfd 30, 400(1)
  02ad96c  lfd 31, 408(1)
  02ad970  ld 23, 272(1)
  02ad974  ld 24, 280(1)
  02ad978  ld 25, 288(1)
  02ad97c  ld 26, 296(1)
  02ad980  ld 27, 304(1)
  02ad984  ld 28, 312(1)
  02ad988  ld 29, 320(1)
  02ad98c  ld 30, 328(1)
  02ad990  ld 31, 336(1)
  02ad994  addi 1, 1, 416
  02ad998  blr

M170_002ad9c0:   # 0x2ad9c0, 0x380 bytes
  02ad9c0  stdu 1, -288(1)
  02ad9c4  mflr 0
  02ad9c8  std 0, 304(1)
  02ad9cc  stfd 31, 280(1)
  02ad9d0  std 30, 264(1)
  02ad9d4  ori 30, 3, 0
  02ad9d8  std 31, 272(1)
  02ad9dc  lbz 3, 32(3)
  02ad9e0  std 29, 256(1)
  02ad9e4  ori 31, 4, 0
  02ad9e8  ori 29, 5, 0
  02ad9ec  std 28, 248(1)
  02ad9f0  std 27, 240(1)
  02ad9f4  cmpwi 3, 2
  02ad9f8  bt 2, 0x2add08
  02ad9fc  ori 3, 30, 0
  02ada00  lis 4, 51
  02ada04  li 5, 0
  02ada08  bl 0x10675c
  02ada0c  nop
  02ada10  ori 28, 3, 0
  02ada14  cmpwi 28, 0
  02ada18  bt 2, 0x2ada7c
  02ada1c  lfs 1, 44(28)
  02ada20  lhz 4, 166(30)
  02ada24  lis 3, 101
  02ada28  addic 3, 3, 23012
  02ada2c  extsh 4, 4
  02ada30  stfd 1, 64(1)
  02ada34  ld 5, 64(1)
  02ada38  bl 0x5cd098
  02ada3c  nop
  02ada40  lfs 1, 0(28)
  02ada44  lis 3, 101
  02ada48  lfs 2, 4(28)
  02ada4c  lfs 3, 8(28)
  02ada50  lwz 4, 56(28)
  02ada54  addic 3, 3, 23052
  02ada58  stfd 1, 64(1)
  02ada5c  extsw 4, 4
  02ada60  stfd 2, 72(1)
  02ada64  stfd 3, 80(1)
  02ada68  ld 5, 64(1)
  02ada6c  ld 6, 72(1)
  02ada70  ld 7, 80(1)
  02ada74  bl 0x5cd098
  02ada78  nop
  02ada7c  ori 3, 30, 0
  02ada80  ori 4, 28, 0
  02ada84  addic 7, 1, 224
  02ada88  li 10, 4
  02ada8c  ori 5, 29, 0
  02ada90  li 6, 0
  02ada94  li 8, 0
  02ada98  li 9, 0
  02ada9c  bl 0x106840
  02adaa0  nop
  02adaa4  ori 4, 3, 0
  02adaa8  lwz 3, 224(1)
  02adaac  cmpwi 4, 0
  02adab0  lfs 1, 24(30)
  02adab4  bf 1, 0x2adac8
  02adab8  cmpwi 4, 2
  02adabc  bt 1, 0x2adac8
  02adac0  li 4, 0
  02adac4  stw 4, 0(29)
  02adac8  cmpwi 3, 1
  02adacc  bf 1, 0x2add00
  02adad0  cmpwi 28, 0
  02adad4  bt 2, 0x2add00
  02adad8  lwz 3, 32(28)
  02adadc  cmpwi 3, 0
  02adae0  bt 2, 0x2add00
  02adae4  lis 4, 43
  02adae8  addi 4, 4, -9828
  02adaec  lfs 2, 0(4)
  02adaf0  lfs 3, 24(3)
  02adaf4  fadds 1, 1, 2
  02adaf8  fcmpu 0, 3, 1
  02adafc  cror 6, 0, 2
  02adb00  bt 6, 0x2add00
  02adb04  lwz 3, 0(29)
  02adb08  lwz 4, 44(28)
  02adb0c  srawi 6, 3, 31
  02adb10  srawi 5, 4, 31
  02adb14  lfs 2, 0(29)
  02adb18  srwi 8, 6, 1
  02adb1c  lfs 1, 44(28)
  02adb20  srwi 7, 5, 1
  02adb24  xor 3, 8, 3
  02adb28  xor 4, 7, 4
  02adb2c  subc 3, 3, 6
  02adb30  subc 4, 4, 5
  02adb34  cmpw 3, 4
  02adb38  bt 1, 0x2adca4
  02adb3c  lis 3, 43
  02adb40  li 28, 0
  02adb44  addi 27, 3, -9828
  02adb48  lis 3, 114
  02adb4c  li 5, -1
  02adb50  li 4, 0
  02adb54  lfs 31, 4(27)
  02adb58  stw 28, 192(1)
  02adb5c  stw 28, 196(1)
  02adb60  stw 28, 200(1)
  02adb64  stw 28, 204(1)
  02adb68  lfs 2, 8(27)
  02adb6c  lfs 3, -3052(3)
  02adb70  lhz 6, 52(30)
  02adb74  ori 3, 30, 0
  02adb78  fmuls 1, 3, 2
  02adb7c  stw 28, 0(29)
  02adb80  rlwimi 6, 28, 0, 19, 19
  02adb84  sth 6, 52(30)
  02adb88  stfs 1, 200(1)
  02adb8c  bl 0xfd8d0
  02adb90  nop
  02adb94  li 5, 120
  02adb98  addic 4, 31, 96
  02adb9c  ori 3, 30, 0
  02adba0  stb 5, 103(31)
  02adba4  bl 0x10c808
  02adba8  nop
  02adbac  addic 29, 1, 208
  02adbb0  ori 3, 30, 0
  02adbb4  li 4, 0
  02adbb8  ori 5, 29, 0
  02adbbc  bl 0xf1114
  02adbc0  nop
  02adbc4  lfs 3, 12(27)
  02adbc8  li 6, 1
  02adbcc  lfs 4, 16(27)
  02adbd0  lfs 6, 20(27)
  02adbd4  li 7, -1
  02adbd8  lfs 7, 24(27)
  02adbdc  ori 3, 30, 0
  02adbe0  addic 4, 1, 192
  02adbe4  fmr 1, 31
  02adbe8  std 6, 144(1)
  02adbec  ori 5, 29, 0
  02adbf0  std 6, 160(1)
  02adbf4  li 8, 10
  02adbf8  std 6, 168(1)
  02adbfc  fmr 2, 31
  02adc00  std 7, 176(1)
  02adc04  li 9, 3
  02adc08  std 28, 184(1)
  02adc0c  fmr 5, 31
  02adc10  li 10, 16
  02adc14  bl 0x10e030
  02adc18  nop
  02adc1c  lbz 3, 83(30)
  02adc20  cmpwi 3, 1
  02adc24  bt 2, 0x2adc40
  02adc28  ori 3, 30, 0
  02adc2c  li 4, 1
  02adc30  li 5, 0
  02adc34  li 6, 0
  02adc38  bl 0xfddc0
  02adc3c  nop
  02adc40  lwz 4, 112(31)
  02adc44  cmpwi 4, -1
  02adc48  bt 2, 0x2adc90
  02adc4c  sldi 3, 4, 7
  02adc50  sldi 6, 4, 4
  02adc54  lis 5, 150
  02adc58  subc 3, 3, 6
  02adc5c  addic 5, 5, 14312
  02adc60  extsw 3, 3
  02adc64  lwzx 5, 5, 3
  02adc68  cmpw 5, 30
  02adc6c  bf 2, 0x2adc90
  02adc70  lis 5, 150
  02adc74  addic 5, 5, 14292
  02adc78  lbzx 3, 5, 3
  02adc7c  cmpwi 3, 0
  02adc80  bt 2, 0x2adc90
  02adc84  extsw 3, 4
  02adc88  bl 0x15cdb0
  02adc8c  nop
  02adc90  li 3, -1
  02adc94  li 4, 2
  02adc98  stw 3, 112(31)
  02adc9c  stb 4, 32(30)
  02adca0  b 0x2add00
  02adca4  fsubs 1, 2, 1
  02adca8  lis 3, 43
  02adcac  vspltisw 2, -1
  02adcb0  li 4, 250
  02adcb4  addi 3, 3, -9828
  02adcb8  li 6, 28
  02adcbc  lis 5, 114
  02adcc0  li 7, -3056
  02adcc4  vslw 2, 2, 2
  02adcc8  stfs 1, 0(29)
  02adccc  stb 4, 103(31)
  02adcd0  lvlx 3, 6, 3
  02adcd4  lvlx 4, 7, 5
  02adcd8  vspltw 3, 3, 0
  02adcdc  li 5, 38
  02adce0  addic 4, 31, 96
  02adce4  ori 3, 30, 0
  02adce8  vmaddfp 2, 4, 3, 2
  02adcec  vctsxs 2, 2, 0
  02adcf0  vsplth 2, 2, 1
  02adcf4  stvehx 2, 5, 31
  02adcf8  bl 0x10c808
  02adcfc  nop
  02add00  li 3, 255
  02add04  stb 3, 164(30)
  02add08  addic 4, 31, 96
  02add0c  ori 3, 30, 0
  02add10  bl 0x10c9a0
  02add14  nop
  02add18  ld 0, 304(1)
  02add1c  mtlr 0
  02add20  lfd 31, 280(1)
  02add24  ld 27, 240(1)
  02add28  ld 28, 248(1)
  02add2c  ld 29, 256(1)
  02add30  ld 30, 264(1)
  02add34  ld 31, 272(1)
  02add38  addi 1, 1, 288
  02add3c  blr

UpdateMoby_170:   # 0x2add88, 0x60c bytes
  02add88  stdu 1, -384(1)
  02add8c  mflr 0
  02add90  std 0, 400(1)
  02add94  stfd 30, 368(1)
  02add98  stfd 31, 376(1)
  02add9c  std 31, 360(1)
  02adda0  lbz 4, 32(3)
  02adda4  std 30, 352(1)
  02adda8  ori 31, 3, 0
  02addac  lwz 30, 120(3)
  02addb0  cmpwi 4, 0
  02addb4  cmpwi 1, 4, -1
  02addb8  cmpwi 6, 4, 1
  02addbc  std 29, 344(1)
  02addc0  std 28, 336(1)
  02addc4  std 27, 328(1)
  02addc8  std 26, 320(1)
  02addcc  std 25, 312(1)
  02addd0  cmpwi 7, 4, 2
  02addd4  bt 1, 0x2adde0
  02addd8  bf 5, 0x2ae360
  02adddc  b 0x2addec
  02adde0  bf 25, 0x2adef4
  02adde4  bf 29, 0x2ae0d4
  02adde8  b 0x2ae360
  02addec  li 4, 0
  02addf0  lhz 3, 50(31)
  02addf4  lbz 6, 48(31)
  02addf8  li 5, 1
  02addfc  stb 4, 188(31)
  02ade00  extsh 4, 3
  02ade04  stb 5, 32(31)
  02ade08  cmpw 6, 4
  02ade0c  bf 0, 0x2ade14
  02ade10  stb 3, 48(31)
  02ade14  li 3, -1
  02ade18  lhz 6, 178(31)
  02ade1c  lis 5, 151
  02ade20  lis 4, 161
  02ade24  stw 3, 112(30)
  02ade28  addic 4, 4, -13028
  02ade2c  extsh 3, 6
  02ade30  lwz 5, -25488(5)
  02ade34  srawi 3, 3, 5
  02ade38  slwi 5, 5, 8
  02ade3c  sldi 3, 3, 2
  02ade40  extsw 5, 5
  02ade44  addc 3, 3, 4
  02ade48  clrlwi 6, 6, 27
  02ade4c  clrldi 3, 3, 32
  02ade50  li 4, 1
  02ade54  slw 4, 4, 6
  02ade58  lwzx 3, 3, 5
  02ade5c  and 3, 3, 4
  02ade60  cmpwi 3, 0
  02ade64  bt 2, 0x2ade9c
  02ade68  lwz 30, 116(30)
  02ade6c  cmpwi 30, -1
  02ade70  bt 2, 0x2ade8c
  02ade74  lis 3, 162
  02ade78  slwi 5, 30, 2
  02ade7c  addic 3, 3, 2088
  02ade80  extsw 5, 5
  02ade84  li 4, 1
  02ade88  stwx 4, 3, 5
  02ade8c  ori 3, 31, 0
  02ade90  bl 0xefb38
  02ade94  nop
  02ade98  b 0x2ae360
  02ade9c  addic 30, 1, 192
  02adea0  ori 3, 31, 0
  02adea4  li 4, 0
  02adea8  ori 5, 30, 0
  02adeac  bl 0xf1114
  02adeb0  nop
  02adeb4  lis 3, 43
  02adeb8  lfs 1, 200(1)
  02adebc  ori 4, 30, 0
  02adec0  addi 5, 3, -8896
  02adec4  ori 3, 31, 0
  02adec8  lfs 2, 0(5)
  02adecc  fadds 1, 1, 2
  02aded0  stfs 1, 200(1)
  02aded4  lfs 1, 4(5)
  02aded8  bl 0x2a4e90
  02adedc  nop
  02adee0  lhz 3, 52(31)
  02adee4  li 4, 0
  02adee8  rlwimi 3, 4, 0, 19, 19
  02adeec  sth 3, 52(31)
  02adef0  b 0x2ae360
  02adef4  lwz 3, 116(30)
  02adef8  cmpwi 3, -1
  02adefc  bt 2, 0x2adf18
  02adf00  lis 4, 162
  02adf04  slwi 3, 3, 2
  02adf08  addic 4, 4, 2088
  02adf0c  extsw 3, 3
  02adf10  li 5, 0
  02adf14  stwx 5, 4, 3
  02adf18  lwz 3, 112(30)
  02adf1c  cmpwi 3, -1
  02adf20  bt 2, 0x2adf40
  02adf24  extsw 4, 3
  02adf28  ori 3, 31, 0
  02adf2c  bl 0x15cc7c
  02adf30  nop
  02adf34  cmpwi 3, 0
  02adf38  bf 2, 0x2adfa4
  02adf3c  lwz 3, 112(30)
  02adf40  cmpwi 3, -1
  02adf44  bf 2, 0x2adf60
  02adf48  li 3, 0
  02adf4c  li 4, 4
  02adf50  ori 5, 31, 0
  02adf54  bl 0x15d12c
  02adf58  nop
  02adf5c  stw 3, 112(30)
  02adf60  cmpwi 3, -1
  02adf64  bt 2, 0x2adfa4
  02adf68  vspltisw 2, 0
  02adf6c  lis 4, 43
  02adf70  li 3, 208
  02adf74  li 5, 8
  02adf78  addi 6, 4, -8896
  02adf7c  li 7, 216
  02adf80  addic 4, 1, 208
  02adf84  stvx 2, 3, 1
  02adf88  lvlx 2, 5, 6
  02adf8c  lwz 3, 112(30)
  02adf90  vspltw 2, 2, 0
  02adf94  extsw 3, 3
  02adf98  stvewx 2, 7, 1
  02adf9c  bl 0x15d5b8
  02adfa0  nop
  02adfa4  lbz 3, 49(31)
  02adfa8  cmpwi 3, 0
  02adfac  bt 2, 0x2ae0c0
  02adfb0  li 3, 9
  02adfb4  bl 0xfc620
  02adfb8  nop
  02adfbc  cmpwi 3, 0
  02adfc0  bf 2, 0x2ae0c0
  02adfc4  bl 0x5c8318
  02adfc8  nop
  02adfcc  addic 3, 3, 48
  02adfd0  clrlwi 29, 3, 26
  02adfd4  bl 0x5c8318
  02adfd8  nop
  02adfdc  addic 3, 3, 32
  02adfe0  clrlwi 28, 3, 26
  02adfe4  bl 0x5c8318
  02adfe8  nop
  02adfec  li 5, 47
  02adff0  addic 27, 1, 224
  02adff4  and 26, 3, 5
  02adff8  ori 3, 31, 0
  02adffc  li 4, 0
  02ae000  ori 5, 27, 0
  02ae004  bl 0xf1114
  02ae008  nop
  02ae00c  lis 3, 43
  02ae010  lfs 1, 232(1)
  02ae014  addi 25, 3, -8896
  02ae018  lfs 31, 12(25)
  02ae01c  fadds 1, 1, 31
  02ae020  stfs 1, 232(1)
  02ae024  lfs 1, 16(25)
  02ae028  lfs 2, 20(25)
  02ae02c  bl 0xfcbe8
  02ae030  nop
  02ae034  fmr 30, 1
  02ae038  bl 0x5c8318
  02ae03c  nop
  02ae040  lis 4, 26214
  02ae044  ori 4, 4, 26215
  02ae048  mulhw 4, 4, 3
  02ae04c  srawi 4, 4, 4
  02ae050  srwi 5, 4, 31
  02ae054  addc 4, 4, 5
  02ae058  sldi 5, 4, 5
  02ae05c  sldi 4, 4, 3
  02ae060  addc 4, 5, 4
  02ae064  subc 3, 3, 4
  02ae068  lis 4, 114
  02ae06c  addic 3, 3, 40
  02ae070  extsw 3, 3
  02ae074  fmr 1, 30
  02ae078  ori 5, 28, 0
  02ae07c  ori 6, 26, 0
  02ae080  std 3, 288(1)
  02ae084  lfs 2, -3056(4)
  02ae088  lfd 3, 288(1)
  02ae08c  ori 3, 27, 0
  02ae090  fcfid 3, 3
  02ae094  ori 4, 29, 0
  02ae098  frsp 3, 3
  02ae09c  fadds 3, 3, 31
  02ae0a0  fmuls 2, 2, 3
  02ae0a4  fctiwz 2, 2
  02ae0a8  stfd 2, 288(1)
  02ae0ac  lwz 8, 292(1)
  02ae0b0  lfs 2, 24(25)
  02ae0b4  extsw 8, 8
  02ae0b8  bl 0x121a40
  02ae0bc  nop
  02ae0c0  addic 5, 30, 32
  02ae0c4  ori 3, 31, 0
  02ae0c8  ori 4, 30, 0
  02ae0cc  bl 0x2ad9c0
  02ae0d0  b 0x2ae360
  02ae0d4  lis 3, 43
  02ae0d8  li 4, 0
  02ae0dc  addi 3, 3, -8896
  02ae0e0  lis 5, 114
  02ae0e4  lfs 31, 24(3)
  02ae0e8  stw 4, 240(1)
  02ae0ec  stw 4, 244(1)
  02ae0f0  stw 4, 248(1)
  02ae0f4  stw 4, 252(1)
  02ae0f8  lfs 1, 28(3)
  02ae0fc  lfs 2, -3052(5)
  02ae100  lbz 4, 188(31)
  02ae104  fmuls 1, 2, 1
  02ae108  cmpwi 4, 0
  02ae10c  cmpwi 1, 4, -1
  02ae110  cmpwi 6, 4, 1
  02ae114  cmpwi 7, 4, 2
  02ae118  stfs 1, 248(1)
  02ae11c  lfs 1, 32(3)
  02ae120  bt 1, 0x2ae12c
  02ae124  bf 5, 0x2ae154
  02ae128  b 0x2ae138
  02ae12c  bf 25, 0x2ae148
  02ae130  bf 29, 0x2ae148
  02ae134  b 0x2ae154
  02ae138  lis 3, 43
  02ae13c  addi 3, 3, -8896
  02ae140  lfs 1, 36(3)
  02ae144  b 0x2ae154
  02ae148  lis 3, 43
  02ae14c  addi 3, 3, -8896
  02ae150  lfs 1, 40(3)
  02ae154  lis 3, 43
  02ae158  addi 3, 3, -8896
  02ae15c  lfs 2, 44(3)
  02ae160  fcmpu 0, 1, 2
  02ae164  cror 6, 1, 2
  02ae168  bt 6, 0x2ae20c
  02ae16c  ori 3, 31, 0
  02ae170  bl 0x113e88
  02ae174  nop
  02ae178  cmpwi 3, 0
  02ae17c  bt 2, 0x2ae20c
  02ae180  addic 29, 1, 256
  02ae184  lbz 4, 188(31)
  02ae188  ori 3, 31, 0
  02ae18c  ori 5, 29, 0
  02ae190  addic 4, 4, 1
  02ae194  bl 0xf1114
  02ae198  nop
  02ae19c  lis 3, 43
  02ae1a0  fmr 1, 31
  02ae1a4  li 11, -1
  02ae1a8  fmr 2, 31
  02ae1ac  addi 7, 3, -8896
  02ae1b0  fmr 5, 31
  02ae1b4  li 6, 1
  02ae1b8  li 12, 0
  02ae1bc  ori 3, 31, 0
  02ae1c0  addic 4, 1, 240
  02ae1c4  lfs 3, 48(7)
  02ae1c8  ori 5, 29, 0
  02ae1cc  lfs 4, 52(7)
  02ae1d0  li 8, 10
  02ae1d4  lfs 6, 56(7)
  02ae1d8  li 9, 3
  02ae1dc  lfs 7, 60(7)
  02ae1e0  li 10, 16
  02ae1e4  std 11, 144(1)
  02ae1e8  std 6, 160(1)
  02ae1ec  std 6, 168(1)
  02ae1f0  std 11, 176(1)
  02ae1f4  std 12, 184(1)
  02ae1f8  bl 0x10e030
  02ae1fc  nop
  02ae200  lbz 3, 188(31)
  02ae204  addic 3, 3, 1
  02ae208  stb 3, 188(31)
  02ae20c  lbz 3, 112(31)
  02ae210  rlwinm 3, 3, 0, 30, 30
  02ae214  cmpwi 3, 0
  02ae218  bt 2, 0x2ae360
  02ae21c  lis 3, 43
  02ae220  fmr 1, 31
  02ae224  li 7, -1
  02ae228  fmr 2, 31
  02ae22c  addi 28, 3, -8896
  02ae230  fmr 5, 31
  02ae234  li 6, 1
  02ae238  li 29, 0
  02ae23c  addic 4, 1, 240
  02ae240  ori 3, 31, 0
  02ae244  lfs 3, 48(28)
  02ae248  li 5, 0
  02ae24c  lfs 4, 52(28)
  02ae250  li 8, 10
  02ae254  lfs 6, 56(28)
  02ae258  li 9, 3
  02ae25c  lfs 7, 60(28)
  02ae260  li 10, 16
  02ae264  std 7, 144(1)
  02ae268  std 6, 160(1)
  02ae26c  std 6, 168(1)
  02ae270  std 7, 176(1)
  02ae274  std 29, 184(1)
  02ae278  bl 0x10e030
  02ae27c  nop
  02ae280  addic 5, 1, 272
  02ae284  ori 3, 31, 0
  02ae288  li 4, 3
  02ae28c  bl 0xf1114
  02ae290  nop
  02ae294  lfs 1, 272(1)
  02ae298  lfs 2, 16(31)
  02ae29c  lfs 3, 276(1)
  02ae2a0  fsubs 1, 1, 2
  02ae2a4  lfs 2, 20(31)
  02ae2a8  lfs 4, 280(1)
  02ae2ac  fsubs 2, 3, 2
  02ae2b0  lfs 3, 24(31)
  02ae2b4  fsubs 3, 4, 3
  02ae2b8  stfs 1, 272(1)
  02ae2bc  stfs 2, 276(1)
  02ae2c0  stfs 3, 280(1)
  02ae2c4  lfs 30, 64(28)
  02ae2c8  fmr 1, 31
  02ae2cc  fmr 2, 30
  02ae2d0  bl 0xfcbe8
  02ae2d4  nop
  02ae2d8  lfs 2, 272(1)
  02ae2dc  lfs 3, 280(1)
  02ae2e0  ori 3, 31, 0
  02ae2e4  lfs 4, 16(31)
  02ae2e8  li 7, 1
  02ae2ec  lfs 5, 24(31)
  02ae2f0  fmadds 2, 2, 1, 4
  02ae2f4  fmadds 3, 3, 1, 5
  02ae2f8  lfs 4, 276(1)
  02ae2fc  lfs 5, 20(31)
  02ae300  lfs 6, 284(1)
  02ae304  fmadds 1, 4, 1, 5
  02ae308  stfs 6, 76(1)
  02ae30c  stfs 2, 64(1)
  02ae310  stfs 3, 72(1)
  02ae314  stfs 1, 68(1)
  02ae318  ld 5, 64(1)
  02ae31c  ld 6, 72(1)
  02ae320  bl 0x2ad118
  02ae324  addic 29, 29, 1
  02ae328  cmpwi 29, 5
  02ae32c  bt 0, 0x2ae2c8
  02ae330  lwz 30, 116(30)
  02ae334  cmpwi 30, -1
  02ae338  bt 2, 0x2ae354
  02ae33c  lis 3, 162
  02ae340  slwi 4, 30, 2
  02ae344  addic 3, 3, 2088
  02ae348  extsw 4, 4
  02ae34c  li 5, 1
  02ae350  stwx 5, 3, 4
  02ae354  ori 3, 31, 0
  02ae358  bl 0xefb38
  02ae35c  nop
  02ae360  ld 0, 400(1)
  02ae364  mtlr 0
  02ae368  lfd 30, 368(1)
  02ae36c  lfd 31, 376(1)
  02ae370  ld 25, 312(1)
  02ae374  ld 26, 320(1)
  02ae378  ld 27, 328(1)
  02ae37c  ld 28, 336(1)
  02ae380  ld 29, 344(1)
  02ae384  ld 30, 352(1)
  02ae388  ld 31, 360(1)
  02ae38c  addi 1, 1, 384
  02ae390  blr
