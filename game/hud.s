# game/hud.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_HUD:   # 0xc8274, 0x14 bytes
  00c8274  lis 3, 114
  00c8278  lis 4, 1
  00c827c  addic 3, 3, 14532
  00c8280  stw 4, 72(3)
  00c8284  blr

Hud_FindIconIndex:   # 0xc8288, 0x48 bytes
  00c8288  lis 4, 162
  00c828c  lis 5, 0
  00c8290  addic 4, 4, -16448
  00c8294  li 6, 0
  00c8298  ori 5, 5, 65535
  00c829c  lwz 4, 28(4)
  00c82a0  slwi 7, 6, 3
  00c82a4  extsw 7, 7
  00c82a8  lhzx 7, 4, 7
  00c82ac  cmpw 1, 7, 3
  00c82b0  cmpw 7, 5
  00c82b4  cror 2, 2, 6
  00c82b8  bt 2, 0xc82c8
  00c82bc  addic 6, 6, 1
  00c82c0  extsw 6, 6
  00c82c4  b 0xc82a0
  00c82c8  ori 3, 6, 0
  00c82cc  blr

HudEntry_SetIcon:   # 0xc82d0, 0x6c bytes
  00c82d0  lis 5, 162
  00c82d4  lis 7, 0
  00c82d8  addic 6, 5, -16448
  00c82dc  li 8, 0
  00c82e0  ori 7, 7, 65535
  00c82e4  lwz 6, 28(6)
  00c82e8  ori 5, 6, 0
  00c82ec  lhz 9, 0(5)
  00c82f0  cmpw 1, 9, 4
  00c82f4  cmpw 9, 7
  00c82f8  cror 2, 2, 6
  00c82fc  bt 2, 0xc830c
  00c8300  addic 5, 5, 8
  00c8304  addic 8, 8, 1
  00c8308  b 0xc82ec
  00c830c  slwi 4, 8, 3
  00c8310  extsw 5, 4
  00c8314  addc 4, 6, 4
  00c8318  clrldi 4, 4, 32
  00c831c  lhzx 5, 6, 5
  00c8320  sth 8, 64(3)
  00c8324  stw 5, 0(3)
  00c8328  lbz 5, 6(4)
  00c832c  stb 5, 66(3)
  00c8330  lhz 4, 4(4)
  00c8334  stw 4, 68(3)
  00c8338  blr

HudEntry_Reset:   # 0xc833c, 0x108 bytes
  00c833c  stdu 1, -144(1)
  00c8340  mflr 0
  00c8344  std 0, 160(1)
  00c8348  std 31, 136(1)
  00c834c  ori 31, 3, 0
  00c8350  lis 3, 162
  00c8354  li 12, 0
  00c8358  std 29, 120(1)
  00c835c  addic 10, 3, -16448
  00c8360  lis 11, 0
  00c8364  std 30, 128(1)
  00c8368  lwz 29, 32(31)
  00c836c  ori 30, 12, 0
  00c8370  lwz 8, 48(31)
  00c8374  ori 11, 11, 65535
  00c8378  lwz 10, 28(10)
  00c837c  cmpwi 1, 8, 0
  00c8380  lwz 9, 36(31)
  00c8384  lwz 7, 52(31)
  00c8388  lwz 6, 56(31)
  00c838c  ori 3, 10, 0
  00c8390  std 28, 112(1)
  00c8394  lwz 5, 44(31)
  00c8398  lwz 4, 40(31)
  00c839c  lhz 28, 0(3)
  00c83a0  cmpw 6, 28, 29
  00c83a4  cmpw 28, 11
  00c83a8  cror 2, 2, 26
  00c83ac  bt 2, 0xc83bc
  00c83b0  addic 3, 3, 8
  00c83b4  addic 12, 12, 1
  00c83b8  b 0xc839c
  00c83bc  slwi 3, 12, 3
  00c83c0  extsw 11, 3
  00c83c4  addc 3, 10, 3
  00c83c8  clrldi 3, 3, 32
  00c83cc  lhzx 10, 10, 11
  00c83d0  sth 12, 64(31)
  00c83d4  stw 10, 0(31)
  00c83d8  lbz 10, 6(3)
  00c83dc  stb 10, 66(31)
  00c83e0  lhz 3, 4(3)
  00c83e4  stw 9, 4(31)
  00c83e8  stw 3, 68(31)
  00c83ec  stw 8, 16(31)
  00c83f0  stw 7, 20(31)
  00c83f4  stw 6, 24(31)
  00c83f8  stw 5, 12(31)
  00c83fc  stw 4, 8(31)
  00c8400  bt 6, 0xc8420
  00c8404  lwz 4, 0(8)
  00c8408  ori 3, 31, 0
  00c840c  std 2, 40(1)
  00c8410  mtctr 4
  00c8414  lwz 2, 4(8)
  00c8418  bcctrl 20, 30
  00c841c  ld 2, 40(1)
  00c8420  stw 30, 104(31)
  00c8424  ld 0, 160(1)
  00c8428  mtlr 0
  00c842c  ld 28, 112(1)
  00c8430  ld 29, 120(1)
  00c8434  ld 30, 128(1)
  00c8438  ld 31, 136(1)
  00c843c  addi 1, 1, 144
  00c8440  blr

RegisterHUDCallback:   # 0xc8444, 0x134 bytes
  00c8444  stdu 1, -128(1)
  00c8448  mflr 0
  00c844c  std 0, 144(1)
  00c8450  std 31, 120(1)
  00c8454  clrlwi 10, 3, 28
  00c8458  lis 31, 161
  00c845c  std 30, 112(1)
  00c8460  sldi 12, 10, 7
  00c8464  sldi 30, 10, 4
  00c8468  lis 11, 114
  00c846c  addc 12, 12, 30
  00c8470  lwz 30, 1800(31)
  00c8474  addic 11, 11, 15120
  00c8478  cmpwi 6, 10, 2
  00c847c  cmpwi 30, 5
  00c8480  addc 31, 11, 12
  00c8484  crorc 2, 26, 2
  00c8488  rlwinm 3, 3, 0, 16, 27
  00c848c  clrldi 31, 31, 32
  00c8490  cmpwi 1, 10, 0
  00c8494  bt 2, 0xc84a4
  00c8498  bt 6, 0xc84a4
  00c849c  li 3, 0
  00c84a0  b 0xc8560
  00c84a4  lwz 10, 44(31)
  00c84a8  cmpw 10, 8
  00c84ac  bf 2, 0xc84f8
  00c84b0  lwz 10, 40(31)
  00c84b4  cmpw 10, 9
  00c84b8  bf 2, 0xc84f8
  00c84bc  lwz 10, 32(31)
  00c84c0  cmpw 10, 4
  00c84c4  bf 2, 0xc84f8
  00c84c8  lwz 10, 36(31)
  00c84cc  cmpw 10, 3
  00c84d0  bf 2, 0xc84f8
  00c84d4  lwz 10, 48(31)
  00c84d8  cmpw 10, 5
  00c84dc  bf 2, 0xc84f8
  00c84e0  lwz 10, 52(31)
  00c84e4  cmpw 10, 6
  00c84e8  bf 2, 0xc84f8
  00c84ec  lwz 10, 56(31)
  00c84f0  cmpw 10, 7
  00c84f4  bt 2, 0xc8558
  00c84f8  stw 8, 44(31)
  00c84fc  lis 10, 162
  00c8500  stw 9, 40(31)
  00c8504  li 11, 0
  00c8508  stw 4, 32(31)
  00c850c  stw 3, 36(31)
  00c8510  stw 5, 48(31)
  00c8514  stw 6, 52(31)
  00c8518  stw 7, 56(31)
  00c851c  li 6, 1
  00c8520  lwz 4, -16448(10)
  00c8524  addic 5, 4, 1
  00c8528  stw 5, -16448(10)
  00c852c  lwz 5, 4(31)
  00c8530  stw 4, 100(31)
  00c8534  and 3, 3, 5
  00c8538  stw 11, 124(31)
  00c853c  rlwinm 3, 3, 0, 26, 26
  00c8540  stw 11, 112(31)
  00c8544  cmpwi 3, 0
  00c8548  stw 6, 104(31)
  00c854c  bt 2, 0xc8558
  00c8550  ori 3, 31, 0
  00c8554  bl 0xc833c
  00c8558  lwz 3, 100(31)
  00c855c  extsw 3, 3
  00c8560  ld 0, 144(1)
  00c8564  mtlr 0
  00c8568  ld 30, 112(1)
  00c856c  ld 31, 120(1)
  00c8570  addi 1, 1, 128
  00c8574  blr

RegisterHeroHealthHUDCallbacks:   # 0xc8578, 0x4c bytes
  00c8578  stdu 1, -112(1)
  00c857c  mflr 0
  00c8580  std 0, 128(1)
  00c8584  lis 5, 112
  00c8588  lis 6, 112
  00c858c  lis 7, 112
  00c8590  lis 8, 151
  00c8594  li 3, 1
  00c8598  addic 5, 5, 22512
  00c859c  li 4, 30005
  00c85a0  li 9, 8
  00c85a4  addic 6, 6, 22520
  00c85a8  addic 7, 7, 22528
  00c85ac  addic 8, 8, -16504
  00c85b0  bl 0xc8444
  00c85b4  ld 0, 128(1)
  00c85b8  mtlr 0
  00c85bc  addi 1, 1, 112
  00c85c0  blr

HudScratch_Reset:   # 0xc85c4, 0x2c bytes
  00c85c4  lis 3, 161
  00c85c8  lis 4, 162
  00c85cc  addic 3, 3, 2264
  00c85d0  lis 5, 6
  00c85d4  addic 4, 4, -16448
  00c85d8  ori 5, 5, 16384
  00c85dc  lwz 3, 12(3)
  00c85e0  addc 5, 3, 5
  00c85e4  stw 3, 16(4)
  00c85e8  stw 5, 20(4)
  00c85ec  blr

HudScratch_Alloc:   # 0xc85f0, 0x68 bytes
  00c85f0  lis 5, 162
  00c85f4  ori 6, 3, 0
  00c85f8  addic 5, 5, -16448
  00c85fc  lwz 3, 16(5)
  00c8600  lwz 4, 20(5)
  00c8604  cmpwi 3, 0
  00c8608  bf 2, 0xc862c
  00c860c  lis 3, 161
  00c8610  lis 4, 6
  00c8614  addic 3, 3, 2264
  00c8618  ori 4, 4, 16384
  00c861c  lwz 3, 12(3)
  00c8620  addc 4, 3, 4
  00c8624  stw 3, 16(5)
  00c8628  stw 4, 20(5)
  00c862c  subc 4, 4, 3
  00c8630  cmpw 6, 4
  00c8634  bf 1, 0xc8640
  00c8638  li 3, 0
  00c863c  b 0xc8654
  00c8640  addic 4, 6, 15
  00c8644  ori 6, 3, 0
  00c8648  rlwinm 4, 4, 0, 0, 27
  00c864c  addc 4, 6, 4
  00c8650  stw 4, 16(5)
  00c8654  blr

Hud_InitBanks:   # 0xc8658, 0x1b8 bytes
  00c8658  stdu 1, -160(1)
  00c865c  mflr 0
  00c8660  std 0, 176(1)
  00c8664  std 30, 144(1)
  00c8668  lis 3, 162
  00c866c  std 31, 152(1)
  00c8670  li 30, 0
  00c8674  std 29, 136(1)
  00c8678  addic 31, 3, -16448
  00c867c  std 28, 128(1)
  00c8680  lis 29, 114
  00c8684  ori 28, 30, 0
  00c8688  stw 30, -16448(3)
  00c868c  std 27, 120(1)
  00c8690  addic 29, 29, 15120
  00c8694  stw 30, 4(31)
  00c8698  sldi 3, 28, 7
  00c869c  sldi 4, 28, 4
  00c86a0  li 6, -1
  00c86a4  addc 3, 3, 4
  00c86a8  lis 7, 1
  00c86ac  extsw 4, 3
  00c86b0  lis 5, 0
  00c86b4  addc 27, 4, 29
  00c86b8  ori 3, 28, 0
  00c86bc  ori 4, 5, 65535
  00c86c0  li 5, 0
  00c86c4  li 8, 0
  00c86c8  stw 6, 100(27)
  00c86cc  stw 7, 32(27)
  00c86d0  li 6, 0
  00c86d4  li 7, 0
  00c86d8  li 9, 1
  00c86dc  bl 0xc8444
  00c86e0  addic 28, 28, 1
  00c86e4  stw 30, 124(27)
  00c86e8  li 3, -6
  00c86ec  stw 30, 4(27)
  00c86f0  extsw 28, 28
  00c86f4  stw 30, 36(27)
  00c86f8  cmpwi 28, 13
  00c86fc  stw 3, 108(27)
  00c8700  bt 0, 0xc8698
  00c8704  lis 3, 162
  00c8708  lwz 5, -16404(3)
  00c870c  cmpwi 5, 0
  00c8710  bf 2, 0xc87b8
  00c8714  lwz 6, 16(31)
  00c8718  lwz 4, 20(31)
  00c871c  cmpwi 6, 0
  00c8720  bf 2, 0xc8744
  00c8724  lis 3, 161
  00c8728  lis 4, 6
  00c872c  addic 3, 3, 2264
  00c8730  ori 4, 4, 16384
  00c8734  lwz 6, 12(3)
  00c8738  addc 4, 6, 4
  00c873c  stw 6, 16(31)
  00c8740  stw 4, 20(31)
  00c8744  subc 7, 4, 6
  00c8748  ori 5, 30, 0
  00c874c  cmpwi 7, 10240
  00c8750  ori 3, 6, 0
  00c8754  bt 0, 0xc8764
  00c8758  ori 5, 6, 0
  00c875c  addic 3, 5, 10240
  00c8760  stw 3, 16(31)
  00c8764  lis 6, 162
  00c8768  cmpwi 3, 0
  00c876c  stw 5, -16404(6)
  00c8770  bf 2, 0xc8794
  00c8774  lis 3, 161
  00c8778  lis 4, 6
  00c877c  addic 3, 3, 2264
  00c8780  ori 4, 4, 16384
  00c8784  lwz 3, 12(3)
  00c8788  addc 4, 3, 4
  00c878c  stw 3, 16(31)
  00c8790  stw 4, 20(31)
  00c8794  subc 6, 4, 3
  00c8798  ori 4, 30, 0
  00c879c  cmpwi 6, 5120
  00c87a0  bt 0, 0xc87b0
  00c87a4  addic 6, 3, 5120
  00c87a8  ori 4, 3, 0
  00c87ac  stw 6, 16(31)
  00c87b0  lis 3, 162
  00c87b4  stw 4, -16392(3)
  00c87b8  lis 4, 162
  00c87bc  lis 6, 162
  00c87c0  addic 7, 5, 10240
  00c87c4  ori 3, 5, 0
  00c87c8  stw 5, -16400(4)
  00c87cc  li 4, 10240
  00c87d0  stw 7, -16396(6)
  00c87d4  bl 0x500250
  00c87d8  nop
  00c87dc  lis 3, 162
  00c87e0  li 4, 255
  00c87e4  lwz 3, -16404(3)
  00c87e8  stb 4, 32(3)
  00c87ec  ld 0, 176(1)
  00c87f0  mtlr 0
  00c87f4  ld 27, 120(1)
  00c87f8  ld 28, 128(1)
  00c87fc  ld 29, 136(1)
  00c8800  ld 30, 144(1)
  00c8804  ld 31, 152(1)
  00c8808  addi 1, 1, 160
  00c880c  blr

STUB_000c8810:   # 0xc8810, 0x4 bytes
  00c8810  blr

STUB_000c8814:   # 0xc8814, 0x4 bytes
  00c8814  blr

STUB_000c8818:   # 0xc8818, 0x4 bytes
  00c8818  blr

STUB_000c881c:   # 0xc881c, 0x4 bytes
  00c881c  blr

Hud_SwapMobyBank:   # 0xc8820, 0xa0 bytes
  00c8820  stdu 1, -64(1)
  00c8824  lis 4, 162
  00c8828  clrlwi 5, 3, 24
  00c882c  lbz 3, -16388(4)
  00c8830  std 31, 56(1)
  00c8834  std 30, 48(1)
  00c8838  cmpw 5, 3
  00c883c  bt 2, 0xc88b0
  00c8840  lis 4, 164
  00c8844  cntlzw 3, 3
  00c8848  lis 5, 164
  00c884c  lis 6, 162
  00c8850  lis 7, 162
  00c8854  rlwinm 3, 3, 27, 31, 31
  00c8858  lwz 9, -28512(4)
  00c885c  lis 8, 162
  00c8860  lwz 11, -28508(5)
  00c8864  lis 10, 164
  00c8868  stb 3, -16388(6)
  00c886c  lwz 6, -16400(7)
  00c8870  lis 12, 162
  00c8874  lwz 30, -16404(8)
  00c8878  lis 3, 164
  00c887c  stw 9, -16404(8)
  00c8880  lis 31, 162
  00c8884  stw 30, -28512(4)
  00c8888  stw 6, -28508(5)
  00c888c  lwz 4, -28504(10)
  00c8890  stw 11, -16400(7)
  00c8894  lwz 5, -16396(12)
  00c8898  lwz 6, -28496(3)
  00c889c  stw 5, -28504(10)
  00c88a0  stw 4, -16396(12)
  00c88a4  lwz 4, -16392(31)
  00c88a8  stw 6, -16392(31)
  00c88ac  stw 4, -28496(3)
  00c88b0  ld 30, 48(1)
  00c88b4  ld 31, 56(1)
  00c88b8  addi 1, 1, 64
  00c88bc  blr

Hud_ResetAllEntries:   # 0xc88c0, 0xa4 bytes
  00c88c0  stdu 1, -144(1)
  00c88c4  mflr 0
  00c88c8  std 0, 160(1)
  00c88cc  std 29, 120(1)
  00c88d0  std 31, 136(1)
  00c88d4  li 29, 0
  00c88d8  std 30, 128(1)
  00c88dc  lis 31, 114
  00c88e0  ori 30, 29, 0
  00c88e4  addic 31, 31, 15120
  00c88e8  lis 4, 0
  00c88ec  ori 3, 29, 0
  00c88f0  ori 4, 4, 65535
  00c88f4  li 9, 1
  00c88f8  li 5, 0
  00c88fc  li 6, 0
  00c8900  li 7, 0
  00c8904  li 8, 0
  00c8908  bl 0xc8444
  00c890c  sldi 3, 29, 7
  00c8910  sldi 4, 29, 4
  00c8914  addc 3, 3, 4
  00c8918  li 4, -6
  00c891c  extsw 5, 3
  00c8920  addc 3, 3, 31
  00c8924  addc 5, 5, 31
  00c8928  clrldi 3, 3, 32
  00c892c  stw 30, 124(5)
  00c8930  stw 4, 108(5)
  00c8934  bl 0xc833c
  00c8938  addic 29, 29, 1
  00c893c  extsw 29, 29
  00c8940  cmpwi 29, 13
  00c8944  bt 0, 0xc88e8
  00c8948  ld 0, 160(1)
  00c894c  mtlr 0
  00c8950  ld 29, 120(1)
  00c8954  ld 30, 128(1)
  00c8958  ld 31, 136(1)
  00c895c  addi 1, 1, 144
  00c8960  blr

Hud_UnregisterById:   # 0xc8964, 0x90 bytes
  00c8964  stdu 1, -112(1)
  00c8968  mflr 0
  00c896c  std 0, 128(1)
  00c8970  li 6, 0
  00c8974  lis 4, 114
  00c8978  ori 5, 6, 0
  00c897c  addic 4, 4, 15220
  00c8980  sldi 7, 6, 7
  00c8984  sldi 8, 6, 4
  00c8988  addc 7, 7, 8
  00c898c  extsw 7, 7
  00c8990  lwzx 7, 4, 7
  00c8994  cmpw 7, 3
  00c8998  bt 2, 0xc89ac
  00c899c  addic 6, 6, 1
  00c89a0  extsw 6, 6
  00c89a4  cmpwi 6, 13
  00c89a8  bt 0, 0xc8980
  00c89ac  cmpwi 6, 13
  00c89b0  bf 0, 0xc89e0
  00c89b4  lis 4, 0
  00c89b8  ori 3, 6, 0
  00c89bc  li 6, 0
  00c89c0  li 9, 0
  00c89c4  ori 4, 4, 65535
  00c89c8  li 5, 0
  00c89cc  li 7, 0
  00c89d0  li 8, 0
  00c89d4  bl 0xc8444
  00c89d8  li 3, 1
  00c89dc  b 0xc89e4
  00c89e0  ori 3, 5, 0
  00c89e4  ld 0, 128(1)
  00c89e8  mtlr 0
  00c89ec  addi 1, 1, 112
  00c89f0  blr

Hud_SetEntryIconById:   # 0xc89f4, 0xd0 bytes
  00c89f4  lis 5, 114
  00c89f8  li 7, 0
  00c89fc  addic 5, 5, 15120
  00c8a00  ori 6, 7, 0
  00c8a04  addic 8, 5, 100
  00c8a08  lwz 9, 0(8)
  00c8a0c  cmpw 9, 3
  00c8a10  bt 2, 0xc8a24
  00c8a14  addic 7, 7, 1
  00c8a18  addic 8, 8, 144
  00c8a1c  cmpwi 7, 13
  00c8a20  bt 0, 0xc8a08
  00c8a24  cmpwi 7, 13
  00c8a28  bf 0, 0xc8abc
  00c8a2c  sldi 8, 7, 7
  00c8a30  sldi 3, 7, 4
  00c8a34  lis 7, 162
  00c8a38  addc 8, 8, 3
  00c8a3c  lis 11, 0
  00c8a40  addc 10, 5, 8
  00c8a44  addic 3, 7, -16448
  00c8a48  ori 9, 6, 0
  00c8a4c  clrldi 10, 10, 32
  00c8a50  ori 7, 11, 65535
  00c8a54  lwz 11, 28(3)
  00c8a58  lhzx 12, 11, 6
  00c8a5c  cmpw 1, 12, 4
  00c8a60  cmpw 12, 7
  00c8a64  cror 2, 2, 6
  00c8a68  bt 2, 0xc8a78
  00c8a6c  addic 6, 6, 8
  00c8a70  addic 9, 9, 1
  00c8a74  b 0xc8a54
  00c8a78  slwi 3, 9, 3
  00c8a7c  extsw 4, 3
  00c8a80  addc 3, 11, 3
  00c8a84  clrldi 6, 3, 32
  00c8a88  lhzx 3, 11, 4
  00c8a8c  sth 9, 64(10)
  00c8a90  extsw 4, 8
  00c8a94  stw 3, 0(10)
  00c8a98  lbz 8, 6(6)
  00c8a9c  addc 7, 5, 4
  00c8aa0  stb 8, 66(10)
  00c8aa4  lhz 6, 4(6)
  00c8aa8  ori 3, 10, 0
  00c8aac  stw 6, 68(10)
  00c8ab0  lwzx 4, 5, 4
  00c8ab4  stw 4, 32(7)
  00c8ab8  b 0xc8ac0
  00c8abc  ori 3, 6, 0
  00c8ac0  blr

Hud_RestoreEntryCallbackById:   # 0xc8ac4, 0x64 bytes
  00c8ac4  li 6, 0
  00c8ac8  lis 4, 114
  00c8acc  ori 5, 6, 0
  00c8ad0  addic 4, 4, 15220
  00c8ad4  lwz 7, 0(4)
  00c8ad8  cmpw 7, 3
  00c8adc  bf 2, 0xc8b14
  00c8ae0  sldi 4, 6, 7
  00c8ae4  lis 3, 114
  00c8ae8  sldi 6, 6, 4
  00c8aec  addic 3, 3, 15120
  00c8af0  addc 4, 4, 6
  00c8af4  addc 3, 3, 4
  00c8af8  clrldi 3, 3, 32
  00c8afc  lwz 4, 120(3)
  00c8b00  stw 5, 124(3)
  00c8b04  lwz 5, 8(3)
  00c8b08  stw 4, 116(3)
  00c8b0c  stw 5, 120(3)
  00c8b10  b 0xc8b24
  00c8b14  addic 6, 6, 1
  00c8b18  addic 4, 4, 144
  00c8b1c  cmpwi 6, 13
  00c8b20  bt 0, 0xc8ad4
  00c8b24  blr

Hud_SetEntryValueById:   # 0xc8b28, 0x60 bytes
  00c8b28  lis 5, 114
  00c8b2c  li 6, 0
  00c8b30  addic 5, 5, 15120
  00c8b34  addic 7, 5, 100
  00c8b38  lwz 8, 0(7)
  00c8b3c  cmpw 8, 3
  00c8b40  bt 2, 0xc8b54
  00c8b44  addic 6, 6, 1
  00c8b48  addic 7, 7, 144
  00c8b4c  cmpwi 6, 13
  00c8b50  bt 0, 0xc8b38
  00c8b54  cmpwi 6, 13
  00c8b58  bf 0, 0xc8b84
  00c8b5c  sldi 3, 6, 7
  00c8b60  sldi 6, 6, 4
  00c8b64  addc 3, 3, 6
  00c8b68  extsw 6, 3
  00c8b6c  addc 6, 5, 6
  00c8b70  lwz 3, 104(6)
  00c8b74  stw 4, 36(6)
  00c8b78  cmpwi 3, 0
  00c8b7c  bf 2, 0xc8b84
  00c8b80  stw 4, 4(6)
  00c8b84  blr

HudEntry_ApplyAlignment:   # 0xc8b88, 0x70 bytes
  00c8b88  lwz 7, 96(3)
  00c8b8c  lwz 6, 88(3)
  00c8b90  clrlwi 9, 7, 31
  00c8b94  lwz 8, 92(3)
  00c8b98  cmpwi 9, 0
  00c8b9c  bf 2, 0xc8bc0
  00c8ba0  rlwinm 9, 7, 0, 30, 30
  00c8ba4  cmpwi 9, 0
  00c8ba8  bf 2, 0xc8bc0
  00c8bac  srawi 7, 8, 1
  00c8bb0  lwz 8, 0(5)
  00c8bb4  subc 7, 8, 7
  00c8bb8  stw 7, 0(5)
  00c8bbc  lwz 7, 96(3)
  00c8bc0  rlwinm 3, 7, 0, 29, 29
  00c8bc4  cmpwi 3, 0
  00c8bc8  bf 2, 0xc8bf0
  00c8bcc  rlwinm 3, 7, 0, 28, 28
  00c8bd0  cmpwi 3, 0
  00c8bd4  bt 2, 0xc8be0
  00c8bd8  lwz 3, 0(4)
  00c8bdc  b 0xc8be8
  00c8be0  srawi 6, 6, 1
  00c8be4  lwz 3, 0(4)
  00c8be8  subc 3, 3, 6
  00c8bec  stw 3, 0(4)
  00c8bf0  li 3, 0
  00c8bf4  blr

HudEntry_GetSlideOffset:   # 0xc8c08, 0x208 bytes
  00c8c08  stdu 1, -176(1)
  00c8c0c  mflr 0
  00c8c10  std 0, 192(1)
  00c8c14  stfd 29, 152(1)
  00c8c18  stfd 30, 160(1)
  00c8c1c  stfd 31, 168(1)
  00c8c20  std 30, 136(1)
  00c8c24  subc 8, 6, 7
  00c8c28  ori 30, 4, 0
  00c8c2c  addc 6, 7, 6
  00c8c30  li 4, 0
  00c8c34  lwz 7, 124(3)
  00c8c38  subc 6, 6, 8
  00c8c3c  subc 4, 4, 7
  00c8c40  li 10, 0
  00c8c44  cntlzw 4, 4
  00c8c48  li 9, 0
  00c8c4c  sldi 4, 4, 58
  00c8c50  li 11, 23
  00c8c54  std 28, 120(1)
  00c8c58  sradi 4, 4, 63
  00c8c5c  li 28, 0
  00c8c60  and 4, 4, 6
  00c8c64  li 6, 23
  00c8c68  std 31, 144(1)
  00c8c6c  addc 8, 8, 4
  00c8c70  ori 31, 5, 0
  00c8c74  extsw 4, 8
  00c8c78  subc 9, 9, 8
  00c8c7c  subc 4, 4, 10
  00c8c80  cmpwi 7, 0
  00c8c84  sradi 10, 4, 63
  00c8c88  std 29, 128(1)
  00c8c8c  lwz 4, 96(3)
  00c8c90  ori 29, 28, 0
  00c8c94  and 9, 10, 9
  00c8c98  lwz 5, 92(3)
  00c8c9c  lwz 3, 88(3)
  00c8ca0  addc 8, 8, 9
  00c8ca4  extsw 9, 8
  00c8ca8  subc 6, 6, 8
  00c8cac  subc 9, 11, 9
  00c8cb0  sradi 9, 9, 63
  00c8cb4  and 6, 9, 6
  00c8cb8  addc 6, 8, 6
  00c8cbc  sldi 6, 6, 2
  00c8cc0  extsw 6, 6
  00c8cc4  bt 2, 0xc8cd8
  00c8cc8  lis 7, 114
  00c8ccc  addic 7, 7, 16992
  00c8cd0  lfsx 29, 7, 6
  00c8cd4  b 0xc8ce4
  00c8cd8  lis 7, 114
  00c8cdc  addic 7, 7, 17088
  00c8ce0  lfsx 29, 7, 6
  00c8ce4  lis 6, 13
  00c8ce8  clrlwi 7, 4, 31
  00c8cec  addi 6, 6, -29704
  00c8cf0  cmpwi 7, 0
  00c8cf4  lfs 30, 0(6)
  00c8cf8  bt 2, 0xc8d2c
  00c8cfc  extsw 3, 5
  00c8d00  bl 0x502730
  00c8d04  nop
  00c8d08  lis 3, 13
  00c8d0c  addi 3, 3, -29704
  00c8d10  lfs 2, 4(3)
  00c8d14  fadds 1, 1, 2
  00c8d18  fmadds 1, 29, 1, 30
  00c8d1c  bl 0x502758
  00c8d20  nop
  00c8d24  neg 29, 3
  00c8d28  b 0xc8dcc
  00c8d2c  rlwinm 6, 4, 0, 30, 30
  00c8d30  cmpwi 6, 0
  00c8d34  bt 2, 0xc8d68
  00c8d38  extsw 3, 5
  00c8d3c  bl 0x502730
  00c8d40  nop
  00c8d44  lis 3, 13
  00c8d48  addi 3, 3, -29704
  00c8d4c  lfs 2, 4(3)
  00c8d50  fadds 1, 1, 2
  00c8d54  fmadds 1, 29, 1, 30
  00c8d58  bl 0x502758
  00c8d5c  nop
  00c8d60  ori 29, 3, 0
  00c8d64  b 0xc8dcc
  00c8d68  lis 5, 13
  00c8d6c  rlwinm 6, 4, 0, 29, 29
  00c8d70  addi 5, 5, -29704
  00c8d74  cmpwi 6, 0
  00c8d78  extsw 3, 3
  00c8d7c  lfs 31, 8(5)
  00c8d80  bt 2, 0xc8da4
  00c8d84  bl 0x502730
  00c8d88  nop
  00c8d8c  fadds 1, 1, 31
  00c8d90  fmadds 1, 29, 1, 30
  00c8d94  bl 0x502758
  00c8d98  nop
  00c8d9c  neg 28, 3
  00c8da0  b 0xc8dcc
  00c8da4  rlwinm 4, 4, 0, 28, 28
  00c8da8  cmpwi 4, 0
  00c8dac  bt 2, 0xc8dcc
  00c8db0  bl 0x502730
  00c8db4  nop
  00c8db8  fadds 1, 1, 31
  00c8dbc  fmadds 1, 29, 1, 30
  00c8dc0  bl 0x502758
  00c8dc4  nop
  00c8dc8  ori 28, 3, 0
  00c8dcc  lwz 3, 0(30)
  00c8dd0  addc 3, 3, 28
  00c8dd4  stw 3, 0(30)
  00c8dd8  lwz 3, 0(31)
  00c8ddc  addc 3, 3, 29
  00c8de0  stw 3, 0(31)
  00c8de4  ld 0, 192(1)
  00c8de8  mtlr 0
  00c8dec  lfd 29, 152(1)
  00c8df0  lfd 30, 160(1)
  00c8df4  lfd 31, 168(1)
  00c8df8  ld 28, 120(1)
  00c8dfc  ld 29, 128(1)
  00c8e00  ld 30, 136(1)
  00c8e04  ld 31, 144(1)
  00c8e08  addi 1, 1, 176
  00c8e0c  blr

HudEntry_CalcNumberSize:   # 0xc8e10, 0x124 bytes
  00c8e10  lwz 4, 12(3)
  00c8e14  lwz 5, 8(3)
  00c8e18  cmpwi 4, 0
  00c8e1c  bt 2, 0xc8e50
  00c8e20  clrlwi 6, 4, 30
  00c8e24  cmpwi 6, 0
  00c8e28  bf 2, 0xc8e50
  00c8e2c  lwz 4, 0(4)
  00c8e30  extsw 6, 5
  00c8e34  extsw 7, 4
  00c8e38  subc 8, 5, 4
  00c8e3c  subc 6, 6, 7
  00c8e40  sradi 6, 6, 63
  00c8e44  and 6, 6, 8
  00c8e48  addc 4, 4, 6
  00c8e4c  b 0xc8e58
  00c8e50  lis 4, 1
  00c8e54  ori 4, 4, 34463
  00c8e58  stw 4, 120(3)
  00c8e5c  cmpwi 5, 10
  00c8e60  stw 4, 116(3)
  00c8e64  li 4, 0
  00c8e68  bt 0, 0xc8e90
  00c8e6c  lis 6, 26214
  00c8e70  addic 4, 4, 1
  00c8e74  ori 6, 6, 26215
  00c8e78  mulhw 5, 6, 5
  00c8e7c  srawi 5, 5, 2
  00c8e80  srwi 6, 5, 31
  00c8e84  addc 5, 5, 6
  00c8e88  cmpwi 5, 10
  00c8e8c  bf 0, 0xc8e6c
  00c8e90  lwz 5, 96(3)
  00c8e94  clrlwi 6, 5, 30
  00c8e98  cmpwi 6, 0
  00c8e9c  bf 2, 0xc8eec
  00c8ea0  rlwinm 5, 5, 0, 28, 29
  00c8ea4  cmpwi 5, 0
  00c8ea8  bt 2, 0xc8eec
  00c8eac  lwz 7, 88(3)
  00c8eb0  addc 5, 4, 4
  00c8eb4  lwz 8, 92(3)
  00c8eb8  li 6, 14
  00c8ebc  extsw 9, 7
  00c8ec0  addc 4, 4, 5
  00c8ec4  li 5, 14
  00c8ec8  subc 6, 9, 6
  00c8ecc  sldi 4, 4, 2
  00c8ed0  subc 5, 5, 7
  00c8ed4  sradi 6, 6, 63
  00c8ed8  addc 4, 4, 8
  00c8edc  and 5, 6, 5
  00c8ee0  addic 4, 4, 12
  00c8ee4  addc 5, 7, 5
  00c8ee8  b 0xc8f28
  00c8eec  lwz 7, 92(3)
  00c8ef0  sldi 6, 4, 4
  00c8ef4  li 5, 12
  00c8ef8  extsw 9, 7
  00c8efc  subc 6, 6, 4
  00c8f00  li 8, 12
  00c8f04  subc 5, 9, 5
  00c8f08  lwz 9, 88(3)
  00c8f0c  subc 4, 6, 4
  00c8f10  subc 8, 8, 7
  00c8f14  sradi 5, 5, 63
  00c8f18  addc 4, 4, 9
  00c8f1c  and 6, 5, 8
  00c8f20  addic 5, 4, 14
  00c8f24  addc 4, 7, 6
  00c8f28  stw 4, 92(3)
  00c8f2c  stw 5, 88(3)
  00c8f30  blr

HudEntry_InitCounter:   # 0xc8f40, 0x74 bytes
  00c8f40  stdu 1, -112(1)
  00c8f44  mflr 0
  00c8f48  std 0, 128(1)
  00c8f4c  lis 4, 13
  00c8f50  vspltisw 2, -1
  00c8f54  lis 5, 114
  00c8f58  addi 4, 4, -28876
  00c8f5c  li 6, -3056
  00c8f60  vslw 2, 2, 2
  00c8f64  li 7, 0
  00c8f68  lvlx 3, 0, 4
  00c8f6c  lvlx 4, 6, 5
  00c8f70  vspltw 3, 3, 0
  00c8f74  li 5, 4
  00c8f78  li 6, 124
  00c8f7c  vmaddfp 2, 4, 3, 2
  00c8f80  lvlx 3, 5, 4
  00c8f84  vspltw 3, 3, 0
  00c8f88  vctsxs 2, 2, 0
  00c8f8c  vadduwm 2, 2, 3
  00c8f90  vspltw 2, 2, 0
  00c8f94  stvewx 2, 6, 3
  00c8f98  sth 7, 72(3)
  00c8f9c  sth 7, 74(3)
  00c8fa0  bl 0xc8e10
  00c8fa4  ld 0, 128(1)
  00c8fa8  mtlr 0
  00c8fac  addi 1, 1, 112
  00c8fb0  blr

HudEntry_InitCounter32:   # 0xc8fc0, 0x80 bytes
  00c8fc0  stdu 1, -112(1)
  00c8fc4  mflr 0
  00c8fc8  std 0, 128(1)
  00c8fcc  lis 4, 13
  00c8fd0  vspltisw 2, -1
  00c8fd4  lis 5, 114
  00c8fd8  addi 4, 4, -28748
  00c8fdc  li 6, -3056
  00c8fe0  vslw 2, 2, 2
  00c8fe4  li 7, 32
  00c8fe8  lvlx 3, 0, 4
  00c8fec  lvlx 4, 6, 5
  00c8ff0  vspltw 3, 3, 0
  00c8ff4  li 5, 4
  00c8ff8  li 6, 124
  00c8ffc  vmaddfp 2, 4, 3, 2
  00c9000  lvlx 3, 5, 4
  00c9004  li 4, 0
  00c9008  vspltw 3, 3, 0
  00c900c  vctsxs 2, 2, 0
  00c9010  vadduwm 2, 2, 3
  00c9014  vspltw 2, 2, 0
  00c9018  stvewx 2, 6, 3
  00c901c  stw 7, 88(3)
  00c9020  stw 7, 92(3)
  00c9024  sth 4, 72(3)
  00c9028  sth 4, 74(3)
  00c902c  bl 0xc8e10
  00c9030  ld 0, 128(1)
  00c9034  mtlr 0
  00c9038  addi 1, 1, 112
  00c903c  blr

Hud_SetEntryPosById:   # 0xc9040, 0x60 bytes
  00c9040  lis 8, 114
  00c9044  li 9, 0
  00c9048  addic 8, 8, 15220
  00c904c  lwz 10, 0(8)
  00c9050  cmpw 10, 3
  00c9054  bt 2, 0xc9068
  00c9058  addic 9, 9, 1
  00c905c  addic 8, 8, 144
  00c9060  cmpwi 9, 13
  00c9064  bt 0, 0xc904c
  00c9068  cmpwi 9, 13
  00c906c  bf 0, 0xc909c
  00c9070  sldi 8, 9, 7
  00c9074  lis 3, 114
  00c9078  sldi 9, 9, 4
  00c907c  addic 3, 3, 15120
  00c9080  addc 8, 8, 9
  00c9084  addc 3, 3, 8
  00c9088  clrldi 3, 3, 32
  00c908c  stw 4, 88(3)
  00c9090  stw 5, 92(3)
  00c9094  sth 6, 72(3)
  00c9098  sth 7, 74(3)
  00c909c  blr

Hud_ShowEntryById:   # 0xc90a0, 0x90 bytes
  00c90a0  lis 5, 114
  00c90a4  li 7, 0
  00c90a8  addic 5, 5, 15120
  00c90ac  ori 6, 7, 0
  00c90b0  addic 8, 5, 100
  00c90b4  lwz 9, 0(8)
  00c90b8  cmpw 9, 3
  00c90bc  bt 2, 0xc90d0
  00c90c0  addic 7, 7, 1
  00c90c4  addic 8, 8, 144
  00c90c8  cmpwi 7, 13
  00c90cc  bt 0, 0xc90b4
  00c90d0  cmpwi 7, 13
  00c90d4  bf 0, 0xc9128
  00c90d8  sldi 3, 7, 7
  00c90dc  sldi 7, 7, 4
  00c90e0  addc 7, 3, 7
  00c90e4  extsw 3, 7
  00c90e8  addc 3, 5, 3
  00c90ec  lwz 3, 104(3)
  00c90f0  cmpwi 3, 0
  00c90f4  bf 2, 0xc9128
  00c90f8  addc 3, 5, 7
  00c90fc  clrldi 5, 3, 32
  00c9100  ori 3, 6, 0
  00c9104  lwz 6, 124(5)
  00c9108  extsw 7, 6
  00c910c  subc 6, 6, 4
  00c9110  subc 7, 4, 7
  00c9114  sradi 7, 7, 63
  00c9118  and 6, 7, 6
  00c911c  addc 4, 4, 6
  00c9120  stw 4, 124(5)
  00c9124  b 0xc912c
  00c9128  li 3, 1
  00c912c  blr

HudIcon_GetAnimFrame:   # 0xc9138, 0x23c bytes
  00c9138  stdu 1, -176(1)
  00c913c  mflr 0
  00c9140  std 0, 192(1)
  00c9144  lis 4, 162
  00c9148  lhz 5, 0(3)
  00c914c  lis 6, 0
  00c9150  addic 4, 4, -16448
  00c9154  std 31, 168(1)
  00c9158  extsh 5, 5
  00c915c  ori 31, 3, 0
  00c9160  sldi 5, 5, 3
  00c9164  std 29, 152(1)
  00c9168  ori 3, 6, 65535
  00c916c  lwz 4, 28(4)
  00c9170  std 30, 160(1)
  00c9174  li 29, 0
  00c9178  addc 30, 4, 5
  00c917c  clrldi 30, 30, 32
  00c9180  lhz 4, 0(30)
  00c9184  std 28, 144(1)
  00c9188  std 27, 136(1)
  00c918c  cmpw 4, 3
  00c9190  bt 2, 0xc9348
  00c9194  lbz 3, 2(31)
  00c9198  cmpwi 3, 1
  00c919c  cmpwi 1, 3, 3
  00c91a0  cmpwi 6, 3, 2
  00c91a4  cmpwi 7, 3, 0
  00c91a8  bt 1, 0xc91bc
  00c91ac  cmpwi 3, -1
  00c91b0  bf 1, 0xc9348
  00c91b4  bf 29, 0xc91c8
  00c91b8  b 0xc91d0
  00c91bc  bf 25, 0xc9208
  00c91c0  bf 5, 0xc9278
  00c91c4  b 0xc9348
  00c91c8  lhz 29, 4(30)
  00c91cc  b 0xc9348
  00c91d0  lis 3, 161
  00c91d4  lwz 4, 12(31)
  00c91d8  lwz 3, 1808(3)
  00c91dc  lbz 5, 7(30)
  00c91e0  subc 3, 3, 4
  00c91e4  lhz 4, 2(30)
  00c91e8  divw 3, 3, 5
  00c91ec  divw 5, 3, 4
  00c91f0  mullw 4, 5, 4
  00c91f4  lhz 5, 4(30)
  00c91f8  subc 3, 3, 4
  00c91fc  addc 29, 5, 3
  00c9200  extsw 29, 29
  00c9204  b 0xc9348
  00c9208  lis 3, 161
  00c920c  lwz 4, 12(31)
  00c9210  lwz 3, 1808(3)
  00c9214  lbz 5, 7(30)
  00c9218  subc 3, 3, 4
  00c921c  lhz 4, 2(30)
  00c9220  divw 3, 3, 5
  00c9224  slwi 5, 4, 1
  00c9228  rlwinm 6, 4, 1, 15, 30
  00c922c  addic 5, 5, -2
  00c9230  divw 5, 3, 5
  00c9234  mullw 7, 5, 6
  00c9238  addc 5, 5, 5
  00c923c  subfic 5, 5, 0
  00c9240  addc 5, 7, 5
  00c9244  subc 3, 3, 5
  00c9248  subc 5, 6, 3
  00c924c  extsw 6, 3
  00c9250  addic 5, 5, -2
  00c9254  subc 4, 6, 4
  00c9258  subc 3, 3, 5
  00c925c  sradi 4, 4, 63
  00c9260  lhz 6, 4(30)
  00c9264  and 3, 4, 3
  00c9268  addc 3, 5, 3
  00c926c  addc 29, 3, 6
  00c9270  extsw 29, 29
  00c9274  b 0xc9348
  00c9278  lis 4, 161
  00c927c  lwz 3, 12(31)
  00c9280  lwz 4, 1808(4)
  00c9284  cmpw 3, 4
  00c9288  bf 0, 0xc9340
  00c928c  subc 29, 4, 3
  00c9290  lbz 3, 7(30)
  00c9294  lhz 4, 2(30)
  00c9298  divw 29, 29, 3
  00c929c  slwi 3, 4, 1
  00c92a0  addic 5, 3, -2
  00c92a4  cmpw 29, 5
  00c92a8  bf 0, 0xc92dc
  00c92ac  subc 3, 3, 29
  00c92b0  lhz 6, 4(30)
  00c92b4  extsw 5, 29
  00c92b8  addic 3, 3, -2
  00c92bc  subc 4, 5, 4
  00c92c0  subc 5, 29, 3
  00c92c4  sradi 4, 4, 63
  00c92c8  and 4, 4, 5
  00c92cc  addc 3, 3, 4
  00c92d0  addc 29, 3, 6
  00c92d4  extsw 29, 29
  00c92d8  b 0xc9348
  00c92dc  lis 3, 13
  00c92e0  lis 28, 114
  00c92e4  addi 27, 3, -28368
  00c92e8  lfs 1, 0(27)
  00c92ec  lfs 2, -3056(28)
  00c92f0  lhz 29, 4(30)
  00c92f4  fmuls 1, 2, 1
  00c92f8  fctiwz 1, 1
  00c92fc  stfd 1, 112(1)
  00c9300  lwz 3, 116(1)
  00c9304  extsw 3, 3
  00c9308  bl 0xfc620
  00c930c  nop
  00c9310  lfs 1, 4(27)
  00c9314  lfs 2, -3056(28)
  00c9318  lhz 4, 2(30)
  00c931c  fmuls 1, 2, 1
  00c9320  slwi 4, 4, 1
  00c9324  fctiwz 1, 1
  00c9328  stfd 1, 112(1)
  00c932c  lwz 5, 116(1)
  00c9330  addc 4, 4, 5
  00c9334  addc 3, 4, 3
  00c9338  stw 3, 12(31)
  00c933c  b 0xc9348
  00c9340  lwz 29, 4(31)
  00c9344  extsw 29, 29
  00c9348  ori 3, 29, 0
  00c934c  stw 29, 4(31)
  00c9350  ld 0, 192(1)
  00c9354  mtlr 0
  00c9358  ld 27, 136(1)
  00c935c  ld 28, 144(1)
  00c9360  ld 29, 152(1)
  00c9364  ld 30, 160(1)
  00c9368  ld 31, 168(1)
  00c936c  addi 1, 1, 176
  00c9370  blr

HudEntry_UpdateCounter:   # 0xc9390, 0x310 bytes
  00c9390  stdu 1, -160(1)
  00c9394  mflr 0
  00c9398  std 0, 176(1)
  00c939c  std 31, 152(1)
  00c93a0  ori 31, 3, 0
  00c93a4  std 30, 144(1)
  00c93a8  lwz 4, 12(31)
  00c93ac  lwz 30, 120(31)
  00c93b0  lwz 5, 8(31)
  00c93b4  cmpwi 4, 0
  00c93b8  lwz 6, 108(31)
  00c93bc  lwz 3, 116(31)
  00c93c0  std 29, 136(1)
  00c93c4  cmpwi 1, 6, 24
  00c93c8  bt 2, 0xc9410
  00c93cc  lwz 4, 0(4)
  00c93d0  li 6, 0
  00c93d4  li 7, 0
  00c93d8  extsw 8, 4
  00c93dc  subc 7, 7, 4
  00c93e0  subc 6, 8, 6
  00c93e4  extsw 8, 5
  00c93e8  sradi 6, 6, 63
  00c93ec  and 6, 6, 7
  00c93f0  addc 30, 4, 6
  00c93f4  extsw 4, 30
  00c93f8  subc 5, 5, 30
  00c93fc  subc 4, 8, 4
  00c9400  sradi 4, 4, 63
  00c9404  and 4, 4, 5
  00c9408  addc 30, 30, 4
  00c940c  stw 30, 120(31)
  00c9410  cmpw 3, 30
  00c9414  bt 2, 0xc95b8
  00c9418  lis 4, 13
  00c941c  vspltisw 2, -1
  00c9420  lis 5, 114
  00c9424  addi 4, 4, -27788
  00c9428  li 6, -3056
  00c942c  vslw 2, 2, 2
  00c9430  lvlx 3, 0, 4
  00c9434  lvlx 4, 6, 5
  00c9438  li 4, 124
  00c943c  vspltw 3, 3, 0
  00c9440  vmaddfp 2, 4, 3, 2
  00c9444  vctsxs 2, 2, 0
  00c9448  vspltw 2, 2, 0
  00c944c  stvewx 2, 4, 31
  00c9450  bt 4, 0xc95b8
  00c9454  subc 3, 3, 30
  00c9458  extsw 30, 3
  00c945c  li 3, 0
  00c9460  neg 4, 30
  00c9464  subc 3, 30, 3
  00c9468  subc 4, 4, 30
  00c946c  sradi 3, 3, 63
  00c9470  and 3, 3, 4
  00c9474  addc 30, 30, 3
  00c9478  cmpwi 30, 0
  00c947c  bt 2, 0xc95b8
  00c9480  ori 3, 30, 0
  00c9484  bl 0x502730
  00c9488  nop
  00c948c  lis 3, 13
  00c9490  addi 29, 3, -27788
  00c9494  lfs 2, 4(29)
  00c9498  fmuls 1, 1, 2
  00c949c  lfs 2, 8(29)
  00c94a0  fsqrts 1, 1
  00c94a4  fmuls 1, 1, 2
  00c94a8  bl 0x502758
  00c94ac  nop
  00c94b0  lis 4, 114
  00c94b4  lfs 1, 12(29)
  00c94b8  lfs 2, -3056(4)
  00c94bc  fmuls 1, 2, 1
  00c94c0  fctiwz 1, 1
  00c94c4  stfd 1, 112(1)
  00c94c8  lfs 1, 16(29)
  00c94cc  lwz 4, 116(1)
  00c94d0  fmuls 2, 2, 1
  00c94d4  lbz 5, 115(31)
  00c94d8  lwz 6, 116(31)
  00c94dc  lwz 7, 120(31)
  00c94e0  fctiwz 2, 2
  00c94e4  stfd 2, 112(1)
  00c94e8  lwz 8, 116(1)
  00c94ec  mullw 30, 30, 8
  00c94f0  divw 8, 30, 4
  00c94f4  cmpw 8, 3
  00c94f8  bf 1, 0xc9500
  00c94fc  divw 3, 30, 4
  00c9500  extsw 4, 3
  00c9504  li 8, 1
  00c9508  li 9, 1
  00c950c  subc 8, 4, 8
  00c9510  subc 9, 9, 3
  00c9514  sradi 8, 8, 63
  00c9518  li 10, 121
  00c951c  and 8, 8, 9
  00c9520  subc 4, 10, 4
  00c9524  li 9, 121
  00c9528  addc 3, 3, 8
  00c952c  sradi 4, 4, 63
  00c9530  subc 9, 9, 3
  00c9534  lis 8, 114
  00c9538  and 4, 4, 9
  00c953c  addc 3, 3, 4
  00c9540  addc 4, 5, 3
  00c9544  stb 4, 115(31)
  00c9548  lfs 2, -3056(8)
  00c954c  clrlwi 4, 4, 24
  00c9550  fmuls 2, 2, 1
  00c9554  fctiwz 2, 2
  00c9558  stfd 2, 112(1)
  00c955c  lwz 3, 116(1)
  00c9560  cmpw 4, 3
  00c9564  bf 1, 0xc95b8
  00c9568  divw 3, 4, 3
  00c956c  lis 5, 114
  00c9570  extsw 8, 6
  00c9574  extsw 7, 7
  00c9578  subc 9, 6, 3
  00c957c  lfs 2, -3056(5)
  00c9580  addc 5, 6, 3
  00c9584  fmuls 1, 2, 1
  00c9588  subc 6, 7, 8
  00c958c  subc 7, 9, 5
  00c9590  sradi 6, 6, 63
  00c9594  and 6, 6, 7
  00c9598  addc 5, 5, 6
  00c959c  fctiwz 1, 1
  00c95a0  stw 5, 116(31)
  00c95a4  stfd 1, 112(1)
  00c95a8  lwz 5, 116(1)
  00c95ac  mullw 3, 3, 5
  00c95b0  subc 3, 4, 3
  00c95b4  stb 3, 115(31)
  00c95b8  lis 3, 13
  00c95bc  lis 4, 114
  00c95c0  addi 3, 3, -27788
  00c95c4  lfs 2, 20(3)
  00c95c8  lfs 1, -3056(4)
  00c95cc  lwz 3, 124(31)
  00c95d0  fmuls 2, 1, 2
  00c95d4  fctiwz 2, 2
  00c95d8  stfd 2, 112(1)
  00c95dc  lwz 4, 116(1)
  00c95e0  cmpw 3, 4
  00c95e4  bt 0, 0xc9638
  00c95e8  lis 3, 13
  00c95ec  addi 3, 3, -27788
  00c95f0  lfs 2, 24(3)
  00c95f4  lbz 4, 112(31)
  00c95f8  fmuls 1, 1, 2
  00c95fc  fctiwz 1, 1
  00c9600  stfd 1, 112(1)
  00c9604  lwz 3, 116(1)
  00c9608  cmpw 4, 3
  00c960c  bf 0, 0xc961c
  00c9610  addic 3, 4, 1
  00c9614  stb 3, 112(31)
  00c9618  b 0xc967c
  00c961c  ori 4, 3, 0
  00c9620  lbz 3, 113(31)
  00c9624  cmpw 3, 4
  00c9628  bf 0, 0xc967c
  00c962c  addic 3, 3, 1
  00c9630  stb 3, 113(31)
  00c9634  b 0xc967c
  00c9638  lbz 3, 113(31)
  00c963c  cmpwi 1, 3, 0
  00c9640  bf 6, 0xc9650
  00c9644  lbz 4, 112(31)
  00c9648  cmpwi 4, 0
  00c964c  bt 2, 0xc9658
  00c9650  li 4, 1
  00c9654  stw 4, 108(31)
  00c9658  bt 6, 0xc9668
  00c965c  addic 3, 3, -1
  00c9660  stb 3, 113(31)
  00c9664  b 0xc967c
  00c9668  lbz 3, 112(31)
  00c966c  cmpwi 3, 0
  00c9670  bt 2, 0xc967c
  00c9674  addic 3, 3, -1
  00c9678  stb 3, 112(31)
  00c967c  addic 3, 31, 64
  00c9680  bl 0xc9138
  00c9684  ld 0, 176(1)
  00c9688  mtlr 0
  00c968c  ld 29, 136(1)
  00c9690  ld 30, 144(1)
  00c9694  ld 31, 152(1)
  00c9698  addi 1, 1, 160
  00c969c  blr

HudEntry_UpdateCounterSlide:   # 0xc96b0, 0x170 bytes
  00c96b0  stdu 1, -128(1)
  00c96b4  mflr 0
  00c96b8  std 0, 144(1)
  00c96bc  lwz 10, 12(3)
  00c96c0  lwz 7, 120(3)
  00c96c4  lis 9, 13
  00c96c8  lwz 8, 8(3)
  00c96cc  cmpwi 10, 0
  00c96d0  lwz 6, 108(3)
  00c96d4  addi 9, 9, -26976
  00c96d8  lbz 5, 112(3)
  00c96dc  cmpwi 1, 6, 24
  00c96e0  lwz 6, 116(3)
  00c96e4  cmpwi 7, 5, 0
  00c96e8  lbz 4, 113(3)
  00c96ec  cmpwi 6, 4, 0
  00c96f0  bt 2, 0xc9738
  00c96f4  lwz 10, 0(10)
  00c96f8  li 7, 0
  00c96fc  extsw 12, 10
  00c9700  li 11, 0
  00c9704  subc 7, 12, 7
  00c9708  subc 11, 11, 10
  00c970c  sradi 7, 7, 63
  00c9710  extsw 12, 8
  00c9714  and 7, 7, 11
  00c9718  addc 7, 10, 7
  00c971c  extsw 10, 7
  00c9720  subc 8, 8, 7
  00c9724  subc 10, 12, 10
  00c9728  sradi 10, 10, 63
  00c972c  and 8, 10, 8
  00c9730  addc 7, 7, 8
  00c9734  stw 7, 120(3)
  00c9738  cmpw 6, 7
  00c973c  bt 2, 0xc9778
  00c9740  vspltisw 2, -1
  00c9744  lis 6, 114
  00c9748  li 8, -3056
  00c974c  lvlx 3, 0, 9
  00c9750  vspltw 3, 3, 0
  00c9754  vslw 2, 2, 2
  00c9758  lvlx 4, 8, 6
  00c975c  li 6, 124
  00c9760  vmaddfp 2, 4, 3, 2
  00c9764  vctsxs 2, 2, 0
  00c9768  vspltw 2, 2, 0
  00c976c  stvewx 2, 6, 3
  00c9770  bt 4, 0xc9778
  00c9774  stw 7, 116(3)
  00c9778  lis 6, 114
  00c977c  lfs 2, 4(9)
  00c9780  lfs 1, -3056(6)
  00c9784  lwz 6, 124(3)
  00c9788  fmuls 2, 1, 2
  00c978c  fctiwz 2, 2
  00c9790  stfd 2, 112(1)
  00c9794  lwz 7, 116(1)
  00c9798  cmpw 6, 7
  00c979c  bt 0, 0xc97dc
  00c97a0  lfs 2, 8(9)
  00c97a4  fmuls 1, 1, 2
  00c97a8  fctiwz 1, 1
  00c97ac  stfd 1, 112(1)
  00c97b0  lwz 6, 116(1)
  00c97b4  cmpw 5, 6
  00c97b8  cmpw 1, 4, 6
  00c97bc  bf 0, 0xc97cc
  00c97c0  addic 4, 5, 1
  00c97c4  stb 4, 112(3)
  00c97c8  b 0xc9808
  00c97cc  bf 4, 0xc9808
  00c97d0  addic 4, 4, 1
  00c97d4  stb 4, 113(3)
  00c97d8  b 0xc9808
  00c97dc  bf 26, 0xc97e4
  00c97e0  bt 30, 0xc97ec
  00c97e4  li 6, 1
  00c97e8  stw 6, 108(3)
  00c97ec  bt 26, 0xc97fc
  00c97f0  addic 4, 4, -1
  00c97f4  stb 4, 113(3)
  00c97f8  b 0xc9808
  00c97fc  bt 30, 0xc9808
  00c9800  addic 4, 5, -1
  00c9804  stb 4, 112(3)
  00c9808  addic 3, 3, 64
  00c980c  bl 0xc9138
  00c9810  ld 0, 144(1)
  00c9814  mtlr 0
  00c9818  addi 1, 1, 128
  00c981c  blr

STUB_000c9820:   # 0xc9820, 0x4 bytes
  00c9820  blr

HudEntry_DrawLargeNumber:   # 0xc9824, 0x324 bytes
  00c9824  stdu 1, -272(1)
  00c9828  mflr 0
  00c982c  std 0, 288(1)
  00c9830  std 31, 264(1)
  00c9834  std 30, 256(1)
  00c9838  std 27, 232(1)
  00c983c  ori 31, 3, 0
  00c9840  ori 30, 5, 0
  00c9844  std 29, 248(1)
  00c9848  li 27, 0
  00c984c  std 28, 240(1)
  00c9850  ori 29, 6, 0
  00c9854  ori 28, 7, 0
  00c9858  std 26, 224(1)
  00c985c  lwz 3, 96(31)
  00c9860  lwz 26, 92(31)
  00c9864  clrlwi 5, 3, 30
  00c9868  std 25, 216(1)
  00c986c  std 24, 208(1)
  00c9870  std 23, 200(1)
  00c9874  std 22, 192(1)
  00c9878  std 21, 184(1)
  00c987c  std 20, 176(1)
  00c9880  std 19, 168(1)
  00c9884  std 18, 160(1)
  00c9888  std 17, 152(1)
  00c988c  std 16, 144(1)
  00c9890  std 15, 136(1)
  00c9894  cmpwi 5, 0
  00c9898  bf 2, 0xc98c4
  00c989c  rlwinm 3, 3, 0, 28, 29
  00c98a0  cmpwi 3, 0
  00c98a4  bt 2, 0xc98c4
  00c98a8  lwz 3, 88(31)
  00c98ac  ori 24, 27, 0
  00c98b0  li 23, 12
  00c98b4  addic 25, 3, -14
  00c98b8  ori 26, 24, 0
  00c98bc  srawi 25, 25, 1
  00c98c0  b 0xc98d8
  00c98c4  addic 26, 26, -12
  00c98c8  ori 23, 27, 0
  00c98cc  srawi 26, 26, 1
  00c98d0  li 24, 14
  00c98d4  ori 25, 23, 0
  00c98d8  ori 3, 4, 0
  00c98dc  stb 27, 121(1)
  00c98e0  ori 22, 27, 0
  00c98e4  cmpwi 3, 10
  00c98e8  bt 0, 0xc9918
  00c98ec  ori 22, 27, 0
  00c98f0  lis 5, 26214
  00c98f4  addic 22, 22, 1
  00c98f8  ori 5, 5, 26215
  00c98fc  mulhw 3, 5, 3
  00c9900  extsw 22, 22
  00c9904  srawi 3, 3, 2
  00c9908  srwi 5, 3, 31
  00c990c  addc 3, 3, 5
  00c9910  cmpwi 3, 10
  00c9914  bf 0, 0xc98f0
  00c9918  ori 20, 22, 0
  00c991c  ori 21, 4, 0
  00c9920  sldi 3, 20, 4
  00c9924  cmpwi 20, 0
  00c9928  subc 3, 3, 20
  00c992c  subc 3, 3, 20
  00c9930  addic 19, 3, 14
  00c9934  extsw 19, 19
  00c9938  bt 0, 0xc9af0
  00c993c  lis 3, -16384
  00c9940  lis 4, -16384
  00c9944  clrldi 16, 3, 32
  00c9948  ori 3, 4, 32896
  00c994c  addic 17, 26, 1
  00c9950  clrldi 15, 3, 32
  00c9954  mullw 3, 22, 24
  00c9958  mullw 4, 22, 23
  00c995c  addc 3, 3, 30
  00c9960  addc 6, 4, 29
  00c9964  addc 7, 3, 27
  00c9968  ori 3, 31, 0
  00c996c  addic 4, 1, 112
  00c9970  stw 6, 116(1)
  00c9974  addic 5, 1, 116
  00c9978  stw 7, 112(1)
  00c997c  ori 6, 28, 0
  00c9980  ori 7, 22, 0
  00c9984  bl 0xc8c08
  00c9988  lis 3, 26214
  00c998c  ori 3, 3, 26215
  00c9990  mulhw 3, 3, 21
  00c9994  lwz 5, 112(1)
  00c9998  addic 18, 1, 120
  00c999c  srawi 3, 3, 2
  00c99a0  lwz 6, 116(1)
  00c99a4  li 7, -1
  00c99a8  srwi 4, 3, 31
  00c99ac  addc 6, 6, 17
  00c99b0  addc 3, 3, 4
  00c99b4  sldi 4, 3, 3
  00c99b8  addc 4, 3, 4
  00c99bc  addc 3, 3, 4
  00c99c0  addc 4, 5, 25
  00c99c4  subc 3, 21, 3
  00c99c8  addic 4, 4, -1
  00c99cc  addic 8, 3, 48
  00c99d0  extsw 3, 4
  00c99d4  extsw 4, 6
  00c99d8  ori 5, 16, 0
  00c99dc  stb 8, 120(1)
  00c99e0  ori 6, 18, 0
  00c99e4  bl 0x6fcfc
  00c99e8  nop
  00c99ec  lwz 3, 112(1)
  00c99f0  ori 5, 15, 0
  00c99f4  lwz 4, 116(1)
  00c99f8  ori 6, 18, 0
  00c99fc  addc 3, 3, 25
  00c9a00  addc 4, 4, 26
  00c9a04  extsw 3, 3
  00c9a08  extsw 4, 4
  00c9a0c  li 7, -1
  00c9a10  bl 0x6fcfc
  00c9a14  nop
  00c9a18  subc 3, 20, 22
  00c9a1c  cmpwi 3, 5
  00c9a20  bf 2, 0xc9a2c
  00c9a24  cmpwi 20, 5
  00c9a28  bt 1, 0xc9a3c
  00c9a2c  cmpwi 3, 2
  00c9a30  bf 2, 0xc9ac8
  00c9a34  cmpwi 20, 2
  00c9a38  bf 1, 0xc9ac8
  00c9a3c  lis 3, 151
  00c9a40  lis 18, 101
  00c9a44  addic 18, 18, 8400
  00c9a48  lwz 3, -25484(3)
  00c9a4c  cmpwi 3, 3
  00c9a50  cmpwi 1, 3, 5
  00c9a54  bt 2, 0xc9a5c
  00c9a58  bf 6, 0xc9a64
  00c9a5c  lis 18, 101
  00c9a60  addic 18, 18, 8408
  00c9a64  lwz 3, 112(1)
  00c9a68  ori 5, 16, 0
  00c9a6c  lwz 4, 116(1)
  00c9a70  ori 6, 18, 0
  00c9a74  addc 3, 3, 25
  00c9a78  addc 4, 4, 17
  00c9a7c  addic 3, 3, -5
  00c9a80  li 7, -1
  00c9a84  extsw 3, 3
  00c9a88  extsw 4, 4
  00c9a8c  bl 0x6fcfc
  00c9a90  nop
  00c9a94  lwz 3, 112(1)
  00c9a98  ori 5, 15, 0
  00c9a9c  lwz 4, 116(1)
  00c9aa0  ori 6, 18, 0
  00c9aa4  addc 3, 3, 25
  00c9aa8  addc 4, 4, 26
  00c9aac  addic 3, 3, -4
  00c9ab0  extsw 4, 4
  00c9ab4  extsw 3, 3
  00c9ab8  li 7, -1
  00c9abc  bl 0x6fcfc
  00c9ac0  nop
  00c9ac4  addic 27, 27, -4
  00c9ac8  lis 3, 26214
  00c9acc  addic 22, 22, -1
  00c9ad0  ori 3, 3, 26215
  00c9ad4  mulhw 3, 3, 21
  00c9ad8  extsw 22, 22
  00c9adc  srawi 21, 3, 2
  00c9ae0  cmpwi 22, 0
  00c9ae4  srwi 3, 21, 31
  00c9ae8  addc 21, 21, 3
  00c9aec  bf 0, 0xc9954
  00c9af0  ori 3, 19, 0
  00c9af4  ld 0, 288(1)
  00c9af8  mtlr 0
  00c9afc  ld 15, 136(1)
  00c9b00  ld 16, 144(1)
  00c9b04  ld 17, 152(1)
  00c9b08  ld 18, 160(1)
  00c9b0c  ld 19, 168(1)
  00c9b10  ld 20, 176(1)
  00c9b14  ld 21, 184(1)
  00c9b18  ld 22, 192(1)
  00c9b1c  ld 23, 200(1)
  00c9b20  ld 24, 208(1)
  00c9b24  ld 25, 216(1)
  00c9b28  ld 26, 224(1)
  00c9b2c  ld 27, 232(1)
  00c9b30  ld 28, 240(1)
  00c9b34  ld 29, 248(1)
  00c9b38  ld 30, 256(1)
  00c9b3c  ld 31, 264(1)
  00c9b40  addi 1, 1, 272
  00c9b44  blr

Draw_LargeNumberHud:   # 0xc9b48, 0xec bytes
  00c9b48  stdu 1, -128(1)
  00c9b4c  mflr 0
  00c9b50  std 0, 144(1)
  00c9b54  std 31, 120(1)
  00c9b58  ori 31, 3, 0
  00c9b5c  lwz 5, 80(31)
  00c9b60  lwz 4, 84(31)
  00c9b64  lwz 7, 96(31)
  00c9b68  stw 5, 112(1)
  00c9b6c  stw 4, 116(1)
  00c9b70  clrlwi 3, 7, 31
  00c9b74  lwz 8, 88(31)
  00c9b78  lwz 9, 92(31)
  00c9b7c  cmpwi 3, 0
  00c9b80  lwz 6, 116(31)
  00c9b84  lwz 3, 108(31)
  00c9b88  bf 2, 0xc9ba4
  00c9b8c  rlwinm 10, 7, 0, 30, 30
  00c9b90  cmpwi 10, 0
  00c9b94  bf 2, 0xc9ba4
  00c9b98  srawi 9, 9, 1
  00c9b9c  subc 4, 4, 9
  00c9ba0  stw 4, 116(1)
  00c9ba4  rlwinm 9, 7, 0, 29, 29
  00c9ba8  cmpwi 9, 0
  00c9bac  bf 2, 0xc9be0
  00c9bb0  rlwinm 7, 7, 0, 28, 28
  00c9bb4  li 9, 0
  00c9bb8  srawi 10, 8, 1
  00c9bbc  subc 7, 9, 7
  00c9bc0  subc 9, 10, 8
  00c9bc4  cntlzw 7, 7
  00c9bc8  sldi 7, 7, 58
  00c9bcc  sradi 7, 7, 63
  00c9bd0  and 7, 7, 9
  00c9bd4  addc 7, 8, 7
  00c9bd8  subc 5, 5, 7
  00c9bdc  stw 5, 112(1)
  00c9be0  extsw 8, 6
  00c9be4  extsw 6, 4
  00c9be8  extsw 7, 3
  00c9bec  extsw 5, 5
  00c9bf0  ori 3, 31, 0
  00c9bf4  ori 4, 8, 0
  00c9bf8  bl 0xc9824
  00c9bfc  lwz 6, 108(31)
  00c9c00  ori 3, 31, 0
  00c9c04  addic 4, 1, 112
  00c9c08  addic 5, 1, 116
  00c9c0c  extsw 6, 6
  00c9c10  li 7, 0
  00c9c14  bl 0xc8c08
  00c9c18  lwz 3, 88(31)
  00c9c1c  extsw 3, 3
  00c9c20  ld 0, 144(1)
  00c9c24  mtlr 0
  00c9c28  ld 31, 120(1)
  00c9c2c  addi 1, 1, 128
  00c9c30  blr

???_Unused_HudEntry_GetSlideField58:   # 0xc9c34, 0xc8 bytes
  00c9c34  stdu 1, -128(1)
  00c9c38  mflr 0
  00c9c3c  std 0, 144(1)
  00c9c40  std 31, 120(1)
  00c9c44  ori 31, 3, 0
  00c9c48  lwz 8, 80(31)
  00c9c4c  lwz 4, 96(31)
  00c9c50  lwz 7, 84(31)
  00c9c54  stw 8, 112(1)
  00c9c58  clrlwi 3, 4, 31
  00c9c5c  stw 7, 116(1)
  00c9c60  lwz 5, 88(31)
  00c9c64  cmpwi 3, 0
  00c9c68  lwz 6, 92(31)
  00c9c6c  lwz 3, 108(31)
  00c9c70  bf 2, 0xc9c8c
  00c9c74  rlwinm 9, 4, 0, 30, 30
  00c9c78  cmpwi 9, 0
  00c9c7c  bf 2, 0xc9c8c
  00c9c80  srawi 6, 6, 1
  00c9c84  subc 6, 7, 6
  00c9c88  stw 6, 116(1)
  00c9c8c  rlwinm 6, 4, 0, 29, 29
  00c9c90  cmpwi 6, 0
  00c9c94  bf 2, 0xc9cc8
  00c9c98  rlwinm 4, 4, 0, 28, 28
  00c9c9c  li 6, 0
  00c9ca0  srawi 7, 5, 1
  00c9ca4  subc 4, 6, 4
  00c9ca8  subc 6, 7, 5
  00c9cac  cntlzw 4, 4
  00c9cb0  sldi 4, 4, 58
  00c9cb4  sradi 4, 4, 63
  00c9cb8  and 4, 4, 6
  00c9cbc  addc 4, 5, 4
  00c9cc0  subc 4, 8, 4
  00c9cc4  stw 4, 112(1)
  00c9cc8  extsw 6, 3
  00c9ccc  ori 3, 31, 0
  00c9cd0  addic 4, 1, 112
  00c9cd4  addic 5, 1, 116
  00c9cd8  li 7, 0
  00c9cdc  bl 0xc8c08
  00c9ce0  lwz 3, 88(31)
  00c9ce4  extsw 3, 3
  00c9ce8  ld 0, 144(1)
  00c9cec  mtlr 0
  00c9cf0  ld 31, 120(1)
  00c9cf4  addi 1, 1, 128
  00c9cf8  blr

OxygenHud_Init:   # 0xc9d28, 0x280 bytes
  00c9d28  stdu 1, -256(1)
  00c9d2c  mflr 0
  00c9d30  std 0, 272(1)
  00c9d34  stfd 22, 176(1)
  00c9d38  stfd 23, 184(1)
  00c9d3c  stfd 24, 192(1)
  00c9d40  stfd 25, 200(1)
  00c9d44  stfd 26, 208(1)
  00c9d48  stfd 27, 216(1)
  00c9d4c  stfd 28, 224(1)
  00c9d50  stfd 29, 232(1)
  00c9d54  stfd 30, 240(1)
  00c9d58  stfd 31, 248(1)
  00c9d5c  lis 4, 13
  00c9d60  vspltisw 2, -1
  00c9d64  std 31, 168(1)
  00c9d68  lis 5, 114
  00c9d6c  addi 31, 4, -25348
  00c9d70  li 4, -3056
  00c9d74  std 27, 136(1)
  00c9d78  vslw 2, 2, 2
  00c9d7c  li 27, 0
  00c9d80  lvlx 3, 0, 31
  00c9d84  lvlx 4, 4, 5
  00c9d88  vspltw 3, 3, 0
  00c9d8c  li 4, 4
  00c9d90  li 5, 124
  00c9d94  vmaddfp 2, 4, 3, 2
  00c9d98  lvlx 3, 4, 31
  00c9d9c  vspltw 3, 3, 0
  00c9da0  vctsxs 2, 2, 0
  00c9da4  vadduwm 2, 2, 3
  00c9da8  vspltw 2, 2, 0
  00c9dac  stvewx 2, 5, 3
  00c9db0  sth 27, 72(3)
  00c9db4  std 30, 160(1)
  00c9db8  std 29, 152(1)
  00c9dbc  std 28, 144(1)
  00c9dc0  sth 27, 74(3)
  00c9dc4  bl 0xc8e10
  00c9dc8  lfs 24, 8(31)
  00c9dcc  lis 28, 162
  00c9dd0  lfs 25, 12(31)
  00c9dd4  lfs 26, 16(31)
  00c9dd8  lfs 27, 20(31)
  00c9ddc  addic 28, 28, -15968
  00c9de0  lfs 28, 24(31)
  00c9de4  lfs 29, 28(31)
  00c9de8  lfs 30, 32(31)
  00c9dec  addic 30, 28, 8
  00c9df0  lfs 31, 36(31)
  00c9df4  addic 29, 28, 4
  00c9df8  addic 31, 28, 12
  00c9dfc  cmpwi 27, 10
  00c9e00  cmpwi 1, 27, 20
  00c9e04  bf 0, 0xc9e14
  00c9e08  lis 3, 114
  00c9e0c  lfs 1, 17184(3)
  00c9e10  b 0xc9e2c
  00c9e14  bf 4, 0xc9e24
  00c9e18  lis 3, 114
  00c9e1c  lfs 1, 17188(3)
  00c9e20  b 0xc9e2c
  00c9e24  lis 3, 114
  00c9e28  lfs 1, 17192(3)
  00c9e2c  lis 3, 114
  00c9e30  fnmsubs 2, 1, 24, 25
  00c9e34  fsubs 4, 1, 26
  00c9e38  lwz 3, 17196(3)
  00c9e3c  extsw 4, 3
  00c9e40  fsubs 6, 1, 27
  00c9e44  std 4, 112(1)
  00c9e48  divw 4, 27, 3
  00c9e4c  lfd 3, 112(1)
  00c9e50  mullw 3, 4, 3
  00c9e54  fcfid 3, 3
  00c9e58  subc 3, 27, 3
  00c9e5c  extsw 3, 3
  00c9e60  std 3, 112(1)
  00c9e64  frsp 3, 3
  00c9e68  fdivs 3, 2, 3
  00c9e6c  lfd 2, 112(1)
  00c9e70  fcfid 5, 2
  00c9e74  fsubs 2, 27, 1
  00c9e78  fmr 1, 6
  00c9e7c  frsp 5, 5
  00c9e80  fmadds 23, 5, 3, 4
  00c9e84  fadds 22, 23, 3
  00c9e88  bl 0xfcbe8
  00c9e8c  nop
  00c9e90  stfs 1, 0(28)
  00c9e94  fmr 1, 23
  00c9e98  fmr 2, 22
  00c9e9c  bl 0xfcbe8
  00c9ea0  nop
  00c9ea4  stfs 1, 0(29)
  00c9ea8  fmr 2, 29
  00c9eac  fmr 1, 28
  00c9eb0  bl 0xfcbe8
  00c9eb4  nop
  00c9eb8  stfs 1, 0(30)
  00c9ebc  fmr 1, 30
  00c9ec0  fmr 2, 31
  00c9ec4  bl 0xfcbe8
  00c9ec8  nop
  00c9ecc  stfs 1, 0(31)
  00c9ed0  fmr 2, 29
  00c9ed4  fmr 1, 28
  00c9ed8  bl 0xfcbe8
  00c9edc  nop
  00c9ee0  lfs 2, 0(30)
  00c9ee4  fadds 3, 2, 1
  00c9ee8  fmr 1, 30
  00c9eec  fmr 2, 31
  00c9ef0  stfs 3, 0(30)
  00c9ef4  bl 0xfcbe8
  00c9ef8  nop
  00c9efc  lfs 2, 0(31)
  00c9f00  fadds 3, 2, 1
  00c9f04  fmr 1, 28
  00c9f08  fmr 2, 29
  00c9f0c  stfs 3, 0(31)
  00c9f10  bl 0xfcbe8
  00c9f14  nop
  00c9f18  lfs 2, 0(30)
  00c9f1c  fadds 3, 2, 1
  00c9f20  fmr 1, 30
  00c9f24  fmr 2, 31
  00c9f28  stfs 3, 0(30)
  00c9f2c  bl 0xfcbe8
  00c9f30  nop
  00c9f34  lfs 2, 0(31)
  00c9f38  addic 27, 27, 1
  00c9f3c  addic 28, 28, 16
  00c9f40  fadds 1, 2, 1
  00c9f44  cmpwi 27, 100
  00c9f48  addic 29, 29, 16
  00c9f4c  addic 30, 30, 16
  00c9f50  stfs 1, 0(31)
  00c9f54  addic 31, 31, 16
  00c9f58  bt 0, 0xc9dfc
  00c9f5c  ld 0, 272(1)
  00c9f60  mtlr 0
  00c9f64  lfd 22, 176(1)
  00c9f68  lfd 23, 184(1)
  00c9f6c  lfd 24, 192(1)
  00c9f70  lfd 25, 200(1)
  00c9f74  lfd 26, 208(1)
  00c9f78  lfd 27, 216(1)
  00c9f7c  lfd 28, 224(1)
  00c9f80  lfd 29, 232(1)
  00c9f84  lfd 30, 240(1)
  00c9f88  lfd 31, 248(1)
  00c9f8c  ld 27, 136(1)
  00c9f90  ld 28, 144(1)
  00c9f94  ld 29, 152(1)
  00c9f98  ld 30, 160(1)
  00c9f9c  ld 31, 168(1)
  00c9fa0  addi 1, 1, 256
  00c9fa4  blr

OxygenHud_Update:   # 0xc9fb0, 0x144 bytes
  00c9fb0  stdu 1, -112(1)
  00c9fb4  mflr 0
  00c9fb8  std 0, 128(1)
  00c9fbc  bl 0xc9390
  00c9fc0  lis 3, 346
  00c9fc4  lis 4, 162
  00c9fc8  addic 4, 4, -15968
  00c9fcc  lwz 3, -15568(3)
  00c9fd0  srawi 5, 3, 1
  00c9fd4  addze 5, 5
  00c9fd8  sldi 5, 5, 1
  00c9fdc  subc 3, 3, 5
  00c9fe0  sldi 5, 3, 4
  00c9fe4  cmpwi 3, 100
  00c9fe8  addc 4, 4, 5
  00c9fec  clrldi 4, 4, 32
  00c9ff0  bf 0, 0xca0e4
  00c9ff4  lis 5, 13
  00c9ff8  lis 6, 114
  00c9ffc  lis 7, 114
  00ca000  addi 5, 5, -24664
  00ca004  lis 8, 114
  00ca008  lfs 3, 17184(6)
  00ca00c  lfs 2, 17188(7)
  00ca010  lfs 5, 0(5)
  00ca014  lfs 4, 4(5)
  00ca018  lfs 1, 17192(8)
  00ca01c  cmpwi 3, 10
  00ca020  cmpwi 1, 3, 30
  00ca024  bf 0, 0xca030
  00ca028  fmr 9, 3
  00ca02c  b 0xca03c
  00ca030  fmr 9, 1
  00ca034  bf 4, 0xca03c
  00ca038  fmr 9, 2
  00ca03c  lfs 10, 8(4)
  00ca040  lfs 11, 0(4)
  00ca044  fsubs 13, 9, 5
  00ca048  lfs 6, 12(4)
  00ca04c  fsubs 9, 9, 4
  00ca050  fadds 11, 11, 10
  00ca054  lfs 7, 4(4)
  00ca058  fadds 7, 7, 6
  00ca05c  fneg 12, 13
  00ca060  fneg 8, 9
  00ca064  fcmpu 0, 11, 13
  00ca068  stfs 11, 0(4)
  00ca06c  stfs 7, 4(4)
  00ca070  cror 6, 1, 2
  00ca074  bt 6, 0xca088
  00ca078  fneg 10, 10
  00ca07c  stfs 13, 0(4)
  00ca080  fmr 11, 13
  00ca084  stfs 10, 8(4)
  00ca088  fcmpu 0, 11, 12
  00ca08c  cror 6, 0, 2
  00ca090  bt 6, 0xca0a0
  00ca094  fneg 10, 10
  00ca098  stfs 12, 0(4)
  00ca09c  stfs 10, 8(4)
  00ca0a0  fcmpu 0, 7, 9
  00ca0a4  cror 6, 1, 2
  00ca0a8  bt 6, 0xca0bc
  00ca0ac  fneg 6, 6
  00ca0b0  stfs 9, 4(4)
  00ca0b4  fmr 7, 9
  00ca0b8  stfs 6, 12(4)
  00ca0bc  fcmpu 0, 7, 8
  00ca0c0  cror 6, 0, 2
  00ca0c4  bt 6, 0xca0d4
  00ca0c8  fneg 6, 6
  00ca0cc  stfs 8, 4(4)
  00ca0d0  stfs 6, 12(4)
  00ca0d4  addic 3, 3, 2
  00ca0d8  addic 4, 4, 32
  00ca0dc  cmpwi 3, 100
  00ca0e0  bt 0, 0xca01c
  00ca0e4  ld 0, 128(1)
  00ca0e8  mtlr 0
  00ca0ec  addi 1, 1, 112
  00ca0f0  blr

Hud_DrawTexQuad_v2:   # 0xca0f4, 0x2c8 bytes
  00ca0f4  stdu 1, -176(1)
  00ca0f8  mflr 0
  00ca0fc  std 0, 192(1)
  00ca100  lis 9, 162
  00ca104  lis 10, 161
  00ca108  addic 9, 9, -16448
  00ca10c  sldi 3, 3, 2
  00ca110  addic 10, 10, 24396
  00ca114  std 31, 168(1)
  00ca118  extsw 3, 3
  00ca11c  ori 31, 8, 0
  00ca120  lwz 9, 32(9)
  00ca124  std 26, 128(1)
  00ca128  lis 11, 144
  00ca12c  ori 26, 4, 0
  00ca130  std 28, 144(1)
  00ca134  std 27, 136(1)
  00ca138  lwz 8, 28(10)
  00ca13c  addic 28, 11, -23532
  00ca140  std 29, 152(1)
  00ca144  ori 27, 6, 0
  00ca148  lwzx 3, 9, 3
  00ca14c  std 30, 160(1)
  00ca150  ori 29, 5, 0
  00ca154  ori 30, 7, 0
  00ca158  sldi 4, 3, 5
  00ca15c  sldi 3, 3, 2
  00ca160  lwz 5, 40(28)
  00ca164  addc 3, 4, 3
  00ca168  li 4, 0
  00ca16c  addc 6, 8, 3
  00ca170  std 25, 120(1)
  00ca174  ori 3, 5, 0
  00ca178  clrldi 25, 6, 32
  00ca17c  ori 5, 25, 0
  00ca180  bl 0x4d6d00
  00ca184  nop
  00ca188  lwz 3, 40(28)
  00ca18c  bl 0x4d6948
  00ca190  nop
  00ca194  lwz 3, 40(28)
  00ca198  lis 4, 4
  00ca19c  lwz 5, 24(25)
  00ca1a0  slwi 6, 31, 24
  00ca1a4  ori 4, 4, 6472
  00ca1a8  lis 7, 0
  00ca1ac  lwz 8, 8(3)
  00ca1b0  oris 6, 6, 128
  00ca1b4  ori 7, 7, 32896
  00ca1b8  or 6, 6, 7
  00ca1bc  stw 4, 0(8)
  00ca1c0  lwz 4, 8(3)
  00ca1c4  lis 7, 16396
  00ca1c8  lis 8, 4
  00ca1cc  lis 9, 4
  00ca1d0  stw 6, 4(4)
  00ca1d4  lwz 4, 8(3)
  00ca1d8  ori 6, 7, 5908
  00ca1dc  addic 4, 4, 8
  00ca1e0  clrlwi 10, 26, 16
  00ca1e4  stw 4, 8(3)
  00ca1e8  lwz 3, 40(28)
  00ca1ec  li 4, 0
  00ca1f0  lwz 7, 8(3)
  00ca1f4  addc 12, 30, 29
  00ca1f8  stw 6, 0(7)
  00ca1fc  lwz 6, 8(3)
  00ca200  ori 7, 8, 6152
  00ca204  li 8, 8
  00ca208  stw 4, 4(6)
  00ca20c  lwz 6, 8(3)
  00ca210  stw 4, 8(6)
  00ca214  lwz 6, 8(3)
  00ca218  stw 4, 12(6)
  00ca21c  lwz 6, 8(3)
  00ca220  stw 7, 16(6)
  00ca224  lwz 6, 8(3)
  00ca228  stw 8, 20(6)
  00ca22c  lwz 6, 8(3)
  00ca230  ori 8, 9, 6404
  00ca234  addic 6, 6, 24
  00ca238  stw 6, 8(3)
  00ca23c  lwz 3, 40(28)
  00ca240  lis 6, 4
  00ca244  ori 6, 6, 6400
  00ca248  lwz 9, 8(3)
  00ca24c  stw 8, 0(9)
  00ca250  lwz 9, 8(3)
  00ca254  stw 4, 4(9)
  00ca258  lwz 9, 8(3)
  00ca25c  addic 9, 9, 8
  00ca260  stw 9, 8(3)
  00ca264  lwz 3, 40(28)
  00ca268  ori 9, 10, 0
  00ca26c  rlwimi 9, 29, 16, 0, 15
  00ca270  lwz 11, 8(3)
  00ca274  rlwimi 10, 12, 16, 0, 15
  00ca278  stw 6, 0(11)
  00ca27c  lwz 11, 8(3)
  00ca280  stw 9, 4(11)
  00ca284  lwz 9, 8(3)
  00ca288  slwi 11, 5, 16
  00ca28c  addic 9, 9, 8
  00ca290  stw 9, 8(3)
  00ca294  lwz 3, 40(28)
  00ca298  lwz 9, 8(3)
  00ca29c  stw 8, 0(9)
  00ca2a0  lwz 9, 8(3)
  00ca2a4  stw 11, 4(9)
  00ca2a8  lwz 9, 8(3)
  00ca2ac  rotlwi 11, 5, 16
  00ca2b0  addic 9, 9, 8
  00ca2b4  srwi 5, 5, 16
  00ca2b8  stw 9, 8(3)
  00ca2bc  lwz 3, 40(28)
  00ca2c0  lwz 9, 8(3)
  00ca2c4  stw 6, 0(9)
  00ca2c8  lwz 9, 8(3)
  00ca2cc  stw 10, 4(9)
  00ca2d0  lwz 9, 8(3)
  00ca2d4  addic 9, 9, 8
  00ca2d8  stw 9, 8(3)
  00ca2dc  lwz 3, 40(28)
  00ca2e0  addc 9, 27, 26
  00ca2e4  clrlwi 9, 9, 16
  00ca2e8  lwz 10, 8(3)
  00ca2ec  stw 8, 0(10)
  00ca2f0  lwz 10, 8(3)
  00ca2f4  stw 11, 4(10)
  00ca2f8  lwz 10, 8(3)
  00ca2fc  ori 11, 9, 0
  00ca300  addic 10, 10, 8
  00ca304  rlwimi 11, 12, 16, 0, 15
  00ca308  stw 10, 8(3)
  00ca30c  lwz 3, 40(28)
  00ca310  rlwimi 9, 29, 16, 0, 15
  00ca314  lwz 10, 8(3)
  00ca318  stw 6, 0(10)
  00ca31c  lwz 10, 8(3)
  00ca320  stw 11, 4(10)
  00ca324  lwz 10, 8(3)
  00ca328  addic 10, 10, 8
  00ca32c  stw 10, 8(3)
  00ca330  lwz 3, 40(28)
  00ca334  lwz 10, 8(3)
  00ca338  stw 8, 0(10)
  00ca33c  lwz 8, 8(3)
  00ca340  stw 5, 4(8)
  00ca344  lwz 5, 8(3)
  00ca348  addic 5, 5, 8
  00ca34c  stw 5, 8(3)
  00ca350  lwz 3, 40(28)
  00ca354  lwz 5, 8(3)
  00ca358  stw 6, 0(5)
  00ca35c  lwz 5, 8(3)
  00ca360  stw 9, 4(5)
  00ca364  lwz 5, 8(3)
  00ca368  addic 5, 5, 8
  00ca36c  stw 5, 8(3)
  00ca370  lwz 3, 40(28)
  00ca374  lwz 5, 8(3)
  00ca378  stw 7, 0(5)
  00ca37c  lwz 5, 8(3)
  00ca380  stw 4, 4(5)
  00ca384  lwz 4, 8(3)
  00ca388  addic 4, 4, 8
  00ca38c  stw 4, 8(3)
  00ca390  ld 0, 192(1)
  00ca394  mtlr 0
  00ca398  ld 25, 120(1)
  00ca39c  ld 26, 128(1)
  00ca3a0  ld 27, 136(1)
  00ca3a4  ld 28, 144(1)
  00ca3a8  ld 29, 152(1)
  00ca3ac  ld 30, 160(1)
  00ca3b0  ld 31, 168(1)
  00ca3b4  addi 1, 1, 176
  00ca3b8  blr

Hud_DrawTexQuad_v2_Fixed:   # 0xca3bc, 0x28 bytes
  00ca3bc  stdu 1, -112(1)
  00ca3c0  mflr 0
  00ca3c4  std 0, 128(1)
  00ca3c8  srawi 4, 4, 4
  00ca3cc  srawi 5, 5, 4
  00ca3d0  bl 0xca0f4
  00ca3d4  ld 0, 128(1)
  00ca3d8  mtlr 0
  00ca3dc  addi 1, 1, 112
  00ca3e0  blr

GetIconFrameTex:   # 0xca3e4, 0x80 bytes
  00ca3e4  lis 5, 162
  00ca3e8  li 8, 0
  00ca3ec  addic 5, 5, -16448
  00ca3f0  lis 7, 0
  00ca3f4  ori 6, 8, 0
  00ca3f8  ori 7, 7, 65535
  00ca3fc  lwz 5, 28(5)
  00ca400  ori 9, 5, 0
  00ca404  lhz 10, 0(9)
  00ca408  cmpw 1, 10, 3
  00ca40c  cmpw 10, 7
  00ca410  cror 2, 2, 6
  00ca414  bt 2, 0xca424
  00ca418  addic 9, 9, 8
  00ca41c  addic 8, 8, 1
  00ca420  b 0xca404
  00ca424  slwi 8, 8, 3
  00ca428  extsw 3, 8
  00ca42c  lhzx 3, 5, 3
  00ca430  cmpw 3, 7
  00ca434  bt 2, 0xca44c
  00ca438  addc 8, 5, 8
  00ca43c  clrldi 8, 8, 32
  00ca440  lhz 3, 2(8)
  00ca444  cmpw 4, 3
  00ca448  bt 0, 0xca454
  00ca44c  ori 3, 6, 0
  00ca450  b 0xca460
  00ca454  lhz 3, 4(8)
  00ca458  addc 3, 3, 4
  00ca45c  extsw 3, 3
  00ca460  blr

Hud_DrawTexQuad_v3:   # 0xca464, 0x2c8 bytes
  00ca464  stdu 1, -176(1)
  00ca468  mflr 0
  00ca46c  std 0, 192(1)
  00ca470  lis 9, 162
  00ca474  lis 10, 161
  00ca478  addic 9, 9, -16448
  00ca47c  sldi 3, 3, 2
  00ca480  addic 10, 10, 24396
  00ca484  std 31, 168(1)
  00ca488  extsw 3, 3
  00ca48c  ori 31, 8, 0
  00ca490  lwz 9, 32(9)
  00ca494  std 26, 128(1)
  00ca498  lis 11, 144
  00ca49c  ori 26, 4, 0
  00ca4a0  std 28, 144(1)
  00ca4a4  std 27, 136(1)
  00ca4a8  lwz 8, 28(10)
  00ca4ac  addic 28, 11, -23532
  00ca4b0  std 29, 152(1)
  00ca4b4  ori 27, 6, 0
  00ca4b8  lwzx 3, 9, 3
  00ca4bc  std 30, 160(1)
  00ca4c0  ori 29, 5, 0
  00ca4c4  ori 30, 7, 0
  00ca4c8  sldi 4, 3, 5
  00ca4cc  sldi 3, 3, 2
  00ca4d0  lwz 5, 40(28)
  00ca4d4  addc 3, 4, 3
  00ca4d8  li 4, 0
  00ca4dc  addc 6, 8, 3
  00ca4e0  std 25, 120(1)
  00ca4e4  ori 3, 5, 0
  00ca4e8  clrldi 25, 6, 32
  00ca4ec  ori 5, 25, 0
  00ca4f0  bl 0x4d6d00
  00ca4f4  nop
  00ca4f8  lwz 3, 40(28)
  00ca4fc  bl 0x4d6948
  00ca500  nop
  00ca504  lwz 3, 40(28)
  00ca508  lis 4, 4
  00ca50c  lwz 5, 24(25)
  00ca510  slwi 6, 31, 24
  00ca514  ori 4, 4, 6472
  00ca518  lis 7, 0
  00ca51c  lwz 8, 8(3)
  00ca520  oris 6, 6, 128
  00ca524  ori 7, 7, 32896
  00ca528  or 6, 6, 7
  00ca52c  stw 4, 0(8)
  00ca530  lwz 4, 8(3)
  00ca534  lis 7, 16396
  00ca538  lis 8, 4
  00ca53c  lis 9, 4
  00ca540  stw 6, 4(4)
  00ca544  lwz 4, 8(3)
  00ca548  ori 6, 7, 5908
  00ca54c  addic 4, 4, 8
  00ca550  lis 10, 4
  00ca554  stw 4, 8(3)
  00ca558  lwz 3, 40(28)
  00ca55c  li 4, 0
  00ca560  ori 10, 10, 6400
  00ca564  lwz 7, 8(3)
  00ca568  stw 6, 0(7)
  00ca56c  lwz 6, 8(3)
  00ca570  ori 7, 8, 6152
  00ca574  li 8, 8
  00ca578  stw 4, 4(6)
  00ca57c  lwz 6, 8(3)
  00ca580  stw 4, 8(6)
  00ca584  lwz 6, 8(3)
  00ca588  stw 4, 12(6)
  00ca58c  lwz 6, 8(3)
  00ca590  stw 7, 16(6)
  00ca594  lwz 6, 8(3)
  00ca598  slwi 12, 5, 16
  00ca59c  stw 8, 20(6)
  00ca5a0  lwz 6, 8(3)
  00ca5a4  ori 8, 9, 6404
  00ca5a8  addic 6, 6, 24
  00ca5ac  stw 6, 8(3)
  00ca5b0  lwz 3, 40(28)
  00ca5b4  srwi 6, 5, 16
  00ca5b8  lwz 9, 8(3)
  00ca5bc  rotlwi 5, 5, 16
  00ca5c0  stw 8, 0(9)
  00ca5c4  lwz 9, 8(3)
  00ca5c8  stw 6, 4(9)
  00ca5cc  lwz 6, 8(3)
  00ca5d0  clrlwi 9, 26, 16
  00ca5d4  addic 6, 6, 8
  00ca5d8  stw 6, 8(3)
  00ca5dc  lwz 3, 40(28)
  00ca5e0  ori 6, 9, 0
  00ca5e4  rlwimi 6, 29, 16, 0, 15
  00ca5e8  lwz 11, 8(3)
  00ca5ec  stw 10, 0(11)
  00ca5f0  lwz 11, 8(3)
  00ca5f4  stw 6, 4(11)
  00ca5f8  lwz 6, 8(3)
  00ca5fc  addc 11, 30, 29
  00ca600  addic 6, 6, 8
  00ca604  rlwimi 9, 11, 16, 0, 15
  00ca608  stw 6, 8(3)
  00ca60c  lwz 3, 40(28)
  00ca610  lwz 6, 8(3)
  00ca614  stw 8, 0(6)
  00ca618  lwz 6, 8(3)
  00ca61c  stw 4, 4(6)
  00ca620  lwz 6, 8(3)
  00ca624  addic 6, 6, 8
  00ca628  stw 6, 8(3)
  00ca62c  lwz 3, 40(28)
  00ca630  lwz 6, 8(3)
  00ca634  stw 10, 0(6)
  00ca638  lwz 6, 8(3)
  00ca63c  stw 9, 4(6)
  00ca640  lwz 6, 8(3)
  00ca644  addic 6, 6, 8
  00ca648  stw 6, 8(3)
  00ca64c  lwz 3, 40(28)
  00ca650  addc 6, 27, 26
  00ca654  clrlwi 6, 6, 16
  00ca658  lwz 9, 8(3)
  00ca65c  stw 8, 0(9)
  00ca660  lwz 9, 8(3)
  00ca664  stw 12, 4(9)
  00ca668  lwz 9, 8(3)
  00ca66c  ori 12, 6, 0
  00ca670  addic 9, 9, 8
  00ca674  rlwimi 12, 11, 16, 0, 15
  00ca678  stw 9, 8(3)
  00ca67c  lwz 3, 40(28)
  00ca680  rlwimi 6, 29, 16, 0, 15
  00ca684  lwz 9, 8(3)
  00ca688  stw 10, 0(9)
  00ca68c  lwz 9, 8(3)
  00ca690  stw 12, 4(9)
  00ca694  lwz 9, 8(3)
  00ca698  addic 9, 9, 8
  00ca69c  stw 9, 8(3)
  00ca6a0  lwz 3, 40(28)
  00ca6a4  lwz 9, 8(3)
  00ca6a8  stw 8, 0(9)
  00ca6ac  lwz 8, 8(3)
  00ca6b0  stw 5, 4(8)
  00ca6b4  lwz 5, 8(3)
  00ca6b8  addic 5, 5, 8
  00ca6bc  stw 5, 8(3)
  00ca6c0  lwz 3, 40(28)
  00ca6c4  lwz 5, 8(3)
  00ca6c8  stw 10, 0(5)
  00ca6cc  lwz 5, 8(3)
  00ca6d0  stw 6, 4(5)
  00ca6d4  lwz 5, 8(3)
  00ca6d8  addic 5, 5, 8
  00ca6dc  stw 5, 8(3)
  00ca6e0  lwz 3, 40(28)
  00ca6e4  lwz 5, 8(3)
  00ca6e8  stw 7, 0(5)
  00ca6ec  lwz 5, 8(3)
  00ca6f0  stw 4, 4(5)
  00ca6f4  lwz 4, 8(3)
  00ca6f8  addic 4, 4, 8
  00ca6fc  stw 4, 8(3)
  00ca700  ld 0, 192(1)
  00ca704  mtlr 0
  00ca708  ld 25, 120(1)
  00ca70c  ld 26, 128(1)
  00ca710  ld 27, 136(1)
  00ca714  ld 28, 144(1)
  00ca718  ld 29, 152(1)
  00ca71c  ld 30, 160(1)
  00ca720  ld 31, 168(1)
  00ca724  addi 1, 1, 176
  00ca728  blr

DrawFlatOverlay:   # 0xca72c, 0x324 bytes
  00ca72c  stdu 1, -176(1)
  00ca730  mflr 0
  00ca734  std 0, 192(1)
  00ca738  std 26, 128(1)
  00ca73c  lis 9, 161
  00ca740  ori 26, 8, 0
  00ca744  std 28, 144(1)
  00ca748  addic 8, 9, 24396
  00ca74c  std 25, 120(1)
  00ca750  ori 28, 3, 0
  00ca754  li 3, 22
  00ca758  std 31, 168(1)
  00ca75c  ori 25, 7, 0
  00ca760  std 30, 160(1)
  00ca764  std 24, 112(1)
  00ca768  ori 31, 6, 0
  00ca76c  ori 30, 5, 0
  00ca770  std 29, 152(1)
  00ca774  lwz 24, 28(8)
  00ca778  std 27, 136(1)
  00ca77c  ori 29, 4, 0
  00ca780  bl 0x685c4
  00ca784  nop
  00ca788  lis 27, 144
  00ca78c  sldi 4, 3, 5
  00ca790  sldi 3, 3, 2
  00ca794  addic 27, 27, -23532
  00ca798  addc 3, 4, 3
  00ca79c  li 4, 0
  00ca7a0  addc 5, 24, 3
  00ca7a4  lwz 3, 40(27)
  00ca7a8  clrldi 5, 5, 32
  00ca7ac  bl 0x4d6d00
  00ca7b0  nop
  00ca7b4  lwz 3, 40(27)
  00ca7b8  bl 0x4d6948
  00ca7bc  nop
  00ca7c0  lwz 4, 40(27)
  00ca7c4  rldicl 3, 25, 48, 56
  00ca7c8  lis 6, 4
  00ca7cc  rldicl 5, 25, 40, 56
  00ca7d0  ori 6, 6, 6472
  00ca7d4  lwz 9, 8(4)
  00ca7d8  rlwinm 3, 3, 16, 8, 15
  00ca7dc  rldicl 7, 25, 56, 56
  00ca7e0  rlwimi 3, 5, 24, 0, 7
  00ca7e4  clrlwi 8, 25, 24
  00ca7e8  rlwimi 3, 7, 8, 16, 23
  00ca7ec  stw 6, 0(9)
  00ca7f0  lwz 5, 8(4)
  00ca7f4  or 3, 3, 8
  00ca7f8  lis 6, 4
  00ca7fc  stw 3, 4(5)
  00ca800  lwz 3, 8(4)
  00ca804  ori 5, 6, 6404
  00ca808  addic 3, 3, 8
  00ca80c  lis 6, 16396
  00ca810  stw 3, 8(4)
  00ca814  lwz 3, 40(27)
  00ca818  li 4, 0
  00ca81c  ori 6, 6, 5908
  00ca820  cmpwi 26, 0
  00ca824  lwz 7, 8(3)
  00ca828  stw 5, 0(7)
  00ca82c  lwz 5, 8(3)
  00ca830  stw 4, 4(5)
  00ca834  lwz 5, 8(3)
  00ca838  addic 5, 5, 8
  00ca83c  stw 5, 8(3)
  00ca840  lwz 3, 40(27)
  00ca844  lis 5, 4
  00ca848  ori 5, 5, 6152
  00ca84c  lwz 7, 8(3)
  00ca850  stw 6, 0(7)
  00ca854  lwz 6, 8(3)
  00ca858  li 7, 8
  00ca85c  stw 4, 4(6)
  00ca860  lwz 6, 8(3)
  00ca864  stw 4, 8(6)
  00ca868  lwz 6, 8(3)
  00ca86c  stw 4, 12(6)
  00ca870  lwz 4, 8(3)
  00ca874  stw 5, 16(4)
  00ca878  lwz 4, 8(3)
  00ca87c  stw 7, 20(4)
  00ca880  lwz 4, 8(3)
  00ca884  addic 4, 4, 24
  00ca888  stw 4, 8(3)
  00ca88c  bt 2, 0xca93c
  00ca890  lwz 5, 40(27)
  00ca894  lis 3, 4
  00ca898  clrlwi 4, 28, 16
  00ca89c  ori 3, 3, 6400
  00ca8a0  ori 6, 4, 0
  00ca8a4  lwz 7, 8(5)
  00ca8a8  rlwimi 4, 31, 16, 0, 15
  00ca8ac  rlwimi 6, 29, 16, 0, 15
  00ca8b0  stw 3, 0(7)
  00ca8b4  lwz 7, 8(5)
  00ca8b8  stw 6, 4(7)
  00ca8bc  lwz 6, 8(5)
  00ca8c0  addic 6, 6, 8
  00ca8c4  stw 6, 8(5)
  00ca8c8  lwz 5, 40(27)
  00ca8cc  clrlwi 6, 30, 16
  00ca8d0  ori 8, 6, 0
  00ca8d4  lwz 7, 8(5)
  00ca8d8  rlwimi 8, 31, 16, 0, 15
  00ca8dc  rlwimi 6, 29, 16, 0, 15
  00ca8e0  stw 3, 0(7)
  00ca8e4  lwz 7, 8(5)
  00ca8e8  stw 4, 4(7)
  00ca8ec  lwz 4, 8(5)
  00ca8f0  addic 4, 4, 8
  00ca8f4  stw 4, 8(5)
  00ca8f8  lwz 4, 40(27)
  00ca8fc  lwz 5, 8(4)
  00ca900  stw 3, 0(5)
  00ca904  lwz 5, 8(4)
  00ca908  stw 8, 4(5)
  00ca90c  lwz 5, 8(4)
  00ca910  addic 5, 5, 8
  00ca914  stw 5, 8(4)
  00ca918  lwz 4, 40(27)
  00ca91c  lwz 5, 8(4)
  00ca920  stw 3, 0(5)
  00ca924  lwz 3, 8(4)
  00ca928  stw 6, 4(3)
  00ca92c  lwz 3, 8(4)
  00ca930  addic 3, 3, 8
  00ca934  stw 3, 8(4)
  00ca938  b 0xca9f4
  00ca93c  lwz 5, 40(27)
  00ca940  lis 3, 4
  00ca944  addic 4, 28, -1
  00ca948  ori 3, 3, 6400
  00ca94c  clrlwi 4, 4, 16
  00ca950  addic 6, 29, -1
  00ca954  lwz 8, 8(5)
  00ca958  ori 7, 4, 0
  00ca95c  addic 9, 31, -1
  00ca960  rlwimi 7, 6, 16, 0, 15
  00ca964  rlwimi 4, 9, 16, 0, 15
  00ca968  stw 3, 0(8)
  00ca96c  lwz 8, 8(5)
  00ca970  stw 7, 4(8)
  00ca974  lwz 7, 8(5)
  00ca978  addic 7, 7, 8
  00ca97c  stw 7, 8(5)
  00ca980  lwz 5, 40(27)
  00ca984  addic 7, 30, -1
  00ca988  clrlwi 7, 7, 16
  00ca98c  lwz 8, 8(5)
  00ca990  stw 3, 0(8)
  00ca994  lwz 8, 8(5)
  00ca998  stw 4, 4(8)
  00ca99c  lwz 4, 8(5)
  00ca9a0  ori 8, 7, 0
  00ca9a4  addic 4, 4, 8
  00ca9a8  rlwimi 8, 9, 16, 0, 15
  00ca9ac  rlwimi 7, 6, 16, 0, 15
  00ca9b0  stw 4, 8(5)
  00ca9b4  lwz 4, 40(27)
  00ca9b8  lwz 5, 8(4)
  00ca9bc  stw 3, 0(5)
  00ca9c0  lwz 5, 8(4)
  00ca9c4  stw 8, 4(5)
  00ca9c8  lwz 5, 8(4)
  00ca9cc  addic 5, 5, 8
  00ca9d0  stw 5, 8(4)
  00ca9d4  lwz 4, 40(27)
  00ca9d8  lwz 5, 8(4)
  00ca9dc  stw 3, 0(5)
  00ca9e0  lwz 3, 8(4)
  00ca9e4  stw 7, 4(3)
  00ca9e8  lwz 3, 8(4)
  00ca9ec  addic 3, 3, 8
  00ca9f0  stw 3, 8(4)
  00ca9f4  lwz 4, 40(27)
  00ca9f8  lis 3, 4
  00ca9fc  li 5, 0
  00caa00  ori 3, 3, 6152
  00caa04  lwz 6, 8(4)
  00caa08  stw 3, 0(6)
  00caa0c  lwz 3, 8(4)
  00caa10  stw 5, 4(3)
  00caa14  lwz 3, 8(4)
  00caa18  addic 3, 3, 8
  00caa1c  stw 3, 8(4)
  00caa20  ld 0, 192(1)
  00caa24  mtlr 0
  00caa28  ld 24, 112(1)
  00caa2c  ld 25, 120(1)
  00caa30  ld 26, 128(1)
  00caa34  ld 27, 136(1)
  00caa38  ld 28, 144(1)
  00caa3c  ld 29, 152(1)
  00caa40  ld 30, 160(1)
  00caa44  ld 31, 168(1)
  00caa48  addi 1, 1, 176
  00caa4c  blr

DrawOxygenMeter:   # 0xcaa88, 0x778 bytes
  00caa88  stdu 1, -272(1)
  00caa8c  mflr 0
  00caa90  std 0, 288(1)
  00caa94  stfd 21, 184(1)
  00caa98  stfd 22, 192(1)
  00caa9c  stfd 23, 200(1)
  00caaa0  stfd 24, 208(1)
  00caaa4  stfd 25, 216(1)
  00caaa8  stfd 26, 224(1)
  00caaac  stfd 27, 232(1)
  00caab0  stfd 28, 240(1)
  00caab4  stfd 29, 248(1)
  00caab8  stfd 30, 256(1)
  00caabc  stfd 31, 264(1)
  00caac0  std 31, 176(1)
  00caac4  lis 4, 144
  00caac8  std 30, 168(1)
  00caacc  ori 31, 3, 0
  00caad0  li 30, 0
  00caad4  ori 3, 30, 0
  00caad8  lwz 8, -23196(4)
  00caadc  lwz 4, 80(31)
  00caae0  lwz 5, 84(31)
  00caae4  lwz 6, 96(31)
  00caae8  lwz 7, 108(31)
  00caaec  lwz 9, 12(8)
  00caaf0  lbz 8, 17(8)
  00caaf4  cmpwi 9, 0
  00caaf8  std 29, 160(1)
  00caafc  std 28, 152(1)
  00cab00  std 27, 144(1)
  00cab04  std 26, 136(1)
  00cab08  cmpwi 1, 8, 5
  00cab0c  bf 2, 0xcab20
  00cab10  li 3, -80
  00cab14  bf 6, 0xcab28
  00cab18  li 3, -60
  00cab1c  b 0xcab28
  00cab20  bf 6, 0xcab28
  00cab24  li 3, 20
  00cab28  li 9, 129
  00cab2c  li 10, 20
  00cab30  stw 5, 116(1)
  00cab34  subc 8, 9, 8
  00cab38  subc 9, 10, 3
  00cab3c  cntlzw 8, 8
  00cab40  lis 11, 114
  00cab44  sldi 8, 8, 58
  00cab48  lis 10, 114
  00cab4c  sradi 8, 8, 63
  00cab50  and 8, 8, 9
  00cab54  clrlwi 9, 6, 31
  00cab58  addc 3, 3, 8
  00cab5c  cmpwi 9, 0
  00cab60  addc 3, 4, 3
  00cab64  lwz 4, 17200(11)
  00cab68  stw 4, 88(31)
  00cab6c  stw 3, 112(1)
  00cab70  lwz 8, 17204(10)
  00cab74  stw 8, 92(31)
  00cab78  bf 2, 0xcab94
  00cab7c  rlwinm 9, 6, 0, 30, 30
  00cab80  cmpwi 9, 0
  00cab84  bf 2, 0xcab94
  00cab88  srawi 8, 8, 1
  00cab8c  subc 5, 5, 8
  00cab90  stw 5, 116(1)
  00cab94  rlwinm 5, 6, 0, 29, 29
  00cab98  cmpwi 5, 0
  00cab9c  bf 2, 0xcabd0
  00caba0  rlwinm 5, 6, 0, 28, 28
  00caba4  li 6, 0
  00caba8  srawi 8, 4, 1
  00cabac  subc 5, 6, 5
  00cabb0  subc 6, 8, 4
  00cabb4  cntlzw 5, 5
  00cabb8  sldi 5, 5, 58
  00cabbc  sradi 5, 5, 63
  00cabc0  and 5, 5, 6
  00cabc4  addc 4, 4, 5
  00cabc8  subc 3, 3, 4
  00cabcc  stw 3, 112(1)
  00cabd0  extsw 6, 7
  00cabd4  ori 3, 31, 0
  00cabd8  addic 4, 1, 112
  00cabdc  addic 5, 1, 116
  00cabe0  li 7, 0
  00cabe4  bl 0xc8c08
  00cabe8  lis 3, 114
  00cabec  lhz 4, 72(31)
  00cabf0  lwz 5, 112(1)
  00cabf4  lis 6, 114
  00cabf8  lhz 7, 74(31)
  00cabfc  extsh 4, 4
  00cac00  lwz 8, 116(1)
  00cac04  addc 4, 5, 4
  00cac08  lwz 3, 17200(3)
  00cac0c  extsh 7, 7
  00cac10  lwz 6, 17204(6)
  00cac14  sldi 4, 4, 4
  00cac18  addc 5, 3, 3
  00cac1c  sldi 9, 3, 8
  00cac20  addc 5, 3, 5
  00cac24  addc 7, 8, 7
  00cac28  sldi 5, 5, 4
  00cac2c  sldi 8, 6, 7
  00cac30  subc 5, 9, 5
  00cac34  sldi 10, 6, 5
  00cac38  mulli 6, 6, 3744
  00cac3c  srawi 5, 5, 6
  00cac40  mulli 9, 3, 608
  00cac44  addze 3, 5
  00cac48  addc 5, 8, 10
  00cac4c  addc 3, 4, 3
  00cac50  srawi 4, 5, 8
  00cac54  sldi 7, 7, 4
  00cac58  addze 4, 4
  00cac5c  lis 8, -32664
  00cac60  srawi 5, 9, 6
  00cac64  ori 8, 8, 19503
  00cac68  extsw 3, 3
  00cac6c  addze 5, 5
  00cac70  srawi 6, 6, 8
  00cac74  clrldi 8, 8, 32
  00cac78  addze 6, 6
  00cac7c  addc 4, 7, 4
  00cac80  addc 5, 3, 5
  00cac84  extsw 4, 4
  00cac88  ori 7, 8, 0
  00cac8c  addc 6, 4, 6
  00cac90  extsw 5, 5
  00cac94  li 8, 1
  00cac98  extsw 6, 6
  00cac9c  bl 0xca72c
  00caca0  lwz 3, 116(31)
  00caca4  ori 7, 30, 0
  00caca8  addc 4, 3, 3
  00cacac  addc 3, 3, 4
  00cacb0  cmpwi 3, 10000
  00cacb4  bt 1, 0xcad30
  00cacb8  lis 4, 13
  00cacbc  lis 5, 114
  00cacc0  addi 4, 4, -21936
  00cacc4  lfs 1, 0(4)
  00cacc8  lfs 2, -3056(5)
  00caccc  fmuls 1, 2, 1
  00cacd0  lfs 3, 4(4)
  00cacd4  lis 5, 346
  00cacd8  lwz 5, -15568(5)
  00cacdc  addic 5, 5, -1
  00cace0  fctidz 1, 1
  00cace4  fcfid 1, 1
  00cace8  frsp 1, 1
  00cacec  fmuls 1, 1, 3
  00cacf0  fctiwz 1, 1
  00cacf4  stfd 1, 120(1)
  00cacf8  lfs 1, 8(4)
  00cacfc  lwz 4, 124(1)
  00cad00  fmuls 1, 2, 1
  00cad04  divw 6, 5, 4
  00cad08  fmuls 1, 1, 3
  00cad0c  mullw 4, 6, 4
  00cad10  fctiwz 1, 1
  00cad14  subc 4, 5, 4
  00cad18  extsw 4, 4
  00cad1c  stfd 1, 120(1)
  00cad20  lwz 5, 124(1)
  00cad24  extsw 5, 5
  00cad28  subc 7, 4, 5
  00cad2c  rldicl 7, 7, 1, 63
  00cad30  cmpwi 3, 10000
  00cad34  ori 29, 30, 0
  00cad38  bt 1, 0xcadb0
  00cad3c  lis 3, 13
  00cad40  lis 4, 114
  00cad44  addi 3, 3, -21936
  00cad48  lfs 1, 0(3)
  00cad4c  lfs 2, -3056(4)
  00cad50  fmuls 1, 2, 1
  00cad54  lfs 3, 4(3)
  00cad58  lis 4, 346
  00cad5c  lwz 4, -15568(4)
  00cad60  fctidz 1, 1
  00cad64  fcfid 1, 1
  00cad68  frsp 1, 1
  00cad6c  fmuls 1, 1, 3
  00cad70  fctiwz 1, 1
  00cad74  stfd 1, 120(1)
  00cad78  lfs 1, 8(3)
  00cad7c  lwz 3, 124(1)
  00cad80  fmuls 1, 2, 1
  00cad84  divw 5, 4, 3
  00cad88  fmuls 1, 1, 3
  00cad8c  mullw 3, 5, 3
  00cad90  fctiwz 1, 1
  00cad94  subc 3, 4, 3
  00cad98  extsw 3, 3
  00cad9c  stfd 1, 120(1)
  00cada0  lwz 4, 124(1)
  00cada4  extsw 4, 4
  00cada8  subc 29, 3, 4
  00cadac  rldicl 29, 29, 1, 63
  00cadb0  cmpwi 1, 29, 1
  00cadb4  cmpwi 7, 0
  00cadb8  crnand 2, 2, 6
  00cadbc  bt 2, 0xcadd0
  00cadc0  li 3, 11
  00cadc4  li 4, 0
  00cadc8  bl 0x816ec
  00cadcc  nop
  00cadd0  ori 3, 30, 0
  00cadd4  lis 28, 162
  00cadd8  lwz 4, 0(31)
  00caddc  lis 27, 0
  00cade0  ori 6, 3, 0
  00cade4  addic 28, 28, -16448
  00cade8  ori 27, 27, 65535
  00cadec  lwz 5, 28(28)
  00cadf0  lhzx 7, 5, 6
  00cadf4  cmpw 1, 7, 4
  00cadf8  cmpw 7, 27
  00cadfc  cror 2, 2, 6
  00cae00  bt 2, 0xcae10
  00cae04  addic 6, 6, 8
  00cae08  addic 3, 3, 1
  00cae0c  b 0xcadec
  00cae10  slwi 3, 3, 3
  00cae14  extsw 4, 3
  00cae18  lhzx 4, 5, 4
  00cae1c  cmpw 4, 27
  00cae20  bf 2, 0xcae2c
  00cae24  ori 5, 30, 0
  00cae28  b 0xcae4c
  00cae2c  addc 3, 5, 3
  00cae30  ori 5, 30, 0
  00cae34  clrldi 3, 3, 32
  00cae38  lhz 4, 2(3)
  00cae3c  cmpw 29, 4
  00cae40  bf 0, 0xcae4c
  00cae44  lhz 5, 4(3)
  00cae48  addc 5, 5, 29
  00cae4c  lhz 3, 72(31)
  00cae50  lis 29, 114
  00cae54  lhz 4, 74(31)
  00cae58  lis 26, 114
  00cae5c  lwz 6, 112(1)
  00cae60  extsh 3, 3
  00cae64  lwz 7, 116(1)
  00cae68  extsh 4, 4
  00cae6c  addc 3, 6, 3
  00cae70  addc 6, 7, 4
  00cae74  lwz 7, 17200(29)
  00cae78  extsw 4, 3
  00cae7c  extsw 8, 6
  00cae80  lwz 3, 17204(26)
  00cae84  extsw 6, 7
  00cae88  extsw 7, 3
  00cae8c  ori 3, 5, 0
  00cae90  ori 5, 8, 0
  00cae94  li 8, 128
  00cae98  bl 0xca464
  00cae9c  lwz 3, 17200(29)
  00caea0  lis 4, 13
  00caea4  extsw 3, 3
  00caea8  lis 7, 114
  00caeac  std 3, 120(1)
  00caeb0  addi 3, 4, -21936
  00caeb4  lwz 4, 17204(26)
  00caeb8  extsw 4, 4
  00caebc  lfs 1, 12(3)
  00caec0  lfs 2, 16(3)
  00caec4  lhz 5, 72(31)
  00caec8  lwz 6, 112(1)
  00caecc  lfd 3, 120(1)
  00caed0  extsh 5, 5
  00caed4  std 4, 120(1)
  00caed8  fcfid 3, 3
  00caedc  lfs 4, 20(3)
  00caee0  addc 5, 6, 5
  00caee4  lhz 4, 74(31)
  00caee8  lwz 6, 116(1)
  00caeec  lfd 5, 120(1)
  00caef0  extsh 4, 4
  00caef4  fcfid 5, 5
  00caef8  addc 4, 6, 4
  00caefc  extsw 5, 5
  00caf00  lis 6, 114
  00caf04  extsw 4, 4
  00caf08  frsp 3, 3
  00caf0c  std 5, 120(1)
  00caf10  lfs 6, 17208(6)
  00caf14  lwz 5, 116(31)
  00caf18  frsp 5, 5
  00caf1c  lfs 7, 17212(7)
  00caf20  lfd 9, 120(1)
  00caf24  subfic 5, 5, 10000
  00caf28  std 4, 120(1)
  00caf2c  fcfid 9, 9
  00caf30  lfs 10, 24(3)
  00caf34  fmuls 8, 3, 6
  00caf38  fsubs 6, 10, 6
  00caf3c  lfs 27, 28(3)
  00caf40  extsw 5, 5
  00caf44  fmuls 11, 5, 7
  00caf48  fsubs 7, 10, 7
  00caf4c  ori 4, 30, 0
  00caf50  fmuls 8, 8, 1
  00caf54  fmuls 11, 11, 1
  00caf58  fmuls 30, 8, 2
  00caf5c  frsp 2, 9
  00caf60  lfd 9, 120(1)
  00caf64  std 5, 120(1)
  00caf68  fcfid 9, 9
  00caf6c  fmuls 23, 11, 4
  00caf70  fmuls 4, 6, 1
  00caf74  fmuls 1, 7, 1
  00caf78  fadds 2, 8, 2
  00caf7c  lfs 8, 32(3)
  00caf80  frsp 9, 9
  00caf84  fmr 6, 8
  00caf88  fmuls 30, 30, 27
  00caf8c  fmuls 23, 23, 27
  00caf90  fmadds 31, 4, 3, 2
  00caf94  lfs 2, 36(3)
  00caf98  lfd 3, 120(1)
  00caf9c  fadds 4, 11, 9
  00cafa0  fcfid 3, 3
  00cafa4  lfs 28, 40(3)
  00cafa8  lwz 5, 28(28)
  00cafac  lwz 3, 0(31)
  00cafb0  ori 6, 5, 0
  00cafb4  fmuls 31, 31, 27
  00cafb8  fmadds 29, 1, 5, 4
  00cafbc  frsp 3, 3
  00cafc0  fmuls 29, 29, 27
  00cafc4  fmuls 1, 3, 6
  00cafc8  fmuls 1, 1, 2
  00cafcc  fnmsubs 28, 1, 28, 28
  00cafd0  lhz 7, 0(6)
  00cafd4  cmpw 1, 7, 3
  00cafd8  cmpw 7, 27
  00cafdc  cror 2, 2, 6
  00cafe0  bt 2, 0xcaff0
  00cafe4  addic 6, 6, 8
  00cafe8  addic 4, 4, 1
  00cafec  b 0xcafd0
  00caff0  slwi 4, 4, 3
  00caff4  extsw 3, 4
  00caff8  lhzx 3, 5, 3
  00caffc  cmpw 3, 27
  00cb000  bf 2, 0xcb00c
  00cb004  ori 29, 30, 0
  00cb008  b 0xcb02c
  00cb00c  addc 4, 5, 4
  00cb010  ori 29, 30, 0
  00cb014  clrldi 4, 4, 32
  00cb018  lhz 3, 2(4)
  00cb01c  cmpwi 3, 2
  00cb020  bf 1, 0xcb02c
  00cb024  lhz 29, 4(4)
  00cb028  addic 29, 29, 2
  00cb02c  lis 3, 114
  00cb030  lis 4, 114
  00cb034  lis 5, 114
  00cb038  lis 27, 162
  00cb03c  lis 26, 162
  00cb040  lfs 4, 17192(3)
  00cb044  ori 28, 30, 0
  00cb048  lfs 26, 17184(4)
  00cb04c  lis 3, 13
  00cb050  fmr 1, 4
  00cb054  lfs 3, 17188(5)
  00cb058  fmr 2, 26
  00cb05c  addi 3, 3, -21936
  00cb060  addic 27, 27, -15964
  00cb064  addic 26, 26, -15968
  00cb068  lfs 22, 44(3)
  00cb06c  lfs 21, 48(3)
  00cb070  fsubs 24, 1, 3
  00cb074  fsubs 25, 3, 2
  00cb078  cmpwi 28, 0
  00cb07c  cmpwi 6, 28, 10
  00cb080  bf 2, 0xcb0a4
  00cb084  fmuls 5, 2, 22
  00cb088  fnmsubs 31, 26, 27, 31
  00cb08c  fnmsubs 29, 26, 27, 29
  00cb090  fadds 28, 2, 28
  00cb094  fctiwz 5, 5
  00cb098  stfd 5, 120(1)
  00cb09c  lwz 30, 124(1)
  00cb0a0  b 0xcb0f8
  00cb0a4  cmpwi 1, 28, 30
  00cb0a8  bf 26, 0xcb0d0
  00cb0ac  fmuls 5, 3, 22
  00cb0b0  fsubs 6, 3, 2
  00cb0b4  fnmsubs 31, 25, 27, 31
  00cb0b8  fnmsubs 29, 25, 27, 29
  00cb0bc  fctiwz 5, 5
  00cb0c0  fadds 28, 28, 6
  00cb0c4  stfd 5, 120(1)
  00cb0c8  lwz 30, 124(1)
  00cb0cc  b 0xcb0f8
  00cb0d0  bf 6, 0xcb0f8
  00cb0d4  fsubs 5, 1, 3
  00cb0d8  fmr 1, 4
  00cb0dc  fnmsubs 31, 24, 27, 31
  00cb0e0  fnmsubs 29, 24, 27, 29
  00cb0e4  fadds 28, 28, 5
  00cb0e8  fmuls 6, 1, 22
  00cb0ec  fctiwz 5, 6
  00cb0f0  stfd 5, 120(1)
  00cb0f4  lwz 30, 124(1)
  00cb0f8  lfs 5, 0(27)
  00cb0fc  fcmpu 0, 5, 28
  00cb100  bt 1, 0xcb190
  00cb104  lfs 1, 4(26)
  00cb108  lfs 2, 0(26)
  00cb10c  fmuls 1, 1, 23
  00cb110  fmadds 2, 2, 30, 31
  00cb114  extsw 3, 30
  00cb118  li 8, 128
  00cb11c  fneg 1, 1
  00cb120  fctiwz 2, 2
  00cb124  fadds 1, 29, 1
  00cb128  stfd 2, 120(1)
  00cb12c  lwz 4, 124(1)
  00cb130  srawi 4, 4, 4
  00cb134  fctiwz 1, 1
  00cb138  stfd 1, 120(1)
  00cb13c  lwz 5, 124(1)
  00cb140  std 3, 120(1)
  00cb144  ori 3, 29, 0
  00cb148  srawi 5, 5, 4
  00cb14c  lfd 1, 120(1)
  00cb150  fcfid 1, 1
  00cb154  frsp 1, 1
  00cb158  fmuls 1, 1, 21
  00cb15c  fctiwz 1, 1
  00cb160  stfd 1, 120(1)
  00cb164  lwz 6, 124(1)
  00cb168  extsw 6, 6
  00cb16c  ori 7, 6, 0
  00cb170  bl 0xca0f4
  00cb174  lis 3, 114
  00cb178  lis 4, 114
  00cb17c  lis 5, 114
  00cb180  lfs 1, 17192(3)
  00cb184  lfs 2, 17184(4)
  00cb188  fmr 4, 1
  00cb18c  lfs 3, 17188(5)
  00cb190  addic 28, 28, 1
  00cb194  addic 27, 27, 16
  00cb198  cmpwi 28, 100
  00cb19c  addic 26, 26, 16
  00cb1a0  bt 0, 0xcb078
  00cb1a4  lwz 3, 88(31)
  00cb1a8  extsw 3, 3
  00cb1ac  ld 0, 288(1)
  00cb1b0  mtlr 0
  00cb1b4  lfd 21, 184(1)
  00cb1b8  lfd 22, 192(1)
  00cb1bc  lfd 23, 200(1)
  00cb1c0  lfd 24, 208(1)
  00cb1c4  lfd 25, 216(1)
  00cb1c8  lfd 26, 224(1)
  00cb1cc  lfd 27, 232(1)
  00cb1d0  lfd 28, 240(1)
  00cb1d4  lfd 29, 248(1)
  00cb1d8  lfd 30, 256(1)
  00cb1dc  lfd 31, 264(1)
  00cb1e0  ld 26, 136(1)
  00cb1e4  ld 27, 144(1)
  00cb1e8  ld 28, 152(1)
  00cb1ec  ld 29, 160(1)
  00cb1f0  ld 30, 168(1)
  00cb1f4  ld 31, 176(1)
  00cb1f8  addi 1, 1, 272
  00cb1fc  blr

Moby185Hud_Init:   # 0xcb228, 0x280 bytes
  00cb228  stdu 1, -256(1)
  00cb22c  mflr 0
  00cb230  std 0, 272(1)
  00cb234  stfd 22, 176(1)
  00cb238  stfd 23, 184(1)
  00cb23c  stfd 24, 192(1)
  00cb240  stfd 25, 200(1)
  00cb244  stfd 26, 208(1)
  00cb248  stfd 27, 216(1)
  00cb24c  stfd 28, 224(1)
  00cb250  stfd 29, 232(1)
  00cb254  stfd 30, 240(1)
  00cb258  stfd 31, 248(1)
  00cb25c  lis 4, 13
  00cb260  vspltisw 2, -1
  00cb264  std 31, 168(1)
  00cb268  lis 5, 114
  00cb26c  addi 31, 4, -19968
  00cb270  li 4, -3056
  00cb274  std 27, 136(1)
  00cb278  vslw 2, 2, 2
  00cb27c  li 27, 0
  00cb280  lvlx 3, 0, 31
  00cb284  lvlx 4, 4, 5
  00cb288  vspltw 3, 3, 0
  00cb28c  li 4, 4
  00cb290  li 5, 124
  00cb294  vmaddfp 2, 4, 3, 2
  00cb298  lvlx 3, 4, 31
  00cb29c  vspltw 3, 3, 0
  00cb2a0  vctsxs 2, 2, 0
  00cb2a4  vadduwm 2, 2, 3
  00cb2a8  vspltw 2, 2, 0
  00cb2ac  stvewx 2, 5, 3
  00cb2b0  sth 27, 72(3)
  00cb2b4  std 30, 160(1)
  00cb2b8  std 29, 152(1)
  00cb2bc  std 28, 144(1)
  00cb2c0  sth 27, 74(3)
  00cb2c4  bl 0xc8e10
  00cb2c8  lfs 24, 8(31)
  00cb2cc  lis 28, 162
  00cb2d0  lfs 25, 12(31)
  00cb2d4  lfs 26, 16(31)
  00cb2d8  lfs 27, 20(31)
  00cb2dc  addic 28, 28, -15968
  00cb2e0  lfs 28, 24(31)
  00cb2e4  lfs 29, 28(31)
  00cb2e8  lfs 30, 32(31)
  00cb2ec  addic 30, 28, 8
  00cb2f0  lfs 31, 36(31)
  00cb2f4  addic 29, 28, 4
  00cb2f8  addic 31, 28, 12
  00cb2fc  cmpwi 27, 10
  00cb300  cmpwi 1, 27, 20
  00cb304  bf 0, 0xcb314
  00cb308  lis 3, 114
  00cb30c  lfs 1, 17184(3)
  00cb310  b 0xcb32c
  00cb314  bf 4, 0xcb324
  00cb318  lis 3, 114
  00cb31c  lfs 1, 17188(3)
  00cb320  b 0xcb32c
  00cb324  lis 3, 114
  00cb328  lfs 1, 17192(3)
  00cb32c  lis 3, 114
  00cb330  fnmsubs 2, 1, 24, 25
  00cb334  fsubs 4, 1, 26
  00cb338  lwz 3, 17196(3)
  00cb33c  extsw 4, 3
  00cb340  fsubs 6, 1, 27
  00cb344  std 4, 112(1)
  00cb348  divw 4, 27, 3
  00cb34c  lfd 3, 112(1)
  00cb350  mullw 3, 4, 3
  00cb354  fcfid 3, 3
  00cb358  subc 3, 27, 3
  00cb35c  extsw 3, 3
  00cb360  std 3, 112(1)
  00cb364  frsp 3, 3
  00cb368  fdivs 3, 2, 3
  00cb36c  lfd 2, 112(1)
  00cb370  fcfid 5, 2
  00cb374  fsubs 2, 27, 1
  00cb378  fmr 1, 6
  00cb37c  frsp 5, 5
  00cb380  fmadds 23, 5, 3, 4
  00cb384  fadds 22, 23, 3
  00cb388  bl 0xfcbe8
  00cb38c  nop
  00cb390  stfs 1, 0(28)
  00cb394  fmr 1, 23
  00cb398  fmr 2, 22
  00cb39c  bl 0xfcbe8
  00cb3a0  nop
  00cb3a4  stfs 1, 0(29)
  00cb3a8  fmr 2, 29
  00cb3ac  fmr 1, 28
  00cb3b0  bl 0xfcbe8
  00cb3b4  nop
  00cb3b8  stfs 1, 0(30)
  00cb3bc  fmr 1, 30
  00cb3c0  fmr 2, 31
  00cb3c4  bl 0xfcbe8
  00cb3c8  nop
  00cb3cc  stfs 1, 0(31)
  00cb3d0  fmr 2, 29
  00cb3d4  fmr 1, 28
  00cb3d8  bl 0xfcbe8
  00cb3dc  nop
  00cb3e0  lfs 2, 0(30)
  00cb3e4  fadds 3, 2, 1
  00cb3e8  fmr 1, 30
  00cb3ec  fmr 2, 31
  00cb3f0  stfs 3, 0(30)
  00cb3f4  bl 0xfcbe8
  00cb3f8  nop
  00cb3fc  lfs 2, 0(31)
  00cb400  fadds 3, 2, 1
  00cb404  fmr 1, 28
  00cb408  fmr 2, 29
  00cb40c  stfs 3, 0(31)
  00cb410  bl 0xfcbe8
  00cb414  nop
  00cb418  lfs 2, 0(30)
  00cb41c  fadds 3, 2, 1
  00cb420  fmr 1, 30
  00cb424  fmr 2, 31
  00cb428  stfs 3, 0(30)
  00cb42c  bl 0xfcbe8
  00cb430  nop
  00cb434  lfs 2, 0(31)
  00cb438  addic 27, 27, 1
  00cb43c  addic 28, 28, 16
  00cb440  fadds 1, 2, 1
  00cb444  cmpwi 27, 100
  00cb448  addic 29, 29, 16
  00cb44c  addic 30, 30, 16
  00cb450  stfs 1, 0(31)
  00cb454  addic 31, 31, 16
  00cb458  bt 0, 0xcb2fc
  00cb45c  ld 0, 272(1)
  00cb460  mtlr 0
  00cb464  lfd 22, 176(1)
  00cb468  lfd 23, 184(1)
  00cb46c  lfd 24, 192(1)
  00cb470  lfd 25, 200(1)
  00cb474  lfd 26, 208(1)
  00cb478  lfd 27, 216(1)
  00cb47c  lfd 28, 224(1)
  00cb480  lfd 29, 232(1)
  00cb484  lfd 30, 240(1)
  00cb488  lfd 31, 248(1)
  00cb48c  ld 27, 136(1)
  00cb490  ld 28, 144(1)
  00cb494  ld 29, 152(1)
  00cb498  ld 30, 160(1)
  00cb49c  ld 31, 168(1)
  00cb4a0  addi 1, 1, 256
  00cb4a4  blr

Moby185Hud_Update:   # 0xcb4b0, 0x144 bytes
  00cb4b0  stdu 1, -112(1)
  00cb4b4  mflr 0
  00cb4b8  std 0, 128(1)
  00cb4bc  bl 0xc96b0
  00cb4c0  lis 3, 346
  00cb4c4  lis 4, 162
  00cb4c8  addic 4, 4, -15968
  00cb4cc  lwz 3, -15568(3)
  00cb4d0  srawi 5, 3, 1
  00cb4d4  addze 5, 5
  00cb4d8  sldi 5, 5, 1
  00cb4dc  subc 3, 3, 5
  00cb4e0  sldi 5, 3, 4
  00cb4e4  cmpwi 3, 100
  00cb4e8  addc 4, 4, 5
  00cb4ec  clrldi 4, 4, 32
  00cb4f0  bf 0, 0xcb5e4
  00cb4f4  lis 5, 13
  00cb4f8  lis 6, 114
  00cb4fc  lis 7, 114
  00cb500  addi 5, 5, -19288
  00cb504  lis 8, 114
  00cb508  lfs 3, 17184(6)
  00cb50c  lfs 2, 17188(7)
  00cb510  lfs 5, 0(5)
  00cb514  lfs 4, 4(5)
  00cb518  lfs 1, 17192(8)
  00cb51c  cmpwi 3, 10
  00cb520  cmpwi 1, 3, 30
  00cb524  bf 0, 0xcb530
  00cb528  fmr 9, 3
  00cb52c  b 0xcb53c
  00cb530  fmr 9, 1
  00cb534  bf 4, 0xcb53c
  00cb538  fmr 9, 2
  00cb53c  lfs 10, 8(4)
  00cb540  lfs 11, 0(4)
  00cb544  fsubs 13, 9, 5
  00cb548  lfs 6, 12(4)
  00cb54c  fsubs 9, 9, 4
  00cb550  fadds 11, 11, 10
  00cb554  lfs 7, 4(4)
  00cb558  fadds 7, 7, 6
  00cb55c  fneg 12, 13
  00cb560  fneg 8, 9
  00cb564  fcmpu 0, 11, 13
  00cb568  stfs 11, 0(4)
  00cb56c  stfs 7, 4(4)
  00cb570  cror 6, 1, 2
  00cb574  bt 6, 0xcb588
  00cb578  fneg 10, 10
  00cb57c  stfs 13, 0(4)
  00cb580  fmr 11, 13
  00cb584  stfs 10, 8(4)
  00cb588  fcmpu 0, 11, 12
  00cb58c  cror 6, 0, 2
  00cb590  bt 6, 0xcb5a0
  00cb594  fneg 10, 10
  00cb598  stfs 12, 0(4)
  00cb59c  stfs 10, 8(4)
  00cb5a0  fcmpu 0, 7, 9
  00cb5a4  cror 6, 1, 2
  00cb5a8  bt 6, 0xcb5bc
  00cb5ac  fneg 6, 6
  00cb5b0  stfs 9, 4(4)
  00cb5b4  fmr 7, 9
  00cb5b8  stfs 6, 12(4)
  00cb5bc  fcmpu 0, 7, 8
  00cb5c0  cror 6, 0, 2
  00cb5c4  bt 6, 0xcb5d4
  00cb5c8  fneg 6, 6
  00cb5cc  stfs 8, 4(4)
  00cb5d0  stfs 6, 12(4)
  00cb5d4  addic 3, 3, 2
  00cb5d8  addic 4, 4, 32
  00cb5dc  cmpwi 3, 100
  00cb5e0  bt 0, 0xcb51c
  00cb5e4  ld 0, 128(1)
  00cb5e8  mtlr 0
  00cb5ec  addi 1, 1, 112
  00cb5f0  blr

Draw_Moby185Meter:   # 0xcb620, 0x4cc bytes
  00cb620  stdu 1, -256(1)
  00cb624  mflr 0
  00cb628  std 0, 272(1)
  00cb62c  stfd 23, 184(1)
  00cb630  stfd 24, 192(1)
  00cb634  stfd 25, 200(1)
  00cb638  stfd 26, 208(1)
  00cb63c  stfd 27, 216(1)
  00cb640  stfd 28, 224(1)
  00cb644  stfd 29, 232(1)
  00cb648  stfd 30, 240(1)
  00cb64c  stfd 31, 248(1)
  00cb650  std 31, 176(1)
  00cb654  lis 4, 144
  00cb658  std 28, 152(1)
  00cb65c  ori 31, 3, 0
  00cb660  li 28, 0
  00cb664  ori 3, 28, 0
  00cb668  lwz 7, -23196(4)
  00cb66c  lwz 4, 80(31)
  00cb670  lwz 5, 84(31)
  00cb674  std 30, 168(1)
  00cb678  lwz 6, 96(31)
  00cb67c  lwz 30, 108(31)
  00cb680  lwz 8, 12(7)
  00cb684  lbz 7, 17(7)
  00cb688  cmpwi 8, 0
  00cb68c  std 29, 160(1)
  00cb690  std 27, 144(1)
  00cb694  std 26, 136(1)
  00cb698  cmpwi 1, 7, 5
  00cb69c  bf 2, 0xcb6b0
  00cb6a0  li 3, -80
  00cb6a4  bf 6, 0xcb6b8
  00cb6a8  li 3, -60
  00cb6ac  b 0xcb6b8
  00cb6b0  bf 6, 0xcb6b8
  00cb6b4  li 3, 20
  00cb6b8  lis 7, 114
  00cb6bc  addc 3, 4, 3
  00cb6c0  clrlwi 4, 6, 31
  00cb6c4  lis 8, 114
  00cb6c8  cmpwi 4, 0
  00cb6cc  lwz 4, 17200(7)
  00cb6d0  stw 3, 112(1)
  00cb6d4  stw 4, 88(31)
  00cb6d8  stw 5, 116(1)
  00cb6dc  lwz 7, 17204(8)
  00cb6e0  stw 7, 92(31)
  00cb6e4  bf 2, 0xcb700
  00cb6e8  rlwinm 8, 6, 0, 30, 30
  00cb6ec  cmpwi 8, 0
  00cb6f0  bf 2, 0xcb700
  00cb6f4  srawi 7, 7, 1
  00cb6f8  subc 5, 5, 7
  00cb6fc  stw 5, 116(1)
  00cb700  rlwinm 5, 6, 0, 29, 29
  00cb704  cmpwi 5, 0
  00cb708  bf 2, 0xcb73c
  00cb70c  rlwinm 5, 6, 0, 28, 28
  00cb710  li 6, 0
  00cb714  srawi 7, 4, 1
  00cb718  subc 5, 6, 5
  00cb71c  subc 6, 7, 4
  00cb720  cntlzw 5, 5
  00cb724  sldi 5, 5, 58
  00cb728  sradi 5, 5, 63
  00cb72c  and 5, 5, 6
  00cb730  addc 4, 4, 5
  00cb734  subc 3, 3, 4
  00cb738  stw 3, 112(1)
  00cb73c  extsw 6, 30
  00cb740  addic 4, 1, 112
  00cb744  addic 5, 1, 116
  00cb748  ori 3, 31, 0
  00cb74c  li 7, 0
  00cb750  bl 0xc8c08
  00cb754  lis 30, 162
  00cb758  lwz 4, 0(31)
  00cb75c  lis 10, 114
  00cb760  addic 30, 30, -16448
  00cb764  lhz 6, 72(31)
  00cb768  lwz 7, 112(1)
  00cb76c  lis 11, 114
  00cb770  lhz 8, 74(31)
  00cb774  lis 29, 0
  00cb778  ori 3, 28, 0
  00cb77c  ori 29, 29, 65535
  00cb780  lwz 5, 28(30)
  00cb784  lwz 9, 116(1)
  00cb788  lwz 10, 17200(10)
  00cb78c  ori 12, 5, 0
  00cb790  lwz 11, 17204(11)
  00cb794  lhz 27, 0(12)
  00cb798  cmpw 1, 27, 4
  00cb79c  cmpw 27, 29
  00cb7a0  cror 2, 2, 6
  00cb7a4  bt 2, 0xcb7b4
  00cb7a8  addic 12, 12, 8
  00cb7ac  addic 3, 3, 1
  00cb7b0  b 0xcb794
  00cb7b4  slwi 3, 3, 3
  00cb7b8  extsw 4, 3
  00cb7bc  lhzx 4, 5, 4
  00cb7c0  cmpw 4, 29
  00cb7c4  bf 2, 0xcb7d0
  00cb7c8  ori 5, 28, 0
  00cb7cc  b 0xcb7ec
  00cb7d0  addc 3, 5, 3
  00cb7d4  ori 5, 28, 0
  00cb7d8  clrldi 3, 3, 32
  00cb7dc  lhz 4, 2(3)
  00cb7e0  cmpwi 4, 0
  00cb7e4  bf 1, 0xcb7ec
  00cb7e8  lhz 5, 4(3)
  00cb7ec  extsh 3, 6
  00cb7f0  extsh 4, 8
  00cb7f4  addc 8, 7, 3
  00cb7f8  addc 9, 9, 4
  00cb7fc  ori 3, 5, 0
  00cb800  extsw 4, 8
  00cb804  extsw 6, 10
  00cb808  extsw 7, 11
  00cb80c  li 8, 128
  00cb810  extsw 5, 9
  00cb814  bl 0xca464
  00cb818  lis 3, 114
  00cb81c  lis 4, 13
  00cb820  addi 4, 4, -18956
  00cb824  lwz 3, 17200(3)
  00cb828  lis 7, 114
  00cb82c  extsw 3, 3
  00cb830  std 3, 120(1)
  00cb834  lis 3, 114
  00cb838  lwz 3, 17204(3)
  00cb83c  lfs 1, 0(4)
  00cb840  lfs 2, 4(4)
  00cb844  lhz 5, 72(31)
  00cb848  extsw 3, 3
  00cb84c  lwz 6, 112(1)
  00cb850  lfd 3, 120(1)
  00cb854  extsh 5, 5
  00cb858  fcfid 3, 3
  00cb85c  std 3, 120(1)
  00cb860  addc 5, 6, 5
  00cb864  lfs 4, 8(4)
  00cb868  lhz 3, 74(31)
  00cb86c  lwz 6, 116(1)
  00cb870  extsw 5, 5
  00cb874  extsh 3, 3
  00cb878  lwz 8, 116(31)
  00cb87c  lfd 5, 120(1)
  00cb880  addc 3, 6, 3
  00cb884  lis 6, 114
  00cb888  std 5, 120(1)
  00cb88c  fcfid 5, 5
  00cb890  extsw 3, 3
  00cb894  frsp 3, 3
  00cb898  subfic 8, 8, 10000
  00cb89c  lfs 6, 17208(6)
  00cb8a0  extsw 5, 8
  00cb8a4  lfs 7, 17212(7)
  00cb8a8  lfd 9, 120(1)
  00cb8ac  std 3, 120(1)
  00cb8b0  fcfid 9, 9
  00cb8b4  lfs 10, 12(4)
  00cb8b8  frsp 5, 5
  00cb8bc  fmuls 8, 3, 6
  00cb8c0  lfs 27, 16(4)
  00cb8c4  fsubs 6, 10, 6
  00cb8c8  fmuls 11, 5, 7
  00cb8cc  fmuls 8, 8, 1
  00cb8d0  fmuls 6, 6, 1
  00cb8d4  fsubs 7, 10, 7
  00cb8d8  fmuls 11, 11, 1
  00cb8dc  fmuls 30, 8, 2
  00cb8e0  frsp 2, 9
  00cb8e4  lfd 9, 120(1)
  00cb8e8  fmuls 1, 7, 1
  00cb8ec  std 5, 120(1)
  00cb8f0  fcfid 9, 9
  00cb8f4  fmuls 25, 11, 4
  00cb8f8  lfs 4, 20(4)
  00cb8fc  fadds 2, 8, 2
  00cb900  fmuls 30, 30, 27
  00cb904  frsp 9, 9
  00cb908  fmuls 25, 25, 27
  00cb90c  fmadds 31, 6, 3, 2
  00cb910  lfs 2, 24(4)
  00cb914  lfd 3, 120(1)
  00cb918  fadds 6, 11, 9
  00cb91c  fcfid 3, 3
  00cb920  lfs 28, 28(4)
  00cb924  lwz 5, 28(30)
  00cb928  ori 4, 28, 0
  00cb92c  lwz 3, 0(31)
  00cb930  ori 6, 5, 0
  00cb934  fmuls 31, 31, 27
  00cb938  fmadds 29, 1, 5, 6
  00cb93c  frsp 1, 3
  00cb940  fmuls 29, 29, 27
  00cb944  fmuls 1, 1, 4
  00cb948  fmuls 1, 1, 2
  00cb94c  fnmsubs 28, 1, 28, 28
  00cb950  lhz 7, 0(6)
  00cb954  cmpw 1, 7, 3
  00cb958  cmpw 7, 29
  00cb95c  cror 2, 2, 6
  00cb960  bt 2, 0xcb970
  00cb964  addic 6, 6, 8
  00cb968  addic 4, 4, 1
  00cb96c  b 0xcb950
  00cb970  slwi 4, 4, 3
  00cb974  extsw 3, 4
  00cb978  lhzx 3, 5, 3
  00cb97c  cmpw 3, 29
  00cb980  bf 2, 0xcb98c
  00cb984  ori 30, 28, 0
  00cb988  b 0xcb9ac
  00cb98c  addc 4, 5, 4
  00cb990  ori 30, 28, 0
  00cb994  clrldi 4, 4, 32
  00cb998  lhz 3, 2(4)
  00cb99c  cmpwi 3, 1
  00cb9a0  bf 1, 0xcb9ac
  00cb9a4  lhz 30, 4(4)
  00cb9a8  addic 30, 30, 1
  00cb9ac  lis 4, 13
  00cb9b0  lis 3, 114
  00cb9b4  addi 4, 4, -18956
  00cb9b8  lis 27, 162
  00cb9bc  lis 26, 162
  00cb9c0  ori 29, 28, 0
  00cb9c4  lfs 26, 17184(3)
  00cb9c8  addic 27, 27, -15964
  00cb9cc  lfs 24, 32(4)
  00cb9d0  addic 26, 26, -15968
  00cb9d4  fmr 1, 26
  00cb9d8  lfs 23, 36(4)
  00cb9dc  cmpwi 28, 0
  00cb9e0  bf 2, 0xcba00
  00cb9e4  fmuls 2, 1, 24
  00cb9e8  fnmsubs 31, 26, 27, 31
  00cb9ec  fnmsubs 29, 26, 27, 29
  00cb9f0  fadds 28, 1, 28
  00cb9f4  fctiwz 2, 2
  00cb9f8  stfd 2, 120(1)
  00cb9fc  lwz 29, 124(1)
  00cba00  lfs 2, 0(27)
  00cba04  fcmpu 0, 2, 28
  00cba08  bt 1, 0xcba84
  00cba0c  lfs 1, 4(26)
  00cba10  extsw 3, 29
  00cba14  lfs 2, 0(26)
  00cba18  fmuls 1, 1, 25
  00cba1c  fmadds 2, 2, 30, 31
  00cba20  li 8, 128
  00cba24  fneg 1, 1
  00cba28  fctiwz 2, 2
  00cba2c  fadds 1, 29, 1
  00cba30  stfd 2, 120(1)
  00cba34  lwz 4, 124(1)
  00cba38  srawi 4, 4, 4
  00cba3c  fctiwz 1, 1
  00cba40  stfd 1, 120(1)
  00cba44  lwz 5, 124(1)
  00cba48  std 3, 120(1)
  00cba4c  ori 3, 30, 0
  00cba50  srawi 5, 5, 4
  00cba54  lfd 1, 120(1)
  00cba58  fcfid 1, 1
  00cba5c  frsp 1, 1
  00cba60  fmuls 1, 1, 23
  00cba64  fctiwz 1, 1
  00cba68  stfd 1, 120(1)
  00cba6c  lwz 6, 124(1)
  00cba70  extsw 6, 6
  00cba74  ori 7, 6, 0
  00cba78  bl 0xca0f4
  00cba7c  lis 3, 114
  00cba80  lfs 1, 17184(3)
  00cba84  addic 28, 28, 1
  00cba88  addic 27, 27, 16
  00cba8c  cmpwi 28, 100
  00cba90  addic 26, 26, 16
  00cba94  bt 0, 0xcb9dc
  00cba98  lwz 3, 88(31)
  00cba9c  extsw 3, 3
  00cbaa0  ld 0, 272(1)
  00cbaa4  mtlr 0
  00cbaa8  lfd 23, 184(1)
  00cbaac  lfd 24, 192(1)
  00cbab0  lfd 25, 200(1)
  00cbab4  lfd 26, 208(1)
  00cbab8  lfd 27, 216(1)
  00cbabc  lfd 28, 224(1)
  00cbac0  lfd 29, 232(1)
  00cbac4  lfd 30, 240(1)
  00cbac8  lfd 31, 248(1)
  00cbacc  ld 26, 136(1)
  00cbad0  ld 27, 144(1)
  00cbad4  ld 28, 152(1)
  00cbad8  ld 29, 160(1)
  00cbadc  ld 30, 168(1)
  00cbae0  ld 31, 176(1)
  00cbae4  addi 1, 1, 256
  00cbae8  blr

PromptHud_Init:   # 0xcbaf8, 0x80 bytes
  00cbaf8  stdu 1, -112(1)
  00cbafc  mflr 0
  00cbb00  std 0, 128(1)
  00cbb04  lis 4, 13
  00cbb08  vspltisw 2, -1
  00cbb0c  lis 5, 114
  00cbb10  addi 4, 4, -17684
  00cbb14  li 6, -3056
  00cbb18  vslw 2, 2, 2
  00cbb1c  li 7, 32
  00cbb20  lvlx 3, 0, 4
  00cbb24  lvlx 4, 6, 5
  00cbb28  vspltw 3, 3, 0
  00cbb2c  li 5, 4
  00cbb30  li 6, 124
  00cbb34  vmaddfp 2, 4, 3, 2
  00cbb38  lvlx 3, 5, 4
  00cbb3c  li 4, 0
  00cbb40  vspltw 3, 3, 0
  00cbb44  vctsxs 2, 2, 0
  00cbb48  vadduwm 2, 2, 3
  00cbb4c  vspltw 2, 2, 0
  00cbb50  stvewx 2, 6, 3
  00cbb54  stw 7, 88(3)
  00cbb58  stw 7, 92(3)
  00cbb5c  sth 4, 72(3)
  00cbb60  sth 4, 74(3)
  00cbb64  bl 0xc8e10
  00cbb68  ld 0, 128(1)
  00cbb6c  mtlr 0
  00cbb70  addi 1, 1, 112
  00cbb74  blr

PromptHud_Update:   # 0xcbb78, 0x20 bytes
  00cbb78  stdu 1, -112(1)
  00cbb7c  mflr 0
  00cbb80  std 0, 128(1)
  00cbb84  bl 0xc9390
  00cbb88  ld 0, 128(1)
  00cbb8c  mtlr 0
  00cbb90  addi 1, 1, 112
  00cbb94  blr

Hud_DrawTexQuad:   # 0xcbb98, 0x2c8 bytes
  00cbb98  stdu 1, -176(1)
  00cbb9c  mflr 0
  00cbba0  std 0, 192(1)
  00cbba4  lis 9, 162
  00cbba8  lis 10, 161
  00cbbac  addic 9, 9, -16448
  00cbbb0  sldi 3, 3, 2
  00cbbb4  addic 10, 10, 24396
  00cbbb8  std 31, 168(1)
  00cbbbc  extsw 3, 3
  00cbbc0  ori 31, 8, 0
  00cbbc4  lwz 9, 32(9)
  00cbbc8  std 26, 128(1)
  00cbbcc  lis 11, 144
  00cbbd0  ori 26, 4, 0
  00cbbd4  std 28, 144(1)
  00cbbd8  std 27, 136(1)
  00cbbdc  lwz 8, 28(10)
  00cbbe0  addic 28, 11, -23532
  00cbbe4  std 29, 152(1)
  00cbbe8  ori 27, 6, 0
  00cbbec  lwzx 3, 9, 3
  00cbbf0  std 30, 160(1)
  00cbbf4  ori 29, 5, 0
  00cbbf8  ori 30, 7, 0
  00cbbfc  sldi 4, 3, 5
  00cbc00  sldi 3, 3, 2
  00cbc04  lwz 5, 40(28)
  00cbc08  addc 3, 4, 3
  00cbc0c  li 4, 0
  00cbc10  addc 6, 8, 3
  00cbc14  std 25, 120(1)
  00cbc18  ori 3, 5, 0
  00cbc1c  clrldi 25, 6, 32
  00cbc20  ori 5, 25, 0
  00cbc24  bl 0x4d6d00
  00cbc28  nop
  00cbc2c  lwz 3, 40(28)
  00cbc30  bl 0x4d6948
  00cbc34  nop
  00cbc38  lwz 3, 40(28)
  00cbc3c  lis 4, 4
  00cbc40  lwz 5, 24(25)
  00cbc44  slwi 6, 31, 24
  00cbc48  ori 4, 4, 6472
  00cbc4c  lis 7, 0
  00cbc50  lwz 8, 8(3)
  00cbc54  oris 6, 6, 128
  00cbc58  ori 7, 7, 32896
  00cbc5c  or 6, 6, 7
  00cbc60  stw 4, 0(8)
  00cbc64  lwz 4, 8(3)
  00cbc68  lis 7, 16396
  00cbc6c  lis 8, 4
  00cbc70  lis 9, 4
  00cbc74  stw 6, 4(4)
  00cbc78  lwz 4, 8(3)
  00cbc7c  ori 6, 7, 5908
  00cbc80  addic 4, 4, 8
  00cbc84  rotlwi 10, 5, 16
  00cbc88  stw 4, 8(3)
  00cbc8c  lwz 3, 40(28)
  00cbc90  li 4, 0
  00cbc94  srwi 12, 5, 16
  00cbc98  lwz 7, 8(3)
  00cbc9c  stw 6, 0(7)
  00cbca0  lwz 6, 8(3)
  00cbca4  ori 7, 8, 6152
  00cbca8  li 8, 8
  00cbcac  stw 4, 4(6)
  00cbcb0  lwz 6, 8(3)
  00cbcb4  stw 4, 8(6)
  00cbcb8  lwz 6, 8(3)
  00cbcbc  stw 4, 12(6)
  00cbcc0  lwz 6, 8(3)
  00cbcc4  stw 7, 16(6)
  00cbcc8  lwz 6, 8(3)
  00cbccc  stw 8, 20(6)
  00cbcd0  lwz 6, 8(3)
  00cbcd4  ori 8, 9, 6404
  00cbcd8  addic 6, 6, 24
  00cbcdc  lis 9, 4
  00cbce0  stw 6, 8(3)
  00cbce4  lwz 3, 40(28)
  00cbce8  ori 9, 9, 6400
  00cbcec  lwz 6, 8(3)
  00cbcf0  slwi 5, 5, 16
  00cbcf4  stw 8, 0(6)
  00cbcf8  lwz 6, 8(3)
  00cbcfc  stw 10, 4(6)
  00cbd00  lwz 6, 8(3)
  00cbd04  clrlwi 10, 26, 16
  00cbd08  addic 6, 6, 8
  00cbd0c  stw 6, 8(3)
  00cbd10  lwz 3, 40(28)
  00cbd14  ori 6, 10, 0
  00cbd18  rlwimi 6, 29, 16, 0, 15
  00cbd1c  lwz 11, 8(3)
  00cbd20  stw 9, 0(11)
  00cbd24  lwz 11, 8(3)
  00cbd28  stw 6, 4(11)
  00cbd2c  lwz 6, 8(3)
  00cbd30  addic 6, 6, 8
  00cbd34  stw 6, 8(3)
  00cbd38  lwz 3, 40(28)
  00cbd3c  addc 6, 30, 29
  00cbd40  rlwimi 10, 6, 16, 0, 15
  00cbd44  lwz 11, 8(3)
  00cbd48  stw 8, 0(11)
  00cbd4c  lwz 11, 8(3)
  00cbd50  stw 12, 4(11)
  00cbd54  lwz 11, 8(3)
  00cbd58  addic 11, 11, 8
  00cbd5c  stw 11, 8(3)
  00cbd60  lwz 3, 40(28)
  00cbd64  lwz 11, 8(3)
  00cbd68  stw 9, 0(11)
  00cbd6c  lwz 11, 8(3)
  00cbd70  stw 10, 4(11)
  00cbd74  lwz 10, 8(3)
  00cbd78  addc 11, 27, 26
  00cbd7c  addic 10, 10, 8
  00cbd80  clrlwi 11, 11, 16
  00cbd84  stw 10, 8(3)
  00cbd88  lwz 3, 40(28)
  00cbd8c  lwz 10, 8(3)
  00cbd90  stw 8, 0(10)
  00cbd94  lwz 10, 8(3)
  00cbd98  stw 4, 4(10)
  00cbd9c  lwz 10, 8(3)
  00cbda0  addic 10, 10, 8
  00cbda4  stw 10, 8(3)
  00cbda8  lwz 3, 40(28)
  00cbdac  ori 10, 11, 0
  00cbdb0  rlwimi 10, 6, 16, 0, 15
  00cbdb4  lwz 6, 8(3)
  00cbdb8  rlwimi 11, 29, 16, 0, 15
  00cbdbc  stw 9, 0(6)
  00cbdc0  lwz 6, 8(3)
  00cbdc4  stw 10, 4(6)
  00cbdc8  lwz 6, 8(3)
  00cbdcc  addic 6, 6, 8
  00cbdd0  stw 6, 8(3)
  00cbdd4  lwz 3, 40(28)
  00cbdd8  lwz 6, 8(3)
  00cbddc  stw 8, 0(6)
  00cbde0  lwz 6, 8(3)
  00cbde4  stw 5, 4(6)
  00cbde8  lwz 5, 8(3)
  00cbdec  addic 5, 5, 8
  00cbdf0  stw 5, 8(3)
  00cbdf4  lwz 3, 40(28)
  00cbdf8  lwz 5, 8(3)
  00cbdfc  stw 9, 0(5)
  00cbe00  lwz 5, 8(3)
  00cbe04  stw 11, 4(5)
  00cbe08  lwz 5, 8(3)
  00cbe0c  addic 5, 5, 8
  00cbe10  stw 5, 8(3)
  00cbe14  lwz 3, 40(28)
  00cbe18  lwz 5, 8(3)
  00cbe1c  stw 7, 0(5)
  00cbe20  lwz 5, 8(3)
  00cbe24  stw 4, 4(5)
  00cbe28  lwz 4, 8(3)
  00cbe2c  addic 4, 4, 8
  00cbe30  stw 4, 8(3)
  00cbe34  ld 0, 192(1)
  00cbe38  mtlr 0
  00cbe3c  ld 25, 120(1)
  00cbe40  ld 26, 128(1)
  00cbe44  ld 27, 136(1)
  00cbe48  ld 28, 144(1)
  00cbe4c  ld 29, 152(1)
  00cbe50  ld 30, 160(1)
  00cbe54  ld 31, 168(1)
  00cbe58  addi 1, 1, 176
  00cbe5c  blr

Hud_DrawTexHeaderQuad:   # 0xcbe60, 0x290 bytes
  00cbe60  stdu 1, -176(1)
  00cbe64  mflr 0
  00cbe68  std 0, 192(1)
  00cbe6c  std 26, 128(1)
  00cbe70  lis 9, 144
  00cbe74  std 30, 160(1)
  00cbe78  ori 26, 3, 0
  00cbe7c  std 28, 144(1)
  00cbe80  std 25, 120(1)
  00cbe84  addic 30, 9, -23532
  00cbe88  ori 28, 5, 0
  00cbe8c  std 31, 168(1)
  00cbe90  ori 25, 4, 0
  00cbe94  std 29, 152(1)
  00cbe98  ori 31, 8, 0
  00cbe9c  ori 29, 7, 0
  00cbea0  std 27, 136(1)
  00cbea4  lwz 3, 40(30)
  00cbea8  ori 27, 6, 0
  00cbeac  li 4, 0
  00cbeb0  ori 5, 26, 0
  00cbeb4  bl 0x4d6d00
  00cbeb8  nop
  00cbebc  lwz 3, 40(30)
  00cbec0  bl 0x4d6948
  00cbec4  nop
  00cbec8  lwz 3, 40(30)
  00cbecc  lis 4, 4
  00cbed0  lwz 6, 24(26)
  00cbed4  slwi 5, 31, 24
  00cbed8  ori 4, 4, 6472
  00cbedc  lis 8, 0
  00cbee0  lwz 7, 8(3)
  00cbee4  oris 5, 5, 128
  00cbee8  ori 8, 8, 32896
  00cbeec  stw 4, 0(7)
  00cbef0  or 4, 5, 8
  00cbef4  lwz 5, 8(3)
  00cbef8  lis 7, 16396
  00cbefc  lis 9, 4
  00cbf00  clrlwi 10, 25, 16
  00cbf04  stw 4, 4(5)
  00cbf08  lwz 4, 8(3)
  00cbf0c  ori 5, 7, 5908
  00cbf10  addic 4, 4, 8
  00cbf14  lis 7, 4
  00cbf18  ori 9, 9, 6404
  00cbf1c  stw 4, 8(3)
  00cbf20  lwz 3, 40(30)
  00cbf24  li 4, 0
  00cbf28  ori 7, 7, 6152
  00cbf2c  lwz 8, 8(3)
  00cbf30  slwi 12, 6, 16
  00cbf34  stw 5, 0(8)
  00cbf38  lwz 5, 8(3)
  00cbf3c  li 8, 8
  00cbf40  stw 4, 4(5)
  00cbf44  lwz 5, 8(3)
  00cbf48  stw 4, 8(5)
  00cbf4c  lwz 5, 8(3)
  00cbf50  stw 4, 12(5)
  00cbf54  lwz 5, 8(3)
  00cbf58  stw 7, 16(5)
  00cbf5c  lwz 5, 8(3)
  00cbf60  stw 8, 20(5)
  00cbf64  lwz 5, 8(3)
  00cbf68  lis 8, 4
  00cbf6c  addic 5, 5, 24
  00cbf70  ori 8, 8, 6400
  00cbf74  stw 5, 8(3)
  00cbf78  lwz 3, 40(30)
  00cbf7c  lwz 5, 8(3)
  00cbf80  stw 9, 0(5)
  00cbf84  lwz 5, 8(3)
  00cbf88  stw 4, 4(5)
  00cbf8c  lwz 5, 8(3)
  00cbf90  addic 5, 5, 8
  00cbf94  stw 5, 8(3)
  00cbf98  lwz 3, 40(30)
  00cbf9c  ori 5, 10, 0
  00cbfa0  rlwimi 5, 28, 16, 0, 15
  00cbfa4  lwz 11, 8(3)
  00cbfa8  stw 8, 0(11)
  00cbfac  lwz 11, 8(3)
  00cbfb0  stw 5, 4(11)
  00cbfb4  lwz 5, 8(3)
  00cbfb8  addic 5, 5, 8
  00cbfbc  stw 5, 8(3)
  00cbfc0  lwz 3, 40(30)
  00cbfc4  addc 5, 29, 28
  00cbfc8  rlwimi 10, 5, 16, 0, 15
  00cbfcc  lwz 11, 8(3)
  00cbfd0  stw 9, 0(11)
  00cbfd4  lwz 11, 8(3)
  00cbfd8  stw 12, 4(11)
  00cbfdc  lwz 11, 8(3)
  00cbfe0  addc 12, 27, 25
  00cbfe4  addic 11, 11, 8
  00cbfe8  stw 11, 8(3)
  00cbfec  lwz 3, 40(30)
  00cbff0  lwz 11, 8(3)
  00cbff4  stw 8, 0(11)
  00cbff8  lwz 11, 8(3)
  00cbffc  stw 10, 4(11)
  00cc000  lwz 10, 8(3)
  00cc004  rotlwi 11, 6, 16
  00cc008  addic 10, 10, 8
  00cc00c  srwi 6, 6, 16
  00cc010  stw 10, 8(3)
  00cc014  lwz 3, 40(30)
  00cc018  lwz 10, 8(3)
  00cc01c  stw 9, 0(10)
  00cc020  lwz 10, 8(3)
  00cc024  stw 11, 4(10)
  00cc028  lwz 10, 8(3)
  00cc02c  clrlwi 11, 12, 16
  00cc030  addic 10, 10, 8
  00cc034  stw 10, 8(3)
  00cc038  lwz 3, 40(30)
  00cc03c  ori 10, 11, 0
  00cc040  rlwimi 10, 5, 16, 0, 15
  00cc044  lwz 5, 8(3)
  00cc048  rlwimi 11, 28, 16, 0, 15
  00cc04c  stw 8, 0(5)
  00cc050  lwz 5, 8(3)
  00cc054  stw 10, 4(5)
  00cc058  lwz 5, 8(3)
  00cc05c  addic 5, 5, 8
  00cc060  stw 5, 8(3)
  00cc064  lwz 3, 40(30)
  00cc068  lwz 5, 8(3)
  00cc06c  stw 9, 0(5)
  00cc070  lwz 5, 8(3)
  00cc074  stw 6, 4(5)
  00cc078  lwz 5, 8(3)
  00cc07c  addic 5, 5, 8
  00cc080  stw 5, 8(3)
  00cc084  lwz 3, 40(30)
  00cc088  lwz 5, 8(3)
  00cc08c  stw 8, 0(5)
  00cc090  lwz 5, 8(3)
  00cc094  stw 11, 4(5)
  00cc098  lwz 5, 8(3)
  00cc09c  addic 5, 5, 8
  00cc0a0  stw 5, 8(3)
  00cc0a4  lwz 3, 40(30)
  00cc0a8  lwz 5, 8(3)
  00cc0ac  stw 7, 0(5)
  00cc0b0  lwz 5, 8(3)
  00cc0b4  stw 4, 4(5)
  00cc0b8  lwz 4, 8(3)
  00cc0bc  addic 4, 4, 8
  00cc0c0  stw 4, 8(3)
  00cc0c4  ld 0, 192(1)
  00cc0c8  mtlr 0
  00cc0cc  ld 25, 120(1)
  00cc0d0  ld 26, 128(1)
  00cc0d4  ld 27, 136(1)
  00cc0d8  ld 28, 144(1)
  00cc0dc  ld 29, 152(1)
  00cc0e0  ld 30, 160(1)
  00cc0e4  ld 31, 168(1)
  00cc0e8  addi 1, 1, 176
  00cc0ec  blr

DrawSprite:   # 0xcc0f0, 0x58 bytes
  00cc0f0  stdu 1, -112(1)
  00cc0f4  mflr 0
  00cc0f8  std 0, 128(1)
  00cc0fc  lis 9, 162
  00cc100  lis 10, 161
  00cc104  addic 9, 9, -16448
  00cc108  sldi 3, 3, 2
  00cc10c  addic 10, 10, 24396
  00cc110  extsw 3, 3
  00cc114  lwz 9, 32(9)
  00cc118  lwz 10, 28(10)
  00cc11c  lwzx 3, 9, 3
  00cc120  sldi 9, 3, 5
  00cc124  sldi 3, 3, 2
  00cc128  addc 3, 9, 3
  00cc12c  addc 3, 10, 3
  00cc130  clrldi 3, 3, 32
  00cc134  bl 0xcbe60
  00cc138  ld 0, 128(1)
  00cc13c  mtlr 0
  00cc140  addi 1, 1, 112
  00cc144  blr

Hud_DrawTextBox:   # 0xcc148, 0x200 bytes
  00cc148  stdu 1, -192(1)
  00cc14c  mflr 0
  00cc150  std 0, 208(1)
  00cc154  std 24, 128(1)
  00cc158  std 31, 184(1)
  00cc15c  lis 24, 162
  00cc160  ori 31, 3, 0
  00cc164  std 29, 168(1)
  00cc168  addic 24, 24, -16448
  00cc16c  std 28, 160(1)
  00cc170  ori 29, 5, 0
  00cc174  ori 28, 6, 0
  00cc178  lis 5, 0
  00cc17c  std 27, 152(1)
  00cc180  li 6, 0
  00cc184  lwz 3, 28(24)
  00cc188  std 30, 176(1)
  00cc18c  ori 27, 7, 0
  00cc190  ori 30, 4, 0
  00cc194  std 25, 136(1)
  00cc198  ori 5, 5, 65535
  00cc19c  ori 25, 6, 0
  00cc1a0  std 26, 144(1)
  00cc1a4  std 23, 120(1)
  00cc1a8  lwz 4, 32(24)
  00cc1ac  ori 7, 3, 0
  00cc1b0  lhz 8, 0(7)
  00cc1b4  cmpwi 1, 8, 30080
  00cc1b8  cmpw 8, 5
  00cc1bc  cror 2, 2, 6
  00cc1c0  bt 2, 0xcc1d0
  00cc1c4  addic 7, 7, 8
  00cc1c8  addic 6, 6, 1
  00cc1cc  b 0xcc1b0
  00cc1d0  slwi 6, 6, 3
  00cc1d4  extsw 7, 6
  00cc1d8  lhzx 7, 3, 7
  00cc1dc  cmpw 7, 5
  00cc1e0  bf 2, 0xcc1ec
  00cc1e4  ori 26, 25, 0
  00cc1e8  b 0xcc208
  00cc1ec  addc 6, 3, 6
  00cc1f0  ori 26, 25, 0
  00cc1f4  clrldi 6, 6, 32
  00cc1f8  lhz 7, 2(6)
  00cc1fc  cmpwi 7, 0
  00cc200  bf 1, 0xcc208
  00cc204  lhz 26, 4(6)
  00cc208  ori 6, 25, 0
  00cc20c  ori 7, 3, 0
  00cc210  lhz 8, 0(7)
  00cc214  cmpwi 1, 8, 30080
  00cc218  cmpw 8, 5
  00cc21c  cror 2, 2, 6
  00cc220  bt 2, 0xcc230
  00cc224  addic 7, 7, 8
  00cc228  addic 6, 6, 1
  00cc22c  b 0xcc210
  00cc230  ori 7, 5, 0
  00cc234  slwi 5, 6, 3
  00cc238  extsw 6, 5
  00cc23c  lhzx 6, 3, 6
  00cc240  cmpw 6, 7
  00cc244  bf 2, 0xcc24c
  00cc248  b 0xcc268
  00cc24c  addc 5, 3, 5
  00cc250  clrldi 5, 5, 32
  00cc254  lhz 3, 2(5)
  00cc258  cmpwi 3, 1
  00cc25c  bf 1, 0xcc268
  00cc260  lhz 25, 4(5)
  00cc264  addic 25, 25, 1
  00cc268  ori 3, 4, 0
  00cc26c  slwi 6, 25, 2
  00cc270  lis 4, 161
  00cc274  ori 5, 30, 0
  00cc278  addic 23, 4, 24396
  00cc27c  ori 4, 31, 0
  00cc280  lwzx 3, 3, 6
  00cc284  ori 8, 27, 0
  00cc288  sldi 6, 3, 5
  00cc28c  sldi 3, 3, 2
  00cc290  lwz 7, 28(23)
  00cc294  addc 3, 6, 3
  00cc298  li 6, 32
  00cc29c  addc 3, 7, 3
  00cc2a0  ori 7, 28, 0
  00cc2a4  clrldi 3, 3, 32
  00cc2a8  bl 0xcbe60
  00cc2ac  lwz 3, 32(24)
  00cc2b0  slwi 5, 26, 2
  00cc2b4  lwz 7, 28(23)
  00cc2b8  addic 4, 31, 32
  00cc2bc  addic 6, 29, -64
  00cc2c0  extsw 4, 4
  00cc2c4  extsw 6, 6
  00cc2c8  lwzx 3, 3, 5
  00cc2cc  ori 8, 27, 0
  00cc2d0  sldi 5, 3, 5
  00cc2d4  sldi 3, 3, 2
  00cc2d8  addc 3, 5, 3
  00cc2dc  ori 5, 30, 0
  00cc2e0  addc 3, 7, 3
  00cc2e4  ori 7, 28, 0
  00cc2e8  clrldi 3, 3, 32
  00cc2ec  bl 0xcbe60
  00cc2f0  addc 4, 29, 31
  00cc2f4  ori 3, 25, 0
  00cc2f8  addic 4, 4, -32
  00cc2fc  ori 5, 30, 0
  00cc300  extsw 4, 4
  00cc304  li 6, 32
  00cc308  ori 7, 28, 0
  00cc30c  ori 8, 27, 0
  00cc310  bl 0xcbb98
  00cc314  ld 0, 208(1)
  00cc318  mtlr 0
  00cc31c  ld 23, 120(1)
  00cc320  ld 24, 128(1)
  00cc324  ld 25, 136(1)
  00cc328  ld 26, 144(1)
  00cc32c  ld 27, 152(1)
  00cc330  ld 28, 160(1)
  00cc334  ld 29, 168(1)
  00cc338  ld 30, 176(1)
  00cc33c  ld 31, 184(1)
  00cc340  addi 1, 1, 192
  00cc344  blr

Hud_DrawTextBoxCentered:   # 0xcc348, 0xd8 bytes
  00cc348  stdu 1, -160(1)
  00cc34c  mflr 0
  00cc350  std 0, 176(1)
  00cc354  std 31, 152(1)
  00cc358  std 30, 144(1)
  00cc35c  ori 31, 5, 0
  00cc360  ori 30, 4, 0
  00cc364  srawi 4, 31, 24
  00cc368  std 28, 128(1)
  00cc36c  li 5, 80
  00cc370  ori 28, 3, 0
  00cc374  li 7, 80
  00cc378  subc 3, 5, 4
  00cc37c  subc 7, 7, 4
  00cc380  sradi 3, 3, 63
  00cc384  addic 8, 28, 1
  00cc388  std 29, 136(1)
  00cc38c  and 3, 3, 7
  00cc390  std 27, 120(1)
  00cc394  ori 29, 6, 0
  00cc398  addc 27, 4, 3
  00cc39c  addic 4, 30, 1
  00cc3a0  extsw 3, 8
  00cc3a4  rlwinm 5, 31, 0, 0, 7
  00cc3a8  li 7, -1
  00cc3ac  extsw 4, 4
  00cc3b0  bl 0x70998
  00cc3b4  nop
  00cc3b8  addic 3, 3, -32
  00cc3bc  addic 5, 30, -8
  00cc3c0  extsw 3, 3
  00cc3c4  li 6, 32
  00cc3c8  subc 4, 28, 3
  00cc3cc  ori 7, 27, 0
  00cc3d0  sldi 8, 4, 1
  00cc3d4  extsw 4, 5
  00cc3d8  extsw 5, 8
  00cc3dc  bl 0xcc148
  00cc3e0  ori 3, 28, 0
  00cc3e4  ori 4, 30, 0
  00cc3e8  ori 5, 31, 0
  00cc3ec  ori 6, 29, 0
  00cc3f0  li 7, -1
  00cc3f4  bl 0x70998
  00cc3f8  nop
  00cc3fc  ld 0, 176(1)
  00cc400  mtlr 0
  00cc404  ld 27, 120(1)
  00cc408  ld 28, 128(1)
  00cc40c  ld 29, 136(1)
  00cc410  ld 30, 144(1)
  00cc414  ld 31, 152(1)
  00cc418  addi 1, 1, 160
  00cc41c  blr

Draw_PromptMsg:   # 0xcc450, 0x950 bytes
  00cc450  stdu 1, -272(1)
  00cc454  mflr 0
  00cc458  std 0, 288(1)
  00cc45c  std 31, 264(1)
  00cc460  lis 4, 150
  00cc464  ori 31, 3, 0
  00cc468  li 3, 0
  00cc46c  lis 6, 114
  00cc470  lis 5, 13
  00cc474  lwz 4, 27372(4)
  00cc478  std 29, 248(1)
  00cc47c  li 7, 10
  00cc480  addi 29, 5, -15328
  00cc484  subc 3, 3, 4
  00cc488  lbz 4, 112(31)
  00cc48c  cntlzw 3, 3
  00cc490  lwz 5, 17216(6)
  00cc494  li 6, 18
  00cc498  sldi 3, 3, 58
  00cc49c  subc 6, 6, 7
  00cc4a0  sradi 8, 3, 63
  00cc4a4  ori 3, 4, 0
  00cc4a8  and 4, 8, 6
  00cc4ac  std 30, 256(1)
  00cc4b0  addc 4, 7, 4
  00cc4b4  addc 30, 5, 4
  00cc4b8  std 28, 240(1)
  00cc4bc  std 27, 232(1)
  00cc4c0  std 26, 224(1)
  00cc4c4  std 25, 216(1)
  00cc4c8  std 24, 208(1)
  00cc4cc  std 23, 200(1)
  00cc4d0  std 22, 192(1)
  00cc4d4  std 21, 184(1)
  00cc4d8  std 20, 176(1)
  00cc4dc  extsw 30, 30
  00cc4e0  bl 0x502730
  00cc4e4  nop
  00cc4e8  lis 3, 114
  00cc4ec  lfs 2, 0(29)
  00cc4f0  lfs 3, -3056(3)
  00cc4f4  fmuls 2, 3, 2
  00cc4f8  lfs 3, 4(29)
  00cc4fc  fdivs 1, 1, 2
  00cc500  lfs 2, 8(29)
  00cc504  lfs 4, 12(29)
  00cc508  fsub 5, 1, 3
  00cc50c  fsel 1, 5, 1, 3
  00cc510  fsub 3, 2, 1
  00cc514  fsel 1, 3, 1, 2
  00cc518  fmuls 1, 1, 4
  00cc51c  bl 0x502758
  00cc520  nop
  00cc524  lis 4, 64
  00cc528  ori 29, 3, 0
  00cc52c  ori 3, 4, 61504
  00cc530  li 27, 0
  00cc534  lis 25, 162
  00cc538  rlwimi 3, 29, 24, 0, 7
  00cc53c  ori 26, 27, 0
  00cc540  extsw 28, 3
  00cc544  addic 25, 25, -16352
  00cc548  lbzx 3, 25, 27
  00cc54c  cmpwi 3, 1
  00cc550  bt 2, 0xcc570
  00cc554  cmpwi 1, 27, 128
  00cc558  cmpwi 3, 0
  00cc55c  crorc 2, 2, 4
  00cc560  bt 2, 0xcc570
  00cc564  addic 27, 27, 1
  00cc568  extsw 27, 27
  00cc56c  b 0xcc548
  00cc570  cmpwi 3, 1
  00cc574  bf 2, 0xcc820
  00cc578  ori 3, 25, 0
  00cc57c  stbx 26, 25, 27
  00cc580  li 4, -1
  00cc584  bl 0x6cde8
  00cc588  nop
  00cc58c  ori 24, 3, 0
  00cc590  addc 3, 25, 27
  00cc594  srawi 4, 24, 1
  00cc598  addic 27, 3, 1
  00cc59c  subfic 4, 4, 224
  00cc5a0  clrldi 27, 27, 32
  00cc5a4  extsw 23, 4
  00cc5a8  ori 3, 27, 0
  00cc5ac  li 4, -1
  00cc5b0  bl 0x6cde8
  00cc5b4  nop
  00cc5b8  srawi 4, 3, 1
  00cc5bc  subc 6, 24, 3
  00cc5c0  subfic 4, 4, 224
  00cc5c4  lis 24, 162
  00cc5c8  extsw 21, 4
  00cc5cc  addic 24, 24, -16448
  00cc5d0  subc 5, 23, 21
  00cc5d4  subc 4, 23, 21
  00cc5d8  sradi 8, 5, 63
  00cc5dc  subc 7, 23, 21
  00cc5e0  and 22, 8, 6
  00cc5e4  sradi 4, 4, 63
  00cc5e8  addc 22, 3, 22
  00cc5ec  and 3, 4, 7
  00cc5f0  lis 23, 0
  00cc5f4  lwz 4, 28(24)
  00cc5f8  addc 21, 21, 3
  00cc5fc  ori 5, 26, 0
  00cc600  ori 23, 23, 65535
  00cc604  lwz 3, 32(24)
  00cc608  ori 6, 4, 0
  00cc60c  lhz 7, 0(6)
  00cc610  cmpwi 1, 7, 30080
  00cc614  cmpw 7, 23
  00cc618  cror 2, 2, 6
  00cc61c  bt 2, 0xcc62c
  00cc620  addic 6, 6, 8
  00cc624  addic 5, 5, 1
  00cc628  b 0xcc60c
  00cc62c  slwi 5, 5, 3
  00cc630  extsw 6, 5
  00cc634  lhzx 6, 4, 6
  00cc638  cmpw 6, 23
  00cc63c  bf 2, 0xcc648
  00cc640  ori 4, 26, 0
  00cc644  b 0xcc664
  00cc648  addc 5, 4, 5
  00cc64c  ori 4, 26, 0
  00cc650  clrldi 5, 5, 32
  00cc654  lhz 6, 2(5)
  00cc658  cmpwi 6, 0
  00cc65c  bf 1, 0xcc664
  00cc660  lhz 4, 4(5)
  00cc664  slwi 4, 4, 2
  00cc668  lis 5, 161
  00cc66c  addic 6, 21, 32
  00cc670  addic 20, 5, 24396
  00cc674  extsw 6, 6
  00cc678  lwzx 3, 3, 4
  00cc67c  ori 5, 30, 0
  00cc680  ori 8, 29, 0
  00cc684  sldi 4, 3, 5
  00cc688  sldi 3, 3, 2
  00cc68c  lwz 7, 28(20)
  00cc690  addc 3, 4, 3
  00cc694  ori 4, 6, 0
  00cc698  addc 3, 7, 3
  00cc69c  ori 6, 22, 0
  00cc6a0  clrldi 3, 3, 32
  00cc6a4  li 7, 54
  00cc6a8  bl 0xcbe60
  00cc6ac  lwz 3, 28(24)
  00cc6b0  ori 4, 26, 0
  00cc6b4  lwz 5, 28(20)
  00cc6b8  ori 7, 3, 0
  00cc6bc  lwz 6, 32(24)
  00cc6c0  lhz 8, 0(7)
  00cc6c4  cmpwi 1, 8, 30080
  00cc6c8  cmpw 8, 23
  00cc6cc  cror 2, 2, 6
  00cc6d0  bt 2, 0xcc6e0
  00cc6d4  addic 7, 7, 8
  00cc6d8  addic 4, 4, 1
  00cc6dc  b 0xcc6c0
  00cc6e0  slwi 4, 4, 3
  00cc6e4  extsw 7, 4
  00cc6e8  lhzx 7, 3, 7
  00cc6ec  cmpw 7, 23
  00cc6f0  bf 2, 0xcc6fc
  00cc6f4  ori 4, 26, 0
  00cc6f8  b 0xcc71c
  00cc6fc  addc 3, 3, 4
  00cc700  ori 4, 26, 0
  00cc704  clrldi 3, 3, 32
  00cc708  lhz 7, 2(3)
  00cc70c  cmpwi 7, 1
  00cc710  bf 1, 0xcc71c
  00cc714  lhz 4, 4(3)
  00cc718  addic 4, 4, 1
  00cc71c  ori 3, 6, 0
  00cc720  slwi 7, 4, 2
  00cc724  ori 8, 5, 0
  00cc728  ori 4, 21, 0
  00cc72c  ori 5, 30, 0
  00cc730  li 6, 32
  00cc734  lwzx 3, 3, 7
  00cc738  li 7, 54
  00cc73c  sldi 9, 3, 5
  00cc740  sldi 3, 3, 2
  00cc744  addc 3, 9, 3
  00cc748  addc 3, 8, 3
  00cc74c  ori 8, 29, 0
  00cc750  clrldi 3, 3, 32
  00cc754  bl 0xcbe60
  00cc758  lwz 3, 28(24)
  00cc75c  ori 4, 26, 0
  00cc760  ori 5, 3, 0
  00cc764  lhz 6, 0(5)
  00cc768  cmpwi 1, 6, 30080
  00cc76c  cmpw 6, 23
  00cc770  cror 2, 2, 6
  00cc774  bt 2, 0xcc784
  00cc778  addic 5, 5, 8
  00cc77c  addic 4, 4, 1
  00cc780  b 0xcc764
  00cc784  slwi 4, 4, 3
  00cc788  extsw 5, 4
  00cc78c  lhzx 5, 3, 5
  00cc790  cmpw 5, 23
  00cc794  bf 2, 0xcc79c
  00cc798  b 0xcc7b8
  00cc79c  addc 4, 3, 4
  00cc7a0  clrldi 4, 4, 32
  00cc7a4  lhz 3, 2(4)
  00cc7a8  cmpwi 3, 1
  00cc7ac  bf 1, 0xcc7b8
  00cc7b0  lhz 26, 4(4)
  00cc7b4  addic 26, 26, 1
  00cc7b8  addc 4, 21, 22
  00cc7bc  ori 3, 26, 0
  00cc7c0  addic 4, 4, 32
  00cc7c4  ori 5, 30, 0
  00cc7c8  extsw 4, 4
  00cc7cc  li 6, 32
  00cc7d0  li 7, 54
  00cc7d4  ori 8, 29, 0
  00cc7d8  bl 0xcbb98
  00cc7dc  addic 4, 30, 8
  00cc7e0  li 3, 256
  00cc7e4  extsw 4, 4
  00cc7e8  ori 5, 28, 0
  00cc7ec  ori 6, 25, 0
  00cc7f0  li 7, -1
  00cc7f4  bl 0x70514
  00cc7f8  nop
  00cc7fc  addic 4, 30, 27
  00cc800  li 3, 256
  00cc804  extsw 4, 4
  00cc808  ori 5, 28, 0
  00cc80c  ori 6, 27, 0
  00cc810  li 7, -1
  00cc814  bl 0x70514
  00cc818  nop
  00cc81c  b 0xccaa0
  00cc820  ori 3, 25, 0
  00cc824  li 4, -1
  00cc828  bl 0x6cde8
  00cc82c  nop
  00cc830  lis 23, 162
  00cc834  ori 27, 3, 0
  00cc838  addic 23, 23, -16448
  00cc83c  srawi 4, 27, 1
  00cc840  lis 22, 0
  00cc844  subfic 24, 4, 224
  00cc848  ori 3, 26, 0
  00cc84c  lwz 5, 28(23)
  00cc850  ori 22, 22, 65535
  00cc854  extsw 24, 24
  00cc858  lwz 4, 32(23)
  00cc85c  ori 6, 5, 0
  00cc860  lhz 7, 0(6)
  00cc864  cmpwi 1, 7, 30080
  00cc868  cmpw 7, 22
  00cc86c  cror 2, 2, 6
  00cc870  bt 2, 0xcc880
  00cc874  addic 6, 6, 8
  00cc878  addic 3, 3, 1
  00cc87c  b 0xcc860
  00cc880  slwi 3, 3, 3
  00cc884  extsw 6, 3
  00cc888  lhzx 6, 5, 6
  00cc88c  cmpw 6, 22
  00cc890  bf 2, 0xcc89c
  00cc894  ori 3, 26, 0
  00cc898  b 0xcc8bc
  00cc89c  addc 5, 5, 3
  00cc8a0  ori 3, 26, 0
  00cc8a4  clrldi 5, 5, 32
  00cc8a8  lhz 6, 2(5)
  00cc8ac  cmpwi 6, 1
  00cc8b0  bf 1, 0xcc8bc
  00cc8b4  lhz 3, 4(5)
  00cc8b8  addic 3, 3, 1
  00cc8bc  ori 5, 4, 0
  00cc8c0  slwi 3, 3, 2
  00cc8c4  lis 4, 161
  00cc8c8  li 7, 32
  00cc8cc  addic 21, 4, 24396
  00cc8d0  ori 4, 24, 0
  00cc8d4  lwzx 3, 5, 3
  00cc8d8  ori 8, 29, 0
  00cc8dc  sldi 5, 3, 5
  00cc8e0  sldi 3, 3, 2
  00cc8e4  lwz 6, 28(21)
  00cc8e8  addc 3, 5, 3
  00cc8ec  ori 5, 30, 0
  00cc8f0  addc 3, 6, 3
  00cc8f4  li 6, 32
  00cc8f8  clrldi 3, 3, 32
  00cc8fc  bl 0xcbe60
  00cc900  lwz 4, 28(23)
  00cc904  ori 3, 26, 0
  00cc908  lwz 5, 28(21)
  00cc90c  lwz 6, 32(23)
  00cc910  ori 7, 4, 0
  00cc914  lhz 8, 0(7)
  00cc918  cmpwi 1, 8, 30080
  00cc91c  cmpw 8, 22
  00cc920  cror 2, 2, 6
  00cc924  bt 2, 0xcc934
  00cc928  addic 7, 7, 8
  00cc92c  addic 3, 3, 1
  00cc930  b 0xcc914
  00cc934  slwi 3, 3, 3
  00cc938  extsw 7, 3
  00cc93c  lhzx 7, 4, 7
  00cc940  cmpw 7, 22
  00cc944  bf 2, 0xcc950
  00cc948  ori 3, 26, 0
  00cc94c  b 0xcc96c
  00cc950  addc 4, 4, 3
  00cc954  ori 3, 26, 0
  00cc958  clrldi 4, 4, 32
  00cc95c  lhz 7, 2(4)
  00cc960  cmpwi 7, 0
  00cc964  bf 1, 0xcc96c
  00cc968  lhz 3, 4(4)
  00cc96c  ori 7, 6, 0
  00cc970  slwi 3, 3, 2
  00cc974  ori 9, 5, 0
  00cc978  addic 4, 24, 32
  00cc97c  ori 5, 30, 0
  00cc980  extsw 4, 4
  00cc984  lwzx 3, 7, 3
  00cc988  ori 6, 27, 0
  00cc98c  sldi 8, 3, 5
  00cc990  sldi 3, 3, 2
  00cc994  li 7, 32
  00cc998  addc 3, 8, 3
  00cc99c  ori 8, 29, 0
  00cc9a0  addc 3, 9, 3
  00cc9a4  clrldi 3, 3, 32
  00cc9a8  bl 0xcbe60
  00cc9ac  lwz 4, 28(23)
  00cc9b0  ori 3, 26, 0
  00cc9b4  ori 5, 4, 0
  00cc9b8  lhz 6, 0(5)
  00cc9bc  cmpwi 1, 6, 30080
  00cc9c0  cmpw 6, 22
  00cc9c4  cror 2, 2, 6
  00cc9c8  bt 2, 0xcc9d8
  00cc9cc  addic 5, 5, 8
  00cc9d0  addic 3, 3, 1
  00cc9d4  b 0xcc9b8
  00cc9d8  slwi 3, 3, 3
  00cc9dc  extsw 5, 3
  00cc9e0  lhzx 5, 4, 5
  00cc9e4  cmpw 5, 22
  00cc9e8  bf 2, 0xcc9f0
  00cc9ec  b 0xcca0c
  00cc9f0  addc 3, 4, 3
  00cc9f4  clrldi 3, 3, 32
  00cc9f8  lhz 4, 2(3)
  00cc9fc  cmpwi 4, 1
  00cca00  bf 1, 0xcca0c
  00cca04  lhz 26, 4(3)
  00cca08  addic 26, 26, 1
  00cca0c  addc 4, 24, 27
  00cca10  ori 3, 26, 0
  00cca14  addic 4, 4, 32
  00cca18  ori 5, 30, 0
  00cca1c  extsw 4, 4
  00cca20  li 6, 32
  00cca24  li 7, 32
  00cca28  ori 8, 29, 0
  00cca2c  bl 0xcbb98
  00cca30  lis 3, 151
  00cca34  lwz 3, -25488(3)
  00cca38  cmpwi 3, 12
  00cca3c  bf 2, 0xcca80
  00cca40  lis 3, 346
  00cca44  lbz 3, -15535(3)
  00cca48  cmpwi 3, 0
  00cca4c  bt 2, 0xcca80
  00cca50  lis 3, 13
  00cca54  addic 4, 30, 8
  00cca58  addi 6, 3, -15328
  00cca5c  li 3, 256
  00cca60  extsw 4, 4
  00cca64  ori 5, 28, 0
  00cca68  li 7, -1
  00cca6c  lfs 1, 16(6)
  00cca70  ori 6, 25, 0
  00cca74  bl 0x70b00
  00cca78  nop
  00cca7c  b 0xccaa0
  00cca80  addic 4, 30, 8
  00cca84  li 3, 256
  00cca88  extsw 4, 4
  00cca8c  ori 5, 28, 0
  00cca90  ori 6, 25, 0
  00cca94  li 7, -1
  00cca98  bl 0x70514
  00cca9c  nop
  00ccaa0  lis 27, 151
  00ccaa4  lwz 27, -25488(27)
  00ccaa8  cmpwi 6, 27, 5
  00ccaac  cmpwi 1, 27, 16
  00ccab0  bt 26, 0xccab8
  00ccab4  bf 6, 0xccd58
  00ccab8  lis 3, 13
  00ccabc  addi 3, 3, -15328
  00ccac0  lfs 1, 20(3)
  00ccac4  lfs 2, 24(3)
  00ccac8  lfs 3, 28(3)
  00ccacc  lfs 4, 32(3)
  00ccad0  lfs 5, 36(3)
  00ccad4  lfs 6, 40(3)
  00ccad8  bf 26, 0xccae8
  00ccadc  fmr 4, 1
  00ccae0  fmr 5, 2
  00ccae4  fmr 6, 3
  00ccae8  lis 3, 151
  00ccaec  addic 3, 3, -25376
  00ccaf0  lfs 1, 132(3)
  00ccaf4  lfs 2, 128(3)
  00ccaf8  fsubs 1, 1, 5
  00ccafc  lfs 3, 136(3)
  00ccb00  fsubs 2, 2, 4
  00ccb04  fsubs 3, 3, 6
  00ccb08  lis 3, 13
  00ccb0c  addi 3, 3, -15328
  00ccb10  fmuls 1, 1, 1
  00ccb14  fmadds 1, 2, 2, 1
  00ccb18  lfs 2, 44(3)
  00ccb1c  fmadds 1, 3, 3, 1
  00ccb20  fsqrts 1, 1
  00ccb24  fcmpu 0, 1, 2
  00ccb28  cror 6, 1, 2
  00ccb2c  bt 6, 0xccd58
  00ccb30  addic 3, 27, -16
  00ccb34  lis 5, 161
  00ccb38  cntlzw 3, 3
  00ccb3c  addic 27, 5, -13052
  00ccb40  lis 4, 161
  00ccb44  lis 5, 161
  00ccb48  addic 6, 30, 100
  00ccb4c  rlwinm 3, 3, 29, 29, 29
  00ccb50  addic 4, 4, -13040
  00ccb54  stw 6, 23688(5)
  00ccb58  lwzx 27, 27, 3
  00ccb5c  lwzx 29, 4, 3
  00ccb60  cmpwi 27, 0
  00ccb64  extsw 29, 29
  00ccb68  bt 2, 0xccd58
  00ccb6c  lis 3, 150
  00ccb70  li 4, 0
  00ccb74  li 5, 3600
  00ccb78  li 6, 3000
  00ccb7c  lwz 3, 27368(3)
  00ccb80  subc 3, 4, 3
  00ccb84  subc 4, 5, 6
  00ccb88  cntlzw 3, 3
  00ccb8c  sldi 3, 3, 58
  00ccb90  sradi 3, 3, 63
  00ccb94  and 3, 3, 4
  00ccb98  addc 3, 6, 3
  00ccb9c  divw 4, 27, 3
  00ccba0  mullw 5, 4, 3
  00ccba4  addic 3, 3, 1
  00ccba8  subc 5, 27, 5
  00ccbac  sldi 7, 3, 8
  00ccbb0  sldi 8, 3, 4
  00ccbb4  addc 3, 3, 7
  00ccbb8  addc 3, 3, 8
  00ccbbc  srwi 3, 3, 14
  00ccbc0  divw 7, 5, 3
  00ccbc4  mullw 8, 7, 3
  00ccbc8  lis 6, 101
  00ccbcc  subc 5, 5, 8
  00ccbd0  addic 24, 1, 112
  00ccbd4  sldi 8, 5, 5
  00ccbd8  extsw 27, 4
  00ccbdc  addc 5, 5, 8
  00ccbe0  extsw 26, 7
  00ccbe4  sldi 5, 5, 2
  00ccbe8  addic 23, 6, 8412
  00ccbec  subc 5, 5, 8
  00ccbf0  divw 5, 5, 3
  00ccbf4  li 3, 21275
  00ccbf8  extsw 25, 5
  00ccbfc  bl 0x7b740
  00ccc00  nop
  00ccc04  ori 5, 3, 0
  00ccc08  ori 3, 24, 0
  00ccc0c  ori 4, 23, 0
  00ccc10  ori 6, 27, 0
  00ccc14  ori 7, 26, 0
  00ccc18  ori 8, 25, 0
  00ccc1c  bl 0x5cd2a8
  00ccc20  nop
  00ccc24  addic 3, 30, 40
  00ccc28  srawi 26, 28, 24
  00ccc2c  li 5, 80
  00ccc30  extsw 25, 3
  00ccc34  li 4, 80
  00ccc38  subc 3, 5, 26
  00ccc3c  subc 4, 4, 26
  00ccc40  sradi 3, 3, 63
  00ccc44  addic 5, 25, 1
  00ccc48  and 3, 3, 4
  00ccc4c  rlwinm 27, 28, 0, 0, 7
  00ccc50  addc 26, 26, 3
  00ccc54  li 3, 257
  00ccc58  extsw 4, 5
  00ccc5c  li 7, -1
  00ccc60  ori 5, 27, 0
  00ccc64  ori 6, 24, 0
  00ccc68  bl 0x70998
  00ccc6c  nop
  00ccc70  addic 3, 3, -32
  00ccc74  addic 4, 25, -8
  00ccc78  extsw 3, 3
  00ccc7c  li 6, 32
  00ccc80  subfic 5, 3, 256
  00ccc84  ori 7, 26, 0
  00ccc88  sldi 5, 5, 1
  00ccc8c  extsw 4, 4
  00ccc90  extsw 5, 5
  00ccc94  bl 0xcc148
  00ccc98  li 3, 256
  00ccc9c  ori 4, 25, 0
  00ccca0  ori 5, 28, 0
  00ccca4  ori 6, 24, 0
  00ccca8  li 7, -1
  00cccac  bl 0x70998
  00cccb0  nop
  00cccb4  cmpwi 29, 0
  00cccb8  bt 2, 0xccd58
  00cccbc  lis 4, 101
  00cccc0  li 3, 21276
  00cccc4  addic 25, 4, 8436
  00cccc8  bl 0x7b740
  00ccccc  nop
  00cccd0  addic 24, 1, 112
  00cccd4  ori 5, 3, 0
  00cccd8  ori 3, 24, 0
  00cccdc  ori 4, 25, 0
  00ccce0  ori 6, 29, 0
  00ccce4  bl 0x5cd2a8
  00ccce8  nop
  00cccec  addic 3, 30, 72
  00cccf0  ori 5, 27, 0
  00cccf4  extsw 30, 3
  00cccf8  li 3, 257
  00cccfc  addic 4, 30, 1
  00ccd00  ori 6, 24, 0
  00ccd04  extsw 4, 4
  00ccd08  li 7, -1
  00ccd0c  bl 0x70998
  00ccd10  nop
  00ccd14  addic 3, 3, -32
  00ccd18  addic 4, 30, -8
  00ccd1c  extsw 3, 3
  00ccd20  li 6, 32
  00ccd24  subfic 5, 3, 256
  00ccd28  ori 7, 26, 0
  00ccd2c  sldi 5, 5, 1
  00ccd30  extsw 4, 4
  00ccd34  extsw 5, 5
  00ccd38  bl 0xcc148
  00ccd3c  li 3, 256
  00ccd40  ori 4, 30, 0
  00ccd44  ori 5, 28, 0
  00ccd48  ori 6, 24, 0
  00ccd4c  li 7, -1
  00ccd50  bl 0x70998
  00ccd54  nop
  00ccd58  lwz 3, 88(31)
  00ccd5c  extsw 3, 3
  00ccd60  ld 0, 288(1)
  00ccd64  mtlr 0
  00ccd68  ld 20, 176(1)
  00ccd6c  ld 21, 184(1)
  00ccd70  ld 22, 192(1)
  00ccd74  ld 23, 200(1)
  00ccd78  ld 24, 208(1)
  00ccd7c  ld 25, 216(1)
  00ccd80  ld 26, 224(1)
  00ccd84  ld 27, 232(1)
  00ccd88  ld 28, 240(1)
  00ccd8c  ld 29, 248(1)
  00ccd90  ld 30, 256(1)
  00ccd94  ld 31, 264(1)
  00ccd98  addi 1, 1, 272
  00ccd9c  blr

GetHelpLen:   # 0xccda0, 0x64 bytes
  00ccda0  stdu 1, -128(1)
  00ccda4  mflr 0
  00ccda8  std 0, 144(1)
  00ccdac  std 31, 120(1)
  00ccdb0  ori 31, 3, 0
  00ccdb4  bl 0x5c8510
  00ccdb8  nop
  00ccdbc  cmplwi 3, 80
  00ccdc0  bf 0, 0xccddc
  00ccdc4  lis 3, 162
  00ccdc8  lis 4, 101
  00ccdcc  addic 3, 3, -16352
  00ccdd0  addic 4, 4, 8444
  00ccdd4  bl 0x5cc8d8
  00ccdd8  nop
  00ccddc  lis 3, 162
  00ccde0  ori 4, 31, 0
  00ccde4  addic 3, 3, -16352
  00ccde8  bl 0x5cc8d8
  00ccdec  nop
  00ccdf0  ld 0, 144(1)
  00ccdf4  mtlr 0
  00ccdf8  ld 31, 120(1)
  00ccdfc  addi 1, 1, 128
  00cce00  blr

Moby849Hud_Init:   # 0xcce10, 0x74 bytes
  00cce10  stdu 1, -112(1)
  00cce14  mflr 0
  00cce18  std 0, 128(1)
  00cce1c  lis 4, 13
  00cce20  vspltisw 2, -1
  00cce24  lis 5, 114
  00cce28  addi 4, 4, -12796
  00cce2c  li 6, -3056
  00cce30  vslw 2, 2, 2
  00cce34  li 7, 0
  00cce38  lvlx 3, 0, 4
  00cce3c  lvlx 4, 6, 5
  00cce40  vspltw 3, 3, 0
  00cce44  li 5, 4
  00cce48  li 6, 124
  00cce4c  vmaddfp 2, 4, 3, 2
  00cce50  lvlx 3, 5, 4
  00cce54  vspltw 3, 3, 0
  00cce58  vctsxs 2, 2, 0
  00cce5c  vadduwm 2, 2, 3
  00cce60  vspltw 2, 2, 0
  00cce64  stvewx 2, 6, 3
  00cce68  sth 7, 72(3)
  00cce6c  sth 7, 74(3)
  00cce70  bl 0xc8e10
  00cce74  ld 0, 128(1)
  00cce78  mtlr 0
  00cce7c  addi 1, 1, 112
  00cce80  blr

Moby849Hud_Update:   # 0xcce90, 0xe8 bytes
  00cce90  stdu 1, -128(1)
  00cce94  mflr 0
  00cce98  std 0, 144(1)
  00cce9c  std 31, 120(1)
  00ccea0  lis 4, 13
  00ccea4  std 30, 112(1)
  00ccea8  ori 31, 3, 0
  00cceac  addi 30, 4, -12668
  00cceb0  bl 0xc9390
  00cceb4  lis 3, 151
  00cceb8  li 4, 0
  00ccebc  addic 3, 3, -25432
  00ccec0  li 5, 10
  00ccec4  li 6, 5
  00ccec8  subc 5, 5, 6
  00ccecc  lbz 3, 9(3)
  00cced0  subc 3, 4, 3
  00cced4  lis 4, 151
  00cced8  sradi 7, 3, 63
  00ccedc  addic 3, 4, -25376
  00ccee0  and 4, 7, 5
  00ccee4  addc 4, 6, 4
  00ccee8  stw 4, 8(31)
  00cceec  lwz 4, 4280(3)
  00ccef0  lvlx 2, 0, 30
  00ccef4  cmpwi 4, 9
  00ccef8  vspltw 2, 2, 0
  00ccefc  bf 2, 0xccf44
  00ccf00  lbz 3, 8356(3)
  00ccf04  cmpwi 3, 0
  00ccf08  bf 2, 0xccf44
  00ccf0c  lis 3, 13
  00ccf10  vspltisw 3, -1
  00ccf14  li 5, 4
  00ccf18  addi 3, 3, -12668
  00ccf1c  lis 4, 114
  00ccf20  li 6, -3056
  00ccf24  vslw 3, 3, 3
  00ccf28  lvlx 4, 5, 3
  00ccf2c  vspltw 4, 4, 0
  00ccf30  lvlx 5, 6, 4
  00ccf34  vmaddfp 3, 5, 4, 3
  00ccf38  vctsxs 3, 3, 0
  00ccf3c  vadduwm 2, 3, 2
  00ccf40  b 0xccf54
  00ccf44  li 3, 124
  00ccf48  lvlx 3, 3, 31
  00ccf4c  vcmpgtsw 4, 3, 2
  00ccf50  vsel 2, 3, 2, 4
  00ccf54  vspltw 2, 2, 0
  00ccf58  li 3, 124
  00ccf5c  stvewx 2, 3, 31
  00ccf60  ld 0, 144(1)
  00ccf64  mtlr 0
  00ccf68  ld 30, 112(1)
  00ccf6c  ld 31, 120(1)
  00ccf70  addi 1, 1, 128
  00ccf74  blr

DrawFlatOverlay_Fixed:   # 0xccf78, 0x30 bytes
  00ccf78  stdu 1, -112(1)
  00ccf7c  mflr 0
  00ccf80  std 0, 128(1)
  00ccf84  srawi 3, 3, 4
  00ccf88  srawi 4, 4, 4
  00ccf8c  srawi 5, 5, 4
  00ccf90  srawi 6, 6, 4
  00ccf94  bl 0xca72c
  00ccf98  ld 0, 128(1)
  00ccf9c  mtlr 0
  00ccfa0  addi 1, 1, 112
  00ccfa4  blr

Draw_Moby849Meter:   # 0xccfa8, 0x3e8 bytes
  00ccfa8  stdu 1, -176(1)
  00ccfac  mflr 0
  00ccfb0  std 0, 192(1)
  00ccfb4  std 31, 168(1)
  00ccfb8  lis 4, 144
  00ccfbc  std 25, 120(1)
  00ccfc0  ori 31, 3, 0
  00ccfc4  li 25, 0
  00ccfc8  ori 3, 25, 0
  00ccfcc  lwz 7, -23196(4)
  00ccfd0  lwz 4, 80(31)
  00ccfd4  lwz 5, 84(31)
  00ccfd8  std 30, 160(1)
  00ccfdc  lwz 6, 96(31)
  00ccfe0  std 29, 152(1)
  00ccfe4  lwz 30, 108(31)
  00ccfe8  lbz 29, 17(7)
  00ccfec  lwz 7, 12(7)
  00ccff0  cmpwi 1, 29, 5
  00ccff4  std 28, 144(1)
  00ccff8  std 27, 136(1)
  00ccffc  std 26, 128(1)
  00cd000  cmpwi 7, 0
  00cd004  bf 2, 0xcd018
  00cd008  li 3, -80
  00cd00c  bf 6, 0xcd020
  00cd010  li 3, -60
  00cd014  b 0xcd020
  00cd018  bf 6, 0xcd020
  00cd01c  li 3, 20
  00cd020  li 7, 129
  00cd024  li 8, 20
  00cd028  stw 5, 116(1)
  00cd02c  subc 7, 7, 29
  00cd030  subc 8, 8, 3
  00cd034  cntlzw 7, 7
  00cd038  lis 9, 114
  00cd03c  sldi 7, 7, 58
  00cd040  lis 29, 114
  00cd044  sradi 7, 7, 63
  00cd048  and 7, 7, 8
  00cd04c  clrlwi 8, 6, 31
  00cd050  addc 3, 3, 7
  00cd054  cmpwi 8, 0
  00cd058  addc 3, 4, 3
  00cd05c  lwz 4, 17200(9)
  00cd060  stw 4, 88(31)
  00cd064  stw 3, 112(1)
  00cd068  lwz 7, 17204(29)
  00cd06c  stw 7, 92(31)
  00cd070  bf 2, 0xcd08c
  00cd074  rlwinm 8, 6, 0, 30, 30
  00cd078  cmpwi 8, 0
  00cd07c  bf 2, 0xcd08c
  00cd080  srawi 7, 7, 1
  00cd084  subc 5, 5, 7
  00cd088  stw 5, 116(1)
  00cd08c  rlwinm 5, 6, 0, 29, 29
  00cd090  cmpwi 5, 0
  00cd094  bf 2, 0xcd0c8
  00cd098  rlwinm 5, 6, 0, 28, 28
  00cd09c  li 6, 0
  00cd0a0  srawi 7, 4, 1
  00cd0a4  subc 5, 6, 5
  00cd0a8  subc 6, 7, 4
  00cd0ac  cntlzw 5, 5
  00cd0b0  sldi 5, 5, 58
  00cd0b4  sradi 5, 5, 63
  00cd0b8  and 5, 5, 6
  00cd0bc  addc 4, 4, 5
  00cd0c0  subc 3, 3, 4
  00cd0c4  stw 3, 112(1)
  00cd0c8  ori 3, 31, 0
  00cd0cc  addic 4, 1, 112
  00cd0d0  addic 5, 1, 116
  00cd0d4  extsw 6, 30
  00cd0d8  li 7, 0
  00cd0dc  bl 0xc8c08
  00cd0e0  lis 3, 114
  00cd0e4  lhz 4, 72(31)
  00cd0e8  lwz 5, 112(1)
  00cd0ec  extsh 4, 4
  00cd0f0  lhz 6, 74(31)
  00cd0f4  addc 4, 5, 4
  00cd0f8  lwz 3, 17200(3)
  00cd0fc  extsh 6, 6
  00cd100  lwz 7, 116(1)
  00cd104  sldi 4, 4, 4
  00cd108  addc 5, 3, 3
  00cd10c  lwz 9, 17204(29)
  00cd110  sldi 8, 3, 8
  00cd114  addc 5, 3, 5
  00cd118  addc 6, 7, 6
  00cd11c  sldi 5, 5, 4
  00cd120  sldi 7, 9, 5
  00cd124  subc 5, 8, 5
  00cd128  sldi 8, 9, 7
  00cd12c  mulli 3, 3, 608
  00cd130  srawi 5, 5, 6
  00cd134  mulli 9, 9, 3744
  00cd138  addze 5, 5
  00cd13c  addc 7, 8, 7
  00cd140  addc 4, 4, 5
  00cd144  srawi 5, 7, 8
  00cd148  extsw 27, 4
  00cd14c  sldi 6, 6, 4
  00cd150  addze 4, 5
  00cd154  srawi 3, 3, 6
  00cd158  lis 7, -32768
  00cd15c  addze 3, 3
  00cd160  srawi 5, 9, 8
  00cd164  li 8, 1
  00cd168  addze 5, 5
  00cd16c  addc 4, 6, 4
  00cd170  ori 6, 7, 0
  00cd174  extsw 4, 4
  00cd178  addc 7, 27, 3
  00cd17c  addc 5, 4, 5
  00cd180  extsw 26, 7
  00cd184  clrldi 28, 6, 32
  00cd188  ori 3, 27, 0
  00cd18c  extsw 6, 5
  00cd190  ori 5, 26, 0
  00cd194  ori 7, 28, 0
  00cd198  bl 0xca72c
  00cd19c  lwz 3, 17204(29)
  00cd1a0  lwz 4, 116(31)
  00cd1a4  mullw 4, 4, 3
  00cd1a8  mulli 4, 4, 3744
  00cd1ac  lwz 5, 8(31)
  00cd1b0  srawi 27, 27, 4
  00cd1b4  mulli 3, 3, 3904
  00cd1b8  slwi 5, 5, 8
  00cd1bc  lhz 6, 74(31)
  00cd1c0  srawi 3, 3, 8
  00cd1c4  divw 4, 4, 5
  00cd1c8  lwz 5, 116(1)
  00cd1cc  extsh 6, 6
  00cd1d0  addze 3, 3
  00cd1d4  addc 5, 5, 6
  00cd1d8  lis 6, -32638
  00cd1dc  sldi 5, 5, 4
  00cd1e0  srawi 26, 26, 4
  00cd1e4  addc 3, 5, 3
  00cd1e8  ori 7, 6, 40448
  00cd1ec  subc 5, 3, 4
  00cd1f0  srawi 4, 3, 4
  00cd1f4  ori 3, 27, 0
  00cd1f8  srawi 6, 5, 4
  00cd1fc  ori 5, 26, 0
  00cd200  clrldi 7, 7, 32
  00cd204  li 8, 1
  00cd208  bl 0xca72c
  00cd20c  lwz 3, 116(31)
  00cd210  li 30, 1
  00cd214  cmpwi 3, 1
  00cd218  bf 1, 0xcd2a4
  00cd21c  lwz 3, 17204(29)
  00cd220  mullw 4, 3, 30
  00cd224  mulli 4, 4, 3744
  00cd228  lwz 5, 8(31)
  00cd22c  mulli 3, 3, 3904
  00cd230  slwi 5, 5, 8
  00cd234  lhz 6, 74(31)
  00cd238  lwz 7, 116(1)
  00cd23c  srawi 3, 3, 8
  00cd240  divw 4, 4, 5
  00cd244  extsh 5, 6
  00cd248  slwi 6, 7, 4
  00cd24c  slwi 8, 5, 4
  00cd250  addze 3, 3
  00cd254  addc 5, 7, 5
  00cd258  addc 6, 6, 8
  00cd25c  sldi 5, 5, 4
  00cd260  ori 7, 28, 0
  00cd264  addc 5, 5, 3
  00cd268  addc 3, 6, 3
  00cd26c  subc 5, 5, 4
  00cd270  subc 4, 3, 4
  00cd274  addic 5, 5, -16
  00cd278  addic 6, 4, 16
  00cd27c  ori 3, 27, 0
  00cd280  srawi 4, 5, 4
  00cd284  li 8, 1
  00cd288  srawi 6, 6, 4
  00cd28c  ori 5, 26, 0
  00cd290  bl 0xca72c
  00cd294  lwz 3, 116(31)
  00cd298  addic 30, 30, 1
  00cd29c  cmpw 30, 3
  00cd2a0  bt 0, 0xcd21c
  00cd2a4  ori 4, 25, 0
  00cd2a8  lwz 3, 0(31)
  00cd2ac  lis 7, 162
  00cd2b0  lis 8, 0
  00cd2b4  ori 6, 4, 0
  00cd2b8  addic 7, 7, -16448
  00cd2bc  ori 8, 8, 65535
  00cd2c0  lwz 5, 28(7)
  00cd2c4  lhzx 9, 5, 6
  00cd2c8  cmpw 1, 9, 3
  00cd2cc  cmpw 9, 8
  00cd2d0  cror 2, 2, 6
  00cd2d4  bt 2, 0xcd2e4
  00cd2d8  addic 6, 6, 8
  00cd2dc  addic 4, 4, 1
  00cd2e0  b 0xcd2c0
  00cd2e4  slwi 4, 4, 3
  00cd2e8  extsw 3, 4
  00cd2ec  lhzx 3, 5, 3
  00cd2f0  cmpw 3, 8
  00cd2f4  bf 2, 0xcd2fc
  00cd2f8  b 0xcd314
  00cd2fc  addc 5, 5, 4
  00cd300  clrldi 5, 5, 32
  00cd304  lhz 3, 2(5)
  00cd308  cmpwi 3, 0
  00cd30c  bf 1, 0xcd314
  00cd310  lhz 25, 4(5)
  00cd314  lis 4, 114
  00cd318  lhz 5, 72(31)
  00cd31c  lwz 6, 112(1)
  00cd320  ori 3, 25, 0
  00cd324  extsh 5, 5
  00cd328  lhz 7, 74(31)
  00cd32c  lwz 8, 116(1)
  00cd330  addc 5, 6, 5
  00cd334  extsh 7, 7
  00cd338  lwz 6, 17200(4)
  00cd33c  extsw 4, 5
  00cd340  addc 5, 8, 7
  00cd344  lwz 7, 17204(29)
  00cd348  extsw 6, 6
  00cd34c  li 8, 128
  00cd350  extsw 7, 7
  00cd354  extsw 5, 5
  00cd358  bl 0xca464
  00cd35c  lwz 3, 88(31)
  00cd360  extsw 3, 3
  00cd364  ld 0, 192(1)
  00cd368  mtlr 0
  00cd36c  ld 25, 120(1)
  00cd370  ld 26, 128(1)
  00cd374  ld 27, 136(1)
  00cd378  ld 28, 144(1)
  00cd37c  ld 29, 152(1)
  00cd380  ld 30, 160(1)
  00cd384  ld 31, 168(1)
  00cd388  addi 1, 1, 176
  00cd38c  blr

QuickSelectHud_Init:   # 0xcd398, 0xec bytes
  00cd398  ori 7, 3, 0
  00cd39c  vspltisw 3, -1
  00cd3a0  lis 3, 162
  00cd3a4  li 4, 8
  00cd3a8  lis 8, 114
  00cd3ac  li 9, 0
  00cd3b0  lis 6, 114
  00cd3b4  vslw 3, 3, 3
  00cd3b8  stw 4, -16256(3)
  00cd3bc  lis 5, 13
  00cd3c0  li 3, -2
  00cd3c4  lwz 8, 14640(8)
  00cd3c8  sth 9, 72(7)
  00cd3cc  addi 5, 5, -11376
  00cd3d0  stw 8, 88(7)
  00cd3d4  li 10, -3056
  00cd3d8  lwz 6, 14644(6)
  00cd3dc  lis 11, 114
  00cd3e0  sth 9, 74(7)
  00cd3e4  stw 6, 92(7)
  00cd3e8  stw 3, 116(7)
  00cd3ec  lvlx 2, 0, 5
  00cd3f0  lvlx 4, 10, 11
  00cd3f4  lis 3, 114
  00cd3f8  vspltw 2, 2, 0
  00cd3fc  lis 5, 162
  00cd400  addic 3, 3, 15112
  00cd404  li 8, 120
  00cd408  lis 10, 162
  00cd40c  vmaddfp 2, 4, 2, 3
  00cd410  stw 3, -15984(5)
  00cd414  mtctr 4
  00cd418  lis 6, 114
  00cd41c  lis 5, 151
  00cd420  lis 4, 114
  00cd424  lis 3, 114
  00cd428  addic 5, 5, -15908
  00cd42c  addic 6, 6, 4152
  00cd430  addic 4, 4, 14720
  00cd434  addic 3, 3, 14744
  00cd438  vctsxs 2, 2, 0
  00cd43c  vspltw 2, 2, 0
  00cd440  stvewx 2, 8, 7
  00cd444  stw 9, 112(7)
  00cd448  stw 9, -16252(10)
  00cd44c  lwz 7, 0(5)
  00cd450  addic 5, 5, 4
  00cd454  sldi 8, 7, 4
  00cd458  stw 7, 0(3)
  00cd45c  subc 9, 7, 8
  00cd460  addic 3, 3, 28
  00cd464  sldi 9, 9, 2
  00cd468  subc 8, 8, 9
  00cd46c  extsw 7, 8
  00cd470  lhzx 7, 6, 7
  00cd474  stw 7, 0(4)
  00cd478  addic 4, 4, 28
  00cd47c  bdnz 0xcd44c
  00cd480  blr

UpdateQuickSelect:   # 0xcd4b8, 0xa00 bytes
  00cd4b8  stdu 1, -288(1)
  00cd4bc  mflr 0
  00cd4c0  std 0, 304(1)
  00cd4c4  stfd 25, 232(1)
  00cd4c8  stfd 26, 240(1)
  00cd4cc  stfd 27, 248(1)
  00cd4d0  stfd 28, 256(1)
  00cd4d4  stfd 29, 264(1)
  00cd4d8  stfd 30, 272(1)
  00cd4dc  stfd 31, 280(1)
  00cd4e0  lis 4, 13
  00cd4e4  vspltisw 2, -1
  00cd4e8  lis 5, 114
  00cd4ec  addi 4, 4, -11132
  00cd4f0  li 6, -3056
  00cd4f4  std 31, 224(1)
  00cd4f8  ori 31, 3, 0
  00cd4fc  vslw 2, 2, 2
  00cd500  std 27, 192(1)
  00cd504  lvlx 3, 0, 4
  00cd508  lis 27, 151
  00cd50c  lvlx 4, 6, 5
  00cd510  li 4, 124
  00cd514  vspltw 3, 3, 0
  00cd518  li 5, 24
  00cd51c  addic 27, 27, -25376
  00cd520  addic 3, 27, 8914
  00cd524  vmaddfp 2, 4, 3, 2
  00cd528  vctsxs 2, 2, 0
  00cd52c  vspltw 2, 2, 0
  00cd530  stvewx 2, 4, 31
  00cd534  std 30, 216(1)
  00cd538  std 29, 208(1)
  00cd53c  std 28, 200(1)
  00cd540  std 26, 184(1)
  00cd544  std 25, 176(1)
  00cd548  stw 5, 108(31)
  00cd54c  bl 0x4fffb4
  00cd550  nop
  00cd554  cmpwi 3, 0
  00cd558  bt 2, 0xcd580
  00cd55c  lis 4, 150
  00cd560  lis 3, 150
  00cd564  addic 4, 4, 21824
  00cd568  li 5, 2
  00cd56c  addic 3, 3, 22028
  00cd570  stw 5, 204(4)
  00cd574  stw 5, 1380(3)
  00cd578  stw 5, 2760(3)
  00cd57c  stw 5, 4140(3)
  00cd580  lis 29, 150
  00cd584  addic 29, 29, 19008
  00cd588  lfs 2, 76(29)
  00cd58c  lfs 3, 72(29)
  00cd590  fmuls 1, 2, 2
  00cd594  lis 3, 13
  00cd598  addi 3, 3, -11132
  00cd59c  fmadds 1, 3, 3, 1
  00cd5a0  lfs 26, 4(3)
  00cd5a4  lis 4, 115
  00cd5a8  fsqrts 1, 1
  00cd5ac  addic 4, 4, 22784
  00cd5b0  fdivs 4, 2, 1
  00cd5b4  fdivs 5, 3, 1
  00cd5b8  fsub 6, 26, 1
  00cd5bc  fsub 7, 26, 1
  00cd5c0  fsub 8, 1, 26
  00cd5c4  fsub 9, 1, 26
  00cd5c8  fsel 2, 6, 2, 4
  00cd5cc  fsel 2, 8, 2, 4
  00cd5d0  fsel 3, 7, 3, 5
  00cd5d4  fabs 4, 2
  00cd5d8  stfs 2, 116(1)
  00cd5dc  fsel 3, 9, 3, 5
  00cd5e0  fabs 2, 3
  00cd5e4  stfs 3, 112(1)
  00cd5e8  lwz 5, 116(1)
  00cd5ec  rlwinm 5, 5, 3, 29, 29
  00cd5f0  fsubs 3, 2, 4
  00cd5f4  stfs 3, 120(1)
  00cd5f8  lwz 6, 112(1)
  00cd5fc  lfs 3, 112(1)
  00cd600  lfs 5, 116(1)
  00cd604  lfs 30, 8(3)
  00cd608  lwz 3, 120(1)
  00cd60c  lfs 6, 120(1)
  00cd610  fabs 3, 3
  00cd614  rlwimi 5, 3, 2, 30, 30
  00cd618  fsub 7, 6, 26
  00cd61c  ori 3, 4, 0
  00cd620  fabs 5, 5
  00cd624  rlwimi 5, 6, 4, 28, 28
  00cd628  fsub 6, 6, 26
  00cd62c  rlwimi 3, 5, 2, 26, 28
  00cd630  slwi 5, 5, 2
  00cd634  clrldi 3, 3, 32
  00cd638  lfsx 31, 4, 5
  00cd63c  fsel 4, 7, 3, 4
  00cd640  fsel 3, 6, 5, 2
  00cd644  lfs 2, 4(3)
  00cd648  fcmpu 0, 4, 26
  00cd64c  bt 1, 0xcd658
  00cd650  fmr 31, 26
  00cd654  b 0xcd770
  00cd658  fsubs 5, 3, 4
  00cd65c  fadds 3, 3, 4
  00cd660  addic 3, 1, 16
  00cd664  li 6, 2
  00cd668  addic 4, 3, 108
  00cd66c  addic 5, 3, 124
  00cd670  mtctr 6
  00cd674  fdivs 3, 5, 3
  00cd678  fmuls 4, 3, 3
  00cd67c  stfs 3, 136(1)
  00cd680  stfs 3, 128(1)
  00cd684  stfs 3, 132(1)
  00cd688  stfs 3, 124(1)
  00cd68c  lfs 6, 136(1)
  00cd690  lfs 7, 128(1)
  00cd694  lfs 8, 132(1)
  00cd698  fmuls 5, 4, 4
  00cd69c  fmuls 7, 7, 4
  00cd6a0  fmuls 6, 6, 5
  00cd6a4  fmuls 3, 5, 5
  00cd6a8  fmuls 5, 8, 5
  00cd6ac  stfs 7, 128(1)
  00cd6b0  fmuls 4, 6, 4
  00cd6b4  stfs 5, 132(1)
  00cd6b8  stfs 4, 136(1)
  00cd6bc  lfs 4, 108(3)
  00cd6c0  fmuls 4, 4, 3
  00cd6c4  stfs 4, 124(3)
  00cd6c8  lfs 4, 4(4)
  00cd6cc  addic 3, 3, 8
  00cd6d0  addic 4, 4, 8
  00cd6d4  fmuls 4, 4, 3
  00cd6d8  stfs 4, 4(5)
  00cd6dc  addic 5, 5, 8
  00cd6e0  bdnz 0xcd6bc
  00cd6e4  li 5, 4
  00cd6e8  ori 3, 1, 0
  00cd6ec  mtctr 5
  00cd6f0  lis 4, 115
  00cd6f4  addic 5, 3, 124
  00cd6f8  addic 4, 4, 22752
  00cd6fc  ori 7, 5, 0
  00cd700  lfs 3, 124(3)
  00cd704  lfs 4, 0(4)
  00cd708  fmuls 3, 3, 4
  00cd70c  lfs 4, 4(4)
  00cd710  addic 4, 4, 8
  00cd714  stfs 3, 124(3)
  00cd718  lfs 3, 4(5)
  00cd71c  addic 3, 3, 8
  00cd720  fmuls 3, 3, 4
  00cd724  stfs 3, 4(5)
  00cd728  addic 5, 5, 8
  00cd72c  bdnz 0xcd700
  00cd730  fmr 3, 26
  00cd734  ori 3, 1, 0
  00cd738  mtctr 6
  00cd73c  lfs 4, 124(3)
  00cd740  fadds 3, 3, 4
  00cd744  addic 3, 3, 16
  00cd748  lfs 4, 4(7)
  00cd74c  lfs 5, 8(7)
  00cd750  lfs 6, 12(7)
  00cd754  addic 7, 7, 16
  00cd758  fadds 3, 3, 4
  00cd75c  fadds 3, 3, 5
  00cd760  fadds 3, 3, 6
  00cd764  bdnz 0xcd73c
  00cd768  fadds 3, 3, 30
  00cd76c  fmadds 31, 3, 31, 2
  00cd770  lwz 4, 120(31)
  00cd774  ori 3, 4, 0
  00cd778  cmpwi 1, 4, 0
  00cd77c  srawi 5, 3, 24
  00cd780  cmpwi 5, 0
  00cd784  bf 2, 0xcd7cc
  00cd788  lwz 3, 196(29)
  00cd78c  rlwinm 3, 3, 0, 16, 19
  00cd790  cmpwi 3, 0
  00cd794  bf 2, 0xcd7b8
  00cd798  lis 3, 13
  00cd79c  addi 3, 3, -11132
  00cd7a0  lfs 2, 12(3)
  00cd7a4  fcmpu 0, 1, 2
  00cd7a8  bt 0, 0xcd7b8
  00cd7ac  addic 3, 4, -1
  00cd7b0  stw 3, 120(31)
  00cd7b4  bf 6, 0xcd7cc
  00cd7b8  lis 3, 256
  00cd7bc  li 4, -1
  00cd7c0  ori 3, 3, 255
  00cd7c4  stw 4, 116(31)
  00cd7c8  stw 3, 120(31)
  00cd7cc  srawi 3, 3, 24
  00cd7d0  li 30, 0
  00cd7d4  lwz 28, 116(31)
  00cd7d8  cmpwi 3, 1
  00cd7dc  ori 26, 30, 0
  00cd7e0  ori 4, 28, 0
  00cd7e4  bf 2, 0xcdbc8
  00cd7e8  lwz 3, 192(29)
  00cd7ec  rlwinm 3, 3, 0, 27, 27
  00cd7f0  cmpwi 3, 0
  00cd7f4  bt 2, 0xcdbc8
  00cd7f8  lis 3, 13
  00cd7fc  addi 3, 3, -11132
  00cd800  lfs 2, 16(3)
  00cd804  fcmpu 0, 1, 2
  00cd808  cror 6, 0, 2
  00cd80c  bt 6, 0xcd9c4
  00cd810  lis 3, 162
  00cd814  lis 4, 13
  00cd818  addi 25, 4, -11132
  00cd81c  lwz 3, -16256(3)
  00cd820  extsw 5, 3
  00cd824  std 5, 160(1)
  00cd828  lfs 27, 20(25)
  00cd82c  lfs 25, 24(25)
  00cd830  lfd 1, 160(1)
  00cd834  fcfid 1, 1
  00cd838  fadds 2, 31, 27
  00cd83c  lfs 3, 28(25)
  00cd840  extsw 3, 3
  00cd844  frsp 1, 1
  00cd848  fadds 2, 2, 27
  00cd84c  fdivs 29, 27, 1
  00cd850  fadds 2, 2, 25
  00cd854  fmuls 28, 1, 3
  00cd858  fadds 29, 2, 29
  00cd85c  fmuls 28, 29, 28
  00cd860  bl 0x502730
  00cd864  nop
  00cd868  extsw 3, 28
  00cd86c  std 3, 160(1)
  00cd870  lfs 2, 32(25)
  00cd874  lfd 3, 160(1)
  00cd878  fcfid 3, 3
  00cd87c  cmpwi 28, -1
  00cd880  frsp 3, 3
  00cd884  fmuls 2, 3, 2
  00cd888  fdivs 1, 2, 1
  00cd88c  fsubs 27, 1, 27
  00cd890  bt 2, 0xcd8cc
  00cd894  fmr 1, 31
  00cd898  fmr 2, 25
  00cd89c  bl 0x5025e0
  00cd8a0  nop
  00cd8a4  fmr 2, 1
  00cd8a8  fmr 1, 27
  00cd8ac  bl 0x5026a0
  00cd8b0  nop
  00cd8b4  lis 3, 13
  00cd8b8  addi 3, 3, -11132
  00cd8bc  lfs 2, 36(3)
  00cd8c0  fcmpu 0, 1, 2
  00cd8c4  cror 6, 0, 2
  00cd8c8  bt 6, 0xcdb48
  00cd8cc  fctiwz 1, 28
  00cd8d0  lis 3, 162
  00cd8d4  lwz 3, -16256(3)
  00cd8d8  stfd 1, 160(1)
  00cd8dc  lwz 30, 164(1)
  00cd8e0  divw 4, 30, 3
  00cd8e4  mullw 3, 4, 3
  00cd8e8  subc 30, 30, 3
  00cd8ec  clrlwi 3, 30, 31
  00cd8f0  cmpwi 3, 0
  00cd8f4  bf 2, 0xcd970
  00cd8f8  fmr 1, 28
  00cd8fc  bl 0x502758
  00cd900  nop
  00cd904  extsw 3, 3
  00cd908  lis 4, 114
  00cd90c  std 3, 160(1)
  00cd910  lis 3, 13
  00cd914  addi 3, 3, -11132
  00cd918  lfs 2, 40(3)
  00cd91c  lfs 1, 17224(4)
  00cd920  lfd 3, 160(1)
  00cd924  lis 3, 162
  00cd928  fsubs 2, 2, 1
  00cd92c  fcfid 3, 3
  00cd930  lwz 3, -16256(3)
  00cd934  frsp 3, 3
  00cd938  fsubs 28, 28, 3
  00cd93c  fcmpu 0, 28, 2
  00cd940  cror 6, 0, 2
  00cd944  bt 6, 0xcd950
  00cd948  addic 30, 30, 1
  00cd94c  b 0xcd960
  00cd950  fcmpu 0, 1, 28
  00cd954  cror 6, 0, 2
  00cd958  bt 6, 0xcd960
  00cd95c  addic 30, 30, -1
  00cd960  addc 30, 3, 30
  00cd964  divw 4, 30, 3
  00cd968  mullw 3, 4, 3
  00cd96c  subc 30, 30, 3
  00cd970  extsw 3, 30
  00cd974  lis 4, 13
  00cd978  std 3, 160(1)
  00cd97c  addi 3, 4, -11132
  00cd980  stw 30, 116(31)
  00cd984  lfs 1, 44(3)
  00cd988  lfd 2, 160(1)
  00cd98c  fcfid 2, 2
  00cd990  frsp 2, 2
  00cd994  fmadds 1, 2, 30, 1
  00cd998  fsubs 1, 29, 1
  00cd99c  bl 0x502648
  00cd9a0  nop
  00cd9a4  fcmpu 0, 1, 26
  00cd9a8  lis 3, 162
  00cd9ac  li 30, -1
  00cd9b0  stfs 1, -14368(3)
  00cd9b4  cror 6, 0, 2
  00cd9b8  bt 6, 0xcd9c0
  00cd9bc  li 30, 1
  00cd9c0  b 0xcdb48
  00cd9c4  lwz 3, 216(29)
  00cd9c8  cmpwi 3, 0
  00cd9cc  bf 2, 0xcdb48
  00cd9d0  lwz 4, 196(29)
  00cd9d4  rlwinm 3, 4, 0, 16, 19
  00cd9d8  cmpwi 3, 0
  00cd9dc  bt 2, 0xcdb48
  00cd9e0  rlwinm 5, 4, 0, 19, 19
  00cd9e4  ori 3, 28, 0
  00cd9e8  cmpwi 5, 0
  00cd9ec  cmpwi 1, 3, -1
  00cd9f0  bt 2, 0xcda3c
  00cd9f4  bf 6, 0xcda08
  00cd9f8  lis 3, 114
  00cd9fc  addic 3, 3, 15056
  00cda00  lwz 3, 16(3)
  00cda04  b 0xcda3c
  00cda08  lis 5, 162
  00cda0c  lis 6, 162
  00cda10  sldi 7, 3, 5
  00cda14  sldi 3, 3, 2
  00cda18  lwz 5, -16252(5)
  00cda1c  subc 3, 7, 3
  00cda20  lwz 6, -15984(6)
  00cda24  slwi 5, 5, 2
  00cda28  extsw 5, 5
  00cda2c  lwzx 5, 6, 5
  00cda30  addc 3, 5, 3
  00cda34  clrldi 3, 3, 32
  00cda38  lwz 3, 16(3)
  00cda3c  rlwinm 5, 4, 0, 17, 17
  00cda40  cmpwi 1, 3, -1
  00cda44  cmpwi 5, 0
  00cda48  bt 2, 0xcda94
  00cda4c  bf 6, 0xcda60
  00cda50  lis 3, 114
  00cda54  addic 3, 3, 15056
  00cda58  lwz 3, 20(3)
  00cda5c  b 0xcda94
  00cda60  lis 5, 162
  00cda64  lis 6, 162
  00cda68  sldi 7, 3, 5
  00cda6c  sldi 3, 3, 2
  00cda70  lwz 5, -16252(5)
  00cda74  lwz 6, -15984(6)
  00cda78  subc 3, 7, 3
  00cda7c  slwi 5, 5, 2
  00cda80  extsw 5, 5
  00cda84  lwzx 5, 6, 5
  00cda88  addc 3, 5, 3
  00cda8c  clrldi 3, 3, 32
  00cda90  lwz 3, 20(3)
  00cda94  rlwinm 5, 4, 0, 16, 16
  00cda98  cmpwi 1, 3, -1
  00cda9c  cmpwi 5, 0
  00cdaa0  bt 2, 0xcdaec
  00cdaa4  bf 6, 0xcdab8
  00cdaa8  lis 3, 114
  00cdaac  addic 3, 3, 15056
  00cdab0  lwz 3, 8(3)
  00cdab4  b 0xcdaec
  00cdab8  lis 5, 162
  00cdabc  lis 6, 162
  00cdac0  sldi 7, 3, 5
  00cdac4  sldi 3, 3, 2
  00cdac8  lwz 5, -16252(5)
  00cdacc  subc 3, 7, 3
  00cdad0  lwz 6, -15984(6)
  00cdad4  slwi 5, 5, 2
  00cdad8  extsw 5, 5
  00cdadc  lwzx 5, 6, 5
  00cdae0  addc 3, 5, 3
  00cdae4  clrldi 3, 3, 32
  00cdae8  lwz 3, 8(3)
  00cdaec  rlwinm 4, 4, 0, 18, 18
  00cdaf0  cmpwi 1, 3, -1
  00cdaf4  cmpwi 4, 0
  00cdaf8  bt 2, 0xcdb44
  00cdafc  bf 6, 0xcdb10
  00cdb00  lis 3, 114
  00cdb04  addic 3, 3, 15056
  00cdb08  lwz 3, 12(3)
  00cdb0c  b 0xcdb44
  00cdb10  lis 4, 162
  00cdb14  lis 5, 162
  00cdb18  sldi 6, 3, 5
  00cdb1c  sldi 3, 3, 2
  00cdb20  lwz 4, -16252(4)
  00cdb24  lwz 5, -15984(5)
  00cdb28  subc 3, 6, 3
  00cdb2c  slwi 4, 4, 2
  00cdb30  extsw 4, 4
  00cdb34  lwzx 4, 5, 4
  00cdb38  addc 3, 4, 3
  00cdb3c  clrldi 3, 3, 32
  00cdb40  lwz 3, 12(3)
  00cdb44  stw 3, 116(31)
  00cdb48  lis 3, 162
  00cdb4c  lis 4, 162
  00cdb50  cmpwi 1, 30, 0
  00cdb54  lwz 3, -16252(3)
  00cdb58  lwz 5, -15984(4)
  00cdb5c  slwi 3, 3, 2
  00cdb60  lwz 4, 116(31)
  00cdb64  extsw 3, 3
  00cdb68  sldi 6, 4, 5
  00cdb6c  sldi 7, 4, 2
  00cdb70  lwzx 3, 5, 3
  00cdb74  subc 5, 6, 7
  00cdb78  extsw 5, 5
  00cdb7c  lwzx 5, 3, 5
  00cdb80  cmpwi 5, 0
  00cdb84  crorc 2, 6, 2
  00cdb88  bt 2, 0xcdbc8
  00cdb8c  lis 5, 162
  00cdb90  addc 30, 4, 30
  00cdb94  lwz 5, -16256(5)
  00cdb98  divw 6, 30, 5
  00cdb9c  mullw 5, 6, 5
  00cdba0  subc 30, 30, 5
  00cdba4  sldi 5, 30, 5
  00cdba8  sldi 6, 30, 2
  00cdbac  subc 5, 5, 6
  00cdbb0  extsw 5, 5
  00cdbb4  lwzx 3, 3, 5
  00cdbb8  cmpwi 3, 0
  00cdbbc  bt 2, 0xcdbc8
  00cdbc0  ori 4, 30, 0
  00cdbc4  stw 30, 116(31)
  00cdbc8  cmpw 4, 28
  00cdbcc  bt 2, 0xcdbd8
  00cdbd0  stb 26, 113(31)
  00cdbd4  b 0xcdbf4
  00cdbd8  lis 5, 114
  00cdbdc  lbz 3, 113(31)
  00cdbe0  lwz 5, 17220(5)
  00cdbe4  cmpw 3, 5
  00cdbe8  bf 0, 0xcdbf4
  00cdbec  addic 3, 3, 1
  00cdbf0  stb 3, 113(31)
  00cdbf4  lwz 3, 192(29)
  00cdbf8  cmpwi 1, 4, 0
  00cdbfc  rlwinm 3, 3, 0, 27, 27
  00cdc00  cmpwi 3, 0
  00cdc04  bf 2, 0xcddb4
  00cdc08  bt 4, 0xcdd9c
  00cdc0c  lis 3, 162
  00cdc10  lis 5, 162
  00cdc14  sldi 6, 4, 5
  00cdc18  sldi 4, 4, 2
  00cdc1c  lwz 3, -16252(3)
  00cdc20  lwz 5, -15984(5)
  00cdc24  subc 4, 6, 4
  00cdc28  slwi 3, 3, 2
  00cdc2c  extsw 3, 3
  00cdc30  lwzx 3, 5, 3
  00cdc34  addc 3, 3, 4
  00cdc38  clrldi 4, 3, 32
  00cdc3c  lwz 4, 24(4)
  00cdc40  cmpwi 4, 0
  00cdc44  cmpwi 1, 4, 24
  00cdc48  bt 2, 0xcdd9c
  00cdc4c  lwz 3, 4280(27)
  00cdc50  cmpw 3, 4
  00cdc54  bt 2, 0xcdc7c
  00cdc58  lis 5, 161
  00cdc5c  lis 3, 0
  00cdc60  addic 5, 5, -276
  00cdc64  ori 6, 3, 65535
  00cdc68  lhz 3, 160(5)
  00cdc6c  cmpw 3, 6
  00cdc70  bf 0, 0xcdc7c
  00cdc74  addic 3, 3, 1
  00cdc78  sth 3, 160(5)
  00cdc7c  lis 3, 161
  00cdc80  lis 5, 114
  00cdc84  lwz 3, -2344(3)
  00cdc88  extsw 3, 3
  00cdc8c  std 3, 160(1)
  00cdc90  lis 3, 13
  00cdc94  addi 3, 3, -11132
  00cdc98  lfs 1, 12(3)
  00cdc9c  lfs 2, -3056(5)
  00cdca0  lfd 3, 160(1)
  00cdca4  lis 5, 161
  00cdca8  fcfid 3, 3
  00cdcac  addic 5, 5, -276
  00cdcb0  lis 3, 6990
  00cdcb4  ori 6, 3, 33205
  00cdcb8  lhz 7, 162(5)
  00cdcbc  frsp 3, 3
  00cdcc0  fadds 1, 3, 1
  00cdcc4  fmuls 1, 2, 1
  00cdcc8  fctiwz 1, 1
  00cdccc  stfd 1, 160(1)
  00cdcd0  lwz 3, 164(1)
  00cdcd4  mulhw 6, 6, 3
  00cdcd8  srawi 6, 6, 6
  00cdcdc  srwi 8, 6, 31
  00cdce0  addc 6, 6, 8
  00cdce4  cmpw 6, 7
  00cdce8  bf 1, 0xcdd08
  00cdcec  lis 6, 6990
  00cdcf0  ori 6, 6, 33205
  00cdcf4  mulhw 3, 6, 3
  00cdcf8  srawi 3, 3, 6
  00cdcfc  srwi 6, 3, 31
  00cdd00  addc 3, 3, 6
  00cdd04  sth 3, 162(5)
  00cdd08  lis 3, 151
  00cdd0c  lwz 8, 164(5)
  00cdd10  li 6, 1
  00cdd14  lis 7, -32768
  00cdd18  lwz 3, -25488(3)
  00cdd1c  slw 3, 6, 3
  00cdd20  or 3, 8, 3
  00cdd24  or 3, 3, 7
  00cdd28  stw 3, 164(5)
  00cdd2c  bf 6, 0xcdd3c
  00cdd30  li 3, 1
  00cdd34  stb 3, 8181(27)
  00cdd38  b 0xcdd40
  00cdd3c  stw 4, 8376(27)
  00cdd40  sldi 3, 4, 3
  00cdd44  lis 5, 115
  00cdd48  addc 6, 3, 3
  00cdd4c  addic 5, 5, 32048
  00cdd50  addc 3, 3, 6
  00cdd54  extsw 3, 3
  00cdd58  addc 3, 5, 3
  00cdd5c  lhz 5, 8(3)
  00cdd60  cmpwi 5, 0
  00cdd64  bt 2, 0xcdd9c
  00cdd68  lis 5, 151
  00cdd6c  lhz 3, 14(3)
  00cdd70  slwi 4, 4, 2
  00cdd74  addic 5, 5, -16212
  00cdd78  extsw 4, 4
  00cdd7c  lwzx 6, 5, 4
  00cdd80  extsw 7, 6
  00cdd84  subc 8, 3, 6
  00cdd88  subc 3, 3, 7
  00cdd8c  sradi 3, 3, 63
  00cdd90  and 3, 3, 8
  00cdd94  addc 3, 6, 3
  00cdd98  stwx 3, 5, 4
  00cdd9c  lbz 3, 112(31)
  00cdda0  cmpwi 3, 0
  00cdda4  bf 1, 0xcddd0
  00cdda8  addic 3, 3, -1
  00cddac  stb 3, 112(31)
  00cddb0  b 0xcddd0
  00cddb4  lis 3, 114
  00cddb8  lwz 5, 17220(3)
  00cddbc  lbz 3, 112(31)
  00cddc0  cmpw 3, 5
  00cddc4  bf 0, 0xcddd0
  00cddc8  addic 3, 3, 1
  00cddcc  stb 3, 112(31)
  00cddd0  clrlwi 3, 3, 24
  00cddd4  cmpwi 3, 0
  00cddd8  bf 2, 0xcde70
  00cdddc  lis 3, 162
  00cdde0  lis 5, 162
  00cdde4  lwz 6, 116(31)
  00cdde8  lis 4, 114
  00cddec  addic 4, 4, 15220
  00cddf0  stw 6, -16240(3)
  00cddf4  lwz 3, 120(31)
  00cddf8  stw 3, -16244(5)
  00cddfc  lwz 3, 100(31)
  00cde00  sldi 5, 26, 7
  00cde04  sldi 6, 26, 4
  00cde08  addc 5, 5, 6
  00cde0c  extsw 5, 5
  00cde10  lwzx 5, 4, 5
  00cde14  cmpw 5, 3
  00cde18  bt 2, 0xcde2c
  00cde1c  addic 26, 26, 1
  00cde20  extsw 26, 26
  00cde24  cmpwi 26, 13
  00cde28  bt 0, 0xcde00
  00cde2c  cmpwi 26, 13
  00cde30  bf 0, 0xcde58
  00cde34  lis 4, 0
  00cde38  ori 3, 26, 0
  00cde3c  li 9, 0
  00cde40  ori 4, 4, 65535
  00cde44  li 5, 0
  00cde48  li 6, 0
  00cde4c  li 7, 0
  00cde50  li 8, 0
  00cde54  bl 0xc8444
  00cde58  li 3, -6
  00cde5c  lis 4, 346
  00cde60  lis 5, 162
  00cde64  stw 3, 108(31)
  00cde68  lwz 3, -15568(4)
  00cde6c  stw 3, -16248(5)
  00cde70  ld 0, 304(1)
  00cde74  mtlr 0
  00cde78  lfd 25, 232(1)
  00cde7c  lfd 26, 240(1)
  00cde80  lfd 27, 248(1)
  00cde84  lfd 28, 256(1)
  00cde88  lfd 29, 264(1)
  00cde8c  lfd 30, 272(1)
  00cde90  lfd 31, 280(1)
  00cde94  ld 25, 176(1)
  00cde98  ld 26, 184(1)
  00cde9c  ld 27, 192(1)
  00cdea0  ld 28, 200(1)
  00cdea4  ld 29, 208(1)
  00cdea8  ld 30, 216(1)
  00cdeac  ld 31, 224(1)
  00cdeb0  addi 1, 1, 288
  00cdeb4  blr

HudEntry_DrawIcon:   # 0xcdeb8, 0x270 bytes
  00cdeb8  stdu 1, -160(1)
  00cdebc  mflr 0
  00cdec0  std 0, 176(1)
  00cdec4  ori 9, 8, 0
  00cdec8  ori 10, 4, 0
  00cdecc  ori 8, 6, 0
  00cded0  ori 4, 7, 0
  00cded4  ori 7, 5, 0
  00cded8  ori 6, 3, 0
  00cdedc  cmpwi 10, 0
  00cdee0  ori 5, 10, 0
  00cdee4  std 31, 152(1)
  00cdee8  std 30, 144(1)
  00cdeec  std 29, 136(1)
  00cdef0  std 28, 128(1)
  00cdef4  std 27, 120(1)
  00cdef8  ori 3, 9, 0
  00cdefc  bt 0, 0xce104
  00cdf00  ori 9, 3, 0
  00cdf04  lis 3, 162
  00cdf08  lis 10, 161
  00cdf0c  addic 3, 3, -16448
  00cdf10  sldi 5, 5, 2
  00cdf14  addic 10, 10, 24396
  00cdf18  extsw 5, 5
  00cdf1c  li 31, 0
  00cdf20  lwz 3, 32(3)
  00cdf24  li 11, 0
  00cdf28  lwz 10, 28(10)
  00cdf2c  lhz 12, 72(6)
  00cdf30  rlwinm 27, 4, 0, 30, 30
  00cdf34  lwzx 3, 3, 5
  00cdf38  extsh 12, 12
  00cdf3c  lhz 6, 74(6)
  00cdf40  sldi 5, 3, 5
  00cdf44  sldi 3, 3, 2
  00cdf48  extsh 6, 6
  00cdf4c  addc 3, 5, 3
  00cdf50  addc 5, 7, 12
  00cdf54  addc 3, 10, 3
  00cdf58  clrlwi 7, 4, 31
  00cdf5c  clrldi 3, 3, 32
  00cdf60  addc 6, 8, 6
  00cdf64  subc 8, 31, 7
  00cdf68  subc 7, 11, 7
  00cdf6c  extsw 6, 6
  00cdf70  lwz 10, 24(3)
  00cdf74  cntlzw 7, 7
  00cdf78  rlwinm 11, 10, 30, 18, 31
  00cdf7c  sldi 7, 7, 58
  00cdf80  subc 31, 6, 11
  00cdf84  sradi 7, 7, 63
  00cdf88  extsw 31, 31
  00cdf8c  extsw 5, 5
  00cdf90  subc 6, 6, 31
  00cdf94  srwi 12, 10, 18
  00cdf98  and 6, 7, 6
  00cdf9c  subc 30, 5, 12
  00cdfa0  addc 6, 31, 6
  00cdfa4  cntlzw 8, 8
  00cdfa8  li 31, 0
  00cdfac  extsw 30, 30
  00cdfb0  sldi 8, 8, 58
  00cdfb4  subc 31, 31, 27
  00cdfb8  subc 5, 5, 30
  00cdfbc  sradi 7, 8, 63
  00cdfc0  cntlzw 31, 31
  00cdfc4  rlwinm 8, 10, 29, 19, 31
  00cdfc8  rlwinm 28, 10, 31, 17, 31
  00cdfcc  and 5, 7, 5
  00cdfd0  sldi 31, 31, 58
  00cdfd4  addc 7, 6, 8
  00cdfd8  addc 5, 30, 5
  00cdfdc  li 8, 0
  00cdfe0  subc 28, 28, 11
  00cdfe4  sradi 31, 31, 63
  00cdfe8  li 30, 0
  00cdfec  subc 8, 8, 27
  00cdff0  and 31, 31, 28
  00cdff4  subc 30, 30, 27
  00cdff8  li 28, 0
  00cdffc  srwi 29, 10, 17
  00ce000  cntlzw 8, 8
  00ce004  srwi 10, 10, 19
  00ce008  cntlzw 30, 30
  00ce00c  subc 28, 28, 27
  00ce010  sldi 8, 8, 58
  00ce014  addc 10, 5, 10
  00ce018  extsw 7, 7
  00ce01c  cntlzw 28, 28
  00ce020  sldi 30, 30, 58
  00ce024  subc 29, 29, 12
  00ce028  sradi 8, 8, 63
  00ce02c  extsw 10, 10
  00ce030  sldi 28, 28, 58
  00ce034  subc 6, 6, 7
  00ce038  sradi 30, 30, 63
  00ce03c  and 8, 8, 29
  00ce040  subc 5, 5, 10
  00ce044  sradi 29, 28, 63
  00ce048  and 6, 30, 6
  00ce04c  li 28, 0
  00ce050  rlwinm 4, 4, 0, 29, 29
  00ce054  and 5, 29, 5
  00ce058  addc 6, 7, 6
  00ce05c  subc 29, 28, 4
  00ce060  subc 7, 6, 11
  00ce064  cntlzw 29, 29
  00ce068  addc 5, 10, 5
  00ce06c  extsw 28, 7
  00ce070  addc 31, 11, 31
  00ce074  li 10, 0
  00ce078  sldi 7, 29, 58
  00ce07c  li 29, 0
  00ce080  slwi 11, 31, 1
  00ce084  subc 10, 10, 4
  00ce088  subc 29, 29, 4
  00ce08c  addc 8, 12, 8
  00ce090  cntlzw 10, 10
  00ce094  subc 31, 31, 11
  00ce098  sradi 7, 7, 63
  00ce09c  li 27, 0
  00ce0a0  cntlzw 29, 29
  00ce0a4  slwi 30, 8, 1
  00ce0a8  and 7, 7, 31
  00ce0ac  subc 4, 27, 4
  00ce0b0  sldi 10, 10, 58
  00ce0b4  sldi 31, 29, 58
  00ce0b8  subc 12, 5, 12
  00ce0bc  subc 8, 8, 30
  00ce0c0  addc 7, 11, 7
  00ce0c4  sradi 10, 10, 63
  00ce0c8  cntlzw 4, 4
  00ce0cc  subc 6, 6, 28
  00ce0d0  sradi 11, 31, 63
  00ce0d4  extsw 12, 12
  00ce0d8  and 8, 10, 8
  00ce0dc  sldi 4, 4, 58
  00ce0e0  and 10, 11, 6
  00ce0e4  subc 11, 5, 12
  00ce0e8  sradi 4, 4, 63
  00ce0ec  addc 6, 30, 8
  00ce0f0  and 4, 4, 11
  00ce0f4  addc 5, 28, 10
  00ce0f8  ori 8, 9, 0
  00ce0fc  addc 4, 12, 4
  00ce100  bl 0xcbe60
  00ce104  ld 0, 176(1)
  00ce108  mtlr 0
  00ce10c  ld 27, 120(1)
  00ce110  ld 28, 128(1)
  00ce114  ld 29, 136(1)
  00ce118  ld 30, 144(1)
  00ce11c  ld 31, 152(1)
  00ce120  addi 1, 1, 160
  00ce124  blr

Draw_QuickSelectHud:   # 0xce170, 0xe4c bytes
  00ce170  stdu 1, -400(1)
  00ce174  mflr 0
  00ce178  std 0, 416(1)
  00ce17c  stfd 22, 320(1)
  00ce180  stfd 23, 328(1)
  00ce184  stfd 24, 336(1)
  00ce188  stfd 25, 344(1)
  00ce18c  stfd 26, 352(1)
  00ce190  stfd 27, 360(1)
  00ce194  stfd 28, 368(1)
  00ce198  stfd 29, 376(1)
  00ce19c  stfd 30, 384(1)
  00ce1a0  stfd 31, 392(1)
  00ce1a4  std 31, 312(1)
  00ce1a8  std 22, 240(1)
  00ce1ac  ori 31, 3, 0
  00ce1b0  lis 22, 13
  00ce1b4  addi 22, 22, -7896
  00ce1b8  std 30, 304(1)
  00ce1bc  std 29, 296(1)
  00ce1c0  std 28, 288(1)
  00ce1c4  std 27, 280(1)
  00ce1c8  std 26, 272(1)
  00ce1cc  std 25, 264(1)
  00ce1d0  std 24, 256(1)
  00ce1d4  std 23, 248(1)
  00ce1d8  std 21, 232(1)
  00ce1dc  std 20, 224(1)
  00ce1e0  std 19, 216(1)
  00ce1e4  std 18, 208(1)
  00ce1e8  lbz 3, 112(31)
  00ce1ec  bl 0x502730
  00ce1f0  nop
  00ce1f4  fmr 31, 1
  00ce1f8  lis 3, 114
  00ce1fc  lwz 3, 17220(3)
  00ce200  extsw 3, 3
  00ce204  bl 0x502730
  00ce208  nop
  00ce20c  fdivs 31, 31, 1
  00ce210  lfs 29, 0(22)
  00ce214  lbz 3, 113(31)
  00ce218  fcmpu 0, 31, 29
  00ce21c  cror 6, 0, 2
  00ce220  bt 6, 0xce22c
  00ce224  fmr 31, 29
  00ce228  b 0xce240
  00ce22c  lfs 1, 4(22)
  00ce230  fcmpu 0, 31, 1
  00ce234  cror 6, 1, 2
  00ce238  bt 6, 0xce240
  00ce23c  fmr 31, 1
  00ce240  bl 0x502730
  00ce244  nop
  00ce248  fmr 30, 1
  00ce24c  lis 3, 114
  00ce250  lwz 3, 17220(3)
  00ce254  extsw 3, 3
  00ce258  bl 0x502730
  00ce25c  nop
  00ce260  fdivs 30, 30, 1
  00ce264  fcmpu 0, 30, 29
  00ce268  cror 6, 0, 2
  00ce26c  bt 6, 0xce278
  00ce270  fmr 30, 29
  00ce274  b 0xce28c
  00ce278  lfs 1, 4(22)
  00ce27c  fcmpu 0, 30, 1
  00ce280  cror 6, 1, 2
  00ce284  bt 6, 0xce28c
  00ce288  fmr 30, 1
  00ce28c  lis 3, 161
  00ce290  lis 30, 114
  00ce294  lwz 3, 1808(3)
  00ce298  lwz 4, 17260(30)
  00ce29c  divw 5, 3, 4
  00ce2a0  mullw 4, 5, 4
  00ce2a4  subc 3, 3, 4
  00ce2a8  extsw 3, 3
  00ce2ac  bl 0x502730
  00ce2b0  nop
  00ce2b4  fmr 29, 1
  00ce2b8  lwz 3, 17260(30)
  00ce2bc  extsw 3, 3
  00ce2c0  bl 0x502730
  00ce2c4  nop
  00ce2c8  fdivs 2, 29, 1
  00ce2cc  lfs 4, 8(22)
  00ce2d0  lfs 3, 12(22)
  00ce2d4  lfs 29, 16(22)
  00ce2d8  lfs 28, 20(22)
  00ce2dc  lfs 27, 24(22)
  00ce2e0  lfs 26, 28(22)
  00ce2e4  lfs 25, 32(22)
  00ce2e8  lfs 1, 40(22)
  00ce2ec  lfs 24, 36(22)
  00ce2f0  fmuls 23, 31, 1
  00ce2f4  fmr 1, 23
  00ce2f8  fmsubs 2, 2, 4, 3
  00ce2fc  fsubs 3, 29, 2
  00ce300  fsubs 4, 28, 2
  00ce304  fsub 5, 2, 3
  00ce308  fsel 2, 5, 3, 2
  00ce30c  fsub 3, 4, 2
  00ce310  fsel 2, 3, 4, 2
  00ce314  fmuls 3, 2, 2
  00ce318  fmuls 4, 3, 2
  00ce31c  fmuls 5, 3, 4
  00ce320  fmadds 2, 4, 27, 2
  00ce324  fmuls 4, 3, 5
  00ce328  fmadds 2, 5, 26, 2
  00ce32c  fmuls 3, 3, 4
  00ce330  fmadds 2, 4, 25, 2
  00ce334  fmadds 22, 3, 24, 2
  00ce338  bl 0x502758
  00ce33c  nop
  00ce340  lfs 1, 44(22)
  00ce344  ori 30, 3, 0
  00ce348  lfs 2, 48(22)
  00ce34c  fmadds 1, 22, 1, 2
  00ce350  fmuls 1, 23, 1
  00ce354  bl 0x502758
  00ce358  nop
  00ce35c  lwz 27, 80(31)
  00ce360  lwz 4, 96(31)
  00ce364  ori 29, 3, 0
  00ce368  lwz 28, 84(31)
  00ce36c  extsw 27, 27
  00ce370  clrlwi 6, 4, 31
  00ce374  lwz 3, 88(31)
  00ce378  extsw 28, 28
  00ce37c  lwz 5, 92(31)
  00ce380  cmpwi 6, 0
  00ce384  bf 2, 0xce3a0
  00ce388  rlwinm 6, 4, 0, 30, 30
  00ce38c  cmpwi 6, 0
  00ce390  bf 2, 0xce3a0
  00ce394  srawi 5, 5, 1
  00ce398  subc 28, 28, 5
  00ce39c  extsw 28, 28
  00ce3a0  rlwinm 5, 4, 0, 28, 28
  00ce3a4  li 6, 0
  00ce3a8  srawi 7, 3, 1
  00ce3ac  subc 5, 6, 5
  00ce3b0  subc 3, 27, 3
  00ce3b4  cntlzw 5, 5
  00ce3b8  subc 6, 27, 7
  00ce3bc  sldi 5, 5, 58
  00ce3c0  rlwinm 4, 4, 0, 29, 29
  00ce3c4  subc 6, 6, 3
  00ce3c8  li 7, 0
  00ce3cc  sradi 5, 5, 63
  00ce3d0  subc 4, 7, 4
  00ce3d4  and 5, 5, 6
  00ce3d8  lis 8, 114
  00ce3dc  lis 6, 114
  00ce3e0  addc 3, 3, 5
  00ce3e4  cntlzw 4, 4
  00ce3e8  extsw 3, 3
  00ce3ec  sldi 4, 4, 58
  00ce3f0  subc 3, 3, 27
  00ce3f4  lwz 5, 14640(8)
  00ce3f8  sradi 4, 4, 63
  00ce3fc  lwz 6, 14644(6)
  00ce400  srawi 5, 5, 1
  00ce404  and 18, 4, 3
  00ce408  li 3, 0
  00ce40c  addze 5, 5
  00ce410  srawi 4, 6, 1
  00ce414  lis 20, 162
  00ce418  lis 19, 0
  00ce41c  addze 26, 4
  00ce420  ori 21, 3, 0
  00ce424  addc 18, 27, 18
  00ce428  extsw 27, 5
  00ce42c  addic 20, 20, -16448
  00ce430  extsw 26, 26
  00ce434  ori 4, 21, 0
  00ce438  ori 19, 19, 65535
  00ce43c  lis 5, 0
  00ce440  ori 6, 5, 59700
  00ce444  lwz 5, 28(20)
  00ce448  lhzx 7, 5, 4
  00ce44c  cmpw 1, 7, 6
  00ce450  cmpw 7, 19
  00ce454  cror 2, 2, 6
  00ce458  bt 2, 0xce468
  00ce45c  addic 4, 4, 8
  00ce460  addic 3, 3, 1
  00ce464  b 0xce43c
  00ce468  slwi 3, 3, 3
  00ce46c  extsw 4, 3
  00ce470  lhzx 4, 5, 4
  00ce474  cmpw 4, 19
  00ce478  bf 2, 0xce484
  00ce47c  ori 3, 21, 0
  00ce480  b 0xce4a0
  00ce484  addc 5, 5, 3
  00ce488  ori 3, 21, 0
  00ce48c  clrldi 5, 5, 32
  00ce490  lhz 4, 2(5)
  00ce494  cmpwi 4, 0
  00ce498  bf 1, 0xce4a0
  00ce49c  lhz 3, 4(5)
  00ce4a0  lis 25, 161
  00ce4a4  lwz 7, 32(20)
  00ce4a8  slwi 3, 3, 2
  00ce4ac  addic 25, 25, 24396
  00ce4b0  ori 5, 28, 0
  00ce4b4  ori 6, 27, 0
  00ce4b8  ori 4, 18, 0
  00ce4bc  lwz 8, 28(25)
  00ce4c0  lwzx 3, 7, 3
  00ce4c4  ori 7, 26, 0
  00ce4c8  sldi 9, 3, 5
  00ce4cc  sldi 3, 3, 2
  00ce4d0  addc 3, 9, 3
  00ce4d4  addc 3, 8, 3
  00ce4d8  ori 8, 30, 0
  00ce4dc  clrldi 3, 3, 32
  00ce4e0  bl 0xcbe60
  00ce4e4  lis 5, 114
  00ce4e8  lwz 4, 28(20)
  00ce4ec  lis 6, 114
  00ce4f0  lwz 7, 28(25)
  00ce4f4  lwz 8, 32(20)
  00ce4f8  ori 9, 4, 0
  00ce4fc  ori 3, 21, 0
  00ce500  lwz 5, 14640(5)
  00ce504  lwz 6, 14644(6)
  00ce508  lis 10, 0
  00ce50c  lhz 11, 0(9)
  00ce510  ori 10, 10, 59700
  00ce514  cmpw 11, 19
  00ce518  cmpw 1, 11, 10
  00ce51c  cror 2, 2, 6
  00ce520  bt 2, 0xce530
  00ce524  addic 9, 9, 8
  00ce528  addic 3, 3, 1
  00ce52c  b 0xce508
  00ce530  slwi 3, 3, 3
  00ce534  extsw 9, 3
  00ce538  lhzx 9, 4, 9
  00ce53c  cmpw 9, 19
  00ce540  bf 2, 0xce54c
  00ce544  ori 3, 21, 0
  00ce548  b 0xce568
  00ce54c  addc 4, 4, 3
  00ce550  ori 3, 21, 0
  00ce554  clrldi 4, 4, 32
  00ce558  lhz 9, 2(4)
  00ce55c  cmpwi 9, 0
  00ce560  bf 1, 0xce568
  00ce564  lhz 3, 4(4)
  00ce568  slwi 3, 3, 2
  00ce56c  addc 4, 5, 18
  00ce570  addc 5, 6, 28
  00ce574  ori 9, 7, 0
  00ce578  neg 24, 27
  00ce57c  lwzx 3, 8, 3
  00ce580  neg 23, 26
  00ce584  extsw 4, 4
  00ce588  sldi 6, 3, 5
  00ce58c  sldi 3, 3, 2
  00ce590  extsw 5, 5
  00ce594  addc 3, 6, 3
  00ce598  ori 6, 24, 0
  00ce59c  addc 3, 9, 3
  00ce5a0  ori 7, 23, 0
  00ce5a4  ori 8, 30, 0
  00ce5a8  clrldi 3, 3, 32
  00ce5ac  bl 0xcbe60
  00ce5b0  lis 6, 114
  00ce5b4  lwz 5, 28(20)
  00ce5b8  lwz 7, 28(25)
  00ce5bc  ori 3, 21, 0
  00ce5c0  lwz 8, 32(20)
  00ce5c4  ori 9, 5, 0
  00ce5c8  lwz 6, 14640(6)
  00ce5cc  lis 4, 0
  00ce5d0  lhz 10, 0(9)
  00ce5d4  ori 4, 4, 59700
  00ce5d8  cmpw 10, 19
  00ce5dc  cmpw 1, 10, 4
  00ce5e0  cror 2, 2, 6
  00ce5e4  bt 2, 0xce5f4
  00ce5e8  addic 9, 9, 8
  00ce5ec  addic 3, 3, 1
  00ce5f0  b 0xce5cc
  00ce5f4  slwi 3, 3, 3
  00ce5f8  extsw 4, 3
  00ce5fc  lhzx 4, 5, 4
  00ce600  cmpw 4, 19
  00ce604  bf 2, 0xce610
  00ce608  ori 5, 21, 0
  00ce60c  b 0xce62c
  00ce610  addc 3, 5, 3
  00ce614  ori 5, 21, 0
  00ce618  clrldi 3, 3, 32
  00ce61c  lhz 4, 2(3)
  00ce620  cmpwi 4, 0
  00ce624  bf 1, 0xce62c
  00ce628  lhz 5, 4(3)
  00ce62c  ori 3, 7, 0
  00ce630  slwi 7, 5, 2
  00ce634  addc 4, 6, 18
  00ce638  ori 5, 28, 0
  00ce63c  extsw 4, 4
  00ce640  ori 6, 24, 0
  00ce644  lwzx 8, 8, 7
  00ce648  ori 7, 26, 0
  00ce64c  sldi 9, 8, 5
  00ce650  sldi 8, 8, 2
  00ce654  addc 9, 9, 8
  00ce658  ori 8, 30, 0
  00ce65c  addc 3, 3, 9
  00ce660  clrldi 3, 3, 32
  00ce664  bl 0xcbe60
  00ce668  lis 26, 114
  00ce66c  lwz 7, 28(20)
  00ce670  ori 6, 21, 0
  00ce674  lwz 3, 28(25)
  00ce678  lwz 5, 32(20)
  00ce67c  ori 8, 7, 0
  00ce680  lwz 26, 14644(26)
  00ce684  lis 4, 0
  00ce688  lhz 9, 0(8)
  00ce68c  ori 4, 4, 59700
  00ce690  cmpw 9, 19
  00ce694  cmpw 1, 9, 4
  00ce698  cror 2, 2, 6
  00ce69c  bt 2, 0xce6ac
  00ce6a0  addic 8, 8, 8
  00ce6a4  addic 6, 6, 1
  00ce6a8  b 0xce684
  00ce6ac  slwi 6, 6, 3
  00ce6b0  extsw 4, 6
  00ce6b4  lhzx 4, 7, 4
  00ce6b8  cmpw 4, 19
  00ce6bc  bf 2, 0xce6c8
  00ce6c0  ori 7, 21, 0
  00ce6c4  b 0xce6e4
  00ce6c8  addc 6, 7, 6
  00ce6cc  ori 7, 21, 0
  00ce6d0  clrldi 6, 6, 32
  00ce6d4  lhz 4, 2(6)
  00ce6d8  cmpwi 4, 0
  00ce6dc  bf 1, 0xce6e4
  00ce6e0  lhz 7, 4(6)
  00ce6e4  ori 4, 5, 0
  00ce6e8  slwi 6, 7, 2
  00ce6ec  addc 5, 26, 28
  00ce6f0  ori 8, 30, 0
  00ce6f4  extsw 5, 5
  00ce6f8  lwzx 6, 4, 6
  00ce6fc  ori 4, 18, 0
  00ce700  sldi 7, 6, 5
  00ce704  sldi 6, 6, 2
  00ce708  addc 7, 7, 6
  00ce70c  ori 6, 27, 0
  00ce710  addc 3, 3, 7
  00ce714  ori 7, 23, 0
  00ce718  clrldi 3, 3, 32
  00ce71c  bl 0xcbe60
  00ce720  lis 3, 162
  00ce724  ori 27, 21, 0
  00ce728  lwz 3, -16256(3)
  00ce72c  cmpwi 3, 0
  00ce730  bf 1, 0xceab8
  00ce734  ori 23, 21, 0
  00ce738  extsw 4, 27
  00ce73c  extsw 3, 3
  00ce740  std 4, 192(1)
  00ce744  lfs 1, 52(22)
  00ce748  lfs 3, 56(22)
  00ce74c  lfd 2, 192(1)
  00ce750  std 3, 192(1)
  00ce754  fcfid 2, 2
  00ce758  frsp 2, 2
  00ce75c  fmuls 1, 2, 1
  00ce760  lfd 2, 192(1)
  00ce764  fcfid 2, 2
  00ce768  fmuls 1, 1, 3
  00ce76c  frsp 2, 2
  00ce770  fdivs 1, 1, 2
  00ce774  lfs 2, 60(22)
  00ce778  fsubs 1, 1, 3
  00ce77c  bl 0x502578
  00ce780  nop
  00ce784  lfs 2, 64(22)
  00ce788  fsubs 3, 29, 1
  00ce78c  fadds 2, 1, 2
  00ce790  lis 3, 114
  00ce794  lis 4, 114
  00ce798  lis 8, 114
  00ce79c  fsub 4, 1, 3
  00ce7a0  fsubs 5, 29, 2
  00ce7a4  fsubs 6, 28, 2
  00ce7a8  fsel 3, 4, 3, 1
  00ce7ac  fsubs 1, 28, 1
  00ce7b0  fsub 4, 2, 5
  00ce7b4  fsub 7, 1, 3
  00ce7b8  fsel 2, 4, 5, 2
  00ce7bc  fsel 1, 7, 1, 3
  00ce7c0  fsub 3, 6, 2
  00ce7c4  fmuls 4, 1, 1
  00ce7c8  fsel 2, 3, 6, 2
  00ce7cc  fmuls 3, 4, 1
  00ce7d0  fmuls 5, 2, 2
  00ce7d4  fmuls 6, 4, 3
  00ce7d8  fmuls 7, 5, 2
  00ce7dc  fmadds 1, 3, 27, 1
  00ce7e0  lfs 3, 17228(3)
  00ce7e4  lis 3, 114
  00ce7e8  fmuls 8, 4, 6
  00ce7ec  fmuls 9, 5, 7
  00ce7f0  fmadds 2, 7, 27, 2
  00ce7f4  fmadds 1, 6, 26, 1
  00ce7f8  lfs 7, 17276(3)
  00ce7fc  lwz 3, 14648(4)
  00ce800  addc 7, 3, 18
  00ce804  lwz 3, 116(31)
  00ce808  fmuls 4, 4, 8
  00ce80c  fmuls 6, 5, 9
  00ce810  fmadds 2, 9, 26, 2
  00ce814  fmadds 1, 8, 25, 1
  00ce818  lwz 4, 28(20)
  00ce81c  cmpw 3, 27
  00ce820  lwz 5, 28(25)
  00ce824  lwz 6, 32(20)
  00ce828  lwz 8, 14652(8)
  00ce82c  addc 8, 8, 28
  00ce830  fmuls 5, 5, 6
  00ce834  fmadds 2, 6, 25, 2
  00ce838  fmadds 1, 4, 24, 1
  00ce83c  fmadds 2, 5, 24, 2
  00ce840  fmuls 1, 3, 1
  00ce844  fmuls 2, 3, 2
  00ce848  fctiwz 1, 1
  00ce84c  fmuls 2, 2, 7
  00ce850  fctiwz 2, 2
  00ce854  stfd 2, 192(1)
  00ce858  lwz 9, 196(1)
  00ce85c  stfd 1, 192(1)
  00ce860  addc 26, 7, 9
  00ce864  lwz 7, 196(1)
  00ce868  extsw 26, 26
  00ce86c  addc 24, 8, 7
  00ce870  extsw 24, 24
  00ce874  bf 2, 0xce94c
  00ce878  lis 7, 162
  00ce87c  lis 8, 162
  00ce880  lwz 7, -16252(7)
  00ce884  lwz 8, -15984(8)
  00ce888  slwi 7, 7, 2
  00ce88c  extsw 7, 7
  00ce890  lwzx 7, 8, 7
  00ce894  lwzx 7, 7, 23
  00ce898  cmpwi 7, 0
  00ce89c  bt 2, 0xce94c
  00ce8a0  lis 7, 0
  00ce8a4  ori 3, 21, 0
  00ce8a8  ori 7, 7, 59804
  00ce8ac  ori 8, 4, 0
  00ce8b0  lhz 9, 0(8)
  00ce8b4  cmpw 1, 9, 7
  00ce8b8  cmpw 9, 19
  00ce8bc  cror 2, 2, 6
  00ce8c0  bt 2, 0xce8d0
  00ce8c4  addic 8, 8, 8
  00ce8c8  addic 3, 3, 1
  00ce8cc  b 0xce8b0
  00ce8d0  slwi 3, 3, 3
  00ce8d4  extsw 7, 3
  00ce8d8  lhzx 7, 4, 7
  00ce8dc  cmpw 7, 19
  00ce8e0  bf 2, 0xce8ec
  00ce8e4  ori 4, 21, 0
  00ce8e8  b 0xce908
  00ce8ec  addc 3, 4, 3
  00ce8f0  ori 4, 21, 0
  00ce8f4  clrldi 3, 3, 32
  00ce8f8  lhz 7, 2(3)
  00ce8fc  cmpwi 7, 0
  00ce900  bf 1, 0xce908
  00ce904  lhz 4, 4(3)
  00ce908  slwi 3, 4, 2
  00ce90c  addic 7, 24, -19
  00ce910  addic 4, 26, -19
  00ce914  extsw 7, 7
  00ce918  extsw 4, 4
  00ce91c  lwzx 3, 6, 3
  00ce920  ori 8, 29, 0
  00ce924  sldi 6, 3, 5
  00ce928  sldi 3, 3, 2
  00ce92c  addc 3, 6, 3
  00ce930  li 6, 38
  00ce934  addc 3, 5, 3
  00ce938  ori 5, 7, 0
  00ce93c  clrldi 3, 3, 32
  00ce940  li 7, 38
  00ce944  bl 0xcbe60
  00ce948  lwz 3, 116(31)
  00ce94c  lis 4, 162
  00ce950  lis 5, 162
  00ce954  cmpw 1, 27, 3
  00ce958  lwz 3, -16252(4)
  00ce95c  lwz 4, -15984(5)
  00ce960  ori 5, 3, 0
  00ce964  ori 3, 4, 0
  00ce968  slwi 4, 5, 2
  00ce96c  extsw 4, 4
  00ce970  lwzx 4, 3, 4
  00ce974  lwzx 4, 4, 23
  00ce978  cmpwi 4, 0
  00ce97c  bt 2, 0xceaa0
  00ce980  ori 4, 30, 0
  00ce984  bt 6, 0xce9c4
  00ce988  extsw 3, 30
  00ce98c  std 3, 192(1)
  00ce990  lis 3, 114
  00ce994  lfs 1, 17272(3)
  00ce998  lfd 2, 192(1)
  00ce99c  fcfid 2, 2
  00ce9a0  frsp 2, 2
  00ce9a4  fmuls 1, 2, 1
  00ce9a8  bl 0x502758
  00ce9ac  nop
  00ce9b0  lis 5, 162
  00ce9b4  lis 6, 162
  00ce9b8  ori 4, 3, 0
  00ce9bc  lwz 3, -15984(5)
  00ce9c0  lwz 5, -16252(6)
  00ce9c4  slwi 5, 5, 2
  00ce9c8  lis 6, 151
  00ce9cc  extsw 5, 5
  00ce9d0  li 7, 0
  00ce9d4  li 8, 0
  00ce9d8  li 9, 4
  00ce9dc  lwzx 3, 5, 3
  00ce9e0  subc 8, 8, 9
  00ce9e4  addic 5, 6, -25432
  00ce9e8  addc 6, 3, 23
  00ce9ec  clrldi 6, 6, 32
  00ce9f0  lwz 6, 24(6)
  00ce9f4  lwzx 3, 3, 23
  00ce9f8  extsw 6, 6
  00ce9fc  lbzx 5, 5, 6
  00cea00  subc 5, 7, 5
  00cea04  cntlzw 5, 5
  00cea08  sldi 6, 5, 58
  00cea0c  ori 5, 21, 0
  00cea10  sradi 7, 6, 63
  00cea14  ori 6, 5, 0
  00cea18  and 7, 7, 8
  00cea1c  addc 7, 9, 7
  00cea20  lwz 8, 28(20)
  00cea24  lhzx 9, 8, 6
  00cea28  cmpw 1, 9, 3
  00cea2c  cmpw 9, 19
  00cea30  cror 2, 2, 6
  00cea34  bt 2, 0xcea44
  00cea38  addic 6, 6, 8
  00cea3c  addic 5, 5, 1
  00cea40  b 0xcea20
  00cea44  slwi 5, 5, 3
  00cea48  extsw 3, 5
  00cea4c  lhzx 3, 8, 3
  00cea50  cmpw 3, 19
  00cea54  bf 2, 0xcea60
  00cea58  ori 8, 21, 0
  00cea5c  b 0xcea80
  00cea60  addc 3, 8, 5
  00cea64  ori 8, 21, 0
  00cea68  clrldi 3, 3, 32
  00cea6c  lhz 5, 2(3)
  00cea70  cmpw 7, 5
  00cea74  bf 0, 0xcea80
  00cea78  lhz 8, 4(3)
  00cea7c  addc 8, 8, 7
  00cea80  ori 9, 4, 0
  00cea84  ori 4, 8, 0
  00cea88  ori 3, 31, 0
  00cea8c  ori 5, 26, 0
  00cea90  ori 6, 24, 0
  00cea94  li 7, 1
  00cea98  ori 8, 9, 0
  00cea9c  bl 0xcdeb8
  00ceaa0  lis 3, 162
  00ceaa4  addic 27, 27, 1
  00ceaa8  addic 23, 23, 28
  00ceaac  lwz 3, -16256(3)
  00ceab0  cmpw 27, 3
  00ceab4  bt 0, 0xce738
  00ceab8  lwz 23, 116(31)
  00ceabc  cmpwi 23, 0
  00ceac0  bt 0, 0xcef44
  00ceac4  lis 3, 162
  00ceac8  lis 4, 162
  00ceacc  sldi 29, 23, 5
  00cead0  sldi 5, 23, 2
  00cead4  lwz 3, -16252(3)
  00cead8  lwz 4, -15984(4)
  00ceadc  subc 29, 29, 5
  00ceae0  slwi 3, 3, 2
  00ceae4  extsw 5, 29
  00ceae8  extsw 3, 3
  00ceaec  lwzx 3, 4, 3
  00ceaf0  lwzx 3, 3, 5
  00ceaf4  cmpwi 3, 0
  00ceaf8  bt 2, 0xcef44
  00ceafc  fmuls 31, 31, 30
  00ceb00  lis 3, 162
  00ceb04  lis 4, 114
  00ceb08  lwz 3, -14364(3)
  00ceb0c  lwz 4, 17240(4)
  00ceb10  extsw 3, 3
  00ceb14  extsw 4, 4
  00ceb18  fmr 1, 31
  00ceb1c  bl 0x5027bc
  00ceb20  nop
  00ceb24  lis 24, 151
  00ceb28  slwi 23, 23, 2
  00ceb2c  addic 24, 24, -15908
  00ceb30  extsw 23, 23
  00ceb34  ori 30, 3, 0
  00ceb38  lis 22, 115
  00ceb3c  addic 22, 22, 32048
  00ceb40  lwzx 6, 24, 23
  00ceb44  sldi 4, 6, 3
  00ceb48  addc 5, 4, 4
  00ceb4c  addc 3, 4, 5
  00ceb50  extsw 4, 3
  00ceb54  addc 4, 22, 4
  00ceb58  lhz 3, 8(4)
  00ceb5c  cmpwi 3, 0
  00ceb60  ori 3, 6, 0
  00ceb64  bt 2, 0xcec6c
  00ceb68  lis 5, 151
  00ceb6c  slwi 3, 3, 2
  00ceb70  addic 5, 5, -16212
  00ceb74  extsw 6, 3
  00ceb78  lis 7, 101
  00ceb7c  addic 3, 1, 112
  00ceb80  lwzx 5, 5, 6
  00ceb84  lhz 8, 14(4)
  00ceb88  extsw 27, 5
  00ceb8c  addic 4, 7, 8464
  00ceb90  ori 6, 8, 0
  00ceb94  ori 5, 27, 0
  00ceb98  bl 0x5cd2a8
  00ceb9c  nop
  00ceba0  cmpwi 27, 0
  00ceba4  bt 2, 0xcebd4
  00ceba8  lis 3, 114
  00cebac  fmr 1, 31
  00cebb0  lis 4, 114
  00cebb4  lwz 3, 17252(3)
  00cebb8  lwz 4, 17256(4)
  00cebbc  extsw 3, 3
  00cebc0  extsw 4, 4
  00cebc4  bl 0x5027bc
  00cebc8  nop
  00cebcc  ori 27, 3, 0
  00cebd0  b 0xcebfc
  00cebd4  lis 3, 114
  00cebd8  lis 4, 114
  00cebdc  fmr 1, 31
  00cebe0  lwz 3, 17244(3)
  00cebe4  lwz 4, 17248(4)
  00cebe8  extsw 3, 3
  00cebec  extsw 4, 4
  00cebf0  bl 0x5027bc
  00cebf4  nop
  00cebf8  ori 27, 3, 0
  00cebfc  lis 26, 114
  00cec00  lis 25, 114
  00cec04  addic 20, 1, 112
  00cec08  ori 5, 30, 0
  00cec0c  ori 6, 20, 0
  00cec10  lwz 3, 14648(26)
  00cec14  li 7, -1
  00cec18  lwz 4, 14652(25)
  00cec1c  addc 3, 3, 18
  00cec20  addc 4, 4, 28
  00cec24  addic 3, 3, 1
  00cec28  addic 4, 4, 13
  00cec2c  extsw 3, 3
  00cec30  extsw 4, 4
  00cec34  bl 0x70514
  00cec38  nop
  00cec3c  lwz 3, 14648(26)
  00cec40  lwz 4, 14652(25)
  00cec44  ori 5, 27, 0
  00cec48  addc 3, 3, 18
  00cec4c  addc 4, 4, 28
  00cec50  extsw 3, 3
  00cec54  addic 4, 4, 12
  00cec58  ori 6, 20, 0
  00cec5c  li 7, -1
  00cec60  extsw 4, 4
  00cec64  bl 0x70514
  00cec68  nop
  00cec6c  lis 3, 114
  00cec70  lis 4, 114
  00cec74  fmr 1, 31
  00cec78  ori 26, 29, 0
  00cec7c  lwz 3, 17232(3)
  00cec80  lwz 4, 17236(4)
  00cec84  extsw 3, 3
  00cec88  extsw 4, 4
  00cec8c  bl 0x5027bc
  00cec90  nop
  00cec94  lis 4, 162
  00cec98  lis 5, 162
  00cec9c  ori 29, 3, 0
  00ceca0  lis 6, 151
  00ceca4  ori 27, 21, 0
  00ceca8  lwz 4, -16252(4)
  00cecac  lwz 5, -15984(5)
  00cecb0  slwi 4, 4, 2
  00cecb4  extsw 4, 4
  00cecb8  lwzx 3, 5, 4
  00cecbc  addic 4, 6, -25432
  00cecc0  addc 3, 3, 26
  00cecc4  clrldi 3, 3, 32
  00cecc8  lwz 3, 24(3)
  00ceccc  extsw 5, 3
  00cecd0  sldi 6, 3, 4
  00cecd4  subc 3, 3, 6
  00cecd8  sldi 3, 3, 2
  00cecdc  lbzx 4, 4, 5
  00cece0  subc 3, 6, 3
  00cece4  cmpwi 4, 0
  00cece8  extsw 3, 3
  00cecec  bt 2, 0xced10
  00cecf0  lis 4, 114
  00cecf4  addic 4, 4, 4168
  00cecf8  lhzx 3, 4, 3
  00cecfc  extsh 3, 3
  00ced00  bl 0x7b740
  00ced04  nop
  00ced08  ori 26, 3, 0
  00ced0c  b 0xced2c
  00ced10  lis 4, 114
  00ced14  addic 4, 4, 4166
  00ced18  lhzx 3, 4, 3
  00ced1c  extsh 3, 3
  00ced20  bl 0x7b740
  00ced24  nop
  00ced28  ori 26, 3, 0
  00ced2c  cmpwi 26, 0
  00ced30  bt 2, 0xcef44
  00ced34  ori 3, 26, 0
  00ced38  bl 0x5c8510
  00ced3c  nop
  00ced40  cmpwi 3, 0
  00ced44  bt 2, 0xcef44
  00ced48  ori 3, 26, 0
  00ced4c  bl 0x5c8510
  00ced50  nop
  00ced54  cmpwi 3, 0
  00ced58  ori 6, 26, 0
  00ced5c  ori 4, 21, 0
  00ced60  bf 1, 0xced9c
  00ced64  ori 5, 6, 0
  00ced68  addic 6, 5, 1
  00ced6c  lbz 7, 0(6)
  00ced70  cmpwi 7, 45
  00ced74  bf 2, 0xced90
  00ced78  addic 27, 4, 2
  00ced7c  addic 25, 5, 2
  00ced80  extsw 27, 27
  00ced84  cmpwi 27, 0
  00ced88  bt 2, 0xced9c
  00ced8c  b 0xcedd8
  00ced90  addic 4, 4, 1
  00ced94  cmpw 3, 4
  00ced98  bt 1, 0xced64
  00ced9c  cmpwi 3, 0
  00ceda0  ori 25, 26, 0
  00ceda4  bf 1, 0xcedd8
  00ceda8  ori 4, 25, 0
  00cedac  addic 25, 4, 1
  00cedb0  lbz 5, 0(25)
  00cedb4  cmpwi 5, 32
  00cedb8  bf 2, 0xcedcc
  00cedbc  addic 27, 21, 1
  00cedc0  addic 25, 4, 2
  00cedc4  extsw 27, 27
  00cedc8  b 0xcedd8
  00cedcc  addic 21, 21, 1
  00cedd0  cmpw 3, 21
  00cedd4  bt 1, 0xceda8
  00cedd8  lis 3, 114
  00ceddc  lwzx 4, 24, 23
  00cede0  cmpwi 1, 27, 0
  00cede4  sldi 4, 4, 3
  00cede8  addc 5, 4, 4
  00cedec  lwz 3, 14652(3)
  00cedf0  addc 4, 4, 5
  00cedf4  addc 28, 3, 28
  00cedf8  extsw 3, 4
  00cedfc  addc 3, 22, 3
  00cee00  lhz 3, 8(3)
  00cee04  cmpwi 3, 0
  00cee08  bt 2, 0xcee18
  00cee0c  lis 3, 114
  00cee10  lwz 3, 17264(3)
  00cee14  b 0xcee30
  00cee18  bt 6, 0xcee28
  00cee1c  lis 3, 114
  00cee20  lwz 3, 17268(3)
  00cee24  b 0xcee30
  00cee28  lis 3, 162
  00cee2c  lwz 3, -14360(3)
  00cee30  addc 28, 3, 28
  00cee34  cmpwi 27, 0
  00cee38  extsw 28, 28
  00cee3c  addic 3, 28, 1
  00cee40  extsw 3, 3
  00cee44  bt 2, 0xceef4
  00cee48  lis 24, 114
  00cee4c  ori 4, 3, 0
  00cee50  ori 5, 30, 0
  00cee54  ori 6, 26, 0
  00cee58  ori 7, 27, 0
  00cee5c  lwz 3, 14648(24)
  00cee60  addc 3, 3, 18
  00cee64  addic 3, 3, 1
  00cee68  extsw 3, 3
  00cee6c  bl 0x70514
  00cee70  nop
  00cee74  lwz 3, 14648(24)
  00cee78  ori 4, 28, 0
  00cee7c  ori 5, 29, 0
  00cee80  addc 3, 3, 18
  00cee84  ori 6, 26, 0
  00cee88  extsw 3, 3
  00cee8c  ori 7, 27, 0
  00cee90  bl 0x70514
  00cee94  nop
  00cee98  addic 3, 28, 16
  00cee9c  lwz 4, 14648(24)
  00ceea0  ori 5, 30, 0
  00ceea4  extsw 28, 3
  00ceea8  addc 3, 4, 18
  00ceeac  addic 4, 28, 1
  00ceeb0  addic 3, 3, 1
  00ceeb4  ori 6, 25, 0
  00ceeb8  extsw 3, 3
  00ceebc  li 7, -1
  00ceec0  extsw 4, 4
  00ceec4  bl 0x70514
  00ceec8  nop
  00ceecc  lwz 3, 14648(24)
  00ceed0  ori 4, 28, 0
  00ceed4  ori 5, 29, 0
  00ceed8  addc 3, 3, 18
  00ceedc  ori 6, 25, 0
  00ceee0  li 7, -1
  00ceee4  extsw 3, 3
  00ceee8  bl 0x70514
  00ceeec  nop
  00ceef0  b 0xcef44
  00ceef4  lis 27, 114
  00ceef8  ori 4, 3, 0
  00ceefc  ori 5, 30, 0
  00cef00  ori 6, 26, 0
  00cef04  li 7, -1
  00cef08  lwz 3, 14648(27)
  00cef0c  addc 3, 3, 18
  00cef10  addic 3, 3, 1
  00cef14  extsw 3, 3
  00cef18  bl 0x70514
  00cef1c  nop
  00cef20  lwz 3, 14648(27)
  00cef24  ori 4, 28, 0
  00cef28  addc 3, 3, 18
  00cef2c  ori 5, 29, 0
  00cef30  ori 6, 26, 0
  00cef34  extsw 3, 3
  00cef38  li 7, -1
  00cef3c  bl 0x70514
  00cef40  nop
  00cef44  lwz 3, 88(31)
  00cef48  extsw 3, 3
  00cef4c  ld 0, 416(1)
  00cef50  mtlr 0
  00cef54  lfd 22, 320(1)
  00cef58  lfd 23, 328(1)
  00cef5c  lfd 24, 336(1)
  00cef60  lfd 25, 344(1)
  00cef64  lfd 26, 352(1)
  00cef68  lfd 27, 360(1)
  00cef6c  lfd 28, 368(1)
  00cef70  lfd 29, 376(1)
  00cef74  lfd 30, 384(1)
  00cef78  lfd 31, 392(1)
  00cef7c  ld 18, 208(1)
  00cef80  ld 19, 216(1)
  00cef84  ld 20, 224(1)
  00cef88  ld 21, 232(1)
  00cef8c  ld 22, 240(1)
  00cef90  ld 23, 248(1)
  00cef94  ld 24, 256(1)
  00cef98  ld 25, 264(1)
  00cef9c  ld 26, 272(1)
  00cefa0  ld 27, 280(1)
  00cefa4  ld 28, 288(1)
  00cefa8  ld 29, 296(1)
  00cefac  ld 30, 304(1)
  00cefb0  ld 31, 312(1)
  00cefb4  addi 1, 1, 400
  00cefb8  blr

ClankCommandHud_Init:   # 0xcefc0, 0x8c bytes
  00cefc0  lis 4, 162
  00cefc4  vspltisw 3, -1
  00cefc8  li 5, 4
  00cefcc  lis 8, 114
  00cefd0  lis 7, 114
  00cefd4  lis 6, 13
  00cefd8  stw 5, -16256(4)
  00cefdc  li 4, -2
  00cefe0  lwz 5, 14640(8)
  00cefe4  addi 6, 6, -4164
  00cefe8  lis 8, 114
  00cefec  vslw 3, 3, 3
  00ceff0  stw 5, 88(3)
  00ceff4  lwz 7, 14644(7)
  00ceff8  stw 4, 116(3)
  00ceffc  li 5, -3056
  00cf000  stw 7, 92(3)
  00cf004  lis 4, 114
  00cf008  lvlx 2, 0, 6
  00cf00c  addic 4, 4, 15116
  00cf010  vspltw 2, 2, 0
  00cf014  lis 6, 162
  00cf018  lvlx 4, 5, 8
  00cf01c  lis 5, 162
  00cf020  vmaddfp 2, 4, 2, 3
  00cf024  stw 4, -15984(5)
  00cf028  li 4, 0
  00cf02c  li 5, 120
  00cf030  sth 4, 72(3)
  00cf034  sth 4, 74(3)
  00cf038  vctsxs 2, 2, 0
  00cf03c  vspltw 2, 2, 0
  00cf040  stvewx 2, 5, 3
  00cf044  stw 4, -16252(6)
  00cf048  blr

ClankCommandHud_Update:   # 0xcf070, 0x638 bytes
  00cf070  stdu 1, -192(1)
  00cf074  mflr 0
  00cf078  std 0, 208(1)
  00cf07c  lis 7, 13
  00cf080  vspltisw 2, -1
  00cf084  lis 4, 114
  00cf088  addi 7, 7, -4020
  00cf08c  std 31, 184(1)
  00cf090  li 5, -3056
  00cf094  ori 31, 3, 0
  00cf098  vslw 2, 2, 2
  00cf09c  lvlx 3, 0, 7
  00cf0a0  lis 9, 150
  00cf0a4  lvlx 4, 5, 4
  00cf0a8  li 3, 124
  00cf0ac  vspltw 3, 3, 0
  00cf0b0  li 4, 24
  00cf0b4  lis 5, 150
  00cf0b8  addic 9, 9, 21824
  00cf0bc  li 8, 2
  00cf0c0  vmaddfp 2, 4, 3, 2
  00cf0c4  addic 5, 5, 22028
  00cf0c8  stw 4, 108(31)
  00cf0cc  lis 6, 150
  00cf0d0  addic 4, 6, 19008
  00cf0d4  vctsxs 2, 2, 0
  00cf0d8  vspltw 2, 2, 0
  00cf0dc  stvewx 2, 3, 31
  00cf0e0  stw 8, 204(9)
  00cf0e4  stw 8, 1380(5)
  00cf0e8  stw 8, 2760(5)
  00cf0ec  stw 8, 4140(5)
  00cf0f0  lfs 2, 76(4)
  00cf0f4  lfs 3, 72(4)
  00cf0f8  fmuls 1, 2, 2
  00cf0fc  lfs 5, 4(7)
  00cf100  lis 5, 115
  00cf104  fmadds 1, 3, 3, 1
  00cf108  addic 5, 5, 22784
  00cf10c  li 3, 0
  00cf110  fsqrts 1, 1
  00cf114  fdivs 4, 2, 1
  00cf118  fdivs 6, 3, 1
  00cf11c  fsub 7, 5, 1
  00cf120  fsub 8, 5, 1
  00cf124  fsub 9, 1, 5
  00cf128  fsub 10, 1, 5
  00cf12c  fsel 2, 7, 2, 4
  00cf130  fsel 2, 9, 2, 4
  00cf134  fsel 3, 8, 3, 6
  00cf138  fabs 4, 2
  00cf13c  stfs 2, 116(1)
  00cf140  fsel 3, 10, 3, 6
  00cf144  fabs 7, 3
  00cf148  stfs 3, 112(1)
  00cf14c  lwz 6, 116(1)
  00cf150  rlwinm 6, 6, 3, 29, 29
  00cf154  fsubs 2, 7, 4
  00cf158  stfs 2, 120(1)
  00cf15c  lwz 8, 112(1)
  00cf160  lfs 2, 112(1)
  00cf164  fabs 6, 2
  00cf168  lfs 2, 116(1)
  00cf16c  lwz 9, 120(1)
  00cf170  fabs 3, 2
  00cf174  lfs 2, 120(1)
  00cf178  rlwimi 6, 9, 2, 30, 30
  00cf17c  fsub 8, 2, 5
  00cf180  rlwimi 6, 8, 4, 28, 28
  00cf184  fsub 9, 2, 5
  00cf188  ori 8, 5, 0
  00cf18c  rlwimi 8, 6, 2, 26, 28
  00cf190  slwi 6, 6, 2
  00cf194  clrldi 8, 8, 32
  00cf198  lfsx 2, 5, 6
  00cf19c  fsel 6, 8, 6, 4
  00cf1a0  fsel 4, 9, 3, 7
  00cf1a4  lfs 3, 4(8)
  00cf1a8  fcmpu 0, 6, 5
  00cf1ac  bt 1, 0xcf1b4
  00cf1b0  b 0xcf2d0
  00cf1b4  fsubs 7, 4, 6
  00cf1b8  fadds 4, 4, 6
  00cf1bc  addic 5, 1, 16
  00cf1c0  li 9, 2
  00cf1c4  addic 6, 5, 108
  00cf1c8  addic 8, 5, 124
  00cf1cc  mtctr 9
  00cf1d0  fdivs 4, 7, 4
  00cf1d4  fmuls 6, 4, 4
  00cf1d8  stfs 4, 136(1)
  00cf1dc  stfs 4, 128(1)
  00cf1e0  stfs 4, 132(1)
  00cf1e4  stfs 4, 124(1)
  00cf1e8  lfs 8, 136(1)
  00cf1ec  lfs 9, 128(1)
  00cf1f0  lfs 10, 132(1)
  00cf1f4  fmuls 7, 6, 6
  00cf1f8  fmuls 9, 9, 6
  00cf1fc  fmuls 8, 8, 7
  00cf200  fmuls 4, 7, 7
  00cf204  fmuls 7, 10, 7
  00cf208  stfs 9, 128(1)
  00cf20c  fmuls 6, 8, 6
  00cf210  stfs 7, 132(1)
  00cf214  stfs 6, 136(1)
  00cf218  lfs 6, 108(5)
  00cf21c  fmuls 6, 6, 4
  00cf220  stfs 6, 124(5)
  00cf224  lfs 6, 4(6)
  00cf228  addic 5, 5, 8
  00cf22c  addic 6, 6, 8
  00cf230  fmuls 6, 6, 4
  00cf234  stfs 6, 4(8)
  00cf238  addic 8, 8, 8
  00cf23c  bdnz 0xcf218
  00cf240  ori 5, 1, 0
  00cf244  lis 6, 115
  00cf248  li 10, 4
  00cf24c  addic 8, 5, 124
  00cf250  addic 6, 6, 22752
  00cf254  ori 9, 8, 0
  00cf258  mtctr 10
  00cf25c  lfs 4, 124(5)
  00cf260  lfs 6, 0(6)
  00cf264  fmuls 4, 4, 6
  00cf268  lfs 6, 4(6)
  00cf26c  addic 6, 6, 8
  00cf270  stfs 4, 124(5)
  00cf274  lfs 4, 4(8)
  00cf278  addic 5, 5, 8
  00cf27c  fmuls 4, 4, 6
  00cf280  stfs 4, 4(8)
  00cf284  addic 8, 8, 8
  00cf288  bdnz 0xcf25c
  00cf28c  li 6, 2
  00cf290  ori 5, 1, 0
  00cf294  mtctr 6
  00cf298  lfs 4, 124(5)
  00cf29c  fadds 4, 5, 4
  00cf2a0  addic 5, 5, 16
  00cf2a4  lfs 5, 4(9)
  00cf2a8  lfs 6, 8(9)
  00cf2ac  lfs 7, 12(9)
  00cf2b0  addic 9, 9, 16
  00cf2b4  fadds 4, 4, 5
  00cf2b8  fadds 5, 4, 6
  00cf2bc  fadds 5, 5, 7
  00cf2c0  bdnz 0xcf298
  00cf2c4  lfs 4, 8(7)
  00cf2c8  fadds 5, 5, 4
  00cf2cc  fmadds 5, 5, 2, 3
  00cf2d0  lwz 6, 120(31)
  00cf2d4  ori 5, 6, 0
  00cf2d8  cmpwi 1, 6, 0
  00cf2dc  srawi 8, 5, 24
  00cf2e0  cmpwi 8, 0
  00cf2e4  bf 2, 0xcf338
  00cf2e8  lis 8, 162
  00cf2ec  addic 8, 8, -16448
  00cf2f0  lwz 8, 36(8)
  00cf2f4  cmpwi 8, 0
  00cf2f8  bt 2, 0xcf338
  00cf2fc  lwz 5, 196(4)
  00cf300  rlwinm 5, 5, 0, 16, 19
  00cf304  cmpwi 5, 0
  00cf308  bf 2, 0xcf324
  00cf30c  lfs 2, 12(7)
  00cf310  fcmpu 0, 1, 2
  00cf314  bt 0, 0xcf324
  00cf318  addic 5, 6, -1
  00cf31c  stw 5, 120(31)
  00cf320  bf 6, 0xcf338
  00cf324  lis 5, 256
  00cf328  li 6, -1
  00cf32c  ori 5, 5, 255
  00cf330  stw 6, 116(31)
  00cf334  stw 5, 120(31)
  00cf338  lwz 6, 116(31)
  00cf33c  srawi 5, 5, 24
  00cf340  ori 8, 6, 0
  00cf344  cmpwi 5, 1
  00cf348  ori 5, 8, 0
  00cf34c  bf 2, 0xcf540
  00cf350  lfs 2, 16(7)
  00cf354  fcmpu 0, 1, 2
  00cf358  cror 6, 0, 2
  00cf35c  bt 6, 0xcf3c0
  00cf360  lis 5, 162
  00cf364  lwz 5, -16256(5)
  00cf368  extsw 8, 5
  00cf36c  std 8, 160(1)
  00cf370  lfs 1, 20(7)
  00cf374  lfs 2, 24(7)
  00cf378  lfs 3, 28(7)
  00cf37c  lfd 4, 160(1)
  00cf380  fadds 5, 5, 1
  00cf384  fcfid 4, 4
  00cf388  fadds 5, 5, 1
  00cf38c  frsp 4, 4
  00cf390  fdivs 1, 1, 4
  00cf394  fadds 2, 5, 2
  00cf398  fmuls 3, 4, 3
  00cf39c  fadds 1, 2, 1
  00cf3a0  fmuls 1, 1, 3
  00cf3a4  fctiwz 1, 1
  00cf3a8  stfd 1, 160(1)
  00cf3ac  lwz 8, 164(1)
  00cf3b0  divw 7, 8, 5
  00cf3b4  mullw 5, 7, 5
  00cf3b8  subc 8, 8, 5
  00cf3bc  stw 8, 116(31)
  00cf3c0  lwz 7, 196(4)
  00cf3c4  ori 5, 8, 0
  00cf3c8  rlwinm 9, 7, 0, 16, 19
  00cf3cc  cmpwi 9, 0
  00cf3d0  bt 2, 0xcf540
  00cf3d4  rlwinm 9, 7, 0, 19, 19
  00cf3d8  ori 5, 8, 0
  00cf3dc  cmpwi 9, 0
  00cf3e0  cmpwi 1, 5, -1
  00cf3e4  bt 2, 0xcf430
  00cf3e8  bf 6, 0xcf3fc
  00cf3ec  lis 5, 114
  00cf3f0  addic 5, 5, 15084
  00cf3f4  lwz 5, 16(5)
  00cf3f8  b 0xcf430
  00cf3fc  lis 8, 162
  00cf400  lis 9, 162
  00cf404  sldi 10, 5, 5
  00cf408  sldi 5, 5, 2
  00cf40c  lwz 8, -16252(8)
  00cf410  subc 5, 10, 5
  00cf414  lwz 9, -15984(9)
  00cf418  slwi 8, 8, 2
  00cf41c  extsw 8, 8
  00cf420  lwzx 8, 9, 8
  00cf424  addc 5, 8, 5
  00cf428  clrldi 5, 5, 32
  00cf42c  lwz 5, 16(5)
  00cf430  rlwinm 8, 7, 0, 17, 17
  00cf434  cmpwi 1, 5, -1
  00cf438  cmpwi 8, 0
  00cf43c  bt 2, 0xcf488
  00cf440  bf 6, 0xcf454
  00cf444  lis 5, 114
  00cf448  addic 5, 5, 15084
  00cf44c  lwz 5, 20(5)
  00cf450  b 0xcf488
  00cf454  lis 8, 162
  00cf458  lis 9, 162
  00cf45c  sldi 10, 5, 5
  00cf460  sldi 5, 5, 2
  00cf464  lwz 8, -16252(8)
  00cf468  lwz 9, -15984(9)
  00cf46c  subc 5, 10, 5
  00cf470  slwi 8, 8, 2
  00cf474  extsw 8, 8
  00cf478  lwzx 8, 9, 8
  00cf47c  addc 5, 8, 5
  00cf480  clrldi 5, 5, 32
  00cf484  lwz 5, 20(5)
  00cf488  rlwinm 8, 7, 0, 16, 16
  00cf48c  cmpwi 1, 5, -1
  00cf490  cmpwi 8, 0
  00cf494  bt 2, 0xcf4e0
  00cf498  bf 6, 0xcf4ac
  00cf49c  lis 5, 114
  00cf4a0  addic 5, 5, 15084
  00cf4a4  lwz 5, 8(5)
  00cf4a8  b 0xcf4e0
  00cf4ac  lis 8, 162
  00cf4b0  lis 9, 162
  00cf4b4  sldi 10, 5, 5
  00cf4b8  sldi 5, 5, 2
  00cf4bc  lwz 8, -16252(8)
  00cf4c0  subc 5, 10, 5
  00cf4c4  lwz 9, -15984(9)
  00cf4c8  slwi 8, 8, 2
  00cf4cc  extsw 8, 8
  00cf4d0  lwzx 8, 9, 8
  00cf4d4  addc 5, 8, 5
  00cf4d8  clrldi 5, 5, 32
  00cf4dc  lwz 5, 8(5)
  00cf4e0  rlwinm 7, 7, 0, 18, 18
  00cf4e4  cmpwi 1, 5, -1
  00cf4e8  cmpwi 7, 0
  00cf4ec  bt 2, 0xcf538
  00cf4f0  bf 6, 0xcf504
  00cf4f4  lis 5, 114
  00cf4f8  addic 5, 5, 15084
  00cf4fc  lwz 5, 12(5)
  00cf500  b 0xcf538
  00cf504  lis 7, 162
  00cf508  lis 8, 162
  00cf50c  sldi 9, 5, 5
  00cf510  sldi 5, 5, 2
  00cf514  lwz 7, -16252(7)
  00cf518  lwz 8, -15984(8)
  00cf51c  subc 5, 9, 5
  00cf520  slwi 7, 7, 2
  00cf524  extsw 7, 7
  00cf528  lwzx 7, 8, 7
  00cf52c  addc 5, 7, 5
  00cf530  clrldi 5, 5, 32
  00cf534  lwz 5, 12(5)
  00cf538  ori 8, 5, 0
  00cf53c  stw 5, 116(31)
  00cf540  cmpw 5, 6
  00cf544  bt 2, 0xcf550
  00cf548  stb 3, 113(31)
  00cf54c  b 0xcf56c
  00cf550  lis 7, 114
  00cf554  lbz 6, 113(31)
  00cf558  lwz 7, 17220(7)
  00cf55c  cmpw 6, 7
  00cf560  bf 0, 0xcf56c
  00cf564  addic 6, 6, 1
  00cf568  stb 6, 113(31)
  00cf56c  lwz 4, 192(4)
  00cf570  cmpwi 1, 5, -1
  00cf574  rlwinm 4, 4, 0, 27, 27
  00cf578  cmpwi 4, 0
  00cf57c  bf 2, 0xcf5e0
  00cf580  ori 4, 3, 0
  00cf584  bt 6, 0xcf5bc
  00cf588  lis 4, 162
  00cf58c  lis 6, 162
  00cf590  sldi 7, 5, 5
  00cf594  sldi 5, 5, 2
  00cf598  lwz 4, -16252(4)
  00cf59c  lwz 6, -15984(6)
  00cf5a0  subc 5, 7, 5
  00cf5a4  slwi 4, 4, 2
  00cf5a8  extsw 4, 4
  00cf5ac  lwzx 4, 6, 4
  00cf5b0  addc 4, 4, 5
  00cf5b4  clrldi 4, 4, 32
  00cf5b8  lwz 4, 24(4)
  00cf5bc  lis 5, 151
  00cf5c0  addic 5, 5, -25376
  00cf5c4  stw 4, 8896(5)
  00cf5c8  lbz 4, 112(31)
  00cf5cc  cmpwi 4, 0
  00cf5d0  bf 1, 0xcf5fc
  00cf5d4  addic 4, 4, -1
  00cf5d8  stb 4, 112(31)
  00cf5dc  b 0xcf5fc
  00cf5e0  lis 4, 114
  00cf5e4  lwz 6, 17220(4)
  00cf5e8  lbz 4, 112(31)
  00cf5ec  cmpw 4, 6
  00cf5f0  bf 0, 0xcf5fc
  00cf5f4  addic 4, 4, 1
  00cf5f8  stb 4, 112(31)
  00cf5fc  clrlwi 4, 4, 24
  00cf600  cmpwi 4, 0
  00cf604  bf 2, 0xcf694
  00cf608  lis 5, 162
  00cf60c  lis 6, 162
  00cf610  lis 4, 114
  00cf614  addic 4, 4, 15220
  00cf618  stw 8, -16240(5)
  00cf61c  lwz 5, 120(31)
  00cf620  stw 5, -16244(6)
  00cf624  lwz 8, 100(31)
  00cf628  sldi 5, 3, 7
  00cf62c  sldi 6, 3, 4
  00cf630  addc 5, 5, 6
  00cf634  extsw 5, 5
  00cf638  lwzx 5, 4, 5
  00cf63c  cmpw 5, 8
  00cf640  bt 2, 0xcf654
  00cf644  addic 3, 3, 1
  00cf648  extsw 3, 3
  00cf64c  cmpwi 3, 13
  00cf650  bt 0, 0xcf628
  00cf654  cmpwi 3, 13
  00cf658  bf 0, 0xcf67c
  00cf65c  lis 4, 0
  00cf660  li 7, 0
  00cf664  li 9, 0
  00cf668  ori 4, 4, 65535
  00cf66c  li 5, 0
  00cf670  li 6, 0
  00cf674  li 8, 0
  00cf678  bl 0xc8444
  00cf67c  li 3, -6
  00cf680  lis 4, 346
  00cf684  lis 5, 162
  00cf688  stw 3, 108(31)
  00cf68c  lwz 3, -15568(4)
  00cf690  stw 3, -16248(5)
  00cf694  ld 0, 208(1)
  00cf698  mtlr 0
  00cf69c  ld 31, 184(1)
  00cf6a0  addi 1, 1, 192
  00cf6a4  blr

Draw_ClankCommandHud:   # 0xcf6f0, 0xba4 bytes
  00cf6f0  stdu 1, -336(1)
  00cf6f4  mflr 0
  00cf6f8  std 0, 352(1)
  00cf6fc  stfd 22, 256(1)
  00cf700  stfd 23, 264(1)
  00cf704  stfd 24, 272(1)
  00cf708  stfd 25, 280(1)
  00cf70c  stfd 26, 288(1)
  00cf710  stfd 27, 296(1)
  00cf714  stfd 28, 304(1)
  00cf718  stfd 29, 312(1)
  00cf71c  stfd 30, 320(1)
  00cf720  stfd 31, 328(1)
  00cf724  std 31, 248(1)
  00cf728  std 22, 176(1)
  00cf72c  ori 31, 3, 0
  00cf730  lis 22, 13
  00cf734  addi 22, 22, -2392
  00cf738  std 30, 240(1)
  00cf73c  std 29, 232(1)
  00cf740  std 28, 224(1)
  00cf744  std 27, 216(1)
  00cf748  std 26, 208(1)
  00cf74c  std 25, 200(1)
  00cf750  std 24, 192(1)
  00cf754  std 23, 184(1)
  00cf758  std 21, 168(1)
  00cf75c  std 20, 160(1)
  00cf760  std 19, 152(1)
  00cf764  std 18, 144(1)
  00cf768  lbz 3, 112(31)
  00cf76c  bl 0x502730
  00cf770  nop
  00cf774  fmr 31, 1
  00cf778  lis 3, 114
  00cf77c  lwz 3, 17220(3)
  00cf780  extsw 3, 3
  00cf784  bl 0x502730
  00cf788  nop
  00cf78c  fdivs 31, 31, 1
  00cf790  lfs 29, 0(22)
  00cf794  lbz 3, 113(31)
  00cf798  fcmpu 0, 31, 29
  00cf79c  cror 6, 0, 2
  00cf7a0  bt 6, 0xcf7ac
  00cf7a4  fmr 31, 29
  00cf7a8  b 0xcf7c0
  00cf7ac  lfs 1, 4(22)
  00cf7b0  fcmpu 0, 31, 1
  00cf7b4  cror 6, 1, 2
  00cf7b8  bt 6, 0xcf7c0
  00cf7bc  fmr 31, 1
  00cf7c0  bl 0x502730
  00cf7c4  nop
  00cf7c8  fmr 30, 1
  00cf7cc  lis 3, 114
  00cf7d0  lwz 3, 17220(3)
  00cf7d4  extsw 3, 3
  00cf7d8  bl 0x502730
  00cf7dc  nop
  00cf7e0  fdivs 30, 30, 1
  00cf7e4  fcmpu 0, 30, 29
  00cf7e8  cror 6, 0, 2
  00cf7ec  bt 6, 0xcf7f8
  00cf7f0  fmr 30, 29
  00cf7f4  b 0xcf80c
  00cf7f8  lfs 1, 4(22)
  00cf7fc  fcmpu 0, 30, 1
  00cf800  cror 6, 1, 2
  00cf804  bt 6, 0xcf80c
  00cf808  fmr 30, 1
  00cf80c  lis 3, 161
  00cf810  lis 30, 114
  00cf814  lwz 3, 1808(3)
  00cf818  lwz 4, 17260(30)
  00cf81c  divw 5, 3, 4
  00cf820  mullw 4, 5, 4
  00cf824  subc 3, 3, 4
  00cf828  extsw 3, 3
  00cf82c  bl 0x502730
  00cf830  nop
  00cf834  fmr 29, 1
  00cf838  lwz 3, 17260(30)
  00cf83c  extsw 3, 3
  00cf840  bl 0x502730
  00cf844  nop
  00cf848  fdivs 2, 29, 1
  00cf84c  lfs 4, 8(22)
  00cf850  lfs 3, 12(22)
  00cf854  lfs 29, 16(22)
  00cf858  lfs 28, 20(22)
  00cf85c  lfs 27, 24(22)
  00cf860  lfs 26, 28(22)
  00cf864  lfs 25, 32(22)
  00cf868  lfs 1, 40(22)
  00cf86c  lfs 24, 36(22)
  00cf870  fmuls 23, 31, 1
  00cf874  fmr 1, 23
  00cf878  fmsubs 2, 2, 4, 3
  00cf87c  fsubs 3, 29, 2
  00cf880  fsubs 4, 28, 2
  00cf884  fsub 5, 2, 3
  00cf888  fsel 2, 5, 3, 2
  00cf88c  fsub 3, 4, 2
  00cf890  fsel 2, 3, 4, 2
  00cf894  fmuls 3, 2, 2
  00cf898  fmuls 4, 3, 2
  00cf89c  fmuls 5, 3, 4
  00cf8a0  fmadds 2, 4, 27, 2
  00cf8a4  fmuls 4, 3, 5
  00cf8a8  fmadds 2, 5, 26, 2
  00cf8ac  fmuls 3, 3, 4
  00cf8b0  fmadds 2, 4, 25, 2
  00cf8b4  fmadds 22, 3, 24, 2
  00cf8b8  bl 0x502758
  00cf8bc  nop
  00cf8c0  lfs 1, 44(22)
  00cf8c4  ori 30, 3, 0
  00cf8c8  lfs 2, 48(22)
  00cf8cc  fmadds 1, 22, 1, 2
  00cf8d0  fmuls 1, 23, 1
  00cf8d4  bl 0x502758
  00cf8d8  nop
  00cf8dc  lwz 27, 80(31)
  00cf8e0  lwz 4, 96(31)
  00cf8e4  ori 29, 3, 0
  00cf8e8  lwz 28, 84(31)
  00cf8ec  extsw 27, 27
  00cf8f0  clrlwi 6, 4, 31
  00cf8f4  lwz 3, 88(31)
  00cf8f8  extsw 28, 28
  00cf8fc  lwz 5, 92(31)
  00cf900  cmpwi 6, 0
  00cf904  bf 2, 0xcf920
  00cf908  rlwinm 6, 4, 0, 30, 30
  00cf90c  cmpwi 6, 0
  00cf910  bf 2, 0xcf920
  00cf914  srawi 5, 5, 1
  00cf918  subc 28, 28, 5
  00cf91c  extsw 28, 28
  00cf920  rlwinm 5, 4, 0, 28, 28
  00cf924  li 6, 0
  00cf928  srawi 7, 3, 1
  00cf92c  subc 5, 6, 5
  00cf930  subc 3, 27, 3
  00cf934  cntlzw 5, 5
  00cf938  subc 6, 27, 7
  00cf93c  sldi 5, 5, 58
  00cf940  rlwinm 4, 4, 0, 29, 29
  00cf944  subc 6, 6, 3
  00cf948  li 7, 0
  00cf94c  sradi 5, 5, 63
  00cf950  subc 4, 7, 4
  00cf954  and 5, 5, 6
  00cf958  lis 8, 114
  00cf95c  lis 6, 114
  00cf960  addc 3, 3, 5
  00cf964  cntlzw 4, 4
  00cf968  extsw 3, 3
  00cf96c  sldi 4, 4, 58
  00cf970  subc 3, 3, 27
  00cf974  lwz 5, 14640(8)
  00cf978  sradi 4, 4, 63
  00cf97c  lwz 6, 14644(6)
  00cf980  srawi 5, 5, 1
  00cf984  and 18, 4, 3
  00cf988  li 3, 0
  00cf98c  addze 5, 5
  00cf990  srawi 4, 6, 1
  00cf994  lis 20, 162
  00cf998  lis 19, 0
  00cf99c  addze 26, 4
  00cf9a0  ori 21, 3, 0
  00cf9a4  addc 18, 27, 18
  00cf9a8  extsw 27, 5
  00cf9ac  addic 20, 20, -16448
  00cf9b0  extsw 26, 26
  00cf9b4  ori 4, 21, 0
  00cf9b8  ori 19, 19, 65535
  00cf9bc  lis 5, 0
  00cf9c0  ori 6, 5, 59700
  00cf9c4  lwz 5, 28(20)
  00cf9c8  lhzx 7, 5, 4
  00cf9cc  cmpw 1, 7, 6
  00cf9d0  cmpw 7, 19
  00cf9d4  cror 2, 2, 6
  00cf9d8  bt 2, 0xcf9e8
  00cf9dc  addic 4, 4, 8
  00cf9e0  addic 3, 3, 1
  00cf9e4  b 0xcf9bc
  00cf9e8  slwi 3, 3, 3
  00cf9ec  extsw 4, 3
  00cf9f0  lhzx 4, 5, 4
  00cf9f4  cmpw 4, 19
  00cf9f8  bf 2, 0xcfa04
  00cf9fc  ori 3, 21, 0
  00cfa00  b 0xcfa24
  00cfa04  addc 5, 5, 3
  00cfa08  ori 3, 21, 0
  00cfa0c  clrldi 5, 5, 32
  00cfa10  lhz 4, 2(5)
  00cfa14  cmpwi 4, 1
  00cfa18  bf 1, 0xcfa24
  00cfa1c  lhz 3, 4(5)
  00cfa20  addic 3, 3, 1
  00cfa24  lis 25, 161
  00cfa28  slwi 3, 3, 2
  00cfa2c  lwz 6, 32(20)
  00cfa30  addic 25, 25, 24396
  00cfa34  ori 5, 28, 0
  00cfa38  ori 4, 18, 0
  00cfa3c  lwz 8, 28(25)
  00cfa40  lwzx 3, 6, 3
  00cfa44  ori 6, 27, 0
  00cfa48  sldi 7, 3, 5
  00cfa4c  sldi 3, 3, 2
  00cfa50  addc 3, 7, 3
  00cfa54  ori 7, 26, 0
  00cfa58  addc 3, 8, 3
  00cfa5c  ori 8, 30, 0
  00cfa60  clrldi 3, 3, 32
  00cfa64  bl 0xcbe60
  00cfa68  lis 5, 114
  00cfa6c  lis 6, 114
  00cfa70  lwz 4, 28(20)
  00cfa74  lwz 7, 28(25)
  00cfa78  ori 3, 21, 0
  00cfa7c  ori 9, 4, 0
  00cfa80  lwz 5, 14640(5)
  00cfa84  lwz 6, 14644(6)
  00cfa88  lwz 8, 32(20)
  00cfa8c  lis 10, 0
  00cfa90  lhz 11, 0(9)
  00cfa94  ori 10, 10, 59700
  00cfa98  cmpw 11, 19
  00cfa9c  cmpw 1, 11, 10
  00cfaa0  cror 2, 2, 6
  00cfaa4  bt 2, 0xcfab4
  00cfaa8  addic 9, 9, 8
  00cfaac  addic 3, 3, 1
  00cfab0  b 0xcfa8c
  00cfab4  slwi 3, 3, 3
  00cfab8  extsw 9, 3
  00cfabc  lhzx 9, 4, 9
  00cfac0  cmpw 9, 19
  00cfac4  bf 2, 0xcfad0
  00cfac8  ori 3, 21, 0
  00cfacc  b 0xcfaf0
  00cfad0  addc 4, 4, 3
  00cfad4  ori 3, 21, 0
  00cfad8  clrldi 4, 4, 32
  00cfadc  lhz 9, 2(4)
  00cfae0  cmpwi 9, 1
  00cfae4  bf 1, 0xcfaf0
  00cfae8  lhz 3, 4(4)
  00cfaec  addic 3, 3, 1
  00cfaf0  slwi 3, 3, 2
  00cfaf4  addc 4, 5, 18
  00cfaf8  addc 5, 6, 28
  00cfafc  ori 9, 7, 0
  00cfb00  neg 24, 27
  00cfb04  lwzx 3, 8, 3
  00cfb08  neg 23, 26
  00cfb0c  extsw 4, 4
  00cfb10  sldi 6, 3, 5
  00cfb14  sldi 3, 3, 2
  00cfb18  extsw 5, 5
  00cfb1c  addc 3, 6, 3
  00cfb20  ori 6, 24, 0
  00cfb24  addc 3, 9, 3
  00cfb28  ori 7, 23, 0
  00cfb2c  ori 8, 30, 0
  00cfb30  clrldi 3, 3, 32
  00cfb34  bl 0xcbe60
  00cfb38  lis 6, 114
  00cfb3c  lwz 5, 28(20)
  00cfb40  lwz 7, 28(25)
  00cfb44  ori 3, 21, 0
  00cfb48  lwz 8, 32(20)
  00cfb4c  ori 9, 5, 0
  00cfb50  lwz 6, 14640(6)
  00cfb54  lis 4, 0
  00cfb58  lhz 10, 0(9)
  00cfb5c  ori 4, 4, 59700
  00cfb60  cmpw 10, 19
  00cfb64  cmpw 1, 10, 4
  00cfb68  cror 2, 2, 6
  00cfb6c  bt 2, 0xcfb7c
  00cfb70  addic 9, 9, 8
  00cfb74  addic 3, 3, 1
  00cfb78  b 0xcfb54
  00cfb7c  slwi 3, 3, 3
  00cfb80  extsw 4, 3
  00cfb84  lhzx 4, 5, 4
  00cfb88  cmpw 4, 19
  00cfb8c  bf 2, 0xcfb98
  00cfb90  ori 5, 21, 0
  00cfb94  b 0xcfbb8
  00cfb98  addc 3, 5, 3
  00cfb9c  ori 5, 21, 0
  00cfba0  clrldi 3, 3, 32
  00cfba4  lhz 4, 2(3)
  00cfba8  cmpwi 4, 1
  00cfbac  bf 1, 0xcfbb8
  00cfbb0  lhz 5, 4(3)
  00cfbb4  addic 5, 5, 1
  00cfbb8  ori 3, 7, 0
  00cfbbc  slwi 7, 5, 2
  00cfbc0  addc 4, 6, 18
  00cfbc4  ori 5, 28, 0
  00cfbc8  extsw 4, 4
  00cfbcc  ori 6, 24, 0
  00cfbd0  lwzx 7, 8, 7
  00cfbd4  sldi 8, 7, 5
  00cfbd8  sldi 7, 7, 2
  00cfbdc  addc 8, 8, 7
  00cfbe0  ori 7, 26, 0
  00cfbe4  addc 3, 3, 8
  00cfbe8  ori 8, 30, 0
  00cfbec  clrldi 3, 3, 32
  00cfbf0  bl 0xcbe60
  00cfbf4  lis 26, 114
  00cfbf8  lwz 7, 28(20)
  00cfbfc  lwz 3, 28(25)
  00cfc00  ori 6, 21, 0
  00cfc04  lwz 5, 32(20)
  00cfc08  ori 8, 7, 0
  00cfc0c  lwz 26, 14644(26)
  00cfc10  lis 4, 0
  00cfc14  lhz 9, 0(8)
  00cfc18  ori 4, 4, 59700
  00cfc1c  cmpw 9, 19
  00cfc20  cmpw 1, 9, 4
  00cfc24  cror 2, 2, 6
  00cfc28  bt 2, 0xcfc38
  00cfc2c  addic 8, 8, 8
  00cfc30  addic 6, 6, 1
  00cfc34  b 0xcfc10
  00cfc38  slwi 6, 6, 3
  00cfc3c  extsw 4, 6
  00cfc40  lhzx 4, 7, 4
  00cfc44  cmpw 4, 19
  00cfc48  bf 2, 0xcfc54
  00cfc4c  ori 7, 21, 0
  00cfc50  b 0xcfc74
  00cfc54  addc 6, 7, 6
  00cfc58  ori 7, 21, 0
  00cfc5c  clrldi 6, 6, 32
  00cfc60  lhz 4, 2(6)
  00cfc64  cmpwi 4, 1
  00cfc68  bf 1, 0xcfc74
  00cfc6c  lhz 7, 4(6)
  00cfc70  addic 7, 7, 1
  00cfc74  ori 4, 5, 0
  00cfc78  slwi 6, 7, 2
  00cfc7c  addc 5, 26, 28
  00cfc80  ori 8, 30, 0
  00cfc84  extsw 5, 5
  00cfc88  lwzx 6, 4, 6
  00cfc8c  ori 4, 18, 0
  00cfc90  sldi 7, 6, 5
  00cfc94  sldi 6, 6, 2
  00cfc98  addc 7, 7, 6
  00cfc9c  ori 6, 27, 0
  00cfca0  addc 3, 3, 7
  00cfca4  ori 7, 23, 0
  00cfca8  clrldi 3, 3, 32
  00cfcac  bl 0xcbe60
  00cfcb0  lis 3, 162
  00cfcb4  ori 27, 21, 0
  00cfcb8  lwz 3, -16256(3)
  00cfcbc  cmpwi 3, 0
  00cfcc0  bf 1, 0xd00c4
  00cfcc4  ori 23, 21, 0
  00cfcc8  extsw 4, 27
  00cfccc  extsw 3, 3
  00cfcd0  std 4, 128(1)
  00cfcd4  lfs 1, 52(22)
  00cfcd8  lfs 3, 56(22)
  00cfcdc  lfd 2, 128(1)
  00cfce0  std 3, 128(1)
  00cfce4  fcfid 2, 2
  00cfce8  frsp 2, 2
  00cfcec  fmuls 1, 2, 1
  00cfcf0  lfd 2, 128(1)
  00cfcf4  fcfid 2, 2
  00cfcf8  fmuls 1, 1, 3
  00cfcfc  frsp 2, 2
  00cfd00  fdivs 1, 1, 2
  00cfd04  lfs 2, 60(22)
  00cfd08  fsubs 1, 1, 3
  00cfd0c  bl 0x502578
  00cfd10  nop
  00cfd14  lfs 2, 64(22)
  00cfd18  fsubs 3, 29, 1
  00cfd1c  fadds 2, 1, 2
  00cfd20  lis 3, 114
  00cfd24  lis 4, 114
  00cfd28  lis 8, 114
  00cfd2c  fsub 4, 1, 3
  00cfd30  fsubs 5, 29, 2
  00cfd34  fsubs 6, 28, 2
  00cfd38  fsel 3, 4, 3, 1
  00cfd3c  fsubs 1, 28, 1
  00cfd40  fsub 4, 2, 5
  00cfd44  fsub 7, 1, 3
  00cfd48  fsel 2, 4, 5, 2
  00cfd4c  fsel 1, 7, 1, 3
  00cfd50  fsub 3, 6, 2
  00cfd54  fmuls 4, 1, 1
  00cfd58  fsel 2, 3, 6, 2
  00cfd5c  fmuls 3, 4, 1
  00cfd60  fmuls 5, 2, 2
  00cfd64  fmuls 6, 4, 3
  00cfd68  fmuls 7, 5, 2
  00cfd6c  fmadds 1, 3, 27, 1
  00cfd70  lfs 3, 17228(3)
  00cfd74  lis 3, 114
  00cfd78  fmuls 8, 4, 6
  00cfd7c  fmuls 9, 5, 7
  00cfd80  fmadds 2, 7, 27, 2
  00cfd84  fmadds 1, 6, 26, 1
  00cfd88  lfs 7, 17276(3)
  00cfd8c  lwz 3, 14648(4)
  00cfd90  addc 7, 3, 18
  00cfd94  lwz 3, 116(31)
  00cfd98  fmuls 4, 4, 8
  00cfd9c  fmuls 6, 5, 9
  00cfda0  fmadds 2, 9, 26, 2
  00cfda4  fmadds 1, 8, 25, 1
  00cfda8  lwz 4, 28(20)
  00cfdac  cmpw 3, 27
  00cfdb0  lwz 5, 28(25)
  00cfdb4  lwz 6, 32(20)
  00cfdb8  lwz 8, 14652(8)
  00cfdbc  addc 8, 8, 28
  00cfdc0  fmuls 5, 5, 6
  00cfdc4  fmadds 2, 6, 25, 2
  00cfdc8  fmadds 1, 4, 24, 1
  00cfdcc  fmadds 2, 5, 24, 2
  00cfdd0  fmuls 1, 3, 1
  00cfdd4  fmuls 2, 3, 2
  00cfdd8  fctiwz 1, 1
  00cfddc  fmuls 2, 2, 7
  00cfde0  fctiwz 2, 2
  00cfde4  stfd 2, 128(1)
  00cfde8  lwz 9, 132(1)
  00cfdec  stfd 1, 128(1)
  00cfdf0  addc 26, 7, 9
  00cfdf4  lwz 7, 132(1)
  00cfdf8  extsw 26, 26
  00cfdfc  addc 24, 8, 7
  00cfe00  extsw 24, 24
  00cfe04  bf 2, 0xcfedc
  00cfe08  lis 7, 162
  00cfe0c  lis 8, 162
  00cfe10  lwz 7, -16252(7)
  00cfe14  lwz 8, -15984(8)
  00cfe18  slwi 7, 7, 2
  00cfe1c  extsw 7, 7
  00cfe20  lwzx 7, 8, 7
  00cfe24  lwzx 7, 7, 23
  00cfe28  cmpwi 7, 0
  00cfe2c  bt 2, 0xcfedc
  00cfe30  lis 7, 0
  00cfe34  ori 3, 21, 0
  00cfe38  ori 7, 7, 59804
  00cfe3c  ori 8, 4, 0
  00cfe40  lhz 9, 0(8)
  00cfe44  cmpw 1, 9, 7
  00cfe48  cmpw 9, 19
  00cfe4c  cror 2, 2, 6
  00cfe50  bt 2, 0xcfe60
  00cfe54  addic 8, 8, 8
  00cfe58  addic 3, 3, 1
  00cfe5c  b 0xcfe40
  00cfe60  slwi 3, 3, 3
  00cfe64  extsw 7, 3
  00cfe68  lhzx 7, 4, 7
  00cfe6c  cmpw 7, 19
  00cfe70  bf 2, 0xcfe7c
  00cfe74  ori 4, 21, 0
  00cfe78  b 0xcfe98
  00cfe7c  addc 3, 4, 3
  00cfe80  ori 4, 21, 0
  00cfe84  clrldi 3, 3, 32
  00cfe88  lhz 7, 2(3)
  00cfe8c  cmpwi 7, 0
  00cfe90  bf 1, 0xcfe98
  00cfe94  lhz 4, 4(3)
  00cfe98  slwi 3, 4, 2
  00cfe9c  addic 7, 24, -19
  00cfea0  addic 4, 26, -19
  00cfea4  extsw 7, 7
  00cfea8  extsw 4, 4
  00cfeac  lwzx 3, 6, 3
  00cfeb0  ori 8, 29, 0
  00cfeb4  sldi 6, 3, 5
  00cfeb8  sldi 3, 3, 2
  00cfebc  addc 3, 6, 3
  00cfec0  li 6, 38
  00cfec4  addc 3, 5, 3
  00cfec8  ori 5, 7, 0
  00cfecc  clrldi 3, 3, 32
  00cfed0  li 7, 38
  00cfed4  bl 0xcbe60
  00cfed8  lwz 3, 116(31)
  00cfedc  lis 5, 162
  00cfee0  lis 4, 162
  00cfee4  cmpw 1, 27, 3
  00cfee8  lwz 6, -15984(5)
  00cfeec  lwz 5, -16252(4)
  00cfef0  ori 4, 6, 0
  00cfef4  slwi 6, 5, 2
  00cfef8  extsw 6, 6
  00cfefc  lwzx 3, 4, 6
  00cff00  lwzx 3, 3, 23
  00cff04  cmpwi 3, 0
  00cff08  bt 2, 0xd00ac
  00cff0c  ori 3, 30, 0
  00cff10  bt 6, 0xcff4c
  00cff14  extsw 3, 30
  00cff18  std 3, 128(1)
  00cff1c  lis 3, 114
  00cff20  lfs 1, 17272(3)
  00cff24  lfd 2, 128(1)
  00cff28  fcfid 2, 2
  00cff2c  frsp 2, 2
  00cff30  fmuls 1, 2, 1
  00cff34  bl 0x502758
  00cff38  nop
  00cff3c  lis 4, 162
  00cff40  lis 5, 162
  00cff44  lwz 4, -15984(4)
  00cff48  lwz 5, -16252(5)
  00cff4c  lwz 6, 36(20)
  00cff50  cmpwi 6, 0
  00cff54  bt 2, 0xd0004
  00cff58  slwi 5, 5, 2
  00cff5c  extsw 5, 5
  00cff60  lwzx 5, 5, 4
  00cff64  ori 4, 21, 0
  00cff68  addc 6, 5, 23
  00cff6c  ori 7, 4, 0
  00cff70  clrldi 6, 6, 32
  00cff74  lwzx 5, 5, 23
  00cff78  lwz 6, 4(6)
  00cff7c  lwz 8, 28(20)
  00cff80  lhzx 9, 8, 7
  00cff84  cmpw 1, 9, 5
  00cff88  cmpw 9, 19
  00cff8c  cror 2, 2, 6
  00cff90  bt 2, 0xcffa0
  00cff94  addic 7, 7, 8
  00cff98  addic 4, 4, 1
  00cff9c  b 0xcff7c
  00cffa0  slwi 4, 4, 3
  00cffa4  extsw 5, 4
  00cffa8  lhzx 5, 8, 5
  00cffac  cmpw 5, 19
  00cffb0  bf 2, 0xcffbc
  00cffb4  ori 8, 21, 0
  00cffb8  b 0xcffe0
  00cffbc  addc 4, 8, 4
  00cffc0  ori 8, 21, 0
  00cffc4  clrldi 4, 4, 32
  00cffc8  lhz 5, 2(4)
  00cffcc  cmpw 6, 5
  00cffd0  bf 0, 0xcffe0
  00cffd4  lhz 4, 4(4)
  00cffd8  addc 8, 4, 6
  00cffdc  extsw 8, 8
  00cffe0  ori 9, 3, 0
  00cffe4  ori 4, 8, 0
  00cffe8  ori 3, 31, 0
  00cffec  ori 5, 26, 0
  00cfff0  ori 6, 24, 0
  00cfff4  li 7, 1
  00cfff8  ori 8, 9, 0
  00cfffc  bl 0xcdeb8
  00d0000  b 0xd00ac
  00d0004  slwi 3, 5, 2
  00d0008  ori 5, 21, 0
  00d000c  extsw 3, 3
  00d0010  ori 6, 5, 0
  00d0014  lwzx 4, 3, 4
  00d0018  addc 3, 4, 23
  00d001c  clrldi 3, 3, 32
  00d0020  lwzx 4, 4, 23
  00d0024  lwz 3, 4(3)
  00d0028  addic 3, 3, 4
  00d002c  lwz 7, 28(20)
  00d0030  lhzx 8, 7, 6
  00d0034  cmpw 1, 8, 4
  00d0038  cmpw 8, 19
  00d003c  cror 2, 2, 6
  00d0040  bt 2, 0xd0050
  00d0044  addic 6, 6, 8
  00d0048  addic 5, 5, 1
  00d004c  b 0xd002c
  00d0050  slwi 5, 5, 3
  00d0054  extsw 4, 5
  00d0058  lhzx 4, 7, 4
  00d005c  cmpw 4, 19
  00d0060  bf 2, 0xd006c
  00d0064  ori 7, 21, 0
  00d0068  b 0xd0090
  00d006c  addc 4, 7, 5
  00d0070  ori 7, 21, 0
  00d0074  clrldi 4, 4, 32
  00d0078  lhz 5, 2(4)
  00d007c  cmpw 3, 5
  00d0080  bf 0, 0xd0090
  00d0084  lhz 4, 4(4)
  00d0088  addc 7, 4, 3
  00d008c  extsw 7, 7
  00d0090  ori 4, 7, 0
  00d0094  ori 3, 31, 0
  00d0098  ori 5, 26, 0
  00d009c  ori 6, 24, 0
  00d00a0  li 7, 1
  00d00a4  ori 8, 30, 0
  00d00a8  bl 0xcdeb8
  00d00ac  lis 3, 162
  00d00b0  addic 27, 27, 1
  00d00b4  addic 23, 23, 28
  00d00b8  lwz 3, -16256(3)
  00d00bc  cmpw 27, 3
  00d00c0  bt 0, 0xcfcc8
  00d00c4  lwz 30, 116(31)
  00d00c8  cmpwi 1, 30, 0
  00d00cc  bt 4, 0xd021c
  00d00d0  lis 3, 162
  00d00d4  lis 4, 162
  00d00d8  sldi 5, 30, 5
  00d00dc  sldi 6, 30, 2
  00d00e0  lwz 3, -16252(3)
  00d00e4  lwz 4, -15984(4)
  00d00e8  subc 5, 5, 6
  00d00ec  slwi 3, 3, 2
  00d00f0  extsw 5, 5
  00d00f4  extsw 3, 3
  00d00f8  lwzx 3, 4, 3
  00d00fc  lwzx 3, 3, 5
  00d0100  cmpwi 3, 0
  00d0104  bt 2, 0xd021c
  00d0108  bt 4, 0xd021c
  00d010c  slwi 3, 30, 2
  00d0110  li 4, 21020
  00d0114  addc 3, 1, 3
  00d0118  li 5, 21022
  00d011c  li 6, 21023
  00d0120  clrldi 3, 3, 32
  00d0124  li 7, 21021
  00d0128  stw 4, 112(1)
  00d012c  stw 5, 124(1)
  00d0130  stw 6, 120(1)
  00d0134  stw 7, 116(1)
  00d0138  lwz 3, 112(3)
  00d013c  extsw 3, 3
  00d0140  bl 0x7b740
  00d0144  nop
  00d0148  ori 30, 3, 0
  00d014c  cmpwi 30, 0
  00d0150  bt 2, 0xd021c
  00d0154  ori 3, 30, 0
  00d0158  bl 0x5c8510
  00d015c  nop
  00d0160  cmpwi 3, 0
  00d0164  bt 2, 0xd021c
  00d0168  fmuls 31, 31, 30
  00d016c  lis 3, 114
  00d0170  lis 4, 114
  00d0174  lwz 3, 17284(3)
  00d0178  lwz 4, 17288(4)
  00d017c  extsw 3, 3
  00d0180  extsw 4, 4
  00d0184  fmr 1, 31
  00d0188  bl 0x5027bc
  00d018c  nop
  00d0190  ori 29, 3, 0
  00d0194  lis 4, -32768
  00d0198  fmr 1, 31
  00d019c  li 3, 0
  00d01a0  bl 0x5027bc
  00d01a4  nop
  00d01a8  lis 4, 114
  00d01ac  lis 5, 114
  00d01b0  lis 27, 114
  00d01b4  li 7, -1
  00d01b8  lwz 4, 17292(4)
  00d01bc  lwz 5, 14652(5)
  00d01c0  addc 4, 4, 28
  00d01c4  lwz 6, 14648(27)
  00d01c8  addc 4, 4, 5
  00d01cc  addc 5, 6, 18
  00d01d0  extsw 28, 4
  00d01d4  addic 5, 5, -1
  00d01d8  addic 4, 28, -1
  00d01dc  extsw 6, 5
  00d01e0  ori 5, 3, 0
  00d01e4  ori 3, 6, 0
  00d01e8  extsw 4, 4
  00d01ec  ori 6, 30, 0
  00d01f0  bl 0x70514
  00d01f4  nop
  00d01f8  lwz 3, 14648(27)
  00d01fc  ori 4, 28, 0
  00d0200  addc 3, 3, 18
  00d0204  ori 5, 29, 0
  00d0208  ori 6, 30, 0
  00d020c  extsw 3, 3
  00d0210  li 7, -1
  00d0214  bl 0x70514
  00d0218  nop
  00d021c  lwz 3, 88(31)
  00d0220  extsw 3, 3
  00d0224  ld 0, 352(1)
  00d0228  mtlr 0
  00d022c  lfd 22, 256(1)
  00d0230  lfd 23, 264(1)
  00d0234  lfd 24, 272(1)
  00d0238  lfd 25, 280(1)
  00d023c  lfd 26, 288(1)
  00d0240  lfd 27, 296(1)
  00d0244  lfd 28, 304(1)
  00d0248  lfd 29, 312(1)
  00d024c  lfd 30, 320(1)
  00d0250  lfd 31, 328(1)
  00d0254  ld 18, 144(1)
  00d0258  ld 19, 152(1)
  00d025c  ld 20, 160(1)
  00d0260  ld 21, 168(1)
  00d0264  ld 22, 176(1)
  00d0268  ld 23, 184(1)
  00d026c  ld 24, 192(1)
  00d0270  ld 25, 200(1)
  00d0274  ld 26, 208(1)
  00d0278  ld 27, 216(1)
  00d027c  ld 28, 224(1)
  00d0280  ld 29, 232(1)
  00d0284  ld 30, 240(1)
  00d0288  ld 31, 248(1)
  00d028c  addi 1, 1, 336
  00d0290  blr

HealthHud_Init:   # 0xd02a0, 0xb8 bytes
  00d02a0  stdu 1, -128(1)
  00d02a4  mflr 0
  00d02a8  std 0, 144(1)
  00d02ac  lis 4, 13
  00d02b0  vspltisw 2, -1
  00d02b4  lis 5, 114
  00d02b8  addi 4, 4, 660
  00d02bc  li 6, -3056
  00d02c0  std 31, 120(1)
  00d02c4  vslw 2, 2, 2
  00d02c8  ori 31, 3, 0
  00d02cc  lvlx 3, 0, 4
  00d02d0  lvlx 4, 6, 5
  00d02d4  vspltw 3, 3, 0
  00d02d8  li 5, 4
  00d02dc  std 30, 112(1)
  00d02e0  li 6, 64
  00d02e4  li 30, 0
  00d02e8  vmaddfp 2, 4, 3, 2
  00d02ec  lvlx 3, 5, 4
  00d02f0  li 4, 124
  00d02f4  vspltw 3, 3, 0
  00d02f8  li 5, 32
  00d02fc  vctsxs 2, 2, 0
  00d0300  vadduwm 2, 2, 3
  00d0304  vspltw 2, 2, 0
  00d0308  stvewx 2, 4, 31
  00d030c  stw 6, 88(31)
  00d0310  stw 6, 92(31)
  00d0314  sth 5, 72(31)
  00d0318  sth 30, 74(31)
  00d031c  bl 0xc8e10
  00d0320  lis 3, 162
  00d0324  li 4, 1
  00d0328  addic 5, 3, -16000
  00d032c  sth 30, -16000(3)
  00d0330  stw 5, 128(31)
  00d0334  sth 30, 2(5)
  00d0338  sth 4, 6(5)
  00d033c  sth 30, 4(5)
  00d0340  ld 0, 144(1)
  00d0344  mtlr 0
  00d0348  ld 30, 112(1)
  00d034c  ld 31, 120(1)
  00d0350  addi 1, 1, 128
  00d0354  blr

HealthHud_Update:   # 0xd0360, 0x264 bytes
  00d0360  stdu 1, -128(1)
  00d0364  mflr 0
  00d0368  std 0, 144(1)
  00d036c  lwz 4, 12(3)
  00d0370  lwz 5, 120(3)
  00d0374  cmpwi 4, 0
  00d0378  bt 2, 0xd04b0
  00d037c  lwz 4, 0(4)
  00d0380  li 5, 0
  00d0384  extsw 7, 4
  00d0388  li 6, 0
  00d038c  subc 5, 7, 5
  00d0390  subc 8, 6, 4
  00d0394  sradi 5, 5, 63
  00d0398  lwz 6, 128(3)
  00d039c  and 5, 5, 8
  00d03a0  addc 4, 4, 5
  00d03a4  lis 5, -30584
  00d03a8  stw 4, 120(3)
  00d03ac  ori 4, 5, 34953
  00d03b0  lhz 5, 0(6)
  00d03b4  lhz 8, 4(6)
  00d03b8  extsh 5, 5
  00d03bc  lhz 9, 2(6)
  00d03c0  lhz 10, 6(6)
  00d03c4  addic 7, 5, 1
  00d03c8  mulhw 4, 4, 7
  00d03cc  addc 4, 4, 7
  00d03d0  srawi 4, 4, 5
  00d03d4  srwi 5, 4, 31
  00d03d8  addc 4, 4, 5
  00d03dc  addc 5, 9, 8
  00d03e0  sldi 11, 4, 6
  00d03e4  sldi 4, 4, 2
  00d03e8  subc 9, 11, 4
  00d03ec  sth 5, 2(6)
  00d03f0  addc 4, 8, 10
  00d03f4  subc 7, 7, 9
  00d03f8  extsh 8, 4
  00d03fc  cmpwi 8, 60
  00d0400  sth 7, 0(6)
  00d0404  cmpwi 1, 8, -60
  00d0408  sth 4, 4(6)
  00d040c  bf 1, 0xd041c
  00d0410  li 4, 60
  00d0414  sth 4, 4(6)
  00d0418  b 0xd0428
  00d041c  bf 4, 0xd0428
  00d0420  li 4, -60
  00d0424  sth 4, 4(6)
  00d0428  extsh 7, 5
  00d042c  cmpwi 7, 2047
  00d0430  cmpwi 1, 7, 4095
  00d0434  bf 1, 0xd044c
  00d0438  extsh 7, 4
  00d043c  cmpwi 7, 0
  00d0440  bf 1, 0xd044c
  00d0444  li 7, -1
  00d0448  sth 7, 6(6)
  00d044c  bf 5, 0xd0458
  00d0450  li 5, 4095
  00d0454  sth 5, 2(6)
  00d0458  extsh 5, 5
  00d045c  cmpwi 5, 2047
  00d0460  cmpwi 1, 5, 0
  00d0464  bf 0, 0xd047c
  00d0468  extsh 4, 4
  00d046c  cmpwi 4, 0
  00d0470  bf 0, 0xd047c
  00d0474  li 4, 1
  00d0478  sth 4, 6(6)
  00d047c  bf 4, 0xd0488
  00d0480  li 4, 0
  00d0484  sth 4, 2(6)
  00d0488  lwz 5, 120(3)
  00d048c  lwz 4, 8(3)
  00d0490  extsw 6, 5
  00d0494  subc 7, 4, 5
  00d0498  extsw 4, 4
  00d049c  subc 4, 4, 6
  00d04a0  sradi 4, 4, 63
  00d04a4  and 4, 4, 7
  00d04a8  addc 5, 5, 4
  00d04ac  stw 5, 120(3)
  00d04b0  lwz 4, 116(3)
  00d04b4  cmpw 4, 5
  00d04b8  cmpwi 1, 4, 1
  00d04bc  bf 2, 0xd04c4
  00d04c0  bf 6, 0xd0500
  00d04c4  lis 4, 13
  00d04c8  vspltisw 2, -1
  00d04cc  lis 6, 114
  00d04d0  addi 4, 4, 856
  00d04d4  li 7, -3056
  00d04d8  vslw 2, 2, 2
  00d04dc  lvlx 3, 0, 4
  00d04e0  lvlx 4, 7, 6
  00d04e4  li 4, 124
  00d04e8  vspltw 3, 3, 0
  00d04ec  vmaddfp 2, 4, 3, 2
  00d04f0  vctsxs 2, 2, 0
  00d04f4  vspltw 2, 2, 0
  00d04f8  stvewx 2, 4, 3
  00d04fc  stw 5, 116(3)
  00d0500  lis 4, 13
  00d0504  lis 5, 114
  00d0508  addi 4, 4, 856
  00d050c  lfs 1, 4(4)
  00d0510  lfs 2, -3056(5)
  00d0514  lwz 4, 124(3)
  00d0518  fmuls 1, 2, 1
  00d051c  fctiwz 1, 1
  00d0520  stfd 1, 112(1)
  00d0524  lwz 5, 116(1)
  00d0528  cmpw 4, 5
  00d052c  bt 0, 0xd056c
  00d0530  lis 4, 114
  00d0534  lbz 5, 112(3)
  00d0538  lwz 4, 17296(4)
  00d053c  cmpw 5, 4
  00d0540  bf 0, 0xd0550
  00d0544  addic 4, 5, 1
  00d0548  stb 4, 112(3)
  00d054c  b 0xd05ac
  00d0550  ori 5, 4, 0
  00d0554  lbz 4, 113(3)
  00d0558  cmpw 4, 5
  00d055c  bf 0, 0xd05ac
  00d0560  addic 4, 4, 1
  00d0564  stb 4, 113(3)
  00d0568  b 0xd05ac
  00d056c  li 5, 1
  00d0570  lbz 4, 113(3)
  00d0574  cmpwi 4, 0
  00d0578  stw 5, 108(3)
  00d057c  bt 2, 0xd058c
  00d0580  addic 4, 4, -1
  00d0584  stb 4, 113(3)
  00d0588  b 0xd05ac
  00d058c  lbz 4, 112(3)
  00d0590  cmpwi 4, 0
  00d0594  bt 2, 0xd05a4
  00d0598  addic 4, 4, -1
  00d059c  stb 4, 112(3)
  00d05a0  b 0xd05ac
  00d05a4  li 4, -6
  00d05a8  stw 4, 108(3)
  00d05ac  addic 3, 3, 64
  00d05b0  bl 0xc9138
  00d05b4  ld 0, 144(1)
  00d05b8  mtlr 0
  00d05bc  addi 1, 1, 128
  00d05c0  blr

Draw_NanotechUI:   # 0xd05e0, 0x898 bytes
  00d05e0  stdu 1, -320(1)
  00d05e4  mflr 0
  00d05e8  std 0, 336(1)
  00d05ec  stfd 29, 296(1)
  00d05f0  stfd 30, 304(1)
  00d05f4  stfd 31, 312(1)
  00d05f8  std 17, 176(1)
  00d05fc  std 22, 216(1)
  00d0600  lis 17, 151
  00d0604  ori 22, 3, 0
  00d0608  addic 17, 17, -25376
  00d060c  lbz 3, 8356(17)
  00d0610  std 31, 288(1)
  00d0614  std 30, 280(1)
  00d0618  std 29, 272(1)
  00d061c  std 28, 264(1)
  00d0620  std 27, 256(1)
  00d0624  std 26, 248(1)
  00d0628  std 25, 240(1)
  00d062c  std 24, 232(1)
  00d0630  std 23, 224(1)
  00d0634  std 21, 208(1)
  00d0638  std 20, 200(1)
  00d063c  std 19, 192(1)
  00d0640  std 18, 184(1)
  00d0644  std 16, 168(1)
  00d0648  std 15, 160(1)
  00d064c  std 14, 152(1)
  00d0650  cmpwi 3, 2
  00d0654  bt 2, 0xd0664
  00d0658  lwz 3, 8324(17)
  00d065c  cmpwi 3, 50
  00d0660  bf 2, 0xd0670
  00d0664  lwz 3, 88(22)
  00d0668  extsw 3, 3
  00d066c  b 0xd0e14
  00d0670  lis 3, 150
  00d0674  li 5, 0
  00d0678  lis 6, 114
  00d067c  li 4, 18
  00d0680  li 7, 10
  00d0684  lwz 3, 27372(3)
  00d0688  subc 4, 4, 7
  00d068c  lwz 26, 80(22)
  00d0690  subc 3, 5, 3
  00d0694  lwz 25, 17368(6)
  00d0698  cntlzw 3, 3
  00d069c  sldi 5, 3, 58
  00d06a0  lbz 3, 112(22)
  00d06a4  sradi 5, 5, 63
  00d06a8  cmpwi 3, 0
  00d06ac  lwz 15, 120(22)
  00d06b0  and 4, 5, 4
  00d06b4  addc 4, 7, 4
  00d06b8  addc 25, 25, 4
  00d06bc  bf 2, 0xd06cc
  00d06c0  lwz 3, 88(22)
  00d06c4  extsw 3, 3
  00d06c8  b 0xd0e14
  00d06cc  bl 0x502730
  00d06d0  nop
  00d06d4  fmr 31, 1
  00d06d8  lis 3, 114
  00d06dc  lwz 3, 17296(3)
  00d06e0  extsw 3, 3
  00d06e4  bl 0x502730
  00d06e8  nop
  00d06ec  fdivs 31, 31, 1
  00d06f0  lis 3, 13
  00d06f4  addi 3, 3, 1476
  00d06f8  lfs 29, 0(3)
  00d06fc  lbz 3, 113(22)
  00d0700  fcmpu 0, 31, 29
  00d0704  cror 6, 0, 2
  00d0708  bt 6, 0xd0714
  00d070c  fmr 31, 29
  00d0710  b 0xd0730
  00d0714  lis 4, 13
  00d0718  addi 4, 4, 1476
  00d071c  lfs 1, 4(4)
  00d0720  fcmpu 0, 31, 1
  00d0724  cror 6, 1, 2
  00d0728  bt 6, 0xd0730
  00d072c  fmr 31, 1
  00d0730  bl 0x502730
  00d0734  nop
  00d0738  fmr 30, 1
  00d073c  lis 3, 114
  00d0740  lwz 3, 17296(3)
  00d0744  extsw 3, 3
  00d0748  bl 0x502730
  00d074c  nop
  00d0750  fdivs 30, 30, 1
  00d0754  fcmpu 0, 30, 29
  00d0758  cror 6, 0, 2
  00d075c  bt 6, 0xd0768
  00d0760  fmr 30, 29
  00d0764  b 0xd0784
  00d0768  lis 3, 13
  00d076c  addi 3, 3, 1476
  00d0770  lfs 1, 4(3)
  00d0774  fcmpu 0, 30, 1
  00d0778  cror 6, 1, 2
  00d077c  bt 6, 0xd0784
  00d0780  fmr 30, 1
  00d0784  lis 3, 13
  00d0788  addi 3, 3, 1476
  00d078c  lfs 1, 8(3)
  00d0790  fmuls 1, 30, 1
  00d0794  bl 0x502758
  00d0798  nop
  00d079c  lis 4, 114
  00d07a0  ori 21, 3, 0
  00d07a4  lwz 4, 17392(4)
  00d07a8  extsw 4, 4
  00d07ac  std 4, 120(1)
  00d07b0  lfd 1, 120(1)
  00d07b4  fcfid 1, 1
  00d07b8  frsp 1, 1
  00d07bc  fmuls 1, 1, 31
  00d07c0  bl 0x502758
  00d07c4  nop
  00d07c8  lwz 16, 128(22)
  00d07cc  li 4, 0
  00d07d0  lbz 5, 8356(17)
  00d07d4  li 8, 1
  00d07d8  lis 6, 114
  00d07dc  subc 4, 4, 15
  00d07e0  lhz 7, 0(16)
  00d07e4  subc 5, 8, 5
  00d07e8  lwz 9, 8876(17)
  00d07ec  cntlzw 4, 4
  00d07f0  extsh 7, 7
  00d07f4  cntlzw 5, 5
  00d07f8  lwz 17, -1240(6)
  00d07fc  sldi 4, 4, 58
  00d0800  srawi 7, 7, 1
  00d0804  li 10, 30
  00d0808  sldi 5, 5, 58
  00d080c  subc 6, 10, 7
  00d0810  ori 19, 3, 0
  00d0814  sradi 4, 4, 63
  00d0818  subc 3, 9, 17
  00d081c  sradi 5, 5, 63
  00d0820  and 4, 4, 6
  00d0824  and 3, 5, 3
  00d0828  addc 4, 7, 4
  00d082c  addc 17, 17, 3
  00d0830  cmpwi 17, 8
  00d0834  std 4, 112(1)
  00d0838  bf 2, 0xd0878
  00d083c  lis 3, 13
  00d0840  lis 14, 114
  00d0844  addi 3, 3, 1476
  00d0848  addic 14, 14, 17336
  00d084c  lfs 1, 12(3)
  00d0850  fmuls 31, 31, 1
  00d0854  fmr 1, 31
  00d0858  bl 0x502758
  00d085c  nop
  00d0860  fmr 1, 31
  00d0864  ori 24, 3, 0
  00d0868  bl 0x502758
  00d086c  nop
  00d0870  ori 20, 3, 0
  00d0874  b 0xd08e4
  00d0878  cmpwi 17, 5
  00d087c  bf 2, 0xd08bc
  00d0880  lis 3, 13
  00d0884  lis 14, 114
  00d0888  addi 31, 3, 1476
  00d088c  addic 14, 14, 17316
  00d0890  lfs 1, 16(31)
  00d0894  fmuls 1, 31, 1
  00d0898  bl 0x502758
  00d089c  nop
  00d08a0  lfs 1, 20(31)
  00d08a4  ori 24, 3, 0
  00d08a8  fmuls 1, 31, 1
  00d08ac  bl 0x502758
  00d08b0  nop
  00d08b4  ori 20, 3, 0
  00d08b8  b 0xd08e4
  00d08bc  lis 3, 13
  00d08c0  lis 14, 114
  00d08c4  addi 3, 3, 1476
  00d08c8  addic 14, 14, 17300
  00d08cc  lfs 1, 12(3)
  00d08d0  fmuls 1, 31, 1
  00d08d4  bl 0x502758
  00d08d8  nop
  00d08dc  ori 24, 3, 0
  00d08e0  li 20, 0
  00d08e4  lis 3, 114
  00d08e8  li 23, 0
  00d08ec  lis 30, 162
  00d08f0  lis 31, 0
  00d08f4  ori 29, 23, 0
  00d08f8  lwz 4, 17376(3)
  00d08fc  addic 30, 30, -16448
  00d0900  addc 18, 4, 25
  00d0904  ori 3, 29, 0
  00d0908  ori 31, 31, 65535
  00d090c  extsw 18, 18
  00d0910  lwz 27, 28(30)
  00d0914  lhzx 4, 27, 3
  00d0918  cmpwi 1, 4, 30080
  00d091c  cmpw 4, 31
  00d0920  cror 2, 2, 6
  00d0924  bt 2, 0xd0934
  00d0928  addic 3, 3, 8
  00d092c  addic 23, 23, 1
  00d0930  b 0xd0910
  00d0934  slwi 23, 23, 3
  00d0938  extsw 3, 23
  00d093c  lhzx 3, 27, 3
  00d0940  cmpw 3, 31
  00d0944  bf 2, 0xd0950
  00d0948  ori 23, 29, 0
  00d094c  b 0xd0970
  00d0950  addc 3, 27, 23
  00d0954  ori 23, 29, 0
  00d0958  clrldi 3, 3, 32
  00d095c  lhz 4, 2(3)
  00d0960  cmpwi 4, 1
  00d0964  bf 1, 0xd0970
  00d0968  lhz 23, 4(3)
  00d096c  addic 23, 23, 1
  00d0970  ori 3, 29, 0
  00d0974  ori 4, 27, 0
  00d0978  lhz 5, 0(4)
  00d097c  cmpwi 1, 5, 30080
  00d0980  cmpw 5, 31
  00d0984  cror 2, 2, 6
  00d0988  bt 2, 0xd0998
  00d098c  addic 4, 4, 8
  00d0990  addic 3, 3, 1
  00d0994  b 0xd0978
  00d0998  slwi 3, 3, 3
  00d099c  extsw 4, 3
  00d09a0  lhzx 4, 27, 4
  00d09a4  cmpw 4, 31
  00d09a8  bf 2, 0xd09b4
  00d09ac  ori 27, 29, 0
  00d09b0  b 0xd09d0
  00d09b4  addc 3, 27, 3
  00d09b8  ori 27, 29, 0
  00d09bc  clrldi 3, 3, 32
  00d09c0  lhz 4, 2(3)
  00d09c4  cmpwi 4, 0
  00d09c8  bf 1, 0xd09d0
  00d09cc  lhz 27, 4(3)
  00d09d0  std 31, 144(1)
  00d09d4  std 17, 136(1)
  00d09d8  addc 4, 24, 26
  00d09dc  lis 17, 114
  00d09e0  ori 3, 23, 0
  00d09e4  extsw 4, 4
  00d09e8  ori 5, 18, 0
  00d09ec  ori 8, 19, 0
  00d09f0  lwz 6, 17388(17)
  00d09f4  extsw 6, 6
  00d09f8  ori 7, 6, 0
  00d09fc  bl 0xcbb98
  00d0a00  lwz 3, 32(30)
  00d0a04  slwi 27, 27, 2
  00d0a08  subc 31, 26, 24
  00d0a0c  lwz 7, 17388(17)
  00d0a10  sldi 6, 24, 1
  00d0a14  lis 24, 161
  00d0a18  extsw 4, 31
  00d0a1c  addic 24, 24, 24396
  00d0a20  lwzx 3, 3, 27
  00d0a24  extsw 6, 6
  00d0a28  extsw 7, 7
  00d0a2c  sldi 5, 3, 5
  00d0a30  sldi 3, 3, 2
  00d0a34  lwz 8, 28(24)
  00d0a38  addc 3, 5, 3
  00d0a3c  ori 5, 18, 0
  00d0a40  addc 3, 8, 3
  00d0a44  ori 8, 19, 0
  00d0a48  clrldi 3, 3, 32
  00d0a4c  bl 0xcbe60
  00d0a50  slwi 28, 23, 2
  00d0a54  lwz 3, 32(30)
  00d0a58  ori 8, 19, 0
  00d0a5c  lwz 6, 17388(17)
  00d0a60  lwz 7, 28(24)
  00d0a64  subc 4, 31, 6
  00d0a68  extsw 6, 6
  00d0a6c  lwzx 3, 3, 28
  00d0a70  extsw 4, 4
  00d0a74  sldi 5, 3, 5
  00d0a78  sldi 3, 3, 2
  00d0a7c  addc 3, 5, 3
  00d0a80  ori 5, 18, 0
  00d0a84  addc 3, 7, 3
  00d0a88  ori 7, 6, 0
  00d0a8c  clrldi 3, 3, 32
  00d0a90  bl 0xcbe60
  00d0a94  cmpwi 20, 0
  00d0a98  ld 17, 136(1)
  00d0a9c  ld 31, 144(1)
  00d0aa0  bt 2, 0xd0b68
  00d0aa4  lis 4, 114
  00d0aa8  ori 3, 23, 0
  00d0aac  std 17, 144(1)
  00d0ab0  lis 23, 114
  00d0ab4  addc 5, 20, 26
  00d0ab8  ori 8, 19, 0
  00d0abc  lwz 7, 17372(4)
  00d0ac0  extsw 4, 5
  00d0ac4  lwz 6, 17388(23)
  00d0ac8  addc 5, 7, 18
  00d0acc  extsw 6, 6
  00d0ad0  extsw 18, 5
  00d0ad4  ori 7, 6, 0
  00d0ad8  ori 5, 18, 0
  00d0adc  bl 0xcbb98
  00d0ae0  lwz 3, 32(30)
  00d0ae4  lwz 9, 28(24)
  00d0ae8  subc 17, 26, 20
  00d0aec  lwz 7, 17388(23)
  00d0af0  sldi 6, 20, 1
  00d0af4  extsw 4, 17
  00d0af8  extsw 6, 6
  00d0afc  lwzx 3, 3, 27
  00d0b00  extsw 7, 7
  00d0b04  ori 5, 18, 0
  00d0b08  sldi 8, 3, 5
  00d0b0c  sldi 3, 3, 2
  00d0b10  addc 3, 8, 3
  00d0b14  ori 8, 19, 0
  00d0b18  addc 3, 9, 3
  00d0b1c  clrldi 3, 3, 32
  00d0b20  bl 0xcbe60
  00d0b24  lwz 3, 32(30)
  00d0b28  lwz 6, 17388(23)
  00d0b2c  ori 8, 19, 0
  00d0b30  lwz 7, 28(24)
  00d0b34  subc 4, 17, 6
  00d0b38  extsw 6, 6
  00d0b3c  lwzx 3, 3, 28
  00d0b40  extsw 4, 4
  00d0b44  sldi 5, 3, 5
  00d0b48  sldi 3, 3, 2
  00d0b4c  addc 3, 5, 3
  00d0b50  ori 5, 18, 0
  00d0b54  addc 3, 7, 3
  00d0b58  ori 7, 6, 0
  00d0b5c  clrldi 3, 3, 32
  00d0b60  bl 0xcbe60
  00d0b64  ld 17, 144(1)
  00d0b68  cmpwi 17, 0
  00d0b6c  ori 28, 29, 0
  00d0b70  bf 1, 0xd0e0c
  00d0b74  ori 27, 14, 0
  00d0b78  ld 14, 112(1)
  00d0b7c  ori 4, 29, 0
  00d0b80  ori 5, 4, 0
  00d0b84  lwz 3, 28(30)
  00d0b88  lhzx 6, 3, 5
  00d0b8c  cmpwi 1, 6, 30006
  00d0b90  cmpw 6, 31
  00d0b94  cror 2, 2, 6
  00d0b98  bt 2, 0xd0ba8
  00d0b9c  addic 5, 5, 8
  00d0ba0  addic 4, 4, 1
  00d0ba4  b 0xd0b84
  00d0ba8  slwi 4, 4, 3
  00d0bac  extsw 5, 4
  00d0bb0  lhzx 5, 3, 5
  00d0bb4  cmpw 5, 31
  00d0bb8  bf 2, 0xd0bc4
  00d0bbc  ori 3, 29, 0
  00d0bc0  b 0xd0be8
  00d0bc4  addc 4, 3, 4
  00d0bc8  ori 3, 29, 0
  00d0bcc  clrldi 4, 4, 32
  00d0bd0  lhz 5, 2(4)
  00d0bd4  cmpw 14, 5
  00d0bd8  bf 0, 0xd0be8
  00d0bdc  lhz 3, 4(4)
  00d0be0  addc 3, 3, 14
  00d0be4  extsw 3, 3
  00d0be8  lhz 5, 0(27)
  00d0bec  lhz 6, 2(27)
  00d0bf0  ori 4, 3, 0
  00d0bf4  extsh 5, 5
  00d0bf8  extsh 6, 6
  00d0bfc  addc 5, 5, 26
  00d0c00  addc 6, 6, 25
  00d0c04  ori 3, 22, 0
  00d0c08  li 7, 1
  00d0c0c  ori 8, 21, 0
  00d0c10  extsw 5, 5
  00d0c14  extsw 6, 6
  00d0c18  bl 0xcdeb8
  00d0c1c  cmpwi 14, 30
  00d0c20  bt 2, 0xd0dfc
  00d0c24  lwz 4, 28(30)
  00d0c28  lhz 6, 0(27)
  00d0c2c  ori 23, 29, 0
  00d0c30  lhz 3, 2(27)
  00d0c34  ori 5, 4, 0
  00d0c38  lhz 7, 0(5)
  00d0c3c  cmpwi 1, 7, 30006
  00d0c40  cmpw 7, 31
  00d0c44  cror 2, 2, 6
  00d0c48  bt 2, 0xd0c58
  00d0c4c  addic 5, 5, 8
  00d0c50  addic 23, 23, 1
  00d0c54  b 0xd0c38
  00d0c58  slwi 23, 23, 3
  00d0c5c  extsw 5, 23
  00d0c60  lhzx 5, 4, 5
  00d0c64  cmpw 5, 31
  00d0c68  bf 2, 0xd0c74
  00d0c6c  ori 23, 29, 0
  00d0c70  b 0xd0c94
  00d0c74  addc 4, 4, 23
  00d0c78  ori 23, 29, 0
  00d0c7c  clrldi 4, 4, 32
  00d0c80  lhz 5, 2(4)
  00d0c84  cmpwi 5, 30
  00d0c88  bf 1, 0xd0c94
  00d0c8c  lhz 23, 4(4)
  00d0c90  addic 23, 23, 30
  00d0c94  extsh 5, 6
  00d0c98  extsh 6, 3
  00d0c9c  addc 5, 5, 26
  00d0ca0  addc 6, 6, 25
  00d0ca4  ori 4, 23, 0
  00d0ca8  ori 3, 22, 0
  00d0cac  li 7, 1
  00d0cb0  extsw 5, 5
  00d0cb4  ori 8, 21, 0
  00d0cb8  extsw 6, 6
  00d0cbc  bl 0xcdeb8
  00d0cc0  lwz 23, 28(30)
  00d0cc4  lhz 3, 0(27)
  00d0cc8  ori 6, 29, 0
  00d0ccc  lhz 4, 2(16)
  00d0cd0  ori 7, 23, 0
  00d0cd4  lhz 5, 2(27)
  00d0cd8  lhz 8, 0(7)
  00d0cdc  cmpwi 1, 8, 30006
  00d0ce0  cmpw 8, 31
  00d0ce4  cror 2, 2, 6
  00d0ce8  bt 2, 0xd0cf8
  00d0cec  addic 7, 7, 8
  00d0cf0  addic 6, 6, 1
  00d0cf4  b 0xd0cd8
  00d0cf8  slwi 6, 6, 3
  00d0cfc  extsw 7, 6
  00d0d00  lhzx 7, 23, 7
  00d0d04  cmpw 7, 31
  00d0d08  bf 2, 0xd0d14
  00d0d0c  ori 23, 29, 0
  00d0d10  b 0xd0d34
  00d0d14  addc 6, 23, 6
  00d0d18  ori 23, 29, 0
  00d0d1c  clrldi 6, 6, 32
  00d0d20  lhz 7, 2(6)
  00d0d24  cmpwi 7, 31
  00d0d28  bf 1, 0xd0d34
  00d0d2c  lhz 23, 4(6)
  00d0d30  addic 23, 23, 31
  00d0d34  extsh 4, 4
  00d0d38  srawi 4, 4, 4
  00d0d3c  extsw 4, 4
  00d0d40  extsh 3, 3
  00d0d44  extsh 5, 5
  00d0d48  std 4, 120(1)
  00d0d4c  addic 4, 26, 14
  00d0d50  addc 3, 3, 4
  00d0d54  addc 4, 5, 25
  00d0d58  extsw 20, 3
  00d0d5c  addic 3, 4, -17
  00d0d60  extsw 19, 3
  00d0d64  lfd 1, 120(1)
  00d0d68  fcfid 1, 1
  00d0d6c  frsp 1, 1
  00d0d70  fmuls 1, 1, 30
  00d0d74  bl 0x502758
  00d0d78  nop
  00d0d7c  lwz 6, 32(30)
  00d0d80  slwi 7, 23, 2
  00d0d84  lwz 9, 28(24)
  00d0d88  ori 8, 3, 0
  00d0d8c  ori 4, 20, 0
  00d0d90  ori 5, 19, 0
  00d0d94  lwzx 3, 6, 7
  00d0d98  li 6, 34
  00d0d9c  sldi 7, 3, 5
  00d0da0  sldi 3, 3, 2
  00d0da4  addc 3, 7, 3
  00d0da8  li 7, 34
  00d0dac  addc 3, 9, 3
  00d0db0  clrldi 3, 3, 32
  00d0db4  bl 0xcbe60
  00d0db8  addic 4, 28, 1
  00d0dbc  li 3, 30
  00d0dc0  cmpw 15, 4
  00d0dc4  bt 2, 0xd0df8
  00d0dc8  lis 3, -30584
  00d0dcc  addic 4, 14, 6
  00d0dd0  ori 3, 3, 34953
  00d0dd4  mulhw 3, 3, 4
  00d0dd8  addc 3, 3, 4
  00d0ddc  srawi 3, 3, 4
  00d0de0  srwi 5, 3, 31
  00d0de4  addc 3, 3, 5
  00d0de8  sldi 5, 3, 5
  00d0dec  subc 5, 5, 3
  00d0df0  subc 3, 5, 3
  00d0df4  subc 3, 4, 3
  00d0df8  ori 14, 3, 0
  00d0dfc  addic 28, 28, 1
  00d0e00  addic 27, 27, 4
  00d0e04  cmpw 28, 17
  00d0e08  bt 0, 0xd0b7c
  00d0e0c  lwz 3, 88(22)
  00d0e10  extsw 3, 3
  00d0e14  ld 0, 336(1)
  00d0e18  mtlr 0
  00d0e1c  lfd 29, 296(1)
  00d0e20  lfd 30, 304(1)
  00d0e24  lfd 31, 312(1)
  00d0e28  ld 14, 152(1)
  00d0e2c  ld 15, 160(1)
  00d0e30  ld 16, 168(1)
  00d0e34  ld 17, 176(1)
  00d0e38  ld 18, 184(1)
  00d0e3c  ld 19, 192(1)
  00d0e40  ld 20, 200(1)
  00d0e44  ld 21, 208(1)
  00d0e48  ld 22, 216(1)
  00d0e4c  ld 23, 224(1)
  00d0e50  ld 24, 232(1)
  00d0e54  ld 25, 240(1)
  00d0e58  ld 26, 248(1)
  00d0e5c  ld 27, 256(1)
  00d0e60  ld 28, 264(1)
  00d0e64  ld 29, 272(1)
  00d0e68  ld 30, 280(1)
  00d0e6c  ld 31, 288(1)
  00d0e70  addi 1, 1, 320
  00d0e74  blr

AmmoHud_Init:   # 0xd0e80, 0x74 bytes
  00d0e80  stdu 1, -112(1)
  00d0e84  mflr 0
  00d0e88  std 0, 128(1)
  00d0e8c  lis 4, 13
  00d0e90  vspltisw 2, -1
  00d0e94  lis 5, 114
  00d0e98  addi 4, 4, 3704
  00d0e9c  li 6, -3056
  00d0ea0  vslw 2, 2, 2
  00d0ea4  li 7, 32
  00d0ea8  lvlx 3, 0, 4
  00d0eac  lvlx 4, 6, 5
  00d0eb0  vspltw 3, 3, 0
  00d0eb4  li 5, 4
  00d0eb8  li 6, 124
  00d0ebc  vmaddfp 2, 4, 3, 2
  00d0ec0  lvlx 3, 5, 4
  00d0ec4  vspltw 3, 3, 0
  00d0ec8  vctsxs 2, 2, 0
  00d0ecc  vadduwm 2, 2, 3
  00d0ed0  vspltw 2, 2, 0
  00d0ed4  stvewx 2, 6, 3
  00d0ed8  stw 7, 88(3)
  00d0edc  stw 7, 92(3)
  00d0ee0  bl 0xc8e10
  00d0ee4  ld 0, 128(1)
  00d0ee8  mtlr 0
  00d0eec  addi 1, 1, 112
  00d0ef0  blr

BoltHud_Init:   # 0xd0f00, 0x94 bytes
  00d0f00  stdu 1, -128(1)
  00d0f04  mflr 0
  00d0f08  std 0, 144(1)
  00d0f0c  lis 4, 13
  00d0f10  vspltisw 2, -1
  00d0f14  lis 5, 114
  00d0f18  addi 4, 4, 3828
  00d0f1c  li 6, -3056
  00d0f20  std 31, 120(1)
  00d0f24  vslw 2, 2, 2
  00d0f28  ori 31, 3, 0
  00d0f2c  lvlx 3, 0, 4
  00d0f30  lvlx 4, 6, 5
  00d0f34  vspltw 3, 3, 0
  00d0f38  li 5, 4
  00d0f3c  li 6, 32
  00d0f40  vmaddfp 2, 4, 3, 2
  00d0f44  lvlx 3, 5, 4
  00d0f48  li 4, 124
  00d0f4c  vspltw 3, 3, 0
  00d0f50  vctsxs 2, 2, 0
  00d0f54  vadduwm 2, 2, 3
  00d0f58  vspltw 2, 2, 0
  00d0f5c  stvewx 2, 4, 31
  00d0f60  stw 6, 88(31)
  00d0f64  stw 6, 92(31)
  00d0f68  bl 0xc8e10
  00d0f6c  lis 3, 162
  00d0f70  li 4, 0
  00d0f74  addic 5, 3, -15992
  00d0f78  sth 4, -15992(3)
  00d0f7c  stw 5, 128(31)
  00d0f80  ld 0, 144(1)
  00d0f84  mtlr 0
  00d0f88  ld 31, 120(1)
  00d0f8c  addi 1, 1, 128
  00d0f90  blr

BoltHud_Update:   # 0xd0fa0, 0x15c bytes
  00d0fa0  stdu 1, -64(1)
  00d0fa4  lwz 5, 128(3)
  00d0fa8  lis 4, -30584
  00d0fac  lis 7, 151
  00d0fb0  ori 4, 4, 34953
  00d0fb4  lhz 6, 0(5)
  00d0fb8  extsh 6, 6
  00d0fbc  lwz 9, 116(3)
  00d0fc0  addic 6, 6, 1
  00d0fc4  mulhw 4, 4, 6
  00d0fc8  lwz 7, -25440(7)
  00d0fcc  addc 4, 4, 6
  00d0fd0  cmpw 9, 7
  00d0fd4  srawi 4, 4, 5
  00d0fd8  srwi 8, 4, 31
  00d0fdc  addc 4, 4, 8
  00d0fe0  sldi 8, 4, 6
  00d0fe4  sldi 4, 4, 2
  00d0fe8  subc 4, 8, 4
  00d0fec  subc 4, 6, 4
  00d0ff0  lwz 6, 124(3)
  00d0ff4  sth 4, 0(5)
  00d0ff8  lbz 5, 112(3)
  00d0ffc  lbz 4, 113(3)
  00d1000  cmpwi 1, 5, 0
  00d1004  cmpwi 6, 4, 0
  00d1008  bt 2, 0xd1060
  00d100c  lis 6, 13
  00d1010  vspltisw 3, -1
  00d1014  lis 8, 114
  00d1018  stw 7, 116(3)
  00d101c  addi 6, 6, 3988
  00d1020  li 9, -3056
  00d1024  vslw 3, 3, 3
  00d1028  li 7, 124
  00d102c  lvlx 2, 0, 6
  00d1030  lfs 1, 0(6)
  00d1034  vspltw 2, 2, 0
  00d1038  lvlx 4, 9, 8
  00d103c  lfs 2, -3056(8)
  00d1040  vmaddfp 2, 4, 2, 3
  00d1044  fmuls 1, 2, 1
  00d1048  fctiwz 1, 1
  00d104c  vctsxs 2, 2, 0
  00d1050  stfd 1, 48(1)
  00d1054  vspltw 2, 2, 0
  00d1058  lwz 6, 52(1)
  00d105c  stvewx 2, 7, 3
  00d1060  lis 7, 13
  00d1064  lis 8, 114
  00d1068  addi 7, 7, 3988
  00d106c  lfs 1, 4(7)
  00d1070  lfs 2, -3056(8)
  00d1074  fmuls 1, 2, 1
  00d1078  fctiwz 1, 1
  00d107c  stfd 1, 48(1)
  00d1080  lwz 7, 52(1)
  00d1084  cmpw 6, 7
  00d1088  bt 0, 0xd10c4
  00d108c  lis 6, 114
  00d1090  lwz 6, 17396(6)
  00d1094  cmpw 5, 6
  00d1098  bf 0, 0xd10a8
  00d109c  addic 4, 5, 1
  00d10a0  stb 4, 112(3)
  00d10a4  b 0xd10f4
  00d10a8  lis 5, 114
  00d10ac  lwz 5, 17400(5)
  00d10b0  cmpw 4, 5
  00d10b4  bf 0, 0xd10f4
  00d10b8  addic 4, 4, 1
  00d10bc  stb 4, 113(3)
  00d10c0  b 0xd10f4
  00d10c4  li 6, 1
  00d10c8  stw 6, 108(3)
  00d10cc  bt 26, 0xd10dc
  00d10d0  addic 4, 4, -1
  00d10d4  stb 4, 113(3)
  00d10d8  b 0xd10f4
  00d10dc  bt 6, 0xd10ec
  00d10e0  addic 4, 5, -1
  00d10e4  stb 4, 112(3)
  00d10e8  b 0xd10f4
  00d10ec  li 4, -6
  00d10f0  stw 4, 108(3)
  00d10f4  addi 1, 1, 64
  00d10f8  blr

Draw_BoltCountUI:   # 0xd1110, 0x6bc bytes
  00d1110  stdu 1, -272(1)
  00d1114  mflr 0
  00d1118  std 0, 288(1)
  00d111c  stfd 29, 248(1)
  00d1120  stfd 30, 256(1)
  00d1124  stfd 31, 264(1)
  00d1128  std 31, 240(1)
  00d112c  lis 4, 151
  00d1130  std 30, 232(1)
  00d1134  ori 31, 3, 0
  00d1138  lwz 30, 128(3)
  00d113c  addic 4, 4, -25376
  00d1140  lwz 3, 8324(4)
  00d1144  std 29, 224(1)
  00d1148  std 28, 216(1)
  00d114c  std 27, 208(1)
  00d1150  std 26, 200(1)
  00d1154  std 25, 192(1)
  00d1158  std 24, 184(1)
  00d115c  std 23, 176(1)
  00d1160  std 22, 168(1)
  00d1164  std 21, 160(1)
  00d1168  std 20, 152(1)
  00d116c  cmpwi 3, 50
  00d1170  bf 2, 0xd1180
  00d1174  lwz 3, 88(31)
  00d1178  extsw 3, 3
  00d117c  b 0xd1780
  00d1180  lbz 3, 112(31)
  00d1184  cmpwi 3, 0
  00d1188  bf 2, 0xd1198
  00d118c  lwz 3, 88(31)
  00d1190  extsw 3, 3
  00d1194  b 0xd1780
  00d1198  lis 4, 150
  00d119c  li 5, 0
  00d11a0  li 6, 18
  00d11a4  li 21, 10
  00d11a8  lwz 4, 27372(4)
  00d11ac  lwz 29, 80(31)
  00d11b0  subc 4, 5, 4
  00d11b4  subc 5, 6, 21
  00d11b8  cntlzw 4, 4
  00d11bc  sldi 4, 4, 58
  00d11c0  sradi 4, 4, 63
  00d11c4  and 4, 4, 5
  00d11c8  addc 21, 21, 4
  00d11cc  bl 0x502730
  00d11d0  nop
  00d11d4  fmr 31, 1
  00d11d8  lis 3, 114
  00d11dc  lwz 3, 17396(3)
  00d11e0  extsw 3, 3
  00d11e4  bl 0x502730
  00d11e8  nop
  00d11ec  fdivs 31, 31, 1
  00d11f0  lis 3, 13
  00d11f4  addi 3, 3, 4348
  00d11f8  lfs 29, 0(3)
  00d11fc  lbz 3, 113(31)
  00d1200  fcmpu 0, 31, 29
  00d1204  cror 6, 0, 2
  00d1208  bt 6, 0xd1214
  00d120c  fmr 31, 29
  00d1210  b 0xd1230
  00d1214  lis 4, 13
  00d1218  addi 4, 4, 4348
  00d121c  lfs 1, 4(4)
  00d1220  fcmpu 0, 31, 1
  00d1224  cror 6, 1, 2
  00d1228  bt 6, 0xd1230
  00d122c  fmr 31, 1
  00d1230  bl 0x502730
  00d1234  nop
  00d1238  fmr 30, 1
  00d123c  lis 3, 114
  00d1240  lwz 3, 17400(3)
  00d1244  extsw 3, 3
  00d1248  bl 0x502730
  00d124c  nop
  00d1250  fdivs 30, 30, 1
  00d1254  fcmpu 0, 30, 29
  00d1258  cror 6, 0, 2
  00d125c  bt 6, 0xd1268
  00d1260  fmr 30, 29
  00d1264  b 0xd1284
  00d1268  lis 3, 13
  00d126c  addi 3, 3, 4348
  00d1270  lfs 1, 4(3)
  00d1274  fcmpu 0, 30, 1
  00d1278  cror 6, 1, 2
  00d127c  bt 6, 0xd1284
  00d1280  fmr 30, 1
  00d1284  lis 3, 13
  00d1288  addi 28, 3, 4348
  00d128c  lfs 1, 8(28)
  00d1290  fmuls 1, 31, 1
  00d1294  bl 0x502758
  00d1298  nop
  00d129c  extsw 3, 3
  00d12a0  std 3, 128(1)
  00d12a4  lfs 1, 12(28)
  00d12a8  lfd 2, 128(1)
  00d12ac  fcfid 2, 2
  00d12b0  frsp 2, 2
  00d12b4  fmuls 1, 2, 1
  00d12b8  bl 0x502758
  00d12bc  nop
  00d12c0  lis 4, 151
  00d12c4  ori 28, 3, 0
  00d12c8  li 27, 1
  00d12cc  ori 25, 27, 0
  00d12d0  lwz 3, -25440(4)
  00d12d4  cmpwi 3, 10
  00d12d8  bt 0, 0xd1300
  00d12dc  lis 4, 26214
  00d12e0  addic 27, 27, 1
  00d12e4  ori 4, 4, 26215
  00d12e8  mulhw 3, 4, 3
  00d12ec  srawi 3, 3, 2
  00d12f0  srwi 4, 3, 31
  00d12f4  addc 3, 3, 4
  00d12f8  cmpwi 3, 10
  00d12fc  bf 0, 0xd12dc
  00d1300  lis 3, 114
  00d1304  lwz 3, 17436(3)
  00d1308  mullw 3, 3, 27
  00d130c  extsw 3, 3
  00d1310  std 3, 128(1)
  00d1314  lfd 1, 128(1)
  00d1318  fcfid 1, 1
  00d131c  frsp 1, 1
  00d1320  fmuls 1, 1, 31
  00d1324  bl 0x502758
  00d1328  nop
  00d132c  lis 23, 162
  00d1330  ori 26, 3, 0
  00d1334  addic 23, 23, -16448
  00d1338  li 3, 0
  00d133c  lis 22, 0
  00d1340  ori 24, 3, 0
  00d1344  ori 22, 22, 65535
  00d1348  lwz 4, 28(23)
  00d134c  ori 5, 4, 0
  00d1350  lhz 6, 0(5)
  00d1354  cmpwi 1, 6, 30080
  00d1358  cmpw 6, 22
  00d135c  cror 2, 2, 6
  00d1360  bt 2, 0xd1370
  00d1364  addic 5, 5, 8
  00d1368  addic 3, 3, 1
  00d136c  b 0xd1350
  00d1370  slwi 3, 3, 3
  00d1374  extsw 5, 3
  00d1378  lhzx 5, 4, 5
  00d137c  cmpw 5, 22
  00d1380  bf 2, 0xd138c
  00d1384  ori 3, 24, 0
  00d1388  b 0xd13ac
  00d138c  addc 4, 4, 3
  00d1390  ori 3, 24, 0
  00d1394  clrldi 4, 4, 32
  00d1398  lhz 5, 2(4)
  00d139c  cmpwi 5, 1
  00d13a0  bf 1, 0xd13ac
  00d13a4  lhz 3, 4(4)
  00d13a8  addic 3, 3, 1
  00d13ac  addic 4, 29, -12
  00d13b0  ori 5, 21, 0
  00d13b4  extsw 4, 4
  00d13b8  li 6, 32
  00d13bc  li 7, 32
  00d13c0  ori 8, 28, 0
  00d13c4  bl 0xcbb98
  00d13c8  lwz 5, 28(23)
  00d13cc  ori 3, 24, 0
  00d13d0  lwz 4, 32(23)
  00d13d4  ori 6, 5, 0
  00d13d8  lhz 7, 0(6)
  00d13dc  cmpwi 1, 7, 30080
  00d13e0  cmpw 7, 22
  00d13e4  cror 2, 2, 6
  00d13e8  bt 2, 0xd13f8
  00d13ec  addic 6, 6, 8
  00d13f0  addic 3, 3, 1
  00d13f4  b 0xd13d8
  00d13f8  slwi 3, 3, 3
  00d13fc  extsw 6, 3
  00d1400  lhzx 6, 5, 6
  00d1404  cmpw 6, 22
  00d1408  bf 2, 0xd1414
  00d140c  ori 3, 24, 0
  00d1410  b 0xd1430
  00d1414  addc 5, 5, 3
  00d1418  ori 3, 24, 0
  00d141c  clrldi 5, 5, 32
  00d1420  lhz 6, 2(5)
  00d1424  cmpwi 6, 0
  00d1428  bf 1, 0xd1430
  00d142c  lhz 3, 4(5)
  00d1430  slwi 3, 3, 2
  00d1434  lis 5, 161
  00d1438  addic 6, 26, 16
  00d143c  subc 26, 29, 26
  00d1440  addic 20, 5, 24396
  00d1444  addic 5, 26, -28
  00d1448  lwzx 3, 4, 3
  00d144c  extsw 6, 6
  00d1450  extsw 4, 5
  00d1454  sldi 5, 3, 5
  00d1458  sldi 3, 3, 2
  00d145c  lwz 7, 28(20)
  00d1460  ori 8, 28, 0
  00d1464  addc 3, 5, 3
  00d1468  ori 5, 21, 0
  00d146c  addc 3, 7, 3
  00d1470  li 7, 32
  00d1474  clrldi 3, 3, 32
  00d1478  bl 0xcbe60
  00d147c  lwz 4, 28(23)
  00d1480  ori 3, 24, 0
  00d1484  lwz 5, 28(20)
  00d1488  ori 7, 4, 0
  00d148c  lwz 6, 32(23)
  00d1490  lhz 8, 0(7)
  00d1494  cmpwi 1, 8, 30080
  00d1498  cmpw 8, 22
  00d149c  cror 2, 2, 6
  00d14a0  bt 2, 0xd14b0
  00d14a4  addic 7, 7, 8
  00d14a8  addic 3, 3, 1
  00d14ac  b 0xd1490
  00d14b0  slwi 3, 3, 3
  00d14b4  extsw 7, 3
  00d14b8  lhzx 7, 4, 7
  00d14bc  cmpw 7, 22
  00d14c0  bf 2, 0xd14cc
  00d14c4  ori 4, 24, 0
  00d14c8  b 0xd14ec
  00d14cc  addc 3, 4, 3
  00d14d0  ori 4, 24, 0
  00d14d4  clrldi 3, 3, 32
  00d14d8  lhz 7, 2(3)
  00d14dc  cmpwi 7, 1
  00d14e0  bf 1, 0xd14ec
  00d14e4  lhz 4, 4(3)
  00d14e8  addic 4, 4, 1
  00d14ec  slwi 4, 4, 2
  00d14f0  ori 3, 5, 0
  00d14f4  addic 5, 26, -60
  00d14f8  ori 8, 28, 0
  00d14fc  lwzx 6, 6, 4
  00d1500  extsw 4, 5
  00d1504  sldi 7, 6, 5
  00d1508  sldi 6, 6, 2
  00d150c  ori 5, 21, 0
  00d1510  addc 7, 7, 6
  00d1514  li 6, 32
  00d1518  addc 3, 3, 7
  00d151c  li 7, 32
  00d1520  clrldi 3, 3, 32
  00d1524  bl 0xcbe60
  00d1528  lhz 6, 0(30)
  00d152c  ori 3, 24, 0
  00d1530  lwz 4, 28(23)
  00d1534  extsh 30, 6
  00d1538  ori 5, 4, 0
  00d153c  srawi 30, 30, 1
  00d1540  lhz 6, 0(5)
  00d1544  cmpwi 1, 6, 30031
  00d1548  cmpw 6, 22
  00d154c  cror 2, 2, 6
  00d1550  bt 2, 0xd1560
  00d1554  addic 5, 5, 8
  00d1558  addic 3, 3, 1
  00d155c  b 0xd1540
  00d1560  slwi 3, 3, 3
  00d1564  extsw 5, 3
  00d1568  lhzx 5, 4, 5
  00d156c  cmpw 5, 22
  00d1570  bf 2, 0xd157c
  00d1574  ori 4, 24, 0
  00d1578  b 0xd159c
  00d157c  addc 3, 4, 3
  00d1580  ori 4, 24, 0
  00d1584  clrldi 3, 3, 32
  00d1588  lhz 5, 2(3)
  00d158c  cmpw 30, 5
  00d1590  bf 0, 0xd159c
  00d1594  lhz 4, 4(3)
  00d1598  addc 4, 4, 30
  00d159c  addic 5, 29, -32
  00d15a0  ori 3, 31, 0
  00d15a4  li 7, 0
  00d15a8  extsw 5, 5
  00d15ac  ori 6, 21, 0
  00d15b0  li 8, 128
  00d15b4  bl 0xcdeb8
  00d15b8  lis 3, 114
  00d15bc  lis 4, 114
  00d15c0  fmr 1, 30
  00d15c4  lwz 3, 17404(3)
  00d15c8  lwz 4, 17408(4)
  00d15cc  extsw 3, 3
  00d15d0  extsw 4, 4
  00d15d4  bl 0x5027bc
  00d15d8  nop
  00d15dc  ori 30, 3, 0
  00d15e0  fmr 1, 30
  00d15e4  lis 4, -32768
  00d15e8  li 3, 0
  00d15ec  bl 0x5027bc
  00d15f0  nop
  00d15f4  lis 4, 151
  00d15f8  lis 5, 101
  00d15fc  addic 26, 1, 112
  00d1600  ori 28, 3, 0
  00d1604  ori 3, 26, 0
  00d1608  lwz 6, -25440(4)
  00d160c  addic 4, 5, 8472
  00d1610  extsw 5, 6
  00d1614  bl 0x5cd2a8
  00d1618  nop
  00d161c  lis 23, 114
  00d1620  lis 22, 114
  00d1624  ori 5, 28, 0
  00d1628  ori 6, 26, 0
  00d162c  li 7, -1
  00d1630  lwz 3, 17412(23)
  00d1634  lwz 4, 17416(22)
  00d1638  addc 3, 3, 29
  00d163c  addc 4, 4, 21
  00d1640  addic 3, 3, 1
  00d1644  addic 4, 4, 1
  00d1648  extsw 3, 3
  00d164c  extsw 4, 4
  00d1650  bl 0x70130
  00d1654  nop
  00d1658  lwz 3, 17412(23)
  00d165c  lwz 4, 17416(22)
  00d1660  ori 5, 30, 0
  00d1664  addc 3, 3, 29
  00d1668  addc 4, 4, 21
  00d166c  ori 6, 26, 0
  00d1670  extsw 4, 4
  00d1674  extsw 3, 3
  00d1678  li 7, -1
  00d167c  bl 0x70130
  00d1680  nop
  00d1684  lis 4, 151
  00d1688  lwz 4, -25484(4)
  00d168c  cmpwi 4, 3
  00d1690  bt 2, 0xd16ac
  00d1694  cmpwi 4, 5
  00d1698  bt 2, 0xd16ac
  00d169c  lis 3, 101
  00d16a0  ori 24, 25, 0
  00d16a4  addic 25, 3, 8480
  00d16a8  b 0xd16b4
  00d16ac  lis 25, 101
  00d16b0  addic 25, 25, 8408
  00d16b4  ori 3, 26, 0
  00d16b8  ori 4, 25, 0
  00d16bc  bl 0x5cd2a8
  00d16c0  nop
  00d16c4  cmpwi 24, 0
  00d16c8  bt 2, 0xd16e0
  00d16cc  lis 3, 114
  00d16d0  lis 4, 114
  00d16d4  lwz 23, 17424(3)
  00d16d8  lwz 3, 17420(4)
  00d16dc  b 0xd16f0
  00d16e0  lis 3, 114
  00d16e4  lis 4, 114
  00d16e8  lwz 23, 17432(3)
  00d16ec  lwz 3, 17428(4)
  00d16f0  cmpwi 27, 3
  00d16f4  li 25, 3
  00d16f8  bf 1, 0xd1778
  00d16fc  addic 4, 21, 2
  00d1700  addc 29, 3, 29
  00d1704  addc 24, 23, 4
  00d1708  addc 23, 23, 21
  00d170c  extsw 24, 24
  00d1710  extsw 23, 23
  00d1714  lis 22, 114
  00d1718  ori 4, 24, 0
  00d171c  ori 5, 28, 0
  00d1720  ori 6, 26, 0
  00d1724  li 7, -1
  00d1728  lwz 3, 17436(22)
  00d172c  mullw 3, 3, 25
  00d1730  subc 3, 29, 3
  00d1734  addic 3, 3, 2
  00d1738  extsw 3, 3
  00d173c  bl 0x70130
  00d1740  nop
  00d1744  lwz 3, 17436(22)
  00d1748  ori 4, 23, 0
  00d174c  mullw 3, 3, 25
  00d1750  ori 5, 30, 0
  00d1754  subc 3, 29, 3
  00d1758  ori 6, 26, 0
  00d175c  extsw 3, 3
  00d1760  li 7, -1
  00d1764  bl 0x70130
  00d1768  nop
  00d176c  addic 25, 25, 3
  00d1770  cmpw 25, 27
  00d1774  bt 0, 0xd1714
  00d1778  lwz 3, 88(31)
  00d177c  extsw 3, 3
  00d1780  ld 0, 288(1)
  00d1784  mtlr 0
  00d1788  lfd 29, 248(1)
  00d178c  lfd 30, 256(1)
  00d1790  lfd 31, 264(1)
  00d1794  ld 20, 152(1)
  00d1798  ld 21, 160(1)
  00d179c  ld 22, 168(1)
  00d17a0  ld 23, 176(1)
  00d17a4  ld 24, 184(1)
  00d17a8  ld 25, 192(1)
  00d17ac  ld 26, 200(1)
  00d17b0  ld 27, 208(1)
  00d17b4  ld 28, 216(1)
  00d17b8  ld 29, 224(1)
  00d17bc  ld 30, 232(1)
  00d17c0  ld 31, 240(1)
  00d17c4  addi 1, 1, 272
  00d17c8  blr

UnusedIconHud_Init:   # 0xd17d8, 0xb4 bytes
  00d17d8  stdu 1, -128(1)
  00d17dc  mflr 0
  00d17e0  std 0, 144(1)
  00d17e4  lis 4, 13
  00d17e8  vspltisw 2, -1
  00d17ec  lis 5, 114
  00d17f0  addi 4, 4, 6092
  00d17f4  li 6, -3056
  00d17f8  std 31, 120(1)
  00d17fc  vslw 2, 2, 2
  00d1800  ori 31, 3, 0
  00d1804  lvlx 3, 0, 4
  00d1808  lvlx 4, 6, 5
  00d180c  vspltw 3, 3, 0
  00d1810  li 5, 4
  00d1814  std 30, 112(1)
  00d1818  li 6, 64
  00d181c  li 30, 0
  00d1820  vmaddfp 2, 4, 3, 2
  00d1824  lvlx 3, 5, 4
  00d1828  li 4, 124
  00d182c  vspltw 3, 3, 0
  00d1830  li 5, 32
  00d1834  vctsxs 2, 2, 0
  00d1838  vadduwm 2, 2, 3
  00d183c  vspltw 2, 2, 0
  00d1840  stvewx 2, 4, 31
  00d1844  stw 6, 88(31)
  00d1848  stw 6, 92(31)
  00d184c  sth 5, 72(31)
  00d1850  sth 30, 74(31)
  00d1854  bl 0xc8e10
  00d1858  lis 3, 162
  00d185c  addic 4, 3, -16016
  00d1860  stw 30, -16016(3)
  00d1864  stw 4, 128(31)
  00d1868  stw 30, 12(4)
  00d186c  stw 30, 4(4)
  00d1870  stw 30, 8(4)
  00d1874  ld 0, 144(1)
  00d1878  mtlr 0
  00d187c  ld 30, 112(1)
  00d1880  ld 31, 120(1)
  00d1884  addi 1, 1, 128
  00d1888  blr

UnusedIconHud_Update:   # 0xd1898, 0x2f4 bytes
  00d1898  stdu 1, -128(1)
  00d189c  mflr 0
  00d18a0  std 0, 144(1)
  00d18a4  lwz 10, 12(3)
  00d18a8  lwz 5, 128(3)
  00d18ac  lis 4, 13
  00d18b0  lwz 8, 120(3)
  00d18b4  cmpwi 10, 0
  00d18b8  lwz 9, 8(3)
  00d18bc  addi 4, 4, 6284
  00d18c0  lwz 7, 116(3)
  00d18c4  lwz 6, 108(3)
  00d18c8  bt 2, 0xd1910
  00d18cc  lwz 10, 0(10)
  00d18d0  li 8, 0
  00d18d4  extsw 12, 10
  00d18d8  li 11, 0
  00d18dc  subc 8, 12, 8
  00d18e0  subc 11, 11, 10
  00d18e4  sradi 8, 8, 63
  00d18e8  extsw 12, 9
  00d18ec  and 8, 8, 11
  00d18f0  addc 8, 10, 8
  00d18f4  extsw 10, 8
  00d18f8  subc 9, 9, 8
  00d18fc  subc 10, 12, 10
  00d1900  sradi 10, 10, 63
  00d1904  and 9, 10, 9
  00d1908  addc 8, 8, 9
  00d190c  stw 8, 120(3)
  00d1910  cmpw 7, 8
  00d1914  bt 2, 0xd19c8
  00d1918  lwz 9, 4(5)
  00d191c  cmpwi 9, 0
  00d1920  bf 2, 0xd19c8
  00d1924  vspltisw 2, -1
  00d1928  lis 9, 114
  00d192c  lvlx 3, 0, 4
  00d1930  li 10, -3056
  00d1934  vspltw 3, 3, 0
  00d1938  vslw 2, 2, 2
  00d193c  cmpwi 6, 0
  00d1940  lvlx 4, 10, 9
  00d1944  li 9, 124
  00d1948  vmaddfp 2, 4, 3, 2
  00d194c  vctsxs 2, 2, 0
  00d1950  vspltw 2, 2, 0
  00d1954  stvewx 2, 9, 3
  00d1958  bf 0, 0xd1990
  00d195c  extsw 6, 7
  00d1960  extsw 9, 8
  00d1964  subc 7, 7, 8
  00d1968  subc 6, 9, 6
  00d196c  li 9, 128
  00d1970  sradi 6, 6, 63
  00d1974  and 6, 6, 7
  00d1978  addc 6, 8, 6
  00d197c  stw 6, 0(5)
  00d1980  lwz 6, 120(3)
  00d1984  stw 6, 116(3)
  00d1988  stw 9, 8(5)
  00d198c  lwz 6, 108(3)
  00d1990  cmpwi 6, 24
  00d1994  bt 0, 0xd19c8
  00d1998  li 6, 128
  00d199c  stw 6, 4(5)
  00d19a0  lwz 6, 116(3)
  00d19a4  lwz 7, 120(3)
  00d19a8  extsw 8, 6
  00d19ac  extsw 9, 7
  00d19b0  subc 6, 6, 7
  00d19b4  subc 8, 9, 8
  00d19b8  sradi 8, 8, 63
  00d19bc  and 6, 8, 6
  00d19c0  addc 6, 7, 6
  00d19c4  stw 6, 0(5)
  00d19c8  lis 6, 114
  00d19cc  lwz 7, 12(5)
  00d19d0  lwz 6, 17444(6)
  00d19d4  lwz 8, 4(5)
  00d19d8  addc 6, 7, 6
  00d19dc  cmpwi 8, 0
  00d19e0  stw 6, 12(5)
  00d19e4  bt 2, 0xd1a54
  00d19e8  vspltisw 2, -1
  00d19ec  lis 6, 114
  00d19f0  li 7, -3056
  00d19f4  lvlx 3, 0, 4
  00d19f8  vspltw 3, 3, 0
  00d19fc  vslw 2, 2, 2
  00d1a00  lvlx 4, 7, 6
  00d1a04  li 8, 0
  00d1a08  li 6, 124
  00d1a0c  vmaddfp 2, 4, 3, 2
  00d1a10  lis 7, 114
  00d1a14  vctsxs 2, 2, 0
  00d1a18  vspltw 2, 2, 0
  00d1a1c  stvewx 2, 6, 3
  00d1a20  lwz 6, 4(5)
  00d1a24  lwz 7, 17440(7)
  00d1a28  stw 8, 8(5)
  00d1a2c  subc 6, 6, 7
  00d1a30  cmpwi 6, 0
  00d1a34  stw 6, 4(5)
  00d1a38  bt 1, 0xd1a54
  00d1a3c  li 6, 0
  00d1a40  li 7, 128
  00d1a44  stw 6, 4(5)
  00d1a48  stw 7, 8(5)
  00d1a4c  lwz 6, 120(3)
  00d1a50  stw 6, 116(3)
  00d1a54  lwz 6, 8(5)
  00d1a58  cmpwi 6, 0
  00d1a5c  bt 2, 0xd1ad4
  00d1a60  li 6, 4
  00d1a64  vspltisw 2, -1
  00d1a68  lis 7, 114
  00d1a6c  li 8, -3056
  00d1a70  vslw 2, 2, 2
  00d1a74  lvlx 3, 6, 4
  00d1a78  li 6, 124
  00d1a7c  vspltw 3, 3, 0
  00d1a80  lvlx 4, 8, 7
  00d1a84  lwz 7, 108(3)
  00d1a88  vmaddfp 2, 4, 3, 2
  00d1a8c  cmpwi 7, 24
  00d1a90  vctsxs 2, 2, 0
  00d1a94  vspltw 2, 2, 0
  00d1a98  stvewx 2, 6, 3
  00d1a9c  lwz 6, 8(5)
  00d1aa0  bf 1, 0xd1ab0
  00d1aa4  lis 7, 114
  00d1aa8  lwz 7, 17440(7)
  00d1aac  subc 6, 6, 7
  00d1ab0  extsw 7, 6
  00d1ab4  li 9, 0
  00d1ab8  li 8, 0
  00d1abc  subc 7, 9, 7
  00d1ac0  subc 6, 6, 8
  00d1ac4  sradi 7, 7, 63
  00d1ac8  and 6, 7, 6
  00d1acc  addc 6, 8, 6
  00d1ad0  stw 6, 8(5)
  00d1ad4  lis 5, 114
  00d1ad8  lfs 1, 8(4)
  00d1adc  lfs 2, -3056(5)
  00d1ae0  lwz 4, 124(3)
  00d1ae4  fmuls 1, 2, 1
  00d1ae8  fctiwz 1, 1
  00d1aec  stfd 1, 112(1)
  00d1af0  lwz 5, 116(1)
  00d1af4  cmpw 4, 5
  00d1af8  bt 0, 0xd1b3c
  00d1afc  lis 5, 114
  00d1b00  lbz 4, 112(3)
  00d1b04  lwz 5, 17396(5)
  00d1b08  cmpw 4, 5
  00d1b0c  bf 0, 0xd1b1c
  00d1b10  addic 4, 4, 1
  00d1b14  stb 4, 112(3)
  00d1b18  b 0xd1b74
  00d1b1c  lis 5, 114
  00d1b20  lbz 4, 113(3)
  00d1b24  lwz 5, 17400(5)
  00d1b28  cmpw 4, 5
  00d1b2c  bf 0, 0xd1b74
  00d1b30  addic 4, 4, 1
  00d1b34  stb 4, 113(3)
  00d1b38  b 0xd1b74
  00d1b3c  lbz 4, 113(3)
  00d1b40  cmpwi 4, 0
  00d1b44  bt 2, 0xd1b54
  00d1b48  addic 4, 4, -1
  00d1b4c  stb 4, 113(3)
  00d1b50  b 0xd1b74
  00d1b54  lbz 4, 112(3)
  00d1b58  cmpwi 4, 0
  00d1b5c  bt 2, 0xd1b6c
  00d1b60  addic 4, 4, -1
  00d1b64  stb 4, 112(3)
  00d1b68  b 0xd1b74
  00d1b6c  li 4, -6
  00d1b70  stw 4, 108(3)
  00d1b74  addic 3, 3, 64
  00d1b78  bl 0xc9138
  00d1b7c  ld 0, 144(1)
  00d1b80  mtlr 0
  00d1b84  addi 1, 1, 128
  00d1b88  blr

UnusedIconHud_Draw:   # 0xd1b8c, 0x268 bytes
  00d1b8c  stdu 1, -160(1)
  00d1b90  mflr 0
  00d1b94  std 0, 176(1)
  00d1b98  std 31, 152(1)
  00d1b9c  std 29, 136(1)
  00d1ba0  ori 31, 3, 0
  00d1ba4  li 29, 1
  00d1ba8  li 3, 1
  00d1bac  lwz 4, 116(31)
  00d1bb0  lwz 8, 80(31)
  00d1bb4  std 30, 144(1)
  00d1bb8  subc 5, 4, 29
  00d1bbc  lwz 30, 128(31)
  00d1bc0  extsw 4, 4
  00d1bc4  lwz 7, 84(31)
  00d1bc8  subc 3, 3, 4
  00d1bcc  lwz 4, 96(31)
  00d1bd0  stw 8, 112(1)
  00d1bd4  sradi 3, 3, 63
  00d1bd8  stw 7, 116(1)
  00d1bdc  clrlwi 9, 4, 31
  00d1be0  lwz 6, 88(31)
  00d1be4  and 10, 3, 5
  00d1be8  lwz 5, 92(31)
  00d1bec  cmpwi 9, 0
  00d1bf0  lwz 3, 108(31)
  00d1bf4  std 28, 128(1)
  00d1bf8  addc 29, 29, 10
  00d1bfc  bf 2, 0xd1c18
  00d1c00  rlwinm 9, 4, 0, 30, 30
  00d1c04  cmpwi 9, 0
  00d1c08  bf 2, 0xd1c18
  00d1c0c  srawi 5, 5, 1
  00d1c10  subc 5, 7, 5
  00d1c14  stw 5, 116(1)
  00d1c18  rlwinm 5, 4, 0, 29, 29
  00d1c1c  cmpwi 5, 0
  00d1c20  bf 2, 0xd1c54
  00d1c24  rlwinm 4, 4, 0, 28, 28
  00d1c28  li 5, 0
  00d1c2c  srawi 7, 6, 1
  00d1c30  subc 4, 5, 4
  00d1c34  subc 5, 7, 6
  00d1c38  cntlzw 4, 4
  00d1c3c  sldi 4, 4, 58
  00d1c40  sradi 4, 4, 63
  00d1c44  and 4, 4, 5
  00d1c48  addc 4, 6, 4
  00d1c4c  subc 4, 8, 4
  00d1c50  stw 4, 112(1)
  00d1c54  extsw 6, 3
  00d1c58  ori 3, 31, 0
  00d1c5c  addic 4, 1, 112
  00d1c60  addic 5, 1, 116
  00d1c64  li 7, 0
  00d1c68  bl 0xc8c08
  00d1c6c  lis 3, 162
  00d1c70  lhz 4, 64(31)
  00d1c74  li 7, 1
  00d1c78  addic 28, 3, -16448
  00d1c7c  addc 3, 29, 29
  00d1c80  extsh 4, 4
  00d1c84  addc 29, 29, 3
  00d1c88  sldi 4, 4, 3
  00d1c8c  lwz 3, 28(28)
  00d1c90  lwz 5, 112(1)
  00d1c94  addc 3, 3, 4
  00d1c98  lwz 6, 116(1)
  00d1c9c  addic 4, 29, -3
  00d1ca0  clrldi 8, 3, 32
  00d1ca4  ori 3, 31, 0
  00d1ca8  extsw 5, 5
  00d1cac  extsw 6, 6
  00d1cb0  lhz 9, 4(8)
  00d1cb4  li 8, 128
  00d1cb8  addc 4, 9, 4
  00d1cbc  extsw 4, 4
  00d1cc0  bl 0xcdeb8
  00d1cc4  lhz 3, 64(31)
  00d1cc8  addic 4, 29, -2
  00d1ccc  lwz 5, 28(28)
  00d1cd0  lwz 6, 12(30)
  00d1cd4  extsh 3, 3
  00d1cd8  lwz 8, 112(1)
  00d1cdc  srawi 7, 6, 8
  00d1ce0  sldi 3, 3, 3
  00d1ce4  addze 7, 7
  00d1ce8  addc 3, 5, 3
  00d1cec  sldi 7, 7, 8
  00d1cf0  clrldi 3, 3, 32
  00d1cf4  subc 5, 6, 7
  00d1cf8  li 7, 0
  00d1cfc  subfic 5, 5, 128
  00d1d00  lwz 6, 116(1)
  00d1d04  extsw 9, 5
  00d1d08  lhz 3, 4(3)
  00d1d0c  extsw 5, 8
  00d1d10  neg 8, 9
  00d1d14  subc 7, 9, 7
  00d1d18  subc 8, 8, 9
  00d1d1c  sradi 10, 7, 63
  00d1d20  addc 4, 3, 4
  00d1d24  and 8, 10, 8
  00d1d28  extsw 6, 6
  00d1d2c  extsw 4, 4
  00d1d30  ori 3, 31, 0
  00d1d34  li 7, 1
  00d1d38  addc 8, 9, 8
  00d1d3c  bl 0xcdeb8
  00d1d40  lwz 6, 4(30)
  00d1d44  lwz 5, 68(31)
  00d1d48  lwz 4, 112(1)
  00d1d4c  cmpwi 6, 0
  00d1d50  lwz 3, 116(1)
  00d1d54  bf 2, 0xd1d64
  00d1d58  lwz 7, 8(30)
  00d1d5c  cmpwi 7, 0
  00d1d60  bt 2, 0xd1dcc
  00d1d64  lwz 9, 0(30)
  00d1d68  li 7, 1
  00d1d6c  extsw 10, 9
  00d1d70  li 8, 1
  00d1d74  subc 7, 7, 10
  00d1d78  subc 9, 9, 8
  00d1d7c  sradi 7, 7, 63
  00d1d80  cmpwi 6, 0
  00d1d84  and 7, 7, 9
  00d1d88  addc 7, 8, 7
  00d1d8c  addc 8, 7, 7
  00d1d90  addc 7, 7, 8
  00d1d94  addc 7, 5, 7
  00d1d98  subfic 5, 6, 128
  00d1d9c  addic 6, 7, -1
  00d1da0  extsw 6, 6
  00d1da4  bf 2, 0xd1dac
  00d1da8  lwz 5, 8(30)
  00d1dac  ori 7, 6, 0
  00d1db0  extsw 8, 5
  00d1db4  extsw 5, 4
  00d1db8  extsw 6, 3
  00d1dbc  ori 4, 7, 0
  00d1dc0  ori 3, 31, 0
  00d1dc4  li 7, 1
  00d1dc8  bl 0xcdeb8
  00d1dcc  lwz 3, 88(31)
  00d1dd0  extsw 3, 3
  00d1dd4  ld 0, 176(1)
  00d1dd8  mtlr 0
  00d1ddc  ld 28, 128(1)
  00d1de0  ld 29, 136(1)
  00d1de4  ld 30, 144(1)
  00d1de8  ld 31, 152(1)
  00d1dec  addi 1, 1, 160
  00d1df0  blr

Draw_MobyMeterHud:   # 0xd1df4, 0x1f4 bytes
  00d1df4  stdu 1, -144(1)
  00d1df8  mflr 0
  00d1dfc  std 0, 160(1)
  00d1e00  std 31, 136(1)
  00d1e04  ori 31, 3, 0
  00d1e08  li 3, 200
  00d1e0c  li 7, 32
  00d1e10  lwz 6, 80(31)
  00d1e14  lwz 5, 84(31)
  00d1e18  lwz 4, 96(31)
  00d1e1c  stw 6, 112(1)
  00d1e20  stw 5, 116(1)
  00d1e24  clrlwi 8, 4, 31
  00d1e28  stw 3, 88(31)
  00d1e2c  cmpwi 8, 0
  00d1e30  stw 7, 92(31)
  00d1e34  std 30, 128(1)
  00d1e38  lwz 3, 108(31)
  00d1e3c  bf 2, 0xd1e54
  00d1e40  rlwinm 7, 4, 0, 30, 30
  00d1e44  cmpwi 7, 0
  00d1e48  bf 2, 0xd1e54
  00d1e4c  addic 5, 5, -16
  00d1e50  stw 5, 116(1)
  00d1e54  rlwinm 5, 4, 0, 29, 29
  00d1e58  cmpwi 5, 0
  00d1e5c  bf 2, 0xd1e94
  00d1e60  rlwinm 4, 4, 0, 28, 28
  00d1e64  li 5, 0
  00d1e68  li 7, 100
  00d1e6c  subc 4, 5, 4
  00d1e70  li 5, 200
  00d1e74  cntlzw 4, 4
  00d1e78  subc 7, 7, 5
  00d1e7c  sldi 4, 4, 58
  00d1e80  sradi 4, 4, 63
  00d1e84  and 4, 4, 7
  00d1e88  addc 4, 5, 4
  00d1e8c  subc 4, 6, 4
  00d1e90  stw 4, 112(1)
  00d1e94  extsw 6, 3
  00d1e98  ori 3, 31, 0
  00d1e9c  addic 4, 1, 112
  00d1ea0  addic 5, 1, 116
  00d1ea4  li 7, 0
  00d1ea8  bl 0xc8c08
  00d1eac  lwz 3, 88(31)
  00d1eb0  lwz 4, 116(31)
  00d1eb4  mullw 3, 3, 4
  00d1eb8  lwz 4, 8(31)
  00d1ebc  lis 5, -32720
  00d1ec0  divw 3, 3, 4
  00d1ec4  lwz 4, 112(1)
  00d1ec8  lwz 7, 116(1)
  00d1ecc  ori 5, 5, 12528
  00d1ed0  addc 8, 3, 4
  00d1ed4  extsw 3, 4
  00d1ed8  addic 6, 7, 18
  00d1edc  addic 8, 8, 1
  00d1ee0  extsw 4, 7
  00d1ee4  clrldi 7, 5, 32
  00d1ee8  extsw 5, 8
  00d1eec  extsw 6, 6
  00d1ef0  li 8, 0
  00d1ef4  bl 0xca72c
  00d1ef8  lis 3, -32513
  00d1efc  lwz 4, 112(1)
  00d1f00  ori 3, 3, 65535
  00d1f04  lwz 6, 116(1)
  00d1f08  addic 5, 4, -1
  00d1f0c  clrldi 30, 3, 32
  00d1f10  addic 8, 6, -1
  00d1f14  extsw 3, 5
  00d1f18  addic 5, 4, 203
  00d1f1c  extsw 4, 8
  00d1f20  extsw 6, 6
  00d1f24  ori 7, 30, 0
  00d1f28  li 8, 0
  00d1f2c  extsw 5, 5
  00d1f30  bl 0xca72c
  00d1f34  lwz 3, 112(1)
  00d1f38  lwz 5, 116(1)
  00d1f3c  ori 7, 30, 0
  00d1f40  addic 6, 3, 202
  00d1f44  addic 3, 3, 203
  00d1f48  extsw 4, 5
  00d1f4c  addic 9, 5, 19
  00d1f50  extsw 3, 3
  00d1f54  extsw 5, 6
  00d1f58  li 8, 0
  00d1f5c  extsw 6, 9
  00d1f60  bl 0xca72c
  00d1f64  lwz 3, 112(1)
  00d1f68  ori 7, 30, 0
  00d1f6c  lwz 4, 116(1)
  00d1f70  li 8, 0
  00d1f74  addic 5, 3, -1
  00d1f78  addic 6, 4, 19
  00d1f7c  addic 3, 3, 203
  00d1f80  addic 4, 4, 18
  00d1f84  extsw 5, 5
  00d1f88  extsw 3, 3
  00d1f8c  extsw 4, 4
  00d1f90  extsw 6, 6
  00d1f94  bl 0xca72c
  00d1f98  lwz 5, 112(1)
  00d1f9c  ori 7, 30, 0
  00d1fa0  lwz 3, 116(1)
  00d1fa4  li 8, 0
  00d1fa8  addic 4, 5, -1
  00d1fac  addic 6, 3, -1
  00d1fb0  addic 9, 3, 18
  00d1fb4  extsw 3, 4
  00d1fb8  extsw 5, 5
  00d1fbc  extsw 6, 6
  00d1fc0  extsw 4, 9
  00d1fc4  bl 0xca72c
  00d1fc8  lwz 3, 88(31)
  00d1fcc  extsw 3, 3
  00d1fd0  ld 0, 160(1)
  00d1fd4  mtlr 0
  00d1fd8  ld 30, 128(1)
  00d1fdc  ld 31, 136(1)
  00d1fe0  addi 1, 1, 144
  00d1fe4  blr

TrickHud_Init:   # 0xd1ff0, 0x90 bytes
  00d1ff0  stdu 1, -112(1)
  00d1ff4  mflr 0
  00d1ff8  std 0, 128(1)
  00d1ffc  lis 4, 13
  00d2000  vspltisw 2, -1
  00d2004  lis 5, 114
  00d2008  addi 4, 4, 8168
  00d200c  li 6, -3056
  00d2010  vslw 2, 2, 2
  00d2014  lis 7, 162
  00d2018  lvlx 3, 0, 4
  00d201c  lvlx 4, 6, 5
  00d2020  vspltw 3, 3, 0
  00d2024  li 5, 4
  00d2028  li 6, 124
  00d202c  addic 8, 7, -14332
  00d2030  vmaddfp 2, 4, 3, 2
  00d2034  lvlx 3, 5, 4
  00d2038  li 4, 0
  00d203c  vspltw 3, 3, 0
  00d2040  li 5, -1
  00d2044  vctsxs 2, 2, 0
  00d2048  vadduwm 2, 2, 3
  00d204c  vspltw 2, 2, 0
  00d2050  stvewx 2, 6, 3
  00d2054  sth 4, 72(3)
  00d2058  sth 4, 74(3)
  00d205c  stw 5, 12(8)
  00d2060  stw 5, 8(8)
  00d2064  stw 5, 4(8)
  00d2068  stw 5, -14332(7)
  00d206c  bl 0xc8e10
  00d2070  ld 0, 128(1)
  00d2074  mtlr 0
  00d2078  addi 1, 1, 112
  00d207c  blr

TrickHud_Update:   # 0xd20a0, 0x44c bytes
  00d20a0  stdu 1, -144(1)
  00d20a4  mflr 0
  00d20a8  std 0, 160(1)
  00d20ac  std 31, 136(1)
  00d20b0  ori 31, 3, 0
  00d20b4  li 3, 116
  00d20b8  li 4, 112
  00d20bc  lvlx 2, 3, 31
  00d20c0  lwz 5, 12(31)
  00d20c4  vcfsx 2, 2, 0
  00d20c8  lis 3, 13
  00d20cc  addi 6, 3, 8320
  00d20d0  addic 3, 1, 112
  00d20d4  vspltw 2, 2, 0
  00d20d8  stvewx 2, 4, 1
  00d20dc  lwz 4, 0(5)
  00d20e0  extsw 4, 4
  00d20e4  std 4, 120(1)
  00d20e8  lfs 2, 0(6)
  00d20ec  lfd 1, 120(1)
  00d20f0  fcfid 1, 1
  00d20f4  frsp 1, 1
  00d20f8  bl 0x109af0
  00d20fc  nop
  00d2100  lfs 1, 112(1)
  00d2104  bl 0x502758
  00d2108  nop
  00d210c  lbz 4, 114(31)
  00d2110  stw 3, 116(31)
  00d2114  cmpwi 4, 0
  00d2118  lbz 3, 113(31)
  00d211c  bt 1, 0xd212c
  00d2120  cmpwi 4, -1
  00d2124  bf 1, 0xd24d8
  00d2128  b 0xd2140
  00d212c  cmpwi 4, 1
  00d2130  bf 1, 0xd21d4
  00d2134  cmpwi 4, 3
  00d2138  bf 1, 0xd239c
  00d213c  b 0xd24d8
  00d2140  lis 3, 151
  00d2144  addic 3, 3, -25376
  00d2148  lhz 4, 782(3)
  00d214c  extsh 4, 4
  00d2150  cmpwi 4, 5
  00d2154  bf 1, 0xd24d8
  00d2158  li 4, 1804
  00d215c  lis 5, 13
  00d2160  li 6, 4
  00d2164  addi 5, 5, 8320
  00d2168  lvlx 2, 4, 3
  00d216c  vcfsx 3, 2, 0
  00d2170  lvlx 4, 6, 5
  00d2174  vspltw 4, 4, 0
  00d2178  vspltw 3, 3, 0
  00d217c  vcmpgefp. 3, 3, 4
  00d2180  bt 26, 0xd24d8
  00d2184  vspltw 2, 2, 0
  00d2188  lis 5, 162
  00d218c  lis 3, 162
  00d2190  li 4, -14356
  00d2194  li 6, 0
  00d2198  lis 7, 162
  00d219c  addic 8, 5, -14348
  00d21a0  li 9, 1
  00d21a4  stw 6, -14348(5)
  00d21a8  stvewx 2, 4, 3
  00d21ac  lis 5, 114
  00d21b0  stw 6, -14352(7)
  00d21b4  stw 6, 4(8)
  00d21b8  stw 6, 8(8)
  00d21bc  stw 6, 12(8)
  00d21c0  stb 9, 114(31)
  00d21c4  lwz 3, 17448(5)
  00d21c8  stb 6, 112(31)
  00d21cc  stb 3, 113(31)
  00d21d0  b 0xd24d8
  00d21d4  lbz 4, 112(31)
  00d21d8  cmpwi 4, 10
  00d21dc  bf 0, 0xd21e8
  00d21e0  addic 4, 4, 1
  00d21e4  stb 4, 112(31)
  00d21e8  cmpwi 3, 0
  00d21ec  bf 1, 0xd21f8
  00d21f0  addic 3, 3, -1
  00d21f4  stb 3, 113(31)
  00d21f8  lis 5, 151
  00d21fc  lis 4, 162
  00d2200  addic 5, 5, -25376
  00d2204  lis 6, 162
  00d2208  lis 8, 162
  00d220c  addic 7, 6, -14348
  00d2210  li 3, 2
  00d2214  lwz 9, 1776(5)
  00d2218  lwz 10, 1760(5)
  00d221c  stw 9, -14352(4)
  00d2220  ori 4, 9, 0
  00d2224  lwz 9, 1764(5)
  00d2228  stw 10, -14348(6)
  00d222c  lwz 6, 1768(5)
  00d2230  stw 9, 4(7)
  00d2234  lwz 9, 1772(5)
  00d2238  stw 6, 8(7)
  00d223c  stw 9, 12(7)
  00d2240  lwz 6, 1804(5)
  00d2244  lwz 7, -14356(8)
  00d2248  cmpw 7, 6
  00d224c  bf 0, 0xd226c
  00d2250  lis 4, 162
  00d2254  lis 7, 114
  00d2258  lis 8, 162
  00d225c  stw 6, -14356(4)
  00d2260  lwz 4, 17448(7)
  00d2264  stb 4, 113(31)
  00d2268  lwz 4, -14352(8)
  00d226c  lwz 6, 768(5)
  00d2270  cmpwi 6, 0
  00d2274  bf 2, 0xd228c
  00d2278  lwz 6, 8324(5)
  00d227c  cmpwi 6, 109
  00d2280  cmpwi 1, 6, 111
  00d2284  bt 0, 0xd24d8
  00d2288  bt 5, 0xd24d8
  00d228c  lis 6, 162
  00d2290  li 7, 0
  00d2294  cmpwi 1, 4, 3
  00d2298  li 4, 3
  00d229c  stw 7, -14316(6)
  00d22a0  stw 7, 1776(5)
  00d22a4  stw 7, 1804(5)
  00d22a8  stw 7, 1760(5)
  00d22ac  stw 7, 1764(5)
  00d22b0  stw 7, 1768(5)
  00d22b4  stw 7, 1772(5)
  00d22b8  lwz 6, 8324(5)
  00d22bc  stw 7, 1792(5)
  00d22c0  stw 7, 1796(5)
  00d22c4  cmpwi 6, 107
  00d22c8  stw 7, 1800(5)
  00d22cc  bf 2, 0xd234c
  00d22d0  bt 4, 0xd22fc
  00d22d4  lis 3, 162
  00d22d8  li 6, -1
  00d22dc  addic 5, 3, -14332
  00d22e0  lwz 7, -14332(3)
  00d22e4  lwz 8, 8(5)
  00d22e8  lwz 9, 4(5)
  00d22ec  stw 8, 12(5)
  00d22f0  stw 9, 8(5)
  00d22f4  stw 7, 4(5)
  00d22f8  stw 6, -14332(3)
  00d22fc  lis 3, 114
  00d2300  stb 4, 114(31)
  00d2304  lis 6, 13
  00d2308  vspltisw 3, -1
  00d230c  li 5, 8
  00d2310  addi 6, 6, 8320
  00d2314  lis 4, 114
  00d2318  lwz 3, 17448(3)
  00d231c  li 7, -3056
  00d2320  vslw 3, 3, 3
  00d2324  stb 3, 113(31)
  00d2328  lvlx 2, 5, 6
  00d232c  li 3, 112
  00d2330  vspltw 2, 2, 0
  00d2334  lvlx 4, 7, 4
  00d2338  vmaddfp 2, 4, 2, 3
  00d233c  vctsxs 2, 2, 0
  00d2340  vspltb 2, 2, 3
  00d2344  stvebx 2, 3, 31
  00d2348  b 0xd24d8
  00d234c  lis 4, 114
  00d2350  stb 3, 114(31)
  00d2354  lis 6, 13
  00d2358  vspltisw 3, -1
  00d235c  li 5, 12
  00d2360  addi 6, 6, 8320
  00d2364  lis 3, 114
  00d2368  lwz 4, 17448(4)
  00d236c  li 7, -3056
  00d2370  vslw 3, 3, 3
  00d2374  stb 4, 113(31)
  00d2378  lvlx 2, 5, 6
  00d237c  vspltw 2, 2, 0
  00d2380  lvlx 4, 7, 3
  00d2384  li 3, 112
  00d2388  vmaddfp 2, 4, 2, 3
  00d238c  vctsxs 2, 2, 0
  00d2390  vspltb 2, 2, 3
  00d2394  stvebx 2, 3, 31
  00d2398  b 0xd24d8
  00d239c  lbz 3, 112(31)
  00d23a0  cmpwi 3, 0
  00d23a4  bt 1, 0xd23e4
  00d23a8  lis 4, 162
  00d23ac  li 3, 0
  00d23b0  lis 5, 162
  00d23b4  lis 6, 162
  00d23b8  lis 7, 162
  00d23bc  addic 8, 5, -14348
  00d23c0  stw 3, -14316(4)
  00d23c4  stw 3, -14348(5)
  00d23c8  stw 3, -14356(6)
  00d23cc  stw 3, -14352(7)
  00d23d0  stw 3, 4(8)
  00d23d4  stw 3, 8(8)
  00d23d8  stw 3, 12(8)
  00d23dc  stb 3, 114(31)
  00d23e0  b 0xd24d0
  00d23e4  cmpwi 4, 3
  00d23e8  bf 2, 0xd24d0
  00d23ec  lis 4, 13
  00d23f0  lis 5, 114
  00d23f4  addi 4, 4, 8320
  00d23f8  li 6, -3056
  00d23fc  lfs 2, 16(4)
  00d2400  lfs 1, -3056(5)
  00d2404  lvlx 2, 6, 5
  00d2408  fmuls 2, 1, 2
  00d240c  fctiwz 2, 2
  00d2410  stfd 2, 120(1)
  00d2414  lwz 4, 124(1)
  00d2418  cmpw 3, 4
  00d241c  bf 2, 0xd24d0
  00d2420  lis 4, 151
  00d2424  lis 5, 162
  00d2428  vspltisw 3, -1
  00d242c  addic 4, 4, -25376
  00d2430  lis 6, 13
  00d2434  addi 6, 6, 8320
  00d2438  vslw 3, 3, 3
  00d243c  lwz 5, -14316(5)
  00d2440  lwz 7, 2216(4)
  00d2444  sldi 8, 5, 2
  00d2448  lwz 9, 2148(4)
  00d244c  addc 7, 7, 5
  00d2450  addc 5, 5, 8
  00d2454  addc 5, 9, 5
  00d2458  stw 7, 2216(4)
  00d245c  li 7, 20
  00d2460  stw 5, 2148(4)
  00d2464  lfs 2, 20(6)
  00d2468  fmuls 1, 1, 2
  00d246c  lvlx 4, 7, 6
  00d2470  lfs 2, 24(6)
  00d2474  vspltw 4, 4, 0
  00d2478  li 7, 24
  00d247c  vmaddfp 2, 2, 4, 3
  00d2480  vspltisw 3, -1
  00d2484  fctidz 1, 1
  00d2488  lvlx 4, 7, 6
  00d248c  vslw 3, 3, 3
  00d2490  vspltw 4, 4, 0
  00d2494  vctsxs 2, 2, 0
  00d2498  fcfid 1, 1
  00d249c  frsp 1, 1
  00d24a0  vcfsx 2, 2, 0
  00d24a4  fmuls 1, 1, 2
  00d24a8  vmaddfp 2, 2, 4, 3
  00d24ac  fctiwz 1, 1
  00d24b0  vctsxs 2, 2, 0
  00d24b4  stfd 1, 120(1)
  00d24b8  lwz 6, 124(1)
  00d24bc  cmpw 5, 6
  00d24c0  bf 1, 0xd24d0
  00d24c4  vspltw 2, 2, 0
  00d24c8  li 5, 2148
  00d24cc  stvewx 2, 5, 4
  00d24d0  addic 3, 3, -1
  00d24d4  stb 3, 112(31)
  00d24d8  ld 0, 160(1)
  00d24dc  mtlr 0
  00d24e0  ld 31, 136(1)
  00d24e4  addi 1, 1, 144
  00d24e8  blr

Hud_DrawEffectTexQuad:   # 0xd24ec, 0x2d0 bytes
  00d24ec  stdu 1, -176(1)
  00d24f0  mflr 0
  00d24f4  std 0, 192(1)
  00d24f8  lis 9, 162
  00d24fc  lis 10, 161
  00d2500  addic 9, 9, -16448
  00d2504  sldi 3, 3, 2
  00d2508  addic 10, 10, 24396
  00d250c  std 31, 168(1)
  00d2510  extsw 3, 3
  00d2514  ori 31, 8, 0
  00d2518  lwz 9, 32(9)
  00d251c  std 26, 128(1)
  00d2520  lis 11, 144
  00d2524  ori 26, 4, 0
  00d2528  std 28, 144(1)
  00d252c  std 27, 136(1)
  00d2530  lwz 8, 28(10)
  00d2534  addic 28, 11, -23532
  00d2538  std 29, 152(1)
  00d253c  ori 27, 6, 0
  00d2540  lwzx 3, 9, 3
  00d2544  std 30, 160(1)
  00d2548  ori 29, 5, 0
  00d254c  ori 30, 7, 0
  00d2550  sldi 4, 3, 5
  00d2554  sldi 3, 3, 2
  00d2558  lwz 5, 40(28)
  00d255c  addc 3, 4, 3
  00d2560  li 4, 0
  00d2564  addc 6, 8, 3
  00d2568  std 25, 120(1)
  00d256c  ori 3, 5, 0
  00d2570  clrldi 25, 6, 32
  00d2574  ori 5, 25, 0
  00d2578  bl 0x4d6d00
  00d257c  nop
  00d2580  lwz 3, 40(28)
  00d2584  bl 0x4d6948
  00d2588  nop
  00d258c  lwz 3, 40(28)
  00d2590  lis 4, 4
  00d2594  lwz 5, 24(25)
  00d2598  slwi 6, 31, 24
  00d259c  ori 4, 4, 6472
  00d25a0  lis 7, 0
  00d25a4  lwz 8, 8(3)
  00d25a8  oris 6, 6, 128
  00d25ac  ori 7, 7, 32896
  00d25b0  or 6, 6, 7
  00d25b4  stw 4, 0(8)
  00d25b8  lwz 4, 8(3)
  00d25bc  lis 7, 16396
  00d25c0  lis 8, 4
  00d25c4  lis 9, 4
  00d25c8  stw 6, 4(4)
  00d25cc  lwz 4, 8(3)
  00d25d0  ori 6, 7, 5908
  00d25d4  addic 4, 4, 8
  00d25d8  clrlwi 10, 26, 16
  00d25dc  stw 4, 8(3)
  00d25e0  lwz 3, 40(28)
  00d25e4  li 4, 0
  00d25e8  lwz 7, 8(3)
  00d25ec  addc 31, 30, 29
  00d25f0  stw 6, 0(7)
  00d25f4  lwz 6, 8(3)
  00d25f8  ori 7, 8, 6152
  00d25fc  li 8, 8
  00d2600  stw 4, 4(6)
  00d2604  lwz 6, 8(3)
  00d2608  stw 4, 8(6)
  00d260c  lwz 6, 8(3)
  00d2610  stw 4, 12(6)
  00d2614  lwz 6, 8(3)
  00d2618  stw 7, 16(6)
  00d261c  lwz 6, 8(3)
  00d2620  stw 8, 20(6)
  00d2624  lwz 6, 8(3)
  00d2628  ori 8, 9, 6404
  00d262c  addic 6, 6, 24
  00d2630  stw 6, 8(3)
  00d2634  lwz 3, 40(28)
  00d2638  lis 6, 4
  00d263c  ori 6, 6, 6400
  00d2640  lwz 9, 8(3)
  00d2644  stw 8, 0(9)
  00d2648  lwz 9, 8(3)
  00d264c  stw 4, 4(9)
  00d2650  lwz 9, 8(3)
  00d2654  addic 9, 9, 8
  00d2658  stw 9, 8(3)
  00d265c  lwz 3, 40(28)
  00d2660  ori 9, 10, 0
  00d2664  rlwimi 9, 29, 16, 0, 15
  00d2668  lwz 11, 8(3)
  00d266c  rlwimi 10, 31, 16, 0, 15
  00d2670  stw 6, 0(11)
  00d2674  lwz 11, 8(3)
  00d2678  stw 9, 4(11)
  00d267c  lwz 9, 8(3)
  00d2680  slwi 11, 5, 16
  00d2684  addic 9, 9, 8
  00d2688  stw 9, 8(3)
  00d268c  lwz 3, 40(28)
  00d2690  sldi 9, 27, 1
  00d2694  clrlwi 9, 9, 16
  00d2698  lwz 12, 8(3)
  00d269c  stw 8, 0(12)
  00d26a0  lwz 12, 8(3)
  00d26a4  stw 11, 4(12)
  00d26a8  lwz 11, 8(3)
  00d26ac  ori 12, 9, 0
  00d26b0  addic 11, 11, 8
  00d26b4  rlwimi 12, 5, 16, 0, 15
  00d26b8  stw 11, 8(3)
  00d26bc  lwz 3, 40(28)
  00d26c0  lwz 11, 8(3)
  00d26c4  stw 6, 0(11)
  00d26c8  lwz 5, 8(3)
  00d26cc  stw 10, 4(5)
  00d26d0  lwz 5, 8(3)
  00d26d4  addic 5, 5, 8
  00d26d8  stw 5, 8(3)
  00d26dc  lwz 3, 40(28)
  00d26e0  addc 5, 27, 26
  00d26e4  clrlwi 5, 5, 16
  00d26e8  lwz 10, 8(3)
  00d26ec  ori 11, 5, 0
  00d26f0  rlwimi 11, 31, 16, 0, 15
  00d26f4  stw 8, 0(10)
  00d26f8  lwz 10, 8(3)
  00d26fc  rlwimi 5, 29, 16, 0, 15
  00d2700  stw 12, 4(10)
  00d2704  lwz 10, 8(3)
  00d2708  addic 10, 10, 8
  00d270c  stw 10, 8(3)
  00d2710  lwz 3, 40(28)
  00d2714  lwz 10, 8(3)
  00d2718  stw 6, 0(10)
  00d271c  lwz 10, 8(3)
  00d2720  stw 11, 4(10)
  00d2724  lwz 10, 8(3)
  00d2728  addic 10, 10, 8
  00d272c  stw 10, 8(3)
  00d2730  lwz 3, 40(28)
  00d2734  lwz 10, 8(3)
  00d2738  stw 8, 0(10)
  00d273c  lwz 8, 8(3)
  00d2740  stw 9, 4(8)
  00d2744  lwz 8, 8(3)
  00d2748  addic 8, 8, 8
  00d274c  stw 8, 8(3)
  00d2750  lwz 3, 40(28)
  00d2754  lwz 8, 8(3)
  00d2758  stw 6, 0(8)
  00d275c  lwz 6, 8(3)
  00d2760  stw 5, 4(6)
  00d2764  lwz 5, 8(3)
  00d2768  addic 5, 5, 8
  00d276c  stw 5, 8(3)
  00d2770  lwz 3, 40(28)
  00d2774  lwz 5, 8(3)
  00d2778  stw 7, 0(5)
  00d277c  lwz 5, 8(3)
  00d2780  stw 4, 4(5)
  00d2784  lwz 4, 8(3)
  00d2788  addic 4, 4, 8
  00d278c  stw 4, 8(3)
  00d2790  ld 0, 192(1)
  00d2794  mtlr 0
  00d2798  ld 25, 120(1)
  00d279c  ld 26, 128(1)
  00d27a0  ld 27, 136(1)
  00d27a4  ld 28, 144(1)
  00d27a8  ld 29, 152(1)
  00d27ac  ld 30, 160(1)
  00d27b0  ld 31, 168(1)
  00d27b4  addi 1, 1, 176
  00d27b8  blr

Draw_HoverboardTrickHud:   # 0xd27f8, 0xe00 bytes
  00d27f8  stdu 1, -432(1)
  00d27fc  mflr 0
  00d2800  std 0, 448(1)
  00d2804  stfd 31, 424(1)
  00d2808  std 31, 416(1)
  00d280c  std 29, 400(1)
  00d2810  ori 31, 3, 0
  00d2814  lis 29, 151
  00d2818  addic 29, 29, -25376
  00d281c  lbz 3, 112(31)
  00d2820  clrldi 3, 3, 32
  00d2824  std 3, 312(1)
  00d2828  lis 3, 13
  00d282c  addi 3, 3, 10172
  00d2830  lfs 1, 0(3)
  00d2834  lfs 31, 4(3)
  00d2838  lwz 3, 88(31)
  00d283c  lfd 2, 312(1)
  00d2840  fcfid 2, 2
  00d2844  lwz 4, 8332(29)
  00d2848  cmpwi 4, 22
  00d284c  frsp 2, 2
  00d2850  fmuls 1, 2, 1
  00d2854  fsub 2, 31, 1
  00d2858  std 30, 408(1)
  00d285c  std 28, 392(1)
  00d2860  std 27, 384(1)
  00d2864  std 26, 376(1)
  00d2868  std 25, 368(1)
  00d286c  std 24, 360(1)
  00d2870  std 23, 352(1)
  00d2874  std 22, 344(1)
  00d2878  std 21, 336(1)
  00d287c  fsel 31, 2, 1, 31
  00d2880  bt 2, 0xd288c
  00d2884  extsw 3, 3
  00d2888  b 0xd35b8
  00d288c  lbz 3, 114(31)
  00d2890  cmpwi 3, 0
  00d2894  bt 2, 0xd316c
  00d2898  lis 5, 162
  00d289c  lis 27, 101
  00d28a0  addic 3, 1, 184
  00d28a4  addic 27, 27, 8472
  00d28a8  lwz 5, -14356(5)
  00d28ac  ori 4, 27, 0
  00d28b0  sldi 6, 5, 7
  00d28b4  sldi 5, 5, 3
  00d28b8  subc 5, 6, 5
  00d28bc  addc 6, 5, 5
  00d28c0  addc 5, 5, 6
  00d28c4  extsw 5, 5
  00d28c8  bl 0x5cd2a8
  00d28cc  nop
  00d28d0  lbz 3, 113(31)
  00d28d4  bl 0x502730
  00d28d8  nop
  00d28dc  lis 3, 114
  00d28e0  lis 4, 114
  00d28e4  lwz 3, 17448(3)
  00d28e8  extsw 3, 3
  00d28ec  std 3, 312(1)
  00d28f0  lis 3, 13
  00d28f4  addi 3, 3, 10172
  00d28f8  lfs 2, 8(3)
  00d28fc  lfs 3, -3056(4)
  00d2900  lfd 4, 312(1)
  00d2904  fcfid 4, 4
  00d2908  lbz 3, 114(31)
  00d290c  cmpwi 3, 1
  00d2910  frsp 4, 4
  00d2914  fadds 2, 4, 2
  00d2918  fmuls 2, 3, 2
  00d291c  fctidz 2, 2
  00d2920  fcfid 2, 2
  00d2924  frsp 2, 2
  00d2928  fdivs 1, 1, 2
  00d292c  bt 1, 0xd293c
  00d2930  cmpwi 3, 0
  00d2934  bf 1, 0xd296c
  00d2938  b 0xd2944
  00d293c  cmpwi 3, 3
  00d2940  bf 2, 0xd296c
  00d2944  lis 3, 114
  00d2948  lis 4, 114
  00d294c  lwz 3, 17472(3)
  00d2950  lwz 4, 17476(4)
  00d2954  extsw 3, 3
  00d2958  extsw 4, 4
  00d295c  bl 0x5027bc
  00d2960  nop
  00d2964  ori 30, 3, 0
  00d2968  b 0xd2974
  00d296c  lis 3, 114
  00d2970  lwz 30, 17484(3)
  00d2974  lis 3, 13
  00d2978  addi 3, 3, 10172
  00d297c  lfs 1, 12(3)
  00d2980  fmuls 1, 31, 1
  00d2984  bl 0x502758
  00d2988  nop
  00d298c  slwi 28, 3, 24
  00d2990  lbz 4, 114(31)
  00d2994  lis 3, 162
  00d2998  addc 30, 30, 28
  00d299c  cmpwi 4, 1
  00d29a0  extsw 28, 28
  00d29a4  extsw 30, 30
  00d29a8  lwz 3, -14356(3)
  00d29ac  bt 2, 0xd29b8
  00d29b0  cmpwi 4, 2
  00d29b4  bf 2, 0xd2acc
  00d29b8  lis 27, 114
  00d29bc  lis 26, 114
  00d29c0  addic 25, 1, 184
  00d29c4  ori 5, 28, 0
  00d29c8  ori 6, 25, 0
  00d29cc  lwz 3, 17504(27)
  00d29d0  li 7, -1
  00d29d4  lwz 4, 17508(26)
  00d29d8  addic 3, 3, 1
  00d29dc  addic 4, 4, 1
  00d29e0  extsw 3, 3
  00d29e4  extsw 4, 4
  00d29e8  bl 0x70998
  00d29ec  nop
  00d29f0  lwz 3, 17504(27)
  00d29f4  lwz 4, 17508(26)
  00d29f8  ori 5, 30, 0
  00d29fc  extsw 3, 3
  00d2a00  extsw 4, 4
  00d2a04  ori 6, 25, 0
  00d2a08  li 7, -1
  00d2a0c  bl 0x70998
  00d2a10  nop
  00d2a14  lis 3, 162
  00d2a18  li 4, 1
  00d2a1c  lis 5, 101
  00d2a20  li 6, 20856
  00d2a24  addic 27, 5, 8484
  00d2a28  lwz 3, -14352(3)
  00d2a2c  li 5, 20855
  00d2a30  subc 4, 4, 3
  00d2a34  extsw 26, 3
  00d2a38  cntlzw 3, 4
  00d2a3c  subc 4, 5, 6
  00d2a40  sldi 3, 3, 58
  00d2a44  sradi 3, 3, 63
  00d2a48  and 3, 3, 4
  00d2a4c  addc 3, 6, 3
  00d2a50  bl 0x7b740
  00d2a54  nop
  00d2a58  ori 6, 3, 0
  00d2a5c  ori 4, 27, 0
  00d2a60  ori 3, 25, 0
  00d2a64  ori 5, 26, 0
  00d2a68  bl 0x5cd2a8
  00d2a6c  nop
  00d2a70  lis 27, 114
  00d2a74  lis 26, 114
  00d2a78  ori 5, 28, 0
  00d2a7c  ori 6, 25, 0
  00d2a80  li 7, -1
  00d2a84  lwz 3, 17512(27)
  00d2a88  lwz 4, 17516(26)
  00d2a8c  addic 3, 3, 1
  00d2a90  addic 4, 4, 1
  00d2a94  extsw 3, 3
  00d2a98  extsw 4, 4
  00d2a9c  bl 0x70998
  00d2aa0  nop
  00d2aa4  lwz 3, 17512(27)
  00d2aa8  ori 5, 30, 0
  00d2aac  lwz 4, 17516(26)
  00d2ab0  ori 6, 25, 0
  00d2ab4  extsw 3, 3
  00d2ab8  extsw 4, 4
  00d2abc  li 7, -1
  00d2ac0  bl 0x70998
  00d2ac4  nop
  00d2ac8  b 0xd316c
  00d2acc  cmpwi 4, 3
  00d2ad0  bf 2, 0xd316c
  00d2ad4  lis 6, 162
  00d2ad8  lwz 6, -14352(6)
  00d2adc  cmpwi 6, 3
  00d2ae0  cmpwi 1, 6, 4
  00d2ae4  cmpwi 6, 6, 0
  00d2ae8  cmpwi 7, 6, 1
  00d2aec  bf 2, 0xd2b80
  00d2af0  lis 4, 162
  00d2af4  li 7, 0
  00d2af8  addic 4, 4, -14348
  00d2afc  li 5, 2
  00d2b00  li 8, 0
  00d2b04  li 10, 3
  00d2b08  lwz 9, 4(4)
  00d2b0c  lwz 11, 12(4)
  00d2b10  subc 5, 5, 10
  00d2b14  subc 7, 7, 9
  00d2b18  lwz 4, 8(4)
  00d2b1c  li 9, 0
  00d2b20  cntlzw 7, 7
  00d2b24  subc 4, 8, 4
  00d2b28  sldi 7, 7, 58
  00d2b2c  cntlzw 4, 4
  00d2b30  sradi 7, 7, 63
  00d2b34  li 8, 1
  00d2b38  and 5, 7, 5
  00d2b3c  sldi 4, 4, 58
  00d2b40  addc 5, 10, 5
  00d2b44  sradi 4, 4, 63
  00d2b48  subc 8, 8, 5
  00d2b4c  subc 7, 9, 11
  00d2b50  and 4, 4, 8
  00d2b54  cntlzw 7, 7
  00d2b58  addc 4, 5, 4
  00d2b5c  li 9, 0
  00d2b60  sldi 5, 7, 58
  00d2b64  subc 7, 9, 4
  00d2b68  sradi 5, 5, 63
  00d2b6c  and 5, 5, 7
  00d2b70  addc 4, 4, 5
  00d2b74  cmpwi 4, -1
  00d2b78  bt 1, 0xd2b88
  00d2b7c  b 0xd2db4
  00d2b80  bf 6, 0xd2db4
  00d2b84  li 4, 4
  00d2b88  cmpwi 3, 4
  00d2b8c  li 5, 0
  00d2b90  bt 0, 0xd2b9c
  00d2b94  li 5, 2
  00d2b98  b 0xd2ba8
  00d2b9c  cmpwi 3, 2
  00d2ba0  bt 0, 0xd2ba8
  00d2ba4  li 5, 1
  00d2ba8  lis 6, 162
  00d2bac  sldi 3, 5, 2
  00d2bb0  addic 7, 6, -14332
  00d2bb4  addc 3, 5, 3
  00d2bb8  li 9, 2
  00d2bbc  addc 28, 4, 3
  00d2bc0  li 10, 1
  00d2bc4  lwz 3, 4(7)
  00d2bc8  clrldi 4, 28, 32
  00d2bcc  lwz 5, 8(7)
  00d2bd0  subc 9, 9, 10
  00d2bd4  subc 3, 4, 3
  00d2bd8  lwz 7, 12(7)
  00d2bdc  subc 5, 4, 5
  00d2be0  cntlzw 3, 3
  00d2be4  cntlzw 5, 5
  00d2be8  sldi 3, 3, 58
  00d2bec  sldi 5, 5, 58
  00d2bf0  sradi 3, 3, 63
  00d2bf4  sradi 5, 5, 63
  00d2bf8  and 3, 3, 9
  00d2bfc  subc 4, 4, 7
  00d2c00  addc 3, 10, 3
  00d2c04  cntlzw 4, 4
  00d2c08  addic 10, 3, 1
  00d2c0c  lis 11, 114
  00d2c10  subc 10, 10, 3
  00d2c14  sldi 4, 4, 58
  00d2c18  and 5, 5, 10
  00d2c1c  sldi 8, 28, 2
  00d2c20  addc 3, 3, 5
  00d2c24  addic 9, 11, 17528
  00d2c28  addic 5, 3, 1
  00d2c2c  sradi 4, 4, 63
  00d2c30  subc 5, 5, 3
  00d2c34  lis 7, 162
  00d2c38  and 4, 4, 5
  00d2c3c  lwzx 8, 9, 8
  00d2c40  addic 26, 1, 184
  00d2c44  addc 3, 3, 4
  00d2c48  ori 4, 27, 0
  00d2c4c  divw 5, 8, 3
  00d2c50  ori 3, 26, 0
  00d2c54  stw 5, -14316(7)
  00d2c58  extsw 5, 5
  00d2c5c  stw 28, -14332(6)
  00d2c60  bl 0x5cd2a8
  00d2c64  nop
  00d2c68  lis 27, 114
  00d2c6c  lis 25, 114
  00d2c70  srawi 3, 30, 24
  00d2c74  li 4, 80
  00d2c78  li 5, 80
  00d2c7c  lwz 6, 17520(27)
  00d2c80  subc 4, 4, 3
  00d2c84  lwz 7, 17524(25)
  00d2c88  subc 5, 5, 3
  00d2c8c  extsw 23, 6
  00d2c90  sradi 4, 4, 63
  00d2c94  addic 6, 7, -24
  00d2c98  and 4, 4, 5
  00d2c9c  extsw 22, 6
  00d2ca0  addic 8, 23, 1
  00d2ca4  addc 21, 3, 4
  00d2ca8  rlwinm 24, 30, 0, 0, 7
  00d2cac  addic 4, 22, 1
  00d2cb0  extsw 3, 8
  00d2cb4  ori 5, 24, 0
  00d2cb8  ori 6, 26, 0
  00d2cbc  li 7, -1
  00d2cc0  extsw 4, 4
  00d2cc4  bl 0x70998
  00d2cc8  nop
  00d2ccc  addic 3, 3, -32
  00d2cd0  addic 5, 22, -8
  00d2cd4  extsw 3, 3
  00d2cd8  li 6, 32
  00d2cdc  subc 4, 23, 3
  00d2ce0  ori 7, 21, 0
  00d2ce4  sldi 8, 4, 1
  00d2ce8  extsw 4, 5
  00d2cec  extsw 5, 8
  00d2cf0  bl 0xcc148
  00d2cf4  ori 3, 23, 0
  00d2cf8  ori 4, 22, 0
  00d2cfc  ori 5, 30, 0
  00d2d00  ori 6, 26, 0
  00d2d04  li 7, -1
  00d2d08  bl 0x70998
  00d2d0c  nop
  00d2d10  lis 4, 101
  00d2d14  addic 3, 28, 20626
  00d2d18  addic 28, 4, 8492
  00d2d1c  bl 0x7b740
  00d2d20  nop
  00d2d24  ori 5, 3, 0
  00d2d28  ori 3, 26, 0
  00d2d2c  ori 4, 28, 0
  00d2d30  bl 0x5cd2a8
  00d2d34  nop
  00d2d38  lwz 3, 17520(27)
  00d2d3c  ori 5, 24, 0
  00d2d40  lwz 4, 17524(25)
  00d2d44  ori 6, 26, 0
  00d2d48  extsw 28, 3
  00d2d4c  extsw 27, 4
  00d2d50  addic 3, 28, 1
  00d2d54  addic 4, 27, 1
  00d2d58  extsw 3, 3
  00d2d5c  extsw 4, 4
  00d2d60  li 7, -1
  00d2d64  bl 0x70998
  00d2d68  nop
  00d2d6c  addic 3, 3, -32
  00d2d70  li 6, 32
  00d2d74  extsw 3, 3
  00d2d78  ori 7, 21, 0
  00d2d7c  subc 4, 28, 3
  00d2d80  sldi 5, 4, 1
  00d2d84  addic 4, 27, -8
  00d2d88  extsw 5, 5
  00d2d8c  extsw 4, 4
  00d2d90  bl 0xcc148
  00d2d94  ori 3, 28, 0
  00d2d98  ori 4, 27, 0
  00d2d9c  ori 5, 30, 0
  00d2da0  ori 6, 26, 0
  00d2da4  li 7, -1
  00d2da8  bl 0x70998
  00d2dac  nop
  00d2db0  b 0xd316c
  00d2db4  bf 25, 0xd316c
  00d2db8  li 5, 0
  00d2dbc  lis 7, 162
  00d2dc0  ori 8, 1, 0
  00d2dc4  addic 7, 7, -14348
  00d2dc8  ori 4, 5, 0
  00d2dcc  cmpw 6, 4
  00d2dd0  bf 1, 0xd2dfc
  00d2dd4  lwz 9, 0(7)
  00d2dd8  cmpwi 9, 0
  00d2ddc  bt 2, 0xd2dec
  00d2de0  stw 5, 112(8)
  00d2de4  addic 4, 4, 1
  00d2de8  addic 8, 8, 4
  00d2dec  addic 5, 5, 1
  00d2df0  addic 7, 7, 4
  00d2df4  cmpwi 5, 4
  00d2df8  bt 0, 0xd2dcc
  00d2dfc  bf 30, 0xd2fc8
  00d2e00  sldi 4, 3, 3
  00d2e04  lis 6, 162
  00d2e08  addc 4, 3, 4
  00d2e0c  addic 28, 1, 184
  00d2e10  addc 4, 3, 4
  00d2e14  ori 3, 28, 0
  00d2e18  extsw 5, 4
  00d2e1c  stw 4, -14316(6)
  00d2e20  ori 4, 27, 0
  00d2e24  bl 0x5cd2a8
  00d2e28  nop
  00d2e2c  lis 27, 114
  00d2e30  lis 26, 114
  00d2e34  srawi 6, 30, 24
  00d2e38  li 5, 80
  00d2e3c  li 3, 80
  00d2e40  lwz 4, 17520(27)
  00d2e44  lwz 7, 17524(26)
  00d2e48  subc 5, 5, 6
  00d2e4c  extsw 25, 4
  00d2e50  addic 4, 7, -24
  00d2e54  addic 7, 25, 1
  00d2e58  subc 8, 3, 6
  00d2e5c  sradi 5, 5, 63
  00d2e60  extsw 23, 4
  00d2e64  extsw 3, 7
  00d2e68  and 7, 5, 8
  00d2e6c  rlwinm 24, 30, 0, 0, 7
  00d2e70  addic 4, 23, 1
  00d2e74  addc 22, 6, 7
  00d2e78  extsw 4, 4
  00d2e7c  ori 5, 24, 0
  00d2e80  ori 6, 28, 0
  00d2e84  li 7, -1
  00d2e88  bl 0x70998
  00d2e8c  nop
  00d2e90  addic 3, 3, -32
  00d2e94  li 6, 32
  00d2e98  extsw 3, 3
  00d2e9c  ori 7, 22, 0
  00d2ea0  subc 4, 25, 3
  00d2ea4  sldi 5, 4, 1
  00d2ea8  addic 4, 23, -8
  00d2eac  extsw 5, 5
  00d2eb0  extsw 4, 4
  00d2eb4  bl 0xcc148
  00d2eb8  ori 3, 25, 0
  00d2ebc  ori 4, 23, 0
  00d2ec0  ori 5, 30, 0
  00d2ec4  ori 6, 28, 0
  00d2ec8  li 7, -1
  00d2ecc  bl 0x70998
  00d2ed0  nop
  00d2ed4  lis 3, 101
  00d2ed8  lwz 4, 112(1)
  00d2edc  addic 25, 3, 8500
  00d2ee0  addic 3, 4, 20862
  00d2ee4  extsw 3, 3
  00d2ee8  bl 0x7b740
  00d2eec  nop
  00d2ef0  lis 4, 162
  00d2ef4  ori 23, 3, 0
  00d2ef8  li 3, 360
  00d2efc  li 5, 20647
  00d2f00  li 6, 20648
  00d2f04  lwz 4, -14356(4)
  00d2f08  subc 3, 3, 4
  00d2f0c  extsw 21, 4
  00d2f10  cntlzw 3, 3
  00d2f14  subc 4, 5, 6
  00d2f18  sldi 3, 3, 58
  00d2f1c  sradi 3, 3, 63
  00d2f20  and 3, 3, 4
  00d2f24  addc 3, 6, 3
  00d2f28  bl 0x7b740
  00d2f2c  nop
  00d2f30  ori 7, 3, 0
  00d2f34  ori 3, 28, 0
  00d2f38  ori 4, 25, 0
  00d2f3c  ori 5, 23, 0
  00d2f40  ori 6, 21, 0
  00d2f44  bl 0x5cd2a8
  00d2f48  nop
  00d2f4c  lwz 3, 17520(27)
  00d2f50  lwz 4, 17524(26)
  00d2f54  ori 5, 24, 0
  00d2f58  extsw 27, 3
  00d2f5c  extsw 26, 4
  00d2f60  addic 3, 27, 1
  00d2f64  addic 4, 26, 1
  00d2f68  extsw 3, 3
  00d2f6c  ori 6, 28, 0
  00d2f70  li 7, -1
  00d2f74  extsw 4, 4
  00d2f78  bl 0x70998
  00d2f7c  nop
  00d2f80  addic 3, 3, -32
  00d2f84  addic 5, 26, -8
  00d2f88  extsw 3, 3
  00d2f8c  li 6, 32
  00d2f90  subc 4, 27, 3
  00d2f94  ori 7, 22, 0
  00d2f98  sldi 8, 4, 1
  00d2f9c  extsw 4, 5
  00d2fa0  extsw 5, 8
  00d2fa4  bl 0xcc148
  00d2fa8  ori 3, 27, 0
  00d2fac  ori 4, 26, 0
  00d2fb0  ori 5, 30, 0
  00d2fb4  ori 6, 28, 0
  00d2fb8  li 7, -1
  00d2fbc  bl 0x70998
  00d2fc0  nop
  00d2fc4  b 0xd316c
  00d2fc8  sldi 4, 3, 4
  00d2fcc  sldi 3, 3, 2
  00d2fd0  lis 6, 162
  00d2fd4  addc 4, 4, 3
  00d2fd8  addic 28, 1, 184
  00d2fdc  extsw 5, 4
  00d2fe0  ori 3, 28, 0
  00d2fe4  stw 4, -14316(6)
  00d2fe8  ori 4, 27, 0
  00d2fec  bl 0x5cd2a8
  00d2ff0  nop
  00d2ff4  lis 27, 114
  00d2ff8  lis 26, 114
  00d2ffc  srawi 6, 30, 24
  00d3000  li 5, 80
  00d3004  li 3, 80
  00d3008  lwz 4, 17520(27)
  00d300c  lwz 7, 17524(26)
  00d3010  subc 5, 5, 6
  00d3014  extsw 25, 4
  00d3018  addic 4, 7, -24
  00d301c  addic 7, 25, 1
  00d3020  subc 8, 3, 6
  00d3024  sradi 5, 5, 63
  00d3028  extsw 23, 4
  00d302c  extsw 3, 7
  00d3030  and 7, 5, 8
  00d3034  rlwinm 24, 30, 0, 0, 7
  00d3038  addic 4, 23, 1
  00d303c  addc 22, 6, 7
  00d3040  extsw 4, 4
  00d3044  ori 5, 24, 0
  00d3048  ori 6, 28, 0
  00d304c  li 7, -1
  00d3050  bl 0x70998
  00d3054  nop
  00d3058  addic 3, 3, -32
  00d305c  li 6, 32
  00d3060  extsw 3, 3
  00d3064  ori 7, 22, 0
  00d3068  subc 4, 25, 3
  00d306c  sldi 5, 4, 1
  00d3070  addic 4, 23, -8
  00d3074  extsw 5, 5
  00d3078  extsw 4, 4
  00d307c  bl 0xcc148
  00d3080  ori 3, 25, 0
  00d3084  ori 4, 23, 0
  00d3088  ori 5, 30, 0
  00d308c  ori 6, 28, 0
  00d3090  li 7, -1
  00d3094  bl 0x70998
  00d3098  nop
  00d309c  lis 3, 101
  00d30a0  lwz 4, 112(1)
  00d30a4  addic 25, 3, 8516
  00d30a8  addic 3, 4, 20862
  00d30ac  extsw 3, 3
  00d30b0  bl 0x7b740
  00d30b4  nop
  00d30b8  lwz 4, 116(1)
  00d30bc  ori 23, 3, 0
  00d30c0  addic 3, 4, 20862
  00d30c4  extsw 3, 3
  00d30c8  bl 0x7b740
  00d30cc  nop
  00d30d0  lis 5, 162
  00d30d4  ori 6, 3, 0
  00d30d8  ori 3, 28, 0
  00d30dc  ori 4, 25, 0
  00d30e0  lwz 7, -14356(5)
  00d30e4  ori 5, 23, 0
  00d30e8  extsw 7, 7
  00d30ec  bl 0x5cd2a8
  00d30f0  nop
  00d30f4  lwz 3, 17520(27)
  00d30f8  lwz 4, 17524(26)
  00d30fc  ori 5, 24, 0
  00d3100  extsw 27, 3
  00d3104  extsw 26, 4
  00d3108  addic 3, 27, 1
  00d310c  addic 4, 26, 1
  00d3110  extsw 3, 3
  00d3114  ori 6, 28, 0
  00d3118  li 7, -1
  00d311c  extsw 4, 4
  00d3120  bl 0x70998
  00d3124  nop
  00d3128  addic 3, 3, -32
  00d312c  addic 5, 26, -8
  00d3130  extsw 3, 3
  00d3134  li 6, 32
  00d3138  subc 4, 27, 3
  00d313c  ori 7, 22, 0
  00d3140  sldi 8, 4, 1
  00d3144  extsw 4, 5
  00d3148  extsw 5, 8
  00d314c  bl 0xcc148
  00d3150  ori 3, 27, 0
  00d3154  ori 4, 26, 0
  00d3158  ori 5, 30, 0
  00d315c  ori 6, 28, 0
  00d3160  li 7, -1
  00d3164  bl 0x70998
  00d3168  nop
  00d316c  li 5, 256
  00d3170  lwz 3, 80(31)
  00d3174  lwz 30, 84(31)
  00d3178  li 6, 64
  00d317c  lwz 4, 96(31)
  00d3180  extsw 3, 3
  00d3184  extsw 30, 30
  00d3188  stw 5, 88(31)
  00d318c  clrlwi 5, 4, 31
  00d3190  stw 6, 92(31)
  00d3194  cmpwi 5, 0
  00d3198  bf 2, 0xd31b0
  00d319c  rlwinm 5, 4, 0, 30, 30
  00d31a0  cmpwi 5, 0
  00d31a4  bf 2, 0xd31b0
  00d31a8  addic 30, 30, -32
  00d31ac  extsw 30, 30
  00d31b0  lwz 8, 116(31)
  00d31b4  rlwinm 5, 4, 0, 28, 28
  00d31b8  lwz 10, 8(31)
  00d31bc  li 6, 0
  00d31c0  sldi 9, 8, 5
  00d31c4  subc 5, 6, 5
  00d31c8  subc 8, 8, 9
  00d31cc  cntlzw 5, 5
  00d31d0  subc 9, 9, 8
  00d31d4  addic 7, 3, -256
  00d31d8  addic 6, 3, -128
  00d31dc  sldi 5, 5, 58
  00d31e0  sldi 9, 9, 2
  00d31e4  subc 6, 6, 7
  00d31e8  sradi 5, 5, 63
  00d31ec  addc 8, 9, 8
  00d31f0  and 5, 5, 6
  00d31f4  divw 6, 8, 10
  00d31f8  rlwinm 4, 4, 0, 29, 29
  00d31fc  li 11, 0
  00d3200  addc 5, 7, 5
  00d3204  subc 4, 11, 4
  00d3208  extsw 5, 5
  00d320c  cntlzw 4, 4
  00d3210  subc 5, 5, 3
  00d3214  sldi 4, 4, 58
  00d3218  lis 27, 162
  00d321c  sradi 4, 4, 63
  00d3220  lis 26, 0
  00d3224  and 25, 4, 5
  00d3228  li 4, 0
  00d322c  addc 25, 3, 25
  00d3230  addic 3, 6, 27
  00d3234  ori 28, 4, 0
  00d3238  addic 27, 27, -16448
  00d323c  ori 26, 26, 65535
  00d3240  extsw 3, 3
  00d3244  ori 5, 28, 0
  00d3248  lwz 6, 28(27)
  00d324c  lhzx 7, 6, 5
  00d3250  cmpwi 1, 7, 30040
  00d3254  cmpw 7, 26
  00d3258  cror 2, 2, 6
  00d325c  bt 2, 0xd326c
  00d3260  addic 5, 5, 8
  00d3264  addic 4, 4, 1
  00d3268  b 0xd3248
  00d326c  slwi 4, 4, 3
  00d3270  extsw 5, 4
  00d3274  lhzx 5, 6, 5
  00d3278  cmpw 5, 26
  00d327c  bf 2, 0xd3288
  00d3280  ori 4, 28, 0
  00d3284  b 0xd32a8
  00d3288  addc 6, 6, 4
  00d328c  ori 4, 28, 0
  00d3290  clrldi 6, 6, 32
  00d3294  lhz 5, 2(6)
  00d3298  cmpwi 5, 1
  00d329c  bf 1, 0xd32a8
  00d32a0  lhz 4, 4(6)
  00d32a4  addic 4, 4, 1
  00d32a8  ori 6, 3, 0
  00d32ac  ori 3, 4, 0
  00d32b0  ori 4, 25, 0
  00d32b4  ori 5, 30, 0
  00d32b8  li 7, 64
  00d32bc  li 8, 128
  00d32c0  bl 0xd24ec
  00d32c4  lwz 4, 28(27)
  00d32c8  ori 3, 28, 0
  00d32cc  lwz 5, 32(27)
  00d32d0  ori 6, 4, 0
  00d32d4  lhz 7, 0(6)
  00d32d8  cmpwi 1, 7, 30040
  00d32dc  cmpw 7, 26
  00d32e0  cror 2, 2, 6
  00d32e4  bt 2, 0xd32f4
  00d32e8  addic 6, 6, 8
  00d32ec  addic 3, 3, 1
  00d32f0  b 0xd32d4
  00d32f4  slwi 3, 3, 3
  00d32f8  extsw 6, 3
  00d32fc  lhzx 6, 4, 6
  00d3300  cmpw 6, 26
  00d3304  bf 2, 0xd330c
  00d3308  b 0xd3324
  00d330c  addc 3, 4, 3
  00d3310  clrldi 3, 3, 32
  00d3314  lhz 4, 2(3)
  00d3318  cmpwi 4, 0
  00d331c  bf 1, 0xd3324
  00d3320  lhz 28, 4(3)
  00d3324  ori 3, 5, 0
  00d3328  slwi 6, 28, 2
  00d332c  lis 4, 161
  00d3330  ori 5, 30, 0
  00d3334  addic 7, 4, 24396
  00d3338  ori 4, 25, 0
  00d333c  lwzx 3, 3, 6
  00d3340  li 8, 128
  00d3344  sldi 6, 3, 5
  00d3348  sldi 3, 3, 2
  00d334c  lwz 7, 28(7)
  00d3350  addc 3, 6, 3
  00d3354  li 6, 256
  00d3358  addc 3, 7, 3
  00d335c  li 7, 64
  00d3360  clrldi 3, 3, 32
  00d3364  bl 0xcbe60
  00d3368  lis 3, 13
  00d336c  lis 4, 114
  00d3370  lbz 5, 2222(29)
  00d3374  addi 3, 3, 10172
  00d3378  lfs 2, 16(3)
  00d337c  lfs 1, -3056(4)
  00d3380  fmuls 2, 1, 2
  00d3384  fctiwz 2, 2
  00d3388  stfd 2, 312(1)
  00d338c  lwz 3, 316(1)
  00d3390  cmpw 5, 3
  00d3394  bf 1, 0xd35b0
  00d3398  lis 3, 13
  00d339c  addi 30, 3, 10172
  00d33a0  lis 3, 161
  00d33a4  lfs 2, 20(30)
  00d33a8  lwz 3, 1808(3)
  00d33ac  fmuls 1, 1, 2
  00d33b0  fctiwz 2, 1
  00d33b4  fctidz 31, 1
  00d33b8  stfd 2, 312(1)
  00d33bc  lwz 4, 316(1)
  00d33c0  divw 5, 3, 4
  00d33c4  mullw 4, 5, 4
  00d33c8  subc 3, 3, 4
  00d33cc  extsw 3, 3
  00d33d0  bl 0x502730
  00d33d4  nop
  00d33d8  fcfid 2, 31
  00d33dc  lfs 3, 24(30)
  00d33e0  lis 3, 114
  00d33e4  lis 4, 114
  00d33e8  frsp 2, 2
  00d33ec  fdivs 1, 1, 2
  00d33f0  lfs 2, 28(30)
  00d33f4  lfs 4, 32(30)
  00d33f8  lfs 5, 36(30)
  00d33fc  lfs 6, 40(30)
  00d3400  lfs 7, 44(30)
  00d3404  lfs 8, 48(30)
  00d3408  lfs 9, 52(30)
  00d340c  lfs 10, 8(30)
  00d3410  lwz 3, 17496(3)
  00d3414  lwz 4, 17500(4)
  00d3418  extsw 3, 3
  00d341c  extsw 4, 4
  00d3420  fmsubs 1, 1, 3, 2
  00d3424  fsubs 2, 4, 1
  00d3428  fsubs 3, 5, 1
  00d342c  fsub 4, 1, 2
  00d3430  fsel 1, 4, 2, 1
  00d3434  fsub 2, 3, 1
  00d3438  fsel 1, 2, 3, 1
  00d343c  fmuls 2, 1, 1
  00d3440  fmuls 3, 2, 1
  00d3444  fmuls 4, 2, 3
  00d3448  fmadds 1, 3, 6, 1
  00d344c  fmuls 3, 2, 4
  00d3450  fmadds 1, 4, 7, 1
  00d3454  fmuls 2, 2, 3
  00d3458  fmadds 1, 3, 8, 1
  00d345c  fmadds 1, 2, 9, 1
  00d3460  fmadds 1, 1, 10, 10
  00d3464  bl 0x5027bc
  00d3468  nop
  00d346c  ori 30, 3, 0
  00d3470  li 3, 21274
  00d3474  addic 29, 1, 120
  00d3478  bl 0x7b740
  00d347c  nop
  00d3480  ori 4, 3, 0
  00d3484  ori 3, 29, 0
  00d3488  bl 0x5cd2a8
  00d348c  nop
  00d3490  lis 28, 114
  00d3494  lis 27, 114
  00d3498  lis 5, -32768
  00d349c  ori 6, 29, 0
  00d34a0  li 7, -1
  00d34a4  lwz 3, 17488(28)
  00d34a8  lwz 4, 17492(27)
  00d34ac  addic 3, 3, 1
  00d34b0  addic 4, 4, 1
  00d34b4  extsw 26, 3
  00d34b8  extsw 25, 4
  00d34bc  addic 3, 26, 1
  00d34c0  addic 4, 25, 1
  00d34c4  extsw 3, 3
  00d34c8  extsw 4, 4
  00d34cc  bl 0x70998
  00d34d0  nop
  00d34d4  addic 3, 3, -32
  00d34d8  li 6, 32
  00d34dc  extsw 3, 3
  00d34e0  li 7, -128
  00d34e4  subc 4, 26, 3
  00d34e8  sldi 5, 4, 1
  00d34ec  addic 4, 25, -8
  00d34f0  extsw 5, 5
  00d34f4  extsw 4, 4
  00d34f8  bl 0xcc148
  00d34fc  ori 4, 25, 0
  00d3500  ori 3, 26, 0
  00d3504  lis 5, -32768
  00d3508  ori 6, 29, 0
  00d350c  li 7, -1
  00d3510  bl 0x70998
  00d3514  nop
  00d3518  lwz 4, 17488(28)
  00d351c  srawi 3, 30, 24
  00d3520  lwz 6, 17492(27)
  00d3524  li 5, 80
  00d3528  li 7, 80
  00d352c  extsw 27, 6
  00d3530  extsw 28, 4
  00d3534  subc 6, 5, 3
  00d3538  subc 4, 7, 3
  00d353c  sradi 7, 6, 63
  00d3540  addic 8, 28, 1
  00d3544  and 4, 7, 4
  00d3548  rlwinm 5, 30, 0, 0, 7
  00d354c  addc 26, 3, 4
  00d3550  addic 4, 27, 1
  00d3554  extsw 3, 8
  00d3558  ori 6, 29, 0
  00d355c  li 7, -1
  00d3560  extsw 4, 4
  00d3564  bl 0x70998
  00d3568  nop
  00d356c  addic 3, 3, -32
  00d3570  addic 5, 27, -8
  00d3574  extsw 3, 3
  00d3578  li 6, 32
  00d357c  subc 4, 28, 3
  00d3580  ori 7, 26, 0
  00d3584  sldi 8, 4, 1
  00d3588  extsw 4, 5
  00d358c  extsw 5, 8
  00d3590  bl 0xcc148
  00d3594  ori 3, 28, 0
  00d3598  ori 4, 27, 0
  00d359c  ori 5, 30, 0
  00d35a0  ori 6, 29, 0
  00d35a4  li 7, -1
  00d35a8  bl 0x70998
  00d35ac  nop
  00d35b0  lwz 3, 88(31)
  00d35b4  extsw 3, 3
  00d35b8  ld 0, 448(1)
  00d35bc  mtlr 0
  00d35c0  lfd 31, 424(1)
  00d35c4  ld 21, 336(1)
  00d35c8  ld 22, 344(1)
  00d35cc  ld 23, 352(1)
  00d35d0  ld 24, 360(1)
  00d35d4  ld 25, 368(1)
  00d35d8  ld 26, 376(1)
  00d35dc  ld 27, 384(1)
  00d35e0  ld 28, 392(1)
  00d35e4  ld 29, 400(1)
  00d35e8  ld 30, 408(1)
  00d35ec  ld 31, 416(1)
  00d35f0  addi 1, 1, 432
  00d35f4  blr

Draw_MobyHealthBarHud:   # 0xd3610, 0x6f8 bytes
  00d3610  stdu 1, -240(1)
  00d3614  mflr 0
  00d3618  std 0, 256(1)
  00d361c  stfd 30, 224(1)
  00d3620  stfd 31, 232(1)
  00d3624  lis 4, 150
  00d3628  li 7, 0
  00d362c  std 31, 216(1)
  00d3630  lis 5, 150
  00d3634  ori 31, 3, 0
  00d3638  addic 5, 5, 27392
  00d363c  lwz 4, 27372(4)
  00d3640  li 6, 18
  00d3644  li 8, 10
  00d3648  subc 4, 7, 4
  00d364c  subc 7, 6, 8
  00d3650  std 29, 200(1)
  00d3654  cntlzw 4, 4
  00d3658  lis 29, 114
  00d365c  lwz 9, 4(5)
  00d3660  sldi 3, 4, 58
  00d3664  lis 10, 151
  00d3668  sradi 3, 3, 63
  00d366c  lbz 4, 112(31)
  00d3670  std 25, 168(1)
  00d3674  lwz 6, 88(31)
  00d3678  li 25, 3
  00d367c  and 5, 3, 7
  00d3680  lwz 29, 17588(29)
  00d3684  cmpwi 6, 4, 0
  00d3688  addc 5, 8, 5
  00d368c  lwz 3, -25488(10)
  00d3690  subc 7, 9, 5
  00d3694  std 20, 128(1)
  00d3698  cmpwi 3, 7
  00d369c  addic 20, 7, -32
  00d36a0  cmpwi 1, 3, 13
  00d36a4  std 30, 208(1)
  00d36a8  std 28, 192(1)
  00d36ac  std 27, 184(1)
  00d36b0  std 26, 176(1)
  00d36b4  std 24, 160(1)
  00d36b8  std 23, 152(1)
  00d36bc  std 22, 144(1)
  00d36c0  std 21, 136(1)
  00d36c4  extsw 20, 20
  00d36c8  bt 2, 0xd36d0
  00d36cc  bf 6, 0xd36d4
  00d36d0  li 25, 6
  00d36d4  li 7, 18
  00d36d8  li 8, 7
  00d36dc  subc 7, 7, 3
  00d36e0  subc 8, 8, 25
  00d36e4  cntlzw 7, 7
  00d36e8  sldi 7, 7, 58
  00d36ec  sradi 7, 7, 63
  00d36f0  and 7, 7, 8
  00d36f4  addc 25, 25, 7
  00d36f8  bf 26, 0xd3704
  00d36fc  extsw 3, 6
  00d3700  b 0xd3cc0
  00d3704  li 6, 13
  00d3708  subc 5, 5, 20
  00d370c  subc 3, 6, 3
  00d3710  cntlzw 3, 3
  00d3714  sldi 3, 3, 58
  00d3718  sradi 6, 3, 63
  00d371c  ori 3, 4, 0
  00d3720  and 4, 6, 5
  00d3724  addc 20, 20, 4
  00d3728  bl 0x502730
  00d372c  nop
  00d3730  lis 3, 13
  00d3734  addi 3, 3, 13816
  00d3738  lfs 2, 0(3)
  00d373c  lfs 30, 4(3)
  00d3740  fmuls 1, 1, 2
  00d3744  fcmpu 0, 1, 30
  00d3748  cror 6, 0, 2
  00d374c  bt 6, 0xd3758
  00d3750  fmr 1, 30
  00d3754  b 0xd3774
  00d3758  lis 3, 13
  00d375c  addi 3, 3, 13816
  00d3760  lfs 2, 8(3)
  00d3764  fcmpu 0, 1, 2
  00d3768  cror 6, 1, 2
  00d376c  bt 6, 0xd3774
  00d3770  fmr 1, 2
  00d3774  lis 3, 13
  00d3778  addi 3, 3, 13816
  00d377c  lfs 2, 12(3)
  00d3780  fmuls 31, 1, 2
  00d3784  fmr 1, 31
  00d3788  bl 0x502758
  00d378c  nop
  00d3790  fmr 1, 31
  00d3794  ori 26, 3, 0
  00d3798  bl 0x502758
  00d379c  nop
  00d37a0  slwi 4, 25, 4
  00d37a4  li 28, 0
  00d37a8  subc 29, 29, 4
  00d37ac  cmpwi 25, 0
  00d37b0  extsw 29, 29
  00d37b4  ori 30, 3, 0
  00d37b8  ori 21, 29, 0
  00d37bc  ori 24, 28, 0
  00d37c0  bf 1, 0xd3870
  00d37c4  lis 27, 162
  00d37c8  lis 23, 0
  00d37cc  addic 22, 20, 6
  00d37d0  addic 27, 27, -16448
  00d37d4  ori 23, 23, 65535
  00d37d8  extsw 22, 22
  00d37dc  ori 4, 24, 0
  00d37e0  ori 5, 4, 0
  00d37e4  lwz 3, 28(27)
  00d37e8  lhzx 6, 3, 5
  00d37ec  cmpwi 1, 6, 30050
  00d37f0  cmpw 6, 23
  00d37f4  cror 2, 2, 6
  00d37f8  bt 2, 0xd3808
  00d37fc  addic 5, 5, 8
  00d3800  addic 4, 4, 1
  00d3804  b 0xd37e4
  00d3808  slwi 4, 4, 3
  00d380c  extsw 5, 4
  00d3810  lhzx 5, 3, 5
  00d3814  cmpw 5, 23
  00d3818  bf 2, 0xd3824
  00d381c  ori 3, 24, 0
  00d3820  b 0xd3844
  00d3824  addc 4, 3, 4
  00d3828  ori 3, 24, 0
  00d382c  clrldi 4, 4, 32
  00d3830  lhz 5, 2(4)
  00d3834  cmpwi 5, 3
  00d3838  bf 1, 0xd3844
  00d383c  lhz 3, 4(4)
  00d3840  addic 3, 3, 3
  00d3844  ori 4, 21, 0
  00d3848  ori 5, 22, 0
  00d384c  li 6, 32
  00d3850  li 7, 18
  00d3854  ori 8, 26, 0
  00d3858  bl 0xcbb98
  00d385c  addic 28, 28, 1
  00d3860  addic 21, 21, 32
  00d3864  cmpw 28, 25
  00d3868  extsw 21, 21
  00d386c  bt 0, 0xd37dc
  00d3870  lwz 4, 116(31)
  00d3874  lis 3, -32768
  00d3878  ori 28, 24, 0
  00d387c  cmpwi 4, 0
  00d3880  ori 3, 3, 255
  00d3884  bt 2, 0xd399c
  00d3888  lwz 3, 8(31)
  00d388c  extsw 3, 3
  00d3890  bl 0x502730
  00d3894  nop
  00d3898  lwz 3, 116(31)
  00d389c  extsw 3, 3
  00d38a0  std 3, 112(1)
  00d38a4  ori 3, 25, 0
  00d38a8  lfd 2, 112(1)
  00d38ac  fcfid 2, 2
  00d38b0  frsp 31, 2
  00d38b4  fdivs 31, 31, 1
  00d38b8  bl 0x502730
  00d38bc  nop
  00d38c0  fdivs 1, 30, 1
  00d38c4  addic 3, 25, -1
  00d38c8  extsw 3, 3
  00d38cc  std 3, 112(1)
  00d38d0  lfd 2, 112(1)
  00d38d4  fcfid 2, 2
  00d38d8  frsp 2, 2
  00d38dc  fmuls 2, 2, 1
  00d38e0  fcmpu 0, 31, 2
  00d38e4  cror 6, 0, 2
  00d38e8  bt 6, 0xd3900
  00d38ec  fsubs 31, 31, 2
  00d38f0  lis 3, 114
  00d38f4  lfs 1, 17596(3)
  00d38f8  fmadds 31, 1, 31, 2
  00d38fc  b 0xd391c
  00d3900  fcmpu 0, 31, 1
  00d3904  cror 6, 1, 2
  00d3908  bt 6, 0xd391c
  00d390c  fsubs 31, 31, 1
  00d3910  lis 3, 114
  00d3914  lfs 2, 17600(3)
  00d3918  fmadds 31, 2, 31, 1
  00d391c  slwi 3, 25, 5
  00d3920  extsw 3, 3
  00d3924  std 3, 112(1)
  00d3928  lfd 1, 112(1)
  00d392c  fcfid 1, 1
  00d3930  frsp 1, 1
  00d3934  fmuls 1, 1, 31
  00d3938  bl 0x502758
  00d393c  nop
  00d3940  lis 4, 13
  00d3944  ori 28, 3, 0
  00d3948  addi 4, 4, 13816
  00d394c  lfs 1, 16(4)
  00d3950  lfs 2, 20(4)
  00d3954  fcmpu 0, 31, 1
  00d3958  fmuls 1, 31, 2
  00d395c  cror 6, 0, 2
  00d3960  bt 6, 0xd3984
  00d3964  lis 3, -32768
  00d3968  lis 4, -32768
  00d396c  fsubs 1, 1, 30
  00d3970  ori 3, 3, 65535
  00d3974  ori 4, 4, 65280
  00d3978  bl 0x5027bc
  00d397c  nop
  00d3980  b 0xd399c
  00d3984  lis 3, -32768
  00d3988  lis 4, -32768
  00d398c  ori 3, 3, 255
  00d3990  ori 4, 4, 65535
  00d3994  bl 0x5027bc
  00d3998  nop
  00d399c  addic 4, 20, 8
  00d39a0  addc 5, 28, 29
  00d39a4  addic 6, 20, 26
  00d39a8  ori 7, 3, 0
  00d39ac  ori 3, 29, 0
  00d39b0  extsw 4, 4
  00d39b4  li 8, 0
  00d39b8  extsw 5, 5
  00d39bc  extsw 6, 6
  00d39c0  bl 0xca72c
  00d39c4  addic 25, 25, -1
  00d39c8  ori 28, 29, 0
  00d39cc  cmpwi 25, 0
  00d39d0  ori 27, 24, 0
  00d39d4  bf 1, 0xd3aa8
  00d39d8  lis 23, 162
  00d39dc  lis 22, 0
  00d39e0  lis 21, 161
  00d39e4  addic 23, 23, -16448
  00d39e8  ori 22, 22, 65535
  00d39ec  addic 21, 21, 24396
  00d39f0  ori 4, 24, 0
  00d39f4  ori 5, 4, 0
  00d39f8  lwz 3, 28(23)
  00d39fc  lhzx 6, 3, 5
  00d3a00  cmpwi 1, 6, 30050
  00d3a04  cmpw 6, 22
  00d3a08  cror 2, 2, 6
  00d3a0c  bt 2, 0xd3a1c
  00d3a10  addic 5, 5, 8
  00d3a14  addic 4, 4, 1
  00d3a18  b 0xd39f8
  00d3a1c  slwi 4, 4, 3
  00d3a20  extsw 5, 4
  00d3a24  lhzx 5, 3, 5
  00d3a28  cmpw 5, 22
  00d3a2c  bf 2, 0xd3a38
  00d3a30  ori 3, 24, 0
  00d3a34  b 0xd3a58
  00d3a38  addc 4, 3, 4
  00d3a3c  ori 3, 24, 0
  00d3a40  clrldi 4, 4, 32
  00d3a44  lhz 5, 2(4)
  00d3a48  cmpwi 5, 1
  00d3a4c  bf 1, 0xd3a58
  00d3a50  lhz 3, 4(4)
  00d3a54  addic 3, 3, 1
  00d3a58  slwi 3, 3, 2
  00d3a5c  lwz 7, 32(23)
  00d3a60  lwz 8, 28(21)
  00d3a64  ori 4, 28, 0
  00d3a68  ori 5, 20, 0
  00d3a6c  li 6, 32
  00d3a70  lwzx 3, 7, 3
  00d3a74  li 7, 32
  00d3a78  sldi 9, 3, 5
  00d3a7c  sldi 3, 3, 2
  00d3a80  addc 3, 9, 3
  00d3a84  addc 3, 8, 3
  00d3a88  ori 8, 30, 0
  00d3a8c  clrldi 3, 3, 32
  00d3a90  bl 0xcbe60
  00d3a94  addic 27, 27, 1
  00d3a98  addic 28, 28, 32
  00d3a9c  cmpw 27, 25
  00d3aa0  extsw 28, 28
  00d3aa4  bt 0, 0xd39f0
  00d3aa8  ori 4, 24, 0
  00d3aac  lis 27, 162
  00d3ab0  lis 25, 0
  00d3ab4  ori 5, 4, 0
  00d3ab8  addic 27, 27, -16448
  00d3abc  ori 25, 25, 65535
  00d3ac0  lwz 3, 28(27)
  00d3ac4  lhzx 6, 3, 5
  00d3ac8  cmpwi 1, 6, 30050
  00d3acc  cmpw 6, 25
  00d3ad0  cror 2, 2, 6
  00d3ad4  bt 2, 0xd3ae4
  00d3ad8  addic 5, 5, 8
  00d3adc  addic 4, 4, 1
  00d3ae0  b 0xd3ac0
  00d3ae4  slwi 4, 4, 3
  00d3ae8  extsw 5, 4
  00d3aec  lhzx 5, 3, 5
  00d3af0  cmpw 5, 25
  00d3af4  bf 2, 0xd3b00
  00d3af8  ori 3, 24, 0
  00d3afc  b 0xd3b20
  00d3b00  addc 4, 3, 4
  00d3b04  ori 3, 24, 0
  00d3b08  clrldi 4, 4, 32
  00d3b0c  lhz 5, 2(4)
  00d3b10  cmpwi 5, 2
  00d3b14  bf 1, 0xd3b20
  00d3b18  lhz 3, 4(4)
  00d3b1c  addic 3, 3, 2
  00d3b20  lis 5, 161
  00d3b24  ori 4, 28, 0
  00d3b28  lwz 6, 32(27)
  00d3b2c  addic 28, 5, 24396
  00d3b30  slwi 3, 3, 2
  00d3b34  ori 5, 20, 0
  00d3b38  lwz 8, 28(28)
  00d3b3c  lwzx 3, 6, 3
  00d3b40  li 6, 32
  00d3b44  sldi 7, 3, 5
  00d3b48  sldi 3, 3, 2
  00d3b4c  addc 3, 7, 3
  00d3b50  li 7, 32
  00d3b54  addc 3, 8, 3
  00d3b58  ori 8, 30, 0
  00d3b5c  clrldi 3, 3, 32
  00d3b60  bl 0xcbe60
  00d3b64  addic 30, 29, -40
  00d3b68  lwz 4, 28(27)
  00d3b6c  addic 29, 20, -8
  00d3b70  lwz 5, 28(28)
  00d3b74  extsw 30, 30
  00d3b78  ori 7, 4, 0
  00d3b7c  lwz 6, 32(27)
  00d3b80  extsw 29, 29
  00d3b84  ori 3, 24, 0
  00d3b88  lhz 8, 0(7)
  00d3b8c  cmpwi 1, 8, 30050
  00d3b90  cmpw 8, 25
  00d3b94  cror 2, 2, 6
  00d3b98  bt 2, 0xd3ba8
  00d3b9c  addic 7, 7, 8
  00d3ba0  addic 3, 3, 1
  00d3ba4  b 0xd3b88
  00d3ba8  slwi 3, 3, 3
  00d3bac  extsw 7, 3
  00d3bb0  lhzx 7, 4, 7
  00d3bb4  cmpw 7, 25
  00d3bb8  bf 2, 0xd3bc4
  00d3bbc  ori 4, 24, 0
  00d3bc0  b 0xd3be4
  00d3bc4  addc 3, 4, 3
  00d3bc8  ori 4, 24, 0
  00d3bcc  clrldi 3, 3, 32
  00d3bd0  lhz 7, 2(3)
  00d3bd4  cmpwi 7, 4
  00d3bd8  bf 1, 0xd3be4
  00d3bdc  lhz 4, 4(3)
  00d3be0  addic 4, 4, 4
  00d3be4  slwi 7, 4, 2
  00d3be8  ori 3, 5, 0
  00d3bec  ori 4, 30, 0
  00d3bf0  ori 5, 29, 0
  00d3bf4  lwzx 7, 6, 7
  00d3bf8  li 6, 48
  00d3bfc  sldi 8, 7, 5
  00d3c00  sldi 7, 7, 2
  00d3c04  addc 8, 8, 7
  00d3c08  li 7, 48
  00d3c0c  addc 3, 3, 8
  00d3c10  ori 8, 26, 0
  00d3c14  clrldi 3, 3, 32
  00d3c18  bl 0xcbe60
  00d3c1c  lwz 3, 28(27)
  00d3c20  ori 4, 24, 0
  00d3c24  lwz 5, 28(28)
  00d3c28  lwz 6, 32(27)
  00d3c2c  ori 7, 3, 0
  00d3c30  lhz 8, 0(7)
  00d3c34  cmpwi 1, 8, 30050
  00d3c38  cmpw 8, 25
  00d3c3c  cror 2, 2, 6
  00d3c40  bt 2, 0xd3c50
  00d3c44  addic 7, 7, 8
  00d3c48  addic 4, 4, 1
  00d3c4c  b 0xd3c30
  00d3c50  slwi 4, 4, 3
  00d3c54  extsw 7, 4
  00d3c58  lhzx 7, 3, 7
  00d3c5c  cmpw 7, 25
  00d3c60  bf 2, 0xd3c68
  00d3c64  b 0xd3c80
  00d3c68  addc 4, 3, 4
  00d3c6c  clrldi 4, 4, 32
  00d3c70  lhz 3, 2(4)
  00d3c74  cmpwi 3, 0
  00d3c78  bf 1, 0xd3c80
  00d3c7c  lhz 24, 4(4)
  00d3c80  slwi 7, 24, 2
  00d3c84  ori 3, 5, 0
  00d3c88  ori 4, 30, 0
  00d3c8c  ori 5, 29, 0
  00d3c90  lwzx 7, 6, 7
  00d3c94  li 6, 48
  00d3c98  sldi 8, 7, 5
  00d3c9c  sldi 7, 7, 2
  00d3ca0  addc 8, 8, 7
  00d3ca4  li 7, 48
  00d3ca8  addc 3, 3, 8
  00d3cac  ori 8, 26, 0
  00d3cb0  clrldi 3, 3, 32
  00d3cb4  bl 0xcbe60
  00d3cb8  lwz 3, 88(31)
  00d3cbc  extsw 3, 3
  00d3cc0  ld 0, 256(1)
  00d3cc4  mtlr 0
  00d3cc8  lfd 30, 224(1)
  00d3ccc  lfd 31, 232(1)
  00d3cd0  ld 20, 128(1)
  00d3cd4  ld 21, 136(1)
  00d3cd8  ld 22, 144(1)
  00d3cdc  ld 23, 152(1)
  00d3ce0  ld 24, 160(1)
  00d3ce4  ld 25, 168(1)
  00d3ce8  ld 26, 176(1)
  00d3cec  ld 27, 184(1)
  00d3cf0  ld 28, 192(1)
  00d3cf4  ld 29, 200(1)
  00d3cf8  ld 30, 208(1)
  00d3cfc  ld 31, 216(1)
  00d3d00  addi 1, 1, 240
  00d3d04  blr

MetalDetectorHud_Update:   # 0xd3d10, 0xd4 bytes
  00d3d10  lis 4, 151
  00d3d14  addic 4, 4, -25376
  00d3d18  lbz 4, 8264(4)
  00d3d1c  cmpwi 4, 0
  00d3d20  bt 2, 0xd3d98
  00d3d24  lis 4, 13
  00d3d28  vspltisw 2, -1
  00d3d2c  lis 5, 114
  00d3d30  addi 4, 4, 15624
  00d3d34  li 6, -3056
  00d3d38  vslw 2, 2, 2
  00d3d3c  lvlx 3, 0, 4
  00d3d40  lvlx 4, 6, 5
  00d3d44  li 4, 124
  00d3d48  vspltw 3, 3, 0
  00d3d4c  lis 6, 114
  00d3d50  vmaddfp 2, 4, 3, 2
  00d3d54  vctsxs 2, 2, 0
  00d3d58  vspltw 2, 2, 0
  00d3d5c  stvewx 2, 4, 3
  00d3d60  lbz 5, 112(3)
  00d3d64  lwz 4, 17296(6)
  00d3d68  cmpw 5, 4
  00d3d6c  bf 0, 0xd3d7c
  00d3d70  addic 4, 5, 1
  00d3d74  stb 4, 112(3)
  00d3d78  b 0xd3de0
  00d3d7c  ori 5, 4, 0
  00d3d80  lbz 4, 113(3)
  00d3d84  cmpw 4, 5
  00d3d88  bf 0, 0xd3de0
  00d3d8c  addic 4, 4, 1
  00d3d90  stb 4, 113(3)
  00d3d94  b 0xd3de0
  00d3d98  li 5, 0
  00d3d9c  lbz 4, 113(3)
  00d3da0  li 6, 1
  00d3da4  cmpwi 4, 0
  00d3da8  stw 5, 124(3)
  00d3dac  stw 6, 108(3)
  00d3db0  bt 2, 0xd3dc0
  00d3db4  addic 4, 4, -1
  00d3db8  stb 4, 113(3)
  00d3dbc  b 0xd3de0
  00d3dc0  lbz 4, 112(3)
  00d3dc4  cmpwi 4, 0
  00d3dc8  bt 2, 0xd3dd8
  00d3dcc  addic 4, 4, -1
  00d3dd0  stb 4, 112(3)
  00d3dd4  b 0xd3de0
  00d3dd8  li 4, -6
  00d3ddc  stw 4, 108(3)
  00d3de0  blr

Draw_MetalDetectorHud:   # 0xd3e20, 0x6c4 bytes
  00d3e20  stdu 1, -256(1)
  00d3e24  mflr 0
  00d3e28  std 0, 272(1)
  00d3e2c  stfd 29, 232(1)
  00d3e30  stfd 30, 240(1)
  00d3e34  stfd 31, 248(1)
  00d3e38  lis 4, 150
  00d3e3c  li 7, 0
  00d3e40  lis 5, 150
  00d3e44  li 6, 18
  00d3e48  li 8, 10
  00d3e4c  std 31, 224(1)
  00d3e50  lwz 4, 27372(4)
  00d3e54  ori 31, 3, 0
  00d3e58  addic 5, 5, 27392
  00d3e5c  subc 4, 7, 4
  00d3e60  cntlzw 4, 4
  00d3e64  sldi 3, 4, 58
  00d3e68  subc 4, 6, 8
  00d3e6c  lwz 5, 4(5)
  00d3e70  std 30, 216(1)
  00d3e74  lis 6, 151
  00d3e78  lwz 30, 80(31)
  00d3e7c  sradi 7, 3, 63
  00d3e80  addic 3, 6, -25376
  00d3e84  and 4, 7, 4
  00d3e88  addc 4, 8, 4
  00d3e8c  subc 4, 5, 4
  00d3e90  std 29, 208(1)
  00d3e94  lbz 5, 8356(3)
  00d3e98  addic 29, 4, -32
  00d3e9c  cmpwi 5, 2
  00d3ea0  std 28, 200(1)
  00d3ea4  std 27, 192(1)
  00d3ea8  std 26, 184(1)
  00d3eac  std 25, 176(1)
  00d3eb0  std 24, 168(1)
  00d3eb4  std 23, 160(1)
  00d3eb8  std 22, 152(1)
  00d3ebc  std 21, 144(1)
  00d3ec0  extsw 29, 29
  00d3ec4  bt 2, 0xd3ed4
  00d3ec8  lwz 3, 8324(3)
  00d3ecc  cmpwi 3, 50
  00d3ed0  bf 2, 0xd3ee0
  00d3ed4  lwz 3, 88(31)
  00d3ed8  extsw 3, 3
  00d3edc  b 0xd449c
  00d3ee0  lbz 3, 112(31)
  00d3ee4  cmpwi 3, 0
  00d3ee8  bf 2, 0xd3ef8
  00d3eec  lwz 3, 88(31)
  00d3ef0  extsw 3, 3
  00d3ef4  b 0xd449c
  00d3ef8  bl 0x502730
  00d3efc  nop
  00d3f00  fmr 31, 1
  00d3f04  lis 3, 114
  00d3f08  lwz 3, 17296(3)
  00d3f0c  extsw 3, 3
  00d3f10  bl 0x502730
  00d3f14  nop
  00d3f18  fdivs 31, 31, 1
  00d3f1c  lis 3, 13
  00d3f20  addi 3, 3, 15844
  00d3f24  lfs 29, 0(3)
  00d3f28  lbz 3, 113(31)
  00d3f2c  fcmpu 0, 31, 29
  00d3f30  cror 6, 0, 2
  00d3f34  bt 6, 0xd3f40
  00d3f38  fmr 31, 29
  00d3f3c  b 0xd3f5c
  00d3f40  lis 4, 13
  00d3f44  addi 4, 4, 15844
  00d3f48  lfs 1, 4(4)
  00d3f4c  fcmpu 0, 31, 1
  00d3f50  cror 6, 1, 2
  00d3f54  bt 6, 0xd3f5c
  00d3f58  fmr 31, 1
  00d3f5c  bl 0x502730
  00d3f60  nop
  00d3f64  fmr 30, 1
  00d3f68  lis 3, 114
  00d3f6c  lwz 3, 17296(3)
  00d3f70  extsw 3, 3
  00d3f74  bl 0x502730
  00d3f78  nop
  00d3f7c  fdivs 30, 30, 1
  00d3f80  fcmpu 0, 30, 29
  00d3f84  cror 6, 0, 2
  00d3f88  bt 6, 0xd3f94
  00d3f8c  fmr 30, 29
  00d3f90  b 0xd3fb0
  00d3f94  lis 3, 13
  00d3f98  addi 3, 3, 15844
  00d3f9c  lfs 1, 4(3)
  00d3fa0  fcmpu 0, 30, 1
  00d3fa4  cror 6, 1, 2
  00d3fa8  bt 6, 0xd3fb0
  00d3fac  fmr 30, 1
  00d3fb0  lis 3, 13
  00d3fb4  addi 3, 3, 15844
  00d3fb8  lfs 1, 8(3)
  00d3fbc  fmuls 1, 30, 1
  00d3fc0  bl 0x502758
  00d3fc4  nop
  00d3fc8  lis 4, 114
  00d3fcc  ori 28, 3, 0
  00d3fd0  lwz 4, 17604(4)
  00d3fd4  extsw 4, 4
  00d3fd8  std 4, 120(1)
  00d3fdc  lfd 1, 120(1)
  00d3fe0  fcfid 1, 1
  00d3fe4  frsp 1, 1
  00d3fe8  fmuls 1, 1, 31
  00d3fec  bl 0x502758
  00d3ff0  nop
  00d3ff4  lis 4, 114
  00d3ff8  ori 27, 3, 0
  00d3ffc  lwz 4, 17608(4)
  00d4000  extsw 4, 4
  00d4004  std 4, 120(1)
  00d4008  lis 4, 114
  00d400c  lwz 26, 17612(4)
  00d4010  lfd 1, 120(1)
  00d4014  addc 26, 26, 30
  00d4018  fcfid 1, 1
  00d401c  frsp 1, 1
  00d4020  fmuls 1, 1, 31
  00d4024  bl 0x502758
  00d4028  nop
  00d402c  lis 23, 162
  00d4030  ori 25, 3, 0
  00d4034  addic 23, 23, -16448
  00d4038  li 3, 0
  00d403c  lis 22, 0
  00d4040  ori 24, 3, 0
  00d4044  ori 22, 22, 65535
  00d4048  lwz 4, 28(23)
  00d404c  ori 5, 4, 0
  00d4050  lhz 6, 0(5)
  00d4054  cmpwi 1, 6, 30080
  00d4058  cmpw 6, 22
  00d405c  cror 2, 2, 6
  00d4060  bt 2, 0xd4070
  00d4064  addic 5, 5, 8
  00d4068  addic 3, 3, 1
  00d406c  b 0xd4050
  00d4070  slwi 3, 3, 3
  00d4074  extsw 5, 3
  00d4078  lhzx 5, 4, 5
  00d407c  cmpw 5, 22
  00d4080  bf 2, 0xd408c
  00d4084  ori 3, 24, 0
  00d4088  b 0xd40ac
  00d408c  addc 4, 4, 3
  00d4090  ori 3, 24, 0
  00d4094  clrldi 4, 4, 32
  00d4098  lhz 5, 2(4)
  00d409c  cmpwi 5, 1
  00d40a0  bf 1, 0xd40ac
  00d40a4  lhz 3, 4(4)
  00d40a8  addic 3, 3, 1
  00d40ac  addic 4, 26, 16
  00d40b0  ori 5, 29, 0
  00d40b4  li 7, 32
  00d40b8  extsw 4, 4
  00d40bc  li 6, 32
  00d40c0  ori 8, 27, 0
  00d40c4  bl 0xcbb98
  00d40c8  lwz 5, 28(23)
  00d40cc  ori 3, 24, 0
  00d40d0  lwz 4, 32(23)
  00d40d4  ori 6, 5, 0
  00d40d8  lhz 7, 0(6)
  00d40dc  cmpwi 1, 7, 30080
  00d40e0  cmpw 7, 22
  00d40e4  cror 2, 2, 6
  00d40e8  bt 2, 0xd40f8
  00d40ec  addic 6, 6, 8
  00d40f0  addic 3, 3, 1
  00d40f4  b 0xd40d8
  00d40f8  slwi 3, 3, 3
  00d40fc  extsw 6, 3
  00d4100  lhzx 6, 5, 6
  00d4104  cmpw 6, 22
  00d4108  bf 2, 0xd4114
  00d410c  ori 3, 24, 0
  00d4110  b 0xd4130
  00d4114  addc 5, 5, 3
  00d4118  ori 3, 24, 0
  00d411c  clrldi 5, 5, 32
  00d4120  lhz 6, 2(5)
  00d4124  cmpwi 6, 0
  00d4128  bf 1, 0xd4130
  00d412c  lhz 3, 4(5)
  00d4130  slwi 3, 3, 2
  00d4134  lis 5, 161
  00d4138  subc 26, 26, 25
  00d413c  addic 21, 5, 24396
  00d4140  addic 6, 25, 16
  00d4144  lwzx 3, 4, 3
  00d4148  ori 8, 27, 0
  00d414c  extsw 4, 26
  00d4150  sldi 5, 3, 5
  00d4154  sldi 3, 3, 2
  00d4158  lwz 7, 28(21)
  00d415c  extsw 6, 6
  00d4160  addc 3, 5, 3
  00d4164  ori 5, 29, 0
  00d4168  addc 3, 7, 3
  00d416c  li 7, 32
  00d4170  clrldi 3, 3, 32
  00d4174  bl 0xcbe60
  00d4178  lwz 4, 28(23)
  00d417c  ori 3, 24, 0
  00d4180  lwz 5, 28(21)
  00d4184  lwz 6, 32(23)
  00d4188  ori 7, 4, 0
  00d418c  lhz 8, 0(7)
  00d4190  cmpwi 1, 8, 30080
  00d4194  cmpw 8, 22
  00d4198  cror 2, 2, 6
  00d419c  bt 2, 0xd41ac
  00d41a0  addic 7, 7, 8
  00d41a4  addic 3, 3, 1
  00d41a8  b 0xd418c
  00d41ac  slwi 3, 3, 3
  00d41b0  extsw 7, 3
  00d41b4  lhzx 7, 4, 7
  00d41b8  cmpw 7, 22
  00d41bc  bf 2, 0xd41c8
  00d41c0  ori 4, 24, 0
  00d41c4  b 0xd41e8
  00d41c8  addc 3, 4, 3
  00d41cc  ori 4, 24, 0
  00d41d0  clrldi 3, 3, 32
  00d41d4  lhz 7, 2(3)
  00d41d8  cmpwi 7, 1
  00d41dc  bf 1, 0xd41e8
  00d41e0  lhz 4, 4(3)
  00d41e4  addic 4, 4, 1
  00d41e8  slwi 4, 4, 2
  00d41ec  ori 3, 5, 0
  00d41f0  addic 5, 26, -32
  00d41f4  ori 8, 27, 0
  00d41f8  lwzx 6, 6, 4
  00d41fc  extsw 4, 5
  00d4200  sldi 7, 6, 5
  00d4204  sldi 6, 6, 2
  00d4208  ori 5, 29, 0
  00d420c  addc 7, 7, 6
  00d4210  li 6, 32
  00d4214  addc 3, 3, 7
  00d4218  li 7, 32
  00d421c  clrldi 3, 3, 32
  00d4220  bl 0xcbe60
  00d4224  lis 3, 161
  00d4228  lis 4, -30584
  00d422c  ori 4, 4, 34953
  00d4230  lwz 6, 1808(3)
  00d4234  mulhw 3, 4, 6
  00d4238  addc 3, 3, 6
  00d423c  srawi 3, 3, 5
  00d4240  srwi 4, 3, 31
  00d4244  addc 3, 3, 4
  00d4248  lwz 4, 28(23)
  00d424c  sldi 5, 3, 6
  00d4250  sldi 7, 3, 2
  00d4254  ori 3, 24, 0
  00d4258  subc 7, 5, 7
  00d425c  ori 5, 4, 0
  00d4260  subc 27, 6, 7
  00d4264  srawi 27, 27, 1
  00d4268  lhz 6, 0(5)
  00d426c  cmpwi 1, 6, 30031
  00d4270  cmpw 6, 22
  00d4274  cror 2, 2, 6
  00d4278  bt 2, 0xd4288
  00d427c  addic 5, 5, 8
  00d4280  addic 3, 3, 1
  00d4284  b 0xd4268
  00d4288  slwi 3, 3, 3
  00d428c  extsw 5, 3
  00d4290  lhzx 5, 4, 5
  00d4294  cmpw 5, 22
  00d4298  bf 2, 0xd42a0
  00d429c  b 0xd42c0
  00d42a0  addc 3, 4, 3
  00d42a4  clrldi 3, 3, 32
  00d42a8  lhz 4, 2(3)
  00d42ac  cmpw 27, 4
  00d42b0  bf 0, 0xd42c0
  00d42b4  lhz 3, 4(3)
  00d42b8  addc 24, 3, 27
  00d42bc  extsw 24, 24
  00d42c0  addic 5, 30, -32
  00d42c4  ori 8, 28, 0
  00d42c8  ori 3, 31, 0
  00d42cc  li 7, 0
  00d42d0  extsw 5, 5
  00d42d4  ori 4, 24, 0
  00d42d8  ori 6, 29, 0
  00d42dc  bl 0xcdeb8
  00d42e0  addic 28, 1, 112
  00d42e4  lis 4, 101
  00d42e8  ori 3, 28, 0
  00d42ec  addic 4, 4, 8536
  00d42f0  bl 0x5cd2a8
  00d42f4  nop
  00d42f8  lis 3, 114
  00d42fc  lis 4, 13
  00d4300  addi 27, 4, 15844
  00d4304  lwz 3, 17632(3)
  00d4308  extsw 3, 3
  00d430c  lis 4, 114
  00d4310  std 3, 120(1)
  00d4314  lis 3, 114
  00d4318  lfs 1, 12(27)
  00d431c  lfs 2, -3056(3)
  00d4320  lis 3, 114
  00d4324  lwz 3, 17616(3)
  00d4328  lfd 3, 120(1)
  00d432c  fcfid 3, 3
  00d4330  addc 3, 3, 30
  00d4334  lwz 4, 17620(4)
  00d4338  extsw 30, 3
  00d433c  addc 3, 4, 29
  00d4340  extsw 29, 3
  00d4344  frsp 3, 3
  00d4348  fadds 1, 3, 1
  00d434c  fmuls 1, 2, 1
  00d4350  fctiwz 1, 1
  00d4354  stfd 1, 120(1)
  00d4358  lwz 26, 124(1)
  00d435c  extsw 25, 26
  00d4360  ori 3, 25, 0
  00d4364  bl 0x502730
  00d4368  nop
  00d436c  lis 3, 161
  00d4370  lwz 3, 1808(3)
  00d4374  divw 4, 3, 25
  00d4378  mullw 4, 4, 26
  00d437c  subc 3, 3, 4
  00d4380  extsw 3, 3
  00d4384  std 3, 120(1)
  00d4388  lfs 2, 16(27)
  00d438c  lfs 3, 20(27)
  00d4390  lfs 4, 24(27)
  00d4394  lfd 5, 120(1)
  00d4398  fcfid 5, 5
  00d439c  lis 4, -32768
  00d43a0  li 3, 0
  00d43a4  frsp 5, 5
  00d43a8  fdivs 1, 5, 1
  00d43ac  lfs 5, 28(27)
  00d43b0  lfs 6, 32(27)
  00d43b4  lfs 7, 36(27)
  00d43b8  lfs 8, 40(27)
  00d43bc  lfs 9, 44(27)
  00d43c0  lfs 10, 48(27)
  00d43c4  lfs 11, 52(27)
  00d43c8  lfs 12, 4(27)
  00d43cc  fmsubs 1, 1, 2, 3
  00d43d0  fsubs 2, 4, 1
  00d43d4  fsubs 3, 5, 1
  00d43d8  fsub 4, 1, 2
  00d43dc  fsel 1, 4, 2, 1
  00d43e0  fsub 2, 3, 1
  00d43e4  fsel 1, 2, 3, 1
  00d43e8  fmuls 2, 1, 1
  00d43ec  fmuls 3, 2, 1
  00d43f0  fmuls 4, 2, 3
  00d43f4  fmadds 1, 3, 6, 1
  00d43f8  fmuls 3, 2, 4
  00d43fc  fmadds 1, 4, 7, 1
  00d4400  fmuls 2, 2, 3
  00d4404  fmadds 1, 3, 8, 1
  00d4408  fmadds 1, 2, 9, 1
  00d440c  fmsubs 1, 1, 10, 11
  00d4410  fsub 2, 1, 12
  00d4414  fsel 1, 2, 1, 12
  00d4418  fmuls 31, 30, 1
  00d441c  fmr 1, 31
  00d4420  bl 0x5027bc
  00d4424  nop
  00d4428  lis 4, 114
  00d442c  fmr 1, 31
  00d4430  lis 5, 114
  00d4434  ori 27, 3, 0
  00d4438  lwz 3, 17624(4)
  00d443c  lwz 4, 17628(5)
  00d4440  extsw 3, 3
  00d4444  extsw 4, 4
  00d4448  bl 0x5027bc
  00d444c  nop
  00d4450  addic 4, 30, 1
  00d4454  ori 5, 27, 0
  00d4458  ori 27, 3, 0
  00d445c  addic 8, 29, 1
  00d4460  extsw 3, 4
  00d4464  ori 6, 28, 0
  00d4468  li 7, -1
  00d446c  extsw 4, 8
  00d4470  bl 0x6fcfc
  00d4474  nop
  00d4478  ori 3, 30, 0
  00d447c  ori 4, 29, 0
  00d4480  ori 5, 27, 0
  00d4484  ori 6, 28, 0
  00d4488  li 7, -1
  00d448c  bl 0x6fcfc
  00d4490  nop
  00d4494  lwz 3, 88(31)
  00d4498  extsw 3, 3
  00d449c  ld 0, 272(1)
  00d44a0  mtlr 0
  00d44a4  lfd 29, 232(1)
  00d44a8  lfd 30, 240(1)
  00d44ac  lfd 31, 248(1)
  00d44b0  ld 21, 144(1)
  00d44b4  ld 22, 152(1)
  00d44b8  ld 23, 160(1)
  00d44bc  ld 24, 168(1)
  00d44c0  ld 25, 176(1)
  00d44c4  ld 26, 184(1)
  00d44c8  ld 27, 192(1)
  00d44cc  ld 28, 200(1)
  00d44d0  ld 29, 208(1)
  00d44d4  ld 30, 216(1)
  00d44d8  ld 31, 224(1)
  00d44dc  addi 1, 1, 256
  00d44e0  blr

Draw_GiantClankHealthHUD:   # 0xd44e4, 0x344 bytes
  00d44e4  stdu 1, -160(1)
  00d44e8  mflr 0
  00d44ec  std 0, 176(1)
  00d44f0  std 31, 152(1)
  00d44f4  ori 31, 3, 0
  00d44f8  li 3, 256
  00d44fc  li 7, 64
  00d4500  lwz 4, 80(31)
  00d4504  lwz 5, 84(31)
  00d4508  lwz 6, 96(31)
  00d450c  stw 4, 112(1)
  00d4510  stw 5, 116(1)
  00d4514  clrlwi 8, 6, 31
  00d4518  stw 3, 88(31)
  00d451c  cmpwi 8, 0
  00d4520  stw 7, 92(31)
  00d4524  std 30, 144(1)
  00d4528  std 29, 136(1)
  00d452c  std 28, 128(1)
  00d4530  std 27, 120(1)
  00d4534  lwz 3, 108(31)
  00d4538  bf 2, 0xd4550
  00d453c  rlwinm 7, 6, 0, 30, 30
  00d4540  cmpwi 7, 0
  00d4544  bf 2, 0xd4550
  00d4548  addic 5, 5, -32
  00d454c  stw 5, 116(1)
  00d4550  rlwinm 5, 6, 0, 29, 29
  00d4554  cmpwi 5, 0
  00d4558  bf 2, 0xd4590
  00d455c  rlwinm 5, 6, 0, 28, 28
  00d4560  li 6, 0
  00d4564  li 7, 128
  00d4568  subc 5, 6, 5
  00d456c  li 6, 256
  00d4570  cntlzw 5, 5
  00d4574  subc 7, 7, 6
  00d4578  sldi 5, 5, 58
  00d457c  sradi 5, 5, 63
  00d4580  and 5, 5, 7
  00d4584  addc 5, 6, 5
  00d4588  subc 4, 4, 5
  00d458c  stw 4, 112(1)
  00d4590  extsw 6, 3
  00d4594  ori 3, 31, 0
  00d4598  addic 4, 1, 112
  00d459c  addic 5, 1, 116
  00d45a0  li 7, 0
  00d45a4  bl 0xc8c08
  00d45a8  lwz 3, 116(31)
  00d45ac  lwz 5, 8(31)
  00d45b0  lis 29, 162
  00d45b4  sldi 4, 3, 5
  00d45b8  lwz 7, 112(1)
  00d45bc  addic 29, 29, -16448
  00d45c0  subc 3, 3, 4
  00d45c4  lis 28, 0
  00d45c8  subc 4, 4, 3
  00d45cc  ori 28, 28, 65535
  00d45d0  sldi 4, 4, 2
  00d45d4  lwz 6, 28(29)
  00d45d8  addc 3, 4, 3
  00d45dc  li 4, 0
  00d45e0  divw 3, 3, 5
  00d45e4  addic 3, 3, 27
  00d45e8  lwz 5, 116(1)
  00d45ec  ori 30, 4, 0
  00d45f0  extsw 3, 3
  00d45f4  ori 8, 6, 0
  00d45f8  lhz 9, 0(8)
  00d45fc  cmpwi 1, 9, 30040
  00d4600  cmpw 9, 28
  00d4604  cror 2, 2, 6
  00d4608  bt 2, 0xd4618
  00d460c  addic 8, 8, 8
  00d4610  addic 4, 4, 1
  00d4614  b 0xd45f8
  00d4618  slwi 4, 4, 3
  00d461c  extsw 8, 4
  00d4620  lhzx 8, 6, 8
  00d4624  cmpw 8, 28
  00d4628  bf 2, 0xd4634
  00d462c  ori 4, 30, 0
  00d4630  b 0xd4654
  00d4634  addc 6, 6, 4
  00d4638  ori 4, 30, 0
  00d463c  clrldi 6, 6, 32
  00d4640  lhz 8, 2(6)
  00d4644  cmpwi 8, 1
  00d4648  bf 1, 0xd4654
  00d464c  lhz 4, 4(6)
  00d4650  addic 4, 4, 1
  00d4654  ori 6, 3, 0
  00d4658  ori 3, 4, 0
  00d465c  extsw 4, 7
  00d4660  li 7, 64
  00d4664  extsw 5, 5
  00d4668  li 8, 128
  00d466c  bl 0xd24ec
  00d4670  lwz 3, 28(29)
  00d4674  ori 7, 30, 0
  00d4678  lwz 4, 112(1)
  00d467c  lwz 5, 116(1)
  00d4680  ori 8, 3, 0
  00d4684  lwz 6, 32(29)
  00d4688  lhz 9, 0(8)
  00d468c  cmpwi 1, 9, 30040
  00d4690  cmpw 9, 28
  00d4694  cror 2, 2, 6
  00d4698  bt 2, 0xd46a8
  00d469c  addic 8, 8, 8
  00d46a0  addic 7, 7, 1
  00d46a4  b 0xd4688
  00d46a8  slwi 7, 7, 3
  00d46ac  extsw 8, 7
  00d46b0  lhzx 8, 3, 8
  00d46b4  cmpw 8, 28
  00d46b8  bf 2, 0xd46c4
  00d46bc  ori 3, 30, 0
  00d46c0  b 0xd46e0
  00d46c4  addc 7, 3, 7
  00d46c8  ori 3, 30, 0
  00d46cc  clrldi 7, 7, 32
  00d46d0  lhz 8, 2(7)
  00d46d4  cmpwi 8, 0
  00d46d8  bf 1, 0xd46e0
  00d46dc  lhz 3, 4(7)
  00d46e0  slwi 3, 3, 2
  00d46e4  lis 7, 161
  00d46e8  extsw 4, 4
  00d46ec  addic 27, 7, 24396
  00d46f0  extsw 5, 5
  00d46f4  lwzx 3, 6, 3
  00d46f8  li 7, 64
  00d46fc  sldi 6, 3, 5
  00d4700  sldi 3, 3, 2
  00d4704  lwz 8, 28(27)
  00d4708  addc 3, 6, 3
  00d470c  li 6, 256
  00d4710  addc 3, 8, 3
  00d4714  li 8, 128
  00d4718  clrldi 3, 3, 32
  00d471c  bl 0xcbe60
  00d4720  lwz 4, 28(29)
  00d4724  lwz 5, 112(1)
  00d4728  ori 3, 30, 0
  00d472c  lwz 6, 116(1)
  00d4730  ori 9, 4, 0
  00d4734  lwz 7, 28(27)
  00d4738  lwz 8, 32(29)
  00d473c  lhz 10, 0(9)
  00d4740  cmpwi 1, 10, 30040
  00d4744  cmpw 10, 28
  00d4748  cror 2, 2, 6
  00d474c  bt 2, 0xd475c
  00d4750  addic 9, 9, 8
  00d4754  addic 3, 3, 1
  00d4758  b 0xd473c
  00d475c  slwi 3, 3, 3
  00d4760  extsw 9, 3
  00d4764  lhzx 9, 4, 9
  00d4768  cmpw 9, 28
  00d476c  bf 2, 0xd4774
  00d4770  b 0xd4790
  00d4774  addc 3, 4, 3
  00d4778  clrldi 3, 3, 32
  00d477c  lhz 4, 2(3)
  00d4780  cmpwi 4, 2
  00d4784  bf 1, 0xd4790
  00d4788  lhz 30, 4(3)
  00d478c  addic 30, 30, 2
  00d4790  lis 4, 151
  00d4794  li 9, 0
  00d4798  addic 4, 4, -25376
  00d479c  ori 3, 6, 0
  00d47a0  slwi 6, 30, 2
  00d47a4  li 10, 0
  00d47a8  li 11, 128
  00d47ac  lhz 4, 5686(4)
  00d47b0  subc 4, 9, 4
  00d47b4  lwzx 6, 8, 6
  00d47b8  cntlzw 4, 4
  00d47bc  sldi 8, 6, 5
  00d47c0  sldi 4, 4, 58
  00d47c4  sldi 6, 6, 2
  00d47c8  sradi 9, 4, 63
  00d47cc  extsw 4, 5
  00d47d0  subc 5, 10, 11
  00d47d4  addc 8, 8, 6
  00d47d8  and 5, 9, 5
  00d47dc  li 6, 32
  00d47e0  addc 9, 11, 5
  00d47e4  extsw 5, 3
  00d47e8  addc 3, 7, 8
  00d47ec  li 7, 32
  00d47f0  clrldi 3, 3, 32
  00d47f4  ori 8, 9, 0
  00d47f8  bl 0xcbe60
  00d47fc  lwz 3, 88(31)
  00d4800  extsw 3, 3
  00d4804  ld 0, 176(1)
  00d4808  mtlr 0
  00d480c  ld 27, 120(1)
  00d4810  ld 28, 128(1)
  00d4814  ld 29, 136(1)
  00d4818  ld 30, 144(1)
  00d481c  ld 31, 152(1)
  00d4820  addi 1, 1, 160
  00d4824  blr

Draw_AmmoCounter:   # 0xd4838, 0x5c8 bytes
  00d4838  stdu 1, -272(1)
  00d483c  mflr 0
  00d4840  std 0, 288(1)
  00d4844  stfd 29, 248(1)
  00d4848  stfd 30, 256(1)
  00d484c  stfd 31, 264(1)
  00d4850  std 31, 240(1)
  00d4854  lis 4, 150
  00d4858  ori 31, 3, 0
  00d485c  li 3, 0
  00d4860  std 21, 160(1)
  00d4864  li 5, 18
  00d4868  li 21, 10
  00d486c  std 30, 232(1)
  00d4870  lwz 4, 27372(4)
  00d4874  lwz 30, 80(31)
  00d4878  subc 3, 3, 4
  00d487c  subc 5, 5, 21
  00d4880  cntlzw 6, 3
  00d4884  lbz 3, 112(31)
  00d4888  sldi 6, 6, 58
  00d488c  lwz 4, 88(31)
  00d4890  cmpwi 3, 0
  00d4894  sradi 6, 6, 63
  00d4898  extsw 30, 30
  00d489c  and 5, 6, 5
  00d48a0  std 29, 224(1)
  00d48a4  std 28, 216(1)
  00d48a8  std 27, 208(1)
  00d48ac  std 26, 200(1)
  00d48b0  std 25, 192(1)
  00d48b4  std 24, 184(1)
  00d48b8  std 23, 176(1)
  00d48bc  std 22, 168(1)
  00d48c0  std 20, 152(1)
  00d48c4  addc 21, 21, 5
  00d48c8  bf 2, 0xd48d4
  00d48cc  extsw 3, 4
  00d48d0  b 0xd4db4
  00d48d4  bl 0x502730
  00d48d8  nop
  00d48dc  fmr 31, 1
  00d48e0  lis 3, 114
  00d48e4  lwz 3, 17636(3)
  00d48e8  extsw 3, 3
  00d48ec  bl 0x502730
  00d48f0  nop
  00d48f4  fdivs 31, 31, 1
  00d48f8  lis 3, 13
  00d48fc  addi 3, 3, 18472
  00d4900  lfs 29, 0(3)
  00d4904  lbz 3, 113(31)
  00d4908  fcmpu 0, 31, 29
  00d490c  cror 6, 0, 2
  00d4910  bt 6, 0xd491c
  00d4914  fmr 31, 29
  00d4918  b 0xd4938
  00d491c  lis 4, 13
  00d4920  addi 4, 4, 18472
  00d4924  lfs 1, 4(4)
  00d4928  fcmpu 0, 31, 1
  00d492c  cror 6, 1, 2
  00d4930  bt 6, 0xd4938
  00d4934  fmr 31, 1
  00d4938  bl 0x502730
  00d493c  nop
  00d4940  fmr 30, 1
  00d4944  lis 3, 114
  00d4948  lwz 3, 17640(3)
  00d494c  extsw 3, 3
  00d4950  bl 0x502730
  00d4954  nop
  00d4958  fdivs 30, 30, 1
  00d495c  fcmpu 0, 30, 29
  00d4960  cror 6, 0, 2
  00d4964  bt 6, 0xd4970
  00d4968  fmr 30, 29
  00d496c  b 0xd498c
  00d4970  lis 3, 13
  00d4974  addi 3, 3, 18472
  00d4978  lfs 1, 4(3)
  00d497c  fcmpu 0, 30, 1
  00d4980  cror 6, 1, 2
  00d4984  bt 6, 0xd498c
  00d4988  fmr 30, 1
  00d498c  lis 3, 13
  00d4990  addi 28, 3, 18472
  00d4994  lfs 1, 8(28)
  00d4998  fmuls 1, 31, 1
  00d499c  bl 0x502758
  00d49a0  nop
  00d49a4  ori 29, 3, 0
  00d49a8  extsw 3, 29
  00d49ac  std 3, 128(1)
  00d49b0  lfs 1, 12(28)
  00d49b4  lfd 2, 128(1)
  00d49b8  fcfid 2, 2
  00d49bc  frsp 2, 2
  00d49c0  fmuls 1, 2, 1
  00d49c4  bl 0x502758
  00d49c8  nop
  00d49cc  ori 28, 3, 0
  00d49d0  lwz 3, 8(31)
  00d49d4  cmpwi 3, 100
  00d49d8  bf 0, 0xd49e8
  00d49dc  lis 3, 114
  00d49e0  lwz 27, 17644(3)
  00d49e4  b 0xd49f0
  00d49e8  lis 3, 114
  00d49ec  lwz 27, 17648(3)
  00d49f0  extsw 3, 27
  00d49f4  addic 26, 30, 4
  00d49f8  std 3, 128(1)
  00d49fc  extsw 26, 26
  00d4a00  lfd 1, 128(1)
  00d4a04  fcfid 1, 1
  00d4a08  frsp 1, 1
  00d4a0c  fmuls 1, 1, 31
  00d4a10  bl 0x502758
  00d4a14  nop
  00d4a18  lis 23, 162
  00d4a1c  addc 25, 30, 3
  00d4a20  addic 23, 23, -16448
  00d4a24  lis 22, 0
  00d4a28  li 3, 0
  00d4a2c  ori 22, 22, 65535
  00d4a30  extsw 25, 25
  00d4a34  lwz 5, 28(23)
  00d4a38  ori 24, 3, 0
  00d4a3c  lwz 4, 32(23)
  00d4a40  ori 6, 5, 0
  00d4a44  lhz 7, 0(6)
  00d4a48  cmpwi 1, 7, 30080
  00d4a4c  cmpw 7, 22
  00d4a50  cror 2, 2, 6
  00d4a54  bt 2, 0xd4a64
  00d4a58  addic 6, 6, 8
  00d4a5c  addic 3, 3, 1
  00d4a60  b 0xd4a44
  00d4a64  slwi 3, 3, 3
  00d4a68  extsw 6, 3
  00d4a6c  lhzx 6, 5, 6
  00d4a70  cmpw 6, 22
  00d4a74  bf 2, 0xd4a80
  00d4a78  ori 3, 24, 0
  00d4a7c  b 0xd4aa0
  00d4a80  addc 5, 5, 3
  00d4a84  ori 3, 24, 0
  00d4a88  clrldi 5, 5, 32
  00d4a8c  lhz 6, 2(5)
  00d4a90  cmpwi 6, 1
  00d4a94  bf 1, 0xd4aa0
  00d4a98  lhz 3, 4(5)
  00d4a9c  addic 3, 3, 1
  00d4aa0  slwi 3, 3, 2
  00d4aa4  lis 5, 161
  00d4aa8  li 7, 32
  00d4aac  addic 20, 5, 24396
  00d4ab0  addic 5, 26, -32
  00d4ab4  lwzx 3, 4, 3
  00d4ab8  extsw 5, 5
  00d4abc  sldi 4, 3, 5
  00d4ac0  sldi 3, 3, 2
  00d4ac4  lwz 6, 28(20)
  00d4ac8  ori 8, 28, 0
  00d4acc  addc 3, 4, 3
  00d4ad0  ori 4, 5, 0
  00d4ad4  addc 3, 6, 3
  00d4ad8  ori 5, 21, 0
  00d4adc  li 6, 32
  00d4ae0  clrldi 3, 3, 32
  00d4ae4  bl 0xcbe60
  00d4ae8  lwz 4, 28(23)
  00d4aec  lwz 5, 28(20)
  00d4af0  ori 3, 24, 0
  00d4af4  lwz 6, 32(23)
  00d4af8  ori 7, 4, 0
  00d4afc  lhz 8, 0(7)
  00d4b00  cmpwi 1, 8, 30080
  00d4b04  cmpw 8, 22
  00d4b08  cror 2, 2, 6
  00d4b0c  bt 2, 0xd4b1c
  00d4b10  addic 7, 7, 8
  00d4b14  addic 3, 3, 1
  00d4b18  b 0xd4afc
  00d4b1c  slwi 3, 3, 3
  00d4b20  extsw 7, 3
  00d4b24  lhzx 7, 4, 7
  00d4b28  cmpw 7, 22
  00d4b2c  bf 2, 0xd4b38
  00d4b30  ori 3, 24, 0
  00d4b34  b 0xd4b54
  00d4b38  addc 4, 4, 3
  00d4b3c  ori 3, 24, 0
  00d4b40  clrldi 4, 4, 32
  00d4b44  lhz 7, 2(4)
  00d4b48  cmpwi 7, 0
  00d4b4c  bf 1, 0xd4b54
  00d4b50  lhz 3, 4(4)
  00d4b54  ori 7, 6, 0
  00d4b58  slwi 3, 3, 2
  00d4b5c  ori 8, 5, 0
  00d4b60  ori 4, 26, 0
  00d4b64  ori 5, 21, 0
  00d4b68  ori 6, 25, 0
  00d4b6c  lwzx 3, 7, 3
  00d4b70  li 7, 32
  00d4b74  sldi 9, 3, 5
  00d4b78  sldi 3, 3, 2
  00d4b7c  addc 3, 9, 3
  00d4b80  addc 3, 8, 3
  00d4b84  ori 8, 28, 0
  00d4b88  clrldi 3, 3, 32
  00d4b8c  bl 0xcbe60
  00d4b90  lwz 4, 28(23)
  00d4b94  ori 3, 24, 0
  00d4b98  ori 5, 4, 0
  00d4b9c  lhz 6, 0(5)
  00d4ba0  cmpwi 1, 6, 30080
  00d4ba4  cmpw 6, 22
  00d4ba8  cror 2, 2, 6
  00d4bac  bt 2, 0xd4bbc
  00d4bb0  addic 5, 5, 8
  00d4bb4  addic 3, 3, 1
  00d4bb8  b 0xd4b9c
  00d4bbc  slwi 3, 3, 3
  00d4bc0  extsw 5, 3
  00d4bc4  lhzx 5, 4, 5
  00d4bc8  cmpw 5, 22
  00d4bcc  bf 2, 0xd4bd8
  00d4bd0  ori 4, 24, 0
  00d4bd4  b 0xd4bf8
  00d4bd8  addc 3, 4, 3
  00d4bdc  ori 4, 24, 0
  00d4be0  clrldi 3, 3, 32
  00d4be4  lhz 5, 2(3)
  00d4be8  cmpwi 5, 1
  00d4bec  bf 1, 0xd4bf8
  00d4bf0  lhz 4, 4(3)
  00d4bf4  addic 4, 4, 1
  00d4bf8  addc 3, 25, 26
  00d4bfc  li 7, 32
  00d4c00  extsw 5, 3
  00d4c04  ori 3, 4, 0
  00d4c08  ori 4, 5, 0
  00d4c0c  ori 8, 28, 0
  00d4c10  ori 5, 21, 0
  00d4c14  li 6, 32
  00d4c18  bl 0xcbb98
  00d4c1c  lwz 4, 28(23)
  00d4c20  ori 3, 24, 0
  00d4c24  lwz 28, 0(31)
  00d4c28  ori 5, 4, 0
  00d4c2c  lhz 6, 0(5)
  00d4c30  cmpw 1, 6, 28
  00d4c34  cmpw 6, 22
  00d4c38  cror 2, 2, 6
  00d4c3c  bt 2, 0xd4c4c
  00d4c40  addic 5, 5, 8
  00d4c44  addic 3, 3, 1
  00d4c48  b 0xd4c2c
  00d4c4c  slwi 3, 3, 3
  00d4c50  extsw 5, 3
  00d4c54  lhzx 5, 4, 5
  00d4c58  cmpw 5, 22
  00d4c5c  bf 2, 0xd4c64
  00d4c60  b 0xd4c80
  00d4c64  addc 3, 4, 3
  00d4c68  clrldi 3, 3, 32
  00d4c6c  lhz 4, 2(3)
  00d4c70  cmpwi 4, 3
  00d4c74  bf 1, 0xd4c80
  00d4c78  lhz 24, 4(3)
  00d4c7c  addic 24, 24, 3
  00d4c80  ori 3, 31, 0
  00d4c84  stw 24, 68(31)
  00d4c88  ori 4, 24, 0
  00d4c8c  ori 5, 30, 0
  00d4c90  ori 6, 21, 0
  00d4c94  li 7, 0
  00d4c98  ori 8, 29, 0
  00d4c9c  bl 0xcdeb8
  00d4ca0  lwz 3, 116(31)
  00d4ca4  addic 29, 1, 112
  00d4ca8  lwz 6, 8(31)
  00d4cac  lis 4, 101
  00d4cb0  extsw 28, 3
  00d4cb4  ori 3, 29, 0
  00d4cb8  extsw 6, 6
  00d4cbc  addic 4, 4, 8464
  00d4cc0  ori 5, 28, 0
  00d4cc4  bl 0x5cd2a8
  00d4cc8  nop
  00d4ccc  cmpwi 28, 0
  00d4cd0  bt 2, 0xd4d00
  00d4cd4  lis 3, 114
  00d4cd8  lis 4, 114
  00d4cdc  fmr 1, 30
  00d4ce0  lwz 3, 17652(3)
  00d4ce4  lwz 4, 17656(4)
  00d4ce8  extsw 3, 3
  00d4cec  extsw 4, 4
  00d4cf0  bl 0x5027bc
  00d4cf4  nop
  00d4cf8  ori 28, 3, 0
  00d4cfc  b 0xd4d28
  00d4d00  lis 3, 114
  00d4d04  fmr 1, 30
  00d4d08  lis 4, 114
  00d4d0c  lwz 3, 17660(3)
  00d4d10  lwz 4, 17664(4)
  00d4d14  extsw 3, 3
  00d4d18  extsw 4, 4
  00d4d1c  bl 0x5027bc
  00d4d20  nop
  00d4d24  ori 28, 3, 0
  00d4d28  fmr 1, 30
  00d4d2c  li 3, 0
  00d4d30  lis 4, -32768
  00d4d34  bl 0x5027bc
  00d4d38  nop
  00d4d3c  lis 26, 114
  00d4d40  lis 25, 114
  00d4d44  ori 5, 3, 0
  00d4d48  li 7, -1
  00d4d4c  lwz 4, 17668(26)
  00d4d50  lwz 3, 17672(25)
  00d4d54  addc 4, 4, 30
  00d4d58  addc 3, 3, 21
  00d4d5c  addc 4, 4, 27
  00d4d60  addic 3, 3, 1
  00d4d64  addic 6, 4, 1
  00d4d68  extsw 4, 3
  00d4d6c  extsw 3, 6
  00d4d70  ori 6, 29, 0
  00d4d74  bl 0x70130
  00d4d78  nop
  00d4d7c  lwz 3, 17668(26)
  00d4d80  lwz 4, 17672(25)
  00d4d84  ori 5, 28, 0
  00d4d88  addc 3, 3, 30
  00d4d8c  addc 4, 4, 21
  00d4d90  addc 3, 3, 27
  00d4d94  extsw 4, 4
  00d4d98  extsw 3, 3
  00d4d9c  ori 6, 29, 0
  00d4da0  li 7, -1
  00d4da4  bl 0x70130
  00d4da8  nop
  00d4dac  lwz 3, 88(31)
  00d4db0  extsw 3, 3
  00d4db4  ld 0, 288(1)
  00d4db8  mtlr 0
  00d4dbc  lfd 29, 248(1)
  00d4dc0  lfd 30, 256(1)
  00d4dc4  lfd 31, 264(1)
  00d4dc8  ld 20, 152(1)
  00d4dcc  ld 21, 160(1)
  00d4dd0  ld 22, 168(1)
  00d4dd4  ld 23, 176(1)
  00d4dd8  ld 24, 184(1)
  00d4ddc  ld 25, 192(1)
  00d4de0  ld 26, 200(1)
  00d4de4  ld 27, 208(1)
  00d4de8  ld 28, 216(1)
  00d4dec  ld 29, 224(1)
  00d4df0  ld 30, 232(1)
  00d4df4  ld 31, 240(1)
  00d4df8  addi 1, 1, 272
  00d4dfc  blr

MobyCounterHud_Init:   # 0xd4e08, 0xd4 bytes
  00d4e08  stdu 1, -64(1)
  00d4e0c  lis 4, 13
  00d4e10  lis 5, 114
  00d4e14  addi 4, 4, 19968
  00d4e18  lfs 2, 0(4)
  00d4e1c  lfs 1, -3056(5)
  00d4e20  lwz 4, 124(3)
  00d4e24  fmuls 2, 1, 2
  00d4e28  fctiwz 2, 2
  00d4e2c  stfd 2, 48(1)
  00d4e30  lwz 5, 52(1)
  00d4e34  cmpw 4, 5
  00d4e38  bt 0, 0xd4e8c
  00d4e3c  lis 4, 13
  00d4e40  addi 4, 4, 19968
  00d4e44  lfs 2, 4(4)
  00d4e48  lbz 5, 112(3)
  00d4e4c  fmuls 1, 1, 2
  00d4e50  fctiwz 1, 1
  00d4e54  stfd 1, 48(1)
  00d4e58  lwz 4, 52(1)
  00d4e5c  cmpw 5, 4
  00d4e60  bf 0, 0xd4e70
  00d4e64  addic 4, 5, 1
  00d4e68  stb 4, 112(3)
  00d4e6c  b 0xd4ec8
  00d4e70  ori 5, 4, 0
  00d4e74  lbz 4, 113(3)
  00d4e78  cmpw 4, 5
  00d4e7c  bf 0, 0xd4ec8
  00d4e80  addic 4, 4, 1
  00d4e84  stb 4, 113(3)
  00d4e88  b 0xd4ec8
  00d4e8c  lbz 5, 113(3)
  00d4e90  lbz 4, 112(3)
  00d4e94  cmpwi 6, 5, 0
  00d4e98  cmpwi 1, 4, 0
  00d4e9c  bf 26, 0xd4ea4
  00d4ea0  bt 6, 0xd4eac
  00d4ea4  li 6, 1
  00d4ea8  stw 6, 108(3)
  00d4eac  bt 26, 0xd4ebc
  00d4eb0  addic 4, 5, -1
  00d4eb4  stb 4, 113(3)
  00d4eb8  b 0xd4ec8
  00d4ebc  bt 6, 0xd4ec8
  00d4ec0  addic 4, 4, -1
  00d4ec4  stb 4, 112(3)
  00d4ec8  lwz 4, 12(3)
  00d4ecc  lwz 4, 0(4)
  00d4ed0  stw 4, 116(3)
  00d4ed4  addi 1, 1, 64
  00d4ed8  blr

Draw_MobyCounterHud:   # 0xd4ef0, 0x7e4 bytes
  00d4ef0  stdu 1, -272(1)
  00d4ef4  mflr 0
  00d4ef8  std 0, 288(1)
  00d4efc  stfd 29, 248(1)
  00d4f00  stfd 30, 256(1)
  00d4f04  stfd 31, 264(1)
  00d4f08  std 31, 240(1)
  00d4f0c  ori 31, 3, 0
  00d4f10  lbz 3, 112(31)
  00d4f14  std 30, 232(1)
  00d4f18  std 29, 224(1)
  00d4f1c  std 28, 216(1)
  00d4f20  std 27, 208(1)
  00d4f24  std 26, 200(1)
  00d4f28  std 25, 192(1)
  00d4f2c  std 24, 184(1)
  00d4f30  std 23, 176(1)
  00d4f34  std 22, 168(1)
  00d4f38  std 21, 160(1)
  00d4f3c  std 20, 152(1)
  00d4f40  cmpwi 3, 0
  00d4f44  bf 2, 0xd4f54
  00d4f48  lwz 3, 88(31)
  00d4f4c  extsw 3, 3
  00d4f50  b 0xd5688
  00d4f54  lwz 5, 96(31)
  00d4f58  li 4, 0
  00d4f5c  lwz 6, 88(31)
  00d4f60  rlwinm 7, 5, 0, 28, 28
  00d4f64  lwz 8, 80(31)
  00d4f68  srawi 9, 6, 1
  00d4f6c  subc 4, 4, 7
  00d4f70  subc 7, 9, 6
  00d4f74  cntlzw 4, 4
  00d4f78  rlwinm 5, 5, 0, 29, 29
  00d4f7c  sldi 4, 4, 58
  00d4f80  li 9, 0
  00d4f84  sradi 4, 4, 63
  00d4f88  subc 5, 9, 5
  00d4f8c  and 4, 4, 7
  00d4f90  cntlzw 5, 5
  00d4f94  addc 4, 6, 4
  00d4f98  sldi 5, 5, 58
  00d4f9c  subc 4, 8, 4
  00d4fa0  sradi 5, 5, 63
  00d4fa4  subc 4, 4, 8
  00d4fa8  li 29, 1
  00d4fac  and 4, 5, 4
  00d4fb0  addc 4, 8, 4
  00d4fb4  cmpwi 4, 256
  00d4fb8  bf 1, 0xd4fcc
  00d4fbc  lis 4, 114
  00d4fc0  li 29, 0
  00d4fc4  lwz 30, 17680(4)
  00d4fc8  b 0xd4fd4
  00d4fcc  lis 4, 114
  00d4fd0  lwz 30, 17676(4)
  00d4fd4  lis 4, 150
  00d4fd8  li 5, 0
  00d4fdc  li 6, 18
  00d4fe0  li 7, 10
  00d4fe4  extsw 21, 30
  00d4fe8  lwz 4, 27372(4)
  00d4fec  subc 4, 5, 4
  00d4ff0  subc 5, 6, 7
  00d4ff4  cntlzw 4, 4
  00d4ff8  sldi 4, 4, 58
  00d4ffc  sradi 4, 4, 63
  00d5000  and 4, 4, 5
  00d5004  addc 4, 7, 4
  00d5008  subfic 30, 4, 384
  00d500c  extsw 30, 30
  00d5010  bl 0x502730
  00d5014  nop
  00d5018  fmr 31, 1
  00d501c  lis 3, 114
  00d5020  lwz 3, 17636(3)
  00d5024  extsw 3, 3
  00d5028  bl 0x502730
  00d502c  nop
  00d5030  fdivs 31, 31, 1
  00d5034  lis 3, 13
  00d5038  addi 3, 3, 20188
  00d503c  lfs 29, 0(3)
  00d5040  lbz 3, 113(31)
  00d5044  fcmpu 0, 31, 29
  00d5048  cror 6, 0, 2
  00d504c  bt 6, 0xd5058
  00d5050  fmr 31, 29
  00d5054  b 0xd5074
  00d5058  lis 4, 13
  00d505c  addi 4, 4, 20188
  00d5060  lfs 1, 4(4)
  00d5064  fcmpu 0, 31, 1
  00d5068  cror 6, 1, 2
  00d506c  bt 6, 0xd5074
  00d5070  fmr 31, 1
  00d5074  bl 0x502730
  00d5078  nop
  00d507c  fmr 30, 1
  00d5080  lis 3, 114
  00d5084  lwz 3, 17640(3)
  00d5088  extsw 3, 3
  00d508c  bl 0x502730
  00d5090  nop
  00d5094  fdivs 30, 30, 1
  00d5098  lwz 28, 116(31)
  00d509c  fcmpu 0, 30, 29
  00d50a0  cror 6, 0, 2
  00d50a4  bt 6, 0xd50b0
  00d50a8  fmr 30, 29
  00d50ac  b 0xd50cc
  00d50b0  lis 3, 13
  00d50b4  addi 3, 3, 20188
  00d50b8  lfs 1, 4(3)
  00d50bc  fcmpu 0, 30, 1
  00d50c0  cror 6, 1, 2
  00d50c4  bt 6, 0xd50cc
  00d50c8  fmr 30, 1
  00d50cc  addic 25, 1, 112
  00d50d0  lis 4, 101
  00d50d4  ori 3, 25, 0
  00d50d8  extsw 5, 28
  00d50dc  addic 4, 4, 8472
  00d50e0  bl 0x5cd2a8
  00d50e4  nop
  00d50e8  lis 3, 13
  00d50ec  addi 28, 3, 20188
  00d50f0  lfs 1, 8(28)
  00d50f4  fmuls 1, 31, 1
  00d50f8  bl 0x502758
  00d50fc  nop
  00d5100  extsw 3, 3
  00d5104  std 3, 128(1)
  00d5108  lfs 1, 12(28)
  00d510c  lfd 2, 128(1)
  00d5110  fcfid 2, 2
  00d5114  frsp 2, 2
  00d5118  fmuls 1, 2, 1
  00d511c  bl 0x502758
  00d5120  nop
  00d5124  ori 28, 3, 0
  00d5128  lwz 3, 8(31)
  00d512c  cmpwi 3, 10
  00d5130  bt 0, 0xd5140
  00d5134  lis 3, 114
  00d5138  lwz 26, 17700(3)
  00d513c  b 0xd5148
  00d5140  lis 3, 114
  00d5144  lwz 26, 17696(3)
  00d5148  extsw 3, 26
  00d514c  addic 27, 21, 4
  00d5150  std 3, 128(1)
  00d5154  extsw 27, 27
  00d5158  lfd 1, 128(1)
  00d515c  fcfid 1, 1
  00d5160  frsp 1, 1
  00d5164  fmuls 1, 1, 31
  00d5168  bl 0x502758
  00d516c  nop
  00d5170  cmpwi 29, 0
  00d5174  ori 26, 3, 0
  00d5178  bt 2, 0xd536c
  00d517c  lis 23, 162
  00d5180  li 3, 0
  00d5184  addic 23, 23, -16448
  00d5188  lis 22, 0
  00d518c  ori 24, 3, 0
  00d5190  ori 22, 22, 65535
  00d5194  lwz 5, 28(23)
  00d5198  lwz 4, 32(23)
  00d519c  ori 6, 5, 0
  00d51a0  lhz 7, 0(6)
  00d51a4  cmpwi 1, 7, 30080
  00d51a8  cmpw 7, 22
  00d51ac  cror 2, 2, 6
  00d51b0  bt 2, 0xd51c0
  00d51b4  addic 6, 6, 8
  00d51b8  addic 3, 3, 1
  00d51bc  b 0xd51a0
  00d51c0  slwi 3, 3, 3
  00d51c4  extsw 6, 3
  00d51c8  lhzx 6, 5, 6
  00d51cc  cmpw 6, 22
  00d51d0  bf 2, 0xd51dc
  00d51d4  ori 3, 24, 0
  00d51d8  b 0xd51fc
  00d51dc  addc 5, 5, 3
  00d51e0  ori 3, 24, 0
  00d51e4  clrldi 5, 5, 32
  00d51e8  lhz 6, 2(5)
  00d51ec  cmpwi 6, 1
  00d51f0  bf 1, 0xd51fc
  00d51f4  lhz 3, 4(5)
  00d51f8  addic 3, 3, 1
  00d51fc  slwi 3, 3, 2
  00d5200  lis 5, 161
  00d5204  addic 6, 27, -32
  00d5208  addic 20, 5, 24396
  00d520c  extsw 6, 6
  00d5210  lwzx 3, 4, 3
  00d5214  ori 5, 30, 0
  00d5218  ori 8, 28, 0
  00d521c  sldi 4, 3, 5
  00d5220  sldi 3, 3, 2
  00d5224  lwz 7, 28(20)
  00d5228  addc 3, 4, 3
  00d522c  ori 4, 6, 0
  00d5230  addc 3, 7, 3
  00d5234  li 6, 32
  00d5238  li 7, 32
  00d523c  clrldi 3, 3, 32
  00d5240  bl 0xcbe60
  00d5244  lwz 4, 28(23)
  00d5248  ori 3, 24, 0
  00d524c  lwz 5, 28(20)
  00d5250  ori 7, 4, 0
  00d5254  lwz 6, 32(23)
  00d5258  lhz 8, 0(7)
  00d525c  cmpwi 1, 8, 30080
  00d5260  cmpw 8, 22
  00d5264  cror 2, 2, 6
  00d5268  bt 2, 0xd5278
  00d526c  addic 7, 7, 8
  00d5270  addic 3, 3, 1
  00d5274  b 0xd5258
  00d5278  slwi 3, 3, 3
  00d527c  extsw 7, 3
  00d5280  lhzx 7, 4, 7
  00d5284  cmpw 7, 22
  00d5288  bf 2, 0xd5294
  00d528c  ori 3, 24, 0
  00d5290  b 0xd52b0
  00d5294  addc 4, 4, 3
  00d5298  ori 3, 24, 0
  00d529c  clrldi 4, 4, 32
  00d52a0  lhz 7, 2(4)
  00d52a4  cmpwi 7, 0
  00d52a8  bf 1, 0xd52b0
  00d52ac  lhz 3, 4(4)
  00d52b0  slwi 3, 3, 2
  00d52b4  ori 8, 5, 0
  00d52b8  ori 4, 27, 0
  00d52bc  ori 5, 30, 0
  00d52c0  lwzx 3, 6, 3
  00d52c4  ori 6, 26, 0
  00d52c8  sldi 7, 3, 5
  00d52cc  sldi 3, 3, 2
  00d52d0  addc 3, 7, 3
  00d52d4  li 7, 32
  00d52d8  addc 3, 8, 3
  00d52dc  ori 8, 28, 0
  00d52e0  clrldi 3, 3, 32
  00d52e4  bl 0xcbe60
  00d52e8  lwz 4, 28(23)
  00d52ec  ori 3, 24, 0
  00d52f0  ori 5, 4, 0
  00d52f4  lhz 6, 0(5)
  00d52f8  cmpwi 1, 6, 30080
  00d52fc  cmpw 6, 22
  00d5300  cror 2, 2, 6
  00d5304  bt 2, 0xd5314
  00d5308  addic 5, 5, 8
  00d530c  addic 3, 3, 1
  00d5310  b 0xd52f4
  00d5314  slwi 3, 3, 3
  00d5318  extsw 5, 3
  00d531c  lhzx 5, 4, 5
  00d5320  cmpw 5, 22
  00d5324  bf 2, 0xd532c
  00d5328  b 0xd5348
  00d532c  addc 3, 4, 3
  00d5330  clrldi 3, 3, 32
  00d5334  lhz 4, 2(3)
  00d5338  cmpwi 4, 1
  00d533c  bf 1, 0xd5348
  00d5340  lhz 24, 4(3)
  00d5344  addic 24, 24, 1
  00d5348  addc 4, 26, 27
  00d534c  ori 3, 24, 0
  00d5350  extsw 4, 4
  00d5354  ori 5, 30, 0
  00d5358  li 6, 32
  00d535c  li 7, 32
  00d5360  ori 8, 28, 0
  00d5364  bl 0xcbb98
  00d5368  b 0xd5558
  00d536c  lis 23, 162
  00d5370  li 3, 0
  00d5374  addic 23, 23, -16448
  00d5378  lis 22, 0
  00d537c  ori 24, 3, 0
  00d5380  ori 22, 22, 65535
  00d5384  lwz 4, 28(23)
  00d5388  ori 5, 4, 0
  00d538c  lhz 6, 0(5)
  00d5390  cmpwi 1, 6, 30080
  00d5394  cmpw 6, 22
  00d5398  cror 2, 2, 6
  00d539c  bt 2, 0xd53ac
  00d53a0  addic 5, 5, 8
  00d53a4  addic 3, 3, 1
  00d53a8  b 0xd538c
  00d53ac  slwi 3, 3, 3
  00d53b0  extsw 5, 3
  00d53b4  lhzx 5, 4, 5
  00d53b8  cmpw 5, 22
  00d53bc  bf 2, 0xd53c8
  00d53c0  ori 3, 24, 0
  00d53c4  b 0xd53e8
  00d53c8  addc 4, 4, 3
  00d53cc  ori 3, 24, 0
  00d53d0  clrldi 4, 4, 32
  00d53d4  lhz 5, 2(4)
  00d53d8  cmpwi 5, 1
  00d53dc  bf 1, 0xd53e8
  00d53e0  lhz 3, 4(4)
  00d53e4  addic 3, 3, 1
  00d53e8  ori 5, 30, 0
  00d53ec  ori 4, 27, 0
  00d53f0  li 6, 32
  00d53f4  li 7, 32
  00d53f8  ori 8, 28, 0
  00d53fc  bl 0xcbb98
  00d5400  lwz 5, 28(23)
  00d5404  ori 3, 24, 0
  00d5408  lwz 4, 32(23)
  00d540c  ori 6, 5, 0
  00d5410  lhz 7, 0(6)
  00d5414  cmpwi 1, 7, 30080
  00d5418  cmpw 7, 22
  00d541c  cror 2, 2, 6
  00d5420  bt 2, 0xd5430
  00d5424  addic 6, 6, 8
  00d5428  addic 3, 3, 1
  00d542c  b 0xd5410
  00d5430  slwi 3, 3, 3
  00d5434  extsw 6, 3
  00d5438  lhzx 6, 5, 6
  00d543c  cmpw 6, 22
  00d5440  bf 2, 0xd544c
  00d5444  ori 3, 24, 0
  00d5448  b 0xd5468
  00d544c  addc 5, 5, 3
  00d5450  ori 3, 24, 0
  00d5454  clrldi 5, 5, 32
  00d5458  lhz 6, 2(5)
  00d545c  cmpwi 6, 0
  00d5460  bf 1, 0xd5468
  00d5464  lhz 3, 4(5)
  00d5468  slwi 3, 3, 2
  00d546c  lis 5, 161
  00d5470  subc 27, 27, 26
  00d5474  addic 20, 5, 24396
  00d5478  extsw 5, 27
  00d547c  lwzx 3, 4, 3
  00d5480  li 7, 32
  00d5484  sldi 4, 3, 5
  00d5488  sldi 3, 3, 2
  00d548c  lwz 6, 28(20)
  00d5490  ori 8, 28, 0
  00d5494  addc 3, 4, 3
  00d5498  ori 4, 5, 0
  00d549c  addc 3, 6, 3
  00d54a0  ori 5, 30, 0
  00d54a4  ori 6, 26, 0
  00d54a8  clrldi 3, 3, 32
  00d54ac  bl 0xcbe60
  00d54b0  lwz 4, 28(23)
  00d54b4  lwz 5, 28(20)
  00d54b8  ori 3, 24, 0
  00d54bc  lwz 6, 32(23)
  00d54c0  ori 7, 4, 0
  00d54c4  lhz 8, 0(7)
  00d54c8  cmpwi 1, 8, 30080
  00d54cc  cmpw 8, 22
  00d54d0  cror 2, 2, 6
  00d54d4  bt 2, 0xd54e4
  00d54d8  addic 7, 7, 8
  00d54dc  addic 3, 3, 1
  00d54e0  b 0xd54c4
  00d54e4  slwi 3, 3, 3
  00d54e8  extsw 7, 3
  00d54ec  lhzx 7, 4, 7
  00d54f0  cmpw 7, 22
  00d54f4  bf 2, 0xd54fc
  00d54f8  b 0xd5518
  00d54fc  addc 3, 4, 3
  00d5500  clrldi 3, 3, 32
  00d5504  lhz 4, 2(3)
  00d5508  cmpwi 4, 1
  00d550c  bf 1, 0xd5518
  00d5510  lhz 24, 4(3)
  00d5514  addic 24, 24, 1
  00d5518  ori 3, 6, 0
  00d551c  slwi 7, 24, 2
  00d5520  ori 9, 5, 0
  00d5524  addic 4, 27, -32
  00d5528  ori 5, 30, 0
  00d552c  extsw 4, 4
  00d5530  lwzx 3, 3, 7
  00d5534  li 6, 32
  00d5538  sldi 8, 3, 5
  00d553c  sldi 3, 3, 2
  00d5540  li 7, 32
  00d5544  addc 3, 8, 3
  00d5548  ori 8, 28, 0
  00d554c  addc 3, 9, 3
  00d5550  clrldi 3, 3, 32
  00d5554  bl 0xcbe60
  00d5558  cmpwi 29, 0
  00d555c  bt 2, 0xd5584
  00d5560  lwz 4, 68(31)
  00d5564  ori 3, 31, 0
  00d5568  ori 5, 21, 0
  00d556c  ori 6, 30, 0
  00d5570  li 7, 0
  00d5574  li 8, 128
  00d5578  extsw 4, 4
  00d557c  bl 0xcdeb8
  00d5580  b 0xd55a8
  00d5584  addic 5, 21, -22
  00d5588  lwz 4, 68(31)
  00d558c  ori 3, 31, 0
  00d5590  extsw 5, 5
  00d5594  ori 6, 30, 0
  00d5598  li 7, 0
  00d559c  li 8, 128
  00d55a0  extsw 4, 4
  00d55a4  bl 0xcdeb8
  00d55a8  lis 3, 114
  00d55ac  fmr 1, 30
  00d55b0  lis 4, 114
  00d55b4  ori 28, 30, 0
  00d55b8  lwz 3, 17688(3)
  00d55bc  lwz 4, 17692(4)
  00d55c0  extsw 3, 3
  00d55c4  extsw 4, 4
  00d55c8  bl 0x5027bc
  00d55cc  nop
  00d55d0  ori 30, 3, 0
  00d55d4  fmr 1, 30
  00d55d8  lis 4, -32768
  00d55dc  li 3, 0
  00d55e0  bl 0x5027bc
  00d55e4  nop
  00d55e8  addic 4, 28, 9
  00d55ec  addic 5, 28, 8
  00d55f0  cmpwi 29, 0
  00d55f4  extsw 4, 4
  00d55f8  extsw 29, 5
  00d55fc  bt 2, 0xd5644
  00d5600  addic 5, 21, 67
  00d5604  li 7, -1
  00d5608  extsw 6, 5
  00d560c  ori 5, 3, 0
  00d5610  ori 3, 6, 0
  00d5614  ori 6, 25, 0
  00d5618  bl 0x70130
  00d561c  nop
  00d5620  addic 3, 21, 66
  00d5624  ori 4, 29, 0
  00d5628  li 7, -1
  00d562c  extsw 3, 3
  00d5630  ori 5, 30, 0
  00d5634  ori 6, 25, 0
  00d5638  bl 0x70130
  00d563c  nop
  00d5640  b 0xd5680
  00d5644  addic 6, 21, -25
  00d5648  ori 5, 3, 0
  00d564c  extsw 3, 6
  00d5650  ori 6, 25, 0
  00d5654  li 7, -1
  00d5658  bl 0x70130
  00d565c  nop
  00d5660  addic 3, 21, -26
  00d5664  ori 4, 29, 0
  00d5668  extsw 3, 3
  00d566c  ori 5, 30, 0
  00d5670  ori 6, 25, 0
  00d5674  li 7, -1
  00d5678  bl 0x70130
  00d567c  nop
  00d5680  lwz 3, 88(31)
  00d5684  extsw 3, 3
  00d5688  ld 0, 288(1)
  00d568c  mtlr 0
  00d5690  lfd 29, 248(1)
  00d5694  lfd 30, 256(1)
  00d5698  lfd 31, 264(1)
  00d569c  ld 20, 152(1)
  00d56a0  ld 21, 160(1)
  00d56a4  ld 22, 168(1)
  00d56a8  ld 23, 176(1)
  00d56ac  ld 24, 184(1)
  00d56b0  ld 25, 192(1)
  00d56b4  ld 26, 200(1)
  00d56b8  ld 27, 208(1)
  00d56bc  ld 28, 216(1)
  00d56c0  ld 29, 224(1)
  00d56c4  ld 30, 232(1)
  00d56c8  ld 31, 240(1)
  00d56cc  addi 1, 1, 272
  00d56d0  blr

UpdateAllGameplayHUD:   # 0xd56d8, 0x3c8 bytes
  00d56d8  stdu 1, -208(1)
  00d56dc  mflr 0
  00d56e0  std 0, 224(1)
  00d56e4  stfd 31, 200(1)
  00d56e8  addi 0, 1, 128
  00d56ec  stvx 31, 0, 0
  00d56f0  std 31, 192(1)
  00d56f4  lis 4, 114
  00d56f8  ori 31, 3, 0
  00d56fc  lwz 3, 17704(4)
  00d5700  std 30, 184(1)
  00d5704  std 29, 176(1)
  00d5708  std 28, 168(1)
  00d570c  std 27, 160(1)
  00d5710  std 26, 152(1)
  00d5714  cmpwi 3, 0
  00d5718  bf 2, 0xd5928
  00d571c  lis 30, 151
  00d5720  lis 3, 115
  00d5724  addic 30, 30, -25376
  00d5728  addic 3, 3, 32056
  00d572c  li 8, 0
  00d5730  lwz 4, 4280(30)
  00d5734  lbz 7, 8356(30)
  00d5738  sldi 5, 4, 3
  00d573c  cmpwi 7, 0
  00d5740  addc 6, 5, 5
  00d5744  cmpwi 1, 7, 2
  00d5748  addc 5, 5, 6
  00d574c  li 6, 0
  00d5750  extsw 5, 5
  00d5754  lhzx 3, 3, 5
  00d5758  subc 5, 8, 4
  00d575c  subc 3, 6, 3
  00d5760  cntlzw 3, 3
  00d5764  sldi 3, 3, 58
  00d5768  sradi 3, 3, 63
  00d576c  and 3, 3, 5
  00d5770  addc 3, 4, 3
  00d5774  cmpwi 6, 3, 0
  00d5778  bf 2, 0xd57f4
  00d577c  bt 26, 0xd57f4
  00d5780  lis 4, 114
  00d5784  lis 5, 0
  00d5788  addic 30, 4, 17704
  00d578c  sldi 6, 3, 3
  00d5790  lis 8, 115
  00d5794  ori 4, 5, 60000
  00d5798  addc 9, 6, 6
  00d579c  lis 10, 151
  00d57a0  stw 3, 4(30)
  00d57a4  addic 12, 8, 32062
  00d57a8  addc 4, 3, 4
  00d57ac  addc 8, 6, 9
  00d57b0  addic 10, 10, -16212
  00d57b4  slwi 3, 3, 2
  00d57b8  extsw 9, 8
  00d57bc  addc 8, 10, 3
  00d57c0  lis 7, 112
  00d57c4  li 3, 16
  00d57c8  addic 5, 7, 22536
  00d57cc  lis 11, 112
  00d57d0  lhzx 9, 12, 9
  00d57d4  lis 7, 112
  00d57d8  extsw 4, 4
  00d57dc  addic 6, 11, 22744
  00d57e0  addic 7, 7, 22664
  00d57e4  clrldi 8, 8, 32
  00d57e8  bl 0xc8444
  00d57ec  stw 3, 8(30)
  00d57f0  b 0xd5928
  00d57f4  bf 6, 0xd58ac
  00d57f8  lis 5, 114
  00d57fc  addic 5, 5, 17704
  00d5800  lwz 4, 8(5)
  00d5804  cmpwi 4, -1
  00d5808  bt 2, 0xd5874
  00d580c  lis 7, 114
  00d5810  li 3, 0
  00d5814  addic 7, 7, 15120
  00d5818  ori 6, 3, 0
  00d581c  addic 8, 7, 100
  00d5820  lwz 9, 0(8)
  00d5824  cmpw 9, 4
  00d5828  bt 2, 0xd583c
  00d582c  addic 3, 3, 1
  00d5830  addic 8, 8, 144
  00d5834  cmpwi 3, 13
  00d5838  bt 0, 0xd5820
  00d583c  cmpwi 3, 13
  00d5840  bf 0, 0xd586c
  00d5844  sldi 4, 3, 7
  00d5848  sldi 3, 3, 4
  00d584c  addc 3, 4, 3
  00d5850  extsw 3, 3
  00d5854  addc 3, 7, 3
  00d5858  lwz 4, 104(3)
  00d585c  stw 6, 36(3)
  00d5860  cmpwi 4, 0
  00d5864  bf 2, 0xd586c
  00d5868  stw 6, 4(3)
  00d586c  li 3, -1
  00d5870  stw 3, 8(5)
  00d5874  li 3, 16
  00d5878  lis 5, 112
  00d587c  lis 6, 112
  00d5880  lis 4, 0
  00d5884  lis 7, 112
  00d5888  addic 8, 30, 5680
  00d588c  addic 5, 5, 22176
  00d5890  addic 6, 6, 22216
  00d5894  ori 4, 4, 65535
  00d5898  addic 7, 7, 22656
  00d589c  li 9, 200
  00d58a0  bl 0xc8444
  00d58a4  sth 3, 5684(30)
  00d58a8  b 0xd5928
  00d58ac  lis 5, 114
  00d58b0  addic 5, 5, 17704
  00d58b4  lwz 4, 8(5)
  00d58b8  cmpwi 4, -1
  00d58bc  bt 2, 0xd5928
  00d58c0  lis 7, 114
  00d58c4  li 3, 0
  00d58c8  addic 7, 7, 15120
  00d58cc  ori 6, 3, 0
  00d58d0  addic 8, 7, 100
  00d58d4  lwz 9, 0(8)
  00d58d8  cmpw 9, 4
  00d58dc  bt 2, 0xd58f0
  00d58e0  addic 3, 3, 1
  00d58e4  addic 8, 8, 144
  00d58e8  cmpwi 3, 13
  00d58ec  bt 0, 0xd58d4
  00d58f0  cmpwi 3, 13
  00d58f4  bf 0, 0xd5920
  00d58f8  sldi 4, 3, 7
  00d58fc  sldi 3, 3, 4
  00d5900  addc 3, 4, 3
  00d5904  extsw 3, 3
  00d5908  addc 3, 7, 3
  00d590c  lwz 4, 104(3)
  00d5910  stw 6, 36(3)
  00d5914  cmpwi 4, 0
  00d5918  bf 2, 0xd5920
  00d591c  stw 6, 4(3)
  00d5920  li 3, -1
  00d5924  stw 3, 8(5)
  00d5928  lis 3, 13
  00d592c  lis 27, 114
  00d5930  addi 3, 3, 22228
  00d5934  li 29, 0
  00d5938  addic 27, 27, 15120
  00d593c  lis 28, 162
  00d5940  ori 30, 29, 0
  00d5944  lvlx 31, 0, 3
  00d5948  addic 28, 28, -16448
  00d594c  lfs 31, 0(3)
  00d5950  addic 26, 27, 124
  00d5954  vspltw 31, 31, 0
  00d5958  lwz 3, 4(27)
  00d595c  lwz 4, 4(28)
  00d5960  rlwinm 3, 3, 0, 27, 27
  00d5964  or 3, 3, 4
  00d5968  cmpwi 3, 0
  00d596c  bt 2, 0xd59b4
  00d5970  lis 3, 114
  00d5974  vspltisw 2, -1
  00d5978  li 4, -3056
  00d597c  lfs 1, -3056(3)
  00d5980  vslw 2, 2, 2
  00d5984  fmuls 1, 1, 31
  00d5988  lvlx 3, 4, 3
  00d598c  lwz 3, 124(27)
  00d5990  vmaddfp 2, 3, 31, 2
  00d5994  fctiwz 1, 1
  00d5998  vctsxs 2, 2, 0
  00d599c  stfd 1, 112(1)
  00d59a0  lwz 4, 116(1)
  00d59a4  cmpw 3, 4
  00d59a8  bf 0, 0xd59b4
  00d59ac  vspltw 2, 2, 0
  00d59b0  stvewx 2, 0, 26
  00d59b4  lwz 3, 124(27)
  00d59b8  cmpwi 3, 0
  00d59bc  bf 1, 0xd59c8
  00d59c0  addic 3, 3, -1
  00d59c4  stw 3, 124(27)
  00d59c8  cmpwi 3, 0
  00d59cc  bf 1, 0xd59f0
  00d59d0  lwz 3, 108(27)
  00d59d4  addic 30, 30, 1
  00d59d8  cmpwi 3, 30
  00d59dc  extsw 30, 30
  00d59e0  bf 0, 0xd5a04
  00d59e4  addic 3, 3, 1
  00d59e8  stw 3, 108(27)
  00d59ec  b 0xd5a04
  00d59f0  lwz 3, 108(27)
  00d59f4  cmpwi 3, -6
  00d59f8  bf 1, 0xd5a04
  00d59fc  addic 3, 3, -1
  00d5a00  stw 3, 108(27)
  00d5a04  cmpwi 1, 3, -6
  00d5a08  lwz 3, 104(27)
  00d5a0c  cmpwi 3, 0
  00d5a10  crorc 2, 2, 6
  00d5a14  bt 2, 0xd5a20
  00d5a18  ori 3, 27, 0
  00d5a1c  bl 0xc833c
  00d5a20  cmpwi 31, 0
  00d5a24  bt 2, 0xd5a54
  00d5a28  lwz 3, 20(27)
  00d5a2c  cmpwi 3, 0
  00d5a30  bt 2, 0xd5a54
  00d5a34  ori 4, 3, 0
  00d5a38  ori 3, 27, 0
  00d5a3c  lwz 5, 0(4)
  00d5a40  std 2, 40(1)
  00d5a44  mtctr 5
  00d5a48  lwz 2, 4(4)
  00d5a4c  bcctrl 20, 30
  00d5a50  ld 2, 40(1)
  00d5a54  addic 29, 29, 1
  00d5a58  addic 26, 26, 144
  00d5a5c  cmpwi 29, 13
  00d5a60  addic 27, 27, 144
  00d5a64  bt 0, 0xd5958
  00d5a68  ori 3, 30, 0
  00d5a6c  li 0, 128
  00d5a70  lvx 31, 1, 0
  00d5a74  ld 0, 224(1)
  00d5a78  mtlr 0
  00d5a7c  lfd 31, 200(1)
  00d5a80  ld 26, 152(1)
  00d5a84  ld 27, 160(1)
  00d5a88  ld 28, 168(1)
  00d5a8c  ld 29, 176(1)
  00d5a90  ld 30, 184(1)
  00d5a94  ld 31, 192(1)
  00d5a98  addi 1, 1, 208
  00d5a9c  blr

Hud_ClearAmmoEntry:   # 0xd5aa0, 0x98 bytes
  00d5aa0  lis 5, 114
  00d5aa4  addic 5, 5, 17704
  00d5aa8  lwz 8, 8(5)
  00d5aac  cmpwi 8, -1
  00d5ab0  bt 2, 0xd5b1c
  00d5ab4  lis 3, 114
  00d5ab8  li 6, 0
  00d5abc  addic 3, 3, 15120
  00d5ac0  ori 4, 6, 0
  00d5ac4  addic 7, 3, 100
  00d5ac8  lwz 9, 0(7)
  00d5acc  cmpw 9, 8
  00d5ad0  bt 2, 0xd5ae4
  00d5ad4  addic 6, 6, 1
  00d5ad8  addic 7, 7, 144
  00d5adc  cmpwi 6, 13
  00d5ae0  bt 0, 0xd5ac8
  00d5ae4  cmpwi 6, 13
  00d5ae8  bf 0, 0xd5b14
  00d5aec  sldi 7, 6, 7
  00d5af0  sldi 6, 6, 4
  00d5af4  addc 6, 7, 6
  00d5af8  extsw 6, 6
  00d5afc  addc 6, 3, 6
  00d5b00  lwz 3, 104(6)
  00d5b04  stw 4, 36(6)
  00d5b08  cmpwi 3, 0
  00d5b0c  bf 2, 0xd5b14
  00d5b10  stw 4, 4(6)
  00d5b14  li 3, -1
  00d5b18  stw 3, 8(5)
  00d5b1c  lis 3, 114
  00d5b20  li 4, 0
  00d5b24  lwz 6, 17704(3)
  00d5b28  stw 4, 4(5)
  00d5b2c  addic 4, 6, 1
  00d5b30  stw 4, 17704(3)
  00d5b34  blr

Hud_ResetAllEntriesHidden:   # 0xd5b38, 0xc0 bytes
  00d5b38  stdu 1, -144(1)
  00d5b3c  mflr 0
  00d5b40  std 0, 160(1)
  00d5b44  std 29, 120(1)
  00d5b48  std 31, 136(1)
  00d5b4c  li 29, 0
  00d5b50  std 30, 128(1)
  00d5b54  lis 31, 114
  00d5b58  ori 30, 29, 0
  00d5b5c  addic 31, 31, 15120
  00d5b60  lis 4, 0
  00d5b64  ori 3, 29, 0
  00d5b68  ori 4, 4, 65535
  00d5b6c  li 9, 1
  00d5b70  li 5, 0
  00d5b74  li 6, 0
  00d5b78  li 7, 0
  00d5b7c  li 8, 0
  00d5b80  bl 0xc8444
  00d5b84  sldi 3, 29, 7
  00d5b88  sldi 4, 29, 4
  00d5b8c  addc 3, 3, 4
  00d5b90  li 4, -6
  00d5b94  extsw 5, 3
  00d5b98  addc 3, 3, 31
  00d5b9c  addc 5, 5, 31
  00d5ba0  clrldi 3, 3, 32
  00d5ba4  stw 30, 124(5)
  00d5ba8  stw 4, 108(5)
  00d5bac  bl 0xc833c
  00d5bb0  addic 29, 29, 1
  00d5bb4  extsw 29, 29
  00d5bb8  cmpwi 29, 13
  00d5bbc  bt 0, 0xd5b60
  00d5bc0  lis 3, 114
  00d5bc4  li 4, 1
  00d5bc8  addic 5, 3, 17704
  00d5bcc  li 6, -1
  00d5bd0  stw 4, 17704(3)
  00d5bd4  stw 6, 8(5)
  00d5bd8  stw 30, 4(5)
  00d5bdc  ld 0, 160(1)
  00d5be0  mtlr 0
  00d5be4  ld 29, 120(1)
  00d5be8  ld 30, 128(1)
  00d5bec  ld 31, 136(1)
  00d5bf0  addi 1, 1, 144
  00d5bf4  blr

Hud_DecHideCounter:   # 0xd5bf8, 0x20 bytes
  00d5bf8  lis 3, 114
  00d5bfc  lwz 3, 17704(3)
  00d5c00  cmpwi 3, 0
  00d5c04  bt 2, 0xd5c14
  00d5c08  lis 4, 114
  00d5c0c  addic 3, 3, -1
  00d5c10  stw 3, 17704(4)
  00d5c14  blr

DrawGameplayHud:   # 0xd5c20, 0x330 bytes
  00d5c20  stdu 1, -176(1)
  00d5c24  mflr 0
  00d5c28  std 0, 192(1)
  00d5c2c  std 28, 144(1)
  00d5c30  lis 28, 162
  00d5c34  lis 3, 150
  00d5c38  addic 28, 28, -16448
  00d5c3c  lwz 3, -12480(3)
  00d5c40  lwz 4, 40(28)
  00d5c44  or 3, 4, 3
  00d5c48  std 31, 168(1)
  00d5c4c  std 30, 160(1)
  00d5c50  std 29, 152(1)
  00d5c54  std 27, 136(1)
  00d5c58  std 26, 128(1)
  00d5c5c  cmpwi 3, 0
  00d5c60  bt 2, 0xd5c70
  00d5c64  li 3, 0
  00d5c68  stw 3, 40(28)
  00d5c6c  b 0xd5f28
  00d5c70  lis 3, 255
  00d5c74  lis 30, 114
  00d5c78  ori 3, 3, 65520
  00d5c7c  addic 30, 30, 15120
  00d5c80  addic 29, 30, 24
  00d5c84  stw 3, 12(28)
  00d5c88  li 28, 0
  00d5c8c  ori 31, 28, 0
  00d5c90  lwz 3, 0(29)
  00d5c94  cmpwi 3, 0
  00d5c98  bt 2, 0xd5cbc
  00d5c9c  ori 4, 3, 0
  00d5ca0  ori 3, 30, 0
  00d5ca4  lwz 5, 0(4)
  00d5ca8  std 2, 40(1)
  00d5cac  mtctr 5
  00d5cb0  lwz 2, 4(4)
  00d5cb4  bcctrl 20, 30
  00d5cb8  ld 2, 40(1)
  00d5cbc  addic 28, 28, 1
  00d5cc0  addic 29, 29, 144
  00d5cc4  cmpwi 28, 13
  00d5cc8  addic 30, 30, 144
  00d5ccc  bt 0, 0xd5c90
  00d5cd0  lis 28, 161
  00d5cd4  lis 3, 161
  00d5cd8  lwz 28, 23684(28)
  00d5cdc  lwz 3, 23680(3)
  00d5ce0  or 4, 28, 3
  00d5ce4  cmpwi 1, 3, 0
  00d5ce8  cmpwi 4, 0
  00d5cec  bt 2, 0xd5f1c
  00d5cf0  lis 3, 161
  00d5cf4  lwz 3, 1800(3)
  00d5cf8  cmpwi 3, 0
  00d5cfc  bf 2, 0xd5f1c
  00d5d00  lis 3, 13
  00d5d04  addi 3, 3, 23576
  00d5d08  lfs 1, 0(3)
  00d5d0c  bt 6, 0xd5d58
  00d5d10  lis 3, 114
  00d5d14  li 4, 128
  00d5d18  li 5, 128
  00d5d1c  lfs 2, -3056(3)
  00d5d20  li 3, 128
  00d5d24  fmuls 1, 2, 1
  00d5d28  fctiwz 1, 1
  00d5d2c  stfd 1, 112(1)
  00d5d30  lwz 6, 116(1)
  00d5d34  divw 3, 3, 6
  00d5d38  addc 28, 28, 3
  00d5d3c  extsw 3, 28
  00d5d40  subc 5, 5, 28
  00d5d44  subc 3, 4, 3
  00d5d48  sradi 3, 3, 63
  00d5d4c  and 3, 3, 5
  00d5d50  addc 28, 28, 3
  00d5d54  b 0xd5d9c
  00d5d58  lis 3, 114
  00d5d5c  li 4, 0
  00d5d60  li 5, 0
  00d5d64  lfs 2, -3056(3)
  00d5d68  li 3, 128
  00d5d6c  fmuls 1, 2, 1
  00d5d70  fctiwz 1, 1
  00d5d74  stfd 1, 112(1)
  00d5d78  lwz 6, 116(1)
  00d5d7c  divw 3, 3, 6
  00d5d80  subc 28, 28, 3
  00d5d84  extsw 3, 28
  00d5d88  subc 5, 5, 28
  00d5d8c  subc 3, 3, 4
  00d5d90  sradi 3, 3, 63
  00d5d94  and 3, 3, 5
  00d5d98  addc 28, 28, 3
  00d5d9c  lis 3, 161
  00d5da0  lis 4, 240
  00d5da4  slwi 5, 28, 24
  00d5da8  lis 6, 161
  00d5dac  ori 4, 4, 61680
  00d5db0  stw 28, 23684(3)
  00d5db4  addc 28, 5, 4
  00d5db8  li 4, 80
  00d5dbc  extsw 28, 28
  00d5dc0  lwz 3, 23688(6)
  00d5dc4  li 5, 80
  00d5dc8  srawi 30, 28, 24
  00d5dcc  extsw 27, 3
  00d5dd0  subc 3, 4, 30
  00d5dd4  subc 5, 5, 30
  00d5dd8  sradi 6, 3, 63
  00d5ddc  lis 4, 161
  00d5de0  and 6, 6, 5
  00d5de4  addic 8, 27, 1
  00d5de8  rlwinm 29, 28, 0, 0, 7
  00d5dec  li 3, 257
  00d5df0  addic 26, 4, 23692
  00d5df4  addc 30, 30, 6
  00d5df8  ori 5, 29, 0
  00d5dfc  li 7, -1
  00d5e00  ori 6, 26, 0
  00d5e04  extsw 4, 8
  00d5e08  bl 0x70998
  00d5e0c  nop
  00d5e10  addic 3, 3, -32
  00d5e14  addic 4, 27, -8
  00d5e18  extsw 3, 3
  00d5e1c  li 6, 32
  00d5e20  subfic 5, 3, 256
  00d5e24  extsw 4, 4
  00d5e28  sldi 5, 5, 1
  00d5e2c  ori 7, 30, 0
  00d5e30  extsw 5, 5
  00d5e34  bl 0xcc148
  00d5e38  li 3, 256
  00d5e3c  ori 4, 27, 0
  00d5e40  ori 5, 28, 0
  00d5e44  ori 6, 26, 0
  00d5e48  li 7, -1
  00d5e4c  bl 0x70998
  00d5e50  nop
  00d5e54  lis 3, 161
  00d5e58  lbz 3, 23772(3)
  00d5e5c  cmpwi 3, 0
  00d5e60  bt 2, 0xd5eec
  00d5e64  lis 3, 161
  00d5e68  lwz 3, 23680(3)
  00d5e6c  cmpwi 3, 1000
  00d5e70  bf 1, 0xd5eec
  00d5e74  lis 4, 161
  00d5e78  lis 5, 161
  00d5e7c  li 3, 257
  00d5e80  addic 27, 5, 23772
  00d5e84  ori 5, 29, 0
  00d5e88  lwz 4, 23688(4)
  00d5e8c  ori 6, 27, 0
  00d5e90  li 7, -1
  00d5e94  extsw 26, 4
  00d5e98  addic 4, 26, 1
  00d5e9c  extsw 4, 4
  00d5ea0  bl 0x70998
  00d5ea4  nop
  00d5ea8  addic 3, 3, -32
  00d5eac  addic 4, 26, -8
  00d5eb0  extsw 3, 3
  00d5eb4  li 6, 32
  00d5eb8  subfic 5, 3, 256
  00d5ebc  ori 7, 30, 0
  00d5ec0  sldi 5, 5, 1
  00d5ec4  extsw 4, 4
  00d5ec8  extsw 5, 5
  00d5ecc  bl 0xcc148
  00d5ed0  li 3, 256
  00d5ed4  ori 4, 26, 0
  00d5ed8  ori 5, 28, 0
  00d5edc  ori 6, 27, 0
  00d5ee0  li 7, -1
  00d5ee4  bl 0x70998
  00d5ee8  nop
  00d5eec  lis 3, 161
  00d5ef0  lwz 3, 23680(3)
  00d5ef4  cmpwi 3, 0
  00d5ef8  bt 2, 0xd5f08
  00d5efc  lis 4, 161
  00d5f00  addic 3, 3, -1
  00d5f04  stw 3, 23680(4)
  00d5f08  cmpwi 3, 1000
  00d5f0c  bf 2, 0xd5f28
  00d5f10  lis 3, 161
  00d5f14  stw 31, 23680(3)
  00d5f18  b 0xd5f28
  00d5f1c  lis 3, 161
  00d5f20  li 4, 100
  00d5f24  stw 4, 23688(3)
  00d5f28  ld 0, 192(1)
  00d5f2c  mtlr 0
  00d5f30  ld 26, 128(1)
  00d5f34  ld 27, 136(1)
  00d5f38  ld 28, 144(1)
  00d5f3c  ld 29, 152(1)
  00d5f40  ld 30, 160(1)
  00d5f44  ld 31, 168(1)
  00d5f48  addi 1, 1, 176
  00d5f4c  blr

RaceHud_Init:   # 0xd5f58, 0x64 bytes
  00d5f58  lis 4, 13
  00d5f5c  vspltisw 2, -1
  00d5f60  lis 5, 114
  00d5f64  addi 4, 4, 24400
  00d5f68  li 6, -3056
  00d5f6c  vslw 2, 2, 2
  00d5f70  lvlx 3, 0, 4
  00d5f74  lvlx 4, 6, 5
  00d5f78  vspltw 3, 3, 0
  00d5f7c  li 5, 4
  00d5f80  li 6, 124
  00d5f84  vmaddfp 2, 4, 3, 2
  00d5f88  lvlx 3, 5, 4
  00d5f8c  li 4, 128
  00d5f90  vspltw 3, 3, 0
  00d5f94  li 5, 0
  00d5f98  vctsxs 2, 2, 0
  00d5f9c  vadduwm 2, 2, 3
  00d5fa0  vspltw 2, 2, 0
  00d5fa4  stvewx 2, 6, 3
  00d5fa8  stw 4, 88(3)
  00d5fac  stw 4, 92(3)
  00d5fb0  sth 5, 72(3)
  00d5fb4  sth 5, 74(3)
  00d5fb8  blr

RaceHud_Update:   # 0xd5fc0, 0x5c bytes
  00d5fc0  lis 4, 151
  00d5fc4  addic 5, 4, -25376
  00d5fc8  li 4, -6
  00d5fcc  lwz 5, 8332(5)
  00d5fd0  cmpwi 5, 22
  00d5fd4  bf 2, 0xd6014
  00d5fd8  lis 4, 13
  00d5fdc  vspltisw 2, -1
  00d5fe0  lis 5, 114
  00d5fe4  addi 4, 4, 24508
  00d5fe8  li 6, -3056
  00d5fec  vslw 2, 2, 2
  00d5ff0  lvlx 3, 0, 4
  00d5ff4  lvlx 4, 6, 5
  00d5ff8  vspltw 3, 3, 0
  00d5ffc  li 5, 124
  00d6000  li 4, 5
  00d6004  vmaddfp 2, 4, 3, 2
  00d6008  vctsxs 2, 2, 0
  00d600c  vspltw 2, 2, 0
  00d6010  stvewx 2, 5, 3
  00d6014  stw 4, 108(3)
  00d6018  blr

AmmoHud_Update:   # 0xd6020, 0x128 bytes
  00d6020  stdu 1, -64(1)
  00d6024  lwz 6, 12(3)
  00d6028  li 5, 0
  00d602c  lwz 7, 8(3)
  00d6030  li 8, 0
  00d6034  lis 4, 13
  00d6038  vspltisw 2, -1
  00d603c  extsw 9, 7
  00d6040  addi 4, 4, 24604
  00d6044  lwz 6, 0(6)
  00d6048  extsw 10, 6
  00d604c  subc 8, 8, 6
  00d6050  subc 5, 10, 5
  00d6054  subc 9, 9, 10
  00d6058  vslw 2, 2, 2
  00d605c  sradi 5, 5, 63
  00d6060  and 5, 5, 8
  00d6064  sradi 8, 9, 63
  00d6068  addc 5, 6, 5
  00d606c  subc 6, 7, 5
  00d6070  li 7, -3056
  00d6074  and 6, 8, 6
  00d6078  addc 5, 5, 6
  00d607c  lis 6, 114
  00d6080  stw 5, 116(3)
  00d6084  lfs 1, 0(4)
  00d6088  lfs 2, -3056(6)
  00d608c  lvlx 3, 0, 4
  00d6090  fmuls 1, 2, 1
  00d6094  lwz 8, 124(3)
  00d6098  vspltw 3, 3, 0
  00d609c  lbz 5, 112(3)
  00d60a0  lbz 4, 113(3)
  00d60a4  lvlx 4, 7, 6
  00d60a8  cmpwi 1, 5, 0
  00d60ac  cmpwi 6, 4, 0
  00d60b0  vmaddfp 2, 4, 3, 2
  00d60b4  fctiwz 1, 1
  00d60b8  vctsxs 2, 2, 0
  00d60bc  stfd 1, 48(1)
  00d60c0  lwz 6, 52(1)
  00d60c4  cmpw 8, 6
  00d60c8  bt 0, 0xd6110
  00d60cc  vspltw 2, 2, 0
  00d60d0  li 6, 124
  00d60d4  lis 7, 114
  00d60d8  stvewx 2, 6, 3
  00d60dc  lwz 6, 17636(7)
  00d60e0  cmpw 5, 6
  00d60e4  bf 0, 0xd60f4
  00d60e8  addic 4, 5, 1
  00d60ec  stb 4, 112(3)
  00d60f0  b 0xd6140
  00d60f4  lis 5, 114
  00d60f8  lwz 5, 17640(5)
  00d60fc  cmpw 4, 5
  00d6100  bf 0, 0xd6140
  00d6104  addic 4, 4, 1
  00d6108  stb 4, 113(3)
  00d610c  b 0xd6140
  00d6110  li 6, 1
  00d6114  stw 6, 108(3)
  00d6118  bt 26, 0xd6128
  00d611c  addic 4, 4, -1
  00d6120  stb 4, 113(3)
  00d6124  b 0xd6140
  00d6128  bt 6, 0xd6138
  00d612c  addic 4, 5, -1
  00d6130  stb 4, 112(3)
  00d6134  b 0xd6140
  00d6138  li 4, -6
  00d613c  stw 4, 108(3)
  00d6140  addi 1, 1, 64
  00d6144  blr

Draw_RaceLapPlaceHud:   # 0xd6148, 0x5c8 bytes
  00d6148  stdu 1, -272(1)
  00d614c  mflr 0
  00d6150  std 0, 288(1)
  00d6154  std 31, 264(1)
  00d6158  lis 4, 144
  00d615c  ori 31, 3, 0
  00d6160  std 26, 224(1)
  00d6164  li 3, 0
  00d6168  ori 26, 3, 0
  00d616c  lwz 4, -23196(4)
  00d6170  lbz 4, 17(4)
  00d6174  cmpwi 4, 4
  00d6178  std 30, 256(1)
  00d617c  std 29, 248(1)
  00d6180  std 28, 240(1)
  00d6184  std 27, 232(1)
  00d6188  std 25, 216(1)
  00d618c  std 24, 208(1)
  00d6190  std 23, 200(1)
  00d6194  std 22, 192(1)
  00d6198  std 21, 184(1)
  00d619c  cmpwi 1, 4, 5
  00d61a0  bt 2, 0xd61a8
  00d61a4  bf 6, 0xd61ac
  00d61a8  li 3, 1
  00d61ac  cmpwi 1, 3, 0
  00d61b0  lwz 3, 108(31)
  00d61b4  cmpwi 3, 0
  00d61b8  bt 1, 0xd61c4
  00d61bc  ori 3, 26, 0
  00d61c0  b 0xd66d4
  00d61c4  lis 3, 150
  00d61c8  li 6, 0
  00d61cc  lis 4, 150
  00d61d0  li 7, 10
  00d61d4  addic 4, 4, 27392
  00d61d8  lwz 3, 27372(3)
  00d61dc  lis 5, 114
  00d61e0  lis 8, 114
  00d61e4  subc 3, 6, 3
  00d61e8  li 6, 18
  00d61ec  cntlzw 3, 3
  00d61f0  subc 6, 6, 7
  00d61f4  lwz 4, 4(4)
  00d61f8  sldi 3, 3, 58
  00d61fc  lwz 5, 17716(5)
  00d6200  sradi 3, 3, 63
  00d6204  and 3, 3, 6
  00d6208  addc 3, 7, 3
  00d620c  subc 3, 4, 3
  00d6210  lwz 4, 17744(8)
  00d6214  subc 29, 3, 5
  00d6218  subc 30, 3, 4
  00d621c  extsw 29, 29
  00d6220  extsw 30, 30
  00d6224  bt 6, 0xd6240
  00d6228  lis 3, 114
  00d622c  lwz 3, 17792(3)
  00d6230  subc 29, 29, 3
  00d6234  subc 30, 30, 3
  00d6238  extsw 29, 29
  00d623c  extsw 30, 30
  00d6240  lis 3, 162
  00d6244  lis 5, 114
  00d6248  lis 6, 114
  00d624c  lis 8, 114
  00d6250  ori 4, 29, 0
  00d6254  lwz 3, -14312(3)
  00d6258  lwz 7, 17728(5)
  00d625c  lwz 5, 17720(6)
  00d6260  lwz 6, 17724(8)
  00d6264  extsw 7, 7
  00d6268  extsw 3, 3
  00d626c  extsw 5, 5
  00d6270  extsw 6, 6
  00d6274  bl 0xcc148
  00d6278  lis 4, 114
  00d627c  lis 5, 101
  00d6280  li 3, 21055
  00d6284  addic 27, 1, 120
  00d6288  addic 29, 5, 8540
  00d628c  lwz 4, 17740(4)
  00d6290  extsw 25, 4
  00d6294  bl 0x7b740
  00d6298  nop
  00d629c  ori 5, 3, 0
  00d62a0  ori 3, 27, 0
  00d62a4  ori 4, 29, 0
  00d62a8  bl 0x5cd2a8
  00d62ac  nop
  00d62b0  lis 3, -32768
  00d62b4  addic 4, 30, 1
  00d62b8  addic 5, 25, -1
  00d62bc  extsw 24, 4
  00d62c0  clrldi 29, 3, 32
  00d62c4  extsw 3, 5
  00d62c8  ori 4, 24, 0
  00d62cc  ori 6, 27, 0
  00d62d0  li 7, -1
  00d62d4  ori 5, 29, 0
  00d62d8  bl 0x6fcfc
  00d62dc  nop
  00d62e0  lis 23, 114
  00d62e4  ori 3, 25, 0
  00d62e8  ori 4, 30, 0
  00d62ec  ori 6, 27, 0
  00d62f0  li 7, -1
  00d62f4  lwz 5, 17732(23)
  00d62f8  extsw 5, 5
  00d62fc  bl 0x6fcfc
  00d6300  nop
  00d6304  ori 3, 27, 0
  00d6308  li 4, -1
  00d630c  bl 0x6cde8
  00d6310  nop
  00d6314  lis 28, 151
  00d6318  addc 4, 25, 3
  00d631c  addic 28, 28, -25376
  00d6320  extsw 25, 4
  00d6324  li 4, 3
  00d6328  li 6, 3
  00d632c  lis 7, 101
  00d6330  lhz 5, 2202(28)
  00d6334  ori 3, 27, 0
  00d6338  extsh 5, 5
  00d633c  addic 5, 5, 1
  00d6340  subc 4, 4, 5
  00d6344  subc 6, 6, 5
  00d6348  sradi 8, 4, 63
  00d634c  addic 4, 7, 8548
  00d6350  and 6, 8, 6
  00d6354  addc 5, 5, 6
  00d6358  bl 0x5cd2a8
  00d635c  nop
  00d6360  addic 3, 25, -1
  00d6364  addic 4, 30, 2
  00d6368  ori 6, 27, 0
  00d636c  extsw 3, 3
  00d6370  extsw 4, 4
  00d6374  ori 5, 29, 0
  00d6378  li 7, -1
  00d637c  bl 0x6fcfc
  00d6380  nop
  00d6384  lis 22, 114
  00d6388  ori 3, 25, 0
  00d638c  ori 4, 30, 0
  00d6390  ori 6, 27, 0
  00d6394  li 7, -1
  00d6398  lwz 5, 17736(22)
  00d639c  extsw 5, 5
  00d63a0  bl 0x6fcfc
  00d63a4  nop
  00d63a8  lwz 3, 2240(28)
  00d63ac  lis 4, 114
  00d63b0  addic 3, 3, -1
  00d63b4  li 7, 4
  00d63b8  extsw 5, 3
  00d63bc  li 6, 4
  00d63c0  subc 5, 7, 5
  00d63c4  lwz 25, 17756(4)
  00d63c8  subc 6, 6, 3
  00d63cc  sradi 4, 5, 63
  00d63d0  lis 5, 101
  00d63d4  and 4, 4, 6
  00d63d8  addic 21, 5, 8492
  00d63dc  addc 3, 3, 4
  00d63e0  addic 3, 3, 21028
  00d63e4  extsw 3, 3
  00d63e8  bl 0x7b740
  00d63ec  nop
  00d63f0  ori 5, 3, 0
  00d63f4  ori 3, 27, 0
  00d63f8  ori 4, 21, 0
  00d63fc  bl 0x5cd2a8
  00d6400  nop
  00d6404  ori 3, 27, 0
  00d6408  li 4, -1
  00d640c  bl 0x6cde8
  00d6410  nop
  00d6414  subc 3, 25, 3
  00d6418  ori 5, 29, 0
  00d641c  extsw 25, 3
  00d6420  ori 4, 24, 0
  00d6424  addic 3, 25, 1
  00d6428  ori 6, 27, 0
  00d642c  extsw 3, 3
  00d6430  li 7, -1
  00d6434  bl 0x6fcfc
  00d6438  nop
  00d643c  lwz 5, 17736(22)
  00d6440  ori 3, 25, 0
  00d6444  ori 4, 30, 0
  00d6448  li 7, -1
  00d644c  extsw 5, 5
  00d6450  ori 6, 27, 0
  00d6454  bl 0x6fcfc
  00d6458  nop
  00d645c  lis 4, 101
  00d6460  li 3, 21056
  00d6464  addic 22, 4, 8556
  00d6468  bl 0x7b740
  00d646c  nop
  00d6470  ori 5, 3, 0
  00d6474  ori 3, 27, 0
  00d6478  ori 4, 22, 0
  00d647c  bl 0x5cd2a8
  00d6480  nop
  00d6484  ori 3, 27, 0
  00d6488  li 4, -1
  00d648c  bl 0x6cde8
  00d6490  nop
  00d6494  subc 3, 25, 3
  00d6498  ori 5, 29, 0
  00d649c  extsw 25, 3
  00d64a0  ori 4, 24, 0
  00d64a4  addic 3, 25, 1
  00d64a8  ori 6, 27, 0
  00d64ac  extsw 3, 3
  00d64b0  li 7, -1
  00d64b4  bl 0x6fcfc
  00d64b8  nop
  00d64bc  lwz 5, 17732(23)
  00d64c0  ori 3, 25, 0
  00d64c4  ori 4, 30, 0
  00d64c8  li 7, -1
  00d64cc  extsw 5, 5
  00d64d0  ori 6, 27, 0
  00d64d4  bl 0x6fcfc
  00d64d8  nop
  00d64dc  lis 3, 151
  00d64e0  lwz 3, -25488(3)
  00d64e4  cmpwi 3, 16
  00d64e8  bf 2, 0xd66cc
  00d64ec  addic 27, 1, 112
  00d64f0  lbz 5, 2254(28)
  00d64f4  lis 4, 101
  00d64f8  ori 3, 27, 0
  00d64fc  addic 4, 4, 8472
  00d6500  bl 0x5cd2a8
  00d6504  nop
  00d6508  lis 3, 150
  00d650c  lwz 5, 80(31)
  00d6510  lis 4, 151
  00d6514  li 6, 0
  00d6518  li 7, 18
  00d651c  li 30, 10
  00d6520  lwz 3, 27372(3)
  00d6524  lbz 4, -16400(4)
  00d6528  subc 3, 6, 3
  00d652c  subc 6, 7, 30
  00d6530  cntlzw 3, 3
  00d6534  cmpwi 4, 0
  00d6538  sldi 7, 3, 58
  00d653c  ori 3, 5, 0
  00d6540  sradi 4, 7, 63
  00d6544  and 4, 4, 6
  00d6548  addc 30, 30, 4
  00d654c  bt 2, 0xd6564
  00d6550  lis 3, 114
  00d6554  lis 4, 114
  00d6558  lwz 3, 17772(3)
  00d655c  lwz 30, 17776(4)
  00d6560  extsw 30, 30
  00d6564  lis 5, 114
  00d6568  extsw 25, 3
  00d656c  ori 4, 30, 0
  00d6570  addic 3, 25, -24
  00d6574  li 6, 32
  00d6578  lwz 5, 17780(5)
  00d657c  extsw 3, 3
  00d6580  extsw 5, 5
  00d6584  li 7, 96
  00d6588  bl 0xcc148
  00d658c  lis 4, 162
  00d6590  lis 5, 0
  00d6594  addic 6, 4, -16448
  00d6598  ori 4, 5, 65535
  00d659c  ori 3, 26, 0
  00d65a0  lwz 5, 28(6)
  00d65a4  lwz 6, 32(6)
  00d65a8  ori 7, 5, 0
  00d65ac  lhz 8, 0(7)
  00d65b0  cmpwi 1, 8, 30040
  00d65b4  cmpw 8, 4
  00d65b8  cror 2, 2, 6
  00d65bc  bt 2, 0xd65cc
  00d65c0  addic 7, 7, 8
  00d65c4  addic 3, 3, 1
  00d65c8  b 0xd65ac
  00d65cc  slwi 3, 3, 3
  00d65d0  extsw 7, 3
  00d65d4  lhzx 7, 5, 7
  00d65d8  cmpw 7, 4
  00d65dc  bf 2, 0xd65e4
  00d65e0  b 0xd6600
  00d65e4  addc 3, 5, 3
  00d65e8  clrldi 3, 3, 32
  00d65ec  lhz 4, 2(3)
  00d65f0  cmpwi 4, 2
  00d65f4  bf 1, 0xd6600
  00d65f8  lhz 26, 4(3)
  00d65fc  addic 26, 26, 2
  00d6600  slwi 5, 26, 2
  00d6604  lis 3, 161
  00d6608  ori 4, 25, 0
  00d660c  addic 3, 3, 24396
  00d6610  li 7, 32
  00d6614  lwzx 5, 6, 5
  00d6618  li 8, 128
  00d661c  sldi 6, 5, 5
  00d6620  sldi 5, 5, 2
  00d6624  lwz 3, 28(3)
  00d6628  addc 6, 6, 5
  00d662c  ori 5, 30, 0
  00d6630  addc 3, 3, 6
  00d6634  li 6, 32
  00d6638  clrldi 3, 3, 32
  00d663c  bl 0xcbe60
  00d6640  addic 3, 25, 41
  00d6644  addic 4, 30, 8
  00d6648  extsw 3, 3
  00d664c  ori 6, 27, 0
  00d6650  extsw 4, 4
  00d6654  ori 5, 29, 0
  00d6658  li 7, -1
  00d665c  bl 0x6fcfc
  00d6660  nop
  00d6664  lbz 3, 2254(28)
  00d6668  addic 4, 25, 40
  00d666c  addic 5, 30, 7
  00d6670  cmpwi 3, 0
  00d6674  extsw 30, 4
  00d6678  extsw 3, 5
  00d667c  bt 2, 0xd66a8
  00d6680  ori 4, 3, 0
  00d6684  lis 3, -32544
  00d6688  ori 6, 27, 0
  00d668c  ori 5, 3, 32864
  00d6690  ori 3, 30, 0
  00d6694  clrldi 5, 5, 32
  00d6698  li 7, -1
  00d669c  bl 0x6fcfc
  00d66a0  nop
  00d66a4  b 0xd66cc
  00d66a8  ori 4, 3, 0
  00d66ac  lis 3, -32736
  00d66b0  ori 6, 27, 0
  00d66b4  ori 5, 3, 8320
  00d66b8  ori 3, 30, 0
  00d66bc  clrldi 5, 5, 32
  00d66c0  li 7, -1
  00d66c4  bl 0x6fcfc
  00d66c8  nop
  00d66cc  lwz 3, 88(31)
  00d66d0  extsw 3, 3
  00d66d4  ld 0, 288(1)
  00d66d8  mtlr 0
  00d66dc  ld 21, 184(1)
  00d66e0  ld 22, 192(1)
  00d66e4  ld 23, 200(1)
  00d66e8  ld 24, 208(1)
  00d66ec  ld 25, 216(1)
  00d66f0  ld 26, 224(1)
  00d66f4  ld 27, 232(1)
  00d66f8  ld 28, 240(1)
  00d66fc  ld 29, 248(1)
  00d6700  ld 30, 256(1)
  00d6704  ld 31, 264(1)
  00d6708  addi 1, 1, 272
  00d670c  blr

Draw_RaceTimeScoreHud:   # 0xd6710, 0x4e8 bytes
  00d6710  stdu 1, -272(1)
  00d6714  mflr 0
  00d6718  std 0, 288(1)
  00d671c  lis 5, 144
  00d6720  std 31, 264(1)
  00d6724  li 4, 0
  00d6728  ori 31, 3, 0
  00d672c  ori 3, 4, 0
  00d6730  lwz 5, -23196(5)
  00d6734  lbz 5, 17(5)
  00d6738  cmpwi 5, 4
  00d673c  std 30, 256(1)
  00d6740  std 29, 248(1)
  00d6744  std 28, 240(1)
  00d6748  std 27, 232(1)
  00d674c  std 26, 224(1)
  00d6750  std 25, 216(1)
  00d6754  std 24, 208(1)
  00d6758  std 23, 200(1)
  00d675c  std 22, 192(1)
  00d6760  std 21, 184(1)
  00d6764  cmpwi 1, 5, 5
  00d6768  bt 2, 0xd6770
  00d676c  bf 6, 0xd6774
  00d6770  li 4, 1
  00d6774  cmpwi 1, 4, 0
  00d6778  lwz 4, 108(31)
  00d677c  cmpwi 4, 0
  00d6780  bt 1, 0xd6788
  00d6784  b 0xd6bbc
  00d6788  lis 3, 150
  00d678c  li 6, 0
  00d6790  lis 30, 151
  00d6794  li 4, 3600
  00d6798  li 5, 3000
  00d679c  lwz 3, 27368(3)
  00d67a0  addic 30, 30, -25376
  00d67a4  subc 4, 4, 5
  00d67a8  subc 3, 6, 3
  00d67ac  cntlzw 3, 3
  00d67b0  lwz 6, 2196(30)
  00d67b4  sldi 3, 3, 58
  00d67b8  sradi 3, 3, 63
  00d67bc  and 3, 3, 4
  00d67c0  addc 3, 5, 3
  00d67c4  divw 25, 6, 3
  00d67c8  addic 4, 3, 1
  00d67cc  mullw 3, 25, 3
  00d67d0  sldi 5, 4, 8
  00d67d4  sldi 7, 4, 4
  00d67d8  addc 4, 4, 5
  00d67dc  subc 3, 6, 3
  00d67e0  addc 4, 4, 7
  00d67e4  lis 5, 150
  00d67e8  srwi 4, 4, 14
  00d67ec  li 7, 0
  00d67f0  divw 26, 3, 4
  00d67f4  mullw 8, 26, 4
  00d67f8  lwz 5, 27372(5)
  00d67fc  li 9, 10
  00d6800  subc 5, 7, 5
  00d6804  li 7, 18
  00d6808  cntlzw 5, 5
  00d680c  subc 7, 7, 9
  00d6810  sldi 5, 5, 58
  00d6814  lis 6, 150
  00d6818  sradi 5, 5, 63
  00d681c  addic 6, 6, 27392
  00d6820  and 5, 5, 7
  00d6824  subc 7, 3, 8
  00d6828  addc 3, 9, 5
  00d682c  sldi 5, 7, 5
  00d6830  lis 10, 114
  00d6834  addc 7, 7, 5
  00d6838  lwz 6, 4(6)
  00d683c  lis 11, 114
  00d6840  sldi 7, 7, 2
  00d6844  subc 6, 6, 3
  00d6848  subc 5, 7, 5
  00d684c  lwz 8, 17804(10)
  00d6850  lis 9, 114
  00d6854  divw 27, 5, 4
  00d6858  lwz 3, 17832(11)
  00d685c  subc 8, 6, 8
  00d6860  subc 23, 6, 3
  00d6864  extsw 3, 8
  00d6868  lwz 8, 17848(9)
  00d686c  extsw 23, 23
  00d6870  subc 24, 6, 8
  00d6874  extsw 25, 25
  00d6878  extsw 24, 24
  00d687c  extsw 26, 26
  00d6880  extsw 27, 27
  00d6884  bt 6, 0xd68b4
  00d6888  lis 4, 114
  00d688c  lwz 4, 17792(4)
  00d6890  subc 3, 3, 4
  00d6894  subc 5, 23, 4
  00d6898  subc 4, 24, 4
  00d689c  addic 3, 3, -3
  00d68a0  addic 23, 5, -3
  00d68a4  addic 24, 4, -3
  00d68a8  extsw 3, 3
  00d68ac  extsw 23, 23
  00d68b0  extsw 24, 24
  00d68b4  lis 4, 151
  00d68b8  lis 5, -32768
  00d68bc  addic 28, 1, 112
  00d68c0  clrldi 29, 5, 32
  00d68c4  lbz 4, -16400(4)
  00d68c8  cmpwi 4, 0
  00d68cc  bt 2, 0xd6a48
  00d68d0  ori 4, 3, 0
  00d68d4  lis 3, 114
  00d68d8  lis 5, 114
  00d68dc  lis 6, 114
  00d68e0  lis 7, 114
  00d68e4  lwz 3, 17800(3)
  00d68e8  lwz 5, 17808(5)
  00d68ec  lwz 6, 17812(6)
  00d68f0  extsw 3, 3
  00d68f4  lwz 7, 17816(7)
  00d68f8  extsw 5, 5
  00d68fc  extsw 6, 6
  00d6900  extsw 7, 7
  00d6904  bl 0xcc148
  00d6908  lis 4, 114
  00d690c  lis 5, 101
  00d6910  li 3, 20646
  00d6914  addic 22, 5, 8436
  00d6918  lwz 21, 17828(4)
  00d691c  bl 0x7b740
  00d6920  nop
  00d6924  ori 5, 3, 0
  00d6928  lwz 6, 2216(30)
  00d692c  ori 3, 28, 0
  00d6930  ori 4, 22, 0
  00d6934  extsw 6, 6
  00d6938  bl 0x5cd2a8
  00d693c  nop
  00d6940  ori 3, 28, 0
  00d6944  li 4, -1
  00d6948  bl 0x6cde8
  00d694c  nop
  00d6950  srawi 4, 3, 1
  00d6954  lis 5, 101
  00d6958  li 3, 20646
  00d695c  subc 4, 21, 4
  00d6960  addic 21, 5, 8540
  00d6964  extsw 22, 4
  00d6968  bl 0x7b740
  00d696c  nop
  00d6970  ori 5, 3, 0
  00d6974  ori 3, 28, 0
  00d6978  ori 4, 21, 0
  00d697c  bl 0x5cd2a8
  00d6980  nop
  00d6984  addic 3, 23, 1
  00d6988  addic 4, 22, 1
  00d698c  extsw 21, 3
  00d6990  ori 5, 29, 0
  00d6994  extsw 3, 4
  00d6998  ori 6, 28, 0
  00d699c  ori 4, 21, 0
  00d69a0  li 7, -1
  00d69a4  bl 0x6fcfc
  00d69a8  nop
  00d69ac  lis 5, 114
  00d69b0  ori 3, 22, 0
  00d69b4  ori 4, 23, 0
  00d69b8  ori 6, 28, 0
  00d69bc  li 7, -1
  00d69c0  lwz 5, 17820(5)
  00d69c4  extsw 5, 5
  00d69c8  bl 0x6fcfc
  00d69cc  nop
  00d69d0  ori 3, 28, 0
  00d69d4  li 4, -1
  00d69d8  bl 0x6cde8
  00d69dc  nop
  00d69e0  addc 3, 22, 3
  00d69e4  lwz 5, 2216(30)
  00d69e8  lis 4, 101
  00d69ec  extsw 30, 3
  00d69f0  ori 3, 28, 0
  00d69f4  addic 4, 4, 8564
  00d69f8  extsw 5, 5
  00d69fc  bl 0x5cd2a8
  00d6a00  nop
  00d6a04  addic 3, 30, 1
  00d6a08  ori 5, 29, 0
  00d6a0c  ori 4, 21, 0
  00d6a10  li 7, -1
  00d6a14  extsw 3, 3
  00d6a18  ori 6, 28, 0
  00d6a1c  bl 0x6fcfc
  00d6a20  nop
  00d6a24  lis 5, 114
  00d6a28  ori 3, 30, 0
  00d6a2c  ori 4, 23, 0
  00d6a30  ori 6, 28, 0
  00d6a34  li 7, -1
  00d6a38  lwz 5, 17824(5)
  00d6a3c  extsw 5, 5
  00d6a40  bl 0x6fcfc
  00d6a44  nop
  00d6a48  lis 4, 114
  00d6a4c  lis 5, 101
  00d6a50  li 3, 21057
  00d6a54  addic 30, 5, 8572
  00d6a58  lwz 23, 17828(4)
  00d6a5c  bl 0x7b740
  00d6a60  nop
  00d6a64  ori 5, 3, 0
  00d6a68  ori 3, 28, 0
  00d6a6c  ori 4, 30, 0
  00d6a70  bl 0x5cd2a8
  00d6a74  nop
  00d6a78  ori 3, 28, 0
  00d6a7c  li 4, -1
  00d6a80  bl 0x6cde8
  00d6a84  nop
  00d6a88  lis 4, 151
  00d6a8c  srawi 3, 3, 1
  00d6a90  li 5, 2
  00d6a94  subc 3, 23, 3
  00d6a98  lwz 4, -25484(4)
  00d6a9c  extsw 6, 3
  00d6aa0  addic 3, 6, -20
  00d6aa4  subc 4, 5, 4
  00d6aa8  extsw 3, 3
  00d6aac  cntlzw 4, 4
  00d6ab0  subc 5, 3, 6
  00d6ab4  sldi 4, 4, 58
  00d6ab8  lis 3, 101
  00d6abc  sradi 4, 4, 63
  00d6ac0  addic 30, 3, 8588
  00d6ac4  li 3, 21057
  00d6ac8  and 4, 4, 5
  00d6acc  addc 23, 6, 4
  00d6ad0  bl 0x7b740
  00d6ad4  nop
  00d6ad8  ori 5, 3, 0
  00d6adc  ori 3, 28, 0
  00d6ae0  ori 4, 30, 0
  00d6ae4  bl 0x5cd2a8
  00d6ae8  nop
  00d6aec  addic 3, 24, 1
  00d6af0  addic 4, 23, 1
  00d6af4  extsw 30, 3
  00d6af8  ori 5, 29, 0
  00d6afc  extsw 3, 4
  00d6b00  ori 6, 28, 0
  00d6b04  ori 4, 30, 0
  00d6b08  li 7, -1
  00d6b0c  bl 0x6fcfc
  00d6b10  nop
  00d6b14  lis 5, 114
  00d6b18  ori 3, 23, 0
  00d6b1c  ori 4, 24, 0
  00d6b20  ori 6, 28, 0
  00d6b24  li 7, -1
  00d6b28  lwz 5, 17820(5)
  00d6b2c  extsw 5, 5
  00d6b30  bl 0x6fcfc
  00d6b34  nop
  00d6b38  ori 3, 28, 0
  00d6b3c  li 4, -1
  00d6b40  bl 0x6cde8
  00d6b44  nop
  00d6b48  addc 4, 23, 3
  00d6b4c  ori 3, 28, 0
  00d6b50  extsw 23, 4
  00d6b54  lis 4, 101
  00d6b58  ori 5, 25, 0
  00d6b5c  ori 6, 26, 0
  00d6b60  addic 4, 4, 8596
  00d6b64  ori 7, 27, 0
  00d6b68  bl 0x5cd2a8
  00d6b6c  nop
  00d6b70  addic 3, 23, 1
  00d6b74  ori 5, 29, 0
  00d6b78  ori 4, 30, 0
  00d6b7c  extsw 3, 3
  00d6b80  ori 6, 28, 0
  00d6b84  li 7, -1
  00d6b88  bl 0x6fcfc
  00d6b8c  nop
  00d6b90  lis 5, 114
  00d6b94  ori 3, 23, 0
  00d6b98  ori 4, 24, 0
  00d6b9c  ori 6, 28, 0
  00d6ba0  li 7, -1
  00d6ba4  lwz 5, 17824(5)
  00d6ba8  extsw 5, 5
  00d6bac  bl 0x6fcfc
  00d6bb0  nop
  00d6bb4  lwz 3, 88(31)
  00d6bb8  extsw 3, 3
  00d6bbc  ld 0, 288(1)
  00d6bc0  mtlr 0
  00d6bc4  ld 21, 184(1)
  00d6bc8  ld 22, 192(1)
  00d6bcc  ld 23, 200(1)
  00d6bd0  ld 24, 208(1)
  00d6bd4  ld 25, 216(1)
  00d6bd8  ld 26, 224(1)
  00d6bdc  ld 27, 232(1)
  00d6be0  ld 28, 240(1)
  00d6be4  ld 29, 248(1)
  00d6be8  ld 30, 256(1)
  00d6bec  ld 31, 264(1)
  00d6bf0  addi 1, 1, 272
  00d6bf4  blr

Hud_GetTexIndex:   # 0xd6bf8, 0x1c bytes
  00d6bf8  lis 4, 162
  00d6bfc  sldi 3, 3, 2
  00d6c00  addic 4, 4, -16448
  00d6c04  extsw 3, 3
  00d6c08  lwz 4, 32(4)
  00d6c0c  lwzx 3, 4, 3
  00d6c10  blr

Hud_DrawTexQuad4Pt:   # 0xd6c14, 0x2c8 bytes
  00d6c14  stdu 1, -192(1)
  00d6c18  mflr 0
  00d6c1c  std 0, 208(1)
  00d6c20  std 31, 184(1)
  00d6c24  srawi 31, 8, 4
  00d6c28  li 12, 316
  00d6c2c  std 26, 144(1)
  00d6c30  lis 8, 144
  00d6c34  li 11, 308
  00d6c38  std 30, 176(1)
  00d6c3c  addic 26, 8, -23532
  00d6c40  std 29, 168(1)
  00d6c44  srawi 30, 10, 4
  00d6c48  std 27, 152(1)
  00d6c4c  lwz 29, 316(1)
  00d6c50  srawi 27, 5, 4
  00d6c54  lwz 10, 308(1)
  00d6c58  std 28, 160(1)
  00d6c5c  ori 5, 3, 0
  00d6c60  srawi 28, 4, 4
  00d6c64  std 25, 136(1)
  00d6c68  lwz 3, 40(26)
  00d6c6c  std 24, 128(1)
  00d6c70  srawi 25, 9, 4
  00d6c74  std 23, 120(1)
  00d6c78  srawi 24, 6, 4
  00d6c7c  srawi 23, 7, 4
  00d6c80  std 22, 112(1)
  00d6c84  li 4, 0
  00d6c88  srawi 22, 10, 4
  00d6c8c  bl 0x4d6d00
  00d6c90  nop
  00d6c94  lwz 3, 40(26)
  00d6c98  bl 0x4d6948
  00d6c9c  nop
  00d6ca0  lwz 3, 40(26)
  00d6ca4  lis 4, 4
  00d6ca8  slwi 5, 29, 24
  00d6cac  ori 4, 4, 6472
  00d6cb0  lis 6, 0
  00d6cb4  lwz 7, 8(3)
  00d6cb8  oris 5, 5, 128
  00d6cbc  ori 6, 6, 32896
  00d6cc0  or 5, 5, 6
  00d6cc4  lis 6, 16396
  00d6cc8  stw 4, 0(7)
  00d6ccc  lwz 4, 8(3)
  00d6cd0  lis 7, 4
  00d6cd4  lis 8, 4
  00d6cd8  lis 9, 4
  00d6cdc  stw 5, 4(4)
  00d6ce0  lwz 4, 8(3)
  00d6ce4  ori 5, 6, 5908
  00d6ce8  addic 4, 4, 8
  00d6cec  ori 9, 9, 6400
  00d6cf0  stw 4, 8(3)
  00d6cf4  lwz 3, 40(26)
  00d6cf8  li 4, 0
  00d6cfc  lwz 6, 8(3)
  00d6d00  stw 5, 0(6)
  00d6d04  lwz 5, 8(3)
  00d6d08  ori 6, 7, 6152
  00d6d0c  li 7, 8
  00d6d10  stw 4, 4(5)
  00d6d14  lwz 5, 8(3)
  00d6d18  stw 4, 8(5)
  00d6d1c  lwz 5, 8(3)
  00d6d20  stw 4, 12(5)
  00d6d24  lwz 5, 8(3)
  00d6d28  stw 6, 16(5)
  00d6d2c  lwz 5, 8(3)
  00d6d30  stw 7, 20(5)
  00d6d34  lwz 5, 8(3)
  00d6d38  ori 7, 8, 6404
  00d6d3c  clrlwi 8, 31, 16
  00d6d40  addic 5, 5, 24
  00d6d44  stw 5, 8(3)
  00d6d48  lwz 3, 40(26)
  00d6d4c  ori 5, 8, 0
  00d6d50  rlwimi 5, 25, 16, 0, 15
  00d6d54  lwz 10, 8(3)
  00d6d58  rlwimi 8, 22, 16, 0, 15
  00d6d5c  stw 7, 0(10)
  00d6d60  lwz 10, 8(3)
  00d6d64  stw 5, 4(10)
  00d6d68  lwz 5, 8(3)
  00d6d6c  clrlwi 10, 28, 16
  00d6d70  addic 5, 5, 8
  00d6d74  stw 5, 8(3)
  00d6d78  lwz 3, 40(26)
  00d6d7c  ori 5, 10, 0
  00d6d80  rlwimi 5, 27, 16, 0, 15
  00d6d84  lwz 11, 8(3)
  00d6d88  rlwimi 10, 23, 16, 0, 15
  00d6d8c  stw 9, 0(11)
  00d6d90  lwz 11, 8(3)
  00d6d94  stw 5, 4(11)
  00d6d98  lwz 5, 8(3)
  00d6d9c  addic 5, 5, 8
  00d6da0  stw 5, 8(3)
  00d6da4  lwz 3, 40(26)
  00d6da8  lwz 5, 8(3)
  00d6dac  stw 7, 0(5)
  00d6db0  lwz 5, 8(3)
  00d6db4  stw 8, 4(5)
  00d6db8  lwz 5, 8(3)
  00d6dbc  addic 5, 5, 8
  00d6dc0  stw 5, 8(3)
  00d6dc4  lwz 3, 40(26)
  00d6dc8  clrlwi 5, 30, 16
  00d6dcc  ori 11, 5, 0
  00d6dd0  lwz 8, 8(3)
  00d6dd4  rlwimi 11, 22, 16, 0, 15
  00d6dd8  rlwimi 5, 25, 16, 0, 15
  00d6ddc  stw 9, 0(8)
  00d6de0  lwz 8, 8(3)
  00d6de4  stw 10, 4(8)
  00d6de8  lwz 8, 8(3)
  00d6dec  addic 8, 8, 8
  00d6df0  clrlwi 10, 24, 16
  00d6df4  stw 8, 8(3)
  00d6df8  lwz 3, 40(26)
  00d6dfc  lwz 8, 8(3)
  00d6e00  stw 7, 0(8)
  00d6e04  lwz 8, 8(3)
  00d6e08  stw 11, 4(8)
  00d6e0c  lwz 8, 8(3)
  00d6e10  ori 11, 10, 0
  00d6e14  addic 8, 8, 8
  00d6e18  rlwimi 11, 23, 16, 0, 15
  00d6e1c  stw 8, 8(3)
  00d6e20  lwz 3, 40(26)
  00d6e24  rlwimi 10, 27, 16, 0, 15
  00d6e28  lwz 8, 8(3)
  00d6e2c  stw 9, 0(8)
  00d6e30  lwz 8, 8(3)
  00d6e34  stw 11, 4(8)
  00d6e38  lwz 8, 8(3)
  00d6e3c  addic 8, 8, 8
  00d6e40  stw 8, 8(3)
  00d6e44  lwz 3, 40(26)
  00d6e48  lwz 8, 8(3)
  00d6e4c  stw 7, 0(8)
  00d6e50  lwz 7, 8(3)
  00d6e54  stw 5, 4(7)
  00d6e58  lwz 5, 8(3)
  00d6e5c  addic 5, 5, 8
  00d6e60  stw 5, 8(3)
  00d6e64  lwz 3, 40(26)
  00d6e68  lwz 5, 8(3)
  00d6e6c  stw 9, 0(5)
  00d6e70  lwz 5, 8(3)
  00d6e74  stw 10, 4(5)
  00d6e78  lwz 5, 8(3)
  00d6e7c  addic 5, 5, 8
  00d6e80  stw 5, 8(3)
  00d6e84  lwz 3, 40(26)
  00d6e88  lwz 5, 8(3)
  00d6e8c  stw 6, 0(5)
  00d6e90  lwz 5, 8(3)
  00d6e94  stw 4, 4(5)
  00d6e98  lwz 4, 8(3)
  00d6e9c  addic 4, 4, 8
  00d6ea0  stw 4, 8(3)
  00d6ea4  ld 0, 208(1)
  00d6ea8  mtlr 0
  00d6eac  ld 22, 112(1)
  00d6eb0  ld 23, 120(1)
  00d6eb4  ld 24, 128(1)
  00d6eb8  ld 25, 136(1)
  00d6ebc  ld 26, 144(1)
  00d6ec0  ld 27, 152(1)
  00d6ec4  ld 28, 160(1)
  00d6ec8  ld 29, 168(1)
  00d6ecc  ld 30, 176(1)
  00d6ed0  ld 31, 184(1)
  00d6ed4  addi 1, 1, 192
  00d6ed8  blr

Hud_DrawEffectTexQuad4Pt:   # 0xd6edc, 0x80 bytes
  00d6edc  stdu 1, -144(1)
  00d6ee0  mflr 0
  00d6ee4  std 0, 160(1)
  00d6ee8  lis 12, 162
  00d6eec  std 31, 136(1)
  00d6ef0  addic 12, 12, -16448
  00d6ef4  lis 31, 161
  00d6ef8  sldi 3, 3, 2
  00d6efc  lwz 11, 260(1)
  00d6f00  addic 31, 31, 24396
  00d6f04  lwz 12, 32(12)
  00d6f08  extsw 3, 3
  00d6f0c  std 30, 128(1)
  00d6f10  extsw 11, 11
  00d6f14  lwz 30, 268(1)
  00d6f18  lwz 31, 28(31)
  00d6f1c  lwzx 3, 12, 3
  00d6f20  extsw 30, 30
  00d6f24  std 11, 112(1)
  00d6f28  sldi 12, 3, 5
  00d6f2c  sldi 3, 3, 2
  00d6f30  std 30, 120(1)
  00d6f34  addc 3, 12, 3
  00d6f38  addc 3, 31, 3
  00d6f3c  clrldi 3, 3, 32
  00d6f40  bl 0xd6c14
  00d6f44  ld 0, 160(1)
  00d6f48  mtlr 0
  00d6f4c  ld 30, 128(1)
  00d6f50  ld 31, 136(1)
  00d6f54  addi 1, 1, 144
  00d6f58  blr

Hud_DrawTexQuadF:   # 0xd6f5c, 0x2c0 bytes
  00d6f5c  stdu 1, -192(1)
  00d6f60  mflr 0
  00d6f64  std 0, 208(1)
  00d6f68  stfd 24, 128(1)
  00d6f6c  stfd 25, 136(1)
  00d6f70  stfd 26, 144(1)
  00d6f74  stfd 27, 152(1)
  00d6f78  stfd 28, 160(1)
  00d6f7c  stfd 29, 168(1)
  00d6f80  stfd 30, 176(1)
  00d6f84  stfd 31, 184(1)
  00d6f88  lis 5, 144
  00d6f8c  fmr 31, 1
  00d6f90  li 6, 316
  00d6f94  std 31, 120(1)
  00d6f98  fmr 30, 3
  00d6f9c  addic 31, 5, -23532
  00d6fa0  fmr 29, 2
  00d6fa4  ori 5, 3, 0
  00d6fa8  fmr 28, 4
  00d6fac  fmr 27, 5
  00d6fb0  li 4, 0
  00d6fb4  std 30, 112(1)
  00d6fb8  fmr 26, 7
  00d6fbc  lwz 30, 316(1)
  00d6fc0  lwz 3, 40(31)
  00d6fc4  fmr 25, 6
  00d6fc8  fmr 24, 8
  00d6fcc  bl 0x4d6d00
  00d6fd0  nop
  00d6fd4  lwz 3, 40(31)
  00d6fd8  bl 0x4d6948
  00d6fdc  nop
  00d6fe0  lwz 3, 40(31)
  00d6fe4  lis 4, 4
  00d6fe8  slwi 5, 30, 24
  00d6fec  ori 4, 4, 6472
  00d6ff0  lis 6, 0
  00d6ff4  oris 5, 5, 128
  00d6ff8  lwz 7, 8(3)
  00d6ffc  ori 6, 6, 32896
  00d7000  or 5, 5, 6
  00d7004  lis 6, 16396
  00d7008  stw 4, 0(7)
  00d700c  lwz 4, 8(3)
  00d7010  lis 8, 8
  00d7014  stw 5, 4(4)
  00d7018  lwz 4, 8(3)
  00d701c  ori 5, 6, 5908
  00d7020  addic 4, 4, 8
  00d7024  lis 6, 4
  00d7028  ori 8, 8, 6280
  00d702c  stw 4, 8(3)
  00d7030  lwz 3, 40(31)
  00d7034  li 4, 0
  00d7038  ori 6, 6, 6152
  00d703c  lwz 7, 8(3)
  00d7040  stw 5, 0(7)
  00d7044  lwz 5, 8(3)
  00d7048  li 7, 8
  00d704c  stw 4, 4(5)
  00d7050  lwz 5, 8(3)
  00d7054  stw 4, 8(5)
  00d7058  lwz 5, 8(3)
  00d705c  stw 4, 12(5)
  00d7060  lwz 5, 8(3)
  00d7064  stw 6, 16(5)
  00d7068  lwz 5, 8(3)
  00d706c  stw 7, 20(5)
  00d7070  lwz 5, 8(3)
  00d7074  lis 7, 8
  00d7078  addic 5, 5, 24
  00d707c  ori 7, 7, 6272
  00d7080  stw 5, 8(3)
  00d7084  lwz 3, 40(31)
  00d7088  lwz 5, 8(3)
  00d708c  stw 8, 0(5)
  00d7090  lwz 5, 8(3)
  00d7094  stfs 27, 4(5)
  00d7098  lwz 5, 8(3)
  00d709c  stfs 25, 8(5)
  00d70a0  lwz 5, 8(3)
  00d70a4  addic 5, 5, 12
  00d70a8  stw 5, 8(3)
  00d70ac  lwz 3, 40(31)
  00d70b0  lwz 5, 8(3)
  00d70b4  stw 7, 0(5)
  00d70b8  lwz 5, 8(3)
  00d70bc  stfs 31, 4(5)
  00d70c0  lwz 5, 8(3)
  00d70c4  stfs 29, 8(5)
  00d70c8  lwz 5, 8(3)
  00d70cc  addic 5, 5, 12
  00d70d0  stw 5, 8(3)
  00d70d4  lwz 3, 40(31)
  00d70d8  lwz 5, 8(3)
  00d70dc  stw 8, 0(5)
  00d70e0  lwz 5, 8(3)
  00d70e4  stfs 27, 4(5)
  00d70e8  lwz 5, 8(3)
  00d70ec  stfs 24, 8(5)
  00d70f0  lwz 5, 8(3)
  00d70f4  addic 5, 5, 12
  00d70f8  stw 5, 8(3)
  00d70fc  lwz 3, 40(31)
  00d7100  lwz 5, 8(3)
  00d7104  stw 7, 0(5)
  00d7108  lwz 5, 8(3)
  00d710c  stfs 31, 4(5)
  00d7110  lwz 5, 8(3)
  00d7114  stfs 28, 8(5)
  00d7118  lwz 5, 8(3)
  00d711c  addic 5, 5, 12
  00d7120  stw 5, 8(3)
  00d7124  lwz 3, 40(31)
  00d7128  lwz 5, 8(3)
  00d712c  stw 8, 0(5)
  00d7130  lwz 5, 8(3)
  00d7134  stfs 26, 4(5)
  00d7138  lwz 5, 8(3)
  00d713c  stfs 24, 8(5)
  00d7140  lwz 5, 8(3)
  00d7144  addic 5, 5, 12
  00d7148  stw 5, 8(3)
  00d714c  lwz 3, 40(31)
  00d7150  lwz 5, 8(3)
  00d7154  stw 7, 0(5)
  00d7158  lwz 5, 8(3)
  00d715c  stfs 30, 4(5)
  00d7160  lwz 5, 8(3)
  00d7164  stfs 28, 8(5)
  00d7168  lwz 5, 8(3)
  00d716c  addic 5, 5, 12
  00d7170  stw 5, 8(3)
  00d7174  lwz 3, 40(31)
  00d7178  lwz 5, 8(3)
  00d717c  stw 8, 0(5)
  00d7180  lwz 5, 8(3)
  00d7184  stfs 26, 4(5)
  00d7188  lwz 5, 8(3)
  00d718c  stfs 25, 8(5)
  00d7190  lwz 5, 8(3)
  00d7194  addic 5, 5, 12
  00d7198  stw 5, 8(3)
  00d719c  lwz 3, 40(31)
  00d71a0  lwz 5, 8(3)
  00d71a4  stw 7, 0(5)
  00d71a8  lwz 5, 8(3)
  00d71ac  stfs 30, 4(5)
  00d71b0  lwz 5, 8(3)
  00d71b4  stfs 29, 8(5)
  00d71b8  lwz 5, 8(3)
  00d71bc  addic 5, 5, 12
  00d71c0  stw 5, 8(3)
  00d71c4  lwz 3, 40(31)
  00d71c8  lwz 5, 8(3)
  00d71cc  stw 6, 0(5)
  00d71d0  lwz 5, 8(3)
  00d71d4  stw 4, 4(5)
  00d71d8  lwz 4, 8(3)
  00d71dc  addic 4, 4, 8
  00d71e0  stw 4, 8(3)
  00d71e4  ld 0, 208(1)
  00d71e8  mtlr 0
  00d71ec  lfd 24, 128(1)
  00d71f0  lfd 25, 136(1)
  00d71f4  lfd 26, 144(1)
  00d71f8  lfd 27, 152(1)
  00d71fc  lfd 28, 160(1)
  00d7200  lfd 29, 168(1)
  00d7204  lfd 30, 176(1)
  00d7208  lfd 31, 184(1)
  00d720c  ld 30, 112(1)
  00d7210  ld 31, 120(1)
  00d7214  addi 1, 1, 192
  00d7218  blr

Hud_DrawEffectTexQuadUV:   # 0xd721c, 0x300 bytes
  00d721c  stdu 1, -192(1)
  00d7220  mflr 0
  00d7224  std 0, 208(1)
  00d7228  lis 11, 162
  00d722c  lis 12, 161
  00d7230  addic 11, 11, -16448
  00d7234  sldi 3, 3, 2
  00d7238  addic 12, 12, 24396
  00d723c  std 30, 176(1)
  00d7240  extsw 3, 3
  00d7244  ori 30, 10, 0
  00d7248  std 31, 184(1)
  00d724c  lwz 11, 32(11)
  00d7250  std 24, 128(1)
  00d7254  lis 31, 144
  00d7258  ori 24, 4, 0
  00d725c  std 25, 136(1)
  00d7260  lwz 10, 28(12)
  00d7264  addic 31, 31, -23532
  00d7268  std 26, 144(1)
  00d726c  ori 25, 6, 0
  00d7270  lwzx 3, 11, 3
  00d7274  std 29, 168(1)
  00d7278  ori 26, 5, 0
  00d727c  ori 29, 9, 0
  00d7280  sldi 4, 3, 5
  00d7284  sldi 3, 3, 2
  00d7288  std 28, 160(1)
  00d728c  lwz 5, 40(31)
  00d7290  ori 28, 8, 0
  00d7294  std 27, 152(1)
  00d7298  addc 3, 4, 3
  00d729c  ori 27, 7, 0
  00d72a0  addc 6, 10, 3
  00d72a4  std 23, 120(1)
  00d72a8  ori 3, 5, 0
  00d72ac  clrldi 23, 6, 32
  00d72b0  li 4, 0
  00d72b4  ori 5, 23, 0
  00d72b8  bl 0x4d6d00
  00d72bc  nop
  00d72c0  lwz 3, 40(31)
  00d72c4  bl 0x4d6948
  00d72c8  nop
  00d72cc  lwz 3, 40(31)
  00d72d0  lis 4, 4
  00d72d4  lwz 5, 24(23)
  00d72d8  slwi 6, 30, 24
  00d72dc  ori 4, 4, 6472
  00d72e0  lis 7, 0
  00d72e4  lwz 8, 8(3)
  00d72e8  oris 6, 6, 128
  00d72ec  ori 7, 7, 32896
  00d72f0  or 6, 6, 7
  00d72f4  stw 4, 0(8)
  00d72f8  lwz 4, 8(3)
  00d72fc  lis 7, 16396
  00d7300  lis 8, 4
  00d7304  lis 9, 4
  00d7308  stw 6, 4(4)
  00d730c  lwz 4, 8(3)
  00d7310  ori 6, 7, 5908
  00d7314  addic 4, 4, 8
  00d7318  lis 10, 4
  00d731c  stw 4, 8(3)
  00d7320  lwz 3, 40(31)
  00d7324  li 4, 0
  00d7328  ori 10, 10, 6400
  00d732c  lwz 7, 8(3)
  00d7330  srwi 12, 5, 16
  00d7334  stw 6, 0(7)
  00d7338  lwz 6, 8(3)
  00d733c  ori 7, 8, 6152
  00d7340  li 8, 8
  00d7344  stw 4, 4(6)
  00d7348  lwz 6, 8(3)
  00d734c  addc 12, 29, 12
  00d7350  stw 4, 8(6)
  00d7354  lwz 6, 8(3)
  00d7358  stw 4, 12(6)
  00d735c  lwz 6, 8(3)
  00d7360  addc 5, 28, 5
  00d7364  stw 7, 16(6)
  00d7368  lwz 6, 8(3)
  00d736c  clrlwi 5, 5, 16
  00d7370  stw 8, 20(6)
  00d7374  lwz 6, 8(3)
  00d7378  ori 8, 9, 6404
  00d737c  addic 6, 6, 24
  00d7380  clrlwi 9, 28, 16
  00d7384  stw 6, 8(3)
  00d7388  lwz 3, 40(31)
  00d738c  ori 6, 9, 0
  00d7390  rlwimi 6, 29, 16, 0, 15
  00d7394  rlwimi 9, 12, 16, 0, 15
  00d7398  lwz 11, 8(3)
  00d739c  stw 8, 0(11)
  00d73a0  lwz 11, 8(3)
  00d73a4  stw 6, 4(11)
  00d73a8  lwz 6, 8(3)
  00d73ac  clrlwi 11, 24, 16
  00d73b0  addic 6, 6, 8
  00d73b4  stw 6, 8(3)
  00d73b8  lwz 3, 40(31)
  00d73bc  ori 6, 11, 0
  00d73c0  rlwimi 6, 26, 16, 0, 15
  00d73c4  lwz 30, 8(3)
  00d73c8  stw 10, 0(30)
  00d73cc  lwz 30, 8(3)
  00d73d0  stw 6, 4(30)
  00d73d4  lwz 6, 8(3)
  00d73d8  addic 6, 6, 8
  00d73dc  addc 30, 27, 26
  00d73e0  stw 6, 8(3)
  00d73e4  lwz 3, 40(31)
  00d73e8  rlwimi 11, 30, 16, 0, 15
  00d73ec  lwz 6, 8(3)
  00d73f0  stw 8, 0(6)
  00d73f4  lwz 6, 8(3)
  00d73f8  stw 9, 4(6)
  00d73fc  lwz 6, 8(3)
  00d7400  addic 6, 6, 8
  00d7404  stw 6, 8(3)
  00d7408  lwz 3, 40(31)
  00d740c  lwz 6, 8(3)
  00d7410  stw 10, 0(6)
  00d7414  lwz 6, 8(3)
  00d7418  stw 11, 4(6)
  00d741c  lwz 6, 8(3)
  00d7420  addic 6, 6, 8
  00d7424  addc 11, 25, 24
  00d7428  stw 6, 8(3)
  00d742c  lwz 3, 40(31)
  00d7430  ori 6, 5, 0
  00d7434  rlwimi 6, 12, 16, 0, 15
  00d7438  lwz 9, 8(3)
  00d743c  rlwimi 5, 29, 16, 0, 15
  00d7440  stw 8, 0(9)
  00d7444  lwz 9, 8(3)
  00d7448  stw 6, 4(9)
  00d744c  lwz 6, 8(3)
  00d7450  clrlwi 9, 11, 16
  00d7454  addic 6, 6, 8
  00d7458  stw 6, 8(3)
  00d745c  lwz 3, 40(31)
  00d7460  ori 6, 9, 0
  00d7464  rlwimi 6, 30, 16, 0, 15
  00d7468  lwz 11, 8(3)
  00d746c  rlwimi 9, 26, 16, 0, 15
  00d7470  stw 10, 0(11)
  00d7474  lwz 11, 8(3)
  00d7478  stw 6, 4(11)
  00d747c  lwz 6, 8(3)
  00d7480  addic 6, 6, 8
  00d7484  stw 6, 8(3)
  00d7488  lwz 3, 40(31)
  00d748c  lwz 6, 8(3)
  00d7490  stw 8, 0(6)
  00d7494  lwz 6, 8(3)
  00d7498  stw 5, 4(6)
  00d749c  lwz 5, 8(3)
  00d74a0  addic 5, 5, 8
  00d74a4  stw 5, 8(3)
  00d74a8  lwz 3, 40(31)
  00d74ac  lwz 5, 8(3)
  00d74b0  stw 10, 0(5)
  00d74b4  lwz 5, 8(3)
  00d74b8  stw 9, 4(5)
  00d74bc  lwz 5, 8(3)
  00d74c0  addic 5, 5, 8
  00d74c4  stw 5, 8(3)
  00d74c8  lwz 3, 40(31)
  00d74cc  lwz 5, 8(3)
  00d74d0  stw 7, 0(5)
  00d74d4  lwz 5, 8(3)
  00d74d8  stw 4, 4(5)
  00d74dc  lwz 4, 8(3)
  00d74e0  addic 4, 4, 8
  00d74e4  stw 4, 8(3)
  00d74e8  ld 0, 208(1)
  00d74ec  mtlr 0
  00d74f0  ld 23, 120(1)
  00d74f4  ld 24, 128(1)
  00d74f8  ld 25, 136(1)
  00d74fc  ld 26, 144(1)
  00d7500  ld 27, 152(1)
  00d7504  ld 28, 160(1)
  00d7508  ld 29, 168(1)
  00d750c  ld 30, 176(1)
  00d7510  ld 31, 184(1)
  00d7514  addi 1, 1, 192
  00d7518  blr

Hud_DrawTexQuadUV:   # 0xd751c, 0x2e0 bytes
  00d751c  stdu 1, -192(1)
  00d7520  mflr 0
  00d7524  std 0, 208(1)
  00d7528  std 31, 184(1)
  00d752c  ori 31, 10, 0
  00d7530  lis 12, 0
  00d7534  std 28, 160(1)
  00d7538  li 10, 308
  00d753c  ori 28, 5, 0
  00d7540  lis 11, 144
  00d7544  std 23, 120(1)
  00d7548  ori 5, 3, 0
  00d754c  std 25, 136(1)
  00d7550  std 24, 128(1)
  00d7554  addic 23, 11, -23532
  00d7558  lwz 25, 308(1)
  00d755c  std 30, 176(1)
  00d7560  ori 24, 4, 0
  00d7564  std 29, 168(1)
  00d7568  std 22, 112(1)
  00d756c  ori 30, 9, 0
  00d7570  ori 29, 8, 0
  00d7574  std 27, 152(1)
  00d7578  lwz 22, 316(1)
  00d757c  ori 27, 7, 0
  00d7580  std 26, 144(1)
  00d7584  lwz 3, 40(23)
  00d7588  ori 26, 6, 0
  00d758c  li 4, 0
  00d7590  bl 0x4d6d00
  00d7594  nop
  00d7598  lwz 3, 40(23)
  00d759c  bl 0x4d6948
  00d75a0  nop
  00d75a4  lwz 3, 40(23)
  00d75a8  lis 4, 4
  00d75ac  slwi 5, 22, 24
  00d75b0  ori 4, 4, 6472
  00d75b4  lis 6, 0
  00d75b8  oris 5, 5, 128
  00d75bc  lwz 7, 8(3)
  00d75c0  ori 6, 6, 32896
  00d75c4  or 5, 5, 6
  00d75c8  lis 6, 16396
  00d75cc  stw 4, 0(7)
  00d75d0  lwz 4, 8(3)
  00d75d4  lis 8, 4
  00d75d8  li 9, 1
  00d75dc  stw 5, 4(4)
  00d75e0  lwz 4, 8(3)
  00d75e4  ori 5, 6, 5908
  00d75e8  addic 4, 4, 8
  00d75ec  lis 6, 4
  00d75f0  ori 8, 8, 6404
  00d75f4  stw 4, 8(3)
  00d75f8  lwz 3, 40(23)
  00d75fc  li 4, 0
  00d7600  ori 6, 6, 6152
  00d7604  lwz 7, 8(3)
  00d7608  lis 10, 4
  00d760c  slw 12, 9, 27
  00d7610  ori 10, 10, 6400
  00d7614  stw 5, 0(7)
  00d7618  lwz 5, 8(3)
  00d761c  li 7, 8
  00d7620  stw 4, 4(5)
  00d7624  lwz 5, 8(3)
  00d7628  addc 12, 25, 12
  00d762c  slw 9, 9, 26
  00d7630  stw 4, 8(5)
  00d7634  lwz 5, 8(3)
  00d7638  stw 4, 12(5)
  00d763c  lwz 5, 8(3)
  00d7640  stw 6, 16(5)
  00d7644  lwz 5, 8(3)
  00d7648  stw 7, 20(5)
  00d764c  lwz 5, 8(3)
  00d7650  clrlwi 7, 31, 16
  00d7654  addic 5, 5, 24
  00d7658  stw 5, 8(3)
  00d765c  lwz 3, 40(23)
  00d7660  ori 5, 7, 0
  00d7664  rlwimi 5, 25, 16, 0, 15
  00d7668  rlwimi 7, 12, 16, 0, 15
  00d766c  lwz 11, 8(3)
  00d7670  stw 8, 0(11)
  00d7674  lwz 11, 8(3)
  00d7678  stw 5, 4(11)
  00d767c  lwz 5, 8(3)
  00d7680  clrlwi 11, 24, 16
  00d7684  addic 5, 5, 8
  00d7688  stw 5, 8(3)
  00d768c  lwz 3, 40(23)
  00d7690  ori 5, 11, 0
  00d7694  rlwimi 5, 28, 16, 0, 15
  00d7698  lwz 27, 8(3)
  00d769c  stw 10, 0(27)
  00d76a0  lwz 27, 8(3)
  00d76a4  stw 5, 4(27)
  00d76a8  lwz 5, 8(3)
  00d76ac  addic 5, 5, 8
  00d76b0  stw 5, 8(3)
  00d76b4  lwz 3, 40(23)
  00d76b8  addc 5, 30, 28
  00d76bc  rlwimi 11, 5, 16, 0, 15
  00d76c0  lwz 30, 8(3)
  00d76c4  stw 8, 0(30)
  00d76c8  lwz 30, 8(3)
  00d76cc  stw 7, 4(30)
  00d76d0  lwz 7, 8(3)
  00d76d4  addic 7, 7, 8
  00d76d8  stw 7, 8(3)
  00d76dc  lwz 3, 40(23)
  00d76e0  addc 7, 31, 9
  00d76e4  clrlwi 7, 7, 16
  00d76e8  lwz 9, 8(3)
  00d76ec  stw 10, 0(9)
  00d76f0  lwz 9, 8(3)
  00d76f4  stw 11, 4(9)
  00d76f8  lwz 9, 8(3)
  00d76fc  ori 11, 7, 0
  00d7700  addic 9, 9, 8
  00d7704  rlwimi 11, 12, 16, 0, 15
  00d7708  addc 12, 29, 24
  00d770c  stw 9, 8(3)
  00d7710  lwz 3, 40(23)
  00d7714  rlwimi 7, 25, 16, 0, 15
  00d7718  lwz 9, 8(3)
  00d771c  stw 8, 0(9)
  00d7720  lwz 9, 8(3)
  00d7724  stw 11, 4(9)
  00d7728  lwz 9, 8(3)
  00d772c  clrlwi 11, 12, 16
  00d7730  addic 9, 9, 8
  00d7734  stw 9, 8(3)
  00d7738  lwz 3, 40(23)
  00d773c  ori 9, 11, 0
  00d7740  rlwimi 9, 5, 16, 0, 15
  00d7744  lwz 5, 8(3)
  00d7748  rlwimi 11, 28, 16, 0, 15
  00d774c  stw 10, 0(5)
  00d7750  lwz 5, 8(3)
  00d7754  stw 9, 4(5)
  00d7758  lwz 5, 8(3)
  00d775c  addic 5, 5, 8
  00d7760  stw 5, 8(3)
  00d7764  lwz 3, 40(23)
  00d7768  lwz 5, 8(3)
  00d776c  stw 8, 0(5)
  00d7770  lwz 5, 8(3)
  00d7774  stw 7, 4(5)
  00d7778  lwz 5, 8(3)
  00d777c  addic 5, 5, 8
  00d7780  stw 5, 8(3)
  00d7784  lwz 3, 40(23)
  00d7788  lwz 5, 8(3)
  00d778c  stw 10, 0(5)
  00d7790  lwz 5, 8(3)
  00d7794  stw 11, 4(5)
  00d7798  lwz 5, 8(3)
  00d779c  addic 5, 5, 8
  00d77a0  stw 5, 8(3)
  00d77a4  lwz 3, 40(23)
  00d77a8  lwz 5, 8(3)
  00d77ac  stw 6, 0(5)
  00d77b0  lwz 5, 8(3)
  00d77b4  stw 4, 4(5)
  00d77b8  lwz 4, 8(3)
  00d77bc  addic 4, 4, 8
  00d77c0  stw 4, 8(3)
  00d77c4  ld 0, 208(1)
  00d77c8  mtlr 0
  00d77cc  ld 22, 112(1)
  00d77d0  ld 23, 120(1)
  00d77d4  ld 24, 128(1)
  00d77d8  ld 25, 136(1)
  00d77dc  ld 26, 144(1)
  00d77e0  ld 27, 152(1)
  00d77e4  ld 28, 160(1)
  00d77e8  ld 29, 168(1)
  00d77ec  ld 30, 176(1)
  00d77f0  ld 31, 184(1)
  00d77f4  addi 1, 1, 192
  00d77f8  blr

Hud_DrawEffectTexHeaderQuadUV:   # 0xd77fc, 0x68 bytes
  00d77fc  stdu 1, -144(1)
  00d7800  mflr 0
  00d7804  std 0, 160(1)
  00d7808  std 31, 136(1)
  00d780c  lis 31, 161
  00d7810  std 30, 128(1)
  00d7814  addic 31, 31, 24396
  00d7818  sldi 30, 3, 5
  00d781c  sldi 3, 3, 2
  00d7820  lwz 11, 260(1)
  00d7824  lwz 31, 28(31)
  00d7828  addc 3, 30, 3
  00d782c  lwz 12, 268(1)
  00d7830  extsw 11, 11
  00d7834  addc 3, 31, 3
  00d7838  extsw 12, 12
  00d783c  clrldi 3, 3, 32
  00d7840  std 11, 112(1)
  00d7844  std 12, 120(1)
  00d7848  bl 0xd751c
  00d784c  ld 0, 160(1)
  00d7850  mtlr 0
  00d7854  ld 30, 128(1)
  00d7858  ld 31, 136(1)
  00d785c  addi 1, 1, 144
  00d7860  blr

Hud_DrawTexQuadUV_Fixed:   # 0xd7864, 0x40 bytes
  00d7864  stdu 1, -128(1)
  00d7868  mflr 0
  00d786c  std 0, 144(1)
  00d7870  srawi 4, 4, 4
  00d7874  srawi 5, 5, 4
  00d7878  lwz 11, 244(1)
  00d787c  lwz 12, 252(1)
  00d7880  extsw 11, 11
  00d7884  extsw 12, 12
  00d7888  std 11, 112(1)
  00d788c  std 12, 120(1)
  00d7890  bl 0xd751c
  00d7894  ld 0, 144(1)
  00d7898  mtlr 0
  00d789c  addi 1, 1, 128
  00d78a0  blr

Hud_DrawTexQuadF_v2:   # 0xd78a4, 0x378 bytes
  00d78a4  stdu 1, -256(1)
  00d78a8  mflr 0
  00d78ac  std 0, 272(1)
  00d78b0  stfd 26, 208(1)
  00d78b4  stfd 27, 216(1)
  00d78b8  stfd 28, 224(1)
  00d78bc  stfd 29, 232(1)
  00d78c0  stfd 30, 240(1)
  00d78c4  stfd 31, 248(1)
  00d78c8  addi 0, 1, 128
  00d78cc  stvx 28, 0, 0
  00d78d0  addic 0, 0, 16
  00d78d4  stvx 29, 0, 0
  00d78d8  addic 0, 0, 16
  00d78dc  stvx 30, 0, 0
  00d78e0  addic 0, 0, 16
  00d78e4  stvx 31, 0, 0
  00d78e8  fmr 31, 5
  00d78ec  stw 6, 112(1)
  00d78f0  stw 6, 116(1)
  00d78f4  ori 5, 3, 0
  00d78f8  stw 6, 120(1)
  00d78fc  stw 6, 124(1)
  00d7900  fmr 30, 6
  00d7904  lis 6, 144
  00d7908  fmr 29, 4
  00d790c  li 0, 112
  00d7910  std 31, 200(1)
  00d7914  fmr 28, 3
  00d7918  addic 31, 6, -23532
  00d791c  fmr 27, 2
  00d7920  li 4, 0
  00d7924  fmr 26, 1
  00d7928  lvx 31, 1, 0
  00d792c  stfs 31, 112(1)
  00d7930  stfs 31, 116(1)
  00d7934  li 0, 112
  00d7938  stfs 31, 120(1)
  00d793c  std 30, 192(1)
  00d7940  stfs 31, 124(1)
  00d7944  lwz 30, 380(1)
  00d7948  lwz 3, 40(31)
  00d794c  lvx 30, 1, 0
  00d7950  li 0, 112
  00d7954  stw 7, 112(1)
  00d7958  stw 7, 116(1)
  00d795c  stw 7, 120(1)
  00d7960  stw 7, 124(1)
  00d7964  lvx 29, 1, 0
  00d7968  li 0, 112
  00d796c  stfs 30, 112(1)
  00d7970  stfs 30, 116(1)
  00d7974  stfs 30, 120(1)
  00d7978  stfs 30, 124(1)
  00d797c  lvx 2, 1, 0
  00d7980  vsldoi 28, 2, 2, 0
  00d7984  bl 0x4d6d00
  00d7988  nop
  00d798c  lwz 3, 40(31)
  00d7990  bl 0x4d6948
  00d7994  nop
  00d7998  lwz 3, 40(31)
  00d799c  lis 4, 4
  00d79a0  slwi 5, 30, 24
  00d79a4  ori 4, 4, 6472
  00d79a8  lis 6, 0
  00d79ac  lwz 7, 8(3)
  00d79b0  oris 5, 5, 128
  00d79b4  ori 6, 6, 32896
  00d79b8  or 5, 5, 6
  00d79bc  lis 6, 16396
  00d79c0  stw 4, 0(7)
  00d79c4  lwz 4, 8(3)
  00d79c8  lis 8, 8
  00d79cc  lis 9, 8
  00d79d0  ori 8, 8, 6280
  00d79d4  stw 5, 4(4)
  00d79d8  lwz 4, 8(3)
  00d79dc  ori 5, 6, 5908
  00d79e0  addic 4, 4, 8
  00d79e4  lis 6, 4
  00d79e8  stw 4, 8(3)
  00d79ec  lwz 3, 40(31)
  00d79f0  li 4, 0
  00d79f4  ori 6, 6, 6152
  00d79f8  vspltisw 2, 1
  00d79fc  ori 9, 9, 6272
  00d7a00  lwz 7, 8(3)
  00d7a04  vslw 3, 2, 29
  00d7a08  stw 5, 0(7)
  00d7a0c  lwz 5, 8(3)
  00d7a10  li 7, 8
  00d7a14  vcfux 3, 3, 0
  00d7a18  stw 4, 4(5)
  00d7a1c  lwz 5, 8(3)
  00d7a20  stw 4, 8(5)
  00d7a24  lwz 5, 8(3)
  00d7a28  vaddfp 3, 28, 3
  00d7a2c  stw 4, 12(5)
  00d7a30  lwz 5, 8(3)
  00d7a34  fadds 1, 29, 27
  00d7a38  vslw 2, 2, 31
  00d7a3c  stw 6, 16(5)
  00d7a40  lwz 5, 8(3)
  00d7a44  vspltw 3, 3, 0
  00d7a48  vcfux 2, 2, 0
  00d7a4c  stw 7, 20(5)
  00d7a50  lwz 5, 8(3)
  00d7a54  addic 5, 5, 24
  00d7a58  stw 5, 8(3)
  00d7a5c  lwz 3, 40(31)
  00d7a60  vaddfp 2, 30, 2
  00d7a64  lwz 5, 8(3)
  00d7a68  stw 8, 0(5)
  00d7a6c  lwz 5, 8(3)
  00d7a70  stfs 31, 4(5)
  00d7a74  lwz 5, 8(3)
  00d7a78  vspltw 2, 2, 0
  00d7a7c  stfs 30, 8(5)
  00d7a80  lwz 5, 8(3)
  00d7a84  addic 5, 5, 12
  00d7a88  stw 5, 8(3)
  00d7a8c  lwz 3, 40(31)
  00d7a90  fadds 2, 28, 26
  00d7a94  lwz 5, 8(3)
  00d7a98  stw 9, 0(5)
  00d7a9c  lwz 5, 8(3)
  00d7aa0  stfs 26, 4(5)
  00d7aa4  lwz 5, 8(3)
  00d7aa8  stfs 27, 8(5)
  00d7aac  lwz 5, 8(3)
  00d7ab0  addic 5, 5, 12
  00d7ab4  stw 5, 8(3)
  00d7ab8  lwz 3, 40(31)
  00d7abc  lwz 5, 8(3)
  00d7ac0  stw 8, 0(5)
  00d7ac4  lwz 5, 8(3)
  00d7ac8  stfs 31, 4(5)
  00d7acc  lwz 5, 8(3)
  00d7ad0  stvewx 3, 7, 5
  00d7ad4  lwz 5, 8(3)
  00d7ad8  addic 5, 5, 12
  00d7adc  stw 5, 8(3)
  00d7ae0  lwz 3, 40(31)
  00d7ae4  lwz 5, 8(3)
  00d7ae8  stw 9, 0(5)
  00d7aec  lwz 5, 8(3)
  00d7af0  stfs 26, 4(5)
  00d7af4  lwz 5, 8(3)
  00d7af8  stfs 1, 8(5)
  00d7afc  lwz 5, 8(3)
  00d7b00  addic 5, 5, 12
  00d7b04  stw 5, 8(3)
  00d7b08  lwz 3, 40(31)
  00d7b0c  li 5, 4
  00d7b10  lwz 10, 8(3)
  00d7b14  stw 8, 0(10)
  00d7b18  lwz 10, 8(3)
  00d7b1c  stvewx 2, 5, 10
  00d7b20  lwz 10, 8(3)
  00d7b24  stvewx 3, 7, 10
  00d7b28  lwz 7, 8(3)
  00d7b2c  addic 7, 7, 12
  00d7b30  stw 7, 8(3)
  00d7b34  lwz 3, 40(31)
  00d7b38  lwz 7, 8(3)
  00d7b3c  stw 9, 0(7)
  00d7b40  lwz 7, 8(3)
  00d7b44  stfs 2, 4(7)
  00d7b48  lwz 7, 8(3)
  00d7b4c  stfs 1, 8(7)
  00d7b50  lwz 7, 8(3)
  00d7b54  addic 7, 7, 12
  00d7b58  stw 7, 8(3)
  00d7b5c  lwz 3, 40(31)
  00d7b60  lwz 7, 8(3)
  00d7b64  stw 8, 0(7)
  00d7b68  lwz 7, 8(3)
  00d7b6c  stvewx 2, 5, 7
  00d7b70  lwz 5, 8(3)
  00d7b74  stfs 30, 8(5)
  00d7b78  lwz 5, 8(3)
  00d7b7c  addic 5, 5, 12
  00d7b80  stw 5, 8(3)
  00d7b84  lwz 3, 40(31)
  00d7b88  lwz 5, 8(3)
  00d7b8c  stw 9, 0(5)
  00d7b90  lwz 5, 8(3)
  00d7b94  stfs 2, 4(5)
  00d7b98  lwz 5, 8(3)
  00d7b9c  stfs 27, 8(5)
  00d7ba0  lwz 5, 8(3)
  00d7ba4  addic 5, 5, 12
  00d7ba8  stw 5, 8(3)
  00d7bac  lwz 3, 40(31)
  00d7bb0  lwz 5, 8(3)
  00d7bb4  stw 6, 0(5)
  00d7bb8  lwz 5, 8(3)
  00d7bbc  stw 4, 4(5)
  00d7bc0  lwz 4, 8(3)
  00d7bc4  addic 4, 4, 8
  00d7bc8  stw 4, 8(3)
  00d7bcc  li 0, 128
  00d7bd0  lvx 28, 1, 0
  00d7bd4  addic 0, 0, 16
  00d7bd8  lvx 29, 1, 0
  00d7bdc  addic 0, 0, 16
  00d7be0  lvx 30, 1, 0
  00d7be4  addic 0, 0, 16
  00d7be8  lvx 31, 1, 0
  00d7bec  ld 0, 272(1)
  00d7bf0  mtlr 0
  00d7bf4  lfd 26, 208(1)
  00d7bf8  lfd 27, 216(1)
  00d7bfc  lfd 28, 224(1)
  00d7c00  lfd 29, 232(1)
  00d7c04  lfd 30, 240(1)
  00d7c08  lfd 31, 248(1)
  00d7c0c  ld 30, 192(1)
  00d7c10  ld 31, 200(1)
  00d7c14  addi 1, 1, 256
  00d7c18  blr

Hud_DrawTexQuadF_v3:   # 0xd7c38, 0x334 bytes
  00d7c38  stdu 1, -192(1)
  00d7c3c  mflr 0
  00d7c40  std 0, 208(1)
  00d7c44  stfd 25, 136(1)
  00d7c48  stfd 26, 144(1)
  00d7c4c  stfd 27, 152(1)
  00d7c50  stfd 28, 160(1)
  00d7c54  stfd 29, 168(1)
  00d7c58  stfd 30, 176(1)
  00d7c5c  stfd 31, 184(1)
  00d7c60  lis 3, 13
  00d7c64  addi 3, 3, 31772
  00d7c68  fmr 31, 3
  00d7c6c  lfs 6, 0(3)
  00d7c70  lfs 7, 24(3)
  00d7c74  fsubs 9, 6, 5
  00d7c78  lfs 8, 4(3)
  00d7c7c  fadds 7, 5, 7
  00d7c80  fsubs 10, 8, 5
  00d7c84  std 31, 128(1)
  00d7c88  lfs 12, 8(3)
  00d7c8c  std 30, 120(1)
  00d7c90  ori 31, 9, 0
  00d7c94  ori 30, 8, 0
  00d7c98  li 4, 0
  00d7c9c  fsub 11, 5, 9
  00d7ca0  fsubs 6, 6, 7
  00d7ca4  fsubs 8, 8, 7
  00d7ca8  ori 5, 10, 0
  00d7cac  fsel 5, 11, 9, 5
  00d7cb0  fsub 9, 7, 6
  00d7cb4  lfs 11, 12(3)
  00d7cb8  lfs 3, 16(3)
  00d7cbc  fsub 13, 10, 5
  00d7cc0  fsel 6, 9, 6, 7
  00d7cc4  fsel 5, 13, 10, 5
  00d7cc8  fsub 7, 8, 6
  00d7ccc  fmuls 10, 5, 5
  00d7cd0  fsel 6, 7, 8, 6
  00d7cd4  lfs 7, 20(3)
  00d7cd8  std 29, 112(1)
  00d7cdc  lis 3, 144
  00d7ce0  addic 29, 3, -23532
  00d7ce4  fmuls 8, 10, 5
  00d7ce8  fmuls 9, 6, 6
  00d7cec  lwz 3, 40(29)
  00d7cf0  fmuls 13, 10, 8
  00d7cf4  fmuls 0, 9, 6
  00d7cf8  fmadds 5, 8, 12, 5
  00d7cfc  fmuls 8, 10, 13
  00d7d00  fmuls 30, 9, 0
  00d7d04  fmadds 6, 0, 12, 6
  00d7d08  fmadds 5, 13, 11, 5
  00d7d0c  fmuls 10, 10, 8
  00d7d10  fmuls 12, 9, 30
  00d7d14  fmadds 6, 30, 11, 6
  00d7d18  fmadds 5, 8, 3, 5
  00d7d1c  fmuls 8, 9, 12
  00d7d20  fmadds 3, 12, 3, 6
  00d7d24  fmadds 30, 10, 7, 5
  00d7d28  fmadds 3, 8, 7, 3
  00d7d2c  fmadds 29, 4, 30, 1
  00d7d30  fnmsubs 28, 4, 30, 1
  00d7d34  fmuls 1, 31, 3
  00d7d38  fmadds 27, 4, 3, 2
  00d7d3c  fnmsubs 26, 4, 3, 2
  00d7d40  fneg 25, 1
  00d7d44  bl 0x4d6d00
  00d7d48  nop
  00d7d4c  lwz 3, 40(29)
  00d7d50  bl 0x4d6948
  00d7d54  nop
  00d7d58  lwz 3, 40(29)
  00d7d5c  lis 4, 4
  00d7d60  lis 6, -32640
  00d7d64  ori 4, 4, 6472
  00d7d68  ori 6, 6, 32896
  00d7d6c  lwz 5, 8(3)
  00d7d70  lis 8, 4
  00d7d74  fsubs 1, 29, 25
  00d7d78  fnmsubs 2, 31, 30, 27
  00d7d7c  stw 4, 0(5)
  00d7d80  lwz 4, 8(3)
  00d7d84  lis 5, 16396
  00d7d88  addic 7, 4, 8
  00d7d8c  ori 5, 5, 5908
  00d7d90  stw 6, 4(4)
  00d7d94  stw 7, 8(3)
  00d7d98  lwz 3, 40(29)
  00d7d9c  li 4, 0
  00d7da0  lis 7, 4
  00d7da4  lwz 6, 8(3)
  00d7da8  stw 5, 0(6)
  00d7dac  lwz 5, 8(3)
  00d7db0  ori 6, 7, 6152
  00d7db4  li 7, 8
  00d7db8  stw 4, 4(5)
  00d7dbc  lwz 5, 8(3)
  00d7dc0  stw 4, 8(5)
  00d7dc4  lwz 5, 8(3)
  00d7dc8  stw 4, 12(5)
  00d7dcc  lwz 5, 8(3)
  00d7dd0  stw 6, 16(5)
  00d7dd4  lwz 5, 8(3)
  00d7dd8  addic 9, 5, 24
  00d7ddc  stw 7, 20(5)
  00d7de0  stw 9, 8(3)
  00d7de4  ori 5, 8, 6404
  00d7de8  lwz 3, 40(29)
  00d7dec  lis 7, 8
  00d7df0  ori 7, 7, 6272
  00d7df4  lwz 8, 8(3)
  00d7df8  stw 5, 0(8)
  00d7dfc  lwz 8, 8(3)
  00d7e00  addic 9, 8, 8
  00d7e04  stw 4, 4(8)
  00d7e08  stw 9, 8(3)
  00d7e0c  lwz 3, 40(29)
  00d7e10  lwz 8, 8(3)
  00d7e14  stw 7, 0(8)
  00d7e18  lwz 8, 8(3)
  00d7e1c  stfs 1, 4(8)
  00d7e20  lwz 8, 8(3)
  00d7e24  fsubs 1, 28, 25
  00d7e28  addic 9, 8, 12
  00d7e2c  stfs 2, 8(8)
  00d7e30  stw 9, 8(3)
  00d7e34  slwi 8, 31, 16
  00d7e38  lwz 3, 40(29)
  00d7e3c  fnmsubs 2, 31, 30, 26
  00d7e40  lwz 9, 8(3)
  00d7e44  stw 5, 0(9)
  00d7e48  lwz 9, 8(3)
  00d7e4c  addic 10, 9, 8
  00d7e50  stw 8, 4(9)
  00d7e54  stw 10, 8(3)
  00d7e58  lwz 3, 40(29)
  00d7e5c  clrlwi 9, 30, 16
  00d7e60  lwz 8, 8(3)
  00d7e64  stw 7, 0(8)
  00d7e68  lwz 8, 8(3)
  00d7e6c  stfs 1, 4(8)
  00d7e70  lwz 8, 8(3)
  00d7e74  fadds 1, 28, 25
  00d7e78  addic 10, 8, 12
  00d7e7c  stfs 2, 8(8)
  00d7e80  stw 10, 8(3)
  00d7e84  ori 8, 9, 0
  00d7e88  lwz 3, 40(29)
  00d7e8c  rlwimi 8, 31, 16, 0, 15
  00d7e90  fmadds 2, 31, 30, 26
  00d7e94  lwz 10, 8(3)
  00d7e98  stw 5, 0(10)
  00d7e9c  lwz 10, 8(3)
  00d7ea0  addic 11, 10, 8
  00d7ea4  stw 8, 4(10)
  00d7ea8  stw 11, 8(3)
  00d7eac  lwz 3, 40(29)
  00d7eb0  lwz 8, 8(3)
  00d7eb4  stw 7, 0(8)
  00d7eb8  lwz 8, 8(3)
  00d7ebc  stfs 1, 4(8)
  00d7ec0  lwz 8, 8(3)
  00d7ec4  fadds 1, 29, 25
  00d7ec8  addic 10, 8, 12
  00d7ecc  stfs 2, 8(8)
  00d7ed0  stw 10, 8(3)
  00d7ed4  fmadds 2, 31, 30, 27
  00d7ed8  lwz 3, 40(29)
  00d7edc  lwz 8, 8(3)
  00d7ee0  stw 5, 0(8)
  00d7ee4  lwz 5, 8(3)
  00d7ee8  addic 8, 5, 8
  00d7eec  stw 9, 4(5)
  00d7ef0  stw 8, 8(3)
  00d7ef4  lwz 3, 40(29)
  00d7ef8  lwz 5, 8(3)
  00d7efc  stw 7, 0(5)
  00d7f00  lwz 5, 8(3)
  00d7f04  stfs 1, 4(5)
  00d7f08  lwz 5, 8(3)
  00d7f0c  addic 7, 5, 12
  00d7f10  stfs 2, 8(5)
  00d7f14  stw 7, 8(3)
  00d7f18  lwz 3, 40(29)
  00d7f1c  lwz 5, 8(3)
  00d7f20  stw 6, 0(5)
  00d7f24  lwz 5, 8(3)
  00d7f28  addic 6, 5, 8
  00d7f2c  stw 4, 4(5)
  00d7f30  stw 6, 8(3)
  00d7f34  ld 0, 208(1)
  00d7f38  mtlr 0
  00d7f3c  lfd 25, 136(1)
  00d7f40  lfd 26, 144(1)
  00d7f44  lfd 27, 152(1)
  00d7f48  lfd 28, 160(1)
  00d7f4c  lfd 29, 168(1)
  00d7f50  lfd 30, 176(1)
  00d7f54  lfd 31, 184(1)
  00d7f58  ld 29, 112(1)
  00d7f5c  ld 30, 120(1)
  00d7f60  ld 31, 128(1)
  00d7f64  addi 1, 1, 192
  00d7f68  blr

Hud_DrawTexQuadF_v4:   # 0xd7f88, 0x39c bytes
  00d7f88  stdu 1, -240(1)
  00d7f8c  mflr 0
  00d7f90  std 0, 256(1)
  00d7f94  stfd 25, 184(1)
  00d7f98  stfd 26, 192(1)
  00d7f9c  stfd 27, 200(1)
  00d7fa0  stfd 28, 208(1)
  00d7fa4  stfd 29, 216(1)
  00d7fa8  stfd 30, 224(1)
  00d7fac  stfd 31, 232(1)
  00d7fb0  lis 3, 13
  00d7fb4  addi 3, 3, 32620
  00d7fb8  fmr 31, 3
  00d7fbc  sldi 4, 10, 5
  00d7fc0  lfs 6, 0(3)
  00d7fc4  lfs 7, 24(3)
  00d7fc8  fsubs 9, 6, 5
  00d7fcc  fadds 7, 5, 7
  00d7fd0  lfs 8, 4(3)
  00d7fd4  fsubs 10, 8, 5
  00d7fd8  lfs 12, 8(3)
  00d7fdc  sldi 5, 10, 2
  00d7fe0  std 30, 168(1)
  00d7fe4  ori 30, 8, 0
  00d7fe8  addc 4, 4, 5
  00d7fec  fsub 11, 5, 9
  00d7ff0  fsubs 6, 6, 7
  00d7ff4  fsubs 8, 8, 7
  00d7ff8  std 31, 176(1)
  00d7ffc  lis 7, 144
  00d8000  std 29, 160(1)
  00d8004  ori 31, 9, 0
  00d8008  addic 29, 7, -23532
  00d800c  fsel 5, 11, 9, 5
  00d8010  fsub 9, 7, 6
  00d8014  lfs 11, 12(3)
  00d8018  lfs 3, 16(3)
  00d801c  fsub 13, 10, 5
  00d8020  fsel 6, 9, 6, 7
  00d8024  fsel 5, 13, 10, 5
  00d8028  fsub 7, 8, 6
  00d802c  fmuls 10, 5, 5
  00d8030  fsel 6, 7, 8, 6
  00d8034  lfs 7, 20(3)
  00d8038  lis 3, 161
  00d803c  addic 3, 3, 24396
  00d8040  fmuls 8, 10, 5
  00d8044  fmuls 9, 6, 6
  00d8048  lwz 3, 28(3)
  00d804c  addc 3, 3, 4
  00d8050  clrldi 3, 3, 32
  00d8054  fmuls 13, 10, 8
  00d8058  fmuls 0, 9, 6
  00d805c  fmadds 5, 8, 12, 5
  00d8060  lwz 4, 0(3)
  00d8064  lwz 5, 4(3)
  00d8068  lwz 6, 8(3)
  00d806c  lwz 8, 12(3)
  00d8070  stw 4, 112(1)
  00d8074  stw 5, 116(1)
  00d8078  stw 6, 120(1)
  00d807c  fmuls 8, 10, 13
  00d8080  fmuls 30, 9, 0
  00d8084  fmadds 6, 0, 12, 6
  00d8088  fmadds 5, 13, 11, 5
  00d808c  stw 8, 124(1)
  00d8090  lwz 4, 16(3)
  00d8094  addic 5, 1, 112
  00d8098  lwz 6, 20(3)
  00d809c  lwz 7, 24(3)
  00d80a0  lwz 8, 28(3)
  00d80a4  stw 4, 128(1)
  00d80a8  stw 6, 132(1)
  00d80ac  fmuls 10, 10, 8
  00d80b0  fmuls 12, 9, 30
  00d80b4  fmadds 6, 30, 11, 6
  00d80b8  fmadds 5, 8, 3, 5
  00d80bc  stw 7, 136(1)
  00d80c0  stw 8, 140(1)
  00d80c4  li 4, 0
  00d80c8  lwz 3, 32(3)
  00d80cc  lwz 6, 40(29)
  00d80d0  stw 3, 144(1)
  00d80d4  ori 3, 6, 0
  00d80d8  fmuls 8, 9, 12
  00d80dc  fmadds 3, 12, 3, 6
  00d80e0  fmadds 30, 10, 7, 5
  00d80e4  fmadds 3, 8, 7, 3
  00d80e8  fmadds 29, 4, 30, 1
  00d80ec  fnmsubs 28, 4, 30, 1
  00d80f0  fmuls 1, 31, 3
  00d80f4  fmadds 27, 4, 3, 2
  00d80f8  fnmsubs 26, 4, 3, 2
  00d80fc  fneg 25, 1
  00d8100  bl 0x4d6d00
  00d8104  nop
  00d8108  lwz 3, 40(29)
  00d810c  bl 0x4d6948
  00d8110  nop
  00d8114  lwz 3, 40(29)
  00d8118  lis 4, 4
  00d811c  lis 6, -32640
  00d8120  ori 4, 4, 6472
  00d8124  ori 6, 6, 32896
  00d8128  lwz 5, 8(3)
  00d812c  lis 8, 4
  00d8130  clrlwi 9, 30, 16
  00d8134  fsubs 1, 29, 25
  00d8138  ori 8, 8, 6404
  00d813c  fnmsubs 2, 31, 30, 27
  00d8140  stw 4, 0(5)
  00d8144  lwz 4, 8(3)
  00d8148  lis 5, 16396
  00d814c  addic 7, 4, 8
  00d8150  ori 5, 5, 5908
  00d8154  stw 6, 4(4)
  00d8158  stw 7, 8(3)
  00d815c  li 4, 0
  00d8160  lwz 3, 40(29)
  00d8164  lis 7, 4
  00d8168  lwz 6, 8(3)
  00d816c  stw 5, 0(6)
  00d8170  lwz 5, 8(3)
  00d8174  ori 6, 7, 6152
  00d8178  li 7, 8
  00d817c  stw 4, 4(5)
  00d8180  lwz 5, 8(3)
  00d8184  stw 4, 8(5)
  00d8188  lwz 5, 8(3)
  00d818c  stw 4, 12(5)
  00d8190  lwz 5, 8(3)
  00d8194  stw 6, 16(5)
  00d8198  lwz 5, 8(3)
  00d819c  addic 10, 5, 24
  00d81a0  stw 7, 20(5)
  00d81a4  stw 10, 8(3)
  00d81a8  lwz 3, 40(29)
  00d81ac  lis 5, 8
  00d81b0  ori 5, 5, 6272
  00d81b4  lwz 7, 8(3)
  00d81b8  stw 8, 0(7)
  00d81bc  lwz 7, 8(3)
  00d81c0  addic 10, 7, 8
  00d81c4  stw 9, 4(7)
  00d81c8  stw 10, 8(3)
  00d81cc  lwz 3, 40(29)
  00d81d0  rlwimi 9, 31, 16, 0, 15
  00d81d4  lwz 7, 8(3)
  00d81d8  stw 5, 0(7)
  00d81dc  lwz 7, 8(3)
  00d81e0  stfs 1, 4(7)
  00d81e4  lwz 7, 8(3)
  00d81e8  fsubs 1, 28, 25
  00d81ec  addic 10, 7, 12
  00d81f0  stfs 2, 8(7)
  00d81f4  stw 10, 8(3)
  00d81f8  lwz 3, 40(29)
  00d81fc  fnmsubs 2, 31, 30, 26
  00d8200  lwz 7, 8(3)
  00d8204  stw 8, 0(7)
  00d8208  lwz 7, 8(3)
  00d820c  addic 10, 7, 8
  00d8210  stw 4, 4(7)
  00d8214  stw 10, 8(3)
  00d8218  lwz 3, 40(29)
  00d821c  slwi 10, 31, 16
  00d8220  lwz 7, 8(3)
  00d8224  stw 5, 0(7)
  00d8228  lwz 7, 8(3)
  00d822c  stfs 1, 4(7)
  00d8230  lwz 7, 8(3)
  00d8234  fadds 1, 28, 25
  00d8238  addic 11, 7, 12
  00d823c  stfs 2, 8(7)
  00d8240  stw 11, 8(3)
  00d8244  fmadds 2, 31, 30, 26
  00d8248  lwz 3, 40(29)
  00d824c  lwz 7, 8(3)
  00d8250  stw 8, 0(7)
  00d8254  lwz 7, 8(3)
  00d8258  addic 11, 7, 8
  00d825c  stw 10, 4(7)
  00d8260  stw 11, 8(3)
  00d8264  lwz 3, 40(29)
  00d8268  lwz 7, 8(3)
  00d826c  stw 5, 0(7)
  00d8270  lwz 7, 8(3)
  00d8274  stfs 1, 4(7)
  00d8278  lwz 7, 8(3)
  00d827c  fadds 1, 29, 25
  00d8280  addic 10, 7, 12
  00d8284  stfs 2, 8(7)
  00d8288  stw 10, 8(3)
  00d828c  fmadds 2, 31, 30, 27
  00d8290  lwz 3, 40(29)
  00d8294  lwz 7, 8(3)
  00d8298  stw 8, 0(7)
  00d829c  lwz 7, 8(3)
  00d82a0  addic 8, 7, 8
  00d82a4  stw 9, 4(7)
  00d82a8  stw 8, 8(3)
  00d82ac  lwz 3, 40(29)
  00d82b0  lwz 7, 8(3)
  00d82b4  stw 5, 0(7)
  00d82b8  lwz 5, 8(3)
  00d82bc  stfs 1, 4(5)
  00d82c0  lwz 5, 8(3)
  00d82c4  addic 7, 5, 12
  00d82c8  stfs 2, 8(5)
  00d82cc  stw 7, 8(3)
  00d82d0  lwz 3, 40(29)
  00d82d4  lwz 5, 8(3)
  00d82d8  stw 6, 0(5)
  00d82dc  lwz 5, 8(3)
  00d82e0  addic 6, 5, 8
  00d82e4  stw 4, 4(5)
  00d82e8  stw 6, 8(3)
  00d82ec  ld 0, 256(1)
  00d82f0  mtlr 0
  00d82f4  lfd 25, 184(1)
  00d82f8  lfd 26, 192(1)
  00d82fc  lfd 27, 200(1)
  00d8300  lfd 28, 208(1)
  00d8304  lfd 29, 216(1)
  00d8308  lfd 30, 224(1)
  00d830c  lfd 31, 232(1)
  00d8310  ld 29, 160(1)
  00d8314  ld 30, 168(1)
  00d8318  ld 31, 176(1)
  00d831c  addi 1, 1, 240
  00d8320  blr

Hud_DrawTexQuadF_v4_Fixed:   # 0xd8328, 0x3c bytes
  00d8328  stdu 1, -112(1)
  00d832c  mflr 0
  00d8330  std 0, 128(1)
  00d8334  lis 3, 14
  00d8338  addi 3, 3, -31964
  00d833c  lfs 6, 0(3)
  00d8340  fmuls 1, 1, 6
  00d8344  fmuls 2, 2, 6
  00d8348  fmuls 3, 3, 6
  00d834c  fmuls 4, 4, 6
  00d8350  bl 0xd7f88
  00d8354  ld 0, 128(1)
  00d8358  mtlr 0
  00d835c  addi 1, 1, 112
  00d8360  blr

DrawSprite2:   # 0xd8364, 0x2f4 bytes
  00d8364  stdu 1, -192(1)
  00d8368  mflr 0
  00d836c  std 0, 208(1)
  00d8370  lis 11, 162
  00d8374  std 31, 184(1)
  00d8378  addic 11, 11, -16448
  00d837c  std 29, 168(1)
  00d8380  lis 31, 161
  00d8384  ori 29, 10, 0
  00d8388  sldi 3, 3, 2
  00d838c  li 10, 308
  00d8390  addic 12, 31, 24396
  00d8394  std 26, 144(1)
  00d8398  lwz 11, 32(11)
  00d839c  extsw 3, 3
  00d83a0  std 30, 176(1)
  00d83a4  ori 26, 5, 0
  00d83a8  std 25, 136(1)
  00d83ac  ori 30, 6, 0
  00d83b0  lwz 25, 308(1)
  00d83b4  std 27, 152(1)
  00d83b8  lwz 6, 28(12)
  00d83bc  ori 27, 7, 0
  00d83c0  lwzx 3, 11, 3
  00d83c4  std 24, 128(1)
  00d83c8  lis 7, 144
  00d83cc  ori 24, 4, 0
  00d83d0  std 23, 120(1)
  00d83d4  sldi 4, 3, 5
  00d83d8  std 22, 112(1)
  00d83dc  addic 23, 7, -23532
  00d83e0  lwz 22, 316(1)
  00d83e4  sldi 3, 3, 2
  00d83e8  ori 31, 9, 0
  00d83ec  std 28, 160(1)
  00d83f0  addc 4, 4, 3
  00d83f4  ori 28, 8, 0
  00d83f8  addc 5, 6, 4
  00d83fc  lwz 3, 40(23)
  00d8400  li 4, 0
  00d8404  clrldi 5, 5, 32
  00d8408  bl 0x4d6d00
  00d840c  nop
  00d8410  lwz 3, 40(23)
  00d8414  bl 0x4d6948
  00d8418  nop
  00d841c  lwz 3, 40(23)
  00d8420  lis 4, 4
  00d8424  slwi 5, 22, 24
  00d8428  ori 4, 4, 6472
  00d842c  lis 6, 0
  00d8430  lwz 7, 8(3)
  00d8434  oris 5, 5, 128
  00d8438  ori 6, 6, 32896
  00d843c  or 5, 5, 6
  00d8440  lis 6, 16396
  00d8444  stw 4, 0(7)
  00d8448  lwz 4, 8(3)
  00d844c  lis 7, 4
  00d8450  lis 8, 4
  00d8454  lis 9, 4
  00d8458  stw 5, 4(4)
  00d845c  lwz 4, 8(3)
  00d8460  ori 5, 6, 5908
  00d8464  addic 4, 4, 8
  00d8468  ori 9, 9, 6400
  00d846c  stw 4, 8(3)
  00d8470  lwz 3, 40(23)
  00d8474  li 4, 0
  00d8478  lwz 6, 8(3)
  00d847c  stw 5, 0(6)
  00d8480  lwz 5, 8(3)
  00d8484  ori 6, 7, 6152
  00d8488  li 7, 8
  00d848c  stw 4, 4(5)
  00d8490  lwz 5, 8(3)
  00d8494  stw 4, 8(5)
  00d8498  lwz 5, 8(3)
  00d849c  stw 4, 12(5)
  00d84a0  lwz 5, 8(3)
  00d84a4  stw 6, 16(5)
  00d84a8  lwz 5, 8(3)
  00d84ac  stw 7, 20(5)
  00d84b0  lwz 5, 8(3)
  00d84b4  ori 7, 8, 6404
  00d84b8  clrlwi 8, 28, 16
  00d84bc  addic 5, 5, 24
  00d84c0  stw 5, 8(3)
  00d84c4  lwz 3, 40(23)
  00d84c8  ori 5, 8, 0
  00d84cc  rlwimi 5, 31, 16, 0, 15
  00d84d0  lwz 10, 8(3)
  00d84d4  rlwimi 8, 25, 16, 0, 15
  00d84d8  stw 7, 0(10)
  00d84dc  lwz 10, 8(3)
  00d84e0  stw 5, 4(10)
  00d84e4  lwz 5, 8(3)
  00d84e8  clrlwi 10, 24, 16
  00d84ec  addic 5, 5, 8
  00d84f0  stw 5, 8(3)
  00d84f4  lwz 3, 40(23)
  00d84f8  ori 5, 10, 0
  00d84fc  rlwimi 5, 26, 16, 0, 15
  00d8500  lwz 11, 8(3)
  00d8504  rlwimi 10, 27, 16, 0, 15
  00d8508  stw 9, 0(11)
  00d850c  lwz 11, 8(3)
  00d8510  stw 5, 4(11)
  00d8514  lwz 5, 8(3)
  00d8518  addic 5, 5, 8
  00d851c  stw 5, 8(3)
  00d8520  lwz 3, 40(23)
  00d8524  lwz 5, 8(3)
  00d8528  stw 7, 0(5)
  00d852c  lwz 5, 8(3)
  00d8530  stw 8, 4(5)
  00d8534  lwz 5, 8(3)
  00d8538  addic 5, 5, 8
  00d853c  stw 5, 8(3)
  00d8540  lwz 3, 40(23)
  00d8544  clrlwi 5, 29, 16
  00d8548  ori 11, 5, 0
  00d854c  lwz 8, 8(3)
  00d8550  rlwimi 11, 25, 16, 0, 15
  00d8554  rlwimi 5, 31, 16, 0, 15
  00d8558  stw 9, 0(8)
  00d855c  lwz 8, 8(3)
  00d8560  stw 10, 4(8)
  00d8564  lwz 8, 8(3)
  00d8568  addic 8, 8, 8
  00d856c  clrlwi 10, 30, 16
  00d8570  stw 8, 8(3)
  00d8574  lwz 3, 40(23)
  00d8578  lwz 8, 8(3)
  00d857c  stw 7, 0(8)
  00d8580  lwz 8, 8(3)
  00d8584  stw 11, 4(8)
  00d8588  lwz 8, 8(3)
  00d858c  ori 11, 10, 0
  00d8590  addic 8, 8, 8
  00d8594  rlwimi 11, 27, 16, 0, 15
  00d8598  stw 8, 8(3)
  00d859c  lwz 3, 40(23)
  00d85a0  rlwimi 10, 26, 16, 0, 15
  00d85a4  lwz 8, 8(3)
  00d85a8  stw 9, 0(8)
  00d85ac  lwz 8, 8(3)
  00d85b0  stw 11, 4(8)
  00d85b4  lwz 8, 8(3)
  00d85b8  addic 8, 8, 8
  00d85bc  stw 8, 8(3)
  00d85c0  lwz 3, 40(23)
  00d85c4  lwz 8, 8(3)
  00d85c8  stw 7, 0(8)
  00d85cc  lwz 7, 8(3)
  00d85d0  stw 5, 4(7)
  00d85d4  lwz 5, 8(3)
  00d85d8  addic 5, 5, 8
  00d85dc  stw 5, 8(3)
  00d85e0  lwz 3, 40(23)
  00d85e4  lwz 5, 8(3)
  00d85e8  stw 9, 0(5)
  00d85ec  lwz 5, 8(3)
  00d85f0  stw 10, 4(5)
  00d85f4  lwz 5, 8(3)
  00d85f8  addic 5, 5, 8
  00d85fc  stw 5, 8(3)
  00d8600  lwz 3, 40(23)
  00d8604  lwz 5, 8(3)
  00d8608  stw 6, 0(5)
  00d860c  lwz 5, 8(3)
  00d8610  stw 4, 4(5)
  00d8614  lwz 4, 8(3)
  00d8618  addic 4, 4, 8
  00d861c  stw 4, 8(3)
  00d8620  ld 0, 208(1)
  00d8624  mtlr 0
  00d8628  ld 22, 112(1)
  00d862c  ld 23, 120(1)
  00d8630  ld 24, 128(1)
  00d8634  ld 25, 136(1)
  00d8638  ld 26, 144(1)
  00d863c  ld 27, 152(1)
  00d8640  ld 28, 160(1)
  00d8644  ld 29, 168(1)
  00d8648  ld 30, 176(1)
  00d864c  ld 31, 184(1)
  00d8650  addi 1, 1, 192
  00d8654  blr

STUB_000d8658:   # 0xd8658, 0x4 bytes
  00d8658  blr

Hud_DrawEffectTexLine:   # 0xd865c, 0x284 bytes
  00d865c  stdu 1, -176(1)
  00d8660  mflr 0
  00d8664  std 0, 192(1)
  00d8668  std 26, 128(1)
  00d866c  lis 9, 161
  00d8670  ori 26, 8, 0
  00d8674  std 28, 144(1)
  00d8678  addic 8, 9, 24396
  00d867c  std 25, 120(1)
  00d8680  ori 28, 3, 0
  00d8684  li 3, 22
  00d8688  std 31, 168(1)
  00d868c  ori 25, 7, 0
  00d8690  std 30, 160(1)
  00d8694  std 24, 112(1)
  00d8698  ori 31, 6, 0
  00d869c  ori 30, 5, 0
  00d86a0  std 29, 152(1)
  00d86a4  lwz 24, 28(8)
  00d86a8  std 27, 136(1)
  00d86ac  ori 29, 4, 0
  00d86b0  bl 0x685c4
  00d86b4  nop
  00d86b8  lis 27, 144
  00d86bc  sldi 4, 3, 5
  00d86c0  sldi 3, 3, 2
  00d86c4  addic 27, 27, -23532
  00d86c8  addc 3, 4, 3
  00d86cc  li 4, 0
  00d86d0  addc 5, 24, 3
  00d86d4  lwz 3, 40(27)
  00d86d8  clrldi 5, 5, 32
  00d86dc  bl 0x4d6d00
  00d86e0  nop
  00d86e4  lwz 3, 40(27)
  00d86e8  bl 0x4d6948
  00d86ec  nop
  00d86f0  lwz 4, 40(27)
  00d86f4  rldicl 3, 25, 48, 56
  00d86f8  lis 6, 4
  00d86fc  rldicl 5, 25, 40, 56
  00d8700  ori 6, 6, 6472
  00d8704  lwz 9, 8(4)
  00d8708  rlwinm 3, 3, 16, 8, 15
  00d870c  rldicl 7, 25, 56, 56
  00d8710  rlwimi 3, 5, 24, 0, 7
  00d8714  clrlwi 8, 25, 24
  00d8718  rlwimi 3, 7, 8, 16, 23
  00d871c  stw 6, 0(9)
  00d8720  lwz 5, 8(4)
  00d8724  or 3, 3, 8
  00d8728  lis 6, 4
  00d872c  stw 3, 4(5)
  00d8730  lwz 3, 8(4)
  00d8734  ori 5, 6, 6404
  00d8738  addic 3, 3, 8
  00d873c  lis 6, 16396
  00d8740  stw 3, 8(4)
  00d8744  lwz 3, 40(27)
  00d8748  li 4, 0
  00d874c  ori 6, 6, 5908
  00d8750  cmpwi 26, 0
  00d8754  lwz 7, 8(3)
  00d8758  stw 5, 0(7)
  00d875c  lwz 5, 8(3)
  00d8760  stw 4, 4(5)
  00d8764  lwz 5, 8(3)
  00d8768  addic 5, 5, 8
  00d876c  stw 5, 8(3)
  00d8770  lwz 3, 40(27)
  00d8774  lis 5, 4
  00d8778  ori 5, 5, 6152
  00d877c  lwz 7, 8(3)
  00d8780  stw 6, 0(7)
  00d8784  lwz 6, 8(3)
  00d8788  li 7, 2
  00d878c  stw 4, 4(6)
  00d8790  lwz 6, 8(3)
  00d8794  stw 4, 8(6)
  00d8798  lwz 6, 8(3)
  00d879c  stw 4, 12(6)
  00d87a0  lwz 4, 8(3)
  00d87a4  stw 5, 16(4)
  00d87a8  lwz 4, 8(3)
  00d87ac  stw 7, 20(4)
  00d87b0  lwz 4, 8(3)
  00d87b4  addic 4, 4, 24
  00d87b8  stw 4, 8(3)
  00d87bc  bt 2, 0xd881c
  00d87c0  lwz 5, 40(27)
  00d87c4  lis 3, 4
  00d87c8  clrlwi 4, 28, 16
  00d87cc  ori 3, 3, 6400
  00d87d0  rlwimi 4, 29, 16, 0, 15
  00d87d4  lwz 6, 8(5)
  00d87d8  clrlwi 7, 30, 16
  00d87dc  rlwimi 7, 31, 16, 0, 15
  00d87e0  stw 3, 0(6)
  00d87e4  lwz 6, 8(5)
  00d87e8  stw 4, 4(6)
  00d87ec  lwz 4, 8(5)
  00d87f0  addic 4, 4, 8
  00d87f4  stw 4, 8(5)
  00d87f8  lwz 4, 40(27)
  00d87fc  lwz 5, 8(4)
  00d8800  stw 3, 0(5)
  00d8804  lwz 3, 8(4)
  00d8808  stw 7, 4(3)
  00d880c  lwz 3, 8(4)
  00d8810  addic 3, 3, 8
  00d8814  stw 3, 8(4)
  00d8818  b 0xd8884
  00d881c  addic 4, 28, -8
  00d8820  lwz 5, 40(27)
  00d8824  addic 6, 29, -8
  00d8828  clrlwi 4, 4, 16
  00d882c  lis 3, 4
  00d8830  rlwimi 4, 6, 16, 0, 15
  00d8834  lwz 6, 8(5)
  00d8838  ori 3, 3, 6400
  00d883c  addic 7, 30, -8
  00d8840  addic 8, 31, -8
  00d8844  stw 3, 0(6)
  00d8848  lwz 6, 8(5)
  00d884c  stw 4, 4(6)
  00d8850  lwz 4, 8(5)
  00d8854  clrlwi 6, 7, 16
  00d8858  addic 4, 4, 8
  00d885c  rlwimi 6, 8, 16, 0, 15
  00d8860  stw 4, 8(5)
  00d8864  lwz 4, 40(27)
  00d8868  lwz 5, 8(4)
  00d886c  stw 3, 0(5)
  00d8870  lwz 3, 8(4)
  00d8874  stw 6, 4(3)
  00d8878  lwz 3, 8(4)
  00d887c  addic 3, 3, 8
  00d8880  stw 3, 8(4)
  00d8884  lwz 4, 40(27)
  00d8888  lis 3, 4
  00d888c  li 5, 0
  00d8890  ori 3, 3, 6152
  00d8894  lwz 6, 8(4)
  00d8898  stw 3, 0(6)
  00d889c  lwz 3, 8(4)
  00d88a0  stw 5, 4(3)
  00d88a4  lwz 3, 8(4)
  00d88a8  addic 3, 3, 8
  00d88ac  stw 3, 8(4)
  00d88b0  ld 0, 192(1)
  00d88b4  mtlr 0
  00d88b8  ld 24, 112(1)
  00d88bc  ld 25, 120(1)
  00d88c0  ld 26, 128(1)
  00d88c4  ld 27, 136(1)
  00d88c8  ld 28, 144(1)
  00d88cc  ld 29, 152(1)
  00d88d0  ld 30, 160(1)
  00d88d4  ld 31, 168(1)
  00d88d8  addi 1, 1, 176
  00d88dc  blr

STUB_000d88e0:   # 0xd88e0, 0x4 bytes
  00d88e0  blr
