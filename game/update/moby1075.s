# game/update/moby1075.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1075_001b5258:   # 0x1b5258, 0x14 bytes
  01b5258  lis 3, 117
  01b525c  lis 4, 1
  01b5260  addic 3, 3, 32352
  01b5264  stw 4, 72(3)
  01b5268  blr

M1075_001b5270:   # 0x1b5270, 0xd0 bytes
  01b5270  stdu 1, -128(1)
  01b5274  mflr 0
  01b5278  std 0, 144(1)
  01b527c  std 31, 120(1)
  01b5280  lwz 3, 120(3)
  01b5284  lwz 31, 180(3)
  01b5288  extsh 31, 31
  01b528c  cmpwi 31, 0
  01b5290  bt 0, 0x1b52a4
  01b5294  lis 3, 165
  01b5298  lwz 3, -28288(3)
  01b529c  cmpw 31, 3
  01b52a0  bf 1, 0x1b52ac
  01b52a4  li 3, 1
  01b52a8  b 0x1b532c
  01b52ac  lis 3, 165
  01b52b0  sldi 4, 31, 2
  01b52b4  addic 3, 3, -28284
  01b52b8  lwzx 31, 3, 4
  01b52bc  cmpwi 31, 0
  01b52c0  bf 2, 0x1b52cc
  01b52c4  li 3, 1
  01b52c8  b 0x1b532c
  01b52cc  lis 3, 164
  01b52d0  lhz 4, 0(31)
  01b52d4  rlwinm 4, 4, 8, 9, 23
  01b52d8  lwz 3, -28512(3)
  01b52dc  addc 3, 3, 4
  01b52e0  clrldi 3, 3, 32
  01b52e4  lbz 4, 32(3)
  01b52e8  cmpwi 4, 128
  01b52ec  bf 0, 0x1b5314
  01b52f0  lhz 4, 166(3)
  01b52f4  cmpwi 4, 1246
  01b52f8  bf 2, 0x1b5314
  01b52fc  bl 0x227994
  01b5300  nop
  01b5304  cmpwi 3, 0
  01b5308  bf 2, 0x1b5314
  01b530c  li 3, 0
  01b5310  b 0x1b532c
  01b5314  lhz 3, 0(31)
  01b5318  addic 31, 31, 2
  01b531c  extsh 3, 3
  01b5320  cmpwi 3, 0
  01b5324  bf 0, 0x1b52cc
  01b5328  li 3, 1
  01b532c  ld 0, 144(1)
  01b5330  mtlr 0
  01b5334  ld 31, 120(1)
  01b5338  addi 1, 1, 128
  01b533c  blr

M1075_001b5398:   # 0x1b5398, 0x478 bytes
  01b5398  stdu 1, -400(1)
  01b539c  mflr 0
  01b53a0  std 0, 416(1)
  01b53a4  stfd 14, 256(1)
  01b53a8  stfd 15, 264(1)
  01b53ac  stfd 16, 272(1)
  01b53b0  stfd 17, 280(1)
  01b53b4  stfd 18, 288(1)
  01b53b8  stfd 19, 296(1)
  01b53bc  stfd 20, 304(1)
  01b53c0  stfd 21, 312(1)
  01b53c4  stfd 22, 320(1)
  01b53c8  stfd 23, 328(1)
  01b53cc  stfd 24, 336(1)
  01b53d0  stfd 25, 344(1)
  01b53d4  stfd 26, 352(1)
  01b53d8  stfd 27, 360(1)
  01b53dc  stfd 28, 368(1)
  01b53e0  stfd 29, 376(1)
  01b53e4  stfd 30, 384(1)
  01b53e8  stfd 31, 392(1)
  01b53ec  std 21, 168(1)
  01b53f0  std 27, 216(1)
  01b53f4  lwz 21, 120(3)
  01b53f8  std 30, 240(1)
  01b53fc  lis 27, 27
  01b5400  std 25, 200(1)
  01b5404  li 30, 0
  01b5408  std 24, 192(1)
  01b540c  std 22, 176(1)
  01b5410  addic 25, 21, 257
  01b5414  addic 24, 21, 256
  01b5418  std 23, 184(1)
  01b541c  addic 22, 21, 240
  01b5420  lis 23, 114
  01b5424  std 31, 248(1)
  01b5428  addi 27, 27, 21312
  01b542c  std 26, 208(1)
  01b5430  ori 31, 3, 0
  01b5434  std 29, 232(1)
  01b5438  std 28, 224(1)
  01b543c  ori 26, 30, 0
  01b5440  addic 21, 21, 272
  01b5444  slwi 29, 30, 6
  01b5448  addc 28, 29, 25
  01b544c  clrldi 28, 28, 32
  01b5450  lbz 3, 0(28)
  01b5454  cmpwi 3, 0
  01b5458  bf 2, 0x1b5478
  01b545c  addc 5, 29, 24
  01b5460  ori 3, 31, 0
  01b5464  clrldi 5, 5, 32
  01b5468  ori 4, 30, 0
  01b546c  bl 0xf0ea8
  01b5470  nop
  01b5474  lbz 3, 0(28)
  01b5478  cmpwi 1, 3, 0
  01b547c  lbz 3, 32(31)
  01b5480  lfs 2, 0(27)
  01b5484  cmpwi 3, 1
  01b5488  lfs 1, -3052(23)
  01b548c  bf 2, 0x1b5494
  01b5490  lfs 2, 4(27)
  01b5494  fmuls 1, 1, 2
  01b5498  bt 6, 0x1b54d0
  01b549c  slwi 3, 30, 2
  01b54a0  fmr 2, 1
  01b54a4  addc 3, 3, 22
  01b54a8  clrldi 28, 3, 32
  01b54ac  lfs 1, 0(28)
  01b54b0  bl 0x502578
  01b54b4  nop
  01b54b8  addc 3, 29, 21
  01b54bc  stfs 1, 0(28)
  01b54c0  li 4, 0
  01b54c4  clrldi 3, 3, 32
  01b54c8  bl 0x501980
  01b54cc  nop
  01b54d0  addic 30, 30, 1
  01b54d4  extsw 30, 30
  01b54d8  cmpwi 30, 4
  01b54dc  bt 0, 0x1b5444
  01b54e0  lis 3, 149
  01b54e4  lfs 1, 20(31)
  01b54e8  addic 3, 3, 5056
  01b54ec  lfs 2, 16(31)
  01b54f0  lfs 3, 324(3)
  01b54f4  lfs 4, 320(3)
  01b54f8  fsubs 1, 1, 3
  01b54fc  fsubs 2, 2, 4
  01b5500  fmuls 1, 1, 1
  01b5504  fmadds 1, 2, 2, 1
  01b5508  lfs 2, 8(27)
  01b550c  fsqrts 1, 1
  01b5510  fcmpu 0, 1, 2
  01b5514  bt 1, 0x1b578c
  01b5518  lbz 3, 32(31)
  01b551c  cmpwi 3, 1
  01b5520  bf 2, 0x1b5538
  01b5524  lis 3, 161
  01b5528  lwz 3, 1808(3)
  01b552c  clrlwi 3, 3, 31
  01b5530  cmpwi 3, 0
  01b5534  bf 2, 0x1b578c
  01b5538  lwz 4, 24(31)
  01b553c  lis 3, 17248
  01b5540  srawi 5, 4, 31
  01b5544  ori 3, 3, 32768
  01b5548  srwi 6, 5, 1
  01b554c  xor 4, 6, 4
  01b5550  subc 4, 4, 5
  01b5554  cmpw 4, 3
  01b5558  bf 0, 0x1b578c
  01b555c  ori 30, 26, 0
  01b5560  ori 3, 31, 0
  01b5564  ori 4, 30, 0
  01b5568  addic 5, 1, 112
  01b556c  bl 0xf1114
  01b5570  nop
  01b5574  lbz 3, 32(31)
  01b5578  li 4, 1
  01b557c  li 28, 2
  01b5580  subc 3, 4, 3
  01b5584  li 4, 1
  01b5588  cntlzw 3, 3
  01b558c  subc 4, 4, 28
  01b5590  sldi 3, 3, 58
  01b5594  ori 29, 26, 0
  01b5598  sradi 3, 3, 63
  01b559c  and 3, 3, 4
  01b55a0  addc 28, 28, 3
  01b55a4  cmpwi 28, 0
  01b55a8  bf 1, 0x1b577c
  01b55ac  lfs 1, 20(27)
  01b55b0  lfs 30, 12(27)
  01b55b4  lfs 29, 16(27)
  01b55b8  lfs 14, 24(27)
  01b55bc  lfs 22, 28(27)
  01b55c0  lfs 15, 32(27)
  01b55c4  lfs 16, 36(27)
  01b55c8  lfs 17, 40(27)
  01b55cc  lfs 23, 44(27)
  01b55d0  lfs 24, 48(27)
  01b55d4  lfs 25, 52(27)
  01b55d8  lfs 26, 56(27)
  01b55dc  lfs 27, 60(27)
  01b55e0  stfd 1, 160(1)
  01b55e4  lfs 28, 64(27)
  01b55e8  lfs 18, 68(27)
  01b55ec  lfs 19, 72(27)
  01b55f0  lfs 20, 76(27)
  01b55f4  lfs 21, 80(27)
  01b55f8  fmr 1, 30
  01b55fc  fmr 2, 29
  01b5600  bl 0xfe4f0
  01b5604  nop
  01b5608  lfs 2, 112(1)
  01b560c  fadds 3, 2, 1
  01b5610  fmr 1, 30
  01b5614  fmr 2, 29
  01b5618  stfs 3, 128(1)
  01b561c  bl 0xfe4f0
  01b5620  nop
  01b5624  lfs 2, 116(1)
  01b5628  fadds 3, 2, 1
  01b562c  fmr 1, 30
  01b5630  fmr 2, 29
  01b5634  stfs 3, 132(1)
  01b5638  bl 0xfe4f0
  01b563c  nop
  01b5640  lfs 2, 120(1)
  01b5644  fadds 3, 2, 1
  01b5648  fmr 1, 30
  01b564c  lfd 2, 160(1)
  01b5650  lfs 31, 72(31)
  01b5654  stfs 3, 136(1)
  01b5658  bl 0xfe4f0
  01b565c  nop
  01b5660  fadds 2, 1, 14
  01b5664  fmr 1, 31
  01b5668  bl 0x502578
  01b566c  nop
  01b5670  fmr 31, 1
  01b5674  fmr 1, 22
  01b5678  fmr 2, 15
  01b567c  bl 0xfcbe8
  01b5680  nop
  01b5684  lfs 2, -3052(23)
  01b5688  lbz 3, 32(31)
  01b568c  fmuls 1, 1, 2
  01b5690  cmpwi 3, 1
  01b5694  bf 2, 0x1b569c
  01b5698  fmuls 1, 1, 16
  01b569c  fmr 3, 1
  01b56a0  fadds 1, 31, 17
  01b56a4  fsubs 2, 23, 31
  01b56a8  fsubs 4, 24, 31
  01b56ac  stw 26, 152(1)
  01b56b0  fsubs 5, 23, 1
  01b56b4  fsub 6, 31, 2
  01b56b8  fsubs 7, 24, 1
  01b56bc  fsub 8, 1, 5
  01b56c0  fsel 2, 6, 2, 31
  01b56c4  fsel 1, 8, 5, 1
  01b56c8  fsub 5, 4, 2
  01b56cc  fsub 6, 7, 1
  01b56d0  fsel 2, 5, 4, 2
  01b56d4  fsel 1, 6, 7, 1
  01b56d8  fmuls 4, 2, 2
  01b56dc  fmuls 5, 1, 1
  01b56e0  fmuls 6, 4, 2
  01b56e4  fmuls 7, 5, 1
  01b56e8  fmuls 8, 4, 6
  01b56ec  fmadds 2, 6, 25, 2
  01b56f0  fmuls 6, 5, 7
  01b56f4  fmadds 1, 7, 25, 1
  01b56f8  fmuls 7, 4, 8
  01b56fc  fmadds 2, 8, 26, 2
  01b5700  fmuls 8, 5, 6
  01b5704  fmadds 1, 6, 26, 1
  01b5708  fmuls 4, 4, 7
  01b570c  fmadds 2, 7, 27, 2
  01b5710  fmuls 5, 5, 8
  01b5714  fmadds 6, 8, 27, 1
  01b5718  fmr 1, 18
  01b571c  fmadds 4, 4, 28, 2
  01b5720  fmr 2, 22
  01b5724  fmadds 5, 5, 28, 6
  01b5728  fmuls 4, 4, 3
  01b572c  fmuls 3, 5, 3
  01b5730  stfs 4, 148(1)
  01b5734  stfs 3, 144(1)
  01b5738  bl 0xfcbe8
  01b573c  nop
  01b5740  lfs 2, -3052(23)
  01b5744  fmuls 3, 1, 2
  01b5748  fmr 2, 20
  01b574c  fmr 1, 19
  01b5750  stfs 3, 152(1)
  01b5754  bl 0xfcbe8
  01b5758  nop
  01b575c  addic 3, 1, 128
  01b5760  fmr 2, 21
  01b5764  addic 4, 1, 144
  01b5768  bl 0x12a440
  01b576c  nop
  01b5770  addic 29, 29, 1
  01b5774  cmpw 29, 28
  01b5778  bt 0, 0x1b55f8
  01b577c  addic 30, 30, 1
  01b5780  extsw 30, 30
  01b5784  cmpwi 30, 4
  01b5788  bt 0, 0x1b5560
  01b578c  ld 0, 416(1)
  01b5790  mtlr 0
  01b5794  lfd 14, 256(1)
  01b5798  lfd 15, 264(1)
  01b579c  lfd 16, 272(1)
  01b57a0  lfd 17, 280(1)
  01b57a4  lfd 18, 288(1)
  01b57a8  lfd 19, 296(1)
  01b57ac  lfd 20, 304(1)
  01b57b0  lfd 21, 312(1)
  01b57b4  lfd 22, 320(1)
  01b57b8  lfd 23, 328(1)
  01b57bc  lfd 24, 336(1)
  01b57c0  lfd 25, 344(1)
  01b57c4  lfd 26, 352(1)
  01b57c8  lfd 27, 360(1)
  01b57cc  lfd 28, 368(1)
  01b57d0  lfd 29, 376(1)
  01b57d4  lfd 30, 384(1)
  01b57d8  lfd 31, 392(1)
  01b57dc  ld 21, 168(1)
  01b57e0  ld 22, 176(1)
  01b57e4  ld 23, 184(1)
  01b57e8  ld 24, 192(1)
  01b57ec  ld 25, 200(1)
  01b57f0  ld 26, 208(1)
  01b57f4  ld 27, 216(1)
  01b57f8  ld 28, 224(1)
  01b57fc  ld 29, 232(1)
  01b5800  ld 30, 240(1)
  01b5804  ld 31, 248(1)
  01b5808  addi 1, 1, 400
  01b580c  blr

UpdateMoby_1075:   # 0x1b5860, 0xf68 bytes
  01b5860  stdu 1, -480(1)
  01b5864  mflr 0
  01b5868  std 0, 496(1)
  01b586c  stfd 17, 360(1)
  01b5870  stfd 18, 368(1)
  01b5874  stfd 19, 376(1)
  01b5878  stfd 20, 384(1)
  01b587c  stfd 21, 392(1)
  01b5880  stfd 22, 400(1)
  01b5884  stfd 23, 408(1)
  01b5888  stfd 24, 416(1)
  01b588c  stfd 25, 424(1)
  01b5890  stfd 26, 432(1)
  01b5894  stfd 27, 440(1)
  01b5898  stfd 28, 448(1)
  01b589c  stfd 29, 456(1)
  01b58a0  stfd 30, 464(1)
  01b58a4  stfd 31, 472(1)
  01b58a8  std 30, 344(1)
  01b58ac  lwz 30, 120(3)
  01b58b0  std 31, 352(1)
  01b58b4  lfs 31, 16(3)
  01b58b8  ori 31, 3, 0
  01b58bc  lfs 1, 64(3)
  01b58c0  lfs 30, 20(3)
  01b58c4  lfs 29, 24(3)
  01b58c8  lfs 2, 68(3)
  01b58cc  stfs 1, 112(1)
  01b58d0  lfs 1, 72(3)
  01b58d4  stfs 2, 116(1)
  01b58d8  lfs 2, 76(3)
  01b58dc  lbz 3, 32(3)
  01b58e0  stfs 1, 120(1)
  01b58e4  cmpwi 3, 0
  01b58e8  std 29, 336(1)
  01b58ec  std 28, 328(1)
  01b58f0  std 27, 320(1)
  01b58f4  stfs 2, 124(1)
  01b58f8  bt 2, 0x1b5904
  01b58fc  lfs 1, 228(30)
  01b5900  stfs 1, 24(31)
  01b5904  ori 3, 31, 0
  01b5908  bl 0x1b5398
  01b590c  lbz 3, 32(31)
  01b5910  cmpwi 3, 5
  01b5914  bt 2, 0x1b6598
  01b5918  cmpwi 3, 4
  01b591c  bt 2, 0x1b652c
  01b5920  cmpwi 3, 3
  01b5924  bt 2, 0x1b6470
  01b5928  cmpwi 3, 2
  01b592c  bt 2, 0x1b5d4c
  01b5930  cmpwi 3, 1
  01b5934  bt 2, 0x1b5b10
  01b5938  cmpwi 3, 0
  01b593c  bf 2, 0x1b6660
  01b5940  li 3, 255
  01b5944  lbz 4, 83(31)
  01b5948  cmpwi 4, 1
  01b594c  sth 3, 50(31)
  01b5950  bt 2, 0x1b596c
  01b5954  ori 3, 31, 0
  01b5958  li 4, 1
  01b595c  li 5, 0
  01b5960  li 6, 1
  01b5964  bl 0xfddc0
  01b5968  nop
  01b596c  lwz 3, 168(30)
  01b5970  lis 29, 165
  01b5974  lwz 4, 172(30)
  01b5978  slwi 3, 3, 2
  01b597c  addic 29, 29, 7136
  01b5980  extsw 28, 3
  01b5984  slwi 4, 4, 2
  01b5988  addic 3, 1, 160
  01b598c  extsw 27, 4
  01b5990  addic 4, 31, 192
  01b5994  lwzx 28, 29, 28
  01b5998  lwzx 27, 29, 27
  01b599c  bl 0x5010c0
  01b59a0  nop
  01b59a4  lwz 5, 0(28)
  01b59a8  li 4, 0
  01b59ac  cmpwi 5, 0
  01b59b0  ori 3, 4, 0
  01b59b4  bf 1, 0x1b5a90
  01b59b8  lfs 1, 16(31)
  01b59bc  lfs 2, 20(31)
  01b59c0  ori 5, 28, 0
  01b59c4  lfs 3, 24(31)
  01b59c8  lfs 4, 160(1)
  01b59cc  lfs 5, 176(1)
  01b59d0  lfs 6, 192(1)
  01b59d4  lfs 7, 208(1)
  01b59d8  lfs 8, 164(1)
  01b59dc  lfs 9, 180(1)
  01b59e0  lfs 10, 196(1)
  01b59e4  lfs 11, 212(1)
  01b59e8  lfs 12, 168(1)
  01b59ec  lfs 13, 184(1)
  01b59f0  lfs 0, 200(1)
  01b59f4  lfs 28, 216(1)
  01b59f8  lfs 27, 172(1)
  01b59fc  lfs 26, 188(1)
  01b5a00  lfs 25, 204(1)
  01b5a04  lfs 24, 220(1)
  01b5a08  lfs 23, 20(5)
  01b5a0c  lfs 22, 16(5)
  01b5a10  fsubs 23, 23, 2
  01b5a14  fsubs 22, 22, 1
  01b5a18  lfs 21, 24(5)
  01b5a1c  lfs 20, 28(5)
  01b5a20  fsubs 21, 21, 3
  01b5a24  addic 4, 4, 1
  01b5a28  addic 6, 27, 16
  01b5a2c  addic 5, 5, 16
  01b5a30  fmuls 19, 23, 5
  01b5a34  fmuls 18, 23, 9
  01b5a38  fmuls 17, 23, 13
  01b5a3c  fmuls 23, 23, 26
  01b5a40  fmadds 19, 22, 4, 19
  01b5a44  fmadds 18, 22, 8, 18
  01b5a48  fmadds 17, 22, 12, 17
  01b5a4c  fmadds 23, 22, 27, 23
  01b5a50  fmadds 22, 21, 6, 19
  01b5a54  fmadds 19, 21, 10, 18
  01b5a58  fmadds 18, 21, 0, 17
  01b5a5c  fmadds 23, 21, 25, 23
  01b5a60  fmadds 22, 20, 7, 22
  01b5a64  fmadds 21, 20, 11, 19
  01b5a68  fmadds 19, 20, 28, 18
  01b5a6c  fmadds 23, 20, 24, 23
  01b5a70  stfs 22, 16(27)
  01b5a74  stfs 21, 20(27)
  01b5a78  stfs 19, 24(27)
  01b5a7c  stfs 23, 28(27)
  01b5a80  lwz 7, 0(28)
  01b5a84  ori 27, 6, 0
  01b5a88  cmpw 4, 7
  01b5a8c  bt 0, 0x1b5a08
  01b5a90  lwz 5, 160(30)
  01b5a94  li 4, 1
  01b5a98  slwi 5, 5, 2
  01b5a9c  ori 28, 30, 0
  01b5aa0  extsw 5, 5
  01b5aa4  lwzx 5, 29, 5
  01b5aa8  ori 29, 3, 0
  01b5aac  stw 5, 196(30)
  01b5ab0  lfs 1, 16(5)
  01b5ab4  stfs 1, 16(31)
  01b5ab8  lfs 1, 20(5)
  01b5abc  stfs 1, 20(31)
  01b5ac0  lfs 1, 24(5)
  01b5ac4  stfs 1, 24(31)
  01b5ac8  lfs 1, 28(5)
  01b5acc  stw 4, 212(30)
  01b5ad0  stfs 1, 28(31)
  01b5ad4  stb 4, 32(31)
  01b5ad8  bl 0xfcc68
  01b5adc  nop
  01b5ae0  addic 29, 29, 1
  01b5ae4  stfs 1, 240(28)
  01b5ae8  cmpwi 29, 4
  01b5aec  addic 28, 28, 4
  01b5af0  bt 0, 0x1b5ad8
  01b5af4  li 3, -1
  01b5af8  lwz 4, 156(30)
  01b5afc  ori 4, 4, 1
  01b5b00  stw 3, 200(30)
  01b5b04  stw 3, 204(30)
  01b5b08  stw 4, 156(30)
  01b5b0c  b 0x1b6660
  01b5b10  lwz 3, 184(30)
  01b5b14  cmpwi 3, 0
  01b5b18  bt 2, 0x1b6660
  01b5b1c  lwz 4, 160(30)
  01b5b20  lis 3, 165
  01b5b24  slwi 4, 4, 2
  01b5b28  addic 3, 3, 7136
  01b5b2c  extsw 4, 4
  01b5b30  lwzx 3, 3, 4
  01b5b34  stw 3, 196(30)
  01b5b38  lwz 4, 0(3)
  01b5b3c  slwi 4, 4, 4
  01b5b40  addc 3, 3, 4
  01b5b44  clrldi 3, 3, 32
  01b5b48  lfs 1, -16(3)
  01b5b4c  stfs 1, 16(31)
  01b5b50  lfs 2, -12(3)
  01b5b54  stfs 2, 20(31)
  01b5b58  lfs 3, -8(3)
  01b5b5c  stfs 3, 24(31)
  01b5b60  lwz 4, 196(30)
  01b5b64  lfs 3, -4(3)
  01b5b68  stfs 3, 28(31)
  01b5b6c  lwz 3, 0(4)
  01b5b70  slwi 3, 3, 4
  01b5b74  extsw 5, 3
  01b5b78  addc 3, 4, 3
  01b5b7c  clrldi 3, 3, 32
  01b5b80  lfsx 3, 4, 5
  01b5b84  fsubs 1, 3, 1
  01b5b88  lfs 3, 4(3)
  01b5b8c  lis 3, 27
  01b5b90  fsubs 2, 3, 2
  01b5b94  addi 3, 3, 22544
  01b5b98  lis 4, 115
  01b5b9c  addic 4, 4, 22784
  01b5ba0  fabs 3, 1
  01b5ba4  stfs 1, 236(1)
  01b5ba8  fabs 5, 2
  01b5bac  stfs 2, 240(1)
  01b5bb0  fsubs 1, 3, 5
  01b5bb4  stfs 1, 244(1)
  01b5bb8  lwz 5, 236(1)
  01b5bbc  lfs 4, 0(3)
  01b5bc0  lfs 1, 236(1)
  01b5bc4  lwz 3, 240(1)
  01b5bc8  lfs 2, 240(1)
  01b5bcc  lwz 6, 244(1)
  01b5bd0  rlwinm 3, 3, 3, 29, 29
  01b5bd4  fabs 6, 2
  01b5bd8  lfs 2, 244(1)
  01b5bdc  fabs 1, 1
  01b5be0  rlwimi 3, 6, 2, 30, 30
  01b5be4  fsub 7, 2, 4
  01b5be8  rlwimi 3, 5, 4, 28, 28
  01b5bec  fsub 8, 2, 4
  01b5bf0  ori 5, 4, 0
  01b5bf4  rlwimi 5, 3, 2, 26, 28
  01b5bf8  slwi 3, 3, 2
  01b5bfc  clrldi 5, 5, 32
  01b5c00  fsel 5, 7, 1, 5
  01b5c04  lfsx 1, 4, 3
  01b5c08  lfs 2, 4(5)
  01b5c0c  fsel 3, 8, 6, 3
  01b5c10  fcmpu 0, 5, 4
  01b5c14  bt 1, 0x1b5c1c
  01b5c18  b 0x1b5d3c
  01b5c1c  fsubs 6, 3, 5
  01b5c20  fadds 3, 3, 5
  01b5c24  addic 3, 1, 16
  01b5c28  li 7, 2
  01b5c2c  addic 4, 3, 264
  01b5c30  addic 5, 3, 280
  01b5c34  mtctr 7
  01b5c38  fdivs 3, 6, 3
  01b5c3c  fmuls 5, 3, 3
  01b5c40  stfs 3, 292(1)
  01b5c44  stfs 3, 284(1)
  01b5c48  stfs 3, 288(1)
  01b5c4c  stfs 3, 280(1)
  01b5c50  lfs 7, 292(1)
  01b5c54  lfs 8, 284(1)
  01b5c58  lfs 9, 288(1)
  01b5c5c  fmuls 6, 5, 5
  01b5c60  fmuls 8, 8, 5
  01b5c64  fmuls 7, 7, 6
  01b5c68  fmuls 3, 6, 6
  01b5c6c  fmuls 6, 9, 6
  01b5c70  stfs 8, 284(1)
  01b5c74  fmuls 5, 7, 5
  01b5c78  stfs 6, 288(1)
  01b5c7c  stfs 5, 292(1)
  01b5c80  lfs 5, 264(3)
  01b5c84  fmuls 5, 5, 3
  01b5c88  stfs 5, 280(3)
  01b5c8c  lfs 5, 4(4)
  01b5c90  addic 3, 3, 8
  01b5c94  addic 4, 4, 8
  01b5c98  fmuls 5, 5, 3
  01b5c9c  stfs 5, 4(5)
  01b5ca0  addic 5, 5, 8
  01b5ca4  bdnz 0x1b5c80
  01b5ca8  li 5, 4
  01b5cac  ori 3, 1, 0
  01b5cb0  mtctr 5
  01b5cb4  lis 4, 115
  01b5cb8  addic 5, 3, 280
  01b5cbc  addic 4, 4, 22752
  01b5cc0  ori 6, 5, 0
  01b5cc4  lfs 3, 280(3)
  01b5cc8  lfs 5, 0(4)
  01b5ccc  fmuls 3, 3, 5
  01b5cd0  lfs 5, 4(4)
  01b5cd4  addic 4, 4, 8
  01b5cd8  stfs 3, 280(3)
  01b5cdc  lfs 3, 4(5)
  01b5ce0  addic 3, 3, 8
  01b5ce4  fmuls 3, 3, 5
  01b5ce8  stfs 3, 4(5)
  01b5cec  addic 5, 5, 8
  01b5cf0  bdnz 0x1b5cc4
  01b5cf4  ori 3, 1, 0
  01b5cf8  mtctr 7
  01b5cfc  lfs 3, 280(3)
  01b5d00  fadds 3, 4, 3
  01b5d04  lfs 4, 4(6)
  01b5d08  addic 3, 3, 16
  01b5d0c  lfs 5, 8(6)
  01b5d10  lfs 6, 12(6)
  01b5d14  addic 6, 6, 16
  01b5d18  fadds 3, 3, 4
  01b5d1c  fadds 4, 3, 5
  01b5d20  fadds 4, 4, 6
  01b5d24  bdnz 0x1b5cfc
  01b5d28  lis 3, 27
  01b5d2c  addi 3, 3, 22544
  01b5d30  lfs 3, 4(3)
  01b5d34  fadds 4, 4, 3
  01b5d38  fmadds 4, 4, 1, 2
  01b5d3c  li 3, 5
  01b5d40  stfs 4, 72(31)
  01b5d44  stb 3, 32(31)
  01b5d48  b 0x1b6660
  01b5d4c  lwz 4, 212(30)
  01b5d50  lis 3, 151
  01b5d54  lwz 5, 196(30)
  01b5d58  slwi 4, 4, 4
  01b5d5c  addic 3, 3, -25376
  01b5d60  addc 4, 5, 4
  01b5d64  clrldi 4, 4, 32
  01b5d68  lwz 3, 764(3)
  01b5d6c  cmpw 3, 31
  01b5d70  lfs 28, 16(4)
  01b5d74  lfs 27, 20(4)
  01b5d78  lfs 26, 24(4)
  01b5d7c  lfs 25, 28(4)
  01b5d80  bf 2, 0x1b5e64
  01b5d84  ori 3, 31, 0
  01b5d88  lwz 4, 204(30)
  01b5d8c  extsw 4, 4
  01b5d90  bl 0x15cc7c
  01b5d94  nop
  01b5d98  cmpwi 3, 0
  01b5d9c  bf 2, 0x1b5db8
  01b5da0  li 3, 1
  01b5da4  li 4, 4
  01b5da8  ori 5, 31, 0
  01b5dac  bl 0x15d12c
  01b5db0  nop
  01b5db4  stw 3, 204(30)
  01b5db8  ori 3, 31, 0
  01b5dbc  lwz 4, 200(30)
  01b5dc0  extsw 4, 4
  01b5dc4  bl 0x15cc7c
  01b5dc8  nop
  01b5dcc  cmpwi 3, 0
  01b5dd0  bt 2, 0x1b5e28
  01b5dd4  lwz 3, 200(30)
  01b5dd8  cmpwi 3, -1
  01b5ddc  bt 2, 0x1b5e20
  01b5de0  sldi 4, 3, 7
  01b5de4  sldi 6, 3, 4
  01b5de8  lis 5, 150
  01b5dec  subc 4, 4, 6
  01b5df0  addic 5, 5, 14176
  01b5df4  extsw 4, 4
  01b5df8  addc 4, 5, 4
  01b5dfc  lwz 5, 136(4)
  01b5e00  cmpw 5, 31
  01b5e04  bf 2, 0x1b5e20
  01b5e08  lbz 4, 116(4)
  01b5e0c  cmpwi 4, 0
  01b5e10  bt 2, 0x1b5e20
  01b5e14  extsw 3, 3
  01b5e18  bl 0x15cdb0
  01b5e1c  nop
  01b5e20  li 3, -1
  01b5e24  stw 3, 200(30)
  01b5e28  lis 3, 27
  01b5e2c  lis 4, 117
  01b5e30  addi 5, 3, 22544
  01b5e34  lis 6, 114
  01b5e38  lis 7, 114
  01b5e3c  addic 3, 30, 208
  01b5e40  lfs 1, 32460(4)
  01b5e44  lfs 2, 8(5)
  01b5e48  lfs 3, -3052(6)
  01b5e4c  lfs 4, -3048(7)
  01b5e50  fmuls 1, 1, 3
  01b5e54  fmuls 2, 4, 2
  01b5e58  bl 0x109af0
  01b5e5c  nop
  01b5e60  b 0x1b5f30
  01b5e64  ori 3, 31, 0
  01b5e68  lwz 4, 200(30)
  01b5e6c  extsw 4, 4
  01b5e70  bl 0x15cc7c
  01b5e74  nop
  01b5e78  cmpwi 3, 0
  01b5e7c  bf 2, 0x1b5e98
  01b5e80  li 3, 0
  01b5e84  li 4, 4
  01b5e88  ori 5, 31, 0
  01b5e8c  bl 0x15d12c
  01b5e90  nop
  01b5e94  stw 3, 200(30)
  01b5e98  ori 3, 31, 0
  01b5e9c  lwz 4, 204(30)
  01b5ea0  extsw 4, 4
  01b5ea4  bl 0x15cc7c
  01b5ea8  nop
  01b5eac  cmpwi 3, 0
  01b5eb0  bt 2, 0x1b5f08
  01b5eb4  lwz 3, 204(30)
  01b5eb8  cmpwi 3, -1
  01b5ebc  bt 2, 0x1b5f00
  01b5ec0  sldi 4, 3, 7
  01b5ec4  sldi 6, 3, 4
  01b5ec8  lis 5, 150
  01b5ecc  subc 4, 4, 6
  01b5ed0  addic 5, 5, 14176
  01b5ed4  extsw 4, 4
  01b5ed8  addc 4, 5, 4
  01b5edc  lwz 5, 136(4)
  01b5ee0  cmpw 5, 31
  01b5ee4  bf 2, 0x1b5f00
  01b5ee8  lbz 4, 116(4)
  01b5eec  cmpwi 4, 0
  01b5ef0  bt 2, 0x1b5f00
  01b5ef4  extsw 3, 3
  01b5ef8  bl 0x15cdb0
  01b5efc  nop
  01b5f00  li 3, -1
  01b5f04  stw 3, 204(30)
  01b5f08  lis 3, 27
  01b5f0c  lis 5, 114
  01b5f10  addi 4, 3, 22544
  01b5f14  addic 3, 30, 208
  01b5f18  lfs 3, 8(4)
  01b5f1c  lfs 1, 0(4)
  01b5f20  lfs 4, -3048(5)
  01b5f24  fmuls 2, 4, 3
  01b5f28  bl 0x109af0
  01b5f2c  nop
  01b5f30  lfs 1, 16(31)
  01b5f34  lfs 2, 20(31)
  01b5f38  addic 3, 1, 144
  01b5f3c  fsubs 1, 28, 1
  01b5f40  lfs 3, 24(31)
  01b5f44  fsubs 2, 27, 2
  01b5f48  stfs 25, 156(1)
  01b5f4c  fsubs 3, 26, 3
  01b5f50  stfs 1, 144(1)
  01b5f54  stfs 2, 148(1)
  01b5f58  stfs 3, 152(1)
  01b5f5c  lfs 1, 208(30)
  01b5f60  bl 0x110488
  01b5f64  nop
  01b5f68  lfs 25, 16(31)
  01b5f6c  lfs 2, 24(31)
  01b5f70  lfs 3, 144(1)
  01b5f74  lfs 1, 152(1)
  01b5f78  fadds 25, 25, 3
  01b5f7c  fadds 2, 2, 1
  01b5f80  lfs 5, 20(31)
  01b5f84  lfs 4, 148(1)
  01b5f88  fadds 1, 5, 4
  01b5f8c  stfs 25, 16(31)
  01b5f90  stfs 2, 24(31)
  01b5f94  lwz 4, 196(30)
  01b5f98  stfs 1, 20(31)
  01b5f9c  lwz 3, 212(30)
  01b5fa0  lwz 5, 0(4)
  01b5fa4  addic 5, 5, -1
  01b5fa8  cmpw 3, 5
  01b5fac  bf 0, 0x1b601c
  01b5fb0  fsubs 1, 1, 27
  01b5fb4  fsubs 3, 25, 28
  01b5fb8  fsubs 2, 2, 26
  01b5fbc  lis 5, 117
  01b5fc0  lis 6, 114
  01b5fc4  fmuls 1, 1, 1
  01b5fc8  fmadds 1, 3, 3, 1
  01b5fcc  fmadds 1, 2, 2, 1
  01b5fd0  lfs 2, 32460(5)
  01b5fd4  lfs 3, -3052(6)
  01b5fd8  fmuls 2, 2, 3
  01b5fdc  fsqrts 1, 1
  01b5fe0  fcmpu 0, 1, 2
  01b5fe4  cror 6, 1, 2
  01b5fe8  bt 6, 0x1b6128
  01b5fec  addic 3, 3, 1
  01b5ff0  lis 5, 16916
  01b5ff4  slwi 6, 3, 4
  01b5ff8  addc 4, 4, 6
  01b5ffc  stw 3, 212(30)
  01b6000  clrldi 3, 4, 32
  01b6004  lwz 3, 28(3)
  01b6008  cmpw 3, 5
  01b600c  bf 2, 0x1b6128
  01b6010  li 3, 1
  01b6014  stw 3, 192(30)
  01b6018  b 0x1b6128
  01b601c  fmuls 1, 4, 4
  01b6020  lis 3, 27
  01b6024  addi 3, 3, 22544
  01b6028  lfs 2, 12(3)
  01b602c  fmadds 1, 3, 3, 1
  01b6030  fsqrts 1, 1
  01b6034  fcmpu 0, 1, 2
  01b6038  cror 6, 1, 2
  01b603c  bt 6, 0x1b6128
  01b6040  ori 3, 31, 0
  01b6044  lwz 4, 204(30)
  01b6048  extsw 4, 4
  01b604c  bl 0x15cc7c
  01b6050  nop
  01b6054  cmpwi 3, 0
  01b6058  bt 2, 0x1b60b0
  01b605c  lwz 3, 204(30)
  01b6060  cmpwi 3, -1
  01b6064  bt 2, 0x1b60a8
  01b6068  sldi 4, 3, 7
  01b606c  sldi 6, 3, 4
  01b6070  lis 5, 150
  01b6074  subc 4, 4, 6
  01b6078  addic 5, 5, 14176
  01b607c  extsw 4, 4
  01b6080  addc 4, 5, 4
  01b6084  lwz 5, 136(4)
  01b6088  cmpw 5, 31
  01b608c  bf 2, 0x1b60a8
  01b6090  lbz 4, 116(4)
  01b6094  cmpwi 4, 0
  01b6098  bt 2, 0x1b60a8
  01b609c  extsw 3, 3
  01b60a0  bl 0x15cdb0
  01b60a4  nop
  01b60a8  li 3, -1
  01b60ac  stw 3, 204(30)
  01b60b0  ori 3, 31, 0
  01b60b4  lwz 4, 200(30)
  01b60b8  extsw 4, 4
  01b60bc  bl 0x15cc7c
  01b60c0  nop
  01b60c4  cmpwi 3, 0
  01b60c8  bt 2, 0x1b6120
  01b60cc  lwz 3, 200(30)
  01b60d0  cmpwi 3, -1
  01b60d4  bt 2, 0x1b6118
  01b60d8  sldi 4, 3, 7
  01b60dc  sldi 6, 3, 4
  01b60e0  lis 5, 150
  01b60e4  subc 4, 4, 6
  01b60e8  addic 5, 5, 14176
  01b60ec  extsw 4, 4
  01b60f0  addc 4, 5, 4
  01b60f4  lwz 5, 136(4)
  01b60f8  cmpw 5, 31
  01b60fc  bf 2, 0x1b6118
  01b6100  lbz 4, 116(4)
  01b6104  cmpwi 4, 0
  01b6108  bt 2, 0x1b6118
  01b610c  extsw 3, 3
  01b6110  bl 0x15cdb0
  01b6114  nop
  01b6118  li 3, -1
  01b611c  stw 3, 200(30)
  01b6120  li 3, 3
  01b6124  stb 3, 32(31)
  01b6128  lfs 1, 16(31)
  01b612c  lfs 2, 20(31)
  01b6130  lis 3, 27
  01b6134  fsubs 1, 28, 1
  01b6138  fsubs 2, 27, 2
  01b613c  addi 4, 3, 22544
  01b6140  lis 5, 115
  01b6144  addic 3, 31, 72
  01b6148  addic 5, 5, 22784
  01b614c  fabs 3, 1
  01b6150  fabs 4, 2
  01b6154  stfs 1, 224(1)
  01b6158  stfs 2, 228(1)
  01b615c  fsubs 1, 3, 4
  01b6160  stfs 1, 232(1)
  01b6164  lwz 6, 224(1)
  01b6168  lfs 2, 0(4)
  01b616c  lfs 1, 224(1)
  01b6170  lwz 4, 228(1)
  01b6174  lfs 5, 228(1)
  01b6178  fabs 1, 1
  01b617c  lwz 7, 232(1)
  01b6180  rlwinm 4, 4, 3, 29, 29
  01b6184  lfs 6, 232(1)
  01b6188  fabs 5, 5
  01b618c  rlwimi 4, 7, 2, 30, 30
  01b6190  fsub 7, 6, 2
  01b6194  rlwimi 4, 6, 4, 28, 28
  01b6198  fsub 6, 6, 2
  01b619c  ori 6, 5, 0
  01b61a0  rlwimi 6, 4, 2, 26, 28
  01b61a4  slwi 4, 4, 2
  01b61a8  clrldi 6, 6, 32
  01b61ac  fsel 4, 7, 1, 4
  01b61b0  lfsx 28, 5, 4
  01b61b4  lfs 1, 4(6)
  01b61b8  fsel 3, 6, 5, 3
  01b61bc  fcmpu 0, 4, 2
  01b61c0  bt 1, 0x1b61c8
  01b61c4  b 0x1b62e8
  01b61c8  fsubs 5, 3, 4
  01b61cc  fadds 3, 3, 4
  01b61d0  addic 4, 1, 16
  01b61d4  li 7, 2
  01b61d8  addic 6, 4, 248
  01b61dc  addic 5, 4, 232
  01b61e0  mtctr 7
  01b61e4  fdivs 3, 5, 3
  01b61e8  fmuls 4, 3, 3
  01b61ec  stfs 3, 260(1)
  01b61f0  stfs 3, 252(1)
  01b61f4  stfs 3, 256(1)
  01b61f8  stfs 3, 248(1)
  01b61fc  lfs 6, 260(1)
  01b6200  lfs 7, 252(1)
  01b6204  lfs 8, 256(1)
  01b6208  fmuls 5, 4, 4
  01b620c  fmuls 7, 7, 4
  01b6210  fmuls 6, 6, 5
  01b6214  fmuls 3, 5, 5
  01b6218  fmuls 5, 8, 5
  01b621c  stfs 7, 252(1)
  01b6220  fmuls 4, 6, 4
  01b6224  stfs 5, 256(1)
  01b6228  stfs 4, 260(1)
  01b622c  lfs 4, 232(4)
  01b6230  fmuls 4, 4, 3
  01b6234  stfs 4, 248(4)
  01b6238  lfs 4, 4(5)
  01b623c  addic 5, 5, 8
  01b6240  fmuls 4, 4, 3
  01b6244  addic 4, 4, 8
  01b6248  stfs 4, 4(6)
  01b624c  addic 6, 6, 8
  01b6250  bdnz 0x1b622c
  01b6254  li 6, 4
  01b6258  ori 4, 1, 0
  01b625c  mtctr 6
  01b6260  lis 5, 115
  01b6264  addic 6, 4, 248
  01b6268  addic 5, 5, 22752
  01b626c  ori 8, 6, 0
  01b6270  lfs 3, 248(4)
  01b6274  lfs 4, 0(5)
  01b6278  fmuls 3, 3, 4
  01b627c  lfs 4, 4(5)
  01b6280  addic 5, 5, 8
  01b6284  stfs 3, 248(4)
  01b6288  lfs 3, 4(6)
  01b628c  addic 4, 4, 8
  01b6290  fmuls 3, 3, 4
  01b6294  stfs 3, 4(6)
  01b6298  addic 6, 6, 8
  01b629c  bdnz 0x1b6270
  01b62a0  ori 4, 1, 0
  01b62a4  mtctr 7
  01b62a8  lfs 3, 248(4)
  01b62ac  fadds 2, 2, 3
  01b62b0  addic 4, 4, 16
  01b62b4  lfs 3, 4(8)
  01b62b8  lfs 4, 8(8)
  01b62bc  lfs 5, 12(8)
  01b62c0  addic 8, 8, 16
  01b62c4  fadds 2, 2, 3
  01b62c8  fadds 2, 2, 4
  01b62cc  fadds 2, 2, 5
  01b62d0  bdnz 0x1b62a8
  01b62d4  lis 4, 27
  01b62d8  addi 4, 4, 22544
  01b62dc  lfs 3, 4(4)
  01b62e0  fadds 2, 2, 3
  01b62e4  fmadds 2, 2, 28, 1
  01b62e8  lis 4, 27
  01b62ec  lis 5, 117
  01b62f0  addi 4, 4, 22544
  01b62f4  lis 6, 114
  01b62f8  lfs 1, 16(4)
  01b62fc  lfs 3, 32464(5)
  01b6300  lis 4, 117
  01b6304  lfs 4, -3048(6)
  01b6308  addic 5, 30, 216
  01b630c  fmuls 3, 3, 1
  01b6310  lis 6, 114
  01b6314  lfs 5, 32468(4)
  01b6318  fmuls 5, 5, 1
  01b631c  lfs 6, -3052(6)
  01b6320  fmr 1, 2
  01b6324  fmuls 3, 3, 4
  01b6328  fmuls 4, 5, 6
  01b632c  fmr 2, 3
  01b6330  bl 0x10a2e0
  01b6334  nop
  01b6338  lwz 3, 192(30)
  01b633c  cmpwi 3, 0
  01b6340  bt 2, 0x1b637c
  01b6344  lis 3, 27
  01b6348  lis 5, 117
  01b634c  addi 3, 3, 22544
  01b6350  li 4, 0
  01b6354  lfs 28, 20(3)
  01b6358  lfs 1, 32480(5)
  01b635c  fmr 2, 28
  01b6360  bl 0x2f3d8
  01b6364  nop
  01b6368  lis 3, 117
  01b636c  fmr 2, 28
  01b6370  lfs 1, 32484(3)
  01b6374  bl 0x2e354
  01b6378  nop
  01b637c  lis 3, 165
  01b6380  addic 4, 3, 7136
  01b6384  lwz 3, 168(30)
  01b6388  lwz 5, 172(30)
  01b638c  slwi 3, 3, 2
  01b6390  slwi 6, 5, 2
  01b6394  extsw 3, 3
  01b6398  extsw 6, 6
  01b639c  li 5, 0
  01b63a0  lwzx 3, 4, 3
  01b63a4  lwzx 4, 4, 6
  01b63a8  lwz 6, 0(3)
  01b63ac  cmpwi 6, 0
  01b63b0  bf 1, 0x1b6660
  01b63b4  ori 6, 3, 0
  01b63b8  lfs 1, 208(31)
  01b63bc  lfs 2, 20(4)
  01b63c0  lfs 3, 192(31)
  01b63c4  fmuls 1, 1, 2
  01b63c8  lfs 4, 16(4)
  01b63cc  lfs 5, 212(31)
  01b63d0  lfs 6, 224(31)
  01b63d4  fmuls 5, 5, 2
  01b63d8  lfs 7, 24(4)
  01b63dc  lfs 8, 196(31)
  01b63e0  lfs 9, 216(31)
  01b63e4  fmuls 9, 9, 2
  01b63e8  addic 5, 5, 1
  01b63ec  fmadds 1, 3, 4, 1
  01b63f0  lfs 3, 228(31)
  01b63f4  lfs 10, 220(31)
  01b63f8  fmadds 5, 8, 4, 5
  01b63fc  lfs 8, 16(31)
  01b6400  fmuls 2, 10, 2
  01b6404  lfs 10, 200(31)
  01b6408  lfs 11, 204(31)
  01b640c  fmadds 1, 6, 7, 1
  01b6410  fmadds 6, 10, 4, 9
  01b6414  lfs 9, 232(31)
  01b6418  fmadds 3, 3, 7, 5
  01b641c  fmadds 2, 11, 4, 2
  01b6420  lfs 5, 236(31)
  01b6424  lfs 4, 28(4)
  01b6428  addic 4, 4, 16
  01b642c  fadds 1, 1, 8
  01b6430  fmadds 6, 9, 7, 6
  01b6434  fmadds 2, 5, 7, 2
  01b6438  stfs 1, 16(6)
  01b643c  lfs 1, 20(31)
  01b6440  fadds 2, 2, 4
  01b6444  fadds 1, 3, 1
  01b6448  stfs 1, 20(6)
  01b644c  lfs 1, 24(31)
  01b6450  stfs 2, 28(6)
  01b6454  fadds 1, 6, 1
  01b6458  stfs 1, 24(6)
  01b645c  lwz 7, 0(3)
  01b6460  addic 6, 6, 16
  01b6464  cmpw 5, 7
  01b6468  bt 0, 0x1b63b8
  01b646c  b 0x1b6660
  01b6470  lwz 3, 120(31)
  01b6474  lwz 29, 180(3)
  01b6478  extsh 29, 29
  01b647c  cmpwi 29, 0
  01b6480  bt 0, 0x1b6500
  01b6484  lis 3, 165
  01b6488  lwz 3, -28288(3)
  01b648c  cmpw 29, 3
  01b6490  bt 1, 0x1b6500
  01b6494  lis 3, 165
  01b6498  sldi 4, 29, 2
  01b649c  addic 3, 3, -28284
  01b64a0  lwzx 29, 3, 4
  01b64a4  cmpwi 29, 0
  01b64a8  bt 2, 0x1b6500
  01b64ac  lis 3, 164
  01b64b0  lhz 4, 0(29)
  01b64b4  rlwinm 4, 4, 8, 9, 23
  01b64b8  lwz 3, -28512(3)
  01b64bc  addc 3, 3, 4
  01b64c0  clrldi 3, 3, 32
  01b64c4  lbz 4, 32(3)
  01b64c8  cmpwi 4, 128
  01b64cc  bf 0, 0x1b64ec
  01b64d0  lhz 4, 166(3)
  01b64d4  cmpwi 4, 1246
  01b64d8  bf 2, 0x1b64ec
  01b64dc  bl 0x227994
  01b64e0  nop
  01b64e4  cmpwi 3, 0
  01b64e8  bt 2, 0x1b6660
  01b64ec  lhz 3, 0(29)
  01b64f0  addic 29, 29, 2
  01b64f4  extsh 3, 3
  01b64f8  cmpwi 3, 0
  01b64fc  bf 0, 0x1b64ac
  01b6500  lwz 3, 176(30)
  01b6504  cmpwi 3, 0
  01b6508  bt 2, 0x1b6520
  01b650c  li 3, 0
  01b6510  li 4, 4
  01b6514  stw 3, 208(30)
  01b6518  stb 4, 32(31)
  01b651c  b 0x1b6660
  01b6520  li 3, 5
  01b6524  stb 3, 32(31)
  01b6528  b 0x1b6660
  01b652c  lis 3, 27
  01b6530  lis 7, 114
  01b6534  addi 29, 3, 22544
  01b6538  lwz 3, 212(30)
  01b653c  lwz 4, 196(30)
  01b6540  addic 5, 30, 208
  01b6544  slwi 3, 3, 4
  01b6548  addc 3, 4, 3
  01b654c  lis 4, 114
  01b6550  lfs 1, 8(29)
  01b6554  clrldi 6, 3, 32
  01b6558  addic 3, 31, 24
  01b655c  lfs 3, -3048(4)
  01b6560  lfs 28, 24(6)
  01b6564  lfs 4, -3052(7)
  01b6568  fmr 2, 3
  01b656c  fadds 1, 28, 1
  01b6570  bl 0x109c30
  01b6574  nop
  01b6578  lfs 1, 24(29)
  01b657c  lfs 2, 24(31)
  01b6580  fadds 1, 28, 1
  01b6584  fcmpu 0, 2, 1
  01b6588  bt 0, 0x1b6660
  01b658c  li 3, 5
  01b6590  stb 3, 32(31)
  01b6594  b 0x1b6660
  01b6598  lwz 3, 212(30)
  01b659c  lwz 4, 196(30)
  01b65a0  slwi 3, 3, 4
  01b65a4  lwz 5, 176(30)
  01b65a8  addc 3, 4, 3
  01b65ac  cmpwi 5, 0
  01b65b0  clrldi 3, 3, 32
  01b65b4  lfs 1, 24(3)
  01b65b8  bt 2, 0x1b6660
  01b65bc  lis 3, 151
  01b65c0  lwz 4, 24(31)
  01b65c4  addic 3, 3, -25376
  01b65c8  srawi 5, 4, 31
  01b65cc  srwi 6, 5, 1
  01b65d0  lwz 3, 136(3)
  01b65d4  xor 4, 6, 4
  01b65d8  srawi 7, 3, 31
  01b65dc  subc 4, 4, 5
  01b65e0  srwi 6, 7, 1
  01b65e4  xor 3, 6, 3
  01b65e8  subc 3, 3, 7
  01b65ec  cmpw 3, 4
  01b65f0  bf 0, 0x1b662c
  01b65f4  lis 3, 27
  01b65f8  lis 6, 114
  01b65fc  addi 4, 3, 22544
  01b6600  lis 7, 114
  01b6604  addic 5, 30, 208
  01b6608  addic 3, 31, 24
  01b660c  lfs 5, 28(4)
  01b6610  lfs 3, -3048(6)
  01b6614  lfs 4, -3052(7)
  01b6618  fadds 1, 1, 5
  01b661c  fmr 2, 3
  01b6620  bl 0x109c30
  01b6624  nop
  01b6628  b 0x1b6660
  01b662c  lis 3, 27
  01b6630  lis 6, 114
  01b6634  addi 4, 3, 22544
  01b6638  lis 7, 114
  01b663c  addic 5, 30, 208
  01b6640  addic 3, 31, 24
  01b6644  lfs 5, 32(4)
  01b6648  lfs 3, -3048(6)
  01b664c  lfs 4, -3052(7)
  01b6650  fadds 1, 1, 5
  01b6654  fmr 2, 3
  01b6658  bl 0x109c30
  01b665c  nop
  01b6660  lis 3, 27
  01b6664  lfs 1, 24(31)
  01b6668  addi 29, 3, 22544
  01b666c  lis 3, 114
  01b6670  stfs 1, 228(30)
  01b6674  lfs 3, 36(29)
  01b6678  lfs 4, 40(29)
  01b667c  lfs 6, 44(29)
  01b6680  lfs 5, -3052(3)
  01b6684  lfs 1, 224(30)
  01b6688  fmuls 2, 5, 3
  01b668c  fmuls 28, 5, 4
  01b6690  fmuls 27, 5, 6
  01b6694  bl 0x502578
  01b6698  nop
  01b669c  stfs 1, 224(30)
  01b66a0  lfs 2, 48(29)
  01b66a4  lfs 3, 52(29)
  01b66a8  fsubs 2, 2, 1
  01b66ac  fsubs 3, 3, 1
  01b66b0  addic 4, 30, 232
  01b66b4  addic 5, 30, 236
  01b66b8  ori 3, 31, 0
  01b66bc  fsub 4, 1, 2
  01b66c0  fsel 1, 4, 2, 1
  01b66c4  lfs 2, 56(29)
  01b66c8  lfs 4, 60(29)
  01b66cc  fsub 5, 3, 1
  01b66d0  fsel 1, 5, 3, 1
  01b66d4  lfs 3, 64(29)
  01b66d8  lfs 5, 68(29)
  01b66dc  lfs 6, 24(31)
  01b66e0  lfs 8, 72(29)
  01b66e4  fmuls 7, 1, 1
  01b66e8  fmuls 9, 7, 1
  01b66ec  fmuls 10, 7, 9
  01b66f0  fmadds 1, 9, 2, 1
  01b66f4  fmuls 2, 7, 10
  01b66f8  fmadds 1, 10, 4, 1
  01b66fc  fmuls 4, 7, 2
  01b6700  fmadds 1, 2, 3, 1
  01b6704  fmr 2, 28
  01b6708  fmr 3, 27
  01b670c  fmadds 1, 4, 5, 1
  01b6710  fmadds 1, 1, 8, 6
  01b6714  stfs 1, 24(31)
  01b6718  lfs 1, 76(29)
  01b671c  bl 0x116b70
  01b6720  nop
  01b6724  lfs 1, 16(31)
  01b6728  addic 3, 30, 96
  01b672c  lfs 2, 20(31)
  01b6730  addic 4, 1, 128
  01b6734  fsubs 1, 1, 31
  01b6738  lfs 3, 24(31)
  01b673c  fsubs 2, 2, 30
  01b6740  lfs 4, 28(31)
  01b6744  fsubs 3, 3, 29
  01b6748  addic 5, 1, 112
  01b674c  stfs 4, 140(1)
  01b6750  addic 6, 31, 64
  01b6754  stfs 1, 128(1)
  01b6758  stfs 2, 132(1)
  01b675c  stfs 3, 136(1)
  01b6760  bl 0x112900
  01b6764  nop
  01b6768  ld 0, 496(1)
  01b676c  mtlr 0
  01b6770  lfd 17, 360(1)
  01b6774  lfd 18, 368(1)
  01b6778  lfd 19, 376(1)
  01b677c  lfd 20, 384(1)
  01b6780  lfd 21, 392(1)
  01b6784  lfd 22, 400(1)
  01b6788  lfd 23, 408(1)
  01b678c  lfd 24, 416(1)
  01b6790  lfd 25, 424(1)
  01b6794  lfd 26, 432(1)
  01b6798  lfd 27, 440(1)
  01b679c  lfd 28, 448(1)
  01b67a0  lfd 29, 456(1)
  01b67a4  lfd 30, 464(1)
  01b67a8  lfd 31, 472(1)
  01b67ac  ld 27, 320(1)
  01b67b0  ld 28, 328(1)
  01b67b4  ld 29, 336(1)
  01b67b8  ld 30, 344(1)
  01b67bc  ld 31, 352(1)
  01b67c0  addi 1, 1, 480
  01b67c4  blr
