# sdk/libc/fwrite.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fwrite:   # 0x5c5638, 0x278 bytes
  05c5638  stdu 1, -192(1)
  05c563c  mflr 0
  05c5640  std 22, 112(1)
  05c5644  std 23, 120(1)
  05c5648  std 29, 168(1)
  05c564c  std 0, 208(1)
  05c5650  std 24, 128(1)
  05c5654  std 25, 136(1)
  05c5658  std 26, 144(1)
  05c565c  std 27, 152(1)
  05c5660  std 28, 160(1)
  05c5664  std 30, 176(1)
  05c5668  std 31, 184(1)
  05c566c  mr 23, 4
  05c5670  mr 29, 6
  05c5674  mr 0, 3
  05c5678  mullw 22, 4, 5
  05c567c  cmpwi 7, 22, 0
  05c5680  bt 30, 0x5c5860
  05c5684  cmpwi 7, 4, 0
  05c5688  bf 30, 0x5c56c8
  05c568c  ld 0, 208(1)
  05c5690  clrldi 3, 5, 32
  05c5694  ld 22, 112(1)
  05c5698  ld 23, 120(1)
  05c569c  mtlr 0
  05c56a0  ld 24, 128(1)
  05c56a4  ld 25, 136(1)
  05c56a8  ld 26, 144(1)
  05c56ac  ld 27, 152(1)
  05c56b0  ld 28, 160(1)
  05c56b4  ld 29, 168(1)
  05c56b8  ld 30, 176(1)
  05c56bc  ld 31, 184(1)
  05c56c0  addi 1, 1, 192
  05c56c4  blr
  05c56c8  clrldi 24, 6, 32
  05c56cc  mr 28, 22
  05c56d0  mr 3, 24
  05c56d4  mr 26, 0
  05c56d8  bl 0x5cbc38
  05c56dc  nop
  05c56e0  b 0x5c5724
  05c56e4  bl 0x5c5ad0
  05c56e8  nop
  05c56ec  lwz 0, 16(29)
  05c56f0  cmpwi 7, 25, 0
  05c56f4  add 0, 0, 30
  05c56f8  mr 3, 24
  05c56fc  sub 28, 28, 30
  05c5700  stw 0, 16(29)
  05c5704  add 26, 26, 30
  05c5708  bt 30, 0x5c571c
  05c570c  bl 0x5c50cc
  05c5710  nop
  05c5714  cmpwi 7, 3, 0
  05c5718  bf 30, 0x5c57ac
  05c571c  cmpwi 7, 28, 0
  05c5720  bt 30, 0x5c57ac
  05c5724  lwz 0, 16(29)
  05c5728  mr 3, 24
  05c572c  lwz 9, 24(29)
  05c5730  mr 30, 28
  05c5734  clrldi 27, 26, 32
  05c5738  cmplw 7, 0, 9
  05c573c  li 25, 0
  05c5740  bf 28, 0x5c580c
  05c5744  lhz 0, 0(29)
  05c5748  clrldi 5, 28, 32
  05c574c  li 4, 10
  05c5750  rlwinm 0, 0, 0, 21, 21
  05c5754  cmpwi 7, 0, 0
  05c5758  bf 30, 0x5c5834
  05c575c  lwz 9, 16(29)
  05c5760  mr 4, 27
  05c5764  lwz 0, 24(29)
  05c5768  clrldi 5, 30, 32
  05c576c  clrldi 3, 9, 32
  05c5770  sub 31, 0, 9
  05c5774  cmplw 7, 30, 31
  05c5778  bf 29, 0x5c56e4
  05c577c  clrldi 3, 9, 32
  05c5780  mr 4, 27
  05c5784  clrldi 5, 31, 32
  05c5788  sub 28, 28, 31
  05c578c  bl 0x5c5ad0
  05c5790  nop
  05c5794  lwz 0, 16(29)
  05c5798  cmpwi 7, 28, 0
  05c579c  add 0, 0, 31
  05c57a0  add 26, 26, 31
  05c57a4  stw 0, 16(29)
  05c57a8  bf 30, 0x5c5724
  05c57ac  lhz 0, 0(29)
  05c57b0  rlwinm 0, 0, 0, 20, 20
  05c57b4  cmpwi 7, 0, 0
  05c57b8  bf 30, 0x5c58a0
  05c57bc  mr 3, 24
  05c57c0  bl 0x5cbbbc
  05c57c4  nop
  05c57c8  sub 0, 22, 28
  05c57cc  ld 24, 128(1)
  05c57d0  ld 22, 112(1)
  05c57d4  ld 25, 136(1)
  05c57d8  ld 26, 144(1)
  05c57dc  ld 27, 152(1)
  05c57e0  ld 28, 160(1)
  05c57e4  ld 29, 168(1)
  05c57e8  ld 30, 176(1)
  05c57ec  ld 31, 184(1)
  05c57f0  divwu 5, 0, 23
  05c57f4  ld 0, 208(1)
  05c57f8  clrldi 3, 5, 32
  05c57fc  ld 23, 120(1)
  05c5800  addi 1, 1, 192
  05c5804  mtlr 0
  05c5808  blr
  05c580c  bl 0x5c9998
  05c5810  nop
  05c5814  cmpwi 7, 3, 0
  05c5818  bt 28, 0x5c57ac
  05c581c  lhz 0, 0(29)
  05c5820  clrldi 5, 28, 32
  05c5824  li 4, 10
  05c5828  rlwinm 0, 0, 0, 21, 21
  05c582c  cmpwi 7, 0, 0
  05c5830  bt 30, 0x5c575c
  05c5834  clrldi 27, 26, 32
  05c5838  mr 30, 28
  05c583c  mr 3, 27
  05c5840  bl 0x5c5984
  05c5844  nop
  05c5848  cmpwi 7, 3, 0
  05c584c  mr 25, 3
  05c5850  sub 9, 3, 26
  05c5854  bt 30, 0x5c575c
  05c5858  addi 30, 9, 1
  05c585c  b 0x5c575c
  05c5860  ld 0, 208(1)
  05c5864  li 5, 0
  05c5868  ld 22, 112(1)
  05c586c  clrldi 3, 5, 32
  05c5870  ld 23, 120(1)
  05c5874  ld 24, 128(1)
  05c5878  mtlr 0
  05c587c  ld 25, 136(1)
  05c5880  ld 26, 144(1)
  05c5884  ld 27, 152(1)
  05c5888  ld 28, 160(1)
  05c588c  ld 29, 168(1)
  05c5890  ld 30, 176(1)
  05c5894  ld 31, 184(1)
  05c5898  addi 1, 1, 192
  05c589c  blr
  05c58a0  mr 3, 24
  05c58a4  bl 0x5c50cc
  05c58a8  nop
  05c58ac  b 0x5c57bc
