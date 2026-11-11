# sdk/libc/qsort.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

rot3:   # 0x5c7628, 0x18c bytes
  05c7628  stdu 1, -448(1)
  05c762c  mflr 0
  05c7630  cmplwi 7, 6, 63
  05c7634  std 0, 464(1)
  05c7638  addi 0, 1, 112
  05c763c  std 23, 376(1)
  05c7640  std 25, 392(1)
  05c7644  std 26, 400(1)
  05c7648  std 28, 416(1)
  05c764c  std 31, 440(1)
  05c7650  std 24, 384(1)
  05c7654  std 27, 408(1)
  05c7658  std 29, 424(1)
  05c765c  std 30, 432(1)
  05c7660  mr 25, 3
  05c7664  mr 26, 4
  05c7668  mr 28, 5
  05c766c  mr 31, 6
  05c7670  clrldi 23, 0, 32
  05c7674  bt 29, 0x5c76f8
  05c7678  cmpwi 7, 6, 0
  05c767c  bt 30, 0x5c76c4
  05c7680  clrldi 9, 6, 32
  05c7684  li 6, 0
  05c7688  mtctr 9
  05c768c  add 8, 6, 28
  05c7690  add 9, 6, 25
  05c7694  clrldi 8, 8, 32
  05c7698  add 11, 6, 26
  05c769c  clrldi 9, 9, 32
  05c76a0  clrldi 11, 11, 32
  05c76a4  addi 6, 6, 1
  05c76a8  lbz 10, 0(8)
  05c76ac  lbz 7, 0(9)
  05c76b0  stb 10, 0(9)
  05c76b4  lbz 0, 0(11)
  05c76b8  stb 0, 0(8)
  05c76bc  stb 7, 0(11)
  05c76c0  bdnz 0x5c768c
  05c76c4  ld 0, 464(1)
  05c76c8  ld 23, 376(1)
  05c76cc  ld 24, 384(1)
  05c76d0  mtlr 0
  05c76d4  ld 25, 392(1)
  05c76d8  ld 26, 400(1)
  05c76dc  ld 27, 408(1)
  05c76e0  ld 28, 416(1)
  05c76e4  ld 29, 424(1)
  05c76e8  ld 30, 432(1)
  05c76ec  ld 31, 440(1)
  05c76f0  addi 1, 1, 448
  05c76f4  blr
  05c76f8  cmplwi 7, 31, 256
  05c76fc  clrldi 30, 25, 32
  05c7700  clrldi 27, 28, 32
  05c7704  mr 4, 30
  05c7708  mr 3, 23
  05c770c  clrldi 24, 26, 32
  05c7710  mr 0, 31
  05c7714  bf 29, 0x5c771c
  05c7718  li 0, 256
  05c771c  clrldi 29, 0, 32
  05c7720  sub 31, 31, 0
  05c7724  mr 5, 29
  05c7728  add 28, 28, 0
  05c772c  add 25, 25, 0
  05c7730  add 26, 26, 0
  05c7734  bl 0x5c5ad0
  05c7738  nop
  05c773c  mr 4, 27
  05c7740  mr 5, 29
  05c7744  mr 3, 30
  05c7748  bl 0x5c5ad0
  05c774c  nop
  05c7750  mr 4, 24
  05c7754  mr 5, 29
  05c7758  mr 3, 27
  05c775c  bl 0x5c5ad0
  05c7760  nop
  05c7764  mr 3, 24
  05c7768  mr 4, 23
  05c776c  mr 5, 29
  05c7770  bl 0x5c5ad0
  05c7774  nop
  05c7778  cmpwi 7, 31, 0
  05c777c  bf 30, 0x5c76f8
  05c7780  ld 0, 464(1)
  05c7784  ld 23, 376(1)
  05c7788  ld 24, 384(1)
  05c778c  mtlr 0
  05c7790  ld 25, 392(1)
  05c7794  ld 26, 400(1)
  05c7798  ld 27, 408(1)
  05c779c  ld 28, 416(1)
  05c77a0  ld 29, 424(1)
  05c77a4  ld 30, 432(1)
  05c77a8  ld 31, 440(1)
  05c77ac  addi 1, 1, 448
  05c77b0  blr

swap:   # 0x5c77b4, 0x144 bytes
  05c77b4  stdu 1, -432(1)
  05c77b8  mflr 0
  05c77bc  cmplwi 7, 5, 63
  05c77c0  std 0, 448(1)
  05c77c4  addi 0, 1, 112
  05c77c8  std 25, 376(1)
  05c77cc  std 27, 392(1)
  05c77d0  std 28, 400(1)
  05c77d4  std 31, 424(1)
  05c77d8  std 26, 384(1)
  05c77dc  std 29, 408(1)
  05c77e0  std 30, 416(1)
  05c77e4  mr 27, 3
  05c77e8  mr 28, 4
  05c77ec  mr 31, 5
  05c77f0  clrldi 25, 0, 32
  05c77f4  bt 29, 0x5c7860
  05c77f8  cmpwi 7, 5, 0
  05c77fc  bt 30, 0x5c7834
  05c7800  clrldi 9, 5, 32
  05c7804  li 8, 0
  05c7808  mtctr 9
  05c780c  add 9, 8, 27
  05c7810  add 11, 8, 28
  05c7814  clrldi 9, 9, 32
  05c7818  clrldi 11, 11, 32
  05c781c  addi 8, 8, 1
  05c7820  lbz 10, 0(9)
  05c7824  lbz 0, 0(11)
  05c7828  stb 0, 0(9)
  05c782c  stb 10, 0(11)
  05c7830  bdnz 0x5c780c
  05c7834  ld 0, 448(1)
  05c7838  ld 25, 376(1)
  05c783c  ld 26, 384(1)
  05c7840  mtlr 0
  05c7844  ld 27, 392(1)
  05c7848  ld 28, 400(1)
  05c784c  ld 29, 408(1)
  05c7850  ld 30, 416(1)
  05c7854  ld 31, 424(1)
  05c7858  addi 1, 1, 432
  05c785c  blr
  05c7860  cmplwi 7, 31, 256
  05c7864  clrldi 30, 27, 32
  05c7868  clrldi 26, 28, 32
  05c786c  mr 4, 30
  05c7870  mr 3, 25
  05c7874  mr 0, 31
  05c7878  bf 29, 0x5c7880
  05c787c  li 0, 256
  05c7880  clrldi 29, 0, 32
  05c7884  sub 31, 31, 0
  05c7888  mr 5, 29
  05c788c  add 28, 28, 0
  05c7890  add 27, 27, 0
  05c7894  bl 0x5c5ad0
  05c7898  nop
  05c789c  mr 4, 26
  05c78a0  mr 5, 29
  05c78a4  mr 3, 30
  05c78a8  bl 0x5c5ad0
  05c78ac  nop
  05c78b0  mr 3, 26
  05c78b4  mr 4, 25
  05c78b8  mr 5, 29
  05c78bc  bl 0x5c5ad0
  05c78c0  nop
  05c78c4  cmpwi 7, 31, 0
  05c78c8  bf 30, 0x5c7860
  05c78cc  ld 0, 448(1)
  05c78d0  ld 25, 376(1)
  05c78d4  ld 26, 384(1)
  05c78d8  mtlr 0
  05c78dc  ld 27, 392(1)
  05c78e0  ld 28, 400(1)
  05c78e4  ld 29, 408(1)
  05c78e8  ld 30, 416(1)
  05c78ec  ld 31, 424(1)
  05c78f0  addi 1, 1, 432
  05c78f4  blr

adjust_heap:   # 0x5c78f8, 0x1d0 bytes
  05c78f8  slwi 9, 4, 1
  05c78fc  mflr 0
  05c7900  stdu 1, -224(1)
  05c7904  std 30, 208(1)
  05c7908  addi 30, 9, 2
  05c790c  std 19, 120(1)
  05c7910  cmplw 7, 30, 5
  05c7914  std 22, 144(1)
  05c7918  std 23, 152(1)
  05c791c  std 25, 168(1)
  05c7920  std 26, 176(1)
  05c7924  std 20, 128(1)
  05c7928  std 21, 136(1)
  05c792c  std 24, 160(1)
  05c7930  std 27, 184(1)
  05c7934  std 28, 192(1)
  05c7938  std 29, 200(1)
  05c793c  std 31, 216(1)
  05c7940  std 0, 240(1)
  05c7944  mr 22, 4
  05c7948  mr 25, 5
  05c794c  mr 23, 3
  05c7950  mr 26, 6
  05c7954  mr 19, 7
  05c7958  bt 29, 0x5c7a84
  05c795c  clrldi 21, 6, 32
  05c7960  clrldi 20, 7, 32
  05c7964  mullw 0, 30, 6
  05c7968  add 28, 3, 0
  05c796c  mullw 0, 4, 6
  05c7970  add 24, 0, 3
  05c7974  b 0x5c79cc
  05c7978  std 2, 40(1)
  05c797c  lwz 0, 0(20)
  05c7980  clrldi 4, 29, 32
  05c7984  lwz 2, 4(20)
  05c7988  mtctr 0
  05c798c  bctrl
  05c7990  ld 2, 40(1)
  05c7994  cmpwi 7, 3, 0
  05c7998  bt 28, 0x5c79e0
  05c799c  clrldi 3, 24, 32
  05c79a0  mr 4, 31
  05c79a4  mr 5, 21
  05c79a8  mr 24, 28
  05c79ac  bl 0x5c77b4
  05c79b0  slwi 9, 30, 1
  05c79b4  addi 9, 9, 2
  05c79b8  cmplw 7, 25, 9
  05c79bc  bt 28, 0x5c7a10
  05c79c0  mr 30, 9
  05c79c4  mullw 0, 26, 9
  05c79c8  add 28, 23, 0
  05c79cc  cmpw 7, 25, 30
  05c79d0  clrldi 31, 28, 32
  05c79d4  sub 29, 28, 26
  05c79d8  mr 3, 31
  05c79dc  bf 30, 0x5c7978
  05c79e0  clrldi 31, 29, 32
  05c79e4  clrldi 3, 24, 32
  05c79e8  addi 30, 30, -1
  05c79ec  mr 4, 31
  05c79f0  mr 5, 21
  05c79f4  mr 28, 29
  05c79f8  bl 0x5c77b4
  05c79fc  slwi 9, 30, 1
  05c7a00  mr 24, 28
  05c7a04  addi 9, 9, 2
  05c7a08  cmplw 7, 25, 9
  05c7a0c  bf 28, 0x5c79c0
  05c7a10  cmplw 7, 22, 30
  05c7a14  bf- 28, 0x5c7a84
  05c7a18  mr 9, 30
  05c7a1c  clrldi 27, 19, 32
  05c7a20  b 0x5c7a38
  05c7a24  bl 0x5c77b4
  05c7a28  cmplw 7, 22, 30
  05c7a2c  mr 9, 30
  05c7a30  mr 28, 31
  05c7a34  bf 28, 0x5c7a84
  05c7a38  addi 0, 9, -1
  05c7a3c  std 2, 40(1)
  05c7a40  srwi 30, 0, 1
  05c7a44  lwz 0, 0(27)
  05c7a48  clrldi 28, 28, 32
  05c7a4c  lwz 2, 4(27)
  05c7a50  mtctr 0
  05c7a54  mullw 0, 26, 30
  05c7a58  add 31, 23, 0
  05c7a5c  mr 3, 28
  05c7a60  clrldi 29, 31, 32
  05c7a64  mr 4, 29
  05c7a68  bctrl
  05c7a6c  ld 2, 40(1)
  05c7a70  mr 4, 28
  05c7a74  cmpwi 7, 3, 0
  05c7a78  mr 5, 21
  05c7a7c  mr 3, 29
  05c7a80  bt 29, 0x5c7a24
  05c7a84  ld 0, 240(1)
  05c7a88  ld 19, 120(1)
  05c7a8c  ld 20, 128(1)
  05c7a90  mtlr 0
  05c7a94  ld 21, 136(1)
  05c7a98  ld 22, 144(1)
  05c7a9c  ld 23, 152(1)
  05c7aa0  ld 24, 160(1)
  05c7aa4  ld 25, 168(1)
  05c7aa8  ld 26, 176(1)
  05c7aac  ld 27, 184(1)
  05c7ab0  ld 28, 192(1)
  05c7ab4  ld 29, 200(1)
  05c7ab8  ld 30, 208(1)
  05c7abc  ld 31, 216(1)
  05c7ac0  addi 1, 1, 224
  05c7ac4  blr

med3:   # 0x5c7ac8, 0x158 bytes
  05c7ac8  stdu 1, -160(1)
  05c7acc  mflr 0
  05c7ad0  std 29, 136(1)
  05c7ad4  std 0, 176(1)
  05c7ad8  mr 29, 3
  05c7adc  lwz 0, 0(7)
  05c7ae0  std 27, 120(1)
  05c7ae4  std 28, 128(1)
  05c7ae8  mtctr 0
  05c7aec  std 30, 144(1)
  05c7af0  std 31, 152(1)
  05c7af4  std 2, 40(1)
  05c7af8  mr 30, 4
  05c7afc  lwz 2, 4(7)
  05c7b00  mr 3, 4
  05c7b04  mr 4, 29
  05c7b08  mr 28, 6
  05c7b0c  clrldi 27, 5, 32
  05c7b10  mr 31, 7
  05c7b14  bctrl
  05c7b18  ld 2, 40(1)
  05c7b1c  clrldi 5, 28, 32
  05c7b20  cmpwi 7, 3, 0
  05c7b24  mr 4, 30
  05c7b28  mr 3, 29
  05c7b2c  bt 28, 0x5c7be0
  05c7b30  lwz 0, 0(31)
  05c7b34  mr 4, 30
  05c7b38  std 2, 40(1)
  05c7b3c  mtctr 0
  05c7b40  mr 3, 27
  05c7b44  lwz 2, 4(31)
  05c7b48  bctrl
  05c7b4c  ld 2, 40(1)
  05c7b50  mr 4, 27
  05c7b54  cmpwi 7, 3, 0
  05c7b58  clrldi 5, 28, 32
  05c7b5c  mr 3, 30
  05c7b60  bt 28, 0x5c7c18
  05c7b64  lwz 0, 0(31)
  05c7b68  mr 4, 29
  05c7b6c  std 2, 40(1)
  05c7b70  mtctr 0
  05c7b74  mr 3, 30
  05c7b78  lwz 2, 4(31)
  05c7b7c  bctrl
  05c7b80  ld 2, 40(1)
  05c7b84  mr 4, 30
  05c7b88  cmpwi 7, 3, 0
  05c7b8c  clrldi 5, 28, 32
  05c7b90  mr 3, 29
  05c7b94  bt 28, 0x5c7bbc
  05c7b98  ld 0, 176(1)
  05c7b9c  ld 27, 120(1)
  05c7ba0  ld 28, 128(1)
  05c7ba4  mtlr 0
  05c7ba8  ld 29, 136(1)
  05c7bac  ld 30, 144(1)
  05c7bb0  ld 31, 152(1)
  05c7bb4  addi 1, 1, 160
  05c7bb8  blr
  05c7bbc  ld 0, 176(1)
  05c7bc0  ld 27, 120(1)
  05c7bc4  ld 28, 128(1)
  05c7bc8  mtlr 0
  05c7bcc  ld 29, 136(1)
  05c7bd0  ld 30, 144(1)
  05c7bd4  ld 31, 152(1)
  05c7bd8  addi 1, 1, 160
  05c7bdc  b 0x5c77b4
  05c7be0  bl 0x5c77b4
  05c7be4  lwz 0, 0(31)
  05c7be8  std 2, 40(1)
  05c7bec  mr 4, 30
  05c7bf0  mtctr 0
  05c7bf4  mr 3, 27
  05c7bf8  lwz 2, 4(31)
  05c7bfc  bctrl
  05c7c00  ld 2, 40(1)
  05c7c04  mr 4, 27
  05c7c08  cmpwi 7, 3, 0
  05c7c0c  clrldi 5, 28, 32
  05c7c10  mr 3, 30
  05c7c14  bf 28, 0x5c7b64
  05c7c18  bl 0x5c77b4
  05c7c1c  b 0x5c7b64

rotate:   # 0x5c7c20, 0xfc bytes
  05c7c20  stdu 1, -448(1)
  05c7c24  mflr 0
  05c7c28  cmpwi 7, 5, 0
  05c7c2c  std 0, 464(1)
  05c7c30  sub 0, 4, 3
  05c7c34  std 23, 376(1)
  05c7c38  std 24, 384(1)
  05c7c3c  std 25, 392(1)
  05c7c40  std 26, 400(1)
  05c7c44  std 27, 408(1)
  05c7c48  std 28, 416(1)
  05c7c4c  std 29, 424(1)
  05c7c50  std 30, 432(1)
  05c7c54  std 31, 440(1)
  05c7c58  mr 25, 3
  05c7c5c  mr 26, 5
  05c7c60  mr 23, 4
  05c7c64  add 24, 0, 5
  05c7c68  bt 30, 0x5c7ce8
  05c7c6c  addi 0, 1, 112
  05c7c70  mr 30, 5
  05c7c74  clrldi 27, 0, 32
  05c7c78  clrldi 28, 3, 32
  05c7c7c  cmplwi 7, 30, 256
  05c7c80  mr 3, 27
  05c7c84  mr 31, 30
  05c7c88  bf 29, 0x5c7c90
  05c7c8c  li 31, 256
  05c7c90  sub 4, 26, 31
  05c7c94  clrldi 29, 31, 32
  05c7c98  add 4, 23, 4
  05c7c9c  mr 5, 29
  05c7ca0  clrldi 4, 4, 32
  05c7ca4  sub 30, 30, 31
  05c7ca8  bl 0x5c5ad0
  05c7cac  nop
  05c7cb0  add 3, 25, 31
  05c7cb4  sub 5, 24, 31
  05c7cb8  mr 4, 28
  05c7cbc  clrldi 5, 5, 32
  05c7cc0  clrldi 3, 3, 32
  05c7cc4  bl 0x5c6094
  05c7cc8  nop
  05c7ccc  mr 3, 28
  05c7cd0  mr 4, 27
  05c7cd4  mr 5, 29
  05c7cd8  bl 0x5c5ad0
  05c7cdc  nop
  05c7ce0  cmpwi 7, 30, 0
  05c7ce4  bf 30, 0x5c7c7c
  05c7ce8  ld 0, 464(1)
  05c7cec  ld 23, 376(1)
  05c7cf0  ld 24, 384(1)
  05c7cf4  mtlr 0
  05c7cf8  ld 25, 392(1)
  05c7cfc  ld 26, 400(1)
  05c7d00  ld 27, 408(1)
  05c7d04  ld 28, 416(1)
  05c7d08  ld 29, 424(1)
  05c7d0c  ld 30, 432(1)
  05c7d10  ld 31, 440(1)
  05c7d14  addi 1, 1, 448
  05c7d18  blr

intro_sort:   # 0x5c7d1c, 0x5ec bytes
  05c7d1c  cmpwi 7, 5, 0
  05c7d20  mflr 0
  05c7d24  stdu 1, -272(1)
  05c7d28  std 16, 144(1)
  05c7d2c  std 17, 152(1)
  05c7d30  std 22, 192(1)
  05c7d34  std 23, 200(1)
  05c7d38  std 14, 128(1)
  05c7d3c  std 15, 136(1)
  05c7d40  std 18, 160(1)
  05c7d44  std 19, 168(1)
  05c7d48  std 20, 176(1)
  05c7d4c  std 21, 184(1)
  05c7d50  std 24, 208(1)
  05c7d54  std 25, 216(1)
  05c7d58  std 26, 224(1)
  05c7d5c  std 27, 232(1)
  05c7d60  std 28, 240(1)
  05c7d64  std 29, 248(1)
  05c7d68  std 30, 256(1)
  05c7d6c  std 31, 264(1)
  05c7d70  std 0, 288(1)
  05c7d74  mr 16, 5
  05c7d78  mr 22, 3
  05c7d7c  mr 23, 4
  05c7d80  stw 7, 112(1)
  05c7d84  mr 17, 6
  05c7d88  bt 30, 0x5c8264
  05c7d8c  cmplwi 7, 4, 32
  05c7d90  bf 29, 0x5c8114
  05c7d94  slwi 9, 6, 3
  05c7d98  slwi 0, 6, 5
  05c7d9c  mr 25, 6
  05c7da0  add 14, 9, 0
  05c7da4  clrldi 21, 6, 32
  05c7da8  clrldi 24, 7, 32
  05c7dac  neg 20, 6
  05c7db0  srwi 0, 23, 1
  05c7db4  mullw 9, 17, 23
  05c7db8  add 18, 9, 22
  05c7dbc  mullw 0, 17, 0
  05c7dc0  sub 31, 18, 25
  05c7dc4  add 23, 0, 22
  05c7dc8  sub 29, 31, 22
  05c7dcc  add 19, 23, 25
  05c7dd0  cmplw 7, 29, 14
  05c7dd4  bf 29, 0x5c8220
  05c7dd8  clrldi 15, 22, 32
  05c7ddc  mr 6, 21
  05c7de0  mr 3, 15
  05c7de4  mr 7, 24
  05c7de8  clrldi 26, 23, 32
  05c7dec  divwu 29, 29, 17
  05c7df0  srwi 29, 29, 3
  05c7df4  addi 29, 29, 1
  05c7df8  mullw 29, 17, 29
  05c7dfc  slwi 28, 29, 1
  05c7e00  add 27, 22, 29
  05c7e04  add 5, 22, 28
  05c7e08  clrldi 27, 27, 32
  05c7e0c  clrldi 5, 5, 32
  05c7e10  mr 4, 27
  05c7e14  sub 28, 31, 28
  05c7e18  bl 0x5c7ac8
  05c7e1c  sub 3, 23, 29
  05c7e20  add 5, 23, 29
  05c7e24  sub 29, 31, 29
  05c7e28  clrldi 3, 3, 32
  05c7e2c  clrldi 5, 5, 32
  05c7e30  mr 4, 26
  05c7e34  mr 6, 21
  05c7e38  mr 7, 24
  05c7e3c  clrldi 29, 29, 32
  05c7e40  bl 0x5c7ac8
  05c7e44  clrldi 3, 28, 32
  05c7e48  clrldi 5, 31, 32
  05c7e4c  mr 4, 29
  05c7e50  mr 6, 21
  05c7e54  mr 7, 24
  05c7e58  bl 0x5c7ac8
  05c7e5c  mr 3, 27
  05c7e60  mr 4, 26
  05c7e64  mr 5, 29
  05c7e68  mr 6, 21
  05c7e6c  mr 7, 24
  05c7e70  bl 0x5c7ac8
  05c7e74  cmplw 7, 23, 22
  05c7e78  mr 31, 23
  05c7e7c  bf 29, 0x5c7ed4
  05c7e80  mr 30, 23
  05c7e84  neg 29, 25
  05c7e88  sub 26, 23, 25
  05c7e8c  b 0x5c7e98
  05c7e90  mr 30, 31
  05c7e94  bf 25, 0x5c7ed4
  05c7e98  std 2, 40(1)
  05c7e9c  lwz 0, 0(24)
  05c7ea0  add 31, 30, 29
  05c7ea4  clrldi 4, 30, 32
  05c7ea8  lwz 2, 4(24)
  05c7eac  mtctr 0
  05c7eb0  clrldi 3, 31, 32
  05c7eb4  add 26, 26, 29
  05c7eb8  bctrl
  05c7ebc  ld 2, 40(1)
  05c7ec0  add 0, 25, 26
  05c7ec4  cmpwi 7, 3, 0
  05c7ec8  cmplw 6, 0, 22
  05c7ecc  bt 30, 0x5c7e90
  05c7ed0  mr 31, 30
  05c7ed4  cmplw 7, 18, 19
  05c7ed8  add 30, 19, 25
  05c7edc  clrldi 26, 31, 32
  05c7ee0  bt 29, 0x5c7ef0
  05c7ee4  b 0x5c7f24
  05c7ee8  add 19, 19, 25
  05c7eec  bf 24, 0x5c7f24
  05c7ef0  std 2, 40(1)
  05c7ef4  lwz 0, 0(24)
  05c7ef8  clrldi 3, 19, 32
  05c7efc  mr 4, 26
  05c7f00  lwz 2, 4(24)
  05c7f04  mtctr 0
  05c7f08  add 30, 30, 25
  05c7f0c  bctrl
  05c7f10  ld 2, 40(1)
  05c7f14  sub 0, 30, 25
  05c7f18  cmpwi 7, 3, 0
  05c7f1c  cmplw 6, 0, 18
  05c7f20  bt 30, 0x5c7ee8
  05c7f24  mr 23, 19
  05c7f28  mr 27, 31
  05c7f2c  cmplw 7, 23, 18
  05c7f30  bt 28, 0x5c7fd8
  05c7f34  cmplw 7, 27, 22
  05c7f38  bf 29, 0x5c7fa8
  05c7f3c  sub 28, 27, 25
  05c7f40  mr 30, 27
  05c7f44  clrldi 26, 31, 32
  05c7f48  add 27, 20, 27
  05c7f4c  std 2, 40(1)
  05c7f50  clrldi 29, 27, 32
  05c7f54  lwz 0, 0(24)
  05c7f58  mr 4, 26
  05c7f5c  lwz 2, 4(24)
  05c7f60  mr 3, 29
  05c7f64  mtctr 0
  05c7f68  add 28, 28, 20
  05c7f6c  bctrl
  05c7f70  ld 2, 40(1)
  05c7f74  mr 4, 29
  05c7f78  cmpwi 7, 3, 0
  05c7f7c  mr 5, 21
  05c7f80  bt 28, 0x5c7f98
  05c7f84  bf 30, 0x5c8024
  05c7f88  sub 31, 31, 25
  05c7f8c  clrldi 26, 31, 32
  05c7f90  mr 3, 26
  05c7f94  bl 0x5c77b4
  05c7f98  add 0, 28, 25
  05c7f9c  mr 30, 27
  05c7fa0  cmplw 7, 0, 22
  05c7fa4  bt 29, 0x5c7f48
  05c7fa8  cmpw 7, 22, 27
  05c7fac  bt 30, 0x5c8030
  05c7fb0  cmpw 7, 23, 18
  05c7fb4  bt 30, 0x5c8068
  05c7fb8  sub 27, 27, 25
  05c7fbc  clrldi 3, 23, 32
  05c7fc0  clrldi 4, 27, 32
  05c7fc4  mr 5, 21
  05c7fc8  add 23, 23, 25
  05c7fcc  bl 0x5c77b4
  05c7fd0  cmplw 7, 23, 18
  05c7fd4  bf 28, 0x5c7f34
  05c7fd8  std 2, 40(1)
  05c7fdc  lwz 0, 0(24)
  05c7fe0  clrldi 30, 23, 32
  05c7fe4  clrldi 3, 31, 32
  05c7fe8  lwz 2, 4(24)
  05c7fec  mr 4, 30
  05c7ff0  mtctr 0
  05c7ff4  bctrl
  05c7ff8  ld 2, 40(1)
  05c7ffc  cmpwi 7, 3, 0
  05c8000  bt 28, 0x5c801c
  05c8004  bf 30, 0x5c7f34
  05c8008  clrldi 3, 19, 32
  05c800c  mr 4, 30
  05c8010  mr 5, 21
  05c8014  add 19, 19, 25
  05c8018  bl 0x5c77b4
  05c801c  add 23, 23, 25
  05c8020  b 0x5c7f2c
  05c8024  mr 27, 30
  05c8028  cmpw 7, 22, 27
  05c802c  bf 30, 0x5c7fb0
  05c8030  cmpw 7, 23, 18
  05c8034  bt 30, 0x5c80c4
  05c8038  cmpw 7, 19, 23
  05c803c  bt 30, 0x5c80b0
  05c8040  clrldi 3, 23, 32
  05c8044  clrldi 4, 31, 32
  05c8048  clrldi 5, 19, 32
  05c804c  mr 6, 21
  05c8050  bl 0x5c7628
  05c8054  add 23, 23, 25
  05c8058  add 31, 31, 25
  05c805c  add 19, 19, 25
  05c8060  mr 27, 22
  05c8064  b 0x5c7f2c
  05c8068  sub 27, 27, 25
  05c806c  sub 31, 31, 25
  05c8070  sub 19, 19, 25
  05c8074  cmpw 7, 27, 31
  05c8078  bt 30, 0x5c8098
  05c807c  clrldi 3, 27, 32
  05c8080  clrldi 4, 19, 32
  05c8084  clrldi 5, 31, 32
  05c8088  mr 6, 21
  05c808c  mr 23, 18
  05c8090  bl 0x5c7628
  05c8094  b 0x5c7f2c
  05c8098  clrldi 3, 31, 32
  05c809c  clrldi 4, 19, 32
  05c80a0  mr 5, 21
  05c80a4  mr 23, 18
  05c80a8  bl 0x5c77b4
  05c80ac  b 0x5c7f2c
  05c80b0  clrldi 3, 19, 32
  05c80b4  clrldi 4, 31, 32
  05c80b8  mr 5, 21
  05c80bc  bl 0x5c77b4
  05c80c0  b 0x5c8054
  05c80c4  sub 11, 31, 22
  05c80c8  sub 0, 18, 19
  05c80cc  srwi 10, 16, 2
  05c80d0  divwu 11, 11, 17
  05c80d4  srwi 9, 16, 1
  05c80d8  divwu 23, 0, 17
  05c80dc  cmplw 7, 11, 23
  05c80e0  add 16, 9, 10
  05c80e4  bt 29, 0x5c8240
  05c80e8  mr 3, 15
  05c80ec  clrldi 4, 11, 32
  05c80f0  clrldi 5, 16, 32
  05c80f4  mr 6, 21
  05c80f8  mr 7, 24
  05c80fc  mr 22, 19
  05c8100  bl 0x5c7d1c
  05c8104  cmpwi 7, 16, 0
  05c8108  bt 30, 0x5c8264
  05c810c  cmplwi 7, 23, 32
  05c8110  bt 29, 0x5c7db0
  05c8114  cmplwi 7, 23, 1
  05c8118  lwz 26, 112(1)
  05c811c  mr 27, 22
  05c8120  clrldi 25, 22, 32
  05c8124  neg 29, 17
  05c8128  bf 29, 0x5c81c8
  05c812c  addi 23, 23, -1
  05c8130  cmpwi 7, 23, 0
  05c8134  bt 30, 0x5c81c8
  05c8138  add 27, 27, 17
  05c813c  std 2, 40(1)
  05c8140  lwz 0, 0(26)
  05c8144  clrldi 28, 27, 32
  05c8148  mr 4, 25
  05c814c  lwz 2, 4(26)
  05c8150  mr 3, 28
  05c8154  mtctr 0
  05c8158  mr 30, 27
  05c815c  mr 31, 27
  05c8160  bctrl
  05c8164  ld 2, 40(1)
  05c8168  cmpwi 7, 3, 0
  05c816c  bf 28, 0x5c8178
  05c8170  b 0x5c82f4
  05c8174  mr 30, 31
  05c8178  std 2, 40(1)
  05c817c  lwz 0, 0(26)
  05c8180  add 31, 31, 29
  05c8184  mr 3, 28
  05c8188  lwz 2, 4(26)
  05c818c  clrldi 4, 31, 32
  05c8190  mtctr 0
  05c8194  bctrl
  05c8198  ld 2, 40(1)
  05c819c  cmpwi 7, 3, 0
  05c81a0  bt 28, 0x5c8174
  05c81a4  cmpw 7, 27, 30
  05c81a8  bt 30, 0x5c812c
  05c81ac  clrldi 3, 30, 32
  05c81b0  mr 4, 28
  05c81b4  clrldi 5, 17, 32
  05c81b8  addi 23, 23, -1
  05c81bc  bl 0x5c7c20
  05c81c0  cmpwi 7, 23, 0
  05c81c4  bf 30, 0x5c8138
  05c81c8  ld 0, 288(1)
  05c81cc  ld 14, 128(1)
  05c81d0  ld 15, 136(1)
  05c81d4  mtlr 0
  05c81d8  ld 16, 144(1)
  05c81dc  ld 17, 152(1)
  05c81e0  ld 18, 160(1)
  05c81e4  ld 19, 168(1)
  05c81e8  ld 20, 176(1)
  05c81ec  ld 21, 184(1)
  05c81f0  ld 22, 192(1)
  05c81f4  ld 23, 200(1)
  05c81f8  ld 24, 208(1)
  05c81fc  ld 25, 216(1)
  05c8200  ld 26, 224(1)
  05c8204  ld 27, 232(1)
  05c8208  ld 28, 240(1)
  05c820c  ld 29, 248(1)
  05c8210  ld 30, 256(1)
  05c8214  ld 31, 264(1)
  05c8218  addi 1, 1, 272
  05c821c  blr
  05c8220  clrldi 15, 22, 32
  05c8224  clrldi 5, 31, 32
  05c8228  mr 3, 15
  05c822c  clrldi 4, 23, 32
  05c8230  mr 6, 21
  05c8234  mr 7, 24
  05c8238  bl 0x5c7ac8
  05c823c  b 0x5c7e74
  05c8240  clrldi 4, 23, 32
  05c8244  clrldi 3, 19, 32
  05c8248  clrldi 5, 16, 32
  05c824c  mr 6, 21
  05c8250  mr 7, 24
  05c8254  mr 23, 11
  05c8258  bl 0x5c7d1c
  05c825c  cmpwi 7, 16, 0
  05c8260  bf 30, 0x5c810c
  05c8264  cmplwi 7, 23, 32
  05c8268  bf 29, 0x5c8114
  05c826c  srwi 31, 23, 1
  05c8270  lwz 24, 112(1)
  05c8274  clrldi 15, 22, 32
  05c8278  cmpwi 7, 31, 0
  05c827c  clrldi 21, 17, 32
  05c8280  bt 30, 0x5c82ac
  05c8284  clrldi 30, 23, 32
  05c8288  addi 31, 31, -1
  05c828c  mr 3, 15
  05c8290  clrldi 4, 31, 32
  05c8294  mr 5, 30
  05c8298  mr 6, 21
  05c829c  mr 7, 24
  05c82a0  bl 0x5c78f8
  05c82a4  cmpwi 7, 31, 0
  05c82a8  bf 30, 0x5c8288
  05c82ac  neg 31, 17
  05c82b0  mullw 0, 17, 23
  05c82b4  add 27, 0, 22
  05c82b8  add 27, 27, 31
  05c82bc  addi 23, 23, -1
  05c82c0  mr 3, 15
  05c82c4  clrldi 4, 27, 32
  05c82c8  mr 5, 21
  05c82cc  bl 0x5c77b4
  05c82d0  mr 3, 15
  05c82d4  li 4, 0
  05c82d8  clrldi 5, 23, 32
  05c82dc  mr 6, 21
  05c82e0  mr 7, 24
  05c82e4  bl 0x5c78f8
  05c82e8  cmpwi 7, 23, 1
  05c82ec  bf 30, 0x5c82b8
  05c82f0  b 0x5c81c8
  05c82f4  mr 4, 28
  05c82f8  mr 3, 25
  05c82fc  clrldi 5, 17, 32
  05c8300  bl 0x5c7c20
  05c8304  b 0x5c812c

FUN_005c8308:   # 0x5c8308, 0x10 bytes
  05c8308  mr 7, 6
  05c830c  mr 6, 5
  05c8310  mr 5, 4
  05c8314  b 0x5c7d1c
