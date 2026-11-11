# game/music.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MUSIC:   # 0x11b944, 0x14 bytes
  011b944  lis 3, 115
  011b948  lis 4, 1
  011b94c  addic 3, 3, -27380
  011b950  stw 4, 72(3)
  011b954  blr

music_UppercaseCdromPath:   # 0x11b960, 0xcc bytes
  011b960  stdu 1, -144(1)
  011b964  mflr 0
  011b968  std 0, 160(1)
  011b96c  std 31, 136(1)
  011b970  lis 4, 101
  011b974  std 29, 120(1)
  011b978  ori 31, 3, 0
  011b97c  addic 29, 4, 12292
  011b980  std 30, 128(1)
  011b984  ori 3, 29, 0
  011b988  bl 0x5c8510
  011b98c  nop
  011b990  ori 30, 3, 0
  011b994  ori 3, 29, 0
  011b998  ori 4, 31, 0
  011b99c  ori 5, 30, 0
  011b9a0  bl 0x5ccb28
  011b9a4  nop
  011b9a8  cmpwi 3, 0
  011b9ac  bf 2, 0x11ba10
  011b9b0  ori 3, 31, 0
  011b9b4  bl 0x5c8510
  011b9b8  nop
  011b9bc  cmplw 30, 3
  011b9c0  bf 0, 0x11ba10
  011b9c4  lis 3, 144
  011b9c8  lbzx 5, 31, 30
  011b9cc  li 4, 0
  011b9d0  addic 8, 30, 1
  011b9d4  slwi 6, 5, 1
  011b9d8  addic 7, 5, -32
  011b9dc  lwz 3, 22116(3)
  011b9e0  subc 5, 5, 7
  011b9e4  lhzx 3, 3, 6
  011b9e8  rlwinm 3, 3, 0, 27, 27
  011b9ec  subc 3, 4, 3
  011b9f0  cntlzw 3, 3
  011b9f4  sldi 3, 3, 58
  011b9f8  sradi 3, 3, 63
  011b9fc  and 3, 3, 5
  011ba00  addc 3, 7, 3
  011ba04  stbx 3, 31, 30
  011ba08  clrldi 30, 8, 32
  011ba0c  b 0x11b9b0
  011ba10  ld 0, 160(1)
  011ba14  mtlr 0
  011ba18  ld 29, 120(1)
  011ba1c  ld 30, 128(1)
  011ba20  ld 31, 136(1)
  011ba24  addi 1, 1, 144
  011ba28  blr

music_LoadCoreBank:   # 0x11ba2c, 0x2c bytes
  011ba2c  stdu 1, -112(1)
  011ba30  mflr 0
  011ba34  std 0, 128(1)
  011ba38  lis 3, 112
  011ba3c  addic 3, 3, 28080
  011ba40  bl 0x506664
  011ba44  nop
  011ba48  ld 0, 128(1)
  011ba4c  mtlr 0
  011ba50  addi 1, 1, 112
  011ba54  blr

music_Init:   # 0x11ba58, 0xa8 bytes
  011ba58  stdu 1, -112(1)
  011ba5c  mflr 0
  011ba60  std 0, 128(1)
  011ba64  lis 6, 150
  011ba68  li 3, 32
  011ba6c  addic 7, 6, 14024
  011ba70  li 5, 10
  011ba74  li 4, 8
  011ba78  li 8, 0
  011ba7c  li 10, -1
  011ba80  stw 3, 48(7)
  011ba84  lis 9, 0
  011ba88  stw 5, 52(7)
  011ba8c  li 3, 4
  011ba90  stw 4, 56(7)
  011ba94  li 5, 10
  011ba98  stw 8, 60(7)
  011ba9c  ori 4, 9, 61440
  011baa0  stw 8, 14024(6)
  011baa4  stw 8, 64(7)
  011baa8  sth 8, 74(7)
  011baac  li 6, 1
  011bab0  stw 8, 92(7)
  011bab4  sth 8, 102(7)
  011bab8  stw 8, 120(7)
  011babc  sth 8, 130(7)
  011bac0  stw 10, 28(7)
  011bac4  stb 10, 34(7)
  011bac8  bl 0x505954
  011bacc  nop
  011bad0  bl 0x505d20
  011bad4  nop
  011bad8  cmpwi 3, 0
  011badc  bf 2, 0x11bad0
  011bae0  lis 3, 112
  011bae4  addic 3, 3, 28080
  011bae8  bl 0x506664
  011baec  nop
  011baf0  ld 0, 128(1)
  011baf4  mtlr 0
  011baf8  addi 1, 1, 112
  011bafc  blr

InitLevelMusicFileSizes:   # 0x11bb00, 0x9c bytes
  011bb00  stdu 1, -400(1)
  011bb04  mflr 0
  011bb08  std 0, 416(1)
  011bb0c  std 30, 384(1)
  011bb10  std 31, 392(1)
  011bb14  lis 30, 101
  011bb18  std 29, 376(1)
  011bb1c  lis 31, 271
  011bb20  li 29, 0
  011bb24  std 28, 368(1)
  011bb28  addic 30, 30, 12300
  011bb2c  addic 31, 31, -22672
  011bb30  lis 3, 151
  011bb34  addic 28, 1, 112
  011bb38  ori 4, 30, 0
  011bb3c  ori 6, 29, 0
  011bb40  lwz 5, -25488(3)
  011bb44  ori 3, 28, 0
  011bb48  extsw 5, 5
  011bb4c  bl 0x5cd2a8
  011bb50  nop
  011bb54  ori 3, 28, 0
  011bb58  bl 0x504178
  011bb5c  nop
  011bb60  slwi 4, 29, 2
  011bb64  addic 29, 29, 1
  011bb68  extsw 4, 4
  011bb6c  extsw 29, 29
  011bb70  cmpwi 29, 15
  011bb74  stwx 3, 31, 4
  011bb78  bt 0, 0x11bb30
  011bb7c  ld 0, 416(1)
  011bb80  mtlr 0
  011bb84  ld 28, 368(1)
  011bb88  ld 29, 376(1)
  011bb8c  ld 30, 384(1)
  011bb90  ld 31, 392(1)
  011bb94  addi 1, 1, 400
  011bb98  blr

music_StartSpeech_Helpgirl:   # 0x11bb9c, 0xf4 bytes
  011bb9c  stdu 1, -416(1)
  011bba0  mflr 0
  011bba4  std 0, 432(1)
  011bba8  std 31, 408(1)
  011bbac  lis 31, 150
  011bbb0  ori 6, 5, 0
  011bbb4  addic 31, 31, 14024
  011bbb8  ori 5, 3, 0
  011bbbc  ori 3, 6, 0
  011bbc0  lwz 6, 92(31)
  011bbc4  std 30, 400(1)
  011bbc8  cmpwi 6, 0
  011bbcc  bf 2, 0x11bc78
  011bbd0  li 6, -1
  011bbd4  li 7, 1
  011bbd8  lis 9, 0
  011bbdc  lis 10, 0
  011bbe0  stw 6, 92(31)
  011bbe4  li 6, 10
  011bbe8  sth 7, 102(31)
  011bbec  ori 7, 9, 48000
  011bbf0  sth 5, 96(31)
  011bbf4  li 8, 0
  011bbf8  sth 3, 98(31)
  011bbfc  ori 9, 10, 60000
  011bc00  sth 4, 100(31)
  011bc04  lis 3, 101
  011bc08  stw 6, 112(31)
  011bc0c  addic 30, 1, 144
  011bc10  stw 7, 116(31)
  011bc14  subc 5, 5, 9
  011bc18  sth 8, 108(31)
  011bc1c  addic 4, 3, 12336
  011bc20  ori 3, 30, 0
  011bc24  extsw 5, 5
  011bc28  bl 0x5cd2a8
  011bc2c  nop
  011bc30  lis 4, 112
  011bc34  li 6, 12
  011bc38  lhz 7, 98(31)
  011bc3c  addic 9, 4, 28096
  011bc40  addic 10, 31, 92
  011bc44  li 8, 0
  011bc48  std 6, 112(1)
  011bc4c  std 9, 120(1)
  011bc50  ori 3, 30, 0
  011bc54  std 10, 128(1)
  011bc58  li 4, 0
  011bc5c  li 5, 0
  011bc60  extsh 7, 7
  011bc64  li 6, 0
  011bc68  li 9, 2
  011bc6c  li 10, 0
  011bc70  bl 0x506444
  011bc74  nop
  011bc78  ld 0, 432(1)
  011bc7c  mtlr 0
  011bc80  ld 30, 400(1)
  011bc84  ld 31, 408(1)
  011bc88  addi 1, 1, 416
  011bc8c  blr

music_StartSpeech_Qwark:   # 0x11bc90, 0x100 bytes
  011bc90  stdu 1, -416(1)
  011bc94  mflr 0
  011bc98  std 0, 432(1)
  011bc9c  std 31, 408(1)
  011bca0  lis 31, 150
  011bca4  ori 6, 5, 0
  011bca8  addic 31, 31, 14024
  011bcac  ori 5, 3, 0
  011bcb0  ori 3, 6, 0
  011bcb4  lwz 6, 92(31)
  011bcb8  std 30, 400(1)
  011bcbc  cmpwi 6, 0
  011bcc0  bf 2, 0x11bd78
  011bcc4  li 6, -1
  011bcc8  li 7, 1
  011bccc  lis 9, 0
  011bcd0  lis 8, 151
  011bcd4  stw 6, 92(31)
  011bcd8  li 6, 10
  011bcdc  sth 7, 102(31)
  011bce0  ori 7, 9, 48000
  011bce4  sth 5, 96(31)
  011bce8  lis 9, 0
  011bcec  sth 3, 98(31)
  011bcf0  sth 4, 100(31)
  011bcf4  li 10, 0
  011bcf8  stw 6, 112(31)
  011bcfc  ori 3, 9, 50000
  011bd00  lis 4, 101
  011bd04  stw 7, 116(31)
  011bd08  addic 30, 1, 144
  011bd0c  lwz 6, -25484(8)
  011bd10  subc 5, 5, 3
  011bd14  sth 10, 108(31)
  011bd18  addic 4, 4, 12388
  011bd1c  extsw 5, 5
  011bd20  extsw 6, 6
  011bd24  ori 3, 30, 0
  011bd28  bl 0x5cd2a8
  011bd2c  nop
  011bd30  lis 4, 112
  011bd34  lhz 7, 98(31)
  011bd38  li 6, 12
  011bd3c  addic 8, 4, 28096
  011bd40  addic 9, 31, 92
  011bd44  ori 3, 30, 0
  011bd48  std 6, 112(1)
  011bd4c  li 4, 0
  011bd50  std 8, 120(1)
  011bd54  li 5, 0
  011bd58  std 9, 128(1)
  011bd5c  extsh 7, 7
  011bd60  li 6, 0
  011bd64  li 8, 0
  011bd68  li 9, 2
  011bd6c  li 10, 0
  011bd70  bl 0x506444
  011bd74  nop
  011bd78  ld 0, 432(1)
  011bd7c  mtlr 0
  011bd80  ld 30, 400(1)
  011bd84  ld 31, 408(1)
  011bd88  addi 1, 1, 416
  011bd8c  blr

music_StartSpeech_Space:   # 0x11bd90, 0xf4 bytes
  011bd90  stdu 1, -416(1)
  011bd94  mflr 0
  011bd98  std 0, 432(1)
  011bd9c  std 31, 408(1)
  011bda0  lis 31, 150
  011bda4  ori 6, 5, 0
  011bda8  addic 31, 31, 14024
  011bdac  ori 5, 3, 0
  011bdb0  ori 3, 6, 0
  011bdb4  lwz 6, 92(31)
  011bdb8  std 30, 400(1)
  011bdbc  cmpwi 6, 0
  011bdc0  bf 2, 0x11be6c
  011bdc4  li 6, -1
  011bdc8  li 7, 1
  011bdcc  lis 9, 0
  011bdd0  lis 10, 0
  011bdd4  stw 6, 92(31)
  011bdd8  li 6, 10
  011bddc  sth 7, 102(31)
  011bde0  ori 7, 9, 48000
  011bde4  sth 5, 96(31)
  011bde8  li 8, 0
  011bdec  sth 3, 98(31)
  011bdf0  ori 9, 10, 40000
  011bdf4  sth 4, 100(31)
  011bdf8  lis 3, 101
  011bdfc  stw 6, 112(31)
  011be00  addic 30, 1, 144
  011be04  stw 7, 116(31)
  011be08  subc 5, 5, 9
  011be0c  sth 8, 108(31)
  011be10  addic 4, 3, 12436
  011be14  ori 3, 30, 0
  011be18  extsw 5, 5
  011be1c  bl 0x5cd2a8
  011be20  nop
  011be24  lis 4, 112
  011be28  li 6, 12
  011be2c  lhz 7, 98(31)
  011be30  addic 9, 4, 28096
  011be34  addic 10, 31, 92
  011be38  li 8, 0
  011be3c  std 6, 112(1)
  011be40  std 9, 120(1)
  011be44  ori 3, 30, 0
  011be48  std 10, 128(1)
  011be4c  li 4, 0
  011be50  li 5, 0
  011be54  extsh 7, 7
  011be58  li 6, 0
  011be5c  li 9, 2
  011be60  li 10, 0
  011be64  bl 0x506444
  011be68  nop
  011be6c  ld 0, 432(1)
  011be70  mtlr 0
  011be74  ld 30, 400(1)
  011be78  ld 31, 408(1)
  011be7c  addi 1, 1, 416
  011be80  blr

music_StartSpeech_Help:   # 0x11be84, 0x180 bytes
  011be84  stdu 1, -448(1)
  011be88  mflr 0
  011be8c  std 0, 464(1)
  011be90  std 31, 440(1)
  011be94  std 28, 416(1)
  011be98  lis 31, 150
  011be9c  ori 28, 5, 0
  011bea0  addic 31, 31, 14024
  011bea4  ori 6, 4, 0
  011bea8  ori 4, 3, 0
  011beac  ori 3, 6, 0
  011beb0  lwz 5, 92(31)
  011beb4  std 30, 432(1)
  011beb8  std 29, 424(1)
  011bebc  std 27, 408(1)
  011bec0  cmpwi 5, 0
  011bec4  bf 2, 0x11bfe0
  011bec8  li 5, -1
  011becc  sth 28, 98(31)
  011bed0  li 7, 1
  011bed4  lis 9, 151
  011bed8  li 10, 10
  011bedc  stw 5, 92(31)
  011bee0  sth 7, 102(31)
  011bee4  lis 6, 0
  011bee8  sth 4, 96(31)
  011beec  addic 28, 4, -30000
  011bef0  sth 3, 100(31)
  011bef4  ori 6, 6, 48000
  011bef8  stw 10, 112(31)
  011befc  li 8, 0
  011bf00  lis 30, 101
  011bf04  lwz 4, -25484(9)
  011bf08  extsw 28, 28
  011bf0c  addic 29, 1, 144
  011bf10  addic 30, 30, 12484
  011bf14  stw 6, 116(31)
  011bf18  extsw 27, 4
  011bf1c  sth 8, 108(31)
  011bf20  ori 3, 29, 0
  011bf24  ori 4, 30, 0
  011bf28  ori 5, 28, 0
  011bf2c  ori 6, 27, 0
  011bf30  bl 0x5cd2a8
  011bf34  nop
  011bf38  cmpwi 27, 6
  011bf3c  bf 2, 0x11bf6c
  011bf40  ori 3, 29, 0
  011bf44  bl 0x504178
  011bf48  nop
  011bf4c  cmpdi 3, 0
  011bf50  bf 2, 0x11bf6c
  011bf54  ori 3, 29, 0
  011bf58  ori 4, 30, 0
  011bf5c  ori 5, 28, 0
  011bf60  li 6, 0
  011bf64  bl 0x5cd2a8
  011bf68  nop
  011bf6c  lis 3, 114
  011bf70  li 4, 0
  011bf74  li 6, 0
  011bf78  lis 5, 112
  011bf7c  addic 9, 31, 92
  011bf80  lbz 3, -1192(3)
  011bf84  li 10, 0
  011bf88  lhz 7, 98(31)
  011bf8c  subc 3, 4, 3
  011bf90  subc 4, 6, 7
  011bf94  cntlzw 3, 3
  011bf98  li 6, 12
  011bf9c  sldi 3, 3, 58
  011bfa0  sradi 8, 3, 63
  011bfa4  std 6, 112(1)
  011bfa8  and 4, 8, 4
  011bfac  addic 8, 5, 28096
  011bfb0  addc 7, 7, 4
  011bfb4  ori 3, 29, 0
  011bfb8  li 4, 0
  011bfbc  std 8, 120(1)
  011bfc0  std 9, 128(1)
  011bfc4  li 5, 0
  011bfc8  extsh 7, 7
  011bfcc  li 6, 0
  011bfd0  li 8, 0
  011bfd4  li 9, 2
  011bfd8  bl 0x506444
  011bfdc  nop
  011bfe0  ld 0, 464(1)
  011bfe4  mtlr 0
  011bfe8  ld 27, 408(1)
  011bfec  ld 28, 416(1)
  011bff0  ld 29, 424(1)
  011bff4  ld 30, 432(1)
  011bff8  ld 31, 440(1)
  011bffc  addi 1, 1, 448
  011c000  blr

music_StartSpeech_Bindata:   # 0x11c004, 0xf8 bytes
  011c004  stdu 1, -416(1)
  011c008  mflr 0
  011c00c  std 0, 432(1)
  011c010  std 31, 408(1)
  011c014  lis 31, 150
  011c018  ori 6, 5, 0
  011c01c  addic 31, 31, 14024
  011c020  ori 5, 3, 0
  011c024  ori 3, 6, 0
  011c028  lwz 6, 92(31)
  011c02c  std 30, 400(1)
  011c030  cmpwi 6, 0
  011c034  bf 2, 0x11c0e4
  011c038  li 6, -1
  011c03c  li 7, 1
  011c040  lis 9, 0
  011c044  lis 8, 151
  011c048  stw 6, 92(31)
  011c04c  li 6, 10
  011c050  sth 7, 102(31)
  011c054  ori 7, 9, 48000
  011c058  sth 5, 96(31)
  011c05c  sth 3, 98(31)
  011c060  addic 5, 5, -20000
  011c064  sth 4, 100(31)
  011c068  li 10, 0
  011c06c  stw 6, 112(31)
  011c070  lis 3, 101
  011c074  stw 7, 116(31)
  011c078  extsw 6, 5
  011c07c  addic 30, 1, 144
  011c080  lwz 5, -25488(8)
  011c084  addic 4, 3, 12524
  011c088  sth 10, 108(31)
  011c08c  ori 3, 30, 0
  011c090  extsw 5, 5
  011c094  bl 0x5cd2a8
  011c098  nop
  011c09c  lis 4, 112
  011c0a0  lhz 7, 98(31)
  011c0a4  li 6, 12
  011c0a8  addic 9, 4, 28096
  011c0ac  addic 10, 31, 92
  011c0b0  li 8, 0
  011c0b4  std 6, 112(1)
  011c0b8  ori 3, 30, 0
  011c0bc  std 9, 120(1)
  011c0c0  li 4, 0
  011c0c4  std 10, 128(1)
  011c0c8  li 5, 0
  011c0cc  extsh 7, 7
  011c0d0  li 6, 0
  011c0d4  li 9, 2
  011c0d8  li 10, 0
  011c0dc  bl 0x506444
  011c0e0  nop
  011c0e4  ld 0, 432(1)
  011c0e8  mtlr 0
  011c0ec  ld 30, 400(1)
  011c0f0  ld 31, 408(1)
  011c0f4  addi 1, 1, 416
  011c0f8  blr

music_StartSpeech_Vendor:   # 0x11c0fc, 0xec bytes
  011c0fc  stdu 1, -416(1)
  011c100  mflr 0
  011c104  std 0, 432(1)
  011c108  std 31, 408(1)
  011c10c  lis 31, 150
  011c110  ori 6, 5, 0
  011c114  addic 31, 31, 14024
  011c118  ori 5, 3, 0
  011c11c  ori 3, 6, 0
  011c120  lwz 6, 92(31)
  011c124  std 30, 400(1)
  011c128  cmpwi 6, 0
  011c12c  bf 2, 0x11c1d0
  011c130  li 6, -1
  011c134  li 7, 1
  011c138  lis 9, 0
  011c13c  li 10, 10
  011c140  stw 6, 92(31)
  011c144  sth 7, 102(31)
  011c148  ori 6, 9, 48000
  011c14c  sth 5, 96(31)
  011c150  li 8, 0
  011c154  sth 3, 98(31)
  011c158  lis 7, 101
  011c15c  sth 4, 100(31)
  011c160  addic 30, 1, 144
  011c164  addic 5, 5, -10000
  011c168  stw 10, 112(31)
  011c16c  addic 4, 7, 12564
  011c170  stw 6, 116(31)
  011c174  extsw 5, 5
  011c178  sth 8, 108(31)
  011c17c  ori 3, 30, 0
  011c180  bl 0x5cd2a8
  011c184  nop
  011c188  lis 4, 112
  011c18c  li 6, 12
  011c190  lhz 7, 98(31)
  011c194  addic 9, 4, 28096
  011c198  addic 10, 31, 92
  011c19c  li 8, 0
  011c1a0  std 6, 112(1)
  011c1a4  std 9, 120(1)
  011c1a8  ori 3, 30, 0
  011c1ac  std 10, 128(1)
  011c1b0  li 4, 0
  011c1b4  li 5, 0
  011c1b8  extsh 7, 7
  011c1bc  li 6, 0
  011c1c0  li 9, 2
  011c1c4  li 10, 0
  011c1c8  bl 0x506444
  011c1cc  nop
  011c1d0  ld 0, 432(1)
  011c1d4  mtlr 0
  011c1d8  ld 30, 400(1)
  011c1dc  ld 31, 408(1)
  011c1e0  addi 1, 1, 416
  011c1e4  blr

music_StartSpeech:   # 0x11c1e8, 0x648 bytes
  011c1e8  stdu 1, -1984(1)
  011c1ec  mflr 0
  011c1f0  std 0, 2000(1)
  011c1f4  lis 7, 151
  011c1f8  li 8, 0
  011c1fc  ori 6, 5, 0
  011c200  ori 5, 3, 0
  011c204  std 30, 1968(1)
  011c208  ori 3, 6, 0
  011c20c  lwz 30, -25484(7)
  011c210  std 31, 1976(1)
  011c214  lis 9, 0
  011c218  lis 31, 112
  011c21c  std 29, 1960(1)
  011c220  extsw 30, 30
  011c224  lis 29, 150
  011c228  subc 7, 8, 30
  011c22c  addic 6, 30, -1
  011c230  cntlzw 7, 7
  011c234  extsw 6, 6
  011c238  sldi 7, 7, 58
  011c23c  subc 8, 30, 6
  011c240  sradi 7, 7, 63
  011c244  addic 31, 31, 28096
  011c248  and 7, 7, 8
  011c24c  ori 8, 9, 60000
  011c250  addc 6, 6, 7
  011c254  cmpw 5, 8
  011c258  cmpwi 1, 5, 10000
  011c25c  cmpwi 6, 5, 20000
  011c260  std 28, 1952(1)
  011c264  std 27, 1944(1)
  011c268  std 26, 1936(1)
  011c26c  cmpwi 7, 5, 30000
  011c270  bt 0, 0x11c328
  011c274  addic 29, 29, 14024
  011c278  lwz 6, 92(29)
  011c27c  cmpwi 6, 0
  011c280  bf 2, 0x11c808
  011c284  li 6, -1
  011c288  li 7, 1
  011c28c  lis 9, 0
  011c290  lis 10, 0
  011c294  stw 6, 92(29)
  011c298  li 6, 10
  011c29c  sth 7, 102(29)
  011c2a0  ori 7, 9, 48000
  011c2a4  sth 5, 96(29)
  011c2a8  li 8, 0
  011c2ac  sth 3, 98(29)
  011c2b0  ori 9, 10, 60000
  011c2b4  sth 4, 100(29)
  011c2b8  lis 3, 101
  011c2bc  stw 6, 112(29)
  011c2c0  addic 30, 1, 1424
  011c2c4  stw 7, 116(29)
  011c2c8  subc 5, 5, 9
  011c2cc  sth 8, 108(29)
  011c2d0  addic 4, 3, 12336
  011c2d4  ori 3, 30, 0
  011c2d8  extsw 5, 5
  011c2dc  bl 0x5cd2a8
  011c2e0  nop
  011c2e4  li 6, 12
  011c2e8  addic 11, 29, 92
  011c2ec  lhz 7, 98(29)
  011c2f0  li 10, 0
  011c2f4  li 4, 0
  011c2f8  std 6, 112(1)
  011c2fc  extsh 7, 7
  011c300  std 31, 120(1)
  011c304  li 9, 2
  011c308  ori 3, 30, 0
  011c30c  std 11, 128(1)
  011c310  li 5, 0
  011c314  li 6, 0
  011c318  li 8, 0
  011c31c  bl 0x506444
  011c320  nop
  011c324  b 0x11c808
  011c328  lis 7, 0
  011c32c  ori 7, 7, 50000
  011c330  cmpw 5, 7
  011c334  bt 0, 0x11c3f0
  011c338  addic 29, 29, 14024
  011c33c  lwz 6, 92(29)
  011c340  cmpwi 6, 0
  011c344  bf 2, 0x11c808
  011c348  li 6, -1
  011c34c  li 8, 1
  011c350  lis 7, 0
  011c354  li 10, 10
  011c358  stw 6, 92(29)
  011c35c  lis 11, 0
  011c360  sth 8, 102(29)
  011c364  ori 6, 7, 48000
  011c368  sth 5, 96(29)
  011c36c  li 9, 0
  011c370  sth 3, 98(29)
  011c374  addic 28, 1, 1168
  011c378  ori 3, 11, 50000
  011c37c  sth 4, 100(29)
  011c380  stw 10, 112(29)
  011c384  lis 7, 101
  011c388  subc 5, 5, 3
  011c38c  stw 6, 116(29)
  011c390  ori 6, 30, 0
  011c394  sth 9, 108(29)
  011c398  addic 4, 7, 12388
  011c39c  ori 3, 28, 0
  011c3a0  extsw 5, 5
  011c3a4  bl 0x5cd2a8
  011c3a8  nop
  011c3ac  li 6, 12
  011c3b0  addic 11, 29, 92
  011c3b4  lhz 7, 98(29)
  011c3b8  li 10, 0
  011c3bc  li 4, 0
  011c3c0  std 6, 112(1)
  011c3c4  extsh 7, 7
  011c3c8  std 31, 120(1)
  011c3cc  li 9, 2
  011c3d0  ori 3, 28, 0
  011c3d4  std 11, 128(1)
  011c3d8  li 5, 0
  011c3dc  li 6, 0
  011c3e0  li 8, 0
  011c3e4  bl 0x506444
  011c3e8  nop
  011c3ec  b 0x11c808
  011c3f0  lis 7, 0
  011c3f4  ori 7, 7, 40000
  011c3f8  cmpw 5, 7
  011c3fc  bt 0, 0x11c4b4
  011c400  addic 29, 29, 14024
  011c404  lwz 6, 92(29)
  011c408  cmpwi 6, 0
  011c40c  bf 2, 0x11c808
  011c410  li 6, -1
  011c414  li 8, 1
  011c418  lis 7, 0
  011c41c  li 10, 10
  011c420  stw 6, 92(29)
  011c424  lis 11, 0
  011c428  sth 8, 102(29)
  011c42c  ori 6, 7, 48000
  011c430  sth 5, 96(29)
  011c434  li 9, 0
  011c438  sth 3, 98(29)
  011c43c  addic 30, 1, 912
  011c440  ori 3, 11, 40000
  011c444  sth 4, 100(29)
  011c448  lis 7, 101
  011c44c  stw 10, 112(29)
  011c450  subc 5, 5, 3
  011c454  stw 6, 116(29)
  011c458  addic 4, 7, 12436
  011c45c  sth 9, 108(29)
  011c460  ori 3, 30, 0
  011c464  extsw 5, 5
  011c468  bl 0x5cd2a8
  011c46c  nop
  011c470  li 6, 12
  011c474  lhz 7, 98(29)
  011c478  addic 10, 29, 92
  011c47c  li 4, 0
  011c480  extsh 7, 7
  011c484  std 6, 112(1)
  011c488  std 31, 120(1)
  011c48c  li 9, 2
  011c490  std 10, 128(1)
  011c494  ori 3, 30, 0
  011c498  li 5, 0
  011c49c  li 6, 0
  011c4a0  li 8, 0
  011c4a4  li 10, 0
  011c4a8  bl 0x506444
  011c4ac  nop
  011c4b0  b 0x11c808
  011c4b4  bt 28, 0x11c5d4
  011c4b8  addic 29, 29, 14024
  011c4bc  lwz 6, 92(29)
  011c4c0  cmpwi 6, 0
  011c4c4  bf 2, 0x11c808
  011c4c8  li 6, -1
  011c4cc  li 9, 1
  011c4d0  lis 7, 0
  011c4d4  li 8, 10
  011c4d8  stw 6, 92(29)
  011c4dc  ori 26, 30, 0
  011c4e0  sth 5, 96(29)
  011c4e4  ori 6, 7, 48000
  011c4e8  sth 9, 102(29)
  011c4ec  lis 30, 101
  011c4f0  li 7, 0
  011c4f4  sth 3, 98(29)
  011c4f8  addic 27, 5, -30000
  011c4fc  sth 4, 100(29)
  011c500  addic 28, 1, 656
  011c504  stw 8, 112(29)
  011c508  extsw 27, 27
  011c50c  stw 6, 116(29)
  011c510  addic 30, 30, 12484
  011c514  sth 7, 108(29)
  011c518  ori 3, 28, 0
  011c51c  ori 4, 30, 0
  011c520  ori 5, 27, 0
  011c524  ori 6, 26, 0
  011c528  bl 0x5cd2a8
  011c52c  nop
  011c530  cmpwi 26, 6
  011c534  bf 2, 0x11c564
  011c538  ori 3, 28, 0
  011c53c  bl 0x504178
  011c540  nop
  011c544  cmpdi 3, 0
  011c548  bf 2, 0x11c564
  011c54c  ori 3, 28, 0
  011c550  ori 4, 30, 0
  011c554  ori 5, 27, 0
  011c558  li 6, 0
  011c55c  bl 0x5cd2a8
  011c560  nop
  011c564  lis 3, 114
  011c568  li 4, 0
  011c56c  li 5, 0
  011c570  li 8, 12
  011c574  addic 10, 29, 92
  011c578  lbz 3, -1192(3)
  011c57c  li 9, 2
  011c580  lhz 6, 98(29)
  011c584  subc 3, 4, 3
  011c588  subc 5, 5, 6
  011c58c  std 8, 112(1)
  011c590  cntlzw 3, 3
  011c594  std 31, 120(1)
  011c598  std 10, 128(1)
  011c59c  li 8, 0
  011c5a0  sldi 4, 3, 58
  011c5a4  ori 3, 28, 0
  011c5a8  sradi 7, 4, 63
  011c5ac  li 4, 0
  011c5b0  and 5, 7, 5
  011c5b4  li 10, 0
  011c5b8  addc 7, 6, 5
  011c5bc  li 5, 0
  011c5c0  extsh 7, 7
  011c5c4  li 6, 0
  011c5c8  bl 0x506444
  011c5cc  nop
  011c5d0  b 0x11c808
  011c5d4  bt 24, 0x11c694
  011c5d8  addic 29, 29, 14024
  011c5dc  lwz 6, 92(29)
  011c5e0  cmpwi 6, 0
  011c5e4  bf 2, 0x11c808
  011c5e8  ori 6, 4, 0
  011c5ec  li 4, -1
  011c5f0  li 8, 1
  011c5f4  lis 7, 0
  011c5f8  li 10, 10
  011c5fc  stw 4, 92(29)
  011c600  sth 8, 102(29)
  011c604  lis 9, 151
  011c608  ori 7, 7, 48000
  011c60c  sth 5, 96(29)
  011c610  sth 3, 98(29)
  011c614  li 8, 0
  011c618  sth 6, 100(29)
  011c61c  addic 30, 1, 400
  011c620  stw 10, 112(29)
  011c624  addic 6, 5, -20000
  011c628  stw 7, 116(29)
  011c62c  lis 4, 101
  011c630  lwz 5, -25488(9)
  011c634  extsw 6, 6
  011c638  addic 4, 4, 12524
  011c63c  sth 8, 108(29)
  011c640  ori 3, 30, 0
  011c644  extsw 5, 5
  011c648  bl 0x5cd2a8
  011c64c  nop
  011c650  li 6, 12
  011c654  lhz 7, 98(29)
  011c658  addic 10, 29, 92
  011c65c  li 4, 0
  011c660  extsh 7, 7
  011c664  std 6, 112(1)
  011c668  std 31, 120(1)
  011c66c  li 9, 2
  011c670  std 10, 128(1)
  011c674  ori 3, 30, 0
  011c678  li 5, 0
  011c67c  li 6, 0
  011c680  li 8, 0
  011c684  li 10, 0
  011c688  bl 0x506444
  011c68c  nop
  011c690  b 0x11c808
  011c694  bt 4, 0x11c748
  011c698  addic 29, 29, 14024
  011c69c  lwz 6, 92(29)
  011c6a0  cmpwi 6, 0
  011c6a4  bf 2, 0x11c808
  011c6a8  ori 6, 4, 0
  011c6ac  li 4, -1
  011c6b0  li 8, 1
  011c6b4  lis 7, 0
  011c6b8  li 10, 10
  011c6bc  stw 4, 92(29)
  011c6c0  sth 8, 102(29)
  011c6c4  ori 7, 7, 48000
  011c6c8  sth 5, 96(29)
  011c6cc  li 9, 0
  011c6d0  sth 3, 98(29)
  011c6d4  addic 30, 1, 144
  011c6d8  sth 6, 100(29)
  011c6dc  lis 4, 101
  011c6e0  addic 5, 5, -10000
  011c6e4  stw 10, 112(29)
  011c6e8  stw 7, 116(29)
  011c6ec  addic 4, 4, 12564
  011c6f0  extsw 5, 5
  011c6f4  sth 9, 108(29)
  011c6f8  ori 3, 30, 0
  011c6fc  bl 0x5cd2a8
  011c700  nop
  011c704  li 6, 12
  011c708  addic 10, 29, 92
  011c70c  lhz 7, 98(29)
  011c710  li 4, 0
  011c714  extsh 7, 7
  011c718  std 6, 112(1)
  011c71c  li 9, 2
  011c720  std 31, 120(1)
  011c724  ori 3, 30, 0
  011c728  std 10, 128(1)
  011c72c  li 5, 0
  011c730  li 6, 0
  011c734  li 8, 0
  011c738  li 10, 0
  011c73c  bl 0x506444
  011c740  nop
  011c744  b 0x11c808
  011c748  addic 29, 29, 14024
  011c74c  lwz 7, 92(29)
  011c750  cmpwi 7, 0
  011c754  bf 2, 0x11c808
  011c758  ori 7, 6, 0
  011c75c  li 6, -1
  011c760  li 9, 1
  011c764  lis 8, 0
  011c768  li 11, 10
  011c76c  stw 6, 92(29)
  011c770  sth 9, 102(29)
  011c774  ori 6, 8, 48000
  011c778  sth 5, 96(29)
  011c77c  li 10, 0
  011c780  lis 12, 151
  011c784  sth 3, 98(29)
  011c788  lis 8, 115
  011c78c  sth 4, 100(29)
  011c790  stw 11, 112(29)
  011c794  addic 30, 1, 1680
  011c798  addic 8, 8, -27184
  011c79c  stw 6, 116(29)
  011c7a0  sth 10, 108(29)
  011c7a4  ori 6, 5, 0
  011c7a8  lis 4, 101
  011c7ac  lwz 5, -25488(12)
  011c7b0  ori 3, 30, 0
  011c7b4  addic 4, 4, 12612
  011c7b8  lbzx 7, 8, 7
  011c7bc  extsw 5, 5
  011c7c0  bl 0x5cd2a8
  011c7c4  nop
  011c7c8  li 6, 12
  011c7cc  lhz 7, 98(29)
  011c7d0  addic 10, 29, 92
  011c7d4  li 4, 0
  011c7d8  extsh 7, 7
  011c7dc  std 6, 112(1)
  011c7e0  std 31, 120(1)
  011c7e4  li 9, 2
  011c7e8  std 10, 128(1)
  011c7ec  ori 3, 30, 0
  011c7f0  li 5, 0
  011c7f4  li 6, 0
  011c7f8  li 8, 0
  011c7fc  li 10, 0
  011c800  bl 0x506444
  011c804  nop
  011c808  ld 0, 2000(1)
  011c80c  mtlr 0
  011c810  ld 26, 1936(1)
  011c814  ld 27, 1944(1)
  011c818  ld 28, 1952(1)
  011c81c  ld 29, 1960(1)
  011c820  ld 30, 1968(1)
  011c824  ld 31, 1976(1)
  011c828  addi 1, 1, 1984
  011c82c  blr

music_PlayPreseekedSpeech:   # 0x11c830, 0x60 bytes
  011c830  stdu 1, -128(1)
  011c834  mflr 0
  011c838  std 0, 144(1)
  011c83c  std 31, 120(1)
  011c840  lis 31, 150
  011c844  addic 31, 31, 14024
  011c848  lwz 3, 92(31)
  011c84c  cmpwi 3, 0
  011c850  bt 2, 0x11c878
  011c854  lhz 4, 102(31)
  011c858  cmpwi 4, 3
  011c85c  bf 2, 0x11c878
  011c860  bl 0x505cfc
  011c864  nop
  011c868  li 4, 4
  011c86c  li 3, 1
  011c870  sth 4, 102(31)
  011c874  b 0x11c87c
  011c878  li 3, 0
  011c87c  ld 0, 144(1)
  011c880  mtlr 0
  011c884  ld 31, 120(1)
  011c888  addi 1, 1, 128
  011c88c  blr

music_PreseekTrack:   # 0x11c890, 0xf4 bytes
  011c890  stdu 1, -416(1)
  011c894  mflr 0
  011c898  std 0, 432(1)
  011c89c  std 31, 408(1)
  011c8a0  lis 31, 150
  011c8a4  ori 6, 5, 0
  011c8a8  addic 31, 31, 14024
  011c8ac  ori 5, 3, 0
  011c8b0  ori 3, 6, 0
  011c8b4  lwz 6, 64(31)
  011c8b8  std 30, 400(1)
  011c8bc  cmpwi 6, 0
  011c8c0  bf 2, 0x11c96c
  011c8c4  li 6, -1
  011c8c8  li 7, 1
  011c8cc  lis 9, 0
  011c8d0  li 8, 0
  011c8d4  stw 6, 64(31)
  011c8d8  li 6, 10
  011c8dc  sth 7, 74(31)
  011c8e0  ori 7, 9, 48000
  011c8e4  sth 5, 68(31)
  011c8e8  lis 10, 151
  011c8ec  sth 3, 70(31)
  011c8f0  sth 4, 72(31)
  011c8f4  lis 9, 101
  011c8f8  stw 6, 84(31)
  011c8fc  addic 30, 1, 144
  011c900  stw 7, 88(31)
  011c904  ori 6, 5, 0
  011c908  sth 8, 80(31)
  011c90c  addic 4, 9, 12300
  011c910  lwz 5, -25488(10)
  011c914  ori 3, 30, 0
  011c918  extsw 5, 5
  011c91c  bl 0x5cd2a8
  011c920  nop
  011c924  lis 4, 112
  011c928  li 6, 12
  011c92c  lhz 7, 70(31)
  011c930  addic 9, 4, 28104
  011c934  addic 10, 31, 64
  011c938  li 8, 0
  011c93c  std 6, 112(1)
  011c940  std 9, 120(1)
  011c944  ori 3, 30, 0
  011c948  std 10, 128(1)
  011c94c  li 4, 0
  011c950  li 5, 0
  011c954  extsh 7, 7
  011c958  li 6, 0
  011c95c  li 9, 1
  011c960  li 10, 0
  011c964  bl 0x506444
  011c968  nop
  011c96c  ld 0, 432(1)
  011c970  mtlr 0
  011c974  ld 30, 400(1)
  011c978  ld 31, 408(1)
  011c97c  addi 1, 1, 416
  011c980  blr

music_StartTrack:   # 0x11c984, 0xf4 bytes
  011c984  stdu 1, -416(1)
  011c988  mflr 0
  011c98c  std 0, 432(1)
  011c990  std 31, 408(1)
  011c994  lis 31, 150
  011c998  ori 6, 5, 0
  011c99c  addic 31, 31, 14024
  011c9a0  ori 5, 3, 0
  011c9a4  ori 3, 6, 0
  011c9a8  lwz 6, 64(31)
  011c9ac  std 30, 400(1)
  011c9b0  cmpwi 6, 0
  011c9b4  bf 2, 0x11ca60
  011c9b8  li 6, -1
  011c9bc  li 7, 1
  011c9c0  lis 9, 0
  011c9c4  li 8, 0
  011c9c8  stw 6, 64(31)
  011c9cc  li 6, 10
  011c9d0  sth 7, 74(31)
  011c9d4  ori 7, 9, 48000
  011c9d8  sth 5, 68(31)
  011c9dc  lis 10, 151
  011c9e0  sth 3, 70(31)
  011c9e4  sth 4, 72(31)
  011c9e8  lis 9, 101
  011c9ec  stw 6, 84(31)
  011c9f0  addic 30, 1, 144
  011c9f4  stw 7, 88(31)
  011c9f8  ori 6, 5, 0
  011c9fc  sth 8, 80(31)
  011ca00  addic 4, 9, 12300
  011ca04  lwz 5, -25488(10)
  011ca08  ori 3, 30, 0
  011ca0c  extsw 5, 5
  011ca10  bl 0x5cd2a8
  011ca14  nop
  011ca18  lis 4, 112
  011ca1c  li 6, 8
  011ca20  lhz 7, 70(31)
  011ca24  addic 9, 4, 28128
  011ca28  addic 10, 31, 64
  011ca2c  li 8, 0
  011ca30  std 6, 112(1)
  011ca34  std 9, 120(1)
  011ca38  ori 3, 30, 0
  011ca3c  std 10, 128(1)
  011ca40  li 4, 0
  011ca44  li 5, 0
  011ca48  extsh 7, 7
  011ca4c  li 6, 0
  011ca50  li 9, 1
  011ca54  li 10, 0
  011ca58  bl 0x506444
  011ca5c  nop
  011ca60  ld 0, 432(1)
  011ca64  mtlr 0
  011ca68  ld 30, 400(1)
  011ca6c  ld 31, 408(1)
  011ca70  addi 1, 1, 416
  011ca74  blr

music_StartTrackBody:   # 0x11ca78, 0x13c bytes
  011ca78  stdu 1, -432(1)
  011ca7c  mflr 0
  011ca80  std 0, 448(1)
  011ca84  std 31, 424(1)
  011ca88  lis 31, 150
  011ca8c  ori 6, 5, 0
  011ca90  addic 31, 31, 14024
  011ca94  ori 5, 3, 0
  011ca98  ori 3, 6, 0
  011ca9c  lhz 6, 74(31)
  011caa0  std 30, 416(1)
  011caa4  std 29, 408(1)
  011caa8  std 28, 400(1)
  011caac  cmpwi 6, 9
  011cab0  bt 2, 0x11cb94
  011cab4  lwz 30, 64(31)
  011cab8  cmpwi 1, 30, -1
  011cabc  cmpwi 30, 0
  011cac0  cror 2, 2, 6
  011cac4  bt 2, 0x11cb94
  011cac8  clrlwi 6, 4, 31
  011cacc  sth 5, 68(31)
  011cad0  li 7, 0
  011cad4  li 10, 9
  011cad8  subc 6, 7, 6
  011cadc  lis 7, 0
  011cae0  cntlzw 6, 6
  011cae4  li 8, 10
  011cae8  sldi 6, 6, 58
  011caec  sth 10, 74(31)
  011caf0  li 11, 8
  011caf4  sth 3, 70(31)
  011caf8  li 12, 24
  011cafc  sth 4, 72(31)
  011cb00  lis 9, 151
  011cb04  stw 8, 84(31)
  011cb08  ori 7, 7, 48000
  011cb0c  sradi 6, 6, 63
  011cb10  subc 11, 11, 12
  011cb14  li 10, 0
  011cb18  and 6, 6, 11
  011cb1c  stw 7, 88(31)
  011cb20  lis 4, 101
  011cb24  lwz 3, -25488(9)
  011cb28  addc 29, 12, 6
  011cb2c  addic 28, 1, 144
  011cb30  addic 6, 5, 1
  011cb34  sth 10, 80(31)
  011cb38  addic 4, 4, 12300
  011cb3c  extsw 5, 3
  011cb40  extsw 6, 6
  011cb44  ori 3, 28, 0
  011cb48  bl 0x5cd2a8
  011cb4c  nop
  011cb50  lis 4, 112
  011cb54  lhz 7, 70(31)
  011cb58  addic 10, 31, 64
  011cb5c  std 29, 112(1)
  011cb60  addic 8, 4, 28120
  011cb64  li 9, 1
  011cb68  ori 3, 28, 0
  011cb6c  li 4, 0
  011cb70  std 8, 120(1)
  011cb74  extsh 7, 7
  011cb78  std 10, 128(1)
  011cb7c  li 5, 0
  011cb80  li 6, 0
  011cb84  li 8, 0
  011cb88  ori 10, 30, 0
  011cb8c  bl 0x506444
  011cb90  nop
  011cb94  ld 0, 448(1)
  011cb98  mtlr 0
  011cb9c  ld 28, 400(1)
  011cba0  ld 29, 408(1)
  011cba4  ld 30, 416(1)
  011cba8  ld 31, 424(1)
  011cbac  addi 1, 1, 432
  011cbb0  blr

music_Transition:   # 0x11cbb4, 0x114 bytes
  011cbb4  stdu 1, -432(1)
  011cbb8  mflr 0
  011cbbc  std 0, 448(1)
  011cbc0  std 31, 424(1)
  011cbc4  lis 31, 150
  011cbc8  ori 7, 6, 0
  011cbcc  addic 31, 31, 14024
  011cbd0  ori 6, 3, 0
  011cbd4  ori 8, 5, 0
  011cbd8  ori 5, 4, 0
  011cbdc  ori 4, 8, 0
  011cbe0  lwz 3, 120(31)
  011cbe4  cmpwi 3, 0
  011cbe8  std 30, 416(1)
  011cbec  std 29, 408(1)
  011cbf0  ori 3, 7, 0
  011cbf4  bf 2, 0x11cca8
  011cbf8  ori 7, 4, 0
  011cbfc  li 4, -1
  011cc00  li 30, 1
  011cc04  lis 8, 0
  011cc08  li 10, 10
  011cc0c  stw 4, 120(31)
  011cc10  sth 30, 130(31)
  011cc14  ori 8, 8, 48000
  011cc18  sth 6, 124(31)
  011cc1c  lis 9, 151
  011cc20  sth 3, 126(31)
  011cc24  addic 29, 1, 144
  011cc28  sth 7, 128(31)
  011cc2c  ori 6, 5, 0
  011cc30  stw 10, 140(31)
  011cc34  lis 4, 101
  011cc38  stw 8, 144(31)
  011cc3c  ori 3, 29, 0
  011cc40  sth 30, 136(31)
  011cc44  addic 4, 4, 12300
  011cc48  lwz 5, -25488(9)
  011cc4c  extsw 5, 5
  011cc50  bl 0x5cd2a8
  011cc54  nop
  011cc58  lis 3, 112
  011cc5c  lhz 7, 126(31)
  011cc60  li 6, 8
  011cc64  addic 8, 3, 28112
  011cc68  addic 9, 31, 120
  011cc6c  ori 3, 29, 0
  011cc70  std 6, 112(1)
  011cc74  li 4, 0
  011cc78  std 8, 120(1)
  011cc7c  extsh 7, 7
  011cc80  std 9, 128(1)
  011cc84  li 5, 0
  011cc88  li 6, 0
  011cc8c  li 8, 0
  011cc90  li 9, 1
  011cc94  li 10, 0
  011cc98  bl 0x506444
  011cc9c  nop
  011cca0  ori 3, 30, 0
  011cca4  b 0x11ccac
  011cca8  li 3, 0
  011ccac  ld 0, 448(1)
  011ccb0  mtlr 0
  011ccb4  ld 29, 408(1)
  011ccb8  ld 30, 416(1)
  011ccbc  ld 31, 424(1)
  011ccc0  addi 1, 1, 432
  011ccc4  blr

music_SetTransition:   # 0x11ccc8, 0x54 bytes
  011ccc8  lis 5, 150
  011cccc  addic 5, 5, 14024
  011ccd0  lhz 6, 68(5)
  011ccd4  lhz 7, 74(5)
  011ccd8  extsh 6, 6
  011ccdc  lhz 8, 130(5)
  011cce0  cmpwi 6, 7, 0
  011cce4  cmpw 6, 3
  011cce8  cmpwi 1, 8, 0
  011ccec  bf 2, 0x11cd00
  011ccf0  lbz 6, 34(5)
  011ccf4  extsb 6, 6
  011ccf8  cmpwi 6, -1
  011ccfc  bt 2, 0x11cd18
  011cd00  bf 26, 0x11cd10
  011cd04  bf 6, 0x11cd10
  011cd08  sth 3, 68(5)
  011cd0c  b 0x11cd18
  011cd10  stb 3, 34(5)
  011cd14  stb 4, 35(5)
  011cd18  blr

music_Stop:   # 0x11cd1c, 0x104 bytes
  011cd1c  stdu 1, -128(1)
  011cd20  mflr 0
  011cd24  std 0, 144(1)
  011cd28  std 31, 120(1)
  011cd2c  lis 31, 150
  011cd30  addic 31, 31, 14024
  011cd34  lwz 3, 64(31)
  011cd38  cmpwi 3, -1
  011cd3c  bf 2, 0x11cd54
  011cd40  bl 0x505d20
  011cd44  nop
  011cd48  lwz 3, 64(31)
  011cd4c  cmpwi 3, -1
  011cd50  bt 2, 0x11cd40
  011cd54  lwz 3, 120(31)
  011cd58  cmpwi 3, -1
  011cd5c  bf 2, 0x11cd74
  011cd60  bl 0x505d20
  011cd64  nop
  011cd68  lwz 3, 120(31)
  011cd6c  cmpwi 3, -1
  011cd70  bt 2, 0x11cd60
  011cd74  lwz 3, 92(31)
  011cd78  cmpwi 3, -1
  011cd7c  bf 2, 0x11cd94
  011cd80  bl 0x505d20
  011cd84  nop
  011cd88  lwz 3, 92(31)
  011cd8c  cmpwi 3, -1
  011cd90  bt 2, 0x11cd80
  011cd94  bl 0x632674
  011cd98  nop
  011cd9c  bl 0x505d20
  011cda0  nop
  011cda4  cmpwi 3, 0
  011cda8  bf 2, 0x11cd9c
  011cdac  li 3, 1
  011cdb0  bl 0x5066c4
  011cdb4  nop
  011cdb8  li 4, 0
  011cdbc  lbz 3, 34(31)
  011cdc0  extsb 5, 3
  011cdc4  sth 4, 74(31)
  011cdc8  cmpwi 5, -1
  011cdcc  sth 4, 72(31)
  011cdd0  stw 4, 64(31)
  011cdd4  bt 2, 0x11cde0
  011cdd8  extsb 3, 3
  011cddc  sth 3, 68(31)
  011cde0  li 3, 0
  011cde4  li 4, -1
  011cde8  sth 3, 102(31)
  011cdec  sth 3, 100(31)
  011cdf0  stw 3, 92(31)
  011cdf4  sth 3, 130(31)
  011cdf8  sth 3, 128(31)
  011cdfc  stw 3, 120(31)
  011ce00  sth 3, 32(31)
  011ce04  stb 4, 34(31)
  011ce08  stb 4, 35(31)
  011ce0c  ld 0, 144(1)
  011ce10  mtlr 0
  011ce14  ld 31, 120(1)
  011ce18  addi 1, 1, 128
  011ce1c  blr

music_Pause:   # 0x11ce20, 0x44 bytes
  011ce20  cmpwi 3, 0
  011ce24  bt 2, 0x11ce40
  011ce28  lis 3, 150
  011ce2c  li 4, -32768
  011ce30  addic 3, 3, 14024
  011ce34  li 5, 0
  011ce38  sth 4, 104(3)
  011ce3c  sth 5, 106(3)
  011ce40  lis 3, 150
  011ce44  li 4, -32768
  011ce48  addic 3, 3, 14024
  011ce4c  li 5, 0
  011ce50  sth 4, 76(3)
  011ce54  sth 5, 78(3)
  011ce58  sth 4, 132(3)
  011ce5c  sth 5, 134(3)
  011ce60  blr

music_Unpause:   # 0x11ce64, 0x1c bytes
  011ce64  lis 3, 150
  011ce68  li 4, 4
  011ce6c  addic 3, 3, 14024
  011ce70  sth 4, 76(3)
  011ce74  sth 4, 132(3)
  011ce78  sth 4, 104(3)
  011ce7c  blr

music_UnpauseDelay:   # 0x11ce80, 0x48 bytes
  011ce80  lis 6, 150
  011ce84  addic 6, 6, 14024
  011ce88  lhz 4, 76(6)
  011ce8c  lhz 5, 132(6)
  011ce90  rlwinm 4, 4, 0, 16, 16
  011ce94  cmpwi 4, 0
  011ce98  lhz 4, 104(6)
  011ce9c  bt 2, 0x11cea4
  011cea0  sth 3, 78(6)
  011cea4  rlwinm 5, 5, 0, 16, 16
  011cea8  cmpwi 5, 0
  011ceac  bt 2, 0x11ceb4
  011ceb0  sth 3, 134(6)
  011ceb4  rlwinm 4, 4, 0, 16, 16
  011ceb8  cmpwi 4, 0
  011cebc  bt 2, 0x11cec4
  011cec0  sth 3, 106(6)
  011cec4  blr

music_UpdateStream:   # 0x11cec8, 0x1c0 bytes
  011cec8  stdu 1, -128(1)
  011cecc  mflr 0
  011ced0  std 0, 144(1)
  011ced4  std 31, 120(1)
  011ced8  ori 31, 3, 0
  011cedc  lhz 4, 10(31)
  011cee0  lwz 3, 0(31)
  011cee4  cmpwi 4, 9
  011cee8  cmpwi 6, 4, 5
  011ceec  cmpwi 1, 3, -1
  011cef0  std 30, 112(1)
  011cef4  cmpwi 7, 4, 7
  011cef8  bt 2, 0x11d05c
  011cefc  ori 5, 3, 0
  011cf00  cmpwi 5, 0
  011cf04  bt 2, 0x11d05c
  011cf08  bt 6, 0x11d05c
  011cf0c  bf 26, 0x11cf28
  011cf10  bl 0x506638
  011cf14  nop
  011cf18  li 4, 6
  011cf1c  lwz 5, 0(31)
  011cf20  sth 4, 10(31)
  011cf24  b 0x11cf28
  011cf28  cmpwi 5, 0
  011cf2c  bt 2, 0x11d070
  011cf30  lhz 3, 12(31)
  011cf34  rlwinm 3, 3, 0, 16, 16
  011cf38  cmpwi 3, 0
  011cf3c  bt 2, 0x11cf8c
  011cf40  rlwinm 3, 4, 0, 16, 16
  011cf44  cmpwi 3, 0
  011cf48  bf 2, 0x11cf6c
  011cf4c  ori 3, 5, 0
  011cf50  bl 0x505f18
  011cf54  nop
  011cf58  lis 3, 0
  011cf5c  lhz 4, 10(31)
  011cf60  ori 3, 3, 32768
  011cf64  or 3, 4, 3
  011cf68  sth 3, 10(31)
  011cf6c  addic 3, 31, 14
  011cf70  bl 0x4fffb4
  011cf74  nop
  011cf78  cmpwi 3, 2
  011cf7c  bf 2, 0x11cfb8
  011cf80  li 3, 4
  011cf84  sth 3, 12(31)
  011cf88  b 0x11cfb8
  011cf8c  rlwinm 3, 4, 0, 16, 16
  011cf90  cmpwi 3, 0
  011cf94  bt 2, 0x11cfb8
  011cf98  ori 3, 5, 0
  011cf9c  bl 0x505cfc
  011cfa0  nop
  011cfa4  lis 4, 0
  011cfa8  lhz 3, 10(31)
  011cfac  ori 4, 4, 32768
  011cfb0  xor 3, 3, 4
  011cfb4  sth 3, 10(31)
  011cfb8  lhz 4, 10(31)
  011cfbc  rlwinm 3, 4, 0, 16, 16
  011cfc0  cmpwi 1, 4, 1
  011cfc4  cmpwi 3, 0
  011cfc8  crorc 2, 6, 2
  011cfcc  bt 2, 0x11d070
  011cfd0  cmpwi 4, 8
  011cfd4  bt 2, 0x11d070
  011cfd8  cmpwi 4, 9
  011cfdc  bt 2, 0x11d070
  011cfe0  cmpwi 4, 2
  011cfe4  bt 2, 0x11d030
  011cfe8  cmpwi 4, 3
  011cfec  bt 2, 0x11d030
  011cff0  li 3, -1
  011cff4  lis 4, 112
  011cff8  lwz 30, 0(31)
  011cffc  ori 5, 31, 0
  011d000  addic 4, 4, 28152
  011d004  stw 3, 0(31)
  011d008  ori 3, 30, 0
  011d00c  bl 0x505e08
  011d010  nop
  011d014  lis 4, 112
  011d018  ori 3, 30, 0
  011d01c  addic 4, 4, 28136
  011d020  ori 5, 31, 0
  011d024  bl 0x5065dc
  011d028  nop
  011d02c  b 0x11d070
  011d030  lwz 3, 0(31)
  011d034  cmpwi 3, -1
  011d038  bt 2, 0x11d070
  011d03c  cmpwi 4, 2
  011d040  bf 2, 0x11d070
  011d044  lis 4, 112
  011d048  ori 5, 31, 0
  011d04c  addic 4, 4, 28088
  011d050  bl 0x505e98
  011d054  nop
  011d058  b 0x11d070
  011d05c  bt 30, 0x11d068
  011d060  cmpwi 3, 0
  011d064  bf 2, 0x11d070
  011d068  li 3, 0
  011d06c  sth 3, 10(31)
  011d070  ld 0, 144(1)
  011d074  mtlr 0
  011d078  ld 30, 112(1)
  011d07c  ld 31, 120(1)
  011d080  addi 1, 1, 128
  011d084  blr

music_LoadFromHostWad:   # 0x11d088, 0x15c bytes
  011d088  stdu 1, -224(1)
  011d08c  mflr 0
  011d090  std 0, 240(1)
  011d094  std 28, 192(1)
  011d098  std 29, 200(1)
  011d09c  lis 28, 150
  011d0a0  std 30, 208(1)
  011d0a4  ori 29, 3, 0
  011d0a8  addic 28, 28, 14024
  011d0ac  std 31, 216(1)
  011d0b0  ori 30, 4, 0
  011d0b4  ori 31, 5, 0
  011d0b8  lhz 3, 8(28)
  011d0bc  std 27, 184(1)
  011d0c0  cmpwi 3, 0
  011d0c4  bf 2, 0x11d0d0
  011d0c8  cmpwi 31, 0
  011d0cc  bf 2, 0x11d0d8
  011d0d0  li 3, 0
  011d0d4  b 0x11d1c0
  011d0d8  addic 27, 1, 112
  011d0dc  lis 4, 101
  011d0e0  ori 3, 27, 0
  011d0e4  addic 4, 4, 12660
  011d0e8  bl 0x5cd2a8
  011d0ec  nop
  011d0f0  ori 3, 27, 0
  011d0f4  li 4, 0
  011d0f8  bl 0x502dcc
  011d0fc  nop
  011d100  ori 27, 3, 0
  011d104  cmpwi 27, 0
  011d108  bf 0, 0x11d114
  011d10c  li 3, 0
  011d110  b 0x11d1c0
  011d114  li 4, 0
  011d118  ori 3, 27, 0
  011d11c  li 5, 5
  011d120  bl 0x502de0
  011d124  nop
  011d128  addc 4, 31, 30
  011d12c  addic 4, 4, -1
  011d130  sldi 4, 4, 11
  011d134  cmpw 3, 4
  011d138  bt 1, 0x11d150
  011d13c  ori 3, 27, 0
  011d140  bl 0x502ddc
  011d144  nop
  011d148  li 3, 0
  011d14c  b 0x11d1c0
  011d150  slwi 4, 30, 11
  011d154  ori 3, 27, 0
  011d158  extsw 4, 4
  011d15c  li 5, 6
  011d160  bl 0x502de0
  011d164  nop
  011d168  slwi 30, 31, 11
  011d16c  ori 4, 29, 0
  011d170  extsw 30, 30
  011d174  ori 3, 27, 0
  011d178  ori 5, 30, 0
  011d17c  bl 0x502dd4
  011d180  nop
  011d184  addic 4, 31, -1
  011d188  sldi 4, 4, 11
  011d18c  cmpw 3, 4
  011d190  bt 1, 0x11d1a8
  011d194  ori 3, 27, 0
  011d198  bl 0x502ddc
  011d19c  nop
  011d1a0  li 3, 0
  011d1a4  b 0x11d1c0
  011d1a8  ori 3, 27, 0
  011d1ac  bl 0x502ddc
  011d1b0  nop
  011d1b4  li 4, 1
  011d1b8  ori 3, 30, 0
  011d1bc  sth 4, 8(28)
  011d1c0  ld 0, 240(1)
  011d1c4  mtlr 0
  011d1c8  ld 27, 184(1)
  011d1cc  ld 28, 192(1)
  011d1d0  ld 29, 200(1)
  011d1d4  ld 30, 208(1)
  011d1d8  ld 31, 216(1)
  011d1dc  addi 1, 1, 224
  011d1e0  blr

LoadMusic:   # 0x11d1f0, 0x7f0 bytes
  011d1f0  stdu 1, -1280(1)
  011d1f4  mflr 0
  011d1f8  std 0, 1296(1)
  011d1fc  std 27, 1240(1)
  011d200  lis 27, 150
  011d204  addic 27, 27, 14024
  011d208  lbz 3, 11(27)
  011d20c  std 31, 1272(1)
  011d210  lhz 5, 74(27)
  011d214  lwz 31, 64(27)
  011d218  lhz 4, 76(27)
  011d21c  cmpwi 3, 0
  011d220  lhz 6, 72(27)
  011d224  cmpwi 6, 5, 9
  011d228  lbz 7, 34(27)
  011d22c  cmpwi 1, 31, 0
  011d230  lhz 8, 68(27)
  011d234  std 30, 1264(1)
  011d238  std 29, 1256(1)
  011d23c  std 28, 1248(1)
  011d240  cmpwi 7, 31, -1
  011d244  bf 2, 0x11d9bc
  011d248  lhz 3, 8(27)
  011d24c  cmpwi 3, 0
  011d250  bt 2, 0x11d25c
  011d254  addic 3, 3, -1
  011d258  sth 3, 8(27)
  011d25c  rlwinm 3, 4, 0, 16, 16
  011d260  cmpwi 3, 0
  011d264  bf 2, 0x11d414
  011d268  rlwinm 3, 5, 0, 16, 16
  011d26c  cmpwi 3, 0
  011d270  bf 2, 0x11d414
  011d274  bf 6, 0x11d334
  011d278  clrlwi 3, 6, 31
  011d27c  cmpwi 3, 0
  011d280  bt 2, 0x11d334
  011d284  extsb 3, 7
  011d288  cmpwi 3, -1
  011d28c  bf 2, 0x11d334
  011d290  li 3, -1
  011d294  li 4, 1
  011d298  lis 7, 0
  011d29c  li 9, 10
  011d2a0  stw 3, 64(27)
  011d2a4  sth 4, 74(27)
  011d2a8  lis 5, 151
  011d2ac  li 4, 0
  011d2b0  sth 8, 68(27)
  011d2b4  ori 7, 7, 48000
  011d2b8  stw 9, 84(27)
  011d2bc  extsh 6, 8
  011d2c0  lis 8, 101
  011d2c4  sth 4, 80(27)
  011d2c8  addic 31, 1, 976
  011d2cc  stw 7, 88(27)
  011d2d0  addic 4, 8, 12300
  011d2d4  lwz 5, -25488(5)
  011d2d8  ori 3, 31, 0
  011d2dc  extsw 5, 5
  011d2e0  bl 0x5cd2a8
  011d2e4  nop
  011d2e8  lis 4, 112
  011d2ec  li 6, 8
  011d2f0  lhz 7, 70(27)
  011d2f4  addic 9, 4, 28128
  011d2f8  addic 10, 27, 64
  011d2fc  li 8, 0
  011d300  std 6, 112(1)
  011d304  std 9, 120(1)
  011d308  ori 3, 31, 0
  011d30c  std 10, 128(1)
  011d310  li 4, 0
  011d314  li 5, 0
  011d318  extsh 7, 7
  011d31c  li 6, 0
  011d320  li 9, 1
  011d324  li 10, 0
  011d328  bl 0x506444
  011d32c  nop
  011d330  b 0x11d414
  011d334  bt 26, 0x11d414
  011d338  bt 6, 0x11d414
  011d33c  bt 30, 0x11d414
  011d340  cmpwi 5, 8
  011d344  bf 2, 0x11d414
  011d348  extsh 3, 8
  011d34c  bt 26, 0x11d414
  011d350  bt 30, 0x11d414
  011d354  clrlwi 4, 6, 31
  011d358  li 5, 0
  011d35c  li 6, 9
  011d360  subc 4, 5, 4
  011d364  li 10, 8
  011d368  cntlzw 4, 4
  011d36c  li 11, 24
  011d370  sth 6, 74(27)
  011d374  sldi 4, 4, 58
  011d378  sth 8, 68(27)
  011d37c  lis 7, 0
  011d380  li 9, 10
  011d384  sradi 4, 4, 63
  011d388  li 12, 0
  011d38c  subc 6, 10, 11
  011d390  lis 5, 151
  011d394  ori 7, 7, 48000
  011d398  stw 9, 84(27)
  011d39c  and 4, 4, 6
  011d3a0  sth 12, 80(27)
  011d3a4  addic 29, 1, 720
  011d3a8  addc 30, 11, 4
  011d3ac  lis 4, 101
  011d3b0  stw 7, 88(27)
  011d3b4  lwz 5, -25488(5)
  011d3b8  addic 6, 3, 1
  011d3bc  addic 4, 4, 12300
  011d3c0  ori 3, 29, 0
  011d3c4  extsw 5, 5
  011d3c8  bl 0x5cd2a8
  011d3cc  nop
  011d3d0  lis 4, 112
  011d3d4  addic 10, 27, 64
  011d3d8  lhz 7, 70(27)
  011d3dc  addic 8, 4, 28120
  011d3e0  std 30, 112(1)
  011d3e4  li 9, 1
  011d3e8  ori 3, 29, 0
  011d3ec  li 4, 0
  011d3f0  std 8, 120(1)
  011d3f4  std 10, 128(1)
  011d3f8  extsh 7, 7
  011d3fc  li 5, 0
  011d400  li 6, 0
  011d404  li 8, 0
  011d408  ori 10, 31, 0
  011d40c  bl 0x506444
  011d410  nop
  011d414  addic 3, 27, 44
  011d418  bl 0x4fff60
  011d41c  nop
  011d420  cmpwi 3, 0
  011d424  bt 2, 0x11d584
  011d428  lbz 3, 34(27)
  011d42c  extsb 3, 3
  011d430  cmpwi 3, -1
  011d434  bt 2, 0x11d584
  011d438  lhz 4, 32(27)
  011d43c  cmpwi 4, 0
  011d440  bf 2, 0x11d584
  011d444  lhz 4, 68(27)
  011d448  extsh 4, 4
  011d44c  cmpw 4, 3
  011d450  bt 2, 0x11d57c
  011d454  lbz 4, 35(27)
  011d458  extsb 4, 4
  011d45c  cmpwi 4, -1
  011d460  bt 2, 0x11d520
  011d464  lwz 7, 120(27)
  011d468  lhz 5, 72(27)
  011d46c  cmpwi 7, 0
  011d470  lhz 6, 70(27)
  011d474  bf 2, 0x11d584
  011d478  ori 7, 4, 0
  011d47c  li 4, -1
  011d480  sth 3, 124(27)
  011d484  li 8, 1
  011d488  sth 6, 126(27)
  011d48c  lis 10, 0
  011d490  li 11, 10
  011d494  ori 10, 10, 48000
  011d498  stw 4, 120(27)
  011d49c  lis 9, 151
  011d4a0  sth 5, 128(27)
  011d4a4  sth 8, 130(27)
  011d4a8  lis 4, 101
  011d4ac  stw 11, 140(27)
  011d4b0  addic 31, 1, 464
  011d4b4  stw 10, 144(27)
  011d4b8  addic 4, 4, 12300
  011d4bc  sth 8, 136(27)
  011d4c0  ori 3, 31, 0
  011d4c4  lwz 5, -25488(9)
  011d4c8  ori 6, 7, 0
  011d4cc  extsw 5, 5
  011d4d0  bl 0x5cd2a8
  011d4d4  nop
  011d4d8  lis 4, 112
  011d4dc  li 6, 8
  011d4e0  lhz 7, 126(27)
  011d4e4  addic 8, 4, 28112
  011d4e8  addic 9, 27, 120
  011d4ec  ori 3, 31, 0
  011d4f0  std 6, 112(1)
  011d4f4  std 8, 120(1)
  011d4f8  li 4, 0
  011d4fc  std 9, 128(1)
  011d500  li 5, 0
  011d504  extsh 7, 7
  011d508  li 6, 0
  011d50c  li 8, 0
  011d510  li 9, 1
  011d514  li 10, 0
  011d518  bl 0x506444
  011d51c  nop
  011d520  lis 3, 18
  011d524  vspltisw 2, -1
  011d528  lis 4, 114
  011d52c  addi 3, 3, -11804
  011d530  li 5, -3056
  011d534  vslw 2, 2, 2
  011d538  <unknown>
  011d53c  <unknown>
  011d540  vspltw 3, 3, 0
  011d544  li 4, 4
  011d548  vmaddfp 2, 4, 3, 2
  011d54c  vspltisw 3, -1
  011d550  <unknown>
  011d554  li 3, 44
  011d558  vspltw 4, 4, 0
  011d55c  vslw 3, 3, 3
  011d560  vctsxs 2, 2, 0
  011d564  vcfsx 2, 2, 0
  011d568  vmaddfp 2, 2, 4, 3
  011d56c  vctsxs 2, 2, 0
  011d570  vspltw 2, 2, 0
  011d574  stvewx 2, 3, 27
  011d578  b 0x11d584
  011d57c  li 3, -1
  011d580  stb 3, 34(27)
  011d584  lwz 3, 28(27)
  011d588  cmpwi 3, 0
  011d58c  bt 0, 0x11d5d4
  011d590  lwz 4, 92(27)
  011d594  cmpwi 4, 0
  011d598  bt 2, 0x11d5bc
  011d59c  lhz 3, 102(27)
  011d5a0  cmpwi 1, 3, 7
  011d5a4  cmpwi 3, 6
  011d5a8  cror 2, 2, 6
  011d5ac  bt 2, 0x11d5d4
  011d5b0  li 3, 5
  011d5b4  sth 3, 102(27)
  011d5b8  b 0x11d5d4
  011d5bc  extsw 3, 3
  011d5c0  li 4, 0
  011d5c4  li 5, 1024
  011d5c8  bl 0x11c1e8
  011d5cc  li 3, -1
  011d5d0  stw 3, 28(27)
  011d5d4  lhz 4, 74(27)
  011d5d8  cmpwi 4, 9
  011d5dc  bt 2, 0x11d868
  011d5e0  lwz 5, 64(27)
  011d5e4  cmpwi 5, -1
  011d5e8  bt 2, 0x11d868
  011d5ec  lhz 3, 76(27)
  011d5f0  rlwinm 3, 3, 0, 16, 16
  011d5f4  cmpwi 3, 0
  011d5f8  bf 2, 0x11d868
  011d5fc  rlwinm 3, 4, 0, 16, 16
  011d600  cmpwi 3, 0
  011d604  bf 2, 0x11d868
  011d608  lhz 3, 132(27)
  011d60c  rlwinm 3, 3, 0, 16, 16
  011d610  cmpwi 3, 0
  011d614  bf 2, 0x11d868
  011d618  lhz 6, 130(27)
  011d61c  rlwinm 3, 6, 0, 16, 16
  011d620  cmpwi 3, 0
  011d624  bf 2, 0x11d868
  011d628  lhz 3, 32(27)
  011d62c  extsh 3, 3
  011d630  cmpwi 3, 3
  011d634  cmpwi 1, 3, 1
  011d638  cmpwi 6, 3, 2
  011d63c  cmpwi 7, 3, 4
  011d640  bt 1, 0x11d650
  011d644  bf 5, 0x11d868
  011d648  bf 25, 0x11d660
  011d64c  b 0x11d710
  011d650  bf 29, 0x11d7f4
  011d654  cmpwi 3, 5
  011d658  bf 1, 0x11d84c
  011d65c  b 0x11d868
  011d660  lhz 3, 70(27)
  011d664  lwz 7, 36(27)
  011d668  lwz 8, 144(27)
  011d66c  extsh 3, 3
  011d670  lwz 9, 40(27)
  011d674  subc 7, 7, 8
  011d678  subc 7, 9, 7
  011d67c  mullw 3, 3, 7
  011d680  divw 3, 3, 9
  011d684  extsw 3, 3
  011d688  cmpwi 3, 0
  011d68c  bf 1, 0x11d6b8
  011d690  cmpwi 6, 4
  011d694  bf 2, 0x11d6a4
  011d698  lhz 6, 136(27)
  011d69c  cmpwi 6, 0
  011d6a0  bf 2, 0x11d6b0
  011d6a4  lwz 6, 120(27)
  011d6a8  cmpwi 6, 0
  011d6ac  bt 2, 0x11d6b8
  011d6b0  cmpwi 5, 0
  011d6b4  bf 2, 0x11d6cc
  011d6b8  li 3, 3
  011d6bc  li 4, 5
  011d6c0  sth 3, 32(27)
  011d6c4  sth 4, 74(27)
  011d6c8  b 0x11d868
  011d6cc  cmpwi 4, 9
  011d6d0  bt 2, 0x11d868
  011d6d4  ori 8, 3, 0
  011d6d8  li 3, -1
  011d6dc  lis 9, 112
  011d6e0  li 6, 0
  011d6e4  addic 9, 9, 28136
  011d6e8  stw 3, 64(27)
  011d6ec  li 7, 0
  011d6f0  ori 3, 5, 0
  011d6f4  ori 5, 8, 0
  011d6f8  addic 10, 27, 64
  011d6fc  li 4, 12
  011d700  li 8, 0
  011d704  bl 0x5063b0
  011d708  nop
  011d70c  b 0x11d868
  011d710  cmpwi 4, 0
  011d714  bf 2, 0x11d868
  011d718  lhz 3, 136(27)
  011d71c  cmpwi 3, 0
  011d720  bf 2, 0x11d730
  011d724  lwz 3, 120(27)
  011d728  cmpwi 3, 0
  011d72c  bf 2, 0x11d868
  011d730  lbz 3, 34(27)
  011d734  cmpwi 5, 0
  011d738  extsb 3, 3
  011d73c  bf 2, 0x11d7e0
  011d740  ori 6, 3, 0
  011d744  li 3, -1
  011d748  li 4, 1
  011d74c  lis 8, 0
  011d750  li 9, 10
  011d754  stw 3, 64(27)
  011d758  ori 8, 8, 48000
  011d75c  sth 4, 74(27)
  011d760  li 5, 0
  011d764  sth 6, 68(27)
  011d768  lis 7, 151
  011d76c  stw 9, 84(27)
  011d770  lis 4, 101
  011d774  stw 8, 88(27)
  011d778  sth 5, 80(27)
  011d77c  addic 31, 1, 208
  011d780  addic 4, 4, 12300
  011d784  lwz 5, -25488(7)
  011d788  ori 3, 31, 0
  011d78c  extsw 5, 5
  011d790  bl 0x5cd2a8
  011d794  nop
  011d798  lis 4, 112
  011d79c  lhz 7, 70(27)
  011d7a0  li 6, 12
  011d7a4  addic 8, 4, 28104
  011d7a8  addic 9, 27, 64
  011d7ac  ori 3, 31, 0
  011d7b0  std 6, 112(1)
  011d7b4  li 4, 0
  011d7b8  std 8, 120(1)
  011d7bc  li 5, 0
  011d7c0  std 9, 128(1)
  011d7c4  extsh 7, 7
  011d7c8  li 6, 0
  011d7cc  li 8, 0
  011d7d0  li 9, 1
  011d7d4  li 10, 0
  011d7d8  bl 0x506444
  011d7dc  nop
  011d7e0  li 3, -1
  011d7e4  li 4, 4
  011d7e8  stb 3, 34(27)
  011d7ec  sth 4, 32(27)
  011d7f0  b 0x11d868
  011d7f4  cmpwi 4, 3
  011d7f8  bf 2, 0x11d868
  011d7fc  lwz 3, 144(27)
  011d800  lwz 4, 40(27)
  011d804  cmpw 3, 4
  011d808  bt 0, 0x11d82c
  011d80c  cmpwi 6, 4
  011d810  bf 2, 0x11d82c
  011d814  lhz 3, 136(27)
  011d818  cmpwi 3, 0
  011d81c  bf 2, 0x11d868
  011d820  lwz 3, 120(27)
  011d824  cmpwi 3, 0
  011d828  bf 2, 0x11d868
  011d82c  ori 3, 5, 0
  011d830  bl 0x505cfc
  011d834  nop
  011d838  li 3, 8
  011d83c  li 4, 5
  011d840  sth 3, 74(27)
  011d844  sth 4, 32(27)
  011d848  b 0x11d868
  011d84c  cmpwi 6, 4
  011d850  bf 2, 0x11d860
  011d854  lhz 3, 136(27)
  011d858  cmpwi 3, 0
  011d85c  bf 2, 0x11d868
  011d860  li 3, 0
  011d864  sth 3, 32(27)
  011d868  addic 3, 27, 64
  011d86c  bl 0x11cec8
  011d870  addic 3, 27, 120
  011d874  bl 0x11cec8
  011d878  addic 3, 27, 92
  011d87c  bl 0x11cec8
  011d880  lbz 3, 10(27)
  011d884  cmpwi 3, 0
  011d888  bt 2, 0x11d8b0
  011d88c  li 3, 1
  011d890  bl 0x5066bc
  011d894  nop
  011d898  cmpwi 3, 0
  011d89c  bf 2, 0x11d9bc
  011d8a0  li 3, 0
  011d8a4  sth 3, 8(27)
  011d8a8  stb 3, 10(27)
  011d8ac  b 0x11d9bc
  011d8b0  lhz 3, 8(27)
  011d8b4  cmpwi 3, 2
  011d8b8  bf 2, 0x11d9bc
  011d8bc  li 3, 0
  011d8c0  lwz 29, 16(27)
  011d8c4  cmpwi 29, 0
  011d8c8  sth 3, 8(27)
  011d8cc  lwz 31, 20(27)
  011d8d0  lwz 30, 12(27)
  011d8d4  bt 2, 0x11d9a8
  011d8d8  addic 28, 1, 144
  011d8dc  lis 4, 101
  011d8e0  ori 3, 28, 0
  011d8e4  addic 4, 4, 12660
  011d8e8  bl 0x5cd2a8
  011d8ec  nop
  011d8f0  ori 3, 28, 0
  011d8f4  li 4, 0
  011d8f8  bl 0x502dcc
  011d8fc  nop
  011d900  ori 28, 3, 0
  011d904  cmpwi 28, 0
  011d908  bt 0, 0x11d9a8
  011d90c  li 4, 0
  011d910  ori 3, 28, 0
  011d914  li 5, 5
  011d918  bl 0x502de0
  011d91c  nop
  011d920  addc 4, 29, 30
  011d924  addic 4, 4, -1
  011d928  sldi 4, 4, 11
  011d92c  cmpw 3, 4
  011d930  bt 1, 0x11d944
  011d934  ori 3, 28, 0
  011d938  bl 0x502ddc
  011d93c  nop
  011d940  b 0x11d9a8
  011d944  slwi 4, 30, 11
  011d948  li 5, 6
  011d94c  ori 3, 28, 0
  011d950  extsw 4, 4
  011d954  bl 0x502de0
  011d958  nop
  011d95c  slwi 5, 29, 11
  011d960  ori 4, 31, 0
  011d964  ori 3, 28, 0
  011d968  extsw 5, 5
  011d96c  bl 0x502dd4
  011d970  nop
  011d974  addic 4, 29, -1
  011d978  sldi 4, 4, 11
  011d97c  cmpw 3, 4
  011d980  bt 1, 0x11d994
  011d984  ori 3, 28, 0
  011d988  bl 0x502ddc
  011d98c  nop
  011d990  b 0x11d9a8
  011d994  ori 3, 28, 0
  011d998  bl 0x502ddc
  011d99c  nop
  011d9a0  li 3, 1
  011d9a4  sth 3, 8(27)
  011d9a8  lhz 3, 8(27)
  011d9ac  cmpwi 3, 0
  011d9b0  bf 2, 0x11d9bc
  011d9b4  li 3, 2
  011d9b8  sth 3, 8(27)
  011d9bc  ld 0, 1296(1)
  011d9c0  mtlr 0
  011d9c4  ld 27, 1240(1)
  011d9c8  ld 28, 1248(1)
  011d9cc  ld 29, 1256(1)
  011d9d0  ld 30, 1264(1)
  011d9d4  ld 31, 1272(1)
  011d9d8  addi 1, 1, 1280
  011d9dc  blr

music_StopLoad:   # 0x11d9e0, 0x48 bytes
  011d9e0  stdu 1, -128(1)
  011d9e4  mflr 0
  011d9e8  std 0, 144(1)
  011d9ec  std 31, 120(1)
  011d9f0  lis 31, 150
  011d9f4  addic 31, 31, 14024
  011d9f8  lhz 3, 8(31)
  011d9fc  cmpwi 3, 0
  011da00  bt 2, 0x11da14
  011da04  bl 0x506660
  011da08  nop
  011da0c  li 3, 1
  011da10  stb 3, 10(31)
  011da14  ld 0, 144(1)
  011da18  mtlr 0
  011da1c  ld 31, 120(1)
  011da20  addi 1, 1, 128
  011da24  blr

music_Reset:   # 0x11da28, 0x2c bytes
  011da28  lis 4, 150
  011da2c  lis 6, 150
  011da30  li 5, 0
  011da34  lis 7, 150
  011da38  addic 6, 6, 14024
  011da3c  li 3, 1
  011da40  stw 5, 14016(4)
  011da44  stw 5, 14020(7)
  011da48  stb 3, 11(6)
  011da4c  sth 5, 8(6)
  011da50  blr

music_LoadFromHostWad_v2:   # 0x11da54, 0x178 bytes
  011da54  stdu 1, -224(1)
  011da58  mflr 0
  011da5c  std 0, 240(1)
  011da60  std 27, 184(1)
  011da64  std 31, 216(1)
  011da68  lis 31, 150
  011da6c  std 28, 192(1)
  011da70  ori 27, 3, 0
  011da74  addic 31, 31, 14024
  011da78  std 30, 208(1)
  011da7c  ori 28, 4, 0
  011da80  ori 30, 5, 0
  011da84  lhz 3, 8(31)
  011da88  std 29, 200(1)
  011da8c  std 26, 176(1)
  011da90  cmpwi 3, 0
  011da94  bf 2, 0x11daa0
  011da98  cmpwi 30, 0
  011da9c  bf 2, 0x11daa8
  011daa0  li 3, 0
  011daa4  b 0x11dba4
  011daa8  addic 29, 1, 112
  011daac  lis 4, 101
  011dab0  ori 3, 29, 0
  011dab4  addic 4, 4, 12660
  011dab8  bl 0x5cd2a8
  011dabc  nop
  011dac0  ori 3, 29, 0
  011dac4  li 4, 0
  011dac8  bl 0x502dcc
  011dacc  nop
  011dad0  ori 29, 3, 0
  011dad4  cmpwi 29, 0
  011dad8  bf 0, 0x11dae4
  011dadc  li 3, 0
  011dae0  b 0x11dba4
  011dae4  li 4, 0
  011dae8  ori 3, 29, 0
  011daec  li 5, 5
  011daf0  bl 0x502de0
  011daf4  nop
  011daf8  addc 4, 30, 28
  011dafc  addic 4, 4, -1
  011db00  sldi 4, 4, 11
  011db04  cmpw 3, 4
  011db08  bt 1, 0x11db20
  011db0c  ori 3, 29, 0
  011db10  bl 0x502ddc
  011db14  nop
  011db18  li 3, 0
  011db1c  b 0x11dba4
  011db20  ori 26, 30, 0
  011db24  slwi 4, 28, 11
  011db28  ori 3, 29, 0
  011db2c  extsw 4, 4
  011db30  li 5, 6
  011db34  bl 0x502de0
  011db38  nop
  011db3c  slwi 30, 26, 11
  011db40  ori 4, 27, 0
  011db44  extsw 30, 30
  011db48  ori 3, 29, 0
  011db4c  ori 5, 30, 0
  011db50  bl 0x502dd4
  011db54  nop
  011db58  addic 4, 26, -1
  011db5c  sldi 4, 4, 11
  011db60  cmpw 3, 4
  011db64  bt 1, 0x11db7c
  011db68  ori 3, 29, 0
  011db6c  bl 0x502ddc
  011db70  nop
  011db74  li 3, 0
  011db78  b 0x11dba4
  011db7c  ori 3, 29, 0
  011db80  bl 0x502ddc
  011db84  nop
  011db88  li 4, 1
  011db8c  ori 3, 30, 0
  011db90  cmpwi 3, 0
  011db94  sth 4, 8(31)
  011db98  bt 2, 0x11dba4
  011db9c  li 4, 0
  011dba0  sth 4, 8(31)
  011dba4  ld 0, 240(1)
  011dba8  mtlr 0
  011dbac  ld 26, 176(1)
  011dbb0  ld 27, 184(1)
  011dbb4  ld 28, 192(1)
  011dbb8  ld 29, 200(1)
  011dbbc  ld 30, 208(1)
  011dbc0  ld 31, 216(1)
  011dbc4  addi 1, 1, 224
  011dbc8  blr

LoadMusic2:   # 0x11dbcc, 0x48 bytes
  011dbcc  stdu 1, -112(1)
  011dbd0  mflr 0
  011dbd4  std 0, 128(1)
  011dbd8  bl 0x11d1f0
  011dbdc  bl 0x505f4c
  011dbe0  nop
  011dbe4  bl 0x505d20
  011dbe8  nop
  011dbec  bl 0x505f50
  011dbf0  nop
  011dbf4  lis 4, 150
  011dbf8  li 3, 0
  011dbfc  addic 4, 4, 14024
  011dc00  sth 3, 8(4)
  011dc04  ld 0, 128(1)
  011dc08  mtlr 0
  011dc0c  addi 1, 1, 112
  011dc10  blr

music_CdCB:   # 0x11dc14, 0x5c bytes
  011dc14  stdu 1, -128(1)
  011dc18  mflr 0
  011dc1c  std 0, 144(1)
  011dc20  cmpwi 3, 10
  011dc24  std 31, 120(1)
  011dc28  cmpwi 1, 3, 5
  011dc2c  bt 1, 0x11dc5c
  011dc30  bf 6, 0x11dc5c
  011dc34  lis 31, 150
  011dc38  li 3, 0
  011dc3c  addic 31, 31, 14024
  011dc40  sth 3, 8(31)
  011dc44  bl 0x5066ac
  011dc48  nop
  011dc4c  cmpwi 3, 4
  011dc50  bt 2, 0x11dc5c
  011dc54  li 3, 2
  011dc58  sth 3, 8(31)
  011dc5c  ld 0, 144(1)
  011dc60  mtlr 0
  011dc64  ld 31, 120(1)
  011dc68  addi 1, 1, 128
  011dc6c  blr

music_FreshenCB:   # 0x11dc70, 0x28 bytes
  011dc70  cmpwi 4, 0
  011dc74  bt 2, 0x11dc94
  011dc78  cmpwi 3, 0
  011dc7c  bt 2, 0x11dc94
  011dc80  lhz 3, 10(4)
  011dc84  cmpwi 3, 2
  011dc88  bf 2, 0x11dc94
  011dc8c  li 3, 3
  011dc90  sth 3, 10(4)
  011dc94  blr

music_SpeechPreseekCB:   # 0x11dc98, 0x6c bytes
  011dc98  stdu 1, -112(1)
  011dc9c  mflr 0
  011dca0  std 0, 128(1)
  011dca4  cmpwi 4, 0
  011dca8  bt 2, 0x11dcf4
  011dcac  cmpwi 3, 0
  011dcb0  stw 3, 0(4)
  011dcb4  bt 2, 0x11dcd0
  011dcb8  lhz 3, 10(4)
  011dcbc  cmpwi 3, 1
  011dcc0  bf 2, 0x11dcf4
  011dcc4  li 3, 2
  011dcc8  sth 3, 10(4)
  011dccc  b 0x11dcf4
  011dcd0  lis 3, 150
  011dcd4  addic 3, 3, 14024
  011dcd8  lhz 4, 96(3)
  011dcdc  lhz 5, 100(3)
  011dce0  lhz 6, 98(3)
  011dce4  extsh 3, 4
  011dce8  extsh 4, 5
  011dcec  extsh 5, 6
  011dcf0  bl 0x11c1e8
  011dcf4  ld 0, 128(1)
  011dcf8  mtlr 0
  011dcfc  addi 1, 1, 112
  011dd00  blr

music_PreseekCB:   # 0x11dd04, 0x114 bytes
  011dd04  stdu 1, -416(1)
  011dd08  mflr 0
  011dd0c  std 0, 432(1)
  011dd10  std 31, 408(1)
  011dd14  std 30, 400(1)
  011dd18  cmpwi 4, 0
  011dd1c  bt 2, 0x11de00
  011dd20  cmpwi 3, 0
  011dd24  stw 3, 0(4)
  011dd28  bt 2, 0x11dd44
  011dd2c  lhz 3, 10(4)
  011dd30  cmpwi 3, 1
  011dd34  bf 2, 0x11de00
  011dd38  li 3, 2
  011dd3c  sth 3, 10(4)
  011dd40  b 0x11de00
  011dd44  lis 31, 150
  011dd48  addic 31, 31, 14024
  011dd4c  lhz 3, 68(31)
  011dd50  lwz 5, 64(31)
  011dd54  extsh 4, 3
  011dd58  cmpwi 5, 0
  011dd5c  bf 2, 0x11de00
  011dd60  ori 6, 4, 0
  011dd64  li 4, -1
  011dd68  li 5, 1
  011dd6c  li 7, 0
  011dd70  lis 8, 0
  011dd74  stw 4, 64(31)
  011dd78  lis 9, 151
  011dd7c  li 4, 10
  011dd80  sth 5, 74(31)
  011dd84  ori 5, 8, 48000
  011dd88  sth 3, 68(31)
  011dd8c  sth 7, 80(31)
  011dd90  addic 30, 1, 144
  011dd94  lis 7, 101
  011dd98  stw 4, 84(31)
  011dd9c  stw 5, 88(31)
  011dda0  addic 4, 7, 12300
  011dda4  lwz 5, -25488(9)
  011dda8  ori 3, 30, 0
  011ddac  extsw 5, 5
  011ddb0  bl 0x5cd2a8
  011ddb4  nop
  011ddb8  lis 4, 112
  011ddbc  li 6, 12
  011ddc0  lhz 7, 70(31)
  011ddc4  addic 9, 4, 28104
  011ddc8  addic 10, 31, 64
  011ddcc  li 8, 0
  011ddd0  std 6, 112(1)
  011ddd4  std 9, 120(1)
  011ddd8  ori 3, 30, 0
  011dddc  std 10, 128(1)
  011dde0  li 4, 0
  011dde4  li 5, 0
  011dde8  extsh 7, 7
  011ddec  li 6, 0
  011ddf0  li 9, 1
  011ddf4  li 10, 0
  011ddf8  bl 0x506444
  011ddfc  nop
  011de00  ld 0, 432(1)
  011de04  mtlr 0
  011de08  ld 30, 400(1)
  011de0c  ld 31, 408(1)
  011de10  addi 1, 1, 416
  011de14  blr

music_StartCB:   # 0x11de18, 0x54 bytes
  011de18  cmpwi 4, 0
  011de1c  bt 2, 0x11de68
  011de20  cmpwi 3, 0
  011de24  stw 3, 0(4)
  011de28  bt 2, 0x11de60
  011de2c  lhz 3, 10(4)
  011de30  cmpwi 3, 1
  011de34  bf 2, 0x11de68
  011de38  li 3, 4
  011de3c  lhz 5, 16(4)
  011de40  cmpwi 5, 0
  011de44  sth 3, 10(4)
  011de48  bt 2, 0x11de68
  011de4c  lis 3, 150
  011de50  li 4, 1
  011de54  addic 3, 3, 14024
  011de58  sth 4, 32(3)
  011de5c  b 0x11de68
  011de60  li 3, 0
  011de64  sth 3, 10(4)
  011de68  blr

music_StartBodyCB:   # 0x11de6c, 0x60 bytes
  011de6c  cmpwi 4, 0
  011de70  bt 2, 0x11dec8
  011de74  rlwinm 5, 3, 0, 0, 0
  011de78  cmpwi 5, 0
  011de7c  bt 2, 0x11de84
  011de80  stw 3, 0(4)
  011de84  cmpwi 3, 0
  011de88  bt 2, 0x11dec0
  011de8c  lhz 3, 10(4)
  011de90  cmpwi 3, 9
  011de94  bf 2, 0x11dec8
  011de98  li 3, 4
  011de9c  lhz 5, 16(4)
  011dea0  cmpwi 5, 0
  011dea4  sth 3, 10(4)
  011dea8  bt 2, 0x11dec8
  011deac  lis 3, 150
  011deb0  li 4, 1
  011deb4  addic 3, 3, 14024
  011deb8  sth 4, 32(3)
  011debc  b 0x11dec8
  011dec0  li 3, 0
  011dec4  sth 3, 10(4)
  011dec8  blr

music_PreseekTrackCB:   # 0x11decc, 0x38 bytes
  011decc  cmpwi 4, 0
  011ded0  bt 2, 0x11df00
  011ded4  cmpwi 3, 0
  011ded8  stw 3, 0(4)
  011dedc  bt 2, 0x11def8
  011dee0  lhz 3, 10(4)
  011dee4  cmpwi 3, 1
  011dee8  bf 2, 0x11df00
  011deec  li 3, 8
  011def0  sth 3, 10(4)
  011def4  b 0x11df00
  011def8  li 3, 0
  011defc  sth 3, 10(4)
  011df00  blr

music_StopCB:   # 0x11df04, 0x58 bytes
  011df04  stdu 1, -112(1)
  011df08  mflr 0
  011df0c  std 0, 128(1)
  011df10  cmpwi 4, 0
  011df14  bt 2, 0x11df4c
  011df18  lwz 5, 0(4)
  011df1c  cmpwi 5, -1
  011df20  bt 2, 0x11df38
  011df24  lis 3, 101
  011df28  addic 3, 3, 12684
  011df2c  bl 0x5cd098
  011df30  nop
  011df34  b 0x11df4c
  011df38  cmpwi 3, 0
  011df3c  stw 3, 0(4)
  011df40  bf 2, 0x11df4c
  011df44  li 3, 7
  011df48  sth 3, 10(4)
  011df4c  ld 0, 128(1)
  011df50  mtlr 0
  011df54  addi 1, 1, 112
  011df58  blr

music_QueueLengthCB:   # 0x11df5c, 0x10 bytes
  011df5c  cmpwi 4, 0
  011df60  bt 2, 0x11df68
  011df64  stw 3, 20(4)
  011df68  blr

music_TimeRemainingCB:   # 0x11df6c, 0x58 bytes
  011df6c  cmpwi 4, 0
  011df70  bt 2, 0x11dfc0
  011df74  lhz 5, 16(4)
  011df78  cmpwi 1, 3, 0
  011df7c  stw 3, 24(4)
  011df80  cmpwi 5, 0
  011df84  bt 2, 0x11dfc0
  011df88  lis 3, 150
  011df8c  addic 3, 3, 14024
  011df90  lhz 5, 32(3)
  011df94  cmpwi 5, 1
  011df98  bf 2, 0x11dfc0
  011df9c  bt 6, 0x11dfc0
  011dfa0  li 5, 2
  011dfa4  sth 5, 32(3)
  011dfa8  lwz 5, 24(4)
  011dfac  stw 5, 36(3)
  011dfb0  lwz 4, 24(4)
  011dfb4  srawi 4, 4, 2
  011dfb8  addze 4, 4
  011dfbc  stw 4, 40(3)
  011dfc0  blr
