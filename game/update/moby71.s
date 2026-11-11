# game/update/moby71.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M71_0042b640:   # 0x42b640, 0x5e0 bytes
  042b640  stdu 1, -352(1)
  042b644  mflr 0
  042b648  std 0, 368(1)
  042b64c  stfd 23, 280(1)
  042b650  stfd 24, 288(1)
  042b654  stfd 25, 296(1)
  042b658  stfd 26, 304(1)
  042b65c  stfd 27, 312(1)
  042b660  stfd 28, 320(1)
  042b664  stfd 29, 328(1)
  042b668  stfd 30, 336(1)
  042b66c  stfd 31, 344(1)
  042b670  std 29, 256(1)
  042b674  lis 4, 149
  042b678  lis 29, 161
  042b67c  addic 4, 4, 5056
  042b680  addic 29, 29, 2368
  042b684  lfs 2, 324(4)
  042b688  lfs 1, 36(29)
  042b68c  lfs 3, 320(4)
  042b690  fsubs 2, 2, 1
  042b694  lfs 1, 32(29)
  042b698  fsubs 1, 3, 1
  042b69c  lfs 4, 328(4)
  042b6a0  lfs 5, 40(29)
  042b6a4  std 31, 272(1)
  042b6a8  lis 5, 67
  042b6ac  ori 31, 3, 0
  042b6b0  fsubs 4, 4, 5
  042b6b4  fmuls 3, 2, 2
  042b6b8  addi 5, 5, -18928
  042b6bc  stfs 1, 112(1)
  042b6c0  stfs 2, 116(1)
  042b6c4  lfs 6, 332(4)
  042b6c8  fmadds 3, 1, 1, 3
  042b6cc  stfs 6, 124(1)
  042b6d0  fabs 6, 4
  042b6d4  stfs 4, 120(1)
  042b6d8  stfs 4, 148(1)
  042b6dc  lis 4, 115
  042b6e0  fsqrts 3, 3
  042b6e4  addic 4, 4, 22784
  042b6e8  fabs 5, 3
  042b6ec  stfs 3, 144(1)
  042b6f0  lwz 3, 148(1)
  042b6f4  rlwinm 3, 3, 3, 29, 29
  042b6f8  fsubs 3, 5, 6
  042b6fc  stfs 3, 152(1)
  042b700  lwz 6, 144(1)
  042b704  lfs 30, 0(5)
  042b708  lfs 3, 144(1)
  042b70c  lfs 4, 148(1)
  042b710  lwz 5, 152(1)
  042b714  lfs 7, 152(1)
  042b718  fabs 3, 3
  042b71c  fabs 4, 4
  042b720  rlwimi 3, 5, 2, 30, 30
  042b724  fsub 8, 7, 30
  042b728  ori 5, 4, 0
  042b72c  fsub 7, 7, 30
  042b730  rlwimi 3, 6, 4, 28, 28
  042b734  rlwimi 5, 3, 2, 26, 28
  042b738  slwi 3, 3, 2
  042b73c  clrldi 5, 5, 32
  042b740  fsel 6, 8, 3, 6
  042b744  lfsx 3, 4, 3
  042b748  fsel 5, 7, 4, 5
  042b74c  lfs 4, 4(5)
  042b750  std 30, 264(1)
  042b754  std 28, 248(1)
  042b758  std 27, 240(1)
  042b75c  fcmpu 0, 6, 30
  042b760  bt 1, 0x42b76c
  042b764  fmr 3, 30
  042b768  b 0x42b890
  042b76c  fsubs 7, 5, 6
  042b770  fadds 5, 5, 6
  042b774  addic 3, 1, 16
  042b778  li 6, 2
  042b77c  addic 5, 3, 188
  042b780  addic 4, 3, 172
  042b784  mtctr 6
  042b788  fdivs 5, 7, 5
  042b78c  fmuls 6, 5, 5
  042b790  stfs 5, 200(1)
  042b794  stfs 5, 192(1)
  042b798  stfs 5, 196(1)
  042b79c  stfs 5, 188(1)
  042b7a0  lfs 8, 200(1)
  042b7a4  lfs 9, 192(1)
  042b7a8  lfs 10, 196(1)
  042b7ac  fmuls 7, 6, 6
  042b7b0  fmuls 9, 9, 6
  042b7b4  fmuls 8, 8, 7
  042b7b8  fmuls 5, 7, 7
  042b7bc  fmuls 7, 10, 7
  042b7c0  stfs 9, 192(1)
  042b7c4  fmuls 6, 8, 6
  042b7c8  stfs 7, 196(1)
  042b7cc  stfs 6, 200(1)
  042b7d0  lfs 6, 172(3)
  042b7d4  fmuls 6, 6, 5
  042b7d8  stfs 6, 188(3)
  042b7dc  lfs 6, 4(4)
  042b7e0  addic 4, 4, 8
  042b7e4  fmuls 6, 6, 5
  042b7e8  addic 3, 3, 8
  042b7ec  stfs 6, 4(5)
  042b7f0  addic 5, 5, 8
  042b7f4  bdnz 0x42b7d0
  042b7f8  li 5, 4
  042b7fc  ori 3, 1, 0
  042b800  mtctr 5
  042b804  lis 4, 115
  042b808  addic 5, 3, 188
  042b80c  addic 4, 4, 22752
  042b810  ori 7, 5, 0
  042b814  lfs 5, 188(3)
  042b818  lfs 6, 0(4)
  042b81c  fmuls 5, 5, 6
  042b820  lfs 6, 4(4)
  042b824  addic 4, 4, 8
  042b828  stfs 5, 188(3)
  042b82c  lfs 5, 4(5)
  042b830  addic 3, 3, 8
  042b834  fmuls 5, 5, 6
  042b838  stfs 5, 4(5)
  042b83c  addic 5, 5, 8
  042b840  bdnz 0x42b814
  042b844  ori 3, 1, 0
  042b848  fmr 5, 30
  042b84c  mtctr 6
  042b850  lfs 6, 188(3)
  042b854  fadds 5, 5, 6
  042b858  lfs 6, 4(7)
  042b85c  addic 3, 3, 16
  042b860  lfs 7, 8(7)
  042b864  lfs 8, 12(7)
  042b868  addic 7, 7, 16
  042b86c  fadds 5, 5, 6
  042b870  fadds 5, 5, 7
  042b874  fadds 5, 5, 8
  042b878  bdnz 0x42b850
  042b87c  lis 3, 67
  042b880  addi 3, 3, -18928
  042b884  lfs 6, 4(3)
  042b888  fadds 5, 5, 6
  042b88c  fmadds 3, 5, 3, 4
  042b890  fabs 1, 1
  042b894  fabs 4, 2
  042b898  fneg 31, 3
  042b89c  fsubs 2, 1, 4
  042b8a0  fsub 3, 2, 30
  042b8a4  fsub 5, 2, 30
  042b8a8  fsel 2, 3, 1, 4
  042b8ac  fsel 1, 5, 4, 1
  042b8b0  fcmpu 0, 2, 30
  042b8b4  cror 6, 0, 2
  042b8b8  bt 6, 0x42b990
  042b8bc  fsubs 3, 1, 2
  042b8c0  fadds 1, 1, 2
  042b8c4  addic 3, 1, 16
  042b8c8  li 6, 2
  042b8cc  addic 5, 3, 156
  042b8d0  addic 4, 3, 140
  042b8d4  mtctr 6
  042b8d8  fdivs 1, 3, 1
  042b8dc  fmuls 2, 1, 1
  042b8e0  stfs 1, 168(1)
  042b8e4  stfs 1, 160(1)
  042b8e8  stfs 1, 164(1)
  042b8ec  stfs 1, 156(1)
  042b8f0  lfs 4, 168(1)
  042b8f4  lfs 5, 160(1)
  042b8f8  lfs 6, 164(1)
  042b8fc  fmuls 3, 2, 2
  042b900  fmuls 5, 5, 2
  042b904  fmuls 4, 4, 3
  042b908  fmuls 1, 3, 3
  042b90c  fmuls 3, 6, 3
  042b910  stfs 5, 160(1)
  042b914  fmuls 2, 4, 2
  042b918  stfs 3, 164(1)
  042b91c  stfs 2, 168(1)
  042b920  lfs 2, 140(3)
  042b924  fmuls 2, 2, 1
  042b928  stfs 2, 156(3)
  042b92c  lfs 2, 4(4)
  042b930  addic 4, 4, 8
  042b934  fmuls 2, 2, 1
  042b938  addic 3, 3, 8
  042b93c  stfs 2, 4(5)
  042b940  addic 5, 5, 8
  042b944  bdnz 0x42b920
  042b948  lis 4, 115
  042b94c  ori 3, 1, 0
  042b950  li 6, 4
  042b954  addic 4, 4, 22752
  042b958  addic 5, 3, 156
  042b95c  mtctr 6
  042b960  lfs 1, 156(3)
  042b964  lfs 2, 0(4)
  042b968  fmuls 1, 1, 2
  042b96c  lfs 2, 4(4)
  042b970  addic 4, 4, 8
  042b974  stfs 1, 156(3)
  042b978  lfs 1, 4(5)
  042b97c  addic 3, 3, 8
  042b980  fmuls 1, 1, 2
  042b984  stfs 1, 4(5)
  042b988  addic 5, 5, 8
  042b98c  bdnz 0x42b960
  042b990  lis 3, 67
  042b994  li 28, 0
  042b998  addi 3, 3, -18928
  042b99c  ori 30, 28, 0
  042b9a0  lfs 29, 8(3)
  042b9a4  lfs 28, 12(3)
  042b9a8  lfs 27, 16(3)
  042b9ac  lfs 26, 20(3)
  042b9b0  fmr 1, 30
  042b9b4  fmr 2, 29
  042b9b8  bl 0xfe4f0
  042b9bc  nop
  042b9c0  fmr 2, 31
  042b9c4  bl 0x502578
  042b9c8  nop
  042b9cc  fmr 25, 1
  042b9d0  fmr 1, 30
  042b9d4  fmr 2, 29
  042b9d8  bl 0xfe4f0
  042b9dc  nop
  042b9e0  fmr 2, 31
  042b9e4  bl 0x502578
  042b9e8  nop
  042b9ec  addic 27, 1, 112
  042b9f0  fmr 2, 1
  042b9f4  fmr 1, 28
  042b9f8  ori 3, 27, 0
  042b9fc  fmr 3, 25
  042ba00  bl 0xfe610
  042ba04  nop
  042ba08  fmr 1, 27
  042ba0c  fmr 2, 26
  042ba10  bl 0xfcbe8
  042ba14  nop
  042ba18  lfs 2, 112(1)
  042ba1c  addic 3, 1, 128
  042ba20  lfs 3, 116(1)
  042ba24  ori 4, 27, 0
  042ba28  fmuls 2, 2, 1
  042ba2c  lfs 4, 120(1)
  042ba30  fmuls 3, 3, 1
  042ba34  fmuls 1, 4, 1
  042ba38  lfs 4, 32(29)
  042ba3c  lfs 5, 36(29)
  042ba40  lfs 6, 40(29)
  042ba44  lfs 7, 124(1)
  042ba48  stfs 7, 140(1)
  042ba4c  fadds 4, 2, 4
  042ba50  fadds 5, 3, 5
  042ba54  fadds 6, 1, 6
  042ba58  stfs 2, 128(1)
  042ba5c  stfs 3, 132(1)
  042ba60  stfs 1, 136(1)
  042ba64  stfs 4, 128(1)
  042ba68  stfs 5, 132(1)
  042ba6c  stfs 6, 136(1)
  042ba70  bl 0x125e08
  042ba74  nop
  042ba78  addic 28, 28, 1
  042ba7c  cmpwi 28, 20
  042ba80  bt 0, 0x42b9b0
  042ba84  lis 3, 67
  042ba88  addi 3, 3, -18928
  042ba8c  lfs 28, 24(3)
  042ba90  lfs 27, 28(3)
  042ba94  lfs 26, 32(3)
  042ba98  lfs 25, 36(3)
  042ba9c  lfs 24, 40(3)
  042baa0  fmr 1, 30
  042baa4  fmr 2, 28
  042baa8  bl 0xfe4f0
  042baac  nop
  042bab0  lfs 2, 32(29)
  042bab4  fadds 3, 2, 1
  042bab8  fmr 1, 30
  042babc  fmr 2, 28
  042bac0  stfs 3, 128(1)
  042bac4  bl 0xfe4f0
  042bac8  nop
  042bacc  lfs 2, 36(29)
  042bad0  fadds 3, 2, 1
  042bad4  fmr 1, 30
  042bad8  fmr 2, 28
  042badc  stfs 3, 132(1)
  042bae0  bl 0xfe4f0
  042bae4  nop
  042bae8  lfs 2, 40(29)
  042baec  fadds 3, 2, 1
  042baf0  fmr 1, 30
  042baf4  fmr 2, 29
  042baf8  stfs 3, 136(1)
  042bafc  bl 0xfe4f0
  042bb00  nop
  042bb04  fmr 2, 31
  042bb08  bl 0x502578
  042bb0c  nop
  042bb10  fmr 23, 1
  042bb14  fmr 1, 30
  042bb18  fmr 2, 29
  042bb1c  bl 0xfe4f0
  042bb20  nop
  042bb24  fmr 2, 31
  042bb28  bl 0x502578
  042bb2c  nop
  042bb30  addic 28, 1, 112
  042bb34  fmr 2, 1
  042bb38  fmr 1, 27
  042bb3c  ori 3, 28, 0
  042bb40  fmr 3, 23
  042bb44  bl 0xfe610
  042bb48  nop
  042bb4c  lis 3, 114
  042bb50  lfs 1, -3056(3)
  042bb54  fmuls 2, 1, 25
  042bb58  fmuls 1, 1, 24
  042bb5c  fctiwz 2, 2
  042bb60  fctiwz 1, 1
  042bb64  stfd 2, 224(1)
  042bb68  lwz 3, 228(1)
  042bb6c  stfd 1, 224(1)
  042bb70  lwz 4, 228(1)
  042bb74  extsw 3, 3
  042bb78  extsw 4, 4
  042bb7c  bl 0xfe484
  042bb80  nop
  042bb84  lis 5, 20224
  042bb88  lis 6, 8191
  042bb8c  fmr 1, 26
  042bb90  ori 8, 3, 0
  042bb94  addic 3, 1, 128
  042bb98  li 9, 1
  042bb9c  ori 4, 28, 0
  042bba0  ori 5, 5, 32767
  042bba4  ori 6, 6, 65535
  042bba8  bl 0x1268f8
  042bbac  nop
  042bbb0  addic 30, 30, 1
  042bbb4  cmpwi 30, 10
  042bbb8  bt 0, 0x42baa0
  042bbbc  lwz 3, 120(31)
  042bbc0  lhz 3, 120(3)
  042bbc4  cmpwi 3, 43
  042bbc8  bf 2, 0x42bbd8
  042bbcc  addic 3, 29, 32
  042bbd0  li 4, 10
  042bbd4  bl 0x42b390
  042bbd8  ld 0, 368(1)
  042bbdc  mtlr 0
  042bbe0  lfd 23, 280(1)
  042bbe4  lfd 24, 288(1)
  042bbe8  lfd 25, 296(1)
  042bbec  lfd 26, 304(1)
  042bbf0  lfd 27, 312(1)
  042bbf4  lfd 28, 320(1)
  042bbf8  lfd 29, 328(1)
  042bbfc  lfd 30, 336(1)
  042bc00  lfd 31, 344(1)
  042bc04  ld 27, 240(1)
  042bc08  ld 28, 248(1)
  042bc0c  ld 29, 256(1)
  042bc10  ld 30, 264(1)
  042bc14  ld 31, 272(1)
  042bc18  addi 1, 1, 352
  042bc1c  blr

M71_ClosestMobyDistance:   # 0x42bc38, 0x1b8 bytes
  042bc38  stdu 1, -192(1)
  042bc3c  mflr 0
  042bc40  std 0, 208(1)
  042bc44  stfd 27, 152(1)
  042bc48  stfd 28, 160(1)
  042bc4c  stfd 29, 168(1)
  042bc50  stfd 30, 176(1)
  042bc54  stfd 31, 184(1)
  042bc58  std 31, 144(1)
  042bc5c  lis 4, 164
  042bc60  std 29, 128(1)
  042bc64  ori 31, 3, 0
  042bc68  lwz 29, -28500(4)
  042bc6c  std 30, 136(1)
  042bc70  std 28, 120(1)
  042bc74  cmpwi 29, 0
  042bc78  bt 2, 0x42bdbc
  042bc7c  lis 3, 67
  042bc80  lis 30, 151
  042bc84  addi 3, 3, -17376
  042bc88  addic 30, 30, -25376
  042bc8c  lfs 27, 0(3)
  042bc90  lfs 28, 4(3)
  042bc94  lfs 29, 8(3)
  042bc98  lfs 30, 12(3)
  042bc9c  lfs 31, 16(3)
  042bca0  lbz 3, 32(29)
  042bca4  cmpwi 1, 3, 253
  042bca8  cmpwi 3, 254
  042bcac  cror 2, 2, 6
  042bcb0  bt 2, 0x42bdbc
  042bcb4  lwz 3, 36(29)
  042bcb8  cmpwi 3, 0
  042bcbc  bt 2, 0x42bd48
  042bcc0  lhz 3, 70(3)
  042bcc4  extsh 3, 3
  042bcc8  cmpwi 3, 19
  042bccc  bf 2, 0x42bd48
  042bcd0  lfs 1, 20(29)
  042bcd4  lfs 2, 20(31)
  042bcd8  lfs 3, 16(29)
  042bcdc  fsubs 1, 1, 2
  042bce0  lfs 2, 16(31)
  042bce4  fsubs 2, 3, 2
  042bce8  lfs 3, 24(29)
  042bcec  lfs 4, 24(31)
  042bcf0  fsubs 3, 3, 4
  042bcf4  fmuls 1, 1, 1
  042bcf8  fmadds 1, 2, 2, 1
  042bcfc  fmadds 1, 3, 3, 1
  042bd00  fsqrts 1, 1
  042bd04  fcmpu 0, 1, 27
  042bd08  cror 6, 1, 2
  042bd0c  bt 6, 0x42bdb0
  042bd10  fmr 1, 28
  042bd14  fmr 2, 29
  042bd18  lwz 28, 8320(30)
  042bd1c  bl 0xfcbe8
  042bd20  nop
  042bd24  ori 3, 29, 0
  042bd28  fmuls 1, 1, 30
  042bd2c  fmr 2, 31
  042bd30  ori 4, 28, 0
  042bd34  bl 0x240f38
  042bd38  nop
  042bd3c  cmpwi 3, 0
  042bd40  bf 2, 0x42bdbc
  042bd44  b 0x42bdb0
  042bd48  ori 3, 29, 0
  042bd4c  bl 0x10df38
  042bd50  nop
  042bd54  cmpwi 3, 0
  042bd58  bt 2, 0x42bdb0
  042bd5c  lfs 1, 20(29)
  042bd60  lfs 2, 20(31)
  042bd64  lfs 3, 16(29)
  042bd68  fsubs 1, 1, 2
  042bd6c  lfs 2, 16(31)
  042bd70  fsubs 2, 3, 2
  042bd74  lfs 3, 24(29)
  042bd78  lfs 4, 24(31)
  042bd7c  fsubs 3, 3, 4
  042bd80  fmuls 1, 1, 1
  042bd84  fmadds 1, 2, 2, 1
  042bd88  fmadds 1, 3, 3, 1
  042bd8c  fsqrts 1, 1
  042bd90  fcmpu 0, 1, 27
  042bd94  cror 6, 1, 2
  042bd98  bt 6, 0x42bdb0
  042bd9c  ori 3, 29, 0
  042bda0  bl 0x2eb450
  042bda4  nop
  042bda8  cmpwi 3, 0
  042bdac  bf 2, 0x42bdbc
  042bdb0  lwz 29, 40(29)
  042bdb4  cmpwi 29, 0
  042bdb8  bf 2, 0x42bca0
  042bdbc  ld 0, 208(1)
  042bdc0  mtlr 0
  042bdc4  lfd 27, 152(1)
  042bdc8  lfd 28, 160(1)
  042bdcc  lfd 29, 168(1)
  042bdd0  lfd 30, 176(1)
  042bdd4  lfd 31, 184(1)
  042bdd8  ld 28, 120(1)
  042bddc  ld 29, 128(1)
  042bde0  ld 30, 136(1)
  042bde4  ld 31, 144(1)
  042bde8  addi 1, 1, 192
  042bdec  blr

M71_0042be08:   # 0x42be08, 0x284 bytes
  042be08  stdu 1, -176(1)
  042be0c  mflr 0
  042be10  std 0, 192(1)
  042be14  stfd 31, 168(1)
  042be18  lwz 5, 0(3)
  042be1c  lwz 6, 4(3)
  042be20  lis 4, 67
  042be24  std 31, 160(1)
  042be28  lfs 1, 0(3)
  042be2c  ori 31, 3, 0
  042be30  lfs 2, 4(3)
  042be34  addi 4, 4, -16912
  042be38  fabs 4, 1
  042be3c  fabs 5, 2
  042be40  rlwinm 6, 6, 3, 29, 29
  042be44  lis 7, 115
  042be48  addic 7, 7, 22784
  042be4c  fsubs 1, 4, 5
  042be50  stfs 1, 112(1)
  042be54  lfs 31, 0(4)
  042be58  lwz 3, 112(1)
  042be5c  lfs 1, 112(1)
  042be60  rlwimi 6, 3, 2, 30, 30
  042be64  fsub 3, 1, 31
  042be68  fsub 6, 1, 31
  042be6c  rlwimi 6, 5, 4, 28, 28
  042be70  ori 3, 7, 0
  042be74  slwi 4, 6, 2
  042be78  rlwimi 3, 6, 2, 26, 28
  042be7c  clrldi 3, 3, 32
  042be80  lfsx 2, 7, 4
  042be84  fsel 3, 3, 4, 5
  042be88  lfs 1, 4(3)
  042be8c  fsel 4, 6, 5, 4
  042be90  fcmpu 0, 3, 31
  042be94  bt 1, 0x42bea0
  042be98  fmr 2, 31
  042be9c  b 0x42bfc8
  042bea0  fsubs 5, 4, 3
  042bea4  fadds 3, 4, 3
  042bea8  addic 6, 1, 16
  042beac  li 3, 2
  042beb0  addic 5, 6, 100
  042beb4  addic 4, 6, 116
  042beb8  mtctr 3
  042bebc  fdivs 3, 5, 3
  042bec0  fmuls 5, 3, 3
  042bec4  stfs 3, 128(1)
  042bec8  stfs 3, 120(1)
  042becc  stfs 3, 124(1)
  042bed0  stfs 3, 116(1)
  042bed4  lfs 6, 128(1)
  042bed8  lfs 7, 120(1)
  042bedc  lfs 8, 124(1)
  042bee0  fmuls 3, 5, 5
  042bee4  fmuls 7, 7, 5
  042bee8  fmuls 6, 6, 3
  042beec  fmuls 4, 3, 3
  042bef0  fmuls 3, 8, 3
  042bef4  stfs 7, 120(1)
  042bef8  fmuls 5, 6, 5
  042befc  stfs 3, 124(1)
  042bf00  stfs 5, 128(1)
  042bf04  lfs 3, 100(6)
  042bf08  fmuls 3, 3, 4
  042bf0c  stfs 3, 116(6)
  042bf10  lfs 3, 4(5)
  042bf14  addic 6, 6, 8
  042bf18  addic 5, 5, 8
  042bf1c  fmuls 3, 3, 4
  042bf20  stfs 3, 4(4)
  042bf24  addic 4, 4, 8
  042bf28  bdnz 0x42bf04
  042bf2c  ori 7, 1, 0
  042bf30  lis 6, 115
  042bf34  li 8, 4
  042bf38  addic 5, 7, 116
  042bf3c  addic 6, 6, 22752
  042bf40  ori 4, 5, 0
  042bf44  mtctr 8
  042bf48  lfs 3, 116(7)
  042bf4c  lfs 4, 0(6)
  042bf50  fmuls 3, 3, 4
  042bf54  lfs 4, 4(6)
  042bf58  addic 6, 6, 8
  042bf5c  stfs 3, 116(7)
  042bf60  lfs 3, 4(5)
  042bf64  addic 7, 7, 8
  042bf68  fmuls 3, 3, 4
  042bf6c  stfs 3, 4(5)
  042bf70  addic 5, 5, 8
  042bf74  bdnz 0x42bf48
  042bf78  ori 5, 3, 0
  042bf7c  fmr 3, 31
  042bf80  ori 3, 1, 0
  042bf84  mtctr 5
  042bf88  lfs 4, 116(3)
  042bf8c  fadds 3, 3, 4
  042bf90  lfs 4, 4(4)
  042bf94  addic 3, 3, 16
  042bf98  lfs 5, 8(4)
  042bf9c  lfs 6, 12(4)
  042bfa0  addic 4, 4, 16
  042bfa4  fadds 3, 3, 4
  042bfa8  fadds 3, 3, 5
  042bfac  fadds 3, 3, 6
  042bfb0  bdnz 0x42bf88
  042bfb4  lis 3, 67
  042bfb8  addi 3, 3, -16912
  042bfbc  lfs 4, 4(3)
  042bfc0  fadds 3, 3, 4
  042bfc4  fmadds 2, 3, 2, 1
  042bfc8  lis 3, 151
  042bfcc  addic 3, 3, -25376
  042bfd0  lfs 1, 152(3)
  042bfd4  bl 0x5026a0
  042bfd8  nop
  042bfdc  lfs 2, 4(31)
  042bfe0  lfs 3, 0(31)
  042bfe4  fmuls 4, 2, 2
  042bfe8  lfs 5, 8(31)
  042bfec  lis 3, 67
  042bff0  addi 3, 3, -16912
  042bff4  lfs 6, 8(3)
  042bff8  fmadds 4, 3, 3, 4
  042bffc  fsub 7, 6, 1
  042c000  fmadds 4, 5, 5, 4
  042c004  fsel 1, 7, 1, 6
  042c008  lfs 7, 12(3)
  042c00c  lfs 8, 16(3)
  042c010  lfs 9, 20(3)
  042c014  fsqrts 4, 4
  042c018  fsubs 1, 6, 1
  042c01c  fmuls 1, 1, 7
  042c020  fmadds 1, 1, 8, 9
  042c024  fmuls 1, 4, 1
  042c028  fsub 6, 31, 4
  042c02c  fsub 7, 31, 4
  042c030  fsub 8, 31, 4
  042c034  fsub 9, 4, 31
  042c038  fsub 10, 4, 31
  042c03c  fdivs 1, 1, 4
  042c040  fsub 4, 4, 31
  042c044  fmuls 3, 3, 1
  042c048  fmuls 2, 2, 1
  042c04c  fmuls 1, 5, 1
  042c050  fsel 5, 6, 31, 3
  042c054  fsel 6, 7, 31, 2
  042c058  fsel 7, 8, 31, 1
  042c05c  fsel 3, 9, 5, 3
  042c060  fsel 2, 10, 6, 2
  042c064  fsel 1, 4, 7, 1
  042c068  stfs 3, 0(31)
  042c06c  stfs 2, 4(31)
  042c070  stfs 1, 8(31)
  042c074  ld 0, 192(1)
  042c078  mtlr 0
  042c07c  lfd 31, 168(1)
  042c080  ld 31, 160(1)
  042c084  addi 1, 1, 176
  042c088  blr

UpdateMoby_71:   # 0x42c150, 0x1d28 bytes
  042c150  stdu 1, -672(1)
  042c154  mflr 0
  042c158  std 0, 688(1)
  042c15c  stfd 18, 560(1)
  042c160  stfd 19, 568(1)
  042c164  stfd 20, 576(1)
  042c168  stfd 21, 584(1)
  042c16c  stfd 22, 592(1)
  042c170  stfd 23, 600(1)
  042c174  stfd 24, 608(1)
  042c178  stfd 25, 616(1)
  042c17c  stfd 26, 624(1)
  042c180  stfd 27, 632(1)
  042c184  stfd 28, 640(1)
  042c188  stfd 29, 648(1)
  042c18c  stfd 30, 656(1)
  042c190  stfd 31, 664(1)
  042c194  std 27, 520(1)
  042c198  lis 27, 151
  042c19c  std 29, 536(1)
  042c1a0  li 4, 0
  042c1a4  lwz 29, 120(3)
  042c1a8  std 31, 552(1)
  042c1ac  addic 27, 27, -25376
  042c1b0  ori 31, 3, 0
  042c1b4  lwz 3, 4276(27)
  042c1b8  stb 4, 4268(27)
  042c1bc  std 30, 544(1)
  042c1c0  std 28, 528(1)
  042c1c4  std 26, 512(1)
  042c1c8  std 25, 504(1)
  042c1cc  std 24, 496(1)
  042c1d0  std 23, 488(1)
  042c1d4  cmpwi 3, 3
  042c1d8  bt 2, 0x42de0c
  042c1dc  lbz 3, 32(31)
  042c1e0  cmpwi 3, 9
  042c1e4  cmpwi 1, 3, 0
  042c1e8  cmpwi 6, 3, 11
  042c1ec  bt 1, 0x42c1f8
  042c1f0  bt 6, 0x42c200
  042c1f4  b 0x42de0c
  042c1f8  bf 25, 0x42d39c
  042c1fc  b 0x42de0c
  042c200  lwz 3, 8320(27)
  042c204  lwz 4, 8324(27)
  042c208  stw 3, 184(31)
  042c20c  cmpwi 4, 1
  042c210  bf 2, 0x42c328
  042c214  lis 3, 150
  042c218  li 4, 10
  042c21c  addic 3, 3, 19008
  042c220  lwz 3, 160(3)
  042c224  and 3, 3, 4
  042c228  cmpwi 3, 0
  042c22c  bt 2, 0x42c26c
  042c230  lis 3, 67
  042c234  li 8, 4
  042c238  addi 5, 3, -16244
  042c23c  lis 4, -111
  042c240  li 9, -1
  042c244  ori 3, 31, 0
  042c248  ori 4, 4, 29287
  042c24c  lfs 1, 0(5)
  042c250  li 6, 0
  042c254  lfs 2, 4(5)
  042c258  li 7, 37
  042c25c  lfs 3, 8(5)
  042c260  std 8, 112(1)
  042c264  bl 0x55284
  042c268  nop
  042c26c  lis 4, 67
  042c270  lis 5, 149
  042c274  li 3, 0
  042c278  addi 4, 4, -16244
  042c27c  addic 30, 5, 5056
  042c280  addic 28, 1, 128
  042c284  sth 3, 126(29)
  042c288  ori 3, 28, 0
  042c28c  lfs 1, 12(4)
  042c290  lfs 2, 344(30)
  042c294  lfs 3, 340(30)
  042c298  fneg 3, 3
  042c29c  bl 0xfe610
  042c2a0  nop
  042c2a4  lfs 1, 128(1)
  042c2a8  addic 3, 30, 320
  042c2ac  lfs 2, 320(30)
  042c2b0  ori 4, 28, 0
  042c2b4  lfs 3, 132(1)
  042c2b8  li 5, 4
  042c2bc  fadds 1, 1, 2
  042c2c0  li 7, 0
  042c2c4  lfs 2, 324(30)
  042c2c8  lfs 4, 136(1)
  042c2cc  fadds 2, 3, 2
  042c2d0  lfs 3, 328(30)
  042c2d4  lwz 6, 8320(27)
  042c2d8  fadds 3, 4, 3
  042c2dc  stfs 1, 128(1)
  042c2e0  stfs 2, 132(1)
  042c2e4  stfs 3, 136(1)
  042c2e8  bl 0x57820
  042c2ec  nop
  042c2f0  cmpwi 3, 0
  042c2f4  bt 2, 0x42c328
  042c2f8  lis 3, 161
  042c2fc  li 4, 1
  042c300  addic 3, 3, 2368
  042c304  lfs 1, 32(3)
  042c308  sth 4, 126(29)
  042c30c  stfs 1, 80(29)
  042c310  lfs 1, 36(3)
  042c314  stfs 1, 84(29)
  042c318  lfs 1, 40(3)
  042c31c  stfs 1, 88(29)
  042c320  lfs 1, 44(3)
  042c324  stfs 1, 92(29)
  042c328  lis 3, 113
  042c32c  ori 4, 31, 0
  042c330  addic 3, 3, -7408
  042c334  bl 0x6d7e0
  042c338  nop
  042c33c  lbz 3, 83(31)
  042c340  lwz 5, 8324(27)
  042c344  cmpwi 3, 0
  042c348  lbz 4, 112(31)
  042c34c  bt 2, 0x42c4a4
  042c350  cmpwi 3, 14
  042c354  bf 2, 0x42c3a4
  042c358  rlwinm 3, 4, 0, 30, 30
  042c35c  cmpwi 3, 0
  042c360  bt 2, 0x42de0c
  042c364  lis 3, 67
  042c368  lis 4, 114
  042c36c  addi 3, 3, -16244
  042c370  li 5, 0
  042c374  lfs 1, 16(3)
  042c378  lfs 2, -3056(4)
  042c37c  ori 3, 31, 0
  042c380  fmuls 1, 2, 1
  042c384  li 4, 1
  042c388  fctiwz 1, 1
  042c38c  stfd 1, 464(1)
  042c390  lwz 6, 468(1)
  042c394  extsw 6, 6
  042c398  bl 0xfddc0
  042c39c  nop
  042c3a0  b 0x42de0c
  042c3a4  lbz 6, 8366(27)
  042c3a8  cmpwi 6, 0
  042c3ac  bt 2, 0x42c454
  042c3b0  cmpwi 3, 16
  042c3b4  bt 2, 0x42c400
  042c3b8  cmpwi 3, 15
  042c3bc  bt 2, 0x42c400
  042c3c0  lis 3, 67
  042c3c4  lis 4, 114
  042c3c8  addi 3, 3, -16244
  042c3cc  li 5, 0
  042c3d0  lfs 1, 20(3)
  042c3d4  lfs 2, -3056(4)
  042c3d8  ori 3, 31, 0
  042c3dc  li 4, 15
  042c3e0  fmuls 1, 2, 1
  042c3e4  fctiwz 1, 1
  042c3e8  stfd 1, 464(1)
  042c3ec  lwz 6, 468(1)
  042c3f0  extsw 6, 6
  042c3f4  bl 0xfddc0
  042c3f8  nop
  042c3fc  b 0x42de0c
  042c400  rlwinm 4, 4, 0, 30, 30
  042c404  cmpwi 4, 0
  042c408  bt 2, 0x42de0c
  042c40c  cmpwi 3, 15
  042c410  bf 2, 0x42de0c
  042c414  lis 3, 67
  042c418  lis 4, 114
  042c41c  addi 3, 3, -16244
  042c420  li 5, 0
  042c424  lfs 1, 16(3)
  042c428  lfs 2, -3056(4)
  042c42c  ori 3, 31, 0
  042c430  fmuls 1, 2, 1
  042c434  li 4, 16
  042c438  fctiwz 1, 1
  042c43c  stfd 1, 464(1)
  042c440  lwz 6, 468(1)
  042c444  extsw 6, 6
  042c448  bl 0xfddc0
  042c44c  nop
  042c450  b 0x42de0c
  042c454  cmpwi 3, 16
  042c458  bt 2, 0x42c464
  042c45c  cmpwi 3, 15
  042c460  bf 2, 0x42c4a4
  042c464  lis 3, 67
  042c468  lis 4, 114
  042c46c  addi 3, 3, -16244
  042c470  li 5, 0
  042c474  lfs 1, 24(3)
  042c478  lfs 2, -3056(4)
  042c47c  ori 3, 31, 0
  042c480  fmuls 1, 2, 1
  042c484  li 4, 14
  042c488  fctiwz 1, 1
  042c48c  stfd 1, 464(1)
  042c490  lwz 6, 468(1)
  042c494  extsw 6, 6
  042c498  bl 0xfddc0
  042c49c  nop
  042c4a0  b 0x42de0c
  042c4a4  rlwinm 4, 4, 0, 30, 30
  042c4a8  cmpwi 1, 5, 59
  042c4ac  cmpwi 4, 0
  042c4b0  cror 2, 2, 6
  042c4b4  bt 2, 0x42c500
  042c4b8  cmpwi 3, 1
  042c4bc  bt 2, 0x42c500
  042c4c0  lis 3, 67
  042c4c4  lis 4, 114
  042c4c8  addi 3, 3, -16244
  042c4cc  li 5, 0
  042c4d0  lfs 1, 16(3)
  042c4d4  lfs 2, -3056(4)
  042c4d8  ori 3, 31, 0
  042c4dc  fmuls 1, 2, 1
  042c4e0  li 4, 1
  042c4e4  fctiwz 1, 1
  042c4e8  stfd 1, 464(1)
  042c4ec  lwz 6, 468(1)
  042c4f0  extsw 6, 6
  042c4f4  bl 0xfddc0
  042c4f8  nop
  042c4fc  lwz 5, 8324(27)
  042c500  cmpwi 5, 59
  042c504  bf 2, 0x42c5dc
  042c508  lwz 4, 8320(27)
  042c50c  li 3, 64
  042c510  li 5, 19
  042c514  li 6, 11
  042c518  subc 5, 5, 6
  042c51c  lbz 7, 83(4)
  042c520  subc 3, 3, 7
  042c524  cmpwi 7, 65
  042c528  cntlzw 3, 3
  042c52c  sldi 3, 3, 58
  042c530  sradi 3, 3, 63
  042c534  and 3, 3, 5
  042c538  addc 3, 6, 3
  042c53c  cmpwi 6, 3, 19
  042c540  bf 2, 0x42c54c
  042c544  li 3, 18
  042c548  b 0x42c558
  042c54c  cmpwi 1, 3, 18
  042c550  bt 26, 0x42c558
  042c554  bf 6, 0x42c59c
  042c558  stb 3, 82(31)
  042c55c  stb 3, 83(31)
  042c560  lfs 1, 84(4)
  042c564  stfs 1, 84(31)
  042c568  lbz 3, 80(4)
  042c56c  stb 3, 80(31)
  042c570  lbz 3, 81(4)
  042c574  stb 3, 81(31)
  042c578  lbz 5, 82(4)
  042c57c  lbz 4, 83(4)
  042c580  cmpw 5, 4
  042c584  bt 2, 0x42c58c
  042c588  stb 3, 80(31)
  042c58c  ori 3, 31, 0
  042c590  bl 0xef74c
  042c594  nop
  042c598  b 0x42c630
  042c59c  ori 4, 3, 0
  042c5a0  lis 3, 67
  042c5a4  lis 5, 114
  042c5a8  addi 3, 3, -16244
  042c5ac  lfs 1, 28(3)
  042c5b0  lfs 2, -3056(5)
  042c5b4  ori 3, 31, 0
  042c5b8  li 5, 0
  042c5bc  fmuls 1, 2, 1
  042c5c0  fctiwz 1, 1
  042c5c4  stfd 1, 464(1)
  042c5c8  lwz 6, 468(1)
  042c5cc  extsw 6, 6
  042c5d0  bl 0xfddc0
  042c5d4  nop
  042c5d8  b 0x42c630
  042c5dc  lwz 3, 8336(27)
  042c5e0  cmpwi 3, 59
  042c5e4  bf 2, 0x42c630
  042c5e8  lwz 3, 408(27)
  042c5ec  cmpwi 3, 1
  042c5f0  bf 2, 0x42c630
  042c5f4  lis 3, 67
  042c5f8  lis 4, 114
  042c5fc  addi 3, 3, -16244
  042c600  li 5, 0
  042c604  lfs 1, 32(3)
  042c608  lfs 2, -3056(4)
  042c60c  ori 3, 31, 0
  042c610  li 4, 1
  042c614  fmuls 1, 2, 1
  042c618  fctiwz 1, 1
  042c61c  stfd 1, 464(1)
  042c620  lwz 6, 468(1)
  042c624  extsw 6, 6
  042c628  bl 0xfddc0
  042c62c  nop
  042c630  lwz 3, 8324(27)
  042c634  cmpwi 1, 3, 33
  042c638  cmpwi 3, 19
  042c63c  cror 2, 2, 6
  042c640  bt 2, 0x42c6ac
  042c644  cmpwi 3, 43
  042c648  bt 2, 0x42c6ac
  042c64c  cmpwi 3, 112
  042c650  bt 2, 0x42c6ac
  042c654  cmpwi 3, 20
  042c658  bt 2, 0x42c6ac
  042c65c  lbz 3, 83(31)
  042c660  cmpwi 1, 3, 5
  042c664  cmpwi 3, 3
  042c668  cror 2, 0, 5
  042c66c  bt 2, 0x42c6ac
  042c670  lis 3, 67
  042c674  lis 4, 114
  042c678  addi 3, 3, -16244
  042c67c  li 5, 0
  042c680  lfs 1, 20(3)
  042c684  lfs 2, -3056(4)
  042c688  ori 3, 31, 0
  042c68c  fmuls 1, 2, 1
  042c690  li 4, 1
  042c694  fctiwz 1, 1
  042c698  stfd 1, 464(1)
  042c69c  lwz 6, 468(1)
  042c6a0  extsw 6, 6
  042c6a4  bl 0xfddc0
  042c6a8  nop
  042c6ac  lwz 4, 8320(27)
  042c6b0  lbz 3, 83(4)
  042c6b4  lbz 5, 82(4)
  042c6b8  cmpw 3, 5
  042c6bc  bf 2, 0x42c6d4
  042c6c0  lbz 3, 81(4)
  042c6c4  lbz 5, 80(4)
  042c6c8  subc 3, 3, 5
  042c6cc  cmpwi 3, 2
  042c6d0  bf 1, 0x42c6e4
  042c6d4  lhz 3, 116(29)
  042c6d8  lwz 4, 8320(27)
  042c6dc  addic 3, 3, 1
  042c6e0  sth 3, 116(29)
  042c6e4  lfs 1, 2704(27)
  042c6e8  lis 3, 114
  042c6ec  stfs 1, 88(31)
  042c6f0  lwz 5, 2656(27)
  042c6f4  addic 3, 3, 12668
  042c6f8  lwz 7, 8332(27)
  042c6fc  sldi 6, 5, 4
  042c700  cmpwi 7, 6
  042c704  subc 5, 6, 5
  042c708  sldi 5, 5, 2
  042c70c  subc 5, 5, 6
  042c710  addc 3, 3, 5
  042c714  clrldi 3, 3, 32
  042c718  bt 2, 0x42c728
  042c71c  lwz 5, 8324(27)
  042c720  cmpwi 5, 43
  042c724  bf 2, 0x42de0c
  042c728  lwz 5, 2716(27)
  042c72c  li 30, 1
  042c730  cmpwi 5, 0
  042c734  ori 25, 30, 0
  042c738  bf 2, 0x42c790
  042c73c  li 5, 28
  042c740  li 7, 2728
  042c744  addi 6, 5, 16
  042c748  <unknown>
  042c74c  <unknown>
  042c750  vor 2, 2, 3
  042c754  <unknown>
  042c758  vcfsx 4, 2, 0
  042c75c  vspltw 2, 3, 0
  042c760  vspltw 3, 4, 0
  042c764  vcmpgefp. 3, 2, 3
  042c768  bt 26, 0x42c790
  042c76c  li 5, 32
  042c770  addi 6, 5, 16
  042c774  <unknown>
  042c778  <unknown>
  042c77c  vor 3, 3, 4
  042c780  vcfsx 3, 3, 0
  042c784  vspltw 3, 3, 0
  042c788  vcmpgtfp. 2, 2, 3
  042c78c  bt 26, 0x42c794
  042c790  li 30, 0
  042c794  lhz 5, 124(29)
  042c798  lhz 3, 116(29)
  042c79c  extsh 5, 5
  042c7a0  extsh 6, 3
  042c7a4  cmpw 5, 6
  042c7a8  bt 2, 0x42c880
  042c7ac  ori 5, 4, 0
  042c7b0  lbz 4, 82(5)
  042c7b4  lbz 5, 83(5)
  042c7b8  cmpwi 1, 4, 23
  042c7bc  cmpw 4, 5
  042c7c0  cmpwi 6, 4, 24
  042c7c4  cmpwi 7, 4, 25
  042c7c8  bf 2, 0x42c880
  042c7cc  bf 6, 0x42c7ec
  042c7d0  lwz 5, 2728(27)
  042c7d4  li 4, 0
  042c7d8  extsw 5, 5
  042c7dc  subc 4, 5, 4
  042c7e0  rldicl 4, 4, 1, 63
  042c7e4  xori 4, 4, 1
  042c7e8  b 0x42c86c
  042c7ec  bf 26, 0x42c80c
  042c7f0  lwz 5, 2728(27)
  042c7f4  li 4, 0
  042c7f8  extsw 5, 5
  042c7fc  subc 4, 5, 4
  042c800  rldicl 4, 4, 1, 63
  042c804  xori 4, 4, 1
  042c808  b 0x42c86c
  042c80c  bf 30, 0x42c83c
  042c810  lwz 5, 2728(27)
  042c814  lis 4, 16704
  042c818  srawi 6, 5, 31
  042c81c  srwi 7, 6, 1
  042c820  xor 5, 7, 5
  042c824  subc 5, 5, 6
  042c828  extsw 5, 5
  042c82c  subc 4, 5, 4
  042c830  rldicl 4, 4, 1, 63
  042c834  xori 4, 4, 1
  042c838  b 0x42c86c
  042c83c  cmpwi 4, 43
  042c840  bf 2, 0x42c880
  042c844  lwz 5, 2728(27)
  042c848  lis 4, 16824
  042c84c  srawi 6, 5, 31
  042c850  srwi 7, 6, 1
  042c854  xor 5, 7, 5
  042c858  subc 5, 5, 6
  042c85c  extsw 5, 5
  042c860  subc 4, 5, 4
  042c864  rldicl 4, 4, 1, 63
  042c868  xori 4, 4, 1
  042c86c  cmpwi 4, 0
  042c870  bt 2, 0x42c880
  042c874  lis 4, 16256
  042c878  stw 4, 112(29)
  042c87c  sth 3, 124(29)
  042c880  lis 3, 67
  042c884  lfs 31, 152(27)
  042c888  addic 29, 27, 2560
  042c88c  addi 3, 3, -16244
  042c890  li 4, 1
  042c894  ori 5, 29, 0
  042c898  lfs 30, 4(3)
  042c89c  lfs 1, 2560(27)
  042c8a0  lfs 2, 2564(27)
  042c8a4  ori 3, 31, 0
  042c8a8  stfs 1, 2592(27)
  042c8ac  fmr 23, 30
  042c8b0  lfs 1, 2568(27)
  042c8b4  stfs 2, 2596(27)
  042c8b8  lfs 2, 2572(27)
  042c8bc  stfs 1, 2600(27)
  042c8c0  lfs 1, 2544(27)
  042c8c4  stfs 2, 2604(27)
  042c8c8  lfs 2, 2548(27)
  042c8cc  stfs 1, 2576(27)
  042c8d0  lfs 1, 2552(27)
  042c8d4  stfs 2, 2580(27)
  042c8d8  lfs 2, 2556(27)
  042c8dc  stfs 1, 2584(27)
  042c8e0  stfs 2, 2588(27)
  042c8e4  bl 0xf1114
  042c8e8  nop
  042c8ec  addic 28, 27, 2544
  042c8f0  lwz 3, 8320(27)
  042c8f4  li 4, 0
  042c8f8  ori 5, 28, 0
  042c8fc  bl 0xf1114
  042c900  nop
  042c904  lwz 3, 8324(27)
  042c908  lfs 1, 2560(27)
  042c90c  lfs 2, 128(27)
  042c910  cmpwi 3, 19
  042c914  lfs 3, 2564(27)
  042c918  lfs 4, 132(27)
  042c91c  bt 2, 0x42c930
  042c920  cmpwi 3, 112
  042c924  bt 2, 0x42c930
  042c928  cmpwi 3, 43
  042c92c  bf 2, 0x42c9a0
  042c930  fsubs 1, 1, 2
  042c934  fsubs 2, 3, 4
  042c938  bl 0x5e8338
  042c93c  nop
  042c940  lwz 3, 2656(27)
  042c944  lis 4, 114
  042c948  sldi 5, 3, 4
  042c94c  addic 4, 4, 12672
  042c950  subc 3, 5, 3
  042c954  sldi 3, 3, 2
  042c958  subc 3, 3, 5
  042c95c  extsw 3, 3
  042c960  lwzx 3, 4, 3
  042c964  cmpwi 3, 1
  042c968  bf 2, 0x42c988
  042c96c  lis 3, 67
  042c970  addi 3, 3, -16244
  042c974  lfs 2, 36(3)
  042c978  bl 0x502578
  042c97c  nop
  042c980  fmr 31, 1
  042c984  b 0x42c9a0
  042c988  lis 3, 67
  042c98c  addi 3, 3, -16244
  042c990  lfs 2, 40(3)
  042c994  bl 0x502578
  042c998  nop
  042c99c  fmr 31, 1
  042c9a0  lfs 1, 2564(27)
  042c9a4  lfs 2, 2548(27)
  042c9a8  lfs 3, 2560(27)
  042c9ac  fsubs 1, 1, 2
  042c9b0  lfs 2, 2544(27)
  042c9b4  fsubs 2, 3, 2
  042c9b8  lfs 3, 2568(27)
  042c9bc  lfs 4, 2552(27)
  042c9c0  fsubs 3, 3, 4
  042c9c4  fmuls 4, 1, 1
  042c9c8  lis 3, 67
  042c9cc  addi 3, 3, -16244
  042c9d0  stfs 2, 144(1)
  042c9d4  stfs 1, 148(1)
  042c9d8  lfs 5, 2572(27)
  042c9dc  fmadds 4, 2, 2, 4
  042c9e0  stfs 3, 152(1)
  042c9e4  stfs 5, 156(1)
  042c9e8  lfs 5, 44(3)
  042c9ec  lwz 3, 8332(27)
  042c9f0  fmadds 4, 3, 3, 4
  042c9f4  cmpwi 3, 15
  042c9f8  fsqrts 4, 4
  042c9fc  fadds 5, 4, 5
  042ca00  fsub 6, 30, 4
  042ca04  fsub 7, 30, 4
  042ca08  fsub 8, 30, 4
  042ca0c  fsub 9, 4, 30
  042ca10  fsub 10, 4, 30
  042ca14  fdivs 5, 5, 4
  042ca18  fsub 4, 4, 30
  042ca1c  fmuls 2, 2, 5
  042ca20  fmuls 1, 1, 5
  042ca24  fmuls 3, 3, 5
  042ca28  fsel 5, 6, 30, 2
  042ca2c  fsel 6, 7, 30, 1
  042ca30  fsel 7, 8, 30, 3
  042ca34  fsel 2, 9, 5, 2
  042ca38  fsel 5, 10, 6, 1
  042ca3c  fsel 3, 4, 7, 3
  042ca40  fmr 1, 2
  042ca44  stfs 2, 144(1)
  042ca48  stfs 5, 148(1)
  042ca4c  stfs 3, 152(1)
  042ca50  bt 2, 0x42cad0
  042ca54  lwz 3, 8324(27)
  042ca58  fmr 1, 2
  042ca5c  cmpwi 3, 112
  042ca60  cmpwi 1, 3, 20
  042ca64  bt 2, 0x42cad0
  042ca68  fmr 1, 2
  042ca6c  bt 6, 0x42cad0
  042ca70  lfs 1, 2560(27)
  042ca74  lfs 2, 128(27)
  042ca78  lfs 3, 2564(27)
  042ca7c  fsubs 1, 1, 2
  042ca80  lfs 4, 132(27)
  042ca84  fsubs 2, 3, 4
  042ca88  bl 0x5e8338
  042ca8c  nop
  042ca90  lfs 3, 152(27)
  042ca94  fmr 2, 1
  042ca98  fmr 1, 3
  042ca9c  bl 0x5026a0
  042caa0  nop
  042caa4  fmr 30, 1
  042caa8  lis 3, 67
  042caac  addi 3, 3, -16244
  042cab0  lfs 1, 40(3)
  042cab4  fcmpu 0, 30, 1
  042cab8  cror 6, 0, 2
  042cabc  bt 6, 0x42cac4
  042cac0  li 30, 0
  042cac4  addic 3, 1, 144
  042cac8  bl 0x42be08
  042cacc  lfs 1, 144(1)
  042cad0  lfs 2, 2544(27)
  042cad4  lfs 3, 2548(27)
  042cad8  fadds 1, 2, 1
  042cadc  lfs 2, 148(1)
  042cae0  lfs 4, 2552(27)
  042cae4  fadds 2, 3, 2
  042cae8  lfs 3, 152(1)
  042caec  lwz 3, 8324(27)
  042caf0  fadds 3, 4, 3
  042caf4  lfs 4, 2556(27)
  042caf8  cmpwi 1, 3, 112
  042cafc  cmpwi 3, 43
  042cb00  stfs 4, 2572(27)
  042cb04  cror 2, 2, 6
  042cb08  stfs 1, 2560(27)
  042cb0c  stfs 2, 2564(27)
  042cb10  stfs 3, 2568(27)
  042cb14  bt 2, 0x42ce04
  042cb18  lis 3, 67
  042cb1c  addi 3, 3, -16244
  042cb20  lfs 1, 48(3)
  042cb24  fcmpu 0, 30, 1
  042cb28  cror 6, 1, 2
  042cb2c  bt 6, 0x42ce04
  042cb30  lis 3, 67
  042cb34  lis 4, 114
  042cb38  addi 3, 3, -16244
  042cb3c  lfs 1, 52(3)
  042cb40  lfs 2, -3056(4)
  042cb44  lwz 3, 408(27)
  042cb48  fmuls 1, 2, 1
  042cb4c  fctiwz 1, 1
  042cb50  stfd 1, 464(1)
  042cb54  lwz 4, 468(1)
  042cb58  cmpw 3, 4
  042cb5c  bf 1, 0x42ce04
  042cb60  lfs 1, 128(27)
  042cb64  lis 3, 67
  042cb68  lfs 2, 132(27)
  042cb6c  stfs 1, 160(1)
  042cb70  addi 26, 3, -16244
  042cb74  lfs 1, 136(27)
  042cb78  stfs 2, 164(1)
  042cb7c  lfs 2, 140(27)
  042cb80  stfs 1, 168(1)
  042cb84  stfs 2, 172(1)
  042cb88  lfs 22, 56(26)
  042cb8c  fadds 1, 1, 22
  042cb90  stfs 1, 168(1)
  042cb94  lfs 1, 2560(27)
  042cb98  lfs 2, 128(27)
  042cb9c  lfs 3, 2564(27)
  042cba0  lfs 4, 132(27)
  042cba4  fsubs 1, 1, 2
  042cba8  fsubs 2, 3, 4
  042cbac  bl 0x5e8338
  042cbb0  nop
  042cbb4  lfs 2, 128(27)
  042cbb8  lfs 3, 132(27)
  042cbbc  stfs 2, 176(1)
  042cbc0  lfs 2, 136(27)
  042cbc4  stfs 3, 180(1)
  042cbc8  stfs 2, 184(1)
  042cbcc  lfs 30, 60(26)
  042cbd0  lfs 29, 64(26)
  042cbd4  fadds 3, 1, 30
  042cbd8  fsubs 4, 29, 1
  042cbdc  lfs 28, 68(26)
  042cbe0  fsubs 8, 28, 1
  042cbe4  lfs 27, 72(26)
  042cbe8  lfs 26, 76(26)
  042cbec  fadds 2, 2, 22
  042cbf0  lfs 25, 80(26)
  042cbf4  addic 3, 1, 192
  042cbf8  lfs 24, 84(26)
  042cbfc  fsubs 5, 29, 3
  042cc00  fsub 7, 1, 4
  042cc04  fsubs 6, 28, 3
  042cc08  fsub 9, 3, 5
  042cc0c  fsel 1, 7, 4, 1
  042cc10  fsel 3, 9, 5, 3
  042cc14  fsub 4, 8, 1
  042cc18  fsub 5, 6, 3
  042cc1c  fsel 1, 4, 8, 1
  042cc20  fsel 3, 5, 6, 3
  042cc24  fmuls 4, 1, 1
  042cc28  fmuls 5, 3, 3
  042cc2c  fmuls 6, 4, 1
  042cc30  fmuls 7, 5, 3
  042cc34  fmuls 8, 4, 6
  042cc38  fmadds 1, 6, 27, 1
  042cc3c  fmuls 6, 5, 7
  042cc40  fmadds 3, 7, 27, 3
  042cc44  fmuls 7, 4, 8
  042cc48  fmadds 1, 8, 26, 1
  042cc4c  lfs 8, 88(26)
  042cc50  fmuls 9, 5, 6
  042cc54  fmadds 3, 6, 26, 3
  042cc58  fmuls 4, 4, 7
  042cc5c  lfs 6, 140(27)
  042cc60  fmadds 1, 7, 25, 1
  042cc64  stfs 23, 200(1)
  042cc68  stfs 2, 184(1)
  042cc6c  stfs 6, 188(1)
  042cc70  fmuls 5, 5, 9
  042cc74  fmadds 3, 9, 25, 3
  042cc78  fmadds 1, 4, 24, 1
  042cc7c  fmadds 3, 5, 24, 3
  042cc80  fmuls 1, 1, 8
  042cc84  fmuls 2, 3, 8
  042cc88  stfs 1, 196(1)
  042cc8c  stfs 2, 192(1)
  042cc90  bl 0x42be08
  042cc94  lfs 1, 176(1)
  042cc98  lfs 2, 192(1)
  042cc9c  lfs 3, 180(1)
  042cca0  fadds 1, 1, 2
  042cca4  lfs 2, 196(1)
  042cca8  lfs 4, 184(1)
  042ccac  fadds 2, 3, 2
  042ccb0  lfs 3, 200(1)
  042ccb4  lwz 3, 2660(27)
  042ccb8  fadds 3, 4, 3
  042ccbc  cmpwi 3, 0
  042ccc0  stfs 1, 176(1)
  042ccc4  stfs 2, 180(1)
  042ccc8  stfs 3, 184(1)
  042cccc  bf 2, 0x42ce04
  042ccd0  addic 3, 1, 160
  042ccd4  addic 4, 1, 176
  042ccd8  li 5, 2
  042ccdc  li 6, 0
  042cce0  li 7, 0
  042cce4  bl 0x57820
  042cce8  nop
  042ccec  cmpwi 3, 0
  042ccf0  bt 2, 0x42ce04
  042ccf4  bl 0x60780
  042ccf8  nop
  042ccfc  cmpwi 3, 0
  042cd00  bt 2, 0x42ce04
  042cd04  lis 26, 161
  042cd08  addic 26, 26, 2368
  042cd0c  lwz 3, 24(26)
  042cd10  cmpwi 3, 0
  042cd14  bt 2, 0x42cd28
  042cd18  bl 0x10ded0
  042cd1c  nop
  042cd20  cmpwi 3, 0
  042cd24  bt 2, 0x42ce04
  042cd28  li 3, 2
  042cd2c  li 4, 0
  042cd30  stw 25, 2660(27)
  042cd34  ori 5, 31, 0
  042cd38  bl 0x15d12c
  042cd3c  nop
  042cd40  ori 3, 31, 0
  042cd44  bl 0x42b640
  042cd48  lwz 3, 24(26)
  042cd4c  cmpwi 3, 0
  042cd50  bt 2, 0x42ce04
  042cd54  fadds 1, 31, 30
  042cd58  fsubs 2, 29, 31
  042cd5c  fsubs 3, 28, 31
  042cd60  lis 3, 67
  042cd64  stfs 23, 216(1)
  042cd68  addic 7, 26, 32
  042cd6c  addi 6, 3, -16244
  042cd70  lwz 3, 24(26)
  042cd74  addic 8, 1, 208
  042cd78  fsubs 4, 29, 1
  042cd7c  fsub 5, 31, 2
  042cd80  fsubs 6, 28, 1
  042cd84  ori 4, 31, 0
  042cd88  lis 5, 1
  042cd8c  fsub 7, 1, 4
  042cd90  fsel 2, 5, 2, 31
  042cd94  fsel 1, 7, 4, 1
  042cd98  fsub 4, 3, 2
  042cd9c  fsub 5, 6, 1
  042cda0  fsel 2, 4, 3, 2
  042cda4  fsel 1, 5, 6, 1
  042cda8  fmuls 3, 2, 2
  042cdac  fmuls 4, 1, 1
  042cdb0  fmuls 5, 3, 2
  042cdb4  fmuls 6, 4, 1
  042cdb8  fmuls 7, 3, 5
  042cdbc  fmadds 2, 5, 27, 2
  042cdc0  fmuls 5, 4, 6
  042cdc4  fmadds 1, 6, 27, 1
  042cdc8  fmuls 6, 3, 7
  042cdcc  fmadds 2, 7, 26, 2
  042cdd0  fmuls 7, 4, 5
  042cdd4  fmadds 1, 5, 26, 1
  042cdd8  fmuls 3, 3, 6
  042cddc  fmadds 2, 6, 25, 2
  042cde0  fmuls 4, 4, 7
  042cde4  fmadds 1, 7, 25, 1
  042cde8  fmadds 2, 3, 24, 2
  042cdec  fmadds 1, 4, 24, 1
  042cdf0  stfs 2, 212(1)
  042cdf4  stfs 1, 208(1)
  042cdf8  lfs 1, 0(6)
  042cdfc  bl 0x105c08
  042ce00  nop
  042ce04  lwz 3, 8324(27)
  042ce08  cmpwi 3, 20
  042ce0c  bf 2, 0x42ced4
  042ce10  lis 3, 67
  042ce14  addi 3, 3, -16244
  042ce18  lfs 1, 92(3)
  042ce1c  bl 0x80c4c
  042ce20  nop
  042ce24  cmpwi 3, 0
  042ce28  bt 2, 0x42ced4
  042ce2c  li 3, 2
  042ce30  li 4, 0
  042ce34  ori 5, 31, 0
  042ce38  bl 0x15d12c
  042ce3c  nop
  042ce40  lfs 1, 2560(27)
  042ce44  lis 3, 67
  042ce48  lfs 2, 2564(27)
  042ce4c  addic 26, 1, 224
  042ce50  stfs 1, 224(1)
  042ce54  addi 24, 3, -16244
  042ce58  lfs 3, 2568(27)
  042ce5c  ori 3, 26, 0
  042ce60  stfs 2, 228(1)
  042ce64  ori 4, 26, 0
  042ce68  lfs 4, 2572(27)
  042ce6c  stfs 3, 232(1)
  042ce70  stfs 4, 236(1)
  042ce74  stfs 1, 240(1)
  042ce78  stfs 2, 244(1)
  042ce7c  stfs 3, 248(1)
  042ce80  stfs 4, 252(1)
  042ce84  lfs 1, 96(24)
  042ce88  bl 0x7d0f4
  042ce8c  nop
  042ce90  addic 23, 1, 240
  042ce94  lfs 1, 100(24)
  042ce98  ori 3, 23, 0
  042ce9c  ori 4, 23, 0
  042cea0  bl 0x7d0f4
  042cea4  nop
  042cea8  ori 3, 26, 0
  042ceac  ori 4, 23, 0
  042ceb0  li 5, 2
  042ceb4  li 6, 0
  042ceb8  li 7, 0
  042cebc  bl 0x57820
  042cec0  nop
  042cec4  cmpwi 3, 0
  042cec8  bt 2, 0x42ced4
  042cecc  ori 3, 31, 0
  042ced0  bl 0x42b640
  042ced4  cmpwi 30, 0
  042ced8  bt 2, 0x42de0c
  042cedc  lis 3, 67
  042cee0  lwz 5, 8324(27)
  042cee4  addi 4, 3, -16244
  042cee8  cmpwi 5, 20
  042ceec  ori 3, 25, 0
  042cef0  lfs 30, 0(4)
  042cef4  fmr 29, 30
  042cef8  bf 2, 0x42cf0c
  042cefc  lis 4, 67
  042cf00  li 3, 2
  042cf04  addi 4, 4, -16244
  042cf08  lfs 30, 104(4)
  042cf0c  lis 4, 67
  042cf10  addi 4, 4, -16244
  042cf14  extsw 3, 3
  042cf18  lfs 1, 60(4)
  042cf1c  lfs 2, 64(4)
  042cf20  fadds 1, 31, 1
  042cf24  fsubs 4, 2, 31
  042cf28  lfs 3, 68(4)
  042cf2c  addic 30, 1, 368
  042cf30  addic 7, 1, 256
  042cf34  lis 5, 1
  042cf38  fsubs 2, 2, 1
  042cf3c  fsub 6, 31, 4
  042cf40  fsubs 5, 3, 1
  042cf44  fsubs 3, 3, 31
  042cf48  fsub 7, 1, 2
  042cf4c  fsel 4, 6, 4, 31
  042cf50  fsel 1, 7, 2, 1
  042cf54  fsub 6, 3, 4
  042cf58  lfs 2, 72(4)
  042cf5c  fsub 7, 5, 1
  042cf60  fsel 3, 6, 3, 4
  042cf64  lfs 4, 76(4)
  042cf68  fsel 1, 7, 5, 1
  042cf6c  fmuls 6, 3, 3
  042cf70  lfs 5, 80(4)
  042cf74  lfs 7, 84(4)
  042cf78  std 3, 464(1)
  042cf7c  ori 3, 30, 0
  042cf80  ori 4, 31, 0
  042cf84  fmuls 8, 1, 1
  042cf88  fmuls 9, 6, 3
  042cf8c  fmuls 10, 8, 1
  042cf90  fmuls 11, 6, 9
  042cf94  fmadds 3, 9, 2, 3
  042cf98  fmuls 9, 8, 10
  042cf9c  fmadds 1, 10, 2, 1
  042cfa0  fmuls 2, 6, 11
  042cfa4  fmadds 3, 11, 4, 3
  042cfa8  fmuls 10, 8, 9
  042cfac  fmadds 1, 9, 4, 1
  042cfb0  fmuls 4, 6, 2
  042cfb4  fmadds 2, 2, 5, 3
  042cfb8  fmuls 3, 8, 10
  042cfbc  fmadds 1, 10, 5, 1
  042cfc0  lfd 5, 464(1)
  042cfc4  fmadds 2, 4, 7, 2
  042cfc8  stfs 23, 264(1)
  042cfcc  fcfid 4, 5
  042cfd0  fmadds 3, 3, 7, 1
  042cfd4  frsp 1, 4
  042cfd8  stfs 2, 260(1)
  042cfdc  stfs 3, 256(1)
  042cfe0  bl 0x10581c
  042cfe4  nop
  042cfe8  lfs 1, 372(1)
  042cfec  lfs 2, 368(1)
  042cff0  fmuls 3, 1, 1
  042cff4  lis 3, 17839
  042cff8  stfs 29, 376(1)
  042cffc  li 26, 0
  042d000  stb 25, 393(1)
  042d004  ori 4, 3, 57190
  042d008  fmadds 3, 2, 2, 3
  042d00c  stb 26, 392(1)
  042d010  ori 3, 28, 0
  042d014  stw 4, 380(1)
  042d018  addic 5, 27, 2576
  042d01c  lhz 7, 166(31)
  042d020  addic 6, 27, 2592
  042d024  lwz 10, 8320(27)
  042d028  ori 4, 29, 0
  042d02c  fsqrts 3, 3
  042d030  sth 7, 394(1)
  042d034  ori 8, 30, 0
  042d038  li 9, 5
  042d03c  ori 7, 10, 0
  042d040  fdivs 4, 30, 3
  042d044  fsub 5, 23, 3
  042d048  fsub 6, 23, 3
  042d04c  fsub 7, 3, 23
  042d050  fsub 3, 3, 23
  042d054  fmuls 2, 2, 4
  042d058  fmuls 1, 1, 4
  042d05c  fsel 4, 5, 23, 2
  042d060  fsel 5, 6, 23, 1
  042d064  fsel 2, 7, 4, 2
  042d068  fsel 1, 3, 5, 1
  042d06c  stfs 2, 368(1)
  042d070  stfs 1, 372(1)
  042d074  bl 0x105d58
  042d078  nop
  042d07c  cmpwi 3, 0
  042d080  ori 29, 26, 0
  042d084  bt 2, 0x42d16c
  042d088  lis 30, 161
  042d08c  li 29, 0
  042d090  addic 30, 30, 2368
  042d094  lwz 3, 24(30)
  042d098  cmpwi 3, 0
  042d09c  bt 2, 0x42d16c
  042d0a0  bl 0xfcccc
  042d0a4  nop
  042d0a8  ori 5, 3, 0
  042d0ac  lwz 3, 2660(27)
  042d0b0  cmpwi 5, 0
  042d0b4  lwz 4, 24(30)
  042d0b8  bt 2, 0x42d0d4
  042d0bc  lhz 5, 30(5)
  042d0c0  rlwinm 5, 5, 0, 30, 30
  042d0c4  cmpwi 5, 0
  042d0c8  bt 2, 0x42d0d4
  042d0cc  ori 29, 25, 0
  042d0d0  b 0x42d16c
  042d0d4  cmpwi 3, 0
  042d0d8  li 29, 0
  042d0dc  bf 2, 0x42d16c
  042d0e0  cmpwi 4, 0
  042d0e4  li 3, 0
  042d0e8  bt 2, 0x42d104
  042d0ec  lwz 5, 36(4)
  042d0f0  li 3, 0
  042d0f4  cmpwi 5, 0
  042d0f8  bt 2, 0x42d104
  042d0fc  lhz 3, 70(5)
  042d100  extsh 3, 3
  042d104  cmpwi 3, 20
  042d108  li 29, 0
  042d10c  bt 2, 0x42d16c
  042d110  cmpwi 4, 0
  042d114  li 3, 0
  042d118  stw 25, 2660(27)
  042d11c  bt 2, 0x42d12c
  042d120  ori 3, 4, 0
  042d124  bl 0xfcccc
  042d128  nop
  042d12c  cmpwi 3, 0
  042d130  li 29, 0
  042d134  bt 2, 0x42d14c
  042d138  lbz 3, 9(3)
  042d13c  li 29, 0
  042d140  cmpwi 3, 1
  042d144  bf 2, 0x42d14c
  042d148  ori 29, 25, 0
  042d14c  ori 3, 29, 0
  042d150  li 4, 0
  042d154  ori 5, 31, 0
  042d158  bl 0x15d12c
  042d15c  nop
  042d160  ori 3, 31, 0
  042d164  bl 0x42b640
  042d168  li 29, 0
  042d16c  lfs 1, 2564(27)
  042d170  lfs 2, 2548(27)
  042d174  lfs 3, 2560(27)
  042d178  fsubs 1, 1, 2
  042d17c  lfs 4, 2544(27)
  042d180  lfs 5, 2568(27)
  042d184  fsubs 3, 3, 4
  042d188  lfs 6, 2552(27)
  042d18c  fsubs 5, 5, 6
  042d190  lis 3, 67
  042d194  fmuls 7, 1, 1
  042d198  addi 3, 3, -16244
  042d19c  lfs 8, 108(3)
  042d1a0  fmadds 7, 3, 3, 7
  042d1a4  lfs 9, 2572(27)
  042d1a8  stfs 9, 284(1)
  042d1ac  lwz 4, 8332(27)
  042d1b0  fmadds 7, 5, 5, 7
  042d1b4  cmpwi 4, 15
  042d1b8  lwz 5, 8324(27)
  042d1bc  cmpwi 1, 5, 20
  042d1c0  fsqrts 7, 7
  042d1c4  fsubs 8, 7, 8
  042d1c8  fsub 9, 23, 7
  042d1cc  fsub 10, 23, 7
  042d1d0  fsub 11, 23, 7
  042d1d4  fsub 12, 7, 23
  042d1d8  fsub 13, 7, 23
  042d1dc  fdivs 8, 8, 7
  042d1e0  fsub 7, 7, 23
  042d1e4  fmuls 5, 8, 5
  042d1e8  fmuls 1, 8, 1
  042d1ec  fmuls 3, 8, 3
  042d1f0  fsel 8, 9, 23, 5
  042d1f4  fsel 9, 10, 23, 1
  042d1f8  fsel 10, 11, 23, 3
  042d1fc  fsel 5, 12, 8, 5
  042d200  fsel 1, 13, 9, 1
  042d204  fsel 3, 7, 10, 3
  042d208  fadds 5, 5, 6
  042d20c  fadds 1, 1, 2
  042d210  fadds 2, 3, 4
  042d214  stfs 5, 280(1)
  042d218  stfs 1, 276(1)
  042d21c  stfs 2, 272(1)
  042d220  lfs 23, 112(3)
  042d224  lwz 3, 8320(27)
  042d228  bf 2, 0x42d238
  042d22c  lis 4, 67
  042d230  addi 4, 4, -16244
  042d234  lfs 23, 96(4)
  042d238  bf 6, 0x42d248
  042d23c  lis 4, 67
  042d240  addi 4, 4, -16244
  042d244  lfs 23, 116(4)
  042d248  ori 6, 3, 0
  042d24c  fmr 1, 23
  042d250  addic 3, 1, 272
  042d254  addic 7, 1, 368
  042d258  li 5, 0
  042d25c  bl 0x5e598
  042d260  nop
  042d264  cmpwi 3, 0
  042d268  bt 2, 0x42d32c
  042d26c  lis 3, 161
  042d270  lwz 3, 18944(3)
  042d274  cmpwi 3, 0
  042d278  bt 2, 0x42d298
  042d27c  lwz 3, 36(3)
  042d280  cmpwi 3, 0
  042d284  bt 2, 0x42d298
  042d288  lhz 3, 70(3)
  042d28c  extsh 3, 3
  042d290  cmpwi 3, 18
  042d294  bt 2, 0x42d32c
  042d298  lis 3, 161
  042d29c  addic 30, 3, 2368
  042d2a0  lwz 3, 24(30)
  042d2a4  bl 0xfcccc
  042d2a8  nop
  042d2ac  cmpwi 3, 0
  042d2b0  lwz 4, 2660(27)
  042d2b4  lwz 5, 24(30)
  042d2b8  bt 2, 0x42d2cc
  042d2bc  lhz 3, 30(3)
  042d2c0  rlwinm 3, 3, 0, 30, 30
  042d2c4  cmpwi 3, 0
  042d2c8  bf 2, 0x42d334
  042d2cc  cmpwi 4, 0
  042d2d0  bf 2, 0x42d32c
  042d2d4  cmpwi 5, 0
  042d2d8  li 3, 0
  042d2dc  stw 25, 2660(27)
  042d2e0  bt 2, 0x42d2f0
  042d2e4  ori 3, 5, 0
  042d2e8  bl 0xfcccc
  042d2ec  nop
  042d2f0  cmpwi 3, 0
  042d2f4  li 4, 0
  042d2f8  bt 2, 0x42d310
  042d2fc  lbz 3, 9(3)
  042d300  li 4, 0
  042d304  cmpwi 3, 1
  042d308  bf 2, 0x42d310
  042d30c  ori 4, 25, 0
  042d310  ori 3, 4, 0
  042d314  li 4, 0
  042d318  ori 5, 31, 0
  042d31c  bl 0x15d12c
  042d320  nop
  042d324  ori 3, 31, 0
  042d328  bl 0x42b640
  042d32c  cmpwi 29, 0
  042d330  bt 2, 0x42de0c
  042d334  li 3, 33
  042d338  li 4, 1
  042d33c  bl 0xb72b0
  042d340  nop
  042d344  lis 3, 161
  042d348  addic 3, 3, 2368
  042d34c  lwz 3, 24(3)
  042d350  cmpwi 3, 0
  042d354  bt 2, 0x42d37c
  042d358  lfs 1, 128(27)
  042d35c  lfs 2, 16(3)
  042d360  lfs 3, 132(27)
  042d364  lfs 4, 20(3)
  042d368  fsubs 1, 1, 2
  042d36c  fsubs 2, 3, 4
  042d370  bl 0x5e8338
  042d374  nop
  042d378  b 0x42d394
  042d37c  lis 3, 67
  042d380  lfs 1, 152(27)
  042d384  addi 3, 3, -16244
  042d388  lfs 2, 120(3)
  042d38c  bl 0x502578
  042d390  nop
  042d394  stfs 1, 2664(27)
  042d398  b 0x42de0c
  042d39c  addic 28, 27, 6064
  042d3a0  li 4, 0
  042d3a4  ori 3, 28, 0
  042d3a8  bl 0x115560
  042d3ac  nop
  042d3b0  li 4, 2
  042d3b4  lwz 3, 8320(27)
  042d3b8  stw 3, 184(31)
  042d3bc  stb 4, 4268(27)
  042d3c0  lbz 4, 32(31)
  042d3c4  cmpwi 4, 10
  042d3c8  bf 2, 0x42d3f0
  042d3cc  lwz 4, 8732(27)
  042d3d0  cmpwi 4, -1
  042d3d4  bf 2, 0x42d3f0
  042d3d8  ori 5, 3, 0
  042d3dc  li 3, 14
  042d3e0  li 4, 4
  042d3e4  bl 0x15d12c
  042d3e8  nop
  042d3ec  stw 3, 8732(27)
  042d3f0  lis 3, 67
  042d3f4  lis 4, 114
  042d3f8  addi 3, 3, -16244
  042d3fc  lfs 31, 4(3)
  042d400  lfs 2, 124(3)
  042d404  lfs 3, -3052(4)
  042d408  ori 3, 31, 0
  042d40c  fmr 1, 31
  042d410  fmuls 3, 3, 2
  042d414  fmr 2, 31
  042d418  bl 0x11530c
  042d41c  nop
  042d420  lwz 3, 2660(27)
  042d424  cmpwi 3, 0
  042d428  bt 2, 0x42d448
  042d42c  addic 3, 29, 108
  042d430  bl 0x4fff60
  042d434  nop
  042d438  cmpwi 3, 0
  042d43c  bt 2, 0x42d448
  042d440  li 3, 0
  042d444  stw 3, 2660(27)
  042d448  lbz 3, 8371(27)
  042d44c  cmpwi 3, 0
  042d450  bf 2, 0x42d4dc
  042d454  lis 3, 67
  042d458  li 4, 0
  042d45c  addi 30, 3, -16244
  042d460  addic 3, 31, 16
  042d464  lfs 1, 56(30)
  042d468  bl 0xffb70
  042d46c  nop
  042d470  lfs 2, 24(31)
  042d474  lfs 3, 128(30)
  042d478  fsubs 4, 2, 1
  042d47c  fcmpu 0, 4, 3
  042d480  cror 6, 1, 2
  042d484  bt 6, 0x42d4dc
  042d488  lis 3, 67
  042d48c  addi 4, 3, -16244
  042d490  addic 3, 31, 24
  042d494  lfs 3, 132(4)
  042d498  fadds 1, 1, 3
  042d49c  fcmpu 0, 2, 1
  042d4a0  cror 6, 1, 2
  042d4a4  bt 6, 0x42d4cc
  042d4a8  lis 4, 67
  042d4ac  lis 5, 114
  042d4b0  addi 4, 4, -16244
  042d4b4  lfs 2, 136(4)
  042d4b8  lfs 3, -3052(5)
  042d4bc  fmuls 2, 3, 2
  042d4c0  bl 0x109af0
  042d4c4  nop
  042d4c8  b 0x42d4dc
  042d4cc  lis 4, 114
  042d4d0  lfs 2, -3052(4)
  042d4d4  bl 0x109af0
  042d4d8  nop
  042d4dc  lfs 1, 16(31)
  042d4e0  lfs 2, 20(31)
  042d4e4  stfs 1, 288(1)
  042d4e8  lfs 3, 24(31)
  042d4ec  stfs 2, 292(1)
  042d4f0  lfs 4, 28(31)
  042d4f4  lbz 3, 32(31)
  042d4f8  stfs 3, 296(1)
  042d4fc  cmpwi 3, 10
  042d500  stfs 4, 300(1)
  042d504  bf 2, 0x42d5f0
  042d508  lis 3, 67
  042d50c  lfs 4, 320(27)
  042d510  addi 4, 3, -16244
  042d514  lfs 5, 96(4)
  042d518  lfs 6, 324(27)
  042d51c  lfs 7, 328(27)
  042d520  fmadds 4, 4, 5, 1
  042d524  fmadds 2, 6, 5, 2
  042d528  fmadds 3, 7, 5, 3
  042d52c  lis 5, 114
  042d530  stfs 4, 16(31)
  042d534  stfs 2, 20(31)
  042d538  stfs 3, 24(31)
  042d53c  lfs 5, 68(29)
  042d540  lfs 6, 64(29)
  042d544  fmuls 1, 5, 5
  042d548  lfs 7, 72(29)
  042d54c  lfs 9, 96(29)
  042d550  addic 3, 29, 96
  042d554  fmadds 1, 6, 6, 1
  042d558  fmadds 1, 7, 7, 1
  042d55c  fsqrts 8, 1
  042d560  fmr 1, 31
  042d564  fdivs 9, 9, 8
  042d568  fsub 10, 31, 8
  042d56c  fsub 11, 31, 8
  042d570  fsub 12, 31, 8
  042d574  fsub 13, 8, 31
  042d578  fsub 0, 8, 31
  042d57c  fsub 8, 8, 31
  042d580  fmuls 7, 7, 9
  042d584  fmuls 5, 5, 9
  042d588  fmuls 6, 6, 9
  042d58c  fsel 9, 10, 31, 7
  042d590  fsel 10, 11, 31, 5
  042d594  fsel 11, 12, 31, 6
  042d598  fsel 7, 13, 9, 7
  042d59c  fsel 5, 0, 10, 5
  042d5a0  fsel 6, 8, 11, 6
  042d5a4  fadds 3, 3, 7
  042d5a8  fadds 2, 2, 5
  042d5ac  fadds 4, 4, 6
  042d5b0  stfs 3, 24(31)
  042d5b4  stfs 2, 20(31)
  042d5b8  stfs 4, 16(31)
  042d5bc  lfs 2, 140(4)
  042d5c0  lfs 3, 100(29)
  042d5c4  lfs 4, -3044(5)
  042d5c8  fmadds 2, 4, 2, 3
  042d5cc  stfs 2, 100(29)
  042d5d0  bl 0x109af0
  042d5d4  nop
  042d5d8  lwz 3, 96(29)
  042d5dc  cmpwi 3, 0
  042d5e0  bf 2, 0x42d870
  042d5e4  li 3, 11
  042d5e8  stb 3, 32(31)
  042d5ec  b 0x42d870
  042d5f0  ori 3, 31, 0
  042d5f4  bl 0x42bc38
  042d5f8  lfs 29, 4212(27)
  042d5fc  lfs 1, 20(31)
  042d600  lfs 30, 4208(27)
  042d604  fsubs 29, 29, 1
  042d608  lfs 1, 16(31)
  042d60c  lfs 28, 4216(27)
  042d610  fsubs 30, 30, 1
  042d614  lfs 1, 24(31)
  042d618  fsubs 28, 28, 1
  042d61c  lis 3, 67
  042d620  lis 4, 114
  042d624  fmuls 1, 29, 29
  042d628  addi 3, 3, -16244
  042d62c  lfs 2, 144(3)
  042d630  lfs 3, 100(29)
  042d634  fmadds 1, 30, 30, 1
  042d638  fmadds 27, 28, 28, 1
  042d63c  lfs 1, -3048(4)
  042d640  fmadds 2, 1, 2, 3
  042d644  lis 4, 114
  042d648  lfs 1, 96(29)
  042d64c  fsqrts 27, 27
  042d650  stfs 2, 100(29)
  042d654  fadds 2, 1, 2
  042d658  stfs 2, 96(29)
  042d65c  lfs 1, 16(3)
  042d660  lfs 3, -3056(4)
  042d664  fmuls 1, 3, 1
  042d668  fmr 3, 1
  042d66c  fctidz 3, 3
  042d670  fdivs 4, 27, 2
  042d674  fcfid 3, 3
  042d678  frsp 3, 3
  042d67c  fcmpu 0, 4, 3
  042d680  cror 6, 1, 2
  042d684  bt 6, 0x42d6bc
  042d688  lbz 3, 83(31)
  042d68c  cmpwi 3, 1
  042d690  bt 2, 0x42d6bc
  042d694  fctiwz 1, 1
  042d698  ori 3, 31, 0
  042d69c  li 4, 1
  042d6a0  li 5, 0
  042d6a4  stfd 1, 464(1)
  042d6a8  lwz 6, 468(1)
  042d6ac  extsw 6, 6
  042d6b0  bl 0xfddc0
  042d6b4  nop
  042d6b8  lfs 2, 96(29)
  042d6bc  fcmpu 0, 2, 27
  042d6c0  li 30, 0
  042d6c4  bt 0, 0x42d6d4
  042d6c8  fmr 2, 27
  042d6cc  li 30, 1
  042d6d0  stfs 27, 96(29)
  042d6d4  fdivs 1, 2, 27
  042d6d8  lfs 2, 16(31)
  042d6dc  lfs 3, 20(31)
  042d6e0  lfs 4, 24(31)
  042d6e4  lis 3, 67
  042d6e8  lis 4, 114
  042d6ec  addi 3, 3, -16244
  042d6f0  fsub 5, 31, 27
  042d6f4  fsub 6, 31, 27
  042d6f8  fsub 7, 31, 27
  042d6fc  fsub 8, 27, 31
  042d700  fsub 9, 27, 31
  042d704  fsub 10, 27, 31
  042d708  fmuls 11, 1, 28
  042d70c  fmuls 12, 1, 29
  042d710  fmuls 1, 1, 30
  042d714  fsel 5, 5, 31, 11
  042d718  fsel 6, 6, 31, 12
  042d71c  fsel 7, 7, 31, 1
  042d720  fsel 5, 8, 5, 11
  042d724  fsel 6, 9, 6, 12
  042d728  fsel 1, 10, 7, 1
  042d72c  fadds 4, 4, 5
  042d730  fadds 3, 3, 6
  042d734  fadds 1, 2, 1
  042d738  stfs 4, 24(31)
  042d73c  stfs 3, 20(31)
  042d740  stfs 1, 16(31)
  042d744  lfs 1, 96(29)
  042d748  lfs 2, 20(3)
  042d74c  fdivs 1, 27, 1
  042d750  lfs 3, -3056(4)
  042d754  fmuls 2, 3, 2
  042d758  fctidz 2, 2
  042d75c  fcfid 2, 2
  042d760  frsp 2, 2
  042d764  fcmpu 0, 1, 2
  042d768  cror 6, 1, 2
  042d76c  bt 6, 0x42d7e8
  042d770  lwz 3, 2736(27)
  042d774  cmpwi 3, -1
  042d778  bt 2, 0x42d7e8
  042d77c  li 3, 2
  042d780  bl 0xaa000
  042d784  nop
  042d788  li 4, 26
  042d78c  lwz 3, 8732(27)
  042d790  cmpwi 3, -1
  042d794  stw 4, 2740(27)
  042d798  bt 2, 0x42d7e0
  042d79c  sldi 4, 3, 7
  042d7a0  sldi 6, 3, 4
  042d7a4  lis 5, 150
  042d7a8  subc 4, 4, 6
  042d7ac  addic 5, 5, 14176
  042d7b0  extsw 4, 4
  042d7b4  lwz 6, 8320(27)
  042d7b8  addc 4, 5, 4
  042d7bc  lwz 5, 136(4)
  042d7c0  cmpw 5, 6
  042d7c4  bf 2, 0x42d7e0
  042d7c8  lbz 4, 116(4)
  042d7cc  cmpwi 4, 0
  042d7d0  bt 2, 0x42d7e0
  042d7d4  extsw 3, 3
  042d7d8  bl 0x15cdb0
  042d7dc  nop
  042d7e0  li 3, -1
  042d7e4  stw 3, 8732(27)
  042d7e8  cmpwi 30, 0
  042d7ec  bt 2, 0x42d870
  042d7f0  li 3, 5
  042d7f4  li 4, 0
  042d7f8  bl 0x816ec
  042d7fc  nop
  042d800  lwz 3, 8732(27)
  042d804  cmpwi 3, -1
  042d808  bt 2, 0x42d850
  042d80c  sldi 4, 3, 7
  042d810  sldi 6, 3, 4
  042d814  lis 5, 150
  042d818  subc 4, 4, 6
  042d81c  addic 5, 5, 14176
  042d820  extsw 4, 4
  042d824  lwz 6, 8320(27)
  042d828  addc 4, 5, 4
  042d82c  lwz 5, 136(4)
  042d830  cmpw 5, 6
  042d834  bf 2, 0x42d850
  042d838  lbz 4, 116(4)
  042d83c  cmpwi 4, 0
  042d840  bt 2, 0x42d850
  042d844  extsw 3, 3
  042d848  bl 0x15cdb0
  042d84c  nop
  042d850  li 4, -1
  042d854  ori 3, 28, 0
  042d858  stw 4, 8732(27)
  042d85c  bl 0x1154c8
  042d860  nop
  042d864  li 3, 0
  042d868  stb 3, 4266(27)
  042d86c  stb 3, 32(31)
  042d870  addic 3, 1, 288
  042d874  addic 4, 31, 16
  042d878  li 5, 2
  042d87c  li 6, 0
  042d880  li 7, 0
  042d884  bl 0x57820
  042d888  nop
  042d88c  cmpwi 3, 0
  042d890  bt 2, 0x42d8d4
  042d894  bl 0x60780
  042d898  nop
  042d89c  cmpwi 3, 0
  042d8a0  bt 2, 0x42d8d4
  042d8a4  lis 30, 161
  042d8a8  addic 30, 30, 2368
  042d8ac  lwz 3, 24(30)
  042d8b0  cmpwi 3, 0
  042d8b4  bt 2, 0x42d8c8
  042d8b8  bl 0x10af88
  042d8bc  nop
  042d8c0  cmpwi 3, 0
  042d8c4  bf 2, 0x42d8d4
  042d8c8  lwz 3, 28(30)
  042d8cc  cmpwi 3, 0
  042d8d0  bf 2, 0x42d8e0
  042d8d4  lhz 3, 118(29)
  042d8d8  cmpwi 3, 0
  042d8dc  bt 2, 0x42d980
  042d8e0  li 3, 0
  042d8e4  lwz 4, 2660(27)
  042d8e8  cmpwi 4, 0
  042d8ec  sth 3, 118(29)
  042d8f0  bf 2, 0x42d94c
  042d8f4  lis 3, 67
  042d8f8  li 4, 148
  042d8fc  vspltisw 2, -1
  042d900  addi 3, 3, -16244
  042d904  lis 5, 114
  042d908  li 6, -3056
  042d90c  vslw 2, 2, 2
  042d910  <unknown>
  042d914  li 7, 1
  042d918  vspltw 3, 3, 0
  042d91c  <unknown>
  042d920  li 6, 108
  042d924  vmaddfp 2, 4, 3, 2
  042d928  li 3, 2
  042d92c  li 4, 0
  042d930  ori 5, 31, 0
  042d934  vctsxs 2, 2, 0
  042d938  vspltw 2, 2, 0
  042d93c  stvewx 2, 6, 29
  042d940  stw 7, 2660(27)
  042d944  bl 0x15d12c
  042d948  nop
  042d94c  lbz 3, 32(31)
  042d950  cmpwi 3, 10
  042d954  bf 2, 0x42d980
  042d958  ori 3, 31, 0
  042d95c  bl 0x42b640
  042d960  lis 3, 67
  042d964  lfs 1, 96(29)
  042d968  addi 3, 3, -16244
  042d96c  lfs 2, 56(3)
  042d970  li 3, 11
  042d974  fmuls 1, 1, 2
  042d978  stfs 1, 96(29)
  042d97c  stb 3, 32(31)
  042d980  lis 3, 67
  042d984  lbz 4, 32(31)
  042d988  addi 3, 3, -16244
  042d98c  cmpwi 4, 11
  042d990  lfs 30, 152(3)
  042d994  bf 2, 0x42d9a4
  042d998  lis 3, 67
  042d99c  addi 3, 3, -16244
  042d9a0  lfs 30, 156(3)
  042d9a4  lfs 1, 68(29)
  042d9a8  lfs 2, 64(29)
  042d9ac  fmuls 1, 1, 1
  042d9b0  lfs 3, 72(29)
  042d9b4  fmadds 1, 2, 2, 1
  042d9b8  fmadds 1, 3, 3, 1
  042d9bc  fsqrts 1, 1
  042d9c0  fcmpu 0, 1, 31
  042d9c4  bf 2, 0x42d9f4
  042d9c8  stfs 2, 304(1)
  042d9cc  lfs 1, 68(29)
  042d9d0  li 3, 0
  042d9d4  stfs 1, 308(1)
  042d9d8  lfs 1, 72(29)
  042d9dc  stfs 1, 312(1)
  042d9e0  lfs 30, 76(29)
  042d9e4  stw 3, 312(1)
  042d9e8  stw 3, 308(1)
  042d9ec  stw 3, 304(1)
  042d9f0  b 0x42da1c
  042d9f4  fdivs 1, 30, 1
  042d9f8  fmuls 2, 2, 1
  042d9fc  stfs 2, 304(1)
  042da00  lfs 2, 68(29)
  042da04  fmuls 2, 2, 1
  042da08  stfs 2, 308(1)
  042da0c  lfs 2, 72(29)
  042da10  fmuls 1, 2, 1
  042da14  stfs 1, 312(1)
  042da18  lfs 30, 76(29)
  042da1c  lis 3, 67
  042da20  stfs 30, 316(1)
  042da24  addic 28, 1, 416
  042da28  addi 30, 3, -16244
  042da2c  ori 4, 31, 0
  042da30  addic 7, 1, 304
  042da34  ori 3, 28, 0
  042da38  lis 5, 1
  042da3c  lfs 1, 0(30)
  042da40  bl 0x10581c
  042da44  nop
  042da48  li 4, 0
  042da4c  lis 5, 16256
  042da50  lwz 6, 2684(27)
  042da54  lis 3, 17839
  042da58  addic 26, 1, 320
  042da5c  ori 3, 3, 57190
  042da60  stb 4, 440(1)
  042da64  li 4, 1
  042da68  stw 5, 424(1)
  042da6c  addic 5, 6, 1
  042da70  stw 3, 428(1)
  042da74  stb 4, 441(1)
  042da78  ori 3, 31, 0
  042da7c  sth 5, 442(1)
  042da80  li 4, 1
  042da84  ori 5, 26, 0
  042da88  bl 0xf1114
  042da8c  nop
  042da90  lfs 30, 160(30)
  042da94  ori 3, 26, 0
  042da98  lwz 6, 8320(27)
  042da9c  li 5, 0
  042daa0  fmr 1, 30
  042daa4  ori 7, 28, 0
  042daa8  bl 0x5e598
  042daac  nop
  042dab0  cmpwi 3, 0
  042dab4  bf 2, 0x42daec
  042dab8  addic 30, 1, 320
  042dabc  ori 3, 31, 0
  042dac0  ori 5, 30, 0
  042dac4  li 4, 0
  042dac8  bl 0xf1114
  042dacc  nop
  042dad0  addic 7, 1, 416
  042dad4  lwz 6, 8320(27)
  042dad8  ori 3, 30, 0
  042dadc  fmr 1, 30
  042dae0  li 5, 0
  042dae4  bl 0x5e598
  042dae8  nop
  042daec  cmpwi 3, 0
  042daf0  bt 2, 0x42de0c
  042daf4  lwz 3, 2660(27)
  042daf8  cmpwi 3, 0
  042dafc  bf 2, 0x42de0c
  042db00  lis 28, 161
  042db04  addic 28, 28, 2368
  042db08  lwz 3, 24(28)
  042db0c  cmpwi 3, 0
  042db10  bt 2, 0x42de0c
  042db14  lwz 4, 36(3)
  042db18  cmpwi 4, 0
  042db1c  bt 2, 0x42db30
  042db20  lhz 4, 70(4)
  042db24  extsh 4, 4
  042db28  cmpwi 4, 20
  042db2c  bt 2, 0x42de0c
  042db30  bl 0xfcccc
  042db34  nop
  042db38  lfs 30, 320(1)
  042db3c  lfs 1, 324(1)
  042db40  cmpwi 3, 0
  042db44  lfs 2, 328(1)
  042db48  lfs 3, 332(1)
  042db4c  bt 2, 0x42db74
  042db50  lhz 4, 28(3)
  042db54  extsh 4, 4
  042db58  cmpwi 4, 1
  042db5c  bf 1, 0x42db74
  042db60  lhz 3, 20(3)
  042db64  lhz 4, 442(1)
  042db68  extsh 3, 3
  042db6c  cmpw 3, 4
  042db70  bt 2, 0x42de0c
  042db74  lis 3, 67
  042db78  lwz 4, 24(28)
  042db7c  addi 25, 3, -16244
  042db80  addic 3, 1, 336
  042db84  lfs 4, 56(25)
  042db88  stfs 30, 64(1)
  042db8c  stfs 2, 72(1)
  042db90  lfs 2, 16(4)
  042db94  stfs 2, 80(1)
  042db98  lfs 2, 20(4)
  042db9c  stfs 2, 84(1)
  042dba0  lfs 2, 24(4)
  042dba4  stfs 2, 88(1)
  042dba8  stfs 1, 68(1)
  042dbac  stfs 3, 76(1)
  042dbb0  fmr 1, 4
  042dbb4  lfs 2, 28(4)
  042dbb8  stfs 2, 92(1)
  042dbbc  ld 5, 64(1)
  042dbc0  ld 6, 72(1)
  042dbc4  ld 7, 80(1)
  042dbc8  ld 8, 88(1)
  042dbcc  bl 0x1099f8
  042dbd0  nop
  042dbd4  lfs 30, 164(25)
  042dbd8  li 30, 0
  042dbdc  lfs 29, 168(25)
  042dbe0  lis 26, 114
  042dbe4  lfs 28, 172(25)
  042dbe8  lfs 27, 176(25)
  042dbec  lfs 26, 180(25)
  042dbf0  lfs 25, 184(25)
  042dbf4  lfs 24, 148(25)
  042dbf8  lfs 23, 188(25)
  042dbfc  lfs 22, 192(25)
  042dc00  lfs 21, 96(25)
  042dc04  fmr 1, 30
  042dc08  fmr 2, 29
  042dc0c  bl 0xfcbe8
  042dc10  nop
  042dc14  fmr 20, 1
  042dc18  li 3, 2
  042dc1c  bl 0xfc620
  042dc20  nop
  042dc24  li 4, 0
  042dc28  addic 5, 3, -1
  042dc2c  subc 4, 4, 3
  042dc30  extsw 5, 5
  042dc34  cntlzw 4, 4
  042dc38  subc 5, 5, 3
  042dc3c  sldi 4, 4, 58
  042dc40  sradi 4, 4, 63
  042dc44  and 4, 4, 5
  042dc48  addc 25, 3, 4
  042dc4c  bl 0xfcc68
  042dc50  nop
  042dc54  fmr 19, 1
  042dc58  fmr 1, 28
  042dc5c  fmr 2, 27
  042dc60  bl 0xfcbe8
  042dc64  nop
  042dc68  fmr 18, 1
  042dc6c  fmr 1, 26
  042dc70  fmr 2, 30
  042dc74  bl 0xfcbe8
  042dc78  nop
  042dc7c  addic 24, 1, 352
  042dc80  fmr 2, 19
  042dc84  fmr 3, 18
  042dc88  ori 3, 24, 0
  042dc8c  bl 0xfe610
  042dc90  nop
  042dc94  fmr 1, 31
  042dc98  fmr 2, 25
  042dc9c  bl 0xfe4f0
  042dca0  nop
  042dca4  lfs 2, 336(1)
  042dca8  fadds 3, 2, 1
  042dcac  fmr 1, 31
  042dcb0  fmr 2, 25
  042dcb4  stfs 3, 336(1)
  042dcb8  bl 0xfe4f0
  042dcbc  nop
  042dcc0  lfs 2, 340(1)
  042dcc4  fadds 3, 2, 1
  042dcc8  fmr 2, 25
  042dccc  fmr 1, 31
  042dcd0  stfs 3, 340(1)
  042dcd4  bl 0xfe4f0
  042dcd8  nop
  042dcdc  lfs 2, -3056(26)
  042dce0  addic 23, 1, 336
  042dce4  lis 7, 32544
  042dce8  fmr 3, 23
  042dcec  fmuls 4, 2, 24
  042dcf0  ori 3, 23, 0
  042dcf4  lfs 2, 344(1)
  042dcf8  ori 7, 7, 32639
  042dcfc  li 8, 0
  042dd00  fadds 5, 2, 1
  042dd04  fmuls 1, 20, 30
  042dd08  ori 9, 25, 0
  042dd0c  fmr 2, 20
  042dd10  ori 10, 24, 0
  042dd14  fctiwz 4, 4
  042dd18  stfs 5, 344(1)
  042dd1c  stfd 4, 464(1)
  042dd20  lwz 4, 468(1)
  042dd24  extsw 4, 4
  042dd28  bl 0x12f8c0
  042dd2c  nop
  042dd30  lfs 1, -3056(26)
  042dd34  lis 7, 32639
  042dd38  fmuls 2, 20, 21
  042dd3c  fmuls 4, 1, 24
  042dd40  neg 9, 25
  042dd44  fmuls 1, 20, 22
  042dd48  ori 3, 23, 0
  042dd4c  ori 7, 7, 32639
  042dd50  fmr 3, 23
  042dd54  li 8, 1
  042dd58  ori 10, 24, 0
  042dd5c  fctiwz 4, 4
  042dd60  stfd 4, 464(1)
  042dd64  lwz 4, 468(1)
  042dd68  extsw 4, 4
  042dd6c  bl 0x12f8c0
  042dd70  nop
  042dd74  addic 30, 30, 1
  042dd78  cmpwi 30, 5
  042dd7c  bt 0, 0x42dc04
  042dd80  lis 3, 67
  042dd84  li 4, 148
  042dd88  vspltisw 2, -1
  042dd8c  addi 3, 3, -16244
  042dd90  li 5, -3056
  042dd94  vslw 2, 2, 2
  042dd98  <unknown>
  042dd9c  <unknown>
  042dda0  li 3, 108
  042dda4  vspltw 3, 3, 0
  042dda8  li 4, 1
  042ddac  vmaddfp 2, 4, 3, 2
  042ddb0  vctsxs 2, 2, 0
  042ddb4  vspltw 2, 2, 0
  042ddb8  stvewx 2, 3, 29
  042ddbc  lwz 3, 24(28)
  042ddc0  li 29, 0
  042ddc4  stw 4, 2660(27)
  042ddc8  cmpwi 3, 0
  042ddcc  bt 2, 0x42dddc
  042ddd0  bl 0xfcccc
  042ddd4  nop
  042ddd8  ori 29, 3, 0
  042dddc  cmpwi 29, 0
  042dde0  li 3, 0
  042dde4  bt 2, 0x42ddfc
  042dde8  lbz 4, 9(29)
  042ddec  li 3, 0
  042ddf0  cmpwi 4, 1
  042ddf4  bf 2, 0x42ddfc
  042ddf8  li 3, 1
  042ddfc  li 4, 0
  042de00  ori 5, 31, 0
  042de04  bl 0x15d12c
  042de08  nop
  042de0c  ld 0, 688(1)
  042de10  mtlr 0
  042de14  lfd 18, 560(1)
  042de18  lfd 19, 568(1)
  042de1c  lfd 20, 576(1)
  042de20  lfd 21, 584(1)
  042de24  lfd 22, 592(1)
  042de28  lfd 23, 600(1)
  042de2c  lfd 24, 608(1)
  042de30  lfd 25, 616(1)
  042de34  lfd 26, 624(1)
  042de38  lfd 27, 632(1)
  042de3c  lfd 28, 640(1)
  042de40  lfd 29, 648(1)
  042de44  lfd 30, 656(1)
  042de48  lfd 31, 664(1)
  042de4c  ld 23, 488(1)
  042de50  ld 24, 496(1)
  042de54  ld 25, 504(1)
  042de58  ld 26, 512(1)
  042de5c  ld 27, 520(1)
  042de60  ld 28, 528(1)
  042de64  ld 29, 536(1)
  042de68  ld 30, 544(1)
  042de6c  ld 31, 552(1)
  042de70  addi 1, 1, 672
  042de74  blr
