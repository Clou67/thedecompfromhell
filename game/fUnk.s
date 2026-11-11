# game/fUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_UNKNOWN:   # 0x7a338, 0x14 bytes
  007a338  lis 3, 114
  007a33c  lis 4, 1
  007a340  addic 3, 3, -3184
  007a344  stw 4, 72(3)
  007a348  blr

InitGsRegPresets_7a350:   # 0x7a350, 0xcac bytes
  007a350  stdu 1, -192(1)
  007a354  mflr 0
  007a358  std 0, 208(1)
  007a35c  lis 3, 114
  007a360  lis 7, 1
  007a364  addic 8, 3, -1180
  007a368  li 3, 1
  007a36c  li 4, 0
  007a370  li 5, 0
  007a374  li 6, 0
  007a378  stw 7, 72(8)
  007a37c  li 7, 0
  007a380  std 31, 184(1)
  007a384  std 30, 176(1)
  007a388  li 8, 2
  007a38c  bl 0x502ea0
  007a390  nop
  007a394  lis 31, 114
  007a398  li 4, 0
  007a39c  li 10, 1
  007a3a0  li 5, 0
  007a3a4  li 6, 0
  007a3a8  std 3, -3024(31)
  007a3ac  li 7, 0
  007a3b0  li 3, 0
  007a3b4  li 8, 0
  007a3b8  li 9, 1
  007a3bc  bl 0x502f7c
  007a3c0  nop
  007a3c4  addic 31, 31, -3024
  007a3c8  li 30, 0
  007a3cc  li 9, 1
  007a3d0  li 4, 0
  007a3d4  li 10, 0
  007a3d8  std 3, 16(31)
  007a3dc  li 5, 0
  007a3e0  li 3, 15
  007a3e4  std 30, 112(1)
  007a3e8  li 6, 0
  007a3ec  li 7, 1
  007a3f0  li 8, 0
  007a3f4  bl 0x502e70
  007a3f8  nop
  007a3fc  std 3, 32(31)
  007a400  li 3, 16
  007a404  li 4, 1
  007a408  li 5, 0
  007a40c  li 6, 0
  007a410  li 7, 1
  007a414  li 8, 2
  007a418  bl 0x502ea0
  007a41c  nop
  007a420  std 3, 48(31)
  007a424  li 4, 29440
  007a428  li 3, 28672
  007a42c  li 5, 0
  007a430  bl 0x502fec
  007a434  nop
  007a438  std 3, 64(31)
  007a43c  lis 4, 0
  007a440  li 3, 29184
  007a444  ori 4, 4, 36096
  007a448  li 5, 0
  007a44c  bl 0x502fec
  007a450  nop
  007a454  std 3, 72(31)
  007a458  li 3, 29184
  007a45c  li 4, 29440
  007a460  li 5, 0
  007a464  bl 0x502fec
  007a468  nop
  007a46c  std 3, 80(31)
  007a470  li 3, 29696
  007a474  lis 4, 0
  007a478  li 5, 0
  007a47c  ori 4, 4, 36096
  007a480  bl 0x502fec
  007a484  nop
  007a488  std 3, 88(31)
  007a48c  li 4, 29440
  007a490  li 3, 29696
  007a494  li 5, 0
  007a498  bl 0x502fec
  007a49c  nop
  007a4a0  std 3, 96(31)
  007a4a4  lis 4, 0
  007a4a8  li 3, 30208
  007a4ac  ori 4, 4, 36096
  007a4b0  li 5, 0
  007a4b4  bl 0x502fec
  007a4b8  nop
  007a4bc  std 3, 104(31)
  007a4c0  li 3, 30208
  007a4c4  li 4, 29440
  007a4c8  li 5, 0
  007a4cc  bl 0x502fec
  007a4d0  nop
  007a4d4  std 3, 112(31)
  007a4d8  li 3, 30720
  007a4dc  lis 4, 0
  007a4e0  li 5, 0
  007a4e4  ori 4, 4, 36096
  007a4e8  bl 0x502fec
  007a4ec  nop
  007a4f0  std 3, 120(31)
  007a4f4  li 4, 29440
  007a4f8  li 3, 30720
  007a4fc  li 5, 0
  007a500  bl 0x502fec
  007a504  nop
  007a508  std 3, 128(31)
  007a50c  lis 4, 0
  007a510  li 3, 31232
  007a514  ori 4, 4, 36096
  007a518  li 5, 0
  007a51c  bl 0x502fec
  007a520  nop
  007a524  std 3, 136(31)
  007a528  li 3, 31232
  007a52c  li 4, 29440
  007a530  li 5, 0
  007a534  bl 0x502fec
  007a538  nop
  007a53c  std 3, 144(31)
  007a540  li 3, 31744
  007a544  lis 4, 0
  007a548  li 5, 0
  007a54c  ori 4, 4, 36096
  007a550  bl 0x502fec
  007a554  nop
  007a558  std 3, 152(31)
  007a55c  li 4, 29440
  007a560  li 3, 31744
  007a564  li 5, 0
  007a568  bl 0x502fec
  007a56c  nop
  007a570  std 3, 160(31)
  007a574  lis 4, 0
  007a578  li 3, 32256
  007a57c  ori 4, 4, 36096
  007a580  li 5, 0
  007a584  bl 0x502fec
  007a588  nop
  007a58c  std 3, 168(31)
  007a590  li 3, 32256
  007a594  li 4, 29440
  007a598  li 5, 0
  007a59c  bl 0x502fec
  007a5a0  nop
  007a5a4  lis 4, 0
  007a5a8  std 3, 176(31)
  007a5ac  lis 5, 0
  007a5b0  ori 3, 4, 32768
  007a5b4  ori 4, 5, 36096
  007a5b8  li 5, 0
  007a5bc  bl 0x502fec
  007a5c0  nop
  007a5c4  lis 5, 0
  007a5c8  std 3, 184(31)
  007a5cc  li 4, 29440
  007a5d0  ori 3, 5, 32768
  007a5d4  li 5, 0
  007a5d8  bl 0x502fec
  007a5dc  nop
  007a5e0  std 3, 192(31)
  007a5e4  lis 4, 0
  007a5e8  lis 3, 0
  007a5ec  ori 4, 4, 36096
  007a5f0  ori 3, 3, 33280
  007a5f4  li 5, 0
  007a5f8  bl 0x502fec
  007a5fc  nop
  007a600  std 3, 200(31)
  007a604  li 4, 29440
  007a608  lis 3, 0
  007a60c  li 5, 0
  007a610  ori 3, 3, 33280
  007a614  bl 0x502fec
  007a618  nop
  007a61c  lis 4, 0
  007a620  std 3, 208(31)
  007a624  lis 5, 0
  007a628  ori 3, 4, 33792
  007a62c  ori 4, 5, 36096
  007a630  li 5, 0
  007a634  bl 0x502fec
  007a638  nop
  007a63c  lis 5, 0
  007a640  std 3, 216(31)
  007a644  li 4, 29440
  007a648  ori 3, 5, 33792
  007a64c  li 5, 0
  007a650  bl 0x502fec
  007a654  nop
  007a658  std 3, 224(31)
  007a65c  lis 4, 0
  007a660  lis 3, 0
  007a664  ori 4, 4, 36096
  007a668  ori 3, 3, 34304
  007a66c  li 5, 0
  007a670  bl 0x502fec
  007a674  nop
  007a678  std 3, 232(31)
  007a67c  li 4, 29440
  007a680  lis 3, 0
  007a684  li 5, 0
  007a688  ori 3, 3, 34304
  007a68c  bl 0x502fec
  007a690  nop
  007a694  lis 4, 0
  007a698  std 3, 240(31)
  007a69c  lis 5, 0
  007a6a0  ori 3, 4, 34816
  007a6a4  ori 4, 5, 36096
  007a6a8  li 5, 0
  007a6ac  bl 0x502fec
  007a6b0  nop
  007a6b4  lis 5, 0
  007a6b8  std 3, 248(31)
  007a6bc  li 4, 29440
  007a6c0  ori 3, 5, 34816
  007a6c4  li 5, 0
  007a6c8  bl 0x502fec
  007a6cc  nop
  007a6d0  std 3, 256(31)
  007a6d4  lis 4, 0
  007a6d8  lis 3, 0
  007a6dc  ori 4, 4, 36096
  007a6e0  ori 3, 3, 35328
  007a6e4  li 5, 0
  007a6e8  bl 0x502fec
  007a6ec  nop
  007a6f0  std 3, 264(31)
  007a6f4  li 4, 29440
  007a6f8  lis 3, 0
  007a6fc  li 5, 0
  007a700  ori 3, 3, 35328
  007a704  bl 0x502fec
  007a708  nop
  007a70c  lis 4, 0
  007a710  std 3, 272(31)
  007a714  lis 5, 0
  007a718  ori 3, 4, 35840
  007a71c  ori 4, 5, 36096
  007a720  li 5, 0
  007a724  bl 0x502fec
  007a728  nop
  007a72c  lis 5, 0
  007a730  std 3, 280(31)
  007a734  li 4, 29440
  007a738  ori 3, 5, 35840
  007a73c  li 5, 0
  007a740  bl 0x502fec
  007a744  nop
  007a748  std 3, 288(31)
  007a74c  lis 4, 0
  007a750  lis 3, 0
  007a754  ori 4, 4, 36096
  007a758  ori 3, 3, 36352
  007a75c  li 5, 0
  007a760  bl 0x502fec
  007a764  nop
  007a768  std 3, 296(31)
  007a76c  li 4, 29440
  007a770  lis 3, 0
  007a774  li 5, 0
  007a778  ori 3, 3, 36352
  007a77c  bl 0x502fec
  007a780  nop
  007a784  lis 4, 0
  007a788  std 3, 304(31)
  007a78c  lis 5, 0
  007a790  ori 3, 4, 36864
  007a794  ori 4, 5, 36096
  007a798  li 5, 0
  007a79c  bl 0x502fec
  007a7a0  nop
  007a7a4  std 3, 312(31)
  007a7a8  li 4, 0
  007a7ac  li 5, 0
  007a7b0  li 3, 1
  007a7b4  li 6, 0
  007a7b8  li 7, 0
  007a7bc  li 8, 2
  007a7c0  bl 0x502ea0
  007a7c4  nop
  007a7c8  lis 31, 114
  007a7cc  li 9, 1
  007a7d0  li 4, 0
  007a7d4  li 10, 1
  007a7d8  li 5, 0
  007a7dc  std 3, -2704(31)
  007a7e0  li 3, 0
  007a7e4  li 6, 0
  007a7e8  li 7, 0
  007a7ec  li 8, 0
  007a7f0  bl 0x502f7c
  007a7f4  nop
  007a7f8  addic 31, 31, -2704
  007a7fc  li 9, 1
  007a800  li 4, 0
  007a804  li 10, 0
  007a808  li 5, 0
  007a80c  std 3, 16(31)
  007a810  li 3, 15
  007a814  std 30, 112(1)
  007a818  li 6, 0
  007a81c  li 7, 1
  007a820  li 8, 0
  007a824  bl 0x502e70
  007a828  nop
  007a82c  std 3, 32(31)
  007a830  li 3, 16
  007a834  li 4, 1
  007a838  li 5, 0
  007a83c  li 6, 0
  007a840  li 7, 1
  007a844  li 8, 2
  007a848  bl 0x502ea0
  007a84c  nop
  007a850  std 3, 48(31)
  007a854  li 4, 29184
  007a858  li 3, 28672
  007a85c  li 5, 0
  007a860  bl 0x502fec
  007a864  nop
  007a868  std 3, 64(31)
  007a86c  lis 4, 0
  007a870  li 3, 29184
  007a874  ori 4, 4, 36352
  007a878  li 5, 0
  007a87c  bl 0x502fec
  007a880  nop
  007a884  std 3, 72(31)
  007a888  li 3, 29184
  007a88c  li 4, 29184
  007a890  li 5, 0
  007a894  bl 0x502fec
  007a898  nop
  007a89c  std 3, 80(31)
  007a8a0  li 3, 29696
  007a8a4  lis 4, 0
  007a8a8  li 5, 0
  007a8ac  ori 4, 4, 36352
  007a8b0  bl 0x502fec
  007a8b4  nop
  007a8b8  std 3, 88(31)
  007a8bc  li 4, 29184
  007a8c0  li 3, 29696
  007a8c4  li 5, 0
  007a8c8  bl 0x502fec
  007a8cc  nop
  007a8d0  std 3, 96(31)
  007a8d4  lis 4, 0
  007a8d8  li 3, 30208
  007a8dc  ori 4, 4, 36352
  007a8e0  li 5, 0
  007a8e4  bl 0x502fec
  007a8e8  nop
  007a8ec  std 3, 104(31)
  007a8f0  li 3, 30208
  007a8f4  li 4, 29184
  007a8f8  li 5, 0
  007a8fc  bl 0x502fec
  007a900  nop
  007a904  std 3, 112(31)
  007a908  li 3, 30720
  007a90c  lis 4, 0
  007a910  li 5, 0
  007a914  ori 4, 4, 36352
  007a918  bl 0x502fec
  007a91c  nop
  007a920  std 3, 120(31)
  007a924  li 4, 29184
  007a928  li 3, 30720
  007a92c  li 5, 0
  007a930  bl 0x502fec
  007a934  nop
  007a938  std 3, 128(31)
  007a93c  lis 4, 0
  007a940  li 3, 31232
  007a944  ori 4, 4, 36352
  007a948  li 5, 0
  007a94c  bl 0x502fec
  007a950  nop
  007a954  std 3, 136(31)
  007a958  li 3, 31232
  007a95c  li 4, 29184
  007a960  li 5, 0
  007a964  bl 0x502fec
  007a968  nop
  007a96c  std 3, 144(31)
  007a970  li 3, 31744
  007a974  lis 4, 0
  007a978  li 5, 0
  007a97c  ori 4, 4, 36352
  007a980  bl 0x502fec
  007a984  nop
  007a988  std 3, 152(31)
  007a98c  li 4, 29184
  007a990  li 3, 31744
  007a994  li 5, 0
  007a998  bl 0x502fec
  007a99c  nop
  007a9a0  std 3, 160(31)
  007a9a4  lis 4, 0
  007a9a8  li 3, 32256
  007a9ac  ori 4, 4, 36352
  007a9b0  li 5, 0
  007a9b4  bl 0x502fec
  007a9b8  nop
  007a9bc  std 3, 168(31)
  007a9c0  li 3, 32256
  007a9c4  li 4, 29184
  007a9c8  li 5, 0
  007a9cc  bl 0x502fec
  007a9d0  nop
  007a9d4  lis 4, 0
  007a9d8  std 3, 176(31)
  007a9dc  lis 5, 0
  007a9e0  ori 3, 4, 32768
  007a9e4  ori 4, 5, 36352
  007a9e8  li 5, 0
  007a9ec  bl 0x502fec
  007a9f0  nop
  007a9f4  lis 5, 0
  007a9f8  std 3, 184(31)
  007a9fc  li 4, 29184
  007aa00  ori 3, 5, 32768
  007aa04  li 5, 0
  007aa08  bl 0x502fec
  007aa0c  nop
  007aa10  std 3, 192(31)
  007aa14  lis 4, 0
  007aa18  lis 3, 0
  007aa1c  ori 4, 4, 36352
  007aa20  ori 3, 3, 33280
  007aa24  li 5, 0
  007aa28  bl 0x502fec
  007aa2c  nop
  007aa30  std 3, 200(31)
  007aa34  li 4, 29184
  007aa38  lis 3, 0
  007aa3c  li 5, 0
  007aa40  ori 3, 3, 33280
  007aa44  bl 0x502fec
  007aa48  nop
  007aa4c  lis 4, 0
  007aa50  std 3, 208(31)
  007aa54  lis 5, 0
  007aa58  ori 3, 4, 33792
  007aa5c  ori 4, 5, 36352
  007aa60  li 5, 0
  007aa64  bl 0x502fec
  007aa68  nop
  007aa6c  lis 5, 0
  007aa70  std 3, 216(31)
  007aa74  li 4, 29184
  007aa78  ori 3, 5, 33792
  007aa7c  li 5, 0
  007aa80  bl 0x502fec
  007aa84  nop
  007aa88  std 3, 224(31)
  007aa8c  lis 4, 0
  007aa90  lis 3, 0
  007aa94  ori 4, 4, 36352
  007aa98  ori 3, 3, 34304
  007aa9c  li 5, 0
  007aaa0  bl 0x502fec
  007aaa4  nop
  007aaa8  std 3, 232(31)
  007aaac  li 4, 29184
  007aab0  lis 3, 0
  007aab4  li 5, 0
  007aab8  ori 3, 3, 34304
  007aabc  bl 0x502fec
  007aac0  nop
  007aac4  lis 4, 0
  007aac8  std 3, 240(31)
  007aacc  lis 5, 0
  007aad0  ori 3, 4, 34816
  007aad4  ori 4, 5, 36352
  007aad8  li 5, 0
  007aadc  bl 0x502fec
  007aae0  nop
  007aae4  lis 5, 0
  007aae8  std 3, 248(31)
  007aaec  li 4, 29184
  007aaf0  ori 3, 5, 34816
  007aaf4  li 5, 0
  007aaf8  bl 0x502fec
  007aafc  nop
  007ab00  std 3, 256(31)
  007ab04  lis 4, 0
  007ab08  lis 3, 0
  007ab0c  ori 4, 4, 36352
  007ab10  ori 3, 3, 35328
  007ab14  li 5, 0
  007ab18  bl 0x502fec
  007ab1c  nop
  007ab20  std 3, 264(31)
  007ab24  li 4, 29184
  007ab28  lis 3, 0
  007ab2c  li 5, 0
  007ab30  ori 3, 3, 35328
  007ab34  bl 0x502fec
  007ab38  nop
  007ab3c  lis 4, 0
  007ab40  std 3, 272(31)
  007ab44  lis 5, 0
  007ab48  ori 3, 4, 35840
  007ab4c  ori 4, 5, 36352
  007ab50  li 5, 0
  007ab54  bl 0x502fec
  007ab58  nop
  007ab5c  lis 5, 0
  007ab60  std 3, 280(31)
  007ab64  li 4, 29184
  007ab68  ori 3, 5, 35840
  007ab6c  li 5, 0
  007ab70  bl 0x502fec
  007ab74  nop
  007ab78  std 3, 288(31)
  007ab7c  lis 4, 0
  007ab80  lis 3, 0
  007ab84  ori 4, 4, 36352
  007ab88  ori 3, 3, 36352
  007ab8c  li 5, 0
  007ab90  bl 0x502fec
  007ab94  nop
  007ab98  std 3, 296(31)
  007ab9c  li 4, 29184
  007aba0  lis 3, 0
  007aba4  li 5, 0
  007aba8  ori 3, 3, 36352
  007abac  bl 0x502fec
  007abb0  nop
  007abb4  lis 4, 0
  007abb8  std 3, 304(31)
  007abbc  lis 5, 0
  007abc0  ori 3, 4, 36864
  007abc4  ori 4, 5, 36352
  007abc8  li 5, 0
  007abcc  bl 0x502fec
  007abd0  nop
  007abd4  std 3, 312(31)
  007abd8  li 7, 0
  007abdc  li 4, 1
  007abe0  li 5, 0
  007abe4  li 3, 1
  007abe8  li 6, 0
  007abec  li 8, 10
  007abf0  bl 0x502ea0
  007abf4  nop
  007abf8  lis 7, 114
  007abfc  li 4, 1
  007ac00  li 5, 0
  007ac04  li 6, 0
  007ac08  li 8, 1
  007ac0c  std 3, -2384(7)
  007ac10  li 7, 0
  007ac14  li 3, 18
  007ac18  bl 0x502ea0
  007ac1c  nop
  007ac20  lis 31, 114
  007ac24  li 4, 1
  007ac28  li 5, 0
  007ac2c  li 6, 1
  007ac30  li 7, 128
  007ac34  std 3, -2208(31)
  007ac38  li 3, 0
  007ac3c  bl 0x502ea8
  007ac40  nop
  007ac44  addic 31, 31, -2208
  007ac48  li 4, 1
  007ac4c  li 5, 0
  007ac50  li 6, 1
  007ac54  li 7, 128
  007ac58  std 3, 16(31)
  007ac5c  li 3, 0
  007ac60  bl 0x502ea8
  007ac64  nop
  007ac68  std 3, 32(31)
  007ac6c  li 4, 0
  007ac70  li 3, 0
  007ac74  li 5, 0
  007ac78  li 6, 0
  007ac7c  li 7, 0
  007ac80  li 8, 0
  007ac84  bl 0x502f08
  007ac88  nop
  007ac8c  std 3, 48(31)
  007ac90  li 3, 0
  007ac94  li 4, 0
  007ac98  li 5, 0
  007ac9c  li 6, 0
  007aca0  li 7, 0
  007aca4  li 8, 0
  007aca8  bl 0x502f08
  007acac  nop
  007acb0  std 3, 64(31)
  007acb4  li 3, 1
  007acb8  bl 0x502e00
  007acbc  nop
  007acc0  std 3, 80(31)
  007acc4  li 4, 0
  007acc8  std 30, 112(1)
  007accc  li 3, 0
  007acd0  std 30, 120(1)
  007acd4  li 10, 0
  007acd8  std 30, 128(1)
  007acdc  li 5, 0
  007ace0  std 30, 136(1)
  007ace4  li 6, 0
  007ace8  std 30, 144(1)
  007acec  li 7, 0
  007acf0  std 30, 152(1)
  007acf4  li 8, 0
  007acf8  std 30, 160(1)
  007acfc  li 9, 0
  007ad00  std 30, 168(1)
  007ad04  bl 0x502e08
  007ad08  nop
  007ad0c  std 3, 96(31)
  007ad10  li 3, 0
  007ad14  bl 0x502e10
  007ad18  nop
  007ad1c  std 3, 112(31)
  007ad20  li 3, 0
  007ad24  bl 0x502e50
  007ad28  nop
  007ad2c  std 3, 128(31)
  007ad30  li 3, 0
  007ad34  bl 0x502e50
  007ad38  nop
  007ad3c  std 3, 144(31)
  007ad40  li 3, 0
  007ad44  bl 0x502e18
  007ad48  nop
  007ad4c  std 3, 160(31)
  007ad50  li 3, 0
  007ad54  li 4, 0
  007ad58  li 5, 0
  007ad5c  li 6, 0
  007ad60  li 7, 0
  007ad64  li 8, 0
  007ad68  li 9, 0
  007ad6c  li 10, 0
  007ad70  bl 0x502e20
  007ad74  nop
  007ad78  std 3, 176(31)
  007ad7c  li 3, 1
  007ad80  bl 0x502e28
  007ad84  nop
  007ad88  std 3, 192(31)
  007ad8c  li 3, 0
  007ad90  bl 0x502e30
  007ad94  nop
  007ad98  std 3, 208(31)
  007ad9c  li 4, 5
  007ada0  li 3, 1
  007ada4  li 10, 2
  007ada8  li 5, 96
  007adac  li 6, 3
  007adb0  li 7, 0
  007adb4  li 8, 0
  007adb8  li 9, 1
  007adbc  bl 0x502f98
  007adc0  nop
  007adc4  std 3, 224(31)
  007adc8  li 3, 1
  007adcc  li 4, 5
  007add0  li 5, 96
  007add4  li 6, 3
  007add8  li 7, 0
  007addc  li 8, 0
  007ade0  li 9, 1
  007ade4  li 10, 2
  007ade8  bl 0x502f98
  007adec  nop
  007adf0  std 3, 240(31)
  007adf4  li 4, 0
  007adf8  li 3, 0
  007adfc  li 5, 128
  007ae00  bl 0x502e38
  007ae04  nop
  007ae08  std 3, 256(31)
  007ae0c  li 4, 0
  007ae10  li 3, 1
  007ae14  li 5, 0
  007ae18  bl 0x502e40
  007ae1c  nop
  007ae20  std 3, 272(31)
  007ae24  li 4, 1
  007ae28  li 3, 1
  007ae2c  li 5, 0
  007ae30  li 6, 0
  007ae34  li 7, 0
  007ae38  li 8, 6
  007ae3c  bl 0x502ea0
  007ae40  nop
  007ae44  lis 31, 114
  007ae48  li 4, 36
  007ae4c  li 5, 0
  007ae50  std 3, -1904(31)
  007ae54  li 3, 0
  007ae58  bl 0x502ffc
  007ae5c  nop
  007ae60  addic 31, 31, -1904
  007ae64  lis 9, 0
  007ae68  li 4, 0
  007ae6c  li 5, 1
  007ae70  li 6, 1
  007ae74  std 3, 16(31)
  007ae78  li 3, 0
  007ae7c  li 7, 1
  007ae80  li 8, 0
  007ae84  ori 9, 9, 65424
  007ae88  bl 0x502fd4
  007ae8c  nop
  007ae90  std 3, 32(31)
  007ae94  li 4, 1
  007ae98  li 3, 1
  007ae9c  li 5, 0
  007aea0  li 6, 0
  007aea4  li 7, 0
  007aea8  li 8, 0
  007aeac  bl 0x502f08
  007aeb0  nop
  007aeb4  std 3, 48(31)
  007aeb8  li 3, 0
  007aebc  li 4, 0
  007aec0  li 5, 0
  007aec4  li 6, 0
  007aec8  li 7, 0
  007aecc  li 8, 0
  007aed0  li 9, 1
  007aed4  li 10, 1
  007aed8  bl 0x502f7c
  007aedc  nop
  007aee0  std 3, 64(31)
  007aee4  li 4, 1
  007aee8  li 3, 0
  007aeec  li 5, 0
  007aef0  li 6, 1
  007aef4  li 7, 128
  007aef8  bl 0x502ea8
  007aefc  nop
  007af00  std 3, 80(31)
  007af04  li 4, 1
  007af08  li 3, 1
  007af0c  li 5, 0
  007af10  li 6, 0
  007af14  li 7, 0
  007af18  li 8, 6
  007af1c  bl 0x502ea0
  007af20  nop
  007af24  lis 31, 114
  007af28  li 4, 36
  007af2c  li 5, 1
  007af30  std 3, -1792(31)
  007af34  li 3, 0
  007af38  bl 0x502ffc
  007af3c  nop
  007af40  addic 31, 31, -1792
  007af44  li 9, 1
  007af48  li 4, 5
  007af4c  li 10, 1
  007af50  li 5, 128
  007af54  std 3, 16(31)
  007af58  li 3, 1
  007af5c  li 6, 1
  007af60  li 7, 0
  007af64  li 8, 0
  007af68  bl 0x502f7c
  007af6c  nop
  007af70  std 3, 32(31)
  007af74  li 4, 1
  007af78  li 3, 1
  007af7c  li 5, 0
  007af80  li 6, 0
  007af84  li 7, 0
  007af88  li 8, 0
  007af8c  bl 0x502f08
  007af90  nop
  007af94  std 3, 48(31)
  007af98  li 3, 0
  007af9c  lis 9, 0
  007afa0  li 4, 0
  007afa4  li 5, 1
  007afa8  li 6, 1
  007afac  li 7, 1
  007afb0  li 8, 0
  007afb4  ori 9, 9, 65424
  007afb8  bl 0x502fd4
  007afbc  nop
  007afc0  std 3, 64(31)
  007afc4  li 4, 1
  007afc8  li 3, 0
  007afcc  li 5, 0
  007afd0  li 6, 1
  007afd4  li 7, 32
  007afd8  bl 0x502ea8
  007afdc  nop
  007afe0  std 3, 80(31)
  007afe4  ld 0, 208(1)
  007afe8  mtlr 0
  007afec  ld 30, 176(1)
  007aff0  ld 31, 184(1)
  007aff4  addi 1, 1, 192
  007aff8  blr

Global_QuickMovieMalloc:   # 0x7affc, 0xb8 bytes
  007affc  stdu 1, -144(1)
  007b000  mflr 0
  007b004  std 0, 160(1)
  007b008  std 31, 136(1)
  007b00c  lis 4, 101
  007b010  ori 31, 3, 0
  007b014  std 30, 128(1)
  007b018  std 29, 120(1)
  007b01c  addic 3, 4, 8268
  007b020  bl 0x5cd098
  007b024  nop
  007b028  lis 3, 161
  007b02c  lis 4, 161
  007b030  addic 3, 3, 2264
  007b034  lwz 5, 64(3)
  007b038  lwz 3, 1852(4)
  007b03c  addc 29, 5, 3
  007b040  clrlwi 30, 29, 27
  007b044  clrldi 29, 29, 32
  007b048  cmpwi 30, 0
  007b04c  bt 2, 0x7b07c
  007b050  subc 3, 29, 30
  007b054  lis 4, 101
  007b058  addic 29, 3, 32
  007b05c  subfic 5, 30, 32
  007b060  addic 3, 4, 8284
  007b064  clrldi 29, 29, 32
  007b068  extsw 4, 5
  007b06c  bl 0x4ffc9c
  007b070  nop
  007b074  lis 3, 161
  007b078  lwz 3, 1852(3)
  007b07c  subfic 4, 30, 32
  007b080  ori 6, 3, 0
  007b084  addc 4, 31, 4
  007b088  lis 5, 161
  007b08c  addc 4, 4, 6
  007b090  ori 3, 29, 0
  007b094  stw 4, 1852(5)
  007b098  ld 0, 160(1)
  007b09c  mtlr 0
  007b0a0  ld 29, 120(1)
  007b0a4  ld 30, 128(1)
  007b0a8  ld 31, 136(1)
  007b0ac  addi 1, 1, 144
  007b0b0  blr

???_ClearFlag_a1073c:   # 0x7b0b4, 0x10 bytes
  007b0b4  lis 3, 161
  007b0b8  li 4, 0
  007b0bc  stw 4, 1852(3)
  007b0c0  blr

???_FreeTexBase:   # 0x7b0c4, 0x30 bytes
  007b0c4  stdu 1, -112(1)
  007b0c8  mflr 0
  007b0cc  std 0, 128(1)
  007b0d0  lis 3, 161
  007b0d4  li 4, 2
  007b0d8  addic 3, 3, 24396
  007b0dc  bl 0x5084c0
  007b0e0  nop
  007b0e4  ld 0, 128(1)
  007b0e8  mtlr 0
  007b0ec  addi 1, 1, 112
  007b0f0  blr
