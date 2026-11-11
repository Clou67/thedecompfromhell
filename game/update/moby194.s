# game/update/moby194.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M194_002de770:   # 0x2de770, 0x14 bytes
  02de770  lis 3, 127
  02de774  lis 4, 1
  02de778  addic 3, 3, 16064
  02de77c  stw 4, 72(3)
  02de780  blr

M194_002de788:   # 0x2de788, 0xdc bytes
  02de788  stdu 1, -144(1)
  02de78c  mflr 0
  02de790  std 0, 160(1)
  02de794  std 29, 120(1)
  02de798  ori 29, 3, 0
  02de79c  std 31, 136(1)
  02de7a0  li 3, 194
  02de7a4  std 30, 128(1)
  02de7a8  ori 31, 5, 0
  02de7ac  std 28, 112(1)
  02de7b0  ori 30, 4, 0
  02de7b4  bl 0xefa28
  02de7b8  nop
  02de7bc  ori 28, 3, 0
  02de7c0  cmpwi 28, 0
  02de7c4  bt 2, 0x2de840
  02de7c8  li 3, 255
  02de7cc  li 4, 126
  02de7d0  li 5, 1
  02de7d4  stb 3, 48(28)
  02de7d8  sth 4, 50(28)
  02de7dc  lfs 1, 72(30)
  02de7e0  stb 5, 49(28)
  02de7e4  ld 3, 56(30)
  02de7e8  stfs 1, 72(28)
  02de7ec  std 3, 56(28)
  02de7f0  lfs 1, 0(29)
  02de7f4  stfs 1, 16(28)
  02de7f8  lfs 1, 4(29)
  02de7fc  lbz 3, 83(28)
  02de800  stfs 1, 20(28)
  02de804  lfs 1, 8(29)
  02de808  cmpw 3, 31
  02de80c  stfs 1, 24(28)
  02de810  lfs 1, 12(29)
  02de814  stfs 1, 28(28)
  02de818  bt 2, 0x2de834
  02de81c  ori 3, 28, 0
  02de820  ori 4, 31, 0
  02de824  li 5, 0
  02de828  li 6, 3
  02de82c  bl 0xfddc0
  02de830  nop
  02de834  ori 3, 28, 0
  02de838  bl 0xf31a8
  02de83c  nop
  02de840  ori 3, 28, 0
  02de844  ld 0, 160(1)
  02de848  mtlr 0
  02de84c  ld 28, 112(1)
  02de850  ld 29, 120(1)
  02de854  ld 30, 128(1)
  02de858  ld 31, 136(1)
  02de85c  addi 1, 1, 144
  02de860  blr

UpdateMoby_194:   # 0x2de920, 0x4550 bytes
  02de920  stdu 1, -848(1)
  02de924  mflr 0
  02de928  std 0, 864(1)
  02de92c  stfd 26, 800(1)
  02de930  stfd 27, 808(1)
  02de934  stfd 28, 816(1)
  02de938  stfd 29, 824(1)
  02de93c  stfd 30, 832(1)
  02de940  stfd 31, 840(1)
  02de944  std 31, 792(1)
  02de948  ori 31, 3, 0
  02de94c  lis 4, 1
  02de950  std 30, 784(1)
  02de954  li 5, 0
  02de958  std 29, 776(1)
  02de95c  std 28, 768(1)
  02de960  std 27, 760(1)
  02de964  std 26, 752(1)
  02de968  std 25, 744(1)
  02de96c  std 24, 736(1)
  02de970  std 23, 728(1)
  02de974  std 22, 720(1)
  02de978  std 21, 712(1)
  02de97c  lwz 30, 120(31)
  02de980  bl 0x10675c
  02de984  nop
  02de988  lhz 4, 118(30)
  02de98c  lis 29, 151
  02de990  extsh 4, 4
  02de994  addic 29, 29, -25376
  02de998  cmpwi 4, 4
  02de99c  bt 1, 0x2de9d0
  02de9a0  cmpwi 4, 1
  02de9a4  bt 1, 0x2de9bc
  02de9a8  cmpwi 4, -1
  02de9ac  bf 1, 0x2df128
  02de9b0  cmpwi 4, 0
  02de9b4  bf 1, 0x2dea04
  02de9b8  b 0x2deb44
  02de9bc  cmpwi 4, 2
  02de9c0  bf 1, 0x2deba0
  02de9c4  cmpwi 4, 3
  02de9c8  bf 1, 0x2dec44
  02de9cc  b 0x2ded08
  02de9d0  cmpwi 4, 10
  02de9d4  bt 2, 0x2deff0
  02de9d8  cmpwi 4, 9
  02de9dc  bt 2, 0x2deef4
  02de9e0  cmpwi 4, 8
  02de9e4  bt 2, 0x2dee30
  02de9e8  cmpwi 4, 7
  02de9ec  bt 2, 0x2dedd4
  02de9f0  cmpwi 4, 6
  02de9f4  bt 2, 0x2deadc
  02de9f8  cmpwi 4, 5
  02de9fc  bt 2, 0x2dea68
  02dea00  b 0x2df128
  02dea04  cmpwi 3, 0
  02dea08  bt 2, 0x2df128
  02dea0c  lbz 3, 32(31)
  02dea10  cmpwi 1, 3, 127
  02dea14  cmpwi 3, 3
  02dea18  crorc 2, 2, 4
  02dea1c  bt 2, 0x2df128
  02dea20  lfs 1, 16(31)
  02dea24  lfs 2, 128(29)
  02dea28  lfs 3, 20(31)
  02dea2c  lfs 4, 132(29)
  02dea30  fsubs 1, 1, 2
  02dea34  fsubs 2, 3, 4
  02dea38  bl 0x5e8338
  02dea3c  nop
  02dea40  ori 3, 31, 0
  02dea44  ori 4, 30, 0
  02dea48  li 6, 6
  02dea4c  li 7, 3
  02dea50  li 8, 0
  02dea54  bl 0x10ad80
  02dea58  nop
  02dea5c  li 3, 127
  02dea60  stb 3, 32(31)
  02dea64  b 0x2df128
  02dea68  cmpwi 3, 0
  02dea6c  bt 2, 0x2df128
  02dea70  lbz 3, 32(31)
  02dea74  cmpwi 3, 127
  02dea78  bf 0, 0x2df128
  02dea7c  lis 3, 46
  02dea80  lfs 1, 24(31)
  02dea84  addi 3, 3, -6044
  02dea88  lfs 2, 0(3)
  02dea8c  lfs 3, 16(31)
  02dea90  fadds 1, 1, 2
  02dea94  lfs 4, 20(31)
  02dea98  stfs 1, 24(31)
  02dea9c  lfs 1, 128(29)
  02deaa0  lfs 2, 132(29)
  02deaa4  fsubs 1, 3, 1
  02deaa8  fsubs 2, 4, 2
  02deaac  bl 0x5e8338
  02deab0  nop
  02deab4  ori 3, 31, 0
  02deab8  ori 4, 30, 0
  02deabc  li 6, 6
  02deac0  li 7, 3
  02deac4  li 8, 0
  02deac8  bl 0x10ad80
  02deacc  nop
  02dead0  li 3, 127
  02dead4  stb 3, 32(31)
  02dead8  b 0x2df128
  02deadc  cmpwi 3, 0
  02deae0  bt 2, 0x2df128
  02deae4  lbz 3, 32(31)
  02deae8  cmpwi 3, 127
  02deaec  bf 0, 0x2df128
  02deaf0  lwz 3, 36(31)
  02deaf4  lfs 1, 16(31)
  02deaf8  lfs 2, 20(31)
  02deafc  lfs 3, 36(3)
  02deb00  stfs 3, 44(31)
  02deb04  lfs 3, 128(29)
  02deb08  lfs 4, 132(29)
  02deb0c  fsubs 1, 1, 3
  02deb10  fsubs 2, 2, 4
  02deb14  bl 0x5e8338
  02deb18  nop
  02deb1c  ori 3, 31, 0
  02deb20  ori 4, 30, 0
  02deb24  li 6, 6
  02deb28  li 7, 3
  02deb2c  li 8, 0
  02deb30  bl 0x10ad80
  02deb34  nop
  02deb38  li 3, 127
  02deb3c  stb 3, 32(31)
  02deb40  b 0x2df128
  02deb44  cmpwi 3, 0
  02deb48  bt 2, 0x2df128
  02deb4c  lbz 3, 32(31)
  02deb50  cmpwi 3, 127
  02deb54  bf 0, 0x2df128
  02deb58  lfs 1, 16(31)
  02deb5c  lfs 2, 128(29)
  02deb60  lfs 3, 20(31)
  02deb64  lfs 4, 132(29)
  02deb68  fsubs 1, 1, 2
  02deb6c  fsubs 2, 3, 4
  02deb70  bl 0x5e8338
  02deb74  nop
  02deb78  ori 3, 31, 0
  02deb7c  ori 4, 30, 0
  02deb80  li 6, 6
  02deb84  li 7, 3
  02deb88  li 8, 0
  02deb8c  bl 0x10ad80
  02deb90  nop
  02deb94  li 3, 127
  02deb98  stb 3, 32(31)
  02deb9c  b 0x2df128
  02deba0  cmpwi 3, 0
  02deba4  bt 2, 0x2df128
  02deba8  lbz 3, 32(31)
  02debac  cmpwi 1, 3, 127
  02debb0  cmpwi 3, 24
  02debb4  cror 2, 2, 6
  02debb8  bt 2, 0x2df128
  02debbc  cmpwi 3, 25
  02debc0  bf 2, 0x2debd0
  02debc4  li 3, 0
  02debc8  sth 3, 116(30)
  02debcc  b 0x2df128
  02debd0  lfs 1, 16(31)
  02debd4  lfs 2, 128(29)
  02debd8  lfs 3, 20(31)
  02debdc  lfs 4, 132(29)
  02debe0  fsubs 1, 1, 2
  02debe4  fsubs 2, 3, 4
  02debe8  bl 0x5e8338
  02debec  nop
  02debf0  ori 3, 31, 0
  02debf4  ori 4, 30, 0
  02debf8  li 6, 6
  02debfc  li 7, 3
  02dec00  li 8, 0
  02dec04  bl 0x10ad80
  02dec08  nop
  02dec0c  lhz 3, 120(30)
  02dec10  addic 3, 3, -1
  02dec14  extsh 4, 3
  02dec18  cmpwi 4, 0
  02dec1c  sth 3, 120(30)
  02dec20  bf 2, 0x2dec30
  02dec24  li 3, 127
  02dec28  stb 3, 32(31)
  02dec2c  b 0x2df128
  02dec30  li 3, 24
  02dec34  li 4, 0
  02dec38  stb 3, 32(31)
  02dec3c  sth 4, 116(30)
  02dec40  b 0x2df128
  02dec44  cmpwi 3, 0
  02dec48  bt 2, 0x2df128
  02dec4c  lbz 3, 32(31)
  02dec50  cmpwi 1, 3, 127
  02dec54  cmpwi 3, 34
  02dec58  cror 2, 2, 6
  02dec5c  bt 2, 0x2df128
  02dec60  lhz 3, 120(30)
  02dec64  addic 3, 3, -1
  02dec68  extsh 4, 3
  02dec6c  cmpwi 4, 0
  02dec70  sth 3, 120(30)
  02dec74  bf 2, 0x2decc0
  02dec78  li 3, 127
  02dec7c  stb 3, 32(31)
  02dec80  lfs 1, 16(31)
  02dec84  lfs 2, 128(29)
  02dec88  lfs 3, 20(31)
  02dec8c  lfs 4, 132(29)
  02dec90  fsubs 1, 1, 2
  02dec94  fsubs 2, 3, 4
  02dec98  bl 0x5e8338
  02dec9c  nop
  02deca0  ori 3, 31, 0
  02deca4  ori 4, 30, 0
  02deca8  li 6, 6
  02decac  li 7, 3
  02decb0  li 8, 0
  02decb4  bl 0x10ad80
  02decb8  nop
  02decbc  b 0x2df128
  02decc0  li 3, 34
  02decc4  stb 3, 32(31)
  02decc8  lfs 1, 16(31)
  02deccc  lfs 2, 128(29)
  02decd0  lfs 3, 20(31)
  02decd4  lfs 4, 132(29)
  02decd8  fsubs 1, 1, 2
  02decdc  fsubs 2, 3, 4
  02dece0  bl 0x5e8338
  02dece4  nop
  02dece8  ori 3, 31, 0
  02decec  ori 4, 30, 0
  02decf0  li 6, 5
  02decf4  li 7, 3
  02decf8  li 8, 0
  02decfc  bl 0x10ad80
  02ded00  nop
  02ded04  b 0x2df128
  02ded08  cmpwi 3, 0
  02ded0c  bt 2, 0x2df128
  02ded10  lbz 3, 32(31)
  02ded14  cmpwi 1, 3, 44
  02ded18  cmpwi 3, 45
  02ded1c  cror 2, 2, 6
  02ded20  bt 2, 0x2df128
  02ded24  cmpwi 3, 127
  02ded28  bt 2, 0x2df128
  02ded2c  lhz 3, 120(30)
  02ded30  addic 3, 3, -1
  02ded34  extsh 4, 3
  02ded38  cmpwi 4, 0
  02ded3c  sth 3, 120(30)
  02ded40  bf 2, 0x2ded8c
  02ded44  li 3, 127
  02ded48  stb 3, 32(31)
  02ded4c  lfs 1, 16(31)
  02ded50  lfs 2, 128(29)
  02ded54  lfs 3, 20(31)
  02ded58  lfs 4, 132(29)
  02ded5c  fsubs 1, 1, 2
  02ded60  fsubs 2, 3, 4
  02ded64  bl 0x5e8338
  02ded68  nop
  02ded6c  ori 3, 31, 0
  02ded70  ori 4, 30, 0
  02ded74  li 6, 6
  02ded78  li 7, 3
  02ded7c  li 8, 0
  02ded80  bl 0x10ad80
  02ded84  nop
  02ded88  b 0x2df128
  02ded8c  li 3, 44
  02ded90  stb 3, 32(31)
  02ded94  lfs 1, 16(31)
  02ded98  lfs 2, 128(29)
  02ded9c  lfs 3, 20(31)
  02deda0  lfs 4, 132(29)
  02deda4  fsubs 1, 1, 2
  02deda8  fsubs 2, 3, 4
  02dedac  bl 0x5e8338
  02dedb0  nop
  02dedb4  ori 3, 31, 0
  02dedb8  ori 4, 30, 0
  02dedbc  li 6, 5
  02dedc0  li 7, 3
  02dedc4  li 8, 0
  02dedc8  bl 0x10ad80
  02dedcc  nop
  02dedd0  b 0x2df128
  02dedd4  cmpwi 3, 0
  02dedd8  bt 2, 0x2df128
  02deddc  lbz 3, 32(31)
  02dede0  cmpwi 3, 127
  02dede4  bt 2, 0x2df128
  02dede8  li 3, 127
  02dedec  stb 3, 32(31)
  02dedf0  lfs 1, 16(31)
  02dedf4  lfs 2, 128(29)
  02dedf8  lfs 3, 20(31)
  02dedfc  lfs 4, 132(29)
  02dee00  fsubs 1, 1, 2
  02dee04  fsubs 2, 3, 4
  02dee08  bl 0x5e8338
  02dee0c  nop
  02dee10  ori 3, 31, 0
  02dee14  ori 4, 30, 0
  02dee18  li 6, 6
  02dee1c  li 7, 3
  02dee20  li 8, 0
  02dee24  bl 0x10ad80
  02dee28  nop
  02dee2c  b 0x2df128
  02dee30  cmpwi 3, 0
  02dee34  bt 2, 0x2df128
  02dee38  lbz 3, 32(31)
  02dee3c  cmpwi 1, 3, 127
  02dee40  cmpwi 3, 83
  02dee44  cror 2, 2, 6
  02dee48  bt 2, 0x2df128
  02dee4c  lhz 3, 120(30)
  02dee50  addic 3, 3, -1
  02dee54  extsh 4, 3
  02dee58  cmpwi 4, 0
  02dee5c  sth 3, 120(30)
  02dee60  bf 2, 0x2deeac
  02dee64  li 3, 127
  02dee68  stb 3, 32(31)
  02dee6c  lfs 1, 16(31)
  02dee70  lfs 2, 128(29)
  02dee74  lfs 3, 20(31)
  02dee78  lfs 4, 132(29)
  02dee7c  fsubs 1, 1, 2
  02dee80  fsubs 2, 3, 4
  02dee84  bl 0x5e8338
  02dee88  nop
  02dee8c  ori 3, 31, 0
  02dee90  ori 4, 30, 0
  02dee94  li 6, 6
  02dee98  li 7, 3
  02dee9c  li 8, 0
  02deea0  bl 0x10ad80
  02deea4  nop
  02deea8  b 0x2df128
  02deeac  li 3, 83
  02deeb0  stb 3, 32(31)
  02deeb4  lfs 1, 16(31)
  02deeb8  lfs 2, 128(29)
  02deebc  lfs 3, 20(31)
  02deec0  lfs 4, 132(29)
  02deec4  fsubs 1, 1, 2
  02deec8  fsubs 2, 3, 4
  02deecc  bl 0x5e8338
  02deed0  nop
  02deed4  ori 3, 31, 0
  02deed8  ori 4, 30, 0
  02deedc  li 6, 5
  02deee0  li 7, 3
  02deee4  li 8, 0
  02deee8  bl 0x10ad80
  02deeec  nop
  02deef0  b 0x2df128
  02deef4  cmpwi 3, 0
  02deef8  bt 2, 0x2df128
  02deefc  lbz 3, 32(31)
  02def00  cmpwi 1, 3, 127
  02def04  cmpwi 3, 93
  02def08  cror 2, 2, 6
  02def0c  bt 2, 0x2df128
  02def10  lwz 4, 8324(29)
  02def14  cmpwi 4, 19
  02def18  bf 2, 0x2def24
  02def1c  cmpwi 3, 92
  02def20  bt 2, 0x2df128
  02def24  lis 3, 46
  02def28  lhz 4, 120(30)
  02def2c  addi 3, 3, -6044
  02def30  addic 4, 4, -1
  02def34  extsh 5, 4
  02def38  sth 4, 120(30)
  02def3c  cmpwi 5, 0
  02def40  lfs 1, 4(3)
  02def44  bf 2, 0x2def9c
  02def48  lfs 2, 24(31)
  02def4c  li 3, 127
  02def50  fadds 1, 2, 1
  02def54  stb 3, 32(31)
  02def58  lfs 2, 16(31)
  02def5c  lfs 3, 20(31)
  02def60  stfs 1, 24(31)
  02def64  lfs 1, 128(29)
  02def68  lfs 4, 132(29)
  02def6c  fsubs 1, 2, 1
  02def70  fsubs 2, 3, 4
  02def74  bl 0x5e8338
  02def78  nop
  02def7c  ori 3, 31, 0
  02def80  ori 4, 30, 0
  02def84  li 6, 6
  02def88  li 7, 3
  02def8c  li 8, 0
  02def90  bl 0x10ad80
  02def94  nop
  02def98  b 0x2df128
  02def9c  lfs 2, 24(31)
  02defa0  li 3, 93
  02defa4  fadds 1, 2, 1
  02defa8  stb 3, 32(31)
  02defac  lfs 2, 16(31)
  02defb0  lfs 3, 20(31)
  02defb4  stfs 1, 24(31)
  02defb8  lfs 1, 128(29)
  02defbc  lfs 4, 132(29)
  02defc0  fsubs 1, 2, 1
  02defc4  fsubs 2, 3, 4
  02defc8  bl 0x5e8338
  02defcc  nop
  02defd0  ori 3, 31, 0
  02defd4  ori 4, 30, 0
  02defd8  li 6, 5
  02defdc  li 7, 3
  02defe0  li 8, 0
  02defe4  bl 0x10ad80
  02defe8  nop
  02defec  b 0x2df128
  02deff0  cmpwi 3, 0
  02deff4  bt 2, 0x2df128
  02deff8  lbz 3, 32(31)
  02deffc  cmpwi 1, 3, 127
  02df000  cmpwi 3, 104
  02df004  cror 2, 2, 6
  02df008  bt 2, 0x2df128
  02df00c  lhz 3, 120(30)
  02df010  addic 3, 3, -1
  02df014  extsh 4, 3
  02df018  cmpwi 4, 0
  02df01c  sth 3, 120(30)
  02df020  bf 2, 0x2df0a8
  02df024  lis 4, 15897
  02df028  li 5, 1
  02df02c  lis 3, 15363
  02df030  ori 4, 4, 39322
  02df034  lis 6, 14851
  02df038  stw 5, 36(30)
  02df03c  ori 3, 3, 4719
  02df040  ori 5, 6, 4719
  02df044  lis 7, 15872
  02df048  stw 4, 24(30)
  02df04c  li 4, 0
  02df050  li 6, 127
  02df054  stw 3, 16(30)
  02df058  stw 5, 20(30)
  02df05c  stw 7, 28(30)
  02df060  stb 4, 61(30)
  02df064  stb 6, 32(31)
  02df068  lfs 1, 16(31)
  02df06c  lfs 2, 128(29)
  02df070  lfs 3, 20(31)
  02df074  lfs 4, 132(29)
  02df078  fsubs 1, 1, 2
  02df07c  fsubs 2, 3, 4
  02df080  bl 0x5e8338
  02df084  nop
  02df088  ori 3, 31, 0
  02df08c  ori 4, 30, 0
  02df090  li 6, 6
  02df094  li 7, 3
  02df098  li 8, 0
  02df09c  bl 0x10ad80
  02df0a0  nop
  02df0a4  b 0x2df128
  02df0a8  lis 3, 15363
  02df0ac  li 4, 1
  02df0b0  ori 3, 3, 4719
  02df0b4  lis 6, 14851
  02df0b8  lis 5, 15872
  02df0bc  stw 4, 36(30)
  02df0c0  ori 6, 6, 4719
  02df0c4  lis 4, 15897
  02df0c8  stw 3, 16(30)
  02df0cc  li 7, 104
  02df0d0  ori 3, 4, 39322
  02df0d4  li 4, 0
  02df0d8  stw 5, 28(30)
  02df0dc  stw 6, 20(30)
  02df0e0  stw 3, 24(30)
  02df0e4  stb 4, 61(30)
  02df0e8  stb 7, 32(31)
  02df0ec  lfs 1, 16(31)
  02df0f0  lfs 2, 128(29)
  02df0f4  lfs 3, 20(31)
  02df0f8  lfs 4, 132(29)
  02df0fc  fsubs 1, 1, 2
  02df100  fsubs 2, 3, 4
  02df104  bl 0x5e8338
  02df108  nop
  02df10c  ori 3, 31, 0
  02df110  ori 4, 30, 0
  02df114  li 6, 5
  02df118  li 7, 3
  02df11c  li 8, 0
  02df120  bl 0x10ad80
  02df124  nop
  02df128  li 4, 255
  02df12c  lbz 3, 32(31)
  02df130  cmpwi 3, 50
  02df134  stb 4, 164(31)
  02df138  cmpwi 1, 3, 24
  02df13c  cmpwi 6, 3, 10
  02df140  cmpwi 7, 3, 1
  02df144  bt 1, 0x2df220
  02df148  bt 5, 0x2df1ac
  02df14c  bt 25, 0x2df17c
  02df150  bt 29, 0x2df168
  02df154  cmpwi 3, -1
  02df158  bf 1, 0x2e2e1c
  02df15c  cmpwi 3, 0
  02df160  bf 1, 0x2df2ec
  02df164  b 0x2df620
  02df168  cmpwi 3, 2
  02df16c  bf 1, 0x2df78c
  02df170  cmpwi 3, 3
  02df174  bf 1, 0x2df74c
  02df178  b 0x2e2e1c
  02df17c  bt 6, 0x2e030c
  02df180  cmpwi 3, 23
  02df184  bt 2, 0x2e0114
  02df188  cmpwi 3, 22
  02df18c  bt 2, 0x2dff68
  02df190  cmpwi 3, 21
  02df194  bt 2, 0x2dfe7c
  02df198  cmpwi 3, 12
  02df19c  bt 2, 0x2dfa98
  02df1a0  cmpwi 3, 11
  02df1a4  bt 2, 0x2df98c
  02df1a8  b 0x2e2e1c
  02df1ac  cmpwi 3, 35
  02df1b0  bt 1, 0x2df1e8
  02df1b4  cmpwi 3, 35
  02df1b8  bt 2, 0x2e08c8
  02df1bc  cmpwi 3, 34
  02df1c0  bt 2, 0x2e0838
  02df1c4  cmpwi 3, 33
  02df1c8  bt 2, 0x2e0640
  02df1cc  cmpwi 3, 32
  02df1d0  bt 2, 0x2e0494
  02df1d4  cmpwi 3, 31
  02df1d8  bt 2, 0x2e03a8
  02df1dc  cmpwi 3, 25
  02df1e0  bt 2, 0x2e0360
  02df1e4  b 0x2e2e1c
  02df1e8  lis 4, 46
  02df1ec  cmpwi 3, 45
  02df1f0  addi 4, 4, -6044
  02df1f4  lfs 30, 8(4)
  02df1f8  bt 2, 0x2e1184
  02df1fc  cmpwi 3, 44
  02df200  bt 2, 0x2e1130
  02df204  cmpwi 3, 43
  02df208  bt 2, 0x2e0e54
  02df20c  cmpwi 3, 42
  02df210  bt 2, 0x2e0bc0
  02df214  cmpwi 3, 41
  02df218  bt 2, 0x2e09ec
  02df21c  b 0x2e2e1c
  02df220  cmpwi 3, 82
  02df224  bt 1, 0x2df28c
  02df228  cmpwi 3, 62
  02df22c  bt 1, 0x2df260
  02df230  cmpwi 3, 53
  02df234  bt 1, 0x2df24c
  02df238  cmpwi 3, 51
  02df23c  bf 1, 0x2e1244
  02df240  cmpwi 3, 52
  02df244  bf 1, 0x2e130c
  02df248  b 0x2e1470
  02df24c  cmpwi 3, 60
  02df250  bf 1, 0x2e2e1c
  02df254  cmpwi 3, 61
  02df258  bf 1, 0x2e15c4
  02df25c  b 0x2e1880
  02df260  cmpwi 3, 82
  02df264  bt 2, 0x2e1ee8
  02df268  cmpwi 3, 81
  02df26c  bt 2, 0x2e1e54
  02df270  cmpwi 3, 72
  02df274  bt 2, 0x2e1c10
  02df278  cmpwi 3, 71
  02df27c  bt 2, 0x2e1b7c
  02df280  cmpwi 3, 63
  02df284  bt 2, 0x2e16b8
  02df288  b 0x2e2e1c
  02df28c  cmpwi 3, 101
  02df290  bt 1, 0x2df2c0
  02df294  cmpwi 3, 101
  02df298  bt 2, 0x2e2618
  02df29c  cmpwi 3, 93
  02df2a0  bt 2, 0x2e25bc
  02df2a4  cmpwi 3, 92
  02df2a8  bt 2, 0x2e2288
  02df2ac  cmpwi 3, 91
  02df2b0  bt 2, 0x2e2194
  02df2b4  cmpwi 3, 83
  02df2b8  bt 2, 0x2e2148
  02df2bc  b 0x2e2e1c
  02df2c0  cmpwi 3, 127
  02df2c4  bt 2, 0x2e2df0
  02df2c8  cmpwi 3, 105
  02df2cc  bt 2, 0x2e2ccc
  02df2d0  cmpwi 3, 104
  02df2d4  bt 2, 0x2e2bb8
  02df2d8  cmpwi 3, 103
  02df2dc  bt 2, 0x2e2968
  02df2e0  cmpwi 3, 102
  02df2e4  bt 2, 0x2e2704
  02df2e8  b 0x2e2e1c
  02df2ec  li 5, 1
  02df2f0  lis 4, 15820
  02df2f4  lis 3, 15363
  02df2f8  ori 4, 4, 52429
  02df2fc  lis 6, 14851
  02df300  stw 5, 36(30)
  02df304  ori 5, 3, 4719
  02df308  ori 6, 6, 4719
  02df30c  lhz 3, 118(30)
  02df310  li 7, 0
  02df314  stw 4, 24(30)
  02df318  stw 5, 16(30)
  02df31c  stw 6, 20(30)
  02df320  cmpwi 3, 0
  02df324  stw 4, 28(30)
  02df328  cmpwi 1, 3, 1
  02df32c  cmpwi 6, 3, 2
  02df330  stb 7, 61(30)
  02df334  cmpwi 7, 3, 3
  02df338  bf 2, 0x2df36c
  02df33c  li 3, 1
  02df340  lbz 4, 83(31)
  02df344  cmpwi 4, 3
  02df348  stb 3, 32(31)
  02df34c  bt 2, 0x2e2e1c
  02df350  ori 3, 31, 0
  02df354  li 4, 3
  02df358  li 5, 0
  02df35c  li 6, 3
  02df360  bl 0xfddc0
  02df364  nop
  02df368  b 0x2e2e1c
  02df36c  bf 6, 0x2df3a0
  02df370  li 3, 11
  02df374  lbz 4, 83(31)
  02df378  cmpwi 4, 3
  02df37c  stb 3, 32(31)
  02df380  bt 2, 0x2e2e1c
  02df384  ori 3, 31, 0
  02df388  li 4, 3
  02df38c  li 5, 0
  02df390  li 6, 3
  02df394  bl 0xfddc0
  02df398  nop
  02df39c  b 0x2e2e1c
  02df3a0  bf 26, 0x2df3dc
  02df3a4  li 3, 21
  02df3a8  lbz 4, 83(31)
  02df3ac  cmpwi 4, 3
  02df3b0  stb 3, 32(31)
  02df3b4  bt 2, 0x2df3d0
  02df3b8  ori 3, 31, 0
  02df3bc  li 4, 3
  02df3c0  li 5, 0
  02df3c4  li 6, 3
  02df3c8  bl 0xfddc0
  02df3cc  nop
  02df3d0  li 3, 2
  02df3d4  sth 3, 120(30)
  02df3d8  b 0x2e2e1c
  02df3dc  bf 30, 0x2df418
  02df3e0  li 3, 31
  02df3e4  lbz 4, 83(31)
  02df3e8  cmpwi 4, 3
  02df3ec  stb 3, 32(31)
  02df3f0  bt 2, 0x2df40c
  02df3f4  ori 3, 31, 0
  02df3f8  li 4, 3
  02df3fc  li 5, 0
  02df400  li 6, 3
  02df404  bl 0xfddc0
  02df408  nop
  02df40c  li 3, 3
  02df410  sth 3, 120(30)
  02df414  b 0x2e2e1c
  02df418  cmpwi 3, 4
  02df41c  bf 2, 0x2df458
  02df420  li 3, 41
  02df424  lbz 4, 83(31)
  02df428  cmpwi 4, 3
  02df42c  stb 3, 32(31)
  02df430  bt 2, 0x2df44c
  02df434  ori 3, 31, 0
  02df438  li 4, 3
  02df43c  li 5, 0
  02df440  li 6, 3
  02df444  bl 0xfddc0
  02df448  nop
  02df44c  li 3, 1
  02df450  sth 3, 120(30)
  02df454  b 0x2e2e1c
  02df458  cmpwi 3, 5
  02df45c  bf 2, 0x2df4ac
  02df460  li 3, 51
  02df464  lis 4, 46
  02df468  addi 4, 4, -6044
  02df46c  stb 3, 32(31)
  02df470  lwz 3, 36(31)
  02df474  lfs 1, 12(4)
  02df478  lfs 2, 36(3)
  02df47c  lbz 3, 83(31)
  02df480  fmuls 1, 2, 1
  02df484  cmpwi 3, 11
  02df488  stfs 1, 44(31)
  02df48c  bt 2, 0x2e2e1c
  02df490  ori 3, 31, 0
  02df494  li 4, 11
  02df498  li 5, 0
  02df49c  li 6, 3
  02df4a0  bl 0xfddc0
  02df4a4  nop
  02df4a8  b 0x2e2e1c
  02df4ac  cmpwi 3, 6
  02df4b0  bf 2, 0x2df520
  02df4b4  lis 3, 0
  02df4b8  lhz 5, 52(31)
  02df4bc  li 4, 61
  02df4c0  ori 3, 3, 32768
  02df4c4  or 3, 5, 3
  02df4c8  stb 4, 32(31)
  02df4cc  lbz 4, 83(31)
  02df4d0  cmpwi 4, 3
  02df4d4  sth 3, 52(31)
  02df4d8  bt 2, 0x2df4f4
  02df4dc  ori 3, 31, 0
  02df4e0  li 4, 3
  02df4e4  li 5, 0
  02df4e8  li 6, 3
  02df4ec  bl 0xfddc0
  02df4f0  nop
  02df4f4  addic 3, 30, 128
  02df4f8  bl 0x136724
  02df4fc  nop
  02df500  li 5, 0
  02df504  lwz 4, 144(30)
  02df508  addic 3, 31, 16
  02df50c  addic 4, 4, 16
  02df510  stw 5, 128(30)
  02df514  bl 0x5e7e98
  02df518  nop
  02df51c  b 0x2e2e1c
  02df520  cmpwi 3, 7
  02df524  bf 2, 0x2df558
  02df528  li 3, 71
  02df52c  lbz 4, 83(31)
  02df530  cmpwi 4, 3
  02df534  stb 3, 32(31)
  02df538  bt 2, 0x2e2e1c
  02df53c  ori 3, 31, 0
  02df540  li 4, 3
  02df544  li 5, 0
  02df548  li 6, 3
  02df54c  bl 0xfddc0
  02df550  nop
  02df554  b 0x2e2e1c
  02df558  cmpwi 3, 8
  02df55c  bf 2, 0x2df598
  02df560  li 3, 81
  02df564  li 4, 8
  02df568  stb 3, 32(31)
  02df56c  sth 4, 120(30)
  02df570  lbz 3, 83(31)
  02df574  cmpwi 3, 3
  02df578  bt 2, 0x2e2e1c
  02df57c  ori 3, 31, 0
  02df580  li 4, 3
  02df584  li 5, 0
  02df588  li 6, 3
  02df58c  bl 0xfddc0
  02df590  nop
  02df594  b 0x2e2e1c
  02df598  cmpwi 3, 9
  02df59c  bf 2, 0x2df5e0
  02df5a0  li 3, 91
  02df5a4  lbz 4, 83(31)
  02df5a8  cmpwi 4, 3
  02df5ac  stb 3, 32(31)
  02df5b0  bt 2, 0x2df5cc
  02df5b4  ori 3, 31, 0
  02df5b8  li 4, 3
  02df5bc  li 5, 0
  02df5c0  li 6, 3
  02df5c4  bl 0xfddc0
  02df5c8  nop
  02df5cc  li 3, 3
  02df5d0  li 4, 120
  02df5d4  sth 3, 120(30)
  02df5d8  sth 4, 116(30)
  02df5dc  b 0x2e2e1c
  02df5e0  cmpwi 3, 10
  02df5e4  bf 2, 0x2e2e1c
  02df5e8  li 3, 101
  02df5ec  lbz 4, 83(31)
  02df5f0  cmpwi 4, 3
  02df5f4  stb 3, 32(31)
  02df5f8  bt 2, 0x2df614
  02df5fc  ori 3, 31, 0
  02df600  li 4, 3
  02df604  li 5, 0
  02df608  li 6, 3
  02df60c  bl 0xfddc0
  02df610  nop
  02df614  li 3, 3
  02df618  sth 3, 120(30)
  02df61c  b 0x2e2e1c
  02df620  lfs 1, 128(29)
  02df624  lfs 2, 16(31)
  02df628  lfs 3, 132(29)
  02df62c  lfs 4, 20(31)
  02df630  fsubs 1, 1, 2
  02df634  fsubs 2, 3, 4
  02df638  bl 0x5e8338
  02df63c  nop
  02df640  lis 3, 46
  02df644  addic 5, 30, 112
  02df648  addi 26, 3, -6044
  02df64c  ori 3, 31, 0
  02df650  lfs 2, 16(26)
  02df654  lfs 3, 20(26)
  02df658  lfs 4, 24(26)
  02df65c  bl 0xff2e8
  02df660  nop
  02df664  addic 28, 31, 16
  02df668  addic 27, 29, 128
  02df66c  ori 3, 28, 0
  02df670  ori 4, 27, 0
  02df674  bl 0x5e8588
  02df678  nop
  02df67c  lfs 2, 28(26)
  02df680  fcmpu 0, 1, 2
  02df684  cror 6, 1, 2
  02df688  bt 6, 0x2df6d0
  02df68c  lhz 3, 116(30)
  02df690  extsh 3, 3
  02df694  addic 4, 3, 1
  02df698  cmpwi 3, 60
  02df69c  sth 4, 116(30)
  02df6a0  bf 1, 0x2df6d0
  02df6a4  li 3, 2
  02df6a8  lbz 4, 83(31)
  02df6ac  cmpwi 4, 4
  02df6b0  stb 3, 32(31)
  02df6b4  bt 2, 0x2df6d0
  02df6b8  ori 3, 31, 0
  02df6bc  li 4, 4
  02df6c0  li 5, 0
  02df6c4  li 6, 3
  02df6c8  bl 0xfddc0
  02df6cc  nop
  02df6d0  ori 3, 28, 0
  02df6d4  ori 4, 27, 0
  02df6d8  bl 0x5e8588
  02df6dc  nop
  02df6e0  lis 3, 46
  02df6e4  lbz 28, 83(31)
  02df6e8  addi 3, 3, -6044
  02df6ec  lfs 2, 32(3)
  02df6f0  fcmpu 0, 1, 2
  02df6f4  cror 6, 1, 2
  02df6f8  bt 6, 0x2e2e1c
  02df6fc  lwz 29, 8324(29)
  02df700  cmpwi 1, 29, 20
  02df704  cmpwi 29, 19
  02df708  cror 2, 2, 6
  02df70c  bt 2, 0x2df720
  02df710  cmpwi 29, 21
  02df714  bt 2, 0x2df720
  02df718  cmpwi 29, 23
  02df71c  bf 2, 0x2e2e1c
  02df720  li 3, 3
  02df724  cmpwi 28, 2
  02df728  stb 3, 32(31)
  02df72c  bt 2, 0x2e2e1c
  02df730  ori 3, 31, 0
  02df734  li 4, 2
  02df738  li 5, 0
  02df73c  li 6, 3
  02df740  bl 0xfddc0
  02df744  nop
  02df748  b 0x2e2e1c
  02df74c  lbz 3, 112(31)
  02df750  rlwinm 3, 3, 0, 30, 30
  02df754  cmpwi 3, 0
  02df758  bt 2, 0x2e2e1c
  02df75c  li 3, 1
  02df760  lbz 4, 83(31)
  02df764  cmpwi 4, 3
  02df768  stb 3, 32(31)
  02df76c  bt 2, 0x2e2e1c
  02df770  ori 3, 31, 0
  02df774  li 4, 3
  02df778  li 5, 0
  02df77c  li 6, 3
  02df780  bl 0xfddc0
  02df784  nop
  02df788  b 0x2e2e1c
  02df78c  lbz 3, 82(31)
  02df790  lbz 4, 83(31)
  02df794  cmpw 3, 4
  02df798  bf 2, 0x2df944
  02df79c  ori 3, 31, 0
  02df7a0  bl 0xefe40
  02df7a4  nop
  02df7a8  lis 3, 46
  02df7ac  addi 3, 3, -6044
  02df7b0  lfs 2, 36(3)
  02df7b4  fcmpu 0, 1, 2
  02df7b8  bt 0, 0x2df944
  02df7bc  ori 3, 31, 0
  02df7c0  bl 0xefe40
  02df7c4  nop
  02df7c8  lis 3, 46
  02df7cc  addi 3, 3, -6044
  02df7d0  lfs 2, 40(3)
  02df7d4  fcmpu 0, 1, 2
  02df7d8  cror 6, 1, 2
  02df7dc  bt 6, 0x2df944
  02df7e0  lfs 1, 24(31)
  02df7e4  lfs 2, 136(29)
  02df7e8  lis 3, 46
  02df7ec  fsubs 1, 1, 2
  02df7f0  addi 3, 3, -6044
  02df7f4  lfs 2, 44(3)
  02df7f8  fabs 1, 1
  02df7fc  fcmpu 0, 1, 2
  02df800  cror 6, 1, 2
  02df804  bt 6, 0x2df944
  02df808  addic 3, 31, 16
  02df80c  addic 4, 29, 128
  02df810  bl 0x5e8588
  02df814  nop
  02df818  lis 3, 46
  02df81c  addi 3, 3, -6044
  02df820  lfs 2, 28(3)
  02df824  fcmpu 0, 1, 2
  02df828  cror 6, 1, 2
  02df82c  bt 6, 0x2df944
  02df830  lis 3, 149
  02df834  lfs 1, 16(31)
  02df838  addic 3, 3, 5056
  02df83c  lfs 2, 20(31)
  02df840  lfs 31, 344(3)
  02df844  lfs 3, 320(3)
  02df848  lfs 4, 324(3)
  02df84c  fsubs 1, 1, 3
  02df850  fsubs 2, 2, 4
  02df854  bl 0x5e8338
  02df858  nop
  02df85c  fmr 2, 1
  02df860  fmr 1, 31
  02df864  bl 0x5026a0
  02df868  nop
  02df86c  lis 3, 46
  02df870  addi 3, 3, -6044
  02df874  lfs 2, 48(3)
  02df878  fcmpu 0, 1, 2
  02df87c  cror 6, 1, 2
  02df880  bt 6, 0x2df944
  02df884  lfs 1, 128(29)
  02df888  lfs 2, 16(31)
  02df88c  lfs 3, 132(29)
  02df890  lfs 4, 20(31)
  02df894  fsubs 1, 1, 2
  02df898  fsubs 2, 3, 4
  02df89c  bl 0x5e8338
  02df8a0  nop
  02df8a4  lfs 2, 72(31)
  02df8a8  bl 0x5026a0
  02df8ac  nop
  02df8b0  lis 3, 46
  02df8b4  addi 3, 3, -6044
  02df8b8  lfs 2, 52(3)
  02df8bc  fcmpu 0, 1, 2
  02df8c0  cror 6, 1, 2
  02df8c4  bt 6, 0x2df944
  02df8c8  lfs 1, 72(31)
  02df8cc  bl 0x5e8078
  02df8d0  nop
  02df8d4  lfs 2, 72(31)
  02df8d8  stfs 1, 112(1)
  02df8dc  fmr 1, 2
  02df8e0  bl 0x5e8128
  02df8e4  nop
  02df8e8  li 3, 0
  02df8ec  stfs 1, 116(1)
  02df8f0  addic 28, 1, 128
  02df8f4  lwz 4, 8320(29)
  02df8f8  stw 3, 120(1)
  02df8fc  ori 3, 28, 0
  02df900  addic 4, 4, 16
  02df904  bl 0x5e7e98
  02df908  nop
  02df90c  lis 3, 46
  02df910  lfs 1, 136(1)
  02df914  ori 4, 31, 0
  02df918  addi 6, 3, -6044
  02df91c  addic 8, 1, 112
  02df920  li 5, 1
  02df924  ori 7, 28, 0
  02df928  lfs 2, 56(6)
  02df92c  lwz 3, 8320(29)
  02df930  fadds 1, 1, 2
  02df934  stfs 1, 136(1)
  02df938  lfs 1, 60(6)
  02df93c  bl 0x105c08
  02df940  nop
  02df944  lbz 3, 112(31)
  02df948  rlwinm 3, 3, 0, 30, 30
  02df94c  cmpwi 3, 0
  02df950  bt 2, 0x2e2e1c
  02df954  li 3, 1
  02df958  li 4, 0
  02df95c  stb 3, 32(31)
  02df960  sth 4, 116(30)
  02df964  lbz 3, 83(31)
  02df968  cmpwi 3, 3
  02df96c  bt 2, 0x2e2e1c
  02df970  ori 3, 31, 0
  02df974  li 4, 3
  02df978  li 5, 0
  02df97c  li 6, 3
  02df980  bl 0xfddc0
  02df984  nop
  02df988  b 0x2e2e1c
  02df98c  lfs 1, 128(29)
  02df990  lfs 2, 16(31)
  02df994  lfs 3, 132(29)
  02df998  fsubs 1, 1, 2
  02df99c  lfs 4, 20(31)
  02df9a0  fsubs 2, 3, 4
  02df9a4  bl 0x5e8338
  02df9a8  nop
  02df9ac  lfs 31, 72(31)
  02df9b0  lfs 2, 128(29)
  02df9b4  fsubs 31, 1, 31
  02df9b8  lfs 1, 16(31)
  02df9bc  lfs 3, 132(29)
  02df9c0  lfs 4, 20(31)
  02df9c4  fsubs 1, 2, 1
  02df9c8  fsubs 2, 3, 4
  02df9cc  bl 0x5e8338
  02df9d0  nop
  02df9d4  lis 3, 46
  02df9d8  addic 5, 30, 112
  02df9dc  addi 28, 3, -6044
  02df9e0  ori 3, 31, 0
  02df9e4  lfs 2, 16(28)
  02df9e8  lfs 3, 20(28)
  02df9ec  lfs 4, 24(28)
  02df9f0  bl 0xff2e8
  02df9f4  nop
  02df9f8  addic 3, 31, 16
  02df9fc  addic 4, 29, 128
  02dfa00  bl 0x5e8588
  02dfa04  nop
  02dfa08  lfs 2, 64(28)
  02dfa0c  fcmpu 0, 1, 2
  02dfa10  cror 6, 1, 2
  02dfa14  bt 6, 0x2e2e1c
  02dfa18  lis 3, 46
  02dfa1c  addi 3, 3, -6044
  02dfa20  lfs 1, 44(3)
  02dfa24  fcmpu 0, 31, 1
  02dfa28  cror 6, 1, 2
  02dfa2c  bt 6, 0x2e2e1c
  02dfa30  lis 3, 46
  02dfa34  addi 3, 3, -6044
  02dfa38  lfs 1, 68(3)
  02dfa3c  fcmpu 0, 31, 1
  02dfa40  cror 6, 0, 2
  02dfa44  bt 6, 0x2e2e1c
  02dfa48  lhz 3, 116(30)
  02dfa4c  extsh 3, 3
  02dfa50  addic 4, 3, 1
  02dfa54  cmpwi 3, 20
  02dfa58  sth 4, 116(30)
  02dfa5c  bf 1, 0x2e2e1c
  02dfa60  li 3, 0
  02dfa64  li 4, 12
  02dfa68  sth 3, 116(30)
  02dfa6c  lbz 3, 83(31)
  02dfa70  stb 4, 32(31)
  02dfa74  cmpwi 3, 8
  02dfa78  bt 2, 0x2e2e1c
  02dfa7c  ori 3, 31, 0
  02dfa80  li 4, 8
  02dfa84  li 5, 0
  02dfa88  li 6, 3
  02dfa8c  bl 0xfddc0
  02dfa90  nop
  02dfa94  b 0x2e2e1c
  02dfa98  lfs 1, 128(29)
  02dfa9c  lfs 2, 16(31)
  02dfaa0  lfs 3, 132(29)
  02dfaa4  lfs 4, 20(31)
  02dfaa8  fsubs 1, 1, 2
  02dfaac  fsubs 2, 3, 4
  02dfab0  bl 0x5e8338
  02dfab4  nop
  02dfab8  lis 3, 46
  02dfabc  addic 5, 30, 112
  02dfac0  addi 4, 3, -6044
  02dfac4  ori 3, 31, 0
  02dfac8  lfs 2, 16(4)
  02dfacc  lfs 3, 20(4)
  02dfad0  lfs 4, 72(4)
  02dfad4  bl 0xff2e8
  02dfad8  nop
  02dfadc  lbz 4, 83(31)
  02dfae0  lbz 3, 82(31)
  02dfae4  cmpw 3, 4
  02dfae8  bf 2, 0x2dfb28
  02dfaec  lbz 5, 112(31)
  02dfaf0  cmpwi 6, 4, 7
  02dfaf4  rlwinm 5, 5, 0, 30, 30
  02dfaf8  cmpwi 5, 0
  02dfafc  bt 2, 0x2dfb28
  02dfb00  cmpwi 1, 4, 8
  02dfb04  bf 26, 0x2dfb28
  02dfb08  bt 6, 0x2dfe18
  02dfb0c  ori 3, 31, 0
  02dfb10  li 4, 8
  02dfb14  li 5, 0
  02dfb18  li 6, 3
  02dfb1c  bl 0xfddc0
  02dfb20  nop
  02dfb24  b 0x2dfe18
  02dfb28  xor 3, 3, 4
  02dfb2c  cmpwi 3, 0
  02dfb30  bf 2, 0x2dfdc0
  02dfb34  ori 3, 31, 0
  02dfb38  bl 0xefe40
  02dfb3c  nop
  02dfb40  lis 3, 46
  02dfb44  addi 4, 3, -6044
  02dfb48  lbz 3, 83(31)
  02dfb4c  lfs 2, 76(4)
  02dfb50  fcmpu 0, 1, 2
  02dfb54  bt 2, 0x2dfb80
  02dfb58  ori 3, 31, 0
  02dfb5c  bl 0xefe40
  02dfb60  nop
  02dfb64  lis 3, 46
  02dfb68  addi 3, 3, -6044
  02dfb6c  lfs 2, 80(3)
  02dfb70  lbz 4, 83(31)
  02dfb74  fcmpu 0, 1, 2
  02dfb78  ori 3, 4, 0
  02dfb7c  bf 2, 0x2dfdc0
  02dfb80  ori 4, 3, 0
  02dfb84  cmpwi 4, 8
  02dfb88  bf 2, 0x2dfdc0
  02dfb8c  lis 3, 46
  02dfb90  li 26, 0
  02dfb94  addi 27, 3, -6044
  02dfb98  lis 6, 16256
  02dfb9c  addic 28, 1, 144
  02dfba0  ori 3, 31, 0
  02dfba4  li 4, 1
  02dfba8  lfs 1, 84(27)
  02dfbac  stw 26, 192(1)
  02dfbb0  ori 5, 28, 0
  02dfbb4  stw 26, 196(1)
  02dfbb8  fmr 31, 1
  02dfbbc  stw 26, 200(1)
  02dfbc0  stw 6, 204(1)
  02dfbc4  bl 0xf1114
  02dfbc8  nop
  02dfbcc  lfs 1, 44(27)
  02dfbd0  lfs 2, 152(1)
  02dfbd4  lfs 3, 72(31)
  02dfbd8  fadds 1, 2, 1
  02dfbdc  stfs 1, 152(1)
  02dfbe0  lfs 30, 88(27)
  02dfbe4  fadds 1, 3, 30
  02dfbe8  bl 0x5e8078
  02dfbec  nop
  02dfbf0  lfs 29, 92(27)
  02dfbf4  lfs 2, 72(31)
  02dfbf8  fmuls 3, 1, 29
  02dfbfc  fadds 1, 2, 30
  02dfc00  stfs 3, 160(1)
  02dfc04  bl 0x5e8128
  02dfc08  nop
  02dfc0c  fmuls 1, 1, 29
  02dfc10  addic 25, 1, 176
  02dfc14  addic 24, 1, 160
  02dfc18  stw 26, 168(1)
  02dfc1c  ori 3, 25, 0
  02dfc20  ori 4, 24, 0
  02dfc24  ori 5, 28, 0
  02dfc28  stfs 1, 164(1)
  02dfc2c  bl 0x5e7f54
  02dfc30  nop
  02dfc34  addic 23, 1, 192
  02dfc38  fmr 1, 31
  02dfc3c  lis 7, 32
  02dfc40  ori 4, 25, 0
  02dfc44  ori 3, 23, 0
  02dfc48  ori 6, 31, 0
  02dfc4c  ori 7, 7, 65535
  02dfc50  bl 0x299400
  02dfc54  nop
  02dfc58  lfs 30, 96(27)
  02dfc5c  lfs 2, 72(31)
  02dfc60  ori 22, 3, 0
  02dfc64  fadds 1, 2, 30
  02dfc68  bl 0x5e8078
  02dfc6c  nop
  02dfc70  lfs 29, 100(27)
  02dfc74  lis 27, 114
  02dfc78  lfs 2, -3064(27)
  02dfc7c  lwz 3, 120(22)
  02dfc80  fmuls 2, 2, 29
  02dfc84  fmuls 1, 2, 1
  02dfc88  stfs 1, 32(3)
  02dfc8c  lfs 1, 72(31)
  02dfc90  fadds 1, 1, 30
  02dfc94  bl 0x5e8128
  02dfc98  nop
  02dfc9c  lfs 2, -3064(27)
  02dfca0  li 21, 1
  02dfca4  lwz 6, 120(22)
  02dfca8  ori 3, 25, 0
  02dfcac  fmuls 2, 2, 29
  02dfcb0  ori 4, 28, 0
  02dfcb4  ori 5, 24, 0
  02dfcb8  fmuls 1, 2, 1
  02dfcbc  stfs 1, 36(6)
  02dfcc0  lwz 6, 120(22)
  02dfcc4  stw 26, 40(6)
  02dfcc8  stb 21, 32(22)
  02dfccc  bl 0x5e81f0
  02dfcd0  nop
  02dfcd4  lis 7, 32
  02dfcd8  fmr 1, 31
  02dfcdc  ori 3, 23, 0
  02dfce0  ori 4, 25, 0
  02dfce4  ori 6, 31, 0
  02dfce8  ori 7, 7, 65535
  02dfcec  bl 0x299400
  02dfcf0  nop
  02dfcf4  lfs 1, 72(31)
  02dfcf8  ori 25, 3, 0
  02dfcfc  fsubs 1, 1, 30
  02dfd00  bl 0x5e8078
  02dfd04  nop
  02dfd08  lfs 2, -3064(27)
  02dfd0c  lwz 3, 120(25)
  02dfd10  fmuls 2, 2, 29
  02dfd14  fmuls 1, 2, 1
  02dfd18  stfs 1, 32(3)
  02dfd1c  lfs 1, 72(31)
  02dfd20  fsubs 1, 1, 30
  02dfd24  bl 0x5e8128
  02dfd28  nop
  02dfd2c  lfs 2, -3064(27)
  02dfd30  lis 7, 32
  02dfd34  lwz 5, 120(25)
  02dfd38  ori 3, 23, 0
  02dfd3c  fmuls 2, 2, 29
  02dfd40  ori 4, 28, 0
  02dfd44  ori 6, 31, 0
  02dfd48  ori 7, 7, 65535
  02dfd4c  fmuls 2, 2, 1
  02dfd50  fmr 1, 31
  02dfd54  stfs 2, 36(5)
  02dfd58  lwz 5, 120(25)
  02dfd5c  stw 26, 40(5)
  02dfd60  stb 21, 32(25)
  02dfd64  bl 0x299400
  02dfd68  nop
  02dfd6c  lfs 1, 72(31)
  02dfd70  ori 28, 3, 0
  02dfd74  bl 0x5e8078
  02dfd78  nop
  02dfd7c  lfs 2, -3064(27)
  02dfd80  lwz 3, 120(28)
  02dfd84  fmuls 2, 2, 29
  02dfd88  fmuls 1, 2, 1
  02dfd8c  stfs 1, 32(3)
  02dfd90  lfs 1, 72(31)
  02dfd94  bl 0x5e8128
  02dfd98  nop
  02dfd9c  lfs 2, -3064(27)
  02dfda0  lwz 3, 120(28)
  02dfda4  fmuls 2, 2, 29
  02dfda8  fmuls 1, 2, 1
  02dfdac  stfs 1, 36(3)
  02dfdb0  lwz 3, 120(28)
  02dfdb4  stw 26, 40(3)
  02dfdb8  stb 21, 32(28)
  02dfdbc  b 0x2dfe18
  02dfdc0  lbz 3, 82(31)
  02dfdc4  cmpw 3, 4
  02dfdc8  bf 2, 0x2dfe18
  02dfdcc  lbz 3, 112(31)
  02dfdd0  cmpwi 1, 4, 9
  02dfdd4  rlwinm 3, 3, 0, 30, 30
  02dfdd8  cmpwi 3, 0
  02dfddc  crorc 2, 2, 6
  02dfde0  bt 2, 0x2dfe18
  02dfde4  li 3, 0
  02dfde8  li 4, 11
  02dfdec  sth 3, 116(30)
  02dfdf0  lbz 3, 83(31)
  02dfdf4  stb 4, 32(31)
  02dfdf8  cmpwi 3, 3
  02dfdfc  bt 2, 0x2dfe18
  02dfe00  ori 3, 31, 0
  02dfe04  li 4, 3
  02dfe08  li 5, 0
  02dfe0c  li 6, 3
  02dfe10  bl 0xfddc0
  02dfe14  nop
  02dfe18  lhz 3, 116(30)
  02dfe1c  extsh 3, 3
  02dfe20  cmpwi 3, 210
  02dfe24  addic 3, 3, 1
  02dfe28  sth 3, 116(30)
  02dfe2c  lbz 3, 83(31)
  02dfe30  lbz 30, 112(31)
  02dfe34  cmpwi 1, 3, 8
  02dfe38  cmpwi 6, 3, 9
  02dfe3c  bt 1, 0x2dfe4c
  02dfe40  lwz 3, 8324(29)
  02dfe44  cmpwi 3, 22
  02dfe48  bf 2, 0x2e2e1c
  02dfe4c  bf 6, 0x2e2e1c
  02dfe50  rlwinm 3, 30, 0, 30, 30
  02dfe54  cmpwi 3, 0
  02dfe58  bt 2, 0x2e2e1c
  02dfe5c  bt 26, 0x2e2e1c
  02dfe60  ori 3, 31, 0
  02dfe64  li 4, 9
  02dfe68  li 5, 0
  02dfe6c  li 6, 3
  02dfe70  bl 0xfddc0
  02dfe74  nop
  02dfe78  b 0x2e2e1c
  02dfe7c  lfs 1, 128(29)
  02dfe80  lfs 2, 16(31)
  02dfe84  lfs 3, 132(29)
  02dfe88  fsubs 1, 1, 2
  02dfe8c  lfs 4, 20(31)
  02dfe90  fsubs 2, 3, 4
  02dfe94  bl 0x5e8338
  02dfe98  nop
  02dfe9c  lfs 31, 72(31)
  02dfea0  lfs 2, 128(29)
  02dfea4  fsubs 31, 1, 31
  02dfea8  lfs 1, 16(31)
  02dfeac  lfs 3, 132(29)
  02dfeb0  lfs 4, 20(31)
  02dfeb4  fsubs 1, 2, 1
  02dfeb8  fsubs 2, 3, 4
  02dfebc  bl 0x5e8338
  02dfec0  nop
  02dfec4  lis 3, 46
  02dfec8  addic 5, 30, 112
  02dfecc  addi 30, 3, -6044
  02dfed0  ori 3, 31, 0
  02dfed4  lfs 2, 16(30)
  02dfed8  lfs 3, 20(30)
  02dfedc  lfs 4, 24(30)
  02dfee0  bl 0xff2e8
  02dfee4  nop
  02dfee8  addic 3, 31, 16
  02dfeec  addic 4, 29, 128
  02dfef0  bl 0x5e8588
  02dfef4  nop
  02dfef8  lfs 2, 64(30)
  02dfefc  fcmpu 0, 1, 2
  02dff00  cror 6, 1, 2
  02dff04  bt 6, 0x2e2e1c
  02dff08  lis 3, 46
  02dff0c  addi 3, 3, -6044
  02dff10  lfs 1, 44(3)
  02dff14  fcmpu 0, 31, 1
  02dff18  cror 6, 1, 2
  02dff1c  bt 6, 0x2e2e1c
  02dff20  lis 3, 46
  02dff24  addi 3, 3, -6044
  02dff28  lfs 1, 68(3)
  02dff2c  fcmpu 0, 31, 1
  02dff30  cror 6, 0, 2
  02dff34  bt 6, 0x2e2e1c
  02dff38  li 3, 22
  02dff3c  lbz 4, 83(31)
  02dff40  cmpwi 4, 1
  02dff44  stb 3, 32(31)
  02dff48  bt 2, 0x2e2e1c
  02dff4c  ori 3, 31, 0
  02dff50  li 4, 1
  02dff54  li 5, 0
  02dff58  li 6, 3
  02dff5c  bl 0xfddc0
  02dff60  nop
  02dff64  b 0x2e2e1c
  02dff68  lfs 1, 128(29)
  02dff6c  lfs 2, 16(31)
  02dff70  lfs 3, 132(29)
  02dff74  fsubs 1, 1, 2
  02dff78  lfs 4, 20(31)
  02dff7c  fsubs 2, 3, 4
  02dff80  bl 0x5e8338
  02dff84  nop
  02dff88  lfs 31, 72(31)
  02dff8c  lfs 2, 128(29)
  02dff90  fsubs 31, 1, 31
  02dff94  lfs 1, 16(31)
  02dff98  lfs 3, 132(29)
  02dff9c  lfs 4, 20(31)
  02dffa0  fsubs 1, 2, 1
  02dffa4  fsubs 2, 3, 4
  02dffa8  bl 0x5e8338
  02dffac  nop
  02dffb0  lis 3, 46
  02dffb4  addic 5, 30, 112
  02dffb8  addi 28, 3, -6044
  02dffbc  ori 3, 31, 0
  02dffc0  lfs 2, 16(28)
  02dffc4  lfs 3, 20(28)
  02dffc8  lfs 4, 24(28)
  02dffcc  bl 0xff2e8
  02dffd0  nop
  02dffd4  lfs 1, 72(31)
  02dffd8  bl 0x5e8078
  02dffdc  nop
  02dffe0  lis 30, 114
  02dffe4  lfs 30, 100(28)
  02dffe8  lfs 2, -3064(30)
  02dffec  lfs 3, 72(31)
  02dfff0  fmuls 2, 2, 30
  02dfff4  fmuls 2, 2, 1
  02dfff8  fmr 1, 3
  02dfffc  stfs 2, 208(1)
  02e0000  bl 0x5e8128
  02e0004  nop
  02e0008  lfs 2, -3064(30)
  02e000c  li 4, 0
  02e0010  fmuls 2, 2, 30
  02e0014  addic 30, 31, 16
  02e0018  addic 5, 1, 208
  02e001c  stw 4, 216(1)
  02e0020  ori 3, 30, 0
  02e0024  ori 4, 30, 0
  02e0028  fmuls 1, 2, 1
  02e002c  stfs 1, 212(1)
  02e0030  bl 0x5e7f54
  02e0034  nop
  02e0038  addic 29, 29, 128
  02e003c  ori 3, 30, 0
  02e0040  ori 4, 29, 0
  02e0044  bl 0x5e8588
  02e0048  nop
  02e004c  lfs 2, 0(28)
  02e0050  fcmpu 0, 1, 2
  02e0054  cror 6, 1, 2
  02e0058  bt 6, 0x2e00bc
  02e005c  lis 3, 46
  02e0060  addi 3, 3, -6044
  02e0064  lfs 1, 44(3)
  02e0068  fcmpu 0, 31, 1
  02e006c  cror 6, 1, 2
  02e0070  bt 6, 0x2e00bc
  02e0074  lis 3, 46
  02e0078  addi 3, 3, -6044
  02e007c  lfs 1, 68(3)
  02e0080  fcmpu 0, 31, 1
  02e0084  cror 6, 0, 2
  02e0088  bt 6, 0x2e00bc
  02e008c  li 3, 23
  02e0090  lbz 4, 83(31)
  02e0094  cmpwi 4, 4
  02e0098  stb 3, 32(31)
  02e009c  bt 2, 0x2e2e1c
  02e00a0  ori 3, 31, 0
  02e00a4  li 4, 4
  02e00a8  li 5, 0
  02e00ac  li 6, 3
  02e00b0  bl 0xfddc0
  02e00b4  nop
  02e00b8  b 0x2e2e1c
  02e00bc  ori 3, 30, 0
  02e00c0  ori 4, 29, 0
  02e00c4  bl 0x5e8588
  02e00c8  nop
  02e00cc  lis 3, 46
  02e00d0  addi 3, 3, -6044
  02e00d4  lfs 2, 36(3)
  02e00d8  fcmpu 0, 1, 2
  02e00dc  cror 6, 0, 2
  02e00e0  bt 6, 0x2e2e1c
  02e00e4  li 3, 21
  02e00e8  lbz 4, 83(31)
  02e00ec  cmpwi 4, 3
  02e00f0  stb 3, 32(31)
  02e00f4  bt 2, 0x2e2e1c
  02e00f8  ori 3, 31, 0
  02e00fc  li 4, 3
  02e0100  li 5, 0
  02e0104  li 6, 3
  02e0108  bl 0xfddc0
  02e010c  nop
  02e0110  b 0x2e2e1c
  02e0114  lbz 3, 82(31)
  02e0118  lbz 4, 83(31)
  02e011c  cmpw 3, 4
  02e0120  bf 2, 0x2e02cc
  02e0124  ori 3, 31, 0
  02e0128  bl 0xefe40
  02e012c  nop
  02e0130  lis 3, 46
  02e0134  addi 3, 3, -6044
  02e0138  lfs 2, 36(3)
  02e013c  fcmpu 0, 1, 2
  02e0140  bt 0, 0x2e02cc
  02e0144  ori 3, 31, 0
  02e0148  bl 0xefe40
  02e014c  nop
  02e0150  lis 3, 46
  02e0154  addi 3, 3, -6044
  02e0158  lfs 2, 40(3)
  02e015c  fcmpu 0, 1, 2
  02e0160  cror 6, 1, 2
  02e0164  bt 6, 0x2e02cc
  02e0168  lfs 1, 24(31)
  02e016c  lfs 2, 136(29)
  02e0170  lis 3, 46
  02e0174  fsubs 1, 1, 2
  02e0178  addi 3, 3, -6044
  02e017c  lfs 2, 44(3)
  02e0180  fabs 1, 1
  02e0184  fcmpu 0, 1, 2
  02e0188  cror 6, 1, 2
  02e018c  bt 6, 0x2e02cc
  02e0190  addic 3, 31, 16
  02e0194  addic 4, 29, 128
  02e0198  bl 0x5e8588
  02e019c  nop
  02e01a0  lis 3, 46
  02e01a4  addi 3, 3, -6044
  02e01a8  lfs 2, 28(3)
  02e01ac  fcmpu 0, 1, 2
  02e01b0  cror 6, 1, 2
  02e01b4  bt 6, 0x2e02cc
  02e01b8  lis 3, 149
  02e01bc  lfs 1, 16(31)
  02e01c0  addic 3, 3, 5056
  02e01c4  lfs 2, 20(31)
  02e01c8  lfs 31, 344(3)
  02e01cc  lfs 3, 320(3)
  02e01d0  lfs 4, 324(3)
  02e01d4  fsubs 1, 1, 3
  02e01d8  fsubs 2, 2, 4
  02e01dc  bl 0x5e8338
  02e01e0  nop
  02e01e4  fmr 2, 1
  02e01e8  fmr 1, 31
  02e01ec  bl 0x5026a0
  02e01f0  nop
  02e01f4  lis 3, 46
  02e01f8  addi 3, 3, -6044
  02e01fc  lfs 2, 48(3)
  02e0200  fcmpu 0, 1, 2
  02e0204  cror 6, 1, 2
  02e0208  bt 6, 0x2e02cc
  02e020c  lfs 1, 128(29)
  02e0210  lfs 2, 16(31)
  02e0214  lfs 3, 132(29)
  02e0218  lfs 4, 20(31)
  02e021c  fsubs 1, 1, 2
  02e0220  fsubs 2, 3, 4
  02e0224  bl 0x5e8338
  02e0228  nop
  02e022c  lfs 2, 72(31)
  02e0230  bl 0x5026a0
  02e0234  nop
  02e0238  lis 3, 46
  02e023c  addi 3, 3, -6044
  02e0240  lfs 2, 52(3)
  02e0244  fcmpu 0, 1, 2
  02e0248  cror 6, 1, 2
  02e024c  bt 6, 0x2e02cc
  02e0250  lfs 1, 72(31)
  02e0254  bl 0x5e8078
  02e0258  nop
  02e025c  lfs 2, 72(31)
  02e0260  stfs 1, 224(1)
  02e0264  fmr 1, 2
  02e0268  bl 0x5e8128
  02e026c  nop
  02e0270  li 3, 0
  02e0274  stfs 1, 228(1)
  02e0278  addic 30, 1, 240
  02e027c  lwz 4, 8320(29)
  02e0280  stw 3, 232(1)
  02e0284  ori 3, 30, 0
  02e0288  addic 4, 4, 16
  02e028c  bl 0x5e7e98
  02e0290  nop
  02e0294  lis 3, 46
  02e0298  lfs 1, 248(1)
  02e029c  ori 4, 31, 0
  02e02a0  addi 6, 3, -6044
  02e02a4  addic 8, 1, 224
  02e02a8  li 5, 1
  02e02ac  ori 7, 30, 0
  02e02b0  lfs 2, 56(6)
  02e02b4  lwz 3, 8320(29)
  02e02b8  fadds 1, 1, 2
  02e02bc  stfs 1, 248(1)
  02e02c0  lfs 1, 60(6)
  02e02c4  bl 0x105c08
  02e02c8  nop
  02e02cc  lbz 3, 112(31)
  02e02d0  rlwinm 3, 3, 0, 30, 30
  02e02d4  cmpwi 3, 0
  02e02d8  bt 2, 0x2e2e1c
  02e02dc  li 3, 21
  02e02e0  lbz 4, 83(31)
  02e02e4  cmpwi 4, 3
  02e02e8  stb 3, 32(31)
  02e02ec  bt 2, 0x2e2e1c
  02e02f0  ori 3, 31, 0
  02e02f4  li 4, 3
  02e02f8  li 5, 0
  02e02fc  li 6, 3
  02e0300  bl 0xfddc0
  02e0304  nop
  02e0308  b 0x2e2e1c
  02e030c  ori 3, 31, 0
  02e0310  ori 4, 30, 0
  02e0314  bl 0x10b030
  02e0318  nop
  02e031c  rlwinm 3, 3, 0, 25, 25
  02e0320  cmpwi 3, 0
  02e0324  bt 2, 0x2e2e1c
  02e0328  li 3, 0
  02e032c  sth 3, 116(30)
  02e0330  lbz 3, 83(31)
  02e0334  cmpwi 3, 10
  02e0338  bt 2, 0x2e0354
  02e033c  ori 3, 31, 0
  02e0340  li 4, 10
  02e0344  li 5, 0
  02e0348  li 6, 3
  02e034c  bl 0xfddc0
  02e0350  nop
  02e0354  li 3, 25
  02e0358  stb 3, 32(31)
  02e035c  b 0x2e2e1c
  02e0360  lhz 3, 116(30)
  02e0364  extsh 3, 3
  02e0368  addic 4, 3, 1
  02e036c  cmpwi 3, 120
  02e0370  sth 4, 116(30)
  02e0374  bf 1, 0x2e2e1c
  02e0378  li 3, 21
  02e037c  lbz 4, 83(31)
  02e0380  cmpwi 4, 3
  02e0384  stb 3, 32(31)
  02e0388  bt 2, 0x2e2e1c
  02e038c  ori 3, 31, 0
  02e0390  li 4, 3
  02e0394  li 5, 0
  02e0398  li 6, 3
  02e039c  bl 0xfddc0
  02e03a0  nop
  02e03a4  b 0x2e2e1c
  02e03a8  lfs 1, 128(29)
  02e03ac  lfs 2, 16(31)
  02e03b0  lfs 3, 132(29)
  02e03b4  fsubs 1, 1, 2
  02e03b8  lfs 4, 20(31)
  02e03bc  fsubs 2, 3, 4
  02e03c0  bl 0x5e8338
  02e03c4  nop
  02e03c8  lfs 31, 72(31)
  02e03cc  lfs 2, 128(29)
  02e03d0  fsubs 31, 1, 31
  02e03d4  lfs 1, 16(31)
  02e03d8  lfs 3, 132(29)
  02e03dc  lfs 4, 20(31)
  02e03e0  fsubs 1, 2, 1
  02e03e4  fsubs 2, 3, 4
  02e03e8  bl 0x5e8338
  02e03ec  nop
  02e03f0  lis 3, 46
  02e03f4  addic 5, 30, 112
  02e03f8  addi 30, 3, -6044
  02e03fc  ori 3, 31, 0
  02e0400  lfs 2, 16(30)
  02e0404  lfs 3, 20(30)
  02e0408  lfs 4, 24(30)
  02e040c  bl 0xff2e8
  02e0410  nop
  02e0414  addic 3, 31, 16
  02e0418  addic 4, 29, 128
  02e041c  bl 0x5e8588
  02e0420  nop
  02e0424  lfs 2, 64(30)
  02e0428  fcmpu 0, 1, 2
  02e042c  cror 6, 1, 2
  02e0430  bt 6, 0x2e2e1c
  02e0434  lis 3, 46
  02e0438  addi 3, 3, -6044
  02e043c  lfs 1, 44(3)
  02e0440  fcmpu 0, 31, 1
  02e0444  cror 6, 1, 2
  02e0448  bt 6, 0x2e2e1c
  02e044c  lis 3, 46
  02e0450  addi 3, 3, -6044
  02e0454  lfs 1, 68(3)
  02e0458  fcmpu 0, 31, 1
  02e045c  cror 6, 0, 2
  02e0460  bt 6, 0x2e2e1c
  02e0464  li 3, 32
  02e0468  lbz 4, 83(31)
  02e046c  cmpwi 4, 1
  02e0470  stb 3, 32(31)
  02e0474  bt 2, 0x2e2e1c
  02e0478  ori 3, 31, 0
  02e047c  li 4, 1
  02e0480  li 5, 0
  02e0484  li 6, 3
  02e0488  bl 0xfddc0
  02e048c  nop
  02e0490  b 0x2e2e1c
  02e0494  lfs 1, 128(29)
  02e0498  lfs 2, 16(31)
  02e049c  lfs 3, 132(29)
  02e04a0  fsubs 1, 1, 2
  02e04a4  lfs 4, 20(31)
  02e04a8  fsubs 2, 3, 4
  02e04ac  bl 0x5e8338
  02e04b0  nop
  02e04b4  lfs 31, 72(31)
  02e04b8  lfs 2, 128(29)
  02e04bc  fsubs 31, 1, 31
  02e04c0  lfs 1, 16(31)
  02e04c4  lfs 3, 132(29)
  02e04c8  lfs 4, 20(31)
  02e04cc  fsubs 1, 2, 1
  02e04d0  fsubs 2, 3, 4
  02e04d4  bl 0x5e8338
  02e04d8  nop
  02e04dc  lis 3, 46
  02e04e0  addic 5, 30, 112
  02e04e4  addi 28, 3, -6044
  02e04e8  ori 3, 31, 0
  02e04ec  lfs 2, 16(28)
  02e04f0  lfs 3, 20(28)
  02e04f4  lfs 4, 24(28)
  02e04f8  bl 0xff2e8
  02e04fc  nop
  02e0500  lfs 1, 72(31)
  02e0504  bl 0x5e8078
  02e0508  nop
  02e050c  lis 30, 114
  02e0510  lfs 30, 100(28)
  02e0514  lfs 2, -3064(30)
  02e0518  lfs 3, 72(31)
  02e051c  fmuls 2, 2, 30
  02e0520  fmuls 2, 2, 1
  02e0524  fmr 1, 3
  02e0528  stfs 2, 256(1)
  02e052c  bl 0x5e8128
  02e0530  nop
  02e0534  lfs 2, -3064(30)
  02e0538  li 4, 0
  02e053c  addic 30, 31, 16
  02e0540  fmuls 2, 2, 30
  02e0544  addic 5, 1, 256
  02e0548  stw 4, 264(1)
  02e054c  ori 3, 30, 0
  02e0550  ori 4, 30, 0
  02e0554  fmuls 1, 2, 1
  02e0558  stfs 1, 260(1)
  02e055c  bl 0x5e7f54
  02e0560  nop
  02e0564  addic 29, 29, 128
  02e0568  ori 3, 30, 0
  02e056c  ori 4, 29, 0
  02e0570  bl 0x5e8588
  02e0574  nop
  02e0578  lfs 2, 28(28)
  02e057c  fcmpu 0, 1, 2
  02e0580  cror 6, 1, 2
  02e0584  bt 6, 0x2e05e8
  02e0588  lis 3, 46
  02e058c  addi 3, 3, -6044
  02e0590  lfs 1, 44(3)
  02e0594  fcmpu 0, 31, 1
  02e0598  cror 6, 1, 2
  02e059c  bt 6, 0x2e05e8
  02e05a0  lis 3, 46
  02e05a4  addi 3, 3, -6044
  02e05a8  lfs 1, 68(3)
  02e05ac  fcmpu 0, 31, 1
  02e05b0  cror 6, 0, 2
  02e05b4  bt 6, 0x2e05e8
  02e05b8  li 3, 33
  02e05bc  lbz 4, 83(31)
  02e05c0  cmpwi 4, 4
  02e05c4  stb 3, 32(31)
  02e05c8  bt 2, 0x2e2e1c
  02e05cc  ori 3, 31, 0
  02e05d0  li 4, 4
  02e05d4  li 5, 0
  02e05d8  li 6, 3
  02e05dc  bl 0xfddc0
  02e05e0  nop
  02e05e4  b 0x2e2e1c
  02e05e8  ori 3, 30, 0
  02e05ec  ori 4, 29, 0
  02e05f0  bl 0x5e8588
  02e05f4  nop
  02e05f8  lis 3, 46
  02e05fc  addi 3, 3, -6044
  02e0600  lfs 2, 36(3)
  02e0604  fcmpu 0, 1, 2
  02e0608  cror 6, 0, 2
  02e060c  bt 6, 0x2e2e1c
  02e0610  li 3, 31
  02e0614  lbz 4, 83(31)
  02e0618  cmpwi 4, 3
  02e061c  stb 3, 32(31)
  02e0620  bt 2, 0x2e2e1c
  02e0624  ori 3, 31, 0
  02e0628  li 4, 3
  02e062c  li 5, 0
  02e0630  li 6, 3
  02e0634  bl 0xfddc0
  02e0638  nop
  02e063c  b 0x2e2e1c
  02e0640  lbz 3, 82(31)
  02e0644  lbz 4, 83(31)
  02e0648  cmpw 3, 4
  02e064c  bf 2, 0x2e07f8
  02e0650  ori 3, 31, 0
  02e0654  bl 0xefe40
  02e0658  nop
  02e065c  lis 3, 46
  02e0660  addi 3, 3, -6044
  02e0664  lfs 2, 36(3)
  02e0668  fcmpu 0, 1, 2
  02e066c  bt 0, 0x2e07f8
  02e0670  ori 3, 31, 0
  02e0674  bl 0xefe40
  02e0678  nop
  02e067c  lis 3, 46
  02e0680  addi 3, 3, -6044
  02e0684  lfs 2, 40(3)
  02e0688  fcmpu 0, 1, 2
  02e068c  cror 6, 1, 2
  02e0690  bt 6, 0x2e07f8
  02e0694  lfs 1, 24(31)
  02e0698  lis 3, 46
  02e069c  lfs 2, 136(29)
  02e06a0  addi 3, 3, -6044
  02e06a4  fsubs 1, 1, 2
  02e06a8  lfs 2, 44(3)
  02e06ac  fabs 1, 1
  02e06b0  fcmpu 0, 1, 2
  02e06b4  cror 6, 1, 2
  02e06b8  bt 6, 0x2e07f8
  02e06bc  addic 3, 31, 16
  02e06c0  addic 4, 29, 128
  02e06c4  bl 0x5e8588
  02e06c8  nop
  02e06cc  lis 3, 46
  02e06d0  addi 3, 3, -6044
  02e06d4  lfs 2, 28(3)
  02e06d8  fcmpu 0, 1, 2
  02e06dc  cror 6, 1, 2
  02e06e0  bt 6, 0x2e07f8
  02e06e4  lis 3, 149
  02e06e8  lfs 1, 16(31)
  02e06ec  lfs 2, 20(31)
  02e06f0  addic 3, 3, 5056
  02e06f4  lfs 31, 344(3)
  02e06f8  lfs 3, 320(3)
  02e06fc  lfs 4, 324(3)
  02e0700  fsubs 1, 1, 3
  02e0704  fsubs 2, 2, 4
  02e0708  bl 0x5e8338
  02e070c  nop
  02e0710  fmr 2, 1
  02e0714  fmr 1, 31
  02e0718  bl 0x5026a0
  02e071c  nop
  02e0720  lis 3, 46
  02e0724  addi 3, 3, -6044
  02e0728  lfs 2, 48(3)
  02e072c  fcmpu 0, 1, 2
  02e0730  cror 6, 1, 2
  02e0734  bt 6, 0x2e07f8
  02e0738  lfs 1, 128(29)
  02e073c  lfs 2, 16(31)
  02e0740  lfs 3, 132(29)
  02e0744  lfs 4, 20(31)
  02e0748  fsubs 1, 1, 2
  02e074c  fsubs 2, 3, 4
  02e0750  bl 0x5e8338
  02e0754  nop
  02e0758  lfs 2, 72(31)
  02e075c  bl 0x5026a0
  02e0760  nop
  02e0764  lis 3, 46
  02e0768  addi 3, 3, -6044
  02e076c  lfs 2, 52(3)
  02e0770  fcmpu 0, 1, 2
  02e0774  cror 6, 1, 2
  02e0778  bt 6, 0x2e07f8
  02e077c  lfs 1, 72(31)
  02e0780  bl 0x5e8078
  02e0784  nop
  02e0788  lfs 2, 72(31)
  02e078c  stfs 1, 272(1)
  02e0790  fmr 1, 2
  02e0794  bl 0x5e8128
  02e0798  nop
  02e079c  li 4, 0
  02e07a0  stfs 1, 276(1)
  02e07a4  addic 30, 1, 288
  02e07a8  lwz 5, 8320(29)
  02e07ac  ori 3, 30, 0
  02e07b0  stw 4, 280(1)
  02e07b4  addic 4, 5, 16
  02e07b8  bl 0x5e7e98
  02e07bc  nop
  02e07c0  lis 3, 46
  02e07c4  lfs 1, 296(1)
  02e07c8  addic 8, 1, 272
  02e07cc  addi 6, 3, -6044
  02e07d0  ori 4, 31, 0
  02e07d4  li 5, 1
  02e07d8  ori 7, 30, 0
  02e07dc  lfs 2, 56(6)
  02e07e0  lwz 3, 8320(29)
  02e07e4  fadds 1, 1, 2
  02e07e8  stfs 1, 296(1)
  02e07ec  lfs 1, 60(6)
  02e07f0  bl 0x105c08
  02e07f4  nop
  02e07f8  lbz 3, 112(31)
  02e07fc  rlwinm 3, 3, 0, 30, 30
  02e0800  cmpwi 3, 0
  02e0804  bt 2, 0x2e2e1c
  02e0808  li 3, 31
  02e080c  lbz 4, 83(31)
  02e0810  cmpwi 4, 3
  02e0814  stb 3, 32(31)
  02e0818  bt 2, 0x2e2e1c
  02e081c  ori 3, 31, 0
  02e0820  li 4, 3
  02e0824  li 5, 0
  02e0828  li 6, 3
  02e082c  bl 0xfddc0
  02e0830  nop
  02e0834  b 0x2e2e1c
  02e0838  ori 3, 31, 0
  02e083c  ori 4, 30, 0
  02e0840  bl 0x10b030
  02e0844  nop
  02e0848  rlwinm 3, 3, 0, 25, 25
  02e084c  cmpwi 3, 0
  02e0850  bt 2, 0x2e2e1c
  02e0854  li 3, 0
  02e0858  sth 3, 116(30)
  02e085c  lbz 3, 83(31)
  02e0860  cmpwi 3, 2
  02e0864  bt 2, 0x2e0880
  02e0868  ori 3, 31, 0
  02e086c  li 4, 2
  02e0870  li 5, 10
  02e0874  li 6, 3
  02e0878  bl 0xfddc0
  02e087c  nop
  02e0880  li 4, 35
  02e0884  li 3, 256
  02e0888  stb 4, 32(31)
  02e088c  bl 0xfc620
  02e0890  nop
  02e0894  clrlwi 3, 3, 31
  02e0898  li 4, 0
  02e089c  li 5, 1
  02e08a0  subc 3, 4, 3
  02e08a4  li 4, -1
  02e08a8  cntlzw 3, 3
  02e08ac  subc 4, 4, 5
  02e08b0  sldi 3, 3, 58
  02e08b4  sradi 3, 3, 63
  02e08b8  and 3, 3, 4
  02e08bc  addc 3, 5, 3
  02e08c0  sth 3, 122(30)
  02e08c4  b 0x2e2e1c
  02e08c8  ori 3, 31, 0
  02e08cc  bl 0xefe40
  02e08d0  nop
  02e08d4  lis 3, 46
  02e08d8  addi 4, 3, -6044
  02e08dc  lbz 3, 83(31)
  02e08e0  lfs 2, 104(4)
  02e08e4  fcmpu 0, 1, 2
  02e08e8  bt 0, 0x2e09ac
  02e08ec  lis 4, 46
  02e08f0  addi 4, 4, -6044
  02e08f4  lfs 2, 76(4)
  02e08f8  fcmpu 0, 1, 2
  02e08fc  bt 1, 0x2e09ac
  02e0900  lhz 3, 122(30)
  02e0904  extsh 3, 3
  02e0908  extsw 3, 3
  02e090c  std 3, 688(1)
  02e0910  lis 3, 46
  02e0914  lfs 1, 72(31)
  02e0918  addi 29, 3, -6044
  02e091c  lfs 31, 108(29)
  02e0920  lfd 2, 688(1)
  02e0924  fcfid 2, 2
  02e0928  frsp 2, 2
  02e092c  fmadds 1, 2, 31, 1
  02e0930  bl 0x5e8078
  02e0934  nop
  02e0938  lhz 3, 122(30)
  02e093c  lis 30, 114
  02e0940  lfs 30, 24(29)
  02e0944  extsh 3, 3
  02e0948  extsw 3, 3
  02e094c  std 3, 688(1)
  02e0950  lfs 2, -3064(30)
  02e0954  lfs 3, 72(31)
  02e0958  fmuls 2, 2, 30
  02e095c  fmuls 1, 2, 1
  02e0960  lfd 2, 688(1)
  02e0964  fcfid 2, 2
  02e0968  stfs 1, 304(1)
  02e096c  frsp 1, 2
  02e0970  fmadds 1, 1, 31, 3
  02e0974  bl 0x5e8128
  02e0978  nop
  02e097c  lfs 2, -3064(30)
  02e0980  li 6, 0
  02e0984  addic 3, 31, 16
  02e0988  fmuls 2, 2, 30
  02e098c  addic 5, 1, 304
  02e0990  stw 6, 312(1)
  02e0994  ori 4, 3, 0
  02e0998  fmuls 1, 2, 1
  02e099c  stfs 1, 308(1)
  02e09a0  bl 0x5e7f54
  02e09a4  nop
  02e09a8  b 0x2e2e1c
  02e09ac  lis 4, 46
  02e09b0  addi 4, 4, -6044
  02e09b4  lfs 2, 76(4)
  02e09b8  fcmpu 0, 1, 2
  02e09bc  bt 0, 0x2e2e1c
  02e09c0  li 4, 31
  02e09c4  cmpwi 3, 3
  02e09c8  stb 4, 32(31)
  02e09cc  bt 2, 0x2e2e1c
  02e09d0  ori 3, 31, 0
  02e09d4  li 4, 3
  02e09d8  li 5, 0
  02e09dc  li 6, 3
  02e09e0  bl 0xfddc0
  02e09e4  nop
  02e09e8  b 0x2e2e1c
  02e09ec  lfs 1, 128(29)
  02e09f0  lfs 2, 16(31)
  02e09f4  lfs 3, 132(29)
  02e09f8  fsubs 1, 1, 2
  02e09fc  lfs 4, 20(31)
  02e0a00  fsubs 2, 3, 4
  02e0a04  bl 0x5e8338
  02e0a08  nop
  02e0a0c  lfs 2, 128(29)
  02e0a10  fmr 31, 1
  02e0a14  lfs 1, 16(31)
  02e0a18  lfs 3, 132(29)
  02e0a1c  lfs 4, 20(31)
  02e0a20  fsubs 1, 2, 1
  02e0a24  fsubs 2, 3, 4
  02e0a28  bl 0x5e8338
  02e0a2c  nop
  02e0a30  lwz 4, 8320(29)
  02e0a34  lis 3, 46
  02e0a38  addi 3, 3, -6044
  02e0a3c  lfs 2, 72(4)
  02e0a40  fsubs 4, 31, 2
  02e0a44  lfs 2, 112(3)
  02e0a48  lfs 3, 116(3)
  02e0a4c  lfs 31, 72(31)
  02e0a50  fsubs 31, 1, 31
  02e0a54  fsubs 1, 4, 2
  02e0a58  fcmpu 0, 1, 3
  02e0a5c  cror 6, 1, 2
  02e0a60  bt 6, 0x2e0a6c
  02e0a64  fadds 1, 1, 30
  02e0a68  b 0x2e0a7c
  02e0a6c  fcmpu 0, 1, 2
  02e0a70  cror 6, 0, 2
  02e0a74  bt 6, 0x2e0a7c
  02e0a78  fsubs 1, 1, 30
  02e0a7c  lis 3, 46
  02e0a80  addi 3, 3, -6044
  02e0a84  lfs 2, 88(3)
  02e0a88  fcmpu 0, 1, 2
  02e0a8c  cror 6, 1, 2
  02e0a90  bt 6, 0x2e0af4
  02e0a94  lis 3, 46
  02e0a98  addi 3, 3, -6044
  02e0a9c  lfs 2, 120(3)
  02e0aa0  fcmpu 0, 1, 2
  02e0aa4  cror 6, 0, 2
  02e0aa8  bt 6, 0x2e0af4
  02e0aac  lhz 3, 122(30)
  02e0ab0  extsh 3, 3
  02e0ab4  addic 4, 3, 1
  02e0ab8  cmpwi 3, 30
  02e0abc  sth 4, 122(30)
  02e0ac0  bf 1, 0x2e0afc
  02e0ac4  li 3, 45
  02e0ac8  lbz 4, 83(31)
  02e0acc  cmpwi 4, 10
  02e0ad0  stb 3, 32(31)
  02e0ad4  bt 2, 0x2e0afc
  02e0ad8  ori 3, 31, 0
  02e0adc  li 4, 10
  02e0ae0  li 5, 0
  02e0ae4  li 6, 10
  02e0ae8  bl 0xfddc0
  02e0aec  nop
  02e0af0  b 0x2e0afc
  02e0af4  li 3, 0
  02e0af8  sth 3, 122(30)
  02e0afc  lfs 1, 128(29)
  02e0b00  lfs 2, 16(31)
  02e0b04  lfs 3, 132(29)
  02e0b08  lfs 4, 20(31)
  02e0b0c  fsubs 1, 1, 2
  02e0b10  fsubs 2, 3, 4
  02e0b14  bl 0x5e8338
  02e0b18  nop
  02e0b1c  lis 3, 46
  02e0b20  addic 5, 30, 112
  02e0b24  addi 30, 3, -6044
  02e0b28  ori 3, 31, 0
  02e0b2c  lfs 2, 16(30)
  02e0b30  lfs 3, 20(30)
  02e0b34  lfs 4, 24(30)
  02e0b38  bl 0xff2e8
  02e0b3c  nop
  02e0b40  addic 3, 31, 16
  02e0b44  addic 4, 29, 128
  02e0b48  bl 0x5e8588
  02e0b4c  nop
  02e0b50  lfs 2, 64(30)
  02e0b54  fcmpu 0, 1, 2
  02e0b58  cror 6, 1, 2
  02e0b5c  bt 6, 0x2e2e1c
  02e0b60  lis 3, 46
  02e0b64  addi 3, 3, -6044
  02e0b68  lfs 1, 44(3)
  02e0b6c  fcmpu 0, 31, 1
  02e0b70  cror 6, 1, 2
  02e0b74  bt 6, 0x2e2e1c
  02e0b78  lis 3, 46
  02e0b7c  addi 3, 3, -6044
  02e0b80  lfs 1, 68(3)
  02e0b84  fcmpu 0, 31, 1
  02e0b88  cror 6, 0, 2
  02e0b8c  bt 6, 0x2e2e1c
  02e0b90  li 3, 42
  02e0b94  lbz 4, 83(31)
  02e0b98  cmpwi 4, 0
  02e0b9c  stb 3, 32(31)
  02e0ba0  bt 2, 0x2e2e1c
  02e0ba4  ori 3, 31, 0
  02e0ba8  li 4, 0
  02e0bac  li 5, 0
  02e0bb0  li 6, 3
  02e0bb4  bl 0xfddc0
  02e0bb8  nop
  02e0bbc  b 0x2e2e1c
  02e0bc0  lfs 1, 128(29)
  02e0bc4  lfs 2, 16(31)
  02e0bc8  lfs 3, 132(29)
  02e0bcc  fsubs 1, 1, 2
  02e0bd0  lfs 4, 20(31)
  02e0bd4  fsubs 2, 3, 4
  02e0bd8  bl 0x5e8338
  02e0bdc  nop
  02e0be0  lfs 2, 128(29)
  02e0be4  fmr 31, 1
  02e0be8  lfs 1, 16(31)
  02e0bec  lfs 3, 132(29)
  02e0bf0  lfs 4, 20(31)
  02e0bf4  fsubs 1, 2, 1
  02e0bf8  fsubs 2, 3, 4
  02e0bfc  bl 0x5e8338
  02e0c00  nop
  02e0c04  lwz 3, 8320(29)
  02e0c08  lis 4, 46
  02e0c0c  addi 4, 4, -6044
  02e0c10  lfs 2, 72(3)
  02e0c14  fsubs 3, 31, 2
  02e0c18  lfs 2, 112(4)
  02e0c1c  lfs 4, 116(4)
  02e0c20  lfs 31, 72(31)
  02e0c24  fsubs 31, 1, 31
  02e0c28  fsubs 1, 3, 2
  02e0c2c  fcmpu 0, 1, 4
  02e0c30  cror 6, 1, 2
  02e0c34  bt 6, 0x2e0c40
  02e0c38  fadds 1, 1, 30
  02e0c3c  b 0x2e0c50
  02e0c40  fcmpu 0, 1, 2
  02e0c44  cror 6, 0, 2
  02e0c48  bt 6, 0x2e0c50
  02e0c4c  fsubs 1, 1, 30
  02e0c50  lis 3, 46
  02e0c54  addi 3, 3, -6044
  02e0c58  lfs 2, 88(3)
  02e0c5c  fcmpu 0, 1, 2
  02e0c60  cror 6, 1, 2
  02e0c64  bt 6, 0x2e0cc8
  02e0c68  lis 3, 46
  02e0c6c  addi 3, 3, -6044
  02e0c70  lfs 2, 120(3)
  02e0c74  fcmpu 0, 1, 2
  02e0c78  cror 6, 0, 2
  02e0c7c  bt 6, 0x2e0cc8
  02e0c80  lhz 3, 122(30)
  02e0c84  extsh 3, 3
  02e0c88  addic 4, 3, 1
  02e0c8c  cmpwi 3, 30
  02e0c90  sth 4, 122(30)
  02e0c94  bf 1, 0x2e0cd0
  02e0c98  li 3, 45
  02e0c9c  lbz 4, 83(31)
  02e0ca0  cmpwi 4, 10
  02e0ca4  stb 3, 32(31)
  02e0ca8  bt 2, 0x2e0cd0
  02e0cac  ori 3, 31, 0
  02e0cb0  li 4, 10
  02e0cb4  li 5, 0
  02e0cb8  li 6, 10
  02e0cbc  bl 0xfddc0
  02e0cc0  nop
  02e0cc4  b 0x2e0cd0
  02e0cc8  li 3, 0
  02e0ccc  sth 3, 122(30)
  02e0cd0  lfs 1, 128(29)
  02e0cd4  lfs 2, 16(31)
  02e0cd8  lfs 3, 132(29)
  02e0cdc  lfs 4, 20(31)
  02e0ce0  fsubs 1, 1, 2
  02e0ce4  fsubs 2, 3, 4
  02e0ce8  bl 0x5e8338
  02e0cec  nop
  02e0cf0  lis 3, 46
  02e0cf4  addic 5, 30, 112
  02e0cf8  addi 28, 3, -6044
  02e0cfc  ori 3, 31, 0
  02e0d00  lfs 2, 16(28)
  02e0d04  lfs 3, 20(28)
  02e0d08  lfs 4, 24(28)
  02e0d0c  bl 0xff2e8
  02e0d10  nop
  02e0d14  lfs 1, 72(31)
  02e0d18  bl 0x5e8078
  02e0d1c  nop
  02e0d20  lis 30, 114
  02e0d24  lfs 30, 124(28)
  02e0d28  lfs 2, -3064(30)
  02e0d2c  lfs 3, 72(31)
  02e0d30  fmuls 2, 2, 30
  02e0d34  fmuls 2, 2, 1
  02e0d38  fmr 1, 3
  02e0d3c  stfs 2, 320(1)
  02e0d40  bl 0x5e8128
  02e0d44  nop
  02e0d48  lfs 2, -3064(30)
  02e0d4c  li 4, 0
  02e0d50  fmuls 2, 2, 30
  02e0d54  addic 30, 31, 16
  02e0d58  addic 5, 1, 320
  02e0d5c  stw 4, 328(1)
  02e0d60  ori 3, 30, 0
  02e0d64  ori 4, 30, 0
  02e0d68  fmuls 1, 2, 1
  02e0d6c  stfs 1, 324(1)
  02e0d70  bl 0x5e7f54
  02e0d74  nop
  02e0d78  addic 29, 29, 128
  02e0d7c  ori 3, 30, 0
  02e0d80  ori 4, 29, 0
  02e0d84  bl 0x5e8588
  02e0d88  nop
  02e0d8c  lfs 2, 28(28)
  02e0d90  fcmpu 0, 1, 2
  02e0d94  cror 6, 1, 2
  02e0d98  bt 6, 0x2e0dfc
  02e0d9c  lis 3, 46
  02e0da0  addi 3, 3, -6044
  02e0da4  lfs 1, 44(3)
  02e0da8  fcmpu 0, 31, 1
  02e0dac  cror 6, 1, 2
  02e0db0  bt 6, 0x2e0dfc
  02e0db4  lis 3, 46
  02e0db8  addi 3, 3, -6044
  02e0dbc  lfs 1, 68(3)
  02e0dc0  fcmpu 0, 31, 1
  02e0dc4  cror 6, 0, 2
  02e0dc8  bt 6, 0x2e0dfc
  02e0dcc  li 3, 43
  02e0dd0  lbz 4, 83(31)
  02e0dd4  cmpwi 4, 4
  02e0dd8  stb 3, 32(31)
  02e0ddc  bt 2, 0x2e2e1c
  02e0de0  ori 3, 31, 0
  02e0de4  li 4, 4
  02e0de8  li 5, 0
  02e0dec  li 6, 3
  02e0df0  bl 0xfddc0
  02e0df4  nop
  02e0df8  b 0x2e2e1c
  02e0dfc  ori 3, 30, 0
  02e0e00  ori 4, 29, 0
  02e0e04  bl 0x5e8588
  02e0e08  nop
  02e0e0c  lis 3, 46
  02e0e10  addi 3, 3, -6044
  02e0e14  lfs 2, 36(3)
  02e0e18  fcmpu 0, 1, 2
  02e0e1c  cror 6, 0, 2
  02e0e20  bt 6, 0x2e2e1c
  02e0e24  li 3, 41
  02e0e28  lbz 4, 83(31)
  02e0e2c  cmpwi 4, 3
  02e0e30  stb 3, 32(31)
  02e0e34  bt 2, 0x2e2e1c
  02e0e38  ori 3, 31, 0
  02e0e3c  li 4, 3
  02e0e40  li 5, 0
  02e0e44  li 6, 3
  02e0e48  bl 0xfddc0
  02e0e4c  nop
  02e0e50  b 0x2e2e1c
  02e0e54  lfs 1, 128(29)
  02e0e58  lfs 2, 16(31)
  02e0e5c  lfs 3, 132(29)
  02e0e60  fsubs 1, 1, 2
  02e0e64  lfs 4, 20(31)
  02e0e68  fsubs 2, 3, 4
  02e0e6c  bl 0x5e8338
  02e0e70  nop
  02e0e74  lwz 3, 8320(29)
  02e0e78  lis 4, 46
  02e0e7c  addi 4, 4, -6044
  02e0e80  lfs 2, 72(3)
  02e0e84  fsubs 1, 1, 2
  02e0e88  lfs 2, 112(4)
  02e0e8c  lfs 3, 116(4)
  02e0e90  fsubs 1, 1, 2
  02e0e94  fcmpu 0, 1, 3
  02e0e98  cror 6, 1, 2
  02e0e9c  bt 6, 0x2e0ea8
  02e0ea0  fadds 1, 1, 30
  02e0ea4  b 0x2e0eb8
  02e0ea8  fcmpu 0, 1, 2
  02e0eac  cror 6, 0, 2
  02e0eb0  bt 6, 0x2e0eb8
  02e0eb4  fsubs 1, 1, 30
  02e0eb8  lis 3, 46
  02e0ebc  addi 3, 3, -6044
  02e0ec0  lfs 2, 88(3)
  02e0ec4  fcmpu 0, 1, 2
  02e0ec8  cror 6, 1, 2
  02e0ecc  bt 6, 0x2e0f30
  02e0ed0  lis 3, 46
  02e0ed4  addi 3, 3, -6044
  02e0ed8  lfs 2, 120(3)
  02e0edc  fcmpu 0, 1, 2
  02e0ee0  cror 6, 0, 2
  02e0ee4  bt 6, 0x2e0f30
  02e0ee8  lhz 3, 122(30)
  02e0eec  extsh 3, 3
  02e0ef0  addic 4, 3, 1
  02e0ef4  cmpwi 3, 30
  02e0ef8  sth 4, 122(30)
  02e0efc  bf 1, 0x2e0f38
  02e0f00  li 3, 45
  02e0f04  lbz 4, 83(31)
  02e0f08  cmpwi 4, 10
  02e0f0c  stb 3, 32(31)
  02e0f10  bt 2, 0x2e0f38
  02e0f14  ori 3, 31, 0
  02e0f18  li 4, 10
  02e0f1c  li 5, 0
  02e0f20  li 6, 10
  02e0f24  bl 0xfddc0
  02e0f28  nop
  02e0f2c  b 0x2e0f38
  02e0f30  li 3, 0
  02e0f34  sth 3, 122(30)
  02e0f38  lbz 3, 82(31)
  02e0f3c  lbz 4, 83(31)
  02e0f40  cmpw 3, 4
  02e0f44  bf 2, 0x2e10f0
  02e0f48  ori 3, 31, 0
  02e0f4c  bl 0xefe40
  02e0f50  nop
  02e0f54  lis 3, 46
  02e0f58  addi 3, 3, -6044
  02e0f5c  lfs 2, 36(3)
  02e0f60  fcmpu 0, 1, 2
  02e0f64  bt 0, 0x2e10f0
  02e0f68  ori 3, 31, 0
  02e0f6c  bl 0xefe40
  02e0f70  nop
  02e0f74  lis 3, 46
  02e0f78  addi 3, 3, -6044
  02e0f7c  lfs 2, 40(3)
  02e0f80  fcmpu 0, 1, 2
  02e0f84  cror 6, 1, 2
  02e0f88  bt 6, 0x2e10f0
  02e0f8c  lfs 1, 24(31)
  02e0f90  lis 3, 46
  02e0f94  lfs 2, 136(29)
  02e0f98  addi 3, 3, -6044
  02e0f9c  fsubs 1, 1, 2
  02e0fa0  lfs 2, 44(3)
  02e0fa4  fabs 1, 1
  02e0fa8  fcmpu 0, 1, 2
  02e0fac  cror 6, 1, 2
  02e0fb0  bt 6, 0x2e10f0
  02e0fb4  addic 3, 31, 16
  02e0fb8  addic 4, 29, 128
  02e0fbc  bl 0x5e8588
  02e0fc0  nop
  02e0fc4  lis 3, 46
  02e0fc8  addi 3, 3, -6044
  02e0fcc  lfs 2, 28(3)
  02e0fd0  fcmpu 0, 1, 2
  02e0fd4  cror 6, 1, 2
  02e0fd8  bt 6, 0x2e10f0
  02e0fdc  lis 3, 149
  02e0fe0  lfs 1, 16(31)
  02e0fe4  lfs 2, 20(31)
  02e0fe8  addic 3, 3, 5056
  02e0fec  lfs 31, 344(3)
  02e0ff0  lfs 3, 320(3)
  02e0ff4  lfs 4, 324(3)
  02e0ff8  fsubs 1, 1, 3
  02e0ffc  fsubs 2, 2, 4
  02e1000  bl 0x5e8338
  02e1004  nop
  02e1008  fmr 2, 1
  02e100c  fmr 1, 31
  02e1010  bl 0x5026a0
  02e1014  nop
  02e1018  lis 3, 46
  02e101c  addi 3, 3, -6044
  02e1020  lfs 2, 48(3)
  02e1024  fcmpu 0, 1, 2
  02e1028  cror 6, 1, 2
  02e102c  bt 6, 0x2e10f0
  02e1030  lfs 1, 128(29)
  02e1034  lfs 2, 16(31)
  02e1038  lfs 3, 132(29)
  02e103c  lfs 4, 20(31)
  02e1040  fsubs 1, 1, 2
  02e1044  fsubs 2, 3, 4
  02e1048  bl 0x5e8338
  02e104c  nop
  02e1050  lfs 2, 72(31)
  02e1054  bl 0x5026a0
  02e1058  nop
  02e105c  lis 3, 46
  02e1060  addi 3, 3, -6044
  02e1064  lfs 2, 52(3)
  02e1068  fcmpu 0, 1, 2
  02e106c  cror 6, 1, 2
  02e1070  bt 6, 0x2e10f0
  02e1074  lfs 1, 72(31)
  02e1078  bl 0x5e8078
  02e107c  nop
  02e1080  lfs 2, 72(31)
  02e1084  stfs 1, 336(1)
  02e1088  fmr 1, 2
  02e108c  bl 0x5e8128
  02e1090  nop
  02e1094  li 4, 0
  02e1098  stfs 1, 340(1)
  02e109c  addic 30, 1, 352
  02e10a0  lwz 5, 8320(29)
  02e10a4  ori 3, 30, 0
  02e10a8  stw 4, 344(1)
  02e10ac  addic 4, 5, 16
  02e10b0  bl 0x5e7e98
  02e10b4  nop
  02e10b8  lis 3, 46
  02e10bc  lfs 1, 360(1)
  02e10c0  addic 8, 1, 336
  02e10c4  addi 6, 3, -6044
  02e10c8  ori 4, 31, 0
  02e10cc  li 5, 1
  02e10d0  ori 7, 30, 0
  02e10d4  lfs 2, 56(6)
  02e10d8  lwz 3, 8320(29)
  02e10dc  fadds 1, 1, 2
  02e10e0  stfs 1, 360(1)
  02e10e4  lfs 1, 60(6)
  02e10e8  bl 0x105c08
  02e10ec  nop
  02e10f0  lbz 3, 112(31)
  02e10f4  rlwinm 3, 3, 0, 30, 30
  02e10f8  cmpwi 3, 0
  02e10fc  bt 2, 0x2e2e1c
  02e1100  li 3, 41
  02e1104  lbz 4, 83(31)
  02e1108  cmpwi 4, 3
  02e110c  stb 3, 32(31)
  02e1110  bt 2, 0x2e2e1c
  02e1114  ori 3, 31, 0
  02e1118  li 4, 3
  02e111c  li 5, 0
  02e1120  li 6, 3
  02e1124  bl 0xfddc0
  02e1128  nop
  02e112c  b 0x2e2e1c
  02e1130  ori 3, 31, 0
  02e1134  ori 4, 30, 0
  02e1138  bl 0x10b030
  02e113c  nop
  02e1140  rlwinm 3, 3, 0, 25, 25
  02e1144  cmpwi 3, 0
  02e1148  bt 2, 0x2e2e1c
  02e114c  li 3, 0
  02e1150  sth 3, 116(30)
  02e1154  lbz 3, 83(31)
  02e1158  cmpwi 3, 10
  02e115c  bt 2, 0x2e1178
  02e1160  ori 3, 31, 0
  02e1164  li 4, 10
  02e1168  li 5, 0
  02e116c  li 6, 10
  02e1170  bl 0xfddc0
  02e1174  nop
  02e1178  li 3, 45
  02e117c  stb 3, 32(31)
  02e1180  b 0x2e2e1c
  02e1184  lfs 1, 128(29)
  02e1188  lfs 2, 16(31)
  02e118c  lfs 3, 132(29)
  02e1190  fsubs 1, 1, 2
  02e1194  lfs 4, 20(31)
  02e1198  fsubs 2, 3, 4
  02e119c  bl 0x5e8338
  02e11a0  nop
  02e11a4  lwz 3, 8320(29)
  02e11a8  lis 4, 46
  02e11ac  addi 4, 4, -6044
  02e11b0  lfs 2, 72(3)
  02e11b4  fsubs 1, 1, 2
  02e11b8  lfs 2, 112(4)
  02e11bc  lfs 3, 116(4)
  02e11c0  lbz 29, 83(31)
  02e11c4  fsubs 1, 1, 2
  02e11c8  fcmpu 0, 1, 3
  02e11cc  cror 6, 1, 2
  02e11d0  bt 6, 0x2e11dc
  02e11d4  fadds 1, 1, 30
  02e11d8  b 0x2e11ec
  02e11dc  fcmpu 0, 1, 2
  02e11e0  cror 6, 0, 2
  02e11e4  bt 6, 0x2e11ec
  02e11e8  fsubs 1, 1, 30
  02e11ec  lis 3, 46
  02e11f0  addi 3, 3, -6044
  02e11f4  lfs 2, 88(3)
  02e11f8  fcmpu 0, 1, 2
  02e11fc  bt 1, 0x2e1218
  02e1200  lis 3, 46
  02e1204  addi 3, 3, -6044
  02e1208  lfs 2, 120(3)
  02e120c  fcmpu 0, 1, 2
  02e1210  cror 6, 1, 2
  02e1214  bt 6, 0x2e2e1c
  02e1218  li 3, 41
  02e121c  cmpwi 29, 3
  02e1220  stb 3, 32(31)
  02e1224  bt 2, 0x2e2e1c
  02e1228  ori 3, 31, 0
  02e122c  li 4, 3
  02e1230  li 5, 0
  02e1234  li 6, 10
  02e1238  bl 0xfddc0
  02e123c  nop
  02e1240  b 0x2e2e1c
  02e1244  lfs 1, 128(29)
  02e1248  lfs 2, 16(31)
  02e124c  lfs 3, 132(29)
  02e1250  fsubs 1, 1, 2
  02e1254  lfs 4, 20(31)
  02e1258  fsubs 2, 3, 4
  02e125c  bl 0x5e8338
  02e1260  nop
  02e1264  lfs 31, 72(31)
  02e1268  lfs 2, 128(29)
  02e126c  fsubs 31, 1, 31
  02e1270  lfs 1, 16(31)
  02e1274  lfs 3, 132(29)
  02e1278  lfs 4, 20(31)
  02e127c  fsubs 1, 2, 1
  02e1280  fsubs 2, 3, 4
  02e1284  bl 0x5e8338
  02e1288  nop
  02e128c  lis 3, 46
  02e1290  addic 5, 30, 112
  02e1294  addi 30, 3, -6044
  02e1298  ori 3, 31, 0
  02e129c  lfs 2, 16(30)
  02e12a0  lfs 3, 20(30)
  02e12a4  lfs 4, 24(30)
  02e12a8  bl 0xff2e8
  02e12ac  nop
  02e12b0  addic 3, 31, 16
  02e12b4  addic 4, 29, 128
  02e12b8  bl 0x5e8588
  02e12bc  nop
  02e12c0  lfs 2, 64(30)
  02e12c4  fcmpu 0, 1, 2
  02e12c8  cror 6, 1, 2
  02e12cc  bt 6, 0x2e2e1c
  02e12d0  lis 3, 46
  02e12d4  addi 3, 3, -6044
  02e12d8  lfs 1, 44(3)
  02e12dc  fcmpu 0, 31, 1
  02e12e0  cror 6, 1, 2
  02e12e4  bt 6, 0x2e2e1c
  02e12e8  lis 3, 46
  02e12ec  addi 3, 3, -6044
  02e12f0  lfs 1, 68(3)
  02e12f4  fcmpu 0, 31, 1
  02e12f8  cror 6, 0, 2
  02e12fc  bt 6, 0x2e2e1c
  02e1300  li 3, 52
  02e1304  stb 3, 32(31)
  02e1308  b 0x2e2e1c
  02e130c  lfs 1, 128(29)
  02e1310  lfs 2, 16(31)
  02e1314  lfs 3, 132(29)
  02e1318  fsubs 1, 1, 2
  02e131c  lfs 4, 20(31)
  02e1320  fsubs 2, 3, 4
  02e1324  bl 0x5e8338
  02e1328  nop
  02e132c  lfs 31, 72(31)
  02e1330  lfs 2, 128(29)
  02e1334  fsubs 31, 1, 31
  02e1338  lfs 1, 16(31)
  02e133c  lfs 3, 132(29)
  02e1340  lfs 4, 20(31)
  02e1344  fsubs 1, 2, 1
  02e1348  fsubs 2, 3, 4
  02e134c  bl 0x5e8338
  02e1350  nop
  02e1354  lis 3, 46
  02e1358  addic 5, 30, 112
  02e135c  addi 28, 3, -6044
  02e1360  ori 3, 31, 0
  02e1364  lfs 2, 16(28)
  02e1368  lfs 3, 20(28)
  02e136c  lfs 4, 24(28)
  02e1370  bl 0xff2e8
  02e1374  nop
  02e1378  lfs 1, 72(31)
  02e137c  bl 0x5e8078
  02e1380  nop
  02e1384  lis 30, 114
  02e1388  lfs 30, 124(28)
  02e138c  lfs 2, -3064(30)
  02e1390  lfs 3, 72(31)
  02e1394  fmuls 2, 2, 30
  02e1398  fmuls 2, 2, 1
  02e139c  fmr 1, 3
  02e13a0  stfs 2, 368(1)
  02e13a4  bl 0x5e8128
  02e13a8  nop
  02e13ac  lfs 2, -3064(30)
  02e13b0  li 4, 0
  02e13b4  addic 30, 31, 16
  02e13b8  fmuls 2, 2, 30
  02e13bc  addic 5, 1, 368
  02e13c0  stw 4, 376(1)
  02e13c4  ori 3, 30, 0
  02e13c8  ori 4, 30, 0
  02e13cc  fmuls 1, 2, 1
  02e13d0  stfs 1, 372(1)
  02e13d4  bl 0x5e7f54
  02e13d8  nop
  02e13dc  addic 29, 29, 128
  02e13e0  ori 3, 30, 0
  02e13e4  ori 4, 29, 0
  02e13e8  bl 0x5e8588
  02e13ec  nop
  02e13f0  lfs 2, 128(28)
  02e13f4  fcmpu 0, 1, 2
  02e13f8  cror 6, 1, 2
  02e13fc  bt 6, 0x2e143c
  02e1400  lis 3, 46
  02e1404  addi 3, 3, -6044
  02e1408  lfs 1, 44(3)
  02e140c  fcmpu 0, 31, 1
  02e1410  cror 6, 1, 2
  02e1414  bt 6, 0x2e143c
  02e1418  lis 3, 46
  02e141c  addi 3, 3, -6044
  02e1420  lfs 1, 68(3)
  02e1424  fcmpu 0, 31, 1
  02e1428  cror 6, 0, 2
  02e142c  bt 6, 0x2e143c
  02e1430  li 3, 53
  02e1434  stb 3, 32(31)
  02e1438  b 0x2e2e1c
  02e143c  ori 3, 30, 0
  02e1440  ori 4, 29, 0
  02e1444  bl 0x5e8588
  02e1448  nop
  02e144c  lis 3, 46
  02e1450  addi 3, 3, -6044
  02e1454  lfs 2, 36(3)
  02e1458  fcmpu 0, 1, 2
  02e145c  cror 6, 0, 2
  02e1460  bt 6, 0x2e2e1c
  02e1464  li 3, 51
  02e1468  stb 3, 32(31)
  02e146c  b 0x2e2e1c
  02e1470  lfs 1, 128(29)
  02e1474  lfs 2, 16(31)
  02e1478  lfs 3, 132(29)
  02e147c  lfs 4, 20(31)
  02e1480  fsubs 1, 1, 2
  02e1484  fsubs 2, 3, 4
  02e1488  bl 0x5e8338
  02e148c  nop
  02e1490  lis 3, 46
  02e1494  addic 5, 30, 112
  02e1498  addi 4, 3, -6044
  02e149c  ori 3, 31, 0
  02e14a0  lfs 31, 24(4)
  02e14a4  lfs 2, 16(4)
  02e14a8  lfs 3, 20(4)
  02e14ac  fmr 4, 31
  02e14b0  bl 0xff2e8
  02e14b4  nop
  02e14b8  lhz 3, 116(30)
  02e14bc  extsh 3, 3
  02e14c0  addic 4, 3, 1
  02e14c4  cmpwi 3, 60
  02e14c8  sth 4, 116(30)
  02e14cc  bf 1, 0x2e1588
  02e14d0  lis 3, 46
  02e14d4  li 28, 0
  02e14d8  addi 27, 3, -6044
  02e14dc  lis 6, 16256
  02e14e0  addic 26, 1, 384
  02e14e4  ori 3, 31, 0
  02e14e8  li 4, 1
  02e14ec  lfs 1, 84(27)
  02e14f0  ori 5, 26, 0
  02e14f4  stw 28, 400(1)
  02e14f8  stw 28, 404(1)
  02e14fc  stw 28, 408(1)
  02e1500  fmr 30, 1
  02e1504  stw 6, 412(1)
  02e1508  bl 0xf1114
  02e150c  nop
  02e1510  lfs 3, 44(27)
  02e1514  lfs 2, 392(1)
  02e1518  addic 27, 1, 400
  02e151c  lis 7, 32
  02e1520  fmr 1, 30
  02e1524  fsubs 2, 2, 3
  02e1528  ori 3, 27, 0
  02e152c  ori 4, 26, 0
  02e1530  ori 6, 31, 0
  02e1534  ori 7, 7, 65535
  02e1538  stfs 2, 392(1)
  02e153c  bl 0x299400
  02e1540  nop
  02e1544  ori 25, 3, 0
  02e1548  ori 5, 26, 0
  02e154c  addic 4, 29, 128
  02e1550  ori 3, 27, 0
  02e1554  bl 0x5e81f0
  02e1558  nop
  02e155c  lis 5, 114
  02e1560  lwz 3, 120(25)
  02e1564  ori 4, 27, 0
  02e1568  addic 3, 3, 32
  02e156c  lfs 1, -3064(5)
  02e1570  fmuls 1, 1, 31
  02e1574  bl 0x5e7f98
  02e1578  nop
  02e157c  li 3, 1
  02e1580  stb 3, 32(25)
  02e1584  sth 28, 116(30)
  02e1588  addic 3, 31, 16
  02e158c  addic 4, 29, 128
  02e1590  bl 0x5e8588
  02e1594  nop
  02e1598  lis 3, 46
  02e159c  addi 3, 3, -6044
  02e15a0  lfs 2, 132(3)
  02e15a4  fcmpu 0, 1, 2
  02e15a8  cror 6, 0, 2
  02e15ac  bt 6, 0x2e2e1c
  02e15b0  li 3, 51
  02e15b4  li 4, 0
  02e15b8  stb 3, 32(31)
  02e15bc  sth 4, 116(30)
  02e15c0  b 0x2e2e1c
  02e15c4  lfs 1, 128(29)
  02e15c8  lfs 2, 16(31)
  02e15cc  lfs 3, 132(29)
  02e15d0  lfs 4, 20(31)
  02e15d4  fsubs 1, 1, 2
  02e15d8  fsubs 2, 3, 4
  02e15dc  bl 0x5e8338
  02e15e0  nop
  02e15e4  lis 3, 46
  02e15e8  addic 5, 30, 112
  02e15ec  addi 28, 3, -6044
  02e15f0  ori 3, 31, 0
  02e15f4  lfs 2, 16(28)
  02e15f8  lfs 3, 20(28)
  02e15fc  lfs 4, 24(28)
  02e1600  bl 0xff2e8
  02e1604  nop
  02e1608  addic 30, 31, 16
  02e160c  addic 29, 29, 128
  02e1610  ori 3, 30, 0
  02e1614  ori 4, 29, 0
  02e1618  bl 0x5e8588
  02e161c  nop
  02e1620  lfs 2, 136(28)
  02e1624  fcmpu 0, 1, 2
  02e1628  cror 6, 1, 2
  02e162c  bt 6, 0x2e1660
  02e1630  li 3, 63
  02e1634  lbz 4, 83(31)
  02e1638  cmpwi 4, 2
  02e163c  stb 3, 32(31)
  02e1640  bt 2, 0x2e2e1c
  02e1644  ori 3, 31, 0
  02e1648  li 4, 2
  02e164c  li 5, 0
  02e1650  li 6, 3
  02e1654  bl 0xfddc0
  02e1658  nop
  02e165c  b 0x2e2e1c
  02e1660  ori 3, 30, 0
  02e1664  ori 4, 29, 0
  02e1668  bl 0x5e8588
  02e166c  nop
  02e1670  lis 3, 46
  02e1674  addi 3, 3, -6044
  02e1678  lfs 2, 36(3)
  02e167c  fcmpu 0, 1, 2
  02e1680  cror 6, 1, 2
  02e1684  bt 6, 0x2e2e1c
  02e1688  li 3, 62
  02e168c  lbz 4, 83(31)
  02e1690  cmpwi 4, 7
  02e1694  stb 3, 32(31)
  02e1698  bt 2, 0x2e2e1c
  02e169c  ori 3, 31, 0
  02e16a0  li 4, 7
  02e16a4  li 5, 0
  02e16a8  li 6, 3
  02e16ac  bl 0xfddc0
  02e16b0  nop
  02e16b4  b 0x2e2e1c
  02e16b8  ori 3, 31, 0
  02e16bc  bl 0xefe40
  02e16c0  nop
  02e16c4  lfs 2, 128(29)
  02e16c8  fmr 31, 1
  02e16cc  lfs 1, 16(31)
  02e16d0  lfs 3, 132(29)
  02e16d4  lfs 4, 20(31)
  02e16d8  fsubs 1, 2, 1
  02e16dc  fsubs 2, 3, 4
  02e16e0  bl 0x5e8338
  02e16e4  nop
  02e16e8  lis 3, 46
  02e16ec  addic 5, 30, 112
  02e16f0  addi 29, 3, -6044
  02e16f4  ori 3, 31, 0
  02e16f8  lfs 2, 16(29)
  02e16fc  lfs 3, 20(29)
  02e1700  lfs 4, 24(29)
  02e1704  bl 0xff2e8
  02e1708  nop
  02e170c  lfs 1, 104(29)
  02e1710  lwz 29, 36(31)
  02e1714  fcmpu 0, 31, 1
  02e1718  bt 0, 0x2e1764
  02e171c  lis 3, 46
  02e1720  addi 3, 3, -6044
  02e1724  lfs 1, 140(3)
  02e1728  fcmpu 0, 31, 1
  02e172c  cror 6, 1, 2
  02e1730  bt 6, 0x2e1764
  02e1734  lbz 3, 82(31)
  02e1738  cmpwi 3, 2
  02e173c  bf 2, 0x2e1764
  02e1740  fsubs 1, 1, 31
  02e1744  lis 3, 46
  02e1748  addi 3, 3, -6044
  02e174c  lfs 2, 144(3)
  02e1750  lfs 3, 36(29)
  02e1754  fmuls 1, 1, 2
  02e1758  fmuls 1, 3, 1
  02e175c  stfs 1, 44(31)
  02e1760  b 0x2e1838
  02e1764  lis 3, 46
  02e1768  addi 3, 3, -6044
  02e176c  lfs 1, 140(3)
  02e1770  fcmpu 1, 31, 1
  02e1774  bf 6, 0x2e17f4
  02e1778  lbz 3, 82(31)
  02e177c  cmpwi 3, 2
  02e1780  bf 2, 0x2e17f4
  02e1784  lwz 3, 144(30)
  02e1788  lwz 4, 128(30)
  02e178c  lbz 5, 132(30)
  02e1790  extsb 5, 5
  02e1794  lwz 6, 0(3)
  02e1798  addc 4, 4, 6
  02e179c  addc 4, 4, 5
  02e17a0  divw 5, 4, 6
  02e17a4  mullw 5, 5, 6
  02e17a8  subc 5, 4, 5
  02e17ac  sldi 4, 5, 4
  02e17b0  addc 3, 3, 4
  02e17b4  addic 4, 1, 416
  02e17b8  clrldi 6, 3, 32
  02e17bc  addic 3, 31, 16
  02e17c0  lfs 1, 16(6)
  02e17c4  stfs 1, 416(1)
  02e17c8  lfs 1, 20(6)
  02e17cc  stfs 1, 420(1)
  02e17d0  lfs 1, 24(6)
  02e17d4  stfs 1, 424(1)
  02e17d8  lfs 1, 28(6)
  02e17dc  stw 5, 128(30)
  02e17e0  stfs 1, 428(1)
  02e17e4  bl 0x5e7e98
  02e17e8  nop
  02e17ec  lwz 29, 36(31)
  02e17f0  b 0x2e1838
  02e17f4  bf 5, 0x2e1838
  02e17f8  lis 3, 46
  02e17fc  addi 3, 3, -6044
  02e1800  lfs 2, 148(3)
  02e1804  fcmpu 0, 31, 2
  02e1808  bt 1, 0x2e1838
  02e180c  lbz 3, 82(31)
  02e1810  cmpwi 3, 2
  02e1814  bf 2, 0x2e1838
  02e1818  fsubs 1, 31, 1
  02e181c  lis 3, 46
  02e1820  addi 3, 3, -6044
  02e1824  lfs 2, 144(3)
  02e1828  lfs 3, 36(29)
  02e182c  fmuls 1, 1, 2
  02e1830  fmuls 1, 3, 1
  02e1834  stfs 1, 44(31)
  02e1838  lbz 3, 112(31)
  02e183c  rlwinm 3, 3, 0, 30, 30
  02e1840  cmpwi 3, 0
  02e1844  bt 2, 0x2e2e1c
  02e1848  li 3, 61
  02e184c  stb 3, 32(31)
  02e1850  lfs 1, 36(29)
  02e1854  lbz 3, 83(31)
  02e1858  stfs 1, 44(31)
  02e185c  cmpwi 3, 3
  02e1860  bt 2, 0x2e2e1c
  02e1864  ori 3, 31, 0
  02e1868  li 4, 3
  02e186c  li 5, 0
  02e1870  li 6, 3
  02e1874  bl 0xfddc0
  02e1878  nop
  02e187c  b 0x2e2e1c
  02e1880  lfs 1, 128(29)
  02e1884  lfs 2, 16(31)
  02e1888  lfs 3, 132(29)
  02e188c  lfs 4, 20(31)
  02e1890  fsubs 1, 1, 2
  02e1894  fsubs 2, 3, 4
  02e1898  bl 0x5e8338
  02e189c  nop
  02e18a0  lis 3, 46
  02e18a4  addic 5, 30, 112
  02e18a8  addi 4, 3, -6044
  02e18ac  ori 3, 31, 0
  02e18b0  lfs 2, 16(4)
  02e18b4  lfs 3, 20(4)
  02e18b8  lfs 4, 24(4)
  02e18bc  bl 0xff2e8
  02e18c0  nop
  02e18c4  lbz 3, 82(31)
  02e18c8  lbz 4, 83(31)
  02e18cc  cmpw 3, 4
  02e18d0  bf 2, 0x2e1910
  02e18d4  lbz 5, 112(31)
  02e18d8  rlwinm 5, 5, 0, 30, 30
  02e18dc  cmpwi 5, 0
  02e18e0  bt 2, 0x2e1910
  02e18e4  cmpwi 4, 7
  02e18e8  bf 2, 0x2e1910
  02e18ec  cmpwi 4, 8
  02e18f0  bt 2, 0x2e1ae8
  02e18f4  ori 3, 31, 0
  02e18f8  li 4, 8
  02e18fc  li 5, 0
  02e1900  li 6, 3
  02e1904  bl 0xfddc0
  02e1908  nop
  02e190c  b 0x2e1ae8
  02e1910  xor 3, 3, 4
  02e1914  cmpwi 3, 0
  02e1918  bf 2, 0x2e1a8c
  02e191c  ori 3, 31, 0
  02e1920  bl 0xefe40
  02e1924  nop
  02e1928  lis 3, 46
  02e192c  addi 3, 3, -6044
  02e1930  lfs 2, 76(3)
  02e1934  fcmpu 0, 1, 2
  02e1938  bt 2, 0x2e195c
  02e193c  ori 3, 31, 0
  02e1940  bl 0xefe40
  02e1944  nop
  02e1948  lis 3, 46
  02e194c  addi 3, 3, -6044
  02e1950  lfs 2, 80(3)
  02e1954  fcmpu 0, 1, 2
  02e1958  bf 2, 0x2e1a8c
  02e195c  lbz 3, 83(31)
  02e1960  cmpwi 3, 8
  02e1964  bf 2, 0x2e1a8c
  02e1968  lis 3, 149
  02e196c  lfs 1, 16(31)
  02e1970  addic 3, 3, 5056
  02e1974  lfs 2, 20(31)
  02e1978  lfs 31, 344(3)
  02e197c  lfs 3, 320(3)
  02e1980  lfs 4, 324(3)
  02e1984  fsubs 1, 1, 3
  02e1988  fsubs 2, 2, 4
  02e198c  bl 0x5e8338
  02e1990  nop
  02e1994  fmr 2, 1
  02e1998  fmr 1, 31
  02e199c  bl 0x5026a0
  02e19a0  nop
  02e19a4  lis 3, 46
  02e19a8  addi 3, 3, -6044
  02e19ac  lfs 2, 48(3)
  02e19b0  fcmpu 0, 1, 2
  02e19b4  cror 6, 1, 2
  02e19b8  bt 6, 0x2e1a8c
  02e19bc  lis 3, 46
  02e19c0  li 27, 0
  02e19c4  addi 28, 3, -6044
  02e19c8  lis 6, 16256
  02e19cc  addic 30, 1, 432
  02e19d0  ori 3, 31, 0
  02e19d4  li 4, 1
  02e19d8  lfs 1, 84(28)
  02e19dc  stw 27, 448(1)
  02e19e0  ori 5, 30, 0
  02e19e4  stw 27, 452(1)
  02e19e8  fmr 31, 1
  02e19ec  stw 27, 456(1)
  02e19f0  stw 6, 460(1)
  02e19f4  bl 0xf1114
  02e19f8  nop
  02e19fc  lfs 3, 44(28)
  02e1a00  lis 7, 32
  02e1a04  lfs 2, 440(1)
  02e1a08  addic 3, 1, 448
  02e1a0c  fmr 1, 31
  02e1a10  ori 4, 30, 0
  02e1a14  fadds 2, 2, 3
  02e1a18  ori 6, 31, 0
  02e1a1c  ori 7, 7, 65535
  02e1a20  stfs 2, 440(1)
  02e1a24  bl 0x299400
  02e1a28  nop
  02e1a2c  lfs 1, 72(31)
  02e1a30  ori 30, 3, 0
  02e1a34  bl 0x5e8078
  02e1a38  nop
  02e1a3c  lfs 31, 100(28)
  02e1a40  lis 28, 114
  02e1a44  lfs 2, -3064(28)
  02e1a48  lwz 3, 120(30)
  02e1a4c  fmuls 2, 2, 31
  02e1a50  fmuls 1, 2, 1
  02e1a54  stfs 1, 32(3)
  02e1a58  lfs 1, 72(31)
  02e1a5c  bl 0x5e8128
  02e1a60  nop
  02e1a64  lfs 2, -3064(28)
  02e1a68  li 4, 1
  02e1a6c  lwz 3, 120(30)
  02e1a70  fmuls 2, 2, 31
  02e1a74  fmuls 1, 2, 1
  02e1a78  stfs 1, 36(3)
  02e1a7c  lwz 3, 120(30)
  02e1a80  stw 27, 40(3)
  02e1a84  stb 4, 32(30)
  02e1a88  b 0x2e1ae8
  02e1a8c  lbz 3, 82(31)
  02e1a90  lbz 4, 83(31)
  02e1a94  cmpw 3, 4
  02e1a98  cmpwi 1, 4, 9
  02e1a9c  bf 2, 0x2e1ae8
  02e1aa0  lbz 3, 112(31)
  02e1aa4  rlwinm 3, 3, 0, 30, 30
  02e1aa8  cmpwi 3, 0
  02e1aac  bt 2, 0x2e1ae8
  02e1ab0  bf 6, 0x2e1ae8
  02e1ab4  li 3, 0
  02e1ab8  li 4, 61
  02e1abc  sth 3, 116(30)
  02e1ac0  lbz 3, 83(31)
  02e1ac4  stb 4, 32(31)
  02e1ac8  cmpwi 3, 3
  02e1acc  bt 2, 0x2e1ae8
  02e1ad0  ori 3, 31, 0
  02e1ad4  li 4, 3
  02e1ad8  li 5, 0
  02e1adc  li 6, 3
  02e1ae0  bl 0xfddc0
  02e1ae4  nop
  02e1ae8  lbz 3, 83(31)
  02e1aec  cmpwi 3, 8
  02e1af0  cmpwi 1, 3, 9
  02e1af4  bf 2, 0x2e1b24
  02e1af8  lbz 3, 112(31)
  02e1afc  rlwinm 3, 3, 0, 30, 30
  02e1b00  cmpwi 3, 0
  02e1b04  bt 2, 0x2e1b24
  02e1b08  bt 6, 0x2e1b24
  02e1b0c  ori 3, 31, 0
  02e1b10  li 4, 9
  02e1b14  li 5, 0
  02e1b18  li 6, 3
  02e1b1c  bl 0xfddc0
  02e1b20  nop
  02e1b24  addic 3, 31, 16
  02e1b28  addic 4, 29, 128
  02e1b2c  bl 0x5e8588
  02e1b30  nop
  02e1b34  lis 3, 46
  02e1b38  addi 3, 3, -6044
  02e1b3c  lfs 2, 136(3)
  02e1b40  fcmpu 0, 1, 2
  02e1b44  cror 6, 1, 2
  02e1b48  bt 6, 0x2e2e1c
  02e1b4c  li 3, 63
  02e1b50  lbz 4, 83(31)
  02e1b54  cmpwi 4, 2
  02e1b58  stb 3, 32(31)
  02e1b5c  bt 2, 0x2e2e1c
  02e1b60  ori 3, 31, 0
  02e1b64  li 4, 2
  02e1b68  li 5, 0
  02e1b6c  li 6, 3
  02e1b70  bl 0xfddc0
  02e1b74  nop
  02e1b78  b 0x2e2e1c
  02e1b7c  lfs 1, 128(29)
  02e1b80  lfs 2, 16(31)
  02e1b84  lfs 3, 132(29)
  02e1b88  lfs 4, 20(31)
  02e1b8c  fsubs 1, 1, 2
  02e1b90  fsubs 2, 3, 4
  02e1b94  bl 0x5e8338
  02e1b98  nop
  02e1b9c  lis 3, 46
  02e1ba0  addic 5, 30, 112
  02e1ba4  addi 30, 3, -6044
  02e1ba8  ori 3, 31, 0
  02e1bac  lfs 2, 16(30)
  02e1bb0  lfs 3, 20(30)
  02e1bb4  lfs 4, 24(30)
  02e1bb8  bl 0xff2e8
  02e1bbc  nop
  02e1bc0  addic 3, 31, 16
  02e1bc4  addic 4, 29, 128
  02e1bc8  bl 0x5e8588
  02e1bcc  nop
  02e1bd0  lfs 2, 36(30)
  02e1bd4  fcmpu 0, 1, 2
  02e1bd8  cror 6, 1, 2
  02e1bdc  bt 6, 0x2e2e1c
  02e1be0  li 3, 72
  02e1be4  lbz 4, 83(31)
  02e1be8  cmpwi 4, 12
  02e1bec  stb 3, 32(31)
  02e1bf0  bt 2, 0x2e2e1c
  02e1bf4  ori 3, 31, 0
  02e1bf8  li 4, 12
  02e1bfc  li 5, 0
  02e1c00  li 6, 3
  02e1c04  bl 0xfddc0
  02e1c08  nop
  02e1c0c  b 0x2e2e1c
  02e1c10  lfs 1, 128(29)
  02e1c14  lfs 2, 16(31)
  02e1c18  lfs 3, 132(29)
  02e1c1c  lfs 4, 20(31)
  02e1c20  fsubs 1, 1, 2
  02e1c24  fsubs 2, 3, 4
  02e1c28  bl 0x5e8338
  02e1c2c  nop
  02e1c30  lis 3, 46
  02e1c34  addic 5, 30, 112
  02e1c38  addi 4, 3, -6044
  02e1c3c  ori 3, 31, 0
  02e1c40  lfs 2, 16(4)
  02e1c44  lfs 3, 20(4)
  02e1c48  lfs 4, 72(4)
  02e1c4c  bl 0xff2e8
  02e1c50  nop
  02e1c54  lbz 3, 82(31)
  02e1c58  lbz 4, 83(31)
  02e1c5c  cmpw 3, 4
  02e1c60  bf 2, 0x2e1de0
  02e1c64  ori 3, 31, 0
  02e1c68  bl 0xefe40
  02e1c6c  nop
  02e1c70  lis 3, 46
  02e1c74  addi 3, 3, -6044
  02e1c78  lfs 2, 152(3)
  02e1c7c  fcmpu 0, 1, 2
  02e1c80  bf 2, 0x2e1de0
  02e1c84  lis 3, 46
  02e1c88  li 5, 0
  02e1c8c  addi 26, 3, -6044
  02e1c90  lis 6, 16256
  02e1c94  addic 28, 31, 16
  02e1c98  addic 3, 1, 480
  02e1c9c  ori 4, 28, 0
  02e1ca0  lfs 31, 84(26)
  02e1ca4  stw 5, 496(1)
  02e1ca8  stw 5, 500(1)
  02e1cac  stw 5, 504(1)
  02e1cb0  stw 6, 508(1)
  02e1cb4  bl 0x5e7e98
  02e1cb8  nop
  02e1cbc  lfs 30, 92(26)
  02e1cc0  li 30, -4
  02e1cc4  lfs 1, 488(1)
  02e1cc8  li 27, -32
  02e1ccc  fadds 1, 1, 30
  02e1cd0  stfs 1, 488(1)
  02e1cd4  lfs 29, 156(26)
  02e1cd8  lfs 28, 0(26)
  02e1cdc  lfs 27, 100(26)
  02e1ce0  extsw 3, 27
  02e1ce4  std 3, 688(1)
  02e1ce8  lfs 1, 72(31)
  02e1cec  lfd 2, 688(1)
  02e1cf0  fcfid 2, 2
  02e1cf4  frsp 26, 2
  02e1cf8  fmadds 1, 26, 29, 1
  02e1cfc  bl 0x5e8078
  02e1d00  nop
  02e1d04  fmuls 2, 1, 28
  02e1d08  lfs 1, 72(31)
  02e1d0c  fmadds 1, 26, 29, 1
  02e1d10  stfs 2, 464(1)
  02e1d14  bl 0x5e8128
  02e1d18  nop
  02e1d1c  fmuls 1, 1, 28
  02e1d20  li 26, 0
  02e1d24  addic 25, 1, 464
  02e1d28  ori 5, 28, 0
  02e1d2c  ori 3, 25, 0
  02e1d30  stw 26, 472(1)
  02e1d34  ori 4, 25, 0
  02e1d38  stfs 1, 468(1)
  02e1d3c  bl 0x5e7f54
  02e1d40  nop
  02e1d44  lfs 1, 472(1)
  02e1d48  lis 7, 32
  02e1d4c  addic 3, 1, 496
  02e1d50  fadds 2, 1, 30
  02e1d54  fmr 1, 31
  02e1d58  ori 4, 25, 0
  02e1d5c  ori 6, 31, 0
  02e1d60  ori 7, 7, 65535
  02e1d64  stfs 2, 472(1)
  02e1d68  bl 0x299400
  02e1d6c  nop
  02e1d70  lfs 1, 72(31)
  02e1d74  ori 25, 3, 0
  02e1d78  fmadds 1, 26, 29, 1
  02e1d7c  bl 0x5e8078
  02e1d80  nop
  02e1d84  lis 24, 114
  02e1d88  lwz 3, 120(25)
  02e1d8c  lfs 2, -3064(24)
  02e1d90  fmuls 2, 2, 27
  02e1d94  fmuls 1, 2, 1
  02e1d98  stfs 1, 32(3)
  02e1d9c  lfs 1, 72(31)
  02e1da0  fmadds 1, 26, 29, 1
  02e1da4  bl 0x5e8128
  02e1da8  nop
  02e1dac  lfs 2, -3064(24)
  02e1db0  li 4, 1
  02e1db4  lwz 3, 120(25)
  02e1db8  addic 30, 30, 1
  02e1dbc  fmuls 2, 2, 27
  02e1dc0  addic 27, 27, 8
  02e1dc4  cmpwi 30, 5
  02e1dc8  fmuls 1, 2, 1
  02e1dcc  stfs 1, 36(3)
  02e1dd0  lwz 3, 120(25)
  02e1dd4  stw 26, 40(3)
  02e1dd8  stb 4, 32(25)
  02e1ddc  bt 0, 0x2e1ce0
  02e1de0  lwz 3, 8324(29)
  02e1de4  cmpwi 3, 22
  02e1de8  bt 2, 0x2e1e14
  02e1dec  addic 3, 31, 16
  02e1df0  addic 4, 29, 128
  02e1df4  bl 0x5e8588
  02e1df8  nop
  02e1dfc  lis 3, 46
  02e1e00  addi 3, 3, -6044
  02e1e04  lfs 2, 160(3)
  02e1e08  fcmpu 0, 1, 2
  02e1e0c  cror 6, 0, 2
  02e1e10  bt 6, 0x2e2e1c
  02e1e14  lbz 3, 112(31)
  02e1e18  rlwinm 3, 3, 0, 30, 30
  02e1e1c  cmpwi 3, 0
  02e1e20  bt 2, 0x2e2e1c
  02e1e24  li 3, 71
  02e1e28  lbz 4, 83(31)
  02e1e2c  cmpwi 4, 3
  02e1e30  stb 3, 32(31)
  02e1e34  bt 2, 0x2e2e1c
  02e1e38  ori 3, 31, 0
  02e1e3c  li 4, 3
  02e1e40  li 5, 0
  02e1e44  li 6, 3
  02e1e48  bl 0xfddc0
  02e1e4c  nop
  02e1e50  b 0x2e2e1c
  02e1e54  lfs 1, 128(29)
  02e1e58  lfs 2, 16(31)
  02e1e5c  lfs 3, 132(29)
  02e1e60  lfs 4, 20(31)
  02e1e64  fsubs 1, 1, 2
  02e1e68  fsubs 2, 3, 4
  02e1e6c  bl 0x5e8338
  02e1e70  nop
  02e1e74  lis 3, 46
  02e1e78  addic 5, 30, 112
  02e1e7c  addi 30, 3, -6044
  02e1e80  ori 3, 31, 0
  02e1e84  lfs 2, 16(30)
  02e1e88  lfs 3, 20(30)
  02e1e8c  lfs 4, 24(30)
  02e1e90  bl 0xff2e8
  02e1e94  nop
  02e1e98  addic 3, 31, 16
  02e1e9c  addic 4, 29, 128
  02e1ea0  bl 0x5e8588
  02e1ea4  nop
  02e1ea8  lfs 2, 132(30)
  02e1eac  fcmpu 0, 1, 2
  02e1eb0  cror 6, 1, 2
  02e1eb4  bt 6, 0x2e2e1c
  02e1eb8  li 3, 82
  02e1ebc  lbz 4, 83(31)
  02e1ec0  cmpwi 4, 13
  02e1ec4  stb 3, 32(31)
  02e1ec8  bt 2, 0x2e2e1c
  02e1ecc  ori 3, 31, 0
  02e1ed0  li 4, 13
  02e1ed4  li 5, 0
  02e1ed8  li 6, 3
  02e1edc  bl 0xfddc0
  02e1ee0  nop
  02e1ee4  b 0x2e2e1c
  02e1ee8  lfs 1, 128(29)
  02e1eec  lfs 2, 16(31)
  02e1ef0  lfs 3, 132(29)
  02e1ef4  lfs 4, 20(31)
  02e1ef8  fsubs 1, 1, 2
  02e1efc  fsubs 2, 3, 4
  02e1f00  bl 0x5e8338
  02e1f04  nop
  02e1f08  lis 3, 46
  02e1f0c  addic 5, 30, 112
  02e1f10  addi 26, 3, -6044
  02e1f14  ori 3, 31, 0
  02e1f18  lfs 2, 16(26)
  02e1f1c  lfs 3, 20(26)
  02e1f20  lfs 4, 24(26)
  02e1f24  bl 0xff2e8
  02e1f28  nop
  02e1f2c  addic 28, 31, 16
  02e1f30  addic 27, 29, 128
  02e1f34  ori 3, 28, 0
  02e1f38  ori 4, 27, 0
  02e1f3c  bl 0x5e8588
  02e1f40  nop
  02e1f44  lfs 31, 132(26)
  02e1f48  fcmpu 0, 1, 31
  02e1f4c  cror 6, 1, 2
  02e1f50  bt 6, 0x2e1ffc
  02e1f54  ori 3, 31, 0
  02e1f58  bl 0xefe40
  02e1f5c  nop
  02e1f60  lis 3, 46
  02e1f64  addi 3, 3, -6044
  02e1f68  lfs 2, 164(3)
  02e1f6c  fcmpu 0, 1, 2
  02e1f70  bf 2, 0x2e1ffc
  02e1f74  lfs 1, 72(31)
  02e1f78  bl 0x5e8078
  02e1f7c  nop
  02e1f80  li 28, 0
  02e1f84  lfs 1, 72(31)
  02e1f88  stw 28, 512(1)
  02e1f8c  bl 0x5e8128
  02e1f90  nop
  02e1f94  lis 3, 16832
  02e1f98  stw 28, 516(1)
  02e1f9c  lwz 4, 8320(29)
  02e1fa0  addic 28, 1, 528
  02e1fa4  addic 4, 4, 16
  02e1fa8  stw 3, 520(1)
  02e1fac  ori 3, 28, 0
  02e1fb0  bl 0x5e7e98
  02e1fb4  nop
  02e1fb8  lis 3, 46
  02e1fbc  lfs 1, 536(1)
  02e1fc0  ori 4, 31, 0
  02e1fc4  addi 6, 3, -6044
  02e1fc8  li 3, 30
  02e1fcc  addic 8, 1, 512
  02e1fd0  li 5, 1
  02e1fd4  ori 7, 28, 0
  02e1fd8  lfs 2, 56(6)
  02e1fdc  sth 3, 116(30)
  02e1fe0  fadds 1, 1, 2
  02e1fe4  lwz 3, 8320(29)
  02e1fe8  stfs 1, 536(1)
  02e1fec  lfs 1, 60(6)
  02e1ff0  bl 0x105c08
  02e1ff4  nop
  02e1ff8  b 0x2e2054
  02e1ffc  ori 3, 28, 0
  02e2000  ori 4, 27, 0
  02e2004  bl 0x5e8588
  02e2008  nop
  02e200c  fcmpu 0, 1, 31
  02e2010  cror 6, 0, 2
  02e2014  bt 6, 0x2e2054
  02e2018  lbz 3, 112(31)
  02e201c  rlwinm 3, 3, 0, 30, 30
  02e2020  cmpwi 3, 0
  02e2024  bt 2, 0x2e2054
  02e2028  li 3, 81
  02e202c  lbz 4, 83(31)
  02e2030  cmpwi 4, 3
  02e2034  stb 3, 32(31)
  02e2038  bt 2, 0x2e2054
  02e203c  ori 3, 31, 0
  02e2040  li 4, 3
  02e2044  li 5, 0
  02e2048  li 6, 3
  02e204c  bl 0xfddc0
  02e2050  nop
  02e2054  li 3, 116
  02e2058  vspltisw 2, -16
  02e205c  addi 4, 3, 16
  02e2060  <unknown>
  02e2064  lhz 3, 116(30)
  02e2068  <unknown>
  02e206c  extsh 3, 3
  02e2070  vor 3, 3, 4
  02e2074  cmpwi 3, 0
  02e2078  vsraw 2, 3, 2
  02e207c  bf 1, 0x2e2e1c
  02e2080  lis 3, 46
  02e2084  vcfsx 2, 2, 0
  02e2088  li 4, 136
  02e208c  addi 28, 3, -6044
  02e2090  li 3, 168
  02e2094  <unknown>
  02e2098  <unknown>
  02e209c  vspltw 3, 3, 0
  02e20a0  vmaddfp 2, 2, 3, 4
  02e20a4  vspltw 2, 2, 0
  02e20a8  stvewx 2, 4, 29
  02e20ac  lfs 1, 72(31)
  02e20b0  bl 0x5e8078
  02e20b4  nop
  02e20b8  lhz 3, 116(30)
  02e20bc  extsh 3, 3
  02e20c0  extsw 3, 3
  02e20c4  std 3, 688(1)
  02e20c8  lfs 31, 172(28)
  02e20cc  lfs 2, 72(31)
  02e20d0  lfd 3, 688(1)
  02e20d4  fcfid 3, 3
  02e20d8  frsp 3, 3
  02e20dc  fmuls 3, 1, 3
  02e20e0  fmr 1, 2
  02e20e4  fmuls 2, 3, 31
  02e20e8  stfs 2, 544(1)
  02e20ec  bl 0x5e8128
  02e20f0  nop
  02e20f4  lhz 3, 116(30)
  02e20f8  li 6, 0
  02e20fc  extsh 3, 3
  02e2100  extsw 3, 3
  02e2104  addic 5, 1, 544
  02e2108  ori 4, 27, 0
  02e210c  std 3, 688(1)
  02e2110  stw 6, 552(1)
  02e2114  lfd 2, 688(1)
  02e2118  ori 3, 27, 0
  02e211c  fcfid 2, 2
  02e2120  frsp 2, 2
  02e2124  fmuls 1, 1, 2
  02e2128  fmuls 1, 1, 31
  02e212c  stfs 1, 548(1)
  02e2130  bl 0x5e7f54
  02e2134  nop
  02e2138  lhz 3, 116(30)
  02e213c  addic 3, 3, -1
  02e2140  sth 3, 116(30)
  02e2144  b 0x2e2e1c
  02e2148  ori 3, 31, 0
  02e214c  ori 4, 30, 0
  02e2150  bl 0x10b030
  02e2154  nop
  02e2158  rlwinm 3, 3, 0, 25, 25
  02e215c  cmpwi 3, 0
  02e2160  bt 2, 0x2e2e1c
  02e2164  lbz 3, 83(31)
  02e2168  cmpwi 3, 3
  02e216c  bt 2, 0x2e2188
  02e2170  ori 3, 31, 0
  02e2174  li 4, 3
  02e2178  li 5, 0
  02e217c  li 6, 3
  02e2180  bl 0xfddc0
  02e2184  nop
  02e2188  li 3, 81
  02e218c  stb 3, 32(31)
  02e2190  b 0x2e2e1c
  02e2194  lfs 1, 128(29)
  02e2198  lfs 2, 16(31)
  02e219c  lfs 3, 132(29)
  02e21a0  lfs 4, 20(31)
  02e21a4  fsubs 1, 1, 2
  02e21a8  fsubs 2, 3, 4
  02e21ac  bl 0x5e8338
  02e21b0  nop
  02e21b4  lis 3, 46
  02e21b8  addic 5, 30, 112
  02e21bc  addi 4, 3, -6044
  02e21c0  ori 3, 31, 0
  02e21c4  lfs 2, 16(4)
  02e21c8  lfs 3, 20(4)
  02e21cc  lfs 4, 24(4)
  02e21d0  bl 0xff2e8
  02e21d4  nop
  02e21d8  lhz 3, 116(30)
  02e21dc  extsh 4, 3
  02e21e0  cmpwi 4, 0
  02e21e4  bf 1, 0x2e21f0
  02e21e8  addic 3, 3, -1
  02e21ec  sth 3, 116(30)
  02e21f0  addic 29, 29, 128
  02e21f4  addic 3, 31, 16
  02e21f8  ori 4, 29, 0
  02e21fc  bl 0x5e8588
  02e2200  nop
  02e2204  lis 3, 46
  02e2208  addi 3, 3, -6044
  02e220c  lfs 2, 176(3)
  02e2210  fcmpu 0, 1, 2
  02e2214  cror 6, 1, 2
  02e2218  bt 6, 0x2e2e1c
  02e221c  lhz 3, 116(30)
  02e2220  cmpwi 3, 0
  02e2224  bf 2, 0x2e2e1c
  02e2228  addic 3, 30, 96
  02e222c  ori 4, 29, 0
  02e2230  bl 0x5e7e98
  02e2234  nop
  02e2238  li 3, 92
  02e223c  lbz 4, 83(31)
  02e2240  cmpwi 4, 14
  02e2244  stb 3, 32(31)
  02e2248  bt 2, 0x2e2264
  02e224c  ori 3, 31, 0
  02e2250  li 4, 14
  02e2254  li 5, 0
  02e2258  li 6, 3
  02e225c  bl 0xfddc0
  02e2260  nop
  02e2264  lis 4, 46
  02e2268  li 3, 300
  02e226c  addi 4, 4, -6044
  02e2270  sth 3, 116(30)
  02e2274  lfs 1, 24(31)
  02e2278  lfs 2, 180(4)
  02e227c  fsubs 1, 1, 2
  02e2280  stfs 1, 24(31)
  02e2284  b 0x2e2e1c
  02e2288  addic 28, 31, 16
  02e228c  addic 27, 30, 96
  02e2290  ori 3, 28, 0
  02e2294  ori 4, 27, 0
  02e2298  bl 0x5e8588
  02e229c  nop
  02e22a0  lis 3, 46
  02e22a4  lis 4, 114
  02e22a8  addi 3, 3, -6044
  02e22ac  lfs 31, 28(3)
  02e22b0  lfs 2, -3052(4)
  02e22b4  fmuls 2, 2, 31
  02e22b8  fcmpu 0, 1, 2
  02e22bc  cror 6, 0, 2
  02e22c0  bt 6, 0x2e2354
  02e22c4  lfs 1, 96(30)
  02e22c8  lfs 2, 16(31)
  02e22cc  lfs 3, 100(30)
  02e22d0  lfs 4, 20(31)
  02e22d4  fsubs 1, 1, 2
  02e22d8  fsubs 2, 3, 4
  02e22dc  bl 0x5e8338
  02e22e0  nop
  02e22e4  bl 0x5e8078
  02e22e8  nop
  02e22ec  lis 26, 114
  02e22f0  lfs 2, -3052(26)
  02e22f4  lfs 3, 16(31)
  02e22f8  fmuls 2, 2, 31
  02e22fc  lfs 4, 20(31)
  02e2300  fmuls 1, 2, 1
  02e2304  stfs 1, 560(1)
  02e2308  lfs 1, 96(30)
  02e230c  lfs 2, 100(30)
  02e2310  fsubs 1, 1, 3
  02e2314  fsubs 2, 2, 4
  02e2318  bl 0x5e8338
  02e231c  nop
  02e2320  bl 0x5e8128
  02e2324  nop
  02e2328  lfs 2, -3052(26)
  02e232c  li 6, 0
  02e2330  fmuls 2, 2, 31
  02e2334  addic 4, 1, 560
  02e2338  ori 3, 28, 0
  02e233c  stw 6, 568(1)
  02e2340  ori 5, 28, 0
  02e2344  fmuls 1, 2, 1
  02e2348  stfs 1, 564(1)
  02e234c  bl 0x5e7f54
  02e2350  nop
  02e2354  addic 26, 29, 128
  02e2358  ori 3, 28, 0
  02e235c  ori 4, 26, 0
  02e2360  bl 0x5e8588
  02e2364  nop
  02e2368  fcmpu 0, 1, 31
  02e236c  cror 6, 1, 2
  02e2370  bt 6, 0x2e251c
  02e2374  lwz 3, 8324(29)
  02e2378  cmpwi 3, 22
  02e237c  bt 2, 0x2e251c
  02e2380  lfs 1, 72(31)
  02e2384  bl 0x5e8078
  02e2388  nop
  02e238c  lis 3, 46
  02e2390  lfs 2, 72(31)
  02e2394  addi 26, 3, -6044
  02e2398  lfs 31, 0(26)
  02e239c  fmuls 3, 1, 31
  02e23a0  fmr 1, 2
  02e23a4  stfs 3, 576(1)
  02e23a8  bl 0x5e8128
  02e23ac  nop
  02e23b0  fmuls 1, 1, 31
  02e23b4  li 25, 0
  02e23b8  lwz 4, 8320(29)
  02e23bc  addic 24, 1, 592
  02e23c0  addic 4, 4, 16
  02e23c4  ori 3, 24, 0
  02e23c8  stw 25, 584(1)
  02e23cc  stfs 1, 580(1)
  02e23d0  bl 0x5e7e98
  02e23d4  nop
  02e23d8  lfs 1, 56(26)
  02e23dc  lfs 2, 600(1)
  02e23e0  addic 8, 1, 576
  02e23e4  lwz 3, 8320(29)
  02e23e8  ori 4, 31, 0
  02e23ec  fadds 1, 2, 1
  02e23f0  li 5, 1
  02e23f4  ori 7, 24, 0
  02e23f8  stfs 1, 600(1)
  02e23fc  lfs 1, 60(26)
  02e2400  bl 0x105c08
  02e2404  nop
  02e2408  lfs 1, 128(29)
  02e240c  lfs 2, 16(31)
  02e2410  lfs 3, 132(29)
  02e2414  fsubs 1, 1, 2
  02e2418  lfs 4, 20(31)
  02e241c  fsubs 2, 3, 4
  02e2420  bl 0x5e8338
  02e2424  nop
  02e2428  bl 0x5e8078
  02e242c  nop
  02e2430  lfs 2, 128(29)
  02e2434  stfs 1, 608(1)
  02e2438  lfs 1, 16(31)
  02e243c  lfs 3, 132(29)
  02e2440  fsubs 1, 2, 1
  02e2444  lfs 4, 20(31)
  02e2448  fsubs 2, 3, 4
  02e244c  bl 0x5e8338
  02e2450  nop
  02e2454  bl 0x5e8128
  02e2458  nop
  02e245c  stfs 1, 612(1)
  02e2460  ori 3, 27, 0
  02e2464  addic 5, 1, 608
  02e2468  stw 25, 616(1)
  02e246c  ori 4, 28, 0
  02e2470  bl 0x5e7f54
  02e2474  nop
  02e2478  li 3, 28
  02e247c  vspltisw 2, -1
  02e2480  lis 4, 114
  02e2484  li 5, -3064
  02e2488  vspltisw 7, -16
  02e248c  <unknown>
  02e2490  vslw 2, 2, 2
  02e2494  vspltw 3, 3, 0
  02e2498  <unknown>
  02e249c  li 3, 116
  02e24a0  vspltisw 6, -1
  02e24a4  vmaddfp 2, 4, 3, 2
  02e24a8  addi 4, 3, 16
  02e24ac  <unknown>
  02e24b0  vspltisw 4, -1
  02e24b4  vspltw 3, 3, 0
  02e24b8  <unknown>
  02e24bc  <unknown>
  02e24c0  vslw 4, 4, 4
  02e24c4  vor 8, 8, 9
  02e24c8  vslw 6, 6, 6
  02e24cc  vspltisw 9, -1
  02e24d0  vrefp 5, 2
  02e24d4  vsraw 7, 8, 7
  02e24d8  vnmsubfp 10, 5, 2, 3
  02e24dc  vmaddfp 4, 5, 10, 4
  02e24e0  vcfsx 5, 7, 0
  02e24e4  vslw 7, 9, 9
  02e24e8  vnmsubfp 8, 4, 2, 3
  02e24ec  vspltw 5, 5, 0
  02e24f0  vmaddfp 4, 4, 8, 6
  02e24f4  vnmsubfp 2, 4, 2, 3
  02e24f8  vmaddfp 2, 4, 2, 7
  02e24fc  vspltw 3, 2, 0
  02e2500  vcmpgefp. 3, 5, 3
  02e2504  bf 26, 0x2e2e1c
  02e2508  vctsxs 2, 2, 0
  02e250c  li 3, 116
  02e2510  vsplth 2, 2, 1
  02e2514  stvehx 2, 3, 30
  02e2518  b 0x2e2e1c
  02e251c  ori 3, 28, 0
  02e2520  ori 4, 26, 0
  02e2524  bl 0x5e8588
  02e2528  nop
  02e252c  lis 3, 46
  02e2530  addi 3, 3, -6044
  02e2534  lfs 2, 176(3)
  02e2538  fcmpu 0, 1, 2
  02e253c  cror 6, 0, 2
  02e2540  bt 6, 0x2e2554
  02e2544  lbz 3, 112(31)
  02e2548  rlwinm 3, 3, 0, 30, 30
  02e254c  cmpwi 3, 0
  02e2550  bf 2, 0x2e256c
  02e2554  lhz 3, 116(30)
  02e2558  addic 3, 3, -1
  02e255c  extsh 4, 3
  02e2560  cmpwi 4, 0
  02e2564  sth 3, 116(30)
  02e2568  bf 2, 0x2e2e1c
  02e256c  li 3, 91
  02e2570  lbz 4, 83(31)
  02e2574  cmpwi 4, 3
  02e2578  stb 3, 32(31)
  02e257c  bt 2, 0x2e2598
  02e2580  ori 3, 31, 0
  02e2584  li 4, 3
  02e2588  li 5, 0
  02e258c  li 6, 3
  02e2590  bl 0xfddc0
  02e2594  nop
  02e2598  lis 3, 46
  02e259c  lfs 1, 24(31)
  02e25a0  li 4, 120
  02e25a4  addi 3, 3, -6044
  02e25a8  lfs 2, 180(3)
  02e25ac  sth 4, 116(30)
  02e25b0  fadds 1, 1, 2
  02e25b4  stfs 1, 24(31)
  02e25b8  b 0x2e2e1c
  02e25bc  ori 3, 31, 0
  02e25c0  ori 4, 30, 0
  02e25c4  bl 0x10b030
  02e25c8  nop
  02e25cc  rlwinm 3, 3, 0, 25, 25
  02e25d0  cmpwi 3, 0
  02e25d4  bt 2, 0x2e2e1c
  02e25d8  lbz 3, 83(31)
  02e25dc  cmpwi 3, 3
  02e25e0  bt 2, 0x2e25fc
  02e25e4  ori 3, 31, 0
  02e25e8  li 4, 3
  02e25ec  li 5, 0
  02e25f0  li 6, 3
  02e25f4  bl 0xfddc0
  02e25f8  nop
  02e25fc  li 3, 30
  02e2600  bl 0x5e7e18
  02e2604  nop
  02e2608  li 4, 91
  02e260c  sth 3, 116(30)
  02e2610  stb 4, 32(31)
  02e2614  b 0x2e2e1c
  02e2618  lfs 1, 128(29)
  02e261c  lfs 2, 16(31)
  02e2620  lfs 3, 132(29)
  02e2624  fsubs 1, 1, 2
  02e2628  lfs 4, 20(31)
  02e262c  fsubs 2, 3, 4
  02e2630  bl 0x5e8338
  02e2634  nop
  02e2638  lfs 31, 72(31)
  02e263c  lfs 2, 128(29)
  02e2640  fsubs 31, 1, 31
  02e2644  lfs 1, 16(31)
  02e2648  lfs 3, 132(29)
  02e264c  lfs 4, 20(31)
  02e2650  fsubs 1, 2, 1
  02e2654  fsubs 2, 3, 4
  02e2658  bl 0x5e8338
  02e265c  nop
  02e2660  lis 3, 46
  02e2664  addic 5, 30, 112
  02e2668  addi 30, 3, -6044
  02e266c  ori 3, 31, 0
  02e2670  lfs 2, 16(30)
  02e2674  lfs 3, 20(30)
  02e2678  lfs 4, 24(30)
  02e267c  bl 0xff2e8
  02e2680  nop
  02e2684  addic 3, 31, 16
  02e2688  addic 4, 29, 128
  02e268c  bl 0x5e8588
  02e2690  nop
  02e2694  lfs 2, 64(30)
  02e2698  fcmpu 0, 1, 2
  02e269c  cror 6, 1, 2
  02e26a0  bt 6, 0x2e2e1c
  02e26a4  lis 3, 46
  02e26a8  addi 3, 3, -6044
  02e26ac  lfs 1, 44(3)
  02e26b0  fcmpu 0, 31, 1
  02e26b4  cror 6, 1, 2
  02e26b8  bt 6, 0x2e2e1c
  02e26bc  lis 3, 46
  02e26c0  addi 3, 3, -6044
  02e26c4  lfs 1, 68(3)
  02e26c8  fcmpu 0, 31, 1
  02e26cc  cror 6, 0, 2
  02e26d0  bt 6, 0x2e2e1c
  02e26d4  li 3, 102
  02e26d8  lbz 4, 83(31)
  02e26dc  cmpwi 4, 1
  02e26e0  stb 3, 32(31)
  02e26e4  bt 2, 0x2e2e1c
  02e26e8  ori 3, 31, 0
  02e26ec  li 4, 1
  02e26f0  li 5, 0
  02e26f4  li 6, 3
  02e26f8  bl 0xfddc0
  02e26fc  nop
  02e2700  b 0x2e2e1c
  02e2704  ori 28, 29, 0
  02e2708  lfs 1, 128(28)
  02e270c  lfs 2, 16(31)
  02e2710  lfs 3, 132(28)
  02e2714  fsubs 1, 1, 2
  02e2718  lfs 4, 20(31)
  02e271c  fsubs 2, 3, 4
  02e2720  bl 0x5e8338
  02e2724  nop
  02e2728  lfs 31, 72(31)
  02e272c  lfs 2, 128(28)
  02e2730  fsubs 31, 1, 31
  02e2734  lfs 1, 16(31)
  02e2738  lfs 3, 132(28)
  02e273c  lfs 4, 20(31)
  02e2740  fsubs 1, 2, 1
  02e2744  fsubs 2, 3, 4
  02e2748  bl 0x5e8338
  02e274c  nop
  02e2750  lis 3, 46
  02e2754  addic 5, 30, 112
  02e2758  addi 27, 3, -6044
  02e275c  ori 3, 31, 0
  02e2760  lfs 2, 16(27)
  02e2764  lfs 3, 20(27)
  02e2768  lfs 4, 24(27)
  02e276c  bl 0xff2e8
  02e2770  nop
  02e2774  lfs 1, 72(31)
  02e2778  bl 0x5e8078
  02e277c  nop
  02e2780  lhz 3, 120(30)
  02e2784  lis 29, 114
  02e2788  extsh 3, 3
  02e278c  extsw 3, 3
  02e2790  std 3, 688(1)
  02e2794  lfs 30, 184(27)
  02e2798  lfs 2, -3064(29)
  02e279c  lfs 3, 72(31)
  02e27a0  lfd 4, 688(1)
  02e27a4  fcfid 4, 4
  02e27a8  frsp 4, 4
  02e27ac  fmuls 4, 4, 30
  02e27b0  fmuls 2, 4, 2
  02e27b4  fmuls 2, 2, 1
  02e27b8  fmr 1, 3
  02e27bc  stfs 2, 624(1)
  02e27c0  bl 0x5e8128
  02e27c4  nop
  02e27c8  lhz 3, 120(30)
  02e27cc  li 4, 0
  02e27d0  extsh 3, 3
  02e27d4  extsw 3, 3
  02e27d8  addic 5, 1, 624
  02e27dc  std 3, 688(1)
  02e27e0  lfs 2, -3064(29)
  02e27e4  stw 4, 632(1)
  02e27e8  lfd 3, 688(1)
  02e27ec  fcfid 3, 3
  02e27f0  addic 29, 31, 16
  02e27f4  ori 3, 29, 0
  02e27f8  ori 4, 29, 0
  02e27fc  frsp 3, 3
  02e2800  fmuls 3, 3, 30
  02e2804  fmuls 2, 3, 2
  02e2808  fmuls 1, 2, 1
  02e280c  stfs 1, 628(1)
  02e2810  bl 0x5e7f54
  02e2814  nop
  02e2818  addic 28, 28, 128
  02e281c  ori 3, 29, 0
  02e2820  ori 4, 28, 0
  02e2824  bl 0x5e8588
  02e2828  nop
  02e282c  lfs 2, 28(27)
  02e2830  fcmpu 0, 1, 2
  02e2834  cror 6, 1, 2
  02e2838  bt 6, 0x2e2848
  02e283c  lhz 3, 120(30)
  02e2840  cmpwi 3, 3
  02e2844  bt 2, 0x2e28b0
  02e2848  ori 3, 29, 0
  02e284c  ori 4, 28, 0
  02e2850  bl 0x5e8588
  02e2854  nop
  02e2858  lis 3, 46
  02e285c  addi 3, 3, -6044
  02e2860  lfs 2, 132(3)
  02e2864  fcmpu 0, 1, 2
  02e2868  cror 6, 1, 2
  02e286c  bt 6, 0x2e287c
  02e2870  lhz 3, 120(30)
  02e2874  cmpwi 3, 2
  02e2878  bt 2, 0x2e28b0
  02e287c  ori 3, 29, 0
  02e2880  ori 4, 28, 0
  02e2884  bl 0x5e8588
  02e2888  nop
  02e288c  lis 3, 46
  02e2890  addi 3, 3, -6044
  02e2894  lfs 2, 0(3)
  02e2898  fcmpu 0, 1, 2
  02e289c  cror 6, 1, 2
  02e28a0  bt 6, 0x2e2910
  02e28a4  lhz 3, 120(30)
  02e28a8  cmpwi 3, 1
  02e28ac  bf 2, 0x2e2910
  02e28b0  lis 3, 46
  02e28b4  addi 3, 3, -6044
  02e28b8  lfs 1, 44(3)
  02e28bc  fcmpu 0, 31, 1
  02e28c0  cror 6, 1, 2
  02e28c4  bt 6, 0x2e2910
  02e28c8  lis 3, 46
  02e28cc  addi 3, 3, -6044
  02e28d0  lfs 1, 68(3)
  02e28d4  fcmpu 0, 31, 1
  02e28d8  cror 6, 0, 2
  02e28dc  bt 6, 0x2e2910
  02e28e0  li 3, 103
  02e28e4  lbz 4, 83(31)
  02e28e8  cmpwi 4, 4
  02e28ec  stb 3, 32(31)
  02e28f0  bt 2, 0x2e2e1c
  02e28f4  ori 3, 31, 0
  02e28f8  li 4, 4
  02e28fc  li 5, 0
  02e2900  li 6, 3
  02e2904  bl 0xfddc0
  02e2908  nop
  02e290c  b 0x2e2e1c
  02e2910  ori 3, 29, 0
  02e2914  ori 4, 28, 0
  02e2918  bl 0x5e8588
  02e291c  nop
  02e2920  lis 3, 46
  02e2924  addi 3, 3, -6044
  02e2928  lfs 2, 36(3)
  02e292c  fcmpu 0, 1, 2
  02e2930  cror 6, 0, 2
  02e2934  bt 6, 0x2e2e1c
  02e2938  li 3, 101
  02e293c  lbz 4, 83(31)
  02e2940  cmpwi 4, 3
  02e2944  stb 3, 32(31)
  02e2948  bt 2, 0x2e2e1c
  02e294c  ori 3, 31, 0
  02e2950  li 4, 3
  02e2954  li 5, 0
  02e2958  li 6, 3
  02e295c  bl 0xfddc0
  02e2960  nop
  02e2964  b 0x2e2e1c
  02e2968  addic 3, 31, 16
  02e296c  addic 4, 29, 128
  02e2970  bl 0x5e8588
  02e2974  nop
  02e2978  lbz 3, 82(31)
  02e297c  lbz 4, 83(31)
  02e2980  fmr 31, 1
  02e2984  cmpw 3, 4
  02e2988  bf 2, 0x2e2b78
  02e298c  ori 3, 31, 0
  02e2990  bl 0xefe40
  02e2994  nop
  02e2998  lis 3, 46
  02e299c  addi 3, 3, -6044
  02e29a0  lfs 2, 36(3)
  02e29a4  fcmpu 0, 1, 2
  02e29a8  bt 0, 0x2e2b78
  02e29ac  ori 3, 31, 0
  02e29b0  bl 0xefe40
  02e29b4  nop
  02e29b8  lis 3, 46
  02e29bc  addi 3, 3, -6044
  02e29c0  lfs 2, 40(3)
  02e29c4  fcmpu 0, 1, 2
  02e29c8  cror 6, 1, 2
  02e29cc  bt 6, 0x2e2b78
  02e29d0  lfs 1, 24(31)
  02e29d4  lfs 2, 136(29)
  02e29d8  lis 3, 46
  02e29dc  fsubs 1, 1, 2
  02e29e0  addi 3, 3, -6044
  02e29e4  lfs 2, 44(3)
  02e29e8  fabs 1, 1
  02e29ec  fcmpu 0, 1, 2
  02e29f0  cror 6, 1, 2
  02e29f4  bt 6, 0x2e2b78
  02e29f8  lis 3, 46
  02e29fc  addi 3, 3, -6044
  02e2a00  lfs 1, 28(3)
  02e2a04  fcmpu 0, 31, 1
  02e2a08  cror 6, 1, 2
  02e2a0c  bt 6, 0x2e2a1c
  02e2a10  lhz 3, 120(30)
  02e2a14  cmpwi 3, 3
  02e2a18  bt 2, 0x2e2a64
  02e2a1c  lis 3, 46
  02e2a20  addi 3, 3, -6044
  02e2a24  lfs 1, 132(3)
  02e2a28  fcmpu 0, 31, 1
  02e2a2c  cror 6, 1, 2
  02e2a30  bt 6, 0x2e2a40
  02e2a34  lhz 3, 120(30)
  02e2a38  cmpwi 3, 2
  02e2a3c  bt 2, 0x2e2a64
  02e2a40  lis 3, 46
  02e2a44  addi 3, 3, -6044
  02e2a48  lfs 1, 0(3)
  02e2a4c  fcmpu 0, 31, 1
  02e2a50  cror 6, 1, 2
  02e2a54  bt 6, 0x2e2b78
  02e2a58  lhz 3, 120(30)
  02e2a5c  cmpwi 3, 1
  02e2a60  bf 2, 0x2e2b78
  02e2a64  lis 3, 149
  02e2a68  lfs 1, 16(31)
  02e2a6c  lfs 2, 20(31)
  02e2a70  addic 3, 3, 5056
  02e2a74  lfs 31, 344(3)
  02e2a78  lfs 3, 320(3)
  02e2a7c  lfs 4, 324(3)
  02e2a80  fsubs 1, 1, 3
  02e2a84  fsubs 2, 2, 4
  02e2a88  bl 0x5e8338
  02e2a8c  nop
  02e2a90  fmr 2, 1
  02e2a94  fmr 1, 31
  02e2a98  bl 0x5026a0
  02e2a9c  nop
  02e2aa0  lis 3, 46
  02e2aa4  addi 3, 3, -6044
  02e2aa8  lfs 2, 48(3)
  02e2aac  fcmpu 0, 1, 2
  02e2ab0  cror 6, 1, 2
  02e2ab4  bt 6, 0x2e2b78
  02e2ab8  lfs 1, 128(29)
  02e2abc  lfs 2, 16(31)
  02e2ac0  lfs 3, 132(29)
  02e2ac4  lfs 4, 20(31)
  02e2ac8  fsubs 1, 1, 2
  02e2acc  fsubs 2, 3, 4
  02e2ad0  bl 0x5e8338
  02e2ad4  nop
  02e2ad8  lfs 2, 72(31)
  02e2adc  bl 0x5026a0
  02e2ae0  nop
  02e2ae4  lis 3, 46
  02e2ae8  addi 3, 3, -6044
  02e2aec  lfs 2, 52(3)
  02e2af0  fcmpu 0, 1, 2
  02e2af4  cror 6, 1, 2
  02e2af8  bt 6, 0x2e2b78
  02e2afc  lfs 1, 72(31)
  02e2b00  bl 0x5e8078
  02e2b04  nop
  02e2b08  lfs 2, 72(31)
  02e2b0c  stfs 1, 640(1)
  02e2b10  fmr 1, 2
  02e2b14  bl 0x5e8128
  02e2b18  nop
  02e2b1c  li 4, 0
  02e2b20  stfs 1, 644(1)
  02e2b24  addic 30, 1, 656
  02e2b28  lwz 5, 8320(29)
  02e2b2c  ori 3, 30, 0
  02e2b30  stw 4, 648(1)
  02e2b34  addic 4, 5, 16
  02e2b38  bl 0x5e7e98
  02e2b3c  nop
  02e2b40  lis 3, 46
  02e2b44  lfs 1, 664(1)
  02e2b48  addic 8, 1, 640
  02e2b4c  addi 6, 3, -6044
  02e2b50  ori 4, 31, 0
  02e2b54  li 5, 1
  02e2b58  ori 7, 30, 0
  02e2b5c  lfs 2, 56(6)
  02e2b60  lwz 3, 8320(29)
  02e2b64  fadds 1, 1, 2
  02e2b68  stfs 1, 664(1)
  02e2b6c  lfs 1, 60(6)
  02e2b70  bl 0x105c08
  02e2b74  nop
  02e2b78  lbz 3, 112(31)
  02e2b7c  rlwinm 3, 3, 0, 30, 30
  02e2b80  cmpwi 3, 0
  02e2b84  bt 2, 0x2e2e1c
  02e2b88  li 3, 101
  02e2b8c  lbz 4, 83(31)
  02e2b90  cmpwi 4, 3
  02e2b94  stb 3, 32(31)
  02e2b98  bt 2, 0x2e2e1c
  02e2b9c  ori 3, 31, 0
  02e2ba0  li 4, 3
  02e2ba4  li 5, 0
  02e2ba8  li 6, 3
  02e2bac  bl 0xfddc0
  02e2bb0  nop
  02e2bb4  b 0x2e2e1c
  02e2bb8  ori 3, 31, 0
  02e2bbc  ori 4, 30, 0
  02e2bc0  bl 0x10b030
  02e2bc4  nop
  02e2bc8  rlwinm 3, 3, 0, 25, 25
  02e2bcc  cmpwi 3, 0
  02e2bd0  bt 2, 0x2e2e1c
  02e2bd4  addic 3, 31, 16
  02e2bd8  ori 4, 31, 0
  02e2bdc  li 5, 2
  02e2be0  bl 0x2de788
  02e2be4  ori 29, 3, 0
  02e2be8  cmpwi 29, 0
  02e2bec  bt 2, 0x2e2e1c
  02e2bf0  lbz 3, 83(31)
  02e2bf4  lwz 28, 120(29)
  02e2bf8  cmpwi 3, 2
  02e2bfc  bt 2, 0x2e2c18
  02e2c00  ori 3, 31, 0
  02e2c04  li 4, 2
  02e2c08  li 5, 10
  02e2c0c  li 6, 3
  02e2c10  bl 0xfddc0
  02e2c14  nop
  02e2c18  li 3, 105
  02e2c1c  li 4, 10
  02e2c20  stb 3, 32(31)
  02e2c24  stb 3, 32(29)
  02e2c28  lhz 3, 120(30)
  02e2c2c  sth 4, 118(28)
  02e2c30  sth 3, 120(28)
  02e2c34  lhz 3, 120(30)
  02e2c38  cmpwi 3, 2
  02e2c3c  cmpwi 1, 3, 1
  02e2c40  bf 2, 0x2e2c68
  02e2c44  lis 3, 46
  02e2c48  lwz 4, 36(31)
  02e2c4c  addi 3, 3, -6044
  02e2c50  lfs 1, 12(3)
  02e2c54  lfs 2, 36(4)
  02e2c58  fmuls 1, 2, 1
  02e2c5c  stfs 1, 44(31)
  02e2c60  stfs 1, 44(29)
  02e2c64  b 0x2e2c8c
  02e2c68  bf 6, 0x2e2c8c
  02e2c6c  lis 3, 46
  02e2c70  lwz 4, 36(31)
  02e2c74  addi 3, 3, -6044
  02e2c78  lfs 1, 92(3)
  02e2c7c  lfs 2, 36(4)
  02e2c80  fmuls 1, 2, 1
  02e2c84  stfs 1, 44(31)
  02e2c88  stfs 1, 44(29)
  02e2c8c  li 3, 256
  02e2c90  bl 0xfc620
  02e2c94  nop
  02e2c98  clrlwi 3, 3, 31
  02e2c9c  cmpwi 3, 0
  02e2ca0  bt 2, 0x2e2cb8
  02e2ca4  li 3, 1
  02e2ca8  li 4, -1
  02e2cac  sth 3, 122(30)
  02e2cb0  sth 4, 122(28)
  02e2cb4  b 0x2e2e1c
  02e2cb8  li 3, -1
  02e2cbc  li 4, 1
  02e2cc0  sth 3, 122(30)
  02e2cc4  sth 4, 122(28)
  02e2cc8  b 0x2e2e1c
  02e2ccc  ori 3, 31, 0
  02e2cd0  bl 0xefe40
  02e2cd4  nop
  02e2cd8  lis 3, 46
  02e2cdc  addi 4, 3, -6044
  02e2ce0  lbz 3, 83(31)
  02e2ce4  lfs 2, 104(4)
  02e2ce8  fcmpu 0, 1, 2
  02e2cec  bt 0, 0x2e2db0
  02e2cf0  lis 4, 46
  02e2cf4  addi 4, 4, -6044
  02e2cf8  lfs 2, 76(4)
  02e2cfc  fcmpu 0, 1, 2
  02e2d00  bt 1, 0x2e2db0
  02e2d04  lhz 3, 122(30)
  02e2d08  extsh 3, 3
  02e2d0c  extsw 3, 3
  02e2d10  std 3, 688(1)
  02e2d14  lis 3, 46
  02e2d18  lfs 1, 72(31)
  02e2d1c  addi 29, 3, -6044
  02e2d20  lfs 31, 108(29)
  02e2d24  lfd 2, 688(1)
  02e2d28  fcfid 2, 2
  02e2d2c  frsp 2, 2
  02e2d30  fmadds 1, 2, 31, 1
  02e2d34  bl 0x5e8078
  02e2d38  nop
  02e2d3c  lhz 3, 122(30)
  02e2d40  lis 30, 114
  02e2d44  lfs 30, 24(29)
  02e2d48  extsh 3, 3
  02e2d4c  extsw 3, 3
  02e2d50  std 3, 688(1)
  02e2d54  lfs 2, -3064(30)
  02e2d58  lfs 3, 72(31)
  02e2d5c  fmuls 2, 2, 30
  02e2d60  fmuls 1, 2, 1
  02e2d64  lfd 2, 688(1)
  02e2d68  fcfid 2, 2
  02e2d6c  stfs 1, 672(1)
  02e2d70  frsp 1, 2
  02e2d74  fmadds 1, 1, 31, 3
  02e2d78  bl 0x5e8128
  02e2d7c  nop
  02e2d80  lfs 2, -3064(30)
  02e2d84  li 6, 0
  02e2d88  addic 3, 31, 16
  02e2d8c  fmuls 2, 2, 30
  02e2d90  addic 5, 1, 672
  02e2d94  stw 6, 680(1)
  02e2d98  ori 4, 3, 0
  02e2d9c  fmuls 1, 2, 1
  02e2da0  stfs 1, 676(1)
  02e2da4  bl 0x5e7f54
  02e2da8  nop
  02e2dac  b 0x2e2e1c
  02e2db0  lis 4, 46
  02e2db4  addi 4, 4, -6044
  02e2db8  lfs 2, 76(4)
  02e2dbc  fcmpu 0, 1, 2
  02e2dc0  bt 0, 0x2e2e1c
  02e2dc4  li 4, 101
  02e2dc8  cmpwi 3, 3
  02e2dcc  stb 4, 32(31)
  02e2dd0  bt 2, 0x2e2e1c
  02e2dd4  ori 3, 31, 0
  02e2dd8  li 4, 3
  02e2ddc  li 5, 0
  02e2de0  li 6, 3
  02e2de4  bl 0xfddc0
  02e2de8  nop
  02e2dec  b 0x2e2e1c
  02e2df0  ori 3, 31, 0
  02e2df4  ori 4, 30, 0
  02e2df8  bl 0x10b030
  02e2dfc  nop
  02e2e00  rlwinm 3, 3, 0, 25, 25
  02e2e04  cmpwi 3, 0
  02e2e08  bt 2, 0x2e2e1c
  02e2e0c  ori 3, 31, 0
  02e2e10  bl 0xefb38
  02e2e14  nop
  02e2e18  b 0x2e2e1c
  02e2e1c  ld 0, 864(1)
  02e2e20  mtlr 0
  02e2e24  lfd 26, 800(1)
  02e2e28  lfd 27, 808(1)
  02e2e2c  lfd 28, 816(1)
  02e2e30  lfd 29, 824(1)
  02e2e34  lfd 30, 832(1)
  02e2e38  lfd 31, 840(1)
  02e2e3c  ld 21, 712(1)
  02e2e40  ld 22, 720(1)
  02e2e44  ld 23, 728(1)
  02e2e48  ld 24, 736(1)
  02e2e4c  ld 25, 744(1)
  02e2e50  ld 26, 752(1)
  02e2e54  ld 27, 760(1)
  02e2e58  ld 28, 768(1)
  02e2e5c  ld 29, 776(1)
  02e2e60  ld 30, 784(1)
  02e2e64  ld 31, 792(1)
  02e2e68  addi 1, 1, 848
  02e2e6c  blr
