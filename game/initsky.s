# game/initsky.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_INITSKY:   # 0xd93a8, 0x14 bytes
  00d93a8  lis 3, 114
  00d93ac  lis 4, 1
  00d93b0  addic 3, 3, 17980
  00d93b4  stw 4, 72(3)
  00d93b8  blr

InitSky:   # 0xd93c0, 0x28c bytes
  00d93c0  stdu 1, -128(1)
  00d93c4  mflr 0
  00d93c8  std 0, 144(1)
  00d93cc  std 31, 120(1)
  00d93d0  lis 31, 144
  00d93d4  lis 4, 101
  00d93d8  addic 31, 31, -23532
  00d93dc  addic 4, 4, 8708
  00d93e0  lwz 3, 8(31)
  00d93e4  bl 0x50eaf8
  00d93e8  nop
  00d93ec  bl 0x159e58
  00d93f0  nop
  00d93f4  lis 3, 151
  00d93f8  lwz 3, -25488(3)
  00d93fc  cmpwi 3, 9
  00d9400  bt 1, 0xd9464
  00d9404  cmpwi 3, 3
  00d9408  bt 1, 0xd9434
  00d940c  cmpwi 3, 0
  00d9410  bt 1, 0xd9420
  00d9414  cmpwi 3, -1
  00d9418  bf 1, 0xd95b4
  00d941c  b 0xd94c4
  00d9420  cmpwi 3, 1
  00d9424  bf 1, 0xd94d0
  00d9428  cmpwi 3, 2
  00d942c  bf 1, 0xd94dc
  00d9430  b 0xd94e8
  00d9434  cmpwi 3, 6
  00d9438  bt 1, 0xd9450
  00d943c  cmpwi 3, 4
  00d9440  bf 1, 0xd94f4
  00d9444  cmpwi 3, 5
  00d9448  bf 1, 0xd9500
  00d944c  b 0xd950c
  00d9450  cmpwi 3, 7
  00d9454  bf 1, 0xd9518
  00d9458  cmpwi 3, 8
  00d945c  bf 1, 0xd9524
  00d9460  b 0xd9530
  00d9464  cmpwi 3, 14
  00d9468  bt 1, 0xd9494
  00d946c  cmpwi 3, 11
  00d9470  bt 1, 0xd9480
  00d9474  cmpwi 3, 10
  00d9478  bf 1, 0xd953c
  00d947c  b 0xd9548
  00d9480  cmpwi 3, 12
  00d9484  bf 1, 0xd9554
  00d9488  cmpwi 3, 13
  00d948c  bf 1, 0xd9560
  00d9490  b 0xd956c
  00d9494  cmpwi 3, 17
  00d9498  bt 1, 0xd94b0
  00d949c  cmpwi 3, 15
  00d94a0  bf 1, 0xd9578
  00d94a4  cmpwi 3, 16
  00d94a8  bf 1, 0xd9584
  00d94ac  b 0xd9590
  00d94b0  cmpwi 3, 18
  00d94b4  bf 1, 0xd959c
  00d94b8  cmpwi 3, 19
  00d94bc  bf 1, 0xd95a8
  00d94c0  b 0xd95b4
  00d94c4  bl 0x153e00
  00d94c8  nop
  00d94cc  b 0xd95bc
  00d94d0  bl 0x154208
  00d94d4  nop
  00d94d8  b 0xd95bc
  00d94dc  bl 0x1545b8
  00d94e0  nop
  00d94e4  b 0xd95bc
  00d94e8  bl 0x154e28
  00d94ec  nop
  00d94f0  b 0xd95bc
  00d94f4  bl 0x155198
  00d94f8  nop
  00d94fc  b 0xd95bc
  00d9500  bl 0x1554a0
  00d9504  nop
  00d9508  b 0xd95bc
  00d950c  bl 0x155788
  00d9510  nop
  00d9514  b 0xd95bc
  00d9518  bl 0x156148
  00d951c  nop
  00d9520  b 0xd95bc
  00d9524  bl 0x156550
  00d9528  nop
  00d952c  b 0xd95bc
  00d9530  bl 0x156840
  00d9534  nop
  00d9538  b 0xd95bc
  00d953c  bl 0x156bd8
  00d9540  nop
  00d9544  b 0xd95bc
  00d9548  bl 0x157030
  00d954c  nop
  00d9550  b 0xd95bc
  00d9554  bl 0x1573d0
  00d9558  nop
  00d955c  b 0xd95bc
  00d9560  bl 0x15774c
  00d9564  nop
  00d9568  b 0xd95bc
  00d956c  bl 0x157a30
  00d9570  nop
  00d9574  b 0xd95bc
  00d9578  bl 0x157d98
  00d957c  nop
  00d9580  b 0xd95bc
  00d9584  bl 0x1580b8
  00d9588  nop
  00d958c  b 0xd95bc
  00d9590  bl 0x158460
  00d9594  nop
  00d9598  b 0xd95bc
  00d959c  bl 0x158c70
  00d95a0  nop
  00d95a4  b 0xd95bc
  00d95a8  bl 0x159118
  00d95ac  nop
  00d95b0  b 0xd95bc
  00d95b4  bl 0x153c60
  00d95b8  nop
  00d95bc  bl 0x159e54
  00d95c0  nop
  00d95c4  li 3, 1
  00d95c8  li 4, 5
  00d95cc  li 8, 0
  00d95d0  li 10, 2
  00d95d4  li 5, 96
  00d95d8  li 6, 3
  00d95dc  li 7, 0
  00d95e0  li 9, 1
  00d95e4  bl 0x502f7c
  00d95e8  nop
  00d95ec  ori 4, 3, 0
  00d95f0  li 3, 22
  00d95f4  bl 0x174f80
  00d95f8  nop
  00d95fc  lis 3, 150
  00d9600  li 4, 1
  00d9604  addic 3, 3, 27352
  00d9608  li 5, 0
  00d960c  lwz 3, 8(3)
  00d9610  srawi 3, 3, 13
  00d9614  bl 0x502ffc
  00d9618  nop
  00d961c  ori 4, 3, 0
  00d9620  li 3, 33
  00d9624  bl 0x174f80
  00d9628  nop
  00d962c  lwz 3, 8(31)
  00d9630  bl 0x50ec5c
  00d9634  nop
  00d9638  ld 0, 144(1)
  00d963c  mtlr 0
  00d9640  ld 31, 120(1)
  00d9644  addi 1, 1, 128
  00d9648  blr
