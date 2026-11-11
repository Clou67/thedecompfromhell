# sdk/libfios/fios_op.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios2op17timeoutToDeadlineEx:   # 0x51b750, 0x34 bytes
  051b750  cmpdi 3, 0
  051b754  mr 9, 3
  051b758  li 3, 0
  051b75c  bclr 6, 1
  051b760  mftb 0, 268
  051b764  cmpwi 7, 0, 0
  051b768  bt- 30, 0x51b760
  051b76c  add 3, 9, 0
  051b770  cmpd 7, 0, 3
  051b774  bclr 15, 28
  051b778  li 3, -1
  051b77c  clrldi 3, 3, 1
  051b780  blr

_ZN4cell4fios2op19addOrRemoveWaitDataEPKPS1_jPNS0_10opWaitDataEb:   # 0x51b784, 0x140 bytes
  051b784  mfcr 12
  051b788  cmpwi 7, 4, 0
  051b78c  mr 10, 5
  051b790  stw 12, 8(1)
  051b794  bt 30, 0x51b80c
  051b798  cmpwi 1, 5, 0
  051b79c  clrlwi 0, 6, 24
  051b7a0  li 8, 0
  051b7a4  li 7, 0
  051b7a8  cmpwi 0, 0
  051b7ac  mcrf 4, 1
  051b7b0  clrldi 9, 3, 32
  051b7b4  lwz 9, 0(9)
  051b7b8  cmpwi 7, 9, 0
  051b7bc  bt- 30, 0x51b7fc
  051b7c0  bt 2, 0x51b830
  051b7c4  clrldi 11, 9, 32
  051b7c8  lwz 0, 152(11)
  051b7cc  isync
  051b7d0  cmpwi 7, 0, 0
  051b7d4  bt 30, 0x51b898
  051b7d8  lwz 9, 4(5)
  051b7dc  addi 9, 9, 1
  051b7e0  stw 9, 4(5)
  051b7e4  lwz 0, 212(11)
  051b7e8  cmpwi 7, 0, 0
  051b7ec  bf 30, 0x51b818
  051b7f0  lwz 0, 68(11)
  051b7f4  cmpwi 7, 0, 0
  051b7f8  bf 30, 0x51b818
  051b7fc  addi 8, 8, 1
  051b800  addi 3, 3, 4
  051b804  cmpw 7, 4, 8
  051b808  bf 30, 0x51b7b0
  051b80c  lwz 12, 8(1)
  051b810  mtocrf 8, 12
  051b814  blr
  051b818  addi 8, 8, 1
  051b81c  stw 0, 12(5)
  051b820  cmpw 7, 4, 8
  051b824  addi 3, 3, 4
  051b828  bf 30, 0x51b7b0
  051b82c  b 0x51b80c
  051b830  bt- 6, 0x51b7fc
  051b834  addi 0, 9, 216
  051b838  clrldi 9, 0, 32
  051b83c  lwz 9, 0(9)
  051b840  cmpw 7, 10, 9
  051b844  bt 30, 0x51b870
  051b848  cmpwi 7, 9, 0
  051b84c  bf 30, 0x51b858
  051b850  b 0x51b7fc
  051b854  bt 26, 0x51b7fc
  051b858  mr 0, 9
  051b85c  clrldi 9, 9, 32
  051b860  lwz 9, 0(9)
  051b864  cmpw 7, 10, 9
  051b868  cmpwi 6, 9, 0
  051b86c  bf 30, 0x51b854
  051b870  bt 6, 0x51b7fc
  051b874  clrldi 9, 0, 32
  051b878  lwz 0, 0(5)
  051b87c  addi 8, 8, 1
  051b880  addi 3, 3, 4
  051b884  cmpw 7, 4, 8
  051b888  stw 0, 0(9)
  051b88c  stw 7, 0(5)
  051b890  bf 30, 0x51b7b0
  051b894  b 0x51b80c
  051b898  bt- 18, 0x51b7fc
  051b89c  addi 9, 9, 216
  051b8a0  addi 8, 8, 1
  051b8a4  clrldi 9, 9, 32
  051b8a8  cmpw 7, 4, 8
  051b8ac  addi 3, 3, 4
  051b8b0  lwz 0, 0(9)
  051b8b4  stw 0, 0(5)
  051b8b8  stw 10, 0(9)
  051b8bc  bf 30, 0x51b7b0
  051b8c0  b 0x51b80c

_ZN4cell4fios2op16terminateStaticsEv:   # 0x51b8c4, 0x180 bytes
  051b8c4  stdu 1, -160(1)
  051b8c8  mflr 0
  051b8cc  std 30, 144(1)
  051b8d0  lwz 30, -30776(2)
  051b8d4  std 27, 120(1)
  051b8d8  std 28, 128(1)
  051b8dc  std 31, 152(1)
  051b8e0  std 29, 136(1)
  051b8e4  std 0, 176(1)
  051b8e8  lwz 28, -30784(2)
  051b8ec  mr 31, 30
  051b8f0  lwz 27, -30780(2)
  051b8f4  lwz 29, 4(28)
  051b8f8  isync
  051b8fc  cmpwi 7, 29, 0
  051b900  bt 30, 0x51b984
  051b904  li 9, 0
  051b908  lwarx 0, 0, 31
  051b90c  cmpw 7, 29, 0
  051b910  bf 30, 0x51b8f4
  051b914  stwcx. 9, 0, 30
  051b918  mfocrf 0, 128
  051b91c  rlwinm 0, 0, 0, 2, 2
  051b920  cmpwi 7, 0, 0
  051b924  bt 30, 0x51b908
  051b928  clrldi 29, 29, 32
  051b92c  mr 3, 29
  051b930  bl 0x52d0e8
  051b934  nop
  051b938  lwz 9, 8(27)
  051b93c  mr 3, 9
  051b940  lis 5, 4148
  051b944  mr 4, 29
  051b948  lwz 11, 0(9)
  051b94c  ori 5, 5, 258
  051b950  li 6, 0
  051b954  li 7, 0
  051b958  lwz 9, 4(11)
  051b95c  lwz 0, 0(9)
  051b960  std 2, 40(1)
  051b964  mtctr 0
  051b968  lwz 2, 4(9)
  051b96c  bctrl
  051b970  ld 2, 40(1)
  051b974  lwz 29, 4(28)
  051b978  isync
  051b97c  cmpwi 7, 29, 0
  051b980  bf 30, 0x51b904
  051b984  lwz 30, -30784(2)
  051b988  lwz 27, -30780(2)
  051b98c  mr 31, 30
  051b990  lwz 29, 0(28)
  051b994  isync
  051b998  cmpwi 7, 29, 0
  051b99c  bt 30, 0x51ba20
  051b9a0  li 9, 0
  051b9a4  lwarx 0, 0, 31
  051b9a8  cmpw 7, 29, 0
  051b9ac  bf 30, 0x51b990
  051b9b0  stwcx. 9, 0, 30
  051b9b4  mfocrf 0, 128
  051b9b8  rlwinm 0, 0, 0, 2, 2
  051b9bc  cmpwi 7, 0, 0
  051b9c0  bt 30, 0x51b9a4
  051b9c4  clrldi 29, 29, 32
  051b9c8  mr 3, 29
  051b9cc  bl 0x52df14
  051b9d0  nop
  051b9d4  lwz 9, 8(27)
  051b9d8  mr 3, 9
  051b9dc  lis 5, 4147
  051b9e0  mr 4, 29
  051b9e4  lwz 11, 0(9)
  051b9e8  ori 5, 5, 259
  051b9ec  li 6, 0
  051b9f0  li 7, 0
  051b9f4  lwz 9, 4(11)
  051b9f8  lwz 0, 0(9)
  051b9fc  std 2, 40(1)
  051ba00  mtctr 0
  051ba04  lwz 2, 4(9)
  051ba08  bctrl
  051ba0c  ld 2, 40(1)
  051ba10  lwz 29, 0(28)
  051ba14  isync
  051ba18  cmpwi 7, 29, 0
  051ba1c  bf 30, 0x51b9a0
  051ba20  ld 0, 176(1)
  051ba24  ld 27, 120(1)
  051ba28  ld 28, 128(1)
  051ba2c  mtlr 0
  051ba30  ld 29, 136(1)
  051ba34  ld 30, 144(1)
  051ba38  ld 31, 152(1)
  051ba3c  addi 1, 1, 160
  051ba40  blr

_ZN4cell4fios2op17initializeStaticsEPPNS0_8platform5mutexEPPNS2_4condE:   # 0x51ba44, 0x2bc bytes
  051ba44  stdu 1, -192(1)
  051ba48  mflr 0
  051ba4c  std 23, 120(1)
  051ba50  std 24, 128(1)
  051ba54  std 25, 136(1)
  051ba58  std 26, 144(1)
  051ba5c  std 28, 160(1)
  051ba60  mr 26, 3
  051ba64  lwz 28, -30784(2)
  051ba68  mr 25, 4
  051ba6c  mr 24, 3
  051ba70  mr 23, 4
  051ba74  std 27, 152(1)
  051ba78  std 29, 168(1)
  051ba7c  std 30, 176(1)
  051ba80  std 31, 184(1)
  051ba84  std 0, 208(1)
  051ba88  lwz 30, 0(28)
  051ba8c  isync
  051ba90  cmpwi 7, 30, 0
  051ba94  bf 30, 0x51bbf0
  051ba98  lwz 27, -30780(2)
  051ba9c  lis 5, 4147
  051baa0  li 4, 40
  051baa4  ori 5, 5, 259
  051baa8  li 6, 0
  051baac  li 7, 0
  051bab0  lwz 10, 8(27)
  051bab4  mr 3, 10
  051bab8  lwz 9, 0(10)
  051babc  lwz 11, 0(9)
  051bac0  lwz 0, 0(11)
  051bac4  std 2, 40(1)
  051bac8  mtctr 0
  051bacc  lwz 2, 4(11)
  051bad0  bctrl
  051bad4  ld 2, 40(1)
  051bad8  cmpwi 7, 3, 0
  051badc  mr 29, 3
  051bae0  bt 30, 0x51ba88
  051bae4  clrldi 3, 3, 32
  051bae8  lwz 4, -30772(2)
  051baec  bl 0x52d370
  051baf0  nop
  051baf4  srawi 9, 29, 31
  051baf8  xor 0, 9, 29
  051bafc  sub 0, 9, 0
  051bb00  srwi 8, 0, 31
  051bb04  cmpwi 7, 8, 0
  051bb08  bt- 30, 0x51ba88
  051bb0c  mr 10, 28
  051bb10  mr 11, 28
  051bb14  lwarx 9, 0, 11
  051bb18  cmpwi 7, 9, 0
  051bb1c  bf 30, 0x51bb34
  051bb20  stwcx. 29, 0, 10
  051bb24  mfocrf 0, 128
  051bb28  rlwinm 0, 0, 0, 2, 2
  051bb2c  cmpwi 7, 0, 0
  051bb30  bt 30, 0x51bb14
  051bb34  cmpwi 7, 9, 0
  051bb38  bt+ 30, 0x51ba88
  051bb3c  cmpwi 7, 8, 0
  051bb40  bt 30, 0x51ba88
  051bb44  clrldi 29, 29, 32
  051bb48  mr 3, 29
  051bb4c  bl 0x52df14
  051bb50  nop
  051bb54  lwz 9, 8(27)
  051bb58  mr 3, 9
  051bb5c  lis 5, 4147
  051bb60  mr 4, 29
  051bb64  lwz 11, 0(9)
  051bb68  ori 5, 5, 259
  051bb6c  li 6, 0
  051bb70  li 7, 0
  051bb74  lwz 9, 4(11)
  051bb78  lwz 0, 0(9)
  051bb7c  std 2, 40(1)
  051bb80  mtctr 0
  051bb84  lwz 2, 4(9)
  051bb88  bctrl
  051bb8c  ld 2, 40(1)
  051bb90  b 0x51ba88
  051bb94  cmpwi 7, 9, 0
  051bb98  bt+ 30, 0x51bbf0
  051bb9c  cmpwi 7, 8, 0
  051bba0  bt 30, 0x51bbf0
  051bba4  clrldi 29, 29, 32
  051bba8  mr 3, 29
  051bbac  bl 0x52d0e8
  051bbb0  nop
  051bbb4  lwz 9, 8(27)
  051bbb8  mr 3, 9
  051bbbc  lis 5, 4148
  051bbc0  mr 4, 29
  051bbc4  lwz 11, 0(9)
  051bbc8  ori 5, 5, 258
  051bbcc  li 6, 0
  051bbd0  li 7, 0
  051bbd4  lwz 9, 4(11)
  051bbd8  lwz 0, 0(9)
  051bbdc  std 2, 40(1)
  051bbe0  mtctr 0
  051bbe4  lwz 2, 4(9)
  051bbe8  bctrl
  051bbec  ld 2, 40(1)
  051bbf0  lwz 0, 4(28)
  051bbf4  isync
  051bbf8  cmpwi 7, 0, 0
  051bbfc  bf 30, 0x51bcb4
  051bc00  lwz 27, -30780(2)
  051bc04  lis 5, 4148
  051bc08  li 4, 24
  051bc0c  ori 5, 5, 258
  051bc10  li 6, 0
  051bc14  li 7, 0
  051bc18  lwz 10, 8(27)
  051bc1c  mr 3, 10
  051bc20  lwz 9, 0(10)
  051bc24  lwz 11, 0(9)
  051bc28  lwz 0, 0(11)
  051bc2c  std 2, 40(1)
  051bc30  mtctr 0
  051bc34  lwz 2, 4(11)
  051bc38  bctrl
  051bc3c  ld 2, 40(1)
  051bc40  cmpwi 7, 3, 0
  051bc44  mr 29, 3
  051bc48  bt 30, 0x51bbf0
  051bc4c  clrldi 3, 3, 32
  051bc50  lwz 4, -30772(2)
  051bc54  lwz 5, -30768(2)
  051bc58  clrldi 6, 30, 32
  051bc5c  bl 0x52d19c
  051bc60  nop
  051bc64  srawi 9, 29, 31
  051bc68  xor 0, 9, 29
  051bc6c  sub 0, 9, 0
  051bc70  srwi 8, 0, 31
  051bc74  cmpwi 7, 8, 0
  051bc78  bt- 30, 0x51bbf0
  051bc7c  addi 0, 28, 4
  051bc80  clrldi 11, 0, 32
  051bc84  mr 10, 11
  051bc88  lwarx 9, 0, 10
  051bc8c  cmpwi 7, 9, 0
  051bc90  bf 30, 0x51bb94
  051bc94  stwcx. 29, 0, 11
  051bc98  mfocrf 0, 128
  051bc9c  rlwinm 0, 0, 0, 2, 2
  051bca0  cmpwi 7, 0, 0
  051bca4  bt 30, 0x51bc88
  051bca8  cmpwi 7, 9, 0
  051bcac  bt+ 30, 0x51bbf0
  051bcb0  b 0x51bb9c
  051bcb4  cmpwi 7, 24, 0
  051bcb8  bt 30, 0x51bcc0
  051bcbc  stw 30, 0(26)
  051bcc0  cmpwi 7, 23, 0
  051bcc4  bt 30, 0x51bccc
  051bcc8  stw 0, 0(25)
  051bccc  ld 0, 208(1)
  051bcd0  ld 23, 120(1)
  051bcd4  ld 24, 128(1)
  051bcd8  mtlr 0
  051bcdc  ld 25, 136(1)
  051bce0  ld 26, 144(1)
  051bce4  ld 27, 152(1)
  051bce8  ld 28, 160(1)
  051bcec  ld 29, 168(1)
  051bcf0  ld 30, 176(1)
  051bcf4  ld 31, 184(1)
  051bcf8  addi 1, 1, 192
  051bcfc  blr

FUN_0051bd00:   # 0x51bd00, 0x64 bytes
  051bd00  lis 7, 17993
  051bd04  lis 8, 28514
  051bd08  addi 10, 3, 80
  051bd0c  addi 6, 3, 52
  051bd10  addi 9, 3, 72
  051bd14  li 0, 0
  051bd18  li 11, 0
  051bd1c  ori 7, 7, 20307
  051bd20  ori 8, 8, 27168
  051bd24  stw 0, 48(3)
  051bd28  stw 0, 0(6)
  051bd2c  stw 0, 4(6)
  051bd30  stw 0, 0(9)
  051bd34  stw 0, 4(9)
  051bd38  stw 0, 8(10)
  051bd3c  stw 11, 24(10)
  051bd40  stw 11, 216(3)
  051bd44  stw 7, 220(3)
  051bd48  stw 8, 224(3)
  051bd4c  stw 0, 0(10)
  051bd50  stw 4, 52(3)
  051bd54  stw 0, 4(10)
  051bd58  std 11, 16(10)
  051bd5c  stw 11, 152(3)
  051bd60  blr

_ZN4cell4fios2op5resetEv:   # 0x51bd64, 0x9c bytes
  051bd64  mr 9, 3
  051bd68  mflr 0
  051bd6c  stdu 1, -144(1)
  051bd70  std 29, 120(1)
  051bd74  li 29, 0
  051bd78  std 28, 112(1)
  051bd7c  std 0, 160(1)
  051bd80  stdu 29, 8(9)
  051bd84  mr 28, 3
  051bd88  std 29, 32(9)
  051bd8c  std 29, 8(9)
  051bd90  std 29, 16(9)
  051bd94  std 29, 24(9)
  051bd98  lwsync
  051bd9c  addi 3, 3, 64
  051bda0  li 4, 0
  051bda4  li 5, 88
  051bda8  clrldi 3, 3, 32
  051bdac  stw 29, 48(28)
  051bdb0  stw 29, 60(28)
  051bdb4  bl 0x5d0140
  051bdb8  nop
  051bdbc  lwsync
  051bdc0  ld 0, 160(1)
  051bdc4  stw 29, 216(28)
  051bdc8  stw 29, 152(28)
  051bdcc  mtlr 0
  051bdd0  stw 29, 160(28)
  051bdd4  std 29, 168(28)
  051bdd8  std 29, 176(28)
  051bddc  std 29, 184(28)
  051bde0  stw 29, 192(28)
  051bde4  std 29, 200(28)
  051bde8  stw 29, 208(28)
  051bdec  stw 29, 212(28)
  051bdf0  ld 28, 112(1)
  051bdf4  ld 29, 120(1)
  051bdf8  addi 1, 1, 144
  051bdfc  blr

FUN_0051be00:   # 0x51be00, 0x64 bytes
  051be00  lis 7, 17993
  051be04  lis 8, 28514
  051be08  addi 10, 3, 80
  051be0c  addi 6, 3, 52
  051be10  addi 9, 3, 72
  051be14  li 0, 0
  051be18  li 11, 0
  051be1c  ori 7, 7, 20307
  051be20  ori 8, 8, 27168
  051be24  stw 0, 48(3)
  051be28  stw 0, 0(6)
  051be2c  stw 0, 4(6)
  051be30  stw 0, 0(9)
  051be34  stw 0, 4(9)
  051be38  stw 0, 8(10)
  051be3c  stw 11, 24(10)
  051be40  stw 11, 216(3)
  051be44  stw 7, 220(3)
  051be48  stw 8, 224(3)
  051be4c  stw 0, 0(10)
  051be50  stw 4, 52(3)
  051be54  stw 0, 4(10)
  051be58  std 11, 16(10)
  051be5c  stw 11, 152(3)
  051be60  blr

_ZN4cell4fios2op16waitListDeadlineEjPKPS1_x:   # 0x51be64, 0x1cc bytes
  051be64  cmpwi 7, 4, 0
  051be68  mflr 0
  051be6c  stdu 1, -208(1)
  051be70  std 29, 184(1)
  051be74  std 30, 192(1)
  051be78  std 31, 200(1)
  051be7c  std 25, 152(1)
  051be80  std 26, 160(1)
  051be84  std 27, 168(1)
  051be88  std 28, 176(1)
  051be8c  std 0, 224(1)
  051be90  mr 29, 5
  051be94  mr 31, 4
  051be98  mr 30, 3
  051be9c  bt- 30, 0x51c00c
  051bea0  cmpwi 7, 3, 1
  051bea4  bf- 30, 0x51bec8
  051bea8  lwz 9, 0(4)
  051beac  cmpwi 7, 9, 0
  051beb0  bt- 30, 0x51c00c
  051beb4  clrldi 9, 9, 32
  051beb8  lwz 0, 152(9)
  051bebc  isync
  051bec0  cmpwi 7, 0, 0
  051bec4  bf 30, 0x51bfc8
  051bec8  li 0, 0
  051becc  addi 4, 1, 116
  051bed0  addi 3, 1, 112
  051bed4  stw 0, 116(1)
  051bed8  stw 0, 120(1)
  051bedc  stw 0, 124(1)
  051bee0  stw 0, 132(1)
  051bee4  stw 0, 112(1)
  051bee8  stw 30, 128(1)
  051beec  bl 0x51ba44
  051bef0  lwz 28, 112(1)
  051bef4  clrldi 26, 31, 32
  051bef8  clrldi 27, 30, 32
  051befc  mr 3, 28
  051bf00  addi 25, 1, 120
  051bf04  bl 0x52de58
  051bf08  nop
  051bf0c  mr 3, 26
  051bf10  mr 4, 27
  051bf14  mr 5, 25
  051bf18  li 6, 1
  051bf1c  li 31, -1
  051bf20  bl 0x51b784
  051bf24  cmpdi 7, 29, 0
  051bf28  clrldi 31, 31, 1
  051bf2c  bt 30, 0x51bf60
  051bf30  mr 31, 29
  051bf34  b 0x51bf60
  051bf38  mftb 0, 268
  051bf3c  cmpwi 7, 0, 0
  051bf40  bt- 30, 0x51bf38
  051bf44  cmpd 6, 31, 0
  051bf48  bf 25, 0x51bf6c
  051bf4c  lwz 3, 116(1)
  051bf50  mr 5, 29
  051bf54  lwz 4, 112(1)
  051bf58  bl 0x52e49c
  051bf5c  nop
  051bf60  lwz 9, 124(1)
  051bf64  cmplw 7, 30, 9
  051bf68  bt 29, 0x51bf38
  051bf6c  cmplw 7, 30, 9
  051bf70  bt- 29, 0x51c018
  051bf74  mr 3, 28
  051bf78  bl 0x52dda0
  051bf7c  nop
  051bf80  lwz 0, 124(1)
  051bf84  cmpw 7, 0, 30
  051bf88  lis 3, -32767
  051bf8c  ori 3, 3, 1796
  051bf90  bf- 30, 0x51bfdc
  051bf94  lwz 3, 132(1)
  051bf98  ld 0, 224(1)
  051bf9c  extsw 3, 3
  051bfa0  ld 25, 152(1)
  051bfa4  ld 26, 160(1)
  051bfa8  mtlr 0
  051bfac  ld 27, 168(1)
  051bfb0  ld 28, 176(1)
  051bfb4  ld 29, 184(1)
  051bfb8  ld 30, 192(1)
  051bfbc  ld 31, 200(1)
  051bfc0  addi 1, 1, 208
  051bfc4  blr
  051bfc8  lwz 4, 0(4)
  051bfcc  lwz 3, 212(4)
  051bfd0  cmpwi 7, 3, 0
  051bfd4  bf 30, 0x51bfdc
  051bfd8  lwz 3, 68(4)
  051bfdc  ld 0, 224(1)
  051bfe0  extsw 3, 3
  051bfe4  ld 25, 152(1)
  051bfe8  ld 26, 160(1)
  051bfec  mtlr 0
  051bff0  ld 27, 168(1)
  051bff4  ld 28, 176(1)
  051bff8  ld 29, 184(1)
  051bffc  ld 30, 192(1)
  051c000  ld 31, 200(1)
  051c004  addi 1, 1, 208
  051c008  blr
  051c00c  lis 3, -32767
  051c010  ori 3, 3, 1802
  051c014  b 0x51bfdc
  051c018  mr 3, 26
  051c01c  mr 4, 27
  051c020  mr 5, 25
  051c024  li 6, 0
  051c028  bl 0x51b784
  051c02c  b 0x51bf74

_ZN4cell4fios2op8syncWaitEPx:   # 0x51c030, 0xbc bytes
  051c030  stdu 1, -176(1)
  051c034  mflr 0
  051c038  cmpwi 7, 3, 0
  051c03c  std 28, 144(1)
  051c040  std 29, 152(1)
  051c044  clrldi 28, 3, 32
  051c048  lis 29, -32767
  051c04c  std 26, 128(1)
  051c050  std 30, 160(1)
  051c054  std 31, 168(1)
  051c058  mr 30, 3
  051c05c  mr 31, 3
  051c060  std 27, 136(1)
  051c064  std 0, 192(1)
  051c068  mr 26, 4
  051c06c  mr 3, 28
  051c070  ori 29, 29, 1802
  051c074  bt- 30, 0x51c0c0
  051c078  bl 0x604738
  051c07c  nop
  051c080  addi 4, 1, 112
  051c084  li 5, 0
  051c088  li 3, 1
  051c08c  stw 31, 112(1)
  051c090  bl 0x51be64
  051c094  lwz 0, 152(31)
  051c098  mr 29, 3
  051c09c  isync
  051c0a0  cmpwi 7, 26, 0
  051c0a4  mr 4, 28
  051c0a8  bt 30, 0x51c0b4
  051c0ac  ld 0, 176(31)
  051c0b0  std 0, 0(26)
  051c0b4  lwz 3, 156(30)
  051c0b8  bl 0x51fd24
  051c0bc  nop
  051c0c0  ld 0, 192(1)
  051c0c4  extsw 3, 29
  051c0c8  ld 26, 128(1)
  051c0cc  ld 27, 136(1)
  051c0d0  mtlr 0
  051c0d4  ld 28, 144(1)
  051c0d8  ld 29, 152(1)
  051c0dc  ld 30, 160(1)
  051c0e0  ld 31, 168(1)
  051c0e4  addi 1, 1, 176
  051c0e8  blr

_ZN4cell4fios2op21vwaitMultipleDeadlineExPS1_Pc:   # 0x51c0ec, 0x120 bytes
  051c0ec  cmpwi 7, 4, 0
  051c0f0  mflr 0
  051c0f4  stdu 1, -192(1)
  051c0f8  std 26, 144(1)
  051c0fc  std 27, 152(1)
  051c100  std 31, 184(1)
  051c104  std 25, 136(1)
  051c108  std 28, 160(1)
  051c10c  std 29, 168(1)
  051c110  std 30, 176(1)
  051c114  std 0, 208(1)
  051c118  mr 31, 4
  051c11c  mr 27, 3
  051c120  li 26, 0
  051c124  bt 30, 0x51c1a4
  051c128  lis 29, -32767
  051c12c  addi 30, 5, 4
  051c130  ori 29, 29, 1796
  051c134  li 25, 0
  051c138  addi 28, 1, 112
  051c13c  b 0x51c158
  051c140  bt 26, 0x51c148
  051c144  mr 26, 3
  051c148  lwz 31, 0(30)
  051c14c  addi 30, 30, 8
  051c150  cmpwi 7, 31, 0
  051c154  bt 30, 0x51c198
  051c158  clrldi 3, 31, 32
  051c15c  bl 0x604738
  051c160  nop
  051c164  clrldi 4, 28, 32
  051c168  mr 5, 27
  051c16c  li 3, 1
  051c170  stw 31, 112(1)
  051c174  bl 0x51be64
  051c178  cmpw 7, 3, 29
  051c17c  cmpwi 6, 3, 0
  051c180  bf 30, 0x51c140
  051c184  lwz 31, 0(30)
  051c188  li 25, 1
  051c18c  addi 30, 30, 8
  051c190  cmpwi 7, 31, 0
  051c194  bf 30, 0x51c158
  051c198  clrlwi 0, 25, 24
  051c19c  cmpwi 7, 0, 0
  051c1a0  bf 30, 0x51c1d4
  051c1a4  ld 0, 208(1)
  051c1a8  extsw 3, 26
  051c1ac  ld 25, 136(1)
  051c1b0  ld 26, 144(1)
  051c1b4  mtlr 0
  051c1b8  ld 27, 152(1)
  051c1bc  ld 28, 160(1)
  051c1c0  ld 29, 168(1)
  051c1c4  ld 30, 176(1)
  051c1c8  ld 31, 184(1)
  051c1cc  addi 1, 1, 192
  051c1d0  blr
  051c1d4  lis 26, -32767
  051c1d8  ld 0, 208(1)
  051c1dc  ld 25, 136(1)
  051c1e0  ori 26, 26, 1796
  051c1e4  ld 27, 152(1)
  051c1e8  ld 28, 160(1)
  051c1ec  mtlr 0
  051c1f0  extsw 3, 26
  051c1f4  ld 29, 168(1)
  051c1f8  ld 26, 144(1)
  051c1fc  ld 30, 176(1)
  051c200  ld 31, 184(1)
  051c204  addi 1, 1, 192
  051c208  blr

_ZN4cell4fios2op12waitMultipleEPS1_z:   # 0x51c20c, 0x54 bytes
  051c20c  stdu 1, -128(1)
  051c210  mflr 0
  051c214  std 4, 184(1)
  051c218  std 0, 144(1)
  051c21c  addi 0, 1, 184
  051c220  std 5, 192(1)
  051c224  mr 4, 3
  051c228  mr 5, 0
  051c22c  li 3, 0
  051c230  stw 0, 112(1)
  051c234  std 6, 200(1)
  051c238  std 7, 208(1)
  051c23c  std 8, 216(1)
  051c240  std 9, 224(1)
  051c244  std 10, 232(1)
  051c248  bl 0x51c0ec
  051c24c  ld 0, 144(1)
  051c250  extsw 3, 3
  051c254  addi 1, 1, 128
  051c258  mtlr 0
  051c25c  blr

_ZN4cell4fios2op19waitMultipleTimeoutExPS1_z:   # 0x51c260, 0x5c bytes
  051c260  stdu 1, -160(1)
  051c264  mflr 0
  051c268  std 29, 136(1)
  051c26c  std 0, 176(1)
  051c270  mr 29, 4
  051c274  addi 0, 1, 224
  051c278  std 5, 224(1)
  051c27c  stw 0, 112(1)
  051c280  std 6, 232(1)
  051c284  std 7, 240(1)
  051c288  std 8, 248(1)
  051c28c  std 9, 256(1)
  051c290  std 10, 264(1)
  051c294  bl 0x51b750
  051c298  clrldi 4, 29, 32
  051c29c  lwz 5, 112(1)
  051c2a0  bl 0x51c0ec
  051c2a4  ld 0, 176(1)
  051c2a8  extsw 3, 3
  051c2ac  ld 29, 136(1)
  051c2b0  mtlr 0
  051c2b4  addi 1, 1, 160
  051c2b8  blr

FUN_0051c2bc:   # 0x51c2bc, 0x48 bytes
  051c2bc  stdu 1, -128(1)
  051c2c0  mflr 0
  051c2c4  std 5, 192(1)
  051c2c8  std 0, 144(1)
  051c2cc  addi 0, 1, 192
  051c2d0  std 6, 200(1)
  051c2d4  mr 5, 0
  051c2d8  stw 0, 112(1)
  051c2dc  std 7, 208(1)
  051c2e0  std 8, 216(1)
  051c2e4  std 9, 224(1)
  051c2e8  std 10, 232(1)
  051c2ec  bl 0x51c0ec
  051c2f0  ld 0, 144(1)
  051c2f4  extsw 3, 3
  051c2f8  addi 1, 1, 128
  051c2fc  mtlr 0
  051c300  blr

_ZNK4cell4fios2op16getFulfilledSizeEv:   # 0x51c304, 0x8c bytes
  051c304  stdu 1, -128(1)
  051c308  mflr 0
  051c30c  std 31, 120(1)
  051c310  std 0, 144(1)
  051c314  std 30, 112(1)
  051c318  mr 31, 3
  051c31c  lwz 9, 156(3)
  051c320  lwz 0, 152(3)
  051c324  isync
  051c328  addi 9, 9, 56
  051c32c  cmpwi 7, 0, 0
  051c330  clrldi 30, 9, 32
  051c334  mr 3, 30
  051c338  bt 30, 0x51c35c
  051c33c  ld 31, 176(31)
  051c340  ld 0, 144(1)
  051c344  mr 3, 31
  051c348  ld 30, 112(1)
  051c34c  ld 31, 120(1)
  051c350  mtlr 0
  051c354  addi 1, 1, 128
  051c358  blr
  051c35c  bl 0x52de58
  051c360  nop
  051c364  mr 3, 30
  051c368  ld 31, 176(31)
  051c36c  bl 0x52dda0
  051c370  nop
  051c374  ld 0, 144(1)
  051c378  ld 30, 112(1)
  051c37c  mr 3, 31
  051c380  mtlr 0
  051c384  ld 31, 120(1)
  051c388  addi 1, 1, 128
  051c38c  blr

_ZN4cell4fios2op8callbackEhPv:   # 0x51c390, 0x1c4 bytes
  051c390  stdu 1, -208(1)
  051c394  mflr 0
  051c398  std 28, 176(1)
  051c39c  std 0, 224(1)
  051c3a0  lwz 9, 156(3)
  051c3a4  std 26, 160(1)
  051c3a8  addi 9, 9, 96
  051c3ac  std 30, 192(1)
  051c3b0  clrldi 28, 9, 32
  051c3b4  std 31, 200(1)
  051c3b8  mr 26, 4
  051c3bc  mr 31, 3
  051c3c0  mr 30, 3
  051c3c4  mr 3, 28
  051c3c8  std 24, 144(1)
  051c3cc  std 25, 152(1)
  051c3d0  std 27, 168(1)
  051c3d4  std 23, 136(1)
  051c3d8  std 29, 184(1)
  051c3dc  mr 24, 5
  051c3e0  bl 0x52cccc
  051c3e4  nop
  051c3e8  lwz 27, 20(31)
  051c3ec  clrlwi 11, 26, 24
  051c3f0  lwz 25, 24(31)
  051c3f4  cmpwi 7, 11, 1
  051c3f8  bt 30, 0x51c478
  051c3fc  mr 3, 28
  051c400  bl 0x52cc20
  051c404  nop
  051c408  cmpwi 7, 27, 0
  051c40c  li 3, 0
  051c410  bt 30, 0x51c440
  051c414  clrldi 9, 27, 32
  051c418  clrldi 3, 25, 32
  051c41c  clrldi 4, 30, 32
  051c420  clrldi 5, 26, 56
  051c424  clrldi 6, 24, 32
  051c428  lwz 0, 0(9)
  051c42c  std 2, 40(1)
  051c430  mtctr 0
  051c434  lwz 2, 4(9)
  051c438  bctrl
  051c43c  ld 2, 40(1)
  051c440  ld 0, 224(1)
  051c444  extsw 3, 3
  051c448  ld 23, 136(1)
  051c44c  ld 24, 144(1)
  051c450  mtlr 0
  051c454  ld 25, 152(1)
  051c458  ld 26, 160(1)
  051c45c  ld 27, 168(1)
  051c460  ld 28, 176(1)
  051c464  ld 29, 184(1)
  051c468  ld 30, 192(1)
  051c46c  ld 31, 200(1)
  051c470  addi 1, 1, 208
  051c474  blr
  051c478  mr 9, 31
  051c47c  lwzu 0, 152(9)
  051c480  isync
  051c484  lwsync
  051c488  li 29, 0
  051c48c  addi 3, 1, 112
  051c490  addi 4, 1, 116
  051c494  stw 11, 0(9)
  051c498  stw 29, 112(1)
  051c49c  stw 29, 116(1)
  051c4a0  bl 0x51ba44
  051c4a4  lwz 23, 112(1)
  051c4a8  mr 3, 23
  051c4ac  bl 0x52de58
  051c4b0  nop
  051c4b4  mr 9, 31
  051c4b8  lwzu 10, 216(9)
  051c4bc  cmpwi 7, 10, 0
  051c4c0  stw 29, 0(9)
  051c4c4  bt 30, 0x51c534
  051c4c8  li 8, 0
  051c4cc  b 0x51c4dc
  051c4d0  lwz 10, 0(11)
  051c4d4  cmpwi 7, 10, 0
  051c4d8  bt 30, 0x51c528
  051c4dc  lwz 0, 212(31)
  051c4e0  clrldi 11, 10, 32
  051c4e4  cmpwi 7, 0, 0
  051c4e8  bf 30, 0x51c4f8
  051c4ec  lwz 0, 68(31)
  051c4f0  cmpwi 7, 0, 0
  051c4f4  bt 30, 0x51c500
  051c4f8  clrldi 11, 10, 32
  051c4fc  stw 0, 12(11)
  051c500  lwz 9, 4(11)
  051c504  lwz 0, 8(11)
  051c508  addi 9, 9, 1
  051c50c  cmpw 7, 0, 9
  051c510  stw 9, 4(11)
  051c514  bf 30, 0x51c4d0
  051c518  lwz 10, 0(11)
  051c51c  li 8, 1
  051c520  cmpwi 7, 10, 0
  051c524  bf 30, 0x51c4dc
  051c528  clrlwi 0, 8, 24
  051c52c  cmpwi 7, 0, 0
  051c530  bf 30, 0x51c544
  051c534  mr 3, 23
  051c538  bl 0x52dda0
  051c53c  nop
  051c540  b 0x51c3fc
  051c544  lwz 3, 116(1)
  051c548  bl 0x52dc40
  051c54c  nop
  051c550  b 0x51c534

_ZN4cell4fios2op12copyDataFromEPS1_:   # 0x51c554, 0x304 bytes
  051c554  cmpw 7, 4, 3
  051c558  mflr 0
  051c55c  stdu 1, -160(1)
  051c560  std 30, 144(1)
  051c564  std 31, 152(1)
  051c568  std 27, 120(1)
  051c56c  std 28, 128(1)
  051c570  std 29, 136(1)
  051c574  std 0, 176(1)
  051c578  mr 31, 3
  051c57c  mr 30, 4
  051c580  mr 11, 3
  051c584  mr 9, 4
  051c588  bt 30, 0x51c5a0
  051c58c  lwzu 0, 64(3)
  051c590  cmpwi 7, 0, 10
  051c594  bt 30, 0x51c5cc
  051c598  cmpwi 7, 0, 6
  051c59c  bt 30, 0x51c5cc
  051c5a0  ld 0, 176(1)
  051c5a4  li 3, 0
  051c5a8  ld 27, 120(1)
  051c5ac  extsw 3, 3
  051c5b0  ld 28, 128(1)
  051c5b4  ld 29, 136(1)
  051c5b8  mtlr 0
  051c5bc  ld 30, 144(1)
  051c5c0  ld 31, 152(1)
  051c5c4  addi 1, 1, 160
  051c5c8  blr
  051c5cc  ld 29, 128(31)
  051c5d0  cmpdi 7, 29, 0
  051c5d4  bt 30, 0x51c5a0
  051c5d8  mr 4, 9
  051c5dc  lwzu 0, 64(4)
  051c5e0  cmpwi 7, 0, 10
  051c5e4  bt 30, 0x51c5f0
  051c5e8  cmpwi 7, 0, 6
  051c5ec  bf 30, 0x51c5a0
  051c5f0  addi 0, 11, 80
  051c5f4  lwz 11, -30764(2)
  051c5f8  clrldi 10, 0, 32
  051c5fc  lwz 0, 0(11)
  051c600  lwz 8, 0(10)
  051c604  cmpw 7, 0, 8
  051c608  bt 30, 0x51c720
  051c60c  addi 0, 4, 16
  051c610  clrldi 11, 0, 32
  051c614  lwz 9, 0(11)
  051c618  cmpw 7, 9, 8
  051c61c  bt 30, 0x51c764
  051c620  lwz 3, 8(3)
  051c624  cmpwi 7, 3, 0
  051c628  bt 30, 0x51c5a0
  051c62c  lwz 0, 8(4)
  051c630  cmpwi 7, 0, 0
  051c634  bt 30, 0x51c5a0
  051c638  clrldi 3, 3, 32
  051c63c  clrldi 4, 0, 32
  051c640  bl 0x5cc784
  051c644  nop
  051c648  cmpwi 7, 3, 0
  051c64c  bf 30, 0x51c5a0
  051c650  ld 0, 184(30)
  051c654  ld 11, 112(31)
  051c658  ld 9, 168(30)
  051c65c  cmpd 7, 11, 0
  051c660  lwz 4, 192(30)
  051c664  add 10, 0, 9
  051c668  lwz 30, 144(31)
  051c66c  bt 28, 0x51c678
  051c670  cmpd 7, 11, 10
  051c674  bt 28, 0x51c7a8
  051c678  add 9, 11, 29
  051c67c  cmpd 7, 9, 0
  051c680  bf 29, 0x51c6e4
  051c684  cmpd 7, 9, 10
  051c688  bf 28, 0x51c6e4
  051c68c  sub 0, 0, 11
  051c690  sub 28, 29, 0
  051c694  add 0, 30, 0
  051c698  cmplwi 7, 28, 4095
  051c69c  bf- 29, 0x51c840
  051c6a0  lwz 9, -30780(2)
  051c6a4  clrldi 3, 0, 32
  051c6a8  clrldi 4, 4, 32
  051c6ac  clrldi 5, 28, 32
  051c6b0  lwz 11, 16(9)
  051c6b4  lwz 0, 0(11)
  051c6b8  std 2, 40(1)
  051c6bc  mtctr 0
  051c6c0  lwz 2, 4(11)
  051c6c4  bctrl
  051c6c8  ld 2, 40(1)
  051c6cc  ld 29, 128(31)
  051c6d0  ld 0, 176(31)
  051c6d4  sub 29, 29, 28
  051c6d8  add 0, 28, 0
  051c6dc  std 29, 128(31)
  051c6e0  std 0, 176(31)
  051c6e4  sradi 0, 29, 63
  051c6e8  ld 27, 120(1)
  051c6ec  ld 28, 128(1)
  051c6f0  xor 9, 0, 29
  051c6f4  ld 30, 144(1)
  051c6f8  ld 29, 136(1)
  051c6fc  sub 9, 9, 0
  051c700  ld 0, 176(1)
  051c704  ld 31, 152(1)
  051c708  addi 1, 1, 160
  051c70c  addi 9, 9, -1
  051c710  mtlr 0
  051c714  rldicl 3, 9, 1, 63
  051c718  extsw 3, 3
  051c71c  blr
  051c720  lwz 9, 4(10)
  051c724  lwz 0, 4(11)
  051c728  cmpw 7, 9, 0
  051c72c  bf 30, 0x51c60c
  051c730  lwz 9, 8(10)
  051c734  lwz 0, 8(11)
  051c738  cmpw 7, 9, 0
  051c73c  bf 30, 0x51c60c
  051c740  ld 9, 16(10)
  051c744  ld 0, 16(11)
  051c748  cmpd 7, 9, 0
  051c74c  bf 30, 0x51c60c
  051c750  lwz 9, 24(11)
  051c754  lwz 0, 24(10)
  051c758  cmpw 7, 0, 9
  051c75c  bf 30, 0x51c60c
  051c760  b 0x51c620
  051c764  lwz 0, 4(10)
  051c768  lwz 9, 4(11)
  051c76c  cmpw 7, 0, 9
  051c770  bf 30, 0x51c620
  051c774  lwz 0, 8(10)
  051c778  lwz 9, 8(11)
  051c77c  cmpw 7, 0, 9
  051c780  bf 30, 0x51c620
  051c784  ld 0, 16(10)
  051c788  ld 9, 16(11)
  051c78c  cmpd 7, 0, 9
  051c790  bf 30, 0x51c620
  051c794  lwz 0, 24(10)
  051c798  lwz 9, 24(11)
  051c79c  cmpw 7, 0, 9
  051c7a0  bf 30, 0x51c620
  051c7a4  b 0x51c650
  051c7a8  sub 0, 11, 0
  051c7ac  sub 28, 9, 0
  051c7b0  cmpd 7, 28, 29
  051c7b4  bf 29, 0x51c7bc
  051c7b8  mr 28, 29
  051c7bc  cmplwi 7, 28, 4095
  051c7c0  mr 27, 28
  051c7c4  add 0, 4, 0
  051c7c8  bf- 29, 0x51c828
  051c7cc  lwz 9, -30780(2)
  051c7d0  clrldi 4, 0, 32
  051c7d4  clrldi 3, 30, 32
  051c7d8  clrldi 5, 28, 32
  051c7dc  lwz 11, 16(9)
  051c7e0  lwz 0, 0(11)
  051c7e4  std 2, 40(1)
  051c7e8  mtctr 0
  051c7ec  lwz 2, 4(11)
  051c7f0  bctrl
  051c7f4  ld 2, 40(1)
  051c7f8  ld 29, 128(31)
  051c7fc  add 11, 30, 27
  051c800  ld 0, 112(31)
  051c804  ld 9, 176(31)
  051c808  sub 29, 29, 28
  051c80c  add 0, 0, 28
  051c810  add 9, 9, 28
  051c814  std 0, 112(31)
  051c818  std 9, 176(31)
  051c81c  stw 11, 144(31)
  051c820  std 29, 128(31)
  051c824  b 0x51c6e4
  051c828  clrldi 4, 0, 32
  051c82c  clrldi 3, 30, 32
  051c830  clrldi 5, 28, 32
  051c834  bl 0x5c5ad0
  051c838  nop
  051c83c  b 0x51c7f8
  051c840  clrldi 3, 0, 32
  051c844  clrldi 4, 4, 32
  051c848  clrldi 5, 28, 32
  051c84c  bl 0x5c5ad0
  051c850  nop
  051c854  b 0x51c6cc
