# game/update/moby1160.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1160_001e43d8:   # 0x1e43d8, 0x14 bytes
  01e43d8  lis 3, 118
  01e43dc  lis 4, 1
  01e43e0  addic 3, 3, 20392
  01e43e4  stw 4, 72(3)
  01e43e8  blr

M1160_DrawShape:   # 0x1e43f0, 0x218 bytes
  01e43f0  stdu 1, -208(1)
  01e43f4  mflr 0
  01e43f8  std 0, 224(1)
  01e43fc  std 28, 176(1)
  01e4400  std 27, 168(1)
  01e4404  std 24, 144(1)
  01e4408  ori 28, 4, 0
  01e440c  ori 27, 3, 0
  01e4410  std 26, 160(1)
  01e4414  addic 24, 28, 1
  01e4418  lis 26, 230
  01e441c  std 25, 152(1)
  01e4420  srawi 3, 24, 1
  01e4424  ori 25, 8, 0
  01e4428  std 30, 192(1)
  01e442c  addze 3, 3
  01e4430  ori 30, 6, 0
  01e4434  addic 3, 3, 3
  01e4438  std 23, 136(1)
  01e443c  lwz 4, -21928(26)
  01e4440  li 23, 0
  01e4444  std 29, 184(1)
  01e4448  extsw 3, 3
  01e444c  ori 29, 5, 0
  01e4450  std 31, 200(1)
  01e4454  oris 8, 3, 4096
  01e4458  ori 31, 7, 0
  01e445c  stb 8, 0(4)
  01e4460  lwz 6, -21928(26)
  01e4464  li 4, 0
  01e4468  stb 23, 1(6)
  01e446c  lwz 5, -21928(26)
  01e4470  std 22, 128(1)
  01e4474  stb 23, 2(5)
  01e4478  bl 0x50300c
  01e447c  nop
  01e4480  lwz 4, -21928(26)
  01e4484  lis 5, 115
  01e4488  li 22, 16
  01e448c  li 11, -32767
  01e4490  li 8, 0
  01e4494  stb 3, 3(4)
  01e4498  lwz 3, -21928(26)
  01e449c  li 9, 1
  01e44a0  li 10, 0
  01e44a4  addic 4, 3, 16
  01e44a8  li 6, 0
  01e44ac  li 7, 1
  01e44b0  stw 4, -21928(26)
  01e44b4  li 4, 25872
  01e44b8  lvx 2, 4, 5
  01e44bc  li 4, 0
  01e44c0  stvx 2, 22, 3
  01e44c4  li 5, 0
  01e44c8  std 23, 112(1)
  01e44cc  li 3, 17
  01e44d0  lwz 12, -21928(26)
  01e44d4  sth 11, 0(12)
  01e44d8  lwz 23, -21928(26)
  01e44dc  addic 11, 23, 16
  01e44e0  stw 11, -21928(26)
  01e44e4  bl 0x502e70
  01e44e8  nop
  01e44ec  std 3, 16(23)
  01e44f0  std 25, 24(23)
  01e44f4  lis 5, 115
  01e44f8  lwz 3, -21928(26)
  01e44fc  lis 6, 0
  01e4500  cmpwi 28, 0
  01e4504  addic 4, 3, 16
  01e4508  ori 6, 6, 32768
  01e450c  stw 4, -21928(26)
  01e4510  li 4, 25888
  01e4514  lvx 2, 4, 5
  01e4518  addc 4, 28, 6
  01e451c  stvx 2, 22, 3
  01e4520  lwz 3, -21928(26)
  01e4524  sth 4, 0(3)
  01e4528  lwz 3, -21928(26)
  01e452c  addic 3, 3, 16
  01e4530  stw 3, -21928(26)
  01e4534  bf 1, 0x1e45b8
  01e4538  lis 25, 150
  01e453c  ori 26, 27, 0
  01e4540  li 23, 0
  01e4544  addic 25, 25, 27392
  01e4548  ori 27, 3, 0
  01e454c  lhz 3, 0(26)
  01e4550  lhz 4, 2(26)
  01e4554  ori 5, 31, 0
  01e4558  extsh 3, 3
  01e455c  lwz 6, 16(25)
  01e4560  extsh 4, 4
  01e4564  lwz 7, 20(25)
  01e4568  addc 3, 3, 29
  01e456c  addc 4, 4, 30
  01e4570  sldi 3, 3, 4
  01e4574  sldi 4, 4, 4
  01e4578  addc 3, 3, 6
  01e457c  addc 4, 4, 7
  01e4580  addic 3, 3, -8
  01e4584  addic 4, 4, -8
  01e4588  extsw 3, 3
  01e458c  extsw 4, 4
  01e4590  bl 0x502fec
  01e4594  nop
  01e4598  addic 23, 23, 1
  01e459c  std 3, 0(27)
  01e45a0  addic 26, 26, 4
  01e45a4  cmpw 23, 28
  01e45a8  addic 27, 27, 8
  01e45ac  bt 0, 0x1e454c
  01e45b0  lis 3, 230
  01e45b4  lwz 3, -21928(3)
  01e45b8  srawi 4, 24, 1
  01e45bc  lis 5, 230
  01e45c0  addze 4, 4
  01e45c4  sldi 4, 4, 4
  01e45c8  addc 3, 3, 4
  01e45cc  stw 3, -21928(5)
  01e45d0  ld 0, 224(1)
  01e45d4  mtlr 0
  01e45d8  ld 22, 128(1)
  01e45dc  ld 23, 136(1)
  01e45e0  ld 24, 144(1)
  01e45e4  ld 25, 152(1)
  01e45e8  ld 26, 160(1)
  01e45ec  ld 27, 168(1)
  01e45f0  ld 28, 176(1)
  01e45f4  ld 29, 184(1)
  01e45f8  ld 30, 192(1)
  01e45fc  ld 31, 200(1)
  01e4600  addi 1, 1, 208
  01e4604  blr

M1160_DrawShapeScaled:   # 0x1e4610, 0x25c bytes
  01e4610  stdu 1, -224(1)
  01e4614  mflr 0
  01e4618  std 0, 240(1)
  01e461c  stfd 28, 192(1)
  01e4620  stfd 29, 200(1)
  01e4624  stfd 30, 208(1)
  01e4628  stfd 31, 216(1)
  01e462c  std 30, 176(1)
  01e4630  std 29, 168(1)
  01e4634  ori 30, 4, 0
  01e4638  ori 29, 3, 0
  01e463c  std 26, 144(1)
  01e4640  fmr 31, 3
  01e4644  addic 26, 30, 1
  01e4648  std 28, 160(1)
  01e464c  fmr 30, 2
  01e4650  lis 28, 230
  01e4654  fmr 29, 1
  01e4658  std 27, 152(1)
  01e465c  srawi 3, 26, 1
  01e4660  li 27, 0
  01e4664  std 25, 136(1)
  01e4668  addze 3, 3
  01e466c  ori 25, 8, 0
  01e4670  addic 3, 3, 3
  01e4674  std 31, 184(1)
  01e4678  lwz 4, -21928(28)
  01e467c  ori 31, 7, 0
  01e4680  extsw 3, 3
  01e4684  oris 5, 3, 4096
  01e4688  stb 5, 0(4)
  01e468c  lwz 5, -21928(28)
  01e4690  li 4, 0
  01e4694  stb 27, 1(5)
  01e4698  lwz 5, -21928(28)
  01e469c  std 24, 128(1)
  01e46a0  stb 27, 2(5)
  01e46a4  bl 0x50300c
  01e46a8  nop
  01e46ac  lwz 4, -21928(28)
  01e46b0  lis 5, 115
  01e46b4  li 6, 25872
  01e46b8  li 24, 16
  01e46bc  li 11, -32767
  01e46c0  stb 3, 3(4)
  01e46c4  li 9, 1
  01e46c8  lwz 3, -21928(28)
  01e46cc  li 10, 0
  01e46d0  li 7, 1
  01e46d4  addic 4, 3, 16
  01e46d8  li 8, 0
  01e46dc  stw 4, -21928(28)
  01e46e0  lvx 2, 6, 5
  01e46e4  li 4, 0
  01e46e8  li 5, 0
  01e46ec  stvx 2, 24, 3
  01e46f0  std 27, 112(1)
  01e46f4  li 3, 17
  01e46f8  lwz 12, -21928(28)
  01e46fc  li 6, 0
  01e4700  sth 11, 0(12)
  01e4704  lwz 27, -21928(28)
  01e4708  addic 11, 27, 16
  01e470c  stw 11, -21928(28)
  01e4710  bl 0x502e70
  01e4714  nop
  01e4718  std 3, 16(27)
  01e471c  lis 5, 115
  01e4720  std 25, 24(27)
  01e4724  li 6, 25888
  01e4728  lwz 3, -21928(28)
  01e472c  cmpwi 30, 0
  01e4730  addic 4, 3, 16
  01e4734  stw 4, -21928(28)
  01e4738  lis 4, 0
  01e473c  lvx 2, 6, 5
  01e4740  ori 4, 4, 32768
  01e4744  stvx 2, 24, 3
  01e4748  addc 3, 30, 4
  01e474c  lwz 4, -21928(28)
  01e4750  sth 3, 0(4)
  01e4754  lwz 3, -21928(28)
  01e4758  addic 3, 3, 16
  01e475c  stw 3, -21928(28)
  01e4760  bf 1, 0x1e4814
  01e4764  lis 4, 30
  01e4768  lis 27, 150
  01e476c  addi 4, 4, 17928
  01e4770  ori 28, 29, 0
  01e4774  li 25, 0
  01e4778  addic 27, 27, 27392
  01e477c  ori 29, 3, 0
  01e4780  lfs 28, 0(4)
  01e4784  lhz 3, 0(28)
  01e4788  extsh 3, 3
  01e478c  bl 0x502730
  01e4790  nop
  01e4794  fmadds 1, 1, 31, 29
  01e4798  fmuls 1, 1, 28
  01e479c  bl 0x502758
  01e47a0  nop
  01e47a4  lwz 4, 16(27)
  01e47a8  lhz 5, 2(28)
  01e47ac  addc 4, 3, 4
  01e47b0  extsh 3, 5
  01e47b4  addic 4, 4, -8
  01e47b8  extsw 24, 4
  01e47bc  bl 0x502730
  01e47c0  nop
  01e47c4  fmadds 1, 1, 31, 30
  01e47c8  fmuls 1, 1, 28
  01e47cc  bl 0x502758
  01e47d0  nop
  01e47d4  lwz 4, 20(27)
  01e47d8  ori 5, 31, 0
  01e47dc  addc 4, 3, 4
  01e47e0  ori 3, 24, 0
  01e47e4  addic 4, 4, -8
  01e47e8  extsw 4, 4
  01e47ec  bl 0x502fec
  01e47f0  nop
  01e47f4  addic 25, 25, 1
  01e47f8  std 3, 0(29)
  01e47fc  addic 28, 28, 4
  01e4800  cmpw 25, 30
  01e4804  addic 29, 29, 8
  01e4808  bt 0, 0x1e4784
  01e480c  lis 3, 230
  01e4810  lwz 3, -21928(3)
  01e4814  srawi 4, 26, 1
  01e4818  lis 5, 230
  01e481c  addze 4, 4
  01e4820  sldi 4, 4, 4
  01e4824  addc 3, 3, 4
  01e4828  stw 3, -21928(5)
  01e482c  ld 0, 240(1)
  01e4830  mtlr 0
  01e4834  lfd 28, 192(1)
  01e4838  lfd 29, 200(1)
  01e483c  lfd 30, 208(1)
  01e4840  lfd 31, 216(1)
  01e4844  ld 24, 128(1)
  01e4848  ld 25, 136(1)
  01e484c  ld 26, 144(1)
  01e4850  ld 27, 152(1)
  01e4854  ld 28, 160(1)
  01e4858  ld 29, 168(1)
  01e485c  ld 30, 176(1)
  01e4860  ld 31, 184(1)
  01e4864  addi 1, 1, 224
  01e4868  blr

M1160_DrawShapeRotated:   # 0x1e4870, 0x2b4 bytes
  01e4870  stdu 1, -320(1)
  01e4874  mflr 0
  01e4878  std 0, 336(1)
  01e487c  stfd 27, 280(1)
  01e4880  stfd 28, 288(1)
  01e4884  stfd 29, 296(1)
  01e4888  stfd 30, 304(1)
  01e488c  stfd 31, 312(1)
  01e4890  std 30, 264(1)
  01e4894  std 29, 256(1)
  01e4898  ori 30, 4, 0
  01e489c  ori 29, 3, 0
  01e48a0  std 26, 232(1)
  01e48a4  fmr 28, 4
  01e48a8  addic 26, 30, 1
  01e48ac  std 27, 240(1)
  01e48b0  fmr 31, 3
  01e48b4  lis 27, 230
  01e48b8  fmr 30, 2
  01e48bc  srawi 3, 26, 1
  01e48c0  std 25, 224(1)
  01e48c4  fmr 29, 1
  01e48c8  li 25, 0
  01e48cc  std 28, 248(1)
  01e48d0  addze 3, 3
  01e48d4  ori 28, 8, 0
  01e48d8  addic 3, 3, 3
  01e48dc  std 31, 272(1)
  01e48e0  lwz 4, -21928(27)
  01e48e4  ori 31, 7, 0
  01e48e8  extsw 3, 3
  01e48ec  oris 5, 3, 4096
  01e48f0  stb 5, 0(4)
  01e48f4  lwz 5, -21928(27)
  01e48f8  li 4, 0
  01e48fc  stb 25, 1(5)
  01e4900  lwz 5, -21928(27)
  01e4904  std 24, 216(1)
  01e4908  std 23, 208(1)
  01e490c  stb 25, 2(5)
  01e4910  bl 0x50300c
  01e4914  nop
  01e4918  lwz 4, -21928(27)
  01e491c  lis 5, 115
  01e4920  li 24, 16
  01e4924  li 11, -32767
  01e4928  li 8, 0
  01e492c  stb 3, 3(4)
  01e4930  lwz 3, -21928(27)
  01e4934  li 9, 1
  01e4938  li 10, 0
  01e493c  addic 4, 3, 16
  01e4940  li 6, 0
  01e4944  li 7, 1
  01e4948  stw 4, -21928(27)
  01e494c  li 4, 25872
  01e4950  lvx 2, 4, 5
  01e4954  li 4, 0
  01e4958  stvx 2, 24, 3
  01e495c  li 5, 0
  01e4960  std 25, 112(1)
  01e4964  li 3, 17
  01e4968  lwz 12, -21928(27)
  01e496c  sth 11, 0(12)
  01e4970  lwz 23, -21928(27)
  01e4974  addic 11, 23, 16
  01e4978  stw 11, -21928(27)
  01e497c  bl 0x502e70
  01e4980  nop
  01e4984  std 3, 16(23)
  01e4988  std 28, 24(23)
  01e498c  lis 5, 115
  01e4990  lwz 3, -21928(27)
  01e4994  lis 6, 0
  01e4998  addic 4, 3, 16
  01e499c  ori 6, 6, 32768
  01e49a0  stw 4, -21928(27)
  01e49a4  li 4, 25888
  01e49a8  lvx 2, 4, 5
  01e49ac  addc 5, 30, 6
  01e49b0  stvx 2, 24, 3
  01e49b4  addic 4, 1, 128
  01e49b8  lwz 6, -21928(27)
  01e49bc  addic 3, 1, 144
  01e49c0  sth 5, 0(6)
  01e49c4  lwz 28, -21928(27)
  01e49c8  stw 25, 128(1)
  01e49cc  addic 28, 28, 16
  01e49d0  stw 25, 132(1)
  01e49d4  stw 25, 140(1)
  01e49d8  stfs 28, 136(1)
  01e49dc  stw 28, -21928(27)
  01e49e0  bl 0x500ca4
  01e49e4  nop
  01e49e8  cmpwi 30, 0
  01e49ec  bf 1, 0x1e4ac0
  01e49f0  lis 3, 30
  01e49f4  lis 27, 150
  01e49f8  addi 3, 3, 18540
  01e49fc  ori 4, 28, 0
  01e4a00  ori 28, 29, 0
  01e4a04  li 25, 0
  01e4a08  addic 27, 27, 27392
  01e4a0c  lfs 28, 0(3)
  01e4a10  ori 29, 4, 0
  01e4a14  lhz 3, 0(28)
  01e4a18  extsh 3, 3
  01e4a1c  bl 0x502730
  01e4a20  nop
  01e4a24  lhz 3, 2(28)
  01e4a28  fmr 27, 1
  01e4a2c  extsh 3, 3
  01e4a30  bl 0x502730
  01e4a34  nop
  01e4a38  lfs 2, 160(1)
  01e4a3c  lfs 3, 144(1)
  01e4a40  fmuls 2, 2, 1
  01e4a44  lfs 4, 164(1)
  01e4a48  lfs 5, 148(1)
  01e4a4c  fmuls 1, 4, 1
  01e4a50  fmadds 2, 3, 27, 2
  01e4a54  fmadds 27, 5, 27, 1
  01e4a58  fmadds 1, 2, 31, 29
  01e4a5c  fmuls 1, 1, 28
  01e4a60  bl 0x502758
  01e4a64  nop
  01e4a68  fmadds 1, 27, 31, 30
  01e4a6c  lwz 4, 16(27)
  01e4a70  addc 3, 3, 4
  01e4a74  addic 3, 3, -8
  01e4a78  extsw 24, 3
  01e4a7c  fmuls 1, 1, 28
  01e4a80  bl 0x502758
  01e4a84  nop
  01e4a88  lwz 4, 20(27)
  01e4a8c  ori 5, 31, 0
  01e4a90  addc 4, 3, 4
  01e4a94  ori 3, 24, 0
  01e4a98  addic 4, 4, -8
  01e4a9c  extsw 4, 4
  01e4aa0  bl 0x502fec
  01e4aa4  nop
  01e4aa8  addic 25, 25, 1
  01e4aac  std 3, 0(29)
  01e4ab0  addic 28, 28, 4
  01e4ab4  cmpw 25, 30
  01e4ab8  addic 29, 29, 8
  01e4abc  bt 0, 0x1e4a14
  01e4ac0  lis 3, 230
  01e4ac4  srawi 4, 26, 1
  01e4ac8  addze 4, 4
  01e4acc  sldi 4, 4, 4
  01e4ad0  lwz 5, -21928(3)
  01e4ad4  addc 4, 5, 4
  01e4ad8  stw 4, -21928(3)
  01e4adc  ld 0, 336(1)
  01e4ae0  mtlr 0
  01e4ae4  lfd 27, 280(1)
  01e4ae8  lfd 28, 288(1)
  01e4aec  lfd 29, 296(1)
  01e4af0  lfd 30, 304(1)
  01e4af4  lfd 31, 312(1)
  01e4af8  ld 23, 208(1)
  01e4afc  ld 24, 216(1)
  01e4b00  ld 25, 224(1)
  01e4b04  ld 26, 232(1)
  01e4b08  ld 27, 240(1)
  01e4b0c  ld 28, 248(1)
  01e4b10  ld 29, 256(1)
  01e4b14  ld 30, 264(1)
  01e4b18  ld 31, 272(1)
  01e4b1c  addi 1, 1, 320
  01e4b20  blr

M1160_WorldToScreen:   # 0x1e4b28, 0xe0 bytes
  01e4b28  stdu 1, -192(1)
  01e4b2c  mflr 0
  01e4b30  std 0, 208(1)
  01e4b34  stfd 31, 184(1)
  01e4b38  std 31, 176(1)
  01e4b3c  std 29, 160(1)
  01e4b40  ori 31, 4, 0
  01e4b44  ori 29, 5, 0
  01e4b48  lis 5, 30
  01e4b4c  ori 4, 3, 0
  01e4b50  std 30, 168(1)
  01e4b54  addic 3, 1, 112
  01e4b58  std 28, 152(1)
  01e4b5c  ori 30, 6, 0
  01e4b60  std 27, 144(1)
  01e4b64  addi 28, 5, 19236
  01e4b68  bl 0x65490
  01e4b6c  nop
  01e4b70  lis 3, 150
  01e4b74  addic 27, 3, 27392
  01e4b78  lwz 3, 16(27)
  01e4b7c  extsw 3, 3
  01e4b80  std 3, 128(1)
  01e4b84  lfs 1, 112(1)
  01e4b88  lfs 31, 0(28)
  01e4b8c  lfd 2, 128(1)
  01e4b90  fcfid 2, 2
  01e4b94  frsp 2, 2
  01e4b98  fsubs 1, 1, 2
  01e4b9c  fmuls 1, 1, 31
  01e4ba0  bl 0x502758
  01e4ba4  nop
  01e4ba8  stw 3, 0(31)
  01e4bac  lwz 3, 20(27)
  01e4bb0  extsw 3, 3
  01e4bb4  std 3, 128(1)
  01e4bb8  lfs 1, 116(1)
  01e4bbc  lfd 2, 128(1)
  01e4bc0  fcfid 2, 2
  01e4bc4  frsp 2, 2
  01e4bc8  fsubs 1, 1, 2
  01e4bcc  fmuls 1, 1, 31
  01e4bd0  bl 0x502758
  01e4bd4  nop
  01e4bd8  addc 3, 3, 30
  01e4bdc  stw 3, 0(29)
  01e4be0  ld 0, 208(1)
  01e4be4  mtlr 0
  01e4be8  lfd 31, 184(1)
  01e4bec  ld 27, 144(1)
  01e4bf0  ld 28, 152(1)
  01e4bf4  ld 29, 160(1)
  01e4bf8  ld 30, 168(1)
  01e4bfc  ld 31, 176(1)
  01e4c00  addi 1, 1, 192
  01e4c04  blr

M1160_001e4c20:   # 0x1e4c20, 0x284 bytes
  01e4c20  stdu 1, -288(1)
  01e4c24  mflr 0
  01e4c28  std 0, 304(1)
  01e4c2c  stfd 29, 264(1)
  01e4c30  stfd 30, 272(1)
  01e4c34  stfd 31, 280(1)
  01e4c38  std 27, 224(1)
  01e4c3c  ori 27, 3, 0
  01e4c40  vspltisw 2, 0
  01e4c44  li 3, 112
  01e4c48  lis 9, 30
  01e4c4c  std 26, 216(1)
  01e4c50  fmr 31, 1
  01e4c54  ori 26, 8, 0
  01e4c58  addi 8, 9, 19464
  01e4c5c  std 25, 208(1)
  01e4c60  lis 9, 16329
  01e4c64  addic 25, 1, 112
  01e4c68  stvx 2, 3, 1
  01e4c6c  ori 9, 9, 4059
  01e4c70  std 28, 232(1)
  01e4c74  lwz 3, 4(27)
  01e4c78  ori 28, 4, 0
  01e4c7c  std 29, 240(1)
  01e4c80  lfs 30, 8(27)
  01e4c84  ori 29, 5, 0
  01e4c88  srawi 10, 3, 31
  01e4c8c  stfs 30, 120(1)
  01e4c90  srwi 11, 10, 1
  01e4c94  std 30, 248(1)
  01e4c98  lfs 1, 0(8)
  01e4c9c  ori 30, 6, 0
  01e4ca0  std 31, 256(1)
  01e4ca4  xor 3, 11, 3
  01e4ca8  ori 31, 7, 0
  01e4cac  subc 3, 3, 10
  01e4cb0  cmpw 3, 9
  01e4cb4  bt 1, 0x1e4cc8
  01e4cb8  lis 4, -16330
  01e4cbc  ori 4, 4, 61477
  01e4cc0  cmpw 3, 4
  01e4cc4  bf 0, 0x1e4cd0
  01e4cc8  fneg 30, 30
  01e4ccc  stfs 30, 120(1)
  01e4cd0  fmr 2, 30
  01e4cd4  bl 0x5025e0
  01e4cd8  nop
  01e4cdc  stfs 1, 120(1)
  01e4ce0  addic 3, 1, 128
  01e4ce4  ori 4, 25, 0
  01e4ce8  bl 0x500ca4
  01e4cec  nop
  01e4cf0  lfs 1, 20(29)
  01e4cf4  lis 3, 30
  01e4cf8  lfs 2, 4(28)
  01e4cfc  lfs 3, 16(29)
  01e4d00  fsubs 1, 1, 2
  01e4d04  lfs 2, 0(28)
  01e4d08  lfs 4, 148(1)
  01e4d0c  addi 28, 3, 19464
  01e4d10  fsubs 2, 3, 2
  01e4d14  lfs 3, 144(1)
  01e4d18  lfs 5, 132(1)
  01e4d1c  lfs 6, 28(29)
  01e4d20  lfs 7, 128(1)
  01e4d24  lfs 8, 180(1)
  01e4d28  lfs 9, 152(1)
  01e4d2c  fmuls 4, 4, 1
  01e4d30  fmuls 3, 3, 1
  01e4d34  lfs 10, 4(28)
  01e4d38  fmuls 1, 9, 1
  01e4d3c  lfs 9, 176(1)
  01e4d40  lfs 11, 136(1)
  01e4d44  fmadds 4, 5, 2, 4
  01e4d48  fmadds 3, 7, 2, 3
  01e4d4c  lfs 5, 184(1)
  01e4d50  fmadds 1, 11, 2, 1
  01e4d54  fmadds 2, 8, 6, 4
  01e4d58  fmadds 3, 9, 6, 3
  01e4d5c  fmadds 4, 5, 6, 1
  01e4d60  fmuls 29, 2, 10
  01e4d64  fmuls 1, 3, 10
  01e4d68  fmuls 2, 4, 10
  01e4d6c  fmuls 3, 29, 29
  01e4d70  fmadds 3, 1, 1, 3
  01e4d74  fmadds 30, 2, 2, 3
  01e4d78  fsqrts 30, 30
  01e4d7c  bl 0x502758
  01e4d80  nop
  01e4d84  fneg 1, 29
  01e4d88  ori 25, 3, 0
  01e4d8c  bl 0x502758
  01e4d90  nop
  01e4d94  lfs 1, 8(28)
  01e4d98  ori 28, 3, 0
  01e4d9c  fcmpu 0, 30, 1
  01e4da0  cror 6, 1, 2
  01e4da4  bt 6, 0x1e4e6c
  01e4da8  lis 3, 30
  01e4dac  addi 3, 3, 19464
  01e4db0  lfs 2, 12(3)
  01e4db4  fcmpu 0, 30, 2
  01e4db8  cror 6, 0, 2
  01e4dbc  bt 6, 0x1e4dfc
  01e4dc0  fsubs 30, 1, 30
  01e4dc4  rldicl 3, 26, 40, 56
  01e4dc8  bl 0x502730
  01e4dcc  nop
  01e4dd0  fmuls 1, 1, 30
  01e4dd4  lis 3, 30
  01e4dd8  clrlwi 26, 26, 8
  01e4ddc  addi 3, 3, 19464
  01e4de0  lfs 2, 16(3)
  01e4de4  fmuls 1, 1, 2
  01e4de8  bl 0x502758
  01e4dec  nop
  01e4df0  slwi 3, 3, 24
  01e4df4  extsw 3, 3
  01e4df8  or 26, 26, 3
  01e4dfc  lfs 1, 72(29)
  01e4e00  lfs 2, 8(27)
  01e4e04  bl 0x5025e0
  01e4e08  nop
  01e4e0c  addic 3, 25, 432
  01e4e10  lis 4, 150
  01e4e14  fneg 4, 1
  01e4e18  extsw 3, 3
  01e4e1c  addic 4, 4, 27392
  01e4e20  lis 7, 255
  01e4e24  fmr 3, 31
  01e4e28  std 3, 192(1)
  01e4e2c  ori 7, 7, 65523
  01e4e30  lwz 3, 4(4)
  01e4e34  lfd 1, 192(1)
  01e4e38  addc 3, 28, 3
  01e4e3c  fcfid 1, 1
  01e4e40  addic 3, 3, -80
  01e4e44  extsw 5, 3
  01e4e48  ori 3, 30, 0
  01e4e4c  ori 4, 31, 0
  01e4e50  std 5, 192(1)
  01e4e54  ori 8, 26, 0
  01e4e58  frsp 1, 1
  01e4e5c  lfd 2, 192(1)
  01e4e60  fcfid 2, 2
  01e4e64  frsp 2, 2
  01e4e68  bl 0x1e4870
  01e4e6c  ld 0, 304(1)
  01e4e70  mtlr 0
  01e4e74  lfd 29, 264(1)
  01e4e78  lfd 30, 272(1)
  01e4e7c  lfd 31, 280(1)
  01e4e80  ld 25, 208(1)
  01e4e84  ld 26, 216(1)
  01e4e88  ld 27, 224(1)
  01e4e8c  ld 28, 232(1)
  01e4e90  ld 29, 240(1)
  01e4e94  ld 30, 248(1)
  01e4e98  ld 31, 256(1)
  01e4e9c  addi 1, 1, 288
  01e4ea0  blr

M1160_001e4eb8:   # 0x1e4eb8, 0x288 bytes
  01e4eb8  stdu 1, -272(1)
  01e4ebc  mflr 0
  01e4ec0  std 0, 288(1)
  01e4ec4  stfd 30, 256(1)
  01e4ec8  stfd 31, 264(1)
  01e4ecc  vspltisw 2, 0
  01e4ed0  li 8, 128
  01e4ed4  std 28, 224(1)
  01e4ed8  lis 10, 16329
  01e4edc  ori 28, 7, 0
  01e4ee0  ori 7, 10, 4059
  01e4ee4  lis 9, 30
  01e4ee8  stvx 2, 8, 1
  01e4eec  lwz 8, 4(3)
  01e4ef0  addi 9, 9, 20132
  01e4ef4  std 27, 216(1)
  01e4ef8  lfs 31, 8(3)
  01e4efc  addic 27, 1, 128
  01e4f00  srawi 3, 8, 31
  01e4f04  stfs 31, 136(1)
  01e4f08  srwi 10, 3, 1
  01e4f0c  lfs 1, 0(9)
  01e4f10  std 29, 232(1)
  01e4f14  xor 8, 10, 8
  01e4f18  ori 29, 4, 0
  01e4f1c  std 30, 240(1)
  01e4f20  subc 3, 8, 3
  01e4f24  ori 30, 5, 0
  01e4f28  std 31, 248(1)
  01e4f2c  cmpw 3, 7
  01e4f30  ori 31, 6, 0
  01e4f34  bt 1, 0x1e4f48
  01e4f38  lis 4, -16330
  01e4f3c  ori 4, 4, 61477
  01e4f40  cmpw 3, 4
  01e4f44  bf 0, 0x1e4f50
  01e4f48  fneg 31, 31
  01e4f4c  stfs 31, 136(1)
  01e4f50  fmr 2, 31
  01e4f54  bl 0x5025e0
  01e4f58  nop
  01e4f5c  stfs 1, 136(1)
  01e4f60  addic 3, 1, 144
  01e4f64  ori 4, 27, 0
  01e4f68  bl 0x500ca4
  01e4f6c  nop
  01e4f70  lfs 1, 20(30)
  01e4f74  lfs 2, 4(29)
  01e4f78  lis 3, 30
  01e4f7c  lfs 3, 16(30)
  01e4f80  fsubs 1, 1, 2
  01e4f84  lfs 2, 0(29)
  01e4f88  lfs 4, 164(1)
  01e4f8c  fsubs 2, 3, 2
  01e4f90  addi 29, 3, 20132
  01e4f94  lfs 3, 160(1)
  01e4f98  lfs 5, 148(1)
  01e4f9c  lfs 6, 28(30)
  01e4fa0  lfs 7, 144(1)
  01e4fa4  lfs 8, 196(1)
  01e4fa8  lfs 9, 168(1)
  01e4fac  fmuls 4, 4, 1
  01e4fb0  lfs 10, 4(29)
  01e4fb4  fmuls 3, 3, 1
  01e4fb8  fmuls 1, 9, 1
  01e4fbc  lfs 9, 192(1)
  01e4fc0  lfs 11, 152(1)
  01e4fc4  fmadds 4, 5, 2, 4
  01e4fc8  fmadds 3, 7, 2, 3
  01e4fcc  fmadds 1, 11, 2, 1
  01e4fd0  lfs 5, 200(1)
  01e4fd4  fmadds 2, 8, 6, 4
  01e4fd8  fmadds 3, 9, 6, 3
  01e4fdc  fmadds 4, 5, 6, 1
  01e4fe0  fmuls 30, 2, 10
  01e4fe4  fmuls 1, 3, 10
  01e4fe8  fmuls 2, 4, 10
  01e4fec  fmuls 3, 30, 30
  01e4ff0  fmadds 3, 1, 1, 3
  01e4ff4  fmadds 31, 2, 2, 3
  01e4ff8  fsqrts 31, 31
  01e4ffc  bl 0x502758
  01e5000  nop
  01e5004  fneg 1, 30
  01e5008  ori 30, 3, 0
  01e500c  bl 0x502758
  01e5010  nop
  01e5014  lfs 1, 8(29)
  01e5018  ori 29, 3, 0
  01e501c  fcmpu 0, 31, 1
  01e5020  cror 6, 1, 2
  01e5024  bt 6, 0x1e5114
  01e5028  lis 3, 30
  01e502c  addi 3, 3, 20132
  01e5030  lfs 2, 12(3)
  01e5034  fcmpu 0, 31, 2
  01e5038  cror 6, 0, 2
  01e503c  bt 6, 0x1e507c
  01e5040  fsubs 31, 1, 31
  01e5044  rldicl 3, 28, 40, 56
  01e5048  bl 0x502730
  01e504c  nop
  01e5050  fmuls 1, 1, 31
  01e5054  lis 3, 30
  01e5058  clrlwi 28, 28, 8
  01e505c  addi 3, 3, 20132
  01e5060  lfs 2, 16(3)
  01e5064  fmuls 1, 1, 2
  01e5068  bl 0x502758
  01e506c  nop
  01e5070  slwi 3, 3, 24
  01e5074  extsw 3, 3
  01e5078  or 28, 28, 3
  01e507c  lis 3, 118
  01e5080  lis 4, 150
  01e5084  addic 3, 3, 23132
  01e5088  sldi 5, 31, 4
  01e508c  addic 4, 4, 27392
  01e5090  addc 3, 3, 5
  01e5094  clrldi 31, 3, 32
  01e5098  lwz 3, 4(4)
  01e509c  addc 29, 29, 3
  01e50a0  lhz 3, 0(31)
  01e50a4  extsh 3, 3
  01e50a8  bl 0x685c4
  01e50ac  nop
  01e50b0  ori 10, 3, 0
  01e50b4  lhz 3, 12(31)
  01e50b8  lhz 4, 14(31)
  01e50bc  extsh 3, 3
  01e50c0  lhz 5, 6(31)
  01e50c4  extsh 4, 4
  01e50c8  lhz 6, 8(31)
  01e50cc  subc 3, 30, 3
  01e50d0  lhz 7, 2(31)
  01e50d4  subc 4, 29, 4
  01e50d8  lhz 8, 4(31)
  01e50dc  addic 3, 3, 432
  01e50e0  std 28, 112(1)
  01e50e4  extsh 5, 5
  01e50e8  std 10, 120(1)
  01e50ec  addic 4, 4, -80
  01e50f0  extsh 6, 6
  01e50f4  extsw 3, 3
  01e50f8  extsw 4, 4
  01e50fc  extsh 7, 7
  01e5100  extsh 8, 8
  01e5104  ori 9, 5, 0
  01e5108  ori 10, 6, 0
  01e510c  bl 0x6a5c4
  01e5110  nop
  01e5114  ld 0, 288(1)
  01e5118  mtlr 0
  01e511c  lfd 30, 256(1)
  01e5120  lfd 31, 264(1)
  01e5124  ld 27, 216(1)
  01e5128  ld 28, 224(1)
  01e512c  ld 29, 232(1)
  01e5130  ld 30, 240(1)
  01e5134  ld 31, 248(1)
  01e5138  addi 1, 1, 272
  01e513c  blr

M1160_ScanTargets:   # 0x1e5158, 0xd90 bytes
  01e5158  stdu 1, -528(1)
  01e515c  mflr 0
  01e5160  std 0, 544(1)
  01e5164  stfd 25, 472(1)
  01e5168  stfd 26, 480(1)
  01e516c  stfd 27, 488(1)
  01e5170  stfd 28, 496(1)
  01e5174  stfd 29, 504(1)
  01e5178  stfd 30, 512(1)
  01e517c  stfd 31, 520(1)
  01e5180  lis 9, 164
  01e5184  std 16, 344(1)
  01e5188  std 15, 336(1)
  01e518c  li 8, 0
  01e5190  lis 16, 32767
  01e5194  std 29, 448(1)
  01e5198  ori 15, 8, 0
  01e519c  lwz 29, -28500(9)
  01e51a0  stw 8, 232(4)
  01e51a4  ori 16, 16, 65535
  01e51a8  std 25, 416(1)
  01e51ac  std 24, 408(1)
  01e51b0  lwz 7, 644(1)
  01e51b4  cmpwi 29, 0
  01e51b8  std 10, 280(1)
  01e51bc  ori 25, 3, 0
  01e51c0  std 7, 296(1)
  01e51c4  std 21, 384(1)
  01e51c8  std 20, 376(1)
  01e51cc  ori 24, 4, 0
  01e51d0  ori 20, 5, 0
  01e51d4  std 31, 464(1)
  01e51d8  std 30, 456(1)
  01e51dc  std 28, 440(1)
  01e51e0  std 27, 432(1)
  01e51e4  std 26, 424(1)
  01e51e8  std 23, 400(1)
  01e51ec  std 22, 392(1)
  01e51f0  std 19, 368(1)
  01e51f4  std 18, 360(1)
  01e51f8  std 17, 352(1)
  01e51fc  std 14, 328(1)
  01e5200  ori 21, 6, 0
  01e5204  bt 2, 0x1e5e70
  01e5208  lis 3, 30
  01e520c  lis 4, -32513
  01e5210  addi 3, 3, 20800
  01e5214  lis 5, 101
  01e5218  ori 4, 4, 65535
  01e521c  lis 6, -256
  01e5220  clrldi 22, 4, 32
  01e5224  lfs 31, 0(3)
  01e5228  ori 4, 6, 65280
  01e522c  lfs 30, 4(3)
  01e5230  lis 6, 101
  01e5234  lfs 29, 8(3)
  01e5238  lis 7, -32672
  01e523c  lfs 28, 12(3)
  01e5240  lis 26, 150
  01e5244  lfs 27, 16(3)
  01e5248  lis 18, 118
  01e524c  addic 3, 5, 18624
  01e5250  lis 5, -32736
  01e5254  lis 23, 149
  01e5258  lis 17, 101
  01e525c  std 3, 288(1)
  01e5260  lis 19, 101
  01e5264  clrldi 3, 4, 32
  01e5268  ori 4, 5, 8447
  01e526c  addic 5, 6, 18648
  01e5270  clrldi 4, 4, 32
  01e5274  ori 6, 7, 24831
  01e5278  std 3, 272(1)
  01e527c  ori 15, 8, 0
  01e5280  addic 26, 26, 27392
  01e5284  std 4, 264(1)
  01e5288  addic 18, 18, 22836
  01e528c  addic 23, 23, 5056
  01e5290  std 5, 256(1)
  01e5294  addic 17, 17, 18632
  01e5298  addic 19, 19, 18640
  01e529c  clrldi 14, 6, 32
  01e52a0  lhz 3, 52(29)
  01e52a4  rlwinm 3, 3, 0, 19, 19
  01e52a8  cmpwi 3, 0
  01e52ac  bt 2, 0x1e550c
  01e52b0  lbz 3, 49(29)
  01e52b4  cmpwi 3, 0
  01e52b8  bt 2, 0x1e550c
  01e52bc  lwz 3, 36(29)
  01e52c0  cmpwi 3, 0
  01e52c4  bt 2, 0x1e550c
  01e52c8  lhz 3, 70(3)
  01e52cc  extsh 3, 3
  01e52d0  cmpwi 3, 5
  01e52d4  bf 2, 0x1e550c
  01e52d8  addic 3, 1, 224
  01e52dc  addic 4, 29, 16
  01e52e0  bl 0x65490
  01e52e4  nop
  01e52e8  lwz 3, 16(26)
  01e52ec  extsw 3, 3
  01e52f0  std 3, 304(1)
  01e52f4  lfs 1, 224(1)
  01e52f8  lfd 2, 304(1)
  01e52fc  fcfid 2, 2
  01e5300  frsp 2, 2
  01e5304  fsubs 1, 1, 2
  01e5308  fmuls 1, 1, 31
  01e530c  bl 0x502758
  01e5310  nop
  01e5314  lwz 4, 20(26)
  01e5318  ori 31, 3, 0
  01e531c  extsw 4, 4
  01e5320  std 4, 304(1)
  01e5324  lfs 1, 228(1)
  01e5328  lfd 2, 304(1)
  01e532c  fcfid 2, 2
  01e5330  frsp 2, 2
  01e5334  fsubs 1, 1, 2
  01e5338  fmuls 1, 1, 31
  01e533c  bl 0x502758
  01e5340  nop
  01e5344  lfs 1, 864(23)
  01e5348  ori 30, 3, 0
  01e534c  lfs 2, 868(23)
  01e5350  stfs 1, 112(1)
  01e5354  lfs 3, 872(23)
  01e5358  stfs 2, 116(1)
  01e535c  lfs 4, 876(23)
  01e5360  stfs 3, 120(1)
  01e5364  stfs 4, 124(1)
  01e5368  lfs 5, 12(29)
  01e536c  stfs 4, 124(1)
  01e5370  fmuls 5, 5, 30
  01e5374  lwz 3, 224(24)
  01e5378  li 5, 0
  01e537c  lwz 4, 228(24)
  01e5380  li 6, -1
  01e5384  subc 27, 31, 3
  01e5388  subc 28, 30, 4
  01e538c  extsw 3, 27
  01e5390  li 4, 0
  01e5394  li 7, -1
  01e5398  subc 3, 3, 4
  01e539c  extsw 4, 28
  01e53a0  fmuls 1, 1, 5
  01e53a4  fmuls 2, 2, 5
  01e53a8  subc 4, 4, 5
  01e53ac  fmuls 3, 3, 5
  01e53b0  li 5, 1
  01e53b4  sradi 3, 3, 63
  01e53b8  subc 6, 6, 5
  01e53bc  sradi 4, 4, 63
  01e53c0  and 3, 3, 6
  01e53c4  li 6, 1
  01e53c8  addc 3, 5, 3
  01e53cc  subc 5, 7, 6
  01e53d0  mullw 27, 27, 3
  01e53d4  stfs 1, 112(1)
  01e53d8  and 3, 4, 5
  01e53dc  stfs 2, 116(1)
  01e53e0  stfs 3, 120(1)
  01e53e4  lfs 4, 16(29)
  01e53e8  addc 3, 6, 3
  01e53ec  mullw 28, 28, 3
  01e53f0  fadds 1, 1, 4
  01e53f4  addic 3, 1, 208
  01e53f8  addic 4, 1, 112
  01e53fc  stfs 1, 112(1)
  01e5400  lfs 1, 20(29)
  01e5404  fadds 1, 2, 1
  01e5408  stfs 1, 116(1)
  01e540c  lfs 1, 24(29)
  01e5410  std 28, 320(1)
  01e5414  fadds 1, 3, 1
  01e5418  stfs 1, 120(1)
  01e541c  bl 0x65490
  01e5420  nop
  01e5424  lwz 3, 16(26)
  01e5428  extsw 3, 3
  01e542c  std 3, 304(1)
  01e5430  lfs 1, 208(1)
  01e5434  lfd 2, 304(1)
  01e5438  fcfid 2, 2
  01e543c  frsp 2, 2
  01e5440  fsubs 1, 1, 2
  01e5444  fmuls 1, 1, 31
  01e5448  bl 0x502758
  01e544c  nop
  01e5450  lwz 4, 20(26)
  01e5454  extsw 4, 4
  01e5458  ori 28, 3, 0
  01e545c  std 4, 304(1)
  01e5460  lfs 1, 212(1)
  01e5464  lfd 2, 304(1)
  01e5468  fcfid 2, 2
  01e546c  frsp 2, 2
  01e5470  fsubs 1, 1, 2
  01e5474  fmuls 1, 1, 31
  01e5478  bl 0x502758
  01e547c  nop
  01e5480  subc 4, 28, 31
  01e5484  subc 3, 3, 30
  01e5488  mullw 4, 4, 4
  01e548c  mullw 3, 3, 3
  01e5490  addc 3, 4, 3
  01e5494  extsw 3, 3
  01e5498  bl 0x502730
  01e549c  nop
  01e54a0  fsqrts 1, 1
  01e54a4  bl 0x502758
  01e54a8  nop
  01e54ac  addic 3, 3, 28
  01e54b0  ld 28, 320(1)
  01e54b4  cmpw 27, 3
  01e54b8  bf 0, 0x1e550c
  01e54bc  cmpw 28, 3
  01e54c0  bf 0, 0x1e550c
  01e54c4  ld 3, 280(1)
  01e54c8  ld 4, 296(1)
  01e54cc  cmpwi 3, 0
  01e54d0  cmpw 1, 29, 4
  01e54d4  bt 2, 0x1e54ec
  01e54d8  cmpw 29, 3
  01e54dc  bf 2, 0x1e550c
  01e54e0  ori 15, 29, 0
  01e54e4  li 16, 0
  01e54e8  b 0x1e550c
  01e54ec  bt 6, 0x1e550c
  01e54f0  mullw 3, 27, 27
  01e54f4  mullw 4, 28, 28
  01e54f8  addc 3, 3, 4
  01e54fc  cmpw 16, 3
  01e5500  bf 1, 0x1e550c
  01e5504  ori 16, 3, 0
  01e5508  ori 15, 29, 0
  01e550c  lhz 3, 166(29)
  01e5510  ld 28, 256(1)
  01e5514  extsh 3, 3
  01e5518  ld 27, 264(1)
  01e551c  cmpwi 3, 1220
  01e5520  cmpwi 1, 3, 1218
  01e5524  cmpwi 6, 3, 1215
  01e5528  cmpwi 7, 3, 1214
  01e552c  bt 2, 0x1e5568
  01e5530  bt 6, 0x1e5548
  01e5534  bt 26, 0x1e5ad0
  01e5538  bt 30, 0x1e587c
  01e553c  cmpwi 3, 1003
  01e5540  bt 2, 0x1e5588
  01e5544  b 0x1e5d30
  01e5548  lis 7, 28800
  01e554c  ori 3, 21, 0
  01e5550  ori 4, 20, 0
  01e5554  ori 5, 29, 0
  01e5558  li 6, 2
  01e555c  ori 7, 7, 32896
  01e5560  bl 0x1e4eb8
  01e5564  b 0x1e5e64
  01e5568  lis 7, 28800
  01e556c  ori 3, 21, 0
  01e5570  ori 4, 20, 0
  01e5574  ori 5, 29, 0
  01e5578  li 6, 2
  01e557c  ori 7, 7, 32896
  01e5580  bl 0x1e4eb8
  01e5584  b 0x1e5e64
  01e5588  addic 31, 29, 16
  01e558c  addic 3, 1, 128
  01e5590  ori 4, 31, 0
  01e5594  bl 0x65490
  01e5598  nop
  01e559c  lbz 3, 49(29)
  01e55a0  cmpwi 3, 0
  01e55a4  bt 2, 0x1e5850
  01e55a8  lwz 3, 16(26)
  01e55ac  lis 30, 161
  01e55b0  lwz 4, 20(26)
  01e55b4  extsw 3, 3
  01e55b8  std 3, 304(1)
  01e55bc  extsw 3, 4
  01e55c0  lfs 1, 128(1)
  01e55c4  lfs 2, 132(1)
  01e55c8  lwz 4, 1808(30)
  01e55cc  lfd 3, 304(1)
  01e55d0  std 3, 304(1)
  01e55d4  fcfid 3, 3
  01e55d8  extsw 3, 4
  01e55dc  frsp 3, 3
  01e55e0  lfd 4, 304(1)
  01e55e4  fsubs 1, 1, 3
  01e55e8  fcfid 4, 4
  01e55ec  fmuls 26, 1, 31
  01e55f0  frsp 3, 4
  01e55f4  fsubs 1, 2, 3
  01e55f8  fmuls 25, 1, 31
  01e55fc  bl 0x502730
  01e5600  nop
  01e5604  fmuls 1, 1, 28
  01e5608  bl 0x10de78
  01e560c  nop
  01e5610  lis 7, 255
  01e5614  lis 8, 20480
  01e5618  fmr 4, 1
  01e561c  ori 3, 18, 0
  01e5620  fmr 1, 26
  01e5624  li 4, 30
  01e5628  fmr 2, 25
  01e562c  fmr 3, 29
  01e5630  ori 7, 7, 65523
  01e5634  ori 8, 8, 255
  01e5638  bl 0x1e4870
  01e563c  lwz 3, 16(26)
  01e5640  lwz 4, 20(26)
  01e5644  extsw 3, 3
  01e5648  extsw 4, 4
  01e564c  std 3, 304(1)
  01e5650  lfs 1, 128(1)
  01e5654  lfs 2, 132(1)
  01e5658  lwz 3, 1808(30)
  01e565c  lfd 3, 304(1)
  01e5660  std 4, 304(1)
  01e5664  fcfid 3, 3
  01e5668  extsw 3, 3
  01e566c  frsp 3, 3
  01e5670  lfd 4, 304(1)
  01e5674  fsubs 1, 1, 3
  01e5678  fcfid 4, 4
  01e567c  fmuls 26, 1, 31
  01e5680  frsp 3, 4
  01e5684  fsubs 1, 2, 3
  01e5688  fmuls 25, 1, 31
  01e568c  bl 0x502730
  01e5690  nop
  01e5694  fmuls 1, 1, 28
  01e5698  bl 0x10de78
  01e569c  nop
  01e56a0  lis 7, 255
  01e56a4  fneg 4, 1
  01e56a8  lis 8, 20480
  01e56ac  fmr 1, 26
  01e56b0  ori 3, 18, 0
  01e56b4  fmr 2, 25
  01e56b8  li 4, 30
  01e56bc  fmr 3, 27
  01e56c0  ori 7, 7, 65523
  01e56c4  ori 8, 8, 255
  01e56c8  bl 0x1e4870
  01e56cc  addic 3, 1, 192
  01e56d0  ori 4, 31, 0
  01e56d4  bl 0x65490
  01e56d8  nop
  01e56dc  lwz 3, 16(26)
  01e56e0  extsw 3, 3
  01e56e4  std 3, 304(1)
  01e56e8  lfs 1, 192(1)
  01e56ec  lfd 2, 304(1)
  01e56f0  fcfid 2, 2
  01e56f4  frsp 2, 2
  01e56f8  fsubs 1, 1, 2
  01e56fc  fmuls 1, 1, 31
  01e5700  bl 0x502758
  01e5704  nop
  01e5708  lwz 4, 20(26)
  01e570c  extsw 4, 4
  01e5710  ori 30, 3, 0
  01e5714  std 4, 304(1)
  01e5718  lfs 1, 196(1)
  01e571c  lfd 2, 304(1)
  01e5720  fcfid 2, 2
  01e5724  frsp 2, 2
  01e5728  fsubs 1, 1, 2
  01e572c  fmuls 1, 1, 31
  01e5730  bl 0x502758
  01e5734  nop
  01e5738  addic 31, 3, 10
  01e573c  ori 3, 30, 0
  01e5740  ld 6, 288(1)
  01e5744  extsw 31, 31
  01e5748  ori 5, 22, 0
  01e574c  ori 4, 31, 0
  01e5750  li 7, 3
  01e5754  bl 0x70834
  01e5758  nop
  01e575c  ori 3, 29, 0
  01e5760  bl 0xfcccc
  01e5764  nop
  01e5768  cmpwi 3, 0
  01e576c  bt 2, 0x1e57c4
  01e5770  addic 31, 31, 14
  01e5774  lfs 1, 0(3)
  01e5778  extsw 31, 31
  01e577c  bl 0x502758
  01e5780  nop
  01e5784  addic 28, 1, 240
  01e5788  ori 5, 3, 0
  01e578c  ori 3, 28, 0
  01e5790  ori 4, 17, 0
  01e5794  bl 0x5cd2a8
  01e5798  nop
  01e579c  ori 3, 28, 0
  01e57a0  bl 0x5c8510
  01e57a4  nop
  01e57a8  extsw 7, 3
  01e57ac  ori 3, 30, 0
  01e57b0  ori 4, 31, 0
  01e57b4  ori 5, 22, 0
  01e57b8  ori 6, 28, 0
  01e57bc  bl 0x70834
  01e57c0  nop
  01e57c4  lwz 3, 112(24)
  01e57c8  cmpw 29, 3
  01e57cc  bf 2, 0x1e5850
  01e57d0  lfs 1, 20(25)
  01e57d4  lfs 2, 20(3)
  01e57d8  lfs 3, 16(25)
  01e57dc  fsubs 1, 1, 2
  01e57e0  lfs 2, 16(3)
  01e57e4  fsubs 2, 3, 2
  01e57e8  lfs 3, 24(25)
  01e57ec  lfs 4, 24(3)
  01e57f0  addic 28, 1, 240
  01e57f4  fsubs 3, 3, 4
  01e57f8  addic 3, 31, 14
  01e57fc  ori 4, 19, 0
  01e5800  fmuls 1, 1, 1
  01e5804  extsw 31, 3
  01e5808  ori 3, 28, 0
  01e580c  fmadds 1, 2, 2, 1
  01e5810  fmadds 1, 3, 3, 1
  01e5814  fsqrts 1, 1
  01e5818  stfd 1, 64(1)
  01e581c  ld 5, 64(1)
  01e5820  bl 0x5cd2a8
  01e5824  nop
  01e5828  ori 3, 28, 0
  01e582c  bl 0x5c8510
  01e5830  nop
  01e5834  extsw 7, 3
  01e5838  ori 3, 30, 0
  01e583c  ori 4, 31, 0
  01e5840  ori 5, 22, 0
  01e5844  ori 6, 28, 0
  01e5848  bl 0x70834
  01e584c  nop
  01e5850  lis 7, 28800
  01e5854  ori 3, 21, 0
  01e5858  ori 4, 20, 0
  01e585c  ori 5, 29, 0
  01e5860  li 6, 0
  01e5864  ori 7, 7, 32896
  01e5868  bl 0x1e4eb8
  01e586c  lwz 3, 232(24)
  01e5870  addic 3, 3, 1
  01e5874  stw 3, 232(24)
  01e5878  b 0x1e5e64
  01e587c  addic 31, 29, 16
  01e5880  addic 3, 1, 128
  01e5884  ori 4, 31, 0
  01e5888  bl 0x65490
  01e588c  nop
  01e5890  lbz 3, 49(29)
  01e5894  cmpwi 3, 0
  01e5898  bt 2, 0x1e5ab0
  01e589c  lwz 3, 16(26)
  01e58a0  lwz 4, 20(26)
  01e58a4  extsw 3, 3
  01e58a8  std 3, 304(1)
  01e58ac  extsw 3, 4
  01e58b0  lis 4, 161
  01e58b4  lfs 1, 128(1)
  01e58b8  lfs 2, 132(1)
  01e58bc  lwz 4, 1808(4)
  01e58c0  lfd 3, 304(1)
  01e58c4  std 3, 304(1)
  01e58c8  fcfid 3, 3
  01e58cc  extsw 3, 4
  01e58d0  frsp 3, 3
  01e58d4  lfd 4, 304(1)
  01e58d8  fsubs 1, 1, 3
  01e58dc  fcfid 4, 4
  01e58e0  fmuls 26, 1, 31
  01e58e4  frsp 3, 4
  01e58e8  fsubs 1, 2, 3
  01e58ec  fmuls 25, 1, 31
  01e58f0  bl 0x502730
  01e58f4  nop
  01e58f8  fmuls 1, 1, 28
  01e58fc  bl 0x10de78
  01e5900  nop
  01e5904  lis 7, 255
  01e5908  fneg 4, 1
  01e590c  ori 3, 18, 0
  01e5910  ld 8, 272(1)
  01e5914  li 4, 30
  01e5918  fmr 1, 26
  01e591c  ori 7, 7, 65523
  01e5920  fmr 2, 25
  01e5924  fmr 3, 29
  01e5928  bl 0x1e4870
  01e592c  addic 3, 1, 176
  01e5930  ori 4, 31, 0
  01e5934  bl 0x65490
  01e5938  nop
  01e593c  lwz 3, 16(26)
  01e5940  extsw 3, 3
  01e5944  std 3, 304(1)
  01e5948  lfs 1, 176(1)
  01e594c  lfd 2, 304(1)
  01e5950  fcfid 2, 2
  01e5954  frsp 2, 2
  01e5958  fsubs 1, 1, 2
  01e595c  fmuls 1, 1, 31
  01e5960  bl 0x502758
  01e5964  nop
  01e5968  lwz 4, 20(26)
  01e596c  extsw 4, 4
  01e5970  ori 30, 3, 0
  01e5974  std 4, 304(1)
  01e5978  lfs 1, 180(1)
  01e597c  lfd 2, 304(1)
  01e5980  fcfid 2, 2
  01e5984  frsp 2, 2
  01e5988  fsubs 1, 1, 2
  01e598c  fmuls 1, 1, 31
  01e5990  bl 0x502758
  01e5994  nop
  01e5998  addic 31, 3, 10
  01e599c  ori 3, 30, 0
  01e59a0  extsw 31, 31
  01e59a4  ori 5, 27, 0
  01e59a8  ori 4, 31, 0
  01e59ac  ori 6, 28, 0
  01e59b0  li 7, 3
  01e59b4  bl 0x70834
  01e59b8  nop
  01e59bc  ori 3, 29, 0
  01e59c0  bl 0xfcccc
  01e59c4  nop
  01e59c8  cmpwi 3, 0
  01e59cc  bt 2, 0x1e5a24
  01e59d0  addic 31, 31, 14
  01e59d4  lfs 1, 0(3)
  01e59d8  extsw 31, 31
  01e59dc  bl 0x502758
  01e59e0  nop
  01e59e4  addic 28, 1, 240
  01e59e8  ori 5, 3, 0
  01e59ec  ori 3, 28, 0
  01e59f0  ori 4, 17, 0
  01e59f4  bl 0x5cd2a8
  01e59f8  nop
  01e59fc  ori 3, 28, 0
  01e5a00  bl 0x5c8510
  01e5a04  nop
  01e5a08  extsw 7, 3
  01e5a0c  ori 3, 30, 0
  01e5a10  ori 4, 31, 0
  01e5a14  ori 5, 14, 0
  01e5a18  ori 6, 28, 0
  01e5a1c  bl 0x70834
  01e5a20  nop
  01e5a24  lwz 3, 112(24)
  01e5a28  cmpw 29, 3
  01e5a2c  bf 2, 0x1e5ab0
  01e5a30  lfs 1, 20(25)
  01e5a34  lfs 2, 20(3)
  01e5a38  lfs 3, 16(25)
  01e5a3c  fsubs 1, 1, 2
  01e5a40  lfs 2, 16(3)
  01e5a44  fsubs 2, 3, 2
  01e5a48  lfs 3, 24(25)
  01e5a4c  lfs 4, 24(3)
  01e5a50  addic 28, 1, 240
  01e5a54  fsubs 3, 3, 4
  01e5a58  addic 3, 31, 14
  01e5a5c  ori 4, 19, 0
  01e5a60  fmuls 1, 1, 1
  01e5a64  extsw 31, 3
  01e5a68  ori 3, 28, 0
  01e5a6c  fmadds 1, 2, 2, 1
  01e5a70  fmadds 1, 3, 3, 1
  01e5a74  fsqrts 1, 1
  01e5a78  stfd 1, 64(1)
  01e5a7c  ld 5, 64(1)
  01e5a80  bl 0x5cd2a8
  01e5a84  nop
  01e5a88  ori 3, 28, 0
  01e5a8c  bl 0x5c8510
  01e5a90  nop
  01e5a94  extsw 7, 3
  01e5a98  ori 3, 30, 0
  01e5a9c  ori 4, 31, 0
  01e5aa0  ori 5, 22, 0
  01e5aa4  ori 6, 28, 0
  01e5aa8  bl 0x70834
  01e5aac  nop
  01e5ab0  lis 7, 28800
  01e5ab4  ori 3, 21, 0
  01e5ab8  ori 4, 20, 0
  01e5abc  ori 5, 29, 0
  01e5ac0  li 6, 1
  01e5ac4  ori 7, 7, 32896
  01e5ac8  bl 0x1e4eb8
  01e5acc  b 0x1e5e64
  01e5ad0  lbz 3, 32(29)
  01e5ad4  cmpwi 3, 1
  01e5ad8  bf 1, 0x1e5e64
  01e5adc  addic 31, 29, 16
  01e5ae0  addic 3, 1, 128
  01e5ae4  ori 4, 31, 0
  01e5ae8  bl 0x65490
  01e5aec  nop
  01e5af0  lbz 3, 49(29)
  01e5af4  cmpwi 3, 0
  01e5af8  bt 2, 0x1e5d10
  01e5afc  lwz 3, 16(26)
  01e5b00  lwz 4, 20(26)
  01e5b04  extsw 3, 3
  01e5b08  std 3, 304(1)
  01e5b0c  extsw 3, 4
  01e5b10  lis 4, 161
  01e5b14  lfs 1, 128(1)
  01e5b18  lfs 2, 132(1)
  01e5b1c  lwz 4, 1808(4)
  01e5b20  lfd 3, 304(1)
  01e5b24  std 3, 304(1)
  01e5b28  fcfid 3, 3
  01e5b2c  extsw 3, 4
  01e5b30  frsp 3, 3
  01e5b34  lfd 4, 304(1)
  01e5b38  fsubs 1, 1, 3
  01e5b3c  fcfid 4, 4
  01e5b40  fmuls 26, 1, 31
  01e5b44  frsp 3, 4
  01e5b48  fsubs 1, 2, 3
  01e5b4c  fmuls 25, 1, 31
  01e5b50  bl 0x502730
  01e5b54  nop
  01e5b58  fmuls 1, 1, 28
  01e5b5c  bl 0x10de78
  01e5b60  nop
  01e5b64  lis 7, 255
  01e5b68  fneg 4, 1
  01e5b6c  ori 3, 18, 0
  01e5b70  ld 8, 272(1)
  01e5b74  li 4, 30
  01e5b78  fmr 1, 26
  01e5b7c  ori 7, 7, 65523
  01e5b80  fmr 2, 25
  01e5b84  fmr 3, 29
  01e5b88  bl 0x1e4870
  01e5b8c  addic 3, 1, 160
  01e5b90  ori 4, 31, 0
  01e5b94  bl 0x65490
  01e5b98  nop
  01e5b9c  lwz 3, 16(26)
  01e5ba0  extsw 3, 3
  01e5ba4  std 3, 304(1)
  01e5ba8  lfs 1, 160(1)
  01e5bac  lfd 2, 304(1)
  01e5bb0  fcfid 2, 2
  01e5bb4  frsp 2, 2
  01e5bb8  fsubs 1, 1, 2
  01e5bbc  fmuls 1, 1, 31
  01e5bc0  bl 0x502758
  01e5bc4  nop
  01e5bc8  lwz 4, 20(26)
  01e5bcc  extsw 4, 4
  01e5bd0  ori 30, 3, 0
  01e5bd4  std 4, 304(1)
  01e5bd8  lfs 1, 164(1)
  01e5bdc  lfd 2, 304(1)
  01e5be0  fcfid 2, 2
  01e5be4  frsp 2, 2
  01e5be8  fsubs 1, 1, 2
  01e5bec  fmuls 1, 1, 31
  01e5bf0  bl 0x502758
  01e5bf4  nop
  01e5bf8  addic 31, 3, 10
  01e5bfc  ori 3, 30, 0
  01e5c00  extsw 31, 31
  01e5c04  ori 5, 27, 0
  01e5c08  ori 4, 31, 0
  01e5c0c  ori 6, 28, 0
  01e5c10  li 7, 3
  01e5c14  bl 0x70834
  01e5c18  nop
  01e5c1c  ori 3, 29, 0
  01e5c20  bl 0xfcccc
  01e5c24  nop
  01e5c28  cmpwi 3, 0
  01e5c2c  bt 2, 0x1e5c84
  01e5c30  addic 31, 31, 14
  01e5c34  lfs 1, 0(3)
  01e5c38  extsw 31, 31
  01e5c3c  bl 0x502758
  01e5c40  nop
  01e5c44  addic 28, 1, 240
  01e5c48  ori 5, 3, 0
  01e5c4c  ori 3, 28, 0
  01e5c50  ori 4, 17, 0
  01e5c54  bl 0x5cd2a8
  01e5c58  nop
  01e5c5c  ori 3, 28, 0
  01e5c60  bl 0x5c8510
  01e5c64  nop
  01e5c68  extsw 7, 3
  01e5c6c  ori 3, 30, 0
  01e5c70  ori 4, 31, 0
  01e5c74  ori 5, 14, 0
  01e5c78  ori 6, 28, 0
  01e5c7c  bl 0x70834
  01e5c80  nop
  01e5c84  lwz 3, 112(24)
  01e5c88  cmpw 29, 3
  01e5c8c  bf 2, 0x1e5d10
  01e5c90  lfs 1, 20(25)
  01e5c94  lfs 2, 20(3)
  01e5c98  lfs 3, 16(25)
  01e5c9c  fsubs 1, 1, 2
  01e5ca0  lfs 2, 16(3)
  01e5ca4  fsubs 2, 3, 2
  01e5ca8  lfs 3, 24(25)
  01e5cac  lfs 4, 24(3)
  01e5cb0  addic 28, 1, 240
  01e5cb4  fsubs 3, 3, 4
  01e5cb8  addic 3, 31, 14
  01e5cbc  ori 4, 19, 0
  01e5cc0  fmuls 1, 1, 1
  01e5cc4  extsw 31, 3
  01e5cc8  ori 3, 28, 0
  01e5ccc  fmadds 1, 2, 2, 1
  01e5cd0  fmadds 1, 3, 3, 1
  01e5cd4  fsqrts 1, 1
  01e5cd8  stfd 1, 64(1)
  01e5cdc  ld 5, 64(1)
  01e5ce0  bl 0x5cd2a8
  01e5ce4  nop
  01e5ce8  ori 3, 28, 0
  01e5cec  bl 0x5c8510
  01e5cf0  nop
  01e5cf4  extsw 7, 3
  01e5cf8  ori 3, 30, 0
  01e5cfc  ori 4, 31, 0
  01e5d00  ori 5, 22, 0
  01e5d04  ori 6, 28, 0
  01e5d08  bl 0x70834
  01e5d0c  nop
  01e5d10  lis 7, 28800
  01e5d14  ori 3, 21, 0
  01e5d18  ori 4, 20, 0
  01e5d1c  ori 5, 29, 0
  01e5d20  li 6, 1
  01e5d24  ori 7, 7, 32896
  01e5d28  bl 0x1e4eb8
  01e5d2c  b 0x1e5e64
  01e5d30  lwz 3, 36(29)
  01e5d34  cmpwi 3, 0
  01e5d38  bt 2, 0x1e5e64
  01e5d3c  lhz 3, 70(3)
  01e5d40  extsh 3, 3
  01e5d44  cmpwi 3, 5
  01e5d48  bf 2, 0x1e5e64
  01e5d4c  lis 7, 28800
  01e5d50  ori 3, 21, 0
  01e5d54  ori 4, 20, 0
  01e5d58  ori 5, 29, 0
  01e5d5c  li 6, 1
  01e5d60  ori 7, 7, 32896
  01e5d64  bl 0x1e4eb8
  01e5d68  lwz 3, 112(24)
  01e5d6c  cmpw 29, 3
  01e5d70  bf 2, 0x1e5e64
  01e5d74  addic 3, 1, 144
  01e5d78  addic 4, 29, 16
  01e5d7c  bl 0x65490
  01e5d80  nop
  01e5d84  lwz 3, 16(26)
  01e5d88  extsw 3, 3
  01e5d8c  std 3, 304(1)
  01e5d90  lfs 1, 144(1)
  01e5d94  lfd 2, 304(1)
  01e5d98  fcfid 2, 2
  01e5d9c  frsp 2, 2
  01e5da0  fsubs 1, 1, 2
  01e5da4  fmuls 1, 1, 31
  01e5da8  bl 0x502758
  01e5dac  nop
  01e5db0  lwz 4, 20(26)
  01e5db4  extsw 4, 4
  01e5db8  ori 31, 3, 0
  01e5dbc  std 4, 304(1)
  01e5dc0  lfs 1, 148(1)
  01e5dc4  lfd 2, 304(1)
  01e5dc8  fcfid 2, 2
  01e5dcc  frsp 2, 2
  01e5dd0  fsubs 1, 1, 2
  01e5dd4  fmuls 1, 1, 31
  01e5dd8  bl 0x502758
  01e5ddc  nop
  01e5de0  lwz 4, 112(24)
  01e5de4  lfs 1, 20(25)
  01e5de8  lfs 2, 16(25)
  01e5dec  lfs 3, 20(4)
  01e5df0  lfs 4, 16(4)
  01e5df4  fsubs 1, 1, 3
  01e5df8  fsubs 2, 2, 4
  01e5dfc  lfs 3, 24(25)
  01e5e00  lfs 4, 24(4)
  01e5e04  fsubs 3, 3, 4
  01e5e08  addic 3, 3, 10
  01e5e0c  addic 28, 1, 240
  01e5e10  extsw 30, 3
  01e5e14  ori 3, 28, 0
  01e5e18  fmuls 1, 1, 1
  01e5e1c  ori 4, 19, 0
  01e5e20  fmadds 1, 2, 2, 1
  01e5e24  fmadds 1, 3, 3, 1
  01e5e28  fsqrts 1, 1
  01e5e2c  stfd 1, 64(1)
  01e5e30  ld 5, 64(1)
  01e5e34  bl 0x5cd2a8
  01e5e38  nop
  01e5e3c  ori 3, 28, 0
  01e5e40  bl 0x5c8510
  01e5e44  nop
  01e5e48  extsw 7, 3
  01e5e4c  ori 3, 31, 0
  01e5e50  ori 4, 30, 0
  01e5e54  ori 5, 22, 0
  01e5e58  ori 6, 28, 0
  01e5e5c  bl 0x70834
  01e5e60  nop
  01e5e64  lwz 29, 40(29)
  01e5e68  cmpwi 29, 0
  01e5e6c  bf 2, 0x1e52a0
  01e5e70  ori 3, 15, 0
  01e5e74  ld 0, 544(1)
  01e5e78  mtlr 0
  01e5e7c  lfd 25, 472(1)
  01e5e80  lfd 26, 480(1)
  01e5e84  lfd 27, 488(1)
  01e5e88  lfd 28, 496(1)
  01e5e8c  lfd 29, 504(1)
  01e5e90  lfd 30, 512(1)
  01e5e94  lfd 31, 520(1)
  01e5e98  ld 14, 328(1)
  01e5e9c  ld 15, 336(1)
  01e5ea0  ld 16, 344(1)
  01e5ea4  ld 17, 352(1)
  01e5ea8  ld 18, 360(1)
  01e5eac  ld 19, 368(1)
  01e5eb0  ld 20, 376(1)
  01e5eb4  ld 21, 384(1)
  01e5eb8  ld 22, 392(1)
  01e5ebc  ld 23, 400(1)
  01e5ec0  ld 24, 408(1)
  01e5ec4  ld 25, 416(1)
  01e5ec8  ld 26, 424(1)
  01e5ecc  ld 27, 432(1)
  01e5ed0  ld 28, 440(1)
  01e5ed4  ld 29, 448(1)
  01e5ed8  ld 30, 456(1)
  01e5edc  ld 31, 464(1)
  01e5ee0  addi 1, 1, 528
  01e5ee4  blr

M1160_UpdateTargetLock:   # 0x1e5ef0, 0x204 bytes
  01e5ef0  stdu 1, -176(1)
  01e5ef4  mflr 0
  01e5ef8  std 0, 192(1)
  01e5efc  std 31, 168(1)
  01e5f00  std 29, 152(1)
  01e5f04  ori 31, 4, 0
  01e5f08  std 28, 144(1)
  01e5f0c  ori 29, 3, 0
  01e5f10  li 28, 0
  01e5f14  std 30, 160(1)
  01e5f18  addic 3, 31, 116
  01e5f1c  ori 30, 28, 0
  01e5f20  bl 0x4fff60
  01e5f24  nop
  01e5f28  cmpwi 3, 0
  01e5f2c  bf 2, 0x1e5f88
  01e5f30  lwz 3, 112(31)
  01e5f34  cmpwi 3, 0
  01e5f38  bt 2, 0x1e5f88
  01e5f3c  lbz 4, 32(3)
  01e5f40  cmpwi 1, 4, 253
  01e5f44  cmpwi 4, 254
  01e5f48  cror 2, 2, 6
  01e5f4c  bt 2, 0x1e5f88
  01e5f50  lbz 4, 49(3)
  01e5f54  cmpwi 4, 0
  01e5f58  bt 2, 0x1e5f88
  01e5f5c  lis 4, 150
  01e5f60  addic 4, 4, 19008
  01e5f64  lwz 4, 180(4)
  01e5f68  rlwinm 4, 4, 0, 18, 18
  01e5f6c  cmpwi 4, 0
  01e5f70  bf 2, 0x1e5f88
  01e5f74  lis 4, 151
  01e5f78  addic 4, 4, -25376
  01e5f7c  lbz 4, 5622(4)
  01e5f80  cmpwi 4, 0
  01e5f84  bf 2, 0x1e5fb0
  01e5f88  lis 3, 150
  01e5f8c  addic 3, 3, 19008
  01e5f90  lwz 3, 180(3)
  01e5f94  rlwinm 3, 3, 0, 18, 18
  01e5f98  cmpwi 3, 0
  01e5f9c  bt 2, 0x1e5fa4
  01e5fa0  lwz 28, 112(31)
  01e5fa4  ori 3, 30, 0
  01e5fa8  stw 30, 112(31)
  01e5fac  stw 3, 120(31)
  01e5fb0  ori 10, 3, 0
  01e5fb4  lis 3, 149
  01e5fb8  addic 6, 1, 128
  01e5fbc  addic 5, 3, 5056
  01e5fc0  lis 3, 30
  01e5fc4  ori 4, 31, 0
  01e5fc8  addi 3, 3, 24296
  01e5fcc  lfs 1, 336(5)
  01e5fd0  lfs 2, 340(5)
  01e5fd4  stfs 1, 128(1)
  01e5fd8  lfs 1, 344(5)
  01e5fdc  stfs 2, 132(1)
  01e5fe0  lfs 2, 348(5)
  01e5fe4  stfs 1, 136(1)
  01e5fe8  stfs 2, 140(1)
  01e5fec  addic 5, 5, 320
  01e5ff0  lfs 1, 0(3)
  01e5ff4  lfs 3, 4(3)
  01e5ff8  ori 3, 29, 0
  01e5ffc  std 28, 112(1)
  01e6000  fmr 2, 1
  01e6004  bl 0x1e5158
  01e6008  lwz 29, 112(31)
  01e600c  cmpw 3, 29
  01e6010  bt 2, 0x1e6020
  01e6014  lwz 4, 116(31)
  01e6018  cmpwi 4, 500
  01e601c  bt 1, 0x1e6034
  01e6020  lis 4, 151
  01e6024  addic 4, 4, -25376
  01e6028  lbz 4, 5622(4)
  01e602c  cmpwi 4, 0
  01e6030  bf 2, 0x1e603c
  01e6034  ori 29, 30, 0
  01e6038  stw 30, 112(31)
  01e603c  cmpwi 3, 0
  01e6040  ori 4, 29, 0
  01e6044  bt 2, 0x1e609c
  01e6048  ori 4, 29, 0
  01e604c  cmpwi 4, 0
  01e6050  bt 2, 0x1e606c
  01e6054  lhz 5, 166(4)
  01e6058  cmpwi 5, 1003
  01e605c  bt 2, 0x1e609c
  01e6060  lhz 5, 166(3)
  01e6064  cmpwi 5, 1003
  01e6068  bf 2, 0x1e609c
  01e606c  lis 5, 151
  01e6070  addic 5, 5, -25376
  01e6074  lbz 5, 5622(5)
  01e6078  cmpwi 5, 0
  01e607c  bf 1, 0x1e609c
  01e6080  lis 5, 118
  01e6084  ori 29, 3, 0
  01e6088  stw 3, 112(31)
  01e608c  ori 4, 29, 0
  01e6090  lwz 3, 20904(5)
  01e6094  stw 30, 120(31)
  01e6098  stw 3, 116(31)
  01e609c  cmpwi 4, 0
  01e60a0  bt 2, 0x1e60d4
  01e60a4  lwz 3, 104(31)
  01e60a8  cmpwi 1, 29, 0
  01e60ac  cmpwi 3, 0
  01e60b0  bf 2, 0x1e60d4
  01e60b4  bt 6, 0x1e60cc
  01e60b8  lbz 3, 32(29)
  01e60bc  cmpwi 3, 254
  01e60c0  cmpwi 1, 3, 253
  01e60c4  bt 2, 0x1e60cc
  01e60c8  bf 6, 0x1e60d4
  01e60cc  stw 30, 112(31)
  01e60d0  stw 30, 120(31)
  01e60d4  ld 0, 192(1)
  01e60d8  mtlr 0
  01e60dc  ld 28, 144(1)
  01e60e0  ld 29, 152(1)
  01e60e4  ld 30, 160(1)
  01e60e8  ld 31, 168(1)
  01e60ec  addi 1, 1, 176
  01e60f0  blr

M1160_Hud_Draw:   # 0x1e6130, 0x814 bytes
  01e6130  stdu 1, -320(1)
  01e6134  mflr 0
  01e6138  std 0, 336(1)
  01e613c  stfd 28, 288(1)
  01e6140  stfd 29, 296(1)
  01e6144  stfd 30, 304(1)
  01e6148  stfd 31, 312(1)
  01e614c  std 31, 280(1)
  01e6150  std 29, 264(1)
  01e6154  ori 31, 3, 0
  01e6158  li 3, 62
  01e615c  std 30, 272(1)
  01e6160  std 28, 256(1)
  01e6164  std 27, 248(1)
  01e6168  std 26, 240(1)
  01e616c  std 25, 232(1)
  01e6170  std 24, 224(1)
  01e6174  std 23, 216(1)
  01e6178  lwz 29, 120(31)
  01e617c  bl 0x685c4
  01e6180  nop
  01e6184  lis 30, 150
  01e6188  lis 4, -32640
  01e618c  addic 30, 30, 27392
  01e6190  ori 8, 3, 0
  01e6194  ori 3, 4, 32896
  01e6198  li 7, 0
  01e619c  clrldi 9, 3, 32
  01e61a0  lwz 5, 4(30)
  01e61a4  li 3, 384
  01e61a8  addic 4, 5, -128
  01e61ac  li 10, 96
  01e61b0  std 9, 112(1)
  01e61b4  extsw 4, 4
  01e61b8  std 8, 120(1)
  01e61bc  li 5, 96
  01e61c0  li 6, 96
  01e61c4  li 8, 0
  01e61c8  li 9, 96
  01e61cc  bl 0x6a5c4
  01e61d0  nop
  01e61d4  ori 3, 31, 0
  01e61d8  ori 4, 29, 0
  01e61dc  bl 0x1e5ef0
  01e61e0  lwz 25, 112(29)
  01e61e4  cmpwi 25, 0
  01e61e8  bt 2, 0x1e6480
  01e61ec  addic 3, 1, 128
  01e61f0  addic 4, 25, 16
  01e61f4  bl 0x65490
  01e61f8  nop
  01e61fc  lwz 3, 16(30)
  01e6200  extsw 3, 3
  01e6204  std 3, 192(1)
  01e6208  lis 3, 30
  01e620c  lfs 1, 128(1)
  01e6210  addi 3, 3, 24820
  01e6214  lfs 31, 0(3)
  01e6218  lfd 2, 192(1)
  01e621c  fcfid 2, 2
  01e6220  frsp 2, 2
  01e6224  fsubs 1, 1, 2
  01e6228  fmuls 1, 1, 31
  01e622c  bl 0x502758
  01e6230  nop
  01e6234  lwz 4, 20(30)
  01e6238  extsw 4, 4
  01e623c  ori 25, 3, 0
  01e6240  std 4, 192(1)
  01e6244  lfs 1, 132(1)
  01e6248  lfd 2, 192(1)
  01e624c  fcfid 2, 2
  01e6250  frsp 2, 2
  01e6254  fsubs 1, 1, 2
  01e6258  fmuls 1, 1, 31
  01e625c  bl 0x502758
  01e6260  nop
  01e6264  ori 26, 3, 0
  01e6268  lwz 3, 116(29)
  01e626c  lis 27, 118
  01e6270  lis 28, 118
  01e6274  cmpwi 3, 500
  01e6278  addic 27, 27, 22836
  01e627c  addic 28, 28, 22644
  01e6280  bf 1, 0x1e63b4
  01e6284  ori 3, 25, 0
  01e6288  bl 0x502730
  01e628c  nop
  01e6290  ori 3, 26, 0
  01e6294  fmr 31, 1
  01e6298  bl 0x502730
  01e629c  nop
  01e62a0  lis 3, 30
  01e62a4  fmr 30, 1
  01e62a8  lis 24, 161
  01e62ac  addi 23, 3, 24820
  01e62b0  lwz 3, 1808(24)
  01e62b4  lfs 1, 4(23)
  01e62b8  extsw 3, 3
  01e62bc  fmr 29, 1
  01e62c0  bl 0x502730
  01e62c4  nop
  01e62c8  lfs 2, 8(23)
  01e62cc  fmr 28, 2
  01e62d0  fmuls 1, 1, 28
  01e62d4  bl 0x10de78
  01e62d8  nop
  01e62dc  lis 7, 255
  01e62e0  lis 8, 24576
  01e62e4  fmr 4, 1
  01e62e8  ori 3, 27, 0
  01e62ec  fmr 1, 31
  01e62f0  li 4, 30
  01e62f4  fmr 2, 30
  01e62f8  fmr 3, 29
  01e62fc  ori 7, 7, 65523
  01e6300  ori 8, 8, 65280
  01e6304  bl 0x1e4870
  01e6308  lis 3, 118
  01e630c  lwz 3, 20912(3)
  01e6310  extsw 3, 3
  01e6314  bl 0x502730
  01e6318  nop
  01e631c  lwz 3, 116(29)
  01e6320  fmr 31, 1
  01e6324  addic 3, 3, -500
  01e6328  extsw 3, 3
  01e632c  bl 0x502730
  01e6330  nop
  01e6334  lfs 2, 12(23)
  01e6338  fmuls 1, 1, 2
  01e633c  ori 3, 25, 0
  01e6340  fdivs 31, 1, 31
  01e6344  bl 0x502730
  01e6348  nop
  01e634c  ori 3, 26, 0
  01e6350  fmr 30, 1
  01e6354  bl 0x502730
  01e6358  nop
  01e635c  lwz 3, 1808(24)
  01e6360  fmr 29, 1
  01e6364  extsw 3, 3
  01e6368  bl 0x502730
  01e636c  nop
  01e6370  fmuls 1, 1, 28
  01e6374  bl 0x10de78
  01e6378  nop
  01e637c  lis 7, 255
  01e6380  fmr 4, 1
  01e6384  lis 8, 16384
  01e6388  fmr 1, 30
  01e638c  ori 3, 28, 0
  01e6390  fmr 2, 29
  01e6394  li 4, 30
  01e6398  fmr 3, 31
  01e639c  ori 7, 7, 65523
  01e63a0  ori 8, 8, 65280
  01e63a4  bl 0x1e4870
  01e63a8  li 3, 0
  01e63ac  stw 3, 236(29)
  01e63b0  b 0x1e6480
  01e63b4  ori 5, 3, 0
  01e63b8  lis 3, 30
  01e63bc  lis 4, 114
  01e63c0  addi 3, 3, 24820
  01e63c4  li 6, 0
  01e63c8  lis 9, 255
  01e63cc  lfs 1, 16(3)
  01e63d0  lfs 2, -3056(4)
  01e63d4  lis 3, 24576
  01e63d8  fmuls 1, 2, 1
  01e63dc  lis 4, 24576
  01e63e0  ori 7, 3, 255
  01e63e4  ori 3, 4, 65535
  01e63e8  li 4, 30
  01e63ec  subc 8, 3, 7
  01e63f0  ori 3, 27, 0
  01e63f4  fctiwz 1, 1
  01e63f8  stfd 1, 192(1)
  01e63fc  lwz 10, 196(1)
  01e6400  divw 5, 5, 10
  01e6404  clrlwi 5, 5, 31
  01e6408  subc 5, 6, 5
  01e640c  cntlzw 5, 5
  01e6410  sldi 6, 5, 58
  01e6414  ori 5, 25, 0
  01e6418  sradi 6, 6, 63
  01e641c  and 8, 6, 8
  01e6420  ori 6, 26, 0
  01e6424  addc 27, 7, 8
  01e6428  ori 7, 9, 65523
  01e642c  ori 8, 27, 0
  01e6430  bl 0x1e43f0
  01e6434  lis 7, 255
  01e6438  ori 3, 28, 0
  01e643c  ori 8, 27, 0
  01e6440  li 4, 30
  01e6444  ori 5, 25, 0
  01e6448  ori 6, 26, 0
  01e644c  ori 7, 7, 65523
  01e6450  bl 0x1e43f0
  01e6454  lis 3, 118
  01e6458  lis 7, 255
  01e645c  addic 3, 3, 22956
  01e6460  li 4, 26
  01e6464  ori 8, 27, 0
  01e6468  ori 5, 25, 0
  01e646c  ori 6, 26, 0
  01e6470  ori 7, 7, 65523
  01e6474  bl 0x1e43f0
  01e6478  lwz 3, 112(29)
  01e647c  stw 3, 236(29)
  01e6480  lis 27, 151
  01e6484  li 26, 64
  01e6488  addic 27, 27, -25376
  01e648c  li 25, 0
  01e6490  lbz 3, 5623(27)
  01e6494  cmpwi 3, 0
  01e6498  bf 1, 0x1e653c
  01e649c  lis 3, 30
  01e64a0  lis 28, 118
  01e64a4  addi 3, 3, 24820
  01e64a8  addic 28, 28, 22272
  01e64ac  lfs 30, 20(3)
  01e64b0  lfs 31, 24(3)
  01e64b4  extsw 3, 26
  01e64b8  std 3, 192(1)
  01e64bc  lbz 3, 5622(27)
  01e64c0  lfd 1, 192(1)
  01e64c4  cmpw 25, 3
  01e64c8  fcfid 1, 1
  01e64cc  frsp 1, 1
  01e64d0  bf 0, 0x1e6500
  01e64d4  lis 7, 255
  01e64d8  fmr 2, 1
  01e64dc  lis 8, 20480
  01e64e0  fmr 1, 30
  01e64e4  ori 3, 28, 0
  01e64e8  fmr 3, 31
  01e64ec  li 4, 25
  01e64f0  ori 7, 7, 65523
  01e64f4  ori 8, 8, 36608
  01e64f8  bl 0x1e4610
  01e64fc  b 0x1e6528
  01e6500  lis 7, 255
  01e6504  fmr 2, 1
  01e6508  lis 8, 8192
  01e650c  fmr 1, 30
  01e6510  ori 3, 28, 0
  01e6514  fmr 3, 31
  01e6518  li 4, 25
  01e651c  ori 7, 7, 65523
  01e6520  ori 8, 8, 20224
  01e6524  bl 0x1e4610
  01e6528  addic 25, 25, 1
  01e652c  lbz 3, 5623(27)
  01e6530  addic 26, 26, 18
  01e6534  cmpw 25, 3
  01e6538  bt 0, 0x1e64b4
  01e653c  lis 4, -224
  01e6540  lwz 6, 224(29)
  01e6544  lis 5, 30
  01e6548  lwz 9, 228(29)
  01e654c  ori 4, 4, 65312
  01e6550  lis 3, 118
  01e6554  lis 7, 255
  01e6558  addi 28, 5, 24820
  01e655c  clrldi 8, 4, 32
  01e6560  extsw 5, 6
  01e6564  addic 3, 3, 22404
  01e6568  extsw 6, 9
  01e656c  li 4, 30
  01e6570  ori 7, 7, 65523
  01e6574  bl 0x1e43f0
  01e6578  addic 26, 1, 152
  01e657c  lwz 5, 232(29)
  01e6580  lis 4, 101
  01e6584  ori 3, 26, 0
  01e6588  addic 4, 4, 18652
  01e658c  extsw 5, 5
  01e6590  bl 0x5cd2a8
  01e6594  nop
  01e6598  lis 3, -32768
  01e659c  ori 4, 3, 32768
  01e65a0  ori 3, 26, 0
  01e65a4  clrldi 4, 4, 32
  01e65a8  ori 25, 4, 0
  01e65ac  bl 0x5c8510
  01e65b0  nop
  01e65b4  extsw 7, 3
  01e65b8  li 3, 16
  01e65bc  li 4, 345
  01e65c0  ori 5, 25, 0
  01e65c4  ori 6, 26, 0
  01e65c8  bl 0x6fc54
  01e65cc  nop
  01e65d0  lfs 1, 28(28)
  01e65d4  lis 4, 101
  01e65d8  lfs 2, 24(31)
  01e65dc  ori 3, 26, 0
  01e65e0  addic 4, 4, 18684
  01e65e4  fsubs 1, 2, 1
  01e65e8  stfd 1, 64(1)
  01e65ec  ld 5, 64(1)
  01e65f0  bl 0x5cd2a8
  01e65f4  nop
  01e65f8  ori 3, 26, 0
  01e65fc  bl 0x5c8510
  01e6600  nop
  01e6604  extsw 7, 3
  01e6608  li 3, 16
  01e660c  li 4, 360
  01e6610  ori 5, 25, 0
  01e6614  ori 6, 26, 0
  01e6618  bl 0x6fc54
  01e661c  nop
  01e6620  lfs 31, 32(28)
  01e6624  lfs 2, 64(31)
  01e6628  lfs 30, 36(28)
  01e662c  fmuls 1, 2, 31
  01e6630  lis 4, 101
  01e6634  ori 3, 26, 0
  01e6638  addic 4, 4, 18708
  01e663c  fmuls 1, 1, 30
  01e6640  stfd 1, 64(1)
  01e6644  ld 5, 64(1)
  01e6648  bl 0x5cd2a8
  01e664c  nop
  01e6650  ori 3, 26, 0
  01e6654  bl 0x5c8510
  01e6658  nop
  01e665c  extsw 7, 3
  01e6660  li 3, 16
  01e6664  li 4, 375
  01e6668  ori 5, 25, 0
  01e666c  ori 6, 26, 0
  01e6670  bl 0x6fc54
  01e6674  nop
  01e6678  lfs 1, 72(31)
  01e667c  lis 4, 101
  01e6680  fmuls 1, 1, 31
  01e6684  ori 3, 26, 0
  01e6688  addic 4, 4, 18724
  01e668c  fmuls 1, 1, 30
  01e6690  stfd 1, 64(1)
  01e6694  ld 5, 64(1)
  01e6698  bl 0x5cd2a8
  01e669c  nop
  01e66a0  ori 3, 26, 0
  01e66a4  bl 0x5c8510
  01e66a8  nop
  01e66ac  extsw 7, 3
  01e66b0  li 3, 16
  01e66b4  li 4, 390
  01e66b8  ori 5, 25, 0
  01e66bc  ori 6, 26, 0
  01e66c0  bl 0x6fc54
  01e66c4  nop
  01e66c8  lfs 3, 40(28)
  01e66cc  lfs 1, 5628(27)
  01e66d0  lfs 4, 5632(27)
  01e66d4  fmuls 2, 4, 3
  01e66d8  fcmpu 0, 1, 2
  01e66dc  cror 6, 1, 2
  01e66e0  bt 6, 0x1e6740
  01e66e4  lis 3, 161
  01e66e8  lis 4, -18933
  01e66ec  ori 4, 4, 24759
  01e66f0  lwz 3, 1808(3)
  01e66f4  mulhw 4, 4, 3
  01e66f8  addc 3, 4, 3
  01e66fc  srawi 3, 3, 6
  01e6700  srwi 4, 3, 31
  01e6704  addc 3, 3, 4
  01e6708  clrlwi 3, 3, 31
  01e670c  cmpwi 3, 0
  01e6710  bt 2, 0x1e6740
  01e6714  lis 3, -32768
  01e6718  lis 6, 101
  01e671c  ori 4, 3, 128
  01e6720  addic 6, 6, 18740
  01e6724  clrldi 5, 4, 32
  01e6728  li 3, 256
  01e672c  li 4, 390
  01e6730  li 7, 26
  01e6734  bl 0x70834
  01e6738  nop
  01e673c  lfs 1, 5628(27)
  01e6740  lfs 2, 240(29)
  01e6744  lis 3, 30
  01e6748  fsubs 1, 1, 2
  01e674c  addi 31, 3, 24820
  01e6750  lfs 3, 44(31)
  01e6754  fmuls 1, 1, 3
  01e6758  lfs 3, 4(31)
  01e675c  fabs 4, 1
  01e6760  fdivs 5, 1, 4
  01e6764  fsub 3, 3, 4
  01e6768  fsel 1, 3, 1, 5
  01e676c  fadds 1, 2, 1
  01e6770  stfs 1, 240(29)
  01e6774  lfs 2, 48(31)
  01e6778  lfs 3, 5632(27)
  01e677c  fmuls 1, 1, 2
  01e6780  fdivs 1, 1, 3
  01e6784  bl 0x502758
  01e6788  nop
  01e678c  addic 3, 3, 2
  01e6790  li 4, 253
  01e6794  extsw 5, 3
  01e6798  li 6, 253
  01e679c  subc 4, 4, 5
  01e67a0  subc 5, 6, 3
  01e67a4  sradi 4, 4, 63
  01e67a8  lis 6, 144
  01e67ac  and 4, 4, 5
  01e67b0  li 7, 2
  01e67b4  addc 3, 3, 4
  01e67b8  lis 5, 144
  01e67bc  extsw 4, 3
  01e67c0  addic 28, 6, -23532
  01e67c4  li 6, 2
  01e67c8  subc 4, 4, 7
  01e67cc  subc 6, 6, 3
  01e67d0  sradi 4, 4, 63
  01e67d4  lwz 27, -23196(5)
  01e67d8  lwz 5, 40(28)
  01e67dc  and 4, 4, 6
  01e67e0  addc 26, 3, 4
  01e67e4  ori 3, 27, 0
  01e67e8  ori 4, 5, 0
  01e67ec  li 5, 13
  01e67f0  bl 0x4d82b8
  01e67f4  nop
  01e67f8  extsw 3, 26
  01e67fc  lis 5, 101
  01e6800  li 4, 13
  01e6804  std 3, 192(1)
  01e6808  lfs 1, 52(31)
  01e680c  lfd 2, 192(1)
  01e6810  ori 3, 27, 0
  01e6814  fcfid 2, 2
  01e6818  addic 5, 5, 18772
  01e681c  frsp 2, 2
  01e6820  fmuls 1, 2, 1
  01e6824  stfs 1, 144(1)
  01e6828  bl 0x4de9c4
  01e682c  nop
  01e6830  ori 6, 3, 0
  01e6834  lwz 4, 40(28)
  01e6838  ori 3, 27, 0
  01e683c  addic 7, 1, 144
  01e6840  li 5, 13
  01e6844  li 8, 1
  01e6848  bl 0x4dd6f0
  01e684c  nop
  01e6850  li 3, 60
  01e6854  bl 0x685c4
  01e6858  nop
  01e685c  lis 6, 24704
  01e6860  ori 9, 3, 0
  01e6864  lwz 4, 4(30)
  01e6868  ori 31, 6, 32896
  01e686c  addic 4, 4, -144
  01e6870  li 3, 368
  01e6874  li 5, 128
  01e6878  std 31, 112(1)
  01e687c  li 6, 128
  01e6880  std 9, 120(1)
  01e6884  extsw 4, 4
  01e6888  li 7, 0
  01e688c  li 8, 0
  01e6890  li 9, 128
  01e6894  li 10, 128
  01e6898  bl 0x6a5c4
  01e689c  nop
  01e68a0  ori 3, 27, 0
  01e68a4  lwz 4, 40(28)
  01e68a8  li 5, 12
  01e68ac  bl 0x4d82b8
  01e68b0  nop
  01e68b4  li 3, 61
  01e68b8  bl 0x685c4
  01e68bc  nop
  01e68c0  ori 8, 3, 0
  01e68c4  lwz 4, 4(30)
  01e68c8  std 31, 112(1)
  01e68cc  li 3, 368
  01e68d0  addic 4, 4, -144
  01e68d4  li 5, 128
  01e68d8  std 8, 120(1)
  01e68dc  li 6, 128
  01e68e0  extsw 4, 4
  01e68e4  li 7, 0
  01e68e8  li 8, 0
  01e68ec  li 9, 128
  01e68f0  li 10, 128
  01e68f4  bl 0x6a5c4
  01e68f8  nop
  01e68fc  stw 26, 244(29)
  01e6900  ld 0, 336(1)
  01e6904  mtlr 0
  01e6908  lfd 28, 288(1)
  01e690c  lfd 29, 296(1)
  01e6910  lfd 30, 304(1)
  01e6914  lfd 31, 312(1)
  01e6918  ld 23, 216(1)
  01e691c  ld 24, 224(1)
  01e6920  ld 25, 232(1)
  01e6924  ld 26, 240(1)
  01e6928  ld 27, 248(1)
  01e692c  ld 28, 256(1)
  01e6930  ld 29, 264(1)
  01e6934  ld 30, 272(1)
  01e6938  ld 31, 280(1)
  01e693c  addi 1, 1, 320
  01e6940  blr

M1160_FireGun:   # 0x1e6958, 0x23c bytes
  01e6958  stdu 1, -208(1)
  01e695c  mflr 0
  01e6960  std 0, 224(1)
  01e6964  stfd 29, 184(1)
  01e6968  stfd 30, 192(1)
  01e696c  stfd 31, 200(1)
  01e6970  std 31, 176(1)
  01e6974  std 30, 168(1)
  01e6978  ori 31, 4, 0
  01e697c  ori 30, 3, 0
  01e6980  std 29, 160(1)
  01e6984  std 28, 152(1)
  01e6988  addic 3, 31, 100
  01e698c  bl 0x4fff60
  01e6990  nop
  01e6994  cmpwi 3, 0
  01e6998  bt 2, 0x1e6b68
  01e699c  lis 3, 150
  01e69a0  li 4, 132
  01e69a4  addic 3, 3, 19008
  01e69a8  lwz 3, 176(3)
  01e69ac  and 3, 3, 4
  01e69b0  cmpwi 3, 0
  01e69b4  bt 2, 0x1e6b68
  01e69b8  lis 3, 149
  01e69bc  addic 3, 3, 5056
  01e69c0  lis 4, 30
  01e69c4  lfs 1, 852(3)
  01e69c8  lfs 4, 848(3)
  01e69cc  fmuls 1, 1, 1
  01e69d0  lfs 2, 856(3)
  01e69d4  addi 4, 4, 26948
  01e69d8  lis 5, 118
  01e69dc  lis 6, 118
  01e69e0  lfs 5, 0(4)
  01e69e4  fmadds 1, 4, 4, 1
  01e69e8  fmadds 1, 2, 2, 1
  01e69ec  lfs 2, 20652(5)
  01e69f0  lfs 3, 20704(6)
  01e69f4  fmuls 2, 2, 3
  01e69f8  fsqrts 1, 1
  01e69fc  fcmpu 0, 1, 5
  01e6a00  bf 2, 0x1e6a3c
  01e6a04  fmr 2, 5
  01e6a08  stfs 4, 112(1)
  01e6a0c  lfs 1, 852(3)
  01e6a10  li 4, 0
  01e6a14  stfs 1, 116(1)
  01e6a18  lfs 1, 856(3)
  01e6a1c  stfs 1, 120(1)
  01e6a20  lfs 1, 860(3)
  01e6a24  stw 4, 120(1)
  01e6a28  stw 4, 116(1)
  01e6a2c  fmr 3, 2
  01e6a30  stw 4, 112(1)
  01e6a34  fmr 4, 3
  01e6a38  b 0x1e6a64
  01e6a3c  fdivs 2, 2, 1
  01e6a40  lfs 3, 852(3)
  01e6a44  lfs 6, 856(3)
  01e6a48  lfs 1, 860(3)
  01e6a4c  fmuls 4, 4, 2
  01e6a50  fmuls 3, 3, 2
  01e6a54  fmuls 2, 6, 2
  01e6a58  stfs 4, 112(1)
  01e6a5c  stfs 3, 116(1)
  01e6a60  stfs 2, 120(1)
  01e6a64  stfs 1, 124(1)
  01e6a68  lfs 1, 884(3)
  01e6a6c  lfs 6, 880(3)
  01e6a70  fmuls 7, 1, 1
  01e6a74  lfs 8, 888(3)
  01e6a78  lis 4, 118
  01e6a7c  lis 3, 118
  01e6a80  lis 5, 30
  01e6a84  addi 29, 5, 26948
  01e6a88  lfs 9, 20652(3)
  01e6a8c  fmadds 7, 6, 6, 7
  01e6a90  lfs 10, 20704(4)
  01e6a94  fmuls 9, 9, 10
  01e6a98  lfs 10, 4(29)
  01e6a9c  fmadds 7, 8, 8, 7
  01e6aa0  fmuls 9, 9, 10
  01e6aa4  lfs 11, 0(31)
  01e6aa8  addic 28, 1, 128
  01e6aac  fsqrts 7, 7
  01e6ab0  lfs 12, 4(31)
  01e6ab4  lfs 13, 8(31)
  01e6ab8  ori 3, 30, 0
  01e6abc  ori 5, 28, 0
  01e6ac0  lbz 4, 49(31)
  01e6ac4  clrlwi 4, 4, 31
  01e6ac8  fdivs 9, 9, 7
  01e6acc  fsub 10, 5, 7
  01e6ad0  fsub 0, 5, 7
  01e6ad4  fsub 31, 5, 7
  01e6ad8  fsub 30, 7, 5
  01e6adc  fsub 29, 7, 5
  01e6ae0  fsub 7, 7, 5
  01e6ae4  fmuls 8, 8, 9
  01e6ae8  fmuls 1, 1, 9
  01e6aec  fmuls 6, 6, 9
  01e6af0  fsel 9, 10, 5, 8
  01e6af4  fsel 10, 0, 5, 1
  01e6af8  fsel 5, 31, 5, 6
  01e6afc  fsel 8, 30, 9, 8
  01e6b00  fsel 1, 29, 10, 1
  01e6b04  fsel 5, 7, 5, 6
  01e6b08  fadds 2, 2, 8
  01e6b0c  fadds 1, 3, 1
  01e6b10  fadds 3, 4, 5
  01e6b14  fadds 2, 2, 13
  01e6b18  fadds 1, 1, 12
  01e6b1c  fadds 3, 3, 11
  01e6b20  stfs 2, 120(1)
  01e6b24  stfs 1, 116(1)
  01e6b28  stfs 3, 112(1)
  01e6b2c  bl 0xf1114
  01e6b30  nop
  01e6b34  lfs 1, 8(29)
  01e6b38  addic 4, 1, 112
  01e6b3c  ori 3, 30, 0
  01e6b40  lfs 2, 12(29)
  01e6b44  ori 5, 28, 0
  01e6b48  bl 0x184670
  01e6b4c  nop
  01e6b50  lbz 3, 49(31)
  01e6b54  lis 4, 118
  01e6b58  xori 3, 3, 1
  01e6b5c  lwz 4, 20656(4)
  01e6b60  stb 3, 49(31)
  01e6b64  stw 4, 100(31)
  01e6b68  ld 0, 224(1)
  01e6b6c  mtlr 0
  01e6b70  lfd 29, 184(1)
  01e6b74  lfd 30, 192(1)
  01e6b78  lfd 31, 200(1)
  01e6b7c  ld 28, 152(1)
  01e6b80  ld 29, 160(1)
  01e6b84  ld 30, 168(1)
  01e6b88  ld 31, 176(1)
  01e6b8c  addi 1, 1, 208
  01e6b90  blr

M1160_UpdateGunsAndAimPos:   # 0x1e6ba8, 0x244 bytes
  01e6ba8  stdu 1, -224(1)
  01e6bac  mflr 0
  01e6bb0  std 0, 240(1)
  01e6bb4  stfd 31, 216(1)
  01e6bb8  std 31, 208(1)
  01e6bbc  ori 31, 4, 0
  01e6bc0  lis 4, 118
  01e6bc4  fmr 3, 2
  01e6bc8  lis 5, 118
  01e6bcc  std 30, 200(1)
  01e6bd0  fmr 2, 1
  01e6bd4  ori 30, 3, 0
  01e6bd8  addic 3, 1, 112
  01e6bdc  lfs 1, 20652(4)
  01e6be0  lfs 4, 20704(5)
  01e6be4  std 29, 192(1)
  01e6be8  fmuls 1, 1, 4
  01e6bec  bl 0xfe610
  01e6bf0  nop
  01e6bf4  lfs 1, 112(1)
  01e6bf8  lfs 2, 0(31)
  01e6bfc  addic 3, 31, 100
  01e6c00  lfs 3, 116(1)
  01e6c04  fadds 1, 1, 2
  01e6c08  lfs 2, 4(31)
  01e6c0c  lfs 4, 120(1)
  01e6c10  fadds 2, 3, 2
  01e6c14  lfs 3, 8(31)
  01e6c18  fadds 3, 4, 3
  01e6c1c  stfs 1, 112(1)
  01e6c20  stfs 2, 116(1)
  01e6c24  stfs 3, 120(1)
  01e6c28  bl 0x4fff60
  01e6c2c  nop
  01e6c30  cmpwi 3, 0
  01e6c34  bt 2, 0x1e6cac
  01e6c38  lis 3, 150
  01e6c3c  li 4, 132
  01e6c40  addic 3, 3, 19008
  01e6c44  lwz 3, 176(3)
  01e6c48  and 3, 3, 4
  01e6c4c  cmpwi 3, 0
  01e6c50  bt 2, 0x1e6cac
  01e6c54  addic 29, 1, 128
  01e6c58  lbz 4, 49(31)
  01e6c5c  ori 3, 30, 0
  01e6c60  ori 5, 29, 0
  01e6c64  clrlwi 4, 4, 31
  01e6c68  bl 0xf1114
  01e6c6c  nop
  01e6c70  lis 3, 30
  01e6c74  addic 4, 1, 112
  01e6c78  addi 6, 3, 27540
  01e6c7c  ori 3, 30, 0
  01e6c80  ori 5, 29, 0
  01e6c84  lfs 1, 0(6)
  01e6c88  lfs 2, 4(6)
  01e6c8c  bl 0x184670
  01e6c90  nop
  01e6c94  lis 3, 118
  01e6c98  lbz 4, 49(31)
  01e6c9c  xori 4, 4, 1
  01e6ca0  lwz 3, 20656(3)
  01e6ca4  stw 3, 100(31)
  01e6ca8  stb 4, 49(31)
  01e6cac  lfs 1, 116(1)
  01e6cb0  lfs 2, 112(1)
  01e6cb4  fmuls 3, 1, 1
  01e6cb8  lfs 4, 120(1)
  01e6cbc  lis 3, 30
  01e6cc0  addi 29, 3, 27540
  01e6cc4  fmadds 3, 2, 2, 3
  01e6cc8  lfs 5, 12(29)
  01e6ccc  lfs 6, 8(29)
  01e6cd0  lfs 7, 16(30)
  01e6cd4  lfs 8, 20(30)
  01e6cd8  fmadds 3, 4, 4, 3
  01e6cdc  lfs 9, 24(30)
  01e6ce0  lfs 10, 124(1)
  01e6ce4  addic 3, 1, 160
  01e6ce8  stfs 10, 156(1)
  01e6cec  addic 4, 1, 144
  01e6cf0  fsqrts 3, 3
  01e6cf4  fdivs 5, 5, 3
  01e6cf8  fsub 10, 6, 3
  01e6cfc  fsub 11, 6, 3
  01e6d00  fsub 12, 6, 3
  01e6d04  fsub 13, 3, 6
  01e6d08  fsub 0, 3, 6
  01e6d0c  fsub 3, 3, 6
  01e6d10  fmuls 2, 2, 5
  01e6d14  fmuls 1, 1, 5
  01e6d18  fmuls 4, 4, 5
  01e6d1c  fsel 5, 10, 6, 2
  01e6d20  fsel 10, 11, 6, 1
  01e6d24  fsel 6, 12, 6, 4
  01e6d28  fsel 2, 13, 5, 2
  01e6d2c  fsel 1, 0, 10, 1
  01e6d30  fsel 3, 3, 6, 4
  01e6d34  fadds 4, 2, 7
  01e6d38  fadds 5, 1, 8
  01e6d3c  fadds 6, 3, 9
  01e6d40  stfs 2, 112(1)
  01e6d44  stfs 1, 116(1)
  01e6d48  stfs 3, 120(1)
  01e6d4c  stfs 4, 144(1)
  01e6d50  stfs 5, 148(1)
  01e6d54  stfs 6, 152(1)
  01e6d58  bl 0x65490
  01e6d5c  nop
  01e6d60  lis 3, 150
  01e6d64  addic 30, 3, 27392
  01e6d68  lwz 3, 16(30)
  01e6d6c  extsw 3, 3
  01e6d70  std 3, 176(1)
  01e6d74  lfs 1, 160(1)
  01e6d78  lfs 31, 16(29)
  01e6d7c  lfd 2, 176(1)
  01e6d80  fcfid 2, 2
  01e6d84  frsp 2, 2
  01e6d88  fsubs 1, 1, 2
  01e6d8c  fmuls 1, 1, 31
  01e6d90  bl 0x502758
  01e6d94  nop
  01e6d98  stw 3, 224(31)
  01e6d9c  lwz 3, 20(30)
  01e6da0  extsw 3, 3
  01e6da4  std 3, 176(1)
  01e6da8  lfs 1, 164(1)
  01e6dac  lfd 2, 176(1)
  01e6db0  fcfid 2, 2
  01e6db4  frsp 2, 2
  01e6db8  fsubs 1, 1, 2
  01e6dbc  fmuls 1, 1, 31
  01e6dc0  bl 0x502758
  01e6dc4  nop
  01e6dc8  stw 3, 228(31)
  01e6dcc  ld 0, 240(1)
  01e6dd0  mtlr 0
  01e6dd4  lfd 31, 216(1)
  01e6dd8  ld 29, 192(1)
  01e6ddc  ld 30, 200(1)
  01e6de0  ld 31, 208(1)
  01e6de4  addi 1, 1, 224
  01e6de8  blr

M1160_UpdateMissiles:   # 0x1e6df8, 0x1ac bytes
  01e6df8  stdu 1, -192(1)
  01e6dfc  mflr 0
  01e6e00  std 0, 208(1)
  01e6e04  stfd 30, 176(1)
  01e6e08  stfd 31, 184(1)
  01e6e0c  std 31, 168(1)
  01e6e10  std 30, 160(1)
  01e6e14  ori 31, 4, 0
  01e6e18  ori 30, 3, 0
  01e6e1c  std 29, 152(1)
  01e6e20  std 28, 144(1)
  01e6e24  addic 3, 31, 104
  01e6e28  bl 0x4fff60
  01e6e2c  nop
  01e6e30  cmpwi 3, 0
  01e6e34  bt 2, 0x1e6f7c
  01e6e38  lis 3, 150
  01e6e3c  li 4, 40
  01e6e40  addic 3, 3, 19008
  01e6e44  lwz 3, 176(3)
  01e6e48  and 3, 3, 4
  01e6e4c  cmpwi 3, 0
  01e6e50  bt 2, 0x1e6f7c
  01e6e54  lis 29, 151
  01e6e58  addic 29, 29, -25376
  01e6e5c  lbz 3, 5622(29)
  01e6e60  cmpwi 3, 0
  01e6e64  bf 1, 0x1e6f7c
  01e6e68  addic 28, 1, 112
  01e6e6c  clrlwi 4, 3, 31
  01e6e70  ori 3, 30, 0
  01e6e74  ori 5, 28, 0
  01e6e78  bl 0xf1114
  01e6e7c  nop
  01e6e80  lfs 2, 4(31)
  01e6e84  lfs 3, 0(31)
  01e6e88  fmuls 1, 2, 2
  01e6e8c  lfs 4, 8(31)
  01e6e90  lis 3, 30
  01e6e94  addi 7, 3, 28140
  01e6e98  lis 3, 114
  01e6e9c  fmadds 1, 3, 3, 1
  01e6ea0  lfs 10, 4(7)
  01e6ea4  lis 4, 118
  01e6ea8  lfs 6, 0(7)
  01e6eac  lfs 7, 112(1)
  01e6eb0  lfs 8, 116(1)
  01e6eb4  lfs 9, 120(1)
  01e6eb8  fmadds 1, 4, 4, 1
  01e6ebc  lfs 11, -3056(3)
  01e6ec0  lis 3, 118
  01e6ec4  lwz 5, 236(31)
  01e6ec8  addic 6, 30, 64
  01e6ecc  fsqrts 5, 1
  01e6ed0  lfs 1, 20660(3)
  01e6ed4  lfs 12, 20704(4)
  01e6ed8  ori 3, 30, 0
  01e6edc  ori 4, 28, 0
  01e6ee0  fmuls 1, 1, 12
  01e6ee4  fdivs 10, 10, 5
  01e6ee8  fsub 12, 6, 5
  01e6eec  fsub 13, 6, 5
  01e6ef0  fsub 0, 6, 5
  01e6ef4  fsub 31, 5, 6
  01e6ef8  fsub 30, 5, 6
  01e6efc  fsub 5, 5, 6
  01e6f00  fmuls 4, 4, 10
  01e6f04  fmuls 2, 2, 10
  01e6f08  fmuls 3, 3, 10
  01e6f0c  fsel 10, 12, 6, 4
  01e6f10  fsel 12, 13, 6, 2
  01e6f14  fsel 6, 0, 6, 3
  01e6f18  fsel 4, 31, 10, 4
  01e6f1c  fsel 2, 30, 12, 2
  01e6f20  fsel 3, 5, 6, 3
  01e6f24  fadds 4, 9, 4
  01e6f28  fadds 2, 8, 2
  01e6f2c  fadds 3, 7, 3
  01e6f30  stfs 4, 120(1)
  01e6f34  stfs 2, 116(1)
  01e6f38  stfs 3, 112(1)
  01e6f3c  lfs 2, 8(7)
  01e6f40  fmuls 2, 11, 2
  01e6f44  fctiwz 2, 2
  01e6f48  stfd 2, 128(1)
  01e6f4c  lwz 8, 132(1)
  01e6f50  extsw 8, 8
  01e6f54  bl 0x192330
  01e6f58  nop
  01e6f5c  cmpwi 3, 0
  01e6f60  bt 2, 0x1e6f7c
  01e6f64  lis 3, 118
  01e6f68  lbz 4, 5622(29)
  01e6f6c  addic 4, 4, -1
  01e6f70  lwz 3, 20664(3)
  01e6f74  stb 4, 5622(29)
  01e6f78  stw 3, 104(31)
  01e6f7c  ld 0, 208(1)
  01e6f80  mtlr 0
  01e6f84  lfd 30, 176(1)
  01e6f88  lfd 31, 184(1)
  01e6f8c  ld 28, 144(1)
  01e6f90  ld 29, 152(1)
  01e6f94  ld 30, 160(1)
  01e6f98  ld 31, 168(1)
  01e6f9c  addi 1, 1, 192
  01e6fa0  blr

M1160_BlendByDist:   # 0x1e6fb8, 0x98 bytes
  01e6fb8  lis 4, 118
  01e6fbc  lfs 3, 20(3)
  01e6fc0  lfs 4, 16(3)
  01e6fc4  addic 5, 4, 23184
  01e6fc8  lfs 5, 4(5)
  01e6fcc  lfs 6, 23184(4)
  01e6fd0  fsubs 3, 3, 5
  01e6fd4  fsubs 4, 4, 6
  01e6fd8  lfs 5, 24(3)
  01e6fdc  lfs 6, 8(5)
  01e6fe0  fsubs 5, 5, 6
  01e6fe4  lis 3, 30
  01e6fe8  fmuls 3, 3, 3
  01e6fec  addi 3, 3, 28580
  01e6ff0  fmadds 3, 4, 4, 3
  01e6ff4  fmr 4, 1
  01e6ff8  fmadds 5, 5, 5, 3
  01e6ffc  lfs 3, 0(3)
  01e7000  fsqrts 5, 5
  01e7004  fcmpu 0, 5, 3
  01e7008  cror 6, 0, 2
  01e700c  bt 6, 0x1e7048
  01e7010  fsubs 3, 5, 3
  01e7014  lis 3, 30
  01e7018  addi 3, 3, 28580
  01e701c  lfs 4, 4(3)
  01e7020  lfs 5, 8(3)
  01e7024  lfs 6, 12(3)
  01e7028  fmuls 3, 3, 4
  01e702c  fsub 4, 3, 5
  01e7030  fsel 3, 4, 3, 5
  01e7034  fsub 4, 6, 3
  01e7038  fsel 3, 4, 3, 6
  01e703c  fsubs 4, 6, 3
  01e7040  fmuls 2, 3, 2
  01e7044  fmadds 4, 4, 1, 2
  01e7048  fmr 1, 4
  01e704c  blr

M1160_UpdateFlight:   # 0x1e70a8, 0xf2c bytes
  01e70a8  stdu 1, -528(1)
  01e70ac  mflr 0
  01e70b0  std 0, 544(1)
  01e70b4  stfd 26, 480(1)
  01e70b8  stfd 27, 488(1)
  01e70bc  stfd 28, 496(1)
  01e70c0  stfd 29, 504(1)
  01e70c4  stfd 30, 512(1)
  01e70c8  stfd 31, 520(1)
  01e70cc  lis 5, 30
  01e70d0  li 6, 0
  01e70d4  addi 5, 5, 28752
  01e70d8  std 30, 464(1)
  01e70dc  lis 7, 114
  01e70e0  ori 30, 4, 0
  01e70e4  std 31, 472(1)
  01e70e8  lis 4, 118
  01e70ec  ori 31, 3, 0
  01e70f0  std 29, 456(1)
  01e70f4  lfs 31, 0(5)
  01e70f8  lis 29, 150
  01e70fc  stw 6, 192(1)
  01e7100  stw 6, 196(1)
  01e7104  stw 6, 200(1)
  01e7108  addic 29, 29, 19008
  01e710c  stw 6, 204(1)
  01e7110  lfs 30, 4(5)
  01e7114  lfs 1, -3052(7)
  01e7118  lwz 3, 68(30)
  01e711c  fmuls 1, 1, 30
  01e7120  lfs 2, 20704(4)
  01e7124  addic 3, 3, 1
  01e7128  lhz 5, 52(31)
  01e712c  rlwimi 5, 6, 0, 23, 23
  01e7130  stw 3, 68(30)
  01e7134  lwz 6, 180(29)
  01e7138  sth 5, 52(31)
  01e713c  rlwinm 6, 6, 0, 16, 16
  01e7140  fmuls 3, 1, 2
  01e7144  lfs 1, 56(30)
  01e7148  cmpwi 6, 0
  01e714c  lwz 5, 176(29)
  01e7150  lfs 2, 8(29)
  01e7154  lfs 28, 12(29)
  01e7158  lwz 6, 160(29)
  01e715c  lfs 29, 216(30)
  01e7160  std 28, 448(1)
  01e7164  std 27, 440(1)
  01e7168  std 26, 432(1)
  01e716c  std 25, 424(1)
  01e7170  std 24, 416(1)
  01e7174  stfs 3, 200(1)
  01e7178  bt 2, 0x1e719c
  01e717c  lbz 7, 48(30)
  01e7180  addic 7, 7, 1
  01e7184  clrlwi 8, 7, 24
  01e7188  cmpwi 8, 2
  01e718c  stb 7, 48(30)
  01e7190  bt 0, 0x1e719c
  01e7194  li 7, 0
  01e7198  stb 7, 48(30)
  01e719c  lis 7, 118
  01e71a0  lwz 7, 20544(7)
  01e71a4  cmpw 3, 7
  01e71a8  bf 1, 0x1e7250
  01e71ac  rlwinm 5, 5, 0, 25, 25
  01e71b0  cmpwi 5, 0
  01e71b4  bt 2, 0x1e71f4
  01e71b8  lis 5, 118
  01e71bc  lis 7, 118
  01e71c0  lfs 3, 20556(5)
  01e71c4  lfs 4, 20704(4)
  01e71c8  fmadds 1, 3, 4, 1
  01e71cc  stfs 1, 56(30)
  01e71d0  lfs 3, 20552(7)
  01e71d4  lfs 4, 20704(4)
  01e71d8  fmuls 3, 3, 4
  01e71dc  fcmpu 0, 1, 3
  01e71e0  cror 6, 0, 2
  01e71e4  bt 6, 0x1e7264
  01e71e8  fmr 1, 3
  01e71ec  stfs 3, 56(30)
  01e71f0  b 0x1e7264
  01e71f4  lis 5, 118
  01e71f8  lfs 4, 20704(4)
  01e71fc  lis 7, 118
  01e7200  lfs 3, 20540(5)
  01e7204  lfs 5, 20548(7)
  01e7208  fmuls 6, 3, 4
  01e720c  fmsubs 6, 5, 4, 6
  01e7210  fcmpu 0, 1, 6
  01e7214  cror 6, 1, 2
  01e7218  bt 6, 0x1e7224
  01e721c  fmadds 1, 3, 4, 1
  01e7220  b 0x1e7248
  01e7224  fmuls 3, 5, 4
  01e7228  fcmpu 0, 1, 3
  01e722c  cror 6, 0, 2
  01e7230  bt 6, 0x1e7244
  01e7234  fmsubs 3, 5, 4, 1
  01e7238  lis 4, 118
  01e723c  lfs 4, 20560(4)
  01e7240  fmadds 3, 3, 4, 1
  01e7244  fmr 1, 3
  01e7248  stfs 1, 56(30)
  01e724c  b 0x1e7264
  01e7250  lis 5, 118
  01e7254  lfs 3, 20536(5)
  01e7258  lfs 4, 20704(4)
  01e725c  fmadds 1, 3, 4, 1
  01e7260  stfs 1, 56(30)
  01e7264  lis 4, 118
  01e7268  lwz 4, 20564(4)
  01e726c  cmpw 3, 4
  01e7270  bf 1, 0x1e73a4
  01e7274  lis 3, 118
  01e7278  lis 4, 118
  01e727c  rlwinm 5, 6, 0, 22, 22
  01e7280  cmpwi 5, 0
  01e7284  lfs 1, 20724(3)
  01e7288  lfs 29, 20740(4)
  01e728c  bt 2, 0x1e72d0
  01e7290  lis 3, 118
  01e7294  lis 4, 118
  01e7298  lis 6, 118
  01e729c  lfs 1, 20584(3)
  01e72a0  lfs 3, 20580(4)
  01e72a4  fdivs 2, 2, 1
  01e72a8  lis 3, 118
  01e72ac  lis 4, 118
  01e72b0  lis 5, 118
  01e72b4  lfs 1, 20728(3)
  01e72b8  lfs 29, 20744(4)
  01e72bc  fdivs 28, 28, 3
  01e72c0  lfs 3, 20592(6)
  01e72c4  lfs 4, 20588(5)
  01e72c8  fmuls 2, 3, 2
  01e72cc  fmuls 28, 4, 28
  01e72d0  lis 4, 118
  01e72d4  fmr 4, 1
  01e72d8  lis 6, 118
  01e72dc  fmr 1, 2
  01e72e0  addic 3, 30, 76
  01e72e4  addic 5, 30, 124
  01e72e8  lfs 2, 20716(4)
  01e72ec  lfs 3, 20720(6)
  01e72f0  bl 0x109b40
  01e72f4  nop
  01e72f8  lis 4, 118
  01e72fc  fmr 1, 28
  01e7300  lis 6, 118
  01e7304  fmr 4, 29
  01e7308  addic 3, 30, 80
  01e730c  addic 5, 30, 128
  01e7310  lfs 2, 20732(4)
  01e7314  lfs 3, 20736(6)
  01e7318  bl 0x109b40
  01e731c  nop
  01e7320  lis 3, 118
  01e7324  lfs 1, 76(30)
  01e7328  lis 4, 118
  01e732c  lis 6, 118
  01e7330  lis 7, 118
  01e7334  addic 5, 30, 132
  01e7338  lfs 2, 20684(3)
  01e733c  li 9, 0
  01e7340  lfs 4, 20756(4)
  01e7344  addic 3, 30, 208
  01e7348  fmuls 1, 1, 2
  01e734c  lfs 2, 20748(6)
  01e7350  lfs 3, 20752(7)
  01e7354  bl 0x10a050
  01e7358  nop
  01e735c  lis 3, 118
  01e7360  lfs 1, 212(30)
  01e7364  lfs 2, 80(30)
  01e7368  lfs 3, 20580(3)
  01e736c  fmuls 2, 2, 3
  01e7370  bl 0x5025e0
  01e7374  nop
  01e7378  lis 3, 118
  01e737c  stfs 1, 212(30)
  01e7380  lfs 1, 216(30)
  01e7384  lfs 2, 76(30)
  01e7388  lfs 3, 20584(3)
  01e738c  fmuls 2, 2, 3
  01e7390  bl 0x5025e0
  01e7394  nop
  01e7398  fmr 29, 1
  01e739c  lfs 1, 56(30)
  01e73a0  stfs 29, 216(30)
  01e73a4  lfs 3, 212(30)
  01e73a8  addic 3, 1, 208
  01e73ac  fmr 2, 29
  01e73b0  fneg 3, 3
  01e73b4  bl 0xfe610
  01e73b8  nop
  01e73bc  lfs 6, 212(1)
  01e73c0  lfs 29, 208(1)
  01e73c4  fmuls 1, 6, 6
  01e73c8  lfs 7, 216(1)
  01e73cc  lfs 8, 56(30)
  01e73d0  lfs 9, 80(30)
  01e73d4  lfs 10, 76(30)
  01e73d8  lfs 28, 16(31)
  01e73dc  lfs 27, 20(31)
  01e73e0  fmadds 11, 29, 29, 1
  01e73e4  lfs 26, 24(31)
  01e73e8  lbz 3, 48(30)
  01e73ec  fmadds 11, 7, 7, 11
  01e73f0  fsqrts 1, 11
  01e73f4  fcmpu 0, 1, 31
  01e73f8  bf 2, 0x1e7410
  01e73fc  fmr 12, 31
  01e7400  lfs 11, 220(1)
  01e7404  fmr 13, 12
  01e7408  fmr 0, 13
  01e740c  b 0x1e7468
  01e7410  frsqrte 1, 11
  01e7414  lis 4, 30
  01e7418  addi 4, 4, 28752
  01e741c  lfs 2, 8(4)
  01e7420  lfs 3, 12(4)
  01e7424  fmuls 4, 11, 1
  01e7428  fmuls 5, 2, 1
  01e742c  fnmsubs 4, 4, 1, 3
  01e7430  fmadds 1, 4, 5, 1
  01e7434  lfs 4, 220(1)
  01e7438  fmuls 5, 11, 1
  01e743c  fmuls 12, 2, 1
  01e7440  fnmsubs 5, 5, 1, 3
  01e7444  fmadds 1, 5, 12, 1
  01e7448  fmuls 5, 11, 1
  01e744c  fmuls 2, 2, 1
  01e7450  fmr 11, 4
  01e7454  fnmsubs 3, 5, 1, 3
  01e7458  fmadds 12, 3, 2, 1
  01e745c  fmuls 0, 29, 12
  01e7460  fmuls 13, 6, 12
  01e7464  fmuls 12, 7, 12
  01e7468  fadds 1, 28, 29
  01e746c  stfs 0, 16(30)
  01e7470  fadds 2, 27, 6
  01e7474  stfs 13, 20(30)
  01e7478  fadds 3, 26, 7
  01e747c  lis 4, 118
  01e7480  stfs 12, 24(30)
  01e7484  stfs 11, 28(30)
  01e7488  li 5, 0
  01e748c  lis 6, 118
  01e7490  lis 8, 118
  01e7494  lis 7, 118
  01e7498  stfs 1, 16(31)
  01e749c  stfs 2, 20(31)
  01e74a0  stfs 3, 24(31)
  01e74a4  lfs 1, 20548(4)
  01e74a8  lis 4, 118
  01e74ac  fsubs 2, 8, 1
  01e74b0  lfs 3, 20552(4)
  01e74b4  fsubs 1, 3, 1
  01e74b8  fsub 3, 2, 31
  01e74bc  lis 4, 118
  01e74c0  stw 5, 268(1)
  01e74c4  lis 9, 118
  01e74c8  stw 5, 276(1)
  01e74cc  lis 10, 118
  01e74d0  stw 5, 284(1)
  01e74d4  lis 11, 118
  01e74d8  lis 28, 118
  01e74dc  lis 12, 118
  01e74e0  lis 27, 118
  01e74e4  fsel 2, 3, 2, 31
  01e74e8  rlwinm 3, 3, 4, 20, 27
  01e74ec  lis 25, 118
  01e74f0  addc 3, 1, 3
  01e74f4  lis 24, 118
  01e74f8  clrldi 26, 3, 32
  01e74fc  addic 3, 30, 164
  01e7500  fdivs 29, 2, 1
  01e7504  addic 5, 30, 184
  01e7508  stfs 29, 180(30)
  01e750c  lfs 1, 20856(4)
  01e7510  lfs 2, 20596(6)
  01e7514  fnmsubs 1, 9, 1, 2
  01e7518  lfs 2, 20864(8)
  01e751c  lfs 3, 20688(7)
  01e7520  lfs 4, 20860(9)
  01e7524  lfs 5, 20600(10)
  01e7528  fmuls 3, 10, 3
  01e752c  lfs 6, 20700(11)
  01e7530  fmadds 4, 9, 4, 5
  01e7534  lfs 5, 20604(28)
  01e7538  fnmsubs 1, 2, 29, 1
  01e753c  fmuls 2, 5, 6
  01e7540  lfs 5, 20608(12)
  01e7544  fmuls 5, 5, 6
  01e7548  fmuls 3, 3, 6
  01e754c  fmuls 4, 4, 6
  01e7550  fmuls 1, 1, 6
  01e7554  lfs 6, 20820(27)
  01e7558  stfs 2, 272(1)
  01e755c  fmr 2, 6
  01e7560  stfs 3, 260(1)
  01e7564  stfs 4, 264(1)
  01e7568  stfs 5, 280(1)
  01e756c  stfs 1, 256(1)
  01e7570  lfs 1, 256(26)
  01e7574  lfs 3, 20824(25)
  01e7578  lfs 4, 20828(24)
  01e757c  bl 0x109b40
  01e7580  nop
  01e7584  lbz 3, 48(30)
  01e7588  lis 4, 118
  01e758c  slwi 3, 3, 4
  01e7590  lis 7, 118
  01e7594  addc 3, 1, 3
  01e7598  lis 8, 118
  01e759c  clrldi 6, 3, 32
  01e75a0  lfs 2, 20832(4)
  01e75a4  addic 3, 30, 168
  01e75a8  addic 5, 30, 188
  01e75ac  lfs 1, 260(6)
  01e75b0  lfs 3, 20836(7)
  01e75b4  lfs 4, 20840(8)
  01e75b8  bl 0x109b40
  01e75bc  nop
  01e75c0  lbz 3, 48(30)
  01e75c4  lis 4, 118
  01e75c8  lis 6, 118
  01e75cc  slwi 3, 3, 4
  01e75d0  addic 5, 30, 192
  01e75d4  addc 3, 1, 3
  01e75d8  lfs 2, 20844(4)
  01e75dc  clrldi 7, 3, 32
  01e75e0  lis 4, 118
  01e75e4  lfs 3, 20848(6)
  01e75e8  addic 3, 30, 172
  01e75ec  lfs 1, 264(7)
  01e75f0  lfs 4, 20852(4)
  01e75f4  bl 0x109b40
  01e75f8  nop
  01e75fc  lfs 28, 164(30)
  01e7600  addic 3, 1, 288
  01e7604  lfs 27, 168(30)
  01e7608  addic 4, 30, 208
  01e760c  lfs 26, 172(30)
  01e7610  bl 0x500b64
  01e7614  nop
  01e7618  lis 3, 30
  01e761c  lfs 1, 196(30)
  01e7620  lfs 2, 304(1)
  01e7624  lis 4, 118
  01e7628  addi 28, 3, 28752
  01e762c  lis 3, 150
  01e7630  fmuls 2, 2, 27
  01e7634  lfs 3, 16(28)
  01e7638  lfs 4, 19008(3)
  01e763c  lfs 5, 308(1)
  01e7640  fmsubs 4, 4, 3, 1
  01e7644  lfs 6, 20668(4)
  01e7648  lfs 7, 312(1)
  01e764c  fmuls 5, 5, 27
  01e7650  lfs 8, 288(1)
  01e7654  lis 4, 118
  01e7658  fmuls 7, 7, 27
  01e765c  lfs 9, 292(1)
  01e7660  lfs 10, 296(1)
  01e7664  fmadds 2, 8, 28, 2
  01e7668  lfs 8, 320(1)
  01e766c  addic 3, 1, 240
  01e7670  fmadds 1, 4, 6, 1
  01e7674  fmadds 5, 9, 28, 5
  01e7678  lfs 9, 200(30)
  01e767c  fmadds 7, 10, 28, 7
  01e7680  lfs 10, 324(1)
  01e7684  fmadds 2, 8, 26, 2
  01e7688  lfs 11, 328(1)
  01e768c  fmadds 4, 10, 26, 5
  01e7690  stfs 1, 196(30)
  01e7694  lfs 1, 4(29)
  01e7698  fmadds 5, 11, 26, 7
  01e769c  fmsubs 1, 1, 3, 9
  01e76a0  lfs 3, 20672(4)
  01e76a4  fmadds 1, 1, 3, 9
  01e76a8  stfs 1, 200(30)
  01e76ac  lfs 1, 16(31)
  01e76b0  lfs 3, 20(31)
  01e76b4  fadds 1, 1, 2
  01e76b8  lfs 2, 24(31)
  01e76bc  fadds 3, 3, 4
  01e76c0  lfs 4, 28(31)
  01e76c4  fadds 2, 2, 5
  01e76c8  stfs 4, 252(1)
  01e76cc  stfs 1, 240(1)
  01e76d0  stfs 3, 244(1)
  01e76d4  stfs 2, 248(1)
  01e76d8  bl 0x47b98
  01e76dc  nop
  01e76e0  lis 3, 118
  01e76e4  lfs 1, 208(30)
  01e76e8  lfs 2, 76(30)
  01e76ec  lis 4, 118
  01e76f0  lfs 3, 20616(3)
  01e76f4  lfs 4, 20612(4)
  01e76f8  fmuls 1, 1, 3
  01e76fc  fmuls 2, 2, 4
  01e7700  bl 0x502578
  01e7704  nop
  01e7708  lis 3, 118
  01e770c  fmr 28, 1
  01e7710  lfs 1, 212(30)
  01e7714  lfs 2, 20620(3)
  01e7718  bl 0x502578
  01e771c  nop
  01e7720  lis 3, 118
  01e7724  lfs 2, 80(30)
  01e7728  lfs 3, 20580(3)
  01e772c  fmuls 2, 2, 3
  01e7730  bl 0x5025e0
  01e7734  nop
  01e7738  lis 4, 118
  01e773c  fmr 27, 1
  01e7740  lis 6, 118
  01e7744  lfs 26, 216(30)
  01e7748  lis 7, 118
  01e774c  fmr 1, 28
  01e7750  addic 3, 30, 32
  01e7754  addic 5, 30, 140
  01e7758  lfs 2, 20784(4)
  01e775c  li 9, 0
  01e7760  lfs 3, 20788(6)
  01e7764  lfs 4, 20792(7)
  01e7768  bl 0x10a050
  01e776c  nop
  01e7770  lis 4, 118
  01e7774  fmr 1, 27
  01e7778  lis 6, 118
  01e777c  lis 7, 118
  01e7780  addic 3, 30, 36
  01e7784  addic 5, 30, 144
  01e7788  lfs 2, 20796(4)
  01e778c  li 9, 0
  01e7790  lfs 3, 20800(6)
  01e7794  lfs 4, 20804(7)
  01e7798  bl 0x10a050
  01e779c  nop
  01e77a0  lis 4, 118
  01e77a4  fmr 1, 26
  01e77a8  lis 6, 118
  01e77ac  lis 7, 118
  01e77b0  addic 3, 30, 40
  01e77b4  addic 5, 30, 148
  01e77b8  lfs 2, 20808(4)
  01e77bc  li 9, 0
  01e77c0  lfs 3, 20812(6)
  01e77c4  lfs 4, 20816(7)
  01e77c8  bl 0x10a050
  01e77cc  nop
  01e77d0  lfs 1, 32(30)
  01e77d4  lfs 2, 40(30)
  01e77d8  lfs 3, 196(30)
  01e77dc  stfs 1, 224(1)
  01e77e0  fmr 1, 2
  01e77e4  fmr 2, 3
  01e77e8  bl 0x5025e0
  01e77ec  nop
  01e77f0  lfs 2, 36(30)
  01e77f4  stfs 1, 232(1)
  01e77f8  fmr 1, 2
  01e77fc  lfs 3, 200(30)
  01e7800  fmr 2, 3
  01e7804  bl 0x5025e0
  01e7808  nop
  01e780c  addic 3, 1, 224
  01e7810  stfs 1, 228(1)
  01e7814  bl 0x47c08
  01e7818  nop
  01e781c  lis 3, 118
  01e7820  lis 4, 118
  01e7824  lis 5, 118
  01e7828  lis 6, 118
  01e782c  lfs 1, 20872(3)
  01e7830  lfs 5, 20868(4)
  01e7834  addic 3, 30, 156
  01e7838  lis 4, 118
  01e783c  lfs 2, 20876(5)
  01e7840  fsubs 1, 1, 5
  01e7844  lfs 3, 20880(6)
  01e7848  addic 5, 30, 176
  01e784c  lfs 4, 20884(4)
  01e7850  fmadds 1, 1, 29, 5
  01e7854  bl 0x109b40
  01e7858  nop
  01e785c  lfs 1, 8(28)
  01e7860  lfs 2, 156(30)
  01e7864  lfs 3, 20(28)
  01e7868  fmuls 1, 2, 1
  01e786c  lfs 4, 44(28)
  01e7870  lfs 2, 24(28)
  01e7874  lis 3, 150
  01e7878  addic 3, 3, -12416
  01e787c  fsubs 5, 3, 1
  01e7880  fadds 4, 1, 4
  01e7884  fsubs 6, 2, 1
  01e7888  fsub 7, 1, 5
  01e788c  fsubs 3, 3, 4
  01e7890  fsubs 2, 2, 4
  01e7894  fsel 1, 7, 5, 1
  01e7898  fsub 5, 4, 3
  01e789c  lfs 7, 28(28)
  01e78a0  fsub 9, 6, 1
  01e78a4  fsel 3, 5, 3, 4
  01e78a8  lfs 4, 32(28)
  01e78ac  lfs 5, 36(28)
  01e78b0  fsel 1, 9, 6, 1
  01e78b4  fsub 6, 2, 3
  01e78b8  fmuls 9, 1, 1
  01e78bc  fsel 2, 6, 2, 3
  01e78c0  lfs 3, 40(28)
  01e78c4  fmuls 6, 9, 1
  01e78c8  fmuls 8, 2, 2
  01e78cc  fmuls 10, 9, 6
  01e78d0  fmadds 1, 6, 7, 1
  01e78d4  fmuls 6, 8, 2
  01e78d8  fmuls 11, 9, 10
  01e78dc  fmadds 1, 10, 4, 1
  01e78e0  fmuls 10, 8, 6
  01e78e4  fmadds 2, 6, 7, 2
  01e78e8  fmuls 6, 9, 11
  01e78ec  fmadds 1, 11, 5, 1
  01e78f0  fmuls 7, 8, 10
  01e78f4  fmadds 2, 10, 4, 2
  01e78f8  fmadds 1, 6, 3, 1
  01e78fc  fmuls 4, 8, 7
  01e7900  fmadds 2, 7, 5, 2
  01e7904  fmadds 2, 4, 3, 2
  01e7908  fdivs 1, 1, 2
  01e790c  stfs 1, 176(3)
  01e7910  bl 0x668d0
  01e7914  nop
  01e7918  lis 3, 118
  01e791c  lfs 1, 208(30)
  01e7920  lfs 2, 76(30)
  01e7924  lfs 3, 20896(3)
  01e7928  fmuls 2, 2, 3
  01e792c  bl 0x502578
  01e7930  nop
  01e7934  lis 3, 118
  01e7938  stfs 1, 64(31)
  01e793c  lfs 2, 80(30)
  01e7940  lfs 1, 212(30)
  01e7944  lfs 3, 20900(3)
  01e7948  fmuls 2, 2, 3
  01e794c  fneg 2, 2
  01e7950  bl 0x502578
  01e7954  nop
  01e7958  lis 3, 241
  01e795c  stfs 1, 68(31)
  01e7960  lfs 2, 76(30)
  01e7964  lfs 1, 216(30)
  01e7968  lfs 3, -30208(3)
  01e796c  fmuls 2, 2, 3
  01e7970  fneg 2, 2
  01e7974  bl 0x502578
  01e7978  nop
  01e797c  stfs 1, 72(31)
  01e7980  lfs 29, 48(28)
  01e7984  addic 3, 31, 16
  01e7988  li 5, 0
  01e798c  ori 6, 31, 0
  01e7990  fmr 1, 29
  01e7994  bl 0x59e20
  01e7998  nop
  01e799c  cmpwi 3, 0
  01e79a0  bt 2, 0x1e7ef4
  01e79a4  lis 29, 161
  01e79a8  addic 29, 29, 2368
  01e79ac  lwz 3, 24(29)
  01e79b0  cmpwi 3, 0
  01e79b4  bt 2, 0x1e79dc
  01e79b8  lhz 3, 166(3)
  01e79bc  cmpwi 7, 3, 402
  01e79c0  cmpwi 3, 0
  01e79c4  cror 2, 2, 30
  01e79c8  cmpwi 1, 3, 1219
  01e79cc  cmpwi 6, 3, 1218
  01e79d0  bt 2, 0x1e7ef4
  01e79d4  bt 26, 0x1e7ef4
  01e79d8  bt 6, 0x1e7ef4
  01e79dc  lfs 1, 48(29)
  01e79e0  addic 3, 1, 208
  01e79e4  stfs 1, 16(31)
  01e79e8  lfs 1, 52(29)
  01e79ec  ori 4, 3, 0
  01e79f0  stfs 1, 20(31)
  01e79f4  lfs 1, 56(29)
  01e79f8  stfs 1, 24(31)
  01e79fc  lfs 1, 60(29)
  01e7a00  addic 29, 29, 64
  01e7a04  stfs 1, 28(31)
  01e7a08  ori 5, 29, 0
  01e7a0c  bl 0x500608
  01e7a10  nop
  01e7a14  lwz 3, 208(1)
  01e7a18  lwz 4, 212(1)
  01e7a1c  lis 5, 30
  01e7a20  lfs 1, 208(1)
  01e7a24  lfs 2, 212(1)
  01e7a28  fabs 3, 1
  01e7a2c  addi 5, 5, 28752
  01e7a30  fabs 5, 2
  01e7a34  lfs 28, 216(30)
  01e7a38  rlwinm 4, 4, 3, 29, 29
  01e7a3c  lis 28, 115
  01e7a40  addic 28, 28, 22784
  01e7a44  fsubs 1, 3, 5
  01e7a48  stfs 1, 344(1)
  01e7a4c  lfs 27, 52(5)
  01e7a50  lwz 5, 344(1)
  01e7a54  lfs 1, 344(1)
  01e7a58  rlwimi 4, 5, 2, 30, 30
  01e7a5c  fsub 4, 1, 31
  01e7a60  fsub 6, 1, 31
  01e7a64  rlwimi 4, 3, 4, 28, 28
  01e7a68  ori 3, 28, 0
  01e7a6c  rlwimi 3, 4, 2, 26, 28
  01e7a70  slwi 4, 4, 2
  01e7a74  clrldi 3, 3, 32
  01e7a78  fsel 4, 4, 3, 5
  01e7a7c  lfsx 1, 28, 4
  01e7a80  lfs 2, 4(3)
  01e7a84  fsel 3, 6, 5, 3
  01e7a88  fcmpu 0, 4, 31
  01e7a8c  bt 1, 0x1e7a98
  01e7a90  fmr 1, 31
  01e7a94  b 0x1e7bb0
  01e7a98  fsubs 5, 3, 4
  01e7a9c  fadds 3, 3, 4
  01e7aa0  addic 3, 1, 16
  01e7aa4  li 6, 2
  01e7aa8  addic 4, 3, 364
  01e7aac  addic 5, 3, 380
  01e7ab0  mtctr 6
  01e7ab4  fdivs 3, 5, 3
  01e7ab8  fmuls 4, 3, 3
  01e7abc  stfs 3, 392(1)
  01e7ac0  stfs 3, 384(1)
  01e7ac4  stfs 3, 388(1)
  01e7ac8  stfs 3, 380(1)
  01e7acc  lfs 6, 392(1)
  01e7ad0  lfs 7, 384(1)
  01e7ad4  lfs 8, 388(1)
  01e7ad8  fmuls 5, 4, 4
  01e7adc  fmuls 7, 7, 4
  01e7ae0  fmuls 6, 6, 5
  01e7ae4  fmuls 3, 5, 5
  01e7ae8  fmuls 5, 8, 5
  01e7aec  stfs 7, 384(1)
  01e7af0  fmuls 4, 6, 4
  01e7af4  stfs 5, 388(1)
  01e7af8  stfs 4, 392(1)
  01e7afc  lfs 4, 364(3)
  01e7b00  fmuls 4, 4, 3
  01e7b04  stfs 4, 380(3)
  01e7b08  lfs 4, 4(4)
  01e7b0c  addic 3, 3, 8
  01e7b10  addic 4, 4, 8
  01e7b14  fmuls 4, 4, 3
  01e7b18  stfs 4, 4(5)
  01e7b1c  addic 5, 5, 8
  01e7b20  bdnz 0x1e7afc
  01e7b24  li 5, 4
  01e7b28  ori 3, 1, 0
  01e7b2c  mtctr 5
  01e7b30  lis 4, 115
  01e7b34  addic 5, 3, 380
  01e7b38  addic 4, 4, 22752
  01e7b3c  ori 7, 5, 0
  01e7b40  lfs 3, 380(3)
  01e7b44  lfs 4, 0(4)
  01e7b48  fmuls 3, 3, 4
  01e7b4c  lfs 4, 4(4)
  01e7b50  addic 4, 4, 8
  01e7b54  stfs 3, 380(3)
  01e7b58  lfs 3, 4(5)
  01e7b5c  addic 3, 3, 8
  01e7b60  fmuls 3, 3, 4
  01e7b64  stfs 3, 4(5)
  01e7b68  addic 5, 5, 8
  01e7b6c  bdnz 0x1e7b40
  01e7b70  fmr 3, 31
  01e7b74  ori 3, 1, 0
  01e7b78  mtctr 6
  01e7b7c  lfs 4, 380(3)
  01e7b80  fadds 3, 3, 4
  01e7b84  addic 3, 3, 16
  01e7b88  lfs 4, 4(7)
  01e7b8c  lfs 5, 8(7)
  01e7b90  lfs 6, 12(7)
  01e7b94  addic 7, 7, 16
  01e7b98  fadds 3, 3, 4
  01e7b9c  fadds 3, 3, 5
  01e7ba0  fadds 3, 3, 6
  01e7ba4  bdnz 0x1e7b7c
  01e7ba8  fadds 3, 3, 27
  01e7bac  fmadds 1, 3, 1, 2
  01e7bb0  fmr 2, 28
  01e7bb4  bl 0x5025e0
  01e7bb8  nop
  01e7bbc  lis 3, 118
  01e7bc0  lfs 2, 20568(3)
  01e7bc4  fmuls 2, 1, 2
  01e7bc8  fmr 1, 28
  01e7bcc  bl 0x502578
  01e7bd0  nop
  01e7bd4  lfs 2, 212(1)
  01e7bd8  lfs 3, 208(1)
  01e7bdc  fmuls 2, 2, 2
  01e7be0  stfs 1, 216(30)
  01e7be4  lfs 28, 212(30)
  01e7be8  lwz 3, 216(1)
  01e7bec  lfs 1, 216(1)
  01e7bf0  rlwinm 3, 3, 3, 29, 29
  01e7bf4  fmadds 2, 3, 3, 2
  01e7bf8  fabs 3, 1
  01e7bfc  fsqrts 2, 2
  01e7c00  fabs 5, 2
  01e7c04  stfs 2, 336(1)
  01e7c08  fsubs 1, 5, 3
  01e7c0c  stfs 1, 340(1)
  01e7c10  lwz 4, 336(1)
  01e7c14  lfs 1, 336(1)
  01e7c18  lwz 5, 340(1)
  01e7c1c  fabs 4, 1
  01e7c20  lfs 1, 340(1)
  01e7c24  rlwimi 3, 5, 2, 30, 30
  01e7c28  fsub 2, 1, 31
  01e7c2c  rlwimi 3, 4, 4, 28, 28
  01e7c30  fsub 6, 1, 31
  01e7c34  ori 4, 28, 0
  01e7c38  rlwimi 4, 3, 2, 26, 28
  01e7c3c  slwi 3, 3, 2
  01e7c40  clrldi 4, 4, 32
  01e7c44  lfsx 1, 28, 3
  01e7c48  fsel 4, 2, 4, 3
  01e7c4c  fsel 3, 6, 3, 5
  01e7c50  lfs 2, 4(4)
  01e7c54  fcmpu 0, 4, 31
  01e7c58  bt 1, 0x1e7c64
  01e7c5c  fmr 27, 31
  01e7c60  b 0x1e7d7c
  01e7c64  fsubs 5, 3, 4
  01e7c68  fadds 3, 3, 4
  01e7c6c  addic 3, 1, 16
  01e7c70  li 7, 2
  01e7c74  addic 5, 3, 348
  01e7c78  addic 4, 3, 332
  01e7c7c  mtctr 7
  01e7c80  fdivs 3, 5, 3
  01e7c84  fmuls 4, 3, 3
  01e7c88  stfs 3, 360(1)
  01e7c8c  stfs 3, 352(1)
  01e7c90  stfs 3, 356(1)
  01e7c94  stfs 3, 348(1)
  01e7c98  lfs 6, 360(1)
  01e7c9c  lfs 7, 352(1)
  01e7ca0  lfs 8, 356(1)
  01e7ca4  fmuls 5, 4, 4
  01e7ca8  fmuls 7, 7, 4
  01e7cac  fmuls 6, 6, 5
  01e7cb0  fmuls 3, 5, 5
  01e7cb4  fmuls 5, 8, 5
  01e7cb8  stfs 7, 352(1)
  01e7cbc  fmuls 4, 6, 4
  01e7cc0  stfs 5, 356(1)
  01e7cc4  stfs 4, 360(1)
  01e7cc8  lfs 4, 332(3)
  01e7ccc  fmuls 4, 4, 3
  01e7cd0  stfs 4, 348(3)
  01e7cd4  lfs 4, 4(4)
  01e7cd8  addic 4, 4, 8
  01e7cdc  fmuls 4, 4, 3
  01e7ce0  addic 3, 3, 8
  01e7ce4  stfs 4, 4(5)
  01e7ce8  addic 5, 5, 8
  01e7cec  bdnz 0x1e7cc8
  01e7cf0  li 5, 4
  01e7cf4  ori 3, 1, 0
  01e7cf8  mtctr 5
  01e7cfc  lis 4, 115
  01e7d00  addic 5, 3, 348
  01e7d04  addic 4, 4, 22752
  01e7d08  ori 6, 5, 0
  01e7d0c  lfs 3, 348(3)
  01e7d10  lfs 4, 0(4)
  01e7d14  fmuls 3, 3, 4
  01e7d18  lfs 4, 4(4)
  01e7d1c  addic 4, 4, 8
  01e7d20  stfs 3, 348(3)
  01e7d24  lfs 3, 4(5)
  01e7d28  addic 3, 3, 8
  01e7d2c  fmuls 3, 3, 4
  01e7d30  stfs 3, 4(5)
  01e7d34  addic 5, 5, 8
  01e7d38  bdnz 0x1e7d0c
  01e7d3c  ori 3, 1, 0
  01e7d40  fmr 3, 31
  01e7d44  mtctr 7
  01e7d48  lfs 4, 348(3)
  01e7d4c  fadds 3, 3, 4
  01e7d50  lfs 4, 4(6)
  01e7d54  addic 3, 3, 16
  01e7d58  lfs 5, 8(6)
  01e7d5c  lfs 6, 12(6)
  01e7d60  addic 6, 6, 16
  01e7d64  fadds 3, 3, 4
  01e7d68  fadds 3, 3, 5
  01e7d6c  fadds 3, 3, 6
  01e7d70  bdnz 0x1e7d48
  01e7d74  fadds 27, 3, 27
  01e7d78  fmadds 27, 27, 1, 2
  01e7d7c  fneg 1, 27
  01e7d80  fmr 2, 28
  01e7d84  bl 0x5025e0
  01e7d88  nop
  01e7d8c  lis 3, 118
  01e7d90  lfs 2, 20572(3)
  01e7d94  fmuls 2, 1, 2
  01e7d98  fmr 1, 28
  01e7d9c  bl 0x502578
  01e7da0  nop
  01e7da4  lis 3, 118
  01e7da8  stfs 1, 212(30)
  01e7dac  lfs 1, 56(30)
  01e7db0  lwz 4, 204(30)
  01e7db4  lfs 2, 20636(3)
  01e7db8  cmpwi 4, 0
  01e7dbc  fmuls 1, 1, 2
  01e7dc0  stfs 1, 56(30)
  01e7dc4  bf 2, 0x1e7ef4
  01e7dc8  lis 3, 151
  01e7dcc  lis 4, 118
  01e7dd0  addic 3, 3, -25376
  01e7dd4  lfs 1, 20640(4)
  01e7dd8  lfs 2, 5628(3)
  01e7ddc  fsubs 1, 2, 1
  01e7de0  fcmpu 0, 1, 31
  01e7de4  stfs 1, 5628(3)
  01e7de8  cror 6, 1, 2
  01e7dec  bt 6, 0x1e7ee8
  01e7df0  addic 28, 1, 192
  01e7df4  addic 4, 1, 208
  01e7df8  ori 3, 28, 0
  01e7dfc  ori 5, 29, 0
  01e7e00  bl 0x500608
  01e7e04  nop
  01e7e08  lfs 2, 196(1)
  01e7e0c  lfs 3, 192(1)
  01e7e10  fmuls 1, 2, 2
  01e7e14  lfs 5, 200(1)
  01e7e18  lis 3, 114
  01e7e1c  li 11, -1
  01e7e20  lfs 4, -3052(3)
  01e7e24  fmadds 1, 3, 3, 1
  01e7e28  fmuls 7, 4, 29
  01e7e2c  li 7, 1
  01e7e30  li 12, 0
  01e7e34  std 11, 144(1)
  01e7e38  lis 3, 30
  01e7e3c  fmr 4, 30
  01e7e40  fmadds 1, 5, 5, 1
  01e7e44  std 7, 160(1)
  01e7e48  std 7, 168(1)
  01e7e4c  addi 6, 3, 28752
  01e7e50  std 11, 176(1)
  01e7e54  ori 3, 31, 0
  01e7e58  std 12, 184(1)
  01e7e5c  li 10, 24
  01e7e60  fsqrts 6, 1
  01e7e64  ori 4, 28, 0
  01e7e68  li 5, 0
  01e7e6c  li 8, 30
  01e7e70  li 9, 10
  01e7e74  fmr 1, 30
  01e7e78  fdivs 7, 7, 6
  01e7e7c  fsub 8, 31, 6
  01e7e80  fsub 9, 31, 6
  01e7e84  fsub 10, 31, 6
  01e7e88  fsub 11, 6, 31
  01e7e8c  fsub 12, 6, 31
  01e7e90  fsub 6, 6, 31
  01e7e94  fmuls 3, 3, 7
  01e7e98  fmuls 2, 2, 7
  01e7e9c  fmuls 5, 5, 7
  01e7ea0  fsel 7, 8, 31, 3
  01e7ea4  fsel 8, 9, 31, 2
  01e7ea8  fsel 9, 10, 31, 5
  01e7eac  fsel 3, 11, 7, 3
  01e7eb0  fsel 2, 12, 8, 2
  01e7eb4  fsel 5, 6, 9, 5
  01e7eb8  stfs 3, 192(1)
  01e7ebc  stfs 2, 196(1)
  01e7ec0  stfs 5, 200(1)
  01e7ec4  lfs 2, 56(6)
  01e7ec8  lfs 3, 60(6)
  01e7ecc  lfs 5, 64(6)
  01e7ed0  lfs 6, 12(6)
  01e7ed4  lfs 7, 68(6)
  01e7ed8  bl 0x10e030
  01e7edc  nop
  01e7ee0  li 3, 7
  01e7ee4  stb 3, 32(31)
  01e7ee8  lis 3, 118
  01e7eec  lwz 3, 20892(3)
  01e7ef0  stw 3, 204(30)
  01e7ef4  lis 3, 113
  01e7ef8  ori 4, 31, 0
  01e7efc  addic 3, 3, -28496
  01e7f00  bl 0x6d720
  01e7f04  nop
  01e7f08  ori 3, 31, 0
  01e7f0c  ori 4, 30, 0
  01e7f10  bl 0x1e6df8
  01e7f14  lis 3, 30
  01e7f18  lfs 2, 76(30)
  01e7f1c  lfs 1, 40(30)
  01e7f20  addi 29, 3, 28752
  01e7f24  lfs 3, 72(29)
  01e7f28  fmuls 2, 2, 3
  01e7f2c  fneg 2, 2
  01e7f30  bl 0x502578
  01e7f34  nop
  01e7f38  fmr 31, 1
  01e7f3c  lfs 2, 76(29)
  01e7f40  lfs 3, 80(29)
  01e7f44  lfs 4, 80(30)
  01e7f48  lfs 1, 36(30)
  01e7f4c  fmsubs 2, 4, 2, 3
  01e7f50  bl 0x502578
  01e7f54  nop
  01e7f58  fneg 2, 1
  01e7f5c  ori 4, 30, 0
  01e7f60  fmr 1, 31
  01e7f64  ori 3, 31, 0
  01e7f68  bl 0x1e6ba8
  01e7f6c  lis 4, 118
  01e7f70  lis 5, 118
  01e7f74  ori 3, 31, 0
  01e7f78  lfs 1, 20700(4)
  01e7f7c  lfs 2, 20628(5)
  01e7f80  fmuls 1, 1, 2
  01e7f84  bl 0x106150
  01e7f88  nop
  01e7f8c  ld 0, 544(1)
  01e7f90  mtlr 0
  01e7f94  lfd 26, 480(1)
  01e7f98  lfd 27, 488(1)
  01e7f9c  lfd 28, 496(1)
  01e7fa0  lfd 29, 504(1)
  01e7fa4  lfd 30, 512(1)
  01e7fa8  lfd 31, 520(1)
  01e7fac  ld 24, 416(1)
  01e7fb0  ld 25, 424(1)
  01e7fb4  ld 26, 432(1)
  01e7fb8  ld 27, 440(1)
  01e7fbc  ld 28, 448(1)
  01e7fc0  ld 29, 456(1)
  01e7fc4  ld 30, 464(1)
  01e7fc8  ld 31, 472(1)
  01e7fcc  addi 1, 1, 528
  01e7fd0  blr

UpdateMoby_1160_JetFighterUnused:   # 0x1e8018, 0xf9c bytes
  01e8018  stdu 1, -624(1)
  01e801c  mflr 0
  01e8020  std 0, 640(1)
  01e8024  stfd 28, 592(1)
  01e8028  stfd 29, 600(1)
  01e802c  stfd 30, 608(1)
  01e8030  stfd 31, 616(1)
  01e8034  std 31, 584(1)
  01e8038  cmpwi 3, 0
  01e803c  std 30, 576(1)
  01e8040  std 29, 568(1)
  01e8044  std 28, 560(1)
  01e8048  std 27, 552(1)
  01e804c  std 26, 544(1)
  01e8050  ori 31, 3, 0
  01e8054  bt 2, 0x1e8f7c
  01e8058  lwz 30, 120(31)
  01e805c  addic 3, 30, 204
  01e8060  bl 0x4fff60
  01e8064  nop
  01e8068  lbz 3, 32(31)
  01e806c  cmpwi 3, 7
  01e8070  bt 2, 0x1e8688
  01e8074  cmpwi 3, 1
  01e8078  bt 2, 0x1e8688
  01e807c  cmpwi 3, 2
  01e8080  bt 2, 0x1e8688
  01e8084  lis 4, 3
  01e8088  ori 3, 31, 0
  01e808c  ori 4, 4, 1
  01e8090  li 5, 0
  01e8094  bl 0x10675c
  01e8098  nop
  01e809c  ori 29, 3, 0
  01e80a0  cmpwi 29, 0
  01e80a4  bt 2, 0x1e8688
  01e80a8  lbz 3, 32(31)
  01e80ac  cmpwi 3, 4
  01e80b0  bf 2, 0x1e8688
  01e80b4  lis 28, 151
  01e80b8  lwz 3, 44(29)
  01e80bc  addic 28, 28, -25376
  01e80c0  srawi 5, 3, 31
  01e80c4  srwi 7, 5, 1
  01e80c8  lwz 4, 5628(28)
  01e80cc  xor 3, 7, 3
  01e80d0  lfs 1, 5628(28)
  01e80d4  srawi 6, 4, 31
  01e80d8  subc 3, 3, 5
  01e80dc  lfs 2, 44(29)
  01e80e0  srwi 8, 6, 1
  01e80e4  xor 4, 8, 4
  01e80e8  subc 4, 4, 6
  01e80ec  cmpw 4, 3
  01e80f0  bf 1, 0x1e8570
  01e80f4  fsubs 1, 1, 2
  01e80f8  stfs 1, 5628(28)
  01e80fc  lwz 3, 48(29)
  01e8100  clrlwi 3, 3, 31
  01e8104  cmpwi 3, 0
  01e8108  bt 2, 0x1e8688
  01e810c  lis 4, 30
  01e8110  lis 3, 149
  01e8114  vspltisw 3, -1
  01e8118  addi 28, 4, 32724
  01e811c  addic 4, 3, 5056
  01e8120  lis 3, 16256
  01e8124  lis 5, 114
  01e8128  li 6, -3056
  01e812c  vslw 3, 3, 3
  01e8130  stw 3, 352(4)
  01e8134  <unknown>
  01e8138  vspltw 2, 2, 0
  01e813c  <unknown>
  01e8140  lis 6, 118
  01e8144  li 5, 360
  01e8148  vmaddfp 2, 4, 2, 3
  01e814c  addic 27, 1, 192
  01e8150  ori 3, 27, 0
  01e8154  lfs 31, 20680(6)
  01e8158  vctsxs 2, 2, 0
  01e815c  vspltw 2, 2, 0
  01e8160  stvewx 2, 5, 4
  01e8164  lfs 1, 44(29)
  01e8168  fmuls 31, 1, 31
  01e816c  lfs 1, 56(30)
  01e8170  lfs 2, 216(30)
  01e8174  lfs 4, 212(30)
  01e8178  fneg 3, 4
  01e817c  bl 0xfe610
  01e8180  nop
  01e8184  lfs 1, 16(31)
  01e8188  lfs 2, 16(29)
  01e818c  ori 3, 27, 0
  01e8190  fadds 1, 1, 2
  01e8194  lfs 2, 20(31)
  01e8198  lfs 3, 24(31)
  01e819c  addic 5, 29, 16
  01e81a0  ori 4, 27, 0
  01e81a4  stfs 1, 16(31)
  01e81a8  lfs 1, 20(29)
  01e81ac  fadds 1, 2, 1
  01e81b0  stfs 1, 20(31)
  01e81b4  lfs 1, 24(29)
  01e81b8  fadds 1, 3, 1
  01e81bc  stfs 1, 24(31)
  01e81c0  bl 0x500608
  01e81c4  nop
  01e81c8  lwz 3, 192(1)
  01e81cc  lwz 4, 196(1)
  01e81d0  lfs 1, 192(1)
  01e81d4  lfs 2, 196(1)
  01e81d8  fabs 3, 1
  01e81dc  lfs 30, 216(30)
  01e81e0  fabs 2, 2
  01e81e4  rlwinm 4, 4, 3, 29, 29
  01e81e8  lis 29, 115
  01e81ec  addic 29, 29, 22784
  01e81f0  fsubs 1, 3, 2
  01e81f4  stfs 1, 432(1)
  01e81f8  lfs 29, 4(28)
  01e81fc  lwz 5, 432(1)
  01e8200  lfs 1, 432(1)
  01e8204  rlwimi 4, 5, 2, 30, 30
  01e8208  fsub 4, 1, 29
  01e820c  fsub 5, 1, 29
  01e8210  rlwimi 4, 3, 4, 28, 28
  01e8214  ori 3, 29, 0
  01e8218  rlwimi 3, 4, 2, 26, 28
  01e821c  slwi 4, 4, 2
  01e8220  clrldi 3, 3, 32
  01e8224  fsel 4, 4, 3, 2
  01e8228  lfsx 1, 29, 4
  01e822c  fsel 3, 5, 2, 3
  01e8230  lfs 2, 4(3)
  01e8234  fcmpu 0, 4, 29
  01e8238  bt 1, 0x1e8244
  01e823c  fmr 1, 29
  01e8240  b 0x1e8368
  01e8244  fsubs 5, 3, 4
  01e8248  fadds 3, 3, 4
  01e824c  addic 3, 1, 16
  01e8250  li 7, 2
  01e8254  addic 5, 3, 500
  01e8258  addic 4, 3, 484
  01e825c  mtctr 7
  01e8260  fdivs 3, 5, 3
  01e8264  fmuls 4, 3, 3
  01e8268  stfs 3, 512(1)
  01e826c  stfs 3, 504(1)
  01e8270  stfs 3, 508(1)
  01e8274  stfs 3, 500(1)
  01e8278  lfs 6, 512(1)
  01e827c  lfs 7, 504(1)
  01e8280  lfs 8, 508(1)
  01e8284  fmuls 5, 4, 4
  01e8288  fmuls 7, 7, 4
  01e828c  fmuls 6, 6, 5
  01e8290  fmuls 3, 5, 5
  01e8294  fmuls 5, 8, 5
  01e8298  stfs 7, 504(1)
  01e829c  fmuls 4, 6, 4
  01e82a0  stfs 5, 508(1)
  01e82a4  stfs 4, 512(1)
  01e82a8  lfs 4, 484(3)
  01e82ac  fmuls 4, 4, 3
  01e82b0  stfs 4, 500(3)
  01e82b4  lfs 4, 4(4)
  01e82b8  addic 4, 4, 8
  01e82bc  fmuls 4, 4, 3
  01e82c0  addic 3, 3, 8
  01e82c4  stfs 4, 4(5)
  01e82c8  addic 5, 5, 8
  01e82cc  bdnz 0x1e82a8
  01e82d0  li 5, 4
  01e82d4  ori 3, 1, 0
  01e82d8  mtctr 5
  01e82dc  lis 4, 115
  01e82e0  addic 5, 3, 500
  01e82e4  addic 4, 4, 22752
  01e82e8  ori 6, 5, 0
  01e82ec  lfs 3, 500(3)
  01e82f0  lfs 4, 0(4)
  01e82f4  fmuls 3, 3, 4
  01e82f8  lfs 4, 4(4)
  01e82fc  addic 4, 4, 8
  01e8300  stfs 3, 500(3)
  01e8304  lfs 3, 4(5)
  01e8308  addic 3, 3, 8
  01e830c  fmuls 3, 3, 4
  01e8310  stfs 3, 4(5)
  01e8314  addic 5, 5, 8
  01e8318  bdnz 0x1e82ec
  01e831c  ori 3, 1, 0
  01e8320  fmr 3, 29
  01e8324  mtctr 7
  01e8328  lfs 4, 500(3)
  01e832c  fadds 3, 3, 4
  01e8330  lfs 4, 4(6)
  01e8334  addic 3, 3, 16
  01e8338  lfs 5, 8(6)
  01e833c  lfs 6, 12(6)
  01e8340  addic 6, 6, 16
  01e8344  fadds 3, 3, 4
  01e8348  fadds 3, 3, 5
  01e834c  fadds 3, 3, 6
  01e8350  bdnz 0x1e8328
  01e8354  lis 3, 30
  01e8358  addi 3, 3, 32724
  01e835c  lfs 4, 8(3)
  01e8360  fadds 3, 3, 4
  01e8364  fmadds 1, 3, 1, 2
  01e8368  fmr 2, 30
  01e836c  bl 0x5025e0
  01e8370  nop
  01e8374  lis 3, 118
  01e8378  lfs 2, 20568(3)
  01e837c  fmuls 2, 1, 2
  01e8380  fmr 1, 30
  01e8384  fmuls 2, 2, 31
  01e8388  bl 0x502578
  01e838c  nop
  01e8390  stfs 1, 216(30)
  01e8394  lfs 1, 196(1)
  01e8398  lfs 2, 192(1)
  01e839c  fmuls 1, 1, 1
  01e83a0  lfs 30, 212(30)
  01e83a4  lwz 3, 200(1)
  01e83a8  rlwinm 3, 3, 3, 29, 29
  01e83ac  fmadds 1, 2, 2, 1
  01e83b0  lfs 2, 200(1)
  01e83b4  fabs 3, 2
  01e83b8  fsqrts 1, 1
  01e83bc  fabs 5, 1
  01e83c0  stfs 1, 424(1)
  01e83c4  fsubs 1, 5, 3
  01e83c8  stfs 1, 428(1)
  01e83cc  lwz 4, 424(1)
  01e83d0  lfs 1, 424(1)
  01e83d4  lwz 5, 428(1)
  01e83d8  fabs 4, 1
  01e83dc  lfs 1, 428(1)
  01e83e0  rlwimi 3, 5, 2, 30, 30
  01e83e4  fsub 2, 1, 29
  01e83e8  fsub 6, 1, 29
  01e83ec  rlwimi 3, 4, 4, 28, 28
  01e83f0  ori 4, 29, 0
  01e83f4  rlwimi 4, 3, 2, 26, 28
  01e83f8  slwi 3, 3, 2
  01e83fc  clrldi 4, 4, 32
  01e8400  fsel 4, 2, 4, 3
  01e8404  lfsx 1, 29, 3
  01e8408  lfs 2, 4(4)
  01e840c  fsel 3, 6, 3, 5
  01e8410  fcmpu 0, 4, 29
  01e8414  bt 1, 0x1e841c
  01e8418  b 0x1e853c
  01e841c  fsubs 5, 3, 4
  01e8420  fadds 3, 3, 4
  01e8424  addic 3, 1, 16
  01e8428  li 6, 2
  01e842c  addic 5, 3, 468
  01e8430  addic 4, 3, 452
  01e8434  mtctr 6
  01e8438  fdivs 3, 5, 3
  01e843c  fmuls 4, 3, 3
  01e8440  stfs 3, 480(1)
  01e8444  stfs 3, 472(1)
  01e8448  stfs 3, 476(1)
  01e844c  stfs 3, 468(1)
  01e8450  lfs 6, 480(1)
  01e8454  lfs 7, 472(1)
  01e8458  lfs 8, 476(1)
  01e845c  fmuls 5, 4, 4
  01e8460  fmuls 7, 7, 4
  01e8464  fmuls 6, 6, 5
  01e8468  fmuls 3, 5, 5
  01e846c  fmuls 5, 8, 5
  01e8470  stfs 7, 472(1)
  01e8474  fmuls 4, 6, 4
  01e8478  stfs 5, 476(1)
  01e847c  stfs 4, 480(1)
  01e8480  lfs 4, 452(3)
  01e8484  fmuls 4, 4, 3
  01e8488  stfs 4, 468(3)
  01e848c  lfs 4, 4(4)
  01e8490  addic 4, 4, 8
  01e8494  fmuls 4, 4, 3
  01e8498  addic 3, 3, 8
  01e849c  stfs 4, 4(5)
  01e84a0  addic 5, 5, 8
  01e84a4  bdnz 0x1e8480
  01e84a8  li 5, 4
  01e84ac  ori 3, 1, 0
  01e84b0  mtctr 5
  01e84b4  lis 4, 115
  01e84b8  addic 5, 3, 468
  01e84bc  addic 4, 4, 22752
  01e84c0  ori 7, 5, 0
  01e84c4  lfs 3, 468(3)
  01e84c8  lfs 4, 0(4)
  01e84cc  fmuls 3, 3, 4
  01e84d0  lfs 4, 4(4)
  01e84d4  addic 4, 4, 8
  01e84d8  stfs 3, 468(3)
  01e84dc  lfs 3, 4(5)
  01e84e0  addic 3, 3, 8
  01e84e4  fmuls 3, 3, 4
  01e84e8  stfs 3, 4(5)
  01e84ec  addic 5, 5, 8
  01e84f0  bdnz 0x1e84c4
  01e84f4  ori 3, 1, 0
  01e84f8  mtctr 6
  01e84fc  lfs 3, 468(3)
  01e8500  lfs 4, 4(7)
  01e8504  fadds 3, 29, 3
  01e8508  lfs 5, 8(7)
  01e850c  addic 3, 3, 16
  01e8510  lfs 29, 12(7)
  01e8514  addic 7, 7, 16
  01e8518  fadds 3, 3, 4
  01e851c  fadds 3, 3, 5
  01e8520  fadds 29, 3, 29
  01e8524  bdnz 0x1e84fc
  01e8528  lis 3, 30
  01e852c  addi 3, 3, 32724
  01e8530  lfs 3, 8(3)
  01e8534  fadds 29, 29, 3
  01e8538  fmadds 29, 29, 1, 2
  01e853c  fmr 1, 29
  01e8540  fmr 2, 30
  01e8544  bl 0x5025e0
  01e8548  nop
  01e854c  lis 3, 118
  01e8550  lfs 2, 20572(3)
  01e8554  fmuls 2, 1, 2
  01e8558  fmr 1, 30
  01e855c  fmuls 2, 2, 31
  01e8560  bl 0x502578
  01e8564  nop
  01e8568  stfs 1, 212(30)
  01e856c  b 0x1e8688
  01e8570  lfs 1, 56(30)
  01e8574  addic 29, 1, 208
  01e8578  lfs 2, 216(30)
  01e857c  lfs 3, 212(30)
  01e8580  ori 3, 29, 0
  01e8584  fneg 3, 3
  01e8588  bl 0xfe610
  01e858c  nop
  01e8590  lis 3, 30
  01e8594  vspltisw 3, -1
  01e8598  lis 5, 15948
  01e859c  addi 27, 3, 32724
  01e85a0  lis 3, 149
  01e85a4  li 4, 16
  01e85a8  addic 6, 3, 5056
  01e85ac  vslw 3, 3, 3
  01e85b0  ori 3, 5, 52429
  01e85b4  lfs 1, 12(27)
  01e85b8  lis 5, 114
  01e85bc  li 7, -3056
  01e85c0  stw 3, 352(6)
  01e85c4  <unknown>
  01e85c8  vspltw 2, 2, 0
  01e85cc  <unknown>
  01e85d0  li 5, 360
  01e85d4  li 26, 0
  01e85d8  vmaddfp 2, 4, 2, 3
  01e85dc  li 8, 7
  01e85e0  li 7, 180
  01e85e4  li 3, 0
  01e85e8  li 4, 1
  01e85ec  vctsxs 2, 2, 0
  01e85f0  vspltw 2, 2, 0
  01e85f4  stvewx 2, 5, 6
  01e85f8  lfs 2, 4(27)
  01e85fc  stw 26, 5628(28)
  01e8600  stb 8, 32(31)
  01e8604  fmr 31, 2
  01e8608  stw 7, 52(30)
  01e860c  lfs 3, 136(28)
  01e8610  lwz 5, 8320(28)
  01e8614  fadds 1, 3, 1
  01e8618  stfs 1, 136(28)
  01e861c  stw 26, 152(5)
  01e8620  bl 0xb72b0
  01e8624  nop
  01e8628  li 6, -1
  01e862c  stw 26, 5616(28)
  01e8630  li 7, 1
  01e8634  fmr 1, 31
  01e8638  ori 3, 31, 0
  01e863c  fmr 2, 31
  01e8640  li 8, 10
  01e8644  sth 6, 5620(28)
  01e8648  lfs 3, 20(27)
  01e864c  ori 4, 29, 0
  01e8650  lfs 4, 24(27)
  01e8654  li 5, 0
  01e8658  lfs 5, 28(27)
  01e865c  li 9, 3
  01e8660  lfs 6, 32(27)
  01e8664  li 10, 16
  01e8668  lfs 7, 36(27)
  01e866c  std 6, 144(1)
  01e8670  std 7, 160(1)
  01e8674  std 7, 168(1)
  01e8678  std 6, 176(1)
  01e867c  std 26, 184(1)
  01e8680  bl 0x10e030
  01e8684  nop
  01e8688  lis 29, 151
  01e868c  li 3, 255
  01e8690  addic 29, 29, -25376
  01e8694  stb 3, 164(31)
  01e8698  lwz 3, 5616(29)
  01e869c  cmpw 3, 31
  01e86a0  bf 2, 0x1e8734
  01e86a4  lis 3, 118
  01e86a8  li 4, 20676
  01e86ac  vspltisw 5, -1
  01e86b0  lis 6, 30
  01e86b4  li 5, 24
  01e86b8  addi 6, 6, 32724
  01e86bc  vspltisw 7, -1
  01e86c0  vslw 5, 5, 5
  01e86c4  <unknown>
  01e86c8  vrefp 3, 2
  01e86cc  <unknown>
  01e86d0  vspltw 4, 4, 0
  01e86d4  vslw 7, 7, 7
  01e86d8  vspltisw 8, -1
  01e86dc  li 3, 5628
  01e86e0  vspltisw 11, -1
  01e86e4  vslw 8, 8, 8
  01e86e8  vnmsubfp 6, 3, 2, 4
  01e86ec  vmaddfp 3, 3, 6, 5
  01e86f0  vspltisw 5, -1
  01e86f4  <unknown>
  01e86f8  li 3, 40
  01e86fc  vslw 5, 5, 5
  01e8700  <unknown>
  01e8704  li 3, 5640
  01e8708  vspltw 10, 10, 0
  01e870c  vnmsubfp 9, 3, 2, 4
  01e8710  vmaddfp 3, 3, 9, 7
  01e8714  vslw 7, 11, 11
  01e8718  vnmsubfp 2, 3, 2, 4
  01e871c  vmaddfp 2, 3, 2, 5
  01e8720  vmaddfp 2, 2, 6, 8
  01e8724  vmaddfp 2, 2, 10, 7
  01e8728  vctsxs 2, 2, 0
  01e872c  vspltw 2, 2, 0
  01e8730  stvewx 2, 3, 29
  01e8734  lbz 3, 32(31)
  01e8738  cmpwi 3, 7
  01e873c  cmpwi 1, 3, 6
  01e8740  cmpwi 6, 3, 5
  01e8744  cmpwi 7, 3, 4
  01e8748  bt 2, 0x1e8cdc
  01e874c  bt 6, 0x1e8d18
  01e8750  bt 26, 0x1e8cbc
  01e8754  bt 30, 0x1e8cac
  01e8758  cmpwi 3, 3
  01e875c  bt 2, 0x1e8ba4
  01e8760  cmpwi 3, 2
  01e8764  bt 2, 0x1e8aa0
  01e8768  cmpwi 3, 1
  01e876c  bt 2, 0x1e8a04
  01e8770  cmpwi 3, 0
  01e8774  bf 2, 0x1e8d18
  01e8778  lis 3, 118
  01e877c  li 5, 1
  01e8780  lis 6, 118
  01e8784  li 4, 0
  01e8788  lfs 1, 20632(3)
  01e878c  stfs 1, 72(30)
  01e8790  stb 5, 32(31)
  01e8794  lwz 3, 20644(6)
  01e8798  stb 4, 48(30)
  01e879c  lis 5, 30
  01e87a0  stw 3, 108(30)
  01e87a4  lis 4, 150
  01e87a8  lwz 3, 36(31)
  01e87ac  addi 5, 5, 32724
  01e87b0  lfs 1, 36(3)
  01e87b4  addic 3, 4, -12416
  01e87b8  stfs 1, 44(31)
  01e87bc  lfs 1, 208(30)
  01e87c0  lfs 2, 212(30)
  01e87c4  stfs 1, 32(30)
  01e87c8  stfs 2, 36(30)
  01e87cc  lwz 4, 176(3)
  01e87d0  lfs 1, 176(3)
  01e87d4  lfs 2, 32(5)
  01e87d8  fabs 3, 1
  01e87dc  lis 3, 16256
  01e87e0  stw 3, 416(1)
  01e87e4  rlwinm 3, 4, 3, 29, 29
  01e87e8  lis 4, 115
  01e87ec  addic 4, 4, 22784
  01e87f0  fsubs 1, 2, 3
  01e87f4  stfs 1, 420(1)
  01e87f8  lfs 4, 4(5)
  01e87fc  lfs 1, 416(1)
  01e8800  lwz 5, 420(1)
  01e8804  fabs 5, 1
  01e8808  lfs 1, 420(1)
  01e880c  rlwimi 3, 5, 2, 30, 30
  01e8810  ori 5, 4, 0
  01e8814  fsub 6, 1, 4
  01e8818  fsub 7, 1, 4
  01e881c  rlwimi 5, 3, 2, 27, 28
  01e8820  slwi 3, 3, 2
  01e8824  clrldi 5, 5, 32
  01e8828  lfsx 1, 4, 3
  01e882c  fsel 5, 6, 5, 3
  01e8830  fsel 3, 7, 3, 2
  01e8834  lfs 2, 4(5)
  01e8838  fcmpu 0, 5, 4
  01e883c  bt 1, 0x1e8844
  01e8840  b 0x1e8964
  01e8844  fsubs 6, 3, 5
  01e8848  fadds 3, 3, 5
  01e884c  addic 3, 1, 16
  01e8850  li 7, 2
  01e8854  addic 5, 3, 436
  01e8858  addic 4, 3, 420
  01e885c  mtctr 7
  01e8860  fdivs 3, 6, 3
  01e8864  fmuls 5, 3, 3
  01e8868  stfs 3, 448(1)
  01e886c  stfs 3, 440(1)
  01e8870  stfs 3, 444(1)
  01e8874  stfs 3, 436(1)
  01e8878  lfs 7, 448(1)
  01e887c  lfs 8, 440(1)
  01e8880  lfs 9, 444(1)
  01e8884  fmuls 6, 5, 5
  01e8888  fmuls 8, 8, 5
  01e888c  fmuls 7, 7, 6
  01e8890  fmuls 3, 6, 6
  01e8894  fmuls 6, 9, 6
  01e8898  stfs 8, 440(1)
  01e889c  fmuls 5, 7, 5
  01e88a0  stfs 6, 444(1)
  01e88a4  stfs 5, 448(1)
  01e88a8  lfs 5, 420(3)
  01e88ac  fmuls 5, 5, 3
  01e88b0  stfs 5, 436(3)
  01e88b4  lfs 5, 4(4)
  01e88b8  addic 4, 4, 8
  01e88bc  fmuls 5, 5, 3
  01e88c0  addic 3, 3, 8
  01e88c4  stfs 5, 4(5)
  01e88c8  addic 5, 5, 8
  01e88cc  bdnz 0x1e88a8
  01e88d0  li 5, 4
  01e88d4  ori 3, 1, 0
  01e88d8  mtctr 5
  01e88dc  lis 4, 115
  01e88e0  addic 5, 3, 436
  01e88e4  addic 4, 4, 22752
  01e88e8  ori 6, 5, 0
  01e88ec  lfs 3, 436(3)
  01e88f0  lfs 5, 0(4)
  01e88f4  fmuls 3, 3, 5
  01e88f8  lfs 5, 4(4)
  01e88fc  addic 4, 4, 8
  01e8900  stfs 3, 436(3)
  01e8904  lfs 3, 4(5)
  01e8908  addic 3, 3, 8
  01e890c  fmuls 3, 3, 5
  01e8910  stfs 3, 4(5)
  01e8914  addic 5, 5, 8
  01e8918  bdnz 0x1e88ec
  01e891c  ori 3, 1, 0
  01e8920  mtctr 7
  01e8924  lfs 3, 436(3)
  01e8928  fadds 3, 4, 3
  01e892c  addic 3, 3, 16
  01e8930  lfs 4, 4(6)
  01e8934  lfs 5, 8(6)
  01e8938  lfs 6, 12(6)
  01e893c  addic 6, 6, 16
  01e8940  fadds 3, 3, 4
  01e8944  fadds 4, 3, 5
  01e8948  fadds 4, 4, 6
  01e894c  bdnz 0x1e8924
  01e8950  lis 3, 30
  01e8954  addi 3, 3, 32724
  01e8958  lfs 3, 8(3)
  01e895c  fadds 4, 4, 3
  01e8960  fmadds 4, 4, 1, 2
  01e8964  lis 3, 30
  01e8968  li 4, 0
  01e896c  addi 3, 3, 32724
  01e8970  lis 5, 241
  01e8974  lis 6, 118
  01e8978  lfs 1, 24(3)
  01e897c  stw 4, 176(30)
  01e8980  fmuls 1, 4, 1
  01e8984  lis 3, 150
  01e8988  lis 4, 150
  01e898c  addic 3, 3, -10544
  01e8990  stfs 1, 152(30)
  01e8994  stfs 1, 156(30)
  01e8998  lfs 1, 64(31)
  01e899c  stfs 1, 208(30)
  01e89a0  lfs 1, 68(31)
  01e89a4  stfs 1, 212(30)
  01e89a8  lfs 1, 72(31)
  01e89ac  stfs 1, 216(30)
  01e89b0  lfs 1, 76(31)
  01e89b4  stfs 1, 220(30)
  01e89b8  lwz 4, -8748(4)
  01e89bc  lhz 3, 970(3)
  01e89c0  lbz 5, -29180(5)
  01e89c4  slwi 3, 3, 4
  01e89c8  cmpwi 5, 0
  01e89cc  addc 3, 4, 3
  01e89d0  stw 3, 20916(6)
  01e89d4  bf 2, 0x1e89f4
  01e89d8  ori 4, 3, 0
  01e89dc  lis 3, 241
  01e89e0  li 5, 1024
  01e89e4  addic 3, 3, -30204
  01e89e8  clrldi 4, 4, 32
  01e89ec  bl 0x5c5ad0
  01e89f0  nop
  01e89f4  lis 3, 241
  01e89f8  li 4, 1
  01e89fc  stb 4, -29180(3)
  01e8a00  b 0x1e8d18
  01e8a04  ori 3, 31, 0
  01e8a08  lwz 4, 8320(29)
  01e8a0c  bl 0xf20f0
  01e8a10  nop
  01e8a14  lis 3, 118
  01e8a18  lfs 2, 20512(3)
  01e8a1c  fcmpu 0, 1, 2
  01e8a20  cror 6, 1, 2
  01e8a24  bt 6, 0x1e8d18
  01e8a28  li 3, 2
  01e8a2c  li 4, 1
  01e8a30  lis 5, 118
  01e8a34  li 6, 0
  01e8a38  stb 3, 32(31)
  01e8a3c  lis 7, 118
  01e8a40  lhz 3, 166(31)
  01e8a44  stw 31, 5616(29)
  01e8a48  sth 3, 5620(29)
  01e8a4c  stb 4, 5646(29)
  01e8a50  lwz 4, 108(30)
  01e8a54  li 3, 255
  01e8a58  lwz 5, 20648(5)
  01e8a5c  stb 4, 5622(29)
  01e8a60  stb 5, 5623(29)
  01e8a64  lis 4, 17096
  01e8a68  stb 5, 5624(29)
  01e8a6c  lfs 1, 72(30)
  01e8a70  li 5, 3
  01e8a74  stfs 1, 5628(29)
  01e8a78  stw 6, 240(30)
  01e8a7c  stw 3, 244(30)
  01e8a80  lfs 1, 20676(7)
  01e8a84  stw 4, 5636(29)
  01e8a88  stfs 1, 5632(29)
  01e8a8c  stb 5, 5625(29)
  01e8a90  stb 5, 5626(29)
  01e8a94  stb 5, 5627(29)
  01e8a98  stb 6, 5647(29)
  01e8a9c  b 0x1e8d18
  01e8aa0  li 3, 50
  01e8aa4  li 4, 1
  01e8aa8  bl 0xb72b0
  01e8aac  nop
  01e8ab0  lis 3, 149
  01e8ab4  li 5, 0
  01e8ab8  addic 4, 3, 5056
  01e8abc  li 6, 0
  01e8ac0  addic 3, 4, 320
  01e8ac4  addic 4, 4, 336
  01e8ac8  li 7, 0
  01e8acc  bl 0x47f74
  01e8ad0  nop
  01e8ad4  li 3, 0
  01e8ad8  lis 4, 118
  01e8adc  li 5, 255
  01e8ae0  li 6, 3
  01e8ae4  stw 3, 60(30)
  01e8ae8  stw 3, 64(30)
  01e8aec  lfs 1, 20516(4)
  01e8af0  stw 3, 68(30)
  01e8af4  li 4, -1
  01e8af8  stfs 1, 56(30)
  01e8afc  stw 3, 76(30)
  01e8b00  stw 3, 80(30)
  01e8b04  stw 3, 104(30)
  01e8b08  stw 3, 100(30)
  01e8b0c  stw 3, 196(30)
  01e8b10  stw 3, 200(30)
  01e8b14  stb 5, 48(31)
  01e8b18  lwz 3, 8320(29)
  01e8b1c  sth 5, 50(31)
  01e8b20  lis 5, 118
  01e8b24  stw 4, 152(3)
  01e8b28  stb 6, 32(31)
  01e8b2c  lfs 1, 16(31)
  01e8b30  lfs 2, 128(29)
  01e8b34  lfs 3, 20(31)
  01e8b38  lfs 4, 132(29)
  01e8b3c  fsubs 1, 1, 2
  01e8b40  lfs 5, 24(31)
  01e8b44  lfs 6, 136(29)
  01e8b48  fsubs 3, 3, 4
  01e8b4c  lfs 7, 20520(5)
  01e8b50  fsubs 5, 5, 6
  01e8b54  lfs 8, 152(29)
  01e8b58  fmadds 1, 7, 1, 2
  01e8b5c  fmr 2, 8
  01e8b60  fmadds 3, 7, 3, 4
  01e8b64  fmadds 4, 7, 5, 6
  01e8b68  stfs 1, 128(29)
  01e8b6c  stfs 3, 132(29)
  01e8b70  stfs 4, 136(29)
  01e8b74  lfs 1, 216(30)
  01e8b78  bl 0x5025e0
  01e8b7c  nop
  01e8b80  lis 3, 118
  01e8b84  lfs 3, 152(29)
  01e8b88  lfs 2, 20524(3)
  01e8b8c  fmuls 2, 2, 1
  01e8b90  fmr 1, 3
  01e8b94  bl 0x502578
  01e8b98  nop
  01e8b9c  stfs 1, 152(29)
  01e8ba0  b 0x1e8d18
  01e8ba4  lfs 30, 20(31)
  01e8ba8  lfs 1, 132(29)
  01e8bac  lfs 31, 16(31)
  01e8bb0  fsubs 30, 30, 1
  01e8bb4  lfs 1, 128(29)
  01e8bb8  lfs 29, 24(31)
  01e8bbc  fsubs 31, 31, 1
  01e8bc0  lfs 1, 136(29)
  01e8bc4  fsubs 29, 29, 1
  01e8bc8  lfs 1, 216(30)
  01e8bcc  lfs 3, 152(29)
  01e8bd0  fmr 2, 3
  01e8bd4  bl 0x5025e0
  01e8bd8  nop
  01e8bdc  fmuls 2, 30, 30
  01e8be0  lis 3, 118
  01e8be4  fmr 28, 1
  01e8be8  lfs 3, 20528(3)
  01e8bec  fmadds 2, 31, 31, 2
  01e8bf0  fmadds 2, 29, 29, 2
  01e8bf4  fsqrts 2, 2
  01e8bf8  fcmpu 0, 2, 3
  01e8bfc  cror 6, 1, 2
  01e8c00  bt 6, 0x1e8c60
  01e8c04  lis 3, 118
  01e8c08  lfs 1, 20532(3)
  01e8c0c  fcmpu 0, 1, 28
  01e8c10  cror 6, 0, 2
  01e8c14  bt 6, 0x1e8c60
  01e8c18  lis 4, 118
  01e8c1c  ori 3, 30, 0
  01e8c20  lfs 1, 20516(4)
  01e8c24  lfs 2, 216(30)
  01e8c28  lfs 3, 212(30)
  01e8c2c  fneg 3, 3
  01e8c30  bl 0xfe610
  01e8c34  nop
  01e8c38  lwz 3, 36(31)
  01e8c3c  li 4, 4
  01e8c40  lis 5, 118
  01e8c44  stb 4, 32(31)
  01e8c48  lfs 1, 36(3)
  01e8c4c  lfs 2, 20700(5)
  01e8c50  li 3, 1
  01e8c54  fmuls 1, 1, 2
  01e8c58  stfs 1, 44(31)
  01e8c5c  stb 3, 8357(29)
  01e8c60  lis 3, 118
  01e8c64  lis 4, 118
  01e8c68  lfs 1, 20520(3)
  01e8c6c  lfs 2, 128(29)
  01e8c70  lfs 3, 132(29)
  01e8c74  fmadds 4, 1, 31, 2
  01e8c78  lfs 2, 136(29)
  01e8c7c  fmadds 3, 1, 30, 3
  01e8c80  fmadds 5, 1, 29, 2
  01e8c84  lfs 2, 20524(4)
  01e8c88  lfs 1, 152(29)
  01e8c8c  fmuls 2, 2, 28
  01e8c90  stfs 4, 128(29)
  01e8c94  stfs 3, 132(29)
  01e8c98  stfs 5, 136(29)
  01e8c9c  bl 0x502578
  01e8ca0  nop
  01e8ca4  stfs 1, 152(29)
  01e8ca8  b 0x1e8d18
  01e8cac  ori 3, 31, 0
  01e8cb0  ori 4, 30, 0
  01e8cb4  bl 0x1e70a8
  01e8cb8  b 0x1e8d18
  01e8cbc  addic 3, 30, 52
  01e8cc0  bl 0x4fff60
  01e8cc4  nop
  01e8cc8  cmpwi 3, 0
  01e8ccc  bt 2, 0x1e8d18
  01e8cd0  li 3, 1
  01e8cd4  stb 3, 32(31)
  01e8cd8  b 0x1e8d18
  01e8cdc  li 5, 0
  01e8ce0  lwz 6, 8320(29)
  01e8ce4  li 3, 0
  01e8ce8  li 4, 1
  01e8cec  stb 5, 8357(29)
  01e8cf0  stw 5, 152(6)
  01e8cf4  bl 0xb72b0
  01e8cf8  nop
  01e8cfc  li 3, 0
  01e8d00  bl 0x481d0
  01e8d04  nop
  01e8d08  ori 3, 31, 0
  01e8d0c  bl 0xefb38
  01e8d10  nop
  01e8d14  b 0x1e8f7c
  01e8d18  lis 4, 30
  01e8d1c  lwz 5, 16(31)
  01e8d20  lfs 3, 16(31)
  01e8d24  lis 3, 16752
  01e8d28  addi 4, 4, 32724
  01e8d2c  srawi 6, 5, 31
  01e8d30  srwi 7, 6, 1
  01e8d34  lfs 1, 36(4)
  01e8d38  xor 4, 7, 5
  01e8d3c  subc 4, 4, 6
  01e8d40  cmpw 4, 3
  01e8d44  bf 0, 0x1e8d50
  01e8d48  fmr 3, 1
  01e8d4c  stw 3, 16(31)
  01e8d50  lis 4, 30
  01e8d54  addi 4, 4, 32724
  01e8d58  lfs 2, 44(4)
  01e8d5c  fcmpu 0, 3, 2
  01e8d60  cror 6, 0, 2
  01e8d64  bt 6, 0x1e8d74
  01e8d68  lis 4, 17532
  01e8d6c  fmr 3, 2
  01e8d70  stw 4, 16(31)
  01e8d74  lwz 4, 20(31)
  01e8d78  lfs 4, 20(31)
  01e8d7c  srawi 5, 4, 31
  01e8d80  srwi 6, 5, 1
  01e8d84  xor 4, 6, 4
  01e8d88  subc 4, 4, 5
  01e8d8c  cmpw 4, 3
  01e8d90  bf 0, 0x1e8d9c
  01e8d94  fmr 4, 1
  01e8d98  stw 3, 20(31)
  01e8d9c  fcmpu 0, 4, 2
  01e8da0  cror 6, 0, 2
  01e8da4  bt 6, 0x1e8db4
  01e8da8  lis 4, 17532
  01e8dac  fmr 4, 2
  01e8db0  stw 4, 20(31)
  01e8db4  lwz 4, 24(31)
  01e8db8  lfs 5, 24(31)
  01e8dbc  srawi 5, 4, 31
  01e8dc0  srwi 6, 5, 1
  01e8dc4  xor 4, 6, 4
  01e8dc8  subc 4, 4, 5
  01e8dcc  cmpw 4, 3
  01e8dd0  bf 0, 0x1e8ddc
  01e8dd4  fmr 5, 1
  01e8dd8  stw 3, 24(31)
  01e8ddc  fmr 1, 5
  01e8de0  fcmpu 0, 1, 2
  01e8de4  cror 6, 0, 2
  01e8de8  bt 6, 0x1e8df8
  01e8dec  lis 3, 17532
  01e8df0  fmr 1, 2
  01e8df4  stw 3, 24(31)
  01e8df8  lbz 3, 32(31)
  01e8dfc  cmpwi 3, 4
  01e8e00  cmpwi 1, 3, 2
  01e8e04  cmpwi 6, 3, 5
  01e8e08  bf 2, 0x1e8e40
  01e8e0c  stfs 3, 128(29)
  01e8e10  stfs 4, 132(29)
  01e8e14  stfs 1, 136(29)
  01e8e18  lfs 1, 28(31)
  01e8e1c  stfs 1, 140(29)
  01e8e20  lfs 1, 208(30)
  01e8e24  stfs 1, 144(29)
  01e8e28  lfs 1, 212(30)
  01e8e2c  stfs 1, 148(29)
  01e8e30  lfs 1, 216(30)
  01e8e34  stfs 1, 152(29)
  01e8e38  lfs 1, 220(30)
  01e8e3c  stfs 1, 156(29)
  01e8e40  bf 5, 0x1e8f7c
  01e8e44  bf 24, 0x1e8f7c
  01e8e48  lwz 29, 84(30)
  01e8e4c  cmpwi 29, 0
  01e8e50  bf 2, 0x1e8e68
  01e8e54  ori 3, 31, 0
  01e8e58  bl 0x2b9870
  01e8e5c  nop
  01e8e60  ori 29, 3, 0
  01e8e64  stw 29, 84(30)
  01e8e68  cmpwi 29, 0
  01e8e6c  bt 2, 0x1e8f7c
  01e8e70  lis 3, 30
  01e8e74  lis 5, 118
  01e8e78  addi 4, 3, 32724
  01e8e7c  lis 3, 114
  01e8e80  lis 6, 118
  01e8e84  lfs 1, 48(4)
  01e8e88  lfs 2, -3064(3)
  01e8e8c  lwz 3, 120(29)
  01e8e90  fmuls 1, 2, 1
  01e8e94  stfs 1, 72(29)
  01e8e98  lfs 1, 52(4)
  01e8e9c  lfs 3, 180(30)
  01e8ea0  lfs 4, 20888(5)
  01e8ea4  lfs 5, 20700(6)
  01e8ea8  fmadds 3, 3, 4, 1
  01e8eac  lfs 2, 12(3)
  01e8eb0  lfs 1, 56(4)
  01e8eb4  fmuls 3, 3, 5
  01e8eb8  fcmpu 1, 2, 3
  01e8ebc  bf 5, 0x1e8ed4
  01e8ec0  lis 4, 114
  01e8ec4  lfs 3, -3064(4)
  01e8ec8  fnmsubs 1, 3, 1, 2
  01e8ecc  stfs 1, 12(3)
  01e8ed0  b 0x1e8ee8
  01e8ed4  bf 4, 0x1e8ee8
  01e8ed8  lis 4, 114
  01e8edc  lfs 3, -3064(4)
  01e8ee0  fmadds 1, 3, 1, 2
  01e8ee4  stfs 1, 12(3)
  01e8ee8  lis 3, 30
  01e8eec  lfs 1, 180(30)
  01e8ef0  addi 3, 3, 32724
  01e8ef4  lfs 2, 60(3)
  01e8ef8  fmuls 1, 1, 2
  01e8efc  bl 0x502758
  01e8f00  nop
  01e8f04  addic 5, 3, 80
  01e8f08  addic 30, 1, 288
  01e8f0c  addic 4, 29, 64
  01e8f10  ori 3, 30, 0
  01e8f14  stb 5, 35(29)
  01e8f18  bl 0x500ca4
  01e8f1c  nop
  01e8f20  addic 28, 1, 352
  01e8f24  addic 4, 31, 192
  01e8f28  ori 3, 28, 0
  01e8f2c  bl 0x500f6c
  01e8f30  nop
  01e8f34  addic 27, 1, 224
  01e8f38  ori 4, 28, 0
  01e8f3c  ori 3, 27, 0
  01e8f40  ori 5, 30, 0
  01e8f44  bl 0x50162c
  01e8f48  nop
  01e8f4c  addic 3, 29, 192
  01e8f50  ori 4, 27, 0
  01e8f54  bl 0x500fa8
  01e8f58  nop
  01e8f5c  ori 3, 31, 0
  01e8f60  addic 5, 29, 16
  01e8f64  li 4, 2
  01e8f68  bl 0xf1114
  01e8f6c  nop
  01e8f70  ori 3, 29, 0
  01e8f74  bl 0xf30a0
  01e8f78  nop
  01e8f7c  ld 0, 640(1)
  01e8f80  mtlr 0
  01e8f84  lfd 28, 592(1)
  01e8f88  lfd 29, 600(1)
  01e8f8c  lfd 30, 608(1)
  01e8f90  lfd 31, 616(1)
  01e8f94  ld 26, 544(1)
  01e8f98  ld 27, 552(1)
  01e8f9c  ld 28, 560(1)
  01e8fa0  ld 29, 568(1)
  01e8fa4  ld 30, 576(1)
  01e8fa8  ld 31, 584(1)
  01e8fac  addi 1, 1, 624
  01e8fb0  blr
