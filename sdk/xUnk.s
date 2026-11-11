# sdk/xUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strerror:   # 0x5cb4fc, 0x674 bytes
  05cb4fc  stdu 1, -192(1)
  05cb500  mflr 0
  05cb504  std 31, 184(1)
  05cb508  std 0, 208(1)
  05cb50c  lis 0, -32767
  05cb510  std 22, 112(1)
  05cb514  ori 0, 0, 33
  05cb518  std 23, 120(1)
  05cb51c  cmpw 7, 3, 0
  05cb520  std 24, 128(1)
  05cb524  std 25, 136(1)
  05cb528  std 26, 144(1)
  05cb52c  std 27, 152(1)
  05cb530  std 28, 160(1)
  05cb534  std 29, 168(1)
  05cb538  std 30, 176(1)
  05cb53c  mr 31, 3
  05cb540  bt 30, 0x5cb750
  05cb544  bf 29, 0x5cb5a4
  05cb548  lis 0, -32767
  05cb54c  ori 0, 0, 45
  05cb550  cmpw 7, 3, 0
  05cb554  bt 30, 0x5cb820
  05cb558  bf 29, 0x5cb790
  05cb55c  lis 0, -32767
  05cb560  ori 0, 0, 51
  05cb564  cmpw 7, 3, 0
  05cb568  bt 30, 0x5cb97c
  05cb56c  bf 29, 0x5cb930
  05cb570  lis 0, -32767
  05cb574  ori 0, 0, 54
  05cb578  cmpw 7, 3, 0
  05cb57c  bt 30, 0x5cbac0
  05cb580  bt 29, 0x5cb9f4
  05cb584  xoris 0, 3, 32769
  05cb588  cmpwi 7, 0, 52
  05cb58c  bt 30, 0x5cbb48
  05cb590  xoris 0, 3, 32769
  05cb594  cmpwi 7, 0, 53
  05cb598  bf 30, 0x5cb5f8
  05cb59c  lwz 30, -24520(2)
  05cb5a0  b 0x5cb754
  05cb5a4  lis 0, -32767
  05cb5a8  ori 0, 0, 11
  05cb5ac  cmpw 7, 3, 0
  05cb5b0  bt 30, 0x5cb860
  05cb5b4  bf 29, 0x5cb7d8
  05cb5b8  lis 0, -32767
  05cb5bc  ori 0, 0, 27
  05cb5c0  cmpw 7, 3, 0
  05cb5c4  bt 30, 0x5cb974
  05cb5c8  bt 29, 0x5cb8a0
  05cb5cc  lis 0, -32767
  05cb5d0  ori 0, 0, 18
  05cb5d4  cmpw 7, 3, 0
  05cb5d8  bt 30, 0x5cbac8
  05cb5dc  bt 29, 0x5cba10
  05cb5e0  xoris 0, 3, 32769
  05cb5e4  cmpwi 7, 0, 13
  05cb5e8  bt 30, 0x5cbb58
  05cb5ec  xoris 0, 3, 32769
  05cb5f0  cmpwi 7, 0, 14
  05cb5f4  bt 30, 0x5cbb68
  05cb5f8  cmpwi 7, 4, 0
  05cb5fc  bt 30, 0x5cb984
  05cb600  addi 29, 4, 8
  05cb604  addi 28, 4, 9
  05cb608  addi 27, 4, 10
  05cb60c  addi 26, 4, 11
  05cb610  addi 25, 4, 12
  05cb614  addi 24, 4, 13
  05cb618  addi 23, 4, 14
  05cb61c  addi 22, 4, 15
  05cb620  clrldi 30, 4, 32
  05cb624  lwz 4, -24456(2)
  05cb628  mr 3, 30
  05cb62c  bl 0x5cc8d8
  05cb630  nop
  05cb634  srwi 9, 31, 28
  05cb638  cmpwi 7, 9, 9
  05cb63c  clrlwi 3, 31, 28
  05cb640  rldicl 11, 31, 40, 60
  05cb644  rldicl 10, 31, 44, 60
  05cb648  rldicl 7, 31, 48, 60
  05cb64c  rldicl 6, 31, 52, 60
  05cb650  rldicl 5, 31, 56, 60
  05cb654  rldicl 4, 31, 60, 60
  05cb658  addi 0, 9, 87
  05cb65c  bt 29, 0x5cb664
  05cb660  addi 0, 9, 48
  05cb664  clrldi 9, 29, 32
  05cb668  cmpwi 7, 11, 9
  05cb66c  addi 8, 11, 87
  05cb670  stb 0, 0(9)
  05cb674  bt 29, 0x5cb67c
  05cb678  addi 8, 11, 48
  05cb67c  clrldi 9, 28, 32
  05cb680  cmpwi 7, 10, 9
  05cb684  addi 11, 10, 87
  05cb688  stb 8, 0(9)
  05cb68c  bt 29, 0x5cb694
  05cb690  addi 11, 10, 48
  05cb694  clrldi 9, 27, 32
  05cb698  cmpwi 7, 7, 9
  05cb69c  addi 0, 7, 87
  05cb6a0  stb 11, 0(9)
  05cb6a4  bt 29, 0x5cb6ac
  05cb6a8  addi 0, 7, 48
  05cb6ac  clrldi 9, 26, 32
  05cb6b0  cmpwi 7, 6, 9
  05cb6b4  addi 11, 6, 87
  05cb6b8  stb 0, 0(9)
  05cb6bc  bt 29, 0x5cb6c4
  05cb6c0  addi 11, 6, 48
  05cb6c4  clrldi 9, 25, 32
  05cb6c8  cmpwi 7, 5, 9
  05cb6cc  addi 0, 5, 87
  05cb6d0  stb 11, 0(9)
  05cb6d4  bt 29, 0x5cb6dc
  05cb6d8  addi 0, 5, 48
  05cb6dc  clrldi 9, 24, 32
  05cb6e0  cmpwi 7, 4, 9
  05cb6e4  addi 11, 4, 87
  05cb6e8  stb 0, 0(9)
  05cb6ec  bt 29, 0x5cb6f4
  05cb6f0  addi 11, 4, 48
  05cb6f4  clrldi 9, 23, 32
  05cb6f8  cmpwi 7, 3, 9
  05cb6fc  addi 0, 3, 87
  05cb700  stb 11, 0(9)
  05cb704  bt 29, 0x5cb70c
  05cb708  addi 0, 3, 48
  05cb70c  clrldi 9, 22, 32
  05cb710  mr 3, 30
  05cb714  stb 0, 0(9)
  05cb718  ld 0, 208(1)
  05cb71c  ld 22, 112(1)
  05cb720  ld 23, 120(1)
  05cb724  mtlr 0
  05cb728  ld 24, 128(1)
  05cb72c  ld 25, 136(1)
  05cb730  ld 26, 144(1)
  05cb734  ld 27, 152(1)
  05cb738  ld 28, 160(1)
  05cb73c  ld 29, 168(1)
  05cb740  ld 30, 176(1)
  05cb744  ld 31, 184(1)
  05cb748  addi 1, 1, 192
  05cb74c  blr
  05cb750  lwz 30, -24548(2)
  05cb754  ld 0, 208(1)
  05cb758  mr 3, 30
  05cb75c  ld 22, 112(1)
  05cb760  ld 23, 120(1)
  05cb764  mtlr 0
  05cb768  ld 24, 128(1)
  05cb76c  ld 25, 136(1)
  05cb770  ld 26, 144(1)
  05cb774  ld 27, 152(1)
  05cb778  ld 28, 160(1)
  05cb77c  ld 29, 168(1)
  05cb780  ld 30, 176(1)
  05cb784  ld 31, 184(1)
  05cb788  addi 1, 1, 192
  05cb78c  blr
  05cb790  lis 0, -32767
  05cb794  ori 0, 0, 39
  05cb798  cmpw 7, 3, 0
  05cb79c  bt 30, 0x5cb964
  05cb7a0  bf 29, 0x5cb8fc
  05cb7a4  lis 0, -32767
  05cb7a8  ori 0, 0, 42
  05cb7ac  cmpw 7, 3, 0
  05cb7b0  bt 30, 0x5cbab0
  05cb7b4  bt 29, 0x5cb9b4
  05cb7b8  xoris 0, 3, 32769
  05cb7bc  cmpwi 7, 0, 40
  05cb7c0  bt 30, 0x5cbb20
  05cb7c4  xoris 0, 3, 32769
  05cb7c8  cmpwi 7, 0, 41
  05cb7cc  bf 30, 0x5cb5f8
  05cb7d0  lwz 30, -24628(2)
  05cb7d4  b 0x5cb754
  05cb7d8  lis 0, -32767
  05cb7dc  ori 0, 0, 5
  05cb7e0  cmpw 7, 3, 0
  05cb7e4  bt 30, 0x5cb96c
  05cb7e8  bf 29, 0x5cb8d4
  05cb7ec  lis 0, -32767
  05cb7f0  ori 0, 0, 8
  05cb7f4  cmpw 7, 3, 0
  05cb7f8  bt 30, 0x5cbae8
  05cb7fc  bt 29, 0x5cba90
  05cb800  xoris 0, 3, 32769
  05cb804  cmpwi 7, 0, 6
  05cb808  bt 30, 0x5cbb50
  05cb80c  xoris 0, 3, 32769
  05cb810  cmpwi 7, 0, 7
  05cb814  bf 30, 0x5cb5f8
  05cb818  lwz 30, -24524(2)
  05cb81c  b 0x5cb754
  05cb820  lwz 30, -24532(2)
  05cb824  ld 0, 208(1)
  05cb828  mr 3, 30
  05cb82c  ld 22, 112(1)
  05cb830  ld 23, 120(1)
  05cb834  mtlr 0
  05cb838  ld 24, 128(1)
  05cb83c  ld 25, 136(1)
  05cb840  ld 26, 144(1)
  05cb844  ld 27, 152(1)
  05cb848  ld 28, 160(1)
  05cb84c  ld 29, 168(1)
  05cb850  ld 30, 176(1)
  05cb854  ld 31, 184(1)
  05cb858  addi 1, 1, 192
  05cb85c  blr
  05cb860  lwz 30, -24460(2)
  05cb864  ld 0, 208(1)
  05cb868  mr 3, 30
  05cb86c  ld 22, 112(1)
  05cb870  ld 23, 120(1)
  05cb874  mtlr 0
  05cb878  ld 24, 128(1)
  05cb87c  ld 25, 136(1)
  05cb880  ld 26, 144(1)
  05cb884  ld 27, 152(1)
  05cb888  ld 28, 160(1)
  05cb88c  ld 29, 168(1)
  05cb890  ld 30, 176(1)
  05cb894  ld 31, 184(1)
  05cb898  addi 1, 1, 192
  05cb89c  blr
  05cb8a0  lis 0, -32767
  05cb8a4  ori 0, 0, 30
  05cb8a8  cmpw 7, 3, 0
  05cb8ac  bt 30, 0x5cbad0
  05cb8b0  bt 29, 0x5cba50
  05cb8b4  xoris 0, 3, 32769
  05cb8b8  cmpwi 7, 0, 28
  05cb8bc  bt 30, 0x5cbb08
  05cb8c0  xoris 0, 3, 32769
  05cb8c4  cmpwi 7, 0, 29
  05cb8c8  bf 30, 0x5cb5f8
  05cb8cc  lwz 30, -24576(2)
  05cb8d0  b 0x5cb754
  05cb8d4  lis 0, -32767
  05cb8d8  ori 0, 0, 2
  05cb8dc  cmpw 7, 3, 0
  05cb8e0  bt 30, 0x5cbae0
  05cb8e4  bt 29, 0x5cba30
  05cb8e8  xoris 0, 3, 32769
  05cb8ec  cmpwi 7, 0, 1
  05cb8f0  bf 30, 0x5cb5f8
  05cb8f4  lwz 30, -24624(2)
  05cb8f8  b 0x5cb754
  05cb8fc  lis 0, -32767
  05cb900  ori 0, 0, 36
  05cb904  cmpw 7, 3, 0
  05cb908  bt 30, 0x5cbab8
  05cb90c  bt 29, 0x5cb9d4
  05cb910  xoris 0, 3, 32769
  05cb914  cmpwi 7, 0, 34
  05cb918  bt 30, 0x5cbb40
  05cb91c  xoris 0, 3, 32769
  05cb920  cmpwi 7, 0, 35
  05cb924  bf 30, 0x5cb5f8
  05cb928  lwz 30, -24512(2)
  05cb92c  b 0x5cb754
  05cb930  lis 0, -32767
  05cb934  ori 0, 0, 48
  05cb938  cmpw 7, 3, 0
  05cb93c  bt 30, 0x5cbad8
  05cb940  bt 29, 0x5cba70
  05cb944  xoris 0, 3, 32769
  05cb948  cmpwi 7, 0, 46
  05cb94c  bt 30, 0x5cbb28
  05cb950  xoris 0, 3, 32769
  05cb954  cmpwi 7, 0, 47
  05cb958  bf 30, 0x5cb5f8
  05cb95c  lwz 30, -24488(2)
  05cb960  b 0x5cb754
  05cb964  lwz 30, -24468(2)
  05cb968  b 0x5cb754
  05cb96c  lwz 30, -24464(2)
  05cb970  b 0x5cb754
  05cb974  lwz 30, -24596(2)
  05cb978  b 0x5cb754
  05cb97c  lwz 30, -24544(2)
  05cb980  b 0x5cb754
  05cb984  addis 9, 13, 0
  05cb988  addi 9, 9, -28528
  05cb98c  addi 22, 9, 15
  05cb990  mr 4, 9
  05cb994  addi 29, 9, 8
  05cb998  addi 28, 9, 9
  05cb99c  addi 27, 9, 10
  05cb9a0  addi 26, 9, 11
  05cb9a4  addi 25, 9, 12
  05cb9a8  addi 24, 9, 13
  05cb9ac  addi 23, 9, 14
  05cb9b0  b 0x5cb620
  05cb9b4  xoris 0, 3, 32769
  05cb9b8  cmpwi 7, 0, 43
  05cb9bc  bt 30, 0x5cbb38
  05cb9c0  xoris 0, 3, 32769
  05cb9c4  cmpwi 7, 0, 44
  05cb9c8  bf 30, 0x5cb5f8
  05cb9cc  lwz 30, -24552(2)
  05cb9d0  b 0x5cb754
  05cb9d4  xoris 0, 3, 32769
  05cb9d8  cmpwi 7, 0, 37
  05cb9dc  bt 30, 0x5cbb00
  05cb9e0  xoris 0, 3, 32769
  05cb9e4  cmpwi 7, 0, 38
  05cb9e8  bf 30, 0x5cb5f8
  05cb9ec  lwz 30, -24472(2)
  05cb9f0  b 0x5cb754
  05cb9f4  xoris 0, 3, 32769
  05cb9f8  cmpwi 7, 0, 55
  05cb9fc  bt 30, 0x5cbb60
  05cba00  cmpwi 7, 3, 0
  05cba04  bf 30, 0x5cb5f8
  05cba08  lwz 30, -24636(2)
  05cba0c  b 0x5cb754
  05cba10  xoris 0, 3, 32769
  05cba14  cmpwi 7, 0, 19
  05cba18  bt 30, 0x5cbaf0
  05cba1c  xoris 0, 3, 32769
  05cba20  cmpwi 7, 0, 20
  05cba24  bf 30, 0x5cb5f8
  05cba28  lwz 30, -24592(2)
  05cba2c  b 0x5cb754
  05cba30  xoris 0, 3, 32769
  05cba34  cmpwi 7, 0, 3
  05cba38  bt 30, 0x5cbb10
  05cba3c  xoris 0, 3, 32769
  05cba40  cmpwi 7, 0, 4
  05cba44  bf 30, 0x5cb5f8
  05cba48  lwz 30, -24516(2)
  05cba4c  b 0x5cb754
  05cba50  xoris 0, 3, 32769
  05cba54  cmpwi 7, 0, 31
  05cba58  bt 30, 0x5cbb18
  05cba5c  xoris 0, 3, 32769
  05cba60  cmpwi 7, 0, 32
  05cba64  bf 30, 0x5cb5f8
  05cba68  lwz 30, -24584(2)
  05cba6c  b 0x5cb754
  05cba70  xoris 0, 3, 32769
  05cba74  cmpwi 7, 0, 49
  05cba78  bt 30, 0x5cbaf8
  05cba7c  xoris 0, 3, 32769
  05cba80  cmpwi 7, 0, 50
  05cba84  bf 30, 0x5cb5f8
  05cba88  lwz 30, -24572(2)
  05cba8c  b 0x5cb754
  05cba90  xoris 0, 3, 32769
  05cba94  cmpwi 7, 0, 9
  05cba98  bt 30, 0x5cbb30
  05cba9c  xoris 0, 3, 32769
  05cbaa0  cmpwi 7, 0, 10
  05cbaa4  bf 30, 0x5cb5f8
  05cbaa8  lwz 30, -24612(2)
  05cbaac  b 0x5cb754
  05cbab0  lwz 30, -24620(2)
  05cbab4  b 0x5cb754
  05cbab8  lwz 30, -24492(2)
  05cbabc  b 0x5cb754
  05cbac0  lwz 30, -24500(2)
  05cbac4  b 0x5cb754
  05cbac8  lwz 30, -24556(2)
  05cbacc  b 0x5cb754
  05cbad0  lwz 30, -24580(2)
  05cbad4  b 0x5cb754
  05cbad8  lwz 30, -24640(2)
  05cbadc  b 0x5cb754
  05cbae0  lwz 30, -24564(2)
  05cbae4  b 0x5cb754
  05cbae8  lwz 30, -24600(2)
  05cbaec  b 0x5cb754
  05cbaf0  lwz 30, -24608(2)
  05cbaf4  b 0x5cb754
  05cbaf8  lwz 30, -24616(2)
  05cbafc  b 0x5cb754
  05cbb00  lwz 30, -24480(2)
  05cbb04  b 0x5cb754
  05cbb08  lwz 30, -24476(2)
  05cbb0c  b 0x5cb754
  05cbb10  lwz 30, -24508(2)
  05cbb14  b 0x5cb754
  05cbb18  lwz 30, -24568(2)
  05cbb1c  b 0x5cb754
  05cbb20  lwz 30, -24632(2)
  05cbb24  b 0x5cb754
  05cbb28  lwz 30, -24504(2)
  05cbb2c  b 0x5cb754
  05cbb30  lwz 30, -24484(2)
  05cbb34  b 0x5cb754
  05cbb38  lwz 30, -24560(2)
  05cbb3c  b 0x5cb754
  05cbb40  lwz 30, -24536(2)
  05cbb44  b 0x5cb754
  05cbb48  lwz 30, -24540(2)
  05cbb4c  b 0x5cb754
  05cbb50  lwz 30, -24528(2)
  05cbb54  b 0x5cb754
  05cbb58  lwz 30, -24588(2)
  05cbb5c  b 0x5cb754
  05cbb60  lwz 30, -24496(2)
  05cbb64  b 0x5cb754
  05cbb68  lwz 30, -24604(2)
  05cbb6c  b 0x5cb754

FUN_005cbb70:   # 0x5cbb70, 0x4c bytes
  05cbb70  lwz 10, -24452(2)
  05cbb74  mflr 0
  05cbb78  stdu 1, -112(1)
  05cbb7c  std 0, 128(1)
  05cbb80  slwi 11, 3, 5
  05cbb84  slwi 0, 3, 3
  05cbb88  lwz 9, 0(10)
  05cbb8c  addi 8, 10, 8
  05cbb90  add 0, 0, 11
  05cbb94  cmpw 7, 9, 3
  05cbb98  add 0, 0, 8
  05cbb9c  clrldi 3, 0, 32
  05cbba0  bf 29, 0x5cbbac
  05cbba4  bl 0x5d0370
  05cbba8  nop
  05cbbac  ld 0, 128(1)
  05cbbb0  addi 1, 1, 112
  05cbbb4  mtlr 0
  05cbbb8  blr

FUN_005cbbbc:   # 0x5cbbbc, 0x30 bytes
  05cbbbc  cmpdi 3, 0
  05cbbc0  mflr 0
  05cbbc4  stdu 1, -112(1)
  05cbbc8  std 0, 128(1)
  05cbbcc  bt 2, 0x5cbbdc
  05cbbd0  lwz 3, 68(3)
  05cbbd4  bl 0x5d0370
  05cbbd8  nop
  05cbbdc  ld 0, 128(1)
  05cbbe0  addi 1, 1, 112
  05cbbe4  mtlr 0
  05cbbe8  blr

FUN_005cbbec:   # 0x5cbbec, 0x4c bytes
  05cbbec  lwz 10, -24452(2)
  05cbbf0  mflr 0
  05cbbf4  stdu 1, -112(1)
  05cbbf8  std 0, 128(1)
  05cbbfc  slwi 11, 3, 5
  05cbc00  slwi 0, 3, 3
  05cbc04  lwz 9, 0(10)
  05cbc08  addi 8, 10, 8
  05cbc0c  add 0, 0, 11
  05cbc10  cmpw 7, 9, 3
  05cbc14  add 0, 0, 8
  05cbc18  clrldi 3, 0, 32
  05cbc1c  bf 29, 0x5cbc28
  05cbc20  bl 0x5d03b4
  05cbc24  nop
  05cbc28  ld 0, 128(1)
  05cbc2c  addi 1, 1, 112
  05cbc30  mtlr 0
  05cbc34  blr

FUN_005cbc38:   # 0x5cbc38, 0x30 bytes
  05cbc38  cmpdi 3, 0
  05cbc3c  mflr 0
  05cbc40  stdu 1, -112(1)
  05cbc44  std 0, 128(1)
  05cbc48  bt 2, 0x5cbc58
  05cbc4c  lwz 3, 68(3)
  05cbc50  bl 0x5d03b4
  05cbc54  nop
  05cbc58  ld 0, 128(1)
  05cbc5c  addi 1, 1, 112
  05cbc60  mtlr 0
  05cbc64  blr
