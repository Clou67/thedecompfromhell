# game/update/moby199.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M199_002e5628:   # 0x2e5628, 0x14 bytes
  02e5628  lis 3, 128
  02e562c  lis 4, 1
  02e5630  addic 3, 3, -5900
  02e5634  stw 4, 72(3)
  02e5638  blr

UpdateMoby_199:   # 0x2e5698, 0x10b4 bytes
  02e5698  stdu 1, -480(1)
  02e569c  mflr 0
  02e56a0  std 0, 496(1)
  02e56a4  stfd 30, 464(1)
  02e56a8  stfd 31, 472(1)
  02e56ac  std 31, 456(1)
  02e56b0  ori 31, 3, 0
  02e56b4  lis 4, 1
  02e56b8  std 30, 448(1)
  02e56bc  li 5, 0
  02e56c0  std 29, 440(1)
  02e56c4  std 28, 432(1)
  02e56c8  lwz 30, 120(31)
  02e56cc  bl 0x10675c
  02e56d0  nop
  02e56d4  ori 4, 3, 0
  02e56d8  lbz 3, 32(31)
  02e56dc  cmpwi 4, 0
  02e56e0  bt 2, 0x2e5914
  02e56e4  cmpwi 3, 99
  02e56e8  bt 2, 0x2e5914
  02e56ec  lis 3, 15363
  02e56f0  lis 5, 15948
  02e56f4  ori 3, 3, 4719
  02e56f8  lis 4, 14851
  02e56fc  ori 5, 5, 52429
  02e5700  ori 4, 4, 4719
  02e5704  stw 3, 16(30)
  02e5708  lis 3, 15872
  02e570c  stw 5, 28(30)
  02e5710  li 6, 0
  02e5714  stw 4, 20(30)
  02e5718  lis 5, 151
  02e571c  stw 3, 24(30)
  02e5720  addic 4, 5, -25376
  02e5724  stb 6, 61(30)
  02e5728  lfs 1, 16(31)
  02e572c  lfs 2, 20(31)
  02e5730  lfs 3, 128(4)
  02e5734  lis 3, 46
  02e5738  lfs 4, 132(4)
  02e573c  fsubs 1, 1, 3
  02e5740  fsubs 2, 2, 4
  02e5744  addi 3, 3, 22080
  02e5748  lis 4, 115
  02e574c  addic 4, 4, 22784
  02e5750  fabs 3, 1
  02e5754  fabs 5, 2
  02e5758  stfs 1, 256(1)
  02e575c  stfs 2, 260(1)
  02e5760  fsubs 1, 3, 5
  02e5764  stfs 1, 264(1)
  02e5768  lwz 5, 256(1)
  02e576c  lfs 4, 0(3)
  02e5770  lfs 1, 256(1)
  02e5774  lwz 3, 260(1)
  02e5778  lfs 2, 260(1)
  02e577c  fabs 1, 1
  02e5780  lwz 6, 264(1)
  02e5784  rlwinm 3, 3, 3, 29, 29
  02e5788  fabs 6, 2
  02e578c  lfs 2, 264(1)
  02e5790  rlwimi 3, 6, 2, 30, 30
  02e5794  fsub 7, 2, 4
  02e5798  rlwimi 3, 5, 4, 28, 28
  02e579c  fsub 8, 2, 4
  02e57a0  ori 5, 4, 0
  02e57a4  rlwimi 5, 3, 2, 26, 28
  02e57a8  slwi 3, 3, 2
  02e57ac  clrldi 5, 5, 32
  02e57b0  fsel 5, 7, 1, 5
  02e57b4  lfsx 1, 4, 3
  02e57b8  lfs 2, 4(5)
  02e57bc  fsel 3, 8, 6, 3
  02e57c0  fcmpu 0, 5, 4
  02e57c4  bt 1, 0x2e57cc
  02e57c8  b 0x2e58ec
  02e57cc  fsubs 6, 3, 5
  02e57d0  fadds 3, 3, 5
  02e57d4  addic 3, 1, 16
  02e57d8  li 6, 2
  02e57dc  addic 5, 3, 396
  02e57e0  addic 4, 3, 380
  02e57e4  mtctr 6
  02e57e8  fdivs 3, 6, 3
  02e57ec  fmuls 5, 3, 3
  02e57f0  stfs 3, 408(1)
  02e57f4  stfs 3, 400(1)
  02e57f8  stfs 3, 404(1)
  02e57fc  stfs 3, 396(1)
  02e5800  lfs 7, 408(1)
  02e5804  lfs 8, 400(1)
  02e5808  lfs 9, 404(1)
  02e580c  fmuls 6, 5, 5
  02e5810  fmuls 8, 8, 5
  02e5814  fmuls 7, 7, 6
  02e5818  fmuls 3, 6, 6
  02e581c  fmuls 6, 9, 6
  02e5820  stfs 8, 400(1)
  02e5824  fmuls 5, 7, 5
  02e5828  stfs 6, 404(1)
  02e582c  stfs 5, 408(1)
  02e5830  lfs 5, 380(3)
  02e5834  fmuls 5, 5, 3
  02e5838  stfs 5, 396(3)
  02e583c  lfs 5, 4(4)
  02e5840  addic 4, 4, 8
  02e5844  fmuls 5, 5, 3
  02e5848  addic 3, 3, 8
  02e584c  stfs 5, 4(5)
  02e5850  addic 5, 5, 8
  02e5854  bdnz 0x2e5830
  02e5858  li 5, 4
  02e585c  ori 3, 1, 0
  02e5860  mtctr 5
  02e5864  lis 4, 115
  02e5868  addic 5, 3, 396
  02e586c  addic 4, 4, 22752
  02e5870  ori 7, 5, 0
  02e5874  lfs 3, 396(3)
  02e5878  lfs 5, 0(4)
  02e587c  fmuls 3, 3, 5
  02e5880  lfs 5, 4(4)
  02e5884  addic 4, 4, 8
  02e5888  stfs 3, 396(3)
  02e588c  lfs 3, 4(5)
  02e5890  addic 3, 3, 8
  02e5894  fmuls 3, 3, 5
  02e5898  stfs 3, 4(5)
  02e589c  addic 5, 5, 8
  02e58a0  bdnz 0x2e5874
  02e58a4  ori 3, 1, 0
  02e58a8  mtctr 6
  02e58ac  lfs 3, 396(3)
  02e58b0  fadds 3, 4, 3
  02e58b4  addic 3, 3, 16
  02e58b8  lfs 4, 4(7)
  02e58bc  lfs 5, 8(7)
  02e58c0  lfs 6, 12(7)
  02e58c4  addic 7, 7, 16
  02e58c8  fadds 3, 3, 4
  02e58cc  fadds 4, 3, 5
  02e58d0  fadds 4, 4, 6
  02e58d4  bdnz 0x2e58ac
  02e58d8  lis 3, 46
  02e58dc  addi 3, 3, 22080
  02e58e0  lfs 3, 4(3)
  02e58e4  fadds 4, 4, 3
  02e58e8  fmadds 4, 4, 1, 2
  02e58ec  ori 3, 31, 0
  02e58f0  fmr 1, 4
  02e58f4  ori 4, 30, 0
  02e58f8  li 6, 3
  02e58fc  li 7, 5
  02e5900  li 8, 0
  02e5904  bl 0x10ad80
  02e5908  nop
  02e590c  li 3, 99
  02e5910  stb 3, 32(31)
  02e5914  li 4, 255
  02e5918  cmpwi 3, 99
  02e591c  cmpwi 1, 3, 4
  02e5920  stb 4, 164(31)
  02e5924  bt 2, 0x2e66f4
  02e5928  cmpwi 6, 3, 3
  02e592c  bt 6, 0x2e6398
  02e5930  cmpwi 1, 3, 2
  02e5934  bt 26, 0x2e5dd0
  02e5938  cmpwi 6, 3, 1
  02e593c  bt 6, 0x2e5a6c
  02e5940  cmpwi 1, 3, 0
  02e5944  bt 26, 0x2e5a30
  02e5948  bf 6, 0x2e6724
  02e594c  lis 3, 46
  02e5950  lwz 5, 36(31)
  02e5954  li 4, 1
  02e5958  addi 3, 3, 22080
  02e595c  lfs 1, 8(3)
  02e5960  lfs 2, 36(5)
  02e5964  li 3, 255
  02e5968  stb 4, 32(31)
  02e596c  fmuls 1, 2, 1
  02e5970  stfs 1, 44(31)
  02e5974  bl 0xfc620
  02e5978  nop
  02e597c  clrlwi 3, 3, 31
  02e5980  cmpwi 3, 0
  02e5984  bt 2, 0x2e599c
  02e5988  lis 3, 0
  02e598c  lhz 4, 52(31)
  02e5990  ori 3, 3, 32768
  02e5994  or 3, 4, 3
  02e5998  sth 3, 52(31)
  02e599c  addic 3, 30, 96
  02e59a0  bl 0x100f8c
  02e59a4  nop
  02e59a8  lis 3, 16384
  02e59ac  lis 5, 46
  02e59b0  li 4, 909
  02e59b4  addi 5, 5, 22080
  02e59b8  stw 3, 108(30)
  02e59bc  lis 3, 114
  02e59c0  stw 4, 96(30)
  02e59c4  lfs 1, 12(5)
  02e59c8  lfs 2, -3064(3)
  02e59cc  fmuls 1, 2, 1
  02e59d0  stfs 1, 132(30)
  02e59d4  lfs 1, 16(5)
  02e59d8  lfs 2, 4(5)
  02e59dc  bl 0xfcbe8
  02e59e0  nop
  02e59e4  stfs 1, 196(30)
  02e59e8  lfs 1, 16(31)
  02e59ec  stfs 1, 176(30)
  02e59f0  lfs 1, 20(31)
  02e59f4  stfs 1, 180(30)
  02e59f8  lfs 1, 24(31)
  02e59fc  stfs 1, 184(30)
  02e5a00  lfs 1, 28(31)
  02e5a04  stfs 1, 188(30)
  02e5a08  lbz 3, 83(31)
  02e5a0c  cmpwi 3, 1
  02e5a10  bt 2, 0x2e6724
  02e5a14  ori 3, 31, 0
  02e5a18  li 4, 1
  02e5a1c  li 5, 0
  02e5a20  li 6, 3
  02e5a24  bl 0xfddc0
  02e5a28  nop
  02e5a2c  b 0x2e6724
  02e5a30  lbz 3, 188(31)
  02e5a34  cmpwi 3, 1
  02e5a38  bf 2, 0x2e6724
  02e5a3c  li 3, 2
  02e5a40  lbz 4, 83(31)
  02e5a44  cmpwi 4, 0
  02e5a48  stb 3, 32(31)
  02e5a4c  bt 2, 0x2e6724
  02e5a50  ori 3, 31, 0
  02e5a54  li 4, 0
  02e5a58  li 5, 0
  02e5a5c  li 6, 3
  02e5a60  bl 0xfddc0
  02e5a64  nop
  02e5a68  b 0x2e6724
  02e5a6c  lis 29, 151
  02e5a70  lfs 1, 16(31)
  02e5a74  addic 29, 29, -25376
  02e5a78  lfs 2, 20(31)
  02e5a7c  lis 3, 46
  02e5a80  addi 3, 3, 22080
  02e5a84  lfs 3, 128(29)
  02e5a88  lfs 4, 132(29)
  02e5a8c  fsubs 1, 3, 1
  02e5a90  fsubs 2, 4, 2
  02e5a94  lis 4, 115
  02e5a98  addic 4, 4, 22784
  02e5a9c  fabs 3, 1
  02e5aa0  fabs 5, 2
  02e5aa4  stfs 1, 244(1)
  02e5aa8  stfs 2, 248(1)
  02e5aac  fsubs 1, 3, 5
  02e5ab0  stfs 1, 252(1)
  02e5ab4  lwz 5, 244(1)
  02e5ab8  lfs 4, 0(3)
  02e5abc  lfs 1, 244(1)
  02e5ac0  lwz 3, 248(1)
  02e5ac4  lfs 2, 248(1)
  02e5ac8  lwz 6, 252(1)
  02e5acc  rlwinm 3, 3, 3, 29, 29
  02e5ad0  fabs 6, 2
  02e5ad4  lfs 2, 252(1)
  02e5ad8  fabs 1, 1
  02e5adc  rlwimi 3, 6, 2, 30, 30
  02e5ae0  fsub 7, 2, 4
  02e5ae4  rlwimi 3, 5, 4, 28, 28
  02e5ae8  fsub 8, 2, 4
  02e5aec  ori 5, 4, 0
  02e5af0  rlwimi 5, 3, 2, 26, 28
  02e5af4  slwi 3, 3, 2
  02e5af8  clrldi 5, 5, 32
  02e5afc  fsel 5, 7, 1, 5
  02e5b00  lfsx 1, 4, 3
  02e5b04  lfs 2, 4(5)
  02e5b08  fsel 3, 8, 6, 3
  02e5b0c  fcmpu 0, 5, 4
  02e5b10  bt 1, 0x2e5b18
  02e5b14  b 0x2e5c38
  02e5b18  fsubs 6, 3, 5
  02e5b1c  fadds 3, 3, 5
  02e5b20  addic 3, 1, 16
  02e5b24  li 6, 2
  02e5b28  addic 4, 3, 348
  02e5b2c  addic 5, 3, 364
  02e5b30  mtctr 6
  02e5b34  fdivs 3, 6, 3
  02e5b38  fmuls 5, 3, 3
  02e5b3c  stfs 3, 376(1)
  02e5b40  stfs 3, 368(1)
  02e5b44  stfs 3, 372(1)
  02e5b48  stfs 3, 364(1)
  02e5b4c  lfs 7, 376(1)
  02e5b50  lfs 8, 368(1)
  02e5b54  lfs 9, 372(1)
  02e5b58  fmuls 6, 5, 5
  02e5b5c  fmuls 8, 8, 5
  02e5b60  fmuls 7, 7, 6
  02e5b64  fmuls 3, 6, 6
  02e5b68  fmuls 6, 9, 6
  02e5b6c  stfs 8, 368(1)
  02e5b70  fmuls 5, 7, 5
  02e5b74  stfs 6, 372(1)
  02e5b78  stfs 5, 376(1)
  02e5b7c  lfs 5, 348(3)
  02e5b80  fmuls 5, 5, 3
  02e5b84  stfs 5, 364(3)
  02e5b88  lfs 5, 4(4)
  02e5b8c  addic 3, 3, 8
  02e5b90  addic 4, 4, 8
  02e5b94  fmuls 5, 5, 3
  02e5b98  stfs 5, 4(5)
  02e5b9c  addic 5, 5, 8
  02e5ba0  bdnz 0x2e5b7c
  02e5ba4  li 5, 4
  02e5ba8  ori 3, 1, 0
  02e5bac  mtctr 5
  02e5bb0  lis 4, 115
  02e5bb4  addic 5, 3, 364
  02e5bb8  addic 4, 4, 22752
  02e5bbc  ori 7, 5, 0
  02e5bc0  lfs 3, 364(3)
  02e5bc4  lfs 5, 0(4)
  02e5bc8  fmuls 3, 3, 5
  02e5bcc  lfs 5, 4(4)
  02e5bd0  addic 4, 4, 8
  02e5bd4  stfs 3, 364(3)
  02e5bd8  lfs 3, 4(5)
  02e5bdc  addic 3, 3, 8
  02e5be0  fmuls 3, 3, 5
  02e5be4  stfs 3, 4(5)
  02e5be8  addic 5, 5, 8
  02e5bec  bdnz 0x2e5bc0
  02e5bf0  ori 3, 1, 0
  02e5bf4  mtctr 6
  02e5bf8  lfs 3, 364(3)
  02e5bfc  fadds 3, 4, 3
  02e5c00  lfs 4, 4(7)
  02e5c04  addic 3, 3, 16
  02e5c08  lfs 5, 8(7)
  02e5c0c  lfs 6, 12(7)
  02e5c10  addic 7, 7, 16
  02e5c14  fadds 3, 3, 4
  02e5c18  fadds 4, 3, 5
  02e5c1c  fadds 4, 4, 6
  02e5c20  bdnz 0x2e5bf8
  02e5c24  lis 3, 46
  02e5c28  addi 3, 3, 22080
  02e5c2c  lfs 3, 4(3)
  02e5c30  fadds 4, 4, 3
  02e5c34  fmadds 4, 4, 1, 2
  02e5c38  lis 3, 46
  02e5c3c  lfs 1, 196(30)
  02e5c40  addic 5, 30, 192
  02e5c44  addi 28, 3, 22080
  02e5c48  fadds 1, 4, 1
  02e5c4c  ori 3, 31, 0
  02e5c50  lfs 31, 28(28)
  02e5c54  lfs 2, 20(28)
  02e5c58  lfs 3, 24(28)
  02e5c5c  fmr 4, 31
  02e5c60  bl 0xff2e8
  02e5c64  nop
  02e5c68  lfs 1, 32(28)
  02e5c6c  lfs 2, 36(28)
  02e5c70  lfs 3, 72(31)
  02e5c74  lfs 4, 40(28)
  02e5c78  fadds 1, 3, 1
  02e5c7c  fsubs 5, 2, 3
  02e5c80  fsubs 6, 4, 3
  02e5c84  li 3, 0
  02e5c88  addic 4, 30, 96
  02e5c8c  addic 5, 1, 112
  02e5c90  addic 6, 1, 128
  02e5c94  fsubs 2, 2, 1
  02e5c98  fsub 7, 3, 5
  02e5c9c  fsubs 4, 4, 1
  02e5ca0  fsub 8, 1, 2
  02e5ca4  fsel 3, 7, 5, 3
  02e5ca8  lfs 5, 44(28)
  02e5cac  fsel 1, 8, 2, 1
  02e5cb0  fsub 2, 6, 3
  02e5cb4  fsub 7, 4, 1
  02e5cb8  fsel 2, 2, 6, 3
  02e5cbc  lfs 3, 48(28)
  02e5cc0  lfs 6, 52(28)
  02e5cc4  fsel 1, 7, 4, 1
  02e5cc8  fmuls 4, 2, 2
  02e5ccc  fmuls 7, 1, 1
  02e5cd0  fmuls 8, 4, 2
  02e5cd4  fmuls 10, 7, 1
  02e5cd8  fmuls 11, 4, 8
  02e5cdc  fmadds 2, 8, 5, 2
  02e5ce0  lfs 8, 56(28)
  02e5ce4  lfs 30, 60(28)
  02e5ce8  stw 3, 120(1)
  02e5cec  ori 3, 31, 0
  02e5cf0  fmuls 12, 7, 10
  02e5cf4  fmadds 1, 10, 5, 1
  02e5cf8  fmuls 5, 4, 11
  02e5cfc  fmadds 2, 11, 3, 2
  02e5d00  fmuls 9, 7, 12
  02e5d04  fmadds 1, 12, 3, 1
  02e5d08  fmuls 3, 4, 5
  02e5d0c  fmadds 2, 5, 6, 2
  02e5d10  fmuls 4, 7, 9
  02e5d14  fmadds 1, 9, 6, 1
  02e5d18  fmadds 2, 3, 8, 2
  02e5d1c  fmadds 1, 4, 8, 1
  02e5d20  fmuls 2, 2, 30
  02e5d24  fmuls 3, 1, 30
  02e5d28  stfs 2, 116(1)
  02e5d2c  lfs 1, 64(28)
  02e5d30  stfs 3, 112(1)
  02e5d34  bl 0x101058
  02e5d38  nop
  02e5d3c  lfs 1, 20(31)
  02e5d40  lfs 2, 132(29)
  02e5d44  lfs 3, 16(31)
  02e5d48  fsubs 1, 1, 2
  02e5d4c  lfs 2, 128(29)
  02e5d50  fsubs 2, 3, 2
  02e5d54  fmuls 1, 1, 1
  02e5d58  fmadds 1, 2, 2, 1
  02e5d5c  fsqrts 1, 1
  02e5d60  fcmpu 0, 1, 30
  02e5d64  cror 6, 1, 2
  02e5d68  bt 6, 0x2e5d98
  02e5d6c  li 3, 3
  02e5d70  lbz 4, 83(31)
  02e5d74  cmpwi 4, 2
  02e5d78  stb 3, 32(31)
  02e5d7c  bt 2, 0x2e5d98
  02e5d80  ori 3, 31, 0
  02e5d84  li 4, 2
  02e5d88  li 5, 0
  02e5d8c  li 6, 3
  02e5d90  bl 0xfddc0
  02e5d94  nop
  02e5d98  lfs 1, 24(31)
  02e5d9c  lfs 2, 184(30)
  02e5da0  fsubs 1, 1, 2
  02e5da4  fcmpu 0, 1, 31
  02e5da8  cror 6, 0, 2
  02e5dac  bt 6, 0x2e5db8
  02e5db0  li 3, 1
  02e5db4  stb 3, 32(31)
  02e5db8  lbz 3, 188(31)
  02e5dbc  cmpwi 3, 2
  02e5dc0  bf 2, 0x2e6724
  02e5dc4  li 3, 4
  02e5dc8  stb 3, 32(31)
  02e5dcc  b 0x2e6724
  02e5dd0  lis 28, 151
  02e5dd4  lfs 1, 16(31)
  02e5dd8  lfs 2, 20(31)
  02e5ddc  addic 28, 28, -25376
  02e5de0  lis 3, 46
  02e5de4  addi 3, 3, 22080
  02e5de8  lfs 3, 128(28)
  02e5dec  lfs 4, 132(28)
  02e5df0  fsubs 1, 3, 1
  02e5df4  fsubs 2, 4, 2
  02e5df8  lis 29, 115
  02e5dfc  addic 29, 29, 22784
  02e5e00  fabs 3, 1
  02e5e04  fabs 4, 2
  02e5e08  stfs 1, 232(1)
  02e5e0c  stfs 2, 236(1)
  02e5e10  fsubs 1, 3, 4
  02e5e14  stfs 1, 240(1)
  02e5e18  lwz 4, 232(1)
  02e5e1c  lfs 31, 0(3)
  02e5e20  lfs 1, 232(1)
  02e5e24  lwz 3, 236(1)
  02e5e28  lfs 2, 236(1)
  02e5e2c  fabs 1, 1
  02e5e30  lwz 5, 240(1)
  02e5e34  rlwinm 3, 3, 3, 29, 29
  02e5e38  fabs 5, 2
  02e5e3c  lfs 2, 240(1)
  02e5e40  rlwimi 3, 5, 2, 30, 30
  02e5e44  fsub 6, 2, 31
  02e5e48  rlwimi 3, 4, 4, 28, 28
  02e5e4c  fsub 7, 2, 31
  02e5e50  ori 4, 29, 0
  02e5e54  rlwimi 4, 3, 2, 26, 28
  02e5e58  slwi 3, 3, 2
  02e5e5c  clrldi 4, 4, 32
  02e5e60  fsel 4, 6, 1, 4
  02e5e64  lfsx 1, 29, 3
  02e5e68  lfs 2, 4(4)
  02e5e6c  fsel 3, 7, 5, 3
  02e5e70  fcmpu 0, 4, 31
  02e5e74  bt 1, 0x2e5e80
  02e5e78  fmr 1, 31
  02e5e7c  b 0x2e5fa4
  02e5e80  fsubs 5, 3, 4
  02e5e84  fadds 3, 3, 4
  02e5e88  addic 3, 1, 16
  02e5e8c  li 6, 2
  02e5e90  addic 4, 3, 316
  02e5e94  addic 5, 3, 332
  02e5e98  mtctr 6
  02e5e9c  fdivs 3, 5, 3
  02e5ea0  fmuls 4, 3, 3
  02e5ea4  stfs 3, 344(1)
  02e5ea8  stfs 3, 336(1)
  02e5eac  stfs 3, 340(1)
  02e5eb0  stfs 3, 332(1)
  02e5eb4  lfs 6, 344(1)
  02e5eb8  lfs 7, 336(1)
  02e5ebc  lfs 8, 340(1)
  02e5ec0  fmuls 5, 4, 4
  02e5ec4  fmuls 7, 7, 4
  02e5ec8  fmuls 6, 6, 5
  02e5ecc  fmuls 3, 5, 5
  02e5ed0  fmuls 5, 8, 5
  02e5ed4  stfs 7, 336(1)
  02e5ed8  fmuls 4, 6, 4
  02e5edc  stfs 5, 340(1)
  02e5ee0  stfs 4, 344(1)
  02e5ee4  lfs 4, 316(3)
  02e5ee8  fmuls 4, 4, 3
  02e5eec  stfs 4, 332(3)
  02e5ef0  lfs 4, 4(4)
  02e5ef4  addic 3, 3, 8
  02e5ef8  addic 4, 4, 8
  02e5efc  fmuls 4, 4, 3
  02e5f00  stfs 4, 4(5)
  02e5f04  addic 5, 5, 8
  02e5f08  bdnz 0x2e5ee4
  02e5f0c  li 5, 4
  02e5f10  ori 3, 1, 0
  02e5f14  mtctr 5
  02e5f18  lis 4, 115
  02e5f1c  addic 5, 3, 332
  02e5f20  addic 4, 4, 22752
  02e5f24  ori 7, 5, 0
  02e5f28  lfs 3, 332(3)
  02e5f2c  lfs 4, 0(4)
  02e5f30  fmuls 3, 3, 4
  02e5f34  lfs 4, 4(4)
  02e5f38  addic 4, 4, 8
  02e5f3c  stfs 3, 332(3)
  02e5f40  lfs 3, 4(5)
  02e5f44  addic 3, 3, 8
  02e5f48  fmuls 3, 3, 4
  02e5f4c  stfs 3, 4(5)
  02e5f50  addic 5, 5, 8
  02e5f54  bdnz 0x2e5f28
  02e5f58  fmr 3, 31
  02e5f5c  ori 3, 1, 0
  02e5f60  mtctr 6
  02e5f64  lfs 4, 332(3)
  02e5f68  fadds 3, 3, 4
  02e5f6c  addic 3, 3, 16
  02e5f70  lfs 4, 4(7)
  02e5f74  lfs 5, 8(7)
  02e5f78  lfs 6, 12(7)
  02e5f7c  addic 7, 7, 16
  02e5f80  fadds 3, 3, 4
  02e5f84  fadds 3, 3, 5
  02e5f88  fadds 3, 3, 6
  02e5f8c  bdnz 0x2e5f64
  02e5f90  lis 3, 46
  02e5f94  addi 3, 3, 22080
  02e5f98  lfs 4, 4(3)
  02e5f9c  fadds 3, 3, 4
  02e5fa0  fmadds 1, 3, 1, 2
  02e5fa4  lis 3, 46
  02e5fa8  addic 5, 30, 192
  02e5fac  addi 4, 3, 22080
  02e5fb0  ori 3, 31, 0
  02e5fb4  lfs 2, 20(4)
  02e5fb8  lfs 3, 24(4)
  02e5fbc  lfs 4, 28(4)
  02e5fc0  bl 0xff2e8
  02e5fc4  nop
  02e5fc8  lbz 3, 82(31)
  02e5fcc  lbz 4, 83(31)
  02e5fd0  cmpw 3, 4
  02e5fd4  bf 2, 0x2e6358
  02e5fd8  ori 3, 31, 0
  02e5fdc  bl 0xefe40
  02e5fe0  nop
  02e5fe4  lis 3, 46
  02e5fe8  addi 3, 3, 22080
  02e5fec  lfs 2, 68(3)
  02e5ff0  fcmpu 0, 1, 2
  02e5ff4  bt 0, 0x2e6358
  02e5ff8  ori 3, 31, 0
  02e5ffc  bl 0xefe40
  02e6000  nop
  02e6004  lis 3, 46
  02e6008  lfs 5, 72(31)
  02e600c  addi 3, 3, 22080
  02e6010  lfs 2, 72(3)
  02e6014  fcmpu 0, 1, 2
  02e6018  cror 6, 1, 2
  02e601c  bt 6, 0x2e6358
  02e6020  lfs 1, 24(31)
  02e6024  lis 3, 46
  02e6028  lfs 2, 136(28)
  02e602c  addi 3, 3, 22080
  02e6030  fsubs 1, 1, 2
  02e6034  lfs 30, 76(3)
  02e6038  fabs 1, 1
  02e603c  fcmpu 0, 1, 30
  02e6040  cror 6, 1, 2
  02e6044  bt 6, 0x2e6358
  02e6048  lfs 3, 20(31)
  02e604c  lfs 4, 132(28)
  02e6050  lfs 1, 16(31)
  02e6054  fsubs 6, 3, 4
  02e6058  lfs 2, 128(28)
  02e605c  fsubs 7, 1, 2
  02e6060  lis 3, 46
  02e6064  addi 3, 3, 22080
  02e6068  fmuls 6, 6, 6
  02e606c  fmadds 6, 7, 7, 6
  02e6070  lfs 7, 60(3)
  02e6074  fsqrts 6, 6
  02e6078  fcmpu 0, 6, 7
  02e607c  cror 6, 1, 2
  02e6080  bt 6, 0x2e6358
  02e6084  fsubs 1, 2, 1
  02e6088  fsubs 2, 4, 3
  02e608c  fabs 3, 1
  02e6090  fabs 4, 2
  02e6094  stfs 1, 220(1)
  02e6098  stfs 2, 224(1)
  02e609c  fsubs 1, 3, 4
  02e60a0  stfs 1, 228(1)
  02e60a4  lwz 3, 220(1)
  02e60a8  lfs 1, 220(1)
  02e60ac  lwz 4, 224(1)
  02e60b0  lfs 2, 224(1)
  02e60b4  fabs 1, 1
  02e60b8  lwz 5, 228(1)
  02e60bc  rlwinm 4, 4, 3, 29, 29
  02e60c0  lfs 6, 228(1)
  02e60c4  fabs 2, 2
  02e60c8  rlwimi 4, 5, 2, 30, 30
  02e60cc  fsub 7, 6, 31
  02e60d0  fsub 6, 6, 31
  02e60d4  rlwimi 4, 3, 4, 28, 28
  02e60d8  ori 3, 29, 0
  02e60dc  rlwimi 3, 4, 2, 26, 28
  02e60e0  slwi 4, 4, 2
  02e60e4  clrldi 3, 3, 32
  02e60e8  fsel 4, 7, 1, 4
  02e60ec  lfsx 1, 29, 4
  02e60f0  fsel 3, 6, 2, 3
  02e60f4  lfs 2, 4(3)
  02e60f8  fcmpu 0, 4, 31
  02e60fc  bt 1, 0x2e6104
  02e6100  b 0x2e6224
  02e6104  fsubs 6, 3, 4
  02e6108  fadds 3, 3, 4
  02e610c  addic 3, 1, 16
  02e6110  li 7, 2
  02e6114  addic 5, 3, 300
  02e6118  addic 4, 3, 284
  02e611c  mtctr 7
  02e6120  fdivs 3, 6, 3
  02e6124  fmuls 4, 3, 3
  02e6128  stfs 3, 312(1)
  02e612c  stfs 3, 304(1)
  02e6130  stfs 3, 308(1)
  02e6134  stfs 3, 300(1)
  02e6138  lfs 7, 312(1)
  02e613c  lfs 8, 304(1)
  02e6140  lfs 9, 308(1)
  02e6144  fmuls 6, 4, 4
  02e6148  fmuls 8, 8, 4
  02e614c  fmuls 7, 7, 6
  02e6150  fmuls 3, 6, 6
  02e6154  fmuls 6, 9, 6
  02e6158  stfs 8, 304(1)
  02e615c  fmuls 4, 7, 4
  02e6160  stfs 6, 308(1)
  02e6164  stfs 4, 312(1)
  02e6168  lfs 4, 284(3)
  02e616c  fmuls 4, 4, 3
  02e6170  stfs 4, 300(3)
  02e6174  lfs 4, 4(4)
  02e6178  addic 4, 4, 8
  02e617c  fmuls 4, 4, 3
  02e6180  addic 3, 3, 8
  02e6184  stfs 4, 4(5)
  02e6188  addic 5, 5, 8
  02e618c  bdnz 0x2e6168
  02e6190  li 5, 4
  02e6194  ori 3, 1, 0
  02e6198  mtctr 5
  02e619c  lis 4, 115
  02e61a0  addic 5, 3, 300
  02e61a4  addic 4, 4, 22752
  02e61a8  ori 6, 5, 0
  02e61ac  lfs 3, 300(3)
  02e61b0  lfs 4, 0(4)
  02e61b4  fmuls 3, 3, 4
  02e61b8  lfs 4, 4(4)
  02e61bc  addic 4, 4, 8
  02e61c0  stfs 3, 300(3)
  02e61c4  lfs 3, 4(5)
  02e61c8  addic 3, 3, 8
  02e61cc  fmuls 3, 3, 4
  02e61d0  stfs 3, 4(5)
  02e61d4  addic 5, 5, 8
  02e61d8  bdnz 0x2e61ac
  02e61dc  ori 3, 1, 0
  02e61e0  mtctr 7
  02e61e4  lfs 3, 300(3)
  02e61e8  lfs 4, 4(6)
  02e61ec  fadds 3, 31, 3
  02e61f0  lfs 6, 8(6)
  02e61f4  addic 3, 3, 16
  02e61f8  lfs 31, 12(6)
  02e61fc  addic 6, 6, 16
  02e6200  fadds 3, 3, 4
  02e6204  fadds 3, 3, 6
  02e6208  fadds 31, 3, 31
  02e620c  bdnz 0x2e61e4
  02e6210  lis 3, 46
  02e6214  addi 3, 3, 22080
  02e6218  lfs 3, 4(3)
  02e621c  fadds 31, 31, 3
  02e6220  fmadds 31, 31, 1, 2
  02e6224  fmr 1, 31
  02e6228  fmr 2, 5
  02e622c  bl 0x5026a0
  02e6230  nop
  02e6234  lis 3, 46
  02e6238  addi 3, 3, 22080
  02e623c  lfs 2, 80(3)
  02e6240  fcmpu 0, 1, 2
  02e6244  cror 6, 1, 2
  02e6248  bt 6, 0x2e6358
  02e624c  lis 3, 46
  02e6250  lfs 1, 72(31)
  02e6254  addi 6, 3, 22080
  02e6258  lfs 2, 32(6)
  02e625c  lfs 3, 36(6)
  02e6260  fadds 2, 1, 2
  02e6264  lfs 4, 40(6)
  02e6268  fsubs 5, 3, 1
  02e626c  li 3, 0
  02e6270  addic 7, 1, 160
  02e6274  addic 8, 1, 144
  02e6278  li 5, 1
  02e627c  fsubs 3, 3, 2
  02e6280  fsub 7, 1, 5
  02e6284  fsubs 6, 4, 2
  02e6288  fsubs 4, 4, 1
  02e628c  fsub 8, 2, 3
  02e6290  fsel 1, 7, 5, 1
  02e6294  fsel 2, 8, 3, 2
  02e6298  fsub 5, 4, 1
  02e629c  lfs 3, 44(6)
  02e62a0  fsub 7, 6, 2
  02e62a4  fsel 1, 5, 4, 1
  02e62a8  lfs 4, 48(6)
  02e62ac  lfs 5, 52(6)
  02e62b0  lfs 9, 56(6)
  02e62b4  lwz 4, 8320(28)
  02e62b8  stw 3, 152(1)
  02e62bc  fsel 2, 7, 6, 2
  02e62c0  fmuls 6, 1, 1
  02e62c4  ori 3, 4, 0
  02e62c8  fmuls 7, 2, 2
  02e62cc  fmuls 8, 6, 1
  02e62d0  fmuls 10, 7, 2
  02e62d4  fmuls 11, 6, 8
  02e62d8  fmadds 1, 8, 3, 1
  02e62dc  fmuls 8, 7, 10
  02e62e0  fmadds 2, 10, 3, 2
  02e62e4  fmuls 3, 6, 11
  02e62e8  fmadds 1, 11, 4, 1
  02e62ec  fmuls 10, 7, 8
  02e62f0  fmadds 2, 8, 4, 2
  02e62f4  fmuls 4, 6, 3
  02e62f8  fmadds 1, 3, 5, 1
  02e62fc  fmuls 3, 7, 10
  02e6300  fmadds 2, 10, 5, 2
  02e6304  fmadds 1, 4, 9, 1
  02e6308  fmadds 2, 3, 9, 2
  02e630c  fmuls 1, 1, 30
  02e6310  fmuls 2, 2, 30
  02e6314  stfs 1, 148(1)
  02e6318  stfs 2, 144(1)
  02e631c  lfs 1, 16(4)
  02e6320  stfs 1, 160(1)
  02e6324  lfs 1, 20(4)
  02e6328  stfs 1, 164(1)
  02e632c  lfs 1, 24(4)
  02e6330  stfs 1, 168(1)
  02e6334  lfs 2, 28(4)
  02e6338  ori 4, 31, 0
  02e633c  stfs 2, 172(1)
  02e6340  lfs 2, 84(6)
  02e6344  fadds 1, 1, 2
  02e6348  stfs 1, 168(1)
  02e634c  lfs 1, 64(6)
  02e6350  bl 0x105c08
  02e6354  nop
  02e6358  lbz 3, 112(31)
  02e635c  rlwinm 3, 3, 0, 30, 30
  02e6360  cmpwi 3, 0
  02e6364  bt 2, 0x2e6724
  02e6368  li 3, 2
  02e636c  lbz 4, 83(31)
  02e6370  cmpwi 4, 0
  02e6374  stb 3, 32(31)
  02e6378  bt 2, 0x2e6724
  02e637c  ori 3, 31, 0
  02e6380  li 4, 0
  02e6384  li 5, 0
  02e6388  li 6, 3
  02e638c  bl 0xfddc0
  02e6390  nop
  02e6394  b 0x2e6724
  02e6398  lfs 1, 176(30)
  02e639c  lfs 2, 16(31)
  02e63a0  lfs 3, 180(30)
  02e63a4  lis 3, 46
  02e63a8  lfs 4, 20(31)
  02e63ac  fsubs 1, 1, 2
  02e63b0  addi 3, 3, 22080
  02e63b4  fsubs 2, 3, 4
  02e63b8  lis 4, 115
  02e63bc  addic 4, 4, 22784
  02e63c0  fabs 3, 1
  02e63c4  fabs 5, 2
  02e63c8  stfs 1, 208(1)
  02e63cc  stfs 2, 212(1)
  02e63d0  fsubs 1, 3, 5
  02e63d4  stfs 1, 216(1)
  02e63d8  lwz 5, 208(1)
  02e63dc  lfs 4, 0(3)
  02e63e0  lfs 1, 208(1)
  02e63e4  lwz 3, 212(1)
  02e63e8  lfs 2, 212(1)
  02e63ec  fabs 1, 1
  02e63f0  lwz 6, 216(1)
  02e63f4  rlwinm 3, 3, 3, 29, 29
  02e63f8  fabs 6, 2
  02e63fc  lfs 2, 216(1)
  02e6400  rlwimi 3, 6, 2, 30, 30
  02e6404  fsub 7, 2, 4
  02e6408  rlwimi 3, 5, 4, 28, 28
  02e640c  fsub 8, 2, 4
  02e6410  ori 5, 4, 0
  02e6414  rlwimi 5, 3, 2, 26, 28
  02e6418  slwi 3, 3, 2
  02e641c  clrldi 5, 5, 32
  02e6420  fsel 5, 7, 1, 5
  02e6424  lfsx 1, 4, 3
  02e6428  lfs 2, 4(5)
  02e642c  fsel 3, 8, 6, 3
  02e6430  fcmpu 0, 5, 4
  02e6434  bt 1, 0x2e643c
  02e6438  b 0x2e655c
  02e643c  fsubs 6, 3, 5
  02e6440  fadds 3, 3, 5
  02e6444  addic 3, 1, 16
  02e6448  li 6, 2
  02e644c  addic 5, 3, 268
  02e6450  addic 4, 3, 252
  02e6454  mtctr 6
  02e6458  fdivs 3, 6, 3
  02e645c  fmuls 5, 3, 3
  02e6460  stfs 3, 280(1)
  02e6464  stfs 3, 272(1)
  02e6468  stfs 3, 276(1)
  02e646c  stfs 3, 268(1)
  02e6470  lfs 7, 280(1)
  02e6474  lfs 8, 272(1)
  02e6478  lfs 9, 276(1)
  02e647c  fmuls 6, 5, 5
  02e6480  fmuls 8, 8, 5
  02e6484  fmuls 7, 7, 6
  02e6488  fmuls 3, 6, 6
  02e648c  fmuls 6, 9, 6
  02e6490  stfs 8, 272(1)
  02e6494  fmuls 5, 7, 5
  02e6498  stfs 6, 276(1)
  02e649c  stfs 5, 280(1)
  02e64a0  lfs 5, 252(3)
  02e64a4  fmuls 5, 5, 3
  02e64a8  stfs 5, 268(3)
  02e64ac  lfs 5, 4(4)
  02e64b0  addic 4, 4, 8
  02e64b4  fmuls 5, 5, 3
  02e64b8  addic 3, 3, 8
  02e64bc  stfs 5, 4(5)
  02e64c0  addic 5, 5, 8
  02e64c4  bdnz 0x2e64a0
  02e64c8  li 5, 4
  02e64cc  ori 3, 1, 0
  02e64d0  mtctr 5
  02e64d4  lis 4, 115
  02e64d8  addic 5, 3, 268
  02e64dc  addic 4, 4, 22752
  02e64e0  ori 7, 5, 0
  02e64e4  lfs 3, 268(3)
  02e64e8  lfs 5, 0(4)
  02e64ec  fmuls 3, 3, 5
  02e64f0  lfs 5, 4(4)
  02e64f4  addic 4, 4, 8
  02e64f8  stfs 3, 268(3)
  02e64fc  lfs 3, 4(5)
  02e6500  addic 3, 3, 8
  02e6504  fmuls 3, 3, 5
  02e6508  stfs 3, 4(5)
  02e650c  addic 5, 5, 8
  02e6510  bdnz 0x2e64e4
  02e6514  ori 3, 1, 0
  02e6518  mtctr 6
  02e651c  lfs 3, 268(3)
  02e6520  fadds 3, 4, 3
  02e6524  addic 3, 3, 16
  02e6528  lfs 4, 4(7)
  02e652c  lfs 5, 8(7)
  02e6530  lfs 6, 12(7)
  02e6534  addic 7, 7, 16
  02e6538  fadds 3, 3, 4
  02e653c  fadds 4, 3, 5
  02e6540  fadds 4, 4, 6
  02e6544  bdnz 0x2e651c
  02e6548  lis 3, 46
  02e654c  addi 3, 3, 22080
  02e6550  lfs 3, 4(3)
  02e6554  fadds 4, 4, 3
  02e6558  fmadds 4, 4, 1, 2
  02e655c  lis 3, 46
  02e6560  fmr 1, 4
  02e6564  addic 5, 30, 192
  02e6568  addi 29, 3, 22080
  02e656c  ori 3, 31, 0
  02e6570  lfs 4, 28(29)
  02e6574  lfs 2, 20(29)
  02e6578  lfs 5, 24(29)
  02e657c  fmr 3, 5
  02e6580  bl 0xff2e8
  02e6584  nop
  02e6588  lfs 1, 32(29)
  02e658c  lfs 2, 36(29)
  02e6590  lfs 3, 72(31)
  02e6594  lfs 4, 40(29)
  02e6598  fadds 1, 3, 1
  02e659c  fsubs 5, 2, 3
  02e65a0  fsubs 6, 4, 3
  02e65a4  li 3, 0
  02e65a8  addic 4, 30, 96
  02e65ac  addic 5, 1, 176
  02e65b0  addic 6, 1, 192
  02e65b4  fsubs 2, 2, 1
  02e65b8  fsub 7, 3, 5
  02e65bc  fsubs 4, 4, 1
  02e65c0  fsub 8, 1, 2
  02e65c4  fsel 3, 7, 5, 3
  02e65c8  lfs 5, 44(29)
  02e65cc  fsel 1, 8, 2, 1
  02e65d0  fsub 2, 6, 3
  02e65d4  fsub 7, 4, 1
  02e65d8  fsel 2, 2, 6, 3
  02e65dc  lfs 3, 48(29)
  02e65e0  lfs 6, 52(29)
  02e65e4  fsel 1, 7, 4, 1
  02e65e8  fmuls 4, 2, 2
  02e65ec  fmuls 7, 1, 1
  02e65f0  fmuls 8, 4, 2
  02e65f4  fmuls 10, 7, 1
  02e65f8  fmuls 11, 4, 8
  02e65fc  fmadds 2, 8, 5, 2
  02e6600  lfs 8, 56(29)
  02e6604  lfs 31, 60(29)
  02e6608  stw 3, 184(1)
  02e660c  ori 3, 31, 0
  02e6610  fmuls 12, 7, 10
  02e6614  fmadds 1, 10, 5, 1
  02e6618  fmuls 5, 4, 11
  02e661c  fmadds 2, 11, 3, 2
  02e6620  fmuls 9, 7, 12
  02e6624  fmadds 1, 12, 3, 1
  02e6628  fmuls 3, 4, 5
  02e662c  fmadds 2, 5, 6, 2
  02e6630  fmuls 4, 7, 9
  02e6634  fmadds 1, 9, 6, 1
  02e6638  fmadds 2, 3, 8, 2
  02e663c  fmadds 1, 4, 8, 1
  02e6640  fmuls 2, 2, 31
  02e6644  fmuls 3, 1, 31
  02e6648  stfs 2, 180(1)
  02e664c  lfs 1, 64(29)
  02e6650  stfs 3, 176(1)
  02e6654  bl 0x101058
  02e6658  nop
  02e665c  lfs 1, 20(31)
  02e6660  lfs 2, 180(30)
  02e6664  lfs 3, 16(31)
  02e6668  fsubs 1, 1, 2
  02e666c  lfs 2, 176(30)
  02e6670  fsubs 2, 3, 2
  02e6674  fmuls 1, 1, 1
  02e6678  fmadds 1, 2, 2, 1
  02e667c  fsqrts 1, 1
  02e6680  fcmpu 0, 1, 31
  02e6684  cror 6, 1, 2
  02e6688  bt 6, 0x2e66b8
  02e668c  li 3, 1
  02e6690  lbz 4, 83(31)
  02e6694  cmpwi 4, 1
  02e6698  stb 3, 32(31)
  02e669c  bt 2, 0x2e66b8
  02e66a0  ori 3, 31, 0
  02e66a4  li 4, 1
  02e66a8  li 5, 0
  02e66ac  li 6, 3
  02e66b0  bl 0xfddc0
  02e66b4  nop
  02e66b8  lbz 3, 188(31)
  02e66bc  cmpwi 3, 1
  02e66c0  bf 2, 0x2e6724
  02e66c4  li 3, 2
  02e66c8  lbz 4, 83(31)
  02e66cc  cmpwi 4, 0
  02e66d0  stb 3, 32(31)
  02e66d4  bt 2, 0x2e6724
  02e66d8  ori 3, 31, 0
  02e66dc  li 4, 0
  02e66e0  li 5, 0
  02e66e4  li 6, 3
  02e66e8  bl 0xfddc0
  02e66ec  nop
  02e66f0  b 0x2e6724
  02e66f4  ori 3, 31, 0
  02e66f8  ori 4, 30, 0
  02e66fc  bl 0x10b030
  02e6700  nop
  02e6704  rlwinm 3, 3, 0, 25, 25
  02e6708  cmpwi 3, 0
  02e670c  bt 2, 0x2e6724
  02e6710  li 3, 253
  02e6714  li 4, 0
  02e6718  stb 3, 32(31)
  02e671c  stw 4, 148(31)
  02e6720  b 0x2e6724
  02e6724  ld 0, 496(1)
  02e6728  mtlr 0
  02e672c  lfd 30, 464(1)
  02e6730  lfd 31, 472(1)
  02e6734  ld 28, 432(1)
  02e6738  ld 29, 440(1)
  02e673c  ld 30, 448(1)
  02e6740  ld 31, 456(1)
  02e6744  addi 1, 1, 480
  02e6748  blr

M199_002e674c:   # 0x2e674c, 0x14 bytes
  02e674c  lis 3, 128
  02e6750  lis 4, 1
  02e6754  addic 3, 3, -5788
  02e6758  stw 4, 72(3)
  02e675c  blr
