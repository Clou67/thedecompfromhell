# game/update/moby573.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M573_003c0528:   # 0x3c0528, 0x450 bytes
  03c0528  stdu 1, -208(1)
  03c052c  mflr 0
  03c0530  std 0, 224(1)
  03c0534  stfd 31, 200(1)
  03c0538  std 30, 184(1)
  03c053c  std 31, 192(1)
  03c0540  lwz 30, 120(3)
  03c0544  ori 31, 3, 0
  03c0548  lwz 3, 56(30)
  03c054c  std 29, 176(1)
  03c0550  std 28, 168(1)
  03c0554  cmpwi 3, 0
  03c0558  bf 2, 0x3c058c
  03c055c  lwz 3, 584(30)
  03c0560  cmpwi 3, -1
  03c0564  bt 2, 0x3c05c4
  03c0568  lis 4, 164
  03c056c  slwi 3, 3, 8
  03c0570  lwz 4, -28512(4)
  03c0574  addc 3, 4, 3
  03c0578  clrldi 3, 3, 32
  03c057c  bl 0x3c2108
  03c0580  nop
  03c0584  cmpwi 3, 0
  03c0588  bt 2, 0x3c05c4
  03c058c  lis 3, 60
  03c0590  vspltisw 2, -1
  03c0594  lis 4, 114
  03c0598  addi 3, 3, 1288
  03c059c  li 5, -3056
  03c05a0  vslw 2, 2, 2
  03c05a4  <unknown>
  03c05a8  <unknown>
  03c05ac  vspltw 3, 3, 0
  03c05b0  li 3, 576
  03c05b4  vmaddfp 2, 4, 3, 2
  03c05b8  vctsxs 2, 2, 0
  03c05bc  vspltw 2, 2, 0
  03c05c0  stvewx 2, 3, 30
  03c05c4  addic 3, 30, 576
  03c05c8  bl 0x4fff60
  03c05cc  nop
  03c05d0  cmpwi 3, 0
  03c05d4  bt 2, 0x3c05e0
  03c05d8  lfs 31, 556(30)
  03c05dc  b 0x3c05f4
  03c05e0  lis 3, 60
  03c05e4  lfs 31, 556(30)
  03c05e8  addi 3, 3, 1288
  03c05ec  lfs 1, 4(3)
  03c05f0  fmuls 31, 31, 1
  03c05f4  lis 4, 60
  03c05f8  stfs 31, 560(30)
  03c05fc  li 6, 0
  03c0600  addi 5, 4, 1288
  03c0604  ori 3, 31, 0
  03c0608  lis 4, 51
  03c060c  lfs 31, 8(5)
  03c0610  li 5, 0
  03c0614  stw 6, 116(1)
  03c0618  bl 0x10675c
  03c061c  nop
  03c0620  ori 29, 3, 0
  03c0624  ori 3, 31, 0
  03c0628  ori 4, 29, 0
  03c062c  addic 5, 30, 32
  03c0630  li 6, 0
  03c0634  addic 7, 1, 112
  03c0638  li 9, 0
  03c063c  addic 8, 1, 116
  03c0640  li 10, 4
  03c0644  bl 0x106840
  03c0648  nop
  03c064c  lwz 3, 112(1)
  03c0650  cmpwi 3, 1
  03c0654  bt 2, 0x3c094c
  03c0658  lbz 3, 32(31)
  03c065c  cmpwi 3, 21
  03c0660  bt 2, 0x3c094c
  03c0664  lbz 3, 33(31)
  03c0668  cmpwi 3, 255
  03c066c  bt 2, 0x3c067c
  03c0670  li 4, 1
  03c0674  bl 0x104298
  03c0678  nop
  03c067c  lfs 1, 32(30)
  03c0680  lis 3, 60
  03c0684  lfs 2, 116(1)
  03c0688  lis 4, 114
  03c068c  addi 3, 3, 1288
  03c0690  fsubs 1, 1, 2
  03c0694  li 5, 0
  03c0698  li 6, 9
  03c069c  stfs 1, 32(30)
  03c06a0  lfs 1, 12(3)
  03c06a4  lfs 2, -3048(4)
  03c06a8  stb 5, 349(30)
  03c06ac  fmuls 1, 2, 1
  03c06b0  stw 6, 324(30)
  03c06b4  stfs 1, 304(30)
  03c06b8  lwz 3, 32(29)
  03c06bc  lfs 1, 16(31)
  03c06c0  lfs 2, 20(31)
  03c06c4  lfs 3, 16(3)
  03c06c8  lfs 4, 20(3)
  03c06cc  fsubs 1, 1, 3
  03c06d0  fsubs 2, 2, 4
  03c06d4  lis 3, 115
  03c06d8  addic 3, 3, 22784
  03c06dc  fabs 4, 1
  03c06e0  fabs 3, 2
  03c06e4  stfs 1, 124(1)
  03c06e8  stfs 2, 128(1)
  03c06ec  fsubs 1, 4, 3
  03c06f0  stfs 1, 132(1)
  03c06f4  lwz 5, 124(1)
  03c06f8  lfs 1, 124(1)
  03c06fc  lwz 4, 128(1)
  03c0700  lfs 2, 128(1)
  03c0704  rlwinm 6, 4, 3, 29, 29
  03c0708  fabs 1, 1
  03c070c  lhz 4, 52(31)
  03c0710  fabs 5, 2
  03c0714  lwz 7, 132(1)
  03c0718  lfs 2, 132(1)
  03c071c  rlwimi 6, 7, 2, 30, 30
  03c0720  fsub 6, 2, 31
  03c0724  fsub 7, 2, 31
  03c0728  rlwimi 6, 5, 4, 28, 28
  03c072c  ori 5, 3, 0
  03c0730  rlwimi 5, 6, 2, 26, 28
  03c0734  slwi 6, 6, 2
  03c0738  clrldi 5, 5, 32
  03c073c  fsel 3, 6, 1, 3
  03c0740  lfsx 2, 3, 6
  03c0744  lfs 1, 4(5)
  03c0748  fsel 4, 7, 5, 4
  03c074c  fcmpu 0, 3, 31
  03c0750  bt 1, 0x3c0758
  03c0754  b 0x3c087c
  03c0758  fsubs 5, 4, 3
  03c075c  fadds 3, 4, 3
  03c0760  addic 7, 1, 16
  03c0764  li 3, 2
  03c0768  addic 5, 7, 136
  03c076c  addic 6, 7, 120
  03c0770  mtctr 3
  03c0774  fdivs 3, 5, 3
  03c0778  fmuls 5, 3, 3
  03c077c  stfs 3, 148(1)
  03c0780  stfs 3, 140(1)
  03c0784  stfs 3, 144(1)
  03c0788  stfs 3, 136(1)
  03c078c  lfs 6, 148(1)
  03c0790  lfs 7, 140(1)
  03c0794  lfs 8, 144(1)
  03c0798  fmuls 3, 5, 5
  03c079c  fmuls 7, 7, 5
  03c07a0  fmuls 6, 6, 3
  03c07a4  fmuls 4, 3, 3
  03c07a8  fmuls 3, 8, 3
  03c07ac  stfs 7, 140(1)
  03c07b0  fmuls 5, 6, 5
  03c07b4  stfs 3, 144(1)
  03c07b8  stfs 5, 148(1)
  03c07bc  lfs 3, 120(7)
  03c07c0  fmuls 3, 3, 4
  03c07c4  stfs 3, 136(7)
  03c07c8  lfs 3, 4(6)
  03c07cc  addic 6, 6, 8
  03c07d0  fmuls 3, 3, 4
  03c07d4  addic 7, 7, 8
  03c07d8  stfs 3, 4(5)
  03c07dc  addic 5, 5, 8
  03c07e0  bdnz 0x3c07bc
  03c07e4  ori 8, 1, 0
  03c07e8  li 5, 4
  03c07ec  lis 7, 115
  03c07f0  addic 6, 8, 136
  03c07f4  mtctr 5
  03c07f8  addic 7, 7, 22752
  03c07fc  ori 5, 6, 0
  03c0800  lfs 3, 136(8)
  03c0804  lfs 4, 0(7)
  03c0808  fmuls 3, 3, 4
  03c080c  lfs 4, 4(7)
  03c0810  addic 7, 7, 8
  03c0814  stfs 3, 136(8)
  03c0818  lfs 3, 4(6)
  03c081c  addic 8, 8, 8
  03c0820  fmuls 3, 3, 4
  03c0824  stfs 3, 4(6)
  03c0828  addic 6, 6, 8
  03c082c  bdnz 0x3c0800
  03c0830  ori 6, 3, 0
  03c0834  ori 3, 1, 0
  03c0838  mtctr 6
  03c083c  lfs 3, 136(3)
  03c0840  lfs 4, 4(5)
  03c0844  fadds 3, 31, 3
  03c0848  lfs 5, 8(5)
  03c084c  lfs 31, 12(5)
  03c0850  addic 3, 3, 16
  03c0854  addic 5, 5, 16
  03c0858  fadds 3, 3, 4
  03c085c  fadds 3, 3, 5
  03c0860  fadds 31, 3, 31
  03c0864  bdnz 0x3c083c
  03c0868  lis 3, 60
  03c086c  addi 3, 3, 1288
  03c0870  lfs 3, 16(3)
  03c0874  fadds 31, 31, 3
  03c0878  fmadds 31, 31, 2, 1
  03c087c  li 3, 0
  03c0880  stfs 31, 120(1)
  03c0884  lis 5, 60
  03c0888  rlwimi 4, 3, 0, 19, 19
  03c088c  addi 3, 5, 1288
  03c0890  lis 5, 114
  03c0894  addic 28, 30, 288
  03c0898  sth 4, 52(31)
  03c089c  lfs 1, 20(3)
  03c08a0  lfs 2, -3052(5)
  03c08a4  ori 5, 28, 0
  03c08a8  fmuls 1, 2, 1
  03c08ac  stfs 1, 316(30)
  03c08b0  lfs 1, 24(3)
  03c08b4  lfs 2, 4(3)
  03c08b8  bl 0x1158b0
  03c08bc  nop
  03c08c0  lis 3, 16544
  03c08c4  lis 4, 16704
  03c08c8  addic 5, 1, 120
  03c08cc  addic 6, 30, 312
  03c08d0  stw 3, 368(30)
  03c08d4  stw 4, 372(30)
  03c08d8  addic 7, 30, 316
  03c08dc  lfs 1, 16(29)
  03c08e0  lfs 2, 24(29)
  03c08e4  stfs 1, 48(1)
  03c08e8  stfs 2, 56(1)
  03c08ec  lfs 1, 20(29)
  03c08f0  lfs 2, 28(29)
  03c08f4  stfs 1, 52(1)
  03c08f8  stfs 2, 60(1)
  03c08fc  ld 3, 48(1)
  03c0900  ld 4, 56(1)
  03c0904  bl 0x107de8
  03c0908  nop
  03c090c  lfs 1, 120(1)
  03c0910  ori 3, 31, 0
  03c0914  ori 4, 28, 0
  03c0918  li 6, 4
  03c091c  li 7, 1
  03c0920  li 8, 0
  03c0924  bl 0x10ad80
  03c0928  nop
  03c092c  li 5, 21
  03c0930  li 6, 240
  03c0934  addic 4, 30, 272
  03c0938  ori 3, 31, 0
  03c093c  stb 5, 32(31)
  03c0940  stb 6, 279(30)
  03c0944  bl 0x10c808
  03c0948  nop
  03c094c  li 3, 255
  03c0950  stb 3, 164(31)
  03c0954  ld 0, 224(1)
  03c0958  mtlr 0
  03c095c  lfd 31, 200(1)
  03c0960  ld 28, 168(1)
  03c0964  ld 29, 176(1)
  03c0968  ld 30, 184(1)
  03c096c  ld 31, 192(1)
  03c0970  addi 1, 1, 208
  03c0974  blr

UpdateMoby_573:   # 0x3c0a18, 0x1524 bytes
  03c0a18  stdu 1, -480(1)
  03c0a1c  mflr 0
  03c0a20  std 0, 496(1)
  03c0a24  stfd 21, 392(1)
  03c0a28  stfd 22, 400(1)
  03c0a2c  stfd 23, 408(1)
  03c0a30  stfd 24, 416(1)
  03c0a34  stfd 25, 424(1)
  03c0a38  stfd 26, 432(1)
  03c0a3c  stfd 27, 440(1)
  03c0a40  stfd 28, 448(1)
  03c0a44  stfd 29, 456(1)
  03c0a48  stfd 30, 464(1)
  03c0a4c  stfd 31, 472(1)
  03c0a50  std 31, 384(1)
  03c0a54  ori 31, 3, 0
  03c0a58  lis 3, 60
  03c0a5c  std 29, 368(1)
  03c0a60  addic 5, 1, 256
  03c0a64  addi 29, 3, 2424
  03c0a68  std 30, 376(1)
  03c0a6c  ori 3, 31, 0
  03c0a70  lwz 30, 120(31)
  03c0a74  std 28, 360(1)
  03c0a78  lfs 1, 560(30)
  03c0a7c  bl 0x1118d8
  03c0a80  nop
  03c0a84  ori 3, 31, 0
  03c0a88  lfs 1, 0(29)
  03c0a8c  addic 5, 30, 640
  03c0a90  li 4, 0
  03c0a94  bl 0x119a18
  03c0a98  nop
  03c0a9c  ori 3, 31, 0
  03c0aa0  bl 0x3c0528
  03c0aa4  addic 3, 30, 580
  03c0aa8  bl 0x4fff60
  03c0aac  nop
  03c0ab0  lbz 4, 32(31)
  03c0ab4  lhz 3, 52(31)
  03c0ab8  cmpwi 4, 5
  03c0abc  lfs 22, 16(31)
  03c0ac0  bt 1, 0x3c0af8
  03c0ac4  cmpwi 4, 5
  03c0ac8  bt 2, 0x3c139c
  03c0acc  cmpwi 4, 4
  03c0ad0  bt 2, 0x3c110c
  03c0ad4  cmpwi 4, 3
  03c0ad8  bt 2, 0x3c1024
  03c0adc  cmpwi 4, 2
  03c0ae0  bt 2, 0x3c0f2c
  03c0ae4  cmpwi 4, 1
  03c0ae8  bt 2, 0x3c0cf4
  03c0aec  cmpwi 4, 0
  03c0af0  bt 2, 0x3c0b24
  03c0af4  b 0x3c1e6c
  03c0af8  cmpwi 4, 21
  03c0afc  bt 2, 0x3c1d1c
  03c0b00  cmpwi 4, 9
  03c0b04  bt 2, 0x3c1cf4
  03c0b08  cmpwi 4, 8
  03c0b0c  bt 2, 0x3c1c40
  03c0b10  cmpwi 4, 7
  03c0b14  bt 2, 0x3c19e0
  03c0b18  cmpwi 4, 6
  03c0b1c  bt 2, 0x3c1618
  03c0b20  b 0x3c1e6c
  03c0b24  lhz 4, 178(31)
  03c0b28  cmpwi 4, 777
  03c0b2c  bf 2, 0x3c0b50
  03c0b30  lis 4, 151
  03c0b34  lwz 4, -25488(4)
  03c0b38  cmpwi 4, 3
  03c0b3c  bf 2, 0x3c0b50
  03c0b40  ori 3, 31, 0
  03c0b44  bl 0xefb38
  03c0b48  nop
  03c0b4c  b 0x3c1ef0
  03c0b50  ori 3, 3, 4096
  03c0b54  stfs 22, 512(30)
  03c0b58  li 4, 1
  03c0b5c  lfs 1, 20(31)
  03c0b60  li 5, 24
  03c0b64  lis 28, 16256
  03c0b68  sth 3, 52(31)
  03c0b6c  stfs 1, 516(30)
  03c0b70  li 29, 0
  03c0b74  lfs 1, 24(31)
  03c0b78  addic 3, 30, 384
  03c0b7c  stfs 1, 520(30)
  03c0b80  lfs 1, 28(31)
  03c0b84  stfs 1, 524(30)
  03c0b88  stb 4, 32(31)
  03c0b8c  stb 5, 127(31)
  03c0b90  stw 28, 32(30)
  03c0b94  sth 4, 36(30)
  03c0b98  stb 29, 41(30)
  03c0b9c  stw 29, 576(30)
  03c0ba0  bl 0x100f8c
  03c0ba4  nop
  03c0ba8  lis 3, 60
  03c0bac  lis 4, 114
  03c0bb0  addi 3, 3, 2424
  03c0bb4  lis 5, 16384
  03c0bb8  lis 6, 16390
  03c0bbc  li 8, 909
  03c0bc0  lfs 1, 4(3)
  03c0bc4  lfs 2, -3048(4)
  03c0bc8  ori 6, 6, 7098
  03c0bcc  lfs 3, 564(30)
  03c0bd0  lis 4, 114
  03c0bd4  fmuls 1, 2, 1
  03c0bd8  lwz 7, 440(30)
  03c0bdc  lis 9, 114
  03c0be0  ori 7, 7, 32
  03c0be4  stfs 1, 444(30)
  03c0be8  lfs 1, 8(3)
  03c0bec  fmuls 1, 2, 1
  03c0bf0  stfs 1, 448(30)
  03c0bf4  lfs 1, 12(3)
  03c0bf8  lfs 2, -3052(4)
  03c0bfc  stw 5, 396(30)
  03c0c00  fmuls 3, 3, 2
  03c0c04  fmuls 1, 2, 1
  03c0c08  stw 5, 392(30)
  03c0c0c  stw 8, 384(30)
  03c0c10  li 4, 8
  03c0c14  stw 7, 440(30)
  03c0c18  li 5, 7
  03c0c1c  stw 6, 424(30)
  03c0c20  stfs 3, 420(30)
  03c0c24  stfs 1, 452(30)
  03c0c28  lfs 1, 16(3)
  03c0c2c  lfs 2, -3056(9)
  03c0c30  stw 29, 580(30)
  03c0c34  fmuls 1, 2, 1
  03c0c38  stw 28, 612(30)
  03c0c3c  stw 29, 620(30)
  03c0c40  stw 29, 608(30)
  03c0c44  stb 4, 88(30)
  03c0c48  stb 5, 90(30)
  03c0c4c  fmuls 1, 1, 3
  03c0c50  stfs 1, 428(30)
  03c0c54  bl 0x5c8318
  03c0c58  nop
  03c0c5c  clrlwi 3, 3, 31
  03c0c60  cmpwi 3, 0
  03c0c64  bt 2, 0x3c0c7c
  03c0c68  lis 3, 0
  03c0c6c  lhz 4, 52(31)
  03c0c70  ori 3, 3, 32768
  03c0c74  or 3, 4, 3
  03c0c78  sth 3, 52(31)
  03c0c7c  lis 3, 132
  03c0c80  lwz 4, 584(30)
  03c0c84  addic 3, 3, 24412
  03c0c88  cmpwi 4, -1
  03c0c8c  stw 3, 208(30)
  03c0c90  lbz 3, 83(31)
  03c0c94  cmpwi 1, 3, 0
  03c0c98  cmpwi 6, 3, 1
  03c0c9c  bt 2, 0x3c0cd4
  03c0ca0  lwz 3, 624(30)
  03c0ca4  cmpwi 3, -1
  03c0ca8  bf 2, 0x3c0cd4
  03c0cac  bt 6, 0x3c0cc8
  03c0cb0  ori 3, 31, 0
  03c0cb4  li 4, 0
  03c0cb8  li 5, 0
  03c0cbc  li 6, 0
  03c0cc0  bl 0xfddc0
  03c0cc4  nop
  03c0cc8  li 3, 2
  03c0ccc  stb 3, 32(31)
  03c0cd0  b 0x3c1e6c
  03c0cd4  bt 26, 0x3c1e6c
  03c0cd8  ori 3, 31, 0
  03c0cdc  li 4, 1
  03c0ce0  li 5, 0
  03c0ce4  li 6, 0
  03c0ce8  bl 0xfddc0
  03c0cec  nop
  03c0cf0  b 0x3c1e6c
  03c0cf4  lwz 3, 624(30)
  03c0cf8  cmpwi 3, -1
  03c0cfc  bt 2, 0x3c0e50
  03c0d00  lis 4, 165
  03c0d04  slwi 3, 3, 2
  03c0d08  addic 4, 4, 7136
  03c0d0c  extsw 3, 3
  03c0d10  lwzx 3, 4, 3
  03c0d14  lfs 1, 16(3)
  03c0d18  stfs 1, 16(31)
  03c0d1c  lfs 2, 20(3)
  03c0d20  stfs 2, 20(31)
  03c0d24  lfs 3, 24(3)
  03c0d28  stfs 3, 24(31)
  03c0d2c  lfs 3, 28(3)
  03c0d30  stfs 3, 28(31)
  03c0d34  lfs 3, 32(3)
  03c0d38  lfs 4, 36(3)
  03c0d3c  fsubs 1, 3, 1
  03c0d40  fsubs 2, 4, 2
  03c0d44  bl 0x5e8338
  03c0d48  nop
  03c0d4c  li 3, 14
  03c0d50  stfs 1, 72(31)
  03c0d54  bl 0xfc620
  03c0d58  nop
  03c0d5c  cmpwi 3, 0
  03c0d60  bf 2, 0x3c0d78
  03c0d64  lbz 3, 33(31)
  03c0d68  bl 0x3c220c
  03c0d6c  nop
  03c0d70  cmpwi 3, 0
  03c0d74  bf 2, 0x3c0df4
  03c0d78  addic 3, 1, 256
  03c0d7c  lwz 4, 636(30)
  03c0d80  extsw 4, 4
  03c0d84  bl 0x110b70
  03c0d88  nop
  03c0d8c  cmpwi 3, 0
  03c0d90  bf 2, 0x3c0df4
  03c0d94  lfs 1, 260(1)
  03c0d98  lfs 2, 20(31)
  03c0d9c  lfs 3, 256(1)
  03c0da0  fsubs 2, 1, 2
  03c0da4  lfs 1, 16(31)
  03c0da8  fsubs 3, 3, 1
  03c0dac  lfs 1, 264(1)
  03c0db0  lfs 4, 24(31)
  03c0db4  fsubs 1, 1, 4
  03c0db8  fmuls 2, 2, 2
  03c0dbc  fmadds 2, 3, 3, 2
  03c0dc0  lfs 3, 628(30)
  03c0dc4  fmadds 2, 1, 1, 2
  03c0dc8  fsqrts 2, 2
  03c0dcc  fcmpu 0, 2, 3
  03c0dd0  cror 6, 1, 2
  03c0dd4  bt 6, 0x3c1e6c
  03c0dd8  fabs 1, 1
  03c0ddc  lis 3, 60
  03c0de0  addi 3, 3, 2424
  03c0de4  lfs 2, 20(3)
  03c0de8  fcmpu 0, 1, 2
  03c0dec  cror 6, 1, 2
  03c0df0  bt 6, 0x3c1e6c
  03c0df4  li 3, 0
  03c0df8  li 4, 5
  03c0dfc  stw 3, 632(30)
  03c0e00  lbz 3, 83(31)
  03c0e04  stb 4, 32(31)
  03c0e08  cmpwi 3, 3
  03c0e0c  bt 2, 0x3c1e6c
  03c0e10  lis 3, 60
  03c0e14  lis 4, 114
  03c0e18  addi 3, 3, 2424
  03c0e1c  li 5, 0
  03c0e20  lfs 1, 24(3)
  03c0e24  lfs 2, -3056(4)
  03c0e28  ori 3, 31, 0
  03c0e2c  li 4, 3
  03c0e30  fmuls 1, 2, 1
  03c0e34  fctiwz 1, 1
  03c0e38  stfd 1, 344(1)
  03c0e3c  lwz 6, 348(1)
  03c0e40  extsw 6, 6
  03c0e44  bl 0xfddc0
  03c0e48  nop
  03c0e4c  b 0x3c1e6c
  03c0e50  li 3, 14
  03c0e54  bl 0xfc620
  03c0e58  nop
  03c0e5c  cmpwi 3, 0
  03c0e60  bf 2, 0x3c1e6c
  03c0e64  lfs 1, 260(1)
  03c0e68  lfs 2, 516(30)
  03c0e6c  lfs 3, 256(1)
  03c0e70  fsubs 2, 1, 2
  03c0e74  lfs 1, 512(30)
  03c0e78  fsubs 3, 3, 1
  03c0e7c  lfs 1, 264(1)
  03c0e80  lfs 4, 520(30)
  03c0e84  fsubs 4, 1, 4
  03c0e88  fmuls 2, 2, 2
  03c0e8c  fmadds 2, 3, 3, 2
  03c0e90  lfs 3, 560(30)
  03c0e94  fmadds 2, 4, 4, 2
  03c0e98  fsqrts 2, 2
  03c0e9c  fcmpu 0, 2, 3
  03c0ea0  cror 6, 1, 2
  03c0ea4  bt 6, 0x3c1e6c
  03c0ea8  lfs 2, 24(31)
  03c0eac  lis 3, 60
  03c0eb0  fsubs 1, 1, 2
  03c0eb4  addi 3, 3, 2424
  03c0eb8  lfs 2, 28(3)
  03c0ebc  fabs 1, 1
  03c0ec0  fcmpu 0, 1, 2
  03c0ec4  cror 6, 1, 2
  03c0ec8  bt 6, 0x3c1e6c
  03c0ecc  li 3, 3
  03c0ed0  lbz 4, 83(31)
  03c0ed4  cmpwi 4, 2
  03c0ed8  stb 3, 32(31)
  03c0edc  bt 2, 0x3c0f1c
  03c0ee0  lis 3, 60
  03c0ee4  lis 4, 114
  03c0ee8  addi 3, 3, 2424
  03c0eec  li 5, 0
  03c0ef0  lfs 1, 24(3)
  03c0ef4  lfs 2, -3056(4)
  03c0ef8  ori 3, 31, 0
  03c0efc  li 4, 2
  03c0f00  fmuls 1, 2, 1
  03c0f04  fctiwz 1, 1
  03c0f08  stfd 1, 344(1)
  03c0f0c  lwz 6, 348(1)
  03c0f10  extsw 6, 6
  03c0f14  bl 0xfddc0
  03c0f18  nop
  03c0f1c  lis 3, 16224
  03c0f20  ori 3, 3, 51150
  03c0f24  stw 3, 88(31)
  03c0f28  b 0x3c1e6c
  03c0f2c  li 3, 14
  03c0f30  bl 0xfc620
  03c0f34  nop
  03c0f38  cmpwi 3, 0
  03c0f3c  bf 2, 0x3c1e6c
  03c0f40  lwz 3, 584(30)
  03c0f44  cmpwi 3, -1
  03c0f48  bt 2, 0x3c0f8c
  03c0f4c  lis 4, 164
  03c0f50  slwi 3, 3, 8
  03c0f54  lwz 4, -28512(4)
  03c0f58  addc 3, 4, 3
  03c0f5c  cmpwi 3, 0
  03c0f60  bt 2, 0x3c0f8c
  03c0f64  clrldi 3, 3, 32
  03c0f68  lbz 4, 32(3)
  03c0f6c  cmpwi 1, 4, 253
  03c0f70  cmpwi 4, 254
  03c0f74  cror 2, 2, 6
  03c0f78  bt 2, 0x3c0f8c
  03c0f7c  bl 0x3c2108
  03c0f80  nop
  03c0f84  cmpwi 3, 0
  03c0f88  bt 2, 0x3c1e6c
  03c0f8c  lis 3, 60
  03c0f90  addi 29, 3, 2424
  03c0f94  lfs 1, 32(29)
  03c0f98  lfs 2, 36(29)
  03c0f9c  bl 0xfcbe8
  03c0fa0  nop
  03c0fa4  fctidz 1, 1
  03c0fa8  lfs 2, 40(29)
  03c0fac  lis 3, 114
  03c0fb0  li 4, 4
  03c0fb4  lfs 3, -3056(3)
  03c0fb8  li 3, 572
  03c0fbc  fcfid 1, 1
  03c0fc0  frsp 1, 1
  03c0fc4  fadds 1, 1, 2
  03c0fc8  fmuls 1, 3, 1
  03c0fcc  fctiwz 1, 1
  03c0fd0  stfiwx 1, 3, 30
  03c0fd4  lbz 3, 83(31)
  03c0fd8  stb 4, 32(31)
  03c0fdc  cmpwi 3, 3
  03c0fe0  bt 2, 0x3c1e6c
  03c0fe4  lis 3, 60
  03c0fe8  lis 4, 114
  03c0fec  addi 3, 3, 2424
  03c0ff0  li 5, 0
  03c0ff4  lfs 1, 24(3)
  03c0ff8  lfs 2, -3056(4)
  03c0ffc  ori 3, 31, 0
  03c1000  fmuls 1, 2, 1
  03c1004  li 4, 3
  03c1008  fctiwz 1, 1
  03c100c  stfd 1, 344(1)
  03c1010  lwz 6, 348(1)
  03c1014  extsw 6, 6
  03c1018  bl 0xfddc0
  03c101c  nop
  03c1020  b 0x3c1e6c
  03c1024  lfs 1, 256(1)
  03c1028  lfs 2, 260(1)
  03c102c  lfs 3, 20(31)
  03c1030  fsubs 1, 1, 22
  03c1034  fsubs 2, 2, 3
  03c1038  bl 0x5e8338
  03c103c  nop
  03c1040  lis 3, 60
  03c1044  addic 5, 30, 544
  03c1048  addi 4, 3, 2424
  03c104c  ori 3, 31, 0
  03c1050  lfs 2, 44(4)
  03c1054  lfs 3, 48(4)
  03c1058  lfs 4, 52(4)
  03c105c  bl 0xff2e8
  03c1060  nop
  03c1064  lbz 3, 112(31)
  03c1068  rlwinm 3, 3, 0, 30, 30
  03c106c  cmpwi 3, 0
  03c1070  bt 2, 0x3c1e6c
  03c1074  lis 3, 60
  03c1078  addi 29, 3, 2424
  03c107c  lfs 1, 32(29)
  03c1080  lfs 2, 36(29)
  03c1084  bl 0xfcbe8
  03c1088  nop
  03c108c  fctidz 1, 1
  03c1090  lfs 2, 40(29)
  03c1094  lis 3, 114
  03c1098  li 4, 4
  03c109c  lfs 3, -3056(3)
  03c10a0  li 3, 572
  03c10a4  fcfid 1, 1
  03c10a8  frsp 1, 1
  03c10ac  fadds 1, 1, 2
  03c10b0  fmuls 1, 3, 1
  03c10b4  fctiwz 1, 1
  03c10b8  stfiwx 1, 3, 30
  03c10bc  lbz 3, 83(31)
  03c10c0  stb 4, 32(31)
  03c10c4  cmpwi 3, 3
  03c10c8  bt 2, 0x3c1e6c
  03c10cc  lis 3, 60
  03c10d0  lis 4, 114
  03c10d4  addi 3, 3, 2424
  03c10d8  li 5, 0
  03c10dc  lfs 1, 24(3)
  03c10e0  lfs 2, -3056(4)
  03c10e4  ori 3, 31, 0
  03c10e8  fmuls 1, 2, 1
  03c10ec  li 4, 3
  03c10f0  fctiwz 1, 1
  03c10f4  stfd 1, 344(1)
  03c10f8  lwz 6, 348(1)
  03c10fc  extsw 6, 6
  03c1100  bl 0xfddc0
  03c1104  nop
  03c1108  b 0x3c1e6c
  03c110c  lfs 1, 256(1)
  03c1110  lfs 2, 260(1)
  03c1114  lfs 3, 20(31)
  03c1118  fsubs 1, 1, 22
  03c111c  fsubs 2, 2, 3
  03c1120  bl 0x5e8338
  03c1124  nop
  03c1128  lis 3, 60
  03c112c  addic 5, 30, 544
  03c1130  addi 29, 3, 2424
  03c1134  ori 3, 31, 0
  03c1138  lfs 2, 56(29)
  03c113c  lfs 3, 48(29)
  03c1140  lfs 4, 60(29)
  03c1144  bl 0xff2e8
  03c1148  nop
  03c114c  lfs 1, 64(29)
  03c1150  lfs 2, 68(29)
  03c1154  lfs 3, 72(31)
  03c1158  lfs 4, 72(29)
  03c115c  fadds 1, 3, 1
  03c1160  fsubs 5, 2, 3
  03c1164  fsubs 6, 4, 3
  03c1168  li 5, 0
  03c116c  ori 3, 31, 0
  03c1170  addic 4, 30, 384
  03c1174  addic 6, 1, 144
  03c1178  fsubs 2, 2, 1
  03c117c  fsub 7, 3, 5
  03c1180  fsubs 4, 4, 1
  03c1184  fsub 9, 1, 2
  03c1188  fsel 3, 7, 5, 3
  03c118c  lfs 5, 76(29)
  03c1190  fsel 1, 9, 2, 1
  03c1194  fsub 2, 6, 3
  03c1198  fsub 8, 4, 1
  03c119c  fsel 2, 2, 6, 3
  03c11a0  lfs 3, 80(29)
  03c11a4  lfs 6, 84(29)
  03c11a8  lfs 7, 88(29)
  03c11ac  fsel 1, 8, 4, 1
  03c11b0  fmuls 4, 2, 2
  03c11b4  fmuls 8, 1, 1
  03c11b8  fmuls 9, 4, 2
  03c11bc  fmuls 11, 8, 1
  03c11c0  fmuls 12, 4, 9
  03c11c4  fmadds 2, 9, 5, 2
  03c11c8  lfs 9, 92(29)
  03c11cc  stw 5, 136(1)
  03c11d0  addic 5, 1, 128
  03c11d4  fmuls 10, 8, 11
  03c11d8  fmadds 1, 11, 5, 1
  03c11dc  fmuls 5, 4, 12
  03c11e0  fmadds 2, 12, 3, 2
  03c11e4  fmuls 11, 8, 10
  03c11e8  fmadds 1, 10, 3, 1
  03c11ec  fmuls 3, 4, 5
  03c11f0  fmadds 2, 5, 6, 2
  03c11f4  fmuls 4, 8, 11
  03c11f8  fmadds 1, 11, 6, 1
  03c11fc  fmadds 2, 3, 7, 2
  03c1200  fmadds 1, 4, 7, 1
  03c1204  fmuls 2, 2, 9
  03c1208  fmuls 3, 1, 9
  03c120c  stfs 2, 132(1)
  03c1210  lfs 1, 96(29)
  03c1214  stfs 3, 128(1)
  03c1218  bl 0x101058
  03c121c  nop
  03c1220  addic 3, 30, 572
  03c1224  bl 0x4fff60
  03c1228  nop
  03c122c  cmpwi 3, 0
  03c1230  bt 2, 0x3c1278
  03c1234  lis 3, 60
  03c1238  addi 29, 3, 2424
  03c123c  lfs 1, 32(29)
  03c1240  lfs 2, 36(29)
  03c1244  bl 0xfcbe8
  03c1248  nop
  03c124c  fctidz 1, 1
  03c1250  lfs 2, 40(29)
  03c1254  lis 3, 114
  03c1258  lfs 3, -3056(3)
  03c125c  li 3, 572
  03c1260  fcfid 1, 1
  03c1264  frsp 1, 1
  03c1268  fadds 1, 1, 2
  03c126c  fmuls 1, 3, 1
  03c1270  fctiwz 1, 1
  03c1274  stfiwx 1, 3, 30
  03c1278  lfs 2, 20(31)
  03c127c  lfs 1, 260(1)
  03c1280  lfs 3, 16(31)
  03c1284  fsubs 4, 2, 1
  03c1288  lfs 2, 256(1)
  03c128c  fsubs 3, 3, 2
  03c1290  lis 3, 60
  03c1294  lis 4, 114
  03c1298  lfs 5, 564(30)
  03c129c  addi 3, 3, 2424
  03c12a0  lis 5, 114
  03c12a4  fmuls 4, 4, 4
  03c12a8  fmadds 4, 3, 3, 4
  03c12ac  lfs 3, 104(3)
  03c12b0  lfs 6, -3052(4)
  03c12b4  lfs 7, 40(3)
  03c12b8  fmuls 5, 5, 6
  03c12bc  lfs 6, -3056(5)
  03c12c0  lfs 8, 100(3)
  03c12c4  fmuls 10, 6, 3
  03c12c8  lfs 9, 108(3)
  03c12cc  fmuls 6, 6, 8
  03c12d0  fsqrts 4, 4
  03c12d4  fmuls 7, 5, 7
  03c12d8  fmuls 5, 5, 10
  03c12dc  fmadds 5, 7, 6, 5
  03c12e0  fadds 5, 5, 9
  03c12e4  fcmpu 0, 4, 5
  03c12e8  cror 6, 1, 2
  03c12ec  bt 6, 0x3c1334
  03c12f0  li 3, 6
  03c12f4  lbz 4, 83(31)
  03c12f8  cmpwi 4, 5
  03c12fc  stb 3, 32(31)
  03c1300  bt 2, 0x3c1e6c
  03c1304  lis 3, 114
  03c1308  lfs 1, -3056(3)
  03c130c  fmuls 1, 1, 3
  03c1310  bl 0x502758
  03c1314  nop
  03c1318  ori 6, 3, 0
  03c131c  ori 3, 31, 0
  03c1320  li 4, 5
  03c1324  li 5, 0
  03c1328  bl 0xfddc0
  03c132c  nop
  03c1330  b 0x3c1e6c
  03c1334  lfs 3, 516(30)
  03c1338  lfs 4, 512(30)
  03c133c  fsubs 1, 1, 3
  03c1340  fsubs 3, 2, 4
  03c1344  lfs 2, 264(1)
  03c1348  lfs 4, 520(30)
  03c134c  fsubs 4, 2, 4
  03c1350  fmuls 1, 1, 1
  03c1354  fmadds 1, 3, 3, 1
  03c1358  lfs 3, 560(30)
  03c135c  fmadds 1, 4, 4, 1
  03c1360  fsqrts 1, 1
  03c1364  fcmpu 0, 1, 3
  03c1368  bt 1, 0x3c1390
  03c136c  lfs 1, 24(31)
  03c1370  lis 3, 60
  03c1374  fsubs 1, 2, 1
  03c1378  addi 3, 3, 2424
  03c137c  lfs 2, 28(3)
  03c1380  fabs 1, 1
  03c1384  fcmpu 0, 1, 2
  03c1388  cror 6, 0, 2
  03c138c  bt 6, 0x3c1e6c
  03c1390  li 3, 7
  03c1394  stb 3, 32(31)
  03c1398  b 0x3c1e6c
  03c139c  lis 3, 165
  03c13a0  lwz 5, 624(30)
  03c13a4  addic 4, 31, 16
  03c13a8  addic 29, 3, 7136
  03c13ac  lis 3, 60
  03c13b0  slwi 5, 5, 2
  03c13b4  addi 3, 3, 2424
  03c13b8  extsw 8, 5
  03c13bc  addic 7, 1, 340
  03c13c0  addic 5, 1, 160
  03c13c4  addic 6, 1, 336
  03c13c8  lfs 1, 112(3)
  03c13cc  lfs 2, 116(3)
  03c13d0  li 9, 0
  03c13d4  lwzx 29, 29, 8
  03c13d8  lfs 3, 120(3)
  03c13dc  ori 3, 29, 0
  03c13e0  bl 0x10d7a0
  03c13e4  nop
  03c13e8  lwz 3, 336(1)
  03c13ec  lwz 5, 632(30)
  03c13f0  extsw 4, 3
  03c13f4  extsw 6, 5
  03c13f8  subc 3, 3, 5
  03c13fc  subc 4, 6, 4
  03c1400  sradi 6, 4, 63
  03c1404  addic 4, 30, 384
  03c1408  and 3, 6, 3
  03c140c  addic 6, 30, 64
  03c1410  addc 5, 5, 3
  03c1414  ori 3, 31, 0
  03c1418  sldi 7, 5, 4
  03c141c  addc 7, 29, 7
  03c1420  stw 5, 632(30)
  03c1424  addic 5, 7, 16
  03c1428  clrldi 5, 5, 32
  03c142c  bl 0x101cc0
  03c1430  nop
  03c1434  li 4, 20
  03c1438  and 3, 3, 4
  03c143c  cmpwi 3, 0
  03c1440  bt 2, 0x3c1518
  03c1444  lwz 4, 0(29)
  03c1448  lwz 3, 632(30)
  03c144c  addic 4, 4, -1
  03c1450  cmpw 3, 4
  03c1454  bf 0, 0x3c1464
  03c1458  addic 3, 3, 1
  03c145c  stw 3, 632(30)
  03c1460  b 0x3c1518
  03c1464  li 3, -1
  03c1468  li 4, 1
  03c146c  stw 3, 624(30)
  03c1470  lbz 3, 83(31)
  03c1474  stb 4, 32(31)
  03c1478  cmpwi 3, 1
  03c147c  bt 2, 0x3c14c0
  03c1480  lis 3, 60
  03c1484  lis 4, 114
  03c1488  addi 3, 3, 2424
  03c148c  li 5, 0
  03c1490  lfs 1, 24(3)
  03c1494  lfs 2, -3056(4)
  03c1498  ori 3, 31, 0
  03c149c  li 4, 1
  03c14a0  fmuls 1, 2, 1
  03c14a4  fctiwz 1, 1
  03c14a8  stfd 1, 344(1)
  03c14ac  lwz 6, 348(1)
  03c14b0  extsw 6, 6
  03c14b4  bl 0xfddc0
  03c14b8  nop
  03c14bc  lbz 3, 83(31)
  03c14c0  cmpwi 1, 3, 0
  03c14c4  lwz 3, 584(30)
  03c14c8  cmpwi 3, -1
  03c14cc  bt 2, 0x3c1518
  03c14d0  bt 6, 0x3c1510
  03c14d4  lis 3, 60
  03c14d8  lis 4, 114
  03c14dc  addi 3, 3, 2424
  03c14e0  li 5, 0
  03c14e4  lfs 1, 24(3)
  03c14e8  lfs 2, -3056(4)
  03c14ec  ori 3, 31, 0
  03c14f0  fmuls 1, 2, 1
  03c14f4  li 4, 0
  03c14f8  fctiwz 1, 1
  03c14fc  stfd 1, 344(1)
  03c1500  lwz 6, 348(1)
  03c1504  extsw 6, 6
  03c1508  bl 0xfddc0
  03c150c  nop
  03c1510  li 3, 2
  03c1514  stb 3, 32(31)
  03c1518  li 3, 14
  03c151c  bl 0xfc620
  03c1520  nop
  03c1524  cmpwi 3, 0
  03c1528  bf 2, 0x3c1e6c
  03c152c  lwz 3, 584(30)
  03c1530  cmpwi 3, -1
  03c1534  bt 2, 0x3c1578
  03c1538  lis 4, 164
  03c153c  slwi 3, 3, 8
  03c1540  lwz 4, -28512(4)
  03c1544  addc 3, 4, 3
  03c1548  cmpwi 3, 0
  03c154c  bt 2, 0x3c1578
  03c1550  clrldi 3, 3, 32
  03c1554  lbz 4, 32(3)
  03c1558  cmpwi 1, 4, 253
  03c155c  cmpwi 4, 254
  03c1560  cror 2, 2, 6
  03c1564  bt 2, 0x3c1578
  03c1568  bl 0x3c2108
  03c156c  nop
  03c1570  cmpwi 3, 0
  03c1574  bt 2, 0x3c1e6c
  03c1578  lis 3, 60
  03c157c  li 4, -1
  03c1580  addi 29, 3, 2424
  03c1584  stw 4, 624(30)
  03c1588  lfs 1, 32(29)
  03c158c  lfs 2, 36(29)
  03c1590  bl 0xfcbe8
  03c1594  nop
  03c1598  fctidz 1, 1
  03c159c  lfs 2, 40(29)
  03c15a0  lis 3, 114
  03c15a4  li 4, 4
  03c15a8  lfs 3, -3056(3)
  03c15ac  li 3, 572
  03c15b0  fcfid 1, 1
  03c15b4  frsp 1, 1
  03c15b8  fadds 1, 1, 2
  03c15bc  fmuls 1, 3, 1
  03c15c0  fctiwz 1, 1
  03c15c4  stfiwx 1, 3, 30
  03c15c8  lbz 3, 83(31)
  03c15cc  stb 4, 32(31)
  03c15d0  cmpwi 3, 3
  03c15d4  bt 2, 0x3c1e6c
  03c15d8  lis 3, 60
  03c15dc  lis 4, 114
  03c15e0  addi 3, 3, 2424
  03c15e4  li 5, 0
  03c15e8  lfs 1, 24(3)
  03c15ec  lfs 2, -3056(4)
  03c15f0  ori 3, 31, 0
  03c15f4  li 4, 3
  03c15f8  fmuls 1, 2, 1
  03c15fc  fctiwz 1, 1
  03c1600  stfd 1, 344(1)
  03c1604  lwz 6, 348(1)
  03c1608  extsw 6, 6
  03c160c  bl 0xfddc0
  03c1610  nop
  03c1614  b 0x3c1e6c
  03c1618  lfs 1, 256(1)
  03c161c  lfs 2, 260(1)
  03c1620  lfs 3, 20(31)
  03c1624  fsubs 1, 1, 22
  03c1628  fsubs 2, 2, 3
  03c162c  bl 0x5e8338
  03c1630  nop
  03c1634  lis 3, 60
  03c1638  addic 5, 30, 544
  03c163c  addi 29, 3, 2424
  03c1640  ori 3, 31, 0
  03c1644  lfs 22, 60(29)
  03c1648  lfs 2, 56(29)
  03c164c  lfs 3, 48(29)
  03c1650  fmr 4, 22
  03c1654  bl 0xff2e8
  03c1658  nop
  03c165c  lfs 24, 68(29)
  03c1660  lfs 23, 64(29)
  03c1664  lfs 1, 72(31)
  03c1668  lfs 25, 72(29)
  03c166c  fadds 2, 1, 23
  03c1670  fsubs 3, 24, 1
  03c1674  fsubs 4, 25, 1
  03c1678  lfs 26, 76(29)
  03c167c  lfs 27, 80(29)
  03c1680  lfs 28, 84(29)
  03c1684  lfs 29, 88(29)
  03c1688  li 7, 0
  03c168c  lfs 30, 92(29)
  03c1690  fsubs 5, 24, 2
  03c1694  fsub 6, 1, 3
  03c1698  fsubs 7, 25, 2
  03c169c  ori 3, 31, 0
  03c16a0  addic 4, 30, 384
  03c16a4  addic 5, 1, 176
  03c16a8  addic 6, 30, 64
  03c16ac  fsub 8, 2, 5
  03c16b0  fsel 1, 6, 3, 1
  03c16b4  fsel 2, 8, 5, 2
  03c16b8  fsub 3, 4, 1
  03c16bc  fsub 5, 7, 2
  03c16c0  fsel 1, 3, 4, 1
  03c16c4  fsel 2, 5, 7, 2
  03c16c8  fmuls 3, 1, 1
  03c16cc  fmuls 4, 2, 2
  03c16d0  fmuls 5, 3, 1
  03c16d4  fmuls 6, 4, 2
  03c16d8  fmuls 7, 3, 5
  03c16dc  fmadds 1, 5, 26, 1
  03c16e0  fmuls 5, 4, 6
  03c16e4  fmadds 2, 6, 26, 2
  03c16e8  fmuls 6, 3, 7
  03c16ec  fmadds 1, 7, 27, 1
  03c16f0  fmuls 7, 4, 5
  03c16f4  fmadds 2, 5, 27, 2
  03c16f8  fmuls 3, 3, 6
  03c16fc  fmadds 1, 6, 28, 1
  03c1700  fmuls 4, 4, 7
  03c1704  fmadds 2, 7, 28, 2
  03c1708  fmadds 1, 3, 29, 1
  03c170c  fmadds 2, 4, 29, 2
  03c1710  fmuls 1, 1, 30
  03c1714  fmuls 2, 2, 30
  03c1718  stfs 1, 180(1)
  03c171c  lfs 21, 120(29)
  03c1720  stw 7, 184(1)
  03c1724  lfs 31, 96(29)
  03c1728  fmr 1, 31
  03c172c  stfs 2, 176(1)
  03c1730  bl 0x101058
  03c1734  nop
  03c1738  lbz 3, 82(31)
  03c173c  cmpwi 3, 5
  03c1740  bf 2, 0x3c1780
  03c1744  lis 3, 60
  03c1748  lfs 1, 564(30)
  03c174c  lis 4, 114
  03c1750  addi 5, 3, 2424
  03c1754  lis 6, 114
  03c1758  addic 3, 30, 420
  03c175c  lfs 2, -3052(4)
  03c1760  lfs 3, 100(5)
  03c1764  lfs 4, -3056(6)
  03c1768  fmuls 2, 1, 2
  03c176c  fmr 1, 21
  03c1770  fmuls 3, 4, 3
  03c1774  fdivs 2, 2, 3
  03c1778  bl 0x109af0
  03c177c  nop
  03c1780  ori 3, 31, 0
  03c1784  bl 0xefe40
  03c1788  nop
  03c178c  lis 3, 60
  03c1790  addi 3, 3, 2424
  03c1794  lfs 2, 124(3)
  03c1798  lfs 3, 128(3)
  03c179c  fsubs 1, 1, 2
  03c17a0  fabs 1, 1
  03c17a4  fcmpu 0, 1, 3
  03c17a8  bt 1, 0x3c192c
  03c17ac  lfs 1, 264(1)
  03c17b0  lfs 2, 24(31)
  03c17b4  fsubs 1, 1, 2
  03c17b8  fabs 1, 1
  03c17bc  fcmpu 0, 1, 31
  03c17c0  cror 6, 1, 2
  03c17c4  bt 6, 0x3c192c
  03c17c8  lfs 1, 256(1)
  03c17cc  lfs 2, 16(31)
  03c17d0  lfs 3, 260(1)
  03c17d4  fsubs 1, 1, 2
  03c17d8  lfs 4, 20(31)
  03c17dc  fsubs 2, 3, 4
  03c17e0  bl 0x5e8338
  03c17e4  nop
  03c17e8  lfs 2, 72(31)
  03c17ec  bl 0x5026a0
  03c17f0  nop
  03c17f4  fmr 3, 1
  03c17f8  lis 3, 60
  03c17fc  lfs 2, 264(1)
  03c1800  addi 3, 3, 2424
  03c1804  lfs 1, 268(1)
  03c1808  lfs 4, 132(3)
  03c180c  fcmpu 0, 3, 4
  03c1810  cror 6, 1, 2
  03c1814  bt 6, 0x3c192c
  03c1818  lwz 3, 320(1)
  03c181c  cmpwi 3, 0
  03c1820  bt 2, 0x3c192c
  03c1824  lfs 4, 20(31)
  03c1828  lfs 3, 260(1)
  03c182c  lfs 5, 16(31)
  03c1830  fsubs 6, 4, 3
  03c1834  lfs 4, 256(1)
  03c1838  fsubs 5, 5, 4
  03c183c  fmuls 6, 6, 6
  03c1840  fmadds 5, 5, 5, 6
  03c1844  fsqrts 5, 5
  03c1848  fcmpu 0, 5, 30
  03c184c  cror 6, 1, 2
  03c1850  bt 6, 0x3c192c
  03c1854  lfs 5, 72(31)
  03c1858  fsubs 6, 24, 5
  03c185c  fadds 7, 5, 23
  03c1860  fsubs 8, 25, 5
  03c1864  li 4, 0
  03c1868  lis 5, 60
  03c186c  addic 7, 1, 208
  03c1870  addi 6, 5, 2424
  03c1874  stw 4, 200(1)
  03c1878  fsub 9, 5, 6
  03c187c  fsubs 10, 24, 7
  03c1880  fsubs 11, 25, 7
  03c1884  stfs 4, 208(1)
  03c1888  stfs 3, 212(1)
  03c188c  stfs 1, 220(1)
  03c1890  li 5, 1
  03c1894  addic 8, 1, 192
  03c1898  fsel 5, 9, 6, 5
  03c189c  fsub 6, 7, 10
  03c18a0  ori 4, 31, 0
  03c18a4  fsub 9, 8, 5
  03c18a8  fsel 6, 6, 10, 7
  03c18ac  fsel 5, 9, 8, 5
  03c18b0  fsub 7, 11, 6
  03c18b4  fmuls 8, 5, 5
  03c18b8  fsel 6, 7, 11, 6
  03c18bc  fmuls 7, 8, 5
  03c18c0  fmuls 9, 6, 6
  03c18c4  fmuls 10, 8, 7
  03c18c8  fmadds 5, 7, 26, 5
  03c18cc  fmuls 7, 9, 6
  03c18d0  fmuls 11, 8, 10
  03c18d4  fmadds 5, 10, 27, 5
  03c18d8  fmuls 10, 9, 7
  03c18dc  fmadds 6, 7, 26, 6
  03c18e0  fmuls 7, 8, 11
  03c18e4  fmadds 5, 11, 28, 5
  03c18e8  fmuls 8, 9, 10
  03c18ec  fmadds 6, 10, 27, 6
  03c18f0  fmadds 1, 7, 29, 5
  03c18f4  fmuls 3, 9, 8
  03c18f8  fmadds 4, 8, 28, 6
  03c18fc  fmuls 5, 1, 22
  03c1900  fmr 1, 31
  03c1904  fmadds 3, 3, 29, 4
  03c1908  stfs 5, 196(1)
  03c190c  lfs 4, 136(6)
  03c1910  fmuls 3, 3, 22
  03c1914  fadds 2, 2, 4
  03c1918  stfs 3, 192(1)
  03c191c  stfs 2, 216(1)
  03c1920  bl 0x105c08
  03c1924  nop
  03c1928  b 0x3c1e6c
  03c192c  lbz 3, 112(31)
  03c1930  rlwinm 3, 3, 0, 30, 30
  03c1934  cmpwi 3, 0
  03c1938  bt 2, 0x3c1e6c
  03c193c  lis 3, 114
  03c1940  lfs 1, 564(30)
  03c1944  li 4, 7
  03c1948  lfs 2, -3052(3)
  03c194c  fmuls 1, 1, 2
  03c1950  stfs 1, 420(30)
  03c1954  lbz 3, 83(31)
  03c1958  stb 4, 32(31)
  03c195c  cmpwi 3, 3
  03c1960  bt 2, 0x3c19a0
  03c1964  lis 3, 60
  03c1968  lis 4, 114
  03c196c  addi 3, 3, 2424
  03c1970  li 5, 0
  03c1974  lfs 1, 140(3)
  03c1978  lfs 2, -3056(4)
  03c197c  ori 3, 31, 0
  03c1980  fmuls 1, 2, 1
  03c1984  li 4, 3
  03c1988  fctiwz 1, 1
  03c198c  stfd 1, 344(1)
  03c1990  lwz 6, 348(1)
  03c1994  extsw 6, 6
  03c1998  bl 0xfddc0
  03c199c  nop
  03c19a0  lis 3, 60
  03c19a4  li 4, 144
  03c19a8  vspltisw 2, -1
  03c19ac  addi 3, 3, 2424
  03c19b0  lis 5, 114
  03c19b4  li 6, -3056
  03c19b8  vslw 2, 2, 2
  03c19bc  <unknown>
  03c19c0  li 3, 580
  03c19c4  vspltw 3, 3, 0
  03c19c8  <unknown>
  03c19cc  vmaddfp 2, 4, 3, 2
  03c19d0  vctsxs 2, 2, 0
  03c19d4  vspltw 2, 2, 0
  03c19d8  stvewx 2, 3, 30
  03c19dc  b 0x3c1e6c
  03c19e0  lfs 1, 512(30)
  03c19e4  lfs 2, 516(30)
  03c19e8  lfs 3, 20(31)
  03c19ec  fsubs 1, 1, 22
  03c19f0  fsubs 2, 2, 3
  03c19f4  bl 0x5e8338
  03c19f8  nop
  03c19fc  lis 3, 60
  03c1a00  addic 5, 30, 544
  03c1a04  addi 29, 3, 2424
  03c1a08  ori 3, 31, 0
  03c1a0c  lfs 2, 44(29)
  03c1a10  lfs 3, 48(29)
  03c1a14  lfs 4, 52(29)
  03c1a18  bl 0xff2e8
  03c1a1c  nop
  03c1a20  lfs 1, 68(29)
  03c1a24  lfs 2, 64(29)
  03c1a28  lfs 3, 72(31)
  03c1a2c  lfs 4, 72(29)
  03c1a30  fadds 2, 3, 2
  03c1a34  fsubs 5, 1, 3
  03c1a38  fsubs 6, 4, 3
  03c1a3c  li 3, 0
  03c1a40  addic 4, 30, 384
  03c1a44  addic 5, 1, 224
  03c1a48  fsubs 1, 1, 2
  03c1a4c  fsub 7, 3, 5
  03c1a50  fsubs 4, 4, 2
  03c1a54  addic 6, 1, 240
  03c1a58  fsub 9, 2, 1
  03c1a5c  fsel 3, 7, 5, 3
  03c1a60  lfs 5, 76(29)
  03c1a64  lfs 7, 80(29)
  03c1a68  fsel 1, 9, 1, 2
  03c1a6c  fsub 2, 6, 3
  03c1a70  fsub 9, 4, 1
  03c1a74  fsel 2, 2, 6, 3
  03c1a78  lfs 3, 84(29)
  03c1a7c  lfs 6, 88(29)
  03c1a80  lfs 8, 92(29)
  03c1a84  stw 3, 232(1)
  03c1a88  ori 3, 31, 0
  03c1a8c  fsel 1, 9, 4, 1
  03c1a90  fmuls 4, 2, 2
  03c1a94  fmuls 9, 1, 1
  03c1a98  fmuls 10, 4, 2
  03c1a9c  fmuls 11, 9, 1
  03c1aa0  fmuls 12, 4, 10
  03c1aa4  fmadds 2, 10, 5, 2
  03c1aa8  fmadds 1, 11, 5, 1
  03c1aac  fmuls 5, 4, 12
  03c1ab0  fmadds 2, 12, 7, 2
  03c1ab4  fmuls 10, 9, 11
  03c1ab8  fmuls 4, 4, 5
  03c1abc  fmadds 2, 5, 3, 2
  03c1ac0  fmuls 11, 9, 10
  03c1ac4  fmadds 1, 10, 7, 1
  03c1ac8  fmadds 2, 4, 6, 2
  03c1acc  fmuls 5, 9, 11
  03c1ad0  fmadds 1, 11, 3, 1
  03c1ad4  fmuls 2, 2, 8
  03c1ad8  fmadds 1, 5, 6, 1
  03c1adc  fmuls 1, 1, 8
  03c1ae0  stfs 2, 228(1)
  03c1ae4  lfs 2, 96(29)
  03c1ae8  fmr 31, 2
  03c1aec  stfs 1, 224(1)
  03c1af0  fmr 1, 31
  03c1af4  bl 0x101058
  03c1af8  nop
  03c1afc  lfs 22, 20(31)
  03c1b00  lfs 2, 516(30)
  03c1b04  lfs 1, 16(31)
  03c1b08  fsubs 2, 22, 2
  03c1b0c  lfs 3, 512(30)
  03c1b10  fsubs 3, 1, 3
  03c1b14  fmuls 2, 2, 2
  03c1b18  fmadds 2, 3, 3, 2
  03c1b1c  fsqrts 2, 2
  03c1b20  fcmpu 0, 2, 31
  03c1b24  cror 6, 1, 2
  03c1b28  bt 6, 0x3c1b80
  03c1b2c  li 3, 1
  03c1b30  lbz 4, 83(31)
  03c1b34  cmpwi 4, 1
  03c1b38  stb 3, 32(31)
  03c1b3c  bt 2, 0x3c1e6c
  03c1b40  lis 3, 60
  03c1b44  lis 4, 114
  03c1b48  addi 3, 3, 2424
  03c1b4c  li 5, 0
  03c1b50  lfs 1, 140(3)
  03c1b54  lfs 2, -3056(4)
  03c1b58  ori 3, 31, 0
  03c1b5c  li 4, 1
  03c1b60  fmuls 1, 2, 1
  03c1b64  fctiwz 1, 1
  03c1b68  stfd 1, 344(1)
  03c1b6c  lwz 6, 348(1)
  03c1b70  extsw 6, 6
  03c1b74  bl 0xfddc0
  03c1b78  nop
  03c1b7c  b 0x3c1e6c
  03c1b80  lwz 3, 580(30)
  03c1b84  cmpwi 3, 0
  03c1b88  bf 2, 0x3c1e6c
  03c1b8c  lfs 2, 260(1)
  03c1b90  lfs 3, 256(1)
  03c1b94  fsubs 2, 22, 2
  03c1b98  fsubs 1, 1, 3
  03c1b9c  lis 3, 60
  03c1ba0  lfs 3, 564(30)
  03c1ba4  lis 4, 114
  03c1ba8  addi 3, 3, 2424
  03c1bac  lis 5, 114
  03c1bb0  lfs 4, -3056(4)
  03c1bb4  fmuls 2, 2, 2
  03c1bb8  fmadds 2, 1, 1, 2
  03c1bbc  lfs 1, 104(3)
  03c1bc0  lfs 5, -3052(5)
  03c1bc4  fmuls 8, 4, 1
  03c1bc8  lfs 6, 40(3)
  03c1bcc  fmuls 3, 3, 5
  03c1bd0  lfs 5, 100(3)
  03c1bd4  lfs 7, 108(3)
  03c1bd8  fmuls 4, 4, 5
  03c1bdc  fsqrts 2, 2
  03c1be0  fmuls 6, 3, 6
  03c1be4  fmuls 3, 3, 8
  03c1be8  fmadds 3, 6, 4, 3
  03c1bec  fadds 3, 3, 7
  03c1bf0  fcmpu 0, 2, 3
  03c1bf4  cror 6, 1, 2
  03c1bf8  bt 6, 0x3c1e6c
  03c1bfc  li 3, 6
  03c1c00  lbz 4, 83(31)
  03c1c04  cmpwi 4, 5
  03c1c08  stb 3, 32(31)
  03c1c0c  bt 2, 0x3c1e6c
  03c1c10  lis 3, 114
  03c1c14  lfs 2, -3056(3)
  03c1c18  fmuls 1, 2, 1
  03c1c1c  bl 0x502758
  03c1c20  nop
  03c1c24  ori 6, 3, 0
  03c1c28  ori 3, 31, 0
  03c1c2c  li 4, 5
  03c1c30  li 5, 0
  03c1c34  bl 0xfddc0
  03c1c38  nop
  03c1c3c  b 0x3c1e6c
  03c1c40  ori 3, 31, 0
  03c1c44  addic 4, 30, 288
  03c1c48  bl 0x10b030
  03c1c4c  nop
  03c1c50  rlwinm 3, 3, 0, 25, 26
  03c1c54  cmpwi 3, 0
  03c1c58  bt 2, 0x3c1cb0
  03c1c5c  li 3, 4
  03c1c60  lbz 4, 83(31)
  03c1c64  cmpwi 4, 3
  03c1c68  stb 3, 32(31)
  03c1c6c  bt 2, 0x3c1e6c
  03c1c70  lis 3, 60
  03c1c74  lis 4, 114
  03c1c78  addi 3, 3, 2424
  03c1c7c  li 5, 0
  03c1c80  lfs 1, 24(3)
  03c1c84  lfs 2, -3056(4)
  03c1c88  ori 3, 31, 0
  03c1c8c  li 4, 3
  03c1c90  fmuls 1, 2, 1
  03c1c94  fctiwz 1, 1
  03c1c98  stfd 1, 344(1)
  03c1c9c  lwz 6, 348(1)
  03c1ca0  extsw 6, 6
  03c1ca4  bl 0xfddc0
  03c1ca8  nop
  03c1cac  b 0x3c1e6c
  03c1cb0  lwz 4, 24(31)
  03c1cb4  lis 3, 16384
  03c1cb8  srawi 5, 4, 31
  03c1cbc  srwi 6, 5, 1
  03c1cc0  xor 4, 6, 4
  03c1cc4  subc 4, 4, 5
  03c1cc8  cmpw 4, 3
  03c1ccc  bf 0, 0x3c1e6c
  03c1cd0  ori 3, 31, 0
  03c1cd4  li 4, 0
  03c1cd8  li 5, -1
  03c1cdc  bl 0xfd8d0
  03c1ce0  nop
  03c1ce4  ori 3, 31, 0
  03c1ce8  bl 0xefb38
  03c1cec  nop
  03c1cf0  b 0x3c1ef0
  03c1cf4  ori 3, 31, 0
  03c1cf8  addic 4, 30, 288
  03c1cfc  bl 0x48c188
  03c1d00  nop
  03c1d04  cmpwi 3, 0
  03c1d08  bt 2, 0x3c1e6c
  03c1d0c  li 3, 0
  03c1d10  stb 3, 32(31)
  03c1d14  sth 3, 200(30)
  03c1d18  b 0x3c1e6c
  03c1d1c  li 5, 0
  03c1d20  ori 6, 3, 0
  03c1d24  ori 3, 31, 0
  03c1d28  rlwimi 6, 5, 0, 19, 19
  03c1d2c  addic 4, 30, 288
  03c1d30  sth 6, 52(31)
  03c1d34  bl 0x10b030
  03c1d38  nop
  03c1d3c  rlwinm 3, 3, 0, 25, 26
  03c1d40  cmpwi 3, 0
  03c1d44  bt 2, 0x3c1e28
  03c1d48  lis 3, 60
  03c1d4c  addic 30, 31, 16
  03c1d50  addi 29, 3, 2424
  03c1d54  ori 3, 31, 0
  03c1d58  ori 4, 30, 0
  03c1d5c  li 6, -1
  03c1d60  lfs 1, 40(29)
  03c1d64  lfs 2, 148(29)
  03c1d68  bl 0x10fb28
  03c1d6c  nop
  03c1d70  lis 3, 161
  03c1d74  lfs 31, 120(29)
  03c1d78  addic 29, 31, 64
  03c1d7c  addic 28, 3, 23856
  03c1d80  ori 3, 31, 0
  03c1d84  fmr 1, 31
  03c1d88  li 8, 0
  03c1d8c  ori 10, 28, 0
  03c1d90  std 28, 112(1)
  03c1d94  li 4, 1742
  03c1d98  std 28, 120(1)
  03c1d9c  ori 5, 30, 0
  03c1da0  ori 6, 29, 0
  03c1da4  li 7, 0
  03c1da8  bl 0x11a560
  03c1dac  nop
  03c1db0  ori 3, 31, 0
  03c1db4  std 28, 112(1)
  03c1db8  li 4, 1743
  03c1dbc  fmr 1, 31
  03c1dc0  ori 10, 28, 0
  03c1dc4  std 28, 120(1)
  03c1dc8  ori 5, 30, 0
  03c1dcc  ori 6, 29, 0
  03c1dd0  li 7, 0
  03c1dd4  li 8, 0
  03c1dd8  bl 0x11a560
  03c1ddc  nop
  03c1de0  ori 3, 31, 0
  03c1de4  li 4, 1917
  03c1de8  li 5, 1
  03c1dec  li 6, 1917
  03c1df0  li 7, 1
  03c1df4  li 8, 3
  03c1df8  li 9, 2
  03c1dfc  bl 0x11aa78
  03c1e00  nop
  03c1e04  ori 3, 31, 0
  03c1e08  li 4, 0
  03c1e0c  li 5, -1
  03c1e10  bl 0xfd8d0
  03c1e14  nop
  03c1e18  ori 3, 31, 0
  03c1e1c  bl 0xefb38
  03c1e20  nop
  03c1e24  b 0x3c1ef0
  03c1e28  lwz 4, 24(31)
  03c1e2c  lis 3, 16384
  03c1e30  srawi 5, 4, 31
  03c1e34  srwi 6, 5, 1
  03c1e38  xor 4, 6, 4
  03c1e3c  subc 4, 4, 5
  03c1e40  cmpw 4, 3
  03c1e44  bf 0, 0x3c1e6c
  03c1e48  ori 3, 31, 0
  03c1e4c  li 4, 0
  03c1e50  li 5, -1
  03c1e54  bl 0xfd8d0
  03c1e58  nop
  03c1e5c  ori 3, 31, 0
  03c1e60  bl 0xefb38
  03c1e64  nop
  03c1e68  b 0x3c1ef0
  03c1e6c  lbz 3, 49(31)
  03c1e70  cmpwi 3, 0
  03c1e74  bt 2, 0x3c1ed8
  03c1e78  lis 3, 149
  03c1e7c  lfs 1, 20(31)
  03c1e80  lfs 2, 16(31)
  03c1e84  addic 3, 3, 5056
  03c1e88  lfs 3, 324(3)
  03c1e8c  lfs 4, 320(3)
  03c1e90  fsubs 1, 1, 3
  03c1e94  fsubs 2, 2, 4
  03c1e98  lfs 3, 24(31)
  03c1e9c  lfs 4, 328(3)
  03c1ea0  fsubs 3, 3, 4
  03c1ea4  lis 3, 60
  03c1ea8  fmuls 1, 1, 1
  03c1eac  addi 3, 3, 2424
  03c1eb0  fmadds 1, 2, 2, 1
  03c1eb4  lfs 2, 152(3)
  03c1eb8  fmadds 1, 3, 3, 1
  03c1ebc  fsqrts 1, 1
  03c1ec0  fcmpu 0, 1, 2
  03c1ec4  cror 6, 1, 2
  03c1ec8  bt 6, 0x3c1ed8
  03c1ecc  ori 3, 31, 0
  03c1ed0  bl 0x106360
  03c1ed4  nop
  03c1ed8  ori 3, 31, 0
  03c1edc  addic 4, 30, 272
  03c1ee0  bl 0x10c9a0
  03c1ee4  nop
  03c1ee8  li 3, 0
  03c1eec  stb 3, 188(31)
  03c1ef0  ld 0, 496(1)
  03c1ef4  mtlr 0
  03c1ef8  lfd 21, 392(1)
  03c1efc  lfd 22, 400(1)
  03c1f00  lfd 23, 408(1)
  03c1f04  lfd 24, 416(1)
  03c1f08  lfd 25, 424(1)
  03c1f0c  lfd 26, 432(1)
  03c1f10  lfd 27, 440(1)
  03c1f14  lfd 28, 448(1)
  03c1f18  lfd 29, 456(1)
  03c1f1c  lfd 30, 464(1)
  03c1f20  lfd 31, 472(1)
  03c1f24  ld 28, 360(1)
  03c1f28  ld 29, 368(1)
  03c1f2c  ld 30, 376(1)
  03c1f30  ld 31, 384(1)
  03c1f34  addi 1, 1, 480
  03c1f38  blr
