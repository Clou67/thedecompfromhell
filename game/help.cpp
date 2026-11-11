// game/help.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 17 functions, 0x7b0f4-0x7cf0c
#include "game/help.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "idol/fastfunc.h"
#include "sdk/fios.h"

// 0x007b0f4 (0x3c bytes)
void SECTION_HEADER_HELP(void)

{
  DAT_00720860 = 0x10000;
  FUN_005084b8(&TEX_BASE);
  return;
}


// 0x007b130 (0xa8 bytes)
void Help_Skip(void)

{
  if (g_HelpState < 4) {
    if (g_HelpState < 1) {
      if (-1 < g_HelpState) {
        g_HelpCurId = -1;
      }
    }
    else if (g_HelpState < 3) {
      g_HelpStateTimer = 0;
      g_HelpState = 7;
    }
    else {
      g_HelpStateTimer = 0;
      g_HelpState = 7;
    }
  }
  else if (g_HelpState < 6) {
    if (g_HelpState < 5) {
      g_HelpStateTimer = 4 - g_HelpStateTimer;
      g_HelpState = 6;
    }
    else {
      g_HelpStateTimer = 0;
      g_HelpState = 6;
    }
  }
  return;
}


// 0x007b1d8 (0x74 bytes)
int Help_FindPairIndex(short id,int column,short *pOther)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)((int)&g_HelpIdPairs + iVar1 * 4 + (int)((longlong)column << 1)) == id) {
      if (pOther == (short *)0x0) {
        return iVar1;
      }
      *pOther = *(short *)((int)&g_HelpIdPairs + iVar1 * 4 + ((uint)LZCOUNT(column) >> 4 & 2));
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x96);
  return -1;
}


// 0x007b24c (0xc4 bytes)
void Help_AddToLog(short id)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = 0;
  psVar3 = &g_HelpIdPairs;
  do {
    if (*psVar3 == id) {
      if (uVar2 == 0xffffffff) {
        return;
      }
      for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
          iVar4 = iVar4 + 1) {
      }
      if (iVar4 < g_HelpLogCount) {
        g_HelpLogCount = g_HelpLogCount + -1;
        for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
          (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
        }
        (&g_HelpLog)[iVar4] = 0;
      }
      puVar1 = &g_HelpLog + g_HelpLogCount;
      g_HelpLogCount = g_HelpLogCount + 1;
      *puVar1 = (char)uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
    psVar3 = psVar3 + 2;
  } while ((int)uVar2 < 0x96);
  return;
}


// 0x007b310 (0x148 bytes)
// strings: 00a1000c: 'None'

int Help_QueueMessage(StringId id,int flag)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  if ((((g_HelpState == 0) && (g_HelpCurId == -1)) && (g_SpeechPlaying.handle == 0)) &&
     ((g_PendingSpeech == -1 &&
      (*(short *)(CHAR_ARRAY_00a1000c + (int)((longlong)flag << 3)) != -1)))) {
    uVar2 = 0;
    psVar3 = &g_HelpIdPairs;
    do {
      g_HelpCurId = id;
      g_HelpCurFlag = flag;
      if (*psVar3 == (short)id) {
        if (uVar2 != 0xffffffff) {
          for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
              iVar4 = iVar4 + 1) {
          }
          if (iVar4 < g_HelpLogCount) {
            g_HelpLogCount = g_HelpLogCount + -1;
            for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
              (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
            }
            (&g_HelpLog)[iVar4] = 0;
          }
          puVar1 = &g_HelpLog + g_HelpLogCount;
          g_HelpLogCount = g_HelpLogCount + 1;
          *puVar1 = (char)uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
    } while ((int)uVar2 < 0x96);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


// 0x007b458 (0x98 bytes)
void Help_Kill(void)

{
  int iVar1;
  
  if (g_HelpState != 0) {
    iVar1 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
    if (((iVar1 != -1) && (iVar1 == g_SpeechPlaying.track + -30000)) &&
       (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6)) {
      g_SpeechPlaying.status = 5;
    }
    g_HelpState = 0;
    g_HelpCurId = -1;
    g_HelpCurIndex = -1;
    g_HelpStateTimer = 0;
  }
  return;
}


// 0x007b4f0 (0x1c0 bytes)
// strings: 00a1000c: 'None'


int Help_QueueMessageForce(StringId id,int flag)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  if (g_HelpState != 0) {
    iVar4 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
    if (((iVar4 != -1) && (iVar4 == g_SpeechPlaying.track + -30000)) &&
       (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6)) {
      g_SpeechPlaying.status = 5;
    }
    g_HelpState = 0;
    g_HelpCurId = -1;
    g_HelpCurIndex = -1;
    g_HelpStateTimer = 0;
  }
  if (((g_HelpCurId == -1) && (g_SpeechPlaying.handle == 0)) &&
     ((g_PendingSpeech == -1 &&
      (*(short *)(CHAR_ARRAY_00a1000c + (int)((longlong)flag << 3)) != -1)))) {
    uVar2 = 0;
    psVar3 = &g_HelpIdPairs;
    do {
      g_HelpCurId = id;
      g_HelpCurFlag = flag;
      if (*psVar3 == (short)id) {
        if (uVar2 != 0xffffffff) {
          for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
              iVar4 = iVar4 + 1) {
          }
          if (iVar4 < g_HelpLogCount) {
            g_HelpLogCount = g_HelpLogCount + -1;
            for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
              (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
            }
            (&g_HelpLog)[iVar4] = 0;
          }
          puVar1 = &g_HelpLog + g_HelpLogCount;
          g_HelpLogCount = g_HelpLogCount + 1;
          *puVar1 = (char)uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
    } while ((int)uVar2 < 0x96);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


// 0x007b6b0 (0x34 bytes)
// strings: 00a1000c: 'None'


void Help_ClearUsedSinceDeath(void)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = (uint *)(CHAR_ARRAY_00a1000c + 4);
  lVar2 = 0x4a;
  do {
    *puVar1 = *puVar1 & 0x7fffffff;
    puVar1[2] = puVar1[2] & 0x7fffffff;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x007b6e4 (0x5c bytes)
int Help_FindIndex(int id)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < Help) {
    do {
      if (*(int *)(HelpMsgs + iVar1 * 0x10 + 4) == id) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < Help);
  }
  return -1;
}


// 0x007b740 (0x94 bytes)
// strings: 00720b94: 'MESSAGE DOES NOT EXIST'

char * help_msg_string_by_index(StringId helpmsg)

{
  ulonglong uVar1;
  int iVar2;
  
  if (g_Language == 3 && helpmsg == STR_JUMP_THEN_PRESS_AND_0x1773) {
    helpmsg = STR_TRY_USING_THE_GLIDE_0x0BB8;
  }
  uVar1 = 0;
  if (0 < Help) {
    iVar2 = 0;
    do {
      if (*(StringId *)(HelpMsgs + iVar2 + 4) == helpmsg) {
        if (-1 < (int)uVar1) {
          return *(char **)(HelpMsgs + (int)((uVar1 & 0xffffffff) << 4));
        }
        break;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)uVar1 < Help);
  }
  return s_MESSAGE_DOES_NOT_EXIST_00720b94;
}


// 0x007b7d8 (0x90 bytes)
void Help_Suspend(void)

{
  undefined8 in_LR;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  
  if (g_HelpSuspended.piece<0,2>() == 0) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    g_HelpSuspended.piece<0,2>() = 1;
    auVar1 = loadVectorLeftIndexed(in_LR,0x7b7d4);
    auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
    auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_007208c0 = storeVectorElementWordIndexed
                             (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x3c,
                              0x720884);
    Help_Skip();
    if (g_HelpState == 0) {
      g_HelpState = 8;
    }
  }
  return;
}


// 0x007b868 (0x14 bytes)
void Help_Resume(void)

{
  g_HelpSuspended.piece<0,2>() = 0;
  return;
}


// 0x007b880 (0x168 bytes)
void Help_StartMessageBox(void)

{
  undefined4 uVar1;
  int in_stack_ffffff58;
  short local_24;
  short local_22;
  
  g_HelpState = 1;
  g_HelpStateTimer = 0;
  if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
    sound_CorePlay(0,1,(MobyInstance *)0x0);
  }
  uVar1 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
  SetFontWindow((FontWindow *)&stack0xffffffd0,0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,0x10,
                      in_stack_ffffff58);
  FontPrintOpt(0x3ff0000000000000,(FontWindow *)&stack0xffffffd0,0x80ffa888,uVar1,
                     0xffffffffffffffff);
  DAT_00720894 = 0x100;
  DAT_0072088c = ((int)local_24 >> 1) + 10;
  DAT_00720890 = ((int)local_22 >> 1) + 5;
  DAT_0072089c = 8;
  DAT_007208a0 = 8;
  DAT_00720898 = g_ScreenHeight + -0x3c;
  if (g_ScreenHeight + -0xc < g_ScreenHeight + ((int)local_22 >> 1) + -0x37) {
    DAT_00720898 = (g_ScreenHeight - DAT_00720890) + -0xc;
  }
  return;
}


// 0x007ba00 (0xe38 bytes)
// strings: 00a1000c: 'None'


void Help_Update(void)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  float fVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  int in_stack_ffffff28;
  GPiece<36> auStack_60;
  short local_3c;
  short local_3a;
  
  if (DAT_007208b4 == 0) {
    if ((DAT_007208b8 == 0) && ((g_Pad.downButtons & (LEFT|DOWN|RIGHT|UP)) != 0)) {
      DAT_007208b8 = 1;
    }
    else if (DAT_007208b8 == 0) goto LAB_0007ba9c;
    DAT_007208b8 = DAT_007208b8 + 1;
    if ((int)(animationSpeed * 120.5) <= DAT_007208b8) {
      DAT_007208b4 = 1;
    }
  }
LAB_0007ba9c:
  if ((g_gameMode == GAME_MODE_NORMAL) && (DAT_007208b4 != 0)) {
    g_HelpStateTimer = g_HelpStateTimer + 1;
    if (g_HelpState < 4) {
      if (g_HelpState < 1) {
        if ((-1 < g_HelpState) && (-1 < g_HelpCurId)) {
          uVar5 = 0xffffffffffffffff;
          if (0 < Help) {
            iVar6 = 0;
            uVar7 = 0;
            do {
              uVar5 = uVar7;
              if (*(int *)(HelpMsgs + iVar6 + 4) == g_HelpCurId) break;
              uVar7 = uVar5 + 1;
              iVar6 = iVar6 + 0x10;
              uVar5 = 0xffffffffffffffff;
            } while ((int)uVar7 < Help);
          }
          g_HelpCurIndex = (int)uVar5;
          g_HelpCurId = -1;
          if (-1 < g_HelpCurIndex) {
            g_HelpState = 1;
            g_HelpStateTimer = 0;
            if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
              sound_CorePlay(0,1,(MobyInstance *)0x0);
              uVar5 = (ulonglong)(uint)g_HelpCurIndex;
            }
            uVar2 = *(undefined4 *)(HelpMsgs + (int)((uVar5 & 0xffffffff) << 4));
            SetFontWindow((FontWindow *)auStack_60,0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,0x10,
                                in_stack_ffffff28);
            FontPrintOpt(0x3ff0000000000000,(FontWindow *)auStack_60,0x80ffa888,uVar2,
                               0xffffffffffffffff);
            DAT_00720890 = ((int)(short)auStack_60.piece<14,2>() >> 1) + 5;
            DAT_0072088c = ((int)(short)auStack_60.piece<12,2>() >> 1) + 10;
            DAT_00720898 = g_ScreenHeight + -0x3c;
            DAT_00720894 = 0x100;
            DAT_0072089c = 8;
            DAT_007208a0 = 8;
            if (g_ScreenHeight + -0xc <
                g_ScreenHeight + ((int)(short)auStack_60.piece<14,2>() >> 1) + -0x37) {
              DAT_00720898 = (g_ScreenHeight - DAT_00720890) + -0xc;
            }
          }
        }
      }
      else if (g_HelpState < 2) {
        MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
        if (((-1 < iVar6) && (g_SpeechPlaying.handle == 0)) && (g_PendingSpeech == -1)
           ) {
          g_PendingSpeech = iVar6 + 30000;
        }
        if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (5 < g_HelpStateTimer) {
            g_HelpState = 2;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 8 - g_HelpStateTimer;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (g_HelpState < 3) {
        MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (((int)(animationSpeed * 60.5) <= g_HelpStateTimer) ||
             (((int)(animationSpeed * 24.5) <= g_HelpStateTimer &&
              ((g_SpeechPlaying.status == 3 ||
               (*(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8) == -1)))))) {
            g_HelpState = 3;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 0;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else {
        MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (7 < g_HelpStateTimer) {
            g_HelpState = 4;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 0;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
    }
    else if (g_HelpState < 7) {
      if (g_HelpState < 5) {
        MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (3 < g_HelpStateTimer) {
            iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
            if (((iVar6 != -1) && (iVar6 == g_SpeechPlaying.track + -30000)) &&
               (g_SpeechPlaying.status == 3)) {
              music_PlayPreseekedSpeech();
            }
            g_HelpState = 5;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 4 - g_HelpStateTimer;
          g_HelpState = 6;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (g_HelpState < 6) {
        MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        fVar4 = animationSpeed;
        if ((((int)(animationSpeed * 420.5) <= g_HelpStateTimer) &&
            (((iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8), iVar6 == -1 ||
              (iVar6 != g_SpeechPlaying.track + -30000)) ||
             ((g_SpeechPlaying.handle == 0 && (g_PendingSpeech == -1)))))) ||
           ((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(fVar4 * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpState = 6;
          g_HelpStateTimer = 0;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (((DAT_0071fb59 == '\0') || (3 < g_HelpStateTimer)) ||
              ((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) {
        g_HelpState = 7;
        g_HelpStateTimer = 0;
      }
    }
    else if (g_HelpState < 8) {
      MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
      iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
      if (((iVar6 != -1) && (iVar6 == g_SpeechPlaying.track + -30000)) &&
         (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6)) {
        g_SpeechPlaying.status = 5;
      }
      if (7 < g_HelpStateTimer) {
        g_HelpState = 8;
        if (g_HelpSuspended.piece<0,2>() == 0) {
          g_HelpState = 0;
          g_HelpCurIndex = -1;
        }
        g_HelpStateTimer = 0;
      }
    }
    else if ((g_HelpState < 9) && (g_HelpSuspended.piece<0,2>() == 0)) {
      if (-1 < g_HelpCurIndex) {
        if (g_HelpSuspended.piece<2,2>() == 0) {
          iVar6 = FastDecTimerS32(&DAT_007208c0);
          if (iVar6 == 0) {
            return;
          }
          g_HelpState = 1;
          g_HelpStateTimer = 0;
          if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
            sound_CorePlay(0,1,(MobyInstance *)0x0);
          }
          uVar2 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
          SetFontWindow((FontWindow *)(auStack_60 + 0x18),0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,
                              0x10,in_stack_ffffff28);
          FontPrintOpt(0x3ff0000000000000,(FontWindow *)(auStack_60 + 0x18),0x80ffa888,uVar2,
                             0xffffffffffffffff);
          DAT_00720890 = ((int)local_3a >> 1) + 5;
          DAT_00720898 = g_ScreenHeight + -0x3c;
          if (g_ScreenHeight + -0xc < g_ScreenHeight + ((int)local_3a >> 1) + -0x37) {
            DAT_00720898 = (g_ScreenHeight - DAT_00720890) + -0xc;
          }
          DAT_0072088c = ((int)local_3c >> 1) + 10;
          DAT_00720894 = 0x100;
          DAT_0072089c = 8;
          DAT_007208a0 = 8;
          g_HelpSuspended.piece<2,2>() = g_HelpSuspended.piece<2,2>() + 1;
          return;
        }
        if (-1 < g_HelpCurIndex) {
          if (*(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) =
                 *(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) + 1;
          }
        }
      }
      iVar1 = g_HelpCurFlag * 8;
      iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar1 + 2) < iVar6 / 600) {
        sVar3 = (short)(iVar6 >> 0x1f);
        *(short *)(CHAR_ARRAY_00a1000c + iVar1 + 2) =
             ((short)(iVar6 / 600) + sVar3) - ((short)((short)(iVar6 / 0x2580000) + sVar3) >> 0xf);
      }
      g_HelpSuspended.piece<2,2>() = 0;
      g_HelpCurIndex = -1;
      g_HelpState = 0;
      *(uint *)(CHAR_ARRAY_00a1000c + iVar1 + 4) =
           *(uint *)(CHAR_ARRAY_00a1000c + iVar1 + 4) | 1 << (Level & 0x3f) | 0x80000000;
    }
  }
  else {
    g_HelpCurId = -1;
    g_HelpState = 0;
    g_HelpStateTimer = 0;
  }
  return;
}


// 0x007c838 (0x134 bytes)
void Help_DrawIconBox(void)

{
  int iVar1;
  int iVar2;
  
  DAT_0072089c = 0x20;
  DAT_007208a0 = 0x20;
  DrawRoundedRect
            (DAT_00720898 + -0x20,DAT_00720898 + 0x20,DAT_00720894 + -0x20,DAT_00720894 + 0x20,0x60)
  ;
  iVar1 = DAT_00720894 + -0x20;
  iVar2 = DAT_00720898 + -0x20;
  GetEffectTex(4);
  Sprite_DrawShapeWrapper(iVar1,iVar2,0x40,0x40,0,0,0x40,0x40);
  return;
}


// 0x007c978 (0x52c bytes)
void Help_Draw(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_stack_ffffff58;
  GPiece<24> auStack_30;
  
  if (((g_HelpState != 0) && (DAT_007208b4 != 0)) &&
     ((DAT_0071fb59 != '\0' || (DAT_0071fb58 != '\0')))) {
    if (g_HelpState < 3) {
      if (0 < g_HelpState) {
        if (g_HelpState < 2) {
          if (DAT_0071fb59 != '\0') {
            DAT_0072089c = g_HelpStateTimer * 4 + 8;
            DAT_007208a0 = DAT_0072089c;
            DrawRoundedRect
                      (DAT_00720898 - DAT_0072089c,DAT_00720898 + DAT_0072089c,
                       DAT_00720894 - DAT_0072089c,DAT_00720894 + DAT_0072089c,0x60);
          }
        }
        else if (DAT_0071fb59 != '\0') {
          DAT_0072089c = 0x20;
          DAT_007208a0 = 0x20;
          DrawRoundedRect
                    (DAT_00720898 + -0x20,DAT_00720898 + 0x20,DAT_00720894 + -0x20,
                     DAT_00720894 + 0x20,0x60);
          iVar3 = DAT_00720894 + -0x20;
          iVar5 = DAT_00720898 + -0x20;
          GetEffectTex(4);
          Sprite_DrawShapeWrapper(iVar3,iVar5,0x40,0x40,0,0,0x40,0x40);
        }
      }
    }
    else if (g_HelpState < 7) {
      if (g_HelpState < 4) {
        if (DAT_0071fb59 != '\0') {
          uVar6 = DAT_0072088c * g_HelpStateTimer + g_HelpStateTimer * -0x20;
          uVar4 = DAT_00720890 * g_HelpStateTimer + g_HelpStateTimer * -0x20;
          DAT_0072089c = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 0x20;
          DAT_007208a0 = ((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0) + 0x20;
          DrawRoundedRect
                    (DAT_00720898 - DAT_007208a0,DAT_00720898 + DAT_007208a0,
                     DAT_00720894 - DAT_0072089c,DAT_00720894 + DAT_0072089c,0x60);
          iVar3 = DAT_00720894 + -0x20;
          iVar5 = DAT_00720898 + -0x20;
          GetEffectTex(4);
          Sprite_DrawShapeWrapper(iVar3,iVar5,0x40,0x40,0,0,0x40,0x40);
        }
      }
      else if (DAT_0071fb59 != '\0') {
        DAT_0072089c = DAT_0072088c;
        DAT_007208a0 = DAT_00720890;
        DrawRoundedRect
                  (300,0x17c,
                   (ZERO_MASK((2 - g_Language)) & 0xfffffffffffffff6U) + 0x28,
                   (ZERO_MASK((2 - g_Language)) & 5U) + 0x1d8,0x60);
        uVar6 = 0x80ffa888;
        if (g_HelpState == 4) {
          uVar6 = g_HelpStateTimer << 0x1d | 0xffa888;
        }
        else if (g_HelpState == 6) {
          uVar6 = (uint)((4 - (ulonglong)(uint)g_HelpStateTimer & 0xffffffff) << 0x1d) | 0xffa888;
        }
        iVar3 = 0;
        uVar2 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
        if ((1 < g_Language) && (g_Language < 6)) {
          iVar3 = 10;
        }
        SetFontWindow((FontWindow *)auStack_30,300,0x17c,iVar3 + 0x28,0x1d8,0xfa,0x154,0x12,
                            in_stack_ffffff58);
        fVar1 = 1.0;
        if (g_Language == 3) {
          fVar1 = 0.85;
        }
        FontPrintOpt((double)fVar1,auStack_30,uVar6,uVar2,0xffffffffffffffff);
      }
    }
    else if ((g_HelpState < 8) && (DAT_0071fb59 != '\0')) {
      uVar6 = DAT_0072089c * g_HelpStateTimer + g_HelpStateTimer * -8;
      uVar4 = DAT_007208a0 * g_HelpStateTimer + g_HelpStateTimer * -8;
      iVar5 = DAT_007208a0 - (((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0));
      iVar3 = DAT_0072089c - (((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0));
      DrawRoundedRect
                (DAT_00720898 - iVar5,DAT_00720898 + iVar5,DAT_00720894 - iVar3,DAT_00720894 + iVar3
                 ,(8 - g_HelpStateTimer) * 0xc);
    }
  }
  return;
}


// 0x007cea4 (0x68 bytes)
short Help_GetPairedId(short id,int column)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = &g_HelpIdPairs + column;
  iVar2 = 0;
  do {
    if (*psVar1 == id) {
      return *(short *)((int)&g_HelpIdPairs + iVar2 * 4 + ((uint)LZCOUNT(column) >> 4 & 2));
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 2;
  } while (iVar2 < 0x96);
  return -1;
}


