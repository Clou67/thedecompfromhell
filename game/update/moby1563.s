# game/update/moby1563.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1563_0029a288:   # 0x29a288, 0x290 bytes
  029a288  stdu 1, -240(1)
  029a28c  mflr 0
  029a290  std 0, 256(1)
  029a294  stfd 26, 192(1)
  029a298  stfd 27, 200(1)
  029a29c  stfd 28, 208(1)
  029a2a0  stfd 29, 216(1)
  029a2a4  stfd 30, 224(1)
  029a2a8  stfd 31, 232(1)
  029a2ac  addi 0, 1, 144
  029a2b0  stvx 31, 0, 0
  029a2b4  lfs 3, 0(3)
  029a2b8  lis 6, 42
  029a2bc  fmr 27, 1
  029a2c0  std 28, 160(1)
  029a2c4  stfs 3, 112(1)
  029a2c8  li 28, 0
  029a2cc  lfs 3, 4(3)
  029a2d0  std 30, 176(1)
  029a2d4  addi 6, 6, -23960
  029a2d8  ori 30, 28, 0
  029a2dc  fmr 31, 2
  029a2e0  std 31, 184(1)
  029a2e4  stfs 3, 116(1)
  029a2e8  ori 31, 5, 0
  029a2ec  lfs 3, 8(3)
  029a2f0  stfs 3, 120(1)
  029a2f4  lfs 3, 12(3)
  029a2f8  li 3, 12
  029a2fc  stfs 3, 124(1)
  029a300  lfs 3, 0(4)
  029a304  stfs 3, 128(1)
  029a308  lfs 3, 4(4)
  029a30c  stfs 3, 132(1)
  029a310  lfs 3, 8(4)
  029a314  stfs 3, 136(1)
  029a318  lfs 3, 12(4)
  029a31c  stfs 3, 140(1)
  029a320  lfs 28, 0(6)
  029a324  lfs 29, 4(6)
  029a328  lfs 26, 8(6)
  029a32c  lvlx 31, 3, 6
  029a330  std 29, 168(1)
  029a334  lfs 30, 16(6)
  029a338  vspltw 31, 31, 0
  029a33c  li 3, 16
  029a340  bl 0xfc620
  029a344  nop
  029a348  ori 29, 3, 0
  029a34c  li 3, 2
  029a350  bl 0xfc620
  029a354  nop
  029a358  li 4, 0
  029a35c  fmr 1, 28
  029a360  neg 7, 29
  029a364  fmr 2, 29
  029a368  subc 3, 4, 3
  029a36c  fmr 3, 26
  029a370  subc 4, 29, 7
  029a374  fmr 4, 27
  029a378  cntlzw 3, 3
  029a37c  lis 10, 32544
  029a380  sldi 3, 3, 58
  029a384  ori 8, 31, 0
  029a388  sradi 5, 3, 63
  029a38c  addic 3, 1, 112
  029a390  and 4, 5, 4
  029a394  ori 10, 10, 16512
  029a398  addc 7, 7, 4
  029a39c  bl 0x126f50
  029a3a0  nop
  029a3a4  ori 29, 3, 0
  029a3a8  cmpwi 29, 0
  029a3ac  bt 2, 0x29a404
  029a3b0  vspltisw 2, -1
  029a3b4  lis 3, 114
  029a3b8  li 4, -3056
  029a3bc  fmr 1, 30
  029a3c0  vslw 2, 2, 2
  029a3c4  lvlx 3, 4, 3
  029a3c8  li 3, 10
  029a3cc  vmaddfp 2, 3, 31, 2
  029a3d0  vctsxs 2, 2, 0
  029a3d4  vsplth 2, 2, 1
  029a3d8  stvehx 2, 3, 29
  029a3dc  bl 0x502758
  029a3e0  nop
  029a3e4  addic 3, 3, 64
  029a3e8  li 4, 2
  029a3ec  lhz 6, 10(29)
  029a3f0  li 5, 127
  029a3f4  stb 3, 9(29)
  029a3f8  stw 4, 36(29)
  029a3fc  stb 5, 42(29)
  029a400  stb 6, 43(29)
  029a404  addic 28, 28, 1
  029a408  cmpwi 28, 2
  029a40c  bt 0, 0x29a33c
  029a410  lis 3, 42
  029a414  li 4, 24
  029a418  addi 3, 3, -23960
  029a41c  li 29, 16
  029a420  lfs 27, 20(3)
  029a424  lvlx 31, 4, 3
  029a428  vspltw 31, 31, 0
  029a42c  addic 3, 1, 128
  029a430  lis 10, 32767
  029a434  fmr 1, 28
  029a438  ori 7, 29, 0
  029a43c  fmr 2, 29
  029a440  fmr 3, 27
  029a444  ori 8, 31, 0
  029a448  fmr 4, 31
  029a44c  ori 10, 10, 65535
  029a450  bl 0x126f50
  029a454  nop
  029a458  ori 28, 3, 0
  029a45c  cmpwi 28, 0
  029a460  bt 2, 0x29a4c8
  029a464  fmr 1, 30
  029a468  bl 0x502758
  029a46c  nop
  029a470  vspltisw 2, -1
  029a474  addic 3, 3, 64
  029a478  lis 4, 114
  029a47c  li 5, -3056
  029a480  vslw 2, 2, 2
  029a484  stb 3, 9(28)
  029a488  li 3, 255
  029a48c  lvlx 3, 5, 4
  029a490  li 4, 10
  029a494  vmaddfp 2, 3, 31, 2
  029a498  vctsxs 2, 2, 0
  029a49c  vsplth 2, 2, 1
  029a4a0  stvehx 2, 4, 28
  029a4a4  bl 0xfc620
  029a4a8  nop
  029a4ac  li 4, 2
  029a4b0  stb 3, 8(28)
  029a4b4  li 3, 127
  029a4b8  lhz 5, 10(28)
  029a4bc  stw 4, 36(28)
  029a4c0  stb 3, 42(28)
  029a4c4  stb 5, 43(28)
  029a4c8  addic 30, 30, 1
  029a4cc  neg 29, 29
  029a4d0  cmpwi 30, 3
  029a4d4  bt 0, 0x29a42c
  029a4d8  li 0, 144
  029a4dc  lvx 31, 1, 0
  029a4e0  ld 0, 256(1)
  029a4e4  mtlr 0
  029a4e8  lfd 26, 192(1)
  029a4ec  lfd 27, 200(1)
  029a4f0  lfd 28, 208(1)
  029a4f4  lfd 29, 216(1)
  029a4f8  lfd 30, 224(1)
  029a4fc  lfd 31, 232(1)
  029a500  ld 28, 160(1)
  029a504  ld 29, 168(1)
  029a508  ld 30, 176(1)
  029a50c  ld 31, 184(1)
  029a510  addi 1, 1, 240
  029a514  blr

UpdateMoby_1563:   # 0x29a5a8, 0x1824 bytes
  029a5a8  stdu 1, -768(1)
  029a5ac  mflr 0
  029a5b0  std 0, 784(1)
  029a5b4  stfd 27, 728(1)
  029a5b8  stfd 28, 736(1)
  029a5bc  stfd 29, 744(1)
  029a5c0  stfd 30, 752(1)
  029a5c4  stfd 31, 760(1)
  029a5c8  std 31, 720(1)
  029a5cc  addi 0, 1, 624
  029a5d0  stvx 31, 0, 0
  029a5d4  ori 31, 3, 0
  029a5d8  std 26, 680(1)
  029a5dc  lbz 3, 32(3)
  029a5e0  lis 26, 42
  029a5e4  cmpwi 3, 0
  029a5e8  addi 26, 26, -23272
  029a5ec  cmpwi 1, 3, -1
  029a5f0  std 30, 712(1)
  029a5f4  std 29, 704(1)
  029a5f8  std 28, 696(1)
  029a5fc  std 27, 688(1)
  029a600  std 25, 672(1)
  029a604  std 24, 664(1)
  029a608  std 23, 656(1)
  029a60c  std 22, 648(1)
  029a610  cmpwi 6, 3, 1
  029a614  bt 1, 0x29a620
  029a618  bf 5, 0x29bd78
  029a61c  b 0x29a628
  029a620  bf 25, 0x29a680
  029a624  b 0x29bd78
  029a628  lis 3, 123
  029a62c  li 4, 355
  029a630  lis 6, 123
  029a634  lis 5, 123
  029a638  li 7, 200
  029a63c  stw 4, -18152(3)
  029a640  li 9, 60
  029a644  li 3, 365
  029a648  lis 4, 123
  029a64c  lis 8, 123
  029a650  li 10, 255
  029a654  stw 3, -18148(6)
  029a658  stw 7, -18112(5)
  029a65c  li 6, 190
  029a660  stw 9, -18116(4)
  029a664  lis 5, 123
  029a668  li 4, 1
  029a66c  stw 6, -18108(8)
  029a670  stw 3, -18104(5)
  029a674  stb 10, 48(31)
  029a678  stb 4, 32(31)
  029a67c  b 0x29bd78
  029a680  lis 3, 161
  029a684  lwz 3, 1800(3)
  029a688  cmpwi 3, 2
  029a68c  bf 2, 0x29bd78
  029a690  lis 25, 150
  029a694  addic 25, 25, -12976
  029a698  lwz 3, 48(25)
  029a69c  cmpwi 3, 4
  029a6a0  bf 2, 0x29afe0
  029a6a4  lwz 3, 52(25)
  029a6a8  cmpwi 3, 1
  029a6ac  bf 2, 0x29a6e4
  029a6b0  lis 4, 164
  029a6b4  lwz 4, -28500(4)
  029a6b8  cmpwi 4, 0
  029a6bc  bt 2, 0x29a6e4
  029a6c0  lhz 5, 166(4)
  029a6c4  cmpwi 5, 1435
  029a6c8  bf 2, 0x29a6d8
  029a6cc  lis 5, 251
  029a6d0  stw 4, -9336(5)
  029a6d4  b 0x29a6e4
  029a6d8  lwz 4, 40(4)
  029a6dc  cmpwi 4, 0
  029a6e0  bf 2, 0x29a6c0
  029a6e4  lis 29, 114
  029a6e8  lfs 2, 0(26)
  029a6ec  lfs 1, -3056(29)
  029a6f0  fmuls 2, 1, 2
  029a6f4  fctiwz 2, 2
  029a6f8  stfd 2, 608(1)
  029a6fc  lwz 4, 612(1)
  029a700  cmpw 3, 4
  029a704  bt 0, 0x29a84c
  029a708  lfs 2, 4(26)
  029a70c  fmuls 1, 1, 2
  029a710  fctiwz 1, 1
  029a714  stfd 1, 608(1)
  029a718  lwz 4, 612(1)
  029a71c  cmpw 3, 4
  029a720  bt 1, 0x29a84c
  029a724  lis 3, 18834
  029a728  lis 4, 18627
  029a72c  ori 3, 3, 31744
  029a730  lis 6, 18499
  029a734  lis 5, 18676
  029a738  ori 4, 4, 20480
  029a73c  lis 7, 18755
  029a740  stw 3, 524(1)
  029a744  ori 6, 6, 20480
  029a748  ori 3, 5, 9216
  029a74c  ori 5, 7, 20480
  029a750  stw 4, 536(1)
  029a754  lis 27, 161
  029a758  stw 6, 540(1)
  029a75c  stw 3, 528(1)
  029a760  li 30, 3
  029a764  stw 5, 532(1)
  029a768  addic 28, 1, 12
  029a76c  lfs 31, 8(26)
  029a770  addic 24, 25, 12
  029a774  lfs 30, 12(26)
  029a778  addic 27, 27, 23856
  029a77c  lfs 29, 16(26)
  029a780  lfs 28, 20(26)
  029a784  lwz 3, 376(24)
  029a788  cmpwi 3, 0
  029a78c  bt 2, 0x29a838
  029a790  addic 5, 1, 192
  029a794  li 4, 0
  029a798  bl 0xf1114
  029a79c  nop
  029a7a0  lfs 1, 512(28)
  029a7a4  cmpwi 30, 3
  029a7a8  lwz 3, 52(25)
  029a7ac  lfs 2, -3056(29)
  029a7b0  bf 2, 0x29a7e4
  029a7b4  fmuls 3, 2, 31
  029a7b8  fctiwz 3, 3
  029a7bc  stfd 3, 608(1)
  029a7c0  lwz 4, 612(1)
  029a7c4  cmpw 3, 4
  029a7c8  bt 0, 0x29a7e4
  029a7cc  fmuls 3, 2, 30
  029a7d0  fctiwz 3, 3
  029a7d4  stfd 3, 608(1)
  029a7d8  lwz 4, 612(1)
  029a7dc  cmpw 3, 4
  029a7e0  bf 1, 0x29a838
  029a7e4  cmpwi 30, 5
  029a7e8  bf 2, 0x29a820
  029a7ec  fmuls 3, 2, 31
  029a7f0  fctiwz 3, 3
  029a7f4  stfd 3, 608(1)
  029a7f8  lwz 4, 612(1)
  029a7fc  cmpw 3, 4
  029a800  bt 0, 0x29a820
  029a804  fmuls 2, 2, 29
  029a808  fctiwz 2, 2
  029a80c  stfd 2, 608(1)
  029a810  lwz 4, 612(1)
  029a814  cmpw 3, 4
  029a818  bt 1, 0x29a820
  029a81c  lfs 1, 24(26)
  029a820  addic 3, 1, 192
  029a824  fmuls 2, 1, 28
  029a828  ori 5, 27, 0
  029a82c  ori 4, 3, 0
  029a830  bl 0x11a1a0
  029a834  nop
  029a838  addic 30, 30, 1
  029a83c  addic 24, 24, 4
  029a840  cmpwi 30, 8
  029a844  addic 28, 28, 4
  029a848  bt 0, 0x29a784
  029a84c  lfs 3, 28(26)
  029a850  lfs 1, -3056(29)
  029a854  lwz 3, 52(25)
  029a858  fmuls 2, 1, 3
  029a85c  fctiwz 2, 2
  029a860  stfd 2, 608(1)
  029a864  lwz 4, 612(1)
  029a868  lfs 31, 32(26)
  029a86c  lfs 29, 36(26)
  029a870  cmpw 3, 4
  029a874  lfs 30, 40(26)
  029a878  bf 2, 0x29a918
  029a87c  lwz 30, 404(25)
  029a880  cmpwi 30, 0
  029a884  bt 2, 0x29a918
  029a888  addic 28, 1, 208
  029a88c  ori 3, 30, 0
  029a890  li 4, 0
  029a894  ori 5, 28, 0
  029a898  bl 0xf1114
  029a89c  nop
  029a8a0  li 6, 0
  029a8a4  lfs 1, 44(26)
  029a8a8  lis 3, 16256
  029a8ac  li 7, -1
  029a8b0  fmr 3, 31
  029a8b4  li 11, 15
  029a8b8  fmr 5, 30
  029a8bc  stw 6, 236(1)
  029a8c0  addic 4, 1, 224
  029a8c4  stw 6, 228(1)
  029a8c8  ori 5, 28, 0
  029a8cc  stw 6, 224(1)
  029a8d0  li 8, 50
  029a8d4  lfs 6, 48(26)
  029a8d8  li 9, 25
  029a8dc  stw 3, 232(1)
  029a8e0  li 10, 25
  029a8e4  lfs 4, 52(26)
  029a8e8  ori 3, 30, 0
  029a8ec  std 7, 144(1)
  029a8f0  fmr 7, 29
  029a8f4  std 6, 160(1)
  029a8f8  fmr 2, 1
  029a8fc  std 11, 168(1)
  029a900  std 7, 176(1)
  029a904  std 6, 184(1)
  029a908  bl 0x10e030
  029a90c  nop
  029a910  lwz 3, 52(25)
  029a914  lfs 1, -3056(29)
  029a918  lfs 2, 56(26)
  029a91c  ori 4, 3, 0
  029a920  fmr 3, 1
  029a924  fmuls 2, 1, 2
  029a928  fctiwz 2, 2
  029a92c  stfd 2, 608(1)
  029a930  lwz 5, 612(1)
  029a934  cmpw 4, 5
  029a938  bf 2, 0x29a9e8
  029a93c  lwz 30, 392(25)
  029a940  ori 4, 3, 0
  029a944  fmr 3, 1
  029a948  cmpwi 30, 0
  029a94c  bt 2, 0x29a9e8
  029a950  addic 28, 1, 240
  029a954  ori 3, 30, 0
  029a958  li 4, 0
  029a95c  ori 5, 28, 0
  029a960  bl 0xf1114
  029a964  nop
  029a968  li 6, 0
  029a96c  lfs 1, 44(26)
  029a970  lis 3, 16256
  029a974  li 7, -1
  029a978  fmr 3, 31
  029a97c  li 11, 15
  029a980  fmr 2, 1
  029a984  stw 6, 268(1)
  029a988  addic 4, 1, 256
  029a98c  stw 6, 260(1)
  029a990  ori 5, 28, 0
  029a994  stw 6, 256(1)
  029a998  li 8, 50
  029a99c  lfs 6, 48(26)
  029a9a0  fmr 5, 30
  029a9a4  stw 3, 264(1)
  029a9a8  li 9, 25
  029a9ac  lfs 4, 52(26)
  029a9b0  ori 3, 30, 0
  029a9b4  std 7, 144(1)
  029a9b8  li 10, 25
  029a9bc  std 6, 160(1)
  029a9c0  fmr 7, 29
  029a9c4  std 11, 168(1)
  029a9c8  std 7, 176(1)
  029a9cc  std 6, 184(1)
  029a9d0  bl 0x10e030
  029a9d4  nop
  029a9d8  lfs 1, -3056(29)
  029a9dc  lwz 3, 52(25)
  029a9e0  fmr 3, 1
  029a9e4  ori 4, 3, 0
  029a9e8  fmr 2, 3
  029a9ec  lfs 4, 60(26)
  029a9f0  ori 5, 4, 0
  029a9f4  fmuls 4, 2, 4
  029a9f8  fctiwz 4, 4
  029a9fc  stfd 4, 608(1)
  029aa00  lwz 6, 612(1)
  029aa04  cmpw 5, 6
  029aa08  bf 2, 0x29aab8
  029aa0c  lwz 30, 400(25)
  029aa10  cmpwi 30, 0
  029aa14  bt 2, 0x29aab8
  029aa18  addic 28, 1, 272
  029aa1c  ori 3, 30, 0
  029aa20  li 4, 0
  029aa24  ori 5, 28, 0
  029aa28  bl 0xf1114
  029aa2c  nop
  029aa30  li 6, 0
  029aa34  lfs 1, 44(26)
  029aa38  lis 3, 16256
  029aa3c  li 7, -1
  029aa40  fmr 3, 31
  029aa44  li 11, 15
  029aa48  fmr 2, 1
  029aa4c  stw 6, 300(1)
  029aa50  addic 4, 1, 288
  029aa54  stw 6, 292(1)
  029aa58  ori 5, 28, 0
  029aa5c  stw 6, 288(1)
  029aa60  li 8, 50
  029aa64  lfs 6, 48(26)
  029aa68  fmr 5, 30
  029aa6c  stw 3, 296(1)
  029aa70  li 9, 25
  029aa74  lfs 4, 52(26)
  029aa78  ori 3, 30, 0
  029aa7c  std 7, 144(1)
  029aa80  li 10, 25
  029aa84  std 6, 160(1)
  029aa88  fmr 7, 29
  029aa8c  std 11, 168(1)
  029aa90  std 7, 176(1)
  029aa94  std 6, 184(1)
  029aa98  bl 0x10e030
  029aa9c  nop
  029aaa0  lfs 2, -3056(29)
  029aaa4  lwz 5, 52(25)
  029aaa8  fmr 1, 2
  029aaac  ori 3, 5, 0
  029aab0  ori 4, 3, 0
  029aab4  fmr 3, 1
  029aab8  lfs 4, 16(26)
  029aabc  fmuls 2, 2, 4
  029aac0  fctiwz 2, 2
  029aac4  stfd 2, 608(1)
  029aac8  lwz 6, 612(1)
  029aacc  cmpw 5, 6
  029aad0  bf 2, 0x29ab78
  029aad4  lwz 30, 396(25)
  029aad8  cmpwi 30, 0
  029aadc  bt 2, 0x29ab78
  029aae0  addic 28, 1, 304
  029aae4  ori 3, 30, 0
  029aae8  li 4, 0
  029aaec  ori 5, 28, 0
  029aaf0  bl 0xf1114
  029aaf4  nop
  029aaf8  li 6, 0
  029aafc  lfs 1, 44(26)
  029ab00  lis 3, 16256
  029ab04  li 7, -1
  029ab08  fmr 3, 31
  029ab0c  li 11, 15
  029ab10  fmr 5, 30
  029ab14  stw 6, 332(1)
  029ab18  addic 4, 1, 320
  029ab1c  stw 6, 324(1)
  029ab20  ori 5, 28, 0
  029ab24  stw 6, 320(1)
  029ab28  li 8, 50
  029ab2c  lfs 6, 48(26)
  029ab30  li 9, 25
  029ab34  stw 3, 328(1)
  029ab38  li 10, 25
  029ab3c  lfs 4, 52(26)
  029ab40  ori 3, 30, 0
  029ab44  std 7, 144(1)
  029ab48  fmr 7, 29
  029ab4c  std 6, 160(1)
  029ab50  fmr 2, 1
  029ab54  std 11, 168(1)
  029ab58  std 7, 176(1)
  029ab5c  std 6, 184(1)
  029ab60  bl 0x10e030
  029ab64  nop
  029ab68  lwz 4, 52(25)
  029ab6c  lfs 3, -3056(29)
  029ab70  ori 3, 4, 0
  029ab74  fmr 1, 3
  029ab78  lfs 2, 64(26)
  029ab7c  fmuls 2, 3, 2
  029ab80  fctiwz 2, 2
  029ab84  stfd 2, 608(1)
  029ab88  lwz 5, 612(1)
  029ab8c  cmpw 4, 5
  029ab90  bf 2, 0x29ac3c
  029ab94  lis 3, 17438
  029ab98  fmr 5, 30
  029ab9c  lis 4, 17379
  029aba0  ori 3, 3, 41878
  029aba4  lis 5, 17101
  029aba8  ori 4, 4, 5341
  029abac  lis 6, 16256
  029abb0  stw 3, 336(1)
  029abb4  ori 3, 5, 65405
  029abb8  stw 4, 340(1)
  029abbc  li 7, 0
  029abc0  li 11, -1
  029abc4  stw 3, 344(1)
  029abc8  addic 4, 1, 352
  029abcc  lfs 6, 48(26)
  029abd0  addic 5, 1, 336
  029abd4  stw 6, 348(1)
  029abd8  ori 3, 31, 0
  029abdc  lfs 1, 44(26)
  029abe0  li 8, 300
  029abe4  stw 7, 364(1)
  029abe8  li 9, 200
  029abec  stw 7, 356(1)
  029abf0  fmr 2, 1
  029abf4  stw 7, 352(1)
  029abf8  li 10, 200
  029abfc  stw 6, 360(1)
  029ac00  lfs 3, 68(26)
  029ac04  li 6, 60
  029ac08  lfs 4, 72(26)
  029ac0c  lfs 7, 76(26)
  029ac10  std 11, 144(1)
  029ac14  std 7, 160(1)
  029ac18  std 6, 168(1)
  029ac1c  std 11, 176(1)
  029ac20  std 7, 184(1)
  029ac24  bl 0x10e030
  029ac28  nop
  029ac2c  lfs 1, -3056(29)
  029ac30  lwz 3, 52(25)
  029ac34  fmr 3, 1
  029ac38  ori 4, 3, 0
  029ac3c  lis 5, 123
  029ac40  lwz 5, -18116(5)
  029ac44  extsw 5, 5
  029ac48  std 5, 608(1)
  029ac4c  lfs 31, 80(26)
  029ac50  lfd 2, 608(1)
  029ac54  fcfid 2, 2
  029ac58  frsp 2, 2
  029ac5c  fadds 2, 2, 31
  029ac60  fmuls 2, 3, 2
  029ac64  fctiwz 2, 2
  029ac68  stfd 2, 608(1)
  029ac6c  lwz 5, 612(1)
  029ac70  cmpw 4, 5
  029ac74  bt 0, 0x29ad4c
  029ac78  lis 6, 123
  029ac7c  lwz 6, -18112(6)
  029ac80  extsw 6, 6
  029ac84  std 6, 608(1)
  029ac88  lfd 2, 608(1)
  029ac8c  fcfid 2, 2
  029ac90  frsp 2, 2
  029ac94  fadds 2, 2, 31
  029ac98  fmuls 2, 3, 2
  029ac9c  fctiwz 2, 2
  029aca0  stfd 2, 608(1)
  029aca4  lwz 6, 612(1)
  029aca8  cmpw 4, 6
  029acac  bf 0, 0x29ad4c
  029acb0  subc 3, 4, 5
  029acb4  extsw 3, 3
  029acb8  bl 0x502730
  029acbc  nop
  029acc0  lis 3, 123
  029acc4  lis 4, 123
  029acc8  fmr 30, 1
  029accc  lwz 3, -18112(3)
  029acd0  lwz 4, -18116(4)
  029acd4  subc 3, 3, 4
  029acd8  extsw 3, 3
  029acdc  std 3, 608(1)
  029ace0  lfs 2, -3056(29)
  029ace4  lfd 1, 608(1)
  029ace8  fcfid 1, 1
  029acec  frsp 1, 1
  029acf0  fadds 1, 1, 31
  029acf4  fmuls 1, 2, 1
  029acf8  fctiwz 1, 1
  029acfc  stfd 1, 608(1)
  029ad00  lwz 3, 612(1)
  029ad04  extsw 3, 3
  029ad08  bl 0x502730
  029ad0c  nop
  029ad10  fdivs 1, 30, 1
  029ad14  lfs 2, 84(26)
  029ad18  fmuls 1, 1, 2
  029ad1c  bl 0x502758
  029ad20  nop
  029ad24  lis 4, 251
  029ad28  lis 5, 251
  029ad2c  lis 6, 113
  029ad30  stw 3, -9340(4)
  029ad34  addic 3, 6, -21840
  029ad38  lwz 4, -9336(5)
  029ad3c  bl 0x6d720
  029ad40  nop
  029ad44  lwz 3, 52(25)
  029ad48  lfs 1, -3056(29)
  029ad4c  lis 4, 123
  029ad50  fmr 2, 1
  029ad54  ori 5, 3, 0
  029ad58  lwz 4, -18108(4)
  029ad5c  extsw 4, 4
  029ad60  std 4, 608(1)
  029ad64  lfd 3, 608(1)
  029ad68  fcfid 3, 3
  029ad6c  frsp 3, 3
  029ad70  fadds 3, 3, 31
  029ad74  fmuls 3, 2, 3
  029ad78  fctiwz 3, 3
  029ad7c  stfd 3, 608(1)
  029ad80  lwz 4, 612(1)
  029ad84  cmpw 5, 4
  029ad88  bt 0, 0x29ae5c
  029ad8c  lis 6, 123
  029ad90  lwz 6, -18104(6)
  029ad94  extsw 6, 6
  029ad98  std 6, 608(1)
  029ad9c  lfd 3, 608(1)
  029ada0  fcfid 3, 3
  029ada4  frsp 3, 3
  029ada8  fadds 3, 3, 31
  029adac  fmuls 1, 1, 3
  029adb0  fctiwz 1, 1
  029adb4  stfd 1, 608(1)
  029adb8  lwz 6, 612(1)
  029adbc  cmpw 3, 6
  029adc0  bf 0, 0x29ae5c
  029adc4  subc 3, 3, 4
  029adc8  extsw 3, 3
  029adcc  bl 0x502730
  029add0  nop
  029add4  lis 3, 123
  029add8  fmr 30, 1
  029addc  lis 4, 123
  029ade0  lwz 3, -18104(3)
  029ade4  lwz 4, -18108(4)
  029ade8  subc 3, 3, 4
  029adec  extsw 3, 3
  029adf0  std 3, 608(1)
  029adf4  lfs 2, -3056(29)
  029adf8  lfd 1, 608(1)
  029adfc  fcfid 1, 1
  029ae00  frsp 1, 1
  029ae04  fadds 1, 1, 31
  029ae08  fmuls 1, 2, 1
  029ae0c  fctiwz 1, 1
  029ae10  stfd 1, 608(1)
  029ae14  lwz 3, 612(1)
  029ae18  extsw 3, 3
  029ae1c  bl 0x502730
  029ae20  nop
  029ae24  fdivs 1, 30, 1
  029ae28  lfs 2, 88(26)
  029ae2c  lfs 3, 92(26)
  029ae30  lis 4, 251
  029ae34  lis 5, 251
  029ae38  lis 3, 113
  029ae3c  addic 3, 3, -21832
  029ae40  lwz 4, -9336(4)
  029ae44  fmadds 1, 1, 2, 3
  029ae48  stfs 1, -9332(5)
  029ae4c  bl 0x6d720
  029ae50  nop
  029ae54  lwz 5, 52(25)
  029ae58  lfs 2, -3056(29)
  029ae5c  lis 3, 123
  029ae60  lwz 3, -18152(3)
  029ae64  extsw 3, 3
  029ae68  std 3, 608(1)
  029ae6c  lfd 1, 608(1)
  029ae70  fcfid 1, 1
  029ae74  frsp 1, 1
  029ae78  fadds 1, 1, 31
  029ae7c  fmuls 1, 2, 1
  029ae80  fctiwz 1, 1
  029ae84  stfd 1, 608(1)
  029ae88  lwz 3, 612(1)
  029ae8c  cmpw 5, 3
  029ae90  bt 0, 0x29afe0
  029ae94  lis 3, 123
  029ae98  lwz 3, -18144(3)
  029ae9c  extsw 3, 3
  029aea0  std 3, 608(1)
  029aea4  lfd 1, 608(1)
  029aea8  fcfid 1, 1
  029aeac  frsp 1, 1
  029aeb0  fadds 1, 1, 31
  029aeb4  fmuls 1, 2, 1
  029aeb8  fctiwz 1, 1
  029aebc  stfd 1, 608(1)
  029aec0  lwz 3, 612(1)
  029aec4  cmpw 5, 3
  029aec8  bf 0, 0x29afe0
  029aecc  lis 3, 113
  029aed0  lwz 4, 376(25)
  029aed4  addic 3, 3, -21856
  029aed8  bl 0x6d720
  029aedc  nop
  029aee0  lis 3, 123
  029aee4  lwz 3, -18148(3)
  029aee8  extsw 3, 3
  029aeec  std 3, 608(1)
  029aef0  lfs 1, -3056(29)
  029aef4  lwz 3, 52(25)
  029aef8  lfd 2, 608(1)
  029aefc  fcfid 2, 2
  029af00  frsp 2, 2
  029af04  fadds 2, 2, 31
  029af08  fmuls 2, 1, 2
  029af0c  fctiwz 2, 2
  029af10  stfd 2, 608(1)
  029af14  lwz 4, 612(1)
  029af18  cmpw 3, 4
  029af1c  bt 0, 0x29af30
  029af20  lis 3, 251
  029af24  lis 4, 16672
  029af28  stw 4, -9344(3)
  029af2c  b 0x29afe0
  029af30  lis 30, 123
  029af34  lwz 4, -18152(30)
  029af38  extsw 4, 4
  029af3c  std 4, 608(1)
  029af40  lfd 2, 608(1)
  029af44  fcfid 2, 2
  029af48  frsp 2, 2
  029af4c  fadds 2, 2, 31
  029af50  fmuls 1, 1, 2
  029af54  fctiwz 1, 1
  029af58  stfd 1, 608(1)
  029af5c  lwz 4, 612(1)
  029af60  subc 3, 3, 4
  029af64  extsw 3, 3
  029af68  bl 0x502730
  029af6c  nop
  029af70  lis 3, 123
  029af74  lwz 4, -18152(30)
  029af78  fmr 30, 1
  029af7c  lwz 3, -18148(3)
  029af80  subc 3, 3, 4
  029af84  extsw 3, 3
  029af88  std 3, 608(1)
  029af8c  lfs 2, -3056(29)
  029af90  lfd 1, 608(1)
  029af94  fcfid 1, 1
  029af98  frsp 1, 1
  029af9c  fadds 1, 1, 31
  029afa0  fmuls 1, 2, 1
  029afa4  fctiwz 1, 1
  029afa8  stfd 1, 608(1)
  029afac  lwz 3, 612(1)
  029afb0  extsw 3, 3
  029afb4  bl 0x502730
  029afb8  nop
  029afbc  fdivs 1, 30, 1
  029afc0  lis 3, 123
  029afc4  lis 4, 123
  029afc8  lis 5, 251
  029afcc  lfs 2, -18156(3)
  029afd0  lfs 3, -18160(4)
  029afd4  fsubs 2, 2, 3
  029afd8  fmadds 1, 2, 1, 3
  029afdc  stfs 1, -9344(5)
  029afe0  lwz 3, 48(25)
  029afe4  cmpwi 3, 7
  029afe8  bf 2, 0x29b364
  029afec  lwz 5, 52(25)
  029aff0  cmpwi 5, 1
  029aff4  bf 2, 0x29b08c
  029aff8  lis 3, 123
  029affc  lis 4, 123
  029b000  lis 6, 123
  029b004  lis 7, 123
  029b008  lis 9, 123
  029b00c  lwz 3, -18140(3)
  029b010  lis 10, 123
  029b014  lwz 4, -18136(4)
  029b018  lis 8, 123
  029b01c  lwz 6, -18128(6)
  029b020  lis 11, 123
  029b024  stw 3, -18116(7)
  029b028  lis 30, 123
  029b02c  lis 3, 123
  029b030  lwz 9, -18132(9)
  029b034  lis 7, 164
  029b038  stw 4, -18112(10)
  029b03c  lis 4, 123
  029b040  stw 9, -18108(8)
  029b044  lis 12, 123
  029b048  lwz 8, -18124(11)
  029b04c  stw 6, -18104(3)
  029b050  lwz 3, -28500(7)
  029b054  lwz 6, -18120(30)
  029b058  stw 8, -18152(4)
  029b05c  cmpwi 3, 0
  029b060  stw 6, -18148(12)
  029b064  bt 2, 0x29b08c
  029b068  lhz 4, 166(3)
  029b06c  cmpwi 4, 1435
  029b070  bf 2, 0x29b080
  029b074  lis 4, 251
  029b078  stw 3, -9336(4)
  029b07c  b 0x29b08c
  029b080  lwz 3, 40(3)
  029b084  cmpwi 3, 0
  029b088  bf 2, 0x29b068
  029b08c  lis 3, 123
  029b090  lwz 3, -18116(3)
  029b094  extsw 4, 3
  029b098  std 4, 608(1)
  029b09c  lis 4, 114
  029b0a0  lfs 31, 80(26)
  029b0a4  lfs 1, -3056(4)
  029b0a8  lfd 2, 608(1)
  029b0ac  fcfid 2, 2
  029b0b0  frsp 2, 2
  029b0b4  fadds 2, 2, 31
  029b0b8  fmuls 2, 1, 2
  029b0bc  fctiwz 2, 2
  029b0c0  stfd 2, 608(1)
  029b0c4  lwz 4, 612(1)
  029b0c8  cmpw 5, 4
  029b0cc  bt 0, 0x29b17c
  029b0d0  lis 4, 123
  029b0d4  lwz 4, -18112(4)
  029b0d8  extsw 4, 4
  029b0dc  std 4, 608(1)
  029b0e0  lfd 2, 608(1)
  029b0e4  fcfid 2, 2
  029b0e8  frsp 2, 2
  029b0ec  fadds 2, 2, 31
  029b0f0  fmuls 2, 1, 2
  029b0f4  fctiwz 2, 2
  029b0f8  stfd 2, 608(1)
  029b0fc  lwz 4, 612(1)
  029b100  cmpw 5, 4
  029b104  bf 0, 0x29b17c
  029b108  subc 3, 5, 3
  029b10c  extsw 3, 3
  029b110  bl 0x502730
  029b114  nop
  029b118  lis 3, 123
  029b11c  fmr 30, 1
  029b120  lis 4, 123
  029b124  lwz 3, -18112(3)
  029b128  lwz 4, -18116(4)
  029b12c  subc 3, 3, 4
  029b130  extsw 3, 3
  029b134  bl 0x502730
  029b138  nop
  029b13c  fdivs 1, 30, 1
  029b140  lfs 2, 84(26)
  029b144  fmuls 1, 1, 2
  029b148  bl 0x502758
  029b14c  nop
  029b150  lis 4, 251
  029b154  lis 5, 251
  029b158  lis 6, 113
  029b15c  stw 3, -9340(4)
  029b160  addic 3, 6, -21840
  029b164  lwz 4, -9336(5)
  029b168  bl 0x6d720
  029b16c  nop
  029b170  lis 3, 114
  029b174  lwz 5, 52(25)
  029b178  lfs 1, -3056(3)
  029b17c  lis 3, 123
  029b180  lwz 3, -18108(3)
  029b184  extsw 4, 3
  029b188  std 4, 608(1)
  029b18c  ori 4, 5, 0
  029b190  lfd 2, 608(1)
  029b194  fcfid 2, 2
  029b198  frsp 2, 2
  029b19c  fadds 2, 2, 31
  029b1a0  fmuls 2, 1, 2
  029b1a4  fctiwz 2, 2
  029b1a8  stfd 2, 608(1)
  029b1ac  lwz 6, 612(1)
  029b1b0  cmpw 4, 6
  029b1b4  bt 0, 0x29b260
  029b1b8  lis 6, 123
  029b1bc  lwz 6, -18104(6)
  029b1c0  extsw 6, 6
  029b1c4  std 6, 608(1)
  029b1c8  lfd 2, 608(1)
  029b1cc  fcfid 2, 2
  029b1d0  frsp 2, 2
  029b1d4  fadds 2, 2, 31
  029b1d8  fmuls 2, 1, 2
  029b1dc  fctiwz 2, 2
  029b1e0  stfd 2, 608(1)
  029b1e4  lwz 6, 612(1)
  029b1e8  cmpw 5, 6
  029b1ec  bf 0, 0x29b260
  029b1f0  subc 3, 5, 3
  029b1f4  extsw 3, 3
  029b1f8  bl 0x502730
  029b1fc  nop
  029b200  lis 3, 123
  029b204  fmr 30, 1
  029b208  lis 4, 123
  029b20c  lwz 3, -18104(3)
  029b210  lwz 4, -18108(4)
  029b214  subc 3, 3, 4
  029b218  extsw 3, 3
  029b21c  bl 0x502730
  029b220  nop
  029b224  fdivs 1, 30, 1
  029b228  lfs 2, 88(26)
  029b22c  lfs 3, 92(26)
  029b230  lis 4, 251
  029b234  lis 5, 251
  029b238  lis 3, 113
  029b23c  addic 3, 3, -21832
  029b240  lwz 4, -9336(4)
  029b244  fmadds 1, 1, 2, 3
  029b248  stfs 1, -9332(5)
  029b24c  bl 0x6d720
  029b250  nop
  029b254  lis 3, 114
  029b258  lwz 4, 52(25)
  029b25c  lfs 1, -3056(3)
  029b260  lis 3, 123
  029b264  lwz 3, -18152(3)
  029b268  extsw 3, 3
  029b26c  std 3, 608(1)
  029b270  lfd 2, 608(1)
  029b274  fcfid 2, 2
  029b278  frsp 2, 2
  029b27c  fadds 2, 2, 31
  029b280  fmuls 2, 1, 2
  029b284  fctiwz 2, 2
  029b288  stfd 2, 608(1)
  029b28c  lwz 3, 612(1)
  029b290  cmpw 4, 3
  029b294  bt 0, 0x29b364
  029b298  lis 3, 123
  029b29c  lwz 3, -18144(3)
  029b2a0  extsw 3, 3
  029b2a4  std 3, 608(1)
  029b2a8  lfd 2, 608(1)
  029b2ac  fcfid 2, 2
  029b2b0  frsp 2, 2
  029b2b4  fadds 2, 2, 31
  029b2b8  fmuls 1, 1, 2
  029b2bc  fctiwz 1, 1
  029b2c0  stfd 1, 608(1)
  029b2c4  lwz 3, 612(1)
  029b2c8  cmpw 4, 3
  029b2cc  bf 0, 0x29b364
  029b2d0  lis 3, 113
  029b2d4  lwz 4, 376(25)
  029b2d8  addic 3, 3, -21856
  029b2dc  bl 0x6d720
  029b2e0  nop
  029b2e4  lis 4, 123
  029b2e8  lwz 3, 52(25)
  029b2ec  lwz 4, -18148(4)
  029b2f0  cmpw 3, 4
  029b2f4  bt 0, 0x29b308
  029b2f8  lis 3, 251
  029b2fc  lis 4, 16672
  029b300  stw 4, -9344(3)
  029b304  b 0x29b364
  029b308  lis 30, 123
  029b30c  lwz 4, -18152(30)
  029b310  subc 3, 3, 4
  029b314  extsw 3, 3
  029b318  bl 0x502730
  029b31c  nop
  029b320  fmr 31, 1
  029b324  lis 3, 123
  029b328  lwz 4, -18152(30)
  029b32c  lwz 3, -18148(3)
  029b330  subc 3, 3, 4
  029b334  extsw 3, 3
  029b338  bl 0x502730
  029b33c  nop
  029b340  fdivs 1, 31, 1
  029b344  lis 3, 123
  029b348  lis 4, 123
  029b34c  lfs 2, -18156(3)
  029b350  lfs 3, -18160(4)
  029b354  lis 3, 251
  029b358  fsubs 2, 2, 3
  029b35c  fmadds 1, 2, 1, 3
  029b360  stfs 1, -9344(3)
  029b364  lwz 4, 48(25)
  029b368  cmpwi 4, 1
  029b36c  bf 2, 0x29b394
  029b370  lwz 3, 388(25)
  029b374  cmpwi 3, 0
  029b378  bt 2, 0x29b394
  029b37c  lis 5, 113
  029b380  ori 4, 3, 0
  029b384  addic 3, 5, -21848
  029b388  bl 0x6d720
  029b38c  nop
  029b390  lwz 4, 48(25)
  029b394  cmpwi 4, 5
  029b398  bf 2, 0x29b59c
  029b39c  lis 3, 114
  029b3a0  lfs 2, 96(26)
  029b3a4  lfs 1, -3056(3)
  029b3a8  lwz 3, 52(25)
  029b3ac  fmuls 2, 1, 2
  029b3b0  fctiwz 2, 2
  029b3b4  stfd 2, 608(1)
  029b3b8  lwz 4, 612(1)
  029b3bc  cmpw 3, 4
  029b3c0  bt 0, 0x29b59c
  029b3c4  lfs 2, 100(26)
  029b3c8  fmuls 2, 1, 2
  029b3cc  fctiwz 2, 2
  029b3d0  stfd 2, 608(1)
  029b3d4  lwz 4, 612(1)
  029b3d8  cmpw 3, 4
  029b3dc  bt 1, 0x29b59c
  029b3e0  lwz 30, 384(25)
  029b3e4  cmpwi 30, 0
  029b3e8  bt 2, 0x29b59c
  029b3ec  lfs 2, 104(26)
  029b3f0  lis 28, 251
  029b3f4  lis 29, 251
  029b3f8  fmuls 1, 1, 2
  029b3fc  addic 27, 28, -9312
  029b400  fctiwz 1, 1
  029b404  stfd 1, 608(1)
  029b408  lwz 4, 612(1)
  029b40c  cmpw 3, 4
  029b410  bf 1, 0x29b574
  029b414  addic 5, 1, 368
  029b418  ori 3, 30, 0
  029b41c  li 4, 0
  029b420  bl 0xf1114
  029b424  nop
  029b428  addic 5, 1, 384
  029b42c  ori 3, 30, 0
  029b430  li 4, 2
  029b434  bl 0xf1114
  029b438  nop
  029b43c  lis 23, 161
  029b440  lfs 31, 108(26)
  029b444  li 30, 0
  029b448  lfs 30, 20(26)
  029b44c  addic 24, 29, -9328
  029b450  addic 23, 23, 23856
  029b454  ori 3, 30, 0
  029b458  bl 0x502730
  029b45c  nop
  029b460  lfs 2, -9328(29)
  029b464  lfs 3, 368(1)
  029b468  fmuls 1, 1, 31
  029b46c  lfs 4, 4(24)
  029b470  lis 22, 123
  029b474  fsubs 2, 2, 3
  029b478  lfs 5, 372(1)
  029b47c  lfs 6, 8(24)
  029b480  addic 3, 1, 400
  029b484  lfs 7, 376(1)
  029b488  fsubs 4, 4, 5
  029b48c  lfs 8, -9312(28)
  029b490  ori 4, 3, 0
  029b494  fsubs 6, 6, 7
  029b498  lfs 9, 384(1)
  029b49c  lfs 10, 4(27)
  029b4a0  ori 5, 23, 0
  029b4a4  lfs 11, 388(1)
  029b4a8  fsubs 8, 8, 9
  029b4ac  lfs 12, 8(27)
  029b4b0  lfs 13, 392(1)
  029b4b4  fsubs 10, 10, 11
  029b4b8  fmadds 2, 1, 2, 3
  029b4bc  fsubs 3, 12, 13
  029b4c0  fmadds 4, 1, 4, 5
  029b4c4  fmadds 5, 1, 6, 7
  029b4c8  lfs 6, 12(24)
  029b4cc  lfs 7, 12(27)
  029b4d0  stfs 6, 412(1)
  029b4d4  fmadds 6, 1, 8, 9
  029b4d8  fmadds 8, 1, 10, 11
  029b4dc  fmadds 3, 1, 3, 13
  029b4e0  stfs 2, 400(1)
  029b4e4  stfs 4, 404(1)
  029b4e8  stfs 5, 408(1)
  029b4ec  lfs 1, -18096(22)
  029b4f0  stfs 7, 428(1)
  029b4f4  fmuls 2, 1, 30
  029b4f8  stfs 6, 416(1)
  029b4fc  stfs 8, 420(1)
  029b500  stfs 3, 424(1)
  029b504  bl 0x29a288
  029b508  addic 3, 1, 416
  029b50c  lfs 1, -18096(22)
  029b510  ori 5, 23, 0
  029b514  fmuls 2, 1, 30
  029b518  ori 4, 3, 0
  029b51c  bl 0x29a288
  029b520  addic 30, 30, 1
  029b524  extsw 30, 30
  029b528  cmpwi 30, 12
  029b52c  bt 0, 0x29b454
  029b530  lfs 1, 368(1)
  029b534  lfs 2, 372(1)
  029b538  stfs 1, -9328(29)
  029b53c  lfs 1, 376(1)
  029b540  stfs 2, 4(24)
  029b544  lfs 2, 380(1)
  029b548  stfs 1, 8(24)
  029b54c  lfs 1, 384(1)
  029b550  stfs 2, 12(24)
  029b554  lfs 2, 388(1)
  029b558  stfs 1, -9312(28)
  029b55c  lfs 1, 392(1)
  029b560  stfs 2, 4(27)
  029b564  lfs 2, 396(1)
  029b568  stfs 1, 8(27)
  029b56c  stfs 2, 12(27)
  029b570  b 0x29b59c
  029b574  addic 5, 29, -9328
  029b578  ori 3, 30, 0
  029b57c  li 4, 0
  029b580  bl 0xf1114
  029b584  nop
  029b588  ori 3, 30, 0
  029b58c  li 4, 2
  029b590  ori 5, 27, 0
  029b594  bl 0xf1114
  029b598  nop
  029b59c  lwz 3, 48(25)
  029b5a0  cmpwi 3, 1
  029b5a4  bf 2, 0x29ba68
  029b5a8  lis 4, 114
  029b5ac  lfs 2, 112(26)
  029b5b0  lfs 1, -3056(4)
  029b5b4  lwz 4, 52(25)
  029b5b8  fmuls 2, 1, 2
  029b5bc  fctiwz 2, 2
  029b5c0  stfd 2, 608(1)
  029b5c4  lwz 5, 612(1)
  029b5c8  cmpw 4, 5
  029b5cc  bt 0, 0x29ba68
  029b5d0  lfs 2, 116(26)
  029b5d4  fmuls 1, 1, 2
  029b5d8  fctiwz 1, 1
  029b5dc  stfd 1, 608(1)
  029b5e0  lwz 5, 612(1)
  029b5e4  cmpw 4, 5
  029b5e8  bf 0, 0x29ba68
  029b5ec  lwz 30, 392(25)
  029b5f0  cmpwi 30, 0
  029b5f4  bt 2, 0x29ba68
  029b5f8  ori 29, 30, 0
  029b5fc  lwz 30, 120(31)
  029b600  li 6, 0
  029b604  addic 5, 1, 432
  029b608  ori 3, 29, 0
  029b60c  li 4, 3
  029b610  stw 6, 16(30)
  029b614  bl 0xf1114
  029b618  nop
  029b61c  addic 5, 1, 448
  029b620  ori 3, 29, 0
  029b624  li 4, 10
  029b628  bl 0xf1114
  029b62c  nop
  029b630  lfs 8, 452(1)
  029b634  lfs 2, 436(1)
  029b638  lfs 1, 448(1)
  029b63c  fsubs 8, 8, 2
  029b640  lfs 7, 432(1)
  029b644  lfs 9, 456(1)
  029b648  lfs 2, 440(1)
  029b64c  fsubs 7, 1, 7
  029b650  fsubs 9, 9, 2
  029b654  lfs 4, 44(26)
  029b658  fmr 3, 4
  029b65c  fmuls 2, 8, 8
  029b660  fmr 5, 3
  029b664  fmadds 10, 7, 7, 2
  029b668  lfs 2, 460(1)
  029b66c  fmr 6, 5
  029b670  fmadds 10, 9, 9, 10
  029b674  fsqrts 11, 10
  029b678  fcmpu 0, 11, 6
  029b67c  bt 2, 0x29b6c8
  029b680  frsqrte 3, 10
  029b684  lfs 5, 80(26)
  029b688  lfs 6, 48(26)
  029b68c  fmuls 11, 10, 3
  029b690  fmuls 12, 5, 3
  029b694  fnmsubs 11, 11, 3, 6
  029b698  fmadds 3, 11, 12, 3
  029b69c  fmuls 11, 10, 3
  029b6a0  fmuls 12, 5, 3
  029b6a4  fnmsubs 11, 11, 3, 6
  029b6a8  fmadds 3, 11, 12, 3
  029b6ac  fmuls 10, 10, 3
  029b6b0  fmuls 5, 5, 3
  029b6b4  fnmsubs 6, 10, 3, 6
  029b6b8  fmadds 3, 6, 5, 3
  029b6bc  fmuls 6, 3, 7
  029b6c0  fmuls 5, 3, 8
  029b6c4  fmuls 3, 3, 9
  029b6c8  stfs 6, 208(31)
  029b6cc  stfs 5, 212(31)
  029b6d0  stfs 3, 216(31)
  029b6d4  stfs 2, 220(31)
  029b6d8  stfs 1, 0(30)
  029b6dc  lfs 1, 452(1)
  029b6e0  stfs 1, 4(30)
  029b6e4  lfs 1, 456(1)
  029b6e8  stfs 1, 8(30)
  029b6ec  lfs 1, 460(1)
  029b6f0  stfs 1, 12(30)
  029b6f4  lwz 4, 208(31)
  029b6f8  lwz 3, 212(31)
  029b6fc  lfs 1, 208(31)
  029b700  lfs 2, 212(31)
  029b704  fabs 5, 1
  029b708  fabs 7, 2
  029b70c  rlwinm 5, 3, 3, 29, 29
  029b710  lis 3, 115
  029b714  addic 3, 3, 22784
  029b718  fsubs 1, 5, 7
  029b71c  stfs 1, 520(1)
  029b720  lfs 3, 120(26)
  029b724  lwz 6, 520(1)
  029b728  lfs 1, 520(1)
  029b72c  rlwimi 5, 6, 2, 30, 30
  029b730  fsub 6, 1, 4
  029b734  fsub 8, 1, 4
  029b738  rlwimi 5, 4, 4, 28, 28
  029b73c  ori 4, 3, 0
  029b740  rlwimi 4, 5, 2, 26, 28
  029b744  slwi 5, 5, 2
  029b748  clrldi 4, 4, 32
  029b74c  fsel 6, 6, 5, 7
  029b750  lfsx 1, 3, 5
  029b754  lfs 2, 4(4)
  029b758  fsel 5, 8, 7, 5
  029b75c  fcmpu 0, 6, 4
  029b760  bt 1, 0x29b76c
  029b764  fmr 1, 4
  029b768  b 0x29b884
  029b76c  fsubs 7, 5, 6
  029b770  fadds 5, 5, 6
  029b774  addic 4, 1, 16
  029b778  li 8, 2
  029b77c  addic 5, 4, 560
  029b780  addic 6, 4, 576
  029b784  mtctr 8
  029b788  fdivs 5, 7, 5
  029b78c  fmuls 6, 5, 5
  029b790  stfs 5, 588(1)
  029b794  stfs 5, 580(1)
  029b798  stfs 5, 584(1)
  029b79c  stfs 5, 576(1)
  029b7a0  lfs 8, 588(1)
  029b7a4  lfs 9, 580(1)
  029b7a8  lfs 10, 584(1)
  029b7ac  fmuls 7, 6, 6
  029b7b0  fmuls 9, 9, 6
  029b7b4  fmuls 8, 8, 7
  029b7b8  fmuls 5, 7, 7
  029b7bc  fmuls 7, 10, 7
  029b7c0  stfs 9, 580(1)
  029b7c4  fmuls 6, 8, 6
  029b7c8  stfs 7, 584(1)
  029b7cc  stfs 6, 588(1)
  029b7d0  lfs 6, 560(4)
  029b7d4  fmuls 6, 6, 5
  029b7d8  stfs 6, 576(4)
  029b7dc  lfs 6, 4(5)
  029b7e0  addic 4, 4, 8
  029b7e4  addic 5, 5, 8
  029b7e8  fmuls 6, 6, 5
  029b7ec  stfs 6, 4(6)
  029b7f0  addic 6, 6, 8
  029b7f4  bdnz 0x29b7d0
  029b7f8  li 6, 4
  029b7fc  ori 4, 1, 0
  029b800  mtctr 6
  029b804  lis 5, 115
  029b808  addic 6, 4, 576
  029b80c  addic 5, 5, 22752
  029b810  ori 7, 6, 0
  029b814  lfs 5, 576(4)
  029b818  lfs 6, 0(5)
  029b81c  fmuls 5, 5, 6
  029b820  lfs 6, 4(5)
  029b824  addic 5, 5, 8
  029b828  stfs 5, 576(4)
  029b82c  lfs 5, 4(6)
  029b830  addic 4, 4, 8
  029b834  fmuls 5, 5, 6
  029b838  stfs 5, 4(6)
  029b83c  addic 6, 6, 8
  029b840  bdnz 0x29b814
  029b844  fmr 5, 4
  029b848  ori 4, 1, 0
  029b84c  mtctr 8
  029b850  lfs 6, 576(4)
  029b854  fadds 5, 5, 6
  029b858  addic 4, 4, 16
  029b85c  lfs 6, 4(7)
  029b860  lfs 7, 8(7)
  029b864  lfs 8, 12(7)
  029b868  addic 7, 7, 16
  029b86c  fadds 5, 5, 6
  029b870  fadds 5, 5, 7
  029b874  fadds 5, 5, 8
  029b878  bdnz 0x29b850
  029b87c  fadds 5, 5, 3
  029b880  fmadds 1, 5, 1, 2
  029b884  stfs 1, 72(30)
  029b888  lfs 1, 212(31)
  029b88c  lfs 2, 208(31)
  029b890  fmuls 1, 1, 1
  029b894  lwz 4, 216(31)
  029b898  rlwinm 4, 4, 3, 29, 29
  029b89c  fmadds 1, 2, 2, 1
  029b8a0  lfs 2, 216(31)
  029b8a4  fabs 5, 2
  029b8a8  fsqrts 1, 1
  029b8ac  fabs 7, 1
  029b8b0  stfs 1, 512(1)
  029b8b4  fsubs 1, 7, 5
  029b8b8  stfs 1, 516(1)
  029b8bc  lwz 5, 512(1)
  029b8c0  lfs 1, 512(1)
  029b8c4  lwz 6, 516(1)
  029b8c8  fabs 6, 1
  029b8cc  lfs 1, 516(1)
  029b8d0  rlwimi 4, 6, 2, 30, 30
  029b8d4  fsub 2, 1, 4
  029b8d8  rlwimi 4, 5, 4, 28, 28
  029b8dc  fsub 8, 1, 4
  029b8e0  ori 5, 3, 0
  029b8e4  rlwimi 5, 4, 2, 26, 28
  029b8e8  slwi 4, 4, 2
  029b8ec  clrldi 5, 5, 32
  029b8f0  lfsx 1, 3, 4
  029b8f4  fsel 6, 2, 6, 5
  029b8f8  lfs 2, 4(5)
  029b8fc  fsel 5, 8, 5, 7
  029b900  fcmpu 0, 6, 4
  029b904  bt 1, 0x29b90c
  029b908  b 0x29ba20
  029b90c  fsubs 7, 5, 6
  029b910  fadds 5, 5, 6
  029b914  addic 3, 1, 16
  029b918  li 7, 2
  029b91c  addic 4, 3, 528
  029b920  addic 5, 3, 544
  029b924  mtctr 7
  029b928  fdivs 5, 7, 5
  029b92c  fmuls 6, 5, 5
  029b930  stfs 5, 556(1)
  029b934  stfs 5, 548(1)
  029b938  stfs 5, 552(1)
  029b93c  stfs 5, 544(1)
  029b940  lfs 8, 556(1)
  029b944  lfs 9, 548(1)
  029b948  lfs 10, 552(1)
  029b94c  fmuls 7, 6, 6
  029b950  fmuls 9, 9, 6
  029b954  fmuls 8, 8, 7
  029b958  fmuls 5, 7, 7
  029b95c  fmuls 7, 10, 7
  029b960  stfs 9, 548(1)
  029b964  fmuls 6, 8, 6
  029b968  stfs 7, 552(1)
  029b96c  stfs 6, 556(1)
  029b970  lfs 6, 528(3)
  029b974  fmuls 6, 6, 5
  029b978  stfs 6, 544(3)
  029b97c  lfs 6, 4(4)
  029b980  addic 3, 3, 8
  029b984  addic 4, 4, 8
  029b988  fmuls 6, 6, 5
  029b98c  stfs 6, 4(5)
  029b990  addic 5, 5, 8
  029b994  bdnz 0x29b970
  029b998  li 5, 4
  029b99c  ori 3, 1, 0
  029b9a0  mtctr 5
  029b9a4  lis 4, 115
  029b9a8  addic 5, 3, 544
  029b9ac  addic 4, 4, 22752
  029b9b0  ori 6, 5, 0
  029b9b4  lfs 5, 544(3)
  029b9b8  lfs 6, 0(4)
  029b9bc  fmuls 5, 5, 6
  029b9c0  lfs 6, 4(4)
  029b9c4  addic 4, 4, 8
  029b9c8  stfs 5, 544(3)
  029b9cc  lfs 5, 4(5)
  029b9d0  addic 3, 3, 8
  029b9d4  fmuls 5, 5, 6
  029b9d8  stfs 5, 4(5)
  029b9dc  addic 5, 5, 8
  029b9e0  bdnz 0x29b9b4
  029b9e4  ori 3, 1, 0
  029b9e8  mtctr 7
  029b9ec  lfs 5, 544(3)
  029b9f0  fadds 4, 4, 5
  029b9f4  lfs 5, 4(6)
  029b9f8  addic 3, 3, 16
  029b9fc  lfs 6, 8(6)
  029ba00  lfs 7, 12(6)
  029ba04  addic 6, 6, 16
  029ba08  fadds 4, 4, 5
  029ba0c  fadds 4, 4, 6
  029ba10  fadds 4, 4, 7
  029ba14  bdnz 0x29b9ec
  029ba18  fadds 4, 4, 3
  029ba1c  fmadds 4, 4, 1, 2
  029ba20  lis 29, 124
  029ba24  lis 4, 16832
  029ba28  stfs 4, 76(30)
  029ba2c  ori 3, 31, 0
  029ba30  lfs 31, -11452(29)
  029ba34  stw 4, -11452(29)
  029ba38  bl 0x2c5f88
  029ba3c  nop
  029ba40  lis 3, 32
  029ba44  lis 4, 124
  029ba48  stfs 31, -11452(29)
  029ba4c  ori 3, 3, 32639
  029ba50  lis 5, 127
  029ba54  lis 6, 124
  029ba58  ori 5, 5, 32544
  029ba5c  stw 3, -11308(4)
  029ba60  lwz 3, 48(25)
  029ba64  stw 5, -11304(6)
  029ba68  cmpwi 3, 2
  029ba6c  cmpwi 6, 3, 0
  029ba70  bt 2, 0x29baa8
  029ba74  cmpwi 1, 3, 3
  029ba78  bt 26, 0x29baa8
  029ba7c  bf 6, 0x29bac8
  029ba80  lis 4, 114
  029ba84  lfs 1, 124(26)
  029ba88  lfs 2, -3056(4)
  029ba8c  lwz 4, 52(25)
  029ba90  fmuls 1, 2, 1
  029ba94  fctiwz 1, 1
  029ba98  stfd 1, 608(1)
  029ba9c  lwz 5, 612(1)
  029baa0  cmpw 4, 5
  029baa4  bf 0, 0x29bac8
  029baa8  lwz 4, 384(25)
  029baac  cmpwi 4, 0
  029bab0  bt 2, 0x29bac8
  029bab4  lis 3, 113
  029bab8  addic 3, 3, -21848
  029babc  bl 0x6d720
  029bac0  nop
  029bac4  lwz 3, 48(25)
  029bac8  cmpwi 3, 3
  029bacc  bf 2, 0x29bd78
  029bad0  lis 3, 114
  029bad4  lfs 1, 124(26)
  029bad8  lfs 2, -3056(3)
  029badc  lwz 3, 52(25)
  029bae0  fmuls 1, 2, 1
  029bae4  fctiwz 1, 1
  029bae8  stfd 1, 608(1)
  029baec  lwz 4, 612(1)
  029baf0  cmpw 3, 4
  029baf4  bf 2, 0x29bd78
  029baf8  lis 4, 123
  029bafc  lis 3, 149
  029bb00  addic 5, 4, -18080
  029bb04  addic 3, 3, 5056
  029bb08  lfs 1, -18080(4)
  029bb0c  lfs 2, 4(5)
  029bb10  lfs 3, 864(3)
  029bb14  lfs 4, 876(3)
  029bb18  lfs 5, 868(3)
  029bb1c  fmuls 4, 4, 2
  029bb20  lfs 6, 848(3)
  029bb24  fmuls 3, 3, 2
  029bb28  lfs 7, 872(3)
  029bb2c  fmuls 5, 5, 2
  029bb30  lfs 8, 860(3)
  029bb34  fmuls 2, 7, 2
  029bb38  lfs 7, 8(5)
  029bb3c  lfs 9, 852(3)
  029bb40  lfs 10, 856(3)
  029bb44  li 4, 136
  029bb48  li 31, 0
  029bb4c  fmadds 4, 8, 1, 4
  029bb50  fmadds 3, 6, 1, 3
  029bb54  lfs 6, 880(3)
  029bb58  fmadds 5, 9, 1, 5
  029bb5c  lfs 8, 892(3)
  029bb60  fmadds 1, 10, 1, 2
  029bb64  lfs 9, 884(3)
  029bb68  lfs 11, 888(3)
  029bb6c  lfs 2, 12(5)
  029bb70  addic 30, 3, 848
  029bb74  fmadds 4, 8, 7, 4
  029bb78  fmadds 3, 6, 7, 3
  029bb7c  fmadds 5, 9, 7, 5
  029bb80  fmadds 1, 11, 7, 1
  029bb84  fadds 2, 4, 2
  029bb88  stfs 3, 464(1)
  029bb8c  stfs 5, 468(1)
  029bb90  stfs 1, 472(1)
  029bb94  stfs 2, 476(1)
  029bb98  lfs 2, 320(3)
  029bb9c  lfs 4, 324(3)
  029bba0  fadds 2, 3, 2
  029bba4  lfs 3, 328(3)
  029bba8  fadds 4, 5, 4
  029bbac  fadds 1, 1, 3
  029bbb0  lfs 3, 864(3)
  029bbb4  lfs 5, 868(3)
  029bbb8  stfs 3, 480(1)
  029bbbc  lfs 3, 872(3)
  029bbc0  stfs 5, 484(1)
  029bbc4  lfs 5, 876(3)
  029bbc8  stfs 3, 488(1)
  029bbcc  stfs 5, 492(1)
  029bbd0  stfs 2, 464(1)
  029bbd4  stfs 4, 468(1)
  029bbd8  stfs 1, 472(1)
  029bbdc  lfs 31, 128(26)
  029bbe0  lfs 30, 44(26)
  029bbe4  lfs 29, 48(26)
  029bbe8  lfs 28, 132(26)
  029bbec  lfs 27, 52(26)
  029bbf0  lvlx 31, 4, 26
  029bbf4  vspltw 31, 31, 0
  029bbf8  ori 3, 31, 0
  029bbfc  bl 0x502730
  029bc00  nop
  029bc04  addic 29, 1, 496
  029bc08  fmuls 1, 1, 31
  029bc0c  addic 4, 1, 480
  029bc10  ori 3, 29, 0
  029bc14  ori 5, 30, 0
  029bc18  bl 0x1113e0
  029bc1c  nop
  029bc20  lfs 1, 500(1)
  029bc24  lfs 2, 496(1)
  029bc28  fmuls 3, 1, 1
  029bc2c  lfs 4, 504(1)
  029bc30  lis 3, 114
  029bc34  lis 4, 123
  029bc38  lfs 5, -3064(3)
  029bc3c  lfs 6, -18064(4)
  029bc40  fmadds 3, 2, 2, 3
  029bc44  fmuls 5, 5, 6
  029bc48  li 3, 16
  029bc4c  fmadds 3, 4, 4, 3
  029bc50  fsqrts 3, 3
  029bc54  fdivs 5, 5, 3
  029bc58  fsub 6, 30, 3
  029bc5c  fsub 7, 30, 3
  029bc60  fsub 8, 30, 3
  029bc64  fsub 9, 3, 30
  029bc68  fsub 10, 3, 30
  029bc6c  fsub 3, 3, 30
  029bc70  fmuls 2, 2, 5
  029bc74  fmuls 1, 1, 5
  029bc78  fmuls 4, 4, 5
  029bc7c  fsel 5, 6, 30, 2
  029bc80  fsel 6, 7, 30, 1
  029bc84  fsel 7, 8, 30, 4
  029bc88  fsel 2, 9, 5, 2
  029bc8c  fsel 1, 10, 6, 1
  029bc90  fsel 3, 3, 7, 4
  029bc94  stfs 2, 496(1)
  029bc98  stfs 1, 500(1)
  029bc9c  stfs 3, 504(1)
  029bca0  bl 0xfc620
  029bca4  nop
  029bca8  ori 28, 3, 0
  029bcac  li 3, 2
  029bcb0  bl 0xfc620
  029bcb4  nop
  029bcb8  li 4, 0
  029bcbc  lis 5, 123
  029bcc0  fmr 1, 30
  029bcc4  subc 3, 4, 3
  029bcc8  fmr 2, 29
  029bccc  neg 7, 28
  029bcd0  fmr 3, 28
  029bcd4  cntlzw 3, 3
  029bcd8  subc 4, 28, 7
  029bcdc  lfs 4, -18060(5)
  029bce0  lis 10, 32639
  029bce4  sldi 5, 3, 58
  029bce8  addic 3, 1, 464
  029bcec  sradi 5, 5, 63
  029bcf0  ori 8, 29, 0
  029bcf4  and 4, 5, 4
  029bcf8  ori 10, 10, 32639
  029bcfc  addc 7, 7, 4
  029bd00  bl 0x126f50
  029bd04  nop
  029bd08  ori 29, 3, 0
  029bd0c  cmpwi 29, 0
  029bd10  bt 2, 0x29bd68
  029bd14  vspltisw 2, -1
  029bd18  lis 3, 114
  029bd1c  li 4, -3056
  029bd20  fmr 1, 27
  029bd24  vslw 2, 2, 2
  029bd28  lvlx 3, 4, 3
  029bd2c  li 3, 10
  029bd30  vmaddfp 2, 3, 31, 2
  029bd34  vctsxs 2, 2, 0
  029bd38  vsplth 2, 2, 1
  029bd3c  stvehx 2, 3, 29
  029bd40  bl 0x502758
  029bd44  nop
  029bd48  addic 3, 3, 64
  029bd4c  li 4, 2
  029bd50  lhz 6, 10(29)
  029bd54  li 5, 127
  029bd58  stb 3, 9(29)
  029bd5c  stw 4, 36(29)
  029bd60  stb 5, 42(29)
  029bd64  stb 6, 43(29)
  029bd68  addic 31, 31, 1
  029bd6c  extsw 31, 31
  029bd70  cmpwi 31, 32
  029bd74  bt 0, 0x29bbf8
  029bd78  li 0, 624
  029bd7c  lvx 31, 1, 0
  029bd80  ld 0, 784(1)
  029bd84  mtlr 0
  029bd88  lfd 27, 728(1)
  029bd8c  lfd 28, 736(1)
  029bd90  lfd 29, 744(1)
  029bd94  lfd 30, 752(1)
  029bd98  lfd 31, 760(1)
  029bd9c  ld 22, 648(1)
  029bda0  ld 23, 656(1)
  029bda4  ld 24, 664(1)
  029bda8  ld 25, 672(1)
  029bdac  ld 26, 680(1)
  029bdb0  ld 27, 688(1)
  029bdb4  ld 28, 696(1)
  029bdb8  ld 29, 704(1)
  029bdbc  ld 30, 712(1)
  029bdc0  ld 31, 720(1)
  029bdc4  addi 1, 1, 768
  029bdc8  blr
