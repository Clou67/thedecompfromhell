# game/update/moby629.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003ebfcc:   # 0x3ebfcc, 0x90 bytes
  03ebfcc  stdu 1, -144(1)
  03ebfd0  mflr 0
  03ebfd4  std 0, 160(1)
  03ebfd8  stfd 31, 136(1)
  03ebfdc  std 30, 120(1)
  03ebfe0  ori 30, 3, 0
  03ebfe4  li 3, 628
  03ebfe8  std 31, 128(1)
  03ebfec  fmr 31, 1
  03ebff0  ori 31, 4, 0
  03ebff4  bl 0xefa28
  03ebff8  nop
  03ebffc  cmpwi 3, 0
  03ec000  bt 2, 0x3ec040
  03ec004  li 4, 255
  03ec008  li 5, 3
  03ec00c  stb 4, 48(3)
  03ec010  lfs 1, 0(31)
  03ec014  lwz 4, 120(3)
  03ec018  stfs 1, 16(3)
  03ec01c  lfs 1, 4(31)
  03ec020  stfs 1, 20(3)
  03ec024  lfs 1, 8(31)
  03ec028  stfs 1, 24(3)
  03ec02c  lfs 1, 12(31)
  03ec030  stw 5, 8(4)
  03ec034  stfs 1, 28(3)
  03ec038  stfs 31, 0(4)
  03ec03c  stw 30, 12(4)
  03ec040  ld 0, 160(1)
  03ec044  mtlr 0
  03ec048  lfd 31, 136(1)
  03ec04c  ld 30, 120(1)
  03ec050  ld 31, 128(1)
  03ec054  addi 1, 1, 144
  03ec058  blr

FUN_003ec060:   # 0x3ec060, 0xcc bytes
  03ec060  stdu 1, -64(1)
  03ec064  ori 5, 3, 0
  03ec068  lis 6, 133
  03ec06c  lis 8, 114
  03ec070  vspltisw 4, -1
  03ec074  lwz 3, 120(5)
  03ec078  lfs 2, 0(4)
  03ec07c  stfs 2, 16(5)
  03ec080  lfs 2, 4(4)
  03ec084  lwz 7, 8(3)
  03ec088  stfs 2, 20(5)
  03ec08c  lfs 2, 8(4)
  03ec090  addic 7, 7, 2
  03ec094  stfs 2, 24(5)
  03ec098  lfs 2, 12(4)
  03ec09c  stw 7, 8(3)
  03ec0a0  lwz 4, 16752(6)
  03ec0a4  stfs 2, 28(5)
  03ec0a8  extsw 4, 4
  03ec0ac  lis 5, 63
  03ec0b0  stfs 1, 0(3)
  03ec0b4  vslw 4, 4, 4
  03ec0b8  std 4, 48(1)
  03ec0bc  addi 4, 5, -16292
  03ec0c0  li 5, 16752
  03ec0c4  lfs 1, 0(4)
  03ec0c8  <unknown>
  03ec0cc  <unknown>
  03ec0d0  lfs 2, -3056(8)
  03ec0d4  lfd 3, 48(1)
  03ec0d8  vcfsx 2, 2, 0
  03ec0dc  vspltw 3, 3, 0
  03ec0e0  fcfid 3, 3
  03ec0e4  li 4, -3056
  03ec0e8  frsp 3, 3
  03ec0ec  vaddfp 2, 2, 3
  03ec0f0  <unknown>
  03ec0f4  fadds 1, 3, 1
  03ec0f8  vmaddfp 2, 3, 2, 4
  03ec0fc  fmuls 1, 2, 1
  03ec100  vctsxs 2, 2, 0
  03ec104  fctiwz 1, 1
  03ec108  stfd 1, 48(1)
  03ec10c  lwz 4, 52(1)
  03ec110  cmpw 7, 4
  03ec114  bf 1, 0x3ec124
  03ec118  vspltw 2, 2, 0
  03ec11c  li 4, 8
  03ec120  stvewx 2, 4, 3
  03ec124  addi 1, 1, 64
  03ec128  blr

M629_003ec168:   # 0x3ec168, 0x5f4 bytes
  03ec168  stdu 1, -1040(1)
  03ec16c  mflr 0
  03ec170  std 0, 1056(1)
  03ec174  stfd 19, 936(1)
  03ec178  stfd 20, 944(1)
  03ec17c  stfd 21, 952(1)
  03ec180  stfd 22, 960(1)
  03ec184  stfd 23, 968(1)
  03ec188  stfd 24, 976(1)
  03ec18c  stfd 25, 984(1)
  03ec190  stfd 26, 992(1)
  03ec194  stfd 27, 1000(1)
  03ec198  stfd 28, 1008(1)
  03ec19c  stfd 29, 1016(1)
  03ec1a0  stfd 30, 1024(1)
  03ec1a4  stfd 31, 1032(1)
  03ec1a8  std 31, 928(1)
  03ec1ac  std 29, 912(1)
  03ec1b0  ori 31, 3, 0
  03ec1b4  lis 29, 63
  03ec1b8  addic 3, 1, 176
  03ec1bc  std 19, 832(1)
  03ec1c0  addi 29, 29, -16084
  03ec1c4  std 30, 920(1)
  03ec1c8  std 28, 904(1)
  03ec1cc  std 27, 896(1)
  03ec1d0  std 26, 888(1)
  03ec1d4  std 25, 880(1)
  03ec1d8  std 24, 872(1)
  03ec1dc  std 23, 864(1)
  03ec1e0  std 22, 856(1)
  03ec1e4  std 21, 848(1)
  03ec1e8  std 20, 840(1)
  03ec1ec  lwz 19, 120(31)
  03ec1f0  bl 0x500af8
  03ec1f4  nop
  03ec1f8  lis 3, 133
  03ec1fc  lfs 1, 24(31)
  03ec200  lfs 2, 16(31)
  03ec204  lis 4, 16256
  03ec208  lfs 3, 20(31)
  03ec20c  li 20, 0
  03ec210  stfs 2, 224(1)
  03ec214  ori 28, 1, 0
  03ec218  ori 30, 20, 0
  03ec21c  lfs 2, 16816(3)
  03ec220  stfs 3, 228(1)
  03ec224  fadds 2, 1, 2
  03ec228  lfs 3, 28(31)
  03ec22c  stfs 1, 232(1)
  03ec230  stfs 3, 236(1)
  03ec234  stfs 2, 232(1)
  03ec238  lfs 30, 0(29)
  03ec23c  stw 4, 236(1)
  03ec240  li 3, 14
  03ec244  bl 0x685c4
  03ec248  nop
  03ec24c  std 3, 360(28)
  03ec250  li 3, 0
  03ec254  lis 9, 0
  03ec258  li 4, 0
  03ec25c  li 5, 1
  03ec260  li 6, 1
  03ec264  li 7, 1
  03ec268  li 8, 0
  03ec26c  ori 9, 9, 65424
  03ec270  bl 0x502fd4
  03ec274  nop
  03ec278  std 3, 368(28)
  03ec27c  li 4, 0
  03ec280  li 3, 0
  03ec284  li 5, 0
  03ec288  li 6, 0
  03ec28c  li 7, 0
  03ec290  li 8, 0
  03ec294  bl 0x502f08
  03ec298  nop
  03ec29c  std 3, 352(28)
  03ec2a0  lis 3, 269
  03ec2a4  lis 4, 269
  03ec2a8  lis 5, 133
  03ec2ac  lis 6, 133
  03ec2b0  li 7, 128
  03ec2b4  lwz 8, -17472(3)
  03ec2b8  lwz 3, -17476(4)
  03ec2bc  lwz 4, 16760(5)
  03ec2c0  lwz 6, 16764(6)
  03ec2c4  ori 5, 8, 0
  03ec2c8  bl 0x502ea8
  03ec2cc  nop
  03ec2d0  extsw 4, 20
  03ec2d4  std 3, 376(28)
  03ec2d8  lis 3, 133
  03ec2dc  std 4, 816(1)
  03ec2e0  lfs 27, 4(29)
  03ec2e4  lfs 1, 4(19)
  03ec2e8  lfs 28, 0(19)
  03ec2ec  lfs 2, 16824(3)
  03ec2f0  lfd 3, 816(1)
  03ec2f4  fcfid 31, 3
  03ec2f8  frsp 31, 31
  03ec2fc  fmadds 29, 31, 27, 1
  03ec300  fmadds 28, 2, 31, 28
  03ec304  fmr 1, 29
  03ec308  bl 0x502758
  03ec30c  nop
  03ec310  extsw 3, 3
  03ec314  lis 4, 133
  03ec318  std 3, 816(1)
  03ec31c  lis 3, 133
  03ec320  lwz 3, 16772(3)
  03ec324  lwz 4, 16776(4)
  03ec328  lfd 1, 816(1)
  03ec32c  extsw 3, 3
  03ec330  extsw 4, 4
  03ec334  fcfid 1, 1
  03ec338  frsp 1, 1
  03ec33c  fsubs 29, 29, 1
  03ec340  fmr 1, 29
  03ec344  bl 0x5027bc
  03ec348  nop
  03ec34c  lis 5, 133
  03ec350  ori 4, 3, 0
  03ec354  clrlwi 3, 4, 8
  03ec358  lfs 1, 16832(5)
  03ec35c  fmuls 1, 1, 29
  03ec360  fsub 2, 30, 1
  03ec364  fsel 1, 2, 1, 30
  03ec368  bl 0x5027bc
  03ec36c  nop
  03ec370  lwz 4, 8(19)
  03ec374  ori 21, 3, 0
  03ec378  extsw 3, 4
  03ec37c  bl 0x502730
  03ec380  nop
  03ec384  lis 3, 133
  03ec388  lwz 3, 16752(3)
  03ec38c  extsw 3, 3
  03ec390  std 3, 816(1)
  03ec394  lis 3, 114
  03ec398  lfs 2, 8(29)
  03ec39c  lfs 3, -3056(3)
  03ec3a0  lfd 4, 816(1)
  03ec3a4  fcfid 4, 4
  03ec3a8  frsp 4, 4
  03ec3ac  fadds 2, 4, 2
  03ec3b0  fmuls 2, 3, 2
  03ec3b4  fctidz 2, 2
  03ec3b8  fcfid 2, 2
  03ec3bc  frsp 2, 2
  03ec3c0  fdivs 1, 1, 2
  03ec3c4  fcmpu 0, 1, 30
  03ec3c8  cror 6, 0, 2
  03ec3cc  bt 6, 0x3ec3d8
  03ec3d0  fmr 1, 30
  03ec3d4  b 0x3ec3ec
  03ec3d8  lfs 2, 12(29)
  03ec3dc  fcmpu 0, 1, 2
  03ec3e0  cror 6, 1, 2
  03ec3e4  bt 6, 0x3ec3ec
  03ec3e8  fmr 1, 2
  03ec3ec  fmr 26, 31
  03ec3f0  clrlwi 3, 21, 8
  03ec3f4  ori 4, 21, 0
  03ec3f8  bl 0x5027bc
  03ec3fc  nop
  03ec400  fmuls 27, 27, 26
  03ec404  lfs 31, 16(29)
  03ec408  lfs 19, 20(29)
  03ec40c  ori 25, 28, 0
  03ec410  lfs 20, 24(29)
  03ec414  lis 23, 133
  03ec418  lfs 21, 28(29)
  03ec41c  lis 24, 133
  03ec420  lfs 22, 32(29)
  03ec424  ori 26, 25, 0
  03ec428  lfs 23, 36(29)
  03ec42c  ori 21, 3, 0
  03ec430  lfs 24, 40(29)
  03ec434  ori 22, 30, 0
  03ec438  lfs 25, 44(29)
  03ec43c  lis 31, 133
  03ec440  lfs 26, 48(29)
  03ec444  addic 23, 23, 16784
  03ec448  addic 24, 24, 16788
  03ec44c  ori 27, 26, 0
  03ec450  fmuls 27, 27, 31
  03ec454  clrlwi 3, 22, 31
  03ec458  lfs 1, 0(23)
  03ec45c  lfs 2, 0(24)
  03ec460  cmpwi 3, 0
  03ec464  stfs 1, 320(25)
  03ec468  stfs 2, 324(25)
  03ec46c  bt 2, 0x3ec480
  03ec470  lis 3, 133
  03ec474  lfs 1, 16820(3)
  03ec478  fmuls 1, 1, 29
  03ec47c  b 0x3ec490
  03ec480  lis 3, 133
  03ec484  lfs 1, 16820(3)
  03ec488  fmuls 1, 1, 29
  03ec48c  fneg 1, 1
  03ec490  srawi 3, 22, 1
  03ec494  extsw 3, 3
  03ec498  std 3, 816(1)
  03ec49c  stfs 1, 248(26)
  03ec4a0  lfs 2, 16780(31)
  03ec4a4  lfd 3, 816(1)
  03ec4a8  fmuls 1, 2, 31
  03ec4ac  fcfid 3, 3
  03ec4b0  fmuls 2, 2, 27
  03ec4b4  frsp 3, 3
  03ec4b8  fmsubs 1, 1, 3, 19
  03ec4bc  bl 0x502578
  03ec4c0  nop
  03ec4c4  fadds 2, 1, 20
  03ec4c8  fsubs 3, 21, 1
  03ec4cc  fsubs 4, 22, 1
  03ec4d0  lis 3, 16256
  03ec4d4  stw 21, 304(27)
  03ec4d8  addic 22, 22, 1
  03ec4dc  addic 23, 23, 8
  03ec4e0  fsubs 5, 21, 2
  03ec4e4  fsub 6, 1, 3
  03ec4e8  fsubs 7, 22, 2
  03ec4ec  stw 3, 252(26)
  03ec4f0  cmpwi 22, 4
  03ec4f4  addic 25, 25, 8
  03ec4f8  addic 24, 24, 8
  03ec4fc  addic 27, 27, 4
  03ec500  fsub 8, 2, 5
  03ec504  fsel 1, 6, 3, 1
  03ec508  fsel 2, 8, 5, 2
  03ec50c  fsub 3, 4, 1
  03ec510  fsub 5, 7, 2
  03ec514  fsel 1, 3, 4, 1
  03ec518  fsel 2, 5, 7, 2
  03ec51c  fmuls 3, 1, 1
  03ec520  fmuls 4, 2, 2
  03ec524  fmuls 5, 3, 1
  03ec528  fmuls 6, 4, 2
  03ec52c  fmuls 7, 3, 5
  03ec530  fmadds 1, 5, 23, 1
  03ec534  fmuls 5, 4, 6
  03ec538  fmadds 2, 6, 23, 2
  03ec53c  fmuls 6, 3, 7
  03ec540  fmadds 1, 7, 24, 1
  03ec544  fmuls 7, 4, 5
  03ec548  fmadds 2, 5, 24, 2
  03ec54c  fmuls 3, 3, 6
  03ec550  fmadds 1, 6, 25, 1
  03ec554  fmuls 4, 4, 7
  03ec558  fmadds 2, 7, 25, 2
  03ec55c  fmadds 1, 3, 26, 1
  03ec560  fmadds 2, 4, 26, 2
  03ec564  fmuls 1, 1, 28
  03ec568  fmuls 2, 2, 28
  03ec56c  stfs 1, 244(26)
  03ec570  stfs 2, 240(26)
  03ec574  addic 26, 26, 16
  03ec578  bt 0, 0x3ec454
  03ec57c  addic 20, 20, 1
  03ec580  addic 28, 28, 144
  03ec584  cmpwi 20, 4
  03ec588  bt 0, 0x3ec240
  03ec58c  stw 30, 124(1)
  03ec590  stw 30, 120(1)
  03ec594  addic 3, 1, 128
  03ec598  stw 30, 116(1)
  03ec59c  addic 4, 1, 112
  03ec5a0  stw 30, 112(1)
  03ec5a4  lfs 1, 16780(31)
  03ec5a8  fmuls 1, 1, 31
  03ec5ac  stfs 1, 120(1)
  03ec5b0  bl 0x500b64
  03ec5b4  nop
  03ec5b8  li 3, 16780
  03ec5bc  vspltisw 5, -1
  03ec5c0  li 4, 56
  03ec5c4  vspltisw 7, -1
  03ec5c8  vspltisw 8, -1
  03ec5cc  vslw 5, 5, 5
  03ec5d0  <unknown>
  03ec5d4  <unknown>
  03ec5d8  vrefp 3, 2
  03ec5dc  vspltw 4, 4, 0
  03ec5e0  vslw 7, 7, 7
  03ec5e4  li 3, 52
  03ec5e8  vspltisw 10, 0
  03ec5ec  vnmsubfp 6, 3, 2, 4
  03ec5f0  vmaddfp 3, 3, 6, 5
  03ec5f4  vslw 6, 8, 8
  03ec5f8  vspltisw 8, -1
  03ec5fc  <unknown>
  03ec600  vspltw 5, 5, 0
  03ec604  vslw 8, 8, 8
  03ec608  lfs 31, 52(29)
  03ec60c  vnmsubfp 9, 3, 2, 4
  03ec610  vmaddfp 3, 3, 9, 7
  03ec614  vnmsubfp 2, 3, 2, 4
  03ec618  vmaddfp 2, 3, 2, 6
  03ec61c  vmaddfp 2, 2, 5, 8
  03ec620  vspltw 2, 2, 0
  03ec624  vcmpgefp. 2, 10, 2
  03ec628  bf 26, 0x3ec6e4
  03ec62c  lis 29, 161
  03ec630  addic 29, 29, 24396
  03ec634  addic 28, 1, 176
  03ec638  addic 3, 1, 240
  03ec63c  lwz 6, 28(29)
  03ec640  ori 4, 28, 0
  03ec644  li 5, 0
  03ec648  li 7, 9
  03ec64c  bl 0x72280
  03ec650  nop
  03ec654  lwz 6, 28(29)
  03ec658  addic 3, 1, 384
  03ec65c  ori 4, 28, 0
  03ec660  li 5, 0
  03ec664  li 7, 9
  03ec668  bl 0x72280
  03ec66c  nop
  03ec670  lwz 6, 28(29)
  03ec674  addic 3, 1, 528
  03ec678  ori 4, 28, 0
  03ec67c  li 5, 0
  03ec680  li 7, 9
  03ec684  bl 0x72280
  03ec688  nop
  03ec68c  lwz 6, 28(29)
  03ec690  addic 3, 1, 672
  03ec694  ori 4, 28, 0
  03ec698  li 5, 0
  03ec69c  li 7, 9
  03ec6a0  bl 0x72280
  03ec6a4  nop
  03ec6a8  addic 5, 1, 128
  03ec6ac  ori 3, 28, 0
  03ec6b0  ori 4, 28, 0
  03ec6b4  bl 0x5014d4
  03ec6b8  nop
  03ec6bc  lfs 1, 16780(31)
  03ec6c0  addic 30, 30, 1
  03ec6c4  fdivs 1, 31, 1
  03ec6c8  extsw 3, 30
  03ec6cc  std 3, 816(1)
  03ec6d0  lfd 2, 816(1)
  03ec6d4  fcfid 2, 2
  03ec6d8  frsp 2, 2
  03ec6dc  fcmpu 0, 2, 1
  03ec6e0  bt 0, 0x3ec634
  03ec6e4  ld 0, 1056(1)
  03ec6e8  mtlr 0
  03ec6ec  lfd 19, 936(1)
  03ec6f0  lfd 20, 944(1)
  03ec6f4  lfd 21, 952(1)
  03ec6f8  lfd 22, 960(1)
  03ec6fc  lfd 23, 968(1)
  03ec700  lfd 24, 976(1)
  03ec704  lfd 25, 984(1)
  03ec708  lfd 26, 992(1)
  03ec70c  lfd 27, 1000(1)
  03ec710  lfd 28, 1008(1)
  03ec714  lfd 29, 1016(1)
  03ec718  lfd 30, 1024(1)
  03ec71c  lfd 31, 1032(1)
  03ec720  ld 19, 832(1)
  03ec724  ld 20, 840(1)
  03ec728  ld 21, 848(1)
  03ec72c  ld 22, 856(1)
  03ec730  ld 23, 864(1)
  03ec734  ld 24, 872(1)
  03ec738  ld 25, 880(1)
  03ec73c  ld 26, 888(1)
  03ec740  ld 27, 896(1)
  03ec744  ld 28, 904(1)
  03ec748  ld 29, 912(1)
  03ec74c  ld 30, 920(1)
  03ec750  ld 31, 928(1)
  03ec754  addi 1, 1, 1040
  03ec758  blr

M629_003ec75c:   # 0x3ec75c, 0x14 bytes
  03ec75c  lis 3, 133
  03ec760  lis 4, 1
  03ec764  addic 3, 3, 16844
  03ec768  stw 4, 72(3)
  03ec76c  blr

UpdateMoby_629:   # 0x3ec770, 0x4 bytes
  03ec770  blr

M629_003ec774:   # 0x3ec774, 0x14 bytes
  03ec774  lis 3, 133
  03ec778  lis 4, 1
  03ec77c  addic 3, 3, 16956
  03ec780  stw 4, 72(3)
  03ec784  blr
