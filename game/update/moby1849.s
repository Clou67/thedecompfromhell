# game/update/moby1849.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1849:   # 0x2c5230, 0xf8 bytes
  02c5230  stdu 1, -128(1)
  02c5234  mflr 0
  02c5238  std 0, 144(1)
  02c523c  std 31, 120(1)
  02c5240  ori 31, 3, 0
  02c5244  lis 4, 1
  02c5248  li 5, 0
  02c524c  bl 0x10675c
  02c5250  nop
  02c5254  ori 4, 3, 0
  02c5258  lbz 3, 32(31)
  02c525c  cmpwi 3, 0
  02c5260  bt 1, 0x2c5270
  02c5264  cmpwi 3, -1
  02c5268  bf 1, 0x2c5314
  02c526c  b 0x2c5284
  02c5270  cmpwi 3, 1
  02c5274  bf 1, 0x2c5290
  02c5278  cmpwi 3, 2
  02c527c  bf 1, 0x2c52b0
  02c5280  b 0x2c5314
  02c5284  li 3, 1
  02c5288  stb 3, 32(31)
  02c528c  b 0x2c5314
  02c5290  cmpwi 4, 0
  02c5294  bt 2, 0x2c5314
  02c5298  lwz 3, 44(4)
  02c529c  cmpwi 3, 0
  02c52a0  bf 1, 0x2c5314
  02c52a4  li 3, 2
  02c52a8  stb 3, 32(31)
  02c52ac  b 0x2c5314
  02c52b0  li 3, 0
  02c52b4  li 4, 0
  02c52b8  ori 5, 31, 0
  02c52bc  bl 0x15d12c
  02c52c0  nop
  02c52c4  ori 3, 31, 0
  02c52c8  bl 0x11a100
  02c52cc  nop
  02c52d0  ori 3, 31, 0
  02c52d4  li 9, 2
  02c52d8  li 4, 1851
  02c52dc  li 5, 1
  02c52e0  li 6, 1851
  02c52e4  li 7, 1
  02c52e8  li 8, 7
  02c52ec  bl 0x11aa78
  02c52f0  nop
  02c52f4  ori 3, 31, 0
  02c52f8  li 4, 1850
  02c52fc  bl 0x11ad48
  02c5300  nop
  02c5304  ori 3, 31, 0
  02c5308  bl 0xefb38
  02c530c  nop
  02c5310  b 0x2c5314
  02c5314  ld 0, 144(1)
  02c5318  mtlr 0
  02c531c  ld 31, 120(1)
  02c5320  addi 1, 1, 128
  02c5324  blr

M185_002c5358:   # 0x2c5358, 0xa60 bytes
  02c5358  stdu 1, -480(1)
  02c535c  mflr 0
  02c5360  std 0, 496(1)
  02c5364  stfd 21, 392(1)
  02c5368  stfd 22, 400(1)
  02c536c  stfd 23, 408(1)
  02c5370  stfd 24, 416(1)
  02c5374  stfd 25, 424(1)
  02c5378  stfd 26, 432(1)
  02c537c  stfd 27, 440(1)
  02c5380  stfd 28, 448(1)
  02c5384  stfd 29, 456(1)
  02c5388  stfd 30, 464(1)
  02c538c  stfd 31, 472(1)
  02c5390  std 23, 320(1)
  02c5394  lis 23, 151
  02c5398  li 4, 480
  02c539c  std 22, 312(1)
  02c53a0  addic 23, 23, -25376
  02c53a4  addc 22, 1, 4
  02c53a8  std 31, 384(1)
  02c53ac  std 26, 344(1)
  02c53b0  addic 4, 4, 64
  02c53b4  ori 31, 3, 0
  02c53b8  std 30, 376(1)
  02c53bc  addc 26, 1, 4
  02c53c0  addic 3, 1, 112
  02c53c4  std 6, 72(22)
  02c53c8  clrldi 26, 26, 32
  02c53cc  std 5, 64(22)
  02c53d0  ori 30, 7, 0
  02c53d4  lis 5, 124
  02c53d8  std 29, 368(1)
  02c53dc  lwz 6, 8320(23)
  02c53e0  ori 29, 8, 0
  02c53e4  ori 4, 26, 0
  02c53e8  li 7, 0
  02c53ec  lfs 31, -11452(5)
  02c53f0  lfs 1, 16(6)
  02c53f4  li 5, 6
  02c53f8  stfs 1, 112(1)
  02c53fc  lfs 1, 20(6)
  02c5400  stfs 1, 116(1)
  02c5404  lfs 1, 24(6)
  02c5408  stfs 1, 120(1)
  02c540c  lfs 1, 28(6)
  02c5410  stfs 1, 124(1)
  02c5414  lfs 1, 72(22)
  02c5418  std 28, 360(1)
  02c541c  std 27, 352(1)
  02c5420  std 25, 336(1)
  02c5424  std 24, 328(1)
  02c5428  std 21, 304(1)
  02c542c  stfs 1, 120(1)
  02c5430  bl 0x57820
  02c5434  nop
  02c5438  cmpwi 3, 0
  02c543c  bt 2, 0x2c5448
  02c5440  li 3, 0
  02c5444  b 0x2c5d50
  02c5448  lis 3, 165
  02c544c  li 28, 0
  02c5450  lwz 27, -27836(3)
  02c5454  cmpwi 27, 0
  02c5458  bt 2, 0x2c5d4c
  02c545c  ori 24, 28, 0
  02c5460  lbz 3, 32(27)
  02c5464  cmpwi 3, 128
  02c5468  bf 0, 0x2c5d30
  02c546c  lhz 3, 166(27)
  02c5470  cmpwi 1, 3, 1106
  02c5474  cmpwi 3, 1422
  02c5478  cror 2, 2, 6
  02c547c  bt 2, 0x2c5d30
  02c5480  lfs 1, 16(27)
  02c5484  ori 3, 27, 0
  02c5488  stfs 1, 128(1)
  02c548c  lfs 1, 20(27)
  02c5490  stfs 1, 132(1)
  02c5494  lfs 1, 24(27)
  02c5498  stfs 1, 136(1)
  02c549c  lfs 1, 28(27)
  02c54a0  stfs 1, 140(1)
  02c54a4  bl 0xfcccc
  02c54a8  nop
  02c54ac  lfs 4, 128(1)
  02c54b0  lfs 5, 64(22)
  02c54b4  cmpwi 3, 0
  02c54b8  lfs 6, 132(1)
  02c54bc  lfs 7, 72(22)
  02c54c0  bt 2, 0x2c5d30
  02c54c4  lfs 1, 136(1)
  02c54c8  lfs 2, 16(3)
  02c54cc  fadds 1, 1, 2
  02c54d0  stfs 1, 136(1)
  02c54d4  lwz 3, 36(27)
  02c54d8  cmpwi 3, 0
  02c54dc  bt 2, 0x2c5d30
  02c54e0  lhz 3, 70(3)
  02c54e4  extsh 3, 3
  02c54e8  cmpwi 3, 5
  02c54ec  bf 2, 0x2c5d30
  02c54f0  lfs 3, 68(22)
  02c54f4  fsubs 2, 4, 5
  02c54f8  lis 3, 44
  02c54fc  fsubs 8, 6, 3
  02c5500  addi 3, 3, 21288
  02c5504  lis 25, 115
  02c5508  addic 25, 25, 22784
  02c550c  fabs 10, 2
  02c5510  fabs 9, 8
  02c5514  stfs 2, 184(1)
  02c5518  stfs 8, 188(1)
  02c551c  lwz 4, 184(1)
  02c5520  fsubs 2, 10, 9
  02c5524  stfs 2, 192(1)
  02c5528  lfs 24, 0(3)
  02c552c  lfs 2, 184(1)
  02c5530  lwz 5, 188(1)
  02c5534  lfs 8, 188(1)
  02c5538  lwz 6, 192(1)
  02c553c  rlwinm 5, 5, 3, 29, 29
  02c5540  lfs 11, 192(1)
  02c5544  fabs 2, 2
  02c5548  rlwimi 5, 6, 2, 30, 30
  02c554c  fabs 8, 8
  02c5550  fsub 12, 11, 24
  02c5554  rlwimi 5, 4, 4, 28, 28
  02c5558  fsub 11, 11, 24
  02c555c  ori 4, 25, 0
  02c5560  rlwimi 4, 5, 2, 26, 28
  02c5564  slwi 5, 5, 2
  02c5568  clrldi 4, 4, 32
  02c556c  fsel 9, 12, 2, 9
  02c5570  lfsx 30, 25, 5
  02c5574  lfs 2, 4(4)
  02c5578  fsel 8, 11, 8, 10
  02c557c  lfs 26, 4(3)
  02c5580  fcmpu 0, 9, 24
  02c5584  bt 1, 0x2c5590
  02c5588  fmr 30, 24
  02c558c  b 0x2c56a8
  02c5590  fsubs 10, 8, 9
  02c5594  fadds 8, 8, 9
  02c5598  addic 3, 1, 16
  02c559c  li 6, 2
  02c55a0  addic 4, 3, 244
  02c55a4  addic 5, 3, 260
  02c55a8  mtctr 6
  02c55ac  fdivs 8, 10, 8
  02c55b0  fmuls 9, 8, 8
  02c55b4  stfs 8, 272(1)
  02c55b8  stfs 8, 264(1)
  02c55bc  stfs 8, 268(1)
  02c55c0  stfs 8, 260(1)
  02c55c4  lfs 11, 272(1)
  02c55c8  lfs 12, 264(1)
  02c55cc  lfs 13, 268(1)
  02c55d0  fmuls 10, 9, 9
  02c55d4  fmuls 12, 12, 9
  02c55d8  fmuls 11, 11, 10
  02c55dc  fmuls 8, 10, 10
  02c55e0  fmuls 10, 13, 10
  02c55e4  stfs 12, 264(1)
  02c55e8  fmuls 9, 11, 9
  02c55ec  stfs 10, 268(1)
  02c55f0  stfs 9, 272(1)
  02c55f4  lfs 9, 244(3)
  02c55f8  fmuls 9, 9, 8
  02c55fc  stfs 9, 260(3)
  02c5600  lfs 9, 4(4)
  02c5604  addic 3, 3, 8
  02c5608  addic 4, 4, 8
  02c560c  fmuls 9, 9, 8
  02c5610  stfs 9, 4(5)
  02c5614  addic 5, 5, 8
  02c5618  bdnz 0x2c55f4
  02c561c  li 5, 4
  02c5620  ori 3, 1, 0
  02c5624  mtctr 5
  02c5628  lis 4, 115
  02c562c  addic 5, 3, 260
  02c5630  addic 4, 4, 22752
  02c5634  ori 7, 5, 0
  02c5638  lfs 8, 260(3)
  02c563c  lfs 9, 0(4)
  02c5640  fmuls 8, 8, 9
  02c5644  lfs 9, 4(4)
  02c5648  addic 4, 4, 8
  02c564c  stfs 8, 260(3)
  02c5650  lfs 8, 4(5)
  02c5654  addic 3, 3, 8
  02c5658  fmuls 8, 8, 9
  02c565c  stfs 8, 4(5)
  02c5660  addic 5, 5, 8
  02c5664  bdnz 0x2c5638
  02c5668  fmr 8, 24
  02c566c  ori 3, 1, 0
  02c5670  mtctr 6
  02c5674  lfs 9, 260(3)
  02c5678  fadds 8, 8, 9
  02c567c  addic 3, 3, 16
  02c5680  lfs 9, 4(7)
  02c5684  lfs 10, 8(7)
  02c5688  lfs 11, 12(7)
  02c568c  addic 7, 7, 16
  02c5690  fadds 8, 8, 9
  02c5694  fadds 8, 8, 10
  02c5698  fadds 8, 8, 11
  02c569c  bdnz 0x2c5674
  02c56a0  fadds 8, 8, 26
  02c56a4  fmadds 30, 8, 30, 2
  02c56a8  fsubs 2, 3, 6
  02c56ac  fsubs 3, 5, 4
  02c56b0  fsubs 1, 1, 7
  02c56b4  fmuls 2, 2, 2
  02c56b8  fabs 4, 1
  02c56bc  stfs 1, 176(1)
  02c56c0  fmadds 2, 3, 3, 2
  02c56c4  fsqrts 2, 2
  02c56c8  fabs 3, 2
  02c56cc  stfs 2, 172(1)
  02c56d0  lwz 3, 176(1)
  02c56d4  lfs 2, 176(1)
  02c56d8  rlwinm 3, 3, 3, 29, 29
  02c56dc  fabs 5, 2
  02c56e0  fsubs 1, 3, 4
  02c56e4  stfs 1, 180(1)
  02c56e8  lwz 4, 172(1)
  02c56ec  lfs 1, 172(1)
  02c56f0  lwz 5, 180(1)
  02c56f4  lfs 2, 180(1)
  02c56f8  fabs 1, 1
  02c56fc  rlwimi 3, 5, 2, 30, 30
  02c5700  fsub 6, 2, 24
  02c5704  fsub 7, 2, 24
  02c5708  rlwimi 3, 4, 4, 28, 28
  02c570c  ori 4, 25, 0
  02c5710  rlwimi 4, 3, 2, 26, 28
  02c5714  slwi 3, 3, 2
  02c5718  clrldi 4, 4, 32
  02c571c  fsel 4, 6, 1, 4
  02c5720  lfsx 1, 25, 3
  02c5724  fsel 3, 7, 5, 3
  02c5728  lfs 2, 4(4)
  02c572c  fcmpu 0, 4, 24
  02c5730  bt 1, 0x2c573c
  02c5734  fmr 29, 24
  02c5738  b 0x2c5854
  02c573c  fsubs 5, 3, 4
  02c5740  fadds 3, 3, 4
  02c5744  addic 3, 1, 16
  02c5748  li 6, 2
  02c574c  addic 5, 3, 228
  02c5750  addic 4, 3, 212
  02c5754  mtctr 6
  02c5758  fdivs 3, 5, 3
  02c575c  fmuls 4, 3, 3
  02c5760  stfs 3, 240(1)
  02c5764  stfs 3, 232(1)
  02c5768  stfs 3, 236(1)
  02c576c  stfs 3, 228(1)
  02c5770  lfs 6, 240(1)
  02c5774  lfs 7, 232(1)
  02c5778  lfs 8, 236(1)
  02c577c  fmuls 5, 4, 4
  02c5780  fmuls 7, 7, 4
  02c5784  fmuls 6, 6, 5
  02c5788  fmuls 3, 5, 5
  02c578c  fmuls 5, 8, 5
  02c5790  stfs 7, 232(1)
  02c5794  fmuls 4, 6, 4
  02c5798  stfs 5, 236(1)
  02c579c  stfs 4, 240(1)
  02c57a0  lfs 4, 212(3)
  02c57a4  fmuls 4, 4, 3
  02c57a8  stfs 4, 228(3)
  02c57ac  lfs 4, 4(4)
  02c57b0  addic 4, 4, 8
  02c57b4  fmuls 4, 4, 3
  02c57b8  addic 3, 3, 8
  02c57bc  stfs 4, 4(5)
  02c57c0  addic 5, 5, 8
  02c57c4  bdnz 0x2c57a0
  02c57c8  li 5, 4
  02c57cc  ori 3, 1, 0
  02c57d0  mtctr 5
  02c57d4  lis 4, 115
  02c57d8  addic 5, 3, 228
  02c57dc  addic 4, 4, 22752
  02c57e0  ori 7, 5, 0
  02c57e4  lfs 3, 228(3)
  02c57e8  lfs 4, 0(4)
  02c57ec  fmuls 3, 3, 4
  02c57f0  lfs 4, 4(4)
  02c57f4  addic 4, 4, 8
  02c57f8  stfs 3, 228(3)
  02c57fc  lfs 3, 4(5)
  02c5800  addic 3, 3, 8
  02c5804  fmuls 3, 3, 4
  02c5808  stfs 3, 4(5)
  02c580c  addic 5, 5, 8
  02c5810  bdnz 0x2c57e4
  02c5814  ori 3, 1, 0
  02c5818  fmr 29, 24
  02c581c  mtctr 6
  02c5820  lfs 3, 228(3)
  02c5824  lfs 4, 4(7)
  02c5828  fadds 3, 29, 3
  02c582c  lfs 5, 8(7)
  02c5830  lfs 29, 12(7)
  02c5834  addic 3, 3, 16
  02c5838  addic 7, 7, 16
  02c583c  fadds 3, 3, 4
  02c5840  fadds 3, 3, 5
  02c5844  fadds 29, 3, 29
  02c5848  bdnz 0x2c5820
  02c584c  fadds 29, 29, 26
  02c5850  fmadds 29, 29, 1, 2
  02c5854  fmr 2, 30
  02c5858  lfs 1, 0(30)
  02c585c  bl 0x5026a0
  02c5860  nop
  02c5864  lfs 2, 68(22)
  02c5868  lfs 3, 132(1)
  02c586c  lfs 4, 64(22)
  02c5870  fsubs 2, 2, 3
  02c5874  lfs 3, 128(1)
  02c5878  fsubs 3, 4, 3
  02c587c  lfs 4, 72(22)
  02c5880  lfs 5, 136(1)
  02c5884  fsubs 4, 4, 5
  02c5888  fmuls 2, 2, 2
  02c588c  lis 3, 44
  02c5890  fmr 28, 1
  02c5894  addi 3, 3, 21288
  02c5898  fmadds 2, 3, 3, 2
  02c589c  fmadds 27, 4, 4, 2
  02c58a0  lfs 2, 8(3)
  02c58a4  fsqrts 27, 27
  02c58a8  fcmpu 0, 27, 2
  02c58ac  cror 6, 1, 2
  02c58b0  bt 6, 0x2c5aec
  02c58b4  lfs 1, 16(27)
  02c58b8  lfs 2, 128(23)
  02c58bc  lfs 3, 20(27)
  02c58c0  lfs 4, 132(23)
  02c58c4  fsubs 2, 1, 2
  02c58c8  lwz 3, 8320(23)
  02c58cc  fsubs 3, 3, 4
  02c58d0  lfs 1, 72(3)
  02c58d4  fabs 4, 2
  02c58d8  fabs 5, 3
  02c58dc  stfs 2, 160(1)
  02c58e0  stfs 3, 164(1)
  02c58e4  fsubs 2, 4, 5
  02c58e8  stfs 2, 168(1)
  02c58ec  lwz 3, 160(1)
  02c58f0  lfs 2, 160(1)
  02c58f4  lwz 4, 164(1)
  02c58f8  lfs 3, 164(1)
  02c58fc  fabs 2, 2
  02c5900  lwz 5, 168(1)
  02c5904  rlwinm 4, 4, 3, 29, 29
  02c5908  lfs 6, 168(1)
  02c590c  fabs 3, 3
  02c5910  rlwimi 4, 5, 2, 30, 30
  02c5914  fsub 7, 6, 24
  02c5918  fsub 6, 6, 24
  02c591c  rlwimi 4, 3, 4, 28, 28
  02c5920  ori 3, 25, 0
  02c5924  rlwimi 3, 4, 2, 26, 28
  02c5928  slwi 4, 4, 2
  02c592c  clrldi 3, 3, 32
  02c5930  fsel 5, 7, 2, 5
  02c5934  lfsx 2, 25, 4
  02c5938  fsel 4, 6, 3, 4
  02c593c  lfs 3, 4(3)
  02c5940  fcmpu 0, 5, 24
  02c5944  bt 1, 0x2c5950
  02c5948  fmr 26, 24
  02c594c  b 0x2c5a68
  02c5950  fsubs 6, 4, 5
  02c5954  fadds 4, 4, 5
  02c5958  addic 3, 1, 16
  02c595c  li 6, 2
  02c5960  addic 4, 3, 180
  02c5964  addic 5, 3, 196
  02c5968  mtctr 6
  02c596c  fdivs 4, 6, 4
  02c5970  fmuls 5, 4, 4
  02c5974  stfs 4, 208(1)
  02c5978  stfs 4, 200(1)
  02c597c  stfs 4, 204(1)
  02c5980  stfs 4, 196(1)
  02c5984  lfs 7, 208(1)
  02c5988  lfs 8, 200(1)
  02c598c  lfs 9, 204(1)
  02c5990  fmuls 6, 5, 5
  02c5994  fmuls 8, 8, 5
  02c5998  fmuls 7, 7, 6
  02c599c  fmuls 4, 6, 6
  02c59a0  fmuls 6, 9, 6
  02c59a4  stfs 8, 200(1)
  02c59a8  fmuls 5, 7, 5
  02c59ac  stfs 6, 204(1)
  02c59b0  stfs 5, 208(1)
  02c59b4  lfs 5, 180(3)
  02c59b8  fmuls 5, 5, 4
  02c59bc  stfs 5, 196(3)
  02c59c0  lfs 5, 4(4)
  02c59c4  addic 3, 3, 8
  02c59c8  addic 4, 4, 8
  02c59cc  fmuls 5, 5, 4
  02c59d0  stfs 5, 4(5)
  02c59d4  addic 5, 5, 8
  02c59d8  bdnz 0x2c59b4
  02c59dc  li 5, 4
  02c59e0  ori 3, 1, 0
  02c59e4  mtctr 5
  02c59e8  lis 4, 115
  02c59ec  addic 5, 3, 196
  02c59f0  addic 4, 4, 22752
  02c59f4  ori 7, 5, 0
  02c59f8  lfs 4, 196(3)
  02c59fc  lfs 5, 0(4)
  02c5a00  fmuls 4, 4, 5
  02c5a04  lfs 5, 4(4)
  02c5a08  addic 4, 4, 8
  02c5a0c  stfs 4, 196(3)
  02c5a10  lfs 4, 4(5)
  02c5a14  addic 3, 3, 8
  02c5a18  fmuls 4, 4, 5
  02c5a1c  stfs 4, 4(5)
  02c5a20  addic 5, 5, 8
  02c5a24  bdnz 0x2c59f8
  02c5a28  fmr 4, 24
  02c5a2c  ori 3, 1, 0
  02c5a30  mtctr 6
  02c5a34  lfs 5, 196(3)
  02c5a38  fadds 4, 4, 5
  02c5a3c  addic 3, 3, 16
  02c5a40  lfs 5, 4(7)
  02c5a44  lfs 6, 8(7)
  02c5a48  lfs 7, 12(7)
  02c5a4c  addic 7, 7, 16
  02c5a50  fadds 4, 4, 5
  02c5a54  fadds 4, 4, 6
  02c5a58  fadds 4, 4, 7
  02c5a5c  bdnz 0x2c5a34
  02c5a60  fadds 26, 4, 26
  02c5a64  fmadds 26, 26, 2, 3
  02c5a68  fmr 2, 26
  02c5a6c  bl 0x5026a0
  02c5a70  nop
  02c5a74  lis 3, 44
  02c5a78  addi 3, 3, 21288
  02c5a7c  lfs 2, 12(3)
  02c5a80  fcmpu 0, 1, 2
  02c5a84  cror 6, 1, 2
  02c5a88  bt 6, 0x2c5aec
  02c5a8c  lfs 1, 72(22)
  02c5a90  lfs 2, 136(1)
  02c5a94  lis 3, 44
  02c5a98  fsubs 1, 1, 2
  02c5a9c  addi 3, 3, 21288
  02c5aa0  lfs 2, 16(3)
  02c5aa4  fabs 1, 1
  02c5aa8  fcmpu 0, 1, 2
  02c5aac  cror 6, 1, 2
  02c5ab0  bt 6, 0x2c5aec
  02c5ab4  ori 3, 26, 0
  02c5ab8  addic 4, 1, 128
  02c5abc  lwz 6, 8320(23)
  02c5ac0  li 5, 6
  02c5ac4  li 7, 0
  02c5ac8  bl 0x57820
  02c5acc  nop
  02c5ad0  cmpwi 3, 0
  02c5ad4  bf 2, 0x2c5aec
  02c5ad8  fneg 1, 29
  02c5adc  ori 28, 27, 0
  02c5ae0  stfs 1, 0(29)
  02c5ae4  stfs 30, 0(30)
  02c5ae8  b 0x2c5d4c
  02c5aec  fcmpu 0, 31, 27
  02c5af0  bt 0, 0x2c5d30
  02c5af4  lis 3, 44
  02c5af8  lfs 2, 0(30)
  02c5afc  fmr 1, 27
  02c5b00  addi 21, 3, 21288
  02c5b04  addic 3, 1, 144
  02c5b08  lfs 4, 20(21)
  02c5b0c  lfs 3, 0(29)
  02c5b10  lfs 5, 740(23)
  02c5b14  fmadds 3, 5, 4, 3
  02c5b18  bl 0xfe610
  02c5b1c  nop
  02c5b20  lfs 1, 148(1)
  02c5b24  lfs 2, 68(22)
  02c5b28  lfs 3, 144(1)
  02c5b2c  fadds 1, 1, 2
  02c5b30  lfs 2, 64(22)
  02c5b34  lfs 4, 132(1)
  02c5b38  fadds 2, 3, 2
  02c5b3c  lfs 3, 152(1)
  02c5b40  lfs 5, 72(22)
  02c5b44  lfs 6, 128(1)
  02c5b48  fadds 3, 3, 5
  02c5b4c  lfs 5, 136(1)
  02c5b50  fsubs 4, 1, 4
  02c5b54  fsubs 6, 2, 6
  02c5b58  stfs 2, 144(1)
  02c5b5c  stfs 1, 148(1)
  02c5b60  fsubs 5, 3, 5
  02c5b64  fmuls 4, 4, 4
  02c5b68  stfs 3, 152(1)
  02c5b6c  lfs 25, 16(21)
  02c5b70  lfs 26, 24(21)
  02c5b74  lis 3, 115
  02c5b78  fmadds 2, 6, 6, 4
  02c5b7c  addic 25, 3, 22720
  02c5b80  lfs 3, 22720(3)
  02c5b84  fmadds 1, 5, 5, 2
  02c5b88  fmuls 2, 27, 25
  02c5b8c  lfs 4, 4(25)
  02c5b90  fsqrts 1, 1
  02c5b94  lfs 5, 8(25)
  02c5b98  lfs 21, 28(21)
  02c5b9c  lis 3, 124
  02c5ba0  fdivs 1, 1, 2
  02c5ba4  lfs 2, 12(25)
  02c5ba8  lfs 23, 32(21)
  02c5bac  lfs 22, 36(21)
  02c5bb0  lfs 6, -11456(3)
  02c5bb4  fmuls 6, 6, 22
  02c5bb8  fabs 7, 1
  02c5bbc  fsub 8, 1, 24
  02c5bc0  fsel 7, 8, 1, 7
  02c5bc4  fsub 1, 1, 24
  02c5bc8  fsubs 8, 26, 7
  02c5bcc  fmadds 3, 7, 4, 3
  02c5bd0  fmuls 9, 7, 7
  02c5bd4  fsel 1, 1, 26, 21
  02c5bd8  fsub 10, 8, 24
  02c5bdc  fmuls 7, 9, 7
  02c5be0  fmadds 3, 9, 5, 3
  02c5be4  fsel 4, 10, 8, 24
  02c5be8  fmadds 2, 7, 2, 3
  02c5bec  fsqrts 4, 4
  02c5bf0  fnmsubs 2, 2, 4, 23
  02c5bf4  fmuls 1, 2, 1
  02c5bf8  fmuls 25, 1, 25
  02c5bfc  fcmpu 0, 25, 6
  02c5c00  cror 6, 0, 2
  02c5c04  bt 6, 0x2c5cac
  02c5c08  ori 3, 27, 0
  02c5c0c  bl 0xfcccc
  02c5c10  nop
  02c5c14  cmpwi 3, 0
  02c5c18  bt 2, 0x2c5cac
  02c5c1c  lbz 3, 10(3)
  02c5c20  bl 0x502730
  02c5c24  nop
  02c5c28  lis 3, 44
  02c5c2c  addi 3, 3, 21288
  02c5c30  lfs 2, 40(3)
  02c5c34  fmuls 1, 1, 2
  02c5c38  lis 3, 115
  02c5c3c  lfs 3, 4(25)
  02c5c40  lfs 4, 8(25)
  02c5c44  lfs 5, 22720(3)
  02c5c48  fdivs 2, 1, 27
  02c5c4c  lfs 6, 12(25)
  02c5c50  fcmpu 0, 1, 27
  02c5c54  cror 6, 1, 2
  02c5c58  fabs 1, 2
  02c5c5c  fsub 7, 2, 24
  02c5c60  fsel 1, 7, 2, 1
  02c5c64  fsub 2, 2, 24
  02c5c68  fsubs 7, 26, 1
  02c5c6c  fmuls 8, 1, 1
  02c5c70  fmadds 3, 1, 3, 5
  02c5c74  fsel 21, 2, 26, 21
  02c5c78  fsub 9, 7, 24
  02c5c7c  fmadds 3, 8, 4, 3
  02c5c80  fmuls 1, 8, 1
  02c5c84  fsel 5, 9, 7, 24
  02c5c88  fmadds 1, 1, 6, 3
  02c5c8c  fsqrts 4, 5
  02c5c90  fnmsubs 26, 1, 4, 23
  02c5c94  bt 6, 0x2c5cac
  02c5c98  fnmsubs 25, 26, 21, 25
  02c5c9c  fcmpu 0, 25, 24
  02c5ca0  cror 6, 1, 2
  02c5ca4  bt 6, 0x2c5cac
  02c5ca8  fmr 25, 24
  02c5cac  lis 3, 124
  02c5cb0  lfs 1, -11456(3)
  02c5cb4  fmuls 1, 1, 22
  02c5cb8  fcmpu 0, 25, 1
  02c5cbc  cror 6, 1, 2
  02c5cc0  bt 6, 0x2c5d30
  02c5cc4  ori 3, 26, 0
  02c5cc8  addic 4, 1, 128
  02c5ccc  li 5, 6
  02c5cd0  ori 6, 31, 0
  02c5cd4  li 7, 0
  02c5cd8  bl 0x57820
  02c5cdc  nop
  02c5ce0  cmpwi 3, 0
  02c5ce4  bt 2, 0x2c5d04
  02c5ce8  lis 3, 161
  02c5cec  addic 3, 3, 2368
  02c5cf0  lwz 3, 24(3)
  02c5cf4  cmpwi 3, 0
  02c5cf8  cmpw 1, 3, 27
  02c5cfc  bt 2, 0x2c5d30
  02c5d00  bf 6, 0x2c5d30
  02c5d04  fneg 1, 29
  02c5d08  lis 3, 44
  02c5d0c  fmr 31, 27
  02c5d10  addi 3, 3, 21288
  02c5d14  stfs 1, 0(29)
  02c5d18  lfs 1, 44(3)
  02c5d1c  fcmpu 0, 28, 1
  02c5d20  cror 6, 1, 2
  02c5d24  bt 6, 0x2c5d2c
  02c5d28  stfs 30, 0(30)
  02c5d2c  ori 28, 27, 0
  02c5d30  lis 3, 165
  02c5d34  addic 24, 24, 4
  02c5d38  addic 3, 3, -27836
  02c5d3c  extsw 4, 24
  02c5d40  lwzx 27, 3, 4
  02c5d44  cmpwi 27, 0
  02c5d48  bf 2, 0x2c5460
  02c5d4c  ori 3, 28, 0
  02c5d50  ld 0, 496(1)
  02c5d54  mtlr 0
  02c5d58  lfd 21, 392(1)
  02c5d5c  lfd 22, 400(1)
  02c5d60  lfd 23, 408(1)
  02c5d64  lfd 24, 416(1)
  02c5d68  lfd 25, 424(1)
  02c5d6c  lfd 26, 432(1)
  02c5d70  lfd 27, 440(1)
  02c5d74  lfd 28, 448(1)
  02c5d78  lfd 29, 456(1)
  02c5d7c  lfd 30, 464(1)
  02c5d80  lfd 31, 472(1)
  02c5d84  ld 21, 304(1)
  02c5d88  ld 22, 312(1)
  02c5d8c  ld 23, 320(1)
  02c5d90  ld 24, 328(1)
  02c5d94  ld 25, 336(1)
  02c5d98  ld 26, 344(1)
  02c5d9c  ld 27, 352(1)
  02c5da0  ld 28, 360(1)
  02c5da4  ld 29, 368(1)
  02c5da8  ld 30, 376(1)
  02c5dac  ld 31, 384(1)
  02c5db0  addi 1, 1, 480
  02c5db4  blr
