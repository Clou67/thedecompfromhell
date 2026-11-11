# game/lights.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_LIGHTS:   # 0xda2e0, 0x14 bytes
  00da2e0  lis 3, 114
  00da2e4  lis 4, 1
  00da2e8  addic 3, 3, 18092
  00da2ec  stw 4, 72(3)
  00da2f0  blr

STUB_000da2f8_RET_0:   # 0xda2f8, 0x8 bytes
  00da2f8  li 3, 0
  00da2fc  blr

CreatePointLight3:   # 0xda308, 0x1a4 bytes
  00da308  stdu 1, -160(1)
  00da30c  mflr 0
  00da310  std 0, 176(1)
  00da314  stfd 30, 144(1)
  00da318  stfd 31, 152(1)
  00da31c  std 31, 136(1)
  00da320  lis 4, 161
  00da324  ori 31, 6, 0
  00da328  fmr 31, 2
  00da32c  lis 5, 16204
  00da330  ori 5, 5, 52429
  00da334  lwz 4, 1816(4)
  00da338  srawi 7, 4, 31
  00da33c  srwi 6, 7, 1
  00da340  xor 4, 6, 4
  00da344  subc 4, 4, 7
  00da348  std 30, 128(1)
  00da34c  std 29, 120(1)
  00da350  std 28, 112(1)
  00da354  cmpw 4, 5
  00da358  bf 1, 0xda364
  00da35c  li 3, -1
  00da360  b 0xda484
  00da364  lis 4, 162
  00da368  li 30, 0
  00da36c  addic 4, 4, -7920
  00da370  sldi 5, 30, 4
  00da374  addc 6, 5, 5
  00da378  addc 5, 5, 6
  00da37c  extsw 5, 5
  00da380  lwzx 5, 4, 5
  00da384  cmpwi 5, 0
  00da388  bt 2, 0xda39c
  00da38c  addic 30, 30, 1
  00da390  extsw 30, 30
  00da394  cmpwi 30, 8
  00da398  bt 0, 0xda370
  00da39c  cmpwi 30, 8
  00da3a0  bf 2, 0xda3ac
  00da3a4  li 3, -1
  00da3a8  b 0xda484
  00da3ac  ori 4, 3, 0
  00da3b0  lis 3, 162
  00da3b4  slwi 5, 30, 5
  00da3b8  addic 3, 3, -8448
  00da3bc  addc 3, 3, 5
  00da3c0  sldi 5, 30, 4
  00da3c4  lfs 2, 0(4)
  00da3c8  clrldi 29, 3, 32
  00da3cc  lis 3, 162
  00da3d0  addc 6, 5, 5
  00da3d4  addic 3, 3, -7936
  00da3d8  addc 5, 5, 6
  00da3dc  stfs 2, 16(29)
  00da3e0  lfs 2, 4(4)
  00da3e4  addc 5, 3, 5
  00da3e8  clrlwi 3, 31, 24
  00da3ec  stfs 2, 20(29)
  00da3f0  lfs 2, 8(4)
  00da3f4  clrldi 28, 5, 32
  00da3f8  stfs 1, 28(29)
  00da3fc  stfs 2, 24(29)
  00da400  bl 0x502730
  00da404  nop
  00da408  lis 3, 14
  00da40c  srawi 4, 31, 8
  00da410  addi 3, 3, -23808
  00da414  lfs 2, 0(3)
  00da418  clrlwi 3, 4, 24
  00da41c  fmr 30, 2
  00da420  fmuls 1, 1, 30
  00da424  stfs 1, 0(29)
  00da428  bl 0x502730
  00da42c  nop
  00da430  fmuls 1, 1, 30
  00da434  srawi 3, 31, 16
  00da438  clrlwi 3, 3, 24
  00da43c  stfs 1, 4(29)
  00da440  bl 0x502730
  00da444  nop
  00da448  fmuls 1, 1, 30
  00da44c  stfs 31, 12(29)
  00da450  li 4, 48
  00da454  ori 3, 28, 0
  00da458  stfs 1, 8(29)
  00da45c  bl 0x500250
  00da460  nop
  00da464  li 4, 1
  00da468  lis 3, 162
  00da46c  slwi 5, 30, 10
  00da470  addic 3, 3, -7552
  00da474  stw 4, 16(28)
  00da478  addc 4, 3, 5
  00da47c  ori 3, 30, 0
  00da480  stw 4, 12(28)
  00da484  ld 0, 176(1)
  00da488  mtlr 0
  00da48c  lfd 30, 144(1)
  00da490  lfd 31, 152(1)
  00da494  ld 28, 112(1)
  00da498  ld 29, 120(1)
  00da49c  ld 30, 128(1)
  00da4a0  ld 31, 136(1)
  00da4a4  addi 1, 1, 160
  00da4a8  blr

CreatePointLight2:   # 0xda4ac, 0x14c bytes
  00da4ac  stdu 1, -128(1)
  00da4b0  mflr 0
  00da4b4  std 0, 144(1)
  00da4b8  lis 4, 161
  00da4bc  fmr 6, 5
  00da4c0  lis 5, 16204
  00da4c4  fmr 7, 4
  00da4c8  ori 5, 5, 52429
  00da4cc  fmr 5, 1
  00da4d0  lwz 4, 1816(4)
  00da4d4  fmr 4, 2
  00da4d8  srawi 6, 4, 31
  00da4dc  srwi 7, 6, 1
  00da4e0  xor 4, 7, 4
  00da4e4  fmr 2, 7
  00da4e8  subc 4, 4, 6
  00da4ec  fmr 1, 6
  00da4f0  std 31, 120(1)
  00da4f4  std 30, 112(1)
  00da4f8  cmpw 4, 5
  00da4fc  bf 1, 0xda508
  00da500  li 3, -1
  00da504  b 0xda5e0
  00da508  lis 4, 162
  00da50c  li 31, 0
  00da510  addic 4, 4, -7920
  00da514  sldi 5, 31, 4
  00da518  addc 6, 5, 5
  00da51c  addc 5, 5, 6
  00da520  extsw 5, 5
  00da524  lwzx 5, 4, 5
  00da528  cmpwi 5, 0
  00da52c  bt 2, 0xda540
  00da530  addic 31, 31, 1
  00da534  extsw 31, 31
  00da538  cmpwi 31, 8
  00da53c  bt 0, 0xda514
  00da540  cmpwi 31, 8
  00da544  bf 2, 0xda550
  00da548  li 3, -1
  00da54c  b 0xda5e0
  00da550  ori 5, 3, 0
  00da554  lis 3, 162
  00da558  slwi 4, 31, 5
  00da55c  addic 3, 3, -8448
  00da560  sldi 6, 31, 4
  00da564  addc 3, 3, 4
  00da568  lfs 6, 0(5)
  00da56c  lis 7, 162
  00da570  clrldi 8, 3, 32
  00da574  addc 4, 6, 6
  00da578  addic 7, 7, -7936
  00da57c  addc 3, 6, 4
  00da580  li 4, 48
  00da584  stfs 6, 16(8)
  00da588  addc 3, 7, 3
  00da58c  lfs 6, 4(5)
  00da590  clrldi 30, 3, 32
  00da594  stfs 6, 20(8)
  00da598  lfs 6, 8(5)
  00da59c  stfs 5, 28(8)
  00da5a0  ori 3, 30, 0
  00da5a4  stfs 6, 24(8)
  00da5a8  stfs 3, 0(8)
  00da5ac  stfs 2, 4(8)
  00da5b0  stfs 1, 8(8)
  00da5b4  stfs 4, 12(8)
  00da5b8  bl 0x500250
  00da5bc  nop
  00da5c0  li 4, 1
  00da5c4  lis 3, 162
  00da5c8  slwi 5, 31, 10
  00da5cc  addic 3, 3, -7552
  00da5d0  stw 4, 16(30)
  00da5d4  addc 4, 3, 5
  00da5d8  ori 3, 31, 0
  00da5dc  stw 4, 12(30)
  00da5e0  ld 0, 144(1)
  00da5e4  mtlr 0
  00da5e8  ld 30, 112(1)
  00da5ec  ld 31, 120(1)
  00da5f0  addi 1, 1, 128
  00da5f4  blr

DetachPointLight:   # 0xda5f8, 0x3f0 bytes
  00da5f8  stdu 1, -192(1)
  00da5fc  mflr 0
  00da600  std 0, 208(1)
  00da604  std 27, 152(1)
  00da608  ori 27, 3, 0
  00da60c  lis 4, 162
  00da610  sldi 3, 27, 4
  00da614  addic 4, 4, -7936
  00da618  std 30, 176(1)
  00da61c  addc 5, 3, 3
  00da620  std 29, 168(1)
  00da624  clrlwi 30, 27, 16
  00da628  addc 3, 3, 5
  00da62c  std 31, 184(1)
  00da630  rlwinm 29, 27, 4, 16, 27
  00da634  std 28, 160(1)
  00da638  addc 31, 4, 3
  00da63c  rlwinm 28, 27, 8, 16, 23
  00da640  clrldi 31, 31, 32
  00da644  rlwinm 27, 27, 12, 16, 19
  00da648  lhz 3, 0(31)
  00da64c  extsh 5, 3
  00da650  lwz 3, 12(31)
  00da654  lhz 4, 2(31)
  00da658  sldi 5, 5, 1
  00da65c  std 26, 144(1)
  00da660  extsh 4, 4
  00da664  std 25, 136(1)
  00da668  addc 26, 3, 5
  00da66c  sldi 25, 4, 1
  00da670  clrldi 26, 26, 32
  00da674  addc 25, 26, 25
  00da678  std 24, 128(1)
  00da67c  std 23, 120(1)
  00da680  std 22, 112(1)
  00da684  cmpw 26, 25
  00da688  bt 2, 0xda770
  00da68c  lis 22, 101
  00da690  addic 22, 22, 8720
  00da694  lhz 4, 0(26)
  00da698  lis 3, 230
  00da69c  extsh 4, 4
  00da6a0  sldi 5, 4, 7
  00da6a4  sldi 4, 4, 4
  00da6a8  lwz 3, -31756(3)
  00da6ac  subc 4, 5, 4
  00da6b0  addc 24, 3, 4
  00da6b4  clrldi 24, 24, 32
  00da6b8  lhz 23, 106(24)
  00da6bc  clrlwi 3, 23, 28
  00da6c0  cmpw 3, 30
  00da6c4  bf 2, 0xda6dc
  00da6c8  lis 3, 0
  00da6cc  ori 3, 3, 61440
  00da6d0  rlwimi 3, 23, 28, 20, 31
  00da6d4  ori 23, 3, 0
  00da6d8  b 0xda744
  00da6dc  rlwinm 4, 23, 0, 24, 27
  00da6e0  cmpw 4, 29
  00da6e4  bf 2, 0xda6fc
  00da6e8  lis 4, 0
  00da6ec  rlwimi 3, 23, 28, 20, 27
  00da6f0  ori 23, 4, 61440
  00da6f4  or 23, 3, 23
  00da6f8  b 0xda744
  00da6fc  rlwinm 3, 23, 0, 20, 23
  00da700  cmpw 3, 28
  00da704  bf 2, 0xda720
  00da708  clrlwi 3, 23, 24
  00da70c  lis 4, 0
  00da710  rlwimi 3, 23, 28, 20, 23
  00da714  ori 23, 4, 61440
  00da718  or 23, 3, 23
  00da71c  b 0xda744
  00da720  rlwinm 3, 23, 0, 16, 19
  00da724  cmpw 3, 27
  00da728  bf 2, 0xda738
  00da72c  li 3, 15
  00da730  rlwimi 23, 3, 12, 0, 19
  00da734  b 0xda744
  00da738  ori 3, 22, 0
  00da73c  bl 0x5cd098
  00da740  nop
  00da744  lis 3, 0
  00da748  ori 3, 3, 65535
  00da74c  cmpw 23, 3
  00da750  bf 2, 0xda75c
  00da754  li 3, 1
  00da758  stb 3, 93(24)
  00da75c  addic 26, 26, 2
  00da760  sth 23, 106(24)
  00da764  cmpw 26, 25
  00da768  bf 2, 0xda694
  00da76c  lwz 3, 12(31)
  00da770  lhz 5, 8(31)
  00da774  li 4, 0
  00da778  lhz 6, 10(31)
  00da77c  extsh 5, 5
  00da780  extsh 6, 6
  00da784  sldi 5, 5, 1
  00da788  sldi 25, 6, 1
  00da78c  sth 4, 0(31)
  00da790  addc 26, 3, 5
  00da794  sth 4, 2(31)
  00da798  clrldi 26, 26, 32
  00da79c  addc 25, 26, 25
  00da7a0  cmpw 26, 25
  00da7a4  bt 2, 0xda88c
  00da7a8  lis 22, 101
  00da7ac  addic 22, 22, 8752
  00da7b0  lhz 4, 0(26)
  00da7b4  lis 3, 147
  00da7b8  extsh 4, 4
  00da7bc  sldi 4, 4, 4
  00da7c0  lwz 3, -11200(3)
  00da7c4  addc 5, 4, 4
  00da7c8  addc 4, 4, 5
  00da7cc  addc 24, 3, 4
  00da7d0  clrldi 24, 24, 32
  00da7d4  lhz 23, 28(24)
  00da7d8  clrlwi 3, 23, 28
  00da7dc  cmpw 3, 30
  00da7e0  bf 2, 0xda7f8
  00da7e4  lis 3, 0
  00da7e8  ori 3, 3, 61440
  00da7ec  rlwimi 3, 23, 28, 20, 31
  00da7f0  ori 23, 3, 0
  00da7f4  b 0xda860
  00da7f8  rlwinm 4, 23, 0, 24, 27
  00da7fc  cmpw 4, 29
  00da800  bf 2, 0xda818
  00da804  lis 4, 0
  00da808  rlwimi 3, 23, 28, 20, 27
  00da80c  ori 23, 4, 61440
  00da810  or 23, 3, 23
  00da814  b 0xda860
  00da818  rlwinm 3, 23, 0, 20, 23
  00da81c  cmpw 3, 28
  00da820  bf 2, 0xda83c
  00da824  clrlwi 3, 23, 24
  00da828  lis 4, 0
  00da82c  rlwimi 3, 23, 28, 20, 23
  00da830  ori 23, 4, 61440
  00da834  or 23, 3, 23
  00da838  b 0xda860
  00da83c  rlwinm 3, 23, 0, 16, 19
  00da840  cmpw 3, 27
  00da844  bf 2, 0xda854
  00da848  li 3, 15
  00da84c  rlwimi 23, 3, 12, 0, 19
  00da850  b 0xda860
  00da854  ori 3, 22, 0
  00da858  bl 0x5cd098
  00da85c  nop
  00da860  lis 3, 0
  00da864  ori 3, 3, 65535
  00da868  cmpw 23, 3
  00da86c  bf 2, 0xda878
  00da870  li 3, 1
  00da874  stb 3, 33(24)
  00da878  addic 26, 26, 2
  00da87c  sth 23, 28(24)
  00da880  cmpw 26, 25
  00da884  bf 2, 0xda7b0
  00da888  lwz 3, 12(31)
  00da88c  lhz 5, 4(31)
  00da890  lhz 6, 6(31)
  00da894  li 4, 0
  00da898  extsh 5, 5
  00da89c  extsh 6, 6
  00da8a0  sldi 5, 5, 1
  00da8a4  sldi 25, 6, 1
  00da8a8  addc 26, 3, 5
  00da8ac  sth 4, 8(31)
  00da8b0  sth 4, 10(31)
  00da8b4  clrldi 26, 26, 32
  00da8b8  addc 25, 26, 25
  00da8bc  cmpw 26, 25
  00da8c0  bt 2, 0xda9a4
  00da8c4  lis 22, 101
  00da8c8  addic 22, 22, 8792
  00da8cc  lhz 4, 0(26)
  00da8d0  lis 3, 165
  00da8d4  extsh 4, 4
  00da8d8  sldi 5, 4, 7
  00da8dc  sldi 4, 4, 4
  00da8e0  lwz 3, 20240(3)
  00da8e4  subc 4, 5, 4
  00da8e8  addc 24, 3, 4
  00da8ec  clrldi 24, 24, 32
  00da8f0  lhz 23, 106(24)
  00da8f4  clrlwi 3, 23, 28
  00da8f8  cmpw 3, 30
  00da8fc  bf 2, 0xda914
  00da900  lis 3, 0
  00da904  ori 3, 3, 61440
  00da908  rlwimi 3, 23, 28, 20, 31
  00da90c  ori 23, 3, 0
  00da910  b 0xda97c
  00da914  rlwinm 4, 23, 0, 24, 27
  00da918  cmpw 4, 29
  00da91c  bf 2, 0xda934
  00da920  lis 4, 0
  00da924  rlwimi 3, 23, 28, 20, 27
  00da928  ori 23, 4, 61440
  00da92c  or 23, 3, 23
  00da930  b 0xda97c
  00da934  rlwinm 3, 23, 0, 20, 23
  00da938  cmpw 3, 28
  00da93c  bf 2, 0xda958
  00da940  clrlwi 3, 23, 24
  00da944  lis 4, 0
  00da948  rlwimi 3, 23, 28, 20, 23
  00da94c  ori 23, 4, 61440
  00da950  or 23, 3, 23
  00da954  b 0xda97c
  00da958  rlwinm 3, 23, 0, 16, 19
  00da95c  cmpw 3, 27
  00da960  bf 2, 0xda970
  00da964  li 3, 15
  00da968  rlwimi 23, 3, 12, 0, 19
  00da96c  b 0xda97c
  00da970  ori 3, 22, 0
  00da974  bl 0x5cd098
  00da978  nop
  00da97c  lis 3, 0
  00da980  ori 3, 3, 65535
  00da984  cmpw 23, 3
  00da988  bf 2, 0xda994
  00da98c  li 3, 1
  00da990  stb 3, 93(24)
  00da994  addic 26, 26, 2
  00da998  sth 23, 106(24)
  00da99c  cmpw 26, 25
  00da9a0  bf 2, 0xda8cc
  00da9a4  li 3, 0
  00da9a8  sth 3, 4(31)
  00da9ac  sth 3, 6(31)
  00da9b0  ld 0, 208(1)
  00da9b4  mtlr 0
  00da9b8  ld 22, 112(1)
  00da9bc  ld 23, 120(1)
  00da9c0  ld 24, 128(1)
  00da9c4  ld 25, 136(1)
  00da9c8  ld 26, 144(1)
  00da9cc  ld 27, 152(1)
  00da9d0  ld 28, 160(1)
  00da9d4  ld 29, 168(1)
  00da9d8  ld 30, 176(1)
  00da9dc  ld 31, 184(1)
  00da9e0  addi 1, 1, 192
  00da9e4  blr

DeletePointLight:   # 0xda9e8, 0x74 bytes
  00da9e8  stdu 1, -128(1)
  00da9ec  mflr 0
  00da9f0  std 0, 144(1)
  00da9f4  std 31, 120(1)
  00da9f8  ori 31, 3, 0
  00da9fc  bl 0xda5f8
  00daa00  lis 3, 162
  00daa04  sldi 5, 31, 5
  00daa08  addic 3, 3, -8448
  00daa0c  li 4, 32
  00daa10  addc 3, 3, 5
  00daa14  clrldi 3, 3, 32
  00daa18  bl 0x500250
  00daa1c  nop
  00daa20  sldi 3, 31, 4
  00daa24  lis 4, 162
  00daa28  addc 5, 3, 3
  00daa2c  addic 6, 4, -7936
  00daa30  addc 3, 3, 5
  00daa34  li 4, 48
  00daa38  addc 3, 6, 3
  00daa3c  clrldi 3, 3, 32
  00daa40  bl 0x500250
  00daa44  nop
  00daa48  ld 0, 144(1)
  00daa4c  mtlr 0
  00daa50  ld 31, 120(1)
  00daa54  addi 1, 1, 128
  00daa58  blr

CreatePointLight:   # 0xdaa60, 0x4f8 bytes
  00daa60  stdu 1, -208(1)
  00daa64  lis 4, 162
  00daa68  sldi 5, 3, 5
  00daa6c  addic 4, 4, -8448
  00daa70  sldi 6, 3, 4
  00daa74  addc 4, 4, 5
  00daa78  lis 7, 162
  00daa7c  addc 8, 6, 6
  00daa80  clrldi 9, 4, 32
  00daa84  addic 7, 7, -7936
  00daa88  addc 4, 6, 8
  00daa8c  lis 5, 14
  00daa90  addc 4, 7, 4
  00daa94  lfs 2, 16(9)
  00daa98  addi 10, 5, -21924
  00daa9c  clrldi 4, 4, 32
  00daaa0  lfs 3, 20(9)
  00daaa4  lwz 6, 16(9)
  00daaa8  lfs 4, 24(9)
  00daaac  lwz 7, 12(4)
  00daab0  lwz 8, 20(9)
  00daab4  lwz 11, 24(9)
  00daab8  ori 5, 7, 0
  00daabc  lfs 1, 28(9)
  00daac0  stw 6, 112(1)
  00daac4  stw 8, 116(1)
  00daac8  addic 6, 5, 1024
  00daacc  stw 11, 120(1)
  00daad0  lfs 5, 0(10)
  00daad4  cmplw 5, 6
  00daad8  std 31, 200(1)
  00daadc  std 30, 192(1)
  00daae0  std 29, 184(1)
  00daae4  std 28, 176(1)
  00daae8  std 27, 168(1)
  00daaec  std 26, 160(1)
  00daaf0  std 25, 152(1)
  00daaf4  std 24, 144(1)
  00daaf8  std 23, 136(1)
  00daafc  fadds 1, 1, 5
  00dab00  bf 0, 0xdac54
  00dab04  lis 9, 230
  00dab08  subc 8, 5, 7
  00dab0c  lis 10, 230
  00dab10  srawi 11, 8, 1
  00dab14  li 8, 0
  00dab18  lwz 9, -31756(9)
  00dab1c  sth 11, 0(4)
  00dab20  lwz 11, -31752(10)
  00dab24  cmpw 9, 11
  00dab28  bt 2, 0xdac44
  00dab2c  lis 11, 0
  00dab30  lis 5, 0
  00dab34  lis 29, 0
  00dab38  ori 11, 11, 65520
  00dab3c  lis 28, 0
  00dab40  lis 31, 0
  00dab44  lis 26, 0
  00dab48  ori 25, 7, 0
  00dab4c  slwi 30, 3, 4
  00dab50  ori 7, 5, 65535
  00dab54  ori 29, 29, 65280
  00dab58  or 12, 3, 11
  00dab5c  ori 28, 28, 61695
  00dab60  ori 31, 31, 65295
  00dab64  slwi 27, 3, 8
  00dab68  ori 26, 26, 61440
  00dab6c  lfs 5, 68(9)
  00dab70  lfs 6, 64(9)
  00dab74  fsubs 5, 3, 5
  00dab78  fsubs 6, 2, 6
  00dab7c  lfs 7, 72(9)
  00dab80  fsubs 7, 4, 7
  00dab84  ori 24, 25, 0
  00dab88  ori 5, 24, 0
  00dab8c  fmuls 5, 5, 5
  00dab90  fmadds 5, 6, 6, 5
  00dab94  lfs 6, 76(9)
  00dab98  fadds 6, 1, 6
  00dab9c  fmadds 5, 7, 7, 5
  00daba0  fsqrts 5, 5
  00daba4  fcmpu 0, 5, 6
  00daba8  cror 6, 1, 2
  00dabac  bt 6, 0xdac30
  00dabb0  sth 8, 0(25)
  00dabb4  lhz 5, 106(9)
  00dabb8  addic 25, 25, 2
  00dabbc  cmpw 5, 7
  00dabc0  bf 2, 0xdabcc
  00dabc4  sth 12, 106(9)
  00dabc8  b 0xdac24
  00dabcc  rlwinm 23, 5, 0, 16, 27
  00dabd0  cmpw 23, 11
  00dabd4  bf 2, 0xdabe8
  00dabd8  and 5, 5, 31
  00dabdc  or 5, 5, 30
  00dabe0  sth 5, 106(9)
  00dabe4  b 0xdac24
  00dabe8  rlwinm 23, 5, 0, 16, 23
  00dabec  cmpw 23, 29
  00dabf0  bf 2, 0xdac04
  00dabf4  and 5, 5, 28
  00dabf8  or 5, 5, 27
  00dabfc  sth 5, 106(9)
  00dac00  b 0xdac24
  00dac04  rlwinm 23, 5, 0, 16, 19
  00dac08  cmpw 23, 26
  00dac0c  bf 2, 0xdac20
  00dac10  clrlwi 5, 5, 20
  00dac14  rlwimi 5, 3, 12, 0, 19
  00dac18  sth 5, 106(9)
  00dac1c  b 0xdac24
  00dac20  ori 25, 24, 0
  00dac24  ori 5, 25, 0
  00dac28  cmplw 5, 6
  00dac2c  bf 0, 0xdac44
  00dac30  addic 9, 9, 112
  00dac34  lwz 24, -31752(10)
  00dac38  addic 8, 8, 1
  00dac3c  cmpw 9, 24
  00dac40  bf 2, 0xdab6c
  00dac44  lwz 7, 12(4)
  00dac48  subc 8, 5, 7
  00dac4c  srawi 8, 8, 1
  00dac50  sth 8, 2(4)
  00dac54  cmplw 5, 6
  00dac58  ori 8, 7, 0
  00dac5c  bf 0, 0xdadc0
  00dac60  subc 7, 5, 7
  00dac64  lis 8, 147
  00dac68  srawi 10, 7, 1
  00dac6c  lis 9, 147
  00dac70  li 7, 0
  00dac74  lwz 8, -11200(8)
  00dac78  sth 10, 8(4)
  00dac7c  lwz 10, -11196(9)
  00dac80  cmpwi 10, 0
  00dac84  bf 1, 0xdada8
  00dac88  lis 11, 0
  00dac8c  lis 31, 0
  00dac90  lis 10, 0
  00dac94  lis 29, 0
  00dac98  ori 11, 11, 65520
  00dac9c  lis 28, 0
  00daca0  lis 26, 0
  00daca4  ori 31, 31, 65295
  00daca8  ori 10, 10, 65535
  00dacac  or 12, 3, 11
  00dacb0  slwi 30, 3, 4
  00dacb4  ori 26, 26, 61440
  00dacb8  ori 29, 29, 65280
  00dacbc  ori 28, 28, 61695
  00dacc0  slwi 27, 3, 8
  00dacc4  clrldi 25, 5, 32
  00dacc8  lfs 2, 116(1)
  00daccc  lfs 3, 4(8)
  00dacd0  lfs 4, 112(1)
  00dacd4  fsubs 2, 2, 3
  00dacd8  lfs 3, 0(8)
  00dacdc  fsubs 3, 4, 3
  00dace0  lfs 4, 120(1)
  00dace4  lfs 5, 8(8)
  00dace8  fsubs 4, 4, 5
  00dacec  fmuls 2, 2, 2
  00dacf0  ori 24, 25, 0
  00dacf4  fmadds 2, 3, 3, 2
  00dacf8  lfs 3, 12(8)
  00dacfc  fadds 3, 1, 3
  00dad00  fmadds 2, 4, 4, 2
  00dad04  fsqrts 2, 2
  00dad08  fcmpu 0, 2, 3
  00dad0c  cror 6, 1, 2
  00dad10  bt 6, 0xdad94
  00dad14  sth 7, 0(5)
  00dad18  lhz 5, 28(8)
  00dad1c  addic 25, 25, 2
  00dad20  cmpw 5, 10
  00dad24  bf 2, 0xdad30
  00dad28  sth 12, 28(8)
  00dad2c  b 0xdad88
  00dad30  rlwinm 23, 5, 0, 16, 27
  00dad34  cmpw 23, 11
  00dad38  bf 2, 0xdad4c
  00dad3c  and 5, 5, 31
  00dad40  or 5, 5, 30
  00dad44  sth 5, 28(8)
  00dad48  b 0xdad88
  00dad4c  rlwinm 23, 5, 0, 16, 23
  00dad50  cmpw 23, 29
  00dad54  bf 2, 0xdad68
  00dad58  and 5, 5, 28
  00dad5c  or 5, 5, 27
  00dad60  sth 5, 28(8)
  00dad64  b 0xdad88
  00dad68  rlwinm 23, 5, 0, 16, 19
  00dad6c  cmpw 23, 26
  00dad70  bf 2, 0xdad84
  00dad74  clrlwi 5, 5, 20
  00dad78  rlwimi 5, 3, 12, 0, 19
  00dad7c  sth 5, 28(8)
  00dad80  b 0xdad88
  00dad84  ori 25, 24, 0
  00dad88  ori 5, 25, 0
  00dad8c  cmplw 5, 6
  00dad90  bf 0, 0xdada8
  00dad94  addic 7, 7, 1
  00dad98  lwz 24, -11196(9)
  00dad9c  addic 8, 8, 48
  00dada0  cmpw 24, 7
  00dada4  bt 1, 0xdacc8
  00dada8  lwz 8, 12(4)
  00dadac  lhz 7, 8(4)
  00dadb0  subc 9, 5, 8
  00dadb4  srawi 9, 9, 1
  00dadb8  subc 7, 9, 7
  00dadbc  sth 7, 10(4)
  00dadc0  cmplw 5, 6
  00dadc4  bf 0, 0xdaf2c
  00dadc8  lis 7, 165
  00dadcc  subc 8, 5, 8
  00dadd0  lis 9, 165
  00dadd4  srawi 8, 8, 1
  00dadd8  lwz 10, 20240(7)
  00daddc  li 7, 0
  00dade0  sth 8, 4(4)
  00dade4  ori 8, 10, 0
  00dade8  lwz 10, 20244(9)
  00dadec  cmpw 8, 10
  00dadf0  bt 2, 0xdaf14
  00dadf4  lis 11, 0
  00dadf8  lis 10, 0
  00dadfc  lis 29, 0
  00dae00  ori 11, 11, 65520
  00dae04  lis 28, 0
  00dae08  lis 31, 0
  00dae0c  lis 26, 0
  00dae10  slwi 30, 3, 4
  00dae14  ori 10, 10, 65535
  00dae18  ori 29, 29, 65280
  00dae1c  or 12, 3, 11
  00dae20  ori 31, 31, 65295
  00dae24  ori 28, 28, 61695
  00dae28  slwi 27, 3, 8
  00dae2c  ori 26, 26, 61440
  00dae30  clrldi 25, 5, 32
  00dae34  lfs 2, 116(1)
  00dae38  lfs 3, 68(8)
  00dae3c  lfs 4, 112(1)
  00dae40  fsubs 2, 2, 3
  00dae44  lfs 3, 64(8)
  00dae48  fsubs 3, 4, 3
  00dae4c  lfs 4, 120(1)
  00dae50  lfs 5, 72(8)
  00dae54  fsubs 4, 4, 5
  00dae58  fmuls 2, 2, 2
  00dae5c  ori 24, 25, 0
  00dae60  fmadds 2, 3, 3, 2
  00dae64  lfs 3, 76(8)
  00dae68  fadds 3, 1, 3
  00dae6c  fmadds 2, 4, 4, 2
  00dae70  fsqrts 2, 2
  00dae74  fcmpu 0, 2, 3
  00dae78  cror 6, 1, 2
  00dae7c  bt 6, 0xdaf00
  00dae80  sth 7, 0(5)
  00dae84  addic 25, 25, 2
  00dae88  lhz 5, 106(8)
  00dae8c  cmpw 5, 10
  00dae90  bf 2, 0xdae9c
  00dae94  sth 12, 106(8)
  00dae98  b 0xdaef4
  00dae9c  rlwinm 23, 5, 0, 16, 27
  00daea0  cmpw 23, 11
  00daea4  bf 2, 0xdaeb8
  00daea8  and 5, 5, 31
  00daeac  or 5, 5, 30
  00daeb0  sth 5, 106(8)
  00daeb4  b 0xdaef4
  00daeb8  rlwinm 23, 5, 0, 16, 23
  00daebc  cmpw 23, 29
  00daec0  bf 2, 0xdaed4
  00daec4  and 5, 5, 28
  00daec8  or 5, 5, 27
  00daecc  sth 5, 106(8)
  00daed0  b 0xdaef4
  00daed4  rlwinm 23, 5, 0, 16, 19
  00daed8  cmpw 23, 26
  00daedc  bf 2, 0xdaef0
  00daee0  clrlwi 5, 5, 20
  00daee4  rlwimi 5, 3, 12, 0, 19
  00daee8  sth 5, 106(8)
  00daeec  b 0xdaef4
  00daef0  ori 25, 24, 0
  00daef4  ori 5, 25, 0
  00daef8  cmplw 5, 6
  00daefc  bf 0, 0xdaf14
  00daf00  addic 8, 8, 112
  00daf04  lwz 24, 20244(9)
  00daf08  addic 7, 7, 1
  00daf0c  cmpw 8, 24
  00daf10  bf 2, 0xdae34
  00daf14  lwz 3, 12(4)
  00daf18  lhz 6, 4(4)
  00daf1c  subc 3, 5, 3
  00daf20  srawi 3, 3, 1
  00daf24  subc 3, 3, 6
  00daf28  sth 3, 6(4)
  00daf2c  ld 23, 136(1)
  00daf30  ld 24, 144(1)
  00daf34  ld 25, 152(1)
  00daf38  ld 26, 160(1)
  00daf3c  ld 27, 168(1)
  00daf40  ld 28, 176(1)
  00daf44  ld 29, 184(1)
  00daf48  ld 30, 192(1)
  00daf4c  ld 31, 200(1)
  00daf50  addi 1, 1, 208
  00daf54  blr

RefreshPointLight:   # 0xdaf58, 0x34 bytes
  00daf58  stdu 1, -128(1)
  00daf5c  mflr 0
  00daf60  std 0, 144(1)
  00daf64  std 31, 120(1)
  00daf68  ori 31, 3, 0
  00daf6c  bl 0xda5f8
  00daf70  ori 3, 31, 0
  00daf74  bl 0xdaa60
  00daf78  ld 0, 144(1)
  00daf7c  mtlr 0
  00daf80  ld 31, 120(1)
  00daf84  addi 1, 1, 128
  00daf88  blr

UpdatePointLights:   # 0xdafb8, 0x228 bytes
  00dafb8  stdu 1, -160(1)
  00dafbc  mflr 0
  00dafc0  std 0, 176(1)
  00dafc4  stfd 31, 152(1)
  00dafc8  lis 4, 162
  00dafcc  lis 3, 14
  00dafd0  std 27, 112(1)
  00dafd4  lis 5, -16743
  00dafd8  lis 6, 16204
  00dafdc  std 29, 128(1)
  00dafe0  addic 27, 4, -9472
  00dafe4  addi 29, 3, -20596
  00dafe8  ori 5, 5, 39322
  00dafec  lis 3, 149
  00daff0  ori 4, 6, 52429
  00daff4  addic 3, 3, 5056
  00daff8  stw 5, 844(27)
  00daffc  stw 4, 832(27)
  00db000  stw 4, 836(27)
  00db004  stw 4, 840(27)
  00db008  lfs 1, 344(3)
  00db00c  std 31, 144(1)
  00db010  std 30, 136(1)
  00db014  std 28, 120(1)
  00db018  lfs 2, 0(29)
  00db01c  bl 0x502578
  00db020  nop
  00db024  lfs 2, 4(29)
  00db028  lfs 3, 8(29)
  00db02c  fadds 2, 1, 2
  00db030  fsubs 5, 3, 1
  00db034  lfs 4, 12(29)
  00db038  lis 3, -16640
  00db03c  li 28, 0
  00db040  lis 30, 162
  00db044  lis 31, 162
  00db048  fsubs 3, 3, 2
  00db04c  fsub 7, 1, 5
  00db050  fsubs 6, 4, 2
  00db054  fsubs 4, 4, 1
  00db058  addic 30, 30, -8448
  00db05c  addic 31, 31, -7936
  00db060  fsub 8, 2, 3
  00db064  fsel 1, 7, 5, 1
  00db068  lfs 5, 16(29)
  00db06c  fsel 2, 8, 3, 2
  00db070  fsub 3, 4, 1
  00db074  fsub 8, 6, 2
  00db078  fsel 1, 3, 4, 1
  00db07c  lfs 3, 20(29)
  00db080  lfs 4, 24(29)
  00db084  lfs 9, 28(29)
  00db088  fsel 2, 8, 6, 2
  00db08c  fmuls 6, 1, 1
  00db090  fmuls 7, 2, 2
  00db094  fmuls 8, 6, 1
  00db098  fmuls 10, 7, 2
  00db09c  fmuls 11, 6, 8
  00db0a0  fmadds 1, 8, 5, 1
  00db0a4  lfs 8, 32(29)
  00db0a8  stw 3, 856(27)
  00db0ac  stw 28, 860(27)
  00db0b0  fmuls 12, 7, 10
  00db0b4  fmadds 2, 10, 5, 2
  00db0b8  fmuls 5, 6, 11
  00db0bc  fmadds 1, 11, 3, 1
  00db0c0  fmuls 10, 7, 12
  00db0c4  fmadds 2, 12, 3, 2
  00db0c8  fmuls 3, 6, 5
  00db0cc  fmadds 1, 5, 4, 1
  00db0d0  fmuls 5, 7, 10
  00db0d4  fmadds 2, 10, 4, 2
  00db0d8  fmadds 1, 3, 9, 1
  00db0dc  fmadds 2, 5, 9, 2
  00db0e0  fmuls 1, 1, 8
  00db0e4  fmuls 2, 2, 8
  00db0e8  stfs 1, 852(27)
  00db0ec  stfs 2, 848(27)
  00db0f0  lfs 31, 36(29)
  00db0f4  sldi 3, 28, 4
  00db0f8  slwi 5, 28, 5
  00db0fc  addc 4, 3, 3
  00db100  addc 3, 3, 4
  00db104  addc 4, 5, 30
  00db108  addc 29, 3, 31
  00db10c  clrldi 3, 4, 32
  00db110  clrldi 29, 29, 32
  00db114  lwz 4, 16(29)
  00db118  cmpwi 4, 0
  00db11c  cmpwi 1, 4, 2
  00db120  cmpwi 6, 4, 1
  00db124  bt 2, 0xdb1a8
  00db128  lfs 2, 20(3)
  00db12c  lfs 1, 36(29)
  00db130  lfs 3, 16(3)
  00db134  fsubs 4, 2, 1
  00db138  lfs 1, 32(29)
  00db13c  fsubs 5, 3, 1
  00db140  lfs 1, 24(3)
  00db144  lfs 6, 40(29)
  00db148  fsubs 6, 1, 6
  00db14c  fmuls 4, 4, 4
  00db150  fmadds 4, 5, 5, 4
  00db154  fmadds 4, 6, 6, 4
  00db158  fsqrts 4, 4
  00db15c  fcmpu 0, 4, 31
  00db160  cror 2, 0, 2
  00db164  bt 2, 0xdb1a8
  00db168  stfs 3, 32(29)
  00db16c  stfs 2, 36(29)
  00db170  stfs 1, 40(29)
  00db174  lfs 1, 28(3)
  00db178  stfs 1, 44(29)
  00db17c  bf 26, 0xdb194
  00db180  ori 3, 28, 0
  00db184  bl 0xdaa60
  00db188  li 3, 2
  00db18c  stw 3, 16(29)
  00db190  b 0xdb1a8
  00db194  bf 6, 0xdb1a8
  00db198  ori 3, 28, 0
  00db19c  bl 0xda5f8
  00db1a0  ori 3, 28, 0
  00db1a4  bl 0xdaa60
  00db1a8  addic 28, 28, 1
  00db1ac  extsw 28, 28
  00db1b0  cmpwi 28, 8
  00db1b4  bt 0, 0xdb0f4
  00db1b8  ld 0, 176(1)
  00db1bc  mtlr 0
  00db1c0  lfd 31, 152(1)
  00db1c4  ld 27, 112(1)
  00db1c8  ld 28, 120(1)
  00db1cc  ld 29, 128(1)
  00db1d0  ld 30, 136(1)
  00db1d4  ld 31, 144(1)
  00db1d8  addi 1, 1, 160
  00db1dc  blr
