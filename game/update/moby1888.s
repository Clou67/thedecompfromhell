# game/update/moby1888.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1888:   # 0x2d0610, 0x4 bytes
  02d0610  blr

M1888_002d0630:   # 0x2d0630, 0x624 bytes
  02d0630  stdu 1, -320(1)
  02d0634  mflr 0
  02d0638  std 0, 336(1)
  02d063c  stfd 25, 264(1)
  02d0640  stfd 26, 272(1)
  02d0644  stfd 27, 280(1)
  02d0648  stfd 28, 288(1)
  02d064c  stfd 29, 296(1)
  02d0650  stfd 30, 304(1)
  02d0654  stfd 31, 312(1)
  02d0658  std 31, 256(1)
  02d065c  lis 7, 0
  02d0660  std 29, 240(1)
  02d0664  ori 31, 5, 0
  02d0668  li 29, 320
  02d066c  std 30, 248(1)
  02d0670  std 28, 232(1)
  02d0674  addc 29, 1, 29
  02d0678  std 3, 48(29)
  02d067c  std 4, 56(29)
  02d0680  li 3, 189
  02d0684  std 6, 72(29)
  02d0688  bl 0xefa28
  02d068c  nop
  02d0690  lfs 9, 48(29)
  02d0694  lfs 10, 56(29)
  02d0698  ori 30, 3, 0
  02d069c  lfs 11, 72(29)
  02d06a0  lfs 31, 52(29)
  02d06a4  cmpwi 30, 0
  02d06a8  lfs 30, 60(29)
  02d06ac  lfs 29, 76(29)
  02d06b0  bt 2, 0x2d0c14
  02d06b4  li 3, 127
  02d06b8  lis 6, 45
  02d06bc  li 5, 1
  02d06c0  addi 6, 6, 1560
  02d06c4  ori 4, 31, 0
  02d06c8  stb 3, 48(30)
  02d06cc  sth 3, 50(30)
  02d06d0  stb 5, 49(30)
  02d06d4  lfs 1, 0(6)
  02d06d8  std 4, 64(29)
  02d06dc  lfs 2, 68(29)
  02d06e0  lfs 3, 44(30)
  02d06e4  lwz 31, 120(30)
  02d06e8  fmuls 3, 3, 1
  02d06ec  lfs 1, 64(29)
  02d06f0  fabs 2, 2
  02d06f4  fabs 1, 1
  02d06f8  rldicl 5, 4, 32, 32
  02d06fc  rlwinm 4, 4, 3, 29, 29
  02d0700  lis 3, 115
  02d0704  ori 9, 4, 0
  02d0708  addic 3, 3, 22784
  02d070c  stfs 3, 44(30)
  02d0710  fsubs 7, 1, 2
  02d0714  stfs 7, 120(1)
  02d0718  lfs 8, 4(6)
  02d071c  lfs 6, 8(6)
  02d0720  lwz 6, 64(29)
  02d0724  lwz 7, 68(29)
  02d0728  lfs 12, 64(29)
  02d072c  lfs 13, 68(29)
  02d0730  lwz 8, 120(1)
  02d0734  lfs 3, 120(1)
  02d0738  rlwimi 9, 8, 2, 30, 30
  02d073c  fsub 0, 3, 8
  02d0740  ori 8, 3, 0
  02d0744  fsub 5, 3, 8
  02d0748  rlwimi 9, 5, 4, 28, 28
  02d074c  rlwimi 8, 9, 2, 26, 28
  02d0750  slwi 9, 9, 2
  02d0754  clrldi 8, 8, 32
  02d0758  lfsx 3, 3, 9
  02d075c  fsel 0, 0, 1, 2
  02d0760  lfs 4, 4(8)
  02d0764  fsel 5, 5, 2, 1
  02d0768  fcmpu 0, 0, 8
  02d076c  bt 1, 0x2d0778
  02d0770  fmr 3, 8
  02d0774  b 0x2d0890
  02d0778  fsubs 28, 5, 0
  02d077c  fadds 5, 5, 0
  02d0780  addic 8, 1, 16
  02d0784  li 12, 2
  02d0788  addic 10, 8, 188
  02d078c  addic 9, 8, 172
  02d0790  mtctr 12
  02d0794  fdivs 5, 28, 5
  02d0798  fmuls 0, 5, 5
  02d079c  stfs 5, 200(1)
  02d07a0  stfs 5, 192(1)
  02d07a4  stfs 5, 196(1)
  02d07a8  stfs 5, 188(1)
  02d07ac  lfs 27, 200(1)
  02d07b0  lfs 26, 192(1)
  02d07b4  lfs 25, 196(1)
  02d07b8  fmuls 28, 0, 0
  02d07bc  fmuls 26, 26, 0
  02d07c0  fmuls 27, 27, 28
  02d07c4  fmuls 5, 28, 28
  02d07c8  fmuls 28, 25, 28
  02d07cc  stfs 26, 192(1)
  02d07d0  fmuls 0, 27, 0
  02d07d4  stfs 28, 196(1)
  02d07d8  stfs 0, 200(1)
  02d07dc  lfs 0, 172(8)
  02d07e0  fmuls 0, 0, 5
  02d07e4  stfs 0, 188(8)
  02d07e8  lfs 0, 4(9)
  02d07ec  addic 9, 9, 8
  02d07f0  fmuls 0, 0, 5
  02d07f4  addic 8, 8, 8
  02d07f8  stfs 0, 4(10)
  02d07fc  addic 10, 10, 8
  02d0800  bdnz 0x2d07dc
  02d0804  li 10, 4
  02d0808  ori 8, 1, 0
  02d080c  mtctr 10
  02d0810  lis 9, 115
  02d0814  addic 10, 8, 188
  02d0818  addic 9, 9, 22752
  02d081c  ori 11, 10, 0
  02d0820  lfs 5, 188(8)
  02d0824  lfs 0, 0(9)
  02d0828  fmuls 5, 5, 0
  02d082c  lfs 0, 4(9)
  02d0830  addic 9, 9, 8
  02d0834  stfs 5, 188(8)
  02d0838  lfs 5, 4(10)
  02d083c  addic 8, 8, 8
  02d0840  fmuls 5, 5, 0
  02d0844  stfs 5, 4(10)
  02d0848  addic 10, 10, 8
  02d084c  bdnz 0x2d0820
  02d0850  ori 8, 1, 0
  02d0854  fmr 5, 8
  02d0858  mtctr 12
  02d085c  lfs 0, 188(8)
  02d0860  fadds 5, 5, 0
  02d0864  lfs 0, 4(11)
  02d0868  addic 8, 8, 16
  02d086c  lfs 28, 8(11)
  02d0870  lfs 27, 12(11)
  02d0874  addic 11, 11, 16
  02d0878  fadds 5, 5, 0
  02d087c  fadds 5, 5, 28
  02d0880  fadds 5, 5, 27
  02d0884  bdnz 0x2d085c
  02d0888  fadds 5, 5, 6
  02d088c  fmadds 3, 5, 3, 4
  02d0890  stfs 3, 64(30)
  02d0894  stfs 7, 116(1)
  02d0898  fmr 5, 1
  02d089c  lwz 8, 116(1)
  02d08a0  lfs 1, 116(1)
  02d08a4  rlwimi 4, 8, 2, 30, 30
  02d08a8  fsub 4, 1, 8
  02d08ac  fsub 7, 1, 8
  02d08b0  rlwimi 4, 5, 4, 28, 28
  02d08b4  ori 5, 3, 0
  02d08b8  rlwimi 5, 4, 2, 26, 28
  02d08bc  slwi 4, 4, 2
  02d08c0  clrldi 5, 5, 32
  02d08c4  fsel 4, 4, 5, 2
  02d08c8  lfsx 3, 3, 4
  02d08cc  lfs 1, 4(5)
  02d08d0  fsel 2, 7, 2, 5
  02d08d4  fcmpu 0, 4, 8
  02d08d8  bt 1, 0x2d08e4
  02d08dc  fmr 3, 8
  02d08e0  b 0x2d09fc
  02d08e4  fsubs 5, 2, 4
  02d08e8  fadds 2, 2, 4
  02d08ec  addic 4, 1, 16
  02d08f0  li 10, 2
  02d08f4  addic 5, 4, 140
  02d08f8  addic 8, 4, 156
  02d08fc  mtctr 10
  02d0900  fdivs 2, 5, 2
  02d0904  fmuls 4, 2, 2
  02d0908  stfs 2, 168(1)
  02d090c  stfs 2, 160(1)
  02d0910  stfs 2, 164(1)
  02d0914  stfs 2, 156(1)
  02d0918  lfs 7, 168(1)
  02d091c  lfs 0, 160(1)
  02d0920  lfs 28, 164(1)
  02d0924  fmuls 5, 4, 4
  02d0928  fmuls 0, 0, 4
  02d092c  fmuls 7, 7, 5
  02d0930  fmuls 2, 5, 5
  02d0934  fmuls 5, 28, 5
  02d0938  stfs 0, 160(1)
  02d093c  fmuls 4, 7, 4
  02d0940  stfs 5, 164(1)
  02d0944  stfs 4, 168(1)
  02d0948  lfs 4, 140(4)
  02d094c  fmuls 4, 4, 2
  02d0950  stfs 4, 156(4)
  02d0954  lfs 4, 4(5)
  02d0958  addic 4, 4, 8
  02d095c  addic 5, 5, 8
  02d0960  fmuls 4, 4, 2
  02d0964  stfs 4, 4(8)
  02d0968  addic 8, 8, 8
  02d096c  bdnz 0x2d0948
  02d0970  li 8, 4
  02d0974  ori 4, 1, 0
  02d0978  mtctr 8
  02d097c  lis 5, 115
  02d0980  addic 8, 4, 156
  02d0984  addic 5, 5, 22752
  02d0988  ori 9, 8, 0
  02d098c  lfs 2, 156(4)
  02d0990  lfs 4, 0(5)
  02d0994  fmuls 2, 2, 4
  02d0998  lfs 4, 4(5)
  02d099c  addic 5, 5, 8
  02d09a0  stfs 2, 156(4)
  02d09a4  lfs 2, 4(8)
  02d09a8  addic 4, 4, 8
  02d09ac  fmuls 2, 2, 4
  02d09b0  stfs 2, 4(8)
  02d09b4  addic 8, 8, 8
  02d09b8  bdnz 0x2d098c
  02d09bc  fmr 2, 8
  02d09c0  ori 4, 1, 0
  02d09c4  mtctr 10
  02d09c8  lfs 4, 156(4)
  02d09cc  fadds 2, 2, 4
  02d09d0  addic 4, 4, 16
  02d09d4  lfs 4, 4(9)
  02d09d8  lfs 5, 8(9)
  02d09dc  lfs 7, 12(9)
  02d09e0  addic 9, 9, 16
  02d09e4  fadds 2, 2, 4
  02d09e8  fadds 2, 2, 5
  02d09ec  fadds 2, 2, 7
  02d09f0  bdnz 0x2d09c8
  02d09f4  fadds 2, 2, 6
  02d09f8  fmadds 3, 2, 3, 1
  02d09fc  fabs 2, 12
  02d0a00  stfs 3, 68(30)
  02d0a04  fabs 1, 13
  02d0a08  rlwinm 4, 7, 3, 29, 29
  02d0a0c  fsubs 3, 2, 1
  02d0a10  stfs 3, 112(1)
  02d0a14  lwz 5, 112(1)
  02d0a18  lfs 3, 112(1)
  02d0a1c  rlwimi 4, 5, 2, 30, 30
  02d0a20  fsub 4, 3, 8
  02d0a24  fsub 5, 3, 8
  02d0a28  rlwimi 4, 6, 4, 28, 28
  02d0a2c  ori 5, 3, 0
  02d0a30  rlwimi 5, 4, 2, 26, 28
  02d0a34  slwi 4, 4, 2
  02d0a38  clrldi 5, 5, 32
  02d0a3c  fsel 4, 4, 2, 1
  02d0a40  lfsx 3, 3, 4
  02d0a44  fsel 2, 5, 1, 2
  02d0a48  lfs 1, 4(5)
  02d0a4c  fcmpu 0, 4, 8
  02d0a50  bt 1, 0x2d0a58
  02d0a54  b 0x2d0b6c
  02d0a58  fsubs 5, 2, 4
  02d0a5c  fadds 2, 2, 4
  02d0a60  addic 3, 1, 16
  02d0a64  li 7, 2
  02d0a68  addic 5, 3, 124
  02d0a6c  addic 4, 3, 108
  02d0a70  mtctr 7
  02d0a74  fdivs 2, 5, 2
  02d0a78  fmuls 4, 2, 2
  02d0a7c  stfs 2, 136(1)
  02d0a80  stfs 2, 128(1)
  02d0a84  stfs 2, 132(1)
  02d0a88  stfs 2, 124(1)
  02d0a8c  lfs 7, 136(1)
  02d0a90  lfs 0, 128(1)
  02d0a94  lfs 28, 132(1)
  02d0a98  fmuls 5, 4, 4
  02d0a9c  fmuls 0, 0, 4
  02d0aa0  fmuls 7, 7, 5
  02d0aa4  fmuls 2, 5, 5
  02d0aa8  fmuls 5, 28, 5
  02d0aac  stfs 0, 128(1)
  02d0ab0  fmuls 4, 7, 4
  02d0ab4  stfs 5, 132(1)
  02d0ab8  stfs 4, 136(1)
  02d0abc  lfs 4, 108(3)
  02d0ac0  fmuls 4, 4, 2
  02d0ac4  stfs 4, 124(3)
  02d0ac8  lfs 4, 4(4)
  02d0acc  addic 4, 4, 8
  02d0ad0  fmuls 4, 4, 2
  02d0ad4  addic 3, 3, 8
  02d0ad8  stfs 4, 4(5)
  02d0adc  addic 5, 5, 8
  02d0ae0  bdnz 0x2d0abc
  02d0ae4  li 5, 4
  02d0ae8  ori 3, 1, 0
  02d0aec  mtctr 5
  02d0af0  lis 4, 115
  02d0af4  addic 5, 3, 124
  02d0af8  addic 4, 4, 22752
  02d0afc  ori 6, 5, 0
  02d0b00  lfs 2, 124(3)
  02d0b04  lfs 4, 0(4)
  02d0b08  fmuls 2, 2, 4
  02d0b0c  lfs 4, 4(4)
  02d0b10  addic 4, 4, 8
  02d0b14  stfs 2, 124(3)
  02d0b18  lfs 2, 4(5)
  02d0b1c  addic 3, 3, 8
  02d0b20  fmuls 2, 2, 4
  02d0b24  stfs 2, 4(5)
  02d0b28  addic 5, 5, 8
  02d0b2c  bdnz 0x2d0b00
  02d0b30  ori 3, 1, 0
  02d0b34  mtctr 7
  02d0b38  lfs 2, 124(3)
  02d0b3c  lfs 4, 4(6)
  02d0b40  fadds 2, 8, 2
  02d0b44  lfs 5, 8(6)
  02d0b48  addic 3, 3, 16
  02d0b4c  lfs 8, 12(6)
  02d0b50  addic 6, 6, 16
  02d0b54  fadds 2, 2, 4
  02d0b58  fadds 2, 2, 5
  02d0b5c  fadds 8, 2, 8
  02d0b60  bdnz 0x2d0b38
  02d0b64  fadds 8, 8, 6
  02d0b68  fmadds 8, 8, 3, 1
  02d0b6c  stfs 8, 72(30)
  02d0b70  lis 3, 45
  02d0b74  stfs 9, 16(30)
  02d0b78  lis 28, 114
  02d0b7c  stfs 31, 20(30)
  02d0b80  addi 29, 3, 1560
  02d0b84  stfs 10, 24(30)
  02d0b88  stfs 30, 28(30)
  02d0b8c  stfs 12, 0(31)
  02d0b90  stfs 13, 4(31)
  02d0b94  stfs 11, 8(31)
  02d0b98  stfs 29, 12(31)
  02d0b9c  lfs 31, 12(29)
  02d0ba0  lfs 30, 16(29)
  02d0ba4  lfs 3, -3052(28)
  02d0ba8  fmuls 1, 3, 31
  02d0bac  fmuls 2, 3, 30
  02d0bb0  bl 0xfcbe8
  02d0bb4  nop
  02d0bb8  stfs 1, 16(31)
  02d0bbc  lfs 2, -3052(28)
  02d0bc0  fmuls 1, 2, 31
  02d0bc4  fmuls 2, 2, 30
  02d0bc8  bl 0xfcbe8
  02d0bcc  nop
  02d0bd0  li 4, 20
  02d0bd4  vspltisw 2, -1
  02d0bd8  lis 5, 114
  02d0bdc  stfs 1, 20(31)
  02d0be0  li 6, -3056
  02d0be4  ori 3, 30, 0
  02d0be8  lvlx 3, 4, 29
  02d0bec  vslw 2, 2, 2
  02d0bf0  li 4, 28
  02d0bf4  vspltw 3, 3, 0
  02d0bf8  lvlx 4, 6, 5
  02d0bfc  vmaddfp 2, 4, 3, 2
  02d0c00  vctsxs 2, 2, 0
  02d0c04  vspltw 2, 2, 0
  02d0c08  stvewx 2, 4, 31
  02d0c0c  bl 0xf31a8
  02d0c10  nop
  02d0c14  ori 3, 30, 0
  02d0c18  ld 0, 336(1)
  02d0c1c  mtlr 0
  02d0c20  lfd 25, 264(1)
  02d0c24  lfd 26, 272(1)
  02d0c28  lfd 27, 280(1)
  02d0c2c  lfd 28, 288(1)
  02d0c30  lfd 29, 296(1)
  02d0c34  lfd 30, 304(1)
  02d0c38  lfd 31, 312(1)
  02d0c3c  ld 28, 232(1)
  02d0c40  ld 29, 240(1)
  02d0c44  ld 30, 248(1)
  02d0c48  ld 31, 256(1)
  02d0c4c  addi 1, 1, 320
  02d0c50  blr
