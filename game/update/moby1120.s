# game/update/moby1120.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1120_001d5168:   # 0x1d5168, 0x324 bytes
  01d5168  stdu 1, -256(1)
  01d516c  mflr 0
  01d5170  std 0, 272(1)
  01d5174  stfd 25, 200(1)
  01d5178  stfd 26, 208(1)
  01d517c  stfd 27, 216(1)
  01d5180  stfd 28, 224(1)
  01d5184  stfd 29, 232(1)
  01d5188  stfd 30, 240(1)
  01d518c  stfd 31, 248(1)
  01d5190  addi 0, 1, 144
  01d5194  stvx 31, 0, 0
  01d5198  lis 5, 149
  01d519c  lfs 1, 20(3)
  01d51a0  lis 4, 29
  01d51a4  addic 5, 5, 5056
  01d51a8  lfs 2, 24(3)
  01d51ac  addi 4, 4, 20808
  01d51b0  lfs 3, 324(5)
  01d51b4  lfs 4, 0(4)
  01d51b8  fsubs 3, 3, 1
  01d51bc  lfs 5, 320(5)
  01d51c0  fadds 2, 2, 4
  01d51c4  lfs 6, 16(3)
  01d51c8  lfs 7, 328(5)
  01d51cc  fsubs 5, 5, 6
  01d51d0  fmuls 8, 3, 3
  01d51d4  fsubs 7, 7, 2
  01d51d8  stfs 5, 112(1)
  01d51dc  stfs 3, 116(1)
  01d51e0  fmadds 8, 5, 5, 8
  01d51e4  lfs 9, 332(5)
  01d51e8  stfs 7, 120(1)
  01d51ec  stfs 9, 124(1)
  01d51f0  lfs 9, 8(4)
  01d51f4  fmadds 8, 7, 7, 8
  01d51f8  lfs 25, 4(4)
  01d51fc  fsubs 4, 2, 4
  01d5200  lfs 10, 12(4)
  01d5204  std 28, 168(1)
  01d5208  fsqrts 8, 8
  01d520c  li 5, 20
  01d5210  std 30, 184(1)
  01d5214  li 28, 0
  01d5218  lwz 30, 120(3)
  01d521c  std 31, 192(1)
  01d5220  stfs 4, 24(3)
  01d5224  addic 31, 30, 48
  01d5228  fdivs 9, 9, 8
  01d522c  fsub 11, 25, 8
  01d5230  fsub 12, 25, 8
  01d5234  fsub 31, 25, 8
  01d5238  fsub 13, 8, 25
  01d523c  fsub 0, 8, 25
  01d5240  fsub 8, 8, 25
  01d5244  fmuls 3, 3, 9
  01d5248  fmuls 5, 5, 9
  01d524c  fmuls 7, 7, 9
  01d5250  fsel 9, 11, 25, 3
  01d5254  fsel 11, 12, 25, 5
  01d5258  fsel 12, 31, 25, 7
  01d525c  fsel 3, 13, 9, 3
  01d5260  fsel 5, 0, 11, 5
  01d5264  fsel 7, 8, 12, 7
  01d5268  fmuls 8, 3, 3
  01d526c  fadds 4, 5, 6
  01d5270  fadds 1, 3, 1
  01d5274  fadds 2, 7, 2
  01d5278  fmadds 8, 5, 5, 8
  01d527c  stfs 4, 112(1)
  01d5280  stfs 1, 116(1)
  01d5284  fmadds 8, 7, 7, 8
  01d5288  stfs 2, 120(1)
  01d528c  lfs 26, 16(4)
  01d5290  <unknown>
  01d5294  lfs 27, 20(4)
  01d5298  fsqrts 8, 8
  01d529c  vspltw 31, 31, 0
  01d52a0  lfs 28, 24(4)
  01d52a4  fdivs 1, 10, 8
  01d52a8  fsub 2, 25, 8
  01d52ac  fsub 4, 25, 8
  01d52b0  fsub 6, 25, 8
  01d52b4  fsub 29, 8, 25
  01d52b8  fsub 30, 8, 25
  01d52bc  fsub 31, 8, 25
  01d52c0  fmuls 7, 7, 1
  01d52c4  fmuls 3, 3, 1
  01d52c8  fmuls 1, 5, 1
  01d52cc  fsel 2, 2, 25, 7
  01d52d0  fsel 4, 4, 25, 3
  01d52d4  fsel 5, 6, 25, 1
  01d52d8  fsel 29, 29, 2, 7
  01d52dc  std 29, 176(1)
  01d52e0  fsel 30, 30, 4, 3
  01d52e4  fsel 31, 31, 5, 1
  01d52e8  lfs 1, 16(30)
  01d52ec  lfs 2, 32(30)
  01d52f0  fadds 1, 1, 2
  01d52f4  fcmpu 0, 1, 26
  01d52f8  fcmpu 1, 1, 25
  01d52fc  stfs 1, 16(30)
  01d5300  bt 0, 0x1d5310
  01d5304  fsubs 1, 1, 26
  01d5308  stfs 1, 16(30)
  01d530c  b 0x1d531c
  01d5310  bt 5, 0x1d531c
  01d5314  fadds 1, 1, 26
  01d5318  stfs 1, 16(30)
  01d531c  addic 3, 30, 48
  01d5320  bl 0x4fff60
  01d5324  nop
  01d5328  lis 4, 114
  01d532c  li 5, -3056
  01d5330  lwz 29, 48(30)
  01d5334  cmpwi 3, 0
  01d5338  lfs 1, -3056(4)
  01d533c  <unknown>
  01d5340  bt 2, 0x1d536c
  01d5344  vspltisw 3, -1
  01d5348  fmuls 2, 1, 27
  01d534c  vslw 3, 3, 3
  01d5350  vmaddfp 2, 2, 31, 3
  01d5354  fctiwz 2, 2
  01d5358  vctsxs 2, 2, 0
  01d535c  stfd 2, 128(1)
  01d5360  lwz 29, 132(1)
  01d5364  vspltw 2, 2, 0
  01d5368  stvewx 2, 0, 31
  01d536c  fmuls 1, 1, 27
  01d5370  fctiwz 1, 1
  01d5374  stfd 1, 128(1)
  01d5378  lwz 3, 132(1)
  01d537c  subc 3, 3, 29
  01d5380  extsw 3, 3
  01d5384  bl 0x502730
  01d5388  nop
  01d538c  lis 3, 114
  01d5390  lfs 2, -3056(3)
  01d5394  fmuls 2, 2, 27
  01d5398  lis 4, 4160
  01d539c  lis 3, 16448
  01d53a0  ori 4, 4, 65535
  01d53a4  ori 3, 3, 65535
  01d53a8  fctidz 2, 2
  01d53ac  fcfid 2, 2
  01d53b0  frsp 2, 2
  01d53b4  fdivs 1, 1, 2
  01d53b8  fsubs 1, 28, 1
  01d53bc  fabs 1, 1
  01d53c0  bl 0x5027bc
  01d53c4  nop
  01d53c8  lis 4, 161
  01d53cc  ori 29, 3, 0
  01d53d0  lwz 3, 1800(4)
  01d53d4  cmpwi 3, 2
  01d53d8  bt 2, 0x1d5410
  01d53dc  lfs 1, 16(30)
  01d53e0  bl 0x502758
  01d53e4  nop
  01d53e8  clrlwi 5, 3, 24
  01d53ec  lfs 1, 64(30)
  01d53f0  addic 3, 1, 112
  01d53f4  li 10, 0
  01d53f8  ori 4, 29, 0
  01d53fc  li 6, 53
  01d5400  li 7, 1
  01d5404  li 8, 2
  01d5408  bl 0x130ed0
  01d540c  nop
  01d5410  lfs 1, 112(1)
  01d5414  lfs 2, 116(1)
  01d5418  addic 28, 28, 1
  01d541c  fadds 1, 1, 31
  01d5420  lfs 3, 120(1)
  01d5424  fadds 2, 2, 30
  01d5428  cmpwi 28, 4
  01d542c  fadds 3, 3, 29
  01d5430  addic 31, 31, 4
  01d5434  addic 30, 30, 4
  01d5438  stfs 1, 112(1)
  01d543c  stfs 2, 116(1)
  01d5440  stfs 3, 120(1)
  01d5444  bt 0, 0x1d52e8
  01d5448  li 0, 144
  01d544c  lvx 31, 1, 0
  01d5450  ld 0, 272(1)
  01d5454  mtlr 0
  01d5458  lfd 25, 200(1)
  01d545c  lfd 26, 208(1)
  01d5460  lfd 27, 216(1)
  01d5464  lfd 28, 224(1)
  01d5468  lfd 29, 232(1)
  01d546c  lfd 30, 240(1)
  01d5470  lfd 31, 248(1)
  01d5474  ld 28, 168(1)
  01d5478  ld 29, 176(1)
  01d547c  ld 30, 184(1)
  01d5480  ld 31, 192(1)
  01d5484  addi 1, 1, 256
  01d5488  blr

M1120_001d5498:   # 0x1d5498, 0x120 bytes
  01d5498  stdu 1, -160(1)
  01d549c  mflr 0
  01d54a0  std 0, 176(1)
  01d54a4  std 29, 136(1)
  01d54a8  std 31, 152(1)
  01d54ac  lwz 31, 120(3)
  01d54b0  std 30, 144(1)
  01d54b4  li 29, 0
  01d54b8  ori 30, 31, 0
  01d54bc  li 3, 255
  01d54c0  bl 0xfc620
  01d54c4  nop
  01d54c8  extsw 3, 3
  01d54cc  addic 29, 29, 1
  01d54d0  std 3, 112(1)
  01d54d4  cmpwi 29, 4
  01d54d8  lfd 1, 112(1)
  01d54dc  fcfid 1, 1
  01d54e0  frsp 1, 1
  01d54e4  stfs 1, 16(30)
  01d54e8  addic 30, 30, 4
  01d54ec  bt 0, 0x1d54bc
  01d54f0  lis 3, -16512
  01d54f4  lis 4, -16368
  01d54f8  vspltisw 4, 0
  01d54fc  lis 5, 16288
  01d5500  lis 6, 29
  01d5504  stw 3, 32(31)
  01d5508  lis 7, 114
  01d550c  stw 4, 36(31)
  01d5510  lis 3, 16416
  01d5514  addi 4, 6, 21644
  01d5518  stw 5, 40(31)
  01d551c  li 5, -3056
  01d5520  li 6, 4
  01d5524  li 8, 8
  01d5528  stw 3, 44(31)
  01d552c  li 9, 4
  01d5530  <unknown>
  01d5534  <unknown>
  01d5538  addic 3, 31, 48
  01d553c  <unknown>
  01d5540  mtctr 9
  01d5544  <unknown>
  01d5548  vspltw 6, 6, 0
  01d554c  vspltw 3, 3, 0
  01d5550  vspltw 2, 2, 0
  01d5554  vadduwm 7, 4, 3
  01d5558  vspltisw 8, -1
  01d555c  vadduwm 4, 4, 2
  01d5560  vcfsx 7, 7, 0
  01d5564  vslw 8, 8, 8
  01d5568  vaddfp 7, 7, 6
  01d556c  vmaddfp 7, 7, 5, 8
  01d5570  vctsxs 7, 7, 0
  01d5574  vspltw 7, 7, 0
  01d5578  stvewx 7, 0, 3
  01d557c  addic 3, 3, 4
  01d5580  bdnz 0x1d5554
  01d5584  lis 3, 16416
  01d5588  lis 4, 16448
  01d558c  stw 3, 64(31)
  01d5590  stw 4, 68(31)
  01d5594  stw 4, 72(31)
  01d5598  stw 3, 76(31)
  01d559c  ld 0, 176(1)
  01d55a0  mtlr 0
  01d55a4  ld 29, 136(1)
  01d55a8  ld 30, 144(1)
  01d55ac  ld 31, 152(1)
  01d55b0  addi 1, 1, 160
  01d55b4  blr

UpdateMoby_1120:   # 0x1d55c8, 0x27c bytes
  01d55c8  stdu 1, -128(1)
  01d55cc  mflr 0
  01d55d0  std 0, 144(1)
  01d55d4  lis 4, 29
  01d55d8  lis 5, 114
  01d55dc  std 31, 120(1)
  01d55e0  addi 4, 4, 21944
  01d55e4  ori 31, 3, 0
  01d55e8  lfs 3, 0(4)
  01d55ec  lfs 2, -3052(5)
  01d55f0  std 30, 112(1)
  01d55f4  lfs 1, 72(31)
  01d55f8  lwz 30, 120(31)
  01d55fc  fmuls 2, 2, 3
  01d5600  bl 0x502578
  01d5604  nop
  01d5608  lis 4, 161
  01d560c  stfs 1, 72(31)
  01d5610  lbz 3, 32(31)
  01d5614  lwz 4, 1800(4)
  01d5618  cmpwi 4, 2
  01d561c  bf 2, 0x1d5630
  01d5620  lhz 4, 52(31)
  01d5624  ori 4, 4, 65
  01d5628  sth 4, 52(31)
  01d562c  b 0x1d564c
  01d5630  lhz 4, 52(31)
  01d5634  clrlwi 5, 4, 31
  01d5638  cmpwi 5, 0
  01d563c  bt 2, 0x1d564c
  01d5640  li 5, -66
  01d5644  and 4, 4, 5
  01d5648  sth 4, 52(31)
  01d564c  cmpwi 3, 1
  01d5650  bt 1, 0x1d5668
  01d5654  cmpwi 3, -1
  01d5658  bf 1, 0x1d582c
  01d565c  cmpwi 3, 0
  01d5660  bf 1, 0x1d567c
  01d5664  b 0x1d56cc
  01d5668  cmpwi 3, 2
  01d566c  bf 1, 0x1d5740
  01d5670  cmpwi 3, 3
  01d5674  bf 1, 0x1d581c
  01d5678  b 0x1d582c
  01d567c  ori 3, 31, 0
  01d5680  bl 0x1d5498
  01d5684  lis 3, 151
  01d5688  addic 3, 3, -16027
  01d568c  lbz 3, 9(3)
  01d5690  cmpwi 3, 0
  01d5694  bt 2, 0x1d56a8
  01d5698  ori 3, 31, 0
  01d569c  bl 0xefb38
  01d56a0  nop
  01d56a4  b 0x1d582c
  01d56a8  lis 3, 29
  01d56ac  lfs 1, 24(31)
  01d56b0  addi 3, 3, 21944
  01d56b4  lfs 2, 4(3)
  01d56b8  li 3, 1
  01d56bc  fadds 1, 1, 2
  01d56c0  stb 3, 32(31)
  01d56c4  stfs 1, 24(31)
  01d56c8  b 0x1d582c
  01d56cc  ori 3, 31, 0
  01d56d0  bl 0x1d5168
  01d56d4  lis 3, 151
  01d56d8  lfs 1, 20(31)
  01d56dc  lfs 2, 16(31)
  01d56e0  addic 3, 3, -25376
  01d56e4  lfs 3, 132(3)
  01d56e8  lfs 4, 128(3)
  01d56ec  fsubs 1, 1, 3
  01d56f0  fsubs 2, 2, 4
  01d56f4  lis 3, 29
  01d56f8  addi 3, 3, 21944
  01d56fc  fmuls 1, 1, 1
  01d5700  fmadds 1, 2, 2, 1
  01d5704  lfs 2, 8(3)
  01d5708  fsqrts 1, 1
  01d570c  fcmpu 0, 1, 2
  01d5710  cror 6, 1, 2
  01d5714  bt 6, 0x1d582c
  01d5718  lhz 5, 52(31)
  01d571c  li 3, 2
  01d5720  ori 5, 5, 65
  01d5724  li 4, 0
  01d5728  sth 5, 52(31)
  01d572c  bl 0x167e60
  01d5730  nop
  01d5734  li 3, 2
  01d5738  stb 3, 32(31)
  01d573c  b 0x1d582c
  01d5740  lis 3, 161
  01d5744  lwz 3, 1800(3)
  01d5748  cmpwi 3, 2
  01d574c  bt 2, 0x1d582c
  01d5750  lis 3, 151
  01d5754  addic 3, 3, -16064
  01d5758  lbz 3, 9(3)
  01d575c  cmpwi 3, 0
  01d5760  bf 2, 0x1d5778
  01d5764  li 3, 4007
  01d5768  li 4, -1
  01d576c  bl 0x112a38
  01d5770  nop
  01d5774  b 0x1d5788
  01d5778  li 3, 21471
  01d577c  li 4, -1
  01d5780  bl 0x112a38
  01d5784  nop
  01d5788  lis 5, 161
  01d578c  li 6, 180
  01d5790  li 3, 9
  01d5794  li 4, 1
  01d5798  stw 6, 23680(5)
  01d579c  bl 0x112e18
  01d57a0  nop
  01d57a4  li 3, 30
  01d57a8  bl 0x112dc0
  01d57ac  nop
  01d57b0  lwz 30, 4(30)
  01d57b4  cmpwi 30, -1
  01d57b8  bt 2, 0x1d57e8
  01d57bc  lis 3, 164
  01d57c0  slwi 4, 30, 8
  01d57c4  lwz 3, -28512(3)
  01d57c8  addc 3, 3, 4
  01d57cc  addic 4, 3, 16
  01d57d0  addic 5, 3, 64
  01d57d4  clrldi 3, 4, 32
  01d57d8  clrldi 4, 5, 32
  01d57dc  bl 0x151e70
  01d57e0  nop
  01d57e4  b 0x1d5800
  01d57e8  lis 3, 101
  01d57ec  lhz 4, 178(31)
  01d57f0  addic 3, 3, 18132
  01d57f4  extsh 4, 4
  01d57f8  bl 0x5cd098
  01d57fc  nop
  01d5800  li 5, 3
  01d5804  li 3, 0
  01d5808  li 4, -1
  01d580c  stb 5, 32(31)
  01d5810  bl 0xe8aa4
  01d5814  nop
  01d5818  b 0x1d582c
  01d581c  ori 3, 31, 0
  01d5820  bl 0xefb38
  01d5824  nop
  01d5828  b 0x1d582c
  01d582c  ld 0, 144(1)
  01d5830  mtlr 0
  01d5834  ld 30, 112(1)
  01d5838  ld 31, 120(1)
  01d583c  addi 1, 1, 128
  01d5840  blr
