# game/update/moby1633.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1633_002a5158:   # 0x2a5158, 0x168 bytes
  02a5158  stdu 1, -176(1)
  02a515c  mflr 0
  02a5160  std 0, 192(1)
  02a5164  stfd 28, 144(1)
  02a5168  stfd 29, 152(1)
  02a516c  stfd 30, 160(1)
  02a5170  stfd 31, 168(1)
  02a5174  std 29, 120(1)
  02a5178  ori 29, 3, 0
  02a517c  fmr 31, 4
  02a5180  li 3, 1633
  02a5184  std 31, 136(1)
  02a5188  fmr 30, 3
  02a518c  ori 31, 6, 0
  02a5190  std 30, 128(1)
  02a5194  fmr 29, 2
  02a5198  ori 30, 5, 0
  02a519c  std 28, 112(1)
  02a51a0  fmr 28, 1
  02a51a4  li 28, 176
  02a51a8  bl 0xefa28
  02a51ac  nop
  02a51b0  cmpwi 3, 0
  02a51b4  bt 2, 0x2a5290
  02a51b8  addc 4, 1, 28
  02a51bc  li 5, 255
  02a51c0  vspltisw 2, -1
  02a51c4  li 7, 127
  02a51c8  li 8, 1
  02a51cc  li 6, 0
  02a51d0  std 30, 64(4)
  02a51d4  std 31, 72(4)
  02a51d8  lis 10, 42
  02a51dc  lwz 9, 120(3)
  02a51e0  lis 11, 114
  02a51e4  lfs 1, 68(4)
  02a51e8  addi 10, 10, 20816
  02a51ec  lfs 2, 76(4)
  02a51f0  vslw 2, 2, 2
  02a51f4  stw 29, 16(9)
  02a51f8  stb 5, 48(3)
  02a51fc  sth 7, 50(3)
  02a5200  ld 5, 56(29)
  02a5204  stb 8, 49(3)
  02a5208  std 5, 56(3)
  02a520c  stw 6, 64(3)
  02a5210  li 5, -3056
  02a5214  stfs 31, 68(3)
  02a5218  stfs 30, 72(3)
  02a521c  stfs 1, 20(3)
  02a5220  stfs 2, 28(3)
  02a5224  lfs 1, 64(4)
  02a5228  lfs 2, 72(4)
  02a522c  stfs 1, 16(3)
  02a5230  stfs 2, 24(3)
  02a5234  stw 6, 0(9)
  02a5238  stw 6, 4(9)
  02a523c  stfs 28, 8(9)
  02a5240  stfs 29, 12(9)
  02a5244  <unknown>
  02a5248  li 4, 20
  02a524c  <unknown>
  02a5250  vspltw 3, 3, 0
  02a5254  li 5, 22
  02a5258  li 6, 64
  02a525c  vmaddfp 2, 4, 3, 2
  02a5260  vctsxs 2, 2, 0
  02a5264  vsplth 2, 2, 1
  02a5268  stvehx 2, 4, 9
  02a526c  stvehx 2, 5, 9
  02a5270  lhz 4, 52(3)
  02a5274  stb 6, 35(3)
  02a5278  ori 4, 4, 2560
  02a527c  lfs 1, 44(3)
  02a5280  sth 4, 52(3)
  02a5284  lfs 2, 4(10)
  02a5288  fmuls 1, 1, 2
  02a528c  stfs 1, 44(3)
  02a5290  ld 0, 192(1)
  02a5294  mtlr 0
  02a5298  lfd 28, 144(1)
  02a529c  lfd 29, 152(1)
  02a52a0  lfd 30, 160(1)
  02a52a4  lfd 31, 168(1)
  02a52a8  ld 28, 112(1)
  02a52ac  ld 29, 120(1)
  02a52b0  ld 30, 128(1)
  02a52b4  ld 31, 136(1)
  02a52b8  addi 1, 1, 176
  02a52bc  blr

UpdateMoby_1633:   # 0x2a52f8, 0x478 bytes
  02a52f8  stdu 1, -272(1)
  02a52fc  mflr 0
  02a5300  std 0, 288(1)
  02a5304  stfd 29, 248(1)
  02a5308  stfd 30, 256(1)
  02a530c  stfd 31, 264(1)
  02a5310  lwz 4, 36(3)
  02a5314  std 31, 240(1)
  02a5318  lwz 5, 44(3)
  02a531c  std 30, 232(1)
  02a5320  ori 31, 3, 0
  02a5324  lwz 30, 120(3)
  02a5328  srawi 6, 5, 31
  02a532c  lwz 7, 36(4)
  02a5330  srwi 8, 6, 1
  02a5334  lfs 3, 44(3)
  02a5338  srawi 9, 7, 31
  02a533c  xor 5, 8, 5
  02a5340  lfs 2, 36(4)
  02a5344  srwi 8, 9, 1
  02a5348  lfs 1, 72(3)
  02a534c  subc 5, 5, 6
  02a5350  lfs 31, 68(3)
  02a5354  xor 6, 8, 7
  02a5358  subc 4, 6, 9
  02a535c  std 29, 224(1)
  02a5360  std 28, 216(1)
  02a5364  std 27, 208(1)
  02a5368  cmpw 5, 4
  02a536c  bf 0, 0x2a5390
  02a5370  lis 3, 42
  02a5374  lis 4, 114
  02a5378  addi 3, 3, 21184
  02a537c  lfs 4, 0(3)
  02a5380  lfs 5, -3064(4)
  02a5384  fmuls 4, 5, 4
  02a5388  fmadds 2, 4, 2, 3
  02a538c  stfs 2, 44(31)
  02a5390  lis 3, 42
  02a5394  lis 4, 114
  02a5398  addi 3, 3, 21184
  02a539c  lfs 2, 4(3)
  02a53a0  lfs 3, -3056(4)
  02a53a4  lhz 4, 20(30)
  02a53a8  fmuls 4, 3, 2
  02a53ac  extsh 4, 4
  02a53b0  fmr 2, 1
  02a53b4  fctiwz 4, 4
  02a53b8  stfd 4, 192(1)
  02a53bc  lfs 4, 8(3)
  02a53c0  lwz 3, 196(1)
  02a53c4  fmuls 3, 3, 4
  02a53c8  fctiwz 3, 3
  02a53cc  stfd 3, 192(1)
  02a53d0  lwz 5, 196(1)
  02a53d4  subc 3, 3, 5
  02a53d8  cmpw 4, 3
  02a53dc  bf 0, 0x2a53e8
  02a53e0  lfs 2, 8(30)
  02a53e4  lfs 31, 12(30)
  02a53e8  lis 3, 42
  02a53ec  lis 28, 114
  02a53f0  addi 29, 3, 21184
  02a53f4  lis 27, 114
  02a53f8  ori 5, 30, 0
  02a53fc  lfs 30, 12(29)
  02a5400  lfs 29, 16(29)
  02a5404  lfs 5, -3048(28)
  02a5408  lfs 6, -3052(27)
  02a540c  fmuls 3, 5, 30
  02a5410  fmuls 4, 5, 29
  02a5414  fmuls 5, 6, 29
  02a5418  bl 0xff190
  02a541c  nop
  02a5420  stfs 1, 72(31)
  02a5424  addic 5, 30, 4
  02a5428  lfs 1, 68(31)
  02a542c  fmr 2, 31
  02a5430  lfs 4, -3048(28)
  02a5434  lfs 5, -3052(27)
  02a5438  fmuls 3, 4, 30
  02a543c  fmuls 4, 4, 29
  02a5440  fmuls 5, 5, 29
  02a5444  bl 0xff190
  02a5448  nop
  02a544c  stfs 1, 68(31)
  02a5450  lfs 5, 20(29)
  02a5454  fneg 3, 1
  02a5458  lfs 4, -3052(27)
  02a545c  addic 3, 1, 128
  02a5460  lfs 2, 72(31)
  02a5464  fmuls 1, 4, 5
  02a5468  bl 0xfe610
  02a546c  nop
  02a5470  lfs 2, 16(31)
  02a5474  lfs 4, 20(31)
  02a5478  lfs 5, 24(31)
  02a547c  lfs 1, 128(1)
  02a5480  lfs 31, 132(1)
  02a5484  fadds 1, 2, 1
  02a5488  lfs 3, 136(1)
  02a548c  fadds 31, 4, 31
  02a5490  stfs 2, 112(1)
  02a5494  fadds 3, 5, 3
  02a5498  stfs 4, 116(1)
  02a549c  lfs 2, 28(31)
  02a54a0  stfs 5, 120(1)
  02a54a4  stfs 2, 124(1)
  02a54a8  stfs 1, 16(31)
  02a54ac  stfs 31, 20(31)
  02a54b0  stfs 3, 24(31)
  02a54b4  lfs 2, 24(29)
  02a54b8  fcmpu 0, 1, 2
  02a54bc  bt 0, 0x2a54f4
  02a54c0  lis 3, 42
  02a54c4  addi 3, 3, 21184
  02a54c8  lfs 4, 28(3)
  02a54cc  fcmpu 0, 1, 4
  02a54d0  fcmpu 1, 31, 4
  02a54d4  fcmpu 6, 3, 4
  02a54d8  bt 1, 0x2a54f4
  02a54dc  fcmpu 0, 31, 2
  02a54e0  bt 0, 0x2a54f4
  02a54e4  bt 5, 0x2a54f4
  02a54e8  fcmpu 0, 3, 2
  02a54ec  bt 0, 0x2a54f4
  02a54f0  bf 25, 0x2a5504
  02a54f4  ori 3, 31, 0
  02a54f8  bl 0xefb38
  02a54fc  nop
  02a5500  b 0x2a5740
  02a5504  lis 3, 42
  02a5508  addi 3, 3, 21184
  02a550c  lfs 2, 32(3)
  02a5510  fcmpu 1, 31, 2
  02a5514  fcmpu 0, 1, 2
  02a5518  cror 2, 0, 4
  02a551c  bt 2, 0x2a5564
  02a5520  fcmpu 0, 3, 2
  02a5524  bt 0, 0x2a5564
  02a5528  lis 3, 149
  02a552c  addic 3, 3, 5056
  02a5530  lfs 3, 324(3)
  02a5534  lfs 4, 320(3)
  02a5538  fsubs 3, 31, 3
  02a553c  fsubs 4, 1, 4
  02a5540  lis 3, 42
  02a5544  addi 3, 3, 21184
  02a5548  fmuls 3, 3, 3
  02a554c  fmadds 3, 4, 4, 3
  02a5550  lfs 4, 36(3)
  02a5554  fsqrts 3, 3
  02a5558  fcmpu 0, 3, 4
  02a555c  cror 6, 0, 2
  02a5560  bt 6, 0x2a5574
  02a5564  ori 3, 31, 0
  02a5568  bl 0xefb38
  02a556c  nop
  02a5570  b 0x2a5740
  02a5574  lis 3, 151
  02a5578  addic 3, 3, -25376
  02a557c  lis 4, 42
  02a5580  lfs 3, 132(3)
  02a5584  lfs 5, 128(3)
  02a5588  fsubs 3, 31, 3
  02a558c  fsubs 5, 1, 5
  02a5590  lis 3, 1
  02a5594  stw 31, 160(1)
  02a5598  addi 4, 4, 21184
  02a559c  fmr 1, 2
  02a55a0  ori 3, 3, 1
  02a55a4  lis 5, 16128
  02a55a8  li 6, 1
  02a55ac  fmuls 4, 3, 3
  02a55b0  stw 3, 164(1)
  02a55b4  lfs 6, 40(4)
  02a55b8  stw 5, 172(1)
  02a55bc  stw 6, 176(1)
  02a55c0  stfs 5, 144(1)
  02a55c4  fmadds 4, 5, 5, 4
  02a55c8  fsqrts 7, 4
  02a55cc  fcmpu 0, 7, 2
  02a55d0  bt 2, 0x2a561c
  02a55d4  frsqrte 1, 4
  02a55d8  lis 3, 42
  02a55dc  addi 3, 3, 21184
  02a55e0  lfs 2, 44(3)
  02a55e4  fmuls 7, 4, 1
  02a55e8  fmuls 8, 6, 1
  02a55ec  fnmsubs 7, 7, 1, 2
  02a55f0  fmadds 1, 7, 8, 1
  02a55f4  fmuls 7, 4, 1
  02a55f8  fmuls 8, 6, 1
  02a55fc  fnmsubs 7, 7, 1, 2
  02a5600  fmadds 1, 7, 8, 1
  02a5604  fmuls 4, 4, 1
  02a5608  fmuls 6, 6, 1
  02a560c  fnmsubs 2, 4, 1, 2
  02a5610  fmadds 1, 2, 6, 1
  02a5614  fmuls 2, 5, 1
  02a5618  fmuls 1, 3, 1
  02a561c  lis 3, 17839
  02a5620  lis 4, 16256
  02a5624  stfs 2, 144(1)
  02a5628  ori 5, 3, 57190
  02a562c  stfs 1, 148(1)
  02a5630  li 6, 1
  02a5634  addic 3, 30, 20
  02a5638  stw 4, 152(1)
  02a563c  stw 5, 156(1)
  02a5640  lhz 4, 166(31)
  02a5644  stb 6, 168(1)
  02a5648  stb 6, 169(1)
  02a564c  sth 4, 170(1)
  02a5650  bl 0x4fffb4
  02a5654  nop
  02a5658  cmpwi 3, 0
  02a565c  bt 2, 0x2a5670
  02a5660  ori 3, 31, 0
  02a5664  bl 0xefb38
  02a5668  nop
  02a566c  b 0x2a5740
  02a5670  addic 3, 1, 112
  02a5674  addic 4, 31, 16
  02a5678  lwz 6, 16(30)
  02a567c  addic 7, 1, 144
  02a5680  li 5, 0
  02a5684  bl 0x57820
  02a5688  nop
  02a568c  cmpwi 3, 0
  02a5690  bt 2, 0x2a5740
  02a5694  bl 0x60780
  02a5698  nop
  02a569c  cmpwi 3, 0
  02a56a0  bf 2, 0x2a570c
  02a56a4  lis 3, 42
  02a56a8  vspltisw 3, -1
  02a56ac  lis 4, 114
  02a56b0  addi 3, 3, 21184
  02a56b4  li 5, 48
  02a56b8  li 6, -3056
  02a56bc  vslw 3, 3, 3
  02a56c0  lfs 1, 48(3)
  02a56c4  lfs 2, -3056(4)
  02a56c8  <unknown>
  02a56cc  fmuls 1, 2, 1
  02a56d0  vspltw 2, 2, 0
  02a56d4  lhz 3, 20(30)
  02a56d8  <unknown>
  02a56dc  extsh 3, 3
  02a56e0  vmaddfp 2, 4, 2, 3
  02a56e4  fctiwz 1, 1
  02a56e8  vctsxs 2, 2, 0
  02a56ec  stfd 1, 192(1)
  02a56f0  lwz 4, 196(1)
  02a56f4  cmpw 3, 4
  02a56f8  bf 1, 0x2a5740
  02a56fc  vsplth 2, 2, 1
  02a5700  li 3, 20
  02a5704  stvehx 2, 3, 30
  02a5708  b 0x2a5740
  02a570c  lis 3, 161
  02a5710  addic 4, 3, 2368
  02a5714  ori 3, 31, 0
  02a5718  lfs 1, 32(4)
  02a571c  stfs 1, 16(31)
  02a5720  lfs 1, 36(4)
  02a5724  stfs 1, 20(31)
  02a5728  lfs 1, 40(4)
  02a572c  stfs 1, 24(31)
  02a5730  lfs 1, 44(4)
  02a5734  stfs 1, 28(31)
  02a5738  bl 0xefb38
  02a573c  nop
  02a5740  ld 0, 288(1)
  02a5744  mtlr 0
  02a5748  lfd 29, 248(1)
  02a574c  lfd 30, 256(1)
  02a5750  lfd 31, 264(1)
  02a5754  ld 27, 208(1)
  02a5758  ld 28, 216(1)
  02a575c  ld 29, 224(1)
  02a5760  ld 30, 232(1)
  02a5764  ld 31, 240(1)
  02a5768  addi 1, 1, 272
  02a576c  blr
