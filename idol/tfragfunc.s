# idol/tfragfunc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

DrawTfrag:   # 0x50b0bc, 0xe7c bytes
  050b0bc  stdu 1, -320(1)
  050b0c0  mflr 0
  050b0c4  std 0, 336(1)
  050b0c8  std 28, 288(1)
  050b0cc  std 15, 184(1)
  050b0d0  lis 6, 346
  050b0d4  ori 28, 3, 0
  050b0d8  std 24, 256(1)
  050b0dc  ori 15, 4, 0
  050b0e0  ori 24, 5, 0
  050b0e4  lbz 3, -15515(6)
  050b0e8  std 31, 312(1)
  050b0ec  std 30, 304(1)
  050b0f0  std 29, 296(1)
  050b0f4  std 27, 280(1)
  050b0f8  std 26, 272(1)
  050b0fc  std 25, 264(1)
  050b100  std 23, 248(1)
  050b104  std 22, 240(1)
  050b108  std 21, 232(1)
  050b10c  std 20, 224(1)
  050b110  std 19, 216(1)
  050b114  std 18, 208(1)
  050b118  std 17, 200(1)
  050b11c  std 16, 192(1)
  050b120  cmpwi 3, 0
  050b124  bf 2, 0x50bee4
  050b128  lis 20, 144
  050b12c  lis 25, 144
  050b130  lis 3, 102
  050b134  addic 31, 3, -1164
  050b138  lwz 3, -23532(20)
  050b13c  ori 4, 31, 0
  050b140  lwz 25, -23196(25)
  050b144  bl 0x50eaf8
  050b148  nop
  050b14c  addic 18, 20, -23532
  050b150  ori 4, 31, 0
  050b154  lwz 3, 8(18)
  050b158  bl 0x50eaf8
  050b15c  nop
  050b160  addic 3, 25, 160
  050b164  addic 4, 25, 208
  050b168  addic 5, 25, 192
  050b16c  addic 6, 25, 176
  050b170  li 7, 160
  050b174  lvx 2, 0, 3
  050b178  lvx 3, 0, 4
  050b17c  li 3, 112
  050b180  lvx 4, 0, 5
  050b184  lis 8, 68
  050b188  lvx 5, 0, 6
  050b18c  li 5, 128
  050b190  vmrghw 6, 2, 4
  050b194  li 6, 144
  050b198  vmrghw 7, 5, 3
  050b19c  ori 8, 8, 7932
  050b1a0  vmrglw 2, 2, 4
  050b1a4  vmrglw 3, 5, 3
  050b1a8  lwz 4, -23532(20)
  050b1ac  li 27, 0
  050b1b0  vmrghw 4, 6, 7
  050b1b4  vmrglw 5, 6, 7
  050b1b8  vmrghw 6, 2, 3
  050b1bc  vmrglw 2, 2, 3
  050b1c0  stvx 4, 3, 1
  050b1c4  stvx 5, 5, 1
  050b1c8  stvx 6, 6, 1
  050b1cc  li 5, 12
  050b1d0  stvx 2, 7, 1
  050b1d4  addic 3, 1, 112
  050b1d8  lwz 6, 8(4)
  050b1dc  li 7, 8
  050b1e0  mtctr 7
  050b1e4  stw 8, 0(6)
  050b1e8  lwz 6, 8(4)
  050b1ec  stw 5, 4(6)
  050b1f0  lwz 5, 8(4)
  050b1f4  addic 5, 5, 8
  050b1f8  stw 5, 8(4)
  050b1fc  lwz 6, 0(3)
  050b200  stw 6, 0(5)
  050b204  lwz 5, 8(4)
  050b208  addic 6, 5, 4
  050b20c  stw 6, 8(4)
  050b210  lwz 6, 4(3)
  050b214  addic 3, 3, 8
  050b218  stw 6, 4(5)
  050b21c  lwz 5, 8(4)
  050b220  addic 5, 5, 4
  050b224  stw 5, 8(4)
  050b228  bdnz 0x50b1fc
  050b22c  lwz 3, 0(24)
  050b230  cmpwi 3, 0
  050b234  bt 2, 0x50b250
  050b238  lis 3, 273
  050b23c  lwz 4, -23532(20)
  050b240  li 5, 0
  050b244  addic 3, 3, 5888
  050b248  bl 0x4eda68
  050b24c  nop
  050b250  lwz 4, 8(18)
  050b254  lis 3, 4
  050b258  lis 26, -32768
  050b25c  ori 3, 3, 6732
  050b260  lis 6, 4
  050b264  lwz 5, 8(4)
  050b268  lis 7, 4
  050b26c  stw 3, 0(5)
  050b270  lwz 3, 8(4)
  050b274  ori 5, 6, 6728
  050b278  lis 6, 16387
  050b27c  stw 26, 4(3)
  050b280  lwz 3, 8(4)
  050b284  addic 3, 3, 8
  050b288  stw 3, 8(4)
  050b28c  lwz 3, 8(18)
  050b290  ori 4, 6, 1028
  050b294  lwz 6, 8(3)
  050b298  stw 5, 0(6)
  050b29c  lwz 5, 8(3)
  050b2a0  ori 6, 7, 6740
  050b2a4  stw 4, 4(5)
  050b2a8  lwz 4, 8(3)
  050b2ac  lis 5, 257
  050b2b0  addic 4, 4, 8
  050b2b4  stw 4, 8(3)
  050b2b8  lwz 3, 8(18)
  050b2bc  ori 4, 5, 8192
  050b2c0  lwz 5, 8(3)
  050b2c4  stw 6, 0(5)
  050b2c8  lwz 5, 8(3)
  050b2cc  lis 6, 8
  050b2d0  ori 6, 6, 6720
  050b2d4  stw 4, 4(5)
  050b2d8  lwz 4, 8(3)
  050b2dc  addic 4, 4, 8
  050b2e0  stw 4, 8(3)
  050b2e4  lwz 3, 8(18)
  050b2e8  lbz 4, 8634(25)
  050b2ec  lwz 5, 8640(25)
  050b2f0  addic 4, 4, 1
  050b2f4  lbz 7, 8621(25)
  050b2f8  lbz 8, 8620(25)
  050b2fc  ori 4, 4, 8
  050b300  lbz 9, 8623(25)
  050b304  slwi 8, 8, 8
  050b308  rlwimi 4, 7, 16, 8, 15
  050b30c  lbz 7, 8622(25)
  050b310  lhz 10, 8630(25)
  050b314  slwi 9, 9, 2
  050b318  lhz 11, 8628(25)
  050b31c  or 4, 4, 8
  050b320  slwi 7, 7, 4
  050b324  lwz 8, 8624(25)
  050b328  lwz 12, 8636(25)
  050b32c  or 7, 9, 7
  050b330  lwz 9, 8(3)
  050b334  rlwimi 10, 11, 16, 0, 15
  050b338  lhz 31, 8632(25)
  050b33c  or 4, 4, 7
  050b340  stw 6, 0(9)
  050b344  lwz 6, 8(3)
  050b348  stw 5, 4(6)
  050b34c  lwz 5, 8(3)
  050b350  lis 6, 4
  050b354  stw 4, 8(5)
  050b358  lwz 4, 8(3)
  050b35c  addic 5, 4, 12
  050b360  stw 5, 8(3)
  050b364  ori 5, 6, 6744
  050b368  lis 6, 4
  050b36c  stw 5, 12(4)
  050b370  lwz 7, 8(3)
  050b374  lis 5, 4
  050b378  slwi 4, 31, 20
  050b37c  ori 5, 5, 6216
  050b380  or 4, 12, 4
  050b384  stw 10, 4(7)
  050b388  lwz 7, 8(3)
  050b38c  addic 9, 7, 8
  050b390  stw 9, 8(3)
  050b394  stw 5, 8(7)
  050b398  lwz 9, 8(3)
  050b39c  ori 5, 6, 6736
  050b3a0  lis 6, 4
  050b3a4  lis 7, 8
  050b3a8  ori 6, 6, 6748
  050b3ac  stw 4, 4(9)
  050b3b0  lwz 4, 8(3)
  050b3b4  addic 9, 4, 8
  050b3b8  stw 9, 8(3)
  050b3bc  stw 5, 8(4)
  050b3c0  lwz 10, 8(3)
  050b3c4  ori 4, 7, 776
  050b3c8  li 5, 518
  050b3cc  li 7, 255
  050b3d0  stw 8, 4(10)
  050b3d4  lwz 8, 8(3)
  050b3d8  addic 8, 8, 8
  050b3dc  lis 9, 4
  050b3e0  stw 8, 8(3)
  050b3e4  lwz 3, 8(18)
  050b3e8  lwz 8, 8(3)
  050b3ec  stw 6, 0(8)
  050b3f0  lwz 6, 8(3)
  050b3f4  ori 8, 9, 772
  050b3f8  stw 27, 4(6)
  050b3fc  lwz 6, 8(3)
  050b400  addic 6, 6, 8
  050b404  stw 6, 8(3)
  050b408  lwz 3, -23532(20)
  050b40c  lwz 6, 8(3)
  050b410  stw 4, 0(6)
  050b414  lwz 6, 8(3)
  050b418  stw 5, 4(6)
  050b41c  lwz 6, 8(3)
  050b420  stw 7, 8(6)
  050b424  lwz 6, 8(3)
  050b428  li 7, 1
  050b42c  addic 6, 6, 12
  050b430  stw 6, 8(3)
  050b434  lwz 3, -23532(20)
  050b438  lwz 6, 8(3)
  050b43c  stw 8, 0(6)
  050b440  lwz 6, 8(3)
  050b444  stw 7, 4(6)
  050b448  lwz 6, 8(3)
  050b44c  addic 6, 6, 8
  050b450  stw 6, 8(3)
  050b454  lwz 3, 8(18)
  050b458  lwz 6, 8(3)
  050b45c  stw 4, 0(6)
  050b460  lwz 4, 8(3)
  050b464  li 6, 20
  050b468  stw 5, 4(4)
  050b46c  lwz 4, 8(3)
  050b470  lis 5, 20
  050b474  ori 5, 5, 7932
  050b478  stw 7, 8(4)
  050b47c  lwz 4, 8(3)
  050b480  addic 4, 4, 12
  050b484  stw 4, 8(3)
  050b488  lwz 4, 8(18)
  050b48c  lwz 3, 8(4)
  050b490  stw 8, 0(3)
  050b494  lwz 3, 8(4)
  050b498  stw 7, 4(3)
  050b49c  lwz 3, 8(4)
  050b4a0  addic 7, 3, 8
  050b4a4  ori 3, 15, 0
  050b4a8  li 15, 2
  050b4ac  stw 7, 8(4)
  050b4b0  lwz 4, 8(18)
  050b4b4  mtctr 15
  050b4b8  lwz 7, 8(4)
  050b4bc  stw 5, 0(7)
  050b4c0  lwz 5, 8(4)
  050b4c4  stw 6, 4(5)
  050b4c8  lwz 5, 8(4)
  050b4cc  addic 5, 5, 8
  050b4d0  stw 5, 8(4)
  050b4d4  lwz 6, 0(3)
  050b4d8  stw 6, 0(5)
  050b4dc  lwz 5, 8(4)
  050b4e0  addic 6, 5, 4
  050b4e4  stw 6, 8(4)
  050b4e8  lwz 6, 4(3)
  050b4ec  addic 3, 3, 8
  050b4f0  stw 6, 4(5)
  050b4f4  lwz 5, 8(4)
  050b4f8  addic 5, 5, 4
  050b4fc  stw 5, 8(4)
  050b500  bdnz 0x50b4d4
  050b504  ori 3, 25, 0
  050b508  lwz 4, 8(18)
  050b50c  li 5, 4
  050b510  bl 0x4d83ec
  050b514  nop
  050b518  lwz 4, 8(18)
  050b51c  ori 3, 25, 0
  050b520  li 5, 6
  050b524  bl 0x4d82b8
  050b528  nop
  050b52c  lwz 3, 8(18)
  050b530  lwz 25, 8(24)
  050b534  lis 4, 4
  050b538  lwz 24, 12(24)
  050b53c  li 6, 7218
  050b540  ori 4, 4, 5952
  050b544  lis 7, 4
  050b548  lwz 5, 8(3)
  050b54c  lis 9, 4
  050b550  ori 7, 7, 5956
  050b554  ori 9, 9, 5964
  050b558  stw 4, 0(5)
  050b55c  lwz 5, 8(3)
  050b560  stw 6, 4(5)
  050b564  lwz 5, 8(3)
  050b568  addic 5, 5, 8
  050b56c  stw 5, 8(3)
  050b570  lwz 3, 8(18)
  050b574  li 5, 2082
  050b578  lis 19, 4
  050b57c  lwz 8, 8(3)
  050b580  ori 19, 19, 2672
  050b584  stw 7, 0(8)
  050b588  lwz 8, 8(3)
  050b58c  cmpwi 25, 0
  050b590  stw 5, 4(8)
  050b594  lwz 8, 8(3)
  050b598  addic 8, 8, 8
  050b59c  stw 8, 8(3)
  050b5a0  lwz 3, 8(18)
  050b5a4  li 8, 1092
  050b5a8  li 23, -1
  050b5ac  lwz 10, 8(3)
  050b5b0  stw 9, 0(10)
  050b5b4  lwz 10, 8(3)
  050b5b8  stw 8, 4(10)
  050b5bc  lwz 10, 8(3)
  050b5c0  addic 10, 10, 8
  050b5c4  stw 10, 8(3)
  050b5c8  lwz 3, -23532(20)
  050b5cc  lwz 10, 8(3)
  050b5d0  stw 4, 0(10)
  050b5d4  lwz 4, 8(3)
  050b5d8  stw 6, 4(4)
  050b5dc  lwz 4, 8(3)
  050b5e0  addic 4, 4, 8
  050b5e4  stw 4, 8(3)
  050b5e8  lwz 6, -23532(20)
  050b5ec  ori 3, 27, 0
  050b5f0  ori 4, 3, 0
  050b5f4  lwz 10, 8(6)
  050b5f8  ori 16, 4, 0
  050b5fc  ori 17, 16, 0
  050b600  stw 7, 0(10)
  050b604  lwz 7, 8(6)
  050b608  ori 22, 17, 0
  050b60c  ori 21, 22, 0
  050b610  stw 5, 4(7)
  050b614  lwz 5, 8(6)
  050b618  addic 5, 5, 8
  050b61c  stw 5, 8(6)
  050b620  lwz 5, -23532(20)
  050b624  lwz 6, 8(5)
  050b628  stw 9, 0(6)
  050b62c  lwz 6, 8(5)
  050b630  stw 8, 4(6)
  050b634  lwz 6, 8(5)
  050b638  addic 6, 6, 8
  050b63c  stw 6, 8(5)
  050b640  lwz 5, 8(18)
  050b644  lwz 6, 8(5)
  050b648  stw 19, 0(6)
  050b64c  lwz 6, 8(5)
  050b650  stw 22, 4(6)
  050b654  lwz 6, 8(5)
  050b658  addic 6, 6, 8
  050b65c  stw 6, 8(5)
  050b660  bt 2, 0x50bdac
  050b664  lbz 5, 4(24)
  050b668  cmpwi 6, 17, 0
  050b66c  cmpw 5, 23
  050b670  bt 2, 0x50b8f4
  050b674  cmpwi 1, 22, 0
  050b678  bt 26, 0x50b6d8
  050b67c  lwz 6, 8(18)
  050b680  lis 5, 4
  050b684  ori 5, 5, 6152
  050b688  lwz 7, 8(6)
  050b68c  stw 5, 0(7)
  050b690  lwz 5, 8(6)
  050b694  stw 27, 4(5)
  050b698  lwz 5, 8(6)
  050b69c  addic 5, 5, 8
  050b6a0  stw 5, 8(6)
  050b6a4  bf 6, 0x50b6d0
  050b6a8  lwz 6, -23532(20)
  050b6ac  lis 5, 4
  050b6b0  ori 5, 5, 6152
  050b6b4  lwz 7, 8(6)
  050b6b8  stw 5, 0(7)
  050b6bc  lwz 5, 8(6)
  050b6c0  stw 27, 4(5)
  050b6c4  lwz 5, 8(6)
  050b6c8  addic 5, 5, 8
  050b6cc  stw 5, 8(6)
  050b6d0  ori 16, 27, 0
  050b6d4  ori 17, 16, 0
  050b6d8  lis 5, 4
  050b6dc  lbz 23, 4(24)
  050b6e0  addic 6, 28, 8
  050b6e4  lwz 7, 8(18)
  050b6e8  ori 8, 5, 5760
  050b6ec  slwi 5, 23, 2
  050b6f0  addic 10, 28, 40
  050b6f4  addc 6, 5, 6
  050b6f8  lwz 9, 8(7)
  050b6fc  addc 10, 5, 10
  050b700  clrldi 6, 6, 32
  050b704  clrldi 10, 10, 32
  050b708  lis 11, 4
  050b70c  addic 31, 28, 56
  050b710  ori 11, 11, 5764
  050b714  lwz 12, 0(6)
  050b718  stw 8, 0(9)
  050b71c  lwz 9, 8(7)
  050b720  or 12, 12, 26
  050b724  addc 31, 5, 31
  050b728  stw 12, 4(9)
  050b72c  lwz 9, 8(7)
  050b730  addic 9, 9, 8
  050b734  stw 9, 8(7)
  050b738  lwz 7, 8(18)
  050b73c  lwz 9, 0(10)
  050b740  or 9, 9, 26
  050b744  lwz 12, 8(7)
  050b748  stw 11, 0(12)
  050b74c  lwz 12, 8(7)
  050b750  stw 9, 4(12)
  050b754  lwz 9, 8(7)
  050b758  clrldi 12, 31, 32
  050b75c  addic 9, 9, 8
  050b760  lis 31, 8
  050b764  stw 9, 8(7)
  050b768  lwz 9, 8(18)
  050b76c  ori 7, 31, 6172
  050b770  lwz 30, 0(12)
  050b774  li 31, 17
  050b778  lwz 29, 8(9)
  050b77c  stw 7, 0(29)
  050b780  lwz 29, 8(9)
  050b784  stw 30, 4(29)
  050b788  lwz 30, 8(9)
  050b78c  stw 31, 8(30)
  050b790  lwz 30, 8(9)
  050b794  addic 30, 30, 12
  050b798  stw 30, 8(9)
  050b79c  lwz 9, -23532(20)
  050b7a0  lwz 6, 0(6)
  050b7a4  or 6, 6, 26
  050b7a8  lwz 30, 8(9)
  050b7ac  stw 8, 0(30)
  050b7b0  lwz 8, 8(9)
  050b7b4  stw 6, 4(8)
  050b7b8  lwz 6, 8(9)
  050b7bc  addic 6, 6, 8
  050b7c0  stw 6, 8(9)
  050b7c4  lwz 6, -23532(20)
  050b7c8  lwz 8, 0(10)
  050b7cc  or 8, 8, 26
  050b7d0  lwz 9, 8(6)
  050b7d4  lis 10, 346
  050b7d8  stw 11, 0(9)
  050b7dc  lwz 9, 8(6)
  050b7e0  stw 8, 4(9)
  050b7e4  lwz 8, 8(6)
  050b7e8  addic 8, 8, 8
  050b7ec  stw 8, 8(6)
  050b7f0  lwz 6, -23532(20)
  050b7f4  lwz 8, 0(12)
  050b7f8  lwz 9, 8(6)
  050b7fc  stw 7, 0(9)
  050b800  lwz 7, 8(6)
  050b804  stw 8, 4(7)
  050b808  lwz 7, 8(6)
  050b80c  stw 31, 8(7)
  050b810  lwz 7, 8(6)
  050b814  addic 7, 7, 12
  050b818  stw 7, 8(6)
  050b81c  lbz 6, -15514(10)
  050b820  cmpwi 6, 0
  050b824  bt 2, 0x50b890
  050b828  addic 6, 28, 24
  050b82c  lis 7, 4
  050b830  addc 5, 5, 6
  050b834  ori 6, 7, 5772
  050b838  lwz 7, -23532(20)
  050b83c  clrldi 5, 5, 32
  050b840  lwz 8, 8(7)
  050b844  lwz 9, 0(5)
  050b848  or 9, 9, 26
  050b84c  stw 6, 0(8)
  050b850  lwz 8, 8(7)
  050b854  stw 9, 4(8)
  050b858  lwz 8, 8(7)
  050b85c  addic 8, 8, 8
  050b860  stw 8, 8(7)
  050b864  lwz 7, 8(18)
  050b868  lwz 5, 0(5)
  050b86c  or 5, 5, 26
  050b870  lwz 8, 8(7)
  050b874  stw 6, 0(8)
  050b878  lwz 6, 8(7)
  050b87c  stw 5, 4(6)
  050b880  lwz 5, 8(7)
  050b884  addic 5, 5, 8
  050b888  stw 5, 8(7)
  050b88c  b 0x50b8f4
  050b890  addic 6, 28, 72
  050b894  lis 7, 4
  050b898  addc 5, 5, 6
  050b89c  ori 6, 7, 5772
  050b8a0  lwz 7, -23532(20)
  050b8a4  clrldi 5, 5, 32
  050b8a8  lwz 8, 8(7)
  050b8ac  lwz 9, 0(5)
  050b8b0  or 9, 9, 26
  050b8b4  stw 6, 0(8)
  050b8b8  lwz 8, 8(7)
  050b8bc  stw 9, 4(8)
  050b8c0  lwz 8, 8(7)
  050b8c4  addic 8, 8, 8
  050b8c8  stw 8, 8(7)
  050b8cc  lwz 7, 8(18)
  050b8d0  lwz 5, 0(5)
  050b8d4  or 5, 5, 26
  050b8d8  lwz 8, 8(7)
  050b8dc  stw 6, 0(8)
  050b8e0  lwz 6, 8(7)
  050b8e4  stw 5, 4(6)
  050b8e8  lwz 5, 8(7)
  050b8ec  addic 5, 5, 8
  050b8f0  stw 5, 8(7)
  050b8f4  lwz 5, 0(24)
  050b8f8  cmpw 5, 3
  050b8fc  bf 2, 0x50b90c
  050b900  lbz 5, 5(24)
  050b904  cmpw 5, 4
  050b908  bt 2, 0x50ba34
  050b90c  cmpwi 17, 0
  050b910  cmpwi 1, 22, 0
  050b914  bt 2, 0x50b974
  050b918  lwz 4, 8(18)
  050b91c  lis 3, 4
  050b920  ori 3, 3, 6152
  050b924  lwz 5, 8(4)
  050b928  stw 3, 0(5)
  050b92c  lwz 3, 8(4)
  050b930  stw 27, 4(3)
  050b934  lwz 3, 8(4)
  050b938  addic 3, 3, 8
  050b93c  stw 3, 8(4)
  050b940  bf 6, 0x50b96c
  050b944  lwz 4, -23532(20)
  050b948  lis 3, 4
  050b94c  ori 3, 3, 6152
  050b950  lwz 5, 8(4)
  050b954  stw 3, 0(5)
  050b958  lwz 3, 8(4)
  050b95c  stw 27, 4(3)
  050b960  lwz 3, 8(4)
  050b964  addic 3, 3, 8
  050b968  stw 3, 8(4)
  050b96c  ori 16, 27, 0
  050b970  ori 17, 16, 0
  050b974  lwz 3, 0(24)
  050b978  cmpwi 1, 22, 0
  050b97c  cmpwi 6, 22, 1
  050b980  lbz 3, 32(3)
  050b984  cmpwi 3, 255
  050b988  bt 2, 0x50b9b8
  050b98c  bt 6, 0x50b9b0
  050b990  lwz 3, 8(18)
  050b994  lwz 4, 8(3)
  050b998  stw 19, 0(4)
  050b99c  lwz 4, 8(3)
  050b9a0  stw 27, 4(4)
  050b9a4  lwz 4, 8(3)
  050b9a8  addic 4, 4, 8
  050b9ac  stw 4, 8(3)
  050b9b0  ori 22, 27, 0
  050b9b4  b 0x50b9e4
  050b9b8  bt 26, 0x50b9e0
  050b9bc  lwz 4, 8(18)
  050b9c0  li 3, 1
  050b9c4  lwz 5, 8(4)
  050b9c8  stw 19, 0(5)
  050b9cc  lwz 5, 8(4)
  050b9d0  stw 3, 4(5)
  050b9d4  lwz 3, 8(4)
  050b9d8  addic 3, 3, 8
  050b9dc  stw 3, 8(4)
  050b9e0  li 22, 1
  050b9e4  lwz 3, 8(18)
  050b9e8  lwz 5, 0(24)
  050b9ec  li 4, 0
  050b9f0  lbz 7, 5(24)
  050b9f4  clrlwi 6, 7, 30
  050b9f8  rlwinm 7, 7, 30, 30, 31
  050b9fc  bl 0x4d676c
  050ba00  nop
  050ba04  cmpwi 22, 0
  050ba08  bf 2, 0x50ba2c
  050ba0c  lwz 3, -23532(20)
  050ba10  lwz 5, 0(24)
  050ba14  li 4, 0
  050ba18  lbz 7, 5(24)
  050ba1c  clrlwi 6, 7, 30
  050ba20  rlwinm 7, 7, 30, 30, 31
  050ba24  bl 0x4d676c
  050ba28  nop
  050ba2c  lwz 3, 0(24)
  050ba30  lbz 4, 5(24)
  050ba34  cmpwi 17, 0
  050ba38  bf 2, 0x50bc10
  050ba3c  lwz 31, 8(18)
  050ba40  lwz 6, 8(24)
  050ba44  lis 5, 16396
  050ba48  lhz 10, 12(24)
  050ba4c  lis 8, 4
  050ba50  ori 5, 5, 5908
  050ba54  lwz 7, 8(31)
  050ba58  addic 11, 10, 255
  050ba5c  ori 12, 27, 0
  050ba60  rlwinm 9, 11, 10, 0, 13
  050ba64  stw 5, 0(7)
  050ba68  lwz 5, 8(31)
  050ba6c  ori 7, 8, 6152
  050ba70  ori 9, 9, 6180
  050ba74  srwi 11, 11, 8
  050ba78  oris 9, 9, 16384
  050ba7c  stw 27, 4(5)
  050ba80  lwz 8, 8(31)
  050ba84  ori 5, 6, 0
  050ba88  li 6, 5
  050ba8c  cmpwi 11, 0
  050ba90  stw 27, 8(8)
  050ba94  lwz 8, 8(31)
  050ba98  stw 27, 12(8)
  050ba9c  lwz 8, 8(31)
  050baa0  stw 7, 16(8)
  050baa4  lwz 7, 8(31)
  050baa8  stw 6, 20(7)
  050baac  lwz 6, 8(31)
  050bab0  addic 7, 6, 28
  050bab4  addic 17, 6, 24
  050bab8  stw 7, 8(31)
  050babc  stw 9, 24(6)
  050bac0  bt 2, 0x50bb20
  050bac4  slwi 29, 10, 24
  050bac8  lis 6, 256
  050bacc  lis 30, -256
  050bad0  subc 29, 29, 6
  050bad4  cmplwi 10, 256
  050bad8  bf 1, 0x50bafc
  050badc  lwz 7, 8(31)
  050bae0  or 6, 5, 30
  050bae4  addic 8, 7, 4
  050bae8  addic 5, 5, 256
  050baec  addic 10, 10, -256
  050baf0  stw 8, 8(31)
  050baf4  stw 6, 0(7)
  050baf8  b 0x50bb14
  050bafc  lwz 7, 8(31)
  050bb00  or 6, 5, 29
  050bb04  addic 8, 7, 4
  050bb08  addc 5, 10, 5
  050bb0c  stw 8, 8(31)
  050bb10  stw 6, 0(7)
  050bb14  addic 12, 12, 1
  050bb18  cmplw 12, 11
  050bb1c  bt 0, 0x50bad4
  050bb20  cmpwi 22, 0
  050bb24  bf 2, 0x50bd4c
  050bb28  lwz 31, -23532(20)
  050bb2c  lis 5, 16396
  050bb30  lwz 6, 8(24)
  050bb34  lhz 10, 12(24)
  050bb38  ori 5, 5, 5908
  050bb3c  lwz 7, 8(31)
  050bb40  addic 11, 10, 255
  050bb44  ori 12, 27, 0
  050bb48  rlwinm 9, 11, 10, 0, 13
  050bb4c  stw 5, 0(7)
  050bb50  lwz 5, 8(31)
  050bb54  lis 7, 4
  050bb58  ori 9, 9, 6180
  050bb5c  ori 7, 7, 6152
  050bb60  srwi 11, 11, 8
  050bb64  stw 27, 4(5)
  050bb68  lwz 8, 8(31)
  050bb6c  ori 5, 6, 0
  050bb70  li 6, 5
  050bb74  cmpwi 11, 0
  050bb78  stw 27, 8(8)
  050bb7c  lwz 8, 8(31)
  050bb80  stw 27, 12(8)
  050bb84  lwz 8, 8(31)
  050bb88  stw 7, 16(8)
  050bb8c  lwz 7, 8(31)
  050bb90  oris 8, 9, 16384
  050bb94  stw 6, 20(7)
  050bb98  lwz 6, 8(31)
  050bb9c  addic 7, 6, 28
  050bba0  addic 16, 6, 24
  050bba4  stw 7, 8(31)
  050bba8  stw 8, 24(6)
  050bbac  bt 2, 0x50bc0c
  050bbb0  slwi 29, 10, 24
  050bbb4  lis 6, 256
  050bbb8  lis 30, -256
  050bbbc  subc 29, 29, 6
  050bbc0  cmplwi 10, 256
  050bbc4  bf 1, 0x50bbe8
  050bbc8  lwz 7, 8(31)
  050bbcc  or 6, 5, 30
  050bbd0  addic 5, 5, 256
  050bbd4  addic 8, 7, 4
  050bbd8  addic 10, 10, -256
  050bbdc  stw 8, 8(31)
  050bbe0  stw 6, 0(7)
  050bbe4  b 0x50bc00
  050bbe8  lwz 7, 8(31)
  050bbec  or 6, 5, 29
  050bbf0  addc 5, 10, 5
  050bbf4  addic 8, 7, 4
  050bbf8  stw 8, 8(31)
  050bbfc  stw 6, 0(7)
  050bc00  addic 12, 12, 1
  050bc04  cmplw 12, 11
  050bc08  bt 0, 0x50bbc0
  050bc0c  b 0x50bd4c
  050bc10  lhz 10, 12(24)
  050bc14  ori 12, 27, 0
  050bc18  lwz 8, 0(17)
  050bc1c  addic 11, 10, 255
  050bc20  rlwinm 7, 8, 14, 21, 31
  050bc24  lwz 5, 8(24)
  050bc28  srwi 11, 11, 8
  050bc2c  lwz 31, 8(18)
  050bc30  rlwimi 8, 27, 0, 3, 13
  050bc34  addc 7, 11, 7
  050bc38  cmpwi 11, 0
  050bc3c  slwi 6, 7, 18
  050bc40  or 6, 8, 6
  050bc44  stw 6, 0(17)
  050bc48  bt 2, 0x50bca8
  050bc4c  slwi 29, 10, 24
  050bc50  lis 6, 256
  050bc54  lis 30, -256
  050bc58  subc 29, 29, 6
  050bc5c  cmplwi 10, 256
  050bc60  bf 1, 0x50bc84
  050bc64  lwz 7, 8(31)
  050bc68  or 6, 5, 30
  050bc6c  addic 8, 7, 4
  050bc70  addic 5, 5, 256
  050bc74  addic 10, 10, -256
  050bc78  stw 8, 8(31)
  050bc7c  stw 6, 0(7)
  050bc80  b 0x50bc9c
  050bc84  lwz 7, 8(31)
  050bc88  or 6, 5, 29
  050bc8c  addic 8, 7, 4
  050bc90  addc 5, 10, 5
  050bc94  stw 8, 8(31)
  050bc98  stw 6, 0(7)
  050bc9c  addic 12, 12, 1
  050bca0  cmplw 12, 11
  050bca4  bt 0, 0x50bc5c
  050bca8  cmpwi 22, 0
  050bcac  bf 2, 0x50bd4c
  050bcb0  clrldi 16, 16, 32
  050bcb4  lhz 10, 12(24)
  050bcb8  ori 12, 27, 0
  050bcbc  addic 11, 10, 255
  050bcc0  srwi 11, 11, 8
  050bcc4  lwz 7, 0(16)
  050bcc8  cmpwi 11, 0
  050bccc  rlwinm 6, 7, 14, 21, 31
  050bcd0  rlwimi 7, 27, 0, 3, 13
  050bcd4  addc 5, 11, 6
  050bcd8  slwi 8, 5, 18
  050bcdc  lwz 5, 8(24)
  050bce0  or 6, 7, 8
  050bce4  lwz 31, -23532(20)
  050bce8  stw 6, 0(16)
  050bcec  bt 2, 0x50bd4c
  050bcf0  slwi 29, 10, 24
  050bcf4  lis 6, 256
  050bcf8  lis 30, -256
  050bcfc  subc 29, 29, 6
  050bd00  cmplwi 10, 256
  050bd04  bf 1, 0x50bd28
  050bd08  lwz 7, 8(31)
  050bd0c  or 6, 5, 30
  050bd10  addic 5, 5, 256
  050bd14  addic 8, 7, 4
  050bd18  addic 10, 10, -256
  050bd1c  stw 8, 8(31)
  050bd20  stw 6, 0(7)
  050bd24  b 0x50bd40
  050bd28  lwz 7, 8(31)
  050bd2c  or 6, 5, 29
  050bd30  addc 5, 10, 5
  050bd34  addic 8, 7, 4
  050bd38  stw 8, 8(31)
  050bd3c  stw 6, 0(7)
  050bd40  addic 12, 12, 1
  050bd44  cmplw 12, 11
  050bd48  bt 0, 0x50bd00
  050bd4c  addic 21, 21, 1
  050bd50  addic 24, 24, 16
  050bd54  cmplw 21, 25
  050bd58  bt 0, 0x50b664
  050bd5c  cmpwi 17, 0
  050bd60  bt 2, 0x50bdac
  050bd64  lwz 4, 8(18)
  050bd68  lis 3, 4
  050bd6c  ori 3, 3, 6152
  050bd70  lwz 5, 8(4)
  050bd74  stw 3, 0(5)
  050bd78  lwz 5, 8(4)
  050bd7c  stw 27, 4(5)
  050bd80  lwz 5, 8(4)
  050bd84  addic 5, 5, 8
  050bd88  stw 5, 8(4)
  050bd8c  lwz 4, -23532(20)
  050bd90  lwz 5, 8(4)
  050bd94  stw 3, 0(5)
  050bd98  lwz 3, 8(4)
  050bd9c  stw 27, 4(3)
  050bda0  lwz 3, 8(4)
  050bda4  addic 3, 3, 8
  050bda8  stw 3, 8(4)
  050bdac  lis 3, 4
  050bdb0  lis 4, 4
  050bdb4  ori 31, 3, 5952
  050bdb8  lwz 3, 8(18)
  050bdbc  ori 30, 4, 5956
  050bdc0  lwz 5, 8(3)
  050bdc4  stw 31, 0(5)
  050bdc8  lwz 4, 8(3)
  050bdcc  stw 15, 4(4)
  050bdd0  lwz 4, 8(3)
  050bdd4  addic 4, 4, 8
  050bdd8  stw 4, 8(3)
  050bddc  lwz 3, 8(18)
  050bde0  lis 4, 4
  050bde4  ori 29, 4, 5964
  050bde8  lwz 5, 8(3)
  050bdec  stw 30, 0(5)
  050bdf0  lwz 4, 8(3)
  050bdf4  stw 15, 4(4)
  050bdf8  lwz 4, 8(3)
  050bdfc  addic 4, 4, 8
  050be00  stw 4, 8(3)
  050be04  lwz 3, 8(18)
  050be08  lwz 4, 8(3)
  050be0c  stw 29, 0(4)
  050be10  lwz 4, 8(3)
  050be14  stw 15, 4(4)
  050be18  lwz 4, 8(3)
  050be1c  addic 4, 4, 8
  050be20  stw 4, 8(3)
  050be24  lwz 3, 8(18)
  050be28  bl 0x50ec5c
  050be2c  nop
  050be30  lwz 3, -23532(20)
  050be34  lwz 4, 8(3)
  050be38  stw 31, 0(4)
  050be3c  lwz 4, 8(3)
  050be40  stw 15, 4(4)
  050be44  lwz 4, 8(3)
  050be48  addic 4, 4, 8
  050be4c  stw 4, 8(3)
  050be50  lwz 3, -23532(20)
  050be54  lis 4, 4
  050be58  ori 4, 4, 5960
  050be5c  lwz 5, 8(3)
  050be60  stw 30, 0(5)
  050be64  lwz 5, 8(3)
  050be68  stw 15, 4(5)
  050be6c  lwz 5, 8(3)
  050be70  addic 5, 5, 8
  050be74  stw 5, 8(3)
  050be78  lwz 3, -23532(20)
  050be7c  lwz 5, 8(3)
  050be80  stw 4, 0(5)
  050be84  lwz 4, 8(3)
  050be88  stw 15, 4(4)
  050be8c  lwz 4, 8(3)
  050be90  addic 4, 4, 8
  050be94  stw 4, 8(3)
  050be98  lwz 3, -23532(20)
  050be9c  lwz 4, 8(3)
  050bea0  stw 29, 0(4)
  050bea4  lwz 4, 8(3)
  050bea8  stw 15, 4(4)
  050beac  lwz 4, 8(3)
  050beb0  addic 4, 4, 8
  050beb4  stw 4, 8(3)
  050beb8  lwz 3, -23532(20)
  050bebc  bl 0x50ec5c
  050bec0  nop
  050bec4  lwz 3, 8(18)
  050bec8  lwz 4, 8(3)
  050becc  stw 19, 0(4)
  050bed0  lwz 4, 8(3)
  050bed4  stw 27, 4(4)
  050bed8  lwz 4, 8(3)
  050bedc  addic 4, 4, 8
  050bee0  stw 4, 8(3)
  050bee4  ld 0, 336(1)
  050bee8  mtlr 0
  050beec  ld 15, 184(1)
  050bef0  ld 16, 192(1)
  050bef4  ld 17, 200(1)
  050bef8  ld 18, 208(1)
  050befc  ld 19, 216(1)
  050bf00  ld 20, 224(1)
  050bf04  ld 21, 232(1)
  050bf08  ld 22, 240(1)
  050bf0c  ld 23, 248(1)
  050bf10  ld 24, 256(1)
  050bf14  ld 25, 264(1)
  050bf18  ld 26, 272(1)
  050bf1c  ld 27, 280(1)
  050bf20  ld 28, 288(1)
  050bf24  ld 29, 296(1)
  050bf28  ld 30, 304(1)
  050bf2c  ld 31, 312(1)
  050bf30  addi 1, 1, 320
  050bf34  blr

DrawTfrag:   # 0x50bf38, 0x30 bytes
  050bf38  stdu 1, -112(1)
  050bf3c  mflr 0
  050bf40  std 0, 128(1)
  050bf44  lwz 6, 24(3)
  050bf48  ori 5, 4, 0
  050bf4c  lwz 3, 40(3)
  050bf50  addic 4, 6, 16
  050bf54  bl 0x50b0bc
  050bf58  ld 0, 128(1)
  050bf5c  mtlr 0
  050bf60  addi 1, 1, 112
  050bf64  blr

FUN_0050bf68:   # 0x50bf68, 0x6c bytes
  050bf68  ori 5, 3, 0
  050bf6c  lwz 3, 0(5)
  050bf70  lbz 6, 32(3)
  050bf74  cmpwi 6, 255
  050bf78  bt 2, 0x50bf94
  050bf7c  lwz 6, 0(4)
  050bf80  lbz 7, 32(6)
  050bf84  cmpwi 7, 255
  050bf88  bf 2, 0x50bfac
  050bf8c  li 3, 1
  050bf90  b 0x50bfd0
  050bf94  lwz 6, 0(4)
  050bf98  lbz 7, 32(6)
  050bf9c  cmpwi 7, 255
  050bfa0  bt 2, 0x50bfac
  050bfa4  li 3, -1
  050bfa8  b 0x50bfd0
  050bfac  lbz 5, 4(5)
  050bfb0  lbz 4, 4(4)
  050bfb4  clrlwi 3, 3, 8
  050bfb8  clrlwi 6, 6, 8
  050bfbc  rlwinm 5, 5, 16, 0, 0
  050bfc0  rlwinm 4, 4, 16, 0, 0
  050bfc4  or 3, 3, 5
  050bfc8  or 4, 6, 4
  050bfcc  subc 3, 3, 4
  050bfd0  blr

FUN_0050bfd4:   # 0x50bfd4, 0x3c bytes
  050bfd4  stdu 1, -112(1)
  050bfd8  mflr 0
  050bfdc  std 0, 128(1)
  050bfe0  lis 6, 113
  050bfe4  lwz 7, 8(3)
  050bfe8  li 5, 16
  050bfec  addic 6, 6, 8808
  050bff0  lwz 3, 12(3)
  050bff4  ori 4, 7, 0
  050bff8  bl 0x5c8308
  050bffc  nop
  050c000  ld 0, 128(1)
  050c004  mtlr 0
  050c008  addi 1, 1, 112
  050c00c  blr

FUN_0050c020:   # 0x50c020, 0x590 bytes
  050c020  stdu 1, -384(1)
  050c024  mflr 0
  050c028  std 0, 400(1)
  050c02c  addi 0, 1, 256
  050c030  stvx 30, 0, 0
  050c034  addic 0, 0, 16
  050c038  stvx 31, 0, 0
  050c03c  std 22, 304(1)
  050c040  std 30, 368(1)
  050c044  std 23, 312(1)
  050c048  lwz 22, 9276(3)
  050c04c  lis 30, 144
  050c050  std 31, 376(1)
  050c054  lwz 23, 9272(3)
  050c058  std 24, 320(1)
  050c05c  ori 31, 4, 0
  050c060  lis 24, 144
  050c064  sldi 4, 22, 6
  050c068  sldi 5, 22, 4
  050c06c  lwz 3, -23488(30)
  050c070  addc 4, 4, 5
  050c074  lwz 24, -23196(24)
  050c078  li 5, 16
  050c07c  std 29, 360(1)
  050c080  std 28, 352(1)
  050c084  std 27, 344(1)
  050c088  std 26, 336(1)
  050c08c  std 25, 328(1)
  050c090  std 21, 296(1)
  050c094  std 20, 288(1)
  050c098  extsw 4, 4
  050c09c  bl 0x4fe098
  050c0a0  nop
  050c0a4  slwi 4, 22, 2
  050c0a8  ori 27, 3, 0
  050c0ac  extsw 4, 4
  050c0b0  lwz 3, -23488(30)
  050c0b4  li 5, 16
  050c0b8  bl 0x4fe098
  050c0bc  nop
  050c0c0  lis 4, 346
  050c0c4  stw 27, 4(31)
  050c0c8  ori 28, 3, 0
  050c0cc  li 25, 0
  050c0d0  lbz 3, -15512(4)
  050c0d4  stw 28, 0(31)
  050c0d8  cmpwi 3, 0
  050c0dc  stw 25, 8(31)
  050c0e0  bf 2, 0x50c560
  050c0e4  cmpwi 22, 0
  050c0e8  bt 2, 0x50c560
  050c0ec  sldi 3, 23, 6
  050c0f0  sldi 4, 23, 7
  050c0f4  addc 3, 23, 3
  050c0f8  sldi 30, 23, 2
  050c0fc  addc 29, 23, 3
  050c100  subc 3, 4, 23
  050c104  ori 26, 25, 0
  050c108  addc 29, 23, 29
  050c10c  subc 30, 3, 30
  050c110  lwz 21, 108(23)
  050c114  lbz 3, 94(23)
  050c118  rlwinm 3, 3, 0, 29, 29
  050c11c  cmpwi 3, 0
  050c120  lhz 3, 42(21)
  050c124  bf 2, 0x50c548
  050c128  clrlwi 3, 3, 31
  050c12c  cmpwi 3, 0
  050c130  bf 2, 0x50c548
  050c134  lis 3, 81
  050c138  lfs 5, 64(23)
  050c13c  lis 5, 162
  050c140  addi 6, 3, -16368
  050c144  lfs 2, 76(23)
  050c148  lfs 4, 68(23)
  050c14c  ori 4, 25, 0
  050c150  lfs 3, 72(23)
  050c154  addic 3, 5, 17832
  050c158  fabs 2, 2
  050c15c  lfs 1, 0(6)
  050c160  lfs 6, 0(3)
  050c164  lfs 7, 12(3)
  050c168  lfs 8, 8(3)
  050c16c  fmadds 6, 6, 5, 7
  050c170  lfs 7, 4(3)
  050c174  fmadds 6, 8, 3, 6
  050c178  fmadds 6, 7, 4, 6
  050c17c  fadds 6, 6, 2
  050c180  fcmpu 0, 6, 1
  050c184  bt 0, 0x50c548
  050c188  addic 4, 4, 1
  050c18c  addic 3, 3, 16
  050c190  cmpwi 4, 6
  050c194  bt 0, 0x50c160
  050c198  lis 3, 144
  050c19c  lbz 4, 11928(3)
  050c1a0  lwz 3, 88(23)
  050c1a4  cmpwi 4, 0
  050c1a8  bt 2, 0x50c200
  050c1ac  lis 5, 345
  050c1b0  rlwinm 4, 3, 24, 24, 31
  050c1b4  lwz 6, 1052(24)
  050c1b8  clrlwi 3, 3, 24
  050c1bc  li 7, 0
  050c1c0  lbz 5, 13136(5)
  050c1c4  lbzx 4, 6, 4
  050c1c8  and 3, 4, 3
  050c1cc  subc 4, 7, 5
  050c1d0  cntlzw 3, 3
  050c1d4  cntlzw 4, 4
  050c1d8  rlwinm 3, 3, 27, 31, 31
  050c1dc  sldi 4, 4, 58
  050c1e0  cntlzw 5, 3
  050c1e4  sradi 4, 4, 63
  050c1e8  rlwinm 5, 5, 27, 31, 31
  050c1ec  subc 3, 3, 5
  050c1f0  and 3, 4, 3
  050c1f4  addc 3, 5, 3
  050c1f8  cmpwi 3, 0
  050c1fc  bf 2, 0x50c548
  050c200  li 3, 16
  050c204  lvx 2, 0, 23
  050c208  li 5, 32
  050c20c  li 7, 48
  050c210  li 4, 128
  050c214  li 6, 144
  050c218  lvx 3, 3, 23
  050c21c  li 3, 160
  050c220  lvx 4, 5, 23
  050c224  li 5, 176
  050c228  lvx 5, 7, 23
  050c22c  stvx 2, 4, 1
  050c230  stvx 3, 6, 1
  050c234  stvx 4, 3, 1
  050c238  stvx 5, 5, 1
  050c23c  lhz 3, 42(21)
  050c240  rlwinm 3, 3, 0, 29, 30
  050c244  cmpwi 3, 0
  050c248  bt 2, 0x50c494
  050c24c  lis 5, 346
  050c250  addic 3, 1, 112
  050c254  addic 4, 23, 64
  050c258  addic 5, 5, -15552
  050c25c  bl 0x502a64
  050c260  nop
  050c264  vspltisw 2, -1
  050c268  li 3, 116
  050c26c  li 4, 112
  050c270  vslw 2, 2, 2
  050c274  lis 5, 144
  050c278  lvlx 3, 3, 1
  050c27c  addic 6, 5, 12256
  050c280  lvlx 4, 4, 1
  050c284  li 3, 120
  050c288  vmaddfp 2, 3, 3, 2
  050c28c  li 4, 20
  050c290  li 7, 4
  050c294  li 8, 8
  050c298  lvlx 5, 3, 1
  050c29c  li 9, 12
  050c2a0  li 3, 24
  050c2a4  vmaddfp 4, 4, 4, 2
  050c2a8  lvlx 2, 4, 6
  050c2ac  li 4, 16
  050c2b0  vspltw 9, 2, 0
  050c2b4  lvlx 3, 3, 6
  050c2b8  li 3, 12256
  050c2bc  lvlx 6, 4, 6
  050c2c0  lvlx 8, 7, 6
  050c2c4  lvlx 7, 8, 6
  050c2c8  vmaddfp 4, 5, 5, 4
  050c2cc  lvlx 5, 3, 5
  050c2d0  lvlx 2, 9, 6
  050c2d4  vspltw 10, 4, 0
  050c2d8  vcmpgefp. 9, 10, 9
  050c2dc  bf 26, 0x50c494
  050c2e0  lis 3, 346
  050c2e4  vspltisw 10, -8
  050c2e8  lis 4, 144
  050c2ec  vspltisw 13, -1
  050c2f0  lis 8, 81
  050c2f4  vspltisw 0, -1
  050c2f8  addic 4, 4, 12000
  050c2fc  li 7, 4
  050c300  lwz 3, -15568(3)
  050c304  lhz 9, 42(21)
  050c308  addc 5, 3, 29
  050c30c  vslw 13, 13, 13
  050c310  vslw 0, 0, 0
  050c314  rlwinm 6, 5, 31, 24, 31
  050c318  clrlwi 5, 5, 24
  050c31c  vspltisw 1, -1
  050c320  addic 20, 1, 192
  050c324  lvlx 9, 4, 5
  050c328  lvlx 11, 4, 6
  050c32c  addi 5, 8, -16368
  050c330  vsraw 9, 9, 10
  050c334  rlwinm 6, 9, 0, 28, 30
  050c338  vsraw 11, 11, 10
  050c33c  li 8, 0
  050c340  subc 6, 8, 6
  050c344  vcfsx 9, 9, 0
  050c348  vcfsx 11, 11, 0
  050c34c  cntlzw 6, 6
  050c350  lvlx 12, 7, 5
  050c354  addc 7, 3, 30
  050c358  slwi 3, 3, 1
  050c35c  vspltw 12, 12, 0
  050c360  sldi 6, 6, 58
  050c364  addc 3, 3, 30
  050c368  sradi 6, 6, 63
  050c36c  subc 7, 7, 3
  050c370  vslw 1, 1, 1
  050c374  and 6, 6, 7
  050c378  li 7, 8
  050c37c  vmaddfp 9, 9, 12, 13
  050c380  vmaddfp 11, 11, 12, 0
  050c384  vspltisw 13, -1
  050c388  addc 3, 3, 6
  050c38c  lvlx 0, 7, 5
  050c390  addic 6, 3, 64
  050c394  vslw 13, 13, 13
  050c398  vspltw 0, 0, 0
  050c39c  rlwinm 3, 3, 31, 24, 31
  050c3a0  clrlwi 6, 6, 24
  050c3a4  vsubfp 14, 0, 6
  050c3a8  vnmsubfp 3, 4, 3, 0
  050c3ac  lvlx 15, 4, 6
  050c3b0  vmaddfp 9, 9, 11, 13
  050c3b4  vsraw 11, 15, 10
  050c3b8  lvlx 13, 4, 3
  050c3bc  vspltisw 15, -1
  050c3c0  vsraw 10, 13, 10
  050c3c4  vcfsx 11, 11, 0
  050c3c8  vspltisw 13, -1
  050c3cc  li 3, 12
  050c3d0  vcfsx 10, 10, 0
  050c3d4  vslw 13, 13, 13
  050c3d8  vmaddfp 6, 9, 6, 14
  050c3dc  vspltisw 14, -1
  050c3e0  vslw 9, 15, 15
  050c3e4  vspltisw 15, -1
  050c3e8  vmaddfp 11, 11, 12, 1
  050c3ec  vslw 1, 14, 14
  050c3f0  vslw 14, 15, 15
  050c3f4  vmaddfp 9, 10, 12, 9
  050c3f8  vspltisw 10, -1
  050c3fc  vspltisw 12, -1
  050c400  vmaddfp 4, 7, 6, 13
  050c404  vmaddfp 2, 2, 6, 1
  050c408  vslw 6, 10, 10
  050c40c  vspltisw 7, -1
  050c410  vspltisw 10, -1
  050c414  vslw 7, 7, 7
  050c418  vmaddfp 4, 4, 5, 14
  050c41c  vmaddfp 2, 2, 5, 6
  050c420  vslw 5, 10, 10
  050c424  vspltisw 10, -1
  050c428  lvlx 6, 3, 5
  050c42c  lfs 1, 8(5)
  050c430  vspltw 6, 6, 0
  050c434  ori 3, 20, 0
  050c438  vmaddfp 4, 11, 8, 4
  050c43c  vmaddfp 2, 9, 8, 2
  050c440  vslw 8, 10, 10
  050c444  vslw 9, 12, 12
  050c448  vmaddfp 4, 4, 3, 7
  050c44c  vmaddfp 2, 2, 3, 5
  050c450  vmaddfp 31, 4, 6, 8
  050c454  vmaddfp 30, 2, 6, 9
  050c458  bl 0x500b30
  050c45c  nop
  050c460  vspltw 2, 31, 0
  050c464  li 6, 224
  050c468  vspltw 3, 30, 0
  050c46c  li 7, 228
  050c470  lis 8, 16256
  050c474  ori 5, 20, 0
  050c478  addic 3, 1, 128
  050c47c  ori 4, 23, 0
  050c480  stvewx 2, 6, 1
  050c484  stvewx 3, 7, 1
  050c488  stw 8, 232(1)
  050c48c  bl 0x50162c
  050c490  nop
  050c494  li 3, 128
  050c498  li 4, 144
  050c49c  li 6, 160
  050c4a0  li 5, 16
  050c4a4  li 7, 32
  050c4a8  lvx 2, 3, 1
  050c4ac  li 3, 176
  050c4b0  lvx 3, 4, 1
  050c4b4  li 4, 48
  050c4b8  lvx 4, 6, 1
  050c4bc  lvx 5, 3, 1
  050c4c0  stvx 2, 0, 27
  050c4c4  lis 3, 144
  050c4c8  stvx 3, 5, 27
  050c4cc  stvx 4, 7, 27
  050c4d0  stvx 5, 4, 27
  050c4d4  li 5, 16
  050c4d8  lhz 4, 104(23)
  050c4dc  sth 4, 78(27)
  050c4e0  lhz 4, 106(23)
  050c4e4  sth 4, 76(27)
  050c4e8  lhz 4, 38(21)
  050c4ec  stw 4, 60(27)
  050c4f0  lwz 3, -23488(3)
  050c4f4  lhz 4, 38(21)
  050c4f8  slwi 4, 4, 2
  050c4fc  bl 0x4fe098
  050c500  nop
  050c504  stw 3, 72(27)
  050c508  lwz 4, 1192(24)
  050c50c  lwz 5, 96(23)
  050c510  subc 3, 3, 4
  050c514  addc 4, 4, 5
  050c518  stw 3, 100(23)
  050c51c  stw 4, 68(27)
  050c520  lwz 3, 16(21)
  050c524  lwz 4, 1192(24)
  050c528  addc 3, 4, 3
  050c52c  stw 3, 64(27)
  050c530  stw 23, 0(28)
  050c534  addic 27, 27, 80
  050c538  lwz 3, 8(31)
  050c53c  addic 28, 28, 4
  050c540  addic 3, 3, 1
  050c544  stw 3, 8(31)
  050c548  addic 26, 26, 1
  050c54c  addic 29, 29, 7504
  050c550  cmplw 26, 22
  050c554  addic 30, 30, 13776
  050c558  addic 23, 23, 112
  050c55c  bt 0, 0x50c110
  050c560  li 0, 256
  050c564  lvx 30, 1, 0
  050c568  addic 0, 0, 16
  050c56c  lvx 31, 1, 0
  050c570  ld 0, 400(1)
  050c574  mtlr 0
  050c578  ld 20, 288(1)
  050c57c  ld 21, 296(1)
  050c580  ld 22, 304(1)
  050c584  ld 23, 312(1)
  050c588  ld 24, 320(1)
  050c58c  ld 25, 328(1)
  050c590  ld 26, 336(1)
  050c594  ld 27, 344(1)
  050c598  ld 28, 352(1)
  050c59c  ld 29, 360(1)
  050c5a0  ld 30, 368(1)
  050c5a4  ld 31, 376(1)
  050c5a8  addi 1, 1, 384
  050c5ac  blr
