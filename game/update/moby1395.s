# game/update/moby1395.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1395:   # 0x26a268, 0x5e8 bytes
  026a268  stdu 1, -160(1)
  026a26c  mflr 0
  026a270  std 0, 176(1)
  026a274  std 31, 152(1)
  026a278  ori 31, 3, 0
  026a27c  std 30, 144(1)
  026a280  lbz 3, 32(31)
  026a284  lwz 30, 120(31)
  026a288  cmpwi 3, 1
  026a28c  cmpwi 1, 3, 3
  026a290  cmpwi 6, 3, 2
  026a294  std 29, 136(1)
  026a298  cmpwi 7, 3, 0
  026a29c  bt 1, 0x26a2b0
  026a2a0  cmpwi 3, -1
  026a2a4  bf 1, 0x26a834
  026a2a8  bf 29, 0x26a2bc
  026a2ac  b 0x26a3fc
  026a2b0  bf 25, 0x26a4f8
  026a2b4  bf 5, 0x26a684
  026a2b8  b 0x26a834
  026a2bc  lwz 3, 0(30)
  026a2c0  cmpwi 3, 0
  026a2c4  bf 2, 0x26a318
  026a2c8  ori 3, 31, 0
  026a2cc  bl 0x26a854
  026a2d0  nop
  026a2d4  lis 4, 122
  026a2d8  lfs 1, 192(31)
  026a2dc  lfs 2, 16(31)
  026a2e0  stw 3, 0(30)
  026a2e4  lfs 3, -13468(4)
  026a2e8  fmadds 1, 1, 3, 2
  026a2ec  lfs 2, 196(31)
  026a2f0  lfs 4, 200(31)
  026a2f4  stfs 1, 16(3)
  026a2f8  lfs 1, 20(31)
  026a2fc  fmadds 1, 2, 3, 1
  026a300  stfs 1, 20(3)
  026a304  lfs 1, 24(31)
  026a308  fmadds 1, 4, 3, 1
  026a30c  stfs 1, 24(3)
  026a310  lfs 1, 28(31)
  026a314  stfs 1, 28(3)
  026a318  li 3, 0
  026a31c  ori 4, 30, 0
  026a320  vspltisw 2, 0
  026a324  li 10, 17232
  026a328  vspltisw 3, 1
  026a32c  lis 5, 164
  026a330  li 11, 24
  026a334  lis 6, 122
  026a338  lis 7, 122
  026a33c  lis 8, 250
  026a340  li 9, -13464
  026a344  lwz 12, 4(4)
  026a348  cmpwi 12, 0
  026a34c  bf 2, 0x26a3c8
  026a350  lfs 1, 192(31)
  026a354  lwz 12, 40(4)
  026a358  lfs 2, -13468(6)
  026a35c  lwz 29, -28512(5)
  026a360  slwi 12, 12, 8
  026a364  lfs 3, 16(31)
  026a368  addc 12, 29, 12
  026a36c  fmadds 1, 1, 2, 3
  026a370  clrldi 29, 12, 32
  026a374  lfs 3, 196(31)
  026a378  vcfsx 4, 2, 0
  026a37c  lfs 4, 200(31)
  026a380  stw 12, 4(4)
  026a384  stfs 1, 16(29)
  026a388  lfs 1, 20(31)
  026a38c  fmadds 1, 3, 2, 1
  026a390  stfs 1, 20(29)
  026a394  lfs 1, 24(31)
  026a398  fmadds 1, 4, 2, 1
  026a39c  stfs 1, 24(29)
  026a3a0  lfs 1, 28(31)
  026a3a4  stfs 1, 28(29)
  026a3a8  <unknown>
  026a3ac  <unknown>
  026a3b0  lwz 12, 4(4)
  026a3b4  vmaddfp 4, 5, 4, 6
  026a3b8  <unknown>
  026a3bc  vaddfp 4, 4, 5
  026a3c0  vspltw 4, 4, 0
  026a3c4  stvewx 4, 11, 12
  026a3c8  addic 3, 3, 1
  026a3cc  addic 4, 4, 4
  026a3d0  vadduwm 2, 2, 3
  026a3d4  cmpwi 3, 6
  026a3d8  bt 0, 0x26a344
  026a3dc  li 3, -1
  026a3e0  lwz 4, 0(30)
  026a3e4  cmpwi 4, 0
  026a3e8  stw 3, 64(30)
  026a3ec  bt 2, 0x26a834
  026a3f0  li 3, 1
  026a3f4  stb 3, 32(31)
  026a3f8  b 0x26a834
  026a3fc  lis 3, 164
  026a400  lwz 4, 28(30)
  026a404  slwi 4, 4, 8
  026a408  lwz 3, -28512(3)
  026a40c  addc 3, 3, 4
  026a410  clrldi 3, 3, 32
  026a414  lbz 3, 32(3)
  026a418  cmpwi 3, 2
  026a41c  bf 2, 0x26a834
  026a420  li 3, 2
  026a424  lis 4, 122
  026a428  li 5, -13456
  026a42c  li 6, 5
  026a430  stb 3, 32(31)
  026a434  lwz 3, -13456(4)
  026a438  extsw 3, 3
  026a43c  vspltisw 5, -1
  026a440  std 3, 112(1)
  026a444  lis 3, 39
  026a448  sth 6, 34(30)
  026a44c  <unknown>
  026a450  addi 31, 3, -23984
  026a454  lis 3, 114
  026a458  vcfsx 2, 2, 0
  026a45c  li 4, -3056
  026a460  <unknown>
  026a464  lfs 1, 0(31)
  026a468  <unknown>
  026a46c  lfd 2, 112(1)
  026a470  vspltw 3, 3, 0
  026a474  fcfid 2, 2
  026a478  lfs 3, -3056(3)
  026a47c  li 3, 32
  026a480  vaddfp 2, 2, 3
  026a484  vslw 3, 5, 5
  026a488  frsp 2, 2
  026a48c  vmaddfp 2, 4, 2, 3
  026a490  fadds 1, 2, 1
  026a494  vctsxs 2, 2, 0
  026a498  fmuls 1, 3, 1
  026a49c  vsplth 2, 2, 1
  026a4a0  fctiwz 1, 1
  026a4a4  stfd 1, 112(1)
  026a4a8  lwz 4, 116(1)
  026a4ac  stvehx 2, 3, 30
  026a4b0  extsh 3, 4
  026a4b4  bl 0x502730
  026a4b8  nop
  026a4bc  lfs 2, 4(31)
  026a4c0  fdivs 1, 2, 1
  026a4c4  li 3, 0
  026a4c8  li 4, 0
  026a4cc  li 6, 1397
  026a4d0  lhz 5, 34(30)
  026a4d4  extsh 5, 5
  026a4d8  sldi 5, 5, 2
  026a4dc  addc 5, 30, 5
  026a4e0  clrldi 5, 5, 32
  026a4e4  lwz 5, 4(5)
  026a4e8  stfs 1, 36(30)
  026a4ec  bl 0x15d204
  026a4f0  nop
  026a4f4  b 0x26a834
  026a4f8  lhz 4, 34(30)
  026a4fc  addic 3, 30, 32
  026a500  extsh 4, 4
  026a504  sldi 4, 4, 2
  026a508  addc 4, 30, 4
  026a50c  clrldi 4, 4, 32
  026a510  lwz 29, 4(4)
  026a514  bl 0x4fffb4
  026a518  nop
  026a51c  lhz 3, 32(30)
  026a520  extsh 3, 3
  026a524  bl 0x502730
  026a528  nop
  026a52c  lis 3, 39
  026a530  lfs 3, 36(30)
  026a534  addi 3, 3, -23984
  026a538  fmuls 3, 1, 3
  026a53c  lfs 1, 8(3)
  026a540  lfs 2, 12(3)
  026a544  bl 0x103ab0
  026a548  nop
  026a54c  stfs 1, 68(29)
  026a550  lhz 3, 32(30)
  026a554  cmpwi 3, 0
  026a558  bf 2, 0x26a834
  026a55c  lis 3, 122
  026a560  vspltisw 4, -1
  026a564  li 4, -13456
  026a568  lis 5, 39
  026a56c  addi 5, 5, -23984
  026a570  vslw 4, 4, 4
  026a574  <unknown>
  026a578  lis 3, 114
  026a57c  vcfsx 3, 2, 0
  026a580  li 4, -3056
  026a584  <unknown>
  026a588  vspltw 2, 2, 0
  026a58c  <unknown>
  026a590  lfs 1, 0(5)
  026a594  lhz 3, 34(30)
  026a598  li 4, 32
  026a59c  addic 5, 3, -1
  026a5a0  vaddfp 3, 3, 2
  026a5a4  extsh 3, 5
  026a5a8  cmpwi 3, 0
  026a5ac  vmaddfp 3, 5, 3, 4
  026a5b0  vctsxs 3, 3, 0
  026a5b4  vsplth 3, 3, 1
  026a5b8  stvehx 3, 4, 30
  026a5bc  sth 5, 34(30)
  026a5c0  bf 0, 0x26a65c
  026a5c4  li 3, 3
  026a5c8  lis 4, 122
  026a5cc  li 5, -13452
  026a5d0  vspltisw 4, -1
  026a5d4  stb 3, 32(31)
  026a5d8  lwz 3, -13452(4)
  026a5dc  extsw 3, 3
  026a5e0  vslw 4, 4, 4
  026a5e4  std 3, 112(1)
  026a5e8  <unknown>
  026a5ec  lis 3, 114
  026a5f0  li 4, -3056
  026a5f4  vcfsx 3, 3, 0
  026a5f8  <unknown>
  026a5fc  lfs 2, -3056(3)
  026a600  lfd 3, 112(1)
  026a604  fcfid 3, 3
  026a608  li 3, 32
  026a60c  vaddfp 2, 3, 2
  026a610  frsp 3, 3
  026a614  vmaddfp 2, 5, 2, 4
  026a618  fadds 1, 3, 1
  026a61c  vctsxs 2, 2, 0
  026a620  fmuls 1, 2, 1
  026a624  fctiwz 1, 1
  026a628  vsplth 2, 2, 1
  026a62c  stfd 1, 112(1)
  026a630  lwz 4, 116(1)
  026a634  stvehx 2, 3, 30
  026a638  extsh 3, 4
  026a63c  bl 0x502730
  026a640  nop
  026a644  lis 3, 39
  026a648  addi 3, 3, -23984
  026a64c  lfs 2, 4(3)
  026a650  fdivs 1, 2, 1
  026a654  stfs 1, 36(30)
  026a658  b 0x26a834
  026a65c  sldi 4, 3, 2
  026a660  li 3, 0
  026a664  addc 4, 30, 4
  026a668  li 6, 1397
  026a66c  clrldi 5, 4, 32
  026a670  li 4, 0
  026a674  lwz 5, 4(5)
  026a678  bl 0x15d204
  026a67c  nop
  026a680  b 0x26a834
  026a684  ori 3, 31, 0
  026a688  lwz 4, 64(30)
  026a68c  lwz 29, 0(30)
  026a690  extsw 4, 4
  026a694  bl 0x15cc7c
  026a698  nop
  026a69c  cmpwi 3, 0
  026a6a0  bf 2, 0x26a6bc
  026a6a4  li 3, 0
  026a6a8  li 4, 4
  026a6ac  ori 5, 31, 0
  026a6b0  bl 0x15d12c
  026a6b4  nop
  026a6b8  stw 3, 64(30)
  026a6bc  addic 3, 30, 32
  026a6c0  bl 0x4fffb4
  026a6c4  nop
  026a6c8  lhz 3, 32(30)
  026a6cc  extsh 3, 3
  026a6d0  bl 0x502730
  026a6d4  nop
  026a6d8  lis 3, 39
  026a6dc  lis 4, 122
  026a6e0  lfs 3, 36(30)
  026a6e4  addi 3, 3, -23984
  026a6e8  fmuls 3, 1, 3
  026a6ec  lfs 1, 16(3)
  026a6f0  lfs 4, -13460(4)
  026a6f4  lfs 2, 12(3)
  026a6f8  fmuls 1, 4, 1
  026a6fc  bl 0x1099ec
  026a700  nop
  026a704  li 4, 6
  026a708  stfs 1, 68(29)
  026a70c  ori 3, 30, 0
  026a710  vspltisw 2, 0
  026a714  mtctr 4
  026a718  vcfsx 3, 2, 0
  026a71c  lis 4, 122
  026a720  li 5, -13464
  026a724  lis 6, 250
  026a728  li 7, 17232
  026a72c  li 8, 20
  026a730  <unknown>
  026a734  li 4, 224
  026a738  <unknown>
  026a73c  li 5, 16
  026a740  li 7, 232
  026a744  vmaddfp 3, 4, 3, 5
  026a748  <unknown>
  026a74c  li 4, 228
  026a750  <unknown>
  026a754  lwz 6, 4(3)
  026a758  addic 3, 3, 4
  026a75c  <unknown>
  026a760  <unknown>
  026a764  li 4, 24
  026a768  vmaddfp 4, 4, 3, 5
  026a76c  vspltisw 5, 1
  026a770  vadduwm 2, 2, 5
  026a774  vspltw 4, 4, 0
  026a778  stvewx 4, 5, 6
  026a77c  <unknown>
  026a780  vmaddfp 4, 6, 3, 4
  026a784  vspltw 4, 4, 0
  026a788  stvewx 4, 8, 6
  026a78c  <unknown>
  026a790  vmaddfp 3, 7, 3, 4
  026a794  vspltw 3, 3, 0
  026a798  stvewx 3, 4, 6
  026a79c  lfs 1, 28(29)
  026a7a0  stfs 1, 28(6)
  026a7a4  bdnz 0x26a718
  026a7a8  lhz 3, 32(30)
  026a7ac  cmpwi 3, 0
  026a7b0  bf 2, 0x26a834
  026a7b4  lwz 3, 64(30)
  026a7b8  cmpwi 3, -1
  026a7bc  bt 2, 0x26a804
  026a7c0  sldi 4, 3, 7
  026a7c4  sldi 6, 3, 4
  026a7c8  lis 5, 150
  026a7cc  subc 4, 4, 6
  026a7d0  addic 5, 5, 14312
  026a7d4  extsw 4, 4
  026a7d8  lwzx 5, 5, 4
  026a7dc  cmpw 5, 31
  026a7e0  bf 2, 0x26a804
  026a7e4  lis 5, 150
  026a7e8  addic 5, 5, 14292
  026a7ec  lbzx 4, 5, 4
  026a7f0  cmpwi 4, 0
  026a7f4  bt 2, 0x26a804
  026a7f8  extsw 3, 3
  026a7fc  bl 0x15cdb0
  026a800  nop
  026a804  li 4, -1
  026a808  li 5, 4
  026a80c  li 3, 2
  026a810  stw 4, 64(30)
  026a814  stb 5, 32(31)
  026a818  li 31, 0
  026a81c  lwz 4, 4(30)
  026a820  addic 31, 31, 1
  026a824  addic 30, 30, 4
  026a828  cmpwi 31, 6
  026a82c  stb 3, 32(4)
  026a830  bt 0, 0x26a81c
  026a834  ld 0, 176(1)
  026a838  mtlr 0
  026a83c  ld 29, 136(1)
  026a840  ld 30, 144(1)
  026a844  ld 31, 152(1)
  026a848  addi 1, 1, 160
  026a84c  blr
