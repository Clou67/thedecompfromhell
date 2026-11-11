# game/update/moby384.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M384_003593d4:   # 0x3593d4, 0x14 bytes
  03593d4  lis 3, 132
  03593d8  lis 4, 1
  03593dc  addic 3, 3, 1880
  03593e0  stw 4, 72(3)
  03593e4  blr

UpdateMoby_384:   # 0x359408, 0x690 bytes
  0359408  stdu 1, -272(1)
  035940c  mflr 0
  0359410  std 0, 288(1)
  0359414  stfd 30, 256(1)
  0359418  stfd 31, 264(1)
  035941c  std 31, 248(1)
  0359420  lbz 4, 32(3)
  0359424  std 30, 240(1)
  0359428  ori 31, 3, 0
  035942c  lwz 30, 120(3)
  0359430  cmpwi 4, 0
  0359434  cmpwi 1, 4, 1
  0359438  std 29, 232(1)
  035943c  std 28, 224(1)
  0359440  cmpwi 6, 4, -1
  0359444  bt 1, 0x359450
  0359448  bf 25, 0x35956c
  035944c  b 0x359458
  0359450  bf 5, 0x359480
  0359454  b 0x35956c
  0359458  li 3, 1
  035945c  li 4, 2
  0359460  stb 3, 32(31)
  0359464  stb 4, 188(31)
  0359468  bl 0xfcc68
  035946c  nop
  0359470  lis 3, 16544
  0359474  stfs 1, 0(30)
  0359478  stw 3, 8(30)
  035947c  b 0x35956c
  0359480  lis 3, 54
  0359484  addi 4, 3, -27672
  0359488  lbz 3, 188(31)
  035948c  rlwinm 5, 3, 0, 28, 28
  0359490  <unknown>
  0359494  cmpwi 5, 0
  0359498  vspltw 2, 2, 0
  035949c  bt 2, 0x3594e8
  03594a0  li 3, 1
  03594a4  vspltisw 4, -1
  03594a8  lis 4, 132
  03594ac  li 5, 2004
  03594b0  stb 3, 188(31)
  03594b4  lis 3, 114
  03594b8  vslw 4, 4, 4
  03594bc  <unknown>
  03594c0  li 4, -3056
  03594c4  vcfsx 3, 3, 0
  03594c8  <unknown>
  03594cc  li 3, 4
  03594d0  vaddfp 2, 3, 2
  03594d4  vmaddfp 2, 5, 2, 4
  03594d8  vctsxs 2, 2, 0
  03594dc  vspltw 2, 2, 0
  03594e0  stvewx 2, 3, 30
  03594e4  b 0x359538
  03594e8  rlwinm 3, 3, 0, 29, 29
  03594ec  cmpwi 3, 0
  03594f0  bt 2, 0x359538
  03594f4  li 3, 2
  03594f8  lis 4, 132
  03594fc  vspltisw 4, -1
  0359500  li 5, 2004
  0359504  stb 3, 188(31)
  0359508  lis 3, 114
  035950c  vslw 4, 4, 4
  0359510  <unknown>
  0359514  li 4, -3056
  0359518  vcfsx 3, 3, 0
  035951c  <unknown>
  0359520  li 3, 4
  0359524  vaddfp 2, 3, 2
  0359528  vmaddfp 2, 5, 2, 4
  035952c  vctsxs 2, 2, 0
  0359530  vspltw 2, 2, 0
  0359534  stvewx 2, 3, 30
  0359538  lis 3, 54
  035953c  lis 4, 132
  0359540  addi 3, 3, -27672
  0359544  lis 5, 114
  0359548  lfs 3, 4(3)
  035954c  lfs 2, 2000(4)
  0359550  lfs 1, 0(30)
  0359554  fmuls 2, 2, 3
  0359558  lfs 4, -3052(5)
  035955c  fmuls 2, 2, 4
  0359560  bl 0x502578
  0359564  nop
  0359568  stfs 1, 0(30)
  035956c  lis 3, 150
  0359570  lis 4, 54
  0359574  addi 4, 4, -27672
  0359578  lwz 3, -12528(3)
  035957c  cmpwi 3, 0
  0359580  lfs 31, 8(4)
  0359584  bf 2, 0x359a5c
  0359588  addic 3, 30, 4
  035958c  bl 0x4fff60
  0359590  nop
  0359594  cmpwi 3, 0
  0359598  bf 2, 0x3599cc
  035959c  lbz 3, 188(31)
  03595a0  clrlwi 3, 3, 31
  03595a4  cmpwi 3, 0
  03595a8  bt 2, 0x3595ec
  03595ac  lwz 3, 4(30)
  03595b0  extsw 3, 3
  03595b4  bl 0x502730
  03595b8  nop
  03595bc  fmr 30, 1
  03595c0  lis 3, 132
  03595c4  lwz 3, 2004(3)
  03595c8  extsw 3, 3
  03595cc  bl 0x502730
  03595d0  nop
  03595d4  fdivs 30, 30, 1
  03595d8  lis 3, 54
  03595dc  addi 3, 3, -27672
  03595e0  lfs 1, 12(3)
  03595e4  fsubs 30, 1, 30
  03595e8  b 0x359618
  03595ec  lwz 3, 4(30)
  03595f0  extsw 3, 3
  03595f4  bl 0x502730
  03595f8  nop
  03595fc  fmr 30, 1
  0359600  lis 3, 132
  0359604  lwz 3, 2004(3)
  0359608  extsw 3, 3
  035960c  bl 0x502730
  0359610  nop
  0359614  fdivs 30, 30, 1
  0359618  fmr 1, 31
  035961c  lis 3, 54
  0359620  addi 3, 3, -27672
  0359624  lfs 2, 12(3)
  0359628  bl 0xfcbe8
  035962c  nop
  0359630  fcmpu 0, 1, 30
  0359634  cror 6, 1, 2
  0359638  bt 6, 0x3599cc
  035963c  lis 29, 132
  0359640  addic 3, 1, 128
  0359644  fmr 1, 31
  0359648  lfs 2, 2008(29)
  035964c  bl 0xfea60
  0359650  nop
  0359654  addic 3, 1, 144
  0359658  lfs 2, 2008(29)
  035965c  fmr 1, 31
  0359660  bl 0xfea60
  0359664  nop
  0359668  addic 3, 1, 160
  035966c  lfs 2, 2008(29)
  0359670  fmr 1, 31
  0359674  bl 0xfea60
  0359678  nop
  035967c  li 3, 128
  0359680  li 5, 144
  0359684  li 6, 136
  0359688  li 4, 152
  035968c  li 7, 132
  0359690  <unknown>
  0359694  li 9, 148
  0359698  <unknown>
  035969c  li 10, 2052
  03596a0  <unknown>
  03596a4  lis 5, 132
  03596a8  <unknown>
  03596ac  li 8, 2048
  03596b0  lis 4, 132
  03596b4  <unknown>
  03596b8  vsubfp 6, 2, 3
  03596bc  lis 11, 132
  03596c0  <unknown>
  03596c4  li 12, 2032
  03596c8  vsubfp 7, 4, 5
  03596cc  li 9, 168
  03596d0  vsubfp 11, 8, 9
  03596d4  <unknown>
  03596d8  <unknown>
  03596dc  li 5, 176
  03596e0  li 4, 160
  03596e4  vsubfp 12, 10, 12
  03596e8  li 10, 164
  03596ec  li 8, 180
  03596f0  <unknown>
  03596f4  vspltw 13, 6, 0
  03596f8  vsubfp 0, 3, 0
  03596fc  li 4, 184
  0359700  vspltw 1, 7, 0
  0359704  li 29, 16
  0359708  vspltw 3, 11, 0
  035970c  stvewx 13, 5, 1
  0359710  vaddfp 7, 7, 12
  0359714  <unknown>
  0359718  stvewx 3, 8, 1
  035971c  li 10, 192
  0359720  stvewx 1, 4, 1
  0359724  vsubfp 9, 9, 12
  0359728  <unknown>
  035972c  lfs 1, 140(1)
  0359730  vsubfp 3, 5, 3
  0359734  li 9, 196
  0359738  stfs 1, 188(1)
  035973c  <unknown>
  0359740  vspltw 5, 0, 0
  0359744  li 11, 200
  0359748  vcfsx 12, 12, 0
  035974c  lfs 1, 156(1)
  0359750  lis 12, 54
  0359754  vspltw 13, 7, 0
  0359758  addi 12, 12, -27672
  035975c  vspltisw 15, -1
  0359760  vspltw 1, 9, 0
  0359764  stvewx 13, 4, 1
  0359768  stvewx 5, 10, 1
  035976c  vspltw 5, 3, 0
  0359770  stvewx 1, 9, 1
  0359774  vrefp 13, 12
  0359778  vspltisw 1, -1
  035977c  vslw 15, 15, 15
  0359780  stvewx 5, 11, 1
  0359784  stfs 1, 204(1)
  0359788  <unknown>
  035978c  vslw 1, 1, 1
  0359790  vspltw 5, 5, 0
  0359794  lis 12, 132
  0359798  li 29, 2056
  035979c  vspltisw 18, -1
  03597a0  vspltisw 17, -1
  03597a4  li 28, 24
  03597a8  vspltisw 19, -1
  03597ac  vnmsubfp 14, 13, 12, 5
  03597b0  vmaddfp 13, 13, 14, 1
  03597b4  <unknown>
  03597b8  vspltisw 14, -1
  03597bc  li 12, 16
  03597c0  vsubfp 10, 1, 10
  03597c4  li 29, 20
  03597c8  vspltisw 1, -1
  03597cc  vslw 14, 14, 14
  03597d0  vslw 1, 1, 1
  03597d4  vnmsubfp 16, 13, 12, 5
  03597d8  vaddfp 10, 3, 10
  03597dc  vspltisw 3, -1
  03597e0  vmaddfp 13, 13, 16, 15
  03597e4  vslw 16, 18, 18
  03597e8  vslw 18, 3, 3
  03597ec  vspltisw 3, -1
  03597f0  vslw 15, 17, 17
  03597f4  vspltisw 17, -1
  03597f8  vslw 17, 17, 17
  03597fc  vnmsubfp 12, 13, 12, 5
  0359800  vmaddfp 12, 13, 12, 14
  0359804  vslw 13, 3, 3
  0359808  <unknown>
  035980c  vslw 14, 19, 19
  0359810  vaddfp 2, 2, 3
  0359814  <unknown>
  0359818  <unknown>
  035981c  vaddfp 8, 8, 19
  0359820  vaddfp 3, 4, 3
  0359824  lbz 12, 188(31)
  0359828  vmaddfp 5, 12, 5, 1
  035982c  clrlwi 12, 12, 31
  0359830  cmpwi 12, 0
  0359834  vspltw 12, 2, 0
  0359838  vspltw 8, 8, 0
  035983c  vmaddfp 6, 6, 5, 15
  0359840  vmaddfp 11, 11, 5, 16
  0359844  vmaddfp 4, 7, 5, 17
  0359848  vmaddfp 7, 0, 5, 18
  035984c  vmaddfp 9, 9, 5, 13
  0359850  vmaddfp 2, 10, 5, 14
  0359854  vspltw 5, 3, 0
  0359858  vspltw 6, 6, 0
  035985c  vspltw 10, 11, 0
  0359860  vspltw 11, 4, 0
  0359864  vspltw 7, 7, 0
  0359868  vspltw 9, 9, 0
  035986c  stvewx 6, 5, 1
  0359870  vspltw 6, 2, 0
  0359874  stvewx 10, 8, 1
  0359878  stvewx 11, 4, 1
  035987c  stvewx 7, 10, 1
  0359880  stvewx 9, 9, 1
  0359884  stvewx 6, 11, 1
  0359888  stvewx 12, 3, 1
  035988c  stvewx 8, 7, 1
  0359890  stvewx 5, 6, 1
  0359894  bt 2, 0x3598e0
  0359898  lis 3, 54
  035989c  li 4, 20
  03598a0  addi 3, 3, -27672
  03598a4  lis 5, 132
  03598a8  li 6, 2056
  03598ac  li 7, 200
  03598b0  <unknown>
  03598b4  li 3, 184
  03598b8  vspltw 5, 5, 0
  03598bc  <unknown>
  03598c0  vxor 4, 5, 4
  03598c4  vxor 5, 5, 2
  03598c8  vsldoi 2, 6, 6, 0
  03598cc  vspltw 4, 4, 0
  03598d0  vspltw 5, 5, 0
  03598d4  stvewx 4, 3, 1
  03598d8  stvewx 5, 7, 1
  03598dc  b 0x3598ec
  03598e0  lis 3, 132
  03598e4  li 4, 2048
  03598e8  <unknown>
  03598ec  vspltw 2, 2, 0
  03598f0  lis 29, 132
  03598f4  lis 28, 132
  03598f8  li 3, 136
  03598fc  vaddfp 2, 3, 2
  0359900  lfs 1, 2020(29)
  0359904  lfs 2, 2024(28)
  0359908  vspltw 2, 2, 0
  035990c  stvewx 2, 3, 1
  0359910  bl 0xfcbe8
  0359914  nop
  0359918  lfs 2, 2020(29)
  035991c  stfs 1, 188(1)
  0359920  lfs 3, 2024(28)
  0359924  fmr 1, 2
  0359928  fmr 2, 3
  035992c  bl 0xfcbe8
  0359930  nop
  0359934  lis 4, 132
  0359938  stfs 1, 204(1)
  035993c  lis 5, 114
  0359940  lis 6, 132
  0359944  lis 7, 132
  0359948  lwz 4, 2032(4)
  035994c  lis 9, 132
  0359950  extsw 4, 4
  0359954  lis 10, 132
  0359958  std 4, 208(1)
  035995c  lis 4, 54
  0359960  addi 4, 4, -27672
  0359964  addic 3, 1, 128
  0359968  lfs 1, 0(4)
  035996c  lfs 2, -3056(5)
  0359970  lfd 3, 208(1)
  0359974  addic 4, 1, 176
  0359978  fcfid 3, 3
  035997c  addic 5, 1, 192
  0359980  lwz 6, 2040(6)
  0359984  lwz 8, 2028(7)
  0359988  lwz 9, 2044(9)
  035998c  extsw 6, 6
  0359990  lwz 10, 2036(10)
  0359994  extsw 8, 8
  0359998  extsw 9, 9
  035999c  ori 7, 6, 0
  03599a0  extsw 10, 10
  03599a4  frsp 3, 3
  03599a8  std 9, 112(1)
  03599ac  fadds 1, 3, 1
  03599b0  fmuls 1, 2, 1
  03599b4  fctiwz 1, 1
  03599b8  stfd 1, 208(1)
  03599bc  lwz 9, 212(1)
  03599c0  extsw 9, 9
  03599c4  bl 0x1206e8
  03599c8  nop
  03599cc  lbz 3, 188(31)
  03599d0  addic 4, 30, 8
  03599d4  clrlwi 5, 3, 31
  03599d8  cmpwi 5, 0
  03599dc  bt 2, 0x359a20
  03599e0  lwz 5, 4(30)
  03599e4  cmpwi 5, 0
  03599e8  bf 2, 0x359a20
  03599ec  lis 3, 54
  03599f0  lis 5, 132
  03599f4  lis 6, 114
  03599f8  addi 7, 3, -27672
  03599fc  ori 3, 4, 0
  0359a00  lfs 2, 2060(5)
  0359a04  lfs 1, -3052(6)
  0359a08  lfs 3, 24(7)
  0359a0c  fmuls 2, 2, 1
  0359a10  fmr 1, 3
  0359a14  bl 0x109af0
  0359a18  nop
  0359a1c  b 0x359a5c
  0359a20  rlwinm 3, 3, 0, 30, 30
  0359a24  cmpwi 3, 0
  0359a28  bt 2, 0x359a5c
  0359a2c  lis 3, 54
  0359a30  lis 5, 132
  0359a34  lis 6, 114
  0359a38  addi 7, 3, -27672
  0359a3c  ori 3, 4, 0
  0359a40  lfs 2, 2060(5)
  0359a44  lfs 1, -3052(6)
  0359a48  lfs 3, 28(7)
  0359a4c  fmuls 2, 2, 1
  0359a50  fmr 1, 3
  0359a54  bl 0x109af0
  0359a58  nop
  0359a5c  lis 3, 113
  0359a60  ori 4, 31, 0
  0359a64  addic 3, 3, -14720
  0359a68  bl 0x6d720
  0359a6c  nop
  0359a70  ld 0, 288(1)
  0359a74  mtlr 0
  0359a78  lfd 30, 256(1)
  0359a7c  lfd 31, 264(1)
  0359a80  ld 28, 224(1)
  0359a84  ld 29, 232(1)
  0359a88  ld 30, 240(1)
  0359a8c  ld 31, 248(1)
  0359a90  addi 1, 1, 272
  0359a94  blr
