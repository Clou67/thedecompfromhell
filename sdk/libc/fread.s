# sdk/libc/fread.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fread:   # 0x5c5364, 0x204 bytes
  05c5364  stdu 1, -176(1)
  05c5368  mflr 0
  05c536c  std 25, 120(1)
  05c5370  std 24, 112(1)
  05c5374  std 30, 160(1)
  05c5378  std 0, 192(1)
  05c537c  std 26, 128(1)
  05c5380  std 27, 136(1)
  05c5384  std 28, 144(1)
  05c5388  std 29, 152(1)
  05c538c  std 31, 168(1)
  05c5390  mr 24, 4
  05c5394  mr 30, 6
  05c5398  li 0, 0
  05c539c  mullw 25, 4, 5
  05c53a0  cmpwi 7, 25, 0
  05c53a4  bf 30, 0x5c53dc
  05c53a8  clrldi 3, 0, 32
  05c53ac  ld 0, 192(1)
  05c53b0  ld 24, 112(1)
  05c53b4  ld 25, 120(1)
  05c53b8  mtlr 0
  05c53bc  ld 26, 128(1)
  05c53c0  ld 27, 136(1)
  05c53c4  ld 28, 144(1)
  05c53c8  ld 29, 152(1)
  05c53cc  ld 30, 160(1)
  05c53d0  ld 31, 168(1)
  05c53d4  addi 1, 1, 176
  05c53d8  blr
  05c53dc  clrldi 26, 6, 32
  05c53e0  mr 27, 3
  05c53e4  mr 3, 26
  05c53e8  mr 28, 25
  05c53ec  bl 0x5cbc38
  05c53f0  nop
  05c53f4  lhz 0, 0(30)
  05c53f8  rlwinm 0, 0, 0, 17, 17
  05c53fc  clrldi 9, 25, 32
  05c5400  cmpwi 7, 0, 0
  05c5404  addi 8, 30, 67
  05c5408  mtctr 9
  05c540c  bf 30, 0x5c5510
  05c5410  mr 28, 25
  05c5414  ld 11, 72(30)
  05c5418  lwz 0, 40(30)
  05c541c  mr 3, 26
  05c5420  cmpwi 7, 0, 0
  05c5424  bt 30, 0x5c5434
  05c5428  stw 0, 20(30)
  05c542c  li 0, 0
  05c5430  stw 0, 40(30)
  05c5434  lwz 29, 96(30)
  05c5438  ld 0, 80(30)
  05c543c  clrldi 9, 29, 32
  05c5440  sub 0, 9, 0
  05c5444  cmpld 6, 11, 9
  05c5448  cmpld 7, 0, 11
  05c544c  bt 29, 0x5c5454
  05c5450  bt 24, 0x5c546c
  05c5454  bl 0x5c91f4
  05c5458  nop
  05c545c  cmpwi 7, 3, 0
  05c5460  bf 29, 0x5c54c8
  05c5464  ld 11, 72(30)
  05c5468  lwz 29, 96(30)
  05c546c  sub 31, 29, 11
  05c5470  clrldi 3, 27, 32
  05c5474  cmplw 7, 31, 28
  05c5478  bf 29, 0x5c5480
  05c547c  mr 31, 28
  05c5480  clrldi 29, 31, 32
  05c5484  lwz 4, 16(30)
  05c5488  sub 28, 28, 31
  05c548c  mr 5, 29
  05c5490  add 27, 27, 31
  05c5494  bl 0x5c5ad0
  05c5498  nop
  05c549c  lwz 0, 16(30)
  05c54a0  ld 9, 88(30)
  05c54a4  ld 11, 72(30)
  05c54a8  cmpwi 7, 28, 0
  05c54ac  add 0, 31, 0
  05c54b0  add 11, 29, 11
  05c54b4  add 9, 9, 29
  05c54b8  stw 0, 16(30)
  05c54bc  std 9, 88(30)
  05c54c0  std 11, 72(30)
  05c54c4  bf 30, 0x5c5418
  05c54c8  mr 3, 26
  05c54cc  bl 0x5cbbbc
  05c54d0  nop
  05c54d4  sub 0, 25, 28
  05c54d8  divwu 0, 0, 24
  05c54dc  clrldi 3, 0, 32
  05c54e0  ld 0, 192(1)
  05c54e4  ld 24, 112(1)
  05c54e8  ld 25, 120(1)
  05c54ec  mtlr 0
  05c54f0  ld 26, 128(1)
  05c54f4  ld 27, 136(1)
  05c54f8  ld 28, 144(1)
  05c54fc  ld 29, 152(1)
  05c5500  ld 30, 160(1)
  05c5504  ld 31, 168(1)
  05c5508  addi 1, 1, 176
  05c550c  blr
  05c5510  lwz 9, 28(30)
  05c5514  clrldi 10, 27, 32
  05c5518  cmplw 7, 8, 9
  05c551c  clrldi 11, 9, 32
  05c5520  addi 9, 9, 1
  05c5524  bf 29, 0x5c5558
  05c5528  lbz 0, 0(11)
  05c552c  addi 27, 27, 1
  05c5530  addi 28, 28, -1
  05c5534  stb 0, 0(10)
  05c5538  stw 9, 28(30)
  05c553c  bdnz 0x5c5510
  05c5540  mr 3, 26
  05c5544  bl 0x5cbbbc
  05c5548  nop
  05c554c  sub 0, 25, 28
  05c5550  divwu 0, 0, 24
  05c5554  b 0x5c54dc
  05c5558  cmpwi 7, 28, 0
  05c555c  bt- 30, 0x5c54c8
  05c5560  ld 11, 72(30)
  05c5564  b 0x5c5418
