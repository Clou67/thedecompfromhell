# game/update/moby208.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_208:   # 0x2ebd98, 0x13ac bytes
  02ebd98  stdu 1, -288(1)
  02ebd9c  mflr 0
  02ebda0  std 0, 304(1)
  02ebda4  stfd 28, 256(1)
  02ebda8  stfd 29, 264(1)
  02ebdac  stfd 30, 272(1)
  02ebdb0  stfd 31, 280(1)
  02ebdb4  std 31, 248(1)
  02ebdb8  cmpwi 3, 0
  02ebdbc  std 30, 240(1)
  02ebdc0  std 29, 232(1)
  02ebdc4  std 28, 224(1)
  02ebdc8  std 27, 216(1)
  02ebdcc  ori 31, 3, 0
  02ebdd0  bt 2, 0x2ed110
  02ebdd4  lis 28, 151
  02ebdd8  addic 28, 28, -25376
  02ebddc  lwz 3, 8324(28)
  02ebde0  cmpwi 3, 1
  02ebde4  bf 2, 0x2ebdf8
  02ebde8  li 3, 30
  02ebdec  li 4, 1
  02ebdf0  bl 0xb72b0
  02ebdf4  nop
  02ebdf8  lwz 30, 120(31)
  02ebdfc  cmpwi 30, 0
  02ebe00  bt 2, 0x2ed110
  02ebe04  lwz 3, 20(30)
  02ebe08  li 29, 0
  02ebe0c  cmpwi 3, 0
  02ebe10  ori 27, 29, 0
  02ebe14  bf 2, 0x2ebe40
  02ebe18  lis 3, 47
  02ebe1c  lis 5, 114
  02ebe20  addi 4, 3, -17072
  02ebe24  ori 3, 31, 0
  02ebe28  lfs 1, 0(4)
  02ebe2c  lfs 2, -3052(5)
  02ebe30  fmuls 1, 2, 1
  02ebe34  bl 0x2ed160
  02ebe38  nop
  02ebe3c  stw 3, 20(30)
  02ebe40  cmpwi 3, 0
  02ebe44  bt 2, 0x2ebe4c
  02ebe48  lwz 29, 120(3)
  02ebe4c  lwz 3, 8324(28)
  02ebe50  cmpwi 3, 1
  02ebe54  cmpwi 1, 3, 30
  02ebe58  bt 2, 0x2ebe60
  02ebe5c  bf 6, 0x2ebf54
  02ebe60  lwz 3, 408(28)
  02ebe64  cmpwi 3, 1
  02ebe68  bf 1, 0x2ebf54
  02ebe6c  lis 3, 47
  02ebe70  li 5, 4
  02ebe74  addi 3, 3, -17072
  02ebe78  lis 4, -256
  02ebe7c  li 6, 0
  02ebe80  ori 4, 4, 255
  02ebe84  li 7, 36
  02ebe88  lfs 31, 8(3)
  02ebe8c  lfs 30, 12(3)
  02ebe90  li 9, -1
  02ebe94  lfs 1, 4(3)
  02ebe98  fmr 2, 31
  02ebe9c  ori 3, 31, 0
  02ebea0  std 5, 112(1)
  02ebea4  fmr 3, 30
  02ebea8  bl 0x55284
  02ebeac  nop
  02ebeb0  lwz 3, 2408(28)
  02ebeb4  lwz 4, 2448(28)
  02ebeb8  cmpwi 3, 0
  02ebebc  bt 2, 0x2ebf10
  02ebec0  lwz 3, 2404(28)
  02ebec4  cmpwi 3, 0
  02ebec8  bt 2, 0x2ebf10
  02ebecc  ori 6, 3, 0
  02ebed0  fmr 2, 31
  02ebed4  lis 3, 47
  02ebed8  fmr 3, 30
  02ebedc  li 8, 4
  02ebee0  addi 5, 3, -17072
  02ebee4  lis 4, -256
  02ebee8  ori 3, 31, 0
  02ebeec  ori 4, 4, 65280
  02ebef0  addic 6, 6, 16
  02ebef4  lfs 1, 16(5)
  02ebef8  li 7, 36
  02ebefc  li 9, -1
  02ebf00  std 8, 112(1)
  02ebf04  bl 0x55284
  02ebf08  nop
  02ebf0c  b 0x2ebf54
  02ebf10  cmpwi 4, 0
  02ebf14  bt 2, 0x2ebf54
  02ebf18  lis 3, 47
  02ebf1c  li 5, 4
  02ebf20  fmr 2, 31
  02ebf24  addi 3, 3, -17072
  02ebf28  fmr 3, 30
  02ebf2c  addic 6, 4, 16
  02ebf30  lis 4, -256
  02ebf34  li 7, 36
  02ebf38  li 9, -1
  02ebf3c  lfs 1, 16(3)
  02ebf40  ori 4, 4, 65280
  02ebf44  ori 3, 31, 0
  02ebf48  std 5, 112(1)
  02ebf4c  bl 0x55284
  02ebf50  nop
  02ebf54  lbz 3, 32(31)
  02ebf58  cmpwi 3, 7
  02ebf5c  cmpwi 1, 3, 3
  02ebf60  cmpwi 6, 3, 1
  02ebf64  cmpwi 7, 3, -1
  02ebf68  bt 1, 0x2ebfa8
  02ebf6c  bt 5, 0x2ebf88
  02ebf70  bt 25, 0x2ebf7c
  02ebf74  bf 29, 0x2ed110
  02ebf78  b 0x2ebfdc
  02ebf7c  cmpwi 3, 2
  02ebf80  bf 1, 0x2ec26c
  02ebf84  b 0x2ec53c
  02ebf88  cmpwi 3, 5
  02ebf8c  bt 1, 0x2ebf9c
  02ebf90  cmpwi 3, 4
  02ebf94  bf 1, 0x2ec598
  02ebf98  b 0x2ec840
  02ebf9c  cmpwi 3, 6
  02ebfa0  bf 1, 0x2ec92c
  02ebfa4  b 0x2ec968
  02ebfa8  cmpwi 3, 14
  02ebfac  bt 2, 0x2ece90
  02ebfb0  cmpwi 3, 13
  02ebfb4  bt 2, 0x2ecdfc
  02ebfb8  cmpwi 3, 12
  02ebfbc  bt 2, 0x2ecd10
  02ebfc0  cmpwi 3, 11
  02ebfc4  bt 2, 0x2ecc48
  02ebfc8  cmpwi 3, 10
  02ebfcc  bt 2, 0x2ecc28
  02ebfd0  cmpwi 3, 9
  02ebfd4  bt 2, 0x2ecacc
  02ebfd8  b 0x2ed110
  02ebfdc  lbz 3, 112(31)
  02ebfe0  rlwinm 3, 3, 0, 30, 30
  02ebfe4  cmpwi 3, 0
  02ebfe8  bt 2, 0x2ec03c
  02ebfec  lbz 3, 83(31)
  02ebff0  cmpwi 3, 1
  02ebff4  bt 2, 0x2ec034
  02ebff8  lis 3, 47
  02ebffc  lis 4, 114
  02ec000  addi 3, 3, -17072
  02ec004  li 5, 0
  02ec008  lfs 1, 20(3)
  02ec00c  lfs 2, -3056(4)
  02ec010  ori 3, 31, 0
  02ec014  li 4, 1
  02ec018  fmuls 1, 2, 1
  02ec01c  fctiwz 1, 1
  02ec020  stfd 1, 192(1)
  02ec024  lwz 6, 196(1)
  02ec028  extsw 6, 6
  02ec02c  bl 0xfddc0
  02ec030  nop
  02ec034  li 3, 1
  02ec038  stb 3, 32(31)
  02ec03c  lwz 3, 20(30)
  02ec040  cmpwi 3, 0
  02ec044  bt 2, 0x2ec088
  02ec048  addic 5, 3, 16
  02ec04c  li 4, 0
  02ec050  ori 3, 31, 0
  02ec054  bl 0xf1114
  02ec058  nop
  02ec05c  addic 4, 31, 192
  02ec060  lwz 3, 20(30)
  02ec064  li 5, 208
  02ec068  li 7, 224
  02ec06c  addic 6, 3, 192
  02ec070  lvx 2, 0, 4
  02ec074  lvx 3, 5, 31
  02ec078  lvx 4, 7, 31
  02ec07c  stvx 2, 0, 6
  02ec080  stvx 3, 5, 3
  02ec084  stvx 4, 7, 3
  02ec088  lwz 3, 8324(28)
  02ec08c  cmpwi 3, 36
  02ec090  bt 2, 0x2ec0ac
  02ec094  lwz 4, 8332(28)
  02ec098  cmpwi 4, 15
  02ec09c  bf 2, 0x2ec150
  02ec0a0  lwz 4, 1460(28)
  02ec0a4  cmpwi 4, 0
  02ec0a8  bt 2, 0x2ec150
  02ec0ac  cmpwi 29, 0
  02ec0b0  bt 2, 0x2ec150
  02ec0b4  lis 3, 16015
  02ec0b8  lis 4, 16256
  02ec0bc  ori 3, 3, 23593
  02ec0c0  lis 5, 47
  02ec0c4  stw 4, 28(30)
  02ec0c8  addi 4, 5, -17072
  02ec0cc  stw 3, 32(30)
  02ec0d0  lis 3, 114
  02ec0d4  stw 27, 24(30)
  02ec0d8  lfs 1, 0(4)
  02ec0dc  lfs 2, -3052(3)
  02ec0e0  fmuls 1, 2, 1
  02ec0e4  stfs 1, 4(29)
  02ec0e8  lbz 3, 83(31)
  02ec0ec  cmpwi 3, 3
  02ec0f0  bt 2, 0x2ec130
  02ec0f4  lis 3, 47
  02ec0f8  lis 4, 114
  02ec0fc  addi 3, 3, -17072
  02ec100  li 5, 0
  02ec104  lfs 1, 20(3)
  02ec108  lfs 2, -3056(4)
  02ec10c  ori 3, 31, 0
  02ec110  fmuls 1, 2, 1
  02ec114  li 4, 3
  02ec118  fctiwz 1, 1
  02ec11c  stfd 1, 192(1)
  02ec120  lwz 6, 196(1)
  02ec124  extsw 6, 6
  02ec128  bl 0xfddc0
  02ec12c  nop
  02ec130  li 3, 0
  02ec134  li 4, 0
  02ec138  ori 5, 31, 0
  02ec13c  bl 0x15d12c
  02ec140  nop
  02ec144  li 3, 2
  02ec148  stb 3, 32(31)
  02ec14c  lwz 3, 8324(28)
  02ec150  cmpwi 1, 29, 0
  02ec154  cmpwi 3, 44
  02ec158  crorc 2, 6, 2
  02ec15c  bt 2, 0x2ed110
  02ec160  lis 3, 47
  02ec164  lwz 4, 2452(28)
  02ec168  lis 6, 114
  02ec16c  addi 3, 3, -17072
  02ec170  lwz 5, 20(30)
  02ec174  lfs 1, 28(3)
  02ec178  lfs 2, 20(4)
  02ec17c  lfs 3, 20(5)
  02ec180  lfs 4, 16(4)
  02ec184  fsubs 3, 2, 3
  02ec188  lfs 2, 16(5)
  02ec18c  lfs 5, 24(4)
  02ec190  lfs 6, 24(5)
  02ec194  fsubs 4, 4, 2
  02ec198  fsubs 5, 5, 6
  02ec19c  lfs 2, -3056(6)
  02ec1a0  fmuls 1, 2, 1
  02ec1a4  fmuls 6, 3, 3
  02ec1a8  lfs 3, 24(3)
  02ec1ac  lwz 3, 4272(28)
  02ec1b0  fctiwz 1, 1
  02ec1b4  fmadds 4, 4, 4, 6
  02ec1b8  fmadds 4, 5, 5, 4
  02ec1bc  stfd 1, 192(1)
  02ec1c0  lwz 4, 196(1)
  02ec1c4  cmpw 3, 4
  02ec1c8  fsqrts 1, 4
  02ec1cc  bf 0, 0x2ec1dc
  02ec1d0  lis 3, 47
  02ec1d4  addi 3, 3, -17072
  02ec1d8  lfs 3, 32(3)
  02ec1dc  fmuls 3, 2, 3
  02ec1e0  lis 3, 16015
  02ec1e4  lis 4, 16256
  02ec1e8  ori 3, 3, 23593
  02ec1ec  fctidz 3, 3
  02ec1f0  fcfid 3, 3
  02ec1f4  frsp 3, 3
  02ec1f8  fdivs 1, 1, 3
  02ec1fc  stfs 1, 4(29)
  02ec200  stw 3, 32(30)
  02ec204  stw 4, 28(30)
  02ec208  stw 27, 24(30)
  02ec20c  lbz 3, 83(31)
  02ec210  cmpwi 3, 3
  02ec214  bt 2, 0x2ec24c
  02ec218  lis 3, 47
  02ec21c  addi 3, 3, -17072
  02ec220  li 4, 3
  02ec224  li 5, 0
  02ec228  lfs 1, 20(3)
  02ec22c  ori 3, 31, 0
  02ec230  fmuls 1, 2, 1
  02ec234  fctiwz 1, 1
  02ec238  stfd 1, 192(1)
  02ec23c  lwz 6, 196(1)
  02ec240  extsw 6, 6
  02ec244  bl 0xfddc0
  02ec248  nop
  02ec24c  li 3, 0
  02ec250  li 4, 0
  02ec254  ori 5, 31, 0
  02ec258  bl 0x15d12c
  02ec25c  nop
  02ec260  li 3, 9
  02ec264  stb 3, 32(31)
  02ec268  b 0x2ed110
  02ec26c  lis 3, 113
  02ec270  ori 4, 31, 0
  02ec274  addic 3, 3, -18608
  02ec278  bl 0x6d720
  02ec27c  nop
  02ec280  lbz 3, 112(31)
  02ec284  rlwinm 3, 3, 0, 30, 30
  02ec288  cmpwi 3, 0
  02ec28c  bt 2, 0x2ec2d8
  02ec290  lbz 3, 83(31)
  02ec294  cmpwi 3, 4
  02ec298  bt 2, 0x2ec2d8
  02ec29c  lis 3, 47
  02ec2a0  lis 4, 114
  02ec2a4  addi 3, 3, -17072
  02ec2a8  li 5, 0
  02ec2ac  lfs 1, 20(3)
  02ec2b0  lfs 2, -3056(4)
  02ec2b4  ori 3, 31, 0
  02ec2b8  fmuls 1, 2, 1
  02ec2bc  li 4, 4
  02ec2c0  fctiwz 1, 1
  02ec2c4  stfd 1, 192(1)
  02ec2c8  lwz 6, 196(1)
  02ec2cc  extsw 6, 6
  02ec2d0  bl 0xfddc0
  02ec2d4  nop
  02ec2d8  lwz 3, 2404(28)
  02ec2dc  lwz 4, 20(30)
  02ec2e0  lfs 28, 4(29)
  02ec2e4  lwz 5, 8332(28)
  02ec2e8  lfs 31, 16(3)
  02ec2ec  lfs 1, 16(4)
  02ec2f0  cmpwi 5, 15
  02ec2f4  lfs 30, 20(3)
  02ec2f8  lfs 2, 20(4)
  02ec2fc  fsubs 31, 31, 1
  02ec300  lfs 29, 24(3)
  02ec304  lfs 1, 24(4)
  02ec308  fsubs 30, 30, 2
  02ec30c  fsubs 29, 29, 1
  02ec310  bf 2, 0x2ec320
  02ec314  lfs 1, 1396(28)
  02ec318  fadds 28, 28, 1
  02ec31c  b 0x2ec36c
  02ec320  lwz 3, 8340(28)
  02ec324  cmpwi 3, 4
  02ec328  cmpwi 1, 3, 2
  02ec32c  bt 2, 0x2ec334
  02ec330  bf 6, 0x2ec36c
  02ec334  lwz 4, 732(28)
  02ec338  lis 3, 16384
  02ec33c  srawi 5, 4, 31
  02ec340  srwi 6, 5, 1
  02ec344  xor 4, 6, 4
  02ec348  subc 4, 4, 5
  02ec34c  cmpw 4, 3
  02ec350  bf 1, 0x2ec36c
  02ec354  lis 3, 47
  02ec358  lis 4, 114
  02ec35c  addi 3, 3, -17072
  02ec360  lfs 1, 36(3)
  02ec364  lfs 28, -3052(4)
  02ec368  fmuls 28, 28, 1
  02ec36c  lfs 1, 128(28)
  02ec370  lis 3, 47
  02ec374  lfs 2, 132(28)
  02ec378  li 5, 2
  02ec37c  stfs 1, 128(1)
  02ec380  addi 3, 3, -17072
  02ec384  lfs 1, 136(28)
  02ec388  li 6, 0
  02ec38c  stfs 2, 132(1)
  02ec390  li 7, 0
  02ec394  lfs 2, 140(28)
  02ec398  stfs 1, 136(1)
  02ec39c  stfs 2, 140(1)
  02ec3a0  lfs 2, 16(3)
  02ec3a4  lwz 4, 2404(28)
  02ec3a8  addic 3, 1, 128
  02ec3ac  fadds 1, 1, 2
  02ec3b0  addic 4, 4, 16
  02ec3b4  stfs 1, 136(1)
  02ec3b8  bl 0x57820
  02ec3bc  nop
  02ec3c0  cmpwi 3, 0
  02ec3c4  bt 2, 0x2ec454
  02ec3c8  lwz 4, 732(28)
  02ec3cc  lis 3, 16128
  02ec3d0  srawi 5, 4, 31
  02ec3d4  srwi 6, 5, 1
  02ec3d8  xor 4, 6, 4
  02ec3dc  subc 4, 4, 5
  02ec3e0  cmpw 4, 3
  02ec3e4  bf 1, 0x2ec3fc
  02ec3e8  li 3, 6
  02ec3ec  li 4, 1
  02ec3f0  bl 0xb72b0
  02ec3f4  nop
  02ec3f8  b 0x2ec448
  02ec3fc  li 3, 0
  02ec400  li 4, 0
  02ec404  bl 0xb72b0
  02ec408  nop
  02ec40c  li 3, 0
  02ec410  bl 0x7f45c
  02ec414  nop
  02ec418  lis 4, 47
  02ec41c  lis 5, 114
  02ec420  addi 4, 4, -17072
  02ec424  lfs 1, 40(4)
  02ec428  lfs 2, -3056(5)
  02ec42c  li 4, 0
  02ec430  fmuls 1, 2, 1
  02ec434  fctidz 1, 1
  02ec438  fcfid 1, 1
  02ec43c  frsp 1, 1
  02ec440  bl 0x85300
  02ec444  nop
  02ec448  li 3, 6
  02ec44c  stb 3, 32(31)
  02ec450  b 0x2ed110
  02ec454  lwz 30, 20(30)
  02ec458  lwz 3, 2404(28)
  02ec45c  lfs 3, 20(30)
  02ec460  lfs 2, 20(3)
  02ec464  lfs 1, 16(30)
  02ec468  fsubs 5, 3, 2
  02ec46c  lfs 2, 16(3)
  02ec470  lfs 4, 24(30)
  02ec474  fsubs 6, 1, 2
  02ec478  lfs 7, 24(3)
  02ec47c  fsubs 7, 4, 7
  02ec480  fmuls 5, 5, 5
  02ec484  fmadds 5, 6, 6, 5
  02ec488  fmadds 5, 7, 7, 5
  02ec48c  fsqrts 5, 5
  02ec490  fcmpu 0, 5, 28
  02ec494  cror 6, 0, 2
  02ec498  bt 6, 0x2ec514
  02ec49c  fmuls 2, 30, 30
  02ec4a0  lis 3, 47
  02ec4a4  addi 3, 3, -17072
  02ec4a8  fmadds 2, 31, 31, 2
  02ec4ac  lfs 5, 8(3)
  02ec4b0  fmadds 2, 29, 29, 2
  02ec4b4  fsqrts 2, 2
  02ec4b8  fdivs 6, 28, 2
  02ec4bc  fsub 7, 5, 2
  02ec4c0  fsub 8, 5, 2
  02ec4c4  fsub 9, 5, 2
  02ec4c8  fsub 10, 2, 5
  02ec4cc  fsub 11, 2, 5
  02ec4d0  fsub 2, 2, 5
  02ec4d4  fmuls 12, 29, 6
  02ec4d8  fmuls 13, 30, 6
  02ec4dc  fmuls 6, 31, 6
  02ec4e0  fsel 7, 7, 5, 12
  02ec4e4  fsel 8, 8, 5, 13
  02ec4e8  fsel 5, 9, 5, 6
  02ec4ec  fsel 7, 10, 7, 12
  02ec4f0  fsel 8, 11, 8, 13
  02ec4f4  fsel 2, 2, 5, 6
  02ec4f8  fadds 4, 4, 7
  02ec4fc  fadds 3, 3, 8
  02ec500  fadds 1, 1, 2
  02ec504  stfs 4, 24(30)
  02ec508  stfs 3, 20(30)
  02ec50c  stfs 1, 16(30)
  02ec510  b 0x2ed110
  02ec514  stfs 2, 16(30)
  02ec518  li 4, 3
  02ec51c  lfs 1, 20(3)
  02ec520  stfs 1, 20(30)
  02ec524  lfs 1, 24(3)
  02ec528  stfs 1, 24(30)
  02ec52c  lfs 1, 28(3)
  02ec530  stfs 1, 28(30)
  02ec534  stb 4, 32(31)
  02ec538  b 0x2ed110
  02ec53c  li 3, 1
  02ec540  li 4, 0
  02ec544  ori 5, 31, 0
  02ec548  bl 0x15d12c
  02ec54c  nop
  02ec550  lis 3, 113
  02ec554  ori 4, 31, 0
  02ec558  addic 3, 3, -18608
  02ec55c  bl 0x6d720
  02ec560  nop
  02ec564  lwz 3, 2404(28)
  02ec568  li 5, 4
  02ec56c  lwz 4, 20(30)
  02ec570  lfs 1, 16(3)
  02ec574  stfs 1, 16(4)
  02ec578  lfs 1, 20(3)
  02ec57c  stfs 1, 20(4)
  02ec580  lfs 1, 24(3)
  02ec584  stfs 1, 24(4)
  02ec588  lfs 1, 28(3)
  02ec58c  stfs 1, 28(4)
  02ec590  stb 5, 32(31)
  02ec594  b 0x2ed110
  02ec598  addic 29, 1, 144
  02ec59c  ori 3, 31, 0
  02ec5a0  li 4, 0
  02ec5a4  ori 5, 29, 0
  02ec5a8  bl 0xf1114
  02ec5ac  nop
  02ec5b0  lfs 1, 128(28)
  02ec5b4  lis 3, 47
  02ec5b8  lfs 2, 132(28)
  02ec5bc  stfs 1, 144(1)
  02ec5c0  li 5, 2
  02ec5c4  addi 3, 3, -17072
  02ec5c8  lfs 1, 136(28)
  02ec5cc  stfs 2, 148(1)
  02ec5d0  li 6, 0
  02ec5d4  lfs 2, 140(28)
  02ec5d8  li 7, 0
  02ec5dc  stfs 1, 152(1)
  02ec5e0  stfs 2, 156(1)
  02ec5e4  lfs 2, 16(3)
  02ec5e8  ori 3, 29, 0
  02ec5ec  fadds 1, 1, 2
  02ec5f0  lwz 4, 2404(28)
  02ec5f4  addic 4, 4, 16
  02ec5f8  stfs 1, 152(1)
  02ec5fc  bl 0x57820
  02ec600  nop
  02ec604  cmpwi 3, 0
  02ec608  bt 2, 0x2ec648
  02ec60c  lhz 3, 782(28)
  02ec610  cmpwi 3, 0
  02ec614  bt 2, 0x2ec62c
  02ec618  li 3, 6
  02ec61c  li 4, 1
  02ec620  bl 0xb72b0
  02ec624  nop
  02ec628  b 0x2ec63c
  02ec62c  li 3, 0
  02ec630  li 4, 1
  02ec634  bl 0xb72b0
  02ec638  nop
  02ec63c  li 3, 6
  02ec640  stb 3, 32(31)
  02ec644  b 0x2ed110
  02ec648  lbz 3, 112(31)
  02ec64c  rlwinm 3, 3, 0, 30, 30
  02ec650  cmpwi 3, 0
  02ec654  bt 2, 0x2ec6a0
  02ec658  lbz 3, 83(31)
  02ec65c  cmpwi 3, 4
  02ec660  bt 2, 0x2ec6a0
  02ec664  lis 3, 47
  02ec668  lis 4, 114
  02ec66c  addi 3, 3, -17072
  02ec670  li 5, 0
  02ec674  lfs 1, 20(3)
  02ec678  lfs 2, -3056(4)
  02ec67c  ori 3, 31, 0
  02ec680  fmuls 1, 2, 1
  02ec684  li 4, 4
  02ec688  fctiwz 1, 1
  02ec68c  stfd 1, 192(1)
  02ec690  lwz 6, 196(1)
  02ec694  extsw 6, 6
  02ec698  bl 0xfddc0
  02ec69c  nop
  02ec6a0  lis 3, 113
  02ec6a4  ori 4, 31, 0
  02ec6a8  addic 3, 3, -18608
  02ec6ac  bl 0x6d720
  02ec6b0  nop
  02ec6b4  lis 3, 47
  02ec6b8  lfs 1, 32(30)
  02ec6bc  lis 4, 114
  02ec6c0  addi 3, 3, -17072
  02ec6c4  lfs 2, 44(3)
  02ec6c8  lfs 3, 4(3)
  02ec6cc  lfs 4, -3064(4)
  02ec6d0  lfs 5, 24(30)
  02ec6d4  fmadds 2, 4, 2, 3
  02ec6d8  fmuls 1, 1, 2
  02ec6dc  stfs 1, 32(30)
  02ec6e0  lfs 2, 48(3)
  02ec6e4  fadds 2, 5, 2
  02ec6e8  stfs 2, 24(30)
  02ec6ec  lfs 2, 52(3)
  02ec6f0  fcmpu 0, 1, 2
  02ec6f4  cror 6, 1, 2
  02ec6f8  bt 6, 0x2ed110
  02ec6fc  stw 27, 1460(28)
  02ec700  lwz 30, 20(30)
  02ec704  cmpwi 30, 0
  02ec708  bt 2, 0x2ec824
  02ec70c  lfs 1, 20(30)
  02ec710  lfs 2, 132(28)
  02ec714  lfs 3, 16(30)
  02ec718  fsubs 1, 1, 2
  02ec71c  lfs 2, 128(28)
  02ec720  fsubs 2, 3, 2
  02ec724  lfs 3, 24(30)
  02ec728  lfs 4, 136(28)
  02ec72c  fsubs 3, 3, 4
  02ec730  fmuls 1, 1, 1
  02ec734  lis 3, 47
  02ec738  addi 3, 3, -17072
  02ec73c  fmadds 1, 2, 2, 1
  02ec740  lfs 2, 56(3)
  02ec744  fmadds 1, 3, 3, 1
  02ec748  fsqrts 1, 1
  02ec74c  fcmpu 0, 1, 2
  02ec750  cror 6, 0, 2
  02ec754  bt 6, 0x2ec824
  02ec758  lis 3, 150
  02ec75c  lwz 4, 4256(28)
  02ec760  addic 3, 3, 19008
  02ec764  lwz 3, 160(3)
  02ec768  and 3, 3, 4
  02ec76c  cmpwi 3, 0
  02ec770  bf 2, 0x2ec7d4
  02ec774  li 5, 1
  02ec778  li 3, 0
  02ec77c  li 4, 0
  02ec780  stw 5, 2440(28)
  02ec784  bl 0xb72b0
  02ec788  nop
  02ec78c  li 3, 0
  02ec790  bl 0x7f45c
  02ec794  nop
  02ec798  lis 4, 47
  02ec79c  lis 5, 114
  02ec7a0  addi 4, 4, -17072
  02ec7a4  lfs 1, 40(4)
  02ec7a8  lfs 2, -3056(5)
  02ec7ac  li 4, 0
  02ec7b0  fmuls 1, 2, 1
  02ec7b4  fctidz 1, 1
  02ec7b8  fcfid 1, 1
  02ec7bc  frsp 1, 1
  02ec7c0  bl 0x85300
  02ec7c4  nop
  02ec7c8  li 3, 6
  02ec7cc  stb 3, 32(31)
  02ec7d0  b 0x2ed110
  02ec7d4  li 3, 2
  02ec7d8  li 4, 0
  02ec7dc  ori 5, 31, 0
  02ec7e0  bl 0x15d12c
  02ec7e4  nop
  02ec7e8  lwz 3, 2424(28)
  02ec7ec  cmpwi 3, 0
  02ec7f0  bt 2, 0x2ec808
  02ec7f4  li 3, 38
  02ec7f8  li 4, 1
  02ec7fc  bl 0xb72b0
  02ec800  nop
  02ec804  b 0x2ec818
  02ec808  li 3, 37
  02ec80c  li 4, 1
  02ec810  bl 0xb72b0
  02ec814  nop
  02ec818  li 3, 5
  02ec81c  stb 3, 32(31)
  02ec820  b 0x2ed110
  02ec824  li 3, 0
  02ec828  li 4, 1
  02ec82c  bl 0xb72b0
  02ec830  nop
  02ec834  li 3, 6
  02ec838  stb 3, 32(31)
  02ec83c  b 0x2ed110
  02ec840  lwz 3, 2404(28)
  02ec844  lwz 4, 20(30)
  02ec848  lfs 1, 16(3)
  02ec84c  stfs 1, 16(4)
  02ec850  lfs 1, 20(3)
  02ec854  stfs 1, 20(4)
  02ec858  lfs 1, 24(3)
  02ec85c  stfs 1, 24(4)
  02ec860  lfs 1, 28(3)
  02ec864  stfs 1, 28(4)
  02ec868  lbz 3, 112(31)
  02ec86c  rlwinm 3, 3, 0, 30, 30
  02ec870  cmpwi 3, 0
  02ec874  bt 2, 0x2ec8c0
  02ec878  lbz 3, 83(31)
  02ec87c  cmpwi 3, 4
  02ec880  bt 2, 0x2ec8c0
  02ec884  lis 3, 47
  02ec888  lis 4, 114
  02ec88c  addi 3, 3, -17072
  02ec890  li 5, 0
  02ec894  lfs 1, 20(3)
  02ec898  lfs 2, -3056(4)
  02ec89c  ori 3, 31, 0
  02ec8a0  fmuls 1, 2, 1
  02ec8a4  li 4, 4
  02ec8a8  fctiwz 1, 1
  02ec8ac  stfd 1, 192(1)
  02ec8b0  lwz 6, 196(1)
  02ec8b4  extsw 6, 6
  02ec8b8  bl 0xfddc0
  02ec8bc  nop
  02ec8c0  lis 3, 47
  02ec8c4  addi 5, 3, -17072
  02ec8c8  lis 3, 114
  02ec8cc  ori 4, 31, 0
  02ec8d0  lfs 1, 44(5)
  02ec8d4  lfs 2, 4(5)
  02ec8d8  lfs 3, -3064(3)
  02ec8dc  lfs 4, 32(30)
  02ec8e0  fmadds 1, 3, 1, 2
  02ec8e4  lfs 5, 24(30)
  02ec8e8  lis 3, 113
  02ec8ec  addic 3, 3, -18608
  02ec8f0  fmuls 1, 4, 1
  02ec8f4  stfs 1, 32(30)
  02ec8f8  lfs 1, 48(5)
  02ec8fc  fadds 1, 5, 1
  02ec900  stfs 1, 24(30)
  02ec904  bl 0x6d720
  02ec908  nop
  02ec90c  lwz 30, 8324(28)
  02ec910  cmpwi 30, 37
  02ec914  bt 2, 0x2ed110
  02ec918  cmpwi 30, 38
  02ec91c  bt 2, 0x2ed110
  02ec920  li 3, 6
  02ec924  stb 3, 32(31)
  02ec928  b 0x2ed110
  02ec92c  lis 3, 113
  02ec930  ori 4, 31, 0
  02ec934  addic 3, 3, -18608
  02ec938  bl 0x6d720
  02ec93c  nop
  02ec940  lis 3, 47
  02ec944  lis 4, 114
  02ec948  addi 3, 3, -17072
  02ec94c  lfs 1, 60(3)
  02ec950  lfs 2, -3052(4)
  02ec954  li 3, 7
  02ec958  fmuls 1, 2, 1
  02ec95c  stfs 1, 4(29)
  02ec960  stb 3, 32(31)
  02ec964  b 0x2ed110
  02ec968  addic 5, 1, 160
  02ec96c  ori 3, 31, 0
  02ec970  li 4, 0
  02ec974  bl 0xf1114
  02ec978  nop
  02ec97c  lwz 30, 20(30)
  02ec980  lfs 4, 164(1)
  02ec984  lfs 7, 160(1)
  02ec988  lfs 3, 20(30)
  02ec98c  lfs 1, 16(30)
  02ec990  fsubs 2, 3, 4
  02ec994  fsubs 6, 1, 7
  02ec998  lfs 9, 168(1)
  02ec99c  lfs 5, 24(30)
  02ec9a0  fsubs 8, 5, 9
  02ec9a4  fsubs 4, 4, 3
  02ec9a8  fmuls 2, 2, 2
  02ec9ac  fmadds 2, 6, 6, 2
  02ec9b0  fsubs 6, 9, 5
  02ec9b4  fmadds 2, 8, 8, 2
  02ec9b8  lfs 8, 4(29)
  02ec9bc  fsqrts 10, 2
  02ec9c0  fsubs 2, 7, 1
  02ec9c4  fcmpu 0, 10, 8
  02ec9c8  cror 6, 0, 2
  02ec9cc  bt 6, 0x2eca5c
  02ec9d0  fmuls 7, 4, 4
  02ec9d4  lis 3, 47
  02ec9d8  addi 3, 3, -17072
  02ec9dc  fmadds 7, 2, 2, 7
  02ec9e0  lfs 9, 8(3)
  02ec9e4  lis 3, 113
  02ec9e8  ori 4, 31, 0
  02ec9ec  addic 3, 3, -18608
  02ec9f0  fmadds 7, 6, 6, 7
  02ec9f4  fsqrts 7, 7
  02ec9f8  fdivs 8, 8, 7
  02ec9fc  fsub 10, 9, 7
  02eca00  fsub 11, 9, 7
  02eca04  fsub 12, 9, 7
  02eca08  fsub 13, 7, 9
  02eca0c  fsub 0, 7, 9
  02eca10  fsub 7, 7, 9
  02eca14  fmuls 6, 6, 8
  02eca18  fmuls 4, 4, 8
  02eca1c  fmuls 2, 2, 8
  02eca20  fsel 8, 10, 9, 6
  02eca24  fsel 10, 11, 9, 4
  02eca28  fsel 9, 12, 9, 2
  02eca2c  fsel 6, 13, 8, 6
  02eca30  fsel 4, 0, 10, 4
  02eca34  fsel 2, 7, 9, 2
  02eca38  fadds 5, 5, 6
  02eca3c  fadds 3, 3, 4
  02eca40  fadds 1, 1, 2
  02eca44  stfs 5, 24(30)
  02eca48  stfs 3, 20(30)
  02eca4c  stfs 1, 16(30)
  02eca50  bl 0x6d720
  02eca54  nop
  02eca58  b 0x2ed110
  02eca5c  stfs 7, 16(30)
  02eca60  lfs 1, 164(1)
  02eca64  stfs 1, 20(30)
  02eca68  lfs 1, 168(1)
  02eca6c  stfs 1, 24(30)
  02eca70  lfs 1, 172(1)
  02eca74  stfs 1, 28(30)
  02eca78  lbz 3, 83(31)
  02eca7c  cmpwi 3, 1
  02eca80  bt 2, 0x2ecac0
  02eca84  lis 3, 47
  02eca88  lis 4, 114
  02eca8c  addi 3, 3, -17072
  02eca90  li 5, 0
  02eca94  lfs 1, 20(3)
  02eca98  lfs 2, -3056(4)
  02eca9c  ori 3, 31, 0
  02ecaa0  fmuls 1, 2, 1
  02ecaa4  li 4, 1
  02ecaa8  fctiwz 1, 1
  02ecaac  stfd 1, 192(1)
  02ecab0  lwz 6, 196(1)
  02ecab4  extsw 6, 6
  02ecab8  bl 0xfddc0
  02ecabc  nop
  02ecac0  li 3, 1
  02ecac4  stb 3, 32(31)
  02ecac8  b 0x2ed110
  02ecacc  lis 3, 113
  02ecad0  ori 4, 31, 0
  02ecad4  addic 3, 3, -18608
  02ecad8  bl 0x6d720
  02ecadc  nop
  02ecae0  lbz 3, 112(31)
  02ecae4  rlwinm 3, 3, 0, 30, 30
  02ecae8  cmpwi 3, 0
  02ecaec  bt 2, 0x2ecb38
  02ecaf0  lbz 3, 83(31)
  02ecaf4  cmpwi 3, 4
  02ecaf8  bt 2, 0x2ecb38
  02ecafc  lis 3, 47
  02ecb00  lis 4, 114
  02ecb04  addi 3, 3, -17072
  02ecb08  li 5, 0
  02ecb0c  lfs 1, 20(3)
  02ecb10  lfs 2, -3056(4)
  02ecb14  ori 3, 31, 0
  02ecb18  fmuls 1, 2, 1
  02ecb1c  li 4, 4
  02ecb20  fctiwz 1, 1
  02ecb24  stfd 1, 192(1)
  02ecb28  lwz 6, 196(1)
  02ecb2c  extsw 6, 6
  02ecb30  bl 0xfddc0
  02ecb34  nop
  02ecb38  lwz 28, 2452(28)
  02ecb3c  lwz 30, 20(30)
  02ecb40  lfs 5, 20(28)
  02ecb44  lfs 4, 20(30)
  02ecb48  lfs 1, 16(28)
  02ecb4c  fsubs 5, 5, 4
  02ecb50  lfs 2, 16(30)
  02ecb54  lfs 7, 24(28)
  02ecb58  fsubs 3, 1, 2
  02ecb5c  lfs 6, 24(30)
  02ecb60  fsubs 7, 7, 6
  02ecb64  lfs 9, 4(29)
  02ecb68  fmuls 8, 5, 5
  02ecb6c  fmadds 8, 3, 3, 8
  02ecb70  fmadds 8, 7, 7, 8
  02ecb74  fsqrts 8, 8
  02ecb78  fcmpu 0, 8, 9
  02ecb7c  cror 6, 0, 2
  02ecb80  bt 6, 0x2ecbec
  02ecb84  fdivs 1, 9, 8
  02ecb88  lis 3, 47
  02ecb8c  addi 3, 3, -17072
  02ecb90  lfs 9, 8(3)
  02ecb94  fsub 10, 9, 8
  02ecb98  fsub 11, 9, 8
  02ecb9c  fsub 12, 9, 8
  02ecba0  fsub 13, 8, 9
  02ecba4  fsub 0, 8, 9
  02ecba8  fsub 8, 8, 9
  02ecbac  fmuls 7, 7, 1
  02ecbb0  fmuls 5, 5, 1
  02ecbb4  fmuls 1, 3, 1
  02ecbb8  fsel 3, 10, 9, 7
  02ecbbc  fsel 10, 11, 9, 5
  02ecbc0  fsel 9, 12, 9, 1
  02ecbc4  fsel 3, 13, 3, 7
  02ecbc8  fsel 5, 0, 10, 5
  02ecbcc  fsel 1, 8, 9, 1
  02ecbd0  fadds 3, 6, 3
  02ecbd4  fadds 4, 4, 5
  02ecbd8  fadds 1, 2, 1
  02ecbdc  stfs 3, 24(30)
  02ecbe0  stfs 4, 20(30)
  02ecbe4  stfs 1, 16(30)
  02ecbe8  b 0x2ed110
  02ecbec  stfs 1, 16(30)
  02ecbf0  li 6, 11
  02ecbf4  lfs 1, 20(28)
  02ecbf8  li 4, 0
  02ecbfc  li 3, 1
  02ecc00  stfs 1, 20(30)
  02ecc04  lfs 1, 24(28)
  02ecc08  ori 5, 31, 0
  02ecc0c  stfs 1, 24(30)
  02ecc10  lfs 1, 28(28)
  02ecc14  stfs 1, 28(30)
  02ecc18  stb 6, 32(31)
  02ecc1c  bl 0x15d12c
  02ecc20  nop
  02ecc24  b 0x2ed110
  02ecc28  lis 3, 113
  02ecc2c  ori 4, 31, 0
  02ecc30  addic 3, 3, -18608
  02ecc34  bl 0x6d720
  02ecc38  nop
  02ecc3c  li 3, 11
  02ecc40  stb 3, 32(31)
  02ecc44  b 0x2ed110
  02ecc48  lbz 3, 112(31)
  02ecc4c  rlwinm 3, 3, 0, 30, 30
  02ecc50  cmpwi 3, 0
  02ecc54  bt 2, 0x2ecca0
  02ecc58  lbz 3, 83(31)
  02ecc5c  cmpwi 3, 4
  02ecc60  bt 2, 0x2ecca0
  02ecc64  lis 3, 47
  02ecc68  lis 4, 114
  02ecc6c  addi 3, 3, -17072
  02ecc70  li 5, 0
  02ecc74  lfs 1, 20(3)
  02ecc78  lfs 2, -3056(4)
  02ecc7c  ori 3, 31, 0
  02ecc80  fmuls 1, 2, 1
  02ecc84  li 4, 4
  02ecc88  fctiwz 1, 1
  02ecc8c  stfd 1, 192(1)
  02ecc90  lwz 6, 196(1)
  02ecc94  extsw 6, 6
  02ecc98  bl 0xfddc0
  02ecc9c  nop
  02ecca0  lis 3, 113
  02ecca4  ori 4, 31, 0
  02ecca8  addic 3, 3, -18608
  02eccac  bl 0x6d720
  02eccb0  nop
  02eccb4  lis 3, 47
  02eccb8  lfs 1, 32(30)
  02eccbc  lis 4, 114
  02eccc0  addi 3, 3, -17072
  02eccc4  lfs 2, 64(3)
  02eccc8  lfs 3, 4(3)
  02ecccc  lfs 4, -3064(4)
  02eccd0  lfs 5, 24(30)
  02eccd4  fmadds 2, 4, 2, 3
  02eccd8  fmuls 1, 1, 2
  02eccdc  stfs 1, 32(30)
  02ecce0  lfs 2, 48(3)
  02ecce4  fadds 2, 5, 2
  02ecce8  stfs 2, 24(30)
  02eccec  lfs 2, 52(3)
  02eccf0  fcmpu 0, 1, 2
  02eccf4  cror 6, 1, 2
  02eccf8  bt 6, 0x2ed110
  02eccfc  li 3, 1
  02ecd00  li 4, 12
  02ecd04  sth 3, 2460(28)
  02ecd08  stb 4, 32(31)
  02ecd0c  b 0x2ed110
  02ecd10  lwz 3, 2452(28)
  02ecd14  cmpwi 3, 0
  02ecd18  bt 2, 0x2ecd40
  02ecd1c  lwz 4, 20(30)
  02ecd20  lfs 1, 16(3)
  02ecd24  stfs 1, 16(4)
  02ecd28  lfs 1, 20(3)
  02ecd2c  stfs 1, 20(4)
  02ecd30  lfs 1, 24(3)
  02ecd34  stfs 1, 24(4)
  02ecd38  lfs 1, 28(3)
  02ecd3c  stfs 1, 28(4)
  02ecd40  lbz 3, 112(31)
  02ecd44  rlwinm 3, 3, 0, 30, 30
  02ecd48  cmpwi 3, 0
  02ecd4c  bt 2, 0x2ecd98
  02ecd50  lbz 3, 83(31)
  02ecd54  cmpwi 3, 4
  02ecd58  bt 2, 0x2ecd98
  02ecd5c  lis 3, 47
  02ecd60  lis 4, 114
  02ecd64  addi 3, 3, -17072
  02ecd68  li 5, 0
  02ecd6c  lfs 1, 20(3)
  02ecd70  lfs 2, -3056(4)
  02ecd74  ori 3, 31, 0
  02ecd78  fmuls 1, 2, 1
  02ecd7c  li 4, 4
  02ecd80  fctiwz 1, 1
  02ecd84  stfd 1, 192(1)
  02ecd88  lwz 6, 196(1)
  02ecd8c  extsw 6, 6
  02ecd90  bl 0xfddc0
  02ecd94  nop
  02ecd98  lis 3, 47
  02ecd9c  addi 5, 3, -17072
  02ecda0  lis 3, 114
  02ecda4  ori 4, 31, 0
  02ecda8  lfs 1, 64(5)
  02ecdac  lfs 2, 4(5)
  02ecdb0  lfs 3, -3064(3)
  02ecdb4  lfs 4, 32(30)
  02ecdb8  fmadds 1, 3, 1, 2
  02ecdbc  lfs 5, 24(30)
  02ecdc0  lis 3, 113
  02ecdc4  addic 3, 3, -18608
  02ecdc8  fmuls 1, 4, 1
  02ecdcc  stfs 1, 32(30)
  02ecdd0  lfs 1, 48(5)
  02ecdd4  fadds 1, 5, 1
  02ecdd8  stfs 1, 24(30)
  02ecddc  bl 0x6d720
  02ecde0  nop
  02ecde4  lwz 3, 8324(28)
  02ecde8  cmpwi 3, 44
  02ecdec  bt 2, 0x2ed110
  02ecdf0  li 3, 13
  02ecdf4  stb 3, 32(31)
  02ecdf8  b 0x2ed110
  02ecdfc  lbz 3, 112(31)
  02ece00  rlwinm 3, 3, 0, 30, 30
  02ece04  cmpwi 3, 0
  02ece08  bt 2, 0x2ece54
  02ece0c  lbz 3, 83(31)
  02ece10  cmpwi 3, 4
  02ece14  bt 2, 0x2ece54
  02ece18  lis 3, 47
  02ece1c  lis 4, 114
  02ece20  addi 3, 3, -17072
  02ece24  li 5, 0
  02ece28  lfs 1, 20(3)
  02ece2c  lfs 2, -3056(4)
  02ece30  ori 3, 31, 0
  02ece34  li 4, 4
  02ece38  fmuls 1, 2, 1
  02ece3c  fctiwz 1, 1
  02ece40  stfd 1, 192(1)
  02ece44  lwz 6, 196(1)
  02ece48  extsw 6, 6
  02ece4c  bl 0xfddc0
  02ece50  nop
  02ece54  lis 3, 113
  02ece58  ori 4, 31, 0
  02ece5c  addic 3, 3, -18608
  02ece60  bl 0x6d720
  02ece64  nop
  02ece68  lis 3, 47
  02ece6c  lis 4, 114
  02ece70  addi 3, 3, -17072
  02ece74  lfs 1, 60(3)
  02ece78  lfs 2, -3052(4)
  02ece7c  li 3, 14
  02ece80  fmuls 1, 2, 1
  02ece84  stfs 1, 4(29)
  02ece88  stb 3, 32(31)
  02ece8c  b 0x2ed110
  02ece90  lbz 3, 112(31)
  02ece94  rlwinm 3, 3, 0, 30, 30
  02ece98  cmpwi 3, 0
  02ece9c  bt 2, 0x2ecee8
  02ecea0  lbz 3, 83(31)
  02ecea4  cmpwi 3, 4
  02ecea8  bt 2, 0x2ecee8
  02eceac  lis 3, 47
  02eceb0  lis 4, 114
  02eceb4  addi 3, 3, -17072
  02eceb8  li 5, 0
  02ecebc  lfs 1, 20(3)
  02ecec0  lfs 2, -3056(4)
  02ecec4  ori 3, 31, 0
  02ecec8  fmuls 1, 2, 1
  02ececc  li 4, 4
  02eced0  fctiwz 1, 1
  02eced4  stfd 1, 192(1)
  02eced8  lwz 6, 196(1)
  02ecedc  extsw 6, 6
  02ecee0  bl 0xfddc0
  02ecee4  nop
  02ecee8  ori 3, 31, 0
  02eceec  addic 5, 1, 176
  02ecef0  li 4, 0
  02ecef4  bl 0xf1114
  02ecef8  nop
  02ecefc  lwz 3, 20(30)
  02ecf00  lfs 4, 180(1)
  02ecf04  lfs 7, 176(1)
  02ecf08  lfs 3, 20(3)
  02ecf0c  lfs 1, 16(3)
  02ecf10  fsubs 2, 3, 4
  02ecf14  fsubs 6, 1, 7
  02ecf18  lfs 9, 184(1)
  02ecf1c  lfs 5, 24(3)
  02ecf20  fsubs 8, 5, 9
  02ecf24  fsubs 4, 4, 3
  02ecf28  fmuls 2, 2, 2
  02ecf2c  fmadds 2, 6, 6, 2
  02ecf30  fsubs 6, 9, 5
  02ecf34  fmadds 2, 8, 8, 2
  02ecf38  lfs 8, 4(29)
  02ecf3c  fsqrts 10, 2
  02ecf40  fsubs 2, 7, 1
  02ecf44  fcmpu 0, 10, 8
  02ecf48  cror 6, 0, 2
  02ecf4c  bt 6, 0x2ecfe0
  02ecf50  fmuls 7, 4, 4
  02ecf54  ori 5, 3, 0
  02ecf58  lis 3, 47
  02ecf5c  addi 3, 3, -17072
  02ecf60  fmadds 7, 2, 2, 7
  02ecf64  lfs 9, 8(3)
  02ecf68  ori 4, 31, 0
  02ecf6c  lis 3, 113
  02ecf70  fmadds 7, 6, 6, 7
  02ecf74  addic 3, 3, -18608
  02ecf78  fsqrts 7, 7
  02ecf7c  fdivs 8, 8, 7
  02ecf80  fsub 10, 9, 7
  02ecf84  fsub 11, 9, 7
  02ecf88  fsub 12, 9, 7
  02ecf8c  fsub 13, 7, 9
  02ecf90  fsub 0, 7, 9
  02ecf94  fsub 7, 7, 9
  02ecf98  fmuls 6, 6, 8
  02ecf9c  fmuls 4, 4, 8
  02ecfa0  fmuls 2, 2, 8
  02ecfa4  fsel 8, 10, 9, 6
  02ecfa8  fsel 10, 11, 9, 4
  02ecfac  fsel 9, 12, 9, 2
  02ecfb0  fsel 6, 13, 8, 6
  02ecfb4  fsel 4, 0, 10, 4
  02ecfb8  fsel 2, 7, 9, 2
  02ecfbc  fadds 5, 5, 6
  02ecfc0  fadds 3, 3, 4
  02ecfc4  fadds 1, 1, 2
  02ecfc8  stfs 5, 24(5)
  02ecfcc  stfs 3, 20(5)
  02ecfd0  stfs 1, 16(5)
  02ecfd4  bl 0x6d720
  02ecfd8  nop
  02ecfdc  b 0x2ed04c
  02ecfe0  stfs 7, 16(3)
  02ecfe4  lfs 1, 180(1)
  02ecfe8  stfs 1, 20(3)
  02ecfec  lfs 1, 184(1)
  02ecff0  stfs 1, 24(3)
  02ecff4  lfs 1, 188(1)
  02ecff8  stfs 1, 28(3)
  02ecffc  lbz 3, 83(31)
  02ed000  cmpwi 3, 1
  02ed004  bt 2, 0x2ed044
  02ed008  lis 3, 47
  02ed00c  lis 4, 114
  02ed010  addi 3, 3, -17072
  02ed014  li 5, 0
  02ed018  lfs 1, 20(3)
  02ed01c  lfs 2, -3056(4)
  02ed020  ori 3, 31, 0
  02ed024  li 4, 1
  02ed028  fmuls 1, 2, 1
  02ed02c  fctiwz 1, 1
  02ed030  stfd 1, 192(1)
  02ed034  lwz 6, 196(1)
  02ed038  extsw 6, 6
  02ed03c  bl 0xfddc0
  02ed040  nop
  02ed044  li 3, 1
  02ed048  stb 3, 32(31)
  02ed04c  lwz 3, 8324(28)
  02ed050  cmpwi 1, 29, 0
  02ed054  cmpwi 3, 44
  02ed058  crorc 2, 6, 2
  02ed05c  bt 2, 0x2ed110
  02ed060  lwz 3, 2452(28)
  02ed064  lwz 4, 20(30)
  02ed068  lfs 1, 20(3)
  02ed06c  lfs 2, 20(4)
  02ed070  lfs 3, 16(3)
  02ed074  fsubs 1, 1, 2
  02ed078  lfs 2, 16(4)
  02ed07c  fsubs 2, 3, 2
  02ed080  lfs 3, 24(3)
  02ed084  lfs 4, 24(4)
  02ed088  fsubs 3, 3, 4
  02ed08c  fmuls 1, 1, 1
  02ed090  lis 3, 47
  02ed094  addi 3, 3, -17072
  02ed098  fmadds 1, 2, 2, 1
  02ed09c  lfs 2, 68(3)
  02ed0a0  lis 3, 16256
  02ed0a4  fmadds 1, 3, 3, 1
  02ed0a8  fsqrts 1, 1
  02ed0ac  fmuls 1, 1, 2
  02ed0b0  stfs 1, 4(29)
  02ed0b4  stw 27, 32(30)
  02ed0b8  stw 3, 28(30)
  02ed0bc  stw 27, 24(30)
  02ed0c0  lbz 3, 83(31)
  02ed0c4  cmpwi 3, 3
  02ed0c8  bt 2, 0x2ed108
  02ed0cc  lis 3, 47
  02ed0d0  lis 4, 114
  02ed0d4  addi 3, 3, -17072
  02ed0d8  li 5, 0
  02ed0dc  lfs 1, 20(3)
  02ed0e0  lfs 2, -3056(4)
  02ed0e4  ori 3, 31, 0
  02ed0e8  fmuls 1, 2, 1
  02ed0ec  li 4, 3
  02ed0f0  fctiwz 1, 1
  02ed0f4  stfd 1, 192(1)
  02ed0f8  lwz 6, 196(1)
  02ed0fc  extsw 6, 6
  02ed100  bl 0xfddc0
  02ed104  nop
  02ed108  li 3, 9
  02ed10c  stb 3, 32(31)
  02ed110  ld 0, 304(1)
  02ed114  mtlr 0
  02ed118  lfd 28, 256(1)
  02ed11c  lfd 29, 264(1)
  02ed120  lfd 30, 272(1)
  02ed124  lfd 31, 280(1)
  02ed128  ld 27, 216(1)
  02ed12c  ld 28, 224(1)
  02ed130  ld 29, 232(1)
  02ed134  ld 30, 240(1)
  02ed138  ld 31, 248(1)
  02ed13c  addi 1, 1, 288
  02ed140  blr

M209_002ed144:   # 0x2ed144, 0x14 bytes
  02ed144  lis 3, 128
  02ed148  lis 4, 1
  02ed14c  addic 3, 3, -5340
  02ed150  stw 4, 72(3)
  02ed154  blr
