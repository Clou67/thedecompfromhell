# game/update/moby6.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_6:   # 0x3d5588, 0x4c0 bytes
  03d5588  stdu 1, -128(1)
  03d558c  mflr 0
  03d5590  std 0, 144(1)
  03d5594  std 31, 120(1)
  03d5598  std 30, 112(1)
  03d559c  ori 31, 3, 0
  03d55a0  lwz 30, 120(31)
  03d55a4  lwz 3, 0(30)
  03d55a8  cmpwi 3, -1
  03d55ac  bf 2, 0x3d55d8
  03d55b0  lis 3, 101
  03d55b4  lhz 4, 178(31)
  03d55b8  addic 3, 3, 27588
  03d55bc  extsh 4, 4
  03d55c0  bl 0x5cd098
  03d55c4  nop
  03d55c8  ori 3, 31, 0
  03d55cc  bl 0xefb38
  03d55d0  nop
  03d55d4  b 0x3d5a30
  03d55d8  lis 5, 151
  03d55dc  extsw 4, 3
  03d55e0  addic 3, 5, -25248
  03d55e4  bl 0x110b70
  03d55e8  nop
  03d55ec  cmpwi 3, 0
  03d55f0  bt 2, 0x3d5814
  03d55f4  lbz 3, 56(30)
  03d55f8  cmpwi 3, 0
  03d55fc  bf 2, 0x3d5a30
  03d5600  lwz 3, 4(30)
  03d5604  cmpwi 3, -1
  03d5608  bt 2, 0x3d5650
  03d560c  lis 4, 164
  03d5610  slwi 3, 3, 8
  03d5614  lwz 4, -28512(4)
  03d5618  addc 3, 4, 3
  03d561c  clrldi 3, 3, 32
  03d5620  cmpwi 3, 0
  03d5624  bt 2, 0x3d5650
  03d5628  lbz 4, 32(3)
  03d562c  cmpwi 1, 4, 253
  03d5630  cmpwi 4, 254
  03d5634  cror 2, 2, 6
  03d5638  bt 2, 0x3d5650
  03d563c  lbz 4, 36(30)
  03d5640  extsb 5, 4
  03d5644  cmpwi 5, -1
  03d5648  bt 2, 0x3d5650
  03d564c  stb 4, 32(3)
  03d5650  lwz 3, 20(30)
  03d5654  cmpwi 3, -1
  03d5658  bt 2, 0x3d5678
  03d565c  lbz 4, 44(30)
  03d5660  extsb 4, 4
  03d5664  cmpwi 4, -1
  03d5668  bt 2, 0x3d5678
  03d566c  extsw 3, 3
  03d5670  bl 0x1042ec
  03d5674  nop
  03d5678  lwz 3, 8(30)
  03d567c  cmpwi 3, -1
  03d5680  bt 2, 0x3d56c8
  03d5684  lis 4, 164
  03d5688  slwi 3, 3, 8
  03d568c  lwz 4, -28512(4)
  03d5690  addc 3, 4, 3
  03d5694  clrldi 3, 3, 32
  03d5698  cmpwi 3, 0
  03d569c  bt 2, 0x3d56c8
  03d56a0  lbz 4, 32(3)
  03d56a4  cmpwi 1, 4, 253
  03d56a8  cmpwi 4, 254
  03d56ac  cror 2, 2, 6
  03d56b0  bt 2, 0x3d56c8
  03d56b4  lbz 4, 37(30)
  03d56b8  extsb 5, 4
  03d56bc  cmpwi 5, -1
  03d56c0  bt 2, 0x3d56c8
  03d56c4  stb 4, 32(3)
  03d56c8  lwz 3, 24(30)
  03d56cc  cmpwi 3, -1
  03d56d0  bt 2, 0x3d56f0
  03d56d4  lbz 4, 45(30)
  03d56d8  extsb 4, 4
  03d56dc  cmpwi 4, -1
  03d56e0  bt 2, 0x3d56f0
  03d56e4  extsw 3, 3
  03d56e8  bl 0x1042ec
  03d56ec  nop
  03d56f0  lwz 3, 12(30)
  03d56f4  cmpwi 3, -1
  03d56f8  bt 2, 0x3d5740
  03d56fc  lis 4, 164
  03d5700  slwi 3, 3, 8
  03d5704  lwz 4, -28512(4)
  03d5708  addc 3, 4, 3
  03d570c  clrldi 3, 3, 32
  03d5710  cmpwi 3, 0
  03d5714  bt 2, 0x3d5740
  03d5718  lbz 4, 32(3)
  03d571c  cmpwi 1, 4, 253
  03d5720  cmpwi 4, 254
  03d5724  cror 2, 2, 6
  03d5728  bt 2, 0x3d5740
  03d572c  lbz 4, 38(30)
  03d5730  extsb 5, 4
  03d5734  cmpwi 5, -1
  03d5738  bt 2, 0x3d5740
  03d573c  stb 4, 32(3)
  03d5740  lwz 3, 28(30)
  03d5744  cmpwi 3, -1
  03d5748  bt 2, 0x3d5768
  03d574c  lbz 4, 46(30)
  03d5750  extsb 4, 4
  03d5754  cmpwi 4, -1
  03d5758  bt 2, 0x3d5768
  03d575c  extsw 3, 3
  03d5760  bl 0x1042ec
  03d5764  nop
  03d5768  lwz 3, 16(30)
  03d576c  cmpwi 3, -1
  03d5770  bt 2, 0x3d57b8
  03d5774  lis 4, 164
  03d5778  slwi 3, 3, 8
  03d577c  lwz 4, -28512(4)
  03d5780  addc 3, 4, 3
  03d5784  clrldi 3, 3, 32
  03d5788  cmpwi 3, 0
  03d578c  bt 2, 0x3d57b8
  03d5790  lbz 4, 32(3)
  03d5794  cmpwi 1, 4, 253
  03d5798  cmpwi 4, 254
  03d579c  cror 2, 2, 6
  03d57a0  bt 2, 0x3d57b8
  03d57a4  lbz 4, 39(30)
  03d57a8  extsb 5, 4
  03d57ac  cmpwi 5, -1
  03d57b0  bt 2, 0x3d57b8
  03d57b4  stb 4, 32(3)
  03d57b8  lwz 3, 32(30)
  03d57bc  cmpwi 3, -1
  03d57c0  bt 2, 0x3d57e0
  03d57c4  lbz 4, 47(30)
  03d57c8  extsb 4, 4
  03d57cc  cmpwi 4, -1
  03d57d0  bt 2, 0x3d57e0
  03d57d4  extsw 3, 3
  03d57d8  bl 0x1042ec
  03d57dc  nop
  03d57e0  lbz 3, 52(30)
  03d57e4  extsb 4, 3
  03d57e8  cmpwi 4, -1
  03d57ec  bt 2, 0x3d57f4
  03d57f0  stb 3, 32(31)
  03d57f4  lbz 3, 54(30)
  03d57f8  extsb 4, 3
  03d57fc  cmpwi 4, -1
  03d5800  bt 2, 0x3d5808
  03d5804  stb 3, 188(31)
  03d5808  li 3, 1
  03d580c  stb 3, 56(30)
  03d5810  b 0x3d5a30
  03d5814  lbz 3, 56(30)
  03d5818  cmpwi 3, 1
  03d581c  bf 2, 0x3d5a30
  03d5820  lwz 3, 4(30)
  03d5824  cmpwi 3, -1
  03d5828  bt 2, 0x3d5870
  03d582c  lis 4, 164
  03d5830  slwi 3, 3, 8
  03d5834  lwz 4, -28512(4)
  03d5838  addc 3, 4, 3
  03d583c  clrldi 3, 3, 32
  03d5840  cmpwi 3, 0
  03d5844  bt 2, 0x3d5870
  03d5848  lbz 4, 32(3)
  03d584c  cmpwi 1, 4, 253
  03d5850  cmpwi 4, 254
  03d5854  cror 2, 2, 6
  03d5858  bt 2, 0x3d5870
  03d585c  lbz 4, 40(30)
  03d5860  extsb 5, 4
  03d5864  cmpwi 5, -1
  03d5868  bt 2, 0x3d5870
  03d586c  stb 4, 32(3)
  03d5870  lwz 3, 20(30)
  03d5874  cmpwi 3, -1
  03d5878  bt 2, 0x3d5898
  03d587c  lbz 4, 48(30)
  03d5880  extsb 4, 4
  03d5884  cmpwi 4, -1
  03d5888  bt 2, 0x3d5898
  03d588c  extsw 3, 3
  03d5890  bl 0x1042ec
  03d5894  nop
  03d5898  lwz 3, 8(30)
  03d589c  cmpwi 3, -1
  03d58a0  bt 2, 0x3d58e8
  03d58a4  lis 4, 164
  03d58a8  slwi 3, 3, 8
  03d58ac  lwz 4, -28512(4)
  03d58b0  addc 3, 4, 3
  03d58b4  clrldi 3, 3, 32
  03d58b8  cmpwi 3, 0
  03d58bc  bt 2, 0x3d58e8
  03d58c0  lbz 4, 32(3)
  03d58c4  cmpwi 1, 4, 253
  03d58c8  cmpwi 4, 254
  03d58cc  cror 2, 2, 6
  03d58d0  bt 2, 0x3d58e8
  03d58d4  lbz 4, 41(30)
  03d58d8  extsb 5, 4
  03d58dc  cmpwi 5, -1
  03d58e0  bt 2, 0x3d58e8
  03d58e4  stb 4, 32(3)
  03d58e8  lwz 3, 24(30)
  03d58ec  cmpwi 3, -1
  03d58f0  bt 2, 0x3d5910
  03d58f4  lbz 4, 49(30)
  03d58f8  extsb 4, 4
  03d58fc  cmpwi 4, -1
  03d5900  bt 2, 0x3d5910
  03d5904  extsw 3, 3
  03d5908  bl 0x1042ec
  03d590c  nop
  03d5910  lwz 3, 12(30)
  03d5914  cmpwi 3, -1
  03d5918  bt 2, 0x3d5960
  03d591c  lis 4, 164
  03d5920  slwi 3, 3, 8
  03d5924  lwz 4, -28512(4)
  03d5928  addc 3, 4, 3
  03d592c  clrldi 3, 3, 32
  03d5930  cmpwi 3, 0
  03d5934  bt 2, 0x3d5960
  03d5938  lbz 4, 32(3)
  03d593c  cmpwi 1, 4, 253
  03d5940  cmpwi 4, 254
  03d5944  cror 2, 2, 6
  03d5948  bt 2, 0x3d5960
  03d594c  lbz 4, 42(30)
  03d5950  extsb 5, 4
  03d5954  cmpwi 5, -1
  03d5958  bt 2, 0x3d5960
  03d595c  stb 4, 32(3)
  03d5960  lwz 3, 28(30)
  03d5964  cmpwi 3, -1
  03d5968  bt 2, 0x3d5988
  03d596c  lbz 4, 50(30)
  03d5970  extsb 4, 4
  03d5974  cmpwi 4, -1
  03d5978  bt 2, 0x3d5988
  03d597c  extsw 3, 3
  03d5980  bl 0x1042ec
  03d5984  nop
  03d5988  lwz 3, 16(30)
  03d598c  cmpwi 3, -1
  03d5990  bt 2, 0x3d59d8
  03d5994  lis 4, 164
  03d5998  slwi 3, 3, 8
  03d599c  lwz 4, -28512(4)
  03d59a0  addc 3, 4, 3
  03d59a4  clrldi 3, 3, 32
  03d59a8  cmpwi 3, 0
  03d59ac  bt 2, 0x3d59d8
  03d59b0  lbz 4, 32(3)
  03d59b4  cmpwi 1, 4, 253
  03d59b8  cmpwi 4, 254
  03d59bc  cror 2, 2, 6
  03d59c0  bt 2, 0x3d59d8
  03d59c4  lbz 4, 43(30)
  03d59c8  extsb 5, 4
  03d59cc  cmpwi 5, -1
  03d59d0  bt 2, 0x3d59d8
  03d59d4  stb 4, 32(3)
  03d59d8  lwz 3, 32(30)
  03d59dc  cmpwi 3, -1
  03d59e0  bt 2, 0x3d5a00
  03d59e4  lbz 4, 51(30)
  03d59e8  extsb 4, 4
  03d59ec  cmpwi 4, -1
  03d59f0  bt 2, 0x3d5a00
  03d59f4  extsw 3, 3
  03d59f8  bl 0x1042ec
  03d59fc  nop
  03d5a00  lbz 3, 53(30)
  03d5a04  extsb 4, 3
  03d5a08  cmpwi 4, -1
  03d5a0c  bt 2, 0x3d5a14
  03d5a10  stb 3, 32(31)
  03d5a14  lbz 3, 55(30)
  03d5a18  extsb 4, 3
  03d5a1c  cmpwi 4, -1
  03d5a20  bt 2, 0x3d5a28
  03d5a24  stb 3, 188(31)
  03d5a28  li 3, 0
  03d5a2c  stb 3, 56(30)
  03d5a30  ld 0, 144(1)
  03d5a34  mtlr 0
  03d5a38  ld 30, 112(1)
  03d5a3c  ld 31, 120(1)
  03d5a40  addi 1, 1, 128
  03d5a44  blr
