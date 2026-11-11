# game/update/moby198.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_198:   # 0x2e5088, 0x5a0 bytes
  02e5088  stdu 1, -176(1)
  02e508c  mflr 0
  02e5090  std 0, 192(1)
  02e5094  stfd 30, 160(1)
  02e5098  stfd 31, 168(1)
  02e509c  std 30, 144(1)
  02e50a0  ori 30, 3, 0
  02e50a4  lis 4, 1
  02e50a8  std 31, 152(1)
  02e50ac  li 5, 0
  02e50b0  std 29, 136(1)
  02e50b4  std 28, 128(1)
  02e50b8  std 27, 120(1)
  02e50bc  lwz 31, 120(30)
  02e50c0  bl 0x10675c
  02e50c4  nop
  02e50c8  cmpwi 3, 0
  02e50cc  lbz 3, 32(30)
  02e50d0  lwz 4, 36(30)
  02e50d4  bt 2, 0x2e5110
  02e50d8  cmpwi 3, 2
  02e50dc  bt 2, 0x2e5110
  02e50e0  li 3, 2
  02e50e4  lis 6, 46
  02e50e8  li 5, 0
  02e50ec  addi 6, 6, 20552
  02e50f0  stb 3, 32(30)
  02e50f4  stw 5, 148(30)
  02e50f8  sth 5, 50(30)
  02e50fc  lfs 1, 0(6)
  02e5100  lfs 2, 36(4)
  02e5104  fmuls 1, 2, 1
  02e5108  stfs 1, 44(30)
  02e510c  b 0x2e51c8
  02e5110  cmpwi 3, 0
  02e5114  bt 1, 0x2e5124
  02e5118  cmpwi 3, -1
  02e511c  bf 1, 0x2e55fc
  02e5120  b 0x2e5130
  02e5124  cmpwi 3, 2
  02e5128  bf 1, 0x2e51c8
  02e512c  b 0x2e55fc
  02e5130  li 3, 1
  02e5134  li 5, 48
  02e5138  addi 6, 5, 16
  02e513c  stb 3, 32(30)
  02e5140  <unknown>
  02e5144  lwz 3, 48(31)
  02e5148  <unknown>
  02e514c  cmpwi 3, 0
  02e5150  vor 2, 2, 3
  02e5154  bt 2, 0x2e51a0
  02e5158  lis 3, 46
  02e515c  vcfsx 2, 2, 0
  02e5160  li 4, 4
  02e5164  addi 3, 3, 20552
  02e5168  vspltisw 3, -1
  02e516c  lis 5, 114
  02e5170  li 6, -3056
  02e5174  vslw 3, 3, 3
  02e5178  <unknown>
  02e517c  vspltw 4, 4, 0
  02e5180  li 3, 52
  02e5184  <unknown>
  02e5188  vaddfp 2, 2, 4
  02e518c  vmaddfp 2, 5, 2, 3
  02e5190  vctsxs 2, 2, 0
  02e5194  vspltw 2, 2, 0
  02e5198  stvewx 2, 3, 31
  02e519c  b 0x2e55fc
  02e51a0  lis 5, 46
  02e51a4  li 3, 0
  02e51a8  addi 5, 5, 20552
  02e51ac  stw 3, 148(30)
  02e51b0  sth 3, 50(30)
  02e51b4  lfs 1, 0(5)
  02e51b8  lfs 2, 36(4)
  02e51bc  fmuls 1, 2, 1
  02e51c0  stfs 1, 44(30)
  02e51c4  b 0x2e55fc
  02e51c8  addic 3, 31, 52
  02e51cc  bl 0x4fff60
  02e51d0  nop
  02e51d4  cmpwi 3, 0
  02e51d8  bt 2, 0x2e535c
  02e51dc  lwz 3, 48(31)
  02e51e0  cmpwi 3, 0
  02e51e4  bt 2, 0x2e535c
  02e51e8  lbz 3, 32(30)
  02e51ec  cmpwi 3, 1
  02e51f0  bf 2, 0x2e535c
  02e51f4  lis 3, 46
  02e51f8  vspltisw 2, -1
  02e51fc  lis 4, 114
  02e5200  addi 8, 3, 20552
  02e5204  li 3, 8
  02e5208  li 5, -3056
  02e520c  vslw 2, 2, 2
  02e5210  li 6, 4
  02e5214  ori 7, 31, 0
  02e5218  <unknown>
  02e521c  <unknown>
  02e5220  vspltw 3, 3, 0
  02e5224  li 4, 52
  02e5228  li 3, 0
  02e522c  vmaddfp 2, 4, 3, 2
  02e5230  lis 5, 164
  02e5234  vctsxs 2, 2, 0
  02e5238  vspltw 2, 2, 0
  02e523c  stvewx 2, 4, 31
  02e5240  lfs 1, 12(8)
  02e5244  lfs 2, 16(8)
  02e5248  lfs 3, 20(8)
  02e524c  lfs 4, 24(8)
  02e5250  lfs 5, 28(8)
  02e5254  lfs 6, 32(8)
  02e5258  lfs 7, 36(8)
  02e525c  lfs 8, 40(8)
  02e5260  lwz 4, 0(7)
  02e5264  cmpwi 4, 0
  02e5268  bt 0, 0x2e534c
  02e526c  slwi 4, 4, 8
  02e5270  lwz 8, -28512(5)
  02e5274  addc 4, 8, 4
  02e5278  clrldi 4, 4, 32
  02e527c  lbz 8, 32(4)
  02e5280  rlwinm 8, 8, 0, 24, 24
  02e5284  cmpwi 8, 0
  02e5288  bt 2, 0x2e534c
  02e528c  lhz 8, 166(4)
  02e5290  cmpwi 8, 199
  02e5294  bf 2, 0x2e534c
  02e5298  lfs 9, 72(30)
  02e529c  fadds 10, 9, 1
  02e52a0  fsubs 13, 2, 9
  02e52a4  fsubs 11, 2, 10
  02e52a8  fsubs 12, 3, 10
  02e52ac  fsub 31, 9, 13
  02e52b0  fsub 0, 10, 11
  02e52b4  fsel 10, 0, 11, 10
  02e52b8  fsubs 11, 3, 9
  02e52bc  fsel 9, 31, 13, 9
  02e52c0  fsub 13, 12, 10
  02e52c4  fsub 0, 11, 9
  02e52c8  fsel 10, 13, 12, 10
  02e52cc  fsel 9, 0, 11, 9
  02e52d0  fmuls 11, 10, 10
  02e52d4  fmuls 12, 11, 10
  02e52d8  fmuls 13, 11, 12
  02e52dc  fmadds 10, 12, 4, 10
  02e52e0  fmuls 12, 11, 13
  02e52e4  fmadds 10, 13, 5, 10
  02e52e8  fmuls 11, 11, 12
  02e52ec  fmadds 10, 12, 6, 10
  02e52f0  fmadds 10, 11, 7, 10
  02e52f4  fmuls 12, 9, 9
  02e52f8  lfs 13, 16(30)
  02e52fc  lfs 31, 20(30)
  02e5300  fmadds 10, 10, 8, 13
  02e5304  fmuls 0, 12, 9
  02e5308  fmuls 13, 12, 0
  02e530c  fmadds 9, 0, 4, 9
  02e5310  lfs 0, 24(30)
  02e5314  stfs 10, 16(4)
  02e5318  lwz 8, 36(4)
  02e531c  stfs 0, 24(4)
  02e5320  stfs 11, 28(4)
  02e5324  stb 6, 32(4)
  02e5328  fmuls 30, 12, 13
  02e532c  fmadds 9, 13, 5, 9
  02e5330  fmuls 10, 12, 30
  02e5334  fmadds 9, 30, 6, 9
  02e5338  fmadds 9, 10, 7, 9
  02e533c  fmadds 9, 9, 8, 31
  02e5340  stfs 9, 20(4)
  02e5344  lwz 8, 16(8)
  02e5348  stw 8, 148(4)
  02e534c  addic 3, 3, 1
  02e5350  addic 7, 7, 4
  02e5354  cmpwi 3, 10
  02e5358  bt 0, 0x2e5260
  02e535c  lis 4, 46
  02e5360  li 3, 0
  02e5364  addi 4, 4, 20552
  02e5368  lis 5, 151
  02e536c  ori 30, 3, 0
  02e5370  ori 6, 31, 0
  02e5374  lis 29, 164
  02e5378  lfs 1, 44(4)
  02e537c  addic 5, 5, -25376
  02e5380  lwz 4, 0(6)
  02e5384  cmpwi 4, 0
  02e5388  bt 0, 0x2e5420
  02e538c  slwi 4, 4, 8
  02e5390  lwz 7, -28512(29)
  02e5394  addc 4, 7, 4
  02e5398  clrldi 4, 4, 32
  02e539c  lbz 7, 32(4)
  02e53a0  cmpwi 7, 99
  02e53a4  bt 2, 0x2e5420
  02e53a8  lhz 7, 166(4)
  02e53ac  lwz 4, 120(4)
  02e53b0  cmpwi 7, 193
  02e53b4  cmpwi 1, 7, 199
  02e53b8  bf 2, 0x2e53d8
  02e53bc  lfs 4, 464(4)
  02e53c0  lfs 5, 128(5)
  02e53c4  lfs 6, 468(4)
  02e53c8  lfs 7, 132(5)
  02e53cc  lfs 2, 472(4)
  02e53d0  lfs 3, 136(5)
  02e53d4  b 0x2e53f4
  02e53d8  bf 6, 0x2e5420
  02e53dc  lfs 4, 176(4)
  02e53e0  lfs 5, 128(5)
  02e53e4  lfs 6, 180(4)
  02e53e8  lfs 7, 132(5)
  02e53ec  lfs 2, 184(4)
  02e53f0  lfs 3, 136(5)
  02e53f4  fsubs 6, 6, 7
  02e53f8  fsubs 2, 2, 3
  02e53fc  fsubs 4, 4, 5
  02e5400  fmuls 3, 6, 6
  02e5404  fmadds 3, 4, 4, 3
  02e5408  fmadds 2, 2, 2, 3
  02e540c  fsqrts 2, 2
  02e5410  fcmpu 0, 1, 2
  02e5414  cror 6, 0, 2
  02e5418  bt 6, 0x2e5420
  02e541c  fmr 1, 2
  02e5420  addic 3, 3, 1
  02e5424  addic 6, 6, 4
  02e5428  cmpwi 3, 10
  02e542c  bt 0, 0x2e5380
  02e5430  lfs 2, 56(31)
  02e5434  fcmpu 0, 1, 2
  02e5438  bt 0, 0x2e5464
  02e543c  lfs 3, 60(31)
  02e5440  fcmpu 0, 1, 3
  02e5444  cror 6, 1, 2
  02e5448  bt 6, 0x2e5584
  02e544c  lwz 3, 8324(5)
  02e5450  cmpwi 3, 23
  02e5454  bf 2, 0x2e5584
  02e5458  lwz 3, 4280(5)
  02e545c  cmpwi 3, 14
  02e5460  bf 2, 0x2e5584
  02e5464  li 3, 1
  02e5468  lwz 4, 40(31)
  02e546c  cmpwi 4, 10
  02e5470  stw 3, 44(31)
  02e5474  addic 3, 4, 1
  02e5478  stw 3, 40(31)
  02e547c  bf 1, 0x2e55fc
  02e5480  lis 4, 46
  02e5484  lfs 3, 128(5)
  02e5488  lfs 4, 132(5)
  02e548c  li 3, 99
  02e5490  addi 6, 4, 20552
  02e5494  ori 4, 30, 0
  02e5498  ori 5, 31, 0
  02e549c  lfs 1, 48(6)
  02e54a0  lwz 6, 0(5)
  02e54a4  cmpwi 6, 0
  02e54a8  bt 0, 0x2e5500
  02e54ac  slwi 6, 6, 8
  02e54b0  lwz 7, -28512(29)
  02e54b4  addc 6, 7, 6
  02e54b8  clrldi 6, 6, 32
  02e54bc  lbz 7, 188(6)
  02e54c0  cmpwi 1, 7, 1
  02e54c4  cmpwi 7, 3
  02e54c8  cror 2, 2, 6
  02e54cc  bt 2, 0x2e5500
  02e54d0  lfs 2, 20(6)
  02e54d4  lfs 5, 16(6)
  02e54d8  fsubs 2, 2, 4
  02e54dc  fsubs 5, 5, 3
  02e54e0  fmuls 2, 2, 2
  02e54e4  fmadds 2, 5, 5, 2
  02e54e8  fsqrts 2, 2
  02e54ec  fcmpu 0, 1, 2
  02e54f0  cror 6, 0, 2
  02e54f4  bt 6, 0x2e5500
  02e54f8  fmr 1, 2
  02e54fc  ori 3, 4, 0
  02e5500  addic 4, 4, 1
  02e5504  addic 5, 5, 4
  02e5508  cmpwi 4, 10
  02e550c  bt 0, 0x2e54a0
  02e5510  cmpwi 3, 99
  02e5514  bt 2, 0x2e557c
  02e5518  sldi 3, 3, 2
  02e551c  lwz 4, -28512(29)
  02e5520  extsw 28, 3
  02e5524  lis 3, 46
  02e5528  addi 3, 3, 20552
  02e552c  lwzx 5, 31, 28
  02e5530  slwi 5, 5, 8
  02e5534  lfs 1, 52(3)
  02e5538  addc 4, 4, 5
  02e553c  lfs 2, 56(3)
  02e5540  lfs 3, 64(31)
  02e5544  clrldi 4, 4, 32
  02e5548  fmuls 1, 3, 1
  02e554c  fmuls 2, 3, 2
  02e5550  lwz 27, 120(4)
  02e5554  bl 0xfcbe8
  02e5558  nop
  02e555c  stfs 1, 500(27)
  02e5560  lwzx 3, 31, 28
  02e5564  li 4, 1
  02e5568  lwz 5, -28512(29)
  02e556c  slwi 3, 3, 8
  02e5570  addc 3, 5, 3
  02e5574  clrldi 3, 3, 32
  02e5578  stb 4, 188(3)
  02e557c  stw 30, 40(31)
  02e5580  b 0x2e55fc
  02e5584  fcmpu 0, 1, 2
  02e5588  fcmpu 1, 1, 3
  02e558c  bt 1, 0x2e55ac
  02e5590  bf 4, 0x2e55fc
  02e5594  lwz 3, 8324(5)
  02e5598  cmpwi 3, 23
  02e559c  bf 2, 0x2e55fc
  02e55a0  lwz 3, 4280(5)
  02e55a4  cmpwi 3, 14
  02e55a8  bf 2, 0x2e55fc
  02e55ac  lwz 3, 44(31)
  02e55b0  cmpwi 3, 0
  02e55b4  bt 2, 0x2e55fc
  02e55b8  li 3, 2
  02e55bc  stw 30, 44(31)
  02e55c0  lwz 4, 0(31)
  02e55c4  cmpwi 4, 0
  02e55c8  bt 0, 0x2e55ec
  02e55cc  slwi 4, 4, 8
  02e55d0  lwz 5, -28512(29)
  02e55d4  addc 4, 5, 4
  02e55d8  clrldi 4, 4, 32
  02e55dc  lbz 5, 32(4)
  02e55e0  cmpwi 5, 128
  02e55e4  bf 0, 0x2e55ec
  02e55e8  stb 3, 188(4)
  02e55ec  addic 30, 30, 1
  02e55f0  addic 31, 31, 4
  02e55f4  cmpwi 30, 10
  02e55f8  bt 0, 0x2e55c0
  02e55fc  ld 0, 192(1)
  02e5600  mtlr 0
  02e5604  lfd 30, 160(1)
  02e5608  lfd 31, 168(1)
  02e560c  ld 27, 120(1)
  02e5610  ld 28, 128(1)
  02e5614  ld 29, 136(1)
  02e5618  ld 30, 144(1)
  02e561c  ld 31, 152(1)
  02e5620  addi 1, 1, 176
  02e5624  blr
