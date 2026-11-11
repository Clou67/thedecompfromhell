# game/help.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_HELP:   # 0x7b0f4, 0x3c bytes
  007b0f4  stdu 1, -112(1)
  007b0f8  mflr 0
  007b0fc  std 0, 128(1)
  007b100  lis 3, 114
  007b104  lis 4, 1
  007b108  addic 6, 3, 2072
  007b10c  lis 5, 161
  007b110  addic 3, 5, 24396
  007b114  stw 4, 72(6)
  007b118  bl 0x5084b8
  007b11c  nop
  007b120  ld 0, 128(1)
  007b124  mtlr 0
  007b128  addi 1, 1, 112
  007b12c  blr

Help_Skip:   # 0x7b130, 0xa8 bytes
  007b130  lis 4, 114
  007b134  addic 3, 4, 2180
  007b138  lwz 5, 2180(4)
  007b13c  cmpwi 5, 3
  007b140  cmpwi 1, 5, 0
  007b144  cmpwi 6, 5, -1
  007b148  cmpwi 7, 5, 2
  007b14c  bt 1, 0x7b164
  007b150  bt 5, 0x7b15c
  007b154  bf 25, 0x7b1d4
  007b158  b 0x7b178
  007b15c  bf 29, 0x7b184
  007b160  b 0x7b198
  007b164  cmpwi 5, 5
  007b168  bt 1, 0x7b1d4
  007b16c  cmpwi 5, 4
  007b170  bf 1, 0x7b1ac
  007b174  b 0x7b1c4
  007b178  li 4, -1
  007b17c  stw 4, 36(3)
  007b180  b 0x7b1d4
  007b184  li 5, 0
  007b188  li 6, 7
  007b18c  stw 5, 4(3)
  007b190  stw 6, 2180(4)
  007b194  b 0x7b1d4
  007b198  li 5, 0
  007b19c  li 6, 7
  007b1a0  stw 5, 4(3)
  007b1a4  stw 6, 2180(4)
  007b1a8  b 0x7b1d4
  007b1ac  lwz 6, 4(3)
  007b1b0  li 5, 6
  007b1b4  subfic 6, 6, 4
  007b1b8  stw 5, 2180(4)
  007b1bc  stw 6, 4(3)
  007b1c0  b 0x7b1d4
  007b1c4  li 5, 0
  007b1c8  li 6, 6
  007b1cc  stw 5, 4(3)
  007b1d0  stw 6, 2180(4)
  007b1d4  blr

Help_FindPairIndex:   # 0x7b1d8, 0x74 bytes
  007b1d8  lis 6, 114
  007b1dc  sldi 9, 4, 1
  007b1e0  addic 6, 6, 2252
  007b1e4  extsh 8, 3
  007b1e8  addc 3, 9, 6
  007b1ec  li 7, 0
  007b1f0  clrldi 3, 3, 32
  007b1f4  slwi 9, 7, 2
  007b1f8  extsw 9, 9
  007b1fc  lhzx 10, 3, 9
  007b200  extsh 10, 10
  007b204  cmpw 10, 8
  007b208  bf 2, 0x7b234
  007b20c  cmpwi 5, 0
  007b210  bt 2, 0x7b22c
  007b214  cntlzw 3, 4
  007b218  rlwinm 3, 3, 28, 30, 30
  007b21c  addc 3, 3, 6
  007b220  clrldi 3, 3, 32
  007b224  lhzx 3, 3, 9
  007b228  sth 3, 0(5)
  007b22c  ori 3, 7, 0
  007b230  b 0x7b248
  007b234  addic 7, 7, 1
  007b238  extsw 7, 7
  007b23c  cmpwi 7, 150
  007b240  bt 0, 0x7b1f4
  007b244  li 3, -1
  007b248  blr

Help_AddToLog:   # 0x7b24c, 0xc4 bytes
  007b24c  li 4, 0
  007b250  lis 5, 114
  007b254  extsh 6, 3
  007b258  ori 3, 4, 0
  007b25c  addic 5, 5, 2252
  007b260  lhz 7, 0(5)
  007b264  extsh 7, 7
  007b268  cmpw 7, 6
  007b26c  bf 2, 0x7b27c
  007b270  cmpwi 4, -1
  007b274  bt 2, 0x7b30c
  007b278  b 0x7b290
  007b27c  addic 4, 4, 1
  007b280  addic 5, 5, 4
  007b284  cmpwi 4, 150
  007b288  bt 0, 0x7b260
  007b28c  b 0x7b30c
  007b290  lis 7, 161
  007b294  ori 8, 3, 0
  007b298  addic 7, 7, 1196
  007b29c  lis 6, 114
  007b2a0  lbzx 5, 7, 8
  007b2a4  cmpw 5, 4
  007b2a8  bt 2, 0x7b2c4
  007b2ac  lwz 5, -1188(6)
  007b2b0  cmpw 5, 8
  007b2b4  bf 1, 0x7b2c4
  007b2b8  addic 8, 8, 1
  007b2bc  extsw 8, 8
  007b2c0  b 0x7b2a0
  007b2c4  lwz 5, -1188(6)
  007b2c8  cmpw 5, 8
  007b2cc  bf 1, 0x7b2fc
  007b2d0  addic 5, 5, -1
  007b2d4  cmpw 8, 5
  007b2d8  bf 0, 0x7b2f8
  007b2dc  addc 9, 8, 7
  007b2e0  addic 10, 8, 1
  007b2e4  lbz 9, 1(9)
  007b2e8  stbx 9, 7, 8
  007b2ec  extsw 8, 10
  007b2f0  cmpw 8, 5
  007b2f4  bt 0, 0x7b2dc
  007b2f8  stbx 3, 7, 8
  007b2fc  extsw 3, 5
  007b300  addic 5, 5, 1
  007b304  stw 5, -1188(6)
  007b308  stbx 4, 7, 3
  007b30c  blr

Help_QueueMessage:   # 0x7b310, 0x148 bytes
  007b310  lis 5, 114
  007b314  lwz 5, 2180(5)
  007b318  cmpwi 5, 0
  007b31c  bf 2, 0x7b450
  007b320  lis 5, 114
  007b324  addic 5, 5, 2180
  007b328  lwz 6, 36(5)
  007b32c  cmpwi 6, -1
  007b330  bf 2, 0x7b450
  007b334  lis 6, 150
  007b338  addic 6, 6, 14024
  007b33c  lwz 7, 92(6)
  007b340  cmpwi 7, 0
  007b344  bf 2, 0x7b450
  007b348  lwz 6, 28(6)
  007b34c  cmpwi 6, -1
  007b350  bf 2, 0x7b450
  007b354  lis 6, 161
  007b358  sldi 7, 4, 3
  007b35c  addic 6, 6, 12
  007b360  extsw 7, 7
  007b364  lis 8, 0
  007b368  ori 8, 8, 65535
  007b36c  lhzx 6, 6, 7
  007b370  cmpw 6, 8
  007b374  bt 2, 0x7b450
  007b378  ori 7, 3, 0
  007b37c  ori 8, 4, 0
  007b380  li 4, 0
  007b384  lis 9, 114
  007b388  stw 7, 36(5)
  007b38c  extsh 6, 7
  007b390  stw 8, 40(5)
  007b394  ori 3, 4, 0
  007b398  addic 5, 9, 2252
  007b39c  lhz 7, 0(5)
  007b3a0  extsh 7, 7
  007b3a4  cmpw 7, 6
  007b3a8  bf 2, 0x7b3b8
  007b3ac  cmpwi 4, -1
  007b3b0  bt 2, 0x7b448
  007b3b4  b 0x7b3cc
  007b3b8  addic 4, 4, 1
  007b3bc  addic 5, 5, 4
  007b3c0  cmpwi 4, 150
  007b3c4  bt 0, 0x7b39c
  007b3c8  b 0x7b448
  007b3cc  lis 7, 161
  007b3d0  ori 8, 3, 0
  007b3d4  addic 7, 7, 1196
  007b3d8  lis 6, 114
  007b3dc  lbzx 5, 7, 8
  007b3e0  cmpw 5, 4
  007b3e4  bt 2, 0x7b400
  007b3e8  lwz 5, -1188(6)
  007b3ec  cmpw 5, 8
  007b3f0  bf 1, 0x7b400
  007b3f4  addic 8, 8, 1
  007b3f8  extsw 8, 8
  007b3fc  b 0x7b3dc
  007b400  lwz 5, -1188(6)
  007b404  cmpw 5, 8
  007b408  bf 1, 0x7b438
  007b40c  addic 5, 5, -1
  007b410  cmpw 8, 5
  007b414  bf 0, 0x7b434
  007b418  addc 9, 8, 7
  007b41c  addic 10, 8, 1
  007b420  lbz 9, 1(9)
  007b424  stbx 9, 7, 8
  007b428  extsw 8, 10
  007b42c  cmpw 8, 5
  007b430  bt 0, 0x7b418
  007b434  stbx 3, 7, 8
  007b438  extsw 3, 5
  007b43c  addic 5, 5, 1
  007b440  stw 5, -1188(6)
  007b444  stbx 4, 7, 3
  007b448  li 3, 1
  007b44c  b 0x7b454
  007b450  li 3, 0
  007b454  blr

Help_Kill:   # 0x7b458, 0x98 bytes
  007b458  lis 3, 114
  007b45c  lwz 3, 2180(3)
  007b460  cmpwi 3, 0
  007b464  bt 2, 0x7b4ec
  007b468  lis 4, 114
  007b46c  lis 3, 162
  007b470  addic 4, 4, 2180
  007b474  lwz 3, -22528(3)
  007b478  lwz 5, 32(4)
  007b47c  slwi 5, 5, 4
  007b480  addc 3, 3, 5
  007b484  clrldi 3, 3, 32
  007b488  lwz 3, 8(3)
  007b48c  cmpwi 3, -1
  007b490  bt 2, 0x7b4d0
  007b494  lis 5, 150
  007b498  ori 6, 3, 0
  007b49c  addic 3, 5, 14024
  007b4a0  lhz 5, 96(3)
  007b4a4  extsh 5, 5
  007b4a8  addic 5, 5, -30000
  007b4ac  cmpw 6, 5
  007b4b0  bf 2, 0x7b4d0
  007b4b4  lhz 5, 102(3)
  007b4b8  cmpwi 1, 5, 7
  007b4bc  cmpwi 5, 6
  007b4c0  cror 2, 2, 6
  007b4c4  bt 2, 0x7b4d0
  007b4c8  li 5, 5
  007b4cc  sth 5, 102(3)
  007b4d0  lis 3, 114
  007b4d4  li 5, 0
  007b4d8  li 6, -1
  007b4dc  stw 5, 2180(3)
  007b4e0  stw 6, 36(4)
  007b4e4  stw 6, 32(4)
  007b4e8  stw 5, 4(4)
  007b4ec  blr

Help_QueueMessageForce:   # 0x7b4f0, 0x1c0 bytes
  007b4f0  lis 5, 114
  007b4f4  lwz 6, 2180(5)
  007b4f8  cmpwi 6, 0
  007b4fc  bt 2, 0x7b57c
  007b500  addic 7, 5, 2180
  007b504  lis 6, 162
  007b508  lwz 8, 32(7)
  007b50c  lwz 6, -22528(6)
  007b510  slwi 8, 8, 4
  007b514  addc 6, 6, 8
  007b518  clrldi 6, 6, 32
  007b51c  lwz 6, 8(6)
  007b520  cmpwi 6, -1
  007b524  bt 2, 0x7b564
  007b528  lis 8, 150
  007b52c  ori 9, 6, 0
  007b530  addic 6, 8, 14024
  007b534  lhz 8, 96(6)
  007b538  extsh 8, 8
  007b53c  addic 8, 8, -30000
  007b540  cmpw 9, 8
  007b544  bf 2, 0x7b564
  007b548  lhz 8, 102(6)
  007b54c  cmpwi 1, 8, 7
  007b550  cmpwi 8, 6
  007b554  cror 2, 2, 6
  007b558  bt 2, 0x7b564
  007b55c  li 8, 5
  007b560  sth 8, 102(6)
  007b564  li 6, 0
  007b568  li 8, -1
  007b56c  stw 6, 2180(5)
  007b570  stw 8, 36(7)
  007b574  stw 8, 32(7)
  007b578  stw 6, 4(7)
  007b57c  addic 5, 5, 2180
  007b580  lwz 6, 36(5)
  007b584  cmpwi 6, -1
  007b588  bf 2, 0x7b6a8
  007b58c  lis 6, 150
  007b590  addic 6, 6, 14024
  007b594  lwz 7, 92(6)
  007b598  cmpwi 7, 0
  007b59c  bf 2, 0x7b6a8
  007b5a0  lwz 6, 28(6)
  007b5a4  cmpwi 6, -1
  007b5a8  bf 2, 0x7b6a8
  007b5ac  lis 6, 161
  007b5b0  sldi 7, 4, 3
  007b5b4  addic 6, 6, 12
  007b5b8  extsw 7, 7
  007b5bc  lis 8, 0
  007b5c0  ori 8, 8, 65535
  007b5c4  lhzx 6, 6, 7
  007b5c8  cmpw 6, 8
  007b5cc  bt 2, 0x7b6a8
  007b5d0  ori 7, 3, 0
  007b5d4  ori 8, 4, 0
  007b5d8  li 4, 0
  007b5dc  lis 9, 114
  007b5e0  stw 7, 36(5)
  007b5e4  extsh 6, 7
  007b5e8  stw 8, 40(5)
  007b5ec  ori 3, 4, 0
  007b5f0  addic 5, 9, 2252
  007b5f4  lhz 7, 0(5)
  007b5f8  extsh 7, 7
  007b5fc  cmpw 7, 6
  007b600  bf 2, 0x7b610
  007b604  cmpwi 4, -1
  007b608  bt 2, 0x7b6a0
  007b60c  b 0x7b624
  007b610  addic 4, 4, 1
  007b614  addic 5, 5, 4
  007b618  cmpwi 4, 150
  007b61c  bt 0, 0x7b5f4
  007b620  b 0x7b6a0
  007b624  lis 7, 161
  007b628  ori 8, 3, 0
  007b62c  addic 7, 7, 1196
  007b630  lis 6, 114
  007b634  lbzx 5, 7, 8
  007b638  cmpw 5, 4
  007b63c  bt 2, 0x7b658
  007b640  lwz 5, -1188(6)
  007b644  cmpw 5, 8
  007b648  bf 1, 0x7b658
  007b64c  addic 8, 8, 1
  007b650  extsw 8, 8
  007b654  b 0x7b634
  007b658  lwz 5, -1188(6)
  007b65c  cmpw 5, 8
  007b660  bf 1, 0x7b690
  007b664  addic 5, 5, -1
  007b668  cmpw 8, 5
  007b66c  bf 0, 0x7b68c
  007b670  addc 9, 8, 7
  007b674  addic 10, 8, 1
  007b678  lbz 9, 1(9)
  007b67c  stbx 9, 7, 8
  007b680  extsw 8, 10
  007b684  cmpw 8, 5
  007b688  bt 0, 0x7b670
  007b68c  stbx 3, 7, 8
  007b690  extsw 3, 5
  007b694  addic 5, 5, 1
  007b698  stw 5, -1188(6)
  007b69c  stbx 4, 7, 3
  007b6a0  li 3, 1
  007b6a4  b 0x7b6ac
  007b6a8  li 3, 0
  007b6ac  blr

Help_ClearUsedSinceDeath:   # 0x7b6b0, 0x34 bytes
  007b6b0  lis 3, 161
  007b6b4  li 4, 74
  007b6b8  addic 3, 3, 16
  007b6bc  mtctr 4
  007b6c0  lwz 4, 0(3)
  007b6c4  lwz 5, 8(3)
  007b6c8  clrlwi 4, 4, 1
  007b6cc  clrlwi 5, 5, 1
  007b6d0  stw 4, 0(3)
  007b6d4  stw 5, 8(3)
  007b6d8  addic 3, 3, 16
  007b6dc  bdnz 0x7b6c0
  007b6e0  blr

Help_FindIndex:   # 0x7b6e4, 0x5c bytes
  007b6e4  lis 4, 114
  007b6e8  li 6, 0
  007b6ec  addic 5, 4, 2180
  007b6f0  li 7, -1
  007b6f4  lwz 5, 44(5)
  007b6f8  cmpwi 5, 0
  007b6fc  bf 1, 0x7b738
  007b700  lis 4, 162
  007b704  lwz 4, -22528(4)
  007b708  slwi 8, 6, 4
  007b70c  addc 8, 4, 8
  007b710  clrldi 8, 8, 32
  007b714  lwz 8, 4(8)
  007b718  cmpw 8, 3
  007b71c  bf 2, 0x7b728
  007b720  ori 7, 6, 0
  007b724  b 0x7b738
  007b728  addic 6, 6, 1
  007b72c  extsw 6, 6
  007b730  cmpw 6, 5
  007b734  bt 0, 0x7b708
  007b738  ori 3, 7, 0
  007b73c  blr

help_msg_string_by_index:   # 0x7b740, 0x94 bytes
  007b740  lis 5, 151
  007b744  ori 4, 3, 0
  007b748  cmpwi 1, 4, 6003
  007b74c  lwz 3, -25484(5)
  007b750  cmpwi 3, 3
  007b754  crnand 2, 2, 6
  007b758  bt 2, 0x7b760
  007b75c  li 4, 3000
  007b760  lis 3, 114
  007b764  li 5, 0
  007b768  addic 8, 3, 2180
  007b76c  lwz 8, 44(8)
  007b770  cmpwi 8, 0
  007b774  bf 1, 0x7b7c8
  007b778  ori 7, 5, 0
  007b77c  lis 6, 162
  007b780  lwz 3, -22528(6)
  007b784  addc 9, 3, 7
  007b788  clrldi 9, 9, 32
  007b78c  lwz 9, 4(9)
  007b790  cmpw 9, 4
  007b794  bf 2, 0x7b7a4
  007b798  cmpwi 5, 0
  007b79c  bf 0, 0x7b7b8
  007b7a0  b 0x7b7c8
  007b7a4  addic 5, 5, 1
  007b7a8  addic 7, 7, 16
  007b7ac  cmpw 5, 8
  007b7b0  bt 0, 0x7b780
  007b7b4  b 0x7b7c8
  007b7b8  slwi 4, 5, 4
  007b7bc  extsw 4, 4
  007b7c0  lwzx 3, 3, 4
  007b7c4  b 0x7b7d0
  007b7c8  lis 3, 114
  007b7cc  addic 3, 3, 2964
  007b7d0  blr

Help_Suspend:   # 0x7b7d8, 0x90 bytes
  007b7d8  stdu 1, -112(1)
  007b7dc  mflr 0
  007b7e0  std 0, 128(1)
  007b7e4  lis 3, 114
  007b7e8  addic 3, 3, 2180
  007b7ec  lhz 4, 56(3)
  007b7f0  cmpwi 4, 0
  007b7f4  bf 2, 0x7b858
  007b7f8  lis 4, 8
  007b7fc  vspltisw 2, -1
  007b800  li 5, 1
  007b804  addi 4, 4, -18476
  007b808  lis 6, 114
  007b80c  vslw 2, 2, 2
  007b810  sth 5, 56(3)
  007b814  li 5, -3056
  007b818  <unknown>
  007b81c  li 4, 60
  007b820  vspltw 3, 3, 0
  007b824  <unknown>
  007b828  vmaddfp 2, 4, 3, 2
  007b82c  vctsxs 2, 2, 0
  007b830  vspltw 2, 2, 0
  007b834  stvewx 2, 4, 3
  007b838  bl 0x7b130
  007b83c  lis 3, 114
  007b840  lwz 3, 2180(3)
  007b844  cmpwi 3, 0
  007b848  bf 2, 0x7b858
  007b84c  lis 3, 114
  007b850  li 4, 8
  007b854  stw 4, 2180(3)
  007b858  ld 0, 128(1)
  007b85c  mtlr 0
  007b860  addi 1, 1, 112
  007b864  blr

Help_Resume:   # 0x7b868, 0x14 bytes
  007b868  lis 3, 114
  007b86c  li 4, 0
  007b870  addic 3, 3, 2180
  007b874  sth 4, 56(3)
  007b878  blr

Help_StartMessageBox:   # 0x7b880, 0x168 bytes
  007b880  stdu 1, -176(1)
  007b884  mflr 0
  007b888  std 0, 192(1)
  007b88c  lis 3, 114
  007b890  li 4, 1
  007b894  std 31, 168(1)
  007b898  lis 5, 114
  007b89c  addic 31, 3, 2180
  007b8a0  li 6, 0
  007b8a4  stw 4, 2180(3)
  007b8a8  lbz 3, -1191(5)
  007b8ac  stw 6, 4(31)
  007b8b0  std 30, 160(1)
  007b8b4  std 29, 152(1)
  007b8b8  cmpwi 3, 0
  007b8bc  bf 2, 0x7b8d0
  007b8c0  lis 3, 114
  007b8c4  lbz 3, -1192(3)
  007b8c8  cmpwi 3, 0
  007b8cc  bt 2, 0x7b8e4
  007b8d0  li 3, 0
  007b8d4  li 4, 1
  007b8d8  li 5, 0
  007b8dc  bl 0x15d2d4
  007b8e0  nop
  007b8e4  lis 3, 162
  007b8e8  lwz 6, 32(31)
  007b8ec  li 9, 7
  007b8f0  addic 30, 1, 128
  007b8f4  li 4, 240
  007b8f8  li 5, 480
  007b8fc  lwz 7, -22528(3)
  007b900  li 8, 256
  007b904  slwi 3, 6, 4
  007b908  li 6, 44
  007b90c  extsw 10, 3
  007b910  ori 3, 30, 0
  007b914  lwzx 29, 7, 10
  007b918  std 9, 112(1)
  007b91c  li 7, 468
  007b920  li 9, 360
  007b924  li 10, 16
  007b928  bl 0x6ac90
  007b92c  nop
  007b930  lis 3, 8
  007b934  lis 4, -32513
  007b938  addi 6, 3, -18308
  007b93c  ori 4, 4, 43144
  007b940  ori 3, 30, 0
  007b944  clrldi 4, 4, 32
  007b948  ori 5, 29, 0
  007b94c  lfs 1, 0(6)
  007b950  li 6, -1
  007b954  bl 0x7100c
  007b958  nop
  007b95c  lhz 3, 140(1)
  007b960  li 4, 256
  007b964  lhz 5, 142(1)
  007b968  li 6, 8
  007b96c  extsh 3, 3
  007b970  extsh 5, 5
  007b974  srawi 3, 3, 1
  007b978  stw 4, 16(31)
  007b97c  lis 4, 150
  007b980  addic 3, 3, 10
  007b984  addic 7, 4, 27392
  007b988  srawi 5, 5, 1
  007b98c  stw 3, 8(31)
  007b990  addic 4, 5, 5
  007b994  stw 6, 24(31)
  007b998  stw 6, 28(31)
  007b99c  lwz 3, 4(7)
  007b9a0  stw 4, 12(31)
  007b9a4  addc 5, 3, 5
  007b9a8  addic 6, 3, -60
  007b9ac  addic 7, 3, -12
  007b9b0  addic 5, 5, -55
  007b9b4  cmpw 5, 7
  007b9b8  stw 6, 20(31)
  007b9bc  bf 1, 0x7b9cc
  007b9c0  subc 3, 3, 4
  007b9c4  addic 3, 3, -12
  007b9c8  stw 3, 20(31)
  007b9cc  ld 0, 192(1)
  007b9d0  mtlr 0
  007b9d4  ld 29, 152(1)
  007b9d8  ld 30, 160(1)
  007b9dc  ld 31, 168(1)
  007b9e0  addi 1, 1, 176
  007b9e4  blr

Help_Update:   # 0x7ba00, 0xe38 bytes
  007ba00  stdu 1, -224(1)
  007ba04  mflr 0
  007ba08  std 0, 240(1)
  007ba0c  std 31, 216(1)
  007ba10  lis 31, 114
  007ba14  addic 31, 31, 2180
  007ba18  lwz 3, 48(31)
  007ba1c  std 30, 208(1)
  007ba20  std 29, 200(1)
  007ba24  cmpwi 3, 0
  007ba28  bf 2, 0x7ba9c
  007ba2c  lwz 4, 52(31)
  007ba30  cmpwi 4, 0
  007ba34  bf 2, 0x7ba58
  007ba38  lis 5, 150
  007ba3c  addic 5, 5, 19008
  007ba40  lwz 5, 160(5)
  007ba44  rlwinm 5, 5, 0, 16, 19
  007ba48  cmpwi 5, 0
  007ba4c  bt 2, 0x7ba58
  007ba50  li 4, 1
  007ba54  b 0x7ba60
  007ba58  cmpwi 4, 0
  007ba5c  bt 2, 0x7ba9c
  007ba60  lis 5, 8
  007ba64  addic 4, 4, 1
  007ba68  addi 5, 5, -17944
  007ba6c  lis 6, 114
  007ba70  stw 4, 52(31)
  007ba74  lfs 1, 0(5)
  007ba78  lfs 2, -3056(6)
  007ba7c  fmuls 1, 2, 1
  007ba80  fctiwz 1, 1
  007ba84  stfd 1, 176(1)
  007ba88  lwz 5, 180(1)
  007ba8c  cmpw 4, 5
  007ba90  bt 0, 0x7ba9c
  007ba94  li 3, 1
  007ba98  stw 3, 48(31)
  007ba9c  lis 4, 161
  007baa0  cmpwi 1, 3, 0
  007baa4  lwz 3, 1800(4)
  007baa8  cmpwi 3, 0
  007baac  bf 2, 0x7bab4
  007bab0  bf 6, 0x7bad0
  007bab4  li 3, -1
  007bab8  lis 4, 114
  007babc  li 5, 0
  007bac0  stw 3, 36(31)
  007bac4  stw 5, 2180(4)
  007bac8  stw 5, 4(31)
  007bacc  b 0x7c81c
  007bad0  lis 3, 114
  007bad4  lwz 4, 4(31)
  007bad8  addic 4, 4, 1
  007badc  lwz 3, 2180(3)
  007bae0  stw 4, 4(31)
  007bae4  cmpwi 3, 3
  007bae8  cmpwi 1, 3, 0
  007baec  cmpwi 6, 3, -1
  007baf0  cmpwi 7, 3, 1
  007baf4  bt 1, 0x7bb14
  007baf8  bt 5, 0x7bb04
  007bafc  bf 25, 0x7c81c
  007bb00  b 0x7bdc8
  007bb04  bf 29, 0x7bf68
  007bb08  cmpwi 3, 2
  007bb0c  bf 1, 0x7c0f4
  007bb10  b 0x7c2b4
  007bb14  cmpwi 3, 6
  007bb18  bt 1, 0x7bb30
  007bb1c  cmpwi 3, 4
  007bb20  bf 1, 0x7c3f4
  007bb24  cmpwi 3, 5
  007bb28  bf 1, 0x7c58c
  007bb2c  b 0x7c72c
  007bb30  cmpwi 3, 7
  007bb34  bf 1, 0x7c774
  007bb38  cmpwi 3, 8
  007bb3c  bt 1, 0x7c81c
  007bb40  lhz 3, 56(31)
  007bb44  cmpwi 3, 0
  007bb48  bf 2, 0x7c81c
  007bb4c  lwz 3, 32(31)
  007bb50  cmpwi 1, 3, 0
  007bb54  bt 4, 0x7bcec
  007bb58  lhz 3, 58(31)
  007bb5c  cmpwi 3, 0
  007bb60  bf 2, 0x7bcb8
  007bb64  addic 3, 31, 60
  007bb68  bl 0x4fff60
  007bb6c  nop
  007bb70  cmpwi 3, 0
  007bb74  bt 2, 0x7c81c
  007bb78  lis 3, 114
  007bb7c  lis 4, 114
  007bb80  li 5, 1
  007bb84  li 6, 0
  007bb88  lbz 3, -1191(3)
  007bb8c  stw 5, 2180(4)
  007bb90  cmpwi 3, 0
  007bb94  stw 6, 4(31)
  007bb98  bf 2, 0x7bbac
  007bb9c  lis 3, 114
  007bba0  lbz 3, -1192(3)
  007bba4  cmpwi 3, 0
  007bba8  bt 2, 0x7bbc0
  007bbac  li 3, 0
  007bbb0  li 4, 1
  007bbb4  li 5, 0
  007bbb8  bl 0x15d2d4
  007bbbc  nop
  007bbc0  lis 3, 162
  007bbc4  lwz 6, 32(31)
  007bbc8  li 9, 7
  007bbcc  addic 30, 1, 152
  007bbd0  li 4, 240
  007bbd4  li 5, 480
  007bbd8  lwz 7, -22528(3)
  007bbdc  li 8, 256
  007bbe0  slwi 3, 6, 4
  007bbe4  li 6, 44
  007bbe8  extsw 10, 3
  007bbec  ori 3, 30, 0
  007bbf0  lwzx 29, 7, 10
  007bbf4  std 9, 112(1)
  007bbf8  li 7, 468
  007bbfc  li 9, 360
  007bc00  li 10, 16
  007bc04  bl 0x6ac90
  007bc08  nop
  007bc0c  lis 3, 8
  007bc10  lis 4, -32513
  007bc14  addi 6, 3, -17944
  007bc18  ori 4, 4, 43144
  007bc1c  ori 3, 30, 0
  007bc20  clrldi 4, 4, 32
  007bc24  ori 5, 29, 0
  007bc28  lfs 1, 4(6)
  007bc2c  li 6, -1
  007bc30  bl 0x7100c
  007bc34  nop
  007bc38  lis 4, 150
  007bc3c  lhz 3, 164(1)
  007bc40  lhz 5, 166(1)
  007bc44  li 7, 256
  007bc48  addic 4, 4, 27392
  007bc4c  extsh 3, 3
  007bc50  extsh 5, 5
  007bc54  srawi 6, 3, 1
  007bc58  srawi 5, 5, 1
  007bc5c  addic 6, 6, 10
  007bc60  lwz 4, 4(4)
  007bc64  addic 3, 5, 5
  007bc68  stw 7, 16(31)
  007bc6c  li 7, 8
  007bc70  addic 8, 4, -60
  007bc74  stw 6, 8(31)
  007bc78  addc 5, 4, 5
  007bc7c  stw 3, 12(31)
  007bc80  addic 9, 4, -12
  007bc84  addic 5, 5, -55
  007bc88  stw 7, 24(31)
  007bc8c  stw 7, 28(31)
  007bc90  stw 8, 20(31)
  007bc94  cmpw 5, 9
  007bc98  lhz 5, 58(31)
  007bc9c  bf 1, 0x7bcac
  007bca0  subc 3, 4, 3
  007bca4  addic 3, 3, -12
  007bca8  stw 3, 20(31)
  007bcac  addic 3, 5, 1
  007bcb0  sth 3, 58(31)
  007bcb4  b 0x7c81c
  007bcb8  bt 4, 0x7bcec
  007bcbc  lis 4, 0
  007bcc0  lwz 5, 40(31)
  007bcc4  lis 3, 161
  007bcc8  ori 6, 4, 65535
  007bccc  slwi 4, 5, 3
  007bcd0  addic 3, 3, 12
  007bcd4  extsw 4, 4
  007bcd8  lhzx 5, 3, 4
  007bcdc  cmpw 5, 6
  007bce0  bf 0, 0x7bcec
  007bce4  addic 5, 5, 1
  007bce8  sthx 5, 3, 4
  007bcec  lis 3, 161
  007bcf0  lis 4, 114
  007bcf4  lwz 3, -2344(3)
  007bcf8  extsw 3, 3
  007bcfc  std 3, 176(1)
  007bd00  lis 3, 8
  007bd04  addi 3, 3, -17944
  007bd08  lfs 1, 8(3)
  007bd0c  lfs 2, -3056(4)
  007bd10  lfd 3, 176(1)
  007bd14  lis 3, 6990
  007bd18  fcfid 3, 3
  007bd1c  ori 5, 3, 33205
  007bd20  lwz 3, 40(31)
  007bd24  lis 4, 161
  007bd28  slwi 3, 3, 3
  007bd2c  addic 4, 4, 12
  007bd30  extsw 3, 3
  007bd34  addc 4, 4, 3
  007bd38  frsp 3, 3
  007bd3c  lhz 6, 2(4)
  007bd40  fadds 1, 3, 1
  007bd44  fmuls 1, 2, 1
  007bd48  fctiwz 1, 1
  007bd4c  stfd 1, 176(1)
  007bd50  lwz 3, 180(1)
  007bd54  mulhw 5, 5, 3
  007bd58  srawi 5, 5, 6
  007bd5c  srwi 7, 5, 31
  007bd60  addc 5, 5, 7
  007bd64  cmpw 5, 6
  007bd68  bf 1, 0x7bd88
  007bd6c  lis 5, 6990
  007bd70  ori 5, 5, 33205
  007bd74  mulhw 3, 5, 3
  007bd78  srawi 3, 3, 6
  007bd7c  srwi 5, 3, 31
  007bd80  addc 3, 3, 5
  007bd84  sth 3, 2(4)
  007bd88  lis 3, 151
  007bd8c  lwz 8, 4(4)
  007bd90  li 5, 1
  007bd94  li 7, 0
  007bd98  lis 6, -32768
  007bd9c  lis 9, 114
  007bda0  lwz 3, -25488(3)
  007bda4  sth 7, 58(31)
  007bda8  slw 3, 5, 3
  007bdac  li 5, -1
  007bdb0  or 3, 8, 3
  007bdb4  or 3, 3, 6
  007bdb8  stw 5, 32(31)
  007bdbc  stw 7, 2180(9)
  007bdc0  stw 3, 4(4)
  007bdc4  b 0x7c81c
  007bdc8  lwz 5, 36(31)
  007bdcc  cmpwi 5, 0
  007bdd0  bt 0, 0x7c81c
  007bdd4  lwz 6, 44(31)
  007bdd8  li 4, 0
  007bddc  li 3, -1
  007bde0  cmpwi 6, 0
  007bde4  ori 9, 4, 0
  007bde8  ori 8, 3, 0
  007bdec  bf 1, 0x7be28
  007bdf0  ori 7, 4, 0
  007bdf4  lis 10, 162
  007bdf8  lwz 11, -22528(10)
  007bdfc  addc 11, 11, 7
  007be00  clrldi 11, 11, 32
  007be04  lwz 11, 4(11)
  007be08  cmpw 11, 5
  007be0c  bf 2, 0x7be18
  007be10  ori 3, 4, 0
  007be14  b 0x7be28
  007be18  addic 4, 4, 1
  007be1c  addic 7, 7, 16
  007be20  cmpw 4, 6
  007be24  bt 0, 0x7bdf8
  007be28  stw 3, 32(31)
  007be2c  cmpwi 3, 0
  007be30  stw 8, 36(31)
  007be34  bt 0, 0x7c81c
  007be38  lis 4, 114
  007be3c  lis 5, 114
  007be40  li 6, 1
  007be44  lbz 4, -1191(4)
  007be48  stw 6, 2180(5)
  007be4c  cmpwi 4, 0
  007be50  stw 9, 4(31)
  007be54  bf 2, 0x7be68
  007be58  lis 4, 114
  007be5c  lbz 4, -1192(4)
  007be60  cmpwi 4, 0
  007be64  bt 2, 0x7be80
  007be68  li 3, 0
  007be6c  li 4, 1
  007be70  li 5, 0
  007be74  bl 0x15d2d4
  007be78  nop
  007be7c  lwz 3, 32(31)
  007be80  lis 5, 162
  007be84  slwi 3, 3, 4
  007be88  li 7, 7
  007be8c  extsw 6, 3
  007be90  addic 30, 1, 128
  007be94  lwz 8, -22528(5)
  007be98  ori 3, 30, 0
  007be9c  li 4, 240
  007bea0  li 10, 16
  007bea4  li 5, 480
  007bea8  lwzx 29, 8, 6
  007beac  li 9, 360
  007beb0  std 7, 112(1)
  007beb4  li 6, 44
  007beb8  li 7, 468
  007bebc  li 8, 256
  007bec0  bl 0x6ac90
  007bec4  nop
  007bec8  lis 3, 8
  007becc  lis 4, -32513
  007bed0  addi 6, 3, -17944
  007bed4  ori 4, 4, 43144
  007bed8  ori 3, 30, 0
  007bedc  ori 5, 29, 0
  007bee0  clrldi 4, 4, 32
  007bee4  lfs 1, 4(6)
  007bee8  li 6, -1
  007beec  bl 0x7100c
  007bef0  nop
  007bef4  lhz 3, 140(1)
  007bef8  lhz 4, 142(1)
  007befc  lis 5, 150
  007bf00  extsh 3, 3
  007bf04  extsh 4, 4
  007bf08  addic 5, 5, 27392
  007bf0c  srawi 7, 4, 1
  007bf10  srawi 6, 3, 1
  007bf14  addic 3, 7, 5
  007bf18  addic 6, 6, 10
  007bf1c  lwz 4, 4(5)
  007bf20  li 5, 256
  007bf24  stw 3, 12(31)
  007bf28  addic 8, 4, -60
  007bf2c  stw 6, 8(31)
  007bf30  li 9, 8
  007bf34  addc 6, 4, 7
  007bf38  stw 5, 16(31)
  007bf3c  addic 5, 4, -12
  007bf40  addic 6, 6, -55
  007bf44  stw 8, 20(31)
  007bf48  stw 9, 24(31)
  007bf4c  cmpw 6, 5
  007bf50  stw 9, 28(31)
  007bf54  bf 1, 0x7c81c
  007bf58  subc 3, 4, 3
  007bf5c  addic 3, 3, -12
  007bf60  stw 3, 20(31)
  007bf64  b 0x7c81c
  007bf68  li 3, 5
  007bf6c  li 4, 0
  007bf70  bl 0x11afac
  007bf74  nop
  007bf78  lis 3, 162
  007bf7c  lwz 4, 32(31)
  007bf80  slwi 5, 4, 4
  007bf84  lwz 4, 40(31)
  007bf88  lwz 3, -22528(3)
  007bf8c  lwz 6, 4(31)
  007bf90  addc 3, 3, 5
  007bf94  clrldi 3, 3, 32
  007bf98  lwz 3, 8(3)
  007bf9c  cmpwi 3, 0
  007bfa0  bt 0, 0x7bfcc
  007bfa4  lis 5, 150
  007bfa8  addic 5, 5, 14024
  007bfac  lwz 7, 92(5)
  007bfb0  cmpwi 7, 0
  007bfb4  bf 2, 0x7bfcc
  007bfb8  lwz 7, 28(5)
  007bfbc  cmpwi 7, -1
  007bfc0  bf 2, 0x7bfcc
  007bfc4  addic 3, 3, 30000
  007bfc8  stw 3, 28(5)
  007bfcc  lis 3, 150
  007bfd0  addic 3, 3, 19008
  007bfd4  lwz 3, 164(3)
  007bfd8  rlwinm 3, 3, 0, 27, 27
  007bfdc  cmpwi 3, 0
  007bfe0  bt 2, 0x7c0d4
  007bfe4  lis 3, 161
  007bfe8  slwi 4, 4, 3
  007bfec  addic 3, 3, 12
  007bff0  extsw 4, 4
  007bff4  lis 5, 0
  007bff8  ori 7, 5, 65535
  007bffc  lhzx 5, 3, 4
  007c000  cmpw 5, 7
  007c004  bf 0, 0x7c010
  007c008  addic 5, 5, 1
  007c00c  sthx 5, 3, 4
  007c010  lis 5, 161
  007c014  lis 7, 8
  007c018  addc 4, 3, 4
  007c01c  lwz 5, -2344(5)
  007c020  extsw 5, 5
  007c024  std 5, 176(1)
  007c028  addi 5, 7, -17944
  007c02c  lis 7, 114
  007c030  lfs 1, 8(5)
  007c034  lfs 2, -3056(7)
  007c038  lfd 3, 176(1)
  007c03c  lis 5, 6990
  007c040  fcfid 3, 3
  007c044  ori 5, 5, 33205
  007c048  lhz 7, 2(4)
  007c04c  frsp 3, 3
  007c050  fadds 1, 3, 1
  007c054  fmuls 1, 2, 1
  007c058  fctiwz 1, 1
  007c05c  stfd 1, 176(1)
  007c060  lwz 3, 180(1)
  007c064  mulhw 5, 5, 3
  007c068  srawi 5, 5, 6
  007c06c  srwi 8, 5, 31
  007c070  addc 5, 5, 8
  007c074  cmpw 5, 7
  007c078  bf 1, 0x7c098
  007c07c  lis 5, 6990
  007c080  ori 5, 5, 33205
  007c084  mulhw 3, 5, 3
  007c088  srawi 3, 3, 6
  007c08c  srwi 5, 3, 31
  007c090  addc 3, 3, 5
  007c094  sth 3, 2(4)
  007c098  lis 3, 151
  007c09c  lwz 8, 4(4)
  007c0a0  li 5, 1
  007c0a4  subfic 6, 6, 8
  007c0a8  lis 7, -32768
  007c0ac  lwz 3, -25488(3)
  007c0b0  stw 6, 4(31)
  007c0b4  slw 3, 5, 3
  007c0b8  lis 5, 114
  007c0bc  or 3, 8, 3
  007c0c0  li 6, 7
  007c0c4  or 3, 3, 7
  007c0c8  stw 6, 2180(5)
  007c0cc  stw 3, 4(4)
  007c0d0  b 0x7c81c
  007c0d4  cmpwi 6, 6
  007c0d8  bt 0, 0x7c81c
  007c0dc  lis 3, 114
  007c0e0  li 4, 2
  007c0e4  li 5, 0
  007c0e8  stw 4, 2180(3)
  007c0ec  stw 5, 4(31)
  007c0f0  b 0x7c81c
  007c0f4  li 3, 5
  007c0f8  li 4, 0
  007c0fc  bl 0x11afac
  007c100  nop
  007c104  lis 3, 150
  007c108  addic 3, 3, 19008
  007c10c  lwz 3, 164(3)
  007c110  rlwinm 3, 3, 0, 27, 27
  007c114  cmpwi 3, 0
  007c118  bt 2, 0x7c210
  007c11c  lis 4, 0
  007c120  lwz 5, 40(31)
  007c124  lis 3, 161
  007c128  ori 6, 4, 65535
  007c12c  slwi 4, 5, 3
  007c130  addic 3, 3, 12
  007c134  extsw 4, 4
  007c138  lhzx 5, 3, 4
  007c13c  cmpw 5, 6
  007c140  bf 0, 0x7c14c
  007c144  addic 5, 5, 1
  007c148  sthx 5, 3, 4
  007c14c  lis 5, 161
  007c150  lis 6, 114
  007c154  addc 4, 3, 4
  007c158  lwz 5, -2344(5)
  007c15c  extsw 5, 5
  007c160  std 5, 176(1)
  007c164  lis 5, 8
  007c168  addi 5, 5, -17944
  007c16c  lfs 1, 8(5)
  007c170  lfs 2, -3056(6)
  007c174  lfd 3, 176(1)
  007c178  fcfid 3, 3
  007c17c  lis 5, 6990
  007c180  lhz 6, 2(4)
  007c184  ori 5, 5, 33205
  007c188  frsp 3, 3
  007c18c  fadds 1, 3, 1
  007c190  fmuls 1, 2, 1
  007c194  fctiwz 1, 1
  007c198  stfd 1, 176(1)
  007c19c  lwz 3, 180(1)
  007c1a0  mulhw 5, 5, 3
  007c1a4  srawi 5, 5, 6
  007c1a8  srwi 7, 5, 31
  007c1ac  addc 5, 5, 7
  007c1b0  cmpw 5, 6
  007c1b4  bf 1, 0x7c1d4
  007c1b8  lis 5, 6990
  007c1bc  ori 5, 5, 33205
  007c1c0  mulhw 3, 5, 3
  007c1c4  srawi 3, 3, 6
  007c1c8  srwi 5, 3, 31
  007c1cc  addc 3, 3, 5
  007c1d0  sth 3, 2(4)
  007c1d4  lis 3, 151
  007c1d8  lwz 8, 4(4)
  007c1dc  li 5, 1
  007c1e0  li 6, 0
  007c1e4  lis 7, -32768
  007c1e8  lis 9, 114
  007c1ec  lwz 3, -25488(3)
  007c1f0  stw 6, 4(31)
  007c1f4  slw 3, 5, 3
  007c1f8  li 5, 7
  007c1fc  or 3, 8, 3
  007c200  or 3, 3, 7
  007c204  stw 5, 2180(9)
  007c208  stw 3, 4(4)
  007c20c  b 0x7c81c
  007c210  lis 3, 8
  007c214  lis 4, 114
  007c218  addi 3, 3, -17944
  007c21c  lfs 2, 12(3)
  007c220  lfs 1, -3056(4)
  007c224  lwz 3, 4(31)
  007c228  fmuls 2, 1, 2
  007c22c  fctiwz 2, 2
  007c230  stfd 2, 176(1)
  007c234  lwz 4, 180(1)
  007c238  cmpw 3, 4
  007c23c  bf 0, 0x7c29c
  007c240  lis 4, 8
  007c244  addi 4, 4, -17944
  007c248  lfs 2, 16(4)
  007c24c  fmuls 1, 1, 2
  007c250  fctiwz 1, 1
  007c254  stfd 1, 176(1)
  007c258  lwz 4, 180(1)
  007c25c  cmpw 3, 4
  007c260  bt 0, 0x7c81c
  007c264  lis 3, 150
  007c268  addic 3, 3, 14024
  007c26c  lhz 3, 102(3)
  007c270  cmpwi 3, 3
  007c274  bt 2, 0x7c29c
  007c278  lis 3, 162
  007c27c  lwz 4, 32(31)
  007c280  slwi 4, 4, 4
  007c284  lwz 3, -22528(3)
  007c288  addc 3, 3, 4
  007c28c  clrldi 3, 3, 32
  007c290  lwz 3, 8(3)
  007c294  cmpwi 3, -1
  007c298  bf 2, 0x7c81c
  007c29c  lis 3, 114
  007c2a0  li 4, 3
  007c2a4  li 5, 0
  007c2a8  stw 4, 2180(3)
  007c2ac  stw 5, 4(31)
  007c2b0  b 0x7c81c
  007c2b4  li 3, 5
  007c2b8  li 4, 0
  007c2bc  bl 0x11afac
  007c2c0  nop
  007c2c4  lis 3, 150
  007c2c8  addic 3, 3, 19008
  007c2cc  lwz 3, 164(3)
  007c2d0  rlwinm 3, 3, 0, 27, 27
  007c2d4  cmpwi 3, 0
  007c2d8  bt 2, 0x7c3d0
  007c2dc  lis 4, 0
  007c2e0  lwz 5, 40(31)
  007c2e4  lis 3, 161
  007c2e8  ori 6, 4, 65535
  007c2ec  slwi 4, 5, 3
  007c2f0  addic 3, 3, 12
  007c2f4  extsw 4, 4
  007c2f8  lhzx 5, 3, 4
  007c2fc  cmpw 5, 6
  007c300  bf 0, 0x7c30c
  007c304  addic 5, 5, 1
  007c308  sthx 5, 3, 4
  007c30c  lis 5, 161
  007c310  lis 6, 114
  007c314  addc 4, 3, 4
  007c318  lwz 5, -2344(5)
  007c31c  extsw 5, 5
  007c320  std 5, 176(1)
  007c324  lis 5, 8
  007c328  addi 5, 5, -17944
  007c32c  lfs 1, 8(5)
  007c330  lfs 2, -3056(6)
  007c334  lfd 3, 176(1)
  007c338  fcfid 3, 3
  007c33c  lis 5, 6990
  007c340  lhz 6, 2(4)
  007c344  ori 5, 5, 33205
  007c348  frsp 3, 3
  007c34c  fadds 1, 3, 1
  007c350  fmuls 1, 2, 1
  007c354  fctiwz 1, 1
  007c358  stfd 1, 176(1)
  007c35c  lwz 3, 180(1)
  007c360  mulhw 5, 5, 3
  007c364  srawi 5, 5, 6
  007c368  srwi 7, 5, 31
  007c36c  addc 5, 5, 7
  007c370  cmpw 5, 6
  007c374  bf 1, 0x7c394
  007c378  lis 5, 6990
  007c37c  ori 5, 5, 33205
  007c380  mulhw 3, 5, 3
  007c384  srawi 3, 3, 6
  007c388  srwi 5, 3, 31
  007c38c  addc 3, 3, 5
  007c390  sth 3, 2(4)
  007c394  lis 3, 151
  007c398  lwz 8, 4(4)
  007c39c  li 5, 1
  007c3a0  li 6, 0
  007c3a4  lis 7, -32768
  007c3a8  lis 9, 114
  007c3ac  lwz 3, -25488(3)
  007c3b0  stw 6, 4(31)
  007c3b4  slw 3, 5, 3
  007c3b8  li 5, 7
  007c3bc  or 3, 8, 3
  007c3c0  or 3, 3, 7
  007c3c4  stw 5, 2180(9)
  007c3c8  stw 3, 4(4)
  007c3cc  b 0x7c81c
  007c3d0  lwz 3, 4(31)
  007c3d4  cmpwi 3, 8
  007c3d8  bt 0, 0x7c81c
  007c3dc  lis 3, 114
  007c3e0  li 4, 4
  007c3e4  li 5, 0
  007c3e8  stw 4, 2180(3)
  007c3ec  stw 5, 4(31)
  007c3f0  b 0x7c81c
  007c3f4  li 3, 5
  007c3f8  li 4, 0
  007c3fc  bl 0x11afac
  007c400  nop
  007c404  lis 3, 150
  007c408  lwz 5, 4(31)
  007c40c  addic 3, 3, 19008
  007c410  lwz 3, 164(3)
  007c414  rlwinm 3, 3, 0, 27, 27
  007c418  cmpwi 3, 0
  007c41c  bt 2, 0x7c514
  007c420  lis 4, 0
  007c424  lis 3, 161
  007c428  ori 7, 4, 65535
  007c42c  lwz 4, 40(31)
  007c430  addic 3, 3, 12
  007c434  slwi 4, 4, 3
  007c438  extsw 4, 4
  007c43c  lhzx 6, 3, 4
  007c440  cmpw 6, 7
  007c444  bf 0, 0x7c450
  007c448  addic 6, 6, 1
  007c44c  sthx 6, 3, 4
  007c450  lis 6, 161
  007c454  lis 7, 8
  007c458  addc 4, 3, 4
  007c45c  lwz 6, -2344(6)
  007c460  extsw 6, 6
  007c464  std 6, 176(1)
  007c468  addi 6, 7, -17944
  007c46c  lis 7, 114
  007c470  lfs 1, 8(6)
  007c474  lfs 2, -3056(7)
  007c478  lfd 3, 176(1)
  007c47c  lis 6, 6990
  007c480  fcfid 3, 3
  007c484  ori 6, 6, 33205
  007c488  lhz 7, 2(4)
  007c48c  frsp 3, 3
  007c490  fadds 1, 3, 1
  007c494  fmuls 1, 2, 1
  007c498  fctiwz 1, 1
  007c49c  stfd 1, 176(1)
  007c4a0  lwz 3, 180(1)
  007c4a4  mulhw 6, 6, 3
  007c4a8  srawi 6, 6, 6
  007c4ac  srwi 8, 6, 31
  007c4b0  addc 6, 6, 8
  007c4b4  cmpw 6, 7
  007c4b8  bf 1, 0x7c4d8
  007c4bc  lis 6, 6990
  007c4c0  ori 6, 6, 33205
  007c4c4  mulhw 3, 6, 3
  007c4c8  srawi 3, 3, 6
  007c4cc  srwi 6, 3, 31
  007c4d0  addc 3, 3, 6
  007c4d4  sth 3, 2(4)
  007c4d8  lis 3, 151
  007c4dc  lwz 9, 4(4)
  007c4e0  li 6, 1
  007c4e4  lis 8, 114
  007c4e8  lis 7, -32768
  007c4ec  subfic 5, 5, 4
  007c4f0  lwz 3, -25488(3)
  007c4f4  slw 3, 6, 3
  007c4f8  li 6, 6
  007c4fc  or 3, 9, 3
  007c500  or 3, 3, 7
  007c504  stw 6, 2180(8)
  007c508  stw 5, 4(31)
  007c50c  stw 3, 4(4)
  007c510  b 0x7c81c
  007c514  cmpwi 5, 4
  007c518  bt 0, 0x7c81c
  007c51c  lis 3, 162
  007c520  lwz 4, 32(31)
  007c524  slwi 4, 4, 4
  007c528  lwz 3, -22528(3)
  007c52c  addc 3, 3, 4
  007c530  clrldi 3, 3, 32
  007c534  lwz 3, 8(3)
  007c538  cmpwi 3, -1
  007c53c  bt 2, 0x7c574
  007c540  lis 4, 150
  007c544  ori 5, 3, 0
  007c548  addic 3, 4, 14024
  007c54c  lhz 4, 96(3)
  007c550  extsh 4, 4
  007c554  addic 4, 4, -30000
  007c558  cmpw 5, 4
  007c55c  bf 2, 0x7c574
  007c560  lhz 3, 102(3)
  007c564  cmpwi 3, 3
  007c568  bf 2, 0x7c574
  007c56c  bl 0x11c830
  007c570  nop
  007c574  lis 3, 114
  007c578  li 4, 5
  007c57c  li 5, 0
  007c580  stw 4, 2180(3)
  007c584  stw 5, 4(31)
  007c588  b 0x7c81c
  007c58c  li 3, 5
  007c590  li 4, 0
  007c594  bl 0x11afac
  007c598  nop
  007c59c  lis 3, 8
  007c5a0  lis 4, 114
  007c5a4  addi 3, 3, -17944
  007c5a8  lfs 2, 20(3)
  007c5ac  lfs 1, -3056(4)
  007c5b0  lwz 3, 4(31)
  007c5b4  fmuls 2, 1, 2
  007c5b8  fctiwz 2, 2
  007c5bc  stfd 2, 176(1)
  007c5c0  lwz 4, 180(1)
  007c5c4  cmpw 3, 4
  007c5c8  bt 0, 0x7c628
  007c5cc  lis 3, 162
  007c5d0  lwz 4, 32(31)
  007c5d4  slwi 4, 4, 4
  007c5d8  lwz 3, -22528(3)
  007c5dc  addc 3, 3, 4
  007c5e0  clrldi 3, 3, 32
  007c5e4  lwz 3, 8(3)
  007c5e8  cmpwi 3, -1
  007c5ec  bt 2, 0x7c640
  007c5f0  lis 4, 150
  007c5f4  ori 5, 3, 0
  007c5f8  addic 3, 4, 14024
  007c5fc  lhz 4, 96(3)
  007c600  extsh 4, 4
  007c604  addic 4, 4, -30000
  007c608  cmpw 5, 4
  007c60c  bf 2, 0x7c640
  007c610  lwz 4, 92(3)
  007c614  cmpwi 4, 0
  007c618  bf 2, 0x7c628
  007c61c  lwz 3, 28(3)
  007c620  cmpwi 3, -1
  007c624  bt 2, 0x7c640
  007c628  lis 3, 150
  007c62c  addic 3, 3, 19008
  007c630  lwz 3, 164(3)
  007c634  rlwinm 3, 3, 0, 27, 27
  007c638  cmpwi 3, 0
  007c63c  bt 2, 0x7c81c
  007c640  lis 4, 0
  007c644  lis 3, 161
  007c648  ori 6, 4, 65535
  007c64c  lwz 4, 40(31)
  007c650  addic 3, 3, 12
  007c654  slwi 4, 4, 3
  007c658  extsw 4, 4
  007c65c  lhzx 5, 3, 4
  007c660  cmpw 5, 6
  007c664  bf 0, 0x7c670
  007c668  addic 5, 5, 1
  007c66c  sthx 5, 3, 4
  007c670  lis 5, 161
  007c674  lis 6, 8
  007c678  addc 4, 3, 4
  007c67c  lwz 5, -2344(5)
  007c680  extsw 5, 5
  007c684  std 5, 176(1)
  007c688  addi 5, 6, -17944
  007c68c  lfs 2, 8(5)
  007c690  lfd 3, 176(1)
  007c694  lis 5, 6990
  007c698  fcfid 3, 3
  007c69c  ori 5, 5, 33205
  007c6a0  lhz 6, 2(4)
  007c6a4  frsp 3, 3
  007c6a8  fadds 2, 3, 2
  007c6ac  fmuls 1, 1, 2
  007c6b0  fctiwz 1, 1
  007c6b4  stfd 1, 176(1)
  007c6b8  lwz 3, 180(1)
  007c6bc  mulhw 5, 5, 3
  007c6c0  srawi 5, 5, 6
  007c6c4  srwi 7, 5, 31
  007c6c8  addc 5, 5, 7
  007c6cc  cmpw 5, 6
  007c6d0  bf 1, 0x7c6f0
  007c6d4  lis 5, 6990
  007c6d8  ori 5, 5, 33205
  007c6dc  mulhw 3, 5, 3
  007c6e0  srawi 3, 3, 6
  007c6e4  srwi 5, 3, 31
  007c6e8  addc 3, 3, 5
  007c6ec  sth 3, 2(4)
  007c6f0  lis 3, 151
  007c6f4  lwz 8, 4(4)
  007c6f8  li 5, 1
  007c6fc  lis 7, 114
  007c700  lis 6, -32768
  007c704  lwz 3, -25488(3)
  007c708  slw 3, 5, 3
  007c70c  li 5, 6
  007c710  or 3, 8, 3
  007c714  li 8, 0
  007c718  or 3, 3, 6
  007c71c  stw 5, 2180(7)
  007c720  stw 8, 4(31)
  007c724  stw 3, 4(4)
  007c728  b 0x7c81c
  007c72c  lis 3, 114
  007c730  lbz 3, -1191(3)
  007c734  cmpwi 3, 0
  007c738  bt 2, 0x7c75c
  007c73c  cmpwi 4, 4
  007c740  bf 0, 0x7c75c
  007c744  lis 3, 150
  007c748  addic 3, 3, 19008
  007c74c  lwz 3, 164(3)
  007c750  rlwinm 3, 3, 0, 27, 27
  007c754  cmpwi 3, 0
  007c758  bt 2, 0x7c81c
  007c75c  lis 3, 114
  007c760  li 4, 7
  007c764  li 5, 0
  007c768  stw 4, 2180(3)
  007c76c  stw 5, 4(31)
  007c770  b 0x7c81c
  007c774  li 3, 5
  007c778  li 4, 0
  007c77c  bl 0x11afac
  007c780  nop
  007c784  lis 3, 162
  007c788  lwz 4, 32(31)
  007c78c  slwi 4, 4, 4
  007c790  lwz 3, -22528(3)
  007c794  addc 3, 3, 4
  007c798  lwz 4, 4(31)
  007c79c  clrldi 3, 3, 32
  007c7a0  lhz 5, 56(31)
  007c7a4  lwz 3, 8(3)
  007c7a8  cmpwi 3, -1
  007c7ac  bt 2, 0x7c7ec
  007c7b0  lis 6, 150
  007c7b4  ori 7, 3, 0
  007c7b8  addic 3, 6, 14024
  007c7bc  lhz 6, 96(3)
  007c7c0  extsh 6, 6
  007c7c4  addic 6, 6, -30000
  007c7c8  cmpw 7, 6
  007c7cc  bf 2, 0x7c7ec
  007c7d0  lhz 6, 102(3)
  007c7d4  cmpwi 1, 6, 7
  007c7d8  cmpwi 6, 6
  007c7dc  cror 2, 2, 6
  007c7e0  bt 2, 0x7c7ec
  007c7e4  li 6, 5
  007c7e8  sth 6, 102(3)
  007c7ec  cmpwi 4, 8
  007c7f0  bt 0, 0x7c81c
  007c7f4  cmpwi 5, 0
  007c7f8  li 3, 8
  007c7fc  bf 2, 0x7c80c
  007c800  li 4, -1
  007c804  li 3, 0
  007c808  stw 4, 32(31)
  007c80c  lis 4, 114
  007c810  li 5, 0
  007c814  stw 3, 2180(4)
  007c818  stw 5, 4(31)
  007c81c  ld 0, 240(1)
  007c820  mtlr 0
  007c824  ld 29, 200(1)
  007c828  ld 30, 208(1)
  007c82c  ld 31, 216(1)
  007c830  addi 1, 1, 224
  007c834  blr

Help_DrawIconBox:   # 0x7c838, 0x134 bytes
  007c838  stdu 1, -160(1)
  007c83c  mflr 0
  007c840  std 0, 176(1)
  007c844  std 30, 144(1)
  007c848  lis 30, 114
  007c84c  std 31, 152(1)
  007c850  li 3, 32
  007c854  addic 31, 30, 2180
  007c858  li 7, 96
  007c85c  lwz 4, 20(31)
  007c860  stw 3, 24(31)
  007c864  addic 5, 4, -32
  007c868  stw 3, 28(31)
  007c86c  addic 4, 4, 32
  007c870  lwz 6, 16(31)
  007c874  extsw 3, 5
  007c878  extsw 4, 4
  007c87c  addic 5, 6, -32
  007c880  addic 6, 6, 32
  007c884  extsw 5, 5
  007c888  std 29, 136(1)
  007c88c  extsw 6, 6
  007c890  bl 0x6a718
  007c894  nop
  007c898  lwz 4, 2180(30)
  007c89c  li 5, 126
  007c8a0  lwz 3, 4(31)
  007c8a4  cmpwi 4, 1
  007c8a8  bt 2, 0x7c8b4
  007c8ac  cmpwi 4, 7
  007c8b0  bf 2, 0x7c8c4
  007c8b4  addc 4, 3, 3
  007c8b8  addc 5, 3, 4
  007c8bc  sldi 3, 5, 3
  007c8c0  subc 5, 3, 5
  007c8c4  extsw 3, 5
  007c8c8  lwz 7, 16(31)
  007c8cc  li 6, 128
  007c8d0  lwz 8, 20(31)
  007c8d4  li 4, 128
  007c8d8  subc 3, 6, 3
  007c8dc  subc 4, 4, 5
  007c8e0  sradi 3, 3, 63
  007c8e4  lis 6, 128
  007c8e8  and 3, 3, 4
  007c8ec  addic 4, 7, -32
  007c8f0  addc 3, 5, 3
  007c8f4  extsw 31, 4
  007c8f8  slwi 7, 3, 24
  007c8fc  ori 4, 6, 32896
  007c900  addic 5, 8, -32
  007c904  addc 4, 7, 4
  007c908  li 3, 4
  007c90c  extsw 29, 4
  007c910  extsw 30, 5
  007c914  bl 0x685c4
  007c918  nop
  007c91c  ori 11, 3, 0
  007c920  std 29, 112(1)
  007c924  li 8, 0
  007c928  ori 3, 31, 0
  007c92c  li 9, 64
  007c930  ori 4, 30, 0
  007c934  li 10, 64
  007c938  std 11, 120(1)
  007c93c  li 5, 64
  007c940  li 6, 64
  007c944  li 7, 0
  007c948  bl 0x6a5c4
  007c94c  nop
  007c950  ld 0, 176(1)
  007c954  mtlr 0
  007c958  ld 29, 136(1)
  007c95c  ld 30, 144(1)
  007c960  ld 31, 152(1)
  007c964  addi 1, 1, 160
  007c968  blr

Help_Draw:   # 0x7c978, 0x52c bytes
  007c978  stdu 1, -176(1)
  007c97c  mflr 0
  007c980  std 0, 192(1)
  007c984  lis 4, 114
  007c988  lwz 4, 2180(4)
  007c98c  cmpwi 6, 4, 0
  007c990  cmpwi 1, 4, 2
  007c994  std 31, 168(1)
  007c998  std 30, 160(1)
  007c99c  std 29, 152(1)
  007c9a0  cmpwi 7, 4, 1
  007c9a4  bt 26, 0x7ce88
  007c9a8  lis 31, 114
  007c9ac  addic 31, 31, 2180
  007c9b0  lwz 3, 48(31)
  007c9b4  cmpwi 3, 0
  007c9b8  bt 2, 0x7ce88
  007c9bc  lis 3, 114
  007c9c0  lbz 3, -1191(3)
  007c9c4  cmpwi 3, 0
  007c9c8  bf 2, 0x7c9dc
  007c9cc  lis 5, 114
  007c9d0  lbz 5, -1192(5)
  007c9d4  cmpwi 5, 0
  007c9d8  bt 2, 0x7ce88
  007c9dc  bt 5, 0x7c9ec
  007c9e0  bf 25, 0x7ce88
  007c9e4  bf 29, 0x7ca0c
  007c9e8  b 0x7ca60
  007c9ec  cmpwi 4, 6
  007c9f0  bt 1, 0x7ca00
  007c9f4  cmpwi 4, 3
  007c9f8  bf 1, 0x7cb68
  007c9fc  b 0x7cc84
  007ca00  cmpwi 4, 7
  007ca04  bf 1, 0x7ce00
  007ca08  b 0x7ce88
  007ca0c  cmpwi 3, 0
  007ca10  bt 2, 0x7ce88
  007ca14  lwz 3, 4(31)
  007ca18  li 7, 96
  007ca1c  lwz 4, 20(31)
  007ca20  slwi 3, 3, 2
  007ca24  lwz 5, 16(31)
  007ca28  addic 6, 3, 8
  007ca2c  subc 3, 4, 6
  007ca30  addc 8, 5, 6
  007ca34  stw 6, 24(31)
  007ca38  addc 4, 4, 6
  007ca3c  subc 5, 5, 6
  007ca40  stw 6, 28(31)
  007ca44  extsw 3, 3
  007ca48  extsw 6, 8
  007ca4c  extsw 4, 4
  007ca50  extsw 5, 5
  007ca54  bl 0x6a718
  007ca58  nop
  007ca5c  b 0x7ce88
  007ca60  cmpwi 3, 0
  007ca64  bt 2, 0x7ce88
  007ca68  li 3, 32
  007ca6c  lwz 4, 20(31)
  007ca70  li 7, 96
  007ca74  addic 5, 4, -32
  007ca78  stw 3, 24(31)
  007ca7c  stw 3, 28(31)
  007ca80  addic 4, 4, 32
  007ca84  lwz 6, 16(31)
  007ca88  extsw 3, 5
  007ca8c  extsw 4, 4
  007ca90  addic 5, 6, -32
  007ca94  addic 6, 6, 32
  007ca98  extsw 5, 5
  007ca9c  extsw 6, 6
  007caa0  bl 0x6a718
  007caa4  nop
  007caa8  lis 4, 114
  007caac  lwz 3, 4(31)
  007cab0  li 5, 126
  007cab4  lwz 4, 2180(4)
  007cab8  cmpwi 4, 1
  007cabc  bt 2, 0x7cac8
  007cac0  cmpwi 4, 7
  007cac4  bf 2, 0x7cad8
  007cac8  addc 4, 3, 3
  007cacc  addc 5, 3, 4
  007cad0  sldi 3, 5, 3
  007cad4  subc 5, 3, 5
  007cad8  extsw 3, 5
  007cadc  li 4, 128
  007cae0  li 6, 128
  007cae4  subc 3, 4, 3
  007cae8  subc 4, 6, 5
  007caec  sradi 3, 3, 63
  007caf0  lis 6, 128
  007caf4  and 3, 3, 4
  007caf8  lwz 4, 16(31)
  007cafc  lwz 7, 20(31)
  007cb00  addc 3, 5, 3
  007cb04  addic 4, 4, -32
  007cb08  addic 5, 7, -32
  007cb0c  extsw 31, 4
  007cb10  slwi 7, 3, 24
  007cb14  ori 4, 6, 32896
  007cb18  li 3, 4
  007cb1c  addc 4, 7, 4
  007cb20  extsw 30, 5
  007cb24  extsw 29, 4
  007cb28  bl 0x685c4
  007cb2c  nop
  007cb30  ori 8, 3, 0
  007cb34  std 29, 112(1)
  007cb38  ori 3, 31, 0
  007cb3c  li 9, 64
  007cb40  ori 4, 30, 0
  007cb44  std 8, 120(1)
  007cb48  li 10, 64
  007cb4c  li 5, 64
  007cb50  li 6, 64
  007cb54  li 7, 0
  007cb58  li 8, 0
  007cb5c  bl 0x6a5c4
  007cb60  nop
  007cb64  b 0x7ce88
  007cb68  cmpwi 3, 0
  007cb6c  bt 2, 0x7ce88
  007cb70  lwz 3, 8(31)
  007cb74  lwz 4, 4(31)
  007cb78  mullw 3, 3, 4
  007cb7c  lwz 5, 12(31)
  007cb80  sldi 6, 4, 5
  007cb84  mullw 4, 5, 4
  007cb88  subfic 5, 6, 0
  007cb8c  addc 3, 3, 5
  007cb90  addc 4, 4, 5
  007cb94  srawi 3, 3, 3
  007cb98  lwz 5, 20(31)
  007cb9c  lwz 6, 16(31)
  007cba0  addze 3, 3
  007cba4  srawi 4, 4, 3
  007cba8  addze 4, 4
  007cbac  addic 3, 3, 32
  007cbb0  addic 4, 4, 32
  007cbb4  subc 7, 6, 3
  007cbb8  addc 6, 6, 3
  007cbbc  stw 3, 24(31)
  007cbc0  subc 3, 5, 4
  007cbc4  stw 4, 28(31)
  007cbc8  extsw 6, 6
  007cbcc  addc 4, 5, 4
  007cbd0  extsw 3, 3
  007cbd4  extsw 5, 7
  007cbd8  extsw 4, 4
  007cbdc  li 7, 96
  007cbe0  bl 0x6a718
  007cbe4  nop
  007cbe8  lwz 3, 4(31)
  007cbec  li 4, 0
  007cbf0  lwz 7, 16(31)
  007cbf4  subfic 3, 3, 8
  007cbf8  lwz 8, 20(31)
  007cbfc  li 5, 0
  007cc00  sldi 3, 3, 4
  007cc04  extsw 6, 3
  007cc08  subc 5, 5, 3
  007cc0c  subc 4, 6, 4
  007cc10  lis 6, 128
  007cc14  sradi 4, 4, 63
  007cc18  and 4, 4, 5
  007cc1c  addic 5, 7, -32
  007cc20  addc 3, 3, 4
  007cc24  ori 4, 6, 32896
  007cc28  slwi 6, 3, 24
  007cc2c  addic 7, 8, -32
  007cc30  addc 4, 6, 4
  007cc34  li 3, 4
  007cc38  extsw 29, 4
  007cc3c  extsw 31, 5
  007cc40  extsw 30, 7
  007cc44  bl 0x685c4
  007cc48  nop
  007cc4c  ori 11, 3, 0
  007cc50  std 29, 112(1)
  007cc54  li 8, 0
  007cc58  ori 3, 31, 0
  007cc5c  li 9, 64
  007cc60  ori 4, 30, 0
  007cc64  li 10, 64
  007cc68  std 11, 120(1)
  007cc6c  li 5, 64
  007cc70  li 6, 64
  007cc74  li 7, 0
  007cc78  bl 0x6a5c4
  007cc7c  nop
  007cc80  b 0x7ce88
  007cc84  cmpwi 3, 0
  007cc88  bt 2, 0x7ce88
  007cc8c  lis 30, 151
  007cc90  li 5, 2
  007cc94  li 3, 477
  007cc98  li 6, 472
  007cc9c  li 8, 2
  007cca0  lwz 4, -25484(30)
  007cca4  subc 3, 3, 6
  007cca8  lwz 7, 8(31)
  007ccac  subc 5, 5, 4
  007ccb0  lwz 9, 12(31)
  007ccb4  subc 4, 8, 4
  007ccb8  stw 7, 24(31)
  007ccbc  cntlzw 5, 5
  007ccc0  stw 9, 28(31)
  007ccc4  cntlzw 4, 4
  007ccc8  sldi 5, 5, 58
  007cccc  sldi 4, 4, 58
  007ccd0  sradi 5, 5, 63
  007ccd4  sradi 4, 4, 63
  007ccd8  and 3, 5, 3
  007ccdc  li 5, 40
  007cce0  addc 6, 6, 3
  007cce4  li 3, 30
  007cce8  li 7, 96
  007ccec  subc 8, 3, 5
  007ccf0  li 3, 300
  007ccf4  and 8, 4, 8
  007ccf8  li 4, 380
  007ccfc  addc 5, 5, 8
  007cd00  bl 0x6a718
  007cd04  nop
  007cd08  lis 5, 114
  007cd0c  lwz 4, 32(31)
  007cd10  lis 6, -32513
  007cd14  lwz 3, -25484(30)
  007cd18  ori 30, 6, 43144
  007cd1c  lwz 5, 2180(5)
  007cd20  cmpwi 5, 4
  007cd24  bf 2, 0x7cd40
  007cd28  lis 5, 255
  007cd2c  lwz 6, 4(31)
  007cd30  ori 5, 5, 43144
  007cd34  rlwimi 5, 6, 29, 0, 2
  007cd38  extsw 30, 5
  007cd3c  b 0x7cd60
  007cd40  cmpwi 5, 6
  007cd44  bf 2, 0x7cd60
  007cd48  lis 5, 255
  007cd4c  lwz 6, 4(31)
  007cd50  ori 5, 5, 43144
  007cd54  subfic 6, 6, 4
  007cd58  rlwimi 5, 6, 29, 0, 2
  007cd5c  extsw 30, 5
  007cd60  lis 5, 162
  007cd64  slwi 4, 4, 4
  007cd68  cmpwi 3, 1
  007cd6c  extsw 31, 4
  007cd70  li 4, 0
  007cd74  lwz 5, -22528(5)
  007cd78  lwzx 31, 5, 31
  007cd7c  bf 1, 0x7cd8c
  007cd80  cmpwi 3, 5
  007cd84  bt 1, 0x7cd8c
  007cd88  li 4, 10
  007cd8c  li 8, 3
  007cd90  addic 3, 1, 128
  007cd94  addic 6, 4, 40
  007cd98  li 5, 380
  007cd9c  std 8, 112(1)
  007cda0  li 7, 472
  007cda4  li 10, 18
  007cda8  li 4, 300
  007cdac  li 8, 250
  007cdb0  li 9, 340
  007cdb4  bl 0x6ac90
  007cdb8  nop
  007cdbc  lis 3, 151
  007cdc0  lis 4, 8
  007cdc4  addi 4, 4, -13972
  007cdc8  lwz 3, -25484(3)
  007cdcc  cmpwi 3, 3
  007cdd0  lfs 1, 0(4)
  007cdd4  bf 2, 0x7cde4
  007cdd8  lis 3, 8
  007cddc  addi 3, 3, -13972
  007cde0  lfs 1, 4(3)
  007cde4  addic 3, 1, 128
  007cde8  ori 4, 30, 0
  007cdec  ori 5, 31, 0
  007cdf0  li 6, -1
  007cdf4  bl 0x7100c
  007cdf8  nop
  007cdfc  b 0x7ce88
  007ce00  cmpwi 3, 0
  007ce04  bt 2, 0x7ce88
  007ce08  lwz 3, 24(31)
  007ce0c  lwz 4, 4(31)
  007ce10  mullw 5, 3, 4
  007ce14  lwz 6, 28(31)
  007ce18  sldi 7, 4, 3
  007ce1c  mullw 8, 6, 4
  007ce20  subfic 7, 7, 0
  007ce24  subfic 4, 4, 8
  007ce28  lwz 9, 20(31)
  007ce2c  addc 5, 5, 7
  007ce30  addc 7, 8, 7
  007ce34  srawi 5, 5, 3
  007ce38  addze 5, 5
  007ce3c  srawi 7, 7, 3
  007ce40  addze 7, 7
  007ce44  addc 8, 4, 4
  007ce48  subc 6, 6, 7
  007ce4c  subc 5, 3, 5
  007ce50  subc 3, 9, 6
  007ce54  addc 4, 4, 8
  007ce58  addc 6, 9, 6
  007ce5c  lwz 8, 16(31)
  007ce60  sldi 7, 4, 2
  007ce64  extsw 4, 6
  007ce68  subc 9, 8, 5
  007ce6c  addc 6, 8, 5
  007ce70  extsw 3, 3
  007ce74  extsw 7, 7
  007ce78  extsw 5, 9
  007ce7c  extsw 6, 6
  007ce80  bl 0x6a718
  007ce84  nop
  007ce88  ld 0, 192(1)
  007ce8c  mtlr 0
  007ce90  ld 29, 152(1)
  007ce94  ld 30, 160(1)
  007ce98  ld 31, 168(1)
  007ce9c  addi 1, 1, 176
  007cea0  blr

Help_GetPairedId:   # 0x7cea4, 0x68 bytes
  007cea4  lis 5, 114
  007cea8  sldi 8, 4, 1
  007ceac  addic 5, 5, 2252
  007ceb0  extsh 7, 3
  007ceb4  addc 3, 8, 5
  007ceb8  li 6, 0
  007cebc  clrldi 3, 3, 32
  007cec0  lhz 8, 0(3)
  007cec4  extsh 8, 8
  007cec8  cmpw 8, 7
  007cecc  bf 2, 0x7cef4
  007ced0  cntlzw 3, 4
  007ced4  slwi 4, 6, 2
  007ced8  rlwinm 3, 3, 28, 30, 30
  007cedc  extsw 4, 4
  007cee0  addc 3, 3, 5
  007cee4  clrldi 3, 3, 32
  007cee8  lhzx 3, 3, 4
  007ceec  extsh 3, 3
  007cef0  b 0x7cf08
  007cef4  addic 6, 6, 1
  007cef8  addic 3, 3, 4
  007cefc  cmpwi 6, 150
  007cf00  bt 0, 0x7cec0
  007cf04  li 3, -1
  007cf08  blr
