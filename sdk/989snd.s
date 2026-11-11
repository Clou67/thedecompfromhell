# sdk/989snd.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

snd_Printf:   # 0x61948c, 0x68 bytes
  061948c  stdu 1, -144(1)
  0619490  mflr 0
  0619494  std 30, 128(1)
  0619498  lwz 30, -29456(2)
  061949c  std 0, 160(1)
  06194a0  std 4, 200(1)
  06194a4  std 5, 208(1)
  06194a8  addi 0, 1, 200
  06194ac  lwz 11, -32748(30)
  06194b0  mr 4, 0
  06194b4  lwz 11, 0(11)
  06194b8  std 6, 216(1)
  06194bc  cmpwi 7, 11, 0
  06194c0  std 7, 224(1)
  06194c4  std 8, 232(1)
  06194c8  std 9, 240(1)
  06194cc  std 10, 248(1)
  06194d0  bf 30, 0x6194e0
  06194d4  clrldi 3, 3, 32
  06194d8  stw 0, 112(1)
  06194dc  bl 0x619370
  06194e0  ld 0, 160(1)
  06194e4  ld 30, 128(1)
  06194e8  addi 1, 1, 144
  06194ec  mtlr 0
  06194f0  blr

FUN_006194f4:   # 0x6194f4, 0xb4 bytes
  06194f4  stdu 1, -128(1)
  06194f8  mflr 0
  06194fc  std 30, 112(1)
  0619500  lwz 30, -29456(2)
  0619504  mr 12, 4
  0619508  std 0, 144(1)
  061950c  mr 11, 5
  0619510  mr 8, 7
  0619514  extsw 3, 3
  0619518  lwz 9, -32756(30)
  061951c  clrldi 4, 4, 32
  0619520  clrldi 5, 5, 32
  0619524  clrldi 7, 7, 32
  0619528  lwz 0, 0(9)
  061952c  cmpwi 7, 0, 0
  0619530  clrldi 9, 0, 32
  0619534  mr 0, 6
  0619538  clrldi 6, 6, 32
  061953c  bt 30, 0x61956c
  0619540  lwz 0, 0(9)
  0619544  std 2, 40(1)
  0619548  mtctr 0
  061954c  lwz 2, 4(9)
  0619550  bctrl
  0619554  ld 2, 40(1)
  0619558  ld 0, 144(1)
  061955c  ld 30, 112(1)
  0619560  addi 1, 1, 128
  0619564  mtlr 0
  0619568  blr
  061956c  lwz 9, -32748(30)
  0619570  clrldi 7, 0, 32
  0619574  mr 4, 3
  0619578  clrldi 5, 12, 32
  061957c  clrldi 6, 11, 32
  0619580  clrldi 8, 8, 32
  0619584  lwz 0, 0(9)
  0619588  cmpwi 7, 0, 0
  061958c  bf 30, 0x619558
  0619590  ld 0, 144(1)
  0619594  lwz 3, -32744(30)
  0619598  ld 30, 112(1)
  061959c  addi 1, 1, 128
  06195a0  mtlr 0
  06195a4  b 0x61948c

FUN_006195a8:   # 0x6195a8, 0xc8 bytes
  06195a8  stdu 1, -160(1)
  06195ac  mflr 0
  06195b0  std 28, 128(1)
  06195b4  clrldi 28, 3, 32
  06195b8  std 31, 152(1)
  06195bc  mr 31, 3
  06195c0  mr 3, 28
  06195c4  std 27, 120(1)
  06195c8  std 29, 136(1)
  06195cc  std 0, 176(1)
  06195d0  mr 29, 4
  06195d4  mr 27, 5
  06195d8  bl 0x5c8510
  06195dc  nop
  06195e0  cmpwi 7, 31, 0
  06195e4  addi 0, 3, 1
  06195e8  cmplw 6, 0, 29
  06195ec  bt 30, 0x619618
  06195f0  sub 11, 29, 3
  06195f4  add 9, 31, 29
  06195f8  add 0, 31, 3
  06195fc  addi 9, 9, -1
  0619600  addi 5, 11, -1
  0619604  clrldi 9, 9, 32
  0619608  clrldi 3, 0, 32
  061960c  clrldi 4, 27, 32
  0619610  clrldi 5, 5, 32
  0619614  bt 24, 0x61963c
  0619618  ld 0, 176(1)
  061961c  mr 3, 28
  0619620  ld 27, 120(1)
  0619624  ld 28, 128(1)
  0619628  mtlr 0
  061962c  ld 29, 136(1)
  0619630  ld 31, 152(1)
  0619634  addi 1, 1, 160
  0619638  blr
  061963c  li 0, 0
  0619640  stb 0, 0(9)
  0619644  bl 0x5cccec
  0619648  nop
  061964c  ld 0, 176(1)
  0619650  ld 27, 120(1)
  0619654  mr 3, 28
  0619658  ld 29, 136(1)
  061965c  ld 28, 128(1)
  0619660  mtlr 0
  0619664  ld 31, 152(1)
  0619668  addi 1, 1, 160
  061966c  blr

FUN_00619670:   # 0x619670, 0x84 bytes
  0619670  cmpwi 7, 3, 0
  0619674  mflr 0
  0619678  stdu 1, -128(1)
  061967c  std 31, 112(1)
  0619680  std 0, 144(1)
  0619684  cmpwi 6, 4, 0
  0619688  mr 0, 5
  061968c  clrldi 31, 3, 32
  0619690  bt 30, 0x6196b0
  0619694  add 9, 3, 4
  0619698  addi 5, 4, -1
  061969c  addi 9, 9, -1
  06196a0  clrldi 4, 0, 32
  06196a4  clrldi 9, 9, 32
  06196a8  clrldi 5, 5, 32
  06196ac  bf 26, 0x6196c8
  06196b0  ld 0, 144(1)
  06196b4  mr 3, 31
  06196b8  ld 31, 112(1)
  06196bc  addi 1, 1, 128
  06196c0  mtlr 0
  06196c4  blr
  06196c8  li 0, 0
  06196cc  mr 3, 31
  06196d0  stb 0, 0(9)
  06196d4  bl 0x5cccec
  06196d8  nop
  06196dc  ld 0, 144(1)
  06196e0  mr 3, 31
  06196e4  mtlr 0
  06196e8  ld 31, 112(1)
  06196ec  addi 1, 1, 128
  06196f0  blr

FUN_006196f4:   # 0x6196f4, 0x24 bytes
  06196f4  stdu 1, -128(1)
  06196f8  mflr 0
  06196fc  std 0, 144(1)
  0619700  bl 0x5cd098
  0619704  nop
  0619708  ld 0, 144(1)
  061970c  addi 1, 1, 128
  0619710  mtlr 0
  0619714  blr

FUN_00619718:   # 0x619718, 0x7c bytes
  0619718  stdu 1, -144(1)
  061971c  mflr 0
  0619720  std 31, 136(1)
  0619724  std 0, 160(1)
  0619728  lbz 0, 0(3)
  061972c  li 31, 0
  0619730  std 29, 120(1)
  0619734  clrlwi 0, 0, 27
  0619738  cmpwi 7, 0, 4
  061973c  bt 30, 0x619784
  0619740  lwz 29, 556(3)
  0619744  cmpwi 7, 29, 0
  0619748  bt 30, 0x619768
  061974c  clrldi 29, 29, 32
  0619750  mr 3, 29
  0619754  bl 0x619718
  0619758  lwz 29, 560(29)
  061975c  add 31, 31, 3
  0619760  cmpwi 7, 29, 0
  0619764  bf 30, 0x61974c
  0619768  ld 0, 160(1)
  061976c  clrldi 3, 31, 32
  0619770  ld 29, 120(1)
  0619774  ld 31, 136(1)
  0619778  mtlr 0
  061977c  addi 1, 1, 144
  0619780  blr
  0619784  lbz 0, 581(3)
  0619788  neg 0, 0
  061978c  rldicl 31, 0, 1, 63
  0619790  b 0x619740

FUN_00619794:   # 0x619794, 0xb4 bytes
  0619794  stdu 1, -128(1)
  0619798  mflr 0
  061979c  mr 9, 3
  06197a0  std 0, 144(1)
  06197a4  lwz 3, 0(3)
  06197a8  std 31, 112(1)
  06197ac  rldicl 0, 3, 40, 59
  06197b0  cmpwi 7, 0, 4
  06197b4  bt 30, 0x619828
  06197b8  lwz 3, 556(9)
  06197bc  cmpwi 7, 3, 0
  06197c0  bf 30, 0x6197d4
  06197c4  b 0x61980c
  06197c8  lwz 3, 560(31)
  06197cc  cmpwi 7, 3, 0
  06197d0  bt 30, 0x61980c
  06197d4  clrldi 31, 3, 32
  06197d8  extsh 4, 4
  06197dc  mr 3, 31
  06197e0  bl 0x619794
  06197e4  rldicl 0, 3, 40, 59
  06197e8  mr 4, 3
  06197ec  cmpwi 7, 0, 4
  06197f0  bf 30, 0x6197c8
  06197f4  ld 0, 144(1)
  06197f8  clrldi 3, 3, 32
  06197fc  ld 31, 112(1)
  0619800  addi 1, 1, 128
  0619804  mtlr 0
  0619808  blr
  061980c  ld 0, 144(1)
  0619810  extsh 3, 4
  0619814  ld 31, 112(1)
  0619818  addi 1, 1, 128
  061981c  clrldi 3, 3, 32
  0619820  mtlr 0
  0619824  blr
  0619828  lbz 0, 581(9)
  061982c  cmpwi 7, 0, 0
  0619830  bt 30, 0x6197b8
  0619834  extsh 0, 4
  0619838  addi 4, 4, -1
  061983c  cmpwi 7, 0, 0
  0619840  bf 30, 0x6197b8
  0619844  b 0x6197f4

FUN_00619848:   # 0x619848, 0x18 bytes
  0619848  std 30, -16(1)
  061984c  lwz 30, -29452(2)
  0619850  lwz 9, -32768(30)
  0619854  ld 30, -16(1)
  0619858  lwz 3, 0(9)
  061985c  blr

FUN_00619860:   # 0x619860, 0x70 bytes
  0619860  std 30, -16(1)
  0619864  lwz 30, -29452(2)
  0619868  lwz 9, -32764(30)
  061986c  lwz 11, 0(9)
  0619870  addi 11, 11, 31
  0619874  srawi 11, 11, 5
  0619878  addze 11, 11
  061987c  cmpwi 7, 11, 0
  0619880  bf 29, 0x6198c0
  0619884  lwz 0, 20(3)
  0619888  clrldi 11, 11, 32
  061988c  addi 9, 3, 24
  0619890  cmpwi 7, 0, 0
  0619894  mtctr 11
  0619898  bf 30, 0x6198b0
  061989c  bdz 0x6198c0
  06198a0  lwz 0, 0(9)
  06198a4  addi 9, 9, 4
  06198a8  cmpwi 7, 0, 0
  06198ac  bt 30, 0x61989c
  06198b0  li 3, 1
  06198b4  ld 30, -16(1)
  06198b8  extsw 3, 3
  06198bc  blr
  06198c0  li 3, 0
  06198c4  ld 30, -16(1)
  06198c8  extsw 3, 3
  06198cc  blr

FUN_006198d0:   # 0x6198d0, 0x44 bytes
  06198d0  lwz 0, 556(3)
  06198d4  cmpwi 7, 0, 0
  06198d8  bt 30, 0x6198fc
  06198dc  clrldi 9, 0, 32
  06198e0  lbz 0, 0(9)
  06198e4  clrlwi 0, 0, 27
  06198e8  cmpwi 7, 0, 4
  06198ec  bt 30, 0x619908
  06198f0  lwz 0, 560(9)
  06198f4  cmpwi 7, 0, 0
  06198f8  bf 30, 0x6198dc
  06198fc  li 3, 0
  0619900  extsw 3, 3
  0619904  blr
  0619908  li 3, 1
  061990c  extsw 3, 3
  0619910  blr

FUN_00619914:   # 0x619914, 0x4c bytes
  0619914  std 30, -16(1)
  0619918  lwz 30, -29452(2)
  061991c  li 0, 8
  0619920  mr 10, 3
  0619924  mtctr 0
  0619928  lwz 11, -32760(30)
  061992c  clrldi 9, 11, 32
  0619930  addi 11, 11, 4
  0619934  lwz 9, 0(9)
  0619938  cmpwi 7, 9, 0
  061993c  clrldi 3, 9, 32
  0619940  bt 30, 0x619950
  0619944  lwz 0, 0(3)
  0619948  cmpw 7, 0, 10
  061994c  bt 30, 0x619958
  0619950  bdnz 0x61992c
  0619954  li 3, 0
  0619958  ld 30, -16(1)
  061995c  blr

FUN_00619960:   # 0x619960, 0x30 bytes
  0619960  cmpwi 7, 3, 7
  0619964  slwi 0, 3, 2
  0619968  std 30, -16(1)
  061996c  li 9, 0
  0619970  lwz 30, -29452(2)
  0619974  extsw 0, 0
  0619978  bt 29, 0x619984
  061997c  lwz 9, -32760(30)
  0619980  lwzx 9, 9, 0
  0619984  clrldi 3, 9, 32
  0619988  ld 30, -16(1)
  061998c  blr

FUN_00619990:   # 0x619990, 0x24 bytes
  0619990  lwz 0, 304(3)
  0619994  stw 0, 0(4)
  0619998  lwz 9, 300(3)
  061999c  stw 9, 4(4)
  06199a0  lwz 0, 308(3)
  06199a4  stw 0, 8(4)
  06199a8  lwz 9, 312(3)
  06199ac  stw 9, 12(4)
  06199b0  blr

FUN_006199b4:   # 0x6199b4, 0x24 bytes
  06199b4  lwz 0, 328(3)
  06199b8  stw 0, 0(4)
  06199bc  lwz 9, 324(3)
  06199c0  stw 9, 4(4)
  06199c4  lwz 0, 332(3)
  06199c8  stw 0, 8(4)
  06199cc  lwz 9, 336(3)
  06199d0  stw 9, 12(4)
  06199d4  blr

FUN_006199d8:   # 0x6199d8, 0x24 bytes
  06199d8  lfs 0, 344(3)
  06199dc  stfs 0, 0(4)
  06199e0  lfs 13, 340(3)
  06199e4  stfs 13, 4(4)
  06199e8  lfs 0, 348(3)
  06199ec  stfs 0, 8(4)
  06199f0  lfs 13, 352(3)
  06199f4  stfs 13, 12(4)
  06199f8  blr

FUN_006199fc:   # 0x6199fc, 0x94 bytes
  06199fc  stdu 1, -144(1)
  0619a00  mflr 0
  0619a04  std 29, 120(1)
  0619a08  mr 29, 4
  0619a0c  std 28, 112(1)
  0619a10  mr 28, 3
  0619a14  li 3, 32
  0619a18  std 0, 160(1)
  0619a1c  bl 0x61db74
  0619a20  nop
  0619a24  stfs 1, 0(29)
  0619a28  lfs 0, 284(28)
  0619a2c  stfs 0, 4(29)
  0619a30  lfs 13, 288(28)
  0619a34  stfs 13, 8(29)
  0619a38  lfs 0, 292(28)
  0619a3c  stfs 0, 12(29)
  0619a40  lfs 13, 296(28)
  0619a44  stfs 13, 16(29)
  0619a48  lbz 3, 16(28)
  0619a4c  extsb 3, 3
  0619a50  bl 0x61db74
  0619a54  nop
  0619a58  stfs 1, 20(29)
  0619a5c  lbz 3, 16(28)
  0619a60  extsb 3, 3
  0619a64  bl 0x61dab4
  0619a68  nop
  0619a6c  ld 0, 160(1)
  0619a70  stfs 1, 24(29)
  0619a74  lfs 0, 464(28)
  0619a78  mtlr 0
  0619a7c  stfs 0, 28(29)
  0619a80  ld 28, 112(1)
  0619a84  ld 29, 120(1)
  0619a88  addi 1, 1, 144
  0619a8c  blr

FUN_00619a90:   # 0x619a90, 0xd8 bytes
  0619a90  cmpdi 3, 0
  0619a94  mflr 0
  0619a98  stdu 1, -144(1)
  0619a9c  std 29, 120(1)
  0619aa0  std 30, 128(1)
  0619aa4  std 31, 136(1)
  0619aa8  std 0, 160(1)
  0619aac  lwz 30, -29452(2)
  0619ab0  mr 31, 3
  0619ab4  mr 29, 4
  0619ab8  bt 2, 0x619ac8
  0619abc  lwz 0, 0(3)
  0619ac0  cmpwi 7, 0, 0
  0619ac4  bt 28, 0x619b34
  0619ac8  lwz 3, -32756(30)
  0619acc  li 5, 2285
  0619ad0  lwz 4, -32752(30)
  0619ad4  bl 0x61948c
  0619ad8  nop
  0619adc  lwz 9, -32748(30)
  0619ae0  lbz 0, 0(9)
  0619ae4  cmpwi 7, 0, 0
  0619ae8  bf 30, 0x619b18
  0619aec  lwz 9, -32744(30)
  0619af0  lbz 0, 0(9)
  0619af4  twnei 0, 0
  0619af8  lwz 0, 88(31)
  0619afc  cmpwi 7, 0, 0
  0619b00  bt 30, 0x619b48
  0619b04  clrldi 9, 0, 32
  0619b08  lwz 0, 12(9)
  0619b0c  cmpwi 7, 0, 0
  0619b10  bf 30, 0x619b04
  0619b14  stw 29, 12(9)
  0619b18  ld 0, 160(1)
  0619b1c  ld 29, 120(1)
  0619b20  ld 30, 128(1)
  0619b24  mtlr 0
  0619b28  ld 31, 136(1)
  0619b2c  addi 1, 1, 144
  0619b30  blr
  0619b34  cmpwi 7, 4, 0
  0619b38  bt 30, 0x619ac8
  0619b3c  lwz 0, 88(31)
  0619b40  cmpwi 7, 0, 0
  0619b44  bf 30, 0x619b04
  0619b48  ld 0, 160(1)
  0619b4c  stw 29, 88(31)
  0619b50  ld 30, 128(1)
  0619b54  mtlr 0
  0619b58  ld 29, 120(1)
  0619b5c  ld 31, 136(1)
  0619b60  addi 1, 1, 144
  0619b64  blr

FUN_00619b68:   # 0x619b68, 0xe4 bytes
  0619b68  cmpdi 3, 0
  0619b6c  mflr 0
  0619b70  stdu 1, -144(1)
  0619b74  std 29, 120(1)
  0619b78  std 30, 128(1)
  0619b7c  std 31, 136(1)
  0619b80  std 0, 160(1)
  0619b84  lwz 30, -29452(2)
  0619b88  mr 29, 3
  0619b8c  mr 31, 4
  0619b90  bt- 2, 0x619bf0
  0619b94  cmpwi 7, 4, 0
  0619b98  bt 30, 0x619bf0
  0619b9c  lwz 3, 88(29)
  0619ba0  cmpwi 7, 3, 0
  0619ba4  clrldi 11, 3, 32
  0619ba8  bf 30, 0x619bc0
  0619bac  b 0x619bd0
  0619bb0  lwz 3, 12(11)
  0619bb4  cmpwi 7, 3, 0
  0619bb8  clrldi 11, 3, 32
  0619bbc  bt 30, 0x619c28
  0619bc0  lwz 0, 0(11)
  0619bc4  and 9, 31, 0
  0619bc8  cmpwi 9, 0
  0619bcc  bt 2, 0x619bb0
  0619bd0  ld 0, 160(1)
  0619bd4  mr 3, 11
  0619bd8  ld 29, 120(1)
  0619bdc  ld 30, 128(1)
  0619be0  mtlr 0
  0619be4  ld 31, 136(1)
  0619be8  addi 1, 1, 144
  0619bec  blr
  0619bf0  lwz 3, -32756(30)
  0619bf4  li 5, 2166
  0619bf8  lwz 4, -32752(30)
  0619bfc  bl 0x61948c
  0619c00  nop
  0619c04  lwz 9, -32748(30)
  0619c08  li 11, 0
  0619c0c  lbz 0, 0(9)
  0619c10  cmpwi 7, 0, 0
  0619c14  bf 30, 0x619bd0
  0619c18  lwz 9, -32744(30)
  0619c1c  lbz 0, 0(9)
  0619c20  twnei 0, 0
  0619c24  b 0x619b9c
  0619c28  ld 0, 160(1)
  0619c2c  li 11, 0
  0619c30  ld 29, 120(1)
  0619c34  mr 3, 11
  0619c38  ld 30, 128(1)
  0619c3c  ld 31, 136(1)
  0619c40  mtlr 0
  0619c44  addi 1, 1, 144
  0619c48  blr

FUN_00619c4c:   # 0x619c4c, 0x8c bytes
  0619c4c  cmpdi 3, 0
  0619c50  mflr 0
  0619c54  stdu 1, -128(1)
  0619c58  std 30, 112(1)
  0619c5c  std 31, 120(1)
  0619c60  std 0, 144(1)
  0619c64  lwz 30, -29452(2)
  0619c68  li 5, 2078
  0619c6c  mr 31, 3
  0619c70  bt 2, 0x619ca8
  0619c74  lwz 3, 12(31)
  0619c78  cmpwi 7, 3, 0
  0619c7c  clrldi 3, 3, 32
  0619c80  bt 30, 0x619c88
  0619c84  bl 0x619c4c
  0619c88  li 0, 0
  0619c8c  stw 0, 0(31)
  0619c90  ld 0, 144(1)
  0619c94  ld 30, 112(1)
  0619c98  ld 31, 120(1)
  0619c9c  mtlr 0
  0619ca0  addi 1, 1, 128
  0619ca4  blr
  0619ca8  lwz 3, -32756(30)
  0619cac  lwz 4, -32752(30)
  0619cb0  bl 0x61948c
  0619cb4  nop
  0619cb8  lwz 9, -32748(30)
  0619cbc  lbz 0, 0(9)
  0619cc0  cmpwi 7, 0, 0
  0619cc4  bf 30, 0x619c90
  0619cc8  lwz 9, -32744(30)
  0619ccc  lbz 0, 0(9)
  0619cd0  twnei 0, 0
  0619cd4  b 0x619c74

FUN_00619cd8:   # 0x619cd8, 0x144 bytes
  0619cd8  cmpwi 7, 4, 0
  0619cdc  mflr 0
  0619ce0  stdu 1, -144(1)
  0619ce4  std 28, 112(1)
  0619ce8  std 29, 120(1)
  0619cec  std 30, 128(1)
  0619cf0  std 31, 136(1)
  0619cf4  std 0, 160(1)
  0619cf8  lwz 30, -29452(2)
  0619cfc  mr 31, 3
  0619d00  mr 29, 4
  0619d04  mr 28, 3
  0619d08  bt 30, 0x619d18
  0619d0c  lwz 0, 0(4)
  0619d10  cmpwi 7, 0, 0
  0619d14  bt 28, 0x619e10
  0619d18  lwz 3, -32756(30)
  0619d1c  li 5, 2030
  0619d20  lwz 4, -32752(30)
  0619d24  bl 0x61948c
  0619d28  nop
  0619d2c  lwz 9, -32748(30)
  0619d30  lbz 0, 0(9)
  0619d34  cmpwi 7, 0, 0
  0619d38  bf 30, 0x619dd8
  0619d3c  lwz 9, -32744(30)
  0619d40  lbz 0, 0(9)
  0619d44  twnei 0, 0
  0619d48  lwz 3, 12(31)
  0619d4c  cmpwi 7, 3, 0
  0619d50  bt 30, 0x619d6c
  0619d54  clrldi 3, 3, 32
  0619d58  clrldi 4, 29, 32
  0619d5c  bl 0x619cd8
  0619d60  cmpwi 7, 3, 1
  0619d64  li 3, 1
  0619d68  bt 30, 0x619ddc
  0619d6c  lwz 0, 0(31)
  0619d70  clrldi 3, 28, 32
  0619d74  cmpwi 7, 0, 0
  0619d78  bt 28, 0x619dd8
  0619d7c  lwz 0, 8(31)
  0619d80  cmpwi 7, 0, 1
  0619d84  bt 30, 0x619e00
  0619d88  lwz 9, 4(31)
  0619d8c  cmpwi 7, 9, 0
  0619d90  bf 30, 0x619dd8
  0619d94  lwz 9, 16(31)
  0619d98  clrldi 4, 29, 32
  0619d9c  lwz 0, 0(9)
  0619da0  std 2, 40(1)
  0619da4  mtctr 0
  0619da8  lwz 2, 4(9)
  0619dac  bctrl
  0619db0  ld 2, 40(1)
  0619db4  ld 0, 160(1)
  0619db8  extsw 3, 3
  0619dbc  ld 28, 112(1)
  0619dc0  mtlr 0
  0619dc4  ld 29, 120(1)
  0619dc8  ld 30, 128(1)
  0619dcc  ld 31, 136(1)
  0619dd0  addi 1, 1, 144
  0619dd4  blr
  0619dd8  li 3, 0
  0619ddc  ld 0, 160(1)
  0619de0  extsw 3, 3
  0619de4  ld 28, 112(1)
  0619de8  ld 29, 120(1)
  0619dec  mtlr 0
  0619df0  ld 30, 128(1)
  0619df4  ld 31, 136(1)
  0619df8  addi 1, 1, 144
  0619dfc  blr
  0619e00  lwz 9, 4(31)
  0619e04  addi 9, 9, -1
  0619e08  stw 9, 4(31)
  0619e0c  b 0x619d8c
  0619e10  cmpwi 7, 3, 0
  0619e14  bf 30, 0x619d48
  0619e18  b 0x619d18

FUN_00619e1c:   # 0x619e1c, 0x144 bytes
  0619e1c  cmpwi 7, 3, 0
  0619e20  mflr 0
  0619e24  stdu 1, -160(1)
  0619e28  std 27, 120(1)
  0619e2c  std 28, 128(1)
  0619e30  std 29, 136(1)
  0619e34  std 30, 144(1)
  0619e38  std 31, 152(1)
  0619e3c  std 0, 176(1)
  0619e40  lwz 30, -29452(2)
  0619e44  mr 31, 3
  0619e48  mr 29, 4
  0619e4c  mr 27, 5
  0619e50  mr 28, 6
  0619e54  bt 30, 0x619e60
  0619e58  cmplwi 7, 5, 7
  0619e5c  bf 29, 0x619f44
  0619e60  lwz 3, -32756(30)
  0619e64  li 5, 253
  0619e68  lwz 4, -32752(30)
  0619e6c  bl 0x61948c
  0619e70  nop
  0619e74  lwz 9, -32748(30)
  0619e78  lbz 0, 0(9)
  0619e7c  cmpwi 7, 0, 0
  0619e80  bf 30, 0x619f20
  0619e84  lwz 9, -32744(30)
  0619e88  cmpwi 6, 29, 0
  0619e8c  lbz 0, 0(9)
  0619e90  twnei 0, 0
  0619e94  bf 25, 0x619f20
  0619e98  slwi 0, 27, 24
  0619e9c  lwz 7, -32764(30)
  0619ea0  li 4, 0
  0619ea4  ori 5, 0, 1
  0619ea8  li 6, 0
  0619eac  clrldi 9, 31, 32
  0619eb0  slwi 0, 4, 16
  0619eb4  or 0, 0, 5
  0619eb8  stb 6, 16(9)
  0619ebc  stw 0, 0(9)
  0619ec0  stw 6, 4(9)
  0619ec4  lwz 0, 0(7)
  0619ec8  stw 6, 84(9)
  0619ecc  cmpwi 7, 0, 0
  0619ed0  stw 6, 88(9)
  0619ed4  bf 29, 0x619f0c
  0619ed8  addi 10, 31, 20
  0619edc  li 8, 0
  0619ee0  li 0, 0
  0619ee4  clrldi 9, 10, 32
  0619ee8  addi 8, 8, 1
  0619eec  addi 10, 10, 4
  0619ef0  stw 0, 0(9)
  0619ef4  lwz 11, 0(7)
  0619ef8  addi 11, 11, 31
  0619efc  srawi 11, 11, 5
  0619f00  addze 11, 11
  0619f04  cmpw 7, 11, 8
  0619f08  bt 29, 0x619ee4
  0619f0c  addi 4, 4, 1
  0619f10  cmpw 7, 29, 4
  0619f14  bt 30, 0x619f20
  0619f18  add 31, 31, 28
  0619f1c  b 0x619eac
  0619f20  ld 0, 176(1)
  0619f24  ld 27, 120(1)
  0619f28  ld 28, 128(1)
  0619f2c  mtlr 0
  0619f30  ld 29, 136(1)
  0619f34  ld 30, 144(1)
  0619f38  ld 31, 152(1)
  0619f3c  addi 1, 1, 160
  0619f40  blr
  0619f44  cmpwi 6, 4, 0
  0619f48  bt 24, 0x619e60
  0619f4c  cmpwi 7, 4, 256
  0619f50  bt 29, 0x619e60
  0619f54  cmpwi 7, 6, 563
  0619f58  bt 29, 0x619e94
  0619f5c  b 0x619e60

FUN_00619f60:   # 0x619f60, 0x70 bytes
  0619f60  stdu 1, -128(1)
  0619f64  mflr 0
  0619f68  std 30, 112(1)
  0619f6c  lwz 30, -29452(2)
  0619f70  li 4, 256
  0619f74  li 5, 5
  0619f78  li 6, 588
  0619f7c  std 0, 144(1)
  0619f80  lwz 3, -32736(30)
  0619f84  bl 0x619e1c
  0619f88  li 9, 64
  0619f8c  lwz 11, -32740(30)
  0619f90  li 0, 0
  0619f94  mtctr 9
  0619f98  clrldi 9, 11, 32
  0619f9c  addi 11, 11, 36
  0619fa0  stw 0, 12(9)
  0619fa4  stw 0, 0(9)
  0619fa8  bdnz+ 0x619f98
  0619fac  lwz 9, -32768(30)
  0619fb0  lwz 11, -32732(30)
  0619fb4  ld 30, 112(1)
  0619fb8  stw 0, 0(9)
  0619fbc  stw 0, 0(11)
  0619fc0  ld 0, 144(1)
  0619fc4  addi 1, 1, 128
  0619fc8  mtlr 0
  0619fcc  blr

FUN_00619fd0:   # 0x619fd0, 0x120 bytes
  0619fd0  cmpwi 7, 3, 0
  0619fd4  mflr 0
  0619fd8  stdu 1, -144(1)
  0619fdc  std 29, 120(1)
  0619fe0  std 30, 128(1)
  0619fe4  std 31, 136(1)
  0619fe8  std 0, 160(1)
  0619fec  lwz 30, -29452(2)
  0619ff0  li 5, 2400
  0619ff4  mr 31, 3
  0619ff8  mr 29, 3
  0619ffc  bt 30, 0x61a06c
  061a000  lwz 0, 4(3)
  061a004  cmplwi 7, 0, 7
  061a008  bt 29, 0x61a06c
  061a00c  bl 0x6272e8
  061a010  nop
  061a014  lwz 3, 4(31)
  061a018  lwz 11, -32760(30)
  061a01c  slwi 0, 3, 2
  061a020  clrldi 6, 3, 32
  061a024  extsw 9, 0
  061a028  li 5, 2408
  061a02c  lwzx 0, 11, 9
  061a030  cmpw 7, 0, 29
  061a034  bt 30, 0x61a0c4
  061a038  lwz 4, -32752(30)
  061a03c  lwz 3, -32728(30)
  061a040  bl 0x61948c
  061a044  nop
  061a048  bl 0x6271f4
  061a04c  nop
  061a050  ld 0, 160(1)
  061a054  ld 29, 120(1)
  061a058  ld 30, 128(1)
  061a05c  mtlr 0
  061a060  ld 31, 136(1)
  061a064  addi 1, 1, 144
  061a068  blr
  061a06c  lwz 3, -32756(30)
  061a070  lwz 4, -32752(30)
  061a074  bl 0x61948c
  061a078  nop
  061a07c  lwz 9, -32748(30)
  061a080  lbz 0, 0(9)
  061a084  cmpwi 7, 0, 0
  061a088  bf 30, 0x61a050
  061a08c  lwz 9, -32744(30)
  061a090  lbz 0, 0(9)
  061a094  twnei 0, 0
  061a098  bl 0x6272e8
  061a09c  nop
  061a0a0  lwz 3, 4(31)
  061a0a4  lwz 11, -32760(30)
  061a0a8  li 5, 2408
  061a0ac  slwi 0, 3, 2
  061a0b0  clrldi 6, 3, 32
  061a0b4  extsw 9, 0
  061a0b8  lwzx 0, 11, 9
  061a0bc  cmpw 7, 0, 29
  061a0c0  bf 30, 0x61a038
  061a0c4  li 0, 0
  061a0c8  stwx 0, 11, 9
  061a0cc  bl 0x6271f4
  061a0d0  nop
  061a0d4  ld 0, 160(1)
  061a0d8  ld 29, 120(1)
  061a0dc  ld 30, 128(1)
  061a0e0  mtlr 0
  061a0e4  ld 31, 136(1)
  061a0e8  addi 1, 1, 144
  061a0ec  blr

FUN_0061a0f0:   # 0x61a0f0, 0x138 bytes
  061a0f0  cmpwi 7, 3, 0
  061a0f4  mflr 0
  061a0f8  stdu 1, -144(1)
  061a0fc  std 29, 120(1)
  061a100  std 30, 128(1)
  061a104  std 31, 136(1)
  061a108  std 0, 160(1)
  061a10c  lwz 30, -29452(2)
  061a110  li 5, 2365
  061a114  mr 31, 3
  061a118  mr 29, 3
  061a11c  bt 30, 0x61a18c
  061a120  lwz 0, 4(3)
  061a124  cmplwi 7, 0, 7
  061a128  bt 29, 0x61a18c
  061a12c  bl 0x6272e8
  061a130  nop
  061a134  lwz 9, 4(31)
  061a138  lwz 10, -32760(30)
  061a13c  slwi 0, 9, 2
  061a140  clrldi 6, 9, 32
  061a144  extsw 11, 0
  061a148  li 5, 2373
  061a14c  lwzx 0, 10, 11
  061a150  cmpwi 7, 0, 0
  061a154  bt 30, 0x61a1e4
  061a158  lwz 4, -32752(30)
  061a15c  lwz 3, -32724(30)
  061a160  bl 0x61948c
  061a164  nop
  061a168  bl 0x6271f4
  061a16c  nop
  061a170  ld 0, 160(1)
  061a174  ld 29, 120(1)
  061a178  ld 30, 128(1)
  061a17c  mtlr 0
  061a180  ld 31, 136(1)
  061a184  addi 1, 1, 144
  061a188  blr
  061a18c  lwz 3, -32756(30)
  061a190  lwz 4, -32752(30)
  061a194  bl 0x61948c
  061a198  nop
  061a19c  lwz 9, -32748(30)
  061a1a0  lbz 0, 0(9)
  061a1a4  cmpwi 7, 0, 0
  061a1a8  bf 30, 0x61a170
  061a1ac  lwz 9, -32744(30)
  061a1b0  lbz 0, 0(9)
  061a1b4  twnei 0, 0
  061a1b8  bl 0x6272e8
  061a1bc  nop
  061a1c0  lwz 9, 4(31)
  061a1c4  lwz 10, -32760(30)
  061a1c8  li 5, 2373
  061a1cc  slwi 0, 9, 2
  061a1d0  clrldi 6, 9, 32
  061a1d4  extsw 11, 0
  061a1d8  lwzx 0, 10, 11
  061a1dc  cmpwi 7, 0, 0
  061a1e0  bf 30, 0x61a158
  061a1e4  lwz 4, 8(31)
  061a1e8  clrldi 5, 9, 32
  061a1ec  lwz 6, 12(31)
  061a1f0  lwz 3, 16(31)
  061a1f4  extsw 4, 4
  061a1f8  extsw 6, 6
  061a1fc  stwx 29, 10, 11
  061a200  bl 0x619e1c
  061a204  bl 0x6271f4
  061a208  nop
  061a20c  ld 0, 160(1)
  061a210  ld 29, 120(1)
  061a214  ld 30, 128(1)
  061a218  mtlr 0
  061a21c  ld 31, 136(1)
  061a220  addi 1, 1, 144
  061a224  blr

FUN_0061a228:   # 0x61a228, 0x124 bytes
  061a228  cmpdi 3, 0
  061a22c  mflr 0
  061a230  stdu 1, -144(1)
  061a234  std 28, 112(1)
  061a238  std 29, 120(1)
  061a23c  std 30, 128(1)
  061a240  std 31, 136(1)
  061a244  std 0, 160(1)
  061a248  lwz 30, -29452(2)
  061a24c  mr 28, 3
  061a250  mr 29, 4
  061a254  mr 31, 4
  061a258  bt 2, 0x61a268
  061a25c  lwz 0, 0(3)
  061a260  cmpwi 7, 0, 0
  061a264  bt 28, 0x61a318
  061a268  lwz 3, -32756(30)
  061a26c  li 5, 2318
  061a270  lwz 4, -32752(30)
  061a274  bl 0x61948c
  061a278  nop
  061a27c  lwz 9, -32748(30)
  061a280  lbz 0, 0(9)
  061a284  cmpwi 7, 0, 0
  061a288  bf 30, 0x61a2d0
  061a28c  lwz 9, -32744(30)
  061a290  cmpwi 7, 31, 0
  061a294  lbz 0, 0(9)
  061a298  twnei 0, 0
  061a29c  bt 30, 0x61a2d0
  061a2a0  bl 0x6272e8
  061a2a4  nop
  061a2a8  lwz 9, 88(28)
  061a2ac  lwz 0, 0(29)
  061a2b0  cmpw 7, 31, 9
  061a2b4  rlwinm 0, 0, 0, 0, 30
  061a2b8  stw 0, 0(29)
  061a2bc  bt 30, 0x61a340
  061a2c0  cmpwi 7, 9, 0
  061a2c4  bf 30, 0x61a2f4
  061a2c8  bl 0x6271f4
  061a2cc  nop
  061a2d0  ld 0, 160(1)
  061a2d4  ld 28, 112(1)
  061a2d8  ld 29, 120(1)
  061a2dc  mtlr 0
  061a2e0  ld 30, 128(1)
  061a2e4  ld 31, 136(1)
  061a2e8  addi 1, 1, 144
  061a2ec  blr
  061a2f0  bt- 26, 0x61a2c8
  061a2f4  clrldi 11, 9, 32
  061a2f8  lwz 0, 12(11)
  061a2fc  cmpw 7, 31, 0
  061a300  cmpwi 6, 0, 0
  061a304  mr 9, 0
  061a308  bf 30, 0x61a2f0
  061a30c  lwz 0, 12(29)
  061a310  stw 0, 12(11)
  061a314  b 0x61a2c8
  061a318  cmpwi 7, 4, 0
  061a31c  bt 30, 0x61a268
  061a320  bl 0x6272e8
  061a324  nop
  061a328  lwz 9, 88(28)
  061a32c  lwz 0, 0(29)
  061a330  cmpw 7, 31, 9
  061a334  rlwinm 0, 0, 0, 0, 30
  061a338  stw 0, 0(29)
  061a33c  bf 30, 0x61a2c0
  061a340  lwz 0, 12(29)
  061a344  stw 0, 88(28)
  061a348  b 0x61a2c8

FUN_0061a34c:   # 0x61a34c, 0xcc bytes
  061a34c  cmpwi 7, 3, 0
  061a350  mflr 0
  061a354  stdu 1, -144(1)
  061a358  std 29, 120(1)
  061a35c  std 30, 128(1)
  061a360  std 31, 136(1)
  061a364  std 0, 160(1)
  061a368  lwz 30, -29452(2)
  061a36c  li 5, 2121
  061a370  mr 31, 4
  061a374  clrldi 29, 3, 32
  061a378  bt 30, 0x61a38c
  061a37c  lwz 0, 0(3)
  061a380  cmpwi 6, 4, 0
  061a384  cmpwi 7, 0, 0
  061a388  bt 28, 0x61a410
  061a38c  lwz 3, -32756(30)
  061a390  lwz 4, -32752(30)
  061a394  bl 0x61948c
  061a398  nop
  061a39c  lwz 9, -32748(30)
  061a3a0  lbz 0, 0(9)
  061a3a4  cmpwi 7, 0, 0
  061a3a8  bf 30, 0x61a3f4
  061a3ac  lwz 9, -32744(30)
  061a3b0  lbz 0, 0(9)
  061a3b4  twnei 0, 0
  061a3b8  extsw 4, 31
  061a3bc  mr 3, 29
  061a3c0  bl 0x619b68
  061a3c4  mr 0, 3
  061a3c8  mr 3, 29
  061a3cc  cmpwi 7, 0, 0
  061a3d0  clrldi 4, 0, 32
  061a3d4  bt 30, 0x61a3f4
  061a3d8  ld 0, 160(1)
  061a3dc  ld 29, 120(1)
  061a3e0  ld 30, 128(1)
  061a3e4  mtlr 0
  061a3e8  ld 31, 136(1)
  061a3ec  addi 1, 1, 144
  061a3f0  b 0x61a228
  061a3f4  ld 0, 160(1)
  061a3f8  ld 29, 120(1)
  061a3fc  ld 30, 128(1)
  061a400  mtlr 0
  061a404  ld 31, 136(1)
  061a408  addi 1, 1, 144
  061a40c  blr
  061a410  bf 26, 0x61a3b8
  061a414  b 0x61a38c

FUN_0061a418:   # 0x61a418, 0xe0 bytes
  061a418  stdu 1, -144(1)
  061a41c  mflr 0
  061a420  std 28, 112(1)
  061a424  mr 28, 4
  061a428  std 29, 120(1)
  061a42c  std 31, 136(1)
  061a430  std 0, 160(1)
  061a434  mr 31, 3
  061a438  mr 29, 5
  061a43c  bl 0x6272e8
  061a440  nop
  061a444  cmpwi 7, 28, 0
  061a448  bf 29, 0x61a490
  061a44c  clrldi 10, 31, 32
  061a450  clrldi 28, 28, 32
  061a454  add 11, 29, 31
  061a458  mtctr 28
  061a45c  lwz 9, 0(10)
  061a460  clrlwi 0, 9, 31
  061a464  cmpwi 7, 0, 0
  061a468  bf 30, 0x61a480
  061a46c  b 0x61a4c0
  061a470  lwz 9, 0(9)
  061a474  clrlwi 0, 9, 31
  061a478  cmpwi 7, 0, 0
  061a47c  bt 30, 0x61a4bc
  061a480  clrldi 9, 11, 32
  061a484  mr 31, 11
  061a488  add 11, 11, 29
  061a48c  bdnz 0x61a470
  061a490  bl 0x6271f4
  061a494  nop
  061a498  li 31, 0
  061a49c  ld 0, 160(1)
  061a4a0  clrldi 3, 31, 32
  061a4a4  ld 28, 112(1)
  061a4a8  ld 29, 120(1)
  061a4ac  mtlr 0
  061a4b0  ld 31, 136(1)
  061a4b4  addi 1, 1, 144
  061a4b8  blr
  061a4bc  clrldi 10, 31, 32
  061a4c0  li 0, 0
  061a4c4  ori 9, 9, 1
  061a4c8  stw 0, 12(10)
  061a4cc  stw 9, 0(10)
  061a4d0  bl 0x6271f4
  061a4d4  nop
  061a4d8  ld 0, 160(1)
  061a4dc  ld 28, 112(1)
  061a4e0  clrldi 3, 31, 32
  061a4e4  ld 29, 120(1)
  061a4e8  ld 31, 136(1)
  061a4ec  mtlr 0
  061a4f0  addi 1, 1, 144
  061a4f4  blr

FUN_0061a4f8:   # 0x61a4f8, 0xc0 bytes
  061a4f8  stdu 1, -128(1)
  061a4fc  mflr 0
  061a500  std 30, 112(1)
  061a504  lwz 30, -29452(2)
  061a508  std 0, 144(1)
  061a50c  std 31, 120(1)
  061a510  bl 0x6272e8
  061a514  nop
  061a518  li 0, 64
  061a51c  lwz 11, -32740(30)
  061a520  li 3, 0
  061a524  lwz 8, -32740(30)
  061a528  mtctr 0
  061a52c  mr 7, 11
  061a530  b 0x61a53c
  061a534  addi 3, 3, 36
  061a538  bdz- 0x61a590
  061a53c  clrldi 9, 11, 32
  061a540  addi 11, 11, 36
  061a544  lwz 0, 0(9)
  061a548  clrlwi 10, 0, 31
  061a54c  cmpwi 7, 10, 0
  061a550  bf 30, 0x61a534
  061a554  extsw 0, 3
  061a558  li 9, 1
  061a55c  add 11, 0, 8
  061a560  add 31, 3, 7
  061a564  stwx 9, 8, 0
  061a568  stw 10, 12(11)
  061a56c  bl 0x6271f4
  061a570  nop
  061a574  ld 0, 144(1)
  061a578  ld 30, 112(1)
  061a57c  clrldi 3, 31, 32
  061a580  mtlr 0
  061a584  ld 31, 120(1)
  061a588  addi 1, 1, 128
  061a58c  blr
  061a590  bl 0x6271f4
  061a594  nop
  061a598  li 31, 0
  061a59c  ld 0, 144(1)
  061a5a0  clrldi 3, 31, 32
  061a5a4  ld 30, 112(1)
  061a5a8  ld 31, 120(1)
  061a5ac  mtlr 0
  061a5b0  addi 1, 1, 128
  061a5b4  blr

FUN_0061a5b8:   # 0x61a5b8, 0x128 bytes
  061a5b8  cmpwi 7, 3, 0
  061a5bc  mflr 0
  061a5c0  stdu 1, -144(1)
  061a5c4  std 28, 112(1)
  061a5c8  std 29, 120(1)
  061a5cc  std 30, 128(1)
  061a5d0  std 31, 136(1)
  061a5d4  std 0, 160(1)
  061a5d8  lwz 30, -29452(2)
  061a5dc  mr 28, 3
  061a5e0  mr 29, 4
  061a5e4  bt 30, 0x61a69c
  061a5e8  cmpwi 7, 4, 0
  061a5ec  bt 28, 0x61a69c
  061a5f0  lwz 31, -32764(30)
  061a5f4  lwz 0, 0(31)
  061a5f8  cmpw 7, 4, 0
  061a5fc  bt 29, 0x61a69c
  061a600  bl 0x6272e8
  061a604  nop
  061a608  lwz 0, 0(31)
  061a60c  cmpw 7, 29, 0
  061a610  bf 28, 0x61a6d8
  061a614  sub 0, 0, 29
  061a618  mr 4, 29
  061a61c  clrldi 0, 0, 32
  061a620  clrldi 3, 28, 32
  061a624  li 10, 1
  061a628  mtctr 0
  061a62c  b 0x61a638
  061a630  addi 4, 4, 1
  061a634  bdz 0x61a6d8
  061a638  srawi 0, 4, 5
  061a63c  addze 0, 0
  061a640  slwi 9, 0, 2
  061a644  slwi 0, 0, 5
  061a648  addi 9, 9, 16
  061a64c  sub 0, 4, 0
  061a650  extsw 9, 9
  061a654  slw 0, 10, 0
  061a658  add 9, 3, 9
  061a65c  lwz 11, 4(9)
  061a660  and 9, 0, 11
  061a664  cmpwi 9, 0
  061a668  bt 2, 0x61a630
  061a66c  mr 31, 4
  061a670  bl 0x6271f4
  061a674  nop
  061a678  ld 0, 160(1)
  061a67c  extsw 3, 31
  061a680  ld 28, 112(1)
  061a684  ld 29, 120(1)
  061a688  mtlr 0
  061a68c  ld 30, 128(1)
  061a690  ld 31, 136(1)
  061a694  addi 1, 1, 144
  061a698  blr
  061a69c  lwz 3, -32756(30)
  061a6a0  li 5, 1797
  061a6a4  lwz 4, -32752(30)
  061a6a8  li 31, 0
  061a6ac  bl 0x61948c
  061a6b0  nop
  061a6b4  lwz 9, -32748(30)
  061a6b8  lbz 0, 0(9)
  061a6bc  cmpwi 7, 0, 0
  061a6c0  bf 30, 0x61a678
  061a6c4  lwz 9, -32744(30)
  061a6c8  lbz 0, 0(9)
  061a6cc  twnei 0, 0
  061a6d0  lwz 31, -32764(30)
  061a6d4  b 0x61a600
  061a6d8  li 31, -1
  061a6dc  b 0x61a670

FUN_0061a6e0:   # 0x61a6e0, 0xb0 bytes
  061a6e0  cmpwi 7, 4, 0
  061a6e4  mflr 0
  061a6e8  stdu 1, -160(1)
  061a6ec  std 27, 120(1)
  061a6f0  std 28, 128(1)
  061a6f4  std 29, 136(1)
  061a6f8  std 31, 152(1)
  061a6fc  std 0, 176(1)
  061a700  mr 27, 3
  061a704  bt 30, 0x61a740
  061a708  lwz 29, 556(3)
  061a70c  cmpwi 7, 29, 0
  061a710  bt 30, 0x61a740
  061a714  extsw 28, 4
  061a718  li 31, 0
  061a71c  clrldi 29, 29, 32
  061a720  mr 4, 28
  061a724  mr 3, 29
  061a728  bl 0x61a6e0
  061a72c  lwz 29, 560(29)
  061a730  add 31, 31, 3
  061a734  cmpwi 7, 29, 0
  061a738  bf 30, 0x61a71c
  061a73c  b 0x61a744
  061a740  li 31, 0
  061a744  clrldi 29, 27, 32
  061a748  li 3, 0
  061a74c  b 0x61a754
  061a750  addi 31, 31, 1
  061a754  extsw 4, 3
  061a758  mr 3, 29
  061a75c  bl 0x61a5b8
  061a760  cmpwi 7, 3, 0
  061a764  addi 3, 3, 1
  061a768  bf 28, 0x61a750
  061a76c  ld 0, 176(1)
  061a770  clrldi 3, 31, 32
  061a774  ld 27, 120(1)
  061a778  ld 28, 128(1)
  061a77c  mtlr 0
  061a780  ld 29, 136(1)
  061a784  ld 31, 152(1)
  061a788  addi 1, 1, 160
  061a78c  blr

FUN_0061a790:   # 0x61a790, 0x140 bytes
  061a790  stdu 1, -144(1)
  061a794  mflr 0
  061a798  std 29, 120(1)
  061a79c  mr 29, 3
  061a7a0  std 28, 112(1)
  061a7a4  rldicl 28, 29, 48, 56
  061a7a8  std 30, 128(1)
  061a7ac  cmplwi 7, 28, 255
  061a7b0  lwz 30, -29452(2)
  061a7b4  std 31, 136(1)
  061a7b8  std 0, 160(1)
  061a7bc  bt 29, 0x61a884
  061a7c0  cmpwi 7, 29, 0
  061a7c4  bt 28, 0x61a7f0
  061a7c8  li 31, 0
  061a7cc  ld 0, 160(1)
  061a7d0  ld 28, 112(1)
  061a7d4  mr 3, 31
  061a7d8  ld 29, 120(1)
  061a7dc  ld 30, 128(1)
  061a7e0  mtlr 0
  061a7e4  ld 31, 136(1)
  061a7e8  addi 1, 1, 144
  061a7ec  blr
  061a7f0  rldicl 31, 29, 40, 59
  061a7f4  bl 0x6272e8
  061a7f8  nop
  061a7fc  cmpwi 7, 31, 5
  061a800  bt 30, 0x61a8b8
  061a804  rlwinm 0, 31, 2, 25, 29
  061a808  lwz 9, -32760(30)
  061a80c  lwzx 0, 9, 0
  061a810  cmpwi 7, 0, 0
  061a814  bt 30, 0x61a854
  061a818  clrldi 9, 0, 32
  061a81c  lwz 0, 8(9)
  061a820  cmpw 7, 0, 28
  061a824  bf 29, 0x61a854
  061a828  lwz 0, 12(9)
  061a82c  lwz 9, 16(9)
  061a830  mullw 0, 28, 0
  061a834  add 0, 0, 9
  061a838  cmpwi 7, 0, 0
  061a83c  li 31, 0
  061a840  bt 30, 0x61a858
  061a844  clrldi 31, 0, 32
  061a848  lwz 0, 0(31)
  061a84c  cmpw 7, 0, 29
  061a850  bt 30, 0x61a858
  061a854  li 31, 0
  061a858  bl 0x6271f4
  061a85c  nop
  061a860  ld 0, 160(1)
  061a864  ld 28, 112(1)
  061a868  mr 3, 31
  061a86c  ld 29, 120(1)
  061a870  ld 30, 128(1)
  061a874  mtlr 0
  061a878  ld 31, 136(1)
  061a87c  addi 1, 1, 144
  061a880  blr
  061a884  lwz 3, -32756(30)
  061a888  li 5, 1482
  061a88c  lwz 4, -32752(30)
  061a890  bl 0x61948c
  061a894  nop
  061a898  lwz 9, -32748(30)
  061a89c  lbz 0, 0(9)
  061a8a0  cmpwi 7, 0, 0
  061a8a4  bf 30, 0x61a7c8
  061a8a8  lwz 9, -32744(30)
  061a8ac  lbz 0, 0(9)
  061a8b0  twnei 0, 0
  061a8b4  b 0x61a7c0
  061a8b8  cmpwi 7, 28, 255
  061a8bc  bt 29, 0x61a854
  061a8c0  lwz 9, -32736(30)
  061a8c4  mulli 0, 28, 588
  061a8c8  add 0, 0, 9
  061a8cc  b 0x61a838

FUN_0061a8d0:   # 0x61a8d0, 0x184 bytes
  061a8d0  cmpwi 7, 3, 0
  061a8d4  mflr 0
  061a8d8  stdu 1, -160(1)
  061a8dc  std 26, 112(1)
  061a8e0  std 27, 120(1)
  061a8e4  std 29, 136(1)
  061a8e8  std 30, 144(1)
  061a8ec  std 28, 128(1)
  061a8f0  std 31, 152(1)
  061a8f4  std 0, 176(1)
  061a8f8  lwz 30, -29452(2)
  061a8fc  mr 26, 3
  061a900  mr 29, 4
  061a904  mr 27, 3
  061a908  bt 30, 0x61a914
  061a90c  cmpwi 7, 4, 0
  061a910  bt 28, 0x61a944
  061a914  lwz 3, -32756(30)
  061a918  li 5, 880
  061a91c  lwz 4, -32752(30)
  061a920  bl 0x61948c
  061a924  nop
  061a928  lwz 9, -32748(30)
  061a92c  lbz 0, 0(9)
  061a930  cmpwi 7, 0, 0
  061a934  bf 30, 0x61a9dc
  061a938  lwz 9, -32744(30)
  061a93c  lbz 0, 0(9)
  061a940  twnei 0, 0
  061a944  clrldi 28, 29, 32
  061a948  bl 0x6272e8
  061a94c  nop
  061a950  mr 3, 28
  061a954  bl 0x61a790
  061a958  cmpwi 7, 3, 0
  061a95c  mr 31, 3
  061a960  bt 30, 0x61a9d4
  061a964  cmpw 7, 27, 3
  061a968  bt 30, 0x61aa04
  061a96c  lwz 0, 552(31)
  061a970  cmpwi 7, 0, 0
  061a974  bt 30, 0x61a9c4
  061a978  lwz 29, -32752(30)
  061a97c  mr 6, 28
  061a980  lwz 3, -32716(30)
  061a984  li 5, 905
  061a988  mr 4, 29
  061a98c  bl 0x61948c
  061a990  nop
  061a994  lwz 3, -32756(30)
  061a998  mr 4, 29
  061a99c  li 5, 906
  061a9a0  bl 0x61948c
  061a9a4  nop
  061a9a8  lwz 9, -32748(30)
  061a9ac  lbz 0, 0(9)
  061a9b0  cmpwi 7, 0, 0
  061a9b4  bf 30, 0x61a9dc
  061a9b8  lwz 9, -32744(30)
  061a9bc  lbz 0, 0(9)
  061a9c0  twnei 0, 0
  061a9c4  lwz 0, 556(26)
  061a9c8  stw 27, 552(31)
  061a9cc  stw 31, 556(26)
  061a9d0  stw 0, 560(31)
  061a9d4  bl 0x6271f4
  061a9d8  nop
  061a9dc  ld 0, 176(1)
  061a9e0  ld 26, 112(1)
  061a9e4  ld 27, 120(1)
  061a9e8  mtlr 0
  061a9ec  ld 28, 128(1)
  061a9f0  ld 29, 136(1)
  061a9f4  ld 30, 144(1)
  061a9f8  ld 31, 152(1)
  061a9fc  addi 1, 1, 160
  061aa00  blr
  061aa04  lwz 29, -32752(30)
  061aa08  li 5, 898
  061aa0c  lwz 3, -32720(30)
  061aa10  mr 6, 28
  061aa14  mr 4, 29
  061aa18  bl 0x61948c
  061aa1c  nop
  061aa20  lwz 3, -32756(30)
  061aa24  mr 4, 29
  061aa28  li 5, 899
  061aa2c  bl 0x61948c
  061aa30  nop
  061aa34  lwz 9, -32748(30)
  061aa38  lbz 0, 0(9)
  061aa3c  cmpwi 7, 0, 0
  061aa40  bf 30, 0x61a9dc
  061aa44  lwz 9, -32744(30)
  061aa48  lbz 0, 0(9)
  061aa4c  twnei 0, 0
  061aa50  b 0x61a96c

FUN_0061aa54:   # 0x61aa54, 0x218 bytes
  061aa54  cmpwi 7, 3, 0
  061aa58  mflr 0
  061aa5c  stdu 1, -160(1)
  061aa60  std 28, 128(1)
  061aa64  std 30, 144(1)
  061aa68  std 31, 152(1)
  061aa6c  std 26, 112(1)
  061aa70  std 27, 120(1)
  061aa74  std 29, 136(1)
  061aa78  std 0, 176(1)
  061aa7c  lwz 30, -29452(2)
  061aa80  mr 28, 3
  061aa84  mr 31, 3
  061aa88  bt 30, 0x61abb4
  061aa8c  lwz 0, 0(3)
  061aa90  cmpwi 7, 0, 0
  061aa94  bt 28, 0x61abb4
  061aa98  bl 0x6272e8
  061aa9c  nop
  061aaa0  lwz 27, -32768(30)
  061aaa4  lwz 29, 0(27)
  061aaa8  cmpwi 7, 29, 0
  061aaac  bt 30, 0x61aacc
  061aab0  cmpw 7, 31, 29
  061aab4  li 5, 532
  061aab8  bt 30, 0x61ab88
  061aabc  clrldi 9, 29, 32
  061aac0  lwz 29, 548(9)
  061aac4  cmpwi 7, 29, 0
  061aac8  bf 30, 0x61aab0
  061aacc  lwz 26, -32732(30)
  061aad0  li 11, 0
  061aad4  lwz 0, 0(28)
  061aad8  stw 11, 548(28)
  061aadc  oris 0, 0, 32768
  061aae0  lwz 9, 0(26)
  061aae4  stw 0, 0(28)
  061aae8  cmpwi 7, 9, 0
  061aaec  stw 11, 544(28)
  061aaf0  bt 30, 0x61abe8
  061aaf4  lwz 0, 0(27)
  061aaf8  cmpwi 7, 0, 0
  061aafc  bt 30, 0x61abf4
  061ab00  lwz 11, 0(26)
  061ab04  cmpw 7, 31, 11
  061ab08  bt 30, 0x61ac54
  061ab0c  lwz 0, 4(28)
  061ab10  rlwinm 0, 0, 0, 13, 13
  061ab14  cmpwi 7, 0, 0
  061ab18  bt 30, 0x61aba0
  061ab1c  lwz 0, 0(27)
  061ab20  li 9, 0
  061ab24  mr 11, 0
  061ab28  stw 9, 544(28)
  061ab2c  stw 0, 548(28)
  061ab30  stw 31, 544(11)
  061ab34  stw 31, 0(27)
  061ab38  lbz 0, 16(28)
  061ab3c  lwz 11, -32704(30)
  061ab40  extsb 0, 0
  061ab44  slwi 0, 0, 2
  061ab48  extsw 0, 0
  061ab4c  lwzx 9, 11, 0
  061ab50  addi 9, 9, 1
  061ab54  stwx 9, 11, 0
  061ab58  bl 0x6271f4
  061ab5c  nop
  061ab60  ld 0, 176(1)
  061ab64  ld 26, 112(1)
  061ab68  ld 27, 120(1)
  061ab6c  mtlr 0
  061ab70  ld 28, 128(1)
  061ab74  ld 29, 136(1)
  061ab78  ld 30, 144(1)
  061ab7c  ld 31, 152(1)
  061ab80  addi 1, 1, 160
  061ab84  blr
  061ab88  lwz 3, -32712(30)
  061ab8c  lwz 4, -32752(30)
  061ab90  lwz 6, 0(28)
  061ab94  bl 0x61948c
  061ab98  nop
  061ab9c  b 0x61aabc
  061aba0  clrldi 9, 11, 32
  061aba4  stw 11, 544(28)
  061aba8  stw 31, 548(9)
  061abac  stw 31, 0(26)
  061abb0  b 0x61ab38
  061abb4  lwz 3, -32756(30)
  061abb8  li 5, 518
  061abbc  lwz 4, -32752(30)
  061abc0  bl 0x61948c
  061abc4  nop
  061abc8  lwz 9, -32748(30)
  061abcc  lbz 0, 0(9)
  061abd0  cmpwi 7, 0, 0
  061abd4  bf 30, 0x61ab60
  061abd8  lwz 9, -32744(30)
  061abdc  lbz 0, 0(9)
  061abe0  twnei 0, 0
  061abe4  b 0x61aa98
  061abe8  lwz 0, 0(27)
  061abec  cmpwi 7, 0, 0
  061abf0  bt 30, 0x61ac48
  061abf4  lwz 29, -32752(30)
  061abf8  li 5, 560
  061abfc  lwz 3, -32708(30)
  061ac00  mr 4, 29
  061ac04  bl 0x61948c
  061ac08  nop
  061ac0c  lwz 3, -32756(30)
  061ac10  mr 4, 29
  061ac14  li 5, 561
  061ac18  bl 0x61948c
  061ac1c  nop
  061ac20  lwz 9, -32748(30)
  061ac24  lbz 0, 0(9)
  061ac28  cmpwi 7, 0, 0
  061ac2c  bf 30, 0x61ab60
  061ac30  lwz 9, -32744(30)
  061ac34  lbz 0, 0(9)
  061ac38  twnei 0, 0
  061ac3c  lwz 9, 0(27)
  061ac40  cmpwi 7, 9, 0
  061ac44  bf 30, 0x61ab00
  061ac48  stw 31, 0(27)
  061ac4c  stw 31, 0(26)
  061ac50  b 0x61ab38
  061ac54  lwz 3, -32708(30)
  061ac58  li 5, 589
  061ac5c  lwz 4, -32752(30)
  061ac60  bl 0x61948c
  061ac64  nop
  061ac68  b 0x61ab38

FUN_0061ac6c:   # 0x61ac6c, 0xb8 bytes
  061ac6c  cmpwi 7, 3, 0
  061ac70  mflr 0
  061ac74  stdu 1, -144(1)
  061ac78  std 29, 120(1)
  061ac7c  std 30, 128(1)
  061ac80  std 31, 136(1)
  061ac84  std 0, 160(1)
  061ac88  lwz 30, -29452(2)
  061ac8c  mr 29, 3
  061ac90  mr 31, 3
  061ac94  bt 30, 0x61acf0
  061ac98  lwz 0, 0(3)
  061ac9c  cmpwi 7, 0, 0
  061aca0  bf 28, 0x61acf0
  061aca4  lwz 0, 556(29)
  061aca8  cmpwi 7, 0, 0
  061acac  bt 30, 0x61acc8
  061acb0  clrldi 29, 0, 32
  061acb4  mr 3, 29
  061acb8  bl 0x61ac6c
  061acbc  lwz 0, 560(29)
  061acc0  cmpwi 7, 0, 0
  061acc4  bf 30, 0x61acb0
  061acc8  clrldi 3, 31, 32
  061accc  bl 0x61f0ec
  061acd0  nop
  061acd4  ld 0, 160(1)
  061acd8  ld 29, 120(1)
  061acdc  ld 30, 128(1)
  061ace0  mtlr 0
  061ace4  ld 31, 136(1)
  061ace8  addi 1, 1, 144
  061acec  blr
  061acf0  lwz 3, -32756(30)
  061acf4  li 5, 1435
  061acf8  lwz 4, -32752(30)
  061acfc  bl 0x61948c
  061ad00  nop
  061ad04  lwz 9, -32748(30)
  061ad08  lbz 0, 0(9)
  061ad0c  cmpwi 7, 0, 0
  061ad10  bf 30, 0x61acd4
  061ad14  lwz 9, -32744(30)
  061ad18  lbz 0, 0(9)
  061ad1c  twnei 0, 0
  061ad20  b 0x61aca4

FUN_0061ad24:   # 0x61ad24, 0xb8 bytes
  061ad24  cmpwi 7, 3, 0
  061ad28  mflr 0
  061ad2c  stdu 1, -144(1)
  061ad30  std 29, 120(1)
  061ad34  std 30, 128(1)
  061ad38  std 31, 136(1)
  061ad3c  std 0, 160(1)
  061ad40  lwz 30, -29452(2)
  061ad44  mr 29, 3
  061ad48  mr 31, 3
  061ad4c  bt 30, 0x61ada8
  061ad50  lwz 0, 0(3)
  061ad54  cmpwi 7, 0, 0
  061ad58  bf 28, 0x61ada8
  061ad5c  lwz 0, 556(29)
  061ad60  cmpwi 7, 0, 0
  061ad64  bt 30, 0x61ad80
  061ad68  clrldi 29, 0, 32
  061ad6c  mr 3, 29
  061ad70  bl 0x61ad24
  061ad74  lwz 0, 560(29)
  061ad78  cmpwi 7, 0, 0
  061ad7c  bf 30, 0x61ad68
  061ad80  clrldi 3, 31, 32
  061ad84  bl 0x61f100
  061ad88  nop
  061ad8c  ld 0, 160(1)
  061ad90  ld 29, 120(1)
  061ad94  ld 30, 128(1)
  061ad98  mtlr 0
  061ad9c  ld 31, 136(1)
  061ada0  addi 1, 1, 144
  061ada4  blr
  061ada8  lwz 3, -32756(30)
  061adac  li 5, 1395
  061adb0  lwz 4, -32752(30)
  061adb4  bl 0x61948c
  061adb8  nop
  061adbc  lwz 9, -32748(30)
  061adc0  lbz 0, 0(9)
  061adc4  cmpwi 7, 0, 0
  061adc8  bf 30, 0x61ad8c
  061adcc  lwz 9, -32744(30)
  061add0  lbz 0, 0(9)
  061add4  twnei 0, 0
  061add8  b 0x61ad5c

FUN_0061addc:   # 0x61addc, 0xb4 bytes
  061addc  cmpwi 7, 3, 0
  061ade0  mflr 0
  061ade4  stdu 1, -144(1)
  061ade8  std 29, 120(1)
  061adec  std 30, 128(1)
  061adf0  std 31, 136(1)
  061adf4  std 0, 160(1)
  061adf8  lwz 30, -29452(2)
  061adfc  mr 29, 3
  061ae00  mr 31, 3
  061ae04  bt 30, 0x61ae14
  061ae08  lwz 0, 0(3)
  061ae0c  cmpwi 7, 0, 0
  061ae10  bt 28, 0x61ae44
  061ae14  lwz 3, -32756(30)
  061ae18  li 5, 1355
  061ae1c  lwz 4, -32752(30)
  061ae20  bl 0x61948c
  061ae24  nop
  061ae28  lwz 9, -32748(30)
  061ae2c  lbz 0, 0(9)
  061ae30  cmpwi 7, 0, 0
  061ae34  bf 30, 0x61ae74
  061ae38  lwz 9, -32744(30)
  061ae3c  lbz 0, 0(9)
  061ae40  twnei 0, 0
  061ae44  lwz 0, 556(29)
  061ae48  cmpwi 7, 0, 0
  061ae4c  bt 30, 0x61ae68
  061ae50  clrldi 29, 0, 32
  061ae54  mr 3, 29
  061ae58  bl 0x61addc
  061ae5c  lwz 0, 560(29)
  061ae60  cmpwi 7, 0, 0
  061ae64  bf 30, 0x61ae50
  061ae68  clrldi 3, 31, 32
  061ae6c  bl 0x61f114
  061ae70  nop
  061ae74  ld 0, 160(1)
  061ae78  ld 29, 120(1)
  061ae7c  ld 30, 128(1)
  061ae80  mtlr 0
  061ae84  ld 31, 136(1)
  061ae88  addi 1, 1, 144
  061ae8c  blr

FUN_0061ae90:   # 0x61ae90, 0xb4 bytes
  061ae90  cmpwi 7, 3, 0
  061ae94  mflr 0
  061ae98  stdu 1, -144(1)
  061ae9c  std 29, 120(1)
  061aea0  std 30, 128(1)
  061aea4  std 31, 136(1)
  061aea8  std 0, 160(1)
  061aeac  lwz 30, -29452(2)
  061aeb0  mr 29, 3
  061aeb4  mr 31, 3
  061aeb8  bt 30, 0x61aec8
  061aebc  lwz 0, 0(3)
  061aec0  cmpwi 7, 0, 0
  061aec4  bt 28, 0x61aef8
  061aec8  lwz 3, -32756(30)
  061aecc  li 5, 1230
  061aed0  lwz 4, -32752(30)
  061aed4  bl 0x61948c
  061aed8  nop
  061aedc  lwz 9, -32748(30)
  061aee0  lbz 0, 0(9)
  061aee4  cmpwi 7, 0, 0
  061aee8  bf 30, 0x61af28
  061aeec  lwz 9, -32744(30)
  061aef0  lbz 0, 0(9)
  061aef4  twnei 0, 0
  061aef8  lwz 0, 556(29)
  061aefc  cmpwi 7, 0, 0
  061af00  bt 30, 0x61af1c
  061af04  clrldi 29, 0, 32
  061af08  mr 3, 29
  061af0c  bl 0x61ae90
  061af10  lwz 0, 560(29)
  061af14  cmpwi 7, 0, 0
  061af18  bf 30, 0x61af04
  061af1c  clrldi 3, 31, 32
  061af20  bl 0x61f128
  061af24  nop
  061af28  ld 0, 160(1)
  061af2c  ld 29, 120(1)
  061af30  ld 30, 128(1)
  061af34  mtlr 0
  061af38  ld 31, 136(1)
  061af3c  addi 1, 1, 144
  061af40  blr

FUN_0061af44:   # 0x61af44, 0x184 bytes
  061af44  cmpwi 7, 3, 0
  061af48  mflr 0
  061af4c  stdu 1, -160(1)
  061af50  std 26, 112(1)
  061af54  std 27, 120(1)
  061af58  std 28, 128(1)
  061af5c  std 30, 144(1)
  061af60  std 31, 152(1)
  061af64  std 29, 136(1)
  061af68  std 0, 176(1)
  061af6c  lwz 30, -29452(2)
  061af70  mr 28, 3
  061af74  mr 31, 4
  061af78  mr 27, 3
  061af7c  mr 26, 5
  061af80  bt 30, 0x61af90
  061af84  lwz 0, 0(3)
  061af88  cmpwi 7, 0, 0
  061af8c  bt 28, 0x61afc0
  061af90  lwz 3, -32756(30)
  061af94  li 5, 1018
  061af98  lwz 4, -32752(30)
  061af9c  bl 0x61948c
  061afa0  nop
  061afa4  lwz 9, -32748(30)
  061afa8  lbz 0, 0(9)
  061afac  cmpwi 7, 0, 0
  061afb0  bf 30, 0x61b014
  061afb4  lwz 9, -32744(30)
  061afb8  lbz 0, 0(9)
  061afbc  twnei 0, 0
  061afc0  cmpwi 7, 31, 0
  061afc4  bt 30, 0x61aff8
  061afc8  lwz 29, 556(28)
  061afcc  cmpwi 7, 29, 0
  061afd0  bt 30, 0x61aff8
  061afd4  extsw 31, 26
  061afd8  clrldi 29, 29, 32
  061afdc  li 4, 1
  061afe0  mr 3, 29
  061afe4  mr 5, 31
  061afe8  bl 0x61af44
  061afec  lwz 29, 560(29)
  061aff0  cmpwi 7, 29, 0
  061aff4  bf 30, 0x61afd8
  061aff8  lwz 0, 4(28)
  061affc  clrldi 31, 27, 32
  061b000  andc 0, 0, 26
  061b004  rlwinm 9, 0, 0, 28, 30
  061b008  stw 0, 4(28)
  061b00c  cmpwi 7, 9, 0
  061b010  bt 30, 0x61b03c
  061b014  ld 0, 176(1)
  061b018  ld 26, 112(1)
  061b01c  ld 27, 120(1)
  061b020  mtlr 0
  061b024  ld 28, 128(1)
  061b028  ld 29, 136(1)
  061b02c  ld 30, 144(1)
  061b030  ld 31, 152(1)
  061b034  addi 1, 1, 160
  061b038  blr
  061b03c  mr 3, 31
  061b040  bl 0x61f13c
  061b044  nop
  061b048  lbz 0, 0(28)
  061b04c  clrlwi 0, 0, 27
  061b050  cmpwi 7, 0, 7
  061b054  bt 29, 0x61b014
  061b058  rlwinm 0, 0, 2, 25, 29
  061b05c  lwz 9, -32760(30)
  061b060  lwzx 0, 9, 0
  061b064  cmpwi 7, 0, 0
  061b068  bt 30, 0x61b014
  061b06c  clrldi 9, 0, 32
  061b070  lwz 0, 36(9)
  061b074  cmpwi 7, 0, 0
  061b078  bt 30, 0x61b014
  061b07c  clrldi 9, 0, 32
  061b080  mr 3, 31
  061b084  li 4, 0
  061b088  lwz 0, 0(9)
  061b08c  std 2, 40(1)
  061b090  mtctr 0
  061b094  lwz 2, 4(9)
  061b098  bctrl
  061b09c  ld 2, 40(1)
  061b0a0  ld 0, 176(1)
  061b0a4  ld 26, 112(1)
  061b0a8  mtlr 0
  061b0ac  ld 27, 120(1)
  061b0b0  ld 28, 128(1)
  061b0b4  ld 29, 136(1)
  061b0b8  ld 30, 144(1)
  061b0bc  ld 31, 152(1)
  061b0c0  addi 1, 1, 160
  061b0c4  blr

FUN_0061b0c8:   # 0x61b0c8, 0x150 bytes
  061b0c8  cmpwi 7, 3, 0
  061b0cc  mflr 0
  061b0d0  stdu 1, -160(1)
  061b0d4  std 26, 112(1)
  061b0d8  std 27, 120(1)
  061b0dc  std 28, 128(1)
  061b0e0  std 30, 144(1)
  061b0e4  std 31, 152(1)
  061b0e8  std 29, 136(1)
  061b0ec  std 0, 176(1)
  061b0f0  lwz 30, -29452(2)
  061b0f4  mr 28, 3
  061b0f8  mr 31, 4
  061b0fc  mr 27, 3
  061b100  mr 26, 5
  061b104  bt 30, 0x61b114
  061b108  lwz 0, 0(3)
  061b10c  cmpwi 7, 0, 0
  061b110  bt 28, 0x61b144
  061b114  lwz 3, -32756(30)
  061b118  li 5, 951
  061b11c  lwz 4, -32752(30)
  061b120  bl 0x61948c
  061b124  nop
  061b128  lwz 9, -32748(30)
  061b12c  lbz 0, 0(9)
  061b130  cmpwi 7, 0, 0
  061b134  bf 30, 0x61b1f0
  061b138  lwz 9, -32744(30)
  061b13c  lbz 0, 0(9)
  061b140  twnei 0, 0
  061b144  cmpwi 7, 31, 0
  061b148  bt 30, 0x61b17c
  061b14c  lwz 29, 556(28)
  061b150  cmpwi 7, 29, 0
  061b154  bt 30, 0x61b17c
  061b158  extsw 31, 26
  061b15c  clrldi 29, 29, 32
  061b160  li 4, 1
  061b164  mr 3, 29
  061b168  mr 5, 31
  061b16c  bl 0x61b0c8
  061b170  lwz 29, 560(29)
  061b174  cmpwi 7, 29, 0
  061b178  bf 30, 0x61b15c
  061b17c  clrldi 31, 27, 32
  061b180  mr 3, 31
  061b184  bl 0x61f3e0
  061b188  nop
  061b18c  lbz 0, 0(28)
  061b190  lwz 9, 4(28)
  061b194  clrlwi 0, 0, 27
  061b198  or 9, 9, 26
  061b19c  cmpwi 7, 0, 7
  061b1a0  stw 9, 4(28)
  061b1a4  bt 29, 0x61b1f0
  061b1a8  rlwinm 0, 0, 2, 25, 29
  061b1ac  lwz 9, -32760(30)
  061b1b0  lwzx 0, 9, 0
  061b1b4  cmpwi 7, 0, 0
  061b1b8  bt 30, 0x61b1f0
  061b1bc  clrldi 9, 0, 32
  061b1c0  lwz 0, 36(9)
  061b1c4  cmpwi 7, 0, 0
  061b1c8  bt 30, 0x61b1f0
  061b1cc  clrldi 9, 0, 32
  061b1d0  mr 3, 31
  061b1d4  li 4, 1
  061b1d8  lwz 0, 0(9)
  061b1dc  std 2, 40(1)
  061b1e0  mtctr 0
  061b1e4  lwz 2, 4(9)
  061b1e8  bctrl
  061b1ec  ld 2, 40(1)
  061b1f0  ld 0, 176(1)
  061b1f4  ld 26, 112(1)
  061b1f8  ld 27, 120(1)
  061b1fc  mtlr 0
  061b200  ld 28, 128(1)
  061b204  ld 29, 136(1)
  061b208  ld 30, 144(1)
  061b20c  ld 31, 152(1)
  061b210  addi 1, 1, 160
  061b214  blr

FUN_0061b218:   # 0x61b218, 0x654 bytes
  061b218  mfcr 12
  061b21c  cmpwi 7, 3, 0
  061b220  stdu 1, -192(1)
  061b224  std 27, 152(1)
  061b228  std 29, 168(1)
  061b22c  std 30, 176(1)
  061b230  std 31, 184(1)
  061b234  std 23, 120(1)
  061b238  std 24, 128(1)
  061b23c  std 25, 136(1)
  061b240  std 26, 144(1)
  061b244  std 28, 160(1)
  061b248  lwz 30, -29452(2)
  061b24c  mr 31, 3
  061b250  mr 29, 4
  061b254  mr 27, 3
  061b258  stw 12, 200(1)
  061b25c  mflr 0
  061b260  std 0, 208(1)
  061b264  bt 30, 0x61b61c
  061b268  lwz 0, 0(3)
  061b26c  cmpwi 7, 0, 0
  061b270  bt 28, 0x61b2b0
  061b274  ld 0, 208(1)
  061b278  lwz 12, 200(1)
  061b27c  ld 23, 120(1)
  061b280  mtlr 0
  061b284  ld 24, 128(1)
  061b288  mtocrf 8, 12
  061b28c  ld 25, 136(1)
  061b290  ld 26, 144(1)
  061b294  ld 27, 152(1)
  061b298  ld 28, 160(1)
  061b29c  ld 29, 168(1)
  061b2a0  ld 30, 176(1)
  061b2a4  ld 31, 184(1)
  061b2a8  addi 1, 1, 192
  061b2ac  blr
  061b2b0  cmpwi 4, 4, 0
  061b2b4  bt 18, 0x61b570
  061b2b8  bl 0x6272e8
  061b2bc  nop
  061b2c0  lwz 0, 4(31)
  061b2c4  rlwinm 0, 0, 0, 14, 14
  061b2c8  cmpwi 7, 0, 0
  061b2cc  bt 30, 0x61b308
  061b2d0  lwz 9, -32700(30)
  061b2d4  lwz 9, 0(9)
  061b2d8  cmpwi 7, 9, 0
  061b2dc  bt 30, 0x61b308
  061b2e0  clrldi 9, 9, 32
  061b2e4  lwz 3, 0(31)
  061b2e8  lwz 4, 8(31)
  061b2ec  li 5, 0
  061b2f0  lwz 0, 0(9)
  061b2f4  std 2, 40(1)
  061b2f8  mtctr 0
  061b2fc  lwz 2, 4(9)
  061b300  bctrl
  061b304  ld 2, 40(1)
  061b308  bf 18, 0x61b544
  061b30c  lwz 3, 88(31)
  061b310  cmpwi 7, 3, 0
  061b314  bt 30, 0x61b328
  061b318  clrldi 3, 3, 32
  061b31c  bl 0x619c4c
  061b320  li 0, 0
  061b324  stw 0, 88(31)
  061b328  lwz 11, 544(31)
  061b32c  cmpwi 7, 11, 0
  061b330  bt 30, 0x61b650
  061b334  clrldi 9, 11, 32
  061b338  lwz 0, 548(9)
  061b33c  cmpw 7, 0, 27
  061b340  bt 30, 0x61b398
  061b344  lwz 29, -32752(30)
  061b348  li 5, 680
  061b34c  lwz 6, 0(31)
  061b350  lwz 3, -32696(30)
  061b354  mr 4, 29
  061b358  oris 6, 6, 32768
  061b35c  bl 0x61948c
  061b360  nop
  061b364  lwz 3, -32756(30)
  061b368  mr 4, 29
  061b36c  li 5, 681
  061b370  bl 0x61948c
  061b374  nop
  061b378  lwz 9, -32748(30)
  061b37c  lbz 0, 0(9)
  061b380  cmpwi 7, 0, 0
  061b384  bf 30, 0x61b274
  061b388  lwz 9, -32744(30)
  061b38c  lbz 0, 0(9)
  061b390  twnei 0, 0
  061b394  lwz 11, 544(31)
  061b398  clrldi 9, 11, 32
  061b39c  lwz 0, 548(31)
  061b3a0  stw 0, 548(9)
  061b3a4  lwz 11, 548(31)
  061b3a8  cmpwi 7, 11, 0
  061b3ac  bt 30, 0x61b768
  061b3b0  clrldi 9, 11, 32
  061b3b4  lwz 0, 544(9)
  061b3b8  cmpw 7, 0, 27
  061b3bc  bt 30, 0x61b414
  061b3c0  lwz 29, -32752(30)
  061b3c4  li 5, 705
  061b3c8  lwz 6, 0(31)
  061b3cc  lwz 3, -32696(30)
  061b3d0  mr 4, 29
  061b3d4  oris 6, 6, 32768
  061b3d8  bl 0x61948c
  061b3dc  nop
  061b3e0  lwz 3, -32756(30)
  061b3e4  mr 4, 29
  061b3e8  li 5, 706
  061b3ec  bl 0x61948c
  061b3f0  nop
  061b3f4  lwz 9, -32748(30)
  061b3f8  lbz 0, 0(9)
  061b3fc  cmpwi 7, 0, 0
  061b400  bf 30, 0x61b274
  061b404  lwz 9, -32744(30)
  061b408  lbz 0, 0(9)
  061b40c  twnei 0, 0
  061b410  lwz 11, 548(31)
  061b414  clrldi 9, 11, 32
  061b418  lwz 0, 544(31)
  061b41c  stw 0, 544(9)
  061b420  lwz 0, 0(31)
  061b424  li 9, 0
  061b428  clrlwi 0, 0, 1
  061b42c  stw 9, 84(31)
  061b430  rldicl 11, 0, 40, 59
  061b434  stw 0, 0(31)
  061b438  cmpwi 7, 11, 5
  061b43c  bt 30, 0x61b724
  061b440  lbz 0, 16(31)
  061b444  lwz 28, -32704(30)
  061b448  extsb 0, 0
  061b44c  slwi 9, 0, 2
  061b450  extsw 0, 9
  061b454  lwzx 11, 28, 0
  061b458  cmpwi 7, 11, 0
  061b45c  bt 30, 0x61b6bc
  061b460  extsw 9, 9
  061b464  addi 0, 11, -1
  061b468  stwx 0, 28, 9
  061b46c  lwz 0, 552(31)
  061b470  cmpwi 7, 0, 0
  061b474  bt 30, 0x61b5d8
  061b478  clrldi 9, 0, 32
  061b47c  lwz 0, 556(9)
  061b480  cmpw 7, 27, 0
  061b484  bt 30, 0x61b7fc
  061b488  cmpwi 7, 0, 0
  061b48c  bt 30, 0x61b7d4
  061b490  clrldi 9, 0, 32
  061b494  lwz 0, 560(9)
  061b498  cmpw 7, 27, 0
  061b49c  bf 30, 0x61b488
  061b4a0  lwz 0, 560(31)
  061b4a4  stw 0, 560(9)
  061b4a8  lwz 28, 556(31)
  061b4ac  cmpwi 7, 28, 0
  061b4b0  bt 30, 0x61b5d8
  061b4b4  li 25, 0
  061b4b8  lwz 26, -32752(30)
  061b4bc  lwz 24, -32748(30)
  061b4c0  lwz 23, -32744(30)
  061b4c4  b 0x61b4d8
  061b4c8  lwz 0, 552(31)
  061b4cc  mr 28, 9
  061b4d0  stw 0, 552(29)
  061b4d4  bt 30, 0x61b5b0
  061b4d8  clrldi 29, 28, 32
  061b4dc  lwz 0, 552(29)
  061b4e0  cmpw 7, 0, 27
  061b4e4  bt 30, 0x61b530
  061b4e8  lwz 6, 0(31)
  061b4ec  mr 4, 26
  061b4f0  lwz 3, -32684(30)
  061b4f4  li 5, 800
  061b4f8  oris 6, 6, 32768
  061b4fc  bl 0x61948c
  061b500  nop
  061b504  lwz 3, -32756(30)
  061b508  mr 4, 26
  061b50c  li 5, 801
  061b510  bl 0x61948c
  061b514  nop
  061b518  lbz 0, 0(24)
  061b51c  cmpwi 7, 0, 0
  061b520  bf 30, 0x61b274
  061b524  lbz 0, 0(23)
  061b528  cmpwi 7, 0, 0
  061b52c  bf- 30, 0x61b868
  061b530  lwz 9, 560(29)
  061b534  cmpwi 7, 9, 0
  061b538  bf 30, 0x61b4c8
  061b53c  mr 25, 28
  061b540  b 0x61b4c8
  061b544  lwz 3, 556(31)
  061b548  cmpwi 7, 3, 0
  061b54c  bt 30, 0x61b30c
  061b550  extsw 29, 29
  061b554  clrldi 3, 3, 32
  061b558  mr 4, 29
  061b55c  bl 0x61b218
  061b560  lwz 3, 556(31)
  061b564  cmpwi 7, 3, 0
  061b568  bf 30, 0x61b554
  061b56c  b 0x61b30c
  061b570  lwz 0, 552(3)
  061b574  cmpwi 7, 0, 0
  061b578  bf 30, 0x61b2b8
  061b57c  lwz 0, 556(3)
  061b580  cmpwi 7, 0, 0
  061b584  bt 30, 0x61b2b8
  061b588  li 29, 1
  061b58c  li 3, 120
  061b590  li 4, 0
  061b594  li 5, 0
  061b598  li 6, 0
  061b59c  li 7, 0
  061b5a0  cmpwi 4, 29, 0
  061b5a4  bl 0x6194f4
  061b5a8  nop
  061b5ac  b 0x61b2b8
  061b5b0  lwz 11, 552(31)
  061b5b4  lwz 10, 556(11)
  061b5b8  cmpwi 7, 10, 0
  061b5bc  bt 30, 0x61b808
  061b5c0  cmpwi 7, 25, 0
  061b5c4  bt 30, 0x61b814
  061b5c8  clrldi 9, 25, 32
  061b5cc  lwz 0, 556(31)
  061b5d0  stw 0, 556(11)
  061b5d4  stw 10, 560(9)
  061b5d8  bl 0x6271f4
  061b5dc  nop
  061b5e0  ld 0, 208(1)
  061b5e4  lwz 12, 200(1)
  061b5e8  ld 23, 120(1)
  061b5ec  mtlr 0
  061b5f0  ld 24, 128(1)
  061b5f4  mtocrf 8, 12
  061b5f8  ld 25, 136(1)
  061b5fc  ld 26, 144(1)
  061b600  ld 27, 152(1)
  061b604  ld 28, 160(1)
  061b608  ld 29, 168(1)
  061b60c  ld 30, 176(1)
  061b610  ld 31, 184(1)
  061b614  addi 1, 1, 192
  061b618  blr
  061b61c  lwz 3, -32756(30)
  061b620  li 5, 628
  061b624  lwz 4, -32752(30)
  061b628  bl 0x61948c
  061b62c  nop
  061b630  lwz 9, -32748(30)
  061b634  lbz 0, 0(9)
  061b638  cmpwi 7, 0, 0
  061b63c  bf 30, 0x61b274
  061b640  lwz 9, -32744(30)
  061b644  lbz 0, 0(9)
  061b648  twnei 0, 0
  061b64c  b 0x61b274
  061b650  lwz 28, -32768(30)
  061b654  lwz 0, 0(28)
  061b658  cmpw 7, 27, 0
  061b65c  bt 30, 0x61b6b0
  061b660  lwz 29, -32752(30)
  061b664  li 5, 691
  061b668  lwz 6, 0(31)
  061b66c  lwz 3, -32696(30)
  061b670  mr 4, 29
  061b674  oris 6, 6, 32768
  061b678  bl 0x61948c
  061b67c  nop
  061b680  lwz 3, -32756(30)
  061b684  mr 4, 29
  061b688  li 5, 692
  061b68c  bl 0x61948c
  061b690  nop
  061b694  lwz 9, -32748(30)
  061b698  lbz 0, 0(9)
  061b69c  cmpwi 7, 0, 0
  061b6a0  bf 30, 0x61b274
  061b6a4  lwz 9, -32744(30)
  061b6a8  lbz 0, 0(9)
  061b6ac  twnei 0, 0
  061b6b0  lwz 0, 548(31)
  061b6b4  stw 0, 0(28)
  061b6b8  b 0x61b3a4
  061b6bc  lwz 29, -32752(30)
  061b6c0  li 5, 748
  061b6c4  lwz 3, -32688(30)
  061b6c8  mr 4, 29
  061b6cc  bl 0x61948c
  061b6d0  nop
  061b6d4  lwz 3, -32756(30)
  061b6d8  mr 4, 29
  061b6dc  li 5, 749
  061b6e0  bl 0x61948c
  061b6e4  nop
  061b6e8  lwz 9, -32748(30)
  061b6ec  lbz 0, 0(9)
  061b6f0  cmpwi 7, 0, 0
  061b6f4  bf 30, 0x61b274
  061b6f8  lwz 9, -32744(30)
  061b6fc  lbz 0, 0(9)
  061b700  twnei 0, 0
  061b704  lbz 9, 16(31)
  061b708  extsb 0, 9
  061b70c  slwi 9, 0, 2
  061b710  extsw 0, 9
  061b714  lwzx 11, 28, 0
  061b718  cmpwi 7, 11, 0
  061b71c  bt 30, 0x61b46c
  061b720  b 0x61b460
  061b724  li 29, 0
  061b728  add 9, 27, 29
  061b72c  clrldi 9, 9, 32
  061b730  lbz 0, 97(9)
  061b734  clrlwi 0, 0, 31
  061b738  cmpwi 7, 0, 0
  061b73c  bf 30, 0x61b750
  061b740  cmpwi 7, 29, 144
  061b744  addi 29, 29, 48
  061b748  bf 30, 0x61b728
  061b74c  b 0x61b440
  061b750  lwz 3, -32692(30)
  061b754  li 5, 735
  061b758  lwz 4, -32752(30)
  061b75c  bl 0x61948c
  061b760  nop
  061b764  b 0x61b740
  061b768  lwz 28, -32732(30)
  061b76c  lwz 0, 0(28)
  061b770  cmpw 7, 27, 0
  061b774  bt 30, 0x61b7c8
  061b778  lwz 29, -32752(30)
  061b77c  li 5, 716
  061b780  lwz 6, 0(31)
  061b784  lwz 3, -32696(30)
  061b788  mr 4, 29
  061b78c  oris 6, 6, 32768
  061b790  bl 0x61948c
  061b794  nop
  061b798  lwz 3, -32756(30)
  061b79c  mr 4, 29
  061b7a0  li 5, 717
  061b7a4  bl 0x61948c
  061b7a8  nop
  061b7ac  lwz 9, -32748(30)
  061b7b0  lbz 0, 0(9)
  061b7b4  cmpwi 7, 0, 0
  061b7b8  bf 30, 0x61b274
  061b7bc  lwz 9, -32744(30)
  061b7c0  lbz 0, 0(9)
  061b7c4  twnei 0, 0
  061b7c8  lwz 0, 544(31)
  061b7cc  stw 0, 0(28)
  061b7d0  b 0x61b420
  061b7d4  lwz 6, 0(31)
  061b7d8  li 5, 779
  061b7dc  lwz 4, -32752(30)
  061b7e0  oris 6, 6, 32768
  061b7e4  lwz 3, -32684(30)
  061b7e8  bl 0x61948c
  061b7ec  nop
  061b7f0  bl 0x6271f4
  061b7f4  nop
  061b7f8  b 0x61b274
  061b7fc  lwz 0, 560(31)
  061b800  stw 0, 556(9)
  061b804  b 0x61b4a8
  061b808  lwz 0, 556(31)
  061b80c  stw 0, 556(11)
  061b810  b 0x61b5d8
  061b814  lwz 29, -32752(30)
  061b818  li 5, 830
  061b81c  lwz 6, 0(31)
  061b820  lwz 3, -32684(30)
  061b824  mr 4, 29
  061b828  oris 6, 6, 32768
  061b82c  bl 0x61948c
  061b830  nop
  061b834  lwz 3, -32756(30)
  061b838  mr 4, 29
  061b83c  li 5, 831
  061b840  bl 0x61948c
  061b844  nop
  061b848  lwz 9, -32748(30)
  061b84c  lbz 0, 0(9)
  061b850  cmpwi 7, 0, 0
  061b854  bf 30, 0x61b274
  061b858  lwz 9, -32744(30)
  061b85c  lbz 0, 0(9)
  061b860  twnei 0, 0
  061b864  b 0x61b5d8
  061b868  trap

FUN_0061b86c:   # 0x61b86c, 0x2f0 bytes
  061b86c  mfcr 12
  061b870  cmpwi 4, 6, 0
  061b874  stdu 1, -176(1)
  061b878  std 25, 120(1)
  061b87c  std 26, 128(1)
  061b880  std 29, 152(1)
  061b884  std 30, 160(1)
  061b888  std 31, 168(1)
  061b88c  std 24, 112(1)
  061b890  std 27, 136(1)
  061b894  std 28, 144(1)
  061b898  lwz 30, -29452(2)
  061b89c  mr 25, 6
  061b8a0  mr 29, 3
  061b8a4  mr 31, 4
  061b8a8  mr 26, 5
  061b8ac  stw 12, 184(1)
  061b8b0  mflr 0
  061b8b4  std 0, 192(1)
  061b8b8  bt 18, 0x61b8c4
  061b8bc  cmpwi 7, 5, 0
  061b8c0  bt 30, 0x61b92c
  061b8c4  bl 0x6272e8
  061b8c8  nop
  061b8cc  lwz 24, 0(29)
  061b8d0  cmpwi 7, 24, 0
  061b8d4  bt 28, 0x61b950
  061b8d8  lwz 4, -32752(30)
  061b8dc  li 5, 1118
  061b8e0  lwz 3, -32680(30)
  061b8e4  bl 0x61948c
  061b8e8  nop
  061b8ec  bl 0x6271f4
  061b8f0  nop
  061b8f4  ld 0, 192(1)
  061b8f8  lwz 12, 184(1)
  061b8fc  ld 24, 112(1)
  061b900  mtlr 0
  061b904  ld 25, 120(1)
  061b908  mtocrf 8, 12
  061b90c  ld 26, 128(1)
  061b910  ld 27, 136(1)
  061b914  ld 28, 144(1)
  061b918  ld 29, 152(1)
  061b91c  ld 30, 160(1)
  061b920  ld 31, 168(1)
  061b924  addi 1, 1, 176
  061b928  blr
  061b92c  lwz 0, 4(3)
  061b930  rlwinm 0, 0, 0, 24, 24
  061b934  cmpwi 7, 0, 0
  061b938  bf 30, 0x61b8f4
  061b93c  bl 0x6272e8
  061b940  nop
  061b944  lwz 24, 0(29)
  061b948  cmpwi 7, 24, 0
  061b94c  bf 28, 0x61b8d8
  061b950  bt 18, 0x61bad0
  061b954  lwz 9, 4(29)
  061b958  ori 9, 9, 32
  061b95c  rlwinm 0, 9, 0, 24, 24
  061b960  stw 9, 4(29)
  061b964  cmpwi 7, 0, 0
  061b968  bf 30, 0x61bae0
  061b96c  rlwinm 0, 9, 0, 28, 30
  061b970  cmpwi 7, 0, 0
  061b974  bt 30, 0x61b97c
  061b978  li 26, 1
  061b97c  cmpwi 7, 31, 0
  061b980  ori 9, 9, 128
  061b984  stw 9, 4(29)
  061b988  bt 30, 0x61b9c8
  061b98c  lwz 3, 556(29)
  061b990  cmpwi 7, 3, 0
  061b994  bt 30, 0x61b9c8
  061b998  extsw 27, 31
  061b99c  extsw 28, 26
  061b9a0  extsw 31, 25
  061b9a4  clrldi 29, 3, 32
  061b9a8  mr 4, 27
  061b9ac  mr 3, 29
  061b9b0  mr 5, 28
  061b9b4  mr 6, 31
  061b9b8  bl 0x61b86c
  061b9bc  lwz 3, 560(29)
  061b9c0  cmpwi 7, 3, 0
  061b9c4  bf 30, 0x61b9a4
  061b9c8  clrldi 29, 24, 32
  061b9cc  mr 3, 29
  061b9d0  bl 0x61a790
  061b9d4  cmpwi 7, 3, 0
  061b9d8  mr 9, 3
  061b9dc  bt 30, 0x61bb24
  061b9e0  lbz 0, 0(9)
  061b9e4  clrldi 31, 3, 32
  061b9e8  clrlwi 0, 0, 27
  061b9ec  cmpwi 7, 0, 5
  061b9f0  bt 30, 0x61bb0c
  061b9f4  rlwinm 0, 0, 2, 25, 29
  061b9f8  lwz 9, -32760(30)
  061b9fc  lwzx 0, 9, 0
  061ba00  cmpwi 7, 0, 0
  061ba04  bt 30, 0x61bb04
  061ba08  clrldi 9, 0, 32
  061ba0c  lwz 0, 32(9)
  061ba10  cmpwi 7, 0, 0
  061ba14  bt 30, 0x61bb04
  061ba18  clrldi 9, 0, 32
  061ba1c  mr 3, 31
  061ba20  extsw 4, 26
  061ba24  lwz 0, 0(9)
  061ba28  std 2, 40(1)
  061ba2c  mtctr 0
  061ba30  lwz 2, 4(9)
  061ba34  bctrl
  061ba38  ld 2, 40(1)
  061ba3c  or 0, 3, 26
  061ba40  cmpwi 7, 0, 0
  061ba44  bt 30, 0x61baf4
  061ba48  mr 3, 31
  061ba4c  bl 0x62112c
  061ba50  nop
  061ba54  mr 3, 31
  061ba58  bl 0x616c14
  061ba5c  nop
  061ba60  mr 3, 29
  061ba64  bl 0x61a790
  061ba68  cmpwi 7, 3, 0
  061ba6c  mr 11, 3
  061ba70  bt 30, 0x61ba90
  061ba74  lwz 0, 552(3)
  061ba78  li 4, 0
  061ba7c  cmpwi 7, 0, 0
  061ba80  bt 30, 0x61bb44
  061ba84  clrldi 3, 11, 32
  061ba88  extsw 4, 4
  061ba8c  bl 0x61b218
  061ba90  bl 0x6271f4
  061ba94  nop
  061ba98  ld 0, 192(1)
  061ba9c  lwz 12, 184(1)
  061baa0  ld 24, 112(1)
  061baa4  mtlr 0
  061baa8  ld 25, 120(1)
  061baac  mtocrf 8, 12
  061bab0  ld 26, 128(1)
  061bab4  ld 27, 136(1)
  061bab8  ld 28, 144(1)
  061babc  ld 29, 152(1)
  061bac0  ld 30, 160(1)
  061bac4  ld 31, 168(1)
  061bac8  addi 1, 1, 176
  061bacc  blr
  061bad0  lwz 9, 4(29)
  061bad4  rlwinm 0, 9, 0, 24, 24
  061bad8  cmpwi 7, 0, 0
  061badc  bt 30, 0x61b96c
  061bae0  ori 0, 9, 128
  061bae4  li 31, 1
  061bae8  li 26, 1
  061baec  stw 0, 4(29)
  061baf0  b 0x61b98c
  061baf4  mr 3, 31
  061baf8  bl 0x621460
  061bafc  nop
  061bb00  b 0x61ba90
  061bb04  li 3, 0
  061bb08  b 0x61ba3c
  061bb0c  extsw 5, 25
  061bb10  mr 3, 31
  061bb14  extsw 4, 26
  061bb18  bl 0x60e160
  061bb1c  nop
  061bb20  b 0x61ba3c
  061bb24  lwz 4, -32752(30)
  061bb28  li 5, 1161
  061bb2c  lwz 3, -32676(30)
  061bb30  bl 0x61948c
  061bb34  nop
  061bb38  bl 0x6271f4
  061bb3c  nop
  061bb40  b 0x61b8f4
  061bb44  lwz 0, 556(3)
  061bb48  srawi 10, 0, 31
  061bb4c  xor 9, 10, 0
  061bb50  sub 9, 10, 9
  061bb54  srwi 4, 9, 31
  061bb58  b 0x61ba84

FUN_0061bb5c:   # 0x61bb5c, 0x240 bytes
  061bb5c  stdu 1, -192(1)
  061bb60  mflr 0
  061bb64  std 30, 160(1)
  061bb68  lwz 30, -29452(2)
  061bb6c  std 31, 168(1)
  061bb70  std 0, 208(1)
  061bb74  stfd 30, 176(1)
  061bb78  mr 31, 3
  061bb7c  stfd 31, 184(1)
  061bb80  std 26, 128(1)
  061bb84  std 27, 136(1)
  061bb88  std 28, 144(1)
  061bb8c  std 29, 152(1)
  061bb90  bl 0x6272e8
  061bb94  nop
  061bb98  lwz 11, -32672(30)
  061bb9c  li 9, 32
  061bba0  li 0, 0
  061bba4  mtctr 9
  061bba8  clrldi 9, 11, 32
  061bbac  addi 11, 11, 4
  061bbb0  stw 0, 0(9)
  061bbb4  bdnz 0x61bba8
  061bbb8  lwz 9, -32768(30)
  061bbbc  lwz 3, 0(9)
  061bbc0  cmpwi 7, 3, 0
  061bbc4  bt 30, 0x61bd2c
  061bbc8  clrldi 0, 31, 32
  061bbcc  lwz 26, -32760(30)
  061bbd0  li 11, 0
  061bbd4  lwz 28, -32668(30)
  061bbd8  std 0, 112(1)
  061bbdc  lfd 0, 112(1)
  061bbe0  fcfid 0, 0
  061bbe4  lwz 29, -32664(30)
  061bbe8  lwz 27, -32672(30)
  061bbec  lfs 30, -32660(30)
  061bbf0  frsp 31, 0
  061bbf4  b 0x61bc04
  061bbf8  lwz 3, 548(31)
  061bbfc  cmpwi 7, 3, 0
  061bc00  bt 30, 0x61bd2c
  061bc04  clrldi 31, 3, 32
  061bc08  lwz 0, 4(31)
  061bc0c  clrlwi 0, 0, 31
  061bc10  cmpwi 7, 0, 0
  061bc14  bt 30, 0x61bc34
  061bc18  lbz 0, 16(31)
  061bc1c  extsb 0, 0
  061bc20  slwi 0, 0, 2
  061bc24  extsw 0, 0
  061bc28  lwzx 9, 27, 0
  061bc2c  addi 9, 9, 1
  061bc30  stwx 9, 27, 0
  061bc34  lwz 0, 0(28)
  061bc38  lbz 9, 16(31)
  061bc3c  std 0, 112(1)
  061bc40  lfd 0, 112(1)
  061bc44  extsb 9, 9
  061bc48  fcfid 0, 0
  061bc4c  slwi 9, 9, 2
  061bc50  extsw 9, 9
  061bc54  frsp 13, 0
  061bc58  lfsx 0, 29, 9
  061bc5c  fmuls 0, 0, 30
  061bc60  fdivs 13, 13, 0
  061bc64  fcmpu 7, 13, 31
  061bc68  cror 30, 28, 30
  061bc6c  bf 30, 0x61bbf8
  061bc70  lbz 0, 0(31)
  061bc74  clrlwi 0, 0, 27
  061bc78  cmpwi 7, 0, 5
  061bc7c  bt 30, 0x61bd64
  061bc80  cmpwi 7, 0, 7
  061bc84  bt 29, 0x61bccc
  061bc88  rlwinm 0, 0, 2, 25, 29
  061bc8c  lwzx 0, 26, 0
  061bc90  cmpwi 7, 0, 0
  061bc94  bt 30, 0x61bccc
  061bc98  clrldi 9, 0, 32
  061bc9c  lwz 0, 28(9)
  061bca0  cmpwi 7, 0, 0
  061bca4  bt 30, 0x61bccc
  061bca8  clrldi 9, 0, 32
  061bcac  mr 3, 31
  061bcb0  lwz 0, 0(9)
  061bcb4  std 2, 40(1)
  061bcb8  mtctr 0
  061bcbc  lwz 2, 4(9)
  061bcc0  bctrl
  061bcc4  ld 2, 40(1)
  061bcc8  mr 11, 3
  061bccc  cmpwi 7, 11, 0
  061bcd0  bf 30, 0x61bd08
  061bcd4  lwz 3, 88(31)
  061bcd8  cmpwi 7, 3, 0
  061bcdc  bt 30, 0x61bbf8
  061bce0  lwz 0, 4(31)
  061bce4  rlwinm 9, 0, 0, 28, 30
  061bce8  cmpwi 7, 9, 0
  061bcec  bf 30, 0x61bbf8
  061bcf0  clrldi 3, 3, 32
  061bcf4  mr 4, 31
  061bcf8  bl 0x619cd8
  061bcfc  cmpwi 7, 3, 0
  061bd00  mr 11, 3
  061bd04  bt 30, 0x61bbf8
  061bd08  mr 3, 31
  061bd0c  li 4, 1
  061bd10  li 5, 0
  061bd14  li 6, 0
  061bd18  bl 0x61b86c
  061bd1c  lwz 3, 548(31)
  061bd20  li 11, 0
  061bd24  cmpwi 7, 3, 0
  061bd28  bf 30, 0x61bc04
  061bd2c  bl 0x6271f4
  061bd30  nop
  061bd34  ld 0, 208(1)
  061bd38  ld 26, 128(1)
  061bd3c  ld 27, 136(1)
  061bd40  mtlr 0
  061bd44  ld 28, 144(1)
  061bd48  ld 29, 152(1)
  061bd4c  ld 30, 160(1)
  061bd50  ld 31, 168(1)
  061bd54  lfd 30, 176(1)
  061bd58  lfd 31, 184(1)
  061bd5c  addi 1, 1, 192
  061bd60  blr
  061bd64  lwz 0, 4(31)
  061bd68  rlwinm 9, 0, 0, 28, 30
  061bd6c  cmpwi 7, 9, 0
  061bd70  bf 30, 0x61bccc
  061bd74  lwz 9, 576(31)
  061bd78  lwz 0, 8(9)
  061bd7c  rlwinm 0, 0, 0, 21, 21
  061bd80  cmpwi 7, 0, 0
  061bd84  bf 30, 0x61bccc
  061bd88  mr 3, 31
  061bd8c  bl 0x60e31c
  061bd90  nop
  061bd94  mr 11, 3
  061bd98  b 0x61bccc

FUN_0061bd9c:   # 0x61bd9c, 0xe4 bytes
  061bd9c  stdu 1, -144(1)
  061bda0  mflr 0
  061bda4  std 30, 128(1)
  061bda8  lwz 30, -29452(2)
  061bdac  std 29, 120(1)
  061bdb0  std 31, 136(1)
  061bdb4  std 0, 160(1)
  061bdb8  bl 0x6272e8
  061bdbc  nop
  061bdc0  lwz 9, -32768(30)
  061bdc4  lwz 3, 0(9)
  061bdc8  cmpwi 7, 3, 0
  061bdcc  bt 30, 0x61be54
  061bdd0  lwz 29, -32760(30)
  061bdd4  clrldi 31, 3, 32
  061bdd8  lbz 0, 0(31)
  061bddc  clrlwi 0, 0, 27
  061bde0  cmpwi 7, 0, 5
  061bde4  cmpwi 6, 0, 7
  061bde8  bt 30, 0x61be48
  061bdec  rlwinm 0, 0, 2, 25, 29
  061bdf0  bt 25, 0x61be48
  061bdf4  lwzx 0, 29, 0
  061bdf8  cmpwi 7, 0, 0
  061bdfc  clrldi 9, 0, 32
  061be00  bt 30, 0x61be48
  061be04  lwz 0, 24(9)
  061be08  mr 3, 31
  061be0c  cmpwi 7, 0, 0
  061be10  clrldi 9, 0, 32
  061be14  bt 30, 0x61be48
  061be18  lwz 0, 0(9)
  061be1c  std 2, 40(1)
  061be20  mtctr 0
  061be24  lwz 2, 4(9)
  061be28  bctrl
  061be2c  ld 2, 40(1)
  061be30  li 4, 1
  061be34  cmpwi 7, 3, 0
  061be38  li 5, 0
  061be3c  mr 3, 31
  061be40  li 6, 0
  061be44  bf 30, 0x61be78
  061be48  lwz 3, 548(31)
  061be4c  cmpwi 7, 3, 0
  061be50  bf 30, 0x61bdd4
  061be54  bl 0x6271f4
  061be58  nop
  061be5c  ld 0, 160(1)
  061be60  ld 29, 120(1)
  061be64  ld 30, 128(1)
  061be68  mtlr 0
  061be6c  ld 31, 136(1)
  061be70  addi 1, 1, 144
  061be74  blr
  061be78  bl 0x61b86c
  061be7c  b 0x61be48

FUN_0061be80:   # 0x61be80, 0x130 bytes
  061be80  cmpdi 3, 0
  061be84  mflr 0
  061be88  stdu 1, -144(1)
  061be8c  std 29, 120(1)
  061be90  std 30, 128(1)
  061be94  std 31, 136(1)
  061be98  std 0, 160(1)
  061be9c  lwz 30, -29452(2)
  061bea0  mr 29, 3
  061bea4  mr 31, 4
  061bea8  bt 2, 0x61beb8
  061beac  lwz 0, 0(3)
  061beb0  cmpwi 7, 0, 0
  061beb4  bt 28, 0x61bf98
  061beb8  lwz 3, -32756(30)
  061bebc  li 5, 1695
  061bec0  lwz 4, -32752(30)
  061bec4  bl 0x61948c
  061bec8  nop
  061becc  lwz 9, -32748(30)
  061bed0  lbz 0, 0(9)
  061bed4  cmpwi 7, 0, 0
  061bed8  bf 30, 0x61bf20
  061bedc  lwz 9, -32744(30)
  061bee0  lbz 0, 0(9)
  061bee4  twnei 0, 0
  061bee8  lwz 10, 556(29)
  061beec  cmpwi 7, 10, 0
  061bef0  bt 30, 0x61bf20
  061bef4  li 9, 0
  061bef8  li 8, 0
  061befc  clrldi 11, 10, 32
  061bf00  lwz 0, 84(11)
  061bf04  cmpw 7, 0, 31
  061bf08  bt 30, 0x61bf44
  061bf0c  lwz 0, 560(11)
  061bf10  mr 9, 10
  061bf14  cmpwi 7, 0, 0
  061bf18  mr 10, 0
  061bf1c  bf 30, 0x61befc
  061bf20  ld 0, 160(1)
  061bf24  li 3, 0
  061bf28  ld 29, 120(1)
  061bf2c  extsw 3, 3
  061bf30  ld 30, 128(1)
  061bf34  ld 31, 136(1)
  061bf38  mtlr 0
  061bf3c  addi 1, 1, 144
  061bf40  blr
  061bf44  cmpwi 7, 9, 0
  061bf48  bt 30, 0x61bfa4
  061bf4c  clrldi 9, 9, 32
  061bf50  lwz 0, 560(11)
  061bf54  stw 0, 560(9)
  061bf58  mr 3, 11
  061bf5c  li 4, 1
  061bf60  li 5, 0
  061bf64  li 6, 0
  061bf68  stw 8, 560(11)
  061bf6c  stw 8, 552(11)
  061bf70  bl 0x61b86c
  061bf74  ld 0, 160(1)
  061bf78  li 3, 1
  061bf7c  ld 29, 120(1)
  061bf80  ld 30, 128(1)
  061bf84  mtlr 0
  061bf88  extsw 3, 3
  061bf8c  ld 31, 136(1)
  061bf90  addi 1, 1, 144
  061bf94  blr
  061bf98  cmpwi 7, 4, 0
  061bf9c  bf 30, 0x61bee8
  061bfa0  b 0x61beb8
  061bfa4  lwz 0, 560(11)
  061bfa8  stw 0, 556(29)
  061bfac  b 0x61bf58

FUN_0061bfb0:   # 0x61bfb0, 0x164 bytes
  061bfb0  cmpwi 7, 3, 0
  061bfb4  mflr 0
  061bfb8  stdu 1, -176(1)
  061bfbc  std 24, 112(1)
  061bfc0  std 25, 120(1)
  061bfc4  std 29, 152(1)
  061bfc8  std 30, 160(1)
  061bfcc  std 26, 128(1)
  061bfd0  std 27, 136(1)
  061bfd4  std 28, 144(1)
  061bfd8  std 31, 168(1)
  061bfdc  std 0, 192(1)
  061bfe0  lwz 30, -29452(2)
  061bfe4  mr 29, 3
  061bfe8  mr 25, 4
  061bfec  mr 24, 5
  061bff0  bt 30, 0x61c0dc
  061bff4  bl 0x6272e8
  061bff8  nop
  061bffc  lwz 9, -32768(30)
  061c000  lwz 0, 0(9)
  061c004  cmpwi 7, 0, 0
  061c008  bt 30, 0x61c0a4
  061c00c  lwz 28, -32752(30)
  061c010  lwz 27, -32748(30)
  061c014  lwz 26, -32744(30)
  061c018  b 0x61c028
  061c01c  lwz 0, 548(31)
  061c020  cmpwi 7, 0, 0
  061c024  bt 30, 0x61c0a4
  061c028  clrldi 31, 0, 32
  061c02c  lwz 0, 0(31)
  061c030  cmpwi 7, 0, 0
  061c034  bt 28, 0x61c078
  061c038  lwz 3, -32652(30)
  061c03c  mr 4, 28
  061c040  li 5, 1641
  061c044  bl 0x61948c
  061c048  nop
  061c04c  lwz 3, -32756(30)
  061c050  mr 4, 28
  061c054  li 5, 1643
  061c058  bl 0x61948c
  061c05c  nop
  061c060  lbz 0, 0(27)
  061c064  cmpwi 7, 0, 0
  061c068  bf 30, 0x61c0ac
  061c06c  lbz 0, 0(26)
  061c070  cmpwi 7, 0, 0
  061c074  bf- 30, 0x61c110
  061c078  lwz 0, 84(31)
  061c07c  cmpw 7, 0, 29
  061c080  bf 30, 0x61c01c
  061c084  mr 3, 31
  061c088  li 4, 1
  061c08c  extsw 5, 25
  061c090  extsw 6, 24
  061c094  bl 0x61b86c
  061c098  lwz 0, 548(31)
  061c09c  cmpwi 7, 0, 0
  061c0a0  bf 30, 0x61c028
  061c0a4  bl 0x6271f4
  061c0a8  nop
  061c0ac  ld 0, 192(1)
  061c0b0  ld 24, 112(1)
  061c0b4  ld 25, 120(1)
  061c0b8  mtlr 0
  061c0bc  ld 26, 128(1)
  061c0c0  ld 27, 136(1)
  061c0c4  ld 28, 144(1)
  061c0c8  ld 29, 152(1)
  061c0cc  ld 30, 160(1)
  061c0d0  ld 31, 168(1)
  061c0d4  addi 1, 1, 176
  061c0d8  blr
  061c0dc  lwz 3, -32756(30)
  061c0e0  li 5, 1624
  061c0e4  lwz 4, -32752(30)
  061c0e8  bl 0x61948c
  061c0ec  nop
  061c0f0  lwz 9, -32748(30)
  061c0f4  lbz 0, 0(9)
  061c0f8  cmpwi 7, 0, 0
  061c0fc  bf 30, 0x61c0ac
  061c100  lwz 9, -32744(30)
  061c104  lbz 0, 0(9)
  061c108  twnei 0, 0
  061c10c  b 0x61bff4
  061c110  trap

FUN_0061c114:   # 0x61c114, 0x16c bytes
  061c114  stdu 1, -160(1)
  061c118  mflr 0
  061c11c  std 30, 144(1)
  061c120  lwz 30, -29452(2)
  061c124  std 28, 128(1)
  061c128  std 0, 176(1)
  061c12c  std 26, 112(1)
  061c130  std 27, 120(1)
  061c134  std 29, 136(1)
  061c138  std 31, 152(1)
  061c13c  bl 0x6272e8
  061c140  nop
  061c144  lwz 28, -32768(30)
  061c148  lwz 0, 0(28)
  061c14c  cmpwi 7, 0, 0
  061c150  bt 30, 0x61c1f0
  061c154  lwz 31, -32752(30)
  061c158  lwz 27, -32748(30)
  061c15c  lwz 26, -32744(30)
  061c160  b 0x61c17c
  061c164  lwz 0, 552(29)
  061c168  cmpwi 7, 0, 0
  061c16c  bt 30, 0x61c1d0
  061c170  lwz 0, 548(29)
  061c174  cmpwi 7, 0, 0
  061c178  bt 30, 0x61c1f0
  061c17c  clrldi 29, 0, 32
  061c180  lwz 0, 0(29)
  061c184  cmpwi 7, 0, 0
  061c188  bt 28, 0x61c164
  061c18c  lwz 3, -32652(30)
  061c190  mr 4, 31
  061c194  li 5, 1553
  061c198  bl 0x61948c
  061c19c  nop
  061c1a0  lwz 3, -32756(30)
  061c1a4  mr 4, 31
  061c1a8  li 5, 1555
  061c1ac  bl 0x61948c
  061c1b0  nop
  061c1b4  lbz 0, 0(27)
  061c1b8  cmpwi 7, 0, 0
  061c1bc  bf 30, 0x61c258
  061c1c0  lbz 0, 0(26)
  061c1c4  cmpwi 7, 0, 0
  061c1c8  bt+ 30, 0x61c164
  061c1cc  trap
  061c1d0  mr 3, 29
  061c1d4  li 4, 1
  061c1d8  li 5, 1
  061c1dc  li 6, 0
  061c1e0  bl 0x61b86c
  061c1e4  lwz 0, 548(29)
  061c1e8  cmpwi 7, 0, 0
  061c1ec  bf 30, 0x61c17c
  061c1f0  bl 0x6271f4
  061c1f4  nop
  061c1f8  lwz 0, 0(28)
  061c1fc  cmpwi 7, 0, 0
  061c200  bt 30, 0x61c258
  061c204  lwz 31, -32752(30)
  061c208  li 5, 1578
  061c20c  lwz 3, -32648(30)
  061c210  mr 4, 31
  061c214  bl 0x61948c
  061c218  nop
  061c21c  lwz 0, 0(28)
  061c220  cmpwi 7, 0, 0
  061c224  bt 30, 0x61c244
  061c228  li 3, 0
  061c22c  li 11, 141
  061c230  ori 3, 3, 33000
  061c234  sc
  061c238  lwz 29, 0(28)
  061c23c  cmpwi 7, 29, 0
  061c240  bf 30, 0x61c228
  061c244  lwz 3, -32644(30)
  061c248  mr 4, 31
  061c24c  li 5, 1588
  061c250  bl 0x61948c
  061c254  nop
  061c258  ld 0, 176(1)
  061c25c  ld 26, 112(1)
  061c260  ld 27, 120(1)
  061c264  mtlr 0
  061c268  ld 28, 128(1)
  061c26c  ld 29, 136(1)
  061c270  ld 30, 144(1)
  061c274  ld 31, 152(1)
  061c278  addi 1, 1, 160
  061c27c  blr

FUN_0061c280:   # 0x61c280, 0x3a8 bytes
  061c280  mfcr 12
  061c284  cmpwi 7, 3, 0
  061c288  stdu 1, -272(1)
  061c28c  stfd 30, 256(1)
  061c290  fmr 30, 1
  061c294  std 16, 128(1)
  061c298  std 17, 136(1)
  061c29c  std 19, 152(1)
  061c2a0  std 24, 192(1)
  061c2a4  std 25, 200(1)
  061c2a8  std 26, 208(1)
  061c2ac  std 27, 216(1)
  061c2b0  std 30, 240(1)
  061c2b4  stfd 31, 264(1)
  061c2b8  mr 27, 3
  061c2bc  std 14, 112(1)
  061c2c0  std 15, 120(1)
  061c2c4  std 18, 144(1)
  061c2c8  std 20, 160(1)
  061c2cc  std 21, 168(1)
  061c2d0  std 22, 176(1)
  061c2d4  std 23, 184(1)
  061c2d8  std 28, 224(1)
  061c2dc  std 29, 232(1)
  061c2e0  std 31, 248(1)
  061c2e4  lwz 30, -29452(2)
  061c2e8  mr 26, 4
  061c2ec  mr 25, 5
  061c2f0  mr 24, 6
  061c2f4  mr 17, 7
  061c2f8  mr 16, 9
  061c2fc  mr 19, 10
  061c300  stw 12, 280(1)
  061c304  mflr 0
  061c308  std 0, 288(1)
  061c30c  bt- 30, 0x61c318
  061c310  cmplwi 7, 5, 31
  061c314  bf 29, 0x61c408
  061c318  lwz 3, -32756(30)
  061c31c  li 5, 376
  061c320  lwz 4, -32752(30)
  061c324  bl 0x61948c
  061c328  nop
  061c32c  lwz 9, -32748(30)
  061c330  lbz 0, 0(9)
  061c334  cmpwi 7, 0, 0
  061c338  bf 30, 0x61c424
  061c33c  lwz 9, -32744(30)
  061c340  cmpwi 4, 26, 0
  061c344  lbz 0, 0(9)
  061c348  twnei 0, 0
  061c34c  bl 0x6272e8
  061c350  nop
  061c354  bf 17, 0x61c494
  061c358  extsb 9, 19
  061c35c  lwz 0, 388(1)
  061c360  li 28, 0
  061c364  lwz 22, -32752(30)
  061c368  slwi 9, 9, 2
  061c36c  lwz 15, -32632(30)
  061c370  rlwinm 20, 0, 0, 15, 15
  061c374  lwz 14, -32764(30)
  061c378  extsw 18, 9
  061c37c  lfs 31, -32628(30)
  061c380  li 23, 0
  061c384  li 21, 0
  061c388  b 0x61c3a8
  061c38c  lwz 31, 84(29)
  061c390  cmpwi 7, 31, 0
  061c394  bt 30, 0x61c4a4
  061c398  addi 28, 28, 1
  061c39c  cmpw 7, 26, 28
  061c3a0  bt 30, 0x61c494
  061c3a4  add 27, 27, 24
  061c3a8  clrldi 29, 27, 32
  061c3ac  lbz 0, 0(29)
  061c3b0  clrlwi 0, 0, 27
  061c3b4  cmpw 7, 0, 25
  061c3b8  bt 30, 0x61c38c
  061c3bc  lwz 3, -32640(30)
  061c3c0  mr 4, 22
  061c3c4  li 5, 391
  061c3c8  bl 0x61948c
  061c3cc  nop
  061c3d0  lwz 3, -32756(30)
  061c3d4  mr 4, 22
  061c3d8  li 5, 392
  061c3dc  bl 0x61948c
  061c3e0  nop
  061c3e4  lwz 9, -32748(30)
  061c3e8  lbz 0, 0(9)
  061c3ec  cmpwi 7, 0, 0
  061c3f0  bf 30, 0x61c424
  061c3f4  lwz 9, -32744(30)
  061c3f8  lbz 0, 0(9)
  061c3fc  cmpwi 7, 0, 0
  061c400  bt+ 30, 0x61c38c
  061c404  trap
  061c408  cmpwi 4, 4, 0
  061c40c  bt 16, 0x61c318
  061c410  cmpwi 7, 4, 256
  061c414  bt 29, 0x61c318
  061c418  cmpwi 7, 6, 563
  061c41c  bt 29, 0x61c34c
  061c420  b 0x61c318
  061c424  li 29, 0
  061c428  ld 0, 288(1)
  061c42c  mr 3, 29
  061c430  lwz 12, 280(1)
  061c434  ld 14, 112(1)
  061c438  mtlr 0
  061c43c  ld 15, 120(1)
  061c440  mtocrf 8, 12
  061c444  ld 16, 128(1)
  061c448  ld 17, 136(1)
  061c44c  ld 18, 144(1)
  061c450  ld 19, 152(1)
  061c454  ld 20, 160(1)
  061c458  ld 21, 168(1)
  061c45c  ld 22, 176(1)
  061c460  ld 23, 184(1)
  061c464  ld 24, 192(1)
  061c468  ld 25, 200(1)
  061c46c  ld 26, 208(1)
  061c470  ld 27, 216(1)
  061c474  ld 28, 224(1)
  061c478  ld 29, 232(1)
  061c47c  ld 30, 240(1)
  061c480  ld 31, 248(1)
  061c484  lfd 30, 256(1)
  061c488  lfd 31, 264(1)
  061c48c  addi 1, 1, 272
  061c490  blr
  061c494  li 29, 0
  061c498  bl 0x6271f4
  061c49c  nop
  061c4a0  b 0x61c428
  061c4a4  lwz 0, 88(29)
  061c4a8  cmpwi 7, 0, 0
  061c4ac  bt 30, 0x61c4c8
  061c4b0  lwz 4, -32752(30)
  061c4b4  li 5, 402
  061c4b8  lwz 3, -32636(30)
  061c4bc  bl 0x61948c
  061c4c0  nop
  061c4c4  stw 31, 88(29)
  061c4c8  lwz 9, 0(29)
  061c4cc  stw 20, 4(29)
  061c4d0  addi 0, 9, 1
  061c4d4  lwz 11, 0(14)
  061c4d8  rlwinm 9, 9, 0, 0, 15
  061c4dc  clrlwi 0, 0, 16
  061c4e0  cmpwi 7, 11, 0
  061c4e4  or 9, 9, 0
  061c4e8  stw 17, 84(29)
  061c4ec  stw 9, 0(29)
  061c4f0  lwzx 0, 15, 18
  061c4f4  stw 31, 560(29)
  061c4f8  rldicl 0, 0, 63, 63
  061c4fc  stw 31, 548(29)
  061c500  slwi 0, 0, 2
  061c504  stw 31, 544(29)
  061c508  or 0, 0, 20
  061c50c  stw 31, 552(29)
  061c510  stw 0, 4(29)
  061c514  stw 31, 556(29)
  061c518  bf 29, 0x61c550
  061c51c  addi 0, 11, 31
  061c520  li 10, 0
  061c524  srawi 0, 0, 5
  061c528  addze 0, 0
  061c52c  addi 11, 27, 20
  061c530  cmpwi 7, 0, 1
  061c534  clrldi 0, 0, 32
  061c538  mtctr 0
  061c53c  bt- 28, 0x61c61c
  061c540  clrldi 9, 11, 32
  061c544  addi 11, 11, 4
  061c548  stw 10, 0(9)
  061c54c  bdnz 0x61c540
  061c550  mr 3, 29
  061c554  stfs 30, 284(29)
  061c558  stb 19, 16(29)
  061c55c  stfs 31, 296(29)
  061c560  stw 16, 304(29)
  061c564  stw 21, 352(29)
  061c568  stb 23, 359(29)
  061c56c  stw 23, 8(29)
  061c570  stfs 31, 288(29)
  061c574  stfs 31, 292(29)
  061c578  stw 23, 300(29)
  061c57c  stw 23, 308(29)
  061c580  stw 23, 312(29)
  061c584  stw 23, 320(29)
  061c588  stw 23, 316(29)
  061c58c  stw 21, 344(29)
  061c590  stw 21, 340(29)
  061c594  stw 21, 348(29)
  061c598  stw 23, 328(29)
  061c59c  stw 23, 324(29)
  061c5a0  stw 23, 332(29)
  061c5a4  stw 23, 336(29)
  061c5a8  stb 23, 356(29)
  061c5ac  stb 23, 357(29)
  061c5b0  stb 23, 358(29)
  061c5b4  bl 0x616c14
  061c5b8  nop
  061c5bc  li 9, 4
  061c5c0  addi 11, 27, 92
  061c5c4  mtctr 9
  061c5c8  li 0, 0
  061c5cc  li 10, 0
  061c5d0  clrldi 9, 11, 32
  061c5d4  addi 11, 11, 48
  061c5d8  stw 27, 40(9)
  061c5dc  sth 0, 0(9)
  061c5e0  stw 10, 12(9)
  061c5e4  stb 0, 2(9)
  061c5e8  stb 0, 4(9)
  061c5ec  stb 0, 5(9)
  061c5f0  bdnz 0x61c5d0
  061c5f4  addi 3, 27, 360
  061c5f8  clrldi 3, 3, 32
  061c5fc  bl 0x625884
  061c600  nop
  061c604  bl 0x604918
  061c608  nop
  061c60c  stw 3, 12(29)
  061c610  bl 0x6271f4
  061c614  nop
  061c618  b 0x61c428
  061c61c  li 0, 1
  061c620  mtctr 0
  061c624  b 0x61c540

FUN_0061c628:   # 0x61c628, 0x354 bytes
  061c628  cmpwi 7, 3, 0
  061c62c  mflr 0
  061c630  stdu 1, -192(1)
  061c634  std 25, 136(1)
  061c638  std 26, 144(1)
  061c63c  std 27, 152(1)
  061c640  std 28, 160(1)
  061c644  std 30, 176(1)
  061c648  std 29, 168(1)
  061c64c  std 31, 184(1)
  061c650  std 0, 208(1)
  061c654  lwz 30, -29452(2)
  061c658  mr 28, 3
  061c65c  mr 27, 4
  061c660  mr 25, 3
  061c664  mr 26, 4
  061c668  bt 30, 0x61c93c
  061c66c  cmpwi 7, 4, 0
  061c670  bt 30, 0x61c93c
  061c674  lwz 29, 556(28)
  061c678  cmpwi 7, 29, 0
  061c67c  bt 30, 0x61c6a0
  061c680  clrldi 31, 26, 32
  061c684  clrldi 29, 29, 32
  061c688  mr 4, 31
  061c68c  mr 3, 29
  061c690  bl 0x61c628
  061c694  lwz 29, 560(29)
  061c698  cmpwi 7, 29, 0
  061c69c  bf 30, 0x61c684
  061c6a0  lwz 10, 4(27)
  061c6a4  rlwinm 0, 10, 0, 11, 11
  061c6a8  cmpwi 7, 0, 0
  061c6ac  bt 30, 0x61c6fc
  061c6b0  cmpwi 7, 10, 0
  061c6b4  bt 28, 0x61c6cc
  061c6b8  lwz 0, 8(27)
  061c6bc  lwz 9, 4(28)
  061c6c0  rlwinm 0, 0, 17, 14, 14
  061c6c4  or 0, 0, 9
  061c6c8  stw 0, 4(28)
  061c6cc  lwz 0, 8(27)
  061c6d0  lwz 9, 4(28)
  061c6d4  rldicl 0, 0, 63, 63
  061c6d8  slwi 0, 0, 21
  061c6dc  or 0, 0, 9
  061c6e0  stw 0, 4(28)
  061c6e4  lwz 9, 8(27)
  061c6e8  rldicl 9, 9, 62, 63
  061c6ec  slwi 9, 9, 22
  061c6f0  or 9, 9, 0
  061c6f4  stw 9, 4(28)
  061c6f8  lwz 10, 4(27)
  061c6fc  rlwinm 0, 10, 0, 25, 25
  061c700  cmpwi 7, 0, 0
  061c704  bt 30, 0x61c8b8
  061c708  lwz 0, 12(27)
  061c70c  rlwinm 6, 10, 0, 12, 15
  061c710  stw 0, 8(28)
  061c714  cmpwi 7, 6, 0
  061c718  bt 30, 0x61c760
  061c71c  li 9, 4
  061c720  li 11, 0
  061c724  lis 7, 1
  061c728  mtctr 9
  061c72c  add 0, 11, 26
  061c730  add 9, 11, 25
  061c734  clrldi 8, 0, 32
  061c738  slw 0, 7, 11
  061c73c  clrldi 9, 9, 32
  061c740  and 6, 0, 10
  061c744  addi 11, 11, 1
  061c748  cmpwi 6, 0
  061c74c  bt 2, 0x61c75c
  061c750  lbz 0, 36(8)
  061c754  stb 0, 356(9)
  061c758  lwz 10, 4(27)
  061c75c  bdnz 0x61c72c
  061c760  rlwinm 0, 10, 0, 29, 29
  061c764  cmpwi 7, 0, 0
  061c768  bt 30, 0x61c7a0
  061c76c  lfs 13, 16(27)
  061c770  addi 9, 1, 112
  061c774  fmr 0, 13
  061c778  stfs 13, 288(28)
  061c77c  fctiwz 0, 0
  061c780  stfiwx 0, 0, 9
  061c784  lwz 0, 112(1)
  061c788  cmpwi 7, 0, 0
  061c78c  bt 28, 0x61c970
  061c790  lfs 0, -32628(30)
  061c794  fcmpu 7, 13, 0
  061c798  bf 29, 0x61c7a0
  061c79c  stfs 0, 288(28)
  061c7a0  rlwinm 0, 10, 0, 28, 28
  061c7a4  cmpwi 7, 0, 0
  061c7a8  bt 30, 0x61c934
  061c7ac  lwz 0, 20(27)
  061c7b0  cmpwi 7, 0, 0
  061c7b4  stw 0, 300(28)
  061c7b8  bt 28, 0x61c7cc
  061c7bc  cmplwi 7, 0, 359
  061c7c0  bf 29, 0x61c7cc
  061c7c4  li 0, 359
  061c7c8  stw 0, 300(28)
  061c7cc  lwz 0, 4(27)
  061c7d0  rlwinm 0, 0, 0, 27, 27
  061c7d4  cmpwi 7, 0, 0
  061c7d8  bt 30, 0x61c918
  061c7dc  lwz 0, 24(27)
  061c7e0  cmpwi 7, 0, 0
  061c7e4  stw 0, 316(28)
  061c7e8  bt 28, 0x61c928
  061c7ec  cmplwi 7, 0, 360
  061c7f0  bf 29, 0x61c7fc
  061c7f4  li 0, 360
  061c7f8  stw 0, 316(28)
  061c7fc  lwz 0, 4(27)
  061c800  clrlwi 0, 0, 31
  061c804  cmpwi 7, 0, 0
  061c808  bt 30, 0x61c910
  061c80c  lwz 0, 28(27)
  061c810  cmpwi 7, 0, -7680
  061c814  stw 0, 324(28)
  061c818  bf 28, 0x61c8c0
  061c81c  li 0, -7680
  061c820  stw 0, 324(28)
  061c824  lwz 10, 4(27)
  061c828  rlwinm 0, 10, 0, 30, 30
  061c82c  cmpwi 7, 0, 0
  061c830  bt 30, 0x61c8e0
  061c834  lfs 13, 32(27)
  061c838  addi 6, 1, 112
  061c83c  fmr 0, 13
  061c840  stfs 13, 340(28)
  061c844  fctiwz 0, 0
  061c848  stfiwx 0, 0, 6
  061c84c  lwz 0, 112(1)
  061c850  cmpwi 7, 0, -1
  061c854  bt 28, 0x61c904
  061c858  lfs 0, -32628(30)
  061c85c  fcmpu 7, 13, 0
  061c860  bf 29, 0x61c868
  061c864  stfs 0, 340(28)
  061c868  rlwinm 0, 10, 0, 26, 26
  061c86c  cmpwi 7, 0, 0
  061c870  bt 30, 0x61c88c
  061c874  addi 3, 25, 360
  061c878  addi 4, 26, 40
  061c87c  clrldi 3, 3, 32
  061c880  clrldi 4, 4, 32
  061c884  bl 0x625424
  061c888  nop
  061c88c  ld 0, 208(1)
  061c890  ld 25, 136(1)
  061c894  ld 26, 144(1)
  061c898  mtlr 0
  061c89c  ld 27, 152(1)
  061c8a0  ld 28, 160(1)
  061c8a4  ld 29, 168(1)
  061c8a8  ld 30, 176(1)
  061c8ac  ld 31, 184(1)
  061c8b0  addi 1, 1, 192
  061c8b4  blr
  061c8b8  lwz 0, 8(28)
  061c8bc  b 0x61c70c
  061c8c0  cmpwi 7, 0, 7680
  061c8c4  bf 29, 0x61c824
  061c8c8  li 0, 7680
  061c8cc  stw 0, 324(28)
  061c8d0  lwz 10, 4(27)
  061c8d4  rlwinm 0, 10, 0, 30, 30
  061c8d8  cmpwi 7, 0, 0
  061c8dc  bf 30, 0x61c834
  061c8e0  lfs 13, 340(28)
  061c8e4  addi 6, 1, 112
  061c8e8  fmr 0, 13
  061c8ec  stfs 13, 340(28)
  061c8f0  fctiwz 0, 0
  061c8f4  stfiwx 0, 0, 6
  061c8f8  lwz 0, 112(1)
  061c8fc  cmpwi 7, 0, -1
  061c900  bf 28, 0x61c858
  061c904  lfs 0, -32620(30)
  061c908  stfs 0, 340(28)
  061c90c  b 0x61c868
  061c910  lwz 0, 324(28)
  061c914  b 0x61c810
  061c918  lwz 0, 316(28)
  061c91c  cmpwi 7, 0, 0
  061c920  stw 0, 316(28)
  061c924  bf 28, 0x61c7ec
  061c928  li 0, 0
  061c92c  stw 0, 316(28)
  061c930  b 0x61c7fc
  061c934  lwz 0, 300(28)
  061c938  b 0x61c7b0
  061c93c  lwz 3, -32756(30)
  061c940  li 5, 152
  061c944  lwz 4, -32752(30)
  061c948  bl 0x61948c
  061c94c  nop
  061c950  lwz 9, -32748(30)
  061c954  lbz 0, 0(9)
  061c958  cmpwi 7, 0, 0
  061c95c  bf 30, 0x61c88c
  061c960  lwz 9, -32744(30)
  061c964  lbz 0, 0(9)
  061c968  twnei 0, 0
  061c96c  b 0x61c674
  061c970  li 0, 0
  061c974  stw 0, 288(28)
  061c978  b 0x61c7a0

FUN_0061c97c:   # 0x61c97c, 0x18 bytes
  061c97c  std 30, -16(1)
  061c980  lwz 30, -29448(2)
  061c984  lwz 9, -32768(30)
  061c988  ld 30, -16(1)
  061c98c  stw 3, 0(9)
  061c990  blr

FUN_0061c994:   # 0x61c994, 0x3e8 bytes
  061c994  stdu 1, -288(1)
  061c998  mflr 0
  061c99c  std 30, 264(1)
  061c9a0  lwz 30, -29448(2)
  061c9a4  std 31, 272(1)
  061c9a8  stfd 31, 280(1)
  061c9ac  mr 31, 3
  061c9b0  std 22, 200(1)
  061c9b4  std 23, 208(1)
  061c9b8  std 24, 216(1)
  061c9bc  std 25, 224(1)
  061c9c0  std 26, 232(1)
  061c9c4  std 27, 240(1)
  061c9c8  std 28, 248(1)
  061c9cc  std 29, 256(1)
  061c9d0  std 0, 304(1)
  061c9d4  bl 0x62730c
  061c9d8  nop
  061c9dc  cmpwi 7, 3, 0
  061c9e0  bf 30, 0x61ca34
  061c9e4  lwz 9, -32764(30)
  061c9e8  li 3, 0
  061c9ec  ld 22, 200(1)
  061c9f0  ld 23, 208(1)
  061c9f4  ld 24, 216(1)
  061c9f8  ld 25, 224(1)
  061c9fc  lwz 0, 0(9)
  061ca00  ld 26, 232(1)
  061ca04  add 0, 31, 0
  061ca08  ld 27, 240(1)
  061ca0c  ld 28, 248(1)
  061ca10  stw 0, 0(9)
  061ca14  ld 0, 304(1)
  061ca18  ld 29, 256(1)
  061ca1c  ld 30, 264(1)
  061ca20  mtlr 0
  061ca24  ld 31, 272(1)
  061ca28  lfd 31, 280(1)
  061ca2c  addi 1, 1, 288
  061ca30  blr
  061ca34  lwz 24, -32760(30)
  061ca38  addi 23, 1, 112
  061ca3c  lwz 22, -32764(30)
  061ca40  lwz 9, 0(24)
  061ca44  lwz 0, 0(22)
  061ca48  addi 9, 9, 62
  061ca4c  add 0, 0, 31
  061ca50  cmplwi 7, 9, 62
  061ca54  stw 0, 0(22)
  061ca58  bf 29, 0x61cb78
  061ca5c  li 0, 0
  061ca60  li 31, 0
  061ca64  li 27, 32
  061ca68  li 25, 0
  061ca6c  addi 23, 1, 112
  061ca70  stw 0, 112(1)
  061ca74  lwz 0, 0(24)
  061ca78  slwi 28, 25, 2
  061ca7c  cmplw 7, 0, 31
  061ca80  bf 29, 0x61caf8
  061ca84  lwz 26, -32756(30)
  061ca88  mulli 29, 31, 104
  061ca8c  lwz 9, 0(26)
  061ca90  add 9, 29, 9
  061ca94  addi 29, 29, 104
  061ca98  clrldi 9, 9, 32
  061ca9c  lwz 0, 96(9)
  061caa0  cmpwi 7, 0, 0
  061caa4  clrldi 3, 0, 32
  061caa8  bt 30, 0x61cae0
  061caac  bl 0x62b028
  061cab0  nop
  061cab4  extsw 0, 28
  061cab8  clrlwi 3, 3, 24
  061cabc  clrlwi 9, 31, 27
  061cac0  cmpwi 7, 3, 0
  061cac4  add 11, 1, 0
  061cac8  li 0, 1
  061cacc  slw 9, 0, 9
  061cad0  bt 30, 0x61cae0
  061cad4  lwz 0, 112(11)
  061cad8  or 0, 0, 9
  061cadc  stw 0, 112(11)
  061cae0  addi 31, 31, 1
  061cae4  cmplw 7, 31, 27
  061cae8  bf 28, 0x61caf8
  061caec  lwz 0, 0(24)
  061caf0  cmplw 7, 0, 31
  061caf4  bt 29, 0x61ca8c
  061caf8  slwi 9, 25, 5
  061cafc  addi 25, 25, 1
  061cb00  addi 27, 9, 64
  061cb04  lwz 9, 0(24)
  061cb08  addi 0, 28, 4
  061cb0c  addi 9, 9, 31
  061cb10  add 11, 0, 23
  061cb14  srawi 9, 9, 5
  061cb18  addze 9, 9
  061cb1c  addi 31, 27, -32
  061cb20  cmplw 7, 9, 25
  061cb24  clrldi 10, 11, 32
  061cb28  cmplw 6, 31, 27
  061cb2c  addi 11, 11, 4
  061cb30  addi 9, 27, 32
  061cb34  bf 29, 0x61cb78
  061cb38  li 0, 0
  061cb3c  stw 0, 0(10)
  061cb40  bt 24, 0x61ca74
  061cb44  mr 27, 9
  061cb48  lwz 9, 0(24)
  061cb4c  addi 25, 25, 1
  061cb50  addi 9, 9, 31
  061cb54  addi 31, 27, -32
  061cb58  srawi 9, 9, 5
  061cb5c  addze 9, 9
  061cb60  clrldi 10, 11, 32
  061cb64  cmplw 7, 9, 25
  061cb68  cmplw 6, 31, 27
  061cb6c  addi 11, 11, 4
  061cb70  addi 9, 27, 32
  061cb74  bt 29, 0x61cb38
  061cb78  mr 3, 23
  061cb7c  bl 0x620e68
  061cb80  nop
  061cb84  bl 0x61bd9c
  061cb88  nop
  061cb8c  lwz 27, -32752(30)
  061cb90  lwz 26, -32748(30)
  061cb94  lwz 9, 0(22)
  061cb98  lfs 31, -32744(30)
  061cb9c  lwz 3, 0(27)
  061cba0  lfs 13, 0(26)
  061cba4  std 9, 176(1)
  061cba8  fmuls 13, 13, 31
  061cbac  lfd 0, 176(1)
  061cbb0  std 3, 176(1)
  061cbb4  fcfid 0, 0
  061cbb8  lfd 11, 176(1)
  061cbbc  fcfid 11, 11
  061cbc0  frsp 12, 0
  061cbc4  frsp 0, 11
  061cbc8  fdivs 13, 0, 13
  061cbcc  fcmpu 7, 12, 13
  061cbd0  bf 29, 0x61ccf8
  061cbd4  lwz 31, -32768(30)
  061cbd8  lwz 28, -32724(30)
  061cbdc  lwz 25, -32736(30)
  061cbe0  mr 23, 31
  061cbe4  lwz 24, -32732(30)
  061cbe8  lwz 29, -32728(30)
  061cbec  lwz 0, 0(25)
  061cbf0  lwz 9, 0(31)
  061cbf4  cmpwi 7, 0, 0
  061cbf8  addi 9, 9, 1
  061cbfc  stw 9, 0(31)
  061cc00  bt 30, 0x61cc34
  061cc04  fmr 0, 13
  061cc08  clrldi 9, 0, 32
  061cc0c  lwz 0, 0(9)
  061cc10  std 2, 40(1)
  061cc14  mtctr 0
  061cc18  fctidz 0, 0
  061cc1c  stfd 0, 176(1)
  061cc20  ld 4, 176(1)
  061cc24  lwz 2, 4(9)
  061cc28  clrldi 4, 4, 32
  061cc2c  bctrl
  061cc30  ld 2, 40(1)
  061cc34  lwz 3, 0(22)
  061cc38  bl 0x61bb5c
  061cc3c  nop
  061cc40  lwz 11, 0(24)
  061cc44  cmpwi 7, 11, 0
  061cc48  bt 30, 0x61cc60
  061cc4c  lwz 0, 0(23)
  061cc50  divwu 9, 0, 11
  061cc54  mullw 9, 9, 11
  061cc58  cmpw 7, 0, 9
  061cc5c  bt 30, 0x61cd70
  061cc60  lwz 11, 0(29)
  061cc64  cmpwi 7, 11, 0
  061cc68  bt 30, 0x61cc80
  061cc6c  lwz 0, 0(31)
  061cc70  divwu 9, 0, 11
  061cc74  mullw 9, 9, 11
  061cc78  cmpw 7, 0, 9
  061cc7c  bt 30, 0x61cd64
  061cc80  lwz 11, 0(28)
  061cc84  cmpwi 7, 11, 0
  061cc88  bt 30, 0x61cca0
  061cc8c  lwz 0, 0(31)
  061cc90  divwu 9, 0, 11
  061cc94  mullw 9, 9, 11
  061cc98  cmpw 7, 0, 9
  061cc9c  bt 30, 0x61cd58
  061cca0  lwz 3, 0(27)
  061cca4  lwz 11, 0(22)
  061cca8  lfs 13, 0(26)
  061ccac  std 3, 176(1)
  061ccb0  fmuls 13, 13, 31
  061ccb4  lfd 0, 176(1)
  061ccb8  fcfid 0, 0
  061ccbc  frsp 12, 0
  061ccc0  fdivs 13, 12, 13
  061ccc4  fmr 0, 13
  061ccc8  fctidz 0, 0
  061cccc  stfd 0, 176(1)
  061ccd0  ld 9, 176(1)
  061ccd4  sub 11, 11, 9
  061ccd8  clrldi 0, 11, 32
  061ccdc  stw 11, 0(22)
  061cce0  std 0, 176(1)
  061cce4  lfd 11, 176(1)
  061cce8  fcfid 11, 11
  061ccec  frsp 0, 11
  061ccf0  fcmpu 7, 0, 13
  061ccf4  bt 29, 0x61cbec
  061ccf8  bl 0x61fa5c
  061ccfc  nop
  061cd00  bl 0x61de48
  061cd04  nop
  061cd08  bl 0x61870c
  061cd0c  nop
  061cd10  bl 0x6271f4
  061cd14  nop
  061cd18  ld 0, 304(1)
  061cd1c  ld 22, 200(1)
  061cd20  li 3, 0
  061cd24  ld 23, 208(1)
  061cd28  ld 24, 216(1)
  061cd2c  mtlr 0
  061cd30  ld 25, 224(1)
  061cd34  ld 26, 232(1)
  061cd38  ld 27, 240(1)
  061cd3c  ld 28, 248(1)
  061cd40  ld 29, 256(1)
  061cd44  ld 30, 264(1)
  061cd48  ld 31, 272(1)
  061cd4c  lfd 31, 280(1)
  061cd50  addi 1, 1, 288
  061cd54  blr
  061cd58  bl 0x6152a4
  061cd5c  nop
  061cd60  b 0x61cca0
  061cd64  bl 0x61d100
  061cd68  nop
  061cd6c  b 0x61cc80
  061cd70  bl 0x617084
  061cd74  nop
  061cd78  b 0x61cc60

FUN_0061cd7c:   # 0x61cd7c, 0x4c bytes
  061cd7c  stdu 1, -144(1)
  061cd80  mflr 0
  061cd84  std 30, 128(1)
  061cd88  lwz 30, -29448(2)
  061cd8c  std 0, 160(1)
  061cd90  std 29, 120(1)
  061cd94  mr 29, 3
  061cd98  bl 0x6272e8
  061cd9c  nop
  061cda0  lwz 9, -32736(30)
  061cda4  stw 29, 0(9)
  061cda8  bl 0x6271f4
  061cdac  nop
  061cdb0  ld 0, 160(1)
  061cdb4  ld 29, 120(1)
  061cdb8  ld 30, 128(1)
  061cdbc  mtlr 0
  061cdc0  addi 1, 1, 144
  061cdc4  blr

FUN_0061cdc8:   # 0x61cdc8, 0x78 bytes
  061cdc8  stdu 1, -128(1)
  061cdcc  mflr 0
  061cdd0  std 30, 112(1)
  061cdd4  lwz 30, -29444(2)
  061cdd8  std 31, 120(1)
  061cddc  std 0, 144(1)
  061cde0  lwz 31, -32768(30)
  061cde4  lwz 0, 0(31)
  061cde8  cmpwi 7, 0, 0
  061cdec  clrldi 3, 0, 32
  061cdf0  bt 30, 0x61ce1c
  061cdf4  lwz 9, -32764(30)
  061cdf8  lwz 11, 0(9)
  061cdfc  lwz 0, 0(11)
  061ce00  std 2, 40(1)
  061ce04  mtctr 0
  061ce08  lwz 2, 4(11)
  061ce0c  bctrl
  061ce10  ld 2, 40(1)
  061ce14  li 0, 0
  061ce18  stw 0, 0(31)
  061ce1c  lwz 9, -32760(30)
  061ce20  li 0, 0
  061ce24  ld 30, 112(1)
  061ce28  ld 31, 120(1)
  061ce2c  stw 0, 0(9)
  061ce30  ld 0, 144(1)
  061ce34  addi 1, 1, 128
  061ce38  mtlr 0
  061ce3c  blr

FUN_0061ce40:   # 0x61ce40, 0x2c bytes
  061ce40  std 30, -16(1)
  061ce44  lwz 30, -29444(2)
  061ce48  mulli 3, 3, 104
  061ce4c  lwz 9, -32768(30)
  061ce50  ld 30, -16(1)
  061ce54  lwz 0, 0(9)
  061ce58  add 3, 3, 0
  061ce5c  clrldi 3, 3, 32
  061ce60  lwz 3, 16(3)
  061ce64  extsw 3, 3
  061ce68  blr

FUN_0061ce6c:   # 0x61ce6c, 0x40 bytes
  061ce6c  std 30, -16(1)
  061ce70  lwz 30, -29444(2)
  061ce74  mulli 3, 3, 104
  061ce78  lwz 9, -32768(30)
  061ce7c  lwz 0, 0(9)
  061ce80  li 9, -1
  061ce84  add 3, 3, 0
  061ce88  clrldi 3, 3, 32
  061ce8c  lwz 0, 16(3)
  061ce90  cmpwi 7, 0, 0
  061ce94  bt 30, 0x61cea0
  061ce98  lbz 0, 11(3)
  061ce9c  extsb 9, 0
  061cea0  extsw 3, 9
  061cea4  ld 30, -16(1)
  061cea8  blr

FUN_0061ceac:   # 0x61ceac, 0x4c bytes
  061ceac  std 30, -16(1)
  061ceb0  lwz 30, -29444(2)
  061ceb4  lwz 9, -32752(30)
  061ceb8  lwz 11, 0(9)
  061cebc  addi 11, 11, 31
  061cec0  srawi 11, 11, 5
  061cec4  addze 11, 11
  061cec8  cmpwi 7, 11, 0
  061cecc  bf 29, 0x61cef0
  061ced0  clrldi 11, 11, 32
  061ced4  lwz 10, -32756(30)
  061ced8  li 0, -1
  061cedc  mtctr 11
  061cee0  clrldi 9, 10, 32
  061cee4  addi 10, 10, 4
  061cee8  stw 0, 0(9)
  061ceec  bdnz 0x61cee0
  061cef0  ld 30, -16(1)
  061cef4  blr

FUN_0061cef8:   # 0x61cef8, 0x20 bytes
  061cef8  std 30, -16(1)
  061cefc  lwz 30, -29444(2)
  061cf00  slwi 3, 3, 2
  061cf04  extsw 3, 3
  061cf08  lwz 9, -32748(30)
  061cf0c  ld 30, -16(1)
  061cf10  lwzx 3, 9, 3
  061cf14  blr

FUN_0061cf18:   # 0x61cf18, 0x20 bytes
  061cf18  std 30, -16(1)
  061cf1c  lwz 30, -29444(2)
  061cf20  slwi 3, 3, 2
  061cf24  extsw 3, 3
  061cf28  lwz 9, -32744(30)
  061cf2c  ld 30, -16(1)
  061cf30  lwzx 3, 9, 3
  061cf34  blr

FUN_0061cf38:   # 0x61cf38, 0x30 bytes
  061cf38  std 30, -16(1)
  061cf3c  lwz 30, -29444(2)
  061cf40  slwi 3, 3, 2
  061cf44  extsw 3, 3
  061cf48  lwz 11, -32736(30)
  061cf4c  lwz 9, -32740(30)
  061cf50  ld 30, -16(1)
  061cf54  lwzx 0, 11, 3
  061cf58  lwzx 3, 9, 3
  061cf5c  sub 3, 3, 0
  061cf60  clrldi 3, 3, 32
  061cf64  blr

FUN_0061cf68:   # 0x61cf68, 0x20 bytes
  061cf68  std 30, -16(1)
  061cf6c  lwz 30, -29444(2)
  061cf70  slwi 3, 3, 2
  061cf74  extsw 3, 3
  061cf78  lwz 9, -32740(30)
  061cf7c  ld 30, -16(1)
  061cf80  lwzx 3, 9, 3
  061cf84  blr

FUN_0061cf88:   # 0x61cf88, 0x20 bytes
  061cf88  std 30, -16(1)
  061cf8c  lwz 30, -29444(2)
  061cf90  lwz 11, -32732(30)
  061cf94  ld 30, -16(1)
  061cf98  lwz 9, 0(11)
  061cf9c  addi 9, 9, 1
  061cfa0  stw 9, 0(11)
  061cfa4  blr

FUN_0061cfa8:   # 0x61cfa8, 0x28 bytes
  061cfa8  std 30, -16(1)
  061cfac  lwz 30, -29444(2)
  061cfb0  lwz 11, -32732(30)
  061cfb4  lwz 9, 0(11)
  061cfb8  cmpwi 7, 9, 0
  061cfbc  addi 0, 9, -1
  061cfc0  bf 29, 0x61cfc8
  061cfc4  stw 0, 0(11)
  061cfc8  ld 30, -16(1)
  061cfcc  blr

FUN_0061cfd0:   # 0x61cfd0, 0x20 bytes
  061cfd0  std 30, -16(1)
  061cfd4  lwz 30, -29444(2)
  061cfd8  lwz 11, -32728(30)
  061cfdc  ld 30, -16(1)
  061cfe0  lwz 9, 0(11)
  061cfe4  addi 9, 9, 1
  061cfe8  stw 9, 0(11)
  061cfec  blr

FUN_0061cff0:   # 0x61cff0, 0x28 bytes
  061cff0  std 30, -16(1)
  061cff4  lwz 30, -29444(2)
  061cff8  lwz 11, -32728(30)
  061cffc  lwz 9, 0(11)
  061d000  cmpwi 7, 9, 0
  061d004  addi 0, 9, -1
  061d008  bf 29, 0x61d010
  061d00c  stw 0, 0(11)
  061d010  ld 30, -16(1)
  061d014  blr

FUN_0061d018:   # 0x61d018, 0x74 bytes
  061d018  cmpdi 3, 0
  061d01c  bt 2, 0x61d074
  061d020  lwz 0, 4(3)
  061d024  rlwinm 0, 0, 0, 12, 12
  061d028  cmpwi 7, 0, 0
  061d02c  bf 30, 0x61d080
  061d030  lwz 3, 552(3)
  061d034  cmpwi 7, 3, 0
  061d038  bt 30, 0x61d074
  061d03c  clrldi 9, 3, 32
  061d040  lwz 0, 4(9)
  061d044  rlwinm 0, 0, 0, 12, 12
  061d048  cmpwi 7, 0, 0
  061d04c  bt 30, 0x61d064
  061d050  b 0x61d080
  061d054  lwz 0, 4(9)
  061d058  rlwinm 0, 0, 0, 12, 12
  061d05c  cmpwi 7, 0, 0
  061d060  bf 30, 0x61d080
  061d064  lwz 3, 552(9)
  061d068  cmpwi 7, 3, 0
  061d06c  clrldi 9, 3, 32
  061d070  bf 30, 0x61d054
  061d074  li 3, 0
  061d078  extsw 3, 3
  061d07c  blr
  061d080  li 3, 1
  061d084  extsw 3, 3
  061d088  blr

FUN_0061d08c:   # 0x61d08c, 0x74 bytes
  061d08c  cmpdi 3, 0
  061d090  bt 2, 0x61d0e8
  061d094  lwz 0, 4(3)
  061d098  rlwinm 0, 0, 0, 11, 11
  061d09c  cmpwi 7, 0, 0
  061d0a0  bf 30, 0x61d0f4
  061d0a4  lwz 3, 552(3)
  061d0a8  cmpwi 7, 3, 0
  061d0ac  bt 30, 0x61d0e8
  061d0b0  clrldi 9, 3, 32
  061d0b4  lwz 0, 4(9)
  061d0b8  rlwinm 0, 0, 0, 11, 11
  061d0bc  cmpwi 7, 0, 0
  061d0c0  bt 30, 0x61d0d8
  061d0c4  b 0x61d0f4
  061d0c8  lwz 0, 4(9)
  061d0cc  rlwinm 0, 0, 0, 11, 11
  061d0d0  cmpwi 7, 0, 0
  061d0d4  bf 30, 0x61d0f4
  061d0d8  lwz 3, 552(9)
  061d0dc  cmpwi 7, 3, 0
  061d0e0  clrldi 9, 3, 32
  061d0e4  bf 30, 0x61d0c8
  061d0e8  li 3, 0
  061d0ec  extsw 3, 3
  061d0f0  blr
  061d0f4  li 3, 1
  061d0f8  extsw 3, 3
  061d0fc  blr

FUN_0061d100:   # 0x61d100, 0x248 bytes
  061d100  std 30, -16(1)
  061d104  lwz 30, -29444(2)
  061d108  li 0, 32
  061d10c  li 11, 0
  061d110  addi 4, 1, -192
  061d114  mtctr 0
  061d118  std 26, -48(1)
  061d11c  std 27, -40(1)
  061d120  std 28, -32(1)
  061d124  std 29, -24(1)
  061d128  std 31, -8(1)
  061d12c  lfs 0, -32720(30)
  061d130  add 9, 11, 4
  061d134  addi 11, 11, 4
  061d138  clrldi 9, 9, 32
  061d13c  stfs 0, 0(9)
  061d140  bdnz 0x61d130
  061d144  lwz 26, -32712(30)
  061d148  lwz 12, 0(26)
  061d14c  cmpwi 7, 12, 0
  061d150  bt 30, 0x61d24c
  061d154  li 31, 0
  061d158  lfs 12, -32704(30)
  061d15c  lwz 29, -32744(30)
  061d160  lis 27, 1
  061d164  ori 31, 31, 65535
  061d168  lwz 28, -32708(30)
  061d16c  clrldi 5, 12, 32
  061d170  lwz 0, 36(5)
  061d174  clrlwi 0, 0, 31
  061d178  cmpwi 7, 0, 0
  061d17c  bf 30, 0x61d2c0
  061d180  lwz 0, 4(5)
  061d184  slwi 0, 0, 2
  061d188  extsw 0, 0
  061d18c  lwzx 11, 28, 0
  061d190  lwzx 9, 29, 0
  061d194  cmplw 7, 9, 11
  061d198  bf 29, 0x61d2c0
  061d19c  lwz 9, 32(5)
  061d1a0  lwz 11, 12(5)
  061d1a4  cmpw 7, 9, 11
  061d1a8  bf 29, 0x61d31c
  061d1ac  lwz 0, 20(5)
  061d1b0  sub 0, 9, 0
  061d1b4  cmpw 7, 0, 11
  061d1b8  stw 0, 32(5)
  061d1bc  bt 28, 0x61d2e4
  061d1c0  lwz 3, 32(5)
  061d1c4  li 8, 0
  061d1c8  lwz 7, 8(5)
  061d1cc  li 10, 0
  061d1d0  extsw 0, 3
  061d1d4  li 6, 1
  061d1d8  std 0, -64(1)
  061d1dc  lfd 13, -64(1)
  061d1e0  li 0, 32
  061d1e4  fcfid 13, 13
  061d1e8  mtctr 0
  061d1ec  frsp 0, 13
  061d1f0  fmuls 13, 0, 12
  061d1f4  add 0, 10, 4
  061d1f8  slw 9, 6, 8
  061d1fc  clrldi 11, 0, 32
  061d200  and 0, 9, 7
  061d204  addi 8, 8, 1
  061d208  cmpwi 0, 0
  061d20c  addi 10, 10, 4
  061d210  bt 2, 0x61d224
  061d214  lfs 0, 0(11)
  061d218  fcmpu 7, 0, 13
  061d21c  bf 29, 0x61d224
  061d220  stfs 13, 0(11)
  061d224  bdnz 0x61d1f4
  061d228  lwz 0, 36(5)
  061d22c  clrlwi 0, 0, 31
  061d230  cmpwi 7, 0, 0
  061d234  bt 30, 0x61d240
  061d238  cmpw 7, 3, 27
  061d23c  bt 30, 0x61d2ec
  061d240  lwz 12, 40(5)
  061d244  cmpwi 7, 12, 0
  061d248  bf 30, 0x61d16c
  061d24c  lwz 3, -32696(30)
  061d250  li 0, 32
  061d254  lwz 7, -32724(30)
  061d258  mr 11, 4
  061d25c  li 8, 0
  061d260  mtctr 0
  061d264  li 5, 1
  061d268  lwz 6, 0(3)
  061d26c  clrldi 10, 7, 32
  061d270  clrldi 9, 11, 32
  061d274  slw 0, 5, 8
  061d278  addi 11, 11, 4
  061d27c  addi 8, 8, 1
  061d280  lfs 0, 0(10)
  061d284  addi 7, 7, 4
  061d288  lfs 13, 0(9)
  061d28c  fcmpu 7, 0, 13
  061d290  bt 30, 0x61d298
  061d294  or 6, 6, 0
  061d298  stfs 13, 0(10)
  061d29c  bdnz 0x61d26c
  061d2a0  ld 26, -48(1)
  061d2a4  ld 27, -40(1)
  061d2a8  ld 28, -32(1)
  061d2ac  ld 29, -24(1)
  061d2b0  ld 30, -16(1)
  061d2b4  ld 31, -8(1)
  061d2b8  stw 6, 0(3)
  061d2bc  blr
  061d2c0  lwz 9, 32(5)
  061d2c4  cmpw 7, 9, 31
  061d2c8  bt 29, 0x61d1c0
  061d2cc  lwz 0, 28(5)
  061d2d0  lis 11, 1
  061d2d4  add 0, 9, 0
  061d2d8  cmplw 7, 0, 11
  061d2dc  stw 0, 32(5)
  061d2e0  bf 29, 0x61d1c0
  061d2e4  stw 11, 32(5)
  061d2e8  b 0x61d1c0
  061d2ec  lwz 0, 0(26)
  061d2f0  cmpw 7, 12, 0
  061d2f4  bt 30, 0x61d33c
  061d2f8  clrldi 9, 0, 32
  061d2fc  lwz 0, 40(9)
  061d300  cmpwi 7, 0, 0
  061d304  cmpw 6, 12, 0
  061d308  bt 30, 0x61d240
  061d30c  bf 26, 0x61d2f8
  061d310  lwz 0, 40(5)
  061d314  stw 0, 40(9)
  061d318  b 0x61d240
  061d31c  bf 28, 0x61d1c0
  061d320  lwz 0, 28(5)
  061d324  add 0, 9, 0
  061d328  cmpw 7, 0, 11
  061d32c  stw 0, 32(5)
  061d330  bf 29, 0x61d1c0
  061d334  stw 11, 32(5)
  061d338  b 0x61d1c0
  061d33c  lwz 0, 40(5)
  061d340  stw 0, 0(26)
  061d344  b 0x61d240

FUN_0061d348:   # 0x61d348, 0x40 bytes
  061d348  std 30, -16(1)
  061d34c  lwz 30, -29444(2)
  061d350  li 9, 32
  061d354  li 10, 0
  061d358  mtctr 9
  061d35c  lwz 0, -32692(30)
  061d360  add 9, 10, 0
  061d364  add 11, 10, 3
  061d368  clrldi 9, 9, 32
  061d36c  clrldi 11, 11, 32
  061d370  addi 10, 10, 4
  061d374  lfs 0, 0(9)
  061d378  stfs 0, 0(11)
  061d37c  bdnz 0x61d360
  061d380  ld 30, -16(1)
  061d384  blr

FUN_0061d388:   # 0x61d388, 0x18 bytes
  061d388  std 30, -16(1)
  061d38c  lwz 30, -29444(2)
  061d390  lwz 9, -32688(30)
  061d394  ld 30, -16(1)
  061d398  lfs 1, 0(9)
  061d39c  blr

FUN_0061d3a0:   # 0x61d3a0, 0x338 bytes
  061d3a0  cmpwi 7, 3, 0
  061d3a4  mflr 0
  061d3a8  stdu 1, -176(1)
  061d3ac  std 26, 128(1)
  061d3b0  std 27, 136(1)
  061d3b4  std 28, 144(1)
  061d3b8  std 29, 152(1)
  061d3bc  std 30, 160(1)
  061d3c0  std 31, 168(1)
  061d3c4  std 0, 192(1)
  061d3c8  lwz 30, -29444(2)
  061d3cc  mr 31, 3
  061d3d0  mr 26, 4
  061d3d4  mr 27, 5
  061d3d8  mr 29, 4
  061d3dc  mr 28, 5
  061d3e0  bt 28, 0x61d404
  061d3e4  lwz 9, -32752(30)
  061d3e8  lwz 0, 0(9)
  061d3ec  cmpw 7, 3, 0
  061d3f0  bf 28, 0x61d404
  061d3f4  cmpwi 6, 4, 0
  061d3f8  bt 26, 0x61d404
  061d3fc  cmpwi 1, 5, 0
  061d400  bf 6, 0x61d43c
  061d404  lwz 3, -32684(30)
  061d408  li 5, 2266
  061d40c  lwz 4, -32680(30)
  061d410  bl 0x61948c
  061d414  nop
  061d418  lwz 9, -32676(30)
  061d41c  lbz 0, 0(9)
  061d420  cmpwi 7, 0, 0
  061d424  bf 30, 0x61d52c
  061d428  lwz 9, -32672(30)
  061d42c  cmpwi 6, 29, 0
  061d430  cmpwi 1, 28, 0
  061d434  lbz 0, 0(9)
  061d438  twnei 0, 0
  061d43c  lwz 11, -32768(30)
  061d440  mulli 0, 31, 104
  061d444  lwz 9, 0(11)
  061d448  add 0, 0, 9
  061d44c  clrldi 3, 0, 32
  061d450  lwz 0, 40(3)
  061d454  lwz 8, 56(3)
  061d458  cmpwi 7, 0, 0
  061d45c  lwz 5, 64(3)
  061d460  mr 7, 8
  061d464  bt 30, 0x61d51c
  061d468  clrldi 6, 0, 32
  061d46c  lwz 7, 300(6)
  061d470  cmpwi 7, 7, 0
  061d474  bt 28, 0x61d4d0
  061d478  lwz 10, 304(6)
  061d47c  cmpwi 7, 10, 0
  061d480  bt 28, 0x61d5e4
  061d484  cmpwi 7, 8, 0
  061d488  bt 28, 0x61d5ec
  061d48c  lwz 0, 4(6)
  061d490  lwz 11, 308(6)
  061d494  rlwinm 0, 0, 0, 15, 15
  061d498  lwz 9, 312(6)
  061d49c  add 11, 10, 11
  061d4a0  cmpwi 7, 0, 0
  061d4a4  add 9, 8, 9
  061d4a8  add 11, 11, 9
  061d4ac  bf 30, 0x61d554
  061d4b0  add 11, 11, 7
  061d4b4  lis 0, 5825
  061d4b8  srwi 9, 11, 3
  061d4bc  ori 0, 0, 27671
  061d4c0  mulhwu 9, 9, 0
  061d4c4  srwi 7, 9, 2
  061d4c8  mulli 0, 7, 360
  061d4cc  sub 7, 11, 0
  061d4d0  lbz 0, 16(6)
  061d4d4  lwz 11, -32652(30)
  061d4d8  extsb 0, 0
  061d4dc  slwi 0, 0, 2
  061d4e0  extsw 0, 0
  061d4e4  lwzx 9, 11, 0
  061d4e8  rlwinm 9, 9, 0, 28, 28
  061d4ec  cmpwi 7, 9, 0
  061d4f0  bt 30, 0x61d500
  061d4f4  cmpwi 7, 7, 0
  061d4f8  bt 28, 0x61d5f4
  061d4fc  subfic 7, 7, 360
  061d500  lwz 0, 316(6)
  061d504  add 5, 5, 0
  061d508  cmpwi 7, 5, 0
  061d50c  bt 28, 0x61d5dc
  061d510  cmplwi 7, 5, 360
  061d514  bf 29, 0x61d51c
  061d518  li 5, 360
  061d51c  bt 26, 0x61d524
  061d520  stw 7, 0(26)
  061d524  bt 6, 0x61d52c
  061d528  stw 5, 0(27)
  061d52c  ld 0, 192(1)
  061d530  ld 26, 128(1)
  061d534  ld 27, 136(1)
  061d538  mtlr 0
  061d53c  ld 28, 144(1)
  061d540  ld 29, 152(1)
  061d544  ld 30, 160(1)
  061d548  ld 31, 168(1)
  061d54c  addi 1, 1, 176
  061d550  blr
  061d554  lbz 0, 10(3)
  061d558  lfs 13, 288(6)
  061d55c  lfs 0, 464(6)
  061d560  extsb 0, 0
  061d564  fmuls 0, 13, 0
  061d568  lwz 9, -32668(30)
  061d56c  slwi 0, 0, 2
  061d570  extsw 0, 0
  061d574  lfsx 11, 9, 0
  061d578  fcmpu 7, 11, 0
  061d57c  bf 29, 0x61d4b0
  061d580  lwz 9, -32664(30)
  061d584  lfsx 13, 9, 0
  061d588  fcmpu 7, 0, 13
  061d58c  cror 30, 28, 30
  061d590  bt 30, 0x61d66c
  061d594  cmplwi 7, 11, 180
  061d598  bf 29, 0x61d680
  061d59c  fsubs 12, 0, 13
  061d5a0  subfic 0, 11, 360
  061d5a4  fsubs 11, 11, 13
  061d5a8  lfs 13, -32660(30)
  061d5ac  clrldi 0, 0, 32
  061d5b0  std 0, 112(1)
  061d5b4  lfd 10, 112(1)
  061d5b8  fcfid 10, 10
  061d5bc  fdivs 12, 12, 11
  061d5c0  frsp 0, 10
  061d5c4  fmuls 0, 0, 12
  061d5c8  fsubs 13, 13, 0
  061d5cc  fctidz 13, 13
  061d5d0  stfd 13, 112(1)
  061d5d4  ld 11, 112(1)
  061d5d8  b 0x61d4b0
  061d5dc  li 5, 0
  061d5e0  b 0x61d51c
  061d5e4  mr 7, 10
  061d5e8  b 0x61d4d0
  061d5ec  mr 7, 8
  061d5f0  b 0x61d4d0
  061d5f4  lis 9, -32768
  061d5f8  ori 9, 9, 1
  061d5fc  cmpw 7, 7, 9
  061d600  bt 30, 0x61d674
  061d604  xoris 0, 7, 32768
  061d608  cmpwi 7, 0, 2
  061d60c  bt 30, 0x61d664
  061d610  lis 9, -32768
  061d614  ori 9, 9, 3
  061d618  cmpw 7, 7, 9
  061d61c  bt 30, 0x61d6b4
  061d620  xoris 0, 7, 32768
  061d624  cmpwi 7, 0, 4
  061d628  bt 30, 0x61d664
  061d62c  lis 9, -32768
  061d630  ori 9, 9, 7
  061d634  cmpw 7, 7, 9
  061d638  bt 30, 0x61d6c0
  061d63c  xoris 0, 7, 32768
  061d640  cmpwi 7, 0, 8
  061d644  bt 30, 0x61d664
  061d648  lis 9, -32768
  061d64c  ori 9, 9, 9
  061d650  cmpw 7, 7, 9
  061d654  bt 30, 0x61d6cc
  061d658  xoris 0, 7, 32768
  061d65c  cmpwi 7, 0, 10
  061d660  bf 30, 0x61d500
  061d664  mr 7, 9
  061d668  b 0x61d500
  061d66c  li 11, 0
  061d670  b 0x61d4b0
  061d674  lis 7, -32768
  061d678  ori 7, 7, 2
  061d67c  b 0x61d500
  061d680  fsubs 12, 11, 13
  061d684  clrldi 0, 11, 32
  061d688  fsubs 13, 0, 13
  061d68c  std 0, 112(1)
  061d690  lfd 11, 112(1)
  061d694  fcfid 11, 11
  061d698  fdivs 13, 13, 12
  061d69c  frsp 0, 11
  061d6a0  fmuls 0, 0, 13
  061d6a4  fctidz 0, 0
  061d6a8  stfd 0, 112(1)
  061d6ac  ld 11, 112(1)
  061d6b0  b 0x61d4b0
  061d6b4  lis 7, -32768
  061d6b8  ori 7, 7, 4
  061d6bc  b 0x61d500
  061d6c0  lis 7, -32768
  061d6c4  ori 7, 7, 8
  061d6c8  b 0x61d500
  061d6cc  lis 7, -32768
  061d6d0  ori 7, 7, 10
  061d6d4  b 0x61d500

FUN_0061d6d8:   # 0x61d6d8, 0x178 bytes
  061d6d8  cmpdi 3, 0
  061d6dc  mflr 0
  061d6e0  stdu 1, -192(1)
  061d6e4  stfd 30, 176(1)
  061d6e8  fmr 30, 2
  061d6ec  stfd 31, 184(1)
  061d6f0  fmr 31, 1
  061d6f4  std 29, 152(1)
  061d6f8  std 30, 160(1)
  061d6fc  std 31, 168(1)
  061d700  std 0, 208(1)
  061d704  lwz 30, -29444(2)
  061d708  mr 29, 3
  061d70c  mr 31, 4
  061d710  bt 2, 0x61d738
  061d714  extsb 11, 4
  061d718  cmpwi 7, 11, 0
  061d71c  bt 28, 0x61d738
  061d720  lfs 0, -32632(30)
  061d724  fcmpu 7, 1, 0
  061d728  bt 28, 0x61d738
  061d72c  lfs 13, -32720(30)
  061d730  fcmpu 7, 1, 13
  061d734  bf 29, 0x61d83c
  061d738  lwz 3, -32684(30)
  061d73c  li 5, 2055
  061d740  lwz 4, -32680(30)
  061d744  bl 0x61948c
  061d748  nop
  061d74c  lwz 9, -32676(30)
  061d750  li 3, 0
  061d754  lbz 0, 0(9)
  061d758  cmpwi 7, 0, 0
  061d75c  bf 30, 0x61d77c
  061d760  lwz 9, -32672(30)
  061d764  extsb 11, 31
  061d768  lbz 0, 0(9)
  061d76c  twnei 0, 0
  061d770  cmpwi 7, 11, 125
  061d774  bf 29, 0x61d7a4
  061d778  mr 3, 11
  061d77c  ld 0, 208(1)
  061d780  extsw 3, 3
  061d784  ld 29, 152(1)
  061d788  ld 30, 160(1)
  061d78c  mtlr 0
  061d790  ld 31, 168(1)
  061d794  lfd 30, 176(1)
  061d798  lfd 31, 184(1)
  061d79c  addi 1, 1, 192
  061d7a0  blr
  061d7a4  lfs 0, -32632(30)
  061d7a8  fcmpu 7, 30, 0
  061d7ac  bt 30, 0x61d778
  061d7b0  lbz 0, 16(29)
  061d7b4  mr 3, 11
  061d7b8  lfs 0, 288(29)
  061d7bc  lfs 13, 284(29)
  061d7c0  extsb 0, 0
  061d7c4  fmuls 13, 13, 0
  061d7c8  lwz 9, -32692(30)
  061d7cc  slwi 0, 0, 2
  061d7d0  lfs 12, 296(29)
  061d7d4  lfs 11, -32648(30)
  061d7d8  extsw 0, 0
  061d7dc  lfsx 0, 9, 0
  061d7e0  fmuls 0, 31, 0
  061d7e4  fmuls 13, 13, 12
  061d7e8  fmuls 1, 13, 0
  061d7ec  fcmpu 7, 1, 11
  061d7f0  cror 30, 29, 30
  061d7f4  bt 30, 0x61d77c
  061d7f8  lfs 0, -32640(30)
  061d7fc  extsw 0, 11
  061d800  addi 9, 1, 112
  061d804  fdivs 0, 1, 0
  061d808  std 0, 128(1)
  061d80c  lfd 12, 128(1)
  061d810  fcfid 12, 12
  061d814  fadds 0, 0, 11
  061d818  frsp 13, 12
  061d81c  fmuls 0, 30, 0
  061d820  fmuls 0, 0, 13
  061d824  fctiwz 0, 0
  061d828  stfiwx 0, 0, 9
  061d82c  lwz 0, 112(1)
  061d830  sub 0, 31, 0
  061d834  extsb 3, 0
  061d838  b 0x61d77c
  061d83c  fcmpu 7, 2, 0
  061d840  bt 28, 0x61d738
  061d844  fcmpu 7, 2, 13
  061d848  bt 29, 0x61d738
  061d84c  b 0x61d770

FUN_0061d850:   # 0x61d850, 0x264 bytes
  061d850  cmpwi 7, 3, 0
  061d854  mflr 0
  061d858  stdu 1, -144(1)
  061d85c  std 30, 128(1)
  061d860  std 31, 136(1)
  061d864  std 28, 112(1)
  061d868  std 29, 120(1)
  061d86c  std 0, 160(1)
  061d870  lwz 30, -29444(2)
  061d874  mr 31, 3
  061d878  bt 28, 0x61d9fc
  061d87c  lwz 9, -32752(30)
  061d880  lwz 0, 0(9)
  061d884  cmpw 7, 3, 0
  061d888  bf 28, 0x61d9fc
  061d88c  lwz 9, -32728(30)
  061d890  lwz 0, 0(9)
  061d894  cmpwi 7, 0, 0
  061d898  bf 30, 0x61da40
  061d89c  lwz 9, -32732(30)
  061d8a0  lwz 28, -32768(30)
  061d8a4  mulli 29, 31, 104
  061d8a8  lwz 0, 0(9)
  061d8ac  cmpwi 7, 0, 0
  061d8b0  bf 30, 0x61da78
  061d8b4  lwz 0, 0(28)
  061d8b8  add 0, 29, 0
  061d8bc  clrldi 31, 0, 32
  061d8c0  lwz 3, 40(31)
  061d8c4  cmpwi 7, 3, 0
  061d8c8  bt 30, 0x61d8e8
  061d8cc  lbz 4, 8(31)
  061d8d0  clrldi 3, 3, 32
  061d8d4  lfs 1, 48(31)
  061d8d8  extsb 4, 4
  061d8dc  lfs 2, 12(31)
  061d8e0  bl 0x61d6d8
  061d8e4  stb 3, 9(31)
  061d8e8  lwz 0, 0(28)
  061d8ec  lwz 11, -32692(30)
  061d8f0  add 0, 29, 0
  061d8f4  lwz 10, -32652(30)
  061d8f8  clrldi 3, 0, 32
  061d8fc  li 0, 32
  061d900  mtctr 0
  061d904  lbz 0, 10(3)
  061d908  extsb 0, 0
  061d90c  slwi 8, 0, 2
  061d910  extsw 9, 8
  061d914  lfsx 0, 11, 9
  061d918  b 0x61d920
  061d91c  bdz 0x61daa4
  061d920  clrldi 9, 10, 32
  061d924  addi 10, 10, 4
  061d928  lwz 0, 0(9)
  061d92c  rlwinm 0, 0, 0, 27, 27
  061d930  cmpwi 7, 0, 0
  061d934  bt 30, 0x61d91c
  061d938  li 10, 1
  061d93c  lwz 11, -32652(30)
  061d940  extsw 9, 8
  061d944  lwzx 9, 11, 9
  061d948  rlwinm 0, 9, 0, 26, 26
  061d94c  cmpwi 6, 0, 0
  061d950  bf 26, 0x61da9c
  061d954  cmpwi 7, 10, 0
  061d958  fmr 13, 0
  061d95c  bf 30, 0x61da9c
  061d960  rlwinm 0, 9, 0, 27, 27
  061d964  cmpwi 7, 0, 0
  061d968  bt 30, 0x61d970
  061d96c  bt 26, 0x61daac
  061d970  lfs 0, 48(3)
  061d974  extsw 0, 8
  061d978  fmuls 0, 13, 0
  061d97c  lwz 9, -32724(30)
  061d980  lwz 11, -32624(30)
  061d984  lwz 10, -32688(30)
  061d988  lwz 8, -32620(30)
  061d98c  lwz 3, 40(3)
  061d990  lfsx 13, 9, 0
  061d994  lfsx 11, 11, 0
  061d998  cmpwi 7, 3, 0
  061d99c  lfs 10, 0(10)
  061d9a0  lfs 12, 0(8)
  061d9a4  fmuls 0, 0, 13
  061d9a8  fmuls 0, 0, 11
  061d9ac  fmuls 0, 0, 10
  061d9b0  fmuls 1, 0, 12
  061d9b4  bt 30, 0x61d9dc
  061d9b8  clrldi 9, 3, 32
  061d9bc  lfs 0, 284(9)
  061d9c0  lfs 13, 288(9)
  061d9c4  fmuls 0, 0, 13
  061d9c8  lfs 11, 292(9)
  061d9cc  lfs 12, 296(9)
  061d9d0  fmuls 0, 0, 11
  061d9d4  fmuls 0, 0, 12
  061d9d8  fmuls 1, 1, 0
  061d9dc  ld 0, 160(1)
  061d9e0  ld 28, 112(1)
  061d9e4  ld 29, 120(1)
  061d9e8  mtlr 0
  061d9ec  ld 30, 128(1)
  061d9f0  ld 31, 136(1)
  061d9f4  addi 1, 1, 144
  061d9f8  blr
  061d9fc  lwz 3, -32684(30)
  061da00  li 5, 2193
  061da04  lwz 4, -32680(30)
  061da08  bl 0x61948c
  061da0c  nop
  061da10  lwz 9, -32676(30)
  061da14  lfs 1, -32632(30)
  061da18  lbz 0, 0(9)
  061da1c  cmpwi 7, 0, 0
  061da20  bf 30, 0x61d9dc
  061da24  lwz 9, -32672(30)
  061da28  lbz 0, 0(9)
  061da2c  twnei 0, 0
  061da30  lwz 9, -32728(30)
  061da34  lwz 0, 0(9)
  061da38  cmpwi 7, 0, 0
  061da3c  bt 30, 0x61d89c
  061da40  lwz 28, -32768(30)
  061da44  mulli 29, 31, 104
  061da48  lwz 9, 0(28)
  061da4c  add 9, 29, 9
  061da50  clrldi 9, 9, 32
  061da54  lwz 3, 40(9)
  061da58  bl 0x61d08c
  061da5c  lfs 1, -32632(30)
  061da60  cmpwi 7, 3, 0
  061da64  bf 30, 0x61d9dc
  061da68  lwz 9, -32732(30)
  061da6c  lwz 0, 0(9)
  061da70  cmpwi 7, 0, 0
  061da74  bt 30, 0x61d8b4
  061da78  lwz 9, 0(28)
  061da7c  add 9, 29, 9
  061da80  clrldi 9, 9, 32
  061da84  lwz 3, 40(9)
  061da88  bl 0x61d018
  061da8c  lfs 1, -32632(30)
  061da90  cmpwi 7, 3, 0
  061da94  bf 30, 0x61d8b4
  061da98  b 0x61d9dc
  061da9c  lfs 13, -32632(30)
  061daa0  b 0x61d960
  061daa4  li 10, 0
  061daa8  b 0x61d93c
  061daac  fmr 13, 0
  061dab0  b 0x61d970

FUN_0061dab4:   # 0x61dab4, 0xc0 bytes
  061dab4  cmplwi 7, 3, 32
  061dab8  mflr 0
  061dabc  stdu 1, -128(1)
  061dac0  std 30, 112(1)
  061dac4  std 31, 120(1)
  061dac8  std 0, 144(1)
  061dacc  lwz 30, -29444(2)
  061dad0  li 5, 1897
  061dad4  mr 31, 3
  061dad8  bt 29, 0x61db18
  061dadc  cmpwi 7, 31, 32
  061dae0  lfs 1, -32632(30)
  061dae4  cmpwi 6, 31, 30
  061dae8  bt 30, 0x61db58
  061daec  slwi 0, 31, 2
  061daf0  bt 25, 0x61db00
  061daf4  lwz 9, -32724(30)
  061daf8  extsw 0, 0
  061dafc  lfsx 1, 9, 0
  061db00  ld 0, 144(1)
  061db04  ld 30, 112(1)
  061db08  ld 31, 120(1)
  061db0c  mtlr 0
  061db10  addi 1, 1, 128
  061db14  blr
  061db18  lwz 3, -32684(30)
  061db1c  lwz 4, -32680(30)
  061db20  bl 0x61948c
  061db24  nop
  061db28  lwz 9, -32676(30)
  061db2c  lfs 1, -32632(30)
  061db30  lbz 0, 0(9)
  061db34  cmpwi 7, 0, 0
  061db38  bf 30, 0x61db00
  061db3c  lwz 9, -32672(30)
  061db40  cmpwi 7, 31, 32
  061db44  cmpwi 6, 31, 30
  061db48  lbz 0, 0(9)
  061db4c  twnei 0, 0
  061db50  lfs 1, -32632(30)
  061db54  bf 30, 0x61daec
  061db58  ld 0, 144(1)
  061db5c  lfs 1, -32720(30)
  061db60  ld 30, 112(1)
  061db64  mtlr 0
  061db68  ld 31, 120(1)
  061db6c  addi 1, 1, 128
  061db70  blr

FUN_0061db74:   # 0x61db74, 0xc4 bytes
  061db74  cmplwi 7, 3, 32
  061db78  mflr 0
  061db7c  stdu 1, -128(1)
  061db80  std 30, 112(1)
  061db84  std 31, 120(1)
  061db88  std 0, 144(1)
  061db8c  lwz 30, -29444(2)
  061db90  li 5, 1872
  061db94  mr 31, 3
  061db98  bt 29, 0x61dbd8
  061db9c  cmpwi 7, 31, 32
  061dba0  lfs 1, -32632(30)
  061dba4  cmpwi 6, 31, 30
  061dba8  bt 30, 0x61dc18
  061dbac  slwi 0, 31, 2
  061dbb0  bt 25, 0x61dbc0
  061dbb4  lwz 9, -32692(30)
  061dbb8  extsw 0, 0
  061dbbc  lfsx 1, 9, 0
  061dbc0  ld 0, 144(1)
  061dbc4  ld 30, 112(1)
  061dbc8  ld 31, 120(1)
  061dbcc  mtlr 0
  061dbd0  addi 1, 1, 128
  061dbd4  blr
  061dbd8  lwz 3, -32684(30)
  061dbdc  lwz 4, -32680(30)
  061dbe0  bl 0x61948c
  061dbe4  nop
  061dbe8  lwz 9, -32676(30)
  061dbec  lfs 1, -32632(30)
  061dbf0  lbz 0, 0(9)
  061dbf4  cmpwi 7, 0, 0
  061dbf8  bf 30, 0x61dbc0
  061dbfc  lwz 9, -32672(30)
  061dc00  cmpwi 7, 31, 32
  061dc04  cmpwi 6, 31, 30
  061dc08  lbz 0, 0(9)
  061dc0c  twnei 0, 0
  061dc10  lfs 1, -32632(30)
  061dc14  bf 30, 0x61dbac
  061dc18  lwz 9, -32688(30)
  061dc1c  ld 0, 144(1)
  061dc20  ld 30, 112(1)
  061dc24  ld 31, 120(1)
  061dc28  mtlr 0
  061dc2c  addi 1, 1, 128
  061dc30  lfs 1, 0(9)
  061dc34  blr

FUN_0061dc38:   # 0x61dc38, 0x210 bytes
  061dc38  cmpwi 7, 3, 0
  061dc3c  mflr 0
  061dc40  stdu 1, -192(1)
  061dc44  std 27, 152(1)
  061dc48  std 30, 176(1)
  061dc4c  std 22, 112(1)
  061dc50  std 23, 120(1)
  061dc54  std 24, 128(1)
  061dc58  std 25, 136(1)
  061dc5c  std 26, 144(1)
  061dc60  std 28, 160(1)
  061dc64  std 29, 168(1)
  061dc68  std 0, 208(1)
  061dc6c  lwz 30, -29444(2)
  061dc70  mr 27, 3
  061dc74  bt 28, 0x61de14
  061dc78  lwz 9, -32752(30)
  061dc7c  lwz 0, 0(9)
  061dc80  cmpw 7, 3, 0
  061dc84  bf 28, 0x61de14
  061dc88  lwz 9, -32768(30)
  061dc8c  srawi 0, 27, 5
  061dc90  addze 0, 0
  061dc94  lwz 29, -32616(30)
  061dc98  lwz 3, -32612(30)
  061dc9c  li 5, 1
  061dca0  slwi 11, 0, 2
  061dca4  lwz 28, -32608(30)
  061dca8  lwz 6, 0(9)
  061dcac  slwi 0, 0, 5
  061dcb0  extsw 11, 11
  061dcb4  lfs 0, -32720(30)
  061dcb8  sub 0, 27, 0
  061dcbc  li 8, 0
  061dcc0  li 10, -1
  061dcc4  slw 5, 5, 0
  061dcc8  li 0, -1
  061dccc  not 7, 5
  061dcd0  li 4, 0
  061dcd4  mulli 9, 27, 104
  061dcd8  add 9, 9, 6
  061dcdc  clrldi 9, 9, 32
  061dce0  stw 8, 100(9)
  061dce4  stb 8, 10(9)
  061dce8  stw 8, 16(9)
  061dcec  stw 8, 24(9)
  061dcf0  stw 8, 32(9)
  061dcf4  stw 8, 36(9)
  061dcf8  stw 8, 56(9)
  061dcfc  stw 8, 64(9)
  061dd00  stb 10, 11(9)
  061dd04  stw 0, 28(9)
  061dd08  stb 10, 8(9)
  061dd0c  stb 10, 9(9)
  061dd10  lwzx 10, 29, 11
  061dd14  lwzx 0, 3, 11
  061dd18  lwzx 6, 28, 11
  061dd1c  or 10, 10, 5
  061dd20  and 0, 0, 7
  061dd24  stfs 0, 88(9)
  061dd28  and 6, 7, 6
  061dd2c  stfs 0, 80(9)
  061dd30  stwx 0, 3, 11
  061dd34  stwx 10, 29, 11
  061dd38  stw 4, 72(9)
  061dd3c  stw 8, 0(9)
  061dd40  stw 4, 12(9)
  061dd44  stw 8, 40(9)
  061dd48  stw 8, 44(9)
  061dd4c  stw 4, 48(9)
  061dd50  stw 8, 92(9)
  061dd54  stfs 0, 84(9)
  061dd58  stw 8, 96(9)
  061dd5c  stwx 6, 28, 11
  061dd60  lwz 29, -32580(30)
  061dd64  lwz 28, -32604(30)
  061dd68  lwz 27, -32600(30)
  061dd6c  lwz 26, -32596(30)
  061dd70  lwz 25, -32592(30)
  061dd74  lwz 24, -32756(30)
  061dd78  lwz 23, -32588(30)
  061dd7c  lwz 22, -32584(30)
  061dd80  lwzx 9, 28, 11
  061dd84  lwzx 10, 27, 11
  061dd88  lwzx 8, 26, 11
  061dd8c  and 9, 7, 9
  061dd90  lwzx 6, 25, 11
  061dd94  and 10, 7, 10
  061dd98  lwzx 5, 24, 11
  061dd9c  and 8, 7, 8
  061dda0  lwzx 4, 23, 11
  061dda4  and 6, 7, 6
  061dda8  lwzx 3, 22, 11
  061ddac  and 5, 7, 5
  061ddb0  lwzx 0, 29, 11
  061ddb4  and 4, 7, 4
  061ddb8  stwx 9, 28, 11
  061ddbc  and 0, 7, 0
  061ddc0  and 7, 7, 3
  061ddc4  stwx 0, 29, 11
  061ddc8  stwx 10, 27, 11
  061ddcc  stwx 8, 26, 11
  061ddd0  stwx 6, 25, 11
  061ddd4  stwx 5, 24, 11
  061ddd8  stwx 4, 23, 11
  061dddc  stwx 7, 22, 11
  061dde0  ld 0, 208(1)
  061dde4  ld 22, 112(1)
  061dde8  ld 23, 120(1)
  061ddec  mtlr 0
  061ddf0  ld 24, 128(1)
  061ddf4  ld 25, 136(1)
  061ddf8  ld 26, 144(1)
  061ddfc  ld 27, 152(1)
  061de00  ld 28, 160(1)
  061de04  ld 29, 168(1)
  061de08  ld 30, 176(1)
  061de0c  addi 1, 1, 192
  061de10  blr
  061de14  lwz 3, -32684(30)
  061de18  li 5, 177
  061de1c  lwz 4, -32680(30)
  061de20  bl 0x61948c
  061de24  nop
  061de28  lwz 9, -32676(30)
  061de2c  lbz 0, 0(9)
  061de30  cmpwi 7, 0, 0
  061de34  bf 30, 0x61dde0
  061de38  lwz 9, -32672(30)
  061de3c  lbz 0, 0(9)
  061de40  twnei 0, 0
  061de44  b 0x61dc88

FUN_0061de48:   # 0x61de48, 0x600 bytes
  061de48  stdu 1, -288(1)
  061de4c  mflr 0
  061de50  std 30, 272(1)
  061de54  lwz 30, -29444(2)
  061de58  std 23, 216(1)
  061de5c  std 0, 304(1)
  061de60  std 14, 144(1)
  061de64  std 15, 152(1)
  061de68  std 16, 160(1)
  061de6c  std 17, 168(1)
  061de70  std 18, 176(1)
  061de74  std 19, 184(1)
  061de78  std 20, 192(1)
  061de7c  std 21, 200(1)
  061de80  std 22, 208(1)
  061de84  std 24, 224(1)
  061de88  std 25, 232(1)
  061de8c  std 26, 240(1)
  061de90  std 27, 248(1)
  061de94  std 28, 256(1)
  061de98  std 29, 264(1)
  061de9c  std 31, 280(1)
  061dea0  bl 0x6272e8
  061dea4  nop
  061dea8  lwz 23, -32752(30)
  061deac  lwz 0, 0(23)
  061deb0  cmpwi 7, 0, 0
  061deb4  bf 29, 0x61e324
  061deb8  li 29, 0
  061debc  lwz 20, -32596(30)
  061dec0  li 31, 0
  061dec4  lwz 19, -32592(30)
  061dec8  lwz 25, -32680(30)
  061decc  lwz 18, -32676(30)
  061ded0  lwz 17, -32672(30)
  061ded4  lwz 21, -32616(30)
  061ded8  lwz 24, -32612(30)
  061dedc  lwz 22, -32608(30)
  061dee0  b 0x61df44
  061dee4  add 11, 31, 21
  061dee8  add 8, 31, 24
  061deec  clrldi 11, 11, 32
  061def0  clrldi 8, 8, 32
  061def4  add 10, 31, 22
  061def8  mr 27, 21
  061defc  clrldi 10, 10, 32
  061df00  lwz 0, 0(11)
  061df04  mr 26, 24
  061df08  lwz 9, 0(8)
  061df0c  mr 28, 22
  061df10  and 0, 0, 9
  061df14  lwz 11, 0(10)
  061df18  and 8, 0, 11
  061df1c  cmpwi 8, 0
  061df20  bf 2, 0x61dfac
  061df24  lwz 9, 0(23)
  061df28  addi 29, 29, 1
  061df2c  addi 31, 31, 4
  061df30  addi 0, 9, 31
  061df34  srawi 0, 0, 5
  061df38  addze 0, 0
  061df3c  cmpw 7, 0, 29
  061df40  bf 29, 0x61e00c
  061df44  add 9, 31, 20
  061df48  add 11, 31, 19
  061df4c  clrldi 9, 9, 32
  061df50  clrldi 11, 11, 32
  061df54  lwz 10, 0(9)
  061df58  lwz 0, 0(11)
  061df5c  and 8, 10, 0
  061df60  cmpwi 8, 0
  061df64  bt 2, 0x61dee4
  061df68  lwz 3, -32576(30)
  061df6c  mr 4, 25
  061df70  li 5, 2783
  061df74  bl 0x61948c
  061df78  nop
  061df7c  lwz 3, -32684(30)
  061df80  mr 4, 25
  061df84  li 5, 2784
  061df88  bl 0x61948c
  061df8c  nop
  061df90  lbz 0, 0(18)
  061df94  cmpwi 7, 0, 0
  061df98  bf 30, 0x61e32c
  061df9c  lbz 0, 0(17)
  061dfa0  cmpwi 7, 0, 0
  061dfa4  bt+ 30, 0x61dee4
  061dfa8  trap
  061dfac  lwz 3, -32572(30)
  061dfb0  mr 4, 25
  061dfb4  li 5, 2789
  061dfb8  bl 0x61948c
  061dfbc  nop
  061dfc0  lwz 3, -32684(30)
  061dfc4  mr 4, 25
  061dfc8  li 5, 2790
  061dfcc  bl 0x61948c
  061dfd0  nop
  061dfd4  lbz 0, 0(18)
  061dfd8  cmpwi 7, 0, 0
  061dfdc  bf 30, 0x61e32c
  061dfe0  lbz 0, 0(17)
  061dfe4  cmpwi 7, 0, 0
  061dfe8  bf- 30, 0x61dfa8
  061dfec  lwz 9, 0(23)
  061dff0  addi 29, 29, 1
  061dff4  addi 31, 31, 4
  061dff8  addi 0, 9, 31
  061dffc  srawi 0, 0, 5
  061e000  addze 0, 0
  061e004  cmpw 7, 0, 29
  061e008  bt 29, 0x61df44
  061e00c  cmpwi 7, 9, 0
  061e010  bf- 29, 0x61e324
  061e014  li 8, 0
  061e018  lwz 9, -32600(30)
  061e01c  li 18, 0
  061e020  lwz 11, -32604(30)
  061e024  stw 20, 136(1)
  061e028  stw 19, 132(1)
  061e02c  stw 27, 128(1)
  061e030  stw 26, 124(1)
  061e034  mr 17, 28
  061e038  stw 8, 140(1)
  061e03c  li 21, 32
  061e040  stw 18, 120(1)
  061e044  stw 9, 116(1)
  061e048  stw 11, 112(1)
  061e04c  li 14, 0
  061e050  lwz 20, 136(1)
  061e054  lwz 0, 0(20)
  061e058  cmpwi 7, 0, 0
  061e05c  bf 30, 0x61e070
  061e060  lwz 9, 132(1)
  061e064  lwz 0, 0(9)
  061e068  cmpwi 7, 0, 0
  061e06c  bt 30, 0x61e110
  061e070  cmpw 7, 21, 18
  061e074  mr 31, 18
  061e078  bf 29, 0x61e110
  061e07c  lwz 0, 0(23)
  061e080  cmpw 7, 0, 18
  061e084  bf 29, 0x61e110
  061e088  lwz 29, 120(1)
  061e08c  li 27, 1
  061e090  lwz 26, -32768(30)
  061e094  lwz 28, 132(1)
  061e098  b 0x61e0c8
  061e09c  lwz 0, 0(28)
  061e0a0  and 8, 11, 0
  061e0a4  cmpwi 8, 0
  061e0a8  bf 2, 0x61e384
  061e0ac  addi 31, 31, 1
  061e0b0  cmpw 7, 31, 21
  061e0b4  bf 28, 0x61e110
  061e0b8  lwz 0, 0(23)
  061e0bc  addi 29, 29, 104
  061e0c0  cmpw 7, 0, 31
  061e0c4  bf 29, 0x61e110
  061e0c8  srawi 0, 31, 5
  061e0cc  addze 0, 0
  061e0d0  lwz 9, 0(20)
  061e0d4  slwi 0, 0, 5
  061e0d8  sub 0, 31, 0
  061e0dc  slw 11, 27, 0
  061e0e0  and 0, 11, 9
  061e0e4  cmpwi 0, 0
  061e0e8  bt 2, 0x61e09c
  061e0ec  lwz 9, 0(26)
  061e0f0  addi 31, 31, 1
  061e0f4  add 9, 29, 9
  061e0f8  clrldi 9, 9, 32
  061e0fc  lwz 3, 96(9)
  061e100  bl 0x629c38
  061e104  nop
  061e108  cmpw 7, 31, 21
  061e10c  bt 28, 0x61e0b8
  061e110  lwz 22, 128(1)
  061e114  lwz 24, 124(1)
  061e118  lwz 0, 0(22)
  061e11c  cmpwi 7, 0, 0
  061e120  bf 30, 0x61e140
  061e124  lwz 0, 0(24)
  061e128  cmpwi 7, 0, 0
  061e12c  bf 30, 0x61e140
  061e130  clrldi 10, 17, 32
  061e134  lwz 0, 0(10)
  061e138  cmpwi 7, 0, 0
  061e13c  bt 30, 0x61e28c
  061e140  cmpw 7, 21, 18
  061e144  mr 29, 18
  061e148  bf 29, 0x61e288
  061e14c  lwz 0, 0(23)
  061e150  cmpw 7, 18, 0
  061e154  bf- 28, 0x61e288
  061e158  lwz 28, 120(1)
  061e15c  lwz 19, -32680(30)
  061e160  lwz 16, -32676(30)
  061e164  lwz 15, -32672(30)
  061e168  lwz 26, 116(1)
  061e16c  lwz 27, 112(1)
  061e170  b 0x61e21c
  061e174  lwz 25, -32768(30)
  061e178  lwz 9, 0(25)
  061e17c  add 9, 28, 9
  061e180  clrldi 9, 9, 32
  061e184  lwz 0, 16(9)
  061e188  cmpwi 7, 0, 0
  061e18c  bf 30, 0x61e1d0
  061e190  lwz 3, -32568(30)
  061e194  mr 4, 19
  061e198  li 5, 2830
  061e19c  bl 0x61948c
  061e1a0  nop
  061e1a4  lwz 3, -32684(30)
  061e1a8  mr 4, 19
  061e1ac  li 5, 2831
  061e1b0  bl 0x61948c
  061e1b4  nop
  061e1b8  lbz 0, 0(16)
  061e1bc  cmpwi 7, 0, 0
  061e1c0  bf- 30, 0x61e32c
  061e1c4  lbz 0, 0(15)
  061e1c8  cmpwi 7, 0, 0
  061e1cc  bf- 30, 0x61dfa8
  061e1d0  lwz 9, 0(25)
  061e1d4  add 9, 28, 9
  061e1d8  clrldi 9, 9, 32
  061e1dc  lwz 3, 96(9)
  061e1e0  bl 0x62a9b4
  061e1e4  nop
  061e1e8  lwz 0, 0(26)
  061e1ec  lwz 9, 0(27)
  061e1f0  andc 0, 0, 31
  061e1f4  or 9, 31, 9
  061e1f8  stw 0, 0(26)
  061e1fc  stw 9, 0(27)
  061e200  addi 29, 29, 1
  061e204  cmpw 7, 29, 21
  061e208  bf 28, 0x61e288
  061e20c  lwz 0, 0(23)
  061e210  addi 28, 28, 104
  061e214  cmpw 7, 0, 29
  061e218  bf- 29, 0x61e288
  061e21c  srawi 0, 29, 5
  061e220  addze 0, 0
  061e224  lwz 11, 0(24)
  061e228  li 9, 1
  061e22c  slwi 0, 0, 5
  061e230  sub 0, 29, 0
  061e234  slw 31, 9, 0
  061e238  and 0, 31, 11
  061e23c  cmpwi 0, 0
  061e240  bf 2, 0x61e174
  061e244  lwz 0, 0(22)
  061e248  and 8, 31, 0
  061e24c  cmpwi 8, 0
  061e250  bt 2, 0x61e3a4
  061e254  lwz 9, -32768(30)
  061e258  lwz 11, 0(9)
  061e25c  add 11, 28, 11
  061e260  clrldi 11, 11, 32
  061e264  lwz 3, 96(11)
  061e268  cmpwi 7, 3, 0
  061e26c  bt 30, 0x61e200
  061e270  clrldi 3, 3, 32
  061e274  addi 29, 29, 1
  061e278  bl 0x629f78
  061e27c  nop
  061e280  cmpw 7, 29, 21
  061e284  bt 28, 0x61e20c
  061e288  clrldi 10, 17, 32
  061e28c  lwz 9, 0(23)
  061e290  addi 17, 17, 4
  061e294  lwz 8, 140(1)
  061e298  addi 21, 21, 32
  061e29c  addi 9, 9, 31
  061e2a0  lwz 11, 132(1)
  061e2a4  addi 8, 8, 1
  061e2a8  srawi 9, 9, 5
  061e2ac  addze 9, 9
  061e2b0  stw 8, 140(1)
  061e2b4  cmpw 7, 9, 8
  061e2b8  lwz 9, 136(1)
  061e2bc  lwz 8, 128(1)
  061e2c0  addi 18, 18, 32
  061e2c4  addi 9, 9, 4
  061e2c8  addi 8, 8, 4
  061e2cc  stw 9, 136(1)
  061e2d0  lwz 9, 124(1)
  061e2d4  stw 14, 0(11)
  061e2d8  addi 9, 9, 4
  061e2dc  addi 11, 11, 4
  061e2e0  stw 8, 128(1)
  061e2e4  stw 11, 132(1)
  061e2e8  lwz 8, 116(1)
  061e2ec  lwz 11, 120(1)
  061e2f0  stw 9, 124(1)
  061e2f4  lwz 9, 112(1)
  061e2f8  addi 11, 11, 3328
  061e2fc  addi 8, 8, 4
  061e300  addi 9, 9, 4
  061e304  stw 14, 0(20)
  061e308  stw 14, 0(22)
  061e30c  stw 14, 0(24)
  061e310  stw 14, 0(10)
  061e314  stw 11, 120(1)
  061e318  stw 8, 116(1)
  061e31c  stw 9, 112(1)
  061e320  bt 29, 0x61e050
  061e324  bl 0x6271f4
  061e328  nop
  061e32c  ld 0, 304(1)
  061e330  ld 14, 144(1)
  061e334  ld 15, 152(1)
  061e338  mtlr 0
  061e33c  ld 16, 160(1)
  061e340  ld 17, 168(1)
  061e344  ld 18, 176(1)
  061e348  ld 19, 184(1)
  061e34c  ld 20, 192(1)
  061e350  ld 21, 200(1)
  061e354  ld 22, 208(1)
  061e358  ld 23, 216(1)
  061e35c  ld 24, 224(1)
  061e360  ld 25, 232(1)
  061e364  ld 26, 240(1)
  061e368  ld 27, 248(1)
  061e36c  ld 28, 256(1)
  061e370  ld 29, 264(1)
  061e374  ld 30, 272(1)
  061e378  ld 31, 280(1)
  061e37c  addi 1, 1, 288
  061e380  blr
  061e384  lwz 9, 0(26)
  061e388  add 9, 29, 9
  061e38c  clrldi 9, 9, 32
  061e390  lwz 3, 96(9)
  061e394  lfs 1, 76(9)
  061e398  bl 0x629bb8
  061e39c  nop
  061e3a0  b 0x61e0ac
  061e3a4  clrldi 10, 17, 32
  061e3a8  lwz 0, 0(10)
  061e3ac  and 8, 31, 0
  061e3b0  cmpwi 8, 0
  061e3b4  bt 2, 0x61e200
  061e3b8  lwz 25, -32768(30)
  061e3bc  lwz 9, 0(25)
  061e3c0  add 9, 28, 9
  061e3c4  clrldi 9, 9, 32
  061e3c8  lwz 0, 16(9)
  061e3cc  cmpwi 7, 0, 0
  061e3d0  bf 30, 0x61e414
  061e3d4  lwz 3, -32568(30)
  061e3d8  mr 4, 19
  061e3dc  li 5, 2848
  061e3e0  bl 0x61948c
  061e3e4  nop
  061e3e8  lwz 3, -32684(30)
  061e3ec  mr 4, 19
  061e3f0  li 5, 2849
  061e3f4  bl 0x61948c
  061e3f8  nop
  061e3fc  lbz 0, 0(16)
  061e400  cmpwi 7, 0, 0
  061e404  bf- 30, 0x61e32c
  061e408  lbz 0, 0(15)
  061e40c  cmpwi 7, 0, 0
  061e410  bf- 30, 0x61dfa8
  061e414  lwz 9, 0(25)
  061e418  add 9, 28, 9
  061e41c  clrldi 9, 9, 32
  061e420  lwz 3, 96(9)
  061e424  bl 0x629eb0
  061e428  nop
  061e42c  lwz 0, 0(27)
  061e430  lwz 9, 0(26)
  061e434  andc 0, 0, 31
  061e438  or 9, 31, 9
  061e43c  stw 0, 0(27)
  061e440  stw 9, 0(26)
  061e444  b 0x61e200

FUN_0061e448:   # 0x61e448, 0x340 bytes
  061e448  cmplwi 7, 3, 31
  061e44c  mflr 0
  061e450  stdu 1, -160(1)
  061e454  std 28, 128(1)
  061e458  std 29, 136(1)
  061e45c  std 30, 144(1)
  061e460  std 31, 152(1)
  061e464  std 0, 176(1)
  061e468  lwz 30, -29444(2)
  061e46c  mr 31, 3
  061e470  mr 28, 4
  061e474  mr 29, 4
  061e478  bf 29, 0x61e4ac
  061e47c  lwz 3, -32684(30)
  061e480  li 5, 1931
  061e484  lwz 4, -32680(30)
  061e488  bl 0x61948c
  061e48c  nop
  061e490  lwz 9, -32676(30)
  061e494  lbz 0, 0(9)
  061e498  cmpwi 7, 0, 0
  061e49c  bf 30, 0x61e6b0
  061e4a0  lwz 9, -32672(30)
  061e4a4  lbz 0, 0(9)
  061e4a8  twnei 0, 0
  061e4ac  bl 0x6272e8
  061e4b0  nop
  061e4b4  cmpwi 7, 29, 0
  061e4b8  bt 30, 0x61e6d0
  061e4bc  lwz 29, -32564(30)
  061e4c0  lwz 0, 0(29)
  061e4c4  cmpwi 7, 0, 0
  061e4c8  bt 30, 0x61e6a8
  061e4cc  lwz 8, 0(28)
  061e4d0  cmplwi 7, 8, 30
  061e4d4  bt 29, 0x61e728
  061e4d8  lwz 6, -32712(30)
  061e4dc  lwz 10, 0(6)
  061e4e0  cmpwi 6, 10, 0
  061e4e4  bt 26, 0x61e51c
  061e4e8  clrldi 9, 10, 32
  061e4ec  mr 11, 9
  061e4f0  lwz 0, 0(9)
  061e4f4  cmpw 7, 0, 31
  061e4f8  bf 30, 0x61e50c
  061e4fc  b 0x61e71c
  061e500  lwz 0, 0(11)
  061e504  cmpw 7, 0, 31
  061e508  bt 30, 0x61e71c
  061e50c  lwz 0, 40(11)
  061e510  cmpwi 6, 0, 0
  061e514  clrldi 11, 0, 32
  061e518  bf 26, 0x61e500
  061e51c  lwz 7, -32560(30)
  061e520  lwz 0, -32560(30)
  061e524  mulli 3, 31, 44
  061e528  addi 9, 3, 32
  061e52c  add 0, 3, 0
  061e530  extsw 9, 9
  061e534  add 9, 9, 7
  061e538  stw 10, 8(9)
  061e53c  stw 0, 0(6)
  061e540  extsw 9, 3
  061e544  lfs 13, 8(28)
  061e548  lfs 0, -32632(30)
  061e54c  li 11, 0
  061e550  add 9, 9, 7
  061e554  fcmpu 7, 13, 0
  061e558  stw 8, 4(9)
  061e55c  lwz 0, 4(28)
  061e560  stw 0, 8(9)
  061e564  bt 28, 0x61e578
  061e568  lfs 0, -32720(30)
  061e56c  lis 11, 1
  061e570  fcmpu 7, 13, 0
  061e574  bf 29, 0x61e76c
  061e578  extsw 9, 3
  061e57c  lfs 13, 12(28)
  061e580  lfs 0, -32632(30)
  061e584  li 0, 0
  061e588  add 9, 9, 7
  061e58c  fcmpu 7, 13, 0
  061e590  stw 11, 12(9)
  061e594  bt 28, 0x61e5c0
  061e598  lfs 0, -32548(30)
  061e59c  lis 0, 10
  061e5a0  fcmpu 7, 13, 0
  061e5a4  bt 29, 0x61e5c0
  061e5a8  lfs 0, -32556(30)
  061e5ac  addi 9, 1, 112
  061e5b0  fmuls 0, 13, 0
  061e5b4  fctiwz 0, 0
  061e5b8  stfiwx 0, 0, 9
  061e5bc  lwz 0, 112(1)
  061e5c0  extsw 9, 3
  061e5c4  lfs 13, 16(28)
  061e5c8  lfs 0, -32632(30)
  061e5cc  li 10, 0
  061e5d0  add 9, 9, 7
  061e5d4  fcmpu 7, 13, 0
  061e5d8  stw 0, 16(9)
  061e5dc  bt 28, 0x61e608
  061e5e0  lfs 0, -32548(30)
  061e5e4  lis 10, 10
  061e5e8  fcmpu 7, 13, 0
  061e5ec  bt 29, 0x61e608
  061e5f0  lfs 0, -32556(30)
  061e5f4  addi 9, 1, 112
  061e5f8  fmuls 0, 13, 0
  061e5fc  fctiwz 0, 0
  061e600  stfiwx 0, 0, 9
  061e604  lwz 10, 112(1)
  061e608  addi 9, 3, 16
  061e60c  addi 11, 3, 32
  061e610  extsw 9, 9
  061e614  extsw 11, 11
  061e618  add 8, 9, 7
  061e61c  add 11, 11, 7
  061e620  li 0, 0
  061e624  stw 10, 8(8)
  061e628  stw 0, 4(11)
  061e62c  bt 26, 0x61e760
  061e630  li 0, 240
  061e634  lwz 9, 0(29)
  061e638  extsw 11, 3
  061e63c  divwu 6, 0, 9
  061e640  add 3, 11, 7
  061e644  lwz 0, 16(3)
  061e648  mullw 0, 6, 0
  061e64c  srawi 10, 0, 16
  061e650  cmpwi 10, 0
  061e654  bf 2, 0x61e65c
  061e658  li 10, 1
  061e65c  lwz 0, 12(3)
  061e660  lis 9, 1
  061e664  sub 3, 9, 0
  061e668  divw 10, 3, 10
  061e66c  cmpwi 7, 10, 0
  061e670  bf 30, 0x61e678
  061e674  li 10, 1
  061e678  lwz 0, 8(8)
  061e67c  stw 10, 4(8)
  061e680  mullw 0, 6, 0
  061e684  srawi 0, 0, 16
  061e688  cmpwi 0, 0
  061e68c  bf 2, 0x61e694
  061e690  li 0, 1
  061e694  divw 0, 3, 0
  061e698  cmpwi 7, 0, 0
  061e69c  bf 30, 0x61e6a4
  061e6a0  li 0, 1
  061e6a4  stw 0, 12(8)
  061e6a8  bl 0x6271f4
  061e6ac  nop
  061e6b0  ld 0, 176(1)
  061e6b4  ld 28, 128(1)
  061e6b8  ld 29, 136(1)
  061e6bc  mtlr 0
  061e6c0  ld 30, 144(1)
  061e6c4  ld 31, 152(1)
  061e6c8  addi 1, 1, 160
  061e6cc  blr
  061e6d0  lwz 9, -32712(30)
  061e6d4  lwz 9, 0(9)
  061e6d8  cmpwi 7, 9, 0
  061e6dc  bt 30, 0x61e6a8
  061e6e0  clrldi 11, 9, 32
  061e6e4  lwz 0, 0(11)
  061e6e8  cmpw 7, 0, 31
  061e6ec  bt 30, 0x61e70c
  061e6f0  lwz 9, 40(11)
  061e6f4  cmpwi 7, 9, 0
  061e6f8  clrldi 11, 9, 32
  061e6fc  bt 30, 0x61e6a8
  061e700  lwz 0, 0(11)
  061e704  cmpw 7, 0, 31
  061e708  bf 30, 0x61e6f0
  061e70c  lwz 0, 36(11)
  061e710  ori 0, 0, 1
  061e714  stw 0, 36(11)
  061e718  b 0x61e6a8
  061e71c  lwz 7, -32560(30)
  061e720  mulli 3, 31, 44
  061e724  b 0x61e540
  061e728  lwz 3, -32684(30)
  061e72c  li 5, 1968
  061e730  lwz 4, -32680(30)
  061e734  bl 0x61948c
  061e738  nop
  061e73c  lwz 9, -32676(30)
  061e740  lbz 0, 0(9)
  061e744  cmpwi 7, 0, 0
  061e748  bf 30, 0x61e6b0
  061e74c  lwz 9, -32672(30)
  061e750  lbz 0, 0(9)
  061e754  twnei 0, 0
  061e758  lwz 8, 0(28)
  061e75c  b 0x61e4d8
  061e760  lis 0, 1
  061e764  stw 0, 16(8)
  061e768  b 0x61e630
  061e76c  lfs 0, -32556(30)
  061e770  addi 9, 1, 112
  061e774  fmuls 0, 13, 0
  061e778  fctiwz 0, 0
  061e77c  stfiwx 0, 0, 9
  061e780  lwz 11, 112(1)
  061e784  b 0x61e578

FUN_0061e788:   # 0x61e788, 0xcc bytes
  061e788  cmpwi 7, 3, 0
  061e78c  mflr 0
  061e790  stdu 1, -128(1)
  061e794  std 30, 112(1)
  061e798  std 31, 120(1)
  061e79c  std 0, 144(1)
  061e7a0  lwz 30, -29444(2)
  061e7a4  mr 31, 3
  061e7a8  bf 30, 0x61e7dc
  061e7ac  lwz 3, -32684(30)
  061e7b0  li 5, 1844
  061e7b4  lwz 4, -32680(30)
  061e7b8  bl 0x61948c
  061e7bc  nop
  061e7c0  lwz 9, -32676(30)
  061e7c4  lbz 0, 0(9)
  061e7c8  cmpwi 7, 0, 0
  061e7cc  bf 30, 0x61e83c
  061e7d0  lwz 9, -32672(30)
  061e7d4  lbz 0, 0(9)
  061e7d8  twnei 0, 0
  061e7dc  bl 0x6272e8
  061e7e0  nop
  061e7e4  li 0, 32
  061e7e8  lwz 10, -32652(30)
  061e7ec  li 11, 0
  061e7f0  mtctr 0
  061e7f4  li 8, 1
  061e7f8  slw 0, 8, 11
  061e7fc  clrldi 9, 10, 32
  061e800  and 7, 0, 31
  061e804  addi 10, 10, 4
  061e808  cmpwi 7, 0
  061e80c  addi 11, 11, 1
  061e810  bt 2, 0x61e824
  061e814  lwz 0, 0(9)
  061e818  rlwinm 0, 0, 26, 1, 31
  061e81c  rotlwi 0, 0, 6
  061e820  stw 0, 0(9)
  061e824  bdnz 0x61e7f8
  061e828  lwz 9, -32696(30)
  061e82c  li 0, -1
  061e830  stw 0, 0(9)
  061e834  bl 0x6271f4
  061e838  nop
  061e83c  ld 0, 144(1)
  061e840  ld 30, 112(1)
  061e844  ld 31, 120(1)
  061e848  mtlr 0
  061e84c  addi 1, 1, 128
  061e850  blr

FUN_0061e854:   # 0x61e854, 0xc8 bytes
  061e854  cmpwi 7, 3, 0
  061e858  mflr 0
  061e85c  stdu 1, -128(1)
  061e860  std 30, 112(1)
  061e864  std 31, 120(1)
  061e868  std 0, 144(1)
  061e86c  lwz 30, -29444(2)
  061e870  mr 31, 3
  061e874  bf 30, 0x61e8a8
  061e878  lwz 3, -32684(30)
  061e87c  li 5, 1816
  061e880  lwz 4, -32680(30)
  061e884  bl 0x61948c
  061e888  nop
  061e88c  lwz 9, -32676(30)
  061e890  lbz 0, 0(9)
  061e894  cmpwi 7, 0, 0
  061e898  bf 30, 0x61e904
  061e89c  lwz 9, -32672(30)
  061e8a0  lbz 0, 0(9)
  061e8a4  twnei 0, 0
  061e8a8  bl 0x6272e8
  061e8ac  nop
  061e8b0  li 0, 32
  061e8b4  lwz 10, -32652(30)
  061e8b8  li 11, 0
  061e8bc  mtctr 0
  061e8c0  li 8, 1
  061e8c4  slw 0, 8, 11
  061e8c8  clrldi 9, 10, 32
  061e8cc  and 7, 0, 31
  061e8d0  addi 10, 10, 4
  061e8d4  cmpwi 7, 0
  061e8d8  addi 11, 11, 1
  061e8dc  bt 2, 0x61e8ec
  061e8e0  lwz 0, 0(9)
  061e8e4  ori 0, 0, 32
  061e8e8  stw 0, 0(9)
  061e8ec  bdnz 0x61e8c4
  061e8f0  lwz 9, -32696(30)
  061e8f4  li 0, -1
  061e8f8  stw 0, 0(9)
  061e8fc  bl 0x6271f4
  061e900  nop
  061e904  ld 0, 144(1)
  061e908  ld 30, 112(1)
  061e90c  ld 31, 120(1)
  061e910  mtlr 0
  061e914  addi 1, 1, 128
  061e918  blr

FUN_0061e91c:   # 0x61e91c, 0xcc bytes
  061e91c  cmpwi 7, 3, 0
  061e920  mflr 0
  061e924  stdu 1, -128(1)
  061e928  std 30, 112(1)
  061e92c  std 31, 120(1)
  061e930  std 0, 144(1)
  061e934  lwz 30, -29444(2)
  061e938  mr 31, 3
  061e93c  bf 30, 0x61e970
  061e940  lwz 3, -32684(30)
  061e944  li 5, 1789
  061e948  lwz 4, -32680(30)
  061e94c  bl 0x61948c
  061e950  nop
  061e954  lwz 9, -32676(30)
  061e958  lbz 0, 0(9)
  061e95c  cmpwi 7, 0, 0
  061e960  bf 30, 0x61e9d0
  061e964  lwz 9, -32672(30)
  061e968  lbz 0, 0(9)
  061e96c  twnei 0, 0
  061e970  bl 0x6272e8
  061e974  nop
  061e978  li 0, 32
  061e97c  lwz 10, -32652(30)
  061e980  li 11, 0
  061e984  mtctr 0
  061e988  li 8, 1
  061e98c  slw 0, 8, 11
  061e990  clrldi 9, 10, 32
  061e994  and 7, 0, 31
  061e998  addi 10, 10, 4
  061e99c  cmpwi 7, 0
  061e9a0  addi 11, 11, 1
  061e9a4  bt 2, 0x61e9b8
  061e9a8  lwz 0, 0(9)
  061e9ac  rlwinm 0, 0, 27, 1, 31
  061e9b0  rotlwi 0, 0, 5
  061e9b4  stw 0, 0(9)
  061e9b8  bdnz 0x61e98c
  061e9bc  lwz 9, -32696(30)
  061e9c0  li 0, -1
  061e9c4  stw 0, 0(9)
  061e9c8  bl 0x6271f4
  061e9cc  nop
  061e9d0  ld 0, 144(1)
  061e9d4  ld 30, 112(1)
  061e9d8  ld 31, 120(1)
  061e9dc  mtlr 0
  061e9e0  addi 1, 1, 128
  061e9e4  blr

FUN_0061e9e8:   # 0x61e9e8, 0xc8 bytes
  061e9e8  cmpwi 7, 3, 0
  061e9ec  mflr 0
  061e9f0  stdu 1, -128(1)
  061e9f4  std 30, 112(1)
  061e9f8  std 31, 120(1)
  061e9fc  std 0, 144(1)
  061ea00  lwz 30, -29444(2)
  061ea04  mr 31, 3
  061ea08  bf 30, 0x61ea3c
  061ea0c  lwz 3, -32684(30)
  061ea10  li 5, 1761
  061ea14  lwz 4, -32680(30)
  061ea18  bl 0x61948c
  061ea1c  nop
  061ea20  lwz 9, -32676(30)
  061ea24  lbz 0, 0(9)
  061ea28  cmpwi 7, 0, 0
  061ea2c  bf 30, 0x61ea98
  061ea30  lwz 9, -32672(30)
  061ea34  lbz 0, 0(9)
  061ea38  twnei 0, 0
  061ea3c  bl 0x6272e8
  061ea40  nop
  061ea44  li 0, 32
  061ea48  lwz 10, -32652(30)
  061ea4c  li 11, 0
  061ea50  mtctr 0
  061ea54  li 8, 1
  061ea58  slw 0, 8, 11
  061ea5c  clrldi 9, 10, 32
  061ea60  and 7, 0, 31
  061ea64  addi 10, 10, 4
  061ea68  cmpwi 7, 0
  061ea6c  addi 11, 11, 1
  061ea70  bt 2, 0x61ea80
  061ea74  lwz 0, 0(9)
  061ea78  ori 0, 0, 16
  061ea7c  stw 0, 0(9)
  061ea80  bdnz 0x61ea58
  061ea84  lwz 9, -32696(30)
  061ea88  li 0, -1
  061ea8c  stw 0, 0(9)
  061ea90  bl 0x6271f4
  061ea94  nop
  061ea98  ld 0, 144(1)
  061ea9c  ld 30, 112(1)
  061eaa0  ld 31, 120(1)
  061eaa4  mtlr 0
  061eaa8  addi 1, 1, 128
  061eaac  blr

FUN_0061eab0:   # 0x61eab0, 0xc0 bytes
  061eab0  cmpwi 7, 3, 0
  061eab4  mflr 0
  061eab8  stdu 1, -128(1)
  061eabc  std 30, 112(1)
  061eac0  std 31, 120(1)
  061eac4  std 0, 144(1)
  061eac8  lwz 30, -29444(2)
  061eacc  mr 31, 3
  061ead0  bf 30, 0x61eb04
  061ead4  lwz 3, -32684(30)
  061ead8  li 5, 1736
  061eadc  lwz 4, -32680(30)
  061eae0  bl 0x61948c
  061eae4  nop
  061eae8  lwz 9, -32676(30)
  061eaec  lbz 0, 0(9)
  061eaf0  cmpwi 7, 0, 0
  061eaf4  bf 30, 0x61eb58
  061eaf8  lwz 9, -32672(30)
  061eafc  lbz 0, 0(9)
  061eb00  twnei 0, 0
  061eb04  bl 0x6272e8
  061eb08  nop
  061eb0c  li 0, 32
  061eb10  lwz 10, -32652(30)
  061eb14  li 11, 0
  061eb18  mtctr 0
  061eb1c  li 8, 1
  061eb20  slw 0, 8, 11
  061eb24  clrldi 9, 10, 32
  061eb28  and 7, 0, 31
  061eb2c  addi 10, 10, 4
  061eb30  cmpwi 7, 0
  061eb34  addi 11, 11, 1
  061eb38  bt 2, 0x61eb4c
  061eb3c  lwz 0, 0(9)
  061eb40  rlwinm 0, 0, 30, 1, 31
  061eb44  rotlwi 0, 0, 2
  061eb48  stw 0, 0(9)
  061eb4c  bdnz 0x61eb20
  061eb50  bl 0x6271f4
  061eb54  nop
  061eb58  ld 0, 144(1)
  061eb5c  ld 30, 112(1)
  061eb60  ld 31, 120(1)
  061eb64  mtlr 0
  061eb68  addi 1, 1, 128
  061eb6c  blr

FUN_0061eb70:   # 0x61eb70, 0xbc bytes
  061eb70  cmpwi 7, 3, 0
  061eb74  mflr 0
  061eb78  stdu 1, -128(1)
  061eb7c  std 30, 112(1)
  061eb80  std 31, 120(1)
  061eb84  std 0, 144(1)
  061eb88  lwz 30, -29444(2)
  061eb8c  mr 31, 3
  061eb90  bf 30, 0x61ebc4
  061eb94  lwz 3, -32684(30)
  061eb98  li 5, 1710
  061eb9c  lwz 4, -32680(30)
  061eba0  bl 0x61948c
  061eba4  nop
  061eba8  lwz 9, -32676(30)
  061ebac  lbz 0, 0(9)
  061ebb0  cmpwi 7, 0, 0
  061ebb4  bf 30, 0x61ec14
  061ebb8  lwz 9, -32672(30)
  061ebbc  lbz 0, 0(9)
  061ebc0  twnei 0, 0
  061ebc4  bl 0x6272e8
  061ebc8  nop
  061ebcc  li 0, 32
  061ebd0  lwz 10, -32652(30)
  061ebd4  li 11, 0
  061ebd8  mtctr 0
  061ebdc  li 8, 1
  061ebe0  slw 0, 8, 11
  061ebe4  clrldi 9, 10, 32
  061ebe8  and 7, 0, 31
  061ebec  addi 10, 10, 4
  061ebf0  cmpwi 7, 0
  061ebf4  addi 11, 11, 1
  061ebf8  bt 2, 0x61ec08
  061ebfc  lwz 0, 0(9)
  061ec00  ori 0, 0, 2
  061ec04  stw 0, 0(9)
  061ec08  bdnz 0x61ebe0
  061ec0c  bl 0x6271f4
  061ec10  nop
  061ec14  ld 0, 144(1)
  061ec18  ld 30, 112(1)
  061ec1c  ld 31, 120(1)
  061ec20  mtlr 0
  061ec24  addi 1, 1, 128
  061ec28  blr

FUN_0061ec2c:   # 0x61ec2c, 0xb0 bytes
  061ec2c  stdu 1, -128(1)
  061ec30  mflr 0
  061ec34  std 30, 112(1)
  061ec38  lwz 30, -29444(2)
  061ec3c  std 31, 120(1)
  061ec40  std 0, 144(1)
  061ec44  mr 31, 3
  061ec48  bl 0x6272e8
  061ec4c  nop
  061ec50  li 0, 32
  061ec54  lwz 11, -32652(30)
  061ec58  li 8, 0
  061ec5c  li 7, 1
  061ec60  mtctr 0
  061ec64  b 0x61ec80
  061ec68  lwz 0, 0(10)
  061ec6c  ori 0, 0, 4
  061ec70  stw 0, 0(10)
  061ec74  addi 8, 8, 1
  061ec78  addi 11, 11, 4
  061ec7c  bdz 0x61ecbc
  061ec80  slw 0, 7, 8
  061ec84  clrldi 10, 11, 32
  061ec88  and 6, 0, 31
  061ec8c  cmpwi 6, 0
  061ec90  bf 2, 0x61ec68
  061ec94  lwz 9, 0(10)
  061ec98  rlwinm 0, 9, 0, 29, 29
  061ec9c  rlwinm 9, 9, 29, 1, 31
  061eca0  cmpwi 7, 0, 0
  061eca4  rotlwi 9, 9, 3
  061eca8  bt 30, 0x61ec74
  061ecac  stw 9, 0(10)
  061ecb0  addi 8, 8, 1
  061ecb4  addi 11, 11, 4
  061ecb8  bdnz 0x61ec80
  061ecbc  bl 0x6271f4
  061ecc0  nop
  061ecc4  ld 0, 144(1)
  061ecc8  ld 30, 112(1)
  061eccc  ld 31, 120(1)
  061ecd0  mtlr 0
  061ecd4  addi 1, 1, 128
  061ecd8  blr

FUN_0061ecdc:   # 0x61ecdc, 0xb0 bytes
  061ecdc  stdu 1, -128(1)
  061ece0  mflr 0
  061ece4  std 30, 112(1)
  061ece8  lwz 30, -29444(2)
  061ecec  std 31, 120(1)
  061ecf0  std 0, 144(1)
  061ecf4  mr 31, 3
  061ecf8  bl 0x6272e8
  061ecfc  nop
  061ed00  li 0, 32
  061ed04  lwz 11, -32652(30)
  061ed08  li 8, 0
  061ed0c  li 7, 1
  061ed10  mtctr 0
  061ed14  b 0x61ed30
  061ed18  lwz 0, 0(10)
  061ed1c  ori 0, 0, 8
  061ed20  stw 0, 0(10)
  061ed24  addi 8, 8, 1
  061ed28  addi 11, 11, 4
  061ed2c  bdz 0x61ed6c
  061ed30  slw 0, 7, 8
  061ed34  clrldi 10, 11, 32
  061ed38  and 6, 0, 31
  061ed3c  cmpwi 6, 0
  061ed40  bf 2, 0x61ed18
  061ed44  lwz 9, 0(10)
  061ed48  rlwinm 0, 9, 0, 28, 28
  061ed4c  rlwinm 9, 9, 28, 1, 31
  061ed50  cmpwi 7, 0, 0
  061ed54  rotlwi 9, 9, 4
  061ed58  bt 30, 0x61ed24
  061ed5c  stw 9, 0(10)
  061ed60  addi 8, 8, 1
  061ed64  addi 11, 11, 4
  061ed68  bdnz 0x61ed30
  061ed6c  bl 0x6271f4
  061ed70  nop
  061ed74  ld 0, 144(1)
  061ed78  ld 30, 112(1)
  061ed7c  ld 31, 120(1)
  061ed80  mtlr 0
  061ed84  addi 1, 1, 128
  061ed88  blr

FUN_0061ed8c:   # 0x61ed8c, 0xac bytes
  061ed8c  stdu 1, -128(1)
  061ed90  mflr 0
  061ed94  std 30, 112(1)
  061ed98  lwz 30, -29444(2)
  061ed9c  std 31, 120(1)
  061eda0  std 0, 144(1)
  061eda4  mr 31, 3
  061eda8  bl 0x6272e8
  061edac  nop
  061edb0  li 0, 32
  061edb4  lwz 11, -32652(30)
  061edb8  li 8, 0
  061edbc  li 7, 1
  061edc0  mtctr 0
  061edc4  b 0x61ede0
  061edc8  lwz 0, 0(10)
  061edcc  ori 0, 0, 1
  061edd0  stw 0, 0(10)
  061edd4  addi 8, 8, 1
  061edd8  addi 11, 11, 4
  061eddc  bdz 0x61ee18
  061ede0  slw 0, 7, 8
  061ede4  clrldi 10, 11, 32
  061ede8  and 6, 0, 31
  061edec  cmpwi 6, 0
  061edf0  bf 2, 0x61edc8
  061edf4  lwz 0, 0(10)
  061edf8  clrlwi 9, 0, 31
  061edfc  rlwinm 0, 0, 0, 0, 30
  061ee00  cmpwi 7, 9, 0
  061ee04  bt 30, 0x61edd4
  061ee08  stw 0, 0(10)
  061ee0c  addi 8, 8, 1
  061ee10  addi 11, 11, 4
  061ee14  bdnz 0x61ede0
  061ee18  bl 0x6271f4
  061ee1c  nop
  061ee20  ld 0, 144(1)
  061ee24  ld 30, 112(1)
  061ee28  ld 31, 120(1)
  061ee2c  mtlr 0
  061ee30  addi 1, 1, 128
  061ee34  blr

snd_UpdateGroupOrMasterVolume:   # 0x61ee38, 0xf0 bytes
  061ee38  cmplwi 7, 3, 32
  061ee3c  mflr 0
  061ee40  stdu 1, -144(1)
  061ee44  stfd 31, 136(1)
  061ee48  fmr 31, 1
  061ee4c  std 30, 120(1)
  061ee50  std 31, 128(1)
  061ee54  std 0, 160(1)
  061ee58  lwz 30, -29444(2)
  061ee5c  mr 31, 3
  061ee60  bt 29, 0x61ee7c
  061ee64  lfs 0, -32632(30)
  061ee68  fcmpu 7, 1, 0
  061ee6c  bt 28, 0x61ee7c
  061ee70  lfs 0, -32720(30)
  061ee74  fcmpu 7, 1, 0
  061ee78  bf 29, 0x61eeac
  061ee7c  lwz 3, -32684(30)
  061ee80  li 5, 1593
  061ee84  lwz 4, -32680(30)
  061ee88  bl 0x61948c
  061ee8c  nop
  061ee90  lwz 9, -32676(30)
  061ee94  lbz 0, 0(9)
  061ee98  cmpwi 7, 0, 0
  061ee9c  bf 30, 0x61eef4
  061eea0  lwz 9, -32672(30)
  061eea4  lbz 0, 0(9)
  061eea8  twnei 0, 0
  061eeac  bl 0x6272e8
  061eeb0  nop
  061eeb4  cmpwi 7, 31, 32
  061eeb8  bt 30, 0x61ef10
  061eebc  cmpwi 7, 31, 30
  061eec0  bt 29, 0x61eeec
  061eec4  lwz 10, -32696(30)
  061eec8  slwi 9, 31, 2
  061eecc  li 0, 1
  061eed0  lwz 8, -32692(30)
  061eed4  extsw 9, 9
  061eed8  slw 0, 0, 31
  061eedc  lwz 11, 0(10)
  061eee0  or 0, 0, 11
  061eee4  stfsx 31, 8, 9
  061eee8  stw 0, 0(10)
  061eeec  bl 0x6271f4
  061eef0  nop
  061eef4  ld 0, 160(1)
  061eef8  ld 30, 120(1)
  061eefc  ld 31, 128(1)
  061ef00  mtlr 0
  061ef04  lfd 31, 136(1)
  061ef08  addi 1, 1, 144
  061ef0c  blr
  061ef10  lwz 9, -32696(30)
  061ef14  li 0, -1
  061ef18  lwz 11, -32688(30)
  061ef1c  stw 0, 0(9)
  061ef20  stfs 31, 0(11)
  061ef24  b 0x61eeec

FUN_0061ef28:   # 0x61ef28, 0x60 bytes
  061ef28  stdu 1, -144(1)
  061ef2c  mflr 0
  061ef30  std 30, 128(1)
  061ef34  lwz 30, -29444(2)
  061ef38  std 29, 120(1)
  061ef3c  mr 29, 3
  061ef40  std 0, 160(1)
  061ef44  slwi 29, 29, 2
  061ef48  std 28, 112(1)
  061ef4c  extsw 29, 29
  061ef50  mr 28, 4
  061ef54  bl 0x6272e8
  061ef58  nop
  061ef5c  lwz 9, -32540(30)
  061ef60  stwx 28, 9, 29
  061ef64  bl 0x6271f4
  061ef68  nop
  061ef6c  ld 0, 160(1)
  061ef70  ld 28, 112(1)
  061ef74  ld 29, 120(1)
  061ef78  mtlr 0
  061ef7c  ld 30, 128(1)
  061ef80  addi 1, 1, 144
  061ef84  blr

FUN_0061ef88:   # 0x61ef88, 0x74 bytes
  061ef88  stdu 1, -160(1)
  061ef8c  mflr 0
  061ef90  std 30, 144(1)
  061ef94  lwz 30, -29444(2)
  061ef98  std 29, 136(1)
  061ef9c  mr 29, 3
  061efa0  std 0, 176(1)
  061efa4  slwi 29, 29, 2
  061efa8  std 27, 120(1)
  061efac  std 28, 128(1)
  061efb0  mr 27, 5
  061efb4  mr 28, 4
  061efb8  bl 0x6272e8
  061efbc  nop
  061efc0  lwz 11, -32536(30)
  061efc4  extsw 29, 29
  061efc8  add 9, 29, 11
  061efcc  sthx 28, 11, 29
  061efd0  sth 27, 2(9)
  061efd4  bl 0x6271f4
  061efd8  nop
  061efdc  ld 0, 176(1)
  061efe0  ld 27, 120(1)
  061efe4  ld 28, 128(1)
  061efe8  mtlr 0
  061efec  ld 29, 136(1)
  061eff0  ld 30, 144(1)
  061eff4  addi 1, 1, 160
  061eff8  blr

FUN_0061effc:   # 0x61effc, 0xf0 bytes
  061effc  cmpwi 7, 3, 0
  061f000  mflr 0
  061f004  stdu 1, -144(1)
  061f008  std 29, 120(1)
  061f00c  std 30, 128(1)
  061f010  std 31, 136(1)
  061f014  std 0, 160(1)
  061f018  lwz 30, -29444(2)
  061f01c  mr 31, 3
  061f020  mr 29, 4
  061f024  bt 30, 0x61f0ac
  061f028  bl 0x6272e8
  061f02c  nop
  061f030  lwz 9, -32752(30)
  061f034  lwz 9, 0(9)
  061f038  cmpwi 7, 9, 0
  061f03c  bf 29, 0x61f088
  061f040  addi 0, 9, 31
  061f044  li 8, 0
  061f048  srawi 0, 0, 5
  061f04c  addze 0, 0
  061f050  cmpwi 7, 0, 1
  061f054  clrldi 0, 0, 32
  061f058  mtctr 0
  061f05c  bt- 28, 0x61f0e0
  061f060  add 10, 8, 29
  061f064  add 11, 8, 31
  061f068  clrldi 10, 10, 32
  061f06c  clrldi 11, 11, 32
  061f070  addi 8, 8, 4
  061f074  lwz 0, 0(10)
  061f078  lwz 9, 20(11)
  061f07c  or 0, 0, 9
  061f080  stw 0, 0(10)
  061f084  bdnz 0x61f060
  061f088  bl 0x6271f4
  061f08c  nop
  061f090  ld 0, 160(1)
  061f094  ld 29, 120(1)
  061f098  ld 30, 128(1)
  061f09c  mtlr 0
  061f0a0  ld 31, 136(1)
  061f0a4  addi 1, 1, 144
  061f0a8  blr
  061f0ac  lwz 3, -32684(30)
  061f0b0  li 5, 1491
  061f0b4  lwz 4, -32680(30)
  061f0b8  bl 0x61948c
  061f0bc  nop
  061f0c0  lwz 9, -32676(30)
  061f0c4  lbz 0, 0(9)
  061f0c8  cmpwi 7, 0, 0
  061f0cc  bf 30, 0x61f090
  061f0d0  lwz 9, -32672(30)
  061f0d4  lbz 0, 0(9)
  061f0d8  twnei 0, 0
  061f0dc  b 0x61f028
  061f0e0  li 0, 1
  061f0e4  mtctr 0
  061f0e8  b 0x61f060

FUN_0061f0ec:   # 0x61f0ec, 0x14 bytes
  061f0ec  std 30, -16(1)
  061f0f0  lwz 30, -29444(2)
  061f0f4  lwz 4, -32580(30)
  061f0f8  ld 30, -16(1)
  061f0fc  b 0x61effc

FUN_0061f100:   # 0x61f100, 0x14 bytes
  061f100  std 30, -16(1)
  061f104  lwz 30, -29444(2)
  061f108  lwz 4, -32584(30)
  061f10c  ld 30, -16(1)
  061f110  b 0x61effc

FUN_0061f114:   # 0x61f114, 0x14 bytes
  061f114  std 30, -16(1)
  061f118  lwz 30, -29444(2)
  061f11c  lwz 4, -32588(30)
  061f120  ld 30, -16(1)
  061f124  b 0x61effc

FUN_0061f128:   # 0x61f128, 0x14 bytes
  061f128  std 30, -16(1)
  061f12c  lwz 30, -29444(2)
  061f130  lwz 4, -32756(30)
  061f134  ld 30, -16(1)
  061f138  b 0x61effc

FUN_0061f13c:   # 0x61f13c, 0x2a4 bytes
  061f13c  cmpwi 7, 3, 0
  061f140  mflr 0
  061f144  stdu 1, -256(1)
  061f148  std 14, 112(1)
  061f14c  std 24, 192(1)
  061f150  std 30, 240(1)
  061f154  std 15, 120(1)
  061f158  std 16, 128(1)
  061f15c  std 17, 136(1)
  061f160  std 18, 144(1)
  061f164  std 19, 152(1)
  061f168  std 20, 160(1)
  061f16c  std 21, 168(1)
  061f170  std 22, 176(1)
  061f174  std 23, 184(1)
  061f178  std 25, 200(1)
  061f17c  std 26, 208(1)
  061f180  std 27, 216(1)
  061f184  std 28, 224(1)
  061f188  std 29, 232(1)
  061f18c  std 31, 248(1)
  061f190  std 0, 272(1)
  061f194  lwz 30, -29444(2)
  061f198  mr 14, 3
  061f19c  mr 24, 3
  061f1a0  bt 30, 0x61f3ac
  061f1a4  bl 0x6272e8
  061f1a8  nop
  061f1ac  lwz 23, -32752(30)
  061f1b0  lwz 0, 0(23)
  061f1b4  cmpwi 7, 0, 0
  061f1b8  bf 29, 0x61f348
  061f1bc  addi 25, 24, 20
  061f1c0  li 19, 0
  061f1c4  li 11, 0
  061f1c8  li 16, 0
  061f1cc  lwz 9, 0(25)
  061f1d0  addi 26, 11, 32
  061f1d4  cmpwi 7, 9, 0
  061f1d8  bt 30, 0x61f320
  061f1dc  lwz 0, 0(23)
  061f1e0  mr 31, 11
  061f1e4  cmpw 7, 11, 0
  061f1e8  bf 28, 0x61f320
  061f1ec  mr 28, 16
  061f1f0  lwz 21, -32768(30)
  061f1f4  li 22, 1
  061f1f8  lwz 20, -32680(30)
  061f1fc  lwz 18, -32676(30)
  061f200  lwz 17, -32672(30)
  061f204  lwz 15, -32592(30)
  061f208  b 0x61f22c
  061f20c  addi 31, 31, 1
  061f210  cmpw 7, 26, 31
  061f214  bf 29, 0x61f320
  061f218  lwz 0, 0(23)
  061f21c  addi 28, 28, 104
  061f220  cmpw 7, 0, 31
  061f224  bf 29, 0x61f320
  061f228  lwz 9, 0(25)
  061f22c  srawi 27, 31, 5
  061f230  addze 27, 27
  061f234  slwi 0, 27, 5
  061f238  sub 0, 31, 0
  061f23c  slw 29, 22, 0
  061f240  and 0, 29, 9
  061f244  cmpwi 0, 0
  061f248  bt 2, 0x61f20c
  061f24c  lwz 0, 0(21)
  061f250  add 0, 28, 0
  061f254  clrldi 11, 0, 32
  061f258  lwz 9, 16(11)
  061f25c  cmpwi 7, 9, 0
  061f260  bt 30, 0x61f270
  061f264  lwz 0, 40(11)
  061f268  cmpw 7, 0, 24
  061f26c  bt 30, 0x61f2c8
  061f270  lwz 3, -32532(30)
  061f274  mr 4, 20
  061f278  li 5, 1330
  061f27c  bl 0x61948c
  061f280  nop
  061f284  lwz 3, -32684(30)
  061f288  mr 4, 20
  061f28c  li 5, 1331
  061f290  bl 0x61948c
  061f294  nop
  061f298  lbz 0, 0(18)
  061f29c  cmpwi 7, 0, 0
  061f2a0  bf 30, 0x61f350
  061f2a4  lbz 0, 0(17)
  061f2a8  cmpwi 7, 0, 0
  061f2ac  bf- 30, 0x61f3a8
  061f2b0  lwz 9, 0(21)
  061f2b4  add 9, 28, 9
  061f2b8  clrldi 9, 9, 32
  061f2bc  lwz 0, 40(9)
  061f2c0  cmpw 7, 0, 24
  061f2c4  bf 30, 0x61f20c
  061f2c8  lbz 0, 16(14)
  061f2cc  lwz 10, -32652(30)
  061f2d0  extsb 0, 0
  061f2d4  slwi 0, 0, 2
  061f2d8  extsw 0, 0
  061f2dc  lwzx 9, 10, 0
  061f2e0  rlwinm 9, 9, 0, 30, 30
  061f2e4  cmpwi 7, 9, 0
  061f2e8  bf 30, 0x61f20c
  061f2ec  slwi 0, 27, 2
  061f2f0  lwz 11, -32596(30)
  061f2f4  lwz 10, -32596(30)
  061f2f8  addi 31, 31, 1
  061f2fc  extsw 0, 0
  061f300  cmpw 7, 26, 31
  061f304  lwzx 9, 11, 0
  061f308  lwzx 11, 15, 0
  061f30c  andc 9, 9, 29
  061f310  or 11, 29, 11
  061f314  stwx 9, 10, 0
  061f318  stwx 11, 15, 0
  061f31c  bt 29, 0x61f218
  061f320  lwz 9, 0(23)
  061f324  addi 19, 19, 1
  061f328  addi 25, 25, 4
  061f32c  addi 9, 9, 31
  061f330  mr 11, 26
  061f334  srawi 9, 9, 5
  061f338  addze 9, 9
  061f33c  addi 16, 16, 3328
  061f340  cmpw 7, 9, 19
  061f344  bt 29, 0x61f1cc
  061f348  bl 0x6271f4
  061f34c  nop
  061f350  ld 0, 272(1)
  061f354  ld 14, 112(1)
  061f358  ld 15, 120(1)
  061f35c  mtlr 0
  061f360  ld 16, 128(1)
  061f364  ld 17, 136(1)
  061f368  ld 18, 144(1)
  061f36c  ld 19, 152(1)
  061f370  ld 20, 160(1)
  061f374  ld 21, 168(1)
  061f378  ld 22, 176(1)
  061f37c  ld 23, 184(1)
  061f380  ld 24, 192(1)
  061f384  ld 25, 200(1)
  061f388  ld 26, 208(1)
  061f38c  ld 27, 216(1)
  061f390  ld 28, 224(1)
  061f394  ld 29, 232(1)
  061f398  ld 30, 240(1)
  061f39c  ld 31, 248(1)
  061f3a0  addi 1, 1, 256
  061f3a4  blr
  061f3a8  trap
  061f3ac  lwz 3, -32684(30)
  061f3b0  li 5, 1309
  061f3b4  lwz 4, -32680(30)
  061f3b8  bl 0x61948c
  061f3bc  nop
  061f3c0  lwz 9, -32676(30)
  061f3c4  lbz 0, 0(9)
  061f3c8  cmpwi 7, 0, 0
  061f3cc  bf 30, 0x61f350
  061f3d0  lwz 9, -32672(30)
  061f3d4  lbz 0, 0(9)
  061f3d8  twnei 0, 0
  061f3dc  b 0x61f1a4

FUN_0061f3e0:   # 0x61f3e0, 0x278 bytes
  061f3e0  cmpwi 7, 3, 0
  061f3e4  mflr 0
  061f3e8  stdu 1, -256(1)
  061f3ec  std 24, 192(1)
  061f3f0  std 30, 240(1)
  061f3f4  std 14, 112(1)
  061f3f8  std 15, 120(1)
  061f3fc  std 16, 128(1)
  061f400  std 17, 136(1)
  061f404  std 18, 144(1)
  061f408  std 19, 152(1)
  061f40c  std 20, 160(1)
  061f410  std 21, 168(1)
  061f414  std 22, 176(1)
  061f418  std 23, 184(1)
  061f41c  std 25, 200(1)
  061f420  std 26, 208(1)
  061f424  std 27, 216(1)
  061f428  std 28, 224(1)
  061f42c  std 29, 232(1)
  061f430  std 31, 248(1)
  061f434  std 0, 272(1)
  061f438  lwz 30, -29444(2)
  061f43c  mr 24, 3
  061f440  bt 30, 0x61f624
  061f444  bl 0x6272e8
  061f448  nop
  061f44c  lwz 23, -32752(30)
  061f450  lwz 0, 0(23)
  061f454  cmpwi 7, 0, 0
  061f458  bf 29, 0x61f5c0
  061f45c  addi 25, 24, 20
  061f460  li 19, 0
  061f464  li 11, 0
  061f468  li 16, 0
  061f46c  lwz 9, 0(25)
  061f470  addi 26, 11, 32
  061f474  cmpwi 7, 9, 0
  061f478  bt 30, 0x61f598
  061f47c  lwz 0, 0(23)
  061f480  mr 31, 11
  061f484  cmpw 7, 11, 0
  061f488  bf 28, 0x61f598
  061f48c  mr 28, 16
  061f490  lwz 21, -32768(30)
  061f494  li 22, 1
  061f498  lwz 20, -32680(30)
  061f49c  lwz 18, -32676(30)
  061f4a0  lwz 17, -32672(30)
  061f4a4  lwz 14, -32592(30)
  061f4a8  lwz 15, -32596(30)
  061f4ac  b 0x61f4d0
  061f4b0  addi 31, 31, 1
  061f4b4  cmpw 7, 26, 31
  061f4b8  bf 29, 0x61f598
  061f4bc  lwz 0, 0(23)
  061f4c0  addi 28, 28, 104
  061f4c4  cmpw 7, 0, 31
  061f4c8  bf 29, 0x61f598
  061f4cc  lwz 9, 0(25)
  061f4d0  srawi 27, 31, 5
  061f4d4  addze 27, 27
  061f4d8  slwi 0, 27, 5
  061f4dc  sub 0, 31, 0
  061f4e0  slw 29, 22, 0
  061f4e4  and 0, 29, 9
  061f4e8  cmpwi 0, 0
  061f4ec  bt 2, 0x61f4b0
  061f4f0  lwz 0, 0(21)
  061f4f4  add 0, 28, 0
  061f4f8  clrldi 11, 0, 32
  061f4fc  lwz 9, 16(11)
  061f500  cmpwi 7, 9, 0
  061f504  bt 30, 0x61f514
  061f508  lwz 0, 40(11)
  061f50c  cmpw 7, 0, 24
  061f510  bt 30, 0x61f56c
  061f514  lwz 3, -32532(30)
  061f518  mr 4, 20
  061f51c  li 5, 1278
  061f520  bl 0x61948c
  061f524  nop
  061f528  lwz 3, -32684(30)
  061f52c  mr 4, 20
  061f530  li 5, 1279
  061f534  bl 0x61948c
  061f538  nop
  061f53c  lbz 0, 0(18)
  061f540  cmpwi 7, 0, 0
  061f544  bf 30, 0x61f5c8
  061f548  lbz 0, 0(17)
  061f54c  cmpwi 7, 0, 0
  061f550  bf- 30, 0x61f620
  061f554  lwz 9, 0(21)
  061f558  add 9, 28, 9
  061f55c  clrldi 9, 9, 32
  061f560  lwz 0, 40(9)
  061f564  cmpw 7, 0, 24
  061f568  bf 30, 0x61f4b0
  061f56c  slwi 0, 27, 2
  061f570  addi 31, 31, 1
  061f574  extsw 0, 0
  061f578  cmpw 7, 26, 31
  061f57c  lwzx 9, 14, 0
  061f580  lwzx 11, 15, 0
  061f584  andc 9, 9, 29
  061f588  or 11, 29, 11
  061f58c  stwx 9, 14, 0
  061f590  stwx 11, 15, 0
  061f594  bt 29, 0x61f4bc
  061f598  lwz 9, 0(23)
  061f59c  addi 19, 19, 1
  061f5a0  addi 25, 25, 4
  061f5a4  addi 9, 9, 31
  061f5a8  mr 11, 26
  061f5ac  srawi 9, 9, 5
  061f5b0  addze 9, 9
  061f5b4  addi 16, 16, 3328
  061f5b8  cmpw 7, 9, 19
  061f5bc  bt 29, 0x61f46c
  061f5c0  bl 0x6271f4
  061f5c4  nop
  061f5c8  ld 0, 272(1)
  061f5cc  ld 14, 112(1)
  061f5d0  ld 15, 120(1)
  061f5d4  mtlr 0
  061f5d8  ld 16, 128(1)
  061f5dc  ld 17, 136(1)
  061f5e0  ld 18, 144(1)
  061f5e4  ld 19, 152(1)
  061f5e8  ld 20, 160(1)
  061f5ec  ld 21, 168(1)
  061f5f0  ld 22, 176(1)
  061f5f4  ld 23, 184(1)
  061f5f8  ld 24, 192(1)
  061f5fc  ld 25, 200(1)
  061f600  ld 26, 208(1)
  061f604  ld 27, 216(1)
  061f608  ld 28, 224(1)
  061f60c  ld 29, 232(1)
  061f610  ld 30, 240(1)
  061f614  ld 31, 248(1)
  061f618  addi 1, 1, 256
  061f61c  blr
  061f620  trap
  061f624  lwz 3, -32684(30)
  061f628  li 5, 1257
  061f62c  lwz 4, -32680(30)
  061f630  bl 0x61948c
  061f634  nop
  061f638  lwz 9, -32676(30)
  061f63c  lbz 0, 0(9)
  061f640  cmpwi 7, 0, 0
  061f644  bf 30, 0x61f5c8
  061f648  lwz 9, -32672(30)
  061f64c  lbz 0, 0(9)
  061f650  twnei 0, 0
  061f654  b 0x61f444

FUN_0061f658:   # 0x61f658, 0x150 bytes
  061f658  cmpwi 7, 3, 0
  061f65c  mflr 0
  061f660  stdu 1, -160(1)
  061f664  stfd 31, 152(1)
  061f668  fmr 31, 1
  061f66c  std 27, 112(1)
  061f670  std 28, 120(1)
  061f674  std 29, 128(1)
  061f678  std 30, 136(1)
  061f67c  std 31, 144(1)
  061f680  std 0, 176(1)
  061f684  lwz 30, -29444(2)
  061f688  mr 31, 3
  061f68c  mr 27, 5
  061f690  mr 28, 6
  061f694  mr 29, 7
  061f698  bt 28, 0x61f6ac
  061f69c  lwz 9, -32752(30)
  061f6a0  lwz 0, 0(9)
  061f6a4  cmpw 7, 3, 0
  061f6a8  bt 28, 0x61f748
  061f6ac  lwz 3, -32684(30)
  061f6b0  li 5, 945
  061f6b4  lwz 4, -32680(30)
  061f6b8  bl 0x61948c
  061f6bc  nop
  061f6c0  lwz 9, -32676(30)
  061f6c4  lbz 0, 0(9)
  061f6c8  cmpwi 7, 0, 0
  061f6cc  bf 30, 0x61f720
  061f6d0  lwz 9, -32672(30)
  061f6d4  lbz 0, 0(9)
  061f6d8  twnei 0, 0
  061f6dc  bl 0x6272e8
  061f6e0  nop
  061f6e4  lwz 11, -32768(30)
  061f6e8  mulli 0, 31, 104
  061f6ec  lwz 9, 0(11)
  061f6f0  add 0, 0, 9
  061f6f4  clrldi 3, 0, 32
  061f6f8  lwz 9, 40(3)
  061f6fc  cmpw 7, 9, 29
  061f700  bt 30, 0x61f76c
  061f704  lwz 4, -32680(30)
  061f708  li 5, 953
  061f70c  lwz 3, -32528(30)
  061f710  bl 0x61948c
  061f714  nop
  061f718  bl 0x6271f4
  061f71c  nop
  061f720  ld 0, 176(1)
  061f724  ld 27, 112(1)
  061f728  ld 28, 120(1)
  061f72c  mtlr 0
  061f730  ld 29, 128(1)
  061f734  ld 30, 136(1)
  061f738  ld 31, 144(1)
  061f73c  lfd 31, 152(1)
  061f740  addi 1, 1, 160
  061f744  blr
  061f748  lfs 0, -32632(30)
  061f74c  fcmpu 7, 1, 0
  061f750  bt 28, 0x61f6ac
  061f754  lfs 0, -32720(30)
  061f758  fcmpu 7, 1, 0
  061f75c  bt 29, 0x61f6ac
  061f760  cmplwi 7, 6, 360
  061f764  bf 29, 0x61f6dc
  061f768  b 0x61f6ac
  061f76c  stw 28, 64(3)
  061f770  stfs 31, 48(3)
  061f774  stw 27, 56(3)
  061f778  bl 0x6271f4
  061f77c  nop
  061f780  ld 0, 176(1)
  061f784  ld 27, 112(1)
  061f788  ld 28, 120(1)
  061f78c  mtlr 0
  061f790  ld 29, 128(1)
  061f794  ld 30, 136(1)
  061f798  ld 31, 144(1)
  061f79c  lfd 31, 152(1)
  061f7a0  addi 1, 1, 160
  061f7a4  blr

FUN_0061f7a8:   # 0x61f7a8, 0x24 bytes
  061f7a8  stdu 1, -128(1)
  061f7ac  mflr 0
  061f7b0  std 0, 144(1)
  061f7b4  bl 0x6271f4
  061f7b8  nop
  061f7bc  ld 0, 144(1)
  061f7c0  addi 1, 1, 128
  061f7c4  mtlr 0
  061f7c8  blr

FUN_0061f7cc:   # 0x61f7cc, 0x290 bytes
  061f7cc  mfcr 12
  061f7d0  cmpwi 7, 3, 0
  061f7d4  stdu 1, -176(1)
  061f7d8  std 30, 160(1)
  061f7dc  std 31, 168(1)
  061f7e0  std 28, 144(1)
  061f7e4  std 29, 152(1)
  061f7e8  lwz 30, -29444(2)
  061f7ec  mr 31, 3
  061f7f0  stw 12, 184(1)
  061f7f4  mflr 0
  061f7f8  std 0, 192(1)
  061f7fc  bt 28, 0x61f994
  061f800  lwz 9, -32752(30)
  061f804  lwz 0, 0(9)
  061f808  cmpw 7, 3, 0
  061f80c  bf 28, 0x61f994
  061f810  lwz 28, -32768(30)
  061f814  mulli 29, 31, 104
  061f818  lwz 0, 0(28)
  061f81c  add 0, 29, 0
  061f820  clrldi 9, 0, 32
  061f824  lwz 31, 40(9)
  061f828  cmpwi 4, 31, 0
  061f82c  bt 18, 0x61f9e8
  061f830  clrldi 8, 31, 32
  061f834  addi 11, 1, 112
  061f838  lfs 13, 340(8)
  061f83c  lfs 0, 344(8)
  061f840  fadds 0, 0, 13
  061f844  lfs 11, 348(8)
  061f848  lfs 12, 352(8)
  061f84c  fadds 0, 0, 11
  061f850  fadds 13, 0, 12
  061f854  fmr 0, 13
  061f858  fctiwz 0, 0
  061f85c  stfiwx 0, 0, 11
  061f860  lwz 0, 112(1)
  061f864  cmpwi 7, 0, -1
  061f868  bt 28, 0x61fa50
  061f86c  lfs 0, -32720(30)
  061f870  fcmpu 7, 13, 0
  061f874  bf 29, 0x61fa18
  061f878  lwz 0, 32(9)
  061f87c  addi 9, 1, 112
  061f880  std 0, 128(1)
  061f884  lfd 12, 128(1)
  061f888  fcfid 12, 12
  061f88c  frsp 0, 12
  061f890  fctiwz 0, 0
  061f894  stfiwx 0, 0, 9
  061f898  lwz 7, 112(1)
  061f89c  lwz 10, 336(8)
  061f8a0  lwz 9, 324(8)
  061f8a4  lwz 11, 332(8)
  061f8a8  lwz 0, 328(8)
  061f8ac  add 9, 9, 11
  061f8b0  add 0, 0, 10
  061f8b4  add 9, 9, 0
  061f8b8  add 9, 9, 7
  061f8bc  cmpwi 7, 9, 7680
  061f8c0  mr 0, 9
  061f8c4  bf 29, 0x61f8cc
  061f8c8  li 0, 7680
  061f8cc  cmpwi 7, 0, -7680
  061f8d0  lfs 1, -32516(30)
  061f8d4  bf 28, 0x61f8dc
  061f8d8  li 0, -7680
  061f8dc  extsw 0, 0
  061f8e0  lfs 0, -32508(30)
  061f8e4  std 0, 128(1)
  061f8e8  lfd 12, 128(1)
  061f8ec  fcfid 12, 12
  061f8f0  frsp 2, 12
  061f8f4  fdivs 2, 2, 0
  061f8f8  bl 0x5dcbd8
  061f8fc  nop
  061f900  lwz 11, -32500(30)
  061f904  lwz 9, 0(28)
  061f908  add 9, 29, 9
  061f90c  lwz 0, 0(11)
  061f910  clrldi 9, 9, 32
  061f914  clrlwi 0, 0, 31
  061f918  cmpwi 7, 0, 0
  061f91c  lfs 0, 72(9)
  061f920  fmuls 1, 1, 0
  061f924  bt 30, 0x61f934
  061f928  lwz 9, -32496(30)
  061f92c  lfs 0, 0(9)
  061f930  fmuls 1, 1, 0
  061f934  bt 18, 0x61f96c
  061f938  clrldi 9, 31, 32
  061f93c  lwz 11, -32492(30)
  061f940  lbz 0, 16(9)
  061f944  extsb 0, 0
  061f948  slwi 0, 0, 2
  061f94c  extsw 0, 0
  061f950  lwzx 9, 11, 0
  061f954  clrlwi 9, 9, 31
  061f958  cmpwi 7, 9, 0
  061f95c  bt 30, 0x61f96c
  061f960  lwz 9, -32488(30)
  061f964  lfsx 0, 9, 0
  061f968  fmuls 1, 1, 0
  061f96c  ld 0, 192(1)
  061f970  lwz 12, 184(1)
  061f974  ld 28, 144(1)
  061f978  mtlr 0
  061f97c  ld 29, 152(1)
  061f980  mtocrf 8, 12
  061f984  ld 30, 160(1)
  061f988  ld 31, 168(1)
  061f98c  addi 1, 1, 176
  061f990  blr
  061f994  lwz 3, -32684(30)
  061f998  li 5, 2377
  061f99c  lwz 4, -32680(30)
  061f9a0  bl 0x61948c
  061f9a4  nop
  061f9a8  lwz 9, -32676(30)
  061f9ac  lfs 1, -32632(30)
  061f9b0  lbz 0, 0(9)
  061f9b4  cmpwi 7, 0, 0
  061f9b8  bf 30, 0x61f96c
  061f9bc  lwz 9, -32672(30)
  061f9c0  mulli 29, 31, 104
  061f9c4  lbz 0, 0(9)
  061f9c8  twnei 0, 0
  061f9cc  lwz 28, -32768(30)
  061f9d0  lwz 0, 0(28)
  061f9d4  add 0, 29, 0
  061f9d8  clrldi 9, 0, 32
  061f9dc  lwz 31, 40(9)
  061f9e0  cmpwi 4, 31, 0
  061f9e4  bf 18, 0x61f830
  061f9e8  lwz 0, 32(9)
  061f9ec  addi 9, 1, 112
  061f9f0  lfs 13, -32632(30)
  061f9f4  std 0, 128(1)
  061f9f8  lfd 12, 128(1)
  061f9fc  fcfid 12, 12
  061fa00  frsp 0, 12
  061fa04  fmuls 0, 0, 13
  061fa08  fctiwz 0, 0
  061fa0c  stfiwx 0, 0, 9
  061fa10  lwz 9, 112(1)
  061fa14  b 0x61f8bc
  061fa18  lfs 0, -32632(30)
  061fa1c  fcmpu 7, 13, 0
  061fa20  bt 28, 0x61fa54
  061fa24  lwz 0, 32(9)
  061fa28  std 0, 128(1)
  061fa2c  lfd 12, 128(1)
  061fa30  addi 9, 1, 112
  061fa34  fcfid 12, 12
  061fa38  frsp 0, 12
  061fa3c  fmuls 0, 13, 0
  061fa40  fctiwz 0, 0
  061fa44  stfiwx 0, 0, 9
  061fa48  lwz 7, 112(1)
  061fa4c  b 0x61f89c
  061fa50  lfs 13, -32524(30)
  061fa54  lwz 0, 36(9)
  061fa58  b 0x61fa28

FUN_0061fa5c:   # 0x61fa5c, 0x59c bytes
  061fa5c  stdu 1, -272(1)
  061fa60  mflr 0
  061fa64  std 30, 256(1)
  061fa68  lwz 30, -29444(2)
  061fa6c  std 29, 248(1)
  061fa70  std 0, 288(1)
  061fa74  std 14, 128(1)
  061fa78  std 15, 136(1)
  061fa7c  std 16, 144(1)
  061fa80  std 17, 152(1)
  061fa84  std 18, 160(1)
  061fa88  std 19, 168(1)
  061fa8c  std 20, 176(1)
  061fa90  std 21, 184(1)
  061fa94  std 22, 192(1)
  061fa98  std 23, 200(1)
  061fa9c  std 24, 208(1)
  061faa0  std 25, 216(1)
  061faa4  std 26, 224(1)
  061faa8  std 27, 232(1)
  061faac  std 28, 240(1)
  061fab0  std 31, 264(1)
  061fab4  bl 0x6272e8
  061fab8  nop
  061fabc  lwz 29, -32696(30)
  061fac0  lwz 0, 0(29)
  061fac4  cmpwi 7, 0, 0
  061fac8  bf 30, 0x61ff7c
  061facc  lwz 25, -32752(30)
  061fad0  lwz 0, 0(25)
  061fad4  cmpwi 7, 0, 0
  061fad8  bf 29, 0x61fff0
  061fadc  li 9, 0
  061fae0  lwz 10, -32756(30)
  061fae4  lwz 11, -32588(30)
  061fae8  li 26, 32
  061faec  stw 9, 120(1)
  061faf0  stw 10, 116(1)
  061faf4  stw 11, 112(1)
  061faf8  lwz 14, -32584(30)
  061fafc  li 21, 0
  061fb00  lwz 15, -32580(30)
  061fb04  li 17, 0
  061fb08  lwz 18, -32484(30)
  061fb0c  li 16, 0
  061fb10  lwz 20, 116(1)
  061fb14  lwz 0, 0(20)
  061fb18  cmpwi 7, 0, 0
  061fb1c  bt 30, 0x61fc04
  061fb20  cmpw 7, 26, 21
  061fb24  mr 31, 21
  061fb28  bf 29, 0x61fc04
  061fb2c  lwz 0, 0(25)
  061fb30  cmpw 7, 0, 21
  061fb34  bf 29, 0x61fc04
  061fb38  mr 28, 17
  061fb3c  lwz 27, -32768(30)
  061fb40  li 24, 1
  061fb44  b 0x61fb64
  061fb48  addi 31, 31, 1
  061fb4c  addi 28, 28, 104
  061fb50  cmpw 7, 31, 26
  061fb54  bf 28, 0x61fc04
  061fb58  lwz 0, 0(25)
  061fb5c  cmpw 7, 0, 31
  061fb60  bf 29, 0x61fc04
  061fb64  lwz 0, 0(27)
  061fb68  srawi 9, 31, 5
  061fb6c  addze 9, 9
  061fb70  add 0, 28, 0
  061fb74  slwi 9, 9, 5
  061fb78  clrldi 29, 0, 32
  061fb7c  sub 9, 31, 9
  061fb80  slw 9, 24, 9
  061fb84  lwz 0, 16(29)
  061fb88  cmpwi 7, 0, 0
  061fb8c  bt 30, 0x61fb48
  061fb90  lwz 0, 0(20)
  061fb94  extsw 3, 31
  061fb98  and 10, 9, 0
  061fb9c  cmpwi 10, 0
  061fba0  bt 2, 0x61fb48
  061fba4  bl 0x61d850
  061fba8  lwz 0, 0(27)
  061fbac  stfs 1, 52(29)
  061fbb0  li 8, 0
  061fbb4  add 0, 28, 0
  061fbb8  clrldi 9, 0, 32
  061fbbc  lwz 11, 40(9)
  061fbc0  lwz 3, 96(9)
  061fbc4  cmpwi 7, 11, 0
  061fbc8  lfs 1, 52(9)
  061fbcc  clrldi 3, 3, 32
  061fbd0  lfs 2, 80(9)
  061fbd4  lfs 3, 84(9)
  061fbd8  lfs 4, 88(9)
  061fbdc  bt 30, 0x61fbe4
  061fbe0  addi 8, 11, 360
  061fbe4  clrldi 8, 8, 32
  061fbe8  lwz 9, 24(9)
  061fbec  addi 31, 31, 1
  061fbf0  bl 0x625f8c
  061fbf4  nop
  061fbf8  addi 28, 28, 104
  061fbfc  cmpw 7, 31, 26
  061fc00  bt 28, 0x61fb58
  061fc04  lwz 22, 112(1)
  061fc08  lwz 0, 0(22)
  061fc0c  cmpwi 7, 0, 0
  061fc10  bt 30, 0x61fd00
  061fc14  cmpw 7, 26, 21
  061fc18  mr 31, 21
  061fc1c  bf 29, 0x61fd00
  061fc20  lwz 0, 0(25)
  061fc24  cmpw 7, 0, 21
  061fc28  bf 29, 0x61fd00
  061fc2c  mr 29, 17
  061fc30  lwz 27, -32768(30)
  061fc34  li 28, 1
  061fc38  b 0x61fc58
  061fc3c  addi 31, 31, 1
  061fc40  addi 29, 29, 104
  061fc44  cmpw 7, 31, 26
  061fc48  bf 28, 0x61fd00
  061fc4c  lwz 0, 0(25)
  061fc50  cmpw 7, 0, 31
  061fc54  bf 29, 0x61fd00
  061fc58  lwz 0, 0(27)
  061fc5c  srawi 9, 31, 5
  061fc60  addze 9, 9
  061fc64  add 4, 29, 0
  061fc68  slwi 9, 9, 5
  061fc6c  clrldi 11, 4, 32
  061fc70  sub 9, 31, 9
  061fc74  slw 9, 28, 9
  061fc78  lwz 0, 16(11)
  061fc7c  cmpwi 7, 0, 0
  061fc80  bt 30, 0x61fc3c
  061fc84  lwz 0, 0(22)
  061fc88  addi 5, 4, 68
  061fc8c  addi 4, 4, 60
  061fc90  and 10, 9, 0
  061fc94  clrldi 5, 5, 32
  061fc98  cmpwi 10, 0
  061fc9c  clrldi 4, 4, 32
  061fca0  extsw 3, 31
  061fca4  bt 2, 0x61fc3c
  061fca8  bl 0x61d3a0
  061fcac  lwz 9, 0(27)
  061fcb0  li 6, 0
  061fcb4  add 9, 29, 9
  061fcb8  clrldi 9, 9, 32
  061fcbc  lwz 11, 40(9)
  061fcc0  lwz 3, 96(9)
  061fcc4  cmpwi 7, 11, 0
  061fcc8  lwz 4, 60(9)
  061fccc  lwz 5, 68(9)
  061fcd0  clrldi 3, 3, 32
  061fcd4  clrldi 4, 4, 32
  061fcd8  clrldi 5, 5, 32
  061fcdc  bt 30, 0x61fce4
  061fce0  addi 6, 11, 360
  061fce4  clrldi 6, 6, 32
  061fce8  addi 31, 31, 1
  061fcec  bl 0x62c3a0
  061fcf0  nop
  061fcf4  addi 29, 29, 104
  061fcf8  cmpw 7, 31, 26
  061fcfc  bt 28, 0x61fc4c
  061fd00  clrldi 24, 14, 32
  061fd04  lwz 0, 0(24)
  061fd08  cmpwi 7, 0, 0
  061fd0c  bf 30, 0x61fd1c
  061fd10  lwz 0, 0(18)
  061fd14  cmpwi 7, 0, 0
  061fd18  bt 30, 0x61fdec
  061fd1c  cmpw 7, 26, 21
  061fd20  mr 31, 21
  061fd24  bf 29, 0x61fdec
  061fd28  lwz 0, 0(25)
  061fd2c  cmpw 7, 0, 21
  061fd30  bf 29, 0x61fdec
  061fd34  lwz 27, -32768(30)
  061fd38  mr 29, 17
  061fd3c  li 23, 1
  061fd40  mr 19, 27
  061fd44  lwz 0, 0(27)
  061fd48  srawi 9, 31, 5
  061fd4c  addze 9, 9
  061fd50  add 0, 29, 0
  061fd54  slwi 9, 9, 5
  061fd58  clrldi 28, 0, 32
  061fd5c  sub 9, 31, 9
  061fd60  slw 9, 23, 9
  061fd64  lwz 0, 16(28)
  061fd68  cmpwi 7, 0, 0
  061fd6c  bt 30, 0x61fdd0
  061fd70  lwz 0, 0(24)
  061fd74  extsw 3, 31
  061fd78  and 10, 9, 0
  061fd7c  cmpwi 10, 0
  061fd80  bf 2, 0x61fd90
  061fd84  lwz 0, 0(18)
  061fd88  cmpwi 7, 0, 0
  061fd8c  bt 30, 0x61fdd0
  061fd90  bl 0x61f7cc
  061fd94  lwz 9, 0(19)
  061fd98  stfs 1, 76(28)
  061fd9c  li 5, 0
  061fda0  add 9, 29, 9
  061fda4  clrldi 9, 9, 32
  061fda8  lwz 11, 40(9)
  061fdac  lwz 3, 96(9)
  061fdb0  cmpwi 7, 11, 0
  061fdb4  lfs 1, 76(9)
  061fdb8  clrldi 3, 3, 32
  061fdbc  bt 30, 0x61fdc4
  061fdc0  addi 5, 11, 360
  061fdc4  clrldi 5, 5, 32
  061fdc8  bl 0x626434
  061fdcc  nop
  061fdd0  addi 31, 31, 1
  061fdd4  addi 29, 29, 104
  061fdd8  cmpw 7, 26, 31
  061fddc  bf 29, 0x61fdec
  061fde0  lwz 0, 0(25)
  061fde4  cmpw 7, 0, 31
  061fde8  bt 29, 0x61fd44
  061fdec  clrldi 28, 15, 32
  061fdf0  lwz 0, 0(28)
  061fdf4  cmpwi 7, 0, 0
  061fdf8  bt 30, 0x61feb4
  061fdfc  cmpw 7, 26, 21
  061fe00  mr 31, 21
  061fe04  bf 29, 0x61feb4
  061fe08  lwz 0, 0(25)
  061fe0c  cmpw 7, 21, 0
  061fe10  bf 28, 0x61feb4
  061fe14  mr 29, 17
  061fe18  lwz 27, -32768(30)
  061fe1c  li 23, 1
  061fe20  lwz 9, 0(27)
  061fe24  srawi 0, 31, 5
  061fe28  addze 0, 0
  061fe2c  add 9, 29, 9
  061fe30  slwi 0, 0, 5
  061fe34  clrldi 9, 9, 32
  061fe38  sub 0, 31, 0
  061fe3c  addi 29, 29, 104
  061fe40  slw 11, 23, 0
  061fe44  addi 31, 31, 1
  061fe48  lwz 0, 16(9)
  061fe4c  cmpwi 7, 0, 0
  061fe50  bt 30, 0x61fea0
  061fe54  lwz 0, 0(28)
  061fe58  li 8, 0
  061fe5c  and 10, 11, 0
  061fe60  cmpwi 10, 0
  061fe64  bt 2, 0x61fea0
  061fe68  lwz 11, 40(9)
  061fe6c  lwz 3, 96(9)
  061fe70  cmpwi 7, 11, 0
  061fe74  lfs 1, 52(9)
  061fe78  lfs 2, 80(9)
  061fe7c  clrldi 3, 3, 32
  061fe80  lfs 3, 84(9)
  061fe84  lfs 4, 88(9)
  061fe88  bt 30, 0x61fe90
  061fe8c  addi 8, 11, 360
  061fe90  clrldi 8, 8, 32
  061fe94  lwz 9, 24(9)
  061fe98  bl 0x62de84
  061fe9c  nop
  061fea0  cmpw 7, 31, 26
  061fea4  bf 28, 0x61feb4
  061fea8  lwz 0, 0(25)
  061feac  cmpw 7, 0, 31
  061feb0  bt 29, 0x61fe20
  061feb4  lwz 9, 0(25)
  061feb8  addi 14, 14, 4
  061febc  lwz 10, 120(1)
  061fec0  addi 15, 15, 4
  061fec4  addi 9, 9, 31
  061fec8  lwz 11, 116(1)
  061fecc  addi 10, 10, 1
  061fed0  srawi 9, 9, 5
  061fed4  addze 9, 9
  061fed8  addi 11, 11, 4
  061fedc  cmpw 7, 9, 10
  061fee0  lwz 9, 112(1)
  061fee4  stw 10, 120(1)
  061fee8  addi 9, 9, 4
  061feec  stw 16, 0(20)
  061fef0  stw 16, 0(22)
  061fef4  stw 16, 0(24)
  061fef8  stw 16, 0(28)
  061fefc  stw 11, 116(1)
  061ff00  stw 9, 112(1)
  061ff04  addi 26, 26, 32
  061ff08  addi 21, 21, 32
  061ff0c  addi 17, 17, 3328
  061ff10  bt 29, 0x61fb10
  061ff14  li 0, 0
  061ff18  stw 0, 0(18)
  061ff1c  bl 0x6271f4
  061ff20  nop
  061ff24  ld 0, 288(1)
  061ff28  ld 14, 128(1)
  061ff2c  ld 15, 136(1)
  061ff30  mtlr 0
  061ff34  ld 16, 144(1)
  061ff38  ld 17, 152(1)
  061ff3c  ld 18, 160(1)
  061ff40  ld 19, 168(1)
  061ff44  ld 20, 176(1)
  061ff48  ld 21, 184(1)
  061ff4c  ld 22, 192(1)
  061ff50  ld 23, 200(1)
  061ff54  ld 24, 208(1)
  061ff58  ld 25, 216(1)
  061ff5c  ld 26, 224(1)
  061ff60  ld 27, 232(1)
  061ff64  ld 28, 240(1)
  061ff68  ld 29, 248(1)
  061ff6c  ld 30, 256(1)
  061ff70  ld 31, 264(1)
  061ff74  addi 1, 1, 272
  061ff78  blr
  061ff7c  bl 0x619848
  061ff80  nop
  061ff84  cmpwi 7, 3, 0
  061ff88  mr 31, 3
  061ff8c  bt 30, 0x61ffd8
  061ff90  li 28, 1
  061ff94  b 0x61ffa4
  061ff98  lwz 31, 548(31)
  061ff9c  cmpwi 7, 31, 0
  061ffa0  bt 30, 0x61ffd8
  061ffa4  lbz 0, 16(31)
  061ffa8  clrldi 3, 31, 32
  061ffac  lwz 9, 0(29)
  061ffb0  extsb 0, 0
  061ffb4  slw 0, 28, 0
  061ffb8  oris 0, 0, 32768
  061ffbc  and 10, 0, 9
  061ffc0  cmpwi 10, 0
  061ffc4  bt 2, 0x61ff98
  061ffc8  bl 0x61f128
  061ffcc  lwz 31, 548(31)
  061ffd0  cmpwi 7, 31, 0
  061ffd4  bf 30, 0x61ffa4
  061ffd8  lwz 25, -32752(30)
  061ffdc  li 0, 0
  061ffe0  stw 0, 0(29)
  061ffe4  lwz 0, 0(25)
  061ffe8  cmpwi 7, 0, 0
  061ffec  bt 29, 0x61fadc
  061fff0  lwz 18, -32484(30)
  061fff4  b 0x61ff14

FUN_0061fff8:   # 0x61fff8, 0x158 bytes
  061fff8  cmpwi 7, 3, 0
  061fffc  mflr 0
  0620000  stdu 1, -144(1)
  0620004  std 28, 112(1)
  0620008  std 29, 120(1)
  062000c  std 30, 128(1)
  0620010  std 31, 136(1)
  0620014  mr 28, 5
  0620018  lwz 30, -29444(2)
  062001c  std 0, 160(1)
  0620020  mr 31, 3
  0620024  mr 29, 4
  0620028  li 5, 1078
  062002c  bt 28, 0x6200a0
  0620030  lwz 9, -32752(30)
  0620034  lwz 0, 0(9)
  0620038  cmpw 7, 3, 0
  062003c  bf 28, 0x6200a0
  0620040  srawi 0, 31, 5
  0620044  addze 0, 0
  0620048  lwz 10, -32612(30)
  062004c  lfs 1, -32632(30)
  0620050  li 9, 1
  0620054  slwi 11, 0, 2
  0620058  slwi 0, 0, 5
  062005c  extsw 11, 11
  0620060  sub 0, 31, 0
  0620064  clrldi 4, 29, 56
  0620068  slw 9, 9, 0
  062006c  clrldi 5, 28, 56
  0620070  lwzx 0, 10, 11
  0620074  and 11, 9, 0
  0620078  cmpwi 11, 0
  062007c  bt 2, 0x620110
  0620080  ld 0, 160(1)
  0620084  ld 28, 112(1)
  0620088  ld 29, 120(1)
  062008c  mtlr 0
  0620090  ld 30, 128(1)
  0620094  ld 31, 136(1)
  0620098  addi 1, 1, 144
  062009c  blr
  06200a0  lwz 3, -32684(30)
  06200a4  lwz 4, -32680(30)
  06200a8  bl 0x61948c
  06200ac  nop
  06200b0  lwz 9, -32676(30)
  06200b4  lfs 1, -32632(30)
  06200b8  lbz 0, 0(9)
  06200bc  cmpwi 7, 0, 0
  06200c0  bf 30, 0x620080
  06200c4  lwz 9, -32672(30)
  06200c8  clrldi 4, 29, 56
  06200cc  clrldi 5, 28, 56
  06200d0  lbz 0, 0(9)
  06200d4  li 9, 1
  06200d8  twnei 0, 0
  06200dc  lwz 10, -32612(30)
  06200e0  srawi 0, 31, 5
  06200e4  addze 0, 0
  06200e8  lfs 1, -32632(30)
  06200ec  slwi 11, 0, 2
  06200f0  slwi 0, 0, 5
  06200f4  extsw 11, 11
  06200f8  sub 0, 31, 0
  06200fc  slw 9, 9, 0
  0620100  lwzx 0, 10, 11
  0620104  and 11, 9, 0
  0620108  cmpwi 11, 0
  062010c  bf 2, 0x620080
  0620110  lwz 9, -32768(30)
  0620114  mulli 11, 31, 104
  0620118  lwz 0, 0(9)
  062011c  add 11, 11, 0
  0620120  clrldi 11, 11, 32
  0620124  lwz 3, 96(11)
  0620128  bl 0x62f1f4
  062012c  nop
  0620130  ld 0, 160(1)
  0620134  ld 28, 112(1)
  0620138  ld 29, 120(1)
  062013c  mtlr 0
  0620140  ld 30, 128(1)
  0620144  ld 31, 136(1)
  0620148  addi 1, 1, 144
  062014c  blr

FUN_00620150:   # 0x620150, 0x140 bytes
  0620150  cmpwi 7, 3, 0
  0620154  mflr 0
  0620158  stdu 1, -144(1)
  062015c  std 29, 120(1)
  0620160  std 30, 128(1)
  0620164  std 31, 136(1)
  0620168  std 0, 160(1)
  062016c  lwz 30, -29444(2)
  0620170  li 5, 1054
  0620174  mr 31, 3
  0620178  mr 29, 4
  062017c  bt 28, 0x6201ec
  0620180  lwz 9, -32752(30)
  0620184  lwz 0, 0(9)
  0620188  cmpw 7, 3, 0
  062018c  bf 28, 0x6201ec
  0620190  srawi 11, 31, 5
  0620194  addze 11, 11
  0620198  lwz 8, -32612(30)
  062019c  li 0, 1
  06201a0  slwi 10, 11, 2
  06201a4  slwi 11, 11, 5
  06201a8  extsw 10, 10
  06201ac  sub 11, 31, 11
  06201b0  clrldi 4, 29, 32
  06201b4  slw 0, 0, 11
  06201b8  lwzx 9, 8, 10
  06201bc  and 11, 0, 9
  06201c0  cmpwi 11, 0
  06201c4  bt 2, 0x620250
  06201c8  ld 0, 160(1)
  06201cc  li 3, 0
  06201d0  ld 29, 120(1)
  06201d4  clrldi 3, 3, 32
  06201d8  ld 30, 128(1)
  06201dc  ld 31, 136(1)
  06201e0  mtlr 0
  06201e4  addi 1, 1, 144
  06201e8  blr
  06201ec  lwz 3, -32684(30)
  06201f0  lwz 4, -32680(30)
  06201f4  bl 0x61948c
  06201f8  nop
  06201fc  lwz 9, -32676(30)
  0620200  lbz 0, 0(9)
  0620204  cmpwi 7, 0, 0
  0620208  bf 30, 0x6201c8
  062020c  lwz 9, -32672(30)
  0620210  srawi 11, 31, 5
  0620214  addze 11, 11
  0620218  clrldi 4, 29, 32
  062021c  slwi 10, 11, 2
  0620220  lbz 0, 0(9)
  0620224  slwi 11, 11, 5
  0620228  extsw 10, 10
  062022c  twnei 0, 0
  0620230  lwz 8, -32612(30)
  0620234  sub 11, 31, 11
  0620238  li 0, 1
  062023c  slw 0, 0, 11
  0620240  lwzx 9, 8, 10
  0620244  and 11, 0, 9
  0620248  cmpwi 11, 0
  062024c  bf 2, 0x6201c8
  0620250  lwz 9, -32768(30)
  0620254  mulli 11, 31, 104
  0620258  lwz 0, 0(9)
  062025c  add 11, 11, 0
  0620260  clrldi 11, 11, 32
  0620264  lwz 3, 96(11)
  0620268  bl 0x62b288
  062026c  nop
  0620270  ld 0, 160(1)
  0620274  ld 29, 120(1)
  0620278  clrldi 3, 3, 32
  062027c  ld 30, 128(1)
  0620280  ld 31, 136(1)
  0620284  mtlr 0
  0620288  addi 1, 1, 144
  062028c  blr

FUN_00620290:   # 0x620290, 0x154 bytes
  0620290  cmpwi 7, 3, 0
  0620294  mflr 0
  0620298  stdu 1, -144(1)
  062029c  std 28, 112(1)
  06202a0  std 29, 120(1)
  06202a4  std 30, 128(1)
  06202a8  std 31, 136(1)
  06202ac  mr 29, 5
  06202b0  lwz 30, -29444(2)
  06202b4  std 0, 160(1)
  06202b8  mr 31, 3
  06202bc  mr 28, 4
  06202c0  li 5, 985
  06202c4  bt 28, 0x62034c
  06202c8  lwz 9, -32752(30)
  06202cc  cmpwi 6, 4, 0
  06202d0  lwz 0, 0(9)
  06202d4  cmpw 7, 3, 0
  06202d8  bf 28, 0x62034c
  06202dc  bt 26, 0x62034c
  06202e0  bl 0x6272e8
  06202e4  nop
  06202e8  lwz 9, -32768(30)
  06202ec  li 5, 993
  06202f0  mulli 11, 31, 104
  06202f4  lwz 0, 0(9)
  06202f8  add 11, 11, 0
  06202fc  clrldi 3, 11, 32
  0620300  lwz 9, 40(3)
  0620304  cmpw 7, 9, 29
  0620308  addi 4, 9, 360
  062030c  clrldi 4, 4, 32
  0620310  bt 30, 0x6203ac
  0620314  lwz 4, -32680(30)
  0620318  lwz 3, -32528(30)
  062031c  bl 0x61948c
  0620320  nop
  0620324  bl 0x6271f4
  0620328  nop
  062032c  ld 0, 160(1)
  0620330  ld 28, 112(1)
  0620334  ld 29, 120(1)
  0620338  mtlr 0
  062033c  ld 30, 128(1)
  0620340  ld 31, 136(1)
  0620344  addi 1, 1, 144
  0620348  blr
  062034c  lwz 3, -32684(30)
  0620350  lwz 4, -32680(30)
  0620354  bl 0x61948c
  0620358  nop
  062035c  lwz 9, -32676(30)
  0620360  lbz 0, 0(9)
  0620364  cmpwi 7, 0, 0
  0620368  bf 30, 0x62032c
  062036c  lwz 9, -32672(30)
  0620370  lbz 0, 0(9)
  0620374  twnei 0, 0
  0620378  bl 0x6272e8
  062037c  nop
  0620380  lwz 9, -32768(30)
  0620384  li 5, 993
  0620388  mulli 11, 31, 104
  062038c  lwz 0, 0(9)
  0620390  add 11, 11, 0
  0620394  clrldi 3, 11, 32
  0620398  lwz 9, 40(3)
  062039c  cmpw 7, 9, 29
  06203a0  addi 4, 9, 360
  06203a4  clrldi 4, 4, 32
  06203a8  bf 30, 0x620314
  06203ac  clrldi 5, 28, 32
  06203b0  lwz 3, 96(3)
  06203b4  bl 0x62ee18
  06203b8  nop
  06203bc  bl 0x6271f4
  06203c0  nop
  06203c4  ld 0, 160(1)
  06203c8  ld 28, 112(1)
  06203cc  ld 29, 120(1)
  06203d0  mtlr 0
  06203d4  ld 30, 128(1)
  06203d8  ld 31, 136(1)
  06203dc  addi 1, 1, 144
  06203e0  blr

FUN_006203e4:   # 0x6203e4, 0x388 bytes
  06203e4  cmpwi 7, 3, 0
  06203e8  mflr 0
  06203ec  stdu 1, -208(1)
  06203f0  std 30, 192(1)
  06203f4  std 31, 200(1)
  06203f8  std 21, 120(1)
  06203fc  std 22, 128(1)
  0620400  std 23, 136(1)
  0620404  std 24, 144(1)
  0620408  std 25, 152(1)
  062040c  std 26, 160(1)
  0620410  std 27, 168(1)
  0620414  std 28, 176(1)
  0620418  std 29, 184(1)
  062041c  std 0, 224(1)
  0620420  lwz 30, -29444(2)
  0620424  mr 31, 3
  0620428  bt 28, 0x6204fc
  062042c  lwz 9, -32752(30)
  0620430  lwz 0, 0(9)
  0620434  cmpw 7, 3, 0
  0620438  bf 28, 0x6204fc
  062043c  lwz 9, -32768(30)
  0620440  mulli 11, 31, 104
  0620444  lwz 0, 0(9)
  0620448  add 28, 11, 0
  062044c  clrldi 23, 28, 32
  0620450  lwz 0, 16(23)
  0620454  cmpwi 7, 0, 1
  0620458  bt 30, 0x62054c
  062045c  li 0, 1
  0620460  stw 0, 16(23)
  0620464  bl 0x604918
  0620468  nop
  062046c  lwz 9, -32476(30)
  0620470  li 0, 0
  0620474  stw 3, 20(23)
  0620478  stw 0, 0(23)
  062047c  lwz 0, 0(9)
  0620480  cmpwi 7, 0, 0
  0620484  bt 30, 0x6205c4
  0620488  cmpw 7, 28, 0
  062048c  bt 30, 0x620750
  0620490  clrldi 9, 0, 32
  0620494  lwz 0, 0(9)
  0620498  cmpwi 7, 0, 0
  062049c  cmpw 6, 28, 0
  06204a0  bt 30, 0x6205cc
  06204a4  bf 26, 0x620490
  06204a8  lwz 4, -32680(30)
  06204ac  extsw 6, 31
  06204b0  lwz 3, -32472(30)
  06204b4  li 5, 394
  06204b8  bl 0x61948c
  06204bc  nop
  06204c0  ld 0, 224(1)
  06204c4  ld 21, 120(1)
  06204c8  ld 22, 128(1)
  06204cc  mtlr 0
  06204d0  ld 23, 136(1)
  06204d4  ld 24, 144(1)
  06204d8  ld 25, 152(1)
  06204dc  ld 26, 160(1)
  06204e0  ld 27, 168(1)
  06204e4  ld 28, 176(1)
  06204e8  ld 29, 184(1)
  06204ec  ld 30, 192(1)
  06204f0  ld 31, 200(1)
  06204f4  addi 1, 1, 208
  06204f8  blr
  06204fc  lwz 3, -32684(30)
  0620500  li 5, 356
  0620504  lwz 4, -32680(30)
  0620508  bl 0x61948c
  062050c  nop
  0620510  lwz 9, -32676(30)
  0620514  lbz 0, 0(9)
  0620518  cmpwi 7, 0, 0
  062051c  bf 30, 0x6204c0
  0620520  lwz 9, -32672(30)
  0620524  mulli 11, 31, 104
  0620528  lbz 0, 0(9)
  062052c  twnei 0, 0
  0620530  lwz 9, -32768(30)
  0620534  lwz 0, 0(9)
  0620538  add 28, 11, 0
  062053c  clrldi 23, 28, 32
  0620540  lwz 0, 16(23)
  0620544  cmpwi 7, 0, 1
  0620548  bf 30, 0x62045c
  062054c  lwz 29, -32680(30)
  0620550  li 5, 367
  0620554  lwz 3, -32480(30)
  0620558  extsw 6, 31
  062055c  mr 4, 29
  0620560  bl 0x61948c
  0620564  nop
  0620568  lwz 3, -32684(30)
  062056c  mr 4, 29
  0620570  li 5, 368
  0620574  bl 0x61948c
  0620578  nop
  062057c  lwz 9, -32676(30)
  0620580  lbz 0, 0(9)
  0620584  cmpwi 7, 0, 0
  0620588  bf 30, 0x6204c0
  062058c  lwz 9, -32672(30)
  0620590  lbz 0, 0(9)
  0620594  twnei 0, 0
  0620598  li 0, 1
  062059c  stw 0, 16(23)
  06205a0  bl 0x604918
  06205a4  nop
  06205a8  lwz 9, -32476(30)
  06205ac  li 0, 0
  06205b0  stw 3, 20(23)
  06205b4  stw 0, 0(23)
  06205b8  lwz 0, 0(9)
  06205bc  cmpwi 7, 0, 0
  06205c0  bf 30, 0x620488
  06205c4  stw 28, 0(9)
  06205c8  b 0x6205d0
  06205cc  stw 28, 0(9)
  06205d0  lbz 0, 10(23)
  06205d4  cmplwi 7, 0, 31
  06205d8  bt 29, 0x620734
  06205dc  extsb 0, 0
  06205e0  lwz 11, -32748(30)
  06205e4  slwi 0, 0, 2
  06205e8  extsw 0, 0
  06205ec  lwzx 9, 11, 0
  06205f0  addi 9, 9, 1
  06205f4  stwx 9, 11, 0
  06205f8  srawi 9, 31, 5
  06205fc  addze 9, 9
  0620600  lwz 25, -32612(30)
  0620604  lwz 24, -32756(30)
  0620608  lwz 4, -32588(30)
  062060c  li 0, 1
  0620610  slwi 21, 9, 2
  0620614  lwz 3, -32584(30)
  0620618  slwi 9, 9, 5
  062061c  lwz 29, -32580(30)
  0620620  extsw 12, 21
  0620624  lwz 28, -32608(30)
  0620628  lwz 27, -32604(30)
  062062c  sub 9, 31, 9
  0620630  lwz 26, -32600(30)
  0620634  slw 31, 0, 9
  0620638  lwzx 5, 25, 12
  062063c  not 22, 31
  0620640  lwzx 6, 24, 12
  0620644  lwzx 0, 4, 12
  0620648  or 5, 5, 31
  062064c  lwzx 9, 3, 12
  0620650  or 6, 31, 6
  0620654  lwzx 11, 29, 12
  0620658  or 0, 31, 0
  062065c  lwzx 10, 28, 12
  0620660  or 9, 31, 9
  0620664  lwzx 8, 27, 12
  0620668  or 11, 31, 11
  062066c  lwzx 7, 26, 12
  0620670  and 10, 10, 22
  0620674  and 8, 22, 8
  0620678  and 7, 22, 7
  062067c  stwx 9, 3, 12
  0620680  stwx 11, 29, 12
  0620684  stwx 5, 25, 12
  0620688  stwx 6, 24, 12
  062068c  stwx 0, 4, 12
  0620690  stwx 10, 28, 12
  0620694  stwx 8, 27, 12
  0620698  stwx 7, 26, 12
  062069c  lbz 0, 10(23)
  06206a0  lwz 11, -32652(30)
  06206a4  extsb 0, 0
  06206a8  slwi 0, 0, 2
  06206ac  extsw 0, 0
  06206b0  lwzx 9, 11, 0
  06206b4  rlwinm 9, 9, 0, 30, 30
  06206b8  cmpwi 7, 9, 0
  06206bc  bt 30, 0x620720
  06206c0  lwz 9, -32596(30)
  06206c4  lwzx 0, 9, 12
  06206c8  or 0, 31, 0
  06206cc  stwx 0, 9, 12
  06206d0  lwz 11, -32592(30)
  06206d4  extsw 9, 21
  06206d8  ld 23, 136(1)
  06206dc  ld 21, 120(1)
  06206e0  ld 24, 144(1)
  06206e4  ld 25, 152(1)
  06206e8  lwzx 0, 11, 9
  06206ec  ld 26, 160(1)
  06206f0  and 0, 22, 0
  06206f4  ld 27, 168(1)
  06206f8  ld 22, 128(1)
  06206fc  stwx 0, 11, 9
  0620700  ld 0, 224(1)
  0620704  ld 28, 176(1)
  0620708  ld 29, 184(1)
  062070c  mtlr 0
  0620710  ld 30, 192(1)
  0620714  ld 31, 200(1)
  0620718  addi 1, 1, 208
  062071c  blr
  0620720  lwz 9, -32596(30)
  0620724  lwzx 0, 9, 12
  0620728  and 0, 22, 0
  062072c  stwx 0, 9, 12
  0620730  b 0x6206d0
  0620734  lwz 3, -32468(30)
  0620738  li 5, 408
  062073c  lwz 4, -32680(30)
  0620740  extsw 6, 31
  0620744  bl 0x61948c
  0620748  nop
  062074c  b 0x6205f8
  0620750  lwz 4, -32680(30)
  0620754  extsw 6, 31
  0620758  lwz 3, -32472(30)
  062075c  li 5, 385
  0620760  bl 0x61948c
  0620764  nop
  0620768  b 0x6204c0

FUN_0062076c:   # 0x62076c, 0x278 bytes
  062076c  stdu 1, -256(1)
  0620770  mflr 0
  0620774  std 30, 240(1)
  0620778  lwz 30, -29444(2)
  062077c  std 24, 192(1)
  0620780  std 25, 200(1)
  0620784  std 0, 272(1)
  0620788  std 14, 112(1)
  062078c  std 15, 120(1)
  0620790  std 16, 128(1)
  0620794  std 17, 136(1)
  0620798  std 18, 144(1)
  062079c  std 19, 152(1)
  06207a0  std 20, 160(1)
  06207a4  std 21, 168(1)
  06207a8  std 22, 176(1)
  06207ac  std 23, 184(1)
  06207b0  std 26, 208(1)
  06207b4  std 27, 216(1)
  06207b8  std 28, 224(1)
  06207bc  std 29, 232(1)
  06207c0  std 31, 248(1)
  06207c4  mr 25, 3
  06207c8  bl 0x6272e8
  06207cc  nop
  06207d0  lwz 24, -32752(30)
  06207d4  lwz 0, 0(24)
  06207d8  cmpwi 7, 0, 0
  06207dc  bf 29, 0x620970
  06207e0  addi 26, 25, 20
  06207e4  lwz 16, -32676(30)
  06207e8  li 21, 0
  06207ec  lwz 15, -32672(30)
  06207f0  li 3, 0
  06207f4  lwz 14, -32768(30)
  06207f8  li 17, 0
  06207fc  lwz 9, 0(26)
  0620800  addi 27, 3, 32
  0620804  cmpwi 7, 9, 0
  0620808  bt 30, 0x620948
  062080c  lwz 0, 0(24)
  0620810  mr 31, 3
  0620814  cmpw 7, 0, 3
  0620818  bf 29, 0x620948
  062081c  mr 29, 17
  0620820  lwz 22, -32680(30)
  0620824  li 23, 1
  0620828  mr 20, 14
  062082c  mr 19, 16
  0620830  mr 18, 15
  0620834  b 0x620858
  0620838  addi 31, 31, 1
  062083c  cmpw 7, 31, 27
  0620840  bf 28, 0x620948
  0620844  lwz 0, 0(24)
  0620848  addi 29, 29, 104
  062084c  cmpw 7, 0, 31
  0620850  bf 29, 0x620948
  0620854  lwz 9, 0(26)
  0620858  srawi 0, 31, 5
  062085c  addze 0, 0
  0620860  slwi 0, 0, 5
  0620864  sub 0, 31, 0
  0620868  slw 0, 23, 0
  062086c  and 11, 0, 9
  0620870  cmpwi 11, 0
  0620874  bt 2, 0x620838
  0620878  lwz 0, 0(20)
  062087c  mr 28, 20
  0620880  add 0, 29, 0
  0620884  clrldi 11, 0, 32
  0620888  lwz 9, 16(11)
  062088c  cmpwi 7, 9, 0
  0620890  bt 30, 0x6208a0
  0620894  lwz 0, 40(11)
  0620898  cmpw 7, 0, 25
  062089c  bt 30, 0x6209d0
  06208a0  lwz 3, -32532(30)
  06208a4  mr 4, 22
  06208a8  li 5, 1157
  06208ac  bl 0x61948c
  06208b0  nop
  06208b4  lwz 3, -32684(30)
  06208b8  mr 4, 22
  06208bc  li 5, 1158
  06208c0  bl 0x61948c
  06208c4  nop
  06208c8  lbz 0, 0(19)
  06208cc  cmpwi 7, 0, 0
  06208d0  bf 30, 0x620978
  06208d4  lbz 0, 0(18)
  06208d8  cmpwi 7, 0, 0
  06208dc  bf- 30, 0x6209e0
  06208e0  lwz 9, 0(28)
  06208e4  add 9, 29, 9
  06208e8  clrldi 9, 9, 32
  06208ec  lwz 0, 40(9)
  06208f0  cmpw 7, 0, 25
  06208f4  bf 30, 0x620838
  06208f8  extsw 3, 31
  06208fc  bl 0x6203e4
  0620900  lwz 0, 0(28)
  0620904  add 0, 29, 0
  0620908  clrldi 3, 0, 32
  062090c  lwz 9, 44(3)
  0620910  cmpwi 7, 9, 0
  0620914  bt 30, 0x620838
  0620918  clrldi 9, 9, 32
  062091c  lwz 4, 40(3)
  0620920  li 5, 5
  0620924  addi 31, 31, 1
  0620928  lwz 0, 0(9)
  062092c  std 2, 40(1)
  0620930  mtctr 0
  0620934  lwz 2, 4(9)
  0620938  bctrl
  062093c  ld 2, 40(1)
  0620940  cmpw 7, 31, 27
  0620944  bt 28, 0x620844
  0620948  lwz 9, 0(24)
  062094c  addi 21, 21, 1
  0620950  addi 26, 26, 4
  0620954  addi 9, 9, 31
  0620958  mr 3, 27
  062095c  srawi 9, 9, 5
  0620960  addze 9, 9
  0620964  addi 17, 17, 3328
  0620968  cmpw 7, 9, 21
  062096c  bt 29, 0x6207fc
  0620970  bl 0x6271f4
  0620974  nop
  0620978  ld 0, 272(1)
  062097c  ld 14, 112(1)
  0620980  ld 15, 120(1)
  0620984  mtlr 0
  0620988  ld 16, 128(1)
  062098c  ld 17, 136(1)
  0620990  ld 18, 144(1)
  0620994  ld 19, 152(1)
  0620998  ld 20, 160(1)
  062099c  ld 21, 168(1)
  06209a0  ld 22, 176(1)
  06209a4  ld 23, 184(1)
  06209a8  ld 24, 192(1)
  06209ac  ld 25, 200(1)
  06209b0  ld 26, 208(1)
  06209b4  ld 27, 216(1)
  06209b8  ld 28, 224(1)
  06209bc  ld 29, 232(1)
  06209c0  ld 30, 240(1)
  06209c4  ld 31, 248(1)
  06209c8  addi 1, 1, 256
  06209cc  blr
  06209d0  lwz 0, 44(11)
  06209d4  cmpwi 7, 0, 0
  06209d8  bf 30, 0x6208f8
  06209dc  b 0x6208a0
  06209e0  trap

FUN_006209e4:   # 0x6209e4, 0x170 bytes
  06209e4  cmpwi 7, 3, 0
  06209e8  mflr 0
  06209ec  stdu 1, -176(1)
  06209f0  stfd 31, 168(1)
  06209f4  li 5, 1019
  06209f8  std 28, 136(1)
  06209fc  fmr 31, 1
  0620a00  std 29, 144(1)
  0620a04  std 30, 152(1)
  0620a08  std 31, 160(1)
  0620a0c  std 0, 192(1)
  0620a10  lwz 30, -29444(2)
  0620a14  mr 31, 3
  0620a18  mr 28, 6
  0620a1c  mr 29, 4
  0620a20  bt 28, 0x620ab4
  0620a24  lwz 9, -32752(30)
  0620a28  lwz 0, 0(9)
  0620a2c  cmpw 7, 3, 0
  0620a30  bf 28, 0x620ab4
  0620a34  li 0, 0
  0620a38  stw 0, 112(1)
  0620a3c  lfs 0, 112(1)
  0620a40  fcmpu 7, 1, 0
  0620a44  bt 28, 0x620ab4
  0620a48  bl 0x6272e8
  0620a4c  nop
  0620a50  lwz 11, -32768(30)
  0620a54  clrldi 4, 29, 32
  0620a58  li 5, 1027
  0620a5c  mulli 9, 31, 104
  0620a60  lwz 0, 0(11)
  0620a64  add 9, 9, 0
  0620a68  clrldi 9, 9, 32
  0620a6c  lwz 0, 40(9)
  0620a70  cmpw 7, 0, 28
  0620a74  bt 30, 0x620b10
  0620a78  lwz 4, -32680(30)
  0620a7c  lwz 3, -32528(30)
  0620a80  bl 0x61948c
  0620a84  nop
  0620a88  bl 0x6271f4
  0620a8c  nop
  0620a90  ld 0, 192(1)
  0620a94  ld 28, 136(1)
  0620a98  ld 29, 144(1)
  0620a9c  mtlr 0
  0620aa0  ld 30, 152(1)
  0620aa4  ld 31, 160(1)
  0620aa8  lfd 31, 168(1)
  0620aac  addi 1, 1, 176
  0620ab0  blr
  0620ab4  lwz 3, -32684(30)
  0620ab8  lwz 4, -32680(30)
  0620abc  bl 0x61948c
  0620ac0  nop
  0620ac4  lwz 9, -32676(30)
  0620ac8  lbz 0, 0(9)
  0620acc  cmpwi 7, 0, 0
  0620ad0  bf 30, 0x620a90
  0620ad4  lwz 9, -32672(30)
  0620ad8  lbz 0, 0(9)
  0620adc  twnei 0, 0
  0620ae0  bl 0x6272e8
  0620ae4  nop
  0620ae8  lwz 11, -32768(30)
  0620aec  clrldi 4, 29, 32
  0620af0  li 5, 1027
  0620af4  mulli 9, 31, 104
  0620af8  lwz 0, 0(11)
  0620afc  add 9, 9, 0
  0620b00  clrldi 9, 9, 32
  0620b04  lwz 0, 40(9)
  0620b08  cmpw 7, 0, 28
  0620b0c  bf 30, 0x620a78
  0620b10  lwz 3, 96(9)
  0620b14  stfs 31, 72(9)
  0620b18  bl 0x6299b8
  0620b1c  nop
  0620b20  extsw 3, 31
  0620b24  bl 0x6203e4
  0620b28  bl 0x6271f4
  0620b2c  nop
  0620b30  ld 0, 192(1)
  0620b34  ld 28, 136(1)
  0620b38  ld 29, 144(1)
  0620b3c  mtlr 0
  0620b40  ld 30, 152(1)
  0620b44  ld 31, 160(1)
  0620b48  lfd 31, 168(1)
  0620b4c  addi 1, 1, 176
  0620b50  blr

FUN_00620b54:   # 0x620b54, 0x314 bytes
  0620b54  cmpwi 7, 3, 0
  0620b58  mflr 0
  0620b5c  stdu 1, -160(1)
  0620b60  std 26, 112(1)
  0620b64  std 28, 128(1)
  0620b68  std 30, 144(1)
  0620b6c  std 27, 120(1)
  0620b70  std 29, 136(1)
  0620b74  std 31, 152(1)
  0620b78  std 0, 176(1)
  0620b7c  lwz 30, -29444(2)
  0620b80  mr 28, 3
  0620b84  mr 26, 4
  0620b88  bt 28, 0x620c68
  0620b8c  lwz 9, -32752(30)
  0620b90  lwz 0, 0(9)
  0620b94  cmpw 7, 3, 0
  0620b98  bf 28, 0x620c68
  0620b9c  lwz 9, -32768(30)
  0620ba0  lwz 8, -32476(30)
  0620ba4  mulli 11, 28, 104
  0620ba8  lwz 0, 0(9)
  0620bac  lwz 10, 0(8)
  0620bb0  add 11, 11, 0
  0620bb4  cmpw 7, 11, 10
  0620bb8  bt 30, 0x620cb8
  0620bbc  cmpwi 7, 10, 0
  0620bc0  clrldi 31, 11, 32
  0620bc4  bt 30, 0x620bfc
  0620bc8  clrldi 9, 10, 32
  0620bcc  lwz 0, 0(9)
  0620bd0  cmpw 7, 11, 0
  0620bd4  bt 30, 0x620e60
  0620bd8  cmpwi 7, 0, 0
  0620bdc  clrldi 9, 0, 32
  0620be0  bt 30, 0x620e4c
  0620be4  lwz 0, 0(9)
  0620be8  cmpw 7, 11, 0
  0620bec  bf 30, 0x620bd8
  0620bf0  clrldi 31, 11, 32
  0620bf4  lwz 0, 0(31)
  0620bf8  stw 0, 0(9)
  0620bfc  lbz 11, 10(31)
  0620c00  cmplwi 7, 11, 31
  0620c04  bf 29, 0x620cd0
  0620c08  lbz 0, 11(31)
  0620c0c  cmplwi 7, 0, 4
  0620c10  bt 29, 0x620d18
  0620c14  lbz 0, 11(31)
  0620c18  cmpwi 7, 26, 0
  0620c1c  lwz 11, -32736(30)
  0620c20  extsb 0, 0
  0620c24  slwi 0, 0, 2
  0620c28  extsw 0, 0
  0620c2c  lwzx 9, 11, 0
  0620c30  addi 9, 9, 1
  0620c34  stwx 9, 11, 0
  0620c38  bt 30, 0x620d7c
  0620c3c  ld 0, 176(1)
  0620c40  extsw 3, 28
  0620c44  ld 26, 112(1)
  0620c48  ld 27, 120(1)
  0620c4c  mtlr 0
  0620c50  ld 28, 128(1)
  0620c54  ld 29, 136(1)
  0620c58  ld 30, 144(1)
  0620c5c  ld 31, 152(1)
  0620c60  addi 1, 1, 160
  0620c64  b 0x61dc38
  0620c68  lwz 3, -32684(30)
  0620c6c  li 5, 257
  0620c70  lwz 4, -32680(30)
  0620c74  bl 0x61948c
  0620c78  nop
  0620c7c  lwz 9, -32676(30)
  0620c80  lbz 0, 0(9)
  0620c84  cmpwi 7, 0, 0
  0620c88  bf 30, 0x620d54
  0620c8c  lwz 9, -32672(30)
  0620c90  mulli 11, 28, 104
  0620c94  lbz 0, 0(9)
  0620c98  twnei 0, 0
  0620c9c  lwz 9, -32768(30)
  0620ca0  lwz 8, -32476(30)
  0620ca4  lwz 0, 0(9)
  0620ca8  lwz 10, 0(8)
  0620cac  add 11, 11, 0
  0620cb0  cmpw 7, 11, 10
  0620cb4  bf 30, 0x620bbc
  0620cb8  clrldi 31, 11, 32
  0620cbc  lwz 0, 0(31)
  0620cc0  stw 0, 0(8)
  0620cc4  lbz 11, 10(31)
  0620cc8  cmplwi 7, 11, 31
  0620ccc  bt 29, 0x620c08
  0620cd0  lwz 9, -32760(30)
  0620cd4  lwz 0, 0(9)
  0620cd8  cmpwi 7, 0, 0
  0620cdc  bt 30, 0x620db4
  0620ce0  extsb 0, 11
  0620ce4  lwz 27, -32748(30)
  0620ce8  slwi 9, 0, 2
  0620cec  extsw 0, 9
  0620cf0  lwzx 11, 27, 0
  0620cf4  cmpwi 7, 11, 0
  0620cf8  bt 30, 0x620df4
  0620cfc  lwz 0, 16(31)
  0620d00  cmpwi 7, 0, 1
  0620d04  bf 30, 0x620c08
  0620d08  extsw 9, 9
  0620d0c  addi 0, 11, -1
  0620d10  stwx 0, 27, 9
  0620d14  b 0x620c08
  0620d18  lwz 29, -32680(30)
  0620d1c  li 5, 309
  0620d20  lwz 3, -32460(30)
  0620d24  mr 4, 29
  0620d28  bl 0x61948c
  0620d2c  nop
  0620d30  lwz 3, -32684(30)
  0620d34  mr 4, 29
  0620d38  li 5, 310
  0620d3c  bl 0x61948c
  0620d40  nop
  0620d44  lwz 9, -32676(30)
  0620d48  lbz 0, 0(9)
  0620d4c  cmpwi 7, 0, 0
  0620d50  bt 30, 0x620de4
  0620d54  ld 0, 176(1)
  0620d58  ld 26, 112(1)
  0620d5c  ld 27, 120(1)
  0620d60  mtlr 0
  0620d64  ld 28, 128(1)
  0620d68  ld 29, 136(1)
  0620d6c  ld 30, 144(1)
  0620d70  ld 31, 152(1)
  0620d74  addi 1, 1, 160
  0620d78  blr
  0620d7c  lwz 3, 96(31)
  0620d80  bl 0x62a824
  0620d84  nop
  0620d88  ld 0, 176(1)
  0620d8c  ld 26, 112(1)
  0620d90  extsw 3, 28
  0620d94  ld 27, 120(1)
  0620d98  ld 28, 128(1)
  0620d9c  mtlr 0
  0620da0  ld 29, 136(1)
  0620da4  ld 30, 144(1)
  0620da8  ld 31, 152(1)
  0620dac  addi 1, 1, 160
  0620db0  b 0x61dc38
  0620db4  lwz 27, -32748(30)
  0620db8  lbz 0, 10(31)
  0620dbc  extsb 0, 0
  0620dc0  slwi 9, 0, 2
  0620dc4  extsw 0, 9
  0620dc8  lwzx 11, 27, 0
  0620dcc  cmpwi 7, 11, 0
  0620dd0  bt 30, 0x620c08
  0620dd4  lwz 0, 16(31)
  0620dd8  cmpwi 7, 0, 1
  0620ddc  bf 30, 0x620c08
  0620de0  b 0x620d08
  0620de4  lwz 9, -32672(30)
  0620de8  lbz 0, 0(9)
  0620dec  twnei 0, 0
  0620df0  b 0x620c14
  0620df4  lwz 0, 16(31)
  0620df8  cmpwi 7, 0, 1
  0620dfc  bf 30, 0x620c08
  0620e00  lwz 29, -32680(30)
  0620e04  li 5, 291
  0620e08  lwz 3, -32464(30)
  0620e0c  mr 4, 29
  0620e10  bl 0x61948c
  0620e14  nop
  0620e18  lwz 3, -32684(30)
  0620e1c  mr 4, 29
  0620e20  li 5, 292
  0620e24  bl 0x61948c
  0620e28  nop
  0620e2c  lwz 9, -32676(30)
  0620e30  lbz 0, 0(9)
  0620e34  cmpwi 7, 0, 0
  0620e38  bf 30, 0x620d54
  0620e3c  lwz 9, -32672(30)
  0620e40  lbz 0, 0(9)
  0620e44  twnei 0, 0
  0620e48  b 0x620db8
  0620e4c  clrldi 31, 11, 32
  0620e50  lbz 11, 10(31)
  0620e54  cmplwi 7, 11, 31
  0620e58  bt 29, 0x620c08
  0620e5c  b 0x620cd0
  0620e60  clrldi 9, 10, 32
  0620e64  b 0x620bf0

FUN_00620e68:   # 0x620e68, 0x2c4 bytes
  0620e68  stdu 1, -256(1)
  0620e6c  mflr 0
  0620e70  std 30, 240(1)
  0620e74  lwz 30, -29444(2)
  0620e78  std 24, 192(1)
  0620e7c  std 0, 272(1)
  0620e80  std 16, 128(1)
  0620e84  std 14, 112(1)
  0620e88  lwz 24, -32752(30)
  0620e8c  mr 16, 3
  0620e90  std 15, 120(1)
  0620e94  std 17, 136(1)
  0620e98  std 18, 144(1)
  0620e9c  std 19, 152(1)
  0620ea0  lwz 0, 0(24)
  0620ea4  std 20, 160(1)
  0620ea8  cmpwi 7, 0, 0
  0620eac  std 21, 168(1)
  0620eb0  std 22, 176(1)
  0620eb4  std 23, 184(1)
  0620eb8  std 25, 200(1)
  0620ebc  std 26, 208(1)
  0620ec0  std 27, 216(1)
  0620ec4  std 28, 224(1)
  0620ec8  std 29, 232(1)
  0620ecc  std 31, 248(1)
  0620ed0  bf 29, 0x621088
  0620ed4  li 18, 0
  0620ed8  lwz 19, -32600(30)
  0620edc  li 20, 0
  0620ee0  lwz 21, -32604(30)
  0620ee4  li 28, 0
  0620ee8  lwz 15, -32680(30)
  0620eec  li 17, 0
  0620ef0  lwz 14, -32768(30)
  0620ef4  clrldi 31, 19, 32
  0620ef8  clrldi 29, 21, 32
  0620efc  lwz 0, 0(31)
  0620f00  lwz 9, 0(29)
  0620f04  and 11, 0, 9
  0620f08  cmpwi 11, 0
  0620f0c  bf 2, 0x6210e0
  0620f10  add 0, 20, 16
  0620f14  lwz 9, 0(29)
  0620f18  lwz 11, 0(31)
  0620f1c  addi 27, 28, 32
  0620f20  clrldi 10, 0, 32
  0620f24  or 26, 11, 9
  0620f28  lwz 0, 0(10)
  0620f2c  and 9, 26, 0
  0620f30  cmpwi 9, 0
  0620f34  bt 2, 0x621058
  0620f38  lwz 0, 0(24)
  0620f3c  mr 31, 28
  0620f40  cmpw 7, 0, 28
  0620f44  bf 29, 0x621058
  0620f48  mr 25, 10
  0620f4c  mr 29, 17
  0620f50  li 23, 1
  0620f54  mr 22, 14
  0620f58  srawi 8, 31, 5
  0620f5c  addze 8, 8
  0620f60  lwz 0, 0(25)
  0620f64  slwi 9, 8, 5
  0620f68  sub 9, 31, 9
  0620f6c  slw 7, 23, 9
  0620f70  and 0, 7, 0
  0620f74  and 11, 0, 26
  0620f78  cmpwi 11, 0
  0620f7c  bt 2, 0x62103c
  0620f80  lwz 0, 0(22)
  0620f84  mr 28, 22
  0620f88  add 0, 29, 0
  0620f8c  clrldi 10, 0, 32
  0620f90  lwz 9, 16(10)
  0620f94  cmpwi 7, 9, 0
  0620f98  bt 30, 0x62103c
  0620f9c  lwz 11, 40(10)
  0620fa0  cmpwi 7, 11, 0
  0620fa4  bt 30, 0x620fd8
  0620fa8  lwz 0, 24(10)
  0620fac  clrlwi 0, 0, 30
  0620fb0  cmpwi 7, 0, 3
  0620fb4  bt 30, 0x620fd8
  0620fb8  slwi 9, 8, 2
  0620fbc  clrldi 11, 11, 32
  0620fc0  addi 9, 9, 16
  0620fc4  extsw 9, 9
  0620fc8  add 11, 11, 9
  0620fcc  lwz 0, 4(11)
  0620fd0  andc 0, 0, 7
  0620fd4  stw 0, 4(11)
  0620fd8  lwz 11, 0(28)
  0620fdc  add 0, 29, 11
  0620fe0  clrldi 3, 0, 32
  0620fe4  lwz 9, 44(3)
  0620fe8  cmpwi 7, 9, 0
  0620fec  bt 30, 0x621018
  0620ff0  clrldi 9, 9, 32
  0620ff4  lwz 4, 40(3)
  0620ff8  li 5, 2
  0620ffc  lwz 0, 0(9)
  0621000  std 2, 40(1)
  0621004  mtctr 0
  0621008  lwz 2, 4(9)
  062100c  bctrl
  0621010  ld 2, 40(1)
  0621014  lwz 11, 0(28)
  0621018  add 9, 29, 11
  062101c  clrldi 9, 9, 32
  0621020  lwz 0, 24(9)
  0621024  clrlwi 0, 0, 30
  0621028  cmpwi 7, 0, 3
  062102c  bt 30, 0x62103c
  0621030  extsw 3, 31
  0621034  li 4, 0
  0621038  bl 0x620b54
  062103c  addi 31, 31, 1
  0621040  cmpw 7, 31, 27
  0621044  bf 28, 0x621058
  0621048  lwz 0, 0(24)
  062104c  addi 29, 29, 104
  0621050  cmpw 7, 0, 31
  0621054  bt 29, 0x620f58
  0621058  lwz 9, 0(24)
  062105c  addi 18, 18, 1
  0621060  addi 19, 19, 4
  0621064  addi 9, 9, 31
  0621068  addi 20, 20, 4
  062106c  srawi 9, 9, 5
  0621070  addze 9, 9
  0621074  addi 21, 21, 4
  0621078  cmpw 7, 9, 18
  062107c  mr 28, 27
  0621080  addi 17, 17, 3328
  0621084  bt 29, 0x620ef4
  0621088  ld 0, 272(1)
  062108c  ld 14, 112(1)
  0621090  ld 15, 120(1)
  0621094  mtlr 0
  0621098  ld 16, 128(1)
  062109c  ld 17, 136(1)
  06210a0  ld 18, 144(1)
  06210a4  ld 19, 152(1)
  06210a8  ld 20, 160(1)
  06210ac  ld 21, 168(1)
  06210b0  ld 22, 176(1)
  06210b4  ld 23, 184(1)
  06210b8  ld 24, 192(1)
  06210bc  ld 25, 200(1)
  06210c0  ld 26, 208(1)
  06210c4  ld 27, 216(1)
  06210c8  ld 28, 224(1)
  06210cc  ld 29, 232(1)
  06210d0  ld 30, 240(1)
  06210d4  ld 31, 248(1)
  06210d8  addi 1, 1, 256
  06210dc  blr
  06210e0  lwz 3, -32456(30)
  06210e4  mr 4, 15
  06210e8  li 5, 2456
  06210ec  bl 0x61948c
  06210f0  nop
  06210f4  lwz 3, -32684(30)
  06210f8  mr 4, 15
  06210fc  li 5, 2457
  0621100  bl 0x61948c
  0621104  nop
  0621108  lwz 9, -32676(30)
  062110c  lbz 0, 0(9)
  0621110  cmpwi 7, 0, 0
  0621114  bf 30, 0x621088
  0621118  lwz 9, -32672(30)
  062111c  lbz 0, 0(9)
  0621120  cmpwi 7, 0, 0
  0621124  bt+ 30, 0x620f10
  0621128  trap

FUN_0062112c:   # 0x62112c, 0x334 bytes
  062112c  stdu 1, -288(1)
  0621130  mflr 0
  0621134  std 30, 272(1)
  0621138  lwz 30, -29444(2)
  062113c  std 22, 208(1)
  0621140  std 24, 224(1)
  0621144  std 0, 304(1)
  0621148  std 14, 144(1)
  062114c  std 15, 152(1)
  0621150  std 16, 160(1)
  0621154  std 17, 168(1)
  0621158  std 18, 176(1)
  062115c  std 19, 184(1)
  0621160  std 20, 192(1)
  0621164  std 21, 200(1)
  0621168  std 23, 216(1)
  062116c  std 25, 232(1)
  0621170  std 26, 240(1)
  0621174  std 27, 248(1)
  0621178  std 28, 256(1)
  062117c  std 29, 264(1)
  0621180  std 31, 280(1)
  0621184  mr 24, 3
  0621188  bl 0x6272e8
  062118c  nop
  0621190  lwz 22, -32752(30)
  0621194  lwz 0, 0(22)
  0621198  cmpwi 7, 0, 0
  062119c  bf 29, 0x6213b0
  06211a0  clrldi 0, 24, 32
  06211a4  lwz 15, -32616(30)
  06211a8  li 19, 0
  06211ac  lwz 16, -32612(30)
  06211b0  li 20, 0
  06211b4  li 3, 0
  06211b8  li 14, 0
  06211bc  std 0, 136(1)
  06211c0  add 0, 24, 20
  06211c4  addi 25, 3, 32
  06211c8  clrldi 23, 0, 32
  06211cc  lwz 9, 20(23)
  06211d0  cmpwi 7, 9, 0
  06211d4  bt 30, 0x621380
  06211d8  lwz 0, 0(22)
  06211dc  mr 31, 3
  06211e0  cmpw 7, 0, 3
  06211e4  bf 29, 0x621380
  06211e8  lwz 9, -32604(30)
  06211ec  mr 28, 14
  06211f0  lwz 11, -32600(30)
  06211f4  clrldi 17, 16, 32
  06211f8  add 0, 20, 9
  06211fc  lwz 18, -32768(30)
  0621200  add 9, 20, 11
  0621204  lwz 21, -32680(30)
  0621208  clrldi 11, 0, 32
  062120c  clrldi 9, 9, 32
  0621210  std 11, 112(1)
  0621214  std 9, 120(1)
  0621218  clrldi 9, 15, 32
  062121c  std 9, 128(1)
  0621220  b 0x621240
  0621224  addi 31, 31, 1
  0621228  cmpw 7, 31, 25
  062122c  bf 28, 0x621380
  0621230  lwz 0, 0(22)
  0621234  addi 28, 28, 104
  0621238  cmpw 7, 0, 31
  062123c  bf 29, 0x621380
  0621240  srawi 27, 31, 5
  0621244  addze 27, 27
  0621248  lwz 11, 20(23)
  062124c  li 9, 1
  0621250  slwi 0, 27, 5
  0621254  sub 0, 31, 0
  0621258  slw 29, 9, 0
  062125c  and 0, 29, 11
  0621260  cmpwi 0, 0
  0621264  bt 2, 0x621224
  0621268  lwz 0, 0(18)
  062126c  mr 26, 18
  0621270  add 0, 28, 0
  0621274  clrldi 11, 0, 32
  0621278  lwz 9, 16(11)
  062127c  cmpwi 7, 9, 0
  0621280  bt 30, 0x621290
  0621284  lwz 0, 40(11)
  0621288  cmpw 7, 0, 24
  062128c  bt 30, 0x62144c
  0621290  lwz 3, -32532(30)
  0621294  mr 4, 21
  0621298  li 5, 1380
  062129c  bl 0x61948c
  06212a0  nop
  06212a4  lwz 3, -32684(30)
  06212a8  mr 4, 21
  06212ac  li 5, 1381
  06212b0  bl 0x61948c
  06212b4  nop
  06212b8  lwz 9, -32676(30)
  06212bc  lbz 0, 0(9)
  06212c0  cmpwi 7, 0, 0
  06212c4  bf 30, 0x6213b8
  06212c8  lwz 9, -32672(30)
  06212cc  lbz 0, 0(9)
  06212d0  cmpwi 7, 0, 0
  06212d4  bf- 30, 0x62145c
  06212d8  lwz 9, 0(26)
  06212dc  add 9, 28, 9
  06212e0  clrldi 9, 9, 32
  06212e4  lwz 0, 40(9)
  06212e8  cmpw 7, 0, 24
  06212ec  bf 30, 0x621224
  06212f0  lwz 10, 0(17)
  06212f4  and 0, 29, 10
  06212f8  cmpwi 0, 0
  06212fc  bt 2, 0x621410
  0621300  slwi 9, 27, 2
  0621304  lwz 0, 0(26)
  0621308  not 11, 29
  062130c  add 0, 28, 0
  0621310  addi 9, 9, 16
  0621314  clrldi 3, 0, 32
  0621318  ld 0, 136(1)
  062131c  extsw 9, 9
  0621320  add 9, 0, 9
  0621324  and 0, 10, 11
  0621328  lwz 10, 44(3)
  062132c  stw 0, 0(17)
  0621330  cmpwi 7, 10, 0
  0621334  lwz 0, 4(9)
  0621338  and 11, 11, 0
  062133c  stw 11, 4(9)
  0621340  bt 30, 0x621368
  0621344  clrldi 9, 10, 32
  0621348  lwz 4, 40(3)
  062134c  li 5, 2
  0621350  lwz 11, 0(9)
  0621354  std 2, 40(1)
  0621358  mtctr 11
  062135c  lwz 2, 4(9)
  0621360  bctrl
  0621364  ld 2, 40(1)
  0621368  extsw 3, 31
  062136c  li 4, 0
  0621370  addi 31, 31, 1
  0621374  bl 0x620b54
  0621378  cmpw 7, 31, 25
  062137c  bt 28, 0x621230
  0621380  lwz 9, 0(22)
  0621384  addi 19, 19, 1
  0621388  addi 20, 20, 4
  062138c  addi 9, 9, 31
  0621390  mr 3, 25
  0621394  srawi 9, 9, 5
  0621398  addze 9, 9
  062139c  addi 14, 14, 3328
  06213a0  cmpw 7, 9, 19
  06213a4  addi 15, 15, 4
  06213a8  addi 16, 16, 4
  06213ac  bt 29, 0x6211c0
  06213b0  bl 0x6271f4
  06213b4  nop
  06213b8  ld 0, 304(1)
  06213bc  ld 14, 144(1)
  06213c0  ld 15, 152(1)
  06213c4  mtlr 0
  06213c8  ld 16, 160(1)
  06213cc  ld 17, 168(1)
  06213d0  ld 18, 176(1)
  06213d4  ld 19, 184(1)
  06213d8  ld 20, 192(1)
  06213dc  ld 21, 200(1)
  06213e0  ld 22, 208(1)
  06213e4  ld 23, 216(1)
  06213e8  ld 24, 224(1)
  06213ec  ld 25, 232(1)
  06213f0  ld 26, 240(1)
  06213f4  ld 27, 248(1)
  06213f8  ld 28, 256(1)
  06213fc  ld 29, 264(1)
  0621400  ld 30, 272(1)
  0621404  ld 31, 280(1)
  0621408  addi 1, 1, 288
  062140c  blr
  0621410  ld 9, 112(1)
  0621414  lwz 0, 0(9)
  0621418  and 11, 29, 0
  062141c  cmpwi 11, 0
  0621420  bf 2, 0x621438
  0621424  ld 9, 120(1)
  0621428  lwz 0, 0(9)
  062142c  and 11, 29, 0
  0621430  cmpwi 11, 0
  0621434  bt 2, 0x621224
  0621438  ld 9, 128(1)
  062143c  lwz 0, 0(9)
  0621440  or 0, 29, 0
  0621444  stw 0, 0(9)
  0621448  b 0x621224
  062144c  lwz 0, 44(11)
  0621450  cmpwi 7, 0, 0
  0621454  bf 30, 0x6212f0
  0621458  b 0x621290
  062145c  trap

FUN_00621460:   # 0x621460, 0x364 bytes
  0621460  cmpwi 7, 3, 0
  0621464  mflr 0
  0621468  stdu 1, -272(1)
  062146c  std 23, 200(1)
  0621470  std 30, 256(1)
  0621474  std 14, 128(1)
  0621478  std 15, 136(1)
  062147c  std 16, 144(1)
  0621480  std 17, 152(1)
  0621484  std 18, 160(1)
  0621488  std 19, 168(1)
  062148c  std 20, 176(1)
  0621490  std 21, 184(1)
  0621494  std 22, 192(1)
  0621498  std 24, 208(1)
  062149c  std 25, 216(1)
  06214a0  std 26, 224(1)
  06214a4  std 27, 232(1)
  06214a8  std 28, 240(1)
  06214ac  std 29, 248(1)
  06214b0  std 31, 264(1)
  06214b4  std 0, 288(1)
  06214b8  lwz 30, -29444(2)
  06214bc  mr 23, 3
  06214c0  bt 30, 0x621790
  06214c4  bl 0x6272e8
  06214c8  nop
  06214cc  lwz 22, -32752(30)
  06214d0  lwz 0, 0(22)
  06214d4  cmpwi 7, 0, 0
  06214d8  bf 29, 0x6216c4
  06214dc  addi 24, 23, 20
  06214e0  lwz 16, -32604(30)
  06214e4  li 20, 0
  06214e8  lwz 17, -32608(30)
  06214ec  li 3, 0
  06214f0  lwz 18, -32612(30)
  06214f4  li 15, 0
  06214f8  lwz 11, 0(24)
  06214fc  addi 25, 3, 32
  0621500  cmpwi 7, 11, 0
  0621504  bt 30, 0x621690
  0621508  lwz 0, 0(22)
  062150c  mr 31, 3
  0621510  cmpw 7, 3, 0
  0621514  bf 28, 0x621690
  0621518  clrldi 9, 17, 32
  062151c  lwz 19, -32768(30)
  0621520  mr 28, 15
  0621524  lwz 21, -32680(30)
  0621528  clrldi 14, 18, 32
  062152c  std 9, 112(1)
  0621530  b 0x621554
  0621534  addi 31, 31, 1
  0621538  cmpw 7, 31, 25
  062153c  bf 28, 0x621690
  0621540  lwz 0, 0(22)
  0621544  addi 28, 28, 104
  0621548  cmpw 7, 0, 31
  062154c  bf 29, 0x621690
  0621550  lwz 11, 0(24)
  0621554  srawi 27, 31, 5
  0621558  addze 27, 27
  062155c  li 9, 1
  0621560  slwi 0, 27, 5
  0621564  sub 0, 31, 0
  0621568  slw 29, 9, 0
  062156c  and 0, 29, 11
  0621570  cmpwi 0, 0
  0621574  bt 2, 0x621534
  0621578  lwz 0, 0(19)
  062157c  mr 26, 19
  0621580  add 3, 28, 0
  0621584  clrldi 3, 3, 32
  0621588  lwz 0, 16(3)
  062158c  cmpwi 7, 0, 0
  0621590  bt 30, 0x6215a0
  0621594  lwz 0, 40(3)
  0621598  cmpw 7, 0, 23
  062159c  bt 30, 0x62177c
  06215a0  lwz 3, -32532(30)
  06215a4  mr 4, 21
  06215a8  li 5, 1214
  06215ac  bl 0x61948c
  06215b0  nop
  06215b4  lwz 3, -32684(30)
  06215b8  mr 4, 21
  06215bc  li 5, 1215
  06215c0  bl 0x61948c
  06215c4  nop
  06215c8  lwz 9, -32676(30)
  06215cc  lbz 0, 0(9)
  06215d0  cmpwi 7, 0, 0
  06215d4  bf 30, 0x6216cc
  06215d8  lwz 9, -32672(30)
  06215dc  lbz 0, 0(9)
  06215e0  cmpwi 7, 0, 0
  06215e4  bf- 30, 0x62178c
  06215e8  lwz 0, 0(26)
  06215ec  add 3, 28, 0
  06215f0  clrldi 3, 3, 32
  06215f4  lwz 0, 40(3)
  06215f8  cmpw 7, 0, 23
  06215fc  bf 30, 0x621534
  0621600  lwz 11, 0(14)
  0621604  and 0, 29, 11
  0621608  cmpwi 0, 0
  062160c  bt 2, 0x621724
  0621610  slwi 9, 27, 2
  0621614  lwz 0, 0(26)
  0621618  lwz 10, 40(3)
  062161c  addi 9, 9, 16
  0621620  add 0, 28, 0
  0621624  extsw 9, 9
  0621628  clrldi 3, 0, 32
  062162c  add 10, 10, 9
  0621630  not 0, 29
  0621634  and 9, 11, 0
  0621638  lwz 8, 44(3)
  062163c  stw 9, 0(14)
  0621640  lwz 11, 4(10)
  0621644  cmpwi 7, 8, 0
  0621648  and 0, 0, 11
  062164c  stw 0, 4(10)
  0621650  bt 30, 0x621678
  0621654  clrldi 9, 8, 32
  0621658  lwz 4, 40(3)
  062165c  li 5, 2
  0621660  lwz 11, 0(9)
  0621664  std 2, 40(1)
  0621668  mtctr 11
  062166c  lwz 2, 4(9)
  0621670  bctrl
  0621674  ld 2, 40(1)
  0621678  extsw 3, 31
  062167c  li 4, 0
  0621680  addi 31, 31, 1
  0621684  bl 0x620b54
  0621688  cmpw 7, 31, 25
  062168c  bt 28, 0x621540
  0621690  lwz 9, 0(22)
  0621694  addi 20, 20, 1
  0621698  addi 24, 24, 4
  062169c  addi 9, 9, 31
  06216a0  mr 3, 25
  06216a4  srawi 9, 9, 5
  06216a8  addze 9, 9
  06216ac  addi 15, 15, 3328
  06216b0  cmpw 7, 9, 20
  06216b4  addi 16, 16, 4
  06216b8  addi 17, 17, 4
  06216bc  addi 18, 18, 4
  06216c0  bt 29, 0x6214f8
  06216c4  bl 0x6271f4
  06216c8  nop
  06216cc  ld 0, 288(1)
  06216d0  ld 14, 128(1)
  06216d4  ld 15, 136(1)
  06216d8  mtlr 0
  06216dc  ld 16, 144(1)
  06216e0  ld 17, 152(1)
  06216e4  ld 18, 160(1)
  06216e8  ld 19, 168(1)
  06216ec  ld 20, 176(1)
  06216f0  ld 21, 184(1)
  06216f4  ld 22, 192(1)
  06216f8  ld 23, 200(1)
  06216fc  ld 24, 208(1)
  0621700  ld 25, 216(1)
  0621704  ld 26, 224(1)
  0621708  ld 27, 232(1)
  062170c  ld 28, 240(1)
  0621710  ld 29, 248(1)
  0621714  ld 30, 256(1)
  0621718  ld 31, 264(1)
  062171c  addi 1, 1, 272
  0621720  blr
  0621724  clrldi 9, 16, 32
  0621728  lwz 0, 0(9)
  062172c  and 9, 29, 0
  0621730  cmpwi 9, 0
  0621734  bt 2, 0x621534
  0621738  ld 11, 112(1)
  062173c  lwz 9, 44(3)
  0621740  cmpwi 7, 9, 0
  0621744  lwz 0, 0(11)
  0621748  or 0, 29, 0
  062174c  stw 0, 0(11)
  0621750  bt 30, 0x621534
  0621754  clrldi 9, 9, 32
  0621758  lwz 4, 40(3)
  062175c  li 5, 3
  0621760  lwz 0, 0(9)
  0621764  std 2, 40(1)
  0621768  mtctr 0
  062176c  lwz 2, 4(9)
  0621770  bctrl
  0621774  ld 2, 40(1)
  0621778  b 0x621534
  062177c  lwz 0, 44(3)
  0621780  cmpwi 7, 0, 0
  0621784  bf 30, 0x621600
  0621788  b 0x6215a0
  062178c  trap
  0621790  lwz 3, -32684(30)
  0621794  li 5, 1192
  0621798  lwz 4, -32680(30)
  062179c  bl 0x61948c
  06217a0  nop
  06217a4  lwz 9, -32676(30)
  06217a8  lbz 0, 0(9)
  06217ac  cmpwi 7, 0, 0
  06217b0  bf 30, 0x6216cc
  06217b4  lwz 9, -32672(30)
  06217b8  lbz 0, 0(9)
  06217bc  twnei 0, 0
  06217c0  b 0x6214c4

FUN_006217c4:   # 0x6217c4, 0x11c bytes
  06217c4  cmpwi 7, 3, 0
  06217c8  mflr 0
  06217cc  stdu 1, -144(1)
  06217d0  std 29, 120(1)
  06217d4  std 30, 128(1)
  06217d8  std 31, 136(1)
  06217dc  std 0, 160(1)
  06217e0  lwz 30, -29444(2)
  06217e4  li 5, 898
  06217e8  mr 31, 3
  06217ec  mr 29, 4
  06217f0  bt 28, 0x621858
  06217f4  lwz 9, -32752(30)
  06217f8  lwz 0, 0(9)
  06217fc  cmpw 7, 3, 0
  0621800  bf 28, 0x621858
  0621804  lwz 11, -32768(30)
  0621808  mulli 0, 31, 104
  062180c  lwz 9, 0(11)
  0621810  add 0, 0, 9
  0621814  clrldi 10, 0, 32
  0621818  lwz 9, 16(10)
  062181c  cmpwi 7, 9, 0
  0621820  bt 30, 0x62183c
  0621824  lwz 0, 40(10)
  0621828  extsw 3, 31
  062182c  li 4, 0
  0621830  cmpw 7, 0, 29
  0621834  cmpwi 6, 0, 0
  0621838  bt 30, 0x621888
  062183c  ld 0, 160(1)
  0621840  ld 29, 120(1)
  0621844  ld 30, 128(1)
  0621848  mtlr 0
  062184c  ld 31, 136(1)
  0621850  addi 1, 1, 144
  0621854  blr
  0621858  lwz 3, -32684(30)
  062185c  lwz 4, -32680(30)
  0621860  bl 0x61948c
  0621864  nop
  0621868  lwz 9, -32676(30)
  062186c  lbz 0, 0(9)
  0621870  cmpwi 7, 0, 0
  0621874  bf 30, 0x62183c
  0621878  lwz 9, -32672(30)
  062187c  lbz 0, 0(9)
  0621880  twnei 0, 0
  0621884  b 0x621804
  0621888  srawi 9, 31, 5
  062188c  addze 9, 9
  0621890  bt 26, 0x6218c4
  0621894  slwi 11, 9, 2
  0621898  clrldi 10, 0, 32
  062189c  addi 11, 11, 16
  06218a0  slwi 0, 9, 5
  06218a4  extsw 11, 11
  06218a8  sub 0, 31, 0
  06218ac  add 10, 10, 11
  06218b0  li 9, -2
  06218b4  rotlw 9, 9, 0
  06218b8  lwz 0, 4(10)
  06218bc  and 0, 0, 9
  06218c0  stw 0, 4(10)
  06218c4  ld 0, 160(1)
  06218c8  ld 29, 120(1)
  06218cc  ld 30, 128(1)
  06218d0  mtlr 0
  06218d4  ld 31, 136(1)
  06218d8  addi 1, 1, 144
  06218dc  b 0x620b54

FUN_006218e0:   # 0x6218e0, 0x764 bytes
  06218e0  mfcr 12
  06218e4  cmplwi 7, 3, 30
  06218e8  stdu 1, -336(1)
  06218ec  stfd 30, 320(1)
  06218f0  fmr 30, 2
  06218f4  stfd 31, 328(1)
  06218f8  fmr 31, 1
  06218fc  std 17, 200(1)
  0621900  std 18, 208(1)
  0621904  std 30, 304(1)
  0621908  std 31, 312(1)
  062190c  std 14, 176(1)
  0621910  std 15, 184(1)
  0621914  std 16, 192(1)
  0621918  std 19, 216(1)
  062191c  std 20, 224(1)
  0621920  std 21, 232(1)
  0621924  std 22, 240(1)
  0621928  std 23, 248(1)
  062192c  std 24, 256(1)
  0621930  std 25, 264(1)
  0621934  std 26, 272(1)
  0621938  std 27, 280(1)
  062193c  std 28, 288(1)
  0621940  std 29, 296(1)
  0621944  lwz 30, -29444(2)
  0621948  mr 31, 3
  062194c  mr 17, 4
  0621950  lwz 18, 532(1)
  0621954  stw 7, 144(1)
  0621958  stw 8, 148(1)
  062195c  stb 9, 152(1)
  0621960  stw 10, 156(1)
  0621964  stw 12, 344(1)
  0621968  mflr 0
  062196c  std 0, 352(1)
  0621970  bt- 29, 0x621f10
  0621974  extsb 0, 4
  0621978  cmpwi 7, 0, 0
  062197c  bt 28, 0x621f10
  0621980  cmpwi 7, 31, 31
  0621984  mr 21, 31
  0621988  bt 29, 0x621e5c
  062198c  slwi 0, 21, 2
  0621990  cmpwi 3, 18, 0
  0621994  stw 0, 164(1)
  0621998  bl 0x6272e8
  062199c  nop
  06219a0  lwz 10, 164(1)
  06219a4  lwz 9, -32536(30)
  06219a8  extsw 0, 10
  06219ac  add 11, 0, 9
  06219b0  lhzx 29, 9, 0
  06219b4  lhz 31, 2(11)
  06219b8  bl 0x604918
  06219bc  nop
  06219c0  mr 19, 3
  06219c4  bt 14, 0x621e9c
  06219c8  fmr 1, 30
  06219cc  clrldi 3, 18, 32
  06219d0  fmr 2, 31
  06219d4  extsb 4, 17
  06219d8  bl 0x61d6d8
  06219dc  mr 15, 3
  06219e0  lwz 3, 516(1)
  06219e4  bl 0x6250a4
  06219e8  nop
  06219ec  cmpwi 7, 3, -1
  06219f0  mr 20, 3
  06219f4  bt- 30, 0x621bec
  06219f8  slwi 22, 3, 2
  06219fc  lwz 10, -32736(30)
  0621a00  li 16, 0
  0621a04  extsw 0, 22
  0621a08  lwzx 9, 10, 0
  0621a0c  cmpwi 7, 9, 0
  0621a10  bf 30, 0x621efc
  0621a14  extsh 9, 31
  0621a18  extsh 27, 29
  0621a1c  addi 25, 9, 1
  0621a20  cmpw 7, 27, 25
  0621a24  bf 28, 0x621bd8
  0621a28  cmpwi 4, 16, 0
  0621a2c  lwz 26, -32768(30)
  0621a30  extsb 0, 15
  0621a34  lwz 14, -32452(30)
  0621a38  li 24, -1
  0621a3c  li 31, 0
  0621a40  mr 28, 27
  0621a44  stw 0, 160(1)
  0621a48  mulli 29, 27, 104
  0621a4c  b 0x621a68
  0621a50  bf 18, 0x621c14
  0621a54  addi 31, 31, 1
  0621a58  addi 29, 29, 104
  0621a5c  add 28, 27, 31
  0621a60  cmpw 7, 28, 25
  0621a64  bf 28, 0x621b10
  0621a68  lwz 10, 0(26)
  0621a6c  mr 23, 28
  0621a70  add 0, 29, 10
  0621a74  clrldi 11, 0, 32
  0621a78  lwz 0, 16(11)
  0621a7c  cmpwi 7, 0, 0
  0621a80  bt 30, 0x621a50
  0621a84  cmpwi 7, 0, 1
  0621a88  bt 30, 0x621bfc
  0621a8c  bt 14, 0x621a54
  0621a90  lwz 0, 40(11)
  0621a94  cmpw 7, 0, 18
  0621a98  bt 30, 0x621a54
  0621a9c  lwz 0, 24(11)
  0621aa0  clrlwi 0, 0, 31
  0621aa4  cmpwi 7, 0, 0
  0621aa8  bf 30, 0x621a54
  0621aac  bt 18, 0x621ea4
  0621ab0  cmpwi 7, 24, 0
  0621ab4  bt 28, 0x621ed8
  0621ab8  add 9, 10, 29
  0621abc  mulli 0, 24, 104
  0621ac0  add 0, 10, 0
  0621ac4  clrldi 11, 9, 32
  0621ac8  clrldi 10, 0, 32
  0621acc  lbz 9, 9(11)
  0621ad0  lbz 0, 9(10)
  0621ad4  extsb 9, 9
  0621ad8  extsb 0, 0
  0621adc  cmpw 7, 9, 0
  0621ae0  bt 28, 0x621af8
  0621ae4  bf 30, 0x621a54
  0621ae8  lwz 0, 20(11)
  0621aec  lwz 9, 20(10)
  0621af0  cmplw 7, 0, 9
  0621af4  bf 28, 0x621a54
  0621af8  mr 24, 28
  0621afc  addi 31, 31, 1
  0621b00  addi 29, 29, 104
  0621b04  add 28, 27, 31
  0621b08  cmpw 7, 28, 25
  0621b0c  bt 28, 0x621a68
  0621b10  cmpwi 7, 24, 0
  0621b14  bt- 28, 0x621bd8
  0621b18  lwz 0, 0(26)
  0621b1c  mulli 31, 24, 104
  0621b20  add 0, 31, 0
  0621b24  clrldi 9, 0, 32
  0621b28  lwz 10, 40(9)
  0621b2c  cmpwi 7, 10, 0
  0621b30  bt- 30, 0x621f58
  0621b34  lwz 0, 44(9)
  0621b38  cmpwi 7, 0, 0
  0621b3c  bt 30, 0x621f58
  0621b40  srawi 0, 24, 5
  0621b44  addze 0, 0
  0621b48  clrldi 10, 10, 32
  0621b4c  slwi 11, 0, 2
  0621b50  slwi 0, 0, 5
  0621b54  addi 11, 11, 16
  0621b58  sub 0, 24, 0
  0621b5c  extsw 11, 11
  0621b60  li 9, -2
  0621b64  add 10, 10, 11
  0621b68  rotlw 9, 9, 0
  0621b6c  lwz 0, 4(10)
  0621b70  and 0, 0, 9
  0621b74  stw 0, 4(10)
  0621b78  lwz 0, 0(26)
  0621b7c  add 0, 31, 0
  0621b80  clrldi 3, 0, 32
  0621b84  lwz 9, 44(3)
  0621b88  cmpwi 7, 9, 0
  0621b8c  bt 30, 0x621bb4
  0621b90  clrldi 9, 9, 32
  0621b94  lwz 4, 40(3)
  0621b98  li 5, 1
  0621b9c  lwz 0, 0(9)
  0621ba0  std 2, 40(1)
  0621ba4  mtctr 0
  0621ba8  lwz 2, 4(9)
  0621bac  bctrl
  0621bb0  ld 2, 40(1)
  0621bb4  cmpwi 7, 16, 0
  0621bb8  li 4, 0
  0621bbc  bt 30, 0x621fc0
  0621bc0  clrldi 4, 4, 63
  0621bc4  extsw 3, 24
  0621bc8  mr 23, 24
  0621bcc  bl 0x620b54
  0621bd0  cmpw 7, 25, 24
  0621bd4  bt 29, 0x621c14
  0621bd8  cmpwi 7, 16, 0
  0621bdc  bt 30, 0x621bec
  0621be0  clrldi 3, 16, 32
  0621be4  bl 0x62a824
  0621be8  nop
  0621bec  li 23, -1
  0621bf0  bl 0x6271f4
  0621bf4  nop
  0621bf8  b 0x621dec
  0621bfc  lwz 0, 20(11)
  0621c00  lwz 9, 0(14)
  0621c04  sub 0, 19, 0
  0621c08  cmplw 7, 0, 9
  0621c0c  bt 28, 0x621a54
  0621c10  b 0x621a8c
  0621c14  extsw 0, 22
  0621c18  lwz 10, -32736(30)
  0621c1c  lwzx 9, 10, 0
  0621c20  cmpwi 7, 9, 0
  0621c24  bt 30, 0x621ff0
  0621c28  extsw 11, 22
  0621c2c  lwz 10, -32736(30)
  0621c30  lwz 28, 0(26)
  0621c34  li 0, 2
  0621c38  mulli 29, 23, 104
  0621c3c  add 28, 29, 28
  0621c40  lwzx 9, 10, 11
  0621c44  clrldi 28, 28, 32
  0621c48  addi 9, 9, -1
  0621c4c  stwx 9, 10, 11
  0621c50  stw 0, 16(28)
  0621c54  bl 0x604918
  0621c58  nop
  0621c5c  lwz 11, 0(26)
  0621c60  lwz 0, 164(1)
  0621c64  add 11, 29, 11
  0621c68  lwz 10, -32652(30)
  0621c6c  stw 3, 20(28)
  0621c70  clrldi 11, 11, 32
  0621c74  lwz 9, 476(1)
  0621c78  extsw 8, 0
  0621c7c  cmpwi 7, 9, -2
  0621c80  stb 17, 8(11)
  0621c84  lwz 9, 0(26)
  0621c88  add 9, 29, 9
  0621c8c  clrldi 9, 9, 32
  0621c90  stb 15, 9(9)
  0621c94  lwz 11, 0(26)
  0621c98  add 11, 29, 11
  0621c9c  clrldi 11, 11, 32
  0621ca0  stb 21, 10(11)
  0621ca4  lwz 9, 0(26)
  0621ca8  stfs 31, 12(11)
  0621cac  add 9, 29, 9
  0621cb0  clrldi 9, 9, 32
  0621cb4  stb 20, 11(9)
  0621cb8  lwz 0, 0(26)
  0621cbc  lwzx 11, 10, 8
  0621cc0  add 29, 29, 0
  0621cc4  lwz 0, 468(1)
  0621cc8  rlwinm 11, 11, 5, 26, 26
  0621ccc  clrldi 28, 29, 32
  0621cd0  or 11, 11, 0
  0621cd4  lwz 0, 540(1)
  0621cd8  stw 18, 40(9)
  0621cdc  stw 0, 44(9)
  0621ce0  stw 11, 24(28)
  0621ce4  lwzx 0, 10, 8
  0621ce8  rldicl 0, 0, 62, 63
  0621cec  slwi 0, 0, 6
  0621cf0  or 0, 0, 11
  0621cf4  stw 0, 24(28)
  0621cf8  bt 30, 0x621f48
  0621cfc  lwz 9, 148(1)
  0621d00  mr 10, 0
  0621d04  lwz 0, 144(1)
  0621d08  li 7, 0
  0621d0c  lwz 11, 476(1)
  0621d10  stw 0, 56(28)
  0621d14  stw 9, 64(28)
  0621d18  lwz 0, 452(1)
  0621d1c  lwz 8, 40(28)
  0621d20  stw 0, 32(28)
  0621d24  lwz 9, 460(1)
  0621d28  cmpwi 7, 8, 0
  0621d2c  lfs 0, -32720(30)
  0621d30  stw 9, 36(28)
  0621d34  lwz 0, 476(1)
  0621d38  stfs 30, 48(28)
  0621d3c  stfs 0, 88(28)
  0621d40  stw 0, 28(28)
  0621d44  stfs 0, 80(28)
  0621d48  stfs 0, 84(28)
  0621d4c  stw 16, 96(28)
  0621d50  bt 30, 0x621d98
  0621d54  srawi 0, 23, 5
  0621d58  addze 0, 0
  0621d5c  clrldi 10, 8, 32
  0621d60  slwi 9, 0, 2
  0621d64  slwi 0, 0, 5
  0621d68  addi 9, 9, 16
  0621d6c  sub 0, 23, 0
  0621d70  extsw 9, 9
  0621d74  li 11, 1
  0621d78  add 10, 10, 9
  0621d7c  slw 11, 11, 0
  0621d80  addi 7, 8, 360
  0621d84  lwz 0, 4(10)
  0621d88  or 0, 0, 11
  0621d8c  stw 0, 4(10)
  0621d90  lwz 11, 28(28)
  0621d94  lwz 10, 24(28)
  0621d98  lbz 9, 503(1)
  0621d9c  extsw 0, 11
  0621da0  lbz 29, 152(1)
  0621da4  clrldi 11, 7, 32
  0621da8  lwz 28, 156(1)
  0621dac  clrldi 6, 20, 32
  0621db0  lwz 4, 484(1)
  0621db4  extsb 9, 9
  0621db8  lwz 5, 508(1)
  0621dbc  clrldi 10, 10, 32
  0621dc0  lwz 7, 524(1)
  0621dc4  clrldi 3, 16, 32
  0621dc8  lwz 8, 492(1)
  0621dcc  std 0, 112(1)
  0621dd0  std 11, 120(1)
  0621dd4  std 29, 128(1)
  0621dd8  std 28, 136(1)
  0621ddc  bl 0x62e140
  0621de0  nop
  0621de4  bl 0x6271f4
  0621de8  nop
  0621dec  lwz 12, 344(1)
  0621df0  extsw 3, 23
  0621df4  ld 0, 352(1)
  0621df8  ld 14, 176(1)
  0621dfc  mtocrf 16, 12
  0621e00  ld 15, 184(1)
  0621e04  mtlr 0
  0621e08  ld 16, 192(1)
  0621e0c  mtocrf 8, 12
  0621e10  ld 17, 200(1)
  0621e14  ld 18, 208(1)
  0621e18  ld 19, 216(1)
  0621e1c  ld 20, 224(1)
  0621e20  ld 21, 232(1)
  0621e24  ld 22, 240(1)
  0621e28  ld 23, 248(1)
  0621e2c  ld 24, 256(1)
  0621e30  ld 25, 264(1)
  0621e34  ld 26, 272(1)
  0621e38  ld 27, 280(1)
  0621e3c  ld 28, 288(1)
  0621e40  ld 29, 296(1)
  0621e44  ld 30, 304(1)
  0621e48  ld 31, 312(1)
  0621e4c  lfd 30, 320(1)
  0621e50  lfd 31, 328(1)
  0621e54  addi 1, 1, 336
  0621e58  blr
  0621e5c  li 21, 31
  0621e60  cmpwi 3, 18, 0
  0621e64  slwi 0, 21, 2
  0621e68  stw 0, 164(1)
  0621e6c  bl 0x6272e8
  0621e70  nop
  0621e74  lwz 10, 164(1)
  0621e78  lwz 9, -32536(30)
  0621e7c  extsw 0, 10
  0621e80  add 11, 0, 9
  0621e84  lhzx 29, 9, 0
  0621e88  lhz 31, 2(11)
  0621e8c  bl 0x604918
  0621e90  nop
  0621e94  mr 19, 3
  0621e98  bf 14, 0x6219c8
  0621e9c  mr 15, 17
  0621ea0  b 0x6219e0
  0621ea4  lbz 0, 11(11)
  0621ea8  extsb 0, 0
  0621eac  cmpw 7, 0, 20
  0621eb0  bf 30, 0x621a54
  0621eb4  lwz 3, 96(11)
  0621eb8  bl 0x624730
  0621ebc  nop
  0621ec0  clrlwi 3, 3, 24
  0621ec4  cmpwi 7, 3, 0
  0621ec8  bt 30, 0x621a54
  0621ecc  lwz 9, -32768(30)
  0621ed0  lwz 10, 0(9)
  0621ed4  b 0x621ab0
  0621ed8  add 9, 29, 10
  0621edc  lwz 10, 160(1)
  0621ee0  clrldi 9, 9, 32
  0621ee4  lbz 0, 9(9)
  0621ee8  extsb 0, 0
  0621eec  cmpw 7, 0, 10
  0621ef0  bt 29, 0x621a54
  0621ef4  mr 24, 28
  0621ef8  b 0x621afc
  0621efc  clrldi 3, 3, 32
  0621f00  bl 0x624738
  0621f04  nop
  0621f08  mr 16, 3
  0621f0c  b 0x621a14
  0621f10  lwz 3, -32684(30)
  0621f14  li 5, 663
  0621f18  lwz 4, -32680(30)
  0621f1c  li 23, -1
  0621f20  bl 0x61948c
  0621f24  nop
  0621f28  lwz 9, -32676(30)
  0621f2c  lbz 0, 0(9)
  0621f30  cmpwi 7, 0, 0
  0621f34  bf 30, 0x621dec
  0621f38  lwz 9, -32672(30)
  0621f3c  lbz 0, 0(9)
  0621f40  twnei 0, 0
  0621f44  b 0x621980
  0621f48  lwz 9, -32540(30)
  0621f4c  lwzx 9, 9, 8
  0621f50  stw 9, 476(1)
  0621f54  b 0x621cfc
  0621f58  lwz 29, -32680(30)
  0621f5c  li 5, 771
  0621f60  lwz 3, -32448(30)
  0621f64  li 23, -1
  0621f68  mr 4, 29
  0621f6c  bl 0x61948c
  0621f70  nop
  0621f74  lwz 3, -32684(30)
  0621f78  mr 4, 29
  0621f7c  li 5, 772
  0621f80  bl 0x61948c
  0621f84  nop
  0621f88  lwz 9, -32676(30)
  0621f8c  lbz 0, 0(9)
  0621f90  cmpwi 7, 0, 0
  0621f94  bf 30, 0x621dec
  0621f98  lwz 9, -32672(30)
  0621f9c  lbz 0, 0(9)
  0621fa0  twnei 0, 0
  0621fa4  lwz 9, 0(26)
  0621fa8  add 9, 31, 9
  0621fac  clrldi 9, 9, 32
  0621fb0  lwz 10, 40(9)
  0621fb4  cmpwi 7, 10, 0
  0621fb8  bf 30, 0x621b40
  0621fbc  b 0x621b78
  0621fc0  lwz 9, 0(26)
  0621fc4  li 4, 1
  0621fc8  extsw 3, 24
  0621fcc  add 9, 31, 9
  0621fd0  clrldi 4, 4, 63
  0621fd4  clrldi 9, 9, 32
  0621fd8  mr 23, 24
  0621fdc  lwz 16, 96(9)
  0621fe0  bl 0x620b54
  0621fe4  cmpw 7, 25, 24
  0621fe8  bt 29, 0x621c14
  0621fec  b 0x621bd8
  0621ff0  lwz 29, -32680(30)
  0621ff4  li 5, 815
  0621ff8  lwz 3, -32444(30)
  0621ffc  mr 4, 29
  0622000  bl 0x61948c
  0622004  nop
  0622008  lwz 3, -32684(30)
  062200c  mr 4, 29
  0622010  li 5, 816
  0622014  bl 0x61948c
  0622018  nop
  062201c  lwz 9, -32676(30)
  0622020  lbz 0, 0(9)
  0622024  cmpwi 7, 0, 0
  0622028  bf 30, 0x62203c
  062202c  lwz 9, -32672(30)
  0622030  lbz 0, 0(9)
  0622034  twnei 0, 0
  0622038  b 0x621c28
  062203c  li 23, -1
  0622040  b 0x621dec

FUN_00622044:   # 0x622044, 0x50 bytes
  0622044  cmpwi 7, 3, 0
  0622048  mflr 0
  062204c  stdu 1, -128(1)
  0622050  std 0, 144(1)
  0622054  bf 30, 0x622074
  0622058  bl 0x62730c
  062205c  nop
  0622060  ld 0, 144(1)
  0622064  extsw 3, 3
  0622068  mtlr 0
  062206c  addi 1, 1, 128
  0622070  blr
  0622074  bl 0x6272e8
  0622078  nop
  062207c  ld 0, 144(1)
  0622080  li 3, 1
  0622084  mtlr 0
  0622088  addi 1, 1, 128
  062208c  extsw 3, 3
  0622090  blr

snd_InitVoiceAllocator:   # 0x622094, 0x2e4 bytes
  0622094  stdu 1, -176(1)
  0622098  mflr 0
  062209c  std 30, 144(1)
  06220a0  lwz 30, -29444(2)
  06220a4  li 8, 0
  06220a8  std 0, 192(1)
  06220ac  li 0, 5
  06220b0  stfd 30, 160(1)
  06220b4  mr 7, 3
  06220b8  stfd 31, 168(1)
  06220bc  std 26, 112(1)
  06220c0  mtctr 0
  06220c4  lwz 5, -32740(30)
  06220c8  lwz 6, -32736(30)
  06220cc  std 27, 120(1)
  06220d0  std 28, 128(1)
  06220d4  std 29, 136(1)
  06220d8  std 31, 152(1)
  06220dc  add 11, 7, 8
  06220e0  add 10, 8, 5
  06220e4  add 9, 8, 6
  06220e8  clrldi 11, 11, 32
  06220ec  clrldi 10, 10, 32
  06220f0  clrldi 9, 9, 32
  06220f4  addi 8, 8, 4
  06220f8  lwz 0, 52(11)
  06220fc  stw 0, 0(10)
  0622100  stw 0, 0(9)
  0622104  bdnz 0x6220dc
  0622108  lwz 0, 96(3)
  062210c  li 31, 0
  0622110  li 10, 512
  0622114  cmplwi 7, 0, 512
  0622118  ori 31, 31, 53248
  062211c  mr 3, 31
  0622120  bt 29, 0x622130
  0622124  mr 10, 0
  0622128  mulli 31, 0, 104
  062212c  mr 3, 31
  0622130  lwz 11, -32440(30)
  0622134  extsw 3, 3
  0622138  lwz 28, -32752(30)
  062213c  li 4, 0
  0622140  lwz 9, 0(11)
  0622144  stw 10, 0(28)
  0622148  lwz 0, 0(9)
  062214c  std 2, 40(1)
  0622150  mtctr 0
  0622154  lwz 2, 4(9)
  0622158  bctrl
  062215c  ld 2, 40(1)
  0622160  lwz 27, -32768(30)
  0622164  cmpwi 7, 3, 0
  0622168  stw 3, 0(27)
  062216c  bt 30, 0x622324
  0622170  rlwinm 5, 31, 0, 0, 28
  0622174  clrldi 3, 3, 32
  0622178  li 4, 0
  062217c  li 31, 0
  0622180  bl 0x5d0140
  0622184  nop
  0622188  lwz 11, 0(28)
  062218c  cmpwi 7, 11, 0
  0622190  li 29, 0
  0622194  bf 29, 0x6221c4
  0622198  extsw 3, 31
  062219c  bl 0x61dc38
  06221a0  lwz 9, 0(27)
  06221a4  lwz 11, 0(28)
  06221a8  add 9, 29, 9
  06221ac  addi 29, 29, 104
  06221b0  clrldi 9, 9, 32
  06221b4  stw 31, 4(9)
  06221b8  addi 31, 31, 1
  06221bc  cmpw 7, 11, 31
  06221c0  bt 29, 0x622198
  06221c4  lwz 9, -32476(30)
  06221c8  li 0, 32
  06221cc  addi 31, 11, -1
  06221d0  lwz 3, -32560(30)
  06221d4  mtctr 0
  06221d8  li 0, 0
  06221dc  li 12, 0
  06221e0  lwz 4, -32536(30)
  06221e4  li 5, 0
  06221e8  lwz 27, -32748(30)
  06221ec  lwz 28, -32744(30)
  06221f0  li 6, 0
  06221f4  lwz 29, -32708(30)
  06221f8  stw 0, 0(9)
  06221fc  add 9, 5, 27
  0622200  add 11, 5, 28
  0622204  add 10, 5, 29
  0622208  clrldi 8, 3, 32
  062220c  clrldi 7, 4, 32
  0622210  clrldi 9, 9, 32
  0622214  clrldi 11, 11, 32
  0622218  clrldi 10, 10, 32
  062221c  stw 12, 0(8)
  0622220  addi 3, 3, 44
  0622224  addi 4, 4, 4
  0622228  addi 5, 5, 4
  062222c  stw 6, 40(8)
  0622230  sth 31, 2(7)
  0622234  stw 6, 0(9)
  0622238  stw 6, 0(11)
  062223c  stw 6, 0(10)
  0622240  sth 6, 0(7)
  0622244  addi 12, 12, 1
  0622248  bdnz 0x6221fc
  062224c  bl 0x615218
  0622250  nop
  0622254  cmpwi 7, 3, 0
  0622258  mr 26, 3
  062225c  bt 30, 0x6222e0
  0622260  addi 31, 3, 20
  0622264  lwz 27, -32692(30)
  0622268  li 29, 0
  062226c  lwz 28, -32540(30)
  0622270  lfs 31, -32548(30)
  0622274  lfs 30, -32432(30)
  0622278  lfs 2, 0(31)
  062227c  fmr 1, 31
  0622280  fdivs 2, 2, 30
  0622284  bl 0x5dcbd8
  0622288  nop
  062228c  add 9, 29, 27
  0622290  addi 11, 31, -3
  0622294  clrldi 9, 9, 32
  0622298  clrldi 11, 11, 32
  062229c  add 10, 29, 28
  06222a0  cmpwi 7, 29, 124
  06222a4  clrldi 10, 10, 32
  06222a8  stfs 1, 0(9)
  06222ac  addi 31, 31, 8
  06222b0  lbz 0, 0(11)
  06222b4  addi 29, 29, 4
  06222b8  extsb 0, 0
  06222bc  stw 0, 0(10)
  06222c0  bf 30, 0x622278
  06222c4  lfs 2, 0(26)
  06222c8  fmr 1, 31
  06222cc  fdivs 2, 2, 30
  06222d0  bl 0x5dcbd8
  06222d4  nop
  06222d8  lwz 9, -32688(30)
  06222dc  stfs 1, 0(9)
  06222e0  lwz 9, -32760(30)
  06222e4  li 0, 1
  06222e8  li 3, 1
  06222ec  ld 26, 112(1)
  06222f0  ld 27, 120(1)
  06222f4  extsw 3, 3
  06222f8  ld 28, 128(1)
  06222fc  ld 29, 136(1)
  0622300  stw 0, 0(9)
  0622304  ld 0, 192(1)
  0622308  ld 30, 144(1)
  062230c  ld 31, 152(1)
  0622310  mtlr 0
  0622314  lfd 30, 160(1)
  0622318  lfd 31, 168(1)
  062231c  addi 1, 1, 176
  0622320  blr
  0622324  lwz 4, 0(28)
  0622328  lwz 3, -32436(30)
  062232c  extsw 5, 4
  0622330  mulli 4, 4, 104
  0622334  rlwinm 4, 4, 0, 0, 28
  0622338  bl 0x61948c
  062233c  nop
  0622340  ld 0, 192(1)
  0622344  ld 26, 112(1)
  0622348  li 3, 0
  062234c  ld 27, 120(1)
  0622350  ld 28, 128(1)
  0622354  mtlr 0
  0622358  extsw 3, 3
  062235c  ld 29, 136(1)
  0622360  ld 30, 144(1)
  0622364  ld 31, 152(1)
  0622368  lfd 30, 160(1)
  062236c  lfd 31, 168(1)
  0622370  addi 1, 1, 176
  0622374  blr

FUN_00622378:   # 0x622378, 0x28 bytes
  0622378  std 30, -16(1)
  062237c  lwz 30, -29440(2)
  0622380  li 0, 0
  0622384  stb 0, 12(3)
  0622388  stw 0, 4(3)
  062238c  stw 0, 8(3)
  0622390  lwz 9, -32768(30)
  0622394  ld 30, -16(1)
  0622398  stw 9, 0(3)
  062239c  blr

FUN_006223a0:   # 0x6223a0, 0x28 bytes
  06223a0  std 30, -16(1)
  06223a4  lwz 30, -29440(2)
  06223a8  li 0, 0
  06223ac  stb 0, 12(3)
  06223b0  stw 0, 4(3)
  06223b4  stw 0, 8(3)
  06223b8  lwz 9, -32768(30)
  06223bc  ld 30, -16(1)
  06223c0  stw 9, 0(3)
  06223c4  blr

FUN_006223c8:   # 0x6223c8, 0x24 bytes
  06223c8  addi 0, 4, -97
  06223cc  addi 9, 4, -32
  06223d0  clrlwi 0, 0, 24
  06223d4  extsb 3, 9
  06223d8  cmplwi 7, 0, 25
  06223dc  bf 29, 0x6223e4
  06223e0  extsb 3, 4
  06223e4  extsw 3, 3
  06223e8  blr

FUN_006223ec:   # 0x6223ec, 0x2b8 bytes
  06223ec  stdu 1, -224(1)
  06223f0  mflr 0
  06223f4  std 31, 216(1)
  06223f8  std 0, 240(1)
  06223fc  lwz 31, 8(3)
  0622400  std 25, 168(1)
  0622404  cmpwi 7, 31, 0
  0622408  std 26, 176(1)
  062240c  std 28, 192(1)
  0622410  std 19, 120(1)
  0622414  std 20, 128(1)
  0622418  std 21, 136(1)
  062241c  std 22, 144(1)
  0622420  std 23, 152(1)
  0622424  std 24, 160(1)
  0622428  std 27, 184(1)
  062242c  std 29, 200(1)
  0622430  mr 28, 4
  0622434  mr 25, 3
  0622438  mr 26, 4
  062243c  bf 30, 0x622488
  0622440  li 3, -1
  0622444  ld 0, 240(1)
  0622448  extsw 3, 3
  062244c  ld 19, 120(1)
  0622450  ld 20, 128(1)
  0622454  mtlr 0
  0622458  ld 21, 136(1)
  062245c  ld 22, 144(1)
  0622460  ld 23, 152(1)
  0622464  ld 24, 160(1)
  0622468  ld 25, 168(1)
  062246c  ld 26, 176(1)
  0622470  ld 27, 184(1)
  0622474  ld 28, 192(1)
  0622478  ld 29, 200(1)
  062247c  ld 31, 216(1)
  0622480  addi 1, 1, 224
  0622484  blr
  0622488  lwz 27, 4(3)
  062248c  cmpwi 7, 27, 0
  0622490  bt 30, 0x622440
  0622494  bf 29, 0x622440
  0622498  li 24, 0
  062249c  addi 0, 24, 1
  06224a0  sub 9, 27, 24
  06224a4  cmpw 7, 0, 27
  06224a8  clrldi 9, 9, 32
  06224ac  mr 10, 24
  06224b0  add 11, 31, 24
  06224b4  mtctr 9
  06224b8  bt- 29, 0x622640
  06224bc  lis 0, -32768
  06224c0  cmpw 7, 27, 0
  06224c4  bt- 30, 0x622640
  06224c8  clrldi 9, 11, 32
  06224cc  addi 11, 11, 1
  06224d0  lbz 0, 0(9)
  06224d4  cmpwi 7, 0, 91
  06224d8  bt 30, 0x6224e8
  06224dc  addi 10, 10, 1
  06224e0  bdnz 0x6224c8
  06224e4  b 0x622440
  06224e8  addi 0, 10, 1
  06224ec  sub 9, 27, 10
  06224f0  cmpw 7, 0, 27
  06224f4  add 11, 31, 10
  06224f8  clrldi 9, 9, 32
  06224fc  addi 11, 11, 1
  0622500  mtctr 9
  0622504  bt- 29, 0x622634
  0622508  lis 0, -32768
  062250c  cmpw 7, 27, 0
  0622510  bt- 30, 0x622634
  0622514  clrldi 9, 11, 32
  0622518  addi 10, 10, 1
  062251c  addi 11, 11, 1
  0622520  lbz 0, 0(9)
  0622524  extsb 0, 0
  0622528  cmpwi 7, 0, 32
  062252c  cmpwi 6, 0, 127
  0622530  bf 29, 0x622538
  0622534  bf 26, 0x622540
  0622538  bdnz 0x622514
  062253c  b 0x622440
  0622540  addi 0, 10, 1
  0622544  sub 9, 27, 10
  0622548  cmpw 7, 0, 27
  062254c  add 8, 31, 10
  0622550  clrldi 9, 9, 32
  0622554  mr 24, 10
  0622558  mtctr 9
  062255c  mr 11, 8
  0622560  mr 23, 10
  0622564  bt- 29, 0x62264c
  0622568  lis 0, -32768
  062256c  cmpw 7, 27, 0
  0622570  bt- 30, 0x62264c
  0622574  clrldi 9, 11, 32
  0622578  addi 11, 11, 1
  062257c  lbz 0, 0(9)
  0622580  extsb 0, 0
  0622584  cmpwi 7, 0, 93
  0622588  cmpwi 6, 0, 32
  062258c  bt 30, 0x6225a4
  0622590  bt 26, 0x622598
  0622594  mr 23, 24
  0622598  addi 24, 24, 1
  062259c  bdnz 0x622574
  06225a0  b 0x622440
  06225a4  cmpw 7, 23, 10
  06225a8  bf 29, 0x622628
  06225ac  lbz 4, 0(28)
  06225b0  cmpwi 7, 4, 0
  06225b4  bt 30, 0x622628
  06225b8  mr 22, 8
  06225bc  mr 21, 10
  06225c0  li 20, 0
  06225c4  clrldi 19, 25, 32
  06225c8  b 0x6225e8
  06225cc  bt 24, 0x622658
  06225d0  addi 20, 20, 1
  06225d4  add 9, 20, 26
  06225d8  clrldi 9, 9, 32
  06225dc  lbz 4, 0(9)
  06225e0  cmpwi 7, 4, 0
  06225e4  bt 30, 0x622628
  06225e8  extsb 4, 4
  06225ec  mr 3, 19
  06225f0  addi 21, 21, 1
  06225f4  bl 0x6223c8
  06225f8  clrldi 9, 22, 32
  06225fc  mr 29, 3
  0622600  mr 3, 19
  0622604  extsb 29, 29
  0622608  addi 22, 22, 1
  062260c  lbz 4, 0(9)
  0622610  extsb 4, 4
  0622614  bl 0x6223c8
  0622618  cmpw 6, 23, 21
  062261c  extsb 3, 3
  0622620  cmpw 7, 29, 3
  0622624  bt 30, 0x6225cc
  0622628  cmpw 7, 24, 27
  062262c  bt 28, 0x62249c
  0622630  b 0x622440
  0622634  li 0, 1
  0622638  mtctr 0
  062263c  b 0x622514
  0622640  li 0, 1
  0622644  mtctr 0
  0622648  b 0x6224c8
  062264c  li 0, 1
  0622650  mtctr 0
  0622654  b 0x622574
  0622658  add 9, 20, 26
  062265c  clrldi 9, 9, 32
  0622660  lbz 0, 1(9)
  0622664  cmpwi 7, 0, 0
  0622668  bf 30, 0x622628
  062266c  add 11, 31, 23
  0622670  clrldi 9, 11, 32
  0622674  lbz 0, 0(9)
  0622678  cmpwi 7, 0, 10
  062267c  bt 30, 0x62269c
  0622680  addi 11, 11, 1
  0622684  clrldi 9, 11, 32
  0622688  addi 23, 23, 1
  062268c  addi 11, 11, 1
  0622690  lbz 0, 0(9)
  0622694  cmpwi 7, 0, 10
  0622698  bf 30, 0x622684
  062269c  addi 3, 23, 1
  06226a0  b 0x622444

FUN_006226a4:   # 0x6226a4, 0x324 bytes
  06226a4  stdu 1, -224(1)
  06226a8  mflr 0
  06226ac  std 28, 192(1)
  06226b0  std 0, 240(1)
  06226b4  lwz 28, 4(3)
  06226b8  std 23, 152(1)
  06226bc  cmpw 7, 28, 5
  06226c0  std 25, 168(1)
  06226c4  std 27, 184(1)
  06226c8  std 31, 216(1)
  06226cc  std 19, 120(1)
  06226d0  std 20, 128(1)
  06226d4  std 21, 136(1)
  06226d8  std 22, 144(1)
  06226dc  std 24, 160(1)
  06226e0  std 26, 176(1)
  06226e4  std 29, 200(1)
  06226e8  mr 31, 5
  06226ec  mr 27, 4
  06226f0  mr 23, 3
  06226f4  mr 25, 4
  06226f8  bt 29, 0x622744
  06226fc  li 31, -1
  0622700  ld 0, 240(1)
  0622704  extsw 3, 31
  0622708  ld 19, 120(1)
  062270c  ld 20, 128(1)
  0622710  mtlr 0
  0622714  ld 21, 136(1)
  0622718  ld 22, 144(1)
  062271c  ld 23, 152(1)
  0622720  ld 24, 160(1)
  0622724  ld 25, 168(1)
  0622728  ld 26, 176(1)
  062272c  ld 27, 184(1)
  0622730  ld 28, 192(1)
  0622734  ld 29, 200(1)
  0622738  ld 31, 216(1)
  062273c  addi 1, 1, 224
  0622740  blr
  0622744  lwz 19, 8(3)
  0622748  add 11, 19, 31
  062274c  clrldi 9, 11, 32
  0622750  lbz 0, 0(9)
  0622754  cmpwi 7, 0, 91
  0622758  bt 30, 0x6226fc
  062275c  addi 0, 31, 1
  0622760  sub 9, 28, 31
  0622764  cmpw 7, 0, 28
  0622768  clrldi 9, 9, 32
  062276c  mr 8, 31
  0622770  mr 10, 11
  0622774  mtctr 9
  0622778  bt- 29, 0x6229bc
  062277c  lis 0, -32768
  0622780  cmpw 7, 28, 0
  0622784  bt- 30, 0x6229bc
  0622788  clrldi 9, 10, 32
  062278c  addi 10, 10, 1
  0622790  lbz 11, 0(9)
  0622794  addi 11, 11, -33
  0622798  clrlwi 11, 11, 24
  062279c  cmplwi 7, 11, 93
  06227a0  bf 29, 0x6227b0
  06227a4  addi 8, 8, 1
  06227a8  bdnz 0x622788
  06227ac  b 0x6226fc
  06227b0  addi 0, 8, 1
  06227b4  sub 9, 28, 8
  06227b8  cmpw 7, 0, 28
  06227bc  add 10, 19, 8
  06227c0  clrldi 9, 9, 32
  06227c4  mr 31, 8
  06227c8  mtctr 9
  06227cc  mr 11, 10
  06227d0  mr 21, 8
  06227d4  bt- 29, 0x6229b0
  06227d8  lis 0, -32768
  06227dc  cmpw 7, 28, 0
  06227e0  bt- 30, 0x6229b0
  06227e4  clrldi 9, 11, 32
  06227e8  addi 11, 11, 1
  06227ec  lbz 0, 0(9)
  06227f0  extsb 0, 0
  06227f4  cmpwi 7, 0, 61
  06227f8  cmpwi 6, 0, 32
  06227fc  bt 30, 0x622814
  0622800  bt 26, 0x622808
  0622804  mr 21, 31
  0622808  addi 31, 31, 1
  062280c  bdnz 0x6227e4
  0622810  b 0x6226fc
  0622814  cmpw 7, 8, 21
  0622818  bf 28, 0x622898
  062281c  lbz 4, 0(27)
  0622820  cmpwi 7, 4, 0
  0622824  bt 30, 0x622898
  0622828  mr 24, 10
  062282c  mr 26, 8
  0622830  li 22, 0
  0622834  clrldi 20, 23, 32
  0622838  b 0x622858
  062283c  bt 24, 0x6228e8
  0622840  addi 22, 22, 1
  0622844  add 9, 22, 25
  0622848  clrldi 9, 9, 32
  062284c  lbz 4, 0(9)
  0622850  cmpwi 7, 4, 0
  0622854  bt 30, 0x622898
  0622858  extsb 4, 4
  062285c  mr 3, 20
  0622860  addi 26, 26, 1
  0622864  bl 0x6223c8
  0622868  clrldi 9, 24, 32
  062286c  mr 29, 3
  0622870  mr 3, 20
  0622874  extsb 29, 29
  0622878  addi 24, 24, 1
  062287c  lbz 4, 0(9)
  0622880  extsb 4, 4
  0622884  bl 0x6223c8
  0622888  cmpw 6, 21, 26
  062288c  extsb 3, 3
  0622890  cmpw 7, 29, 3
  0622894  bt 30, 0x62283c
  0622898  addi 0, 31, 1
  062289c  sub 9, 28, 31
  06228a0  cmpw 7, 0, 28
  06228a4  add 11, 19, 31
  06228a8  clrldi 9, 9, 32
  06228ac  addi 11, 11, 1
  06228b0  mtctr 9
  06228b4  bt- 29, 0x62298c
  06228b8  lis 0, -32768
  06228bc  cmpw 7, 28, 0
  06228c0  bf+ 30, 0x6228d4
  06228c4  b 0x62298c
  06228c8  lbz 0, 0(9)
  06228cc  cmpwi 7, 0, 10
  06228d0  bt 30, 0x622748
  06228d4  clrldi 9, 11, 32
  06228d8  addi 31, 31, 1
  06228dc  addi 11, 11, 1
  06228e0  bdnz 0x6228c8
  06228e4  b 0x6226fc
  06228e8  add 9, 22, 25
  06228ec  clrldi 9, 9, 32
  06228f0  lbz 0, 1(9)
  06228f4  cmpwi 7, 0, 0
  06228f8  bf 30, 0x622898
  06228fc  addi 0, 21, 1
  0622900  sub 9, 28, 21
  0622904  cmpw 7, 0, 28
  0622908  clrldi 9, 9, 32
  062290c  add 11, 19, 21
  0622910  mtctr 9
  0622914  bt- 29, 0x622998
  0622918  lis 0, -32768
  062291c  cmpw 7, 28, 0
  0622920  bf+ 30, 0x62292c
  0622924  b 0x622998
  0622928  bdz 0x6226fc
  062292c  clrldi 9, 11, 32
  0622930  addi 11, 11, 1
  0622934  lbz 0, 0(9)
  0622938  cmpwi 7, 0, 61
  062293c  bf 30, 0x622928
  0622940  addi 0, 31, 1
  0622944  sub 9, 28, 31
  0622948  cmpw 7, 0, 28
  062294c  add 11, 19, 31
  0622950  clrldi 9, 9, 32
  0622954  addi 3, 11, 1
  0622958  mtctr 9
  062295c  bt- 29, 0x6229a4
  0622960  lis 0, -32768
  0622964  cmpw 7, 28, 0
  0622968  bt- 30, 0x6229a4
  062296c  clrldi 9, 3, 32
  0622970  addi 31, 31, 1
  0622974  addi 3, 3, 1
  0622978  lbz 0, 0(9)
  062297c  cmpwi 7, 0, 32
  0622980  bf 30, 0x622700
  0622984  bdnz 0x62296c
  0622988  b 0x6226fc
  062298c  li 0, 1
  0622990  mtctr 0
  0622994  b 0x6228d4
  0622998  li 0, 1
  062299c  mtctr 0
  06229a0  b 0x62292c
  06229a4  li 0, 1
  06229a8  mtctr 0
  06229ac  b 0x62296c
  06229b0  li 0, 1
  06229b4  mtctr 0
  06229b8  b 0x6227e4
  06229bc  li 0, 1
  06229c0  mtctr 0
  06229c4  b 0x622788

FUN_006229c8:   # 0x6229c8, 0x80 bytes
  06229c8  stdu 1, -128(1)
  06229cc  mflr 0
  06229d0  std 31, 120(1)
  06229d4  std 0, 144(1)
  06229d8  mr 31, 3
  06229dc  lwz 3, 8(3)
  06229e0  std 30, 112(1)
  06229e4  cmpwi 7, 3, 0
  06229e8  lwz 30, -29440(2)
  06229ec  bt 30, 0x622a0c
  06229f0  lbz 0, 12(31)
  06229f4  clrldi 3, 3, 32
  06229f8  cmpwi 7, 0, 0
  06229fc  bt 30, 0x622a24
  0622a00  li 0, 0
  0622a04  stw 0, 4(31)
  0622a08  stw 0, 8(31)
  0622a0c  ld 0, 144(1)
  0622a10  ld 30, 112(1)
  0622a14  ld 31, 120(1)
  0622a18  mtlr 0
  0622a1c  addi 1, 1, 128
  0622a20  blr
  0622a24  lwz 9, -32764(30)
  0622a28  lwz 11, 0(9)
  0622a2c  lwz 0, 0(11)
  0622a30  std 2, 40(1)
  0622a34  mtctr 0
  0622a38  lwz 2, 4(11)
  0622a3c  bctrl
  0622a40  ld 2, 40(1)
  0622a44  b 0x622a00

FUN_00622a48:   # 0x622a48, 0xe4 bytes
  0622a48  lwz 8, 8(3)
  0622a4c  cmpwi 7, 8, 0
  0622a50  bt 30, 0x622ab8
  0622a54  lwz 3, 4(3)
  0622a58  cmpwi 7, 3, 0
  0622a5c  bt 30, 0x622ab8
  0622a60  bf 29, 0x622ab8
  0622a64  li 10, 0
  0622a68  li 7, 0
  0622a6c  addi 0, 10, 1
  0622a70  sub 9, 3, 10
  0622a74  cmpw 7, 0, 3
  0622a78  clrldi 9, 9, 32
  0622a7c  add 11, 8, 10
  0622a80  mtctr 9
  0622a84  bt- 29, 0x622b20
  0622a88  lis 0, -32768
  0622a8c  cmpw 7, 3, 0
  0622a90  bt- 30, 0x622b20
  0622a94  clrldi 9, 11, 32
  0622a98  addi 11, 11, 1
  0622a9c  lbz 0, 0(9)
  0622aa0  cmpwi 7, 0, 91
  0622aa4  bt 30, 0x622ac4
  0622aa8  addi 10, 10, 1
  0622aac  bdnz 0x622a94
  0622ab0  extsw 3, 7
  0622ab4  blr
  0622ab8  li 7, 0
  0622abc  extsw 3, 7
  0622ac0  blr
  0622ac4  addi 0, 10, 1
  0622ac8  sub 9, 3, 10
  0622acc  cmpw 7, 0, 3
  0622ad0  add 11, 8, 10
  0622ad4  clrldi 9, 9, 32
  0622ad8  addi 11, 11, 1
  0622adc  mtctr 9
  0622ae0  bt- 29, 0x622b14
  0622ae4  lis 0, -32768
  0622ae8  cmpw 7, 3, 0
  0622aec  bt- 30, 0x622b14
  0622af0  clrldi 9, 11, 32
  0622af4  addi 10, 10, 1
  0622af8  addi 11, 11, 1
  0622afc  bdz 0x622ab0
  0622b00  lbz 0, 0(9)
  0622b04  cmpwi 7, 0, 93
  0622b08  bf 30, 0x622af0
  0622b0c  addi 7, 7, 1
  0622b10  b 0x622a6c
  0622b14  li 0, 1
  0622b18  mtctr 0
  0622b1c  b 0x622af0
  0622b20  li 0, 1
  0622b24  mtctr 0
  0622b28  b 0x622a94

FUN_00622b2c:   # 0x622b2c, 0x28c bytes
  0622b2c  lwz 12, 8(3)
  0622b30  std 28, -32(1)
  0622b34  cmpwi 7, 12, 0
  0622b38  std 29, -24(1)
  0622b3c  std 27, -40(1)
  0622b40  std 31, -8(1)
  0622b44  mr 28, 6
  0622b48  mr 29, 5
  0622b4c  bt 30, 0x622bac
  0622b50  lwz 8, 4(3)
  0622b54  cmpwi 7, 8, 0
  0622b58  bt 30, 0x622bac
  0622b5c  bf 29, 0x622bac
  0622b60  li 10, 0
  0622b64  li 31, 0
  0622b68  addi 0, 10, 1
  0622b6c  sub 9, 8, 10
  0622b70  cmpw 7, 0, 8
  0622b74  clrldi 9, 9, 32
  0622b78  add 11, 12, 10
  0622b7c  mtctr 9
  0622b80  bt- 29, 0x622dac
  0622b84  lis 0, -32768
  0622b88  cmpw 7, 8, 0
  0622b8c  bt- 30, 0x622dac
  0622b90  clrldi 9, 11, 32
  0622b94  addi 11, 11, 1
  0622b98  lbz 0, 0(9)
  0622b9c  cmpwi 7, 0, 91
  0622ba0  bt 30, 0x622bc0
  0622ba4  addi 10, 10, 1
  0622ba8  bdnz 0x622b90
  0622bac  ld 27, -40(1)
  0622bb0  ld 28, -32(1)
  0622bb4  ld 29, -24(1)
  0622bb8  ld 31, -8(1)
  0622bbc  blr
  0622bc0  cmpw 7, 4, 31
  0622bc4  bt 30, 0x622c20
  0622bc8  addi 0, 10, 1
  0622bcc  sub 9, 8, 10
  0622bd0  cmpw 7, 0, 8
  0622bd4  clrldi 9, 9, 32
  0622bd8  add 11, 12, 10
  0622bdc  mtctr 9
  0622be0  bt- 29, 0x622da0
  0622be4  lis 0, -32768
  0622be8  cmpw 7, 8, 0
  0622bec  bt- 30, 0x622da0
  0622bf0  clrldi 9, 11, 32
  0622bf4  addi 11, 11, 1
  0622bf8  lbz 0, 0(9)
  0622bfc  cmpwi 7, 0, 93
  0622c00  bt 30, 0x622c84
  0622c04  addi 10, 10, 1
  0622c08  bdnz 0x622bf0
  0622c0c  ld 27, -40(1)
  0622c10  ld 28, -32(1)
  0622c14  ld 29, -24(1)
  0622c18  ld 31, -8(1)
  0622c1c  blr
  0622c20  addi 0, 10, 1
  0622c24  sub 9, 8, 10
  0622c28  cmpw 7, 0, 8
  0622c2c  add 11, 12, 10
  0622c30  clrldi 9, 9, 32
  0622c34  mr 6, 11
  0622c38  mr 7, 10
  0622c3c  mtctr 9
  0622c40  addi 11, 11, 1
  0622c44  bt- 29, 0x622d94
  0622c48  lis 0, -32768
  0622c4c  cmpw 7, 8, 0
  0622c50  bt- 30, 0x622d94
  0622c54  clrldi 9, 11, 32
  0622c58  addi 7, 7, 1
  0622c5c  addi 6, 6, 1
  0622c60  addi 11, 11, 1
  0622c64  lbz 0, 0(9)
  0622c68  extsb 0, 0
  0622c6c  cmpwi 7, 0, 32
  0622c70  cmpwi 6, 0, 127
  0622c74  bf 29, 0x622c7c
  0622c78  bf 26, 0x622c94
  0622c7c  bdnz 0x622c54
  0622c80  b 0x622bac
  0622c84  cmpw 7, 10, 8
  0622c88  bf 28, 0x622bac
  0622c8c  addi 31, 31, 1
  0622c90  b 0x622b68
  0622c94  addi 0, 7, 1
  0622c98  sub 9, 8, 7
  0622c9c  cmpw 7, 0, 8
  0622ca0  clrldi 9, 9, 32
  0622ca4  mr 10, 7
  0622ca8  mr 11, 6
  0622cac  mtctr 9
  0622cb0  mr 27, 7
  0622cb4  bt- 29, 0x622d88
  0622cb8  lis 0, -32768
  0622cbc  cmpw 7, 8, 0
  0622cc0  bt- 30, 0x622d88
  0622cc4  clrldi 9, 11, 32
  0622cc8  addi 11, 11, 1
  0622ccc  lbz 0, 0(9)
  0622cd0  extsb 0, 0
  0622cd4  cmpwi 7, 0, 93
  0622cd8  cmpwi 6, 0, 32
  0622cdc  bt 30, 0x622cf0
  0622ce0  bt 26, 0x622ce8
  0622ce4  mr 27, 10
  0622ce8  addi 10, 10, 1
  0622cec  bdnz 0x622cc4
  0622cf0  cmpw 7, 27, 7
  0622cf4  bf 29, 0x622bc8
  0622cf8  clrldi 9, 6, 32
  0622cfc  cmpwi 7, 28, 2
  0622d00  addi 7, 7, 1
  0622d04  li 10, 1
  0622d08  li 8, 1
  0622d0c  lbz 0, 0(9)
  0622d10  li 9, 254
  0622d14  stb 0, 0(5)
  0622d18  mtctr 9
  0622d1c  bf 30, 0x622d4c
  0622d20  b 0x622d64
  0622d24  lwz 9, 8(3)
  0622d28  addi 8, 8, 1
  0622d2c  add 9, 7, 9
  0622d30  cmpw 7, 11, 8
  0622d34  clrldi 9, 9, 32
  0622d38  addi 7, 7, 1
  0622d3c  lbz 0, 0(9)
  0622d40  stb 0, 0(10)
  0622d44  bdz- 0x622d80
  0622d48  bt 30, 0x622d78
  0622d4c  cmpw 7, 7, 27
  0622d50  add 0, 8, 29
  0622d54  addi 11, 28, -1
  0622d58  clrldi 10, 0, 32
  0622d5c  bf 29, 0x622d24
  0622d60  mr 10, 8
  0622d64  add 9, 10, 29
  0622d68  li 0, 0
  0622d6c  clrldi 9, 9, 32
  0622d70  stb 0, 0(9)
  0622d74  b 0x622bac
  0622d78  mr 10, 11
  0622d7c  b 0x622d64
  0622d80  li 10, 255
  0622d84  b 0x622d64
  0622d88  li 0, 1
  0622d8c  mtctr 0
  0622d90  b 0x622cc4
  0622d94  li 9, 1
  0622d98  mtctr 9
  0622d9c  b 0x622c54
  0622da0  li 0, 1
  0622da4  mtctr 0
  0622da8  b 0x622bf0
  0622dac  li 0, 1
  0622db0  mtctr 0
  0622db4  b 0x622b90

FUN_00622db8:   # 0x622db8, 0x170 bytes
  0622db8  stdu 1, -160(1)
  0622dbc  mflr 0
  0622dc0  std 26, 112(1)
  0622dc4  std 27, 120(1)
  0622dc8  std 28, 128(1)
  0622dcc  std 31, 152(1)
  0622dd0  mr 27, 5
  0622dd4  std 29, 136(1)
  0622dd8  std 0, 176(1)
  0622ddc  mr 31, 3
  0622de0  mr 26, 6
  0622de4  mr 28, 6
  0622de8  bl 0x6223ec
  0622dec  cmpwi 7, 3, 0
  0622df0  mr 5, 3
  0622df4  bf 29, 0x622ef4
  0622df8  mr 3, 31
  0622dfc  clrldi 4, 27, 32
  0622e00  extsw 5, 5
  0622e04  bl 0x6226a4
  0622e08  cmpwi 7, 3, 0
  0622e0c  mr 7, 3
  0622e10  bf 29, 0x622ef4
  0622e14  lwz 0, 8(31)
  0622e18  mr 5, 3
  0622e1c  mr 8, 3
  0622e20  add 6, 0, 3
  0622e24  mr 10, 6
  0622e28  clrldi 9, 10, 32
  0622e2c  addi 3, 3, 1
  0622e30  addi 10, 10, 1
  0622e34  lbz 11, 0(9)
  0622e38  addi 11, 11, -32
  0622e3c  clrlwi 11, 11, 24
  0622e40  cmplwi 7, 11, 94
  0622e44  bt 29, 0x622e58
  0622e48  lwz 0, 4(31)
  0622e4c  mr 8, 3
  0622e50  cmpw 7, 0, 3
  0622e54  bt 29, 0x622e28
  0622e58  cmpw 7, 7, 8
  0622e5c  li 9, 0
  0622e60  bf 28, 0x622eb8
  0622e64  clrldi 9, 6, 32
  0622e68  li 0, 254
  0622e6c  sub 8, 8, 5
  0622e70  mtctr 0
  0622e74  li 11, 1
  0622e78  lbz 0, 0(9)
  0622e7c  stb 0, 0(26)
  0622e80  b 0x622ea4
  0622e84  lwz 9, 8(31)
  0622e88  add 9, 7, 9
  0622e8c  add 9, 9, 11
  0622e90  addi 11, 11, 1
  0622e94  clrldi 9, 9, 32
  0622e98  lbz 0, 0(9)
  0622e9c  stb 0, 0(10)
  0622ea0  bdz- 0x622f20
  0622ea4  cmpw 7, 8, 11
  0622ea8  add 0, 11, 28
  0622eac  clrldi 10, 0, 32
  0622eb0  bf 30, 0x622e84
  0622eb4  mr 9, 8
  0622eb8  add 9, 9, 28
  0622ebc  li 0, 0
  0622ec0  clrldi 9, 9, 32
  0622ec4  li 3, 1
  0622ec8  extsw 3, 3
  0622ecc  stb 0, 0(9)
  0622ed0  ld 0, 176(1)
  0622ed4  ld 26, 112(1)
  0622ed8  ld 27, 120(1)
  0622edc  mtlr 0
  0622ee0  ld 28, 128(1)
  0622ee4  ld 29, 136(1)
  0622ee8  ld 31, 152(1)
  0622eec  addi 1, 1, 160
  0622ef0  blr
  0622ef4  ld 0, 176(1)
  0622ef8  li 3, 0
  0622efc  ld 26, 112(1)
  0622f00  extsw 3, 3
  0622f04  ld 27, 120(1)
  0622f08  ld 28, 128(1)
  0622f0c  mtlr 0
  0622f10  ld 29, 136(1)
  0622f14  ld 31, 152(1)
  0622f18  addi 1, 1, 160
  0622f1c  blr
  0622f20  li 9, 255
  0622f24  b 0x622eb8

FUN_00622f28:   # 0x622f28, 0x94 bytes
  0622f28  cmpdi 4, 0
  0622f2c  mflr 0
  0622f30  stdu 1, -160(1)
  0622f34  std 27, 120(1)
  0622f38  std 28, 128(1)
  0622f3c  std 29, 136(1)
  0622f40  std 30, 144(1)
  0622f44  std 31, 152(1)
  0622f48  std 0, 176(1)
  0622f4c  lwz 30, -29440(2)
  0622f50  mr 27, 4
  0622f54  mr 28, 5
  0622f58  mr 31, 3
  0622f5c  mr 29, 5
  0622f60  bt 2, 0x622fac
  0622f64  cmpwi 7, 29, 0
  0622f68  bf 30, 0x622f78
  0622f6c  lwz 3, -32756(30)
  0622f70  bl 0x61948c
  0622f74  nop
  0622f78  li 0, 1
  0622f7c  ld 29, 136(1)
  0622f80  stw 27, 8(31)
  0622f84  stb 0, 12(31)
  0622f88  ld 0, 176(1)
  0622f8c  stw 28, 4(31)
  0622f90  ld 27, 120(1)
  0622f94  mtlr 0
  0622f98  ld 28, 128(1)
  0622f9c  ld 30, 144(1)
  0622fa0  ld 31, 152(1)
  0622fa4  addi 1, 1, 160
  0622fa8  blr
  0622fac  lwz 3, -32760(30)
  0622fb0  bl 0x61948c
  0622fb4  nop
  0622fb8  b 0x622f64

FUN_00622fbc:   # 0x622fbc, 0x15c bytes
  0622fbc  stdu 1, -1168(1)
  0622fc0  mflr 0
  0622fc4  std 30, 1152(1)
  0622fc8  lwz 30, -29440(2)
  0622fcc  std 29, 1144(1)
  0622fd0  mr 29, 4
  0622fd4  std 31, 1160(1)
  0622fd8  mr 31, 3
  0622fdc  lwz 4, -32752(30)
  0622fe0  mr 3, 29
  0622fe4  std 0, 1184(1)
  0622fe8  bl 0x5c8700
  0622fec  nop
  0622ff0  cmpwi 7, 3, 0
  0622ff4  bt 30, 0x623110
  0622ff8  lwz 6, -32748(30)
  0622ffc  mr 7, 29
  0623000  lwz 5, -32740(30)
  0623004  addi 29, 1, 112
  0623008  clrldi 6, 6, 32
  062300c  clrldi 29, 29, 32
  0623010  li 4, 1024
  0623014  mr 3, 29
  0623018  bl 0x6193e0
  062301c  nop
  0623020  mr 3, 29
  0623024  li 4, 0
  0623028  bl 0x630808
  062302c  nop
  0623030  li 4, 0
  0623034  mr 0, 3
  0623038  extsw 29, 3
  062303c  cmpwi 7, 0, 0
  0623040  li 5, 2
  0623044  mr 3, 29
  0623048  bt 28, 0x6230e8
  062304c  bl 0x6307ac
  0623050  nop
  0623054  li 5, 0
  0623058  stw 3, 4(31)
  062305c  li 4, 0
  0623060  mr 3, 29
  0623064  bl 0x6307ac
  0623068  nop
  062306c  lwz 11, -32736(30)
  0623070  lwz 3, 4(31)
  0623074  li 4, 3
  0623078  extsw 3, 3
  062307c  lwz 9, 0(11)
  0623080  lwz 0, 0(9)
  0623084  std 2, 40(1)
  0623088  mtctr 0
  062308c  lwz 2, 4(9)
  0623090  bctrl
  0623094  ld 2, 40(1)
  0623098  mr 0, 3
  062309c  mr 3, 29
  06230a0  cmpwi 7, 0, 0
  06230a4  stw 0, 8(31)
  06230a8  clrldi 4, 0, 32
  06230ac  bt 30, 0x6230c0
  06230b0  lwz 5, 4(31)
  06230b4  extsw 5, 5
  06230b8  bl 0x630754
  06230bc  nop
  06230c0  mr 3, 29
  06230c4  bl 0x64f1c4
  06230c8  ld 2, 40(1)
  06230cc  ld 0, 1184(1)
  06230d0  ld 29, 1144(1)
  06230d4  ld 30, 1152(1)
  06230d8  mtlr 0
  06230dc  ld 31, 1160(1)
  06230e0  addi 1, 1, 1168
  06230e4  blr
  06230e8  lwz 3, -32732(30)
  06230ec  bl 0x61948c
  06230f0  nop
  06230f4  ld 0, 1184(1)
  06230f8  ld 29, 1144(1)
  06230fc  ld 30, 1152(1)
  0623100  mtlr 0
  0623104  ld 31, 1160(1)
  0623108  addi 1, 1, 1168
  062310c  blr
  0623110  lwz 6, -32744(30)
  0623114  b 0x622ffc

FUN_00623118:   # 0x623118, 0x4c bytes
  0623118  stdu 1, -144(1)
  062311c  mflr 0
  0623120  std 30, 128(1)
  0623124  lwz 30, -29440(2)
  0623128  std 29, 120(1)
  062312c  mr 29, 3
  0623130  std 0, 160(1)
  0623134  lwz 0, -32768(30)
  0623138  stw 0, 0(29)
  062313c  bl 0x6229c8
  0623140  mr 3, 29
  0623144  bl 0x5e387c
  0623148  nop
  062314c  ld 0, 160(1)
  0623150  ld 29, 120(1)
  0623154  ld 30, 128(1)
  0623158  mtlr 0
  062315c  addi 1, 1, 144
  0623160  blr

FUN_00623164:   # 0x623164, 0x1c bytes
  0623164  std 30, -16(1)
  0623168  lwz 30, -29440(2)
  062316c  mr 9, 3
  0623170  lwz 0, -32768(30)
  0623174  stw 0, 0(9)
  0623178  ld 30, -16(1)
  062317c  b 0x6229c8

FUN_00623180:   # 0x623180, 0x1c bytes
  0623180  std 30, -16(1)
  0623184  lwz 30, -29440(2)
  0623188  mr 9, 3
  062318c  lwz 0, -32768(30)
  0623190  stw 0, 0(9)
  0623194  ld 30, -16(1)
  0623198  b 0x6229c8

FUN_0062319c:   # 0x62319c, 0x3c bytes
  062319c  cmplwi 7, 3, 4
  06231a0  std 30, -16(1)
  06231a4  lwz 30, -29436(2)
  06231a8  bt 29, 0x6231dc
  06231ac  lwz 11, -32768(30)
  06231b0  rldic 9, 3, 2, 30
  06231b4  lwzx 0, 9, 11
  06231b8  extsw 0, 0
  06231bc  add 0, 0, 11
  06231c0  mtctr 0
  06231c4  bctr
  06231c8  <unknown>
  06231cc  <unknown>
  06231d0  <unknown>
  06231d4  <unknown>

FUN_0062323c:   # 0x62323c, 0x4c bytes
  062323c  lwz 0, 0(3)
  0623240  li 9, 0
  0623244  clrldi 11, 3, 32
  0623248  cmpwi 7, 0, 1
  062324c  cmpwi 6, 0, 3
  0623250  bt 30, 0x623260
  0623254  bt 26, 0x623260
  0623258  clrldi 3, 9, 32
  062325c  blr
  0623260  lwz 9, 4(3)
  0623264  addi 9, 9, -1
  0623268  slwi 9, 9, 3
  062326c  extsw 9, 9
  0623270  add 9, 11, 9
  0623274  lwz 11, 12(9)
  0623278  lwz 0, 8(9)
  062327c  add 9, 0, 11
  0623280  clrldi 3, 9, 32
  0623284  blr

FUN_00623288:   # 0x623288, 0x28 bytes
  0623288  stdu 1, -128(1)
  062328c  mflr 0
  0623290  std 0, 144(1)
  0623294  bl 0x6247ec
  0623298  nop
  062329c  ld 0, 144(1)
  06232a0  clrldi 3, 3, 56
  06232a4  mtlr 0
  06232a8  addi 1, 1, 128
  06232ac  blr

FUN_006232b0:   # 0x6232b0, 0x28 bytes
  06232b0  stdu 1, -128(1)
  06232b4  mflr 0
  06232b8  std 0, 144(1)
  06232bc  bl 0x6248a4
  06232c0  nop
  06232c4  ld 0, 144(1)
  06232c8  clrldi 3, 3, 32
  06232cc  mtlr 0
  06232d0  addi 1, 1, 128
  06232d4  blr

snd_RelocateBank:   # 0x6232d8, 0x21c bytes
  06232d8  stdu 1, -176(1)
  06232dc  mflr 0
  06232e0  std 30, 160(1)
  06232e4  lwz 30, -29436(2)
  06232e8  std 26, 128(1)
  06232ec  std 28, 144(1)
  06232f0  std 29, 152(1)
  06232f4  std 25, 120(1)
  06232f8  std 27, 136(1)
  06232fc  std 31, 168(1)
  0623300  std 0, 192(1)
  0623304  mr 28, 5
  0623308  mr 29, 3
  062330c  mr 26, 4
  0623310  bl 0x623288
  0623314  cmpwi 7, 3, 0
  0623318  bt 30, 0x62335c
  062331c  lwz 3, -32740(30)
  0623320  bl 0x61948c
  0623324  nop
  0623328  li 0, 0
  062332c  extsw 3, 0
  0623330  ld 0, 192(1)
  0623334  ld 25, 120(1)
  0623338  ld 26, 128(1)
  062333c  mtlr 0
  0623340  ld 27, 136(1)
  0623344  ld 28, 144(1)
  0623348  ld 29, 152(1)
  062334c  ld 30, 160(1)
  0623350  ld 31, 168(1)
  0623354  addi 1, 1, 176
  0623358  blr
  062335c  clrldi 27, 28, 32
  0623360  mr 3, 27
  0623364  bl 0x617cac
  0623368  nop
  062336c  cmpwi 7, 3, 0
  0623370  bt 30, 0x6233c8
  0623374  lwz 0, 8(28)
  0623378  rlwinm 0, 0, 0, 21, 21
  062337c  cmpwi 7, 0, 0
  0623380  bf 30, 0x6234a8
  0623384  lwz 0, 0(29)
  0623388  clrldi 25, 29, 32
  062338c  cmpwi 7, 0, 3
  0623390  bt 30, 0x623414
  0623394  li 0, 0
  0623398  ld 25, 120(1)
  062339c  ld 26, 128(1)
  06233a0  extsw 3, 0
  06233a4  ld 0, 192(1)
  06233a8  ld 27, 136(1)
  06233ac  ld 28, 144(1)
  06233b0  mtlr 0
  06233b4  ld 29, 152(1)
  06233b8  ld 30, 160(1)
  06233bc  ld 31, 168(1)
  06233c0  addi 1, 1, 176
  06233c4  blr
  06233c8  lwz 3, -32736(30)
  06233cc  mr 6, 27
  06233d0  lwz 4, -32732(30)
  06233d4  li 5, 745
  06233d8  bl 0x61948c
  06233dc  nop
  06233e0  li 0, 0
  06233e4  ld 25, 120(1)
  06233e8  extsw 3, 0
  06233ec  ld 0, 192(1)
  06233f0  ld 26, 128(1)
  06233f4  ld 27, 136(1)
  06233f8  mtlr 0
  06233fc  ld 28, 144(1)
  0623400  ld 29, 152(1)
  0623404  ld 30, 160(1)
  0623408  ld 31, 168(1)
  062340c  addi 1, 1, 176
  0623410  blr
  0623414  lwz 0, 8(29)
  0623418  add 0, 29, 0
  062341c  cmpw 7, 0, 28
  0623420  bf 30, 0x623394
  0623424  bl 0x6272e8
  0623428  nop
  062342c  lwz 0, 8(28)
  0623430  ori 0, 0, 1024
  0623434  stw 0, 8(28)
  0623438  bl 0x6271f4
  062343c  nop
  0623440  mr 3, 25
  0623444  bl 0x62323c
  0623448  sub 4, 26, 29
  062344c  mr 7, 3
  0623450  add 4, 28, 4
  0623454  mr 3, 27
  0623458  mr 5, 25
  062345c  clrldi 4, 4, 32
  0623460  clrldi 6, 26, 32
  0623464  clrldi 7, 7, 32
  0623468  bl 0x625b20
  062346c  nop
  0623470  li 0, 1
  0623474  clrlwi 3, 3, 24
  0623478  cmpwi 7, 3, 0
  062347c  bf 30, 0x62332c
  0623480  bl 0x6272e8
  0623484  nop
  0623488  lwz 0, 8(28)
  062348c  rlwinm 0, 0, 21, 1, 31
  0623490  rotlwi 0, 0, 11
  0623494  stw 0, 8(28)
  0623498  bl 0x6271f4
  062349c  nop
  06234a0  li 0, 0
  06234a4  b 0x62332c
  06234a8  lwz 3, -32728(30)
  06234ac  mr 6, 27
  06234b0  lwz 4, -32732(30)
  06234b4  li 5, 751
  06234b8  bl 0x61948c
  06234bc  nop
  06234c0  li 0, 0
  06234c4  ld 25, 120(1)
  06234c8  extsw 3, 0
  06234cc  ld 0, 192(1)
  06234d0  ld 26, 128(1)
  06234d4  ld 27, 136(1)
  06234d8  mtlr 0
  06234dc  ld 28, 144(1)
  06234e0  ld 29, 152(1)
  06234e4  ld 30, 160(1)
  06234e8  ld 31, 168(1)
  06234ec  addi 1, 1, 176
  06234f0  blr

FUN_006234f4:   # 0x6234f4, 0x60 bytes
  06234f4  stdu 1, -144(1)
  06234f8  mflr 0
  06234fc  std 5, 208(1)
  0623500  std 0, 160(1)
  0623504  std 29, 120(1)
  0623508  std 4, 200(1)
  062350c  mr 29, 3
  0623510  bl 0x6272e8
  0623514  nop
  0623518  lwz 4, 200(1)
  062351c  clrldi 3, 29, 32
  0623520  lfs 1, 204(1)
  0623524  extsw 4, 4
  0623528  lfs 2, 208(1)
  062352c  lfs 3, 212(1)
  0623530  bl 0x6259b8
  0623534  nop
  0623538  bl 0x6271f4
  062353c  nop
  0623540  ld 0, 160(1)
  0623544  ld 29, 120(1)
  0623548  mtlr 0
  062354c  addi 1, 1, 144
  0623550  blr

FUN_00623554:   # 0x623554, 0x24 bytes
  0623554  stdu 1, -128(1)
  0623558  mflr 0
  062355c  std 0, 144(1)
  0623560  bl 0x62ae84
  0623564  nop
  0623568  ld 0, 144(1)
  062356c  addi 1, 1, 128
  0623570  mtlr 0
  0623574  blr

FUN_00623578:   # 0x623578, 0x24 bytes
  0623578  stdu 1, -128(1)
  062357c  mflr 0
  0623580  std 0, 144(1)
  0623584  bl 0x627c40
  0623588  nop
  062358c  ld 0, 144(1)
  0623590  addi 1, 1, 128
  0623594  mtlr 0
  0623598  blr

FUN_0062359c:   # 0x62359c, 0x24 bytes
  062359c  stdu 1, -128(1)
  06235a0  mflr 0
  06235a4  std 0, 144(1)
  06235a8  bl 0x626670
  06235ac  nop
  06235b0  ld 0, 144(1)
  06235b4  addi 1, 1, 128
  06235b8  mtlr 0
  06235bc  blr

FUN_006235c0:   # 0x6235c0, 0x24 bytes
  06235c0  stdu 1, -128(1)
  06235c4  mflr 0
  06235c8  std 0, 144(1)
  06235cc  bl 0x62db94
  06235d0  nop
  06235d4  ld 0, 144(1)
  06235d8  addi 1, 1, 128
  06235dc  mtlr 0
  06235e0  blr

FUN_006235e4:   # 0x6235e4, 0x24 bytes
  06235e4  stdu 1, -128(1)
  06235e8  mflr 0
  06235ec  std 0, 144(1)
  06235f0  bl 0x626bb4
  06235f4  nop
  06235f8  ld 0, 144(1)
  06235fc  addi 1, 1, 128
  0623600  mtlr 0
  0623604  blr

FUN_00623608:   # 0x623608, 0x24 bytes
  0623608  stdu 1, -128(1)
  062360c  mflr 0
  0623610  std 0, 144(1)
  0623614  bl 0x626cb4
  0623618  nop
  062361c  ld 0, 144(1)
  0623620  addi 1, 1, 128
  0623624  mtlr 0
  0623628  blr

FUN_0062362c:   # 0x62362c, 0x198 bytes
  062362c  stdu 1, -144(1)
  0623630  mflr 0
  0623634  std 29, 120(1)
  0623638  mr 29, 4
  062363c  std 0, 160(1)
  0623640  lfs 1, 0(4)
  0623644  std 28, 112(1)
  0623648  mr 28, 3
  062364c  bl 0x628050
  0623650  nop
  0623654  lwz 5, 4(29)
  0623658  mr 3, 28
  062365c  lfs 1, 20(29)
  0623660  extsw 5, 5
  0623664  lfs 2, 36(29)
  0623668  li 4, 0
  062366c  lfs 3, 52(29)
  0623670  bl 0x627f54
  0623674  nop
  0623678  lwz 5, 8(29)
  062367c  lfs 1, 24(29)
  0623680  mr 3, 28
  0623684  lfs 2, 40(29)
  0623688  extsw 5, 5
  062368c  lfs 3, 56(29)
  0623690  li 4, 1
  0623694  bl 0x627f54
  0623698  nop
  062369c  lwz 5, 12(29)
  06236a0  lfs 1, 28(29)
  06236a4  mr 3, 28
  06236a8  lfs 2, 44(29)
  06236ac  extsw 5, 5
  06236b0  lfs 3, 60(29)
  06236b4  li 4, 2
  06236b8  bl 0x627f54
  06236bc  nop
  06236c0  lwz 5, 16(29)
  06236c4  lfs 2, 48(29)
  06236c8  extsw 5, 5
  06236cc  lfs 3, 64(29)
  06236d0  mr 3, 28
  06236d4  lfs 1, 32(29)
  06236d8  li 4, 3
  06236dc  bl 0x627f54
  06236e0  nop
  06236e4  lwz 0, 68(29)
  06236e8  lwz 9, 72(29)
  06236ec  srawi 10, 0, 31
  06236f0  lwz 11, 76(29)
  06236f4  mr 3, 28
  06236f8  lfs 1, 80(29)
  06236fc  xor 4, 10, 0
  0623700  srawi 0, 9, 31
  0623704  sub 4, 10, 4
  0623708  xor 6, 0, 9
  062370c  srawi 9, 11, 31
  0623710  sub 6, 0, 6
  0623714  xor 7, 9, 11
  0623718  rldicl 6, 6, 33, 63
  062371c  sub 7, 9, 7
  0623720  rldicl 4, 4, 33, 63
  0623724  rldicl 7, 7, 33, 63
  0623728  bl 0x627e64
  062372c  nop
  0623730  mr 3, 28
  0623734  lfs 1, 84(29)
  0623738  lfs 2, 88(29)
  062373c  lfs 3, 92(29)
  0623740  lfs 4, 96(29)
  0623744  lfs 5, 100(29)
  0623748  lfs 6, 104(29)
  062374c  bl 0x6298b4
  0623750  nop
  0623754  mr 3, 28
  0623758  lfs 1, 108(29)
  062375c  lfs 2, 112(29)
  0623760  lfs 3, 116(29)
  0623764  lfs 4, 120(29)
  0623768  lfs 5, 124(29)
  062376c  lfs 6, 128(29)
  0623770  bl 0x6297b0
  0623774  nop
  0623778  lwz 0, 132(29)
  062377c  srawi 9, 0, 31
  0623780  mr 3, 28
  0623784  xor 4, 9, 0
  0623788  sub 4, 9, 4
  062378c  rldicl 4, 4, 33, 63
  0623790  bl 0x629650
  0623794  nop
  0623798  mr 3, 28
  062379c  lfs 2, 140(29)
  06237a0  lfs 1, 136(29)
  06237a4  bl 0x62958c
  06237a8  nop
  06237ac  ld 0, 160(1)
  06237b0  ld 28, 112(1)
  06237b4  ld 29, 120(1)
  06237b8  mtlr 0
  06237bc  addi 1, 1, 144
  06237c0  blr

FUN_006237c4:   # 0x6237c4, 0x24 bytes
  06237c4  stdu 1, -128(1)
  06237c8  mflr 0
  06237cc  std 0, 144(1)
  06237d0  bl 0x626e80
  06237d4  nop
  06237d8  ld 0, 144(1)
  06237dc  addi 1, 1, 128
  06237e0  mtlr 0
  06237e4  blr

FUN_006237e8:   # 0x6237e8, 0x28 bytes
  06237e8  stdu 1, -128(1)
  06237ec  mflr 0
  06237f0  std 0, 144(1)
  06237f4  bl 0x62b660
  06237f8  nop
  06237fc  ld 0, 144(1)
  0623800  clrldi 3, 3, 32
  0623804  mtlr 0
  0623808  addi 1, 1, 128
  062380c  blr

FUN_00623810:   # 0x623810, 0x24 bytes
  0623810  stdu 1, -128(1)
  0623814  mflr 0
  0623818  std 0, 144(1)
  062381c  bl 0x625064
  0623820  nop
  0623824  ld 0, 144(1)
  0623828  addi 1, 1, 128
  062382c  mtlr 0
  0623830  blr

FUN_00623834:   # 0x623834, 0x810 bytes
  0623834  cmpwi 7, 4, 0
  0623838  mflr 0
  062383c  stdu 1, -560(1)
  0623840  std 27, 520(1)
  0623844  std 30, 544(1)
  0623848  std 28, 528(1)
  062384c  std 29, 536(1)
  0623850  std 31, 552(1)
  0623854  std 0, 576(1)
  0623858  lwz 30, -29436(2)
  062385c  mr 27, 3
  0623860  bt 30, 0x623898
  0623864  addi 0, 1, 256
  0623868  clrldi 28, 4, 32
  062386c  clrldi 29, 5, 32
  0623870  lwz 5, -32724(30)
  0623874  clrldi 31, 0, 32
  0623878  mr 3, 28
  062387c  mr 4, 29
  0623880  mr 6, 31
  0623884  bl 0x622db8
  0623888  nop
  062388c  clrlwi 3, 3, 24
  0623890  cmpwi 7, 3, 0
  0623894  bf 30, 0x6238bc
  0623898  ld 0, 576(1)
  062389c  ld 27, 520(1)
  06238a0  ld 28, 528(1)
  06238a4  mtlr 0
  06238a8  ld 29, 536(1)
  06238ac  ld 30, 544(1)
  06238b0  ld 31, 552(1)
  06238b4  addi 1, 1, 560
  06238b8  blr
  06238bc  mr 3, 31
  06238c0  li 4, 0
  06238c4  li 5, 0
  06238c8  bl 0x5ca498
  06238cc  nop
  06238d0  mr 6, 31
  06238d4  frsp 1, 1
  06238d8  lwz 5, -32720(30)
  06238dc  mr 4, 29
  06238e0  mr 3, 28
  06238e4  stfs 1, 112(1)
  06238e8  bl 0x622db8
  06238ec  nop
  06238f0  mr 3, 31
  06238f4  li 4, 0
  06238f8  li 5, 10
  06238fc  bl 0x5caf74
  0623900  nop
  0623904  mr 6, 31
  0623908  lwz 5, -32716(30)
  062390c  stw 3, 116(1)
  0623910  mr 4, 29
  0623914  mr 3, 28
  0623918  bl 0x622db8
  062391c  nop
  0623920  mr 3, 31
  0623924  li 4, 0
  0623928  li 5, 0
  062392c  bl 0x5ca498
  0623930  nop
  0623934  mr 6, 31
  0623938  frsp 1, 1
  062393c  lwz 5, -32712(30)
  0623940  mr 4, 29
  0623944  mr 3, 28
  0623948  stfs 1, 132(1)
  062394c  bl 0x622db8
  0623950  nop
  0623954  mr 3, 31
  0623958  li 4, 0
  062395c  li 5, 0
  0623960  bl 0x5ca498
  0623964  nop
  0623968  mr 6, 31
  062396c  frsp 1, 1
  0623970  lwz 5, -32708(30)
  0623974  mr 4, 29
  0623978  mr 3, 28
  062397c  stfs 1, 148(1)
  0623980  bl 0x622db8
  0623984  nop
  0623988  mr 3, 31
  062398c  li 4, 0
  0623990  li 5, 0
  0623994  bl 0x5ca498
  0623998  nop
  062399c  mr 6, 31
  06239a0  frsp 1, 1
  06239a4  lwz 5, -32704(30)
  06239a8  mr 4, 29
  06239ac  mr 3, 28
  06239b0  stfs 1, 164(1)
  06239b4  bl 0x622db8
  06239b8  nop
  06239bc  mr 3, 31
  06239c0  li 4, 0
  06239c4  li 5, 10
  06239c8  bl 0x5caf74
  06239cc  nop
  06239d0  mr 6, 31
  06239d4  lwz 5, -32700(30)
  06239d8  stw 3, 120(1)
  06239dc  mr 4, 29
  06239e0  mr 3, 28
  06239e4  bl 0x622db8
  06239e8  nop
  06239ec  mr 3, 31
  06239f0  li 4, 0
  06239f4  li 5, 0
  06239f8  bl 0x5ca498
  06239fc  nop
  0623a00  mr 6, 31
  0623a04  frsp 1, 1
  0623a08  lwz 5, -32696(30)
  0623a0c  mr 4, 29
  0623a10  mr 3, 28
  0623a14  stfs 1, 136(1)
  0623a18  bl 0x622db8
  0623a1c  nop
  0623a20  mr 3, 31
  0623a24  li 4, 0
  0623a28  li 5, 0
  0623a2c  bl 0x5ca498
  0623a30  nop
  0623a34  mr 6, 31
  0623a38  frsp 1, 1
  0623a3c  lwz 5, -32692(30)
  0623a40  mr 4, 29
  0623a44  mr 3, 28
  0623a48  stfs 1, 152(1)
  0623a4c  bl 0x622db8
  0623a50  nop
  0623a54  mr 3, 31
  0623a58  li 4, 0
  0623a5c  li 5, 0
  0623a60  bl 0x5ca498
  0623a64  nop
  0623a68  mr 6, 31
  0623a6c  frsp 1, 1
  0623a70  lwz 5, -32688(30)
  0623a74  mr 4, 29
  0623a78  mr 3, 28
  0623a7c  stfs 1, 168(1)
  0623a80  bl 0x622db8
  0623a84  nop
  0623a88  mr 3, 31
  0623a8c  li 4, 0
  0623a90  li 5, 10
  0623a94  bl 0x5caf74
  0623a98  nop
  0623a9c  mr 6, 31
  0623aa0  lwz 5, -32684(30)
  0623aa4  stw 3, 124(1)
  0623aa8  mr 4, 29
  0623aac  mr 3, 28
  0623ab0  bl 0x622db8
  0623ab4  nop
  0623ab8  mr 3, 31
  0623abc  li 4, 0
  0623ac0  li 5, 0
  0623ac4  bl 0x5ca498
  0623ac8  nop
  0623acc  mr 6, 31
  0623ad0  frsp 1, 1
  0623ad4  lwz 5, -32680(30)
  0623ad8  mr 4, 29
  0623adc  mr 3, 28
  0623ae0  stfs 1, 140(1)
  0623ae4  bl 0x622db8
  0623ae8  nop
  0623aec  mr 3, 31
  0623af0  li 4, 0
  0623af4  li 5, 0
  0623af8  bl 0x5ca498
  0623afc  nop
  0623b00  mr 6, 31
  0623b04  frsp 1, 1
  0623b08  lwz 5, -32676(30)
  0623b0c  mr 4, 29
  0623b10  mr 3, 28
  0623b14  stfs 1, 156(1)
  0623b18  bl 0x622db8
  0623b1c  nop
  0623b20  mr 3, 31
  0623b24  li 4, 0
  0623b28  li 5, 0
  0623b2c  bl 0x5ca498
  0623b30  nop
  0623b34  mr 6, 31
  0623b38  frsp 1, 1
  0623b3c  lwz 5, -32672(30)
  0623b40  mr 4, 29
  0623b44  mr 3, 28
  0623b48  stfs 1, 172(1)
  0623b4c  bl 0x622db8
  0623b50  nop
  0623b54  mr 3, 31
  0623b58  li 4, 0
  0623b5c  li 5, 10
  0623b60  bl 0x5caf74
  0623b64  nop
  0623b68  mr 6, 31
  0623b6c  lwz 5, -32668(30)
  0623b70  stw 3, 128(1)
  0623b74  mr 4, 29
  0623b78  mr 3, 28
  0623b7c  bl 0x622db8
  0623b80  nop
  0623b84  mr 3, 31
  0623b88  li 4, 0
  0623b8c  li 5, 0
  0623b90  bl 0x5ca498
  0623b94  nop
  0623b98  mr 6, 31
  0623b9c  frsp 1, 1
  0623ba0  lwz 5, -32664(30)
  0623ba4  mr 4, 29
  0623ba8  mr 3, 28
  0623bac  stfs 1, 144(1)
  0623bb0  bl 0x622db8
  0623bb4  nop
  0623bb8  mr 3, 31
  0623bbc  li 4, 0
  0623bc0  li 5, 0
  0623bc4  bl 0x5ca498
  0623bc8  nop
  0623bcc  mr 6, 31
  0623bd0  frsp 1, 1
  0623bd4  lwz 5, -32660(30)
  0623bd8  mr 4, 29
  0623bdc  mr 3, 28
  0623be0  stfs 1, 160(1)
  0623be4  bl 0x622db8
  0623be8  nop
  0623bec  mr 3, 31
  0623bf0  li 4, 0
  0623bf4  li 5, 0
  0623bf8  bl 0x5ca498
  0623bfc  nop
  0623c00  mr 6, 31
  0623c04  frsp 1, 1
  0623c08  lwz 5, -32656(30)
  0623c0c  mr 4, 29
  0623c10  mr 3, 28
  0623c14  stfs 1, 176(1)
  0623c18  bl 0x622db8
  0623c1c  nop
  0623c20  mr 3, 31
  0623c24  li 4, 0
  0623c28  li 5, 10
  0623c2c  bl 0x5caf74
  0623c30  nop
  0623c34  mr 6, 31
  0623c38  lwz 5, -32652(30)
  0623c3c  srawi 9, 3, 31
  0623c40  mr 4, 29
  0623c44  xor 0, 9, 3
  0623c48  mr 3, 28
  0623c4c  sub 0, 9, 0
  0623c50  srwi 0, 0, 31
  0623c54  stw 0, 180(1)
  0623c58  bl 0x622db8
  0623c5c  nop
  0623c60  mr 3, 31
  0623c64  li 4, 0
  0623c68  li 5, 10
  0623c6c  bl 0x5caf74
  0623c70  nop
  0623c74  mr 6, 31
  0623c78  lwz 5, -32648(30)
  0623c7c  srawi 9, 3, 31
  0623c80  mr 4, 29
  0623c84  xor 0, 9, 3
  0623c88  mr 3, 28
  0623c8c  sub 0, 9, 0
  0623c90  srwi 0, 0, 31
  0623c94  stw 0, 184(1)
  0623c98  bl 0x622db8
  0623c9c  nop
  0623ca0  mr 3, 31
  0623ca4  li 4, 0
  0623ca8  li 5, 10
  0623cac  bl 0x5caf74
  0623cb0  nop
  0623cb4  mr 6, 31
  0623cb8  lwz 5, -32644(30)
  0623cbc  srawi 9, 3, 31
  0623cc0  mr 4, 29
  0623cc4  xor 0, 9, 3
  0623cc8  mr 3, 28
  0623ccc  sub 0, 9, 0
  0623cd0  srwi 0, 0, 31
  0623cd4  stw 0, 188(1)
  0623cd8  bl 0x622db8
  0623cdc  nop
  0623ce0  mr 3, 31
  0623ce4  li 4, 0
  0623ce8  li 5, 0
  0623cec  bl 0x5ca498
  0623cf0  nop
  0623cf4  mr 6, 31
  0623cf8  frsp 1, 1
  0623cfc  lwz 5, -32640(30)
  0623d00  mr 4, 29
  0623d04  mr 3, 28
  0623d08  stfs 1, 192(1)
  0623d0c  bl 0x622db8
  0623d10  nop
  0623d14  mr 3, 31
  0623d18  li 4, 0
  0623d1c  li 5, 0
  0623d20  bl 0x5ca498
  0623d24  nop
  0623d28  mr 6, 31
  0623d2c  frsp 1, 1
  0623d30  lwz 5, -32636(30)
  0623d34  mr 4, 29
  0623d38  mr 3, 28
  0623d3c  stfs 1, 196(1)
  0623d40  bl 0x622db8
  0623d44  nop
  0623d48  mr 3, 31
  0623d4c  li 4, 0
  0623d50  li 5, 0
  0623d54  bl 0x5ca498
  0623d58  nop
  0623d5c  mr 6, 31
  0623d60  frsp 1, 1
  0623d64  lwz 5, -32632(30)
  0623d68  mr 4, 29
  0623d6c  mr 3, 28
  0623d70  stfs 1, 200(1)
  0623d74  bl 0x622db8
  0623d78  nop
  0623d7c  mr 3, 31
  0623d80  li 4, 0
  0623d84  li 5, 0
  0623d88  bl 0x5ca498
  0623d8c  nop
  0623d90  mr 6, 31
  0623d94  frsp 1, 1
  0623d98  lwz 5, -32628(30)
  0623d9c  mr 4, 29
  0623da0  mr 3, 28
  0623da4  stfs 1, 204(1)
  0623da8  bl 0x622db8
  0623dac  nop
  0623db0  mr 3, 31
  0623db4  li 4, 0
  0623db8  li 5, 0
  0623dbc  bl 0x5ca498
  0623dc0  nop
  0623dc4  mr 6, 31
  0623dc8  frsp 1, 1
  0623dcc  lwz 5, -32624(30)
  0623dd0  mr 4, 29
  0623dd4  mr 3, 28
  0623dd8  stfs 1, 208(1)
  0623ddc  bl 0x622db8
  0623de0  nop
  0623de4  mr 3, 31
  0623de8  li 4, 0
  0623dec  li 5, 0
  0623df0  bl 0x5ca498
  0623df4  nop
  0623df8  mr 6, 31
  0623dfc  frsp 1, 1
  0623e00  lwz 5, -32620(30)
  0623e04  mr 4, 29
  0623e08  mr 3, 28
  0623e0c  stfs 1, 212(1)
  0623e10  bl 0x622db8
  0623e14  nop
  0623e18  mr 3, 31
  0623e1c  li 4, 0
  0623e20  li 5, 0
  0623e24  bl 0x5ca498
  0623e28  nop
  0623e2c  mr 6, 31
  0623e30  frsp 1, 1
  0623e34  lwz 5, -32616(30)
  0623e38  mr 4, 29
  0623e3c  mr 3, 28
  0623e40  stfs 1, 216(1)
  0623e44  bl 0x622db8
  0623e48  nop
  0623e4c  mr 3, 31
  0623e50  li 4, 0
  0623e54  li 5, 0
  0623e58  bl 0x5ca498
  0623e5c  nop
  0623e60  mr 6, 31
  0623e64  frsp 1, 1
  0623e68  lwz 5, -32612(30)
  0623e6c  mr 4, 29
  0623e70  mr 3, 28
  0623e74  stfs 1, 220(1)
  0623e78  bl 0x622db8
  0623e7c  nop
  0623e80  mr 3, 31
  0623e84  li 4, 0
  0623e88  li 5, 0
  0623e8c  bl 0x5ca498
  0623e90  nop
  0623e94  mr 6, 31
  0623e98  frsp 1, 1
  0623e9c  lwz 5, -32608(30)
  0623ea0  mr 4, 29
  0623ea4  mr 3, 28
  0623ea8  stfs 1, 224(1)
  0623eac  bl 0x622db8
  0623eb0  nop
  0623eb4  mr 3, 31
  0623eb8  li 4, 0
  0623ebc  li 5, 0
  0623ec0  bl 0x5ca498
  0623ec4  nop
  0623ec8  mr 6, 31
  0623ecc  frsp 1, 1
  0623ed0  lwz 5, -32604(30)
  0623ed4  mr 4, 29
  0623ed8  mr 3, 28
  0623edc  stfs 1, 228(1)
  0623ee0  bl 0x622db8
  0623ee4  nop
  0623ee8  mr 3, 31
  0623eec  li 4, 0
  0623ef0  li 5, 0
  0623ef4  bl 0x5ca498
  0623ef8  nop
  0623efc  mr 6, 31
  0623f00  frsp 1, 1
  0623f04  lwz 5, -32600(30)
  0623f08  mr 4, 29
  0623f0c  mr 3, 28
  0623f10  stfs 1, 232(1)
  0623f14  bl 0x622db8
  0623f18  nop
  0623f1c  mr 3, 31
  0623f20  li 4, 0
  0623f24  li 5, 0
  0623f28  bl 0x5ca498
  0623f2c  nop
  0623f30  mr 6, 31
  0623f34  frsp 1, 1
  0623f38  lwz 5, -32596(30)
  0623f3c  mr 4, 29
  0623f40  mr 3, 28
  0623f44  stfs 1, 236(1)
  0623f48  bl 0x622db8
  0623f4c  nop
  0623f50  mr 3, 31
  0623f54  li 4, 0
  0623f58  li 5, 0
  0623f5c  bl 0x5ca498
  0623f60  nop
  0623f64  mr 6, 31
  0623f68  frsp 1, 1
  0623f6c  lwz 5, -32592(30)
  0623f70  mr 4, 29
  0623f74  mr 3, 28
  0623f78  stfs 1, 240(1)
  0623f7c  bl 0x622db8
  0623f80  nop
  0623f84  mr 3, 31
  0623f88  li 4, 0
  0623f8c  li 5, 10
  0623f90  bl 0x5caf74
  0623f94  nop
  0623f98  mr 6, 31
  0623f9c  lwz 5, -32588(30)
  0623fa0  srawi 9, 3, 31
  0623fa4  mr 4, 29
  0623fa8  xor 0, 9, 3
  0623fac  mr 3, 28
  0623fb0  sub 0, 9, 0
  0623fb4  srwi 0, 0, 31
  0623fb8  stw 0, 244(1)
  0623fbc  bl 0x622db8
  0623fc0  nop
  0623fc4  mr 3, 31
  0623fc8  li 4, 0
  0623fcc  li 5, 0
  0623fd0  bl 0x5ca498
  0623fd4  nop
  0623fd8  mr 6, 31
  0623fdc  frsp 1, 1
  0623fe0  lwz 5, -32584(30)
  0623fe4  mr 4, 29
  0623fe8  mr 3, 28
  0623fec  stfs 1, 248(1)
  0623ff0  bl 0x622db8
  0623ff4  nop
  0623ff8  mr 3, 31
  0623ffc  li 4, 0
  0624000  li 5, 0
  0624004  bl 0x5ca498
  0624008  nop
  062400c  clrldi 3, 27, 32
  0624010  frsp 1, 1
  0624014  addi 4, 1, 112
  0624018  stfs 1, 252(1)
  062401c  bl 0x62362c
  0624020  ld 0, 576(1)
  0624024  ld 27, 520(1)
  0624028  ld 28, 528(1)
  062402c  mtlr 0
  0624030  ld 29, 536(1)
  0624034  ld 30, 544(1)
  0624038  ld 31, 552(1)
  062403c  addi 1, 1, 560
  0624040  blr

FUN_00624044:   # 0x624044, 0x34c bytes
  0624044  cmpwi 7, 3, 0
  0624048  mflr 0
  062404c  stdu 1, -480(1)
  0624050  std 27, 440(1)
  0624054  std 30, 464(1)
  0624058  std 28, 448(1)
  062405c  std 29, 456(1)
  0624060  std 31, 472(1)
  0624064  std 0, 496(1)
  0624068  lwz 30, -29436(2)
  062406c  mr 27, 3
  0624070  bt 30, 0x6240b0
  0624074  cmpwi 7, 4, 0
  0624078  bt 30, 0x6240b0
  062407c  addi 0, 1, 168
  0624080  clrldi 28, 4, 32
  0624084  clrldi 29, 5, 32
  0624088  lwz 5, -32580(30)
  062408c  clrldi 31, 0, 32
  0624090  mr 3, 28
  0624094  mr 4, 29
  0624098  mr 6, 31
  062409c  bl 0x622db8
  06240a0  nop
  06240a4  clrlwi 3, 3, 24
  06240a8  cmpwi 7, 3, 0
  06240ac  bf 30, 0x6240d4
  06240b0  ld 0, 496(1)
  06240b4  ld 27, 440(1)
  06240b8  ld 28, 448(1)
  06240bc  mtlr 0
  06240c0  ld 29, 456(1)
  06240c4  ld 30, 464(1)
  06240c8  ld 31, 472(1)
  06240cc  addi 1, 1, 480
  06240d0  blr
  06240d4  li 4, 0
  06240d8  li 5, 10
  06240dc  mr 3, 31
  06240e0  bl 0x5caf74
  06240e4  nop
  06240e8  mr 6, 31
  06240ec  lwz 5, -32576(30)
  06240f0  stw 3, 112(1)
  06240f4  mr 4, 29
  06240f8  mr 3, 28
  06240fc  bl 0x622db8
  0624100  nop
  0624104  mr 3, 31
  0624108  li 4, 0
  062410c  li 5, 0
  0624110  bl 0x5ca498
  0624114  nop
  0624118  mr 6, 31
  062411c  frsp 1, 1
  0624120  lwz 5, -32572(30)
  0624124  mr 4, 29
  0624128  mr 3, 28
  062412c  stfs 1, 116(1)
  0624130  bl 0x622db8
  0624134  nop
  0624138  mr 3, 31
  062413c  li 4, 0
  0624140  li 5, 0
  0624144  bl 0x5ca498
  0624148  nop
  062414c  mr 6, 31
  0624150  frsp 1, 1
  0624154  lwz 5, -32568(30)
  0624158  mr 4, 29
  062415c  mr 3, 28
  0624160  stfs 1, 120(1)
  0624164  bl 0x622db8
  0624168  nop
  062416c  mr 3, 31
  0624170  li 4, 0
  0624174  li 5, 0
  0624178  bl 0x5ca498
  062417c  nop
  0624180  mr 6, 31
  0624184  frsp 1, 1
  0624188  lwz 5, -32564(30)
  062418c  mr 4, 29
  0624190  mr 3, 28
  0624194  stfs 1, 124(1)
  0624198  bl 0x622db8
  062419c  nop
  06241a0  mr 3, 31
  06241a4  li 4, 0
  06241a8  li 5, 0
  06241ac  bl 0x5ca498
  06241b0  nop
  06241b4  mr 6, 31
  06241b8  frsp 1, 1
  06241bc  lwz 5, -32560(30)
  06241c0  mr 4, 29
  06241c4  mr 3, 28
  06241c8  stfs 1, 128(1)
  06241cc  bl 0x622db8
  06241d0  nop
  06241d4  mr 3, 31
  06241d8  li 4, 0
  06241dc  li 5, 0
  06241e0  bl 0x5ca498
  06241e4  nop
  06241e8  mr 6, 31
  06241ec  frsp 1, 1
  06241f0  lwz 5, -32556(30)
  06241f4  mr 4, 29
  06241f8  mr 3, 28
  06241fc  stfs 1, 132(1)
  0624200  bl 0x622db8
  0624204  nop
  0624208  mr 3, 31
  062420c  li 4, 0
  0624210  li 5, 0
  0624214  bl 0x5ca498
  0624218  nop
  062421c  mr 6, 31
  0624220  frsp 1, 1
  0624224  lwz 5, -32552(30)
  0624228  mr 4, 29
  062422c  mr 3, 28
  0624230  stfs 1, 136(1)
  0624234  bl 0x622db8
  0624238  nop
  062423c  mr 3, 31
  0624240  li 4, 0
  0624244  li 5, 0
  0624248  bl 0x5ca498
  062424c  nop
  0624250  mr 6, 31
  0624254  frsp 1, 1
  0624258  lwz 5, -32548(30)
  062425c  mr 4, 29
  0624260  mr 3, 28
  0624264  stfs 1, 140(1)
  0624268  bl 0x622db8
  062426c  nop
  0624270  mr 3, 31
  0624274  li 4, 0
  0624278  li 5, 0
  062427c  bl 0x5ca498
  0624280  nop
  0624284  mr 6, 31
  0624288  frsp 1, 1
  062428c  lwz 5, -32544(30)
  0624290  mr 4, 29
  0624294  mr 3, 28
  0624298  stfs 1, 144(1)
  062429c  bl 0x622db8
  06242a0  nop
  06242a4  mr 3, 31
  06242a8  li 4, 0
  06242ac  li 5, 0
  06242b0  bl 0x5ca498
  06242b4  nop
  06242b8  mr 6, 31
  06242bc  frsp 1, 1
  06242c0  lwz 5, -32540(30)
  06242c4  mr 4, 29
  06242c8  mr 3, 28
  06242cc  stfs 1, 148(1)
  06242d0  bl 0x622db8
  06242d4  nop
  06242d8  mr 3, 31
  06242dc  li 4, 0
  06242e0  li 5, 0
  06242e4  bl 0x5ca498
  06242e8  nop
  06242ec  mr 6, 31
  06242f0  frsp 1, 1
  06242f4  lwz 5, -32536(30)
  06242f8  mr 4, 29
  06242fc  mr 3, 28
  0624300  stfs 1, 152(1)
  0624304  bl 0x622db8
  0624308  nop
  062430c  mr 3, 31
  0624310  li 4, 0
  0624314  li 5, 0
  0624318  bl 0x5ca498
  062431c  nop
  0624320  mr 6, 31
  0624324  frsp 1, 1
  0624328  lwz 5, -32532(30)
  062432c  mr 4, 29
  0624330  mr 3, 28
  0624334  stfs 1, 156(1)
  0624338  bl 0x622db8
  062433c  nop
  0624340  mr 3, 31
  0624344  li 4, 0
  0624348  li 5, 0
  062434c  bl 0x5ca498
  0624350  nop
  0624354  clrldi 3, 27, 32
  0624358  frsp 1, 1
  062435c  addi 4, 1, 112
  0624360  stfs 1, 160(1)
  0624364  bl 0x60637c
  0624368  nop
  062436c  ld 0, 496(1)
  0624370  ld 27, 440(1)
  0624374  ld 28, 448(1)
  0624378  mtlr 0
  062437c  ld 29, 456(1)
  0624380  ld 30, 464(1)
  0624384  ld 31, 472(1)
  0624388  addi 1, 1, 480
  062438c  blr

FUN_00624390:   # 0x624390, 0x19c bytes
  0624390  mfcr 12
  0624394  stdu 1, -144(1)
  0624398  std 30, 128(1)
  062439c  lwz 30, -29432(2)
  06243a0  std 31, 136(1)
  06243a4  std 29, 120(1)
  06243a8  mr 31, 3
  06243ac  lwz 9, -32768(30)
  06243b0  stw 12, 152(1)
  06243b4  mflr 0
  06243b8  std 0, 160(1)
  06243bc  lwz 0, 0(9)
  06243c0  cmpwi 7, 0, 0
  06243c4  bf 30, 0x62444c
  06243c8  cmpwi 7, 4, 1
  06243cc  bt 30, 0x624470
  06243d0  bf 29, 0x624514
  06243d4  cmpwi 4, 4, 2
  06243d8  bt 18, 0x624508
  06243dc  cmpwi 7, 4, 3
  06243e0  bt 30, 0x6244b8
  06243e4  lwz 29, -32764(30)
  06243e8  lwz 3, -32744(30)
  06243ec  lwz 9, 0(29)
  06243f0  lwz 0, 0(9)
  06243f4  std 2, 40(1)
  06243f8  mtctr 0
  06243fc  lwz 2, 4(9)
  0624400  bctrl
  0624404  ld 2, 40(1)
  0624408  lwz 11, 0(29)
  062440c  clrldi 3, 31, 32
  0624410  lwz 0, 0(11)
  0624414  std 2, 40(1)
  0624418  mtctr 0
  062441c  lwz 2, 4(11)
  0624420  bctrl
  0624424  ld 2, 40(1)
  0624428  bt 17, 0x6244fc
  062442c  lwz 9, 0(29)
  0624430  lwz 3, -32740(30)
  0624434  lwz 0, 0(9)
  0624438  std 2, 40(1)
  062443c  mtctr 0
  0624440  lwz 2, 4(9)
  0624444  bctrl
  0624448  ld 2, 40(1)
  062444c  ld 0, 160(1)
  0624450  lwz 12, 152(1)
  0624454  ld 29, 120(1)
  0624458  mtlr 0
  062445c  ld 30, 128(1)
  0624460  mtocrf 8, 12
  0624464  ld 31, 136(1)
  0624468  addi 1, 1, 144
  062446c  blr
  0624470  lwz 29, -32764(30)
  0624474  lwz 3, -32756(30)
  0624478  lwz 9, 0(29)
  062447c  lwz 0, 0(9)
  0624480  std 2, 40(1)
  0624484  mtctr 0
  0624488  lwz 2, 4(9)
  062448c  bctrl
  0624490  ld 2, 40(1)
  0624494  lwz 9, 0(29)
  0624498  clrldi 3, 31, 32
  062449c  lwz 0, 0(9)
  06244a0  std 2, 40(1)
  06244a4  mtctr 0
  06244a8  lwz 2, 4(9)
  06244ac  bctrl
  06244b0  ld 2, 40(1)
  06244b4  b 0x62442c
  06244b8  lwz 29, -32764(30)
  06244bc  lwz 3, -32748(30)
  06244c0  lwz 9, 0(29)
  06244c4  lwz 0, 0(9)
  06244c8  std 2, 40(1)
  06244cc  mtctr 0
  06244d0  lwz 2, 4(9)
  06244d4  bctrl
  06244d8  ld 2, 40(1)
  06244dc  lwz 11, 0(29)
  06244e0  clrldi 3, 31, 32
  06244e4  lwz 0, 0(11)
  06244e8  std 2, 40(1)
  06244ec  mtctr 0
  06244f0  lwz 2, 4(11)
  06244f4  bctrl
  06244f8  ld 2, 40(1)
  06244fc  lwz 9, 0(29)
  0624500  lwz 3, -32736(30)
  0624504  b 0x624434
  0624508  lwz 29, -32764(30)
  062450c  lwz 3, -32752(30)
  0624510  b 0x624478
  0624514  cmpwi 7, 4, 0
  0624518  cmpwi 4, 4, 2
  062451c  bf 30, 0x6243e4
  0624520  lwz 29, -32764(30)
  0624524  lwz 3, -32760(30)
  0624528  b 0x624478

FUN_0062452c:   # 0x62452c, 0x5c bytes
  062452c  stdu 1, -128(1)
  0624530  mflr 0
  0624534  std 30, 112(1)
  0624538  lwz 30, -29432(2)
  062453c  addi 9, 4, -8
  0624540  std 0, 144(1)
  0624544  clrldi 9, 9, 32
  0624548  lwz 11, -32732(30)
  062454c  lwz 0, 0(9)
  0624550  sub 4, 4, 0
  0624554  lwz 10, 0(11)
  0624558  clrldi 3, 4, 32
  062455c  lwz 0, 0(10)
  0624560  std 2, 40(1)
  0624564  mtctr 0
  0624568  lwz 2, 4(10)
  062456c  bctrl
  0624570  ld 2, 40(1)
  0624574  ld 0, 144(1)
  0624578  ld 30, 112(1)
  062457c  mtlr 0
  0624580  addi 1, 1, 128
  0624584  blr

FUN_00624588:   # 0x624588, 0x8 bytes
  0624588  li 3, 0
  062458c  blr

FUN_00624590:   # 0x624590, 0x48 bytes
  0624590  std 30, -16(1)
  0624594  lwz 30, -29432(2)
  0624598  li 0, 8
  062459c  mr 10, 3
  06245a0  mtctr 0
  06245a4  li 3, 0
  06245a8  lwz 11, -32728(30)
  06245ac  clrldi 9, 11, 32
  06245b0  addi 11, 11, 16
  06245b4  lwz 0, 0(9)
  06245b8  cmpw 7, 0, 10
  06245bc  bt 30, 0x6245cc
  06245c0  addi 3, 3, 1
  06245c4  bdnz 0x6245ac
  06245c8  li 3, -1
  06245cc  extsw 3, 3
  06245d0  ld 30, -16(1)
  06245d4  blr

FUN_006245d8:   # 0x6245d8, 0xcc bytes
  06245d8  stdu 1, -128(1)
  06245dc  mflr 0
  06245e0  std 30, 112(1)
  06245e4  lwz 30, -29432(2)
  06245e8  mr 8, 3
  06245ec  std 0, 144(1)
  06245f0  li 0, 8
  06245f4  std 31, 120(1)
  06245f8  li 10, 0
  06245fc  mtctr 0
  0624600  lwz 31, -32716(30)
  0624604  lwz 11, -32724(30)
  0624608  lwz 6, -32724(30)
  062460c  lwz 7, -32720(30)
  0624610  clrldi 9, 11, 32
  0624614  mr 0, 10
  0624618  addi 11, 11, 16
  062461c  addi 10, 10, 1
  0624620  lwz 3, 0(9)
  0624624  cmpw 7, 3, 8
  0624628  bt 30, 0x624648
  062462c  bdnz 0x624610
  0624630  ld 0, 144(1)
  0624634  ld 30, 112(1)
  0624638  ld 31, 120(1)
  062463c  mtlr 0
  0624640  addi 1, 1, 128
  0624644  blr
  0624648  slwi 9, 0, 4
  062464c  lwz 11, 0(7)
  0624650  li 0, 0
  0624654  extsw 9, 9
  0624658  clrldi 3, 3, 32
  062465c  li 4, 0
  0624660  li 5, 1
  0624664  stwx 0, 6, 9
  0624668  lwz 0, 0(11)
  062466c  std 2, 40(1)
  0624670  mtctr 0
  0624674  lwz 2, 4(11)
  0624678  bctrl
  062467c  ld 2, 40(1)
  0624680  lwz 9, 0(31)
  0624684  ld 0, 144(1)
  0624688  addi 9, 9, -1
  062468c  ld 30, 112(1)
  0624690  stw 9, 0(31)
  0624694  mtlr 0
  0624698  ld 31, 120(1)
  062469c  addi 1, 1, 128
  06246a0  blr

FUN_006246a4:   # 0x6246a4, 0x18 bytes
  06246a4  std 30, -16(1)
  06246a8  lwz 30, -29432(2)
  06246ac  lwz 9, -32712(30)
  06246b0  ld 30, -16(1)
  06246b4  stw 3, 0(9)
  06246b8  blr

FUN_006246bc:   # 0x6246bc, 0x8 bytes
  06246bc  li 3, 3
  06246c0  blr

FUN_006246c4:   # 0x6246c4, 0x14 bytes
  06246c4  std 30, -16(1)
  06246c8  lwz 30, -29432(2)
  06246cc  lwz 3, -32708(30)
  06246d0  ld 30, -16(1)
  06246d4  blr

FUN_006246d8:   # 0x6246d8, 0x54 bytes
  06246d8  li 0, 100
  06246dc  li 9, -1
  06246e0  stw 0, 0(3)
  06246e4  li 0, 1
  06246e8  li 11, 0
  06246ec  stb 9, 8(3)
  06246f0  stb 0, 9(3)
  06246f4  li 9, 128
  06246f8  li 0, 32
  06246fc  stw 11, 28(3)
  0624700  stw 9, 12(3)
  0624704  stw 0, 16(3)
  0624708  stw 11, 4(3)
  062470c  stw 11, 32(3)
  0624710  stw 11, 36(3)
  0624714  stw 11, 40(3)
  0624718  stw 11, 44(3)
  062471c  stw 11, 48(3)
  0624720  stw 11, 20(3)
  0624724  stw 11, 24(3)
  0624728  blr

FUN_0062472c:   # 0x62472c, 0x4 bytes
  062472c  blr

FUN_00624730:   # 0x624730, 0x8 bytes
  0624730  li 3, 1
  0624734  blr

FUN_00624738:   # 0x624738, 0x58 bytes
  0624738  std 30, -16(1)
  062473c  lwz 30, -29432(2)
  0624740  slwi 0, 3, 4
  0624744  slwi 3, 3, 2
  0624748  li 8, 0
  062474c  sub 0, 0, 3
  0624750  lwz 9, -32704(30)
  0624754  add 0, 0, 9
  0624758  clrldi 11, 0, 32
  062475c  lwz 9, 4(11)
  0624760  cmpwi 7, 9, 0
  0624764  addi 0, 9, -1
  0624768  slwi 10, 0, 2
  062476c  bt 30, 0x624784
  0624770  lwz 9, 0(11)
  0624774  stw 0, 4(11)
  0624778  add 9, 10, 9
  062477c  clrldi 9, 9, 32
  0624780  lwz 8, 0(9)
  0624784  clrldi 3, 8, 32
  0624788  ld 30, -16(1)
  062478c  blr

FUN_00624790:   # 0x624790, 0x8 bytes
  0624790  li 3, 2
  0624794  blr

FUN_00624798:   # 0x624798, 0x48 bytes
  0624798  std 30, -16(1)
  062479c  lwz 30, -29432(2)
  06247a0  cmpwi 7, 3, 1
  06247a4  cmpwi 1, 3, 2
  06247a8  cmpwi 6, 4, 0
  06247ac  lfs 1, -32684(30)
  06247b0  bt 30, 0x6247c0
  06247b4  bt 6, 0x6247d0
  06247b8  ld 30, -16(1)
  06247bc  blr
  06247c0  bt 26, 0x6247d4
  06247c4  lfs 1, -32692(30)
  06247c8  ld 30, -16(1)
  06247cc  blr
  06247d0  bt 26, 0x6247c4
  06247d4  lfs 1, -32700(30)
  06247d8  ld 30, -16(1)
  06247dc  blr

FUN_006247e0:   # 0x6247e0, 0xc bytes
  06247e0  li 0, 0
  06247e4  stw 0, 0(3)
  06247e8  blr

FUN_006247ec:   # 0x6247ec, 0x34 bytes
  06247ec  std 30, -16(1)
  06247f0  lwz 30, -29432(2)
  06247f4  li 3, 0
  06247f8  lwz 9, -32676(30)
  06247fc  lbz 0, 0(9)
  0624800  cmpwi 7, 0, 0
  0624804  bt 30, 0x624814
  0624808  lbz 9, 1(9)
  062480c  addi 9, 9, -1
  0624810  rldicl 3, 9, 1, 63
  0624814  extsw 3, 3
  0624818  ld 30, -16(1)
  062481c  blr

FUN_00624820:   # 0x624820, 0x18 bytes
  0624820  std 30, -16(1)
  0624824  lwz 30, -29432(2)
  0624828  lwz 9, -32672(30)
  062482c  ld 30, -16(1)
  0624830  lwz 3, 0(9)
  0624834  blr

FUN_00624838:   # 0x624838, 0x3c bytes
  0624838  stdu 1, -128(1)
  062483c  mflr 0
  0624840  std 30, 112(1)
  0624844  lwz 30, -29432(2)
  0624848  mr 9, 3
  062484c  std 0, 144(1)
  0624850  lwz 0, -32668(30)
  0624854  stw 0, 0(9)
  0624858  bl 0x5e387c
  062485c  nop
  0624860  ld 0, 144(1)
  0624864  ld 30, 112(1)
  0624868  mtlr 0
  062486c  addi 1, 1, 128
  0624870  blr

FUN_00624874:   # 0x624874, 0x18 bytes
  0624874  std 30, -16(1)
  0624878  lwz 30, -29432(2)
  062487c  lwz 0, -32668(30)
  0624880  ld 30, -16(1)
  0624884  stw 0, 0(3)
  0624888  blr

FUN_0062488c:   # 0x62488c, 0x18 bytes
  062488c  std 30, -16(1)
  0624890  lwz 30, -29432(2)
  0624894  lwz 9, -32668(30)
  0624898  ld 30, -16(1)
  062489c  stw 9, 0(3)
  06248a0  blr

FUN_006248a4:   # 0x6248a4, 0x4c bytes
  06248a4  std 30, -16(1)
  06248a8  lwz 30, -29432(2)
  06248ac  li 11, 0
  06248b0  li 3, 0
  06248b4  lwz 9, -32676(30)
  06248b8  lbz 0, 1(9)
  06248bc  cmpwi 7, 0, 0
  06248c0  bt 30, 0x6248e4
  06248c4  lwz 3, 16(9)
  06248c8  stw 11, 24(9)
  06248cc  stw 11, 0(9)
  06248d0  stw 11, 4(9)
  06248d4  stw 11, 8(9)
  06248d8  stw 11, 12(9)
  06248dc  stw 11, 20(9)
  06248e0  stw 11, 16(9)
  06248e4  clrldi 3, 3, 32
  06248e8  ld 30, -16(1)
  06248ec  blr

FUN_006248f0:   # 0x6248f0, 0x130 bytes
  06248f0  stdu 1, -160(1)
  06248f4  mflr 0
  06248f8  li 9, 1
  06248fc  std 0, 176(1)
  0624900  clrlwi 0, 5, 27
  0624904  std 31, 152(1)
  0624908  slw 31, 9, 0
  062490c  std 26, 112(1)
  0624910  cmplwi 7, 31, 7
  0624914  std 27, 120(1)
  0624918  std 28, 128(1)
  062491c  std 29, 136(1)
  0624920  std 30, 144(1)
  0624924  mr 29, 5
  0624928  lwz 30, -29432(2)
  062492c  mr 26, 4
  0624930  mr 27, 4
  0624934  li 28, 0
  0624938  bt 29, 0x624940
  062493c  li 31, 8
  0624940  lwz 11, -32664(30)
  0624944  add 3, 31, 27
  0624948  lwz 10, -32660(30)
  062494c  extsw 3, 3
  0624950  lwz 9, 0(11)
  0624954  lwz 4, 0(10)
  0624958  extsw 4, 4
  062495c  lwz 0, 0(9)
  0624960  std 2, 40(1)
  0624964  mtctr 0
  0624968  lwz 2, 4(9)
  062496c  bctrl
  0624970  ld 2, 40(1)
  0624974  neg 0, 31
  0624978  rlwinm 9, 29, 0, 25, 25
  062497c  and 0, 0, 3
  0624980  cmpwi 7, 3, 0
  0624984  add 11, 31, 0
  0624988  cmpwi 6, 9, 0
  062498c  addi 0, 11, -4
  0624990  addi 9, 11, -8
  0624994  clrldi 10, 0, 32
  0624998  clrldi 9, 9, 32
  062499c  sub 0, 11, 3
  06249a0  bt 30, 0x6249bc
  06249a4  stw 26, 0(10)
  06249a8  clrldi 5, 27, 32
  06249ac  li 4, 0
  06249b0  stw 0, 0(9)
  06249b4  clrldi 28, 11, 32
  06249b8  bf 26, 0x6249e8
  06249bc  ld 0, 176(1)
  06249c0  mr 3, 28
  06249c4  ld 26, 112(1)
  06249c8  ld 27, 120(1)
  06249cc  mtlr 0
  06249d0  ld 28, 128(1)
  06249d4  ld 29, 136(1)
  06249d8  ld 30, 144(1)
  06249dc  ld 31, 152(1)
  06249e0  addi 1, 1, 160
  06249e4  blr
  06249e8  mr 3, 28
  06249ec  bl 0x5d0140
  06249f0  nop
  06249f4  ld 0, 176(1)
  06249f8  ld 26, 112(1)
  06249fc  mr 3, 28
  0624a00  ld 27, 120(1)
  0624a04  ld 28, 128(1)
  0624a08  mtlr 0
  0624a0c  ld 29, 136(1)
  0624a10  ld 30, 144(1)
  0624a14  ld 31, 152(1)
  0624a18  addi 1, 1, 160
  0624a1c  blr

FUN_00624a20:   # 0x624a20, 0xf0 bytes
  0624a20  cmpwi 7, 3, 0
  0624a24  mflr 0
  0624a28  stdu 1, -144(1)
  0624a2c  std 30, 128(1)
  0624a30  std 31, 136(1)
  0624a34  std 0, 160(1)
  0624a38  lwz 30, -29432(2)
  0624a3c  bt 28, 0x624af0
  0624a40  slwi 0, 3, 2
  0624a44  lwz 9, -32656(30)
  0624a48  extsw 0, 0
  0624a4c  lwzx 3, 9, 0
  0624a50  lis 0, 3585
  0624a54  clrldi 31, 3, 32
  0624a58  ori 0, 0, 62279
  0624a5c  mr 3, 31
  0624a60  stw 0, 112(1)
  0624a64  addi 4, 1, 112
  0624a68  addi 5, 1, 116
  0624a6c  bl 0x6487c0
  0624a70  nop
  0624a74  lwz 10, 116(1)
  0624a78  li 0, 0
  0624a7c  cmpwi 7, 10, 0
  0624a80  bt 30, 0x624aac
  0624a84  lwz 9, 20(31)
  0624a88  lwz 0, 0(9)
  0624a8c  lwsync
  0624a90  clrlwi 0, 0, 31
  0624a94  cmpwi 7, 0, 0
  0624a98  bt 30, 0x624ac8
  0624a9c  clrldi 9, 10, 32
  0624aa0  lwz 0, 44(9)
  0624aa4  clrldi 0, 0, 63
  0624aa8  clrlwi 0, 0, 24
  0624aac  extsw 3, 0
  0624ab0  ld 0, 160(1)
  0624ab4  ld 30, 128(1)
  0624ab8  ld 31, 136(1)
  0624abc  mtlr 0
  0624ac0  addi 1, 1, 144
  0624ac4  blr
  0624ac8  lwz 9, 16(31)
  0624acc  lwz 11, -32648(30)
  0624ad0  lfs 13, 12(9)
  0624ad4  lfs 0, 0(11)
  0624ad8  fcmpu 7, 13, 0
  0624adc  bf 28, 0x624aa8
  0624ae0  clrldi 9, 10, 32
  0624ae4  lwz 0, 44(9)
  0624ae8  clrldi 0, 0, 63
  0624aec  b 0x624aa8
  0624af0  cmpwi 7, 3, -1
  0624af4  bt 30, 0x624b04
  0624af8  lwz 9, -32652(30)
  0624afc  lwz 3, 0(9)
  0624b00  b 0x624a50
  0624b04  lwz 9, -32672(30)
  0624b08  lwz 3, 0(9)
  0624b0c  b 0x624a50

FUN_00624b18:   # 0x624b18, 0x9c bytes
  0624b18  cmpwi 7, 3, 0
  0624b1c  mflr 0
  0624b20  stdu 1, -144(1)
  0624b24  std 30, 128(1)
  0624b28  std 0, 160(1)
  0624b2c  lwz 30, -29432(2)
  0624b30  bt 28, 0x624b94
  0624b34  slwi 0, 3, 2
  0624b38  lwz 9, -32656(30)
  0624b3c  extsw 0, 0
  0624b40  lwzx 3, 9, 0
  0624b44  lis 0, 3585
  0624b48  clrldi 3, 3, 32
  0624b4c  ori 0, 0, 62279
  0624b50  addi 4, 1, 112
  0624b54  stw 0, 112(1)
  0624b58  addi 5, 1, 116
  0624b5c  bl 0x6487c0
  0624b60  nop
  0624b64  lwz 9, 116(1)
  0624b68  li 3, 0
  0624b6c  cmpwi 7, 9, 0
  0624b70  bt 30, 0x624b7c
  0624b74  clrldi 9, 9, 32
  0624b78  lwz 3, 60(9)
  0624b7c  ld 0, 160(1)
  0624b80  clrldi 3, 3, 32
  0624b84  ld 30, 128(1)
  0624b88  addi 1, 1, 144
  0624b8c  mtlr 0
  0624b90  blr
  0624b94  cmpwi 7, 3, -1
  0624b98  bt 30, 0x624ba8
  0624b9c  lwz 9, -32652(30)
  0624ba0  lwz 3, 0(9)
  0624ba4  b 0x624b44
  0624ba8  lwz 9, -32672(30)
  0624bac  lwz 3, 0(9)
  0624bb0  b 0x624b44

FUN_00624bbc:   # 0x624bbc, 0x114 bytes
  0624bbc  cmpwi 7, 3, 0
  0624bc0  mflr 0
  0624bc4  stdu 1, -144(1)
  0624bc8  std 30, 128(1)
  0624bcc  std 31, 136(1)
  0624bd0  std 0, 160(1)
  0624bd4  lwz 30, -29432(2)
  0624bd8  bt 28, 0x624cb0
  0624bdc  slwi 0, 3, 2
  0624be0  lwz 9, -32656(30)
  0624be4  extsw 0, 0
  0624be8  lwzx 3, 9, 0
  0624bec  lis 0, 3585
  0624bf0  clrldi 31, 3, 32
  0624bf4  ori 0, 0, 62279
  0624bf8  mr 3, 31
  0624bfc  stw 0, 112(1)
  0624c00  addi 4, 1, 112
  0624c04  addi 5, 1, 116
  0624c08  bl 0x6487c0
  0624c0c  nop
  0624c10  lwz 10, 116(1)
  0624c14  li 3, 0
  0624c18  cmpwi 7, 10, 0
  0624c1c  bt 30, 0x624c58
  0624c20  lwz 9, 20(31)
  0624c24  lwz 0, 0(9)
  0624c28  lwsync
  0624c2c  clrlwi 0, 0, 31
  0624c30  cmpwi 7, 0, 0
  0624c34  bt 30, 0x624c74
  0624c38  clrldi 9, 10, 32
  0624c3c  lwz 0, 8(9)
  0624c40  srawi 9, 0, 31
  0624c44  xor 11, 9, 0
  0624c48  sub 11, 11, 9
  0624c4c  addi 11, 11, -1
  0624c50  srwi 3, 11, 31
  0624c54  clrlwi 3, 3, 24
  0624c58  ld 0, 160(1)
  0624c5c  extsw 3, 3
  0624c60  ld 30, 128(1)
  0624c64  ld 31, 136(1)
  0624c68  mtlr 0
  0624c6c  addi 1, 1, 144
  0624c70  blr
  0624c74  lwz 9, 16(31)
  0624c78  li 3, 0
  0624c7c  lwz 11, -32648(30)
  0624c80  lfs 13, 12(9)
  0624c84  lfs 0, 0(11)
  0624c88  fcmpu 7, 13, 0
  0624c8c  bf 28, 0x624c54
  0624c90  clrldi 9, 10, 32
  0624c94  lwz 0, 8(9)
  0624c98  srawi 9, 0, 31
  0624c9c  xor 11, 9, 0
  0624ca0  sub 11, 11, 9
  0624ca4  addi 11, 11, -1
  0624ca8  srwi 3, 11, 31
  0624cac  b 0x624c54
  0624cb0  cmpwi 7, 3, -1
  0624cb4  bt 30, 0x624cc4
  0624cb8  lwz 9, -32652(30)
  0624cbc  lwz 3, 0(9)
  0624cc0  b 0x624bec
  0624cc4  lwz 9, -32672(30)
  0624cc8  lwz 3, 0(9)
  0624ccc  b 0x624bec

FUN_00624cd8:   # 0x624cd8, 0xec bytes
  0624cd8  cmpwi 7, 3, 0
  0624cdc  mflr 0
  0624ce0  stdu 1, -176(1)
  0624ce4  std 26, 128(1)
  0624ce8  std 27, 136(1)
  0624cec  std 30, 160(1)
  0624cf0  std 28, 144(1)
  0624cf4  std 29, 152(1)
  0624cf8  std 31, 168(1)
  0624cfc  std 0, 192(1)
  0624d00  lwz 30, -29432(2)
  0624d04  mr 26, 4
  0624d08  mr 27, 5
  0624d0c  bt 28, 0x624da4
  0624d10  slwi 0, 3, 2
  0624d14  lwz 9, -32656(30)
  0624d18  extsw 0, 0
  0624d1c  lwzx 0, 9, 0
  0624d20  lis 31, 5121
  0624d24  clrldi 29, 0, 32
  0624d28  ori 31, 31, 65379
  0624d2c  li 28, 0
  0624d30  stw 31, 112(1)
  0624d34  stw 28, 120(1)
  0624d38  mr 3, 29
  0624d3c  addi 4, 1, 112
  0624d40  addi 5, 1, 120
  0624d44  bl 0x648730
  0624d48  nop
  0624d4c  lwz 9, 120(1)
  0624d50  cmpwi 7, 9, 0
  0624d54  bt 30, 0x624d7c
  0624d58  clrldi 9, 9, 32
  0624d5c  mr 3, 29
  0624d60  addi 4, 1, 116
  0624d64  stw 27, 8(9)
  0624d68  stw 26, 4(9)
  0624d6c  stw 28, 0(9)
  0624d70  stw 31, 116(1)
  0624d74  bl 0x6486f8
  0624d78  nop
  0624d7c  ld 0, 192(1)
  0624d80  ld 26, 128(1)
  0624d84  ld 27, 136(1)
  0624d88  mtlr 0
  0624d8c  ld 28, 144(1)
  0624d90  ld 29, 152(1)
  0624d94  ld 30, 160(1)
  0624d98  ld 31, 168(1)
  0624d9c  addi 1, 1, 176
  0624da0  blr
  0624da4  cmpwi 7, 3, -1
  0624da8  bt 30, 0x624db8
  0624dac  lwz 9, -32652(30)
  0624db0  lwz 0, 0(9)
  0624db4  b 0x624d20
  0624db8  lwz 9, -32672(30)
  0624dbc  lwz 0, 0(9)
  0624dc0  b 0x624d20

FUN_00624dcc:   # 0x624dcc, 0xec bytes
  0624dcc  cmpwi 7, 3, 0
  0624dd0  mflr 0
  0624dd4  stdu 1, -176(1)
  0624dd8  std 26, 128(1)
  0624ddc  std 27, 136(1)
  0624de0  std 30, 160(1)
  0624de4  std 28, 144(1)
  0624de8  std 29, 152(1)
  0624dec  std 31, 168(1)
  0624df0  std 0, 192(1)
  0624df4  lwz 30, -29432(2)
  0624df8  mr 26, 4
  0624dfc  mr 27, 5
  0624e00  bt 28, 0x624e98
  0624e04  slwi 0, 3, 2
  0624e08  lwz 9, -32656(30)
  0624e0c  extsw 0, 0
  0624e10  lwzx 0, 9, 0
  0624e14  lis 31, 4865
  0624e18  clrldi 29, 0, 32
  0624e1c  ori 31, 31, 65379
  0624e20  li 28, 0
  0624e24  stw 31, 112(1)
  0624e28  stw 28, 120(1)
  0624e2c  mr 3, 29
  0624e30  addi 4, 1, 112
  0624e34  addi 5, 1, 120
  0624e38  bl 0x648730
  0624e3c  nop
  0624e40  lwz 9, 120(1)
  0624e44  cmpwi 7, 9, 0
  0624e48  bt 30, 0x624e70
  0624e4c  clrldi 9, 9, 32
  0624e50  mr 3, 29
  0624e54  addi 4, 1, 116
  0624e58  stw 27, 8(9)
  0624e5c  stw 26, 4(9)
  0624e60  stw 28, 0(9)
  0624e64  stw 31, 116(1)
  0624e68  bl 0x6486f8
  0624e6c  nop
  0624e70  ld 0, 192(1)
  0624e74  ld 26, 128(1)
  0624e78  ld 27, 136(1)
  0624e7c  mtlr 0
  0624e80  ld 28, 144(1)
  0624e84  ld 29, 152(1)
  0624e88  ld 30, 160(1)
  0624e8c  ld 31, 168(1)
  0624e90  addi 1, 1, 176
  0624e94  blr
  0624e98  cmpwi 7, 3, -1
  0624e9c  bt 30, 0x624eac
  0624ea0  lwz 9, -32652(30)
  0624ea4  lwz 0, 0(9)
  0624ea8  b 0x624e14
  0624eac  lwz 9, -32672(30)
  0624eb0  lwz 0, 0(9)
  0624eb4  b 0x624e14

FUN_00624ec0:   # 0x624ec0, 0x19c bytes
  0624ec0  stdu 1, -224(1)
  0624ec4  mflr 0
  0624ec8  lbz 11, 351(1)
  0624ecc  cmpwi 7, 4, 0
  0624ed0  std 0, 240(1)
  0624ed4  lbz 0, 343(1)
  0624ed8  neg 9, 9
  0624edc  neg 8, 8
  0624ee0  stfd 30, 208(1)
  0624ee4  neg 10, 10
  0624ee8  stfd 31, 216(1)
  0624eec  neg 0, 0
  0624ef0  fmr 31, 1
  0624ef4  neg 11, 11
  0624ef8  fmr 30, 2
  0624efc  std 22, 128(1)
  0624f00  std 23, 136(1)
  0624f04  std 24, 144(1)
  0624f08  std 25, 152(1)
  0624f0c  std 26, 160(1)
  0624f10  std 27, 168(1)
  0624f14  std 28, 176(1)
  0624f18  std 30, 192(1)
  0624f1c  std 29, 184(1)
  0624f20  std 31, 200(1)
  0624f24  lwz 30, -29432(2)
  0624f28  mr 22, 7
  0624f2c  rlwinm 25, 9, 2, 30, 30
  0624f30  rlwinm 24, 8, 3, 29, 29
  0624f34  rlwinm 26, 10, 4, 28, 28
  0624f38  rlwinm 27, 0, 5, 27, 27
  0624f3c  rlwinm 23, 11, 6, 26, 26
  0624f40  li 28, 0
  0624f44  bt 30, 0x624f6c
  0624f48  cmpwi 7, 4, 1
  0624f4c  li 28, 1
  0624f50  bt 30, 0x624f6c
  0624f54  xori 0, 4, 2
  0624f58  srawi 11, 0, 31
  0624f5c  xor 9, 11, 0
  0624f60  sub 9, 11, 9
  0624f64  rlwinm 28, 9, 2, 30, 30
  0624f68  addi 28, 28, 11
  0624f6c  cmpwi 7, 3, 0
  0624f70  bt 28, 0x62503c
  0624f74  slwi 0, 3, 2
  0624f78  lwz 9, -32656(30)
  0624f7c  extsw 0, 0
  0624f80  lwzx 0, 9, 0
  0624f84  lis 31, 4609
  0624f88  clrldi 29, 0, 32
  0624f8c  ori 31, 31, 64745
  0624f90  li 0, 0
  0624f94  stw 31, 112(1)
  0624f98  stw 0, 120(1)
  0624f9c  mr 3, 29
  0624fa0  addi 4, 1, 112
  0624fa4  addi 5, 1, 120
  0624fa8  bl 0x648730
  0624fac  nop
  0624fb0  lwz 11, 120(1)
  0624fb4  cmpwi 7, 11, 0
  0624fb8  bt 30, 0x624ffc
  0624fbc  or 10, 25, 27
  0624fc0  or 9, 24, 26
  0624fc4  clrlwi 0, 22, 24
  0624fc8  clrldi 11, 11, 32
  0624fcc  or 0, 0, 10
  0624fd0  or 9, 23, 9
  0624fd4  mr 3, 29
  0624fd8  or 9, 9, 0
  0624fdc  stw 28, 0(11)
  0624fe0  stw 9, 12(11)
  0624fe4  stfs 31, 4(11)
  0624fe8  addi 4, 1, 116
  0624fec  stfs 30, 8(11)
  0624ff0  stw 31, 116(1)
  0624ff4  bl 0x6486f8
  0624ff8  nop
  0624ffc  ld 0, 240(1)
  0625000  ld 22, 128(1)
  0625004  ld 23, 136(1)
  0625008  mtlr 0
  062500c  ld 24, 144(1)
  0625010  ld 25, 152(1)
  0625014  ld 26, 160(1)
  0625018  ld 27, 168(1)
  062501c  ld 28, 176(1)
  0625020  ld 29, 184(1)
  0625024  ld 30, 192(1)
  0625028  ld 31, 200(1)
  062502c  lfd 30, 208(1)
  0625030  lfd 31, 216(1)
  0625034  addi 1, 1, 224
  0625038  blr
  062503c  cmpwi 7, 3, -1
  0625040  bt 30, 0x625050
  0625044  lwz 9, -32652(30)
  0625048  lwz 0, 0(9)
  062504c  b 0x624f84
  0625050  lwz 9, -32672(30)
  0625054  lwz 0, 0(9)
  0625058  b 0x624f84

snd_DumpOutputCaptureBuffer:   # 0x625064, 0x40 bytes
  0625064  stdu 1, -128(1)
  0625068  mflr 0
  062506c  std 30, 112(1)
  0625070  lwz 30, -29432(2)
  0625074  std 0, 144(1)
  0625078  lwz 3, -32644(30)
  062507c  bl 0x61948c
  0625080  nop
  0625084  lwz 3, -32640(30)
  0625088  bl 0x61948c
  062508c  nop
  0625090  ld 0, 144(1)
  0625094  ld 30, 112(1)
  0625098  mtlr 0
  062509c  addi 1, 1, 128
  06250a0  blr

snd_SynthGetVoiceType:   # 0x6250a4, 0xf8 bytes
  06250a4  mr 4, 3
  06250a8  mflr 0
  06250ac  stdu 1, -128(1)
  06250b0  cmpwi 7, 4, 3
  06250b4  std 30, 112(1)
  06250b8  std 0, 144(1)
  06250bc  lwz 30, -29432(2)
  06250c0  li 3, 3
  06250c4  bt 30, 0x625100
  06250c8  cmplwi 7, 4, 3
  06250cc  bf 29, 0x625118
  06250d0  lis 0, -32768
  06250d4  cmpw 7, 4, 0
  06250d8  bt 30, 0x625144
  06250dc  cmplw 7, 4, 0
  06250e0  bf 29, 0x625160
  06250e4  xoris 0, 4, 32768
  06250e8  cmpwi 7, 0, 1
  06250ec  bt 30, 0x625128
  06250f0  xoris 0, 4, 32768
  06250f4  cmpwi 7, 0, 2
  06250f8  bf 30, 0x625168
  06250fc  li 3, 2
  0625100  ld 0, 144(1)
  0625104  clrldi 3, 3, 32
  0625108  ld 30, 112(1)
  062510c  addi 1, 1, 128
  0625110  mtlr 0
  0625114  blr
  0625118  cmpwi 7, 4, 1
  062511c  bt 30, 0x625144
  0625120  cmplwi 7, 4, 1
  0625124  bt 29, 0x6250fc
  0625128  ld 0, 144(1)
  062512c  li 3, 0
  0625130  ld 30, 112(1)
  0625134  addi 1, 1, 128
  0625138  clrldi 3, 3, 32
  062513c  mtlr 0
  0625140  blr
  0625144  ld 0, 144(1)
  0625148  li 3, 1
  062514c  ld 30, 112(1)
  0625150  addi 1, 1, 128
  0625154  clrldi 3, 3, 32
  0625158  mtlr 0
  062515c  blr
  0625160  cmpwi 7, 4, 4
  0625164  bt 30, 0x625194
  0625168  lwz 3, -32636(30)
  062516c  clrldi 4, 4, 32
  0625170  bl 0x61948c
  0625174  nop
  0625178  ld 0, 144(1)
  062517c  ld 30, 112(1)
  0625180  li 3, -1
  0625184  mtlr 0
  0625188  addi 1, 1, 128
  062518c  clrldi 3, 3, 32
  0625190  blr
  0625194  li 3, 4
  0625198  b 0x625100

FUN_0062519c:   # 0x62519c, 0xb0 bytes
  062519c  cmpwi 7, 3, 0
  06251a0  mflr 0
  06251a4  stdu 1, -128(1)
  06251a8  std 30, 112(1)
  06251ac  std 31, 120(1)
  06251b0  std 0, 144(1)
  06251b4  lwz 30, -29432(2)
  06251b8  mr 10, 3
  06251bc  li 31, -1
  06251c0  bt 30, 0x625208
  06251c4  li 0, 8
  06251c8  lwz 11, -32724(30)
  06251cc  li 3, 0
  06251d0  mtctr 0
  06251d4  clrldi 9, 11, 32
  06251d8  addi 11, 11, 16
  06251dc  lwz 0, 0(9)
  06251e0  cmpw 7, 0, 10
  06251e4  bt 30, 0x625224
  06251e8  addi 3, 3, 1
  06251ec  bdnz 0x6251d4
  06251f0  li 31, -1
  06251f4  lwz 4, -32628(30)
  06251f8  li 5, 308
  06251fc  lwz 3, -32632(30)
  0625200  bl 0x61948c
  0625204  nop
  0625208  ld 0, 144(1)
  062520c  extsw 3, 31
  0625210  ld 30, 112(1)
  0625214  ld 31, 120(1)
  0625218  mtlr 0
  062521c  addi 1, 1, 128
  0625220  blr
  0625224  cmpwi 7, 3, 0
  0625228  mr 31, 3
  062522c  bt 28, 0x6251f4
  0625230  ld 0, 144(1)
  0625234  extsw 3, 31
  0625238  ld 30, 112(1)
  062523c  ld 31, 120(1)
  0625240  mtlr 0
  0625244  addi 1, 1, 128
  0625248  blr

FUN_0062524c:   # 0x62524c, 0x94 bytes
  062524c  cmpwi 7, 3, 0
  0625250  mflr 0
  0625254  stdu 1, -128(1)
  0625258  std 30, 112(1)
  062525c  std 31, 120(1)
  0625260  std 0, 144(1)
  0625264  lwz 30, -29432(2)
  0625268  li 5, 4840
  062526c  mr 31, 3
  0625270  bf 30, 0x6252a0
  0625274  lwz 3, -32624(30)
  0625278  lwz 4, -32628(30)
  062527c  bl 0x61948c
  0625280  nop
  0625284  lwz 9, -32620(30)
  0625288  lbz 0, 0(9)
  062528c  cmpwi 7, 0, 0
  0625290  bf 30, 0x6252c8
  0625294  lwz 9, -32616(30)
  0625298  lbz 0, 0(9)
  062529c  twnei 0, 0
  06252a0  clrldi 3, 31, 32
  06252a4  bl 0x62519c
  06252a8  cmpwi 7, 3, 0
  06252ac  slwi 0, 3, 4
  06252b0  extsw 0, 0
  06252b4  bt 28, 0x6252c8
  06252b8  lwz 9, -32724(30)
  06252bc  add 9, 0, 9
  06252c0  li 0, 1
  06252c4  stb 0, 13(9)
  06252c8  ld 0, 144(1)
  06252cc  ld 30, 112(1)
  06252d0  ld 31, 120(1)
  06252d4  mtlr 0
  06252d8  addi 1, 1, 128
  06252dc  blr

FUN_006252e0:   # 0x6252e0, 0x94 bytes
  06252e0  cmpwi 7, 3, 0
  06252e4  mflr 0
  06252e8  stdu 1, -128(1)
  06252ec  std 30, 112(1)
  06252f0  std 31, 120(1)
  06252f4  std 0, 144(1)
  06252f8  lwz 30, -29432(2)
  06252fc  li 5, 4814
  0625300  mr 31, 3
  0625304  bf 30, 0x625334
  0625308  lwz 3, -32624(30)
  062530c  lwz 4, -32628(30)
  0625310  bl 0x61948c
  0625314  nop
  0625318  lwz 9, -32620(30)
  062531c  lbz 0, 0(9)
  0625320  cmpwi 7, 0, 0
  0625324  bf 30, 0x62535c
  0625328  lwz 9, -32616(30)
  062532c  lbz 0, 0(9)
  0625330  twnei 0, 0
  0625334  clrldi 3, 31, 32
  0625338  bl 0x62519c
  062533c  cmpwi 7, 3, 0
  0625340  slwi 0, 3, 4
  0625344  extsw 0, 0
  0625348  bt 28, 0x62535c
  062534c  lwz 9, -32724(30)
  0625350  add 9, 0, 9
  0625354  li 0, 1
  0625358  stb 0, 12(9)
  062535c  ld 0, 144(1)
  0625360  ld 30, 112(1)
  0625364  ld 31, 120(1)
  0625368  mtlr 0
  062536c  addi 1, 1, 128
  0625370  blr

FUN_00625374:   # 0x625374, 0xb0 bytes
  0625374  cmplwi 7, 3, 8
  0625378  mflr 0
  062537c  stdu 1, -128(1)
  0625380  std 30, 112(1)
  0625384  std 31, 120(1)
  0625388  std 0, 144(1)
  062538c  lwz 30, -29432(2)
  0625390  li 5, 4427
  0625394  mr 31, 3
  0625398  bf 29, 0x6253c8
  062539c  lwz 3, -32624(30)
  06253a0  lwz 4, -32628(30)
  06253a4  bl 0x61948c
  06253a8  nop
  06253ac  lwz 9, -32620(30)
  06253b0  lbz 0, 0(9)
  06253b4  cmpwi 7, 0, 0
  06253b8  bf 30, 0x625404
  06253bc  lwz 9, -32616(30)
  06253c0  lbz 0, 0(9)
  06253c4  twnei 0, 0
  06253c8  clrldi 3, 31, 32
  06253cc  bl 0x624590
  06253d0  cmpwi 7, 3, 0
  06253d4  slwi 0, 3, 4
  06253d8  extsw 0, 0
  06253dc  bt 28, 0x625404
  06253e0  lwz 9, -32724(30)
  06253e4  ld 31, 120(1)
  06253e8  ld 30, 112(1)
  06253ec  lwzx 0, 9, 0
  06253f0  clrldi 3, 0, 32
  06253f4  ld 0, 144(1)
  06253f8  addi 1, 1, 128
  06253fc  mtlr 0
  0625400  blr
  0625404  li 0, 0
  0625408  ld 30, 112(1)
  062540c  ld 31, 120(1)
  0625410  clrldi 3, 0, 32
  0625414  ld 0, 144(1)
  0625418  addi 1, 1, 128
  062541c  mtlr 0
  0625420  blr

FUN_00625424:   # 0x625424, 0x460 bytes
  0625424  cmpwi 7, 3, 0
  0625428  mflr 0
  062542c  stdu 1, -160(1)
  0625430  std 27, 120(1)
  0625434  std 28, 128(1)
  0625438  std 29, 136(1)
  062543c  std 30, 144(1)
  0625440  std 31, 152(1)
  0625444  std 0, 176(1)
  0625448  lwz 30, -29432(2)
  062544c  mr 31, 3
  0625450  mr 27, 4
  0625454  mr 28, 3
  0625458  mr 29, 4
  062545c  bt 30, 0x625850
  0625460  cmpwi 7, 4, 0
  0625464  bt 30, 0x625850
  0625468  lwz 0, 0(31)
  062546c  addi 10, 29, 4
  0625470  lwz 9, 0(27)
  0625474  or 0, 0, 9
  0625478  stw 0, 0(31)
  062547c  lwz 7, 0(27)
  0625480  clrlwi 0, 7, 31
  0625484  cmpwi 7, 0, 0
  0625488  bt 30, 0x6257ac
  062548c  lwz 0, 0(10)
  0625490  rlwinm 9, 7, 0, 30, 30
  0625494  addi 11, 29, 20
  0625498  stw 0, 4(31)
  062549c  lfs 0, 4(10)
  06254a0  cmpwi 7, 9, 0
  06254a4  stfs 0, 8(31)
  06254a8  lfs 13, 8(10)
  06254ac  stfs 13, 12(31)
  06254b0  lfs 0, 12(10)
  06254b4  stfs 0, 16(31)
  06254b8  bt 30, 0x625774
  06254bc  lwz 0, 0(11)
  06254c0  rlwinm 9, 7, 0, 29, 29
  06254c4  addi 10, 29, 36
  06254c8  stw 0, 20(31)
  06254cc  lfs 0, 4(11)
  06254d0  cmpwi 7, 9, 0
  06254d4  stfs 0, 24(31)
  06254d8  lfs 13, 8(11)
  06254dc  stfs 13, 28(31)
  06254e0  lfs 0, 12(11)
  06254e4  stfs 0, 32(31)
  06254e8  bt 30, 0x62573c
  06254ec  lwz 0, 0(10)
  06254f0  rlwinm 9, 7, 0, 28, 28
  06254f4  addi 11, 29, 52
  06254f8  stw 0, 36(31)
  06254fc  lfs 0, 4(10)
  0625500  cmpwi 7, 9, 0
  0625504  stfs 0, 40(31)
  0625508  lfs 13, 8(10)
  062550c  stfs 13, 44(31)
  0625510  lfs 0, 12(10)
  0625514  stfs 0, 48(31)
  0625518  bt 30, 0x625704
  062551c  lwz 0, 0(11)
  0625520  rlwinm 9, 7, 0, 27, 27
  0625524  stw 0, 52(31)
  0625528  lfs 0, 4(11)
  062552c  cmpwi 7, 9, 0
  0625530  stfs 0, 56(31)
  0625534  addi 9, 29, 68
  0625538  lfs 13, 8(11)
  062553c  stfs 13, 60(31)
  0625540  lfs 0, 12(11)
  0625544  stfs 0, 64(31)
  0625548  bt 30, 0x6256d8
  062554c  lfs 0, 0(9)
  0625550  rlwinm 0, 7, 0, 24, 24
  0625554  stfs 0, 68(31)
  0625558  lfs 13, 4(9)
  062555c  cmpwi 7, 0, 0
  0625560  stfs 13, 72(31)
  0625564  lwz 0, 8(9)
  0625568  stw 0, 76(31)
  062556c  bt 30, 0x6256d0
  0625570  lfs 0, 104(27)
  0625574  rlwinm 0, 7, 0, 23, 23
  0625578  stfs 0, 104(31)
  062557c  addi 11, 29, 108
  0625580  cmpwi 7, 0, 0
  0625584  bf 30, 0x62558c
  0625588  addi 11, 28, 108
  062558c  lwz 0, 0(11)
  0625590  rlwinm 9, 7, 0, 22, 22
  0625594  stw 0, 108(31)
  0625598  lfs 13, 4(11)
  062559c  cmpwi 7, 9, 0
  06255a0  stfs 13, 112(31)
  06255a4  lfs 0, 8(11)
  06255a8  stfs 0, 116(31)
  06255ac  lfs 13, 12(11)
  06255b0  stfs 13, 120(31)
  06255b4  bt 30, 0x625834
  06255b8  rlwinm 0, 7, 0, 21, 21
  06255bc  lfs 0, 124(27)
  06255c0  stfs 0, 124(31)
  06255c4  cmpwi 7, 0, 0
  06255c8  bt 30, 0x625848
  06255cc  lwz 4, 128(27)
  06255d0  rlwinm 0, 7, 0, 21, 21
  06255d4  addi 10, 28, 144
  06255d8  li 8, 0
  06255dc  stw 4, 128(31)
  06255e0  cmpwi 6, 0, 0
  06255e4  bt 26, 0x62580c
  06255e8  add 9, 29, 8
  06255ec  clrldi 9, 9, 32
  06255f0  lfs 0, 156(9)
  06255f4  stfs 0, 12(10)
  06255f8  bt 26, 0x6257fc
  06255fc  add 9, 29, 8
  0625600  add 11, 28, 8
  0625604  clrldi 9, 9, 32
  0625608  lwz 0, 132(9)
  062560c  clrldi 9, 11, 32
  0625610  stw 0, 132(9)
  0625614  bt 26, 0x6257e4
  0625618  add 9, 29, 8
  062561c  clrldi 9, 9, 32
  0625620  lwz 0, 144(9)
  0625624  stw 0, 0(10)
  0625628  bt 26, 0x6257f0
  062562c  add 9, 29, 8
  0625630  clrldi 9, 9, 32
  0625634  lfs 0, 168(9)
  0625638  clrldi 9, 11, 32
  062563c  cmpwi 7, 8, 8
  0625640  addi 10, 10, 4
  0625644  addi 8, 8, 4
  0625648  stfs 0, 168(9)
  062564c  bf 30, 0x6255e4
  0625650  rlwinm 9, 7, 0, 25, 25
  0625654  rlwinm 0, 7, 0, 26, 26
  0625658  addi 10, 28, 92
  062565c  li 7, 0
  0625660  cmpwi 1, 0, 0
  0625664  cmpwi 6, 9, 0
  0625668  add 0, 7, 29
  062566c  addi 9, 10, -12
  0625670  clrldi 8, 0, 32
  0625674  clrldi 11, 9, 32
  0625678  bt 6, 0x625814
  062567c  clrldi 9, 9, 32
  0625680  lfs 0, 80(8)
  0625684  add 0, 7, 29
  0625688  clrldi 11, 0, 32
  062568c  stfs 0, 0(9)
  0625690  bt 26, 0x62582c
  0625694  lwz 0, 92(11)
  0625698  cmpwi 7, 7, 8
  062569c  stw 0, 0(10)
  06256a0  addi 7, 7, 4
  06256a4  addi 10, 10, 4
  06256a8  bf 30, 0x625668
  06256ac  ld 0, 176(1)
  06256b0  ld 27, 120(1)
  06256b4  ld 28, 128(1)
  06256b8  mtlr 0
  06256bc  ld 29, 136(1)
  06256c0  ld 30, 144(1)
  06256c4  ld 31, 152(1)
  06256c8  addi 1, 1, 160
  06256cc  blr
  06256d0  lfs 0, 104(31)
  06256d4  b 0x625574
  06256d8  addi 9, 28, 68
  06256dc  rlwinm 0, 7, 0, 24, 24
  06256e0  cmpwi 7, 0, 0
  06256e4  lfs 0, 0(9)
  06256e8  stfs 0, 68(31)
  06256ec  lfs 13, 4(9)
  06256f0  stfs 13, 72(31)
  06256f4  lwz 0, 8(9)
  06256f8  stw 0, 76(31)
  06256fc  bt 30, 0x6256d0
  0625700  b 0x625570
  0625704  addi 11, 28, 52
  0625708  rlwinm 9, 7, 0, 27, 27
  062570c  cmpwi 7, 9, 0
  0625710  addi 9, 29, 68
  0625714  lwz 0, 0(11)
  0625718  stw 0, 52(31)
  062571c  lfs 0, 4(11)
  0625720  stfs 0, 56(31)
  0625724  lfs 13, 8(11)
  0625728  stfs 13, 60(31)
  062572c  lfs 0, 12(11)
  0625730  stfs 0, 64(31)
  0625734  bf 30, 0x62554c
  0625738  b 0x6256d8
  062573c  addi 10, 28, 36
  0625740  rlwinm 9, 7, 0, 28, 28
  0625744  addi 11, 29, 52
  0625748  cmpwi 7, 9, 0
  062574c  lwz 0, 0(10)
  0625750  stw 0, 36(31)
  0625754  lfs 0, 4(10)
  0625758  stfs 0, 40(31)
  062575c  lfs 13, 8(10)
  0625760  stfs 13, 44(31)
  0625764  lfs 0, 12(10)
  0625768  stfs 0, 48(31)
  062576c  bf 30, 0x62551c
  0625770  b 0x625704
  0625774  addi 11, 28, 20
  0625778  rlwinm 9, 7, 0, 29, 29
  062577c  addi 10, 29, 36
  0625780  cmpwi 7, 9, 0
  0625784  lwz 0, 0(11)
  0625788  stw 0, 20(31)
  062578c  lfs 0, 4(11)
  0625790  stfs 0, 24(31)
  0625794  lfs 13, 8(11)
  0625798  stfs 13, 28(31)
  062579c  lfs 0, 12(11)
  06257a0  stfs 0, 32(31)
  06257a4  bf 30, 0x6254ec
  06257a8  b 0x62573c
  06257ac  addi 10, 28, 4
  06257b0  rlwinm 9, 7, 0, 30, 30
  06257b4  addi 11, 29, 20
  06257b8  cmpwi 7, 9, 0
  06257bc  lwz 0, 0(10)
  06257c0  stw 0, 4(31)
  06257c4  lfs 0, 4(10)
  06257c8  stfs 0, 8(31)
  06257cc  lfs 13, 8(10)
  06257d0  stfs 13, 12(31)
  06257d4  lfs 0, 12(10)
  06257d8  stfs 0, 16(31)
  06257dc  bf 30, 0x6254bc
  06257e0  b 0x625774
  06257e4  lwz 0, 0(10)
  06257e8  stw 0, 0(10)
  06257ec  bf 26, 0x62562c
  06257f0  clrldi 9, 11, 32
  06257f4  lfs 0, 168(9)
  06257f8  b 0x625638
  06257fc  add 11, 28, 8
  0625800  clrldi 9, 11, 32
  0625804  lwz 0, 132(9)
  0625808  b 0x62560c
  062580c  lfs 0, 12(10)
  0625810  b 0x6255f4
  0625814  clrldi 9, 9, 32
  0625818  lfs 0, 0(11)
  062581c  add 0, 7, 29
  0625820  clrldi 11, 0, 32
  0625824  stfs 0, 0(9)
  0625828  bf 26, 0x625694
  062582c  lwz 0, 0(10)
  0625830  b 0x625698
  0625834  rlwinm 0, 7, 0, 21, 21
  0625838  lfs 0, 124(31)
  062583c  stfs 0, 124(31)
  0625840  cmpwi 7, 0, 0
  0625844  bf 30, 0x6255cc
  0625848  lwz 4, 128(31)
  062584c  b 0x6255d0
  0625850  lwz 3, -32624(30)
  0625854  li 5, 3721
  0625858  lwz 4, -32628(30)
  062585c  bl 0x61948c
  0625860  nop
  0625864  lwz 9, -32620(30)
  0625868  lbz 0, 0(9)
  062586c  cmpwi 7, 0, 0
  0625870  bf 30, 0x6256ac
  0625874  lwz 9, -32616(30)
  0625878  lbz 0, 0(9)
  062587c  twnei 0, 0
  0625880  b 0x625468

FUN_00625884:   # 0x625884, 0x134 bytes
  0625884  cmpdi 3, 0
  0625888  mflr 0
  062588c  stdu 1, -144(1)
  0625890  std 30, 128(1)
  0625894  std 31, 136(1)
  0625898  std 0, 160(1)
  062589c  lwz 30, -29432(2)
  06258a0  li 5, 3674
  06258a4  mr 31, 3
  06258a8  bt 2, 0x625988
  06258ac  li 0, 0
  06258b0  lfs 0, -32612(30)
  06258b4  li 9, 0
  06258b8  stw 0, 116(1)
  06258bc  stw 0, 120(1)
  06258c0  stw 9, 4(31)
  06258c4  stw 0, 8(31)
  06258c8  stw 0, 12(31)
  06258cc  stw 0, 16(31)
  06258d0  stw 9, 20(31)
  06258d4  stw 0, 24(31)
  06258d8  stw 0, 28(31)
  06258dc  stw 0, 32(31)
  06258e0  stw 9, 36(31)
  06258e4  stw 0, 40(31)
  06258e8  stw 0, 44(31)
  06258ec  stw 0, 48(31)
  06258f0  stw 9, 52(31)
  06258f4  stw 0, 56(31)
  06258f8  stw 0, 60(31)
  06258fc  stw 0, 64(31)
  0625900  stw 9, 0(31)
  0625904  stw 9, 76(31)
  0625908  stw 0, 72(31)
  062590c  stw 9, 112(1)
  0625910  stw 0, 68(31)
  0625914  stfs 0, 104(31)
  0625918  stw 0, 124(1)
  062591c  stw 9, 108(31)
  0625920  stw 0, 112(31)
  0625924  stw 0, 116(31)
  0625928  stw 0, 120(31)
  062592c  stfs 0, 124(31)
  0625930  stw 0, 80(31)
  0625934  stw 0, 84(31)
  0625938  stw 0, 88(31)
  062593c  stfs 0, 176(31)
  0625940  stw 0, 164(31)
  0625944  stw 9, 152(31)
  0625948  stw 9, 128(31)
  062594c  stw 0, 156(31)
  0625950  stw 9, 132(31)
  0625954  stw 9, 144(31)
  0625958  stfs 0, 168(31)
  062595c  stw 0, 160(31)
  0625960  stw 9, 136(31)
  0625964  stw 9, 148(31)
  0625968  stfs 0, 172(31)
  062596c  stw 9, 140(31)
  0625970  ld 0, 160(1)
  0625974  ld 30, 128(1)
  0625978  ld 31, 136(1)
  062597c  mtlr 0
  0625980  addi 1, 1, 144
  0625984  blr
  0625988  lwz 3, -32624(30)
  062598c  lwz 4, -32628(30)
  0625990  bl 0x61948c
  0625994  nop
  0625998  lwz 9, -32620(30)
  062599c  lbz 0, 0(9)
  06259a0  cmpwi 7, 0, 0
  06259a4  bf 30, 0x625970
  06259a8  lwz 9, -32616(30)
  06259ac  lbz 0, 0(9)
  06259b0  twnei 0, 0
  06259b4  b 0x6258ac

snd_SynthSetMasterEQBand:   # 0x6259b8, 0x6c bytes
  06259b8  cmplwi 7, 3, 3
  06259bc  mflr 0
  06259c0  stdu 1, -128(1)
  06259c4  std 30, 112(1)
  06259c8  std 0, 144(1)
  06259cc  lwz 30, -29432(2)
  06259d0  li 5, 3649
  06259d4  bf 29, 0x625a04
  06259d8  lwz 3, -32624(30)
  06259dc  lwz 4, -32628(30)
  06259e0  bl 0x61948c
  06259e4  nop
  06259e8  lwz 9, -32620(30)
  06259ec  lbz 0, 0(9)
  06259f0  cmpwi 7, 0, 0
  06259f4  bf 30, 0x625a10
  06259f8  lwz 9, -32616(30)
  06259fc  lbz 0, 0(9)
  0625a00  twnei 0, 0
  0625a04  lwz 3, -32604(30)
  0625a08  bl 0x61948c
  0625a0c  nop
  0625a10  ld 0, 144(1)
  0625a14  ld 30, 112(1)
  0625a18  addi 1, 1, 128
  0625a1c  mtlr 0
  0625a20  blr

FUN_00625a24:   # 0x625a24, 0x50 bytes
  0625a24  stdu 1, -128(1)
  0625a28  mflr 0
  0625a2c  std 30, 112(1)
  0625a30  lwz 30, -29432(2)
  0625a34  slwi 3, 3, 2
  0625a38  std 0, 144(1)
  0625a3c  slwi 0, 4, 2
  0625a40  extsw 3, 3
  0625a44  extsw 0, 0
  0625a48  lwz 9, -32656(30)
  0625a4c  li 4, 2
  0625a50  lwzx 5, 9, 0
  0625a54  lwzx 3, 9, 3
  0625a58  bl 0x648b10
  0625a5c  nop
  0625a60  ld 0, 144(1)
  0625a64  ld 30, 112(1)
  0625a68  mtlr 0
  0625a6c  addi 1, 1, 128
  0625a70  blr

FUN_00625a74:   # 0x625a74, 0xac bytes
  0625a74  stdu 1, -144(1)
  0625a78  mflr 0
  0625a7c  std 30, 128(1)
  0625a80  lwz 30, -29432(2)
  0625a84  cmplwi 7, 3, 3
  0625a88  std 28, 112(1)
  0625a8c  std 29, 120(1)
  0625a90  std 31, 136(1)
  0625a94  std 0, 160(1)
  0625a98  mr 28, 4
  0625a9c  lwz 9, -32600(30)
  0625aa0  mr 29, 5
  0625aa4  cmpwi 6, 6, 0
  0625aa8  bf 29, 0x625ab0
  0625aac  li 3, 3
  0625ab0  slwi 0, 3, 2
  0625ab4  extsw 0, 0
  0625ab8  lwzx 3, 9, 0
  0625abc  cmplwi 7, 3, 2
  0625ac0  addi 9, 3, 3
  0625ac4  bf 29, 0x625b18
  0625ac8  rlwinm 31, 9, 0, 0, 29
  0625acc  bt 26, 0x625b18
  0625ad0  bl 0x640d2c
  0625ad4  nop
  0625ad8  clrlwi 9, 29, 24
  0625adc  ld 0, 160(1)
  0625ae0  addi 9, 9, -1
  0625ae4  ld 29, 120(1)
  0625ae8  ld 30, 128(1)
  0625aec  mtlr 0
  0625af0  rlwinm 9, 9, 2, 30, 30
  0625af4  addi 9, 9, 2
  0625af8  mullw 9, 9, 3
  0625afc  mullw 9, 9, 28
  0625b00  ld 28, 112(1)
  0625b04  mullw 9, 31, 9
  0625b08  ld 31, 136(1)
  0625b0c  rlwinm 3, 9, 0, 0, 30
  0625b10  addi 1, 1, 144
  0625b14  blr
  0625b18  mr 31, 3
  0625b1c  b 0x625ad0

FUN_00625b20:   # 0x625b20, 0xb0 bytes
  0625b20  stdu 1, -128(1)
  0625b24  mflr 0
  0625b28  std 30, 112(1)
  0625b2c  lwz 30, -29432(2)
  0625b30  mr 8, 3
  0625b34  std 31, 120(1)
  0625b38  std 0, 144(1)
  0625b3c  li 3, 0
  0625b40  cmplw 6, 5, 6
  0625b44  lwz 31, -32676(30)
  0625b48  lbz 11, 0(31)
  0625b4c  cmpwi 7, 11, 0
  0625b50  bf 30, 0x625bac
  0625b54  li 0, 1
  0625b58  sub 10, 6, 5
  0625b5c  stb 0, 0(31)
  0625b60  stb 11, 1(31)
  0625b64  stw 5, 4(31)
  0625b68  stw 6, 8(31)
  0625b6c  stw 8, 12(31)
  0625b70  stw 4, 16(31)
  0625b74  stw 7, 24(31)
  0625b78  bf 24, 0x625bc8
  0625b7c  stw 10, 20(31)
  0625b80  lwz 3, -32596(30)
  0625b84  mr 4, 31
  0625b88  li 5, 1
  0625b8c  bl 0x6426c0
  0625b90  nop
  0625b94  clrlwi 0, 3, 24
  0625b98  li 3, 1
  0625b9c  cmpwi 7, 0, 0
  0625ba0  bf 30, 0x625bac
  0625ba4  li 3, 0
  0625ba8  stb 0, 0(31)
  0625bac  ld 0, 144(1)
  0625bb0  extsw 3, 3
  0625bb4  ld 30, 112(1)
  0625bb8  ld 31, 120(1)
  0625bbc  mtlr 0
  0625bc0  addi 1, 1, 128
  0625bc4  blr
  0625bc8  stw 10, 20(31)
  0625bcc  b 0x625b80

FUN_00625bd0:   # 0x625bd0, 0xb8 bytes
  0625bd0  stdu 1, -144(1)
  0625bd4  mflr 0
  0625bd8  std 30, 128(1)
  0625bdc  lwz 30, -29432(2)
  0625be0  std 0, 160(1)
  0625be4  std 31, 136(1)
  0625be8  bl 0x62519c
  0625bec  cmpwi 7, 3, 0
  0625bf0  slwi 0, 3, 4
  0625bf4  addi 4, 1, 112
  0625bf8  extsw 11, 0
  0625bfc  bt 28, 0x625c5c
  0625c00  lwz 9, -32724(30)
  0625c04  li 0, 0
  0625c08  stw 0, 112(1)
  0625c0c  lwzx 0, 9, 11
  0625c10  mr 3, 0
  0625c14  mr 31, 0
  0625c18  bl 0x647ed0
  0625c1c  nop
  0625c20  lwz 0, 112(1)
  0625c24  cmpwi 7, 0, 0
  0625c28  bt 30, 0x625c5c
  0625c2c  lwz 9, -32592(30)
  0625c30  clrldi 10, 0, 32
  0625c34  lbz 0, 0(9)
  0625c38  cmpwi 7, 0, 0
  0625c3c  bt 30, 0x625c74
  0625c40  lwz 0, 112(10)
  0625c44  ori 0, 0, 16
  0625c48  stw 0, 112(10)
  0625c4c  mr 3, 31
  0625c50  li 4, 384
  0625c54  bl 0x647f34
  0625c58  nop
  0625c5c  ld 0, 160(1)
  0625c60  ld 30, 128(1)
  0625c64  ld 31, 136(1)
  0625c68  mtlr 0
  0625c6c  addi 1, 1, 144
  0625c70  blr
  0625c74  lwz 0, 112(10)
  0625c78  rlwinm 0, 0, 27, 1, 31
  0625c7c  rotlwi 0, 0, 5
  0625c80  stw 0, 112(10)
  0625c84  b 0x625c4c

FUN_00625c88:   # 0x625c88, 0xf0 bytes
  0625c88  stdu 1, -176(1)
  0625c8c  mflr 0
  0625c90  mr 9, 3
  0625c94  stfd 30, 160(1)
  0625c98  std 0, 192(1)
  0625c9c  fmr 30, 1
  0625ca0  lwz 3, 112(3)
  0625ca4  stfd 31, 168(1)
  0625ca8  fmr 31, 2
  0625cac  cmpwi 7, 3, 0
  0625cb0  std 29, 136(1)
  0625cb4  std 30, 144(1)
  0625cb8  std 31, 152(1)
  0625cbc  lwz 30, -29432(2)
  0625cc0  mr 29, 6
  0625cc4  bt 30, 0x625d70
  0625cc8  lis 0, 769
  0625ccc  clrldi 31, 3, 32
  0625cd0  ori 0, 0, 7693
  0625cd4  li 9, 0
  0625cd8  stw 0, 116(1)
  0625cdc  stw 9, 120(1)
  0625ce0  mr 3, 31
  0625ce4  addi 4, 1, 116
  0625ce8  addi 5, 1, 120
  0625cec  bl 0x648730
  0625cf0  nop
  0625cf4  cmpwi 7, 3, 0
  0625cf8  mr 4, 3
  0625cfc  bf 30, 0x625d5c
  0625d00  lwz 9, 120(1)
  0625d04  cmpwi 7, 9, 0
  0625d08  bt 30, 0x625d38
  0625d0c  clrldi 9, 9, 32
  0625d10  lis 0, 769
  0625d14  mr 3, 31
  0625d18  ori 0, 0, 7693
  0625d1c  addi 4, 1, 112
  0625d20  stfs 31, 8(9)
  0625d24  stw 29, 0(9)
  0625d28  stfs 30, 4(9)
  0625d2c  stw 0, 112(1)
  0625d30  bl 0x6486f8
  0625d34  nop
  0625d38  ld 0, 192(1)
  0625d3c  ld 29, 136(1)
  0625d40  ld 30, 144(1)
  0625d44  mtlr 0
  0625d48  ld 31, 152(1)
  0625d4c  lfd 30, 160(1)
  0625d50  lfd 31, 168(1)
  0625d54  addi 1, 1, 176
  0625d58  blr
  0625d5c  lwz 3, -32588(30)
  0625d60  extsw 4, 4
  0625d64  bl 0x5cd098
  0625d68  nop
  0625d6c  b 0x625d00
  0625d70  lwz 3, 108(9)
  0625d74  b 0x625cc8

FUN_00625d80:   # 0x625d80, 0xd8 bytes
  0625d80  stdu 1, -128(1)
  0625d84  mflr 0
  0625d88  mr 11, 3
  0625d8c  std 0, 144(1)
  0625d90  lwz 3, 112(3)
  0625d94  mr 9, 4
  0625d98  std 30, 112(1)
  0625d9c  cmpwi 7, 3, 0
  0625da0  lwz 30, -29432(2)
  0625da4  cmplwi 1, 5, 7
  0625da8  clrldi 4, 4, 32
  0625dac  cmplwi 6, 9, 2
  0625db0  bt 30, 0x625e50
  0625db4  bt 25, 0x625e30
  0625db8  slwi 0, 5, 2
  0625dbc  addi 4, 9, 2
  0625dc0  extsw 0, 0
  0625dc4  clrldi 4, 4, 32
  0625dc8  clrldi 3, 3, 32
  0625dcc  bf 5, 0x625df4
  0625dd0  lwz 3, -32580(30)
  0625dd4  clrldi 4, 5, 32
  0625dd8  bl 0x61948c
  0625ddc  nop
  0625de0  ld 0, 144(1)
  0625de4  ld 30, 112(1)
  0625de8  addi 1, 1, 128
  0625dec  mtlr 0
  0625df0  blr
  0625df4  lwz 9, -32576(30)
  0625df8  lwzx 5, 9, 0
  0625dfc  bl 0x648b10
  0625e00  nop
  0625e04  cmpwi 7, 3, 0
  0625e08  extsw 4, 3
  0625e0c  bt 30, 0x625de0
  0625e10  lwz 3, -32572(30)
  0625e14  bl 0x5cd098
  0625e18  nop
  0625e1c  ld 0, 144(1)
  0625e20  ld 30, 112(1)
  0625e24  mtlr 0
  0625e28  addi 1, 1, 128
  0625e2c  blr
  0625e30  lwz 3, -32584(30)
  0625e34  bl 0x61948c
  0625e38  nop
  0625e3c  ld 0, 144(1)
  0625e40  ld 30, 112(1)
  0625e44  mtlr 0
  0625e48  addi 1, 1, 128
  0625e4c  blr
  0625e50  lwz 3, 108(11)
  0625e54  b 0x625db4

FUN_00625e58:   # 0x625e58, 0x12c bytes
  0625e58  stdu 1, -160(1)
  0625e5c  mflr 0
  0625e60  mr 9, 3
  0625e64  stfd 31, 152(1)
  0625e68  std 0, 176(1)
  0625e6c  fmr 31, 1
  0625e70  lwz 3, 112(3)
  0625e74  std 30, 136(1)
  0625e78  cmpwi 7, 3, 0
  0625e7c  lwz 30, -29432(2)
  0625e80  std 29, 128(1)
  0625e84  std 31, 144(1)
  0625e88  bt 30, 0x625f7c
  0625e8c  cmplwi 7, 4, 2
  0625e90  bf 29, 0x625ec4
  0625e94  lwz 3, -32584(30)
  0625e98  clrldi 4, 4, 32
  0625e9c  bl 0x61948c
  0625ea0  nop
  0625ea4  ld 0, 176(1)
  0625ea8  ld 29, 128(1)
  0625eac  ld 30, 136(1)
  0625eb0  mtlr 0
  0625eb4  ld 31, 144(1)
  0625eb8  lfd 31, 152(1)
  0625ebc  addi 1, 1, 160
  0625ec0  blr
  0625ec4  clrldi 29, 3, 32
  0625ec8  slwi 11, 4, 2
  0625ecc  li 0, 0
  0625ed0  addi 11, 11, 324
  0625ed4  stw 0, 124(1)
  0625ed8  lwz 10, 24(29)
  0625edc  extsw 11, 11
  0625ee0  mr 3, 29
  0625ee4  addi 4, 1, 116
  0625ee8  addi 5, 1, 124
  0625eec  lwz 9, 24(10)
  0625ef0  add 9, 9, 11
  0625ef4  lwz 31, 8(9)
  0625ef8  stw 31, 120(1)
  0625efc  stw 31, 116(1)
  0625f00  bl 0x648730
  0625f04  nop
  0625f08  cmpwi 7, 3, 0
  0625f0c  mr 4, 3
  0625f10  bf 30, 0x625f5c
  0625f14  lwz 9, 124(1)
  0625f18  cmpwi 7, 9, 0
  0625f1c  bt 30, 0x625ea4
  0625f20  clrldi 9, 9, 32
  0625f24  mr 3, 29
  0625f28  addi 4, 1, 112
  0625f2c  stfs 31, 0(9)
  0625f30  stw 31, 112(1)
  0625f34  bl 0x6486f8
  0625f38  nop
  0625f3c  ld 0, 176(1)
  0625f40  ld 29, 128(1)
  0625f44  ld 30, 136(1)
  0625f48  mtlr 0
  0625f4c  ld 31, 144(1)
  0625f50  lfd 31, 152(1)
  0625f54  addi 1, 1, 160
  0625f58  blr
  0625f5c  lwz 3, -32568(30)
  0625f60  extsw 4, 4
  0625f64  bl 0x5cd098
  0625f68  nop
  0625f6c  lwz 9, 124(1)
  0625f70  cmpwi 7, 9, 0
  0625f74  bf 30, 0x625f20
  0625f78  b 0x625ea4
  0625f7c  lwz 3, 108(9)
  0625f80  b 0x625e8c

FUN_00625f8c:   # 0x625f8c, 0x3c8 bytes
  0625f8c  mfcr 12
  0625f90  cmpwi 7, 3, 0
  0625f94  stdu 1, -256(1)
  0625f98  stfd 27, 216(1)
  0625f9c  fmr 27, 4
  0625fa0  stfd 28, 224(1)
  0625fa4  fmr 28, 2
  0625fa8  stfd 29, 232(1)
  0625fac  fmr 29, 3
  0625fb0  stfd 30, 240(1)
  0625fb4  fmr 30, 1
  0625fb8  std 23, 144(1)
  0625fbc  std 24, 152(1)
  0625fc0  std 25, 160(1)
  0625fc4  std 30, 200(1)
  0625fc8  std 31, 208(1)
  0625fcc  stfd 31, 248(1)
  0625fd0  mr 31, 3
  0625fd4  std 22, 136(1)
  0625fd8  std 26, 168(1)
  0625fdc  std 27, 176(1)
  0625fe0  std 28, 184(1)
  0625fe4  std 29, 192(1)
  0625fe8  lwz 30, -29432(2)
  0625fec  mr 24, 8
  0625ff0  mr 23, 9
  0625ff4  mr 25, 8
  0625ff8  stw 12, 264(1)
  0625ffc  mflr 0
  0626000  std 0, 272(1)
  0626004  bt 30, 0x626020
  0626008  lfs 0, -32684(30)
  062600c  fcmpu 7, 1, 0
  0626010  bt 28, 0x626020
  0626014  lfs 13, -32612(30)
  0626018  fcmpu 7, 1, 13
  062601c  bf 29, 0x626308
  0626020  lwz 3, -32624(30)
  0626024  li 5, 3915
  0626028  lwz 4, -32628(30)
  062602c  bl 0x61948c
  0626030  nop
  0626034  lwz 9, -32620(30)
  0626038  lbz 0, 0(9)
  062603c  cmpwi 7, 0, 0
  0626040  bf 30, 0x6261b4
  0626044  lwz 9, -32616(30)
  0626048  lbz 0, 0(9)
  062604c  twnei 0, 0
  0626050  lis 22, 21845
  0626054  rlwinm 0, 23, 0, 28, 28
  0626058  ori 22, 22, 21846
  062605c  addi 27, 25, 80
  0626060  li 26, 0
  0626064  clrldi 28, 31, 32
  0626068  cmpwi 3, 0, 0
  062606c  cmpwi 4, 25, 0
  0626070  mr 29, 26
  0626074  mr 10, 26
  0626078  bt 18, 0x6262c4
  062607c  lwz 8, 0(24)
  0626080  rlwinm 0, 8, 0, 25, 25
  0626084  cmpwi 7, 0, 0
  0626088  bt 30, 0x62620c
  062608c  lwz 5, 12(27)
  0626090  bt 14, 0x62623c
  0626094  lfs 31, -32684(30)
  0626098  clrldi 29, 29, 32
  062609c  clrldi 5, 5, 32
  06260a0  mr 3, 28
  06260a4  mr 4, 29
  06260a8  addi 26, 26, 1
  06260ac  bl 0x625d80
  06260b0  fmr 1, 31
  06260b4  mr 3, 28
  06260b8  mr 4, 29
  06260bc  addi 27, 27, 4
  06260c0  bl 0x625e58
  06260c4  cmpdi 7, 26, 3
  06260c8  bf 30, 0x626070
  06260cc  bt 18, 0x62633c
  06260d0  rlwinm 0, 23, 0, 29, 29
  06260d4  lfs 13, -32684(30)
  06260d8  cmpwi 7, 0, 0
  06260dc  bt 30, 0x6262a4
  06260e0  rlwinm 0, 23, 0, 27, 27
  06260e4  li 8, 0
  06260e8  cmpwi 7, 0, 0
  06260ec  bf 30, 0x62628c
  06260f0  lwz 10, 44(31)
  06260f4  stfs 13, 0(31)
  06260f8  cmpwi 7, 10, 0
  06260fc  stw 8, 4(31)
  0626100  bt 30, 0x6261ac
  0626104  cmplwi 7, 10, 1
  0626108  rlwinm 0, 23, 0, 27, 27
  062610c  rlwinm 9, 23, 0, 29, 29
  0626110  clrldi 10, 10, 32
  0626114  cmpwi 1, 0, 0
  0626118  cmpwi 6, 9, 0
  062611c  mtctr 10
  0626120  li 11, 0
  0626124  bf+ 28, 0x626178
  0626128  b 0x626348
  062612c  clrldi 9, 9, 32
  0626130  lfs 0, 156(9)
  0626134  fmuls 0, 30, 0
  0626138  fmuls 13, 29, 0
  062613c  add 9, 25, 11
  0626140  li 0, 0
  0626144  bt 6, 0x626160
  0626148  clrldi 9, 9, 32
  062614c  lfs 0, 168(9)
  0626150  fmuls 0, 30, 0
  0626154  fmuls 0, 0, 28
  0626158  stfs 0, 112(1)
  062615c  lwz 0, 112(1)
  0626160  add 9, 31, 11
  0626164  addi 11, 11, 4
  0626168  clrldi 9, 9, 32
  062616c  stw 0, 84(9)
  0626170  stfs 13, 72(9)
  0626174  bdz 0x6261ac
  0626178  li 0, 0
  062617c  bt 18, 0x626190
  0626180  add 9, 11, 25
  0626184  bt 26, 0x62612c
  0626188  lfs 13, -32684(30)
  062618c  b 0x62613c
  0626190  fmuls 13, 30, 29
  0626194  add 9, 31, 11
  0626198  addi 11, 11, 4
  062619c  clrldi 9, 9, 32
  06261a0  stw 0, 84(9)
  06261a4  stfs 13, 72(9)
  06261a8  bdnz 0x626178
  06261ac  li 0, 1
  06261b0  stb 0, 106(31)
  06261b4  lwz 12, 264(1)
  06261b8  ld 0, 272(1)
  06261bc  ld 22, 136(1)
  06261c0  mtocrf 16, 12
  06261c4  ld 23, 144(1)
  06261c8  mtlr 0
  06261cc  ld 24, 152(1)
  06261d0  mtocrf 8, 12
  06261d4  ld 25, 160(1)
  06261d8  ld 26, 168(1)
  06261dc  ld 27, 176(1)
  06261e0  ld 28, 184(1)
  06261e4  ld 29, 192(1)
  06261e8  ld 30, 200(1)
  06261ec  ld 31, 208(1)
  06261f0  lfd 27, 216(1)
  06261f4  lfd 28, 224(1)
  06261f8  lfd 29, 232(1)
  06261fc  lfd 30, 240(1)
  0626200  lfd 31, 248(1)
  0626204  addi 1, 1, 256
  0626208  blr
  062620c  srawi 11, 26, 31
  0626210  mulhw 0, 26, 22
  0626214  sub 0, 0, 11
  0626218  slwi 9, 0, 1
  062621c  add 9, 9, 0
  0626220  sub 9, 26, 9
  0626224  slwi 9, 9, 2
  0626228  addi 9, 9, 16
  062622c  extsw 9, 9
  0626230  add 9, 28, 9
  0626234  lwz 5, 4(9)
  0626238  bf 14, 0x626094
  062623c  rlwinm 0, 8, 0, 26, 26
  0626240  cmpwi 7, 0, 0
  0626244  bf 30, 0x62627c
  0626248  srawi 11, 10, 31
  062624c  mulhw 0, 10, 22
  0626250  sub 0, 0, 11
  0626254  slwi 9, 0, 1
  0626258  add 9, 9, 0
  062625c  sub 9, 10, 9
  0626260  slwi 9, 9, 2
  0626264  extsw 9, 9
  0626268  add 9, 28, 9
  062626c  lfs 0, 8(9)
  0626270  fmuls 0, 30, 0
  0626274  fmuls 31, 27, 0
  0626278  b 0x626098
  062627c  lfs 0, 0(27)
  0626280  fmuls 0, 30, 0
  0626284  fmuls 31, 27, 0
  0626288  b 0x626098
  062628c  lfs 0, 124(24)
  0626290  fmuls 0, 30, 0
  0626294  fmuls 0, 28, 0
  0626298  stfs 0, 112(1)
  062629c  lwz 8, 112(1)
  06262a0  b 0x6260f0
  06262a4  lfs 0, 104(24)
  06262a8  rlwinm 0, 23, 0, 27, 27
  06262ac  fmuls 0, 30, 0
  06262b0  li 8, 0
  06262b4  cmpwi 7, 0, 0
  06262b8  fmuls 13, 29, 0
  06262bc  bt 30, 0x6260f0
  06262c0  b 0x62628c
  06262c4  srawi 11, 26, 31
  06262c8  mulhw 9, 26, 22
  06262cc  sub 9, 9, 11
  06262d0  slwi 0, 9, 1
  06262d4  add 0, 0, 9
  06262d8  sub 9, 26, 0
  06262dc  slwi 9, 9, 2
  06262e0  extsw 11, 9
  06262e4  addi 9, 9, 16
  06262e8  add 11, 28, 11
  06262ec  extsw 9, 9
  06262f0  add 9, 28, 9
  06262f4  lfs 0, 8(11)
  06262f8  fmuls 0, 30, 0
  06262fc  lwz 5, 4(9)
  0626300  fmuls 31, 0, 27
  0626304  b 0x626098
  0626308  fcmpu 7, 2, 0
  062630c  bt 28, 0x626020
  0626310  fcmpu 7, 2, 13
  0626314  bt 29, 0x626020
  0626318  fcmpu 7, 3, 0
  062631c  bt 28, 0x626020
  0626320  fcmpu 7, 3, 13
  0626324  bt 29, 0x626020
  0626328  fcmpu 7, 4, 0
  062632c  bt 28, 0x626020
  0626330  fcmpu 7, 4, 13
  0626334  bt 29, 0x626020
  0626338  b 0x626050
  062633c  fmuls 13, 30, 29
  0626340  li 8, 0
  0626344  b 0x6260f0
  0626348  li 0, 1
  062634c  mtctr 0
  0626350  b 0x626178

FUN_00626354:   # 0x626354, 0xd8 bytes
  0626354  stdu 1, -160(1)
  0626358  mflr 0
  062635c  lis 9, 257
  0626360  stfd 31, 152(1)
  0626364  std 0, 176(1)
  0626368  fmr 31, 1
  062636c  lwz 0, 108(3)
  0626370  ori 9, 9, 31357
  0626374  std 31, 144(1)
  0626378  mr 31, 0
  062637c  li 0, 0
  0626380  std 30, 136(1)
  0626384  stw 9, 116(1)
  0626388  lwz 30, -29432(2)
  062638c  mr 3, 31
  0626390  stw 0, 120(1)
  0626394  addi 4, 1, 116
  0626398  addi 5, 1, 120
  062639c  bl 0x648730
  06263a0  nop
  06263a4  cmpwi 7, 3, 0
  06263a8  bf 30, 0x626418
  06263ac  lwz 9, 120(1)
  06263b0  cmpwi 7, 9, 0
  06263b4  bt 30, 0x6263ec
  06263b8  lfs 0, -32560(30)
  06263bc  fcmpu 7, 31, 0
  06263c0  bf 28, 0x626408
  06263c4  fmr 31, 0
  06263c8  clrldi 9, 9, 32
  06263cc  lis 0, 257
  06263d0  mr 3, 31
  06263d4  ori 0, 0, 31357
  06263d8  addi 4, 1, 112
  06263dc  stfs 31, 0(9)
  06263e0  stw 0, 112(1)
  06263e4  bl 0x6486f8
  06263e8  nop
  06263ec  ld 0, 176(1)
  06263f0  ld 30, 136(1)
  06263f4  ld 31, 144(1)
  06263f8  mtlr 0
  06263fc  lfd 31, 152(1)
  0626400  addi 1, 1, 160
  0626404  blr
  0626408  lfs 0, -32552(30)
  062640c  fcmpu 7, 31, 0
  0626410  bf 29, 0x6263c8
  0626414  b 0x6263c4
  0626418  extsw 4, 3
  062641c  lwz 3, -32564(30)
  0626420  bl 0x5cd098
  0626424  nop
  0626428  b 0x6263ac

FUN_00626434:   # 0x626434, 0xc8 bytes
  0626434  cmpwi 7, 3, 0
  0626438  mflr 0
  062643c  stdu 1, -144(1)
  0626440  stfd 31, 136(1)
  0626444  li 5, 4006
  0626448  std 30, 120(1)
  062644c  fmr 31, 1
  0626450  std 31, 128(1)
  0626454  std 0, 160(1)
  0626458  lwz 30, -29432(2)
  062645c  mr 31, 3
  0626460  bt 30, 0x62648c
  0626464  lfs 1, -32544(30)
  0626468  clrldi 3, 31, 32
  062646c  ld 0, 160(1)
  0626470  fdivs 1, 31, 1
  0626474  ld 30, 120(1)
  0626478  ld 31, 128(1)
  062647c  mtlr 0
  0626480  lfd 31, 136(1)
  0626484  addi 1, 1, 144
  0626488  b 0x626354
  062648c  lwz 3, -32624(30)
  0626490  lwz 4, -32628(30)
  0626494  bl 0x61948c
  0626498  nop
  062649c  lwz 9, -32620(30)
  06264a0  lbz 0, 0(9)
  06264a4  cmpwi 7, 0, 0
  06264a8  bf 30, 0x6264e0
  06264ac  lwz 9, -32616(30)
  06264b0  clrldi 3, 31, 32
  06264b4  lbz 0, 0(9)
  06264b8  twnei 0, 0
  06264bc  lfs 1, -32544(30)
  06264c0  ld 0, 160(1)
  06264c4  fdivs 1, 31, 1
  06264c8  ld 30, 120(1)
  06264cc  ld 31, 128(1)
  06264d0  mtlr 0
  06264d4  lfd 31, 136(1)
  06264d8  addi 1, 1, 144
  06264dc  b 0x626354
  06264e0  ld 0, 160(1)
  06264e4  ld 30, 120(1)
  06264e8  ld 31, 128(1)
  06264ec  mtlr 0
  06264f0  lfd 31, 136(1)
  06264f4  addi 1, 1, 144
  06264f8  blr

FUN_006264fc:   # 0x6264fc, 0x164 bytes
  06264fc  stdu 1, -176(1)
  0626500  mflr 0
  0626504  mr 9, 3
  0626508  std 0, 192(1)
  062650c  lwz 3, 112(3)
  0626510  std 30, 160(1)
  0626514  cmpwi 7, 3, 0
  0626518  lwz 30, -29432(2)
  062651c  std 29, 152(1)
  0626520  std 31, 168(1)
  0626524  bt 30, 0x626658
  0626528  lis 9, 3073
  062652c  clrldi 31, 3, 32
  0626530  ori 9, 9, 54332
  0626534  addi 29, 1, 128
  0626538  li 0, 0
  062653c  stw 9, 116(1)
  0626540  stw 0, 128(1)
  0626544  mr 3, 31
  0626548  addi 4, 1, 116
  062654c  mr 5, 29
  0626550  bl 0x648730
  0626554  nop
  0626558  cmpwi 7, 3, 0
  062655c  bf 30, 0x626630
  0626560  lwz 11, 128(1)
  0626564  cmpwi 7, 11, 0
  0626568  bt 30, 0x6265a8
  062656c  lwz 9, -32592(30)
  0626570  lbz 0, 0(9)
  0626574  cmpwi 7, 0, 0
  0626578  bt 30, 0x626618
  062657c  clrldi 9, 11, 32
  0626580  lwz 0, 12(9)
  0626584  ori 0, 0, 16
  0626588  stw 0, 12(9)
  062658c  lis 0, 3073
  0626590  mr 3, 31
  0626594  ori 0, 0, 54332
  0626598  addi 4, 1, 120
  062659c  stw 0, 120(1)
  06265a0  bl 0x6486f8
  06265a4  nop
  06265a8  lis 0, 3329
  06265ac  mr 5, 29
  06265b0  ori 0, 0, 14738
  06265b4  mr 3, 31
  06265b8  stw 0, 124(1)
  06265bc  addi 4, 1, 124
  06265c0  bl 0x648730
  06265c4  nop
  06265c8  cmpwi 7, 3, 0
  06265cc  mr 4, 3
  06265d0  bf 30, 0x626644
  06265d4  lwz 0, 128(1)
  06265d8  cmpwi 7, 0, 0
  06265dc  bt 30, 0x6265fc
  06265e0  lis 0, 3329
  06265e4  mr 3, 31
  06265e8  ori 0, 0, 14738
  06265ec  addi 4, 1, 112
  06265f0  stw 0, 112(1)
  06265f4  bl 0x6486f8
  06265f8  nop
  06265fc  ld 0, 192(1)
  0626600  ld 29, 152(1)
  0626604  ld 30, 160(1)
  0626608  mtlr 0
  062660c  ld 31, 168(1)
  0626610  addi 1, 1, 176
  0626614  blr
  0626618  clrldi 9, 11, 32
  062661c  lwz 0, 12(9)
  0626620  rlwinm 0, 0, 27, 1, 31
  0626624  rotlwi 0, 0, 5
  0626628  stw 0, 12(9)
  062662c  b 0x62658c
  0626630  extsw 4, 3
  0626634  lwz 3, -32536(30)
  0626638  bl 0x5cd098
  062663c  nop
  0626640  b 0x626560
  0626644  lwz 3, -32532(30)
  0626648  extsw 4, 4
  062664c  bl 0x5cd098
  0626650  nop
  0626654  b 0x6265d4
  0626658  lwz 3, 108(9)
  062665c  b 0x626528

FUN_00626670:   # 0x626670, 0x1d4 bytes
  0626670  cmpwi 7, 3, 0
  0626674  mflr 0
  0626678  stdu 1, -240(1)
  062667c  std 22, 160(1)
  0626680  std 23, 168(1)
  0626684  std 24, 176(1)
  0626688  std 30, 224(1)
  062668c  std 31, 232(1)
  0626690  std 19, 136(1)
  0626694  std 20, 144(1)
  0626698  std 21, 152(1)
  062669c  std 25, 184(1)
  06266a0  std 26, 192(1)
  06266a4  std 27, 200(1)
  06266a8  std 28, 208(1)
  06266ac  std 29, 216(1)
  06266b0  std 0, 256(1)
  06266b4  lwz 30, -29432(2)
  06266b8  mr 31, 3
  06266bc  mr 22, 4
  06266c0  mr 23, 5
  06266c4  mr 24, 6
  06266c8  bt 30, 0x6267f8
  06266cc  cmplwi 7, 6, 3
  06266d0  bt 29, 0x6267f8
  06266d4  clrldi 3, 31, 32
  06266d8  bl 0x62519c
  06266dc  cmpwi 7, 3, 0
  06266e0  bt 28, 0x6267b4
  06266e4  slwi 9, 3, 4
  06266e8  lwz 11, -32724(30)
  06266ec  li 0, 0
  06266f0  extsw 9, 9
  06266f4  stw 0, 112(1)
  06266f8  addi 4, 1, 112
  06266fc  lwzx 0, 11, 9
  0626700  mr 3, 0
  0626704  mr 26, 0
  0626708  bl 0x647ed0
  062670c  nop
  0626710  lwz 28, 112(1)
  0626714  cmpwi 7, 28, 0
  0626718  bt 30, 0x6267b4
  062671c  lwz 19, -32576(30)
  0626720  li 25, 0
  0626724  li 27, 0
  0626728  li 29, 0
  062672c  li 20, 0
  0626730  li 21, 1
  0626734  add 0, 29, 23
  0626738  cmplw 7, 24, 27
  062673c  addi 4, 27, 2
  0626740  add 9, 29, 22
  0626744  clrldi 8, 0, 32
  0626748  add 0, 28, 29
  062674c  clrldi 10, 9, 32
  0626750  clrldi 11, 0, 32
  0626754  mr 31, 27
  0626758  mr 0, 4
  062675c  mr 3, 26
  0626760  clrldi 4, 4, 32
  0626764  bf 29, 0x62682c
  0626768  lwz 0, 0(8)
  062676c  lfs 0, 0(10)
  0626770  slwi 0, 0, 2
  0626774  stfs 0, 72(11)
  0626778  extsw 0, 0
  062677c  lwzx 5, 19, 0
  0626780  bl 0x648b10
  0626784  nop
  0626788  addi 27, 27, 1
  062678c  addi 0, 31, 3
  0626790  cmpdi 7, 27, 3
  0626794  slw 0, 21, 0
  0626798  addi 29, 29, 4
  062679c  or 25, 25, 0
  06267a0  bf 30, 0x626734
  06267a4  mr 3, 26
  06267a8  clrldi 4, 25, 32
  06267ac  bl 0x647f34
  06267b0  nop
  06267b4  ld 0, 256(1)
  06267b8  ld 19, 136(1)
  06267bc  ld 20, 144(1)
  06267c0  mtlr 0
  06267c4  ld 21, 152(1)
  06267c8  ld 22, 160(1)
  06267cc  ld 23, 168(1)
  06267d0  ld 24, 176(1)
  06267d4  ld 25, 184(1)
  06267d8  ld 26, 192(1)
  06267dc  ld 27, 200(1)
  06267e0  ld 28, 208(1)
  06267e4  ld 29, 216(1)
  06267e8  ld 30, 224(1)
  06267ec  ld 31, 232(1)
  06267f0  addi 1, 1, 240
  06267f4  blr
  06267f8  lwz 3, -32624(30)
  06267fc  li 5, 4727
  0626800  lwz 4, -32628(30)
  0626804  bl 0x61948c
  0626808  nop
  062680c  lwz 9, -32620(30)
  0626810  lbz 0, 0(9)
  0626814  cmpwi 7, 0, 0
  0626818  bf 30, 0x6267b4
  062681c  lwz 9, -32616(30)
  0626820  lbz 0, 0(9)
  0626824  twnei 0, 0
  0626828  b 0x6266d4
  062682c  clrldi 4, 0, 32
  0626830  mr 3, 26
  0626834  stw 20, 72(11)
  0626838  bl 0x64842c
  062683c  nop
  0626840  b 0x626788

FUN_00626844:   # 0x626844, 0x40 bytes
  0626844  stdu 1, -128(1)
  0626848  mflr 0
  062684c  mr 11, 8
  0626850  std 0, 144(1)
  0626854  mr 0, 7
  0626858  mr 10, 9
  062685c  mr 8, 0
  0626860  mr 7, 6
  0626864  mr 9, 11
  0626868  li 4, 0
  062686c  bl 0x623578
  0626870  nop
  0626874  ld 0, 144(1)
  0626878  addi 1, 1, 128
  062687c  mtlr 0
  0626880  blr

FUN_00626884:   # 0x626884, 0x1b8 bytes
  0626884  cmpwi 7, 3, 0
  0626888  mflr 0
  062688c  stdu 1, -208(1)
  0626890  std 29, 184(1)
  0626894  std 30, 192(1)
  0626898  std 31, 200(1)
  062689c  std 0, 224(1)
  06268a0  lwz 30, -29432(2)
  06268a4  li 5, 4494
  06268a8  mr 31, 3
  06268ac  mr 29, 4
  06268b0  cmpwi 6, 4, 0
  06268b4  bt 30, 0x626a0c
  06268b8  bt 26, 0x626a0c
  06268bc  lwz 0, 0(29)
  06268c0  clrldi 3, 31, 32
  06268c4  lfs 3, 48(29)
  06268c8  lfs 0, 4(29)
  06268cc  lfs 13, 8(29)
  06268d0  lfs 12, 12(29)
  06268d4  lfs 11, 16(29)
  06268d8  lfs 10, 20(29)
  06268dc  lfs 9, 24(29)
  06268e0  lfs 8, 28(29)
  06268e4  lfs 7, 32(29)
  06268e8  lfs 6, 36(29)
  06268ec  lfs 5, 40(29)
  06268f0  lfs 4, 44(29)
  06268f4  stw 0, 116(1)
  06268f8  stfs 0, 120(1)
  06268fc  stfs 13, 124(1)
  0626900  stfs 12, 128(1)
  0626904  stfs 11, 132(1)
  0626908  stfs 10, 136(1)
  062690c  stfs 9, 140(1)
  0626910  stfs 8, 144(1)
  0626914  stfs 7, 148(1)
  0626918  stfs 6, 152(1)
  062691c  stfs 5, 156(1)
  0626920  stfs 4, 160(1)
  0626924  stfs 3, 164(1)
  0626928  bl 0x62519c
  062692c  cmpwi 7, 3, 0
  0626930  slwi 0, 3, 4
  0626934  addi 4, 1, 112
  0626938  extsw 11, 0
  062693c  bt 28, 0x6269f0
  0626940  lwz 9, -32724(30)
  0626944  li 0, 0
  0626948  stw 0, 112(1)
  062694c  lwzx 29, 9, 11
  0626950  mr 3, 29
  0626954  bl 0x647ed0
  0626958  nop
  062695c  lwz 11, 112(1)
  0626960  cmpwi 7, 11, 0
  0626964  addi 9, 11, 12
  0626968  addi 0, 1, 116
  062696c  clrldi 8, 9, 32
  0626970  clrldi 7, 0, 32
  0626974  mr 3, 29
  0626978  li 4, 2
  062697c  bt 30, 0x6269f0
  0626980  lwz 0, 0(7)
  0626984  lwz 9, 4(7)
  0626988  lwz 11, 8(7)
  062698c  lwz 10, 12(7)
  0626990  stw 0, 0(8)
  0626994  stw 9, 4(8)
  0626998  stw 11, 8(8)
  062699c  stw 10, 12(8)
  06269a0  lwz 0, 16(7)
  06269a4  lwz 9, 20(7)
  06269a8  lwz 11, 24(7)
  06269ac  lwz 10, 28(7)
  06269b0  stw 0, 16(8)
  06269b4  stw 9, 20(8)
  06269b8  stw 11, 24(8)
  06269bc  stw 10, 28(8)
  06269c0  lwz 0, 32(7)
  06269c4  lwz 9, 36(7)
  06269c8  lwz 11, 40(7)
  06269cc  lwz 10, 44(7)
  06269d0  stw 0, 32(8)
  06269d4  stw 9, 36(8)
  06269d8  stw 11, 40(8)
  06269dc  stw 10, 44(8)
  06269e0  lwz 0, 48(7)
  06269e4  stw 0, 48(8)
  06269e8  bl 0x647f34
  06269ec  nop
  06269f0  ld 0, 224(1)
  06269f4  ld 29, 184(1)
  06269f8  ld 30, 192(1)
  06269fc  mtlr 0
  0626a00  ld 31, 200(1)
  0626a04  addi 1, 1, 208
  0626a08  blr
  0626a0c  lwz 4, -32628(30)
  0626a10  lwz 3, -32624(30)
  0626a14  bl 0x61948c
  0626a18  nop
  0626a1c  lwz 9, -32620(30)
  0626a20  lbz 0, 0(9)
  0626a24  cmpwi 7, 0, 0
  0626a28  bf 30, 0x6269f0
  0626a2c  lwz 9, -32616(30)
  0626a30  lbz 0, 0(9)
  0626a34  twnei 0, 0
  0626a38  b 0x6268bc

FUN_00626a3c:   # 0x626a3c, 0x178 bytes
  0626a3c  cmpwi 7, 3, 0
  0626a40  mflr 0
  0626a44  stdu 1, -192(1)
  0626a48  std 28, 160(1)
  0626a4c  std 29, 168(1)
  0626a50  std 30, 176(1)
  0626a54  std 24, 128(1)
  0626a58  std 25, 136(1)
  0626a5c  std 26, 144(1)
  0626a60  std 27, 152(1)
  0626a64  std 0, 208(1)
  0626a68  lwz 30, -29432(2)
  0626a6c  li 5, 4452
  0626a70  mr 29, 3
  0626a74  mr 28, 4
  0626a78  cmplwi 6, 4, 33
  0626a7c  bt 30, 0x626b84
  0626a80  bt 25, 0x626b84
  0626a84  clrldi 3, 29, 32
  0626a88  bl 0x62519c
  0626a8c  addi 4, 1, 112
  0626a90  cmpwi 7, 3, 0
  0626a94  slwi 0, 3, 4
  0626a98  extsw 11, 0
  0626a9c  bt 28, 0x626b58
  0626aa0  lwz 9, -32724(30)
  0626aa4  li 0, 0
  0626aa8  stw 0, 112(1)
  0626aac  lwzx 29, 9, 11
  0626ab0  mr 3, 29
  0626ab4  bl 0x647ed0
  0626ab8  nop
  0626abc  lwz 9, 112(1)
  0626ac0  cmpwi 7, 9, 0
  0626ac4  addi 0, 9, 12
  0626ac8  mr 3, 29
  0626acc  clrldi 12, 0, 32
  0626ad0  li 4, 2
  0626ad4  bt 30, 0x626b58
  0626ad8  lwz 0, -32528(30)
  0626adc  mulli 9, 28, 52
  0626ae0  add 9, 9, 0
  0626ae4  clrldi 9, 9, 32
  0626ae8  lwz 0, 48(9)
  0626aec  lwz 11, 0(9)
  0626af0  lwz 10, 4(9)
  0626af4  lwz 8, 8(9)
  0626af8  lwz 7, 12(9)
  0626afc  lwz 6, 16(9)
  0626b00  lwz 5, 20(9)
  0626b04  lwz 29, 24(9)
  0626b08  lwz 28, 28(9)
  0626b0c  lwz 27, 32(9)
  0626b10  lwz 26, 36(9)
  0626b14  lwz 25, 40(9)
  0626b18  lwz 24, 44(9)
  0626b1c  stw 0, 48(12)
  0626b20  stw 11, 0(12)
  0626b24  stw 10, 4(12)
  0626b28  stw 8, 8(12)
  0626b2c  stw 7, 12(12)
  0626b30  stw 6, 16(12)
  0626b34  stw 5, 20(12)
  0626b38  stw 29, 24(12)
  0626b3c  stw 28, 28(12)
  0626b40  stw 27, 32(12)
  0626b44  stw 26, 36(12)
  0626b48  stw 25, 40(12)
  0626b4c  stw 24, 44(12)
  0626b50  bl 0x647f34
  0626b54  nop
  0626b58  ld 0, 208(1)
  0626b5c  ld 24, 128(1)
  0626b60  ld 25, 136(1)
  0626b64  mtlr 0
  0626b68  ld 26, 144(1)
  0626b6c  ld 27, 152(1)
  0626b70  ld 28, 160(1)
  0626b74  ld 29, 168(1)
  0626b78  ld 30, 176(1)
  0626b7c  addi 1, 1, 192
  0626b80  blr
  0626b84  lwz 4, -32628(30)
  0626b88  lwz 3, -32624(30)
  0626b8c  bl 0x61948c
  0626b90  nop
  0626b94  lwz 9, -32620(30)
  0626b98  lbz 0, 0(9)
  0626b9c  cmpwi 7, 0, 0
  0626ba0  bf 30, 0x626b58
  0626ba4  lwz 9, -32616(30)
  0626ba8  lbz 0, 0(9)
  0626bac  twnei 0, 0
  0626bb0  b 0x626a84

FUN_00626bb4:   # 0x626bb4, 0x100 bytes
  0626bb4  cmpwi 7, 3, 0
  0626bb8  mflr 0
  0626bbc  stdu 1, -144(1)
  0626bc0  std 29, 120(1)
  0626bc4  std 30, 128(1)
  0626bc8  std 28, 112(1)
  0626bcc  std 31, 136(1)
  0626bd0  std 0, 160(1)
  0626bd4  lwz 30, -29432(2)
  0626bd8  li 5, 4389
  0626bdc  mr 29, 3
  0626be0  bf 30, 0x626c10
  0626be4  lwz 4, -32628(30)
  0626be8  lwz 3, -32624(30)
  0626bec  bl 0x61948c
  0626bf0  nop
  0626bf4  lwz 9, -32620(30)
  0626bf8  lbz 0, 0(9)
  0626bfc  cmpwi 7, 0, 0
  0626c00  bf 30, 0x626c94
  0626c04  lwz 9, -32616(30)
  0626c08  lbz 0, 0(9)
  0626c0c  twnei 0, 0
  0626c10  clrldi 3, 29, 32
  0626c14  bl 0x62519c
  0626c18  cmpwi 7, 3, 0
  0626c1c  slwi 0, 3, 4
  0626c20  extsw 11, 0
  0626c24  bt 28, 0x626c94
  0626c28  lwz 10, -32724(30)
  0626c2c  li 4, 0
  0626c30  add 31, 11, 10
  0626c34  lwz 0, 8(31)
  0626c38  cmpwi 7, 0, 0
  0626c3c  slwi 9, 0, 2
  0626c40  extsw 0, 9
  0626c44  bt 28, 0x626c94
  0626c48  lwz 9, -32576(30)
  0626c4c  lwzx 28, 10, 11
  0626c50  lwzx 29, 9, 0
  0626c54  mr 3, 29
  0626c58  bl 0x647dd0
  0626c5c  nop
  0626c60  mr 3, 29
  0626c64  li 4, 1
  0626c68  bl 0x64842c
  0626c6c  nop
  0626c70  li 4, 0
  0626c74  mr 3, 28
  0626c78  bl 0x647dd0
  0626c7c  nop
  0626c80  mr 3, 28
  0626c84  bl 0x648588
  0626c88  nop
  0626c8c  li 0, -1
  0626c90  stw 0, 8(31)
  0626c94  ld 0, 160(1)
  0626c98  ld 28, 112(1)
  0626c9c  ld 29, 120(1)
  0626ca0  mtlr 0
  0626ca4  ld 30, 128(1)
  0626ca8  ld 31, 136(1)
  0626cac  addi 1, 1, 144
  0626cb0  blr

snd_SynthLR1Insert:   # 0x626cb4, 0x1cc bytes
  0626cb4  cmpwi 7, 3, 0
  0626cb8  mflr 0
  0626cbc  stdu 1, -176(1)
  0626cc0  std 28, 144(1)
  0626cc4  std 29, 152(1)
  0626cc8  std 30, 160(1)
  0626ccc  std 26, 128(1)
  0626cd0  std 27, 136(1)
  0626cd4  std 31, 168(1)
  0626cd8  std 0, 192(1)
  0626cdc  lwz 30, -29432(2)
  0626ce0  mr 28, 3
  0626ce4  mr 29, 4
  0626ce8  bt 30, 0x626d40
  0626cec  cmplwi 7, 4, 7
  0626cf0  bt 29, 0x626d40
  0626cf4  clrldi 31, 29, 32
  0626cf8  mr 3, 31
  0626cfc  bl 0x624590
  0626d00  cmpwi 7, 3, 0
  0626d04  bt 28, 0x626d84
  0626d08  lwz 3, -32524(30)
  0626d0c  mr 4, 31
  0626d10  bl 0x61948c
  0626d14  nop
  0626d18  ld 0, 192(1)
  0626d1c  ld 26, 128(1)
  0626d20  ld 27, 136(1)
  0626d24  mtlr 0
  0626d28  ld 28, 144(1)
  0626d2c  ld 29, 152(1)
  0626d30  ld 30, 160(1)
  0626d34  ld 31, 168(1)
  0626d38  addi 1, 1, 176
  0626d3c  blr
  0626d40  lwz 3, -32624(30)
  0626d44  li 5, 4330
  0626d48  lwz 4, -32628(30)
  0626d4c  bl 0x61948c
  0626d50  nop
  0626d54  lwz 9, -32620(30)
  0626d58  lbz 0, 0(9)
  0626d5c  cmpwi 7, 0, 0
  0626d60  bf 30, 0x626d18
  0626d64  lwz 9, -32616(30)
  0626d68  clrldi 31, 29, 32
  0626d6c  mr 3, 31
  0626d70  lbz 0, 0(9)
  0626d74  twnei 0, 0
  0626d78  bl 0x624590
  0626d7c  cmpwi 7, 3, 0
  0626d80  bf 28, 0x626d08
  0626d84  clrldi 3, 28, 32
  0626d88  bl 0x62519c
  0626d8c  cmpwi 7, 3, 0
  0626d90  bt 28, 0x626d18
  0626d94  slwi 0, 3, 4
  0626d98  lwz 11, -32724(30)
  0626d9c  slwi 9, 29, 2
  0626da0  lwz 27, -32576(30)
  0626da4  extsw 0, 0
  0626da8  extsw 31, 9
  0626dac  add 9, 0, 11
  0626db0  li 4, 1
  0626db4  li 26, 0
  0626db8  lwzx 28, 11, 0
  0626dbc  lwzx 3, 27, 31
  0626dc0  mr 5, 28
  0626dc4  stw 29, 8(9)
  0626dc8  bl 0x648b10
  0626dcc  nop
  0626dd0  addi 0, 1, 112
  0626dd4  lwzx 3, 27, 31
  0626dd8  clrldi 29, 0, 32
  0626ddc  stw 26, 112(1)
  0626de0  mr 4, 29
  0626de4  bl 0x647ed0
  0626de8  nop
  0626dec  lwz 9, 112(1)
  0626df0  cmpwi 7, 9, 0
  0626df4  bt 30, 0x626e18
  0626df8  clrldi 9, 9, 32
  0626dfc  lfs 0, -32612(30)
  0626e00  lwzx 3, 27, 31
  0626e04  li 4, 0
  0626e08  li 5, 0
  0626e0c  stfs 0, 0(9)
  0626e10  bl 0x647fa0
  0626e14  nop
  0626e18  lwz 9, -32672(30)
  0626e1c  li 4, 1
  0626e20  mr 3, 28
  0626e24  lwz 5, 0(9)
  0626e28  bl 0x648b10
  0626e2c  nop
  0626e30  mr 4, 29
  0626e34  mr 3, 28
  0626e38  stw 26, 112(1)
  0626e3c  bl 0x647ed0
  0626e40  nop
  0626e44  mr 3, 28
  0626e48  li 4, 0
  0626e4c  li 5, 0
  0626e50  bl 0x647fa0
  0626e54  nop
  0626e58  ld 0, 192(1)
  0626e5c  ld 26, 128(1)
  0626e60  ld 27, 136(1)
  0626e64  mtlr 0
  0626e68  ld 28, 144(1)
  0626e6c  ld 29, 152(1)
  0626e70  ld 30, 160(1)
  0626e74  ld 31, 168(1)
  0626e78  addi 1, 1, 176
  0626e7c  blr

snd_SynthLR1Destroy:   # 0x626e80, 0x180 bytes
  0626e80  cmpwi 7, 3, 0
  0626e84  mflr 0
  0626e88  stdu 1, -144(1)
  0626e8c  std 28, 112(1)
  0626e90  std 29, 120(1)
  0626e94  std 30, 128(1)
  0626e98  std 31, 136(1)
  0626e9c  std 0, 160(1)
  0626ea0  lwz 30, -29432(2)
  0626ea4  mr 29, 3
  0626ea8  mr 28, 4
  0626eac  bt 30, 0x626fbc
  0626eb0  clrlwi 31, 28, 24
  0626eb4  cmpwi 7, 31, 0
  0626eb8  bf 30, 0x626ecc
  0626ebc  lwz 9, -32720(30)
  0626ec0  lwz 0, 0(9)
  0626ec4  cmpwi 7, 0, 0
  0626ec8  bt 30, 0x626ff0
  0626ecc  clrldi 29, 29, 32
  0626ed0  mr 3, 29
  0626ed4  bl 0x626bb4
  0626ed8  mr 3, 29
  0626edc  bl 0x62519c
  0626ee0  cmpwi 7, 3, 0
  0626ee4  bt 28, 0x626f5c
  0626ee8  slwi 7, 3, 4
  0626eec  lwz 8, -32724(30)
  0626ef0  cmpwi 7, 31, 0
  0626ef4  extsw 10, 7
  0626ef8  li 11, 0
  0626efc  add 9, 10, 8
  0626f00  li 0, -1
  0626f04  lwz 3, 4(9)
  0626f08  stw 0, 8(9)
  0626f0c  stb 11, 12(9)
  0626f10  stb 11, 13(9)
  0626f14  stw 11, 4(9)
  0626f18  bf 30, 0x626f7c
  0626f1c  extsw 0, 7
  0626f20  lwz 5, -32516(30)
  0626f24  clrldi 3, 3, 32
  0626f28  clrldi 4, 28, 56
  0626f2c  clrldi 5, 5, 32
  0626f30  lwzx 6, 8, 0
  0626f34  bl 0x643884
  0626f38  nop
  0626f3c  cmpwi 7, 3, 0
  0626f40  bf 30, 0x626fa8
  0626f44  cmpwi 7, 31, 0
  0626f48  bt 30, 0x626f5c
  0626f4c  lwz 11, -32716(30)
  0626f50  lwz 9, 0(11)
  0626f54  addi 9, 9, -1
  0626f58  stw 9, 0(11)
  0626f5c  ld 0, 160(1)
  0626f60  ld 28, 112(1)
  0626f64  ld 29, 120(1)
  0626f68  mtlr 0
  0626f6c  ld 30, 128(1)
  0626f70  ld 31, 136(1)
  0626f74  addi 1, 1, 144
  0626f78  blr
  0626f7c  extsw 0, 7
  0626f80  li 5, 0
  0626f84  stwx 11, 8, 10
  0626f88  clrldi 3, 3, 32
  0626f8c  clrldi 4, 28, 56
  0626f90  clrldi 5, 5, 32
  0626f94  lwzx 6, 8, 0
  0626f98  bl 0x643884
  0626f9c  nop
  0626fa0  cmpwi 7, 3, 0
  0626fa4  bt 30, 0x626f44
  0626fa8  extsw 4, 3
  0626fac  lwz 3, -32512(30)
  0626fb0  bl 0x5cd098
  0626fb4  nop
  0626fb8  b 0x626f44
  0626fbc  lwz 3, -32624(30)
  0626fc0  li 5, 4269
  0626fc4  lwz 4, -32628(30)
  0626fc8  bl 0x61948c
  0626fcc  nop
  0626fd0  lwz 9, -32620(30)
  0626fd4  lbz 0, 0(9)
  0626fd8  cmpwi 7, 0, 0
  0626fdc  bf 30, 0x626f5c
  0626fe0  lwz 9, -32616(30)
  0626fe4  lbz 0, 0(9)
  0626fe8  twnei 0, 0
  0626fec  b 0x626eb0
  0626ff0  lwz 3, -32520(30)
  0626ff4  bl 0x61948c
  0626ff8  nop
  0626ffc  b 0x626f5c

snd_SynthGetFreeVoiceBufferId:   # 0x627000, 0x1c0 bytes
  0627000  cmpdi 3, 0
  0627004  mflr 0
  0627008  stdu 1, -160(1)
  062700c  std 29, 136(1)
  0627010  std 30, 144(1)
  0627014  std 28, 128(1)
  0627018  std 31, 152(1)
  062701c  std 0, 176(1)
  0627020  lwz 30, -29432(2)
  0627024  mr 29, 3
  0627028  bt 2, 0x627074
  062702c  lwz 31, 108(29)
  0627030  mr 28, 29
  0627034  lwz 9, 20(31)
  0627038  lwz 11, 16(31)
  062703c  lwz 10, 36(9)
  0627040  lwz 0, 16(11)
  0627044  cmpw 7, 10, 0
  0627048  bt- 30, 0x62708c
  062704c  li 3, -1
  0627050  ld 0, 176(1)
  0627054  extsw 3, 3
  0627058  ld 28, 128(1)
  062705c  ld 29, 136(1)
  0627060  mtlr 0
  0627064  ld 30, 144(1)
  0627068  ld 31, 152(1)
  062706c  addi 1, 1, 160
  0627070  blr
  0627074  lwz 3, -32508(30)
  0627078  li 5, 3121
  062707c  lwz 4, -32628(30)
  0627080  bl 0x61948c
  0627084  nop
  0627088  b 0x62702c
  062708c  bl 0x640c9c
  0627090  nop
  0627094  mr 29, 3
  0627098  bl 0x6246bc
  062709c  lwz 0, 100(28)
  06270a0  sub 29, 29, 0
  06270a4  cmpw 7, 29, 3
  06270a8  bt 28, 0x62704c
  06270ac  li 0, 0
  06270b0  stw 0, 124(1)
  06270b4  lbz 0, 104(28)
  06270b8  cmpwi 7, 0, 2
  06270bc  bt 30, 0x627114
  06270c0  cmpwi 7, 0, 3
  06270c4  bt 30, 0x627114
  06270c8  cmpwi 7, 0, 4
  06270cc  bt 30, 0x627158
  06270d0  lis 0, 1
  06270d4  mr 3, 31
  06270d8  ori 0, 0, 7247
  06270dc  addi 4, 1, 112
  06270e0  stw 0, 112(1)
  06270e4  addi 5, 1, 124
  06270e8  bl 0x6487c0
  06270ec  nop
  06270f0  cmpwi 7, 3, 0
  06270f4  mr 4, 3
  06270f8  bf 30, 0x627198
  06270fc  lwz 9, 124(1)
  0627100  lwz 0, 92(9)
  0627104  cmpwi 7, 0, 0
  0627108  bf 30, 0x62704c
  062710c  lwz 3, 96(28)
  0627110  b 0x627050
  0627114  lis 0, 1
  0627118  mr 3, 31
  062711c  ori 0, 0, 64688
  0627120  addi 4, 1, 120
  0627124  stw 0, 120(1)
  0627128  addi 5, 1, 124
  062712c  bl 0x6487c0
  0627130  nop
  0627134  cmpwi 7, 3, 0
  0627138  mr 4, 3
  062713c  bf 30, 0x6271ac
  0627140  lwz 9, 124(1)
  0627144  lwz 0, 452(9)
  0627148  cmpwi 7, 0, 0
  062714c  bf 30, 0x62704c
  0627150  lwz 3, 96(28)
  0627154  b 0x627050
  0627158  lis 0, 1
  062715c  mr 3, 31
  0627160  ori 0, 0, 1
  0627164  addi 4, 1, 116
  0627168  stw 0, 116(1)
  062716c  addi 5, 1, 124
  0627170  bl 0x6487c0
  0627174  nop
  0627178  cmpwi 7, 3, 0
  062717c  mr 4, 3
  0627180  bt 30, 0x627140
  0627184  lwz 3, -32500(30)
  0627188  extsw 4, 4
  062718c  bl 0x5cd098
  0627190  nop
  0627194  b 0x627140
  0627198  lwz 3, -32496(30)
  062719c  extsw 4, 4
  06271a0  bl 0x5cd098
  06271a4  nop
  06271a8  b 0x6270fc
  06271ac  lwz 3, -32504(30)
  06271b0  extsw 4, 4
  06271b4  bl 0x5cd098
  06271b8  nop
  06271bc  b 0x627140

FUN_006271cc:   # 0x6271cc, 0x28 bytes
  06271cc  stdu 1, -128(1)
  06271d0  mflr 0
  06271d4  std 0, 144(1)
  06271d8  bl 0x640c9c
  06271dc  nop
  06271e0  ld 0, 144(1)
  06271e4  clrldi 3, 3, 32
  06271e8  mtlr 0
  06271ec  addi 1, 1, 128
  06271f0  blr

snd_SynthUnlock:   # 0x6271f4, 0x24 bytes
  06271f4  stdu 1, -128(1)
  06271f8  mflr 0
  06271fc  std 0, 144(1)
  0627200  bl 0x62fca0
  0627204  nop
  0627208  ld 0, 144(1)
  062720c  addi 1, 1, 128
  0627210  mtlr 0
  0627214  blr

FUN_00627218:   # 0x627218, 0xd0 bytes
  0627218  stdu 1, -160(1)
  062721c  mflr 0
  0627220  std 31, 152(1)
  0627224  mr 31, 3
  0627228  std 0, 176(1)
  062722c  std 30, 144(1)
  0627230  lwz 30, -29432(2)
  0627234  lwz 5, 20(3)
  0627238  lwz 4, 16(31)
  062723c  lwz 3, 12(3)
  0627240  extsw 5, 5
  0627244  std 27, 120(1)
  0627248  std 28, 128(1)
  062724c  std 29, 136(1)
  0627250  lwz 27, 4(31)
  0627254  lwz 28, 8(31)
  0627258  lwz 29, 24(31)
  062725c  bl 0x617938
  0627260  nop
  0627264  lwz 9, -32492(30)
  0627268  clrldi 3, 27, 32
  062726c  clrldi 4, 28, 32
  0627270  clrldi 5, 29, 32
  0627274  lwz 0, 0(9)
  0627278  cmpwi 7, 0, 0
  062727c  clrldi 9, 0, 32
  0627280  bt 30, 0x6272a8
  0627284  lwz 9, 8(9)
  0627288  lwz 6, 20(31)
  062728c  extsw 6, 6
  0627290  lwz 0, 0(9)
  0627294  std 2, 40(1)
  0627298  mtctr 0
  062729c  lwz 2, 4(9)
  06272a0  bctrl
  06272a4  ld 2, 40(1)
  06272a8  lwz 9, 16(31)
  06272ac  li 0, 1
  06272b0  ld 27, 120(1)
  06272b4  stb 0, 1(31)
  06272b8  ld 28, 128(1)
  06272bc  ld 29, 136(1)
  06272c0  lwz 0, 8(9)
  06272c4  ld 30, 144(1)
  06272c8  rlwinm 0, 0, 21, 1, 31
  06272cc  ld 31, 152(1)
  06272d0  rotlwi 0, 0, 11
  06272d4  stw 0, 8(9)
  06272d8  ld 0, 176(1)
  06272dc  addi 1, 1, 160
  06272e0  mtlr 0
  06272e4  b 0x6271f4

snd_SynthLock:   # 0x6272e8, 0x24 bytes
  06272e8  stdu 1, -128(1)
  06272ec  mflr 0
  06272f0  std 0, 144(1)
  06272f4  bl 0x62fcdc
  06272f8  nop
  06272fc  ld 0, 144(1)
  0627300  addi 1, 1, 128
  0627304  mtlr 0
  0627308  blr

FUN_0062730c:   # 0x62730c, 0x28 bytes
  062730c  stdu 1, -128(1)
  0627310  mflr 0
  0627314  std 0, 144(1)
  0627318  bl 0x62fc4c
  062731c  nop
  0627320  ld 0, 144(1)
  0627324  extsw 3, 3
  0627328  mtlr 0
  062732c  addi 1, 1, 128
  0627330  blr

FUN_00627334:   # 0x627334, 0x114 bytes
  0627334  stdu 1, -160(1)
  0627338  mflr 0
  062733c  std 30, 144(1)
  0627340  lwz 30, -29432(2)
  0627344  std 31, 152(1)
  0627348  std 0, 176(1)
  062734c  std 26, 112(1)
  0627350  std 27, 120(1)
  0627354  lwz 31, -32488(30)
  0627358  std 28, 128(1)
  062735c  std 29, 136(1)
  0627360  lwz 3, 0(31)
  0627364  cmpwi 7, 3, 0
  0627368  bt 30, 0x627398
  062736c  lwz 11, -32732(30)
  0627370  clrldi 3, 3, 32
  0627374  lwz 9, 0(11)
  0627378  lwz 0, 0(9)
  062737c  std 2, 40(1)
  0627380  mtctr 0
  0627384  lwz 2, 4(9)
  0627388  bctrl
  062738c  ld 2, 40(1)
  0627390  li 0, 0
  0627394  stw 0, 0(31)
  0627398  li 29, 0
  062739c  lwz 27, -32704(30)
  06273a0  lwz 26, -32732(30)
  06273a4  li 28, 0
  06273a8  slwi 0, 29, 2
  06273ac  slwi 9, 29, 4
  06273b0  addi 29, 29, 1
  06273b4  sub 9, 9, 0
  06273b8  add 9, 9, 27
  06273bc  clrldi 31, 9, 32
  06273c0  lwz 0, 0(31)
  06273c4  cmpwi 7, 0, 0
  06273c8  clrldi 3, 0, 32
  06273cc  bt 30, 0x6273ec
  06273d0  lwz 9, 0(26)
  06273d4  lwz 0, 0(9)
  06273d8  std 2, 40(1)
  06273dc  mtctr 0
  06273e0  lwz 2, 4(9)
  06273e4  bctrl
  06273e8  ld 2, 40(1)
  06273ec  cmpdi 7, 29, 5
  06273f0  stw 28, 8(31)
  06273f4  stw 28, 4(31)
  06273f8  bf 30, 0x6273a8
  06273fc  lwz 9, -32484(30)
  0627400  lwz 3, 0(9)
  0627404  extsw 3, 3
  0627408  bl 0x63049c
  062740c  nop
  0627410  bl 0x6427e8
  0627414  nop
  0627418  bl 0x62fd18
  062741c  nop
  0627420  ld 0, 176(1)
  0627424  ld 26, 112(1)
  0627428  ld 27, 120(1)
  062742c  mtlr 0
  0627430  ld 28, 128(1)
  0627434  ld 29, 136(1)
  0627438  ld 30, 144(1)
  062743c  ld 31, 152(1)
  0627440  addi 1, 1, 160
  0627444  blr

FUN_00627448:   # 0x627448, 0x224 bytes
  0627448  stdu 1, -160(1)
  062744c  mflr 0
  0627450  std 30, 144(1)
  0627454  li 3, 0
  0627458  lwz 30, -29432(2)
  062745c  std 27, 120(1)
  0627460  std 28, 128(1)
  0627464  std 29, 136(1)
  0627468  std 31, 152(1)
  062746c  std 0, 176(1)
  0627470  bl 0x642184
  0627474  nop
  0627478  cmpwi 7, 3, 0
  062747c  bf 30, 0x6275fc
  0627480  lwz 9, -32716(30)
  0627484  lwz 0, 0(9)
  0627488  cmpwi 7, 0, 0
  062748c  bt 30, 0x6274cc
  0627490  lwz 31, -32724(30)
  0627494  addi 29, 31, 128
  0627498  b 0x6274a4
  062749c  cmpw 7, 31, 29
  06274a0  bt 30, 0x6274cc
  06274a4  clrldi 9, 31, 32
  06274a8  addi 31, 31, 16
  06274ac  li 4, 1
  06274b0  lwz 3, 0(9)
  06274b4  cmpwi 7, 3, 0
  06274b8  clrldi 3, 3, 32
  06274bc  bt 30, 0x62749c
  06274c0  bl 0x626e80
  06274c4  cmpw 7, 31, 29
  06274c8  bf 30, 0x6274a4
  06274cc  li 31, 0
  06274d0  lwz 28, -32480(30)
  06274d4  li 27, 0
  06274d8  xori 0, 31, 9
  06274dc  clrldi 29, 28, 32
  06274e0  srawi 11, 0, 31
  06274e4  li 5, 0
  06274e8  xor 9, 11, 0
  06274ec  li 6, 0
  06274f0  lwz 0, 0(29)
  06274f4  sub 9, 9, 11
  06274f8  addi 31, 31, 1
  06274fc  cmpwi 7, 0, 0
  0627500  addi 4, 9, -1
  0627504  addi 28, 28, 4
  0627508  rldicl 4, 4, 33, 63
  062750c  clrldi 3, 0, 32
  0627510  bt 30, 0x62752c
  0627514  bl 0x643884
  0627518  nop
  062751c  cmpwi 7, 3, 0
  0627520  extsw 4, 3
  0627524  bf 30, 0x6275ec
  0627528  stw 27, 0(29)
  062752c  cmpdi 7, 31, 10
  0627530  bf 30, 0x6274d8
  0627534  li 9, 16
  0627538  lwz 11, -32656(30)
  062753c  li 0, 0
  0627540  mtctr 9
  0627544  clrldi 9, 11, 32
  0627548  addi 11, 11, 4
  062754c  stw 0, 0(9)
  0627550  bdnz 0x627544
  0627554  lwz 9, -32672(30)
  0627558  lwz 11, -32652(30)
  062755c  lwz 3, -32468(30)
  0627560  stw 0, 0(9)
  0627564  stw 0, 0(11)
  0627568  bl 0x642354
  062756c  nop
  0627570  cmpwi 7, 3, 0
  0627574  bf 30, 0x627610
  0627578  lwz 3, -32460(30)
  062757c  bl 0x642354
  0627580  nop
  0627584  cmpwi 7, 3, 0
  0627588  bf 30, 0x627634
  062758c  lwz 3, -32452(30)
  0627590  bl 0x642354
  0627594  nop
  0627598  cmpwi 7, 3, 0
  062759c  bf 30, 0x627658
  06275a0  lwz 3, -32444(30)
  06275a4  bl 0x642354
  06275a8  nop
  06275ac  cmpwi 7, 3, 0
  06275b0  mr 4, 3
  06275b4  bt 30, 0x6275c8
  06275b8  lwz 3, -32440(30)
  06275bc  extsw 4, 4
  06275c0  bl 0x5cd098
  06275c4  nop
  06275c8  ld 0, 176(1)
  06275cc  ld 27, 120(1)
  06275d0  ld 28, 128(1)
  06275d4  mtlr 0
  06275d8  ld 29, 136(1)
  06275dc  ld 30, 144(1)
  06275e0  ld 31, 152(1)
  06275e4  addi 1, 1, 160
  06275e8  blr
  06275ec  lwz 3, -32472(30)
  06275f0  bl 0x5cd098
  06275f4  nop
  06275f8  b 0x627528
  06275fc  extsw 4, 3
  0627600  lwz 3, -32476(30)
  0627604  bl 0x5cd098
  0627608  nop
  062760c  b 0x627480
  0627610  extsw 4, 3
  0627614  lwz 3, -32464(30)
  0627618  bl 0x5cd098
  062761c  nop
  0627620  lwz 3, -32460(30)
  0627624  bl 0x642354
  0627628  nop
  062762c  cmpwi 7, 3, 0
  0627630  bt 30, 0x62758c
  0627634  extsw 4, 3
  0627638  lwz 3, -32456(30)
  062763c  bl 0x5cd098
  0627640  nop
  0627644  lwz 3, -32452(30)
  0627648  bl 0x642354
  062764c  nop
  0627650  cmpwi 7, 3, 0
  0627654  bt 30, 0x6275a0
  0627658  extsw 4, 3
  062765c  lwz 3, -32448(30)
  0627660  bl 0x5cd098
  0627664  nop
  0627668  b 0x6275a0

FUN_0062766c:   # 0x62766c, 0x3c bytes
  062766c  stdu 1, -128(1)
  0627670  mflr 0
  0627674  std 30, 112(1)
  0627678  lwz 30, -29432(2)
  062767c  std 0, 144(1)
  0627680  lwz 9, -32484(30)
  0627684  lwz 3, 0(9)
  0627688  extsw 3, 3
  062768c  bl 0x630388
  0627690  nop
  0627694  ld 0, 144(1)
  0627698  ld 30, 112(1)
  062769c  mtlr 0
  06276a0  addi 1, 1, 128
  06276a4  blr

FUN_006276a8:   # 0x6276a8, 0x3c bytes
  06276a8  stdu 1, -128(1)
  06276ac  mflr 0
  06276b0  std 30, 112(1)
  06276b4  lwz 30, -29432(2)
  06276b8  std 0, 144(1)
  06276bc  lwz 9, -32484(30)
  06276c0  lwz 3, 0(9)
  06276c4  extsw 3, 3
  06276c8  bl 0x6303cc
  06276cc  nop
  06276d0  ld 0, 144(1)
  06276d4  ld 30, 112(1)
  06276d8  mtlr 0
  06276dc  addi 1, 1, 128
  06276e0  blr

FUN_006276e4:   # 0x6276e4, 0x24 bytes
  06276e4  stdu 1, -128(1)
  06276e8  mflr 0
  06276ec  std 0, 144(1)
  06276f0  bl 0x641ec0
  06276f4  nop
  06276f8  ld 0, 144(1)
  06276fc  addi 1, 1, 128
  0627700  mtlr 0
  0627704  blr

FUN_00627708:   # 0x627708, 0x74 bytes
  0627708  stdu 1, -128(1)
  062770c  mflr 0
  0627710  cmpwi 7, 3, 0
  0627714  std 0, 144(1)
  0627718  slwi 0, 3, 2
  062771c  std 30, 112(1)
  0627720  cmpwi 6, 3, -1
  0627724  lwz 30, -29432(2)
  0627728  extsw 0, 0
  062772c  bt 28, 0x627760
  0627730  lwz 9, -32656(30)
  0627734  lwzx 0, 9, 0
  0627738  cmpwi 7, 0, 0
  062773c  clrldi 3, 0, 32
  0627740  bt 30, 0x62774c
  0627744  bl 0x641f84
  0627748  nop
  062774c  ld 0, 144(1)
  0627750  ld 30, 112(1)
  0627754  addi 1, 1, 128
  0627758  mtlr 0
  062775c  blr
  0627760  bt 26, 0x627770
  0627764  lwz 9, -32652(30)
  0627768  lwz 0, 0(9)
  062776c  b 0x627738
  0627770  lwz 9, -32672(30)
  0627774  lwz 0, 0(9)
  0627778  b 0x627738

FUN_0062777c:   # 0x62777c, 0xb4 bytes
  062777c  cmpwi 7, 3, 0
  0627780  mflr 0
  0627784  stdu 1, -160(1)
  0627788  std 30, 136(1)
  062778c  stfd 31, 152(1)
  0627790  std 31, 144(1)
  0627794  std 0, 176(1)
  0627798  lwz 30, -29432(2)
  062779c  bt 28, 0x6277e0
  06277a0  clrldi 0, 3, 32
  06277a4  lfs 12, -32420(30)
  06277a8  lfs 13, -32412(30)
  06277ac  std 0, 112(1)
  06277b0  lfd 11, 112(1)
  06277b4  fcfid 11, 11
  06277b8  frsp 0, 11
  06277bc  fmuls 0, 0, 12
  06277c0  fsubs 1, 13, 0
  06277c4  ld 0, 176(1)
  06277c8  ld 30, 136(1)
  06277cc  ld 31, 144(1)
  06277d0  mtlr 0
  06277d4  lfd 31, 152(1)
  06277d8  addi 1, 1, 160
  06277dc  blr
  06277e0  lis 0, 32767
  06277e4  ori 0, 0, 65535
  06277e8  add 0, 3, 0
  06277ec  cmplwi 7, 0, 9
  06277f0  bf 29, 0x627814
  06277f4  ld 0, 176(1)
  06277f8  lfs 1, -32684(30)
  06277fc  ld 30, 136(1)
  0627800  mtlr 0
  0627804  ld 31, 144(1)
  0627808  lfd 31, 152(1)
  062780c  addi 1, 1, 160
  0627810  blr
  0627814  lwz 11, -32436(30)
  0627818  rldic 9, 0, 2, 30
  062781c  lwzx 0, 9, 11
  0627820  extsw 0, 0
  0627824  add 0, 0, 11
  0627828  mtctr 0
  062782c  bctr

FUN_006279c8:   # 0x6279c8, 0x270 bytes
  06279c8  stdu 1, -304(1)
  06279cc  mflr 0
  06279d0  std 22, 216(1)
  06279d4  std 0, 320(1)
  06279d8  lwz 22, 112(3)
  06279dc  std 27, 256(1)
  06279e0  cmpwi 7, 22, 0
  06279e4  stfd 31, 296(1)
  06279e8  std 30, 280(1)
  06279ec  std 23, 224(1)
  06279f0  std 24, 232(1)
  06279f4  std 25, 240(1)
  06279f8  std 26, 248(1)
  06279fc  std 28, 264(1)
  0627a00  std 29, 272(1)
  0627a04  std 31, 288(1)
  0627a08  lwz 30, -29432(2)
  0627a0c  mr 27, 3
  0627a10  bt 30, 0x627c30
  0627a14  lwz 0, 44(27)
  0627a18  li 9, 0
  0627a1c  stfs 3, 156(1)
  0627a20  cmpwi 7, 0, 0
  0627a24  stfs 4, 140(1)
  0627a28  stfs 1, 124(1)
  0627a2c  stw 9, 184(1)
  0627a30  stfs 2, 172(1)
  0627a34  stw 9, 120(1)
  0627a38  stw 9, 160(1)
  0627a3c  stw 9, 164(1)
  0627a40  stw 9, 168(1)
  0627a44  stw 9, 144(1)
  0627a48  stw 9, 148(1)
  0627a4c  stw 9, 152(1)
  0627a50  stw 9, 128(1)
  0627a54  stw 9, 132(1)
  0627a58  stw 9, 136(1)
  0627a5c  stw 9, 176(1)
  0627a60  stw 9, 180(1)
  0627a64  bt 30, 0x627af8
  0627a68  addi 31, 27, 48
  0627a6c  lfs 31, -32420(30)
  0627a70  li 28, 0
  0627a74  addi 23, 1, 156
  0627a78  addi 24, 1, 140
  0627a7c  addi 25, 1, 124
  0627a80  addi 26, 1, 172
  0627a84  clrldi 29, 31, 32
  0627a88  addi 28, 28, 1
  0627a8c  addi 31, 31, 4
  0627a90  lwz 3, 0(29)
  0627a94  bl 0x62777c
  0627a98  lwz 0, 12(29)
  0627a9c  slwi 9, 28, 2
  0627aa0  std 0, 192(1)
  0627aa4  lfd 13, 192(1)
  0627aa8  add 11, 9, 23
  0627aac  fcfid 13, 13
  0627ab0  add 8, 9, 24
  0627ab4  add 10, 9, 25
  0627ab8  lwz 0, 44(27)
  0627abc  clrldi 11, 11, 32
  0627ac0  clrldi 8, 8, 32
  0627ac4  add 9, 9, 26
  0627ac8  clrldi 10, 10, 32
  0627acc  clrldi 9, 9, 32
  0627ad0  stfs 1, 0(11)
  0627ad4  cmplw 7, 0, 28
  0627ad8  frsp 0, 13
  0627adc  fmuls 0, 0, 31
  0627ae0  stfs 0, 0(8)
  0627ae4  lfs 13, 24(29)
  0627ae8  stfs 13, 0(10)
  0627aec  lfs 0, 36(29)
  0627af0  stfs 0, 0(9)
  0627af4  bt 29, 0x627a84
  0627af8  lis 0, 3329
  0627afc  clrldi 31, 22, 32
  0627b00  ori 0, 0, 14738
  0627b04  mr 3, 31
  0627b08  stw 0, 116(1)
  0627b0c  addi 4, 1, 116
  0627b10  addi 5, 1, 120
  0627b14  bl 0x648730
  0627b18  nop
  0627b1c  cmpwi 7, 3, 0
  0627b20  mr 4, 3
  0627b24  bf 30, 0x627c1c
  0627b28  lwz 5, 120(1)
  0627b2c  cmpwi 7, 5, 0
  0627b30  bt 30, 0x627be0
  0627b34  lwz 9, 44(27)
  0627b38  addi 9, 9, 1
  0627b3c  cmpwi 7, 9, 0
  0627b40  bt 30, 0x627bc4
  0627b44  clrldi 9, 9, 32
  0627b48  li 7, 0
  0627b4c  li 6, 0
  0627b50  mtctr 9
  0627b54  addi 23, 1, 156
  0627b58  addi 24, 1, 140
  0627b5c  addi 25, 1, 124
  0627b60  addi 4, 1, 172
  0627b64  add 11, 7, 25
  0627b68  add 0, 5, 6
  0627b6c  clrldi 11, 11, 32
  0627b70  add 10, 7, 23
  0627b74  clrldi 8, 0, 32
  0627b78  clrldi 10, 10, 32
  0627b7c  add 9, 7, 24
  0627b80  lfs 12, 0(11)
  0627b84  clrldi 9, 9, 32
  0627b88  stfs 12, 8(8)
  0627b8c  lfs 0, 0(10)
  0627b90  stfs 0, 0(8)
  0627b94  lfs 13, 0(9)
  0627b98  stfs 13, 4(8)
  0627b9c  lbz 0, 104(27)
  0627ba0  cmpwi 7, 0, 4
  0627ba4  bt 30, 0x627bb4
  0627ba8  add 9, 7, 4
  0627bac  clrldi 9, 9, 32
  0627bb0  lfs 12, 0(9)
  0627bb4  stfs 12, 12(8)
  0627bb8  addi 7, 7, 4
  0627bbc  addi 6, 6, 16
  0627bc0  bdnz 0x627b64
  0627bc4  lis 0, 3329
  0627bc8  mr 3, 31
  0627bcc  ori 0, 0, 14738
  0627bd0  addi 4, 1, 112
  0627bd4  stw 0, 112(1)
  0627bd8  bl 0x6486f8
  0627bdc  nop
  0627be0  ld 0, 320(1)
  0627be4  ld 22, 216(1)
  0627be8  ld 23, 224(1)
  0627bec  mtlr 0
  0627bf0  ld 24, 232(1)
  0627bf4  ld 25, 240(1)
  0627bf8  ld 26, 248(1)
  0627bfc  ld 27, 256(1)
  0627c00  ld 28, 264(1)
  0627c04  ld 29, 272(1)
  0627c08  ld 30, 280(1)
  0627c0c  ld 31, 288(1)
  0627c10  lfd 31, 296(1)
  0627c14  addi 1, 1, 304
  0627c18  blr
  0627c1c  lwz 3, -32532(30)
  0627c20  extsw 4, 4
  0627c24  bl 0x5cd098
  0627c28  nop
  0627c2c  b 0x627b28
  0627c30  lwz 22, 108(3)
  0627c34  b 0x627a14

FUN_00627c40:   # 0x627c40, 0x224 bytes
  0627c40  cmpwi 7, 3, 0
  0627c44  mflr 0
  0627c48  stdu 1, -208(1)
  0627c4c  stfd 30, 192(1)
  0627c50  fmr 30, 1
  0627c54  stfd 31, 200(1)
  0627c58  fmr 31, 2
  0627c5c  std 26, 144(1)
  0627c60  std 27, 152(1)
  0627c64  std 28, 160(1)
  0627c68  std 29, 168(1)
  0627c6c  std 30, 176(1)
  0627c70  std 31, 184(1)
  0627c74  std 0, 224(1)
  0627c78  lwz 30, -29432(2)
  0627c7c  mr 31, 3
  0627c80  mr 28, 4
  0627c84  mr 26, 7
  0627c88  mr 27, 8
  0627c8c  mr 29, 10
  0627c90  bt 30, 0x627c9c
  0627c94  cmplwi 7, 4, 3
  0627c98  bf 29, 0x627dfc
  0627c9c  lwz 3, -32624(30)
  0627ca0  li 5, 4571
  0627ca4  lwz 4, -32628(30)
  0627ca8  bl 0x61948c
  0627cac  nop
  0627cb0  lwz 9, -32620(30)
  0627cb4  lbz 0, 0(9)
  0627cb8  cmpwi 7, 0, 0
  0627cbc  bf 30, 0x627dcc
  0627cc0  lwz 9, -32616(30)
  0627cc4  lbz 0, 0(9)
  0627cc8  twnei 0, 0
  0627ccc  clrldi 3, 31, 32
  0627cd0  bl 0x62519c
  0627cd4  cmpwi 7, 3, 0
  0627cd8  bt 28, 0x627dcc
  0627cdc  slwi 9, 3, 4
  0627ce0  lwz 11, -32724(30)
  0627ce4  li 0, 0
  0627ce8  extsw 9, 9
  0627cec  stw 0, 112(1)
  0627cf0  addi 4, 1, 112
  0627cf4  lwzx 0, 11, 9
  0627cf8  mr 3, 0
  0627cfc  mr 31, 0
  0627d00  bl 0x647ed0
  0627d04  nop
  0627d08  lwz 9, 112(1)
  0627d0c  cmpwi 7, 9, 0
  0627d10  bt 30, 0x627dcc
  0627d14  clrlwi 0, 29, 31
  0627d18  cmpwi 7, 0, 0
  0627d1c  bt 30, 0x627e4c
  0627d20  clrldi 11, 9, 32
  0627d24  lwz 0, 112(11)
  0627d28  ori 0, 0, 2
  0627d2c  stw 0, 112(11)
  0627d30  rlwinm 0, 29, 0, 30, 30
  0627d34  cmpwi 7, 0, 0
  0627d38  bt 30, 0x627e38
  0627d3c  lwz 0, 112(11)
  0627d40  ori 0, 0, 4
  0627d44  stw 0, 112(11)
  0627d48  lwz 9, -32592(30)
  0627d4c  lbz 0, 0(9)
  0627d50  cmpwi 7, 0, 0
  0627d54  bt 30, 0x627e24
  0627d58  lwz 0, 112(11)
  0627d5c  ori 0, 0, 16
  0627d60  stw 0, 112(11)
  0627d64  clrldi 0, 26, 32
  0627d68  lfs 11, -32420(30)
  0627d6c  clrldi 9, 27, 32
  0627d70  std 0, 128(1)
  0627d74  lfd 12, 128(1)
  0627d78  mr 3, 31
  0627d7c  fcfid 12, 12
  0627d80  std 9, 128(1)
  0627d84  slwi 9, 28, 4
  0627d88  li 4, 384
  0627d8c  extsw 9, 9
  0627d90  add 9, 11, 9
  0627d94  frsp 0, 12
  0627d98  lfd 12, 128(1)
  0627d9c  fcfid 12, 12
  0627da0  stfs 31, 128(9)
  0627da4  stfs 30, 124(9)
  0627da8  fmuls 0, 0, 11
  0627dac  frsp 13, 12
  0627db0  lfs 12, -32412(30)
  0627db4  fsubs 12, 12, 0
  0627db8  fmuls 13, 13, 11
  0627dbc  stfs 12, 116(9)
  0627dc0  stfs 13, 120(9)
  0627dc4  bl 0x647f34
  0627dc8  nop
  0627dcc  ld 0, 224(1)
  0627dd0  ld 26, 144(1)
  0627dd4  ld 27, 152(1)
  0627dd8  mtlr 0
  0627ddc  ld 28, 160(1)
  0627de0  ld 29, 168(1)
  0627de4  ld 30, 176(1)
  0627de8  ld 31, 184(1)
  0627dec  lfd 30, 192(1)
  0627df0  lfd 31, 200(1)
  0627df4  addi 1, 1, 208
  0627df8  blr
  0627dfc  cmplwi 7, 8, 360
  0627e00  bt 29, 0x627c9c
  0627e04  cmplwi 7, 7, 360
  0627e08  bt 29, 0x627c9c
  0627e0c  lfs 0, -32684(30)
  0627e10  fcmpu 7, 1, 0
  0627e14  bt 28, 0x627c9c
  0627e18  fcmpu 7, 2, 0
  0627e1c  bf 28, 0x627ccc
  0627e20  b 0x627c9c
  0627e24  lwz 0, 112(11)
  0627e28  rlwinm 0, 0, 27, 1, 31
  0627e2c  rotlwi 0, 0, 5
  0627e30  stw 0, 112(11)
  0627e34  b 0x627d64
  0627e38  lwz 0, 112(11)
  0627e3c  rlwinm 0, 0, 29, 1, 31
  0627e40  rotlwi 0, 0, 3
  0627e44  stw 0, 112(11)
  0627e48  b 0x627d48
  0627e4c  clrldi 11, 9, 32
  0627e50  lwz 0, 112(11)
  0627e54  rlwinm 0, 0, 30, 1, 31
  0627e58  rotlwi 0, 0, 2
  0627e5c  stw 0, 112(11)
  0627e60  b 0x627d30

FUN_00627e64:   # 0x627e64, 0xe8 bytes
  0627e64  stdu 1, -192(1)
  0627e68  mflr 0
  0627e6c  std 30, 168(1)
  0627e70  lwz 30, -29432(2)
  0627e74  slwi 3, 3, 2
  0627e78  std 25, 128(1)
  0627e7c  std 26, 136(1)
  0627e80  extsw 26, 3
  0627e84  stfd 31, 184(1)
  0627e88  std 31, 176(1)
  0627e8c  fmr 31, 1
  0627e90  lwz 25, -32656(30)
  0627e94  lis 31, 513
  0627e98  std 0, 208(1)
  0627e9c  ori 31, 31, 12632
  0627ea0  li 0, 0
  0627ea4  std 27, 144(1)
  0627ea8  lwzx 3, 25, 26
  0627eac  mr 27, 4
  0627eb0  std 28, 152(1)
  0627eb4  std 29, 160(1)
  0627eb8  stw 0, 120(1)
  0627ebc  mr 29, 6
  0627ec0  mr 28, 7
  0627ec4  stw 31, 116(1)
  0627ec8  clrldi 3, 3, 32
  0627ecc  addi 4, 1, 116
  0627ed0  addi 5, 1, 120
  0627ed4  bl 0x648730
  0627ed8  nop
  0627edc  cmpwi 7, 3, 0
  0627ee0  bt 28, 0x627f1c
  0627ee4  lwz 9, 120(1)
  0627ee8  clrlwi 0, 27, 24
  0627eec  clrlwi 11, 29, 24
  0627ef0  lwzx 3, 25, 26
  0627ef4  clrlwi 10, 28, 24
  0627ef8  clrldi 3, 3, 32
  0627efc  addi 4, 1, 112
  0627f00  stfs 31, 12(9)
  0627f04  stw 0, 0(9)
  0627f08  stw 11, 4(9)
  0627f0c  stw 10, 8(9)
  0627f10  stw 31, 112(1)
  0627f14  bl 0x6486f8
  0627f18  nop
  0627f1c  ld 0, 208(1)
  0627f20  ld 25, 128(1)
  0627f24  ld 26, 136(1)
  0627f28  mtlr 0
  0627f2c  ld 27, 144(1)
  0627f30  ld 28, 152(1)
  0627f34  ld 29, 160(1)
  0627f38  ld 30, 168(1)
  0627f3c  ld 31, 176(1)
  0627f40  lfd 31, 184(1)
  0627f44  addi 1, 1, 192
  0627f48  blr

FUN_00627f54:   # 0x627f54, 0xf4 bytes
  0627f54  stdu 1, -208(1)
  0627f58  mflr 0
  0627f5c  std 30, 168(1)
  0627f60  lwz 30, -29432(2)
  0627f64  slwi 3, 3, 2
  0627f68  std 26, 136(1)
  0627f6c  std 28, 152(1)
  0627f70  extsw 28, 3
  0627f74  stfd 29, 184(1)
  0627f78  std 31, 176(1)
  0627f7c  fmr 29, 2
  0627f80  lwz 26, -32656(30)
  0627f84  lis 31, 257
  0627f88  std 0, 224(1)
  0627f8c  ori 31, 31, 47692
  0627f90  stfd 30, 192(1)
  0627f94  li 0, 0
  0627f98  stfd 31, 200(1)
  0627f9c  std 27, 144(1)
  0627fa0  fmr 30, 1
  0627fa4  lwzx 3, 26, 28
  0627fa8  mr 27, 5
  0627fac  std 29, 160(1)
  0627fb0  fmr 31, 3
  0627fb4  mr 29, 4
  0627fb8  stw 0, 120(1)
  0627fbc  stw 31, 116(1)
  0627fc0  clrldi 3, 3, 32
  0627fc4  addi 4, 1, 116
  0627fc8  addi 5, 1, 120
  0627fcc  bl 0x648730
  0627fd0  nop
  0627fd4  cmpwi 7, 3, 0
  0627fd8  bt 28, 0x628014
  0627fdc  slwi 9, 29, 4
  0627fe0  lwz 0, 120(1)
  0627fe4  lwzx 3, 26, 28
  0627fe8  addi 4, 1, 112
  0627fec  add 9, 9, 0
  0627ff0  clrldi 3, 3, 32
  0627ff4  clrldi 9, 9, 32
  0627ff8  stfs 31, 12(9)
  0627ffc  stw 27, 0(9)
  0628000  stfs 30, 4(9)
  0628004  stfs 29, 8(9)
  0628008  stw 31, 112(1)
  062800c  bl 0x6486f8
  0628010  nop
  0628014  ld 0, 224(1)
  0628018  ld 26, 136(1)
  062801c  ld 27, 144(1)
  0628020  mtlr 0
  0628024  ld 28, 152(1)
  0628028  ld 29, 160(1)
  062802c  ld 30, 168(1)
  0628030  ld 31, 176(1)
  0628034  lfd 29, 184(1)
  0628038  lfd 30, 192(1)
  062803c  lfd 31, 200(1)
  0628040  addi 1, 1, 208
  0628044  blr

FUN_00628050:   # 0x628050, 0xac bytes
  0628050  stdu 1, -176(1)
  0628054  mflr 0
  0628058  std 30, 152(1)
  062805c  lwz 30, -29432(2)
  0628060  slwi 3, 3, 2
  0628064  std 28, 136(1)
  0628068  std 29, 144(1)
  062806c  extsw 29, 3
  0628070  stfd 31, 168(1)
  0628074  std 31, 160(1)
  0628078  fmr 31, 1
  062807c  lwz 28, -32656(30)
  0628080  lis 31, 1
  0628084  std 0, 192(1)
  0628088  ori 31, 31, 50656
  062808c  li 0, 0
  0628090  stw 31, 116(1)
  0628094  lwzx 3, 28, 29
  0628098  addi 4, 1, 116
  062809c  stw 0, 120(1)
  06280a0  clrldi 3, 3, 32
  06280a4  addi 5, 1, 120
  06280a8  bl 0x648730
  06280ac  nop
  06280b0  cmpwi 7, 3, 0
  06280b4  bt 28, 0x6280d8
  06280b8  lwz 9, 120(1)
  06280bc  addi 4, 1, 112
  06280c0  lwzx 3, 28, 29
  06280c4  clrldi 3, 3, 32
  06280c8  stfs 31, 0(9)
  06280cc  stw 31, 112(1)
  06280d0  bl 0x6486f8
  06280d4  nop
  06280d8  ld 0, 192(1)
  06280dc  ld 28, 136(1)
  06280e0  ld 29, 144(1)
  06280e4  mtlr 0
  06280e8  ld 30, 152(1)
  06280ec  ld 31, 160(1)
  06280f0  lfd 31, 168(1)
  06280f4  addi 1, 1, 176
  06280f8  blr

FUN_00628104:   # 0x628104, 0xa0 bytes
  0628104  stdu 1, -160(1)
  0628108  mflr 0
  062810c  std 30, 144(1)
  0628110  lwz 30, -29432(2)
  0628114  addi 4, 1, 116
  0628118  std 28, 128(1)
  062811c  std 31, 152(1)
  0628120  lis 31, 3585
  0628124  std 0, 176(1)
  0628128  lwz 28, -32652(30)
  062812c  ori 31, 31, 33003
  0628130  li 0, 0
  0628134  std 29, 136(1)
  0628138  stw 0, 120(1)
  062813c  mr 29, 3
  0628140  lwz 9, 0(28)
  0628144  addi 5, 1, 120
  0628148  stw 31, 116(1)
  062814c  clrldi 3, 9, 32
  0628150  bl 0x648730
  0628154  nop
  0628158  cmpwi 7, 3, 0
  062815c  bt 28, 0x628184
  0628160  lwz 9, 120(1)
  0628164  clrlwi 0, 29, 24
  0628168  lwz 3, 0(28)
  062816c  addi 4, 1, 112
  0628170  clrldi 3, 3, 32
  0628174  stw 0, 0(9)
  0628178  stw 31, 112(1)
  062817c  bl 0x6486f8
  0628180  nop
  0628184  ld 0, 176(1)
  0628188  ld 28, 128(1)
  062818c  ld 29, 136(1)
  0628190  mtlr 0
  0628194  ld 30, 144(1)
  0628198  ld 31, 152(1)
  062819c  addi 1, 1, 160
  06281a0  blr

FUN_006281ac:   # 0x6281ac, 0x9c bytes
  06281ac  stdu 1, -160(1)
  06281b0  mflr 0
  06281b4  std 30, 136(1)
  06281b8  lwz 30, -29432(2)
  06281bc  addi 4, 1, 116
  06281c0  std 29, 128(1)
  06281c4  std 31, 144(1)
  06281c8  lis 31, 3329
  06281cc  stfd 31, 152(1)
  06281d0  std 0, 176(1)
  06281d4  fmr 31, 1
  06281d8  lwz 29, -32652(30)
  06281dc  ori 31, 31, 46474
  06281e0  li 0, 0
  06281e4  stw 31, 116(1)
  06281e8  stw 0, 120(1)
  06281ec  addi 5, 1, 120
  06281f0  lwz 3, 0(29)
  06281f4  clrldi 3, 3, 32
  06281f8  bl 0x648730
  06281fc  nop
  0628200  cmpwi 7, 3, 0
  0628204  bt 28, 0x628228
  0628208  lwz 9, 120(1)
  062820c  addi 4, 1, 112
  0628210  lwz 3, 0(29)
  0628214  clrldi 3, 3, 32
  0628218  stfs 31, 0(9)
  062821c  stw 31, 112(1)
  0628220  bl 0x6486f8
  0628224  nop
  0628228  ld 0, 176(1)
  062822c  ld 29, 128(1)
  0628230  ld 30, 136(1)
  0628234  mtlr 0
  0628238  ld 31, 144(1)
  062823c  lfd 31, 152(1)
  0628240  addi 1, 1, 160
  0628244  blr

FUN_00628250:   # 0x628250, 0xbc bytes
  0628250  stdu 1, -176(1)
  0628254  mflr 0
  0628258  std 30, 136(1)
  062825c  lwz 30, -29432(2)
  0628260  addi 4, 1, 116
  0628264  std 29, 128(1)
  0628268  std 31, 144(1)
  062826c  lis 31, 257
  0628270  stfd 29, 152(1)
  0628274  std 0, 192(1)
  0628278  fmr 29, 2
  062827c  lwz 29, -32652(30)
  0628280  ori 31, 31, 12567
  0628284  li 0, 0
  0628288  stfd 30, 160(1)
  062828c  stfd 31, 168(1)
  0628290  fmr 30, 1
  0628294  stw 0, 120(1)
  0628298  fmr 31, 3
  062829c  stw 31, 116(1)
  06282a0  lwz 3, 0(29)
  06282a4  addi 5, 1, 120
  06282a8  clrldi 3, 3, 32
  06282ac  bl 0x648730
  06282b0  nop
  06282b4  cmpwi 7, 3, 0
  06282b8  bt 28, 0x6282e4
  06282bc  lwz 9, 120(1)
  06282c0  addi 4, 1, 112
  06282c4  lwz 3, 0(29)
  06282c8  clrldi 3, 3, 32
  06282cc  stfs 31, 8(9)
  06282d0  stfs 30, 0(9)
  06282d4  stfs 29, 4(9)
  06282d8  stw 31, 112(1)
  06282dc  bl 0x6486f8
  06282e0  nop
  06282e4  ld 0, 192(1)
  06282e8  ld 29, 128(1)
  06282ec  ld 30, 136(1)
  06282f0  mtlr 0
  06282f4  ld 31, 144(1)
  06282f8  lfd 29, 152(1)
  06282fc  lfd 30, 160(1)
  0628300  lfd 31, 168(1)
  0628304  addi 1, 1, 176
  0628308  blr

FUN_00628314:   # 0x628314, 0xb4 bytes
  0628314  stdu 1, -176(1)
  0628318  mflr 0
  062831c  std 30, 160(1)
  0628320  lwz 30, -29432(2)
  0628324  addi 5, 1, 120
  0628328  std 27, 136(1)
  062832c  std 31, 168(1)
  0628330  lis 31, 1
  0628334  std 0, 192(1)
  0628338  lwz 27, -32652(30)
  062833c  ori 31, 31, 47547
  0628340  li 0, 0
  0628344  std 28, 144(1)
  0628348  std 29, 152(1)
  062834c  mr 28, 4
  0628350  lwz 9, 0(27)
  0628354  mr 29, 3
  0628358  stw 0, 120(1)
  062835c  stw 31, 116(1)
  0628360  clrldi 3, 9, 32
  0628364  addi 4, 1, 116
  0628368  bl 0x648730
  062836c  nop
  0628370  cmpwi 7, 3, 0
  0628374  bt 28, 0x6283a4
  0628378  lwz 9, 120(1)
  062837c  clrlwi 11, 29, 24
  0628380  clrlwi 0, 28, 24
  0628384  lwz 3, 0(27)
  0628388  addi 4, 1, 112
  062838c  clrldi 3, 3, 32
  0628390  stw 0, 4(9)
  0628394  stw 11, 0(9)
  0628398  stw 31, 112(1)
  062839c  bl 0x6486f8
  06283a0  nop
  06283a4  ld 0, 192(1)
  06283a8  ld 27, 136(1)
  06283ac  ld 28, 144(1)
  06283b0  mtlr 0
  06283b4  ld 29, 152(1)
  06283b8  ld 30, 160(1)
  06283bc  ld 31, 168(1)
  06283c0  addi 1, 1, 176
  06283c4  blr

FUN_006283d0:   # 0x6283d0, 0x9c bytes
  06283d0  stdu 1, -160(1)
  06283d4  mflr 0
  06283d8  std 30, 136(1)
  06283dc  lwz 30, -29432(2)
  06283e0  addi 4, 1, 116
  06283e4  std 29, 128(1)
  06283e8  std 31, 144(1)
  06283ec  lis 31, 513
  06283f0  stfd 31, 152(1)
  06283f4  std 0, 176(1)
  06283f8  fmr 31, 1
  06283fc  lwz 29, -32652(30)
  0628400  ori 31, 31, 50656
  0628404  li 0, 0
  0628408  stw 31, 116(1)
  062840c  stw 0, 120(1)
  0628410  addi 5, 1, 120
  0628414  lwz 3, 0(29)
  0628418  clrldi 3, 3, 32
  062841c  bl 0x648730
  0628420  nop
  0628424  cmpwi 7, 3, 0
  0628428  bt 28, 0x62844c
  062842c  lwz 9, 120(1)
  0628430  addi 4, 1, 112
  0628434  lwz 3, 0(29)
  0628438  clrldi 3, 3, 32
  062843c  stfs 31, 0(9)
  0628440  stw 31, 112(1)
  0628444  bl 0x6486f8
  0628448  nop
  062844c  ld 0, 176(1)
  0628450  ld 29, 128(1)
  0628454  ld 30, 136(1)
  0628458  mtlr 0
  062845c  ld 31, 144(1)
  0628460  lfd 31, 152(1)
  0628464  addi 1, 1, 160
  0628468  blr

FUN_00628474:   # 0x628474, 0xa0 bytes
  0628474  stdu 1, -160(1)
  0628478  mflr 0
  062847c  std 30, 144(1)
  0628480  lwz 30, -29432(2)
  0628484  addi 4, 1, 116
  0628488  std 28, 128(1)
  062848c  std 31, 152(1)
  0628490  lis 31, 3585
  0628494  std 0, 176(1)
  0628498  lwz 28, -32672(30)
  062849c  ori 31, 31, 33003
  06284a0  li 0, 0
  06284a4  std 29, 136(1)
  06284a8  stw 0, 120(1)
  06284ac  mr 29, 3
  06284b0  lwz 9, 0(28)
  06284b4  addi 5, 1, 120
  06284b8  stw 31, 116(1)
  06284bc  clrldi 3, 9, 32
  06284c0  bl 0x648730
  06284c4  nop
  06284c8  cmpwi 7, 3, 0
  06284cc  bt 28, 0x6284f4
  06284d0  lwz 9, 120(1)
  06284d4  clrlwi 0, 29, 24
  06284d8  lwz 3, 0(28)
  06284dc  addi 4, 1, 112
  06284e0  clrldi 3, 3, 32
  06284e4  stw 0, 0(9)
  06284e8  stw 31, 112(1)
  06284ec  bl 0x6486f8
  06284f0  nop
  06284f4  ld 0, 176(1)
  06284f8  ld 28, 128(1)
  06284fc  ld 29, 136(1)
  0628500  mtlr 0
  0628504  ld 30, 144(1)
  0628508  ld 31, 152(1)
  062850c  addi 1, 1, 160
  0628510  blr

FUN_0062851c:   # 0x62851c, 0xbc bytes
  062851c  stdu 1, -176(1)
  0628520  mflr 0
  0628524  std 30, 144(1)
  0628528  lwz 30, -29432(2)
  062852c  addi 4, 1, 116
  0628530  std 29, 136(1)
  0628534  std 31, 152(1)
  0628538  lis 31, 3329
  062853c  stfd 30, 160(1)
  0628540  std 0, 192(1)
  0628544  fmr 30, 1
  0628548  lwz 29, -32672(30)
  062854c  ori 31, 31, 14738
  0628550  li 0, 0
  0628554  stfd 31, 168(1)
  0628558  stw 31, 116(1)
  062855c  fmr 31, 2
  0628560  stw 0, 120(1)
  0628564  addi 5, 1, 120
  0628568  lwz 3, 0(29)
  062856c  clrldi 3, 3, 32
  0628570  bl 0x648730
  0628574  nop
  0628578  cmpwi 7, 3, 0
  062857c  bt 28, 0x6285b4
  0628580  lwz 9, 120(1)
  0628584  li 0, 0
  0628588  lfs 0, -32404(30)
  062858c  addi 4, 1, 112
  0628590  lwz 3, 0(29)
  0628594  clrldi 3, 3, 32
  0628598  stfs 31, 12(9)
  062859c  stw 0, 0(9)
  06285a0  stfs 0, 4(9)
  06285a4  stfs 30, 8(9)
  06285a8  stw 31, 112(1)
  06285ac  bl 0x6486f8
  06285b0  nop
  06285b4  ld 0, 192(1)
  06285b8  ld 29, 136(1)
  06285bc  ld 30, 144(1)
  06285c0  mtlr 0
  06285c4  ld 31, 152(1)
  06285c8  lfd 30, 160(1)
  06285cc  lfd 31, 168(1)
  06285d0  addi 1, 1, 176
  06285d4  blr

FUN_006285e0:   # 0x6285e0, 0xac bytes
  06285e0  stdu 1, -176(1)
  06285e4  mflr 0
  06285e8  std 30, 144(1)
  06285ec  lwz 30, -29432(2)
  06285f0  addi 4, 1, 116
  06285f4  std 29, 136(1)
  06285f8  std 31, 152(1)
  06285fc  lis 31, 2817
  0628600  stfd 30, 160(1)
  0628604  std 0, 192(1)
  0628608  fmr 30, 1
  062860c  lwz 29, -32672(30)
  0628610  ori 31, 31, 16543
  0628614  li 0, 0
  0628618  stfd 31, 168(1)
  062861c  stw 31, 116(1)
  0628620  fmr 31, 2
  0628624  stw 0, 120(1)
  0628628  addi 5, 1, 120
  062862c  lwz 3, 0(29)
  0628630  clrldi 3, 3, 32
  0628634  bl 0x648730
  0628638  nop
  062863c  cmpwi 7, 3, 0
  0628640  bt 28, 0x628668
  0628644  lwz 9, 120(1)
  0628648  addi 4, 1, 112
  062864c  lwz 3, 0(29)
  0628650  clrldi 3, 3, 32
  0628654  stfs 31, 4(9)
  0628658  stfs 30, 0(9)
  062865c  stw 31, 112(1)
  0628660  bl 0x6486f8
  0628664  nop
  0628668  ld 0, 192(1)
  062866c  ld 29, 136(1)
  0628670  ld 30, 144(1)
  0628674  mtlr 0
  0628678  ld 31, 152(1)
  062867c  lfd 30, 160(1)
  0628680  lfd 31, 168(1)
  0628684  addi 1, 1, 176
  0628688  blr

FUN_00628694:   # 0x628694, 0xa0 bytes
  0628694  stdu 1, -160(1)
  0628698  mflr 0
  062869c  std 30, 144(1)
  06286a0  lwz 30, -29432(2)
  06286a4  addi 4, 1, 116
  06286a8  std 28, 128(1)
  06286ac  std 31, 152(1)
  06286b0  lis 31, 2561
  06286b4  std 0, 176(1)
  06286b8  lwz 28, -32672(30)
  06286bc  ori 31, 31, 53009
  06286c0  li 0, 0
  06286c4  std 29, 136(1)
  06286c8  stw 0, 120(1)
  06286cc  mr 29, 3
  06286d0  lwz 9, 0(28)
  06286d4  addi 5, 1, 120
  06286d8  stw 31, 116(1)
  06286dc  clrldi 3, 9, 32
  06286e0  bl 0x648730
  06286e4  nop
  06286e8  cmpwi 7, 3, 0
  06286ec  bt 28, 0x628714
  06286f0  lwz 9, 120(1)
  06286f4  clrlwi 0, 29, 24
  06286f8  lwz 3, 0(28)
  06286fc  addi 4, 1, 112
  0628700  clrldi 3, 3, 32
  0628704  stw 0, 0(9)
  0628708  stw 31, 112(1)
  062870c  bl 0x6486f8
  0628710  nop
  0628714  ld 0, 176(1)
  0628718  ld 28, 128(1)
  062871c  ld 29, 136(1)
  0628720  mtlr 0
  0628724  ld 30, 144(1)
  0628728  ld 31, 152(1)
  062872c  addi 1, 1, 160
  0628730  blr

FUN_0062873c:   # 0x62873c, 0x98 bytes
  062873c  stdu 1, -144(1)
  0628740  mflr 0
  0628744  std 30, 128(1)
  0628748  lwz 30, -29432(2)
  062874c  addi 4, 1, 112
  0628750  std 0, 160(1)
  0628754  lis 0, 1281
  0628758  std 31, 136(1)
  062875c  ori 0, 0, 52568
  0628760  lwz 9, -32672(30)
  0628764  mr 31, 3
  0628768  stw 0, 112(1)
  062876c  addi 5, 1, 116
  0628770  lwz 3, 0(9)
  0628774  clrldi 3, 3, 32
  0628778  bl 0x6487c0
  062877c  nop
  0628780  cmpwi 7, 3, 0
  0628784  bt 28, 0x6287bc
  0628788  lwz 9, 116(1)
  062878c  li 10, 0
  0628790  addi 0, 9, 320
  0628794  li 9, 8
  0628798  mtctr 9
  062879c  add 9, 10, 0
  06287a0  add 11, 10, 31
  06287a4  clrldi 9, 9, 32
  06287a8  clrldi 11, 11, 32
  06287ac  addi 10, 10, 4
  06287b0  lfs 0, 0(9)
  06287b4  stfs 0, 0(11)
  06287b8  bdnz 0x62879c
  06287bc  ld 0, 160(1)
  06287c0  ld 30, 128(1)
  06287c4  ld 31, 136(1)
  06287c8  mtlr 0
  06287cc  addi 1, 1, 144
  06287d0  blr

FUN_006287dc:   # 0x6287dc, 0xbc bytes
  06287dc  stdu 1, -176(1)
  06287e0  mflr 0
  06287e4  std 30, 136(1)
  06287e8  lwz 30, -29432(2)
  06287ec  addi 4, 1, 116
  06287f0  std 29, 128(1)
  06287f4  std 31, 144(1)
  06287f8  lis 31, 2305
  06287fc  stfd 29, 152(1)
  0628800  std 0, 192(1)
  0628804  fmr 29, 2
  0628808  lwz 29, -32672(30)
  062880c  ori 31, 31, 12567
  0628810  li 0, 0
  0628814  stfd 30, 160(1)
  0628818  stfd 31, 168(1)
  062881c  fmr 30, 1
  0628820  stw 0, 120(1)
  0628824  fmr 31, 3
  0628828  stw 31, 116(1)
  062882c  lwz 3, 0(29)
  0628830  addi 5, 1, 120
  0628834  clrldi 3, 3, 32
  0628838  bl 0x648730
  062883c  nop
  0628840  cmpwi 7, 3, 0
  0628844  bt 28, 0x628870
  0628848  lwz 9, 120(1)
  062884c  addi 4, 1, 112
  0628850  lwz 3, 0(29)
  0628854  clrldi 3, 3, 32
  0628858  stfs 31, 8(9)
  062885c  stfs 30, 0(9)
  0628860  stfs 29, 4(9)
  0628864  stw 31, 112(1)
  0628868  bl 0x6486f8
  062886c  nop
  0628870  ld 0, 192(1)
  0628874  ld 29, 128(1)
  0628878  ld 30, 136(1)
  062887c  mtlr 0
  0628880  ld 31, 144(1)
  0628884  lfd 29, 152(1)
  0628888  lfd 30, 160(1)
  062888c  lfd 31, 168(1)
  0628890  addi 1, 1, 176
  0628894  blr

FUN_006288a0:   # 0x6288a0, 0xbc bytes
  06288a0  stdu 1, -176(1)
  06288a4  mflr 0
  06288a8  std 30, 136(1)
  06288ac  lwz 30, -29432(2)
  06288b0  addi 4, 1, 116
  06288b4  std 29, 128(1)
  06288b8  std 31, 144(1)
  06288bc  lis 31, 2049
  06288c0  stfd 29, 152(1)
  06288c4  std 0, 192(1)
  06288c8  fmr 29, 2
  06288cc  lwz 29, -32672(30)
  06288d0  ori 31, 31, 12567
  06288d4  li 0, 0
  06288d8  stfd 30, 160(1)
  06288dc  stfd 31, 168(1)
  06288e0  fmr 30, 1
  06288e4  stw 0, 120(1)
  06288e8  fmr 31, 3
  06288ec  stw 31, 116(1)
  06288f0  lwz 3, 0(29)
  06288f4  addi 5, 1, 120
  06288f8  clrldi 3, 3, 32
  06288fc  bl 0x648730
  0628900  nop
  0628904  cmpwi 7, 3, 0
  0628908  bt 28, 0x628934
  062890c  lwz 9, 120(1)
  0628910  addi 4, 1, 112
  0628914  lwz 3, 0(29)
  0628918  clrldi 3, 3, 32
  062891c  stfs 31, 8(9)
  0628920  stfs 30, 0(9)
  0628924  stfs 29, 4(9)
  0628928  stw 31, 112(1)
  062892c  bl 0x6486f8
  0628930  nop
  0628934  ld 0, 192(1)
  0628938  ld 29, 128(1)
  062893c  ld 30, 136(1)
  0628940  mtlr 0
  0628944  ld 31, 144(1)
  0628948  lfd 29, 152(1)
  062894c  lfd 30, 160(1)
  0628950  lfd 31, 168(1)
  0628954  addi 1, 1, 176
  0628958  blr

FUN_00628964:   # 0x628964, 0xb4 bytes
  0628964  stdu 1, -176(1)
  0628968  mflr 0
  062896c  std 30, 160(1)
  0628970  lwz 30, -29432(2)
  0628974  addi 5, 1, 120
  0628978  std 27, 136(1)
  062897c  std 31, 168(1)
  0628980  lis 31, 1793
  0628984  std 0, 192(1)
  0628988  lwz 27, -32672(30)
  062898c  ori 31, 31, 47547
  0628990  li 0, 0
  0628994  std 28, 144(1)
  0628998  std 29, 152(1)
  062899c  mr 28, 4
  06289a0  lwz 9, 0(27)
  06289a4  mr 29, 3
  06289a8  stw 0, 120(1)
  06289ac  stw 31, 116(1)
  06289b0  clrldi 3, 9, 32
  06289b4  addi 4, 1, 116
  06289b8  bl 0x648730
  06289bc  nop
  06289c0  cmpwi 7, 3, 0
  06289c4  bt 28, 0x6289f4
  06289c8  lwz 9, 120(1)
  06289cc  clrlwi 11, 29, 24
  06289d0  clrlwi 0, 28, 24
  06289d4  lwz 3, 0(27)
  06289d8  addi 4, 1, 112
  06289dc  clrldi 3, 3, 32
  06289e0  stw 0, 4(9)
  06289e4  stw 11, 0(9)
  06289e8  stw 31, 112(1)
  06289ec  bl 0x6486f8
  06289f0  nop
  06289f4  ld 0, 192(1)
  06289f8  ld 27, 136(1)
  06289fc  ld 28, 144(1)
  0628a00  mtlr 0
  0628a04  ld 29, 152(1)
  0628a08  ld 30, 160(1)
  0628a0c  ld 31, 168(1)
  0628a10  addi 1, 1, 176
  0628a14  blr

FUN_00628a20:   # 0x628a20, 0xc8 bytes
  0628a20  stdu 1, -176(1)
  0628a24  mflr 0
  0628a28  std 30, 152(1)
  0628a2c  lwz 30, -29432(2)
  0628a30  addi 4, 1, 116
  0628a34  std 28, 136(1)
  0628a38  std 29, 144(1)
  0628a3c  lis 29, 4353
  0628a40  stfd 31, 168(1)
  0628a44  std 0, 192(1)
  0628a48  fmr 31, 1
  0628a4c  lwz 28, -32672(30)
  0628a50  ori 29, 29, 43088
  0628a54  li 0, 0
  0628a58  std 31, 160(1)
  0628a5c  stw 0, 120(1)
  0628a60  mr 31, 3
  0628a64  lwz 9, 0(28)
  0628a68  addi 5, 1, 120
  0628a6c  stw 29, 116(1)
  0628a70  clrldi 3, 9, 32
  0628a74  bl 0x648730
  0628a78  nop
  0628a7c  cmpwi 7, 3, 0
  0628a80  bt 28, 0x628abc
  0628a84  cmplwi 7, 31, 23
  0628a88  mr 3, 31
  0628a8c  bt 29, 0x628ae0
  0628a90  slwi 9, 3, 2
  0628a94  lwz 0, 120(1)
  0628a98  lwz 3, 0(28)
  0628a9c  addi 4, 1, 112
  0628aa0  add 9, 9, 0
  0628aa4  clrldi 3, 3, 32
  0628aa8  clrldi 9, 9, 32
  0628aac  stfs 31, 0(9)
  0628ab0  stw 29, 112(1)
  0628ab4  bl 0x6486f8
  0628ab8  nop
  0628abc  ld 0, 192(1)
  0628ac0  ld 28, 136(1)
  0628ac4  ld 29, 144(1)
  0628ac8  mtlr 0
  0628acc  ld 30, 152(1)
  0628ad0  ld 31, 160(1)
  0628ad4  lfd 31, 168(1)
  0628ad8  addi 1, 1, 176
  0628adc  blr
  0628ae0  li 3, 23
  0628ae4  b 0x628a90

FUN_00628af0:   # 0x628af0, 0xc4 bytes
  0628af0  stdu 1, -160(1)
  0628af4  mflr 0
  0628af8  std 30, 144(1)
  0628afc  lwz 30, -29432(2)
  0628b00  li 9, 0
  0628b04  std 29, 136(1)
  0628b08  std 0, 176(1)
  0628b0c  lis 0, 4353
  0628b10  std 31, 152(1)
  0628b14  lwz 29, -32672(30)
  0628b18  ori 0, 0, 43088
  0628b1c  mr 31, 3
  0628b20  stw 9, 120(1)
  0628b24  stw 0, 116(1)
  0628b28  addi 4, 1, 116
  0628b2c  lwz 11, 0(29)
  0628b30  addi 5, 1, 120
  0628b34  clrldi 3, 11, 32
  0628b38  bl 0x648730
  0628b3c  nop
  0628b40  cmpwi 7, 3, 0
  0628b44  bt 28, 0x628b98
  0628b48  li 9, 24
  0628b4c  lwz 0, 120(1)
  0628b50  li 10, 0
  0628b54  mtctr 9
  0628b58  add 9, 10, 31
  0628b5c  add 11, 10, 0
  0628b60  clrldi 9, 9, 32
  0628b64  clrldi 11, 11, 32
  0628b68  addi 10, 10, 4
  0628b6c  lfs 0, 0(9)
  0628b70  stfs 0, 0(11)
  0628b74  bdnz 0x628b58
  0628b78  lis 0, 4353
  0628b7c  lwz 3, 0(29)
  0628b80  addi 4, 1, 112
  0628b84  ori 0, 0, 43088
  0628b88  clrldi 3, 3, 32
  0628b8c  stw 0, 112(1)
  0628b90  bl 0x6486f8
  0628b94  nop
  0628b98  ld 0, 176(1)
  0628b9c  ld 29, 136(1)
  0628ba0  ld 30, 144(1)
  0628ba4  mtlr 0
  0628ba8  ld 31, 152(1)
  0628bac  addi 1, 1, 160
  0628bb0  blr

FUN_00628bbc:   # 0x628bbc, 0xa0 bytes
  0628bbc  stdu 1, -160(1)
  0628bc0  mflr 0
  0628bc4  std 30, 144(1)
  0628bc8  lwz 30, -29432(2)
  0628bcc  addi 4, 1, 116
  0628bd0  std 28, 128(1)
  0628bd4  std 31, 152(1)
  0628bd8  lis 31, 4097
  0628bdc  std 0, 176(1)
  0628be0  lwz 28, -32672(30)
  0628be4  ori 31, 31, 54715
  0628be8  li 0, 0
  0628bec  std 29, 136(1)
  0628bf0  stw 0, 120(1)
  0628bf4  mr 29, 3
  0628bf8  lwz 9, 0(28)
  0628bfc  addi 5, 1, 120
  0628c00  stw 31, 116(1)
  0628c04  clrldi 3, 9, 32
  0628c08  bl 0x648730
  0628c0c  nop
  0628c10  cmpwi 7, 3, 0
  0628c14  bt 28, 0x628c3c
  0628c18  lwz 9, 120(1)
  0628c1c  clrlwi 0, 29, 24
  0628c20  lwz 3, 0(28)
  0628c24  addi 4, 1, 112
  0628c28  clrldi 3, 3, 32
  0628c2c  stw 0, 0(9)
  0628c30  stw 31, 112(1)
  0628c34  bl 0x6486f8
  0628c38  nop
  0628c3c  ld 0, 176(1)
  0628c40  ld 28, 128(1)
  0628c44  ld 29, 136(1)
  0628c48  mtlr 0
  0628c4c  ld 30, 144(1)
  0628c50  ld 31, 152(1)
  0628c54  addi 1, 1, 160
  0628c58  blr

FUN_00628c64:   # 0x628c64, 0xec bytes
  0628c64  stdu 1, -208(1)
  0628c68  mflr 0
  0628c6c  std 30, 144(1)
  0628c70  lwz 30, -29432(2)
  0628c74  addi 4, 1, 116
  0628c78  std 29, 136(1)
  0628c7c  std 31, 152(1)
  0628c80  lis 31, 1537
  0628c84  stfd 26, 160(1)
  0628c88  std 0, 224(1)
  0628c8c  fmr 26, 5
  0628c90  lwz 29, -32672(30)
  0628c94  ori 31, 31, 60149
  0628c98  li 0, 0
  0628c9c  stfd 27, 168(1)
  0628ca0  stfd 28, 176(1)
  0628ca4  fmr 27, 4
  0628ca8  stfd 29, 184(1)
  0628cac  fmr 28, 3
  0628cb0  stfd 30, 192(1)
  0628cb4  fmr 29, 2
  0628cb8  lwz 3, 0(29)
  0628cbc  fmr 30, 1
  0628cc0  stfd 31, 200(1)
  0628cc4  addi 5, 1, 120
  0628cc8  stw 0, 120(1)
  0628ccc  fmr 31, 6
  0628cd0  stw 31, 116(1)
  0628cd4  clrldi 3, 3, 32
  0628cd8  bl 0x648730
  0628cdc  nop
  0628ce0  cmpwi 7, 3, 0
  0628ce4  bt 28, 0x628d1c
  0628ce8  lwz 9, 120(1)
  0628cec  addi 4, 1, 112
  0628cf0  lwz 3, 0(29)
  0628cf4  clrldi 3, 3, 32
  0628cf8  stfs 31, 20(9)
  0628cfc  stfs 30, 0(9)
  0628d00  stfs 29, 4(9)
  0628d04  stfs 28, 8(9)
  0628d08  stfs 27, 12(9)
  0628d0c  stfs 26, 16(9)
  0628d10  stw 31, 112(1)
  0628d14  bl 0x6486f8
  0628d18  nop
  0628d1c  ld 0, 224(1)
  0628d20  ld 29, 136(1)
  0628d24  ld 30, 144(1)
  0628d28  mtlr 0
  0628d2c  ld 31, 152(1)
  0628d30  lfd 26, 160(1)
  0628d34  lfd 27, 168(1)
  0628d38  lfd 28, 176(1)
  0628d3c  lfd 29, 184(1)
  0628d40  lfd 30, 192(1)
  0628d44  lfd 31, 200(1)
  0628d48  addi 1, 1, 208
  0628d4c  blr

FUN_00628d58:   # 0x628d58, 0xec bytes
  0628d58  stdu 1, -208(1)
  0628d5c  mflr 0
  0628d60  std 30, 144(1)
  0628d64  lwz 30, -29432(2)
  0628d68  addi 4, 1, 116
  0628d6c  std 29, 136(1)
  0628d70  std 31, 152(1)
  0628d74  lis 31, 1281
  0628d78  stfd 26, 160(1)
  0628d7c  std 0, 224(1)
  0628d80  fmr 26, 5
  0628d84  lwz 29, -32672(30)
  0628d88  ori 31, 31, 60149
  0628d8c  li 0, 0
  0628d90  stfd 27, 168(1)
  0628d94  stfd 28, 176(1)
  0628d98  fmr 27, 4
  0628d9c  stfd 29, 184(1)
  0628da0  fmr 28, 3
  0628da4  stfd 30, 192(1)
  0628da8  fmr 29, 2
  0628dac  lwz 3, 0(29)
  0628db0  fmr 30, 1
  0628db4  stfd 31, 200(1)
  0628db8  addi 5, 1, 120
  0628dbc  stw 0, 120(1)
  0628dc0  fmr 31, 6
  0628dc4  stw 31, 116(1)
  0628dc8  clrldi 3, 3, 32
  0628dcc  bl 0x648730
  0628dd0  nop
  0628dd4  cmpwi 7, 3, 0
  0628dd8  bt 28, 0x628e10
  0628ddc  lwz 9, 120(1)
  0628de0  addi 4, 1, 112
  0628de4  lwz 3, 0(29)
  0628de8  clrldi 3, 3, 32
  0628dec  stfs 31, 20(9)
  0628df0  stfs 30, 0(9)
  0628df4  stfs 29, 4(9)
  0628df8  stfs 28, 8(9)
  0628dfc  stfs 27, 12(9)
  0628e00  stfs 26, 16(9)
  0628e04  stw 31, 112(1)
  0628e08  bl 0x6486f8
  0628e0c  nop
  0628e10  ld 0, 224(1)
  0628e14  ld 29, 136(1)
  0628e18  ld 30, 144(1)
  0628e1c  mtlr 0
  0628e20  ld 31, 152(1)
  0628e24  lfd 26, 160(1)
  0628e28  lfd 27, 168(1)
  0628e2c  lfd 28, 176(1)
  0628e30  lfd 29, 184(1)
  0628e34  lfd 30, 192(1)
  0628e38  lfd 31, 200(1)
  0628e3c  addi 1, 1, 208
  0628e40  blr

FUN_00628e4c:   # 0x628e4c, 0xd0 bytes
  0628e4c  stdu 1, -192(1)
  0628e50  mflr 0
  0628e54  std 30, 168(1)
  0628e58  lwz 30, -29432(2)
  0628e5c  addi 4, 1, 116
  0628e60  std 27, 144(1)
  0628e64  std 31, 176(1)
  0628e68  lis 31, 1025
  0628e6c  stfd 31, 184(1)
  0628e70  std 0, 208(1)
  0628e74  fmr 31, 1
  0628e78  lwz 27, -32672(30)
  0628e7c  ori 31, 31, 12632
  0628e80  std 26, 136(1)
  0628e84  std 28, 152(1)
  0628e88  li 26, 0
  0628e8c  mr 28, 3
  0628e90  lwz 3, 0(27)
  0628e94  std 29, 160(1)
  0628e98  stw 26, 120(1)
  0628e9c  mr 29, 5
  0628ea0  stw 31, 116(1)
  0628ea4  clrldi 3, 3, 32
  0628ea8  addi 5, 1, 120
  0628eac  bl 0x648730
  0628eb0  nop
  0628eb4  cmpwi 7, 3, 0
  0628eb8  bt 28, 0x628ef0
  0628ebc  lwz 9, 120(1)
  0628ec0  clrlwi 0, 28, 24
  0628ec4  clrlwi 11, 29, 24
  0628ec8  lwz 3, 0(27)
  0628ecc  addi 4, 1, 112
  0628ed0  clrldi 3, 3, 32
  0628ed4  stfs 31, 12(9)
  0628ed8  stw 0, 0(9)
  0628edc  stw 26, 4(9)
  0628ee0  stw 11, 8(9)
  0628ee4  stw 31, 112(1)
  0628ee8  bl 0x6486f8
  0628eec  nop
  0628ef0  ld 0, 208(1)
  0628ef4  ld 26, 136(1)
  0628ef8  ld 27, 144(1)
  0628efc  mtlr 0
  0628f00  ld 28, 152(1)
  0628f04  ld 29, 160(1)
  0628f08  ld 30, 168(1)
  0628f0c  ld 31, 176(1)
  0628f10  lfd 31, 184(1)
  0628f14  addi 1, 1, 192
  0628f18  blr

FUN_00628f24:   # 0x628f24, 0xe4 bytes
  0628f24  stdu 1, -192(1)
  0628f28  mflr 0
  0628f2c  std 30, 152(1)
  0628f30  lwz 30, -29432(2)
  0628f34  addi 5, 1, 120
  0628f38  std 27, 128(1)
  0628f3c  std 31, 160(1)
  0628f40  lis 31, 769
  0628f44  stfd 29, 168(1)
  0628f48  std 0, 208(1)
  0628f4c  fmr 29, 2
  0628f50  lwz 27, -32672(30)
  0628f54  ori 31, 31, 47692
  0628f58  li 0, 0
  0628f5c  stfd 30, 176(1)
  0628f60  stfd 31, 184(1)
  0628f64  fmr 30, 1
  0628f68  std 28, 136(1)
  0628f6c  fmr 31, 3
  0628f70  std 29, 144(1)
  0628f74  lwz 9, 0(27)
  0628f78  mr 28, 4
  0628f7c  mr 29, 3
  0628f80  stw 0, 120(1)
  0628f84  stw 31, 116(1)
  0628f88  clrldi 3, 9, 32
  0628f8c  addi 4, 1, 116
  0628f90  bl 0x648730
  0628f94  nop
  0628f98  cmpwi 7, 3, 0
  0628f9c  bt 28, 0x628fd8
  0628fa0  slwi 9, 29, 4
  0628fa4  lwz 0, 120(1)
  0628fa8  lwz 3, 0(27)
  0628fac  addi 4, 1, 112
  0628fb0  add 9, 9, 0
  0628fb4  clrldi 3, 3, 32
  0628fb8  clrldi 9, 9, 32
  0628fbc  stfs 31, 12(9)
  0628fc0  stw 28, 0(9)
  0628fc4  stfs 30, 4(9)
  0628fc8  stfs 29, 8(9)
  0628fcc  stw 31, 112(1)
  0628fd0  bl 0x6486f8
  0628fd4  nop
  0628fd8  ld 0, 208(1)
  0628fdc  ld 27, 128(1)
  0628fe0  ld 28, 136(1)
  0628fe4  mtlr 0
  0628fe8  ld 29, 144(1)
  0628fec  ld 30, 152(1)
  0628ff0  ld 31, 160(1)
  0628ff4  lfd 29, 168(1)
  0628ff8  lfd 30, 176(1)
  0628ffc  lfd 31, 184(1)
  0629000  addi 1, 1, 192
  0629004  blr

FUN_00629010:   # 0x629010, 0xac bytes
  0629010  stdu 1, -176(1)
  0629014  mflr 0
  0629018  std 30, 152(1)
  062901c  lwz 30, -29432(2)
  0629020  addi 4, 1, 116
  0629024  std 28, 136(1)
  0629028  std 31, 160(1)
  062902c  lis 31, 1
  0629030  stfd 31, 168(1)
  0629034  std 0, 192(1)
  0629038  fmr 31, 1
  062903c  lwz 28, -32672(30)
  0629040  ori 31, 31, 778
  0629044  li 0, 0
  0629048  std 29, 144(1)
  062904c  stw 0, 120(1)
  0629050  mr 29, 3
  0629054  lwz 9, 0(28)
  0629058  addi 5, 1, 120
  062905c  stw 31, 116(1)
  0629060  clrldi 3, 9, 32
  0629064  bl 0x648730
  0629068  nop
  062906c  cmpwi 7, 3, 0
  0629070  bt 28, 0x629098
  0629074  lwz 9, 120(1)
  0629078  addi 4, 1, 112
  062907c  lwz 3, 0(28)
  0629080  clrldi 3, 3, 32
  0629084  stfs 31, 0(9)
  0629088  stw 29, 4(9)
  062908c  stw 31, 112(1)
  0629090  bl 0x6486f8
  0629094  nop
  0629098  ld 0, 192(1)
  062909c  ld 28, 136(1)
  06290a0  ld 29, 144(1)
  06290a4  mtlr 0
  06290a8  ld 30, 152(1)
  06290ac  ld 31, 160(1)
  06290b0  lfd 31, 168(1)
  06290b4  addi 1, 1, 176
  06290b8  blr

FUN_006290c4:   # 0x6290c4, 0x104 bytes
  06290c4  stdu 1, -176(1)
  06290c8  mflr 0
  06290cc  std 30, 152(1)
  06290d0  lwz 30, -29432(2)
  06290d4  li 9, 0
  06290d8  std 28, 136(1)
  06290dc  std 0, 192(1)
  06290e0  lis 0, 257
  06290e4  stfd 31, 168(1)
  06290e8  std 29, 144(1)
  06290ec  fmr 31, 1
  06290f0  lwz 28, -32672(30)
  06290f4  ori 0, 0, 51755
  06290f8  std 31, 160(1)
  06290fc  mr 29, 5
  0629100  mr 31, 4
  0629104  stw 9, 120(1)
  0629108  lwz 3, 0(28)
  062910c  addi 4, 1, 116
  0629110  stw 0, 116(1)
  0629114  clrldi 3, 3, 32
  0629118  addi 5, 1, 120
  062911c  bl 0x648730
  0629120  nop
  0629124  cmpwi 7, 3, 0
  0629128  bt 28, 0x62917c
  062912c  lwz 9, 120(1)
  0629130  cmpwi 7, 31, 0
  0629134  stfs 31, 0(9)
  0629138  bt 30, 0x6291a0
  062913c  lwz 0, 4(9)
  0629140  cmpwi 7, 29, 0
  0629144  ori 0, 0, 1
  0629148  stw 0, 4(9)
  062914c  bt 30, 0x6291b4
  0629150  lwz 0, 4(9)
  0629154  ori 0, 0, 2
  0629158  stw 0, 4(9)
  062915c  lis 0, 257
  0629160  lwz 3, 0(28)
  0629164  addi 4, 1, 112
  0629168  ori 0, 0, 51755
  062916c  clrldi 3, 3, 32
  0629170  stw 0, 112(1)
  0629174  bl 0x6486f8
  0629178  nop
  062917c  ld 0, 192(1)
  0629180  ld 28, 136(1)
  0629184  ld 29, 144(1)
  0629188  mtlr 0
  062918c  ld 30, 152(1)
  0629190  ld 31, 160(1)
  0629194  lfd 31, 168(1)
  0629198  addi 1, 1, 176
  062919c  blr
  06291a0  lwz 0, 4(9)
  06291a4  cmpwi 7, 29, 0
  06291a8  rlwinm 0, 0, 0, 0, 30
  06291ac  stw 0, 4(9)
  06291b0  bf 30, 0x629150
  06291b4  lwz 0, 4(9)
  06291b8  rlwinm 0, 0, 30, 1, 31
  06291bc  rotlwi 0, 0, 2
  06291c0  stw 0, 4(9)
  06291c4  b 0x62915c

FUN_006291d0:   # 0x6291d0, 0x9c bytes
  06291d0  stdu 1, -160(1)
  06291d4  mflr 0
  06291d8  std 30, 136(1)
  06291dc  lwz 30, -29432(2)
  06291e0  addi 4, 1, 116
  06291e4  std 29, 128(1)
  06291e8  std 31, 144(1)
  06291ec  lis 31, 513
  06291f0  stfd 31, 152(1)
  06291f4  std 0, 176(1)
  06291f8  fmr 31, 1
  06291fc  lwz 29, -32672(30)
  0629200  ori 31, 31, 50656
  0629204  li 0, 0
  0629208  stw 31, 116(1)
  062920c  stw 0, 120(1)
  0629210  addi 5, 1, 120
  0629214  lwz 3, 0(29)
  0629218  clrldi 3, 3, 32
  062921c  bl 0x648730
  0629220  nop
  0629224  cmpwi 7, 3, 0
  0629228  bt 28, 0x62924c
  062922c  lwz 9, 120(1)
  0629230  addi 4, 1, 112
  0629234  lwz 3, 0(29)
  0629238  clrldi 3, 3, 32
  062923c  stfs 31, 0(9)
  0629240  stw 31, 112(1)
  0629244  bl 0x6486f8
  0629248  nop
  062924c  ld 0, 176(1)
  0629250  ld 29, 128(1)
  0629254  ld 30, 136(1)
  0629258  mtlr 0
  062925c  ld 31, 144(1)
  0629260  lfd 31, 152(1)
  0629264  addi 1, 1, 160
  0629268  blr

FUN_00629274:   # 0x629274, 0xd0 bytes
  0629274  stdu 1, -160(1)
  0629278  mflr 0
  062927c  std 30, 144(1)
  0629280  lwz 30, -29432(2)
  0629284  slwi 3, 3, 2
  0629288  std 0, 176(1)
  062928c  extsw 3, 3
  0629290  lis 0, 3073
  0629294  std 29, 136(1)
  0629298  lwz 9, -32656(30)
  062929c  ori 0, 0, 36676
  06292a0  std 31, 152(1)
  06292a4  mr 29, 5
  06292a8  mr 31, 4
  06292ac  stw 0, 112(1)
  06292b0  lwzx 3, 9, 3
  06292b4  addi 4, 1, 112
  06292b8  addi 5, 1, 116
  06292bc  clrldi 3, 3, 32
  06292c0  bl 0x6487c0
  06292c4  nop
  06292c8  cmpwi 7, 3, 0
  06292cc  bt 28, 0x62930c
  06292d0  cmpwi 7, 29, 0
  06292d4  bt 30, 0x629328
  06292d8  lwz 9, 116(1)
  06292dc  addi 0, 9, 16
  06292e0  li 9, 8
  06292e4  li 10, 0
  06292e8  mtctr 9
  06292ec  add 9, 10, 0
  06292f0  add 11, 10, 31
  06292f4  clrldi 9, 9, 32
  06292f8  clrldi 11, 11, 32
  06292fc  addi 10, 10, 4
  0629300  lfs 0, 0(9)
  0629304  stfs 0, 0(11)
  0629308  bdnz 0x6292ec
  062930c  ld 0, 176(1)
  0629310  ld 29, 136(1)
  0629314  ld 30, 144(1)
  0629318  mtlr 0
  062931c  ld 31, 152(1)
  0629320  addi 1, 1, 160
  0629324  blr
  0629328  lwz 9, 116(1)
  062932c  mr 11, 9
  0629330  addi 9, 9, 16
  0629334  lwz 0, 8(11)
  0629338  slwi 0, 0, 2
  062933c  add 0, 9, 0
  0629340  b 0x6292e0

FUN_0062934c:   # 0x62934c, 0xb0 bytes
  062934c  stdu 1, -176(1)
  0629350  mflr 0
  0629354  std 30, 160(1)
  0629358  lwz 30, -29432(2)
  062935c  slwi 3, 3, 2
  0629360  std 27, 136(1)
  0629364  std 28, 144(1)
  0629368  extsw 28, 3
  062936c  std 31, 168(1)
  0629370  lwz 27, -32656(30)
  0629374  lis 31, 3585
  0629378  std 0, 192(1)
  062937c  ori 31, 31, 33003
  0629380  li 0, 0
  0629384  std 29, 152(1)
  0629388  lwzx 3, 27, 28
  062938c  mr 29, 4
  0629390  stw 0, 120(1)
  0629394  stw 31, 116(1)
  0629398  clrldi 3, 3, 32
  062939c  addi 4, 1, 116
  06293a0  addi 5, 1, 120
  06293a4  bl 0x648730
  06293a8  nop
  06293ac  cmpwi 7, 3, 0
  06293b0  bt 28, 0x6293d8
  06293b4  lwz 9, 120(1)
  06293b8  clrlwi 0, 29, 24
  06293bc  lwzx 3, 27, 28
  06293c0  addi 4, 1, 112
  06293c4  clrldi 3, 3, 32
  06293c8  stw 0, 0(9)
  06293cc  stw 31, 112(1)
  06293d0  bl 0x6486f8
  06293d4  nop
  06293d8  ld 0, 192(1)
  06293dc  ld 27, 136(1)
  06293e0  ld 28, 144(1)
  06293e4  mtlr 0
  06293e8  ld 29, 152(1)
  06293ec  ld 30, 160(1)
  06293f0  ld 31, 168(1)
  06293f4  addi 1, 1, 176
  06293f8  blr

FUN_00629404:   # 0x629404, 0xac bytes
  0629404  stdu 1, -176(1)
  0629408  mflr 0
  062940c  std 30, 152(1)
  0629410  lwz 30, -29432(2)
  0629414  slwi 3, 3, 2
  0629418  std 28, 136(1)
  062941c  std 29, 144(1)
  0629420  extsw 29, 3
  0629424  stfd 31, 168(1)
  0629428  std 31, 160(1)
  062942c  fmr 31, 1
  0629430  lwz 28, -32656(30)
  0629434  lis 31, 4097
  0629438  std 0, 192(1)
  062943c  ori 31, 31, 46474
  0629440  li 0, 0
  0629444  stw 31, 116(1)
  0629448  lwzx 3, 28, 29
  062944c  addi 4, 1, 116
  0629450  stw 0, 120(1)
  0629454  clrldi 3, 3, 32
  0629458  addi 5, 1, 120
  062945c  bl 0x648730
  0629460  nop
  0629464  cmpwi 7, 3, 0
  0629468  bt 28, 0x62948c
  062946c  lwz 9, 120(1)
  0629470  addi 4, 1, 112
  0629474  lwzx 3, 28, 29
  0629478  clrldi 3, 3, 32
  062947c  stfs 31, 0(9)
  0629480  stw 31, 112(1)
  0629484  bl 0x6486f8
  0629488  nop
  062948c  ld 0, 192(1)
  0629490  ld 28, 136(1)
  0629494  ld 29, 144(1)
  0629498  mtlr 0
  062949c  ld 30, 152(1)
  06294a0  ld 31, 160(1)
  06294a4  lfd 31, 168(1)
  06294a8  addi 1, 1, 176
  06294ac  blr

FUN_006294b8:   # 0x6294b8, 0xcc bytes
  06294b8  stdu 1, -176(1)
  06294bc  mflr 0
  06294c0  std 30, 144(1)
  06294c4  lwz 30, -29432(2)
  06294c8  slwi 3, 3, 2
  06294cc  std 28, 128(1)
  06294d0  std 29, 136(1)
  06294d4  extsw 29, 3
  06294d8  stfd 30, 160(1)
  06294dc  std 31, 152(1)
  06294e0  fmr 30, 1
  06294e4  lwz 28, -32656(30)
  06294e8  lis 31, 3329
  06294ec  std 0, 192(1)
  06294f0  ori 31, 31, 14738
  06294f4  stfd 31, 168(1)
  06294f8  li 0, 0
  06294fc  fmr 31, 2
  0629500  stw 31, 116(1)
  0629504  lwzx 3, 28, 29
  0629508  addi 4, 1, 116
  062950c  stw 0, 120(1)
  0629510  clrldi 3, 3, 32
  0629514  addi 5, 1, 120
  0629518  bl 0x648730
  062951c  nop
  0629520  cmpwi 7, 3, 0
  0629524  bt 28, 0x62955c
  0629528  lwz 9, 120(1)
  062952c  li 0, 0
  0629530  lfs 0, -32404(30)
  0629534  addi 4, 1, 112
  0629538  lwzx 3, 28, 29
  062953c  clrldi 3, 3, 32
  0629540  stfs 31, 12(9)
  0629544  stw 0, 0(9)
  0629548  stfs 0, 4(9)
  062954c  stfs 30, 8(9)
  0629550  stw 31, 112(1)
  0629554  bl 0x6486f8
  0629558  nop
  062955c  ld 0, 192(1)
  0629560  ld 28, 128(1)
  0629564  ld 29, 136(1)
  0629568  mtlr 0
  062956c  ld 30, 144(1)
  0629570  ld 31, 152(1)
  0629574  lfd 30, 160(1)
  0629578  lfd 31, 168(1)
  062957c  addi 1, 1, 176
  0629580  blr

FUN_0062958c:   # 0x62958c, 0xbc bytes
  062958c  stdu 1, -176(1)
  0629590  mflr 0
  0629594  std 30, 144(1)
  0629598  lwz 30, -29432(2)
  062959c  slwi 3, 3, 2
  06295a0  std 28, 128(1)
  06295a4  std 29, 136(1)
  06295a8  extsw 29, 3
  06295ac  stfd 30, 160(1)
  06295b0  std 31, 152(1)
  06295b4  fmr 30, 1
  06295b8  lwz 28, -32656(30)
  06295bc  lis 31, 2817
  06295c0  std 0, 192(1)
  06295c4  ori 31, 31, 16543
  06295c8  stfd 31, 168(1)
  06295cc  li 0, 0
  06295d0  fmr 31, 2
  06295d4  stw 31, 116(1)
  06295d8  lwzx 3, 28, 29
  06295dc  addi 4, 1, 116
  06295e0  stw 0, 120(1)
  06295e4  clrldi 3, 3, 32
  06295e8  addi 5, 1, 120
  06295ec  bl 0x648730
  06295f0  nop
  06295f4  cmpwi 7, 3, 0
  06295f8  bt 28, 0x629620
  06295fc  lwz 9, 120(1)
  0629600  addi 4, 1, 112
  0629604  lwzx 3, 28, 29
  0629608  clrldi 3, 3, 32
  062960c  stfs 31, 4(9)
  0629610  stfs 30, 0(9)
  0629614  stw 31, 112(1)
  0629618  bl 0x6486f8
  062961c  nop
  0629620  ld 0, 192(1)
  0629624  ld 28, 128(1)
  0629628  ld 29, 136(1)
  062962c  mtlr 0
  0629630  ld 30, 144(1)
  0629634  ld 31, 152(1)
  0629638  lfd 30, 160(1)
  062963c  lfd 31, 168(1)
  0629640  addi 1, 1, 176
  0629644  blr

FUN_00629650:   # 0x629650, 0xb0 bytes
  0629650  stdu 1, -176(1)
  0629654  mflr 0
  0629658  std 30, 160(1)
  062965c  lwz 30, -29432(2)
  0629660  slwi 3, 3, 2
  0629664  std 27, 136(1)
  0629668  std 28, 144(1)
  062966c  extsw 28, 3
  0629670  std 31, 168(1)
  0629674  lwz 27, -32656(30)
  0629678  lis 31, 2561
  062967c  std 0, 192(1)
  0629680  ori 31, 31, 53009
  0629684  li 0, 0
  0629688  std 29, 152(1)
  062968c  lwzx 3, 27, 28
  0629690  mr 29, 4
  0629694  stw 0, 120(1)
  0629698  stw 31, 116(1)
  062969c  clrldi 3, 3, 32
  06296a0  addi 4, 1, 116
  06296a4  addi 5, 1, 120
  06296a8  bl 0x648730
  06296ac  nop
  06296b0  cmpwi 7, 3, 0
  06296b4  bt 28, 0x6296dc
  06296b8  lwz 9, 120(1)
  06296bc  clrlwi 0, 29, 24
  06296c0  lwzx 3, 27, 28
  06296c4  addi 4, 1, 112
  06296c8  clrldi 3, 3, 32
  06296cc  stw 0, 0(9)
  06296d0  stw 31, 112(1)
  06296d4  bl 0x6486f8
  06296d8  nop
  06296dc  ld 0, 192(1)
  06296e0  ld 27, 136(1)
  06296e4  ld 28, 144(1)
  06296e8  mtlr 0
  06296ec  ld 29, 152(1)
  06296f0  ld 30, 160(1)
  06296f4  ld 31, 168(1)
  06296f8  addi 1, 1, 176
  06296fc  blr

FUN_00629708:   # 0x629708, 0xa0 bytes
  0629708  stdu 1, -144(1)
  062970c  mflr 0
  0629710  std 30, 128(1)
  0629714  lwz 30, -29432(2)
  0629718  slwi 3, 3, 2
  062971c  std 0, 160(1)
  0629720  extsw 3, 3
  0629724  lis 0, 513
  0629728  std 31, 136(1)
  062972c  lwz 9, -32656(30)
  0629730  ori 0, 0, 31573
  0629734  mr 31, 4
  0629738  stw 0, 112(1)
  062973c  addi 4, 1, 112
  0629740  addi 5, 1, 116
  0629744  lwzx 3, 9, 3
  0629748  clrldi 3, 3, 32
  062974c  bl 0x6487c0
  0629750  nop
  0629754  cmpwi 7, 3, 0
  0629758  bt 28, 0x629790
  062975c  lwz 9, 116(1)
  0629760  li 10, 0
  0629764  addi 0, 9, 288
  0629768  li 9, 8
  062976c  mtctr 9
  0629770  add 9, 10, 0
  0629774  add 11, 10, 31
  0629778  clrldi 9, 9, 32
  062977c  clrldi 11, 11, 32
  0629780  addi 10, 10, 4
  0629784  lfs 0, 0(9)
  0629788  stfs 0, 0(11)
  062978c  bdnz 0x629770
  0629790  ld 0, 160(1)
  0629794  ld 30, 128(1)
  0629798  ld 31, 136(1)
  062979c  mtlr 0
  06297a0  addi 1, 1, 144
  06297a4  blr

FUN_006297b0:   # 0x6297b0, 0xfc bytes
  06297b0  stdu 1, -208(1)
  06297b4  mflr 0
  06297b8  std 30, 144(1)
  06297bc  lwz 30, -29432(2)
  06297c0  slwi 3, 3, 2
  06297c4  std 28, 128(1)
  06297c8  std 29, 136(1)
  06297cc  extsw 29, 3
  06297d0  stfd 26, 160(1)
  06297d4  std 31, 152(1)
  06297d8  fmr 26, 5
  06297dc  lwz 28, -32656(30)
  06297e0  lis 31, 1025
  06297e4  std 0, 224(1)
  06297e8  ori 31, 31, 60149
  06297ec  stfd 27, 168(1)
  06297f0  li 0, 0
  06297f4  stfd 28, 176(1)
  06297f8  stfd 29, 184(1)
  06297fc  fmr 28, 3
  0629800  lwzx 3, 28, 29
  0629804  fmr 29, 2
  0629808  stfd 30, 192(1)
  062980c  fmr 27, 4
  0629810  stfd 31, 200(1)
  0629814  fmr 30, 1
  0629818  stw 0, 120(1)
  062981c  fmr 31, 6
  0629820  stw 31, 116(1)
  0629824  clrldi 3, 3, 32
  0629828  addi 4, 1, 116
  062982c  addi 5, 1, 120
  0629830  bl 0x648730
  0629834  nop
  0629838  cmpwi 7, 3, 0
  062983c  bt 28, 0x629874
  0629840  lwz 9, 120(1)
  0629844  addi 4, 1, 112
  0629848  lwzx 3, 28, 29
  062984c  clrldi 3, 3, 32
  0629850  stfs 31, 20(9)
  0629854  stfs 30, 0(9)
  0629858  stfs 29, 4(9)
  062985c  stfs 28, 8(9)
  0629860  stfs 27, 12(9)
  0629864  stfs 26, 16(9)
  0629868  stw 31, 112(1)
  062986c  bl 0x6486f8
  0629870  nop
  0629874  ld 0, 224(1)
  0629878  ld 28, 128(1)
  062987c  ld 29, 136(1)
  0629880  mtlr 0
  0629884  ld 30, 144(1)
  0629888  ld 31, 152(1)
  062988c  lfd 26, 160(1)
  0629890  lfd 27, 168(1)
  0629894  lfd 28, 176(1)
  0629898  lfd 29, 184(1)
  062989c  lfd 30, 192(1)
  06298a0  lfd 31, 200(1)
  06298a4  addi 1, 1, 208
  06298a8  blr

FUN_006298b4:   # 0x6298b4, 0xfc bytes
  06298b4  stdu 1, -208(1)
  06298b8  mflr 0
  06298bc  std 30, 144(1)
  06298c0  lwz 30, -29432(2)
  06298c4  slwi 3, 3, 2
  06298c8  std 28, 128(1)
  06298cc  std 29, 136(1)
  06298d0  extsw 29, 3
  06298d4  stfd 26, 160(1)
  06298d8  std 31, 152(1)
  06298dc  fmr 26, 5
  06298e0  lwz 28, -32656(30)
  06298e4  lis 31, 769
  06298e8  std 0, 224(1)
  06298ec  ori 31, 31, 60149
  06298f0  stfd 27, 168(1)
  06298f4  li 0, 0
  06298f8  stfd 28, 176(1)
  06298fc  stfd 29, 184(1)
  0629900  fmr 28, 3
  0629904  lwzx 3, 28, 29
  0629908  fmr 29, 2
  062990c  stfd 30, 192(1)
  0629910  fmr 27, 4
  0629914  stfd 31, 200(1)
  0629918  fmr 30, 1
  062991c  stw 0, 120(1)
  0629920  fmr 31, 6
  0629924  stw 31, 116(1)
  0629928  clrldi 3, 3, 32
  062992c  addi 4, 1, 116
  0629930  addi 5, 1, 120
  0629934  bl 0x648730
  0629938  nop
  062993c  cmpwi 7, 3, 0
  0629940  bt 28, 0x629978
  0629944  lwz 9, 120(1)
  0629948  addi 4, 1, 112
  062994c  lwzx 3, 28, 29
  0629950  clrldi 3, 3, 32
  0629954  stfs 31, 20(9)
  0629958  stfs 30, 0(9)
  062995c  stfs 29, 4(9)
  0629960  stfs 28, 8(9)
  0629964  stfs 27, 12(9)
  0629968  stfs 26, 16(9)
  062996c  stw 31, 112(1)
  0629970  bl 0x6486f8
  0629974  nop
  0629978  ld 0, 224(1)
  062997c  ld 28, 128(1)
  0629980  ld 29, 136(1)
  0629984  mtlr 0
  0629988  ld 30, 144(1)
  062998c  ld 31, 152(1)
  0629990  lfd 26, 160(1)
  0629994  lfd 27, 168(1)
  0629998  lfd 28, 176(1)
  062999c  lfd 29, 184(1)
  06299a0  lfd 30, 192(1)
  06299a4  lfd 31, 200(1)
  06299a8  addi 1, 1, 208
  06299ac  blr

FUN_006299b8:   # 0x6299b8, 0x1f8 bytes
  06299b8  stdu 1, -192(1)
  06299bc  mflr 0
  06299c0  lis 9, 513
  06299c4  std 0, 208(1)
  06299c8  lwz 0, 108(3)
  06299cc  ori 9, 9, 28446
  06299d0  std 25, 136(1)
  06299d4  mr 25, 0
  06299d8  li 0, 0
  06299dc  std 30, 176(1)
  06299e0  std 31, 184(1)
  06299e4  std 26, 144(1)
  06299e8  mr 31, 4
  06299ec  lwz 30, -29432(2)
  06299f0  std 27, 152(1)
  06299f4  std 28, 160(1)
  06299f8  std 29, 168(1)
  06299fc  stw 9, 116(1)
  0629a00  stw 0, 120(1)
  0629a04  mr 3, 25
  0629a08  addi 4, 1, 116
  0629a0c  addi 5, 1, 120
  0629a10  bl 0x648730
  0629a14  nop
  0629a18  cmpwi 7, 3, 0
  0629a1c  bf 30, 0x629b70
  0629a20  lwz 26, 120(1)
  0629a24  li 0, 4
  0629a28  lfs 13, 8(31)
  0629a2c  clrldi 9, 26, 32
  0629a30  lfs 0, -32684(30)
  0629a34  fcmpu 7, 13, 0
  0629a38  addi 29, 26, 4
  0629a3c  stw 0, 0(9)
  0629a40  li 0, 1
  0629a44  bf 29, 0x629ba8
  0629a48  clrldi 29, 29, 32
  0629a4c  lfs 0, -32612(30)
  0629a50  addi 28, 26, 20
  0629a54  li 4, 1
  0629a58  clrldi 28, 28, 32
  0629a5c  addi 27, 26, 36
  0629a60  stw 0, 12(29)
  0629a64  stfs 0, 0(29)
  0629a68  clrldi 27, 27, 32
  0629a6c  lfs 0, 0(31)
  0629a70  lwz 3, 4(31)
  0629a74  stfs 0, 8(29)
  0629a78  bl 0x624798
  0629a7c  li 0, 2
  0629a80  stfs 1, 4(29)
  0629a84  li 4, 0
  0629a88  lfs 0, 16(31)
  0629a8c  addi 29, 26, 52
  0629a90  stw 0, 12(28)
  0629a94  stfs 0, 0(28)
  0629a98  clrldi 29, 29, 32
  0629a9c  lfs 0, 8(31)
  0629aa0  lwz 3, 12(31)
  0629aa4  stfs 0, 8(28)
  0629aa8  bl 0x624798
  0629aac  lbz 9, 32(31)
  0629ab0  stfs 1, 4(28)
  0629ab4  li 4, 0
  0629ab8  addi 9, 9, -1
  0629abc  lfs 0, 20(31)
  0629ac0  stfs 0, 0(27)
  0629ac4  srwi 9, 9, 31
  0629ac8  lfs 0, 24(31)
  0629acc  stfs 0, 8(27)
  0629ad0  addi 9, 9, 2
  0629ad4  stw 9, 12(27)
  0629ad8  lwz 3, 28(31)
  0629adc  bl 0x624798
  0629ae0  li 0, 0
  0629ae4  li 9, 4
  0629ae8  stfs 1, 4(27)
  0629aec  stw 0, 0(29)
  0629af0  stw 9, 12(29)
  0629af4  lfs 0, 36(31)
  0629af8  li 4, 0
  0629afc  lwz 3, 40(31)
  0629b00  stfs 0, 8(29)
  0629b04  bl 0x624798
  0629b08  lis 0, 513
  0629b0c  stfs 1, 4(29)
  0629b10  mr 3, 25
  0629b14  ori 0, 0, 28446
  0629b18  addi 4, 1, 112
  0629b1c  stw 0, 112(1)
  0629b20  bl 0x6486f8
  0629b24  nop
  0629b28  cmpwi 7, 3, 0
  0629b2c  mr 4, 3
  0629b30  bt 30, 0x629b44
  0629b34  lwz 3, -32392(30)
  0629b38  extsw 4, 4
  0629b3c  bl 0x5cd098
  0629b40  nop
  0629b44  ld 0, 208(1)
  0629b48  ld 25, 136(1)
  0629b4c  ld 26, 144(1)
  0629b50  mtlr 0
  0629b54  ld 27, 152(1)
  0629b58  ld 28, 160(1)
  0629b5c  ld 29, 168(1)
  0629b60  ld 30, 176(1)
  0629b64  ld 31, 184(1)
  0629b68  addi 1, 1, 192
  0629b6c  blr
  0629b70  extsw 4, 3
  0629b74  lwz 3, -32396(30)
  0629b78  bl 0x5cd098
  0629b7c  nop
  0629b80  lwz 26, 120(1)
  0629b84  lfs 13, 8(31)
  0629b88  clrldi 9, 26, 32
  0629b8c  lfs 0, -32684(30)
  0629b90  fcmpu 7, 13, 0
  0629b94  li 0, 4
  0629b98  addi 29, 26, 4
  0629b9c  stw 0, 0(9)
  0629ba0  li 0, 1
  0629ba4  bt 29, 0x629a48
  0629ba8  li 0, 2
  0629bac  b 0x629a48

snd_SynthUnpauseVoice:   # 0x629bb8, 0x80 bytes
  0629bb8  cmpdi 3, 0
  0629bbc  mflr 0
  0629bc0  stdu 1, -128(1)
  0629bc4  std 30, 112(1)
  0629bc8  std 31, 120(1)
  0629bcc  std 0, 144(1)
  0629bd0  lwz 30, -29432(2)
  0629bd4  mr 31, 3
  0629bd8  li 5, 3529
  0629bdc  bt 2, 0x629c04
  0629be0  lwz 3, 108(31)
  0629be4  bl 0x647e98
  0629be8  nop
  0629bec  ld 0, 144(1)
  0629bf0  ld 30, 112(1)
  0629bf4  ld 31, 120(1)
  0629bf8  mtlr 0
  0629bfc  addi 1, 1, 128
  0629c00  blr
  0629c04  lwz 4, -32628(30)
  0629c08  lwz 3, -32388(30)
  0629c0c  bl 0x61948c
  0629c10  nop
  0629c14  lwz 3, 108(31)
  0629c18  bl 0x647e98
  0629c1c  nop
  0629c20  ld 0, 144(1)
  0629c24  ld 30, 112(1)
  0629c28  ld 31, 120(1)
  0629c2c  mtlr 0
  0629c30  addi 1, 1, 128
  0629c34  blr

snd_SynthPauseVoice:   # 0x629c38, 0x80 bytes
  0629c38  cmpdi 3, 0
  0629c3c  mflr 0
  0629c40  stdu 1, -128(1)
  0629c44  std 30, 112(1)
  0629c48  std 31, 120(1)
  0629c4c  std 0, 144(1)
  0629c50  lwz 30, -29432(2)
  0629c54  mr 31, 3
  0629c58  li 5, 3504
  0629c5c  bt 2, 0x629c84
  0629c60  lwz 3, 108(31)
  0629c64  bl 0x647e74
  0629c68  nop
  0629c6c  ld 0, 144(1)
  0629c70  ld 30, 112(1)
  0629c74  ld 31, 120(1)
  0629c78  mtlr 0
  0629c7c  addi 1, 1, 128
  0629c80  blr
  0629c84  lwz 4, -32628(30)
  0629c88  lwz 3, -32384(30)
  0629c8c  bl 0x61948c
  0629c90  nop
  0629c94  lwz 3, 108(31)
  0629c98  bl 0x647e74
  0629c9c  nop
  0629ca0  ld 0, 144(1)
  0629ca4  ld 30, 112(1)
  0629ca8  ld 31, 120(1)
  0629cac  mtlr 0
  0629cb0  addi 1, 1, 128
  0629cb4  blr

FUN_00629cb8:   # 0x629cb8, 0x1f8 bytes
  0629cb8  stdu 1, -256(1)
  0629cbc  mflr 0
  0629cc0  std 30, 240(1)
  0629cc4  lwz 30, -29432(2)
  0629cc8  std 0, 272(1)
  0629ccc  std 17, 136(1)
  0629cd0  std 18, 144(1)
  0629cd4  std 19, 152(1)
  0629cd8  std 21, 168(1)
  0629cdc  std 23, 184(1)
  0629ce0  std 26, 208(1)
  0629ce4  std 16, 128(1)
  0629ce8  std 20, 160(1)
  0629cec  std 22, 176(1)
  0629cf0  std 24, 192(1)
  0629cf4  std 25, 200(1)
  0629cf8  std 27, 216(1)
  0629cfc  std 28, 224(1)
  0629d00  std 29, 232(1)
  0629d04  std 31, 248(1)
  0629d08  lwz 23, 20(3)
  0629d0c  lwz 26, 12(3)
  0629d10  lwz 18, 4(3)
  0629d14  lwz 17, 8(3)
  0629d18  lwz 19, 24(3)
  0629d1c  bl 0x6272e8
  0629d20  lwz 21, -32380(30)
  0629d24  lwz 0, 0(21)
  0629d28  cmpwi 7, 0, 0
  0629d2c  bt 30, 0x629e34
  0629d30  li 27, 0
  0629d34  lwz 24, -32488(30)
  0629d38  li 28, 0
  0629d3c  addi 22, 1, 112
  0629d40  li 25, 0
  0629d44  add 20, 26, 19
  0629d48  li 16, 1
  0629d4c  b 0x629dac
  0629d50  cmplw 7, 20, 0
  0629d54  bf 29, 0x629dfc
  0629d58  lwz 11, 28(9)
  0629d5c  add 0, 0, 23
  0629d60  stw 25, 16(9)
  0629d64  cmpwi 7, 11, 0
  0629d68  stw 0, 20(9)
  0629d6c  li 0, 0
  0629d70  bt 30, 0x629d78
  0629d74  add 0, 23, 11
  0629d78  li 4, 1
  0629d7c  stw 0, 28(9)
  0629d80  stw 16, 36(9)
  0629d84  stw 25, 24(9)
  0629d88  mr 3, 29
  0629d8c  clrldi 4, 4, 63
  0629d90  bl 0x647f34
  0629d94  nop
  0629d98  addi 27, 27, 1
  0629d9c  lwz 0, 0(21)
  0629da0  addi 28, 28, 116
  0629da4  cmplw 7, 0, 27
  0629da8  bf 29, 0x629e34
  0629dac  lwz 0, 0(24)
  0629db0  clrldi 4, 22, 32
  0629db4  stw 25, 112(1)
  0629db8  add 0, 28, 0
  0629dbc  clrldi 31, 0, 32
  0629dc0  lwz 0, 108(31)
  0629dc4  mr 3, 0
  0629dc8  mr 29, 0
  0629dcc  bl 0x647ed0
  0629dd0  nop
  0629dd4  lwz 9, 112(1)
  0629dd8  cmpwi 7, 9, 0
  0629ddc  bt 30, 0x629d98
  0629de0  lbz 0, 104(31)
  0629de4  cmpwi 7, 0, 2
  0629de8  bt 30, 0x629e04
  0629dec  clrldi 9, 9, 32
  0629df0  lwz 0, 20(9)
  0629df4  cmplw 7, 0, 26
  0629df8  bf 28, 0x629d50
  0629dfc  li 4, 0
  0629e00  b 0x629d88
  0629e04  clrldi 9, 9, 32
  0629e08  lwz 0, 4(9)
  0629e0c  cmplw 7, 0, 26
  0629e10  bt 28, 0x629dfc
  0629e14  cmplw 7, 20, 0
  0629e18  bf 29, 0x629dfc
  0629e1c  add 0, 0, 23
  0629e20  li 4, 1
  0629e24  stw 0, 4(9)
  0629e28  stw 16, 44(9)
  0629e2c  stw 25, 0(9)
  0629e30  b 0x629d88
  0629e34  addi 5, 19, 15
  0629e38  clrldi 4, 18, 32
  0629e3c  rlwinm 5, 5, 0, 0, 27
  0629e40  clrldi 3, 17, 32
  0629e44  bl 0x642648
  0629e48  nop
  0629e4c  lwz 4, -32676(30)
  0629e50  lwz 3, -32376(30)
  0629e54  li 5, 1
  0629e58  bl 0x6426c0
  0629e5c  nop
  0629e60  ld 0, 272(1)
  0629e64  ld 16, 128(1)
  0629e68  ld 17, 136(1)
  0629e6c  mtlr 0
  0629e70  ld 18, 144(1)
  0629e74  ld 19, 152(1)
  0629e78  ld 20, 160(1)
  0629e7c  ld 21, 168(1)
  0629e80  ld 22, 176(1)
  0629e84  ld 23, 184(1)
  0629e88  ld 24, 192(1)
  0629e8c  ld 25, 200(1)
  0629e90  ld 26, 208(1)
  0629e94  ld 27, 216(1)
  0629e98  ld 28, 224(1)
  0629e9c  ld 29, 232(1)
  0629ea0  ld 30, 240(1)
  0629ea4  ld 31, 248(1)
  0629ea8  addi 1, 1, 256
  0629eac  blr

snd_SynthKeyOffVoice:   # 0x629eb0, 0xc8 bytes
  0629eb0  cmpwi 7, 3, 0
  0629eb4  mflr 0
  0629eb8  stdu 1, -144(1)
  0629ebc  std 29, 120(1)
  0629ec0  std 30, 128(1)
  0629ec4  std 31, 136(1)
  0629ec8  std 0, 160(1)
  0629ecc  lwz 30, -29432(2)
  0629ed0  mr 29, 3
  0629ed4  li 5, 3342
  0629ed8  bt 30, 0x629f64
  0629edc  lwz 3, 108(29)
  0629ee0  lwz 31, 112(29)
  0629ee4  lwz 9, 20(3)
  0629ee8  lwz 0, 0(9)
  0629eec  lwsync
  0629ef0  rlwinm 0, 0, 0, 29, 29
  0629ef4  cmpwi 7, 0, 0
  0629ef8  bf 30, 0x629f5c
  0629efc  lwz 9, 16(3)
  0629f00  ld 0, 0(9)
  0629f04  lwsync
  0629f08  rlwinm 0, 0, 0, 28, 28
  0629f0c  li 29, 0
  0629f10  cmpdi 7, 0, 0
  0629f14  bf 30, 0x629f5c
  0629f18  clrldi 29, 29, 32
  0629f1c  mr 4, 29
  0629f20  bl 0x647dd0
  0629f24  nop
  0629f28  cmpwi 7, 31, 0
  0629f2c  clrldi 3, 31, 32
  0629f30  mr 4, 29
  0629f34  bt 30, 0x629f40
  0629f38  bl 0x647dd0
  0629f3c  nop
  0629f40  ld 0, 160(1)
  0629f44  ld 29, 120(1)
  0629f48  ld 30, 128(1)
  0629f4c  mtlr 0
  0629f50  ld 31, 136(1)
  0629f54  addi 1, 1, 144
  0629f58  blr
  0629f5c  li 29, 1
  0629f60  b 0x629f18
  0629f64  lwz 4, -32628(30)
  0629f68  lwz 3, -32372(30)
  0629f6c  bl 0x61948c
  0629f70  nop
  0629f74  b 0x629edc

snd_SynthSilenceVoice:   # 0x629f78, 0x80 bytes
  0629f78  cmpwi 7, 3, 0
  0629f7c  mflr 0
  0629f80  stdu 1, -128(1)
  0629f84  std 30, 112(1)
  0629f88  std 31, 120(1)
  0629f8c  std 0, 144(1)
  0629f90  lwz 30, -29432(2)
  0629f94  mr 31, 3
  0629f98  li 5, 3311
  0629f9c  bt 30, 0x629fe4
  0629fa0  lwz 3, 108(31)
  0629fa4  li 4, 1
  0629fa8  lwz 31, 112(31)
  0629fac  bl 0x647dd0
  0629fb0  nop
  0629fb4  li 4, 1
  0629fb8  cmpwi 7, 31, 0
  0629fbc  clrldi 3, 31, 32
  0629fc0  bt 30, 0x629fcc
  0629fc4  bl 0x647dd0
  0629fc8  nop
  0629fcc  ld 0, 144(1)
  0629fd0  ld 30, 112(1)
  0629fd4  ld 31, 120(1)
  0629fd8  mtlr 0
  0629fdc  addi 1, 1, 128
  0629fe0  blr
  0629fe4  lwz 4, -32628(30)
  0629fe8  lwz 3, -32368(30)
  0629fec  bl 0x61948c
  0629ff0  nop
  0629ff4  b 0x629fa0

FUN_00629ff8:   # 0x629ff8, 0x26c bytes
  0629ff8  stdu 1, -224(1)
  0629ffc  mflr 0
  062a000  std 30, 184(1)
  062a004  lwz 30, -29432(2)
  062a008  std 26, 152(1)
  062a00c  std 0, 240(1)
  062a010  std 25, 144(1)
  062a014  stfd 29, 200(1)
  062a018  mr 25, 3
  062a01c  lwz 26, -32380(30)
  062a020  stfd 30, 208(1)
  062a024  stfd 31, 216(1)
  062a028  std 24, 136(1)
  062a02c  std 27, 160(1)
  062a030  lwz 0, 0(26)
  062a034  std 28, 168(1)
  062a038  cmpwi 7, 0, 0
  062a03c  std 29, 176(1)
  062a040  std 31, 192(1)
  062a044  bt 30, 0x62a074
  062a048  lwz 27, -32488(30)
  062a04c  clrldi 0, 0, 32
  062a050  li 11, 0
  062a054  mtctr 0
  062a058  li 10, 0
  062a05c  lwz 0, 0(27)
  062a060  add 9, 11, 0
  062a064  addi 11, 11, 116
  062a068  clrldi 9, 9, 32
  062a06c  stb 10, 106(9)
  062a070  bdnz 0x62a060
  062a074  lwz 29, -32364(30)
  062a078  li 27, 0
  062a07c  addi 28, 29, 128
  062a080  b 0x62a0a4
  062a084  lbz 9, 9(31)
  062a088  addi 0, 29, -4
  062a08c  cmpwi 7, 9, 0
  062a090  clrldi 11, 0, 32
  062a094  bf 30, 0x62a0ec
  062a098  addi 29, 29, 16
  062a09c  cmpw 7, 29, 28
  062a0a0  bt 30, 0x62a108
  062a0a4  clrldi 31, 29, 32
  062a0a8  lwz 0, 0(31)
  062a0ac  cmpwi 7, 0, 0
  062a0b0  bt 30, 0x62a098
  062a0b4  lbz 9, 8(31)
  062a0b8  addi 0, 29, -4
  062a0bc  cmpwi 7, 9, 0
  062a0c0  clrldi 11, 0, 32
  062a0c4  bt 30, 0x62a084
  062a0c8  lwz 3, 0(11)
  062a0cc  bl 0x647e74
  062a0d0  nop
  062a0d4  lbz 9, 9(31)
  062a0d8  cmpwi 7, 9, 0
  062a0dc  addi 0, 29, -4
  062a0e0  stb 27, 8(31)
  062a0e4  clrldi 11, 0, 32
  062a0e8  bt 30, 0x62a098
  062a0ec  lwz 3, 0(11)
  062a0f0  addi 29, 29, 16
  062a0f4  bl 0x647e98
  062a0f8  nop
  062a0fc  cmpw 7, 29, 28
  062a100  stb 27, 9(31)
  062a104  bf 30, 0x62a0a4
  062a108  clrldi 24, 25, 32
  062a10c  mr 3, 24
  062a110  bl 0x61c994
  062a114  nop
  062a118  lwz 0, 0(26)
  062a11c  cmpwi 7, 0, 0
  062a120  bt 30, 0x62a1f8
  062a124  lwz 9, -32648(30)
  062a128  lis 25, -32768
  062a12c  li 28, 0
  062a130  lwz 27, -32488(30)
  062a134  ori 25, 25, 6
  062a138  lfs 29, -32420(30)
  062a13c  li 29, 0
  062a140  lfs 30, 0(9)
  062a144  b 0x62a15c
  062a148  addi 28, 28, 1
  062a14c  lwz 0, 0(26)
  062a150  addi 29, 29, 116
  062a154  cmplw 7, 0, 28
  062a158  bf 29, 0x62a1f8
  062a15c  lwz 0, 0(27)
  062a160  add 0, 29, 0
  062a164  clrldi 31, 0, 32
  062a168  lwz 11, 108(31)
  062a16c  lwz 9, 20(11)
  062a170  lwz 0, 0(9)
  062a174  lwsync
  062a178  clrlwi 0, 0, 31
  062a17c  cmpwi 7, 0, 0
  062a180  bf 30, 0x62a194
  062a184  lwz 9, 16(11)
  062a188  lfs 0, 12(9)
  062a18c  fcmpu 7, 0, 30
  062a190  bf 28, 0x62a148
  062a194  lbz 0, 106(31)
  062a198  cmpwi 7, 0, 0
  062a19c  bt 30, 0x62a148
  062a1a0  lwz 0, 36(31)
  062a1a4  lwz 3, 32(31)
  062a1a8  std 0, 112(1)
  062a1ac  lfd 13, 112(1)
  062a1b0  fcfid 13, 13
  062a1b4  frsp 0, 13
  062a1b8  fmuls 31, 0, 29
  062a1bc  bl 0x62777c
  062a1c0  lwz 0, 32(31)
  062a1c4  fmr 3, 1
  062a1c8  cmpwi 7, 0, 0
  062a1cc  bt 28, 0x62a238
  062a1d0  fmr 4, 31
  062a1d4  mr 3, 31
  062a1d8  lfs 1, 0(31)
  062a1dc  addi 28, 28, 1
  062a1e0  lfs 2, 4(31)
  062a1e4  addi 29, 29, 116
  062a1e8  bl 0x6279c8
  062a1ec  lwz 0, 0(26)
  062a1f0  cmplw 7, 0, 28
  062a1f4  bt 29, 0x62a15c
  062a1f8  ld 0, 240(1)
  062a1fc  mr 3, 24
  062a200  ld 25, 144(1)
  062a204  ld 24, 136(1)
  062a208  mtlr 0
  062a20c  ld 26, 152(1)
  062a210  ld 27, 160(1)
  062a214  ld 28, 168(1)
  062a218  ld 29, 176(1)
  062a21c  ld 30, 184(1)
  062a220  ld 31, 192(1)
  062a224  lfd 29, 200(1)
  062a228  lfd 30, 208(1)
  062a22c  lfd 31, 216(1)
  062a230  addi 1, 1, 224
  062a234  blr
  062a238  cmpw 7, 0, 25
  062a23c  bt 30, 0x62a258
  062a240  lfs 1, 0(31)
  062a244  lfs 2, -32684(30)
  062a248  fmr 4, 31
  062a24c  mr 3, 31
  062a250  bl 0x6279c8
  062a254  b 0x62a148
  062a258  lfs 2, 0(31)
  062a25c  lfs 1, -32684(30)
  062a260  b 0x62a248

FUN_0062a264:   # 0x62a264, 0x130 bytes
  062a264  cmpw 7, 3, 4
  062a268  mflr 0
  062a26c  stdu 1, -144(1)
  062a270  std 29, 120(1)
  062a274  std 30, 128(1)
  062a278  std 31, 136(1)
  062a27c  std 0, 160(1)
  062a280  lwz 30, -29432(2)
  062a284  mr 29, 3
  062a288  mr 31, 4
  062a28c  bt 30, 0x62a2a0
  062a290  lwz 9, -32360(30)
  062a294  lwz 9, 0(9)
  062a298  cmplw 7, 3, 9
  062a29c  bt 28, 0x62a32c
  062a2a0  lwz 3, -32624(30)
  062a2a4  li 5, 5685
  062a2a8  lwz 4, -32628(30)
  062a2ac  bl 0x61948c
  062a2b0  nop
  062a2b4  lwz 9, -32620(30)
  062a2b8  lbz 0, 0(9)
  062a2bc  cmpwi 7, 0, 0
  062a2c0  bf 30, 0x62a310
  062a2c4  lwz 9, -32616(30)
  062a2c8  cmpwi 6, 31, -1
  062a2cc  lbz 0, 0(9)
  062a2d0  twnei 0, 0
  062a2d4  bt 26, 0x62a344
  062a2d8  slwi 0, 29, 2
  062a2dc  lwz 11, -32656(30)
  062a2e0  slwi 9, 31, 2
  062a2e4  extsw 0, 0
  062a2e8  extsw 9, 9
  062a2ec  lwzx 3, 11, 0
  062a2f0  lwzx 4, 11, 9
  062a2f4  lwz 0, 36(3)
  062a2f8  cmpw 7, 0, 4
  062a2fc  bt 30, 0x62a310
  062a300  clrldi 5, 4, 32
  062a304  li 4, 1
  062a308  bl 0x648b10
  062a30c  nop
  062a310  ld 0, 160(1)
  062a314  ld 29, 120(1)
  062a318  ld 30, 128(1)
  062a31c  mtlr 0
  062a320  ld 31, 136(1)
  062a324  addi 1, 1, 144
  062a328  blr
  062a32c  cmpwi 6, 4, -1
  062a330  bt 24, 0x62a2a0
  062a334  addi 0, 4, 1
  062a338  cmpw 7, 0, 9
  062a33c  bt 29, 0x62a2a0
  062a340  bf 26, 0x62a2d8
  062a344  slwi 0, 29, 2
  062a348  lwz 11, -32656(30)
  062a34c  lwz 9, -32672(30)
  062a350  extsw 0, 0
  062a354  lwz 5, 0(9)
  062a358  lwzx 3, 11, 0
  062a35c  lwz 0, 36(3)
  062a360  cmpw 7, 0, 5
  062a364  bt 30, 0x62a310
  062a368  clrldi 5, 5, 32
  062a36c  li 4, 1
  062a370  bl 0x648b10
  062a374  nop
  062a378  ld 0, 160(1)
  062a37c  ld 29, 120(1)
  062a380  ld 30, 128(1)
  062a384  mtlr 0
  062a388  ld 31, 136(1)
  062a38c  addi 1, 1, 144
  062a390  blr

FUN_0062a394:   # 0x62a394, 0x134 bytes
  062a394  cmpwi 7, 3, 0
  062a398  mflr 0
  062a39c  stdu 1, -144(1)
  062a3a0  std 29, 120(1)
  062a3a4  std 30, 128(1)
  062a3a8  std 31, 136(1)
  062a3ac  std 0, 160(1)
  062a3b0  lwz 30, -29432(2)
  062a3b4  mr 29, 3
  062a3b8  mr 31, 4
  062a3bc  bt 30, 0x62a450
  062a3c0  cmpwi 7, 4, -1
  062a3c4  bt 28, 0x62a450
  062a3c8  lwz 9, -32360(30)
  062a3cc  addi 11, 4, 1
  062a3d0  lwz 0, 0(9)
  062a3d4  cmpw 7, 11, 0
  062a3d8  bt 29, 0x62a450
  062a3dc  clrldi 3, 29, 32
  062a3e0  bl 0x62519c
  062a3e4  cmpwi 7, 3, 0
  062a3e8  bt 28, 0x62a434
  062a3ec  slwi 0, 3, 4
  062a3f0  lwz 9, -32724(30)
  062a3f4  cmpwi 7, 31, -1
  062a3f8  extsw 0, 0
  062a3fc  lwzx 0, 9, 0
  062a400  bt 30, 0x62a484
  062a404  slwi 9, 31, 2
  062a408  lwz 11, -32656(30)
  062a40c  clrldi 3, 0, 32
  062a410  extsw 9, 9
  062a414  lwz 0, 36(3)
  062a418  lwzx 4, 11, 9
  062a41c  cmpw 7, 0, 4
  062a420  bt 30, 0x62a434
  062a424  clrldi 5, 4, 32
  062a428  li 4, 1
  062a42c  bl 0x648b10
  062a430  nop
  062a434  ld 0, 160(1)
  062a438  ld 29, 120(1)
  062a43c  ld 30, 128(1)
  062a440  mtlr 0
  062a444  ld 31, 136(1)
  062a448  addi 1, 1, 144
  062a44c  blr
  062a450  lwz 3, -32624(30)
  062a454  li 5, 4780
  062a458  lwz 4, -32628(30)
  062a45c  bl 0x61948c
  062a460  nop
  062a464  lwz 9, -32620(30)
  062a468  lbz 0, 0(9)
  062a46c  cmpwi 7, 0, 0
  062a470  bf 30, 0x62a434
  062a474  lwz 9, -32616(30)
  062a478  lbz 0, 0(9)
  062a47c  twnei 0, 0
  062a480  b 0x62a3dc
  062a484  lwz 9, -32672(30)
  062a488  clrldi 3, 0, 32
  062a48c  lwz 5, 0(9)
  062a490  lwz 0, 36(3)
  062a494  cmpw 7, 0, 5
  062a498  bt 30, 0x62a434
  062a49c  clrldi 5, 5, 32
  062a4a0  li 4, 1
  062a4a4  bl 0x648b10
  062a4a8  nop
  062a4ac  ld 0, 160(1)
  062a4b0  ld 29, 120(1)
  062a4b4  ld 30, 128(1)
  062a4b8  mtlr 0
  062a4bc  ld 31, 136(1)
  062a4c0  addi 1, 1, 144
  062a4c4  blr

snd_SynthSetSpeakerMode:   # 0x62a4c8, 0x35c bytes
  062a4c8  cmpwi 7, 4, 0
  062a4cc  mflr 0
  062a4d0  stdu 1, -240(1)
  062a4d4  std 27, 192(1)
  062a4d8  std 30, 216(1)
  062a4dc  mr 8, 4
  062a4e0  stfd 31, 232(1)
  062a4e4  std 25, 176(1)
  062a4e8  std 26, 184(1)
  062a4ec  std 28, 200(1)
  062a4f0  std 29, 208(1)
  062a4f4  std 31, 224(1)
  062a4f8  std 0, 256(1)
  062a4fc  lwz 30, -29432(2)
  062a500  mr 27, 3
  062a504  li 4, 0
  062a508  bt 30, 0x62a580
  062a50c  li 10, 0
  062a510  lfs 12, -32420(30)
  062a514  addi 4, 1, 116
  062a518  lfs 13, -32412(30)
  062a51c  add 9, 10, 8
  062a520  add 11, 10, 4
  062a524  clrldi 9, 9, 32
  062a528  clrldi 11, 11, 32
  062a52c  lwz 0, 0(9)
  062a530  std 0, 160(1)
  062a534  lfd 11, 160(1)
  062a538  fcfid 11, 11
  062a53c  frsp 0, 11
  062a540  fmuls 0, 0, 12
  062a544  fsubs 0, 13, 0
  062a548  fcmpu 7, 0, 13
  062a54c  stfs 0, 0(11)
  062a550  cror 30, 29, 30
  062a554  bf 30, 0x62a574
  062a558  fsubs 0, 0, 13
  062a55c  fcmpu 7, 0, 13
  062a560  cror 30, 29, 30
  062a564  bt 30, 0x62a558
  062a568  add 9, 10, 4
  062a56c  clrldi 9, 9, 32
  062a570  stfs 0, 0(9)
  062a574  cmpwi 7, 10, 28
  062a578  addi 10, 10, 4
  062a57c  bf 30, 0x62a51c
  062a580  cmpwi 7, 27, 3
  062a584  bt 30, 0x62a778
  062a588  cmplwi 7, 27, 3
  062a58c  bf 28, 0x62a70c
  062a590  rlwinm 4, 4, 0, 0, 29
  062a594  li 3, 1
  062a598  bl 0x6420e4
  062a59c  nop
  062a5a0  cmpwi 7, 3, 0
  062a5a4  bt 28, 0x62a7a0
  062a5a8  lwz 9, -32432(30)
  062a5ac  cmpwi 7, 27, 2
  062a5b0  li 0, 1
  062a5b4  stw 0, 0(9)
  062a5b8  bt 30, 0x62a818
  062a5bc  lwz 9, -32592(30)
  062a5c0  li 0, 0
  062a5c4  stb 0, 0(9)
  062a5c8  lwz 25, -32356(30)
  062a5cc  lwz 0, 0(25)
  062a5d0  cmpw 7, 27, 0
  062a5d4  bt 30, 0x62a730
  062a5d8  lwz 26, -32380(30)
  062a5dc  lwz 0, 0(26)
  062a5e0  cmpwi 7, 0, 0
  062a5e4  bt 30, 0x62a648
  062a5e8  lwz 9, -32648(30)
  062a5ec  li 29, 0
  062a5f0  li 31, 0
  062a5f4  lwz 28, -32488(30)
  062a5f8  lfs 31, 0(9)
  062a5fc  lwz 3, 0(28)
  062a600  add 3, 31, 3
  062a604  clrldi 3, 3, 32
  062a608  lwz 11, 108(3)
  062a60c  lwz 9, 20(11)
  062a610  lwz 0, 0(9)
  062a614  lwsync
  062a618  clrlwi 0, 0, 31
  062a61c  addi 29, 29, 1
  062a620  cmpwi 7, 0, 0
  062a624  addi 31, 31, 116
  062a628  bf 30, 0x62a764
  062a62c  lwz 9, 16(11)
  062a630  lfs 0, 12(9)
  062a634  fcmpu 7, 0, 31
  062a638  bt 28, 0x62a764
  062a63c  lwz 0, 0(26)
  062a640  cmplw 7, 0, 29
  062a644  bt 29, 0x62a5fc
  062a648  lwz 31, -32724(30)
  062a64c  addi 29, 31, 128
  062a650  b 0x62a65c
  062a654  cmpw 7, 31, 29
  062a658  bt 30, 0x62a680
  062a65c  clrldi 9, 31, 32
  062a660  addi 31, 31, 16
  062a664  lwz 3, 0(9)
  062a668  cmpwi 7, 3, 0
  062a66c  clrldi 3, 3, 32
  062a670  bt 30, 0x62a654
  062a674  bl 0x625bd0
  062a678  cmpw 7, 31, 29
  062a67c  bf 30, 0x62a65c
  062a680  lwz 31, -32672(30)
  062a684  addi 4, 1, 112
  062a688  stw 27, 0(25)
  062a68c  lwz 3, 0(31)
  062a690  bl 0x647ed0
  062a694  nop
  062a698  cmpwi 7, 3, 0
  062a69c  bf 30, 0x62a7dc
  062a6a0  lwz 0, 112(1)
  062a6a4  cmpwi 7, 0, 0
  062a6a8  bt 30, 0x62a730
  062a6ac  li 4, 8192
  062a6b0  lwz 3, 0(31)
  062a6b4  bl 0x647f34
  062a6b8  nop
  062a6bc  cmpwi 7, 3, 0
  062a6c0  mr 4, 3
  062a6c4  bt 30, 0x62a730
  062a6c8  lwz 3, -32344(30)
  062a6cc  extsw 4, 4
  062a6d0  bl 0x5cd098
  062a6d4  nop
  062a6d8  ld 0, 256(1)
  062a6dc  ld 25, 176(1)
  062a6e0  clrldi 3, 27, 32
  062a6e4  ld 26, 184(1)
  062a6e8  ld 27, 192(1)
  062a6ec  mtlr 0
  062a6f0  ld 28, 200(1)
  062a6f4  ld 29, 208(1)
  062a6f8  ld 30, 216(1)
  062a6fc  ld 31, 224(1)
  062a700  lfd 31, 232(1)
  062a704  addi 1, 1, 240
  062a708  blr
  062a70c  cmpwi 7, 27, 4
  062a710  bt 30, 0x62a7f0
  062a714  lwz 3, -32352(30)
  062a718  li 5, 4974
  062a71c  lwz 4, -32628(30)
  062a720  bl 0x61948c
  062a724  nop
  062a728  lwz 9, -32356(30)
  062a72c  lwz 27, 0(9)
  062a730  ld 0, 256(1)
  062a734  clrldi 3, 27, 32
  062a738  ld 25, 176(1)
  062a73c  ld 26, 184(1)
  062a740  mtlr 0
  062a744  ld 27, 192(1)
  062a748  ld 28, 200(1)
  062a74c  ld 29, 208(1)
  062a750  ld 30, 216(1)
  062a754  ld 31, 224(1)
  062a758  lfd 31, 232(1)
  062a75c  addi 1, 1, 240
  062a760  blr
  062a764  bl 0x6264fc
  062a768  lwz 0, 0(26)
  062a76c  cmplw 7, 0, 29
  062a770  bt 29, 0x62a5fc
  062a774  b 0x62a648
  062a778  rlwinm 4, 4, 0, 0, 29
  062a77c  li 3, 11
  062a780  bl 0x6420e4
  062a784  nop
  062a788  cmpwi 7, 3, 0
  062a78c  bt 28, 0x62a7a0
  062a790  lwz 9, -32432(30)
  062a794  li 0, 11
  062a798  stw 0, 0(9)
  062a79c  b 0x62a5bc
  062a7a0  lwz 9, -32356(30)
  062a7a4  ld 0, 256(1)
  062a7a8  ld 25, 176(1)
  062a7ac  ld 26, 184(1)
  062a7b0  mtlr 0
  062a7b4  ld 28, 200(1)
  062a7b8  lwz 27, 0(9)
  062a7bc  ld 29, 208(1)
  062a7c0  clrldi 3, 27, 32
  062a7c4  ld 30, 216(1)
  062a7c8  ld 27, 192(1)
  062a7cc  ld 31, 224(1)
  062a7d0  lfd 31, 232(1)
  062a7d4  addi 1, 1, 240
  062a7d8  blr
  062a7dc  extsw 4, 3
  062a7e0  lwz 3, -32348(30)
  062a7e4  bl 0x5cd098
  062a7e8  nop
  062a7ec  b 0x62a6a0
  062a7f0  rlwinm 4, 4, 0, 0, 29
  062a7f4  li 3, 13
  062a7f8  bl 0x6420e4
  062a7fc  nop
  062a800  cmpwi 7, 3, 0
  062a804  bt 28, 0x62a7a0
  062a808  lwz 9, -32432(30)
  062a80c  li 0, 13
  062a810  stw 0, 0(9)
  062a814  b 0x62a5bc
  062a818  lwz 9, -32592(30)
  062a81c  stb 0, 0(9)
  062a820  b 0x62a5c8

FUN_0062a824:   # 0x62a824, 0xe8 bytes
  062a824  stdu 1, -144(1)
  062a828  mflr 0
  062a82c  std 29, 120(1)
  062a830  std 0, 160(1)
  062a834  lwz 11, 108(3)
  062a838  std 30, 128(1)
  062a83c  std 31, 136(1)
  062a840  lwz 30, -29432(2)
  062a844  mr 31, 3
  062a848  lwz 29, 112(3)
  062a84c  lwz 9, 20(11)
  062a850  lwz 0, 0(9)
  062a854  lwsync
  062a858  clrlwi 0, 0, 31
  062a85c  mr 3, 11
  062a860  cmpwi 7, 0, 0
  062a864  li 4, 1
  062a868  bf 30, 0x62a900
  062a86c  lwz 9, 16(11)
  062a870  lwz 11, -32648(30)
  062a874  lfs 13, 12(9)
  062a878  lfs 0, 0(11)
  062a87c  fcmpu 7, 13, 0
  062a880  bt 28, 0x62a900
  062a884  cmpwi 7, 29, 0
  062a888  clrldi 3, 29, 32
  062a88c  li 4, 1
  062a890  bt 30, 0x62a89c
  062a894  bl 0x647dd0
  062a898  nop
  062a89c  lbz 9, 104(31)
  062a8a0  lwz 11, -32704(30)
  062a8a4  slwi 0, 9, 4
  062a8a8  slwi 9, 9, 2
  062a8ac  sub 0, 0, 9
  062a8b0  add 0, 0, 11
  062a8b4  clrldi 11, 0, 32
  062a8b8  lwz 9, 4(11)
  062a8bc  lwz 0, 8(11)
  062a8c0  slwi 10, 9, 2
  062a8c4  cmpw 7, 0, 9
  062a8c8  addi 0, 9, 1
  062a8cc  bt 30, 0x62a8e4
  062a8d0  lwz 9, 0(11)
  062a8d4  stw 0, 4(11)
  062a8d8  add 9, 10, 9
  062a8dc  clrldi 9, 9, 32
  062a8e0  stw 31, 0(9)
  062a8e4  ld 0, 160(1)
  062a8e8  ld 29, 120(1)
  062a8ec  ld 30, 128(1)
  062a8f0  mtlr 0
  062a8f4  ld 31, 136(1)
  062a8f8  addi 1, 1, 144
  062a8fc  blr
  062a900  bl 0x647dd0
  062a904  nop
  062a908  b 0x62a884

FUN_0062a90c:   # 0x62a90c, 0xa8 bytes
  062a90c  cmpwi 7, 3, 0
  062a910  mflr 0
  062a914  stdu 1, -160(1)
  062a918  stfd 31, 152(1)
  062a91c  li 5, 3624
  062a920  std 30, 136(1)
  062a924  fmr 31, 1
  062a928  std 31, 144(1)
  062a92c  std 0, 176(1)
  062a930  lwz 30, -29432(2)
  062a934  mr 31, 3
  062a938  bt 30, 0x62a948
  062a93c  lfs 0, -32612(30)
  062a940  fcmpu 7, 1, 0
  062a944  bf 29, 0x62a99c
  062a948  lwz 3, -32624(30)
  062a94c  lwz 4, -32628(30)
  062a950  bl 0x61948c
  062a954  nop
  062a958  lwz 9, -32620(30)
  062a95c  lbz 0, 0(9)
  062a960  cmpwi 7, 0, 0
  062a964  bf 30, 0x62a980
  062a968  lwz 9, -32616(30)
  062a96c  lbz 0, 0(9)
  062a970  twnei 0, 0
  062a974  li 0, 1
  062a978  stfs 31, 0(31)
  062a97c  stb 0, 106(31)
  062a980  ld 0, 176(1)
  062a984  ld 30, 136(1)
  062a988  ld 31, 144(1)
  062a98c  mtlr 0
  062a990  lfd 31, 152(1)
  062a994  addi 1, 1, 160
  062a998  blr
  062a99c  li 0, 0
  062a9a0  stw 0, 112(1)
  062a9a4  lfs 0, 112(1)
  062a9a8  fcmpu 7, 1, 0
  062a9ac  bf 28, 0x62a974
  062a9b0  b 0x62a948

snd_SynthKeyOnVoice:   # 0x62a9b4, 0x4d0 bytes
  062a9b4  cmpdi 3, 0
  062a9b8  mflr 0
  062a9bc  stdu 1, -336(1)
  062a9c0  std 30, 312(1)
  062a9c4  std 31, 320(1)
  062a9c8  stfd 31, 328(1)
  062a9cc  mr 31, 3
  062a9d0  std 18, 216(1)
  062a9d4  std 19, 224(1)
  062a9d8  std 20, 232(1)
  062a9dc  std 21, 240(1)
  062a9e0  std 22, 248(1)
  062a9e4  std 23, 256(1)
  062a9e8  std 24, 264(1)
  062a9ec  std 25, 272(1)
  062a9f0  std 26, 280(1)
  062a9f4  std 27, 288(1)
  062a9f8  std 28, 296(1)
  062a9fc  std 29, 304(1)
  062aa00  std 0, 352(1)
  062aa04  lwz 30, -29432(2)
  062aa08  bt 2, 0x62ae58
  062aa0c  lwz 9, 36(31)
  062aa10  li 0, 0
  062aa14  lwz 22, 112(31)
  062aa18  mr 26, 31
  062aa1c  std 9, 192(1)
  062aa20  lfd 0, 192(1)
  062aa24  fcfid 0, 0
  062aa28  lfs 31, -32420(30)
  062aa2c  std 0, 136(1)
  062aa30  std 0, 168(1)
  062aa34  std 0, 128(1)
  062aa38  std 0, 144(1)
  062aa3c  std 0, 152(1)
  062aa40  std 0, 160(1)
  062aa44  std 0, 176(1)
  062aa48  std 0, 120(1)
  062aa4c  srawi 0, 22, 31
  062aa50  lwz 9, 44(31)
  062aa54  frsp 13, 0
  062aa58  lwz 3, 32(31)
  062aa5c  xor 11, 0, 22
  062aa60  lfs 0, 0(31)
  062aa64  stfs 0, 136(1)
  062aa68  addi 25, 9, 1
  062aa6c  sub 11, 0, 11
  062aa70  lwz 18, 108(31)
  062aa74  srwi 24, 11, 31
  062aa78  fmuls 13, 13, 31
  062aa7c  stfs 13, 168(1)
  062aa80  bl 0x62777c
  062aa84  lwz 0, 44(31)
  062aa88  stfs 1, 152(1)
  062aa8c  cmpwi 7, 0, 0
  062aa90  lfs 0, 4(31)
  062aa94  stfs 0, 120(1)
  062aa98  bt 30, 0x62ab30
  062aa9c  addi 31, 31, 60
  062aaa0  li 27, 0
  062aaa4  addi 19, 1, 136
  062aaa8  addi 20, 1, 168
  062aaac  addi 21, 1, 152
  062aab0  addi 23, 1, 120
  062aab4  clrldi 28, 31, 32
  062aab8  addi 27, 27, 1
  062aabc  addi 10, 31, -12
  062aac0  slwi 29, 27, 2
  062aac4  clrldi 10, 10, 32
  062aac8  lwz 0, 0(28)
  062aacc  add 9, 29, 19
  062aad0  add 11, 29, 20
  062aad4  std 0, 192(1)
  062aad8  lfd 13, 192(1)
  062aadc  clrldi 9, 9, 32
  062aae0  fcfid 13, 13
  062aae4  clrldi 11, 11, 32
  062aae8  lwz 3, 0(10)
  062aaec  addi 31, 31, 4
  062aaf0  frsp 0, 13
  062aaf4  lfs 13, 12(28)
  062aaf8  stfs 13, 0(9)
  062aafc  fmuls 0, 0, 31
  062ab00  stfs 0, 0(11)
  062ab04  bl 0x62777c
  062ab08  add 9, 29, 21
  062ab0c  add 29, 29, 23
  062ab10  lwz 0, 44(26)
  062ab14  clrldi 9, 9, 32
  062ab18  clrldi 29, 29, 32
  062ab1c  cmplw 7, 0, 27
  062ab20  stfs 1, 0(9)
  062ab24  lfs 0, 24(28)
  062ab28  stfs 0, 0(29)
  062ab2c  bt 29, 0x62aab4
  062ab30  clrlwi 31, 24, 24
  062ab34  cmpwi 7, 31, 0
  062ab38  bf 30, 0x62acac
  062ab3c  clrldi 29, 18, 32
  062ab40  li 0, 0
  062ab44  mr 3, 29
  062ab48  addi 4, 1, 116
  062ab4c  stw 0, 116(1)
  062ab50  bl 0x647ed0
  062ab54  nop
  062ab58  cmpwi 7, 3, 0
  062ab5c  bf 30, 0x62ac98
  062ab60  lwz 6, 116(1)
  062ab64  cmpwi 7, 6, 0
  062ab68  bt 30, 0x62ac38
  062ab6c  cmpwi 7, 31, 0
  062ab70  bf 30, 0x62ac18
  062ab74  lbz 3, 104(26)
  062ab78  cmpwi 7, 3, 2
  062ab7c  bt 30, 0x62ad74
  062ab80  cmpwi 7, 3, 3
  062ab84  bt 30, 0x62ae28
  062ab88  clrldi 9, 6, 32
  062ab8c  cmpwi 7, 25, 0
  062ab90  addi 4, 6, 240
  062ab94  li 5, 0
  062ab98  addi 19, 1, 136
  062ab9c  stw 25, 220(9)
  062aba0  clrldi 25, 25, 32
  062aba4  addi 20, 1, 168
  062aba8  addi 21, 1, 152
  062abac  mtctr 25
  062abb0  addi 23, 1, 120
  062abb4  bt 30, 0x62ac18
  062abb8  add 9, 5, 19
  062abbc  add 7, 5, 21
  062abc0  clrldi 9, 9, 32
  062abc4  clrldi 6, 4, 32
  062abc8  addi 10, 4, -8
  062abcc  add 8, 5, 20
  062abd0  clrldi 7, 7, 32
  062abd4  addi 11, 4, -4
  062abd8  lfs 0, 0(9)
  062abdc  clrldi 10, 10, 32
  062abe0  stfs 0, 0(6)
  062abe4  add 9, 5, 23
  062abe8  clrldi 8, 8, 32
  062abec  clrldi 11, 11, 32
  062abf0  lfs 13, 0(7)
  062abf4  clrldi 9, 9, 32
  062abf8  stfs 13, 0(10)
  062abfc  addi 5, 5, 4
  062ac00  addi 4, 4, 16
  062ac04  lfs 0, 0(8)
  062ac08  stfs 0, 0(11)
  062ac0c  lfs 13, 0(9)
  062ac10  stfs 13, 4(6)
  062ac14  bdnz 0x62abb8
  062ac18  li 4, 0
  062ac1c  mr 3, 29
  062ac20  li 5, 0
  062ac24  bl 0x647fa0
  062ac28  nop
  062ac2c  cmpwi 7, 3, 0
  062ac30  mr 4, 3
  062ac34  bf 30, 0x62ac84
  062ac38  ld 0, 352(1)
  062ac3c  ld 18, 216(1)
  062ac40  ld 19, 224(1)
  062ac44  mtlr 0
  062ac48  ld 20, 232(1)
  062ac4c  ld 21, 240(1)
  062ac50  ld 22, 248(1)
  062ac54  ld 23, 256(1)
  062ac58  ld 24, 264(1)
  062ac5c  ld 25, 272(1)
  062ac60  ld 26, 280(1)
  062ac64  ld 27, 288(1)
  062ac68  ld 28, 296(1)
  062ac6c  ld 29, 304(1)
  062ac70  ld 30, 312(1)
  062ac74  ld 31, 320(1)
  062ac78  lfd 31, 328(1)
  062ac7c  addi 1, 1, 336
  062ac80  blr
  062ac84  lwz 3, -32324(30)
  062ac88  extsw 4, 4
  062ac8c  bl 0x5cd098
  062ac90  nop
  062ac94  b 0x62ac38
  062ac98  extsw 4, 3
  062ac9c  lwz 3, -32328(30)
  062aca0  bl 0x5cd098
  062aca4  nop
  062aca8  b 0x62ab60
  062acac  clrldi 29, 22, 32
  062acb0  li 0, 0
  062acb4  mr 3, 29
  062acb8  addi 4, 1, 112
  062acbc  stw 0, 112(1)
  062acc0  bl 0x647ed0
  062acc4  nop
  062acc8  cmpwi 7, 3, 0
  062accc  bf 30, 0x62ae70
  062acd0  lwz 0, 112(1)
  062acd4  cmpwi 7, 0, 0
  062acd8  bt 30, 0x62ab3c
  062acdc  cmpwi 7, 25, 0
  062ace0  bt 30, 0x62ad48
  062ace4  clrldi 9, 25, 32
  062ace8  li 7, 0
  062acec  li 6, 0
  062acf0  mtctr 9
  062acf4  addi 19, 1, 136
  062acf8  addi 20, 1, 168
  062acfc  addi 21, 1, 152
  062ad00  add 9, 7, 19
  062ad04  add 8, 6, 0
  062ad08  add 11, 7, 21
  062ad0c  clrldi 9, 9, 32
  062ad10  clrldi 8, 8, 32
  062ad14  add 10, 7, 20
  062ad18  clrldi 11, 11, 32
  062ad1c  clrldi 10, 10, 32
  062ad20  lfs 12, 0(9)
  062ad24  addi 7, 7, 4
  062ad28  stfs 12, 128(8)
  062ad2c  addi 6, 6, 16
  062ad30  lfs 0, 0(11)
  062ad34  stfs 0, 120(8)
  062ad38  lfs 13, 0(10)
  062ad3c  stfs 13, 124(8)
  062ad40  stfs 12, 132(8)
  062ad44  bdnz 0x62ad00
  062ad48  mr 3, 29
  062ad4c  li 4, 8192
  062ad50  bl 0x647f34
  062ad54  nop
  062ad58  cmpwi 7, 3, 0
  062ad5c  bt 30, 0x62ab3c
  062ad60  extsw 4, 3
  062ad64  lwz 3, -32332(30)
  062ad68  bl 0x5cd098
  062ad6c  nop
  062ad70  b 0x62ab3c
  062ad74  clrldi 9, 6, 32
  062ad78  cmpwi 7, 25, 0
  062ad7c  addi 4, 6, 252
  062ad80  li 5, 0
  062ad84  addi 19, 1, 136
  062ad88  stw 25, 232(9)
  062ad8c  clrldi 25, 25, 32
  062ad90  addi 20, 1, 168
  062ad94  addi 21, 1, 152
  062ad98  mtctr 25
  062ad9c  addi 23, 1, 120
  062ada0  bt 30, 0x62ac18
  062ada4  add 9, 5, 19
  062ada8  add 7, 5, 21
  062adac  clrldi 9, 9, 32
  062adb0  clrldi 6, 4, 32
  062adb4  addi 10, 4, -8
  062adb8  add 8, 5, 20
  062adbc  clrldi 7, 7, 32
  062adc0  addi 11, 4, -4
  062adc4  lfs 0, 0(9)
  062adc8  clrldi 10, 10, 32
  062adcc  stfs 0, 0(6)
  062add0  add 9, 5, 23
  062add4  clrldi 8, 8, 32
  062add8  clrldi 11, 11, 32
  062addc  lfs 13, 0(7)
  062ade0  clrldi 9, 9, 32
  062ade4  stfs 13, 0(10)
  062ade8  addi 5, 5, 4
  062adec  addi 4, 4, 16
  062adf0  lfs 0, 0(8)
  062adf4  stfs 0, 0(11)
  062adf8  lfs 13, 0(9)
  062adfc  stfs 13, 4(6)
  062ae00  bdnz 0x62ada4
  062ae04  li 4, 0
  062ae08  mr 3, 29
  062ae0c  li 5, 0
  062ae10  bl 0x647fa0
  062ae14  nop
  062ae18  cmpwi 7, 3, 0
  062ae1c  mr 4, 3
  062ae20  bt 30, 0x62ac38
  062ae24  b 0x62ac84
  062ae28  clrldi 9, 6, 32
  062ae2c  lfs 0, 136(1)
  062ae30  li 0, 2
  062ae34  stfs 0, 252(9)
  062ae38  lfs 0, 152(1)
  062ae3c  stfs 0, 244(9)
  062ae40  lfs 13, 168(1)
  062ae44  stfs 13, 248(9)
  062ae48  lfs 0, 120(1)
  062ae4c  stw 0, 232(9)
  062ae50  stfs 0, 256(9)
  062ae54  b 0x62ac18
  062ae58  lwz 3, -32340(30)
  062ae5c  li 5, 3382
  062ae60  lwz 4, -32628(30)
  062ae64  bl 0x61948c
  062ae68  nop
  062ae6c  b 0x62aa0c
  062ae70  extsw 4, 3
  062ae74  lwz 3, -32336(30)
  062ae78  bl 0x5cd098
  062ae7c  nop
  062ae80  b 0x62acd0

FUN_0062ae84:   # 0x62ae84, 0x1a4 bytes
  062ae84  stdu 1, -144(1)
  062ae88  mflr 0
  062ae8c  std 30, 120(1)
  062ae90  std 0, 160(1)
  062ae94  lwz 30, -29432(2)
  062ae98  clrlwi 0, 3, 31
  062ae9c  stfd 31, 136(1)
  062aea0  cmpwi 7, 0, 0
  062aea4  std 31, 128(1)
  062aea8  std 29, 112(1)
  062aeac  mr 31, 3
  062aeb0  lfs 31, -32684(30)
  062aeb4  bf 30, 0x62b00c
  062aeb8  rlwinm 0, 31, 0, 30, 30
  062aebc  cmpwi 7, 0, 0
  062aec0  bf 30, 0x62aff4
  062aec4  rlwinm 0, 31, 0, 29, 29
  062aec8  cmpwi 7, 0, 0
  062aecc  bf 30, 0x62afac
  062aed0  rlwinm 0, 31, 0, 28, 28
  062aed4  cmpwi 7, 0, 0
  062aed8  bf 30, 0x62af60
  062aedc  rlwinm 0, 31, 0, 27, 27
  062aee0  cmpwi 7, 0, 0
  062aee4  bt 30, 0x62af3c
  062aee8  lwz 29, -32480(30)
  062aeec  lwz 3, 28(29)
  062aef0  bl 0x640ccc
  062aef4  nop
  062aef8  lwz 3, 36(29)
  062aefc  fadds 31, 31, 1
  062af00  bl 0x640ccc
  062af04  nop
  062af08  lwz 3, 32(29)
  062af0c  fadds 31, 31, 1
  062af10  bl 0x640ccc
  062af14  nop
  062af18  li 3, 1
  062af1c  fadds 31, 31, 1
  062af20  bl 0x640ccc
  062af24  nop
  062af28  li 3, 2
  062af2c  fadds 31, 31, 1
  062af30  bl 0x640ccc
  062af34  nop
  062af38  fadds 31, 31, 1
  062af3c  ld 0, 160(1)
  062af40  fmr 1, 31
  062af44  ld 29, 112(1)
  062af48  ld 30, 120(1)
  062af4c  mtlr 0
  062af50  ld 31, 128(1)
  062af54  lfd 31, 136(1)
  062af58  addi 1, 1, 144
  062af5c  blr
  062af60  lwz 9, -32480(30)
  062af64  lwz 3, 24(9)
  062af68  bl 0x640ccc
  062af6c  nop
  062af70  li 0, 8
  062af74  fadds 31, 31, 1
  062af78  lwz 11, -32724(30)
  062af7c  mtctr 0
  062af80  clrldi 9, 11, 32
  062af84  addi 11, 11, 16
  062af88  lwz 0, 0(9)
  062af8c  cmpwi 7, 0, 0
  062af90  clrldi 9, 0, 32
  062af94  bt 30, 0x62afa4
  062af98  lwz 9, 24(9)
  062af9c  lfs 0, 112(9)
  062afa0  fadds 31, 31, 0
  062afa4  bdnz 0x62af80
  062afa8  b 0x62aedc
  062afac  lwz 29, -32480(30)
  062afb0  lwz 3, 8(29)
  062afb4  bl 0x640ccc
  062afb8  nop
  062afbc  lwz 3, 12(29)
  062afc0  fadds 31, 31, 1
  062afc4  bl 0x640ccc
  062afc8  nop
  062afcc  lwz 3, 16(29)
  062afd0  fadds 31, 31, 1
  062afd4  bl 0x640ccc
  062afd8  nop
  062afdc  lwz 3, 20(29)
  062afe0  fadds 31, 31, 1
  062afe4  bl 0x640ccc
  062afe8  nop
  062afec  fadds 31, 31, 1
  062aff0  b 0x62aed0
  062aff4  lwz 9, -32480(30)
  062aff8  lwz 3, 0(9)
  062affc  bl 0x640ccc
  062b000  nop
  062b004  fadds 31, 31, 1
  062b008  b 0x62aec4
  062b00c  lwz 9, -32480(30)
  062b010  lwz 3, 4(9)
  062b014  bl 0x640ccc
  062b018  nop
  062b01c  lfs 0, -32684(30)
  062b020  fadds 31, 1, 0
  062b024  b 0x62aeb8

snd_SynthIsVoiceContextFinished:   # 0x62b028, 0xe0 bytes
  062b028  cmpdi 3, 0
  062b02c  mflr 0
  062b030  stdu 1, -128(1)
  062b034  std 30, 112(1)
  062b038  std 31, 120(1)
  062b03c  std 0, 144(1)
  062b040  lwz 30, -29432(2)
  062b044  mr 31, 3
  062b048  bt 2, 0x62b0f0
  062b04c  lwz 3, 108(31)
  062b050  li 0, 0
  062b054  cmpwi 7, 3, 0
  062b058  bt 30, 0x62b0b0
  062b05c  clrldi 3, 3, 32
  062b060  lwz 10, 20(3)
  062b064  lwz 9, 16(3)
  062b068  lwz 11, 36(10)
  062b06c  lwz 0, 16(9)
  062b070  cmpw 7, 11, 0
  062b074  bt 30, 0x62b0cc
  062b078  lwz 0, 0(10)
  062b07c  lwsync
  062b080  clrlwi 0, 0, 31
  062b084  li 10, 1
  062b088  cmpwi 7, 0, 0
  062b08c  bf 30, 0x62b0a8
  062b090  lwz 9, 16(3)
  062b094  lwz 11, -32648(30)
  062b098  lfs 13, 12(9)
  062b09c  lfs 0, 0(11)
  062b0a0  fcmpu 7, 13, 0
  062b0a4  bf 28, 0x62b0e4
  062b0a8  xori 0, 10, 1
  062b0ac  clrlwi 0, 0, 24
  062b0b0  extsw 3, 0
  062b0b4  ld 0, 144(1)
  062b0b8  ld 30, 112(1)
  062b0bc  ld 31, 120(1)
  062b0c0  mtlr 0
  062b0c4  addi 1, 1, 128
  062b0c8  blr
  062b0cc  lwz 0, 0(10)
  062b0d0  lwsync
  062b0d4  xori 0, 0, 1
  062b0d8  clrlwi 0, 0, 31
  062b0dc  clrlwi 0, 0, 24
  062b0e0  b 0x62b0b0
  062b0e4  li 10, 0
  062b0e8  xori 0, 10, 1
  062b0ec  b 0x62b0ac
  062b0f0  lwz 3, -32320(30)
  062b0f4  li 5, 2184
  062b0f8  lwz 4, -32628(30)
  062b0fc  bl 0x61948c
  062b100  nop
  062b104  b 0x62b04c

FUN_0062b108:   # 0x62b108, 0xa8 bytes
  062b108  stdu 1, -160(1)
  062b10c  mflr 0
  062b110  std 30, 144(1)
  062b114  lwz 30, -29432(2)
  062b118  addi 5, 1, 116
  062b11c  std 0, 176(1)
  062b120  lis 0, 3073
  062b124  std 29, 136(1)
  062b128  ori 0, 0, 36676
  062b12c  lwz 9, -32652(30)
  062b130  mr 29, 3
  062b134  std 31, 152(1)
  062b138  stw 0, 112(1)
  062b13c  mr 31, 4
  062b140  addi 4, 1, 112
  062b144  lwz 3, 0(9)
  062b148  clrldi 3, 3, 32
  062b14c  bl 0x6487c0
  062b150  nop
  062b154  cmpwi 7, 3, 0
  062b158  bt 28, 0x62b178
  062b15c  cmpwi 7, 31, 0
  062b160  bt 30, 0x62b194
  062b164  lwz 9, 116(1)
  062b168  addi 9, 9, 16
  062b16c  clrldi 9, 9, 32
  062b170  lfs 0, 0(9)
  062b174  stfs 0, 0(29)
  062b178  ld 0, 176(1)
  062b17c  ld 29, 136(1)
  062b180  ld 30, 144(1)
  062b184  mtlr 0
  062b188  ld 31, 152(1)
  062b18c  addi 1, 1, 160
  062b190  blr
  062b194  lwz 9, 116(1)
  062b198  mr 11, 9
  062b19c  addi 9, 9, 16
  062b1a0  lwz 0, 8(11)
  062b1a4  slwi 0, 0, 2
  062b1a8  add 9, 9, 0
  062b1ac  b 0x62b16c

FUN_0062b1b8:   # 0x62b1b8, 0xc8 bytes
  062b1b8  stdu 1, -160(1)
  062b1bc  mflr 0
  062b1c0  std 30, 144(1)
  062b1c4  lwz 30, -29432(2)
  062b1c8  addi 5, 1, 116
  062b1cc  std 0, 176(1)
  062b1d0  lis 0, 3073
  062b1d4  std 31, 152(1)
  062b1d8  ori 0, 0, 36676
  062b1dc  lwz 9, -32672(30)
  062b1e0  mr 31, 3
  062b1e4  std 29, 136(1)
  062b1e8  stw 0, 112(1)
  062b1ec  mr 29, 4
  062b1f0  addi 4, 1, 112
  062b1f4  lwz 3, 0(9)
  062b1f8  clrldi 3, 3, 32
  062b1fc  bl 0x6487c0
  062b200  nop
  062b204  cmpwi 7, 3, 0
  062b208  bt 28, 0x62b248
  062b20c  cmpwi 7, 29, 0
  062b210  bt 30, 0x62b264
  062b214  lwz 9, 116(1)
  062b218  addi 0, 9, 16
  062b21c  li 9, 8
  062b220  li 10, 0
  062b224  mtctr 9
  062b228  add 9, 10, 0
  062b22c  add 11, 10, 31
  062b230  clrldi 9, 9, 32
  062b234  clrldi 11, 11, 32
  062b238  addi 10, 10, 4
  062b23c  lfs 0, 0(9)
  062b240  stfs 0, 0(11)
  062b244  bdnz 0x62b228
  062b248  ld 0, 176(1)
  062b24c  ld 29, 136(1)
  062b250  ld 30, 144(1)
  062b254  mtlr 0
  062b258  ld 31, 152(1)
  062b25c  addi 1, 1, 160
  062b260  blr
  062b264  lwz 9, 116(1)
  062b268  mr 11, 9
  062b26c  addi 9, 9, 16
  062b270  lwz 0, 8(11)
  062b274  slwi 0, 0, 2
  062b278  add 0, 9, 0
  062b27c  b 0x62b21c

snd_SynthGetVoicePlaybackPosition:   # 0x62b288, 0x1f0 bytes
  062b288  cmpwi 7, 3, 0
  062b28c  mflr 0
  062b290  stdu 1, -160(1)
  062b294  std 28, 128(1)
  062b298  std 29, 136(1)
  062b29c  std 30, 144(1)
  062b2a0  std 31, 152(1)
  062b2a4  std 0, 176(1)
  062b2a8  lwz 30, -29432(2)
  062b2ac  mr 31, 3
  062b2b0  mr 29, 4
  062b2b4  mr 28, 4
  062b2b8  bt 30, 0x62b42c
  062b2bc  lwz 8, 108(31)
  062b2c0  lwz 10, 20(8)
  062b2c4  lwz 9, 16(8)
  062b2c8  lwz 11, 36(10)
  062b2cc  lwz 0, 16(9)
  062b2d0  cmpw 7, 11, 0
  062b2d4  bf 30, 0x62b378
  062b2d8  lwz 0, 0(10)
  062b2dc  lwsync
  062b2e0  clrlwi 0, 0, 31
  062b2e4  cmpwi 7, 0, 0
  062b2e8  bt 30, 0x62b360
  062b2ec  lbz 3, 104(31)
  062b2f0  li 0, 0
  062b2f4  cmpwi 7, 3, 2
  062b2f8  stw 0, 124(1)
  062b2fc  bt 30, 0x62b3ec
  062b300  cmpwi 7, 3, 3
  062b304  bt 30, 0x62b3ec
  062b308  cmpwi 7, 3, 4
  062b30c  bt 30, 0x62b3b0
  062b310  lis 0, 1
  062b314  mr 3, 8
  062b318  ori 0, 0, 7247
  062b31c  addi 4, 1, 112
  062b320  stw 0, 112(1)
  062b324  addi 5, 1, 124
  062b328  bl 0x6487c0
  062b32c  nop
  062b330  cmpwi 7, 3, 0
  062b334  mr 4, 3
  062b338  bf 30, 0x62b464
  062b33c  lwz 11, 124(1)
  062b340  lwz 0, 0(11)
  062b344  cmpwi 7, 0, 0
  062b348  bf 30, 0x62b444
  062b34c  lwz 0, 12(11)
  062b350  lwz 9, 28(11)
  062b354  sub 3, 9, 0
  062b358  lwz 0, 56(11)
  062b35c  b 0x62b380
  062b360  lwz 9, 16(8)
  062b364  lwz 11, -32648(30)
  062b368  lfs 13, 12(9)
  062b36c  lfs 0, 0(11)
  062b370  fcmpu 7, 13, 0
  062b374  bt 28, 0x62b2ec
  062b378  li 3, 0
  062b37c  li 0, 0
  062b380  cmpwi 7, 28, 0
  062b384  bt 30, 0x62b38c
  062b388  stw 0, 0(29)
  062b38c  ld 0, 176(1)
  062b390  clrldi 3, 3, 32
  062b394  ld 28, 128(1)
  062b398  ld 29, 136(1)
  062b39c  mtlr 0
  062b3a0  ld 30, 144(1)
  062b3a4  ld 31, 152(1)
  062b3a8  addi 1, 1, 160
  062b3ac  blr
  062b3b0  lis 0, 1
  062b3b4  mr 3, 8
  062b3b8  ori 0, 0, 1
  062b3bc  addi 4, 1, 116
  062b3c0  stw 0, 116(1)
  062b3c4  addi 5, 1, 124
  062b3c8  bl 0x6487c0
  062b3cc  nop
  062b3d0  cmpwi 7, 3, 0
  062b3d4  mr 4, 3
  062b3d8  bf 30, 0x62b450
  062b3dc  lwz 9, 124(1)
  062b3e0  lwz 0, 16(9)
  062b3e4  lwz 3, 20(9)
  062b3e8  b 0x62b380
  062b3ec  lis 0, 1
  062b3f0  mr 3, 8
  062b3f4  ori 0, 0, 64688
  062b3f8  addi 4, 1, 120
  062b3fc  stw 0, 120(1)
  062b400  addi 5, 1, 124
  062b404  bl 0x6487c0
  062b408  nop
  062b40c  cmpwi 7, 3, 0
  062b410  mr 4, 3
  062b414  bt 30, 0x62b3dc
  062b418  lwz 3, -32312(30)
  062b41c  extsw 4, 4
  062b420  bl 0x5cd098
  062b424  nop
  062b428  b 0x62b3dc
  062b42c  lwz 3, -32316(30)
  062b430  li 5, 3195
  062b434  lwz 4, -32628(30)
  062b438  bl 0x61948c
  062b43c  nop
  062b440  b 0x62b2bc
  062b444  lwz 3, 24(11)
  062b448  lwz 0, 56(11)
  062b44c  b 0x62b380
  062b450  lwz 3, -32308(30)
  062b454  extsw 4, 4
  062b458  bl 0x5cd098
  062b45c  nop
  062b460  b 0x62b3dc
  062b464  lwz 3, -32304(30)
  062b468  extsw 4, 4
  062b46c  bl 0x5cd098
  062b470  nop
  062b474  b 0x62b33c

snd_SynthGetVoicePlaybackLength:   # 0x62b484, 0x1d0 bytes
  062b484  cmpwi 7, 3, 0
  062b488  mflr 0
  062b48c  stdu 1, -144(1)
  062b490  std 30, 128(1)
  062b494  std 31, 136(1)
  062b498  std 0, 160(1)
  062b49c  lwz 30, -29432(2)
  062b4a0  mr 31, 3
  062b4a4  bt 30, 0x62b63c
  062b4a8  lwz 8, 108(31)
  062b4ac  lwz 10, 20(8)
  062b4b0  lwz 9, 16(8)
  062b4b4  lwz 11, 36(10)
  062b4b8  lwz 0, 16(9)
  062b4bc  cmpw 7, 11, 0
  062b4c0  bf 30, 0x62b564
  062b4c4  lwz 0, 0(10)
  062b4c8  lwsync
  062b4cc  clrlwi 0, 0, 31
  062b4d0  cmpwi 7, 0, 0
  062b4d4  bt 30, 0x62b54c
  062b4d8  lbz 3, 104(31)
  062b4dc  li 0, 0
  062b4e0  cmpwi 7, 3, 2
  062b4e4  stw 0, 124(1)
  062b4e8  bt 30, 0x62b584
  062b4ec  cmpwi 7, 3, 3
  062b4f0  bt 30, 0x62b584
  062b4f4  cmpwi 7, 3, 4
  062b4f8  bt 30, 0x62b5fc
  062b4fc  lis 0, 1
  062b500  mr 3, 8
  062b504  ori 0, 0, 7247
  062b508  addi 4, 1, 112
  062b50c  stw 0, 112(1)
  062b510  addi 5, 1, 124
  062b514  bl 0x6487c0
  062b518  nop
  062b51c  cmpwi 7, 3, 0
  062b520  mr 4, 3
  062b524  bf 30, 0x62b5d4
  062b528  lwz 9, 124(1)
  062b52c  ld 0, 160(1)
  062b530  ld 30, 128(1)
  062b534  ld 31, 136(1)
  062b538  mtlr 0
  062b53c  addi 1, 1, 144
  062b540  lwz 3, 60(9)
  062b544  clrldi 3, 3, 32
  062b548  blr
  062b54c  lwz 9, 16(8)
  062b550  lwz 11, -32648(30)
  062b554  lfs 13, 12(9)
  062b558  lfs 0, 0(11)
  062b55c  fcmpu 7, 13, 0
  062b560  bt 28, 0x62b4d8
  062b564  ld 0, 160(1)
  062b568  li 3, 0
  062b56c  ld 30, 128(1)
  062b570  clrldi 3, 3, 32
  062b574  ld 31, 136(1)
  062b578  mtlr 0
  062b57c  addi 1, 1, 144
  062b580  blr
  062b584  lis 0, 1
  062b588  mr 3, 8
  062b58c  ori 0, 0, 64688
  062b590  addi 4, 1, 120
  062b594  stw 0, 120(1)
  062b598  addi 5, 1, 124
  062b59c  bl 0x6487c0
  062b5a0  nop
  062b5a4  cmpwi 7, 3, 0
  062b5a8  mr 4, 3
  062b5ac  bf 30, 0x62b5e8
  062b5b0  lwz 9, 124(1)
  062b5b4  ld 0, 160(1)
  062b5b8  ld 30, 128(1)
  062b5bc  ld 31, 136(1)
  062b5c0  mtlr 0
  062b5c4  addi 1, 1, 144
  062b5c8  lwz 3, 24(9)
  062b5cc  clrldi 3, 3, 32
  062b5d0  blr
  062b5d4  lwz 3, -32296(30)
  062b5d8  extsw 4, 4
  062b5dc  bl 0x5cd098
  062b5e0  nop
  062b5e4  b 0x62b528
  062b5e8  lwz 3, -32312(30)
  062b5ec  extsw 4, 4
  062b5f0  bl 0x5cd098
  062b5f4  nop
  062b5f8  b 0x62b5b0
  062b5fc  lis 0, 1
  062b600  mr 3, 8
  062b604  ori 0, 0, 1
  062b608  addi 4, 1, 116
  062b60c  stw 0, 116(1)
  062b610  addi 5, 1, 124
  062b614  bl 0x6487c0
  062b618  nop
  062b61c  cmpwi 7, 3, 0
  062b620  mr 4, 3
  062b624  bt 30, 0x62b5b0
  062b628  lwz 3, -32308(30)
  062b62c  extsw 4, 4
  062b630  bl 0x5cd098
  062b634  nop
  062b638  b 0x62b5b0
  062b63c  lwz 3, -32300(30)
  062b640  li 5, 3255
  062b644  lwz 4, -32628(30)
  062b648  bl 0x61948c
  062b64c  nop
  062b650  b 0x62b4a8

snd_SynthLR1Create:   # 0x62b660, 0x3ec bytes
  062b660  stdu 1, -240(1)
  062b664  mflr 0
  062b668  std 30, 224(1)
  062b66c  lwz 30, -29432(2)
  062b670  li 6, 0
  062b674  std 28, 208(1)
  062b678  std 0, 256(1)
  062b67c  li 0, 8
  062b680  std 25, 184(1)
  062b684  lwz 28, -32724(30)
  062b688  mr 25, 3
  062b68c  std 22, 160(1)
  062b690  mtctr 0
  062b694  std 23, 168(1)
  062b698  std 24, 176(1)
  062b69c  std 26, 192(1)
  062b6a0  std 27, 200(1)
  062b6a4  std 29, 216(1)
  062b6a8  std 31, 232(1)
  062b6ac  mr 11, 28
  062b6b0  clrldi 9, 11, 32
  062b6b4  lwz 0, 0(9)
  062b6b8  cmpwi 7, 0, 0
  062b6bc  bt 30, 0x62b720
  062b6c0  addi 6, 6, 1
  062b6c4  addi 11, 11, 16
  062b6c8  bdnz 0x62b6b0
  062b6cc  lwz 3, -32292(30)
  062b6d0  li 5, 4121
  062b6d4  lwz 4, -32628(30)
  062b6d8  bl 0x61948c
  062b6dc  nop
  062b6e0  li 3, 0
  062b6e4  ld 0, 256(1)
  062b6e8  clrldi 3, 3, 32
  062b6ec  ld 22, 160(1)
  062b6f0  ld 23, 168(1)
  062b6f4  mtlr 0
  062b6f8  ld 24, 176(1)
  062b6fc  ld 25, 184(1)
  062b700  ld 26, 192(1)
  062b704  ld 27, 200(1)
  062b708  ld 28, 208(1)
  062b70c  ld 29, 216(1)
  062b710  ld 30, 224(1)
  062b714  ld 31, 232(1)
  062b718  addi 1, 1, 240
  062b71c  blr
  062b720  cmpwi 7, 6, 0
  062b724  mr 0, 6
  062b728  bt 28, 0x62b6cc
  062b72c  addi 29, 1, 136
  062b730  lwz 5, -32288(30)
  062b734  li 4, 16
  062b738  clrldi 29, 29, 32
  062b73c  extsw 6, 6
  062b740  mr 3, 29
  062b744  slwi 31, 0, 4
  062b748  bl 0x5cd198
  062b74c  nop
  062b750  lis 0, 513
  062b754  lwz 27, -32660(30)
  062b758  ori 0, 0, 802
  062b75c  add 26, 31, 28
  062b760  li 24, 0
  062b764  stw 0, 128(1)
  062b768  li 0, 2
  062b76c  std 24, 112(1)
  062b770  addi 9, 26, 4
  062b774  mr 10, 29
  062b778  lwz 29, 0(27)
  062b77c  stw 0, 0(27)
  062b780  clrldi 9, 9, 32
  062b784  addi 3, 1, 128
  062b788  li 4, 1
  062b78c  li 5, 0
  062b790  li 6, 0
  062b794  li 7, 0
  062b798  li 8, 0
  062b79c  bl 0x641b58
  062b7a0  nop
  062b7a4  cmpwi 7, 3, 0
  062b7a8  stw 29, 0(27)
  062b7ac  bt 28, 0x62ba38
  062b7b0  lwz 22, -32724(30)
  062b7b4  extsw 28, 31
  062b7b8  li 4, 0
  062b7bc  add 29, 28, 22
  062b7c0  li 5, 0
  062b7c4  lwz 3, 4(29)
  062b7c8  bl 0x641a3c
  062b7cc  nop
  062b7d0  cmpwi 7, 3, 0
  062b7d4  bf 30, 0x62b9fc
  062b7d8  lwz 3, 4(29)
  062b7dc  clrldi 5, 26, 32
  062b7e0  li 4, 100
  062b7e4  li 6, 0
  062b7e8  bl 0x64547c
  062b7ec  nop
  062b7f0  cmpwi 7, 3, 0
  062b7f4  bf 30, 0x62ba24
  062b7f8  lwzx 29, 22, 28
  062b7fc  addi 4, 1, 132
  062b800  stw 24, 132(1)
  062b804  mr 3, 29
  062b808  bl 0x647ed0
  062b80c  nop
  062b810  cmpwi 7, 3, 0
  062b814  bf 30, 0x62ba10
  062b818  lwz 7, 132(1)
  062b81c  cmpwi 7, 7, 0
  062b820  bt 30, 0x62b984
  062b824  lwz 11, -32268(30)
  062b828  clrldi 10, 7, 32
  062b82c  li 0, 10
  062b830  lfs 10, -32612(30)
  062b834  cmpwi 7, 25, 0
  062b838  li 8, 0
  062b83c  lwz 9, 0(11)
  062b840  stw 0, 4(10)
  062b844  rlwinm 9, 9, 0, 27, 27
  062b848  stfs 10, 0(10)
  062b84c  li 0, 15
  062b850  stfs 10, 88(10)
  062b854  addi 9, 9, -1
  062b858  stfs 10, 96(10)
  062b85c  stw 0, 68(10)
  062b860  srawi 9, 9, 31
  062b864  li 0, 4
  062b868  rlwinm 11, 9, 0, 0, 23
  062b86c  li 9, 20
  062b870  addi 11, 11, 1347
  062b874  stw 9, 8(10)
  062b878  li 9, 1
  062b87c  stw 0, 104(10)
  062b880  stw 9, 64(10)
  062b884  stw 24, 108(10)
  062b888  stw 8, 72(10)
  062b88c  stw 8, 76(10)
  062b890  stw 8, 80(10)
  062b894  stw 24, 84(10)
  062b898  stw 8, 92(10)
  062b89c  stw 11, 112(10)
  062b8a0  bt 30, 0x62b9e4
  062b8a4  ori 0, 11, 2048
  062b8a8  lfs 0, -32264(30)
  062b8ac  lfs 13, -32256(30)
  062b8b0  lfs 12, -32248(30)
  062b8b4  lfs 11, -32240(30)
  062b8b8  stfs 10, 176(10)
  062b8bc  stw 0, 112(10)
  062b8c0  stfs 0, 116(10)
  062b8c4  stfs 13, 132(10)
  062b8c8  stfs 12, 148(10)
  062b8cc  stfs 11, 164(10)
  062b8d0  stw 8, 168(10)
  062b8d4  stfs 10, 124(10)
  062b8d8  stw 8, 120(10)
  062b8dc  stfs 10, 128(10)
  062b8e0  stfs 10, 140(10)
  062b8e4  stw 8, 136(10)
  062b8e8  stfs 10, 144(10)
  062b8ec  stfs 10, 156(10)
  062b8f0  stw 8, 152(10)
  062b8f4  stfs 10, 160(10)
  062b8f8  stfs 10, 172(10)
  062b8fc  lwz 9, -32232(30)
  062b900  addi 11, 7, 12
  062b904  li 4, -1
  062b908  clrldi 11, 11, 32
  062b90c  mr 3, 29
  062b910  clrldi 4, 4, 32
  062b914  lwz 0, 48(9)
  062b918  lwz 10, 0(9)
  062b91c  lwz 8, 4(9)
  062b920  lwz 7, 8(9)
  062b924  lwz 6, 12(9)
  062b928  lwz 5, 16(9)
  062b92c  lwz 29, 20(9)
  062b930  lwz 28, 24(9)
  062b934  lwz 27, 28(9)
  062b938  lwz 26, 32(9)
  062b93c  lwz 25, 36(9)
  062b940  lwz 24, 40(9)
  062b944  lwz 23, 44(9)
  062b948  stw 0, 48(11)
  062b94c  stw 10, 0(11)
  062b950  stw 8, 4(11)
  062b954  stw 7, 8(11)
  062b958  stw 6, 12(11)
  062b95c  stw 5, 16(11)
  062b960  stw 29, 20(11)
  062b964  stw 28, 24(11)
  062b968  stw 27, 28(11)
  062b96c  stw 26, 32(11)
  062b970  stw 25, 36(11)
  062b974  stw 24, 40(11)
  062b978  stw 23, 44(11)
  062b97c  bl 0x647f34
  062b980  nop
  062b984  extsw 0, 31
  062b988  lwz 11, -32716(30)
  062b98c  ld 23, 168(1)
  062b990  add 10, 0, 22
  062b994  ld 24, 176(1)
  062b998  ld 25, 184(1)
  062b99c  ld 26, 192(1)
  062b9a0  lwzx 3, 22, 0
  062b9a4  li 0, -1
  062b9a8  lwz 9, 0(11)
  062b9ac  stw 0, 8(10)
  062b9b0  ld 0, 256(1)
  062b9b4  addi 9, 9, 1
  062b9b8  clrldi 3, 3, 32
  062b9bc  ld 22, 160(1)
  062b9c0  ld 27, 200(1)
  062b9c4  mtlr 0
  062b9c8  ld 28, 208(1)
  062b9cc  ld 29, 216(1)
  062b9d0  ld 30, 224(1)
  062b9d4  ld 31, 232(1)
  062b9d8  addi 1, 1, 240
  062b9dc  stw 9, 0(11)
  062b9e0  blr
  062b9e4  lfs 0, -32412(30)
  062b9e8  stfs 10, 128(10)
  062b9ec  stw 8, 116(10)
  062b9f0  stfs 0, 120(10)
  062b9f4  stfs 10, 124(10)
  062b9f8  b 0x62b8fc
  062b9fc  extsw 4, 3
  062ba00  lwz 3, -32280(30)
  062ba04  bl 0x5cd098
  062ba08  nop
  062ba0c  b 0x62b7d8
  062ba10  extsw 4, 3
  062ba14  lwz 3, -32272(30)
  062ba18  bl 0x5cd098
  062ba1c  nop
  062ba20  b 0x62b818
  062ba24  extsw 4, 3
  062ba28  lwz 3, -32276(30)
  062ba2c  bl 0x5cd098
  062ba30  nop
  062ba34  b 0x62b7f8
  062ba38  lwz 3, -32284(30)
  062ba3c  bl 0x61948c
  062ba40  nop
  062ba44  li 3, 0
  062ba48  b 0x62b6e4

snd_SynthQueueVoiceBuffer:   # 0x62ba54, 0x2bc bytes
  062ba54  cmpwi 7, 3, 0
  062ba58  mflr 0
  062ba5c  stdu 1, -208(1)
  062ba60  std 24, 144(1)
  062ba64  std 25, 152(1)
  062ba68  std 26, 160(1)
  062ba6c  std 27, 168(1)
  062ba70  std 30, 192(1)
  062ba74  std 31, 200(1)
  062ba78  std 28, 176(1)
  062ba7c  std 29, 184(1)
  062ba80  std 0, 224(1)
  062ba84  lwz 30, -29432(2)
  062ba88  mr 31, 3
  062ba8c  mr 27, 4
  062ba90  mr 26, 5
  062ba94  mr 25, 6
  062ba98  mr 24, 7
  062ba9c  bt 30, 0x62bcc4
  062baa0  cmpwi 7, 27, 0
  062baa4  bt 30, 0x62bc64
  062baa8  clrldi 3, 31, 32
  062baac  lwz 28, 108(31)
  062bab0  bl 0x627000
  062bab4  cmpwi 7, 3, 0
  062bab8  bt 28, 0x62bcb0
  062babc  lbz 9, 104(31)
  062bac0  addi 0, 9, -2
  062bac4  cmplwi 7, 0, 2
  062bac8  bf 29, 0x62bbb8
  062bacc  cmpwi 7, 9, 1
  062bad0  srwi 29, 26, 1
  062bad4  bt 30, 0x62bae8
  062bad8  srwi 0, 26, 4
  062badc  slwi 9, 0, 5
  062bae0  slwi 0, 0, 2
  062bae4  sub 29, 9, 0
  062bae8  lis 0, 1
  062baec  clrldi 28, 28, 32
  062baf0  ori 0, 0, 18912
  062baf4  mr 3, 28
  062baf8  stw 0, 124(1)
  062bafc  addi 4, 1, 124
  062bb00  addi 5, 1, 128
  062bb04  bl 0x648730
  062bb08  nop
  062bb0c  lwz 9, 128(1)
  062bb10  cmpwi 7, 9, 0
  062bb14  bt 30, 0x62bbe8
  062bb18  clrldi 9, 9, 32
  062bb1c  lis 10, 1
  062bb20  li 8, 0
  062bb24  li 0, 2
  062bb28  li 11, -1
  062bb2c  ori 10, 10, 18912
  062bb30  stw 0, 36(9)
  062bb34  stw 11, 8(9)
  062bb38  stw 29, 12(9)
  062bb3c  stw 27, 28(9)
  062bb40  stw 8, 24(9)
  062bb44  stw 26, 32(9)
  062bb48  stw 29, 4(9)
  062bb4c  stw 27, 20(9)
  062bb50  stw 8, 16(9)
  062bb54  mr 3, 28
  062bb58  stw 10, 112(1)
  062bb5c  addi 4, 1, 112
  062bb60  bl 0x6486f8
  062bb64  nop
  062bb68  lwz 0, 96(31)
  062bb6c  xori 0, 0, 1
  062bb70  stw 0, 96(31)
  062bb74  bl 0x640c9c
  062bb78  nop
  062bb7c  li 0, 1
  062bb80  stw 3, 100(31)
  062bb84  extsw 3, 0
  062bb88  ld 0, 224(1)
  062bb8c  ld 24, 144(1)
  062bb90  ld 25, 152(1)
  062bb94  mtlr 0
  062bb98  ld 26, 160(1)
  062bb9c  ld 27, 168(1)
  062bba0  ld 28, 176(1)
  062bba4  ld 29, 184(1)
  062bba8  ld 30, 192(1)
  062bbac  ld 31, 200(1)
  062bbb0  addi 1, 1, 208
  062bbb4  blr
  062bbb8  lis 0, 1
  062bbbc  clrldi 28, 28, 32
  062bbc0  ori 0, 0, 52111
  062bbc4  mr 3, 28
  062bbc8  stw 0, 116(1)
  062bbcc  addi 4, 1, 116
  062bbd0  addi 5, 1, 128
  062bbd4  bl 0x648730
  062bbd8  nop
  062bbdc  lwz 9, 128(1)
  062bbe0  cmpwi 7, 9, 0
  062bbe4  bf 30, 0x62bc20
  062bbe8  li 0, 0
  062bbec  ld 24, 144(1)
  062bbf0  ld 25, 152(1)
  062bbf4  extsw 3, 0
  062bbf8  ld 0, 224(1)
  062bbfc  ld 26, 160(1)
  062bc00  ld 27, 168(1)
  062bc04  mtlr 0
  062bc08  ld 28, 176(1)
  062bc0c  ld 29, 184(1)
  062bc10  ld 30, 192(1)
  062bc14  ld 31, 200(1)
  062bc18  addi 1, 1, 208
  062bc1c  blr
  062bc20  clrldi 9, 9, 32
  062bc24  li 0, 2
  062bc28  lis 11, 1
  062bc2c  mr 3, 28
  062bc30  ori 11, 11, 52111
  062bc34  stw 0, 44(9)
  062bc38  li 0, 0
  062bc3c  stw 27, 4(9)
  062bc40  stw 0, 0(9)
  062bc44  stw 26, 8(9)
  062bc48  stw 25, 24(9)
  062bc4c  stw 24, 28(9)
  062bc50  addi 4, 1, 120
  062bc54  stw 11, 120(1)
  062bc58  bl 0x6486f8
  062bc5c  nop
  062bc60  b 0x62bb68
  062bc64  lwz 29, -32628(30)
  062bc68  li 5, 3014
  062bc6c  lwz 3, -32224(30)
  062bc70  mr 4, 29
  062bc74  bl 0x61948c
  062bc78  nop
  062bc7c  lwz 3, -32624(30)
  062bc80  mr 4, 29
  062bc84  li 5, 3015
  062bc88  bl 0x61948c
  062bc8c  nop
  062bc90  lwz 9, -32620(30)
  062bc94  lbz 0, 0(9)
  062bc98  cmpwi 7, 0, 0
  062bc9c  bf 30, 0x62bbe8
  062bca0  lwz 9, -32616(30)
  062bca4  lbz 0, 0(9)
  062bca8  twnei 0, 0
  062bcac  b 0x62baa8
  062bcb0  lwz 3, -32220(30)
  062bcb4  bl 0x61948c
  062bcb8  nop
  062bcbc  li 0, 0
  062bcc0  b 0x62bb84
  062bcc4  lwz 29, -32628(30)
  062bcc8  li 5, 3010
  062bccc  lwz 3, -32228(30)
  062bcd0  mr 4, 29
  062bcd4  bl 0x61948c
  062bcd8  nop
  062bcdc  lwz 3, -32624(30)
  062bce0  mr 4, 29
  062bce4  li 5, 3011
  062bce8  bl 0x61948c
  062bcec  nop
  062bcf0  lwz 9, -32620(30)
  062bcf4  lbz 0, 0(9)
  062bcf8  cmpwi 7, 0, 0
  062bcfc  bf 30, 0x62bbe8
  062bd00  lwz 9, -32616(30)
  062bd04  lbz 0, 0(9)
  062bd08  twnei 0, 0
  062bd0c  b 0x62baa0

FUN_0062bd20:   # 0x62bd20, 0x98 bytes
  062bd20  stdu 1, -144(1)
  062bd24  mflr 0
  062bd28  std 30, 128(1)
  062bd2c  lwz 30, -29432(2)
  062bd30  addi 4, 1, 112
  062bd34  std 0, 160(1)
  062bd38  lis 0, 769
  062bd3c  std 31, 136(1)
  062bd40  ori 0, 0, 31573
  062bd44  lwz 9, -32672(30)
  062bd48  mr 31, 3
  062bd4c  stw 0, 112(1)
  062bd50  addi 5, 1, 116
  062bd54  lwz 3, 0(9)
  062bd58  clrldi 3, 3, 32
  062bd5c  bl 0x6487c0
  062bd60  nop
  062bd64  cmpwi 7, 3, 0
  062bd68  bt 28, 0x62bda0
  062bd6c  lwz 9, 116(1)
  062bd70  li 10, 0
  062bd74  addi 0, 9, 288
  062bd78  li 9, 8
  062bd7c  mtctr 9
  062bd80  add 9, 10, 0
  062bd84  add 11, 10, 31
  062bd88  clrldi 9, 9, 32
  062bd8c  clrldi 11, 11, 32
  062bd90  addi 10, 10, 4
  062bd94  lfs 0, 0(9)
  062bd98  stfs 0, 0(11)
  062bd9c  bdnz 0x62bd80
  062bda0  ld 0, 160(1)
  062bda4  ld 30, 128(1)
  062bda8  ld 31, 136(1)
  062bdac  mtlr 0
  062bdb0  addi 1, 1, 144
  062bdb4  blr

FUN_0062bdc0:   # 0x62bdc0, 0x70 bytes
  062bdc0  stdu 1, -144(1)
  062bdc4  mflr 0
  062bdc8  std 30, 128(1)
  062bdcc  lwz 30, -29432(2)
  062bdd0  addi 4, 1, 112
  062bdd4  std 0, 160(1)
  062bdd8  lis 0, 257
  062bddc  std 31, 136(1)
  062bde0  ori 0, 0, 52568
  062bde4  lwz 9, -32652(30)
  062bde8  mr 31, 3
  062bdec  stw 0, 112(1)
  062bdf0  addi 5, 1, 116
  062bdf4  lwz 3, 0(9)
  062bdf8  clrldi 3, 3, 32
  062bdfc  bl 0x6487c0
  062be00  nop
  062be04  cmpwi 7, 3, 0
  062be08  bt 28, 0x62be18
  062be0c  lwz 9, 116(1)
  062be10  lfs 0, 320(9)
  062be14  stfs 0, 0(31)
  062be18  ld 0, 160(1)
  062be1c  ld 30, 128(1)
  062be20  ld 31, 136(1)
  062be24  mtlr 0
  062be28  addi 1, 1, 144
  062be2c  blr

FUN_0062be38:   # 0x62be38, 0x4c0 bytes
  062be38  cmpdi 3, 0
  062be3c  mflr 0
  062be40  stdu 1, -240(1)
  062be44  std 30, 224(1)
  062be48  std 25, 184(1)
  062be4c  std 26, 192(1)
  062be50  std 27, 200(1)
  062be54  std 28, 208(1)
  062be58  std 29, 216(1)
  062be5c  std 31, 232(1)
  062be60  std 0, 256(1)
  062be64  lwz 30, -29432(2)
  062be68  bt 2, 0x62c388
  062be6c  li 0, 0
  062be70  lwz 27, 108(3)
  062be74  lwz 26, 112(3)
  062be78  mr 29, 3
  062be7c  lbz 25, 104(3)
  062be80  std 0, 144(1)
  062be84  std 0, 120(1)
  062be88  std 0, 128(1)
  062be8c  std 0, 136(1)
  062be90  lbz 0, 104(3)
  062be94  clrlwi 6, 0, 24
  062be98  cmplwi 7, 6, 4
  062be9c  bf 29, 0x62c2a0
  062bea0  addi 31, 1, 120
  062bea4  lwz 5, -32188(30)
  062bea8  clrldi 6, 6, 56
  062beac  mr 3, 31
  062beb0  li 4, 32
  062beb4  bl 0x5cd198
  062beb8  nop
  062bebc  mr 4, 31
  062bec0  lwz 3, -32184(30)
  062bec4  bl 0x61948c
  062bec8  nop
  062becc  lfs 0, 0(29)
  062bed0  fmr 1, 0
  062bed4  stfd 0, 160(1)
  062bed8  ld 4, 160(1)
  062bedc  lwz 3, -32180(30)
  062bee0  bl 0x61948c
  062bee4  nop
  062bee8  lfs 0, 4(29)
  062beec  fmr 1, 0
  062bef0  stfd 0, 160(1)
  062bef4  ld 4, 160(1)
  062bef8  lwz 3, -32176(30)
  062befc  bl 0x61948c
  062bf00  nop
  062bf04  lwz 3, -32172(30)
  062bf08  lwz 4, 32(29)
  062bf0c  bl 0x61948c
  062bf10  nop
  062bf14  lwz 3, -32168(30)
  062bf18  lwz 4, 36(29)
  062bf1c  bl 0x61948c
  062bf20  nop
  062bf24  lwz 3, -32164(30)
  062bf28  lwz 4, 40(29)
  062bf2c  bl 0x61948c
  062bf30  nop
  062bf34  lbz 0, 106(29)
  062bf38  cmpwi 7, 0, 0
  062bf3c  bt 30, 0x62c2d0
  062bf40  lwz 4, -32160(30)
  062bf44  clrldi 4, 4, 32
  062bf48  lwz 3, -32152(30)
  062bf4c  clrldi 28, 27, 32
  062bf50  bl 0x61948c
  062bf54  nop
  062bf58  clrldi 31, 26, 32
  062bf5c  lwz 3, -32148(30)
  062bf60  mr 4, 28
  062bf64  bl 0x61948c
  062bf68  nop
  062bf6c  lwz 3, -32144(30)
  062bf70  mr 4, 31
  062bf74  bl 0x61948c
  062bf78  nop
  062bf7c  cmpwi 7, 27, 0
  062bf80  bt 30, 0x62c150
  062bf84  lwz 29, 16(28)
  062bf88  mr 4, 28
  062bf8c  lwz 3, -32140(30)
  062bf90  lwz 27, 20(28)
  062bf94  bl 0x61948c
  062bf98  nop
  062bf9c  ld 4, 0(29)
  062bfa0  lwsync
  062bfa4  lwz 3, -32136(30)
  062bfa8  bl 0x61948c
  062bfac  nop
  062bfb0  lwz 3, -32132(30)
  062bfb4  lwz 4, 8(29)
  062bfb8  bl 0x61948c
  062bfbc  nop
  062bfc0  lfs 0, 12(29)
  062bfc4  fmr 1, 0
  062bfc8  stfd 0, 160(1)
  062bfcc  ld 4, 160(1)
  062bfd0  lwz 3, -32128(30)
  062bfd4  bl 0x61948c
  062bfd8  nop
  062bfdc  lwz 4, 16(29)
  062bfe0  lwz 3, -32124(30)
  062bfe4  bl 0x61948c
  062bfe8  nop
  062bfec  lis 0, 257
  062bff0  li 9, 0
  062bff4  ori 0, 0, 31357
  062bff8  stw 9, 116(1)
  062bffc  stw 0, 112(1)
  062c000  mr 3, 28
  062c004  addi 4, 1, 112
  062c008  addi 5, 1, 116
  062c00c  bl 0x648820
  062c010  nop
  062c014  lwz 9, 116(1)
  062c018  cmpwi 7, 9, 0
  062c01c  bt 30, 0x62c040
  062c020  clrldi 9, 9, 32
  062c024  lwz 3, -32120(30)
  062c028  lfs 0, 0(9)
  062c02c  fmr 1, 0
  062c030  stfd 0, 160(1)
  062c034  ld 4, 160(1)
  062c038  bl 0x61948c
  062c03c  nop
  062c040  clrldi 29, 27, 32
  062c044  lwz 3, -32116(30)
  062c048  mr 4, 28
  062c04c  bl 0x61948c
  062c050  nop
  062c054  lwz 4, 0(29)
  062c058  lwsync
  062c05c  clrldi 4, 4, 32
  062c060  lwz 3, -32112(30)
  062c064  bl 0x61948c
  062c068  nop
  062c06c  lwz 3, -32108(30)
  062c070  lwz 4, 8(29)
  062c074  bl 0x61948c
  062c078  nop
  062c07c  lwz 3, -32104(30)
  062c080  lwz 4, 4(29)
  062c084  bl 0x61948c
  062c088  nop
  062c08c  lfs 0, 12(29)
  062c090  fmr 1, 0
  062c094  stfd 0, 160(1)
  062c098  ld 4, 160(1)
  062c09c  lwz 3, -32100(30)
  062c0a0  bl 0x61948c
  062c0a4  nop
  062c0a8  lwz 3, -32096(30)
  062c0ac  lwz 4, 16(29)
  062c0b0  bl 0x61948c
  062c0b4  nop
  062c0b8  lwz 3, -32092(30)
  062c0bc  lwz 4, 20(29)
  062c0c0  bl 0x61948c
  062c0c4  nop
  062c0c8  lwz 3, -32088(30)
  062c0cc  lwz 4, 24(29)
  062c0d0  bl 0x61948c
  062c0d4  nop
  062c0d8  lwz 3, -32084(30)
  062c0dc  lwz 4, 28(29)
  062c0e0  bl 0x61948c
  062c0e4  nop
  062c0e8  lwz 3, -32080(30)
  062c0ec  lwz 4, 36(29)
  062c0f0  bl 0x61948c
  062c0f4  nop
  062c0f8  lwz 10, 24(28)
  062c0fc  lwz 0, 20(28)
  062c100  lwz 11, 24(10)
  062c104  lwz 9, 580(11)
  062c108  ori 9, 9, 1
  062c10c  slwi 9, 9, 3
  062c110  add 9, 9, 0
  062c114  addi 3, 9, 40
  062c118  cmpwi 7, 3, 0
  062c11c  bt 30, 0x62c150
  062c120  clrlwi 9, 25, 24
  062c124  addi 9, 9, -2
  062c128  cmplwi 7, 9, 2
  062c12c  bt 29, 0x62c2d8
  062c130  clrldi 9, 3, 32
  062c134  lwz 3, -32076(30)
  062c138  lfs 0, 288(9)
  062c13c  fmr 1, 0
  062c140  stfd 0, 160(1)
  062c144  ld 4, 160(1)
  062c148  bl 0x61948c
  062c14c  nop
  062c150  cmpwi 7, 26, 0
  062c154  bt 30, 0x62c274
  062c158  lwz 28, 16(31)
  062c15c  mr 4, 31
  062c160  lwz 3, -32072(30)
  062c164  lwz 29, 20(31)
  062c168  bl 0x61948c
  062c16c  nop
  062c170  ld 4, 0(28)
  062c174  lwsync
  062c178  lwz 3, -32136(30)
  062c17c  bl 0x61948c
  062c180  nop
  062c184  lwz 3, -32132(30)
  062c188  lwz 4, 8(28)
  062c18c  bl 0x61948c
  062c190  nop
  062c194  lfs 0, 12(28)
  062c198  fmr 1, 0
  062c19c  stfd 0, 160(1)
  062c1a0  ld 4, 160(1)
  062c1a4  lwz 3, -32128(30)
  062c1a8  bl 0x61948c
  062c1ac  nop
  062c1b0  lwz 4, 16(28)
  062c1b4  lwz 3, -32124(30)
  062c1b8  bl 0x61948c
  062c1bc  nop
  062c1c0  mr 4, 31
  062c1c4  lwz 3, -32068(30)
  062c1c8  bl 0x61948c
  062c1cc  nop
  062c1d0  lwz 4, 0(29)
  062c1d4  lwsync
  062c1d8  clrldi 4, 4, 32
  062c1dc  lwz 3, -32112(30)
  062c1e0  bl 0x61948c
  062c1e4  nop
  062c1e8  lwz 3, -32108(30)
  062c1ec  lwz 4, 8(29)
  062c1f0  bl 0x61948c
  062c1f4  nop
  062c1f8  lwz 3, -32104(30)
  062c1fc  lwz 4, 4(29)
  062c200  bl 0x61948c
  062c204  nop
  062c208  lfs 0, 12(29)
  062c20c  fmr 1, 0
  062c210  stfd 0, 160(1)
  062c214  ld 4, 160(1)
  062c218  lwz 3, -32100(30)
  062c21c  bl 0x61948c
  062c220  nop
  062c224  lwz 3, -32096(30)
  062c228  lwz 4, 16(29)
  062c22c  bl 0x61948c
  062c230  nop
  062c234  lwz 3, -32092(30)
  062c238  lwz 4, 20(29)
  062c23c  bl 0x61948c
  062c240  nop
  062c244  lwz 3, -32088(30)
  062c248  lwz 4, 24(29)
  062c24c  bl 0x61948c
  062c250  nop
  062c254  lwz 3, -32084(30)
  062c258  lwz 4, 28(29)
  062c25c  bl 0x61948c
  062c260  nop
  062c264  lwz 3, -32080(30)
  062c268  lwz 4, 36(29)
  062c26c  bl 0x61948c
  062c270  nop
  062c274  ld 0, 256(1)
  062c278  ld 25, 184(1)
  062c27c  ld 26, 192(1)
  062c280  mtlr 0
  062c284  ld 27, 200(1)
  062c288  ld 28, 208(1)
  062c28c  ld 29, 216(1)
  062c290  ld 30, 224(1)
  062c294  ld 31, 232(1)
  062c298  addi 1, 1, 240
  062c29c  blr
  062c2a0  lwz 11, -32212(30)
  062c2a4  rlwinm 9, 0, 2, 22, 29
  062c2a8  lwzx 0, 9, 11
  062c2ac  extsw 0, 0
  062c2b0  add 0, 0, 11
  062c2b4  mtctr 0
  062c2b8  bctr
  062c2bc  <unknown>
  062c2c0  <unknown>
  062c2c4  <unknown>
  062c2c8  <unknown>
  062c2cc  <unknown>
  062c2d0  lwz 4, -32156(30)
  062c2d4  b 0x62bf44
  062c2d8  clrldi 9, 3, 32
  062c2dc  lwz 3, -32076(30)
  062c2e0  lfs 0, 64(9)
  062c2e4  fmr 1, 0
  062c2e8  stfd 0, 160(1)
  062c2ec  ld 4, 160(1)
  062c2f0  bl 0x61948c
  062c2f4  nop

FUN_0062c3a0:   # 0x62c3a0, 0x150 bytes
  062c3a0  cmpwi 7, 3, 0
  062c3a4  mflr 0
  062c3a8  stdu 1, -160(1)
  062c3ac  std 26, 112(1)
  062c3b0  std 27, 120(1)
  062c3b4  std 28, 128(1)
  062c3b8  std 29, 136(1)
  062c3bc  std 30, 144(1)
  062c3c0  std 31, 152(1)
  062c3c4  std 0, 176(1)
  062c3c8  lwz 30, -29432(2)
  062c3cc  mr 31, 3
  062c3d0  mr 26, 4
  062c3d4  mr 29, 5
  062c3d8  mr 28, 6
  062c3dc  mr 27, 4
  062c3e0  bt 30, 0x62c4b0
  062c3e4  not 0, 27
  062c3e8  lwz 9, 44(31)
  062c3ec  stw 26, 32(31)
  062c3f0  srawi 0, 0, 31
  062c3f4  cmpwi 7, 9, 0
  062c3f8  and 29, 29, 0
  062c3fc  stw 29, 36(31)
  062c400  bt 30, 0x62c480
  062c404  cmplwi 7, 9, 1
  062c408  lis 6, 5825
  062c40c  clrldi 9, 9, 32
  062c410  li 7, 0
  062c414  ori 6, 6, 27671
  062c418  mtctr 9
  062c41c  bt- 28, 0x62c4e4
  062c420  add 0, 7, 28
  062c424  add 9, 31, 7
  062c428  clrldi 10, 0, 32
  062c42c  clrldi 8, 9, 32
  062c430  addi 7, 7, 4
  062c434  li 11, 0
  062c438  lwz 9, 132(10)
  062c43c  srwi 0, 9, 3
  062c440  mulhwu 0, 0, 6
  062c444  srwi 0, 0, 2
  062c448  mulli 0, 0, 360
  062c44c  sub 9, 9, 0
  062c450  stw 9, 48(8)
  062c454  lwz 0, 132(10)
  062c458  cmpwi 7, 0, 0
  062c45c  bt 28, 0x62c478
  062c460  lwz 0, 144(10)
  062c464  srwi 9, 0, 3
  062c468  mulhwu 9, 9, 6
  062c46c  srwi 11, 9, 2
  062c470  mulli 11, 11, 360
  062c474  sub 11, 0, 11
  062c478  stw 11, 60(8)
  062c47c  bdnz 0x62c420
  062c480  li 0, 1
  062c484  stb 0, 106(31)
  062c488  ld 0, 176(1)
  062c48c  ld 26, 112(1)
  062c490  ld 27, 120(1)
  062c494  mtlr 0
  062c498  ld 28, 128(1)
  062c49c  ld 29, 136(1)
  062c4a0  ld 30, 144(1)
  062c4a4  ld 31, 152(1)
  062c4a8  addi 1, 1, 160
  062c4ac  blr
  062c4b0  lwz 3, -32624(30)
  062c4b4  li 5, 3969
  062c4b8  lwz 4, -32628(30)
  062c4bc  bl 0x61948c
  062c4c0  nop
  062c4c4  lwz 9, -32620(30)
  062c4c8  lbz 0, 0(9)
  062c4cc  cmpwi 7, 0, 0
  062c4d0  bf 30, 0x62c488
  062c4d4  lwz 9, -32616(30)
  062c4d8  lbz 0, 0(9)
  062c4dc  twnei 0, 0
  062c4e0  b 0x62c3e4
  062c4e4  li 0, 1
  062c4e8  mtctr 0
  062c4ec  b 0x62c420

FUN_0062c4f0:   # 0x62c4f0, 0x3c bytes
  062c4f0  stdu 1, -128(1)
  062c4f4  mflr 0
  062c4f8  std 30, 112(1)
  062c4fc  lwz 30, -29432(2)
  062c500  mr 9, 3
  062c504  std 0, 144(1)
  062c508  lwz 11, -32668(30)
  062c50c  stw 11, 0(9)
  062c510  bl 0x5e387c
  062c514  nop
  062c518  ld 0, 144(1)
  062c51c  ld 30, 112(1)
  062c520  mtlr 0
  062c524  addi 1, 1, 128
  062c528  blr

FUN_0062c52c:   # 0x62c52c, 0x13ec bytes
  062c52c  stdu 1, -368(1)
  062c530  mflr 0
  062c534  std 30, 288(1)
  062c538  lwz 30, -29432(2)
  062c53c  std 29, 280(1)
  062c540  std 0, 384(1)
  062c544  stfd 24, 304(1)
  062c548  stfd 25, 312(1)
  062c54c  stfd 26, 320(1)
  062c550  stfd 27, 328(1)
  062c554  stfd 28, 336(1)
  062c558  stfd 29, 344(1)
  062c55c  stfd 30, 352(1)
  062c560  stfd 31, 360(1)
  062c564  std 17, 184(1)
  062c568  std 18, 192(1)
  062c56c  std 19, 200(1)
  062c570  std 20, 208(1)
  062c574  std 21, 216(1)
  062c578  std 22, 224(1)
  062c57c  std 23, 232(1)
  062c580  std 24, 240(1)
  062c584  std 25, 248(1)
  062c588  std 26, 256(1)
  062c58c  std 27, 264(1)
  062c590  std 28, 272(1)
  062c594  std 31, 296(1)
  062c598  bl 0x640d14
  062c59c  nop
  062c5a0  lwz 4, -32064(30)
  062c5a4  mr 29, 3
  062c5a8  lwz 5, -32060(30)
  062c5ac  lwz 3, -32444(30)
  062c5b0  bl 0x6423dc
  062c5b4  nop
  062c5b8  cmpwi 7, 3, 0
  062c5bc  bf 30, 0x62d2cc
  062c5c0  lwz 3, -32452(30)
  062c5c4  lwz 4, -32052(30)
  062c5c8  lwz 5, -32048(30)
  062c5cc  bl 0x6423dc
  062c5d0  nop
  062c5d4  cmpwi 7, 3, 0
  062c5d8  bf 30, 0x62d2b8
  062c5dc  lwz 3, -32460(30)
  062c5e0  lwz 4, -32040(30)
  062c5e4  lwz 5, -32036(30)
  062c5e8  bl 0x6423dc
  062c5ec  nop
  062c5f0  cmpwi 7, 3, 0
  062c5f4  bf 30, 0x62d2a4
  062c5f8  lwz 3, -32468(30)
  062c5fc  lwz 4, -32028(30)
  062c600  lwz 5, -32024(30)
  062c604  bl 0x6423dc
  062c608  nop
  062c60c  cmpwi 7, 3, 0
  062c610  bf 30, 0x62d290
  062c614  lwz 28, -32268(30)
  062c618  lis 0, 769
  062c61c  li 11, 0
  062c620  lwz 9, -32016(30)
  062c624  ori 0, 0, 14987
  062c628  lwz 10, -32012(30)
  062c62c  std 11, 112(1)
  062c630  stw 0, 132(1)
  062c634  lwz 31, 0(28)
  062c638  addi 3, 1, 132
  062c63c  li 4, 1
  062c640  li 5, 0
  062c644  li 6, 0
  062c648  li 7, 0
  062c64c  li 8, 0
  062c650  bl 0x641b58
  062c654  nop
  062c658  cmpwi 7, 3, 0
  062c65c  bf 30, 0x62d6cc
  062c660  lwz 24, -32480(30)
  062c664  li 4, 0
  062c668  li 5, 1
  062c66c  lwz 3, 36(24)
  062c670  bl 0x641a3c
  062c674  nop
  062c678  cmpwi 7, 3, 0
  062c67c  bf 30, 0x62d6b8
  062c680  lwz 20, -32672(30)
  062c684  li 4, 100
  062c688  lwz 3, 36(24)
  062c68c  li 6, 0
  062c690  mr 5, 20
  062c694  bl 0x64547c
  062c698  nop
  062c69c  cmpwi 7, 3, 0
  062c6a0  bf 30, 0x62d6a4
  062c6a4  lwz 3, 0(20)
  062c6a8  li 4, 1
  062c6ac  li 5, 1
  062c6b0  bl 0x648b10
  062c6b4  nop
  062c6b8  cmpwi 7, 3, 0
  062c6bc  bf 30, 0x62d690
  062c6c0  addi 18, 1, 136
  062c6c4  lwz 3, 0(20)
  062c6c8  mr 4, 18
  062c6cc  bl 0x647ed0
  062c6d0  nop
  062c6d4  cmpwi 7, 3, 0
  062c6d8  bf 30, 0x62d67c
  062c6dc  cmplwi 7, 29, 2
  062c6e0  li 19, 1
  062c6e4  bt 29, 0x62c6ec
  062c6e8  li 19, 0
  062c6ec  lwz 11, 136(1)
  062c6f0  sub 17, 29, 19
  062c6f4  cmpwi 7, 11, 0
  062c6f8  bt 30, 0x62c870
  062c6fc  rlwinm 0, 31, 0, 25, 25
  062c700  li 8, 3
  062c704  cmpwi 7, 0, 0
  062c708  bt 30, 0x62d1ec
  062c70c  clrldi 10, 11, 32
  062c710  lfs 0, -32684(30)
  062c714  lfs 13, -31988(30)
  062c718  li 9, 0
  062c71c  li 0, 8
  062c720  lfs 29, -32612(30)
  062c724  lfs 31, -31980(30)
  062c728  lfs 30, -31972(30)
  062c72c  stfs 13, 0(10)
  062c730  fmr 13, 0
  062c734  stw 8, 12(10)
  062c738  li 8, 24
  062c73c  stfs 31, 76(10)
  062c740  stw 0, 4(10)
  062c744  stfs 30, 80(10)
  062c748  addi 0, 11, 232
  062c74c  stfs 29, 8(10)
  062c750  li 11, 0
  062c754  stfs 29, 16(10)
  062c758  mtctr 8
  062c75c  stw 9, 20(10)
  062c760  stw 9, 36(10)
  062c764  stw 9, 52(10)
  062c768  stw 9, 68(10)
  062c76c  stfs 29, 24(10)
  062c770  stfs 29, 40(10)
  062c774  stfs 29, 56(10)
  062c778  stfs 29, 72(10)
  062c77c  stfs 31, 28(10)
  062c780  stfs 31, 44(10)
  062c784  stfs 31, 60(10)
  062c788  stfs 30, 32(10)
  062c78c  stfs 30, 48(10)
  062c790  stfs 30, 64(10)
  062c794  stw 9, 84(10)
  062c798  stw 9, 88(10)
  062c79c  stw 9, 92(10)
  062c7a0  stfs 0, 96(10)
  062c7a4  stfs 0, 100(10)
  062c7a8  stfs 29, 104(10)
  062c7ac  stfs 0, 108(10)
  062c7b0  stfs 0, 112(10)
  062c7b4  lfs 28, -31964(30)
  062c7b8  stfs 0, 116(10)
  062c7bc  stfs 28, 144(10)
  062c7c0  stw 9, 228(10)
  062c7c4  stfs 28, 120(10)
  062c7c8  stfs 0, 124(10)
  062c7cc  stfs 29, 128(10)
  062c7d0  stfs 0, 132(10)
  062c7d4  stfs 0, 136(10)
  062c7d8  stfs 0, 140(10)
  062c7dc  add 9, 11, 0
  062c7e0  addi 11, 11, 4
  062c7e4  clrldi 9, 9, 32
  062c7e8  stfs 13, 0(9)
  062c7ec  bdnz 0x62c7dc
  062c7f0  li 0, 1
  062c7f4  lfs 0, -31956(30)
  062c7f8  li 9, 0
  062c7fc  lfs 24, -32412(30)
  062c800  lwz 3, 0(20)
  062c804  li 4, 0
  062c808  li 5, 0
  062c80c  stfs 0, 172(10)
  062c810  stw 9, 340(10)
  062c814  stfs 13, 208(10)
  062c818  stfs 24, 212(10)
  062c81c  stfs 29, 220(10)
  062c820  stw 0, 224(10)
  062c824  stw 0, 148(10)
  062c828  stw 0, 152(10)
  062c82c  stfs 13, 156(10)
  062c830  stfs 0, 160(10)
  062c834  stfs 13, 164(10)
  062c838  stfs 13, 168(10)
  062c83c  stfs 13, 176(10)
  062c840  stw 9, 180(10)
  062c844  stfs 13, 184(10)
  062c848  stfs 13, 188(10)
  062c84c  stw 9, 192(10)
  062c850  stw 0, 204(10)
  062c854  stw 17, 196(10)
  062c858  stw 19, 200(10)
  062c85c  stfs 29, 216(10)
  062c860  bl 0x647fa0
  062c864  nop
  062c868  cmpwi 7, 3, 0
  062c86c  bf 30, 0x62d708
  062c870  lwz 0, 0(28)
  062c874  rlwinm 0, 0, 0, 24, 24
  062c878  cmpwi 7, 0, 0
  062c87c  bf 30, 0x62d54c
  062c880  lwz 23, -32360(30)
  062c884  lwz 0, 0(23)
  062c888  cmpwi 7, 0, 0
  062c88c  bt 30, 0x62cb34
  062c890  cmplwi 7, 0, 16
  062c894  bt 29, 0x62d1fc
  062c898  addi 4, 1, 172
  062c89c  stw 0, 0(23)
  062c8a0  li 3, 3
  062c8a4  li 0, 0
  062c8a8  stw 0, 172(1)
  062c8ac  bl 0x6425f4
  062c8b0  nop
  062c8b4  lwz 3, 172(1)
  062c8b8  li 4, 1
  062c8bc  bl 0x643f38
  062c8c0  nop
  062c8c4  lis 0, 769
  062c8c8  lwz 4, 0(23)
  062c8cc  ori 0, 0, 54646
  062c8d0  lwz 9, -31912(30)
  062c8d4  li 11, 0
  062c8d8  lwz 10, -31908(30)
  062c8dc  stw 0, 144(1)
  062c8e0  std 11, 112(1)
  062c8e4  addi 3, 1, 144
  062c8e8  li 5, 0
  062c8ec  li 6, 0
  062c8f0  li 7, 0
  062c8f4  li 8, 0
  062c8f8  bl 0x641b58
  062c8fc  nop
  062c900  cmpwi 7, 3, 0
  062c904  bf 30, 0x62d73c
  062c908  lwz 3, 28(24)
  062c90c  li 4, 0
  062c910  li 5, 1
  062c914  bl 0x641a3c
  062c918  nop
  062c91c  cmpwi 7, 3, 0
  062c920  bf 30, 0x62d71c
  062c924  lwz 0, 0(23)
  062c928  cmpwi 7, 0, 0
  062c92c  bt 30, 0x62cb34
  062c930  lwz 26, -32656(30)
  062c934  li 25, 0
  062c938  lwz 21, -32652(30)
  062c93c  li 31, 0
  062c940  li 28, 0
  062c944  lfs 29, -32612(30)
  062c948  li 22, 1
  062c94c  lfs 31, -31980(30)
  062c950  mr 27, 26
  062c954  lfs 30, -31972(30)
  062c958  lfs 28, -31964(30)
  062c95c  lfs 24, -32412(30)
  062c960  lfs 26, -31880(30)
  062c964  lfs 25, -31872(30)
  062c968  lfs 27, -31864(30)
  062c96c  b 0x62cad0
  062c970  clrldi 29, 26, 32
  062c974  lwz 5, 0(20)
  062c978  li 4, 1
  062c97c  lwz 3, 0(29)
  062c980  bl 0x648b10
  062c984  nop
  062c988  cmpwi 7, 3, 0
  062c98c  bf 30, 0x62cb20
  062c990  lwz 5, 0(21)
  062c994  cmpwi 7, 5, 0
  062c998  bt 30, 0x62c9b8
  062c99c  clrldi 5, 5, 32
  062c9a0  lwz 3, 0(29)
  062c9a4  li 4, 3
  062c9a8  bl 0x648b10
  062c9ac  nop
  062c9b0  cmpwi 7, 3, 0
  062c9b4  bf 30, 0x62d23c
  062c9b8  lwz 3, 0(29)
  062c9bc  clrldi 4, 18, 32
  062c9c0  bl 0x647ed0
  062c9c4  nop
  062c9c8  cmpwi 7, 3, 0
  062c9cc  bf 30, 0x62d228
  062c9d0  lwz 9, 136(1)
  062c9d4  li 0, 255
  062c9d8  li 4, 0
  062c9dc  li 5, 0
  062c9e0  stfs 29, 0(9)
  062c9e4  stw 31, 4(9)
  062c9e8  stw 31, 20(9)
  062c9ec  stw 31, 36(9)
  062c9f0  stw 31, 52(9)
  062c9f4  stfs 29, 8(9)
  062c9f8  stfs 29, 24(9)
  062c9fc  stfs 29, 40(9)
  062ca00  stfs 29, 56(9)
  062ca04  stfs 31, 12(9)
  062ca08  stfs 31, 28(9)
  062ca0c  stfs 31, 44(9)
  062ca10  stfs 31, 60(9)
  062ca14  stfs 30, 16(9)
  062ca18  stfs 30, 32(9)
  062ca1c  stfs 30, 48(9)
  062ca20  stfs 30, 64(9)
  062ca24  stw 31, 68(9)
  062ca28  stw 31, 72(9)
  062ca2c  stw 31, 76(9)
  062ca30  stw 28, 80(9)
  062ca34  stfs 26, 84(9)
  062ca38  stfs 25, 88(9)
  062ca3c  stw 28, 92(9)
  062ca40  stfs 27, 96(9)
  062ca44  stw 28, 100(9)
  062ca48  stfs 28, 104(9)
  062ca4c  stfs 26, 108(9)
  062ca50  stfs 25, 112(9)
  062ca54  stw 28, 116(9)
  062ca58  stfs 27, 120(9)
  062ca5c  stw 28, 124(9)
  062ca60  stfs 28, 128(9)
  062ca64  lwz 3, 0(29)
  062ca68  stw 0, 184(9)
  062ca6c  stw 31, 204(9)
  062ca70  stw 31, 132(9)
  062ca74  stw 28, 136(9)
  062ca78  stw 28, 140(9)
  062ca7c  stw 31, 144(9)
  062ca80  stw 22, 156(9)
  062ca84  stw 17, 148(9)
  062ca88  stw 19, 152(9)
  062ca8c  stw 28, 160(9)
  062ca90  stfs 24, 164(9)
  062ca94  stfs 29, 168(9)
  062ca98  stfs 29, 172(9)
  062ca9c  stw 22, 180(9)
  062caa0  stw 28, 188(9)
  062caa4  stw 31, 176(9)
  062caa8  bl 0x647fa0
  062caac  nop
  062cab0  cmpwi 7, 3, 0
  062cab4  bf 30, 0x62d214
  062cab8  addi 25, 25, 1
  062cabc  lwz 0, 0(23)
  062cac0  addi 27, 27, 4
  062cac4  cmplw 7, 0, 25
  062cac8  addi 26, 26, 4
  062cacc  bf 29, 0x62cb34
  062cad0  lwz 3, 28(24)
  062cad4  li 4, 100
  062cad8  clrldi 5, 27, 32
  062cadc  li 6, 0
  062cae0  bl 0x64547c
  062cae4  nop
  062cae8  cmpwi 7, 3, 0
  062caec  bt 30, 0x62c970
  062caf0  clrldi 29, 26, 32
  062caf4  extsw 4, 3
  062caf8  lwz 3, -31896(30)
  062cafc  bl 0x5cd098
  062cb00  nop
  062cb04  li 4, 1
  062cb08  lwz 5, 0(20)
  062cb0c  lwz 3, 0(29)
  062cb10  bl 0x648b10
  062cb14  nop
  062cb18  cmpwi 7, 3, 0
  062cb1c  bt 30, 0x62c990
  062cb20  extsw 4, 3
  062cb24  lwz 3, -31892(30)
  062cb28  bl 0x5cd098
  062cb2c  nop
  062cb30  b 0x62c990
  062cb34  lis 0, 513
  062cb38  lwz 9, -31852(30)
  062cb3c  li 11, 0
  062cb40  lwz 10, -31848(30)
  062cb44  ori 0, 0, 39824
  062cb48  std 11, 112(1)
  062cb4c  stw 0, 148(1)
  062cb50  addi 3, 1, 148
  062cb54  li 4, 8
  062cb58  li 5, 0
  062cb5c  li 6, 0
  062cb60  li 7, 0
  062cb64  li 8, 0
  062cb68  bl 0x641b58
  062cb6c  nop
  062cb70  cmpwi 7, 3, 0
  062cb74  bf 30, 0x62d250
  062cb78  lwz 3, 24(24)
  062cb7c  li 4, 0
  062cb80  li 5, 0
  062cb84  bl 0x641a3c
  062cb88  nop
  062cb8c  cmpwi 7, 3, 0
  062cb90  bf 30, 0x62d27c
  062cb94  li 0, 0
  062cb98  addi 4, 1, 172
  062cb9c  li 3, 2
  062cba0  stw 0, 172(1)
  062cba4  bl 0x6425f4
  062cba8  nop
  062cbac  lwz 3, 172(1)
  062cbb0  li 4, 1
  062cbb4  li 31, 0
  062cbb8  bl 0x643f38
  062cbbc  nop
  062cbc0  lwz 29, -32576(30)
  062cbc4  lwz 28, -32480(30)
  062cbc8  b 0x62cbd8
  062cbcc  addi 31, 31, 1
  062cbd0  cmpdi 7, 31, 8
  062cbd4  bt 30, 0x62cc1c
  062cbd8  slwi 5, 31, 2
  062cbdc  lwz 3, 24(24)
  062cbe0  li 4, 100
  062cbe4  add 5, 5, 29
  062cbe8  li 6, 0
  062cbec  clrldi 5, 5, 32
  062cbf0  bl 0x64547c
  062cbf4  nop
  062cbf8  cmpwi 7, 3, 0
  062cbfc  bt 30, 0x62cbcc
  062cc00  extsw 4, 3
  062cc04  lwz 3, -31836(30)
  062cc08  addi 31, 31, 1
  062cc0c  bl 0x5cd098
  062cc10  nop
  062cc14  cmpdi 7, 31, 8
  062cc18  bf 30, 0x62cbd8
  062cc1c  lwz 26, -31832(30)
  062cc20  lwz 4, 0(26)
  062cc24  cmpwi 7, 4, 0
  062cc28  bf 30, 0x62d2e0
  062cc2c  li 9, 0
  062cc30  li 22, 0
  062cc34  lwz 25, -31788(30)
  062cc38  lwz 4, 0(25)
  062cc3c  cmpwi 7, 4, 0
  062cc40  bt 30, 0x62cd84
  062cc44  clrlwi 0, 9, 24
  062cc48  lis 9, 1
  062cc4c  cmpwi 7, 0, 0
  062cc50  ori 9, 9, 20752
  062cc54  li 6, 0
  062cc58  stw 9, 152(1)
  062cc5c  bt 30, 0x62d20c
  062cc60  li 0, 0
  062cc64  lwz 9, -31784(30)
  062cc68  lwz 10, -31780(30)
  062cc6c  clrldi 4, 4, 32
  062cc70  std 0, 112(1)
  062cc74  clrldi 6, 6, 32
  062cc78  addi 3, 1, 152
  062cc7c  li 5, 0
  062cc80  li 7, 0
  062cc84  li 8, 0
  062cc88  bl 0x641b58
  062cc8c  nop
  062cc90  cmpwi 7, 3, 0
  062cc94  bf 30, 0x62d80c
  062cc98  lwz 3, 12(24)
  062cc9c  li 4, 0
  062cca0  li 5, 0
  062cca4  bl 0x641a3c
  062cca8  nop
  062ccac  cmpwi 7, 3, 0
  062ccb0  bf 30, 0x62d838
  062ccb4  lwz 0, 0(25)
  062ccb8  li 9, 1
  062ccbc  cmpwi 7, 0, 0
  062ccc0  bt 30, 0x62cd84
  062ccc4  lwz 27, -32488(30)
  062ccc8  li 28, 0
  062cccc  lwz 29, -32704(30)
  062ccd0  li 23, 3
  062ccd4  mr 26, 27
  062ccd8  mulli 31, 22, 116
  062ccdc  b 0x62cd3c
  062cce0  lwz 9, 0(26)
  062cce4  add 9, 31, 9
  062cce8  clrldi 9, 9, 32
  062ccec  stb 23, 104(9)
  062ccf0  lwz 11, 40(29)
  062ccf4  lwz 0, 44(29)
  062ccf8  lwz 10, 0(26)
  062ccfc  cmpw 7, 0, 11
  062cd00  bt 30, 0x62cd24
  062cd04  slwi 9, 11, 2
  062cd08  lwz 0, 36(29)
  062cd0c  add 10, 10, 31
  062cd10  add 9, 9, 0
  062cd14  addi 11, 11, 1
  062cd18  clrldi 9, 9, 32
  062cd1c  stw 11, 40(29)
  062cd20  stw 10, 0(9)
  062cd24  addi 0, 28, 1
  062cd28  lwz 9, 0(25)
  062cd2c  addi 28, 28, 1
  062cd30  cmplw 7, 9, 0
  062cd34  addi 31, 31, 116
  062cd38  bf 29, 0x62cd7c
  062cd3c  lwz 5, 0(27)
  062cd40  li 4, 100
  062cd44  lwz 3, 12(24)
  062cd48  li 6, 0
  062cd4c  add 5, 31, 5
  062cd50  addi 5, 5, 108
  062cd54  clrldi 5, 5, 32
  062cd58  bl 0x64547c
  062cd5c  nop
  062cd60  cmpwi 7, 3, 0
  062cd64  bt 30, 0x62cce0
  062cd68  extsw 4, 3
  062cd6c  lwz 3, -31768(30)
  062cd70  bl 0x5cd098
  062cd74  nop
  062cd78  b 0x62cce0
  062cd7c  add 22, 22, 28
  062cd80  li 9, 1
  062cd84  lwz 25, -31764(30)
  062cd88  lwz 4, 0(25)
  062cd8c  cmpwi 7, 4, 0
  062cd90  bt 30, 0x62ced4
  062cd94  clrlwi 0, 9, 24
  062cd98  lis 9, 1
  062cd9c  cmpwi 7, 0, 0
  062cda0  ori 9, 9, 64697
  062cda4  li 6, 0
  062cda8  stw 9, 156(1)
  062cdac  bt 30, 0x62d204
  062cdb0  li 0, 0
  062cdb4  lwz 9, -31760(30)
  062cdb8  lwz 10, -31756(30)
  062cdbc  clrldi 4, 4, 32
  062cdc0  std 0, 112(1)
  062cdc4  clrldi 6, 6, 32
  062cdc8  addi 3, 1, 156
  062cdcc  li 5, 0
  062cdd0  li 7, 0
  062cdd4  li 8, 0
  062cdd8  bl 0x641b58
  062cddc  nop
  062cde0  cmpwi 7, 3, 0
  062cde4  bf 30, 0x62d76c
  062cde8  lwz 3, 8(24)
  062cdec  li 4, 0
  062cdf0  li 5, 0
  062cdf4  bl 0x641a3c
  062cdf8  nop
  062cdfc  cmpwi 7, 3, 0
  062ce00  bf 30, 0x62d798
  062ce04  lwz 0, 0(25)
  062ce08  li 9, 1
  062ce0c  cmpwi 7, 0, 0
  062ce10  bt 30, 0x62ced4
  062ce14  lwz 27, -32488(30)
  062ce18  li 28, 0
  062ce1c  lwz 29, -32704(30)
  062ce20  li 23, 2
  062ce24  mr 26, 27
  062ce28  mulli 31, 22, 116
  062ce2c  b 0x62ce8c
  062ce30  lwz 9, 0(26)
  062ce34  add 9, 31, 9
  062ce38  clrldi 9, 9, 32
  062ce3c  stb 23, 104(9)
  062ce40  lwz 11, 28(29)
  062ce44  lwz 0, 32(29)
  062ce48  lwz 10, 0(26)
  062ce4c  cmpw 7, 0, 11
  062ce50  bt 30, 0x62ce74
  062ce54  slwi 9, 11, 2
  062ce58  lwz 0, 24(29)
  062ce5c  add 10, 10, 31
  062ce60  add 9, 9, 0
  062ce64  addi 11, 11, 1
  062ce68  clrldi 9, 9, 32
  062ce6c  stw 11, 28(29)
  062ce70  stw 10, 0(9)
  062ce74  addi 0, 28, 1
  062ce78  lwz 9, 0(25)
  062ce7c  addi 28, 28, 1
  062ce80  cmplw 7, 9, 0
  062ce84  addi 31, 31, 116
  062ce88  bf 29, 0x62cecc
  062ce8c  lwz 5, 0(27)
  062ce90  li 4, 100
  062ce94  lwz 3, 8(24)
  062ce98  li 6, 0
  062ce9c  add 5, 31, 5
  062cea0  addi 5, 5, 108
  062cea4  clrldi 5, 5, 32
  062cea8  bl 0x64547c
  062ceac  nop
  062ceb0  cmpwi 7, 3, 0
  062ceb4  bt 30, 0x62ce30
  062ceb8  extsw 4, 3
  062cebc  lwz 3, -31744(30)
  062cec0  bl 0x5cd098
  062cec4  nop
  062cec8  b 0x62ce30
  062cecc  add 22, 22, 28
  062ced0  li 9, 1
  062ced4  lwz 25, -31740(30)
  062ced8  lwz 4, 0(25)
  062cedc  cmpwi 7, 4, 0
  062cee0  bt 30, 0x62d024
  062cee4  clrlwi 0, 9, 24
  062cee8  lis 9, 1
  062ceec  cmpwi 7, 0, 0
  062cef0  ori 9, 9, 59221
  062cef4  li 6, 0
  062cef8  stw 9, 160(1)
  062cefc  bt 30, 0x62d1f4
  062cf00  li 0, 0
  062cf04  lwz 9, -31736(30)
  062cf08  lwz 10, -31732(30)
  062cf0c  clrldi 4, 4, 32
  062cf10  std 0, 112(1)
  062cf14  clrldi 6, 6, 32
  062cf18  addi 3, 1, 160
  062cf1c  li 5, 0
  062cf20  li 7, 0
  062cf24  li 8, 0
  062cf28  bl 0x641b58
  062cf2c  nop
  062cf30  cmpwi 7, 3, 0
  062cf34  bf 30, 0x62d7bc
  062cf38  lwz 3, 4(24)
  062cf3c  li 4, 0
  062cf40  li 5, 0
  062cf44  bl 0x641a3c
  062cf48  nop
  062cf4c  cmpwi 7, 3, 0
  062cf50  bf 30, 0x62d7e8
  062cf54  lwz 0, 0(25)
  062cf58  li 9, 1
  062cf5c  cmpwi 7, 0, 0
  062cf60  bt 30, 0x62d024
  062cf64  lwz 27, -32488(30)
  062cf68  li 28, 0
  062cf6c  lwz 29, -32704(30)
  062cf70  li 23, 1
  062cf74  mr 26, 27
  062cf78  mulli 31, 22, 116
  062cf7c  b 0x62cfdc
  062cf80  lwz 9, 0(26)
  062cf84  add 9, 31, 9
  062cf88  clrldi 9, 9, 32
  062cf8c  stb 23, 104(9)
  062cf90  lwz 11, 16(29)
  062cf94  lwz 0, 20(29)
  062cf98  lwz 10, 0(26)
  062cf9c  cmpw 7, 0, 11
  062cfa0  bt 30, 0x62cfc4
  062cfa4  slwi 9, 11, 2
  062cfa8  lwz 0, 12(29)
  062cfac  add 10, 10, 31
  062cfb0  add 9, 9, 0
  062cfb4  addi 11, 11, 1
  062cfb8  clrldi 9, 9, 32
  062cfbc  stw 11, 16(29)
  062cfc0  stw 10, 0(9)
  062cfc4  addi 0, 28, 1
  062cfc8  lwz 9, 0(25)
  062cfcc  addi 28, 28, 1
  062cfd0  cmplw 7, 9, 0
  062cfd4  addi 31, 31, 116
  062cfd8  bf 29, 0x62d01c
  062cfdc  lwz 5, 0(27)
  062cfe0  li 4, 100
  062cfe4  lwz 3, 4(24)
  062cfe8  li 6, 0
  062cfec  add 5, 31, 5
  062cff0  addi 5, 5, 108
  062cff4  clrldi 5, 5, 32
  062cff8  bl 0x64547c
  062cffc  nop
  062d000  cmpwi 7, 3, 0
  062d004  bt 30, 0x62cf80
  062d008  extsw 4, 3
  062d00c  lwz 3, -31720(30)
  062d010  bl 0x5cd098
  062d014  nop
  062d018  b 0x62cf80
  062d01c  add 22, 22, 28
  062d020  li 9, 1
  062d024  lwz 26, -31716(30)
  062d028  lwz 4, 0(26)
  062d02c  cmpwi 7, 4, 0
  062d030  bt 30, 0x62d160
  062d034  clrlwi 0, 9, 24
  062d038  lis 9, 1
  062d03c  cmpwi 7, 0, 0
  062d040  ori 9, 9, 59221
  062d044  li 6, 0
  062d048  stw 9, 164(1)
  062d04c  bt 30, 0x62d1e4
  062d050  li 0, 0
  062d054  lwz 10, -31712(30)
  062d058  clrldi 4, 4, 32
  062d05c  std 0, 112(1)
  062d060  clrldi 6, 6, 32
  062d064  addi 3, 1, 164
  062d068  li 5, 0
  062d06c  li 7, 0
  062d070  li 8, 0
  062d074  mr 9, 24
  062d078  bl 0x641b58
  062d07c  nop
  062d080  cmpwi 7, 3, 0
  062d084  bf 30, 0x62d6f4
  062d088  lwz 3, 0(24)
  062d08c  li 4, 0
  062d090  li 5, 0
  062d094  bl 0x641a3c
  062d098  nop
  062d09c  cmpwi 7, 3, 0
  062d0a0  bf 30, 0x62d6e0
  062d0a4  lwz 0, 0(26)
  062d0a8  cmpwi 7, 0, 0
  062d0ac  bt 30, 0x62d160
  062d0b0  li 27, 0
  062d0b4  lwz 29, -32704(30)
  062d0b8  lwz 28, -32488(30)
  062d0bc  li 25, 0
  062d0c0  mulli 31, 22, 116
  062d0c4  b 0x62d120
  062d0c8  lwz 9, 0(28)
  062d0cc  add 9, 31, 9
  062d0d0  clrldi 9, 9, 32
  062d0d4  stb 25, 104(9)
  062d0d8  lwz 11, 4(29)
  062d0dc  lwz 0, 8(29)
  062d0e0  lwz 10, 0(28)
  062d0e4  cmpw 7, 0, 11
  062d0e8  bt 30, 0x62d10c
  062d0ec  slwi 9, 11, 2
  062d0f0  lwz 0, 0(29)
  062d0f4  add 10, 10, 31
  062d0f8  add 9, 9, 0
  062d0fc  addi 11, 11, 1
  062d100  clrldi 9, 9, 32
  062d104  stw 11, 4(29)
  062d108  stw 10, 0(9)
  062d10c  addi 27, 27, 1
  062d110  lwz 0, 0(26)
  062d114  addi 31, 31, 116
  062d118  cmplw 7, 0, 27
  062d11c  bf 29, 0x62d160
  062d120  lwz 5, 0(28)
  062d124  li 4, 100
  062d128  lwz 3, 0(24)
  062d12c  li 6, 0
  062d130  add 5, 31, 5
  062d134  addi 5, 5, 108
  062d138  clrldi 5, 5, 32
  062d13c  bl 0x64547c
  062d140  nop
  062d144  cmpwi 7, 3, 0
  062d148  bt 30, 0x62d0c8
  062d14c  extsw 4, 3
  062d150  lwz 3, -31700(30)
  062d154  bl 0x5cd098
  062d158  nop
  062d15c  b 0x62d0c8
  062d160  li 3, 0
  062d164  bl 0x643520
  062d168  nop
  062d16c  ld 0, 384(1)
  062d170  ld 17, 184(1)
  062d174  srwi 3, 3, 31
  062d178  ld 18, 192(1)
  062d17c  ld 19, 200(1)
  062d180  mtlr 0
  062d184  xori 3, 3, 1
  062d188  ld 20, 208(1)
  062d18c  ld 21, 216(1)
  062d190  extsw 3, 3
  062d194  ld 22, 224(1)
  062d198  ld 23, 232(1)
  062d19c  ld 24, 240(1)
  062d1a0  ld 25, 248(1)
  062d1a4  ld 26, 256(1)
  062d1a8  ld 27, 264(1)
  062d1ac  ld 28, 272(1)
  062d1b0  ld 29, 280(1)
  062d1b4  ld 30, 288(1)
  062d1b8  ld 31, 296(1)
  062d1bc  lfd 24, 304(1)
  062d1c0  lfd 25, 312(1)
  062d1c4  lfd 26, 320(1)
  062d1c8  lfd 27, 328(1)
  062d1cc  lfd 28, 336(1)
  062d1d0  lfd 29, 344(1)
  062d1d4  lfd 30, 352(1)
  062d1d8  lfd 31, 360(1)
  062d1dc  addi 1, 1, 368
  062d1e0  blr
  062d1e4  lwz 6, -31812(30)
  062d1e8  b 0x62d050
  062d1ec  rldicl 8, 31, 59, 63
  062d1f0  b 0x62c70c
  062d1f4  lwz 6, -31812(30)
  062d1f8  b 0x62cf00
  062d1fc  li 0, 16
  062d200  b 0x62c898
  062d204  lwz 6, -31812(30)
  062d208  b 0x62cdb0
  062d20c  lwz 6, -31812(30)
  062d210  b 0x62cc60
  062d214  extsw 4, 3
  062d218  lwz 3, -31856(30)
  062d21c  bl 0x5cd098
  062d220  nop
  062d224  b 0x62cab8
  062d228  extsw 4, 3
  062d22c  lwz 3, -31884(30)
  062d230  bl 0x5cd098
  062d234  nop
  062d238  b 0x62c9d0
  062d23c  extsw 4, 3
  062d240  lwz 3, -31888(30)
  062d244  bl 0x5cd098
  062d248  nop
  062d24c  b 0x62c9b8
  062d250  extsw 4, 3
  062d254  lwz 3, -31844(30)
  062d258  bl 0x5cd098
  062d25c  nop
  062d260  lwz 3, 24(24)
  062d264  li 4, 0
  062d268  li 5, 0
  062d26c  bl 0x641a3c
  062d270  nop
  062d274  cmpwi 7, 3, 0
  062d278  bt 30, 0x62cb94
  062d27c  extsw 4, 3
  062d280  lwz 3, -31840(30)
  062d284  bl 0x5cd098
  062d288  nop
  062d28c  b 0x62cb94
  062d290  extsw 4, 3
  062d294  lwz 3, -32020(30)
  062d298  bl 0x5cd098
  062d29c  nop
  062d2a0  b 0x62c614
  062d2a4  extsw 4, 3
  062d2a8  lwz 3, -32032(30)
  062d2ac  bl 0x5cd098
  062d2b0  nop
  062d2b4  b 0x62c5f8
  062d2b8  extsw 4, 3
  062d2bc  lwz 3, -32044(30)
  062d2c0  bl 0x5cd098
  062d2c4  nop
  062d2c8  b 0x62c5dc
  062d2cc  extsw 4, 3
  062d2d0  lwz 3, -32056(30)
  062d2d4  bl 0x5cd098
  062d2d8  nop
  062d2dc  b 0x62c5c0
  062d2e0  lis 0, 257
  062d2e4  lwz 10, -31828(30)
  062d2e8  li 9, 0
  062d2ec  ori 0, 0, 50433
  062d2f0  std 9, 112(1)
  062d2f4  stw 0, 168(1)
  062d2f8  clrldi 4, 4, 32
  062d2fc  addi 9, 28, 20
  062d300  addi 3, 1, 168
  062d304  li 5, 0
  062d308  li 6, 0
  062d30c  li 7, 0
  062d310  li 8, 0
  062d314  bl 0x641b58
  062d318  nop
  062d31c  cmpwi 7, 3, 0
  062d320  bf 30, 0x62d8d4
  062d324  lwz 3, 20(24)
  062d328  li 4, 0
  062d32c  li 5, 0
  062d330  bl 0x641a3c
  062d334  nop
  062d338  cmpwi 7, 3, 0
  062d33c  bf 30, 0x62d8c0
  062d340  lwz 0, 0(26)
  062d344  cmpwi 7, 0, 0
  062d348  bt 30, 0x62cc2c
  062d34c  li 29, 0
  062d350  lwz 27, -32488(30)
  062d354  li 31, 0
  062d358  lwz 28, -32480(30)
  062d35c  b 0x62d374
  062d360  addi 29, 29, 1
  062d364  lwz 4, 0(26)
  062d368  addi 31, 31, 116
  062d36c  cmplw 7, 4, 29
  062d370  bf 29, 0x62d3c4
  062d374  lwz 5, 0(27)
  062d378  li 4, 100
  062d37c  lwz 3, 20(24)
  062d380  li 6, 0
  062d384  add 5, 31, 5
  062d388  addi 5, 5, 112
  062d38c  clrldi 5, 5, 32
  062d390  bl 0x64547c
  062d394  nop
  062d398  cmpwi 7, 3, 0
  062d39c  bt 30, 0x62d360
  062d3a0  extsw 4, 3
  062d3a4  lwz 3, -31816(30)
  062d3a8  addi 29, 29, 1
  062d3ac  bl 0x5cd098
  062d3b0  nop
  062d3b4  lwz 4, 0(26)
  062d3b8  cmplw 7, 4, 29
  062d3bc  addi 31, 31, 116
  062d3c0  bt 29, 0x62d374
  062d3c4  cmpwi 7, 4, 0
  062d3c8  bt 30, 0x62cc2c
  062d3cc  lis 0, 1
  062d3d0  lwz 6, -31812(30)
  062d3d4  li 9, 0
  062d3d8  lwz 10, -31808(30)
  062d3dc  ori 0, 0, 19063
  062d3e0  std 9, 112(1)
  062d3e4  stw 0, 128(1)
  062d3e8  clrldi 4, 4, 32
  062d3ec  addi 9, 28, 16
  062d3f0  addi 3, 1, 128
  062d3f4  li 5, 0
  062d3f8  li 7, 0
  062d3fc  li 8, 0
  062d400  bl 0x641b58
  062d404  nop
  062d408  cmpwi 7, 3, 0
  062d40c  bf 30, 0x62d8f0
  062d410  lwz 3, 16(24)
  062d414  li 4, 0
  062d418  li 5, 0
  062d41c  bl 0x641a3c
  062d420  nop
  062d424  cmpwi 7, 3, 0
  062d428  bf 30, 0x62d904
  062d42c  lwz 0, 0(26)
  062d430  li 9, 1
  062d434  li 22, 0
  062d438  cmpwi 7, 0, 0
  062d43c  bt 30, 0x62cc34
  062d440  li 31, 0
  062d444  lwz 29, -32704(30)
  062d448  lwz 28, -32488(30)
  062d44c  li 25, 4
  062d450  b 0x62d4d4
  062d454  lwz 9, 0(28)
  062d458  li 4, 1
  062d45c  add 9, 31, 9
  062d460  clrldi 9, 9, 32
  062d464  lwz 5, 112(9)
  062d468  lwz 3, 108(9)
  062d46c  bl 0x648b10
  062d470  nop
  062d474  cmpwi 7, 3, 0
  062d478  bf 30, 0x62d538
  062d47c  lwz 9, 0(28)
  062d480  add 9, 31, 9
  062d484  clrldi 9, 9, 32
  062d488  stb 25, 104(9)
  062d48c  lwz 11, 52(29)
  062d490  lwz 0, 56(29)
  062d494  lwz 10, 0(28)
  062d498  cmpw 7, 0, 11
  062d49c  bt 30, 0x62d4c0
  062d4a0  slwi 9, 11, 2
  062d4a4  lwz 0, 48(29)
  062d4a8  add 10, 31, 10
  062d4ac  add 9, 9, 0
  062d4b0  addi 11, 11, 1
  062d4b4  clrldi 9, 9, 32
  062d4b8  stw 11, 52(29)
  062d4bc  stw 10, 0(9)
  062d4c0  addi 22, 22, 1
  062d4c4  lwz 0, 0(26)
  062d4c8  addi 31, 31, 116
  062d4cc  cmplw 7, 0, 22
  062d4d0  bf 29, 0x62d8e8
  062d4d4  lwz 5, 0(27)
  062d4d8  li 4, 100
  062d4dc  lwz 3, 16(24)
  062d4e0  li 6, 0
  062d4e4  add 5, 31, 5
  062d4e8  addi 5, 5, 108
  062d4ec  clrldi 5, 5, 32
  062d4f0  bl 0x64547c
  062d4f4  nop
  062d4f8  cmpwi 7, 3, 0
  062d4fc  bt 30, 0x62d454
  062d500  extsw 4, 3
  062d504  lwz 3, -31796(30)
  062d508  bl 0x5cd098
  062d50c  nop
  062d510  lwz 9, 0(28)
  062d514  add 9, 31, 9
  062d518  li 4, 1
  062d51c  clrldi 9, 9, 32
  062d520  lwz 5, 112(9)
  062d524  lwz 3, 108(9)
  062d528  bl 0x648b10
  062d52c  nop
  062d530  cmpwi 7, 3, 0
  062d534  bt 30, 0x62d47c
  062d538  extsw 4, 3
  062d53c  lwz 3, -31792(30)
  062d540  bl 0x5cd098
  062d544  nop
  062d548  b 0x62d47c
  062d54c  lis 0, 769
  062d550  lwz 9, -31944(30)
  062d554  li 11, 0
  062d558  lwz 10, -31940(30)
  062d55c  ori 0, 0, 53423
  062d560  std 11, 112(1)
  062d564  stw 0, 140(1)
  062d568  addi 3, 1, 140
  062d56c  li 4, 1
  062d570  li 5, 0
  062d574  li 6, 0
  062d578  li 7, 0
  062d57c  li 8, 0
  062d580  bl 0x641b58
  062d584  nop
  062d588  cmpwi 7, 3, 0
  062d58c  bf 30, 0x62d8ac
  062d590  lwz 3, 32(24)
  062d594  li 4, 0
  062d598  li 5, 1
  062d59c  bl 0x641a3c
  062d5a0  nop
  062d5a4  cmpwi 7, 3, 0
  062d5a8  bf 30, 0x62d898
  062d5ac  lwz 21, -32652(30)
  062d5b0  li 4, 100
  062d5b4  lwz 3, 32(24)
  062d5b8  li 6, 0
  062d5bc  mr 5, 21
  062d5c0  bl 0x64547c
  062d5c4  nop
  062d5c8  cmpwi 7, 3, 0
  062d5cc  bf 30, 0x62d884
  062d5d0  lwz 3, 0(21)
  062d5d4  li 4, 1
  062d5d8  li 5, 2
  062d5dc  bl 0x648b10
  062d5e0  nop
  062d5e4  cmpwi 7, 3, 0
  062d5e8  bf 30, 0x62d870
  062d5ec  lwz 3, 0(21)
  062d5f0  mr 4, 18
  062d5f4  bl 0x647ed0
  062d5f8  nop
  062d5fc  cmpwi 7, 3, 0
  062d600  bf 30, 0x62d85c
  062d604  lwz 9, 136(1)
  062d608  cmpwi 7, 9, 0
  062d60c  bt 30, 0x62c880
  062d610  clrldi 9, 9, 32
  062d614  lfs 29, -32612(30)
  062d618  li 11, 1
  062d61c  lfs 0, -31956(30)
  062d620  li 10, 0
  062d624  lwz 3, 0(21)
  062d628  li 0, 0
  062d62c  li 4, 0
  062d630  li 5, 0
  062d634  stfs 0, 12(9)
  062d638  stw 0, 44(9)
  062d63c  stw 11, 4(9)
  062d640  stw 10, 16(9)
  062d644  stfs 29, 24(9)
  062d648  stfs 29, 20(9)
  062d64c  stw 11, 0(9)
  062d650  stw 10, 8(9)
  062d654  stw 0, 28(9)
  062d658  bl 0x647fa0
  062d65c  nop
  062d660  cmpwi 7, 3, 0
  062d664  bt 30, 0x62c880
  062d668  extsw 4, 3
  062d66c  lwz 3, -31916(30)
  062d670  bl 0x5cd098
  062d674  nop
  062d678  b 0x62c880
  062d67c  extsw 4, 3
  062d680  lwz 3, -31992(30)
  062d684  bl 0x5cd098
  062d688  nop
  062d68c  b 0x62c6dc
  062d690  extsw 4, 3
  062d694  lwz 3, -31996(30)
  062d698  bl 0x5cd098
  062d69c  nop
  062d6a0  b 0x62c6c0
  062d6a4  extsw 4, 3
  062d6a8  lwz 3, -32000(30)
  062d6ac  bl 0x5cd098
  062d6b0  nop
  062d6b4  b 0x62c6a4
  062d6b8  extsw 4, 3
  062d6bc  lwz 3, -32004(30)
  062d6c0  bl 0x5cd098
  062d6c4  nop
  062d6c8  b 0x62c680
  062d6cc  extsw 4, 3
  062d6d0  lwz 3, -32008(30)
  062d6d4  bl 0x5cd098
  062d6d8  nop
  062d6dc  b 0x62c660
  062d6e0  extsw 4, 3
  062d6e4  lwz 3, -31704(30)
  062d6e8  bl 0x5cd098
  062d6ec  nop
  062d6f0  b 0x62d0a4
  062d6f4  extsw 4, 3
  062d6f8  lwz 3, -31708(30)
  062d6fc  bl 0x5cd098
  062d700  nop
  062d704  b 0x62d088
  062d708  extsw 4, 3
  062d70c  lwz 3, -31948(30)
  062d710  bl 0x5cd098
  062d714  nop
  062d718  b 0x62c870
  062d71c  extsw 4, 3
  062d720  lwz 3, -31900(30)
  062d724  bl 0x5cd098
  062d728  nop
  062d72c  lwz 0, 0(23)
  062d730  cmpwi 7, 0, 0
  062d734  bf 30, 0x62c930
  062d738  b 0x62cb34
  062d73c  extsw 4, 3
  062d740  lwz 3, -31904(30)
  062d744  bl 0x5cd098
  062d748  nop
  062d74c  lwz 3, 28(24)
  062d750  li 4, 0
  062d754  li 5, 1
  062d758  bl 0x641a3c
  062d75c  nop
  062d760  cmpwi 7, 3, 0
  062d764  bt 30, 0x62c924
  062d768  b 0x62d71c
  062d76c  extsw 4, 3
  062d770  lwz 3, -31752(30)
  062d774  bl 0x5cd098
  062d778  nop
  062d77c  lwz 3, 8(24)
  062d780  li 4, 0
  062d784  li 5, 0
  062d788  bl 0x641a3c
  062d78c  nop
  062d790  cmpwi 7, 3, 0
  062d794  bt 30, 0x62ce04
  062d798  extsw 4, 3
  062d79c  lwz 3, -31748(30)
  062d7a0  bl 0x5cd098
  062d7a4  nop
  062d7a8  lwz 0, 0(25)
  062d7ac  cmpwi 7, 0, 0
  062d7b0  li 9, 1
  062d7b4  bf 30, 0x62ce14
  062d7b8  b 0x62ced4
  062d7bc  extsw 4, 3
  062d7c0  lwz 3, -31728(30)
  062d7c4  bl 0x5cd098
  062d7c8  nop
  062d7cc  lwz 3, 4(24)
  062d7d0  li 4, 0
  062d7d4  li 5, 0
  062d7d8  bl 0x641a3c
  062d7dc  nop
  062d7e0  cmpwi 7, 3, 0
  062d7e4  bt 30, 0x62cf54
  062d7e8  extsw 4, 3
  062d7ec  lwz 3, -31724(30)
  062d7f0  bl 0x5cd098
  062d7f4  nop
  062d7f8  lwz 0, 0(25)
  062d7fc  cmpwi 7, 0, 0
  062d800  li 9, 1
  062d804  bf 30, 0x62cf64
  062d808  b 0x62d024
  062d80c  extsw 4, 3
  062d810  lwz 3, -31776(30)
  062d814  bl 0x5cd098
  062d818  nop
  062d81c  lwz 3, 12(24)
  062d820  li 4, 0
  062d824  li 5, 0
  062d828  bl 0x641a3c
  062d82c  nop
  062d830  cmpwi 7, 3, 0
  062d834  bt 30, 0x62ccb4
  062d838  extsw 4, 3
  062d83c  lwz 3, -31772(30)
  062d840  bl 0x5cd098
  062d844  nop
  062d848  lwz 0, 0(25)
  062d84c  cmpwi 7, 0, 0
  062d850  li 9, 1
  062d854  bf 30, 0x62ccc4
  062d858  b 0x62cd84
  062d85c  extsw 4, 3
  062d860  lwz 3, -31920(30)
  062d864  bl 0x5cd098
  062d868  nop
  062d86c  b 0x62d604
  062d870  extsw 4, 3
  062d874  lwz 3, -31924(30)
  062d878  bl 0x5cd098
  062d87c  nop
  062d880  b 0x62d5ec
  062d884  extsw 4, 3
  062d888  lwz 3, -31928(30)
  062d88c  bl 0x5cd098
  062d890  nop
  062d894  b 0x62d5d0
  062d898  extsw 4, 3
  062d89c  lwz 3, -31932(30)
  062d8a0  bl 0x5cd098
  062d8a4  nop
  062d8a8  b 0x62d5ac
  062d8ac  extsw 4, 3
  062d8b0  lwz 3, -31936(30)
  062d8b4  bl 0x5cd098
  062d8b8  nop
  062d8bc  b 0x62d590
  062d8c0  extsw 4, 3
  062d8c4  lwz 3, -31820(30)
  062d8c8  bl 0x5cd098
  062d8cc  nop
  062d8d0  b 0x62d340
  062d8d4  extsw 4, 3
  062d8d8  lwz 3, -31824(30)
  062d8dc  bl 0x5cd098
  062d8e0  nop
  062d8e4  b 0x62d324
  062d8e8  li 9, 1
  062d8ec  b 0x62cc34
  062d8f0  extsw 4, 3
  062d8f4  lwz 3, -31804(30)
  062d8f8  bl 0x5cd098
  062d8fc  nop
  062d900  b 0x62d410
  062d904  extsw 4, 3
  062d908  lwz 3, -31800(30)
  062d90c  bl 0x5cd098
  062d910  nop
  062d914  b 0x62d42c

FUN_0062d940:   # 0x62d940, 0x254 bytes
  062d940  stdu 1, -208(1)
  062d944  mflr 0
  062d948  std 30, 128(1)
  062d94c  lwz 30, -29432(2)
  062d950  li 4, 1
  062d954  stfd 26, 160(1)
  062d958  fmr 26, 2
  062d95c  stfd 29, 184(1)
  062d960  stfd 30, 192(1)
  062d964  fmr 30, 1
  062d968  stfd 31, 200(1)
  062d96c  std 29, 120(1)
  062d970  std 31, 136(1)
  062d974  stfd 24, 144(1)
  062d978  mr 29, 5
  062d97c  stfd 25, 152(1)
  062d980  mr 31, 6
  062d984  stfd 27, 168(1)
  062d988  stfd 28, 176(1)
  062d98c  std 0, 224(1)
  062d990  bl 0x5dd718
  062d994  nop
  062d998  lfs 29, -31696(30)
  062d99c  fmuls 1, 1, 29
  062d9a0  lfs 31, -31688(30)
  062d9a4  fcmpu 7, 1, 31
  062d9a8  bf 28, 0x62daec
  062d9ac  fmr 27, 31
  062d9b0  lfs 25, -31680(30)
  062d9b4  lfs 24, -31672(30)
  062d9b8  fmr 1, 26
  062d9bc  li 4, 1
  062d9c0  bl 0x5dd718
  062d9c4  nop
  062d9c8  fmuls 1, 1, 29
  062d9cc  fcmpu 7, 1, 31
  062d9d0  bf 28, 0x62db34
  062d9d4  fmr 0, 31
  062d9d8  lfs 28, -31680(30)
  062d9dc  fcmpu 7, 27, 24
  062d9e0  bf 29, 0x62dab4
  062d9e4  fcmpu 7, 0, 24
  062d9e8  lfs 11, -32612(30)
  062d9ec  bt 29, 0x62dac0
  062d9f0  lfs 30, -31656(30)
  062d9f4  lfs 31, -31972(30)
  062d9f8  fdivs 2, 25, 11
  062d9fc  fmr 1, 31
  062da00  bl 0x5dcbd8
  062da04  nop
  062da08  fdivs 2, 28, 30
  062da0c  lfs 0, -31632(30)
  062da10  fmuls 30, 1, 0
  062da14  fmr 1, 31
  062da18  bl 0x5dcbd8
  062da1c  nop
  062da20  lfs 0, -31624(30)
  062da24  fmuls 1, 1, 0
  062da28  li 4, 0
  062da2c  fdivs 1, 1, 30
  062da30  bl 0x5dd718
  062da34  nop
  062da38  lfs 0, -31616(30)
  062da3c  fmuls 13, 1, 0
  062da40  lfs 12, -31608(30)
  062da44  fcmpu 7, 13, 12
  062da48  bt 28, 0x62dae0
  062da4c  lfs 0, -31592(30)
  062da50  fcmpu 7, 13, 0
  062da54  bt 29, 0x62dad4
  062da58  lfs 0, -32428(30)
  062da5c  fmuls 2, 13, 0
  062da60  fmr 1, 31
  062da64  stfs 13, 0(31)
  062da68  bl 0x5dcbd8
  062da6c  nop
  062da70  ld 0, 224(1)
  062da74  fmuls 1, 30, 1
  062da78  ld 30, 128(1)
  062da7c  ld 31, 136(1)
  062da80  mtlr 0
  062da84  lfd 24, 144(1)
  062da88  lfd 25, 152(1)
  062da8c  lfd 26, 160(1)
  062da90  lfd 27, 168(1)
  062da94  lfd 28, 176(1)
  062da98  lfd 29, 184(1)
  062da9c  lfd 30, 192(1)
  062daa0  lfd 31, 200(1)
  062daa4  stfs 1, 0(29)
  062daa8  ld 29, 120(1)
  062daac  addi 1, 1, 208
  062dab0  blr
  062dab4  fcmpu 7, 0, 24
  062dab8  lfs 11, -31664(30)
  062dabc  bf 29, 0x62d9f0
  062dac0  lfs 12, -31648(30)
  062dac4  fdivs 0, 0, 24
  062dac8  lfs 13, -31640(30)
  062dacc  fnmadds 30, 0, 12, 13
  062dad0  b 0x62d9f4
  062dad4  fmr 13, 0
  062dad8  lfs 2, -31584(30)
  062dadc  b 0x62da60
  062dae0  fmr 13, 12
  062dae4  lfs 2, -31600(30)
  062dae8  b 0x62da60
  062daec  fmr 1, 30
  062daf0  li 4, 1
  062daf4  bl 0x5dd718
  062daf8  nop
  062dafc  lfs 0, -32684(30)
  062db00  fmuls 1, 1, 29
  062db04  fcmpu 7, 1, 0
  062db08  bf 29, 0x62db74
  062db0c  fmr 1, 26
  062db10  li 4, 1
  062db14  lfs 25, -31672(30)
  062db18  fmr 27, 0
  062db1c  fmr 24, 25
  062db20  bl 0x5dd718
  062db24  nop
  062db28  fmuls 1, 1, 29
  062db2c  fcmpu 7, 1, 31
  062db30  bt 28, 0x62d9d4
  062db34  fmr 1, 26
  062db38  li 4, 1
  062db3c  fmr 28, 24
  062db40  bl 0x5dd718
  062db44  nop
  062db48  lfs 0, -32684(30)
  062db4c  fmuls 1, 1, 29
  062db50  fcmpu 7, 1, 0
  062db54  bt 29, 0x62d9dc
  062db58  fmr 1, 26
  062db5c  li 4, 1
  062db60  bl 0x5dd718
  062db64  nop
  062db68  fmuls 0, 1, 29
  062db6c  fsubs 28, 24, 0
  062db70  b 0x62d9dc
  062db74  fmr 1, 30
  062db78  li 4, 1
  062db7c  bl 0x5dd718
  062db80  nop
  062db84  lfs 24, -31672(30)
  062db88  fmuls 27, 1, 29
  062db8c  fsubs 25, 24, 27
  062db90  b 0x62d9b8

FUN_0062db94:   # 0x62db94, 0x14c bytes
  062db94  cmpwi 7, 3, 0
  062db98  mflr 0
  062db9c  stdu 1, -160(1)
  062dba0  std 29, 136(1)
  062dba4  std 30, 144(1)
  062dba8  std 31, 152(1)
  062dbac  std 0, 176(1)
  062dbb0  lwz 30, -29432(2)
  062dbb4  mr 29, 3
  062dbb8  mr 31, 4
  062dbbc  bt 30, 0x62dbdc
  062dbc0  cmpwi 7, 4, 0
  062dbc4  bt 30, 0x62dbdc
  062dbc8  lwz 0, 0(4)
  062dbcc  cmpwi 7, 0, 0
  062dbd0  bt 28, 0x62dbdc
  062dbd4  cmpwi 7, 0, 9
  062dbd8  bf 29, 0x62dc0c
  062dbdc  lwz 3, -32624(30)
  062dbe0  li 5, 4666
  062dbe4  lwz 4, -32628(30)
  062dbe8  bl 0x61948c
  062dbec  nop
  062dbf0  lwz 9, -32620(30)
  062dbf4  lbz 0, 0(9)
  062dbf8  cmpwi 7, 0, 0
  062dbfc  bf 30, 0x62dca0
  062dc00  lwz 9, -32616(30)
  062dc04  lbz 0, 0(9)
  062dc08  twnei 0, 0
  062dc0c  clrldi 3, 29, 32
  062dc10  bl 0x62519c
  062dc14  cmpwi 7, 3, 0
  062dc18  bt 28, 0x62dca0
  062dc1c  slwi 9, 3, 4
  062dc20  lwz 11, -32724(30)
  062dc24  li 10, 0
  062dc28  extsw 9, 9
  062dc2c  stw 10, 112(1)
  062dc30  addi 4, 1, 112
  062dc34  lwzx 0, 11, 9
  062dc38  mr 3, 0
  062dc3c  mr 29, 0
  062dc40  bl 0x647ed0
  062dc44  nop
  062dc48  lwz 10, 112(1)
  062dc4c  cmpwi 7, 10, 0
  062dc50  bt 30, 0x62dca0
  062dc54  lwz 0, 0(31)
  062dc58  cmpwi 7, 0, 9
  062dc5c  bt 30, 0x62dcbc
  062dc60  lfs 13, 12(31)
  062dc64  lfs 0, 8(31)
  062dc68  lfs 12, 4(31)
  062dc6c  stfs 0, 116(1)
  062dc70  stfs 13, 120(1)
  062dc74  clrldi 9, 10, 32
  062dc78  lfs 0, 120(1)
  062dc7c  mr 3, 29
  062dc80  li 4, 64
  062dc84  stfs 0, 96(9)
  062dc88  stfs 12, 88(9)
  062dc8c  lfs 0, 116(1)
  062dc90  stw 0, 84(9)
  062dc94  stfs 0, 92(9)
  062dc98  bl 0x647f34
  062dc9c  nop
  062dca0  ld 0, 176(1)
  062dca4  ld 29, 136(1)
  062dca8  ld 30, 144(1)
  062dcac  mtlr 0
  062dcb0  ld 31, 152(1)
  062dcb4  addi 1, 1, 160
  062dcb8  blr
  062dcbc  addi 5, 1, 116
  062dcc0  lfs 2, 8(31)
  062dcc4  addi 6, 1, 120
  062dcc8  lfs 1, 4(31)
  062dccc  bl 0x62d940
  062dcd0  li 0, 4
  062dcd4  lwz 10, 112(1)
  062dcd8  lfs 12, -32612(30)
  062dcdc  b 0x62dc74

FUN_0062dce0:   # 0x62dce0, 0x19c bytes
  062dce0  stdu 1, -192(1)
  062dce4  mflr 0
  062dce8  mr 9, 3
  062dcec  std 0, 208(1)
  062dcf0  lwz 3, 112(3)
  062dcf4  std 29, 168(1)
  062dcf8  cmpwi 7, 3, 0
  062dcfc  std 30, 176(1)
  062dd00  std 31, 184(1)
  062dd04  std 27, 152(1)
  062dd08  std 28, 160(1)
  062dd0c  lwz 30, -29432(2)
  062dd10  mr 31, 5
  062dd14  mr 29, 4
  062dd18  bt 30, 0x62de44
  062dd1c  cmplwi 7, 29, 4
  062dd20  bt 29, 0x62de10
  062dd24  clrldi 28, 3, 32
  062dd28  lwz 0, 0(31)
  062dd2c  cmpwi 7, 0, 9
  062dd30  lwz 9, 24(28)
  062dd34  lwz 27, 24(9)
  062dd38  bt 30, 0x62de4c
  062dd3c  slwi 9, 29, 2
  062dd40  clrldi 11, 27, 32
  062dd44  addi 9, 9, 304
  062dd48  li 0, 0
  062dd4c  extsw 9, 9
  062dd50  stw 0, 120(1)
  062dd54  add 11, 11, 9
  062dd58  mr 3, 28
  062dd5c  addi 4, 1, 128
  062dd60  addi 5, 1, 120
  062dd64  lwz 29, 8(11)
  062dd68  stw 29, 124(1)
  062dd6c  stw 29, 128(1)
  062dd70  bl 0x648730
  062dd74  nop
  062dd78  cmpwi 7, 3, 0
  062dd7c  bf 30, 0x62ddfc
  062dd80  lwz 0, 120(1)
  062dd84  cmpwi 7, 0, 0
  062dd88  bt 30, 0x62ddd0
  062dd8c  clrldi 9, 0, 32
  062dd90  lwz 0, 0(31)
  062dd94  stw 0, 0(9)
  062dd98  lfs 0, 4(31)
  062dd9c  stfs 0, 4(9)
  062dda0  lfs 13, 8(31)
  062dda4  stfs 13, 8(9)
  062dda8  lfs 13, 12(31)
  062ddac  lfs 0, -32684(30)
  062ddb0  fcmpu 7, 13, 0
  062ddb4  bt 30, 0x62ddf4
  062ddb8  stfs 13, 12(9)
  062ddbc  mr 3, 28
  062ddc0  stw 29, 112(1)
  062ddc4  addi 4, 1, 112
  062ddc8  bl 0x6486f8
  062ddcc  nop
  062ddd0  ld 0, 208(1)
  062ddd4  ld 27, 152(1)
  062ddd8  ld 28, 160(1)
  062dddc  mtlr 0
  062dde0  ld 29, 168(1)
  062dde4  ld 30, 176(1)
  062dde8  ld 31, 184(1)
  062ddec  addi 1, 1, 192
  062ddf0  blr
  062ddf4  lfs 13, -31572(30)
  062ddf8  b 0x62ddb8
  062ddfc  extsw 4, 3
  062de00  lwz 3, -32568(30)
  062de04  bl 0x5cd098
  062de08  nop
  062de0c  b 0x62dd80
  062de10  lwz 3, -31576(30)
  062de14  clrldi 4, 29, 32
  062de18  bl 0x61948c
  062de1c  nop
  062de20  ld 0, 208(1)
  062de24  ld 27, 152(1)
  062de28  ld 28, 160(1)
  062de2c  mtlr 0
  062de30  ld 29, 168(1)
  062de34  ld 30, 176(1)
  062de38  ld 31, 184(1)
  062de3c  addi 1, 1, 192
  062de40  blr
  062de44  lwz 3, 108(9)
  062de48  b 0x62dd1c
  062de4c  addi 5, 1, 116
  062de50  lfs 1, 4(31)
  062de54  addi 6, 1, 132
  062de58  lfs 2, 8(31)
  062de5c  bl 0x62d940
  062de60  li 0, 4
  062de64  lfs 0, 132(1)
  062de68  lfs 13, 116(1)
  062de6c  stw 0, 0(31)
  062de70  stfs 13, 8(31)
  062de74  stfs 0, 12(31)
  062de78  b 0x62dd3c

FUN_0062de84:   # 0x62de84, 0x2bc bytes
  062de84  cmpwi 7, 3, 0
  062de88  mflr 0
  062de8c  stdu 1, -208(1)
  062de90  stfd 28, 176(1)
  062de94  fmr 28, 4
  062de98  stfd 29, 184(1)
  062de9c  fmr 29, 3
  062dea0  stfd 30, 192(1)
  062dea4  fmr 30, 2
  062dea8  stfd 31, 200(1)
  062deac  fmr 31, 1
  062deb0  std 26, 128(1)
  062deb4  std 28, 144(1)
  062deb8  std 29, 152(1)
  062debc  std 30, 160(1)
  062dec0  std 31, 168(1)
  062dec4  std 27, 136(1)
  062dec8  std 0, 224(1)
  062decc  lwz 30, -29432(2)
  062ded0  mr 28, 3
  062ded4  mr 29, 8
  062ded8  mr 26, 9
  062dedc  mr 31, 8
  062dee0  bt 30, 0x62e10c
  062dee4  cmpwi 7, 31, 0
  062dee8  bt 30, 0x62e084
  062deec  lwz 9, 0(29)
  062def0  clrldi 27, 31, 32
  062def4  clrlwi 0, 9, 31
  062def8  cmpwi 7, 0, 0
  062defc  bf 30, 0x62e068
  062df00  rlwinm 0, 9, 0, 30, 30
  062df04  cmpwi 7, 0, 0
  062df08  bf 30, 0x62e04c
  062df0c  rlwinm 0, 9, 0, 29, 29
  062df10  cmpwi 7, 0, 0
  062df14  bf 30, 0x62e030
  062df18  rlwinm 0, 9, 0, 28, 28
  062df1c  cmpwi 7, 0, 0
  062df20  bf 30, 0x62e014
  062df24  rlwinm 0, 9, 0, 27, 27
  062df28  cmpwi 7, 0, 0
  062df2c  bf 30, 0x62dff8
  062df30  rlwinm 0, 9, 0, 23, 23
  062df34  cmpwi 7, 0, 0
  062df38  bf 30, 0x62dfdc
  062df3c  li 0, 672
  062df40  and 0, 9, 0
  062df44  cmpwi 7, 0, 0
  062df48  bf 30, 0x62df84
  062df4c  ld 0, 224(1)
  062df50  ld 26, 128(1)
  062df54  ld 27, 136(1)
  062df58  mtlr 0
  062df5c  ld 28, 144(1)
  062df60  ld 29, 152(1)
  062df64  ld 30, 160(1)
  062df68  ld 31, 168(1)
  062df6c  lfd 28, 176(1)
  062df70  lfd 29, 184(1)
  062df74  lfd 30, 192(1)
  062df78  lfd 31, 200(1)
  062df7c  addi 1, 1, 208
  062df80  blr
  062df84  fmr 1, 31
  062df88  clrldi 3, 28, 32
  062df8c  fmr 2, 30
  062df90  mr 8, 27
  062df94  fmr 3, 29
  062df98  clrldi 9, 26, 32
  062df9c  fmr 4, 28
  062dfa0  bl 0x625f8c
  062dfa4  ld 0, 224(1)
  062dfa8  ld 26, 128(1)
  062dfac  ld 27, 136(1)
  062dfb0  mtlr 0
  062dfb4  ld 28, 144(1)
  062dfb8  ld 29, 152(1)
  062dfbc  ld 30, 160(1)
  062dfc0  ld 31, 168(1)
  062dfc4  lfd 28, 176(1)
  062dfc8  lfd 29, 184(1)
  062dfcc  lfd 30, 192(1)
  062dfd0  lfd 31, 200(1)
  062dfd4  addi 1, 1, 208
  062dfd8  blr
  062dfdc  addi 5, 31, 108
  062dfe0  clrldi 3, 28, 32
  062dfe4  clrldi 5, 5, 32
  062dfe8  li 4, 4
  062dfec  bl 0x62dce0
  062dff0  lwz 9, 0(29)
  062dff4  b 0x62df3c
  062dff8  clrldi 3, 28, 32
  062dffc  lwz 6, 76(29)
  062e000  lfs 1, 68(29)
  062e004  lfs 2, 72(29)
  062e008  bl 0x625c88
  062e00c  lwz 9, 0(29)
  062e010  b 0x62df30
  062e014  addi 5, 31, 52
  062e018  clrldi 3, 28, 32
  062e01c  clrldi 5, 5, 32
  062e020  li 4, 3
  062e024  bl 0x62dce0
  062e028  lwz 9, 0(29)
  062e02c  b 0x62df24
  062e030  addi 5, 31, 36
  062e034  clrldi 3, 28, 32
  062e038  clrldi 5, 5, 32
  062e03c  li 4, 2
  062e040  bl 0x62dce0
  062e044  lwz 9, 0(29)
  062e048  b 0x62df18
  062e04c  addi 5, 31, 20
  062e050  clrldi 3, 28, 32
  062e054  clrldi 5, 5, 32
  062e058  li 4, 1
  062e05c  bl 0x62dce0
  062e060  lwz 9, 0(29)
  062e064  b 0x62df0c
  062e068  addi 5, 31, 4
  062e06c  clrldi 3, 28, 32
  062e070  clrldi 5, 5, 32
  062e074  li 4, 0
  062e078  bl 0x62dce0
  062e07c  lwz 9, 0(29)
  062e080  b 0x62df00
  062e084  li 0, 0
  062e088  clrldi 28, 28, 32
  062e08c  li 31, 0
  062e090  addi 27, 1, 112
  062e094  stw 29, 112(1)
  062e098  stw 0, 124(1)
  062e09c  stw 0, 116(1)
  062e0a0  stw 0, 120(1)
  062e0a4  clrldi 4, 31, 32
  062e0a8  mr 3, 28
  062e0ac  addi 31, 31, 1
  062e0b0  clrldi 5, 27, 32
  062e0b4  bl 0x62dce0
  062e0b8  cmpdi 7, 31, 5
  062e0bc  bf 30, 0x62e0a4
  062e0c0  lfs 1, -32684(30)
  062e0c4  mr 3, 28
  062e0c8  fmr 2, 1
  062e0cc  li 6, 0
  062e0d0  bl 0x625c88
  062e0d4  ld 0, 224(1)
  062e0d8  ld 26, 128(1)
  062e0dc  ld 27, 136(1)
  062e0e0  mtlr 0
  062e0e4  ld 28, 144(1)
  062e0e8  ld 29, 152(1)
  062e0ec  ld 30, 160(1)
  062e0f0  ld 31, 168(1)
  062e0f4  lfd 28, 176(1)
  062e0f8  lfd 29, 184(1)
  062e0fc  lfd 30, 192(1)
  062e100  lfd 31, 200(1)
  062e104  addi 1, 1, 208
  062e108  blr
  062e10c  lwz 3, -32624(30)
  062e110  li 5, 4035
  062e114  lwz 4, -32628(30)
  062e118  bl 0x61948c
  062e11c  nop
  062e120  lwz 9, -32620(30)
  062e124  lbz 0, 0(9)
  062e128  cmpwi 7, 0, 0
  062e12c  bf 30, 0x62df4c
  062e130  lwz 9, -32616(30)
  062e134  lbz 0, 0(9)
  062e138  twnei 0, 0
  062e13c  b 0x62dee4

snd_SynthSetVoiceData:   # 0x62e140, 0xcd8 bytes
  062e140  cmpwi 7, 3, 0
  062e144  mflr 0
  062e148  stdu 1, -352(1)
  062e14c  std 15, 200(1)
  062e150  std 16, 208(1)
  062e154  std 20, 240(1)
  062e158  std 21, 248(1)
  062e15c  std 23, 264(1)
  062e160  std 26, 288(1)
  062e164  std 27, 296(1)
  062e168  std 28, 304(1)
  062e16c  std 29, 312(1)
  062e170  std 30, 320(1)
  062e174  std 31, 328(1)
  062e178  stfd 30, 336(1)
  062e17c  mr 28, 3
  062e180  stfd 31, 344(1)
  062e184  mr 31, 4
  062e188  std 14, 192(1)
  062e18c  std 17, 216(1)
  062e190  std 18, 224(1)
  062e194  std 19, 232(1)
  062e198  std 22, 256(1)
  062e19c  std 24, 272(1)
  062e1a0  std 25, 280(1)
  062e1a4  std 0, 368(1)
  062e1a8  lwz 30, -29432(2)
  062e1ac  mr 23, 5
  062e1b0  mr 27, 6
  062e1b4  lwz 21, 468(1)
  062e1b8  mr 29, 7
  062e1bc  lwz 15, 476(1)
  062e1c0  mr 26, 8
  062e1c4  lwz 16, 492(1)
  062e1c8  stb 9, 160(1)
  062e1cc  mr 20, 10
  062e1d0  bt 30, 0x62e77c
  062e1d4  cmpwi 7, 4, 0
  062e1d8  bt 30, 0x62e77c
  062e1dc  cmpwi 7, 5, 0
  062e1e0  bt 30, 0x62e77c
  062e1e4  lwz 9, -32712(30)
  062e1e8  cmpwi 7, 27, 1
  062e1ec  mr 19, 29
  062e1f0  lwz 0, 0(9)
  062e1f4  add 25, 31, 0
  062e1f8  bt 30, 0x62e7c8
  062e1fc  cmpwi 7, 27, 0
  062e200  bf 30, 0x62e7f0
  062e204  srwi 0, 23, 4
  062e208  cmpwi 7, 26, 0
  062e20c  slwi 9, 0, 5
  062e210  slwi 0, 0, 2
  062e214  li 4, 0
  062e218  sub 17, 9, 0
  062e21c  li 14, 0
  062e220  li 18, -1
  062e224  bt 30, 0x62e240
  062e228  sub 0, 26, 25
  062e22c  srawi 0, 0, 4
  062e230  addze 0, 0
  062e234  slwi 9, 0, 5
  062e238  slwi 0, 0, 2
  062e23c  sub 18, 9, 0
  062e240  rlwinm 11, 4, 2, 27, 29
  062e244  lwz 9, -32480(30)
  062e248  lwz 22, 108(28)
  062e24c  lwz 24, 112(28)
  062e250  lwzx 0, 9, 11
  062e254  cmpwi 7, 0, 0
  062e258  bt 30, 0x62ed74
  062e25c  lbz 0, 105(28)
  062e260  stw 20, 40(28)
  062e264  extsb 0, 0
  062e268  cmpw 7, 0, 21
  062e26c  bt 30, 0x62e2b0
  062e270  cmpwi 7, 24, 0
  062e274  mr 3, 24
  062e278  bt 30, 0x62ed44
  062e27c  cmpwi 7, 21, -1
  062e280  bt 30, 0x62ecb8
  062e284  slwi 0, 21, 2
  062e288  lwz 9, -32656(30)
  062e28c  clrldi 3, 3, 32
  062e290  extsw 0, 0
  062e294  li 4, 1
  062e298  lwzx 5, 9, 0
  062e29c  bl 0x648b10
  062e2a0  nop
  062e2a4  cmpwi 7, 3, 0
  062e2a8  bf 30, 0x62eaa0
  062e2ac  stb 21, 105(28)
  062e2b0  lis 8, 21845
  062e2b4  li 10, 0
  062e2b8  ori 8, 8, 21846
  062e2bc  clrldi 21, 28, 32
  062e2c0  li 6, 0
  062e2c4  li 7, 0
  062e2c8  srawi 11, 10, 31
  062e2cc  cmpwi 7, 10, 2
  062e2d0  mulhw 9, 10, 8
  062e2d4  sub 9, 9, 11
  062e2d8  slwi 0, 9, 1
  062e2dc  add 0, 0, 9
  062e2e0  sub 9, 10, 0
  062e2e4  addi 10, 10, 1
  062e2e8  slwi 9, 9, 2
  062e2ec  addi 11, 9, 16
  062e2f0  extsw 9, 9
  062e2f4  extsw 11, 11
  062e2f8  add 9, 21, 9
  062e2fc  add 11, 21, 11
  062e300  stw 7, 8(9)
  062e304  stw 6, 4(11)
  062e308  bf 30, 0x62e2c8
  062e30c  cmpwi 7, 15, 0
  062e310  bt 30, 0x62e838
  062e314  clrldi 9, 15, 32
  062e318  lwz 0, 0(9)
  062e31c  rlwinm 0, 0, 0, 21, 21
  062e320  cmpwi 7, 0, 0
  062e324  bt 30, 0x62e838
  062e328  lwz 11, 128(9)
  062e32c  addi 15, 11, 1
  062e330  addi 0, 27, -2
  062e334  li 29, 0
  062e338  cmplwi 7, 0, 2
  062e33c  li 9, 0
  062e340  stw 11, 44(28)
  062e344  stw 9, 92(28)
  062e348  stw 29, 60(28)
  062e34c  stw 29, 48(28)
  062e350  stw 9, 72(28)
  062e354  stw 9, 84(28)
  062e358  stw 29, 64(28)
  062e35c  stw 29, 52(28)
  062e360  stw 9, 76(28)
  062e364  stw 9, 88(28)
  062e368  stw 29, 68(28)
  062e36c  stw 29, 56(28)
  062e370  stw 9, 80(28)
  062e374  stw 29, 112(1)
  062e378  bt 29, 0x62eacc
  062e37c  cmpwi 7, 16, 0
  062e380  li 0, 0
  062e384  li 18, 0
  062e388  std 0, 144(1)
  062e38c  std 0, 120(1)
  062e390  std 0, 128(1)
  062e394  std 0, 136(1)
  062e398  bt 30, 0x62e3fc
  062e39c  li 31, 0
  062e3a0  lfs 31, -32412(30)
  062e3a4  addi 29, 1, 120
  062e3a8  add 9, 31, 16
  062e3ac  clrldi 9, 9, 32
  062e3b0  lwz 3, 0(9)
  062e3b4  bl 0x62777c
  062e3b8  add 9, 31, 29
  062e3bc  fcmpu 7, 1, 31
  062e3c0  clrldi 9, 9, 32
  062e3c4  stfs 1, 0(9)
  062e3c8  cror 30, 29, 30
  062e3cc  bf 30, 0x62e3ec
  062e3d0  fsubs 1, 1, 31
  062e3d4  fcmpu 7, 1, 31
  062e3d8  cror 30, 29, 30
  062e3dc  bt 30, 0x62e3d0
  062e3e0  add 9, 31, 29
  062e3e4  clrldi 9, 9, 32
  062e3e8  stfs 1, 0(9)
  062e3ec  cmpwi 7, 31, 28
  062e3f0  addi 31, 31, 4
  062e3f4  bf 30, 0x62e3a8
  062e3f8  mr 18, 29
  062e3fc  clrldi 22, 22, 32
  062e400  addi 4, 1, 112
  062e404  mr 3, 22
  062e408  bl 0x647ed0
  062e40c  nop
  062e410  cmpwi 7, 3, 0
  062e414  bf 30, 0x62eca4
  062e418  clrldi 29, 19, 32
  062e41c  lwz 23, 112(1)
  062e420  li 11, 0
  062e424  clrldi 31, 23, 32
  062e428  cmpwi 7, 26, 0
  062e42c  li 10, 0
  062e430  lwz 0, 48(29)
  062e434  add 0, 25, 0
  062e438  stw 11, 0(31)
  062e43c  stw 0, 4(31)
  062e440  lwz 9, 52(29)
  062e444  stw 11, 12(31)
  062e448  stw 9, 8(31)
  062e44c  bt 30, 0x62e454
  062e450  lwz 10, 52(29)
  062e454  stw 10, 16(31)
  062e458  lwz 0, 28(29)
  062e45c  li 8, 6
  062e460  lwz 10, -32432(30)
  062e464  stw 0, 20(31)
  062e468  lwz 9, 32(29)
  062e46c  stw 9, 24(31)
  062e470  lwz 0, 36(29)
  062e474  lwz 11, 0(10)
  062e478  stw 0, 28(31)
  062e47c  lwz 9, 44(29)
  062e480  cmpwi 7, 11, 10
  062e484  stw 9, 40(31)
  062e488  lwz 0, 24(29)
  062e48c  stw 0, 32(31)
  062e490  bt 29, 0x62e498
  062e494  li 8, 2
  062e498  lbz 0, 160(1)
  062e49c  stw 8, 36(31)
  062e4a0  extsb 9, 0
  062e4a4  lfs 0, -32684(30)
  062e4a8  li 0, 0
  062e4ac  cmpwi 7, 9, 0
  062e4b0  stw 0, 44(31)
  062e4b4  bt 28, 0x62e4dc
  062e4b8  cmpwi 7, 9, 99
  062e4bc  bt 29, 0x62e844
  062e4c0  extsw 0, 9
  062e4c4  lfs 13, -31532(30)
  062e4c8  std 0, 176(1)
  062e4cc  lfd 12, 176(1)
  062e4d0  fcfid 12, 12
  062e4d4  frsp 0, 12
  062e4d8  fdivs 0, 0, 13
  062e4dc  addi 5, 23, 56
  062e4e0  lfs 30, -32612(30)
  062e4e4  li 3, 0
  062e4e8  stfs 0, 48(31)
  062e4ec  li 4, 0
  062e4f0  stfs 30, 52(31)
  062e4f4  li 0, 4
  062e4f8  ori 3, 3, 33023
  062e4fc  ori 4, 4, 57312
  062e500  clrldi 5, 5, 32
  062e504  stw 0, 56(31)
  062e508  bl 0x63000c
  062e50c  nop
  062e510  cmpwi 7, 24, 0
  062e514  bt 30, 0x62e884
  062e518  mr 3, 22
  062e51c  li 4, 0
  062e520  bl 0x647f34
  062e524  nop
  062e528  cmpwi 7, 3, 0
  062e52c  bf 30, 0x62ed30
  062e530  clrldi 31, 24, 32
  062e534  addi 4, 1, 116
  062e538  mr 3, 31
  062e53c  bl 0x647ed0
  062e540  nop
  062e544  lwz 7, 116(1)
  062e548  cmpwi 7, 7, 0
  062e54c  bt 30, 0x62e6e0
  062e550  clrldi 10, 7, 32
  062e554  lfs 13, -31980(30)
  062e558  li 0, 5
  062e55c  lfs 0, -31972(30)
  062e560  li 11, 0
  062e564  mtctr 0
  062e568  li 0, 0
  062e56c  li 8, 0
  062e570  stw 0, 0(10)
  062e574  stfs 30, 4(10)
  062e578  stfs 30, 8(10)
  062e57c  add 9, 7, 11
  062e580  addi 11, 11, 16
  062e584  clrldi 9, 9, 32
  062e588  stfs 0, 24(9)
  062e58c  stw 8, 12(9)
  062e590  stfs 30, 16(9)
  062e594  stfs 13, 20(9)
  062e598  bdnz 0x62e57c
  062e59c  rlwinm 6, 20, 0, 26, 26
  062e5a0  li 0, 255
  062e5a4  cmpwi 7, 6, 0
  062e5a8  li 11, 0
  062e5ac  stw 0, 192(10)
  062e5b0  li 9, 1
  062e5b4  li 0, 5
  062e5b8  stw 11, 100(10)
  062e5bc  stw 0, 108(10)
  062e5c0  stw 9, 112(10)
  062e5c4  stw 8, 116(10)
  062e5c8  stw 8, 188(10)
  062e5cc  stw 11, 92(10)
  062e5d0  stw 11, 96(10)
  062e5d4  stw 8, 104(10)
  062e5d8  bt 30, 0x62ea54
  062e5dc  lwz 9, -32592(30)
  062e5e0  li 0, 2
  062e5e4  stw 0, 116(10)
  062e5e8  lwz 8, 116(10)
  062e5ec  lbz 0, 0(9)
  062e5f0  rlwinm 11, 8, 25, 1, 31
  062e5f4  cmpwi 7, 0, 0
  062e5f8  rotlwi 11, 11, 7
  062e5fc  stw 11, 116(10)
  062e600  bt 30, 0x62ea78
  062e604  lbz 9, 487(1)
  062e608  ori 0, 11, 48
  062e60c  cmpwi 7, 9, 0
  062e610  stw 0, 116(10)
  062e614  bt 30, 0x62ea90
  062e618  lwz 0, 116(10)
  062e61c  cmpwi 7, 18, 0
  062e620  rlwinm 0, 0, 15, 1, 31
  062e624  rotlwi 0, 0, 17
  062e628  stw 0, 116(10)
  062e62c  bt 30, 0x62e674
  062e630  clrldi 9, 18, 32
  062e634  ori 0, 0, 4096
  062e638  stw 0, 116(10)
  062e63c  lfs 0, 0(9)
  062e640  stfs 0, 196(10)
  062e644  lfs 13, 4(9)
  062e648  stfs 13, 200(10)
  062e64c  lfs 0, 8(9)
  062e650  stfs 0, 204(10)
  062e654  lfs 13, 12(9)
  062e658  stfs 13, 208(10)
  062e65c  lfs 0, 16(9)
  062e660  stfs 0, 212(10)
  062e664  lfs 13, 20(9)
  062e668  stfs 13, 216(10)
  062e66c  lfs 0, 24(9)
  062e670  stfs 0, 220(10)
  062e674  li 9, 4
  062e678  lfs 31, -32412(30)
  062e67c  li 11, 0
  062e680  li 0, 0
  062e684  mtctr 9
  062e688  add 9, 11, 7
  062e68c  addi 11, 11, 16
  062e690  clrldi 9, 9, 32
  062e694  stw 0, 132(9)
  062e698  stw 0, 120(9)
  062e69c  stfs 31, 124(9)
  062e6a0  stw 0, 128(9)
  062e6a4  bdnz 0x62e688
  062e6a8  rldicl 0, 20, 57, 63
  062e6ac  li 4, 0
  062e6b0  mr 3, 31
  062e6b4  li 5, 0
  062e6b8  stw 0, 184(10)
  062e6bc  bl 0x647fa0
  062e6c0  nop
  062e6c4  cmpwi 7, 3, 0
  062e6c8  mr 4, 3
  062e6cc  bt 30, 0x62e6e0
  062e6d0  lwz 3, -31524(30)
  062e6d4  extsw 4, 4
  062e6d8  bl 0x5cd098
  062e6dc  nop
  062e6e0  bl 0x640c9c
  062e6e4  nop
  062e6e8  fmr 1, 30
  062e6ec  fmr 2, 30
  062e6f0  fmr 3, 30
  062e6f4  stw 3, 100(28)
  062e6f8  fmr 4, 30
  062e6fc  mr 3, 21
  062e700  clrldi 9, 20, 32
  062e704  li 8, 0
  062e708  bl 0x62de84
  062e70c  li 0, 1
  062e710  li 3, 1
  062e714  stw 0, 96(28)
  062e718  ld 0, 368(1)
  062e71c  extsw 3, 3
  062e720  ld 14, 192(1)
  062e724  ld 15, 200(1)
  062e728  mtlr 0
  062e72c  ld 16, 208(1)
  062e730  ld 17, 216(1)
  062e734  ld 18, 224(1)
  062e738  ld 19, 232(1)
  062e73c  ld 20, 240(1)
  062e740  ld 21, 248(1)
  062e744  ld 22, 256(1)
  062e748  ld 23, 264(1)
  062e74c  ld 24, 272(1)
  062e750  ld 25, 280(1)
  062e754  ld 26, 288(1)
  062e758  ld 27, 296(1)
  062e75c  ld 28, 304(1)
  062e760  ld 29, 312(1)
  062e764  ld 30, 320(1)
  062e768  ld 31, 328(1)
  062e76c  lfd 30, 336(1)
  062e770  lfd 31, 344(1)
  062e774  addi 1, 1, 352
  062e778  blr
  062e77c  lwz 3, -32624(30)
  062e780  li 5, 2459
  062e784  lwz 4, -32628(30)
  062e788  bl 0x61948c
  062e78c  nop
  062e790  lwz 9, -32620(30)
  062e794  li 3, 0
  062e798  lbz 0, 0(9)
  062e79c  cmpwi 7, 0, 0
  062e7a0  bf 30, 0x62e718
  062e7a4  lwz 9, -32616(30)
  062e7a8  cmpwi 7, 27, 1
  062e7ac  mr 19, 29
  062e7b0  lbz 0, 0(9)
  062e7b4  twnei 0, 0
  062e7b8  lwz 9, -32712(30)
  062e7bc  lwz 0, 0(9)
  062e7c0  add 25, 31, 0
  062e7c4  bf 30, 0x62e1fc
  062e7c8  cmpwi 7, 26, 0
  062e7cc  srwi 17, 23, 1
  062e7d0  li 4, 1
  062e7d4  li 14, 1
  062e7d8  li 18, -1
  062e7dc  bt 30, 0x62e240
  062e7e0  sub 0, 26, 25
  062e7e4  srawi 18, 0, 1
  062e7e8  addze 18, 18
  062e7ec  b 0x62e240
  062e7f0  addi 0, 27, -2
  062e7f4  cmplwi 7, 0, 2
  062e7f8  bt 29, 0x62eab4
  062e7fc  cmpwi 7, 29, 0
  062e800  bt 30, 0x62edbc
  062e804  clrldi 9, 19, 32
  062e808  li 4, 2
  062e80c  li 14, 0
  062e810  li 17, 0
  062e814  li 18, -1
  062e818  lwz 0, 24(9)
  062e81c  cmpwi 7, 0, 1
  062e820  bt 30, 0x62e240
  062e824  cmpwi 7, 0, 2
  062e828  li 4, 3
  062e82c  bt 30, 0x62e240
  062e830  li 4, 4
  062e834  b 0x62e240
  062e838  li 11, 0
  062e83c  li 15, 1
  062e840  b 0x62e330
  062e844  addi 5, 23, 56
  062e848  lfs 0, -31540(30)
  062e84c  li 3, 0
  062e850  lfs 30, -32612(30)
  062e854  li 4, 0
  062e858  stfs 0, 48(31)
  062e85c  li 0, 4
  062e860  stfs 30, 52(31)
  062e864  ori 3, 3, 33023
  062e868  ori 4, 4, 57312
  062e86c  clrldi 5, 5, 32
  062e870  stw 0, 56(31)
  062e874  bl 0x63000c
  062e878  nop
  062e87c  cmpwi 7, 24, 0
  062e880  bf 30, 0x62e518
  062e884  li 0, 5
  062e888  lfs 13, -31980(30)
  062e88c  addi 11, 23, 136
  062e890  lfs 0, -31972(30)
  062e894  li 10, 0
  062e898  mtctr 0
  062e89c  stw 24, 124(31)
  062e8a0  stfs 30, 128(31)
  062e8a4  stfs 30, 132(31)
  062e8a8  clrldi 9, 11, 32
  062e8ac  addi 11, 11, 16
  062e8b0  stfs 0, 12(9)
  062e8b4  stw 10, 0(9)
  062e8b8  stfs 30, 4(9)
  062e8bc  stfs 13, 8(9)
  062e8c0  bdnz 0x62e8a8
  062e8c4  lwz 0, 20(29)
  062e8c8  cmplwi 7, 0, 1
  062e8cc  bf 29, 0x62edcc
  062e8d0  li 0, 255
  062e8d4  stw 10, 312(31)
  062e8d8  stw 0, 316(31)
  062e8dc  li 9, 0
  062e8e0  li 27, 0
  062e8e4  stw 9, 228(31)
  062e8e8  lwz 0, 20(29)
  062e8ec  stw 27, 216(31)
  062e8f0  cmplwi 7, 0, 1
  062e8f4  stw 27, 220(31)
  062e8f8  stw 27, 224(31)
  062e8fc  bf 29, 0x62edd8
  062e900  lbz 11, 487(1)
  062e904  stw 0, 232(31)
  062e908  cmpwi 7, 11, 0
  062e90c  stw 9, 236(31)
  062e910  bt 30, 0x62ecec
  062e914  lwz 0, 20(29)
  062e918  cmplwi 7, 0, 1
  062e91c  bf 29, 0x62ecec
  062e920  lwz 0, 240(31)
  062e924  cmpwi 7, 18, 0
  062e928  rlwinm 0, 0, 15, 1, 31
  062e92c  rotlwi 0, 0, 17
  062e930  ori 0, 0, 4096
  062e934  stw 0, 240(31)
  062e938  bt 30, 0x62ede0
  062e93c  clrldi 9, 18, 32
  062e940  lfs 0, 0(9)
  062e944  stfs 0, 320(31)
  062e948  lfs 13, 4(9)
  062e94c  stfs 13, 324(31)
  062e950  lfs 0, 8(9)
  062e954  stfs 0, 328(31)
  062e958  lfs 13, 12(9)
  062e95c  stfs 13, 332(31)
  062e960  lfs 0, 16(9)
  062e964  stfs 0, 336(31)
  062e968  lfs 13, 20(9)
  062e96c  stfs 13, 340(31)
  062e970  lfs 0, 24(9)
  062e974  stfs 0, 344(31)
  062e978  rlwinm 0, 20, 0, 26, 26
  062e97c  cmpwi 7, 0, 0
  062e980  bt 30, 0x62ed60
  062e984  lwz 0, 240(31)
  062e988  ori 0, 0, 2
  062e98c  stw 0, 240(31)
  062e990  lwz 0, 20(29)
  062e994  cmpwi 7, 0, 1
  062e998  bt 30, 0x62eda0
  062e99c  lwz 0, 240(31)
  062e9a0  rlwinm 0, 0, 25, 1, 31
  062e9a4  rotlwi 0, 0, 7
  062e9a8  stw 0, 240(31)
  062e9ac  lwz 9, -32592(30)
  062e9b0  lbz 0, 0(9)
  062e9b4  cmpwi 7, 0, 0
  062e9b8  bt 30, 0x62ed4c
  062e9bc  lwz 0, 240(31)
  062e9c0  ori 0, 0, 48
  062e9c4  stw 0, 240(31)
  062e9c8  li 9, 4
  062e9cc  addi 5, 23, 244
  062e9d0  li 0, 0
  062e9d4  mtctr 9
  062e9d8  clrldi 9, 5, 32
  062e9dc  addi 5, 5, 16
  062e9e0  stw 0, 12(9)
  062e9e4  stw 0, 0(9)
  062e9e8  stw 0, 4(9)
  062e9ec  stw 0, 8(9)
  062e9f0  bdnz 0x62e9d8
  062e9f4  rldicl 0, 20, 57, 63
  062e9f8  li 4, 0
  062e9fc  mr 3, 22
  062ea00  stw 0, 308(31)
  062ea04  bl 0x647f34
  062ea08  nop
  062ea0c  cmpwi 7, 3, 0
  062ea10  mr 4, 3
  062ea14  bf 30, 0x62ec58
  062ea18  bl 0x640c9c
  062ea1c  nop
  062ea20  fmr 1, 30
  062ea24  fmr 2, 30
  062ea28  fmr 3, 30
  062ea2c  stw 3, 100(28)
  062ea30  fmr 4, 30
  062ea34  mr 3, 21
  062ea38  clrldi 9, 20, 32
  062ea3c  li 8, 0
  062ea40  bl 0x62de84
  062ea44  li 0, 1
  062ea48  li 3, 1
  062ea4c  stw 0, 96(28)
  062ea50  b 0x62e718
  062ea54  lwz 9, -32592(30)
  062ea58  stw 6, 116(10)
  062ea5c  lwz 8, 116(10)
  062ea60  rlwinm 11, 8, 25, 1, 31
  062ea64  lbz 0, 0(9)
  062ea68  rotlwi 11, 11, 7
  062ea6c  cmpwi 7, 0, 0
  062ea70  stw 11, 116(10)
  062ea74  bf 30, 0x62e604
  062ea78  lbz 9, 487(1)
  062ea7c  rlwinm 0, 8, 25, 3, 31
  062ea80  cmpwi 7, 9, 0
  062ea84  rotlwi 0, 0, 7
  062ea88  stw 0, 116(10)
  062ea8c  bf 30, 0x62e618
  062ea90  lwz 0, 116(10)
  062ea94  oris 0, 0, 1
  062ea98  stw 0, 116(10)
  062ea9c  b 0x62e674
  062eaa0  extsw 4, 3
  062eaa4  lwz 3, -31552(30)
  062eaa8  bl 0x5cd098
  062eaac  nop
  062eab0  b 0x62e2ac
  062eab4  lwz 3, -31564(30)
  062eab8  clrldi 4, 27, 32
  062eabc  bl 0x61948c
  062eac0  nop
  062eac4  li 3, 0
  062eac8  b 0x62e718
  062eacc  clrldi 22, 22, 32
  062ead0  addi 4, 1, 112
  062ead4  mr 3, 22
  062ead8  bl 0x647ed0
  062eadc  nop
  062eae0  cmpwi 7, 3, 0
  062eae4  bf 30, 0x62ed8c
  062eae8  lwz 27, 112(1)
  062eaec  cmpwi 7, 26, 0
  062eaf0  mr 0, 25
  062eaf4  clrldi 31, 27, 32
  062eaf8  stw 14, 0(31)
  062eafc  stw 18, 8(31)
  062eb00  stw 17, 12(31)
  062eb04  stw 17, 4(31)
  062eb08  stw 25, 20(31)
  062eb0c  stw 29, 16(31)
  062eb10  bt 30, 0x62eb18
  062eb14  mr 0, 26
  062eb18  addi 5, 27, 44
  062eb1c  lfs 30, -32612(30)
  062eb20  li 3, 0
  062eb24  stfs 30, 40(31)
  062eb28  li 4, 0
  062eb2c  stw 0, 28(31)
  062eb30  li 0, 4
  062eb34  ori 3, 3, 33023
  062eb38  ori 4, 4, 57312
  062eb3c  clrldi 5, 5, 32
  062eb40  stw 0, 44(31)
  062eb44  stw 23, 32(31)
  062eb48  stw 29, 24(31)
  062eb4c  stw 29, 36(31)
  062eb50  bl 0x63000c
  062eb54  nop
  062eb58  li 0, 5
  062eb5c  lfs 13, -31980(30)
  062eb60  li 11, 0
  062eb64  lfs 0, -31972(30)
  062eb68  li 10, 0
  062eb6c  mtctr 0
  062eb70  stw 29, 112(31)
  062eb74  stfs 30, 116(31)
  062eb78  stfs 30, 120(31)
  062eb7c  add 9, 11, 27
  062eb80  addi 11, 11, 16
  062eb84  clrldi 9, 9, 32
  062eb88  stfs 0, 136(9)
  062eb8c  stw 10, 124(9)
  062eb90  stfs 30, 128(9)
  062eb94  stfs 13, 132(9)
  062eb98  bdnz 0x62eb7c
  062eb9c  rlwinm 9, 20, 0, 26, 26
  062eba0  li 0, 0
  062eba4  cmpwi 7, 9, 0
  062eba8  stw 15, 220(31)
  062ebac  stw 0, 212(31)
  062ebb0  stw 10, 228(31)
  062ebb4  stw 0, 204(31)
  062ebb8  stw 0, 208(31)
  062ebbc  stw 10, 216(31)
  062ebc0  stw 10, 224(31)
  062ebc4  bt 30, 0x62ed28
  062ebc8  li 0, 2
  062ebcc  stw 0, 228(31)
  062ebd0  rlwinm 0, 20, 0, 25, 25
  062ebd4  cmpwi 7, 0, 0
  062ebd8  bt 30, 0x62ed18
  062ebdc  lwz 0, 228(31)
  062ebe0  rlwinm 0, 0, 25, 1, 31
  062ebe4  rotlwi 0, 0, 7
  062ebe8  stw 0, 228(31)
  062ebec  lwz 9, -32592(30)
  062ebf0  lbz 0, 0(9)
  062ebf4  cmpwi 7, 0, 0
  062ebf8  bt 30, 0x62ed04
  062ebfc  lwz 0, 228(31)
  062ec00  ori 0, 0, 48
  062ec04  stw 0, 228(31)
  062ec08  li 9, 4
  062ec0c  addi 5, 27, 232
  062ec10  li 0, 0
  062ec14  mtctr 9
  062ec18  clrldi 9, 5, 32
  062ec1c  addi 5, 5, 16
  062ec20  stw 0, 12(9)
  062ec24  stw 0, 0(9)
  062ec28  stw 0, 4(9)
  062ec2c  stw 0, 8(9)
  062ec30  bdnz 0x62ec18
  062ec34  rldicl 0, 20, 57, 63
  062ec38  li 4, 0
  062ec3c  mr 3, 22
  062ec40  stw 0, 296(31)
  062ec44  bl 0x647f34
  062ec48  nop
  062ec4c  cmpwi 7, 3, 0
  062ec50  mr 4, 3
  062ec54  bt 30, 0x62e6e0
  062ec58  extsw 4, 4
  062ec5c  lwz 3, -31544(30)
  062ec60  bl 0x5cd098
  062ec64  nop
  062ec68  bl 0x640c9c
  062ec6c  nop
  062ec70  fmr 1, 30
  062ec74  fmr 2, 30
  062ec78  fmr 3, 30
  062ec7c  stw 3, 100(28)
  062ec80  fmr 4, 30
  062ec84  mr 3, 21
  062ec88  clrldi 9, 20, 32
  062ec8c  li 8, 0
  062ec90  bl 0x62de84
  062ec94  li 0, 1
  062ec98  li 3, 1
  062ec9c  stw 0, 96(28)
  062eca0  b 0x62e718
  062eca4  extsw 4, 3
  062eca8  lwz 3, -31548(30)
  062ecac  bl 0x5cd098
  062ecb0  nop
  062ecb4  b 0x62e418
  062ecb8  lwz 9, -32672(30)
  062ecbc  clrldi 3, 3, 32
  062ecc0  li 4, 1
  062ecc4  lwz 5, 0(9)
  062ecc8  bl 0x648b10
  062eccc  nop
  062ecd0  cmpwi 7, 3, 0
  062ecd4  bt 30, 0x62e2ac
  062ecd8  extsw 4, 3
  062ecdc  lwz 3, -31556(30)
  062ece0  bl 0x5cd098
  062ece4  nop
  062ece8  b 0x62e2ac
  062ecec  lwz 9, 240(31)
  062ecf0  oris 9, 9, 1
  062ecf4  rlwinm 0, 9, 19, 1, 31
  062ecf8  rotlwi 0, 0, 13
  062ecfc  stw 0, 240(31)
  062ed00  b 0x62e978
  062ed04  lwz 0, 228(31)
  062ed08  rlwinm 0, 0, 26, 2, 31
  062ed0c  rotlwi 0, 0, 6
  062ed10  stw 0, 228(31)
  062ed14  b 0x62ec08
  062ed18  lwz 0, 228(31)
  062ed1c  ori 0, 0, 64
  062ed20  stw 0, 228(31)
  062ed24  b 0x62ebec
  062ed28  stw 9, 228(31)
  062ed2c  b 0x62ebd0
  062ed30  extsw 4, 3
  062ed34  lwz 3, -31544(30)
  062ed38  bl 0x5cd098
  062ed3c  nop
  062ed40  b 0x62e530
  062ed44  mr 3, 22
  062ed48  b 0x62e27c
  062ed4c  lwz 0, 240(31)
  062ed50  rlwinm 0, 0, 26, 2, 31
  062ed54  rotlwi 0, 0, 6
  062ed58  stw 0, 240(31)
  062ed5c  b 0x62e9c8
  062ed60  lwz 0, 240(31)
  062ed64  rlwinm 0, 0, 30, 1, 31
  062ed68  rotlwi 0, 0, 2
  062ed6c  stw 0, 240(31)
  062ed70  b 0x62e990
  062ed74  lwz 3, -31560(30)
  062ed78  clrldi 4, 4, 61
  062ed7c  bl 0x61948c
  062ed80  nop
  062ed84  li 3, 0
  062ed88  b 0x62e718
  062ed8c  extsw 4, 3
  062ed90  lwz 3, -31548(30)
  062ed94  bl 0x5cd098
  062ed98  nop
  062ed9c  b 0x62eae8
  062eda0  rlwinm 0, 20, 0, 25, 25
  062eda4  cmpwi 7, 0, 0
  062eda8  bf 30, 0x62e99c
  062edac  lwz 0, 240(31)
  062edb0  ori 0, 0, 64
  062edb4  stw 0, 240(31)
  062edb8  b 0x62e9ac
  062edbc  mr 19, 25
  062edc0  addi 23, 23, -128
  062edc4  addi 25, 25, 128
  062edc8  b 0x62e804
  062edcc  li 0, 2
  062edd0  stw 0, 312(31)
  062edd4  b 0x62e8dc
  062edd8  mr 0, 15
  062eddc  b 0x62e900
  062ede0  li 3, 1
  062ede4  stw 27, 320(31)
  062ede8  oris 3, 3, 32768
  062edec  bl 0x62777c
  062edf0  li 3, 2
  062edf4  stfs 1, 324(31)
  062edf8  oris 3, 3, 32768
  062edfc  stw 27, 340(31)
  062ee00  stw 27, 328(31)
  062ee04  stw 27, 332(31)
  062ee08  stw 27, 336(31)
  062ee0c  bl 0x62777c
  062ee10  stfs 1, 344(31)
  062ee14  b 0x62e978

FUN_0062ee18:   # 0x62ee18, 0x230 bytes
  062ee18  mfcr 12
  062ee1c  cmpwi 7, 3, 0
  062ee20  stdu 1, -192(1)
  062ee24  std 26, 144(1)
  062ee28  std 27, 152(1)
  062ee2c  std 28, 160(1)
  062ee30  std 30, 176(1)
  062ee34  std 31, 184(1)
  062ee38  std 24, 128(1)
  062ee3c  std 25, 136(1)
  062ee40  std 29, 168(1)
  062ee44  lwz 30, -29432(2)
  062ee48  mr 28, 3
  062ee4c  mr 27, 4
  062ee50  mr 31, 5
  062ee54  mr 26, 4
  062ee58  stw 12, 200(1)
  062ee5c  mflr 0
  062ee60  std 0, 208(1)
  062ee64  bt 30, 0x62f014
  062ee68  cmpwi 7, 5, 0
  062ee6c  bt 30, 0x62f014
  062ee70  clrldi 9, 31, 32
  062ee74  mr 29, 31
  062ee78  lwz 0, 0(9)
  062ee7c  cmpwi 7, 0, 0
  062ee80  bt 30, 0x62ef08
  062ee84  cmpwi 4, 26, 0
  062ee88  mr 31, 9
  062ee8c  addi 25, 26, 4
  062ee90  addi 24, 1, 112
  062ee94  b 0x62eec0
  062ee98  cmpwi 7, 0, 5
  062ee9c  bt 30, 0x62ef40
  062eea0  cmpwi 7, 0, 1
  062eea4  bt 30, 0x62ef90
  062eea8  lwz 0, 4(31)
  062eeac  add 29, 29, 0
  062eeb0  clrldi 31, 29, 32
  062eeb4  lwz 0, 0(31)
  062eeb8  cmpwi 7, 0, 0
  062eebc  bt 30, 0x62ef08
  062eec0  cmpwi 7, 0, 2
  062eec4  bf 30, 0x62ee98
  062eec8  bt 18, 0x62eedc
  062eecc  lwz 0, 0(27)
  062eed0  rlwinm 0, 0, 0, 27, 27
  062eed4  cmpwi 7, 0, 0
  062eed8  bf 30, 0x62efe0
  062eedc  lwz 6, 8(31)
  062eee0  clrldi 3, 28, 32
  062eee4  lfs 1, 12(31)
  062eee8  lfs 2, 16(31)
  062eeec  bl 0x625c88
  062eef0  lwz 0, 4(31)
  062eef4  add 29, 29, 0
  062eef8  clrldi 31, 29, 32
  062eefc  lwz 0, 0(31)
  062ef00  cmpwi 7, 0, 0
  062ef04  bf 30, 0x62eec0
  062ef08  ld 0, 208(1)
  062ef0c  lwz 12, 200(1)
  062ef10  ld 24, 128(1)
  062ef14  mtlr 0
  062ef18  ld 25, 136(1)
  062ef1c  mtocrf 8, 12
  062ef20  ld 26, 144(1)
  062ef24  ld 27, 152(1)
  062ef28  ld 28, 160(1)
  062ef2c  ld 29, 168(1)
  062ef30  ld 30, 176(1)
  062ef34  ld 31, 184(1)
  062ef38  addi 1, 1, 192
  062ef3c  blr
  062ef40  bt 18, 0x62eea8
  062ef44  lwz 0, 20(31)
  062ef48  cmpwi 7, 0, -1
  062ef4c  bt 30, 0x62ef5c
  062ef50  lfs 0, 8(31)
  062ef54  stw 0, 20(28)
  062ef58  stfs 0, 8(28)
  062ef5c  lwz 0, 24(31)
  062ef60  cmpwi 7, 0, -1
  062ef64  bt 30, 0x62ef74
  062ef68  lfs 0, 12(31)
  062ef6c  stw 0, 24(28)
  062ef70  stfs 0, 12(28)
  062ef74  lwz 0, 28(31)
  062ef78  cmpwi 7, 0, -1
  062ef7c  bt 30, 0x62eea8
  062ef80  lfs 0, 16(31)
  062ef84  stw 0, 28(28)
  062ef88  stfs 0, 16(28)
  062ef8c  b 0x62eea8
  062ef90  lhz 4, 10(31)
  062ef94  bt 18, 0x62efac
  062ef98  slw 0, 0, 4
  062ef9c  lwz 9, 0(27)
  062efa0  and 11, 0, 9
  062efa4  cmpwi 11, 0
  062efa8  bf 2, 0x62eff8
  062efac  lwz 0, 24(31)
  062efb0  clrldi 4, 4, 48
  062efb4  clrldi 3, 28, 32
  062efb8  lfs 0, 12(31)
  062efbc  clrldi 5, 24, 32
  062efc0  lfs 13, 16(31)
  062efc4  lfs 12, 20(31)
  062efc8  stw 0, 112(1)
  062efcc  stfs 0, 120(1)
  062efd0  stfs 13, 124(1)
  062efd4  stfs 12, 116(1)
  062efd8  bl 0x62dce0
  062efdc  b 0x62eea8
  062efe0  clrldi 3, 28, 32
  062efe4  lwz 6, 76(27)
  062efe8  lfs 1, 68(27)
  062efec  lfs 2, 72(27)
  062eff0  bl 0x625c88
  062eff4  b 0x62eea8
  062eff8  slwi 5, 4, 4
  062effc  clrldi 3, 28, 32
  062f000  add 5, 25, 5
  062f004  clrldi 4, 4, 48
  062f008  clrldi 5, 5, 32
  062f00c  bl 0x62dce0
  062f010  b 0x62eea8
  062f014  lwz 3, -32624(30)
  062f018  li 5, 3786
  062f01c  lwz 4, -32628(30)
  062f020  bl 0x61948c
  062f024  nop
  062f028  lwz 9, -32620(30)
  062f02c  lbz 0, 0(9)
  062f030  cmpwi 7, 0, 0
  062f034  bf 30, 0x62ef08
  062f038  lwz 9, -32616(30)
  062f03c  lbz 0, 0(9)
  062f040  twnei 0, 0
  062f044  b 0x62ee70

FUN_0062f048:   # 0x62f048, 0x1a4 bytes
  062f048  stdu 1, -160(1)
  062f04c  mflr 0
  062f050  std 30, 144(1)
  062f054  lwz 30, -29432(2)
  062f058  std 0, 176(1)
  062f05c  std 31, 152(1)
  062f060  mr 31, 3
  062f064  std 28, 128(1)
  062f068  lwz 9, -32672(30)
  062f06c  mr 28, 5
  062f070  std 29, 136(1)
  062f074  mr 29, 4
  062f078  lwz 3, 0(9)
  062f07c  cmpwi 7, 3, 0
  062f080  bt 30, 0x62f134
  062f084  lis 0, 3073
  062f088  clrldi 3, 3, 32
  062f08c  ori 0, 0, 36676
  062f090  addi 4, 1, 112
  062f094  stw 0, 112(1)
  062f098  addi 5, 1, 116
  062f09c  bl 0x6487c0
  062f0a0  nop
  062f0a4  lwz 3, 116(1)
  062f0a8  cmpwi 7, 3, 0
  062f0ac  bt 30, 0x62f134
  062f0b0  cmpwi 7, 29, 0
  062f0b4  bt 30, 0x62f0fc
  062f0b8  cmpwi 7, 28, 0
  062f0bc  bt 30, 0x62f158
  062f0c0  clrldi 11, 3, 32
  062f0c4  ld 0, 176(1)
  062f0c8  ld 28, 128(1)
  062f0cc  ld 29, 136(1)
  062f0d0  mtlr 0
  062f0d4  ld 30, 144(1)
  062f0d8  lwz 9, 8(11)
  062f0dc  add 9, 31, 9
  062f0e0  ld 31, 152(1)
  062f0e4  addi 1, 1, 160
  062f0e8  slwi 9, 9, 2
  062f0ec  add 9, 9, 3
  062f0f0  clrldi 9, 9, 32
  062f0f4  lfs 1, 16(9)
  062f0f8  blr
  062f0fc  cmpwi 7, 28, 0
  062f100  bt 30, 0x62f1a8
  062f104  slwi 9, 31, 2
  062f108  ld 0, 176(1)
  062f10c  ld 28, 128(1)
  062f110  add 9, 9, 3
  062f114  ld 29, 136(1)
  062f118  ld 30, 144(1)
  062f11c  mtlr 0
  062f120  clrldi 9, 9, 32
  062f124  ld 31, 152(1)
  062f128  addi 1, 1, 160
  062f12c  lfs 1, 16(9)
  062f130  blr
  062f134  ld 0, 176(1)
  062f138  lfs 1, -32684(30)
  062f13c  ld 28, 128(1)
  062f140  mtlr 0
  062f144  ld 29, 136(1)
  062f148  ld 30, 144(1)
  062f14c  ld 31, 152(1)
  062f150  addi 1, 1, 160
  062f154  blr
  062f158  clrldi 9, 3, 32
  062f15c  li 4, 1
  062f160  lwz 11, 8(9)
  062f164  add 11, 31, 11
  062f168  slwi 11, 11, 2
  062f16c  add 11, 11, 3
  062f170  clrldi 11, 11, 32
  062f174  lfs 1, 16(11)
  062f178  bl 0x5dd718
  062f17c  nop
  062f180  ld 0, 176(1)
  062f184  lfs 0, -31872(30)
  062f188  fmuls 1, 1, 0
  062f18c  ld 28, 128(1)
  062f190  ld 29, 136(1)
  062f194  mtlr 0
  062f198  ld 30, 144(1)
  062f19c  ld 31, 152(1)
  062f1a0  addi 1, 1, 160
  062f1a4  blr
  062f1a8  slwi 9, 31, 2
  062f1ac  li 4, 1
  062f1b0  add 9, 9, 3
  062f1b4  clrldi 9, 9, 32
  062f1b8  lfs 1, 16(9)
  062f1bc  bl 0x5dd718
  062f1c0  nop
  062f1c4  ld 0, 176(1)
  062f1c8  lfs 0, -31872(30)
  062f1cc  fmuls 1, 1, 0
  062f1d0  ld 28, 128(1)
  062f1d4  ld 29, 136(1)
  062f1d8  mtlr 0
  062f1dc  ld 30, 144(1)
  062f1e0  ld 31, 152(1)
  062f1e4  addi 1, 1, 160
  062f1e8  blr

snd_SynthGetVoiceOutputLevel:   # 0x62f1f4, 0x2bc bytes
  062f1f4  cmpwi 7, 3, 0
  062f1f8  mflr 0
  062f1fc  stdu 1, -176(1)
  062f200  std 27, 128(1)
  062f204  std 30, 152(1)
  062f208  std 31, 160(1)
  062f20c  stfd 31, 168(1)
  062f210  mr 9, 3
  062f214  std 28, 136(1)
  062f218  std 29, 144(1)
  062f21c  std 0, 192(1)
  062f220  lwz 30, -29432(2)
  062f224  mr 31, 4
  062f228  mr 27, 5
  062f22c  bt 30, 0x62f3f4
  062f230  lwz 3, 112(3)
  062f234  cmpwi 7, 3, 0
  062f238  bt 30, 0x62f308
  062f23c  lis 0, 3073
  062f240  clrldi 29, 3, 32
  062f244  ori 0, 0, 36676
  062f248  mr 3, 29
  062f24c  stw 0, 112(1)
  062f250  addi 4, 1, 112
  062f254  addi 5, 1, 116
  062f258  bl 0x6487c0
  062f25c  nop
  062f260  lwz 28, 116(1)
  062f264  cmpwi 7, 28, 0
  062f268  bt 30, 0x62f314
  062f26c  lwz 9, -32480(30)
  062f270  lwz 3, 24(29)
  062f274  lwz 0, 12(9)
  062f278  cmpw 7, 0, 3
  062f27c  bt 30, 0x62f340
  062f280  cmpwi 7, 31, 0
  062f284  bt 30, 0x62f2d0
  062f288  cmpwi 7, 27, 0
  062f28c  bt 30, 0x62f3c4
  062f290  clrldi 11, 28, 32
  062f294  lwz 9, 8(11)
  062f298  slwi 9, 9, 2
  062f29c  add 9, 9, 28
  062f2a0  clrldi 9, 9, 32
  062f2a4  lfs 1, 16(9)
  062f2a8  ld 0, 192(1)
  062f2ac  ld 27, 128(1)
  062f2b0  ld 28, 136(1)
  062f2b4  mtlr 0
  062f2b8  ld 29, 144(1)
  062f2bc  ld 30, 152(1)
  062f2c0  ld 31, 160(1)
  062f2c4  lfd 31, 168(1)
  062f2c8  addi 1, 1, 176
  062f2cc  blr
  062f2d0  cmpwi 7, 27, 0
  062f2d4  bt 30, 0x62f3a4
  062f2d8  clrldi 9, 28, 32
  062f2dc  ld 0, 192(1)
  062f2e0  ld 27, 128(1)
  062f2e4  ld 28, 136(1)
  062f2e8  mtlr 0
  062f2ec  ld 29, 144(1)
  062f2f0  ld 30, 152(1)
  062f2f4  lfs 1, 16(9)
  062f2f8  ld 31, 160(1)
  062f2fc  lfd 31, 168(1)
  062f300  addi 1, 1, 176
  062f304  blr
  062f308  lwz 3, 108(9)
  062f30c  cmpwi 7, 3, 0
  062f310  bf 30, 0x62f23c
  062f314  ld 0, 192(1)
  062f318  lfs 1, -32684(30)
  062f31c  ld 27, 128(1)
  062f320  mtlr 0
  062f324  ld 28, 136(1)
  062f328  ld 29, 144(1)
  062f32c  ld 30, 152(1)
  062f330  ld 31, 160(1)
  062f334  lfd 31, 168(1)
  062f338  addi 1, 1, 176
  062f33c  blr
  062f340  cmpwi 7, 31, 0
  062f344  bt 30, 0x62f410
  062f348  cmpwi 7, 27, 0
  062f34c  bt 30, 0x62f424
  062f350  clrldi 11, 28, 32
  062f354  lfs 12, -32428(30)
  062f358  addi 9, 28, 16
  062f35c  lwz 0, 8(11)
  062f360  slwi 0, 0, 2
  062f364  add 9, 9, 0
  062f368  clrldi 9, 9, 32
  062f36c  ld 0, 192(1)
  062f370  ld 27, 128(1)
  062f374  ld 28, 136(1)
  062f378  mtlr 0
  062f37c  ld 29, 144(1)
  062f380  ld 30, 152(1)
  062f384  lfs 13, 4(9)
  062f388  lfs 0, 0(9)
  062f38c  fadds 0, 0, 13
  062f390  ld 31, 160(1)
  062f394  lfd 31, 168(1)
  062f398  addi 1, 1, 176
  062f39c  fmuls 1, 0, 12
  062f3a0  blr
  062f3a4  clrldi 9, 28, 32
  062f3a8  li 4, 1
  062f3ac  lfs 1, 16(9)
  062f3b0  bl 0x5dd718
  062f3b4  nop
  062f3b8  lfs 0, -31872(30)
  062f3bc  fmuls 1, 1, 0
  062f3c0  b 0x62f2a8
  062f3c4  clrldi 9, 28, 32
  062f3c8  li 4, 1
  062f3cc  lwz 11, 8(9)
  062f3d0  slwi 11, 11, 2
  062f3d4  add 11, 11, 28
  062f3d8  clrldi 11, 11, 32
  062f3dc  lfs 1, 16(11)
  062f3e0  bl 0x5dd718
  062f3e4  nop
  062f3e8  lfs 0, -31872(30)
  062f3ec  fmuls 1, 1, 0
  062f3f0  b 0x62f2a8
  062f3f4  lwz 4, -32628(30)
  062f3f8  li 5, 1265
  062f3fc  lwz 3, -31520(30)
  062f400  bl 0x61948c
  062f404  nop
  062f408  lfs 1, -32684(30)
  062f40c  b 0x62f2a8
  062f410  cmpwi 7, 27, 0
  062f414  bt 30, 0x62f488
  062f418  addi 9, 28, 16
  062f41c  lfs 12, -32428(30)
  062f420  b 0x62f368
  062f424  clrldi 29, 28, 32
  062f428  addi 28, 28, 16
  062f42c  li 4, 1
  062f430  lwz 9, 8(29)
  062f434  slwi 9, 9, 2
  062f438  add 9, 9, 28
  062f43c  clrldi 9, 9, 32
  062f440  lfs 1, 0(9)
  062f444  bl 0x5dd718
  062f448  nop
  062f44c  lwz 9, 8(29)
  062f450  fmr 31, 1
  062f454  slwi 9, 9, 2
  062f458  li 4, 1
  062f45c  add 9, 9, 28
  062f460  clrldi 9, 9, 32
  062f464  lfs 1, 4(9)
  062f468  bl 0x5dd718
  062f46c  nop
  062f470  lfs 0, -31872(30)
  062f474  fmuls 1, 1, 0
  062f478  lfs 13, -32428(30)
  062f47c  fmadds 31, 31, 0, 1
  062f480  fmuls 1, 31, 13
  062f484  b 0x62f2a8
  062f488  addi 29, 28, 16
  062f48c  li 4, 1
  062f490  clrldi 29, 29, 32
  062f494  lfs 1, 0(29)
  062f498  bl 0x5dd718
  062f49c  nop
  062f4a0  li 4, 1
  062f4a4  fmr 31, 1
  062f4a8  lfs 1, 4(29)
  062f4ac  b 0x62f468

snd_SynthInit:   # 0x62f4b8, 0x6e8 bytes
  062f4b8  mfcr 12
  062f4bc  stdu 1, -624(1)
  062f4c0  std 30, 608(1)
  062f4c4  lwz 30, -29432(2)
  062f4c8  li 9, 0
  062f4cc  std 29, 600(1)
  062f4d0  mr 29, 4
  062f4d4  std 25, 568(1)
  062f4d8  ori 9, 9, 48000
  062f4dc  lwz 11, -32360(30)
  062f4e0  li 8, 256
  062f4e4  lwz 10, -32268(30)
  062f4e8  li 6, 1
  062f4ec  std 24, 560(1)
  062f4f0  std 26, 576(1)
  062f4f4  std 27, 584(1)
  062f4f8  std 28, 592(1)
  062f4fc  li 26, 8
  062f500  lwz 7, -31516(30)
  062f504  li 27, 3
  062f508  li 28, 0
  062f50c  li 24, 6
  062f510  std 31, 616(1)
  062f514  std 23, 552(1)
  062f518  stw 7, 160(1)
  062f51c  mr 31, 3
  062f520  stw 12, 632(1)
  062f524  mflr 0
  062f528  li 12, 0
  062f52c  std 0, 640(1)
  062f530  rlwinm 0, 3, 0, 30, 30
  062f534  lwz 25, 48(4)
  062f538  lwz 5, 44(29)
  062f53c  cmpwi 4, 0, 0
  062f540  lwz 0, 32(4)
  062f544  stw 9, 128(1)
  062f548  stw 0, 0(11)
  062f54c  li 0, 10
  062f550  li 9, 4096
  062f554  stw 0, 132(1)
  062f558  li 0, 32
  062f55c  stw 9, 136(1)
  062f560  stw 0, 200(1)
  062f564  li 4, 1
  062f568  li 0, -1
  062f56c  lis 9, 1
  062f570  stw 3, 0(10)
  062f574  stw 6, 184(1)
  062f578  stw 8, 220(1)
  062f57c  stw 0, 224(1)
  062f580  stw 9, 232(1)
  062f584  stw 4, 236(1)
  062f588  stw 24, 112(1)
  062f58c  stw 12, 116(1)
  062f590  stw 26, 120(1)
  062f594  clrlwi 10, 25, 28
  062f598  stw 8, 124(1)
  062f59c  stw 12, 140(1)
  062f5a0  stw 12, 144(1)
  062f5a4  stw 12, 168(1)
  062f5a8  stw 27, 172(1)
  062f5ac  stw 6, 176(1)
  062f5b0  stw 12, 180(1)
  062f5b4  stw 28, 188(1)
  062f5b8  stw 28, 192(1)
  062f5bc  stw 27, 196(1)
  062f5c0  stw 12, 212(1)
  062f5c4  stw 12, 216(1)
  062f5c8  stw 26, 228(1)
  062f5cc  stw 5, 164(1)
  062f5d0  bt 18, 0x62f5d8
  062f5d4  stw 27, 212(1)
  062f5d8  cmpwi 7, 25, 0
  062f5dc  bt 28, 0x62f85c
  062f5e0  lwz 0, -31512(30)
  062f5e4  cmpwi 7, 10, 0
  062f5e8  lwz 9, 36(29)
  062f5ec  stw 0, 168(1)
  062f5f0  li 0, 13
  062f5f4  lwz 11, 0(29)
  062f5f8  stw 28, 192(1)
  062f5fc  stw 0, 184(1)
  062f600  li 0, 20480
  062f604  stw 12, 176(1)
  062f608  stw 9, 180(1)
  062f60c  stw 11, 132(1)
  062f610  stw 0, 136(1)
  062f614  stw 26, 112(1)
  062f618  stw 28, 188(1)
  062f61c  bt 30, 0x62f624
  062f620  stw 10, 116(1)
  062f624  rlwinm 0, 31, 0, 20, 20
  062f628  cmpwi 7, 0, 0
  062f62c  bt 30, 0x62f634
  062f630  stw 24, 112(1)
  062f634  bt 18, 0x62f644
  062f638  lwz 0, 140(1)
  062f63c  ori 0, 0, 8
  062f640  stw 0, 140(1)
  062f644  rlwinm 0, 31, 0, 24, 24
  062f648  cmpwi 7, 0, 0
  062f64c  bt 30, 0x62f65c
  062f650  lwz 0, 140(1)
  062f654  ori 0, 0, 16
  062f658  stw 0, 140(1)
  062f65c  rlwinm 0, 31, 0, 23, 23
  062f660  cmpwi 7, 0, 0
  062f664  bt 30, 0x62f674
  062f668  lwz 0, 140(1)
  062f66c  ori 0, 0, 64
  062f670  stw 0, 140(1)
  062f674  rlwinm 0, 31, 0, 22, 22
  062f678  cmpwi 7, 0, 0
  062f67c  bt 30, 0x62f68c
  062f680  lwz 0, 140(1)
  062f684  ori 0, 0, 32
  062f688  stw 0, 140(1)
  062f68c  lwz 0, 4(29)
  062f690  addi 4, 1, 256
  062f694  clrldi 3, 0, 32
  062f698  stw 0, 216(1)
  062f69c  bl 0x64fa44
  062f6a0  ld 2, 40(1)
  062f6a4  cmpwi 7, 3, 0
  062f6a8  bf 30, 0x62f810
  062f6ac  lwz 4, 256(1)
  062f6b0  cmpwi 7, 4, 1
  062f6b4  bf 29, 0x62fa9c
  062f6b8  lbz 7, 8(29)
  062f6bc  extsb 5, 7
  062f6c0  cmpwi 7, 5, -1
  062f6c4  bt 30, 0x62f6e0
  062f6c8  extsw 4, 4
  062f6cc  lwz 3, -31508(30)
  062f6d0  extsw 5, 5
  062f6d4  bl 0x61948c
  062f6d8  nop
  062f6dc  lbz 7, 8(29)
  062f6e0  lwz 0, 16(29)
  062f6e4  lwz 9, 12(29)
  062f6e8  lwz 11, 28(29)
  062f6ec  lwz 10, 24(29)
  062f6f0  add 9, 9, 0
  062f6f4  slwi 11, 11, 1
  062f6f8  lwz 0, 20(29)
  062f6fc  lwz 8, 32(29)
  062f700  add 9, 9, 11
  062f704  lbz 11, 9(29)
  062f708  add 0, 0, 10
  062f70c  addi 9, 9, 18
  062f710  add 0, 0, 8
  062f714  extsb 10, 7
  062f718  add 0, 0, 9
  062f71c  extsb 11, 11
  062f720  stw 10, 224(1)
  062f724  stw 11, 228(1)
  062f728  stw 0, 220(1)
  062f72c  bt 18, 0x62f854
  062f730  lwz 4, 236(1)
  062f734  ori 4, 4, 4
  062f738  stw 4, 236(1)
  062f73c  ori 0, 4, 2
  062f740  addi 3, 1, 112
  062f744  stw 0, 236(1)
  062f748  bl 0x642a50
  062f74c  nop
  062f750  cmpwi 7, 3, 0
  062f754  bt 28, 0x62f810
  062f758  bl 0x640d14
  062f75c  nop
  062f760  cmpwi 7, 3, 6
  062f764  mr 4, 3
  062f768  bt 30, 0x62fa84
  062f76c  cmpwi 7, 3, 8
  062f770  bt 30, 0x62faa4
  062f774  cmpwi 7, 3, 2
  062f778  bt 30, 0x62f86c
  062f77c  lwz 3, -31500(30)
  062f780  clrldi 4, 4, 32
  062f784  bl 0x61948c
  062f788  nop
  062f78c  ld 0, 640(1)
  062f790  lwz 12, 632(1)
  062f794  li 3, 0
  062f798  ld 23, 552(1)
  062f79c  ld 24, 560(1)
  062f7a0  mtlr 0
  062f7a4  extsw 3, 3
  062f7a8  ld 25, 568(1)
  062f7ac  ld 26, 576(1)
  062f7b0  mtocrf 8, 12
  062f7b4  ld 27, 584(1)
  062f7b8  ld 28, 592(1)
  062f7bc  ld 29, 600(1)
  062f7c0  ld 30, 608(1)
  062f7c4  ld 31, 616(1)
  062f7c8  addi 1, 1, 624
  062f7cc  blr
  062f7d0  lwz 29, -32704(30)
  062f7d4  slwi 3, 0, 2
  062f7d8  lwz 9, 0(28)
  062f7dc  li 4, 0
  062f7e0  extsw 3, 3
  062f7e4  stw 0, 20(29)
  062f7e8  stw 31, 16(29)
  062f7ec  lwz 0, 0(9)
  062f7f0  std 2, 40(1)
  062f7f4  mtctr 0
  062f7f8  lwz 2, 4(9)
  062f7fc  bctrl
  062f800  ld 2, 40(1)
  062f804  cmpwi 7, 3, 0
  062f808  stw 3, 12(29)
  062f80c  bf 30, 0x62f950
  062f810  li 3, 0
  062f814  ld 0, 640(1)
  062f818  extsw 3, 3
  062f81c  lwz 12, 632(1)
  062f820  ld 23, 552(1)
  062f824  mtlr 0
  062f828  ld 24, 560(1)
  062f82c  mtocrf 8, 12
  062f830  ld 25, 568(1)
  062f834  ld 26, 576(1)
  062f838  ld 27, 584(1)
  062f83c  ld 28, 592(1)
  062f840  ld 29, 600(1)
  062f844  ld 30, 608(1)
  062f848  ld 31, 616(1)
  062f84c  addi 1, 1, 624
  062f850  blr
  062f854  lwz 4, 236(1)
  062f858  b 0x62f73c
  062f85c  lwz 0, 212(1)
  062f860  ori 0, 0, 4
  062f864  stw 0, 212(1)
  062f868  b 0x62f5e0
  062f86c  lwz 9, -32356(30)
  062f870  li 0, 0
  062f874  lwz 11, -31504(30)
  062f878  stw 0, 0(9)
  062f87c  stw 0, 0(11)
  062f880  lwz 3, -31496(30)
  062f884  li 4, 0
  062f888  bl 0x630554
  062f88c  nop
  062f890  lwz 9, -32484(30)
  062f894  cmpwi 7, 3, -1
  062f898  stw 3, 0(9)
  062f89c  bt 30, 0x62f810
  062f8a0  li 9, 8
  062f8a4  lwz 11, -32724(30)
  062f8a8  li 31, 0
  062f8ac  li 0, -1
  062f8b0  mtctr 9
  062f8b4  clrldi 9, 11, 32
  062f8b8  addi 11, 11, 16
  062f8bc  stw 0, 8(9)
  062f8c0  stw 31, 0(9)
  062f8c4  stw 31, 4(9)
  062f8c8  stb 31, 12(9)
  062f8cc  stb 31, 13(9)
  062f8d0  bdnz 0x62f8b4
  062f8d4  bl 0x62fd54
  062f8d8  nop
  062f8dc  lwz 5, 12(29)
  062f8e0  lwz 8, 16(29)
  062f8e4  lwz 6, 28(29)
  062f8e8  lwz 10, 20(29)
  062f8ec  add 0, 5, 8
  062f8f0  lwz 7, 24(29)
  062f8f4  add 0, 6, 0
  062f8f8  lwz 11, -31716(30)
  062f8fc  add 9, 10, 7
  062f900  lwz 27, -31740(30)
  062f904  lwz 25, -31764(30)
  062f908  add 9, 9, 0
  062f90c  lwz 24, -31788(30)
  062f910  lwz 23, -31832(30)
  062f914  lwz 26, -32380(30)
  062f918  cmpwi 7, 9, 0
  062f91c  stw 5, 0(11)
  062f920  stw 8, 0(27)
  062f924  stw 10, 0(25)
  062f928  stw 7, 0(24)
  062f92c  stw 6, 0(23)
  062f930  stw 9, 0(26)
  062f934  bt 30, 0x62fabc
  062f938  cmpwi 7, 5, 0
  062f93c  bf 30, 0x62fad0
  062f940  lwz 28, -32664(30)
  062f944  lwz 0, 0(27)
  062f948  cmpwi 7, 0, 0
  062f94c  bf 30, 0x62f7d0
  062f950  lwz 0, 0(25)
  062f954  cmpwi 7, 0, 0
  062f958  bf 30, 0x62fb18
  062f95c  lwz 0, 0(24)
  062f960  cmpwi 7, 0, 0
  062f964  bf 30, 0x62fb5c
  062f968  lwz 0, 0(23)
  062f96c  cmpwi 7, 0, 0
  062f970  bt 30, 0x62f9b4
  062f974  lwz 29, -32704(30)
  062f978  slwi 3, 0, 2
  062f97c  lwz 9, 0(28)
  062f980  li 4, 0
  062f984  extsw 3, 3
  062f988  stw 31, 52(29)
  062f98c  stw 0, 56(29)
  062f990  lwz 0, 0(9)
  062f994  std 2, 40(1)
  062f998  mtctr 0
  062f99c  lwz 2, 4(9)
  062f9a0  bctrl
  062f9a4  ld 2, 40(1)
  062f9a8  cmpwi 7, 3, 0
  062f9ac  stw 3, 48(29)
  062f9b0  bt 30, 0x62f810
  062f9b4  lwz 3, 0(26)
  062f9b8  li 4, 0
  062f9bc  lwz 9, 0(28)
  062f9c0  mulli 3, 3, 116
  062f9c4  lwz 0, 0(9)
  062f9c8  extsw 3, 3
  062f9cc  std 2, 40(1)
  062f9d0  mtctr 0
  062f9d4  lwz 2, 4(9)
  062f9d8  bctrl
  062f9dc  ld 2, 40(1)
  062f9e0  lwz 31, -32488(30)
  062f9e4  cmpwi 7, 3, 0
  062f9e8  stw 3, 0(31)
  062f9ec  bt 30, 0x62f810
  062f9f0  lwz 5, 0(26)
  062f9f4  clrldi 3, 3, 32
  062f9f8  li 4, 0
  062f9fc  mulli 5, 5, 116
  062fa00  rlwinm 5, 5, 0, 0, 29
  062fa04  bl 0x5d0140
  062fa08  nop
  062fa0c  lwz 3, 0(26)
  062fa10  cmpwi 7, 3, 0
  062fa14  bt 30, 0x62fa40
  062fa18  clrldi 3, 3, 32
  062fa1c  li 11, 0
  062fa20  li 0, -16
  062fa24  mtctr 3
  062fa28  lwz 9, 0(31)
  062fa2c  add 9, 11, 9
  062fa30  addi 11, 11, 116
  062fa34  clrldi 9, 9, 32
  062fa38  stb 0, 105(9)
  062fa3c  bdnz 0x62fa28
  062fa40  ld 0, 640(1)
  062fa44  li 3, 1
  062fa48  lwz 12, 632(1)
  062fa4c  extsw 3, 3
  062fa50  ld 23, 552(1)
  062fa54  ld 24, 560(1)
  062fa58  mtlr 0
  062fa5c  ld 25, 568(1)
  062fa60  mtocrf 8, 12
  062fa64  ld 26, 576(1)
  062fa68  ld 27, 584(1)
  062fa6c  ld 28, 592(1)
  062fa70  ld 29, 600(1)
  062fa74  ld 30, 608(1)
  062fa78  ld 31, 616(1)
  062fa7c  addi 1, 1, 624
  062fa80  blr
  062fa84  lwz 9, -32356(30)
  062fa88  li 0, 3
  062fa8c  lwz 11, -31504(30)
  062fa90  stw 0, 0(9)
  062fa94  stw 0, 0(11)
  062fa98  b 0x62f880
  062fa9c  lbz 7, 8(29)
  062faa0  b 0x62f6e0
  062faa4  lwz 9, -32356(30)
  062faa8  li 0, 4
  062faac  lwz 11, -31504(30)
  062fab0  stw 0, 0(9)
  062fab4  stw 0, 0(11)
  062fab8  b 0x62f880
  062fabc  lwz 3, -31492(30)
  062fac0  bl 0x61948c
  062fac4  nop
  062fac8  li 3, 0
  062facc  b 0x62f814
  062fad0  lwz 28, -32664(30)
  062fad4  slwi 3, 5, 2
  062fad8  lwz 29, -32704(30)
  062fadc  li 4, 0
  062fae0  extsw 3, 3
  062fae4  lwz 9, 0(28)
  062fae8  stw 5, 8(29)
  062faec  stw 31, 4(29)
  062faf0  lwz 0, 0(9)
  062faf4  std 2, 40(1)
  062faf8  mtctr 0
  062fafc  lwz 2, 4(9)
  062fb00  bctrl
  062fb04  ld 2, 40(1)
  062fb08  cmpwi 7, 3, 0
  062fb0c  stw 3, 0(29)
  062fb10  bf 30, 0x62f944
  062fb14  b 0x62f810
  062fb18  lwz 29, -32704(30)
  062fb1c  slwi 3, 0, 2
  062fb20  lwz 9, 0(28)
  062fb24  li 4, 0
  062fb28  extsw 3, 3
  062fb2c  stw 0, 32(29)
  062fb30  stw 31, 28(29)
  062fb34  lwz 0, 0(9)
  062fb38  std 2, 40(1)
  062fb3c  mtctr 0
  062fb40  lwz 2, 4(9)
  062fb44  bctrl
  062fb48  ld 2, 40(1)
  062fb4c  cmpwi 7, 3, 0
  062fb50  stw 3, 24(29)
  062fb54  bf 30, 0x62f95c
  062fb58  b 0x62f810
  062fb5c  lwz 29, -32704(30)
  062fb60  slwi 3, 0, 2
  062fb64  lwz 9, 0(28)
  062fb68  li 4, 0
  062fb6c  extsw 3, 3
  062fb70  stw 0, 44(29)
  062fb74  stw 31, 40(29)
  062fb78  lwz 0, 0(9)
  062fb7c  std 2, 40(1)
  062fb80  mtctr 0
  062fb84  lwz 2, 4(9)
  062fb88  bctrl
  062fb8c  ld 2, 40(1)
  062fb90  cmpwi 7, 3, 0
  062fb94  stw 3, 36(29)
  062fb98  bf 30, 0x62f968
  062fb9c  b 0x62f810

FUN_0062fba0:   # 0x62fba0, 0x8c bytes
  062fba0  cmpwi 7, 3, 1
  062fba4  std 30, -16(1)
  062fba8  lwz 30, -29432(2)
  062fbac  bt 30, 0x62fbe4
  062fbb0  cmpwi 7, 3, 0
  062fbb4  bf 30, 0x62fbdc
  062fbb8  xoris 0, 4, 65535
  062fbbc  cmpwi 7, 0, -1
  062fbc0  bf 30, 0x62fbdc
  062fbc4  lwz 11, -31516(30)
  062fbc8  lwz 10, -31516(30)
  062fbcc  lwz 9, -32668(30)
  062fbd0  lwz 0, -31488(30)
  062fbd4  stw 0, 0(11)
  062fbd8  stw 9, 0(10)
  062fbdc  ld 30, -16(1)
  062fbe0  blr
  062fbe4  xoris 0, 4, 65535
  062fbe8  cmpwi 7, 0, -1
  062fbec  bf 30, 0x62fbdc
  062fbf0  lwz 9, -31516(30)
  062fbf4  li 8, 5
  062fbf8  lwz 0, -31488(30)
  062fbfc  li 11, 0
  062fc00  lwz 10, -32704(30)
  062fc04  mtctr 8
  062fc08  stw 0, 0(9)
  062fc0c  clrldi 9, 10, 32
  062fc10  addi 10, 10, 12
  062fc14  stw 11, 8(9)
  062fc18  stw 11, 0(9)
  062fc1c  stw 11, 4(9)
  062fc20  bdnz 0x62fc0c
  062fc24  ld 30, -16(1)
  062fc28  blr

FUN_0062fc2c:   # 0x62fc2c, 0x10 bytes
  062fc2c  li 4, -1
  062fc30  li 3, 0
  062fc34  clrldi 4, 4, 48
  062fc38  b 0x62fba0

FUN_0062fc3c:   # 0x62fc3c, 0x10 bytes
  062fc3c  li 4, -1
  062fc40  li 3, 1
  062fc44  clrldi 4, 4, 48
  062fc48  b 0x62fba0

FUN_0062fc4c:   # 0x62fc4c, 0x54 bytes
  062fc4c  stdu 1, -128(1)
  062fc50  mflr 0
  062fc54  std 30, 112(1)
  062fc58  lwz 30, -29428(2)
  062fc5c  std 0, 144(1)
  062fc60  lwz 9, -32768(30)
  062fc64  lwz 3, 0(9)
  062fc68  extsw 3, 3
  062fc6c  bl 0x63042c
  062fc70  nop
  062fc74  ld 30, 112(1)
  062fc78  srawi 0, 3, 31
  062fc7c  xor 3, 0, 3
  062fc80  sub 3, 3, 0
  062fc84  ld 0, 144(1)
  062fc88  addi 1, 1, 128
  062fc8c  addi 3, 3, -1
  062fc90  mtlr 0
  062fc94  srwi 3, 3, 31
  062fc98  extsw 3, 3
  062fc9c  blr

FUN_0062fca0:   # 0x62fca0, 0x3c bytes
  062fca0  stdu 1, -128(1)
  062fca4  mflr 0
  062fca8  std 30, 112(1)
  062fcac  lwz 30, -29428(2)
  062fcb0  std 0, 144(1)
  062fcb4  lwz 9, -32768(30)
  062fcb8  lwz 3, 0(9)
  062fcbc  extsw 3, 3
  062fcc0  bl 0x630388
  062fcc4  nop
  062fcc8  ld 0, 144(1)
  062fccc  ld 30, 112(1)
  062fcd0  mtlr 0
  062fcd4  addi 1, 1, 128
  062fcd8  blr

FUN_0062fcdc:   # 0x62fcdc, 0x3c bytes
  062fcdc  stdu 1, -128(1)
  062fce0  mflr 0
  062fce4  std 30, 112(1)
  062fce8  lwz 30, -29428(2)
  062fcec  std 0, 144(1)
  062fcf0  lwz 9, -32768(30)
  062fcf4  lwz 3, 0(9)
  062fcf8  extsw 3, 3
  062fcfc  bl 0x6303cc
  062fd00  nop
  062fd04  ld 0, 144(1)
  062fd08  ld 30, 112(1)
  062fd0c  mtlr 0
  062fd10  addi 1, 1, 128
  062fd14  blr

FUN_0062fd18:   # 0x62fd18, 0x3c bytes
  062fd18  stdu 1, -128(1)
  062fd1c  mflr 0
  062fd20  std 30, 112(1)
  062fd24  lwz 30, -29428(2)
  062fd28  std 0, 144(1)
  062fd2c  lwz 9, -32768(30)
  062fd30  lwz 3, 0(9)
  062fd34  extsw 3, 3
  062fd38  bl 0x63049c
  062fd3c  nop
  062fd40  ld 0, 144(1)
  062fd44  ld 30, 112(1)
  062fd48  mtlr 0
  062fd4c  addi 1, 1, 128
  062fd50  blr

FUN_0062fd54:   # 0x62fd54, 0x40 bytes
  062fd54  stdu 1, -128(1)
  062fd58  mflr 0
  062fd5c  std 30, 112(1)
  062fd60  lwz 30, -29428(2)
  062fd64  li 4, 0
  062fd68  std 0, 144(1)
  062fd6c  lwz 3, -32764(30)
  062fd70  bl 0x630554
  062fd74  nop
  062fd78  ld 0, 144(1)
  062fd7c  lwz 9, -32768(30)
  062fd80  mtlr 0
  062fd84  ld 30, 112(1)
  062fd88  addi 1, 1, 128
  062fd8c  stw 3, 0(9)
  062fd90  blr

FUN_0062fd94:   # 0x62fd94, 0x278 bytes
  062fd94  cmpwi 6, 5, 14
  062fd98  li 0, 4
  062fd9c  std 30, -16(1)
  062fda0  mr 12, 9
  062fda4  lwz 30, -29424(2)
  062fda8  stw 0, 0(9)
  062fdac  addi 10, 9, 4
  062fdb0  bf 25, 0x62feb0
  062fdb4  clrlwi 0, 8, 31
  062fdb8  lfs 10, -32768(30)
  062fdbc  li 9, 2
  062fdc0  stfs 10, 0(10)
  062fdc4  cmpwi 7, 0, 0
  062fdc8  stw 9, 12(10)
  062fdcc  bf 30, 0x62fecc
  062fdd0  slwi 9, 3, 2
  062fdd4  lwz 11, -32760(30)
  062fdd8  lfs 9, -32756(30)
  062fddc  li 0, 0
  062fde0  extsw 9, 9
  062fde4  stw 0, 4(10)
  062fde8  li 0, 2
  062fdec  lfsx 0, 11, 9
  062fdf0  fmuls 0, 0, 9
  062fdf4  stfs 0, 8(10)
  062fdf8  addi 10, 12, 20
  062fdfc  stw 0, 12(10)
  062fe00  bt 25, 0x62ff00
  062fe04  addi 0, 5, 1
  062fe08  lwz 11, -32728(30)
  062fe0c  slwi 9, 4, 2
  062fe10  lfs 12, -32736(30)
  062fe14  extsw 0, 0
  062fe18  lfs 11, -32744(30)
  062fe1c  extsw 9, 9
  062fe20  std 0, -32(1)
  062fe24  lfd 0, -32(1)
  062fe28  fcfid 0, 0
  062fe2c  stfs 11, 4(10)
  062fe30  frsp 13, 0
  062fe34  lfsx 0, 11, 9
  062fe38  fmuls 0, 0, 9
  062fe3c  fmuls 13, 13, 12
  062fe40  stfs 0, 8(10)
  062fe44  stfs 13, 0(10)
  062fe48  addi 10, 12, 36
  062fe4c  cmpwi 7, 6, 127
  062fe50  li 5, 0
  062fe54  li 0, 2
  062fe58  stfs 13, 0(10)
  062fe5c  stw 0, 12(10)
  062fe60  stw 5, 4(10)
  062fe64  bf- 30, 0x62ff58
  062fe68  stfs 10, 8(10)
  062fe6c  rlwinm 0, 8, 0, 28, 28
  062fe70  addi 11, 12, 52
  062fe74  cmpwi 7, 0, 0
  062fe78  li 10, 0
  062fe7c  li 0, 4
  062fe80  stw 10, 0(11)
  062fe84  stw 0, 12(11)
  062fe88  bf 30, 0x62ff30
  062fe8c  slwi 0, 7, 4
  062fe90  lwz 9, -32724(30)
  062fe94  ld 30, -16(1)
  062fe98  extsw 0, 0
  062fe9c  stw 10, 4(11)
  062fea0  lfsx 0, 9, 0
  062fea4  fmuls 0, 0, 9
  062fea8  stfs 0, 8(11)
  062feac  blr
  062feb0  clrlwi 0, 8, 31
  062feb4  lfs 10, -32768(30)
  062feb8  li 9, 1
  062febc  stfs 10, 0(10)
  062fec0  cmpwi 7, 0, 0
  062fec4  stw 9, 12(10)
  062fec8  bt 30, 0x62fdd0
  062fecc  slwi 0, 3, 2
  062fed0  lwz 9, -32748(30)
  062fed4  lfs 9, -32756(30)
  062fed8  extsw 0, 0
  062fedc  lfs 13, -32744(30)
  062fee0  stfs 13, 4(10)
  062fee4  lfsx 0, 9, 0
  062fee8  li 0, 2
  062feec  fmuls 0, 0, 9
  062fef0  stfs 0, 8(10)
  062fef4  addi 10, 12, 20
  062fef8  stw 0, 12(10)
  062fefc  bf 25, 0x62fe04
  062ff00  addi 0, 5, 1
  062ff04  lfs 13, -32736(30)
  062ff08  li 9, 0
  062ff0c  extsw 0, 0
  062ff10  std 0, -32(1)
  062ff14  lfd 12, -32(1)
  062ff18  fcfid 12, 12
  062ff1c  stw 9, 8(10)
  062ff20  stfs 10, 0(10)
  062ff24  frsp 0, 12
  062ff28  fmuls 13, 0, 13
  062ff2c  b 0x62fe48
  062ff30  slwi 0, 7, 4
  062ff34  lwz 9, -32720(30)
  062ff38  lfs 13, -32744(30)
  062ff3c  extsw 0, 0
  062ff40  ld 30, -16(1)
  062ff44  stfs 13, 4(11)
  062ff48  lfsx 0, 9, 0
  062ff4c  fmuls 0, 0, 9
  062ff50  stfs 0, 8(11)
  062ff54  blr
  062ff58  rldicl 0, 8, 63, 62
  062ff5c  cmpwi 7, 0, 1
  062ff60  bt 30, 0x62ffc4
  062ff64  cmplwi 7, 0, 1
  062ff68  bt 28, 0x62ff9c
  062ff6c  cmpwi 7, 0, 2
  062ff70  bt 30, 0x62ffec
  062ff74  cmpwi 7, 0, 3
  062ff78  bf 30, 0x62fe6c
  062ff7c  slwi 0, 6, 2
  062ff80  lwz 9, -32760(30)
  062ff84  stfs 10, 0(10)
  062ff88  extsw 0, 0
  062ff8c  lfsx 0, 9, 0
  062ff90  fmuls 0, 0, 9
  062ff94  stfs 0, 8(10)
  062ff98  b 0x62fe6c
  062ff9c  slwi 9, 6, 2
  062ffa0  lwz 11, -32724(30)
  062ffa4  li 0, 4
  062ffa8  extsw 9, 9
  062ffac  stw 5, 0(10)
  062ffb0  stw 0, 12(10)
  062ffb4  lfsx 0, 11, 9
  062ffb8  fmuls 0, 0, 9
  062ffbc  stfs 0, 8(10)
  062ffc0  b 0x62fe6c
  062ffc4  slwi 9, 6, 2
  062ffc8  lwz 11, -32720(30)
  062ffcc  li 0, 4
  062ffd0  extsw 9, 9
  062ffd4  stw 5, 0(10)
  062ffd8  stw 0, 12(10)
  062ffdc  lfsx 0, 11, 9
  062ffe0  fmuls 0, 0, 9
  062ffe4  stfs 0, 8(10)
  062ffe8  b 0x62fe6c
  062ffec  slwi 0, 6, 2
  062fff0  lwz 9, -32748(30)
  062fff4  stfs 10, 0(10)
  062fff8  extsw 0, 0
  062fffc  lfsx 0, 9, 0
  0630000  fmuls 0, 0, 9
  0630004  stfs 0, 8(10)
  0630008  b 0x62fe6c

FUN_0063000c:   # 0x63000c, 0x84 bytes
  063000c  li 0, 0
  0630010  rlwinm 11, 4, 0, 16, 18
  0630014  ori 0, 0, 32768
  0630018  li 9, 0
  063001c  cmpw 7, 11, 0
  0630020  ori 9, 9, 49152
  0630024  mr 6, 4
  0630028  mr 4, 3
  063002c  cmpw 6, 11, 9
  0630030  rldicl 8, 4, 49, 63
  0630034  mr 9, 5
  0630038  bt 30, 0x630080
  063003c  cmpwi 7, 11, 0
  0630040  bt 26, 0x630088
  0630044  bt 30, 0x630078
  0630048  rlwinm 0, 6, 0, 26, 26
  063004c  clrldi 5, 4, 60
  0630050  cmpwi 7, 0, 0
  0630054  clrldi 7, 6, 59
  0630058  rldicl 3, 4, 56, 57
  063005c  clrldi 9, 9, 32
  0630060  rldicl 4, 4, 60, 60
  0630064  rldicl 6, 6, 58, 57
  0630068  bt 30, 0x630070
  063006c  ori 8, 8, 8
  0630070  clrldi 8, 8, 32
  0630074  b 0x62fd94
  0630078  ori 8, 8, 6
  063007c  b 0x630048
  0630080  ori 8, 8, 4
  0630084  b 0x630048
  0630088  ori 8, 8, 2
  063008c  b 0x630048

FUN_00630090:   # 0x630090, 0x20 bytes
  0630090  addi 4, 1, -32
  0630094  mflr 0
  0630098  li 11, 44
  063009c  std 0, 16(1)
  06300a0  sc
  06300a4  ld 0, 16(1)
  06300a8  mtlr 0
  06300ac  blr

FUN_006300b0:   # 0x6300b0, 0x6c bytes
  06300b0  mfcr 12
  06300b4  stdu 1, -128(1)
  06300b8  std 30, 112(1)
  06300bc  lwz 30, -29420(2)
  06300c0  slwi 3, 3, 3
  06300c4  li 4, 1
  06300c8  extsw 3, 3
  06300cc  li 11, 94
  06300d0  stw 12, 136(1)
  06300d4  mflr 0
  06300d8  std 0, 144(1)
  06300dc  lwz 0, -32768(30)
  06300e0  add 3, 3, 0
  06300e4  lwz 3, 4(3)
  06300e8  sc
  06300ec  cmpwi 4, 3, 0
  06300f0  bt 18, 0x630100
  06300f4  lwz 3, -32764(30)
  06300f8  bl 0x61948c
  06300fc  nop
  0630100  ld 0, 144(1)
  0630104  lwz 12, 136(1)
  0630108  ld 30, 112(1)
  063010c  mtlr 0
  0630110  mtocrf 8, 12
  0630114  addi 1, 1, 128
  0630118  blr

FUN_0063011c:   # 0x63011c, 0x6c bytes
  063011c  mfcr 12
  0630120  stdu 1, -128(1)
  0630124  std 30, 112(1)
  0630128  lwz 30, -29420(2)
  063012c  slwi 3, 3, 3
  0630130  li 4, 0
  0630134  extsw 3, 3
  0630138  li 11, 92
  063013c  stw 12, 136(1)
  0630140  mflr 0
  0630144  std 0, 144(1)
  0630148  lwz 0, -32768(30)
  063014c  add 3, 3, 0
  0630150  lwz 3, 4(3)
  0630154  sc
  0630158  cmpwi 4, 3, 0
  063015c  bt 18, 0x63016c
  0630160  lwz 3, -32760(30)
  0630164  bl 0x61948c
  0630168  nop
  063016c  ld 0, 144(1)
  0630170  lwz 12, 136(1)
  0630174  ld 30, 112(1)
  0630178  mtlr 0
  063017c  mtocrf 8, 12
  0630180  addi 1, 1, 128
  0630184  blr

FUN_00630188:   # 0x630188, 0x94 bytes
  0630188  stdu 1, -144(1)
  063018c  mflr 0
  0630190  std 30, 128(1)
  0630194  lwz 30, -29420(2)
  0630198  slwi 3, 3, 3
  063019c  std 29, 120(1)
  06301a0  std 31, 136(1)
  06301a4  extsw 31, 3
  06301a8  std 0, 160(1)
  06301ac  lwz 29, -32768(30)
  06301b0  li 11, 91
  06301b4  add 9, 31, 29
  06301b8  lwzx 0, 29, 31
  06301bc  cmpwi 7, 0, 0
  06301c0  bt 30, 0x6301d8
  06301c4  lwz 3, 4(9)
  06301c8  sc
  06301cc  cmpwi 7, 3, 0
  06301d0  bf 30, 0x6301f4
  06301d4  stwx 3, 29, 31
  06301d8  ld 0, 160(1)
  06301dc  ld 29, 120(1)
  06301e0  ld 30, 128(1)
  06301e4  mtlr 0
  06301e8  ld 31, 136(1)
  06301ec  addi 1, 1, 144
  06301f0  blr
  06301f4  lwz 3, -32756(30)
  06301f8  bl 0x61948c
  06301fc  nop
  0630200  ld 0, 160(1)
  0630204  ld 29, 120(1)
  0630208  ld 30, 128(1)
  063020c  mtlr 0
  0630210  ld 31, 136(1)
  0630214  addi 1, 1, 144
  0630218  blr

FUN_0063021c:   # 0x63021c, 0x16c bytes
  063021c  mfcr 12
  0630220  stdu 1, -192(1)
  0630224  std 30, 176(1)
  0630228  lwz 30, -29420(2)
  063022c  std 28, 160(1)
  0630230  std 27, 152(1)
  0630234  std 29, 168(1)
  0630238  std 31, 184(1)
  063023c  lwz 8, -32752(30)
  0630240  mr 28, 3
  0630244  stw 12, 200(1)
  0630248  mflr 0
  063024c  std 0, 208(1)
  0630250  lwz 0, 0(8)
  0630254  cmpwi 7, 0, 0
  0630258  bf 30, 0x6302f4
  063025c  lwz 10, -32768(30)
  0630260  li 9, 8
  0630264  mr 11, 10
  0630268  mtctr 9
  063026c  clrldi 9, 11, 32
  0630270  addi 11, 11, 8
  0630274  stw 0, 0(9)
  0630278  bdnz 0x63026c
  063027c  li 0, 1
  0630280  stw 0, 0(8)
  0630284  li 0, 8
  0630288  mr 11, 10
  063028c  li 31, 0
  0630290  mtctr 0
  0630294  clrldi 9, 11, 32
  0630298  addi 11, 11, 8
  063029c  lwz 10, 0(9)
  06302a0  cmpwi 7, 10, 0
  06302a4  bt 30, 0x6302fc
  06302a8  addi 31, 31, 1
  06302ac  bdnz 0x630294
  06302b0  lwz 3, -32748(30)
  06302b4  clrldi 4, 28, 32
  06302b8  li 31, -1
  06302bc  bl 0x61948c
  06302c0  nop
  06302c4  ld 0, 208(1)
  06302c8  lwz 12, 200(1)
  06302cc  extsw 3, 31
  06302d0  ld 27, 152(1)
  06302d4  ld 28, 160(1)
  06302d8  mtlr 0
  06302dc  ld 29, 168(1)
  06302e0  mtocrf 8, 12
  06302e4  ld 30, 176(1)
  06302e8  ld 31, 184(1)
  06302ec  addi 1, 1, 192
  06302f0  blr
  06302f4  lwz 10, -32768(30)
  06302f8  b 0x630284
  06302fc  slwi 29, 31, 3
  0630300  lwz 27, -32768(30)
  0630304  li 11, 0
  0630308  clrldi 3, 29, 32
  063030c  li 0, 2
  0630310  add 3, 3, 27
  0630314  li 9, 512
  0630318  stw 11, 128(1)
  063031c  std 11, 120(1)
  0630320  stw 0, 112(1)
  0630324  stw 9, 116(1)
  0630328  stb 10, 136(1)
  063032c  addi 3, 3, 4
  0630330  addi 4, 1, 112
  0630334  li 5, 0
  0630338  li 6, 1
  063033c  li 11, 90
  0630340  sc
  0630344  cmpwi 4, 3, 0
  0630348  bf- 18, 0x6302b0
  063034c  extsw 9, 29
  0630350  lwz 12, 200(1)
  0630354  li 0, 1
  0630358  ld 28, 160(1)
  063035c  extsw 3, 31
  0630360  ld 29, 168(1)
  0630364  ld 30, 176(1)
  0630368  mtocrf 8, 12
  063036c  ld 31, 184(1)
  0630370  stwx 0, 27, 9
  0630374  ld 0, 208(1)
  0630378  ld 27, 152(1)
  063037c  addi 1, 1, 192
  0630380  mtlr 0
  0630384  blr

FUN_00630388:   # 0x630388, 0x44 bytes
  0630388  stdu 1, -128(1)
  063038c  mflr 0
  0630390  std 30, 112(1)
  0630394  lwz 30, -29420(2)
  0630398  slwi 3, 3, 5
  063039c  std 0, 144(1)
  06303a0  lwz 0, -32744(30)
  06303a4  add 3, 3, 0
  06303a8  addi 3, 3, 8
  06303ac  clrldi 3, 3, 32
  06303b0  bl 0x6504e4
  06303b4  ld 2, 40(1)
  06303b8  ld 0, 144(1)
  06303bc  ld 30, 112(1)
  06303c0  mtlr 0
  06303c4  addi 1, 1, 128
  06303c8  blr

FUN_006303cc:   # 0x6303cc, 0x60 bytes
  06303cc  stdu 1, -128(1)
  06303d0  mflr 0
  06303d4  std 30, 112(1)
  06303d8  lwz 30, -29420(2)
  06303dc  slwi 3, 3, 5
  06303e0  std 0, 144(1)
  06303e4  li 4, 0
  06303e8  lwz 0, -32744(30)
  06303ec  add 3, 3, 0
  06303f0  addi 3, 3, 8
  06303f4  clrldi 3, 3, 32
  06303f8  bl 0x6504c4
  06303fc  ld 2, 40(1)
  0630400  cmpwi 7, 3, 0
  0630404  extsw 4, 3
  0630408  bt 30, 0x630418
  063040c  lwz 3, -32740(30)
  0630410  bl 0x61948c
  0630414  nop
  0630418  ld 0, 144(1)
  063041c  ld 30, 112(1)
  0630420  addi 1, 1, 128
  0630424  mtlr 0
  0630428  blr

FUN_0063042c:   # 0x63042c, 0x70 bytes
  063042c  stdu 1, -128(1)
  0630430  mflr 0
  0630434  std 30, 112(1)
  0630438  lwz 30, -29420(2)
  063043c  slwi 3, 3, 5
  0630440  std 0, 144(1)
  0630444  lwz 0, -32744(30)
  0630448  add 3, 3, 0
  063044c  addi 3, 3, 8
  0630450  clrldi 3, 3, 32
  0630454  bl 0x650724
  0630458  ld 2, 40(1)
  063045c  cmpwi 7, 3, 0
  0630460  bf 30, 0x63047c
  0630464  ld 0, 144(1)
  0630468  extsw 3, 3
  063046c  ld 30, 112(1)
  0630470  addi 1, 1, 128
  0630474  mtlr 0
  0630478  blr
  063047c  lis 3, -32767
  0630480  ld 0, 144(1)
  0630484  ld 30, 112(1)
  0630488  addi 1, 1, 128
  063048c  ori 3, 3, 10
  0630490  mtlr 0
  0630494  extsw 3, 3
  0630498  blr

FUN_0063049c:   # 0x63049c, 0xb8 bytes
  063049c  stdu 1, -144(1)
  06304a0  mflr 0
  06304a4  std 30, 128(1)
  06304a8  lwz 30, -29420(2)
  06304ac  slwi 9, 3, 5
  06304b0  std 29, 120(1)
  06304b4  std 31, 136(1)
  06304b8  extsw 31, 9
  06304bc  std 0, 160(1)
  06304c0  lwz 29, -32744(30)
  06304c4  lwzx 0, 29, 31
  06304c8  cmpwi 7, 0, 0
  06304cc  bf 30, 0x6304ec
  06304d0  ld 0, 160(1)
  06304d4  ld 29, 120(1)
  06304d8  ld 30, 128(1)
  06304dc  mtlr 0
  06304e0  ld 31, 136(1)
  06304e4  addi 1, 1, 144
  06304e8  blr
  06304ec  lwz 3, -32744(30)
  06304f0  add 3, 9, 3
  06304f4  addi 3, 3, 8
  06304f8  clrldi 3, 3, 32
  06304fc  bl 0x650784
  0630500  ld 2, 40(1)
  0630504  cmpwi 7, 3, 0
  0630508  bf 30, 0x63052c
  063050c  ld 0, 160(1)
  0630510  stwx 3, 29, 31
  0630514  ld 30, 128(1)
  0630518  mtlr 0
  063051c  ld 29, 120(1)
  0630520  ld 31, 136(1)
  0630524  addi 1, 1, 144
  0630528  blr
  063052c  lwz 3, -32736(30)
  0630530  bl 0x61948c
  0630534  nop
  0630538  ld 0, 160(1)
  063053c  ld 29, 120(1)
  0630540  ld 30, 128(1)
  0630544  mtlr 0
  0630548  ld 31, 136(1)
  063054c  addi 1, 1, 144
  0630550  blr

FUN_00630554:   # 0x630554, 0x178 bytes
  0630554  stdu 1, -176(1)
  0630558  mflr 0
  063055c  std 30, 160(1)
  0630560  lwz 30, -29420(2)
  0630564  mr 4, 3
  0630568  std 0, 192(1)
  063056c  std 27, 136(1)
  0630570  std 28, 144(1)
  0630574  std 29, 152(1)
  0630578  lwz 10, -32732(30)
  063057c  std 31, 168(1)
  0630580  lwz 0, 0(10)
  0630584  cmpwi 7, 0, 0
  0630588  bf 30, 0x63061c
  063058c  lwz 28, -32744(30)
  0630590  li 9, 8
  0630594  mr 11, 28
  0630598  mtctr 9
  063059c  clrldi 9, 11, 32
  06305a0  addi 11, 11, 32
  06305a4  stw 0, 0(9)
  06305a8  bdnz 0x63059c
  06305ac  li 0, 1
  06305b0  stw 0, 0(10)
  06305b4  li 0, 8
  06305b8  li 31, 0
  06305bc  mr 11, 28
  06305c0  mtctr 0
  06305c4  clrldi 9, 11, 32
  06305c8  addi 11, 11, 32
  06305cc  lwz 9, 0(9)
  06305d0  cmpwi 7, 9, 0
  06305d4  bt 30, 0x630624
  06305d8  addi 31, 31, 1
  06305dc  bdnz 0x6305c4
  06305e0  lwz 3, -32728(30)
  06305e4  clrldi 4, 4, 32
  06305e8  li 31, -1
  06305ec  bl 0x61948c
  06305f0  nop
  06305f4  ld 0, 192(1)
  06305f8  extsw 3, 31
  06305fc  ld 27, 136(1)
  0630600  ld 28, 144(1)
  0630604  mtlr 0
  0630608  ld 29, 152(1)
  063060c  ld 30, 160(1)
  0630610  ld 31, 168(1)
  0630614  addi 1, 1, 176
  0630618  blr
  063061c  lwz 28, -32744(30)
  0630620  b 0x6305b4
  0630624  li 0, 2
  0630628  clrldi 27, 4, 32
  063062c  li 5, 8
  0630630  mr 4, 27
  0630634  stw 0, 112(1)
  0630638  addi 3, 1, 120
  063063c  li 0, 16
  0630640  slwi 29, 31, 5
  0630644  stb 9, 120(1)
  0630648  stw 0, 116(1)
  063064c  bl 0x5cccec
  0630650  nop
  0630654  add 3, 29, 28
  0630658  li 0, 0
  063065c  addi 3, 3, 8
  0630660  addi 4, 1, 112
  0630664  clrldi 3, 3, 32
  0630668  stb 0, 127(1)
  063066c  bl 0x6505a4
  0630670  ld 2, 40(1)
  0630674  cmpwi 7, 3, 0
  0630678  bf- 30, 0x6306b4
  063067c  lwz 11, -32744(30)
  0630680  extsw 9, 29
  0630684  li 0, 1
  0630688  ld 27, 136(1)
  063068c  extsw 3, 31
  0630690  ld 28, 144(1)
  0630694  ld 29, 152(1)
  0630698  ld 30, 160(1)
  063069c  stwx 0, 11, 9
  06306a0  ld 0, 192(1)
  06306a4  ld 31, 168(1)
  06306a8  addi 1, 1, 176
  06306ac  mtlr 0
  06306b0  blr
  06306b4  lwz 3, -32728(30)
  06306b8  mr 4, 27
  06306bc  li 31, -1
  06306c0  bl 0x61948c
  06306c4  nop
  06306c8  b 0x6305f4

FUN_006306cc:   # 0x6306cc, 0x3c bytes
  06306cc  stdu 1, -144(1)
  06306d0  mflr 0
  06306d4  addi 3, 1, 112
  06306d8  std 0, 160(1)
  06306dc  bl 0x6505c4
  06306e0  ld 2, 40(1)
  06306e4  cmpwi 7, 3, 0
  06306e8  bt 30, 0x6306f4
  06306ec  li 0, 0
  06306f0  std 0, 112(1)
  06306f4  ld 0, 160(1)
  06306f8  ld 3, 112(1)
  06306fc  addi 1, 1, 144
  0630700  mtlr 0
  0630704  blr

FUN_00630708:   # 0x630708, 0x4c bytes
  0630708  stdu 1, -144(1)
  063070c  mflr 0
  0630710  clrldi 7, 6, 32
  0630714  mr 9, 3
  0630718  mr 6, 5
  063071c  addi 3, 1, 112
  0630720  li 5, 0
  0630724  li 8, 1
  0630728  std 0, 160(1)
  063072c  bl 0x650524
  0630730  ld 2, 40(1)
  0630734  cmpwi 7, 3, 0
  0630738  li 3, 0
  063073c  bf 30, 0x630744
  0630740  ld 3, 112(1)
  0630744  ld 0, 160(1)
  0630748  addi 1, 1, 144
  063074c  mtlr 0
  0630750  blr

FUN_00630754:   # 0x630754, 0x58 bytes
  0630754  stdu 1, -144(1)
  0630758  mflr 0
  063075c  std 30, 128(1)
  0630760  lwz 30, -29420(2)
  0630764  clrldi 5, 5, 32
  0630768  addi 6, 1, 112
  063076c  std 0, 160(1)
  0630770  bl 0x64f1e4
  0630774  ld 2, 40(1)
  0630778  cmpwi 7, 3, 0
  063077c  extsw 4, 3
  0630780  bt 30, 0x630790
  0630784  lwz 3, -32724(30)
  0630788  bl 0x61948c
  063078c  nop
  0630790  lwz 3, 116(1)
  0630794  ld 0, 160(1)
  0630798  extsw 3, 3
  063079c  ld 30, 128(1)
  06307a0  mtlr 0
  06307a4  addi 1, 1, 144
  06307a8  blr

FUN_006307ac:   # 0x6307ac, 0x5c bytes
  06307ac  stdu 1, -144(1)
  06307b0  mflr 0
  06307b4  std 30, 128(1)
  06307b8  lwz 30, -29420(2)
  06307bc  addi 6, 1, 112
  06307c0  std 0, 160(1)
  06307c4  bl 0x64ffe4
  06307c8  ld 2, 40(1)
  06307cc  cmpwi 7, 3, 0
  06307d0  extsw 4, 3
  06307d4  bt 30, 0x6307ec
  06307d8  li 0, 0
  06307dc  lwz 3, -32720(30)
  06307e0  std 0, 112(1)
  06307e4  bl 0x61948c
  06307e8  nop
  06307ec  lwz 3, 116(1)
  06307f0  ld 0, 160(1)
  06307f4  extsw 3, 3
  06307f8  ld 30, 128(1)
  06307fc  mtlr 0
  0630800  addi 1, 1, 144
  0630804  blr

FUN_00630808:   # 0x630808, 0x70 bytes
  0630808  stdu 1, -160(1)
  063080c  mflr 0
  0630810  std 30, 144(1)
  0630814  lwz 30, -29420(2)
  0630818  addi 5, 1, 112
  063081c  li 6, 0
  0630820  li 7, 0
  0630824  std 29, 136(1)
  0630828  std 0, 176(1)
  063082c  mr 29, 3
  0630830  bl 0x64f204
  0630834  ld 2, 40(1)
  0630838  cmpwi 7, 3, 0
  063083c  mr 4, 29
  0630840  bt 30, 0x630858
  0630844  li 0, -1
  0630848  lwz 3, -32716(30)
  063084c  stw 0, 112(1)
  0630850  bl 0x61948c
  0630854  nop
  0630858  lwz 3, 112(1)
  063085c  ld 0, 176(1)
  0630860  extsw 3, 3
  0630864  ld 29, 136(1)
  0630868  ld 30, 144(1)
  063086c  mtlr 0
  0630870  addi 1, 1, 160
  0630874  blr

FUN_00630878:   # 0x630878, 0x6c bytes
  0630878  std 30, -16(1)
  063087c  lwz 30, -29416(2)
  0630880  mr 11, 3
  0630884  li 3, 0
  0630888  lwz 9, -32768(30)
  063088c  lwz 9, 0(9)
  0630890  cmpwi 7, 9, 0
  0630894  bt 30, 0x6308d0
  0630898  clrldi 3, 9, 32
  063089c  lwz 0, 0(3)
  06308a0  cmpw 7, 0, 11
  06308a4  bf 30, 0x6308b8
  06308a8  b 0x6308d0
  06308ac  lwz 0, 0(9)
  06308b0  cmpw 7, 0, 11
  06308b4  bt 30, 0x6308d8
  06308b8  lwz 0, 8(3)
  06308bc  cmpwi 7, 0, 0
  06308c0  clrldi 9, 0, 32
  06308c4  mr 3, 9
  06308c8  bf 30, 0x6308ac
  06308cc  li 3, 0
  06308d0  ld 30, -16(1)
  06308d4  blr
  06308d8  mr 3, 9
  06308dc  ld 30, -16(1)
  06308e0  blr

FUN_006308e4:   # 0x6308e4, 0x150 bytes
  06308e4  stdu 1, -176(1)
  06308e8  mflr 0
  06308ec  std 30, 160(1)
  06308f0  lwz 30, -29416(2)
  06308f4  std 24, 112(1)
  06308f8  std 25, 120(1)
  06308fc  std 26, 128(1)
  0630900  std 27, 136(1)
  0630904  std 28, 144(1)
  0630908  std 29, 152(1)
  063090c  std 31, 168(1)
  0630910  mr 29, 3
  0630914  mr 28, 5
  0630918  mr 27, 6
  063091c  std 0, 192(1)
  0630920  mr 31, 4
  0630924  mr 26, 7
  0630928  mr 25, 8
  063092c  mr 24, 9
  0630930  bl 0x630878
  0630934  cmpwi 7, 3, 0
  0630938  mr 11, 3
  063093c  mr 6, 29
  0630940  li 5, 211
  0630944  clrldi 10, 3, 32
  0630948  bt 30, 0x630a1c
  063094c  lwz 0, 4(3)
  0630950  slwi 9, 31, 2
  0630954  extsw 7, 31
  0630958  cmpw 7, 0, 31
  063095c  addi 9, 9, 16
  0630960  clrldi 3, 28, 32
  0630964  extsw 9, 9
  0630968  clrldi 4, 27, 32
  063096c  clrldi 5, 26, 32
  0630970  clrldi 6, 25, 32
  0630974  bt 29, 0x6309c8
  0630978  lwz 3, -32756(30)
  063097c  li 5, 217
  0630980  lwz 4, -32760(30)
  0630984  lwz 6, 0(11)
  0630988  bl 0x61948c
  063098c  nop
  0630990  li 3, 0
  0630994  ld 0, 192(1)
  0630998  extsw 3, 3
  063099c  ld 24, 112(1)
  06309a0  ld 25, 120(1)
  06309a4  mtlr 0
  06309a8  ld 26, 128(1)
  06309ac  ld 27, 136(1)
  06309b0  ld 28, 144(1)
  06309b4  ld 29, 152(1)
  06309b8  ld 30, 160(1)
  06309bc  ld 31, 168(1)
  06309c0  addi 1, 1, 176
  06309c4  blr
  06309c8  lwzx 9, 10, 9
  06309cc  clrldi 7, 24, 32
  06309d0  lwz 0, 0(9)
  06309d4  std 2, 40(1)
  06309d8  mtctr 0
  06309dc  lwz 2, 4(9)
  06309e0  bctrl
  06309e4  ld 2, 40(1)
  06309e8  ld 0, 192(1)
  06309ec  extsw 3, 3
  06309f0  ld 24, 112(1)
  06309f4  mtlr 0
  06309f8  ld 25, 120(1)
  06309fc  ld 26, 128(1)
  0630a00  ld 27, 136(1)
  0630a04  ld 28, 144(1)
  0630a08  ld 29, 152(1)
  0630a0c  ld 30, 160(1)
  0630a10  ld 31, 168(1)
  0630a14  addi 1, 1, 176
  0630a18  blr
  0630a1c  lwz 3, -32764(30)
  0630a20  lwz 4, -32760(30)
  0630a24  bl 0x61948c
  0630a28  nop
  0630a2c  li 3, 0
  0630a30  b 0x630994

FUN_00630a34:   # 0x630a34, 0x11c bytes
  0630a34  stdu 1, -160(1)
  0630a38  mflr 0
  0630a3c  std 30, 144(1)
  0630a40  lwz 30, -29416(2)
  0630a44  std 27, 120(1)
  0630a48  std 28, 128(1)
  0630a4c  std 29, 136(1)
  0630a50  std 31, 152(1)
  0630a54  mr 28, 5
  0630a58  mr 31, 3
  0630a5c  mr 27, 6
  0630a60  std 0, 176(1)
  0630a64  mr 29, 4
  0630a68  bl 0x630878
  0630a6c  cmpwi 7, 3, 0
  0630a70  mr 6, 31
  0630a74  li 5, 245
  0630a78  clrldi 11, 3, 32
  0630a7c  bt 30, 0x630b38
  0630a80  lwz 0, 4(3)
  0630a84  slwi 9, 29, 2
  0630a88  mr 4, 31
  0630a8c  cmpw 7, 0, 29
  0630a90  addi 9, 9, 16
  0630a94  clrldi 3, 28, 32
  0630a98  extsw 9, 9
  0630a9c  li 5, 0
  0630aa0  li 6, 0
  0630aa4  li 7, 0
  0630aa8  bt 29, 0x630ae4
  0630aac  li 3, 4
  0630ab0  bl 0x6194f4
  0630ab4  nop
  0630ab8  li 3, 0
  0630abc  ld 0, 176(1)
  0630ac0  extsw 3, 3
  0630ac4  ld 27, 120(1)
  0630ac8  ld 28, 128(1)
  0630acc  mtlr 0
  0630ad0  ld 29, 136(1)
  0630ad4  ld 30, 144(1)
  0630ad8  ld 31, 152(1)
  0630adc  addi 1, 1, 160
  0630ae0  blr
  0630ae4  lwzx 9, 11, 9
  0630ae8  clrldi 4, 27, 32
  0630aec  li 5, 0
  0630af0  li 6, 0
  0630af4  li 7, 0
  0630af8  lwz 0, 0(9)
  0630afc  std 2, 40(1)
  0630b00  mtctr 0
  0630b04  lwz 2, 4(9)
  0630b08  bctrl
  0630b0c  ld 2, 40(1)
  0630b10  ld 0, 176(1)
  0630b14  extsw 3, 3
  0630b18  ld 27, 120(1)
  0630b1c  mtlr 0
  0630b20  ld 28, 128(1)
  0630b24  ld 29, 136(1)
  0630b28  ld 30, 144(1)
  0630b2c  ld 31, 152(1)
  0630b30  addi 1, 1, 160
  0630b34  blr
  0630b38  lwz 3, -32752(30)
  0630b3c  lwz 4, -32760(30)
  0630b40  bl 0x61948c
  0630b44  nop
  0630b48  li 3, 0
  0630b4c  b 0x630abc

FUN_00630b50:   # 0x630b50, 0x140 bytes
  0630b50  cmpwi 7, 3, 0
  0630b54  mflr 0
  0630b58  stdu 1, -144(1)
  0630b5c  std 29, 120(1)
  0630b60  std 30, 128(1)
  0630b64  std 31, 136(1)
  0630b68  std 0, 160(1)
  0630b6c  lwz 30, -29416(2)
  0630b70  mr 29, 3
  0630b74  mr 31, 3
  0630b78  bt 30, 0x630c0c
  0630b7c  lwz 3, 0(29)
  0630b80  bl 0x630878
  0630b84  cmpwi 7, 3, 0
  0630b88  bt 30, 0x630c70
  0630b8c  lwz 9, -32768(30)
  0630b90  lwz 11, 0(9)
  0630b94  cmpw 7, 31, 11
  0630b98  bt 30, 0x630c44
  0630b9c  cmpwi 7, 11, 0
  0630ba0  clrldi 10, 11, 32
  0630ba4  bt 30, 0x630bd4
  0630ba8  lwz 0, 8(10)
  0630bac  cmpw 7, 0, 31
  0630bb0  bf 30, 0x630bc4
  0630bb4  b 0x630bd4
  0630bb8  lwz 0, 8(9)
  0630bbc  cmpw 7, 0, 31
  0630bc0  bt 30, 0x630c04
  0630bc4  cmpwi 7, 0, 0
  0630bc8  clrldi 9, 0, 32
  0630bcc  bf 30, 0x630bb8
  0630bd0  li 10, 0
  0630bd4  lwz 9, 8(10)
  0630bd8  li 3, 1
  0630bdc  lwz 0, 8(9)
  0630be0  stw 0, 8(10)
  0630be4  ld 0, 160(1)
  0630be8  extsw 3, 3
  0630bec  ld 29, 120(1)
  0630bf0  ld 30, 128(1)
  0630bf4  mtlr 0
  0630bf8  ld 31, 136(1)
  0630bfc  addi 1, 1, 144
  0630c00  blr
  0630c04  mr 10, 9
  0630c08  b 0x630bd4
  0630c0c  lwz 3, -32748(30)
  0630c10  li 5, 160
  0630c14  lwz 4, -32760(30)
  0630c18  bl 0x61948c
  0630c1c  nop
  0630c20  lwz 9, -32744(30)
  0630c24  li 3, 0
  0630c28  lbz 0, 0(9)
  0630c2c  cmpwi 7, 0, 0
  0630c30  bf 30, 0x630be4
  0630c34  lwz 9, -32740(30)
  0630c38  lbz 0, 0(9)
  0630c3c  twnei 0, 0
  0630c40  b 0x630b7c
  0630c44  lwz 0, 8(29)
  0630c48  li 3, 1
  0630c4c  ld 29, 120(1)
  0630c50  stw 0, 0(9)
  0630c54  ld 0, 160(1)
  0630c58  extsw 3, 3
  0630c5c  ld 30, 128(1)
  0630c60  ld 31, 136(1)
  0630c64  mtlr 0
  0630c68  addi 1, 1, 144
  0630c6c  blr
  0630c70  lwz 3, -32736(30)
  0630c74  li 5, 166
  0630c78  lwz 4, -32760(30)
  0630c7c  lwz 6, 0(29)
  0630c80  bl 0x61948c
  0630c84  nop
  0630c88  li 3, 0
  0630c8c  b 0x630be4

FUN_00630c90:   # 0x630c90, 0x10c bytes
  0630c90  cmpwi 7, 3, 0
  0630c94  mflr 0
  0630c98  stdu 1, -144(1)
  0630c9c  std 29, 120(1)
  0630ca0  std 30, 128(1)
  0630ca4  std 31, 136(1)
  0630ca8  std 0, 160(1)
  0630cac  lwz 30, -29416(2)
  0630cb0  mr 31, 3
  0630cb4  mr 29, 3
  0630cb8  bt 30, 0x630d58
  0630cbc  lwz 3, 0(31)
  0630cc0  bl 0x630878
  0630cc4  cmpwi 7, 3, 0
  0630cc8  bt 30, 0x630d08
  0630ccc  lwz 3, -32732(30)
  0630cd0  li 5, 106
  0630cd4  lwz 4, -32760(30)
  0630cd8  lwz 6, 0(31)
  0630cdc  bl 0x61948c
  0630ce0  nop
  0630ce4  li 3, 0
  0630ce8  ld 0, 160(1)
  0630cec  extsw 3, 3
  0630cf0  ld 29, 120(1)
  0630cf4  ld 30, 128(1)
  0630cf8  mtlr 0
  0630cfc  ld 31, 136(1)
  0630d00  addi 1, 1, 144
  0630d04  blr
  0630d08  lwz 9, -32768(30)
  0630d0c  stw 3, 12(31)
  0630d10  stw 3, 8(31)
  0630d14  lwz 0, 0(9)
  0630d18  cmpwi 7, 0, 0
  0630d1c  bt 30, 0x630d90
  0630d20  clrldi 9, 0, 32
  0630d24  lwz 0, 8(9)
  0630d28  cmpwi 7, 0, 0
  0630d2c  bf 30, 0x630d20
  0630d30  ld 0, 160(1)
  0630d34  li 3, 1
  0630d38  stw 29, 8(9)
  0630d3c  extsw 3, 3
  0630d40  ld 29, 120(1)
  0630d44  ld 30, 128(1)
  0630d48  mtlr 0
  0630d4c  ld 31, 136(1)
  0630d50  addi 1, 1, 144
  0630d54  blr
  0630d58  lwz 3, -32748(30)
  0630d5c  li 5, 100
  0630d60  lwz 4, -32760(30)
  0630d64  bl 0x61948c
  0630d68  nop
  0630d6c  lwz 9, -32744(30)
  0630d70  li 3, 0
  0630d74  lbz 0, 0(9)
  0630d78  cmpwi 7, 0, 0
  0630d7c  bf 30, 0x630ce8
  0630d80  lwz 9, -32740(30)
  0630d84  lbz 0, 0(9)
  0630d88  twnei 0, 0
  0630d8c  b 0x630cbc
  0630d90  li 3, 1
  0630d94  stw 29, 0(9)
  0630d98  b 0x630ce8

FUN_00630d9c:   # 0x630d9c, 0xdc bytes
  0630d9c  cmpwi 7, 4, 0
  0630da0  mflr 0
  0630da4  stdu 1, -128(1)
  0630da8  std 30, 112(1)
  0630dac  std 31, 120(1)
  0630db0  std 0, 144(1)
  0630db4  lwz 30, -29412(2)
  0630db8  mr 9, 3
  0630dbc  li 31, 0
  0630dc0  bt 30, 0x630df0
  0630dc4  cmplwi 7, 4, 2
  0630dc8  li 31, 1
  0630dcc  bf 29, 0x630df0
  0630dd0  li 0, 30
  0630dd4  li 3, 4
  0630dd8  mtctr 0
  0630ddc  cmplw 7, 4, 3
  0630de0  bf 29, 0x630dec
  0630de4  slwi 3, 3, 1
  0630de8  bdnz 0x630ddc
  0630dec  addi 31, 3, -1
  0630df0  lwz 11, -32768(30)
  0630df4  addi 3, 9, 4
  0630df8  extsw 4, 5
  0630dfc  add 3, 31, 3
  0630e00  extsw 3, 3
  0630e04  lwz 9, 0(11)
  0630e08  lwz 0, 0(9)
  0630e0c  std 2, 40(1)
  0630e10  mtctr 0
  0630e14  lwz 2, 4(9)
  0630e18  bctrl
  0630e1c  ld 2, 40(1)
  0630e20  mr 0, 3
  0630e24  li 3, 0
  0630e28  cmpwi 7, 0, 0
  0630e2c  bt 30, 0x630e5c
  0630e30  add 11, 0, 31
  0630e34  lwz 8, -32764(30)
  0630e38  addi 11, 11, 4
  0630e3c  andc 11, 11, 31
  0630e40  lwz 9, 76(8)
  0630e44  addi 10, 11, -4
  0630e48  addi 9, 9, 1
  0630e4c  clrldi 10, 10, 32
  0630e50  mr 3, 11
  0630e54  stw 9, 76(8)
  0630e58  stw 0, 0(10)
  0630e5c  ld 0, 144(1)
  0630e60  clrldi 3, 3, 32
  0630e64  ld 30, 112(1)
  0630e68  ld 31, 120(1)
  0630e6c  mtlr 0
  0630e70  addi 1, 1, 128
  0630e74  blr

FUN_00630e78:   # 0x630e78, 0x64 bytes
  0630e78  stdu 1, -128(1)
  0630e7c  mflr 0
  0630e80  std 30, 112(1)
  0630e84  lwz 30, -29412(2)
  0630e88  addi 3, 3, -4
  0630e8c  std 0, 144(1)
  0630e90  clrldi 3, 3, 32
  0630e94  lwz 10, -32764(30)
  0630e98  lwz 8, -32760(30)
  0630e9c  lwz 3, 0(3)
  0630ea0  lwz 9, 80(10)
  0630ea4  lwz 11, 0(8)
  0630ea8  addi 9, 9, 1
  0630eac  stw 9, 80(10)
  0630eb0  lwz 0, 0(11)
  0630eb4  std 2, 40(1)
  0630eb8  mtctr 0
  0630ebc  lwz 2, 4(11)
  0630ec0  bctrl
  0630ec4  ld 2, 40(1)
  0630ec8  ld 0, 144(1)
  0630ecc  ld 30, 112(1)
  0630ed0  mtlr 0
  0630ed4  addi 1, 1, 128
  0630ed8  blr

FUN_00630edc:   # 0x630edc, 0x24 bytes
  0630edc  std 30, -16(1)
  0630ee0  lwz 30, -29412(2)
  0630ee4  lwz 9, -32764(30)
  0630ee8  ld 30, -16(1)
  0630eec  lwz 0, 80(9)
  0630ef0  lwz 3, 76(9)
  0630ef4  sub 3, 3, 0
  0630ef8  extsw 3, 3
  0630efc  blr

FUN_00630f00:   # 0x630f00, 0x158 bytes
  0630f00  stdu 1, -128(1)
  0630f04  mflr 0
  0630f08  std 31, 120(1)
  0630f0c  mr 31, 3
  0630f10  std 0, 144(1)
  0630f14  std 30, 112(1)
  0630f18  li 11, -1
  0630f1c  lwz 30, -29412(2)
  0630f20  lwz 0, 0(31)
  0630f24  cmpwi 7, 0, 108
  0630f28  bt- 30, 0x630f48
  0630f2c  ld 0, 144(1)
  0630f30  extsw 3, 11
  0630f34  ld 30, 112(1)
  0630f38  ld 31, 120(1)
  0630f3c  mtlr 0
  0630f40  addi 1, 1, 128
  0630f44  blr
  0630f48  lwz 4, -32764(30)
  0630f4c  li 5, 108
  0630f50  addi 4, 4, 8
  0630f54  bl 0x5c5ad0
  0630f58  nop
  0630f5c  lwz 11, 4(31)
  0630f60  lwz 9, 8(31)
  0630f64  li 0, 108
  0630f68  cmpw 7, 11, 9
  0630f6c  stw 0, 0(31)
  0630f70  li 11, -2
  0630f74  bf+ 30, 0x630f2c
  0630f78  lwz 9, 12(31)
  0630f7c  li 11, -3
  0630f80  lwz 0, 16(31)
  0630f84  cmpw 7, 9, 0
  0630f88  bf+ 30, 0x630f2c
  0630f8c  lwz 9, 20(31)
  0630f90  li 11, -4
  0630f94  lwz 0, 24(31)
  0630f98  cmpw 7, 9, 0
  0630f9c  bf+ 30, 0x630f2c
  0630fa0  lwz 9, 28(31)
  0630fa4  li 11, -5
  0630fa8  lwz 0, 32(31)
  0630fac  cmpw 7, 9, 0
  0630fb0  bf+ 30, 0x630f2c
  0630fb4  lwz 9, 44(31)
  0630fb8  li 11, -6
  0630fbc  lwz 0, 48(31)
  0630fc0  cmpw 7, 9, 0
  0630fc4  bf+ 30, 0x630f2c
  0630fc8  lwz 9, 52(31)
  0630fcc  li 11, -7
  0630fd0  lwz 0, 56(31)
  0630fd4  cmpw 7, 9, 0
  0630fd8  bf+ 30, 0x630f2c
  0630fdc  lwz 9, 60(31)
  0630fe0  li 11, -8
  0630fe4  lwz 0, 64(31)
  0630fe8  cmpw 7, 9, 0
  0630fec  bf+ 30, 0x630f2c
  0630ff0  lwz 9, 68(31)
  0630ff4  li 11, -9
  0630ff8  lwz 0, 72(31)
  0630ffc  cmpw 7, 9, 0
  0631000  bf+ 30, 0x630f2c
  0631004  lwz 9, 76(31)
  0631008  li 11, -10
  063100c  lwz 0, 80(31)
  0631010  cmpw 7, 9, 0
  0631014  bf+ 30, 0x630f2c
  0631018  lwz 9, 36(31)
  063101c  li 11, -11
  0631020  lwz 0, 40(31)
  0631024  cmpw 7, 9, 0
  0631028  bf 30, 0x630f2c
  063102c  lwz 0, 88(31)
  0631030  lwz 9, 84(31)
  0631034  xor 9, 9, 0
  0631038  srawi 0, 9, 31
  063103c  xor 11, 0, 9
  0631040  sub 11, 11, 0
  0631044  addi 11, 11, -1
  0631048  srawi 11, 11, 31
  063104c  rlwinm 11, 11, 0, 28, 29
  0631050  addi 11, 11, -12
  0631054  b 0x630f2c

FUN_00631058:   # 0x631058, 0x1c bytes
  0631058  lwz 0, 576(3)
  063105c  srawi 9, 0, 31
  0631060  xor 3, 9, 0
  0631064  sub 3, 9, 3
  0631068  srwi 3, 3, 31
  063106c  extsw 3, 3
  0631070  blr

FUN_00631074:   # 0x631074, 0x2c bytes
  0631074  cmpdi 3, 0
  0631078  lis 9, 23294
  063107c  ori 9, 9, 11078
  0631080  bf 2, 0x63108c
  0631084  li 3, 0
  0631088  blr
  063108c  lwz 0, 0(3)
  0631090  cmpw 7, 0, 9
  0631094  bclr 12, 30
  0631098  li 3, 0
  063109c  blr

FUN_006310a0:   # 0x6310a0, 0x78 bytes
  06310a0  stdu 1, -128(1)
  06310a4  mflr 0
  06310a8  std 30, 112(1)
  06310ac  lwz 30, -29412(2)
  06310b0  std 31, 120(1)
  06310b4  std 0, 144(1)
  06310b8  lwz 31, -32764(30)
  06310bc  lwz 0, 0(31)
  06310c0  cmpwi 7, 0, 0
  06310c4  clrldi 3, 0, 32
  06310c8  bt 30, 0x6310d8
  06310cc  bl 0x630e78
  06310d0  li 0, 0
  06310d4  stw 0, 0(31)
  06310d8  lwz 8, -32744(30)
  06310dc  li 0, 0
  06310e0  lwz 10, -32756(30)
  06310e4  stw 0, 160(31)
  06310e8  stw 0, 156(31)
  06310ec  lwz 11, -32752(30)
  06310f0  stw 0, 0(8)
  06310f4  stw 0, 0(10)
  06310f8  ld 0, 144(1)
  06310fc  lwz 9, -32748(30)
  0631100  ld 31, 120(1)
  0631104  mtlr 0
  0631108  ld 30, 112(1)
  063110c  addi 1, 1, 128
  0631110  stw 9, 0(11)
  0631114  blr

FUN_00631118:   # 0x631118, 0xc bytes
  0631118  lis 3, 7
  063111c  ori 3, 3, 51
  0631120  blr

FUN_00631124:   # 0x631124, 0x2c bytes
  0631124  lwz 0, 28(4)
  0631128  lwz 9, 0(4)
  063112c  lwz 11, 4(4)
  0631130  lwz 10, 8(4)
  0631134  ld 8, 16(4)
  0631138  stw 0, 24(3)
  063113c  stw 9, 0(3)
  0631140  stw 11, 4(3)
  0631144  stw 10, 8(3)
  0631148  std 8, 16(3)
  063114c  blr

FUN_00631150:   # 0x631150, 0x6c bytes
  0631150  stdu 1, -144(1)
  0631154  mflr 0
  0631158  std 31, 136(1)
  063115c  mr 31, 3
  0631160  std 29, 120(1)
  0631164  li 29, 0
  0631168  std 30, 128(1)
  063116c  lwz 30, -29412(2)
  0631170  std 0, 160(1)
  0631174  stw 29, 84(31)
  0631178  stw 29, 568(31)
  063117c  bl 0x631058
  0631180  cmpwi 7, 3, 0
  0631184  bt 30, 0x6311a0
  0631188  lwz 11, -32764(30)
  063118c  stb 29, 581(31)
  0631190  stw 29, 576(31)
  0631194  lwz 9, 72(11)
  0631198  addi 9, 9, 1
  063119c  stw 9, 72(11)
  06311a0  ld 0, 160(1)
  06311a4  ld 29, 120(1)
  06311a8  ld 30, 128(1)
  06311ac  mtlr 0
  06311b0  ld 31, 136(1)
  06311b4  addi 1, 1, 144
  06311b8  blr

FUN_006311bc:   # 0x6311bc, 0x158 bytes
  06311bc  lwz 11, 0(4)
  06311c0  mr 8, 6
  06311c4  std 30, -16(1)
  06311c8  rlwinm 0, 11, 0, 29, 29
  06311cc  lwz 30, -29412(2)
  06311d0  mr 10, 4
  06311d4  cmpwi 7, 0, 0
  06311d8  bt 30, 0x631234
  06311dc  slwi 9, 5, 2
  06311e0  cmpwi 7, 6, 0
  06311e4  extsw 9, 9
  06311e8  add 9, 4, 9
  06311ec  lfs 13, 4(9)
  06311f0  stfs 13, 284(3)
  06311f4  bt 30, 0x631204
  06311f8  lfs 0, 284(6)
  06311fc  fmuls 0, 13, 0
  0631200  stfs 0, 284(3)
  0631204  lfs 13, 284(3)
  0631208  addi 9, 1, -32
  063120c  fmr 0, 13
  0631210  fctiwz 0, 0
  0631214  stfiwx 0, 0, 9
  0631218  lwz 0, -32(1)
  063121c  cmpwi 7, 0, 0
  0631220  bt 28, 0x631308
  0631224  lfs 0, -32740(30)
  0631228  fcmpu 7, 13, 0
  063122c  bf 29, 0x631234
  0631230  stfs 0, 284(3)
  0631234  rlwinm 0, 11, 0, 28, 28
  0631238  cmpwi 7, 0, 0
  063123c  bt 30, 0x63129c
  0631240  slwi 9, 5, 2
  0631244  addi 9, 9, 64
  0631248  extsw 9, 9
  063124c  add 9, 10, 9
  0631250  lwz 9, 4(9)
  0631254  cmpwi 7, 9, 0
  0631258  stw 9, 304(3)
  063125c  bt 28, 0x631300
  0631260  cmpwi 7, 8, 0
  0631264  bt 30, 0x631274
  0631268  lwz 0, 304(6)
  063126c  add 0, 9, 0
  0631270  stw 0, 304(3)
  0631274  lwz 11, 304(3)
  0631278  lis 9, 5825
  063127c  srwi 0, 11, 3
  0631280  ori 9, 9, 27671
  0631284  mulhwu 0, 0, 9
  0631288  srwi 0, 0, 2
  063128c  mulli 0, 0, 360
  0631290  sub 11, 11, 0
  0631294  stw 11, 304(3)
  0631298  lwz 11, 0(4)
  063129c  rlwinm 0, 11, 0, 27, 27
  06312a0  cmpwi 7, 0, 0
  06312a4  bt 30, 0x6312f8
  06312a8  slwi 9, 5, 2
  06312ac  cmpwi 7, 8, 0
  06312b0  addi 9, 9, 128
  06312b4  extsw 9, 9
  06312b8  add 9, 10, 9
  06312bc  lwz 5, 4(9)
  06312c0  stw 5, 320(3)
  06312c4  bt 30, 0x6312d4
  06312c8  lwz 0, 320(6)
  06312cc  add 0, 5, 0
  06312d0  stw 0, 320(3)
  06312d4  lwz 11, 320(3)
  06312d8  lis 9, 5825
  06312dc  srwi 0, 11, 3
  06312e0  ori 9, 9, 27671
  06312e4  mulhwu 0, 0, 9
  06312e8  srwi 0, 0, 2
  06312ec  mulli 0, 0, 360
  06312f0  sub 11, 11, 0
  06312f4  stw 11, 320(3)
  06312f8  ld 30, -16(1)
  06312fc  blr
  0631300  lwz 11, 0(4)
  0631304  b 0x63129c
  0631308  li 0, 0
  063130c  stw 0, 284(3)
  0631310  b 0x631234

FUN_00631314:   # 0x631314, 0x34 bytes
  0631314  lwz 0, 6052(3)
  0631318  cmpwi 7, 0, 0
  063131c  bt 30, 0x631340
  0631320  lwz 0, 6048(3)
  0631324  cmpwi 7, 0, 0
  0631328  bt 30, 0x631334
  063132c  stw 4, 6044(3)
  0631330  blr
  0631334  stw 4, 6048(3)
  0631338  stw 4, 6044(3)
  063133c  blr
  0631340  stw 4, 6052(3)
  0631344  b 0x631320

FUN_00631348:   # 0x631348, 0x10 bytes
  0631348  li 0, 0
  063134c  li 3, 0
  0631350  stw 0, 0(4)
  0631354  blr

FUN_00631358:   # 0x631358, 0xa0 bytes
  0631358  lbz 9, 1413(3)
  063135c  li 11, 1
  0631360  cmpwi 7, 9, 0
  0631364  bt 30, 0x631380
  0631368  lbz 0, 20(4)
  063136c  li 11, 0
  0631370  cmpw 7, 9, 0
  0631374  bt 30, 0x6313b0
  0631378  extsw 3, 11
  063137c  blr
  0631380  lbz 0, 20(4)
  0631384  stb 0, 1413(3)
  0631388  lbz 9, 23(4)
  063138c  stb 9, 1416(3)
  0631390  lbz 0, 22(4)
  0631394  stb 0, 1415(3)
  0631398  lbz 9, 21(4)
  063139c  stb 9, 1414(3)
  06313a0  lwz 0, 88(4)
  06313a4  stw 0, 1408(3)
  06313a8  extsw 3, 11
  06313ac  blr
  06313b0  lbz 0, 1416(3)
  06313b4  lbz 9, 23(4)
  06313b8  cmpw 7, 0, 9
  06313bc  bf 30, 0x631378
  06313c0  lbz 0, 1415(3)
  06313c4  lbz 9, 22(4)
  06313c8  cmpw 7, 0, 9
  06313cc  bf 30, 0x631378
  06313d0  lbz 0, 1414(3)
  06313d4  lbz 9, 21(4)
  06313d8  cmpw 7, 0, 9
  06313dc  bf 30, 0x631378
  06313e0  lwz 9, 1408(3)
  06313e4  lwz 0, 88(4)
  06313e8  xor 11, 9, 0
  06313ec  cntlzw 11, 11
  06313f0  srwi 11, 11, 5
  06313f4  b 0x631378

FUN_006313f8:   # 0x6313f8, 0x3c bytes
  06313f8  stdu 1, -128(1)
  06313fc  mflr 0
  0631400  std 0, 144(1)
  0631404  bl 0x631074
  0631408  li 0, 0
  063140c  cmpwi 7, 3, 0
  0631410  bt 30, 0x631420
  0631414  lbz 9, 22(3)
  0631418  lbz 0, 21(3)
  063141c  mullw 0, 0, 9
  0631420  extsw 3, 0
  0631424  ld 0, 144(1)
  0631428  addi 1, 1, 128
  063142c  mtlr 0
  0631430  blr

FUN_00631434:   # 0x631434, 0x8c bytes
  0631434  cmpwi 7, 3, 0
  0631438  std 30, -16(1)
  063143c  lwz 30, -29412(2)
  0631440  bf 30, 0x631454
  0631444  li 0, 0
  0631448  ld 30, -16(1)
  063144c  clrldi 3, 0, 32
  0631450  blr
  0631454  lwz 0, 8(3)
  0631458  cmpwi 6, 5, 0
  063145c  cmplw 7, 0, 4
  0631460  bf 29, 0x631444
  0631464  lhz 9, 22(3)
  0631468  lhz 0, 20(3)
  063146c  mullw 9, 4, 9
  0631470  add 0, 0, 3
  0631474  add 3, 0, 9
  0631478  bt 26, 0x6314a0
  063147c  clrldi 11, 3, 32
  0631480  lwz 9, 4(5)
  0631484  lwz 0, 0(5)
  0631488  cmpwi 7, 9, 0
  063148c  stw 0, 400(11)
  0631490  bt 30, 0x6314b0
  0631494  stw 9, 8(11)
  0631498  lwz 0, 24(5)
  063149c  stw 0, 12(11)
  06314a0  mr 0, 3
  06314a4  ld 30, -16(1)
  06314a8  clrldi 3, 0, 32
  06314ac  blr
  06314b0  lwz 9, -32752(30)
  06314b4  lwz 0, 0(9)
  06314b8  stw 0, 8(11)
  06314bc  b 0x631498

FUN_006314c0:   # 0x6314c0, 0x184 bytes
  06314c0  cmpdi 3, 0
  06314c4  mflr 0
  06314c8  stdu 1, -208(1)
  06314cc  std 24, 144(1)
  06314d0  std 26, 160(1)
  06314d4  std 29, 184(1)
  06314d8  std 31, 200(1)
  06314dc  std 21, 120(1)
  06314e0  std 22, 128(1)
  06314e4  std 23, 136(1)
  06314e8  std 25, 152(1)
  06314ec  std 27, 168(1)
  06314f0  std 28, 176(1)
  06314f4  std 0, 224(1)
  06314f8  mr 29, 3
  06314fc  mr 31, 4
  0631500  mr 24, 5
  0631504  mr 26, 4
  0631508  bf 2, 0x63154c
  063150c  li 3, 0
  0631510  ld 0, 224(1)
  0631514  clrldi 3, 3, 32
  0631518  ld 21, 120(1)
  063151c  ld 22, 128(1)
  0631520  mtlr 0
  0631524  ld 23, 136(1)
  0631528  ld 24, 144(1)
  063152c  ld 25, 152(1)
  0631530  ld 26, 160(1)
  0631534  ld 27, 168(1)
  0631538  ld 28, 176(1)
  063153c  ld 29, 184(1)
  0631540  ld 31, 200(1)
  0631544  addi 1, 1, 208
  0631548  blr
  063154c  cmpwi 7, 5, 0
  0631550  bt 30, 0x63150c
  0631554  li 4, 8
  0631558  li 5, 512
  063155c  mulli 28, 31, 408
  0631560  addi 21, 28, 24
  0631564  rlwinm 3, 21, 0, 0, 28
  0631568  bl 0x630d9c
  063156c  cmpwi 7, 3, 0
  0631570  bt 30, 0x63150c
  0631574  lis 0, 21318
  0631578  addi 9, 28, 16
  063157c  ori 0, 0, 21569
  0631580  stw 9, 4(3)
  0631584  stw 0, 0(3)
  0631588  li 0, 408
  063158c  li 9, 0
  0631590  sth 0, 22(3)
  0631594  li 0, 2
  0631598  cmpwi 7, 31, 0
  063159c  sth 9, 18(3)
  06315a0  sth 0, 16(3)
  06315a4  li 9, 24
  06315a8  li 0, 0
  06315ac  mr 25, 3
  06315b0  stw 31, 8(3)
  06315b4  sth 9, 20(3)
  06315b8  stw 0, 12(3)
  06315bc  bt 30, 0x631638
  06315c0  mr 28, 29
  06315c4  li 27, 0
  06315c8  clrldi 23, 3, 32
  06315cc  li 22, 0
  06315d0  b 0x6315fc
  06315d4  bl 0x631434
  06315d8  clrldi 4, 31, 32
  06315dc  mr 29, 3
  06315e0  li 5, 408
  06315e4  clrldi 3, 3, 32
  06315e8  bl 0x5c5ad0
  06315ec  nop
  06315f0  cmpw 7, 26, 27
  06315f4  stw 22, 400(29)
  06315f8  bt 30, 0x631638
  06315fc  clrldi 9, 28, 32
  0631600  addi 28, 28, 4
  0631604  lwz 3, 0(9)
  0631608  bl 0x631074
  063160c  clrldi 4, 27, 32
  0631610  mr 31, 3
  0631614  li 5, 0
  0631618  cmpwi 7, 31, 0
  063161c  mr 3, 23
  0631620  addi 27, 27, 1
  0631624  bf 30, 0x6315d4
  0631628  mr 3, 23
  063162c  bl 0x630e78
  0631630  li 3, 0
  0631634  b 0x631510
  0631638  mr 3, 25
  063163c  stw 21, 0(24)
  0631640  b 0x631510

FUN_00631644:   # 0x631644, 0x48 bytes
  0631644  li 0, 8
  0631648  addi 7, 1, -32
  063164c  mtctr 0
  0631650  li 0, 0
  0631654  addi 8, 1, -17
  0631658  li 10, 0
  063165c  std 3, -32(1)
  0631660  std 0, -24(1)
  0631664  add 9, 10, 7
  0631668  clrldi 11, 8, 32
  063166c  clrldi 9, 9, 32
  0631670  addi 10, 10, 1
  0631674  addi 8, 8, -1
  0631678  lbz 0, 0(9)
  063167c  stb 0, 0(11)
  0631680  bdnz 0x631664
  0631684  ld 3, -24(1)
  0631688  blr

FUN_0063168c:   # 0x63168c, 0x34 bytes
  063168c  cmpdi 3, 0
  0631690  std 30, -16(1)
  0631694  mr 0, 3
  0631698  lwz 30, -29412(2)
  063169c  li 3, -110
  06316a0  bt 2, 0x6316b4
  06316a4  lwz 9, -32764(30)
  06316a8  li 3, 0
  06316ac  stw 4, 564(9)
  06316b0  stw 0, 560(9)
  06316b4  extsw 3, 3
  06316b8  ld 30, -16(1)
  06316bc  blr

FUN_006316c0:   # 0x6316c0, 0xbc bytes
  06316c0  stdu 1, -176(1)
  06316c4  mflr 0
  06316c8  std 30, 160(1)
  06316cc  lwz 30, -29412(2)
  06316d0  mr 9, 3
  06316d4  std 0, 192(1)
  06316d8  std 29, 152(1)
  06316dc  std 31, 168(1)
  06316e0  lwz 10, -32764(30)
  06316e4  lwz 0, 560(10)
  06316e8  cmpwi 7, 0, 0
  06316ec  bt 30, 0x631708
  06316f0  lwz 29, -32732(30)
  06316f4  clrldi 11, 0, 32
  06316f8  addi 3, 1, 112
  06316fc  lwz 31, 0(29)
  0631700  cmpwi 7, 31, 0
  0631704  bt 30, 0x631724
  0631708  ld 0, 192(1)
  063170c  ld 29, 152(1)
  0631710  ld 30, 160(1)
  0631714  mtlr 0
  0631718  ld 31, 168(1)
  063171c  addi 1, 1, 176
  0631720  blr
  0631724  stw 9, 112(1)
  0631728  lwz 0, 564(10)
  063172c  li 9, 1
  0631730  stw 4, 124(1)
  0631734  stw 9, 0(29)
  0631738  stw 5, 116(1)
  063173c  stw 6, 128(1)
  0631740  stw 0, 120(1)
  0631744  lwz 0, 0(11)
  0631748  std 2, 40(1)
  063174c  mtctr 0
  0631750  lwz 2, 4(11)
  0631754  bctrl
  0631758  ld 2, 40(1)
  063175c  ld 0, 192(1)
  0631760  stw 31, 0(29)
  0631764  mtlr 0
  0631768  ld 29, 152(1)
  063176c  ld 30, 160(1)
  0631770  ld 31, 168(1)
  0631774  addi 1, 1, 176
  0631778  blr

FUN_0063177c:   # 0x63177c, 0x34 bytes
  063177c  stdu 1, -128(1)
  0631780  mflr 0
  0631784  std 0, 144(1)
  0631788  bl 0x631074
  063178c  li 0, 0
  0631790  cmpwi 7, 3, 0
  0631794  bt 30, 0x63179c
  0631798  lbz 0, 21(3)
  063179c  extsw 3, 0
  06317a0  ld 0, 144(1)
  06317a4  addi 1, 1, 128
  06317a8  mtlr 0
  06317ac  blr

FUN_006317b0:   # 0x6317b0, 0x144 bytes
  06317b0  cmpwi 7, 3, 0
  06317b4  mflr 0
  06317b8  stdu 1, -128(1)
  06317bc  std 30, 112(1)
  06317c0  std 0, 144(1)
  06317c4  lwz 30, -29412(2)
  06317c8  mr 11, 4
  06317cc  bt- 30, 0x6318d8
  06317d0  lis 0, 16724
  06317d4  lwz 6, 0(3)
  06317d8  ori 0, 0, 18003
  06317dc  cmpw 7, 6, 0
  06317e0  bt- 30, 0x6318bc
  06317e4  xoris 0, 6, 21318
  06317e8  cmpwi 7, 0, 21569
  06317ec  bf 30, 0x63185c
  06317f0  lhz 6, 16(3)
  06317f4  cmpwi 7, 6, 2
  06317f8  bf 30, 0x63187c
  06317fc  lhz 6, 22(3)
  0631800  cmpwi 7, 6, 408
  0631804  bf 30, 0x63189c
  0631808  cmpwi 7, 4, 0
  063180c  bt 30, 0x631820
  0631810  lhz 9, 20(3)
  0631814  addi 9, 9, 408
  0631818  cmplw 7, 9, 4
  063181c  bt- 29, 0x63183c
  0631820  li 3, 0
  0631824  ld 0, 144(1)
  0631828  extsw 3, 3
  063182c  ld 30, 112(1)
  0631830  addi 1, 1, 128
  0631834  mtlr 0
  0631838  blr
  063183c  lwz 3, -32704(30)
  0631840  clrldi 6, 11, 32
  0631844  lwz 4, -32724(30)
  0631848  li 5, 5119
  063184c  bl 0x61948c
  0631850  nop
  0631854  li 3, -109
  0631858  b 0x631824
  063185c  lwz 3, -32716(30)
  0631860  clrldi 6, 6, 32
  0631864  lwz 4, -32724(30)
  0631868  li 5, 5097
  063186c  bl 0x61948c
  0631870  nop
  0631874  li 3, -108
  0631878  b 0x631824
  063187c  lwz 3, -32712(30)
  0631880  extsw 6, 6
  0631884  lwz 4, -32724(30)
  0631888  li 5, 5104
  063188c  bl 0x61948c
  0631890  nop
  0631894  li 3, -111
  0631898  b 0x631824
  063189c  lwz 3, -32708(30)
  06318a0  extsw 6, 6
  06318a4  lwz 4, -32724(30)
  06318a8  li 5, 5111
  06318ac  bl 0x61948c
  06318b0  nop
  06318b4  li 3, -107
  06318b8  b 0x631824
  06318bc  lwz 3, -32720(30)
  06318c0  li 5, 5091
  06318c4  lwz 4, -32724(30)
  06318c8  bl 0x61948c
  06318cc  nop
  06318d0  li 3, -112
  06318d4  b 0x631824
  06318d8  lwz 3, -32728(30)
  06318dc  li 5, 5084
  06318e0  lwz 4, -32724(30)
  06318e4  bl 0x61948c
  06318e8  nop
  06318ec  li 3, -110
  06318f0  b 0x631824

FUN_006318f4:   # 0x6318f4, 0x118 bytes
  06318f4  stdu 1, -160(1)
  06318f8  mflr 0
  06318fc  std 28, 128(1)
  0631900  mr 28, 3
  0631904  std 27, 120(1)
  0631908  cmpwi 7, 28, 0
  063190c  std 29, 136(1)
  0631910  std 31, 152(1)
  0631914  std 0, 176(1)
  0631918  li 3, -110
  063191c  bt 30, 0x631998
  0631920  clrldi 27, 28, 32
  0631924  li 4, 0
  0631928  mr 3, 27
  063192c  mr 31, 28
  0631930  bl 0x6317b0
  0631934  cmpwi 7, 3, 0
  0631938  bf 30, 0x6319bc
  063193c  lwz 0, 8(28)
  0631940  mr 3, 28
  0631944  lhz 9, 20(28)
  0631948  cmpwi 7, 0, 0
  063194c  add 8, 9, 28
  0631950  bt 30, 0x631984
  0631954  li 11, 0
  0631958  li 10, 0
  063195c  lhz 9, 22(31)
  0631960  mullw 9, 9, 11
  0631964  add 9, 8, 9
  0631968  addi 11, 11, 1
  063196c  clrldi 9, 9, 32
  0631970  stb 10, 18(9)
  0631974  stw 10, 0(9)
  0631978  lwz 0, 8(31)
  063197c  cmplw 7, 0, 11
  0631980  bt 29, 0x63195c
  0631984  li 0, 0
  0631988  clrldi 3, 3, 32
  063198c  stw 0, 0(31)
  0631990  bl 0x630e78
  0631994  li 3, 0
  0631998  ld 0, 176(1)
  063199c  extsw 3, 3
  06319a0  ld 27, 120(1)
  06319a4  ld 28, 128(1)
  06319a8  mtlr 0
  06319ac  ld 29, 136(1)
  06319b0  ld 31, 152(1)
  06319b4  addi 1, 1, 160
  06319b8  blr
  06319bc  lis 0, 16724
  06319c0  lwz 9, 0(28)
  06319c4  li 3, 0
  06319c8  ori 0, 0, 18003
  06319cc  cmpw 7, 9, 0
  06319d0  bf 30, 0x631998
  06319d4  li 0, 0
  06319d8  mr 3, 27
  06319dc  stw 0, 0(28)
  06319e0  bl 0x630e78
  06319e4  ld 0, 176(1)
  06319e8  li 3, 0
  06319ec  ld 27, 120(1)
  06319f0  ld 28, 128(1)
  06319f4  mtlr 0
  06319f8  extsw 3, 3
  06319fc  ld 29, 136(1)
  0631a00  ld 31, 152(1)
  0631a04  addi 1, 1, 160
  0631a08  blr

FUN_00631a0c:   # 0x631a0c, 0x4c4 bytes
  0631a0c  cmpdi 3, 0
  0631a10  mflr 0
  0631a14  stdu 1, -304(1)
  0631a18  std 30, 288(1)
  0631a1c  std 0, 320(1)
  0631a20  std 14, 160(1)
  0631a24  mr 0, 3
  0631a28  lwz 30, -29412(2)
  0631a2c  std 15, 168(1)
  0631a30  std 16, 176(1)
  0631a34  std 17, 184(1)
  0631a38  std 18, 192(1)
  0631a3c  std 19, 200(1)
  0631a40  std 20, 208(1)
  0631a44  std 21, 216(1)
  0631a48  std 22, 224(1)
  0631a4c  std 23, 232(1)
  0631a50  std 24, 240(1)
  0631a54  std 25, 248(1)
  0631a58  std 26, 256(1)
  0631a5c  std 27, 264(1)
  0631a60  std 28, 272(1)
  0631a64  std 29, 280(1)
  0631a68  std 31, 296(1)
  0631a6c  li 3, -110
  0631a70  bt 2, 0x631dd8
  0631a74  mr 31, 0
  0631a78  lis 0, 16724
  0631a7c  ori 0, 0, 18003
  0631a80  lwz 3, 0(31)
  0631a84  lwz 5, 8(31)
  0631a88  cmpw 7, 3, 0
  0631a8c  lhz 18, 20(31)
  0631a90  lhz 19, 22(31)
  0631a94  clrldi 27, 5, 32
  0631a98  stw 5, 132(1)
  0631a9c  lhz 29, 16(31)
  0631aa0  mr 4, 18
  0631aa4  mr 28, 19
  0631aa8  bt 30, 0x631e34
  0631aac  lis 0, 21318
  0631ab0  mr 9, 29
  0631ab4  ori 0, 0, 21569
  0631ab8  cmpw 7, 3, 0
  0631abc  bf 30, 0x631eb0
  0631ac0  clrlwi 0, 9, 16
  0631ac4  cmpwi 7, 0, 2
  0631ac8  bf 30, 0x631e90
  0631acc  lwz 0, 4(31)
  0631ad0  clrlwi 10, 4, 16
  0631ad4  lwz 9, 12(31)
  0631ad8  slwi 24, 3, 24
  0631adc  slwi 23, 0, 24
  0631ae0  lhz 7, 18(31)
  0631ae4  srwi 6, 3, 24
  0631ae8  rlwinm 20, 3, 24, 16, 23
  0631aec  rlwinm 5, 3, 8, 8, 15
  0631af0  srwi 4, 0, 24
  0631af4  rlwinm 3, 0, 24, 16, 23
  0631af8  rlwinm 0, 0, 8, 8, 15
  0631afc  clrlwi 11, 29, 16
  0631b00  clrlwi 8, 28, 16
  0631b04  rlwinm 25, 9, 24, 16, 23
  0631b08  rlwinm 28, 27, 24, 16, 23
  0631b0c  slwi 22, 27, 24
  0631b10  slwi 21, 9, 24
  0631b14  srwi 29, 27, 24
  0631b18  srwi 26, 9, 24
  0631b1c  rlwinm 27, 27, 8, 8, 15
  0631b20  rlwinm 9, 9, 8, 8, 15
  0631b24  or 0, 0, 23
  0631b28  lwz 23, 132(1)
  0631b2c  or 5, 5, 24
  0631b30  or 4, 4, 3
  0631b34  or 29, 29, 28
  0631b38  or 26, 26, 25
  0631b3c  rlwinm 3, 11, 8, 16, 23
  0631b40  rlwinm 28, 7, 8, 16, 23
  0631b44  rlwinm 25, 10, 8, 16, 23
  0631b48  rlwinm 24, 8, 8, 16, 23
  0631b4c  or 6, 6, 20
  0631b50  or 27, 27, 22
  0631b54  or 9, 9, 21
  0631b58  srwi 11, 11, 8
  0631b5c  srwi 7, 7, 8
  0631b60  srwi 10, 10, 8
  0631b64  srwi 8, 8, 8
  0631b68  cmpwi 7, 23, 0
  0631b6c  or 4, 4, 0
  0631b70  or 6, 6, 5
  0631b74  or 29, 29, 27
  0631b78  or 26, 26, 9
  0631b7c  or 11, 11, 3
  0631b80  or 7, 7, 28
  0631b84  or 10, 10, 25
  0631b88  or 8, 8, 24
  0631b8c  clrlwi 0, 18, 16
  0631b90  stw 6, 0(31)
  0631b94  stw 4, 4(31)
  0631b98  stw 29, 8(31)
  0631b9c  stw 26, 12(31)
  0631ba0  sth 11, 16(31)
  0631ba4  sth 7, 18(31)
  0631ba8  sth 10, 20(31)
  0631bac  sth 8, 22(31)
  0631bb0  add 0, 0, 31
  0631bb4  bt 30, 0x631dd4
  0631bb8  mr 31, 0
  0631bbc  clrlwi 19, 19, 16
  0631bc0  addi 24, 31, 84
  0631bc4  addi 0, 31, 96
  0631bc8  addi 5, 31, 112
  0631bcc  li 6, 0
  0631bd0  stw 19, 116(1)
  0631bd4  stw 24, 112(1)
  0631bd8  stw 0, 124(1)
  0631bdc  stw 5, 120(1)
  0631be0  stw 6, 128(1)
  0631be4  clrldi 12, 31, 32
  0631be8  lwz 9, 120(1)
  0631bec  addi 8, 31, 24
  0631bf0  lwz 25, 124(1)
  0631bf4  std 9, 136(1)
  0631bf8  clrldi 8, 8, 32
  0631bfc  lwz 26, 112(1)
  0631c00  li 23, 0
  0631c04  lwz 0, 0(12)
  0631c08  stw 23, 4(12)
  0631c0c  slwi 10, 0, 24
  0631c10  rlwinm 11, 0, 24, 16, 23
  0631c14  srwi 9, 0, 24
  0631c18  rlwinm 0, 0, 8, 8, 15
  0631c1c  or 9, 9, 11
  0631c20  ld 11, 136(1)
  0631c24  or 0, 0, 10
  0631c28  stw 23, 8(12)
  0631c2c  or 9, 9, 0
  0631c30  stw 23, 12(12)
  0631c34  stw 9, 0(12)
  0631c38  lwz 0, 0(8)
  0631c3c  ld 3, 0(11)
  0631c40  slwi 10, 0, 24
  0631c44  rlwinm 11, 0, 24, 16, 23
  0631c48  srwi 9, 0, 24
  0631c4c  rlwinm 0, 0, 8, 8, 15
  0631c50  or 9, 9, 11
  0631c54  or 0, 0, 10
  0631c58  std 12, 144(1)
  0631c5c  or 9, 9, 0
  0631c60  stw 9, 0(8)
  0631c64  lwz 7, 12(25)
  0631c68  lwz 10, 0(25)
  0631c6c  slwi 24, 7, 24
  0631c70  lwz 0, 0(26)
  0631c74  lwz 9, 4(26)
  0631c78  rlwinm 23, 10, 24, 16, 23
  0631c7c  mtlr 24
  0631c80  lwz 11, 8(26)
  0631c84  lwz 8, 4(25)
  0631c88  srwi 29, 10, 24
  0631c8c  slwi 17, 0, 24
  0631c90  slwi 16, 9, 24
  0631c94  slwi 15, 11, 24
  0631c98  slwi 14, 10, 24
  0631c9c  slwi 19, 8, 24
  0631ca0  srwi 27, 0, 24
  0631ca4  rlwinm 18, 0, 24, 16, 23
  0631ca8  srwi 28, 9, 24
  0631cac  rlwinm 21, 9, 24, 16, 23
  0631cb0  srwi 5, 11, 24
  0631cb4  rlwinm 20, 11, 24, 16, 23
  0631cb8  srwi 4, 8, 24
  0631cbc  rlwinm 22, 8, 24, 16, 23
  0631cc0  srwi 6, 7, 24
  0631cc4  rlwinm 24, 7, 24, 16, 23
  0631cc8  or 29, 29, 23
  0631ccc  rlwinm 0, 0, 8, 8, 15
  0631cd0  rlwinm 9, 9, 8, 8, 15
  0631cd4  rlwinm 11, 11, 8, 8, 15
  0631cd8  rlwinm 10, 10, 8, 8, 15
  0631cdc  rlwinm 8, 8, 8, 8, 15
  0631ce0  rlwinm 7, 7, 8, 8, 15
  0631ce4  or 0, 0, 17
  0631ce8  or 10, 10, 14
  0631cec  or 9, 9, 16
  0631cf0  or 11, 11, 15
  0631cf4  or 8, 8, 19
  0631cf8  or 27, 27, 18
  0631cfc  or 28, 28, 21
  0631d00  mflr 23
  0631d04  or 5, 5, 20
  0631d08  or 7, 7, 23
  0631d0c  or 4, 4, 22
  0631d10  or 6, 6, 24
  0631d14  or 27, 27, 0
  0631d18  or 5, 5, 11
  0631d1c  or 29, 29, 10
  0631d20  or 6, 6, 7
  0631d24  or 28, 28, 9
  0631d28  or 4, 4, 8
  0631d2c  stw 5, 8(26)
  0631d30  stw 6, 12(25)
  0631d34  stw 27, 0(26)
  0631d38  stw 28, 4(26)
  0631d3c  stw 29, 0(25)
  0631d40  stw 4, 4(25)
  0631d44  bl 0x631644
  0631d48  ld 5, 136(1)
  0631d4c  li 0, 128
  0631d50  ld 12, 144(1)
  0631d54  li 6, 0
  0631d58  addi 10, 31, 144
  0631d5c  mtctr 0
  0631d60  std 3, 0(5)
  0631d64  stw 6, 8(5)
  0631d68  clrldi 9, 10, 32
  0631d6c  addi 10, 10, 2
  0631d70  lhz 0, 0(9)
  0631d74  rlwinm 11, 0, 8, 16, 23
  0631d78  srwi 0, 0, 8
  0631d7c  or 0, 0, 11
  0631d80  sth 0, 0(9)
  0631d84  bdnz+ 0x631d68
  0631d88  lwz 8, 128(1)
  0631d8c  li 9, 0
  0631d90  lwz 11, 132(1)
  0631d94  addi 8, 8, 1
  0631d98  lwz 23, 116(1)
  0631d9c  lwz 24, 112(1)
  0631da0  lwz 0, 124(1)
  0631da4  cmpw 7, 11, 8
  0631da8  lwz 5, 120(1)
  0631dac  add 24, 24, 23
  0631db0  add 0, 0, 23
  0631db4  add 5, 5, 23
  0631db8  stw 8, 128(1)
  0631dbc  stw 9, 400(12)
  0631dc0  add 31, 31, 23
  0631dc4  stw 24, 112(1)
  0631dc8  stw 0, 124(1)
  0631dcc  stw 5, 120(1)
  0631dd0  bf 30, 0x631be4
  0631dd4  li 3, 0
  0631dd8  ld 0, 320(1)
  0631ddc  extsw 3, 3
  0631de0  ld 14, 160(1)
  0631de4  ld 15, 168(1)
  0631de8  mtlr 0
  0631dec  ld 16, 176(1)
  0631df0  ld 17, 184(1)
  0631df4  ld 18, 192(1)
  0631df8  ld 19, 200(1)
  0631dfc  ld 20, 208(1)
  0631e00  ld 21, 216(1)
  0631e04  ld 22, 224(1)
  0631e08  ld 23, 232(1)
  0631e0c  ld 24, 240(1)
  0631e10  ld 25, 248(1)
  0631e14  ld 26, 256(1)
  0631e18  ld 27, 264(1)
  0631e1c  ld 28, 272(1)
  0631e20  ld 29, 280(1)
  0631e24  ld 30, 288(1)
  0631e28  ld 31, 296(1)
  0631e2c  addi 1, 1, 304
  0631e30  blr
  0631e34  rlwinm 0, 5, 24, 16, 23
  0631e38  clrlwi 9, 29, 16
  0631e3c  srwi 7, 5, 24
  0631e40  slwi 6, 5, 24
  0631e44  or 7, 7, 0
  0631e48  rlwinm 0, 9, 8, 16, 23
  0631e4c  srwi 9, 9, 8
  0631e50  rlwinm 8, 5, 8, 8, 15
  0631e54  or 9, 9, 0
  0631e58  clrlwi 11, 18, 16
  0631e5c  clrlwi 0, 9, 16
  0631e60  clrlwi 10, 19, 16
  0631e64  or 8, 8, 6
  0631e68  cmpwi 7, 0, 2
  0631e6c  rlwinm 6, 11, 8, 16, 23
  0631e70  rlwinm 5, 10, 8, 16, 23
  0631e74  srwi 11, 11, 8
  0631e78  srwi 10, 10, 8
  0631e7c  or 7, 7, 8
  0631e80  or 18, 11, 6
  0631e84  or 19, 10, 5
  0631e88  stw 7, 132(1)
  0631e8c  bt 30, 0x631acc
  0631e90  lwz 3, -32712(30)
  0631e94  clrldi 6, 29, 48
  0631e98  lwz 4, -32724(30)
  0631e9c  li 5, 5025
  0631ea0  bl 0x61948c
  0631ea4  nop
  0631ea8  li 3, -111
  0631eac  b 0x631dd8
  0631eb0  clrldi 6, 3, 32
  0631eb4  lwz 4, -32724(30)
  0631eb8  lwz 3, -32716(30)
  0631ebc  li 5, 5018
  0631ec0  bl 0x61948c
  0631ec4  nop
  0631ec8  li 3, -108
  0631ecc  b 0x631dd8

FUN_00631ed0:   # 0x631ed0, 0x198 bytes
  0631ed0  cmpdi 3, 0
  0631ed4  mflr 0
  0631ed8  stdu 1, -128(1)
  0631edc  std 30, 112(1)
  0631ee0  std 0, 144(1)
  0631ee4  lwz 30, -29412(2)
  0631ee8  bt 2, 0x631f70
  0631eec  lwz 0, 0(3)
  0631ef0  cmpwi 7, 0, 0
  0631ef4  bt- 30, 0x631fa0
  0631ef8  lwz 0, 8(3)
  0631efc  cmpwi 7, 0, 0
  0631f00  bt- 30, 0x631fb4
  0631f04  lwz 0, 12(3)
  0631f08  cmpwi 7, 0, 0
  0631f0c  bt- 30, 0x631fdc
  0631f10  lwz 0, 16(3)
  0631f14  cmpwi 7, 0, 0
  0631f18  bt- 30, 0x631fc8
  0631f1c  lwz 0, 20(3)
  0631f20  cmpwi 7, 0, 0
  0631f24  bt- 30, 0x63202c
  0631f28  lwz 0, 24(3)
  0631f2c  cmpwi 7, 0, 0
  0631f30  bt- 30, 0x632018
  0631f34  lwz 0, 28(3)
  0631f38  cmpwi 7, 0, 0
  0631f3c  bt- 30, 0x632004
  0631f40  lwz 0, 32(3)
  0631f44  cmpwi 7, 0, 0
  0631f48  bt- 30, 0x631ff0
  0631f4c  lwz 0, 36(3)
  0631f50  cmpwi 7, 0, 0
  0631f54  bt- 30, 0x632054
  0631f58  lwz 0, 40(3)
  0631f5c  cmpwi 7, 0, 0
  0631f60  bt- 30, 0x632040
  0631f64  lwz 0, 44(3)
  0631f68  cmpwi 7, 0, 0
  0631f6c  bt- 30, 0x631f8c
  0631f70  li 3, 0
  0631f74  ld 0, 144(1)
  0631f78  extsw 3, 3
  0631f7c  ld 30, 112(1)
  0631f80  addi 1, 1, 128
  0631f84  mtlr 0
  0631f88  blr
  0631f8c  lwz 3, -32660(30)
  0631f90  bl 0x61948c
  0631f94  nop
  0631f98  li 3, -110
  0631f9c  b 0x631f74
  0631fa0  lwz 3, -32700(30)
  0631fa4  bl 0x61948c
  0631fa8  nop
  0631fac  li 3, -110
  0631fb0  b 0x631f74
  0631fb4  lwz 3, -32696(30)
  0631fb8  bl 0x61948c
  0631fbc  nop
  0631fc0  li 3, -110
  0631fc4  b 0x631f74
  0631fc8  lwz 3, -32688(30)
  0631fcc  bl 0x61948c
  0631fd0  nop
  0631fd4  li 3, -110
  0631fd8  b 0x631f74
  0631fdc  lwz 3, -32692(30)
  0631fe0  bl 0x61948c
  0631fe4  nop
  0631fe8  li 3, -110
  0631fec  b 0x631f74
  0631ff0  lwz 3, -32672(30)
  0631ff4  bl 0x61948c
  0631ff8  nop
  0631ffc  li 3, -110
  0632000  b 0x631f74
  0632004  lwz 3, -32676(30)
  0632008  bl 0x61948c
  063200c  nop
  0632010  li 3, -110
  0632014  b 0x631f74
  0632018  lwz 3, -32680(30)
  063201c  bl 0x61948c
  0632020  nop
  0632024  li 3, -110
  0632028  b 0x631f74
  063202c  lwz 3, -32684(30)
  0632030  bl 0x61948c
  0632034  nop
  0632038  li 3, -110
  063203c  b 0x631f74
  0632040  lwz 3, -32664(30)
  0632044  bl 0x61948c
  0632048  nop
  063204c  li 3, -110
  0632050  b 0x631f74
  0632054  lwz 3, -32668(30)
  0632058  bl 0x61948c
  063205c  nop
  0632060  li 3, -110
  0632064  b 0x631f74

FUN_00632068:   # 0x632068, 0xbc bytes
  0632068  stdu 1, -128(1)
  063206c  mflr 0
  0632070  std 30, 112(1)
  0632074  std 0, 144(1)
  0632078  lwz 0, 1708(3)
  063207c  clrldi 6, 3, 32
  0632080  std 31, 120(1)
  0632084  cmpwi 7, 0, 0
  0632088  lwz 30, -29412(2)
  063208c  mr 31, 3
  0632090  clrldi 8, 0, 32
  0632094  bt 30, 0x6320cc
  0632098  lwz 0, 0(8)
  063209c  cmpw 7, 0, 3
  06320a0  bt 30, 0x632100
  06320a4  lwz 0, 4(8)
  06320a8  li 5, 357
  06320ac  cmpw 7, 0, 3
  06320b0  bt 30, 0x6320e4
  06320b4  lwz 4, -32724(30)
  06320b8  lwz 3, -32656(30)
  06320bc  bl 0x61948c
  06320c0  nop
  06320c4  li 0, 0
  06320c8  stw 0, 1708(31)
  06320cc  ld 0, 144(1)
  06320d0  ld 30, 112(1)
  06320d4  ld 31, 120(1)
  06320d8  mtlr 0
  06320dc  addi 1, 1, 128
  06320e0  blr
  06320e4  lwz 11, -32764(30)
  06320e8  li 0, 0
  06320ec  stw 0, 4(8)
  06320f0  lwz 9, 56(11)
  06320f4  addi 9, 9, 1
  06320f8  stw 9, 56(11)
  06320fc  b 0x6320c4
  0632100  lwz 10, -32764(30)
  0632104  li 0, 0
  0632108  lwz 11, 4(8)
  063210c  stw 0, 4(8)
  0632110  stw 11, 0(8)
  0632114  lwz 9, 56(10)
  0632118  addi 9, 9, 1
  063211c  stw 9, 56(10)
  0632120  b 0x6320c4

FUN_00632124:   # 0x632124, 0x5c bytes
  0632124  stdu 1, -128(1)
  0632128  mflr 0
  063212c  std 31, 120(1)
  0632130  mr 31, 3
  0632134  std 30, 112(1)
  0632138  std 0, 144(1)
  063213c  lwz 30, -29412(2)
  0632140  lbz 0, 1712(31)
  0632144  cmpwi 7, 0, 0
  0632148  bt 30, 0x632168
  063214c  bl 0x632068
  0632150  lwz 9, -32764(30)
  0632154  li 0, 0
  0632158  lwz 11, 64(9)
  063215c  addi 11, 11, 1
  0632160  stw 11, 64(9)
  0632164  stb 0, 1712(31)
  0632168  ld 0, 144(1)
  063216c  ld 30, 112(1)
  0632170  ld 31, 120(1)
  0632174  mtlr 0
  0632178  addi 1, 1, 128
  063217c  blr

FUN_00632180:   # 0x632180, 0x64 bytes
  0632180  cmpdi 3, 0
  0632184  li 0, -7
  0632188  bf 2, 0x632194
  063218c  extsw 3, 0
  0632190  blr
  0632194  lwz 9, 0(3)
  0632198  li 11, 0
  063219c  cmpwi 7, 9, 40
  06321a0  bf 30, 0x63218c
  06321a4  li 0, 8
  06321a8  stw 9, 0(3)
  06321ac  stw 0, 28(3)
  06321b0  li 0, 101
  06321b4  li 9, -1
  06321b8  stw 0, 4(3)
  06321bc  li 0, 2048
  06321c0  stw 11, 36(3)
  06321c4  stw 0, 16(3)
  06321c8  li 0, 0
  06321cc  stw 9, 8(3)
  06321d0  stw 11, 12(3)
  06321d4  stw 11, 20(3)
  06321d8  stw 11, 24(3)
  06321dc  stw 11, 32(3)
  06321e0  b 0x63218c

FUN_006321e4:   # 0x6321e4, 0x44 bytes
  06321e4  stdu 1, -144(1)
  06321e8  mflr 0
  06321ec  li 4, 0
  06321f0  li 5, 408
  06321f4  std 29, 120(1)
  06321f8  mr 29, 3
  06321fc  std 0, 160(1)
  0632200  bl 0x5d0140
  0632204  nop
  0632208  lis 0, 23294
  063220c  ori 0, 0, 11078
  0632210  stw 0, 0(29)
  0632214  ld 0, 160(1)
  0632218  ld 29, 120(1)
  063221c  addi 1, 1, 144
  0632220  mtlr 0
  0632224  blr

FUN_00632228:   # 0x632228, 0x64 bytes
  0632228  stdu 1, -160(1)
  063222c  mflr 0
  0632230  std 27, 120(1)
  0632234  clrldi 27, 3, 32
  0632238  std 28, 128(1)
  063223c  mr 28, 3
  0632240  mr 3, 27
  0632244  std 29, 136(1)
  0632248  std 0, 176(1)
  063224c  bl 0x6321e4
  0632250  li 0, 0
  0632254  addi 11, 28, 408
  0632258  stb 0, 408(28)
  063225c  lbz 9, 17(28)
  0632260  mr 3, 27
  0632264  stw 11, 400(28)
  0632268  ori 9, 9, 8
  063226c  stb 9, 17(28)
  0632270  ld 0, 176(1)
  0632274  ld 27, 120(1)
  0632278  ld 28, 128(1)
  063227c  mtlr 0
  0632280  ld 29, 136(1)
  0632284  addi 1, 1, 160
  0632288  blr

FUN_0063228c:   # 0x63228c, 0x50 bytes
  063228c  stdu 1, -144(1)
  0632290  mflr 0
  0632294  std 29, 120(1)
  0632298  mr 29, 3
  063229c  std 28, 112(1)
  06322a0  li 5, 736
  06322a4  mr 28, 4
  06322a8  li 4, 0
  06322ac  std 0, 160(1)
  06322b0  bl 0x5d0140
  06322b4  nop
  06322b8  li 0, 30
  06322bc  stb 0, 732(29)
  06322c0  ld 0, 160(1)
  06322c4  stw 28, 696(29)
  06322c8  mtlr 0
  06322cc  ld 28, 112(1)
  06322d0  ld 29, 120(1)
  06322d4  addi 1, 1, 144
  06322d8  blr

FUN_006322dc:   # 0x6322dc, 0x80 bytes
  06322dc  stdu 1, -144(1)
  06322e0  mflr 0
  06322e4  std 29, 120(1)
  06322e8  std 31, 136(1)
  06322ec  std 0, 160(1)
  06322f0  bl 0x631074
  06322f4  cmpwi 7, 3, 0
  06322f8  clrldi 29, 3, 32
  06322fc  mr 31, 3
  0632300  mr 3, 29
  0632304  bt 30, 0x63232c
  0632308  bl 0x63a390
  063230c  nop
  0632310  lbz 0, 17(31)
  0632314  rlwinm 0, 0, 0, 29, 29
  0632318  li 9, 0
  063231c  cmpwi 7, 0, 0
  0632320  mr 3, 29
  0632324  stw 9, 0(31)
  0632328  bf 30, 0x632344
  063232c  ld 0, 160(1)
  0632330  ld 29, 120(1)
  0632334  ld 31, 136(1)
  0632338  mtlr 0
  063233c  addi 1, 1, 144
  0632340  blr
  0632344  ld 0, 160(1)
  0632348  ld 29, 120(1)
  063234c  ld 31, 136(1)
  0632350  addi 1, 1, 144
  0632354  mtlr 0
  0632358  b 0x630e78

FUN_0063235c:   # 0x63235c, 0xa8 bytes
  063235c  slwi 5, 5, 2
  0632360  mflr 0
  0632364  stdu 1, -128(1)
  0632368  std 0, 144(1)
  063236c  addi 0, 5, 64
  0632370  add 7, 5, 7
  0632374  extsw 0, 0
  0632378  add 5, 5, 6
  063237c  add 9, 4, 0
  0632380  lwz 0, 0(4)
  0632384  std 31, 112(1)
  0632388  rlwinm 0, 0, 0, 28, 28
  063238c  clrldi 7, 7, 32
  0632390  cmpwi 7, 0, 0
  0632394  clrldi 5, 5, 32
  0632398  clrldi 31, 3, 32
  063239c  bf 30, 0x6323b8
  06323a0  ld 0, 144(1)
  06323a4  mr 3, 31
  06323a8  ld 31, 112(1)
  06323ac  addi 1, 1, 128
  06323b0  mtlr 0
  06323b4  blr
  06323b8  mr 3, 31
  06323bc  lwz 4, 4(9)
  06323c0  lwz 6, 0(7)
  06323c4  lfs 1, 0(5)
  06323c8  bl 0x609078
  06323cc  nop
  06323d0  srawi 0, 3, 31
  06323d4  xor 3, 0, 3
  06323d8  sub 3, 3, 0
  06323dc  ld 0, 144(1)
  06323e0  neg 3, 3
  06323e4  mtlr 0
  06323e8  srawi 3, 3, 31
  06323ec  extsw 3, 3
  06323f0  and 31, 31, 3
  06323f4  mr 3, 31
  06323f8  ld 31, 112(1)
  06323fc  addi 1, 1, 128
  0632400  blr

FUN_00632404:   # 0x632404, 0x104 bytes
  0632404  mr 9, 4
  0632408  mflr 0
  063240c  stdu 1, -384(1)
  0632410  std 0, 400(1)
  0632414  addi 0, 1, 112
  0632418  std 27, 344(1)
  063241c  clrldi 27, 0, 32
  0632420  lwz 0, 0(9)
  0632424  std 29, 360(1)
  0632428  rlwinm 0, 0, 0, 27, 27
  063242c  mr 29, 3
  0632430  cmpwi 7, 0, 0
  0632434  std 26, 336(1)
  0632438  std 28, 352(1)
  063243c  std 31, 376(1)
  0632440  mr 28, 5
  0632444  li 4, 0
  0632448  mr 26, 9
  063244c  mr 3, 27
  0632450  li 5, 220
  0632454  clrldi 31, 29, 32
  0632458  bf 30, 0x632484
  063245c  ld 0, 400(1)
  0632460  mr 3, 31
  0632464  ld 26, 336(1)
  0632468  ld 27, 344(1)
  063246c  mtlr 0
  0632470  ld 28, 352(1)
  0632474  ld 29, 360(1)
  0632478  ld 31, 376(1)
  063247c  addi 1, 1, 384
  0632480  blr
  0632484  bl 0x5d0140
  0632488  nop
  063248c  slwi 9, 28, 2
  0632490  addi 9, 9, 128
  0632494  li 0, 220
  0632498  extsw 9, 9
  063249c  li 11, 16
  06324a0  add 9, 26, 9
  06324a4  stw 0, 112(1)
  06324a8  stw 11, 116(1)
  06324ac  mr 4, 27
  06324b0  mr 3, 31
  06324b4  lwz 0, 4(9)
  06324b8  stw 0, 136(1)
  06324bc  bl 0x607dcc
  06324c0  nop
  06324c4  ld 26, 336(1)
  06324c8  srawi 0, 3, 31
  06324cc  ld 27, 344(1)
  06324d0  ld 28, 352(1)
  06324d4  xor 3, 0, 3
  06324d8  ld 29, 360(1)
  06324dc  sub 3, 3, 0
  06324e0  ld 0, 400(1)
  06324e4  neg 3, 3
  06324e8  mtlr 0
  06324ec  srawi 3, 3, 31
  06324f0  extsw 3, 3
  06324f4  and 31, 31, 3
  06324f8  mr 3, 31
  06324fc  ld 31, 376(1)
  0632500  addi 1, 1, 384
  0632504  blr

FUN_00632508:   # 0x632508, 0x16c bytes
  0632508  slwi 9, 5, 2
  063250c  mflr 0
  0632510  stdu 1, -176(1)
  0632514  std 0, 192(1)
  0632518  add 0, 7, 9
  063251c  extsw 11, 9
  0632520  clrldi 10, 0, 32
  0632524  lwz 0, 0(4)
  0632528  add 9, 6, 9
  063252c  rlwinm 0, 0, 0, 29, 29
  0632530  std 25, 120(1)
  0632534  cmpwi 7, 0, 0
  0632538  std 26, 128(1)
  063253c  std 27, 136(1)
  0632540  std 28, 144(1)
  0632544  std 29, 152(1)
  0632548  std 31, 168(1)
  063254c  mr 28, 3
  0632550  mr 29, 4
  0632554  mr 27, 5
  0632558  mr 26, 6
  063255c  mr 25, 7
  0632560  add 11, 4, 11
  0632564  clrldi 9, 9, 32
  0632568  clrldi 31, 3, 32
  063256c  bf 30, 0x632614
  0632570  cmpwi 7, 28, 0
  0632574  clrldi 27, 27, 32
  0632578  clrldi 26, 26, 32
  063257c  clrldi 25, 25, 32
  0632580  mr 3, 31
  0632584  mr 4, 29
  0632588  mr 5, 27
  063258c  mr 6, 26
  0632590  mr 7, 25
  0632594  bf 30, 0x6325c4
  0632598  ld 0, 192(1)
  063259c  mr 3, 31
  06325a0  ld 25, 120(1)
  06325a4  ld 26, 128(1)
  06325a8  mtlr 0
  06325ac  ld 27, 136(1)
  06325b0  ld 28, 144(1)
  06325b4  ld 29, 152(1)
  06325b8  ld 31, 168(1)
  06325bc  addi 1, 1, 176
  06325c0  blr
  06325c4  bl 0x63235c
  06325c8  mr 4, 29
  06325cc  cmpwi 7, 3, 0
  06325d0  mr 5, 27
  06325d4  mr 6, 26
  06325d8  mr 7, 25
  06325dc  mr 3, 31
  06325e0  bf 30, 0x63263c
  06325e4  li 31, 0
  06325e8  ld 0, 192(1)
  06325ec  mr 3, 31
  06325f0  ld 25, 120(1)
  06325f4  ld 26, 128(1)
  06325f8  mtlr 0
  06325fc  ld 27, 136(1)
  0632600  ld 28, 144(1)
  0632604  ld 29, 152(1)
  0632608  ld 31, 168(1)
  063260c  addi 1, 1, 176
  0632610  blr
  0632614  lwz 6, 0(10)
  0632618  mr 3, 31
  063261c  lfs 1, 4(11)
  0632620  lfs 2, 0(9)
  0632624  bl 0x608578
  0632628  nop
  063262c  cmpwi 7, 3, 0
  0632630  bf 30, 0x632570
  0632634  li 31, 0
  0632638  b 0x6325e8
  063263c  bl 0x632404
  0632640  cmpwi 7, 3, 0
  0632644  bt 30, 0x6325e4
  0632648  ld 0, 192(1)
  063264c  mr 3, 31
  0632650  ld 25, 120(1)
  0632654  ld 26, 128(1)
  0632658  mtlr 0
  063265c  ld 27, 136(1)
  0632660  ld 28, 144(1)
  0632664  ld 29, 152(1)
  0632668  ld 31, 168(1)
  063266c  addi 1, 1, 176
  0632670  blr

FUN_00632674:   # 0x632674, 0x11c bytes
  0632674  stdu 1, -160(1)
  0632678  mflr 0
  063267c  std 30, 144(1)
  0632680  lwz 30, -29412(2)
  0632684  std 27, 120(1)
  0632688  std 0, 176(1)
  063268c  std 28, 128(1)
  0632690  std 29, 136(1)
  0632694  lwz 27, -32764(30)
  0632698  std 31, 152(1)
  063269c  lwz 0, 160(27)
  06326a0  cmpwi 7, 0, 0
  06326a4  bf 29, 0x63276c
  06326a8  li 29, 0
  06326ac  li 31, 0
  06326b0  mr 28, 27
  06326b4  b 0x6326c4
  06326b8  lwz 0, 160(28)
  06326bc  cmpw 7, 0, 29
  06326c0  bf 29, 0x632700
  06326c4  lwz 0, 156(27)
  06326c8  addi 29, 29, 1
  06326cc  li 4, 1
  06326d0  add 0, 31, 0
  06326d4  addi 31, 31, 1420
  06326d8  clrldi 9, 0, 32
  06326dc  lbz 0, 581(9)
  06326e0  cmpwi 7, 0, 0
  06326e4  bt 30, 0x6326b8
  06326e8  lwz 3, 0(9)
  06326ec  bl 0x6084f4
  06326f0  nop
  06326f4  lwz 0, 160(28)
  06326f8  cmpw 7, 0, 29
  06326fc  bt 29, 0x6326c4
  0632700  cmpwi 7, 0, 0
  0632704  bf- 29, 0x63276c
  0632708  li 28, 0
  063270c  li 29, 0
  0632710  lwz 0, 156(27)
  0632714  add 0, 29, 0
  0632718  clrldi 31, 0, 32
  063271c  lbz 9, 581(31)
  0632720  cmpwi 7, 9, 0
  0632724  bf 30, 0x632740
  0632728  b 0x632758
  063272c  bl 0x63f8c4
  0632730  nop
  0632734  lbz 0, 581(31)
  0632738  cmpwi 7, 0, 0
  063273c  bt 30, 0x632758
  0632740  mr 3, 31
  0632744  bl 0x631058
  0632748  cmpwi 7, 3, 0
  063274c  lis 3, 1
  0632750  ori 3, 3, 34464
  0632754  bf 30, 0x63272c
  0632758  addi 28, 28, 1
  063275c  lwz 0, 160(27)
  0632760  addi 29, 29, 1420
  0632764  cmpw 7, 0, 28
  0632768  bt 29, 0x632710
  063276c  ld 0, 176(1)
  0632770  ld 27, 120(1)
  0632774  ld 28, 128(1)
  0632778  mtlr 0
  063277c  ld 29, 136(1)
  0632780  ld 30, 144(1)
  0632784  ld 31, 152(1)
  0632788  addi 1, 1, 160
  063278c  blr

FUN_00632790:   # 0x632790, 0x2a8 bytes
  0632790  stdu 1, -224(1)
  0632794  mflr 0
  0632798  std 30, 192(1)
  063279c  lwz 30, -29412(2)
  06327a0  std 26, 160(1)
  06327a4  std 0, 240(1)
  06327a8  std 23, 136(1)
  06327ac  std 27, 168(1)
  06327b0  lwz 26, -32764(30)
  06327b4  mr 27, 3
  06327b8  stfd 30, 208(1)
  06327bc  mr 23, 3
  06327c0  stfd 31, 216(1)
  06327c4  std 24, 144(1)
  06327c8  std 25, 152(1)
  06327cc  lwz 0, 160(26)
  06327d0  std 28, 176(1)
  06327d4  cmpwi 7, 0, 0
  06327d8  std 29, 184(1)
  06327dc  std 31, 200(1)
  06327e0  bf 29, 0x632874
  06327e4  li 28, 0
  06327e8  lfs 30, -32740(30)
  06327ec  li 31, 0
  06327f0  li 25, 0
  06327f4  li 24, 1
  06327f8  lwz 29, 156(26)
  06327fc  fmr 31, 30
  0632800  addi 28, 28, 1
  0632804  add 29, 31, 29
  0632808  addi 31, 31, 1420
  063280c  clrldi 29, 29, 32
  0632810  mr 3, 29
  0632814  bl 0x631058
  0632818  fmr 1, 30
  063281c  cmpwi 7, 3, 0
  0632820  li 4, 1
  0632824  li 5, 4
  0632828  li 6, 1420
  063282c  li 7, 1
  0632830  li 9, 0
  0632834  mr 3, 29
  0632838  bf 30, 0x632868
  063283c  lwz 0, 0(27)
  0632840  lbz 10, 4(27)
  0632844  rldicl 0, 0, 62, 63
  0632848  extsb 10, 10
  063284c  slwi 0, 0, 16
  0632850  clrldi 0, 0, 32
  0632854  std 0, 112(1)
  0632858  bl 0x61c280
  063285c  nop
  0632860  cmpwi 7, 3, 0
  0632864  bf 30, 0x6328b8
  0632868  lwz 0, 160(26)
  063286c  cmpw 7, 0, 28
  0632870  bt 29, 0x6327f8
  0632874  li 31, 0
  0632878  ld 0, 240(1)
  063287c  ld 23, 136(1)
  0632880  mr 3, 31
  0632884  ld 24, 144(1)
  0632888  ld 25, 152(1)
  063288c  mtlr 0
  0632890  ld 26, 160(1)
  0632894  ld 27, 168(1)
  0632898  ld 28, 176(1)
  063289c  ld 29, 184(1)
  06328a0  ld 30, 192(1)
  06328a4  ld 31, 200(1)
  06328a8  lfd 30, 208(1)
  06328ac  lfd 31, 216(1)
  06328b0  addi 1, 1, 224
  06328b4  blr
  06328b8  clrldi 31, 3, 32
  06328bc  mr 29, 3
  06328c0  clrldi 4, 23, 32
  06328c4  li 5, 432
  06328c8  addi 3, 31, 584
  06328cc  stb 24, 1412(31)
  06328d0  stw 25, 1408(31)
  06328d4  stw 25, 568(31)
  06328d8  stb 25, 1416(31)
  06328dc  stb 24, 1415(31)
  06328e0  stb 24, 1414(31)
  06328e4  stb 25, 580(31)
  06328e8  stb 25, 1417(31)
  06328ec  stb 25, 581(31)
  06328f0  stw 25, 572(31)
  06328f4  stw 25, 1404(31)
  06328f8  stb 25, 1418(31)
  06328fc  stb 25, 1413(31)
  0632900  bl 0x5c5ad0
  0632904  nop
  0632908  addi 10, 29, 600
  063290c  clrldi 4, 10, 32
  0632910  lwz 0, 0(4)
  0632914  rlwinm 0, 0, 0, 29, 29
  0632918  cmpwi 7, 0, 0
  063291c  bf 30, 0x632940
  0632920  li 0, 16
  0632924  li 11, 0
  0632928  mtctr 0
  063292c  add 9, 10, 11
  0632930  addi 11, 11, 4
  0632934  clrldi 9, 9, 32
  0632938  stfs 31, 4(9)
  063293c  bdnz 0x63292c
  0632940  lwz 0, 0(4)
  0632944  rlwinm 0, 0, 0, 28, 28
  0632948  cmpwi 7, 0, 0
  063294c  bf 30, 0x632970
  0632950  li 9, 16
  0632954  li 11, 0
  0632958  mtctr 9
  063295c  add 9, 10, 11
  0632960  addi 11, 11, 4
  0632964  clrldi 9, 9, 32
  0632968  stw 0, 68(9)
  063296c  bdnz 0x63295c
  0632970  lwz 0, 0(4)
  0632974  rlwinm 0, 0, 0, 27, 27
  0632978  cmpwi 7, 0, 0
  063297c  bt 30, 0x632a14
  0632980  addi 3, 31, 1016
  0632984  li 5, 196
  0632988  bl 0x5c5ad0
  063298c  nop
  0632990  li 9, 16
  0632994  li 11, 0
  0632998  mtctr 9
  063299c  li 0, 0
  06329a0  li 10, 0
  06329a4  add 9, 29, 11
  06329a8  addi 11, 11, 4
  06329ac  clrldi 9, 9, 32
  06329b0  stw 10, 1212(9)
  06329b4  stw 0, 1276(9)
  06329b8  stw 0, 1340(9)
  06329bc  bdnz 0x6329a4
  06329c0  li 0, 1
  06329c4  ld 23, 136(1)
  06329c8  mr 3, 31
  06329cc  ld 24, 144(1)
  06329d0  stw 0, 576(31)
  06329d4  lwz 9, 68(26)
  06329d8  ld 0, 240(1)
  06329dc  addi 9, 9, 1
  06329e0  ld 25, 152(1)
  06329e4  ld 27, 168(1)
  06329e8  mtlr 0
  06329ec  stw 9, 68(26)
  06329f0  ld 28, 176(1)
  06329f4  ld 26, 160(1)
  06329f8  ld 29, 184(1)
  06329fc  ld 30, 192(1)
  0632a00  ld 31, 200(1)
  0632a04  lfd 30, 208(1)
  0632a08  lfd 31, 216(1)
  0632a0c  addi 1, 1, 224
  0632a10  blr
  0632a14  li 9, 16
  0632a18  li 11, 0
  0632a1c  mtctr 9
  0632a20  add 9, 10, 11
  0632a24  addi 11, 11, 4
  0632a28  clrldi 9, 9, 32
  0632a2c  stw 0, 132(9)
  0632a30  bdnz 0x632a20
  0632a34  b 0x632980

FUN_00632a38:   # 0x632a38, 0x294 bytes
  0632a38  stdu 1, -192(1)
  0632a3c  mflr 0
  0632a40  std 30, 176(1)
  0632a44  lwz 30, -29412(2)
  0632a48  std 23, 120(1)
  0632a4c  std 24, 128(1)
  0632a50  std 25, 136(1)
  0632a54  std 27, 152(1)
  0632a58  std 26, 144(1)
  0632a5c  std 28, 160(1)
  0632a60  std 29, 168(1)
  0632a64  std 31, 184(1)
  0632a68  std 0, 208(1)
  0632a6c  mr 24, 3
  0632a70  bl 0x632790
  0632a74  cmpwi 7, 3, 0
  0632a78  li 27, 0
  0632a7c  mr 23, 3
  0632a80  mr 25, 3
  0632a84  bt 30, 0x632ae8
  0632a88  lwz 9, -32744(30)
  0632a8c  lwz 0, 0(9)
  0632a90  cmpwi 7, 0, 0
  0632a94  bf 29, 0x632adc
  0632a98  lwz 9, -32756(30)
  0632a9c  clrldi 0, 0, 32
  0632aa0  mtctr 0
  0632aa4  lwz 29, 0(9)
  0632aa8  clrldi 27, 29, 32
  0632aac  addi 9, 29, 8024
  0632ab0  lbz 0, 1712(27)
  0632ab4  cmpwi 7, 0, 0
  0632ab8  bf 30, 0x632ad4
  0632abc  b 0x632b24
  0632ac0  clrldi 3, 29, 32
  0632ac4  addi 9, 29, 8024
  0632ac8  lbz 0, 1712(3)
  0632acc  cmpwi 7, 0, 0
  0632ad0  bt 30, 0x632b20
  0632ad4  mr 29, 9
  0632ad8  bdnz 0x632ac0
  0632adc  clrldi 3, 25, 32
  0632ae0  li 27, 0
  0632ae4  bl 0x631150
  0632ae8  ld 0, 208(1)
  0632aec  mr 3, 27
  0632af0  ld 23, 120(1)
  0632af4  ld 24, 128(1)
  0632af8  mtlr 0
  0632afc  ld 25, 136(1)
  0632b00  ld 26, 144(1)
  0632b04  ld 27, 152(1)
  0632b08  ld 28, 160(1)
  0632b0c  ld 29, 168(1)
  0632b10  ld 30, 176(1)
  0632b14  ld 31, 184(1)
  0632b18  addi 1, 1, 192
  0632b1c  blr
  0632b20  mr 27, 3
  0632b24  lwz 26, -32764(30)
  0632b28  li 0, 1
  0632b2c  stb 0, 1712(27)
  0632b30  lwz 0, 172(26)
  0632b34  lwz 9, 60(26)
  0632b38  cmpwi 7, 0, 0
  0632b3c  addi 9, 9, 1
  0632b40  stw 9, 60(26)
  0632b44  bf 29, 0x632cc0
  0632b48  lwz 28, 168(26)
  0632b4c  clrldi 0, 0, 32
  0632b50  li 6, 127
  0632b54  clrldi 31, 28, 32
  0632b58  mtctr 0
  0632b5c  addi 7, 28, 16
  0632b60  li 11, 0
  0632b64  lwz 10, 0(31)
  0632b68  cmpwi 7, 10, 0
  0632b6c  bf 30, 0x632b94
  0632b70  b 0x632be0
  0632b74  mr 28, 7
  0632b78  bdz 0x632c50
  0632b7c  clrldi 9, 28, 32
  0632b80  addi 7, 28, 16
  0632b84  mr 31, 9
  0632b88  lwz 10, 0(9)
  0632b8c  cmpwi 7, 10, 0
  0632b90  bt 30, 0x632be0
  0632b94  lwz 0, 4(31)
  0632b98  clrldi 8, 10, 32
  0632b9c  extsb 9, 6
  0632ba0  cmpwi 7, 0, 0
  0632ba4  bf 30, 0x632b74
  0632ba8  lbz 5, 1715(8)
  0632bac  extsb 0, 5
  0632bb0  cmpw 7, 0, 9
  0632bb4  bf 28, 0x632b74
  0632bb8  lwz 0, 7888(8)
  0632bbc  clrlwi 0, 0, 31
  0632bc0  cmpwi 7, 0, 0
  0632bc4  bf 30, 0x632b74
  0632bc8  lwz 0, 1708(8)
  0632bcc  cmpw 7, 0, 28
  0632bd0  bf 30, 0x632b74
  0632bd4  mr 6, 5
  0632bd8  mr 11, 10
  0632bdc  b 0x632b74
  0632be0  lwz 9, 52(26)
  0632be4  stw 29, 0(31)
  0632be8  addi 9, 9, 1
  0632bec  stw 9, 52(26)
  0632bf0  addi 3, 29, 8
  0632bf4  lwz 5, 12(31)
  0632bf8  stw 28, 1708(27)
  0632bfc  lbz 6, 568(26)
  0632c00  clrldi 3, 3, 32
  0632c04  lwz 4, 8(31)
  0632c08  bl 0x636f6c
  0632c0c  nop
  0632c10  ld 0, 208(1)
  0632c14  ld 24, 128(1)
  0632c18  stw 29, 572(23)
  0632c1c  mtlr 0
  0632c20  stw 25, 1704(27)
  0632c24  mr 3, 27
  0632c28  ld 23, 120(1)
  0632c2c  ld 25, 136(1)
  0632c30  ld 26, 144(1)
  0632c34  ld 27, 152(1)
  0632c38  ld 28, 160(1)
  0632c3c  ld 29, 168(1)
  0632c40  ld 30, 176(1)
  0632c44  ld 31, 184(1)
  0632c48  addi 1, 1, 192
  0632c4c  blr
  0632c50  extsb 3, 6
  0632c54  lbz 0, 5(24)
  0632c58  extsb 0, 0
  0632c5c  cmpw 7, 0, 3
  0632c60  bf 29, 0x632ca8
  0632c64  cmpwi 7, 11, 0
  0632c68  bt 30, 0x632ca8
  0632c6c  clrldi 11, 11, 32
  0632c70  lwz 9, 52(26)
  0632c74  addi 9, 9, 1
  0632c78  stw 9, 52(26)
  0632c7c  lwz 28, 1708(11)
  0632c80  lwz 3, 1704(11)
  0632c84  clrldi 31, 28, 32
  0632c88  stw 29, 4(31)
  0632c8c  bl 0x63e9c4
  0632c90  nop
  0632c94  li 4, 1
  0632c98  lwz 3, 0(3)
  0632c9c  bl 0x6084f4
  0632ca0  nop
  0632ca4  b 0x632bf0
  0632ca8  mr 3, 27
  0632cac  li 27, 0
  0632cb0  bl 0x632124
  0632cb4  clrldi 3, 25, 32
  0632cb8  bl 0x631150
  0632cbc  b 0x632ae8
  0632cc0  li 11, 0
  0632cc4  li 3, 127
  0632cc8  b 0x632c54

FUN_00632ccc:   # 0x632ccc, 0x60 bytes
  0632ccc  stdu 1, -144(1)
  0632cd0  mflr 0
  0632cd4  std 28, 112(1)
  0632cd8  mr 28, 3
  0632cdc  addi 3, 3, 1720
  0632ce0  std 0, 160(1)
  0632ce4  clrldi 3, 3, 32
  0632ce8  std 29, 120(1)
  0632cec  bl 0x6370e4
  0632cf0  nop
  0632cf4  clrldi 4, 28, 32
  0632cf8  mulli 29, 3, 736
  0632cfc  add 29, 29, 28
  0632d00  addi 29, 29, 1736
  0632d04  clrldi 29, 29, 32
  0632d08  mr 3, 29
  0632d0c  bl 0x63228c
  0632d10  ld 0, 160(1)
  0632d14  mr 3, 29
  0632d18  ld 28, 112(1)
  0632d1c  ld 29, 120(1)
  0632d20  mtlr 0
  0632d24  addi 1, 1, 144
  0632d28  blr

FUN_00632d2c:   # 0x632d2c, 0x100 bytes
  0632d2c  cmpwi 7, 3, 0
  0632d30  mflr 0
  0632d34  stdu 1, -144(1)
  0632d38  std 29, 120(1)
  0632d3c  std 30, 128(1)
  0632d40  std 31, 136(1)
  0632d44  std 0, 160(1)
  0632d48  lwz 30, -29412(2)
  0632d4c  mr 31, 3
  0632d50  mr 29, 4
  0632d54  bt- 30, 0x632d6c
  0632d58  lis 0, 23294
  0632d5c  lwz 9, 0(31)
  0632d60  ori 0, 0, 11078
  0632d64  cmpw 7, 9, 0
  0632d68  bt 30, 0x632da4
  0632d6c  lwz 3, -32652(30)
  0632d70  li 5, 401
  0632d74  lwz 4, -32724(30)
  0632d78  bl 0x61948c
  0632d7c  nop
  0632d80  ld 0, 160(1)
  0632d84  ld 29, 120(1)
  0632d88  li 3, -107
  0632d8c  ld 30, 128(1)
  0632d90  ld 31, 136(1)
  0632d94  mtlr 0
  0632d98  extsw 3, 3
  0632d9c  addi 1, 1, 144
  0632da0  blr
  0632da4  lbz 0, 17(31)
  0632da8  rlwinm 0, 0, 0, 28, 28
  0632dac  cmpwi 7, 0, 0
  0632db0  bf 30, 0x632e00
  0632db4  lwz 0, 0(4)
  0632db8  stw 0, 400(31)
  0632dbc  lwz 0, 4(29)
  0632dc0  cmpwi 7, 0, 0
  0632dc4  bt 30, 0x632e1c
  0632dc8  stw 0, 8(31)
  0632dcc  lwz 0, 8(29)
  0632dd0  li 3, 0
  0632dd4  lwz 9, 24(29)
  0632dd8  stb 0, 16(31)
  0632ddc  ld 0, 160(1)
  0632de0  extsw 3, 3
  0632de4  stw 9, 12(31)
  0632de8  ld 29, 120(1)
  0632dec  mtlr 0
  0632df0  ld 30, 128(1)
  0632df4  ld 31, 136(1)
  0632df8  addi 1, 1, 144
  0632dfc  blr
  0632e00  addi 3, 3, 408
  0632e04  lwz 4, 0(4)
  0632e08  li 5, 255
  0632e0c  clrldi 3, 3, 32
  0632e10  bl 0x5cccec
  0632e14  nop
  0632e18  b 0x632dbc
  0632e1c  lwz 9, -32752(30)
  0632e20  lwz 0, 0(9)
  0632e24  stw 0, 8(31)
  0632e28  b 0x632dcc

FUN_00632e2c:   # 0x632e2c, 0x94 bytes
  0632e2c  stdu 1, -144(1)
  0632e30  mflr 0
  0632e34  std 29, 120(1)
  0632e38  std 0, 160(1)
  0632e3c  lwz 9, 0(4)
  0632e40  clrldi 29, 3, 32
  0632e44  std 28, 112(1)
  0632e48  rlwinm 9, 9, 0, 28, 28
  0632e4c  std 31, 136(1)
  0632e50  cmpwi 7, 9, 0
  0632e54  mr 31, 3
  0632e58  mr 28, 4
  0632e5c  mr 3, 29
  0632e60  bt 30, 0x632e70
  0632e64  lwz 0, 4(31)
  0632e68  oris 0, 0, 4
  0632e6c  stw 0, 4(31)
  0632e70  bl 0x61aa54
  0632e74  nop
  0632e78  lwz 0, 0(31)
  0632e7c  stw 0, 576(31)
  0632e80  lwz 9, 0(28)
  0632e84  mr 3, 29
  0632e88  li 4, 0
  0632e8c  clrlwi 9, 9, 31
  0632e90  li 5, 2
  0632e94  cmpwi 7, 9, 0
  0632e98  bt 30, 0x632ea4
  0632e9c  bl 0x61b0c8
  0632ea0  nop
  0632ea4  ld 0, 160(1)
  0632ea8  ld 28, 112(1)
  0632eac  ld 29, 120(1)
  0632eb0  mtlr 0
  0632eb4  ld 31, 136(1)
  0632eb8  addi 1, 1, 144
  0632ebc  blr

FUN_00632ec0:   # 0x632ec0, 0x148 bytes
  0632ec0  stdu 1, -176(1)
  0632ec4  mflr 0
  0632ec8  std 24, 112(1)
  0632ecc  std 0, 192(1)
  0632ed0  lwz 11, 1404(3)
  0632ed4  mr 24, 3
  0632ed8  std 25, 120(1)
  0632edc  cmpwi 7, 11, 0
  0632ee0  lwz 6, 552(3)
  0632ee4  std 26, 128(1)
  0632ee8  std 27, 136(1)
  0632eec  std 28, 144(1)
  0632ef0  std 29, 152(1)
  0632ef4  std 31, 168(1)
  0632ef8  mr 25, 4
  0632efc  li 3, 0
  0632f00  bt 30, 0x632f7c
  0632f04  addi 9, 11, 1720
  0632f08  clrldi 9, 9, 32
  0632f0c  lbz 28, 6081(9)
  0632f10  cmplw 7, 28, 5
  0632f14  bt 29, 0x632fac
  0632f18  cmpwi 7, 28, 0
  0632f1c  bt 30, 0x632f5c
  0632f20  addi 31, 11, 7624
  0632f24  clrldi 26, 4, 32
  0632f28  clrldi 27, 6, 32
  0632f2c  li 29, 0
  0632f30  clrldi 11, 31, 32
  0632f34  extsw 5, 29
  0632f38  mr 4, 26
  0632f3c  addi 29, 29, 1
  0632f40  mr 6, 27
  0632f44  lwz 9, 0(11)
  0632f48  addi 31, 31, 4
  0632f4c  lwz 3, 1704(9)
  0632f50  bl 0x6311bc
  0632f54  cmpw 7, 28, 29
  0632f58  bf 30, 0x632f30
  0632f5c  lwz 9, 0(25)
  0632f60  rlwinm 0, 9, 0, 29, 29
  0632f64  cmpwi 7, 0, 0
  0632f68  bf 30, 0x632ff4
  0632f6c  rlwinm 0, 9, 0, 27, 28
  0632f70  mr 3, 28
  0632f74  cmpwi 7, 0, 0
  0632f78  bf 30, 0x632fb4
  0632f7c  ld 0, 192(1)
  0632f80  clrldi 3, 3, 32
  0632f84  ld 24, 112(1)
  0632f88  ld 25, 120(1)
  0632f8c  mtlr 0
  0632f90  ld 26, 128(1)
  0632f94  ld 27, 136(1)
  0632f98  ld 28, 144(1)
  0632f9c  ld 29, 152(1)
  0632fa0  ld 31, 168(1)
  0632fa4  addi 1, 1, 176
  0632fa8  blr
  0632fac  mr 28, 5
  0632fb0  b 0x632f18
  0632fb4  clrldi 3, 24, 32
  0632fb8  bl 0x61addc
  0632fbc  nop
  0632fc0  mr 3, 28
  0632fc4  ld 0, 192(1)
  0632fc8  clrldi 3, 3, 32
  0632fcc  ld 24, 112(1)
  0632fd0  ld 25, 120(1)
  0632fd4  mtlr 0
  0632fd8  ld 26, 128(1)
  0632fdc  ld 27, 136(1)
  0632fe0  ld 28, 144(1)
  0632fe4  ld 29, 152(1)
  0632fe8  ld 31, 168(1)
  0632fec  addi 1, 1, 176
  0632ff0  blr
  0632ff4  clrldi 3, 24, 32
  0632ff8  bl 0x61ae90
  0632ffc  nop
  0633000  lwz 9, 0(25)
  0633004  b 0x632f6c

FUN_00633008:   # 0x633008, 0x58 bytes
  0633008  stdu 1, -144(1)
  063300c  mflr 0
  0633010  std 28, 112(1)
  0633014  addi 4, 3, 796
  0633018  clrldi 28, 3, 32
  063301c  std 29, 120(1)
  0633020  mr 29, 3
  0633024  clrldi 4, 4, 32
  0633028  mr 3, 28
  063302c  addi 29, 29, 600
  0633030  std 0, 160(1)
  0633034  bl 0x61c628
  0633038  nop
  063303c  ld 0, 160(1)
  0633040  mr 3, 28
  0633044  ld 28, 112(1)
  0633048  clrldi 4, 29, 32
  063304c  ld 29, 120(1)
  0633050  li 5, 16
  0633054  mtlr 0
  0633058  addi 1, 1, 144
  063305c  b 0x632ec0

FUN_00633060:   # 0x633060, 0x68 bytes
  0633060  stdu 1, -160(1)
  0633064  mflr 0
  0633068  std 28, 128(1)
  063306c  mr 28, 4
  0633070  std 29, 136(1)
  0633074  mr 29, 3
  0633078  mr 3, 4
  063307c  std 0, 176(1)
  0633080  std 27, 120(1)
  0633084  bl 0x61aa54
  0633088  nop
  063308c  lwz 4, 0(28)
  0633090  clrldi 3, 29, 32
  0633094  bl 0x61a8d0
  0633098  nop
  063309c  lbz 9, 580(29)
  06330a0  addi 9, 9, 1
  06330a4  stw 29, 568(28)
  06330a8  stb 9, 580(29)
  06330ac  ld 0, 176(1)
  06330b0  ld 27, 120(1)
  06330b4  ld 28, 128(1)
  06330b8  mtlr 0
  06330bc  ld 29, 136(1)
  06330c0  addi 1, 1, 160
  06330c4  blr

FUN_006330c8:   # 0x6330c8, 0xc0 bytes
  06330c8  stdu 1, -160(1)
  06330cc  mflr 0
  06330d0  std 29, 136(1)
  06330d4  addi 29, 3, 1720
  06330d8  std 28, 128(1)
  06330dc  std 30, 144(1)
  06330e0  clrldi 28, 29, 32
  06330e4  lwz 30, -29412(2)
  06330e8  std 27, 120(1)
  06330ec  std 31, 152(1)
  06330f0  mr 27, 3
  06330f4  li 4, 0
  06330f8  li 5, 6088
  06330fc  addi 31, 3, 1736
  0633100  mr 3, 28
  0633104  std 26, 112(1)
  0633108  std 0, 176(1)
  063310c  bl 0x5d0140
  0633110  nop
  0633114  lfs 0, -32740(30)
  0633118  li 0, -1
  063311c  stfs 0, 6036(29)
  0633120  li 9, 10
  0633124  mr 3, 28
  0633128  li 4, 8
  063312c  stw 0, 5968(29)
  0633130  stw 9, 6064(29)
  0633134  li 26, 0
  0633138  clrldi 27, 27, 32
  063313c  bl 0x637248
  0633140  nop
  0633144  clrldi 3, 31, 32
  0633148  mr 4, 27
  063314c  addi 31, 31, 736
  0633150  bl 0x63228c
  0633154  cmpwi 7, 26, 7
  0633158  addi 26, 26, 1
  063315c  bf 30, 0x633144
  0633160  ld 0, 176(1)
  0633164  ld 26, 112(1)
  0633168  ld 27, 120(1)
  063316c  mtlr 0
  0633170  ld 28, 128(1)
  0633174  ld 29, 136(1)
  0633178  ld 30, 144(1)
  063317c  ld 31, 152(1)
  0633180  addi 1, 1, 160
  0633184  blr

FUN_00633188:   # 0x633188, 0xcc bytes
  0633188  stdu 1, -144(1)
  063318c  mflr 0
  0633190  std 29, 120(1)
  0633194  mr 29, 3
  0633198  addi 3, 3, 8
  063319c  std 0, 160(1)
  06331a0  clrldi 3, 3, 32
  06331a4  std 28, 112(1)
  06331a8  bl 0x636f14
  06331ac  nop
  06331b0  clrldi 3, 29, 32
  06331b4  bl 0x6330c8
  06331b8  addi 3, 29, 7912
  06331bc  li 4, 0
  06331c0  li 5, 104
  06331c4  clrldi 3, 3, 32
  06331c8  addi 28, 29, 7712
  06331cc  bl 0x5d0140
  06331d0  nop
  06331d4  li 3, 0
  06331d8  li 4, 0
  06331dc  li 11, 0
  06331e0  li 10, 0
  06331e4  li 0, 0
  06331e8  li 9, -1
  06331ec  clrldi 5, 28, 32
  06331f0  ori 3, 3, 33023
  06331f4  ori 4, 4, 57312
  06331f8  stw 0, 8020(29)
  06331fc  stw 11, 7832(29)
  0633200  stb 10, 1716(29)
  0633204  stw 9, 7828(29)
  0633208  stb 10, 1713(29)
  063320c  stb 10, 1714(29)
  0633210  std 11, 7816(29)
  0633214  stw 11, 7824(29)
  0633218  stw 11, 7896(29)
  063321c  stw 11, 7900(29)
  0633220  stw 11, 7904(29)
  0633224  stw 11, 7908(29)
  0633228  stw 11, 7836(29)
  063322c  stw 11, 7872(29)
  0633230  stw 11, 8016(29)
  0633234  bl 0x60fec8
  0633238  nop
  063323c  ld 0, 160(1)
  0633240  ld 28, 112(1)
  0633244  ld 29, 120(1)
  0633248  mtlr 0
  063324c  addi 1, 1, 144
  0633250  blr

FUN_00633254:   # 0x633254, 0x88 bytes
  0633254  stdu 1, -160(1)
  0633258  mflr 0
  063325c  std 28, 128(1)
  0633260  mr 28, 4
  0633264  std 29, 136(1)
  0633268  mr 29, 3
  063326c  std 27, 120(1)
  0633270  std 0, 176(1)
  0633274  mr 27, 5
  0633278  bl 0x633188
  063327c  lwz 0, 0(28)
  0633280  lwz 11, 1704(29)
  0633284  rldicl 0, 0, 61, 63
  0633288  stb 0, 1717(29)
  063328c  lwz 9, 0(28)
  0633290  rldicl 9, 9, 63, 63
  0633294  stw 9, 7888(29)
  0633298  lwz 0, 0(28)
  063329c  rldicl 0, 0, 60, 63
  06332a0  slwi 0, 0, 7
  06332a4  or 0, 0, 9
  06332a8  stw 0, 7888(29)
  06332ac  lbz 9, 5(28)
  06332b0  stb 9, 1715(29)
  06332b4  ld 0, 176(1)
  06332b8  lfs 0, 8(28)
  06332bc  stw 27, 540(11)
  06332c0  mtlr 0
  06332c4  stfs 0, 7892(29)
  06332c8  ld 27, 120(1)
  06332cc  ld 28, 128(1)
  06332d0  ld 29, 136(1)
  06332d4  addi 1, 1, 160
  06332d8  blr

FUN_006332dc:   # 0x6332dc, 0x278 bytes
  06332dc  mfcr 12
  06332e0  stdu 1, -224(1)
  06332e4  std 31, 216(1)
  06332e8  std 19, 120(1)
  06332ec  std 25, 168(1)
  06332f0  std 29, 200(1)
  06332f4  std 30, 208(1)
  06332f8  mr 25, 3
  06332fc  lwz 30, -29412(2)
  0633300  mr 29, 3
  0633304  std 21, 136(1)
  0633308  std 22, 144(1)
  063330c  std 27, 184(1)
  0633310  std 28, 192(1)
  0633314  std 18, 112(1)
  0633318  std 20, 128(1)
  063331c  std 23, 152(1)
  0633320  std 24, 160(1)
  0633324  std 26, 176(1)
  0633328  mr 28, 4
  063332c  mr 21, 5
  0633330  mr 22, 6
  0633334  mr 27, 7
  0633338  stw 12, 232(1)
  063333c  mflr 0
  0633340  std 0, 240(1)
  0633344  lwz 31, 1704(4)
  0633348  addi 0, 31, 584
  063334c  clrldi 19, 0, 32
  0633350  mr 3, 19
  0633354  bl 0x632790
  0633358  cmpwi 7, 3, 0
  063335c  mr 9, 3
  0633360  bt 30, 0x6334a8
  0633364  clrldi 23, 31, 32
  0633368  cmpwi 4, 22, 1
  063336c  li 0, 0
  0633370  clrldi 4, 3, 32
  0633374  mr 3, 23
  0633378  stw 0, 572(23)
  063337c  stw 9, 1704(28)
  0633380  stw 28, 1404(23)
  0633384  stw 28, 572(9)
  0633388  bl 0x633060
  063338c  bt 17, 0x63352c
  0633390  cmpwi 7, 21, 1
  0633394  bf 29, 0x633500
  0633398  clrldi 24, 29, 32
  063339c  addi 20, 27, 1
  06333a0  li 26, 1
  06333a4  li 18, 0
  06333a8  b 0x6333b4
  06333ac  cmpw 7, 21, 26
  06333b0  bt 30, 0x633500
  06333b4  lwz 3, 1704(28)
  06333b8  addi 26, 26, 1
  06333bc  addi 3, 3, 584
  06333c0  clrldi 3, 3, 32
  06333c4  bl 0x632a38
  06333c8  mr 4, 19
  06333cc  cmpwi 7, 3, 0
  06333d0  clrldi 27, 3, 32
  06333d4  mr 31, 3
  06333d8  mr 3, 27
  06333dc  bt 30, 0x633510
  06333e0  lbz 9, 6081(25)
  06333e4  rlwinm 11, 9, 2, 22, 29
  06333e8  addi 9, 9, 1
  06333ec  addi 11, 11, 5904
  06333f0  stb 9, 6081(25)
  06333f4  extsw 11, 11
  06333f8  lwz 29, 1704(31)
  06333fc  stwx 31, 24, 11
  0633400  stb 18, 581(29)
  0633404  lwz 9, 1704(28)
  0633408  lwz 5, 540(9)
  063340c  extsw 5, 5
  0633410  bl 0x633254
  0633414  lwz 3, 1704(31)
  0633418  lwz 4, 1704(28)
  063341c  li 5, 180
  0633420  lwz 0, 7896(28)
  0633424  addi 3, 3, 360
  0633428  lwz 9, 7900(28)
  063342c  addi 4, 4, 360
  0633430  lwz 11, 7904(28)
  0633434  lwz 10, 7888(28)
  0633438  stw 0, 7896(31)
  063343c  stw 9, 7900(31)
  0633440  stw 11, 7904(31)
  0633444  stw 10, 7888(31)
  0633448  bl 0x5c5ad0
  063344c  nop
  0633450  lwz 9, 1704(28)
  0633454  lwz 11, 1704(31)
  0633458  mr 4, 29
  063345c  mr 3, 23
  0633460  lwz 0, 336(9)
  0633464  lwz 10, 312(9)
  0633468  lfs 0, 296(9)
  063346c  lfs 13, 352(9)
  0633470  stw 0, 336(11)
  0633474  stfs 0, 296(11)
  0633478  stw 10, 312(11)
  063347c  stfs 13, 352(11)
  0633480  bl 0x633060
  0633484  mr 4, 27
  0633488  mr 3, 24
  063348c  extsw 5, 22
  0633490  li 6, 1
  0633494  extsw 7, 20
  0633498  bf 17, 0x6333ac
  063349c  bl 0x6332dc
  06334a0  cmpwi 7, 3, 0
  06334a4  bf 28, 0x6333ac
  06334a8  li 3, -1
  06334ac  ld 0, 240(1)
  06334b0  extsw 3, 3
  06334b4  lwz 12, 232(1)
  06334b8  ld 18, 112(1)
  06334bc  mtlr 0
  06334c0  ld 19, 120(1)
  06334c4  mtocrf 8, 12
  06334c8  ld 20, 128(1)
  06334cc  ld 21, 136(1)
  06334d0  ld 22, 144(1)
  06334d4  ld 23, 152(1)
  06334d8  ld 24, 160(1)
  06334dc  ld 25, 168(1)
  06334e0  ld 26, 176(1)
  06334e4  ld 27, 184(1)
  06334e8  ld 28, 192(1)
  06334ec  ld 29, 200(1)
  06334f0  ld 30, 208(1)
  06334f4  ld 31, 216(1)
  06334f8  addi 1, 1, 224
  06334fc  blr
  0633500  li 3, 0
  0633504  stb 22, 1415(23)
  0633508  stb 21, 1414(23)
  063350c  b 0x6334ac
  0633510  lwz 3, -32648(30)
  0633514  li 5, 1964
  0633518  lwz 4, -32724(30)
  063351c  bl 0x61948c
  0633520  nop
  0633524  li 3, -1
  0633528  b 0x6334ac
  063352c  addi 7, 27, 1
  0633530  mr 4, 28
  0633534  extsw 7, 7
  0633538  clrldi 3, 25, 32
  063353c  extsw 5, 22
  0633540  li 6, 1
  0633544  bl 0x6332dc
  0633548  cmpwi 7, 3, 0
  063354c  bf 28, 0x633390
  0633550  b 0x6334a8

FUN_00633554:   # 0x633554, 0xd4 bytes
  0633554  stdu 1, -144(1)
  0633558  mflr 0
  063355c  std 30, 128(1)
  0633560  lwz 30, -29412(2)
  0633564  std 31, 136(1)
  0633568  std 29, 120(1)
  063356c  std 0, 160(1)
  0633570  mr 29, 4
  0633574  lwz 31, -32644(30)
  0633578  mr 3, 31
  063357c  bl 0x637054
  0633580  nop
  0633584  li 5, 1304
  0633588  cmpwi 7, 3, 0
  063358c  mr 3, 31
  0633590  bt 30, 0x6335c8
  0633594  lwz 3, -32640(30)
  0633598  lwz 4, -32724(30)
  063359c  bl 0x61948c
  06335a0  nop
  06335a4  ld 0, 160(1)
  06335a8  ld 29, 120(1)
  06335ac  li 3, 1
  06335b0  ld 30, 128(1)
  06335b4  ld 31, 136(1)
  06335b8  mtlr 0
  06335bc  extsw 3, 3
  06335c0  addi 1, 1, 144
  06335c4  blr
  06335c8  bl 0x6370e4
  06335cc  nop
  06335d0  lwz 0, -32764(30)
  06335d4  slwi 9, 3, 2
  06335d8  mr 3, 31
  06335dc  add 9, 9, 0
  06335e0  addi 9, 9, 204
  06335e4  clrldi 11, 9, 32
  06335e8  stw 9, 700(29)
  06335ec  stw 29, 0(11)
  06335f0  bl 0x63714c
  06335f4  nop
  06335f8  addi 3, 31, 276
  06335fc  bl 0x63fa08
  0633600  nop
  0633604  ld 0, 160(1)
  0633608  ld 29, 120(1)
  063360c  li 3, 0
  0633610  ld 30, 128(1)
  0633614  ld 31, 136(1)
  0633618  mtlr 0
  063361c  extsw 3, 3
  0633620  addi 1, 1, 144
  0633624  blr

FUN_00633628:   # 0x633628, 0x1fc bytes
  0633628  stdu 1, -176(1)
  063362c  mflr 0
  0633630  cmpdi 5, 0
  0633634  std 0, 192(1)
  0633638  std 24, 112(1)
  063363c  lwz 24, 1404(3)
  0633640  std 25, 120(1)
  0633644  std 26, 128(1)
  0633648  std 27, 136(1)
  063364c  std 28, 144(1)
  0633650  std 29, 152(1)
  0633654  std 30, 160(1)
  0633658  std 31, 168(1)
  063365c  lwz 30, -29412(2)
  0633660  mr 31, 6
  0633664  mr 28, 7
  0633668  mr 26, 4
  063366c  mr 29, 6
  0633670  mr 27, 7
  0633674  addi 25, 24, 1720
  0633678  bt 2, 0x633758
  063367c  lwz 0, 0(5)
  0633680  lfs 0, 4(5)
  0633684  stfs 0, 728(7)
  0633688  stw 0, 716(7)
  063368c  cmpwi 7, 8, 0
  0633690  bf 30, 0x633748
  0633694  cmpwi 7, 29, 0
  0633698  bt 30, 0x633774
  063369c  clrldi 4, 29, 32
  06336a0  clrldi 3, 27, 32
  06336a4  li 5, 408
  06336a8  bl 0x5c5ad0
  06336ac  nop
  06336b0  lwz 0, 120(31)
  06336b4  cmpwi 7, 0, 0
  06336b8  bt 30, 0x6336e8
  06336bc  bl 0x639c80
  06336c0  nop
  06336c4  cmpwi 7, 3, 0
  06336c8  stw 3, 120(27)
  06336cc  bt- 30, 0x633808
  06336d0  lwz 9, -32624(30)
  06336d4  clrldi 3, 3, 32
  06336d8  lwz 4, 120(31)
  06336dc  lwz 5, 0(9)
  06336e0  bl 0x5c5ad0
  06336e4  nop
  06336e8  addi 29, 27, 408
  06336ec  lwz 4, 400(31)
  06336f0  li 5, 255
  06336f4  clrldi 3, 29, 32
  06336f8  bl 0x5cccec
  06336fc  nop
  0633700  clrldi 3, 25, 32
  0633704  stw 29, 400(28)
  0633708  bl 0x63a134
  063370c  nop
  0633710  li 3, 0
  0633714  ld 0, 192(1)
  0633718  extsw 3, 3
  063371c  ld 24, 112(1)
  0633720  ld 25, 120(1)
  0633724  mtlr 0
  0633728  ld 26, 128(1)
  063372c  ld 27, 136(1)
  0633730  ld 28, 144(1)
  0633734  ld 29, 152(1)
  0633738  ld 30, 160(1)
  063373c  ld 31, 168(1)
  0633740  addi 1, 1, 176
  0633744  blr
  0633748  clrldi 3, 25, 32
  063374c  bl 0x63714c
  0633750  nop
  0633754  b 0x633694
  0633758  cmpwi 7, 4, 0
  063375c  bt 30, 0x63368c
  0633760  lwz 0, 12(4)
  0633764  lfs 0, 24(4)
  0633768  stfs 0, 728(7)
  063376c  stw 0, 716(7)
  0633770  b 0x63368c
  0633774  addi 0, 27, 664
  0633778  clrldi 4, 26, 32
  063377c  clrldi 28, 0, 32
  0633780  clrldi 27, 27, 32
  0633784  mr 3, 28
  0633788  bl 0x631124
  063378c  mr 3, 27
  0633790  bl 0x632228
  0633794  mr 9, 3
  0633798  lwz 3, -32636(30)
  063379c  clrldi 31, 9, 32
  06337a0  stb 29, 18(9)
  06337a4  bl 0x63f8e0
  06337a8  nop
  06337ac  cmpwi 7, 3, 0
  06337b0  bt 30, 0x6337d0
  06337b4  mr 3, 31
  06337b8  mr 4, 28
  06337bc  bl 0x632d2c
  06337c0  cmpwi 7, 3, 0
  06337c4  bt- 30, 0x6337ec
  06337c8  li 3, -1
  06337cc  b 0x633714
  06337d0  lwz 3, -32632(30)
  06337d4  li 5, 1609
  06337d8  lwz 4, -32724(30)
  06337dc  bl 0x61948c
  06337e0  nop
  06337e4  li 3, -1
  06337e8  b 0x633714
  06337ec  clrldi 3, 24, 32
  06337f0  mr 4, 27
  06337f4  bl 0x633554
  06337f8  cmpwi 7, 3, 0
  06337fc  li 3, 0
  0633800  bt 30, 0x633714
  0633804  b 0x6337c8
  0633808  lwz 3, -32628(30)
  063380c  li 5, 1280
  0633810  lwz 4, -32724(30)
  0633814  bl 0x61948c
  0633818  nop
  063381c  li 3, -1
  0633820  b 0x633714

FUN_00633824:   # 0x633824, 0x154 bytes
  0633824  stdu 1, -176(1)
  0633828  mflr 0
  063382c  std 28, 144(1)
  0633830  std 0, 192(1)
  0633834  lwz 28, 1404(3)
  0633838  cmplwi 7, 4, 6
  063383c  std 24, 112(1)
  0633840  addi 0, 28, 1720
  0633844  std 25, 120(1)
  0633848  std 26, 128(1)
  063384c  std 27, 136(1)
  0633850  std 29, 152(1)
  0633854  std 30, 160(1)
  0633858  std 31, 168(1)
  063385c  lwz 30, -29412(2)
  0633860  mr 29, 4
  0633864  mr 25, 5
  0633868  mr 24, 6
  063386c  mr 26, 7
  0633870  mr 27, 3
  0633874  clrldi 31, 0, 32
  0633878  bf 29, 0x633894
  063387c  mr 3, 31
  0633880  bl 0x637194
  0633884  nop
  0633888  li 5, 2596
  063388c  cmpwi 7, 3, 0
  0633890  bf- 30, 0x633960
  0633894  mr 3, 31
  0633898  bl 0x6371fc
  063389c  nop
  06338a0  li 5, 2606
  06338a4  cmplw 7, 3, 29
  06338a8  bt 29, 0x633918
  06338ac  clrldi 3, 28, 32
  06338b0  bl 0x632ccc
  06338b4  clrldi 4, 25, 32
  06338b8  clrldi 7, 3, 32
  06338bc  clrldi 5, 24, 32
  06338c0  clrldi 3, 27, 32
  06338c4  clrldi 6, 26, 32
  06338c8  li 8, 1
  06338cc  bl 0x633628
  06338d0  srawi 9, 3, 31
  06338d4  xor 0, 9, 3
  06338d8  sub 0, 9, 0
  06338dc  srwi 0, 0, 31
  06338e0  neg 0, 0
  06338e4  extsw 3, 0
  06338e8  ld 0, 192(1)
  06338ec  ld 24, 112(1)
  06338f0  ld 25, 120(1)
  06338f4  mtlr 0
  06338f8  ld 26, 128(1)
  06338fc  ld 27, 136(1)
  0633900  ld 28, 144(1)
  0633904  ld 29, 152(1)
  0633908  ld 30, 160(1)
  063390c  ld 31, 168(1)
  0633910  addi 1, 1, 176
  0633914  blr
  0633918  lwz 3, -32616(30)
  063391c  lwz 4, -32724(30)
  0633920  bl 0x61948c
  0633924  nop
  0633928  li 0, -1
  063392c  ld 24, 112(1)
  0633930  extsw 3, 0
  0633934  ld 0, 192(1)
  0633938  ld 25, 120(1)
  063393c  ld 26, 128(1)
  0633940  mtlr 0
  0633944  ld 27, 136(1)
  0633948  ld 28, 144(1)
  063394c  ld 29, 152(1)
  0633950  ld 30, 160(1)
  0633954  ld 31, 168(1)
  0633958  addi 1, 1, 176
  063395c  blr
  0633960  lwz 4, -32724(30)
  0633964  lwz 3, -32620(30)
  0633968  bl 0x61948c
  063396c  nop
  0633970  li 0, -1
  0633974  b 0x6338e4

FUN_00633978:   # 0x633978, 0xb8 bytes
  0633978  stdu 1, -144(1)
  063397c  mflr 0
  0633980  std 30, 128(1)
  0633984  lwz 30, -29412(2)
  0633988  std 28, 112(1)
  063398c  std 29, 120(1)
  0633990  std 31, 136(1)
  0633994  mr 29, 3
  0633998  std 0, 160(1)
  063399c  mr 28, 4
  06339a0  bl 0x632d2c
  06339a4  mr 31, 3
  06339a8  li 5, 0
  06339ac  cmpwi 7, 31, 0
  06339b0  mr 3, 29
  06339b4  bt 30, 0x6339dc
  06339b8  ld 0, 160(1)
  06339bc  extsw 3, 31
  06339c0  ld 28, 112(1)
  06339c4  ld 29, 120(1)
  06339c8  mtlr 0
  06339cc  ld 30, 128(1)
  06339d0  ld 31, 136(1)
  06339d4  addi 1, 1, 144
  06339d8  blr
  06339dc  ld 4, 16(28)
  06339e0  bl 0x63ba6c
  06339e4  nop
  06339e8  li 5, 534
  06339ec  cmpwi 7, 3, 0
  06339f0  mr 31, 3
  06339f4  bt 30, 0x6339b8
  06339f8  lwz 3, -32612(30)
  06339fc  lwz 4, -32724(30)
  0633a00  lwz 6, 0(28)
  0633a04  bl 0x61948c
  0633a08  nop
  0633a0c  ld 0, 160(1)
  0633a10  ld 28, 112(1)
  0633a14  extsw 3, 31
  0633a18  ld 29, 120(1)
  0633a1c  ld 30, 128(1)
  0633a20  mtlr 0
  0633a24  ld 31, 136(1)
  0633a28  addi 1, 1, 144
  0633a2c  blr

FUN_00633a30:   # 0x633a30, 0x1c8 bytes
  0633a30  cmpdi 4, 0
  0633a34  mflr 0
  0633a38  stdu 1, -160(1)
  0633a3c  std 26, 112(1)
  0633a40  std 27, 120(1)
  0633a44  std 28, 128(1)
  0633a48  std 30, 144(1)
  0633a4c  std 29, 136(1)
  0633a50  std 31, 152(1)
  0633a54  std 0, 176(1)
  0633a58  lwz 30, -29412(2)
  0633a5c  mr 27, 4
  0633a60  li 28, 0
  0633a64  mr 26, 3
  0633a68  bt 2, 0x633b54
  0633a6c  cmpwi 7, 3, 0
  0633a70  li 0, 0
  0633a74  stw 0, 0(4)
  0633a78  bt 30, 0x633bec
  0633a7c  lwz 29, -32764(30)
  0633a80  lwz 8, 8(3)
  0633a84  lwz 11, 180(29)
  0633a88  lwz 3, 184(29)
  0633a8c  cmpwi 7, 11, 0
  0633a90  bt 30, 0x633ad8
  0633a94  clrldi 9, 3, 32
  0633a98  mr 31, 3
  0633a9c  lwz 0, 0(9)
  0633aa0  cmpwi 7, 0, 0
  0633aa4  bt 30, 0x633b80
  0633aa8  lwz 10, 176(29)
  0633aac  clrldi 11, 11, 32
  0633ab0  mtctr 11
  0633ab4  add 11, 3, 10
  0633ab8  b 0x633ad0
  0633abc  clrldi 9, 31, 32
  0633ac0  add 11, 31, 10
  0633ac4  lwz 0, 0(9)
  0633ac8  cmpwi 7, 0, 0
  0633acc  bt 30, 0x633b80
  0633ad0  mr 31, 11
  0633ad4  bdnz 0x633abc
  0633ad8  rlwinm 0, 8, 0, 30, 30
  0633adc  cmpwi 7, 0, 0
  0633ae0  bt 30, 0x633ba0
  0633ae4  lwz 3, 176(29)
  0633ae8  li 4, 8
  0633aec  li 5, 512
  0633af0  li 28, 1
  0633af4  bl 0x630d9c
  0633af8  cmpwi 7, 3, 0
  0633afc  mr 31, 3
  0633b00  bt 30, 0x633ba0
  0633b04  lwz 0, 176(29)
  0633b08  cmplwi 7, 0, 663
  0633b0c  bf 29, 0x633b90
  0633b10  clrldi 29, 31, 32
  0633b14  mr 3, 29
  0633b18  bl 0x632228
  0633b1c  cmpwi 7, 28, 0
  0633b20  bt 30, 0x633b30
  0633b24  lbz 0, 17(29)
  0633b28  ori 0, 0, 4
  0633b2c  stb 0, 17(29)
  0633b30  mr 3, 29
  0633b34  mr 28, 31
  0633b38  bl 0x631074
  0633b3c  clrldi 4, 26, 32
  0633b40  clrldi 3, 3, 32
  0633b44  bl 0x633978
  0633b48  cmpwi 7, 3, 0
  0633b4c  mr 31, 3
  0633b50  bt- 28, 0x633bd8
  0633b54  ld 0, 176(1)
  0633b58  clrldi 3, 28, 32
  0633b5c  ld 26, 112(1)
  0633b60  ld 27, 120(1)
  0633b64  mtlr 0
  0633b68  ld 28, 128(1)
  0633b6c  ld 29, 136(1)
  0633b70  ld 30, 144(1)
  0633b74  ld 31, 152(1)
  0633b78  addi 1, 1, 160
  0633b7c  blr
  0633b80  lwz 0, 176(29)
  0633b84  li 28, 0
  0633b88  cmplwi 7, 0, 663
  0633b8c  bt 29, 0x633b10
  0633b90  clrldi 29, 31, 32
  0633b94  mr 3, 29
  0633b98  bl 0x6321e4
  0633b9c  b 0x633b1c
  0633ba0  li 0, -114
  0633ba4  ld 26, 112(1)
  0633ba8  li 28, 0
  0633bac  ld 29, 136(1)
  0633bb0  stw 0, 0(27)
  0633bb4  ld 0, 176(1)
  0633bb8  clrldi 3, 28, 32
  0633bbc  ld 27, 120(1)
  0633bc0  ld 28, 128(1)
  0633bc4  mtlr 0
  0633bc8  ld 30, 144(1)
  0633bcc  ld 31, 152(1)
  0633bd0  addi 1, 1, 160
  0633bd4  blr
  0633bd8  mr 3, 29
  0633bdc  li 28, 0
  0633be0  bl 0x6322dc
  0633be4  stw 31, 0(27)
  0633be8  b 0x633b54
  0633bec  li 0, -110
  0633bf0  stw 0, 0(4)
  0633bf4  b 0x633b54

FUN_00633bf8:   # 0x633bf8, 0x104 bytes
  0633bf8  mr 9, 3
  0633bfc  mflr 0
  0633c00  stdu 1, -144(1)
  0633c04  std 0, 160(1)
  0633c08  rldicl 0, 9, 40, 59
  0633c0c  std 30, 128(1)
  0633c10  cmpwi 7, 0, 4
  0633c14  lwz 30, -29412(2)
  0633c18  std 31, 136(1)
  0633c1c  std 29, 120(1)
  0633c20  li 5, 200
  0633c24  rldicl 31, 9, 48, 56
  0633c28  clrldi 6, 3, 32
  0633c2c  bf 30, 0x633cc8
  0633c30  lwz 29, -32764(30)
  0633c34  clrldi 3, 3, 32
  0633c38  li 5, 209
  0633c3c  mr 6, 3
  0633c40  lwz 0, 160(29)
  0633c44  cmplw 7, 0, 31
  0633c48  bf 29, 0x633c94
  0633c4c  bl 0x61a790
  0633c50  nop
  0633c54  cmpwi 7, 3, 0
  0633c58  bt 30, 0x633c70
  0633c5c  lwz 0, 156(29)
  0633c60  mulli 9, 31, 1420
  0633c64  add 9, 9, 0
  0633c68  cmpw 7, 9, 3
  0633c6c  bt 30, 0x633ca8
  0633c70  ld 0, 160(1)
  0633c74  li 9, 0
  0633c78  ld 29, 120(1)
  0633c7c  clrldi 3, 9, 32
  0633c80  ld 30, 128(1)
  0633c84  ld 31, 136(1)
  0633c88  mtlr 0
  0633c8c  addi 1, 1, 144
  0633c90  blr
  0633c94  lwz 4, -32724(30)
  0633c98  lwz 3, -32604(30)
  0633c9c  bl 0x61948c
  0633ca0  nop
  0633ca4  li 9, 0
  0633ca8  ld 0, 160(1)
  0633cac  clrldi 3, 9, 32
  0633cb0  ld 29, 120(1)
  0633cb4  ld 30, 128(1)
  0633cb8  mtlr 0
  0633cbc  ld 31, 136(1)
  0633cc0  addi 1, 1, 144
  0633cc4  blr
  0633cc8  lwz 3, -32608(30)
  0633ccc  lwz 4, -32724(30)
  0633cd0  bl 0x61948c
  0633cd4  nop
  0633cd8  ld 0, 160(1)
  0633cdc  ld 29, 120(1)
  0633ce0  li 9, 0
  0633ce4  ld 30, 128(1)
  0633ce8  ld 31, 136(1)
  0633cec  mtlr 0
  0633cf0  clrldi 3, 9, 32
  0633cf4  addi 1, 1, 144
  0633cf8  blr

FUN_00633cfc:   # 0x633cfc, 0x74 bytes
  0633cfc  stdu 1, -128(1)
  0633d00  mflr 0
  0633d04  std 30, 112(1)
  0633d08  lwz 30, -29412(2)
  0633d0c  std 31, 120(1)
  0633d10  std 0, 144(1)
  0633d14  mr 31, 3
  0633d18  bl 0x633bf8
  0633d1c  cmpwi 7, 3, 0
  0633d20  clrldi 9, 3, 32
  0633d24  bt 30, 0x633d3c
  0633d28  lbz 0, 581(9)
  0633d2c  mr 6, 31
  0633d30  li 5, 237
  0633d34  cmpwi 7, 0, 0
  0633d38  bt 30, 0x633d58
  0633d3c  ld 0, 144(1)
  0633d40  mr 3, 9
  0633d44  ld 30, 112(1)
  0633d48  ld 31, 120(1)
  0633d4c  mtlr 0
  0633d50  addi 1, 1, 128
  0633d54  blr
  0633d58  lwz 4, -32724(30)
  0633d5c  lwz 3, -32600(30)
  0633d60  bl 0x61948c
  0633d64  nop
  0633d68  li 9, 0
  0633d6c  b 0x633d3c

FUN_00633d70:   # 0x633d70, 0x34 bytes
  0633d70  stdu 1, -128(1)
  0633d74  mflr 0
  0633d78  std 0, 144(1)
  0633d7c  bl 0x633cfc
  0633d80  cmpwi 7, 3, 0
  0633d84  li 0, 0
  0633d88  bt 30, 0x633d90
  0633d8c  lwz 0, 1404(3)
  0633d90  clrldi 3, 0, 32
  0633d94  ld 0, 144(1)
  0633d98  addi 1, 1, 128
  0633d9c  mtlr 0
  0633da0  blr

FUN_00633da4:   # 0x633da4, 0x90 bytes
  0633da4  stdu 1, -128(1)
  0633da8  mflr 0
  0633dac  std 30, 112(1)
  0633db0  lwz 30, -29412(2)
  0633db4  std 31, 120(1)
  0633db8  std 0, 144(1)
  0633dbc  lwz 31, -32764(30)
  0633dc0  lwz 9, 88(31)
  0633dc4  lwz 0, 84(31)
  0633dc8  sub 0, 0, 9
  0633dcc  cmpwi 7, 0, 0
  0633dd0  bf 29, 0x633dfc
  0633dd4  addi 0, 9, 1
  0633dd8  stw 0, 88(31)
  0633ddc  bl 0x6271f4
  0633de0  nop
  0633de4  ld 0, 144(1)
  0633de8  ld 30, 112(1)
  0633dec  ld 31, 120(1)
  0633df0  mtlr 0
  0633df4  addi 1, 1, 128
  0633df8  blr
  0633dfc  lwz 3, -32596(30)
  0633e00  bl 0x61948c
  0633e04  nop
  0633e08  lwz 9, 88(31)
  0633e0c  addi 0, 9, 1
  0633e10  stw 0, 88(31)
  0633e14  bl 0x6271f4
  0633e18  nop
  0633e1c  ld 0, 144(1)
  0633e20  ld 30, 112(1)
  0633e24  ld 31, 120(1)
  0633e28  mtlr 0
  0633e2c  addi 1, 1, 128
  0633e30  blr

FUN_00633e34:   # 0x633e34, 0x40 bytes
  0633e34  stdu 1, -128(1)
  0633e38  mflr 0
  0633e3c  std 30, 112(1)
  0633e40  lwz 30, -29412(2)
  0633e44  std 0, 144(1)
  0633e48  bl 0x6272e8
  0633e4c  nop
  0633e50  ld 0, 144(1)
  0633e54  mtlr 0
  0633e58  lwz 11, -32764(30)
  0633e5c  ld 30, 112(1)
  0633e60  addi 1, 1, 128
  0633e64  lwz 9, 84(11)
  0633e68  addi 9, 9, 1
  0633e6c  stw 9, 84(11)
  0633e70  blr

FUN_00633e74:   # 0x633e74, 0x4c bytes
  0633e74  stdu 1, -144(1)
  0633e78  mflr 0
  0633e7c  std 29, 120(1)
  0633e80  mr 29, 3
  0633e84  std 0, 160(1)
  0633e88  bl 0x633e34
  0633e8c  clrldi 3, 29, 32
  0633e90  li 29, 0
  0633e94  bl 0x633cfc
  0633e98  cmpwi 7, 3, 0
  0633e9c  bt 30, 0x633ea4
  0633ea0  lbz 29, 1414(3)
  0633ea4  bl 0x633da4
  0633ea8  ld 0, 160(1)
  0633eac  extsw 3, 29
  0633eb0  ld 29, 120(1)
  0633eb4  mtlr 0
  0633eb8  addi 1, 1, 144
  0633ebc  blr

FUN_00633ec0:   # 0x633ec0, 0x184 bytes
  0633ec0  cmpwi 7, 4, 0
  0633ec4  mflr 0
  0633ec8  stdu 1, -176(1)
  0633ecc  std 27, 136(1)
  0633ed0  std 28, 144(1)
  0633ed4  std 29, 152(1)
  0633ed8  std 30, 160(1)
  0633edc  std 31, 168(1)
  0633ee0  std 25, 120(1)
  0633ee4  std 26, 128(1)
  0633ee8  std 0, 192(1)
  0633eec  lwz 30, -29412(2)
  0633ef0  mr 28, 4
  0633ef4  mr 29, 6
  0633ef8  mr 27, 3
  0633efc  mr 31, 5
  0633f00  bt 30, 0x633fc8
  0633f04  cmpwi 7, 5, 0
  0633f08  bt 30, 0x633fc8
  0633f0c  cmpwi 7, 6, 0
  0633f10  bt 30, 0x633fc8
  0633f14  bl 0x633e34
  0633f18  lwz 26, -32588(30)
  0633f1c  lwz 0, 0(26)
  0633f20  cmpwi 7, 0, 0
  0633f24  bt 30, 0x634028
  0633f28  clrldi 5, 31, 32
  0633f2c  clrldi 3, 27, 32
  0633f30  clrldi 4, 28, 32
  0633f34  li 6, -1
  0633f38  bl 0x6095c8
  0633f3c  nop
  0633f40  lwz 0, 0(26)
  0633f44  cmpwi 7, 0, 0
  0633f48  mr 31, 3
  0633f4c  clrldi 25, 3, 32
  0633f50  bt 30, 0x633f94
  0633f54  mr 3, 25
  0633f58  bl 0x609a5c
  0633f5c  nop
  0633f60  lwz 11, 0(26)
  0633f64  clrldi 9, 11, 32
  0633f68  lwz 3, 7872(9)
  0633f6c  cmpwi 7, 3, 0
  0633f70  bf 30, 0x634010
  0633f74  clrldi 11, 11, 32
  0633f78  stw 31, 7872(11)
  0633f7c  lwz 0, 0(29)
  0633f80  stw 0, 7876(11)
  0633f84  lwz 9, 4(29)
  0633f88  stw 9, 7880(11)
  0633f8c  lwz 0, 8(29)
  0633f90  stw 0, 7884(11)
  0633f94  bl 0x633da4
  0633f98  ld 0, 192(1)
  0633f9c  mr 3, 25
  0633fa0  ld 26, 128(1)
  0633fa4  ld 25, 120(1)
  0633fa8  mtlr 0
  0633fac  ld 27, 136(1)
  0633fb0  ld 28, 144(1)
  0633fb4  ld 29, 152(1)
  0633fb8  ld 30, 160(1)
  0633fbc  ld 31, 168(1)
  0633fc0  addi 1, 1, 176
  0633fc4  blr
  0633fc8  lwz 3, -32592(30)
  0633fcc  li 5, 4547
  0633fd0  lwz 4, -32724(30)
  0633fd4  li 25, 0
  0633fd8  bl 0x61948c
  0633fdc  nop
  0633fe0  ld 0, 192(1)
  0633fe4  ld 26, 128(1)
  0633fe8  mr 3, 25
  0633fec  ld 27, 136(1)
  0633ff0  ld 25, 120(1)
  0633ff4  mtlr 0
  0633ff8  ld 28, 144(1)
  0633ffc  ld 29, 152(1)
  0634000  ld 30, 160(1)
  0634004  ld 31, 168(1)
  0634008  addi 1, 1, 176
  063400c  blr
  0634010  clrldi 3, 3, 32
  0634014  li 4, 1
  0634018  bl 0x6084f4
  063401c  nop
  0634020  lwz 11, 0(26)
  0634024  b 0x633f74
  0634028  lwz 0, 0(29)
  063402c  li 25, 0
  0634030  clrlwi 0, 0, 31
  0634034  cmpwi 7, 0, 0
  0634038  bf 30, 0x633f28
  063403c  bl 0x633da4
  0634040  b 0x633f98

FUN_00634044:   # 0x634044, 0x190 bytes
  0634044  cmpwi 7, 3, 0
  0634048  mflr 0
  063404c  stdu 1, -176(1)
  0634050  std 27, 136(1)
  0634054  std 28, 144(1)
  0634058  std 29, 152(1)
  063405c  std 30, 160(1)
  0634060  std 31, 168(1)
  0634064  std 25, 120(1)
  0634068  std 26, 128(1)
  063406c  std 0, 192(1)
  0634070  lwz 30, -29412(2)
  0634074  mr 28, 3
  0634078  mr 31, 6
  063407c  mr 29, 4
  0634080  mr 27, 5
  0634084  bt 30, 0x634158
  0634088  extsh 0, 4
  063408c  cmpwi 7, 0, 0
  0634090  bt 28, 0x634158
  0634094  cmpwi 7, 5, 0
  0634098  bt 30, 0x634158
  063409c  cmpwi 7, 6, 0
  06340a0  bt 30, 0x634158
  06340a4  bl 0x633e34
  06340a8  lwz 26, -32588(30)
  06340ac  lwz 0, 0(26)
  06340b0  cmpwi 7, 0, 0
  06340b4  bt 30, 0x6341a0
  06340b8  extsh 4, 29
  06340bc  clrldi 3, 28, 32
  06340c0  clrldi 5, 27, 32
  06340c4  li 6, -1
  06340c8  bl 0x609814
  06340cc  nop
  06340d0  lwz 0, 0(26)
  06340d4  cmpwi 7, 0, 0
  06340d8  mr 29, 3
  06340dc  clrldi 25, 3, 32
  06340e0  bt 30, 0x634124
  06340e4  mr 3, 25
  06340e8  bl 0x63eaac
  06340ec  nop
  06340f0  lwz 11, 0(26)
  06340f4  clrldi 9, 11, 32
  06340f8  lwz 3, 7872(9)
  06340fc  cmpwi 7, 3, 0
  0634100  bf 30, 0x6341bc
  0634104  clrldi 11, 11, 32
  0634108  stw 29, 7872(11)
  063410c  lwz 0, 0(31)
  0634110  stw 0, 7876(11)
  0634114  lwz 9, 4(31)
  0634118  stw 9, 7880(11)
  063411c  lwz 0, 8(31)
  0634120  stw 0, 7884(11)
  0634124  bl 0x633da4
  0634128  ld 0, 192(1)
  063412c  mr 3, 25
  0634130  ld 26, 128(1)
  0634134  ld 25, 120(1)
  0634138  mtlr 0
  063413c  ld 27, 136(1)
  0634140  ld 28, 144(1)
  0634144  ld 29, 152(1)
  0634148  ld 30, 160(1)
  063414c  ld 31, 168(1)
  0634150  addi 1, 1, 176
  0634154  blr
  0634158  lwz 3, -32592(30)
  063415c  li 5, 4465
  0634160  lwz 4, -32724(30)
  0634164  li 25, 0
  0634168  bl 0x61948c
  063416c  nop
  0634170  ld 0, 192(1)
  0634174  ld 26, 128(1)
  0634178  mr 3, 25
  063417c  ld 27, 136(1)
  0634180  ld 25, 120(1)
  0634184  mtlr 0
  0634188  ld 28, 144(1)
  063418c  ld 29, 152(1)
  0634190  ld 30, 160(1)
  0634194  ld 31, 168(1)
  0634198  addi 1, 1, 176
  063419c  blr
  06341a0  lwz 0, 0(31)
  06341a4  li 25, 0
  06341a8  clrlwi 0, 0, 31
  06341ac  cmpwi 7, 0, 0
  06341b0  bf 30, 0x6340b8
  06341b4  bl 0x633da4
  06341b8  b 0x634128
  06341bc  clrldi 3, 3, 32
  06341c0  li 4, 1
  06341c4  bl 0x6084f4
  06341c8  nop
  06341cc  lwz 11, 0(26)
  06341d0  b 0x634104

FUN_006341d4:   # 0x6341d4, 0xb4 bytes
  06341d4  stdu 1, -144(1)
  06341d8  mflr 0
  06341dc  std 30, 128(1)
  06341e0  lwz 30, -29412(2)
  06341e4  std 29, 120(1)
  06341e8  std 31, 136(1)
  06341ec  std 0, 160(1)
  06341f0  bl 0x633e34
  06341f4  li 29, 0
  06341f8  lwz 31, -32588(30)
  06341fc  lwz 0, 0(31)
  0634200  cmpwi 7, 0, 0
  0634204  clrldi 9, 0, 32
  0634208  bt 30, 0x63423c
  063420c  lwz 3, 1704(9)
  0634210  bl 0x63ea18
  0634214  nop
  0634218  lwz 0, 0(31)
  063421c  lwz 9, 1404(3)
  0634220  li 5, 4404
  0634224  cmpw 7, 9, 0
  0634228  bt 30, 0x634260
  063422c  lwz 4, -32724(30)
  0634230  lwz 3, -32584(30)
  0634234  bl 0x61948c
  0634238  nop
  063423c  bl 0x633da4
  0634240  ld 0, 160(1)
  0634244  clrldi 3, 29, 32
  0634248  ld 30, 128(1)
  063424c  ld 29, 120(1)
  0634250  mtlr 0
  0634254  ld 31, 136(1)
  0634258  addi 1, 1, 144
  063425c  blr
  0634260  lwz 29, 0(3)
  0634264  bl 0x633da4
  0634268  ld 0, 160(1)
  063426c  clrldi 3, 29, 32
  0634270  ld 30, 128(1)
  0634274  ld 29, 120(1)
  0634278  mtlr 0
  063427c  ld 31, 136(1)
  0634280  addi 1, 1, 144
  0634284  blr

FUN_00634288:   # 0x634288, 0x8c bytes
  0634288  stdu 1, -144(1)
  063428c  mflr 0
  0634290  std 30, 128(1)
  0634294  lwz 30, -29412(2)
  0634298  std 28, 112(1)
  063429c  std 29, 120(1)
  06342a0  std 31, 136(1)
  06342a4  mr 29, 4
  06342a8  mr 31, 3
  06342ac  mr 28, 5
  06342b0  std 0, 160(1)
  06342b4  bl 0x633e34
  06342b8  lwz 9, -32580(30)
  06342bc  cmpwi 7, 31, 0
  06342c0  lwz 11, -32576(30)
  06342c4  stw 29, 0(9)
  06342c8  stw 28, 0(11)
  06342cc  bt 30, 0x6342f4
  06342d0  lwz 11, -32572(30)
  06342d4  lbz 0, 0(31)
  06342d8  stb 0, 0(11)
  06342dc  lbz 9, 1(31)
  06342e0  stb 9, 1(11)
  06342e4  lbz 0, 2(31)
  06342e8  stb 0, 2(11)
  06342ec  lbz 9, 3(31)
  06342f0  stb 9, 3(11)
  06342f4  ld 0, 160(1)
  06342f8  ld 28, 112(1)
  06342fc  ld 29, 120(1)
  0634300  mtlr 0
  0634304  ld 30, 128(1)
  0634308  ld 31, 136(1)
  063430c  addi 1, 1, 144
  0634310  b 0x633da4

FUN_00634314:   # 0x634314, 0xa8 bytes
  0634314  stdu 1, -128(1)
  0634318  mflr 0
  063431c  std 30, 112(1)
  0634320  std 31, 120(1)
  0634324  lwz 30, -29412(2)
  0634328  mr 31, 3
  063432c  std 0, 144(1)
  0634330  bl 0x633e34
  0634334  cmpwi 7, 31, 0
  0634338  bt 30, 0x6343a4
  063433c  lwz 9, -32752(30)
  0634340  lwz 11, 0(9)
  0634344  lwz 0, 0(11)
  0634348  lwz 9, 4(11)
  063434c  lwz 10, 8(11)
  0634350  lwz 8, 12(11)
  0634354  stw 0, 0(31)
  0634358  stw 9, 4(31)
  063435c  stw 10, 8(31)
  0634360  stw 8, 12(31)
  0634364  lwz 0, 16(11)
  0634368  lwz 9, 20(11)
  063436c  lwz 10, 24(11)
  0634370  lwz 8, 28(11)
  0634374  stw 0, 16(31)
  0634378  stw 9, 20(31)
  063437c  stw 10, 24(31)
  0634380  stw 8, 28(31)
  0634384  lwz 0, 44(11)
  0634388  lwz 9, 32(11)
  063438c  lwz 10, 36(11)
  0634390  lwz 8, 40(11)
  0634394  stw 0, 44(31)
  0634398  stw 9, 32(31)
  063439c  stw 10, 36(31)
  06343a0  stw 8, 40(31)
  06343a4  ld 0, 144(1)
  06343a8  ld 30, 112(1)
  06343ac  ld 31, 120(1)
  06343b0  addi 1, 1, 128
  06343b4  mtlr 0
  06343b8  b 0x633da4

FUN_006343bc:   # 0x6343bc, 0xe4 bytes
  06343bc  stdu 1, -128(1)
  06343c0  mflr 0
  06343c4  std 30, 112(1)
  06343c8  std 31, 120(1)
  06343cc  lwz 30, -29412(2)
  06343d0  mr 31, 3
  06343d4  std 0, 144(1)
  06343d8  bl 0x633e34
  06343dc  cmpwi 7, 31, 0
  06343e0  clrldi 3, 31, 32
  06343e4  bt 30, 0x63447c
  06343e8  bl 0x631ed0
  06343ec  cmpwi 7, 3, 0
  06343f0  bt 28, 0x634464
  06343f4  lwz 9, -32568(30)
  06343f8  lwz 0, 0(31)
  06343fc  lwz 11, 4(31)
  0634400  lwz 10, 8(31)
  0634404  lwz 8, 12(31)
  0634408  stw 0, 0(9)
  063440c  stw 11, 4(9)
  0634410  stw 10, 8(9)
  0634414  stw 8, 12(9)
  0634418  lwz 0, 16(31)
  063441c  lwz 11, 20(31)
  0634420  lwz 10, 24(31)
  0634424  lwz 8, 28(31)
  0634428  lwz 6, -32752(30)
  063442c  stw 0, 16(9)
  0634430  stw 11, 20(9)
  0634434  stw 10, 24(9)
  0634438  stw 8, 28(9)
  063443c  lwz 7, 44(31)
  0634440  lwz 11, 32(31)
  0634444  lwz 10, 36(31)
  0634448  lwz 8, 40(31)
  063444c  lwz 0, -32568(30)
  0634450  stw 7, 44(9)
  0634454  stw 0, 0(6)
  0634458  stw 11, 32(9)
  063445c  stw 10, 36(9)
  0634460  stw 8, 40(9)
  0634464  ld 0, 144(1)
  0634468  ld 30, 112(1)
  063446c  ld 31, 120(1)
  0634470  addi 1, 1, 128
  0634474  mtlr 0
  0634478  b 0x633da4
  063447c  lwz 9, -32752(30)
  0634480  lwz 0, -32748(30)
  0634484  ld 31, 120(1)
  0634488  ld 30, 112(1)
  063448c  stw 0, 0(9)
  0634490  ld 0, 144(1)
  0634494  addi 1, 1, 128
  0634498  mtlr 0
  063449c  b 0x633da4

FUN_006344a0:   # 0x6344a0, 0x258 bytes
  06344a0  cmpwi 7, 4, 0
  06344a4  mflr 0
  06344a8  stdu 1, -208(1)
  06344ac  std 21, 120(1)
  06344b0  std 26, 160(1)
  06344b4  std 27, 168(1)
  06344b8  std 28, 176(1)
  06344bc  std 29, 184(1)
  06344c0  std 30, 192(1)
  06344c4  std 31, 200(1)
  06344c8  std 22, 128(1)
  06344cc  std 23, 136(1)
  06344d0  std 24, 144(1)
  06344d4  std 25, 152(1)
  06344d8  std 0, 224(1)
  06344dc  lwz 30, -29412(2)
  06344e0  mr 27, 4
  06344e4  mr 26, 5
  06344e8  mr 28, 4
  06344ec  mr 31, 3
  06344f0  mr 29, 6
  06344f4  mr 21, 7
  06344f8  bt 30, 0x6346ac
  06344fc  cmpwi 7, 6, 0
  0634500  bt 30, 0x6346ac
  0634504  cmpwi 7, 7, 0
  0634508  bt 30, 0x6346ac
  063450c  bl 0x633e34
  0634510  clrldi 3, 31, 32
  0634514  bl 0x633cfc
  0634518  cmpwi 7, 3, 0
  063451c  mr 7, 3
  0634520  bt 30, 0x6346a4
  0634524  lwz 3, 1404(3)
  0634528  cmpwi 7, 3, 0
  063452c  bt 30, 0x6346a4
  0634530  addi 3, 3, 1720
  0634534  clrldi 9, 3, 32
  0634538  lbz 25, 6081(9)
  063453c  cmplw 7, 25, 26
  0634540  bf 29, 0x634548
  0634544  mr 25, 26
  0634548  lwz 4, 0(27)
  063454c  rlwinm 0, 4, 0, 29, 29
  0634550  cmpwi 7, 0, 0
  0634554  bt 30, 0x6345c8
  0634558  cmpwi 7, 25, 0
  063455c  bt 30, 0x6345c8
  0634560  clrldi 0, 25, 32
  0634564  lfs 10, -32556(30)
  0634568  li 8, 0
  063456c  lfs 11, -32564(30)
  0634570  mtctr 0
  0634574  add 0, 28, 8
  0634578  add 9, 8, 7
  063457c  clrldi 10, 0, 32
  0634580  add 0, 8, 29
  0634584  clrldi 9, 9, 32
  0634588  clrldi 11, 0, 32
  063458c  addi 8, 8, 4
  0634590  lfs 0, 0(11)
  0634594  fcmpu 7, 0, 11
  0634598  bf 28, 0x6345a0
  063459c  stfs 11, 0(11)
  06345a0  lfs 0, 4(10)
  06345a4  stfs 0, 604(9)
  06345a8  lfs 13, 4(10)
  06345ac  lfs 0, 0(11)
  06345b0  lfs 12, 1020(9)
  06345b4  fmuls 0, 0, 10
  06345b8  fsubs 13, 13, 12
  06345bc  fdivs 13, 13, 0
  06345c0  stfs 13, 1212(9)
  06345c4  bdnz 0x634574
  06345c8  rlwinm 0, 4, 0, 27, 28
  06345cc  cmpwi 7, 0, 0
  06345d0  bt 30, 0x6346f0
  06345d4  cmpwi 7, 25, 0
  06345d8  bt 30, 0x6346f0
  06345dc  addi 27, 3, 5904
  06345e0  clrldi 22, 28, 32
  06345e4  clrldi 23, 29, 32
  06345e8  clrldi 24, 21, 32
  06345ec  li 26, 0
  06345f0  b 0x63460c
  06345f4  bl 0x632404
  06345f8  cmpw 6, 26, 25
  06345fc  cmpwi 7, 3, 0
  0634600  mr 31, 3
  0634604  bt 30, 0x634660
  0634608  bt 26, 0x6346f0
  063460c  clrldi 9, 27, 32
  0634610  clrldi 28, 26, 32
  0634614  mr 4, 22
  0634618  mr 5, 28
  063461c  mr 6, 23
  0634620  lwz 11, 0(9)
  0634624  mr 7, 24
  0634628  addi 26, 26, 1
  063462c  addi 27, 27, 4
  0634630  lwz 9, 1704(11)
  0634634  lwz 29, 0(9)
  0634638  mr 3, 29
  063463c  bl 0x63235c
  0634640  mr 5, 28
  0634644  mr 31, 3
  0634648  mr 4, 22
  063464c  cmpwi 7, 31, 0
  0634650  mr 3, 29
  0634654  mr 6, 23
  0634658  mr 7, 24
  063465c  bf 30, 0x6345f4
  0634660  bl 0x633da4
  0634664  ld 0, 224(1)
  0634668  clrldi 3, 31, 32
  063466c  ld 21, 120(1)
  0634670  ld 22, 128(1)
  0634674  mtlr 0
  0634678  ld 23, 136(1)
  063467c  ld 24, 144(1)
  0634680  ld 25, 152(1)
  0634684  ld 26, 160(1)
  0634688  ld 27, 168(1)
  063468c  ld 28, 176(1)
  0634690  ld 29, 184(1)
  0634694  ld 30, 192(1)
  0634698  ld 31, 200(1)
  063469c  addi 1, 1, 208
  06346a0  blr
  06346a4  li 31, 0
  06346a8  b 0x634660
  06346ac  li 31, 0
  06346b0  ld 0, 224(1)
  06346b4  ld 21, 120(1)
  06346b8  clrldi 3, 31, 32
  06346bc  ld 22, 128(1)
  06346c0  ld 23, 136(1)
  06346c4  mtlr 0
  06346c8  ld 24, 144(1)
  06346cc  ld 25, 152(1)
  06346d0  ld 26, 160(1)
  06346d4  ld 27, 168(1)
  06346d8  ld 28, 176(1)
  06346dc  ld 29, 184(1)
  06346e0  ld 30, 192(1)
  06346e4  ld 31, 200(1)
  06346e8  addi 1, 1, 208
  06346ec  blr
  06346f0  mr 31, 25
  06346f4  b 0x634660

FUN_006346f8:   # 0x6346f8, 0x84 bytes
  06346f8  cmpwi 7, 4, 0
  06346fc  mflr 0
  0634700  stdu 1, -160(1)
  0634704  std 27, 120(1)
  0634708  std 28, 128(1)
  063470c  std 29, 136(1)
  0634710  std 31, 152(1)
  0634714  std 0, 176(1)
  0634718  mr 29, 4
  063471c  mr 28, 5
  0634720  mr 31, 3
  0634724  li 27, 0
  0634728  bt 30, 0x634758
  063472c  bl 0x633e34
  0634730  clrldi 3, 31, 32
  0634734  bl 0x633cfc
  0634738  clrldi 4, 29, 32
  063473c  cmpwi 7, 3, 0
  0634740  clrldi 5, 28, 32
  0634744  clrldi 3, 3, 32
  0634748  bt 30, 0x634754
  063474c  bl 0x632ec0
  0634750  mr 27, 3
  0634754  bl 0x633da4
  0634758  ld 0, 176(1)
  063475c  clrldi 3, 27, 32
  0634760  ld 28, 128(1)
  0634764  ld 27, 120(1)
  0634768  mtlr 0
  063476c  ld 29, 136(1)
  0634770  ld 31, 152(1)
  0634774  addi 1, 1, 160
  0634778  blr

FUN_0063477c:   # 0x63477c, 0x138 bytes
  063477c  mfcr 12
  0634780  cmpwi 4, 5, 0
  0634784  stdu 1, -160(1)
  0634788  std 26, 112(1)
  063478c  std 27, 120(1)
  0634790  std 28, 128(1)
  0634794  std 29, 136(1)
  0634798  std 31, 152(1)
  063479c  mr 27, 5
  06347a0  mr 28, 4
  06347a4  mr 26, 3
  06347a8  mr 29, 4
  06347ac  stw 12, 168(1)
  06347b0  mflr 0
  06347b4  std 0, 176(1)
  06347b8  bt 18, 0x6347c4
  06347bc  li 0, 0
  06347c0  stw 0, 0(5)
  06347c4  cmpwi 7, 29, 0
  06347c8  li 31, 0
  06347cc  bt 30, 0x63486c
  06347d0  bl 0x633e34
  06347d4  clrldi 3, 26, 32
  06347d8  bl 0x633cfc
  06347dc  cmpwi 7, 3, 0
  06347e0  bt 30, 0x63489c
  06347e4  lwz 3, 1404(3)
  06347e8  cmpwi 7, 3, 0
  06347ec  bt 30, 0x63489c
  06347f0  addi 3, 3, 1720
  06347f4  li 9, 0
  06347f8  clrldi 5, 3, 32
  06347fc  lbz 0, 6081(5)
  0634800  cmpwi 7, 0, 0
  0634804  bt 30, 0x63485c
  0634808  li 6, 0
  063480c  li 7, 0
  0634810  li 4, 28
  0634814  add 10, 3, 7
  0634818  add 8, 7, 29
  063481c  clrldi 10, 10, 32
  0634820  clrldi 8, 8, 32
  0634824  addi 6, 6, 1
  0634828  addi 7, 7, 4
  063482c  lwz 9, 5904(10)
  0634830  lwz 11, 1704(9)
  0634834  lwz 0, 304(11)
  0634838  lfs 0, 284(11)
  063483c  stw 0, 68(8)
  0634840  lwz 9, 320(11)
  0634844  stfs 0, 4(8)
  0634848  stw 9, 132(8)
  063484c  stw 4, 0(28)
  0634850  lbz 9, 6081(5)
  0634854  cmplw 7, 9, 6
  0634858  bt 29, 0x634814
  063485c  bt 18, 0x6348a8
  0634860  stw 9, 0(27)
  0634864  mr 31, 26
  0634868  bl 0x633da4
  063486c  ld 0, 176(1)
  0634870  clrldi 3, 31, 32
  0634874  lwz 12, 168(1)
  0634878  ld 26, 112(1)
  063487c  mtlr 0
  0634880  ld 27, 120(1)
  0634884  mtocrf 8, 12
  0634888  ld 28, 128(1)
  063488c  ld 29, 136(1)
  0634890  ld 31, 152(1)
  0634894  addi 1, 1, 160
  0634898  blr
  063489c  li 31, 0
  06348a0  bl 0x633da4
  06348a4  b 0x63486c
  06348a8  mr 31, 26
  06348ac  bl 0x633da4
  06348b0  b 0x63486c

FUN_006348b4:   # 0x6348b4, 0xa8 bytes
  06348b4  stdu 1, -144(1)
  06348b8  mflr 0
  06348bc  std 29, 120(1)
  06348c0  mr 29, 3
  06348c4  std 31, 136(1)
  06348c8  std 0, 160(1)
  06348cc  mr 31, 4
  06348d0  bl 0x633e34
  06348d4  clrldi 3, 29, 32
  06348d8  li 29, 0
  06348dc  bl 0x633cfc
  06348e0  cmpwi 7, 3, 0
  06348e4  bt 30, 0x634910
  06348e8  lwz 11, 1404(3)
  06348ec  slwi 9, 31, 2
  06348f0  li 29, 0
  06348f4  addi 11, 11, 1720
  06348f8  addi 9, 9, 5904
  06348fc  clrldi 3, 11, 32
  0634900  extsw 9, 9
  0634904  lbz 0, 6081(3)
  0634908  cmplw 7, 0, 31
  063490c  bt 29, 0x634930
  0634910  bl 0x633da4
  0634914  ld 0, 160(1)
  0634918  clrldi 3, 29, 32
  063491c  ld 31, 136(1)
  0634920  ld 29, 120(1)
  0634924  mtlr 0
  0634928  addi 1, 1, 144
  063492c  blr
  0634930  lwzx 9, 3, 9
  0634934  lwz 11, 1704(9)
  0634938  lwz 29, 0(11)
  063493c  bl 0x633da4
  0634940  ld 0, 160(1)
  0634944  clrldi 3, 29, 32
  0634948  ld 31, 136(1)
  063494c  ld 29, 120(1)
  0634950  mtlr 0
  0634954  addi 1, 1, 144
  0634958  blr

FUN_0063495c:   # 0x63495c, 0x4c bytes
  063495c  stdu 1, -144(1)
  0634960  mflr 0
  0634964  std 29, 112(1)
  0634968  mr 29, 3
  063496c  stfd 31, 136(1)
  0634970  std 0, 160(1)
  0634974  fmr 31, 1
  0634978  bl 0x633e34
  063497c  clrldi 3, 29, 32
  0634980  bl 0x633d70
  0634984  cmpwi 7, 3, 0
  0634988  bt 30, 0x634990
  063498c  stfs 31, 8020(3)
  0634990  ld 0, 160(1)
  0634994  ld 29, 112(1)
  0634998  lfd 31, 136(1)
  063499c  addi 1, 1, 144
  06349a0  mtlr 0
  06349a4  b 0x633da4

FUN_006349a8:   # 0x6349a8, 0x6c bytes
  06349a8  stdu 1, -144(1)
  06349ac  mflr 0
  06349b0  std 29, 120(1)
  06349b4  mr 29, 3
  06349b8  std 0, 160(1)
  06349bc  std 31, 136(1)
  06349c0  bl 0x633e34
  06349c4  clrldi 3, 29, 32
  06349c8  bl 0x633cfc
  06349cc  mr 31, 3
  06349d0  bl 0x633da4
  06349d4  cmpwi 7, 31, 0
  06349d8  bf 30, 0x6349f0
  06349dc  b 0x6349fc
  06349e0  lis 3, 1
  06349e4  ori 3, 3, 34464
  06349e8  bl 0x63f8c4
  06349ec  nop
  06349f0  lwz 0, 576(31)
  06349f4  cmpw 7, 0, 29
  06349f8  bt 30, 0x6349e0
  06349fc  ld 0, 160(1)
  0634a00  ld 29, 120(1)
  0634a04  ld 31, 136(1)
  0634a08  mtlr 0
  0634a0c  addi 1, 1, 144
  0634a10  blr

FUN_00634a14:   # 0x634a14, 0xc0 bytes
  0634a14  stdu 1, -160(1)
  0634a18  mflr 0
  0634a1c  std 30, 136(1)
  0634a20  lwz 30, -29412(2)
  0634a24  std 29, 128(1)
  0634a28  mr 29, 3
  0634a2c  stfd 31, 152(1)
  0634a30  std 28, 120(1)
  0634a34  std 31, 144(1)
  0634a38  std 0, 176(1)
  0634a3c  mr 31, 4
  0634a40  mr 28, 5
  0634a44  bl 0x633e34
  0634a48  clrldi 3, 29, 32
  0634a4c  lfs 31, -32548(30)
  0634a50  bl 0x633bf8
  0634a54  cmpwi 7, 3, 0
  0634a58  bt 30, 0x634aa8
  0634a5c  lwz 0, 572(3)
  0634a60  cmpwi 7, 0, 0
  0634a64  clrldi 3, 0, 32
  0634a68  bt 30, 0x634aa8
  0634a6c  lwz 0, 7888(3)
  0634a70  lfs 31, -32548(30)
  0634a74  rlwinm 0, 0, 0, 24, 24
  0634a78  cmpwi 7, 0, 0
  0634a7c  bt 30, 0x634aa8
  0634a80  lwz 0, 7828(3)
  0634a84  clrldi 4, 31, 56
  0634a88  clrldi 5, 28, 56
  0634a8c  lfs 31, -32548(30)
  0634a90  cmpwi 7, 0, -1
  0634a94  extsw 3, 0
  0634a98  bt 30, 0x634aa8
  0634a9c  bl 0x61fff8
  0634aa0  nop
  0634aa4  fmr 31, 1
  0634aa8  bl 0x633da4
  0634aac  ld 0, 176(1)
  0634ab0  fmr 1, 31
  0634ab4  ld 28, 120(1)
  0634ab8  ld 29, 128(1)
  0634abc  mtlr 0
  0634ac0  ld 30, 136(1)
  0634ac4  ld 31, 144(1)
  0634ac8  lfd 31, 152(1)
  0634acc  addi 1, 1, 160
  0634ad0  blr

FUN_00634ad4:   # 0x634ad4, 0xc0 bytes
  0634ad4  stdu 1, -144(1)
  0634ad8  mflr 0
  0634adc  std 29, 120(1)
  0634ae0  mr 29, 3
  0634ae4  std 31, 136(1)
  0634ae8  std 0, 160(1)
  0634aec  mr 31, 4
  0634af0  bl 0x633e34
  0634af4  clrldi 3, 29, 32
  0634af8  bl 0x633bf8
  0634afc  cmpwi 7, 3, 0
  0634b00  bt 30, 0x634b48
  0634b04  lwz 0, 556(3)
  0634b08  lbz 3, 580(3)
  0634b0c  cmpwi 7, 0, 0
  0634b10  bt 30, 0x634b48
  0634b14  clrlwi 9, 3, 24
  0634b18  sub 9, 9, 31
  0634b1c  cmpwi 7, 9, 1
  0634b20  addi 9, 9, -1
  0634b24  clrldi 9, 9, 32
  0634b28  mtctr 9
  0634b2c  bf 30, 0x634b38
  0634b30  b 0x634b6c
  0634b34  bdz 0x634b6c
  0634b38  clrldi 9, 0, 32
  0634b3c  lwz 0, 560(9)
  0634b40  cmpwi 7, 0, 0
  0634b44  bf 30, 0x634b34
  0634b48  bl 0x633da4
  0634b4c  li 29, 0
  0634b50  ld 0, 160(1)
  0634b54  clrldi 3, 29, 32
  0634b58  ld 31, 136(1)
  0634b5c  ld 29, 120(1)
  0634b60  mtlr 0
  0634b64  addi 1, 1, 144
  0634b68  blr
  0634b6c  clrldi 9, 0, 32
  0634b70  lwz 29, 0(9)
  0634b74  bl 0x633da4
  0634b78  ld 0, 160(1)
  0634b7c  clrldi 3, 29, 32
  0634b80  ld 31, 136(1)
  0634b84  ld 29, 120(1)
  0634b88  mtlr 0
  0634b8c  addi 1, 1, 144
  0634b90  blr

FUN_00634b94:   # 0x634b94, 0x4c bytes
  0634b94  stdu 1, -144(1)
  0634b98  mflr 0
  0634b9c  std 29, 120(1)
  0634ba0  mr 29, 3
  0634ba4  std 0, 160(1)
  0634ba8  bl 0x633e34
  0634bac  clrldi 3, 29, 32
  0634bb0  li 29, -115
  0634bb4  bl 0x633bf8
  0634bb8  cmpwi 7, 3, 0
  0634bbc  bt 30, 0x634bc4
  0634bc0  lbz 29, 580(3)
  0634bc4  bl 0x633da4
  0634bc8  ld 0, 160(1)
  0634bcc  extsw 3, 29
  0634bd0  ld 29, 120(1)
  0634bd4  mtlr 0
  0634bd8  addi 1, 1, 144
  0634bdc  blr

FUN_00634be0:   # 0x634be0, 0xb0 bytes
  0634be0  stdu 1, -144(1)
  0634be4  mflr 0
  0634be8  std 30, 128(1)
  0634bec  lwz 30, -29412(2)
  0634bf0  std 29, 120(1)
  0634bf4  std 31, 136(1)
  0634bf8  std 0, 160(1)
  0634bfc  mr 31, 3
  0634c00  mr 29, 4
  0634c04  bl 0x634b94
  0634c08  cmpwi 7, 3, 0
  0634c0c  li 5, 5368
  0634c10  bt 28, 0x634c5c
  0634c14  mr 3, 31
  0634c18  clrldi 4, 29, 32
  0634c1c  bf 30, 0x634c40
  0634c20  ld 0, 160(1)
  0634c24  mr 3, 31
  0634c28  ld 29, 120(1)
  0634c2c  ld 30, 128(1)
  0634c30  mtlr 0
  0634c34  ld 31, 136(1)
  0634c38  addi 1, 1, 144
  0634c3c  blr
  0634c40  ld 0, 160(1)
  0634c44  ld 29, 120(1)
  0634c48  ld 30, 128(1)
  0634c4c  mtlr 0
  0634c50  ld 31, 136(1)
  0634c54  addi 1, 1, 144
  0634c58  b 0x634ad4
  0634c5c  lwz 3, -32540(30)
  0634c60  li 31, 0
  0634c64  lwz 4, -32724(30)
  0634c68  bl 0x61948c
  0634c6c  nop
  0634c70  ld 0, 160(1)
  0634c74  ld 29, 120(1)
  0634c78  mr 3, 31
  0634c7c  ld 30, 128(1)
  0634c80  ld 31, 136(1)
  0634c84  mtlr 0
  0634c88  addi 1, 1, 144
  0634c8c  blr

FUN_00634c90:   # 0x634c90, 0x164 bytes
  0634c90  mfcr 12
  0634c94  stdu 1, -160(1)
  0634c98  std 30, 144(1)
  0634c9c  lwz 30, -29412(2)
  0634ca0  std 26, 112(1)
  0634ca4  std 27, 120(1)
  0634ca8  std 29, 136(1)
  0634cac  std 28, 128(1)
  0634cb0  std 31, 152(1)
  0634cb4  mr 27, 3
  0634cb8  mr 29, 4
  0634cbc  stw 12, 168(1)
  0634cc0  mflr 0
  0634cc4  std 0, 176(1)
  0634cc8  bl 0x634b94
  0634ccc  cmpwi 4, 3, 0
  0634cd0  mr 26, 3
  0634cd4  bt 16, 0x634d98
  0634cd8  cmpwi 7, 29, 0
  0634cdc  addi 28, 29, -1
  0634ce0  li 31, 0
  0634ce4  bt 29, 0x634d04
  0634ce8  b 0x634ddc
  0634cec  lwz 3, -32532(30)
  0634cf0  addi 31, 31, 1
  0634cf4  bl 0x61948c
  0634cf8  nop
  0634cfc  cmpw 7, 29, 31
  0634d00  bt 30, 0x634d24
  0634d04  cmpw 7, 28, 31
  0634d08  bt 29, 0x634cec
  0634d0c  lwz 3, -32528(30)
  0634d10  addi 31, 31, 1
  0634d14  bl 0x61948c
  0634d18  nop
  0634d1c  cmpw 7, 29, 31
  0634d20  bf 30, 0x634d04
  0634d24  lwz 3, -32520(30)
  0634d28  mr 4, 27
  0634d2c  bl 0x61948c
  0634d30  nop
  0634d34  bf 17, 0x634d68
  0634d38  addi 0, 29, 1
  0634d3c  li 31, 0
  0634d40  extsw 29, 0
  0634d44  clrldi 4, 31, 32
  0634d48  mr 3, 27
  0634d4c  addi 31, 31, 1
  0634d50  bl 0x634ad4
  0634d54  mr 4, 29
  0634d58  clrldi 3, 3, 32
  0634d5c  bl 0x634c90
  0634d60  cmpw 7, 26, 31
  0634d64  bf 30, 0x634d44
  0634d68  ld 0, 176(1)
  0634d6c  lwz 12, 168(1)
  0634d70  ld 26, 112(1)
  0634d74  mtlr 0
  0634d78  ld 27, 120(1)
  0634d7c  mtocrf 8, 12
  0634d80  ld 28, 128(1)
  0634d84  ld 29, 136(1)
  0634d88  ld 30, 144(1)
  0634d8c  ld 31, 152(1)
  0634d90  addi 1, 1, 160
  0634d94  blr
  0634d98  lwz 4, -32724(30)
  0634d9c  li 5, 5154
  0634da0  lwz 3, -32536(30)
  0634da4  bl 0x61948c
  0634da8  nop
  0634dac  ld 0, 176(1)
  0634db0  lwz 12, 168(1)
  0634db4  ld 26, 112(1)
  0634db8  mtlr 0
  0634dbc  ld 27, 120(1)
  0634dc0  mtocrf 8, 12
  0634dc4  ld 28, 128(1)
  0634dc8  ld 29, 136(1)
  0634dcc  ld 30, 144(1)
  0634dd0  ld 31, 152(1)
  0634dd4  addi 1, 1, 160
  0634dd8  blr
  0634ddc  bf- 30, 0x634d24
  0634de0  lwz 3, -32524(30)
  0634de4  mr 4, 27
  0634de8  bl 0x61948c
  0634dec  nop
  0634df0  b 0x634d34

FUN_00634df4:   # 0x634df4, 0x8 bytes
  0634df4  li 4, 0
  0634df8  b 0x634c90

FUN_00634dfc:   # 0x634dfc, 0x200 bytes
  0634dfc  cmpwi 7, 4, 0
  0634e00  mflr 0
  0634e04  stdu 1, -192(1)
  0634e08  std 23, 120(1)
  0634e0c  std 25, 136(1)
  0634e10  std 26, 144(1)
  0634e14  std 30, 176(1)
  0634e18  std 31, 184(1)
  0634e1c  std 24, 128(1)
  0634e20  std 27, 152(1)
  0634e24  std 28, 160(1)
  0634e28  std 29, 168(1)
  0634e2c  std 0, 208(1)
  0634e30  lwz 30, -29412(2)
  0634e34  mr 31, 4
  0634e38  mr 26, 5
  0634e3c  mr 25, 6
  0634e40  mr 23, 7
  0634e44  bt 30, 0x634f68
  0634e48  clrldi 27, 3, 32
  0634e4c  mr 3, 27
  0634e50  bl 0x634b94
  0634e54  cmpwi 7, 3, 0
  0634e58  bt 28, 0x634fe0
  0634e5c  bt 30, 0x634f00
  0634e60  cmplw 7, 3, 26
  0634e64  mr 28, 3
  0634e68  bf 29, 0x634e70
  0634e6c  mr 28, 26
  0634e70  cmpwi 7, 28, 0
  0634e74  bt 30, 0x634f68
  0634e78  clrldi 24, 31, 32
  0634e7c  clrldi 25, 25, 32
  0634e80  clrldi 26, 23, 32
  0634e84  li 31, 0
  0634e88  b 0x634e90
  0634e8c  bt 26, 0x634fa4
  0634e90  clrldi 29, 31, 32
  0634e94  mr 3, 27
  0634e98  mr 4, 29
  0634e9c  addi 31, 31, 1
  0634ea0  bl 0x634ad4
  0634ea4  mr 5, 29
  0634ea8  clrldi 3, 3, 32
  0634eac  mr 4, 24
  0634eb0  mr 6, 25
  0634eb4  mr 7, 26
  0634eb8  bl 0x632508
  0634ebc  cmpw 6, 28, 31
  0634ec0  cmpwi 7, 3, 0
  0634ec4  bf 30, 0x634e8c
  0634ec8  ld 0, 208(1)
  0634ecc  clrldi 3, 3, 32
  0634ed0  ld 23, 120(1)
  0634ed4  ld 24, 128(1)
  0634ed8  mtlr 0
  0634edc  ld 25, 136(1)
  0634ee0  ld 26, 144(1)
  0634ee4  ld 27, 152(1)
  0634ee8  ld 28, 160(1)
  0634eec  ld 29, 168(1)
  0634ef0  ld 30, 176(1)
  0634ef4  ld 31, 184(1)
  0634ef8  addi 1, 1, 192
  0634efc  blr
  0634f00  mr 3, 27
  0634f04  clrldi 4, 31, 32
  0634f08  clrldi 6, 25, 32
  0634f0c  clrldi 7, 23, 32
  0634f10  li 5, 0
  0634f14  bl 0x632508
  0634f18  ld 23, 120(1)
  0634f1c  srawi 0, 3, 31
  0634f20  ld 24, 128(1)
  0634f24  ld 25, 136(1)
  0634f28  xor 9, 0, 3
  0634f2c  ld 26, 144(1)
  0634f30  ld 27, 152(1)
  0634f34  sub 9, 9, 0
  0634f38  ld 0, 208(1)
  0634f3c  ld 28, 160(1)
  0634f40  addi 9, 9, -1
  0634f44  ld 29, 168(1)
  0634f48  ld 30, 176(1)
  0634f4c  mtlr 0
  0634f50  srwi 9, 9, 31
  0634f54  ld 31, 184(1)
  0634f58  addi 1, 1, 192
  0634f5c  xori 3, 9, 1
  0634f60  clrldi 3, 3, 32
  0634f64  blr
  0634f68  ld 0, 208(1)
  0634f6c  li 3, 0
  0634f70  ld 23, 120(1)
  0634f74  clrldi 3, 3, 32
  0634f78  ld 24, 128(1)
  0634f7c  ld 25, 136(1)
  0634f80  mtlr 0
  0634f84  ld 26, 144(1)
  0634f88  ld 27, 152(1)
  0634f8c  ld 28, 160(1)
  0634f90  ld 29, 168(1)
  0634f94  ld 30, 176(1)
  0634f98  ld 31, 184(1)
  0634f9c  addi 1, 1, 192
  0634fa0  blr
  0634fa4  mr 3, 31
  0634fa8  ld 0, 208(1)
  0634fac  ld 23, 120(1)
  0634fb0  clrldi 3, 3, 32
  0634fb4  ld 24, 128(1)
  0634fb8  ld 25, 136(1)
  0634fbc  mtlr 0
  0634fc0  ld 26, 144(1)
  0634fc4  ld 27, 152(1)
  0634fc8  ld 28, 160(1)
  0634fcc  ld 29, 168(1)
  0634fd0  ld 30, 176(1)
  0634fd4  ld 31, 184(1)
  0634fd8  addi 1, 1, 192
  0634fdc  blr
  0634fe0  lwz 3, -32516(30)
  0634fe4  li 5, 4238
  0634fe8  lwz 4, -32724(30)
  0634fec  bl 0x61948c
  0634ff0  nop
  0634ff4  li 3, 0
  0634ff8  b 0x634ec8

FUN_00634ffc:   # 0x634ffc, 0x54 bytes
  0634ffc  stdu 1, -144(1)
  0635000  mflr 0
  0635004  std 29, 120(1)
  0635008  mr 29, 3
  063500c  std 0, 160(1)
  0635010  bl 0x633e34
  0635014  clrldi 3, 29, 32
  0635018  li 29, 0
  063501c  bl 0x633cfc
  0635020  cmpwi 7, 3, 0
  0635024  bt 30, 0x635034
  0635028  lbz 9, 1415(3)
  063502c  lbz 0, 1414(3)
  0635030  mullw 29, 0, 9
  0635034  bl 0x633da4
  0635038  ld 0, 160(1)
  063503c  extsw 3, 29
  0635040  ld 29, 120(1)
  0635044  mtlr 0
  0635048  addi 1, 1, 144
  063504c  blr

FUN_00635050:   # 0x635050, 0xcc bytes
  0635050  cmpdi 4, 0
  0635054  mflr 0
  0635058  stdu 1, -144(1)
  063505c  std 29, 120(1)
  0635060  std 30, 128(1)
  0635064  std 31, 136(1)
  0635068  std 0, 160(1)
  063506c  lwz 30, -29412(2)
  0635070  mr 29, 4
  0635074  li 5, 3479
  0635078  li 31, 0
  063507c  bt 2, 0x6350c4
  0635080  clrldi 31, 3, 32
  0635084  bl 0x633e34
  0635088  mr 3, 31
  063508c  bl 0x633d70
  0635090  cmpwi 7, 3, 0
  0635094  bt 30, 0x6350f4
  0635098  lwz 0, 7832(3)
  063509c  stw 0, 0(29)
  06350a0  bl 0x633da4
  06350a4  ld 0, 160(1)
  06350a8  mr 3, 31
  06350ac  ld 29, 120(1)
  06350b0  ld 30, 128(1)
  06350b4  mtlr 0
  06350b8  ld 31, 136(1)
  06350bc  addi 1, 1, 144
  06350c0  blr
  06350c4  lwz 3, -32592(30)
  06350c8  lwz 4, -32724(30)
  06350cc  bl 0x61948c
  06350d0  nop
  06350d4  ld 0, 160(1)
  06350d8  ld 29, 120(1)
  06350dc  mr 3, 31
  06350e0  ld 30, 128(1)
  06350e4  ld 31, 136(1)
  06350e8  mtlr 0
  06350ec  addi 1, 1, 144
  06350f0  blr
  06350f4  bl 0x633da4
  06350f8  li 31, 0
  06350fc  ld 0, 160(1)
  0635100  mr 3, 31
  0635104  ld 29, 120(1)
  0635108  ld 30, 128(1)
  063510c  mtlr 0
  0635110  ld 31, 136(1)
  0635114  addi 1, 1, 144
  0635118  blr

FUN_0063511c:   # 0x63511c, 0xe8 bytes
  063511c  cmpdi 4, 0
  0635120  mflr 0
  0635124  stdu 1, -144(1)
  0635128  std 29, 120(1)
  063512c  std 30, 128(1)
  0635130  std 31, 136(1)
  0635134  std 0, 160(1)
  0635138  lwz 30, -29412(2)
  063513c  mr 29, 4
  0635140  li 5, 3418
  0635144  li 31, 0
  0635148  bt 2, 0x6351ac
  063514c  clrldi 31, 3, 32
  0635150  bl 0x633e34
  0635154  mr 3, 31
  0635158  bl 0x633d70
  063515c  cmpwi 7, 3, 0
  0635160  addi 0, 3, 1720
  0635164  clrldi 3, 0, 32
  0635168  bt 30, 0x6351dc
  063516c  bl 0x6371fc
  0635170  nop
  0635174  addi 3, 3, -1
  0635178  not 0, 3
  063517c  srawi 0, 0, 31
  0635180  and 3, 3, 0
  0635184  stw 3, 0(29)
  0635188  bl 0x633da4
  063518c  ld 0, 160(1)
  0635190  mr 3, 31
  0635194  ld 29, 120(1)
  0635198  ld 30, 128(1)
  063519c  mtlr 0
  06351a0  ld 31, 136(1)
  06351a4  addi 1, 1, 144
  06351a8  blr
  06351ac  lwz 3, -32592(30)
  06351b0  lwz 4, -32724(30)
  06351b4  bl 0x61948c
  06351b8  nop
  06351bc  ld 0, 160(1)
  06351c0  ld 29, 120(1)
  06351c4  mr 3, 31
  06351c8  ld 30, 128(1)
  06351cc  ld 31, 136(1)
  06351d0  mtlr 0
  06351d4  addi 1, 1, 144
  06351d8  blr
  06351dc  bl 0x633da4
  06351e0  li 31, 0
  06351e4  ld 0, 160(1)
  06351e8  mr 3, 31
  06351ec  ld 29, 120(1)
  06351f0  ld 30, 128(1)
  06351f4  mtlr 0
  06351f8  ld 31, 136(1)
  06351fc  addi 1, 1, 144
  0635200  blr

FUN_00635204:   # 0x635204, 0x1fc bytes
  0635204  mfcr 12
  0635208  cmpwi 7, 4, 0
  063520c  stdu 1, -176(1)
  0635210  std 27, 136(1)
  0635214  std 28, 144(1)
  0635218  std 29, 152(1)
  063521c  std 30, 160(1)
  0635220  std 31, 168(1)
  0635224  std 26, 128(1)
  0635228  lwz 30, -29412(2)
  063522c  mr 31, 4
  0635230  mr 29, 5
  0635234  mr 28, 6
  0635238  mr 27, 7
  063523c  mr 9, 5
  0635240  mr 11, 6
  0635244  mr 10, 7
  0635248  stw 12, 184(1)
  063524c  mflr 0
  0635250  std 0, 192(1)
  0635254  bt 30, 0x635260
  0635258  li 0, 0
  063525c  stw 0, 0(4)
  0635260  cmpwi 4, 9, 0
  0635264  bt 18, 0x635270
  0635268  li 0, 0
  063526c  stw 0, 0(29)
  0635270  cmpwi 3, 11, 0
  0635274  bt 14, 0x635280
  0635278  li 0, 0
  063527c  stw 0, 0(28)
  0635280  cmpwi 2, 10, 0
  0635284  bt 10, 0x635290
  0635288  li 0, 0
  063528c  stw 0, 0(27)
  0635290  bt 30, 0x6353a0
  0635294  clrldi 26, 3, 32
  0635298  bl 0x633e34
  063529c  mr 3, 26
  06352a0  bl 0x633cfc
  06352a4  cmpwi 7, 3, 0
  06352a8  bt 30, 0x6353f4
  06352ac  lwz 3, 1404(3)
  06352b0  addi 0, 3, 1720
  06352b4  clrldi 9, 0, 32
  06352b8  lbz 0, 6081(9)
  06352bc  cmpwi 7, 0, 0
  06352c0  bt 30, 0x635300
  06352c4  lwz 9, 5904(9)
  06352c8  clrldi 0, 0, 32
  06352cc  addi 11, 3, 7628
  06352d0  mtctr 0
  06352d4  lbz 0, 1714(9)
  06352d8  cmpwi 7, 0, 0
  06352dc  bf 30, 0x6352f4
  06352e0  b 0x635360
  06352e4  lwz 9, 0(9)
  06352e8  lbz 0, 1714(9)
  06352ec  cmpwi 7, 0, 0
  06352f0  bt 30, 0x635360
  06352f4  clrldi 9, 11, 32
  06352f8  addi 11, 11, 4
  06352fc  bdnz 0x6352e4
  0635300  clrldi 9, 3, 32
  0635304  li 0, 1
  0635308  stw 0, 0(31)
  063530c  lwz 3, 7772(9)
  0635310  cmpwi 7, 3, 0
  0635314  bt 30, 0x635360
  0635318  bt 18, 0x635330
  063531c  clrldi 9, 3, 32
  0635320  lbz 11, 22(9)
  0635324  lbz 0, 21(9)
  0635328  mullw 0, 0, 11
  063532c  stw 0, 0(29)
  0635330  bt 14, 0x635340
  0635334  clrldi 9, 3, 32
  0635338  lbz 0, 23(9)
  063533c  stw 0, 0(28)
  0635340  bt 10, 0x635360
  0635344  clrldi 9, 3, 32
  0635348  lwz 0, 88(9)
  063534c  std 0, 112(1)
  0635350  lfd 13, 112(1)
  0635354  fcfid 13, 13
  0635358  frsp 0, 13
  063535c  stfs 0, 0(27)
  0635360  bl 0x633da4
  0635364  lwz 12, 184(1)
  0635368  mr 3, 26
  063536c  ld 0, 192(1)
  0635370  ld 26, 128(1)
  0635374  mtocrf 32, 12
  0635378  ld 27, 136(1)
  063537c  mtlr 0
  0635380  ld 28, 144(1)
  0635384  mtocrf 16, 12
  0635388  ld 29, 152(1)
  063538c  mtocrf 8, 12
  0635390  ld 30, 160(1)
  0635394  ld 31, 168(1)
  0635398  addi 1, 1, 176
  063539c  blr
  06353a0  lwz 3, -32592(30)
  06353a4  li 5, 3323
  06353a8  lwz 4, -32724(30)
  06353ac  li 26, 0
  06353b0  bl 0x61948c
  06353b4  nop
  06353b8  lwz 12, 184(1)
  06353bc  ld 0, 192(1)
  06353c0  mr 3, 26
  06353c4  ld 27, 136(1)
  06353c8  ld 26, 128(1)
  06353cc  mtlr 0
  06353d0  ld 28, 144(1)
  06353d4  mtocrf 32, 12
  06353d8  ld 29, 152(1)
  06353dc  mtocrf 16, 12
  06353e0  ld 30, 160(1)
  06353e4  mtocrf 8, 12
  06353e8  ld 31, 168(1)
  06353ec  addi 1, 1, 176
  06353f0  blr
  06353f4  li 26, 0
  06353f8  bl 0x633da4
  06353fc  b 0x635364

FUN_00635400:   # 0x635400, 0xc4 bytes
  0635400  stdu 1, -144(1)
  0635404  mflr 0
  0635408  std 29, 120(1)
  063540c  clrldi 29, 3, 32
  0635410  std 31, 136(1)
  0635414  std 0, 160(1)
  0635418  mr 31, 4
  063541c  bl 0x633e34
  0635420  mr 3, 29
  0635424  bl 0x633cfc
  0635428  cmpwi 7, 3, 0
  063542c  bt 30, 0x6354b8
  0635430  lwz 0, 1404(3)
  0635434  cmpwi 7, 0, 0
  0635438  clrldi 8, 0, 32
  063543c  bt 30, 0x635498
  0635440  lwz 0, 0(31)
  0635444  lwz 9, 4(31)
  0635448  lwz 11, 8(31)
  063544c  lwz 10, 12(31)
  0635450  stw 0, 7712(8)
  0635454  stw 9, 7716(8)
  0635458  stw 11, 7720(8)
  063545c  stw 10, 7724(8)
  0635460  lwz 0, 16(31)
  0635464  lwz 9, 20(31)
  0635468  lwz 11, 24(31)
  063546c  lwz 10, 28(31)
  0635470  stw 0, 7728(8)
  0635474  stw 9, 7732(8)
  0635478  stw 11, 7736(8)
  063547c  stw 10, 7740(8)
  0635480  lwz 0, 40(31)
  0635484  lwz 9, 32(31)
  0635488  lwz 11, 36(31)
  063548c  stw 0, 7752(8)
  0635490  stw 9, 7744(8)
  0635494  stw 11, 7748(8)
  0635498  bl 0x633da4
  063549c  ld 0, 160(1)
  06354a0  mr 3, 29
  06354a4  ld 31, 136(1)
  06354a8  ld 29, 120(1)
  06354ac  mtlr 0
  06354b0  addi 1, 1, 144
  06354b4  blr
  06354b8  li 29, 0
  06354bc  bl 0x633da4
  06354c0  b 0x63549c

FUN_006354c4:   # 0x6354c4, 0x80 bytes
  06354c4  stdu 1, -144(1)
  06354c8  mflr 0
  06354cc  std 31, 136(1)
  06354d0  clrldi 31, 3, 32
  06354d4  std 29, 120(1)
  06354d8  std 0, 160(1)
  06354dc  mr 29, 4
  06354e0  bl 0x633e34
  06354e4  mr 3, 31
  06354e8  bl 0x633cfc
  06354ec  cmpwi 7, 3, 0
  06354f0  bt 30, 0x635538
  06354f4  lwz 0, 1404(3)
  06354f8  cmpwi 7, 0, 0
  06354fc  clrldi 9, 0, 32
  0635500  bt 30, 0x635518
  0635504  lwz 0, 7764(9)
  0635508  cmpwi 7, 0, 0
  063550c  clrldi 9, 0, 32
  0635510  bt 30, 0x635518
  0635514  stw 29, 716(9)
  0635518  bl 0x633da4
  063551c  ld 0, 160(1)
  0635520  mr 3, 31
  0635524  ld 29, 120(1)
  0635528  ld 31, 136(1)
  063552c  mtlr 0
  0635530  addi 1, 1, 144
  0635534  blr
  0635538  li 31, 0
  063553c  bl 0x633da4
  0635540  b 0x63551c

FUN_00635544:   # 0x635544, 0x78 bytes
  0635544  stdu 1, -144(1)
  0635548  mflr 0
  063554c  std 29, 120(1)
  0635550  mr 29, 3
  0635554  std 31, 136(1)
  0635558  std 0, 160(1)
  063555c  mr 31, 4
  0635560  bl 0x633e34
  0635564  clrldi 3, 29, 32
  0635568  bl 0x633d70
  063556c  mr 29, 3
  0635570  clrldi 3, 3, 32
  0635574  cmpwi 7, 29, 0
  0635578  bt- 30, 0x6355a4
  063557c  lwz 0, 7772(3)
  0635580  cmpwi 7, 0, 0
  0635584  bt- 30, 0x6355b0
  0635588  stw 0, 0(31)
  063558c  ld 0, 160(1)
  0635590  ld 29, 120(1)
  0635594  ld 31, 136(1)
  0635598  mtlr 0
  063559c  addi 1, 1, 144
  06355a0  blr
  06355a4  bl 0x633da4
  06355a8  clrldi 3, 29, 32
  06355ac  b 0x63558c
  06355b0  bl 0x633da4
  06355b4  li 3, 0
  06355b8  b 0x63558c

FUN_006355bc:   # 0x6355bc, 0x120 bytes
  06355bc  stdu 1, -176(1)
  06355c0  mflr 0
  06355c4  cmpdi 4, 0
  06355c8  std 28, 144(1)
  06355cc  mr 28, 5
  06355d0  std 26, 128(1)
  06355d4  std 27, 136(1)
  06355d8  std 29, 152(1)
  06355dc  std 30, 160(1)
  06355e0  std 31, 168(1)
  06355e4  std 0, 192(1)
  06355e8  lwz 30, -29412(2)
  06355ec  mr 26, 4
  06355f0  li 5, 3131
  06355f4  mr 27, 6
  06355f8  li 29, 0
  06355fc  cmpwi 7, 28, 0
  0635600  bt 2, 0x6356c0
  0635604  clrldi 29, 3, 32
  0635608  addi 4, 1, 112
  063560c  mr 3, 29
  0635610  li 5, 3139
  0635614  bt 30, 0x635680
  0635618  li 0, 0
  063561c  stw 0, 112(1)
  0635620  bl 0x635544
  0635624  cmpwi 7, 3, 0
  0635628  cmpwi 6, 27, 0
  063562c  bt 30, 0x6356d4
  0635630  lwz 11, 112(1)
  0635634  lwz 0, 716(11)
  0635638  stw 0, 0(26)
  063563c  lwz 9, 724(11)
  0635640  stw 9, 0(28)
  0635644  bt 26, 0x635650
  0635648  lwz 0, 12(11)
  063564c  stw 0, 0(27)
  0635650  bl 0x633da4
  0635654  ld 0, 192(1)
  0635658  mr 3, 29
  063565c  ld 26, 128(1)
  0635660  ld 27, 136(1)
  0635664  mtlr 0
  0635668  ld 28, 144(1)
  063566c  ld 29, 152(1)
  0635670  ld 30, 160(1)
  0635674  ld 31, 168(1)
  0635678  addi 1, 1, 176
  063567c  blr
  0635680  lwz 3, -32592(30)
  0635684  li 29, 0
  0635688  lwz 4, -32724(30)
  063568c  bl 0x61948c
  0635690  nop
  0635694  ld 0, 192(1)
  0635698  ld 26, 128(1)
  063569c  mr 3, 29
  06356a0  ld 27, 136(1)
  06356a4  ld 28, 144(1)
  06356a8  mtlr 0
  06356ac  ld 29, 152(1)
  06356b0  ld 30, 160(1)
  06356b4  ld 31, 168(1)
  06356b8  addi 1, 1, 176
  06356bc  blr
  06356c0  lwz 4, -32724(30)
  06356c4  lwz 3, -32592(30)
  06356c8  bl 0x61948c
  06356cc  nop
  06356d0  b 0x635654
  06356d4  li 29, 0
  06356d8  b 0x635654

FUN_006356dc:   # 0x6356dc, 0x140 bytes
  06356dc  stdu 1, -192(1)
  06356e0  mflr 0
  06356e4  cmpdi 4, 0
  06356e8  std 0, 208(1)
  06356ec  li 0, 0
  06356f0  std 27, 152(1)
  06356f4  std 28, 160(1)
  06356f8  std 29, 168(1)
  06356fc  std 30, 176(1)
  0635700  std 31, 184(1)
  0635704  mr 29, 4
  0635708  lwz 30, -29412(2)
  063570c  mr 27, 5
  0635710  stw 0, 112(1)
  0635714  addi 4, 1, 112
  0635718  li 5, 3042
  063571c  li 28, 0
  0635720  bt 2, 0x6357dc
  0635724  clrldi 28, 3, 32
  0635728  mr 3, 28
  063572c  bl 0x635544
  0635730  cmpwi 6, 27, 0
  0635734  cmpwi 7, 3, 0
  0635738  lfs 13, -32548(30)
  063573c  bt 30, 0x635814
  0635740  lwz 0, 112(1)
  0635744  clrldi 8, 0, 32
  0635748  mr 10, 8
  063574c  lwz 11, 104(8)
  0635750  lwz 9, 712(8)
  0635754  cmplw 7, 11, 9
  0635758  sub 0, 11, 9
  063575c  clrldi 0, 0, 32
  0635760  bt 29, 0x6357c8
  0635764  lwz 0, 88(10)
  0635768  std 0, 128(1)
  063576c  lfd 12, 128(1)
  0635770  fcfid 12, 12
  0635774  frsp 0, 12
  0635778  fdivs 0, 13, 0
  063577c  stfs 0, 0(29)
  0635780  bt 26, 0x63578c
  0635784  lwz 0, 12(10)
  0635788  stw 0, 0(27)
  063578c  lfs 13, 728(8)
  0635790  lfs 0, 0(29)
  0635794  fsubs 0, 0, 13
  0635798  stfs 0, 0(29)
  063579c  bl 0x633da4
  06357a0  ld 0, 208(1)
  06357a4  mr 3, 28
  06357a8  ld 27, 152(1)
  06357ac  ld 28, 160(1)
  06357b0  mtlr 0
  06357b4  ld 29, 168(1)
  06357b8  ld 30, 176(1)
  06357bc  ld 31, 184(1)
  06357c0  addi 1, 1, 192
  06357c4  blr
  06357c8  std 0, 128(1)
  06357cc  lfd 0, 128(1)
  06357d0  fcfid 0, 0
  06357d4  frsp 13, 0
  06357d8  b 0x635764
  06357dc  lwz 3, -32592(30)
  06357e0  lwz 4, -32724(30)
  06357e4  bl 0x61948c
  06357e8  nop
  06357ec  ld 0, 208(1)
  06357f0  ld 27, 152(1)
  06357f4  mr 3, 28
  06357f8  ld 29, 168(1)
  06357fc  ld 28, 160(1)
  0635800  mtlr 0
  0635804  ld 30, 176(1)
  0635808  ld 31, 184(1)
  063580c  addi 1, 1, 192
  0635810  blr
  0635814  li 28, 0
  0635818  b 0x6357a0

FUN_0063581c:   # 0x63581c, 0x128 bytes
  063581c  stdu 1, -192(1)
  0635820  mflr 0
  0635824  cmpdi 4, 0
  0635828  std 0, 208(1)
  063582c  li 0, 0
  0635830  std 27, 152(1)
  0635834  std 28, 160(1)
  0635838  std 29, 168(1)
  063583c  std 30, 176(1)
  0635840  std 31, 184(1)
  0635844  mr 27, 4
  0635848  lwz 30, -29412(2)
  063584c  mr 28, 5
  0635850  stw 0, 112(1)
  0635854  addi 4, 1, 112
  0635858  li 5, 2966
  063585c  li 29, 0
  0635860  bt 2, 0x635904
  0635864  clrldi 29, 3, 32
  0635868  mr 3, 29
  063586c  bl 0x635544
  0635870  cmpwi 6, 28, 0
  0635874  cmpwi 7, 3, 0
  0635878  lfs 13, -32548(30)
  063587c  bt 30, 0x63593c
  0635880  lwz 11, 112(1)
  0635884  lwz 0, 88(11)
  0635888  cmpwi 7, 0, 0
  063588c  clrldi 9, 0, 32
  0635890  bf 30, 0x6358d8
  0635894  lfs 0, 728(11)
  0635898  bt 26, 0x6358a4
  063589c  lwz 0, 12(11)
  06358a0  stw 0, 0(28)
  06358a4  fadds 0, 13, 0
  06358a8  stfs 0, 0(27)
  06358ac  bl 0x633da4
  06358b0  ld 0, 208(1)
  06358b4  mr 3, 29
  06358b8  ld 27, 152(1)
  06358bc  ld 28, 160(1)
  06358c0  mtlr 0
  06358c4  ld 29, 168(1)
  06358c8  ld 30, 176(1)
  06358cc  ld 31, 184(1)
  06358d0  addi 1, 1, 192
  06358d4  blr
  06358d8  lwz 0, 712(11)
  06358dc  std 9, 128(1)
  06358e0  lfd 0, 128(1)
  06358e4  std 0, 128(1)
  06358e8  fcfid 0, 0
  06358ec  lfd 12, 128(1)
  06358f0  fcfid 12, 12
  06358f4  frsp 13, 0
  06358f8  frsp 0, 12
  06358fc  fdivs 13, 0, 13
  0635900  b 0x635894
  0635904  lwz 3, -32592(30)
  0635908  lwz 4, -32724(30)
  063590c  bl 0x61948c
  0635910  nop
  0635914  ld 0, 208(1)
  0635918  ld 27, 152(1)
  063591c  mr 3, 29
  0635920  ld 28, 160(1)
  0635924  ld 29, 168(1)
  0635928  mtlr 0
  063592c  ld 30, 176(1)
  0635930  ld 31, 184(1)
  0635934  addi 1, 1, 192
  0635938  blr
  063593c  li 29, 0
  0635940  b 0x6358b0

FUN_00635944:   # 0x635944, 0x128 bytes
  0635944  stdu 1, -192(1)
  0635948  mflr 0
  063594c  cmpdi 4, 0
  0635950  std 0, 208(1)
  0635954  li 0, 0
  0635958  std 26, 144(1)
  063595c  std 27, 152(1)
  0635960  std 28, 160(1)
  0635964  std 29, 168(1)
  0635968  std 30, 176(1)
  063596c  mr 27, 4
  0635970  lwz 30, -29412(2)
  0635974  mr 29, 3
  0635978  mr 28, 5
  063597c  std 31, 184(1)
  0635980  addi 4, 1, 112
  0635984  li 5, 2888
  0635988  li 26, 0
  063598c  stw 0, 112(1)
  0635990  clrldi 3, 3, 32
  0635994  bt 2, 0x635a30
  0635998  bl 0x635544
  063599c  li 26, 0
  06359a0  cmpwi 7, 3, 0
  06359a4  bt 30, 0x6359c0
  06359a8  lwz 11, 112(1)
  06359ac  cmpwi 6, 28, 0
  06359b0  lbz 0, 18(11)
  06359b4  cmpwi 7, 0, 0
  06359b8  bf 30, 0x6359ec
  06359bc  bl 0x633da4
  06359c0  ld 0, 208(1)
  06359c4  clrldi 3, 26, 32
  06359c8  ld 27, 152(1)
  06359cc  ld 26, 144(1)
  06359d0  mtlr 0
  06359d4  ld 28, 160(1)
  06359d8  ld 29, 168(1)
  06359dc  ld 30, 176(1)
  06359e0  ld 31, 184(1)
  06359e4  addi 1, 1, 192
  06359e8  blr
  06359ec  lwz 0, 104(11)
  06359f0  mr 26, 29
  06359f4  lwz 9, 88(11)
  06359f8  std 0, 128(1)
  06359fc  lfd 12, 128(1)
  0635a00  fcfid 12, 12
  0635a04  std 9, 128(1)
  0635a08  frsp 0, 12
  0635a0c  lfd 12, 128(1)
  0635a10  fcfid 12, 12
  0635a14  frsp 13, 12
  0635a18  fdivs 0, 0, 13
  0635a1c  stfs 0, 0(27)
  0635a20  bt 26, 0x6359bc
  0635a24  lwz 0, 12(11)
  0635a28  stw 0, 0(28)
  0635a2c  b 0x6359bc
  0635a30  lwz 3, -32592(30)
  0635a34  lwz 4, -32724(30)
  0635a38  bl 0x61948c
  0635a3c  nop
  0635a40  ld 0, 208(1)
  0635a44  ld 27, 152(1)
  0635a48  clrldi 3, 26, 32
  0635a4c  ld 28, 160(1)
  0635a50  ld 26, 144(1)
  0635a54  mtlr 0
  0635a58  ld 29, 168(1)
  0635a5c  ld 30, 176(1)
  0635a60  ld 31, 184(1)
  0635a64  addi 1, 1, 192
  0635a68  blr

FUN_00635a6c:   # 0x635a6c, 0x2a4 bytes
  0635a6c  cmpdi 3, 0
  0635a70  mflr 0
  0635a74  stdu 1, -208(1)
  0635a78  std 25, 152(1)
  0635a7c  std 28, 176(1)
  0635a80  std 30, 192(1)
  0635a84  std 31, 200(1)
  0635a88  std 23, 136(1)
  0635a8c  std 24, 144(1)
  0635a90  std 26, 160(1)
  0635a94  std 27, 168(1)
  0635a98  std 29, 184(1)
  0635a9c  std 0, 224(1)
  0635aa0  lwz 30, -29412(2)
  0635aa4  mr 28, 3
  0635aa8  mr 31, 4
  0635aac  mr 25, 5
  0635ab0  bt 2, 0x635b58
  0635ab4  cmpwi 7, 4, 0
  0635ab8  bt 30, 0x635b58
  0635abc  lfs 13, 12(3)
  0635ac0  fmr 0, 13
  0635ac4  lfs 12, -32512(30)
  0635ac8  lfd 11, -32504(30)
  0635acc  fadd 0, 0, 12
  0635ad0  fctidz 0, 0
  0635ad4  stfd 0, 112(1)
  0635ad8  ld 26, 112(1)
  0635adc  clrldi 0, 26, 32
  0635ae0  std 0, 112(1)
  0635ae4  lfd 12, 112(1)
  0635ae8  fcfid 12, 12
  0635aec  frsp 0, 12
  0635af0  fsubs 13, 13, 0
  0635af4  fcmpu 7, 13, 11
  0635af8  bt 29, 0x635b08
  0635afc  lfd 0, -32496(30)
  0635b00  fcmpu 7, 13, 0
  0635b04  bf 28, 0x635ba8
  0635b08  lwz 3, -32488(30)
  0635b0c  li 5, 2330
  0635b10  lwz 4, -32724(30)
  0635b14  li 29, 0
  0635b18  bl 0x61948c
  0635b1c  nop
  0635b20  ld 0, 224(1)
  0635b24  ld 23, 136(1)
  0635b28  clrldi 3, 29, 32
  0635b2c  ld 24, 144(1)
  0635b30  ld 25, 152(1)
  0635b34  mtlr 0
  0635b38  ld 26, 160(1)
  0635b3c  ld 27, 168(1)
  0635b40  ld 28, 176(1)
  0635b44  ld 29, 184(1)
  0635b48  ld 30, 192(1)
  0635b4c  ld 31, 200(1)
  0635b50  addi 1, 1, 208
  0635b54  blr
  0635b58  lwz 3, -32592(30)
  0635b5c  li 5, 2319
  0635b60  lwz 4, -32724(30)
  0635b64  li 29, 0
  0635b68  bl 0x61948c
  0635b6c  nop
  0635b70  ld 0, 224(1)
  0635b74  ld 23, 136(1)
  0635b78  clrldi 3, 29, 32
  0635b7c  ld 24, 144(1)
  0635b80  ld 25, 152(1)
  0635b84  mtlr 0
  0635b88  ld 26, 160(1)
  0635b8c  ld 27, 168(1)
  0635b90  ld 28, 176(1)
  0635b94  ld 29, 184(1)
  0635b98  ld 30, 192(1)
  0635b9c  ld 31, 200(1)
  0635ba0  addi 1, 1, 208
  0635ba4  blr
  0635ba8  clrldi 23, 4, 32
  0635bac  bl 0x633e34
  0635bb0  li 29, 0
  0635bb4  mr 3, 23
  0635bb8  bl 0x632a38
  0635bbc  cmpwi 7, 3, 0
  0635bc0  mr 24, 3
  0635bc4  bt 30, 0x635cc8
  0635bc8  lwz 3, 1704(3)
  0635bcc  li 5, 432
  0635bd0  mr 4, 23
  0635bd4  addi 3, 3, 584
  0635bd8  clrldi 29, 24, 32
  0635bdc  bl 0x5c5ad0
  0635be0  nop
  0635be4  addi 4, 31, 212
  0635be8  lwz 3, 1704(24)
  0635bec  clrldi 4, 4, 32
  0635bf0  bl 0x61c628
  0635bf4  nop
  0635bf8  mr 4, 23
  0635bfc  extsw 5, 25
  0635c00  mr 3, 29
  0635c04  bl 0x633254
  0635c08  mr 3, 29
  0635c0c  bl 0x632ccc
  0635c10  mr 29, 3
  0635c14  clrldi 3, 3, 32
  0635c18  bl 0x632228
  0635c1c  li 0, -1
  0635c20  mr 31, 3
  0635c24  addi 3, 24, 1720
  0635c28  stw 0, 716(29)
  0635c2c  clrldi 3, 3, 32
  0635c30  bl 0x63714c
  0635c34  nop
  0635c38  lwz 9, -32484(30)
  0635c3c  lwz 29, 0(28)
  0635c40  cmpwi 7, 29, 0
  0635c44  lwz 0, 0(9)
  0635c48  stw 0, 400(31)
  0635c4c  bt 30, 0x635d04
  0635c50  li 0, 0
  0635c54  lwz 5, 16(28)
  0635c58  li 7, 0
  0635c5c  lwz 6, 100(31)
  0635c60  stb 0, 16(31)
  0635c64  lwz 9, 4(28)
  0635c68  li 0, 2
  0635c6c  stw 26, 88(31)
  0635c70  stw 9, 84(31)
  0635c74  stw 7, 108(31)
  0635c78  lwz 11, 8(28)
  0635c7c  li 10, 1
  0635c80  stb 0, 17(31)
  0635c84  rlwinm 8, 11, 1, 23, 30
  0635c88  stb 10, 20(31)
  0635c8c  stb 11, 23(31)
  0635c90  stb 0, 19(31)
  0635c94  mr 4, 23
  0635c98  lwz 3, 1704(24)
  0635c9c  stw 29, 8(31)
  0635ca0  stw 5, 12(31)
  0635ca4  std 7, 112(31)
  0635ca8  stw 8, 96(31)
  0635cac  stw 10, 92(31)
  0635cb0  divwu 9, 9, 8
  0635cb4  mullw 9, 9, 6
  0635cb8  stw 9, 104(31)
  0635cbc  bl 0x632e2c
  0635cc0  lwz 9, 1704(24)
  0635cc4  lwz 29, 0(9)
  0635cc8  bl 0x633da4
  0635ccc  ld 0, 224(1)
  0635cd0  clrldi 3, 29, 32
  0635cd4  ld 23, 136(1)
  0635cd8  ld 24, 144(1)
  0635cdc  mtlr 0
  0635ce0  ld 25, 152(1)
  0635ce4  ld 26, 160(1)
  0635ce8  ld 27, 168(1)
  0635cec  ld 28, 176(1)
  0635cf0  ld 29, 184(1)
  0635cf4  ld 30, 192(1)
  0635cf8  ld 31, 200(1)
  0635cfc  addi 1, 1, 208
  0635d00  blr
  0635d04  lwz 9, -32752(30)
  0635d08  lwz 29, 0(9)
  0635d0c  b 0x635c50

FUN_00635d10:   # 0x635d10, 0x2e8 bytes
  0635d10  mfcr 12
  0635d14  cmpwi 7, 5, 0
  0635d18  stdu 1, -240(1)
  0635d1c  std 20, 144(1)
  0635d20  std 21, 152(1)
  0635d24  std 22, 160(1)
  0635d28  std 27, 200(1)
  0635d2c  std 29, 216(1)
  0635d30  std 30, 224(1)
  0635d34  std 31, 232(1)
  0635d38  std 17, 120(1)
  0635d3c  std 18, 128(1)
  0635d40  std 19, 136(1)
  0635d44  std 23, 168(1)
  0635d48  std 24, 176(1)
  0635d4c  std 25, 184(1)
  0635d50  std 26, 192(1)
  0635d54  std 28, 208(1)
  0635d58  lwz 30, -29412(2)
  0635d5c  mr 29, 7
  0635d60  mr 27, 5
  0635d64  mr 20, 3
  0635d68  mr 21, 4
  0635d6c  mr 22, 6
  0635d70  mr 31, 7
  0635d74  stw 12, 248(1)
  0635d78  mflr 0
  0635d7c  std 0, 256(1)
  0635d80  bt 30, 0x635fcc
  0635d84  lwz 5, 16(5)
  0635d88  rlwinm 0, 5, 27, 3, 31
  0635d8c  rotlwi 0, 0, 5
  0635d90  cmpwi 7, 0, 0
  0635d94  bf 30, 0x635e20
  0635d98  cmpwi 4, 7, 0
  0635d9c  bt 18, 0x635fe8
  0635da0  lwz 0, 400(7)
  0635da4  clrldi 26, 7, 32
  0635da8  cmpwi 7, 0, 0
  0635dac  bt 30, 0x635f80
  0635db0  mr 3, 26
  0635db4  li 28, 0
  0635db8  bl 0x63a208
  0635dbc  nop
  0635dc0  cmpwi 7, 3, 0
  0635dc4  bt 30, 0x635e40
  0635dc8  ld 0, 256(1)
  0635dcc  extsw 3, 28
  0635dd0  lwz 12, 248(1)
  0635dd4  ld 17, 120(1)
  0635dd8  mtlr 0
  0635ddc  ld 18, 128(1)
  0635de0  mtocrf 8, 12
  0635de4  ld 19, 136(1)
  0635de8  ld 20, 144(1)
  0635dec  ld 21, 152(1)
  0635df0  ld 22, 160(1)
  0635df4  ld 23, 168(1)
  0635df8  ld 24, 176(1)
  0635dfc  ld 25, 184(1)
  0635e00  ld 26, 192(1)
  0635e04  ld 27, 200(1)
  0635e08  ld 28, 208(1)
  0635e0c  ld 29, 216(1)
  0635e10  ld 30, 224(1)
  0635e14  ld 31, 232(1)
  0635e18  addi 1, 1, 240
  0635e1c  blr
  0635e20  clrldi 6, 5, 32
  0635e24  lwz 4, -32724(30)
  0635e28  lwz 3, -32476(30)
  0635e2c  li 5, 2027
  0635e30  li 28, 0
  0635e34  bl 0x61948c
  0635e38  nop
  0635e3c  b 0x635dc8
  0635e40  bl 0x633e34
  0635e44  lbz 18, 22(29)
  0635e48  lbz 19, 21(29)
  0635e4c  clrldi 24, 27, 32
  0635e50  mr 3, 24
  0635e54  bl 0x632a38
  0635e58  cmpwi 7, 3, 0
  0635e5c  mr 25, 3
  0635e60  mr 29, 3
  0635e64  bt 30, 0x635f74
  0635e68  lwz 28, 1704(3)
  0635e6c  li 17, 1
  0635e70  li 0, 0
  0635e74  clrldi 23, 3, 32
  0635e78  stb 0, 1413(28)
  0635e7c  stb 17, 581(28)
  0635e80  stw 3, 1404(28)
  0635e84  bt 18, 0x635f9c
  0635e88  clrldi 26, 31, 32
  0635e8c  mr 3, 28
  0635e90  mr 4, 26
  0635e94  bl 0x631358
  0635e98  addi 4, 27, 212
  0635e9c  mr 3, 28
  0635ea0  clrldi 4, 4, 32
  0635ea4  bl 0x61c628
  0635ea8  nop
  0635eac  extsw 5, 22
  0635eb0  mr 4, 24
  0635eb4  mr 3, 23
  0635eb8  bl 0x633254
  0635ebc  addi 10, 29, 1720
  0635ec0  mr 3, 23
  0635ec4  clrldi 31, 10, 32
  0635ec8  lbz 9, 6081(10)
  0635ecc  rlwinm 11, 9, 2, 22, 29
  0635ed0  addi 9, 9, 1
  0635ed4  addi 11, 11, 5904
  0635ed8  stb 9, 6081(10)
  0635edc  extsw 11, 11
  0635ee0  stwx 25, 31, 11
  0635ee4  bl 0x632ccc
  0635ee8  clrldi 29, 3, 32
  0635eec  mr 3, 31
  0635ef0  mr 4, 29
  0635ef4  bl 0x631314
  0635ef8  mr 3, 28
  0635efc  clrldi 4, 20, 32
  0635f00  clrldi 5, 21, 32
  0635f04  mr 6, 26
  0635f08  mr 7, 29
  0635f0c  li 8, 1
  0635f10  bl 0x633628
  0635f14  cmpwi 7, 3, 0
  0635f18  bf 30, 0x635f5c
  0635f1c  mr 4, 24
  0635f20  mr 3, 28
  0635f24  stb 19, 1414(28)
  0635f28  stb 18, 1415(28)
  0635f2c  bl 0x632e2c
  0635f30  mullw 0, 19, 18
  0635f34  cmpwi 7, 0, 1
  0635f38  bf 29, 0x635fa4
  0635f3c  mr 4, 23
  0635f40  extsw 5, 19
  0635f44  extsw 6, 18
  0635f48  mr 3, 31
  0635f4c  li 7, 1
  0635f50  bl 0x6332dc
  0635f54  cmpwi 7, 3, 0
  0635f58  bt 30, 0x635fa4
  0635f5c  mr 3, 28
  0635f60  li 4, 1
  0635f64  li 5, 1
  0635f68  li 6, 0
  0635f6c  bl 0x61b86c
  0635f70  nop
  0635f74  li 28, 0
  0635f78  bl 0x633da4
  0635f7c  b 0x635dc8
  0635f80  lwz 4, -32724(30)
  0635f84  li 5, 2036
  0635f88  lwz 3, -32472(30)
  0635f8c  li 28, 0
  0635f90  bl 0x61948c
  0635f94  nop
  0635f98  b 0x635dc8
  0635f9c  clrldi 26, 31, 32
  0635fa0  b 0x635e98
  0635fa4  mr 3, 28
  0635fa8  bl 0x633008
  0635fac  bt 18, 0x635fbc
  0635fb0  mr 3, 31
  0635fb4  bl 0x63a134
  0635fb8  nop
  0635fbc  stb 17, 1417(28)
  0635fc0  lwz 28, 0(28)
  0635fc4  bl 0x633da4
  0635fc8  b 0x635dc8
  0635fcc  lwz 4, -32724(30)
  0635fd0  li 5, 2018
  0635fd4  lwz 3, -32480(30)
  0635fd8  li 28, 0
  0635fdc  bl 0x61948c
  0635fe0  nop
  0635fe4  b 0x635dc8
  0635fe8  li 19, 1
  0635fec  li 18, 1
  0635ff0  bl 0x633e34
  0635ff4  b 0x635e4c

FUN_00635ff8:   # 0x635ff8, 0x1ec bytes
  0635ff8  mfcr 12
  0635ffc  cmpwi 4, 8, 0
  0636000  stdu 1, -192(1)
  0636004  std 23, 120(1)
  0636008  std 24, 128(1)
  063600c  std 25, 136(1)
  0636010  std 26, 144(1)
  0636014  std 27, 152(1)
  0636018  std 28, 160(1)
  063601c  std 29, 168(1)
  0636020  std 30, 176(1)
  0636024  std 22, 112(1)
  0636028  std 31, 184(1)
  063602c  lwz 30, -29412(2)
  0636030  mr 27, 8
  0636034  mr 29, 3
  0636038  mr 28, 8
  063603c  mr 23, 4
  0636040  mr 25, 5
  0636044  mr 24, 6
  0636048  mr 26, 7
  063604c  stw 12, 200(1)
  0636050  mflr 0
  0636054  std 0, 208(1)
  0636058  bt 18, 0x636084
  063605c  lwz 0, 400(8)
  0636060  clrldi 31, 8, 32
  0636064  cmpwi 7, 0, 0
  0636068  bt 30, 0x63619c
  063606c  mr 3, 31
  0636070  li 22, 0
  0636074  bl 0x63a208
  0636078  nop
  063607c  cmpwi 7, 3, 0
  0636080  bf 30, 0x6360f4
  0636084  bl 0x633e34
  0636088  clrldi 3, 29, 32
  063608c  bl 0x633cfc
  0636090  cmpwi 7, 3, 0
  0636094  mr 9, 3
  0636098  bt 30, 0x636138
  063609c  clrldi 29, 3, 32
  06360a0  lwz 22, 0(9)
  06360a4  mr 3, 29
  06360a8  bl 0x631058
  06360ac  cmpwi 7, 3, 0
  06360b0  bt 30, 0x63613c
  06360b4  bt 18, 0x6361dc
  06360b8  clrldi 31, 28, 32
  06360bc  mr 3, 29
  06360c0  mr 4, 31
  06360c4  bl 0x631358
  06360c8  cmpwi 7, 3, 0
  06360cc  bt 30, 0x6361b8
  06360d0  mr 3, 29
  06360d4  clrldi 4, 23, 32
  06360d8  clrldi 5, 25, 32
  06360dc  clrldi 6, 24, 32
  06360e0  mr 7, 31
  06360e4  bl 0x633824
  06360e8  cmpwi 7, 3, 0
  06360ec  bt 28, 0x6361d0
  06360f0  bl 0x633da4
  06360f4  ld 0, 208(1)
  06360f8  clrldi 3, 22, 32
  06360fc  lwz 12, 200(1)
  0636100  ld 22, 112(1)
  0636104  mtlr 0
  0636108  ld 23, 120(1)
  063610c  mtocrf 8, 12
  0636110  ld 24, 128(1)
  0636114  ld 25, 136(1)
  0636118  ld 26, 144(1)
  063611c  ld 27, 152(1)
  0636120  ld 28, 160(1)
  0636124  ld 29, 168(1)
  0636128  ld 30, 176(1)
  063612c  ld 31, 184(1)
  0636130  addi 1, 1, 192
  0636134  blr
  0636138  li 22, 0
  063613c  bl 0x633da4
  0636140  cmpwi 7, 26, 0
  0636144  bt 30, 0x6360f4
  0636148  ld 0, 208(1)
  063614c  clrldi 3, 25, 32
  0636150  lwz 12, 200(1)
  0636154  clrldi 4, 24, 32
  0636158  clrldi 5, 26, 32
  063615c  ld 22, 112(1)
  0636160  clrldi 7, 28, 32
  0636164  ld 23, 120(1)
  0636168  ld 24, 128(1)
  063616c  li 6, -1
  0636170  ld 25, 136(1)
  0636174  mtlr 0
  0636178  ld 26, 144(1)
  063617c  mtocrf 8, 12
  0636180  ld 27, 152(1)
  0636184  ld 28, 160(1)
  0636188  ld 29, 168(1)
  063618c  ld 30, 176(1)
  0636190  ld 31, 184(1)
  0636194  addi 1, 1, 192
  0636198  b 0x635d10
  063619c  lwz 4, -32724(30)
  06361a0  li 5, 2638
  06361a4  lwz 3, -32472(30)
  06361a8  li 22, 0
  06361ac  bl 0x61948c
  06361b0  nop
  06361b4  b 0x6360f4
  06361b8  lwz 4, -32724(30)
  06361bc  li 5, 2662
  06361c0  lwz 6, 400(27)
  06361c4  lwz 3, -32468(30)
  06361c8  bl 0x61948c
  06361cc  nop
  06361d0  li 22, 0
  06361d4  bl 0x633da4
  06361d8  b 0x6360f4
  06361dc  clrldi 31, 28, 32
  06361e0  b 0x6360d0

FUN_006361e4:   # 0x6361e4, 0xc0 bytes
  06361e4  stdu 1, -160(1)
  06361e8  mflr 0
  06361ec  std 27, 120(1)
  06361f0  std 30, 144(1)
  06361f4  mr 27, 3
  06361f8  lwz 30, -29412(2)
  06361fc  mr 3, 5
  0636200  std 28, 128(1)
  0636204  std 29, 136(1)
  0636208  std 31, 152(1)
  063620c  std 0, 176(1)
  0636210  mr 31, 4
  0636214  mr 29, 6
  0636218  mr 28, 7
  063621c  bl 0x631074
  0636220  mr 0, 3
  0636224  clrldi 4, 31, 32
  0636228  cmpwi 7, 0, 0
  063622c  clrldi 3, 27, 32
  0636230  clrldi 6, 29, 32
  0636234  clrldi 7, 28, 32
  0636238  clrldi 8, 0, 32
  063623c  li 5, 0
  0636240  bt 30, 0x636268
  0636244  ld 0, 176(1)
  0636248  ld 27, 120(1)
  063624c  ld 28, 128(1)
  0636250  mtlr 0
  0636254  ld 29, 136(1)
  0636258  ld 30, 144(1)
  063625c  ld 31, 152(1)
  0636260  addi 1, 1, 160
  0636264  b 0x635ff8
  0636268  lwz 3, -32464(30)
  063626c  li 5, 2805
  0636270  lwz 4, -32724(30)
  0636274  bl 0x61948c
  0636278  nop
  063627c  ld 0, 176(1)
  0636280  ld 27, 120(1)
  0636284  li 3, 0
  0636288  ld 28, 128(1)
  063628c  ld 29, 136(1)
  0636290  mtlr 0
  0636294  ld 30, 144(1)
  0636298  ld 31, 152(1)
  063629c  addi 1, 1, 160
  06362a0  blr

FUN_006362a4:   # 0x6362a4, 0x88 bytes
  06362a4  mr 9, 5
  06362a8  mflr 0
  06362ac  stdu 1, -128(1)
  06362b0  cmpwi 7, 9, 0
  06362b4  std 30, 112(1)
  06362b8  std 0, 144(1)
  06362bc  lwz 30, -29412(2)
  06362c0  li 5, 2747
  06362c4  bt 30, 0x636304
  06362c8  lwz 0, 0(9)
  06362cc  clrldi 7, 6, 32
  06362d0  clrldi 3, 3, 32
  06362d4  cmpwi 7, 0, 0
  06362d8  clrldi 4, 4, 32
  06362dc  li 6, 0
  06362e0  li 8, 0
  06362e4  clrldi 0, 9, 32
  06362e8  bt 30, 0x636304
  06362ec  mr 5, 0
  06362f0  ld 0, 144(1)
  06362f4  ld 30, 112(1)
  06362f8  addi 1, 1, 128
  06362fc  mtlr 0
  0636300  b 0x635ff8
  0636304  lwz 3, -32592(30)
  0636308  lwz 4, -32724(30)
  063630c  bl 0x61948c
  0636310  nop
  0636314  ld 0, 144(1)
  0636318  ld 30, 112(1)
  063631c  li 3, 0
  0636320  mtlr 0
  0636324  addi 1, 1, 128
  0636328  blr

FUN_0063632c:   # 0x63632c, 0xb8 bytes
  063632c  stdu 1, -160(1)
  0636330  mflr 0
  0636334  std 30, 144(1)
  0636338  lwz 30, -29412(2)
  063633c  std 27, 120(1)
  0636340  std 28, 128(1)
  0636344  std 29, 136(1)
  0636348  std 31, 152(1)
  063634c  std 0, 176(1)
  0636350  mr 28, 4
  0636354  mr 31, 5
  0636358  mr 29, 6
  063635c  mr 27, 3
  0636360  bl 0x631074
  0636364  cmpwi 7, 3, 0
  0636368  clrldi 7, 3, 32
  063636c  clrldi 4, 28, 32
  0636370  clrldi 5, 31, 32
  0636374  extsw 6, 29
  0636378  li 3, 0
  063637c  bt 30, 0x6363a4
  0636380  ld 0, 176(1)
  0636384  ld 27, 120(1)
  0636388  ld 28, 128(1)
  063638c  mtlr 0
  0636390  ld 29, 136(1)
  0636394  ld 30, 144(1)
  0636398  ld 31, 152(1)
  063639c  addi 1, 1, 160
  06363a0  b 0x635d10
  06363a4  lwz 3, -32460(30)
  06363a8  mr 6, 27
  06363ac  lwz 4, -32724(30)
  06363b0  li 5, 2258
  06363b4  bl 0x61948c
  06363b8  nop
  06363bc  ld 0, 176(1)
  06363c0  ld 27, 120(1)
  06363c4  li 3, 0
  06363c8  ld 28, 128(1)
  06363cc  ld 29, 136(1)
  06363d0  mtlr 0
  06363d4  ld 30, 144(1)
  06363d8  ld 31, 152(1)
  06363dc  addi 1, 1, 160
  06363e0  blr

FUN_006363e4:   # 0x6363e4, 0xbc bytes
  06363e4  cmpwi 7, 3, 0
  06363e8  mflr 0
  06363ec  stdu 1, -144(1)
  06363f0  std 28, 112(1)
  06363f4  std 29, 120(1)
  06363f8  std 30, 128(1)
  06363fc  std 31, 136(1)
  0636400  mr 28, 5
  0636404  lwz 30, -29412(2)
  0636408  std 0, 160(1)
  063640c  mr 29, 4
  0636410  li 5, 2191
  0636414  clrldi 31, 3, 32
  0636418  bt 30, 0x63646c
  063641c  lwz 0, 0(3)
  0636420  cmpwi 7, 0, 0
  0636424  bt 30, 0x63646c
  0636428  lwz 3, 4(3)
  063642c  bl 0x631ed0
  0636430  clrldi 5, 29, 32
  0636434  cmpwi 7, 3, 0
  0636438  extsw 6, 28
  063643c  mr 3, 31
  0636440  li 4, 0
  0636444  li 7, 0
  0636448  bt 28, 0x63647c
  063644c  ld 0, 160(1)
  0636450  ld 28, 112(1)
  0636454  ld 29, 120(1)
  0636458  mtlr 0
  063645c  ld 30, 128(1)
  0636460  ld 31, 136(1)
  0636464  addi 1, 1, 144
  0636468  b 0x635d10
  063646c  lwz 4, -32724(30)
  0636470  lwz 3, -32456(30)
  0636474  bl 0x61948c
  0636478  nop
  063647c  ld 0, 160(1)
  0636480  li 3, 0
  0636484  ld 28, 112(1)
  0636488  ld 29, 120(1)
  063648c  mtlr 0
  0636490  ld 30, 128(1)
  0636494  ld 31, 136(1)
  0636498  addi 1, 1, 144
  063649c  blr

FUN_006364a0:   # 0x6364a0, 0x278 bytes
  06364a0  cmpwi 7, 3, 0
  06364a4  mflr 0
  06364a8  stdu 1, -176(1)
  06364ac  std 26, 128(1)
  06364b0  std 27, 136(1)
  06364b4  std 28, 144(1)
  06364b8  std 29, 152(1)
  06364bc  std 30, 160(1)
  06364c0  std 31, 168(1)
  06364c4  std 25, 120(1)
  06364c8  std 0, 192(1)
  06364cc  lwz 30, -29412(2)
  06364d0  mr 29, 3
  06364d4  mr 31, 4
  06364d8  mr 26, 5
  06364dc  mr 28, 6
  06364e0  mr 27, 7
  06364e4  bt 30, 0x63661c
  06364e8  cmpwi 7, 4, 0
  06364ec  bt 30, 0x63661c
  06364f0  cmpwi 7, 5, 0
  06364f4  bt 30, 0x63661c
  06364f8  cmpwi 7, 6, 0
  06364fc  bt 30, 0x63661c
  0636500  cmpwi 7, 7, 0
  0636504  bt 30, 0x63661c
  0636508  lwz 6, 0(4)
  063650c  rlwinm 25, 6, 0, 0, 29
  0636510  cmpwi 7, 25, 0
  0636514  bf 30, 0x6366e0
  0636518  lwz 6, 4(4)
  063651c  cmplwi 7, 6, 4
  0636520  bt 29, 0x636664
  0636524  bl 0x633e34
  0636528  clrldi 3, 29, 32
  063652c  bl 0x633d70
  0636530  cmpwi 7, 3, 0
  0636534  mr 29, 3
  0636538  bt 30, 0x6366b0
  063653c  lwz 3, 1704(3)
  0636540  cmpwi 7, 3, 0
  0636544  bt 30, 0x6366b0
  0636548  clrldi 3, 3, 32
  063654c  bl 0x631058
  0636550  cmpwi 7, 3, 0
  0636554  bt 30, 0x6366b0
  0636558  lwz 3, 7836(29)
  063655c  cmpwi 7, 3, 0
  0636560  bt 28, 0x636700
  0636564  clrldi 3, 28, 32
  0636568  clrldi 4, 27, 32
  063656c  li 5, -1
  0636570  li 25, 0
  0636574  bl 0x6363e4
  0636578  cmpwi 7, 3, 0
  063657c  mr 28, 3
  0636580  bt 30, 0x6365e8
  0636584  clrldi 25, 3, 32
  0636588  mr 3, 25
  063658c  bl 0x63eaac
  0636590  nop
  0636594  stw 28, 7836(29)
  0636598  lwz 0, 0(31)
  063659c  lwz 8, 0(26)
  06365a0  stw 0, 7840(29)
  06365a4  lwz 9, 4(31)
  06365a8  lwz 0, 8(26)
  06365ac  stw 9, 7844(29)
  06365b0  lwz 11, 4(26)
  06365b4  lwz 9, 12(26)
  06365b8  lwz 10, 8(31)
  06365bc  stw 8, 7852(29)
  06365c0  stw 11, 7856(29)
  06365c4  stw 0, 7860(29)
  06365c8  stw 9, 7864(29)
  06365cc  cmpwi 7, 10, 0
  06365d0  lwz 0, 16(26)
  06365d4  stw 10, 7848(29)
  06365d8  stw 0, 7868(29)
  06365dc  bf 30, 0x6365e8
  06365e0  li 0, 1
  06365e4  stw 0, 7848(29)
  06365e8  bl 0x633da4
  06365ec  ld 0, 192(1)
  06365f0  mr 3, 25
  06365f4  ld 26, 128(1)
  06365f8  ld 25, 120(1)
  06365fc  mtlr 0
  0636600  ld 27, 136(1)
  0636604  ld 28, 144(1)
  0636608  ld 29, 152(1)
  063660c  ld 30, 160(1)
  0636610  ld 31, 168(1)
  0636614  addi 1, 1, 176
  0636618  blr
  063661c  lwz 4, -32724(30)
  0636620  li 5, 2479
  0636624  lwz 3, -32592(30)
  0636628  li 25, 0
  063662c  bl 0x61948c
  0636630  nop
  0636634  ld 0, 192(1)
  0636638  mr 3, 25
  063663c  ld 26, 128(1)
  0636640  ld 25, 120(1)
  0636644  mtlr 0
  0636648  ld 27, 136(1)
  063664c  ld 28, 144(1)
  0636650  ld 29, 152(1)
  0636654  ld 30, 160(1)
  0636658  ld 31, 168(1)
  063665c  addi 1, 1, 176
  0636660  blr
  0636664  lwz 3, -32448(30)
  0636668  clrldi 6, 6, 32
  063666c  lwz 4, -32724(30)
  0636670  li 5, 2497
  0636674  li 25, 0
  0636678  bl 0x61948c
  063667c  nop
  0636680  ld 0, 192(1)
  0636684  ld 26, 128(1)
  0636688  mr 3, 25
  063668c  ld 27, 136(1)
  0636690  ld 25, 120(1)
  0636694  mtlr 0
  0636698  ld 28, 144(1)
  063669c  ld 29, 152(1)
  06366a0  ld 30, 160(1)
  06366a4  ld 31, 168(1)
  06366a8  addi 1, 1, 176
  06366ac  blr
  06366b0  lwz 0, 0(31)
  06366b4  li 25, 0
  06366b8  clrlwi 0, 0, 31
  06366bc  cmpwi 7, 0, 0
  06366c0  bt 30, 0x6365e8
  06366c4  clrldi 3, 28, 32
  06366c8  clrldi 4, 27, 32
  06366cc  li 5, -1
  06366d0  bl 0x6363e4
  06366d4  clrldi 25, 3, 32
  06366d8  bl 0x633da4
  06366dc  b 0x6365ec
  06366e0  lwz 4, -32724(30)
  06366e4  clrldi 6, 6, 32
  06366e8  lwz 3, -32452(30)
  06366ec  li 5, 2489
  06366f0  li 25, 0
  06366f4  bl 0x61948c
  06366f8  nop
  06366fc  b 0x636634
  0636700  clrldi 3, 3, 32
  0636704  li 4, 1
  0636708  bl 0x6084f4
  063670c  nop
  0636710  stw 25, 7836(29)
  0636714  b 0x636564

FUN_00636718:   # 0x636718, 0xc4 bytes
  0636718  stdu 1, -144(1)
  063671c  mflr 0
  0636720  std 30, 128(1)
  0636724  lwz 30, -29412(2)
  0636728  li 3, -1
  063672c  std 29, 120(1)
  0636730  std 0, 160(1)
  0636734  std 31, 136(1)
  0636738  li 31, 0
  063673c  lwz 29, -32744(30)
  0636740  lwz 0, 0(29)
  0636744  cmpwi 7, 0, 0
  0636748  bt 30, 0x6367bc
  063674c  bl 0x633e34
  0636750  lwz 9, -32444(30)
  0636754  stw 31, 0(9)
  0636758  bl 0x633da4
  063675c  bl 0x632674
  0636760  lwz 3, -32440(30)
  0636764  bl 0x619fd0
  0636768  nop
  063676c  bl 0x63b9e8
  0636770  nop
  0636774  bl 0x6310a0
  0636778  lwz 5, -32764(30)
  063677c  lwz 10, -32428(30)
  0636780  li 3, 0
  0636784  lwz 9, -32752(30)
  0636788  lwz 11, -32756(30)
  063678c  lwz 8, -32436(30)
  0636790  lwz 7, -32624(30)
  0636794  lwz 6, -32432(30)
  0636798  stw 31, 0(10)
  063679c  stw 31, 0(9)
  06367a0  stw 31, 0(11)
  06367a4  stw 31, 0(29)
  06367a8  stw 31, 160(5)
  06367ac  stw 31, 0(8)
  06367b0  stw 31, 0(7)
  06367b4  stw 31, 0(6)
  06367b8  stw 31, 156(5)
  06367bc  ld 0, 160(1)
  06367c0  extsw 3, 3
  06367c4  ld 29, 120(1)
  06367c8  ld 30, 128(1)
  06367cc  mtlr 0
  06367d0  ld 31, 136(1)
  06367d4  addi 1, 1, 144
  06367d8  blr

FUN_006367dc:   # 0x6367dc, 0x5a4 bytes
  06367dc  cmpwi 7, 3, 0
  06367e0  mflr 0
  06367e4  stdu 1, -256(1)
  06367e8  std 26, 208(1)
  06367ec  std 28, 224(1)
  06367f0  std 29, 232(1)
  06367f4  std 30, 240(1)
  06367f8  std 31, 248(1)
  06367fc  std 17, 136(1)
  0636800  std 18, 144(1)
  0636804  std 19, 152(1)
  0636808  std 20, 160(1)
  063680c  std 21, 168(1)
  0636810  std 22, 176(1)
  0636814  std 23, 184(1)
  0636818  std 24, 192(1)
  063681c  std 25, 200(1)
  0636820  std 27, 216(1)
  0636824  std 0, 272(1)
  0636828  lwz 30, -29412(2)
  063682c  mr 31, 3
  0636830  mr 29, 5
  0636834  mr 28, 4
  0636838  mr 26, 5
  063683c  bt- 30, 0x636848
  0636840  cmpwi 7, 4, 0
  0636844  bf 30, 0x6368b0
  0636848  lwz 3, -32592(30)
  063684c  li 5, 1075
  0636850  lwz 4, -32724(30)
  0636854  bl 0x61948c
  0636858  nop
  063685c  li 3, -7
  0636860  ld 0, 272(1)
  0636864  extsw 3, 3
  0636868  ld 17, 136(1)
  063686c  ld 18, 144(1)
  0636870  mtlr 0
  0636874  ld 19, 152(1)
  0636878  ld 20, 160(1)
  063687c  ld 21, 168(1)
  0636880  ld 22, 176(1)
  0636884  ld 23, 184(1)
  0636888  ld 24, 192(1)
  063688c  ld 25, 200(1)
  0636890  ld 26, 208(1)
  0636894  ld 27, 216(1)
  0636898  ld 28, 224(1)
  063689c  ld 29, 232(1)
  06368a0  ld 30, 240(1)
  06368a4  ld 31, 248(1)
  06368a8  addi 1, 1, 256
  06368ac  blr
  06368b0  cmpwi 7, 5, 0
  06368b4  bt 30, 0x636848
  06368b8  li 6, 51
  06368bc  lwz 3, -32424(30)
  06368c0  li 4, 7
  06368c4  li 5, 0
  06368c8  bl 0x61948c
  06368cc  nop
  06368d0  lwz 3, -32420(30)
  06368d4  lwz 4, -32416(30)
  06368d8  lwz 5, -32412(30)
  06368dc  bl 0x61948c
  06368e0  nop
  06368e4  lwz 25, -32764(30)
  06368e8  li 4, 0
  06368ec  li 5, 576
  06368f0  mr 3, 25
  06368f4  bl 0x5d0140
  06368f8  nop
  06368fc  li 0, 1
  0636900  lwz 7, -32408(30)
  0636904  stb 0, 569(25)
  0636908  lwz 9, 0(29)
  063690c  addi 3, 25, 188
  0636910  lwz 0, 4(29)
  0636914  li 4, 64
  0636918  lwz 11, 8(29)
  063691c  lwz 10, 12(29)
  0636920  stw 11, 124(25)
  0636924  stw 9, 116(25)
  0636928  stw 0, 120(25)
  063692c  stw 10, 128(25)
  0636930  lwz 0, 16(29)
  0636934  addi 11, 1, 112
  0636938  lwz 9, 20(29)
  063693c  lwz 10, 24(29)
  0636940  clrldi 11, 11, 32
  0636944  lwz 8, 28(29)
  0636948  stw 0, 132(25)
  063694c  stw 9, 136(25)
  0636950  stw 10, 140(25)
  0636954  stw 8, 144(25)
  0636958  lwz 0, 32(29)
  063695c  lwz 9, 36(29)
  0636960  stw 0, 148(25)
  0636964  li 0, 1
  0636968  stw 9, 152(25)
  063696c  stw 0, 112(1)
  0636970  lbz 9, 3(11)
  0636974  stb 9, 0(7)
  0636978  bl 0x637248
  063697c  nop
  0636980  lwz 24, -32744(30)
  0636984  li 3, -5
  0636988  lwz 0, 0(24)
  063698c  cmpwi 7, 0, 0
  0636990  bf 30, 0x636860
  0636994  lwz 0, 0(29)
  0636998  li 3, -7
  063699c  cmpwi 7, 0, 40
  06369a0  bf+ 30, 0x636860
  06369a4  lwz 0, 28(29)
  06369a8  cmpwi 7, 0, 1
  06369ac  bf 30, 0x6369b8
  06369b0  li 3, -7
  06369b4  b 0x636860
  06369b8  cmplwi 7, 0, 16
  06369bc  bt 29, 0x6369b0
  06369c0  lwz 6, 36(29)
  06369c4  cmplw 7, 31, 6
  06369c8  add 23, 31, 6
  06369cc  bf 28, 0x6369ec
  06369d0  clrldi 6, 6, 32
  06369d4  lwz 3, -32404(30)
  06369d8  lwz 4, -32724(30)
  06369dc  li 5, 676
  06369e0  slwi 23, 31, 1
  06369e4  bl 0x61948c
  06369e8  nop
  06369ec  lwz 0, 20(29)
  06369f0  mr 22, 23
  06369f4  rlwinm 0, 0, 0, 28, 28
  06369f8  cmpwi 7, 0, 0
  06369fc  bf 30, 0x636a10
  0636a00  slwi 9, 23, 1
  0636a04  add 9, 9, 23
  0636a08  addi 9, 9, 3
  0636a0c  srwi 22, 9, 1
  0636a10  cmplwi 7, 22, 255
  0636a14  bt- 29, 0x636d3c
  0636a18  lwz 0, 28(29)
  0636a1c  li 9, 8
  0636a20  cmplwi 7, 0, 1
  0636a24  bf 29, 0x636a2c
  0636a28  mr 9, 0
  0636a2c  stb 9, 568(25)
  0636a30  slwi 9, 31, 4
  0636a34  lwz 0, 20(29)
  0636a38  addi 10, 28, 127
  0636a3c  addi 9, 9, 127
  0636a40  rlwinm 0, 0, 0, 29, 29
  0636a44  rlwinm 21, 9, 0, 0, 24
  0636a48  mulli 9, 23, 8024
  0636a4c  cmpwi 7, 0, 0
  0636a50  rlwinm 19, 10, 0, 0, 24
  0636a54  addi 9, 9, 127
  0636a58  mullw 18, 31, 19
  0636a5c  rlwinm 27, 9, 0, 0, 24
  0636a60  mulli 11, 22, 1420
  0636a64  addi 11, 11, 127
  0636a68  rlwinm 20, 11, 0, 0, 24
  0636a6c  bt 30, 0x636d68
  0636a70  li 0, 408
  0636a74  stw 0, 176(25)
  0636a78  lwz 0, 24(29)
  0636a7c  add 9, 21, 20
  0636a80  lwz 10, 176(25)
  0636a84  add 11, 27, 18
  0636a88  stw 0, 180(25)
  0636a8c  lwz 8, 12(29)
  0636a90  mullw 0, 0, 10
  0636a94  cmpwi 7, 8, 0
  0636a98  add 9, 9, 0
  0636a9c  add 28, 11, 9
  0636aa0  bt 30, 0x636b00
  0636aa4  cmplwi 7, 8, 32
  0636aa8  mr 9, 8
  0636aac  slwi 0, 23, 3
  0636ab0  bf 29, 0x636ab8
  0636ab4  li 9, 32
  0636ab8  cmplw 7, 0, 9
  0636abc  mr 10, 0
  0636ac0  bf 29, 0x636ac8
  0636ac4  mr 10, 9
  0636ac8  lwz 9, 16(29)
  0636acc  lwz 11, -32432(30)
  0636ad0  addi 9, 9, 127
  0636ad4  lwz 8, -32624(30)
  0636ad8  rlwinm 9, 9, 0, 0, 24
  0636adc  cmpwi 7, 9, 0
  0636ae0  stw 10, 0(11)
  0636ae4  stw 9, 0(8)
  0636ae8  bf 30, 0x636af4
  0636aec  li 0, 2048
  0636af0  stw 0, 0(8)
  0636af4  lwz 0, 0(8)
  0636af8  mullw 0, 10, 0
  0636afc  add 28, 28, 0
  0636b00  clrldi 3, 28, 32
  0636b04  li 4, 128
  0636b08  li 5, 512
  0636b0c  bl 0x630d9c
  0636b10  cmpwi 7, 3, 0
  0636b14  stw 3, 0(25)
  0636b18  bt 30, 0x636d54
  0636b1c  add 0, 3, 27
  0636b20  lwz 17, -32756(30)
  0636b24  lwz 11, 180(25)
  0636b28  add 9, 0, 21
  0636b2c  cmpwi 7, 11, 0
  0636b30  add 27, 9, 20
  0636b34  stw 28, 4(25)
  0636b38  stw 3, 0(17)
  0636b3c  stw 0, 168(25)
  0636b40  stw 9, 156(25)
  0636b44  add 29, 27, 18
  0636b48  bt 30, 0x636b70
  0636b4c  lwz 0, 176(25)
  0636b50  clrldi 3, 29, 32
  0636b54  li 4, 0
  0636b58  stw 29, 184(25)
  0636b5c  mullw 0, 11, 0
  0636b60  clrldi 5, 0, 32
  0636b64  add 29, 29, 0
  0636b68  bl 0x5d0140
  0636b6c  nop
  0636b70  lwz 9, -32432(30)
  0636b74  lwz 0, 0(9)
  0636b78  cmpwi 7, 0, 0
  0636b7c  bt 30, 0x636b88
  0636b80  lwz 9, -32428(30)
  0636b84  stw 29, 0(9)
  0636b88  clrldi 9, 31, 32
  0636b8c  lwz 10, 168(25)
  0636b90  mr 11, 27
  0636b94  li 0, 0
  0636b98  mtctr 9
  0636b9c  clrldi 9, 10, 32
  0636ba0  addi 10, 10, 16
  0636ba4  stw 11, 8(9)
  0636ba8  stw 0, 0(9)
  0636bac  stw 0, 4(9)
  0636bb0  stw 19, 12(9)
  0636bb4  add 11, 11, 19
  0636bb8  bdnz 0x636b9c
  0636bbc  rlwinm 3, 19, 0, 0, 24
  0636bc0  lbz 4, 568(25)
  0636bc4  bl 0x636d80
  0636bc8  nop
  0636bcc  cmpwi 7, 23, 0
  0636bd0  stw 3, 164(25)
  0636bd4  bt 30, 0x636c28
  0636bd8  lis 21, -24235
  0636bdc  li 27, 0
  0636be0  ori 21, 21, 39615
  0636be4  li 28, 0
  0636be8  lwz 29, 0(17)
  0636bec  li 4, 0
  0636bf0  li 5, 8024
  0636bf4  add 29, 28, 29
  0636bf8  addi 28, 28, 8024
  0636bfc  clrldi 29, 29, 32
  0636c00  mr 3, 29
  0636c04  bl 0x5d0140
  0636c08  nop
  0636c0c  mr 3, 29
  0636c10  stw 27, 4(29)
  0636c14  addi 27, 27, 1
  0636c18  stw 21, 0(29)
  0636c1c  bl 0x6330c8
  0636c20  cmpw 7, 23, 27
  0636c24  bf 30, 0x636be8
  0636c28  cmpwi 7, 22, 0
  0636c2c  bt 30, 0x636c6c
  0636c30  li 28, 0
  0636c34  li 27, 0
  0636c38  lwz 29, 156(25)
  0636c3c  li 4, 0
  0636c40  li 5, 1420
  0636c44  add 29, 27, 29
  0636c48  addi 27, 27, 1420
  0636c4c  clrldi 29, 29, 32
  0636c50  mr 3, 29
  0636c54  bl 0x5d0140
  0636c58  nop
  0636c5c  stw 28, 564(29)
  0636c60  addi 28, 28, 1
  0636c64  cmpw 7, 22, 28
  0636c68  bf 30, 0x636c38
  0636c6c  lwz 9, -32748(30)
  0636c70  li 3, 0
  0636c74  lwz 0, -32356(30)
  0636c78  lwz 11, -32396(30)
  0636c7c  lwz 10, -32392(30)
  0636c80  lwz 8, -32388(30)
  0636c84  lwz 7, -32384(30)
  0636c88  lwz 6, -32380(30)
  0636c8c  lwz 5, -32376(30)
  0636c90  lwz 4, -32372(30)
  0636c94  stw 0, 44(9)
  0636c98  lwz 29, -32368(30)
  0636c9c  li 0, 0
  0636ca0  lwz 28, -32364(30)
  0636ca4  lwz 27, -32360(30)
  0636ca8  stw 0, 4(9)
  0636cac  stw 11, 0(9)
  0636cb0  stw 10, 8(9)
  0636cb4  stw 8, 12(9)
  0636cb8  stw 7, 16(9)
  0636cbc  stw 6, 20(9)
  0636cc0  stw 5, 24(9)
  0636cc4  stw 4, 28(9)
  0636cc8  stw 29, 32(9)
  0636ccc  stw 28, 36(9)
  0636cd0  stw 27, 40(9)
  0636cd4  stw 23, 0(24)
  0636cd8  stw 31, 172(25)
  0636cdc  stw 22, 160(25)
  0636ce0  bl 0x6343bc
  0636ce4  clrldi 3, 26, 32
  0636ce8  bl 0x63a14c
  0636cec  nop
  0636cf0  cmpwi 7, 3, 0
  0636cf4  bf 30, 0x636d74
  0636cf8  lwz 11, -32440(30)
  0636cfc  li 9, 1420
  0636d00  lwz 10, 156(25)
  0636d04  lwz 0, 160(25)
  0636d08  mr 3, 11
  0636d0c  stw 0, 8(11)
  0636d10  stw 9, 12(11)
  0636d14  stw 10, 16(11)
  0636d18  bl 0x61a0f0
  0636d1c  nop
  0636d20  bl 0x633e34
  0636d24  lwz 9, -32444(30)
  0636d28  lwz 0, -32352(30)
  0636d2c  stw 0, 0(9)
  0636d30  bl 0x633da4
  0636d34  li 3, 0
  0636d38  b 0x636860
  0636d3c  lwz 4, -32724(30)
  0636d40  clrldi 6, 22, 32
  0636d44  lwz 3, -32400(30)
  0636d48  li 5, 701
  0636d4c  bl 0x61948c
  0636d50  nop
  0636d54  li 0, 0
  0636d58  li 3, -3
  0636d5c  stw 0, 160(25)
  0636d60  stw 0, 0(24)
  0636d64  b 0x636860
  0636d68  li 0, 664
  0636d6c  stw 0, 176(25)
  0636d70  b 0x636a78
  0636d74  bl 0x6310a0
  0636d78  li 3, -4
  0636d7c  b 0x636860

FUN_00636d80:   # 0x636d80, 0xc bytes
  0636d80  divwu 4, 3, 4
  0636d84  rlwinm 3, 4, 0, 0, 24
  0636d88  blr

FUN_00636d8c:   # 0x636d8c, 0x20 bytes
  0636d8c  slwi 9, 4, 4
  0636d90  slwi 4, 4, 2
  0636d94  sub 9, 9, 4
  0636d98  addi 9, 9, 16
  0636d9c  extsw 9, 9
  0636da0  add 3, 3, 9
  0636da4  lwz 3, 4(3)
  0636da8  blr

FUN_00636dac:   # 0x636dac, 0x8 bytes
  0636dac  lwz 3, 1692(3)
  0636db0  blr

FUN_00636db4:   # 0x636db4, 0x1c bytes
  0636db4  slwi 4, 4, 2
  0636db8  addi 4, 4, 208
  0636dbc  extsw 4, 4
  0636dc0  add 3, 3, 4
  0636dc4  lwz 3, 4(3)
  0636dc8  extsw 3, 3
  0636dcc  blr

FUN_00636dd0:   # 0x636dd0, 0x18 bytes
  0636dd0  slwi 4, 4, 2
  0636dd4  addi 4, 4, 208
  0636dd8  extsw 4, 4
  0636ddc  add 3, 3, 4
  0636de0  stw 5, 4(3)
  0636de4  blr

FUN_00636de8:   # 0x636de8, 0x18 bytes
  0636de8  mulli 4, 4, 88
  0636dec  addi 4, 4, 336
  0636df0  extsw 4, 4
  0636df4  add 3, 3, 4
  0636df8  lwz 3, 16(3)
  0636dfc  blr

FUN_00636e00:   # 0x636e00, 0x18 bytes
  0636e00  mulli 4, 4, 88
  0636e04  addi 4, 4, 336
  0636e08  extsw 4, 4
  0636e0c  add 3, 3, 4
  0636e10  stw 5, 16(3)
  0636e14  blr

FUN_00636e18:   # 0x636e18, 0x18 bytes
  0636e18  mulli 4, 4, 88
  0636e1c  addi 4, 4, 336
  0636e20  extsw 4, 4
  0636e24  add 3, 3, 4
  0636e28  lwz 3, 12(3)
  0636e2c  blr

FUN_00636e30:   # 0x636e30, 0x18 bytes
  0636e30  mulli 4, 4, 88
  0636e34  addi 4, 4, 336
  0636e38  extsw 4, 4
  0636e3c  add 3, 3, 4
  0636e40  stw 5, 12(3)
  0636e44  blr

FUN_00636e48:   # 0x636e48, 0x18 bytes
  0636e48  mulli 4, 4, 88
  0636e4c  addi 4, 4, 336
  0636e50  extsw 4, 4
  0636e54  add 3, 3, 4
  0636e58  lwz 3, 20(3)
  0636e5c  blr

FUN_00636e60:   # 0x636e60, 0x18 bytes
  0636e60  mulli 4, 4, 88
  0636e64  addi 4, 4, 336
  0636e68  extsw 4, 4
  0636e6c  add 3, 3, 4
  0636e70  stw 5, 20(3)
  0636e74  blr

FUN_00636e78:   # 0x636e78, 0x14 bytes
  0636e78  mulli 4, 4, 88
  0636e7c  add 4, 4, 3
  0636e80  addi 4, 4, 280
  0636e84  clrldi 3, 4, 32
  0636e88  blr

FUN_00636e8c:   # 0x636e8c, 0x18 bytes
  0636e8c  mulli 4, 4, 88
  0636e90  addi 4, 4, 352
  0636e94  extsw 4, 4
  0636e98  add 3, 3, 4
  0636e9c  lwz 3, 8(3)
  0636ea0  blr

FUN_00636ea4:   # 0x636ea4, 0x18 bytes
  0636ea4  mulli 4, 4, 88
  0636ea8  addi 4, 4, 352
  0636eac  extsw 4, 4
  0636eb0  add 3, 3, 4
  0636eb4  stw 5, 8(3)
  0636eb8  blr

FUN_00636ebc:   # 0x636ebc, 0x18 bytes
  0636ebc  mulli 4, 4, 88
  0636ec0  addi 4, 4, 336
  0636ec4  extsw 4, 4
  0636ec8  add 3, 3, 4
  0636ecc  lwz 3, 8(3)
  0636ed0  blr

FUN_00636ed4:   # 0x636ed4, 0x18 bytes
  0636ed4  mulli 4, 4, 88
  0636ed8  addi 4, 4, 336
  0636edc  extsw 4, 4
  0636ee0  add 3, 3, 4
  0636ee4  stw 5, 8(3)
  0636ee8  blr

FUN_00636eec:   # 0x636eec, 0x28 bytes
  0636eec  stdu 1, -128(1)
  0636ef0  mflr 0
  0636ef4  std 0, 144(1)
  0636ef8  bl 0x6407e0
  0636efc  nop
  0636f00  ld 0, 144(1)
  0636f04  clrldi 3, 3, 32
  0636f08  mtlr 0
  0636f0c  addi 1, 1, 128
  0636f10  blr

FUN_00636f14:   # 0x636f14, 0x58 bytes
  0636f14  stdu 1, -128(1)
  0636f18  mflr 0
  0636f1c  std 31, 112(1)
  0636f20  mr 31, 3
  0636f24  clrldi 3, 3, 32
  0636f28  std 0, 144(1)
  0636f2c  bl 0x64031c
  0636f30  nop
  0636f34  li 9, 16
  0636f38  li 11, 0
  0636f3c  mtctr 9
  0636f40  li 0, -1
  0636f44  add 9, 31, 11
  0636f48  addi 11, 11, 4
  0636f4c  clrldi 9, 9, 32
  0636f50  stw 0, 212(9)
  0636f54  bdnz 0x636f44
  0636f58  ld 0, 144(1)
  0636f5c  ld 31, 112(1)
  0636f60  addi 1, 1, 128
  0636f64  mtlr 0
  0636f68  blr

FUN_00636f6c:   # 0x636f6c, 0xe8 bytes
  0636f6c  stdu 1, -176(1)
  0636f70  mflr 0
  0636f74  std 26, 128(1)
  0636f78  mr 26, 3
  0636f7c  std 27, 136(1)
  0636f80  std 28, 144(1)
  0636f84  std 29, 152(1)
  0636f88  mr 28, 4
  0636f8c  clrldi 29, 6, 32
  0636f90  mr 27, 5
  0636f94  li 4, 0
  0636f98  li 5, 1696
  0636f9c  std 0, 192(1)
  0636fa0  std 24, 112(1)
  0636fa4  std 25, 120(1)
  0636fa8  std 31, 168(1)
  0636fac  mr 25, 6
  0636fb0  mr 31, 3
  0636fb4  bl 0x5d0140
  0636fb8  nop
  0636fbc  mr 4, 29
  0636fc0  clrldi 3, 27, 32
  0636fc4  stw 28, 1688(26)
  0636fc8  bl 0x636d80
  0636fcc  mr 4, 29
  0636fd0  stw 3, 1692(26)
  0636fd4  mr 3, 26
  0636fd8  mr 24, 28
  0636fdc  bl 0x640820
  0636fe0  nop
  0636fe4  cmpwi 7, 25, 0
  0636fe8  bt 30, 0x63701c
  0636fec  li 29, 0
  0636ff0  lwz 5, 1692(26)
  0636ff4  extsw 4, 29
  0636ff8  mr 3, 31
  0636ffc  mullw 5, 29, 5
  0637000  add 5, 24, 5
  0637004  addi 29, 29, 1
  0637008  clrldi 5, 5, 32
  063700c  bl 0x6407c0
  0637010  nop
  0637014  cmpw 7, 25, 29
  0637018  bf 30, 0x636ff0
  063701c  mr 3, 31
  0637020  bl 0x636f14
  0637024  ld 0, 192(1)
  0637028  lwz 3, 1692(26)
  063702c  ld 24, 112(1)
  0637030  mtlr 0
  0637034  ld 25, 120(1)
  0637038  ld 26, 128(1)
  063703c  ld 27, 136(1)
  0637040  ld 28, 144(1)
  0637044  ld 29, 152(1)
  0637048  ld 31, 168(1)
  063704c  addi 1, 1, 176
  0637050  blr

FUN_00637054:   # 0x637054, 0x40 bytes
  0637054  lwz 9, 0(3)
  0637058  lwz 0, 8(3)
  063705c  slwi 11, 9, 1
  0637060  lwz 10, 4(3)
  0637064  add 9, 9, 0
  0637068  divw 0, 9, 11
  063706c  mullw 0, 0, 11
  0637070  sub 9, 9, 0
  0637074  xor 9, 9, 10
  0637078  srawi 0, 9, 31
  063707c  xor 3, 0, 9
  0637080  sub 3, 3, 0
  0637084  addi 3, 3, -1
  0637088  srwi 3, 3, 31
  063708c  extsw 3, 3
  0637090  blr

FUN_00637094:   # 0x637094, 0x28 bytes
  0637094  lwz 9, 4(3)
  0637098  lwz 0, 8(3)
  063709c  xor 0, 0, 9
  06370a0  srawi 9, 0, 31
  06370a4  xor 3, 9, 0
  06370a8  sub 3, 3, 9
  06370ac  addi 3, 3, -1
  06370b0  srwi 3, 3, 31
  06370b4  extsw 3, 3
  06370b8  blr

FUN_006370bc:   # 0x6370bc, 0x28 bytes
  06370bc  lwz 0, 4(3)
  06370c0  lwz 9, 8(3)
  06370c4  sub 9, 0, 9
  06370c8  cmpwi 7, 9, 0
  06370cc  bf 28, 0x6370dc
  06370d0  lwz 0, 0(3)
  06370d4  slwi 0, 0, 1
  06370d8  add 9, 9, 0
  06370dc  extsw 3, 9
  06370e0  blr

FUN_006370e4:   # 0x6370e4, 0x1c bytes
  06370e4  lwz 9, 0(3)
  06370e8  lwz 3, 4(3)
  06370ec  divw 0, 3, 9
  06370f0  mullw 0, 0, 9
  06370f4  sub 3, 3, 0
  06370f8  extsw 3, 3
  06370fc  blr

FUN_00637100:   # 0x637100, 0x1c bytes
  0637100  lwz 9, 0(3)
  0637104  lwz 3, 8(3)
  0637108  divw 0, 3, 9
  063710c  mullw 0, 0, 9
  0637110  sub 3, 3, 0
  0637114  extsw 3, 3
  0637118  blr

FUN_0063711c:   # 0x63711c, 0x30 bytes
  063711c  lwz 11, 0(3)
  0637120  lwz 0, 8(3)
  0637124  slwi 9, 11, 1
  0637128  add 4, 4, 0
  063712c  divw 0, 4, 9
  0637130  mullw 0, 0, 9
  0637134  sub 4, 4, 0
  0637138  divw 9, 4, 11
  063713c  mullw 9, 9, 11
  0637140  sub 4, 4, 9
  0637144  extsw 3, 4
  0637148  blr

FUN_0063714c:   # 0x63714c, 0x24 bytes
  063714c  lwz 11, 4(3)
  0637150  lwz 9, 0(3)
  0637154  addi 11, 11, 1
  0637158  slwi 9, 9, 1
  063715c  divw 0, 11, 9
  0637160  mullw 0, 0, 9
  0637164  sub 11, 11, 0
  0637168  stw 11, 4(3)
  063716c  blr

FUN_00637170:   # 0x637170, 0x24 bytes
  0637170  lwz 11, 8(3)
  0637174  lwz 9, 0(3)
  0637178  addi 11, 11, 1
  063717c  slwi 9, 9, 1
  0637180  divw 0, 11, 9
  0637184  mullw 0, 0, 9
  0637188  sub 11, 11, 0
  063718c  stw 11, 8(3)
  0637190  blr

FUN_00637194:   # 0x637194, 0x40 bytes
  0637194  lwz 9, 0(3)
  0637198  lwz 0, 12(3)
  063719c  slwi 11, 9, 1
  06371a0  lwz 10, 4(3)
  06371a4  add 9, 9, 0
  06371a8  divw 0, 9, 11
  06371ac  mullw 0, 0, 11
  06371b0  sub 9, 9, 0
  06371b4  xor 9, 9, 10
  06371b8  srawi 0, 9, 31
  06371bc  xor 3, 0, 9
  06371c0  sub 3, 3, 0
  06371c4  addi 3, 3, -1
  06371c8  srwi 3, 3, 31
  06371cc  extsw 3, 3
  06371d0  blr

FUN_006371d4:   # 0x6371d4, 0x28 bytes
  06371d4  lwz 9, 4(3)
  06371d8  lwz 0, 12(3)
  06371dc  xor 0, 0, 9
  06371e0  srawi 9, 0, 31
  06371e4  xor 3, 9, 0
  06371e8  sub 3, 3, 9
  06371ec  addi 3, 3, -1
  06371f0  srwi 3, 3, 31
  06371f4  extsw 3, 3
  06371f8  blr

FUN_006371fc:   # 0x6371fc, 0x28 bytes
  06371fc  lwz 0, 4(3)
  0637200  lwz 9, 12(3)
  0637204  sub 9, 0, 9
  0637208  cmpwi 7, 9, 0
  063720c  bf 28, 0x63721c
  0637210  lwz 0, 0(3)
  0637214  slwi 0, 0, 1
  0637218  add 9, 9, 0
  063721c  extsw 3, 9
  0637220  blr

FUN_00637224:   # 0x637224, 0x24 bytes
  0637224  lwz 11, 12(3)
  0637228  lwz 9, 0(3)
  063722c  addi 11, 11, 1
  0637230  slwi 9, 9, 1
  0637234  divw 0, 11, 9
  0637238  mullw 0, 0, 9
  063723c  sub 11, 11, 0
  0637240  stw 11, 12(3)
  0637244  blr

FUN_00637248:   # 0x637248, 0x18 bytes
  0637248  li 0, 0
  063724c  stw 4, 0(3)
  0637250  stw 0, 12(3)
  0637254  stw 0, 4(3)
  0637258  stw 0, 8(3)
  063725c  blr

FUN_00637260:   # 0x637260, 0x44 bytes
  0637260  lwz 0, 572(3)
  0637264  std 30, -16(1)
  0637268  cmpwi 7, 0, 0
  063726c  lwz 30, -29400(2)
  0637270  clrldi 9, 0, 32
  0637274  bt 30, 0x63729c
  0637278  lwz 0, 7828(9)
  063727c  cmpwi 7, 0, -1
  0637280  bt 30, 0x63729c
  0637284  lwz 11, -32768(30)
  0637288  li 0, -1
  063728c  stw 0, 7828(9)
  0637290  lwz 9, 48(11)
  0637294  addi 9, 9, 1
  0637298  stw 9, 48(11)
  063729c  ld 30, -16(1)
  06372a0  blr

FUN_006372a4:   # 0x6372a4, 0x1c bytes
  06372a4  extsh 0, 3
  06372a8  clrlwi 3, 3, 17
  06372ac  cmpwi 7, 0, 0
  06372b0  bf 28, 0x6372b8
  06372b4  oris 3, 3, 32768
  06372b8  clrldi 3, 3, 32
  06372bc  blr

FUN_006372c0:   # 0x6372c0, 0x24 bytes
  06372c0  lwz 0, 6048(3)
  06372c4  cmpw 7, 0, 4
  06372c8  bclr 12, 30
  06372cc  ld 9, 5984(3)
  06372d0  li 0, 0
  06372d4  stw 4, 6048(3)
  06372d8  stw 0, 712(4)
  06372dc  std 9, 704(4)
  06372e0  blr

FUN_006372e4:   # 0x6372e4, 0x4 bytes
  06372e4  blr

FUN_006372e8:   # 0x6372e8, 0xe0 bytes
  06372e8  std 30, -16(1)
  06372ec  lwz 30, -29400(2)
  06372f0  mr 8, 3
  06372f4  add 7, 3, 5
  06372f8  lwz 9, -32764(30)
  06372fc  lwz 11, 0(9)
  0637300  cmpwi 7, 11, 0
  0637304  bf 29, 0x6373b4
  0637308  lwz 9, -32760(30)
  063730c  cmpwi 7, 11, 1
  0637310  clrldi 11, 11, 32
  0637314  li 10, 0
  0637318  slwi 4, 6, 6
  063731c  mtctr 11
  0637320  lwz 5, 0(9)
  0637324  bt- 28, 0x6373bc
  0637328  add 0, 10, 5
  063732c  clrldi 11, 0, 32
  0637330  lwz 9, 1704(11)
  0637334  cmpwi 7, 9, 0
  0637338  bt 30, 0x6373ac
  063733c  clrldi 9, 9, 32
  0637340  lwz 0, 0(9)
  0637344  cmpwi 7, 0, 0
  0637348  bf 28, 0x6373ac
  063734c  lwz 0, 7904(11)
  0637350  cmplw 7, 0, 3
  0637354  bt 28, 0x637368
  0637358  cmplw 7, 0, 7
  063735c  bf 28, 0x637368
  0637360  add 0, 6, 0
  0637364  stw 0, 7904(11)
  0637368  lwz 0, 7908(11)
  063736c  cmplw 7, 8, 0
  0637370  bt 29, 0x637384
  0637374  cmplw 7, 7, 0
  0637378  bf 29, 0x637384
  063737c  add 0, 0, 4
  0637380  stw 0, 7908(11)
  0637384  lwz 0, 7900(11)
  0637388  cmplw 7, 8, 0
  063738c  bt 29, 0x6373ac
  0637390  cmplw 7, 7, 0
  0637394  bf 29, 0x6373ac
  0637398  add 9, 10, 5
  063739c  clrldi 9, 9, 32
  06373a0  lwz 0, 7900(9)
  06373a4  add 0, 0, 6
  06373a8  stw 0, 7900(11)
  06373ac  addi 10, 10, 8024
  06373b0  bdnz 0x637328
  06373b4  ld 30, -16(1)
  06373b8  blr
  06373bc  li 0, 1
  06373c0  mtctr 0
  06373c4  b 0x637328

FUN_006373c8:   # 0x6373c8, 0x2c bytes
  06373c8  std 30, -16(1)
  06373cc  lwz 30, -29400(2)
  06373d0  li 3, 0
  06373d4  lwz 9, -32756(30)
  06373d8  lwz 9, 0(9)
  06373dc  cmpwi 7, 9, 0
  06373e0  bt 30, 0x6373e8
  06373e4  addi 3, 9, 7912
  06373e8  clrldi 3, 3, 32
  06373ec  ld 30, -16(1)
  06373f0  blr

FUN_006373f4:   # 0x6373f4, 0xfc bytes
  06373f4  stdu 1, -128(1)
  06373f8  mflr 0
  06373fc  std 30, 112(1)
  0637400  std 31, 120(1)
  0637404  std 0, 144(1)
  0637408  lbz 0, 581(3)
  063740c  lwz 30, -29400(2)
  0637410  cmpwi 7, 0, 0
  0637414  bt 30, 0x637444
  0637418  lwz 3, 1404(3)
  063741c  cmpwi 7, 3, 0
  0637420  bt 30, 0x637444
  0637424  clrldi 9, 3, 32
  0637428  lwz 3, 7772(9)
  063742c  cmpwi 7, 3, 0
  0637430  bt 30, 0x637444
  0637434  clrldi 31, 3, 32
  0637438  lbz 0, 18(31)
  063743c  cmpwi 7, 0, 0
  0637440  bf 30, 0x63745c
  0637444  ld 0, 144(1)
  0637448  ld 30, 112(1)
  063744c  ld 31, 120(1)
  0637450  mtlr 0
  0637454  addi 1, 1, 128
  0637458  blr
  063745c  lwz 3, -32752(30)
  0637460  lwz 4, 400(31)
  0637464  bl 0x61948c
  0637468  nop
  063746c  lwz 3, -32748(30)
  0637470  lwz 4, 12(31)
  0637474  bl 0x61948c
  0637478  nop
  063747c  lbz 0, 20(31)
  0637480  cmplwi 7, 0, 6
  0637484  bf 29, 0x6374d4
  0637488  lwz 4, -32736(30)
  063748c  lwz 3, -32712(30)
  0637490  clrldi 4, 4, 32
  0637494  bl 0x61948c
  0637498  nop
  063749c  lwz 3, -32708(30)
  06374a0  lwz 4, 88(31)
  06374a4  bl 0x61948c
  06374a8  nop
  06374ac  lwz 3, -32704(30)
  06374b0  lbz 4, 23(31)
  06374b4  bl 0x61948c
  06374b8  nop
  06374bc  ld 0, 144(1)
  06374c0  ld 30, 112(1)
  06374c4  ld 31, 120(1)
  06374c8  mtlr 0
  06374cc  addi 1, 1, 128
  06374d0  blr
  06374d4  lwz 11, -32744(30)
  06374d8  rlwinm 9, 0, 2, 22, 29
  06374dc  lwzx 0, 9, 11
  06374e0  extsw 0, 0
  06374e4  add 0, 0, 11
  06374e8  mtctr 0
  06374ec  bctr

FUN_0063753c:   # 0x63753c, 0x7c bytes
  063753c  cmpwi 7, 5, 3
  0637540  mflr 0
  0637544  stdu 1, -128(1)
  0637548  std 30, 112(1)
  063754c  std 0, 144(1)
  0637550  lwz 30, -29400(2)
  0637554  cmpwi 6, 5, 5
  0637558  bt 30, 0x637590
  063755c  addi 0, 5, -1
  0637560  bt 26, 0x637590
  0637564  cmplwi 7, 0, 1
  0637568  clrldi 3, 4, 32
  063756c  cmpwi 6, 5, 4
  0637570  bf 29, 0x6375a4
  0637574  extsw 6, 5
  0637578  li 5, 99
  063757c  bt 26, 0x6375a4
  0637580  lwz 4, -32696(30)
  0637584  lwz 3, -32700(30)
  0637588  bl 0x61948c
  063758c  nop
  0637590  ld 0, 144(1)
  0637594  ld 30, 112(1)
  0637598  addi 1, 1, 128
  063759c  mtlr 0
  06375a0  blr
  06375a4  ld 0, 144(1)
  06375a8  ld 30, 112(1)
  06375ac  addi 1, 1, 128
  06375b0  mtlr 0
  06375b4  b 0x637260

FUN_006375b8:   # 0x6375b8, 0x68 bytes
  06375b8  stdu 1, -128(1)
  06375bc  mflr 0
  06375c0  std 31, 112(1)
  06375c4  mr 31, 4
  06375c8  std 0, 144(1)
  06375cc  li 6, 0
  06375d0  li 4, 6
  06375d4  lbz 0, 732(31)
  06375d8  cmpwi 7, 0, 31
  06375dc  bt 30, 0x6375f4
  06375e0  ld 0, 144(1)
  06375e4  ld 31, 112(1)
  06375e8  addi 1, 1, 128
  06375ec  mtlr 0
  06375f0  blr
  06375f4  lwz 5, 12(31)
  06375f8  lwz 3, 0(3)
  06375fc  bl 0x6316c0
  0637600  nop
  0637604  li 0, 32
  0637608  stb 0, 732(31)
  063760c  ld 0, 144(1)
  0637610  ld 31, 112(1)
  0637614  addi 1, 1, 128
  0637618  mtlr 0
  063761c  blr

FUN_00637620:   # 0x637620, 0xa0 bytes
  0637620  stdu 1, -144(1)
  0637624  mflr 0
  0637628  std 31, 136(1)
  063762c  mr 31, 3
  0637630  clrldi 3, 3, 32
  0637634  std 29, 120(1)
  0637638  std 0, 160(1)
  063763c  mr 29, 4
  0637640  bl 0x63ea18
  0637644  nop
  0637648  lbz 0, 1412(3)
  063764c  cmpwi 6, 29, 0
  0637650  cmpwi 7, 0, 1
  0637654  mr 11, 3
  0637658  li 9, 0
  063765c  bt 30, 0x637664
  0637660  bt 26, 0x6376a4
  0637664  lbz 0, 581(31)
  0637668  li 9, 1
  063766c  clrldi 31, 11, 32
  0637670  cmpwi 7, 0, 0
  0637674  bt 30, 0x6376a4
  0637678  lwz 9, 1404(3)
  063767c  mr 3, 31
  0637680  lwz 4, 7772(9)
  0637684  cmpwi 7, 4, 0
  0637688  clrldi 4, 4, 32
  063768c  bt 30, 0x637694
  0637690  bl 0x6375b8
  0637694  mr 3, 31
  0637698  bl 0x63a128
  063769c  nop
  06376a0  li 9, 1
  06376a4  ld 0, 160(1)
  06376a8  extsw 3, 9
  06376ac  ld 29, 120(1)
  06376b0  ld 31, 136(1)
  06376b4  mtlr 0
  06376b8  addi 1, 1, 144
  06376bc  blr

FUN_006376c0:   # 0x6376c0, 0x13c bytes
  06376c0  stdu 1, -128(1)
  06376c4  mflr 0
  06376c8  std 30, 112(1)
  06376cc  std 0, 144(1)
  06376d0  lbz 0, 581(3)
  06376d4  lwz 30, -29400(2)
  06376d8  cmpwi 7, 0, 0
  06376dc  bt 30, 0x6376ec
  06376e0  lbz 0, 1412(3)
  06376e4  cmpwi 7, 0, 2
  06376e8  bt 30, 0x637704
  06376ec  ld 0, 144(1)
  06376f0  li 3, 0
  06376f4  ld 30, 112(1)
  06376f8  addi 1, 1, 128
  06376fc  mtlr 0
  0637700  blr
  0637704  lwz 9, 1404(3)
  0637708  cmpwi 7, 9, 0
  063770c  bt 30, 0x6376ec
  0637710  addi 9, 9, 1720
  0637714  clrldi 6, 9, 32
  0637718  lbz 0, 6081(6)
  063771c  cmpwi 7, 0, 0
  0637720  bf 29, 0x6376ec
  0637724  mr 8, 9
  0637728  lfs 11, -32692(30)
  063772c  addi 10, 3, 1020
  0637730  li 5, 0
  0637734  li 7, 0
  0637738  addi 9, 10, -416
  063773c  clrldi 11, 10, 32
  0637740  clrldi 9, 9, 32
  0637744  lfs 12, 0(11)
  0637748  lfs 13, 0(9)
  063774c  fcmpu 7, 12, 13
  0637750  lfs 0, 192(11)
  0637754  bt 30, 0x6377b8
  0637758  fcmpu 7, 0, 11
  063775c  fadds 12, 12, 0
  0637760  bt 28, 0x6377ec
  0637764  fcmpu 7, 13, 12
  0637768  bt 28, 0x6377f4
  063776c  clrldi 9, 8, 32
  0637770  lwz 9, 5904(9)
  0637774  cmpwi 7, 9, 0
  0637778  bt 30, 0x6377b0
  063777c  clrldi 9, 9, 32
  0637780  lwz 9, 1704(9)
  0637784  cmpwi 7, 9, 0
  0637788  bt 30, 0x6377b0
  063778c  clrldi 11, 9, 32
  0637790  lwz 9, 552(3)
  0637794  cmpwi 7, 9, 0
  0637798  stfs 12, 284(11)
  063779c  bt 30, 0x6377b0
  06377a0  clrldi 9, 9, 32
  06377a4  lfs 0, 284(9)
  06377a8  fmuls 0, 12, 0
  06377ac  stfs 0, 284(11)
  06377b0  li 5, 1
  06377b4  stfs 12, 0(10)
  06377b8  addi 7, 7, 1
  06377bc  lbz 0, 6081(6)
  06377c0  addi 8, 8, 4
  06377c4  cmpw 7, 0, 7
  06377c8  addi 10, 10, 4
  06377cc  bt 29, 0x637738
  06377d0  clrlwi 0, 5, 24
  06377d4  cmpwi 7, 0, 0
  06377d8  bt 30, 0x6376ec
  06377dc  clrldi 3, 3, 32
  06377e0  bl 0x61ae90
  06377e4  nop
  06377e8  b 0x6376ec
  06377ec  fcmpu 7, 13, 12
  06377f0  bf 29, 0x63776c
  06377f4  fmr 12, 13
  06377f8  b 0x63776c

FUN_006377fc:   # 0x6377fc, 0x54 bytes
  06377fc  stdu 1, -144(1)
  0637800  mflr 0
  0637804  std 30, 128(1)
  0637808  lwz 30, -29400(2)
  063780c  std 29, 120(1)
  0637810  std 0, 160(1)
  0637814  mr 29, 3
  0637818  bl 0x63f99c
  063781c  nop
  0637820  lwz 9, -32768(30)
  0637824  sub 3, 3, 29
  0637828  lwz 0, 108(9)
  063782c  cmplw 7, 0, 3
  0637830  bf 28, 0x637838
  0637834  stw 3, 108(9)
  0637838  ld 0, 160(1)
  063783c  ld 29, 120(1)
  0637840  ld 30, 128(1)
  0637844  mtlr 0
  0637848  addi 1, 1, 144
  063784c  blr

FUN_00637850:   # 0x637850, 0x40 bytes
  0637850  stdu 1, -128(1)
  0637854  mflr 0
  0637858  std 0, 144(1)
  063785c  lwz 0, 7896(3)
  0637860  cmpwi 7, 0, 0
  0637864  bt 30, 0x63787c
  0637868  clrldi 3, 0, 32
  063786c  ld 0, 144(1)
  0637870  addi 1, 1, 128
  0637874  mtlr 0
  0637878  blr
  063787c  lwz 3, 1704(3)
  0637880  bl 0x63e9c4
  0637884  nop
  0637888  mr 0, 3
  063788c  b 0x637868

FUN_00637890:   # 0x637890, 0x1a8 bytes
  0637890  stdu 1, -144(1)
  0637894  mflr 0
  0637898  std 31, 136(1)
  063789c  std 0, 160(1)
  06378a0  mr 31, 3
  06378a4  lwz 3, 7872(3)
  06378a8  std 29, 120(1)
  06378ac  cmpwi 7, 3, 0
  06378b0  bt 30, 0x637908
  06378b4  lwz 0, 7880(31)
  06378b8  cmpwi 7, 0, 2
  06378bc  bt 30, 0x637978
  06378c0  cmplwi 7, 0, 2
  06378c4  bt 29, 0x637940
  06378c8  cmpwi 7, 0, 1
  06378cc  bt 30, 0x6379a4
  06378d0  lwz 8, 7996(31)
  06378d4  li 9, 1
  06378d8  rlwinm 0, 8, 0, 25, 25
  06378dc  cmpwi 7, 0, 0
  06378e0  bt 30, 0x637920
  06378e4  lwz 0, 7876(31)
  06378e8  rlwinm 29, 0, 0, 30, 30
  06378ec  cmpwi 7, 29, 0
  06378f0  bt 30, 0x637a0c
  06378f4  clrldi 3, 3, 32
  06378f8  bl 0x63ea68
  06378fc  nop
  0637900  li 0, 0
  0637904  stw 0, 7872(31)
  0637908  ld 0, 160(1)
  063790c  ld 29, 120(1)
  0637910  ld 31, 136(1)
  0637914  mtlr 0
  0637918  addi 1, 1, 144
  063791c  blr
  0637920  cmpwi 7, 9, 0
  0637924  bt 30, 0x6378f4
  0637928  ld 0, 160(1)
  063792c  ld 29, 120(1)
  0637930  ld 31, 136(1)
  0637934  mtlr 0
  0637938  addi 1, 1, 144
  063793c  blr
  0637940  cmpwi 7, 0, 3
  0637944  bt 30, 0x6379e4
  0637948  cmpwi 7, 0, 4
  063794c  bf 30, 0x6378d0
  0637950  lwz 8, 7996(31)
  0637954  rlwinm 0, 8, 0, 23, 23
  0637958  cmpwi 7, 0, 0
  063795c  bt 30, 0x6378d4
  0637960  lwz 9, 7884(31)
  0637964  lwz 11, 7992(31)
  0637968  divwu 0, 11, 9
  063796c  mullw 0, 0, 9
  0637970  sub 9, 11, 0
  0637974  b 0x6378d8
  0637978  lwz 8, 7996(31)
  063797c  rlwinm 0, 8, 0, 30, 30
  0637980  cmpwi 7, 0, 0
  0637984  bt 30, 0x6378d4
  0637988  lwz 9, 7984(31)
  063798c  lwz 11, 7884(31)
  0637990  addi 9, 9, 1
  0637994  divwu 0, 9, 11
  0637998  mullw 0, 0, 11
  063799c  sub 9, 9, 0
  06379a0  b 0x6378d8
  06379a4  lwz 8, 7996(31)
  06379a8  clrlwi 0, 8, 31
  06379ac  cmpwi 7, 0, 0
  06379b0  bt 30, 0x6378d4
  06379b4  lwz 0, 7980(31)
  06379b8  lwz 10, 7972(31)
  06379bc  slwi 9, 0, 5
  06379c0  lwz 11, 7884(31)
  06379c4  slwi 0, 0, 3
  06379c8  sub 9, 9, 0
  06379cc  divwu 9, 9, 10
  06379d0  addi 9, 9, 1
  06379d4  divwu 0, 9, 11
  06379d8  mullw 0, 0, 11
  06379dc  sub 9, 9, 0
  06379e0  b 0x6378d8
  06379e4  lwz 8, 7996(31)
  06379e8  rlwinm 0, 8, 0, 29, 29
  06379ec  cmpwi 7, 0, 0
  06379f0  bt 30, 0x6378d4
  06379f4  lwz 9, 7884(31)
  06379f8  lwz 11, 7988(31)
  06379fc  divwu 0, 11, 9
  0637a00  mullw 0, 0, 9
  0637a04  sub 9, 11, 0
  0637a08  b 0x6378d8
  0637a0c  clrldi 3, 3, 32
  0637a10  li 4, 1
  0637a14  bl 0x6084f4
  0637a18  nop
  0637a1c  ld 0, 160(1)
  0637a20  stw 29, 7872(31)
  0637a24  mtlr 0
  0637a28  ld 29, 120(1)
  0637a2c  ld 31, 136(1)
  0637a30  addi 1, 1, 144
  0637a34  blr

FUN_00637a38:   # 0x637a38, 0x214 bytes
  0637a38  stdu 1, -176(1)
  0637a3c  mflr 0
  0637a40  std 31, 168(1)
  0637a44  std 0, 192(1)
  0637a48  mr 31, 3
  0637a4c  lwz 3, 7836(3)
  0637a50  std 30, 160(1)
  0637a54  cmpwi 7, 3, 0
  0637a58  lwz 30, -29400(2)
  0637a5c  std 27, 136(1)
  0637a60  std 28, 144(1)
  0637a64  std 29, 152(1)
  0637a68  bt 30, 0x637b54
  0637a6c  cmpwi 7, 4, 0
  0637a70  bf 30, 0x637b78
  0637a74  lwz 0, 7840(31)
  0637a78  clrlwi 0, 0, 31
  0637a7c  cmpwi 7, 0, 0
  0637a80  bt 30, 0x637b54
  0637a84  li 0, 0
  0637a88  clrldi 3, 3, 32
  0637a8c  addi 4, 1, 112
  0637a90  li 5, 0
  0637a94  li 6, 0
  0637a98  li 7, 0
  0637a9c  stw 0, 112(1)
  0637aa0  bl 0x635204
  0637aa4  nop
  0637aa8  stw 3, 7836(31)
  0637aac  lwz 0, 112(1)
  0637ab0  cmpwi 7, 0, 0
  0637ab4  bt 30, 0x637b54
  0637ab8  clrldi 3, 3, 32
  0637abc  bl 0x63ea68
  0637ac0  nop
  0637ac4  lfs 2, 7856(31)
  0637ac8  lfs 1, -32692(30)
  0637acc  fcmpu 7, 2, 1
  0637ad0  bf 29, 0x637aec
  0637ad4  fmr 2, 1
  0637ad8  lwz 3, 7836(31)
  0637adc  li 6, 32
  0637ae0  bl 0x608578
  0637ae4  nop
  0637ae8  lfs 2, 7856(31)
  0637aec  li 6, 32
  0637af0  lwz 3, 7836(31)
  0637af4  lfs 1, 7860(31)
  0637af8  bl 0x608578
  0637afc  nop
  0637b00  lwz 3, 7836(31)
  0637b04  bl 0x633d70
  0637b08  nop
  0637b0c  cmpwi 7, 3, 0
  0637b10  mr 29, 3
  0637b14  bt 30, 0x637b4c
  0637b18  lwz 3, 1704(31)
  0637b1c  bl 0x63ea18
  0637b20  nop
  0637b24  mr 28, 3
  0637b28  lwz 3, 1704(29)
  0637b2c  bl 0x63ea18
  0637b30  nop
  0637b34  lwz 0, 7852(31)
  0637b38  cmpwi 7, 0, 1
  0637b3c  mr 27, 3
  0637b40  bt 30, 0x637cfc
  0637b44  cmpwi 7, 0, 2
  0637b48  bt 30, 0x637ccc
  0637b4c  li 0, 0
  0637b50  stw 0, 7836(31)
  0637b54  ld 0, 192(1)
  0637b58  ld 27, 136(1)
  0637b5c  ld 28, 144(1)
  0637b60  mtlr 0
  0637b64  ld 29, 152(1)
  0637b68  ld 30, 160(1)
  0637b6c  ld 31, 168(1)
  0637b70  addi 1, 1, 176
  0637b74  blr
  0637b78  lwz 0, 7844(31)
  0637b7c  cmplwi 7, 0, 4
  0637b80  bf 29, 0x637bc4
  0637b84  lwz 8, 7996(31)
  0637b88  li 9, 1
  0637b8c  rlwinm 0, 8, 0, 25, 25
  0637b90  cmpwi 7, 0, 0
  0637b94  bt 30, 0x637bf4
  0637b98  lwz 0, 7840(31)
  0637b9c  rlwinm 0, 0, 0, 30, 30
  0637ba0  cmpwi 7, 0, 0
  0637ba4  bf 30, 0x637a84
  0637ba8  clrldi 3, 3, 32
  0637bac  li 4, 1
  0637bb0  bl 0x6084f4
  0637bb4  nop
  0637bb8  li 3, 0
  0637bbc  stw 3, 7836(31)
  0637bc0  b 0x637b54
  0637bc4  lwz 11, -32684(30)
  0637bc8  rldic 9, 0, 2, 30
  0637bcc  lwzx 0, 9, 11
  0637bd0  extsw 0, 0
  0637bd4  add 0, 0, 11
  0637bd8  mtctr 0
  0637bdc  bctr
  0637be0  <unknown>
  0637be4  <unknown>
  0637be8  <unknown>
  0637bec  <unknown>
  0637bf0  <unknown>
  0637bf4  cmpwi 7, 9, 0
  0637bf8  bt 30, 0x637a84
  0637bfc  b 0x637b54
  0637c00  lwz 8, 7996(31)
  0637c04  rldicl 0, 8, 57, 63
  0637c08  xori 9, 0, 1
  0637c0c  b 0x637b8c
  0637c10  lwz 8, 7996(31)
  0637c14  clrlwi 0, 8, 31
  0637c18  cmpwi 7, 0, 0
  0637c1c  bt 30, 0x637b88
  0637c20  lwz 0, 7980(31)
  0637c24  lwz 10, 7972(31)
  0637c28  slwi 9, 0, 5
  0637c2c  lwz 11, 7848(31)
  0637c30  slwi 0, 0, 3
  0637c34  sub 9, 9, 0
  0637c38  divwu 9, 9, 10
  0637c3c  addi 9, 9, 1
  0637c40  divwu 0, 9, 11
  0637c44  mullw 0, 0, 11
  0637c48  sub 9, 9, 0

snd_ProcessStreamTick:   # 0x637d2c, 0x32c bytes
  0637d2c  mfcr 12
  0637d30  stdu 1, -512(1)
  0637d34  std 31, 504(1)
  0637d38  mr 31, 3
  0637d3c  std 30, 496(1)
  0637d40  lwz 30, -29400(2)
  0637d44  std 19, 408(1)
  0637d48  std 27, 472(1)
  0637d4c  std 29, 488(1)
  0637d50  std 14, 368(1)
  0637d54  std 15, 376(1)
  0637d58  std 16, 384(1)
  0637d5c  std 17, 392(1)
  0637d60  std 18, 400(1)
  0637d64  std 20, 416(1)
  0637d68  std 21, 424(1)
  0637d6c  std 22, 432(1)
  0637d70  std 23, 440(1)
  0637d74  std 24, 448(1)
  0637d78  std 25, 456(1)
  0637d7c  std 26, 464(1)
  0637d80  std 28, 480(1)
  0637d84  mr 19, 3
  0637d88  clrldi 29, 3, 32
  0637d8c  li 27, 0
  0637d90  stw 12, 520(1)
  0637d94  mflr 0
  0637d98  std 0, 528(1)
  0637d9c  lbz 16, 1412(3)
  0637da0  bl 0x63f99c
  0637da4  nop
  0637da8  stw 3, 316(1)
  0637dac  lbz 0, 581(31)
  0637db0  cmpwi 7, 0, 0
  0637db4  bf 30, 0x637e1c
  0637db8  ld 0, 528(1)
  0637dbc  extsw 3, 27
  0637dc0  lwz 12, 520(1)
  0637dc4  ld 14, 368(1)
  0637dc8  mtlr 0
  0637dcc  ld 15, 376(1)
  0637dd0  mtocrf 8, 12
  0637dd4  ld 16, 384(1)
  0637dd8  ld 17, 392(1)
  0637ddc  ld 18, 400(1)
  0637de0  ld 19, 408(1)
  0637de4  ld 20, 416(1)
  0637de8  ld 21, 424(1)
  0637dec  ld 22, 432(1)
  0637df0  ld 23, 440(1)
  0637df4  ld 24, 448(1)
  0637df8  ld 25, 456(1)
  0637dfc  ld 26, 464(1)
  0637e00  ld 27, 472(1)
  0637e04  ld 28, 480(1)
  0637e08  ld 29, 488(1)
  0637e0c  ld 30, 496(1)
  0637e10  ld 31, 504(1)
  0637e14  addi 1, 1, 512
  0637e18  blr
  0637e1c  mr 3, 29
  0637e20  bl 0x631058
  0637e24  nop
  0637e28  cmpwi 7, 3, 0
  0637e2c  bt 30, 0x637ef0
  0637e30  lwz 0, 4(31)
  0637e34  lwz 9, 1404(31)
  0637e38  rlwinm 11, 0, 0, 28, 30
  0637e3c  stw 9, 320(1)
  0637e40  cmpwi 7, 11, 0
  0637e44  addi 15, 9, 1720
  0637e48  bf 30, 0x637e90
  0637e4c  lbz 0, 1412(31)
  0637e50  clrlwi 6, 0, 24
  0637e54  cmplwi 7, 6, 5
  0637e58  bt 29, 0x637eb0
  0637e5c  lwz 11, -32664(30)
  0637e60  rlwinm 9, 0, 2, 22, 29
  0637e64  lwzx 0, 9, 11
  0637e68  extsw 0, 0
  0637e6c  add 0, 0, 11
  0637e70  mtctr 0
  0637e74  bctr
  0637e78  <unknown>
  0637e7c  <unknown>
  0637e80  <unknown>
  0637e84  <unknown>
  0637e88  <unknown>
  0637e8c  <unknown>
  0637e90  lbz 0, 1412(31)
  0637e94  cmpwi 7, 0, 3
  0637e98  bt 30, 0x637f04
  0637e9c  li 27, 0
  0637ea0  lwz 3, 316(1)
  0637ea4  bl 0x6377fc
  0637ea8  stb 16, 1412(19)
  0637eac  b 0x637db8
  0637eb0  extsw 6, 6
  0637eb4  lwz 3, -32612(30)
  0637eb8  lwz 4, -32696(30)
  0637ebc  li 5, 1403
  0637ec0  bl 0x61948c
  0637ec4  nop
  0637ec8  lwz 31, -32768(30)
  0637ecc  li 0, 4
  0637ed0  lwz 3, 316(1)
  0637ed4  li 27, 1
  0637ed8  stb 0, 1412(19)
  0637edc  bl 0x6377fc
  0637ee0  lwz 9, 112(31)
  0637ee4  addi 9, 9, 1
  0637ee8  stw 9, 112(31)
  0637eec  b 0x637db8
  0637ef0  lwz 3, -32680(30)
  0637ef4  li 27, 1
  0637ef8  bl 0x61948c
  0637efc  nop
  0637f00  b 0x637db8
  0637f04  clrldi 3, 15, 32
  0637f08  li 28, 0
  0637f0c  bl 0x63a404
  0637f10  nop
  0637f14  li 31, 0
  0637f18  cmpwi 7, 3, 0
  0637f1c  mr 26, 3
  0637f20  bf 30, 0x637f9c
  0637f24  lwz 9, 320(1)
  0637f28  addi 29, 9, 8
  0637f2c  clrldi 29, 29, 32
  0637f30  mr 3, 29
  0637f34  bl 0x64056c
  0637f38  nop
  0637f3c  mr 28, 3
  0637f40  mr 3, 29
  0637f44  bl 0x640580
  0637f48  nop
  0637f4c  sub 28, 28, 3
  0637f50  mr 3, 29
  0637f54  bl 0x640564
  0637f58  nop
  0637f5c  mr 27, 3
  0637f60  mr 3, 29
  0637f64  bl 0x6405f4
  0637f68  nop
  0637f6c  cmpwi 7, 28, 0
  0637f70  bf 29, 0x638578
  0637f74  add 0, 28, 3
  0637f78  mr 31, 3
  0637f7c  xor 0, 27, 0
  0637f80  srawi 11, 0, 31
  0637f84  xor 9, 11, 0
  0637f88  sub 9, 9, 11
  0637f8c  addi 9, 9, -1
  0637f90  srwi 28, 9, 31
  0637f94  cmpwi 7, 28, 0
  0637f98  bt 30, 0x638578
  0637f9c  lwz 9, 320(1)
  0637fa0  li 27, 0
  0637fa4  li 16, 2
  0637fa8  lwz 3, 1704(9)
  0637fac  bl 0x63e9c4
  0637fb0  nop
  0637fb4  lwz 3, 0(3)
  0637fb8  bl 0x63ea68
  0637fbc  nop
  0637fc0  bl 0x604918
  0637fc4  nop
  0637fc8  clrldi 4, 3, 32
  0637fcc  lwz 3, -32676(30)
  0637fd0  extsw 5, 26
  0637fd4  extsw 6, 28
  0637fd8  extsw 7, 31
  0637fdc  bl 0x61948c
  0637fe0  nop
  0637fe4  li 0, 2
  0637fe8  stb 0, 1412(19)
  0637fec  b 0x637ea0
  0637ff0  lbz 0, 1417(31)
  0637ff4  cmpwi 7, 0, 0
  0637ff8  bt 30, 0x637e9c
  0637ffc  clrldi 9, 15, 32
  0638000  std 9, 336(1)
  0638004  lbz 0, 6081(9)
  0638008  cmpwi 7, 0, 0
  063800c  bt 30, 0x6385c8
  0638010  lwz 9, 5904(9)
  0638014  clrldi 0, 0, 32
  0638018  addi 10, 15, 5908
  063801c  mtctr 0
  0638020  lbz 0, 1713(9)
  0638024  cmpwi 7, 0, 0
  0638028  bt 30, 0x637e9c
  063802c  bdz 0x6385c8
  0638030  clrldi 11, 10, 32
  0638034  addi 10, 10, 4
  0638038  lwz 9, 0(11)
  063803c  lbz 0, 1713(9)
  0638040  cmpwi 7, 0, 0
  0638044  bf 30, 0x63802c
  0638048  b 0x637e9c
  063804c  clrldi 9, 15, 32
  0638050  li 11, 0
  0638054  std 9, 336(1)

FUN_00638ea0:   # 0x638ea0, 0x338 bytes
  0638ea0  stdu 1, -160(1)
  0638ea4  mflr 0
  0638ea8  std 26, 112(1)
  0638eac  std 0, 176(1)
  0638eb0  lwz 0, 572(3)
  0638eb4  mr 26, 5
  0638eb8  std 27, 120(1)
  0638ebc  cmpwi 7, 0, 0
  0638ec0  std 30, 144(1)
  0638ec4  std 31, 152(1)
  0638ec8  std 28, 128(1)
  0638ecc  std 29, 136(1)
  0638ed0  lwz 30, -29400(2)
  0638ed4  mr 31, 4
  0638ed8  mr 27, 3
  0638edc  bt 30, 0x6391b0
  0638ee0  clrldi 28, 0, 32
  0638ee4  lwz 0, 7828(28)
  0638ee8  cmpwi 7, 0, 0
  0638eec  bt 28, 0x6391b0
  0638ef0  lwz 10, 0(4)
  0638ef4  lwz 9, 472(4)
  0638ef8  lwz 0, 7888(28)
  0638efc  lwz 8, 508(4)
  0638f00  or 0, 0, 9
  0638f04  lwz 7, 1704(28)
  0638f08  lwz 11, 576(10)
  0638f0c  stw 0, 7888(28)
  0638f10  stw 8, 7904(28)
  0638f14  stw 11, 7908(28)
  0638f18  lbz 0, 44(4)
  0638f1c  stb 0, 16(7)
  0638f20  lwz 9, 0(4)
  0638f24  li 4, 0
  0638f28  stw 9, 7896(28)
  0638f2c  bl 0x61a5b8
  0638f30  nop
  0638f34  cmpwi 7, 3, 0
  0638f38  bt 28, 0x63909c
  0638f3c  lwz 29, -32640(30)
  0638f40  b 0x638fec
  0638f44  clrldi 11, 8, 32
  0638f48  lfs 0, -32636(30)
  0638f4c  clrldi 9, 10, 32
  0638f50  lwz 10, 0(29)
  0638f54  lhz 0, 14(11)
  0638f58  stfs 0, 80(9)
  0638f5c  extsh 0, 0
  0638f60  cmpwi 7, 0, 0
  0638f64  bt 28, 0x63906c
  0638f68  clrldi 11, 8, 32
  0638f6c  lfs 0, -32636(30)
  0638f70  add 9, 7, 10
  0638f74  lwz 10, 0(29)
  0638f78  clrldi 9, 9, 32
  0638f7c  lhz 0, 14(11)
  0638f80  extsh 0, 0
  0638f84  stfs 0, 84(9)
  0638f88  cmpwi 7, 0, 0
  0638f8c  bt 28, 0x639094
  0638f90  lfs 0, -32636(30)
  0638f94  add 11, 7, 10
  0638f98  lwz 10, 0(29)
  0638f9c  clrldi 8, 8, 32
  0638fa0  clrldi 11, 11, 32
  0638fa4  add 10, 7, 10
  0638fa8  clrldi 10, 10, 32
  0638fac  stfs 0, 88(11)
  0638fb0  lbz 9, 8(8)
  0638fb4  extsb 9, 9
  0638fb8  slwi 9, 9, 7
  0638fbc  stw 9, 36(10)
  0638fc0  lbz 0, 9(8)
  0638fc4  extsb 0, 0
  0638fc8  slwi 0, 0, 7
  0638fcc  stw 0, 32(10)
  0638fd0  addi 4, 3, 1
  0638fd4  mr 3, 27
  0638fd8  extsw 4, 4
  0638fdc  bl 0x61a5b8
  0638fe0  nop
  0638fe4  cmpwi 7, 3, 0
  0638fe8  bt 28, 0x6390a0
  0638fec  lwz 9, 0(29)
  0638ff0  lwz 11, 484(31)
  0638ff4  lfs 0, 480(31)
  0638ff8  mulli 7, 3, 104
  0638ffc  add 9, 7, 9
  0639000  clrldi 9, 9, 32
  0639004  stfs 0, 48(9)
  0639008  stw 11, 56(9)
  063900c  lbz 0, 45(31)
  0639010  stb 0, 8(9)
  0639014  lwz 11, 0(29)
  0639018  lwz 8, 500(31)
  063901c  add 10, 7, 11
  0639020  lfs 0, 48(31)
  0639024  cmpwi 7, 8, 0
  0639028  clrldi 9, 10, 32
  063902c  stfs 0, 12(9)
  0639030  bt 30, 0x638fd0
  0639034  clrldi 9, 8, 32
  0639038  lhz 0, 14(9)
  063903c  rlwinm 0, 0, 0, 17, 17
  0639040  cmpwi 7, 0, 0
  0639044  bt 30, 0x638f44
  0639048  clrldi 11, 8, 32
  063904c  lfs 0, 36(9)
  0639050  clrldi 9, 10, 32
  0639054  lwz 10, 0(29)
  0639058  lhz 0, 14(11)
  063905c  stfs 0, 80(9)
  0639060  extsh 0, 0
  0639064  cmpwi 7, 0, 0
  0639068  bf 28, 0x638f68
  063906c  lfs 0, 40(11)
  0639070  clrldi 11, 8, 32
  0639074  add 9, 7, 10
  0639078  lwz 10, 0(29)
  063907c  clrldi 9, 9, 32
  0639080  lhz 0, 14(11)
  0639084  extsh 0, 0
  0639088  stfs 0, 84(9)
  063908c  cmpwi 7, 0, 0
  0639090  bf 28, 0x638f90
  0639094  lfs 0, 44(11)
  0639098  b 0x638f94
  063909c  lwz 29, -32640(30)
  06390a0  lbz 11, 45(31)
  06390a4  lwz 9, 7888(28)
  06390a8  stb 11, 1715(28)
  06390ac  lwz 0, 40(31)
  06390b0  lfs 0, 48(31)
  06390b4  rldicl 0, 0, 63, 63
  06390b8  stfs 0, 7892(28)
  06390bc  or 9, 9, 0
  06390c0  stw 9, 7888(28)
  06390c4  lwz 0, 40(31)
  06390c8  rldicl 0, 0, 61, 63
  06390cc  stb 0, 1717(28)
  06390d0  lwz 9, 40(31)
  06390d4  rlwinm 9, 9, 0, 28, 28
  06390d8  cmpwi 7, 9, 0
  06390dc  bt 30, 0x6390f0
  06390e0  lwz 9, 1704(28)
  06390e4  lwz 0, 4(9)
  06390e8  oris 0, 0, 4
  06390ec  stw 0, 4(9)
  06390f0  lwz 9, 504(31)
  06390f4  lwz 0, 4(9)
  06390f8  lwz 7, 16(9)
  06390fc  stw 0, 7840(28)
  0639100  lwz 11, 8(9)
  0639104  lwz 0, 24(9)
  0639108  stw 11, 7844(28)
  063910c  lwz 10, 20(9)
  0639110  lwz 11, 28(9)
  0639114  lwz 8, 12(9)
  0639118  stw 7, 7852(28)
  063911c  stw 10, 7856(28)
  0639120  stw 0, 7860(28)
  0639124  stw 11, 7864(28)
  0639128  cmpwi 7, 8, 0
  063912c  lwz 0, 32(9)
  0639130  stw 8, 7848(28)
  0639134  stw 0, 7868(28)
  0639138  bf 30, 0x639144
  063913c  li 0, 1
  0639140  stw 0, 7848(28)
  0639144  lwz 9, 7828(28)
  0639148  clrldi 4, 26, 32
  063914c  lwz 0, 0(29)
  0639150  mulli 9, 9, 104
  0639154  add 9, 9, 0
  0639158  clrldi 9, 9, 32
  063915c  lwz 3, 96(9)
  0639160  bl 0x6299b8
  0639164  nop
  0639168  lwz 4, 508(31)
  063916c  cmpwi 7, 4, 0
  0639170  bt 30, 0x63918c
  0639174  lwz 3, 7828(28)
  0639178  clrldi 4, 4, 32
  063917c  lwz 5, 1704(28)
  0639180  extsw 3, 3
  0639184  bl 0x620290
  0639188  nop
  063918c  lwz 3, 1704(28)
  0639190  bl 0x61f128
  0639194  nop
  0639198  lwz 3, 1704(28)
  063919c  bl 0x61f114
  06391a0  nop
  06391a4  lwz 3, 1704(28)
  06391a8  bl 0x61f100
  06391ac  nop
  06391b0  ld 0, 176(1)
  06391b4  ld 26, 112(1)
  06391b8  ld 27, 120(1)
  06391bc  mtlr 0
  06391c0  ld 28, 128(1)
  06391c4  ld 29, 136(1)
  06391c8  ld 30, 144(1)
  06391cc  ld 31, 152(1)
  06391d0  addi 1, 1, 160
  06391d4  blr

FUN_006391d8:   # 0x6391d8, 0x8c bytes
  06391d8  stdu 1, -144(1)
  06391dc  mflr 0
  06391e0  std 28, 112(1)
  06391e4  std 0, 160(1)
  06391e8  lwz 0, 556(3)
  06391ec  std 29, 120(1)
  06391f0  cmpwi 7, 0, 0
  06391f4  std 31, 136(1)
  06391f8  bt 30, 0x639248
  06391fc  mr 3, 0
  0639200  clrldi 28, 4, 32
  0639204  clrldi 29, 5, 32
  0639208  clrldi 31, 3, 32
  063920c  mr 4, 28
  0639210  mr 3, 31
  0639214  mr 5, 29
  0639218  bl 0x638ea0
  063921c  lwz 3, 556(31)
  0639220  mr 4, 28
  0639224  cmpwi 7, 3, 0
  0639228  mr 5, 29
  063922c  clrldi 3, 3, 32
  0639230  bt 30, 0x639238
  0639234  bl 0x6391d8
  0639238  lwz 0, 560(31)
  063923c  cmpwi 7, 0, 0
  0639240  mr 3, 0
  0639244  bf 30, 0x639208
  0639248  ld 0, 160(1)
  063924c  ld 28, 112(1)
  0639250  ld 29, 120(1)
  0639254  mtlr 0
  0639258  ld 31, 136(1)
  063925c  addi 1, 1, 144
  0639260  blr

FUN_00639264:   # 0x639264, 0xd8 bytes
  0639264  stdu 1, -944(1)
  0639268  mflr 0
  063926c  std 27, 904(1)
  0639270  std 28, 912(1)
  0639274  std 29, 920(1)
  0639278  std 31, 936(1)
  063927c  std 0, 960(1)
  0639280  mr 29, 4
  0639284  mr 27, 5
  0639288  bl 0x633bf8
  063928c  nop
  0639290  cmpwi 7, 3, 0
  0639294  mr 31, 3
  0639298  clrldi 28, 3, 32
  063929c  bt 30, 0x63931c
  06392a0  lbz 0, 581(3)
  06392a4  cmpwi 7, 0, 0
  06392a8  bt 30, 0x63931c
  06392ac  lwz 9, 1404(31)
  06392b0  addi 0, 1, 112
  06392b4  clrldi 3, 29, 32
  06392b8  cmpwi 7, 9, 0
  06392bc  clrldi 29, 0, 32
  06392c0  addi 0, 9, 7712
  06392c4  clrldi 4, 27, 32
  06392c8  mr 6, 29
  06392cc  clrldi 11, 9, 32
  06392d0  clrldi 27, 0, 32
  06392d4  bt 30, 0x63931c
  06392d8  lwz 5, 7900(11)
  06392dc  bl 0x610c74
  06392e0  nop
  06392e4  lwz 9, 1404(31)
  06392e8  addi 4, 1, 168
  06392ec  mr 3, 28
  06392f0  lbz 5, 7801(9)
  06392f4  bl 0x632ec0
  06392f8  nop
  06392fc  mr 3, 28
  0639300  mr 4, 29
  0639304  mr 5, 27
  0639308  bl 0x638ea0
  063930c  mr 3, 28
  0639310  mr 4, 29
  0639314  mr 5, 27
  0639318  bl 0x6391d8
  063931c  ld 0, 960(1)
  0639320  ld 27, 904(1)
  0639324  ld 28, 912(1)
  0639328  mtlr 0
  063932c  ld 29, 920(1)
  0639330  ld 31, 936(1)
  0639334  addi 1, 1, 944
  0639338  blr

FUN_0063933c:   # 0x63933c, 0x2b0 bytes
  063933c  stdu 1, -208(1)
  0639340  mflr 0
  0639344  std 28, 168(1)
  0639348  std 30, 184(1)
  063934c  mr 28, 3
  0639350  lwz 30, -29400(2)
  0639354  mr 3, 5
  0639358  stfd 31, 200(1)
  063935c  std 22, 120(1)
  0639360  fmr 31, 1
  0639364  std 23, 128(1)
  0639368  std 24, 136(1)
  063936c  std 25, 144(1)
  0639370  std 26, 152(1)
  0639374  std 27, 160(1)
  0639378  std 29, 176(1)
  063937c  std 31, 192(1)
  0639380  std 0, 224(1)
  0639384  mr 27, 5
  0639388  mr 29, 6
  063938c  mr 22, 4
  0639390  mr 25, 7
  0639394  mr 23, 8
  0639398  mr 24, 9
  063939c  bl 0x633d70
  06393a0  nop
  06393a4  cmpwi 7, 3, 0
  06393a8  mr 31, 3
  06393ac  mr 26, 28
  06393b0  bt 30, 0x639528
  06393b4  lwz 0, 7896(3)
  06393b8  cmpw 7, 0, 28
  06393bc  bt 30, 0x639418
  06393c0  lwz 4, -32696(30)
  06393c4  li 5, 1759
  06393c8  lwz 3, -32608(30)
  06393cc  li 29, 0
  06393d0  bl 0x61948c
  06393d4  nop
  06393d8  ld 0, 224(1)
  06393dc  mr 3, 29
  06393e0  ld 22, 120(1)
  06393e4  ld 23, 128(1)
  06393e8  mtlr 0
  06393ec  ld 24, 136(1)
  06393f0  ld 25, 144(1)
  06393f4  ld 26, 152(1)
  06393f8  ld 27, 160(1)
  06393fc  ld 28, 168(1)
  0639400  ld 29, 176(1)
  0639404  ld 30, 184(1)
  0639408  ld 31, 192(1)
  063940c  lfd 31, 200(1)
  0639410  addi 1, 1, 208
  0639414  blr
  0639418  lwz 0, 7908(3)
  063941c  lwz 9, 576(28)
  0639420  cmpw 7, 0, 9
  0639424  bt 30, 0x639480
  0639428  lwz 3, -32604(30)
  063942c  li 5, 1765
  0639430  lwz 4, -32696(30)
  0639434  li 29, 0
  0639438  bl 0x61948c
  063943c  nop
  0639440  ld 0, 224(1)
  0639444  ld 22, 120(1)
  0639448  mr 3, 29
  063944c  ld 23, 128(1)
  0639450  ld 24, 136(1)
  0639454  mtlr 0
  0639458  ld 25, 144(1)
  063945c  ld 26, 152(1)
  0639460  ld 27, 160(1)
  0639464  ld 28, 168(1)
  0639468  ld 29, 176(1)
  063946c  ld 30, 184(1)
  0639470  ld 31, 192(1)
  0639474  lfd 31, 200(1)
  0639478  addi 1, 1, 208
  063947c  blr
  0639480  lwz 0, 7900(3)
  0639484  cmpw 7, 0, 22
  0639488  bt 30, 0x6395c0
  063948c  clrldi 4, 29, 32
  0639490  mr 3, 27
  0639494  clrldi 5, 25, 32
  0639498  clrldi 6, 23, 32
  063949c  clrldi 7, 24, 32
  06394a0  bl 0x6364a0
  06394a4  nop
  06394a8  mr 31, 3
  06394ac  clrldi 29, 3, 32
  06394b0  cmpwi 7, 31, 0
  06394b4  bt 30, 0x6393d8
  06394b8  mr 3, 29
  06394bc  bl 0x633d70
  06394c0  nop
  06394c4  cmpwi 7, 3, 0
  06394c8  bt 30, 0x6393d8
  06394cc  lwz 0, 332(1)
  06394d0  lwz 9, 7888(3)
  06394d4  lwz 11, 1704(3)
  06394d8  or 9, 9, 0
  06394dc  lwz 10, 576(28)
  06394e0  lfs 0, 296(28)
  06394e4  stw 9, 7888(3)
  06394e8  lwz 0, 336(28)
  06394ec  lwz 9, 312(28)
  06394f0  stw 0, 336(11)
  06394f4  lwz 0, 340(1)
  06394f8  lfs 13, 352(28)
  06394fc  stw 0, 7904(3)
  0639500  lwz 0, 324(1)
  0639504  stw 22, 7900(3)
  0639508  stw 10, 7908(3)
  063950c  stfs 31, 284(11)
  0639510  stw 0, 304(11)
  0639514  stfs 0, 296(11)
  0639518  stw 9, 312(11)
  063951c  stfs 13, 352(11)
  0639520  stw 26, 7896(3)
  0639524  b 0x6393d8
  0639528  lwz 0, 0(29)
  063952c  clrlwi 0, 0, 31
  0639530  cmpwi 7, 0, 0
  0639534  bf 30, 0x63957c
  0639538  li 29, 0
  063953c  ld 0, 224(1)
  0639540  ld 22, 120(1)
  0639544  mr 3, 29
  0639548  ld 23, 128(1)
  063954c  ld 24, 136(1)
  0639550  mtlr 0
  0639554  ld 25, 144(1)
  0639558  ld 26, 152(1)
  063955c  ld 27, 160(1)
  0639560  ld 28, 168(1)
  0639564  ld 29, 176(1)
  0639568  ld 30, 184(1)
  063956c  ld 31, 192(1)
  0639570  lfd 31, 200(1)
  0639574  addi 1, 1, 208
  0639578  blr
  063957c  clrldi 4, 24, 32
  0639580  li 5, -1
  0639584  clrldi 3, 23, 32
  0639588  bl 0x6363e4
  063958c  nop
  0639590  clrldi 29, 3, 32
  0639594  mr 31, 3
  0639598  mr 3, 29
  063959c  bl 0x633d70
  06395a0  nop
  06395a4  cmpwi 7, 3, 0
  06395a8  bt 30, 0x6394b0
  06395ac  cmpwi 7, 28, 0
  06395b0  bt 30, 0x6394b0
  06395b4  lwz 0, 1704(3)
  06395b8  stw 0, 584(28)
  06395bc  b 0x6394b0
  06395c0  lwz 3, 7836(3)
  06395c4  cmpwi 7, 3, 0
  06395c8  bt 30, 0x639538
  06395cc  clrldi 3, 3, 32
  06395d0  li 4, 1
  06395d4  li 29, 0
  06395d8  bl 0x6084f4
  06395dc  nop
  06395e0  li 0, 0
  06395e4  stw 0, 7836(31)
  06395e8  b 0x6393d8

FUN_006395ec:   # 0x6395ec, 0x1d8 bytes
  06395ec  stdu 1, -224(1)
  06395f0  mflr 0
  06395f4  std 26, 168(1)
  06395f8  clrldi 26, 5, 32
  06395fc  stfd 31, 216(1)
  0639600  std 27, 176(1)
  0639604  fmr 31, 1
  0639608  std 30, 200(1)
  063960c  mr 27, 3
  0639610  lwz 30, -29400(2)
  0639614  mr 3, 26
  0639618  std 19, 112(1)
  063961c  std 20, 120(1)
  0639620  std 21, 128(1)
  0639624  std 22, 136(1)
  0639628  std 23, 144(1)
  063962c  std 24, 152(1)
  0639630  std 25, 160(1)
  0639634  std 31, 208(1)
  0639638  mr 22, 5
  063963c  std 28, 184(1)
  0639640  std 29, 192(1)
  0639644  std 0, 240(1)
  0639648  mr 20, 10
  063964c  mr 24, 7
  0639650  mr 23, 8
  0639654  mr 21, 4
  0639658  mr 25, 6
  063965c  bl 0x633d70
  0639660  nop
  0639664  cmpwi 7, 3, 0
  0639668  mr 31, 3
  063966c  li 5, 1677
  0639670  li 19, 0
  0639674  bt 30, 0x639728
  0639678  lwz 29, 7896(3)
  063967c  li 5, 1683
  0639680  li 19, 0
  0639684  cmpw 7, 29, 27
  0639688  clrldi 28, 29, 32
  063968c  bt 30, 0x6396ec
  0639690  lwz 4, -32696(30)
  0639694  lwz 3, -32596(30)
  0639698  bl 0x61948c
  063969c  nop
  06396a0  ld 0, 240(1)
  06396a4  clrldi 3, 19, 32
  06396a8  ld 20, 120(1)
  06396ac  ld 19, 112(1)
  06396b0  mtlr 0
  06396b4  ld 21, 128(1)
  06396b8  ld 22, 136(1)
  06396bc  ld 23, 144(1)
  06396c0  ld 24, 152(1)
  06396c4  ld 25, 160(1)
  06396c8  ld 26, 168(1)
  06396cc  ld 27, 176(1)
  06396d0  ld 28, 184(1)
  06396d4  ld 29, 192(1)
  06396d8  ld 30, 200(1)
  06396dc  ld 31, 208(1)
  06396e0  lfd 31, 216(1)
  06396e4  addi 1, 1, 224
  06396e8  blr
  06396ec  lwz 9, 7908(31)
  06396f0  clrldi 4, 25, 32
  06396f4  lwz 0, 576(28)
  06396f8  clrldi 5, 24, 32
  06396fc  clrldi 6, 23, 32
  0639700  cmpw 7, 9, 0
  0639704  mr 3, 26
  0639708  li 19, 0
  063970c  bt 30, 0x63973c
  0639710  lwz 4, -32696(30)
  0639714  li 5, 1689
  0639718  lwz 3, -32592(30)
  063971c  bl 0x61948c
  0639720  nop
  0639724  b 0x6396a0
  0639728  lwz 4, -32696(30)
  063972c  lwz 3, -32600(30)
  0639730  bl 0x61948c
  0639734  nop
  0639738  b 0x6396a0
  063973c  bl 0x6362a4
  0639740  nop
  0639744  li 5, 1697
  0639748  cmpw 7, 22, 3
  063974c  mr 19, 3
  0639750  bt 30, 0x6396a0
  0639754  lwz 4, -32696(30)
  0639758  lwz 3, -32588(30)
  063975c  bl 0x61948c
  0639760  nop
  0639764  lwz 0, 340(1)
  0639768  lwz 9, 7888(31)
  063976c  lwz 10, 1704(31)
  0639770  or 9, 9, 0
  0639774  lwz 8, 576(28)
  0639778  clrldi 11, 10, 32
  063977c  lfs 0, 296(28)
  0639780  stw 9, 7888(31)
  0639784  lwz 0, 336(28)
  0639788  lwz 9, 312(28)
  063978c  lfs 13, 352(28)
  0639790  stw 0, 336(11)
  0639794  lwz 0, 348(1)
  0639798  stw 21, 7900(31)
  063979c  stw 10, 584(28)
  06397a0  stw 0, 7904(31)
  06397a4  stw 8, 7908(31)
  06397a8  stfs 31, 284(11)
  06397ac  stw 20, 304(11)
  06397b0  stfs 0, 296(11)
  06397b4  stw 9, 312(11)
  06397b8  stfs 13, 352(11)
  06397bc  stw 29, 7896(31)
  06397c0  b 0x6396a0

FUN_006397c4:   # 0x6397c4, 0x264 bytes
  06397c4  stdu 1, -272(1)
  06397c8  mflr 0
  06397cc  std 21, 176(1)
  06397d0  std 24, 200(1)
  06397d4  std 27, 224(1)
  06397d8  std 30, 248(1)
  06397dc  mr 27, 3
  06397e0  lwz 24, 388(1)
  06397e4  mr 3, 5
  06397e8  lwz 30, -29400(2)
  06397ec  mr 21, 4
  06397f0  stfd 31, 264(1)
  06397f4  mr 4, 6
  06397f8  fmr 31, 1
  06397fc  mr 5, 10
  0639800  std 20, 168(1)
  0639804  std 22, 184(1)
  0639808  std 23, 192(1)
  063980c  std 26, 216(1)
  0639810  std 28, 232(1)
  0639814  std 31, 256(1)
  0639818  std 25, 208(1)
  063981c  std 29, 240(1)
  0639820  std 0, 288(1)
  0639824  mr 20, 8
  0639828  lwz 22, 396(1)
  063982c  mr 23, 9
  0639830  bl 0x6363e4
  0639834  nop
  0639838  cmpwi 7, 24, 0
  063983c  mr 31, 3
  0639840  mr 26, 27
  0639844  clrldi 28, 3, 32
  0639848  bt 30, 0x6398a4
  063984c  clrldi 29, 24, 32
  0639850  li 4, 4
  0639854  mr 3, 29
  0639858  bl 0x610494
  063985c  nop
  0639860  li 4, 10
  0639864  mr 25, 3
  0639868  mr 3, 29
  063986c  bl 0x610494
  0639870  nop
  0639874  cmpwi 7, 3, 0
  0639878  bt 30, 0x6399bc
  063987c  addi 29, 1, 112
  0639880  clrldi 3, 3, 32
  0639884  clrldi 29, 29, 32
  0639888  mr 4, 29
  063988c  bl 0x6102b0
  0639890  nop
  0639894  mr 4, 29
  0639898  mr 3, 28
  063989c  bl 0x635400
  06398a0  nop
  06398a4  mr 3, 28
  06398a8  bl 0x633d70
  06398ac  nop
  06398b0  cmpwi 7, 3, 0
  06398b4  mr 29, 3
  06398b8  bt 30, 0x639974
  06398bc  cmpwi 7, 22, 0
  06398c0  bt 30, 0x639910
  06398c4  clrldi 11, 22, 32
  06398c8  clrldi 3, 26, 32
  06398cc  lbz 0, 9(11)
  06398d0  extsb 0, 0
  06398d4  slwi 0, 0, 7
  06398d8  stb 0, 7761(29)
  06398dc  lbz 9, 8(11)
  06398e0  extsb 9, 9
  06398e4  slwi 9, 9, 7
  06398e8  stb 9, 7760(29)
  06398ec  lbz 4, 1(11)
  06398f0  extsb 4, 4
  06398f4  bl 0x610bb4
  06398f8  nop
  06398fc  li 4, 0
  0639900  extsb 3, 3
  0639904  bl 0x60fabc
  0639908  nop
  063990c  stfs 1, 7756(29)
  0639910  lwz 0, 7888(29)
  0639914  cmpwi 7, 26, 0
  0639918  stw 24, 7904(29)
  063991c  or 0, 0, 23
  0639920  stw 0, 7888(29)
  0639924  bt 30, 0x6399f4
  0639928  lwz 9, 1704(29)
  063992c  mr 3, 28
  0639930  lwz 11, 576(27)
  0639934  lwz 10, 312(27)
  0639938  lwz 0, 336(27)
  063993c  lfs 0, 296(27)
  0639940  lfs 13, 352(27)
  0639944  stw 0, 336(9)
  0639948  stw 21, 7900(29)
  063994c  stw 11, 7908(29)
  0639950  stfs 31, 284(9)
  0639954  stw 20, 304(9)
  0639958  stfs 0, 296(9)
  063995c  stw 10, 312(9)
  0639960  stfs 13, 352(9)
  0639964  stw 26, 7896(29)
  0639968  bl 0x61a790
  063996c  nop
  0639970  stw 3, 584(27)
  0639974  ld 0, 288(1)
  0639978  mr 3, 28
  063997c  ld 20, 168(1)
  0639980  ld 21, 176(1)
  0639984  mtlr 0
  0639988  ld 22, 184(1)
  063998c  ld 23, 192(1)
  0639990  ld 24, 200(1)
  0639994  ld 25, 208(1)
  0639998  ld 26, 216(1)
  063999c  ld 27, 224(1)
  06399a0  ld 28, 232(1)
  06399a4  ld 29, 240(1)
  06399a8  ld 30, 248(1)
  06399ac  ld 31, 256(1)
  06399b0  lfd 31, 264(1)
  06399b4  addi 1, 1, 272
  06399b8  blr
  06399bc  cmpwi 7, 25, 0
  06399c0  clrldi 28, 31, 32
  06399c4  bt 30, 0x6398a4
  06399c8  addi 29, 1, 112
  06399cc  clrldi 3, 25, 32
  06399d0  clrldi 29, 29, 32
  06399d4  mr 4, 29
  06399d8  bl 0x610224
  06399dc  nop
  06399e0  mr 4, 29
  06399e4  mr 3, 28
  06399e8  bl 0x635400
  06399ec  nop
  06399f0  b 0x6398a4
  06399f4  lwz 9, 1704(29)
  06399f8  li 0, 0
  06399fc  lfs 0, -32636(30)
  0639a00  stw 21, 7900(29)
  0639a04  stw 26, 7896(29)
  0639a08  stw 26, 7908(29)
  0639a0c  stfs 31, 284(9)
  0639a10  stw 20, 304(9)
  0639a14  stfs 0, 296(9)
  0639a18  stw 0, 352(9)
  0639a1c  stw 26, 336(9)
  0639a20  stw 26, 312(9)
  0639a24  b 0x639974

FUN_00639a28:   # 0x639a28, 0x258 bytes
  0639a28  stdu 1, -192(1)
  0639a2c  mflr 0
  0639a30  std 31, 184(1)
  0639a34  std 0, 208(1)
  0639a38  lwz 0, 476(3)
  0639a3c  li 31, 0
  0639a40  std 30, 176(1)
  0639a44  rlwinm 0, 0, 0, 28, 30
  0639a48  lwz 30, -29400(2)
  0639a4c  mr 12, 3
  0639a50  cmpwi 7, 0, 2
  0639a54  stw 31, 32(3)
  0639a58  bt 30, 0x639b40
  0639a5c  cmpwi 7, 0, 6
  0639a60  bt 30, 0x639ba0
  0639a64  cmpwi 7, 0, 8
  0639a68  bt 30, 0x639ac8
  0639a6c  lwz 10, 496(12)
  0639a70  addi 6, 3, 40
  0639a74  addi 5, 12, 8
  0639a78  lfs 1, 488(3)
  0639a7c  lwz 4, 4(12)
  0639a80  clrldi 6, 6, 32
  0639a84  lwz 3, 0(3)
  0639a88  clrldi 5, 5, 32
  0639a8c  lwz 8, 492(12)
  0639a90  extsw 10, 10
  0639a94  lwz 9, 472(12)
  0639a98  lwz 11, 500(12)
  0639a9c  lwz 0, 508(12)
  0639aa0  std 11, 120(1)
  0639aa4  std 0, 112(1)
  0639aa8  bl 0x6397c4
  0639aac  ld 0, 208(1)
  0639ab0  clrldi 3, 3, 32
  0639ab4  ld 30, 176(1)
  0639ab8  ld 31, 184(1)
  0639abc  mtlr 0
  0639ac0  addi 1, 1, 192
  0639ac4  blr
  0639ac8  lwz 6, 504(3)
  0639acc  cmpwi 7, 6, 0
  0639ad0  bt 30, 0x639c00
  0639ad4  lwz 11, 512(3)
  0639ad8  addi 7, 6, 16
  0639adc  addi 9, 3, 40
  0639ae0  lfs 1, 488(3)
  0639ae4  addi 8, 12, 8
  0639ae8  lwz 0, 492(12)
  0639aec  addi 6, 6, 4
  0639af0  lwz 3, 0(3)
  0639af4  lwz 4, 4(12)
  0639af8  clrldi 7, 7, 32
  0639afc  lwz 5, 0(11)
  0639b00  clrldi 6, 6, 32
  0639b04  lwz 10, 508(12)
  0639b08  clrldi 8, 8, 32
  0639b0c  lwz 11, 472(12)
  0639b10  clrldi 9, 9, 32
  0639b14  std 0, 112(1)
  0639b18  std 11, 120(1)
  0639b1c  std 10, 128(1)
  0639b20  bl 0x63933c
  0639b24  ld 0, 208(1)
  0639b28  clrldi 3, 3, 32
  0639b2c  ld 30, 176(1)
  0639b30  ld 31, 184(1)
  0639b34  mtlr 0
  0639b38  addi 1, 1, 192
  0639b3c  blr
  0639b40  lwz 9, 512(3)
  0639b44  addi 8, 3, 40
  0639b48  addi 7, 12, 8
  0639b4c  lfs 1, 488(3)
  0639b50  lwz 0, 472(12)
  0639b54  clrldi 8, 8, 32
  0639b58  lwz 3, 0(3)
  0639b5c  clrldi 7, 7, 32
  0639b60  lwz 4, 4(12)
  0639b64  li 6, 0
  0639b68  lwz 5, 0(9)
  0639b6c  lwz 10, 492(12)
  0639b70  lwz 9, 508(12)
  0639b74  std 0, 112(1)
  0639b78  std 9, 120(1)
  0639b7c  bl 0x6395ec
  0639b80  ld 0, 208(1)
  0639b84  li 3, 0
  0639b88  ld 30, 176(1)
  0639b8c  clrldi 3, 3, 32
  0639b90  ld 31, 184(1)
  0639b94  mtlr 0
  0639b98  addi 1, 1, 192
  0639b9c  blr
  0639ba0  lwz 9, 512(3)
  0639ba4  addi 8, 3, 40
  0639ba8  addi 7, 12, 8
  0639bac  lfs 1, 488(3)
  0639bb0  lwz 0, 472(12)
  0639bb4  clrldi 8, 8, 32
  0639bb8  lwz 3, 0(3)
  0639bbc  clrldi 7, 7, 32
  0639bc0  lwz 4, 4(12)
  0639bc4  li 6, 7
  0639bc8  lwz 5, 0(9)
  0639bcc  lwz 10, 492(12)
  0639bd0  lwz 9, 508(12)
  0639bd4  std 0, 112(1)
  0639bd8  std 9, 120(1)
  0639bdc  bl 0x6395ec
  0639be0  ld 0, 208(1)
  0639be4  li 3, 0
  0639be8  ld 30, 176(1)
  0639bec  clrldi 3, 3, 32
  0639bf0  ld 31, 184(1)
  0639bf4  mtlr 0
  0639bf8  addi 1, 1, 192
  0639bfc  blr
  0639c00  lwz 11, 512(3)
  0639c04  li 0, 3
  0639c08  li 9, 2
  0639c0c  lfs 1, 488(3)
  0639c10  stw 0, 144(1)
  0639c14  li 0, 1
  0639c18  lwz 4, 4(12)
  0639c1c  stw 9, 156(1)
  0639c20  addi 8, 12, 8
  0639c24  lwz 10, 508(12)
  0639c28  addi 9, 3, 40
  0639c2c  lwz 3, 0(3)
  0639c30  stw 6, 148(1)
  0639c34  stw 0, 152(1)
  0639c38  lwz 5, 0(11)
  0639c3c  clrldi 8, 8, 32
  0639c40  lwz 0, 492(12)
  0639c44  clrldi 9, 9, 32
  0639c48  lwz 11, 472(12)
  0639c4c  addi 6, 1, 144
  0639c50  addi 7, 1, 156
  0639c54  lfs 13, -32584(30)
  0639c58  lfs 0, -32636(30)
  0639c5c  stfs 0, 164(1)
  0639c60  stfs 13, 168(1)
  0639c64  stw 31, 172(1)
  0639c68  std 0, 112(1)
  0639c6c  std 11, 120(1)
  0639c70  std 10, 128(1)
  0639c74  stw 31, 160(1)
  0639c78  bl 0x63933c
  0639c7c  b 0x639aac

FUN_00639c80:   # 0x639c80, 0xa4 bytes
  0639c80  std 30, -16(1)
  0639c84  lwz 30, -29396(2)
  0639c88  lwz 9, -32764(30)
  0639c8c  lwz 11, -32768(30)
  0639c90  lwz 7, 0(9)
  0639c94  lwz 3, 0(11)
  0639c98  cmpwi 7, 7, 0
  0639c9c  bt 30, 0x639cf0
  0639ca0  lwz 6, -32760(30)
  0639ca4  li 10, 1
  0639ca8  lwz 8, 0(6)
  0639cac  clrlwi 0, 8, 31
  0639cb0  cmpwi 7, 0, 0
  0639cb4  bt 30, 0x639d00
  0639cb8  lwz 9, -32752(30)
  0639cbc  clrldi 7, 7, 32
  0639cc0  li 11, 0
  0639cc4  mtctr 7
  0639cc8  lwz 9, 0(9)
  0639ccc  b 0x639ce4
  0639cd0  li 0, 1
  0639cd4  slw 10, 0, 11
  0639cd8  and 0, 10, 8
  0639cdc  cmpwi 0, 0
  0639ce0  bt 2, 0x639d00
  0639ce4  add 3, 3, 9
  0639ce8  addi 11, 11, 1
  0639cec  bdnz 0x639cd0
  0639cf0  li 3, 0
  0639cf4  ld 30, -16(1)
  0639cf8  clrldi 3, 3, 32
  0639cfc  blr
  0639d00  lwz 11, -32756(30)
  0639d04  or 0, 8, 10
  0639d08  clrldi 3, 3, 32
  0639d0c  ld 30, -16(1)
  0639d10  stw 0, 0(6)
  0639d14  lwz 9, 92(11)
  0639d18  addi 9, 9, 1
  0639d1c  stw 9, 92(11)
  0639d20  blr

FUN_00639d24:   # 0x639d24, 0x94 bytes
  0639d24  cmpdi 3, 0
  0639d28  mflr 0
  0639d2c  stdu 1, -128(1)
  0639d30  std 30, 112(1)
  0639d34  std 31, 120(1)
  0639d38  std 0, 144(1)
  0639d3c  lwz 30, -29396(2)
  0639d40  mr 31, 3
  0639d44  bt 2, 0x639da0
  0639d48  lwz 0, 8(3)
  0639d4c  cmpwi 7, 0, 0
  0639d50  bt 30, 0x639da0
  0639d54  clrldi 9, 0, 32
  0639d58  lwz 0, 4(3)
  0639d5c  cmpwi 7, 0, -1
  0639d60  clrldi 3, 0, 32
  0639d64  bt 30, 0x639da0
  0639d68  lwz 9, 16(9)
  0639d6c  lwz 4, 12(31)
  0639d70  lwz 0, 0(9)
  0639d74  std 2, 40(1)
  0639d78  mtctr 0
  0639d7c  lwz 2, 4(9)
  0639d80  bctrl
  0639d84  ld 2, 40(1)
  0639d88  lwz 11, -32756(30)
  0639d8c  li 0, -1
  0639d90  stw 0, 4(31)
  0639d94  lwz 9, 16(11)
  0639d98  addi 9, 9, 1
  0639d9c  stw 9, 16(11)
  0639da0  ld 0, 144(1)
  0639da4  ld 30, 112(1)
  0639da8  ld 31, 120(1)
  0639dac  mtlr 0
  0639db0  addi 1, 1, 128
  0639db4  blr

FUN_00639db8:   # 0x639db8, 0x108 bytes
  0639db8  stdu 1, -176(1)
  0639dbc  mflr 0
  0639dc0  std 28, 144(1)
  0639dc4  std 0, 192(1)
  0639dc8  lwz 11, 1404(3)
  0639dcc  li 3, 0
  0639dd0  std 30, 160(1)
  0639dd4  addi 0, 11, 1720
  0639dd8  lwz 30, -29396(2)
  0639ddc  std 24, 112(1)
  0639de0  clrldi 28, 0, 32
  0639de4  std 25, 120(1)
  0639de8  std 26, 128(1)
  0639dec  std 27, 136(1)
  0639df0  std 29, 152(1)
  0639df4  std 31, 168(1)
  0639df8  lbz 9, 6081(28)
  0639dfc  lwz 0, 6044(28)
  0639e00  cmpwi 7, 9, 0
  0639e04  bt 30, 0x639e8c
  0639e08  addi 29, 11, 7624
  0639e0c  lwz 25, -32756(30)
  0639e10  clrldi 26, 0, 32
  0639e14  li 27, 0
  0639e18  li 24, 1
  0639e1c  b 0x639e3c
  0639e20  lwz 9, 28(25)
  0639e24  addi 9, 9, 1
  0639e28  stw 9, 28(25)
  0639e2c  stb 24, 1716(31)
  0639e30  lbz 0, 6081(28)
  0639e34  cmplw 7, 0, 27
  0639e38  bf 29, 0x639e8c
  0639e3c  clrldi 9, 29, 32
  0639e40  lwz 11, 8(26)
  0639e44  lwz 3, 5968(28)
  0639e48  addi 27, 27, 1
  0639e4c  lwz 4, 12(26)
  0639e50  addi 29, 29, 4
  0639e54  lwz 10, 28(11)
  0639e58  lwz 31, 0(9)
  0639e5c  lwz 0, 0(10)
  0639e60  lwz 5, 4(31)
  0639e64  std 2, 40(1)
  0639e68  mtctr 0
  0639e6c  extsw 5, 5
  0639e70  lwz 2, 4(10)
  0639e74  bctrl
  0639e78  ld 2, 40(1)
  0639e7c  cmpwi 7, 3, 0
  0639e80  bt 30, 0x639e20
  0639e84  li 0, 0
  0639e88  stb 0, 1716(31)
  0639e8c  ld 0, 192(1)
  0639e90  extsw 3, 3
  0639e94  ld 24, 112(1)
  0639e98  ld 25, 120(1)
  0639e9c  mtlr 0
  0639ea0  ld 26, 128(1)
  0639ea4  ld 27, 136(1)
  0639ea8  ld 28, 144(1)
  0639eac  ld 29, 152(1)
  0639eb0  ld 30, 160(1)
  0639eb4  ld 31, 168(1)
  0639eb8  addi 1, 1, 176
  0639ebc  blr

FUN_00639ec0:   # 0x639ec0, 0xb0 bytes
  0639ec0  ld 9, 5984(3)
  0639ec4  ld 0, 5976(3)
  0639ec8  std 30, -16(1)
  0639ecc  sub. 0, 0, 9
  0639ed0  lwz 30, -29396(2)
  0639ed4  clrldi 9, 0, 63
  0639ed8  rldicl 11, 0, 63, 1
  0639edc  bt 0, 0x639f24
  0639ee0  std 0, -32(1)
  0639ee4  lwz 0, 88(4)
  0639ee8  addi 9, 1, -48
  0639eec  lfd 0, -32(1)
  0639ef0  std 0, -32(1)
  0639ef4  fcfid 12, 0
  0639ef8  lfd 11, -32(1)
  0639efc  fcfid 0, 11
  0639f00  lfs 13, -32748(30)
  0639f04  ld 30, -16(1)
  0639f08  fdiv 0, 12, 0
  0639f0c  fmul 0, 0, 13
  0639f10  fctiwz 0, 0
  0639f14  stfiwx 0, 0, 9
  0639f18  lwz 3, -48(1)
  0639f1c  extsw 3, 3
  0639f20  blr
  0639f24  or 9, 9, 11
  0639f28  lwz 0, 88(4)
  0639f2c  lfs 13, -32748(30)
  0639f30  std 9, -32(1)
  0639f34  lfd 11, -32(1)
  0639f38  addi 9, 1, -48
  0639f3c  fcfid 12, 11
  0639f40  std 0, -32(1)
  0639f44  lfd 11, -32(1)
  0639f48  fcfid 0, 11
  0639f4c  ld 30, -16(1)
  0639f50  fadd 12, 12, 12
  0639f54  fdiv 0, 12, 0
  0639f58  fmul 0, 0, 13
  0639f5c  fctiwz 0, 0
  0639f60  stfiwx 0, 0, 9
  0639f64  lwz 3, -48(1)
  0639f68  extsw 3, 3
  0639f6c  blr

FUN_00639f70:   # 0x639f70, 0x90 bytes
  0639f70  stdu 1, -144(1)
  0639f74  mflr 0
  0639f78  std 29, 120(1)
  0639f7c  std 0, 160(1)
  0639f80  lwz 9, 1404(3)
  0639f84  mr 29, 3
  0639f88  std 31, 136(1)
  0639f8c  lwz 10, 7764(9)
  0639f90  lwz 5, 4(9)
  0639f94  lwz 3, 7688(9)
  0639f98  extsw 5, 5
  0639f9c  lwz 9, 8(10)
  0639fa0  lwz 4, 12(10)
  0639fa4  lwz 11, 24(9)
  0639fa8  lwz 0, 0(11)
  0639fac  std 2, 40(1)
  0639fb0  mtctr 0
  0639fb4  lwz 2, 4(11)
  0639fb8  bctrl
  0639fbc  ld 2, 40(1)
  0639fc0  mr 31, 3
  0639fc4  mr 3, 29
  0639fc8  cmpwi 7, 31, 1
  0639fcc  bt 30, 0x639fec
  0639fd0  ld 0, 160(1)
  0639fd4  extsw 3, 31
  0639fd8  ld 29, 120(1)
  0639fdc  ld 31, 136(1)
  0639fe0  mtlr 0
  0639fe4  addi 1, 1, 144
  0639fe8  blr
  0639fec  bl 0x639db8
  0639ff0  cmpwi 7, 3, 0
  0639ff4  bf 28, 0x639fd0
  0639ff8  mr 31, 3
  0639ffc  b 0x639fd0

FUN_0063a000:   # 0x63a000, 0x44 bytes
  063a000  lwz 9, 6044(3)
  063a004  lwz 10, 6076(3)
  063a008  lbz 0, 21(9)
  063a00c  lbz 8, 22(9)
  063a010  lwz 7, 96(9)
  063a014  lwz 3, 84(9)
  063a018  lwz 11, 92(9)
  063a01c  mullw 0, 0, 8
  063a020  mullw 10, 10, 11
  063a024  mullw 0, 0, 7
  063a028  divwu 3, 3, 0
  063a02c  sub 3, 3, 10
  063a030  not 0, 3
  063a034  srawi 0, 0, 31
  063a038  and 3, 3, 0
  063a03c  clrldi 3, 3, 32
  063a040  blr

FUN_0063a044:   # 0x63a044, 0x8 bytes
  063a044  stw 4, 6064(3)
  063a048  blr

FUN_0063a04c:   # 0x63a04c, 0x84 bytes
  063a04c  lbz 0, 6081(3)
  063a050  mr 11, 3
  063a054  cmpwi 7, 0, 0
  063a058  bt 30, 0x63a0c4
  063a05c  lwz 3, 5904(3)
  063a060  clrldi 9, 3, 32
  063a064  lwz 9, 1708(9)
  063a068  cmpwi 7, 9, 0
  063a06c  bt 30, 0x63a0b8
  063a070  clrldi 9, 9, 32
  063a074  clrldi 0, 0, 32
  063a078  addi 11, 11, 5908
  063a07c  mtctr 0
  063a080  lwz 0, 0(9)
  063a084  cmpw 7, 0, 3
  063a088  bf 30, 0x63a0b8
  063a08c  bdz 0x63a0c4
  063a090  lwz 10, 0(11)
  063a094  addi 11, 11, 4
  063a098  clrldi 9, 10, 32
  063a09c  lwz 0, 1708(9)
  063a0a0  cmpwi 7, 0, 0
  063a0a4  clrldi 9, 0, 32
  063a0a8  bt 30, 0x63a0b8
  063a0ac  lwz 0, 0(9)
  063a0b0  cmpw 7, 0, 10
  063a0b4  bt 30, 0x63a08c
  063a0b8  li 3, 0
  063a0bc  clrldi 3, 3, 63
  063a0c0  blr
  063a0c4  li 3, 1
  063a0c8  clrldi 3, 3, 63
  063a0cc  blr

FUN_0063a0d0:   # 0x63a0d0, 0x58 bytes
  063a0d0  lbz 0, 6081(3)
  063a0d4  cmpwi 7, 0, 0
  063a0d8  bt 30, 0x63a11c
  063a0dc  lwz 9, 5904(3)
  063a0e0  clrldi 0, 0, 32
  063a0e4  addi 11, 3, 5908
  063a0e8  mtctr 0
  063a0ec  lwz 0, 7828(9)
  063a0f0  cmpwi 7, 0, -1
  063a0f4  bf 30, 0x63a110
  063a0f8  bdz 0x63a11c
  063a0fc  lwz 9, 0(11)
  063a100  addi 11, 11, 4
  063a104  lwz 0, 7828(9)
  063a108  cmpwi 7, 0, -1
  063a10c  bt 30, 0x63a0f8
  063a110  li 3, 0
  063a114  clrldi 3, 3, 63
  063a118  blr
  063a11c  li 3, 1
  063a120  clrldi 3, 3, 63
  063a124  blr

FUN_0063a128:   # 0x63a128, 0xc bytes
  063a128  li 0, 1
  063a12c  stb 0, 1418(3)
  063a130  blr

FUN_0063a134:   # 0x63a134, 0x18 bytes
  063a134  mr 9, 3
  063a138  li 4, 11
  063a13c  lwz 0, 6064(9)
  063a140  cmpwi 7, 0, 10
  063a144  bclr 4, 30
  063a148  b 0x63a044

FUN_0063a14c:   # 0x63a14c, 0xbc bytes
  063a14c  stdu 1, -144(1)
  063a150  mflr 0
  063a154  std 29, 120(1)
  063a158  std 0, 160(1)
  063a15c  lwz 0, 32(3)
  063a160  li 29, 16384
  063a164  std 30, 128(1)
  063a168  cmpwi 7, 0, 0
  063a16c  lwz 30, -29396(2)
  063a170  std 31, 136(1)
  063a174  std 28, 112(1)
  063a178  mr 31, 3
  063a17c  bt 30, 0x63a184
  063a180  mr 29, 0
  063a184  lwz 28, -32740(30)
  063a188  extsw 29, 29
  063a18c  lwz 4, 4(31)
  063a190  lwz 5, 8(31)
  063a194  mr 6, 29
  063a198  extsw 4, 4
  063a19c  lwz 7, -32736(30)
  063a1a0  extsw 5, 5
  063a1a4  mr 3, 28
  063a1a8  bl 0x63fb20
  063a1ac  nop
  063a1b0  mr 6, 29
  063a1b4  cmpwi 7, 3, 0
  063a1b8  mr 0, 3
  063a1bc  addi 3, 28, 48
  063a1c0  bf 30, 0x63a1e4
  063a1c4  lwz 5, 8(31)
  063a1c8  lwz 4, 4(31)
  063a1cc  extsw 5, 5
  063a1d0  lwz 7, -32732(30)
  063a1d4  extsw 4, 4
  063a1d8  bl 0x63fb20
  063a1dc  nop
  063a1e0  mr 0, 3
  063a1e4  extsw 3, 0
  063a1e8  ld 0, 160(1)
  063a1ec  ld 28, 112(1)
  063a1f0  ld 29, 120(1)
  063a1f4  mtlr 0
  063a1f8  ld 30, 128(1)
  063a1fc  ld 31, 136(1)
  063a200  addi 1, 1, 144
  063a204  blr

FUN_0063a208:   # 0x63a208, 0x70 bytes
  063a208  stdu 1, -128(1)
  063a20c  mflr 0
  063a210  std 30, 112(1)
  063a214  std 0, 144(1)
  063a218  lwz 10, 92(3)
  063a21c  li 5, 289
  063a220  lwz 30, -29396(2)
  063a224  li 8, 0
  063a228  lwz 0, 96(3)
  063a22c  clrldi 6, 10, 32
  063a230  mullw 0, 10, 0
  063a234  lwz 11, -32756(30)
  063a238  lwz 9, 164(11)
  063a23c  cmplw 7, 0, 9
  063a240  bt- 29, 0x63a25c
  063a244  ld 0, 144(1)
  063a248  extsw 3, 8
  063a24c  ld 30, 112(1)
  063a250  addi 1, 1, 128
  063a254  mtlr 0
  063a258  blr
  063a25c  lwz 7, 400(3)
  063a260  lwz 4, -32724(30)
  063a264  lwz 3, -32728(30)
  063a268  bl 0x61948c
  063a26c  nop
  063a270  li 8, -109
  063a274  b 0x63a244

FUN_0063a278:   # 0x63a278, 0x118 bytes
  063a278  stdu 1, -128(1)
  063a27c  mflr 0
  063a280  std 30, 112(1)
  063a284  lwz 30, -29396(2)
  063a288  std 0, 144(1)
  063a28c  lwz 9, -32764(30)
  063a290  lwz 11, -32768(30)
  063a294  lwz 10, 0(9)
  063a298  lwz 11, 0(11)
  063a29c  cmpwi 7, 10, 0
  063a2a0  bt 30, 0x63a2e8
  063a2a4  cmpw 7, 11, 3
  063a2a8  li 9, 1
  063a2ac  li 8, 1
  063a2b0  bt 30, 0x63a328
  063a2b4  lwz 9, -32752(30)
  063a2b8  clrldi 10, 10, 32
  063a2bc  mtctr 10
  063a2c0  li 10, 0
  063a2c4  lwz 9, 0(9)
  063a2c8  add 11, 11, 9
  063a2cc  b 0x63a2d8
  063a2d0  cmpw 7, 0, 3
  063a2d4  bt 30, 0x63a31c
  063a2d8  add 11, 11, 9
  063a2dc  addi 10, 10, 1
  063a2e0  sub 0, 11, 9
  063a2e4  bdnz 0x63a2d0
  063a2e8  clrldi 6, 3, 32
  063a2ec  lwz 4, -32724(30)
  063a2f0  lwz 3, -32716(30)
  063a2f4  li 5, 104
  063a2f8  bl 0x61948c
  063a2fc  nop
  063a300  li 3, -107
  063a304  ld 0, 144(1)
  063a308  extsw 3, 3
  063a30c  ld 30, 112(1)
  063a310  addi 1, 1, 128
  063a314  mtlr 0
  063a318  blr
  063a31c  li 0, 1
  063a320  slw 9, 0, 10
  063a324  mr 8, 9
  063a328  lwz 10, -32760(30)
  063a32c  lwz 0, 0(10)
  063a330  and 11, 0, 8
  063a334  cmpwi 11, 0
  063a338  bt- 2, 0x63a370
  063a33c  lwz 11, -32756(30)
  063a340  andc 0, 0, 9
  063a344  li 3, 0
  063a348  ld 30, 112(1)
  063a34c  stw 0, 0(10)
  063a350  ld 0, 144(1)
  063a354  extsw 3, 3
  063a358  addi 1, 1, 128
  063a35c  lwz 9, 96(11)
  063a360  mtlr 0
  063a364  addi 9, 9, 1
  063a368  stw 9, 96(11)
  063a36c  blr
  063a370  clrldi 6, 3, 32
  063a374  lwz 4, -32724(30)
  063a378  lwz 3, -32720(30)
  063a37c  li 5, 91
  063a380  bl 0x61948c
  063a384  nop
  063a388  li 3, -107
  063a38c  b 0x63a304

FUN_0063a390:   # 0x63a390, 0x5c bytes
  063a390  stdu 1, -128(1)
  063a394  mflr 0
  063a398  std 31, 112(1)
  063a39c  std 0, 144(1)
  063a3a0  lwz 0, 120(3)
  063a3a4  mr 31, 3
  063a3a8  li 11, 0
  063a3ac  cmpwi 7, 0, 0
  063a3b0  clrldi 3, 0, 32
  063a3b4  bt 30, 0x63a3d4
  063a3b8  bl 0x63a278
  063a3bc  lbz 0, 17(31)
  063a3c0  li 9, 0
  063a3c4  rlwinm 0, 0, 0, 0, 30
  063a3c8  mr 11, 3
  063a3cc  stw 9, 120(31)
  063a3d0  stb 0, 17(31)
  063a3d4  ld 0, 144(1)
  063a3d8  extsw 3, 11
  063a3dc  ld 31, 112(1)
  063a3e0  addi 1, 1, 128
  063a3e4  mtlr 0
  063a3e8  blr

FUN_0063a3ec:   # 0x63a3ec, 0x18 bytes
  063a3ec  mr 0, 3
  063a3f0  li 3, 0
  063a3f4  cmpwi 7, 0, 0
  063a3f8  bclr 12, 30
  063a3fc  clrldi 3, 0, 32
  063a400  b 0x63a390

FUN_0063a404:   # 0x63a404, 0x7c bytes
  063a404  stdu 1, -128(1)
  063a408  mflr 0
  063a40c  std 31, 112(1)
  063a410  std 0, 144(1)
  063a414  mr 31, 3
  063a418  bl 0x637094
  063a41c  nop
  063a420  cmpwi 7, 3, 0
  063a424  li 3, 0
  063a428  bt 30, 0x63a438
  063a42c  lwz 0, 6064(31)
  063a430  cmpwi 7, 0, 11
  063a434  bt 30, 0x63a450
  063a438  ld 0, 144(1)
  063a43c  clrldi 3, 3, 63
  063a440  ld 31, 112(1)
  063a444  addi 1, 1, 128
  063a448  mtlr 0
  063a44c  blr
  063a450  lwz 0, 6060(31)
  063a454  ld 31, 112(1)
  063a458  srawi 11, 0, 31
  063a45c  xor 9, 11, 0
  063a460  ld 0, 144(1)
  063a464  addi 1, 1, 128
  063a468  sub 9, 9, 11
  063a46c  mtlr 0
  063a470  addi 9, 9, -1
  063a474  srwi 3, 9, 31
  063a478  clrldi 3, 3, 63
  063a47c  blr

FUN_0063a480:   # 0x63a480, 0x44 bytes
  063a480  stdu 1, -144(1)
  063a484  mflr 0
  063a488  std 29, 120(1)
  063a48c  mr 29, 3
  063a490  mr 3, 4
  063a494  li 4, 16
  063a498  std 0, 160(1)
  063a49c  bl 0x63a044
  063a4a0  li 4, 1
  063a4a4  lwz 3, 0(29)
  063a4a8  bl 0x6084f4
  063a4ac  nop
  063a4b0  ld 0, 160(1)
  063a4b4  ld 29, 120(1)
  063a4b8  mtlr 0
  063a4bc  addi 1, 1, 144
  063a4c0  blr

FUN_0063a4c4:   # 0x63a4c4, 0x3d0 bytes
  063a4c4  stdu 1, -272(1)
  063a4c8  mflr 0
  063a4cc  std 27, 232(1)
  063a4d0  addi 27, 3, 1720
  063a4d4  std 0, 288(1)
  063a4d8  std 30, 256(1)
  063a4dc  std 15, 136(1)
  063a4e0  std 16, 144(1)
  063a4e4  lwz 0, 6044(27)
  063a4e8  std 17, 152(1)
  063a4ec  cmpwi 7, 0, 0
  063a4f0  lwz 30, -29396(2)
  063a4f4  std 18, 160(1)
  063a4f8  std 19, 168(1)
  063a4fc  std 20, 176(1)
  063a500  std 21, 184(1)
  063a504  std 22, 192(1)
  063a508  std 23, 200(1)
  063a50c  std 24, 208(1)
  063a510  std 25, 216(1)
  063a514  std 26, 224(1)
  063a518  std 28, 240(1)
  063a51c  std 29, 248(1)
  063a520  std 31, 264(1)
  063a524  bt 30, 0x63a7ac
  063a528  lbz 0, 6081(27)
  063a52c  cmpwi 7, 0, 0
  063a530  bt 30, 0x63a7ac
  063a534  addi 18, 3, 7624
  063a538  lwz 15, -32756(30)
  063a53c  li 16, 0
  063a540  addi 17, 1, 112
  063a544  lwz 21, 0(18)
  063a548  li 22, 0
  063a54c  addi 0, 21, 8
  063a550  clrldi 26, 0, 32
  063a554  mr 3, 26
  063a558  bl 0x64048c
  063a55c  nop
  063a560  cmpwi 7, 3, 0
  063a564  bt 28, 0x63a810
  063a568  mr 23, 15
  063a56c  mr 19, 26
  063a570  b 0x63a5b0
  063a574  lbz 0, 20(31)
  063a578  cmpwi 7, 0, 6
  063a57c  bt 30, 0x63a6c0
  063a580  mr 3, 26
  063a584  mr 4, 28
  063a588  bl 0x640668
  063a58c  nop
  063a590  mr 4, 28
  063a594  mr 3, 26
  063a598  bl 0x6404b8
  063a59c  nop
  063a5a0  cmpwi 7, 3, 0
  063a5a4  bt 28, 0x63a808
  063a5a8  cmpwi 7, 22, 0
  063a5ac  bt 28, 0x63a7b0
  063a5b0  lwz 0, 6044(27)
  063a5b4  extsw 28, 3
  063a5b8  cmpwi 7, 0, 0
  063a5bc  bt 30, 0x63a590
  063a5c0  clrldi 31, 0, 32
  063a5c4  lwz 3, 5968(27)
  063a5c8  clrldi 9, 21, 32
  063a5cc  mr 6, 28
  063a5d0  lwz 11, 8(31)
  063a5d4  lwz 5, 4(9)
  063a5d8  lwz 4, 12(31)
  063a5dc  extsw 5, 5
  063a5e0  lwz 9, 36(11)
  063a5e4  lwz 0, 0(9)
  063a5e8  std 2, 40(1)
  063a5ec  mtctr 0
  063a5f0  lwz 2, 4(9)
  063a5f4  bctrl
  063a5f8  ld 2, 40(1)
  063a5fc  cmpwi 7, 3, 0
  063a600  mr 29, 3
  063a604  bf 29, 0x63a75c
  063a608  lwz 9, 40(23)
  063a60c  addi 9, 9, 1
  063a610  stw 9, 40(23)
  063a614  lwz 9, 6060(27)
  063a618  cmpwi 7, 9, 0
  063a61c  bt 30, 0x63a628
  063a620  addi 0, 9, -1
  063a624  stw 0, 6060(27)
  063a628  lbz 0, 20(31)
  063a62c  cmpwi 7, 0, 1
  063a630  bf 30, 0x63a574
  063a634  lwz 9, -32712(30)
  063a638  lbz 0, 0(9)
  063a63c  cmpwi 7, 0, 0
  063a640  bt 30, 0x63a580
  063a644  lbz 0, 19(31)
  063a648  cmpwi 7, 0, 2
  063a64c  bf 30, 0x63a580
  063a650  mr 4, 28
  063a654  mr 3, 19
  063a658  bl 0x636d8c
  063a65c  nop
  063a660  mr 4, 28
  063a664  mr 29, 3
  063a668  mr 3, 19
  063a66c  bl 0x636eec
  063a670  nop
  063a674  lbz 0, 19(31)
  063a678  divwu 3, 3, 0
  063a67c  cmpwi 7, 3, 0
  063a680  bt 30, 0x63a574
  063a684  clrldi 3, 3, 32
  063a688  li 10, 0
  063a68c  mtctr 3
  063a690  add 9, 10, 29
  063a694  addi 10, 10, 2
  063a698  clrldi 9, 9, 32
  063a69c  lhz 0, 0(9)
  063a6a0  rlwinm 11, 0, 8, 16, 23
  063a6a4  srwi 0, 0, 8
  063a6a8  or 0, 0, 11
  063a6ac  sth 0, 0(9)
  063a6b0  bdnz 0x63a690
  063a6b4  lbz 0, 20(31)
  063a6b8  cmpwi 7, 0, 6
  063a6bc  bf 30, 0x63a580
  063a6c0  mr 4, 28
  063a6c4  mr 3, 19
  063a6c8  li 25, 0
  063a6cc  bl 0x636d8c
  063a6d0  nop
  063a6d4  mr 4, 28
  063a6d8  mr 20, 3
  063a6dc  mr 3, 19
  063a6e0  mr 29, 20
  063a6e4  bl 0x636eec
  063a6e8  nop
  063a6ec  cmpwi 7, 3, 0
  063a6f0  mr 24, 3
  063a6f4  mr 31, 3
  063a6f8  bf 30, 0x63a718
  063a6fc  b 0x63a84c
  063a700  lwz 0, 120(1)
  063a704  sub 31, 31, 0
  063a708  add 29, 29, 0
  063a70c  cmpwi 7, 31, 0
  063a710  add 25, 25, 0
  063a714  bt 30, 0x63a730
  063a718  clrldi 3, 29, 32
  063a71c  clrldi 4, 17, 32
  063a720  bl 0x63c4c0
  063a724  nop
  063a728  cmpwi 7, 3, 0
  063a72c  bt 30, 0x63a700
  063a730  cmpwi 7, 25, 0
  063a734  mr 31, 25
  063a738  bt- 30, 0x63a88c
  063a73c  cmpw 7, 24, 31
  063a740  bt 30, 0x63a580
  063a744  clrldi 5, 31, 32
  063a748  mr 3, 26
  063a74c  mr 4, 28
  063a750  bl 0x640800
  063a754  nop
  063a758  b 0x63a580
  063a75c  bt 30, 0x63a590
  063a760  lwz 6, 400(31)
  063a764  li 5, 989
  063a768  lwz 3, -32700(30)
  063a76c  lwz 4, -32724(30)
  063a770  bl 0x61948c
  063a774  nop
  063a778  lwz 9, 40(23)
  063a77c  addi 9, 9, 1
  063a780  stw 9, 40(23)
  063a784  lwz 9, 6060(27)
  063a788  cmpwi 7, 9, 0
  063a78c  bf 30, 0x63a828
  063a790  li 5, 0
  063a794  mr 3, 26
  063a798  mr 4, 28
  063a79c  mr 22, 29
  063a7a0  bl 0x640800
  063a7a4  nop
  063a7a8  b 0x63a580
  063a7ac  li 22, 0
  063a7b0  ld 0, 288(1)
  063a7b4  extsw 3, 22
  063a7b8  ld 15, 136(1)
  063a7bc  ld 16, 144(1)
  063a7c0  mtlr 0
  063a7c4  ld 17, 152(1)
  063a7c8  ld 18, 160(1)
  063a7cc  ld 19, 168(1)
  063a7d0  ld 20, 176(1)
  063a7d4  ld 21, 184(1)
  063a7d8  ld 22, 192(1)
  063a7dc  ld 23, 200(1)
  063a7e0  ld 24, 208(1)
  063a7e4  ld 25, 216(1)
  063a7e8  ld 26, 224(1)
  063a7ec  ld 27, 232(1)
  063a7f0  ld 28, 240(1)
  063a7f4  ld 29, 248(1)
  063a7f8  ld 30, 256(1)
  063a7fc  ld 31, 264(1)
  063a800  addi 1, 1, 272
  063a804  blr
  063a808  cmpwi 7, 22, 0
  063a80c  bt 28, 0x63a7b0
  063a810  addi 16, 16, 1
  063a814  lbz 0, 6081(27)
  063a818  addi 18, 18, 4
  063a81c  cmplw 7, 0, 16
  063a820  bt 29, 0x63a544
  063a824  b 0x63a7b0
  063a828  addi 0, 9, -1
  063a82c  li 5, 0
  063a830  mr 3, 26
  063a834  mr 4, 28
  063a838  stw 0, 6060(27)
  063a83c  mr 22, 29
  063a840  bl 0x640800
  063a844  nop
  063a848  b 0x63a580
  063a84c  lwz 29, -32724(30)
  063a850  li 5, 962
  063a854  lwz 3, -32708(30)
  063a858  li 31, 0
  063a85c  mr 4, 29
  063a860  bl 0x61948c
  063a864  nop
  063a868  mr 4, 29
  063a86c  lbz 7, 0(20)
  063a870  lwz 3, -32704(30)
  063a874  li 5, 970
  063a878  clrldi 6, 24, 32
  063a87c  li 22, -104
  063a880  bl 0x61948c
  063a884  nop
  063a888  b 0x63a73c
  063a88c  lwz 29, -32724(30)
  063a890  b 0x63a868

sndi_CloseAsyncFilePlayer:   # 0x63a894, 0x224 bytes
  063a894  cmpdi 4, 0
  063a898  mflr 0
  063a89c  stdu 1, -208(1)
  063a8a0  std 21, 120(1)
  063a8a4  std 27, 168(1)
  063a8a8  std 30, 192(1)
  063a8ac  std 22, 128(1)
  063a8b0  std 23, 136(1)
  063a8b4  std 24, 144(1)
  063a8b8  std 25, 152(1)
  063a8bc  std 26, 160(1)
  063a8c0  std 28, 176(1)
  063a8c4  std 29, 184(1)
  063a8c8  std 31, 200(1)
  063a8cc  std 0, 224(1)
  063a8d0  lwz 30, -29396(2)
  063a8d4  mr 27, 3
  063a8d8  mr 21, 3
  063a8dc  bt 2, 0x63aa54
  063a8e0  lwz 0, 8(4)
  063a8e4  mr 24, 4
  063a8e8  cmpwi 7, 0, 0
  063a8ec  bt 30, 0x63aa54
  063a8f0  lwz 0, 7688(3)
  063a8f4  cmpwi 7, 0, -1
  063a8f8  bt 30, 0x63aa54
  063a8fc  lwz 0, 7780(3)
  063a900  cmpwi 7, 0, 0
  063a904  bf 30, 0x63aa90
  063a908  lwz 3, 1704(27)
  063a90c  bl 0x63ea18
  063a910  nop
  063a914  lwz 11, 1404(3)
  063a918  mr 22, 3
  063a91c  addi 0, 11, 1720
  063a920  clrldi 28, 0, 32
  063a924  lbz 9, 6081(28)
  063a928  lwz 0, 6044(28)
  063a92c  cmpwi 7, 9, 0
  063a930  bt 30, 0x63aab0
  063a934  addi 31, 11, 7624
  063a938  lwz 25, -32756(30)
  063a93c  clrldi 26, 0, 32
  063a940  li 29, 0
  063a944  li 23, 0
  063a948  b 0x63a958
  063a94c  lbz 0, 6081(28)
  063a950  cmplw 7, 0, 29
  063a954  bf 29, 0x63a9c8
  063a958  clrldi 9, 31, 32
  063a95c  addi 29, 29, 1
  063a960  addi 31, 31, 4
  063a964  lwz 9, 0(9)
  063a968  lbz 0, 1716(9)
  063a96c  cmpwi 7, 0, 0
  063a970  bt 30, 0x63a94c
  063a974  stb 23, 1716(9)
  063a978  lwz 11, 8(26)
  063a97c  lwz 5, 4(9)
  063a980  lwz 3, 5968(28)
  063a984  lwz 4, 12(26)
  063a988  extsw 5, 5
  063a98c  lwz 9, 40(11)
  063a990  lwz 0, 0(9)
  063a994  std 2, 40(1)
  063a998  mtctr 0
  063a99c  lwz 2, 4(9)
  063a9a0  bctrl
  063a9a4  ld 2, 40(1)
  063a9a8  cmpwi 7, 3, 0
  063a9ac  bf 30, 0x63a94c
  063a9b0  lwz 9, 32(25)
  063a9b4  addi 9, 9, 1
  063a9b8  stw 9, 32(25)
  063a9bc  lbz 0, 6081(28)
  063a9c0  cmplw 7, 0, 29
  063a9c4  bt 29, 0x63a958
  063a9c8  bl 0x633da4
  063a9cc  nop
  063a9d0  lwz 11, 8(24)
  063a9d4  lwz 5, 4(27)
  063a9d8  lwz 4, 12(24)
  063a9dc  lwz 3, 7688(27)
  063a9e0  extsw 5, 5
  063a9e4  lwz 9, 44(11)
  063a9e8  lwz 0, 0(9)
  063a9ec  std 2, 40(1)
  063a9f0  mtctr 0
  063a9f4  lwz 2, 4(9)
  063a9f8  bctrl
  063a9fc  ld 2, 40(1)
  063aa00  lwz 3, 0(22)
  063aa04  li 4, 3
  063aa08  lwz 5, 12(24)
  063aa0c  li 6, 0
  063aa10  bl 0x6316c0
  063aa14  nop
  063aa18  bl 0x633e34
  063aa1c  nop
  063aa20  lwz 9, 24(25)
  063aa24  addi 11, 21, 1720
  063aa28  addi 9, 9, 1
  063aa2c  li 10, 0
  063aa30  stw 9, 24(25)
  063aa34  li 0, -1
  063aa38  li 9, 10
  063aa3c  stw 10, 6044(11)
  063aa40  stw 0, 5968(11)
  063aa44  stw 9, 6064(11)
  063aa48  stw 10, 6060(11)
  063aa4c  stw 10, 6076(11)
  063aa50  stb 10, 6080(11)
  063aa54  ld 0, 224(1)
  063aa58  ld 21, 120(1)
  063aa5c  ld 22, 128(1)
  063aa60  mtlr 0
  063aa64  ld 23, 136(1)
  063aa68  ld 24, 144(1)
  063aa6c  ld 25, 152(1)
  063aa70  ld 26, 160(1)
  063aa74  ld 27, 168(1)
  063aa78  ld 28, 176(1)
  063aa7c  ld 29, 184(1)
  063aa80  ld 30, 192(1)
  063aa84  ld 31, 200(1)
  063aa88  addi 1, 1, 208
  063aa8c  blr
  063aa90  bl 0x604918
  063aa94  nop
  063aa98  lwz 5, 7780(27)
  063aa9c  clrldi 4, 3, 32
  063aaa0  lwz 3, -32696(30)
  063aaa4  bl 0x61948c
  063aaa8  nop
  063aaac  b 0x63a908
  063aab0  lwz 25, -32756(30)
  063aab4  b 0x63a9c8

FUN_0063aab8:   # 0x63aab8, 0x2c0 bytes
  063aab8  mfcr 12
  063aabc  stdu 1, -416(1)
  063aac0  std 14, 272(1)
  063aac4  std 30, 400(1)
  063aac8  std 15, 280(1)
  063aacc  std 16, 288(1)
  063aad0  std 17, 296(1)
  063aad4  std 18, 304(1)
  063aad8  std 19, 312(1)
  063aadc  std 20, 320(1)
  063aae0  std 21, 328(1)
  063aae4  std 22, 336(1)
  063aae8  std 23, 344(1)
  063aaec  std 24, 352(1)
  063aaf0  std 25, 360(1)
  063aaf4  std 26, 368(1)
  063aaf8  std 27, 376(1)
  063aafc  std 28, 384(1)
  063ab00  std 29, 392(1)
  063ab04  std 31, 408(1)
  063ab08  lwz 30, -29396(2)
  063ab0c  mr 14, 3
  063ab10  stw 12, 424(1)
  063ab14  mflr 0
  063ab18  std 0, 432(1)
  063ab1c  clrldi 0, 3, 32
  063ab20  std 0, 240(1)
  063ab24  lwz 0, 0(3)
  063ab28  cmpwi 7, 0, 0
  063ab2c  bf 30, 0x63ad98
  063ab30  lwz 22, -32756(30)
  063ab34  bl 0x633e34
  063ab38  nop
  063ab3c  bl 0x63f99c
  063ab40  nop
  063ab44  lwz 0, 160(22)
  063ab48  cmpwi 7, 0, 0
  063ab4c  stw 3, 224(1)
  063ab50  bf 29, 0x63ad54
  063ab54  li 0, 0
  063ab58  li 20, 0
  063ab5c  li 21, 0
  063ab60  stw 0, 196(1)
  063ab64  b 0x63ab7c
  063ab68  addi 20, 20, 1
  063ab6c  lwz 0, 160(22)
  063ab70  addi 21, 21, 1420
  063ab74  cmpw 7, 0, 20
  063ab78  bf 29, 0x63ad48
  063ab7c  lwz 0, 156(22)
  063ab80  add 31, 21, 0
  063ab84  clrldi 27, 31, 32
  063ab88  lbz 0, 581(27)
  063ab8c  cmpwi 7, 0, 0
  063ab90  bt 30, 0x63ab68
  063ab94  mr 3, 27
  063ab98  bl 0x631058
  063ab9c  nop
  063aba0  cmpwi 7, 3, 0
  063aba4  bt 30, 0x63ab68
  063aba8  lbz 0, 1418(27)
  063abac  lwz 29, 1404(27)
  063abb0  cmpwi 7, 0, 0
  063abb4  addi 18, 29, 1720
  063abb8  clrldi 24, 18, 32
  063abbc  bt 30, 0x63ac20
  063abc0  cmpwi 7, 29, 0
  063abc4  li 0, 0
  063abc8  stb 0, 1418(27)
  063abcc  bt 30, 0x63ac04
  063abd0  li 6, 8
  063abd4  li 0, 0
  063abd8  addi 11, 29, 1736
  063abdc  mtctr 6
  063abe0  clrldi 10, 11, 32
  063abe4  lwz 9, 700(10)
  063abe8  cmpwi 7, 9, 0
  063abec  bt 30, 0x63abfc
  063abf0  clrldi 9, 9, 32
  063abf4  stw 0, 700(10)
  063abf8  stw 0, 0(9)
  063abfc  addi 11, 11, 736
  063ac00  bdnz 0x63abe0
  063ac04  clrldi 24, 18, 32
  063ac08  lwz 0, 6064(24)
  063ac0c  cmpwi 7, 0, 12
  063ac10  bt 30, 0x63b1c0
  063ac14  mr 3, 24
  063ac18  li 4, 18
  063ac1c  bl 0x63a044
  063ac20  lwz 6, 6064(24)
  063ac24  addi 0, 6, -10
  063ac28  cmplwi 7, 0, 9
  063ac2c  bt 29, 0x63ae34
  063ac30  lwz 11, -32692(30)
  063ac34  rldic 9, 0, 2, 30
  063ac38  lwzx 0, 9, 11
  063ac3c  extsw 0, 0
  063ac40  add 0, 0, 11
  063ac44  mtctr 0
  063ac48  bctr
  063ac4c  <unknown>
  063ac50  <unknown>
  063ac54  <unknown>
  063ac58  <unknown>
  063ac5c  <unknown>
  063ac60  <unknown>
  063ac64  <unknown>
  063ac68  <unknown>
  063ac6c  <unknown>
  063ac70  <unknown>
  063ac74  bt 16, 0x63b100
  063ac78  cmpwi 7, 19, 2
  063ac7c  bf 30, 0x63acb0
  063ac80  lwz 31, 6044(24)
  063ac84  lwz 9, 716(31)
  063ac88  cmpwi 7, 9, -2
  063ac8c  bt 30, 0x63b8d8
  063ac90  cmpwi 7, 9, -1
  063ac94  bt 30, 0x63b8ec
  063ac98  lwz 0, 720(31)
  063ac9c  cmpw 7, 0, 9
  063aca0  bt 28, 0x63b8ec
  063aca4  mr 3, 24
  063aca8  li 4, 15
  063acac  bl 0x63a044
  063acb0  li 19, 0
  063acb4  cmpwi 4, 19, 0
  063acb8  mr 3, 24
  063acbc  bl 0x63a404
  063acc0  lbz 0, 6081(24)
  063acc4  mr 23, 3
  063acc8  cmpwi 7, 0, 0
  063accc  bt 30, 0x63ad20
  063acd0  addi 31, 18, 5904
  063acd4  li 27, 0
  063acd8  clrldi 9, 31, 32
  063acdc  lwz 9, 0(9)
  063ace0  clrldi 28, 9, 32
  063ace4  lbz 0, 1713(28)
  063ace8  cmpwi 7, 0, 0
  063acec  bf 30, 0x63ad0c
  063acf0  cmpwi 7, 23, 0
  063acf4  bt 30, 0x63ae0c
  063acf8  li 9, 1
  063acfc  lbz 0, 1714(28)
  063ad00  stb 9, 1713(28)
  063ad04  or 0, 9, 0
  063ad08  stb 0, 1714(28)
  063ad0c  addi 27, 27, 1
  063ad10  lbz 0, 6081(24)
  063ad14  addi 31, 31, 4
  063ad18  cmplw 7, 0, 27
  063ad1c  bt 29, 0x63acd8
  063ad20  bf 18, 0x63ae50
  063ad24  bl 0x633da4
  063ad28  nop
  063ad2c  bl 0x633e34
  063ad30  nop
  063ad34  addi 20, 20, 1
  063ad38  lwz 0, 160(22)
  063ad3c  addi 21, 21, 1420
  063ad40  cmpw 7, 0, 20
  063ad44  bt 29, 0x63ab7c
  063ad48  lwz 0, 196(1)
  063ad4c  cmpwi 7, 0, 0
  063ad50  bt 28, 0x63b1b0
  063ad54  bl 0x63f99c
  063ad58  nop
  063ad5c  lwz 6, 224(1)
  063ad60  lwz 0, 104(22)
  063ad64  sub 3, 3, 6
  063ad68  cmplw 7, 0, 3
  063ad6c  bf 28, 0x63ad74
  063ad70  stw 3, 104(22)
  063ad74  bl 0x633da4

FUN_0063b9e8:   # 0x63b9e8, 0x84 bytes
  063b9e8  stdu 1, -144(1)
  063b9ec  mflr 0
  063b9f0  std 30, 128(1)
  063b9f4  lwz 30, -29396(2)
  063b9f8  std 29, 120(1)
  063b9fc  std 31, 136(1)
  063ba00  std 0, 160(1)
  063ba04  lwz 29, -32644(30)
  063ba08  mr 3, 29
  063ba0c  addi 31, 29, -48
  063ba10  bl 0x63f8e0
  063ba14  nop
  063ba18  cmpwi 7, 3, 0
  063ba1c  mr 3, 29
  063ba20  bf 30, 0x63ba60
  063ba24  mr 3, 31
  063ba28  bl 0x63f8e0
  063ba2c  nop
  063ba30  cmpwi 7, 3, 0
  063ba34  mr 3, 31
  063ba38  bt 30, 0x63ba44
  063ba3c  bl 0x63fa4c
  063ba40  nop
  063ba44  ld 0, 160(1)
  063ba48  ld 29, 120(1)
  063ba4c  ld 30, 128(1)
  063ba50  mtlr 0
  063ba54  ld 31, 136(1)
  063ba58  addi 1, 1, 144
  063ba5c  blr
  063ba60  bl 0x63fa4c
  063ba64  nop
  063ba68  b 0x63ba24

FUN_0063ba6c:   # 0x63ba6c, 0x3cc bytes
  063ba6c  stdu 1, -176(1)
  063ba70  mflr 0
  063ba74  li 9, -1
  063ba78  std 0, 192(1)
  063ba7c  lwz 11, 8(3)
  063ba80  li 0, 0
  063ba84  std 26, 128(1)
  063ba88  std 28, 144(1)
  063ba8c  std 29, 152(1)
  063ba90  std 30, 160(1)
  063ba94  std 31, 168(1)
  063ba98  std 27, 136(1)
  063ba9c  stb 0, 124(3)
  063baa0  stw 9, 4(3)
  063baa4  lwz 9, 0(11)
  063baa8  mr 31, 3
  063baac  addi 10, 3, 4
  063bab0  lwz 30, -29396(2)
  063bab4  mr 29, 3
  063bab8  lwz 3, 400(3)
  063babc  mr 28, 4
  063bac0  mr 26, 5
  063bac4  lwz 0, 0(9)
  063bac8  clrldi 4, 10, 32
  063bacc  std 2, 40(1)
  063bad0  li 5, 0
  063bad4  mtctr 0
  063bad8  li 6, -3
  063badc  lwz 7, 12(31)
  063bae0  lwz 2, 4(9)
  063bae4  bctrl
  063bae8  ld 2, 40(1)
  063baec  cmpwi 7, 3, 0
  063baf0  bf- 30, 0x63bde4
  063baf4  lwz 27, -32756(30)
  063baf8  cmpdi 7, 28, 0
  063bafc  lwz 9, 12(27)
  063bb00  addi 9, 9, 1
  063bb04  stw 9, 12(27)
  063bb08  bf 30, 0x63bbf8
  063bb0c  lbz 0, 17(31)
  063bb10  clrldi 29, 29, 32
  063bb14  rlwinm 0, 0, 0, 30, 30
  063bb18  cmpwi 7, 0, 0
  063bb1c  bt 30, 0x63bba0
  063bb20  lbz 3, 20(31)
  063bb24  bl 0x63f8ec
  063bb28  nop
  063bb2c  cmpwi 7, 3, 0
  063bb30  bt 30, 0x63bbd8
  063bb34  lwz 6, 84(31)
  063bb38  lwz 7, 96(31)
  063bb3c  divwu 0, 6, 7
  063bb40  mullw 0, 0, 7
  063bb44  cmpw 7, 6, 0
  063bb48  bt 30, 0x63bc50
  063bb4c  lwz 4, -32724(30)
  063bb50  clrldi 6, 6, 32
  063bb54  clrldi 7, 7, 32
  063bb58  lwz 3, -32624(30)
  063bb5c  li 5, 353
  063bb60  li 28, -104
  063bb64  bl 0x61948c
  063bb68  nop
  063bb6c  mr 3, 29
  063bb70  bl 0x639d24
  063bb74  ld 0, 192(1)
  063bb78  extsw 3, 28
  063bb7c  ld 26, 128(1)
  063bb80  ld 27, 136(1)
  063bb84  mtlr 0
  063bb88  ld 28, 144(1)
  063bb8c  ld 29, 152(1)
  063bb90  ld 30, 160(1)
  063bb94  ld 31, 168(1)
  063bb98  addi 1, 1, 176
  063bb9c  blr
  063bba0  clrldi 4, 26, 32
  063bba4  mr 3, 29
  063bba8  bl 0x63d08c
  063bbac  nop
  063bbb0  cmpwi 7, 3, 0
  063bbb4  bf 30, 0x63bb20
  063bbb8  lwz 4, -32724(30)
  063bbbc  li 5, 336
  063bbc0  lwz 6, 400(31)
  063bbc4  li 28, -104
  063bbc8  lwz 3, -32632(30)
  063bbcc  bl 0x61948c
  063bbd0  nop
  063bbd4  b 0x63bb6c
  063bbd8  lwz 4, -32724(30)
  063bbdc  li 5, 344
  063bbe0  lwz 6, 400(31)
  063bbe4  li 28, -105
  063bbe8  lwz 3, -32628(30)
  063bbec  bl 0x61948c
  063bbf0  nop
  063bbf4  b 0x63bb6c
  063bbf8  lwz 11, 8(31)
  063bbfc  mr 4, 28
  063bc00  lwz 3, 4(31)
  063bc04  li 5, 0
  063bc08  lwz 6, 12(31)
  063bc0c  lwz 9, 8(11)
  063bc10  lwz 0, 0(9)
  063bc14  std 2, 40(1)
  063bc18  mtctr 0
  063bc1c  lwz 2, 4(9)
  063bc20  bctrl
  063bc24  ld 2, 40(1)
  063bc28  cmpd 7, 3, 28
  063bc2c  bt 30, 0x63bb0c
  063bc30  lwz 4, -32724(30)
  063bc34  li 5, 324
  063bc38  lwz 3, -32636(30)
  063bc3c  clrldi 29, 31, 32
  063bc40  li 28, -106
  063bc44  bl 0x61948c
  063bc48  nop
  063bc4c  b 0x63bb6c
  063bc50  mr 3, 29
  063bc54  bl 0x63a208
  063bc58  cmpwi 7, 3, 0
  063bc5c  mr 28, 3
  063bc60  bf 30, 0x63bb6c
  063bc64  lbz 0, 22(31)
  063bc68  lbz 9, 21(31)
  063bc6c  mullw 0, 0, 9
  063bc70  cmpwi 7, 0, 1
  063bc74  bf 29, 0x63bc88
  063bc78  lwz 0, 136(27)
  063bc7c  rlwinm 0, 0, 0, 28, 28
  063bc80  cmpwi 7, 0, 0
  063bc84  bf 30, 0x63bd84
  063bc88  lwz 9, 8(31)
  063bc8c  lwz 11, 4(9)
  063bc90  cmpwi 7, 11, 0
  063bc94  bt 30, 0x63bce0
  063bc98  lbz 9, 20(31)
  063bc9c  cmpwi 7, 9, 1
  063bca0  bt 30, 0x63bda0
  063bca4  addi 0, 9, -2
  063bca8  li 4, 0
  063bcac  clrlwi 0, 0, 24
  063bcb0  cmplwi 7, 0, 2
  063bcb4  bf 29, 0x63bd38
  063bcb8  clrldi 9, 11, 32
  063bcbc  lwz 3, 4(31)
  063bcc0  clrldi 4, 4, 32
  063bcc4  li 5, 0
  063bcc8  lwz 0, 0(9)
  063bccc  std 2, 40(1)
  063bcd0  mtctr 0
  063bcd4  lwz 2, 4(9)
  063bcd8  bctrl
  063bcdc  ld 2, 40(1)
  063bce0  lbz 0, 16(31)
  063bce4  clrlwi 0, 0, 31
  063bce8  cmpwi 7, 0, 0
  063bcec  bt 30, 0x63bd24
  063bcf0  bl 0x639c80
  063bcf4  cmpwi 7, 3, 0
  063bcf8  stw 3, 120(31)
  063bcfc  bt 30, 0x63be1c
  063bd00  mr 3, 29
  063bd04  bl 0x63c564
  063bd08  nop
  063bd0c  cmpwi 7, 3, 0
  063bd10  mr 0, 3
  063bd14  bf 30, 0x63be04
  063bd18  lbz 0, 17(31)
  063bd1c  ori 0, 0, 1
  063bd20  stb 0, 17(31)
  063bd24  mr 3, 29
  063bd28  bl 0x639d24
  063bd2c  li 0, 1
  063bd30  stb 0, 18(31)
  063bd34  b 0x63bb74
  063bd38  lwz 0, 88(31)
  063bd3c  lbz 9, 23(31)
  063bd40  std 0, 112(1)
  063bd44  lfd 13, 112(1)
  063bd48  fcfid 13, 13
  063bd4c  std 9, 112(1)
  063bd50  lfs 11, -32616(30)
  063bd54  frsp 0, 13
  063bd58  lfd 13, 112(1)
  063bd5c  fcfid 13, 13
  063bd60  fmuls 0, 0, 11
  063bd64  frsp 12, 13
  063bd68  lfs 13, -32608(30)
  063bd6c  fmuls 0, 0, 12
  063bd70  fdivs 0, 0, 13
  063bd74  fctidz 0, 0
  063bd78  stfd 0, 112(1)
  063bd7c  ld 4, 112(1)
  063bd80  b 0x63bcb8
  063bd84  lwz 4, -32724(30)
  063bd88  li 5, 370
  063bd8c  lwz 3, -32620(30)
  063bd90  li 28, -105
  063bd94  bl 0x61948c
  063bd98  nop
  063bd9c  b 0x63bb6c
  063bda0  lwz 0, 88(31)
  063bda4  lbz 9, 23(31)
  063bda8  std 0, 112(1)
  063bdac  lfd 11, 112(1)
  063bdb0  fcfid 11, 11
  063bdb4  std 9, 112(1)
  063bdb8  lfs 12, -32616(30)
  063bdbc  frsp 0, 11
  063bdc0  lfd 11, 112(1)
  063bdc4  fcfid 11, 11
  063bdc8  fmuls 0, 0, 12
  063bdcc  frsp 13, 11
  063bdd0  fmuls 0, 0, 13
  063bdd4  fctidz 0, 0
  063bdd8  stfd 0, 112(1)
  063bddc  ld 4, 112(1)
  063bde0  b 0x63bcb8
  063bde4  lwz 4, -32724(30)
  063bde8  li 5, 311
  063bdec  lwz 6, 400(31)
  063bdf0  li 28, -103
  063bdf4  lwz 3, -32640(30)
  063bdf8  bl 0x61948c
  063bdfc  nop
  063be00  b 0x63bb74
  063be04  lwz 3, 120(31)
  063be08  mr 28, 0
  063be0c  bl 0x63a278
  063be10  li 0, 0
  063be14  stw 0, 120(31)
  063be18  b 0x63bb6c
  063be1c  lwz 4, -32724(30)
  063be20  li 5, 416
  063be24  lwz 3, -32600(30)
  063be28  li 28, -114
  063be2c  bl 0x61948c
  063be30  nop
  063be34  b 0x63bb6c

FUN_0063be38:   # 0x63be38, 0x3f0 bytes
  063be38  stdu 1, -928(1)
  063be3c  mflr 0
  063be40  std 24, 864(1)
  063be44  mr 24, 3
  063be48  std 30, 912(1)
  063be4c  lwz 30, -29396(2)
  063be50  std 23, 856(1)
  063be54  std 0, 944(1)
  063be58  std 15, 792(1)
  063be5c  std 16, 800(1)
  063be60  std 17, 808(1)
  063be64  std 18, 816(1)
  063be68  std 19, 824(1)
  063be6c  std 20, 832(1)
  063be70  std 21, 840(1)
  063be74  std 22, 848(1)
  063be78  std 25, 872(1)
  063be7c  std 26, 880(1)
  063be80  std 27, 888(1)
  063be84  std 28, 896(1)
  063be88  std 29, 904(1)
  063be8c  std 31, 920(1)
  063be90  bl 0x633e34
  063be94  nop
  063be98  lwz 0, 0(24)
  063be9c  clrldi 23, 24, 32
  063bea0  cmpwi 7, 0, 0
  063bea4  bf 30, 0x63c144
  063bea8  addi 0, 1, 112
  063beac  lwz 27, -32596(30)
  063beb0  lwz 19, -32756(30)
  063beb4  li 16, 0
  063beb8  clrldi 17, 0, 32
  063bebc  b 0x63bf0c
  063bec0  bl 0x63f99c
  063bec4  nop
  063bec8  lwz 0, 100(19)
  063becc  sub 3, 3, 21
  063bed0  cmplw 7, 0, 3
  063bed4  bf 28, 0x63bedc
  063bed8  stw 3, 100(19)
  063bedc  bl 0x633da4
  063bee0  nop
  063bee4  li 4, 0
  063bee8  mr 3, 23
  063beec  ori 4, 4, 50000
  063bef0  bl 0x63fcd8
  063bef4  nop
  063bef8  bl 0x633e34
  063befc  nop
  063bf00  lwz 0, 0(24)
  063bf04  cmpwi 7, 0, 0
  063bf08  bf 30, 0x63c144
  063bf0c  bl 0x63f99c
  063bf10  nop
  063bf14  mr 21, 3
  063bf18  mr 3, 27
  063bf1c  bl 0x637094
  063bf20  nop
  063bf24  cmpwi 7, 3, 0
  063bf28  bf 30, 0x63bec0
  063bf2c  mr 3, 27
  063bf30  bl 0x637100
  063bf34  nop
  063bf38  lwz 0, -32756(30)
  063bf3c  slwi 3, 3, 2
  063bf40  add 3, 3, 0
  063bf44  addi 3, 3, 204
  063bf48  clrldi 26, 3, 32
  063bf4c  lwz 4, 0(26)
  063bf50  cmpwi 7, 4, 0
  063bf54  bt 30, 0x63c0d8
  063bf58  clrldi 29, 4, 32
  063bf5c  li 31, 0
  063bf60  lwz 9, 696(29)
  063bf64  cmpwi 7, 9, 0
  063bf68  bt 30, 0x63bf80
  063bf6c  clrldi 9, 9, 32
  063bf70  lwz 3, 1704(9)
  063bf74  bl 0x63ea18
  063bf78  nop
  063bf7c  lwz 31, 0(3)
  063bf80  mr 4, 29
  063bf84  li 5, 664
  063bf88  mr 3, 17
  063bf8c  bl 0x5c5ad0
  063bf90  nop
  063bf94  addi 0, 1, 520
  063bf98  ld 29, 680(29)
  063bf9c  stw 0, 512(1)
  063bfa0  bl 0x633da4
  063bfa4  nop
  063bfa8  mr 4, 29
  063bfac  clrldi 5, 31, 32
  063bfb0  mr 3, 17
  063bfb4  bl 0x63ba6c
  063bfb8  mr 25, 3
  063bfbc  bl 0x633e34
  063bfc0  nop
  063bfc4  lwz 29, 0(26)
  063bfc8  cmpwi 7, 25, 0
  063bfcc  bf 30, 0x63c0ec
  063bfd0  cmpwi 7, 29, 0
  063bfd4  bt 30, 0x63c0d8
  063bfd8  clrldi 31, 29, 32
  063bfdc  lwz 22, 696(31)
  063bfe0  cmpwi 7, 22, 0
  063bfe4  bt 30, 0x63c0b0
  063bfe8  clrldi 18, 22, 32
  063bfec  lwz 3, 1704(18)
  063bff0  bl 0x63ea18
  063bff4  nop
  063bff8  mr 28, 3
  063bffc  clrldi 15, 3, 32
  063c000  lwz 3, 0(3)
  063c004  bl 0x61a790
  063c008  nop
  063c00c  cmpwi 7, 3, 0
  063c010  bt 30, 0x63c0b0
  063c014  mr 4, 17
  063c018  li 5, 408
  063c01c  mr 3, 31
  063c020  bl 0x5c5ad0
  063c024  nop
  063c028  addi 0, 29, 408
  063c02c  mr 3, 15
  063c030  mr 4, 31
  063c034  stw 0, 400(31)
  063c038  lbz 20, 1415(28)
  063c03c  lbz 29, 1414(28)
  063c040  bl 0x631358
  063c044  nop
  063c048  cmpwi 7, 3, 0
  063c04c  bt 30, 0x63c1e8
  063c050  clrlwi 9, 20, 24
  063c054  lbz 5, 21(31)
  063c058  clrlwi 0, 29, 24
  063c05c  lbz 6, 22(31)
  063c060  mullw 0, 0, 9
  063c064  mullw 9, 5, 6
  063c068  cmpw 7, 0, 9
  063c06c  bt 30, 0x63c098
  063c070  lwz 0, 7784(18)
  063c074  cmpwi 7, 0, 10
  063c078  bt 30, 0x63c1b4
  063c07c  lwz 3, -32588(30)
  063c080  li 5, 1872
  063c084  lwz 4, -32724(30)
  063c088  lwz 6, 400(31)
  063c08c  bl 0x61948c
  063c090  nop
  063c094  b 0x63c0f8
  063c098  addi 29, 22, 1720
  063c09c  mr 3, 15
  063c0a0  bl 0x633008
  063c0a4  nop
  063c0a8  clrldi 3, 29, 32
  063c0ac  bl 0x63a134
  063c0b0  lwz 9, 696(31)
  063c0b4  li 4, 0
  063c0b8  lwz 5, 12(31)
  063c0bc  li 6, 0
  063c0c0  stw 16, 700(31)
  063c0c4  lwz 11, 1704(9)
  063c0c8  lwz 3, 0(11)
  063c0cc  clrldi 3, 3, 32
  063c0d0  bl 0x6316c0
  063c0d4  nop
  063c0d8  mr 3, 27
  063c0dc  stw 16, 0(26)
  063c0e0  bl 0x637170
  063c0e4  nop
  063c0e8  b 0x63bec0
  063c0ec  cmpwi 7, 29, 0
  063c0f0  clrldi 31, 29, 32
  063c0f4  bt 30, 0x63c0d8
  063c0f8  lwz 9, 696(31)
  063c0fc  extsw 6, 25
  063c100  li 4, 0
  063c104  lwz 5, 12(31)
  063c108  stw 16, 700(31)
  063c10c  lwz 11, 1704(9)
  063c110  lwz 3, 0(11)
  063c114  clrldi 3, 3, 32
  063c118  bl 0x6316c0
  063c11c  nop
  063c120  lwz 9, 696(31)
  063c124  lwz 3, 1704(9)
  063c128  bl 0x63e9c4
  063c12c  nop
  063c130  li 4, 1
  063c134  lwz 3, 0(3)
  063c138  bl 0x6084f4
  063c13c  nop
  063c140  b 0x63c0d8
  063c144  bl 0x633da4
  063c148  nop
  063c14c  mr 3, 23
  063c150  li 4, 0
  063c154  bl 0x63fc80
  063c158  nop
  063c15c  ld 0, 944(1)
  063c160  ld 15, 792(1)
  063c164  li 3, 0
  063c168  ld 16, 800(1)
  063c16c  ld 17, 808(1)
  063c170  mtlr 0
  063c174  ld 18, 816(1)
  063c178  ld 19, 824(1)
  063c17c  ld 20, 832(1)
  063c180  ld 21, 840(1)
  063c184  ld 22, 848(1)
  063c188  ld 23, 856(1)
  063c18c  ld 24, 864(1)
  063c190  ld 25, 872(1)
  063c194  ld 26, 880(1)
  063c198  ld 27, 888(1)
  063c19c  ld 28, 896(1)
  063c1a0  ld 29, 904(1)
  063c1a4  ld 30, 912(1)
  063c1a8  ld 31, 920(1)
  063c1ac  addi 1, 1, 928
  063c1b0  blr
  063c1b4  cmpwi 7, 9, 1
  063c1b8  bf 29, 0x63c098
  063c1bc  addi 29, 22, 1720
  063c1c0  mr 4, 18
  063c1c4  extsw 5, 5
  063c1c8  extsw 6, 6
  063c1cc  clrldi 3, 29, 32
  063c1d0  li 7, 1
  063c1d4  bl 0x6332dc
  063c1d8  nop
  063c1dc  cmpwi 7, 3, 0
  063c1e0  bf 30, 0x63c0f8
  063c1e4  b 0x63c09c
  063c1e8  lwz 3, -32592(30)
  063c1ec  li 5, 1857
  063c1f0  lwz 4, -32724(30)
  063c1f4  bl 0x61948c
  063c1f8  nop
  063c1fc  lwz 9, 696(31)
  063c200  lwz 5, 12(31)
  063c204  li 4, 0
  063c208  li 6, 0
  063c20c  stw 25, 700(31)
  063c210  lwz 11, 1704(9)
  063c214  lwz 3, 0(11)
  063c218  clrldi 3, 3, 32
  063c21c  bl 0x6316c0
  063c220  nop
  063c224  b 0x63c120

FUN_0063c228:   # 0x63c228, 0x24 bytes
  063c228  mr 9, 3
  063c22c  addi 3, 3, 2
  063c230  clrldi 3, 3, 32
  063c234  lbz 0, 1(9)
  063c238  lbz 11, 0(9)
  063c23c  slwi 0, 0, 8
  063c240  or 0, 0, 11
  063c244  sth 0, 0(4)
  063c248  blr

FUN_0063c24c:   # 0x63c24c, 0x3c bytes
  063c24c  mr 10, 3
  063c250  addi 3, 3, 4
  063c254  clrldi 3, 3, 32
  063c258  lbz 8, 1(10)
  063c25c  lbz 11, 2(10)
  063c260  lbz 9, 3(10)
  063c264  slwi 8, 8, 8
  063c268  lbz 0, 0(10)
  063c26c  slwi 11, 11, 16
  063c270  slwi 9, 9, 24
  063c274  or 0, 0, 8
  063c278  or 11, 11, 9
  063c27c  or 0, 0, 11
  063c280  stw 0, 0(4)
  063c284  blr

FUN_0063c288:   # 0x63c288, 0xa8 bytes
  063c288  cmpwi 7, 3, 0
  063c28c  std 30, -16(1)
  063c290  lwz 30, -29392(2)
  063c294  bt 28, 0x63c2c4
  063c298  lis 9, 5825
  063c29c  srwi 0, 3, 3
  063c2a0  ori 9, 9, 27671
  063c2a4  mulhwu 0, 0, 9
  063c2a8  srwi 0, 0, 2
  063c2ac  mulli 0, 0, 360
  063c2b0  sub 0, 3, 0
  063c2b4  clrlwi 0, 0, 16
  063c2b8  extsw 3, 0
  063c2bc  ld 30, -16(1)
  063c2c0  blr
  063c2c4  li 0, 10
  063c2c8  lwz 11, -32768(30)
  063c2cc  li 10, 0
  063c2d0  li 8, 1
  063c2d4  mtctr 0
  063c2d8  clrldi 9, 11, 32
  063c2dc  addi 11, 11, 2
  063c2e0  lbz 0, 0(9)
  063c2e4  slw 0, 8, 0
  063c2e8  and 9, 0, 3
  063c2ec  cmpwi 9, 0
  063c2f0  bf 2, 0x63c30c
  063c2f4  addi 10, 10, 1
  063c2f8  bdnz 0x63c2d8
  063c2fc  li 0, 0
  063c300  ld 30, -16(1)
  063c304  extsw 3, 0
  063c308  blr
  063c30c  slwi 9, 10, 1
  063c310  lwz 0, -32768(30)
  063c314  li 11, -32768
  063c318  extsw 9, 9
  063c31c  add 9, 9, 0
  063c320  lbz 0, 1(9)
  063c324  or 0, 0, 11
  063c328  clrlwi 0, 0, 16
  063c32c  b 0x63c2b8

FUN_0063c330:   # 0x63c330, 0x190 bytes
  063c330  stdu 1, -160(1)
  063c334  mflr 0
  063c338  std 27, 120(1)
  063c33c  std 29, 136(1)
  063c340  std 30, 144(1)
  063c344  std 26, 112(1)
  063c348  std 28, 128(1)
  063c34c  std 31, 152(1)
  063c350  std 0, 176(1)
  063c354  lbz 0, 124(4)
  063c358  mr 29, 3
  063c35c  lwz 30, -29392(2)
  063c360  addi 27, 4, 144
  063c364  cmpwi 7, 0, 0
  063c368  bt 30, 0x63c414
  063c36c  lbz 0, 21(4)
  063c370  lbz 9, 23(4)
  063c374  mullw 26, 9, 0
  063c378  cmpwi 7, 26, 0
  063c37c  bf 29, 0x63c4ac
  063c380  mr 31, 27
  063c384  li 28, 0
  063c388  lwz 3, 0(29)
  063c38c  addi 28, 28, 1
  063c390  addi 29, 29, 16
  063c394  bl 0x63c288
  063c398  clrldi 9, 31, 32
  063c39c  cmpw 7, 26, 28
  063c3a0  addi 31, 31, 2
  063c3a4  sth 3, 0(9)
  063c3a8  bf 30, 0x63c388
  063c3ac  cmpwi 7, 26, 127
  063c3b0  slwi 0, 26, 1
  063c3b4  add 27, 27, 0
  063c3b8  bt 29, 0x63c3ec
  063c3bc  mr 4, 26
  063c3c0  addi 0, 4, 1
  063c3c4  subfic 9, 4, 128
  063c3c8  cmpwi 7, 0, 128
  063c3cc  clrldi 9, 9, 32
  063c3d0  mtctr 9
  063c3d4  bt- 29, 0x63c4b4
  063c3d8  clrldi 9, 27, 32
  063c3dc  li 0, 0
  063c3e0  addi 27, 27, 2
  063c3e4  sth 0, 0(9)
  063c3e8  bdnz 0x63c3d8
  063c3ec  ld 0, 176(1)
  063c3f0  ld 26, 112(1)
  063c3f4  ld 27, 120(1)
  063c3f8  mtlr 0
  063c3fc  ld 28, 128(1)
  063c400  ld 29, 136(1)
  063c404  ld 30, 144(1)
  063c408  ld 31, 152(1)
  063c40c  addi 1, 1, 160
  063c410  blr
  063c414  lbz 11, 23(4)
  063c418  li 6, 0
  063c41c  lbz 9, 22(4)
  063c420  lbz 0, 21(4)
  063c424  divwu 5, 11, 9
  063c428  cmpwi 6, 5, 0
  063c42c  slwi 3, 5, 1
  063c430  mullw 4, 9, 0
  063c434  cmpwi 7, 4, 0
  063c438  bf 29, 0x63c3ec
  063c43c  bf 25, 0x63c478
  063c440  clrldi 0, 5, 32
  063c444  lwz 8, -32764(30)
  063c448  mr 10, 27
  063c44c  li 7, -32768
  063c450  mtctr 0
  063c454  clrldi 9, 8, 32
  063c458  clrldi 11, 10, 32
  063c45c  addi 8, 8, 4
  063c460  addi 10, 10, 2
  063c464  lwz 0, 0(9)
  063c468  or 0, 0, 7
  063c46c  sth 0, 0(11)
  063c470  bdnz 0x63c454
  063c474  add 27, 27, 3
  063c478  addi 6, 6, 1
  063c47c  cmpw 7, 4, 6
  063c480  bf 30, 0x63c43c
  063c484  ld 0, 176(1)
  063c488  ld 26, 112(1)
  063c48c  ld 27, 120(1)
  063c490  mtlr 0
  063c494  ld 28, 128(1)
  063c498  ld 29, 136(1)
  063c49c  ld 30, 144(1)
  063c4a0  ld 31, 152(1)
  063c4a4  addi 1, 1, 160
  063c4a8  blr
  063c4ac  li 4, 0
  063c4b0  b 0x63c3c0
  063c4b4  li 0, 1
  063c4b8  mtctr 0
  063c4bc  b 0x63c3d8

FUN_0063c4c0:   # 0x63c4c0, 0xa4 bytes
  063c4c0  std 30, -16(1)
  063c4c4  lbz 0, 0(3)
  063c4c8  mr 8, 3
  063c4cc  lwz 30, -29392(2)
  063c4d0  li 5, 1
  063c4d4  cmpwi 7, 0, 255
  063c4d8  bt 30, 0x63c4e8
  063c4dc  extsw 3, 5
  063c4e0  ld 30, -16(1)
  063c4e4  blr
  063c4e8  lbz 0, 1(3)
  063c4ec  lis 6, 2
  063c4f0  cmpwi 7, 0, 251
  063c4f4  ori 6, 6, 12928
  063c4f8  bf 30, 0x63c4dc
  063c4fc  lbzu 0, 2(8)
  063c500  lwz 9, -32760(30)
  063c504  li 5, 0
  063c508  rlwinm 0, 0, 30, 26, 29
  063c50c  lwz 10, -32756(30)
  063c510  lwz 7, -32752(30)
  063c514  ld 30, -16(1)
  063c518  lwzx 11, 9, 0
  063c51c  stw 11, 0(4)
  063c520  lbz 0, 0(8)
  063c524  mullw 11, 11, 6
  063c528  rlwinm 0, 0, 0, 28, 29
  063c52c  lwzx 9, 10, 0
  063c530  stw 9, 4(4)
  063c534  lbz 0, 3(3)
  063c538  extsw 3, 5
  063c53c  divw 11, 11, 9
  063c540  rlwinm 0, 0, 28, 28, 29
  063c544  lwzx 9, 7, 0
  063c548  stb 9, 13(4)
  063c54c  lbz 0, 0(8)
  063c550  rldicl 0, 0, 63, 63
  063c554  add 11, 0, 11
  063c558  stb 0, 12(4)
  063c55c  stw 11, 8(4)
  063c560  blr

FUN_0063c564:   # 0x63c564, 0x33c bytes
  063c564  stdu 1, -432(1)
  063c568  mflr 0
  063c56c  std 31, 424(1)
  063c570  mr 31, 3
  063c574  std 0, 448(1)
  063c578  li 0, 255
  063c57c  std 30, 416(1)
  063c580  li 10, 0
  063c584  lwz 30, -29392(2)
  063c588  addi 3, 1, 120
  063c58c  lwz 11, 400(31)
  063c590  mtctr 0
  063c594  std 27, 392(1)
  063c598  std 28, 400(1)
  063c59c  std 29, 408(1)
  063c5a0  b 0x63c5ac
  063c5a4  addi 10, 10, 1
  063c5a8  bdz- 0x63c7d8
  063c5ac  add 9, 10, 11
  063c5b0  add 11, 10, 3
  063c5b4  clrldi 9, 9, 32
  063c5b8  clrldi 11, 11, 32
  063c5bc  lbz 0, 0(9)
  063c5c0  stb 0, 0(11)
  063c5c4  lwz 11, 400(31)
  063c5c8  add 9, 10, 11
  063c5cc  clrldi 9, 9, 32
  063c5d0  lbz 0, 0(9)
  063c5d4  cmpwi 7, 0, 46
  063c5d8  bf 30, 0x63c5a4
  063c5dc  addi 11, 10, 1
  063c5e0  addi 4, 1, 112
  063c5e4  cmpwi 7, 11, 254
  063c5e8  bt- 29, 0x63c638
  063c5ec  extsw 9, 11
  063c5f0  addi 4, 1, 112
  063c5f4  addi 11, 11, 1
  063c5f8  add 9, 4, 9
  063c5fc  cmpwi 7, 11, 254
  063c600  li 0, 109
  063c604  stb 0, 8(9)
  063c608  bt 29, 0x63c638
  063c60c  extsw 9, 11
  063c610  addi 11, 11, 1
  063c614  add 9, 4, 9
  063c618  cmpwi 7, 11, 254
  063c61c  li 0, 105
  063c620  stb 0, 8(9)
  063c624  bt 29, 0x63c638
  063c628  extsw 9, 11
  063c62c  li 0, 100
  063c630  add 9, 4, 9
  063c634  stb 0, 8(9)
  063c638  addi 9, 11, 1
  063c63c  lwz 10, 8(31)
  063c640  li 0, 0
  063c644  extsw 9, 9
  063c648  li 5, 0
  063c64c  add 9, 4, 9
  063c650  li 6, -7
  063c654  stb 0, 8(9)
  063c658  lwz 11, 0(10)
  063c65c  lwz 7, 12(31)
  063c660  lwz 0, 0(11)
  063c664  std 2, 40(1)
  063c668  mtctr 0
  063c66c  lwz 2, 4(11)
  063c670  bctrl
  063c674  ld 2, 40(1)
  063c678  cmpwi 7, 3, 0
  063c67c  bt- 28, 0x63c834
  063c680  lwz 27, -32740(30)
  063c684  li 4, 0
  063c688  lwz 11, 8(31)
  063c68c  li 5, 2
  063c690  lwz 6, 12(31)
  063c694  lwz 3, 112(1)
  063c698  lwz 9, 12(27)
  063c69c  lwz 10, 8(11)
  063c6a0  addi 9, 9, 1
  063c6a4  stw 9, 12(27)
  063c6a8  lwz 0, 0(10)
  063c6ac  std 2, 40(1)
  063c6b0  mtctr 0
  063c6b4  lwz 2, 4(10)
  063c6b8  bctrl
  063c6bc  ld 2, 40(1)
  063c6c0  cmpdi 3, 0
  063c6c4  mr 28, 3
  063c6c8  bt- 0, 0x63c850
  063c6cc  lwz 9, -32732(30)
  063c6d0  lwz 6, 0(9)
  063c6d4  cmpd 7, 6, 3
  063c6d8  bt 28, 0x63c7e4
  063c6dc  lwz 11, 8(31)
  063c6e0  li 4, 0
  063c6e4  lwz 6, 12(31)
  063c6e8  li 5, 0
  063c6ec  lwz 3, 112(1)
  063c6f0  lwz 9, 8(11)
  063c6f4  lwz 0, 0(9)
  063c6f8  std 2, 40(1)
  063c6fc  mtctr 0
  063c700  lwz 2, 4(9)
  063c704  bctrl
  063c708  ld 2, 40(1)
  063c70c  lwz 10, 8(31)
  063c710  clrldi 5, 28, 32
  063c714  lwz 4, 120(31)
  063c718  addi 6, 1, 116
  063c71c  lwz 9, 12(31)
  063c720  li 7, 0
  063c724  li 8, -8
  063c728  lwz 3, 112(1)
  063c72c  lwz 11, 12(10)
  063c730  lwz 0, 0(11)
  063c734  std 2, 40(1)
  063c738  mtctr 0
  063c73c  lwz 2, 4(11)
  063c740  bctrl
  063c744  ld 2, 40(1)
  063c748  lwz 9, 8(31)
  063c74c  mr 29, 3
  063c750  lwz 4, 12(31)
  063c754  lwz 3, 112(1)
  063c758  lwz 11, 16(9)
  063c75c  lwz 0, 0(11)
  063c760  std 2, 40(1)
  063c764  mtctr 0
  063c768  lwz 2, 4(11)
  063c76c  bctrl
  063c770  ld 2, 40(1)
  063c774  lwz 9, 16(27)
  063c778  cmpwi 7, 29, 0
  063c77c  addi 9, 9, 1
  063c780  stw 9, 16(27)
  063c784  bt- 28, 0x63c798
  063c788  lwz 0, 116(1)
  063c78c  li 3, 0
  063c790  cmpd 7, 0, 28
  063c794  bt 30, 0x63c7b0
  063c798  lwz 3, -32724(30)
  063c79c  li 5, 1372
  063c7a0  lwz 4, -32744(30)
  063c7a4  bl 0x61948c
  063c7a8  nop
  063c7ac  li 3, -106
  063c7b0  ld 0, 448(1)
  063c7b4  extsw 3, 3
  063c7b8  ld 27, 392(1)
  063c7bc  ld 28, 400(1)
  063c7c0  mtlr 0
  063c7c4  ld 29, 408(1)
  063c7c8  ld 30, 416(1)
  063c7cc  ld 31, 424(1)
  063c7d0  addi 1, 1, 432
  063c7d4  blr
  063c7d8  li 11, 256
  063c7dc  addi 4, 1, 112
  063c7e0  b 0x63c638
  063c7e4  lwz 4, -32744(30)
  063c7e8  li 5, 1351
  063c7ec  lwz 3, -32728(30)
  063c7f0  bl 0x61948c
  063c7f4  nop
  063c7f8  lwz 9, 8(31)
  063c7fc  lwz 4, 12(31)
  063c800  lwz 3, 112(1)
  063c804  lwz 11, 16(9)
  063c808  lwz 0, 0(11)
  063c80c  std 2, 40(1)
  063c810  mtctr 0
  063c814  lwz 2, 4(11)
  063c818  bctrl
  063c81c  ld 2, 40(1)
  063c820  lwz 9, 16(27)
  063c824  li 3, -116
  063c828  addi 9, 9, 1
  063c82c  stw 9, 16(27)
  063c830  b 0x63c7b0
  063c834  lwz 3, -32748(30)
  063c838  li 5, 1331
  063c83c  lwz 4, -32744(30)
  063c840  bl 0x61948c
  063c844  nop
  063c848  li 3, -103
  063c84c  b 0x63c7b0
  063c850  lwz 4, -32744(30)
  063c854  li 5, 1343
  063c858  lwz 3, -32736(30)
  063c85c  bl 0x61948c
  063c860  nop
  063c864  lwz 9, 8(31)
  063c868  lwz 4, 12(31)
  063c86c  lwz 3, 112(1)
  063c870  lwz 11, 16(9)
  063c874  lwz 0, 0(11)
  063c878  std 2, 40(1)
  063c87c  mtctr 0
  063c880  lwz 2, 4(11)
  063c884  bctrl
  063c888  ld 2, 40(1)
  063c88c  lwz 9, 16(27)
  063c890  li 3, -106
  063c894  addi 9, 9, 1
  063c898  stw 9, 16(27)
  063c89c  b 0x63c7b0

FUN_0063c8a0:   # 0x63c8a0, 0x7ec bytes
  063c8a0  stdu 1, -656(1)
  063c8a4  mflr 0
  063c8a8  vxor 0, 0, 0
  063c8ac  std 0, 672(1)
  063c8b0  li 0, 256
  063c8b4  lwz 5, 4(3)
  063c8b8  std 22, 576(1)
  063c8bc  addi 22, 1, 208
  063c8c0  lwz 8, 12(3)
  063c8c4  std 17, 536(1)
  063c8c8  std 18, 544(1)
  063c8cc  std 19, 552(1)
  063c8d0  std 20, 560(1)
  063c8d4  std 21, 568(1)
  063c8d8  std 23, 584(1)
  063c8dc  std 24, 592(1)
  063c8e0  std 26, 608(1)
  063c8e4  std 29, 632(1)
  063c8e8  std 30, 640(1)
  063c8ec  std 25, 600(1)
  063c8f0  std 27, 616(1)
  063c8f4  std 28, 624(1)
  063c8f8  std 31, 648(1)
  063c8fc  mr 24, 3
  063c900  lwz 30, -29392(2)
  063c904  mr 21, 4
  063c908  lwz 4, 8(3)
  063c90c  stvx 0, 1, 0
  063c910  li 0, 240
  063c914  clrldi 29, 22, 32
  063c918  li 11, 0
  063c91c  li 9, 1
  063c920  addi 6, 1, 272
  063c924  li 7, 256
  063c928  stvx 0, 1, 0
  063c92c  mr 3, 29
  063c930  stw 11, 132(1)
  063c934  stw 9, 112(1)
  063c938  stw 11, 156(1)
  063c93c  stw 11, 160(1)
  063c940  stw 11, 164(1)
  063c944  stw 11, 168(1)
  063c948  stw 11, 172(1)
  063c94c  stw 11, 124(1)
  063c950  stw 11, 128(1)
  063c954  bl 0x64098c
  063c958  nop
  063c95c  lwz 6, 12(24)
  063c960  mr 3, 29
  063c964  li 4, 12
  063c968  li 5, 1
  063c96c  li 26, 0
  063c970  bl 0x640870
  063c974  nop
  063c978  li 23, 0
  063c97c  cmpwi 7, 3, 0
  063c980  li 20, 0
  063c984  li 19, 0
  063c988  li 18, 0
  063c98c  li 17, 0
  063c990  bt 28, 0x63cf90
  063c994  cmpwi 6, 23, 0
  063c998  bt 26, 0x63c9ac
  063c99c  cmpwi 7, 20, 0
  063c9a0  bt 30, 0x63c9ac
  063c9a4  cmpwi 7, 19, 0
  063c9a8  bf- 30, 0x63ce34
  063c9ac  cmplw 7, 21, 26
  063c9b0  bf- 29, 0x63ce20
  063c9b4  lwz 0, 112(1)
  063c9b8  cmpwi 7, 0, 0
  063c9bc  bt- 30, 0x63ce20
  063c9c0  addi 25, 1, 112
  063c9c4  lwz 9, 12(24)
  063c9c8  clrldi 28, 22, 32
  063c9cc  clrldi 29, 25, 32
  063c9d0  li 27, 0
  063c9d4  mr 3, 28
  063c9d8  addi 4, 1, 116
  063c9dc  li 5, 8
  063c9e0  mr 6, 29
  063c9e4  li 7, 0
  063c9e8  li 8, -4
  063c9ec  stw 27, 112(1)
  063c9f0  bl 0x640a20
  063c9f4  nop
  063c9f8  lwz 0, 112(1)
  063c9fc  cmpwi 7, 3, 0
  063ca00  bt- 28, 0x63cee8
  063ca04  cmpwi 7, 0, 8
  063ca08  bf- 30, 0x63cee8
  063ca0c  lwz 0, 120(1)
  063ca10  addi 26, 26, 8
  063ca14  lbz 9, 116(1)
  063ca18  slwi 8, 0, 24
  063ca1c  srwi 11, 0, 24
  063ca20  rlwinm 10, 0, 24, 16, 23
  063ca24  rlwinm 0, 0, 8, 8, 15
  063ca28  extsb 9, 9
  063ca2c  or 11, 11, 10
  063ca30  or 0, 0, 8
  063ca34  cmpwi 7, 9, 102
  063ca38  or 31, 11, 0
  063ca3c  stw 31, 120(1)
  063ca40  bt 30, 0x63ca84
  063ca44  cmpwi 7, 9, 100
  063ca48  bt 30, 0x63cb78
  063ca4c  clrlwi 0, 31, 31
  063ca50  add 31, 31, 0
  063ca54  cmpwi 7, 31, 0
  063ca58  bt 30, 0x63c994
  063ca5c  mr 3, 22
  063ca60  lwz 6, 12(24)
  063ca64  clrldi 4, 31, 32
  063ca68  li 5, 1
  063ca6c  bl 0x640870
  063ca70  nop
  063ca74  cmpwi 7, 3, 0
  063ca78  bt- 28, 0x63cfc4
  063ca7c  add 26, 26, 31
  063ca80  b 0x63c994
  063ca84  lbz 0, 117(1)
  063ca88  extsb 0, 0
  063ca8c  cmpwi 7, 0, 109
  063ca90  bt 30, 0x63cbd4
  063ca94  cmpwi 7, 0, 97
  063ca98  bf 30, 0x63ca4c
  063ca9c  lbz 0, 118(1)
  063caa0  cmpwi 7, 0, 99
  063caa4  bf 30, 0x63ca4c
  063caa8  lbz 0, 119(1)
  063caac  cmpwi 7, 0, 116
  063cab0  bf 30, 0x63ca4c
  063cab4  addi 0, 1, 124
  063cab8  cmplwi 7, 31, 12
  063cabc  clrldi 4, 0, 32
  063cac0  li 9, 0
  063cac4  clrldi 3, 22, 32
  063cac8  mr 5, 31
  063cacc  stw 9, 8(4)
  063cad0  stw 9, 0(4)
  063cad4  stw 9, 4(4)
  063cad8  bt 29, 0x63d00c
  063cadc  clrldi 5, 5, 32
  063cae0  lwz 9, 12(24)
  063cae4  mr 6, 25
  063cae8  li 7, 0
  063caec  li 8, -4
  063caf0  li 20, 1
  063caf4  bl 0x640a20
  063caf8  nop
  063cafc  lwz 0, 124(1)
  063cb00  lwz 9, 128(1)
  063cb04  lwz 11, 132(1)
  063cb08  slwi 3, 0, 24
  063cb0c  slwi 29, 9, 24
  063cb10  rlwinm 7, 11, 24, 16, 23
  063cb14  slwi 28, 11, 24
  063cb18  srwi 6, 0, 24
  063cb1c  rlwinm 5, 0, 24, 16, 23
  063cb20  srwi 8, 9, 24
  063cb24  rlwinm 4, 9, 24, 16, 23
  063cb28  srwi 10, 11, 24
  063cb2c  rlwinm 0, 0, 8, 8, 15
  063cb30  rlwinm 9, 9, 8, 8, 15
  063cb34  rlwinm 11, 11, 8, 8, 15
  063cb38  or 10, 10, 7
  063cb3c  lwz 7, 112(1)
  063cb40  or 6, 6, 5
  063cb44  or 0, 0, 3
  063cb48  or 8, 8, 4
  063cb4c  or 9, 9, 29
  063cb50  or 11, 11, 28
  063cb54  or 6, 6, 0
  063cb58  or 8, 8, 9
  063cb5c  or 10, 10, 11
  063cb60  sub 31, 31, 7
  063cb64  add 26, 26, 7
  063cb68  stw 6, 124(1)
  063cb6c  stw 8, 128(1)
  063cb70  stw 10, 132(1)
  063cb74  b 0x63ca4c
  063cb78  lbz 0, 117(1)
  063cb7c  cmpwi 7, 0, 97
  063cb80  bf 30, 0x63ca4c
  063cb84  lbz 0, 118(1)
  063cb88  cmpwi 7, 0, 116
  063cb8c  bf 30, 0x63ca4c
  063cb90  lbz 0, 119(1)
  063cb94  cmpwi 7, 0, 97
  063cb98  bf 30, 0x63ca4c
  063cb9c  mr 3, 28
  063cba0  li 19, 1
  063cba4  bl 0x64093c
  063cba8  nop
  063cbac  lwz 0, 120(1)
  063cbb0  slwi 10, 0, 24
  063cbb4  srwi 9, 0, 24
  063cbb8  rlwinm 11, 0, 24, 16, 23
  063cbbc  rlwinm 0, 0, 8, 8, 15
  063cbc0  or 9, 9, 11
  063cbc4  or 0, 0, 10
  063cbc8  mr 18, 3
  063cbcc  or 17, 9, 0
  063cbd0  b 0x63ca4c
  063cbd4  lbz 0, 118(1)
  063cbd8  cmpwi 7, 0, 116
  063cbdc  bf 30, 0x63ca4c
  063cbe0  lbz 0, 119(1)
  063cbe4  cmpwi 7, 0, 32
  063cbe8  bf 30, 0x63ca4c
  063cbec  addi 0, 1, 136
  063cbf0  cmplwi 7, 31, 18
  063cbf4  clrldi 25, 0, 32
  063cbf8  li 23, 0
  063cbfc  mr 5, 31
  063cc00  sth 27, 16(25)
  063cc04  std 23, 0(25)
  063cc08  std 23, 8(25)
  063cc0c  bt 29, 0x63d004
  063cc10  lwz 9, 12(24)
  063cc14  clrldi 5, 5, 32
  063cc18  mr 6, 29
  063cc1c  li 7, 0
  063cc20  li 8, -4
  063cc24  mr 4, 25
  063cc28  mr 3, 28
  063cc2c  bl 0x640a20
  063cc30  nop
  063cc34  lwz 0, 112(1)
  063cc38  addi 4, 1, 156
  063cc3c  mr 3, 25
  063cc40  sub 31, 31, 0
  063cc44  add 26, 26, 0
  063cc48  bl 0x63c228
  063cc4c  clrldi 3, 3, 32
  063cc50  addi 4, 1, 158
  063cc54  bl 0x63c228
  063cc58  addi 4, 1, 160
  063cc5c  clrldi 3, 3, 32
  063cc60  bl 0x63c24c
  063cc64  addi 4, 1, 164
  063cc68  clrldi 3, 3, 32
  063cc6c  bl 0x63c24c
  063cc70  addi 4, 1, 168
  063cc74  clrldi 3, 3, 32
  063cc78  bl 0x63c228
  063cc7c  addi 4, 1, 170
  063cc80  clrldi 3, 3, 32
  063cc84  bl 0x63c228
  063cc88  addi 4, 1, 172
  063cc8c  clrldi 3, 3, 32
  063cc90  bl 0x63c228
  063cc94  lhz 9, 156(1)
  063cc98  cmpwi 7, 9, 1
  063cc9c  bt 30, 0x63d014
  063cca0  xoris 0, 9, 65535
  063cca4  cmpwi 7, 0, -2
  063cca8  bf 30, 0x63d070
  063ccac  addi 0, 1, 176
  063ccb0  lhz 6, 172(1)
  063ccb4  vxor 0, 0, 0
  063ccb8  clrldi 27, 0, 32
  063ccbc  cmplwi 7, 6, 29
  063ccc0  sth 23, 16(27)
  063ccc4  stvx 0, 0, 27
  063ccc8  bf- 29, 0x63d054
  063cccc  li 0, 7
  063ccd0  lwz 9, 12(24)
  063ccd4  mr 6, 29
  063ccd8  li 5, 30
  063ccdc  li 7, 0
  063cce0  li 8, -4
  063cce4  mr 3, 28
  063cce8  mr 4, 27
  063ccec  addi 28, 1, 240
  063ccf0  stb 0, 20(24)
  063ccf4  bl 0x640a20
  063ccf8  nop
  063ccfc  mr 4, 28
  063cd00  lwz 29, 112(1)
  063cd04  mr 3, 27
  063cd08  bl 0x63c228
  063cd0c  addi 4, 1, 244
  063cd10  clrldi 3, 3, 32
  063cd14  bl 0x63c24c
  063cd18  addi 4, 1, 248
  063cd1c  clrldi 3, 3, 32
  063cd20  bl 0x63c24c
  063cd24  addi 4, 1, 252
  063cd28  clrldi 3, 3, 32
  063cd2c  bl 0x63c228
  063cd30  addi 4, 1, 254
  063cd34  clrldi 3, 3, 32
  063cd38  bl 0x63c228
  063cd3c  addi 11, 1, 256
  063cd40  mr 9, 3
  063cd44  clrldi 11, 11, 32
  063cd48  addi 3, 3, 8
  063cd4c  addi 4, 1, 264
  063cd50  clrldi 3, 3, 32
  063cd54  lbz 0, 0(9)
  063cd58  lbz 10, 1(9)
  063cd5c  lbz 8, 2(9)
  063cd60  lbz 7, 3(9)
  063cd64  stb 0, 0(11)
  063cd68  stb 10, 1(11)
  063cd6c  stb 8, 2(11)
  063cd70  stb 7, 3(11)
  063cd74  lbz 0, 7(9)
  063cd78  lbz 10, 4(9)
  063cd7c  lbz 8, 5(9)
  063cd80  lbz 7, 6(9)
  063cd84  stb 0, 7(11)
  063cd88  stb 10, 4(11)
  063cd8c  stb 8, 5(11)
  063cd90  stb 7, 6(11)
  063cd94  bl 0x63c24c
  063cd98  addi 4, 1, 268
  063cd9c  clrldi 3, 3, 32
  063cda0  rlwinm 4, 4, 0, 0, 29
  063cda4  bl 0x63c24c
  063cda8  lis 0, 18401
  063cdac  lwz 9, 248(1)
  063cdb0  ori 0, 0, 17106
  063cdb4  cmpw 7, 9, 0
  063cdb8  bf- 30, 0x63d03c
  063cdbc  lhz 0, 252(1)
  063cdc0  cmpwi 7, 0, 14010
  063cdc4  bf- 30, 0x63d03c
  063cdc8  lhz 0, 254(1)
  063cdcc  cmpwi 7, 0, 19853
  063cdd0  bf- 30, 0x63d03c
  063cdd4  li 0, 8
  063cdd8  lwz 7, -32708(30)
  063cddc  mr 4, 28
  063cde0  li 8, 0
  063cde4  mtctr 0
  063cde8  add 9, 8, 4
  063cdec  add 11, 8, 7
  063cdf0  clrldi 9, 9, 32
  063cdf4  clrldi 11, 11, 32
  063cdf8  addi 8, 8, 1
  063cdfc  lbz 10, 16(9)
  063ce00  lbz 0, 8(11)
  063ce04  cmpw 7, 10, 0
  063ce08  bf 30, 0x63d03c
  063ce0c  bdnz 0x63cde8
  063ce10  sub 31, 31, 29
  063ce14  add 26, 26, 29
  063ce18  li 23, 1
  063ce1c  b 0x63ca4c
  063ce20  bt 26, 0x63cf78
  063ce24  cmpwi 7, 20, 0
  063ce28  bt 30, 0x63cf50
  063ce2c  cmpwi 7, 19, 0
  063ce30  bt 30, 0x63cfac
  063ce34  mr 3, 22
  063ce38  bl 0x640950
  063ce3c  nop
  063ce40  lwz 11, 8(24)
  063ce44  lwz 3, 4(24)
  063ce48  lwz 6, 12(24)
  063ce4c  mr 4, 18
  063ce50  li 5, 0
  063ce54  lwz 9, 8(11)
  063ce58  lwz 0, 0(9)
  063ce5c  std 2, 40(1)
  063ce60  mtctr 0
  063ce64  lwz 2, 4(9)
  063ce68  bctrl
  063ce6c  ld 2, 40(1)
  063ce70  cmpdi 7, 3, 0
  063ce74  bt 28, 0x63d024
  063ce78  lhz 8, 158(1)
  063ce7c  cmplwi 7, 8, 8
  063ce80  bt 29, 0x63cfec
  063ce84  lhz 10, 170(1)
  063ce88  li 0, 1
  063ce8c  lwz 11, 160(1)
  063ce90  li 9, 0
  063ce94  cmpwi 7, 10, 0
  063ce98  stw 0, 92(24)
  063ce9c  stw 9, 108(24)
  063cea0  stw 11, 88(24)
  063cea4  bf 30, 0x63cfe0
  063cea8  li 0, 2
  063ceac  stb 0, 19(24)
  063ceb0  lwz 11, 124(1)
  063ceb4  li 9, 1
  063ceb8  lhz 10, 168(1)
  063cebc  li 0, 1
  063cec0  li 3, 1
  063cec4  stw 0, 100(24)
  063cec8  stb 8, 23(24)
  063cecc  stw 17, 84(24)
  063ced0  std 18, 112(24)
  063ced4  stw 11, 104(24)
  063ced8  stb 9, 22(24)
  063cedc  stw 10, 96(24)
  063cee0  stb 9, 21(24)
  063cee4  b 0x63cf00
  063cee8  lwz 3, -32716(30)
  063ceec  li 5, 231
  063cef0  lwz 4, -32744(30)
  063cef4  bl 0x61948c
  063cef8  nop
  063cefc  li 3, 0
  063cf00  ld 0, 672(1)
  063cf04  extsw 3, 3
  063cf08  ld 17, 536(1)
  063cf0c  ld 18, 544(1)
  063cf10  mtlr 0
  063cf14  ld 19, 552(1)
  063cf18  ld 20, 560(1)
  063cf1c  ld 21, 568(1)
  063cf20  ld 22, 576(1)
  063cf24  ld 23, 584(1)
  063cf28  ld 24, 592(1)
  063cf2c  ld 25, 600(1)
  063cf30  ld 26, 608(1)
  063cf34  ld 27, 616(1)
  063cf38  ld 28, 624(1)
  063cf3c  ld 29, 632(1)
  063cf40  ld 30, 640(1)
  063cf44  ld 31, 648(1)
  063cf48  addi 1, 1, 656
  063cf4c  blr
  063cf50  lwz 4, -32744(30)
  063cf54  li 5, 399
  063cf58  lwz 3, -32692(30)
  063cf5c  bl 0x61948c
  063cf60  nop
  063cf64  mr 3, 22
  063cf68  bl 0x640950
  063cf6c  nop
  063cf70  li 3, 0
  063cf74  b 0x63cf00
  063cf78  lwz 4, -32744(30)
  063cf7c  li 5, 394
  063cf80  lwz 3, -32696(30)
  063cf84  bl 0x61948c
  063cf88  nop
  063cf8c  b 0x63cf64
  063cf90  lwz 3, -32720(30)
  063cf94  li 5, 210
  063cf98  lwz 4, -32744(30)
  063cf9c  bl 0x61948c
  063cfa0  nop
  063cfa4  li 3, 0
  063cfa8  b 0x63cf00
  063cfac  lwz 4, -32744(30)
  063cfb0  li 5, 404
  063cfb4  lwz 3, -32688(30)
  063cfb8  bl 0x61948c
  063cfbc  nop
  063cfc0  b 0x63cf64
  063cfc4  lwz 3, -32720(30)
  063cfc8  li 5, 386
  063cfcc  lwz 4, -32744(30)
  063cfd0  bl 0x61948c
  063cfd4  nop
  063cfd8  li 3, 0
  063cfdc  b 0x63cf00
  063cfe0  srwi 0, 10, 3
  063cfe4  stb 0, 19(24)
  063cfe8  b 0x63ceb0
  063cfec  lwz 4, -32744(30)
  063cff0  li 5, 423
  063cff4  lwz 3, -32716(30)
  063cff8  bl 0x61948c
  063cffc  nop
  063d000  b 0x63cf64
  063d004  li 5, 18
  063d008  b 0x63cc10
  063d00c  li 5, 12
  063d010  b 0x63cadc
  063d014  li 23, 1
  063d018  li 20, 1
  063d01c  stb 9, 20(24)
  063d020  b 0x63ca4c
  063d024  lwz 4, -32744(30)
  063d028  li 5, 416
  063d02c  lwz 3, -32720(30)
  063d030  bl 0x61948c
  063d034  nop
  063d038  b 0x63cf64
  063d03c  lwz 4, -32744(30)
  063d040  li 5, 322
  063d044  lwz 3, -32704(30)
  063d048  bl 0x61948c
  063d04c  nop
  063d050  b 0x63cf64
  063d054  lwz 4, -32744(30)
  063d058  clrldi 6, 6, 48
  063d05c  lwz 3, -32712(30)
  063d060  li 5, 286
  063d064  bl 0x61948c
  063d068  nop
  063d06c  b 0x63cf64
  063d070  lwz 3, -32700(30)
  063d074  li 5, 328
  063d078  lwz 4, -32744(30)
  063d07c  bl 0x61948c
  063d080  nop
  063d084  li 3, 0
  063d088  b 0x63cf00

FUN_0063d08c:   # 0x63d08c, 0x1938 bytes
  063d08c  mfcr 12
  063d090  stdu 1, -3680(1)
  063d094  std 31, 3672(1)
  063d098  mr 31, 3
  063d09c  std 14, 3536(1)
  063d0a0  std 15, 3544(1)
  063d0a4  std 16, 3552(1)
  063d0a8  std 30, 3664(1)
  063d0ac  std 17, 3560(1)
  063d0b0  std 18, 3568(1)
  063d0b4  std 19, 3576(1)
  063d0b8  std 20, 3584(1)
  063d0bc  std 21, 3592(1)
  063d0c0  std 22, 3600(1)
  063d0c4  std 23, 3608(1)
  063d0c8  std 24, 3616(1)
  063d0cc  std 25, 3624(1)
  063d0d0  std 26, 3632(1)
  063d0d4  std 27, 3640(1)
  063d0d8  std 28, 3648(1)
  063d0dc  std 29, 3656(1)
  063d0e0  lwz 30, -29392(2)
  063d0e4  mr 15, 4
  063d0e8  li 5, 12
  063d0ec  addi 4, 1, 128
  063d0f0  addi 6, 1, 112
  063d0f4  li 7, 0
  063d0f8  li 8, -4
  063d0fc  mr 14, 31
  063d100  clrldi 16, 31, 32
  063d104  stw 12, 3688(1)
  063d108  mflr 0
  063d10c  std 0, 3696(1)
  063d110  lwz 10, 8(3)
  063d114  lwz 9, 12(31)
  063d118  lwz 3, 4(3)
  063d11c  lwz 11, 12(10)
  063d120  lwz 0, 0(11)
  063d124  std 2, 40(1)
  063d128  mtctr 0
  063d12c  lwz 2, 4(11)
  063d130  bctrl
  063d134  ld 2, 40(1)
  063d138  cmpwi 7, 3, 0
  063d13c  bt 28, 0x63d14c
  063d140  lwz 0, 112(1)
  063d144  cmpwi 7, 0, 12
  063d148  bt 30, 0x63d1c8
  063d14c  lwz 3, -32684(30)
  063d150  li 5, 1403
  063d154  lwz 4, -32744(30)
  063d158  bl 0x61948c
  063d15c  nop
  063d160  li 3, 0
  063d164  ld 0, 3696(1)
  063d168  extsw 3, 3
  063d16c  lwz 12, 3688(1)
  063d170  ld 14, 3536(1)
  063d174  mtlr 0
  063d178  ld 15, 3544(1)
  063d17c  mtocrf 8, 12
  063d180  ld 16, 3552(1)
  063d184  ld 17, 3560(1)
  063d188  ld 18, 3568(1)
  063d18c  ld 19, 3576(1)
  063d190  ld 20, 3584(1)
  063d194  ld 21, 3592(1)
  063d198  ld 22, 3600(1)
  063d19c  ld 23, 3608(1)
  063d1a0  ld 24, 3616(1)
  063d1a4  ld 25, 3624(1)
  063d1a8  ld 26, 3632(1)
  063d1ac  ld 27, 3640(1)
  063d1b0  ld 28, 3648(1)
  063d1b4  ld 29, 3656(1)
  063d1b8  ld 30, 3664(1)
  063d1bc  ld 31, 3672(1)
  063d1c0  addi 1, 1, 3680
  063d1c4  blr
  063d1c8  lwz 11, 8(31)
  063d1cc  li 4, -12
  063d1d0  lwz 3, 4(31)
  063d1d4  li 5, 1
  063d1d8  lwz 6, 12(31)
  063d1dc  lwz 9, 8(11)
  063d1e0  lwz 0, 0(9)
  063d1e4  std 2, 40(1)
  063d1e8  mtctr 0
  063d1ec  lwz 2, 4(9)
  063d1f0  bctrl
  063d1f4  ld 2, 40(1)
  063d1f8  cmpdi 7, 3, 0
  063d1fc  bt 28, 0x63d3f4
  063d200  lbz 0, 128(1)
  063d204  extsb 6, 0
  063d208  cmpwi 7, 6, 82
  063d20c  bt 30, 0x63d2c4
  063d210  cmpwi 7, 6, 32
  063d214  bt 30, 0x63d368
  063d218  cmpwi 7, 6, 88
  063d21c  bt 30, 0x63d2ac
  063d220  cmpwi 7, 6, 86
  063d224  bt 30, 0x63d410
  063d228  cmpwi 7, 6, 112
  063d22c  bt 30, 0x63d49c
  063d230  lbz 7, 129(1)
  063d234  lbz 8, 130(1)
  063d238  lbz 9, 131(1)
  063d23c  lwz 4, -32744(30)
  063d240  extsw 6, 6
  063d244  extsb 7, 7
  063d248  lwz 3, -32616(30)
  063d24c  extsb 8, 8
  063d250  extsb 9, 9
  063d254  li 5, 1439
  063d258  bl 0x61948c
  063d25c  nop
  063d260  li 3, 0
  063d264  lbz 8, 21(31)
  063d268  lbz 10, 22(31)
  063d26c  clrlwi 0, 8, 24
  063d270  cmpwi 7, 0, 0
  063d274  bf 30, 0x63d280
  063d278  li 8, 1
  063d27c  stb 8, 21(31)
  063d280  lbz 0, 23(31)
  063d284  cmpwi 7, 0, 0
  063d288  bf 30, 0x63d294
  063d28c  li 0, 1
  063d290  stb 0, 23(31)
  063d294  clrlwi 0, 10, 24
  063d298  cmpwi 7, 0, 0
  063d29c  bf 30, 0x63d164
  063d2a0  li 10, 1
  063d2a4  stb 10, 22(31)
  063d2a8  b 0x63d164
  063d2ac  lbz 7, 129(1)
  063d2b0  cmpwi 7, 7, 86
  063d2b4  bt 30, 0x63d4c4
  063d2b8  lbz 8, 130(1)
  063d2bc  lbz 9, 131(1)
  063d2c0  b 0x63d23c
  063d2c4  lbz 7, 129(1)
  063d2c8  cmpwi 7, 7, 73
  063d2cc  bf 30, 0x63d2b8
  063d2d0  lbz 8, 130(1)
  063d2d4  cmpwi 7, 8, 70
  063d2d8  bt 30, 0x63d2e4
  063d2dc  lbz 9, 131(1)
  063d2e0  b 0x63d23c
  063d2e4  lbz 9, 131(1)
  063d2e8  cmpwi 7, 9, 70
  063d2ec  bf 30, 0x63d23c
  063d2f0  lbz 0, 136(1)
  063d2f4  cmpwi 7, 0, 87
  063d2f8  bf 30, 0x63d23c
  063d2fc  lbz 0, 137(1)
  063d300  cmpwi 7, 0, 65
  063d304  bf 30, 0x63d23c
  063d308  lbz 0, 138(1)
  063d30c  cmpwi 7, 0, 86
  063d310  bf 30, 0x63d23c
  063d314  lbz 0, 139(1)
  063d318  cmpwi 7, 0, 69
  063d31c  bf 30, 0x63d23c
  063d320  lwz 4, 132(1)
  063d324  mr 3, 16
  063d328  extsw 4, 4
  063d32c  bl 0x63c8a0
  063d330  cmpwi 7, 3, 0
  063d334  bt 30, 0x63d264
  063d338  lbz 8, 21(31)
  063d33c  lbz 10, 22(31)
  063d340  lwz 0, 104(31)
  063d344  cmpwi 7, 0, 0
  063d348  bf 30, 0x63d26c
  063d34c  lwz 0, 84(31)
  063d350  lwz 9, 96(31)
  063d354  lwz 11, 100(31)
  063d358  divwu 0, 0, 9
  063d35c  mullw 0, 0, 11
  063d360  stw 0, 104(31)
  063d364  b 0x63d26c
  063d368  lbz 7, 129(1)
  063d36c  cmpwi 7, 7, 75
  063d370  bf 30, 0x63d2b8
  063d374  lbz 8, 130(1)
  063d378  cmpwi 7, 8, 80
  063d37c  bf 30, 0x63d2dc
  063d380  lbz 9, 131(1)
  063d384  cmpwi 7, 9, 86
  063d388  bf 30, 0x63d23c
  063d38c  lwz 9, 8(31)
  063d390  addi 4, 1, 840
  063d394  lwz 3, 4(31)
  063d398  li 5, 280
  063d39c  addi 6, 1, 116
  063d3a0  li 7, 0
  063d3a4  li 8, -4
  063d3a8  lwz 11, 12(9)
  063d3ac  lwz 9, 12(31)
  063d3b0  lwz 0, 0(11)
  063d3b4  std 2, 40(1)
  063d3b8  mtctr 0
  063d3bc  lwz 2, 4(11)
  063d3c0  bctrl
  063d3c4  ld 2, 40(1)
  063d3c8  cmpwi 7, 3, 0
  063d3cc  bt 28, 0x63d3dc
  063d3d0  lwz 0, 116(1)
  063d3d4  cmpwi 7, 0, 280
  063d3d8  bt 30, 0x63d63c
  063d3dc  lwz 4, -32744(30)
  063d3e0  li 5, 559
  063d3e4  lwz 3, -32716(30)
  063d3e8  bl 0x61948c
  063d3ec  nop
  063d3f0  b 0x63d260
  063d3f4  lwz 3, -32680(30)
  063d3f8  li 5, 1414
  063d3fc  lwz 4, -32744(30)
  063d400  bl 0x61948c
  063d404  nop
  063d408  li 3, 0
  063d40c  b 0x63d164
  063d410  lbz 7, 129(1)
  063d414  cmpwi 7, 7, 65
  063d418  bf 30, 0x63d2b8
  063d41c  lbz 8, 130(1)
  063d420  cmpwi 7, 8, 71
  063d424  bf 30, 0x63d2dc
  063d428  lbz 9, 131(1)
  063d42c  cmpwi 7, 9, 112
  063d430  bf 30, 0x63d23c
  063d434  lwz 9, 8(31)
  063d438  addi 4, 1, 276
  063d43c  lwz 3, 4(31)
  063d440  li 5, 48
  063d444  addi 6, 1, 116
  063d448  li 7, 0
  063d44c  li 8, -4
  063d450  lwz 11, 12(9)
  063d454  lwz 9, 12(31)
  063d458  lwz 0, 0(11)
  063d45c  std 2, 40(1)
  063d460  mtctr 0
  063d464  lwz 2, 4(11)
  063d468  bctrl
  063d46c  ld 2, 40(1)
  063d470  cmpwi 7, 3, 0
  063d474  bt 28, 0x63d484
  063d478  lwz 0, 116(1)
  063d47c  cmpwi 7, 0, 48
  063d480  bt 30, 0x63d59c
  063d484  lwz 4, -32744(30)
  063d488  li 5, 504
  063d48c  lwz 3, -32716(30)
  063d490  bl 0x61948c
  063d494  nop
  063d498  b 0x63d260
  063d49c  lbz 7, 129(1)
  063d4a0  cmpwi 7, 7, 71
  063d4a4  bf 30, 0x63d2b8
  063d4a8  lbz 8, 130(1)
  063d4ac  cmpwi 7, 8, 65
  063d4b0  bf 30, 0x63d2dc
  063d4b4  lbz 9, 131(1)
  063d4b8  cmpwi 7, 9, 86
  063d4bc  bf 30, 0x63d23c
  063d4c0  b 0x63d434
  063d4c4  lbz 8, 130(1)
  063d4c8  cmpwi 7, 8, 65
  063d4cc  bf 30, 0x63d2dc
  063d4d0  lbz 9, 131(1)
  063d4d4  cmpwi 7, 9, 71
  063d4d8  bf 30, 0x63d23c
  063d4dc  lwz 11, 8(31)
  063d4e0  li 4, 0
  063d4e4  lwz 3, 4(31)
  063d4e8  li 5, 1
  063d4ec  lwz 6, 12(31)
  063d4f0  lwz 9, 8(11)
  063d4f4  lwz 0, 0(9)
  063d4f8  std 2, 40(1)
  063d4fc  mtctr 0
  063d500  lwz 2, 4(9)
  063d504  bctrl
  063d508  ld 2, 40(1)
  063d50c  cmpdi 3, 0
  063d510  std 3, 3176(1)
  063d514  bt 0, 0x63d85c
  063d518  addi 0, 1, 200
  063d51c  lwz 4, 8(31)
  063d520  addi 9, 1, 116
  063d524  lwz 5, 4(31)
  063d528  clrldi 29, 0, 32
  063d52c  lwz 8, 12(31)
  063d530  addi 6, 1, 584
  063d534  li 7, 256
  063d538  mr 3, 29
  063d53c  std 0, 3504(1)
  063d540  std 9, 3512(1)
  063d544  bl 0x64098c
  063d548  nop
  063d54c  lwz 9, 12(31)
  063d550  mr 3, 29
  063d554  addi 4, 1, 164
  063d558  li 5, 32
  063d55c  addi 6, 1, 116
  063d560  li 7, 0
  063d564  li 8, -4
  063d568  bl 0x640a20
  063d56c  nop
  063d570  lwz 0, 116(1)
  063d574  cmpwi 7, 3, 0
  063d578  bt 28, 0x63d584
  063d57c  cmpwi 7, 0, 32
  063d580  bt 30, 0x63d874
  063d584  lwz 4, -32744(30)
  063d588  li 5, 812
  063d58c  lwz 3, -32716(30)
  063d590  bl 0x61948c
  063d594  nop
  063d598  b 0x63d260
  063d59c  lis 0, 28743
  063d5a0  lwz 9, 276(1)
  063d5a4  ori 0, 0, 16726
  063d5a8  cmpw 7, 9, 0
  063d5ac  bt 30, 0x63d720
  063d5b0  lwz 7, 292(1)
  063d5b4  lwz 4, 288(1)
  063d5b8  lwz 9, 8(31)
  063d5bc  li 0, 1
  063d5c0  stw 4, 84(31)
  063d5c4  stb 0, 19(31)
  063d5c8  stb 0, 23(31)
  063d5cc  stw 7, 88(31)
  063d5d0  lwz 11, 8(9)
  063d5d4  li 4, 0
  063d5d8  lwz 3, 4(31)
  063d5dc  li 5, 1
  063d5e0  lwz 0, 0(11)
  063d5e4  std 2, 40(1)
  063d5e8  mtctr 0
  063d5ec  lwz 6, 12(31)
  063d5f0  lwz 2, 4(11)
  063d5f4  bctrl
  063d5f8  ld 2, 40(1)
  063d5fc  li 0, 1
  063d600  li 9, 0
  063d604  stw 0, 92(31)
  063d608  li 0, 16
  063d60c  lbz 8, 21(31)
  063d610  clrldi 3, 3, 32
  063d614  lbz 10, 22(31)
  063d618  stw 9, 108(31)
  063d61c  stw 0, 96(31)
  063d620  li 9, 28
  063d624  li 0, 2
  063d628  std 3, 112(31)
  063d62c  stw 9, 100(31)
  063d630  stb 0, 20(31)
  063d634  li 3, 1
  063d638  b 0x63d340
  063d63c  lwz 0, 860(1)
  063d640  lwz 8, 844(1)
  063d644  lwz 9, 848(1)
  063d648  rlwinm 7, 0, 24, 16, 23
  063d64c  srwi 3, 0, 24
  063d650  lwz 11, 852(1)
  063d654  slwi 6, 0, 24
  063d658  lwz 10, 856(1)
  063d65c  slwi 4, 9, 24
  063d660  or 3, 3, 7
  063d664  rlwinm 0, 0, 8, 8, 15
  063d668  rlwinm 7, 8, 24, 16, 23
  063d66c  or 0, 0, 6
  063d670  stw 4, 3200(1)
  063d674  stw 7, 3192(1)
  063d678  slwi 27, 8, 24
  063d67c  lwz 18, 3192(1)
  063d680  slwi 25, 11, 24
  063d684  lwz 19, 3200(1)
  063d688  slwi 24, 10, 24
  063d68c  srwi 6, 8, 24
  063d690  srwi 5, 9, 24
  063d694  rlwinm 12, 9, 24, 16, 23
  063d698  srwi 4, 11, 24
  063d69c  rlwinm 29, 11, 24, 16, 23
  063d6a0  srwi 7, 10, 24
  063d6a4  rlwinm 28, 10, 24, 16, 23
  063d6a8  rlwinm 8, 8, 8, 8, 15
  063d6ac  rlwinm 9, 9, 8, 8, 15
  063d6b0  rlwinm 11, 11, 8, 8, 15
  063d6b4  rlwinm 10, 10, 8, 8, 15
  063d6b8  or 3, 3, 0
  063d6bc  or 6, 6, 18
  063d6c0  or 8, 8, 27
  063d6c4  or 5, 5, 12
  063d6c8  or 9, 9, 19
  063d6cc  or 4, 4, 29
  063d6d0  or 11, 11, 25
  063d6d4  or 7, 7, 28
  063d6d8  or 10, 10, 24
  063d6dc  cmplwi 7, 3, 8
  063d6e0  or 6, 6, 8
  063d6e4  or 5, 5, 9
  063d6e8  or 4, 4, 11
  063d6ec  or 7, 7, 10
  063d6f0  stw 6, 844(1)
  063d6f4  stw 4, 852(1)
  063d6f8  stw 7, 856(1)
  063d6fc  stw 5, 848(1)
  063d700  stw 3, 860(1)
  063d704  bf 29, 0x63d76c
  063d708  lwz 4, -32744(30)
  063d70c  li 5, 571
  063d710  lwz 3, -32700(30)
  063d714  bl 0x61948c
  063d718  nop
  063d71c  b 0x63d260
  063d720  lwz 7, 292(1)
  063d724  lwz 4, 288(1)
  063d728  slwi 6, 7, 24
  063d72c  slwi 5, 4, 24
  063d730  srwi 10, 7, 24
  063d734  rlwinm 8, 7, 24, 16, 23
  063d738  rlwinm 9, 7, 8, 8, 15
  063d73c  srwi 11, 4, 24
  063d740  rlwinm 7, 4, 24, 16, 23
  063d744  rlwinm 0, 4, 8, 8, 15
  063d748  or 11, 11, 7
  063d74c  or 10, 10, 8
  063d750  or 9, 9, 6
  063d754  or 0, 0, 5
  063d758  or 7, 10, 9
  063d75c  or 4, 11, 0
  063d760  stw 7, 292(1)
  063d764  stw 4, 288(1)
  063d768  b 0x63d5b8
  063d76c  lwz 11, 8(31)
  063d770  addi 4, 5, -280
  063d774  lwz 3, 4(31)
  063d778  li 5, 1
  063d77c  lwz 6, 12(31)
  063d780  clrldi 4, 4, 32
  063d784  lwz 9, 8(11)
  063d788  lwz 0, 0(9)
  063d78c  std 2, 40(1)
  063d790  mtctr 0
  063d794  lwz 2, 4(9)
  063d798  bctrl
  063d79c  ld 2, 40(1)
  063d7a0  cmpdi 7, 3, 0
  063d7a4  bt 28, 0x63e994
  063d7a8  lwz 11, 852(1)
  063d7ac  li 0, 1
  063d7b0  lwz 9, 844(1)
  063d7b4  li 4, 0
  063d7b8  srwi 11, 11, 1
  063d7bc  lwz 10, 860(1)
  063d7c0  lwz 8, 8(31)
  063d7c4  li 5, 1
  063d7c8  add 9, 9, 11
  063d7cc  lwz 3, 4(31)
  063d7d0  clrlwi 7, 10, 24
  063d7d4  lwz 6, 12(31)
  063d7d8  addi 9, 9, -1
  063d7dc  stb 10, 23(31)
  063d7e0  stb 0, 19(31)
  063d7e4  lwz 10, 8(8)
  063d7e8  lwz 0, 856(1)
  063d7ec  divwu 9, 9, 11
  063d7f0  stw 0, 88(31)
  063d7f4  mullw 9, 9, 11
  063d7f8  mullw 9, 9, 7
  063d7fc  stw 9, 84(31)
  063d800  lwz 0, 0(10)
  063d804  std 2, 40(1)
  063d808  mtctr 0
  063d80c  lwz 2, 4(10)
  063d810  bctrl
  063d814  ld 2, 40(1)
  063d818  lwz 9, 852(1)
  063d81c  clrldi 3, 3, 32
  063d820  srwi 9, 9, 1
  063d824  lbz 8, 21(31)
  063d828  li 0, 0
  063d82c  lbz 10, 22(31)
  063d830  stw 9, 92(31)
  063d834  li 9, 16
  063d838  std 3, 112(31)
  063d83c  stw 0, 108(31)
  063d840  stw 9, 96(31)
  063d844  li 0, 28
  063d848  li 9, 3
  063d84c  li 3, 1
  063d850  stw 0, 100(31)
  063d854  stb 9, 20(31)
  063d858  b 0x63d340
  063d85c  lwz 4, -32744(30)
  063d860  li 5, 790
  063d864  lwz 3, -32720(30)
  063d868  bl 0x61948c
  063d86c  nop
  063d870  b 0x63d260
  063d874  lbz 0, 172(1)
  063d878  stb 0, 3487(1)
  063d87c  clrldi 0, 0, 56
  063d880  clrlwi 0, 0, 31
  063d884  cmpwi 7, 0, 0
  063d888  bt 30, 0x63e940
  063d88c  li 4, 1
  063d890  stw 4, 3172(1)
  063d894  li 6, 0
  063d898  li 7, 0
  063d89c  stw 6, 3488(1)
  063d8a0  stw 6, 3184(1)
  063d8a4  stw 6, 3188(1)
  063d8a8  stw 7, 236(1)
  063d8ac  ld 9, 3504(1)
  063d8b0  addi 4, 1, 120
  063d8b4  ld 11, 3512(1)
  063d8b8  li 5, 8
  063d8bc  clrldi 26, 9, 32
  063d8c0  lwz 9, 12(31)
  063d8c4  clrldi 25, 11, 32
  063d8c8  mr 3, 26
  063d8cc  mr 6, 25
  063d8d0  li 7, 0
  063d8d4  li 8, -4
  063d8d8  bl 0x640a20
  063d8dc  nop
  063d8e0  lwz 0, 116(1)
  063d8e4  cmpwi 7, 3, 0
  063d8e8  bt- 28, 0x63e68c
  063d8ec  cmpwi 7, 0, 8
  063d8f0  bf- 30, 0x63e68c
  063d8f4  lwz 0, 3172(1)
  063d8f8  cmpwi 4, 0, 1
  063d8fc  bt 18, 0x63d924
  063d900  lwz 0, 124(1)
  063d904  slwi 10, 0, 24
  063d908  srwi 9, 0, 24
  063d90c  rlwinm 11, 0, 24, 16, 23
  063d910  rlwinm 0, 0, 8, 8, 15
  063d914  or 9, 9, 11
  063d918  or 0, 0, 10
  063d91c  or 9, 9, 0
  063d920  stw 9, 124(1)
  063d924  lbz 0, 120(1)
  063d928  extsb 9, 0
  063d92c  cmpwi 7, 9, 48
  063d930  bt 30, 0x63dad4
  063d934  cmpwi 7, 9, 102
  063d938  bt 30, 0x63dd18
  063d93c  cmpwi 7, 9, 112
  063d940  bt 30, 0x63dfc4
  063d944  cmpwi 7, 9, 99
  063d948  bt 30, 0x63e068
  063d94c  cmpwi 7, 9, 109
  063d950  bt 30, 0x63e21c
  063d954  lwz 25, -32668(30)
  063d958  lwz 0, 0(25)
  063d95c  cmpwi 7, 0, 0
  063d960  bt 30, 0x63d978
  063d964  lwz 11, -32664(30)
  063d968  lbz 0, 0(11)
  063d96c  extsb 0, 0
  063d970  cmpw 7, 0, 9
  063d974  bt 30, 0x63d9d0
  063d978  lwz 4, 124(1)
  063d97c  b 0x63d984
  063d980  addi 4, 4, 1
  063d984  clrlwi 0, 4, 30
  063d988  cmpwi 7, 0, 0
  063d98c  bf 30, 0x63d980
  063d990  cmpwi 7, 4, 0
  063d994  bt 30, 0x63d8ac
  063d998  clrldi 4, 4, 32
  063d99c  lwz 6, 12(31)
  063d9a0  addi 3, 1, 200
  063d9a4  li 5, 1
  063d9a8  bl 0x640870
  063d9ac  nop
  063d9b0  cmpwi 7, 3, 0
  063d9b4  bf+ 28, 0x63d8ac
  063d9b8  lwz 4, -32744(30)
  063d9bc  li 5, 1142
  063d9c0  lwz 3, -32720(30)
  063d9c4  bl 0x61948c
  063d9c8  nop
  063d9cc  b 0x63d260
  063d9d0  lbz 0, 1(11)
  063d9d4  lbz 9, 121(1)
  063d9d8  extsb 0, 0
  063d9dc  extsb 9, 9
  063d9e0  cmpw 7, 9, 0
  063d9e4  bf 30, 0x63d978
  063d9e8  lbz 0, 2(11)
  063d9ec  lbz 9, 122(1)
  063d9f0  extsb 0, 0
  063d9f4  extsb 9, 9
  063d9f8  cmpw 7, 9, 0
  063d9fc  bf 30, 0x63d978
  063da00  lbz 0, 3(11)
  063da04  lbz 9, 123(1)
  063da08  extsb 0, 0
  063da0c  extsb 9, 9
  063da10  cmpw 7, 9, 0
  063da14  bf 30, 0x63d978
  063da18  lwz 29, 124(1)
  063da1c  cmpwi 7, 29, 0
  063da20  bt 30, 0x63d8ac
  063da24  addi 0, 1, 328
  063da28  lwz 26, -32660(30)
  063da2c  li 27, 0
  063da30  clrldi 24, 0, 32
  063da34  sub 28, 29, 27
  063da38  ld 20, 3512(1)
  063da3c  ld 21, 3504(1)
  063da40  mr 4, 24
  063da44  cmplwi 7, 28, 256
  063da48  clrldi 6, 20, 32
  063da4c  clrldi 3, 21, 32
  063da50  li 7, 0
  063da54  li 8, -4
  063da58  bf 29, 0x63da60
  063da5c  li 28, 256
  063da60  clrldi 29, 28, 32
  063da64  lwz 9, 12(31)
  063da68  mr 5, 29
  063da6c  bl 0x640a20
  063da70  nop
  063da74  mr 7, 29
  063da78  cmpwi 7, 3, 0
  063da7c  clrldi 5, 27, 32
  063da80  mr 6, 24
  063da84  clrldi 3, 15, 32
  063da88  bt 28, 0x63e8e0
  063da8c  lwz 0, 116(1)
  063da90  cmpw 7, 28, 0
  063da94  bf 30, 0x63e8e0
  063da98  lwz 9, 0(25)
  063da9c  lwz 8, 0(26)
  063daa0  lwz 4, 124(1)
  063daa4  lwz 0, 0(9)
  063daa8  std 2, 40(1)
  063daac  mtctr 0
  063dab0  lwz 2, 4(9)
  063dab4  bctrl
  063dab8  ld 2, 40(1)
  063dabc  lwz 0, 116(1)
  063dac0  lwz 29, 124(1)
  063dac4  add 27, 27, 0
  063dac8  cmplw 7, 29, 27
  063dacc  bt 29, 0x63da34
  063dad0  b 0x63d8ac
  063dad4  lbz 0, 121(1)
  063dad8  cmpwi 7, 0, 48
  063dadc  bf 30, 0x63d954
  063dae0  lbz 0, 122(1)
  063dae4  cmpwi 7, 0, 48
  063dae8  bf 30, 0x63d954
  063daec  lbz 0, 123(1)
  063daf0  cmpwi 7, 0, 48
  063daf4  bf+ 30, 0x63d954
  063daf8  addi 3, 1, 200
  063dafc  bl 0x640950
  063db00  nop
  063db04  lwz 11, 8(31)
  063db08  lwz 6, 12(31)
  063db0c  mr 4, 3
  063db10  lwz 3, 4(31)
  063db14  li 5, 0
  063db18  lwz 9, 8(11)
  063db1c  lwz 0, 0(9)
  063db20  std 2, 40(1)
  063db24  mtctr 0
  063db28  lwz 2, 4(9)
  063db2c  bctrl
  063db30  ld 2, 40(1)
  063db34  cmpdi 7, 3, 0
  063db38  bt 28, 0x63e880
  063db3c  lwz 0, 236(1)
  063db40  cmpwi 7, 0, 0
  063db44  bt 30, 0x63e868
  063db48  lwz 6, 268(1)
  063db4c  cmplwi 7, 6, 16
  063db50  bt 29, 0x63e898
  063db54  lwz 8, 272(1)
  063db58  mullw 0, 6, 8
  063db5c  cmplwi 7, 0, 16
  063db60  bt 29, 0x63e84c
  063db64  lwz 9, 168(1)
  063db68  ld 0, 3176(1)
  063db6c  lwz 10, 256(1)
  063db70  add 9, 0, 9
  063db74  lwz 0, 264(1)
  063db78  lwz 18, 240(1)
  063db7c  cmpwi 7, 10, 0
  063db80  lwz 11, 260(1)
  063db84  stw 0, 84(31)
  063db88  li 0, 0
  063db8c  std 9, 112(31)
  063db90  stw 0, 108(31)
  063db94  li 0, 1
  063db98  stb 6, 21(31)
  063db9c  stb 8, 22(31)
  063dba0  stw 11, 88(31)
  063dba4  stb 0, 19(31)
  063dba8  stb 18, 23(31)
  063dbac  stw 10, 92(31)
  063dbb0  bf 30, 0x63dbbc
  063dbb4  li 0, 1
  063dbb8  stw 0, 92(31)
  063dbbc  lwz 6, 244(1)
  063dbc0  addi 0, 6, -6
  063dbc4  cmplwi 7, 0, 1
  063dbc8  bf 29, 0x63e7f4
  063dbcc  cmpwi 7, 6, 8
  063dbd0  bf 30, 0x63e7d8
  063dbd4  lwz 6, 3184(1)
  063dbd8  cmpwi 7, 6, 0
  063dbdc  bt 30, 0x63e7c0
  063dbe0  lwz 7, 60(31)
  063dbe4  li 4, 1152
  063dbe8  lwz 10, 52(31)
  063dbec  li 0, 6
  063dbf0  cmpwi 7, 7, 0
  063dbf4  lbz 8, 21(31)
  063dbf8  stb 0, 20(31)
  063dbfc  stw 10, 96(31)
  063dc00  stw 4, 100(31)
  063dc04  stw 7, 104(31)
  063dc08  lbz 9, 22(31)
  063dc0c  lwz 6, 84(31)
  063dc10  bt 30, 0x63e7a8
  063dc14  clrlwi 9, 9, 24
  063dc18  lwz 24, 56(31)
  063dc1c  clrlwi 0, 8, 24
  063dc20  add 11, 7, 24
  063dc24  mullw 5, 0, 9
  063dc28  mullw 10, 10, 5
  063dc2c  divwu 0, 6, 10
  063dc30  slwi 9, 0, 10
  063dc34  slwi 0, 0, 7
  063dc38  add 0, 0, 9
  063dc3c  cmplw 7, 0, 11
  063dc40  bt 28, 0x63e788
  063dc44  addi 0, 11, 1151
  063dc48  divwu 11, 0, 4
  063dc4c  mullw 0, 10, 11
  063dc50  cmplw 7, 6, 0
  063dc54  bf 29, 0x63dc5c
  063dc58  stw 0, 84(31)
  063dc5c  cmpwi 7, 5, 1
  063dc60  bf 29, 0x63e750
  063dc64  lwz 9, 92(31)
  063dc68  cmplwi 7, 9, 7
  063dc6c  bf 29, 0x63e734
  063dc70  divwu 0, 11, 9
  063dc74  mullw 0, 0, 9
  063dc78  sub 0, 11, 0
  063dc7c  cmpwi 7, 0, 1
  063dc80  bf 30, 0x63dcbc
  063dc84  lwz 6, 104(31)
  063dc88  li 5, 743
  063dc8c  lwz 9, 100(31)
  063dc90  add 6, 6, 24
  063dc94  lwz 3, -32632(30)
  063dc98  lwz 4, -32744(30)
  063dc9c  lwz 7, 400(31)
  063dca0  divwu 0, 6, 9
  063dca4  mullw 0, 0, 9
  063dca8  sub 6, 6, 0
  063dcac  clrldi 6, 6, 32
  063dcb0  bl 0x61948c
  063dcb4  nop
  063dcb8  lbz 8, 21(31)
  063dcbc  clrlwi 11, 8, 24
  063dcc0  cmpwi 7, 11, 1
  063dcc4  bt 30, 0x63e8f8
  063dcc8  mr 4, 16
  063dccc  addi 3, 1, 1120
  063dcd0  bl 0x63c330
  063dcd4  lbz 8, 21(31)
  063dcd8  lbz 10, 22(31)
  063dcdc  clrlwi 0, 8, 24
  063dce0  clrlwi 9, 10, 24
  063dce4  mullw 0, 0, 9
  063dce8  cmpwi 7, 0, 1
  063dcec  bf 29, 0x63d634
  063dcf0  lbz 4, 3487(1)
  063dcf4  rlwinm 0, 4, 0, 30, 30
  063dcf8  cmpwi 7, 0, 0
  063dcfc  bf 30, 0x63d634
  063dd00  lwz 4, -32744(30)
  063dd04  li 5, 1280
  063dd08  lwz 3, -32620(30)
  063dd0c  bl 0x61948c
  063dd10  nop
  063dd14  b 0x63d260
  063dd18  lbz 0, 121(1)
  063dd1c  cmpwi 7, 0, 109
  063dd20  bf 30, 0x63d954
  063dd24  lbz 0, 122(1)
  063dd28  cmpwi 7, 0, 97
  063dd2c  bf 30, 0x63d954
  063dd30  lbz 0, 123(1)
  063dd34  cmpwi 7, 0, 116
  063dd38  bf 30, 0x63d954
  063dd3c  addi 4, 1, 232
  063dd40  lwz 11, 124(1)
  063dd44  li 0, 0
  063dd48  clrldi 9, 4, 32
  063dd4c  cmplwi 7, 11, 35
  063dd50  stw 0, 40(9)
  063dd54  std 0, 0(9)
  063dd58  std 0, 8(9)
  063dd5c  std 0, 16(9)
  063dd60  std 0, 24(9)
  063dd64  std 0, 32(9)
  063dd68  bt 29, 0x63e728
  063dd6c  stw 11, 236(1)
  063dd70  addi 4, 4, 8
  063dd74  lwz 5, 236(1)
  063dd78  addi 3, 1, 200
  063dd7c  lwz 9, 12(31)
  063dd80  rlwinm 4, 4, 0, 0, 28
  063dd84  addi 6, 1, 116
  063dd88  li 7, 0
  063dd8c  li 8, -4
  063dd90  bl 0x640a20
  063dd94  nop
  063dd98  lwz 0, 116(1)
  063dd9c  cmpwi 7, 3, 0
  063dda0  bt- 28, 0x63e710
  063dda4  lwz 4, 236(1)
  063dda8  cmpw 7, 4, 0
  063ddac  stw 4, 3488(1)
  063ddb0  bf- 30, 0x63e710
  063ddb4  bt 18, 0x63e700
  063ddb8  lwz 18, 240(1)
  063ddbc  lwz 12, 268(1)
  063ddc0  srwi 23, 18, 24
  063ddc4  lwz 9, 256(1)
  063ddc8  rlwinm 26, 18, 24, 16, 23
  063ddcc  lwz 11, 260(1)
  063ddd0  mtctr 23
  063ddd4  lwz 10, 248(1)
  063ddd8  mtlr 26
  063dddc  lwz 8, 264(1)
  063dde0  slwi 4, 12, 24
  063dde4  lwz 17, 272(1)
  063dde8  lwz 7, 252(1)
  063ddec  slwi 6, 9, 24
  063ddf0  stw 4, 3236(1)
  063ddf4  slwi 19, 11, 24
  063ddf8  lwz 0, 244(1)
  063ddfc  slwi 20, 10, 24
  063de00  slwi 21, 8, 24
  063de04  srwi 4, 12, 24
  063de08  slwi 27, 18, 24
  063de0c  rlwinm 18, 18, 8, 8, 15
  063de10  stw 6, 3208(1)
  063de14  stw 19, 3212(1)
  063de18  stw 20, 3216(1)
  063de1c  stw 21, 3220(1)
  063de20  slwi 22, 7, 24
  063de24  stw 4, 3228(1)
  063de28  rlwinm 6, 12, 24, 16, 23
  063de2c  rlwinm 19, 17, 24, 16, 23
  063de30  rlwinm 20, 9, 24, 16, 23
  063de34  rlwinm 21, 11, 24, 16, 23
  063de38  srwi 5, 9, 24
  063de3c  srwi 4, 11, 24
  063de40  stw 18, 3204(1)
  063de44  srwi 18, 17, 24
  063de48  slwi 24, 0, 24
  063de4c  stw 22, 3224(1)
  063de50  stw 6, 3232(1)
  063de54  stw 19, 3244(1)
  063de58  rlwinm 22, 10, 24, 16, 23
  063de5c  rlwinm 19, 0, 24, 16, 23
  063de60  srwi 6, 0, 24
  063de64  srwi 3, 10, 24
  063de68  rlwinm 0, 0, 8, 8, 15
  063de6c  or 5, 5, 20
  063de70  lwz 20, 3212(1)
  063de74  or 4, 4, 21
  063de78  lwz 21, 3216(1)
  063de7c  rlwinm 11, 11, 8, 8, 15
  063de80  rlwinm 10, 10, 8, 8, 15
  063de84  stw 18, 3240(1)
  063de88  mflr 18
  063de8c  stw 0, 3520(1)
  063de90  slwi 25, 17, 24
  063de94  mfctr 0
  063de98  rlwinm 17, 17, 8, 8, 15
  063de9c  or 11, 11, 20
  063dea0  lwz 20, 3240(1)
  063dea4  or 10, 10, 21
  063dea8  lwz 21, 3244(1)
  063deac  rlwinm 23, 8, 24, 16, 23
  063deb0  rlwinm 26, 7, 24, 16, 23
  063deb4  stw 17, 3252(1)
  063deb8  srwi 29, 8, 24
  063debc  or 17, 0, 18
  063dec0  lwz 0, 3204(1)
  063dec4  lwz 18, 3520(1)
  063dec8  srwi 28, 7, 24
  063decc  or 6, 6, 19
  063ded0  lwz 19, 3208(1)
  063ded4  or 3, 3, 22
  063ded8  lwz 22, 3220(1)
  063dedc  or 20, 20, 21
  063dee0  rlwinm 9, 9, 8, 8, 15
  063dee4  rlwinm 8, 8, 8, 8, 15
  063dee8  or 27, 0, 27
  063deec  or 9, 9, 19
  063def0  lwz 19, 3236(1)
  063def4  or 0, 18, 24
  063def8  lwz 18, 3232(1)
  063defc  or 29, 29, 23
  063df00  lwz 23, 3224(1)
  063df04  or 8, 8, 22
  063df08  or 28, 28, 26
  063df0c  lwz 26, 3228(1)
  063df10  rlwinm 12, 12, 8, 8, 15
  063df14  stw 20, 3248(1)
  063df18  rlwinm 7, 7, 8, 8, 15
  063df1c  lwz 22, 3252(1)
  063df20  or 24, 26, 18
  063df24  or 7, 7, 23
  063df28  or 12, 12, 19
  063df2c  or 25, 22, 25
  063df30  or 18, 17, 27
  063df34  or 6, 6, 0
  063df38  or 5, 5, 9
  063df3c  or 4, 4, 11
  063df40  or 3, 3, 10
  063df44  or 29, 29, 8
  063df48  or 28, 28, 7
  063df4c  or 12, 24, 12
  063df50  or 17, 20, 25
  063df54  stw 6, 244(1)
  063df58  stw 5, 256(1)
  063df5c  stw 4, 260(1)
  063df60  stw 3, 248(1)
  063df64  stw 29, 264(1)
  063df68  stw 28, 252(1)
  063df6c  stw 18, 240(1)
  063df70  stw 12, 268(1)
  063df74  stw 17, 272(1)
  063df78  cmpwi 7, 12, 0
  063df7c  li 23, 1
  063df80  stw 23, 3188(1)
  063df84  bf 30, 0x63df98
  063df88  li 24, 0
  063df8c  li 0, 1
  063df90  stw 24, 3188(1)
  063df94  stw 0, 268(1)
  063df98  cmpwi 7, 17, 0
  063df9c  bf 30, 0x63dfa8
  063dfa0  li 17, 1
  063dfa4  stw 17, 272(1)
  063dfa8  divwu 0, 18, 17
  063dfac  cmplwi 7, 0, 8
  063dfb0  bt- 29, 0x63e6e4
  063dfb4  lwz 0, 124(1)
  063dfb8  lwz 26, 3488(1)
  063dfbc  sub 4, 0, 26
  063dfc0  b 0x63d984
  063dfc4  lbz 0, 121(1)
  063dfc8  cmpwi 7, 0, 109
  063dfcc  bf 30, 0x63d954
  063dfd0  lbz 0, 122(1)
  063dfd4  cmpwi 7, 0, 111
  063dfd8  bf 30, 0x63d954
  063dfdc  lbz 0, 123(1)
  063dfe0  cmpwi 7, 0, 100
  063dfe4  bf 30, 0x63d954
  063dfe8  addi 4, 1, 140
  063dfec  lwz 11, 124(1)
  063dff0  li 0, 0
  063dff4  clrldi 9, 4, 32
  063dff8  cmplwi 7, 11, 15
  063dffc  stw 0, 20(9)
  063e000  stw 0, 0(9)
  063e004  stw 0, 4(9)
  063e008  stw 0, 8(9)
  063e00c  stw 0, 12(9)
  063e010  stw 0, 16(9)
  063e014  bt 29, 0x63e934
  063e018  stw 11, 144(1)
  063e01c  addi 4, 4, 8
  063e020  lwz 5, 144(1)
  063e024  addi 3, 1, 200
  063e028  lwz 9, 12(31)
  063e02c  rlwinm 4, 4, 0, 0, 29
  063e030  addi 6, 1, 116
  063e034  li 7, 0
  063e038  li 8, -4
  063e03c  bl 0x640a20
  063e040  nop
  063e044  lwz 0, 116(1)
  063e048  cmpwi 7, 3, 0
  063e04c  bt- 28, 0x63e91c
  063e050  lwz 4, 144(1)
  063e054  cmpw 7, 4, 0
  063e058  bf- 30, 0x63e91c
  063e05c  lwz 0, 124(1)
  063e060  sub 4, 0, 4
  063e064  b 0x63d984
  063e068  lbz 0, 121(1)
  063e06c  cmpwi 7, 0, 112
  063e070  bf 30, 0x63d954
  063e074  lbz 0, 122(1)
  063e078  cmpwi 7, 0, 97
  063e07c  bf 30, 0x63d954
  063e080  lbz 0, 123(1)
  063e084  cmpwi 7, 0, 110
  063e088  bf 30, 0x63d954
  063e08c  mr 27, 14
  063e090  li 0, 0
  063e094  mr 3, 26
  063e098  li 5, 16
  063e09c  mr 6, 25
  063e0a0  stwu 0, 128(27)
  063e0a4  stw 0, 12(27)
  063e0a8  stw 0, 4(27)
  063e0ac  stw 0, 8(27)
  063e0b0  clrldi 4, 27, 32
  063e0b4  lwz 9, 12(31)
  063e0b8  li 7, 0
  063e0bc  lwz 24, 124(1)
  063e0c0  li 8, -4
  063e0c4  bl 0x640a20
  063e0c8  nop
  063e0cc  lwz 0, 116(1)
  063e0d0  cmpwi 7, 3, 0
  063e0d4  bt- 28, 0x63e6cc
  063e0d8  cmpwi 7, 0, 16
  063e0dc  bf- 30, 0x63e6cc
  063e0e0  bt 18, 0x63e6c4
  063e0e4  lwz 8, 0(27)
  063e0e8  lwz 0, 4(27)
  063e0ec  lwz 9, 8(27)
  063e0f0  slwi 3, 8, 24
  063e0f4  slwi 29, 0, 24
  063e0f8  slwi 28, 9, 24
  063e0fc  srwi 7, 8, 24
  063e100  rlwinm 6, 8, 24, 16, 23
  063e104  srwi 11, 0, 24
  063e108  rlwinm 5, 0, 24, 16, 23
  063e10c  srwi 10, 9, 24
  063e110  rlwinm 4, 9, 24, 16, 23
  063e114  rlwinm 8, 8, 8, 8, 15
  063e118  rlwinm 0, 0, 8, 8, 15
  063e11c  rlwinm 9, 9, 8, 8, 15
  063e120  or 7, 7, 6
  063e124  or 8, 8, 3
  063e128  or 11, 11, 5
  063e12c  or 0, 0, 29
  063e130  or 10, 10, 4
  063e134  or 9, 9, 28
  063e138  or 8, 7, 8
  063e13c  or 11, 11, 0
  063e140  or 10, 10, 9
  063e144  stw 11, 4(27)
  063e148  stw 10, 8(27)
  063e14c  stw 8, 0(27)
  063e150  lwz 9, 268(1)
  063e154  lwz 0, 272(1)
  063e158  mullw 0, 9, 0
  063e15c  divwu 3, 8, 0
  063e160  cmplwi 7, 3, 8
  063e164  bt- 29, 0x63e6a4
  063e168  slwi 0, 9, 4
  063e16c  lwz 9, 240(1)
  063e170  addi 28, 24, -16
  063e174  mullw 0, 0, 9
  063e178  cmplw 7, 28, 0
  063e17c  mr 29, 28
  063e180  bf 29, 0x63e188
  063e184  mr 29, 0
  063e188  addi 27, 1, 1120
  063e18c  lwz 9, 12(31)
  063e190  mr 3, 26
  063e194  mr 4, 27
  063e198  mr 6, 25
  063e19c  clrldi 5, 29, 32
  063e1a0  li 7, 0
  063e1a4  li 8, -4
  063e1a8  bl 0x640a20
  063e1ac  nop
  063e1b0  lwz 4, 116(1)
  063e1b4  cmpwi 7, 3, 0
  063e1b8  bt- 28, 0x63e9ac
  063e1bc  cmpw 7, 4, 29
  063e1c0  bf- 30, 0x63e9ac
  063e1c4  bt 18, 0x63e20c
  063e1c8  li 0, 128
  063e1cc  mr 6, 27
  063e1d0  li 7, 0
  063e1d4  mtctr 0
  063e1d8  add 10, 7, 6
  063e1dc  addi 7, 7, 16
  063e1e0  clrldi 10, 10, 32
  063e1e4  lwz 0, 0(10)
  063e1e8  slwi 8, 0, 24
  063e1ec  srwi 9, 0, 24
  063e1f0  rlwinm 11, 0, 24, 16, 23
  063e1f4  rlwinm 0, 0, 8, 8, 15
  063e1f8  or 9, 9, 11
  063e1fc  or 0, 0, 8
  063e200  or 9, 9, 0
  063e204  stw 9, 0(10)
  063e208  bdnz+ 0x63e1d8
  063e20c  li 0, 1
  063e210  sub 4, 28, 4
  063e214  stb 0, 124(31)
  063e218  b 0x63d984
  063e21c  lbz 0, 121(1)
  063e220  cmpwi 7, 0, 112
  063e224  bf 30, 0x63d954
  063e228  lbz 0, 122(1)
  063e22c  cmpwi 7, 0, 105
  063e230  bf 30, 0x63d954
  063e234  lbz 0, 123(1)
  063e238  cmpwi 7, 0, 110
  063e23c  bf 30, 0x63d954
  063e240  addi 4, 14, 24
  063e244  lwz 11, 124(1)
  063e248  mr 3, 26
  063e24c  lwz 9, 12(31)
  063e250  clrldi 4, 4, 32
  063e254  mr 6, 25
  063e258  li 5, 60
  063e25c  li 7, 0
  063e260  li 8, -4
  063e264  stw 11, 3168(1)
  063e268  bl 0x640a20
  063e26c  nop
  063e270  lwz 0, 116(1)
  063e274  cmpwi 7, 3, 0
  063e278  bt- 28, 0x63e674
  063e27c  cmpwi 7, 0, 60
  063e280  bf- 30, 0x63e674
  063e284  bt 18, 0x63e658
  063e288  lwz 12, 76(31)
  063e28c  lwz 11, 32(31)
  063e290  mtctr 12
  063e294  lwz 10, 36(31)
  063e298  lwz 8, 40(31)
  063e29c  slwi 19, 11, 24
  063e2a0  lwz 9, 28(31)
  063e2a4  slwi 20, 10, 24
  063e2a8  lwz 29, 64(31)
  063e2ac  slwi 21, 8, 24
  063e2b0  lwz 27, 72(31)
  063e2b4  slwi 18, 9, 24
  063e2b8  lwz 0, 24(31)
  063e2bc  lwz 7, 44(31)
  063e2c0  lwz 6, 48(31)
  063e2c4  slwi 24, 0, 24
  063e2c8  lwz 5, 52(31)
  063e2cc  slwi 22, 7, 24
  063e2d0  lwz 4, 56(31)
  063e2d4  slwi 23, 6, 24
  063e2d8  lwz 3, 60(31)
  063e2dc  slwi 26, 5, 24
  063e2e0  lwz 28, 68(31)
  063e2e4  slwi 12, 4, 24
  063e2e8  lwz 25, 80(31)
  063e2ec  stw 19, 3288(1)
  063e2f0  stw 20, 3304(1)
  063e2f4  slwi 19, 29, 24
  063e2f8  slwi 20, 27, 24
  063e2fc  stw 21, 3320(1)
  063e300  stw 18, 3272(1)
  063e304  stw 19, 3408(1)
  063e308  slwi 18, 3, 24
  063e30c  rlwinm 19, 9, 24, 16, 23
  063e310  stw 20, 3428(1)
  063e314  srwi 20, 11, 24
  063e318  stw 22, 3336(1)
  063e31c  stw 23, 3352(1)
  063e320  slwi 22, 25, 24
  063e324  srwi 23, 0, 24
  063e328  stw 26, 3364(1)
  063e32c  stw 18, 3392(1)
  063e330  rlwinm 26, 0, 24, 16, 23
  063e334  mfctr 21
  063e338  srwi 18, 9, 24
  063e33c  slwi 21, 21, 24
  063e340  stw 19, 3268(1)
  063e344  stw 21, 3444(1)
  063e348  srwi 19, 7, 24
  063e34c  rlwinm 21, 11, 24, 16, 23
  063e350  stw 20, 3276(1)
  063e354  rlwinm 20, 7, 24, 16, 23
  063e358  stw 12, 3376(1)
  063e35c  stw 22, 3456(1)
  063e360  stw 23, 3256(1)
  063e364  stw 26, 3260(1)
  063e368  stw 18, 3264(1)
  063e36c  stw 21, 3280(1)
  063e370  stw 19, 3324(1)
  063e374  stw 20, 3328(1)
  063e378  rlwinm 19, 4, 24, 16, 23
  063e37c  srwi 20, 3, 24
  063e380  srwi 22, 10, 24
  063e384  rlwinm 23, 10, 24, 16, 23
  063e388  stw 19, 3372(1)
  063e38c  stw 20, 3380(1)
  063e390  srwi 19, 27, 24
  063e394  rlwinm 20, 27, 24, 16, 23
  063e398  stw 22, 3292(1)
  063e39c  stw 23, 3296(1)
  063e3a0  srwi 21, 6, 24
  063e3a4  rlwinm 22, 6, 24, 16, 23
  063e3a8  srwi 23, 5, 24
  063e3ac  stw 19, 3420(1)
  063e3b0  stw 20, 3424(1)
  063e3b4  lwz 19, 3256(1)
  063e3b8  srwi 26, 8, 24
  063e3bc  lwz 20, 3260(1)
  063e3c0  rlwinm 18, 8, 24, 16, 23
  063e3c4  stw 21, 3340(1)
  063e3c8  or 19, 19, 20
  063e3cc  lwz 20, 3292(1)
  063e3d0  rlwinm 21, 3, 24, 16, 23
  063e3d4  stw 22, 3344(1)
  063e3d8  stw 23, 3356(1)
  063e3dc  srwi 22, 29, 24
  063e3e0  rlwinm 23, 29, 24, 16, 23
  063e3e4  stw 21, 3384(1)
  063e3e8  mfctr 21
  063e3ec  stw 22, 3396(1)
  063e3f0  stw 23, 3400(1)
  063e3f4  mfctr 22
  063e3f8  stw 26, 3308(1)
  063e3fc  stw 18, 3312(1)
  063e400  mfctr 23
  063e404  rlwinm 26, 5, 24, 16, 23
  063e408  mtctr 19
  063e40c  srwi 18, 4, 24
  063e410  stw 26, 3360(1)
  063e414  stw 18, 3368(1)
  063e418  srwi 26, 28, 24
  063e41c  lwz 19, 3288(1)
  063e420  rlwinm 18, 28, 24, 16, 23
  063e424  srwi 21, 21, 24
  063e428  rlwinm 22, 22, 24, 16, 23
  063e42c  stw 26, 3412(1)
  063e430  stw 18, 3416(1)
  063e434  srwi 26, 25, 24
  063e438  rlwinm 18, 25, 24, 16, 23
  063e43c  stw 21, 3432(1)
  063e440  stw 22, 3436(1)
  063e444  lwz 21, 3264(1)
  063e448  rlwinm 0, 0, 8, 8, 15
  063e44c  lwz 22, 3268(1)
  063e450  rlwinm 23, 23, 8, 8, 15
  063e454  stw 26, 3448(1)
  063e458  stw 18, 3452(1)
  063e45c  or 0, 0, 24
  063e460  lwz 18, 3280(1)
  063e464  or 24, 21, 22
  063e468  lwz 26, 3276(1)
  063e46c  lwz 21, 3296(1)
  063e470  rlwinm 9, 9, 8, 8, 15
  063e474  or 26, 26, 18
  063e478  or 20, 20, 21
  063e47c  stw 23, 3440(1)
  063e480  lwz 23, 3272(1)
  063e484  rlwinm 11, 11, 8, 8, 15
  063e488  stw 26, 3284(1)
  063e48c  or 9, 9, 23
  063e490  stw 20, 3300(1)
  063e494  lwz 26, 3312(1)
  063e498  or 11, 11, 19
  063e49c  lwz 23, 3308(1)
  063e4a0  rlwinm 10, 10, 8, 8, 15
  063e4a4  lwz 22, 3304(1)
  063e4a8  rlwinm 8, 8, 8, 8, 15
  063e4ac  or 23, 23, 26
  063e4b0  lwz 20, 3328(1)
  063e4b4  lwz 19, 3324(1)
  063e4b8  or 10, 10, 22
  063e4bc  stw 23, 3316(1)
  063e4c0  or 19, 19, 20
  063e4c4  lwz 23, 3344(1)
  063e4c8  lwz 22, 3340(1)
  063e4cc  rlwinm 7, 7, 8, 8, 15
  063e4d0  lwz 18, 3320(1)
  063e4d4  rlwinm 6, 6, 8, 8, 15
  063e4d8  stw 19, 3332(1)
  063e4dc  lwz 21, 3336(1)
  063e4e0  or 22, 22, 23
  063e4e4  lwz 26, 3352(1)
  063e4e8  or 8, 8, 18
  063e4ec  lwz 19, 3356(1)
  063e4f0  or 7, 7, 21
  063e4f4  lwz 20, 3360(1)
  063e4f8  or 6, 6, 26
  063e4fc  stw 22, 3348(1)
  063e500  or 18, 19, 20
  063e504  lwz 21, 3364(1)
  063e508  lwz 22, 3368(1)
  063e50c  rlwinm 5, 5, 8, 8, 15
  063e510  lwz 23, 3372(1)
  063e514  rlwinm 4, 4, 8, 8, 15
  063e518  lwz 26, 3376(1)
  063e51c  slwi 12, 28, 24
  063e520  lwz 20, 3384(1)
  063e524  or 17, 22, 23
  063e528  lwz 19, 3380(1)
  063e52c  or 4, 4, 26
  063e530  lwz 23, 3400(1)
  063e534  or 5, 5, 21
  063e538  or 19, 19, 20
  063e53c  lwz 21, 3392(1)
  063e540  lwz 26, 3408(1)
  063e544  rlwinm 3, 3, 8, 8, 15
  063e548  lwz 22, 3396(1)
  063e54c  rlwinm 29, 29, 8, 8, 15
  063e550  rlwinm 28, 28, 8, 8, 15
  063e554  lwz 20, 3416(1)
  063e558  stw 19, 3388(1)
  063e55c  or 22, 22, 23
  063e560  lwz 19, 3412(1)
  063e564  or 3, 3, 21
  063e568  lwz 21, 3420(1)
  063e56c  or 29, 29, 26
  063e570  lwz 26, 3424(1)
  063e574  or 28, 28, 12
  063e578  lwz 12, 3428(1)
  063e57c  rlwinm 27, 27, 8, 8, 15
  063e580  stw 22, 3404(1)
  063e584  or 23, 19, 20
  063e588  lwz 19, 3432(1)
  063e58c  or 22, 21, 26
  063e590  lwz 20, 3436(1)
  063e594  lwz 26, 3440(1)
  063e598  or 27, 27, 12
  063e59c  lwz 12, 3444(1)
  063e5a0  or 21, 19, 20
  063e5a4  or 9, 24, 9
  063e5a8  lwz 24, 3284(1)
  063e5ac  or 20, 26, 12
  063e5b0  lwz 26, 3448(1)
  063e5b4  lwz 12, 3452(1)
  063e5b8  rlwinm 25, 25, 8, 8, 15
  063e5bc  or 11, 24, 11
  063e5c0  lwz 24, 3332(1)
  063e5c4  or 19, 26, 12
  063e5c8  lwz 26, 3456(1)
  063e5cc  or 7, 24, 7
  063e5d0  mfctr 12
  063e5d4  or 25, 25, 26
  063e5d8  lwz 26, 3300(1)
  063e5dc  or 0, 12, 0
  063e5e0  lwz 12, 3316(1)
  063e5e4  or 10, 26, 10
  063e5e8  lwz 26, 3348(1)
  063e5ec  or 8, 12, 8
  063e5f0  lwz 12, 3404(1)
  063e5f4  or 24, 17, 4
  063e5f8  lwz 4, 3388(1)
  063e5fc  or 6, 26, 6
  063e600  or 5, 18, 5
  063e604  or 3, 4, 3
  063e608  or 29, 12, 29
  063e60c  or 28, 23, 28
  063e610  or 27, 22, 27
  063e614  or 26, 21, 20
  063e618  or 25, 19, 25
  063e61c  stw 0, 24(31)
  063e620  stw 9, 28(31)
  063e624  stw 11, 32(31)
  063e628  stw 10, 36(31)
  063e62c  stw 8, 40(31)
  063e630  stw 7, 44(31)
  063e634  stw 6, 48(31)
  063e638  stw 5, 52(31)
  063e63c  stw 24, 56(31)
  063e640  stw 3, 60(31)
  063e644  stw 29, 64(31)
  063e648  stw 28, 68(31)
  063e64c  stw 27, 72(31)
  063e650  stw 26, 76(31)
  063e654  stw 25, 80(31)
  063e658  lwz 18, 3168(1)
  063e65c  li 19, 1
  063e660  li 0, 0
  063e664  addi 4, 18, -60
  063e668  stw 19, 3184(1)
  063e66c  stw 0, 72(31)
  063e670  b 0x63d984
  063e674  lwz 4, -32744(30)
  063e678  li 5, 1060
  063e67c  lwz 3, -32716(30)
  063e680  bl 0x61948c
  063e684  nop
  063e688  b 0x63d260
  063e68c  lwz 4, -32744(30)
  063e690  li 5, 852
  063e694  lwz 3, -32716(30)
  063e698  bl 0x61948c
  063e69c  nop
  063e6a0  b 0x63d260
  063e6a4  clrldi 6, 3, 32
  063e6a8  lwz 4, -32744(30)
  063e6ac  lwz 3, -32672(30)
  063e6b0  li 5, 1004
  063e6b4  li 7, 8
  063e6b8  bl 0x61948c
  063e6bc  nop
  063e6c0  b 0x63d260
  063e6c4  lwz 8, 0(27)
  063e6c8  b 0x63e150
  063e6cc  lwz 4, -32744(30)
  063e6d0  li 5, 988
  063e6d4  lwz 3, -32716(30)
  063e6d8  bl 0x61948c
  063e6dc  nop
  063e6e0  b 0x63d260
  063e6e4  lwz 4, -32744(30)
  063e6e8  clrldi 6, 18, 32
  063e6ec  lwz 3, -32676(30)
  063e6f0  li 5, 931
  063e6f4  bl 0x61948c
  063e6f8  nop
  063e6fc  b 0x63d260
  063e700  lwz 18, 240(1)
  063e704  lwz 12, 268(1)
  063e708  lwz 17, 272(1)
  063e70c  b 0x63df78
  063e710  lwz 4, -32744(30)
  063e714  li 5, 896
  063e718  lwz 3, -32716(30)
  063e71c  bl 0x61948c
  063e720  nop
  063e724  b 0x63d260
  063e728  li 6, 36
  063e72c  stw 6, 236(1)
  063e730  b 0x63dd70
  063e734  lwz 4, -32744(30)
  063e738  li 5, 734
  063e73c  lwz 3, -32636(30)
  063e740  li 6, 8
  063e744  bl 0x61948c
  063e748  nop
  063e74c  b 0x63d260
  063e750  lwz 6, 92(31)
  063e754  cmplwi 7, 6, 1
  063e758  bf 29, 0x63dcbc
  063e75c  clrldi 6, 6, 32
  063e760  lwz 3, -32628(30)
  063e764  lwz 4, -32744(30)
  063e768  li 5, 752
  063e76c  lwz 7, 400(31)
  063e770  bl 0x61948c
  063e774  nop
  063e778  li 0, 1
  063e77c  lbz 8, 21(31)
  063e780  stw 0, 92(31)
  063e784  b 0x63dcbc
  063e788  lwz 4, -32744(30)
  063e78c  clrldi 6, 24, 32
  063e790  clrldi 7, 7, 32
  063e794  lwz 3, -32640(30)
  063e798  li 5, 714
  063e79c  bl 0x61948c
  063e7a0  nop
  063e7a4  b 0x63d260
  063e7a8  lwz 4, -32744(30)
  063e7ac  li 5, 706
  063e7b0  lwz 3, -32644(30)
  063e7b4  bl 0x61948c
  063e7b8  nop
  063e7bc  b 0x63d260
  063e7c0  lwz 4, -32744(30)
  063e7c4  li 5, 1238
  063e7c8  lwz 3, -32648(30)
  063e7cc  bl 0x61948c
  063e7d0  nop
  063e7d4  b 0x63d260
  063e7d8  lwz 4, -32744(30)
  063e7dc  clrldi 6, 6, 32
  063e7e0  lwz 3, -32624(30)
  063e7e4  li 5, 1257
  063e7e8  bl 0x61948c
  063e7ec  nop
  063e7f0  b 0x63d260
  063e7f4  lwz 4, 3188(1)
  063e7f8  li 0, 4
  063e7fc  lwz 11, 252(1)
  063e800  li 9, 16
  063e804  cmpwi 7, 4, 0
  063e808  stb 0, 20(31)
  063e80c  li 0, 28
  063e810  stw 9, 96(31)
  063e814  stw 0, 100(31)
  063e818  stw 11, 104(31)
  063e81c  bf 30, 0x63e8d8
  063e820  cmpwi 7, 18, 1
  063e824  bt 30, 0x63e8d0
  063e828  cmpwi 7, 18, 2
  063e82c  bt 30, 0x63e8b4
  063e830  li 0, 1
  063e834  stb 18, 21(31)
  063e838  stb 0, 23(31)
  063e83c  li 10, 1
  063e840  lbz 8, 21(31)
  063e844  stb 10, 22(31)
  063e848  b 0x63dcbc
  063e84c  lwz 4, -32744(30)
  063e850  clrldi 6, 8, 32
  063e854  lwz 3, -32652(30)
  063e858  li 5, 1175
  063e85c  bl 0x61948c
  063e860  nop
  063e864  b 0x63d260
  063e868  lwz 4, -32744(30)
  063e86c  li 5, 1164
  063e870  lwz 3, -32700(30)
  063e874  bl 0x61948c
  063e878  nop
  063e87c  b 0x63d260
  063e880  lwz 4, -32744(30)
  063e884  li 5, 1157
  063e888  lwz 3, -32720(30)
  063e88c  bl 0x61948c
  063e890  nop
  063e894  b 0x63d260
  063e898  lwz 4, -32744(30)
  063e89c  clrldi 6, 6, 32
  063e8a0  lwz 3, -32656(30)
  063e8a4  li 5, 1170
  063e8a8  bl 0x61948c
  063e8ac  nop
  063e8b0  b 0x63d260
  063e8b4  lwz 0, 92(31)
  063e8b8  cmpwi 7, 0, 1
  063e8bc  bf 30, 0x63e830
  063e8c0  stb 0, 21(31)
  063e8c4  li 0, 32
  063e8c8  stw 0, 96(31)
  063e8cc  b 0x63e83c
  063e8d0  stb 18, 21(31)
  063e8d4  b 0x63e83c
  063e8d8  lbz 8, 21(31)
  063e8dc  b 0x63dcbc
  063e8e0  lwz 4, -32744(30)
  063e8e4  li 5, 1113
  063e8e8  lwz 3, -32716(30)
  063e8ec  bl 0x61948c
  063e8f0  nop
  063e8f4  b 0x63d260
  063e8f8  lbz 9, 22(31)
  063e8fc  cmplwi 7, 9, 1
  063e900  bf 29, 0x63dcc8
  063e904  lbz 0, 23(31)
  063e908  stb 11, 22(31)
  063e90c  stb 9, 21(31)
  063e910  divwu 0, 0, 9
  063e914  stb 0, 23(31)
  063e918  b 0x63dcc8
  063e91c  lwz 4, -32744(30)
  063e920  li 5, 961
  063e924  lwz 3, -32716(30)
  063e928  bl 0x61948c
  063e92c  nop
  063e930  b 0x63d260
  063e934  li 0, 16
  063e938  stw 0, 144(1)
  063e93c  b 0x63e01c
  063e940  lwz 0, 168(1)
  063e944  lwz 9, 176(1)
  063e948  slwi 6, 0, 24
  063e94c  slwi 5, 9, 24
  063e950  srwi 10, 0, 24
  063e954  rlwinm 8, 0, 24, 16, 23
  063e958  srwi 11, 9, 24
  063e95c  rlwinm 7, 9, 24, 16, 23
  063e960  rlwinm 0, 0, 8, 8, 15
  063e964  rlwinm 9, 9, 8, 8, 15
  063e968  or 0, 0, 6
  063e96c  or 10, 10, 8
  063e970  or 11, 11, 7
  063e974  or 9, 9, 5
  063e978  or 10, 10, 0
  063e97c  or 11, 11, 9
  063e980  li 0, 0
  063e984  stw 10, 168(1)
  063e988  stw 0, 3172(1)
  063e98c  stw 11, 176(1)
  063e990  b 0x63d894
  063e994  lwz 4, -32744(30)
  063e998  li 5, 582
  063e99c  lwz 3, -32720(30)
  063e9a0  bl 0x61948c
  063e9a4  nop
  063e9a8  b 0x63d260
  063e9ac  lwz 4, -32744(30)
  063e9b0  li 5, 1025
  063e9b4  lwz 3, -32716(30)
  063e9b8  bl 0x61948c
  063e9bc  nop
  063e9c0  b 0x63d260

FUN_0063e9c4:   # 0x63e9c4, 0x54 bytes
  063e9c4  mr 11, 3
  063e9c8  li 3, 0
  063e9cc  cmpwi 7, 11, 0
  063e9d0  bt 30, 0x63ea10
  063e9d4  lbz 0, 0(11)
  063e9d8  clrlwi 0, 0, 27
  063e9dc  cmpwi 7, 0, 5
  063e9e0  bf 30, 0x63e9fc
  063e9e4  b 0x63ea0c
  063e9e8  lbz 0, 0(9)
  063e9ec  mr 11, 3
  063e9f0  clrlwi 0, 0, 27
  063e9f4  cmpwi 7, 0, 5
  063e9f8  bt 30, 0x63ea10
  063e9fc  lwz 3, 552(11)
  063ea00  cmpwi 7, 3, 0
  063ea04  clrldi 9, 3, 32
  063ea08  bf 30, 0x63e9e8
  063ea0c  mr 3, 11
  063ea10  clrldi 3, 3, 32
  063ea14  blr

FUN_0063ea18:   # 0x63ea18, 0x50 bytes
  063ea18  cmpwi 7, 3, 0
  063ea1c  bt 30, 0x63ea60
  063ea20  lbz 0, 0(3)
  063ea24  clrlwi 0, 0, 27
  063ea28  cmpwi 7, 0, 5
  063ea2c  bf 30, 0x63ea48
  063ea30  b 0x63ea60
  063ea34  lbz 0, 0(11)
  063ea38  clrlwi 0, 0, 27
  063ea3c  cmpwi 7, 0, 5
  063ea40  bt 30, 0x63ea58
  063ea44  mr 3, 9
  063ea48  lwz 9, 552(3)
  063ea4c  cmpwi 7, 9, 0
  063ea50  clrldi 11, 9, 32
  063ea54  bf 30, 0x63ea34
  063ea58  clrldi 3, 3, 32
  063ea5c  blr
  063ea60  li 3, 0
  063ea64  b 0x63ea58

FUN_0063ea68:   # 0x63ea68, 0x44 bytes
  063ea68  stdu 1, -128(1)
  063ea6c  mflr 0
  063ea70  std 0, 144(1)
  063ea74  bl 0x61a790
  063ea78  nop
  063ea7c  mr 0, 3
  063ea80  li 4, 1
  063ea84  cmpwi 7, 0, 0
  063ea88  clrldi 3, 3, 32
  063ea8c  li 5, 8
  063ea90  bt 30, 0x63ea9c
  063ea94  bl 0x61af44
  063ea98  nop
  063ea9c  ld 0, 144(1)
  063eaa0  addi 1, 1, 128
  063eaa4  mtlr 0
  063eaa8  blr

FUN_0063eaac:   # 0x63eaac, 0x44 bytes
  063eaac  stdu 1, -128(1)
  063eab0  mflr 0
  063eab4  std 0, 144(1)
  063eab8  bl 0x61a790
  063eabc  nop
  063eac0  mr 0, 3
  063eac4  li 4, 1
  063eac8  cmpwi 7, 0, 0
  063eacc  clrldi 3, 3, 32
  063ead0  li 5, 8
  063ead4  bt 30, 0x63eae0
  063ead8  bl 0x61b0c8
  063eadc  nop
  063eae0  ld 0, 144(1)
  063eae4  addi 1, 1, 128
  063eae8  mtlr 0
  063eaec  blr

FUN_0063eaf0:   # 0x63eaf0, 0x10c bytes
  063eaf0  std 30, -16(1)
  063eaf4  lbz 6, 1(4)
  063eaf8  mr 7, 4
  063eafc  lwz 30, -29384(2)
  063eb00  clrlwi 10, 6, 24
  063eb04  cmpwi 7, 10, 45
  063eb08  bt 30, 0x63ec94
  063eb0c  cmpwi 7, 10, 48
  063eb10  bt 30, 0x63ec74
  063eb14  clrlwi 5, 5, 24
  063eb18  cmplwi 7, 5, 2
  063eb1c  bf 29, 0x63ed30
  063eb20  lbz 4, 2(4)
  063eb24  addi 0, 5, -2
  063eb28  li 10, 2
  063eb2c  addi 9, 4, -48
  063eb30  clrldi 0, 0, 32
  063eb34  clrlwi 9, 9, 24
  063eb38  mtctr 0
  063eb3c  li 8, 0
  063eb40  cmplwi 7, 9, 9
  063eb44  bf 29, 0x63eb68
  063eb48  b 0x63ed30
  063eb4c  add 9, 10, 7
  063eb50  clrldi 9, 9, 32
  063eb54  lbz 4, 0(9)
  063eb58  addi 0, 4, -48
  063eb5c  clrlwi 0, 0, 24
  063eb60  cmplwi 7, 0, 9
  063eb64  bt 29, 0x63eb88
  063eb68  slwi 0, 8, 3
  063eb6c  slwi 9, 8, 1
  063eb70  clrlwi 11, 4, 24
  063eb74  add 9, 9, 0
  063eb78  addi 10, 10, 1
  063eb7c  add 9, 9, 11
  063eb80  addi 8, 9, -48
  063eb84  bdnz 0x63eb4c
  063eb88  addi 9, 6, -69
  063eb8c  clrlwi 0, 9, 24
  063eb90  cmplwi 7, 0, 47
  063eb94  bt 29, 0x63ec7c
  063eb98  lwz 11, -32768(30)
  063eb9c  rlwinm 9, 9, 2, 22, 29
  063eba0  lwzx 0, 9, 11
  063eba4  extsw 0, 0
  063eba8  add 0, 0, 11
  063ebac  mtctr 0
  063ebb0  bctr
  063ebb4  <unknown>
  063ebb8  <unknown>
  063ebbc  <unknown>
  063ebc0  <unknown>
  063ebc4  <unknown>
  063ebc8  <unknown>
  063ebcc  <unknown>
  063ebd0  <unknown>
  063ebd4  <unknown>
  063ebd8  <unknown>
  063ebdc  <unknown>
  063ebe0  <unknown>
  063ebe4  <unknown>
  063ebe8  <unknown>
  063ebec  <unknown>
  063ebf0  <unknown>
  063ebf4  <unknown>
  063ebf8  <unknown>

FUN_0063ed38:   # 0x63ed38, 0x64 bytes
  063ed38  lwz 11, 84(3)
  063ed3c  li 10, 0
  063ed40  rlwinm 0, 11, 0, 27, 27
  063ed44  rlwinm 9, 11, 0, 28, 28
  063ed48  cmpwi 7, 0, 0
  063ed4c  rlwinm 11, 11, 27, 2, 31
  063ed50  cmpwi 6, 9, 0
  063ed54  rotlwi 11, 11, 5
  063ed58  bt 30, 0x63ed7c
  063ed5c  lhz 0, 100(3)
  063ed60  lwz 9, 56(3)
  063ed64  slwi 0, 0, 2
  063ed68  stw 10, 76(3)
  063ed6c  stw 10, 68(3)
  063ed70  stw 10, 72(3)
  063ed74  divwu 0, 0, 9
  063ed78  stw 0, 60(3)
  063ed7c  bt 26, 0x63ed94
  063ed80  lwz 0, 48(3)
  063ed84  lhz 9, 100(3)
  063ed88  mulli 0, 0, 1000
  063ed8c  divwu 0, 0, 9
  063ed90  stw 0, 64(3)
  063ed94  stw 11, 84(3)
  063ed98  blr

FUN_0063ed9c:   # 0x63ed9c, 0x8c bytes
  063ed9c  lwz 11, 40(3)
  063eda0  li 10, 0
  063eda4  lwz 8, 0(3)
  063eda8  std 10, 16(3)
  063edac  add 9, 11, 8
  063edb0  clrldi 9, 9, 32
  063edb4  lbz 9, 0(9)
  063edb8  extsb 0, 9
  063edbc  cmpwi 7, 0, 0
  063edc0  bf 28, 0x63ee0c
  063edc4  addi 11, 11, 1
  063edc8  clrldi 0, 9, 57
  063edcc  add 9, 11, 8
  063edd0  or 0, 0, 10
  063edd4  clrldi 9, 9, 32
  063edd8  sldi 10, 0, 7
  063eddc  stw 11, 40(3)
  063ede0  std 10, 16(3)
  063ede4  lbz 9, 0(9)
  063ede8  extsb 0, 9
  063edec  cmpwi 7, 0, 0
  063edf0  bt 28, 0x63edc4
  063edf4  clrldi 0, 9, 56
  063edf8  addi 9, 11, 1
  063edfc  or 0, 10, 0
  063ee00  stw 9, 40(3)
  063ee04  std 0, 16(3)
  063ee08  blr
  063ee0c  ld 10, 16(3)
  063ee10  clrldi 0, 9, 56
  063ee14  addi 9, 11, 1
  063ee18  or 0, 10, 0
  063ee1c  stw 9, 40(3)
  063ee20  std 0, 16(3)
  063ee24  blr

FUN_0063ee28:   # 0x63ee28, 0x280 bytes
  063ee28  stdu 1, -160(1)
  063ee2c  mflr 0
  063ee30  cmplwi 7, 5, 2
  063ee34  std 0, 176(1)
  063ee38  addi 0, 4, 2
  063ee3c  std 29, 136(1)
  063ee40  std 27, 120(1)
  063ee44  std 28, 128(1)
  063ee48  std 31, 152(1)
  063ee4c  clrldi 9, 0, 32
  063ee50  li 29, 0
  063ee54  li 8, 3
  063ee58  bf 29, 0x63eed0
  063ee5c  lbz 11, 0(9)
  063ee60  addi 0, 11, -48
  063ee64  clrlwi 0, 0, 24
  063ee68  cmplwi 7, 0, 9
  063ee6c  bt 29, 0x63eed0
  063ee70  addi 0, 5, -2
  063ee74  li 10, 2
  063ee78  clrldi 0, 0, 32
  063ee7c  li 29, 0
  063ee80  mtctr 0
  063ee84  b 0x63ee9c
  063ee88  lbz 11, 0(9)
  063ee8c  addi 0, 11, -48
  063ee90  clrlwi 0, 0, 24
  063ee94  cmplwi 7, 0, 9
  063ee98  bt 29, 0x63f02c
  063ee9c  slwi 0, 29, 3
  063eea0  slwi 9, 29, 1
  063eea4  clrlwi 11, 11, 24
  063eea8  add 9, 9, 0
  063eeac  addi 10, 10, 1
  063eeb0  add 9, 9, 11
  063eeb4  add 0, 4, 10
  063eeb8  addi 29, 9, -48
  063eebc  clrldi 9, 0, 32
  063eec0  bdnz 0x63ee88
  063eec4  add 0, 5, 4
  063eec8  addi 8, 5, 1
  063eecc  clrldi 9, 0, 32
  063eed0  cmplw 7, 8, 5
  063eed4  lbz 27, 0(9)
  063eed8  bf 28, 0x63ef78
  063eedc  add 11, 4, 8
  063eee0  li 31, 0
  063eee4  clrldi 9, 11, 32
  063eee8  lbz 10, 0(9)
  063eeec  addi 0, 10, -48
  063eef0  clrlwi 0, 0, 24
  063eef4  cmplwi 7, 0, 9
  063eef8  bt 29, 0x63ef54
  063eefc  addi 0, 8, 1
  063ef00  sub 9, 5, 8
  063ef04  cmplw 7, 0, 5
  063ef08  clrldi 9, 9, 32
  063ef0c  addi 11, 11, 1
  063ef10  mtctr 9
  063ef14  bf+ 29, 0x63ef30
  063ef18  b 0x63f09c
  063ef1c  lbz 10, 0(8)
  063ef20  addi 0, 10, -48
  063ef24  clrlwi 0, 0, 24
  063ef28  cmplwi 7, 0, 9
  063ef2c  bt 29, 0x63ef54
  063ef30  extsb 9, 31
  063ef34  clrldi 8, 11, 32
  063ef38  slwi 0, 9, 3
  063ef3c  slwi 9, 9, 1
  063ef40  addi 11, 11, 1
  063ef44  add 9, 9, 0
  063ef48  add 9, 9, 10
  063ef4c  addi 31, 9, -48
  063ef50  bdnz 0x63ef1c
  063ef54  mr 28, 4
  063ef58  lbzu 0, 1(28)
  063ef5c  clrlwi 0, 0, 24
  063ef60  cmpwi 7, 0, 76
  063ef64  bt 30, 0x63efa8
  063ef68  cmplwi 7, 0, 76
  063ef6c  bt 29, 0x63ef98
  063ef70  cmpwi 7, 0, 71
  063ef74  bt 30, 0x63f034
  063ef78  ld 0, 176(1)
  063ef7c  ld 27, 120(1)
  063ef80  ld 28, 128(1)
  063ef84  mtlr 0
  063ef88  ld 29, 136(1)
  063ef8c  ld 31, 152(1)
  063ef90  addi 1, 1, 160
  063ef94  blr
  063ef98  cmpwi 7, 0, 103
  063ef9c  bt 30, 0x63f034
  063efa0  cmpwi 7, 0, 108
  063efa4  bf 30, 0x63ef78
  063efa8  cmplwi 7, 29, 3
  063efac  bt 29, 0x63ef78
  063efb0  lwz 3, 96(3)
  063efb4  bl 0x61a790
  063efb8  nop
  063efbc  cmpwi 7, 3, 0
  063efc0  bt 30, 0x63ef78
  063efc4  addi 0, 29, 352
  063efc8  clrldi 9, 3, 32
  063efcc  extsw 0, 0
  063efd0  add 9, 9, 0
  063efd4  lbz 4, 4(9)
  063efd8  clrlwi 0, 27, 24
  063efdc  cmpwi 7, 0, 61
  063efe0  bt 30, 0x63f084
  063efe4  cmpwi 7, 0, 43
  063efe8  bt 30, 0x63f08c
  063efec  cmpwi 7, 0, 45
  063eff0  bt 30, 0x63f094
  063eff4  lbz 0, 0(28)
  063eff8  cmpwi 7, 0, 76
  063effc  bt 30, 0x63f064
  063f000  cmplwi 7, 0, 76
  063f004  bt 29, 0x63f054
  063f008  cmpwi 7, 0, 71
  063f00c  bf 30, 0x63ef78
  063f010  cmplwi 7, 29, 63
  063f014  bt 29, 0x63ef78
  063f018  extsw 3, 29
  063f01c  extsb 4, 4
  063f020  bl 0x605e9c
  063f024  nop
  063f028  b 0x63ef78
  063f02c  addi 8, 10, 1
  063f030  b 0x63eed0
  063f034  cmplwi 7, 29, 63
  063f038  bt 29, 0x63ef78
  063f03c  extsw 3, 29
  063f040  bl 0x605f20
  063f044  nop
  063f048  mr 4, 3
  063f04c  li 3, 0
  063f050  b 0x63efd8
  063f054  cmpwi 7, 0, 103
  063f058  bt 30, 0x63f010
  063f05c  cmpwi 7, 0, 108
  063f060  bf 30, 0x63ef78
  063f064  cmplwi 7, 29, 3
  063f068  bt 29, 0x63ef78
  063f06c  addi 0, 29, 352
  063f070  clrldi 9, 3, 32
  063f074  extsw 0, 0
  063f078  add 9, 9, 0
  063f07c  stb 31, 4(9)
  063f080  b 0x63ef78
  063f084  mr 4, 31
  063f088  b 0x63eff4
  063f08c  add 4, 4, 31
  063f090  b 0x63eff4
  063f094  sub 4, 4, 31
  063f098  b 0x63eff4
  063f09c  li 0, 1
  063f0a0  mtctr 0
  063f0a4  b 0x63ef30

FUN_0063f0a8:   # 0x63f0a8, 0xb4 bytes
  063f0a8  stdu 1, -128(1)
  063f0ac  mflr 0
  063f0b0  std 31, 112(1)
  063f0b4  std 0, 144(1)
  063f0b8  lbz 0, 0(4)
  063f0bc  mr 31, 3
  063f0c0  mr 9, 4
  063f0c4  cmpwi 7, 0, 88
  063f0c8  cmplwi 6, 0, 88
  063f0cc  bt 30, 0x63f0e8
  063f0d0  cmpwi 7, 0, 82
  063f0d4  cmpwi 1, 0, 114
  063f0d8  bf 25, 0x63f124
  063f0dc  cmpwi 7, 0, 120
  063f0e0  bt 6, 0x63f13c
  063f0e4  bf 30, 0x63f128
  063f0e8  clrldi 4, 9, 32
  063f0ec  clrldi 3, 3, 32
  063f0f0  clrldi 5, 5, 56
  063f0f4  bl 0x63eaf0
  063f0f8  lwz 0, 84(31)
  063f0fc  lwz 9, 80(31)
  063f100  ori 0, 0, 256
  063f104  addi 9, 9, 1
  063f108  stw 0, 84(31)
  063f10c  ld 0, 144(1)
  063f110  stw 9, 80(31)
  063f114  mtlr 0
  063f118  ld 31, 112(1)
  063f11c  addi 1, 1, 128
  063f120  blr
  063f124  bt 30, 0x63f13c
  063f128  ld 0, 144(1)
  063f12c  ld 31, 112(1)
  063f130  addi 1, 1, 128
  063f134  mtlr 0
  063f138  blr
  063f13c  ld 0, 144(1)
  063f140  clrldi 3, 3, 32
  063f144  ld 31, 112(1)
  063f148  clrldi 4, 9, 32
  063f14c  clrldi 5, 5, 56
  063f150  mtlr 0
  063f154  addi 1, 1, 128
  063f158  b 0x63ee28

FUN_0063f15c:   # 0x63f15c, 0x36c bytes
  063f15c  stdu 1, -144(1)
  063f160  mflr 0
  063f164  std 31, 136(1)
  063f168  mr 31, 3
  063f16c  std 0, 160(1)
  063f170  std 30, 128(1)
  063f174  std 29, 120(1)
  063f178  lwz 30, -29384(2)
  063f17c  lwz 5, 0(31)
  063f180  lwz 6, 40(31)
  063f184  add 9, 5, 6
  063f188  clrldi 9, 9, 32
  063f18c  lbz 9, 0(9)
  063f190  cmpwi 7, 9, 240
  063f194  bt 30, 0x63f1c4
  063f198  cmpwi 7, 9, 255
  063f19c  bt 30, 0x63f21c
  063f1a0  rlwinm 0, 9, 0, 24, 27
  063f1a4  cmpwi 7, 0, 176
  063f1a8  bt 30, 0x63f1f8
  063f1ac  bf 29, 0x63f1e0
  063f1b0  cmpwi 7, 0, 208
  063f1b4  bt 30, 0x63f328
  063f1b8  bt 29, 0x63f368
  063f1bc  cmpwi 7, 0, 192
  063f1c0  bt 30, 0x63f328
  063f1c4  ld 0, 160(1)
  063f1c8  ld 29, 120(1)
  063f1cc  ld 30, 128(1)
  063f1d0  mtlr 0
  063f1d4  ld 31, 136(1)
  063f1d8  addi 1, 1, 144
  063f1dc  blr
  063f1e0  cmpwi 7, 0, 144
  063f1e4  bt 30, 0x63f1f8
  063f1e8  cmpwi 7, 0, 160
  063f1ec  bt 30, 0x63f1f8
  063f1f0  cmpwi 7, 0, 128
  063f1f4  bf 30, 0x63f1c4
  063f1f8  addi 0, 6, 3
  063f1fc  ld 29, 120(1)
  063f200  ld 30, 128(1)
  063f204  stw 0, 40(31)
  063f208  ld 0, 160(1)
  063f20c  ld 31, 136(1)
  063f210  addi 1, 1, 144
  063f214  mtlr 0
  063f218  blr
  063f21c  addi 11, 6, 1
  063f220  add 9, 5, 11
  063f224  stw 11, 40(31)
  063f228  clrldi 9, 9, 32
  063f22c  lbz 0, 0(9)
  063f230  cmpwi 7, 0, 81
  063f234  bt 30, 0x63f2b8
  063f238  cmplwi 7, 0, 81
  063f23c  bt 29, 0x63f334
  063f240  cmpwi 7, 0, 6
  063f244  bt 30, 0x63f444
  063f248  cmpwi 7, 0, 47
  063f24c  bt 30, 0x63f3a4
  063f250  addi 11, 11, 1
  063f254  li 10, 0
  063f258  add 9, 11, 5
  063f25c  stw 11, 40(31)
  063f260  clrldi 9, 9, 32
  063f264  lbz 9, 0(9)
  063f268  extsb 0, 9
  063f26c  cmpwi 7, 0, 0
  063f270  bf 28, 0x63f2a0
  063f274  addi 11, 11, 1
  063f278  clrlwi 0, 9, 25
  063f27c  add 9, 11, 5
  063f280  stw 11, 40(31)
  063f284  clrldi 9, 9, 32
  063f288  or 0, 10, 0
  063f28c  slwi 10, 0, 7
  063f290  lbz 9, 0(9)
  063f294  extsb 0, 9
  063f298  cmpwi 7, 0, 0
  063f29c  bt 28, 0x63f274
  063f2a0  clrlwi 0, 9, 24
  063f2a4  addi 9, 11, 1
  063f2a8  or 0, 10, 0
  063f2ac  add 0, 0, 9
  063f2b0  stw 0, 40(31)
  063f2b4  b 0x63f1c4
  063f2b8  addi 0, 6, 3
  063f2bc  lwz 8, 84(31)
  063f2c0  addi 11, 6, 4
  063f2c4  add 9, 0, 5
  063f2c8  add 10, 11, 5
  063f2cc  clrldi 9, 9, 32
  063f2d0  stw 0, 40(31)
  063f2d4  clrldi 10, 10, 32
  063f2d8  addi 7, 6, 5
  063f2dc  ori 8, 8, 8
  063f2e0  lbz 0, 0(9)
  063f2e4  stw 11, 40(31)
  063f2e8  slwi 0, 0, 8
  063f2ec  add 11, 7, 5
  063f2f0  stw 0, 48(31)
  063f2f4  lbz 9, 0(10)
  063f2f8  clrldi 11, 11, 32
  063f2fc  stw 7, 40(31)
  063f300  or 0, 0, 9
  063f304  addi 10, 6, 6
  063f308  slwi 0, 0, 8
  063f30c  stw 0, 48(31)
  063f310  lbz 9, 0(11)
  063f314  stw 8, 84(31)
  063f318  or 0, 0, 9
  063f31c  stw 10, 40(31)
  063f320  stw 0, 48(31)
  063f324  b 0x63f1c4
  063f328  addi 0, 6, 2
  063f32c  stw 0, 40(31)
  063f330  b 0x63f1c4
  063f334  cmpwi 7, 0, 88
  063f338  bt 30, 0x63f3d0
  063f33c  cmpwi 7, 0, 89
  063f340  bf 30, 0x63f250
  063f344  addi 9, 11, 1
  063f348  add 11, 9, 5
  063f34c  stw 9, 40(31)
  063f350  clrldi 11, 11, 32
  063f354  addi 9, 9, 1
  063f358  lbz 0, 0(11)
  063f35c  add 0, 0, 9
  063f360  stw 0, 40(31)
  063f364  b 0x63f1c4
  063f368  cmpwi 7, 0, 224
  063f36c  bt 30, 0x63f1f8
  063f370  cmpwi 7, 0, 240
  063f374  bf 30, 0x63f1c4
  063f378  rlwinm 0, 9, 0, 28, 28
  063f37c  cmpwi 7, 0, 0
  063f380  bf 30, 0x63f398
  063f384  clrlwi 9, 9, 28
  063f388  cmpwi 7, 9, 2
  063f38c  bt 28, 0x63f398
  063f390  cmpwi 7, 9, 3
  063f394  bf 29, 0x63f1f8
  063f398  addi 0, 6, 1
  063f39c  stw 0, 40(31)
  063f3a0  b 0x63f1c4
  063f3a4  addi 0, 11, 1
  063f3a8  lwz 11, 84(31)
  063f3ac  add 9, 0, 5
  063f3b0  stw 0, 40(31)
  063f3b4  clrldi 9, 9, 32
  063f3b8  ori 11, 11, 64
  063f3bc  lbz 10, 0(9)
  063f3c0  stw 11, 84(31)
  063f3c4  add 0, 0, 10
  063f3c8  stw 0, 40(31)
  063f3cc  b 0x63f1c4
  063f3d0  addi 11, 6, 3
  063f3d4  lwz 7, -32764(30)
  063f3d8  addi 8, 6, 4
  063f3dc  add 9, 11, 5
  063f3e0  add 10, 8, 5
  063f3e4  clrldi 9, 9, 32
  063f3e8  clrldi 10, 10, 32
  063f3ec  stw 11, 40(31)
  063f3f0  lis 0, -13108
  063f3f4  lbz 11, 0(9)
  063f3f8  ori 0, 0, 52429
  063f3fc  stw 8, 40(31)
  063f400  stw 11, 52(31)
  063f404  lbz 9, 0(10)
  063f408  addi 8, 6, 7
  063f40c  lwz 10, 84(31)
  063f410  mulhwu 0, 9, 0
  063f414  srwi 0, 0, 3
  063f418  ori 10, 10, 16
  063f41c  slwi 11, 0, 3
  063f420  slwi 0, 0, 1
  063f424  add 0, 0, 11
  063f428  sub 9, 9, 0
  063f42c  rlwinm 9, 9, 2, 22, 29
  063f430  lwzx 0, 7, 9
  063f434  stw 10, 84(31)
  063f438  stw 0, 56(31)
  063f43c  stw 8, 40(31)
  063f440  b 0x63f1c4
  063f444  addi 11, 11, 1
  063f448  li 10, 0
  063f44c  add 9, 11, 5
  063f450  stw 11, 40(31)
  063f454  clrldi 9, 9, 32
  063f458  lbz 9, 0(9)
  063f45c  extsb 0, 9
  063f460  cmpwi 7, 0, 0
  063f464  bf 28, 0x63f494
  063f468  addi 11, 11, 1
  063f46c  clrlwi 0, 9, 25
  063f470  add 9, 11, 5
  063f474  stw 11, 40(31)
  063f478  clrldi 9, 9, 32
  063f47c  or 0, 10, 0
  063f480  slwi 10, 0, 7
  063f484  lbz 9, 0(9)
  063f488  extsb 0, 9
  063f48c  cmpwi 7, 0, 0
  063f490  bt 28, 0x63f468
  063f494  addi 0, 11, 1
  063f498  clrlwi 29, 9, 24
  063f49c  add 4, 0, 5
  063f4a0  or 29, 10, 29
  063f4a4  clrldi 3, 3, 32
  063f4a8  clrldi 5, 29, 32
  063f4ac  clrldi 4, 4, 32
  063f4b0  stw 0, 40(31)
  063f4b4  bl 0x63f0a8
  063f4b8  lwz 0, 40(31)
  063f4bc  add 29, 29, 0
  063f4c0  stw 29, 40(31)
  063f4c4  b 0x63f1c4

FUN_0063f4c8:   # 0x63f4c8, 0xe0 bytes
  063f4c8  stdu 1, -144(1)
  063f4cc  mflr 0
  063f4d0  std 31, 136(1)
  063f4d4  mr 31, 3
  063f4d8  std 0, 160(1)
  063f4dc  std 29, 120(1)
  063f4e0  ld 9, 8(31)
  063f4e4  ld 0, 16(31)
  063f4e8  cmpld 7, 0, 9
  063f4ec  bt 29, 0x63f570
  063f4f0  clrldi 29, 3, 32
  063f4f4  sub 0, 9, 0
  063f4f8  mr 3, 29
  063f4fc  std 0, 8(31)
  063f500  bl 0x63f15c
  063f504  lwz 9, 40(31)
  063f508  mr 3, 29
  063f50c  lwz 0, 0(31)
  063f510  addi 11, 9, 1
  063f514  add 9, 9, 0
  063f518  clrldi 9, 9, 32
  063f51c  lbz 0, 0(9)
  063f520  cmpwi 7, 0, 0
  063f524  bf 30, 0x63f588
  063f528  stw 11, 40(31)
  063f52c  bl 0x63f15c
  063f530  lwz 9, 84(31)
  063f534  rlwinm 0, 9, 0, 25, 25
  063f538  cmpwi 7, 0, 0
  063f53c  bt 30, 0x63f504
  063f540  rlwinm 0, 9, 0, 27, 28
  063f544  cmpwi 7, 0, 0
  063f548  bf 30, 0x63f598
  063f54c  rlwinm 0, 9, 0, 25, 25
  063f550  cmpwi 7, 0, 0
  063f554  bf 30, 0x63f570
  063f558  mr 3, 29
  063f55c  bl 0x63ed9c
  063f560  ld 9, 8(31)
  063f564  ld 0, 16(31)
  063f568  cmpld 7, 9, 0
  063f56c  bf 28, 0x63f4f4
  063f570  ld 0, 160(1)
  063f574  ld 29, 120(1)
  063f578  ld 31, 136(1)
  063f57c  mtlr 0
  063f580  addi 1, 1, 144
  063f584  blr
  063f588  lwz 9, 84(31)
  063f58c  rlwinm 0, 9, 0, 27, 28
  063f590  cmpwi 7, 0, 0
  063f594  bt 30, 0x63f54c
  063f598  mr 3, 29
  063f59c  bl 0x63ed38
  063f5a0  lwz 9, 84(31)
  063f5a4  b 0x63f54c

FUN_0063f5a8:   # 0x63f5a8, 0x178 bytes
  063f5a8  cmpwi 7, 4, 0
  063f5ac  mflr 0
  063f5b0  lis 9, 19796
  063f5b4  stdu 1, -144(1)
  063f5b8  std 31, 136(1)
  063f5bc  std 28, 112(1)
  063f5c0  std 29, 120(1)
  063f5c4  std 0, 160(1)
  063f5c8  ori 9, 9, 26724
  063f5cc  mr 31, 3
  063f5d0  li 8, 1
  063f5d4  bt 30, 0x63f6f4
  063f5d8  lhz 10, 12(4)
  063f5dc  clrldi 29, 3, 32
  063f5e0  stw 4, 0(31)
  063f5e4  sth 10, 100(31)
  063f5e8  lwz 0, 0(4)
  063f5ec  li 8, 0
  063f5f0  cmpw 7, 0, 9
  063f5f4  bt 30, 0x63f618
  063f5f8  ld 0, 160(1)
  063f5fc  extsw 3, 8
  063f600  ld 28, 112(1)
  063f604  ld 29, 120(1)
  063f608  mtlr 0
  063f60c  ld 31, 136(1)
  063f610  addi 1, 1, 144
  063f614  blr
  063f618  lwz 0, 4(4)
  063f61c  cmpwi 7, 0, 6
  063f620  bf 30, 0x63f5f8
  063f624  lhz 0, 8(4)
  063f628  extsh 9, 10
  063f62c  cmplwi 7, 0, 2
  063f630  cmpwi 6, 9, 0
  063f634  bt 29, 0x63f5f8
  063f638  addi 0, 4, 14
  063f63c  lis 9, 19796
  063f640  clrldi 6, 0, 32
  063f644  ori 9, 9, 29291
  063f648  bt 24, 0x63f5f8
  063f64c  lwz 0, 0(6)
  063f650  lis 11, 7629
  063f654  clrlwi 12, 10, 16
  063f658  cmpw 7, 0, 9
  063f65c  lis 10, 7
  063f660  ori 11, 11, 25856
  063f664  li 7, 0
  063f668  ori 10, 10, 41248
  063f66c  li 4, 0
  063f670  li 28, 4
  063f674  mr 3, 29
  063f678  bf 30, 0x63f5f8
  063f67c  lwz 9, 4(6)
  063f680  li 0, 22
  063f684  std 7, 32(31)
  063f688  stw 0, 40(31)
  063f68c  std 7, 24(31)
  063f690  std 7, 8(31)
  063f694  std 7, 16(31)
  063f698  stw 9, 44(31)
  063f69c  stw 5, 96(31)
  063f6a0  stw 10, 48(31)
  063f6a4  stw 4, 80(31)
  063f6a8  stw 7, 84(31)
  063f6ac  stw 4, 68(31)
  063f6b0  stw 4, 72(31)
  063f6b4  stw 4, 76(31)
  063f6b8  stw 7, 88(31)
  063f6bc  stw 7, 92(31)
  063f6c0  stw 12, 60(31)
  063f6c4  stw 28, 56(31)
  063f6c8  stw 28, 52(31)
  063f6cc  divwu 11, 11, 12
  063f6d0  stw 11, 64(31)
  063f6d4  bl 0x63ed9c
  063f6d8  mr 3, 29
  063f6dc  bl 0x63f4c8
  063f6e0  lwz 0, 84(31)
  063f6e4  li 8, 1
  063f6e8  ori 0, 0, 7
  063f6ec  stw 0, 84(31)
  063f6f0  b 0x63f5f8
  063f6f4  lwz 0, 84(31)
  063f6f8  extsw 3, 8
  063f6fc  ld 28, 112(1)
  063f700  ori 0, 0, 64
  063f704  ld 29, 120(1)
  063f708  stw 0, 84(31)
  063f70c  ld 0, 160(1)
  063f710  ld 31, 136(1)
  063f714  addi 1, 1, 144
  063f718  mtlr 0
  063f71c  blr

FUN_0063f720:   # 0x63f720, 0x148 bytes
  063f720  stdu 1, -144(1)
  063f724  mflr 0
  063f728  std 29, 120(1)
  063f72c  std 31, 136(1)
  063f730  mr 29, 3
  063f734  mr 31, 3
  063f738  std 0, 160(1)
  063f73c  ld 9, 24(31)
  063f740  mr 3, 29
  063f744  li 7, 0
  063f748  cmpdi 7, 9, 0
  063f74c  addi 0, 9, -1
  063f750  bt 30, 0x63f7f0
  063f754  lwz 9, 68(31)
  063f758  lwz 11, 60(31)
  063f75c  addi 9, 9, 1
  063f760  lwz 10, 84(31)
  063f764  std 0, 24(31)
  063f768  cmpw 7, 9, 11
  063f76c  ori 0, 10, 1
  063f770  ori 11, 10, 3
  063f774  stw 0, 84(31)
  063f778  stw 9, 68(31)
  063f77c  bt 30, 0x63f808
  063f780  ld 9, 8(31)
  063f784  addi 9, 9, 1
  063f788  std 9, 8(31)
  063f78c  bl 0x63f4c8
  063f790  lwz 8, 84(31)
  063f794  rlwinm 0, 8, 0, 25, 25
  063f798  cmpwi 7, 0, 0
  063f79c  bf 30, 0x63f7f0
  063f7a0  lwz 10, 88(31)
  063f7a4  cmpwi 7, 10, 0
  063f7a8  bt 30, 0x63f73c
  063f7ac  lwz 0, 60(31)
  063f7b0  ori 8, 8, 128
  063f7b4  lwz 9, 72(31)
  063f7b8  lwz 11, 68(31)
  063f7bc  mullw 9, 9, 0
  063f7c0  add 9, 9, 11
  063f7c4  divwu 0, 9, 10
  063f7c8  mullw 0, 0, 10
  063f7cc  cmpw 7, 9, 0
  063f7d0  bf 30, 0x63f73c
  063f7d4  ld 9, 24(31)
  063f7d8  mr 3, 29
  063f7dc  stw 8, 84(31)
  063f7e0  cmpdi 7, 9, 0
  063f7e4  li 7, 0
  063f7e8  addi 0, 9, -1
  063f7ec  bf 30, 0x63f754
  063f7f0  ld 0, 160(1)
  063f7f4  ld 29, 120(1)
  063f7f8  ld 31, 136(1)
  063f7fc  mtlr 0
  063f800  addi 1, 1, 144
  063f804  blr
  063f808  lwz 9, 72(31)
  063f80c  ori 8, 10, 7
  063f810  lwz 0, 52(31)
  063f814  addi 9, 9, 1
  063f818  stw 11, 84(31)
  063f81c  cmpw 7, 9, 0
  063f820  stw 7, 68(31)
  063f824  stw 9, 72(31)
  063f828  bf 30, 0x63f780
  063f82c  lwz 11, 92(31)
  063f830  lwz 9, 76(31)
  063f834  cmpwi 7, 11, 0
  063f838  addi 9, 9, 1
  063f83c  stw 8, 84(31)
  063f840  stw 7, 72(31)
  063f844  stw 9, 76(31)
  063f848  bt 30, 0x63f780
  063f84c  ori 10, 10, 135
  063f850  divwu 0, 9, 11
  063f854  mullw 0, 0, 11
  063f858  cmpw 7, 9, 0
  063f85c  bf 30, 0x63f780
  063f860  stw 10, 84(31)
  063f864  b 0x63f780

FUN_0063f868:   # 0x63f868, 0x5c bytes
  063f868  mr 10, 3
  063f86c  li 0, -392
  063f870  clrldi 4, 4, 32
  063f874  lwz 9, 84(10)
  063f878  rlwinm 11, 9, 0, 25, 25
  063f87c  and 9, 9, 0
  063f880  cmpwi 7, 11, 0
  063f884  bclr 4, 30
  063f888  ld 0, 32(10)
  063f88c  lwz 11, 64(10)
  063f890  add 4, 4, 0
  063f894  stw 9, 84(10)
  063f898  cmpld 7, 4, 11
  063f89c  std 4, 32(10)
  063f8a0  bclr 12, 28
  063f8a4  ld 9, 24(10)
  063f8a8  divdu 0, 4, 11
  063f8ac  add 9, 9, 0
  063f8b0  mulld 0, 0, 11
  063f8b4  sub 0, 4, 0
  063f8b8  std 9, 24(10)
  063f8bc  std 0, 32(10)
  063f8c0  b 0x63f720

FUN_0063f8c4:   # 0x63f8c4, 0x1c bytes
  063f8c4  li 11, 141
  063f8c8  mflr 0
  063f8cc  std 0, 16(1)
  063f8d0  sc
  063f8d4  ld 0, 16(1)
  063f8d8  mtlr 0
  063f8dc  blr

FUN_0063f8e0:   # 0x63f8e0, 0xc bytes
  063f8e0  lwz 3, 4(3)
  063f8e4  extsw 3, 3
  063f8e8  blr

FUN_0063f8ec:   # 0x63f8ec, 0x3c bytes
  063f8ec  extsb 9, 3
  063f8f0  li 0, 1
  063f8f4  cmplwi 7, 3, 6
  063f8f8  sld 0, 0, 9
  063f8fc  li 9, 86
  063f900  li 11, 1
  063f904  and 0, 0, 9
  063f908  bt 29, 0x63f91c
  063f90c  cmpdi 7, 0, 0
  063f910  bt 30, 0x63f91c
  063f914  extsw 3, 11
  063f918  blr
  063f91c  li 11, 0
  063f920  extsw 3, 11
  063f924  blr

FUN_0063f928:   # 0x63f928, 0x74 bytes
  063f928  cmplwi 7, 3, 4
  063f92c  bt 29, 0x63f950
  063f930  cmplwi 7, 3, 2
  063f934  bt 28, 0x63f984
  063f938  cmpwi 7, 4, 1
  063f93c  li 3, 0
  063f940  bt 30, 0x63f948
  063f944  li 3, -1
  063f948  extsw 3, 3
  063f94c  blr
  063f950  cmpwi 7, 3, 6
  063f954  bf 30, 0x63f944
  063f958  cmpwi 7, 4, 1
  063f95c  li 3, 2
  063f960  bt- 30, 0x63f948
  063f964  xori 0, 4, 2
  063f968  srawi 11, 0, 31
  063f96c  xor 9, 11, 0
  063f970  sub 9, 11, 9
  063f974  srwi 3, 9, 31
  063f978  addi 3, 3, 3
  063f97c  extsw 3, 3
  063f980  blr
  063f984  cmpwi 7, 3, 1
  063f988  bf 30, 0x63f944
  063f98c  cmpwi 7, 4, 1
  063f990  li 3, 1
  063f994  bf 30, 0x63f944
  063f998  b 0x63f948

FUN_0063f99c:   # 0x63f99c, 0x28 bytes
  063f99c  stdu 1, -128(1)
  063f9a0  mflr 0
  063f9a4  std 0, 144(1)
  063f9a8  bl 0x650684
  063f9ac  ld 2, 40(1)
  063f9b0  ld 0, 144(1)
  063f9b4  clrldi 3, 3, 32
  063f9b8  mtlr 0
  063f9bc  addi 1, 1, 128
  063f9c0  blr

FUN_0063f9c4:   # 0x63f9c4, 0x44 bytes
  063f9c4  stdu 1, -144(1)
  063f9c8  mflr 0
  063f9cc  addi 4, 1, 112
  063f9d0  std 0, 160(1)
  063f9d4  li 0, 2
  063f9d8  li 9, 0
  063f9dc  stw 0, 112(1)
  063f9e0  li 0, 16
  063f9e4  stb 9, 120(1)
  063f9e8  stw 0, 116(1)
  063f9ec  bl 0x6505a4
  063f9f0  ld 2, 40(1)
  063f9f4  ld 0, 160(1)
  063f9f8  extsw 3, 3
  063f9fc  mtlr 0
  063fa00  addi 1, 1, 144
  063fa04  blr

FUN_0063fa08:   # 0x63fa08, 0x44 bytes
  063fa08  addi 3, 3, 40
  063fa0c  mflr 0
  063fa10  stdu 1, -128(1)
  063fa14  clrldi 3, 3, 32
  063fa18  std 0, 144(1)
  063fa1c  bl 0x650844
  063fa20  ld 2, 40(1)
  063fa24  srawi 0, 3, 31
  063fa28  xor 3, 0, 3
  063fa2c  sub 3, 0, 3
  063fa30  ld 0, 144(1)
  063fa34  addi 1, 1, 128
  063fa38  srwi 3, 3, 31
  063fa3c  mtlr 0
  063fa40  sldi 3, 3, 63
  063fa44  sradi 3, 3, 63
  063fa48  blr

FUN_0063fa4c:   # 0x63fa4c, 0xd4 bytes
  063fa4c  mfcr 12
  063fa50  stdu 1, -176(1)
  063fa54  std 29, 152(1)
  063fa58  std 31, 168(1)
  063fa5c  mr 29, 3
  063fa60  mr 31, 3
  063fa64  clrldi 3, 3, 32
  063fa68  std 28, 144(1)
  063fa6c  std 27, 136(1)
  063fa70  addi 28, 31, 40
  063fa74  stw 12, 184(1)
  063fa78  mflr 0
  063fa7c  std 0, 192(1)
  063fa80  bl 0x63f8e0
  063fa84  cmpwi 7, 3, 0
  063fa88  bf 30, 0x63fae4
  063fa8c  li 27, 0
  063fa90  li 0, -1
  063fa94  clrldi 3, 28, 32
  063fa98  clrldi 0, 0, 32
  063fa9c  std 0, 8(31)
  063faa0  bl 0x650504
  063faa4  ld 2, 40(1)
  063faa8  addi 3, 29, 16
  063faac  clrldi 3, 3, 32
  063fab0  bl 0x650784
  063fab4  ld 2, 40(1)
  063fab8  ld 0, 192(1)
  063fabc  lwz 12, 184(1)
  063fac0  extsw 3, 27
  063fac4  ld 28, 144(1)
  063fac8  ld 27, 136(1)
  063facc  mtlr 0
  063fad0  ld 29, 152(1)
  063fad4  mtocrf 8, 12
  063fad8  ld 31, 168(1)
  063fadc  addi 1, 1, 176
  063fae0  blr
  063fae4  li 0, 1
  063fae8  clrldi 3, 28, 32
  063faec  stw 0, 0(31)
  063faf0  li 0, 0
  063faf4  stw 0, 4(31)
  063faf8  bl 0x650844
  063fafc  ld 2, 40(1)
  063fb00  ld 3, 8(31)
  063fb04  addi 4, 1, 112
  063fb08  li 11, 44
  063fb0c  sc
  063fb10  cmpwi 4, 3, 0
  063fb14  li 27, -1
  063fb18  bt 18, 0x63fa8c
  063fb1c  b 0x63fa90
