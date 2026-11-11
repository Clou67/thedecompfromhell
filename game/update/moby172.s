# game/update/moby172.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M172_002ae394:   # 0x2ae394, 0x14 bytes
  02ae394  lis 3, 123
  02ae398  lis 4, 1
  02ae39c  addic 3, 3, 29460
  02ae3a0  stw 4, 72(3)
  02ae3a4  blr

M172_002ae3a8:   # 0x2ae3a8, 0x128 bytes
  02ae3a8  stdu 1, -144(1)
  02ae3ac  mflr 0
  02ae3b0  std 0, 160(1)
  02ae3b4  lis 4, 150
  02ae3b8  lwz 3, 120(3)
  02ae3bc  lis 5, 150
  02ae3c0  lis 8, 150
  02ae3c4  li 9, 1
  02ae3c8  lis 7, 150
  02ae3cc  lfs 1, -5632(4)
  02ae3d0  lis 6, 150
  02ae3d4  stfs 1, 48(3)
  02ae3d8  lfs 1, -5628(5)
  02ae3dc  lis 11, 150
  02ae3e0  stb 9, -12520(8)
  02ae3e4  lis 10, 150
  02ae3e8  stfs 1, 52(3)
  02ae3ec  lis 8, 150
  02ae3f0  lfs 1, -5624(7)
  02ae3f4  std 30, 128(1)
  02ae3f8  li 9, 64
  02ae3fc  li 30, 0
  02ae400  stfs 1, 56(3)
  02ae404  std 28, 112(1)
  02ae408  lfs 1, -5620(6)
  02ae40c  lis 28, 150
  02ae410  stfs 1, 60(3)
  02ae414  lbz 12, -5636(11)
  02ae418  std 31, 136(1)
  02ae41c  stb 12, 64(3)
  02ae420  lbz 31, -5635(10)
  02ae424  li 12, 96
  02ae428  std 29, 120(1)
  02ae42c  stb 31, 65(3)
  02ae430  lbz 29, -5634(8)
  02ae434  lis 31, 18432
  02ae438  stb 29, 66(3)
  02ae43c  stb 9, -5636(11)
  02ae440  lis 3, 17279
  02ae444  stb 12, -5635(10)
  02ae448  addic 11, 28, -23188
  02ae44c  stb 9, -5634(8)
  02ae450  lis 10, 147
  02ae454  stw 30, -5632(4)
  02ae458  lis 8, 18448
  02ae45c  stw 31, -5628(5)
  02ae460  stw 3, -5624(7)
  02ae464  lis 4, 230
  02ae468  stw 30, -5620(6)
  02ae46c  lis 5, 17168
  02ae470  lis 3, 165
  02ae474  stw 30, 8(11)
  02ae478  lis 6, 164
  02ae47c  stw 8, -11152(10)
  02ae480  li 7, 144
  02ae484  lis 8, 165
  02ae488  lis 9, 5
  02ae48c  stw 5, -23008(4)
  02ae490  stw 5, 20252(3)
  02ae494  li 4, 96
  02ae498  stw 7, -28488(6)
  02ae49c  li 3, 64
  02ae4a0  li 5, 64
  02ae4a4  stw 9, 8144(8)
  02ae4a8  bl 0x780f4
  02ae4ac  nop
  02ae4b0  ld 0, 160(1)
  02ae4b4  mtlr 0
  02ae4b8  ld 28, 112(1)
  02ae4bc  ld 29, 120(1)
  02ae4c0  ld 30, 128(1)
  02ae4c4  ld 31, 136(1)
  02ae4c8  addi 1, 1, 144
  02ae4cc  blr

M172_002ae4d0:   # 0x2ae4d0, 0x100 bytes
  02ae4d0  stdu 1, -112(1)
  02ae4d4  mflr 0
  02ae4d8  std 0, 128(1)
  02ae4dc  lwz 3, 120(3)
  02ae4e0  lis 5, 150
  02ae4e4  lis 7, 150
  02ae4e8  lis 6, 150
  02ae4ec  li 8, 0
  02ae4f0  lfs 1, 48(3)
  02ae4f4  lis 9, 150
  02ae4f8  lis 11, 150
  02ae4fc  stfs 1, -5632(5)
  02ae500  lfs 1, 52(3)
  02ae504  lis 10, 150
  02ae508  stb 8, -12520(7)
  02ae50c  lis 5, 150
  02ae510  stfs 1, -5628(6)
  02ae514  lis 8, 150
  02ae518  lfs 1, 56(3)
  02ae51c  lis 6, 150
  02ae520  addic 8, 8, -23188
  02ae524  stfs 1, -5624(9)
  02ae528  lfs 1, 60(3)
  02ae52c  cmpwi 4, 0
  02ae530  stfs 1, -5620(11)
  02ae534  lbz 7, 64(3)
  02ae538  stb 7, -5636(10)
  02ae53c  lbz 9, 65(3)
  02ae540  li 7, 1
  02ae544  stb 9, -5635(5)
  02ae548  lbz 3, 66(3)
  02ae54c  stb 3, -5634(6)
  02ae550  stw 7, 8(8)
  02ae554  bt 2, 0x2ae598
  02ae558  lis 3, 147
  02ae55c  lis 5, 18682
  02ae560  lis 6, 164
  02ae564  lis 7, 230
  02ae568  li 8, 500
  02ae56c  stw 5, -11152(3)
  02ae570  lis 3, 17460
  02ae574  lis 5, 165
  02ae578  lis 9, 31
  02ae57c  stw 8, -28488(6)
  02ae580  lis 4, 17402
  02ae584  lis 6, 165
  02ae588  stw 3, -23008(7)
  02ae58c  ori 3, 9, 16384
  02ae590  stw 4, 20252(5)
  02ae594  stw 3, 8144(6)
  02ae598  lis 3, 150
  02ae59c  addic 3, 3, -12416
  02ae5a0  lwz 4, 572(3)
  02ae5a4  lwz 5, 576(3)
  02ae5a8  lwz 6, 580(3)
  02ae5ac  extsw 3, 4
  02ae5b0  extsw 4, 5
  02ae5b4  extsw 5, 6
  02ae5b8  bl 0x780f4
  02ae5bc  nop
  02ae5c0  ld 0, 128(1)
  02ae5c4  mtlr 0
  02ae5c8  addi 1, 1, 112
  02ae5cc  blr

FUN_002ae5d8:   # 0x2ae5d8, 0x408 bytes
  02ae5d8  stdu 1, -224(1)
  02ae5dc  mflr 0
  02ae5e0  std 0, 240(1)
  02ae5e4  stfd 30, 208(1)
  02ae5e8  stfd 31, 216(1)
  02ae5ec  std 30, 192(1)
  02ae5f0  ori 30, 3, 0
  02ae5f4  li 3, 172
  02ae5f8  std 31, 200(1)
  02ae5fc  fmr 31, 2
  02ae600  ori 31, 4, 0
  02ae604  std 29, 184(1)
  02ae608  std 28, 176(1)
  02ae60c  std 27, 168(1)
  02ae610  std 26, 160(1)
  02ae614  std 25, 152(1)
  02ae618  std 24, 144(1)
  02ae61c  std 23, 136(1)
  02ae620  std 22, 128(1)
  02ae624  fmr 30, 1
  02ae628  bl 0xefa28
  02ae62c  nop
  02ae630  ori 27, 3, 0
  02ae634  cmpwi 27, 0
  02ae638  bt 2, 0x2ae99c
  02ae63c  lis 3, 162
  02ae640  lis 29, 151
  02ae644  lwz 28, 120(27)
  02ae648  li 4, 255
  02ae64c  addic 3, 3, -16448
  02ae650  li 5, 1
  02ae654  addic 29, 29, -25376
  02ae658  sth 4, 50(27)
  02ae65c  addic 6, 29, 8032
  02ae660  stw 5, 40(3)
  02ae664  addic 3, 29, 8096
  02ae668  stw 27, 8160(29)
  02ae66c  stb 4, 48(27)
  02ae670  stb 5, 49(27)
  02ae674  stb 5, 32(27)
  02ae678  stfs 30, 72(27)
  02ae67c  stfs 31, 68(27)
  02ae680  stw 6, 36(28)
  02ae684  stw 3, 40(28)
  02ae688  stw 30, 0(28)
  02ae68c  li 3, 0
  02ae690  lfs 1, 0(31)
  02ae694  stfs 1, 16(27)
  02ae698  lfs 1, 4(31)
  02ae69c  stfs 1, 20(27)
  02ae6a0  lfs 1, 8(31)
  02ae6a4  stfs 1, 24(27)
  02ae6a8  lfs 1, 12(31)
  02ae6ac  stfs 1, 28(27)
  02ae6b0  stw 3, 8(28)
  02ae6b4  stw 3, 12(28)
  02ae6b8  lwz 3, 764(29)
  02ae6bc  cmpwi 3, 0
  02ae6c0  bt 2, 0x2ae6f4
  02ae6c4  bl 0x1122ac
  02ae6c8  nop
  02ae6cc  cmpwi 3, 0
  02ae6d0  bt 2, 0x2ae6f4
  02ae6d4  lfs 1, 260(29)
  02ae6d8  lfs 2, 256(29)
  02ae6dc  fmuls 1, 1, 1
  02ae6e0  lfs 3, 264(29)
  02ae6e4  fmadds 1, 2, 2, 1
  02ae6e8  fmadds 1, 3, 3, 1
  02ae6ec  fsqrts 1, 1
  02ae6f0  b 0x2ae700
  02ae6f4  lis 3, 43
  02ae6f8  addi 3, 3, -6704
  02ae6fc  lfs 1, 0(3)
  02ae700  lis 3, 43
  02ae704  vspltisw 2, -1
  02ae708  li 5, 4
  02ae70c  stfs 1, 4(28)
  02ae710  addi 3, 3, -6704
  02ae714  lis 4, 114
  02ae718  li 6, -3056
  02ae71c  vslw 2, 2, 2
  02ae720  lis 7, 150
  02ae724  <unknown>
  02ae728  li 3, 16
  02ae72c  vspltw 3, 3, 0
  02ae730  <unknown>
  02ae734  lis 5, 16076
  02ae738  li 4, 0
  02ae73c  vmaddfp 2, 4, 3, 2
  02ae740  ori 5, 5, 52429
  02ae744  lis 8, 150
  02ae748  li 9, 1
  02ae74c  lis 6, 150
  02ae750  lis 10, 150
  02ae754  lis 11, 150
  02ae758  lis 26, 150
  02ae75c  lis 12, 150
  02ae760  lis 24, 150
  02ae764  li 25, 64
  02ae768  vctsxs 2, 2, 0
  02ae76c  lis 22, 17279
  02ae770  vspltw 2, 2, 0
  02ae774  stvewx 2, 3, 28
  02ae778  stw 4, 24(28)
  02ae77c  stw 4, 28(28)
  02ae780  stw 4, 20(28)
  02ae784  stw 5, 68(28)
  02ae788  lwz 3, 120(27)
  02ae78c  stb 9, -12520(7)
  02ae790  lfs 1, -5632(8)
  02ae794  lis 9, 18432
  02ae798  stfs 1, 48(3)
  02ae79c  lfs 1, -5628(6)
  02ae7a0  stfs 1, 52(3)
  02ae7a4  lfs 1, -5624(10)
  02ae7a8  stfs 1, 56(3)
  02ae7ac  lfs 1, -5620(11)
  02ae7b0  stfs 1, 60(3)
  02ae7b4  lbz 5, -5636(26)
  02ae7b8  stb 5, 64(3)
  02ae7bc  lbz 7, -5635(12)
  02ae7c0  li 5, 96
  02ae7c4  stb 7, 65(3)
  02ae7c8  lbz 23, -5634(24)
  02ae7cc  lis 7, 150
  02ae7d0  stb 23, 66(3)
  02ae7d4  stb 25, -5636(26)
  02ae7d8  stb 5, -5635(12)
  02ae7dc  addic 3, 7, -23188
  02ae7e0  stb 25, -5634(24)
  02ae7e4  lis 7, 147
  02ae7e8  stw 4, -5632(8)
  02ae7ec  lis 5, 18448
  02ae7f0  stw 9, -5628(6)
  02ae7f4  lis 12, 230
  02ae7f8  stw 22, -5624(10)
  02ae7fc  lis 8, 17168
  02ae800  lis 6, 165
  02ae804  stw 4, -5620(11)
  02ae808  lis 9, 164
  02ae80c  stw 4, 8(3)
  02ae810  li 10, 144
  02ae814  stw 5, -11152(7)
  02ae818  lis 11, 165
  02ae81c  stw 8, -23008(12)
  02ae820  lis 7, 5
  02ae824  stw 8, 20252(6)
  02ae828  li 3, 64
  02ae82c  stw 10, -28488(9)
  02ae830  li 4, 96
  02ae834  li 5, 64
  02ae838  stw 7, 8144(11)
  02ae83c  bl 0x780f4
  02ae840  nop
  02ae844  ori 3, 27, 0
  02ae848  bl 0xf31a8
  02ae84c  nop
  02ae850  ori 3, 27, 0
  02ae854  bl 0x494e0
  02ae858  nop
  02ae85c  stw 3, 20(28)
  02ae860  li 3, 29
  02ae864  li 4, 1
  02ae868  bl 0xb72b0
  02ae86c  nop
  02ae870  lwz 3, 36(28)
  02ae874  li 4, 0
  02ae878  li 5, 64
  02ae87c  bl 0x5001fc
  02ae880  nop
  02ae884  lwz 3, 40(28)
  02ae888  li 4, 0
  02ae88c  li 5, 64
  02ae890  bl 0x5001fc
  02ae894  nop
  02ae898  ori 3, 27, 0
  02ae89c  lwz 5, 36(28)
  02ae8a0  li 4, 0
  02ae8a4  bl 0xf0ea8
  02ae8a8  nop
  02ae8ac  ori 3, 27, 0
  02ae8b0  lwz 5, 40(28)
  02ae8b4  li 4, 1
  02ae8b8  bl 0xf0ea8
  02ae8bc  nop
  02ae8c0  ori 3, 27, 0
  02ae8c4  bl 0x2b9870
  02ae8c8  nop
  02ae8cc  lis 4, 123
  02ae8d0  stw 3, 32(28)
  02ae8d4  lis 3, 114
  02ae8d8  lfs 1, 29572(4)
  02ae8dc  lfs 2, -3052(3)
  02ae8e0  ori 3, 27, 0
  02ae8e4  fmuls 1, 1, 2
  02ae8e8  stfs 1, 72(28)
  02ae8ec  bl 0x10c000
  02ae8f0  nop
  02ae8f4  li 3, 0
  02ae8f8  li 4, 4
  02ae8fc  ori 5, 27, 0
  02ae900  bl 0x15d12c
  02ae904  nop
  02ae908  stw 3, 44(28)
  02ae90c  ori 4, 31, 0
  02ae910  lfs 1, 16(30)
  02ae914  addic 3, 1, 112
  02ae918  li 5, 0
  02ae91c  stfs 1, 112(1)
  02ae920  lfs 1, 20(30)
  02ae924  li 7, 0
  02ae928  lfs 2, 8(31)
  02ae92c  stfs 1, 116(1)
  02ae930  lfs 1, 28(30)
  02ae934  lwz 6, 8320(29)
  02ae938  stfs 1, 124(1)
  02ae93c  stfs 2, 120(1)
  02ae940  bl 0x57820
  02ae944  nop
  02ae948  cmpwi 3, 0
  02ae94c  bt 2, 0x2ae980
  02ae950  lis 3, 161
  02ae954  li 4, 1
  02ae958  addic 3, 3, 2368
  02ae95c  stb 4, 188(27)
  02ae960  lfs 1, 32(3)
  02ae964  stfs 1, 16(27)
  02ae968  lfs 1, 36(3)
  02ae96c  stfs 1, 20(27)
  02ae970  lfs 1, 40(3)
  02ae974  stfs 1, 24(27)
  02ae978  lfs 1, 44(3)
  02ae97c  stfs 1, 28(27)
  02ae980  lis 5, 161
  02ae984  li 6, 1
  02ae988  li 3, 6
  02ae98c  li 4, 0
  02ae990  stw 6, 2248(5)
  02ae994  bl 0x11afac
  02ae998  nop
  02ae99c  ori 3, 27, 0
  02ae9a0  ld 0, 240(1)
  02ae9a4  mtlr 0
  02ae9a8  lfd 30, 208(1)
  02ae9ac  lfd 31, 216(1)
  02ae9b0  ld 22, 128(1)
  02ae9b4  ld 23, 136(1)
  02ae9b8  ld 24, 144(1)
  02ae9bc  ld 25, 152(1)
  02ae9c0  ld 26, 160(1)
  02ae9c4  ld 27, 168(1)
  02ae9c8  ld 28, 176(1)
  02ae9cc  ld 29, 184(1)
  02ae9d0  ld 30, 192(1)
  02ae9d4  ld 31, 200(1)
  02ae9d8  addi 1, 1, 224
  02ae9dc  blr

FUN_002ae9e0:   # 0x2ae9e0, 0x17c bytes
  02ae9e0  stdu 1, -144(1)
  02ae9e4  mflr 0
  02ae9e8  std 0, 160(1)
  02ae9ec  std 30, 128(1)
  02ae9f0  ori 30, 3, 0
  02ae9f4  std 31, 136(1)
  02ae9f8  lwz 3, 0(4)
  02ae9fc  ori 31, 4, 0
  02aea00  lwz 3, 120(3)
  02aea04  std 29, 120(1)
  02aea08  cmpwi 3, 0
  02aea0c  bt 2, 0x2aea18
  02aea10  li 4, 0
  02aea14  stw 4, 4(3)
  02aea18  lis 3, 151
  02aea1c  li 29, 0
  02aea20  addic 3, 3, -25376
  02aea24  stw 29, 8160(3)
  02aea28  lwz 3, 20(31)
  02aea2c  bl 0x49618
  02aea30  nop
  02aea34  li 4, 1
  02aea38  stw 29, 20(31)
  02aea3c  li 3, 0
  02aea40  bl 0xb72b0
  02aea44  nop
  02aea48  lis 4, 150
  02aea4c  lwz 3, 120(30)
  02aea50  lis 5, 150
  02aea54  lis 7, 150
  02aea58  lis 6, 150
  02aea5c  lis 8, 150
  02aea60  stb 29, -12520(4)
  02aea64  lfs 1, 48(3)
  02aea68  lis 4, 150
  02aea6c  lis 9, 230
  02aea70  stfs 1, -5632(5)
  02aea74  lfs 1, 52(3)
  02aea78  lis 5, 150
  02aea7c  lis 10, 164
  02aea80  stfs 1, -5628(7)
  02aea84  lfs 1, 56(3)
  02aea88  stfs 1, -5624(6)
  02aea8c  lfs 1, 60(3)
  02aea90  lis 6, 150
  02aea94  stfs 1, -5620(8)
  02aea98  lbz 7, 64(3)
  02aea9c  lis 8, 150
  02aeaa0  stb 7, -5636(4)
  02aeaa4  lbz 7, 65(3)
  02aeaa8  addic 8, 8, -23188
  02aeaac  li 4, 1
  02aeab0  stb 7, -5635(5)
  02aeab4  lis 5, 147
  02aeab8  lbz 3, 66(3)
  02aeabc  lis 7, 18682
  02aeac0  stb 3, -5634(6)
  02aeac4  stw 4, 8(8)
  02aeac8  lis 3, 17460
  02aeacc  lis 4, 165
  02aead0  stw 7, -11152(5)
  02aead4  lis 5, 17402
  02aead8  stw 3, -23008(9)
  02aeadc  lis 6, 150
  02aeae0  lis 3, 31
  02aeae4  stw 5, 20252(4)
  02aeae8  li 7, 500
  02aeaec  lis 4, 165
  02aeaf0  addic 5, 6, -12416
  02aeaf4  ori 3, 3, 16384
  02aeaf8  stw 7, -28488(10)
  02aeafc  stw 3, 8144(4)
  02aeb00  lwz 3, 572(5)
  02aeb04  lwz 4, 576(5)
  02aeb08  lwz 5, 580(5)
  02aeb0c  extsw 3, 3
  02aeb10  extsw 4, 4
  02aeb14  extsw 5, 5
  02aeb18  bl 0x780f4
  02aeb1c  nop
  02aeb20  bl 0x7b868
  02aeb24  nop
  02aeb28  ori 3, 30, 0
  02aeb2c  bl 0xefb38
  02aeb30  nop
  02aeb34  lis 3, 149
  02aeb38  addic 3, 3, 5056
  02aeb3c  stw 29, 916(3)
  02aeb40  ld 0, 160(1)
  02aeb44  mtlr 0
  02aeb48  ld 29, 120(1)
  02aeb4c  ld 30, 128(1)
  02aeb50  ld 31, 136(1)
  02aeb54  addi 1, 1, 144
  02aeb58  blr

M172_002aeb68:   # 0x2aeb68, 0x1bc bytes
  02aeb68  stdu 1, -384(1)
  02aeb6c  mflr 0
  02aeb70  std 0, 400(1)
  02aeb74  stfd 30, 368(1)
  02aeb78  stfd 31, 376(1)
  02aeb7c  std 30, 352(1)
  02aeb80  ori 30, 3, 0
  02aeb84  std 31, 360(1)
  02aeb88  lwz 3, 32(4)
  02aeb8c  ori 31, 4, 0
  02aeb90  std 29, 344(1)
  02aeb94  std 28, 336(1)
  02aeb98  std 27, 328(1)
  02aeb9c  cmpwi 3, 0
  02aeba0  bt 2, 0x2aecf8
  02aeba4  lis 4, 43
  02aeba8  lwz 3, 120(3)
  02aebac  li 5, 0
  02aebb0  addi 4, 4, -5284
  02aebb4  lis 6, 16102
  02aebb8  lfs 30, 0(4)
  02aebbc  stw 5, 124(1)
  02aebc0  ori 5, 6, 26214
  02aebc4  lwz 6, 12(3)
  02aebc8  lfs 2, 12(3)
  02aebcc  srawi 7, 6, 31
  02aebd0  lfs 3, 4(4)
  02aebd4  lfs 31, 124(1)
  02aebd8  srwi 8, 7, 1
  02aebdc  xor 6, 8, 6
  02aebe0  subc 4, 6, 7
  02aebe4  cmpw 1, 4, 5
  02aebe8  bf 5, 0x2aec00
  02aebec  lis 4, 114
  02aebf0  lfs 1, -3064(4)
  02aebf4  fnmsubs 2, 1, 3, 2
  02aebf8  stfs 2, 12(3)
  02aebfc  b 0x2aec14
  02aec00  lis 4, 114
  02aec04  lfs 1, -3064(4)
  02aec08  bf 4, 0x2aec14
  02aec0c  fmadds 2, 1, 3, 2
  02aec10  stfs 2, 12(3)
  02aec14  lis 3, 43
  02aec18  addic 29, 1, 192
  02aec1c  addi 3, 3, -5284
  02aec20  lfs 2, 8(3)
  02aec24  lwz 5, 32(31)
  02aec28  ori 3, 29, 0
  02aec2c  fmuls 1, 1, 2
  02aec30  addic 4, 5, 64
  02aec34  stfs 1, 72(5)
  02aec38  bl 0x500ca4
  02aec3c  nop
  02aec40  addic 28, 1, 256
  02aec44  addic 4, 30, 192
  02aec48  ori 3, 28, 0
  02aec4c  bl 0x500f6c
  02aec50  nop
  02aec54  addic 27, 1, 128
  02aec58  ori 4, 28, 0
  02aec5c  ori 3, 27, 0
  02aec60  ori 5, 29, 0
  02aec64  bl 0x50162c
  02aec68  nop
  02aec6c  lwz 3, 32(31)
  02aec70  ori 4, 27, 0
  02aec74  addic 3, 3, 192
  02aec78  bl 0x500fa8
  02aec7c  nop
  02aec80  lfs 1, 144(1)
  02aec84  lfs 2, 176(1)
  02aec88  fmuls 1, 1, 30
  02aec8c  lfs 3, 148(1)
  02aec90  lfs 4, 180(1)
  02aec94  fmuls 3, 3, 30
  02aec98  lfs 5, 16(30)
  02aec9c  lfs 6, 152(1)
  02aeca0  lwz 4, 32(31)
  02aeca4  ori 3, 4, 0
  02aeca8  fmadds 1, 2, 31, 1
  02aecac  fmuls 2, 6, 30
  02aecb0  lfs 6, 184(1)
  02aecb4  fmadds 3, 4, 31, 3
  02aecb8  lfs 7, 156(1)
  02aecbc  lfs 8, 188(1)
  02aecc0  fmuls 4, 7, 30
  02aecc4  fadds 1, 1, 5
  02aecc8  fmadds 2, 6, 31, 2
  02aeccc  fmadds 4, 8, 31, 4
  02aecd0  stfs 1, 16(4)
  02aecd4  lfs 1, 20(30)
  02aecd8  fadds 1, 3, 1
  02aecdc  stfs 1, 20(4)
  02aece0  lfs 1, 24(30)
  02aece4  stfs 4, 28(4)
  02aece8  fadds 1, 2, 1
  02aecec  stfs 1, 24(4)
  02aecf0  bl 0xf30a0
  02aecf4  nop
  02aecf8  ld 0, 400(1)
  02aecfc  mtlr 0
  02aed00  lfd 30, 368(1)
  02aed04  lfd 31, 376(1)
  02aed08  ld 27, 328(1)
  02aed0c  ld 28, 336(1)
  02aed10  ld 29, 344(1)
  02aed14  ld 30, 352(1)
  02aed18  ld 31, 360(1)
  02aed1c  addi 1, 1, 384
  02aed20  blr

M172_002aed78:   # 0x2aed78, 0x570 bytes
  02aed78  stdu 1, -368(1)
  02aed7c  mflr 0
  02aed80  std 0, 384(1)
  02aed84  stfd 23, 296(1)
  02aed88  stfd 24, 304(1)
  02aed8c  stfd 25, 312(1)
  02aed90  stfd 26, 320(1)
  02aed94  stfd 27, 328(1)
  02aed98  stfd 28, 336(1)
  02aed9c  stfd 29, 344(1)
  02aeda0  stfd 30, 352(1)
  02aeda4  stfd 31, 360(1)
  02aeda8  std 31, 288(1)
  02aedac  ori 31, 3, 0
  02aedb0  lis 3, 43
  02aedb4  std 30, 280(1)
  02aedb8  lis 10, 16512
  02aedbc  std 29, 272(1)
  02aedc0  addi 30, 3, -4828
  02aedc4  ori 29, 4, 0
  02aedc8  lfs 1, 16(31)
  02aedcc  addic 3, 1, 128
  02aedd0  lfs 2, 20(31)
  02aedd4  li 7, 1
  02aedd8  stfs 1, 128(1)
  02aeddc  ori 10, 10, 32896
  02aede0  lfs 1, 28(31)
  02aede4  stfs 2, 132(1)
  02aede8  stfs 1, 140(1)
  02aedec  lfs 27, 0(30)
  02aedf0  lfs 1, 24(31)
  02aedf4  fadds 2, 1, 27
  02aedf8  fmr 1, 27
  02aedfc  stfs 2, 136(1)
  02aee00  lfs 28, 4(30)
  02aee04  lfs 29, 12(30)
  02aee08  lfs 30, 16(30)
  02aee0c  fmr 2, 28
  02aee10  lfs 3, 8(30)
  02aee14  fmr 4, 29
  02aee18  std 28, 264(1)
  02aee1c  std 27, 256(1)
  02aee20  std 26, 248(1)
  02aee24  std 25, 240(1)
  02aee28  std 24, 232(1)
  02aee2c  fmr 5, 30
  02aee30  bl 0x1246b8
  02aee34  nop
  02aee38  li 28, 0
  02aee3c  lfs 31, 20(30)
  02aee40  ori 30, 28, 0
  02aee44  lis 10, 16512
  02aee48  fmr 1, 27
  02aee4c  addic 3, 1, 128
  02aee50  fmr 2, 28
  02aee54  li 7, 1
  02aee58  fmr 3, 31
  02aee5c  fmr 4, 29
  02aee60  ori 10, 10, 32896
  02aee64  fmr 5, 30
  02aee68  bl 0x1246b8
  02aee6c  nop
  02aee70  addic 28, 28, 1
  02aee74  cmpwi 28, 5
  02aee78  bt 0, 0x2aee44
  02aee7c  clrlwi 3, 29, 24
  02aee80  cmpwi 3, 0
  02aee84  bt 2, 0x2af294
  02aee88  lis 3, 149
  02aee8c  lfs 1, 20(31)
  02aee90  addic 3, 3, 5056
  02aee94  lfs 2, 324(3)
  02aee98  lfs 3, 320(3)
  02aee9c  fsubs 1, 2, 1
  02aeea0  lfs 2, 16(31)
  02aeea4  fsubs 2, 3, 2
  02aeea8  lfs 3, 328(3)
  02aeeac  lfs 4, 24(31)
  02aeeb0  fsubs 3, 3, 4
  02aeeb4  fmuls 1, 1, 1
  02aeeb8  lis 3, 43
  02aeebc  li 27, 10
  02aeec0  addi 3, 3, -4828
  02aeec4  lfs 31, 24(3)
  02aeec8  fmadds 1, 2, 2, 1
  02aeecc  stw 30, 156(1)
  02aeed0  stw 30, 152(1)
  02aeed4  stw 30, 148(1)
  02aeed8  stw 30, 144(1)
  02aeedc  lfs 30, 28(3)
  02aeee0  fmadds 29, 3, 3, 1
  02aeee4  fsqrts 29, 29
  02aeee8  fcmpu 0, 29, 30
  02aeeec  cror 6, 1, 2
  02aeef0  bt 6, 0x2aef04
  02aeef4  fmr 1, 29
  02aeef8  bl 0x502758
  02aeefc  nop
  02aef00  addic 27, 3, 2
  02aef04  lis 3, 43
  02aef08  cmpwi 27, 0
  02aef0c  addi 3, 3, -4828
  02aef10  ori 28, 30, 0
  02aef14  lfs 1, 32(3)
  02aef18  fsubs 2, 1, 29
  02aef1c  fsub 1, 29, 1
  02aef20  fsel 31, 1, 31, 2
  02aef24  bf 1, 0x2af0d0
  02aef28  lis 3, 43
  02aef2c  addic 29, 31, 16
  02aef30  addi 3, 3, -4828
  02aef34  lfs 24, 36(3)
  02aef38  lfs 25, 40(3)
  02aef3c  lfs 26, 44(3)
  02aef40  lfs 27, 48(3)
  02aef44  lfs 28, 52(3)
  02aef48  lfs 29, 56(3)
  02aef4c  fmr 1, 30
  02aef50  fmr 2, 24
  02aef54  bl 0xfcbe8
  02aef58  nop
  02aef5c  lis 3, 114
  02aef60  lis 5, 20224
  02aef64  lis 4, 20224
  02aef68  lis 6, 12287
  02aef6c  ori 4, 4, 28671
  02aef70  lfs 2, -3052(3)
  02aef74  ori 3, 5, 36863
  02aef78  lis 5, 20224
  02aef7c  ori 6, 6, 65535
  02aef80  fmuls 3, 2, 31
  02aef84  ori 5, 5, 32767
  02aef88  stw 3, 160(1)
  02aef8c  stw 3, 164(1)
  02aef90  lis 3, 12032
  02aef94  stw 4, 172(1)
  02aef98  lis 4, 12032
  02aef9c  stw 6, 176(1)
  02aefa0  ori 3, 3, 24447
  02aefa4  stw 5, 168(1)
  02aefa8  ori 4, 4, 20351
  02aefac  lis 5, 12032
  02aefb0  stw 6, 180(1)
  02aefb4  lis 6, 12032
  02aefb8  fmsubs 23, 1, 2, 3
  02aefbc  ori 5, 5, 16255
  02aefc0  stw 3, 184(1)
  02aefc4  stw 4, 188(1)
  02aefc8  li 3, 6
  02aefcc  ori 4, 6, 79
  02aefd0  lis 6, 12032
  02aefd4  stw 5, 192(1)
  02aefd8  lis 5, 16128
  02aefdc  stw 4, 196(1)
  02aefe0  stw 6, 200(1)
  02aefe4  stw 5, 204(1)
  02aefe8  bl 0xfc620
  02aefec  nop
  02aeff0  sldi 3, 3, 2
  02aeff4  addc 3, 3, 1
  02aeff8  clrldi 4, 3, 32
  02aeffc  li 3, 6
  02af000  lwz 4, 160(4)
  02af004  extsw 26, 4
  02af008  bl 0xfc620
  02af00c  nop
  02af010  lis 25, 114
  02af014  sldi 3, 3, 2
  02af018  addc 3, 3, 1
  02af01c  lfs 1, -3056(25)
  02af020  clrldi 3, 3, 32
  02af024  fmuls 2, 1, 26
  02af028  fmuls 1, 1, 27
  02af02c  lwz 3, 184(3)
  02af030  extsw 24, 3
  02af034  fctiwz 2, 2
  02af038  fctiwz 1, 1
  02af03c  stfd 2, 208(1)
  02af040  lwz 3, 212(1)
  02af044  stfd 1, 208(1)
  02af048  lwz 4, 212(1)
  02af04c  extsw 3, 3
  02af050  extsw 4, 4
  02af054  bl 0xfe484
  02af058  nop
  02af05c  lfs 1, -3056(25)
  02af060  ori 25, 3, 0
  02af064  fmuls 2, 1, 28
  02af068  fmuls 1, 1, 29
  02af06c  fctiwz 2, 2
  02af070  fctiwz 1, 1
  02af074  stfd 2, 208(1)
  02af078  lwz 3, 212(1)
  02af07c  stfd 1, 208(1)
  02af080  extsw 3, 3
  02af084  lwz 4, 212(1)
  02af088  extsw 4, 4
  02af08c  bl 0xfe484
  02af090  nop
  02af094  ori 9, 3, 0
  02af098  std 30, 112(1)
  02af09c  ori 8, 25, 0
  02af0a0  fmr 1, 25
  02af0a4  addic 4, 1, 144
  02af0a8  fmr 2, 23
  02af0ac  ori 3, 29, 0
  02af0b0  std 30, 120(1)
  02af0b4  ori 5, 26, 0
  02af0b8  ori 6, 24, 0
  02af0bc  bl 0x123390
  02af0c0  nop
  02af0c4  addic 28, 28, 1
  02af0c8  cmpw 28, 27
  02af0cc  bt 0, 0x2aef4c
  02af0d0  lis 3, 161
  02af0d4  lis 4, 43
  02af0d8  lis 5, 16243
  02af0dc  addi 4, 4, -4828
  02af0e0  ori 5, 5, 13107
  02af0e4  lwz 3, 1812(3)
  02af0e8  srawi 6, 3, 31
  02af0ec  lfs 30, 60(4)
  02af0f0  srwi 7, 6, 1
  02af0f4  lfs 31, 64(4)
  02af0f8  xor 3, 7, 3
  02af0fc  subc 3, 3, 6
  02af100  cmpw 3, 5
  02af104  bf 0, 0x2af1a8
  02af108  lis 3, 43
  02af10c  lis 29, 114
  02af110  addi 30, 3, -4828
  02af114  li 26, 32
  02af118  addic 28, 31, 16
  02af11c  addic 27, 1, 144
  02af120  ori 3, 31, 0
  02af124  lfs 1, 44(30)
  02af128  li 8, 127
  02af12c  lfs 2, -3056(29)
  02af130  ori 4, 28, 0
  02af134  std 26, 112(1)
  02af138  ori 5, 27, 0
  02af13c  fmuls 2, 2, 1
  02af140  li 9, 127
  02af144  fmr 1, 30
  02af148  li 10, 127
  02af14c  fctiwz 2, 2
  02af150  stfd 2, 208(1)
  02af154  lwz 7, 212(1)
  02af158  extsw 7, 7
  02af15c  bl 0x1d4d88
  02af160  nop
  02af164  lfs 2, 68(30)
  02af168  ori 5, 27, 0
  02af16c  lfs 3, -3056(29)
  02af170  ori 3, 31, 0
  02af174  std 26, 112(1)
  02af178  fmr 1, 31
  02af17c  fmuls 2, 3, 2
  02af180  ori 4, 28, 0
  02af184  li 8, 127
  02af188  li 9, 32
  02af18c  li 10, 0
  02af190  fctiwz 2, 2
  02af194  stfd 2, 208(1)
  02af198  lwz 7, 212(1)
  02af19c  extsw 7, 7
  02af1a0  bl 0x1d4d88
  02af1a4  nop
  02af1a8  lis 3, 43
  02af1ac  lis 29, 114
  02af1b0  addi 30, 3, -4828
  02af1b4  li 6, 48
  02af1b8  addic 28, 31, 16
  02af1bc  addic 27, 1, 144
  02af1c0  ori 3, 31, 0
  02af1c4  lfs 1, 48(30)
  02af1c8  li 8, 127
  02af1cc  lfs 2, -3056(29)
  02af1d0  ori 4, 28, 0
  02af1d4  std 6, 112(1)
  02af1d8  ori 5, 27, 0
  02af1dc  fmuls 2, 2, 1
  02af1e0  li 9, 64
  02af1e4  fmr 1, 30
  02af1e8  li 10, 0
  02af1ec  fctiwz 2, 2
  02af1f0  stfd 2, 208(1)
  02af1f4  lwz 7, 212(1)
  02af1f8  extsw 7, 7
  02af1fc  bl 0x1d4d88
  02af200  nop
  02af204  lfs 2, 72(30)
  02af208  li 6, 64
  02af20c  lfs 3, -3056(29)
  02af210  li 8, 96
  02af214  fmr 1, 31
  02af218  ori 3, 31, 0
  02af21c  fmuls 2, 3, 2
  02af220  ori 4, 28, 0
  02af224  std 6, 112(1)
  02af228  ori 5, 27, 0
  02af22c  li 9, 16
  02af230  li 10, 0
  02af234  fctiwz 2, 2
  02af238  stfd 2, 208(1)
  02af23c  lwz 7, 212(1)
  02af240  extsw 7, 7
  02af244  bl 0x1d4d88
  02af248  nop
  02af24c  lfs 2, 80(30)
  02af250  li 6, 32
  02af254  lfs 3, -3056(29)
  02af258  ori 3, 31, 0
  02af25c  lfs 1, 76(30)
  02af260  ori 4, 28, 0
  02af264  fmuls 2, 3, 2
  02af268  ori 5, 27, 0
  02af26c  std 6, 112(1)
  02af270  li 8, 32
  02af274  li 9, 0
  02af278  li 10, 0
  02af27c  fctiwz 2, 2
  02af280  stfd 2, 208(1)
  02af284  lwz 7, 212(1)
  02af288  extsw 7, 7
  02af28c  bl 0x1d4d88
  02af290  nop
  02af294  ld 0, 384(1)
  02af298  mtlr 0
  02af29c  lfd 23, 296(1)
  02af2a0  lfd 24, 304(1)
  02af2a4  lfd 25, 312(1)
  02af2a8  lfd 26, 320(1)
  02af2ac  lfd 27, 328(1)
  02af2b0  lfd 28, 336(1)
  02af2b4  lfd 29, 344(1)
  02af2b8  lfd 30, 352(1)
  02af2bc  lfd 31, 360(1)
  02af2c0  ld 24, 232(1)
  02af2c4  ld 25, 240(1)
  02af2c8  ld 26, 248(1)
  02af2cc  ld 27, 256(1)
  02af2d0  ld 28, 264(1)
  02af2d4  ld 29, 272(1)
  02af2d8  ld 30, 280(1)
  02af2dc  ld 31, 288(1)
  02af2e0  addi 1, 1, 368
  02af2e4  blr

UpdateMoby_172:   # 0x2af360, 0x1340 bytes
  02af360  stdu 1, -448(1)
  02af364  mflr 0
  02af368  std 0, 464(1)
  02af36c  stfd 26, 400(1)
  02af370  stfd 27, 408(1)
  02af374  stfd 28, 416(1)
  02af378  stfd 29, 424(1)
  02af37c  stfd 30, 432(1)
  02af380  stfd 31, 440(1)
  02af384  lis 4, 43
  02af388  std 30, 384(1)
  02af38c  std 28, 368(1)
  02af390  li 5, 0
  02af394  addi 30, 4, -3352
  02af398  std 31, 392(1)
  02af39c  lis 28, 114
  02af3a0  ori 31, 3, 0
  02af3a4  std 27, 360(1)
  02af3a8  lis 3, 161
  02af3ac  li 27, 1
  02af3b0  lfs 31, 0(30)
  02af3b4  lis 4, 150
  02af3b8  stw 5, 208(1)
  02af3bc  stw 5, 212(1)
  02af3c0  stw 5, 216(1)
  02af3c4  stw 5, 220(1)
  02af3c8  lfs 1, 4(30)
  02af3cc  std 29, 376(1)
  02af3d0  lfs 2, -3052(28)
  02af3d4  lwz 29, 120(31)
  02af3d8  fmuls 1, 2, 1
  02af3dc  stw 27, 2248(3)
  02af3e0  stw 27, -5616(4)
  02af3e4  std 26, 352(1)
  02af3e8  stfs 1, 216(1)
  02af3ec  bl 0x7b7d8
  02af3f0  nop
  02af3f4  lis 3, 162
  02af3f8  li 4, 0
  02af3fc  addic 5, 3, -16448
  02af400  li 3, 6
  02af404  stw 27, 40(5)
  02af408  bl 0x11afac
  02af40c  nop
  02af410  lwz 3, 16(29)
  02af414  lis 4, 114
  02af418  addic 3, 3, -1
  02af41c  stw 3, 16(29)
  02af420  lfs 1, 8(30)
  02af424  lfs 2, -3056(4)
  02af428  lfs 5, -3052(28)
  02af42c  fmuls 1, 2, 1
  02af430  fctiwz 1, 1
  02af434  stfd 1, 328(1)
  02af438  lwz 4, 332(1)
  02af43c  neg 4, 4
  02af440  cmpw 3, 4
  02af444  bf 1, 0x2af504
  02af448  lis 27, 151
  02af44c  addic 27, 27, -25376
  02af450  lwz 4, 8324(27)
  02af454  cmpwi 1, 4, 61
  02af458  cmpwi 4, 22
  02af45c  cror 2, 2, 6
  02af460  bt 2, 0x2af504
  02af464  cmpwi 4, 114
  02af468  bt 2, 0x2af504
  02af46c  lwz 5, 8332(27)
  02af470  cmpwi 1, 5, 4
  02af474  cmpwi 5, 2
  02af478  cror 2, 2, 6
  02af47c  bt 2, 0x2af504
  02af480  cmpwi 5, 3
  02af484  bt 2, 0x2af504
  02af488  cmpwi 5, 12
  02af48c  bt 1, 0x2af504
  02af490  cmpwi 5, 7
  02af494  bt 2, 0x2af504
  02af498  cmpwi 5, 10
  02af49c  bt 2, 0x2af504
  02af4a0  cmpwi 5, 16
  02af4a4  bt 2, 0x2af504
  02af4a8  cmpwi 5, 14
  02af4ac  bf 2, 0x2af4b8
  02af4b0  cmpwi 5, 11
  02af4b4  bt 2, 0x2af504
  02af4b8  cmpwi 5, 5
  02af4bc  bt 2, 0x2af504
  02af4c0  cmpwi 4, 114
  02af4c4  bt 2, 0x2af504
  02af4c8  cmpwi 4, 101
  02af4cc  bt 2, 0x2af504
  02af4d0  cmpwi 4, 50
  02af4d4  bt 2, 0x2af504
  02af4d8  lwz 4, 768(27)
  02af4dc  cmpwi 4, 0
  02af4e0  bt 2, 0x2af504
  02af4e4  lwz 4, 764(27)
  02af4e8  cmpwi 4, 0
  02af4ec  bt 2, 0x2af648
  02af4f0  lhz 4, 166(4)
  02af4f4  cmpwi 4, 318
  02af4f8  cmpwi 1, 4, 1135
  02af4fc  bt 2, 0x2af504
  02af500  bf 6, 0x2af648
  02af504  lwz 3, 0(29)
  02af508  lwz 3, 120(3)
  02af50c  cmpwi 3, 0
  02af510  bt 2, 0x2af51c
  02af514  li 4, 0
  02af518  stw 4, 4(3)
  02af51c  lis 3, 151
  02af520  li 30, 0
  02af524  addic 3, 3, -25376
  02af528  stw 30, 8160(3)
  02af52c  lwz 3, 20(29)
  02af530  bl 0x49618
  02af534  nop
  02af538  li 4, 1
  02af53c  stw 30, 20(29)
  02af540  li 3, 0
  02af544  bl 0xb72b0
  02af548  nop
  02af54c  lis 4, 150
  02af550  lwz 3, 120(31)
  02af554  lis 5, 150
  02af558  lis 7, 150
  02af55c  lis 6, 150
  02af560  lis 8, 150
  02af564  stb 30, -12520(4)
  02af568  lfs 1, 48(3)
  02af56c  lis 4, 150
  02af570  stfs 1, -5632(5)
  02af574  lfs 1, 52(3)
  02af578  lis 5, 150
  02af57c  stfs 1, -5628(7)
  02af580  lfs 1, 56(3)
  02af584  stfs 1, -5624(6)
  02af588  lfs 1, 60(3)
  02af58c  lis 6, 150
  02af590  stfs 1, -5620(8)
  02af594  lbz 7, 64(3)
  02af598  lis 8, 150
  02af59c  stb 7, -5636(4)
  02af5a0  addic 4, 6, -23188
  02af5a4  lbz 6, 65(3)
  02af5a8  li 7, 1
  02af5ac  stb 6, -5635(5)
  02af5b0  lis 5, 147
  02af5b4  lbz 3, 66(3)
  02af5b8  lis 6, 18682
  02af5bc  stw 7, 8(4)
  02af5c0  lis 4, 230
  02af5c4  stb 3, -5634(8)
  02af5c8  lis 3, 17460
  02af5cc  lis 7, 165
  02af5d0  stw 6, -11152(5)
  02af5d4  lis 8, 150
  02af5d8  lis 5, 17402
  02af5dc  stw 3, -23008(4)
  02af5e0  lis 3, 164
  02af5e4  lis 6, 31
  02af5e8  stw 5, 20252(7)
  02af5ec  li 4, 500
  02af5f0  lis 5, 165
  02af5f4  addic 7, 8, -12416
  02af5f8  ori 6, 6, 16384
  02af5fc  stw 4, -28488(3)
  02af600  stw 6, 8144(5)
  02af604  lwz 3, 572(7)
  02af608  lwz 4, 576(7)
  02af60c  lwz 5, 580(7)
  02af610  extsw 3, 3
  02af614  extsw 4, 4
  02af618  extsw 5, 5
  02af61c  bl 0x780f4
  02af620  nop
  02af624  bl 0x7b868
  02af628  nop
  02af62c  ori 3, 31, 0
  02af630  bl 0xefb38
  02af634  nop
  02af638  lis 3, 149
  02af63c  addic 3, 3, 5056
  02af640  stw 30, 916(3)
  02af644  b 0x2b0660
  02af648  cmpwi 3, 0
  02af64c  bf 0, 0x2af714
  02af650  lwz 3, 20(29)
  02af654  cmpwi 3, 0
  02af658  bt 2, 0x2af668
  02af65c  ori 4, 31, 0
  02af660  bl 0x49058
  02af664  nop
  02af668  lis 3, 150
  02af66c  li 4, 0
  02af670  lwz 8, 120(31)
  02af674  lis 6, 150
  02af678  lis 5, 150
  02af67c  lis 7, 150
  02af680  stb 4, -12520(3)
  02af684  lfs 1, 48(8)
  02af688  lis 3, 150
  02af68c  lis 9, 150
  02af690  stfs 1, -5632(6)
  02af694  lfs 1, 52(8)
  02af698  lis 4, 150
  02af69c  lis 6, 150
  02af6a0  stfs 1, -5628(5)
  02af6a4  lfs 1, 56(8)
  02af6a8  stfs 1, -5624(7)
  02af6ac  lfs 1, 60(8)
  02af6b0  stfs 1, -5620(3)
  02af6b4  lbz 5, 64(8)
  02af6b8  lis 3, 150
  02af6bc  stb 5, -5636(9)
  02af6c0  addic 3, 3, -23188
  02af6c4  lis 5, 150
  02af6c8  lbz 7, 65(8)
  02af6cc  li 9, 1
  02af6d0  addic 5, 5, -12416
  02af6d4  stb 7, -5635(4)
  02af6d8  lbz 4, 66(8)
  02af6dc  stb 4, -5634(6)
  02af6e0  stw 9, 8(3)
  02af6e4  lwz 3, 572(5)
  02af6e8  lwz 4, 576(5)
  02af6ec  lwz 5, 580(5)
  02af6f0  extsw 3, 3
  02af6f4  extsw 4, 4
  02af6f8  extsw 5, 5
  02af6fc  bl 0x780f4
  02af700  nop
  02af704  ori 3, 31, 0
  02af708  ori 4, 29, 0
  02af70c  bl 0x2aeb68
  02af710  b 0x2b0660
  02af714  lis 26, 150
  02af718  lis 3, 123
  02af71c  addic 26, 26, 19008
  02af720  lfs 2, 29572(3)
  02af724  lwz 3, 160(26)
  02af728  fmr 1, 2
  02af72c  rlwinm 3, 3, 0, 25, 25
  02af730  cmpwi 3, 0
  02af734  bt 2, 0x2af740
  02af738  lis 3, 123
  02af73c  lfs 1, 29576(3)
  02af740  lfs 3, 72(29)
  02af744  lis 3, 123
  02af748  fmsubs 1, 1, 5, 3
  02af74c  lis 4, 123
  02af750  lfs 4, 29580(3)
  02af754  lfs 6, 4(29)
  02af758  lis 3, 123
  02af75c  fmadds 1, 1, 4, 3
  02af760  fsubs 3, 1, 6
  02af764  stfs 1, 72(29)
  02af768  lfs 4, 29584(3)
  02af76c  fmadds 6, 3, 4, 6
  02af770  stfs 6, 4(29)
  02af774  lfs 3, 29576(4)
  02af778  fmuls 4, 3, 5
  02af77c  fcmpu 0, 6, 4
  02af780  cror 6, 0, 2
  02af784  bt 6, 0x2af78c
  02af788  stfs 4, 4(29)
  02af78c  fmuls 2, 2, 5
  02af790  lis 3, 123
  02af794  fmsubs 3, 3, 5, 2
  02af798  fdivs 2, 2, 3
  02af79c  lfs 3, 29568(3)
  02af7a0  lwz 3, 44(29)
  02af7a4  extsw 30, 3
  02af7a8  fsubs 1, 1, 2
  02af7ac  fmuls 1, 1, 3
  02af7b0  bl 0x502758
  02af7b4  nop
  02af7b8  ori 4, 3, 0
  02af7bc  ori 3, 30, 0
  02af7c0  bl 0x15d734
  02af7c4  nop
  02af7c8  lwz 3, 16(29)
  02af7cc  cmpwi 3, 0
  02af7d0  bf 1, 0x2af910
  02af7d4  lis 4, 43
  02af7d8  lis 5, 114
  02af7dc  addi 4, 4, -3352
  02af7e0  lfs 1, 12(4)
  02af7e4  lfs 2, -3056(5)
  02af7e8  fmuls 1, 2, 1
  02af7ec  fctiwz 1, 1
  02af7f0  stfd 1, 328(1)
  02af7f4  lfs 1, 16(4)
  02af7f8  lwz 4, 332(1)
  02af7fc  fmuls 1, 2, 1
  02af800  fctiwz 1, 1
  02af804  stfd 1, 328(1)
  02af808  lwz 5, 332(1)
  02af80c  subc 4, 4, 5
  02af810  cmpw 3, 4
  02af814  bf 0, 0x2af910
  02af818  lis 3, 43
  02af81c  lfs 1, 7456(27)
  02af820  addi 30, 3, -3352
  02af824  lis 3, 114
  02af828  lfs 2, 7460(27)
  02af82c  lfs 3, 20(30)
  02af830  lfs 4, 24(29)
  02af834  lfs 5, -3064(3)
  02af838  lfs 6, 28(29)
  02af83c  fsubs 1, 1, 4
  02af840  fmuls 3, 5, 3
  02af844  fsubs 2, 2, 6
  02af848  fmadds 1, 3, 1, 4
  02af84c  fmadds 2, 3, 2, 6
  02af850  stfs 1, 24(29)
  02af854  stfs 2, 28(29)
  02af858  lfs 2, 24(30)
  02af85c  lfs 3, 64(31)
  02af860  fmuls 2, 5, 2
  02af864  fsubs 4, 1, 3
  02af868  lfs 1, 68(31)
  02af86c  fmadds 2, 2, 4, 3
  02af870  stfs 2, 64(31)
  02af874  lfs 30, 28(30)
  02af878  lfs 2, -3064(3)
  02af87c  lfs 3, 28(29)
  02af880  fmuls 2, 2, 30
  02af884  fmuls 2, 2, 3
  02af888  bl 0x5025e0
  02af88c  nop
  02af890  lfs 2, 72(31)
  02af894  stfs 1, 68(31)
  02af898  lfs 3, 32(30)
  02af89c  fcmpu 0, 1, 3
  02af8a0  bt 0, 0x2af8b4
  02af8a4  lis 3, 16328
  02af8a8  ori 3, 3, 61206
  02af8ac  stw 3, 68(31)
  02af8b0  b 0x2af8d4
  02af8b4  lis 3, 43
  02af8b8  addi 3, 3, -3352
  02af8bc  lfs 3, 36(3)
  02af8c0  fcmpu 0, 1, 3
  02af8c4  bt 1, 0x2af8d4
  02af8c8  lis 3, -16440
  02af8cc  ori 3, 3, 61206
  02af8d0  stw 3, 68(31)
  02af8d4  lis 3, 114
  02af8d8  fmr 1, 2
  02af8dc  lfs 2, -3064(3)
  02af8e0  lfs 3, 24(29)
  02af8e4  fmuls 2, 2, 30
  02af8e8  fmuls 2, 2, 3
  02af8ec  bl 0x5025e0
  02af8f0  nop
  02af8f4  lis 3, 43
  02af8f8  stfs 1, 72(31)
  02af8fc  addi 4, 3, -3352
  02af900  ori 3, 31, 0
  02af904  lfs 1, 40(4)
  02af908  bl 0x106150
  02af90c  nop
  02af910  lfs 1, 4(29)
  02af914  lfs 2, 72(31)
  02af918  addic 3, 1, 224
  02af91c  lfs 3, 68(31)
  02af920  fneg 3, 3
  02af924  bl 0xfe610
  02af928  nop
  02af92c  lfs 1, 16(31)
  02af930  lis 3, 43
  02af934  lfs 2, 20(31)
  02af938  lis 4, 114
  02af93c  lfs 3, 24(31)
  02af940  addi 3, 3, -3352
  02af944  lfs 4, 224(1)
  02af948  lfs 5, 228(1)
  02af94c  fadds 4, 1, 4
  02af950  lfs 6, 232(1)
  02af954  fadds 7, 2, 5
  02af958  stfs 1, 192(1)
  02af95c  fadds 5, 3, 6
  02af960  stfs 2, 196(1)
  02af964  lfs 1, 28(31)
  02af968  stfs 3, 200(1)
  02af96c  stfs 1, 204(1)
  02af970  stfs 4, 16(31)
  02af974  stfs 7, 20(31)
  02af978  stfs 5, 24(31)
  02af97c  lfs 30, 12(3)
  02af980  lfs 1, -3056(4)
  02af984  lwz 4, 16(29)
  02af988  fmuls 2, 1, 30
  02af98c  fctiwz 2, 2
  02af990  stfd 2, 328(1)
  02af994  lfs 29, 44(3)
  02af998  lwz 3, 332(1)
  02af99c  fmuls 1, 1, 29
  02af9a0  fctiwz 1, 1
  02af9a4  stfd 1, 328(1)
  02af9a8  lwz 5, 332(1)
  02af9ac  subc 3, 3, 5
  02af9b0  cmpw 4, 3
  02af9b4  bf 1, 0x2afc10
  02af9b8  lis 4, 43
  02af9bc  addic 3, 31, 16
  02af9c0  addi 5, 4, -3352
  02af9c4  li 4, 0
  02af9c8  lfs 1, 48(5)
  02af9cc  bl 0xffb70
  02af9d0  nop
  02af9d4  lfs 2, 68(29)
  02af9d8  lis 3, 114
  02af9dc  lfs 5, 24(31)
  02af9e0  fadds 1, 1, 2
  02af9e4  lfs 2, -3052(3)
  02af9e8  fcmpu 0, 5, 1
  02af9ec  cror 6, 1, 2
  02af9f0  bt 6, 0x2afc10
  02af9f4  lis 3, 161
  02af9f8  addic 3, 3, 2368
  02af9fc  lwz 3, 24(3)
  02afa00  cmpwi 3, 0
  02afa04  bt 2, 0x2afa24
  02afa08  lwz 3, 36(3)
  02afa0c  cmpwi 3, 0
  02afa10  bt 2, 0x2afc10
  02afa14  lhz 3, 70(3)
  02afa18  extsh 3, 3
  02afa1c  cmpwi 3, 5
  02afa20  bf 2, 0x2afc10
  02afa24  lis 3, 43
  02afa28  addi 4, 3, -3352
  02afa2c  addic 3, 31, 24
  02afa30  lfs 3, 52(4)
  02afa34  fmuls 2, 2, 3
  02afa38  bl 0x109af0
  02afa3c  nop
  02afa40  lwz 3, 4(29)
  02afa44  lfs 2, 4(29)
  02afa48  fabs 7, 1
  02afa4c  stfs 1, 288(1)
  02afa50  lis 6, 114
  02afa54  fabs 6, 2
  02afa58  lis 4, 115
  02afa5c  addic 4, 4, 22784
  02afa60  fsubs 1, 6, 7
  02afa64  stfs 1, 292(1)
  02afa68  lwz 5, 288(1)
  02afa6c  lfs 1, 288(1)
  02afa70  lfs 5, 24(31)
  02afa74  lfs 4, 68(31)
  02afa78  fabs 8, 1
  02afa7c  lfs 3, -3052(6)
  02afa80  rlwinm 5, 5, 3, 29, 29
  02afa84  lwz 6, 292(1)
  02afa88  lfs 1, 292(1)
  02afa8c  rlwimi 5, 6, 2, 30, 30
  02afa90  fsub 2, 1, 31
  02afa94  fsub 9, 1, 31
  02afa98  rlwimi 5, 3, 4, 28, 28
  02afa9c  ori 3, 4, 0
  02afaa0  rlwimi 3, 5, 2, 26, 28
  02afaa4  slwi 5, 5, 2
  02afaa8  clrldi 3, 3, 32
  02afaac  fsel 7, 2, 6, 7
  02afab0  lfsx 1, 4, 5
  02afab4  lfs 2, 4(3)
  02afab8  fsel 6, 9, 8, 6
  02afabc  fcmpu 0, 7, 31
  02afac0  bt 1, 0x2afacc
  02afac4  fmr 1, 31
  02afac8  b 0x2afbf0
  02afacc  fsubs 8, 6, 7
  02afad0  fadds 6, 6, 7
  02afad4  addic 3, 1, 16
  02afad8  li 7, 2
  02afadc  addic 4, 3, 280
  02afae0  addic 5, 3, 296
  02afae4  mtctr 7
  02afae8  fdivs 6, 8, 6
  02afaec  fmuls 7, 6, 6
  02afaf0  stfs 6, 308(1)
  02afaf4  stfs 6, 300(1)
  02afaf8  stfs 6, 304(1)
  02afafc  stfs 6, 296(1)
  02afb00  lfs 9, 308(1)
  02afb04  lfs 10, 300(1)
  02afb08  lfs 11, 304(1)
  02afb0c  fmuls 8, 7, 7
  02afb10  fmuls 10, 10, 7
  02afb14  fmuls 9, 9, 8
  02afb18  fmuls 6, 8, 8
  02afb1c  fmuls 8, 11, 8
  02afb20  stfs 10, 300(1)
  02afb24  fmuls 7, 9, 7
  02afb28  stfs 8, 304(1)
  02afb2c  stfs 7, 308(1)
  02afb30  lfs 7, 280(3)
  02afb34  fmuls 7, 7, 6
  02afb38  stfs 7, 296(3)
  02afb3c  lfs 7, 4(4)
  02afb40  addic 3, 3, 8
  02afb44  addic 4, 4, 8
  02afb48  fmuls 7, 7, 6
  02afb4c  stfs 7, 4(5)
  02afb50  addic 5, 5, 8
  02afb54  bdnz 0x2afb30
  02afb58  li 5, 4
  02afb5c  ori 3, 1, 0
  02afb60  mtctr 5
  02afb64  lis 4, 115
  02afb68  addic 5, 3, 296
  02afb6c  addic 4, 4, 22752
  02afb70  ori 6, 5, 0
  02afb74  lfs 6, 296(3)
  02afb78  lfs 7, 0(4)
  02afb7c  fmuls 6, 6, 7
  02afb80  lfs 7, 4(4)
  02afb84  addic 4, 4, 8
  02afb88  stfs 6, 296(3)
  02afb8c  lfs 6, 4(5)
  02afb90  addic 3, 3, 8
  02afb94  fmuls 6, 6, 7
  02afb98  stfs 6, 4(5)
  02afb9c  addic 5, 5, 8
  02afba0  bdnz 0x2afb74
  02afba4  fmr 6, 31
  02afba8  ori 3, 1, 0
  02afbac  mtctr 7
  02afbb0  lfs 7, 296(3)
  02afbb4  fadds 6, 6, 7
  02afbb8  addic 3, 3, 16
  02afbbc  lfs 7, 4(6)
  02afbc0  lfs 8, 8(6)
  02afbc4  lfs 9, 12(6)
  02afbc8  addic 6, 6, 16
  02afbcc  fadds 6, 6, 7
  02afbd0  fadds 6, 6, 8
  02afbd4  fadds 6, 6, 9
  02afbd8  bdnz 0x2afbb0
  02afbdc  lis 3, 43
  02afbe0  addi 3, 3, -3352
  02afbe4  lfs 7, 56(3)
  02afbe8  fadds 6, 6, 7
  02afbec  fmadds 1, 6, 1, 2
  02afbf0  lis 3, 43
  02afbf4  addi 3, 3, -3352
  02afbf8  lfs 2, 32(3)
  02afbfc  fmuls 2, 3, 2
  02afc00  fsub 3, 2, 1
  02afc04  fsel 1, 3, 1, 2
  02afc08  fsubs 1, 4, 1
  02afc0c  stfs 1, 68(31)
  02afc10  lis 3, 43
  02afc14  lwz 5, 16(31)
  02afc18  lis 4, 16528
  02afc1c  addi 3, 3, -3352
  02afc20  srawi 6, 5, 31
  02afc24  lfs 1, 60(3)
  02afc28  srwi 3, 6, 1
  02afc2c  xor 3, 3, 5
  02afc30  subc 3, 3, 6
  02afc34  cmpw 3, 4
  02afc38  bt 0, 0x2afc98
  02afc3c  lis 4, 43
  02afc40  lis 5, 17534
  02afc44  addi 4, 4, -3352
  02afc48  ori 5, 5, 40960
  02afc4c  cmpw 3, 5
  02afc50  lfs 2, 64(4)
  02afc54  bt 1, 0x2afc98
  02afc58  lwz 5, 20(31)
  02afc5c  lis 3, 17534
  02afc60  srawi 6, 5, 31
  02afc64  lis 4, 16528
  02afc68  srwi 7, 6, 1
  02afc6c  ori 3, 3, 40960
  02afc70  xor 5, 7, 5
  02afc74  subc 5, 5, 6
  02afc78  cmpw 5, 4
  02afc7c  cmpw 1, 5, 3
  02afc80  bt 0, 0x2afc98
  02afc84  fcmpu 6, 5, 1
  02afc88  bt 5, 0x2afc98
  02afc8c  fcmpu 1, 5, 2
  02afc90  bt 24, 0x2afc98
  02afc94  bf 5, 0x2afdd4
  02afc98  lwz 3, 0(29)
  02afc9c  lwz 3, 120(3)
  02afca0  cmpwi 3, 0
  02afca4  bt 2, 0x2afcb0
  02afca8  li 4, 0
  02afcac  stw 4, 4(3)
  02afcb0  li 30, 0
  02afcb4  stw 30, 8160(27)
  02afcb8  lwz 3, 20(29)
  02afcbc  bl 0x49618
  02afcc0  nop
  02afcc4  li 4, 1
  02afcc8  stw 30, 20(29)
  02afccc  li 3, 0
  02afcd0  bl 0xb72b0
  02afcd4  nop
  02afcd8  lis 4, 150
  02afcdc  lwz 3, 120(31)
  02afce0  lis 5, 150
  02afce4  lis 7, 150
  02afce8  lis 6, 150
  02afcec  lis 8, 150
  02afcf0  stb 30, -12520(4)
  02afcf4  lfs 1, 48(3)
  02afcf8  lis 4, 150
  02afcfc  stfs 1, -5632(5)
  02afd00  lfs 1, 52(3)
  02afd04  lis 5, 150
  02afd08  stfs 1, -5628(7)
  02afd0c  lfs 1, 56(3)
  02afd10  stfs 1, -5624(6)
  02afd14  lfs 1, 60(3)
  02afd18  lis 6, 150
  02afd1c  stfs 1, -5620(8)
  02afd20  lbz 7, 64(3)
  02afd24  lis 8, 150
  02afd28  stb 7, -5636(4)
  02afd2c  addic 4, 6, -23188
  02afd30  lbz 6, 65(3)
  02afd34  li 7, 1
  02afd38  stb 6, -5635(5)
  02afd3c  lis 5, 147
  02afd40  lbz 3, 66(3)
  02afd44  lis 6, 18682
  02afd48  stw 7, 8(4)
  02afd4c  lis 4, 230
  02afd50  stb 3, -5634(8)
  02afd54  lis 3, 17460
  02afd58  lis 7, 165
  02afd5c  stw 6, -11152(5)
  02afd60  lis 8, 150
  02afd64  lis 5, 17402
  02afd68  stw 3, -23008(4)
  02afd6c  lis 3, 164
  02afd70  lis 6, 31
  02afd74  stw 5, 20252(7)
  02afd78  li 4, 500
  02afd7c  lis 5, 165
  02afd80  addic 7, 8, -12416
  02afd84  ori 6, 6, 16384
  02afd88  stw 4, -28488(3)
  02afd8c  stw 6, 8144(5)
  02afd90  lwz 3, 572(7)
  02afd94  lwz 4, 576(7)
  02afd98  lwz 5, 580(7)
  02afd9c  extsw 3, 3
  02afda0  extsw 4, 4
  02afda4  extsw 5, 5
  02afda8  bl 0x780f4
  02afdac  nop
  02afdb0  bl 0x7b868
  02afdb4  nop
  02afdb8  ori 3, 31, 0
  02afdbc  bl 0xefb38
  02afdc0  nop
  02afdc4  lis 3, 149
  02afdc8  addic 3, 3, 5056
  02afdcc  stw 30, 916(3)
  02afdd0  b 0x2b0660
  02afdd4  ori 3, 31, 0
  02afdd8  ori 4, 29, 0
  02afddc  bl 0x2aeb68
  02afde0  lis 3, 43
  02afde4  lfs 1, 24(29)
  02afde8  addi 30, 3, -3352
  02afdec  li 4, 1
  02afdf0  lfs 27, 68(30)
  02afdf4  lfs 28, 48(30)
  02afdf8  lfs 2, 28(29)
  02afdfc  lfs 3, 64(31)
  02afe00  lfs 26, 72(30)
  02afe04  fsubs 3, 1, 3
  02afe08  fmuls 1, 1, 27
  02afe0c  lwz 3, 36(29)
  02afe10  lfs 4, 76(30)
  02afe14  addic 3, 3, 16
  02afe18  fabs 1, 1
  02afe1c  fmadds 1, 2, 28, 1
  02afe20  fmadds 1, 3, 26, 1
  02afe24  fmuls 1, 1, 4
  02afe28  bl 0x501980
  02afe2c  nop
  02afe30  lfs 1, 24(29)
  02afe34  lfs 3, 64(31)
  02afe38  fmuls 2, 1, 27
  02afe3c  lfs 4, 28(29)
  02afe40  fsubs 1, 1, 3
  02afe44  lfs 3, 80(30)
  02afe48  li 4, 1
  02afe4c  lwz 3, 40(29)
  02afe50  addic 3, 3, 16
  02afe54  fabs 2, 2
  02afe58  fmadds 2, 4, 28, 2
  02afe5c  fmsubs 1, 1, 26, 2
  02afe60  fmuls 1, 1, 3
  02afe64  bl 0x501980
  02afe68  nop
  02afe6c  lfs 4, 228(1)
  02afe70  lfs 3, 224(1)
  02afe74  fmuls 5, 4, 4
  02afe78  fmr 1, 31
  02afe7c  lis 4, 131
  02afe80  stw 31, 256(1)
  02afe84  lis 5, 16576
  02afe88  li 3, 1
  02afe8c  stw 4, 260(1)
  02afe90  fmadds 5, 3, 3, 5
  02afe94  fmr 2, 1
  02afe98  lfs 27, 52(30)
  02afe9c  stw 5, 268(1)
  02afea0  stw 3, 272(1)
  02afea4  lhz 28, 166(31)
  02afea8  fsqrts 6, 5
  02afeac  fcmpu 0, 6, 2
  02afeb0  bt 2, 0x2afefc
  02afeb4  frsqrte 1, 5
  02afeb8  lis 3, 43
  02afebc  addi 3, 3, -3352
  02afec0  lfs 2, 84(3)
  02afec4  fmuls 6, 5, 1
  02afec8  fmuls 7, 28, 1
  02afecc  fnmsubs 6, 6, 1, 2
  02afed0  fmadds 1, 6, 7, 1
  02afed4  fmuls 6, 5, 1
  02afed8  fmuls 7, 28, 1
  02afedc  fnmsubs 6, 6, 1, 2
  02afee0  fmadds 1, 6, 7, 1
  02afee4  fmuls 5, 5, 1
  02afee8  fmuls 6, 28, 1
  02afeec  fnmsubs 2, 5, 1, 2
  02afef0  fmadds 1, 2, 6, 1
  02afef4  fmuls 2, 3, 1
  02afef8  fmuls 1, 4, 1
  02afefc  lis 3, 114
  02aff00  lis 4, 43
  02aff04  lis 5, 17839
  02aff08  addi 4, 4, -3352
  02aff0c  lis 6, 16256
  02aff10  lfs 3, -3056(3)
  02aff14  stfs 2, 240(1)
  02aff18  li 3, 3
  02aff1c  fmuls 3, 3, 30
  02aff20  stfs 1, 244(1)
  02aff24  lfs 28, 84(4)
  02aff28  addic 7, 1, 240
  02aff2c  li 4, 2
  02aff30  stb 3, 264(1)
  02aff34  ori 3, 5, 57190
  02aff38  li 5, 0
  02aff3c  stb 4, 265(1)
  02aff40  lwz 4, 16(29)
  02aff44  stw 6, 248(1)
  02aff48  stw 3, 252(1)
  02aff4c  fctiwz 1, 3
  02aff50  sth 28, 266(1)
  02aff54  lwz 3, 8320(27)
  02aff58  extsw 4, 4
  02aff5c  addic 28, 31, 16
  02aff60  subc 6, 3, 31
  02aff64  addic 3, 1, 192
  02aff68  stfd 1, 328(1)
  02aff6c  lwz 8, 332(1)
  02aff70  addic 8, 8, -40
  02aff74  extsw 8, 8
  02aff78  subc 4, 8, 4
  02aff7c  sradi 8, 4, 63
  02aff80  ori 4, 28, 0
  02aff84  and 6, 8, 6
  02aff88  addc 6, 31, 6
  02aff8c  bl 0x57820
  02aff90  nop
  02aff94  cmpwi 3, 0
  02aff98  bt 2, 0x2b0220
  02aff9c  lis 3, 161
  02affa0  addic 3, 3, 2368
  02affa4  lwz 30, 24(3)
  02affa8  cmpwi 30, 0
  02affac  bt 2, 0x2b00f0
  02affb0  li 4, 2
  02affb4  lwz 5, 8320(27)
  02affb8  addic 6, 1, 208
  02affbc  subc 5, 5, 30
  02affc0  stb 4, 188(31)
  02affc4  lfs 1, 32(3)
  02affc8  cntlzw 4, 5
  02affcc  li 5, 1
  02affd0  stfs 1, 16(31)
  02affd4  lfs 1, 36(3)
  02affd8  sldi 4, 4, 58
  02affdc  li 30, 0
  02affe0  stfs 1, 20(31)
  02affe4  lfs 1, 40(3)
  02affe8  sradi 4, 4, 63
  02affec  subc 5, 5, 30
  02afff0  stfs 1, 24(31)
  02afff4  and 4, 4, 5
  02afff8  lfs 1, 44(3)
  02afffc  addic 5, 3, 64
  02b0000  addc 30, 30, 4
  02b0004  stfs 1, 28(31)
  02b0008  addic 4, 1, 224
  02b000c  ori 3, 6, 0
  02b0010  bl 0x500608
  02b0014  nop
  02b0018  lfs 1, 212(1)
  02b001c  lfs 2, 208(1)
  02b0020  fmuls 3, 1, 1
  02b0024  lfs 4, 216(1)
  02b0028  lis 3, 43
  02b002c  lis 4, 114
  02b0030  addi 3, 3, -3352
  02b0034  fmadds 3, 2, 2, 3
  02b0038  lfs 5, 88(3)
  02b003c  lfs 6, -3052(4)
  02b0040  fmuls 5, 6, 5
  02b0044  fmadds 3, 4, 4, 3
  02b0048  lwz 3, 44(29)
  02b004c  cmpwi 3, -1
  02b0050  fsqrts 3, 3
  02b0054  fdivs 5, 5, 3
  02b0058  fsub 6, 31, 3
  02b005c  fsub 7, 31, 3
  02b0060  fsub 8, 31, 3
  02b0064  fsub 9, 3, 31
  02b0068  fsub 10, 3, 31
  02b006c  fsub 3, 3, 31
  02b0070  fmuls 2, 2, 5
  02b0074  fmuls 1, 1, 5
  02b0078  fmuls 4, 4, 5
  02b007c  fsel 5, 6, 31, 2
  02b0080  fsel 6, 7, 31, 1
  02b0084  fsel 7, 8, 31, 4
  02b0088  fsel 2, 9, 5, 2
  02b008c  fsel 1, 10, 6, 1
  02b0090  fsel 3, 3, 7, 4
  02b0094  stfs 2, 208(1)
  02b0098  stfs 1, 212(1)
  02b009c  stfs 3, 216(1)
  02b00a0  bt 2, 0x2b00e4
  02b00a4  sldi 4, 3, 7
  02b00a8  sldi 6, 3, 4
  02b00ac  lis 5, 150
  02b00b0  subc 4, 4, 6
  02b00b4  addic 5, 5, 14176
  02b00b8  extsw 4, 4
  02b00bc  addc 4, 5, 4
  02b00c0  lwz 5, 136(4)
  02b00c4  cmpw 5, 31
  02b00c8  bf 2, 0x2b00e4
  02b00cc  lbz 4, 116(4)
  02b00d0  cmpwi 4, 0
  02b00d4  bt 2, 0x2b00e4
  02b00d8  extsw 3, 3
  02b00dc  bl 0x15cdb0
  02b00e0  nop
  02b00e4  li 3, -1
  02b00e8  stw 3, 44(29)
  02b00ec  b 0x2b036c
  02b00f0  lwz 4, 28(3)
  02b00f4  li 30, 0
  02b00f8  cmpwi 4, 0
  02b00fc  bf 1, 0x2b036c
  02b0100  ori 6, 3, 0
  02b0104  li 3, 1
  02b0108  addic 7, 1, 208
  02b010c  addic 5, 6, 64
  02b0110  addic 4, 1, 224
  02b0114  stb 3, 188(31)
  02b0118  lfs 1, 32(6)
  02b011c  ori 3, 7, 0
  02b0120  stfs 1, 16(31)
  02b0124  lfs 1, 36(6)
  02b0128  stfs 1, 20(31)
  02b012c  lfs 1, 40(6)
  02b0130  stfs 1, 24(31)
  02b0134  lfs 1, 44(6)
  02b0138  stfs 1, 28(31)
  02b013c  bl 0x500608
  02b0140  nop
  02b0144  lfs 1, 212(1)
  02b0148  lfs 2, 208(1)
  02b014c  fmuls 3, 1, 1
  02b0150  lfs 4, 216(1)
  02b0154  lis 3, 43
  02b0158  lis 4, 114
  02b015c  addi 3, 3, -3352
  02b0160  fmadds 3, 2, 2, 3
  02b0164  lfs 5, 88(3)
  02b0168  lfs 6, -3052(4)
  02b016c  fmuls 5, 6, 5
  02b0170  fmadds 3, 4, 4, 3
  02b0174  lwz 3, 44(29)
  02b0178  cmpwi 3, -1
  02b017c  fsqrts 3, 3
  02b0180  fdivs 5, 5, 3
  02b0184  fsub 6, 31, 3
  02b0188  fsub 7, 31, 3
  02b018c  fsub 8, 31, 3
  02b0190  fsub 9, 3, 31
  02b0194  fsub 10, 3, 31
  02b0198  fsub 3, 3, 31
  02b019c  fmuls 2, 2, 5
  02b01a0  fmuls 1, 1, 5
  02b01a4  fmuls 4, 4, 5
  02b01a8  fsel 5, 6, 31, 2
  02b01ac  fsel 6, 7, 31, 1
  02b01b0  fsel 7, 8, 31, 4
  02b01b4  fsel 2, 9, 5, 2
  02b01b8  fsel 1, 10, 6, 1
  02b01bc  fsel 3, 3, 7, 4
  02b01c0  stfs 2, 208(1)
  02b01c4  stfs 1, 212(1)
  02b01c8  stfs 3, 216(1)
  02b01cc  bt 2, 0x2b0210
  02b01d0  sldi 4, 3, 7
  02b01d4  sldi 6, 3, 4
  02b01d8  lis 5, 150
  02b01dc  subc 4, 4, 6
  02b01e0  addic 5, 5, 14176
  02b01e4  extsw 4, 4
  02b01e8  addc 4, 5, 4
  02b01ec  lwz 5, 136(4)
  02b01f0  cmpw 5, 31
  02b01f4  bf 2, 0x2b0210
  02b01f8  lbz 4, 116(4)
  02b01fc  cmpwi 4, 0
  02b0200  bt 2, 0x2b0210
  02b0204  extsw 3, 3
  02b0208  bl 0x15cdb0
  02b020c  nop
  02b0210  li 3, -1
  02b0214  li 30, 0
  02b0218  stw 3, 44(29)
  02b021c  b 0x2b036c
  02b0220  lwz 3, 16(29)
  02b0224  li 30, 0
  02b0228  cmpwi 3, 0
  02b022c  bf 2, 0x2b036c
  02b0230  lwz 3, 0(29)
  02b0234  lwz 3, 120(3)
  02b0238  cmpwi 3, 0
  02b023c  bt 2, 0x2b0248
  02b0240  li 4, 0
  02b0244  stw 4, 4(3)
  02b0248  li 30, 0
  02b024c  stw 30, 8160(27)
  02b0250  lwz 3, 20(29)
  02b0254  bl 0x49618
  02b0258  nop
  02b025c  li 4, 1
  02b0260  stw 30, 20(29)
  02b0264  li 3, 0
  02b0268  bl 0xb72b0
  02b026c  nop
  02b0270  lis 4, 150
  02b0274  lwz 3, 120(31)
  02b0278  lis 5, 150
  02b027c  lis 7, 150
  02b0280  lis 6, 150
  02b0284  lis 8, 150
  02b0288  stb 30, -12520(4)
  02b028c  lfs 1, 48(3)
  02b0290  lis 4, 150
  02b0294  stfs 1, -5632(5)
  02b0298  lfs 1, 52(3)
  02b029c  lis 5, 150
  02b02a0  stfs 1, -5628(7)
  02b02a4  lfs 1, 56(3)
  02b02a8  stfs 1, -5624(6)
  02b02ac  lfs 1, 60(3)
  02b02b0  lis 6, 150
  02b02b4  stfs 1, -5620(8)
  02b02b8  lbz 7, 64(3)
  02b02bc  lis 8, 150
  02b02c0  stb 7, -5636(4)
  02b02c4  addic 4, 6, -23188
  02b02c8  lbz 6, 65(3)
  02b02cc  li 7, 1
  02b02d0  stb 6, -5635(5)
  02b02d4  lis 5, 147
  02b02d8  lbz 3, 66(3)
  02b02dc  lis 6, 18682
  02b02e0  stw 7, 8(4)
  02b02e4  lis 4, 230
  02b02e8  stb 3, -5634(8)
  02b02ec  lis 3, 17460
  02b02f0  lis 7, 165
  02b02f4  stw 6, -11152(5)
  02b02f8  lis 8, 150
  02b02fc  lis 5, 17402
  02b0300  stw 3, -23008(4)
  02b0304  lis 3, 164
  02b0308  lis 6, 31
  02b030c  stw 5, 20252(7)
  02b0310  li 4, 500
  02b0314  lis 5, 165
  02b0318  addic 7, 8, -12416
  02b031c  ori 6, 6, 16384
  02b0320  stw 4, -28488(3)
  02b0324  stw 6, 8144(5)
  02b0328  lwz 3, 572(7)
  02b032c  lwz 4, 576(7)
  02b0330  lwz 5, 580(7)
  02b0334  extsw 3, 3
  02b0338  extsw 4, 4
  02b033c  extsw 5, 5
  02b0340  bl 0x780f4
  02b0344  nop
  02b0348  bl 0x7b868
  02b034c  nop
  02b0350  ori 3, 31, 0
  02b0354  bl 0xefb38
  02b0358  nop
  02b035c  lis 3, 149
  02b0360  addic 3, 3, 5056
  02b0364  stw 30, 916(3)
  02b0368  b 0x2b0660
  02b036c  lis 3, 114
  02b0370  lfs 1, -3056(3)
  02b0374  lwz 3, 16(29)
  02b0378  fmuls 2, 1, 30
  02b037c  fmuls 1, 1, 29
  02b0380  fctiwz 2, 2
  02b0384  fctiwz 1, 1
  02b0388  stfd 2, 328(1)
  02b038c  lwz 4, 332(1)
  02b0390  stfd 1, 328(1)
  02b0394  lwz 5, 332(1)
  02b0398  subc 4, 4, 5
  02b039c  cmpw 3, 4
  02b03a0  bf 0, 0x2b0410
  02b03a4  lwz 3, 164(26)
  02b03a8  rlwinm 3, 3, 0, 26, 26
  02b03ac  cmpwi 3, 0
  02b03b0  bt 2, 0x2b0410
  02b03b4  li 3, 1
  02b03b8  stb 3, 188(31)
  02b03bc  lwz 3, 44(29)
  02b03c0  cmpwi 3, -1
  02b03c4  bt 2, 0x2b0408
  02b03c8  sldi 4, 3, 7
  02b03cc  sldi 6, 3, 4
  02b03d0  lis 5, 150
  02b03d4  subc 4, 4, 6
  02b03d8  addic 5, 5, 14176
  02b03dc  extsw 4, 4
  02b03e0  addc 4, 5, 4
  02b03e4  lwz 5, 136(4)
  02b03e8  cmpw 5, 31
  02b03ec  bf 2, 0x2b0408
  02b03f0  lbz 4, 116(4)
  02b03f4  cmpwi 4, 0
  02b03f8  bt 2, 0x2b0408
  02b03fc  extsw 3, 3
  02b0400  bl 0x15cdb0
  02b0404  nop
  02b0408  li 3, -1
  02b040c  stw 3, 44(29)
  02b0410  lbz 3, 188(31)
  02b0414  cmpwi 1, 30, 0
  02b0418  cmpwi 3, 0
  02b041c  bt 2, 0x2b0644
  02b0420  bf 6, 0x2b050c
  02b0424  lis 3, 43
  02b0428  li 11, 1
  02b042c  fmr 1, 31
  02b0430  addi 3, 3, -3352
  02b0434  fmr 2, 31
  02b0438  li 7, -1
  02b043c  fmr 5, 31
  02b0440  li 6, 0
  02b0444  fmr 6, 28
  02b0448  addic 4, 1, 208
  02b044c  li 5, 0
  02b0450  lfs 30, 92(3)
  02b0454  li 8, 10
  02b0458  lfs 4, 88(3)
  02b045c  li 9, 3
  02b0460  lfs 7, 96(3)
  02b0464  li 10, 16
  02b0468  std 11, 144(1)
  02b046c  ori 3, 31, 0
  02b0470  std 11, 160(1)
  02b0474  fmr 3, 30
  02b0478  std 11, 168(1)
  02b047c  std 7, 176(1)
  02b0480  std 6, 184(1)
  02b0484  bl 0x10e030
  02b0488  nop
  02b048c  fmr 1, 30
  02b0490  ori 3, 28, 0
  02b0494  li 5, 16
  02b0498  ori 6, 31, 0
  02b049c  li 7, 0
  02b04a0  bl 0x5e598
  02b04a4  nop
  02b04a8  lfs 1, 16(31)
  02b04ac  li 4, 3
  02b04b0  lfs 2, 24(31)
  02b04b4  li 5, 2
  02b04b8  stfs 1, 64(1)
  02b04bc  lis 7, 161
  02b04c0  stfs 2, 72(1)
  02b04c4  ori 8, 3, 0
  02b04c8  lfs 1, 20(31)
  02b04cc  addic 7, 7, 18944
  02b04d0  lfs 2, 28(31)
  02b04d4  ori 3, 31, 0
  02b04d8  stfs 1, 68(1)
  02b04dc  li 9, 0
  02b04e0  stfs 2, 76(1)
  02b04e4  fmr 1, 27
  02b04e8  std 4, 120(1)
  02b04ec  fmr 2, 28
  02b04f0  std 5, 128(1)
  02b04f4  lis 10, 131
  02b04f8  ld 5, 64(1)
  02b04fc  fmr 3, 28
  02b0500  ld 6, 72(1)
  02b0504  bl 0x107860
  02b0508  nop
  02b050c  lis 3, 43
  02b0510  lis 4, 114
  02b0514  lhz 5, 52(31)
  02b0518  addi 3, 3, -3352
  02b051c  ori 5, 5, 1
  02b0520  li 9, 16
  02b0524  vspltisw 2, -1
  02b0528  lis 6, 114
  02b052c  lfs 1, -3064(4)
  02b0530  sth 5, 52(31)
  02b0534  addi 10, 9, 16
  02b0538  lfs 2, 100(3)
  02b053c  li 4, 12
  02b0540  lfs 3, 24(29)
  02b0544  li 5, -3056
  02b0548  fmuls 1, 1, 2
  02b054c  li 7, 108
  02b0550  li 8, 8
  02b0554  vspltisw 3, -1
  02b0558  vslw 2, 2, 2
  02b055c  vspltisw 4, -1
  02b0560  vslw 3, 3, 3
  02b0564  li 30, 0
  02b0568  vslw 4, 4, 4
  02b056c  stfs 1, 4(29)
  02b0570  lfs 1, 104(3)
  02b0574  <unknown>
  02b0578  fmuls 1, 3, 1
  02b057c  <unknown>
  02b0580  vor 5, 5, 6
  02b0584  stfs 1, 24(29)
  02b0588  <unknown>
  02b058c  <unknown>
  02b0590  vspltw 6, 6, 0
  02b0594  <unknown>
  02b0598  <unknown>
  02b059c  vspltw 8, 8, 0
  02b05a0  vmaddfp 2, 7, 6, 2
  02b05a4  vspltw 6, 9, 0
  02b05a8  vmaddfp 3, 7, 8, 3
  02b05ac  lfs 31, 16(31)
  02b05b0  vmaddfp 4, 7, 6, 4
  02b05b4  lfs 30, 20(31)
  02b05b8  vspltisw 6, 0
  02b05bc  vspltisw 7, -1
  02b05c0  lfs 28, 28(31)
  02b05c4  vctsxs 2, 2, 0
  02b05c8  vctsxs 3, 3, 0
  02b05cc  vctsxs 4, 4, 0
  02b05d0  vsubuwm 2, 2, 3
  02b05d4  vsubuwm 3, 6, 4
  02b05d8  vcmpgtsw 2, 5, 2
  02b05dc  vsel 2, 7, 3, 2
  02b05e0  vspltw 2, 2, 0
  02b05e4  stvewx 2, 9, 29
  02b05e8  lfs 29, 24(31)
  02b05ec  lfs 27, 112(3)
  02b05f0  stfs 31, 16(31)
  02b05f4  ori 3, 28, 0
  02b05f8  stfs 30, 20(31)
  02b05fc  fmr 1, 27
  02b0600  stfs 29, 24(31)
  02b0604  stfs 28, 28(31)
  02b0608  bl 0x110950
  02b060c  nop
  02b0610  ori 3, 31, 0
  02b0614  li 4, 1
  02b0618  bl 0x2aed78
  02b061c  stfs 31, 16(31)
  02b0620  addic 30, 30, 1
  02b0624  stfs 30, 20(31)
  02b0628  cmpwi 30, 5
  02b062c  stfs 29, 24(31)
  02b0630  stfs 28, 28(31)
  02b0634  bt 0, 0x2b05f0
  02b0638  li 3, 0
  02b063c  stw 3, 224(1)
  02b0640  stb 3, 188(31)
  02b0644  lwz 29, 20(29)
  02b0648  cmpwi 29, 0
  02b064c  bt 2, 0x2b0660
  02b0650  ori 3, 29, 0
  02b0654  ori 4, 31, 0
  02b0658  bl 0x49058
  02b065c  nop
  02b0660  ld 0, 464(1)
  02b0664  mtlr 0
  02b0668  lfd 26, 400(1)
  02b066c  lfd 27, 408(1)
  02b0670  lfd 28, 416(1)
  02b0674  lfd 29, 424(1)
  02b0678  lfd 30, 432(1)
  02b067c  lfd 31, 440(1)
  02b0680  ld 26, 352(1)
  02b0684  ld 27, 360(1)
  02b0688  ld 28, 368(1)
  02b068c  ld 29, 376(1)
  02b0690  ld 30, 384(1)
  02b0694  ld 31, 392(1)
  02b0698  addi 1, 1, 448
  02b069c  blr
