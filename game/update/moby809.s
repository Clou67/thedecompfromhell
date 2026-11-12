# game/update/moby809.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M809_0046c32c:   # 0x46c32c, 0x14 bytes
  046c32c  lis 3, 135
  046c330  lis 4, 1
  046c334  addic 3, 3, 30260
  046c338  stw 4, 72(3)
  046c33c  blr

UpdateMoby_809:   # 0x46c358, 0x234 bytes
  046c358  stdu 1, -176(1)
  046c35c  mflr 0
  046c360  std 0, 192(1)
  046c364  addi 0, 1, 128
  046c368  stvx 31, 0, 0
  046c36c  lbz 4, 32(3)
  046c370  cmpwi 4, 0
  046c374  cmpwi 1, 4, 1
  046c378  std 31, 168(1)
  046c37c  std 30, 160(1)
  046c380  std 29, 152(1)
  046c384  cmpwi 6, 4, -1
  046c388  bt 1, 0x46c394
  046c38c  bf 25, 0x46c568
  046c390  b 0x46c39c
  046c394  bf 5, 0x46c51c
  046c398  b 0x46c568
  046c39c  lis 4, 270
  046c3a0  li 6, 0
  046c3a4  li 5, 255
  046c3a8  li 7, 30368
  046c3ac  li 8, 1
  046c3b0  lis 9, 135
  046c3b4  stw 6, -26168(4)
  046c3b8  lis 30, 114
  046c3bc  stb 5, 48(3)
  046c3c0  lis 4, 71
  046c3c4  stb 8, 32(3)
  046c3c8  li 29, -3056
  046c3cc  addi 31, 4, -15552
  046c3d0  lvlx 2, 7, 9
  046c3d4  vcfsx 2, 2, 0
  046c3d8  lis 3, 135
  046c3dc  lvlx 3, 0, 31
  046c3e0  li 7, 30372
  046c3e4  lvlx 4, 29, 30
  046c3e8  vspltw 31, 3, 0
  046c3ec  vspltisw 3, -1
  046c3f0  lis 4, 270
  046c3f4  lfs 1, 0(31)
  046c3f8  li 5, -26192
  046c3fc  lwz 6, 30372(3)
  046c400  vslw 3, 3, 3
  046c404  extsw 6, 6
  046c408  vaddfp 2, 2, 31
  046c40c  vmaddfp 2, 4, 2, 3
  046c410  lvlx 3, 7, 3
  046c414  lfs 2, -3056(30)
  046c418  vcfsx 3, 3, 0
  046c41c  lis 3, 270
  046c420  vctsxs 2, 2, 0
  046c424  vspltw 2, 2, 0
  046c428  stvewx 2, 5, 4
  046c42c  std 6, 112(1)
  046c430  vaddfp 2, 3, 31
  046c434  vspltisw 3, -1
  046c438  li 4, -26188
  046c43c  vslw 3, 3, 3
  046c440  vmaddfp 2, 4, 2, 3
  046c444  lfd 3, 112(1)
  046c448  fcfid 3, 3
  046c44c  vctsxs 2, 2, 0
  046c450  frsp 3, 3
  046c454  vspltw 2, 2, 0
  046c458  fadds 1, 3, 1
  046c45c  fmuls 1, 2, 1
  046c460  fctiwz 1, 1
  046c464  stfd 1, 112(1)
  046c468  lwz 5, 116(1)
  046c46c  stvewx 2, 4, 3
  046c470  extsw 3, 5
  046c474  bl 0x502730
  046c478  nop
  046c47c  lfs 2, 4(31)
  046c480  fdivs 1, 2, 1
  046c484  lis 3, 270
  046c488  vspltisw 2, -1
  046c48c  lis 4, 135
  046c490  li 5, 30376
  046c494  vslw 2, 2, 2
  046c498  lis 6, 270
  046c49c  li 7, -26180
  046c4a0  vspltisw 3, -1
  046c4a4  li 8, 8
  046c4a8  vspltisw 4, -1
  046c4ac  vspltisw 5, -1
  046c4b0  vslw 3, 3, 3
  046c4b4  vslw 4, 4, 4
  046c4b8  lis 9, 270
  046c4bc  vslw 5, 5, 5
  046c4c0  li 10, -26176
  046c4c4  stfs 1, -26184(3)
  046c4c8  lvlx 6, 5, 4
  046c4cc  lvlx 7, 29, 30
  046c4d0  vcfsx 6, 6, 0
  046c4d4  vaddfp 6, 6, 31
  046c4d8  vmaddfp 2, 7, 6, 2
  046c4dc  vctsxs 2, 2, 0
  046c4e0  vcfsx 6, 2, 0
  046c4e4  vspltw 2, 2, 0
  046c4e8  stvewx 2, 7, 6
  046c4ec  lvlx 2, 8, 31
  046c4f0  vspltw 2, 2, 0
  046c4f4  vrefp 7, 6
  046c4f8  vnmsubfp 8, 7, 6, 2
  046c4fc  vmaddfp 3, 7, 8, 3
  046c500  vnmsubfp 7, 3, 6, 2
  046c504  vmaddfp 3, 3, 7, 4
  046c508  vnmsubfp 2, 3, 6, 2
  046c50c  vmaddfp 2, 3, 2, 5
  046c510  vspltw 2, 2, 0
  046c514  stvewx 2, 10, 9
  046c518  b 0x46c568
  046c51c  lis 3, 114
  046c520  lis 4, 135
  046c524  lis 5, 270
  046c528  lis 6, 71
  046c52c  lfs 1, -3064(3)
  046c530  lfs 2, 30380(4)
  046c534  lfs 3, -26172(5)
  046c538  addi 3, 6, -15552
  046c53c  fnmsubs 1, 1, 2, 3
  046c540  stfs 1, -26172(5)
  046c544  lfs 2, 12(3)
  046c548  fcmpu 0, 1, 2
  046c54c  bt 1, 0x46c568
  046c550  lis 3, 71
  046c554  lis 4, 270
  046c558  addi 3, 3, -15552
  046c55c  lfs 2, 16(3)
  046c560  fadds 1, 1, 2
  046c564  stfs 1, -26172(4)
  046c568  li 0, 128
  046c56c  lvx 31, 1, 0
  046c570  ld 0, 192(1)
  046c574  mtlr 0
  046c578  ld 29, 152(1)
  046c57c  ld 30, 160(1)
  046c580  ld 31, 168(1)
  046c584  addi 1, 1, 176
  046c588  blr

FUN_0046c58c:   # 0x46c58c, 0x18 bytes
  046c58c  lis 4, 270
  046c590  lwz 5, -26168(4)
  046c594  addc 6, 5, 3
  046c598  extsw 3, 5
  046c59c  stw 6, -26168(4)
  046c5a0  blr

M809_0046c5a8:   # 0x46c5a8, 0x60 bytes
  046c5a8  stdu 1, -128(1)
  046c5ac  mflr 0
  046c5b0  std 0, 144(1)
  046c5b4  std 31, 120(1)
  046c5b8  std 30, 112(1)
  046c5bc  ori 31, 3, 0
  046c5c0  lwz 30, 120(31)
  046c5c4  lhz 3, 18(30)
  046c5c8  extsh 3, 3
  046c5cc  cmpwi 3, -1
  046c5d0  bt 2, 0x46c5e4
  046c5d4  bl 0xda9e8
  046c5d8  nop
  046c5dc  li 3, -1
  046c5e0  sth 3, 18(30)
  046c5e4  ori 3, 31, 0
  046c5e8  bl 0xefb38
  046c5ec  nop
  046c5f0  ld 0, 144(1)
  046c5f4  mtlr 0
  046c5f8  ld 30, 112(1)
  046c5fc  ld 31, 120(1)
  046c600  addi 1, 1, 128
  046c604  blr
