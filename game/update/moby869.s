# game/update/moby869.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M869_0049a3b8:   # 0x49a3b8, 0x78 bytes
  049a3b8  stdu 1, -112(1)
  049a3bc  mflr 0
  049a3c0  std 0, 128(1)
  049a3c4  cmpwi 4, 0
  049a3c8  lwz 5, 120(3)
  049a3cc  bt 2, 0x49a418
  049a3d0  li 6, 132
  049a3d4  vspltisw 4, -1
  049a3d8  lis 7, 74
  049a3dc  addi 7, 7, -23632
  049a3e0  vslw 4, 4, 4
  049a3e4  <unknown>
  049a3e8  lis 4, 114
  049a3ec  vcfsx 2, 2, 0
  049a3f0  <unknown>
  049a3f4  li 6, -3056
  049a3f8  vspltw 3, 3, 0
  049a3fc  <unknown>
  049a400  li 4, 152
  049a404  vaddfp 2, 2, 3
  049a408  vmaddfp 2, 5, 2, 4
  049a40c  vctsxs 2, 2, 0
  049a410  vspltw 2, 2, 0
  049a414  stvewx 2, 4, 5
  049a418  bl 0xefb38
  049a41c  nop
  049a420  ld 0, 128(1)
  049a424  mtlr 0
  049a428  addi 1, 1, 112
  049a42c  blr

UpdateMoby_869:   # 0x49a478, 0x13d8 bytes
  049a478  stdu 1, -640(1)
  049a47c  mflr 0
  049a480  std 0, 656(1)
  049a484  stfd 29, 616(1)
  049a488  stfd 30, 624(1)
  049a48c  stfd 31, 632(1)
  049a490  std 31, 608(1)
  049a494  cmpwi 3, 0
  049a498  std 30, 600(1)
  049a49c  std 29, 592(1)
  049a4a0  std 28, 584(1)
  049a4a4  std 27, 576(1)
  049a4a8  std 26, 568(1)
  049a4ac  ori 31, 3, 0
  049a4b0  bt 2, 0x49b81c
  049a4b4  lwz 28, 120(31)
  049a4b8  cmpwi 28, 0
  049a4bc  bt 2, 0x49b81c
  049a4c0  lwz 30, 160(28)
  049a4c4  cmpwi 30, 0
  049a4c8  bt 2, 0x49b81c
  049a4cc  lwz 30, 120(30)
  049a4d0  ori 3, 31, 0
  049a4d4  addic 5, 1, 256
  049a4d8  lfs 1, 140(30)
  049a4dc  bl 0x1118d8
  049a4e0  nop
  049a4e4  ori 3, 31, 0
  049a4e8  addic 27, 28, 32
  049a4ec  lis 4, 35
  049a4f0  li 5, 0
  049a4f4  bl 0x10675c
  049a4f8  nop
  049a4fc  ori 29, 3, 0
  049a500  ori 3, 31, 0
  049a504  addic 7, 1, 336
  049a508  li 9, 0
  049a50c  li 10, 4
  049a510  ori 4, 29, 0
  049a514  ori 5, 27, 0
  049a518  li 6, 0
  049a51c  li 8, 0
  049a520  bl 0x106840
  049a524  nop
  049a528  lwz 3, 336(1)
  049a52c  cmpwi 3, 1
  049a530  bf 1, 0x49a644
  049a534  cmpwi 29, 0
  049a538  bt 2, 0x49a644
  049a53c  lwz 29, 32(29)
  049a540  lhz 29, 166(29)
  049a544  cmpwi 1, 29, 869
  049a548  cmpwi 29, 867
  049a54c  cror 2, 2, 6
  049a550  bt 2, 0x49a644
  049a554  cmpwi 29, 871
  049a558  bt 2, 0x49a644
  049a55c  lis 3, 74
  049a560  li 11, -1
  049a564  addi 3, 3, -23504
  049a568  li 6, 0
  049a56c  li 7, 1
  049a570  addic 4, 28, 96
  049a574  li 5, 0
  049a578  lfs 1, 0(3)
  049a57c  lfs 4, 12(3)
  049a580  li 8, 3
  049a584  lfs 3, 4(3)
  049a588  li 9, 3
  049a58c  lfs 5, 8(3)
  049a590  li 10, 5
  049a594  lfs 7, 16(3)
  049a598  fmr 2, 1
  049a59c  std 11, 144(1)
  049a5a0  ori 3, 31, 0
  049a5a4  std 6, 160(1)
  049a5a8  fmr 6, 4
  049a5ac  std 7, 168(1)
  049a5b0  std 11, 176(1)
  049a5b4  std 6, 184(1)
  049a5b8  bl 0x10e030
  049a5bc  nop
  049a5c0  ori 3, 31, 0
  049a5c4  li 4, 0
  049a5c8  li 5, -1
  049a5cc  bl 0xfd8d0
  049a5d0  nop
  049a5d4  cmpwi 30, 0
  049a5d8  lwz 3, 120(31)
  049a5dc  bt 2, 0x49a638
  049a5e0  li 4, 132
  049a5e4  li 6, 20
  049a5e8  vspltisw 4, -1
  049a5ec  addi 5, 4, 16
  049a5f0  <unknown>
  049a5f4  lis 4, 74
  049a5f8  vslw 4, 4, 4
  049a5fc  <unknown>
  049a600  addi 4, 4, -23504
  049a604  vor 2, 2, 3
  049a608  lis 5, 114
  049a60c  vcfsx 2, 2, 0
  049a610  <unknown>
  049a614  li 4, -3056
  049a618  vspltw 3, 3, 0
  049a61c  <unknown>
  049a620  li 4, 152
  049a624  vaddfp 2, 2, 3
  049a628  vmaddfp 2, 5, 2, 4
  049a62c  vctsxs 2, 2, 0
  049a630  vspltw 2, 2, 0
  049a634  stvewx 2, 4, 3
  049a638  ori 3, 31, 0
  049a63c  bl 0xefb38
  049a640  nop
  049a644  lbz 3, 32(31)
  049a648  cmpwi 3, 1
  049a64c  cmpwi 1, 3, -1
  049a650  cmpwi 6, 3, 0
  049a654  cmpwi 7, 3, 2
  049a658  bt 1, 0x49a668
  049a65c  bf 5, 0x49b804
  049a660  bf 25, 0x49a678
  049a664  b 0x49a8a0
  049a668  bf 29, 0x49add8
  049a66c  cmpwi 3, 3
  049a670  bf 1, 0x49b730
  049a674  b 0x49b804
  049a678  cmpwi 30, 0
  049a67c  bt 2, 0x49b804
  049a680  lis 3, 74
  049a684  lhz 5, 52(31)
  049a688  li 4, 0
  049a68c  addi 3, 3, -23504
  049a690  ori 5, 5, 4096
  049a694  sth 5, 52(31)
  049a698  lfs 4, 0(3)
  049a69c  stw 4, 108(28)
  049a6a0  stw 4, 104(28)
  049a6a4  stw 4, 100(28)
  049a6a8  stw 4, 96(28)
  049a6ac  lfs 1, 16(31)
  049a6b0  stfs 1, 112(28)
  049a6b4  lfs 1, 20(31)
  049a6b8  stfs 1, 116(28)
  049a6bc  lfs 1, 24(31)
  049a6c0  stfs 1, 120(28)
  049a6c4  lfs 1, 28(31)
  049a6c8  stfs 1, 124(28)
  049a6cc  stw 4, 68(31)
  049a6d0  lfs 1, 128(28)
  049a6d4  lfs 2, 16(31)
  049a6d8  lfs 3, 132(28)
  049a6dc  lfs 5, 20(31)
  049a6e0  fsubs 1, 1, 2
  049a6e4  fsubs 2, 3, 5
  049a6e8  lis 3, 115
  049a6ec  addic 3, 3, 22784
  049a6f0  fabs 3, 1
  049a6f4  fabs 5, 2
  049a6f8  stfs 1, 388(1)
  049a6fc  stfs 2, 392(1)
  049a700  fsubs 1, 3, 5
  049a704  stfs 1, 396(1)
  049a708  lwz 4, 388(1)
  049a70c  lfs 1, 388(1)
  049a710  lwz 5, 392(1)
  049a714  lfs 2, 392(1)
  049a718  fabs 1, 1
  049a71c  lwz 6, 396(1)
  049a720  rlwinm 5, 5, 3, 29, 29
  049a724  fabs 6, 2
  049a728  lfs 2, 396(1)
  049a72c  rlwimi 5, 6, 2, 30, 30
  049a730  fsub 7, 2, 4
  049a734  fsub 8, 2, 4
  049a738  rlwimi 5, 4, 4, 28, 28
  049a73c  ori 4, 3, 0
  049a740  rlwimi 4, 5, 2, 26, 28
  049a744  slwi 5, 5, 2
  049a748  clrldi 4, 4, 32
  049a74c  fsel 5, 7, 1, 5
  049a750  lfsx 1, 3, 5
  049a754  lfs 2, 4(4)
  049a758  fsel 3, 8, 6, 3
  049a75c  fcmpu 0, 5, 4
  049a760  bt 1, 0x49a768
  049a764  b 0x49a888
  049a768  fsubs 6, 3, 5
  049a76c  fadds 3, 3, 5
  049a770  addic 3, 1, 16
  049a774  li 7, 2
  049a778  addic 5, 3, 528
  049a77c  addic 4, 3, 512
  049a780  mtctr 7
  049a784  fdivs 3, 6, 3
  049a788  fmuls 5, 3, 3
  049a78c  stfs 3, 540(1)
  049a790  stfs 3, 532(1)
  049a794  stfs 3, 536(1)
  049a798  stfs 3, 528(1)
  049a79c  lfs 7, 540(1)
  049a7a0  lfs 8, 532(1)
  049a7a4  lfs 9, 536(1)
  049a7a8  fmuls 6, 5, 5
  049a7ac  fmuls 8, 8, 5
  049a7b0  fmuls 7, 7, 6
  049a7b4  fmuls 3, 6, 6
  049a7b8  fmuls 6, 9, 6
  049a7bc  stfs 8, 532(1)
  049a7c0  fmuls 5, 7, 5
  049a7c4  stfs 6, 536(1)
  049a7c8  stfs 5, 540(1)
  049a7cc  lfs 5, 512(3)
  049a7d0  fmuls 5, 5, 3
  049a7d4  stfs 5, 528(3)
  049a7d8  lfs 5, 4(4)
  049a7dc  addic 4, 4, 8
  049a7e0  fmuls 5, 5, 3
  049a7e4  addic 3, 3, 8
  049a7e8  stfs 5, 4(5)
  049a7ec  addic 5, 5, 8
  049a7f0  bdnz 0x49a7cc
  049a7f4  li 5, 4
  049a7f8  ori 3, 1, 0
  049a7fc  mtctr 5
  049a800  lis 4, 115
  049a804  addic 5, 3, 528
  049a808  addic 4, 4, 22752
  049a80c  ori 6, 5, 0
  049a810  lfs 3, 528(3)
  049a814  lfs 5, 0(4)
  049a818  fmuls 3, 3, 5
  049a81c  lfs 5, 4(4)
  049a820  addic 4, 4, 8
  049a824  stfs 3, 528(3)
  049a828  lfs 3, 4(5)
  049a82c  addic 3, 3, 8
  049a830  fmuls 3, 3, 5
  049a834  stfs 3, 4(5)
  049a838  addic 5, 5, 8
  049a83c  bdnz 0x49a810
  049a840  ori 3, 1, 0
  049a844  mtctr 7
  049a848  lfs 3, 528(3)
  049a84c  fadds 3, 4, 3
  049a850  addic 3, 3, 16
  049a854  lfs 4, 4(6)
  049a858  lfs 5, 8(6)
  049a85c  lfs 6, 12(6)
  049a860  addic 6, 6, 16
  049a864  fadds 3, 3, 4
  049a868  fadds 4, 3, 5
  049a86c  fadds 4, 4, 6
  049a870  bdnz 0x49a848
  049a874  lis 3, 74
  049a878  addi 3, 3, -23504
  049a87c  lfs 3, 24(3)
  049a880  fadds 4, 4, 3
  049a884  fmadds 4, 4, 1, 2
  049a888  li 3, 0
  049a88c  li 4, 1
  049a890  stfs 4, 72(31)
  049a894  stb 3, 188(31)
  049a898  stb 4, 32(31)
  049a89c  b 0x49b804
  049a8a0  lfs 1, 128(28)
  049a8a4  lfs 2, 16(31)
  049a8a8  lfs 3, 132(28)
  049a8ac  fsubs 2, 1, 2
  049a8b0  lfs 4, 136(28)
  049a8b4  lfs 5, 140(28)
  049a8b8  lis 3, 74
  049a8bc  addi 3, 3, -23504
  049a8c0  lis 29, 115
  049a8c4  addic 29, 29, 22784
  049a8c8  stfs 2, 96(28)
  049a8cc  lfs 2, 20(31)
  049a8d0  fsubs 2, 3, 2
  049a8d4  stfs 2, 100(28)
  049a8d8  lfs 2, 24(31)
  049a8dc  stfs 5, 108(28)
  049a8e0  fsubs 2, 4, 2
  049a8e4  stfs 2, 104(28)
  049a8e8  lfs 2, 16(31)
  049a8ec  lfs 4, 20(31)
  049a8f0  fsubs 1, 1, 2
  049a8f4  fsubs 2, 3, 4
  049a8f8  fabs 3, 1
  049a8fc  fabs 4, 2
  049a900  stfs 1, 376(1)
  049a904  stfs 2, 380(1)
  049a908  fsubs 1, 3, 4
  049a90c  stfs 1, 384(1)
  049a910  lwz 4, 376(1)
  049a914  lfs 31, 0(3)
  049a918  lfs 1, 376(1)
  049a91c  lwz 3, 380(1)
  049a920  lfs 2, 380(1)
  049a924  lwz 5, 384(1)
  049a928  rlwinm 3, 3, 3, 29, 29
  049a92c  fabs 5, 2
  049a930  lfs 2, 384(1)
  049a934  fabs 1, 1
  049a938  rlwimi 3, 5, 2, 30, 30
  049a93c  fsub 6, 2, 31
  049a940  rlwimi 3, 4, 4, 28, 28
  049a944  fsub 7, 2, 31
  049a948  ori 4, 29, 0
  049a94c  rlwimi 4, 3, 2, 26, 28
  049a950  slwi 3, 3, 2
  049a954  clrldi 4, 4, 32
  049a958  fsel 4, 6, 1, 4
  049a95c  lfsx 1, 29, 3
  049a960  lfs 2, 4(4)
  049a964  fsel 3, 7, 5, 3
  049a968  fcmpu 0, 4, 31
  049a96c  bt 1, 0x49a978
  049a970  fmr 1, 31
  049a974  b 0x49aa9c
  049a978  fsubs 5, 3, 4
  049a97c  fadds 3, 3, 4
  049a980  addic 3, 1, 16
  049a984  li 7, 2
  049a988  addic 5, 3, 496
  049a98c  addic 4, 3, 480
  049a990  mtctr 7
  049a994  fdivs 3, 5, 3
  049a998  fmuls 4, 3, 3
  049a99c  stfs 3, 508(1)
  049a9a0  stfs 3, 500(1)
  049a9a4  stfs 3, 504(1)
  049a9a8  stfs 3, 496(1)
  049a9ac  lfs 6, 508(1)
  049a9b0  lfs 7, 500(1)
  049a9b4  lfs 8, 504(1)
  049a9b8  fmuls 5, 4, 4
  049a9bc  fmuls 7, 7, 4
  049a9c0  fmuls 6, 6, 5
  049a9c4  fmuls 3, 5, 5
  049a9c8  fmuls 5, 8, 5
  049a9cc  stfs 7, 500(1)
  049a9d0  fmuls 4, 6, 4
  049a9d4  stfs 5, 504(1)
  049a9d8  stfs 4, 508(1)
  049a9dc  lfs 4, 480(3)
  049a9e0  fmuls 4, 4, 3
  049a9e4  stfs 4, 496(3)
  049a9e8  lfs 4, 4(4)
  049a9ec  addic 4, 4, 8
  049a9f0  fmuls 4, 4, 3
  049a9f4  addic 3, 3, 8
  049a9f8  stfs 4, 4(5)
  049a9fc  addic 5, 5, 8
  049aa00  bdnz 0x49a9dc
  049aa04  li 5, 4
  049aa08  ori 3, 1, 0
  049aa0c  mtctr 5
  049aa10  lis 4, 115
  049aa14  addic 5, 3, 496
  049aa18  addic 4, 4, 22752
  049aa1c  ori 6, 5, 0
  049aa20  lfs 3, 496(3)
  049aa24  lfs 4, 0(4)
  049aa28  fmuls 3, 3, 4
  049aa2c  lfs 4, 4(4)
  049aa30  addic 4, 4, 8
  049aa34  stfs 3, 496(3)
  049aa38  lfs 3, 4(5)
  049aa3c  addic 3, 3, 8
  049aa40  fmuls 3, 3, 4
  049aa44  stfs 3, 4(5)
  049aa48  addic 5, 5, 8
  049aa4c  bdnz 0x49aa20
  049aa50  ori 3, 1, 0
  049aa54  fmr 3, 31
  049aa58  mtctr 7
  049aa5c  lfs 4, 496(3)
  049aa60  fadds 3, 3, 4
  049aa64  lfs 4, 4(6)
  049aa68  addic 3, 3, 16
  049aa6c  lfs 5, 8(6)
  049aa70  lfs 6, 12(6)
  049aa74  addic 6, 6, 16
  049aa78  fadds 3, 3, 4
  049aa7c  fadds 3, 3, 5
  049aa80  fadds 3, 3, 6
  049aa84  bdnz 0x49aa5c
  049aa88  lis 3, 74
  049aa8c  addi 3, 3, -23504
  049aa90  lfs 4, 24(3)
  049aa94  fadds 3, 3, 4
  049aa98  fmadds 1, 3, 1, 2
  049aa9c  lis 3, 74
  049aaa0  lis 6, 114
  049aaa4  addi 3, 3, -23504
  049aaa8  lis 4, 114
  049aaac  addic 5, 28, 164
  049aab0  lfs 4, 28(3)
  049aab4  lfs 3, 32(3)
  049aab8  lfs 2, -3048(6)
  049aabc  lfs 5, -3052(4)
  049aac0  ori 3, 31, 0
  049aac4  fmuls 2, 2, 4
  049aac8  fmuls 3, 5, 3
  049aacc  fmuls 4, 5, 4
  049aad0  bl 0xff2e8
  049aad4  nop
  049aad8  lfs 1, 128(28)
  049aadc  stfs 1, 16(31)
  049aae0  lfs 2, 132(28)
  049aae4  lwz 3, 320(1)
  049aae8  stfs 2, 20(31)
  049aaec  lfs 3, 136(28)
  049aaf0  cmpwi 3, 0
  049aaf4  stfs 3, 24(31)
  049aaf8  lfs 4, 140(28)
  049aafc  stfs 4, 28(31)
  049ab00  bt 2, 0x49b804
  049ab04  lfs 4, 260(1)
  049ab08  fmr 5, 3
  049ab0c  lfs 3, 256(1)
  049ab10  fsubs 6, 2, 4
  049ab14  fsubs 7, 1, 3
  049ab18  lfs 8, 264(1)
  049ab1c  fsubs 5, 5, 8
  049ab20  fmuls 6, 6, 6
  049ab24  fmadds 6, 7, 7, 6
  049ab28  fmadds 5, 5, 5, 6
  049ab2c  lfs 6, 140(30)
  049ab30  fsqrts 5, 5
  049ab34  fcmpu 0, 5, 6
  049ab38  cror 6, 1, 2
  049ab3c  bt 6, 0x49b804
  049ab40  lwz 3, 160(28)
  049ab44  lfs 5, 20(3)
  049ab48  lfs 6, 16(3)
  049ab4c  fsubs 5, 2, 5
  049ab50  fsubs 6, 1, 6
  049ab54  lis 3, 74
  049ab58  addi 3, 3, -23504
  049ab5c  fmuls 5, 5, 5
  049ab60  fmadds 5, 6, 6, 5
  049ab64  lfs 6, 4(3)
  049ab68  fsqrts 5, 5
  049ab6c  fcmpu 0, 5, 6
  049ab70  cror 6, 0, 2
  049ab74  bt 6, 0x49b804
  049ab78  fsubs 2, 4, 2
  049ab7c  fsubs 1, 3, 1
  049ab80  fabs 5, 2
  049ab84  fabs 4, 1
  049ab88  stfs 1, 364(1)
  049ab8c  stfs 2, 368(1)
  049ab90  lfs 1, 72(31)
  049ab94  fsubs 2, 4, 5
  049ab98  stfs 2, 372(1)
  049ab9c  lwz 3, 364(1)
  049aba0  lfs 2, 364(1)
  049aba4  lwz 4, 368(1)
  049aba8  lfs 3, 368(1)
  049abac  lwz 5, 372(1)
  049abb0  rlwinm 4, 4, 3, 29, 29
  049abb4  lfs 6, 372(1)
  049abb8  fabs 2, 2
  049abbc  rlwimi 4, 5, 2, 30, 30
  049abc0  fabs 3, 3
  049abc4  fsub 7, 6, 31
  049abc8  fsub 6, 6, 31
  049abcc  rlwimi 4, 3, 4, 28, 28
  049abd0  ori 3, 29, 0
  049abd4  rlwimi 3, 4, 2, 26, 28
  049abd8  slwi 4, 4, 2
  049abdc  clrldi 3, 3, 32
  049abe0  fsel 5, 7, 2, 5
  049abe4  lfsx 2, 29, 4
  049abe8  fsel 4, 6, 3, 4
  049abec  lfs 3, 4(3)
  049abf0  fcmpu 0, 5, 31
  049abf4  bt 1, 0x49abfc
  049abf8  b 0x49ad1c
  049abfc  fsubs 6, 4, 5
  049ac00  fadds 4, 4, 5
  049ac04  addic 3, 1, 16
  049ac08  li 7, 2
  049ac0c  addic 4, 3, 448
  049ac10  addic 5, 3, 464
  049ac14  mtctr 7
  049ac18  fdivs 4, 6, 4
  049ac1c  fmuls 5, 4, 4
  049ac20  stfs 4, 476(1)
  049ac24  stfs 4, 468(1)
  049ac28  stfs 4, 472(1)
  049ac2c  stfs 4, 464(1)
  049ac30  lfs 7, 476(1)
  049ac34  lfs 8, 468(1)
  049ac38  lfs 9, 472(1)
  049ac3c  fmuls 6, 5, 5
  049ac40  fmuls 8, 8, 5
  049ac44  fmuls 7, 7, 6
  049ac48  fmuls 4, 6, 6
  049ac4c  fmuls 6, 9, 6
  049ac50  stfs 8, 468(1)
  049ac54  fmuls 5, 7, 5
  049ac58  stfs 6, 472(1)
  049ac5c  stfs 5, 476(1)
  049ac60  lfs 5, 448(3)
  049ac64  fmuls 5, 5, 4
  049ac68  stfs 5, 464(3)
  049ac6c  lfs 5, 4(4)
  049ac70  addic 3, 3, 8
  049ac74  addic 4, 4, 8
  049ac78  fmuls 5, 5, 4
  049ac7c  stfs 5, 4(5)
  049ac80  addic 5, 5, 8
  049ac84  bdnz 0x49ac60
  049ac88  li 5, 4
  049ac8c  ori 3, 1, 0
  049ac90  mtctr 5
  049ac94  lis 4, 115
  049ac98  addic 5, 3, 464
  049ac9c  addic 4, 4, 22752
  049aca0  ori 6, 5, 0
  049aca4  lfs 4, 464(3)
  049aca8  lfs 5, 0(4)
  049acac  fmuls 4, 4, 5
  049acb0  lfs 5, 4(4)
  049acb4  addic 4, 4, 8
  049acb8  stfs 4, 464(3)
  049acbc  lfs 4, 4(5)
  049acc0  addic 3, 3, 8
  049acc4  fmuls 4, 4, 5
  049acc8  stfs 4, 4(5)
  049accc  addic 5, 5, 8
  049acd0  bdnz 0x49aca4
  049acd4  ori 3, 1, 0
  049acd8  mtctr 7
  049acdc  lfs 4, 464(3)
  049ace0  lfs 5, 4(6)
  049ace4  fadds 4, 31, 4
  049ace8  lfs 6, 8(6)
  049acec  lfs 31, 12(6)
  049acf0  addic 3, 3, 16
  049acf4  addic 6, 6, 16
  049acf8  fadds 4, 4, 5
  049acfc  fadds 4, 4, 6
  049ad00  fadds 31, 4, 31
  049ad04  bdnz 0x49acdc
  049ad08  lis 3, 74
  049ad0c  addi 3, 3, -23504
  049ad10  lfs 4, 24(3)
  049ad14  fadds 31, 31, 4
  049ad18  fmadds 31, 31, 2, 3
  049ad1c  fmr 2, 31
  049ad20  bl 0x5026a0
  049ad24  nop
  049ad28  lis 3, 74
  049ad2c  lfs 2, 136(30)
  049ad30  addi 3, 3, -23504
  049ad34  lfs 3, 36(3)
  049ad38  fmuls 2, 2, 3
  049ad3c  fcmpu 0, 1, 2
  049ad40  cror 6, 1, 2
  049ad44  bt 6, 0x49b804
  049ad48  lis 3, 114
  049ad4c  lfs 1, 124(30)
  049ad50  lis 4, 74
  049ad54  vspltisw 2, -1
  049ad58  lis 5, 114
  049ad5c  li 6, -3056
  049ad60  lfs 2, -3052(3)
  049ad64  addi 3, 4, -23504
  049ad68  vslw 2, 2, 2
  049ad6c  fmuls 1, 1, 2
  049ad70  li 4, 40
  049ad74  li 7, 1
  049ad78  li 8, 44
  049ad7c  li 9, 172
  049ad80  li 10, 2
  049ad84  stfs 1, 156(28)
  049ad88  <unknown>
  049ad8c  <unknown>
  049ad90  li 4, 152
  049ad94  vspltw 3, 3, 0
  049ad98  vmaddfp 2, 4, 3, 2
  049ad9c  vspltisw 3, -1
  049ada0  vslw 3, 3, 3
  049ada4  vctsxs 2, 2, 0
  049ada8  vspltw 2, 2, 0
  049adac  stvewx 2, 4, 28
  049adb0  stb 7, 188(31)
  049adb4  <unknown>
  049adb8  <unknown>
  049adbc  vspltw 2, 2, 0
  049adc0  vmaddfp 2, 4, 2, 3
  049adc4  vctsxs 2, 2, 0
  049adc8  vspltw 2, 2, 0
  049adcc  stvewx 2, 9, 28
  049add0  stb 10, 32(31)
  049add4  b 0x49b804
  049add8  lbz 3, 188(31)
  049addc  cmpwi 3, 1
  049ade0  cmpwi 1, 3, 2
  049ade4  bf 2, 0x49ae64
  049ade8  lis 3, 74
  049adec  lis 4, 114
  049adf0  lfs 1, 24(31)
  049adf4  addi 3, 3, -23504
  049adf8  lfs 2, 48(3)
  049adfc  lfs 3, -3064(4)
  049ae00  addic 3, 28, 172
  049ae04  fmadds 1, 3, 2, 1
  049ae08  stfs 1, 24(31)
  049ae0c  bl 0x4fff60
  049ae10  nop
  049ae14  cmpwi 3, 0
  049ae18  bt 2, 0x49aea4
  049ae1c  lis 3, 74
  049ae20  vspltisw 2, -1
  049ae24  li 5, 44
  049ae28  addi 3, 3, -23504
  049ae2c  lis 4, 114
  049ae30  li 6, -3056
  049ae34  vslw 2, 2, 2
  049ae38  <unknown>
  049ae3c  li 3, 172
  049ae40  vspltw 3, 3, 0
  049ae44  <unknown>
  049ae48  li 4, 2
  049ae4c  vmaddfp 2, 4, 3, 2
  049ae50  vctsxs 2, 2, 0
  049ae54  vspltw 2, 2, 0
  049ae58  stvewx 2, 3, 28
  049ae5c  stb 4, 188(31)
  049ae60  b 0x49aea4
  049ae64  bf 6, 0x49aea4
  049ae68  lis 3, 74
  049ae6c  lis 4, 114
  049ae70  lfs 1, 24(31)
  049ae74  addi 3, 3, -23504
  049ae78  lfs 2, 48(3)
  049ae7c  lfs 3, -3064(4)
  049ae80  addic 3, 28, 172
  049ae84  fnmsubs 1, 3, 2, 1
  049ae88  stfs 1, 24(31)
  049ae8c  bl 0x4fff60
  049ae90  nop
  049ae94  cmpwi 3, 0
  049ae98  bt 2, 0x49aea4
  049ae9c  li 3, 0
  049aea0  stb 3, 188(31)
  049aea4  lfs 1, 256(1)
  049aea8  lfs 2, 16(31)
  049aeac  lfs 3, 260(1)
  049aeb0  lis 3, 74
  049aeb4  lfs 4, 20(31)
  049aeb8  fsubs 1, 1, 2
  049aebc  addi 3, 3, -23504
  049aec0  fsubs 2, 3, 4
  049aec4  lis 29, 115
  049aec8  addic 29, 29, 22784
  049aecc  fabs 3, 1
  049aed0  fabs 4, 2
  049aed4  stfs 1, 352(1)
  049aed8  stfs 2, 356(1)
  049aedc  fsubs 1, 3, 4
  049aee0  stfs 1, 360(1)
  049aee4  lwz 4, 352(1)
  049aee8  lfs 31, 0(3)
  049aeec  lfs 1, 352(1)
  049aef0  lwz 3, 356(1)
  049aef4  lfs 2, 356(1)
  049aef8  fabs 1, 1
  049aefc  lwz 5, 360(1)
  049af00  rlwinm 3, 3, 3, 29, 29
  049af04  fabs 5, 2
  049af08  lfs 2, 360(1)
  049af0c  rlwimi 3, 5, 2, 30, 30
  049af10  fsub 6, 2, 31
  049af14  rlwimi 3, 4, 4, 28, 28
  049af18  fsub 7, 2, 31
  049af1c  ori 4, 29, 0
  049af20  rlwimi 4, 3, 2, 26, 28
  049af24  slwi 3, 3, 2
  049af28  clrldi 4, 4, 32
  049af2c  fsel 4, 6, 1, 4
  049af30  lfsx 1, 29, 3
  049af34  lfs 2, 4(4)
  049af38  fsel 3, 7, 5, 3
  049af3c  fcmpu 0, 4, 31
  049af40  bt 1, 0x49af4c
  049af44  fmr 1, 31
  049af48  b 0x49b070
  049af4c  fsubs 5, 3, 4
  049af50  fadds 3, 3, 4
  049af54  addic 3, 1, 16
  049af58  li 6, 2
  049af5c  addic 4, 3, 416
  049af60  addic 5, 3, 432
  049af64  mtctr 6
  049af68  fdivs 3, 5, 3
  049af6c  fmuls 4, 3, 3
  049af70  stfs 3, 444(1)
  049af74  stfs 3, 436(1)
  049af78  stfs 3, 440(1)
  049af7c  stfs 3, 432(1)
  049af80  lfs 6, 444(1)
  049af84  lfs 7, 436(1)
  049af88  lfs 8, 440(1)
  049af8c  fmuls 5, 4, 4
  049af90  fmuls 7, 7, 4
  049af94  fmuls 6, 6, 5
  049af98  fmuls 3, 5, 5
  049af9c  fmuls 5, 8, 5
  049afa0  stfs 7, 436(1)
  049afa4  fmuls 4, 6, 4
  049afa8  stfs 5, 440(1)
  049afac  stfs 4, 444(1)
  049afb0  lfs 4, 416(3)
  049afb4  fmuls 4, 4, 3
  049afb8  stfs 4, 432(3)
  049afbc  lfs 4, 4(4)
  049afc0  addic 3, 3, 8
  049afc4  addic 4, 4, 8
  049afc8  fmuls 4, 4, 3
  049afcc  stfs 4, 4(5)
  049afd0  addic 5, 5, 8
  049afd4  bdnz 0x49afb0
  049afd8  li 5, 4
  049afdc  ori 3, 1, 0
  049afe0  mtctr 5
  049afe4  lis 4, 115
  049afe8  addic 5, 3, 432
  049afec  addic 4, 4, 22752
  049aff0  ori 7, 5, 0
  049aff4  lfs 3, 432(3)
  049aff8  lfs 4, 0(4)
  049affc  fmuls 3, 3, 4
  049b000  lfs 4, 4(4)
  049b004  addic 4, 4, 8
  049b008  stfs 3, 432(3)
  049b00c  lfs 3, 4(5)
  049b010  addic 3, 3, 8
  049b014  fmuls 3, 3, 4
  049b018  stfs 3, 4(5)
  049b01c  addic 5, 5, 8
  049b020  bdnz 0x49aff4
  049b024  fmr 3, 31
  049b028  ori 3, 1, 0
  049b02c  mtctr 6
  049b030  lfs 4, 432(3)
  049b034  fadds 3, 3, 4
  049b038  addic 3, 3, 16
  049b03c  lfs 4, 4(7)
  049b040  lfs 5, 8(7)
  049b044  lfs 6, 12(7)
  049b048  addic 7, 7, 16
  049b04c  fadds 3, 3, 4
  049b050  fadds 3, 3, 5
  049b054  fadds 3, 3, 6
  049b058  bdnz 0x49b030
  049b05c  lis 3, 74
  049b060  addi 3, 3, -23504
  049b064  lfs 4, 24(3)
  049b068  fadds 3, 3, 4
  049b06c  fmadds 1, 3, 1, 2
  049b070  lis 3, 74
  049b074  lis 26, 114
  049b078  addi 3, 3, -23504
  049b07c  lis 27, 114
  049b080  addic 5, 28, 164
  049b084  lfs 30, 32(3)
  049b088  lfs 29, 28(3)
  049b08c  lfs 2, -3048(26)
  049b090  ori 3, 31, 0
  049b094  lfs 4, -3052(27)
  049b098  fmuls 2, 2, 30
  049b09c  fmuls 3, 4, 30
  049b0a0  fmuls 4, 4, 29
  049b0a4  bl 0xff2e8
  049b0a8  nop
  049b0ac  lwz 3, 320(1)
  049b0b0  lfs 1, 20(31)
  049b0b4  lfs 2, 16(31)
  049b0b8  lfs 3, 20(3)
  049b0bc  lfs 4, 16(3)
  049b0c0  fsubs 1, 1, 3
  049b0c4  fsubs 2, 2, 4
  049b0c8  lfs 5, 24(3)
  049b0cc  lfs 6, 24(31)
  049b0d0  fsubs 5, 5, 6
  049b0d4  fmuls 1, 1, 1
  049b0d8  fabs 7, 5
  049b0dc  fmadds 1, 2, 2, 1
  049b0e0  fsqrts 2, 1
  049b0e4  lfs 1, 68(31)
  049b0e8  lfs 3, -3048(26)
  049b0ec  lfs 4, -3052(27)
  049b0f0  stfs 5, 344(1)
  049b0f4  fabs 6, 2
  049b0f8  stfs 2, 340(1)
  049b0fc  lwz 3, 344(1)
  049b100  rlwinm 3, 3, 3, 29, 29
  049b104  fsubs 2, 6, 7
  049b108  stfs 2, 348(1)
  049b10c  lwz 4, 340(1)
  049b110  lfs 2, 340(1)
  049b114  lfs 5, 344(1)
  049b118  lwz 5, 348(1)
  049b11c  lfs 8, 348(1)
  049b120  fabs 2, 2
  049b124  rlwimi 3, 5, 2, 30, 30
  049b128  fabs 5, 5
  049b12c  fsub 9, 8, 31
  049b130  fsub 8, 8, 31
  049b134  rlwimi 3, 4, 4, 28, 28
  049b138  ori 4, 29, 0
  049b13c  rlwimi 4, 3, 2, 26, 28
  049b140  slwi 3, 3, 2
  049b144  clrldi 4, 4, 32
  049b148  fsel 7, 9, 2, 7
  049b14c  lfsx 2, 29, 3
  049b150  fsel 6, 8, 5, 6
  049b154  lfs 5, 4(4)
  049b158  fcmpu 0, 7, 31
  049b15c  bt 1, 0x49b168
  049b160  fmr 2, 31
  049b164  b 0x49b28c
  049b168  fsubs 8, 6, 7
  049b16c  fadds 6, 6, 7
  049b170  addic 3, 1, 16
  049b174  li 7, 2
  049b178  addic 5, 3, 400
  049b17c  addic 4, 3, 384
  049b180  mtctr 7
  049b184  fdivs 6, 8, 6
  049b188  fmuls 7, 6, 6
  049b18c  stfs 6, 412(1)
  049b190  stfs 6, 404(1)
  049b194  stfs 6, 408(1)
  049b198  stfs 6, 400(1)
  049b19c  lfs 9, 412(1)
  049b1a0  lfs 10, 404(1)
  049b1a4  lfs 11, 408(1)
  049b1a8  fmuls 8, 7, 7
  049b1ac  fmuls 10, 10, 7
  049b1b0  fmuls 9, 9, 8
  049b1b4  fmuls 6, 8, 8
  049b1b8  fmuls 8, 11, 8
  049b1bc  stfs 10, 404(1)
  049b1c0  fmuls 7, 9, 7
  049b1c4  stfs 8, 408(1)
  049b1c8  stfs 7, 412(1)
  049b1cc  lfs 7, 384(3)
  049b1d0  fmuls 7, 7, 6
  049b1d4  stfs 7, 400(3)
  049b1d8  lfs 7, 4(4)
  049b1dc  addic 4, 4, 8
  049b1e0  fmuls 7, 7, 6
  049b1e4  addic 3, 3, 8
  049b1e8  stfs 7, 4(5)
  049b1ec  addic 5, 5, 8
  049b1f0  bdnz 0x49b1cc
  049b1f4  li 5, 4
  049b1f8  ori 3, 1, 0
  049b1fc  mtctr 5
  049b200  lis 4, 115
  049b204  addic 5, 3, 400
  049b208  addic 4, 4, 22752
  049b20c  ori 6, 5, 0
  049b210  lfs 6, 400(3)
  049b214  lfs 7, 0(4)
  049b218  fmuls 6, 6, 7
  049b21c  lfs 7, 4(4)
  049b220  addic 4, 4, 8
  049b224  stfs 6, 400(3)
  049b228  lfs 6, 4(5)
  049b22c  addic 3, 3, 8
  049b230  fmuls 6, 6, 7
  049b234  stfs 6, 4(5)
  049b238  addic 5, 5, 8
  049b23c  bdnz 0x49b210
  049b240  ori 3, 1, 0
  049b244  fmr 6, 31
  049b248  mtctr 7
  049b24c  lfs 7, 400(3)
  049b250  fadds 6, 6, 7
  049b254  lfs 7, 4(6)
  049b258  addic 3, 3, 16
  049b25c  lfs 8, 8(6)
  049b260  lfs 9, 12(6)
  049b264  addic 6, 6, 16
  049b268  fadds 6, 6, 7
  049b26c  fadds 6, 6, 8
  049b270  fadds 6, 6, 9
  049b274  bdnz 0x49b24c
  049b278  lis 3, 74
  049b27c  addi 3, 3, -23504
  049b280  lfs 7, 24(3)
  049b284  fadds 6, 6, 7
  049b288  fmadds 2, 6, 2, 5
  049b28c  fmuls 6, 4, 30
  049b290  addic 5, 28, 168
  049b294  fmuls 5, 4, 29
  049b298  fmuls 3, 3, 30
  049b29c  fmr 4, 6
  049b2a0  bl 0xff190
  049b2a4  nop
  049b2a8  lfs 2, 256(1)
  049b2ac  stfs 1, 68(31)
  049b2b0  lis 3, 114
  049b2b4  lfs 1, 16(31)
  049b2b8  lis 4, 114
  049b2bc  lfs 3, 260(1)
  049b2c0  lfs 4, 20(31)
  049b2c4  lfs 5, 264(1)
  049b2c8  fsubs 1, 2, 1
  049b2cc  lfs 6, 24(31)
  049b2d0  fsubs 2, 3, 4
  049b2d4  lbz 5, 188(31)
  049b2d8  fsubs 3, 5, 6
  049b2dc  lfs 4, -3048(3)
  049b2e0  cmpwi 5, 0
  049b2e4  lfs 5, 96(28)
  049b2e8  lfs 6, 100(28)
  049b2ec  lfs 7, 104(28)
  049b2f0  lfs 8, -3052(4)
  049b2f4  bt 2, 0x49b2fc
  049b2f8  fmr 3, 31
  049b2fc  fmuls 9, 2, 2
  049b300  lis 3, 74
  049b304  addi 3, 3, -23504
  049b308  lfs 10, 52(3)
  049b30c  fmadds 9, 1, 1, 9
  049b310  fmuls 4, 4, 10
  049b314  fmadds 9, 3, 3, 9
  049b318  fsqrts 9, 9
  049b31c  fdivs 4, 4, 9
  049b320  fsub 10, 31, 9
  049b324  fsub 12, 31, 9
  049b328  fsub 13, 31, 9
  049b32c  fsub 11, 9, 31
  049b330  fsub 0, 9, 31
  049b334  fsub 9, 9, 31
  049b338  fmuls 2, 2, 4
  049b33c  fmuls 1, 1, 4
  049b340  fmuls 3, 3, 4
  049b344  fsel 4, 10, 31, 2
  049b348  fsel 10, 12, 31, 1
  049b34c  fsel 12, 13, 31, 3
  049b350  fsel 2, 11, 4, 2
  049b354  fsel 4, 0, 10, 1
  049b358  fsel 3, 9, 12, 3
  049b35c  fadds 1, 6, 2
  049b360  fadds 5, 5, 4
  049b364  fadds 2, 7, 3
  049b368  fmuls 3, 1, 1
  049b36c  stfs 5, 96(28)
  049b370  stfs 1, 100(28)
  049b374  stfs 2, 104(28)
  049b378  fmadds 3, 5, 5, 3
  049b37c  fmadds 4, 2, 2, 3
  049b380  lfs 3, 56(3)
  049b384  fmuls 3, 8, 3
  049b388  fsqrts 4, 4
  049b38c  fcmpu 0, 3, 4
  049b390  cror 6, 1, 2
  049b394  bt 6, 0x49b3b4
  049b398  fdivs 3, 3, 4
  049b39c  fmuls 5, 5, 3
  049b3a0  fmuls 1, 1, 3
  049b3a4  fmuls 2, 2, 3
  049b3a8  stfs 5, 96(28)
  049b3ac  stfs 1, 100(28)
  049b3b0  stfs 2, 104(28)
  049b3b4  lfs 1, 16(31)
  049b3b8  lfs 2, 20(31)
  049b3bc  fadds 1, 1, 5
  049b3c0  lfs 3, 24(31)
  049b3c4  lis 3, 74
  049b3c8  addi 3, 3, -23504
  049b3cc  stfs 1, 16(31)
  049b3d0  lfs 4, 100(28)
  049b3d4  fadds 2, 2, 4
  049b3d8  stfs 2, 20(31)
  049b3dc  lfs 4, 104(28)
  049b3e0  fadds 3, 3, 4
  049b3e4  stfs 3, 24(31)
  049b3e8  lfs 4, 116(28)
  049b3ec  lfs 5, 112(28)
  049b3f0  fsubs 2, 2, 4
  049b3f4  fsubs 1, 1, 5
  049b3f8  lfs 4, 120(28)
  049b3fc  fsubs 3, 3, 4
  049b400  fmuls 2, 2, 2
  049b404  fmadds 1, 1, 1, 2
  049b408  lfs 2, 60(3)
  049b40c  fmadds 1, 3, 3, 1
  049b410  fsqrts 1, 1
  049b414  fcmpu 0, 1, 2
  049b418  cror 6, 0, 2
  049b41c  bt 6, 0x49b490
  049b420  cmpwi 30, 0
  049b424  lwz 3, 120(31)
  049b428  bt 2, 0x49b484
  049b42c  li 4, 132
  049b430  vspltisw 4, -1
  049b434  lis 6, 74
  049b438  addi 5, 4, 16
  049b43c  vslw 4, 4, 4
  049b440  <unknown>
  049b444  addi 4, 6, -23504
  049b448  <unknown>
  049b44c  li 5, 20
  049b450  vor 2, 2, 3
  049b454  vcfsx 2, 2, 0
  049b458  <unknown>
  049b45c  lis 4, 114
  049b460  vspltw 3, 3, 0
  049b464  li 5, -3056
  049b468  <unknown>
  049b46c  li 4, 152
  049b470  vaddfp 2, 2, 3
  049b474  vmaddfp 2, 5, 2, 4
  049b478  vctsxs 2, 2, 0
  049b47c  vspltw 2, 2, 0
  049b480  stvewx 2, 4, 3
  049b484  ori 3, 31, 0
  049b488  bl 0xefb38
  049b48c  nop
  049b490  lis 3, 74
  049b494  addic 29, 28, 96
  049b498  addi 27, 3, -23504
  049b49c  addic 26, 1, 208
  049b4a0  lis 5, 1
  049b4a4  ori 7, 29, 0
  049b4a8  ori 3, 26, 0
  049b4ac  lfs 30, 12(27)
  049b4b0  ori 4, 31, 0
  049b4b4  ori 5, 5, 1
  049b4b8  fmr 1, 30
  049b4bc  bl 0x10581c
  049b4c0  nop
  049b4c4  lfs 1, 16(31)
  049b4c8  addic 3, 1, 192
  049b4cc  lfs 2, 20(31)
  049b4d0  li 5, 16
  049b4d4  stfs 1, 192(1)
  049b4d8  ori 6, 31, 0
  049b4dc  lfs 1, 28(31)
  049b4e0  ori 7, 26, 0
  049b4e4  stfs 2, 196(1)
  049b4e8  stfs 1, 204(1)
  049b4ec  lfs 1, 64(27)
  049b4f0  lfs 2, 24(31)
  049b4f4  fadds 2, 2, 1
  049b4f8  stfs 2, 200(1)
  049b4fc  bl 0x5e598
  049b500  nop
  049b504  cmpwi 3, 0
  049b508  bt 2, 0x49b610
  049b50c  lis 3, 161
  049b510  addic 3, 3, 2368
  049b514  lwz 3, 24(3)
  049b518  cmpwi 3, 0
  049b51c  bt 2, 0x49b610
  049b520  lhz 3, 166(3)
  049b524  cmpwi 1, 3, 869
  049b528  cmpwi 3, 867
  049b52c  cror 2, 2, 6
  049b530  bt 2, 0x49b610
  049b534  cmpwi 3, 871
  049b538  bt 2, 0x49b610
  049b53c  lis 3, 74
  049b540  fmr 1, 31
  049b544  li 12, -1
  049b548  fmr 2, 31
  049b54c  addi 6, 3, -23504
  049b550  fmr 4, 30
  049b554  li 7, 0
  049b558  fmr 6, 30
  049b55c  li 11, 1
  049b560  ori 3, 31, 0
  049b564  ori 4, 29, 0
  049b568  lfs 3, 4(6)
  049b56c  lfs 5, 8(6)
  049b570  li 5, 0
  049b574  lfs 7, 16(6)
  049b578  li 8, 3
  049b57c  std 12, 144(1)
  049b580  li 9, 3
  049b584  std 7, 160(1)
  049b588  li 10, 5
  049b58c  std 11, 168(1)
  049b590  std 12, 176(1)
  049b594  std 7, 184(1)
  049b598  bl 0x10e030
  049b59c  nop
  049b5a0  cmpwi 30, 0
  049b5a4  lwz 29, 120(31)
  049b5a8  bt 2, 0x49b604
  049b5ac  li 3, 132
  049b5b0  vspltisw 4, -1
  049b5b4  lis 5, 74
  049b5b8  addi 4, 3, 16
  049b5bc  vslw 4, 4, 4
  049b5c0  <unknown>
  049b5c4  addi 3, 5, -23504
  049b5c8  <unknown>
  049b5cc  li 4, 20
  049b5d0  vor 2, 2, 3
  049b5d4  vcfsx 2, 2, 0
  049b5d8  <unknown>
  049b5dc  lis 3, 114
  049b5e0  vspltw 3, 3, 0
  049b5e4  li 4, -3056
  049b5e8  <unknown>
  049b5ec  li 3, 152
  049b5f0  vaddfp 2, 2, 3
  049b5f4  vmaddfp 2, 5, 2, 4
  049b5f8  vctsxs 2, 2, 0
  049b5fc  vspltw 2, 2, 0
  049b600  stvewx 2, 3, 29
  049b604  ori 3, 31, 0
  049b608  bl 0xefb38
  049b60c  nop
  049b610  lis 3, 74
  049b614  lfs 1, 16(31)
  049b618  li 5, 0
  049b61c  addi 3, 3, -23504
  049b620  lfs 2, 20(31)
  049b624  stfs 1, 192(1)
  049b628  ori 6, 31, 0
  049b62c  lfs 1, 28(31)
  049b630  stfs 2, 196(1)
  049b634  stfs 1, 204(1)
  049b638  lfs 1, 68(3)
  049b63c  lfs 2, 24(31)
  049b640  addic 3, 1, 192
  049b644  fadds 2, 2, 1
  049b648  stfs 2, 200(1)
  049b64c  bl 0x59e20
  049b650  nop
  049b654  ori 4, 3, 0
  049b658  lwz 3, 120(31)
  049b65c  cmpwi 4, 0
  049b660  bt 2, 0x49b6b4
  049b664  lis 4, 161
  049b668  lfs 1, 192(1)
  049b66c  lfs 2, 196(1)
  049b670  addic 4, 4, 2368
  049b674  lfs 3, 48(4)
  049b678  lfs 4, 52(4)
  049b67c  fsubs 1, 3, 1
  049b680  lfs 3, 56(4)
  049b684  lfs 5, 200(1)
  049b688  fsubs 2, 4, 2
  049b68c  lfs 4, 16(31)
  049b690  fsubs 3, 3, 5
  049b694  lfs 5, 20(31)
  049b698  lfs 6, 24(31)
  049b69c  fadds 1, 4, 1
  049b6a0  fadds 2, 5, 2
  049b6a4  fadds 3, 6, 3
  049b6a8  stfs 1, 16(31)
  049b6ac  stfs 2, 20(31)
  049b6b0  stfs 3, 24(31)
  049b6b4  lwz 4, 152(28)
  049b6b8  cmpwi 4, 0
  049b6bc  bf 2, 0x49b804
  049b6c0  cmpwi 30, 0
  049b6c4  bt 2, 0x49b720
  049b6c8  li 4, 132
  049b6cc  li 6, 20
  049b6d0  vspltisw 4, -1
  049b6d4  addi 5, 4, 16
  049b6d8  <unknown>
  049b6dc  lis 4, 74
  049b6e0  vslw 4, 4, 4
  049b6e4  <unknown>
  049b6e8  addi 4, 4, -23504
  049b6ec  vor 2, 2, 3
  049b6f0  lis 5, 114
  049b6f4  vcfsx 2, 2, 0
  049b6f8  <unknown>
  049b6fc  li 4, -3056
  049b700  vspltw 3, 3, 0
  049b704  <unknown>
  049b708  li 4, 152
  049b70c  vaddfp 2, 2, 3
  049b710  vmaddfp 2, 5, 2, 4
  049b714  vctsxs 2, 2, 0
  049b718  vspltw 2, 2, 0
  049b71c  stvewx 2, 4, 3
  049b720  ori 3, 31, 0
  049b724  bl 0xefb38
  049b728  nop
  049b72c  b 0x49b804
  049b730  lis 3, 74
  049b734  li 11, -1
  049b738  addi 5, 3, -23504
  049b73c  li 6, 0
  049b740  li 7, 1
  049b744  addic 4, 28, 96
  049b748  ori 3, 31, 0
  049b74c  lfs 1, 0(5)
  049b750  li 8, 3
  049b754  lfs 4, 12(5)
  049b758  li 9, 3
  049b75c  lfs 3, 4(5)
  049b760  li 10, 5
  049b764  lfs 5, 8(5)
  049b768  fmr 2, 1
  049b76c  lfs 7, 16(5)
  049b770  fmr 6, 4
  049b774  std 11, 144(1)
  049b778  li 5, 0
  049b77c  std 6, 160(1)
  049b780  std 7, 168(1)
  049b784  std 11, 176(1)
  049b788  std 6, 184(1)
  049b78c  bl 0x10e030
  049b790  nop
  049b794  cmpwi 30, 0
  049b798  lwz 28, 120(31)
  049b79c  bt 2, 0x49b7f8
  049b7a0  li 3, 132
  049b7a4  li 5, 20
  049b7a8  vspltisw 4, -1
  049b7ac  addi 4, 3, 16
  049b7b0  <unknown>
  049b7b4  lis 3, 74
  049b7b8  vslw 4, 4, 4
  049b7bc  <unknown>
  049b7c0  addi 3, 3, -23504
  049b7c4  vor 2, 2, 3
  049b7c8  lis 4, 114
  049b7cc  vcfsx 2, 2, 0
  049b7d0  <unknown>
  049b7d4  li 3, -3056
  049b7d8  vspltw 3, 3, 0
  049b7dc  <unknown>
  049b7e0  li 3, 152
  049b7e4  vaddfp 2, 2, 3
  049b7e8  vmaddfp 2, 5, 2, 4
  049b7ec  vctsxs 2, 2, 0
  049b7f0  vspltw 2, 2, 0
  049b7f4  stvewx 2, 3, 28
  049b7f8  ori 3, 31, 0
  049b7fc  bl 0xefb38
  049b800  nop
  049b804  lis 3, 74
  049b808  addi 4, 3, -23504
  049b80c  ori 3, 31, 0
  049b810  lfs 1, 12(4)
  049b814  bl 0x106150
  049b818  nop
  049b81c  ld 0, 656(1)
  049b820  mtlr 0
  049b824  lfd 29, 616(1)
  049b828  lfd 30, 624(1)
  049b82c  lfd 31, 632(1)
  049b830  ld 26, 568(1)
  049b834  ld 27, 576(1)
  049b838  ld 28, 584(1)
  049b83c  ld 29, 592(1)
  049b840  ld 30, 600(1)
  049b844  ld 31, 608(1)
  049b848  addi 1, 1, 640
  049b84c  blr
