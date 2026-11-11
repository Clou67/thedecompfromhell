# game/update/moby218.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M218_002f4458:   # 0x2f4458, 0x14 bytes
  02f4458  lis 3, 128
  02f445c  lis 4, 1
  02f4460  addic 3, 3, -4608
  02f4464  stw 4, 72(3)
  02f4468  blr

UpdateMoby_218:   # 0x2f44c0, 0x15bc bytes
  02f44c0  stdu 1, -608(1)
  02f44c4  mflr 0
  02f44c8  std 0, 624(1)
  02f44cc  stfd 24, 544(1)
  02f44d0  stfd 25, 552(1)
  02f44d4  stfd 26, 560(1)
  02f44d8  stfd 27, 568(1)
  02f44dc  stfd 28, 576(1)
  02f44e0  stfd 29, 584(1)
  02f44e4  stfd 30, 592(1)
  02f44e8  stfd 31, 600(1)
  02f44ec  std 31, 536(1)
  02f44f0  ori 31, 3, 0
  02f44f4  lis 4, 1
  02f44f8  std 30, 528(1)
  02f44fc  li 5, 0
  02f4500  std 29, 520(1)
  02f4504  std 28, 512(1)
  02f4508  lwz 30, 120(31)
  02f450c  bl 0x10675c
  02f4510  nop
  02f4514  cmpwi 3, 0
  02f4518  bt 2, 0x2f49ac
  02f451c  lbz 4, 32(31)
  02f4520  cmpwi 1, 4, 4
  02f4524  cmpwi 4, 3
  02f4528  cror 2, 2, 6
  02f452c  bt 2, 0x2f49ac
  02f4530  lis 3, 151
  02f4534  addic 3, 3, -25376
  02f4538  lwz 5, 8324(3)
  02f453c  cmpwi 5, 19
  02f4540  bf 2, 0x2f454c
  02f4544  cmpwi 4, 2
  02f4548  bt 2, 0x2f49ac
  02f454c  lis 4, 15363
  02f4550  li 5, 1
  02f4554  ori 4, 4, 4719
  02f4558  lis 6, 14851
  02f455c  stw 5, 116(30)
  02f4560  lis 5, 47
  02f4564  stw 4, 96(30)
  02f4568  ori 6, 6, 4719
  02f456c  addi 4, 5, 17520
  02f4570  stw 6, 100(30)
  02f4574  lwz 5, 328(30)
  02f4578  lfs 1, 0(4)
  02f457c  cmpwi 5, 2
  02f4580  fmr 5, 1
  02f4584  bt 2, 0x2f45a0
  02f4588  lis 4, 47
  02f458c  lis 5, 114
  02f4590  addi 4, 4, 17520
  02f4594  lfs 1, 4(4)
  02f4598  lfs 2, -3052(5)
  02f459c  fmuls 1, 2, 1
  02f45a0  lis 4, 47
  02f45a4  stfs 1, 104(30)
  02f45a8  lis 5, 114
  02f45ac  addi 4, 4, 17520
  02f45b0  lfs 1, 8(4)
  02f45b4  lfs 2, -3052(5)
  02f45b8  li 4, 0
  02f45bc  lhz 5, 322(30)
  02f45c0  fmuls 1, 2, 1
  02f45c4  addic 5, 5, -1
  02f45c8  stb 4, 141(30)
  02f45cc  extsh 4, 5
  02f45d0  sth 5, 322(30)
  02f45d4  cmpwi 4, 0
  02f45d8  stfs 1, 108(30)
  02f45dc  bf 2, 0x2f47c8
  02f45e0  li 4, 4
  02f45e4  stb 4, 32(31)
  02f45e8  lfs 1, 16(31)
  02f45ec  lfs 2, 128(3)
  02f45f0  lfs 3, 20(31)
  02f45f4  lfs 4, 132(3)
  02f45f8  fsubs 1, 1, 2
  02f45fc  fsubs 2, 3, 4
  02f4600  lis 4, 115
  02f4604  addic 3, 30, 80
  02f4608  addic 4, 4, 22784
  02f460c  fabs 3, 1
  02f4610  fabs 4, 2
  02f4614  stfs 1, 264(1)
  02f4618  stfs 2, 268(1)
  02f461c  fsubs 1, 3, 4
  02f4620  stfs 1, 272(1)
  02f4624  lwz 5, 264(1)
  02f4628  lfs 1, 264(1)
  02f462c  lwz 6, 268(1)
  02f4630  lfs 2, 268(1)
  02f4634  fabs 1, 1
  02f4638  lwz 7, 272(1)
  02f463c  rlwinm 6, 6, 3, 29, 29
  02f4640  fabs 6, 2
  02f4644  lfs 2, 272(1)
  02f4648  rlwimi 6, 7, 2, 30, 30
  02f464c  fsub 7, 2, 5
  02f4650  fsub 8, 2, 5
  02f4654  rlwimi 6, 5, 4, 28, 28
  02f4658  ori 5, 4, 0
  02f465c  rlwimi 5, 6, 2, 26, 28
  02f4660  slwi 6, 6, 2
  02f4664  clrldi 5, 5, 32
  02f4668  fsel 4, 7, 1, 4
  02f466c  lfsx 1, 4, 6
  02f4670  lfs 2, 4(5)
  02f4674  fsel 3, 8, 6, 3
  02f4678  fcmpu 0, 4, 5
  02f467c  bt 1, 0x2f4684
  02f4680  b 0x2f47a4
  02f4684  fsubs 6, 3, 4
  02f4688  fadds 3, 3, 4
  02f468c  addic 4, 1, 16
  02f4690  li 8, 2
  02f4694  addic 6, 4, 468
  02f4698  addic 5, 4, 452
  02f469c  mtctr 8
  02f46a0  fdivs 3, 6, 3
  02f46a4  fmuls 4, 3, 3
  02f46a8  stfs 3, 480(1)
  02f46ac  stfs 3, 472(1)
  02f46b0  stfs 3, 476(1)
  02f46b4  stfs 3, 468(1)
  02f46b8  lfs 7, 480(1)
  02f46bc  lfs 8, 472(1)
  02f46c0  lfs 9, 476(1)
  02f46c4  fmuls 6, 4, 4
  02f46c8  fmuls 8, 8, 4
  02f46cc  fmuls 7, 7, 6
  02f46d0  fmuls 3, 6, 6
  02f46d4  fmuls 6, 9, 6
  02f46d8  stfs 8, 472(1)
  02f46dc  fmuls 4, 7, 4
  02f46e0  stfs 6, 476(1)
  02f46e4  stfs 4, 480(1)
  02f46e8  lfs 4, 452(4)
  02f46ec  fmuls 4, 4, 3
  02f46f0  stfs 4, 468(4)
  02f46f4  lfs 4, 4(5)
  02f46f8  addic 5, 5, 8
  02f46fc  fmuls 4, 4, 3
  02f4700  addic 4, 4, 8
  02f4704  stfs 4, 4(6)
  02f4708  addic 6, 6, 8
  02f470c  bdnz 0x2f46e8
  02f4710  li 6, 4
  02f4714  ori 4, 1, 0
  02f4718  mtctr 6
  02f471c  lis 5, 115
  02f4720  addic 6, 4, 468
  02f4724  addic 5, 5, 22752
  02f4728  ori 7, 6, 0
  02f472c  lfs 3, 468(4)
  02f4730  lfs 4, 0(5)
  02f4734  fmuls 3, 3, 4
  02f4738  lfs 4, 4(5)
  02f473c  addic 5, 5, 8
  02f4740  stfs 3, 468(4)
  02f4744  lfs 3, 4(6)
  02f4748  addic 4, 4, 8
  02f474c  fmuls 3, 3, 4
  02f4750  stfs 3, 4(6)
  02f4754  addic 6, 6, 8
  02f4758  bdnz 0x2f472c
  02f475c  ori 4, 1, 0
  02f4760  mtctr 8
  02f4764  lfs 3, 468(4)
  02f4768  lfs 4, 4(7)
  02f476c  fadds 3, 5, 3
  02f4770  lfs 5, 8(7)
  02f4774  addic 4, 4, 16
  02f4778  lfs 6, 12(7)
  02f477c  addic 7, 7, 16
  02f4780  fadds 3, 3, 4
  02f4784  fadds 5, 3, 5
  02f4788  fadds 5, 5, 6
  02f478c  bdnz 0x2f4764
  02f4790  lis 4, 47
  02f4794  addi 4, 4, 17520
  02f4798  lfs 3, 12(4)
  02f479c  fadds 5, 5, 3
  02f47a0  fmadds 5, 5, 1, 2
  02f47a4  ori 4, 3, 0
  02f47a8  ori 3, 31, 0
  02f47ac  fmr 1, 5
  02f47b0  li 6, 3
  02f47b4  li 7, 3
  02f47b8  li 8, 0
  02f47bc  bl 0x10ad80
  02f47c0  nop
  02f47c4  b 0x2f49ac
  02f47c8  li 4, 3
  02f47cc  stb 4, 32(31)
  02f47d0  lfs 1, 16(31)
  02f47d4  lfs 2, 128(3)
  02f47d8  lfs 3, 20(31)
  02f47dc  lfs 4, 132(3)
  02f47e0  fsubs 1, 1, 2
  02f47e4  fsubs 2, 3, 4
  02f47e8  lis 4, 115
  02f47ec  addic 3, 30, 80
  02f47f0  addic 4, 4, 22784
  02f47f4  fabs 3, 1
  02f47f8  fabs 4, 2
  02f47fc  stfs 1, 252(1)
  02f4800  stfs 2, 256(1)
  02f4804  fsubs 1, 3, 4
  02f4808  stfs 1, 260(1)
  02f480c  lwz 5, 252(1)
  02f4810  lfs 1, 252(1)
  02f4814  lwz 6, 256(1)
  02f4818  lfs 2, 256(1)
  02f481c  fabs 1, 1
  02f4820  lwz 7, 260(1)
  02f4824  rlwinm 6, 6, 3, 29, 29
  02f4828  fabs 6, 2
  02f482c  lfs 2, 260(1)
  02f4830  rlwimi 6, 7, 2, 30, 30
  02f4834  fsub 7, 2, 5
  02f4838  fsub 8, 2, 5
  02f483c  rlwimi 6, 5, 4, 28, 28
  02f4840  ori 5, 4, 0
  02f4844  rlwimi 5, 6, 2, 26, 28
  02f4848  slwi 6, 6, 2
  02f484c  clrldi 5, 5, 32
  02f4850  fsel 4, 7, 1, 4
  02f4854  lfsx 1, 4, 6
  02f4858  lfs 2, 4(5)
  02f485c  fsel 3, 8, 6, 3
  02f4860  fcmpu 0, 4, 5
  02f4864  bt 1, 0x2f486c
  02f4868  b 0x2f498c
  02f486c  fsubs 6, 3, 4
  02f4870  fadds 3, 3, 4
  02f4874  addic 4, 1, 16
  02f4878  li 7, 2
  02f487c  addic 6, 4, 436
  02f4880  addic 5, 4, 420
  02f4884  mtctr 7
  02f4888  fdivs 3, 6, 3
  02f488c  fmuls 4, 3, 3
  02f4890  stfs 3, 448(1)
  02f4894  stfs 3, 440(1)
  02f4898  stfs 3, 444(1)
  02f489c  stfs 3, 436(1)
  02f48a0  lfs 7, 448(1)
  02f48a4  lfs 8, 440(1)
  02f48a8  lfs 9, 444(1)
  02f48ac  fmuls 6, 4, 4
  02f48b0  fmuls 8, 8, 4
  02f48b4  fmuls 7, 7, 6
  02f48b8  fmuls 3, 6, 6
  02f48bc  fmuls 6, 9, 6
  02f48c0  stfs 8, 440(1)
  02f48c4  fmuls 4, 7, 4
  02f48c8  stfs 6, 444(1)
  02f48cc  stfs 4, 448(1)
  02f48d0  lfs 4, 420(4)
  02f48d4  fmuls 4, 4, 3
  02f48d8  stfs 4, 436(4)
  02f48dc  lfs 4, 4(5)
  02f48e0  addic 5, 5, 8
  02f48e4  fmuls 4, 4, 3
  02f48e8  addic 4, 4, 8
  02f48ec  stfs 4, 4(6)
  02f48f0  addic 6, 6, 8
  02f48f4  bdnz 0x2f48d0
  02f48f8  li 6, 4
  02f48fc  ori 4, 1, 0
  02f4900  mtctr 6
  02f4904  lis 5, 115
  02f4908  addic 6, 4, 436
  02f490c  addic 5, 5, 22752
  02f4910  ori 8, 6, 0
  02f4914  lfs 3, 436(4)
  02f4918  lfs 4, 0(5)
  02f491c  fmuls 3, 3, 4
  02f4920  lfs 4, 4(5)
  02f4924  addic 5, 5, 8
  02f4928  stfs 3, 436(4)
  02f492c  lfs 3, 4(6)
  02f4930  addic 4, 4, 8
  02f4934  fmuls 3, 3, 4
  02f4938  stfs 3, 4(6)
  02f493c  addic 6, 6, 8
  02f4940  bdnz 0x2f4914
  02f4944  ori 4, 1, 0
  02f4948  mtctr 7
  02f494c  lfs 3, 436(4)
  02f4950  lfs 4, 4(8)
  02f4954  fadds 3, 5, 3
  02f4958  lfs 5, 8(8)
  02f495c  addic 4, 4, 16
  02f4960  lfs 6, 12(8)
  02f4964  addic 8, 8, 16
  02f4968  fadds 3, 3, 4
  02f496c  fadds 5, 3, 5
  02f4970  fadds 5, 5, 6
  02f4974  bdnz 0x2f494c
  02f4978  lis 4, 47
  02f497c  addi 4, 4, 17520
  02f4980  lfs 3, 12(4)
  02f4984  fadds 5, 5, 3
  02f4988  fmadds 5, 5, 1, 2
  02f498c  ori 4, 3, 0
  02f4990  ori 3, 31, 0
  02f4994  fmr 1, 5
  02f4998  li 6, 2
  02f499c  li 7, 3
  02f49a0  li 8, 0
  02f49a4  bl 0x10ad80
  02f49a8  nop
  02f49ac  li 4, 255
  02f49b0  lbz 3, 32(31)
  02f49b4  cmpwi 3, 4
  02f49b8  stb 4, 164(31)
  02f49bc  cmpwi 1, 3, 3
  02f49c0  cmpwi 6, 3, 2
  02f49c4  cmpwi 7, 3, 1
  02f49c8  bt 2, 0x2f5a10
  02f49cc  bt 6, 0x2f5988
  02f49d0  bt 26, 0x2f4dd8
  02f49d4  bt 30, 0x2f4ab8
  02f49d8  cmpwi 3, 0
  02f49dc  bf 2, 0x2f5a3c
  02f49e0  lwz 3, 328(30)
  02f49e4  cmpwi 3, 2
  02f49e8  bf 2, 0x2f49f8
  02f49ec  addic 3, 30, 256
  02f49f0  bl 0x136724
  02f49f4  nop
  02f49f8  li 4, 1
  02f49fc  addic 3, 30, 176
  02f4a00  stb 4, 32(31)
  02f4a04  bl 0x100f8c
  02f4a08  nop
  02f4a0c  lis 3, 16384
  02f4a10  lis 4, 15692
  02f4a14  vspltisw 2, -1
  02f4a18  lis 5, 16025
  02f4a1c  ori 4, 4, 52429
  02f4a20  stw 3, 188(30)
  02f4a24  ori 5, 5, 39322
  02f4a28  lis 3, 15948
  02f4a2c  vslw 2, 2, 2
  02f4a30  lis 6, 114
  02f4a34  ori 3, 3, 52429
  02f4a38  stw 4, 236(30)
  02f4a3c  lfs 1, 336(30)
  02f4a40  stw 5, 240(30)
  02f4a44  li 4, 909
  02f4a48  stw 3, 244(30)
  02f4a4c  lis 5, 114
  02f4a50  lfs 2, -3052(6)
  02f4a54  lis 3, 47
  02f4a58  li 6, -3056
  02f4a5c  fmuls 1, 1, 2
  02f4a60  stw 4, 176(30)
  02f4a64  addi 3, 3, 17520
  02f4a68  li 4, 16
  02f4a6c  stfs 1, 212(30)
  02f4a70  <unknown>
  02f4a74  <unknown>
  02f4a78  vspltw 3, 3, 0
  02f4a7c  li 3, 320
  02f4a80  vmaddfp 2, 4, 3, 2
  02f4a84  vctsxs 2, 2, 0
  02f4a88  vsplth 2, 2, 1
  02f4a8c  stvehx 2, 3, 30
  02f4a90  lbz 3, 83(31)
  02f4a94  cmpwi 3, 0
  02f4a98  bt 2, 0x2f5a3c
  02f4a9c  ori 3, 31, 0
  02f4aa0  li 4, 0
  02f4aa4  li 5, 0
  02f4aa8  li 6, 3
  02f4aac  bl 0xfddc0
  02f4ab0  nop
  02f4ab4  b 0x2f5a3c
  02f4ab8  lis 29, 151
  02f4abc  lfs 1, 16(31)
  02f4ac0  lfs 2, 20(31)
  02f4ac4  addic 29, 29, -25376
  02f4ac8  lis 3, 47
  02f4acc  addi 3, 3, 17520
  02f4ad0  lfs 3, 128(29)
  02f4ad4  lfs 4, 132(29)
  02f4ad8  fsubs 1, 3, 1
  02f4adc  fsubs 2, 4, 2
  02f4ae0  lis 4, 115
  02f4ae4  addic 4, 4, 22784
  02f4ae8  fabs 3, 1
  02f4aec  fabs 5, 2
  02f4af0  stfs 1, 240(1)
  02f4af4  stfs 2, 244(1)
  02f4af8  fsubs 1, 3, 5
  02f4afc  stfs 1, 248(1)
  02f4b00  lwz 5, 240(1)
  02f4b04  lfs 4, 0(3)
  02f4b08  lfs 1, 240(1)
  02f4b0c  lwz 3, 244(1)
  02f4b10  lfs 2, 244(1)
  02f4b14  fabs 1, 1
  02f4b18  lwz 6, 248(1)
  02f4b1c  rlwinm 3, 3, 3, 29, 29
  02f4b20  fabs 6, 2
  02f4b24  lfs 2, 248(1)
  02f4b28  rlwimi 3, 6, 2, 30, 30
  02f4b2c  fsub 7, 2, 4
  02f4b30  rlwimi 3, 5, 4, 28, 28
  02f4b34  fsub 8, 2, 4
  02f4b38  ori 5, 4, 0
  02f4b3c  rlwimi 5, 3, 2, 26, 28
  02f4b40  slwi 3, 3, 2
  02f4b44  clrldi 5, 5, 32
  02f4b48  fsel 5, 7, 1, 5
  02f4b4c  lfsx 1, 4, 3
  02f4b50  lfs 2, 4(5)
  02f4b54  fsel 3, 8, 6, 3
  02f4b58  fcmpu 0, 5, 4
  02f4b5c  bt 1, 0x2f4b64
  02f4b60  b 0x2f4c84
  02f4b64  fsubs 6, 3, 5
  02f4b68  fadds 3, 3, 5
  02f4b6c  addic 3, 1, 16
  02f4b70  li 7, 2
  02f4b74  addic 5, 3, 404
  02f4b78  addic 4, 3, 388
  02f4b7c  mtctr 7
  02f4b80  fdivs 3, 6, 3
  02f4b84  fmuls 5, 3, 3
  02f4b88  stfs 3, 416(1)
  02f4b8c  stfs 3, 408(1)
  02f4b90  stfs 3, 412(1)
  02f4b94  stfs 3, 404(1)
  02f4b98  lfs 7, 416(1)
  02f4b9c  lfs 8, 408(1)
  02f4ba0  lfs 9, 412(1)
  02f4ba4  fmuls 6, 5, 5
  02f4ba8  fmuls 8, 8, 5
  02f4bac  fmuls 7, 7, 6
  02f4bb0  fmuls 3, 6, 6
  02f4bb4  fmuls 6, 9, 6
  02f4bb8  stfs 8, 408(1)
  02f4bbc  fmuls 5, 7, 5
  02f4bc0  stfs 6, 412(1)
  02f4bc4  stfs 5, 416(1)
  02f4bc8  lfs 5, 388(3)
  02f4bcc  fmuls 5, 5, 3
  02f4bd0  stfs 5, 404(3)
  02f4bd4  lfs 5, 4(4)
  02f4bd8  addic 4, 4, 8
  02f4bdc  fmuls 5, 5, 3
  02f4be0  addic 3, 3, 8
  02f4be4  stfs 5, 4(5)
  02f4be8  addic 5, 5, 8
  02f4bec  bdnz 0x2f4bc8
  02f4bf0  li 5, 4
  02f4bf4  ori 3, 1, 0
  02f4bf8  mtctr 5
  02f4bfc  lis 4, 115
  02f4c00  addic 5, 3, 404
  02f4c04  addic 4, 4, 22752
  02f4c08  ori 6, 5, 0
  02f4c0c  lfs 3, 404(3)
  02f4c10  lfs 5, 0(4)
  02f4c14  fmuls 3, 3, 5
  02f4c18  lfs 5, 4(4)
  02f4c1c  addic 4, 4, 8
  02f4c20  stfs 3, 404(3)
  02f4c24  lfs 3, 4(5)
  02f4c28  addic 3, 3, 8
  02f4c2c  fmuls 3, 3, 5
  02f4c30  stfs 3, 4(5)
  02f4c34  addic 5, 5, 8
  02f4c38  bdnz 0x2f4c0c
  02f4c3c  ori 3, 1, 0
  02f4c40  mtctr 7
  02f4c44  lfs 3, 404(3)
  02f4c48  fadds 3, 4, 3
  02f4c4c  addic 3, 3, 16
  02f4c50  lfs 4, 4(6)
  02f4c54  lfs 5, 8(6)
  02f4c58  lfs 6, 12(6)
  02f4c5c  addic 6, 6, 16
  02f4c60  fadds 3, 3, 4
  02f4c64  fadds 4, 3, 5
  02f4c68  fadds 4, 4, 6
  02f4c6c  bdnz 0x2f4c44
  02f4c70  lis 3, 47
  02f4c74  addi 3, 3, 17520
  02f4c78  lfs 3, 12(3)
  02f4c7c  fadds 4, 4, 3
  02f4c80  fmadds 4, 4, 1, 2
  02f4c84  lis 3, 47
  02f4c88  fmr 1, 4
  02f4c8c  addic 5, 30, 324
  02f4c90  addi 4, 3, 17520
  02f4c94  ori 3, 31, 0
  02f4c98  lfs 4, 28(4)
  02f4c9c  lfs 2, 20(4)
  02f4ca0  lfs 5, 24(4)
  02f4ca4  fmr 3, 5
  02f4ca8  bl 0xff2e8
  02f4cac  nop
  02f4cb0  lhz 3, 320(30)
  02f4cb4  lfs 4, 348(30)
  02f4cb8  extsh 4, 3
  02f4cbc  cmpwi 4, 0
  02f4cc0  bf 1, 0x2f4ccc
  02f4cc4  addic 3, 3, -1
  02f4cc8  sth 3, 320(30)
  02f4ccc  lfs 1, 20(31)
  02f4cd0  lfs 2, 132(29)
  02f4cd4  lfs 3, 16(31)
  02f4cd8  fsubs 2, 1, 2
  02f4cdc  lfs 1, 128(29)
  02f4ce0  fsubs 3, 3, 1
  02f4ce4  fmuls 2, 2, 2
  02f4ce8  fmadds 2, 3, 3, 2
  02f4cec  fsqrts 2, 2
  02f4cf0  fcmpu 0, 2, 4
  02f4cf4  cror 6, 1, 2
  02f4cf8  bt 6, 0x2f5a3c
  02f4cfc  clrlwi 3, 3, 16
  02f4d00  cmpwi 3, 0
  02f4d04  bf 2, 0x2f5a3c
  02f4d08  lfs 2, 24(31)
  02f4d0c  lis 3, 47
  02f4d10  lfs 3, 136(29)
  02f4d14  addi 3, 3, 17520
  02f4d18  fsubs 2, 2, 3
  02f4d1c  lfs 3, 32(3)
  02f4d20  fabs 2, 2
  02f4d24  fcmpu 0, 2, 3
  02f4d28  cror 6, 1, 2
  02f4d2c  bt 6, 0x2f5a3c
  02f4d30  stfs 1, 304(30)
  02f4d34  li 3, 2
  02f4d38  lfs 1, 132(29)
  02f4d3c  stfs 1, 308(30)
  02f4d40  lfs 1, 136(29)
  02f4d44  stfs 1, 312(30)
  02f4d48  lfs 1, 140(29)
  02f4d4c  stfs 1, 316(30)
  02f4d50  lbz 4, 83(31)
  02f4d54  stb 3, 32(31)
  02f4d58  cmpwi 4, 1
  02f4d5c  bt 2, 0x2f4d78
  02f4d60  ori 3, 31, 0
  02f4d64  li 4, 1
  02f4d68  li 5, 0
  02f4d6c  li 6, 3
  02f4d70  bl 0xfddc0
  02f4d74  nop
  02f4d78  li 3, 344
  02f4d7c  vspltisw 4, -1
  02f4d80  lis 6, 47
  02f4d84  vspltisw 5, -1
  02f4d88  addi 5, 3, 16
  02f4d8c  li 4, 36
  02f4d90  vslw 4, 4, 4
  02f4d94  <unknown>
  02f4d98  addi 3, 6, 17520
  02f4d9c  <unknown>
  02f4da0  lis 5, 114
  02f4da4  vor 2, 2, 3
  02f4da8  <unknown>
  02f4dac  li 3, -3056
  02f4db0  vspltw 3, 3, 0
  02f4db4  vmaddfp 2, 2, 3, 4
  02f4db8  vslw 3, 5, 5
  02f4dbc  <unknown>
  02f4dc0  li 3, 320
  02f4dc4  vmaddfp 2, 4, 2, 3
  02f4dc8  vctsxs 2, 2, 0
  02f4dcc  vsplth 2, 2, 1
  02f4dd0  stvehx 2, 3, 30
  02f4dd4  b 0x2f5a3c
  02f4dd8  lwz 3, 328(30)
  02f4ddc  cmpwi 3, 0
  02f4de0  cmpwi 1, 3, -1
  02f4de4  cmpwi 6, 3, 1
  02f4de8  cmpwi 7, 3, 2
  02f4dec  bt 1, 0x2f4df8
  02f4df0  bf 5, 0x2f4f58
  02f4df4  b 0x2f4e04
  02f4df8  bf 25, 0x2f4e20
  02f4dfc  bf 29, 0x2f4e44
  02f4e00  b 0x2f4f58
  02f4e04  addic 4, 30, 176
  02f4e08  addic 5, 30, 304
  02f4e0c  addic 6, 1, 112
  02f4e10  ori 3, 31, 0
  02f4e14  bl 0x101cc0
  02f4e18  nop
  02f4e1c  b 0x2f4f58
  02f4e20  lis 4, 151
  02f4e24  ori 3, 31, 0
  02f4e28  addic 5, 4, -25376
  02f4e2c  addic 4, 30, 176
  02f4e30  addic 5, 5, 128
  02f4e34  addic 6, 1, 112
  02f4e38  bl 0x101cc0
  02f4e3c  nop
  02f4e40  b 0x2f4f58
  02f4e44  lwz 3, 256(30)
  02f4e48  lwz 5, 272(30)
  02f4e4c  addic 4, 30, 176
  02f4e50  slwi 3, 3, 4
  02f4e54  addic 6, 1, 144
  02f4e58  addc 3, 5, 3
  02f4e5c  addic 5, 1, 128
  02f4e60  clrldi 7, 3, 32
  02f4e64  ori 3, 31, 0
  02f4e68  lfs 1, 16(7)
  02f4e6c  stfs 1, 128(1)
  02f4e70  lfs 1, 20(7)
  02f4e74  stfs 1, 132(1)
  02f4e78  lfs 1, 24(7)
  02f4e7c  stfs 1, 136(1)
  02f4e80  lfs 1, 28(7)
  02f4e84  stfs 1, 140(1)
  02f4e88  bl 0x101cc0
  02f4e8c  nop
  02f4e90  cmpwi 3, 0
  02f4e94  bt 2, 0x2f4f58
  02f4e98  lwz 5, 272(30)
  02f4e9c  li 3, 0
  02f4ea0  lwz 4, 256(30)
  02f4ea4  addic 6, 4, 1
  02f4ea8  addic 8, 4, -1
  02f4eac  lwz 7, 0(5)
  02f4eb0  subc 9, 4, 6
  02f4eb4  subc 7, 7, 6
  02f4eb8  subc 10, 4, 8
  02f4ebc  cntlzw 7, 7
  02f4ec0  sldi 4, 7, 58
  02f4ec4  extsw 7, 8
  02f4ec8  sradi 4, 4, 63
  02f4ecc  subc 3, 7, 3
  02f4ed0  and 4, 4, 9
  02f4ed4  sradi 3, 3, 63
  02f4ed8  addc 4, 6, 4
  02f4edc  and 3, 3, 10
  02f4ee0  slwi 6, 4, 4
  02f4ee4  addc 3, 8, 3
  02f4ee8  addc 6, 5, 6
  02f4eec  lis 7, 151
  02f4ef0  clrldi 6, 6, 32
  02f4ef4  sldi 8, 3, 4
  02f4ef8  addic 7, 7, -25376
  02f4efc  addc 5, 5, 8
  02f4f00  clrldi 5, 5, 32
  02f4f04  lfs 1, 20(6)
  02f4f08  lfs 2, 132(7)
  02f4f0c  lfs 3, 128(7)
  02f4f10  lfs 4, 16(6)
  02f4f14  fsubs 1, 2, 1
  02f4f18  lfs 5, 20(5)
  02f4f1c  fsubs 4, 3, 4
  02f4f20  fsubs 2, 2, 5
  02f4f24  lfs 5, 16(5)
  02f4f28  fsubs 3, 3, 5
  02f4f2c  fmuls 1, 1, 1
  02f4f30  fmuls 2, 2, 2
  02f4f34  fmadds 1, 4, 4, 1
  02f4f38  fmadds 2, 3, 3, 2
  02f4f3c  fsqrts 1, 1
  02f4f40  fsqrts 2, 2
  02f4f44  fcmpu 0, 1, 2
  02f4f48  cror 6, 1, 2
  02f4f4c  bt 6, 0x2f4f54
  02f4f50  ori 3, 4, 0
  02f4f54  stw 3, 256(30)
  02f4f58  lis 28, 151
  02f4f5c  lfs 3, 20(31)
  02f4f60  lfs 2, 16(31)
  02f4f64  addic 28, 28, -25376
  02f4f68  lfs 4, 132(28)
  02f4f6c  lfs 1, 128(28)
  02f4f70  fsubs 5, 3, 4
  02f4f74  fsubs 6, 2, 1
  02f4f78  fmuls 5, 5, 5
  02f4f7c  fmadds 5, 6, 6, 5
  02f4f80  lfs 6, 332(30)
  02f4f84  fsqrts 5, 5
  02f4f88  fcmpu 0, 5, 6
  02f4f8c  cror 6, 1, 2
  02f4f90  bt 6, 0x2f58c4
  02f4f94  lwz 3, 8324(28)
  02f4f98  cmpwi 3, 22
  02f4f9c  bt 2, 0x2f58c4
  02f4fa0  fsubs 1, 1, 2
  02f4fa4  lis 3, 47
  02f4fa8  fsubs 4, 4, 3
  02f4fac  addi 3, 3, 17520
  02f4fb0  lis 29, 115
  02f4fb4  addic 29, 29, 22784
  02f4fb8  fabs 5, 1
  02f4fbc  fabs 6, 4
  02f4fc0  stfs 1, 228(1)
  02f4fc4  stfs 4, 232(1)
  02f4fc8  fsubs 1, 5, 6
  02f4fcc  stfs 1, 236(1)
  02f4fd0  lwz 4, 228(1)
  02f4fd4  lfs 31, 0(3)
  02f4fd8  lfs 1, 228(1)
  02f4fdc  lwz 3, 232(1)
  02f4fe0  lfs 4, 232(1)
  02f4fe4  fabs 1, 1
  02f4fe8  lwz 5, 236(1)
  02f4fec  rlwinm 3, 3, 3, 29, 29
  02f4ff0  fabs 7, 4
  02f4ff4  lfs 4, 236(1)
  02f4ff8  rlwimi 3, 5, 2, 30, 30
  02f4ffc  fsub 8, 4, 31
  02f5000  rlwimi 3, 4, 4, 28, 28
  02f5004  fsub 9, 4, 31
  02f5008  ori 4, 29, 0
  02f500c  rlwimi 4, 3, 2, 26, 28
  02f5010  slwi 3, 3, 2
  02f5014  clrldi 4, 4, 32
  02f5018  fsel 6, 8, 1, 6
  02f501c  lfsx 1, 29, 3
  02f5020  lfs 4, 4(4)
  02f5024  fsel 5, 9, 7, 5
  02f5028  fcmpu 0, 6, 31
  02f502c  bt 1, 0x2f5038
  02f5030  fmr 1, 31
  02f5034  b 0x2f515c
  02f5038  fsubs 7, 5, 6
  02f503c  fadds 5, 5, 6
  02f5040  addic 3, 1, 16
  02f5044  li 7, 2
  02f5048  addic 4, 3, 356
  02f504c  addic 5, 3, 372
  02f5050  mtctr 7
  02f5054  fdivs 5, 7, 5
  02f5058  fmuls 6, 5, 5
  02f505c  stfs 5, 384(1)
  02f5060  stfs 5, 376(1)
  02f5064  stfs 5, 380(1)
  02f5068  stfs 5, 372(1)
  02f506c  lfs 8, 384(1)
  02f5070  lfs 9, 376(1)
  02f5074  lfs 10, 380(1)
  02f5078  fmuls 7, 6, 6
  02f507c  fmuls 9, 9, 6
  02f5080  fmuls 8, 8, 7
  02f5084  fmuls 5, 7, 7
  02f5088  fmuls 7, 10, 7
  02f508c  stfs 9, 376(1)
  02f5090  fmuls 6, 8, 6
  02f5094  stfs 7, 380(1)
  02f5098  stfs 6, 384(1)
  02f509c  lfs 6, 356(3)
  02f50a0  fmuls 6, 6, 5
  02f50a4  stfs 6, 372(3)
  02f50a8  lfs 6, 4(4)
  02f50ac  addic 3, 3, 8
  02f50b0  addic 4, 4, 8
  02f50b4  fmuls 6, 6, 5
  02f50b8  stfs 6, 4(5)
  02f50bc  addic 5, 5, 8
  02f50c0  bdnz 0x2f509c
  02f50c4  li 5, 4
  02f50c8  ori 3, 1, 0
  02f50cc  mtctr 5
  02f50d0  lis 4, 115
  02f50d4  addic 5, 3, 372
  02f50d8  addic 4, 4, 22752
  02f50dc  ori 6, 5, 0
  02f50e0  lfs 5, 372(3)
  02f50e4  lfs 6, 0(4)
  02f50e8  fmuls 5, 5, 6
  02f50ec  lfs 6, 4(4)
  02f50f0  addic 4, 4, 8
  02f50f4  stfs 5, 372(3)
  02f50f8  lfs 5, 4(5)
  02f50fc  addic 3, 3, 8
  02f5100  fmuls 5, 5, 6
  02f5104  stfs 5, 4(5)
  02f5108  addic 5, 5, 8
  02f510c  bdnz 0x2f50e0
  02f5110  fmr 5, 31
  02f5114  ori 3, 1, 0
  02f5118  mtctr 7
  02f511c  lfs 6, 372(3)
  02f5120  fadds 5, 5, 6
  02f5124  addic 3, 3, 16
  02f5128  lfs 6, 4(6)
  02f512c  lfs 7, 8(6)
  02f5130  lfs 8, 12(6)
  02f5134  addic 6, 6, 16
  02f5138  fadds 5, 5, 6
  02f513c  fadds 5, 5, 7
  02f5140  fadds 5, 5, 8
  02f5144  bdnz 0x2f511c
  02f5148  lis 3, 47
  02f514c  addi 3, 3, 17520
  02f5150  lfs 6, 12(3)
  02f5154  fadds 5, 5, 6
  02f5158  fmadds 1, 5, 1, 4
  02f515c  lis 3, 47
  02f5160  addi 3, 3, 17520
  02f5164  lfs 30, 40(3)
  02f5168  lfs 29, 44(3)
  02f516c  fadds 1, 1, 30
  02f5170  lfs 28, 48(3)
  02f5174  lfs 4, 128(28)
  02f5178  lfs 5, 132(28)
  02f517c  fsubs 2, 4, 2
  02f5180  fsubs 3, 5, 3
  02f5184  lfs 27, 52(3)
  02f5188  lfs 26, 56(3)
  02f518c  lfs 25, 60(3)
  02f5190  lfs 24, 64(3)
  02f5194  fsubs 6, 29, 1
  02f5198  fsubs 7, 28, 1
  02f519c  lfs 9, 68(3)
  02f51a0  fabs 8, 2
  02f51a4  fabs 5, 3
  02f51a8  stfs 2, 216(1)
  02f51ac  fmr 2, 9
  02f51b0  fsub 4, 1, 6
  02f51b4  fsel 1, 4, 6, 1
  02f51b8  fsubs 4, 8, 5
  02f51bc  fsub 6, 7, 1
  02f51c0  stfs 4, 224(1)
  02f51c4  stfs 3, 220(1)
  02f51c8  lwz 3, 216(1)
  02f51cc  lwz 4, 224(1)
  02f51d0  fsel 1, 6, 7, 1
  02f51d4  lfs 6, 224(1)
  02f51d8  lfs 7, 216(1)
  02f51dc  lwz 5, 220(1)
  02f51e0  rlwinm 5, 5, 3, 29, 29
  02f51e4  rlwimi 5, 4, 2, 30, 30
  02f51e8  fmuls 3, 1, 1
  02f51ec  rlwimi 5, 3, 4, 28, 28
  02f51f0  ori 3, 29, 0
  02f51f4  slwi 4, 5, 2
  02f51f8  rlwimi 3, 5, 2, 26, 28
  02f51fc  clrldi 3, 3, 32
  02f5200  fmuls 4, 3, 1
  02f5204  fmuls 9, 3, 4
  02f5208  fmadds 1, 4, 27, 1
  02f520c  fabs 4, 7
  02f5210  fsub 7, 6, 31
  02f5214  fmuls 10, 3, 9
  02f5218  fmadds 1, 9, 26, 1
  02f521c  fsel 5, 7, 4, 5
  02f5220  lfs 4, 220(1)
  02f5224  fabs 4, 4
  02f5228  fmuls 3, 3, 10
  02f522c  fmadds 1, 10, 25, 1
  02f5230  fcmpu 0, 5, 31
  02f5234  fmadds 1, 3, 24, 1
  02f5238  fsub 3, 6, 31
  02f523c  fmuls 1, 1, 2
  02f5240  fsel 4, 3, 4, 8
  02f5244  stfs 1, 160(1)
  02f5248  lfsx 1, 29, 4
  02f524c  lfs 3, 4(3)
  02f5250  bt 1, 0x2f525c
  02f5254  fmr 1, 31
  02f5258  b 0x2f5380
  02f525c  fsubs 6, 4, 5
  02f5260  fadds 4, 4, 5
  02f5264  addic 3, 1, 16
  02f5268  li 7, 2
  02f526c  addic 5, 3, 340
  02f5270  addic 4, 3, 324
  02f5274  mtctr 7
  02f5278  fdivs 4, 6, 4
  02f527c  fmuls 5, 4, 4
  02f5280  stfs 4, 352(1)
  02f5284  stfs 4, 344(1)
  02f5288  stfs 4, 348(1)
  02f528c  stfs 4, 340(1)
  02f5290  lfs 7, 352(1)
  02f5294  lfs 8, 344(1)
  02f5298  lfs 9, 348(1)
  02f529c  fmuls 6, 5, 5
  02f52a0  fmuls 8, 8, 5
  02f52a4  fmuls 7, 7, 6
  02f52a8  fmuls 4, 6, 6
  02f52ac  fmuls 6, 9, 6
  02f52b0  stfs 8, 344(1)
  02f52b4  fmuls 5, 7, 5
  02f52b8  stfs 6, 348(1)
  02f52bc  stfs 5, 352(1)
  02f52c0  lfs 5, 324(3)
  02f52c4  fmuls 5, 5, 4
  02f52c8  stfs 5, 340(3)
  02f52cc  lfs 5, 4(4)
  02f52d0  addic 4, 4, 8
  02f52d4  fmuls 5, 5, 4
  02f52d8  addic 3, 3, 8
  02f52dc  stfs 5, 4(5)
  02f52e0  addic 5, 5, 8
  02f52e4  bdnz 0x2f52c0
  02f52e8  li 5, 4
  02f52ec  ori 3, 1, 0
  02f52f0  mtctr 5
  02f52f4  lis 4, 115
  02f52f8  addic 5, 3, 340
  02f52fc  addic 4, 4, 22752
  02f5300  ori 6, 5, 0
  02f5304  lfs 4, 340(3)
  02f5308  lfs 5, 0(4)
  02f530c  fmuls 4, 4, 5
  02f5310  lfs 5, 4(4)
  02f5314  addic 4, 4, 8
  02f5318  stfs 4, 340(3)
  02f531c  lfs 4, 4(5)
  02f5320  addic 3, 3, 8
  02f5324  fmuls 4, 4, 5
  02f5328  stfs 4, 4(5)
  02f532c  addic 5, 5, 8
  02f5330  bdnz 0x2f5304
  02f5334  ori 3, 1, 0
  02f5338  fmr 4, 31
  02f533c  mtctr 7
  02f5340  lfs 5, 340(3)
  02f5344  fadds 4, 4, 5
  02f5348  lfs 5, 4(6)
  02f534c  addic 3, 3, 16
  02f5350  lfs 6, 8(6)
  02f5354  lfs 7, 12(6)
  02f5358  addic 6, 6, 16
  02f535c  fadds 4, 4, 5
  02f5360  fadds 4, 4, 6
  02f5364  fadds 4, 4, 7
  02f5368  bdnz 0x2f5340
  02f536c  lis 3, 47
  02f5370  addi 3, 3, 17520
  02f5374  lfs 5, 12(3)
  02f5378  fadds 4, 4, 5
  02f537c  fmadds 1, 4, 1, 3
  02f5380  fsubs 3, 29, 1
  02f5384  fsubs 4, 28, 1
  02f5388  li 3, 0
  02f538c  addic 7, 1, 176
  02f5390  addic 8, 1, 160
  02f5394  stw 3, 168(1)
  02f5398  fsub 5, 1, 3
  02f539c  lis 3, 47
  02f53a0  lwz 5, 8320(28)
  02f53a4  ori 4, 31, 0
  02f53a8  addi 6, 3, 17520
  02f53ac  ori 3, 5, 0
  02f53b0  fsel 1, 5, 3, 1
  02f53b4  fsub 3, 4, 1
  02f53b8  fsel 1, 3, 4, 1
  02f53bc  fmuls 3, 1, 1
  02f53c0  fmuls 4, 3, 1
  02f53c4  fmuls 5, 3, 4
  02f53c8  fmadds 1, 4, 27, 1
  02f53cc  fmuls 4, 3, 5
  02f53d0  fmadds 1, 5, 26, 1
  02f53d4  fmuls 3, 3, 4
  02f53d8  fmadds 1, 4, 25, 1
  02f53dc  fmadds 1, 3, 24, 1
  02f53e0  fmuls 1, 1, 2
  02f53e4  stfs 1, 164(1)
  02f53e8  lfs 1, 16(5)
  02f53ec  stfs 1, 176(1)
  02f53f0  lfs 1, 20(5)
  02f53f4  stfs 1, 180(1)
  02f53f8  lfs 1, 24(5)
  02f53fc  stfs 1, 184(1)
  02f5400  lfs 2, 28(5)
  02f5404  li 5, 1
  02f5408  stfs 2, 188(1)
  02f540c  lfs 2, 72(6)
  02f5410  fadds 1, 1, 2
  02f5414  stfs 1, 184(1)
  02f5418  lfs 1, 76(6)
  02f541c  bl 0x105c08
  02f5420  nop
  02f5424  lfs 6, 128(28)
  02f5428  lfs 5, 16(31)
  02f542c  lfs 7, 132(28)
  02f5430  lfs 1, 20(31)
  02f5434  fsubs 6, 6, 5
  02f5438  fsubs 7, 7, 1
  02f543c  li 3, 320
  02f5440  li 4, 336
  02f5444  addi 7, 3, 16
  02f5448  fabs 1, 6
  02f544c  fabs 2, 7
  02f5450  stfs 6, 204(1)
  02f5454  stfs 7, 208(1)
  02f5458  fsubs 8, 1, 2
  02f545c  stfs 8, 212(1)
  02f5460  lwz 5, 204(1)
  02f5464  lfs 3, 204(1)
  02f5468  lwz 6, 208(1)
  02f546c  fabs 10, 3
  02f5470  lfs 3, 208(1)
  02f5474  <unknown>
  02f5478  addi 3, 4, 16
  02f547c  <unknown>
  02f5480  <unknown>
  02f5484  rlwinm 6, 6, 3, 29, 29
  02f5488  vor 2, 2, 3
  02f548c  fabs 9, 3
  02f5490  <unknown>
  02f5494  lwz 3, 212(1)
  02f5498  lfs 3, 212(1)
  02f549c  rlwimi 6, 3, 2, 30, 30
  02f54a0  fsub 4, 3, 31
  02f54a4  ori 3, 29, 0
  02f54a8  fsub 11, 3, 31
  02f54ac  rlwimi 6, 5, 4, 28, 28
  02f54b0  vor 3, 4, 3
  02f54b4  rlwimi 3, 6, 2, 26, 28
  02f54b8  slwi 4, 6, 2
  02f54bc  clrldi 3, 3, 32
  02f54c0  lfsx 3, 29, 4
  02f54c4  fsel 10, 4, 10, 2
  02f54c8  lfs 4, 4(3)
  02f54cc  fsel 9, 11, 9, 1
  02f54d0  fcmpu 0, 10, 31
  02f54d4  bt 1, 0x2f54e0
  02f54d8  fmr 3, 31
  02f54dc  b 0x2f5604
  02f54e0  fsubs 11, 9, 10
  02f54e4  fadds 9, 9, 10
  02f54e8  addic 3, 1, 16
  02f54ec  li 7, 2
  02f54f0  addic 4, 3, 292
  02f54f4  addic 5, 3, 308
  02f54f8  mtctr 7
  02f54fc  fdivs 9, 11, 9
  02f5500  fmuls 10, 9, 9
  02f5504  stfs 9, 320(1)
  02f5508  stfs 9, 312(1)
  02f550c  stfs 9, 316(1)
  02f5510  stfs 9, 308(1)
  02f5514  lfs 12, 320(1)
  02f5518  lfs 13, 312(1)
  02f551c  lfs 0, 316(1)
  02f5520  fmuls 11, 10, 10
  02f5524  fmuls 13, 13, 10
  02f5528  fmuls 12, 12, 11
  02f552c  fmuls 9, 11, 11
  02f5530  fmuls 11, 0, 11
  02f5534  stfs 13, 312(1)
  02f5538  fmuls 10, 12, 10
  02f553c  stfs 11, 316(1)
  02f5540  stfs 10, 320(1)
  02f5544  lfs 10, 292(3)
  02f5548  fmuls 10, 10, 9
  02f554c  stfs 10, 308(3)
  02f5550  lfs 10, 4(4)
  02f5554  addic 3, 3, 8
  02f5558  addic 4, 4, 8
  02f555c  fmuls 10, 10, 9
  02f5560  stfs 10, 4(5)
  02f5564  addic 5, 5, 8
  02f5568  bdnz 0x2f5544
  02f556c  li 5, 4
  02f5570  ori 3, 1, 0
  02f5574  mtctr 5
  02f5578  lis 4, 115
  02f557c  addic 5, 3, 308
  02f5580  addic 4, 4, 22752
  02f5584  ori 6, 5, 0
  02f5588  lfs 9, 308(3)
  02f558c  lfs 10, 0(4)
  02f5590  fmuls 9, 9, 10
  02f5594  lfs 10, 4(4)
  02f5598  addic 4, 4, 8
  02f559c  stfs 9, 308(3)
  02f55a0  lfs 9, 4(5)
  02f55a4  addic 3, 3, 8
  02f55a8  fmuls 9, 9, 10
  02f55ac  stfs 9, 4(5)
  02f55b0  addic 5, 5, 8
  02f55b4  bdnz 0x2f5588
  02f55b8  fmr 9, 31
  02f55bc  ori 3, 1, 0
  02f55c0  mtctr 7
  02f55c4  lfs 10, 308(3)
  02f55c8  fadds 9, 9, 10
  02f55cc  addic 3, 3, 16
  02f55d0  lfs 10, 4(6)
  02f55d4  lfs 11, 8(6)
  02f55d8  lfs 12, 12(6)
  02f55dc  addic 6, 6, 16
  02f55e0  fadds 9, 9, 10
  02f55e4  fadds 9, 9, 11
  02f55e8  fadds 9, 9, 12
  02f55ec  bdnz 0x2f55c4
  02f55f0  lis 3, 47
  02f55f4  addi 3, 3, 17520
  02f55f8  lfs 10, 12(3)
  02f55fc  fadds 9, 9, 10
  02f5600  fmadds 3, 9, 3, 4
  02f5604  fadds 3, 3, 30
  02f5608  stfs 6, 192(1)
  02f560c  stfs 8, 200(1)
  02f5610  stfs 7, 196(1)
  02f5614  fmr 8, 1
  02f5618  lwz 3, 192(1)
  02f561c  lwz 4, 200(1)
  02f5620  lfs 7, 200(1)
  02f5624  fsub 1, 7, 31
  02f5628  fsubs 4, 29, 3
  02f562c  fsubs 9, 28, 3
  02f5630  fsub 7, 7, 31
  02f5634  fsub 6, 3, 4
  02f5638  fsel 3, 6, 4, 3
  02f563c  lfs 6, 192(1)
  02f5640  lwz 5, 196(1)
  02f5644  fabs 6, 6
  02f5648  rlwinm 5, 5, 3, 29, 29
  02f564c  rlwimi 5, 4, 2, 30, 30
  02f5650  fsub 4, 9, 3
  02f5654  rlwimi 5, 3, 4, 28, 28
  02f5658  ori 3, 29, 0
  02f565c  fsel 6, 1, 6, 2
  02f5660  lfs 1, 196(1)
  02f5664  rlwimi 3, 5, 2, 26, 28
  02f5668  slwi 4, 5, 2
  02f566c  clrldi 3, 3, 32
  02f5670  fsel 3, 4, 9, 3
  02f5674  fabs 4, 1
  02f5678  lfsx 1, 29, 4
  02f567c  fcmpu 0, 6, 31
  02f5680  fmuls 9, 3, 3
  02f5684  fsel 4, 7, 4, 8
  02f5688  fmuls 2, 9, 3
  02f568c  fmuls 10, 9, 2
  02f5690  fmadds 3, 2, 27, 3
  02f5694  lfs 2, 4(3)
  02f5698  fmuls 7, 9, 10
  02f569c  fmadds 3, 10, 26, 3
  02f56a0  fmuls 8, 9, 7
  02f56a4  fmadds 3, 7, 25, 3
  02f56a8  fmadds 3, 8, 24, 3
  02f56ac  bt 1, 0x2f56b4
  02f56b0  b 0x2f57d4
  02f56b4  fsubs 7, 4, 6
  02f56b8  fadds 4, 4, 6
  02f56bc  addic 3, 1, 16
  02f56c0  li 7, 2
  02f56c4  addic 5, 3, 276
  02f56c8  addic 4, 3, 260
  02f56cc  mtctr 7
  02f56d0  fdivs 4, 7, 4
  02f56d4  fmuls 6, 4, 4
  02f56d8  stfs 4, 288(1)
  02f56dc  stfs 4, 280(1)
  02f56e0  stfs 4, 284(1)
  02f56e4  stfs 4, 276(1)
  02f56e8  lfs 8, 288(1)
  02f56ec  lfs 9, 280(1)
  02f56f0  lfs 10, 284(1)
  02f56f4  fmuls 7, 6, 6
  02f56f8  fmuls 9, 9, 6
  02f56fc  fmuls 8, 8, 7
  02f5700  fmuls 4, 7, 7
  02f5704  fmuls 7, 10, 7
  02f5708  stfs 9, 280(1)
  02f570c  fmuls 6, 8, 6
  02f5710  stfs 7, 284(1)
  02f5714  stfs 6, 288(1)
  02f5718  lfs 6, 260(3)
  02f571c  fmuls 6, 6, 4
  02f5720  stfs 6, 276(3)
  02f5724  lfs 6, 4(4)
  02f5728  addic 4, 4, 8
  02f572c  fmuls 6, 6, 4
  02f5730  addic 3, 3, 8
  02f5734  stfs 6, 4(5)
  02f5738  addic 5, 5, 8
  02f573c  bdnz 0x2f5718
  02f5740  li 5, 4
  02f5744  ori 3, 1, 0
  02f5748  mtctr 5
  02f574c  lis 4, 115
  02f5750  addic 5, 3, 276
  02f5754  addic 4, 4, 22752
  02f5758  ori 6, 5, 0
  02f575c  lfs 4, 276(3)
  02f5760  lfs 6, 0(4)
  02f5764  fmuls 4, 4, 6
  02f5768  lfs 6, 4(4)
  02f576c  addic 4, 4, 8
  02f5770  stfs 4, 276(3)
  02f5774  lfs 4, 4(5)
  02f5778  addic 3, 3, 8
  02f577c  fmuls 4, 4, 6
  02f5780  stfs 4, 4(5)
  02f5784  addic 5, 5, 8
  02f5788  bdnz 0x2f575c
  02f578c  ori 3, 1, 0
  02f5790  mtctr 7
  02f5794  lfs 4, 276(3)
  02f5798  lfs 6, 4(6)
  02f579c  fadds 4, 31, 4
  02f57a0  lfs 7, 8(6)
  02f57a4  addic 3, 3, 16
  02f57a8  lfs 31, 12(6)
  02f57ac  addic 6, 6, 16
  02f57b0  fadds 4, 4, 6
  02f57b4  fadds 4, 4, 7
  02f57b8  fadds 31, 4, 31
  02f57bc  bdnz 0x2f5794
  02f57c0  lis 3, 47
  02f57c4  addi 3, 3, 17520
  02f57c8  lfs 4, 12(3)
  02f57cc  fadds 31, 31, 4
  02f57d0  fmadds 31, 31, 1, 2
  02f57d4  fsubs 1, 29, 31
  02f57d8  fsubs 2, 28, 31
  02f57dc  vspltisw 4, -1
  02f57e0  lis 3, 114
  02f57e4  vspltisw 8, -16
  02f57e8  li 4, -3064
  02f57ec  vspltisw 5, -1
  02f57f0  lis 5, 47
  02f57f4  vslw 4, 4, 4
  02f57f8  fsub 4, 31, 1
  02f57fc  li 6, 32
  02f5800  addi 5, 5, 17520
  02f5804  vsraw 2, 2, 8
  02f5808  vslw 5, 5, 5
  02f580c  vspltisw 6, -1
  02f5810  vcfsx 2, 2, 0
  02f5814  fsel 1, 4, 1, 31
  02f5818  vslw 6, 6, 6
  02f581c  vspltisw 9, -1
  02f5820  fsub 4, 2, 1
  02f5824  vslw 9, 9, 9
  02f5828  fsel 1, 4, 2, 1
  02f582c  fadds 2, 5, 3
  02f5830  fmuls 3, 1, 1
  02f5834  stfs 2, 304(30)
  02f5838  lfs 2, 20(31)
  02f583c  fmuls 4, 3, 1
  02f5840  fmuls 5, 3, 4
  02f5844  fmadds 1, 4, 27, 1
  02f5848  fmuls 4, 3, 5
  02f584c  fmadds 1, 5, 26, 1
  02f5850  fmuls 3, 3, 4
  02f5854  fmadds 1, 4, 25, 1
  02f5858  fmadds 1, 3, 24, 1
  02f585c  fadds 1, 2, 1
  02f5860  stfs 1, 308(30)
  02f5864  lfs 1, 24(31)
  02f5868  stfs 1, 312(30)
  02f586c  lfs 1, 28(31)
  02f5870  stfs 1, 316(30)
  02f5874  <unknown>
  02f5878  vmaddfp 3, 3, 7, 4
  02f587c  <unknown>
  02f5880  vspltw 4, 4, 0
  02f5884  vrefp 7, 3
  02f5888  vnmsubfp 8, 7, 3, 4
  02f588c  vmaddfp 5, 7, 8, 5
  02f5890  vspltw 7, 2, 0
  02f5894  vnmsubfp 2, 5, 3, 4
  02f5898  vmaddfp 2, 5, 2, 6
  02f589c  vnmsubfp 3, 2, 3, 4
  02f58a0  vmaddfp 2, 2, 3, 9
  02f58a4  vspltw 3, 2, 0
  02f58a8  vcmpgefp. 3, 7, 3
  02f58ac  bf 26, 0x2f5a3c
  02f58b0  vctsxs 2, 2, 0
  02f58b4  li 3, 320
  02f58b8  vsplth 2, 2, 1
  02f58bc  stvehx 2, 3, 30
  02f58c0  b 0x2f5a3c
  02f58c4  lfs 1, 348(30)
  02f58c8  fcmpu 0, 5, 1
  02f58cc  cror 6, 0, 2
  02f58d0  bt 6, 0x2f58e4
  02f58d4  lbz 3, 112(31)
  02f58d8  rlwinm 3, 3, 0, 30, 30
  02f58dc  cmpwi 3, 0
  02f58e0  bf 2, 0x2f58fc
  02f58e4  lhz 3, 320(30)
  02f58e8  addic 3, 3, -1
  02f58ec  extsh 4, 3
  02f58f0  cmpwi 4, 0
  02f58f4  sth 3, 320(30)
  02f58f8  bf 2, 0x2f5a3c
  02f58fc  li 3, 1
  02f5900  lbz 4, 83(31)
  02f5904  cmpwi 4, 0
  02f5908  stb 3, 32(31)
  02f590c  bt 2, 0x2f5928
  02f5910  ori 3, 31, 0
  02f5914  li 4, 0
  02f5918  li 5, 0
  02f591c  li 6, 3
  02f5920  bl 0xfddc0
  02f5924  nop
  02f5928  li 3, 340
  02f592c  vspltisw 4, -1
  02f5930  lis 6, 47
  02f5934  vspltisw 5, -1
  02f5938  addi 5, 3, 16
  02f593c  li 4, 36
  02f5940  vslw 4, 4, 4
  02f5944  <unknown>
  02f5948  addi 3, 6, 17520
  02f594c  <unknown>
  02f5950  lis 5, 114
  02f5954  vor 2, 2, 3
  02f5958  <unknown>
  02f595c  li 3, -3056
  02f5960  vspltw 3, 3, 0
  02f5964  vmaddfp 2, 2, 3, 4
  02f5968  vslw 3, 5, 5
  02f596c  <unknown>
  02f5970  li 3, 320
  02f5974  vmaddfp 2, 4, 2, 3
  02f5978  vctsxs 2, 2, 0
  02f597c  vsplth 2, 2, 1
  02f5980  stvehx 2, 3, 30
  02f5984  b 0x2f5a3c
  02f5988  ori 3, 31, 0
  02f598c  addic 4, 30, 80
  02f5990  bl 0x10b030
  02f5994  nop
  02f5998  rlwinm 3, 3, 0, 25, 25
  02f599c  cmpwi 3, 0
  02f59a0  bt 2, 0x2f5a3c
  02f59a4  lbz 3, 83(31)
  02f59a8  cmpwi 3, 0
  02f59ac  bt 2, 0x2f59c8
  02f59b0  ori 3, 31, 0
  02f59b4  li 4, 0
  02f59b8  li 5, 0
  02f59bc  li 6, 3
  02f59c0  bl 0xfddc0
  02f59c4  nop
  02f59c8  lis 3, 47
  02f59cc  vspltisw 2, -1
  02f59d0  li 5, 16
  02f59d4  addi 3, 3, 17520
  02f59d8  lis 4, 114
  02f59dc  li 6, -3056
  02f59e0  vslw 2, 2, 2
  02f59e4  <unknown>
  02f59e8  li 3, 320
  02f59ec  vspltw 3, 3, 0
  02f59f0  <unknown>
  02f59f4  li 4, 1
  02f59f8  vmaddfp 2, 4, 3, 2
  02f59fc  vctsxs 2, 2, 0
  02f5a00  vsplth 2, 2, 1
  02f5a04  stvehx 2, 3, 30
  02f5a08  stb 4, 32(31)
  02f5a0c  b 0x2f5a3c
  02f5a10  ori 3, 31, 0
  02f5a14  addic 4, 30, 80
  02f5a18  bl 0x10b030
  02f5a1c  nop
  02f5a20  rlwinm 3, 3, 0, 25, 25
  02f5a24  cmpwi 3, 0
  02f5a28  bt 2, 0x2f5a3c
  02f5a2c  ori 3, 31, 0
  02f5a30  bl 0xefb38
  02f5a34  nop
  02f5a38  b 0x2f5a3c
  02f5a3c  ld 0, 624(1)
  02f5a40  mtlr 0
  02f5a44  lfd 24, 544(1)
  02f5a48  lfd 25, 552(1)
  02f5a4c  lfd 26, 560(1)
  02f5a50  lfd 27, 568(1)
  02f5a54  lfd 28, 576(1)
  02f5a58  lfd 29, 584(1)
  02f5a5c  lfd 30, 592(1)
  02f5a60  lfd 31, 600(1)
  02f5a64  ld 28, 512(1)
  02f5a68  ld 29, 520(1)
  02f5a6c  ld 30, 528(1)
  02f5a70  ld 31, 536(1)
  02f5a74  addi 1, 1, 608
  02f5a78  blr
