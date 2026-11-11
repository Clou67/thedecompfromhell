# sdk/libc/xlv2tls.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Tlsfree:   # 0x5d05f4, 0xac bytes
  05d05f4  stdu 1, -144(1)
  05d05f8  mflr 0
  05d05fc  std 29, 120(1)
  05d0600  mr 29, 3
  05d0604  std 28, 112(1)
  05d0608  cmplwi 7, 29, 49
  05d060c  std 30, 128(1)
  05d0610  std 31, 136(1)
  05d0614  std 0, 160(1)
  05d0618  li 3, 1
  05d061c  bf 29, 0x5d0644
  05d0620  ld 0, 160(1)
  05d0624  extsw 3, 3
  05d0628  ld 28, 112(1)
  05d062c  ld 29, 120(1)
  05d0630  mtlr 0
  05d0634  ld 30, 128(1)
  05d0638  ld 31, 136(1)
  05d063c  addi 1, 1, 144
  05d0640  blr
  05d0644  lwz 30, -24324(2)
  05d0648  li 4, 0
  05d064c  clrldi 28, 30, 32
  05d0650  mr 3, 28
  05d0654  bl 0x6504c4
  05d0658  ld 2, 40(1)
  05d065c  cmpwi 7, 3, 0
  05d0660  bf- 30, 0x5d069c
  05d0664  slwi 9, 29, 3
  05d0668  extsw 9, 9
  05d066c  add 9, 9, 30
  05d0670  stb 3, 24(9)
  05d0674  lwz 0, 424(30)
  05d0678  cmpw 7, 29, 0
  05d067c  bf 28, 0x5d0684
  05d0680  stw 29, 424(30)
  05d0684  mr 3, 28
  05d0688  bl 0x6504e4
  05d068c  ld 2, 40(1)
  05d0690  cmpwi 7, 3, 0
  05d0694  li 3, 0
  05d0698  bt+ 30, 0x5d0620
  05d069c  bl 0x5c4840

TlsGetValue:   # 0x5d06a4, 0xbc bytes
  05d06a4  stdu 1, -144(1)
  05d06a8  mflr 0
  05d06ac  addi 3, 1, 112
  05d06b0  std 30, 128(1)
  05d06b4  std 0, 160(1)
  05d06b8  std 31, 136(1)
  05d06bc  bl 0x6505c4
  05d06c0  ld 2, 40(1)
  05d06c4  lwz 30, -24324(2)
  05d06c8  li 4, 0
  05d06cc  mr 3, 30
  05d06d0  bl 0x6504c4
  05d06d4  ld 2, 40(1)
  05d06d8  cmpwi 7, 3, 0
  05d06dc  bf- 30, 0x5d075c
  05d06e0  lwz 3, 428(30)
  05d06e4  cmpwi 7, 3, 0
  05d06e8  bt 30, 0x5d0720
  05d06ec  clrldi 3, 3, 32
  05d06f0  ld 9, 112(1)
  05d06f4  ld 0, 8(3)
  05d06f8  cmpd 7, 0, 9
  05d06fc  bf 30, 0x5d0714
  05d0700  b 0x5d0754
  05d0704  clrldi 3, 3, 32
  05d0708  ld 0, 8(3)
  05d070c  cmpd 7, 0, 9
  05d0710  bt 30, 0x5d0754
  05d0714  lwz 3, 0(3)
  05d0718  cmpwi 7, 3, 0
  05d071c  bf 30, 0x5d0704
  05d0720  li 31, 0
  05d0724  mr 3, 30
  05d0728  bl 0x6504e4
  05d072c  ld 2, 40(1)
  05d0730  cmpwi 7, 3, 0
  05d0734  bf- 30, 0x5d075c
  05d0738  ld 0, 160(1)
  05d073c  clrldi 3, 31, 32
  05d0740  ld 30, 128(1)
  05d0744  ld 31, 136(1)
  05d0748  mtlr 0
  05d074c  addi 1, 1, 144
  05d0750  blr
  05d0754  lwz 31, 16(3)
  05d0758  b 0x5d0724
  05d075c  bl 0x5c4840

_Destroytls:   # 0x5d0764, 0xf0 bytes
  05d0764  stdu 1, -160(1)
  05d0768  mflr 0
  05d076c  std 29, 136(1)
  05d0770  std 26, 112(1)
  05d0774  std 27, 120(1)
  05d0778  std 28, 128(1)
  05d077c  std 30, 144(1)
  05d0780  std 31, 152(1)
  05d0784  std 0, 176(1)
  05d0788  bl 0x5d06a4
  05d078c  cmpwi 7, 3, 0
  05d0790  mr 29, 3
  05d0794  bt 30, 0x5d082c
  05d0798  li 27, 1
  05d079c  lwz 26, -24320(2)
  05d07a0  li 28, 0
  05d07a4  li 10, 0
  05d07a8  mr 30, 26
  05d07ac  li 31, 0
  05d07b0  clrldi 9, 30, 32
  05d07b4  addi 30, 30, 8
  05d07b8  lbz 0, 0(9)
  05d07bc  cmpwi 7, 0, 0
  05d07c0  bt 30, 0x5d0808
  05d07c4  lwz 9, 4(9)
  05d07c8  add 0, 31, 29
  05d07cc  cmpwi 7, 9, 0
  05d07d0  clrldi 11, 0, 32
  05d07d4  bt 30, 0x5d0808
  05d07d8  lwz 0, 0(11)
  05d07dc  clrldi 9, 9, 32
  05d07e0  cmpwi 7, 0, 0
  05d07e4  bt 30, 0x5d0808
  05d07e8  stw 28, 0(11)
  05d07ec  lwz 0, 0(9)
  05d07f0  std 2, 40(1)
  05d07f4  mtctr 0
  05d07f8  lwz 2, 4(9)
  05d07fc  bctrl
  05d0800  ld 2, 40(1)
  05d0804  li 10, 1
  05d0808  cmpwi 7, 31, 196
  05d080c  addi 31, 31, 4
  05d0810  bf 30, 0x5d07b0
  05d0814  cmpwi 7, 10, 0
  05d0818  bt 30, 0x5d082c
  05d081c  cmpwi 7, 27, 4
  05d0820  bt 30, 0x5d082c
  05d0824  addi 27, 27, 1
  05d0828  b 0x5d07a4
  05d082c  ld 0, 176(1)
  05d0830  ld 26, 112(1)
  05d0834  ld 27, 120(1)
  05d0838  mtlr 0
  05d083c  ld 28, 128(1)
  05d0840  ld 29, 136(1)
  05d0844  ld 30, 144(1)
  05d0848  ld 31, 152(1)
  05d084c  addi 1, 1, 160
  05d0850  blr

FUN_005d0854:   # 0x5d0854, 0xf0 bytes
  05d0854  stdu 1, -144(1)
  05d0858  mflr 0
  05d085c  std 31, 136(1)
  05d0860  mr 31, 3
  05d0864  addi 3, 1, 112
  05d0868  std 30, 128(1)
  05d086c  std 0, 160(1)
  05d0870  bl 0x6505c4
  05d0874  ld 2, 40(1)
  05d0878  cmplwi 7, 31, 49
  05d087c  bf 29, 0x5d08a0
  05d0880  li 31, 0
  05d0884  ld 0, 160(1)
  05d0888  clrldi 3, 31, 32
  05d088c  ld 30, 128(1)
  05d0890  ld 31, 136(1)
  05d0894  mtlr 0
  05d0898  addi 1, 1, 144
  05d089c  blr
  05d08a0  slwi 9, 31, 3
  05d08a4  lwz 30, -24324(2)
  05d08a8  extsw 9, 9
  05d08ac  add 9, 9, 30
  05d08b0  lbz 0, 24(9)
  05d08b4  cmpwi 7, 0, 0
  05d08b8  bt 30, 0x5d0880
  05d08bc  mr 3, 30
  05d08c0  li 4, 0
  05d08c4  bl 0x6504c4
  05d08c8  ld 2, 40(1)
  05d08cc  cmpwi 7, 3, 0
  05d08d0  bf- 30, 0x5d092c
  05d08d4  lwz 3, 428(30)
  05d08d8  cmpwi 7, 3, 0
  05d08dc  bt 30, 0x5d0914
  05d08e0  clrldi 3, 3, 32
  05d08e4  ld 9, 112(1)
  05d08e8  ld 0, 8(3)
  05d08ec  cmpd 7, 0, 9
  05d08f0  bf 30, 0x5d0908
  05d08f4  b 0x5d0934
  05d08f8  clrldi 3, 3, 32
  05d08fc  ld 0, 8(3)
  05d0900  cmpd 7, 0, 9
  05d0904  bt 30, 0x5d0934
  05d0908  lwz 3, 0(3)
  05d090c  cmpwi 7, 3, 0
  05d0910  bf 30, 0x5d08f8
  05d0914  li 31, 0
  05d0918  mr 3, 30
  05d091c  bl 0x6504e4
  05d0920  ld 2, 40(1)
  05d0924  cmpwi 7, 3, 0
  05d0928  bt 30, 0x5d0884
  05d092c  bl 0x5c4840
  05d0930  nop
  05d0934  slwi 9, 31, 2
  05d0938  addi 9, 9, 16
  05d093c  extsw 9, 9
  05d0940  lwzx 31, 3, 9

TlsSetValue:   # 0x5d0948, 0xf0 bytes
  05d0948  stdu 1, -176(1)
  05d094c  mflr 0
  05d0950  std 27, 136(1)
  05d0954  mr 27, 3
  05d0958  addi 3, 1, 112
  05d095c  std 28, 144(1)
  05d0960  std 0, 192(1)
  05d0964  std 29, 152(1)
  05d0968  std 30, 160(1)
  05d096c  std 31, 168(1)
  05d0970  bl 0x6505c4
  05d0974  ld 2, 40(1)
  05d0978  li 3, 216
  05d097c  bl 0x5d5838
  05d0980  nop
  05d0984  cmpwi 7, 3, 0
  05d0988  mr 28, 3
  05d098c  bt 30, 0x5d0a08
  05d0990  lwz 29, -24324(2)
  05d0994  li 4, 0
  05d0998  clrldi 30, 29, 32
  05d099c  mr 3, 30
  05d09a0  bl 0x6504c4
  05d09a4  ld 2, 40(1)
  05d09a8  cmpwi 7, 3, 0
  05d09ac  bf- 30, 0x5d0a34
  05d09b0  lwz 0, 428(29)
  05d09b4  mr 3, 30
  05d09b8  ld 9, 112(1)
  05d09bc  stw 0, 0(28)
  05d09c0  std 9, 8(28)
  05d09c4  stw 27, 16(28)
  05d09c8  stw 28, 428(29)
  05d09cc  bl 0x6504e4
  05d09d0  ld 2, 40(1)
  05d09d4  cmpwi 7, 3, 0
  05d09d8  li 3, 1
  05d09dc  bf- 30, 0x5d0a34
  05d09e0  ld 0, 192(1)
  05d09e4  extsw 3, 3
  05d09e8  ld 27, 136(1)
  05d09ec  ld 28, 144(1)
  05d09f0  mtlr 0
  05d09f4  ld 29, 152(1)
  05d09f8  ld 30, 160(1)
  05d09fc  ld 31, 168(1)
  05d0a00  addi 1, 1, 176
  05d0a04  blr
  05d0a08  ld 0, 192(1)
  05d0a0c  li 3, 0
  05d0a10  ld 27, 136(1)
  05d0a14  extsw 3, 3
  05d0a18  ld 28, 144(1)
  05d0a1c  ld 29, 152(1)
  05d0a20  mtlr 0
  05d0a24  ld 30, 160(1)
  05d0a28  ld 31, 168(1)
  05d0a2c  addi 1, 1, 176
  05d0a30  blr
  05d0a34  bl 0x5c4840

_Tlsset:   # 0x5d0a3c, 0x140 bytes
  05d0a3c  stdu 1, -160(1)
  05d0a40  mflr 0
  05d0a44  std 31, 152(1)
  05d0a48  mr 31, 3
  05d0a4c  addi 3, 1, 112
  05d0a50  std 29, 136(1)
  05d0a54  std 30, 144(1)
  05d0a58  std 0, 176(1)
  05d0a5c  mr 29, 4
  05d0a60  bl 0x6505c4
  05d0a64  ld 2, 40(1)
  05d0a68  cmplwi 7, 31, 49
  05d0a6c  bt 29, 0x5d0a8c
  05d0a70  slwi 9, 31, 3
  05d0a74  lwz 30, -24324(2)
  05d0a78  extsw 9, 9
  05d0a7c  add 9, 9, 30
  05d0a80  lbz 0, 24(9)
  05d0a84  cmpwi 7, 0, 0
  05d0a88  bf 30, 0x5d0ab0
  05d0a8c  li 3, 1
  05d0a90  ld 0, 176(1)
  05d0a94  extsw 3, 3
  05d0a98  ld 29, 136(1)
  05d0a9c  ld 30, 144(1)
  05d0aa0  mtlr 0
  05d0aa4  ld 31, 152(1)
  05d0aa8  addi 1, 1, 160
  05d0aac  blr
  05d0ab0  mr 3, 30
  05d0ab4  li 4, 0
  05d0ab8  bl 0x6504c4
  05d0abc  ld 2, 40(1)
  05d0ac0  cmpwi 7, 3, 0
  05d0ac4  bf- 30, 0x5d0b64
  05d0ac8  lwz 0, 428(30)
  05d0acc  cmpwi 7, 0, 0
  05d0ad0  bt 30, 0x5d0b08
  05d0ad4  clrldi 11, 0, 32
  05d0ad8  ld 9, 112(1)
  05d0adc  ld 0, 8(11)
  05d0ae0  cmpd 7, 0, 9
  05d0ae4  bf 30, 0x5d0afc
  05d0ae8  b 0x5d0b6c
  05d0aec  clrldi 11, 0, 32
  05d0af0  ld 0, 8(11)
  05d0af4  cmpd 7, 0, 9
  05d0af8  bt 30, 0x5d0b6c
  05d0afc  lwz 0, 0(11)
  05d0b00  cmpwi 7, 0, 0
  05d0b04  bf 30, 0x5d0aec
  05d0b08  li 3, 1
  05d0b0c  li 4, 216
  05d0b10  bl 0x5d57d4
  05d0b14  nop
  05d0b18  cmpwi 7, 3, 0
  05d0b1c  mr 8, 3
  05d0b20  bt- 30, 0x5d0b64
  05d0b24  slwi 9, 31, 2
  05d0b28  lwz 11, 428(30)
  05d0b2c  clrldi 10, 8, 32
  05d0b30  ld 0, 112(1)
  05d0b34  addi 9, 9, 16
  05d0b38  stw 11, 0(8)
  05d0b3c  extsw 9, 9
  05d0b40  std 0, 8(8)
  05d0b44  stw 3, 428(30)
  05d0b48  stwx 29, 10, 9
  05d0b4c  mr 3, 30
  05d0b50  bl 0x6504e4
  05d0b54  ld 2, 40(1)
  05d0b58  cmpwi 7, 3, 0
  05d0b5c  li 3, 0
  05d0b60  bt 30, 0x5d0a90
  05d0b64  bl 0x5c4840
  05d0b68  nop
  05d0b6c  slwi 9, 31, 2
  05d0b70  addi 9, 9, 16
  05d0b74  extsw 9, 9
  05d0b78  stwx 29, 11, 9

_Tlsalloc:   # 0x5d0b80, 0x174 bytes
  05d0b80  stdu 1, -144(1)
  05d0b84  mflr 0
  05d0b88  std 31, 136(1)
  05d0b8c  lwz 31, -24324(2)
  05d0b90  std 28, 112(1)
  05d0b94  std 29, 120(1)
  05d0b98  mr 28, 4
  05d0b9c  lwz 4, -24316(2)
  05d0ba0  mr 29, 3
  05d0ba4  addi 3, 31, 432
  05d0ba8  std 0, 160(1)
  05d0bac  std 30, 128(1)
  05d0bb0  bl 0x5d0504
  05d0bb4  nop
  05d0bb8  mr 3, 31
  05d0bbc  li 4, 0
  05d0bc0  bl 0x6504c4
  05d0bc4  ld 2, 40(1)
  05d0bc8  cmpwi 7, 3, 0
  05d0bcc  bf- 30, 0x5d0c6c
  05d0bd0  lwz 10, 424(31)
  05d0bd4  li 30, 1
  05d0bd8  cmpwi 7, 10, 49
  05d0bdc  bt 29, 0x5d0c34
  05d0be0  slwi 11, 10, 3
  05d0be4  extsw 9, 11
  05d0be8  add 9, 9, 31
  05d0bec  lbz 0, 24(9)
  05d0bf0  cmpwi 7, 0, 0
  05d0bf4  bt 30, 0x5d0c7c
  05d0bf8  subfic 0, 10, 50
  05d0bfc  add 9, 11, 31
  05d0c00  clrldi 0, 0, 32
  05d0c04  addi 11, 9, 32
  05d0c08  mtctr 0
  05d0c0c  b 0x5d0c24
  05d0c10  clrldi 9, 11, 32
  05d0c14  addi 11, 11, 8
  05d0c18  lbz 0, 0(9)
  05d0c1c  cmpwi 7, 0, 0
  05d0c20  bt 30, 0x5d0c74
  05d0c24  addi 10, 10, 1
  05d0c28  bdnz 0x5d0c10
  05d0c2c  li 30, 1
  05d0c30  stw 10, 424(31)
  05d0c34  mr 3, 31
  05d0c38  bl 0x6504e4
  05d0c3c  ld 2, 40(1)
  05d0c40  cmpwi 7, 3, 0
  05d0c44  bf 30, 0x5d0c6c
  05d0c48  ld 0, 160(1)
  05d0c4c  extsw 3, 30
  05d0c50  ld 28, 112(1)
  05d0c54  ld 29, 120(1)
  05d0c58  mtlr 0
  05d0c5c  ld 30, 128(1)
  05d0c60  ld 31, 136(1)
  05d0c64  addi 1, 1, 144
  05d0c68  blr
  05d0c6c  bl 0x5c4840
  05d0c70  nop
  05d0c74  slwi 11, 10, 3
  05d0c78  stw 10, 424(31)
  05d0c7c  extsw 9, 11
  05d0c80  addi 0, 10, 1
  05d0c84  add 9, 9, 31
  05d0c88  stw 10, 0(29)
  05d0c8c  stw 0, 424(31)
  05d0c90  li 0, 1
  05d0c94  stb 0, 24(9)
  05d0c98  lwz 3, 0(29)
  05d0c9c  lwz 0, 428(31)
  05d0ca0  slwi 9, 3, 3
  05d0ca4  cmpwi 7, 0, 0
  05d0ca8  extsw 9, 9
  05d0cac  add 9, 9, 31
  05d0cb0  stw 28, 28(9)
  05d0cb4  bt 30, 0x5d0cdc
  05d0cb8  slwi 9, 3, 2
  05d0cbc  li 11, 0
  05d0cc0  addi 9, 9, 16
  05d0cc4  extsw 3, 9
  05d0cc8  clrldi 9, 0, 32
  05d0ccc  lwz 0, 0(9)
  05d0cd0  stwx 11, 9, 3
  05d0cd4  cmpwi 7, 0, 0
  05d0cd8  bf 30, 0x5d0cc8
  05d0cdc  mr 3, 31
  05d0ce0  li 30, 0
  05d0ce4  bl 0x6504e4
  05d0ce8  ld 2, 40(1)
  05d0cec  cmpwi 7, 3, 0
  05d0cf0  bt 30, 0x5d0c48

FUN_005d0cf8:   # 0x5d0cf8, 0x38 bytes
  05d0cf8  lwz 4, -24312(2)
  05d0cfc  mflr 0
  05d0d00  lwz 3, -24324(2)
  05d0d04  stdu 1, -112(1)
  05d0d08  std 0, 128(1)
  05d0d0c  bl 0x6505a4
  05d0d10  ld 2, 40(1)
  05d0d14  cmpwi 7, 3, 0
  05d0d18  bf- 30, 0x5d0d2c
  05d0d1c  ld 0, 128(1)
  05d0d20  addi 1, 1, 112
  05d0d24  mtlr 0
  05d0d28  blr
  05d0d2c  bl 0x5c4840

FUN_005d0d34:   # 0x5d0d34, 0x34 bytes
  05d0d34  addi 3, 3, 472
  05d0d38  lwz 9, 0(3)
  05d0d3c  cmplw 7, 9, 4
  05d0d40  bt 29, 0x5d0d54
  05d0d44  lwz 0, 4(3)
  05d0d48  add 0, 9, 0
  05d0d4c  cmplw 7, 0, 4
  05d0d50  bt 29, 0x5d0d60
  05d0d54  lwz 3, 8(3)
  05d0d58  cmpwi 7, 3, 0
  05d0d5c  bf 30, 0x5d0d38
  05d0d60  clrldi 3, 3, 32
  05d0d64  blr
