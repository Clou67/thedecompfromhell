//==== 001300d0  ns=partupd  size=0x11c
// sig: undefined SpawnPart_55(void)
// callers(2): 0039aeb8 mobyupdate_helpers::M479_0039aeb8; 0039b390 mobyupdate_unsorted::UpdateMoby_479
// callees(3): 000f1114 mobyfunc::GetBonePosition; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 55 */

longlong partupd::SpawnPart_55
                   (double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   uint param_6,undefined8 param_7,float param_8)

{
  float fVar1;
  float fVar2;
  short sVar3;
  PartInstance *pPVar4;
  char cVar5;
  
  pPVar4 = partproc::CreatePart(0x37);
  if (pPVar4 != (PartInstance *)0x0) {
    pPVar4->color = param_6;
    pPVar4->scale = param_8;
    cVar5 = fastfunc::FastDoubleToInt(0x3fd99999a0000000);
    pPVar4->drawDist = cVar5 + ' ';
    pPVar4->gsAlpha = 0x48;
    pPVar4->type = 3;
    pPVar4->tex = *DAT_00a528e0;
    mobyfunc::GetBonePosition(param_3,param_4,(longlong)(int)pPVar4 + 0x10);
    fVar1 = (pPVar4->pos).x;
    pPVar4->update[4] = param_3;
    fVar2 = (pPVar4->pos).y;
    sVar3 = *(short *)(param_3 + 0xa6);
    pPVar4->update[0] = (int)fVar1;
    fVar1 = (pPVar4->pos).z;
    pPVar4->update[1] = (int)fVar2;
    pPVar4->update[2] = (int)fVar1;
    (pPVar4->pos).w = (float)param_1;
    pPVar4->update[3] = (int)(float)param_2;
    pPVar4->update[6] = (int)sVar3;
    pPVar4->update[5] = (int)param_4;
    pPVar4->update[7] = (int)(float)param_1;
  }
  return (longlong)(int)pPVar4;
}



//==== 00130208  ns=partupd  size=0x19c
// sig: undefined UpdatePart_55(PartInstance * part)
// callers(0): 
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6ec partproc::DeletePart

/* Part 55 */

void partupd::UpdatePart_55(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar4 = part->update[4];
  if ((((iVar4 != 0) && ((int)*(short *)(iVar4 + 0xa6) == part->update[6])) &&
      (*(char *)(iVar4 + 0x20) != -2)) && (*(char *)(iVar4 + 0x20) != -3)) {
    dVar8 = (double)mobyutil::MB_randRangeFloat(0.5,1.0);
    dVar15 = (double)(float)part->update[3];
    dVar12 = (double)(part->pos).x;
    dVar14 = (double)(float)((double)(float)part->update[7] * dVar8);
    dVar10 = (double)(part->pos).y;
    dVar8 = (double)(part->pos).z;
    mobyfunc::GetBonePosition(part->update[4],part->update[5],(longlong)(int)part + 0x10);
    dVar11 = (double)(float)(dVar10 - (double)(part->pos).y);
    dVar13 = (double)(float)(dVar12 - (double)(part->pos).x);
    dVar9 = (double)(float)(dVar8 - (double)(part->pos).z);
    dVar10 = (double)mobyutil::MB_randRangeFloat(-0.021,0.021);
    fVar6 = 0.0;
    fVar1 = (part->pos).x;
    fVar2 = (part->pos).y;
    fVar3 = (part->pos).z;
    (part->pos).w = (float)dVar14;
    part->update[3] = (int)(float)dVar15;
    dVar12 = (double)SQRT((float)(dVar9 * dVar9 +
                                 (double)(float)(dVar13 * dVar13 + (double)(float)(dVar11 * dVar11))
                                 ));
    dVar8 = dVar12;
    if (dVar12 - 0.0625 < 0.0) {
      dVar8 = 0.0625;
    }
    dVar8 = (double)(float)((double)(float)(dVar10 + dVar8) / dVar12);
    fVar5 = fVar6;
    if (0.0 - dVar12 < 0.0) {
      fVar5 = (float)(dVar9 * dVar8);
    }
    fVar7 = fVar6;
    if (0.0 - dVar12 < 0.0) {
      fVar7 = (float)(dVar11 * dVar8);
    }
    if (0.0 - dVar12 < 0.0) {
      fVar6 = (float)(dVar13 * dVar8);
    }
    if (dVar12 - 0.0 < 0.0) {
      fVar5 = (float)(dVar9 * dVar8);
    }
    if (dVar12 - 0.0 < 0.0) {
      fVar7 = (float)(dVar11 * dVar8);
    }
    if (dVar12 - 0.0 < 0.0) {
      fVar6 = (float)(dVar13 * dVar8);
    }
    part->update[2] = (int)(fVar3 + fVar5);
    part->update[1] = (int)(fVar2 + fVar7);
    part->update[0] = (int)(fVar1 + fVar6);
    return;
  }
  partproc::DeletePart();
  return;
}



//==== 001303a8  ns=partupd  size=0x130
// sig: undefined SpawnPart_56(void)
// callers(1): 0044cee0 mobyupdate_unsorted::UpdateMoby_751
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 56 */

PartInstance * partupd::SpawnPart_56(double param_1,float *param_2,int *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  PartInstance *pPVar4;
  longlong lVar3;
  char cVar5;
  
  pPVar4 = partproc::CreatePart(0x38);
  if (pPVar4 != (PartInstance *)0x0) {
    (pPVar4->pos).x = *param_2;
    (pPVar4->pos).y = param_2[1];
    (pPVar4->pos).z = param_2[2];
    (pPVar4->pos).w = param_2[3];
    lVar3 = mobyutil::MB_randInt(0x10);
    uVar2 = lVar3 << 1;
    pPVar4->color =
         (int)((uVar2 & 0xfffffffe) << 8) + 0x6000U | (int)uVar2 + 0x60U |
         (int)((uVar2 & 0xfffffffe) << 0x10) + 0x600000U | 0x40000000;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->drawDist = cVar5 + ' ';
    pPVar4->gsAlpha = 0x48;
    pPVar4->type = 0;
    bVar1 = *DAT_00a528e4;
    pPVar4->scale = (float)param_1;
    pPVar4->tex = bVar1;
    pPVar4->update[0] = *param_3;
    pPVar4->update[1] = param_3[1];
    pPVar4->update[2] = param_3[2];
    pPVar4->update[3] = param_3[3];
    cVar5 = mobyutil::MB_randInt(0x100);
    pPVar4->rot = cVar5;
  }
  return pPVar4;
}



//==== 001304e0  ns=partupd  size=0xc0
// sig: undefined UpdatePart_56(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 56 */

void partupd::UpdatePart_56(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  
  fVar5 = (float)part->update[0] * 0.975;
  fVar6 = (float)part->update[1] * 0.975;
  fVar1 = (part->pos).x;
  fVar7 = (float)part->update[2] * 0.975;
  fVar2 = (part->pos).y;
  fVar3 = (part->pos).z;
  fVar4 = part->scale;
  uVar8 = ((ulonglong)part->color & 0xff) - 4;
  part->update[0] = (int)fVar5;
  part->update[1] = (int)fVar6;
  part->update[2] = (int)fVar7;
  (part->pos).x = fVar1 + fVar5;
  (part->pos).y = fVar2 + fVar6;
  (part->pos).z = fVar3 + fVar7;
  part->scale = fVar4 + 6300.0;
  if ((int)(uint)uVar8 < 1) {
    partproc::DeletePart();
  }
  else {
    part->color = (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 |
                  (uint)((uVar8 & 0xffffffff) << 0x10) | 0x60000000;
  }
  return;
}



//==== 001305b0  ns=partupd  size=0x148
// sig: undefined SpawnPart_57(void)
// callers(1): 0044cee0 mobyupdate_unsorted::UpdateMoby_751
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 57 */

PartInstance * partupd::SpawnPart_57(double param_1,double param_2,float *param_3,int *param_4)

{
  PartInstance *pPVar2;
  ulonglong uVar1;
  char cVar3;
  double dVar4;
  
  pPVar2 = partproc::CreatePart(0x39);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    (pPVar2->pos).z = param_3[2];
    (pPVar2->pos).w = param_3[3];
    uVar1 = mobyutil::MB_randInt(0x10);
    pPVar2->color = (uint)((uVar1 & 0x7fffffff) << 0x19) | 0x808080;
    cVar3 = fastfunc::FastDoubleToInt(0x4028000000000000);
    pPVar2->drawDist = cVar3 + ' ';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 1;
    pPVar2->tex = *DAT_00a528e8;
    pPVar2->timer = 0x80;
    pPVar2->scale = (float)(param_1 * 210000.0);
    pPVar2->update[0] = *param_4;
    pPVar2->update[1] = param_4[1];
    pPVar2->update[2] = param_4[2];
    pPVar2->update[3] = param_4[3];
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.0,256.0);
    pPVar2->update[4] = (int)(float)dVar4;
    cVar3 = fastfunc::FastDoubleToInt();
    pPVar2->rot = cVar3;
    pPVar2->update[5] = (int)(float)param_2;
  }
  return pPVar2;
}



//==== 00130700  ns=partupd  size=0xf8
// sig: undefined UpdatePart_57(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 00502758 fastfunc::FastDoubleToInt

/* Part 57 */

void partupd::UpdatePart_57(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar6;
  ulonglong uVar5;
  
  fVar1 = (float)part->update[1];
  fVar2 = (float)part->update[2];
  fVar3 = part->scale;
  (part->pos).x = (part->pos).x + (float)part->update[0];
  (part->pos).y = (part->pos).y + fVar1;
  (part->pos).z = (part->pos).z + fVar2;
  fVar1 = (float)part->update[5];
  fVar2 = (float)part->update[4];
  part->scale = fVar3 + 5880.0;
  fVar1 = fVar1 * 0.98;
  part->update[5] = (int)fVar1;
  part->update[4] = (int)(fVar2 + fVar1);
  cVar6 = fastfunc::FastDoubleToInt();
  part->rot = cVar6;
  uVar5 = (ulonglong)(ushort)part->timer - 1;
  part->timer = (short)uVar5;
  if ((short)uVar5 < 1) {
    partproc::DeletePart(part);
    uVar5 = (ulonglong)(ushort)part->timer;
  }
  iVar4 = (int)((uVar5 & 0xffffffff) << 0x18);
  part->color = iVar4 + ((uint)(0x40 - (longlong)(short)uVar5 >> 0x3f) &
                        (int)((0x80 - uVar5 & 0xffffffff) << 0x18) - iVar4) | 0x808080;
  return;
}



//==== 00130810  ns=partupd  size=0x238
// sig: undefined SpawnPart_58(void)
// callers(3): 00130a78 partupd::UpdatePart_58; 00196fc8 mobyupdate_helpers::M1045_00196fc8; 001c00b8 mobyupdate_helpers::M1106_001c00b8
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 58 */

PartInstance *
partupd::SpawnPart_58
          (double param_1,double param_2,float *param_3,byte param_4,byte param_5,undefined1 param_6
          ,undefined1 param_7,byte param_8,int param_9)

{
  PartInstance *pPVar1;
  char cVar4;
  uint uVar2;
  int iVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pPVar1 = partproc::CreatePart(0x3a);
  if (pPVar1 != (PartInstance *)0x0) {
    (pPVar1->pos).x = *param_3;
    (pPVar1->pos).y = param_3[1];
    (pPVar1->pos).z = param_3[2];
    (pPVar1->pos).w = param_3[3];
    cVar4 = fastfunc::FastDoubleToInt(0);
    pPVar1->drawDist = cVar4 + 'p';
    pPVar1->gsAlpha = 0x44;
    pPVar1->type = 0;
    iVar3 = DAT_00a528ec;
    uVar2 = rand();
    pPVar1->tex = *(byte *)(iVar3 + (uVar2 & 7));
    pPVar1->scale = 21000.0;
    iVar3 = rand();
    pPVar1->rot = (char)iVar3;
    *(byte *)(pPVar1->update + 4) = param_4;
    *(byte *)((int)pPVar1->update + 0x11) = param_5;
    *(undefined1 *)((int)pPVar1->update + 0x12) = param_6;
    *(undefined1 *)((int)pPVar1->update + 0x13) = param_7;
    *(byte *)((int)pPVar1->update + 0x15) = param_8;
    pPVar1->update[6] = param_9;
    pPVar1->update[7] = (int)(float)param_1;
    if (param_4 < 2) {
      pPVar1->timer = (ushort)param_5;
      pPVar1->color = 0xff808080;
      *(undefined1 *)(pPVar1->update + 5) = 0;
    }
    else if (param_4 < 3) {
      dVar5 = (double)mobyutil::MB_randRangeFloat(3.0,9.0);
      dVar7 = (double)((float)(dVar5 * param_2) * mobyutil::g_FrameTime);
      dVar5 = (double)mobyutil::MB_randRot();
      dVar6 = (double)mobyutil::MB_randRangeFloat(1.3439035,1.7976891);
      mobyutil::MB_SphericalToVector((float)dVar7,(float)dVar5,(float)dVar6,(float *)pPVar1->update)
      ;
      pPVar1->scale = 42000.0;
      uVar2 = rand();
      iVar3 = (uVar2 & 0x1f) + 0x10;
      *(char *)((int)pPVar1->update + 0x16) = (char)iVar3;
      pPVar1->timer = (ushort)param_8;
      *(undefined1 *)(pPVar1->update + 5) = 2;
      pPVar1->color = iVar3 * 0x1000000 | 0x808080;
    }
  }
  return pPVar1;
}



//==== 00130a78  ns=partupd  size=0x450
// sig: undefined UpdatePart_58(PartInstance * part)
// callers(0): 
// callees(8): 00105c08 mobyutil::CollDamageMobyDirect; 00110950 mobyutil::MB_RandomizeVector; 0011e6ec partproc::DeletePart; 00130810 partupd::SpawnPart_58; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 005c8318 rand

/* Part 58 */

void partupd::UpdatePart_58(PartInstance *part)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint in_r6;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  longlong local_40;
  
  lVar7 = (longlong)(int)part;
  bVar1 = *(byte *)(part->update + 5);
  if (bVar1 == 0) {
    dVar11 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x11));
    dVar12 = (double)fastfunc::FastIntToDouble(part->timer);
    uVar8 = fastfunc::FastLerpColor
                      ((double)(float)((double)(float)(dVar11 - dVar12) / dVar11),0xffffffffff4080ff
                       ,0);
    part->color = uVar8;
    iVar9 = fastfunc::FastDecTimerS16(lVar7 + 10);
    if (iVar9 != 0) {
      if (*(char *)(part->update + 4) == '\x01') {
        partproc::DeletePart(lVar7);
      }
      else {
        *(undefined1 *)(part->update + 5) = 1;
        part->timer = (ushort)*(byte *)((int)part->update + 0x12);
      }
    }
  }
  else if (bVar1 < 2) {
    iVar9 = 0;
    if (*(char *)((int)part->update + 0x13) != '\0') {
      dVar11 = 0.05000000074505806;
      dVar12 = 10.5;
      do {
        local_60 = (part->pos).x;
        local_5c = (part->pos).y;
        local_58 = (part->pos).z;
        local_54 = (part->pos).w;
        mobyutil::MB_RandomizeVector((float)dVar11,&local_60);
        dVar13 = 1.0;
        local_40 = (longlong)(int)((double)animationSpeed * dVar12);
        if ((int)part->timer < (int)((double)animationSpeed * dVar12)) {
          dVar13 = (double)fastfunc::FastIntToDouble();
          dVar13 = (double)(float)(dVar13 / (double)(longlong)((double)animationSpeed * dVar12));
        }
        bVar1 = *(byte *)((int)part->update + 0x12);
        in_r6 = (uint)bVar1;
        SpawnPart_58((double)(float)part->update[7],dVar13,&local_60,2,
                     *(undefined1 *)((int)part->update + 0x11),bVar1,
                     *(undefined1 *)((int)part->update + 0x13),
                     *(undefined1 *)((int)part->update + 0x15),part->update[6]);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)*(byte *)((int)part->update + 0x13));
    }
    iVar9 = fastfunc::FastDecTimerS16(lVar7 + 10);
    if (iVar9 != 0) {
      partproc::DeletePart(lVar7);
    }
    fVar4 = (part->pos).y;
    fVar5 = (part->pos).x;
    fVar3 = fVar4 - g_heroPosition.y;
    fVar6 = fVar5 - g_heroPosition.x;
    if ((SQRT(fVar6 * fVar6 + fVar3 * fVar3) < 0.3) &&
       (fVar3 = (part->pos).z, g_heroPosition.z < fVar3 + 1.2)) {
      fVar5 = g_heroPosition.x - fVar5;
      fVar4 = g_heroPosition.y - fVar4;
      fVar3 = g_heroPosition.z - fVar3;
      local_44 = g_heroPosition.w;
      local_4c = 0.0;
      fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
      local_50 = local_4c;
      if (SQRT(fVar3) != 0.0) {
        local_4c = 1.0 / SQRT(fVar3);
        local_4c = -(fVar3 * local_4c * local_4c - 1.0) * local_4c * 0.5 + local_4c;
        local_4c = -(fVar3 * local_4c * local_4c - 1.0) * local_4c * 0.5 + local_4c;
        local_4c = -(fVar3 * local_4c * local_4c - 1.0) * local_4c * 0.5 + local_4c;
        local_50 = fVar5 * local_4c;
        local_4c = fVar4 * local_4c;
      }
      local_48 = 0x3f800000;
      mobyutil::CollDamageMobyDirect
                ((float)part->update[7],g_heroMobyPtr,(MobyInstance *)part->update[6],1,in_r6,
                 &(part->pos).x,&local_50);
    }
  }
  else if (bVar1 < 3) {
    fVar4 = (float)part->update[1];
    fVar5 = (float)part->update[2];
    uVar2 = *(undefined1 *)((int)part->update + 0x15);
    (part->pos).x = (part->pos).x + (float)part->update[0];
    (part->pos).y = (part->pos).y + fVar4;
    (part->pos).z = (part->pos).z + fVar5;
    dVar11 = (double)fastfunc::FastIntToDouble(uVar2);
    dVar12 = (double)fastfunc::FastIntToDouble(part->timer);
    dVar11 = (double)(float)((double)(float)(dVar11 - dVar12) / dVar11);
    uVar8 = fastfunc::FastLerpColor
                      (dVar11,(uint)*(byte *)((int)part->update + 0x16) << 0x18 | 0x4060,
                       &DAT_008fafff);
    part->color = uVar8;
    if (0.6000000238418579 <= dVar11) {
      fVar4 = -(DAT_0071f408 * 0.08 * 210000.0 - part->scale);
    }
    else {
      fVar4 = DAT_0071f408 * 0.043 * 210000.0 + part->scale;
    }
    part->scale = fVar4;
    iVar9 = DAT_00a528ec;
    uVar8 = rand();
    part->tex = *(byte *)(iVar9 + (uVar8 & 7));
    uVar8 = (int)part - (int)PartInstances;
    if ((((int)uVar8 >> 6) + (uint)((int)uVar8 < 0 && (uVar8 & 0x3f) != 0) & 1) == 0) {
      cVar10 = part->rot + -1;
    }
    else {
      cVar10 = part->rot + '\x01';
    }
    part->rot = cVar10;
    iVar9 = fastfunc::FastDecTimerS16(lVar7 + 10);
    if (iVar9 != 0) {
      partproc::DeletePart(lVar7);
    }
  }
  return;
}



//==== 00130ed0  ns=partupd  size=0x190
// sig: undefined SpawnPart_59(void)
// callers(13): 001833f0 mobyupdate_helpers::M1016_001833f0; 00194678 mobyupdate_helpers::M1038_00194678; 001d5168 mobyupdate_helpers::M1120_001d5168; 001d9310 mobyupdate_helpers::M1134_001d9310; 0023dcf8 mobyupdate_helpers::M1290_0023dcf8; 0023f9f8 mobyupdate_helpers::M1297_0023f9f8; 00255f30 mobyupdate_helpers::M1354_00255f30; 00267348 mobyupdate_helpers::M1388_00267348; 0027b3b0 mobyupdate_helpers::M1428_0027b3b0; 002b9d00 mobyupdate_helpers::M18_002b9d00; 003994d8 mobyupdate_helpers::M470_003994d8; 0044b130 mobyupdate_helpers::M750_0044b130; 00466640 mobyupdate_helpers::M806_00466640
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 59 */

PartInstance *
partupd::SpawnPart_59
          (double param_1,float *param_2,uint param_3,char param_4,longlong param_5,int param_6,
          short param_7,undefined8 param_8,int param_9)

{
  byte bVar1;
  float fVar2;
  byte *pbVar3;
  PartInstance *pPVar4;
  char cVar5;
  
  pPVar4 = partproc::CreatePart(0x3b);
  if (pPVar4 != (PartInstance *)0x0) {
    pPVar4->update[4] = param_9;
    if (param_9 == 1) {
      pPVar4->update[0] = (int)(*param_2 - g_heroPosition.x);
      pPVar4->update[1] = (int)(param_2[1] - g_heroPosition.y);
      pPVar4->update[2] = (int)(param_2[2] - g_heroPosition.z);
      pPVar4->update[3] = (int)param_2[3];
    }
    (pPVar4->pos).x = *param_2;
    (pPVar4->pos).y = param_2[1];
    (pPVar4->pos).z = param_2[2];
    fVar2 = param_2[3];
    pPVar4->color = param_3;
    (pPVar4->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
    pPVar4->drawDist = cVar5 + ' ';
    pPVar4->type = 0;
    pPVar4->gsAlpha = ((byte)((LZCOUNT(-param_6) << 0x3a) >> 0x3f) & 4) + 0x44;
    pPVar4->rot = param_4;
    pbVar3 = *(byte **)((int)&partproc::g_PartTexFrames + (int)(param_5 << 2));
    pPVar4->scale = (float)(param_1 * 210000.0);
    bVar1 = *pbVar3;
    pPVar4->timer = param_7;
    pPVar4->tex = bVar1;
  }
  return pPVar4;
}



//==== 00131060  ns=partupd  size=0x94
// sig: undefined UpdatePart_59(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 59 */

void partupd::UpdatePart_59(PartInstance *part)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (part->update[4] == 1) {
    fVar1 = (float)part->update[1];
    fVar2 = (float)part->update[2];
    (part->pos).x = g_heroPosition.x + (float)part->update[0];
    (part->pos).y = g_heroPosition.y + fVar1;
    (part->pos).z = g_heroPosition.z + fVar2;
    (part->pos).w = g_heroPosition.w;
  }
  iVar3 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar3 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00131100  ns=partupd  size=0x200
// sig: undefined SpawnPart_60(void)
// callers(14): 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 00194678 mobyupdate_helpers::M1038_00194678; 001958b0 mobyupdate_helpers::M1129_001958b0; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001d9110 mobyupdate_helpers::M1134_001d9110; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 0025bcf8 mobyupdate_unsorted::UpdateMoby_1368; 002d8058 mobyupdate_unsorted::UpdateMoby_{191_758_803_1429}; 003e70d8 mobyupdate_helpers::M624_003e70d8; 0040ac50 mobyupdate_unsorted::UpdateMoby_669; 00453bc8 mobyupdate_unsorted::UpdateMoby_77; 00466468 mobyupdate_helpers::M806_00466468; 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 60 */

PartInstance *
partupd::SpawnPart_60
          (double param_1,float *param_2,int *param_3,uint param_4,undefined8 param_5,ushort param_6
          ,char param_7,int param_8)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  PartInstance *pPVar7;
  char cVar8;
  
  uVar5 = (int)*param_2 >> 0x1f;
  iVar6 = (uVar5 >> 1 ^ (uint)*param_2) - uVar5;
  if ((((iVar6 < 0x40000000) || (0x447f4000 < iVar6)) ||
      (uVar5 = (int)param_2[1] >> 0x1f, iVar6 = (uVar5 >> 1 ^ (uint)param_2[1]) - uVar5,
      0x447f4000 < iVar6 || iVar6 < 0x40000000)) ||
     ((uVar5 = (int)param_2[2] >> 0x1f, iVar6 = (uVar5 >> 1 ^ (uint)param_2[2]) - uVar5,
      iVar6 < 0x40000000 || (0x447f4000 < iVar6)))) {
    pPVar7 = (PartInstance *)0x0;
  }
  else {
    pPVar7 = partproc::CreatePart(0x3c);
    if (pPVar7 != (PartInstance *)0x0) {
      fVar2 = *param_2;
      (pPVar7->pos).x = fVar2;
      fVar3 = param_2[1];
      (pPVar7->pos).y = fVar3;
      fVar4 = param_2[2];
      (pPVar7->pos).z = fVar4;
      (pPVar7->pos).w = param_2[3];
      pPVar7->update[0] = *param_3;
      pPVar7->update[1] = param_3[1];
      pPVar7->update[2] = param_3[2];
      iVar6 = param_3[3];
      pPVar7->update[7] = param_8;
      pPVar7->update[3] = iVar6;
      if (param_8 == 1) {
        pPVar7->update[4] = (int)(fVar2 - g_heroPosition.x);
        pPVar7->update[5] = (int)(fVar3 - g_heroPosition.y);
        pPVar7->update[6] = (int)(fVar4 - g_heroPosition.z);
      }
      pPVar7->color = param_4;
      cVar8 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
      pPVar7->drawDist = cVar8 + ' ';
      pPVar7->gsAlpha = 0x48;
      pPVar7->type = 0;
      pPVar7->rot = param_7;
      pPVar7->scale = (float)(param_1 * 210000.0);
      bVar1 = *DAT_00a528d8;
      pPVar7->timer = param_6 & 0xff;
      pPVar7->tex = bVar1;
    }
  }
  return pPVar7;
}



//==== 00131308  ns=partupd  size=0x1a8
// sig: undefined UpdatePart_60(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 60 */

void partupd::UpdatePart_60(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = (longlong)(int)part;
  if (part->update[7] == 1) {
    fVar1 = g_heroPosition.x + (float)part->update[4] + (float)part->update[0];
    fVar2 = g_heroPosition.y + (float)part->update[5] + (float)part->update[1];
    fVar3 = g_heroPosition.z + (float)part->update[6] + (float)part->update[2];
    fVar5 = fVar2 - g_heroPosition.y;
    fVar4 = fVar3 - g_heroPosition.z;
    part->update[4] = (int)(fVar1 - g_heroPosition.x);
    part->update[5] = (int)fVar5;
    part->update[6] = (int)fVar4;
  }
  else {
    fVar1 = (part->pos).x + (float)part->update[0];
    fVar2 = (part->pos).y + (float)part->update[1];
    fVar3 = (part->pos).z + (float)part->update[2];
  }
  (part->pos).x = fVar1;
  (part->pos).y = fVar2;
  (part->pos).z = fVar3;
  if ((((2.0 <= fVar1) && (fVar1 <= 1021.0)) && (2.0 <= fVar2)) &&
     (((fVar2 <= 1021.0 && (2.0 <= fVar3)) && (fVar3 <= 1021.0)))) {
    iVar7 = fastfunc::FastDecTimerS16(lVar6 + 10);
    if (iVar7 != 0) {
      partproc::DeletePart(lVar6);
      return;
    }
    uVar8 = part->color;
    dVar9 = (double)fastfunc::FastIntToDouble((longlong)part->timer + -1);
    dVar10 = (double)fastfunc::FastIntToDouble(part->timer);
    uVar8 = fastfunc::FastLerpColor((double)(float)(dVar9 / dVar10),uVar8 & 0xffffff,uVar8);
    part->color = uVar8;
    return;
  }
  partproc::DeletePart(lVar6);
  return;
}



//==== 001314c8  ns=partupd  size=0x23c
// sig: undefined SpawnPart_61(void)
// callers(3): 001a2090 mobyupdate_unsorted::UpdateMoby_1049; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 004bff60 mobyupdate_unsorted::UpdateMoby_934
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 61 */

longlong partupd::SpawnPart_61(double param_1,double param_2,int param_3,undefined2 param_4)

{
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  PartInstance *pPVar6;
  int iVar7;
  char cVar8;
  undefined8 in_LR;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  pPVar6 = partproc::CreatePart(0x3d);
  if (pPVar6 != (PartInstance *)0x0) {
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    pPVar6->update[0] = param_3;
    auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar14 = loadVectorLeftIndexed(in_LR,0x1314b0);
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar14,10,(longlong)(int)pPVar6);
    pPVar6->timer = sVar3;
    dVar13 = 0.0;
    pPVar6->update[1] = 0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pPVar6->update[2] = (int)(float)dVar9;
    iVar7 = rand();
    pPVar6->update[5] = (int)(float)param_2;
    *(ushort *)(pPVar6->update + 3) = (ushort)iVar7 & 0xf;
    iVar7 = rand();
    pPVar6->rot = (char)iVar7;
    pPVar6->color = (uint)&DAT_007f7f7f;
    cVar8 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar6->type = 0;
    pPVar6->drawDist = cVar8 + '@';
    pPVar6->gsAlpha = 0x48;
    pPVar6->scale = (float)param_1;
    pPVar6->tex = *(byte *)(DAT_00a528f8 + *(short *)(pPVar6->update + 3));
    fVar1 = DAT_0071f408;
    *(undefined2 *)((int)pPVar6->update + 0xe) = param_4;
    pPVar6->update[4] = (int)(fVar1 * 0.015);
    cVar8 = fastfunc::FastDoubleToInt((double)((float)pPVar6->update[2] * 255.0));
    pPVar6->rot = cVar8;
    mobyfunc::GetBonePosition
              (pPVar6->update[0],*(undefined2 *)((int)pPVar6->update + 0xe),&local_50);
    fVar4 = GameCamera.posY - local_4c;
    fVar2 = (float)((double)GameCamera.posX - (double)local_50);
    fVar5 = GameCamera.posZ - local_48;
    dVar12 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
    fVar1 = (float)((double)(float)pPVar6->update[5] / dVar12);
    dVar9 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    dVar10 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar10 = (double)(fVar4 * fVar1);
    }
    dVar11 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar11 = (double)(fVar5 * fVar1);
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar10 = (double)(fVar4 * fVar1);
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar11 = (double)(fVar5 * fVar1);
    }
    (pPVar6->pos).x = (float)((double)local_50 + dVar9);
    (pPVar6->pos).y = (float)((double)local_4c + dVar10);
    (pPVar6->pos).z = (float)((double)local_48 + dVar11);
    (pPVar6->pos).w = local_44;
  }
  return (longlong)(int)pPVar6;
}



//==== 00131730  ns=partupd  size=0x384
// sig: undefined UpdatePart_61(PartInstance * part)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 61 */

void partupd::UpdatePart_61(PartInstance *part)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int iVar12;
  char cVar13;
  ulonglong uVar11;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  lVar10 = (longlong)(int)part;
  if (part != (PartInstance *)0x0) {
    iVar12 = fastfunc::FastDecTimerS16(lVar10 + 10);
    if (((iVar12 == 0) && (part->update[0] != 0)) && (*(byte *)(part->update[0] + 0x20) < 0x80)) {
      uVar3 = (int)part->scale >> 0x1f;
      *(ushort *)(part->update + 3) = *(short *)(part->update + 3) + 1U & 0xf;
      iVar12 = (uVar3 >> 1 ^ (uint)part->scale) - uVar3;
      if (iVar12 < 0x481bdc00) {
        fVar1 = DAT_0071f408 * 3989.9998 + part->scale;
        part->scale = fVar1;
        if (159600.0 < fVar1) {
          part->scale = 159600.0;
        }
      }
      else if ((0x481bdc00 < iVar12) &&
              (fVar1 = -(DAT_0071f408 * 15959.999 - part->scale), part->scale = fVar1,
              fVar1 < 159600.0)) {
        part->scale = 159600.0;
      }
      fVar1 = DAT_0071f408 * 0.001 + (float)part->update[2];
      part->update[2] = (int)fVar1;
      cVar13 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
      part->rot = cVar13;
      uVar3 = (int)part->scale >> 0x1f;
      fVar1 = (float)part->update[1];
      iVar12 = (uVar3 >> 1 ^ (uint)part->scale) - uVar3;
      part->tex = *(byte *)(DAT_00a528f8 + *(short *)(part->update + 3));
      if ((iVar12 < 0x481bdc01) || (fVar2 = (float)part->update[4], 0 < part->update[4])) {
        fVar2 = (float)part->update[4];
        fVar1 = fVar1 + fVar2;
        part->update[1] = (int)fVar1;
      }
      if (iVar12 < 0x481bdc01) {
        if (fVar1 <= 0.3) {
          if (fVar1 < 0.0) {
            partproc::DeletePart(lVar10);
            return;
          }
        }
        else {
          fVar1 = fVar1 + -fVar2;
          part->update[4] = (int)-fVar2;
          part->update[1] = (int)fVar1;
        }
      }
      else if (fVar1 <= 0.15) {
        if (fVar1 < 0.0) {
          partproc::DeletePart(lVar10);
          return;
        }
      }
      else {
        fVar1 = fVar1 + -fVar2;
        part->update[4] = (int)-fVar2;
        part->update[1] = (int)fVar1;
      }
      uVar3 = part->color;
      uVar11 = fastfunc::FastDoubleToInt((double)(fVar1 * 256.0));
      fVar1 = (float)part->update[5];
      part->color = (uint)((uVar11 & 0xffffffff) << 0x18) | uVar3 & 0xffffff;
      iVar12 = part->update[0];
      part->update[5] = (int)(DAT_0071f408 * 0.175 * (1.0 - fVar1) + fVar1);
      mobyfunc::GetBonePosition(iVar12,*(undefined2 *)((int)part->update + 0xe),&local_30);
      fVar4 = GameCamera.posY - local_2c;
      fVar6 = GameCamera.posX - local_30;
      fVar8 = GameCamera.posZ - local_28;
      fVar1 = (float)part->update[5];
      fVar2 = 0.0;
      (part->pos).w = local_24;
      fVar9 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4);
      fVar1 = fVar1 / fVar9;
      fVar7 = fVar2;
      if (0.0 - fVar9 < 0.0) {
        fVar7 = fVar8 * fVar1;
      }
      fVar5 = fVar2;
      if (0.0 - fVar9 < 0.0) {
        fVar5 = fVar4 * fVar1;
      }
      if (0.0 - fVar9 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar7 = fVar8 * fVar1;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar5 = fVar4 * fVar1;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      (part->pos).z = local_28 + fVar7;
      (part->pos).y = local_2c + fVar5;
      (part->pos).x = local_30 + fVar2;
    }
    else {
      partproc::DeletePart(lVar10);
    }
  }
  return;
}



//==== 00131ac0  ns=partupd  size=0x138
// sig: undefined SpawnPart_62(void)
// callers(1): 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(4): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 62 */

PartInstance * partupd::SpawnPart_62(float *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  undefined2 uVar3;
  double dVar5;
  
  pPVar2 = partproc::CreatePart(0x3e);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_1;
    (pPVar2->pos).y = param_1[1];
    (pPVar2->pos).z = param_1[2];
    fVar1 = param_1[3];
    pPVar2->color = 0x7f7f4040;
    (pPVar2->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 0;
    pPVar2->scale = 30000.0;
    cVar4 = mobyutil::MB_randInt(0xff);
    pPVar2->rot = cVar4;
    *(short *)((int)pPVar2->update + 2) = (short)param_3;
    pPVar2->tex = *(byte *)(DAT_00a528fc + ((uint)(param_3 + -2 >> 0x3f) & (uint)param_3));
    dVar5 = (double)fastfunc::FastIntToDouble(param_2);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)(127.0 / dVar5));
    *(undefined2 *)pPVar2->update = uVar3;
    pPVar2->timer = (short)param_2;
  }
  return pPVar2;
}



//==== 00131bf8  ns=partupd  size=0x98
// sig: undefined UpdatePart_62(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 62 */

void partupd::UpdatePart_62(PartInstance *part)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  sVar3 = (short)part->update[0];
  uVar5 = part->color;
  sVar4 = *(short *)part->update;
  if (sVar3 != 1) {
    if (sVar3 == 2) {
      iVar6 = part->update[1];
      fVar1 = (float)part->update[5];
      fVar2 = (float)part->update[6];
      (part->pos).x = *(float *)(iVar6 + 0x10) + (float)part->update[4];
      (part->pos).y = *(float *)(iVar6 + 0x14) + fVar1;
      (part->pos).z = *(float *)(iVar6 + 0x18) + fVar2;
    }
    uVar7 = (longlong)((int)uVar5 >> 0x18) - (longlong)sVar4;
    if ((int)uVar7 < 1) {
      partproc::DeletePart();
    }
    else {
      part->color = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar5 & 0xffffff;
    }
  }
  return;
}



//==== 00131c98  ns=partupd  size=0x140
// sig: undefined SpawnPart_63(void)
// callers(0): 
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 63 */

PartInstance *
partupd::SpawnPart_63
          (double param_1,float *param_2,uint param_3,char param_4,longlong param_5,int param_6,
          short param_7)

{
  byte bVar1;
  float fVar2;
  byte *pbVar3;
  PartInstance *pPVar4;
  char cVar5;
  
  pPVar4 = partproc::CreatePart(0x3f);
  if (pPVar4 != (PartInstance *)0x0) {
    (pPVar4->pos).x = *param_2;
    (pPVar4->pos).y = param_2[1];
    (pPVar4->pos).z = param_2[2];
    fVar2 = param_2[3];
    pPVar4->color = param_3;
    (pPVar4->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
    pPVar4->drawDist = cVar5 + ' ';
    pPVar4->type = 0;
    pPVar4->gsAlpha = ((byte)((LZCOUNT(-param_6) << 0x3a) >> 0x3f) & 4) + 0x44;
    pPVar4->rot = param_4;
    pbVar3 = *(byte **)((int)&partproc::g_PartTexFrames + (int)(param_5 << 2));
    pPVar4->scale = (float)(param_1 * 210000.0);
    bVar1 = *pbVar3;
    pPVar4->timer = param_7;
    pPVar4->tex = bVar1;
  }
  return pPVar4;
}



//==== 00131dd8  ns=partupd  size=0x48
// sig: undefined UpdatePart_63(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 63 */

void partupd::UpdatePart_63(PartInstance *part)

{
  int iVar1;
  
  iVar1 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar1 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00131e50  ns=partupd  size=0x1e4
// sig: undefined SpawnPart_64(void)
// callers(3): 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0021b170 mobyupdate_unsorted::UpdateMoby_1240; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 64 */

PartInstance *
partupd::SpawnPart_64
          (double param_1,double param_2,double param_3,float *param_4,int *param_5,short param_6,
          undefined8 param_7,undefined8 param_8,uint param_9,int param_10,int param_11)

{
  int iVar1;
  PartInstance *pPVar2;
  char cVar3;
  double dVar4;
  
  pPVar2 = partproc::CreatePart(0x40);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_4;
    (pPVar2->pos).y = param_4[1];
    (pPVar2->pos).z = param_4[2];
    (pPVar2->pos).w = param_4[3];
    if (80.0 <= SQRT((g_heroPosition.x - *param_4) * (g_heroPosition.x - *param_4) +
                     (g_heroPosition.y - param_4[1]) * (g_heroPosition.y - param_4[1]))) {
      cVar3 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
      cVar3 = cVar3 + ' ';
    }
    else {
      cVar3 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
      cVar3 = cVar3 + '0';
    }
    pPVar2->drawDist = cVar3;
    pPVar2->type = 0;
    pPVar2->gsAlpha = ((byte)((LZCOUNT(-param_11) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
    pPVar2->tex = *(byte *)(DAT_00a52904 + 1);
    pPVar2->color = param_9;
    pPVar2->scale = (float)(param_1 * 210000.0);
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.0,255.0);
    pPVar2->timer = param_6;
    pPVar2->rot = (char)(longlong)dVar4;
    pPVar2->update[0] = *param_5;
    pPVar2->update[1] = param_5[1];
    pPVar2->update[2] = param_5[2];
    iVar1 = param_5[3];
    pPVar2->update[4] = (int)(float)param_2;
    pPVar2->update[3] = iVar1;
    pPVar2->update[5] = (int)(float)param_3;
    pPVar2->update[6] = param_10;
  }
  return pPVar2;
}



//==== 00132090  ns=partupd  size=0x5a8
// sig: undefined UpdatePart_64(PartInstance * part)
// callers(0): 
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 00124e10 partupd::SpawnPart_15; 00125350 partupd::SpawnPart_16; 0012aee8 partupd::SpawnPart_45; 004fffb4 fastfunc::FastDecTimerS16

/* Part 64 */

void partupd::UpdatePart_64(PartInstance *part)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar16;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_r7;
  longlong lVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 local_90 [32];
  
  lVar11 = (longlong)(int)part;
  lVar17 = lVar11 + 0x20;
  iVar16 = fastfunc::FastDecTimerS16(lVar11 + 10);
  fVar2 = (part->pos).x;
  fVar3 = (float)part->update[0];
  fVar4 = (part->pos).y;
  fVar5 = (float)part->update[1];
  fVar6 = (float)part->update[2];
  fVar7 = (float)part->update[4];
  uVar8 = part->color;
  if (iVar16 != 0) {
    fVar6 = fVar6 - (float)part->update[5];
    part->update[2] = (int)fVar6;
  }
  fVar6 = (part->pos).z + fVar6;
  part->rot = part->rot + '\x02';
  (part->pos).z = fVar6;
  (part->pos).x = fVar2 + fVar3;
  (part->pos).y = fVar4 + fVar5;
  if (fVar6 < fVar7) {
    iVar16 = mobyutil::MB_randInt(DAT_0072973c + -1);
    dVar24 = -1.0;
    dVar25 = 60.5;
    if (iVar16 == 0) {
      (part->pos).z = (float)part->update[4];
      dVar22 = 1.0;
      dVar20 = 3.5;
      dVar18 = (double)mobyutil::MB_randRangeFloat(1.0,3.5);
      part->update[0] = (int)(float)((double)(float)part->update[0] * dVar18);
      dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar20);
      part->update[1] = (int)(float)((double)(float)part->update[1] * dVar18);
      dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar24,-1.5);
      fVar2 = part->scale;
      uVar9 = part->color;
      iVar16 = part->update[6];
      part->update[2] = (int)(float)((double)(float)part->update[2] * dVar18);
      dVar18 = (double)(fVar2 * 0.5);
      uVar12 = mobyutil::MB_randRange
                         ((int)((double)animationSpeed * dVar25),
                          (int)((double)animationSpeed * 120.5));
      SpawnPart_15(dVar18,lVar11 + 0x10,lVar17,uVar9,iVar16,in_r7,uVar12,0,part->tex);
    }
    else {
      (part->pos).z = (float)part->update[4];
      dVar23 = -5.0;
      dVar21 = 5.0;
      dVar22 = (double)(float)part->update[0];
      dVar18 = (double)mobyutil::MB_randRangeFloat(-5.0,5.0);
      dVar20 = (double)(float)part->update[1];
      part->update[0] = (int)(float)(dVar18 * (double)mobyutil::g_FrameTime + dVar22);
      dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar21);
      part->update[1] = (int)(float)(dVar18 * (double)mobyutil::g_FrameTime + dVar20);
      dVar18 = (double)mobyutil::MB_randRangeFloat(-0.5,(float)dVar24);
      fVar2 = part->scale;
      uVar9 = part->color;
      iVar10 = part->update[6];
      part->update[2] = (int)(float)((double)(float)part->update[2] * dVar18);
      dVar18 = (double)(float)((double)fVar2 * 0.25);
      iVar16 = (int)((double)animationSpeed * 30.5);
      iVar1 = (int)((double)animationSpeed * dVar25);
      uVar12 = mobyutil::MB_randRange(iVar16,(double)fVar2,iVar1,0x3fd0000000000000,iVar16,iVar1);
      SpawnPart_15(dVar18,lVar11 + 0x10,lVar17,uVar9,iVar10,in_r7,uVar12,0,part->tex);
    }
    if (Level == Orxon) {
      iVar16 = mobyutil::MB_randInt(0x13);
      if (iVar16 == 0) {
        uVar12 = 0x3fa99999a0000000;
        uVar13 = mobyutil::MB_randInt(0x3fa99999a0000000,6);
        uVar13 = (ulonglong)uVar8 & 0xffff | (uVar13 & 0xff) * 0x1000000 + 0x34000000;
        SpawnPart_45(uVar12,0x40c4820000000000,local_90,uVar13,0,(uint)uVar13 | uVar8 & 0xff0000);
      }
      iVar16 = mobyutil::MB_randInt(9);
      if (iVar16 == 0) {
        dVar18 = 1.0;
        dVar25 = (double)mobyutil::MB_randRangeFloat(0.25,1.0);
        uVar12 = 0x7f000000;
        mobyutil::TweenColor((float)dVar25,0x7f000000,uVar8 & 0xffffff | 0x7f000000);
        dVar25 = (double)mobyutil::MB_randRangeFloat(0.5,(float)dVar18);
        uVar14 = 0;
        mobyutil::TweenColor((float)dVar25,0,0x5f00);
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar18);
        part->update[0] = (int)(float)dVar25;
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar18);
        part->update[1] = (int)(float)dVar24;
        dVar20 = 0.0;
        part->update[2] = 0;
        dVar25 = 3.0;
        dVar24 = (double)mobyutil::MB_randRangeFloat(1.5,3.0);
        fVar3 = (float)part->update[1];
        fVar4 = (float)part->update[0];
        fVar5 = (float)part->update[2];
        dVar18 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar2 = (float)((double)(float)(dVar24 * (double)mobyutil::g_FrameTime) / dVar18);
        dVar24 = dVar20;
        if (dVar20 - dVar18 < 0.0) {
          dVar24 = (double)(fVar4 * fVar2);
        }
        dVar22 = dVar20;
        if (dVar20 - dVar18 < 0.0) {
          dVar22 = (double)(fVar3 * fVar2);
        }
        dVar21 = dVar20;
        if (dVar20 - dVar18 < 0.0) {
          dVar21 = (double)(fVar5 * fVar2);
        }
        if (dVar18 - dVar20 < 0.0) {
          dVar24 = (double)(fVar4 * fVar2);
        }
        if (dVar18 - dVar20 < 0.0) {
          dVar22 = (double)(fVar3 * fVar2);
        }
        if (dVar18 - dVar20 < 0.0) {
          dVar21 = (double)(fVar5 * fVar2);
        }
        part->update[0] = (int)(float)dVar24;
        part->update[1] = (int)(float)dVar22;
        part->update[2] = (int)(float)dVar21;
        part->update[2] = (int)(float)((double)mobyutil::g_FrameTime * dVar25);
        uVar19 = mobyutil::MB_randRangeFloat(420000.0,630000.0);
        uVar15 = mobyutil::MB_randRange((int)(animationSpeed * 90.5),(int)(animationSpeed * 150.5));
        SpawnPart_16(uVar19,local_90,lVar17,uVar12,uVar14,in_r7,uVar15,3);
      }
    }
    partproc::DeletePart(lVar11);
  }
  return;
}



//==== 00132650  ns=partupd  size=0x160
// sig: undefined SpawnPart_65(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 65 */

void partupd::SpawnPart_65(float *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  PartInstance *pPVar3;
  uint uVar4;
  char cVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pPVar3 = partproc::CreatePart(0x41);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_1;
    (pPVar3->pos).y = param_1[1];
    (pPVar3->pos).z = param_1[2];
    (pPVar3->pos).w = param_1[3];
    uVar4 = mobyutil::Float_To_RGBA(1.0,1.0,1.0,0.6);
    pPVar3->color = uVar4;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    dVar6 = (double)mobyutil::MB_randRangeFloat(20000.0,120000.0);
    pPVar3->rot = '\0';
    pPVar3->scale = (float)dVar6;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    bVar1 = *DAT_00a52868;
    pPVar3->update[4] = 0x3f800000;
    pPVar3->tex = bVar1;
    pPVar3->update[5] = 0x3f800000;
    pPVar3->update[6] = 0x3f800000;
    pPVar3->update[7] = 0x3f19999a;
    auVar7 = loadVectorLeftIndexed(0x14,0x132638);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar7,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[0] = *param_2;
    pPVar3->update[1] = param_2[1];
    pPVar3->update[2] = param_2[2];
    pPVar3->update[3] = param_2[3];
  }
  return;
}



//==== 001327d0  ns=partupd  size=0x32c
// sig: undefined UpdatePart_65(PartInstance * part)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 0010a550 mobyutil::Float_To_RGBA; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 65 */

void partupd::UpdatePart_65(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_20 [16];
  
  lVar7 = (longlong)(int)part;
  if (part != (PartInstance *)0x0) {
    fVar5 = (part->pos).x + (float)part->update[0];
    fVar1 = (part->pos).z;
    fVar2 = (part->pos).w;
    iVar8 = part->update[1];
    fVar6 = (part->pos).y + (float)part->update[1];
    iVar4 = part->update[2];
    fVar3 = (float)part->update[2];
    part->scale = DAT_0071f408 * -100.0 + part->scale;
    fVar1 = fVar1 + fVar3;
    dVar14 = 0.0;
    if ((part->update[0] != 0 || iVar8 != 0) || (iVar4 != 0)) {
      iVar8 = collproc::CollLine(lVar7 + 0x10,local_20,2,lVar7,0);
      if (iVar8 == 0) {
        (part->pos).x = fVar5;
        iVar8 = part->update[3];
        (part->pos).y = fVar6;
        fVar3 = (float)part->update[3];
        (part->pos).z = fVar1;
        (part->pos).w = fVar2;
        if (iVar8 == 0) {
          fVar2 = (float)part->update[2];
          fVar3 = DAT_0071f40c * -0.0063;
        }
        else {
          fVar2 = (float)part->update[2];
        }
        part->update[2] = (int)(fVar2 + fVar3);
      }
      else {
        (part->pos).x = CollOutput.ip.x;
        (part->pos).y = CollOutput.ip.y;
        (part->pos).z = CollOutput.ip.z;
        fVar2 = CollOutput.ip.w;
        part->update[3] = 0;
        (part->pos).w = fVar2;
        part->update[2] = 0;
        part->update[1] = 0;
        part->update[0] = 0;
        part->scale = part->scale * 2.0;
      }
    }
    if (0 < part->update[7]) {
      iVar8 = fastfunc::FastDecTimerS16(lVar7 + 10);
      if ((((iVar8 == 0) && (-1 < (int)part->scale)) &&
          (0x3c23d709 <
           (int)(((uint)((int)fVar5 >> 0x1f) >> 1 ^ (uint)fVar5) - ((int)fVar5 >> 0x1f)))) &&
         ((0x3c23d709 <
           (int)(((uint)((int)fVar6 >> 0x1f) >> 1 ^ (uint)fVar6) - ((int)fVar6 >> 0x1f)) &&
          (0x3c23d709 <
           (int)(((uint)((int)fVar1 >> 0x1f) >> 1 ^ (uint)fVar1) - ((int)fVar1 >> 0x1f)))))) {
        fVar1 = DAT_0071f408 * -0.01 + (float)part->update[4];
        dVar11 = (double)fVar1;
        part->update[4] = (int)fVar1;
        if (dVar11 < dVar14) {
          part->update[4] = 0;
          dVar11 = dVar14;
        }
        fVar1 = DAT_0071f408 * -0.03001 + (float)part->update[5];
        dVar10 = (double)fVar1;
        part->update[5] = (int)fVar1;
        if (dVar10 < dVar14) {
          part->update[5] = 0;
          dVar10 = dVar14;
        }
        fVar1 = DAT_0071f408 * -0.05 + (float)part->update[6];
        dVar13 = (double)fVar1;
        part->update[6] = (int)fVar1;
        if (dVar13 < dVar14) {
          part->update[6] = 0;
          dVar13 = dVar14;
        }
        dVar12 = (double)(float)part->update[7];
        if (part->update[7] < 0) {
          part->update[7] = 0;
          dVar12 = dVar14;
        }
        uVar9 = mobyutil::Float_To_RGBA((float)dVar11,(float)dVar10,(float)dVar13,(float)dVar12);
        part->color = uVar9;
        part->rot = part->rot + -1;
        return;
      }
    }
    partproc::DeletePart(lVar7);
  }
  return;
}



//==== 00132afc  ns=partupd  size=0xac
// sig: undefined UpdatePart_66(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 66 */

void partupd::UpdatePart_66(PartInstance *part)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  
  fVar2 = (float)part->update[1];
  fVar3 = (float)part->update[2];
  fVar4 = part->scale;
  fVar5 = (float)part->update[4];
  cVar1 = part->rot;
  sVar6 = part->timer;
  (part->pos).x = (part->pos).x + (float)part->update[0];
  uVar7 = part->color;
  (part->pos).y = (part->pos).y + fVar2;
  part->rot = cVar1 + '\x01';
  (part->pos).z = (part->pos).z + fVar3;
  part->timer = sVar6 + -1;
  part->scale = fVar4 + fVar5;
  if (sVar6 == 1) {
    uVar7 = uVar7 - 0x1000000;
    part->timer = 2;
    part->color = uVar7;
  }
  if ((uVar7 & 0xff000000) == 0) {
    partproc::DeletePart();
  }
  return;
}



//==== 00132bb0  ns=partupd  size=0x1a8
// sig: undefined SpawnPart_67(void)
// callers(2): 00132d90 partupd::UpdatePart_67; 001dbf60 mobyupdate_unsorted::UpdateMoby_1139
// callees(4): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 67 */

PartInstance *
partupd::SpawnPart_67
          (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,int param_8,uint param_9,int *param_10)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  undefined2 uVar3;
  byte bVar5;
  double dVar6;
  
  pPVar2 = partproc::CreatePart(0x43);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_4;
    (pPVar2->pos).y = param_4[1];
    (pPVar2->pos).z = param_4[2];
    fVar1 = param_4[3];
    pPVar2->update[3] = param_3;
    (pPVar2->pos).w = fVar1;
    pPVar2->update[4] = (int)(float)param_1;
    pPVar2->update[5] = (int)(float)param_2;
    pPVar2->color = param_9 | 0x409b9b00;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 0;
    pPVar2->scale = 52500.0;
    cVar4 = mobyutil::MB_randInt(0xff);
    pPVar2->rot = cVar4;
    *(short *)(pPVar2->update + 7) = (short)param_8;
    *(undefined2 *)(pPVar2->update + 6) = 0;
    if (param_8 == 0) {
      bVar5 = *DAT_00a52910;
    }
    else {
      bVar5 = DAT_00a52910[1];
    }
    pPVar2->tex = bVar5;
    if (param_8 == 0) {
      dVar6 = (double)fastfunc::FastIntToDouble(param_7);
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(127.0 / dVar6));
      *(undefined2 *)((int)pPVar2->update + 0x1a) = uVar3;
    }
    if (param_10 != (int *)0x0) {
      pPVar2->update[0] = *param_10;
      pPVar2->update[1] = param_10[1];
      pPVar2->update[2] = param_10[2];
    }
    pPVar2->timer = (short)param_7;
  }
  return pPVar2;
}



//==== 00132d90  ns=partupd  size=0x4ec
// sig: undefined UpdatePart_67(PartInstance * part)
// callers(0): 
// callees(7): 00104b38 mobyutil::DecAlpha; 0011e6ec partproc::DeletePart; 00132bb0 partupd::SpawnPart_67; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Part 67 */

void partupd::UpdatePart_67(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  int iVar21;
  undefined8 in_r6;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  lVar20 = (longlong)(int)part;
  if (*(short *)(part->update + 7) == 0) {
    iVar21 = mobyutil::DecAlpha(lVar20 + 4,*(undefined2 *)((int)part->update + 0x1a));
    if (iVar21 == 0) {
      if (part->update[3] != 0) {
        dVar27 = (double)(float)part->update[0];
        dVar25 = (double)(float)part->update[1];
        dVar24 = (double)(float)part->update[2];
        dVar22 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
        iVar21 = part->update[3];
        (part->pos).x = (float)(dVar22 * dVar27 + (double)*(float *)(iVar21 + 0x10));
        (part->pos).y = (float)(dVar22 * dVar25 + (double)*(float *)(iVar21 + 0x14));
        (part->pos).z = (float)(dVar22 * dVar24 + (double)*(float *)(iVar21 + 0x18));
        (part->pos).w = *(float *)(iVar21 + 0x1c);
      }
    }
    else {
      partproc::DeletePart(lVar20);
    }
  }
  else {
    iVar21 = fastfunc::FastDecTimerS16(lVar20 + 10);
    if (iVar21 == 0) {
      dVar22 = (double)animationSpeed;
      dVar24 = 10.5;
      if ((int)part->timer < (int)(dVar22 * 10.5)) {
        iVar21 = mobyutil::DecAlpha(lVar20 + 4,0x10);
        dVar22 = (double)animationSpeed;
        if (iVar21 != 0) {
          partproc::DeletePart(lVar20);
          return;
        }
      }
      if (*(short *)(part->update + 7) == 1) {
        SpawnPart_67(0,0,lVar20 + 0x10,&DAT_00132d58,in_r6,(int)(dVar22 * dVar24),0,
                     (int)part->color >> 0x18,0);
      }
      else {
        iVar21 = SpawnPart_67(0,0,part->update[3],lVar20 + 0x10,&DAT_00132d58,in_r6,
                              (int)((double)animationSpeed * dVar24),0,(int)part->color >> 0x18,
                              local_d0);
        if (iVar21 != 0) {
          *(undefined2 *)(iVar21 + 0x38) = *(undefined2 *)(part->update + 6);
        }
      }
      if (*(short *)(part->update + 7) == 1) {
        fVar2 = (float)part->update[4];
        fVar3 = (float)part->update[5];
        fVar1 = fVar2 + 1.5707963;
        fVar4 = fVar3 + 1.5707963;
        fVar7 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar7 = fVar2;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar6 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar6 = fVar1;
        }
        fVar8 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar8 = fVar4;
        }
        fVar9 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
          fVar9 = fVar7;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar2 = fVar5;
        }
        iVar21 = part->update[3];
        fVar3 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar7 = fVar9 * fVar9;
        fVar1 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar8 < 0.0) {
          fVar1 = fVar8;
        }
        fVar8 = fVar2 * fVar2;
        fVar4 = *(float *)(iVar21 + 0x10);
        fVar5 = *(float *)(iVar21 + 0x14);
        fVar6 = *(float *)(iVar21 + 0x18);
        fVar17 = fVar3 * fVar3;
        fVar10 = fVar1 * fVar1;
        fVar18 = fVar7 * fVar7 * fVar9;
        fVar13 = fVar8 * fVar8 * fVar2;
        fVar16 = fVar17 * fVar17 * fVar3;
        fVar11 = fVar10 * fVar10 * fVar1;
        fVar19 = fVar7 * fVar18;
        dVar24 = 2.25;
        fVar15 = fVar17 * fVar16;
        fVar12 = fVar10 * fVar11;
        fVar14 = fVar8 * fVar13;
        (part->pos).w = *(float *)(iVar21 + 0x1c);
        (part->pos).z = fVar6;
        (part->pos).y = fVar5;
        (part->pos).x = fVar4;
        dVar26 = (double)(fVar7 * fVar19 * 2.601887e-06 +
                         fVar19 * -0.0001980741 +
                         fVar18 * 0.0083330255 + fVar7 * fVar9 * -0.16666657 + fVar9);
        dVar23 = (double)(fVar17 * fVar15 * 2.601887e-06 +
                         fVar15 * -0.0001980741 +
                         fVar16 * 0.0083330255 + fVar17 * fVar3 * -0.16666657 + fVar3);
        dVar27 = (double)((fVar10 * fVar12 * 2.601887e-06 +
                          fVar12 * -0.0001980741 +
                          fVar11 * 0.0083330255 + fVar10 * fVar1 * -0.16666657 + fVar1) * 0.28);
        dVar25 = (double)((fVar8 * fVar14 * 2.601887e-06 +
                          fVar14 * -0.0001980741 +
                          fVar13 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2) * 0.28);
        fastfunc::FastEulerToMtx1(auStack_b0,local_c0);
        dVar22 = (double)local_90;
        fVar2 = (float)((double)local_80 * dVar22 +
                       (double)(float)(dVar22 * dVar27 + (double)(float)((double)local_a0 * dVar25))
                       );
        iVar21 = part->update[3];
        fVar4 = *(float *)(iVar21 + 0xd4);
        fVar7 = *(float *)(iVar21 + 0xd8);
        fVar5 = *(float *)(iVar21 + 0xc4);
        fVar6 = *(float *)(iVar21 + 200);
        fVar8 = *(float *)(iVar21 + 0xe4);
        fVar3 = (float)(dVar26 * dVar24 +
                       (double)(float)((double)local_7c * dVar22 +
                                      (double)(float)((double)local_8c * dVar27 +
                                                     (double)(float)((double)local_9c * dVar25))));
        fVar9 = *(float *)(iVar21 + 0xe8);
        fVar1 = (float)(dVar23 * dVar24 +
                       (double)(float)((double)local_78 * dVar22 +
                                      (double)(float)((double)local_88 * dVar27 +
                                                     (double)(float)((double)local_98 * dVar25))));
        fVar10 = (float)part->update[4];
        (part->pos).x =
             (part->pos).x +
             *(float *)(iVar21 + 0xe0) * fVar1 +
             *(float *)(iVar21 + 0xc0) * fVar2 + *(float *)(iVar21 + 0xd0) * fVar3;
        (part->pos).y = (part->pos).y + fVar8 * fVar1 + fVar5 * fVar2 + fVar4 * fVar3;
        (part->pos).z = (part->pos).z + fVar9 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3;
        dVar22 = (double)fastfunc::FastWrapRot(fVar10,mobyutil::g_FrameTime * 0.9599311);
        part->update[4] = (int)(float)dVar22;
        dVar22 = (double)fastfunc::FastWrapRot
                                   ((float)part->update[5],mobyutil::g_FrameTime * 4.363323);
        part->update[5] = (int)(float)dVar22;
      }
    }
    else {
      partproc::DeletePart(lVar20);
    }
  }
  return;
}



//==== 00133280  ns=partupd  size=0x148
// sig: undefined SpawnPart_68(void)
// callers(1): 003ec7e0 mobyupdate_helpers::M63_003ec7e0
// callees(3): 000f1114 mobyfunc::GetBonePosition; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 68 */

longlong partupd::SpawnPart_68
                   (double param_1,double param_2,double param_3,int param_4,undefined1 param_5,
                   undefined8 param_6,uint param_7,undefined8 param_8,float param_9,
                   undefined8 param_10,undefined1 param_11)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined2 uVar4;
  PartInstance *pPVar5;
  char cVar6;
  
  pPVar5 = partproc::CreatePart(0x44);
  if (pPVar5 != (PartInstance *)0x0) {
    pPVar5->color = param_7;
    pPVar5->scale = param_9;
    cVar6 = fastfunc::FastDoubleToInt(0x3fd99999a0000000);
    sVar3 = *(short *)(param_4 + 0x32);
    pPVar5->gsAlpha = 0x48;
    pPVar5->type = 3;
    pPVar5->drawDist = (char)(sVar3 >> 5) * '\x10' + cVar6;
    pPVar5->tex = *DAT_00a52914;
    mobyfunc::GetBonePosition(param_4,param_5,(longlong)(int)pPVar5 + 0x10);
    fVar1 = (pPVar5->pos).y;
    pPVar5->update[0] = (int)(pPVar5->pos).x;
    fVar2 = (pPVar5->pos).z;
    pPVar5->update[1] = (int)fVar1;
    pPVar5->update[4] = param_4;
    pPVar5->update[2] = (int)fVar2;
    (pPVar5->pos).w = (float)param_1;
    uVar4 = *(undefined2 *)(param_4 + 0xa6);
    pPVar5->update[3] = (int)(float)param_2;
    *(undefined2 *)((int)pPVar5->update + 0x16) = uVar4;
    *(undefined1 *)(pPVar5->update + 5) = param_5;
    pPVar5->update[6] = (int)(float)param_1;
    pPVar5->update[7] = (int)(float)param_3;
    *(undefined1 *)((int)pPVar5->update + 0x15) = param_11;
  }
  return (longlong)(int)pPVar5;
}



//==== 001333d8  ns=partupd  size=0x194
// sig: undefined UpdatePart_68(PartInstance * part)
// callers(0): 
// callees(5): 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6ec partproc::DeletePart; 00502730 fastfunc::FastIntToDouble

/* Part 68 */

void partupd::UpdatePart_68(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_70;
  float local_6c;
  float local_68;
  
  iVar6 = part->update[4];
  if ((((iVar6 != 0) && (*(short *)(iVar6 + 0xa6) == *(short *)((int)part->update + 0x16))) &&
      (*(char *)(iVar6 + 0x20) != -2)) && (*(char *)(iVar6 + 0x20) != -3)) {
    dVar13 = 1.0;
    dVar10 = (double)mobyutil::MB_randRangeFloat(0.05,1.0);
    dVar11 = (double)(float)part->update[3];
    dVar12 = (double)(float)((double)(float)part->update[6] * dVar10);
    mobyfunc::GetBonePosition
              (part->update[4],*(undefined1 *)(part->update + 5),(longlong)(int)part + 0x10);
    mobyfunc::GetBoneTransformations(part->update[4],*(undefined1 *)(part->update + 5),&local_70);
    dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x15));
    dVar10 = (double)mobyutil::MB_randRangeFloat((float)-dVar10,(float)dVar10);
    fVar1 = (float)part->update[7];
    fVar2 = 0.0;
    fVar3 = (part->pos).x;
    fVar4 = (part->pos).y;
    fVar5 = (part->pos).z;
    fVar9 = SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c);
    (part->pos).w = (float)dVar12;
    part->update[3] = (int)(float)dVar11;
    fVar1 = ((float)(dVar10 * 0.009999999776482582 - dVar13) * fVar1) / fVar9;
    fVar8 = fVar2;
    if (0.0 - fVar9 < 0.0) {
      fVar8 = local_68 * fVar1;
    }
    fVar7 = fVar2;
    if (0.0 - fVar9 < 0.0) {
      fVar7 = local_6c * fVar1;
    }
    if (0.0 - fVar9 < 0.0) {
      fVar2 = local_70 * fVar1;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar8 = local_68 * fVar1;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar7 = local_6c * fVar1;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar2 = local_70 * fVar1;
    }
    part->update[2] = (int)(fVar5 + fVar8);
    part->update[1] = (int)(fVar4 + fVar7);
    part->update[0] = (int)(fVar3 + fVar2);
    return;
  }
  partproc::DeletePart();
  return;
}



//==== 00133580  ns=partupd  size=0x1a0
// sig: undefined SpawnPart_69(void)
// callers(8): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 0024c380 mobyupdate_helpers::M1331_0024c380; 0027cb28 mobyupdate_helpers::M1440_0027cb28; 002877e8 mobyupdate_helpers::M1471_002877e8; 002ed768 mobyupdate_helpers::M211_002ed768; 002edb38 mobyupdate_helpers::M211_002edb38; 00326788 mobyupdate_helpers::M28_00326788; 00362e40 mobyupdate_helpers::M403_00362e40
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 69 */

PartInstance * partupd::SpawnPart_69(float *param_1,int *param_2,int param_3,int param_4)

{
  PartInstance *pPVar1;
  char cVar3;
  int iVar2;
  short sVar4;
  double dVar5;
  
  pPVar1 = partproc::CreatePart(0x45);
  if (pPVar1 != (PartInstance *)0x0) {
    (pPVar1->pos).x = *param_1;
    (pPVar1->pos).y = param_1[1];
    (pPVar1->pos).z = param_1[2];
    (pPVar1->pos).w = param_1[3];
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar1->drawDist = cVar3 + 'p';
    pPVar1->gsAlpha = 0x48;
    pPVar1->type = 0;
    dVar5 = (double)mobyutil::MB_randRangeFloat(8000.0,50000.0);
    pPVar1->scale = (float)dVar5;
    cVar3 = mobyutil::MB_randInt(0x100);
    pPVar1->rot = cVar3;
    pPVar1->tex = *DAT_00a52918;
    iVar2 = mobyutil::MB_randRange(10,0x1e);
    sVar4 = (short)(int)(animationSpeed * ((float)(longlong)iVar2 + 0.5));
    pPVar1->timer = sVar4;
    dVar5 = (double)fastfunc::FastIntToDouble(sVar4);
    *(short *)(pPVar1->update + 5) = (short)param_3;
    pPVar1->update[7] = param_4;
    *(undefined2 *)((int)pPVar1->update + 0x16) = 0;
    pPVar1->update[6] = (int)&DAT_007f7f7f;
    pPVar1->update[4] = (int)(float)(1.0 / dVar5);
    pPVar1->update[0] = *param_2;
    pPVar1->update[1] = param_2[1];
    pPVar1->update[2] = param_2[2];
    iVar2 = param_2[3];
    pPVar1->color = param_3 << 0x18 | 0x7f7f7f;
    pPVar1->update[3] = iVar2;
  }
  return pPVar1;
}



//==== 00133738  ns=partupd  size=0x2f8
// sig: undefined UpdatePart_69(PartInstance * part)
// callers(0): 
// callees(5): 000fe4f0 mobyutil::MB_randRangeSigned; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 69 */

void partupd::UpdatePart_69(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  double dVar10;
  double dVar11;
  
  lVar7 = (longlong)(int)part;
  fVar5 = (part->pos).x;
  uVar6 = (int)fVar5 >> 0x1f;
  bVar1 = part->rot;
  iVar9 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
  if (((0x3fffffff < iVar9) && (iVar9 < 0x447f4001)) &&
     (fVar5 = (part->pos).y, uVar6 = (int)fVar5 >> 0x1f, iVar9 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6,
     iVar9 < 0x447f4001 && 0x3fffffff < iVar9)) {
    fVar5 = (part->pos).z;
    uVar6 = (int)fVar5 >> 0x1f;
    iVar9 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
    if ((0x3fffffff < iVar9) && (iVar9 < 0x447f4001)) {
      sVar4 = *(short *)((int)part->update + 0x16);
      if (sVar4 == 1) {
        iVar9 = *(int *)(part->update[7] + 0x78);
        fVar5 = *(float *)(iVar9 + 0xd0);
        (part->pos).x = fVar5;
        fVar2 = *(float *)(iVar9 + 0xd4);
        (part->pos).y = fVar2;
        fVar3 = *(float *)(iVar9 + 0xd8);
        (part->pos).z = fVar3;
        (part->pos).w = *(float *)(iVar9 + 0xdc);
      }
      else if (sVar4 == 3) {
        iVar9 = *(int *)(part->update[7] + 0x78);
        fVar5 = *(float *)(iVar9 + 0xe0);
        (part->pos).x = fVar5;
        fVar2 = *(float *)(iVar9 + 0xe4);
        (part->pos).y = fVar2;
        fVar3 = *(float *)(iVar9 + 0xe8);
        (part->pos).z = fVar3;
        (part->pos).w = *(float *)(iVar9 + 0xec);
      }
      else if (sVar4 == 2) {
        iVar9 = *(int *)(part->update[7] + 0x78);
        fVar5 = *(float *)(iVar9 + 0x1f0);
        (part->pos).x = fVar5;
        fVar2 = *(float *)(iVar9 + 500);
        (part->pos).y = fVar2;
        fVar3 = *(float *)(iVar9 + 0x1f8);
        (part->pos).z = fVar3;
        (part->pos).w = *(float *)(iVar9 + 0x1fc);
      }
      else if (sVar4 == 4) {
        iVar9 = part->update[7];
        fVar5 = *(float *)(iVar9 + 0x10);
        (part->pos).x = fVar5;
        fVar2 = *(float *)(iVar9 + 0x14);
        (part->pos).y = fVar2;
        fVar3 = *(float *)(iVar9 + 0x18);
        (part->pos).w = *(float *)(iVar9 + 0x1c);
        fVar3 = fVar3 + 0.2;
        (part->pos).z = fVar3;
      }
      else {
        fVar5 = (part->pos).x + (float)part->update[0];
        fVar2 = (part->pos).y + (float)part->update[1];
        fVar3 = (part->pos).z + (float)part->update[2];
        (part->pos).x = fVar5;
        (part->pos).y = fVar2;
        (part->pos).z = fVar3;
      }
      if (((2.0 <= fVar5) && (fVar5 <= 1021.0)) &&
         ((2.0 <= fVar2 && (((fVar2 <= 1021.0 && (2.0 <= fVar3)) && (fVar3 <= 1021.0)))))) {
        mobyutil::MB_randRangeSigned(0,0x4050000000000000);
        iVar9 = fastfunc::FastDoubleToInt();
        iVar9 = (uint)bVar1 + iVar9;
        part->rot = (char)iVar9 + ((byte)(0xff - (longlong)iVar9 >> 0x3f) & 1);
        iVar9 = fastfunc::FastDecTimerS16(lVar7 + 10);
        if (iVar9 != 0) {
          partproc::DeletePart(lVar7);
          return;
        }
        dVar10 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 5));
        dVar11 = (double)fastfunc::FastIntToDouble(part->timer);
        uVar8 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(float)(dVar11 * (double)(float)part->update[4])
                                          * dVar10));
        part->color = (uint)((uVar8 & 0xffffffff) << 0x18) | part->update[6];
        return;
      }
      partproc::DeletePart(lVar7);
      return;
    }
  }
  partproc::DeletePart(lVar7);
  return;
}



//==== 00133a48  ns=partupd  size=0x148
// sig: undefined SpawnPart_70(void)
// callers(1): 00080a08 hero::Hero_PlayFootStep
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 70 */

longlong partupd::SpawnPart_70(double param_1,float *param_2,int param_3)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pPVar3 = partproc::CreatePart(0x46);
  dVar5 = (double)(float)(param_1 + 3.1415927410125732);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_2;
    (pPVar3->pos).y = param_2[1];
    (pPVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    pPVar3->color = 0x80404040;
    (pPVar3->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar3->drawDist = cVar4 + ' ';
    pPVar3->gsAlpha = 0x44;
    pPVar3->type = 1;
    pPVar3->tex = *(byte *)(DAT_00a5291c + param_3);
    cVar4 = fastfunc::FastDoubleToInt((double)((float)(dVar5 * 128.0) * 0.31830987));
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pPVar3->rot = cVar4 + -0x20;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    pPVar3->scale = 147000.0;
    auVar6 = loadVectorLeftIndexed(0x10,0x133a30);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar6,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
  }
  return (longlong)(int)pPVar3;
}



//==== 00133b90  ns=partupd  size=0x60
// sig: undefined UpdatePart_70(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 70 */

void partupd::UpdatePart_70(PartInstance *part)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = part->timer;
  uVar2 = part->color;
  part->timer = sVar1 + -1;
  if (sVar1 == 1) {
    uVar2 = uVar2 - 0x1000000;
    part->timer = 2;
    part->color = uVar2;
  }
  if ((uVar2 & 0xff000000) == 0) {
    partproc::DeletePart();
  }
  return;
}



//==== 00133bf8  ns=partupd  size=0x1c0
// sig: undefined SpawnPart_71(void)
// callers(1): 0045a108 mobyupdate_unsorted::UpdateMoby_78
// callees(5): 000fc620 mobyutil::MB_randInt; 001134c8 mobyutil::MB_compressVector; 001135f0 mobyutil::MB_decompressVector; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 71 */

PartInstance *
partupd::SpawnPart_71
          (float *param_1,float *param_2,float *param_3,uint param_4,int param_5,short param_6,
          undefined2 param_7,undefined2 param_8)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  int in_stack_00000074;
  float afStack_90 [4];
  float afStack_80 [4];
  longlong local_70;
  
  pPVar3 = partproc::CreatePart(0x47);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_1;
    (pPVar3->pos).y = param_1[1];
    (pPVar3->pos).z = param_1[2];
    fVar2 = param_1[3];
    pPVar3->color = param_4;
    (pPVar3->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + '@';
    pPVar3->gsAlpha = 0x44;
    pPVar3->type = 0;
    iVar4 = fastfunc::FastDoubleToInt((double)(param_2[3] * 210000.0));
    local_70 = (longlong)iVar4;
    pPVar3->scale = (float)local_70;
    cVar5 = mobyutil::MB_randInt(0xff);
    pPVar3->rot = cVar5;
    bVar1 = *DAT_00a528f4;
    pPVar3->timer = param_6;
    pPVar3->tex = bVar1;
    mobyutil::MB_compressVector(param_2,pPVar3->update);
    mobyutil::MB_compressVector(param_3,pPVar3->update + 1);
    mobyutil::MB_decompressVector(afStack_90,pPVar3->update);
    mobyutil::MB_decompressVector(afStack_80,pPVar3->update + 1);
    pPVar3->update[2] = param_4;
    pPVar3->update[3] = param_5;
    *(short *)(pPVar3->update + 4) = param_6;
    *(undefined2 *)((int)pPVar3->update + 0x12) = param_7;
    *(undefined2 *)(pPVar3->update + 5) = param_8;
    pPVar3->update[6] = *(int *)(in_stack_00000074 + 0x78);
  }
  return pPVar3;
}



//==== 00133dd8  ns=partupd  size=0x4d4
// sig: undefined UpdatePart_71(PartInstance * part)
// callers(0): 
// callees(6): 001134c8 mobyutil::MB_compressVector; 001135f0 mobyutil::MB_decompressVector; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 71 */

void partupd::UpdatePart_71(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  lVar12 = (longlong)(int)part;
  fVar1 = (part->pos).x;
  fVar2 = (part->pos).y;
  fVar3 = (part->pos).z;
  if ((worldUpdateTime & 1) != 0) {
    part->rot = part->rot + '\x01';
  }
  dVar16 = (double)SQRT((fVar3 - DAT_00969db8) * (fVar3 - DAT_00969db8) +
                        (fVar1 - hero::g_heroCGPos) * (fVar1 - hero::g_heroCGPos) +
                        (fVar2 - DAT_00969db4) * (fVar2 - DAT_00969db4));
  if (dVar16 < 5.0) {
    pfVar6 = (float *)part->update[6];
    fVar4 = 0.0;
    if (0 < (int)pfVar6[2]) {
      fVar7 = *pfVar6 - fVar1;
      fVar9 = pfVar6[1] - fVar2;
      fVar8 = pfVar6[2] - fVar3;
      local_54 = pfVar6[3];
      fVar11 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
      local_60 = fVar4;
      local_5c = fVar4;
      if (fVar11 <= 0.5) {
        fVar1 = 0.005 / fVar11;
        if (0.0 - fVar11 < 0.0) {
          local_60 = fVar7 * fVar1;
        }
        if (0.0 - fVar11 < 0.0) {
          local_5c = fVar9 * fVar1;
        }
        if (0.0 - fVar11 < 0.0) {
          fVar4 = fVar8 * fVar1;
        }
        if (fVar11 - 0.0 < 0.0) {
          local_60 = fVar7 * fVar1;
        }
        if (fVar11 - 0.0 < 0.0) {
          local_5c = fVar9 * fVar1;
        }
        local_58 = fVar4;
        if (fVar11 - 0.0 < 0.0) {
          local_58 = fVar8 * fVar1;
        }
        mobyutil::MB_compressVector(&local_60,part->update + 1);
      }
      else {
        fVar10 = (float)(0.10000000149011612 / dVar16) / fVar11;
        if (0.0 - fVar11 < 0.0) {
          local_60 = fVar7 * fVar10;
        }
        if (0.0 - fVar11 < 0.0) {
          local_5c = fVar9 * fVar10;
        }
        if (0.0 - fVar11 < 0.0) {
          fVar4 = fVar8 * fVar10;
        }
        if (fVar11 - 0.0 < 0.0) {
          local_60 = fVar7 * fVar10;
        }
        if (fVar11 - 0.0 < 0.0) {
          local_5c = fVar9 * fVar10;
        }
        local_58 = fVar4;
        if (fVar11 - 0.0 < 0.0) {
          local_58 = fVar8 * fVar10;
        }
        (part->pos).x = fVar1 + local_60;
        (part->pos).y = fVar2 + local_5c;
        (part->pos).z = fVar3 + local_58;
      }
    }
  }
  dVar17 = 1.0;
  dVar15 = (double)((2.5 - (float)(dVar16 - 0.5)) * 0.4);
  dVar16 = dVar17;
  if ((dVar15 <= 1.0) && (dVar16 = dVar15, dVar15 < 0.0)) {
    dVar16 = 0.0;
  }
  uVar13 = fastfunc::FastLerpColor(dVar16,part->update[2],part->update[3]);
  sVar5 = *(short *)(part->update + 4);
  part->color = uVar13;
  if (sVar5 == 0) {
    if (*(short *)((int)part->update + 0x12) == 0) {
      mobyutil::MB_decompressVector(&local_70,part->update + 1);
      uVar13 = part->color;
      sVar5 = part->timer;
      (part->pos).x = (part->pos).x + local_70;
      (part->pos).y = (part->pos).y + local_6c;
      (part->pos).z = (part->pos).z + local_68;
      dVar16 = (double)fastfunc::FastIntToDouble(sVar5);
      dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 5));
      uVar13 = fastfunc::FastLerpColor((double)(float)(dVar16 / dVar15),uVar13 & 0xffffff,uVar13);
      part->color = uVar13;
      iVar14 = fastfunc::FastDecTimerS16(lVar12 + 10);
      if (iVar14 != 0) {
        partproc::DeletePart(lVar12);
      }
    }
    else {
      mobyutil::MB_decompressVector(&local_50,part->update);
      mobyutil::MB_decompressVector(&local_40,part->update + 1);
      dVar16 = (double)fastfunc::FastIntToDouble(part->timer);
      dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)part->update + 0x12));
      fVar1 = (float)(dVar16 / dVar15);
      local_64 = local_44;
      local_70 = fVar1 * (local_50 - local_40) + local_40;
      local_6c = fVar1 * (local_4c - local_3c) + local_3c;
      local_68 = fVar1 * (local_48 - local_38) + local_38;
      (part->pos).x = (part->pos).x + local_70;
      (part->pos).y = (part->pos).y + local_6c;
      (part->pos).z = (part->pos).z + local_68;
      iVar14 = fastfunc::FastDecTimerS16(lVar12 + 10);
      if (iVar14 != 0) {
        *(undefined2 *)((int)part->update + 0x12) = 0;
        part->timer = *(short *)(part->update + 5);
      }
    }
  }
  else {
    *DAT_009271f8 = 0;
    mobyutil::MB_decompressVector(&local_70,part->update);
    sVar5 = part->timer;
    (part->pos).x = (part->pos).x + local_70;
    (part->pos).y = (part->pos).y + local_6c;
    (part->pos).z = (part->pos).z + local_68;
    dVar16 = (double)fastfunc::FastIntToDouble(sVar5);
    dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 4));
    uVar13 = fastfunc::FastLerpColor
                       ((double)(float)(dVar17 - (double)(float)(dVar16 / dVar15)),
                        part->color & 0xffffff,part->color);
    part->color = uVar13;
    iVar14 = fastfunc::FastDecTimerS16(lVar12 + 10);
    if (iVar14 != 0) {
      *(undefined2 *)(part->update + 4) = 0;
      part->timer = *(short *)((int)part->update + 0x12);
    }
  }
  return;
}



//==== 001342c8  ns=partupd  size=0x1ec
// sig: undefined SpawnPart_72(void)
// callers(1): 0033a1d0 FUN_0033a1d0
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 72 */

PartInstance * partupd::SpawnPart_72(double param_1,float *param_2,int *param_3,int param_4)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  double dVar6;
  
  pPVar3 = partproc::CreatePart(0x48);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_2;
    (pPVar3->pos).y = param_2[1];
    (pPVar3->pos).z = param_2[2];
    fVar2 = param_2[3];
    pPVar3->color = 0x7fffffff;
    (pPVar3->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    if (param_4 < 0) {
      dVar6 = (double)mobyutil::MB_randRangeFloat(40000.0,80000.0);
    }
    else {
      dVar6 = (double)mobyutil::MB_randRangeFloat(20000.0,40000.0);
    }
    pPVar3->scale = (float)dVar6;
    cVar5 = mobyutil::MB_randInt(8);
    pPVar3->rot = cVar5 + '\x1c';
    bVar1 = *DAT_00a52924;
    pPVar3->update[4] = param_4;
    pPVar3->tex = bVar1;
    pPVar3->update[0] = *param_3;
    pPVar3->update[1] = param_3[1];
    pPVar3->update[2] = param_3[2];
    iVar4 = param_3[3];
    pPVar3->update[5] = 0;
    pPVar3->update[3] = iVar4;
    iVar4 = mobyutil::MB_randInt(0xc);
    pPVar3->update[3] = (int)(float)param_1;
    pPVar3->update[6] = iVar4 + -6;
    fVar2 = pPVar3->scale;
    pPVar3->update[7] = (int)(fVar2 * 0.1);
    if (-1 < param_4) {
      pPVar3->update[7] = (int)(fVar2 * 0.05);
      iVar4 = mobyutil::MB_randInt(0x1e);
      if (iVar4 == 0) {
        pPVar3->update[5] = -0x28;
      }
      else {
        iVar4 = mobyutil::MB_randInt(0x1e);
        if (iVar4 == 0) {
          pPVar3->update[5] = -1;
        }
      }
    }
  }
  return pPVar3;
}



//==== 001344b4  ns=partupd  size=0x4c
// sig: undefined UpdatePart_72(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 72 */

void partupd::UpdatePart_72(PartInstance *part)

{
  part->rot = part->rot + (char)part->update[6];
  if ((int)part->scale < 1) {
    part->scale = 0.0;
    partproc::DeletePart();
  }
  return;
}



//==== 00134540  ns=partupd  size=0x210
// sig: undefined SpawnPart_73(void)
// callers(1): 0026af90 mobyupdate_unsorted::UpdateMoby_1400
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 73 */

void partupd::SpawnPart_73
               (double param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar4;
  longlong lVar3;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  
  _fStack00000050 = param_6;
  _fStack00000058 = param_7;
  pPVar4 = partproc::CreatePart(0x49);
  dVar8 = (double)fStack00000050;
  dVar9 = (double)fStack00000058;
  dVar10 = (double)fStack00000054;
  if (pPVar4 != (PartInstance *)0x0) {
    lVar3 = 0;
    dVar6 = 0.0;
    dVar7 = dVar6;
    if (param_3 < 1) {
      if (-1 < param_3) {
        dVar6 = 0.11999999731779099;
        mobyutil::MB_randRangeFloat(0.25,0.25);
        lVar3 = 0x20;
      }
    }
    else if (param_3 < 2) {
      dVar6 = 0.5;
      mobyutil::MB_randRangeFloat(1.0,1.0);
      lVar3 = 0xd;
    }
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0x14,0x134500);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar11,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar2;
    pPVar4->color = (uint)(lVar3 << 0x18) | 0xffffff;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->type = 0;
    pPVar4->drawDist = cVar5 + ' ';
    pPVar4->gsAlpha = 0x48;
    pPVar4->tex = *(byte *)(DAT_00a52928 + param_3);
    pPVar4->scale = (float)(dVar6 * 210000.0);
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar7,360.0);
    pPVar4->rot = (char)(longlong)dVar6;
    (pPVar4->pos).x = *param_2;
    (pPVar4->pos).y = param_2[1];
    (pPVar4->pos).z = param_2[2];
    fVar1 = param_2[3];
    pPVar4->update[0] = (int)(float)dVar8;
    (pPVar4->pos).w = fVar1;
    pPVar4->update[1] = (int)(float)dVar10;
    pPVar4->update[2] = (int)(float)dVar9;
    pPVar4->update[3] = (int)(float)param_1;
  }
  return;
}



//==== 00134758  ns=partupd  size=0x294
// sig: undefined UpdatePart_73(PartInstance * part)
// callers(0): 
// callees(3): 00118d60 mobyutil::MB_SampleByteGrid; 00118e38 mobyutil::MB_SpawnGridParticles; 0011e6ec partproc::DeletePart

/* Part 73 */

void partupd::UpdatePart_73(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  fVar4 = (part->pos).x;
  uVar6 = part->update[3] >> 0x1f;
  dVar12 = (double)(float)part->update[3];
  fVar1 = (part->pos).x;
  fVar2 = (part->pos).w;
  if (-1 < (int)fVar4) {
    fVar5 = (part->pos).y;
    fVar3 = (part->pos).y;
    if (((-1 < (int)fVar5) &&
        ((int)(((uint)((int)fVar4 >> 0x1f) >> 1 ^ (uint)fVar4) - ((int)fVar4 >> 0x1f)) < 0x44000001)
        ) && ((int)(((uint)((int)fVar5 >> 0x1f) >> 1 ^ (uint)fVar5) - ((int)fVar5 >> 0x1f)) <
              0x44000001)) {
      fVar5 = (part->pos).z;
      fVar4 = (part->pos).z;
      uVar7 = (int)fVar5 >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)fVar5) - uVar7) < (int)((uVar6 >> 1 ^ part->update[3]) - uVar6))
      {
        mobyutil::MB_SpawnGridParticles(CONCAT44(fVar1,fVar3),CONCAT44(fVar4,fVar2));
        partproc::DeletePart(part);
        return;
      }
      fVar5 = fVar1 + (float)part->update[0];
      fVar8 = fVar3 + (float)part->update[1];
      fVar4 = fVar4 + (float)part->update[2];
      (part->pos).x = fVar5;
      (part->pos).y = fVar8;
      (part->pos).z = fVar4;
      fVar5 = fVar5 + DAT_00a52b90;
      (part->pos).x = fVar5;
      fVar8 = fVar8 + DAT_00a52b94;
      (part->pos).y = fVar8;
      fVar4 = fVar4 + DAT_00a52b98;
      (part->pos).z = fVar4;
      if (((int)fVar1 != (int)fVar5) || ((int)fVar3 != (int)fVar8)) {
        dVar13 = (double)DAT_00a52ba0;
        dVar12 = (double)mobyutil::MB_SampleByteGrid(CONCAT44(fVar5,fVar8),CONCAT44(fVar4,fVar2));
        if (dVar13 <= dVar12) {
          uVar9._0_4_ = (part->pos).x;
          uVar9._4_4_ = (part->pos).y;
          uVar10._0_4_ = (part->pos).z;
          uVar10._4_4_ = (part->pos).w;
          dVar12 = (double)mobyutil::MB_SampleByteGrid(uVar9,uVar10);
        }
        else {
          dVar12 = (double)DAT_00a52ba0;
        }
        fVar1 = (part->pos).z;
        if ((double)fVar1 < dVar12) {
          uVar11._0_4_ = (part->pos).x;
          uVar11._4_4_ = (part->pos).y;
          mobyutil::MB_SpawnGridParticles(uVar11,CONCAT44(fVar1,(part->pos).w));
          partproc::DeletePart(part);
          return;
        }
      }
      fVar1 = DAT_0071f418 * -0.5;
      part->update[3] = 0;
      part->update[2] = (int)(fVar1 + (float)part->update[2]);
      part->update[3] = (int)(float)(dVar12 + (double)DAT_00a52b98);
      return;
    }
  }
  partproc::DeletePart(part);
  return;
}



//==== 001349f0  ns=partupd  size=0x228
// sig: undefined SpawnPart_74(void)
// callers(5): 0021d8f8 mobyupd::update1242::M1242_0021d8f8; 0025f3c8 mobyupd::update1379::M1379_0025f3c8; 002be8f8 mobyupdate_helpers::M1818_002be8f8; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 00419368 mobyupdate_helpers::M69_00419368
// callees(4): 0011e6c8 partproc::CreatePart; 005010c0 fastfunc::FastNormalizeRMtx4; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 74 */

PartInstance *
partupd::SpawnPart_74(int param_1,float *param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  PartInstance *pPVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_90 [64];
  
  pPVar2 = partproc::CreatePart(0x4a);
  if (pPVar2 != (PartInstance *)0x0) {
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + -0x60;
    pPVar2->gsAlpha = ((byte)((LZCOUNT(-param_5) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
    pPVar2->type = 0;
    pPVar2->tex = *DAT_00a5292c;
    iVar3 = rand();
    pPVar2->rot = (char)iVar3;
    pPVar2->scale = 0.0;
    (pPVar2->pos).x = *param_2;
    (pPVar2->pos).y = param_2[1];
    (pPVar2->pos).z = param_2[2];
    (pPVar2->pos).w = param_2[3];
    pPVar2->update[0] = *param_3;
    pPVar2->update[1] = param_3[1];
    pPVar2->update[2] = param_3[2];
    dVar8 = (double)(param_2[1] - *(float *)(param_1 + 0x14));
    dVar7 = (double)(*param_2 - *(float *)(param_1 + 0x10));
    dVar6 = (double)param_2[3];
    dVar5 = (double)(param_2[2] - *(float *)(param_1 + 0x18));
    fastfunc::FastNormalizeRMtx4(local_90,param_1 + 0xc0);
    pPVar2->update[3] = param_1;
    pPVar2->update[7] = (int)param_4;
    pPVar2->update[4] =
         (int)(float)(dVar6 * 0.0 +
                     (double)(float)(dVar5 * 0.0 +
                                    (double)(float)(dVar7 * 0.0 + (double)(float)(dVar8 * 0.0))));
    pPVar2->update[5] =
         (int)(float)(dVar6 * 0.0 +
                     (double)(float)(dVar5 * 0.0 +
                                    (double)(float)(dVar7 * 0.0 + (double)(float)(dVar8 * 0.0))));
    pPVar2->update[6] =
         (int)(float)(dVar6 * 0.0 +
                     (double)(float)(dVar5 * 0.0 +
                                    (double)(float)(dVar7 * 0.0 + (double)(float)(dVar8 * 0.0))));
    uVar1 = *param_4;
    pPVar2->timer = (short)param_4[3];
    pPVar2->color = uVar1;
  }
  return pPVar2;
}



//==== 00134c28  ns=partupd  size=0x20c
// sig: undefined UpdatePart_74(PartInstance * part)
// callers(0): 
// callees(4): 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Part 74 */

void partupd::UpdatePart_74(PartInstance *part)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  uint color2;
  float fVar10;
  float fVar11;
  longlong lVar12;
  uint color1;
  int iVar13;
  double dVar14;
  
  lVar12 = (longlong)(int)part;
  puVar9 = (uint *)part->update[7];
  dVar14 = (double)fastfunc::FastIntToDouble
                             ((int)((int)*(short *)(puVar9 + 2) * (puVar9[3] - (int)part->timer)) /
                              (int)puVar9[3] + (int)*(short *)((int)puVar9 + 10));
  fVar2 = (float)part->update[1];
  fVar3 = (float)part->update[2];
  iVar13 = part->update[3];
  part->scale = (float)(dVar14 * 1000.0);
  fVar11 = DAT_0071f408 * -0.01999998 + 1.0;
  fVar10 = fVar11 * (float)part->update[0];
  fVar2 = fVar11 * fVar2;
  fVar11 = fVar11 * fVar3;
  part->update[0] = (int)fVar10;
  part->update[1] = (int)fVar2;
  part->update[2] = (int)fVar11;
  if ((iVar13 == 0) || (*(char *)(iVar13 + 0x20) == -3 || *(char *)(iVar13 + 0x20) == -2)) {
    partproc::DeletePart(lVar12);
  }
  else {
    fVar10 = (float)part->update[4] + fVar10;
    fVar2 = (float)part->update[5] + fVar2;
    fVar11 = (float)part->update[6] + fVar11;
    part->update[4] = (int)fVar10;
    part->update[5] = (int)fVar2;
    part->update[6] = (int)fVar11;
    fVar3 = *(float *)(iVar13 + 0xd4);
    fVar4 = *(float *)(iVar13 + 0xc4);
    fVar5 = *(float *)(iVar13 + 0xd8);
    fVar6 = *(float *)(iVar13 + 0xe4);
    fVar7 = *(float *)(iVar13 + 200);
    fVar8 = *(float *)(iVar13 + 0xe8);
    cVar1 = part->rot;
    (part->pos).x =
         *(float *)(iVar13 + 0x10) +
         *(float *)(iVar13 + 0xe0) * fVar11 +
         *(float *)(iVar13 + 0xc0) * fVar10 + *(float *)(iVar13 + 0xd0) * fVar2;
    (part->pos).y = *(float *)(iVar13 + 0x14) + fVar6 * fVar11 + fVar4 * fVar10 + fVar3 * fVar2;
    (part->pos).z = *(float *)(iVar13 + 0x18) + fVar8 * fVar11 + fVar7 * fVar10 + fVar5 * fVar2;
    fVar2 = *(float *)(iVar13 + 0x1c);
    part->rot = cVar1 + '\x01';
    (part->pos).w = fVar2;
    color1 = puVar9[1];
    color2 = *puVar9;
    dVar14 = (double)fastfunc::FastIntToDouble(puVar9[3]);
    mobyutil::TweenColor((float)((double)(longlong)(int)part->timer / dVar14),color1,color2);
    part->color = color1;
    iVar13 = fastfunc::FastDecTimerS16(lVar12 + 10);
    if (iVar13 != 0) {
      partproc::DeletePart(lVar12);
    }
  }
  return;
}



//==== 00134e48  ns=partupd  size=0x264
// sig: undefined SpawnPart_75(void)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 000fe4f0 mobyutil::MB_randRangeSigned; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 75 */

longlong partupd::SpawnPart_75
                   (double param_1,double param_2,float *param_3,int *param_4,undefined2 param_5,
                   int param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar6;
  undefined2 uVar5;
  int iVar4;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._0_4_ = param_6;
  auVar10._4_4_ = param_6;
  auVar10._8_4_ = param_6;
  auVar10._12_4_ = param_6;
  pPVar3 = partproc::CreatePart(0x4b);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_3;
    (pPVar3->pos).y = param_3[1];
    (pPVar3->pos).z = param_3[2];
    fVar1 = param_3[3];
    pPVar3->color = (uint)((param_9 & 0xffffffff) << 0x18) | 0xffffff;
    (pPVar3->pos).w = fVar1;
    cVar6 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar6 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->scale = (float)param_1;
    cVar6 = mobyutil::MB_randInt(0x100);
    pPVar3->rot = cVar6;
    auVar9 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    pPVar3->tex = *DAT_00a52930;
    auVar10 = loadVectorLeftIndexed(4,0x134e34);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorAddFloatingPoint
                       (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar10);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    fVar1 = animationSpeed * ((float)(longlong)param_6 + 0.5);
    auVar10 = vectorSplatHalfWord(auVar10,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar10,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    dVar7 = (double)fastfunc::FastIntToDouble((short)(int)fVar1);
    *(undefined2 *)(pPVar3->update + 4) = param_5;
    pPVar3->update[6] = (int)(float)(1.0 / dVar7);
    pPVar3->update[0] = *param_4;
    pPVar3->update[1] = param_4[1];
    pPVar3->update[2] = param_4[2];
    pPVar3->update[3] = param_4[3];
    mobyutil::MB_randRangeSigned(0x3ff0000000000000,0x4018000000000000);
    uVar5 = fastfunc::FastDoubleToInt();
    fVar1 = pPVar3->scale;
    *(undefined2 *)((int)pPVar3->update + 0x12) = uVar5;
    pPVar3->update[5] = (int)((float)(param_2 - (double)fVar1) * (float)pPVar3->update[6]);
    dVar7 = (double)fastfunc::FastIntToDouble(param_9);
    dVar8 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 30.5));
    iVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 / dVar8));
    pPVar3->update[7] = iVar4;
  }
  return (longlong)(int)pPVar3;
}



//==== 001350c0  ns=partupd  size=0x13c
// sig: undefined UpdatePart_75(PartInstance * part)
// callers(0): 
// callees(3): 00104b38 mobyutil::DecAlpha; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 75 */

void partupd::UpdatePart_75(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = (longlong)(int)part;
  fVar1 = (float)part->update[1];
  fVar2 = (float)part->update[0];
  fVar3 = (part->pos).x;
  fVar4 = (part->pos).y;
  fVar5 = (float)part->update[2];
  part->rot = part->rot + (char)*(undefined2 *)((int)part->update + 0x12);
  (part->pos).x = fVar3 + fVar2;
  (part->pos).y = fVar4 + fVar1;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  (part->pos).z = (part->pos).z + fVar5;
  part->update[2] = (int)-(DAT_0071f40c * 0.003 - fVar5);
  fVar3 = ((fVar3 * 0.97 - 1.0) * DAT_0071f408 + 1.0) / fVar3;
  part->update[0] = (int)(fVar2 * fVar3);
  part->update[1] = (int)(fVar1 * fVar3);
  iVar7 = fastfunc::FastDecTimerS16(lVar6 + 10);
  if (iVar7 == 0) {
    fVar1 = (float)part->update[5] * 2.0 + part->scale;
    part->scale = fVar1;
    if (fVar1 < 15000.0) {
      part->scale = 15000.0;
    }
  }
  else {
    iVar7 = mobyutil::DecAlpha(lVar6 + 4,part->update[7]);
    if (iVar7 != 0) {
      part->scale = 0.0;
      partproc::DeletePart(lVar6);
    }
  }
  return;
}



//==== 001351fc  ns=partupd  size=0x60
// sig: undefined UpdatePart_76(PartInstance * part)
// callers(0): 
// callees(3): 00104b38 mobyutil::DecAlpha; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 76 */

void partupd::UpdatePart_76(PartInstance *part)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)(int)part;
  mobyutil::DecAlpha(lVar1 + 4,DAT_00729750);
  iVar2 = fastfunc::FastDecTimerS16(lVar1 + 10);
  if (iVar2 != 0) {
    partproc::DeletePart(lVar1);
  }
  return;
}



//==== 00135260  ns=partupd  size=0x144
// sig: undefined SpawnPart_76(void)
// callers(0): 
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 76 */

PartInstance * partupd::SpawnPart_76(float *param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  PartInstance *pPVar5;
  char cVar6;
  
  pPVar5 = partproc::CreatePart(0x4c);
  if (pPVar5 != (PartInstance *)0x0) {
    (pPVar5->pos).x = *param_1;
    (pPVar5->pos).y = param_1[1];
    uVar2 = DAT_00729740;
    (pPVar5->pos).z = param_1[2];
    fVar1 = param_1[3];
    pPVar5->color = uVar2;
    (pPVar5->pos).w = fVar1;
    pPVar5->scale = DAT_00729744;
    cVar6 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar5->drawDist = cVar6 + '@';
    pPVar5->gsAlpha = 0x48;
    pPVar5->type = 3;
    pPVar5->tex = *(byte *)(&partproc::g_PartTexFrames)[DAT_00729754];
    (pPVar5->pos).x = *param_1;
    (pPVar5->pos).y = param_1[1];
    (pPVar5->pos).z = param_1[2];
    (pPVar5->pos).w = param_1[3];
    pPVar5->update[0] = *param_2;
    pPVar5->update[1] = param_2[1];
    pPVar5->update[2] = param_2[2];
    pPVar5->update[3] = param_2[3];
    uVar3 = DAT_0072974c;
    (pPVar5->pos).w = DAT_00729748;
    iVar4 = DAT_00a52ba8;
    pPVar5->timer = (short)uVar3;
    pPVar5->update[3] = iVar4;
  }
  return pPVar5;
}



//==== 001353b0  ns=partupd  size=0x1b8
// sig: undefined SpawnPart_77(void)
// callers(1): 002a6a18 mobyupdate_unsorted::UpdateMoby_1641
// callees(3): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 77 */

void partupd::SpawnPart_77(double param_1,float *param_2,int *param_3,int param_4)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar7._0_4_ = param_4;
  auVar7._4_4_ = param_4;
  auVar7._8_4_ = param_4;
  auVar7._12_4_ = param_4;
  pPVar3 = partproc::CreatePart(0x4d);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_2;
    (pPVar3->pos).y = param_2[1];
    (pPVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    pPVar3->color = 0x50504040;
    (pPVar3->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar3->drawDist = cVar4 + '@';
    auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    pPVar3->tex = *DAT_00a52938;
    pPVar3->rot = -0x60;
    pPVar3->scale = (float)(param_1 * 210000.0);
    auVar7 = loadVectorLeftIndexed(8,0x1353a4);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorAddFloatingPoint
                       (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    fVar1 = animationSpeed * ((float)(longlong)param_4 + 0.5);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar7,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[0] = *param_3;
    pPVar3->update[1] = param_3[1];
    pPVar3->update[2] = param_3[2];
    pPVar3->update[3] = param_3[3];
    dVar5 = (double)fastfunc::FastIntToDouble((short)(int)fVar1);
    pPVar3->update[3] = (int)(float)dVar5;
  }
  return;
}



//==== 00135578  ns=partupd  size=0xf4
// sig: undefined UpdatePart_77(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 77 */

void partupd::UpdatePart_77(PartInstance *part)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar5;
  int iVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = (double)(float)part->update[0];
  dVar9 = (double)(float)part->update[3];
  dVar8 = (double)(float)part->update[1];
  dVar7 = (double)(float)part->update[2];
  dVar6 = (double)fastfunc::FastIntToDouble(part->timer);
  dVar6 = (double)(float)(dVar6 / dVar9);
  uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar6 * 38.0));
  part->color = (uint)((uVar3 & 0xffffffff) << 0x18) | 0x808080;
  cVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar6 * 33.0));
  fVar1 = (part->pos).x;
  fVar2 = (part->pos).y;
  part->rot = cVar5;
  (part->pos).x = (float)((double)fVar1 + dVar10);
  (part->pos).y = (float)((double)fVar2 + dVar8);
  (part->pos).z = (float)((double)(part->pos).z + dVar7);
  iVar4 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar4 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00135678  ns=partupd  size=0x1c8
// sig: undefined SpawnPart_78(void)
// callers(1): 002c5f88 mobyupdate_helpers::M185_002c5f88
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 78 */

PartInstance *
partupd::SpawnPart_78
          (double param_1,double param_2,float *param_3,short param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,int param_8,undefined1 param_9,int *param_10)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  char cVar5;
  int iVar3;
  double dVar6;
  MobyInstance *in_stack_00000074;
  
  pPVar2 = partproc::CreatePart(0x4e);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    fVar1 = param_3[2];
    pPVar2->color = param_7;
    (pPVar2->pos).z = fVar1;
    fVar1 = param_3[3];
    pPVar2->gsAlpha = 0x48;
    (pPVar2->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    cVar5 = '\0';
    pPVar2->drawDist = cVar4 + ' ';
    pPVar2->type = 0;
    pPVar2->tex = *DAT_00a5293c;
    dVar6 = 210000.0;
    pPVar2->timer = param_4;
    fVar1 = (float)(param_1 * 210000.0);
    pPVar2->scale = fVar1;
    if ((param_8 != 0) && (cVar5 = ' ', param_8 != 1)) {
      cVar5 = mobyutil::MB_randInt(0xff);
      fVar1 = pPVar2->scale;
    }
    pPVar2->rot = cVar5;
    pPVar2->update[0] = (int)fVar1;
    *(short *)(pPVar2->update + 2) = param_4;
    *(undefined1 *)((int)pPVar2->update + 10) = param_9;
    *(char *)((int)pPVar2->update + 0xb) = (char)(param_7 >> 0x18);
    pPVar2->update[6] = (int)in_stack_00000074;
    pPVar2->update[7] = 0;
    pPVar2->update[1] = (int)(float)(param_2 * dVar6);
    if ((in_stack_00000074 != (MobyInstance *)0x0) &&
       (iVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(in_stack_00000074), iVar3 != 0)) {
      pPVar2->update[7] = *(int *)(iVar3 + 0x10);
    }
    pPVar2->update[3] = *param_10;
    pPVar2->update[4] = param_10[1];
    pPVar2->update[5] = param_10[2];
  }
  return pPVar2;
}



//==== 00135860  ns=partupd  size=0x3f0
// sig: undefined UpdatePart_78(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 78 */

void partupd::UpdatePart_78(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  int iVar20;
  ulonglong uVar19;
  undefined8 in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar18 = (longlong)(int)part;
  auVar25 = ZEXT416(0xfffffff0);
  auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar25 = loadVectorLeftIndexed(10,lVar18);
  auVar25 = vectorShiftRightAlgebraicWord(auVar25,auVar26);
  part->rot = part->rot + *(char *)((int)part->update + 10);
  auVar28 = loadVectorLeftIndexed(0x28,lVar18);
  dVar24 = 0.5;
  auVar26 = vectorShiftRightAlgebraicWord(auVar28,auVar26);
  iVar20 = (int)*(short *)(part->update + 2) - (int)part->timer;
  auVar25 = vectorSubtractUnsignedWordModulo(auVar26,auVar25);
  if (iVar20 < 6) {
    auVar28 = vectorConvertFromSignedFixedPointWord(auVar25,0);
    auVar25 = ZEXT416(0xffffffff);
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = loadVectorLeftIndexed(0x20,lVar18);
    auVar30 = loadVectorLeftIndexed(0x24,lVar18);
    auVar29 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar27 = vectorAddFloatingPoint(auVar25,auVar30);
    auVar25 = loadVectorLeftIndexed(4,0x135840);
    auVar26 = loadVectorLeftIndexed(in_LR,0x135840);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = vectorMultiplyAddFloatingPoint
                        (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar29);
    auVar25 = loadVectorLeftIndexed(8,0x135840);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                         auVar30);
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar26 ^ (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60),
                         auVar28,auVar30);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0xc,lVar18);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar9;
    bVar5 = *(byte *)((int)part->update + 0xb);
    uVar19 = fastfunc::FastDoubleToInt
                       ((double)((float)(longlong)(int)((uint)(bVar5 >> 1) - (uint)bVar5) *
                                 (float)(longlong)iVar20 * 0.2 + (float)bVar5));
  }
  else {
    dVar21 = (double)fastfunc::FastIntToDouble((longlong)*(short *)(part->update + 2) + -6);
    dVar22 = (double)(float)part->update[0];
    bVar5 = *(byte *)((int)part->update + 0xb);
    dVar21 = (double)(float)((double)(longlong)(int)part->timer / dVar21);
    part->scale = (float)((double)(float)((double)(float)(dVar22 + (double)(float)part->update[1]) *
                                          dVar24 - dVar22) * dVar21 + dVar22);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)((double)(bVar5 >> 1) * dVar21));
  }
  fVar6 = (float)part->update[3];
  fVar7 = (float)part->update[4];
  fVar8 = (float)part->update[5];
  fVar12 = (part->pos).x + fVar6;
  fVar13 = (part->pos).y + fVar7;
  fVar11 = (part->pos).z + fVar8;
  iVar20 = part->update[6];
  part->color = (uint)((uVar19 & 0xffffffff) << 0x18) | part->color & 0xffffff;
  (part->pos).x = fVar12;
  (part->pos).y = fVar13;
  (part->pos).z = fVar11;
  if (iVar20 != 0) {
    dVar23 = (double)(*(float *)(iVar20 + 0x10) - fVar12);
    dVar22 = (double)(*(float *)(iVar20 + 0x14) - fVar13);
    dVar21 = (double)(*(float *)(iVar20 + 0x18) - fVar11);
    if (dVar22 <= 2.0 && dVar23 <= 2.0) {
      fVar1 = (float)((double)DAT_00969f78 * dVar23 -
                     (double)(float)((double)hero::g_heroGravityDir * dVar21));
      fVar2 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar22)
                     );
      fVar3 = (float)((double)hero::g_heroGravityDir * dVar22 -
                     (double)(float)((double)DAT_00969f74 * dVar23));
      fVar4 = 0.0;
      fVar10 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar17 = DAT_00729758 / fVar10;
      fVar15 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar15 = fVar3 * fVar17;
      }
      fVar16 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar16 = fVar1 * fVar17;
      }
      fVar14 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar14 = fVar2 * fVar17;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar15 = fVar3 * fVar17;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar16 = fVar1 * fVar17;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar14 = fVar2 * fVar17;
      }
      (part->pos).z = fVar11 + fVar15;
      (part->pos).y = fVar13 + fVar16;
      (part->pos).x = fVar12 + fVar14;
      fVar12 = fVar4;
      fVar13 = fVar4;
      if ((dVar24 < dVar23) || (dVar24 < dVar22)) {
        fVar11 = SQRT((float)(dVar21 * dVar21 +
                             (double)(float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22))));
        if (fVar11 != 0.0) {
          dVar24 = (double)(SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) / fVar11);
          fVar4 = (float)(dVar24 * dVar21);
          fVar12 = (float)(dVar24 * dVar22);
          fVar13 = (float)(dVar24 * dVar23);
        }
      }
      else {
        fVar6 = SQRT((float)(dVar21 * dVar21 +
                            (double)(float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22))));
        if (fVar6 != 0.0) {
          dVar24 = (double)(0.03 / fVar6);
          fVar4 = (float)(dVar24 * dVar21);
          fVar12 = (float)(dVar24 * dVar22);
          fVar13 = (float)(dVar24 * dVar23);
        }
      }
      part->update[3] = (int)fVar13;
      part->update[4] = (int)fVar12;
      part->update[5] = (int)(fVar4 + 0.02);
    }
  }
  iVar20 = fastfunc::FastDecTimerS16(lVar18 + 10);
  if (iVar20 != 0) {
    partproc::DeletePart(lVar18);
  }
  return;
}



//==== 00135c58  ns=partupd  size=0x1ac
// sig: undefined SpawnPart_79(void)
// callers(1): 004cdcd0 mobyupdate_unsorted::UpdateMoby_99
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 79 */

PartInstance * partupd::SpawnPart_79(int param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  char cVar10;
  PartInstance *pPVar9;
  char cVar11;
  
  iVar8 = mobyutil::MB_randInt(5);
  fVar5 = animationSpeed * ((float)(longlong)(iVar8 + 2) + 0.5);
  cVar10 = mobyutil::MB_randInt(0xff);
  pPVar9 = partproc::CreatePart(0x4f);
  if (pPVar9 != (PartInstance *)0x0) {
    fVar1 = *param_2;
    (pPVar9->pos).x = fVar1;
    fVar2 = param_2[1];
    (pPVar9->pos).y = fVar2;
    fVar3 = param_2[2];
    (pPVar9->pos).z = fVar3;
    fVar4 = param_2[3];
    (pPVar9->pos).w = fVar4;
    pPVar9->update[4] = *param_3;
    pPVar9->update[5] = param_3[1];
    pPVar9->update[6] = param_3[2];
    uVar6 = (ushort)(int)fVar5;
    if (param_1 == 0) {
      pPVar9->timer = (uVar6 & 0xff) << 2;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x10);
      pPVar9->timer = uVar6 & 0xff;
      pPVar9->update[0] = (int)(fVar1 - fVar5);
      pPVar9->update[1] = (int)(fVar2 - *(float *)(param_1 + 0x14));
      fVar5 = *(float *)(param_1 + 0x18);
      pPVar9->update[3] = (int)fVar4;
      pPVar9->update[2] = (int)(fVar3 - fVar5);
    }
    pPVar9->update[7] = param_1;
    pPVar9->color = 0x604040ff;
    cVar11 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
    pPVar9->drawDist = cVar11 + ' ';
    pPVar9->rot = cVar10;
    pPVar9->gsAlpha = 0x48;
    pPVar9->type = 0;
    pbVar7 = DAT_00a528d8;
    pPVar9->scale = 42000.0;
    pPVar9->tex = *pbVar7;
  }
  return pPVar9;
}



//==== 00135e04  ns=partupd  size=0x188
// sig: undefined UpdatePart_79(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 79 */

void partupd::UpdatePart_79(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  iVar7 = part->update[7];
  if (iVar7 == 0) {
    fVar1 = (part->pos).x;
    fVar4 = (float)part->update[4];
    fVar2 = (part->pos).y;
    fVar5 = (float)part->update[5];
    fVar3 = (part->pos).z;
    fVar6 = (float)part->update[6];
  }
  else {
    fVar4 = (float)part->update[0] + (float)part->update[4];
    fVar5 = (float)part->update[1] + (float)part->update[5];
    fVar6 = (float)part->update[2] + (float)part->update[6];
    part->update[0] = (int)fVar4;
    part->update[1] = (int)fVar5;
    part->update[2] = (int)fVar6;
    fVar1 = *(float *)(iVar7 + 0x10);
    fVar2 = *(float *)(iVar7 + 0x14);
    fVar3 = *(float *)(iVar7 + 0x18);
    (part->pos).w = *(float *)(iVar7 + 0x1c);
  }
  (part->pos).z = fVar3 + fVar6;
  (part->pos).y = fVar2 + fVar5;
  (part->pos).x = fVar1 + fVar4;
  iVar7 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar7 == 0) {
    if (part->update[7] == 0) {
      uVar8 = part->color;
      dVar9 = (double)fastfunc::FastIntToDouble((longlong)part->timer + -1);
      dVar10 = (double)fastfunc::FastIntToDouble(part->timer);
      uVar8 = fastfunc::FastLerpColor((double)(float)(dVar9 / dVar10),0,uVar8);
    }
    else {
      uVar8 = part->color;
      dVar9 = (double)fastfunc::FastIntToDouble((longlong)part->timer + -1);
      dVar10 = (double)fastfunc::FastIntToDouble(part->timer);
      uVar8 = fastfunc::FastLerpColor((double)(float)(dVar9 / dVar10),uVar8 & 0xffffff,uVar8);
    }
    part->color = uVar8;
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00135f90  ns=partupd  size=0x200
// sig: undefined SpawnPart_80(void)
// callers(1): 0025bcf8 mobyupdate_unsorted::UpdateMoby_1368
// callees(5): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Spawns part 80 */

PartInstance * partupd::SpawnPart_80(float *param_1,int param_2,int param_3)

{
  PartInstance *pPVar1;
  char cVar4;
  short sVar3;
  uint uVar2;
  double dVar5;
  double dVar6;
  
  if ((param_2 == 0) || (-1 < 5 - param_3)) {
    if ((param_2 == 0) && (0xf - param_3 < 0)) {
      pPVar1 = (PartInstance *)0x0;
    }
    else {
      pPVar1 = partproc::CreatePart(0x50);
      if (pPVar1 != (PartInstance *)0x0) {
        (pPVar1->pos).x = *param_1;
        (pPVar1->pos).y = param_1[1];
        (pPVar1->pos).z = param_1[2];
        (pPVar1->pos).w = param_1[3];
        cVar4 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
        pPVar1->update[0] = param_2;
        pPVar1->drawDist = cVar4 + 'p';
        if (param_2 == 0) {
          sVar3 = 0xf - (short)param_3;
          pPVar1->timer = sVar3;
          pPVar1->color = 0x60ff3020;
          pPVar1->gsAlpha = 0x48;
          pPVar1->scale = 630000.0;
          if (param_3 != 0) {
            dVar5 = (double)fastfunc::FastIntToDouble((longlong)sVar3 + -1);
            dVar6 = (double)fastfunc::FastIntToDouble(pPVar1->timer);
            uVar2 = fastfunc::FastLerpColor((double)(float)(dVar5 / dVar6),0x603f1008,0x60ff3020);
            pPVar1->color = uVar2;
          }
        }
        else {
          sVar3 = 5 - (short)param_3;
          pPVar1->timer = sVar3;
          pPVar1->color = 0x80d0a080;
          pPVar1->gsAlpha = 0x44;
          pPVar1->scale = 420000.0;
          if (param_3 != 0) {
            dVar5 = (double)fastfunc::FastIntToDouble((longlong)sVar3 + -1);
            dVar6 = (double)fastfunc::FastIntToDouble(pPVar1->timer);
            uVar2 = fastfunc::FastLerpColor
                              ((double)(float)(dVar5 / dVar6),0x30ffffff,0xffffffff80d0a080);
            pPVar1->color = uVar2;
          }
        }
        pPVar1->type = 0;
        cVar4 = mobyutil::MB_randInt(0xff);
        pPVar1->rot = cVar4;
        pPVar1->tex = *DAT_00a528d8;
      }
    }
  }
  else {
    pPVar1 = (PartInstance *)0x0;
  }
  return pPVar1;
}



//==== 00136198  ns=partupd  size=0x1d0
// sig: undefined ???_UpdatePart_FadeOut(void)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

void partupd::____UpdatePart_FadeOut(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x10)) - uVar1;
  if ((((0x3fffffff < iVar2) && (iVar2 < 0x447f4001)) &&
      (uVar1 = (int)*(uint *)(param_1 + 0x14) >> 0x1f,
      iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x14)) - uVar1,
      iVar2 < 0x447f4001 && 0x3fffffff < iVar2)) &&
     ((uVar1 = (int)*(uint *)(param_1 + 0x18) >> 0x1f,
      iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x18)) - uVar1, 0x3fffffff < iVar2 &&
      (iVar2 < 0x447f4001)))) {
    iVar2 = fastfunc::FastDecTimerS16(param_1 + 10);
    if (iVar2 != 0) {
      partproc::DeletePart(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.95;
      dVar4 = (double)fastfunc::FastIntToDouble((longlong)*(short *)(param_1 + 10) + -1);
      dVar5 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(param_1 + 10));
      uVar3 = fastfunc::FastLerpColor((double)(float)(dVar4 / dVar5),0x603f1008,uVar3);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 4);
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.99;
      dVar4 = (double)fastfunc::FastIntToDouble((longlong)*(short *)(param_1 + 10) + -1);
      dVar5 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(param_1 + 10));
      uVar3 = fastfunc::FastLerpColor((double)(float)(dVar4 / dVar5),0x30ffffff,uVar3);
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
    return;
  }
  partproc::DeletePart(param_1);
  return;
}



//==== 00136368  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_PATH(void)
// callers(0): 
// callees(0): 

/* PATH SECTION HEAD */

void SECTION_HEADER_PATH(void)

{
  DAT_007297a8 = 0x10000;
  return;
}



//==== 00136390  ns=path  size=0x394
// sig: undefined DrawPathDebug(float size, void * cam, int splineIdx, ABGR color, undefined8 param_5, undefined4 flags, undefined4 step)
// callers(0): 
// callees(3): 00065468 stub::STUB_00065468; 0012d0e8 partupd::SpawnPart_41; 005cd098 libc::printf
// strings: 0065323c: 'tried to draw path -1 \n'

ulonglong path::DrawPathDebug(float size,void *cam,int splineIdx,ABGR color,undefined8 param_5,
                             uint flags,int step)

{
  double dVar1;
  uint *puVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  int32_t iVar7;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar12;
  longlong lVar11;
  short sVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  dVar14 = (double)size;
  lVar8 = (longlong)(int)flags;
  if (splineIdx == -1) {
    iVar7 = libc::printf("tried to draw path -1 \n");
    uVar6 = (ulonglong)iVar7;
  }
  else {
    lVar9 = 0;
    puVar2 = *(uint **)((int)Splines + (int)((longlong)splineIdx << 2));
    sVar13 = ((ushort)((LZCOUNT(-(flags & 0x40)) << 0x3a) >> 0x3f) & 3) - 1;
    uVar6 = (ulonglong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        if (0 < (int)lVar9 && (flags & 0x80) != 0) {
          stub::STUB_00065468(local_b0,lVar9 * 0x10 + ZEXT48(puVar2) + 0x10 & 0xffffffff);
        }
        dVar17 = 0.0;
        pfVar10 = (float *)((int)puVar2 + (int)(lVar9 << 4) + 0x10);
        uVar12 = flags & 7;
        bVar4 = true;
        local_a0 = *pfVar10;
        fVar3 = SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                     GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                     GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
        local_9c = pfVar10[1];
        local_98 = pfVar10[2];
        local_94 = pfVar10[3];
        fVar5 = (float)(dVar14 * 1.2000000476837158) / fVar3;
        dVar15 = dVar17;
        if (0.0 - fVar3 < 0.0) {
          dVar15 = (double)(GameCamera.orientMtx.up.z * fVar5);
        }
        dVar16 = dVar17;
        if (0.0 - fVar3 < 0.0) {
          dVar16 = (double)(GameCamera.orientMtx.up.y * fVar5);
        }
        if (0.0 - fVar3 < 0.0) {
          dVar17 = (double)(GameCamera.orientMtx.up.x * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar15 = (double)(GameCamera.orientMtx.up.z * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar16 = (double)(GameCamera.orientMtx.up.y * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar17 = (double)(GameCamera.orientMtx.up.x * fVar5);
        }
        if (uVar12 < 3) {
          if (uVar12 != 0) {
            if (uVar12 < 2) {
              partupd::SpawnPart_41((float)dVar14,&local_a0,cam,0,color,lVar8,0x7f,sVar13,0xff);
            }
            else {
              partupd::SpawnPart_41((float)dVar14,&local_a0,cam,1,color,lVar8,0x7f,sVar13,0xff);
            }
          }
        }
        else if (uVar12 == 4) {
          dVar1 = dVar14 * 0.5 + (double)local_98;
          lVar11 = lVar9;
          while( true ) {
            local_98 = (float)dVar1;
            uVar12 = (uint)lVar11;
            if ((uVar12 == 0) && (!bVar4)) break;
            partupd::SpawnPart_41
                      ((float)dVar14,&local_a0,cam,(int)uVar12 % 10 + 2,color,lVar8,0x7f,sVar13,0xff
                      );
            local_a0 = (float)((double)local_a0 + dVar17);
            bVar4 = false;
            local_9c = (float)((double)local_9c + dVar16);
            dVar1 = (double)local_98 + dVar15;
            lVar11 = (longlong)((int)uVar12 / 10 + ((int)uVar12 >> 0x1f)) +
                     (ulonglong)(uVar12 >> 0x1f);
          }
        }
        lVar9 = lVar9 + step;
        uVar6 = (ulonglong)*puVar2;
      } while ((int)lVar9 < (int)*puVar2);
    }
  }
  return uVar6;
}



//==== 00136724  ns=path  size=0xa4
// sig: undefined InitFollower(PathFollower * follower)
// callers(9): 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}; 002bbd68 mobyupdate_unsorted::UpdateMoby_181; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f44c0 mobyupdate_unsorted::UpdateMoby_218; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 00313188 mobyupdate_unsorted::UpdateMoby_246; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(0): 

void path::InitFollower(PathFollower *follower)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  int iVar7;
  
  follower->state = '\0';
  follower->timer = 0.0;
  pSVar1 = Splines[follower->splineIdx];
  follower->pSpline = pSVar1;
  iVar5 = pSVar1->cnt;
  if (0 < iVar5) {
    iVar7 = 0;
    pSVar6 = pSVar1;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = iVar7 - (iVar7 / iVar5) * iVar5;
      fVar2 = pSVar6->points[0].y - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x14);
      fVar3 = pSVar6->points[0].x - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x10);
      fVar4 = pSVar6->points[0].z - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x18);
      pSVar6->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      iVar5 = pSVar1->cnt;
      pSVar6 = (Spline *)pSVar6->points;
    } while (iVar7 < iVar5);
  }
  return;
}



//==== 001367d0  ns=path  size=0x9c
// sig: int PathFindClosestPnt(float distance, Vec4 * position, Spline * spline)
// callers(31): 000a7968 hero::Hero_UpdateHoverboardRace; 000a9158 hero::Hero_GrindMotion; 000b72b0 hero::TransitionMovement; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c2500 mobyupdate_helpers::M1106_001c2500; 001c26e0 mobyupdate_helpers::M1106_001c26e0; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 00239d98 mobyupdate_helpers::M1284_00239d98; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 0031d8e0 FUN_0031d8e0; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 00344328 mobyupdate_unsorted::UpdateMoby_329; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 003b33c8 mobyupdate_helpers::M556_003b33c8; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 0041f770 mobyupdate_helpers::M691_0041f770; 0041fa18 mobyupdate_helpers::M691_0041fa18; 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(0): 

int path::PathFindClosestPnt(float distance,Vec4 *position,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec4 *pVVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  fVar1 = 1e+11;
  if (0 < spline->cnt) {
    do {
      pVVar5 = spline->points + iVar6;
      fVar3 = pVVar5->y - position->y;
      fVar2 = pVVar5->x - position->x;
      fVar4 = pVVar5->z - position->z;
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      if (ABS(fVar2 - distance) < fVar1) {
        fVar1 = fVar2;
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < spline->cnt);
  }
  return iVar7;
}



//==== 00136890  ns=path  size=0x998
// sig: undefined PathFollowUpdate(float arrive, MobyInstance * moby, PathFollower * follower, undefined4 param_4)
// callers(2): 002bbd68 mobyupdate_unsorted::UpdateMoby_181; 003e2da8 mobyupdate_unsorted::UpdateMoby_622
// callees(2): 0017a230 walk::walk_Update; 005026a0 fastfunc::FastSubRots

void path::PathFollowUpdate(float arrive,MobyInstance *moby,PathFollower *follower,int param_4)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Spline *pSVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ushort uVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar21;
  int iVar22;
  longlong lVar20;
  ulonglong uVar23;
  ulonglong uVar24;
  Spline *pSVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  
  dVar27 = (double)arrive;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar16 = uVar15 - 0x140;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar15;
  puVar11[0x2a] = in_LR;
  puVar11[0x23] = in_f27;
  puVar11[0x24] = in_f28;
  puVar11[0x25] = in_f29;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x20] = unaff_r29;
  puVar11[0x22] = unaff_r31;
  bVar1 = follower->state;
  puVar11[0x21] = unaff_r30;
  uVar23 = (ulonglong)(uint)follower->idx;
  if (bVar1 == 0) {
    pSVar9 = follower->pSpline;
    if (follower->idx < 1) {
      iVar17 = pSVar9->cnt;
      uVar24 = 0;
      uVar23 = 0;
      fVar3 = 1e+11;
      if (0 < iVar17) {
        pSVar25 = pSVar9;
        do {
          fVar7 = pSVar25->points[0].y - (moby->pos).y;
          fVar4 = pSVar25->points[0].x - (moby->pos).x;
          fVar5 = pSVar25->points[0].z - (moby->pos).z;
          pSVar25 = (Spline *)pSVar25->points;
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar7 * fVar7);
          if (ABS(fVar4) < fVar3) {
            uVar23 = uVar24;
            fVar3 = fVar4;
          }
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < iVar17);
      }
      follower->idx = (int)uVar23;
      uVar13 = follower->flags & 3;
      if ((uVar13 == 1) && ((int)uVar23 == iVar17 + -1)) {
        follower->direction = -follower->direction;
      }
      if (uVar13 != 2) {
        uVar10 = pSVar9->cnt;
        lVar19 = uVar23 + uVar10 + (longlong)(char)follower->direction;
        uVar23 = lVar19 - (longlong)((int)lVar19 / (int)uVar10) * (longlong)(int)uVar10;
        follower->idx = (s32)uVar23;
      }
    }
    iVar17 = (int)((uVar23 & 0xffffffff) << 4);
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar7 = fVar3 - *(float *)((int)&pSVar9->points[0].y + iVar17);
    fVar5 = fVar4 - *(float *)((int)&pSVar9->points[0].x + iVar17);
    fVar8 = (moby->pos).z - *(float *)((int)&pSVar9->points[0].z + iVar17);
    iVar17 = (int)((uVar23 & 0xffffffff) << 4);
    follower->distance = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar4 = *(float *)((int)&pSVar9->points[0].x + iVar17) - fVar4;
    fVar3 = *(float *)((int)&pSVar9->points[0].y + iVar17) - fVar3;
    fVar7 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar11 + 0x11) = fVar4;
    *(float *)((int)puVar11 + 0x8c) = fVar3;
    *(float *)(puVar11 + 0x12) = fVar7 - fVar5;
    fVar3 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    if (0.0 < fVar4) {
      lVar19 = uVar15 - 0x130;
      lVar20 = uVar15 - 0x5c;
      lVar18 = uVar15 - 0x6c;
      lVar26 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0xd4) = fVar4;
      *(float *)(puVar11 + 0x1b) = fVar4;
      *(float *)((int)puVar11 + 0xdc) = fVar4;
      *(float *)(puVar11 + 0x1c) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar7;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xc4) * fVar4 * fVar4;
        iVar17 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar20 = uVar15 - 0x6c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar18 = lVar20;
      do {
        fVar4 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xd4) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      lVar19 = lVar16;
      do {
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar22 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8)
                + *(float *)(iVar22 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar5;
    }
    follower->head = fVar3;
    follower->timer = 0.0;
    follower[1].idx = 0;
    follower->state = '\x02';
  }
  else {
    if (2 < bVar1) {
      return;
    }
    if (bVar1 < 2) {
      return;
    }
  }
  iVar22 = (int)((uVar23 & 0xffffffff) << 4);
  pSVar9 = follower->pSpline;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  iVar17 = pSVar9->cnt;
  fVar7 = *(float *)((int)&pSVar9->points[0].x + iVar22) - fVar3;
  fVar5 = *(float *)((int)&pSVar9->points[0].y + iVar22) - fVar4;
  iVar22 = (int)uVar23 + iVar17 + (int)(char)follower->direction;
  fVar6 = ABS(fVar7);
  *(float *)((int)puVar11 + 0x7c) = fVar7;
  fVar8 = ABS(fVar5);
  *(float *)(puVar11 + 0x10) = fVar5;
  iVar22 = iVar22 - (iVar22 / iVar17) * iVar17;
  *(float *)((int)puVar11 + 0x84) = fVar6 - fVar8;
  dVar31 = 0.0;
  uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  fVar7 = ABS(*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    fVar7 = fVar8;
  }
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  fVar14 = ABS(*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    fVar14 = fVar6;
  }
  dVar30 = dVar31;
  if (0.0 < fVar7) {
    lVar19 = uVar15 - 0x130;
    lVar18 = uVar15 - 0x8c;
    lVar20 = uVar15 - 0x7c;
    lVar26 = 2;
    fVar7 = (fVar14 - fVar7) / (fVar14 + fVar7);
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xb4) = fVar7;
    *(float *)(puVar11 + 0x17) = fVar7;
    *(float *)((int)puVar11 + 0xbc) = fVar7;
    *(float *)(puVar11 + 0x18) = fVar7;
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar7;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar7 * fVar6;
    do {
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xa4) * fVar7 * fVar7;
      iVar17 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar20 = uVar15 - 0x8c;
    pfVar21 = (float *)&DAT_007358e0;
    lVar19 = lVar16;
    lVar18 = lVar20;
    do {
      fVar7 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xb4) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar18 = 2;
    lVar19 = lVar16;
    do {
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar12 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar8 + fVar5);
  }
  fVar3 = *(float *)((int)pSVar9 + iVar22 * 0x10 + 0x10) - fVar3;
  fVar4 = *(float *)((int)pSVar9 + iVar22 * 0x10 + 0x14) - fVar4;
  fVar5 = ABS(fVar3);
  fVar7 = ABS(fVar4);
  *(float *)(puVar11 + 0xe) = fVar3;
  *(float *)((int)puVar11 + 0x74) = fVar4;
  *(float *)(puVar11 + 0xf) = fVar5 - fVar7;
  uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar7;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar7 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  if (0.0 < fVar3) {
    lVar26 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar3;
    *(float *)(puVar11 + 0x13) = fVar3;
    *(float *)((int)puVar11 + 0x9c) = fVar3;
    *(float *)(puVar11 + 0x14) = fVar3;
    lVar19 = uVar15 - 0x130;
    fVar3 = fVar7 * fVar7;
    lVar18 = uVar15 - 0xac;
    lVar20 = uVar15 - 0x9c;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar7;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar3;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar3 * fVar3;
      iVar17 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar20 = uVar15 - 0xac;
    pfVar21 = (float *)&DAT_007358e0;
    lVar19 = lVar16;
    lVar18 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar7 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x94) * fVar3;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar19 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar22 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  dVar28 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar31);
  dVar29 = (double)fastfunc::FastSubRots((float)dVar30,(moby->rotation).z);
  dVar31 = (double)fastfunc::FastSubRots((float)dVar31,(moby->rotation).z);
  uVar2 = follower->direction;
  if ((*(ushort *)(param_4 + 0xee) & 2) == 0) {
    iVar17 = follower->idx;
    pSVar9 = follower->pSpline;
    fVar3 = (moby->pos).z;
    fVar7 = (moby->pos).y - pSVar9->points[iVar17].y;
    fVar5 = (moby->pos).x - pSVar9->points[iVar17].x;
    fVar4 = pSVar9->points[iVar17].z;
    fVar7 = fVar5 * fVar5 + fVar7 * fVar7;
  }
  else {
    iVar17 = follower->idx;
    pSVar9 = follower->pSpline;
    fVar3 = (moby->pos).x;
    fVar7 = (moby->pos).y - pSVar9->points[iVar17].y;
    fVar4 = pSVar9->points[iVar17].x;
    fVar7 = fVar7 * fVar7;
  }
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + fVar7);
  follower->distance = fVar3;
  if ((((fVar3 <= (float)(dVar27 * 20.0)) || (1.5707963705062866 < dVar28)) ||
      (dVar28 < 0.03490658476948738)) ||
     ((1.5707963705062866 < dVar29 && (dVar31 < 0.785398006439209)))) {
    if ((follower->flags & 3) != 0) {
      iVar22 = 0;
      if (-1 < (char)uVar2) {
        iVar22 = pSVar9->cnt + -1;
      }
      if (iVar17 == iVar22) {
        if ((follower->flags & 3) == 1) {
          follower->direction = -uVar2;
          iVar22 = pSVar9->cnt;
          iVar17 = iVar17 + iVar22 + (int)(char)-uVar2;
          follower->idx = iVar17 - (iVar17 / iVar22) * iVar22;
        }
        else {
          follower->state = '\a';
        }
        goto LAB_001371c4;
      }
    }
    iVar22 = pSVar9->cnt;
    iVar17 = iVar17 + iVar22 + (int)(char)uVar2;
    follower->idx = iVar17 - (iVar17 / iVar22) * iVar22;
  }
LAB_001371c4:
  follower->head = (float)dVar30;
  walk::walk_Update(dVar27,dVar30,(double)(DAT_0071f418 * 5.0),moby,param_4);
  return;
}



//==== 00137238  ns=path  size=0x374
// sig: double ClosestPntOnSegmentAtDist(float radius, Vec4 * outPnt, Vec4 * prevPnt, Vec4 * pos, Vec4 * start, Vec4 * end)
// callers(3): 001378e0 path::NearestPntOnPathAtDist; 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18
// callees(0): 

double path::ClosestPntOnSegmentAtDist
                 (float radius,Vec4 *outPnt,Vec4 *prevPnt,Vec4 *pos,Vec4 *start,Vec4 *end)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  dVar15 = (double)radius;
  dVar22 = (double)start->y;
  dVar23 = (double)pos->y;
  dVar17 = (double)(float)((double)end->y - dVar22);
  dVar20 = (double)start->x;
  dVar21 = (double)pos->x;
  dVar27 = (double)end->x;
  dVar24 = (double)start->z;
  dVar16 = (double)(float)(dVar27 - dVar20);
  dVar25 = (double)pos->z;
  dVar18 = (double)(float)((double)end->z - dVar24);
  fVar1 = (float)(dVar18 * dVar18 +
                 (double)(float)(dVar16 * dVar16 + (double)(float)(dVar17 * dVar17)));
  fVar13 = end->w;
  dVar14 = (double)(-(float)(dVar18 * (double)(float)(dVar24 - dVar25) +
                            (double)(float)(dVar16 * (double)(float)(dVar20 - dVar21) +
                                           (double)(float)(dVar17 * (double)(float)(dVar22 - dVar23)
                                                          ))) / fVar1);
  fVar2 = (float)(dVar17 * dVar14 + dVar22);
  fVar3 = (float)(dVar16 * dVar14 + dVar20);
  fVar4 = (float)(dVar18 * dVar14 + dVar24);
  fVar5 = (float)((double)fVar2 - dVar23);
  fVar6 = (float)((double)fVar3 - dVar21);
  fVar7 = (float)((double)fVar4 - dVar25);
  dVar19 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (dVar15 <= dVar19) {
    if (0.0 <= dVar14) {
      if (dVar14 <= 1.0) {
        outPnt->x = fVar3;
        outPnt->y = fVar2;
        outPnt->z = fVar4;
        outPnt->w = fVar13;
      }
      else {
        outPnt->x = end->x;
        fVar2 = end->y;
        outPnt->y = fVar2;
        fVar3 = end->z;
        outPnt->z = fVar3;
        outPnt->w = end->w;
        fVar2 = fVar2 - pos->y;
        fVar1 = (float)(dVar27 - (double)pos->x);
        fVar3 = fVar3 - pos->z;
        dVar19 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) -
                                    dVar15));
      }
    }
    else {
      outPnt->x = start->x;
      fVar2 = start->y;
      outPnt->y = fVar2;
      fVar3 = start->z;
      outPnt->z = fVar3;
      outPnt->w = start->w;
      fVar2 = fVar2 - pos->y;
      fVar1 = (float)(dVar20 - (double)pos->x);
      fVar3 = fVar3 - pos->z;
      dVar19 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) -
                                  dVar15));
    }
    if (dVar19 < (double)(float)(dVar15 * 0.009999999776482582)) {
      dVar19 = 0.0;
    }
  }
  else {
    dVar26 = 0.0;
    dVar28 = (double)(SQRT((float)(dVar15 * dVar15 - (double)(float)(dVar19 * dVar19))) /
                     SQRT(fVar1));
    dVar27 = (double)(float)(dVar14 - dVar28);
    dVar19 = dVar26;
    if ((0.0 <= dVar27) && (dVar19 = dVar27, 1.0 < dVar27)) {
      dVar19 = 1.0;
    }
    dVar27 = (double)(float)(dVar28 + dVar14);
    dVar14 = dVar26;
    if ((0.0 <= dVar27) && (dVar14 = dVar27, 1.0 < dVar27)) {
      dVar14 = 1.0;
    }
    fVar1 = (float)(dVar17 * dVar14 + dVar22);
    fVar2 = (float)(dVar17 * dVar19 + dVar22);
    fVar3 = (float)(dVar16 * dVar19 + dVar20);
    fVar4 = (float)(dVar16 * dVar14 + dVar20);
    fVar5 = (float)(dVar18 * dVar19 + dVar24);
    fVar6 = (float)(dVar18 * dVar14 + dVar24);
    fVar7 = (float)((double)fVar2 - dVar23);
    fVar8 = (float)((double)fVar1 - dVar23);
    fVar9 = (float)((double)fVar3 - dVar21);
    fVar10 = (float)((double)fVar4 - dVar21);
    fVar11 = (float)((double)fVar5 - dVar25);
    fVar12 = (float)((double)fVar6 - dVar25);
    dVar14 = ABS((double)(float)((double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7) -
                                dVar15));
    if (dVar14 - (double)(float)(dVar15 * 0.009999999776482582) < 0.0) {
      dVar14 = dVar26;
    }
    dVar19 = ABS((double)(float)((double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) -
                                dVar15));
    if (dVar19 - (double)(float)(dVar15 * 0.009999999776482582) < 0.0) {
      dVar19 = dVar26;
    }
    if (dVar19 <= dVar14) {
      if (dVar14 == dVar19) {
        fVar7 = (float)((double)fVar2 - (double)prevPnt->y);
        fVar8 = (float)((double)fVar1 - (double)prevPnt->y);
        fVar9 = (float)((double)fVar3 - (double)prevPnt->x);
        fVar10 = (float)((double)fVar4 - (double)prevPnt->x);
        fVar11 = (float)((double)fVar5 - (double)prevPnt->z);
        fVar12 = (float)((double)fVar6 - (double)prevPnt->z);
        if (SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) <=
            SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7)) {
          outPnt->x = fVar4;
          outPnt->y = fVar1;
          outPnt->z = fVar6;
          outPnt->w = fVar13;
        }
        else {
          outPnt->x = fVar3;
          outPnt->y = fVar2;
          outPnt->z = fVar5;
          outPnt->w = fVar13;
          dVar19 = dVar14;
        }
      }
      else {
        outPnt->x = fVar4;
        outPnt->y = fVar1;
        outPnt->z = fVar6;
        outPnt->w = fVar13;
      }
    }
    else {
      outPnt->x = fVar3;
      outPnt->y = fVar2;
      outPnt->z = fVar5;
      outPnt->w = fVar13;
      dVar19 = dVar14;
    }
  }
  return dVar19;
}



//==== 001375b8  ns=path  size=0x320
// sig: double ClosestTOnSegment(float r, float * out_t, Vec4 * prev, Vec4 * pos, Vec4 * a, Vec4 * b)
// callers(1): 00137a98 path::NearestPntOnPath
// callees(0): 

double path::ClosestTOnSegment(float r,float *out_t,Vec4 *prev,Vec4 *pos,Vec4 *a,Vec4 *b)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar7 = (double)r;
  dVar12 = (double)a->y;
  dVar11 = (double)pos->y;
  dVar20 = (double)(float)((double)b->y - dVar12);
  dVar15 = (double)a->x;
  dVar13 = (double)pos->x;
  dVar10 = (double)a->z;
  dVar21 = (double)(float)((double)b->x - dVar15);
  dVar9 = (double)pos->z;
  dVar19 = (double)(float)((double)b->z - dVar10);
  fVar1 = (float)(dVar19 * dVar19 +
                 (double)(float)(dVar21 * dVar21 + (double)(float)(dVar20 * dVar20)));
  dVar22 = (double)(-(float)(dVar19 * (double)(float)(dVar10 - dVar9) +
                            (double)(float)(dVar21 * (double)(float)(dVar15 - dVar13) +
                                           (double)(float)(dVar20 * (double)(float)(dVar12 - dVar11)
                                                          ))) / fVar1);
  fVar2 = (float)((double)(float)(dVar20 * dVar22 + dVar12) - dVar11);
  fVar3 = (float)((double)(float)(dVar21 * dVar22 + dVar15) - dVar13);
  fVar4 = (float)((double)(float)(dVar19 * dVar22 + dVar10) - dVar9);
  dVar8 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar7 <= dVar8) {
    if (0.0 <= dVar22) {
      if (1.0 < dVar22) {
        *out_t = 1.0;
        fVar1 = b->y - pos->y;
        fVar2 = b->x - pos->x;
        fVar3 = b->z - pos->z;
        dVar8 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) -
                                   dVar7));
      }
    }
    else {
      *out_t = 0.0;
      fVar1 = a->y - pos->y;
      fVar2 = a->x - pos->x;
      fVar3 = a->z - pos->z;
      dVar8 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) -
                                 dVar7));
    }
    if (dVar8 < (double)(float)(dVar7 * 0.009999999776482582)) {
      dVar8 = 0.0;
    }
  }
  else {
    dVar16 = 0.0;
    dVar8 = (double)(SQRT((float)(dVar7 * dVar7 - (double)(float)(dVar8 * dVar8))) / SQRT(fVar1));
    dVar17 = (double)(float)(dVar22 - dVar8);
    dVar18 = dVar16;
    if ((0.0 <= dVar17) && (dVar18 = dVar17, 1.0 < dVar17)) {
      dVar18 = 1.0;
    }
    dVar8 = (double)(float)(dVar8 + dVar22);
    dVar22 = dVar16;
    if ((0.0 <= dVar8) && (dVar22 = dVar8, 1.0 < dVar8)) {
      dVar22 = 1.0;
    }
    dVar14 = (double)(float)(dVar21 * dVar18 + dVar15);
    dVar15 = (double)(float)(dVar21 * dVar22 + dVar15);
    dVar17 = (double)(float)(dVar20 * dVar18 + dVar12);
    dVar21 = (double)(float)(dVar19 * dVar18 + dVar10);
    dVar10 = (double)(float)(dVar19 * dVar22 + dVar10);
    dVar12 = (double)(float)(dVar20 * dVar22 + dVar12);
    fVar1 = (float)(dVar14 - dVar13);
    fVar2 = (float)(dVar15 - dVar13);
    fVar3 = (float)(dVar17 - dVar11);
    fVar4 = (float)(dVar21 - dVar9);
    fVar5 = (float)(dVar12 - dVar11);
    fVar6 = (float)(dVar10 - dVar9);
    dVar9 = ABS((double)(float)((double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3) - dVar7)
               );
    if (dVar9 - (double)(float)(dVar7 * 0.009999999776482582) < 0.0) {
      dVar9 = dVar16;
    }
    dVar8 = ABS((double)(float)((double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5) - dVar7)
               );
    if (dVar8 - (double)(float)(dVar7 * 0.009999999776482582) < 0.0) {
      dVar8 = dVar16;
    }
    if (dVar8 <= dVar9) {
      if (dVar9 == dVar8) {
        fVar1 = (float)(dVar17 - (double)prev->y);
        fVar2 = (float)(dVar12 - (double)prev->y);
        fVar3 = (float)(dVar14 - (double)prev->x);
        fVar4 = (float)(dVar15 - (double)prev->x);
        fVar5 = (float)(dVar21 - (double)prev->z);
        fVar6 = (float)(dVar10 - (double)prev->z);
        if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2) <=
            SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1)) {
          *out_t = (float)dVar22;
        }
        else {
          *out_t = (float)dVar18;
          dVar8 = dVar9;
        }
      }
      else {
        *out_t = (float)dVar22;
      }
    }
    else {
      *out_t = (float)dVar18;
      dVar8 = dVar9;
    }
  }
  return dVar8;
}



//==== 001378e0  ns=path  size=0x1b0
// sig: undefined NearestPntOnPathAtDist(float radius, Vec4 * outPnt, undefined4 prevPnt, undefined4 pos, Spline * spline)
// callers(2): 00421f08 mobyupdate_helpers::M694_00421f08; 00473158 mobyupdate_helpers::M820_00473158
// callees(1): 00137238 path::ClosestPntOnSegmentAtDist

double path::NearestPntOnPathAtDist
                 (float radius,Vec4 *outPnt,Vec4 *prevPnt,Vec4 *pos,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  Spline *pSVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_60;
  
  dVar9 = (double)radius;
  iVar7 = 0;
  dVar11 = 99999997952.0;
  if (0 < spline->cnt + -1) {
    dVar12 = 0.10000000149011612;
    pSVar8 = spline;
    do {
      dVar10 = ClosestPntOnSegmentAtDist
                         ((float)dVar9,&local_60,prevPnt,pos,pSVar8->points,pSVar8->points + 1);
      if (dVar11 <= dVar10) {
        if (ABS((double)(float)(dVar10 - dVar11)) < dVar12) {
          fVar1 = local_60.y - prevPnt->y;
          fVar2 = outPnt->y - prevPnt->y;
          fVar3 = local_60.x - prevPnt->x;
          fVar4 = outPnt->x - prevPnt->x;
          fVar5 = local_60.z - prevPnt->z;
          fVar6 = outPnt->z - prevPnt->z;
          if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1) <
              SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2)) {
            outPnt->x = local_60.x;
            outPnt->y = local_60.y;
            outPnt->z = local_60.z;
            outPnt->w = local_60.w;
            dVar11 = dVar10;
          }
        }
      }
      else {
        outPnt->x = local_60.x;
        outPnt->y = local_60.y;
        outPnt->z = local_60.z;
        outPnt->w = local_60.w;
        dVar11 = dVar10;
      }
      iVar7 = iVar7 + 1;
      pSVar8 = (Spline *)pSVar8->points;
    } while (iVar7 < spline->cnt + -1);
  }
  return dVar11;
}



//==== 00137a98  ns=path  size=0xf8
// sig: float NearestPntOnPath(float radius, int * outSeg, float * out, Vec4 * prevPnt, Vec4 * pos, Spline * spline)
// callers(0): 
// callees(1): 001375b8 path::ClosestTOnSegment

float path::NearestPntOnPath
                (float radius,int *outSeg,float *out,Vec4 *prevPnt,Vec4 *pos,Spline *spline)

{
  int iVar1;
  Spline *pSVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_50 [2];
  
  dVar3 = (double)radius;
  iVar1 = 0;
  dVar5 = 99999997952.0;
  pSVar2 = spline;
  if (0 < spline->cnt + -1) {
    do {
      dVar4 = ClosestTOnSegment((float)dVar3,local_50,prevPnt,pos,pSVar2->points,pSVar2->points + 1)
      ;
      if (dVar4 < dVar5) {
        *outSeg = iVar1;
        *out = local_50[0];
        dVar5 = dVar4;
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (Spline *)pSVar2->points;
    } while (iVar1 < spline->cnt + -1);
  }
  return (float)dVar5;
}



//==== 00137b90  ns=path  size=0x38
// sig: undefined Path_InitFromMobyInstance(MobyInstance * moby, Spline * spline)
// callers(0): 
// callees(0): 

void path::Path_InitFromMobyInstance(MobyInstance *moby,Spline *spline)

{
  f32 temp;
  
  spline->zOff = 0.25;
  temp = (moby->pos).x;
  spline->cursor = 0;
  spline->points[0].x = temp;
  temp = (moby->pos).y;
  spline->cnt = 1;
  spline->points[0].y = temp;
  temp = (moby->pos).z;
  spline->points[0].w = 0.0;
  spline->points[0].z = temp;
  return;
}



//==== 00137bc8  ns=path  size=0x8c
// sig: undefined Path_RaiseCollLine(float zOff, MobyInstance * moby, Vec4 * a, Vec4 * b)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

void path::Path_RaiseCollLine(float zOff,MobyInstance *moby,Vec4 *a,Vec4 *b)

{
  double dVar1;
  
  dVar1 = (double)zOff;
  b->z = (float)((double)b->z + dVar1);
  a->z = (float)((double)a->z + dVar1);
  collproc::CollLine(a,b,4,moby,0);
  a->z = (float)((double)a->z - dVar1);
  b->z = (float)((double)b->z - dVar1);
  return;
}



//==== 00137c54  ns=path  size=0x190
// sig: undefined PathTryStep(MobyInstance * moby, Spline * spline)
// callers(1): 00137de4 path::Path_RecordPnt
// callees(1): 00057820 collproc::CollLine

int path::PathTryStep(MobyInstance *moby,Spline *spline)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  
  lVar3 = (longlong)(int)moby;
  iVar2 = spline->cnt;
  iVar9 = -1;
  if (iVar2 != 0) {
    uVar5 = spline->cursor;
    lVar6 = (ulonglong)uVar5 + 1;
    uVar8 = (longlong)((int)lVar6 / iVar2) * (longlong)iVar2;
    uVar7 = lVar6 - uVar8;
    iVar2 = (int)((uVar7 & 0xffffffff) << 4);
    spline->cursor = (int32_t)uVar7;
    dVar10 = (double)spline->zOff;
    *(float *)((int)&spline->points[0].z + iVar2) =
         (float)((double)*(float *)((int)&spline->points[0].z + iVar2) + dVar10);
    (moby->pos).z = (float)((double)(moby->pos).z + dVar10);
    iVar4 = collproc::CollLine(lVar3 + 0x10,
                               (longlong)(int)spline + ((ulonglong)uVar5 & 0xfffffff) * 0x10 +
                               (uVar8 & 0xfffffff) * -0x10 + 0x20 & 0xffffffff,4,lVar3,0);
    fVar1 = (float)((double)(moby->pos).z - dVar10);
    (moby->pos).z = fVar1;
    *(float *)((int)&spline->points[0].z + iVar2) =
         (float)((double)*(float *)((int)&spline->points[0].z + iVar2) - dVar10);
    uVar5 = spline->cnt;
    dVar10 = (double)spline->zOff;
    iVar2 = spline->cursor;
    if (iVar4 == 0) {
      uVar5 = iVar2 + 1;
      spline->cnt = uVar5;
      iVar9 = iVar2;
      if (iVar2 != -1) {
        return iVar2;
      }
    }
    if (uVar5 != iVar2 + 1U) {
      uVar7 = (longlong)(int)spline + ((ulonglong)uVar5 & 0xfffffff) * 0x10;
      iVar2 = (int)uVar7;
      *(float *)(iVar2 + 8) = (float)((double)*(float *)(iVar2 + 8) + dVar10);
      (moby->pos).z = (float)((double)fVar1 + dVar10);
      iVar4 = collproc::CollLine(lVar3 + 0x10,uVar7 & 0xffffffff,4,lVar3,0);
      (moby->pos).z = (float)((double)(moby->pos).z - dVar10);
      *(float *)(iVar2 + 8) = (float)((double)*(float *)(iVar2 + 8) - dVar10);
      if (iVar4 == 0) {
        iVar9 = spline->cnt + -1;
      }
    }
  }
  return iVar9;
}



//==== 00137de4  ns=Global  size=0xb8
// sig: undefined path::Path_RecordPnt(undefined4 moby, undefined4 spline)
// callers(0): 
// callees(1): 00137c54 path::PathTryStep

ulonglong path__Path_RecordPnt(MobyInstance *moby,Spline *spline)

{
  int iVar1;
  int iVar2;
  
  iVar1 = spline->cnt;
  if (iVar1 < spline->cap) {
    spline->points[iVar1].x = (moby->pos).x;
    spline->points[iVar1].y = (moby->pos).y;
    spline->points[iVar1].z = (moby->pos).z;
    spline->points[iVar1].w = (moby->pos).w;
    spline->points[0].w = 0.0;
  }
  iVar1 = path::PathTryStep(moby,spline);
  if (iVar1 < 0) {
    iVar1 = spline->cnt;
    iVar2 = spline->cap;
    if (iVar1 <= iVar2) {
      iVar1 = iVar1 + 1;
      spline->cnt = iVar1;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    spline->cnt = iVar1;
    iVar2 = spline->cap;
  }
  return (ulonglong)((longlong)iVar2 - (longlong)iVar1) >> 0x3f ^ 1;
}



//==== 00137ea0  ns=path  size=0x38c
// sig: undefined Path_TryExtrapolate(MobyInstance * moby, Spline * spline)
// callers(0): 
// callees(2): 00057820 collproc::CollLine; 000fc620 mobyutil::MB_randInt

int32_t path::Path_TryExtrapolate(MobyInstance *moby,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  Vec4 *pVVar9;
  ulonglong uVar10;
  int32_t iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_70 [24];
  int idx;
  
  lVar4 = (longlong)(int)moby;
  idx = spline->cnt;
  iVar11 = -1;
  if (idx != 0) {
    uVar8 = spline->cursor;
    lVar6 = (ulonglong)uVar8 + 1;
    uVar10 = (longlong)((int)lVar6 / idx) * (longlong)idx;
    uVar7 = lVar6 - uVar10;
    idx = (int)((uVar7 & 0xffffffff) << 4);
    spline->cursor = (int32_t)uVar7;
    dVar18 = (double)spline->zOff;
    lVar6 = lVar4 + 0x10;
    *(float *)((int)&spline->points[0].z + idx) =
         (float)((double)*(float *)((int)&spline->points[0].z + idx) + dVar18);
    (moby->pos).z = (float)((double)(moby->pos).z + dVar18);
    iVar5 = collproc::CollLine(lVar6,(longlong)(int)spline + ((ulonglong)uVar8 & 0xfffffff) * 0x10 +
                                     (uVar10 & 0xfffffff) * -0x10 + 0x20 & 0xffffffff,4,lVar4,0);
    fVar1 = (float)((double)(moby->pos).z - dVar18);
    dVar12 = (double)fVar1;
    (moby->pos).z = fVar1;
    *(float *)((int)&spline->points[0].z + idx) =
         (float)((double)*(float *)((int)&spline->points[0].z + idx) - dVar18);
    uVar8 = spline->cnt;
    dVar18 = (double)spline->zOff;
    idx = spline->cursor;
    if (iVar5 == 0) {
      uVar8 = idx + 1;
      spline->cnt = uVar8;
      iVar11 = idx;
    }
    if (uVar8 == idx + 1U) {
      if (2 < (int)uVar8) {
        pVVar9 = spline->points + idx + -1;
        dVar14 = (double)(pVVar9->x - pVVar9[1].x);
        dVar15 = (double)(pVVar9->y - pVVar9[1].y);
        dVar13 = (double)pVVar9->w;
        dVar16 = (double)(pVVar9->z - pVVar9[1].z);
        dVar17 = 0.10000000149011612;
        if (iVar11 == -1) {
          iVar5 = mobyutil::MB_randInt(1);
          idx = spline->cursor;
          dVar12 = (double)(moby->pos).z;
          dVar18 = (double)spline->zOff;
          if (iVar5 != 0) {
            fVar1 = spline->points[idx].x;
            fVar2 = spline->points[idx].y;
            fVar3 = spline->points[idx].z;
            (moby->pos).z = (float)(dVar12 + dVar18);
            dVar12 = (double)(float)(dVar16 * dVar17 - (double)fVar3) + dVar18;
            idx = collproc::CollLine(lVar6,local_70,4,lVar4,0);
            (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
            if (idx != 0) {
              return -1;
            }
            idx = spline->cursor;
            spline->points[idx].x = (float)(dVar14 * dVar17 - (double)fVar1);
            spline->points[idx].z = (float)((double)(float)dVar12 - dVar18);
            spline->points[idx].y = (float)(dVar15 * dVar17 - (double)fVar2);
            spline->points[idx].w = (float)dVar13;
            return spline->cursor;
          }
        }
        fVar1 = spline->points[idx].x;
        fVar2 = spline->points[idx].y;
        fVar3 = spline->points[idx].z;
        (moby->pos).z = (float)(dVar12 + dVar18);
        dVar12 = (double)(float)(dVar16 * dVar17 + (double)fVar3) + dVar18;
        idx = collproc::CollLine(lVar6,local_70,4,lVar4,0);
        (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
        if (idx == 0) {
          idx = spline->cursor;
          spline->points[idx].x = (float)(dVar14 * dVar17 + (double)fVar1);
          spline->points[idx].z = (float)((double)(float)dVar12 - dVar18);
          spline->points[idx].y = (float)(dVar15 * dVar17 + (double)fVar2);
          spline->points[idx].w = (float)dVar13;
          iVar11 = spline->cursor;
        }
      }
    }
    else if (iVar11 == -1) {
      uVar7 = (longlong)(int)spline + ((ulonglong)uVar8 & 0xfffffff) * 0x10;
      idx = (int)uVar7;
      *(float *)(idx + 8) = (float)((double)*(float *)(idx + 8) + dVar18);
      (moby->pos).z = (float)(dVar12 + dVar18);
      iVar5 = collproc::CollLine(lVar6,uVar7 & 0xffffffff,4,lVar4,0);
      (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
      *(float *)(idx + 8) = (float)((double)*(float *)(idx + 8) - dVar18);
      if (iVar5 == 0) {
        iVar11 = spline->cnt + -1;
      }
    }
  }
  return iVar11;
}



//==== 00138238  ns=path  size=0x394
// sig: undefined GetPathPnt(float distance, MobyInstance * moby, Spline * spline, Vec4 * outPos, int segment, int step)
// callers(3): 0026df78 mobyupdate_unsorted::UpdateMoby_1403; 0031d9e8 mobyupdate_unsorted::UpdateMoby_259; 0031fbe0 mobyupdate_unsorted::UpdateMoby_a_lot_17
// callees(0): 

longlong path::GetPathPnt(float distance,MobyInstance *moby,Spline *spline,Vec4 *outPos,int segment,
                         int step)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int idx;
  
  lVar20 = (longlong)step;
  iVar19 = spline->cnt + -1;
  lVar18 = (longlong)
           (int)(segment + step +
                ((uint)((LZCOUNT(-segment) << 0x3a) >> 0x3f) &
                (iVar19 + ((uint)(-lVar20 >> 0x3f) & (segment + 1) - iVar19)) - (segment + step)));
  idx = (int)((longlong)segment << 4);
  lVar18 = lVar18 + ((LZCOUNT(iVar19 - segment) << 0x3a) >> 0x3f &
                    ((longlong)(segment + -1) + (-lVar20 >> 0x3f & -(longlong)(segment + -1))) -
                    lVar18);
  iVar17 = (int)lVar18;
  fVar1 = *(float *)((int)&spline->points[0].y + idx);
  fVar2 = *(float *)((int)&spline->points[0].x + idx);
  fVar3 = spline->points[iVar17].y;
  fVar4 = spline->points[iVar17].x;
  fVar12 = fVar3 - fVar1;
  fVar13 = fVar4 - fVar2;
  fVar5 = spline->points[iVar17].z;
  fVar6 = *(float *)((int)&spline->points[0].z + idx);
  fVar15 = fVar5 - fVar6;
  fVar7 = 0.0;
  fVar14 = fVar15 * fVar15 + fVar13 * fVar13 + fVar12 * fVar12;
  fVar8 = spline->points[iVar17].w;
  fVar16 = SQRT(fVar14);
  fVar9 = fVar7;
  fVar11 = fVar7;
  fVar10 = fVar7;
  if (fVar16 != 0.0) {
    fVar10 = 1.0 / SQRT(fVar14);
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar13 * fVar10;
    fVar11 = fVar12 * fVar10;
    fVar10 = fVar15 * fVar10;
  }
  fVar1 = fVar11 * ((moby->pos).y - fVar1) +
          fVar10 * ((moby->pos).z - fVar6) + fVar9 * ((moby->pos).x - fVar2) + distance;
  lVar21 = (longlong)segment;
  if (fVar16 < fVar1) {
    fVar1 = fVar1 - fVar16;
    idx = iVar17 + step +
          ((uint)((LZCOUNT(-iVar17) << 0x3a) >> 0x3f) &
          (iVar19 + ((uint)(-lVar20 >> 0x3f) & (iVar17 + 1) - iVar19)) - (iVar17 + step));
    idx = idx + ((uint)((LZCOUNT(iVar19 - iVar17) << 0x3a) >> 0x3f) &
                (iVar17 + -1 + ((uint)(-lVar20 >> 0x3f) & -(iVar17 + -1))) - idx);
    fVar3 = spline->points[idx].y - fVar3;
    fVar4 = spline->points[idx].x - fVar4;
    fVar5 = spline->points[idx].z - fVar5;
    fVar8 = spline->points[idx].w;
    fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
    lVar21 = lVar18;
    fVar9 = fVar7;
    fVar10 = fVar7;
    fVar11 = fVar7;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar9 = fVar4 * fVar6;
      fVar10 = fVar5 * fVar6;
      fVar11 = fVar3 * fVar6;
    }
  }
  idx = (int)(lVar21 << 4);
  fVar3 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
  fVar1 = fVar1 / fVar3;
  fVar2 = fVar7;
  if (0.0 - fVar3 < 0.0) {
    fVar2 = fVar9 * fVar1;
  }
  fVar4 = fVar7;
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar11 * fVar1;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar7 = fVar10 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar2 = fVar9 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar4 = fVar11 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar7 = fVar10 * fVar1;
  }
  outPos->x = fVar2 + *(float *)((int)&spline->points[0].x + idx);
  outPos->y = fVar4 + *(float *)((int)&spline->points[0].y + idx);
  fVar1 = *(float *)((int)&spline->points[0].z + idx);
  outPos->w = fVar8;
  outPos->z = fVar7 + fVar1;
  return lVar21;
}



//==== 001385d0  ns=path  size=0x1d0
// sig: undefined Path_PickNextNode(MobyInstance * moby, Spline * spline, Vec4 * ref, Vec4 * out)
// callers(9): 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 004403e8 mobyupdate_unsorted::UpdateMoby_740; 00444a50 mobyupdate_unsorted::UpdateMoby_745; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

longlong path::Path_PickNextNode(MobyInstance *moby,Spline *spline,Vec4 *ref,Vec4 *out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Vec4 *pVVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  
  fVar1 = (moby->pos).y;
  fVar2 = (moby->pos).x;
  fVar6 = fVar1 - ref->y;
  fVar3 = ref->x;
  fVar4 = (moby->pos).z;
  fVar9 = fVar2 - fVar3;
  lVar17 = -1;
  fVar12 = fVar4 - ref->z;
  lVar21 = 0;
  fVar5 = 10000.0;
  lVar19 = -1;
  fVar14 = fVar5;
  if (0 < spline->cnt) {
    do {
      pVVar15 = spline->points + (int)lVar21;
      fVar7 = pVVar15->y - fVar1;
      fVar10 = pVVar15->x - fVar2;
      fVar8 = pVVar15->y - ref->y;
      fVar13 = pVVar15->z - fVar4;
      fVar11 = pVVar15->x - fVar3;
      fVar10 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar7 * fVar7);
      fVar7 = pVVar15->z - ref->z;
      fVar7 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar8 * fVar8);
      if (fVar10 < fVar5) {
        lVar19 = lVar21;
        fVar5 = fVar10;
      }
      if (fVar7 < SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar6 * fVar6) && fVar7 < fVar14) {
        lVar17 = lVar21;
        fVar14 = fVar7;
      }
      iVar22 = (int)lVar21 + 1;
      lVar21 = (longlong)iVar22;
    } while (iVar22 < spline->cnt);
    iVar22 = (int)lVar17;
    if (iVar22 != -1) {
      iVar20 = (int)lVar19;
      iVar16 = (int)(lVar19 << 4);
      if (iVar20 == iVar22) {
        out->x = *(float *)((int)&spline->points[0].x + iVar16);
        out->y = *(float *)((int)&spline->points[0].y + iVar16);
        out->z = *(float *)((int)&spline->points[0].z + iVar16);
        out->w = *(float *)((int)&spline->points[0].w + iVar16);
        return lVar19;
      }
      if (iVar22 <= iVar20) {
        pfVar18 = (float *)((int)&((Spline *)(spline->points + -1))->cnt + iVar16);
        out->x = *pfVar18;
        out->y = pfVar18[1];
        out->z = pfVar18[2];
        out->w = pfVar18[3];
        return (longlong)(iVar20 + -1);
      }
      out->x = *(float *)((int)&spline->points[1].x + iVar16);
      out->y = *(float *)((int)&spline->points[1].y + iVar16);
      out->z = *(float *)((int)&spline->points[1].z + iVar16);
      out->w = *(float *)((int)&spline->points[1].w + iVar16);
      return (longlong)(iVar20 + 1);
    }
  }
  out->x = fVar3;
  out->y = ref->y;
  out->z = ref->z;
  out->w = ref->w;
  return lVar17;
}



//==== 001387a0  ns=path  size=0x5c
// sig: undefined PosRing_Init(void)
// callers(0): 
// callees(0): 

void path::PosRing_Init(double param_1,double param_2,double param_3,undefined4 *param_4,
                       undefined1 *param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8,
                       undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  *param_5 = 1;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[4] = 0;
  param_5[3] = param_6;
  *(float *)(param_5 + 0x10) = (float)param_1;
  uVar1 = *param_4;
  *(undefined4 *)(param_5 + 0x24) = uVar1;
  uVar2 = param_4[1];
  *(undefined4 *)(param_5 + 0x28) = uVar2;
  fVar3 = (float)param_4[2];
  *(undefined4 *)(param_5 + 8) = param_8;
  *(undefined4 *)(param_5 + 0xc) = param_9;
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = uVar2;
  *(float *)(param_5 + 0x14) = (float)param_2;
  *(float *)(param_5 + 0x18) = (float)param_3;
  *(float *)(param_5 + 0x2c) = (float)((double)fVar3 + param_1);
  *(float *)(param_5 + 0x38) = (float)((double)fVar3 + param_1);
  return;
}



//==== 00138810  ns=path  size=0x358
// sig: undefined PosRing_CollLineSampled(void)
// callers(6): 00138d10 path::PosRing_StepClearBack; 001391fc path::PosRing_StepClearFwd; 00139620 path::PosRing_AddPoint; 00139a18 path::PosRing_FindNearestClearPoint; 00139b34 path::PosRing_FindLastClearFromTail; 00139c10 path::PosRing_FindLastClearFromHead
// callees(2): 00057820 collproc::CollLine; 005026dc fastfunc::FastFrac

undefined8 path::PosRing_CollLineSampled(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar15;
  ulonglong unaff_r30;
  longlong lVar16;
  ulonglong unaff_r31;
  undefined8 uVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar16 = uVar11 - 0x110;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar11;
  puVar10[0x24] = in_LR;
  puVar10[0x1a] = in_f24;
  puVar10[0x1b] = in_f25;
  puVar10[0x1c] = in_f26;
  puVar10[0x1d] = in_f27;
  puVar10[0x1e] = in_f28;
  puVar10[0x1f] = in_f29;
  puVar10[0x20] = in_f30;
  puVar10[0x21] = in_f31;
  puVar10[0x15] = unaff_r27;
  puVar10[0x16] = unaff_r28;
  puVar10[0x19] = unaff_r31;
  uVar17 = 0;
  fVar1 = param_3[1];
  puVar10[0x17] = unaff_r29;
  fVar2 = param_2[1];
  iVar15 = 0;
  fVar3 = *param_2;
  fVar4 = *param_3;
  iVar14 = 0;
  puVar10[0x18] = unaff_r30;
  puVar10[0x14] = unaff_r26;
  dVar26 = (double)SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar2 - fVar1) * (fVar2 - fVar1));
  lVar12 = lVar16;
  iVar13 = param_1;
  do {
    iVar8 = *(int *)(iVar13 + 8);
    if (iVar8 != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x94);
      *(undefined4 *)(iVar8 + 0x94) = 0;
      *(undefined4 *)((int)lVar12 + 0x94) = uVar9;
    }
    iVar14 = iVar14 + 1;
    iVar13 = iVar13 + 4;
    lVar12 = lVar12 + 4;
  } while (iVar14 < 2);
  if (10.0 <= dVar26) {
    dVar18 = (double)fastfunc::FastFrac((double)(float)(dVar26 * 0.10000000149011612),0x140000,
                                        uVar11 - 0x80);
    dVar25 = 0.0;
    dVar19 = (double)*(float *)(puVar10 + 0x12);
    fVar1 = *param_2;
    dVar22 = (double)fVar1;
    fVar2 = param_2[1];
    dVar21 = (double)fVar2;
    fVar3 = param_2[2];
    dVar20 = (double)fVar3;
    fVar4 = param_2[3];
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    if (0.0 < dVar18) {
      dVar18 = dVar19 + 1.0;
      dVar19 = (double)(float)dVar18;
      *(float *)(puVar10 + 0x12) = (float)dVar18;
    }
    fVar6 = (float)((double)fVar6 - dVar21);
    fVar5 = (float)((double)fVar5 - dVar22);
    fVar7 = (float)((double)fVar7 - dVar20);
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar2;
    *(float *)(puVar10 + 0xf) = fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar4;
    fVar1 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar2 = (float)(dVar26 / dVar19) / fVar1;
    dVar18 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    dVar23 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    dVar24 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar10 + 0x10) = (float)(dVar22 + dVar23);
    *(float *)((int)puVar10 + 0x84) = (float)(dVar21 + dVar18);
    *(float *)(puVar10 + 0x11) = (float)(dVar20 + dVar24);
    fVar1 = SQRT((float)(dVar24 * dVar24 +
                        (double)(float)(dVar23 * dVar23 + (double)(float)(dVar18 * dVar18))));
    dVar20 = (double)(((float)(dVar26 / dVar19) * -0.1) / fVar1);
    dVar26 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    dVar21 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    dVar22 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (0.0 < dVar19) {
      dVar19 = 1.0;
      do {
        uVar17 = collproc::CollLine(uVar11 - 0xa0,uVar11 - 0x90,0,*(undefined4 *)(param_1 + 8),0);
        if ((int)uVar17 != 0) break;
        fVar1 = *(float *)(puVar10 + 0x12);
        fVar2 = *(float *)(puVar10 + 0x10);
        fVar3 = *(float *)((int)puVar10 + 0x84);
        fVar4 = *(float *)(puVar10 + 0x11);
        *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
        *(float *)(puVar10 + 0x10) = (float)((double)fVar2 + dVar23);
        *(float *)(puVar10 + 0xe) = (float)((double)fVar2 + dVar22);
        *(float *)((int)puVar10 + 0x84) = (float)((double)fVar3 + dVar18);
        *(float *)(puVar10 + 0x11) = (float)((double)fVar4 + dVar24);
        *(float *)((int)puVar10 + 0x74) = (float)((double)fVar3 + dVar21);
        *(float *)(puVar10 + 0xf) = (float)((double)fVar4 + dVar26);
        *(float *)(puVar10 + 0x12) = (float)((double)fVar1 - dVar19);
      } while (dVar25 < (double)(float)((double)fVar1 - dVar19));
    }
  }
  else {
    uVar17 = collproc::CollLine(param_2,param_3,0,*(undefined4 *)(param_1 + 8),0);
  }
  do {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x94) = *(undefined4 *)((int)lVar16 + 0x94);
    }
    iVar15 = iVar15 + 1;
    param_1 = param_1 + 4;
    lVar16 = lVar16 + 4;
  } while (iVar15 < 2);
  return uVar17;
}



//==== 00138b68  ns=path  size=0x7c
// sig: undefined PosRing_IsIndexBefore(void)
// callers(0): 
// callees(0): 

ulonglong path::PosRing_IsIndexBefore(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_3 - param_2 >> 0x3f;
    }
    else {
      uVar2 = param_3 - param_2 >> 0x3f;
    }
  }
  return uVar2;
}



//==== 00138be4  ns=path  size=0x7c
// sig: undefined PosRing_IsIndexBeforeWrapped(void)
// callers(0): 
// callees(0): 

ulonglong path::PosRing_IsIndexBeforeWrapped(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_2 - param_3 >> 0x3f;
    }
    else {
      uVar2 = param_2 - param_3 >> 0x3f;
    }
  }
  return uVar2;
}



//==== 00138c60  ns=path  size=0x54
// sig: undefined PosRing_IsIndexOutsideRange(void)
// callers(0): 
// callees(0): 

undefined8 path::PosRing_IsIndexOutsideRange(byte *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_2 == 0xff) {
    uVar3 = 0;
  }
  else {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    if (bVar1 < bVar2) {
      uVar3 = 0;
      if ((param_2 <= bVar2) || (bVar1 < param_2)) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
      if ((bVar2 <= param_2) && (param_2 < bVar1)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



//==== 00138cb4  ns=path  size=0x5c
// sig: undefined PosRing_NextIndexClamped(void)
// callers(0): 
// callees(0): 

uint path::PosRing_NextIndexClamped(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (param_2 & 0xff) + 1;
  bVar1 = param_1[2];
  uVar2 = (uint)bVar1;
  uVar4 = uVar4 - (uVar4 / param_1[3]) * (uint)param_1[3] & 0xff;
  uVar5 = (uint)*param_1;
  uVar3 = uVar2;
  if (uVar5 < bVar1) {
    uVar3 = uVar4;
    if ((bVar1 < uVar4) && (uVar4 <= uVar5)) {
      uVar3 = uVar2;
    }
  }
  else if ((bVar1 <= uVar4) && (uVar4 < uVar5)) {
    uVar3 = uVar4;
  }
  return uVar3;
}



//==== 00138d10  ns=path  size=0x140
// sig: undefined PosRing_StepClearBack(void)
// callers(1): 00138e58 path::PosRing_FindClearPointFwd
// callees(1): 00138810 path::PosRing_CollLineSampled

longlong path::PosRing_StepClearBack(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_20 [16];
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00138d94;
  }
  *param_3 = bVar2;
LAB_00138d94:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  bVar3 = (byte)uVar6;
  if ((int)uVar6 == 0) {
    bVar3 = param_2[3];
  }
  *param_3 = bVar3 - 1;
  return ((LZCOUNT(-iVar5) << 0x3a) >> 0x3f & (ulonglong)bVar1 - 0xff) + 0xff;
}



//==== 00138e58  ns=path  size=0x3a4
// sig: undefined PosRing_FindClearPointFwd(void)
// callers(0): 
// callees(2): 00057820 collproc::CollLine; 00138d10 path::PosRing_StepClearBack

void path::PosRing_FindClearPointFwd
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_40 [24];
  
  uVar7 = PosRing_StepClearBack(local_40,param_1,param_6);
  if (uVar7 != 0xff) {
    bVar1 = *param_5;
    uVar9 = (uint)bVar1;
    if (uVar7 != 0xff) {
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        uVar10 = uVar7;
        if (bVar2 < param_1[2]) {
          uVar9 = (uint)bVar1;
          if (bVar1 <= bVar2) {
            uVar9 = (uint)bVar1 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar7 <= (int)(uint)bVar2) {
            uVar10 = uVar7 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar10 <= (int)uVar9) goto LAB_00138fc8;
      }
      *param_3 = *(float *)(param_1 + uVar7 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar7 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar7 * 0xc + 0x2c);
      bVar1 = *param_5;
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        bVar3 = param_1[2];
        if (bVar2 < bVar3) {
          bVar6 = false;
          if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
            bVar6 = true;
          }
        }
        else {
          bVar6 = false;
          if ((bVar3 <= bVar1) && (bVar1 < bVar2)) {
            bVar6 = true;
          }
        }
        if (bVar6) {
          param_1[2] = bVar1;
        }
      }
      *param_5 = (byte)uVar7;
    }
  }
LAB_00138fc8:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar8 = collproc::CollLine(param_2,param_3,2,0,0), iVar8 == 0)) {
    bVar1 = *param_5;
    if ((bVar1 == 0xff) || (bVar1 == *param_1)) {
      if (bVar1 != 0xff) {
        param_1[2] = bVar1;
      }
      *param_5 = 0xff;
    }
    else {
      param_1[2] = bVar1;
      uVar7 = (*param_5 + 1) - ((*param_5 + 1) / (uint)param_1[3]) * (uint)param_1[3];
      *param_5 = (byte)uVar7;
      *param_3 = *(float *)(param_1 + (uVar7 & 0xff) * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  bVar1 = *param_5;
  if (bVar1 == 0xff) {
    fVar4 = param_4[1];
    *param_3 = *param_4;
    fVar5 = param_4[2];
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    bVar1 = *param_5;
  }
  if (bVar1 == *param_1) {
    bVar1 = param_1[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x24) = *param_2;
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x28) = param_2[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x2c) = param_2[2];
    *param_3 = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x24);
    param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
    param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
  }
  return;
}



//==== 001391fc  ns=path  size=0x13c
// sig: undefined PosRing_StepClearFwd(void)
// callers(1): 00139340 path::PosRing_FindClearPointBack
// callees(1): 00138810 path::PosRing_CollLineSampled

longlong path::PosRing_StepClearFwd(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_20 [16];
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00139280;
  }
  *param_3 = bVar2;
LAB_00139280:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  *param_3 = (char)(uVar6 + 1) - (char)((uint)(uVar6 + 1) / (uint)param_2[3]) * param_2[3];
  return ((LZCOUNT(-iVar5) << 0x3a) >> 0x3f & (ulonglong)bVar1 - 0xff) + 0xff;
}



//==== 00139340  ns=path  size=0x2d8
// sig: undefined PosRing_FindClearPointBack(void)
// callers(0): 
// callees(2): 00057820 collproc::CollLine; 001391fc path::PosRing_StepClearFwd

void path::PosRing_FindClearPointBack
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_40 [24];
  
  uVar6 = PosRing_StepClearFwd(local_40,param_1,param_6);
  if (uVar6 != 0xff) {
    bVar8 = *param_5;
    uVar9 = (uint)bVar8;
    if (uVar6 != 0xff) {
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        uVar10 = uVar6;
        if (bVar1 < param_1[2]) {
          uVar9 = (uint)bVar8;
          if (bVar8 <= bVar1) {
            uVar9 = (uint)bVar8 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar6 <= (int)(uint)bVar1) {
            uVar10 = uVar6 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar9 <= (int)uVar10) goto LAB_001394b0;
      }
      *param_3 = *(float *)(param_1 + uVar6 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar6 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar6 * 0xc + 0x2c);
      bVar8 = *param_5;
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        bVar2 = param_1[2];
        if (bVar1 < bVar2) {
          bVar5 = false;
          if ((bVar8 <= bVar2) || (bVar1 < bVar8)) {
            bVar5 = true;
          }
        }
        else {
          bVar5 = false;
          if ((bVar2 <= bVar8) && (bVar8 < bVar1)) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          *param_1 = bVar8;
        }
      }
      *param_5 = (byte)uVar6;
    }
  }
LAB_001394b0:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar7 = collproc::CollLine(param_2,param_3,2,0,0), iVar7 == 0)) {
    bVar8 = *param_5;
    if ((bVar8 == 0xff) || (bVar8 == param_1[2])) {
      if (bVar8 != 0xff) {
        *param_1 = bVar8;
      }
      *param_5 = 0xff;
    }
    else {
      *param_1 = bVar8;
      bVar8 = *param_5 - 1;
      if (*param_5 == 0) {
        bVar8 = param_1[3];
      }
      *param_5 = bVar8;
      *param_3 = *(float *)(param_1 + (uint)bVar8 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  if (*param_5 == 0xff) {
    fVar3 = param_4[1];
    *param_3 = *param_4;
    fVar4 = param_4[2];
    param_3[1] = fVar3;
    param_3[2] = fVar4;
  }
  return;
}



//==== 00139620  ns=path  size=0x3f4
// sig: undefined PosRing_AddPoint(void)
// callers(0): 
// callees(1): 00138810 path::PosRing_CollLineSampled

undefined8 path::PosRing_AddPoint(double param_1,undefined4 *param_2,byte *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  bVar10 = param_3[1];
  bVar2 = *param_3;
  bVar3 = param_3[2];
  if (param_1 == 0.0) {
    param_1 = (double)*(float *)(param_3 + 0x10);
  }
  fVar1 = (float)((double)(float)param_2[2] + param_1);
  if (bVar10 != 0xff) {
    if (bVar2 < bVar3) {
      bVar6 = false;
      if ((bVar10 <= bVar3) || (bVar2 < bVar10)) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = bVar10 < bVar2 && bVar3 <= bVar10;
    }
    if (bVar6) goto LAB_001396d8;
  }
  param_3[1] = bVar3;
LAB_001396d8:
  if (bVar3 == bVar2) {
    param_3[1] = bVar2;
    uVar7 = (bVar2 + 1) - ((bVar2 + 1) / (uint)param_3[3]) * (uint)param_3[3];
    uVar13 = 1;
    uVar14 = uVar7 & 0xff;
    *param_3 = (byte)uVar7;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
    *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
  }
  else {
    iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20);
    if (iVar8 == 0) {
      if (param_3[1] != param_3[2]) {
        iVar8 = param_3[1] - 1;
        if (iVar8 < 0) {
          iVar8 = param_3[3] - 1;
        }
        iVar9 = PosRing_CollLineSampled(param_3,local_30,local_20);
        if (iVar9 == 0) {
          bVar10 = param_3[1];
          param_3[1] = (byte)iVar8;
          *param_3 = bVar10;
        }
      }
      bVar10 = *param_3;
      uVar13 = 1;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + (uint)bVar10 * 0xc + 0x2c) = fVar1;
    }
    else {
      bVar10 = param_3[3];
      uVar7 = *param_3 + 1;
      uVar7 = uVar7 - (uVar7 / bVar10) * (uint)bVar10;
      uVar14 = (uint)*param_3;
      if (uVar7 != param_3[2]) {
        *param_3 = (byte)uVar7;
        param_3[1] = (char)(param_3[1] + 1) - (char)((param_3[1] + 1) / (uint)bVar10) * bVar10;
        uVar14 = uVar7;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 0;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
    bVar10 = param_3[2];
    uVar12 = (uint)bVar10;
    uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)param_3[3]) * (uint)param_3[3] & 0xff;
    uVar11 = (uint)*param_3;
    uVar7 = uVar12;
    if (uVar11 < bVar10) {
      uVar7 = uVar14;
      if ((bVar10 < uVar14) && (uVar14 <= uVar11)) {
        uVar7 = uVar12;
      }
    }
    else if ((bVar10 <= uVar14) && (uVar14 < uVar11)) {
      uVar7 = uVar14;
    }
    param_3[4] = (byte)uVar7;
    if ((((uVar7 != *param_3) && (uVar7 != bVar10)) && (uVar7 != param_3[1])) &&
       (iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20), iVar8 == 0)) {
      bVar10 = param_3[3];
      uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)bVar10) * (uint)bVar10;
      *param_3 = (byte)uVar14;
      if (param_3[1] != param_3[2]) {
        bVar10 = bVar10 - 1;
        if ((uVar14 & 0xff) != 0) {
          bVar10 = *param_3;
          *param_3 = bVar10 - 1;
          uVar14 = (uint)*param_3;
        }
        param_3[1] = bVar10;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 1;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
  }
  return uVar13;
}



//==== 00139a18  ns=path  size=0x11c
// sig: undefined PosRing_FindNearestClearPoint(void)
// callers(0): 
// callees(1): 00138810 path::PosRing_CollLineSampled

uint path::PosRing_FindNearestClearPoint(float *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined1 local_40 [16];
  
  uVar2 = (uint)*param_2;
  uVar3 = 0xff;
  dVar4 = 1000000.0;
  while( true ) {
    dVar5 = (double)SQRT((param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) *
                         (param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) +
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) *
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) +
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)) *
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)));
    if (dVar5 < dVar4) {
      iVar1 = PosRing_CollLineSampled(param_2,local_40,param_1);
      if (iVar1 == 0) {
        dVar4 = dVar5;
        uVar3 = uVar2;
      }
    }
    if (uVar2 == param_2[2]) break;
    uVar2 = (uVar2 + 1) - ((uVar2 + 1) / (uint)param_2[3]) * (uint)param_2[3] & 0xff;
  }
  return uVar3;
}



//==== 00139b34  ns=path  size=0xdc
// sig: undefined PosRing_FindLastClearFromTail(void)
// callers(0): 
// callees(1): 00138810 path::PosRing_CollLineSampled

longlong path::PosRing_FindLastClearFromTail(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_30 [16];
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)param_2[2];
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + ((LZCOUNT(-iVar1) << 0x3a) >> 0x3f & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)*param_2) break;
    uVar2 = (uVar2 + 1) -
            (longlong)(int)((uint)(uVar2 + 1) / (uint)param_2[3]) * (longlong)(int)(uint)param_2[3]
            & 0xff;
  }
  return lVar3;
}



//==== 00139c10  ns=path  size=0xdc
// sig: undefined PosRing_FindLastClearFromHead(void)
// callers(0): 
// callees(1): 00138810 path::PosRing_CollLineSampled

longlong path::PosRing_FindLastClearFromHead(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_30 [16];
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)*param_2;
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + ((LZCOUNT(-iVar1) << 0x3a) >> 0x3f & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)param_2[2]) break;
    if ((uint)uVar2 == 0) {
      uVar2 = (ulonglong)param_2[3];
    }
    uVar2 = uVar2 - 1 & 0xff;
  }
  return lVar3;
}



//==== 00139cf8  ns=path  size=0x170
// sig: undefined PosRing_DebugDraw(void)
// callers(0): 
// callees(2): 00065468 stub::STUB_00065468; 00121a40 partupd::SpawnPart_5

void path::PosRing_DebugDraw(byte *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_80 [16];
  undefined1 local_70 [40];
  
  uVar3 = 0;
  uVar4 = 0x40f86a0000000000;
  uVar1 = 0xffffffff;
  uVar2 = (uint)param_1[2];
  while( true ) {
    partupd::SpawnPart_5(uVar4,uVar3,local_70,param_2,param_3,param_4);
    if (-1 < (int)uVar1) {
      stub::STUB_00065468(local_80,local_70);
    }
    if (uVar2 == *param_1) break;
    uVar1 = uVar2;
    uVar2 = (uVar2 + 1) - ((int)(uVar2 + 1) / (int)(uint)param_1[3]) * (uint)param_1[3];
  }
  return;
}



//==== 00139e68  ns=path  size=0x90
// sig: undefined PathFollower_GetPntPtr(PathFollower * follower, undefined4 idx)
// callers(0): 
// callees(0): 

Vec4 * path::PathFollower_GetPntPtr(PathFollower *follower,int idx)

{
  Vec4 *pVVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt;
    iVar2 = iVar3 + -1;
    iVar3 = iVar3 + -1;
  }
  if (idx < 0) {
    pVVar1 = follower->pSpline->points + idx + iVar3 + 1;
  }
  else if (iVar2 < idx) {
    iVar3 = idx / (iVar2 + 1);
    pVVar1 = (Vec4 *)((int)follower->pSpline + (idx - (iVar3 * iVar2 + iVar3)) * 0x10 + 0x10);
  }
  else {
    pVVar1 = follower->pSpline->points + idx;
  }
  return pVVar1;
}



//==== 00139ef8  ns=path  size=0x60
// sig: undefined PathFollower_WrapIdx(PathFollower * follower, undefined4 idx)
// callers(3): 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(0): 

int path::PathFollower_WrapIdx(PathFollower *follower,int idx)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < (char)follower->direction) {
    iVar2 = follower->pSpline->cnt + -1;
  }
  if (idx < 0) {
    idx = idx + iVar2;
  }
  else if (iVar2 < idx) {
    iVar1 = idx / (iVar2 + 1);
    idx = idx - (iVar1 * iVar2 + iVar1);
  }
  return idx;
}



//==== 00139f58  ns=path  size=0x58
// sig: undefined PathFollower_Advance(PathFollower * follower)
// callers(3): 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(0): 

s32 path::PathFollower_Advance(PathFollower *follower)

{
  int iVar1;
  s32 sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt + -1;
  }
  sVar2 = follower->idx + 1;
  if (iVar3 < sVar2) {
    iVar1 = sVar2 / (iVar3 + 1);
    sVar2 = sVar2 - (iVar1 * iVar3 + iVar1);
  }
  follower->idx = sVar2;
  return sVar2;
}



//==== 00139fc0  ns=path  size=0x2c4
// sig: undefined Spline_CalcTan(float tension, float bias, Vec4 * out, PathFollower * follower, undefined8 param_5, float param_6, undefined4 offs)
// callers(5): 0013a440 path::Spline_CalcLen; 0013a80c path::PathFollower_DebugDrawTangents; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(0): 

void path::Spline_CalcTan
               (float tension,float bias,Vec4 *out,PathFollower *follower,undefined8 param_5,
               float param_6,int offs)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Vec4 *pVVar17;
  int iVar18;
  int iVar19;
  Vec4 *pVVar20;
  int iVar21;
  Vec4 *pVVar22;
  int iVar23;
  
  iVar23 = 0;
  iVar19 = follower->idx + offs;
  iVar21 = iVar19 + -1;
  bVar1 = -1 < (char)follower->direction;
  iVar18 = 0;
  if (bVar1) {
    iVar23 = follower->pSpline->cnt + -1;
  }
  if (iVar21 < 0) {
    pSVar6 = follower->pSpline;
    pVVar17 = pSVar6->points + iVar23 + iVar19;
  }
  else {
    if (iVar23 < iVar21) {
      iVar2 = iVar21 / (iVar23 + 1);
      pSVar6 = follower->pSpline;
      iVar21 = iVar21 - (iVar2 * iVar23 + iVar2);
    }
    else {
      pSVar6 = follower->pSpline;
    }
    pVVar17 = pSVar6->points + iVar21;
  }
  iVar23 = 0;
  if (bVar1) {
    iVar23 = pSVar6->cnt + -1;
  }
  if (iVar19 < 0) {
    pVVar22 = pSVar6->points + iVar19 + iVar23 + 1;
  }
  else {
    iVar21 = iVar19;
    if (iVar23 < iVar19) {
      iVar21 = iVar19 / (iVar23 + 1);
      iVar21 = iVar19 - (iVar21 * iVar23 + iVar21);
    }
    pVVar22 = pSVar6->points + iVar21;
  }
  iVar23 = iVar19 + 1;
  if (bVar1) {
    iVar18 = pSVar6->cnt + -1;
  }
  if (iVar23 < 0) {
    pVVar20 = pSVar6->points + iVar18 + iVar19 + 2;
  }
  else {
    if (iVar18 < iVar23) {
      iVar19 = iVar23 / (iVar18 + 1);
      iVar23 = iVar23 - (iVar19 * iVar18 + iVar19);
    }
    pVVar20 = pSVar6->points + iVar23;
  }
  fVar3 = pVVar22->y;
  fVar10 = pVVar17->y - fVar3;
  fVar9 = fVar3 - pVVar20->y;
  fVar4 = pVVar22->x;
  fVar11 = pVVar17->x - fVar4;
  fVar12 = fVar4 - pVVar20->x;
  fVar5 = pVVar22->z;
  fVar13 = pVVar17->z - fVar5;
  fVar14 = fVar5 - pVVar20->z;
  fVar7 = (1.0 - tension) * (1.0 - bias) * 0.5;
  fVar8 = (1.0 - tension) * (bias + 1.0) * 0.5;
  fVar15 = (fVar3 - pVVar17->y) * fVar8 + (pVVar20->y - fVar3) * fVar7;
  fVar16 = (fVar4 - pVVar17->x) * fVar8 + (pVVar20->x - fVar4) * fVar7;
  fVar4 = (fVar5 - pVVar17->z) * fVar8 + (pVVar20->z - fVar5) * fVar7;
  fVar5 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10);
  fVar3 = pVVar22->w;
  fVar7 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar9 * fVar9);
  fVar8 = SQRT(fVar4 * fVar4 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar5 - fVar7 < 0.0) {
    fVar7 = fVar5;
  }
  if (fVar8 <= fVar7 * 1.1) {
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar4;
    out->w = fVar3;
  }
  else {
    fVar5 = 0.0;
    if (fVar8 == 0.0) {
      out->y = fVar15;
      out->z = fVar4;
      out->x = fVar16;
      out->w = fVar3;
      fVar15 = fVar5;
      fVar16 = fVar5;
    }
    else {
      fVar5 = (fVar7 * 1.1) / fVar8;
      out->w = fVar3;
      fVar15 = fVar5 * fVar15;
      fVar16 = fVar5 * fVar16;
      fVar5 = fVar5 * fVar4;
    }
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar5;
  }
  return;
}



//==== 0013a290  ns=path  size=0xd4
// sig: void Spline_Hermite(float t, Vec4 * out, Vec4 * p0, Vec4 * p1, Vec4 * m0, Vec4 * m1)
// callers(4): 0013a440 path::Spline_CalcLen; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(0): 

void path::Spline_Hermite(float t,Vec4 *out,Vec4 *p0,Vec4 *p1,Vec4 *m0,Vec4 *m1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = t * t;
  fVar2 = t * fVar1;
  fVar7 = -(fVar2 * 2.0 - fVar1 * 3.0);
  fVar3 = fVar2 - fVar1;
  fVar4 = (fVar2 * 2.0 - fVar1 * 3.0) + 1.0;
  fVar1 = -(fVar1 * 2.0 - fVar2) + t;
  fVar5 = p0->x * fVar4;
  out->x = fVar5;
  fVar6 = p0->y * fVar4;
  out->y = fVar6;
  fVar4 = p0->z * fVar4;
  out->z = fVar4;
  out->w = p0->w;
  fVar5 = m0->x * fVar1 + fVar5;
  fVar6 = m0->y * fVar1 + fVar6;
  fVar4 = m0->z * fVar1 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar5 = m1->x * fVar3 + fVar5;
  fVar6 = m1->y * fVar3 + fVar6;
  fVar4 = m1->z * fVar3 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar1 = p1->y;
  fVar2 = p1->z;
  out->x = p1->x * fVar7 + fVar5;
  out->y = fVar1 * fVar7 + fVar6;
  out->z = fVar2 * fVar7 + fVar4;
  return;
}



//==== 0013a378  ns=path  size=0xb0
// sig: void Angle_ApproachWrapped(float from, float to, float rate)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

void path::Angle_ApproachWrapped(float from,float to,float rate)

{
  float fVar1;
  
  fVar1 = to - from;
  if (fVar1 <= 3.1415927) {
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  if (fVar1 <= 6.2831855) {
    if (fVar1 < -6.2831855) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  fastfunc::FastWrapRot(from,rate * fVar1);
  return;
}



//==== 0013a440  ns=path  size=0x3cc
// sig: float Spline_CalcLen(undefined8 tension, undefined8 bias, undefined4 follower, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7)
// callers(3): 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(3): 0012d0e8 partupd::SpawnPart_41; 00139fc0 path::Spline_CalcTan; 0013a290 path::Spline_Hermite

double path::Spline_CalcLen
                 (double tension,double bias,PathFollower *follower,undefined8 param_4,
                 undefined8 param_5,double param_6,undefined8 param_7)

{
  float fVar1;
  int iVar2;
  Vec4 *out;
  Vec4 *pVVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  double dVar7;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  Vec4 local_e0;
  Vec4 pnt;
  Vec4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  s32 idx;
  Spline *pSpline;
  
  pSpline = follower->pSpline;
  idx = follower->idx;
  iVar8 = SUB84(param_6,0);
  iVar2 = pSpline->cnt;
  pnt.x = pSpline->points[0].x;
  pnt.y = pSpline->points[0].y;
  follower->idx = 0;
  pnt.z = pSpline->points[0].z;
  pnt.w = pSpline->points[0].w;
  uVar4 = (undefined4)param_7;
  if (iVar8 != 0) {
    param_5 = 0;
    param_6 = 1.06151804779458e-314;
    partupd::SpawnPart_41(0.666,&pnt,uVar4,0,0x80101080,param_7,0x7f,0xffff,0xff);
  }
  lVar12 = ZEXT48(&stack0x00000000) - 0xf0;
  lVar9 = 0;
  dVar7 = (double)(float)param_6;
  out = (Vec4 *)lVar12;
  Spline_CalcTan((float)tension,(float)bias,out,follower,param_5,(float)param_6,0);
  dVar14 = 0.0;
  if (0 < iVar2) {
    dVar19 = dVar14;
    iVar13 = 0;
    iVar10 = 0;
    do {
      local_e0.x = pnt.x;
      local_e0.y = pnt.y;
      local_e0.z = pnt.z;
      local_e0.w = pnt.w;
      dVar15 = dVar19;
      if (iVar8 != 0) {
        dVar7 = 1.06153215830942e-314;
        partupd::SpawnPart_41
                  (1.0,&local_e0,uVar4,iVar10 % 0xf + 2,0x80108010,lVar9,0x7f,0xffff,0xff);
        dVar15 = dVar19;
      }
      iVar11 = iVar10 + 1;
      iVar6 = 0;
      if (-1 < (char)follower->direction) {
        iVar6 = follower->pSpline->cnt + -1;
      }
      if (iVar11 < 0) {
        iVar5 = iVar11 + iVar6;
      }
      else {
        iVar5 = iVar11;
        if (iVar6 < iVar11) {
          iVar5 = iVar11 / (iVar6 + 1);
          iVar5 = iVar11 - (iVar5 * iVar6 + iVar5);
        }
      }
      lVar9 = 1;
      pVVar3 = follower->pSpline->points + iVar5 + -1;
      pnt.x = pVVar3[1].x;
      pnt.y = pVVar3[1].y;
      pnt.z = pVVar3[1].z;
      pnt.w = pVVar3[1].w;
      follower->idx = iVar10;
      Spline_CalcTan((float)tension,(float)bias,out,follower,ZEXT48(pVVar3),(float)dVar7,1);
      local_b0 = local_e0.x;
      local_ac = local_e0.y;
      local_a8 = local_e0.z;
      local_a4 = local_e0.w;
      dVar16 = 0.05000000074505806;
      dVar17 = 1.0;
      dVar20 = 0.20000000298023224;
      dVar18 = dVar16;
      dVar19 = dVar15;
      do {
        if (iVar8 != 0) {
          partupd::SpawnPart_41((float)dVar20,&local_b0,uVar4,0,0x80404080,lVar9,0x7f,0xffff,0xff);
        }
        dVar7 = (double)(ZEXT48(&stack0x00000000) - 0x100);
        lVar9 = lVar12;
        Spline_Hermite((float)dVar16,&local_c0,&local_e0,&pnt,SUB84(dVar7,0),out);
        dVar16 = (double)(float)(dVar16 + dVar18);
        local_a4 = local_c0.w;
        fVar1 = (float)(dVar15 + (double)SQRT((local_a8 - local_c0.z) * (local_a8 - local_c0.z) +
                                              (local_b0 - local_c0.x) * (local_b0 - local_c0.x) +
                                              (local_ac - local_c0.y) * (local_ac - local_c0.y)));
        dVar15 = (double)fVar1;
        local_b0 = local_c0.x;
        local_ac = local_c0.y;
        local_a8 = local_c0.z;
      } while (dVar16 <= dVar17);
      dVar14 = (double)(float)(dVar15 + dVar14);
      *(float *)((int)&follower->pSpline->points[0].w + iVar13) = fVar1;
      iVar13 = iVar13 + 0x10;
      iVar10 = iVar11;
    } while (iVar11 < iVar2);
  }
  follower->idx = idx;
  return dVar14;
}



//==== 0013a80c  ns=path  size=0x1b8
// sig: undefined PathFollower_DebugDrawTangents(void)
// callers(0): 
// callees(2): 00065468 stub::STUB_00065468; 00139fc0 path::Spline_CalcTan

void path::PathFollower_DebugDrawTangents
               (double param_1,double param_2,PathFollower *param_3,undefined8 param_4,
               undefined8 param_5,double param_6)

{
  Spline *pSVar1;
  s32 sVar2;
  int iVar3;
  Vec4 *pVVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  Vec4 local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  pSVar1 = param_3->pSpline;
  sVar2 = param_3->idx;
  iVar3 = pSVar1->cnt;
  dVar10 = (double)pSVar1->points[0].x;
  param_3->idx = 0;
  dVar11 = (double)pSVar1->points[0].y;
  dVar12 = (double)pSVar1->points[0].z;
  dVar13 = (double)pSVar1->points[0].w;
  dVar7 = (double)(float)param_6;
  Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pSVar1),(float)param_6,0);
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      local_80 = (float)((double)local_90.x + dVar10);
      local_7c = (float)((double)local_90.y + dVar11);
      local_74 = (float)dVar13;
      local_78 = (float)((double)local_90.z + dVar12);
      local_64 = (float)dVar13;
      local_70 = (float)(dVar10 - (double)local_90.x);
      local_6c = (float)(dVar11 - (double)local_90.y);
      local_68 = (float)(dVar12 - (double)local_90.z);
      stub::STUB_00065468(&local_80,&local_70);
      iVar9 = iVar8 + 1;
      iVar6 = 0;
      if (-1 < (char)param_3->direction) {
        iVar6 = param_3->pSpline->cnt + -1;
      }
      if (iVar9 < 0) {
        iVar5 = iVar9 + iVar6;
      }
      else {
        iVar5 = iVar9;
        if (iVar6 < iVar9) {
          iVar5 = iVar9 / (iVar6 + 1);
          iVar5 = iVar9 - (iVar5 * iVar6 + iVar5);
        }
      }
      pVVar4 = param_3->pSpline->points + iVar5 + -1;
      dVar10 = (double)pVVar4[1].x;
      dVar11 = (double)pVVar4[1].y;
      dVar12 = (double)pVVar4[1].z;
      dVar13 = (double)pVVar4[1].w;
      param_3->idx = iVar8;
      fVar14 = (float)dVar7;
      dVar7 = (double)fVar14;
      Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pVVar4),fVar14,1);
      iVar8 = iVar9;
    } while (iVar9 < iVar3);
  }
  param_3->idx = sVar2;
  return;
}



//==== 0013a9c4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_PAUSE(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_PAUSE(void)

{
  DAT_00729818 = 0x10000;
  return;
}



//==== 0013a9d8  ns=pause  size=0x10
// sig: undefined GetMenuScreen(void)
// callers(1): 001dbdb0 mobyupdate_unsorted::UpdateMoby_1138
// callees(0): 

/* [p2_pause] returns g_MenuScreen
   [p2_pause] returns g_MenuScreen
   [p2_pause] returns g_MenuScreen */

undefined4 pause::GetMenuScreen(void)

{
  return g_MenuScreen;
}



//==== 0013a9e8  ns=pause  size=0x124
// sig: undefined LoadHudSequences(void)
// callers(1): 000e0e60 main::startLevel
// callees(2): 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 0065349c: 'rc1/ps3data/global/hud_seq%d.ps3'

/* [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel
   [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel
   [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel */

void pause::LoadHudSequences(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char acStack_120 [256];
  
  uVar5 = 0;
  uVar4 = loaders::g_NpcBuffer + 0x400000;
  do {
    libc::snprintf(acStack_120,"rc1/ps3data/global/hud_seq%d.ps3",uVar5);
    iVar1 = fios::LoadAssetFromFile(acStack_120,uVar4,0xffffffffffffffff);
    iVar6 = (int)((uVar5 & 0xffffffff) << 2);
    *(uint *)(&DAT_00a52d04 + iVar6) = uVar4;
    uVar4 = uVar4 + iVar1 + 0xf & 0xfffffff0;
    iVar6 = *(int *)(&DAT_00a52d04 + iVar6);
    if (*(int *)(iVar6 + 0x14) != 0) {
      *(int *)(iVar6 + 0x14) = iVar6 + *(int *)(iVar6 + 0x14);
    }
    iVar1 = 0;
    if (*(char *)(iVar6 + 0x10) != '\0') {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        piVar3 = (int *)(iVar6 + 0x1c + iVar2);
        iVar2 = iVar2 + 4;
        *piVar3 = iVar6 + *piVar3;
      } while (iVar1 < (int)(uint)*(byte *)(iVar6 + 0x10));
    }
    iVar6 = (int)uVar5 + 1;
    uVar5 = (ulonglong)iVar6;
  } while (iVar6 < 0x14);
  return;
}



//==== 0013ab10  ns=pause  size=0xbc
// sig: undefined ResetMenuCamera(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

/* [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update)
   [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update)
   [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update) */

void pause::ResetMenuCamera(void)

{
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  libc::memset(0x951710,0,0x10);
  libc::memset(0x951720,0,0x10);
  libc::memset(0x951730,0,0x10);
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  return;
}



//==== 0013abcc  ns=pause  size=0x344
// sig: undefined BeginMenu(void)
// callers(3): 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(7): 000ea5b0 mission::RefreshLevelMissionStatus; 0011b124 mobyutil::MB_CountGoldWeapons; 0011b494 mobyutil::MB_CountSkillPoints; 0011ce20 music::music_Pause; 004edce4 FUN_004edce4; 00505d20 stub::STUB_00505d20; 0060bc8c FUN_0060bc8c

/* [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode
   [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode
   [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode */

void pause::BeginMenu(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_00a534a4 = *(undefined4 *)(g_viewMtxPtr + 0x1a78);
  *(undefined4 *)(g_viewMtxPtr + 0x1a78) = 0;
  FUN_0060bc8c(0x1d);
  music::music_Pause(0);
  stub::STUB_00505d20();
  FUN_004edce4(&DAT_01111700,1);
  if (ControlMode == 0) {
    DAT_00a52e68 = DAT_00a52e64;
    if (g_equippedItem == (PDA|HYDRO_PACK)) {
      g_equippedItem = UNK_00;
    }
    DAT_00a52ce0 = 0;
    if ((Level == Gemlik) || (DAT_0096bfab != '\0')) {
      DAT_00a52ce0 = 1;
    }
    DAT_00a52ce4 = 0;
    if ((Level == Veldin) || (Level == Oltanis)) {
      DAT_00a52ce4 = 1;
    }
    DAT_00a52c88 = false;
    if ((g_ChallengeMode != 0 || g_goodiesMenuActive != 0) || (DAT_00a52ca4 != '\0')) {
      DAT_00a52c88 = true;
    }
    DAT_00a52c89 = (undefined1)((ulonglong)(LZCOUNT(param_1 + -0x23) << 0x20) >> 0x25);
    if (!(bool)DAT_00a52c88) {
      DAT_00729be8 = &PTR_PTR_00729d40;
    }
    else {
      DAT_00729be8 = &PTR_PTR_00729d90;
    }
    DAT_00729d7c = &PTR_PTR_00729bb0;
    if ((bool)DAT_00a52c88) {
      DAT_00729d7c = &PTR_PTR_00729d90;
    }
    g_gameMode = GAME_MODE_PAUSE;
    g_menuClosing = 0;
    DAT_00a52bc0 = 0;
    DAT_00a52cbc = 0;
    g_SelectedLevel = Veldin;
    if ((int)Level < 0x13) {
      g_SelectedLevel = Level;
    }
    g_MenuScreen = param_1;
    mission::RefreshLevelMissionStatus();
    DAT_0072ba84 = 0;
    iVar1 = mobyutil::MB_CountSkillPoints();
    iVar2 = mobyutil::MB_CountSkillPoints();
    iVar3 = mobyutil::MB_CountGoldWeapons();
    DAT_0072e1fe = 2;
    DAT_0072e222 = 2;
    if (0xe < iVar1) {
      DAT_0072e1fe = 3;
    }
    DAT_0072e20a = 2;
    if (0x1d < iVar2) {
      DAT_0072e20a = 3;
    }
    DAT_0072e216 = 2;
    if (9 < iVar3) {
      DAT_0072e216 = 10;
      DAT_0072e222 = 3;
    }
    DAT_0072e24c = 0x4fd9;
    if (0xe < iVar1) {
      DAT_0072e24c = 0x4fd3;
    }
    DAT_0072e250 = 0x4fda;
    if (0x1d < iVar2) {
      DAT_0072e250 = 0x4fd4;
    }
    DAT_0072e254 = 0x4fdb;
    DAT_0072e258 = 0x4fdb;
    if (9 < iVar3) {
      DAT_0072e254 = 0x4fd7;
      DAT_0072e258 = 0x4fd8;
    }
    if ((g_JapaneseMode == false) && (DAT_00966af0 != 0)) {
      DAT_0072e220 = 0;
    }
    DAT_00a52cec = 0;
    DAT_00a52ce8 = 1;
  }
  else {
    DAT_00a15c78 = 1;
  }
  return;
}



//==== 0013af10  ns=pause  size=0x58
// sig: undefined Menu_UpdateViewMtxIfChanged(void)
// callers(0): 
// callees(1): 004d6f50 FUN_004d6f50

void pause::Menu_UpdateViewMtxIfChanged(void)

{
  if (DAT_00a52e64 != DAT_00a52e68) {
    DAT_00a52e68 = DAT_00a52e64;
    FUN_004d6f50(g_viewMtxPtr,DAT_00a52e64);
  }
  return;
}



//==== 0013af68  ns=pause  size=0x194
// sig: undefined Menu_InitStreamBuffers(void)
// callers(7): 0013b108 update::OpenPauseMenu; 0013d428 pause::FrontEnd_InitMenu; 00143d4c pause::MenuText_OnEnterResetBuffers; 00144480 pause::MusicWidget_OnEnter; 00144548 pause::MusicWidget_OnExit; 0014de68 pause::SaveLoad_OnEnter; 0014f1f0 pause::SpawnHeroInMenu?
// callees(0): 

/* [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers
   [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers
   [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers */

void pause::Menu_InitStreamBuffers(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  
  iVar1 = DAT_00a52cb8;
  if (param_1 != 0) {
    iVar6 = 2;
    iVar4 = 2;
  }
  else {
    iVar6 = 1;
    iVar4 = 0;
  }
  uVar2 = 0;
  iVar3 = DAT_00a52cb4;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar7) = iVar3;
      iVar3 = iVar3 + 0x11800;
      *(undefined4 *)((int)&DAT_00a5309c + iVar7) = 0;
      iVar7 = iVar7 + 8;
    } while ((int)uVar2 < iVar6);
  }
  iVar6 = iVar6 + (uint)(param_1 != 0);
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar7 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar7) = iVar1;
      lVar5 = lVar5 + 8;
      iVar1 = iVar1 + 0x11800;
      *(undefined4 *)((int)&DAT_00a5309c + iVar7) = 0;
    } while ((int)uVar2 < iVar6);
  }
  iVar6 = iVar6 + iVar4;
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar4 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar4) = iVar3;
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 0x4f000;
      *(undefined4 *)((int)&DAT_00a5309c + iVar4) = 1;
    } while ((int)uVar2 < iVar6);
  }
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar4 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar4) = iVar1;
      lVar5 = lVar5 + 8;
      iVar1 = iVar1 + 0x4f000;
      *(undefined4 *)((int)&DAT_00a5309c + iVar4) = 1;
    } while ((int)uVar2 < iVar6);
  }
  if ((int)uVar2 < 5) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar1 = (int)lVar5;
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 8;
      *(undefined4 *)((int)&DAT_00a53098 + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00a5309c + iVar1) = 0;
    } while ((int)uVar2 < 5);
  }
  return;
}



//==== 0013b108  ns=update  size=0x728
// sig: undefined OpenPauseMenu(void)
// callers(1): 0013b838 pause::UpdatePause
// callees(17): 00066088 draw::ComposeCameraMatrix; 000668d0 draw::UpdateViewContext; 0006e068 draw::Draw_FlushAndPresent; 000c8810 stub::STUB_000c8810; 000c8818 stub::STUB_000c8818; 000c8820 hud::Hud_SwapMobyBank; 000e1f28 map::Map_OnPauseMenuOpen; 000ea5b0 mission::RefreshLevelMissionStatus; 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0013af68 pause::Menu_InitStreamBuffers; 00174c24 vuchain::VU1_initChain; 00174cf4 stub::STUB_00174cf4; 00503078 stub::STUB_00503078; 005d0140 libc::memset

void update::OpenPauseMenu(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  double dVar13;
  
  bVar5 = false;
  puVar11 = &g_MenuScreen;
  CollOutput.collCount = CollOutput.collCount | 0x80000000;
  g_unclosableMenu = 0;
  DAT_00a52c80 = 0;
  if (g_MenuScreen == 10) {
    bVar5 = true;
    g_MenuScreen = 0xb;
    g_currentMenuPage = (undefined4 *)&DAT_0072a9f0;
    g_nextMenuPage = (undefined4 *)&DAT_0072a9f0;
  }
  else if (g_MenuScreen == 0xe) {
    bVar5 = true;
    g_MenuScreen = 0xf;
    g_currentMenuPage = (undefined4 *)&DAT_0072d87c;
    g_nextMenuPage = (undefined4 *)&DAT_0072d87c;
  }
  else if (g_MenuScreen == 0x21) {
    g_MenuScreen = 0x22;
    g_unclosableMenu = 1;
    DAT_00a15f39 = 1;
    g_currentMenuPage = (undefined4 *)&DAT_0072ebc8;
    g_nextMenuPage = (undefined4 *)&DAT_0072ebc8;
  }
  else if (g_MenuScreen == 0x23) {
    g_currentMenuPage = (undefined4 *)&DAT_0072e43c;
    g_nextMenuPage = (undefined4 *)&DAT_0072e43c;
  }
  else if (g_MenuScreen == 0x2d) {
    g_MenuScreen = 2;
    g_currentMenuPage = &DAT_00730034;
    g_nextMenuPage = &DAT_00730034;
  }
  else {
    g_MenuScreen = 2;
    g_currentMenuPage = (undefined4 *)&mainPage;
    g_nextMenuPage = (undefined4 *)&mainPage;
  }
  if (resumePage != (undefined4 *)0x0) {
    boot::g_MoviePlayState = DAT_00a52cdc;
    g_currentMenuPage = resumePage;
    g_nextMenuPage = resumePage;
    g_MenuScreen = resumeScreen;
    if (resumeScreen == 0xf || resumeScreen == 0xb) {
      bVar5 = true;
      g_SelectedLevel = DAT_00a52c90;
      mission::RefreshLevelMissionStatus();
    }
    resumePage = (undefined4 *)0x0;
    resumeScreen = 0;
  }
  DAT_00a1de90 = DAT_007298d0;
  DAT_00a1de94 = DAT_007298d4;
  DAT_00a1de98 = DAT_007298d8;
  DAT_00a1de9c = DAT_007298dc;
  DAT_00a1de80 = DAT_007298e0;
  DAT_00a1de84 = DAT_007298e4;
  DAT_00a1de88 = DAT_007298e8;
  DAT_00a1de8c = DAT_007298ec;
  libc::memset(&DAT_00a1deb0,0,0x10);
  libc::memset(&DAT_00a1dea0,0,0x10);
  DAT_00a52bf0 = GameCamera.posX;
  DAT_00a52bf4 = GameCamera.posY;
  DAT_00a52bf8 = GameCamera.posZ;
  DAT_00a52bfc[0] = GameCamera.field8_0x14c[0];
  DAT_00a52bfc[1] = GameCamera.field8_0x14c[1];
  DAT_00a52bfc[2] = GameCamera.field8_0x14c[2];
  DAT_00a52bfc[3] = GameCamera.field8_0x14c[3];
  DAT_00a52c00 = GameCamera.rot.azimuth;
  DAT_00a52c04 = GameCamera.rot.elevation;
  DAT_00a52c08 = GameCamera.rot.radius;
  DAT_00a52c0c[0] = GameCamera.field10_0x15c[0];
  DAT_00a52c0c[1] = GameCamera.field10_0x15c[1];
  DAT_00a52c0c[2] = GameCamera.field10_0x15c[2];
  DAT_00a52c0c[3] = GameCamera.field10_0x15c[3];
  DAT_00a52c94 = ViewContext.xratio;
  dVar13 = 0.0;
  ViewContext.fogNearDist = 0.0;
  ViewContext.fogFarDist = 524288.0;
  ViewContext.fogNearIntensity = 255.0;
  ViewContext.xratio = 0.63;
  ViewContext.fogFarIntensity = 0.0;
  draw::UpdateViewContext();
  GameCamera.posX = 256.0;
  GameCamera.posZ = 64.0;
  GameCamera.posY = 256.0;
  libc::memset(0x951710,0,0x10);
  libc::memset(0x951720,0,0x10);
  libc::memset(0x951730,0,0x10);
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  draw::ComposeCameraMatrix();
  stub::STUB_00174cf4(1);
  stub::STUB_00503078(0);
  DAT_0159c330 = DAT_0159c330 + 1;
  if (bVar5) {
    DAT_00e5aa64 = 0x30000;
    DAT_00a52cb0 = loaders::g_NpcBuffer;
    DAT_00a52cac = loaders::g_NpcBuffer + 0x1e0000;
    DAT_00a52bc0 = (code *)(loaders::g_NpcBuffer + 0x100000);
    DAT_00a52ca8 = loaders::g_NpcBuffer + 0x4d800;
    DAT_00a52cb4 = loaders::g_NpcBuffer + 0x3c000;
    DAT_00a52cb8 = DAT_00a52cac;
    pause::Menu_InitStreamBuffers(0);
  }
  else {
    DAT_00a52cb0 = loaders::g_NpcBuffer + 0xc000;
    DAT_00e5aa64 = 0x60000;
    DAT_00a52bc0 = mobyutil::MB_CopyHeroLights + loaders::g_NpcBuffer;
    DAT_00a52cb4 = loaders::g_NpcBuffer + 0x3c000;
    DAT_00a52cb8 = loaders::g_NpcBuffer + 0x1ec000;
    DAT_00a52cac = loaders::g_NpcBuffer + 0x1fd800;
    DAT_00a52ca8 = loaders::g_NpcBuffer + 0xfd000;
    pause::Menu_InitStreamBuffers(1);
  }
  DAT_0071fbd4 = 0x2000;
  vuchain::VU1_initChain();
  if ((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) {
    map::Map_OnPauseMenuOpen();
  }
  stub::STUB_000c8818(0);
  if (((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) || (g_MenuScreen == 0x12)) {
    stub::STUB_000c8810(1);
  }
  else {
    stub::STUB_000c8810(0);
  }
  draw::Draw_FlushAndPresent();
  DAT_00a52bc8 = DAT_00966ad4;
  if ((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) {
    DAT_00a20704 = DAT_00966ad4 + 0x40000;
    DAT_00a20700 = DAT_00966ad4;
    iVar7 = 0;
    DAT_00966ad4 = DAT_00966ad4 + 0x40400;
    do {
      iVar8 = iVar7 + 1;
      iVar12 = DAT_00966ad4 + 0x4000;
      (&DAT_00a20708)[iVar7] = DAT_00966ad4;
      iVar7 = iVar8;
      DAT_00966ad4 = iVar12;
    } while (iVar8 < 4);
  }
  else {
    iVar7 = 4;
    puVar10 = &DAT_00a204c0;
    DAT_00a20700 = 0;
    DAT_00a20704 = 0;
    do {
      iVar7 = iVar7 + -1;
      puVar10[0x92] = 0;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
  hud::Hud_SwapMobyBank(1);
  iVar7 = 0;
  iVar8 = 4;
  DAT_00a52c7c = (uint)MobyClasses[0]->seq_cnt;
  MobyClasses[0]->seq_cnt = MobyClasses[0]->seq_cnt + '\x1c';
  do {
    iVar8 = iVar8 + -1;
    puVar10 = (undefined4 *)((int)&g_equippedItem + iVar7);
    iVar7 = iVar7 + 4;
    puVar11[0xc] = *puVar10;
    puVar11 = puVar11 + 1;
  } while (iVar8 != 0);
  if (g_currentMenuPage != (undefined4 *)0x0) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      if (DAT_00a35932 == -1) {
        pMVar9 = (MobyInstance *)0x0;
      }
      else {
        pMVar9 = mobyfunc::CreateMoby(FRAME);
        if (pMVar9 != (MobyInstance *)0x0) {
          pMVar9->updateDistance = -1;
          pMVar9->drawDistance = 0xff;
          pMVar9->enabled = '\x01';
          pMVar9->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar9);
          mobyutil::MB_SetLights(pMVar9,0x202020,0xe,0xe,0);
        }
      }
      *(MobyInstance **)((int)g_menuMobys + iVar7) = pMVar9;
      fVar6 = GameCamera.posX;
      if (*(int *)((int)g_menuMobys + iVar7) != 0) {
        iVar2 = *(int *)((int)g_menuMobys + iVar7);
        *(undefined ***)(iVar2 + 0x74) = &PTR_UpdateMoby_1138_00708f30;
        iVar3 = *(int *)((int)g_menuMobys + iVar7);
        uVar1 = *(ushort *)(iVar2 + 0x34);
        iVar12 = *(int *)(iVar3 + 0x24);
        iVar4 = *(int *)((int)g_currentMenuPage + iVar7);
        *(float *)(iVar3 + 0x10) = fVar6;
        fVar6 = GameCamera.posY;
        *(ushort *)(iVar2 + 0x34) = uVar1 & 0xfffd;
        *(float *)(iVar3 + 0x14) = fVar6;
        fVar6 = GameCamera.posZ;
        *(float *)(iVar3 + 0x40) = (float)dVar13;
        *(float *)(iVar3 + 0x18) = fVar6;
        *(float *)(iVar3 + 0x44) = (float)dVar13;
        *(float *)(iVar3 + 0x48) = (float)dVar13;
        mobyutil::MB_SetAnimationNoBlend
                  (iVar3,iVar4,(ulonglong)*(byte *)(*(int *)(iVar12 + 0x48 + iVar4 * 4) + 0x10) - 1)
        ;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar8 < 0xe);
  }
  return;
}



//==== 0013b838  ns=pause  size=0xda8
// sig: undefined UpdatePause(void)
// callers(1): 000e0e60 main::startLevel
// callees(31): 000678d8 draw::UpdateFog; 0006dad0 draw::FadeToBlack; 000c8444 hud::RegisterHUDCallback; 000c8578 hud::RegisterHeroHealthHUDCallbacks; 000c8820 hud::Hud_SwapMobyBank; 000c90a0 hud::Hud_ShowEntryById; 000e0854 loaders::LoadGadgetModel; 000e886c memcard::memcard_IsSaveSystemIdle; 000efb38 mobyfunc::DeleteMoby; 000fc168 mobyfunc::UpdateMobys; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 00112c20 mobyutil::MB_UnlockLevel; 0011b728 mobyutil::MB_UnlockSkillPoint; 0011ce64 music::music_Unpause; 0013b108 update::OpenPauseMenu; 0015be68 sound::sound_Update; 0015d12c sound::PlayMobySound; 0015e8a0 space::StartLeaveLevelCutscene; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 001698a0 update::mode_creditsInit; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174c24 vuchain::VU1_initChain; 00174cf0 stub::STUB_00174cf0; 00174cf4 stub::STUB_00174cf4; 004d6f50 FUN_004d6f50; 00505d20 stub::STUB_00505d20; 005cd098 libc::printf; 0060bb90 FUN_0060bb90
// strings: 006534c0: 'Transition to level %d\n' | 0096c165: 'None'

void pause::UpdatePause(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar4;
  undefined2 uVar7;
  LevelId LVar5;
  int *piVar6;
  longlong lVar3;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  MobyInstance *moby;
  uint uVar14;
  double dVar15;
  
  puVar12 = &g_MenuScreen;
  iVar4 = DAT_00a52cbc + 1;
  DAT_00a52cbc = 32000;
  if (iVar4 < 0x7d01) {
    DAT_00a52cbc = iVar4;
  }
  if (DAT_00a52cf4 != 0) {
    DAT_00a52cf4 = DAT_00a52cf4 + -1;
  }
  iVar9 = 0;
  iVar4 = memcard::memcard_IsSaveSystemIdle();
  if (iVar4 != 0) {
    iVar9 = DAT_00a52d00 + 1;
  }
  if (g_MenuScreen < 0x1e) {
    if (g_MenuScreen < 3) {
      if (g_MenuScreen < 2) goto LAB_0013b904;
    }
    else if (g_MenuScreen != 0x1a) goto LAB_0013b904;
  }
  else if (0x1f < g_MenuScreen) goto LAB_0013b904;
  DAT_00a15f3a = 1;
LAB_0013b904:
  DAT_00a52d00 = iVar9;
  if (g_MenuScreen == 0x14) {
    if (DAT_00a52bc4 != 0) {
      DAT_00a52bc4 = DAT_00a52bc4 + -1;
    }
    if ((DAT_00a52bc4 == 0) && (Music == 0)) {
      DAT_0071fbd4 = 0x1e000;
      vuchain::VU1_setBufSizeByLevel();
      GameCamera.posX = DAT_00a52bf0;
      GameCamera.posY = DAT_00a52bf4;
      GameCamera.posZ = DAT_00a52bf8;
      GameCamera.field8_0x14c[0] = DAT_00a52bfc[0];
      GameCamera.field8_0x14c[1] = DAT_00a52bfc[1];
      GameCamera.field8_0x14c[2] = DAT_00a52bfc[2];
      GameCamera.field8_0x14c[3] = DAT_00a52bfc[3];
      GameCamera.rot.azimuth = DAT_00a52c00;
      GameCamera.rot.elevation = DAT_00a52c04;
      GameCamera.rot.radius = DAT_00a52c08;
      GameCamera.field10_0x15c[0] = DAT_00a52c0c[0];
      GameCamera.field10_0x15c[1] = DAT_00a52c0c[1];
      GameCamera.field10_0x15c[2] = DAT_00a52c0c[2];
      GameCamera.field10_0x15c[3] = DAT_00a52c0c[3];
      ViewContext.xratio = DAT_00a52c94;
      hud::Hud_SwapMobyBank(0);
      if (DAT_00a52cec != 0) {
        g_gadgetIdx = 0xffffffff;
        loaders::LoadGadgetModel(DAT_00a52cec,DAT_00a52cf0);
      }
      draw::UpdateFog();
      iVar4 = boot::g_MoviePlayState;
      DAT_00a52cb4 = 0;
      DAT_00a52cb8 = 0;
      g_CutscenePlaying = 1;
      DAT_00a52cb0 = 0;
      DAT_00a52bc0 = 0;
      if (g_menuClosing == 2) {
        libc::printf("Transition to level %d\n",g_SelectedLevel);
        space::StartLeaveLevelCutscene(g_SelectedLevel);
      }
      else if (g_menuClosing == 3) {
        boot::g_MoviePlayState = 2;
        DAT_00a52cdc = iVar4;
        draw::FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        update::PlayInfobotMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 4) {
        boot::g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        draw::FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        update::PlayStoryMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 6) {
        boot::g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        draw::FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        update::PlaySpecialMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 5) {
        boot::g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        draw::FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        update::mode_sceneInit(DAT_00a52c90);
      }
      else if (g_menuClosing == 7) {
        DAT_00a52cdc = boot::g_MoviePlayState;
        draw::FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        update::mode_creditsInit();
      }
      else {
        g_gameMode = GAME_MODE_NORMAL;
      }
      FUN_0060bb90(0x1d);
      if (g_menuClosing != 2) {
        music::music_Unpause();
      }
      stub::STUB_00505d20();
      sound::sound_Update();
    }
  }
  else {
    if (((((g_MenuScreen == 0) || (g_MenuScreen == 10)) || (g_MenuScreen == 0xe)) ||
        ((g_MenuScreen == 0x11 || (g_MenuScreen == 0x21)))) ||
       ((g_MenuScreen == 0x2d || (g_MenuScreen == 0x23)))) {
      update::OpenPauseMenu();
    }
    if ((((DAT_00964b00 & 2) == 0) || ((DAT_00964b00 & 4) == 0)) ||
       (((DAT_00964b00 & 8) != 0 || ((DAT_00964b00 & 1) != 0)))) {
      DAT_00a534c0 = 0;
    }
    else if (((pad_pressedButton & 0xf0a0) != 0) && (DAT_00a534c0 < 0x14)) {
      uVar7 = 0;
      if ((((pad_pressedButton & 0x1000) == 0) &&
          (((uVar7 = 1, (pad_pressedButton & 0x4000) == 0 &&
            (uVar7 = 2, (pad_pressedButton & 0x8000) == 0)) &&
           (uVar7 = 3, (pad_pressedButton & 0x2000) == 0)))) &&
         (uVar7 = 5, (pad_pressedButton & 0x80) != 0)) {
        uVar7 = 4;
      }
      iVar4 = DAT_00a534c0 * 2;
      DAT_00a534c0 = DAT_00a534c0 + 1;
      bVar1 = DAT_00a534c0 == 0x14;
      *(undefined2 *)(&DAT_00a534c4 + iVar4) = uVar7;
      if (bVar1) {
        iVar9 = 2;
        iVar4 = -1;
        do {
          uVar10 = 0;
          bVar1 = true;
          do {
            iVar11 = (int)uVar10 + 1;
            if (*(ushort *)(&DAT_00a534c4 + (int)((uVar10 & 0xffffffff) << 1)) !=
                (ushort)(byte)(&DAT_00731598)[iVar9 * iVar11 & 0xff]) {
              bVar1 = false;
              break;
            }
            uVar10 = (ulonglong)iVar11;
          } while (iVar11 < 0x14);
          if (bVar1) {
            iVar4 = iVar9 + -2;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x93);
        if (iVar4 != -1) {
          LVar5 = iVar4 - 0x24;
          iVar9 = iVar4 + -0x3d;
          if (iVar4 < 0x25) {
            (&UnlockableItems.field0_0x0)[iVar4] = '\x01';
            CHAR_ARRAY_0096c165[iVar4] = '\x01';
          }
          else if (((int)LVar5 < 1) || (0x12 < (int)LVar5)) {
            if ((iVar4 + -0x37 < 0) || (5 < iVar4 + -0x37)) {
              if ((-1 < iVar9) && (iVar9 < 0x1e)) {
                mobyutil::MB_UnlockSkillPoint(iVar9);
              }
            }
            else {
              *(undefined1 *)((int)&g_hasClank + iVar4 + 1) = 1;
            }
          }
          else {
            mobyutil::MB_UnlockLevel(LVar5);
          }
        }
      }
    }
    puVar2 = g_nextMenuPage;
    if (g_MenuScreen == 1) {
      iVar4 = 0;
      if (0 < DAT_00a52bc4) {
        iVar4 = DAT_00a52bc4 + -1;
      }
      DAT_00a52bc4 = iVar4;
      if (iVar4 == 0) {
        g_nextMenuPage = (undefined *)0x0;
        iVar4 = 0;
        g_currentMenuPage = puVar2;
        g_MenuScreen = *(int *)(puVar2 + 0x3c);
        do {
          piVar6 = (int *)(g_currentMenuPage + iVar4 * 4 + 0x44);
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 8) != 0)) {
            (*(code *)**(undefined4 **)(*piVar6 + 8))(*piVar6,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xe);
      }
    }
    else if (g_nextMenuPage != (undefined *)0x0) {
      if (g_currentMenuPage == g_nextMenuPage) {
        sound::PlayMobySound(3,0x11,(MobyInstance *)g_menuMobys[0]);
      }
      else {
        sound::PlayMobySound(4,0x11,(MobyInstance *)g_menuMobys[0]);
      }
      iVar9 = 0;
      iVar4 = 0;
      do {
        piVar6 = (int *)(g_currentMenuPage + iVar4 + 0x44);
        if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0xc) != 0)) {
          (*(code *)**(undefined4 **)(*piVar6 + 0xc))(*piVar6,0);
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      uVar14 = (uint)LZCOUNT((int)g_nextMenuPage - *(int *)(g_currentMenuPage + 0x38)) >> 5;
      if ((((g_currentMenuPage == g_nextMenuPage) && (g_currentMenuPage != &DAT_0072ebc8)) &&
          (g_currentMenuPage != (undefined *)0x72f768)) &&
         (((g_currentMenuPage != (undefined *)0x72fa74 && (g_currentMenuPage != &DAT_0072dc78)) &&
          ((g_currentMenuPage != (undefined *)0x72f350 &&
           ((g_currentMenuPage != (undefined *)0x72e0e0 && (g_MenuScreen != 0x23)))))))) {
        uVar14 = (uint)LZCOUNT(uVar14) >> 5;
      }
      iVar9 = 0;
      iVar4 = 0;
      do {
        puVar2 = g_nextMenuPage;
        if (*(int *)(g_nextMenuPage + iVar4 + 0x44) != 0) {
          *(undefined4 *)(*(int *)(g_nextMenuPage + iVar4 + 0x44) + 0x14) =
               *(undefined4 *)((int)g_menuMobys + iVar4);
        }
        if (uVar14 == 0) {
          mobyutil::MB_SetAnimationNoBlend
                    (*(undefined4 *)((int)g_menuMobys + iVar4),*(undefined4 *)(puVar2 + iVar4),0);
          *(undefined4 *)(*(int *)((int)g_menuMobys + iVar4) + 0x58) = 0x3f800000;
        }
        else {
          mobyutil::MB_SetAnimationNoBlend
                    (*(int *)((int)g_menuMobys + iVar4),*(int *)(g_currentMenuPage + iVar4),
                     (ulonglong)
                     *(byte *)(*(int *)(*(int *)(*(int *)((int)g_menuMobys + iVar4) + 0x24) + 0x48 +
                                       *(int *)(g_currentMenuPage + iVar4) * 4) + 0x10) - 1);
          *(undefined4 *)(*(int *)((int)g_menuMobys + iVar4) + 0x58) = 0xbf800000;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      g_MenuScreen = 1;
      DAT_00a52bc4 = 0xc;
      DAT_00a52c80 = g_currentMenuPage;
      g_currentMenuPage = (undefined *)0x0;
    }
    puVar2 = g_currentMenuPage;
    if (g_currentMenuPage != (undefined *)0x0) {
      iVar4 = 0;
      puVar13 = g_currentMenuPage;
      do {
        if (((((puVar2 != (undefined *)0xffffffbc) &&
              (piVar6 = *(int **)(puVar13 + 0x44), piVar6 != (int *)0x0)) && (*piVar6 != 0)) &&
            (iVar9 = (**(code **)*piVar6)(), iVar9 != 0)) &&
           ((g_menuClosing = 1, g_MenuScreen == 0xf || (g_MenuScreen == 0x10)))) {
          g_menuClosing = 2;
        }
        iVar4 = iVar4 + 1;
        puVar13 = puVar13 + 4;
      } while (iVar4 < 0xe);
      if ((g_currentMenuPage != (undefined *)0x0) && (*(int *)(g_currentMenuPage + 0x80) != 0)) {
        iVar4 = *(int *)(g_currentMenuPage + 0x40);
        if (*(int *)(iVar4 + 0xc) != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0xc))(iVar4,1);
        }
        puVar2 = g_currentMenuPage;
        *(undefined4 *)(g_currentMenuPage + 0x40) = *(undefined4 *)(g_currentMenuPage + 0x80);
        *(undefined4 *)(puVar2 + 0x80) = 0;
        iVar4 = *(int *)(puVar2 + 0x40);
        if (*(int *)(iVar4 + 8) != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 8))(iVar4,1);
        }
      }
    }
    mobyfunc::UpdateMobys();
    sound::sound_Update();
    if ((g_menuClosing != 0) && (9 < DAT_00a52cbc)) {
      stub::STUB_00174cf4(1);
      vuchain::VU1_initChain();
      if (g_currentMenuPage != (undefined *)0x0) {
        iVar9 = 0;
        iVar4 = 0;
        do {
          piVar6 = (int *)(g_currentMenuPage + iVar4 + 0x44);
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0xc) != 0)) {
            (*(code *)**(undefined4 **)(*piVar6 + 0xc))(*piVar6,0);
          }
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar9 < 0xe);
        g_currentMenuPage = (undefined *)0x0;
      }
      iVar4 = 0;
      iVar9 = 0;
      do {
        if (*(int *)((int)&g_equippedItem + iVar9) != puVar12[0xc]) {
          uVar8 = 0x26;
          if (*(int *)((int)&DAT_00a52be0 + iVar9) != 0) {
            uVar8 = *(undefined4 *)((int)&DAT_00a52be0 + iVar9);
          }
          *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = uVar8;
        }
        iVar4 = iVar4 + 1;
        puVar12 = puVar12 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar4 < 4);
      iVar9 = 0;
      iVar4 = 0;
      DAT_00966ad4 = DAT_00a52bc8;
      do {
        moby = *(MobyInstance **)((int)g_menuMobys + iVar4);
        if (moby != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(moby);
          lVar3 = (longlong)worldUpdateTime;
          moby->color = (int)((ulonglong)lVar3 >> 0x20);
          moby->light = (int)lVar3;
          moby = (MobyInstance *)0x0;
        }
        iVar9 = iVar9 + 1;
        *(MobyInstance **)((int)g_menuMobys + iVar4) = moby;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      iVar4 = hud::RegisterHeroHealthHUDCallbacks();
      dVar15 = 180.5;
      hud::Hud_ShowEntryById(iVar4,(int)(animationSpeed * 180.5));
      iVar4 = hud::RegisterHUDCallback
                        (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                         &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
      hud::Hud_ShowEntryById(iVar4,(int)((double)animationSpeed * dVar15));
      DAT_00a52bc4 = 2;
      g_MenuScreen = 0x14;
      if ((int)DAT_00a52c7c < (int)(uint)MobyClasses[0]->seq_cnt) {
        lVar3 = ((ulonglong)DAT_00a52c7c & 0x3fffffff) << 2;
        uVar14 = DAT_00a52c7c;
        do {
          uVar14 = uVar14 + 1;
          iVar4 = (int)lVar3;
          lVar3 = lVar3 + 4;
          *(undefined4 *)(&MobyClasses[0]->type + iVar4) = 0;
        } while ((int)uVar14 < (int)(uint)MobyClasses[0]->seq_cnt);
      }
      MobyClasses[0]->seq_cnt = (u8)DAT_00a52c7c;
      g_CutscenePlaying = 1;
      CollOutput.collCount = CollOutput.collCount & 0x7fffffff;
      stub::STUB_00174cf0();
      stub::STUB_00174cf4(1);
      iVar9 = DAT_00a52e68;
      iVar4 = DAT_00a52e64;
      *(undefined4 *)(g_viewMtxPtr + 0x1a78) = DAT_00a534a4;
      DAT_00a534a4 = 0;
      if (iVar4 != iVar9) {
        DAT_00a52e68 = DAT_00a52e64;
        FUN_004d6f50(g_viewMtxPtr,DAT_00a52e64);
      }
    }
  }
  return;
}



//==== 0013c5e8  ns=pause  size=0x47c
// sig: undefined DrawTVTextures(void)
// callers(2): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu
// callees(9): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca3e4 hud::GetIconFrameTex; 000fc620 mobyutil::MB_randInt; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 005c4988 FUN_005c4988

void pause::DrawTVTextures(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  
  if ((param_1 != 0) && (iVar10 = *(int *)(param_1 + 0x78), iVar10 != 0)) {
    iVar1 = *(int *)(iVar10 + 0x50);
    iVar2 = *(int *)(iVar10 + 0x54);
    iVar3 = *(int *)(iVar10 + 0x58);
    iVar4 = *(int *)(iVar10 + 0x5c);
    if ((iVar1 < 0x200) && (-1 < iVar3 + iVar1)) {
      iVar8 = 0x1a0;
      if (Cutscene != 0) {
        iVar8 = 0x1c0;
      }
      if ((iVar2 <= iVar8) && (-1 < iVar4 + iVar2)) {
        uVar5 = FUN_00502f08(0,0,0,0,0,0);
        vuchain::SetGSReg(6,uVar5);
        uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
        vuchain::SetGSReg(3,uVar5);
        uVar5 = hud::GetIconFrameTex(0xe99e,7);
        hud::Hud_DrawTexQuad_v2(uVar5,iVar1 << 4,iVar2 << 4,iVar3 << 4,iVar4 << 4,0x80);
        if (*(int *)(iVar10 + 0x48) == 0) {
          iVar8 = mobyutil::MB_randInt(2000);
          if (iVar8 == 0) {
            *(undefined4 *)(iVar10 + 0x4c) = 0;
            *(undefined4 *)(iVar10 + 0x48) = 1;
          }
        }
        else {
          *(int *)(iVar10 + 0x4c) = *(int *)(iVar10 + 0x4c) + 2;
          uVar5 = mobyutil::MB_randInt(200);
          uVar6 = mobyutil::MB_randInt(200);
          iVar8 = FUN_005c4988(*(int *)(iVar10 + 0x4c) + -0x80);
          uVar7 = FUN_00502f08(0,0,0,0,0,0);
          vuchain::SetGSReg(6,uVar7);
          iVar8 = (0x80 - iVar8) * 2;
          iVar9 = 0x80;
          if (iVar8 < 0x81) {
            iVar9 = iVar8;
          }
          uVar7 = idol_draw::PackCmd(0,2,2,1,iVar9);
          vuchain::SetGSReg(3,uVar7);
          draw::GetEffectTex(0x1a);
          draw::Sprite_DrawShapeWrapper(iVar1,iVar2,iVar3,iVar4,uVar5,uVar6,iVar3,iVar4);
          if (0xff < *(int *)(iVar10 + 0x4c)) {
            *(undefined4 *)(iVar10 + 0x48) = 0;
          }
        }
        uVar5 = FUN_00502f08(0,0,0,0,0,0);
        vuchain::SetGSReg(6,uVar5);
        uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
        vuchain::SetGSReg(3,uVar5);
        draw::GetEffectTex(0x1c);
        draw::Sprite_DrawShapeWrapper
                  (iVar1,iVar2,iVar3,iVar4,0,0,iVar3,(int)((float)(longlong)iVar4 * 0.5));
        iVar8 = -2;
        iVar10 = -2;
        if (0x4b < iVar3) {
          iVar8 = -1;
        }
        if (0x96 < iVar3) {
          iVar8 = 0;
        }
        if (0x4b < iVar4) {
          iVar10 = -1;
        }
        if (0x96 < iVar4) {
          iVar10 = 0;
        }
        draw::GetEffectTex(0x19);
        draw::Sprite_DrawShapeWrapper
                  (iVar1 + 1,iVar2 + 1,iVar3 + iVar8,iVar4 + iVar10,1,1,0x3e,0x3e);
      }
    }
  }
  return;
}



//==== 0013ca68  ns=pause  size=0x7b0
// sig: undefined DrawPauseMenu(void)
// callers(2): 0006c4d8 draw::SetupDefaultDrawFreeze; 0006c558 draw::InitLevelRenderState
// callees(21): 0006889c draw::Sprite_DrawShape; 0006b5dc draw::DrawScreenOverlay; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006e0d8 draw::DrawRenderTargetToScreen; 00071180 draw::SetScreenResolution; 00071ac0 draw::ResetHUDPass; 00078100 stub::STUB_00078100; 000ca72c hud::DrawFlatOverlay; 000f1448 stub::STUB_000f1448; 000f184c stub::STUB_000f184c; 000f1850 mobyfunc::DrawMobyDepth; 000f1934 mobyfunc::MB_AddToDrawList; 000f1974 mobyfunc::DrawMobyList; 0013c5e8 pause::DrawTVTextures; 0016a108 vendor::ProjectBoxToScreenInt; 00174cf4 stub::STUB_00174cf4; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98

/* [p2_pause] called from draw::SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4)
   [p2_pause] called from draw::SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4)
   [p2_pause] called from draw::SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4) */

void pause::DrawPauseMenu(char param_1)

{
  RsxCmd *pRVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  RenderingStep *pRVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  
  iVar22 = 0;
  iVar17 = 0;
  stub::STUB_00078100();
  pRVar8 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar8->command[1] = 0xffffff00;
  pRVar8->command = pRVar8->command + 2;
  pRVar8 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar8->command[1] = 1;
  pRVar1 = pRVar8->command;
  pRVar8->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar8->command[1] = 0;
  pRVar8->command = pRVar8->command + 2;
  draw::DrawRenderTargetToScreen(0);
  if ((param_1 == '\0') && (draw::DrawScreenOverlay(0,0,0,0x30), g_MenuScreen != 0x14)) {
    uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
    vuchain::SetGSReg(0x16,uVar9);
    mobyfunc::DrawMobyDepth();
    iVar18 = 0;
    iVar21 = 0;
    do {
      if (((*(int *)((int)&DAT_00729894 + iVar21) != 0) &&
          (*(int *)((int)g_menuMobys + iVar21) != 0)) && ((iVar18 != 6 || (DAT_00a52c88 != '\0'))))
      {
        mobyfunc::MB_AddToDrawList(*(undefined4 *)((int)g_menuMobys + iVar21),1);
      }
      iVar18 = iVar18 + 1;
      iVar21 = iVar21 + 4;
    } while (iVar18 < 0xe);
    if (g_currentMenuPage != 0) {
      iVar22 = g_currentMenuPage + 0x44;
    }
    iVar18 = 0;
    iVar21 = 0;
    do {
      if (((*(int *)((int)g_menuMobys + iVar21) != 0) &&
          (*(int *)((int)&DAT_00729894 + iVar21) != 0)) && ((iVar18 != 6 || (DAT_00a52c88 != '\0')))
         ) {
        puVar2 = *(undefined8 **)(*(int *)((int)g_menuMobys + iVar21) + 0x78);
        vendor::ProjectBoxToScreenInt
                  (*puVar2,puVar2[1],puVar2[6],puVar2[7],&local_90,&local_8c,&local_88,&local_84);
        iVar13 = local_88 + 1;
        iVar11 = local_84 + 1;
        if ((iVar22 != 0) && (iVar7 = *(int *)(iVar22 + iVar21), iVar7 != 0)) {
          *(int *)(iVar7 + 0x20) = local_90;
          *(int *)(iVar7 + 0x24) = local_8c;
          *(int *)(iVar7 + 0x18) = iVar13;
          *(int *)(iVar7 + 0x1c) = iVar11;
        }
        *(int *)(puVar2 + 10) = iVar13;
        *(int *)((int)puVar2 + 0x54) = iVar11;
        *(int *)(puVar2 + 0xb) = local_90;
        *(int *)((int)puVar2 + 0x5c) = local_8c;
        hud::DrawFlatOverlay
                  (local_88 + 2,local_84 + 2,local_90 + iVar13 + -1,local_8c + iVar11 + -1,
                   DAT_00729840,0);
        local_88 = iVar13;
        local_84 = iVar11;
      }
      iVar18 = iVar18 + 1;
      iVar21 = iVar21 + 4;
    } while (iVar18 < 0xe);
    iVar21 = 0;
    do {
      iVar11 = 0;
      iVar18 = 0;
      do {
        if (((((((iVar22 != 0 && *(int *)((int)g_menuMobys + iVar18) != 0) &&
                (iVar13 = *(int *)(iVar22 + iVar18), iVar13 != 0)) &&
               ((*(uint *)(iVar13 + 0x10) & 4) == 0)) &&
              ((*(int *)((int)&DAT_00729894 + iVar18) != 0 && (*(int *)(iVar13 + 4) != 0)))) &&
             ((iVar11 != 6 || (DAT_00a52c88 != '\0')))) &&
            ((iVar21 != 0 || ((*(uint *)(iVar13 + 0x10) & 2) != 0)))) &&
           ((iVar21 != 1 || ((*(uint *)(*(int *)(iVar22 + iVar18) + 0x10) & 2) == 0)))) {
          iVar13 = *(int *)(iVar22 + iVar18);
          if ((iVar13 == 0) || ((*(uint *)(iVar13 + 0x10) & 1) == 0)) {
            iVar13 = *(int *)(*(int *)((int)g_menuMobys + iVar18) + 0x78);
            uVar20 = 8;
            uVar19 = 8;
            uVar3 = *(uint *)(iVar13 + 0x58);
            uVar4 = *(undefined4 *)(iVar13 + 0x50);
            uVar5 = *(undefined4 *)(iVar13 + 0x54);
            uVar6 = *(uint *)(iVar13 + 0x5c);
            if (0x100 < (int)uVar3) {
              do {
                uVar20 = uVar20 + 1;
              } while (1 << (uVar20 & 0x3f) < (int)uVar3);
            }
            if (0x100 < (int)uVar6) {
              do {
                uVar19 = uVar19 + 1;
              } while (1 << (uVar19 & 0x3f) < (int)uVar6);
            }
            draw::SetScreenResolution
                      (0x3ff0000000000000,uVar20,uVar19,&DAT_0013ca64,
                       (ulonglong)(LZCOUNT(iVar21) << 0x20) >> 0x25 ^ 1,DAT_00729844);
            uVar10 = (*(code *)**(undefined4 **)(*(int *)(iVar22 + iVar18) + 4))();
            draw::ResetHUDPass();
            uVar9 = idol_draw::PackCmd(0,1,2,1,0x80);
            vuchain::SetGSReg(3,uVar9);
            uVar9 = FUN_00502f98(1,1,4,0,0,0,0,0);
            vuchain::SetGSReg(0x16,uVar9);
            if ((uVar10 & 1) == 0) {
              uVar20 = 1 << (uVar20 & 0x3f);
              uVar19 = 1 << (uVar19 & 0x3f);
              uVar14 = 0;
              uVar16 = 0;
              uVar15 = uVar3;
              uVar12 = uVar6;
              if ((uVar10 & 2) == 0) {
                uVar15 = uVar20;
                uVar12 = uVar19;
                if ((uVar10 & 8) == 0) {
                  if ((uVar10 & 4) == 0) {
                    if ((uVar10 & 0x10) == 0) goto LAB_0013d130;
                  }
                  else if ((int)uVar3 < (int)uVar6) {
                    uVar14 = (((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0)) -
                             (int)(uVar20 * uVar3) / (int)(uVar6 << 1);
                    uVar15 = uVar20 - uVar14;
                  }
                  else {
                    uVar16 = (((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0)) -
                             (int)(uVar19 * uVar6) / (int)(uVar3 << 1);
                    uVar12 = uVar19 - uVar16;
                  }
                }
                else {
                  uVar15 = uVar20 - uVar3;
                  uVar12 = uVar19 - uVar6;
                  uVar14 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
                  uVar16 = ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0);
                  uVar15 = uVar20 - uVar14;
                  uVar12 = uVar19 - uVar16;
                  if ((int)uVar14 < 0) {
                    uVar14 = 0;
                  }
                  if ((int)uVar16 < 0) {
                    uVar16 = 0;
                  }
                  if ((int)uVar20 < (int)uVar15) {
                    uVar15 = uVar20;
                  }
                  if ((int)uVar19 < (int)uVar12) {
                    uVar12 = uVar19;
                  }
                }
              }
              uVar15 = uVar15 - uVar14;
              uVar12 = uVar12 - uVar16;
              draw::Sprite_DrawShape
                        (uVar4,uVar5,uVar3,uVar6,
                         ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0),
                         ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0),
                         ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0),
                         ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0));
            }
          }
          else {
            (*(code *)**(undefined4 **)(iVar13 + 4))();
          }
        }
LAB_0013d130:
        iVar11 = iVar11 + 1;
        iVar18 = iVar18 + 4;
      } while (iVar11 < 0xe);
      if (iVar21 == 0) {
        stub::STUB_000f184c();
        mobyfunc::DrawMobyList();
        stub::STUB_00174cf4(0x10);
        stub::STUB_000f1448();
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < 2);
    stub::STUB_0006d704(0);
    iVar22 = 0;
    do {
      if ((*(int *)((int)&DAT_00729894 + iVar22) != 0) && ((iVar17 != 6 || (DAT_00a52c88 != '\0'))))
      {
        DrawTVTextures(*(undefined4 *)((int)g_menuMobys + iVar22));
      }
      iVar17 = iVar17 + 1;
      iVar22 = iVar22 + 4;
    } while (iVar17 < 0xe);
    stub::STUB_0006d708();
  }
  return;
}



//==== 0013d218  ns=pause  size=0x14
// sig: undefined ???_Unused_Pause_InitEntry9(void)
// callers(0): 
// callees(0): 

void pause::____Unused_Pause_InitEntry9(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = 9;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}



//==== 0013d22c  ns=pause  size=0x1b4
// sig: undefined InitMenuTextIds(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(1): 005d0140 libc::memset

/* [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language
   [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language
   [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language */

void pause::InitMenuTextIds(void)

{
  if (*(int *)((int)boot::g_pHWSystem + 0xc0) == 0) {
    DAT_00730488 = 0x4f2c;
    DAT_0073048c = 0;
    DAT_0073048a = 9;
    DAT_00730496 = 9;
    DAT_00730494 = 0x4f2d;
    DAT_00730498 = 2;
    DAT_007304a0 = 0x4f2e;
    DAT_007304a2 = 9;
    DAT_007304a4 = 4;
    libc::memset(&DAT_007304ac,0,0xc);
  }
  else if (*(int *)((int)boot::g_pHWSystem + 0xc0) == 1) {
    DAT_00730488 = 0x4f2c;
    DAT_0073048c = 0;
    DAT_0073048a = 9;
    DAT_00730494 = 0x4f2d;
    DAT_00730496 = 9;
    DAT_00730498 = 2;
    DAT_007304a0 = 0x4f2f;
    DAT_007304a2 = 9;
    DAT_007304a4 = 3;
    DAT_007304ac = 0x4f2e;
    DAT_007304ae = 9;
    DAT_007304b0 = 4;
    DAT_007304b8 = 0x4f30;
    DAT_007304ba = 9;
    DAT_007304bc = 5;
    libc::memset(&DAT_007304c4,0,0xc);
  }
  else if (*(int *)((int)boot::g_pHWSystem + 0xc0) == 3) {
    DAT_00730488 = 0xfb2e;
    DAT_0073048a = 9;
    DAT_0073048c = 6;
    libc::memset(&DAT_00730494,0,0xc);
  }
  return;
}



//==== 0013d3e0  ns=pause  size=0x40
// sig: undefined EnterPauseState(void)
// callers(1): 00011020 boot::FrontEnd_Update
// callees(0): 

void pause::EnterPauseState(void)

{
  g_gameMode = GAME_MODE_PAUSE;
  g_MenuScreen = 0x2d;
  g_menuClosing = 0;
  DAT_00a52bc0 = 0;
  DAT_00a52e68 = DAT_00a52e64;
  DAT_00a52cbc = 0;
  return;
}



//==== 0013d428  ns=pause  size=0x2e0
// sig: undefined FrontEnd_InitMenu(void)
// callers(1): 0013d8a0 pause::FrontEnd_UpdateMenu
// callees(9): 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0013af68 pause::Menu_InitStreamBuffers; 00174c24 vuchain::VU1_initChain; 00174cf4 stub::STUB_00174cf4; 00503078 stub::STUB_00503078; 005d0140 libc::memset

/* [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
   [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
   [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
    */

void pause::FrontEnd_InitMenu(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  int iVar8;
  int iVar9;
  
  g_unclosableMenu = 0;
  g_MenuScreen = 2;
  DAT_00a1de90 = DAT_007298d0;
  g_currentMenuPage = &DAT_00730034;
  g_nextMenuPage = &DAT_00730034;
  DAT_00a1de94 = DAT_007298d4;
  DAT_00a1de98 = DAT_007298d8;
  DAT_00a1de9c = DAT_007298dc;
  DAT_00a1de80 = DAT_007298e0;
  DAT_00a1de84 = DAT_007298e4;
  DAT_00a1de88 = DAT_007298e8;
  DAT_00a1de8c = DAT_007298ec;
  libc::memset(&DAT_00a1deb0,0,0x10);
  libc::memset(&DAT_00a1dea0,0,0x10);
  stub::STUB_00174cf4(1);
  stub::STUB_00503078(0);
  DAT_0159c330 = DAT_0159c330 + 1;
  DAT_00e5aa64 = 0xa0000;
  DAT_00a52bc0 = loaders::g_NpcBuffer + 0x100000;
  DAT_00a52cb4 = loaders::g_NpcBuffer + 0x30000;
  DAT_00a52cb0 = loaders::g_NpcBuffer;
  DAT_00a52cb8 = loaders::g_NpcBuffer + 0x1e0000;
  DAT_00a52ca8 = loaders::g_NpcBuffer + 0xf1000;
  DAT_00a52cac = loaders::g_NpcBuffer + 0x1f1800;
  Menu_InitStreamBuffers(1);
  vuchain::VU1_initChain();
  DAT_00a52bc8 = DAT_00966ad4;
  if (g_currentMenuPage != (undefined4 *)0x0) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      if (DAT_00a35932 == -1) {
        pMVar7 = (MobyInstance *)0x0;
      }
      else {
        pMVar7 = mobyfunc::CreateMoby(FRAME);
        if (pMVar7 != (MobyInstance *)0x0) {
          pMVar7->updateDistance = -1;
          pMVar7->drawDistance = 0xff;
          pMVar7->enabled = '\x01';
          pMVar7->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar7);
          mobyutil::MB_SetLights(pMVar7,0x202020,0xe,0xe,0);
        }
      }
      *(MobyInstance **)((int)g_menuMobys + iVar9) = pMVar7;
      fVar5 = GameCamera.posX;
      if (*(int *)((int)g_menuMobys + iVar9) != 0) {
        iVar2 = *(int *)((int)g_menuMobys + iVar9);
        *(undefined ***)(iVar2 + 0x74) = &PTR_UpdateMoby_1138_00708f30;
        puVar6 = g_currentMenuPage;
        uVar1 = *(ushort *)(iVar2 + 0x34);
        iVar3 = *(int *)((int)g_menuMobys + iVar9);
        *(float *)(iVar3 + 0x10) = fVar5;
        *(ushort *)(iVar2 + 0x34) = uVar1 & 0xfffd;
        *(float *)(iVar3 + 0x14) = GameCamera.posY;
        iVar4 = *(int *)((int)puVar6 + iVar9);
        *(float *)(iVar3 + 0x18) = GameCamera.posZ;
        *(undefined4 *)(iVar3 + 0x40) = 0;
        iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 0x48 + iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        mobyutil::MB_SetAnimationNoBlend(iVar3,iVar4,(ulonglong)*(byte *)(iVar2 + 0x10) - 1);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar8 < 0xe);
  }
  return;
}



//==== 0013d708  ns=pause  size=0x190
// sig: undefined FrontEnd_ShutdownMenu(void)
// callers(1): 0013d8a0 pause::FrontEnd_UpdateMenu
// callees(2): 000efb38 mobyfunc::DeleteMoby; 004d6f50 FUN_004d6f50

/* [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys
   [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys
   [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys */

void pause::FrontEnd_ShutdownMenu(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  MobyInstance *moby;
  int iVar4;
  
  if (9 < DAT_00a52cbc) {
    if (g_currentMenuPage != 0) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        piVar1 = (int *)(g_currentMenuPage + 0x44 + iVar4);
        if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0xc) != 0)) {
          (*(code *)**(undefined4 **)(*piVar1 + 0xc))(*piVar1,0);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < 0xe);
      g_currentMenuPage = 0;
    }
    iVar3 = 0;
    iVar4 = 0;
    DAT_00966ad4 = DAT_00a52bc8;
    do {
      moby = *(MobyInstance **)((int)g_menuMobys + iVar4);
      if (moby != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(moby);
        lVar2 = (longlong)worldUpdateTime;
        moby->color = (int)((ulonglong)lVar2 >> 0x20);
        moby->light = (int)lVar2;
        moby = (MobyInstance *)0x0;
      }
      iVar3 = iVar3 + 1;
      *(MobyInstance **)((int)g_menuMobys + iVar4) = moby;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0xe);
    if (DAT_00a52e64 != DAT_00a52e68) {
      DAT_00a52e68 = DAT_00a52e64;
      FUN_004d6f50(g_viewMtxPtr,DAT_00a52e64);
    }
    g_MenuScreen = 0x14;
    DAT_00a52bc4 = 2;
  }
  return;
}



//==== 0013d8a0  ns=pause  size=0x578
// sig: undefined FrontEnd_UpdateMenu(void)
// callers(1): 00011020 boot::FrontEnd_Update
// callees(10): 000678d8 draw::UpdateFog; 00078178 freeze::DisplayPrompt; 000e886c memcard::memcard_IsSaveSystemIdle; 000fc168 mobyfunc::UpdateMobys; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0013d428 pause::FrontEnd_InitMenu; 0013d708 pause::FrontEnd_ShutdownMenu; 0015d12c sound::PlayMobySound; 00174bdc vuchain::VU1_setBufSizeByLevel; 005d0140 libc::memset

/* [p2_pause] called from boot::FrontEnd_Update; title/front-end menu tick
   [p2_pause] called from boot::FrontEnd_Update; title/front-end menu tick
   [p2_pause] called from boot::FrontEnd_Update; title/front-end menu tick */

void pause::FrontEnd_UpdateMenu(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  
  iVar1 = DAT_00a52cbc + 1;
  DAT_00a52cbc = 32000;
  if (iVar1 < 0x7d01) {
    DAT_00a52cbc = iVar1;
  }
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  libc::memset(0x951710,0,0x10);
  libc::memset(0x951720,0,0x10);
  libc::memset(0x951730,0,0x10);
  dVar7 = 1.0;
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  if (DAT_00a52cf4 != 0) {
    DAT_00a52cf4 = DAT_00a52cf4 + -1;
  }
  iVar4 = 0;
  iVar1 = memcard::memcard_IsSaveSystemIdle();
  if (iVar1 != 0) {
    iVar4 = DAT_00a52d00 + 1;
  }
  DAT_00a52d00 = iVar4;
  if (g_MenuScreen == 0x14) {
    if (DAT_00a52bc4 != 0) {
      DAT_00a52bc4 = DAT_00a52bc4 + -1;
    }
    if ((DAT_00a52bc4 == 0) && (Music == 0)) {
      DAT_0071fbd4 = 0x1e000;
      vuchain::VU1_setBufSizeByLevel();
      draw::UpdateFog();
      DAT_00a52cb4 = 0;
      DAT_00a52cb8 = 0;
      DAT_00a52cb0 = 0;
      DAT_00a52bc0 = 0;
      g_CutscenePlaying = 1;
      g_gameMode = GAME_MODE_NORMAL;
    }
  }
  else {
    if ((g_MenuScreen == 0) || (g_MenuScreen == 0x2d)) {
      FrontEnd_InitMenu();
    }
    iVar1 = g_nextMenuPage;
    if ((memcard::g_CardStateFlags & 1) == 0) {
      if (g_MenuScreen == 1) {
        iVar4 = 0;
        if (0 < DAT_00a52bc4) {
          iVar4 = DAT_00a52bc4 + -1;
        }
        DAT_00a52bc4 = iVar4;
        if (iVar4 == 0) {
          g_nextMenuPage = 0;
          g_currentMenuPage = iVar1;
          iVar4 = 0;
          g_MenuScreen = *(int *)(iVar1 + 0x3c);
          do {
            piVar2 = (int *)(g_currentMenuPage + 0x44 + iVar4 * 4);
            if ((*piVar2 != 0) && (*(int *)(*piVar2 + 8) != 0)) {
              (*(code *)**(undefined4 **)(*piVar2 + 8))(*piVar2,0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xe);
        }
      }
      else if (g_nextMenuPage != 0) {
        if (g_currentMenuPage == g_nextMenuPage) {
          sound::PlayMobySound(3,0x11,(MobyInstance *)g_menuMobys[0]);
        }
        else {
          sound::PlayMobySound(4,0x11,(MobyInstance *)g_menuMobys[0]);
        }
        iVar4 = 0;
        iVar1 = 0;
        do {
          piVar2 = (int *)(g_currentMenuPage + 0x44 + iVar1);
          if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0xc) != 0)) {
            (*(code *)**(undefined4 **)(*piVar2 + 0xc))(*piVar2,0);
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar4 < 0xe);
        uVar6 = (uint)LZCOUNT(g_nextMenuPage - *(int *)(g_currentMenuPage + 0x38)) >> 5;
        if (g_currentMenuPage == g_nextMenuPage) {
          uVar6 = (uint)LZCOUNT(uVar6) >> 5;
        }
        iVar4 = 0;
        iVar1 = 0;
        do {
          iVar5 = g_nextMenuPage;
          piVar2 = (int *)(g_nextMenuPage + 0x44 + iVar1);
          if (*piVar2 != 0) {
            *(undefined4 *)(*piVar2 + 0x14) = *(undefined4 *)((int)g_menuMobys + iVar1);
          }
          if (uVar6 == 0) {
            mobyutil::MB_SetAnimationNoBlend
                      (*(undefined4 *)((int)g_menuMobys + iVar1),*(undefined4 *)(iVar5 + iVar1),0);
            *(float *)(*(int *)((int)g_menuMobys + iVar1) + 0x58) = (float)dVar7;
          }
          else {
            mobyutil::MB_SetAnimationNoBlend
                      (*(int *)((int)g_menuMobys + iVar1),*(int *)(g_currentMenuPage + iVar1),
                       (ulonglong)
                       *(byte *)(*(int *)(*(int *)(*(int *)((int)g_menuMobys + iVar1) + 0x24) + 0x48
                                         + *(int *)(g_currentMenuPage + iVar1) * 4) + 0x10) - 1);
            *(undefined4 *)(*(int *)((int)g_menuMobys + iVar1) + 0x58) = 0xbf800000;
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar4 < 0xe);
        g_MenuScreen = 1;
        DAT_00a52bc4 = 0xc;
        DAT_00a52c80 = g_currentMenuPage;
        g_currentMenuPage = 0;
      }
      iVar1 = g_currentMenuPage;
      if (g_currentMenuPage != 0) {
        iVar5 = 0;
        iVar4 = g_currentMenuPage;
        do {
          if ((((iVar1 != -0x44) && (piVar2 = *(int **)(iVar4 + 0x44), piVar2 != (int *)0x0)) &&
              (*piVar2 != 0)) && (iVar3 = (**(code **)*piVar2)(), iVar3 != 0)) {
            g_menuClosing = 1;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < 0xe);
        if ((g_currentMenuPage != 0) && (*(int *)(g_currentMenuPage + 0x80) != 0)) {
          iVar1 = *(int *)(g_currentMenuPage + 0x40);
          if (*(int *)(iVar1 + 0xc) != 0) {
            (*(code *)**(undefined4 **)(iVar1 + 0xc))(iVar1,1);
          }
          iVar1 = g_currentMenuPage;
          *(undefined4 *)(g_currentMenuPage + 0x40) = *(undefined4 *)(g_currentMenuPage + 0x80);
          *(undefined4 *)(iVar1 + 0x80) = 0;
          iVar1 = *(int *)(iVar1 + 0x40);
          if (*(int *)(iVar1 + 8) != 0) {
            (*(code *)**(undefined4 **)(iVar1 + 8))(iVar1,1);
          }
        }
      }
      mobyfunc::UpdateMobys();
      if (g_menuClosing != 0) {
        FrontEnd_ShutdownMenu();
      }
    }
    else {
      freeze::DisplayPrompt(3,g_currentMenuPage,0);
    }
  }
  return;
}



//==== 0013de20  ns=pause  size=0x7e4
// sig: undefined FrontEnd_DrawMenu(void)
// callers(1): 00010c70 boot::FrontEnd_Draw
// callees(23): 00066088 draw::ComposeCameraMatrix; 0006889c draw::Sprite_DrawShape; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00071180 draw::SetScreenResolution; 00071ac0 draw::ResetHUDPass; 000ca72c hud::DrawFlatOverlay; 000f1844 stub::STUB_000f1844; 000f1848 stub::STUB_000f1848; 000f184c stub::STUB_000f184c; 000f1850 mobyfunc::DrawMobyDepth; 000f1934 mobyfunc::MB_AddToDrawList; 000f1974 mobyfunc::DrawMobyList; 0013c5e8 pause::DrawTVTextures; 0016a108 vendor::ProjectBoxToScreenInt; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 006534d8: 'monitor %d'

/* [p2_pause] called from boot::FrontEnd_Draw; draws monitors ('monitor %d') + widgets
   [p2_pause] called from boot::FrontEnd_Draw; draws monitors ('monitor %d') + widgets
   [p2_pause] called from boot::FrontEnd_Draw; draws monitors ('monitor %d') + widgets */

void pause::FrontEnd_DrawMenu(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  char acStack_d0 [64];
  
  iVar15 = 0;
  uVar7 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar7);
  mobyfunc::DrawMobyDepth();
  stub::STUB_000f1844();
  stub::STUB_000f1848();
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  libc::memset(0x951710,0,0x10);
  libc::memset(0x951720,0,0x10);
  libc::memset(0x951730,0,0x10);
  uVar7 = 0x3ff0000000000000;
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  draw::ComposeCameraMatrix();
  iVar14 = 0;
  iVar19 = 0;
  do {
    if (((*(int *)((int)&DAT_00729894 + iVar19) != 0) && (*(int *)((int)g_menuMobys + iVar19) != 0))
       && ((iVar14 != 6 || (DAT_00a52c88 != '\0')))) {
      mobyfunc::MB_AddToDrawList(*(undefined4 *)((int)g_menuMobys + iVar19),1);
    }
    iVar14 = iVar14 + 1;
    iVar19 = iVar19 + 4;
  } while (iVar14 < 0xe);
  iVar19 = 0;
  if (g_currentMenuPage != 0) {
    iVar19 = g_currentMenuPage + 0x44;
  }
  iVar17 = 0;
  iVar14 = 0;
  do {
    if (((*(int *)((int)g_menuMobys + iVar14) != 0) && (*(int *)((int)&DAT_00729894 + iVar14) != 0))
       && ((iVar17 != 6 || (DAT_00a52c88 != '\0')))) {
      puVar1 = *(undefined8 **)(*(int *)((int)g_menuMobys + iVar14) + 0x78);
      vendor::ProjectBoxToScreenInt
                (*puVar1,puVar1[1],puVar1[6],puVar1[7],&local_e0,&local_dc,&local_d8,&local_d4);
      iVar12 = local_d8 + 1;
      iVar11 = local_d4 + 1;
      if ((iVar19 != 0) && (iVar6 = *(int *)(iVar19 + iVar14), iVar6 != 0)) {
        *(int *)(iVar6 + 0x20) = local_e0;
        *(int *)(iVar6 + 0x24) = local_dc;
        *(int *)(iVar6 + 0x18) = iVar12;
        *(int *)(iVar6 + 0x1c) = iVar11;
      }
      *(int *)(puVar1 + 10) = iVar12;
      *(int *)((int)puVar1 + 0x54) = iVar11;
      *(int *)(puVar1 + 0xb) = local_e0;
      *(int *)((int)puVar1 + 0x5c) = local_dc;
      hud::DrawFlatOverlay
                (local_d8 + 2,local_d4 + 2,local_e0 + iVar12 + -1,local_dc + iVar11 + -1,
                 DAT_00729840,0);
      local_d8 = iVar12;
      local_d4 = iVar11;
    }
    iVar17 = iVar17 + 1;
    iVar14 = iVar14 + 4;
  } while (iVar17 < 0xe);
  iVar14 = 0;
  do {
    uVar16 = 0;
    do {
      iVar17 = (int)((uVar16 & 0xffffffff) << 2);
      if (((((((iVar19 != 0 && *(int *)((int)g_menuMobys + iVar17) != 0) &&
              (*(int *)(iVar19 + iVar17) != 0)) &&
             ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 4) == 0)) &&
            ((*(int *)((int)&DAT_00729894 + iVar17) != 0 &&
             (*(int *)(*(int *)(iVar19 + iVar17) + 4) != 0)))) &&
           (((int)uVar16 != 6 || (DAT_00a52c88 != '\0')))) &&
          ((iVar14 != 0 || ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 2) != 0)))) &&
         ((iVar14 != 1 || ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 2) == 0)))) {
        iVar11 = *(int *)(iVar19 + iVar17);
        if ((iVar11 == 0) || ((*(uint *)(iVar11 + 0x10) & 1) == 0)) {
          uVar20 = 8;
          uVar21 = 8;
          iVar11 = *(int *)(*(int *)((int)g_menuMobys + iVar17) + 0x78);
          uVar2 = *(uint *)(iVar11 + 0x58);
          uVar3 = *(undefined4 *)(iVar11 + 0x50);
          uVar4 = *(undefined4 *)(iVar11 + 0x54);
          uVar5 = *(uint *)(iVar11 + 0x5c);
          if (0x100 < (int)uVar2) {
            do {
              uVar20 = uVar20 + 1;
            } while (1 << (uVar20 & 0x3f) < (int)uVar2);
          }
          if (0x100 < (int)uVar5) {
            do {
              uVar21 = uVar21 + 1;
            } while (1 << (uVar21 & 0x3f) < (int)uVar5);
          }
          for (; 0x11 < (int)(uVar20 + uVar21); uVar21 = uVar21 - 1) {
          }
          libc::snprintf(acStack_d0,"monitor %d",uVar16);
          idol_draw::RsxCmd_DebugStr_Marker(HUD_Pass,acStack_d0);
          draw::SetScreenResolution
                    (uVar7,uVar20,uVar21,&DAT_00730000,
                     (ulonglong)(LZCOUNT(iVar14) << 0x20) >> 0x25 ^ 1,DAT_00729844);
          uVar8 = (*(code *)**(undefined4 **)(*(int *)(iVar19 + iVar17) + 4))();
          draw::ResetHUDPass();
          idol_draw::RsxCmd_WritePass(HUD_Pass);
          if ((uVar8 & 1) == 0) {
            uVar21 = 1 << (uVar21 & 0x3f);
            uVar20 = 1 << (uVar20 & 0x3f);
            uVar22 = 0;
            uVar18 = 0;
            uVar10 = uVar2;
            uVar13 = uVar5;
            if ((uVar8 & 2) == 0) {
              uVar10 = uVar20;
              uVar13 = uVar21;
              if ((uVar8 & 8) == 0) {
                if ((uVar8 & 4) == 0) {
                  if ((uVar8 & 0x10) == 0) goto LAB_0013e528;
                }
                else if ((int)uVar2 < (int)uVar5) {
                  uVar22 = (((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0)) -
                           (int)(uVar20 * uVar2) / (int)(uVar5 << 1);
                  uVar10 = uVar20 - uVar22;
                }
                else {
                  uVar18 = (((int)uVar21 >> 1) + (uint)((int)uVar21 < 0 && (uVar21 & 1) != 0)) -
                           (int)(uVar21 * uVar5) / (int)(uVar2 << 1);
                  uVar13 = uVar21 - uVar18;
                }
              }
              else {
                uVar10 = uVar20 - uVar2;
                uVar13 = uVar21 - uVar5;
                uVar22 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
                uVar18 = ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0);
                uVar10 = uVar20 - uVar22;
                uVar13 = uVar21 - uVar18;
                if ((int)uVar22 < 0) {
                  uVar22 = 0;
                }
                if ((int)uVar18 < 0) {
                  uVar18 = 0;
                }
                if ((int)uVar20 < (int)uVar10) {
                  uVar10 = uVar20;
                }
                if ((int)uVar21 < (int)uVar13) {
                  uVar13 = uVar21;
                }
              }
            }
            uVar9 = idol_draw::PackCmd(0,1,2,1,0x80);
            vuchain::SetGSReg(3,uVar9);
            uVar9 = FUN_00502f98(1,1,4,0,0,0,0,0);
            vuchain::SetGSReg(0x16,uVar9);
            uVar10 = uVar10 - uVar22;
            uVar13 = uVar13 - uVar18;
            draw::Sprite_DrawShape
                      (uVar3,uVar4,uVar2,uVar5,
                       ((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0),
                       ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0),
                       ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0),
                       ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0));
          }
        }
        else {
          (*(code *)**(undefined4 **)(iVar11 + 4))();
        }
      }
LAB_0013e528:
      iVar17 = (int)uVar16 + 1;
      uVar16 = (ulonglong)iVar17;
    } while (iVar17 < 0xe);
    if (iVar14 == 0) {
      stub::STUB_000f184c();
      mobyfunc::DrawMobyList();
    }
    iVar14 = iVar14 + 1;
    if (1 < iVar14) {
      stub::STUB_0006d704(0);
      iVar19 = 0;
      do {
        if ((*(int *)((int)&DAT_00729894 + iVar19) != 0) &&
           ((iVar15 != 6 || (DAT_00a52c88 != '\0')))) {
          DrawTVTextures(*(undefined4 *)((int)g_menuMobys + iVar19));
        }
        iVar15 = iVar15 + 1;
        iVar19 = iVar19 + 4;
      } while (iVar15 < 0xe);
      stub::STUB_0006d708();
      return;
    }
  } while( true );
}



//==== 0013e604  ns=pause  size=0x30
// sig: undefined GetMissionScreenshotPath(void)
// callers(0): 
// callees(0): 

/* [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths
   [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths
   [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths */

undefined4 pause::GetMissionScreenshotPath(longlong param_1)

{
  undefined4 uVar1;
  
  if ((uint)param_1 < 0x10) {
    uVar1 = *(undefined4 *)
             ((int)&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854 + (int)(param_1 << 2));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0013e634  ns=pause  size=0x414
// sig: undefined PrepareChallengeModeSave(void)
// callers(2): 0014c370 pause::ShowScreenAfterDrekDefeat; 0014e6c0 pause::LoadGame_Update
// callees(4): 000e7638 memcard::memcard_ResetGame; 000e7984 memcard::memcard_MakeWholeSave; 000e8888 memcard::memcard_PerformOperation; 0050027c fastfunc::FastMemCopy32
// strings: 00a0ca34: 'None' | 0071fb2c: '������������'

void pause::PrepareChallengeModeSave(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  char *addr;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = DAT_00902ec8;
  fastfunc::FastMemCopy32(DAT_00902ec8,&g_goldWeaponsArray,0x28);
  fastfunc::FastMemCopy32(iVar13 + 0x30,&UnlockableItems,0x25);
  fastfunc::FastMemCopy32(iVar13 + 0x60,&currentAmmoArray,0x94);
  fastfunc::FastMemCopy32(iVar13 + 0x100,g_CollectedGoldBolts,0x50);
  fastfunc::FastMemCopy32(iVar13 + 0x150,UINT_ARRAY_0096c1dc,0x20);
  iVar6 = iVar13 + 0x170;
  fastfunc::FastMemCopy32(iVar6,g_purchasableVendorItems,0xc);
  iVar7 = iVar13 + 0x180;
  fastfunc::FastMemCopy32(iVar7,g_SkillPoints,0x20);
  iVar8 = iVar13 + 0x1a0;
  fastfunc::FastMemCopy32(iVar8,Cheats,0xc);
  iVar9 = iVar13 + 0x1b0;
  fastfunc::FastMemCopy32(iVar9,&DAT_0096c080,0xc);
  uVar5 = g_totalBoltsCollected;
  iVar4 = g_ChallengeMode;
  bVar3 = MiscLevelFlags.UltraNanotech;
  bVar2 = MiscLevelFlags.PremiumNanotech;
  uVar1 = g_boltCount;
  memcard::memcard_ResetGame();
  fastfunc::FastMemCopy32(&g_goldWeaponsArray,iVar13,0x28);
  if (DAT_00731698 != -1) {
    iVar10 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_0073169c + iVar10);
      (&UnlockableItems.field0_0x0)[*(int *)((int)&DAT_00731698 + iVar10)] =
           *(undefined *)(iVar13 + *(int *)((int)&DAT_00731698 + iVar10) + 0x30);
      iVar10 = iVar10 + 4;
    } while (iVar12 != -1);
  }
  fastfunc::FastMemCopy32(&currentAmmoArray,iVar13 + 0x60,0x94);
  fastfunc::FastMemCopy32(g_CollectedGoldBolts,iVar13 + 0x100,0x50);
  iVar12 = 0;
  iVar10 = 0;
  do {
    iVar11 = 0;
    if ((&UnlockableItems.field0_0x0)[*(int *)(iVar13 + 0x150)] != '\0') {
      iVar11 = *(int *)(iVar13 + 0x150);
    }
    iVar12 = iVar12 + 1;
    *(int *)((int)UINT_ARRAY_0096c1dc + iVar10) = iVar11;
    iVar13 = iVar13 + 4;
    iVar10 = iVar10 + 4;
  } while (iVar12 < 8);
  fastfunc::FastMemCopy32(g_purchasableVendorItems,iVar6,0xc);
  fastfunc::FastMemCopy32(g_SkillPoints,iVar7,0x20);
  fastfunc::FastMemCopy32(Cheats,iVar8,0xc);
  fastfunc::FastMemCopy32(&DAT_0096c080,iVar9,0xc);
  addr = DAT_00a52c8c;
  DAT_0096ca08 = 0;
  if (bVar2 != false) {
    MiscLevelFlags.PremiumNanotech = true;
    g_heroMaxNanotech = 5;
  }
  if (bVar3 != false) {
    MiscLevelFlags.UltraNanotech = true;
    g_heroMaxNanotech = 8;
  }
  DAT_0071fb58 = 0;
  g_ChallengeMode = iVar4 + 1;
  DAT_0071fb59 = 0;
  g_boltCount = uVar1;
  g_totalBoltsCollected = uVar5;
  if (-1 < (int)param_1) {
    DAT_0071fa38 = (int)param_1;
    *(undefined4 *)((int)&DAT_0071fa44 + ((int)(param_1 << 5) - (int)(param_1 << 2))) = 0;
    memcard::memcard_MakeWholeSave(addr);
    DAT_0071faec = 0;
    DAT_0071fb18 = DAT_00a52c8c;
    memcard::memcard_PerformOperation(0);
  }
  return;
}



//==== 0013ea48  ns=pause  size=0x30
// sig: undefined MakeWholeSaveWithMode(void)
// callers(1): 002b1d98 mobyupdate_unsorted::UpdateMoby_1750
// callees(1): 000e7984 memcard::memcard_MakeWholeSave

/* [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave
   [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave
   [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave */

void pause::MakeWholeSaveWithMode(char *param_1)

{
  DAT_00a52c8c = param_1;
  memcard::memcard_MakeWholeSave(param_1);
  return;
}



//==== 0013ea78  ns=pause  size=0x74
// sig: undefined ClearMenuQueue(void)
// callers(0): 
// callees(1): 0011d9e0 music::music_StopLoad

/* [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c
   [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c
   [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c */

void pause::ClearMenuQueue(void)

{
  if ((Music != 0) && (DAT_00a52c7b != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  DAT_00a52e9c = 0;
  DAT_00a5306c = 0;
  return;
}



//==== 0013eaec  ns=pause  size=0xc0
// sig: undefined PopMenuQueueEntry(void)
// callers(0): 
// callees(0): 

/* [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one
   [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one
   [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one */

undefined8 pause::PopMenuQueueEntry(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 7;
  iVar5 = 0x38;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = *(undefined4 *)((int)&DAT_00a52eac + iVar5);
    *(undefined4 *)((int)&DAT_00a52e68 + iVar5) = *(undefined4 *)((int)&DAT_00a52ea0 + iVar5);
    *(undefined4 *)((int)&DAT_00a52e6c + iVar5) = *(undefined4 *)((int)&DAT_00a52ea4 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e70) = *(undefined4 *)((int)&DAT_00a52ea8 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e74) = uVar1;
    uVar1 = *(undefined4 *)((int)&DAT_00a52eb4 + iVar5);
    uVar2 = *(undefined4 *)((int)&DAT_00a52eb8 + iVar5);
    uVar3 = *(undefined4 *)((int)&DAT_00a52ebc + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e78) = *(undefined4 *)((int)&DAT_00a52eb0 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e7c) = uVar1;
    *(undefined4 *)(iVar5 + 0xa52e80) = uVar2;
    *(undefined4 *)((int)&DAT_00a52e84 + iVar5) = uVar3;
    uVar1 = *(undefined4 *)((int)&DAT_00a52ec4 + iVar5);
    uVar2 = *(undefined4 *)((int)&DAT_00a52ec8 + iVar5);
    uVar3 = *(undefined4 *)((int)&DAT_00a52ecc + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e88) = *(undefined4 *)((int)&DAT_00a52ec0 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e8c) = uVar1;
    *(undefined4 *)(iVar5 + 0xa52e90) = uVar2;
    *(undefined4 *)(iVar5 + 0xa52e94) = uVar3;
    uVar1 = *(undefined4 *)((int)&DAT_00a52ed4 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e98) = *(undefined4 *)((int)&DAT_00a52ed0 + iVar5);
    *(undefined4 *)((int)&DAT_00a52e9c + iVar5) = uVar1;
    iVar5 = iVar5 + 0x38;
  } while (iVar4 != 0);
  DAT_00a52e9c = DAT_00a52e9c + -1;
  return 0;
}



//==== 0013ebb0  ns=pause  size=0xd74
// sig: undefined LoadMenuRatchetModel(void)
// callers(1): 0014f828 pause::MenuHero_Update
// callees(10): 000dcb64 loaders::ParseMobySeq; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000fdf80 mobyutil::MB_SetAnimationFrame; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 006536cc: 'rc1/ps3data/global/ratchet_seq%d.ps3'

/* [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update
   [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update
   [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update */

undefined8
pause::LoadMenuRatchetModel
          (MobyInstance *param_1,undefined8 param_2,MobyInstance *param_3,int *param_4,int *param_5,
          int *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  longlong lVar10;
  int iVar12;
  int iVar13;
  MobyInstance *pMVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  char acStack_180 [256];
  
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (DAT_00a52e9c != 0) {
    if ((param_1->field43_0x70 & 2U) != 0) {
      bVar5 = true;
      if ((DAT_00a5306c == 0) || (DAT_00a5306c = DAT_00a5306c + -1, DAT_00a5306c == 0)) {
        bVar6 = true;
      }
    }
    uVar11 = (uint)DAT_00a52c7b;
    if ((DAT_00a52c7b != 0) && (Music == 0)) {
      iVar12 = uVar11 - 1;
      iVar15 = 0;
      DAT_00a52c6c = 0;
      do {
        if ((&DAT_00a53098)[iVar15 * 2] == (&DAT_00a52c50)[iVar12]) {
          (&DAT_00a5309c)[iVar15 * 2] = (&DAT_00a5309c)[iVar15 * 2] & 0xfffffffb;
          break;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 5);
      uVar9 = DAT_00a52ea4;
      uVar8 = DAT_00a52cf8;
      (&DAT_00a52c77)[uVar11] = (char)DAT_00a52cf8;
      if (uVar9 == uVar8) {
        DAT_00a52ea0 = 2;
      }
      *(undefined4 *)(&MobyClasses[0]->type + uVar8 * 4) = (&DAT_00a52c50)[iVar12];
      loaders::ParseMobySeq(MobyClasses[0],DAT_00a52cf8);
      DAT_00a52c7b = 0;
    }
    if ((((DAT_00a52c7b == 0) && (Music == 0)) && (0 < DAT_00a52e9c)) && (DAT_00a52ea0 == 0)) {
      if (((&DAT_00a52c78)[DAT_00a52c7a] == DAT_00a52ea4) ||
         ((&DAT_00a52c78)[(uint)LZCOUNT((uint)DAT_00a52c7a) >> 5] == DAT_00a52ea4)) {
        DAT_00a52ea0 = 2;
      }
      else if (DAT_00a52ea4 < DAT_00a52c7c) {
        DAT_00a52ea0 = 3;
      }
      else {
        iVar12 = (&DAT_00a52c50)[DAT_00a52c7a];
        DAT_00a52c6c = iVar12;
        libc::snprintf(acStack_180,"rc1/ps3data/global/ratchet_seq%d.ps3",
                       DAT_00a52ea4 - DAT_00a52c7c);
        fios::LoadAssetFromFile(acStack_180,iVar12,0x4f000);
        iVar15 = 0;
        do {
          if ((&DAT_00a53098)[iVar15 * 2] == iVar12) {
            (&DAT_00a5309c)[iVar15 * 2] = (&DAT_00a5309c)[iVar15 * 2] | 4;
            break;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 5);
        DAT_00a52ea0 = 1;
        DAT_00a52c7b = DAT_00a52c7a + 1;
        DAT_00a52cf8 = DAT_00a52ea4;
        (&DAT_00a52c78)[DAT_00a52c7a] = 0xff;
      }
    }
    if ((0 < DAT_00a52e9c) && ((DAT_00a52ea0 == 2 || (DAT_00a52ea0 == 3)))) {
      if ((DAT_00a52eb0 == 0) ||
         (((DAT_00a52be0 == DAT_00a52eb0 || (DAT_00a52be8 == DAT_00a52eb0)) ||
          (DAT_00a52be4 == DAT_00a52eb0)))) {
        if (DAT_00a52ea8 == 0) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 1 && bVar5) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 2 && bVar6) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 3) {
          bVar7 = false;
          iVar15 = 7;
          puVar4 = &DAT_00a52ea0;
          iVar12 = 0x38;
          do {
            uVar1 = puVar4[0xf];
            iVar15 = iVar15 + -1;
            uVar2 = puVar4[0x10];
            uVar3 = puVar4[0x11];
            *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
            *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
            *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
            uVar1 = puVar4[0x13];
            uVar2 = puVar4[0x14];
            uVar3 = puVar4[0x15];
            *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
            *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
            *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
            uVar1 = puVar4[0x17];
            uVar2 = puVar4[0x18];
            uVar3 = puVar4[0x19];
            *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
            *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
            *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
            uVar1 = puVar4[0x1b];
            *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
            *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
            puVar4 = puVar4 + 0xe;
            iVar12 = iVar12 + 0x38;
          } while (iVar15 != 0);
          DAT_00a52e9c = DAT_00a52e9c + -1;
        }
      }
      else {
        bVar7 = false;
        iVar15 = 7;
        puVar4 = &DAT_00a52ea0;
        iVar12 = 0x38;
        do {
          uVar1 = puVar4[0xf];
          iVar15 = iVar15 + -1;
          uVar2 = puVar4[0x10];
          uVar3 = puVar4[0x11];
          *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
          *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
          *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
          uVar1 = puVar4[0x13];
          uVar2 = puVar4[0x14];
          uVar3 = puVar4[0x15];
          *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
          *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
          *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
          uVar1 = puVar4[0x17];
          uVar2 = puVar4[0x18];
          uVar3 = puVar4[0x19];
          *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
          *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
          *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
          uVar1 = puVar4[0x1b];
          *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
          *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
          puVar4 = puVar4 + 0xe;
          iVar12 = iVar12 + 0x38;
        } while (iVar15 != 0);
        DAT_00a52e9c = DAT_00a52e9c + -1;
      }
    }
    if (bVar7) {
      DAT_00a53060 = DAT_00a52ea0;
      DAT_00a53064 = DAT_00a52ea4;
      DAT_00a53068 = DAT_00a52ea8;
      DAT_00a5306c = DAT_00a52eac;
      DAT_00a53070 = DAT_00a52eb0;
      DAT_00a53074 = DAT_00a52eb4;
      DAT_00a53078 = DAT_00a52eb8;
      DAT_00a5307c = DAT_00a52ebc;
      DAT_00a53080 = DAT_00a52ec0;
      DAT_00a53084 = DAT_00a52ec4;
      DAT_00a53088 = DAT_00a52ec8;
      iVar15 = 7;
      DAT_00a5308c = DAT_00a52ecc;
      DAT_00a53090 = DAT_00a52ed0;
      DAT_00a53094 = DAT_00a52ed4;
      puVar4 = &DAT_00a52ea0;
      iVar12 = 0x38;
      do {
        uVar1 = puVar4[0xf];
        iVar15 = iVar15 + -1;
        uVar2 = puVar4[0x10];
        uVar3 = puVar4[0x11];
        *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
        *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
        *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
        uVar1 = puVar4[0x13];
        uVar2 = puVar4[0x14];
        uVar3 = puVar4[0x15];
        *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
        *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
        *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
        uVar1 = puVar4[0x17];
        uVar2 = puVar4[0x18];
        uVar3 = puVar4[0x19];
        *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
        *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
        *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
        uVar1 = puVar4[0x1b];
        *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
        *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
        puVar4 = puVar4 + 0xe;
        iVar12 = iVar12 + 0x38;
      } while (iVar15 != 0);
      DAT_00a52e9c = DAT_00a52e9c + -1;
      if ((int)DAT_00a52c58 < (int)(DAT_00a52c58 + DAT_00a52c5c)) {
        lVar10 = ((ulonglong)DAT_00a52c58 & 0x1fffffff) << 3;
        uVar11 = DAT_00a52c58;
        do {
          iVar12 = (int)lVar10;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar12)]]->type +
           *(int *)(&DAT_007314d4 + iVar12) * 4) = 0;
        } while ((int)uVar11 < (int)(DAT_00a52c58 + DAT_00a52c5c));
      }
      iVar12 = DAT_00a53094;
      iVar15 = 0;
      DAT_00a52c5c = DAT_00a53094;
      DAT_00a52c58 = DAT_00a53090;
      if (0 < DAT_00a53094) {
        lVar10 = ((ulonglong)DAT_00a53090 & 0x1fffffff) << 3;
        lVar16 = ((ulonglong)DAT_00a53090 & 0x3fffffff) << 2;
        do {
          iVar13 = (int)lVar10;
          iVar17 = (int)lVar16;
          iVar15 = iVar15 + 1;
          lVar16 = lVar16 + 4;
          lVar10 = lVar10 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar13)]]->type +
           *(int *)(&DAT_007314d4 + iVar13) * 4) = *(undefined4 *)(&DAT_00a52d04 + iVar17);
        } while (iVar15 < iVar12);
      }
      mobyutil::MB_SetAnimationFrame(param_1,DAT_00a53064,0,10,5);
      if (DAT_00a53064 == DAT_00a52c78) {
        DAT_00a52c7a = 1;
      }
      else if (DAT_00a53064 == DAT_00a52c79) {
        DAT_00a52c7a = 0;
      }
      pMVar14 = (MobyInstance *)param_2;
      if ((&DAT_00721008)[DAT_00a53070 * 0x13] == 2) {
        if (param_3 != (MobyInstance *)0x0) {
          mobyutil::MB_SetAnimationFrame(param_3,DAT_00a53074,0,10,5);
        }
        if (pMVar14 != (MobyInstance *)0x0) {
          mobyutil::MB_SetAnimationNoBlend(param_2,1,0);
        }
      }
      else if (pMVar14 != (MobyInstance *)0x0) {
        mobyutil::MB_SetAnimationFrame(pMVar14,DAT_00a53074,0,10,5);
      }
      pMVar14 = (MobyInstance *)*param_4;
      if (pMVar14 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_4 = (int)pMVar14;
      pMVar14 = (MobyInstance *)*param_5;
      if (pMVar14 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_5 = (int)pMVar14;
      pMVar14 = (MobyInstance *)*param_6;
      if (pMVar14 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_6 = (int)pMVar14;
      if (DAT_00a53078 != -1) {
        if ((&MobyClassLookup)[DAT_00a53078] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_00a53078);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            mobyfunc::UpdateMobyTransform(pMVar14);
            mobyutil::MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_4 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          if (DAT_00a53078 != 0x27a) {
            mobyutil::MB_SetAnimationNoBlend(pMVar14,DAT_00a5307c,0);
            mobyutil::MB_SetAnimation(*param_4,DAT_00a5307c,0,10);
          }
          *(undefined2 *)(*param_4 + 0x34) = 0;
          iVar12 = *param_4;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_4;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_4;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          mobyfunc::UpdateMobyTransform((MobyInstance *)*param_4);
          *(undefined ***)(*param_4 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
      if (DAT_00a53080 != -1) {
        if ((&MobyClassLookup)[DAT_00a53080] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_00a53080);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            mobyfunc::UpdateMobyTransform(pMVar14);
            mobyutil::MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_5 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          mobyutil::MB_SetAnimationNoBlend(pMVar14,DAT_00a53084,0);
          mobyutil::MB_SetAnimation(*param_5,DAT_00a53084,0,10);
          *(undefined2 *)(*param_5 + 0x34) = 0;
          iVar12 = *param_5;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_5;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_5;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          mobyfunc::UpdateMobyTransform((MobyInstance *)*param_5);
          *(undefined ***)(*param_5 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
      if (DAT_00a53088 != -1) {
        if ((&MobyClassLookup)[DAT_00a53088] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_00a53088);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            mobyfunc::UpdateMobyTransform(pMVar14);
            mobyutil::MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_6 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          mobyutil::MB_SetAnimationNoBlend(pMVar14,DAT_00a5308c,0);
          mobyutil::MB_SetAnimation(*param_6,DAT_00a5308c,0,10);
          *(undefined2 *)(*param_6 + 0x34) = 0;
          iVar12 = *param_6;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_6;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_6;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          mobyfunc::UpdateMobyTransform((MobyInstance *)*param_6);
          *(undefined ***)(*param_6 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
    }
  }
  return 0;
}



//==== 0013f924  ns=pause  size=0xf0
// sig: undefined PushMenuQueueEntry(void)
// callers(0): 
// callees(0): 

/* [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0
   [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0
   [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0 */

undefined8
pause::PushMenuQueueEntry
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  
  iVar3 = DAT_00a52e9c;
  if (DAT_00a52e9c < 8) {
    iVar1 = DAT_00a52e9c * 0xe;
    iVar2 = DAT_00a52e9c * 0xe;
    DAT_00a52e9c = DAT_00a52e9c + 1;
    (&DAT_00a52ea4)[iVar2] = param_1;
    (&DAT_00a52ea0)[iVar1] = 0;
    (&DAT_00a52ea8)[iVar3 * 0xe] = param_2;
    uVar4 = 0;
    (&DAT_00a52eac)[iVar3 * 0xe] = param_3;
    (&DAT_00a52eb0)[iVar3 * 0xe] = param_4;
    (&DAT_00a52eb4)[iVar3 * 0xe] = param_5;
    (&DAT_00a52eb8)[iVar3 * 0xe] = param_6;
    (&DAT_00a52ebc)[iVar3 * 0xe] = param_7;
    (&DAT_00a52ec0)[iVar3 * 0xe] = param_8;
    (&DAT_00a52ec4)[iVar3 * 0xe] = in_stack_00000074;
    (&DAT_00a52ec8)[iVar3 * 0xe] = in_stack_0000007c;
    (&DAT_00a52ecc)[iVar3 * 0xe] = in_stack_00000084;
    (&DAT_00a52ed0)[iVar3 * 0xe] = in_stack_0000008c;
    (&DAT_00a52ed4)[iVar3 * 0xe] = in_stack_00000094;
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}



//==== 0013fa14  ns=stub  size=0x4
// sig: undefined STUB_0013fa14(void)
// callers(0): 
// callees(0): 

void stub::STUB_0013fa14(void)

{
  return;
}



//==== 0013fa18  ns=pause  size=0x74
// sig: undefined SetFrameCount(void)
// callers(2): 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(0): 

void pause::SetFrameCount(void)

{
  int iVar1;
  
  iVar1 = g_FrameCount;
  if (DAT_00a15f3a == '\0') {
    iVar1 = g_FrameCount + 1;
    if ((iVar1 == (iVar1 / 0x32) * 0x32) && (g_IsPal != 0)) {
      iVar1 = g_FrameCount + 0xb;
    }
  }
  g_FrameCount = iVar1;
  return;
}



//==== 0013fa8c  ns=pause  size=0x9c
// sig: undefined MenuText_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling
   [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling
   [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling */

undefined8 pause::MenuText_Update(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((pad_pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0013fb28  ns=pause  size=0x1e0
// sig: undefined IconList_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* [p2_pause] widget update paired with IconList_Draw
   [p2_pause] widget update paired with IconList_Draw
   [p2_pause] widget update paired with IconList_Draw */

undefined8 pause::IconList_Update(int param_1)

{
  ulonglong uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar2;
  
  uVar4 = pad_pressedButton;
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  if (((pad_pressedButton & 0x1000) != 0) && (iVar5 != 0)) {
    *(int *)(param_1 + 0x3c) = iVar5 + -1;
  }
  if (((uVar4 & 0x4000) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x3c) + 1, iVar3 < *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x3c) = iVar3;
  }
  if (*(int *)(param_1 + 0x3c) != iVar5) {
    sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x24) / 0x25 < *(int *)(param_1 + 0x40)) {
    uVar4 = *(int *)(param_1 + 0x24) - 0x28;
    if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x60)) {
      iVar3 = *(int *)(param_1 + 0x3c) + -1;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      *(int *)(param_1 + 0x60) = iVar5;
    }
    uVar1 = ((ulonglong)*(uint *)(param_1 + 0x3c) -
            ((longlong)((int)uVar4 / 0x25 + ((int)uVar4 >> 0x1f)) + (ulonglong)(uVar4 >> 0x1f))) + 2
    ;
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x60);
    if ((int)*(uint *)(param_1 + 0x60) < (int)uVar1) {
      uVar2 = uVar1;
    }
    *(int *)(param_1 + 0x60) = (int)uVar2;
    *(int *)(param_1 + 0x5c) = 0x17 - ((int)uVar2 + (int)(uVar2 << 5) + (int)(uVar2 << 2));
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 5;
  }
  return 0;
}



//==== 0013fd08  ns=pause  size=0x2c0
// sig: undefined IconList_Draw(void)
// callers(0): 
// callees(8): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cbb98 hud::Hud_DrawTexQuad; 000cc0f0 hud::DrawSprite; 005c4988 FUN_005c4988

/* [p2_pause] draws icon frames with hud::DrawSprite
   [p2_pause] draws icon frames with hud::DrawSprite
   [p2_pause] draws icon frames with hud::DrawSprite */

undefined8 pause::IconList_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x20) + -0x20;
  iVar2 = iVar8 >> 1;
  stub::STUB_0006d704(0);
  iVar9 = iVar1;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar7 = 0;
    do {
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0x48) + iVar7);
      if (*(int *)(param_1 + 0x3c) == iVar6) {
        iVar4 = FUN_005c4988(((ulonglong)DAT_0159c330 & 0x3f) - 0x20);
        hud::DrawFlatOverlay
                  (iVar2 + -3,iVar9 + -3,iVar2 + 0x23,iVar9 + 0x23,
                   (iVar4 + 0x40) * 0x10202 | 0x80000000,1);
        hud::DrawFlatOverlay(iVar2 + -1,iVar9 + -1,iVar2 + 0x21,iVar9 + 0x21,DAT_00729840,1);
      }
      uVar3 = hud::GetIconFrameTex(*puVar5,puVar5[1]);
      hud::Hud_DrawTexQuad_v2(uVar3,iVar2,iVar9,0x20,0x20,0x80);
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x25;
      iVar7 = iVar7 + 10;
    } while (iVar6 < *(int *)(param_1 + 0x40));
  }
  if (iVar1 < 0) {
    hud::DrawFlatOverlay(0,0,*(undefined4 *)(param_1 + 0x20),0x14,DAT_00729840,0);
    uVar3 = hud::GetIconFrameTex(0xe99e,6);
    hud::DrawSprite(uVar3,iVar2,2,0x20,0x10,0x80);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 << 4 < iVar9) {
    hud::DrawFlatOverlay(0,iVar1 + -0x14,*(undefined4 *)(param_1 + 0x20),iVar1,DAT_00729840,0);
    uVar3 = hud::GetIconFrameTex(0xe99e,6);
    hud::Hud_DrawTexQuad(uVar3,iVar8 >> 5,*(int *)(param_1 + 0x24) + -0x12,2,0x10,0x80);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0013ffc8  ns=pause  size=0x34
// sig: undefined SelectItemList_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] OnEnter: picks string list by DAT_00966af0
   [p2_pause] OnEnter: picks string list by DAT_00966af0
   [p2_pause] OnEnter: picks string list by DAT_00966af0 */

undefined8 pause::SelectItemList_OnEnter(int param_1)

{
  undefined *puVar1;
  
  if (DAT_00966af0 == 0) {
    puVar1 = &DAT_007302ac;
  }
  else {
    puVar1 = &DAT_0073027c;
  }
  *(undefined **)(param_1 + 0x34) = puVar1;
  return 0;
}



//==== 0013fffc  ns=pause  size=0x148
// sig: undefined BuildCheatsList(void)
// callers(0): 
// callees(0): 

/* [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388
   [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388
   [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388 */

undefined8 pause::BuildCheatsList(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_50 [7];
  int local_34 [11];
  
  lVar4 = 0;
  for (uVar3 = 0; (int)uVar3 < 0xc; uVar3 = uVar3 + 1) {
    iVar2 = (int)((uVar3 & 0xffffffff) << 2);
    if (*(int *)((int)local_34 + iVar2) == -1) break;
    if ((&DAT_0096c080)[*(int *)((int)local_34 + iVar2)] != '\0') {
      iVar5 = (int)(lVar4 << 4) + (int)(lVar4 << 2);
      iVar1 = *(int *)((int)local_34 + iVar2);
      *(undefined4 *)((int)&DAT_00a53388 + iVar5) = *(undefined4 *)((int)local_50 + iVar2);
      lVar4 = lVar4 + 1;
      *(undefined4 *)((int)&DAT_00a53390 + iVar5) = 0x4f5a;
      *(char **)((int)&DAT_00a5338c + iVar5) = Cheats + iVar1;
      *(undefined4 *)((int)&DAT_00a53394 + iVar5) = 0x4f5b;
      *(undefined4 *)((int)&DAT_00a53398 + iVar5) = 0;
    }
  }
  *(undefined4 *)((int)&DAT_00a53388 + (int)(lVar4 << 4) + (int)(lVar4 << 2)) = 0;
  return 0;
}



