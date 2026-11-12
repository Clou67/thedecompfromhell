// game/memcard.cpp -- the save game: what goes in it, building and reading it back, the save UI text
// STATUS: CLEAN (checked against the asm; local names are mine)
// 32 functions, 0xe6b08-0xe9114
//
// A save is a list of chunks described by mc_data tables (DL's names): mc_gamedata for the global
// state, mc_leveldata for the per-level state, which is stored once per level (20 copies, each
// entry's addr is the base of a per-level array of `size`-byte records). On disk a chunk list is
//   int listSize; int 0; { int iff; int size; data, padded to 4 } ... { -1, 0 }
// and a whole save is   int gameListSize; int levelListSize; game list; 20 level lists.
// Reading matches chunks by iff, so chunks may be missing, extra or resized (each mc_data's
// mark records what happened). The PS3 save itself (dialogs, files, threads) is Idol's
// SaveSystem_PS; this file builds the data and its description string and handles the callbacks.
#include <stdio.h>
#include <string.h>
#include "game/memcard.h"
#include "game/boot.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mission.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/skyproc.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/sce.h"

#ifndef CELL_MSGDIALOG_TYPE_SE_TYPE_NORMAL
#define CELL_MSGDIALOG_TYPE_SE_TYPE_NORMAL (1 << 0)   /* sysutil_msgdialog.h */
#endif

#define NUM_SAVE_LEVELS     20
#define CHUNK_END           (-1)

#define FRAMES_PER_MINUTE   3600
#define FRAMES_PER_HOUR     216000

#define SAVE_STRBUF_SIZE    0x400
#define NUM_SAVE_STRBUFS    5

/* how a chunk in the save compared with its mc_data entry (mc_data.mark) */
enum McChunkMark {
    MC_CHUNK_LARGER  = -2,  /* the save's chunk is bigger: the rest is ignored */
    MC_CHUNK_SMALLER = -1,  /* the save's chunk is smaller: the rest keeps its value */
    MC_CHUNK_MISSING = 0,
    MC_CHUNK_OK      = 1,
};

/* memcard_PerformOperation / RunSaveSystem modes */
enum McOperation {
    MC_OP_SAVE_NEW = 0,     /* guess: the first save of a game */
    MC_OP_LOAD     = 1,
    MC_OP_NONE     = 2,
    MC_OP_SAVE     = 3,
    MC_OP_LIST     = 4,     /* guess: runs the save system without building data */
};

/* Idol save system states (g_memcardSaveSysState, SaveDataInfo.state) */
enum SaveSysState {
    SAVESYS_SAVED    = 0,
    SAVESYS_LOADED   = 1,
    SAVESYS_SAVING   = 3,
    SAVESYS_IDLE     = 5,
    SAVESYS_CANCELED = 6,
    SAVESYS_FATAL    = 11,
    SAVESYS_NO_SPACE = 12,  /* guess */
};

#define SAVE_FATAL_CODE     0x66

/* ids in SaveMsg_UTF8.dat (the meanings are inferred from the format strings) */
enum SaveMsgId {
    SAVEMSG_PLAYTIME  = 1000,
    SAVEMSG_CHALLENGE = 2000,
    SAVEMSG_BOLTS     = 3000,
    SAVEMSG_CONFIRM   = 5000,   /* the "continue?" dialog after a load */
    SAVEMSG_TITLE     = 6000,
    SAVEMSG_SUBTITLE  = 6003,
};

#define SAVEDATA_FLAG_LOADED    1   /* SaveDataInfo.flags: the game has been loaded once */

/* s_DigitalNames (@0x652b84): the "Digital" line per language, indexed by g_Language - 1 */


// 0x00e6b08 (0x14 bytes)
void SECTION_HEADER_MEMCARD(void)
{
    DAT_0072666c = 0x10000;
}

// 0x00e6b1c (0x15c bytes)
/* Puts the title id from the boot parameter into the memory card paths (they were built for the
   PS2's BASCUS-97199). 'E' and 'P' are the region letters of the PS2 product codes. */
void memcard_GetName(char *buff)
{
    int i;

    if (buff[0x12] == 'E') {
        g_McDir[2] = 'E';
    }
    else if (buff[0x12] == 'P') {
        g_McDir[2] = 'I';
    }

    for (i = 3; i < 7; i++) {
        g_McDir[i] = buff[i + 13];
    }

    for (i = 8; i < 11; i++) {
        g_McDir[i] = buff[i + 13];
    }

    for (i = 11; i < 13; i++) {
        g_McDir[i] = buff[i + 14];
    }

    /* the call at 0x5cccec is Ghidra's "strcpy", but it takes a length: strncpy */
    strncpy(g_McDirAll, g_McDir, 13);
    strncpy(g_McIconSys, g_McDir, 13);
    strncpy(g_McStaticIco, g_McDir, 13);
    strncpy(g_McMainFile, g_McDir, 13);
    strncpy(g_McMainFile + 20, g_McDir, 13);
    strncpy(g_McSaveFile, g_McDir, 13);
}

// 0x00e6c78 (0x8 bytes)
int STUB_000e6c78(void)
{
    return 0;
}

// 0x00e6c80 (0x58 bytes)
/* bytes a chunk list for mcd takes in the save, its 8-byte header included */
int memcard_GetDataSize(mc_data *mcd)
{
    int size = 8;

    for (; mcd->addr != NULL; mcd++) {
        size = (size + 8 + mcd->size + 3) & ~3;
    }

    return size + 8;
}

// 0x00e6cd8 (0x30c bytes)
/* Reads one chunk list back into the index'th record of each mcd entry. Returns the number of
   problems (unknown chunks, a size mismatch, entries not in the save), also kept per card. */
int memcard_RestoreData(char *addr, int index, mc_data *mcd)
{
    int *chunk = (int *)(addr + 8);
    int restored = 8;
    int errors = 0;
    int expected;
    int i;

    for (i = 0; mcd[i].addr != NULL; i++) {
        mcd[i].mark = MC_CHUNK_MISSING;
    }

    while (chunk[0] != CHUNK_END) {
        mc_data *entry;
        char *dest;
        int copySize;

        for (i = 0; mcd[i].addr != NULL && mcd[i].iff != chunk[0]; i++) {
        }

        entry = &mcd[i];

        if (entry->addr == NULL) {
            errors++;
        }
        else {
            dest = (char *)entry->addr + index * entry->size;

            if (chunk[1] == entry->size) {
                copySize = entry->size;
                entry->mark = MC_CHUNK_OK;
            }
            else if (chunk[1] < entry->size) {
                copySize = chunk[1];
                entry->mark = MC_CHUNK_SMALLER;
            }
            else {
                copySize = entry->size;
                entry->mark = MC_CHUNK_LARGER;
            }

            if (memcmp(dest, &chunk[2], copySize) != 0) {
                g_loaderr++;
            }

            FastMemCopy32(dest, &chunk[2], copySize);
            restored += ((copySize + 3) & ~3) + 8;
        }

        chunk = (int *)((char *)chunk + ((chunk[1] + 3) & ~3) + 8);
    }

    chunk += 2;
    restored += 8;
    expected = memcard_GetDataSize(mcd);

    if (restored != expected) {
        errors++;
    }

    /* the binary compares each iff with the word after the end marker, not with the chunks read */
    for (i = 0; mcd[i].addr != NULL && mcd[i].iff != chunk[0]; i++) {
        if (mcd[i].mark < MC_CHUNK_OK) {
            errors++;
        }
    }

    g_SaveCards[g_SaveCurCard].loadErrors = errors;
    return errors;
}

// 0x00e6fe4 (0x170 bytes)
void memcard_RestoreGame(char *addr)
{
    int gameSize = memcard_GetDataSize(mc_gamedata);
    int levelSize = memcard_GetDataSize(mc_leveldata);
    char *levelData;
    int level;

    if (((int *)addr)[0] != gameSize) {
        printf("Out of date save!\n");
        return;
    }

    if (((int *)addr)[1] != levelSize) {
        printf("Out of date save!\n");
        return;
    }

    memcard_RestoreData(addr + 8, 0, mc_gamedata);

    levelData = addr + 8 + gameSize;

    for (level = 0; level < NUM_SAVE_LEVELS; level++) {
        memcard_RestoreData(levelData, level, mc_leveldata);
        levelData += levelSize;
    }
}

// 0x00e7154 (0x4e4 bytes)
/* the state of a new game: everything the save holds back to its starting value */
void memcard_SetupNewGameGlobals(void)
{
    int level;
    int i;

    g_heroMaxNanotech = 4;
    DAT_0071fb24 = 1;
    g_HelpTextOn = 1;
    g_GameSettings.Stereo = 1;
    g_HelpVoiceOn = 1;
    g_GameSettings.MusicVolume = 0x2cc;
    g_GameSettings.SfxVolume = 0x400;
    Level = Veldin;
    g_boltCount = 0;
    g_ChallengeMode = 0;
    g_FrameCount = 0;
    g_totalBoltsCollected = 0;
    DAT_0096ca08 = 0;

    memset(&g_MiscLevelFlags, 0, 0x80);
    memset(Cheats, 0, sizeof(Cheats));
    memset(g_SkillPoints, 0, sizeof(g_SkillPoints));
    memset(&currentAmmoArray, 0, 0x25);
    memset(&UnlockableItems, 0, 0x25);
    memset(CHAR_ARRAY_0096c165, 0, 0x25);
    memset(g_purchasableVendorItems, 0, sizeof(g_purchasableVendorItems));
    memset(UINT_ARRAY_0096c1dc, 0, 8);
    memset(&g_SeenPlanets, 0, 0x14);
    memset(GalacticMap, 0, sizeof(GalacticMap));
    memset(g_MissionTargets, 0, sizeof(g_MissionTargets));
    memset(HelpData, 0, sizeof(HelpData));
    memset(CHAR_ARRAY_00a0feec, 0, 0x120);
    memset(CHAR_ARRAY_00a0fdc4, 0, 0x128);

    /* the options again (an inlined defaults function, probably) */
    DAT_0071fb24 = 1;
    g_HelpTextOn = 1;
    g_HelpVoiceOn = 1;
    g_GameSettings.CameraLeftRight = 1;
    DAT_00969c98 = 0;
    DAT_00969c9c = 0;
    DAT_00969ca4 = 0;
    g_GameSettings.CameraUpDown = 1;
    g_GameSettings.CameraSpeed = 1;

    memset(&g_goldWeaponsArray, 0, 0x28);
    g_goodiesMenuActive = 0;
    memset(&g_equippedItem, 0, 0x1c);

    g_GameSettings.Stereo = 1;
    g_GameSettings.MusicVolume = 0x2cc;
    g_GameSettings.SfxVolume = 0x400;
    DAT_00969c78 = 0;

    memset(&DAT_0096c080, 0, 0xc);
    memset(&DAT_00a0f51c, 0, 0x94);
    memset(&DAT_00a0f5b0, 0, 0x94);
    memset(&DAT_00a0f644, 0, 0x94);

    DAT_00a0f6dc = 0;
    g_GameFrameCount = 0;
    g_deathCount = 0;
    g_boltMiningTimer = 0;
    g_boltsMined = 0;

    HelpLogPos = 1;
    memset(HelpLog, 0, sizeof(HelpLog));

    /* the pause menu's help list starts with four entries */
    memset(g_HelpMenuList, 0, 0x714);
    g_HelpMenuList[0].msg = 0x5277;
    g_HelpMenuList[1].msg = 0x5278;
    g_HelpMenuList[2].msg = 0x52b9;
    g_HelpMenuList[3].msg = 0x52c0;

    for (i = 0; i < 4; i++) {
        g_HelpMenuList[i].enabled = 1;
    }

    memset(&VisitedPlanets, 0, 0x14);

    for (level = 0; level < NUM_SAVE_LEVELS; level++) {
        memset(g_MapRevealMasks[level], 0, sizeof(g_MapRevealMasks[level]));
        memset(g_LevelFlags[level], 0, sizeof(g_LevelFlags[level]));
        memset(g_LevelObjBits[level], 0, 0x100);
        memset(g_NavSlots[level], 0, 0x100);
        memset(g_LevelFlags2[level], 0, sizeof(g_LevelFlags2[level]));
    }
}

// 0x00e7638 (0x84 bytes)
void memcard_ResetGame(void)
{
    LoadMusic2(1);
    memcard_SetupNewGameGlobals();
    LoadMusic2(1);

    g_totalBoltsCollected = 0;
    DAT_0096ca08 = 0;
    Level = Veldin;
}

// 0x00e76bc (0x10 bytes)
int memcard_GetSaveSysState(void)
{
    return g_memcardSaveSysState;
}

// 0x00e76cc (0x178 bytes)
/* Once a frame: the bolt and gold weapon trophies (only for progress made since the load, so a
   save that already had them doesn't unlock them again), and the save system's error states. */
void memcard_Update(void)
{
    int goldWeapons;

    MB_CountGoldBolts();
    goldWeapons = MB_CountGoldWeapons();

    if (g_totalBoltsCollected > (u32)g_memcardRestoredBolts) {
        g_memcardHadBoltTrophy = 0;
    }

    if (goldWeapons > g_memcardRestoredGoldWeapons) {
        g_memcardHadMidasTrophy = 0;
    }

    if (goldWeapons == 10 && g_memcardHadMidasTrophy != 1) {
        MB_UnlockTrophy(RACHET_KING_MIDAS);
    }

    if (g_totalBoltsCollected > 1000000 && g_memcardHadBoltTrophy != 1) {
        MB_UnlockTrophy(BOLT_COLLECTOR);
    }

    if (g_memcardSaveSysState == SAVESYS_IDLE) {
        return;
    }

    if (g_FrontEnd && !g_memcardFatalShown && g_memcardSaveSysState == SAVESYS_FATAL) {
        g_memcardFatalShown = 1;

        if (idol::GetSaveData()->state == SAVESYS_FATAL) {
            SaveData_FatalExit(idol::GetSaveData(), SAVE_FATAL_CODE);
        }
    }
    else if (g_FrontEnd && g_memcardSaveSysState == SAVESYS_NO_SPACE) {
        g_gameMode = GAME_MODE_NORMAL;
        idol::GetSaveData();
        g_memcardSaveSysState = SAVESYS_IDLE;
    }
}

// 0x00e7844 (0x8 bytes)
int STUB_000e7844(void)
{
    return 0;
}

// 0x00e784c (0x138 bytes)
/* Writes the index'th record of each mcd entry as a chunk list; returns the bytes written. */
int memcard_PrepData(char *addr, int index, mc_data *mcd)
{
    int *chunk = (int *)(addr + 8);
    int size = 0;

    for (; mcd->addr != NULL; mcd++) {
        chunk[0] = mcd->iff;
        chunk[1] = mcd->size;
        FastMemCopy32(&chunk[2], (char *)mcd->addr + index * mcd->size, mcd->size);

        chunk = (int *)(((u32)&chunk[2] + mcd->size + 3) & ~3);
        size = (size + mcd->size + 8 + 3) & ~3;
    }

    chunk[0] = CHUNK_END;
    chunk[1] = 0;

    ((int *)addr)[1] = 0;
    ((int *)addr)[0] = size + 8;

    return size + 16;
}

// 0x00e7984 (0x134 bytes)
void memcard_MakeWholeSave(char *addr)
{
    char *levelData;
    int level;

    ((int *)addr)[0] = memcard_GetDataSize(mc_gamedata);
    ((int *)addr)[1] = memcard_GetDataSize(mc_leveldata);

    levelData = addr + 8 + memcard_PrepData(addr + 8, 0, mc_gamedata);

    for (level = 0; level < NUM_SAVE_LEVELS; level++) {
        levelData += memcard_PrepData(levelData, level, mc_leveldata);
    }
}

// 0x00e7ab8 (0x10 bytes)
int memcard_ReturnLang(void)
{
    return g_Language;
}

// 0x00e7ac8 (0xa4 bytes)
void memcard_InitSaveMsg(void)
{
    cellSysutilCheckCallback();

    Locale_Load(Locale_GetInstance(), &g_SaveMsgLocale, 1, memcard_ReturnLang,
                "rc1/ps3data/global/locale/SaveMsg_UTF8.dat");

    memcard_SetSaveDialogStrings();
}

// 0x00e7b6c (0x24 bytes)
/* Always 0: the binary tests the save's second word for "== 0 || != 0". Probably a version check
   whose condition no longer means anything (guess). */
int STUB_000e7b6c(char *addr)
{
    int value = ((int *)addr)[1];

    return !(value == 0 || value != 0);
}

// 0x00e7b90 (0x104 bytes)
/* fills the save list entry for one file from the save's header data */
void memcard_RestoreInfo(char *addr, int slot, int index)
{
    SaveFileInfo *file = &g_SaveCards[slot].files[index];

    file->valid = !STUB_000e7b6c(addr);
    file->level = *(int *)(addr + 0x10);
    file->bolts = *(int *)(addr + 0x1c);
    file->challenge = *(int *)(addr + 0x28);
    file->frames = *(int *)(addr + 0x34);
    file->unk10 = *(u32 *)(addr + 0x40);
    file->unk14 = *(u32 *)(addr + 0x44);
}

// 0x00e7c94 (0xb4 bytes)
/* len is never written (a leftover; the callers pass a zeroed int and use it as an offset) */
char *memcard_GetSaveMsgString(int idx, int *len)
{
    switch (idx) {
    case 0:
        return Locale_GetString(Locale_GetInstance(), SAVEMSG_PLAYTIME);
    case 1:
        return Locale_GetString(Locale_GetInstance(), SAVEMSG_CHALLENGE);
    case 2:
        return Locale_GetString(Locale_GetInstance(), SAVEMSG_SUBTITLE);
    case 3:
        return Locale_GetString(Locale_GetInstance(), SAVEMSG_BOLTS);
    }

    return "FAILZ!";
}

// 0x00e7d48 (0x110 bytes)
/* converts str for the save system into the next of five rotating buffers */
char *memcard_ConvertSaveMsgString(char *str, int *outLen)
{
    char *out;
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    if (g_JapaneseMode) {
        len /= 2;
    }

    out = g_memcardStrBufs[g_memcardStrBufIdx];
    g_memcardStrBufIdx = (g_memcardStrBufIdx + 1) % NUM_SAVE_STRBUFS;
    memset(out, 0, SAVE_STRBUF_SIZE);

    return Locale_Convert(Locale_GetInstance(), str, len, out, SAVE_STRBUF_SIZE, outLen);
}

// 0x00e7e58 (0x338 bytes)
/* The game's font encodes accented letters at 0x81-0xc5; the save system wants Latin-1.
   0x82 and 0x88 both become 0xc9 in the binary. */
char *memcard_FixupAccentChars(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        switch ((u8)str[i]) {
        case 0x81:
            str[i] = 0xc0;
            break;
        case 0x82:
            str[i] = 0xc9;
            break;
        case 0x83:
            str[i] = 0xc4;
            break;
        case 0x84:
            str[i] = 0xe1;
            break;
        case 0x85:
            str[i] = 0xe0;
            break;
        case 0x86:
            str[i] = 0xe2;
            break;
        case 0x87:
            str[i] = 0xe4;
            break;
        case 0x88:
            str[i] = 0xc9;
            break;
        case 0x89:
            str[i] = 0xc8;
            break;
        case 0x8a:
            str[i] = 0xca;
            break;
        case 0x8c:
            str[i] = 0xe9;
            break;
        case 0x8d:
            str[i] = 0xe8;
            break;
        case 0x8e:
            str[i] = 0xea;
            break;
        case 0x91:
            str[i] = 0xcc;
            break;
        case 0x92:
            str[i] = 0xce;
            break;
        case 0x95:
            str[i] = 0xec;
            break;
        case 0x96:
            str[i] = 0xee;
            break;
        case 0x97:
            str[i] = 0xef;
            break;
        case 0x98:
            str[i] = 0xd3;
            break;
        case 0x9b:
            str[i] = 0xd6;
            break;
        case 0x9c:
            str[i] = 0xf3;
            break;
        case 0x9d:
            str[i] = 0xf2;
            break;
        case 0x9e:
            str[i] = 0xf4;
            break;
        case 0x9f:
            str[i] = 0xf6;
            break;
        case 0xa0:
            str[i] = 0xda;
            break;
        case 0xa3:
            str[i] = 0xdc;
            break;
        case 0xa4:
        case 0xa5:
            str[i] = 0xf9;
            break;
        case 0xa6:
            str[i] = 0xfb;
            break;
        case 0xa7:
            str[i] = 0xfc;
            break;
        case 0xa8:
            str[i] = 0xd1;
            break;
        case 0xa9:
            str[i] = 0xf1;
            break;
        case 0xaa:
            str[i] = 0xc7;
            break;
        case 0xab:
            str[i] = 0xe7;
            break;
        case 0xac:
            str[i] = 0xdf;
            break;
        case 0xc5:
            str[i] = 0xb4;
            break;
        }
    }

    return str;
}

// 0x00e8190 (0xd8 bytes)
/* "Planet <name>", or just the name for the places that aren't planets */
int memcard_ConstructPlanetString(char *buf, int id)
{
    StringId name = (StringId)(STR_PLANET + id);

    if (id == Hoven || id == Kalebo || id == Blarg) {
        return sprintf(buf, "%s", help_msg_string_by_index(name));
    }

    if (id == Veldin) {
        name = STR_VELDIN;
    }

    return sprintf(buf, "%s %s", help_msg_string_by_index(STR_PLANET), help_msg_string_by_index(name));
}

// 0x00e8268 (0x590 bytes)
/* the description shown with the save: place, play time, bolts, challenge mode */
char *memcard_ConstructSaveString(char *buf)
{
    char minutePad[8];
    char hourPad[8];
    char planet[64];
    char challenge[64];
    char boltsLabel[64];
    char place[136];
    int hours = (int)g_FrameCount / FRAMES_PER_HOUR;
    int minutes = (int)g_FrameCount / FRAMES_PER_MINUTE - hours * 60;

    sprintf(minutePad, "%s", minutes < 10 ? "0" : "");
    sprintf(hourPad, "%s", hours < 10 ? "0" : "");

    if (!g_JapaneseMode) {
        int len = 0;
        int level = Level;
        int language;
        char *title;
        char *newline;
        char *digital;
        u8 noDigitalLine;

        sprintf(challenge, "%s %d", memcard_GetSaveMsgString(1, &len), (int)g_ChallengeMode);

        if (g_FrontEnd) {
            level++;
        }

        if (level < 0 || level > Veldin2) {
            sprintf(planet, "Ratchet & Clank");
        }
        else {
            memcard_ConstructPlanetString(planet, level);
        }

        sprintf(boltsLabel, "%s", memcard_GetSaveMsgString(3, &len));

        if (boltsLabel[0] >= 'a' && boltsLabel[0] <= 'z') {
            boltsLabel[0] -= 'a' - 'A';
        }

        sprintf(place, "%s - %s", help_msg_string_by_index((StringId)(STR_KYZIL_PLATEAU + level)), planet);
        title = memcard_ConvertSaveMsgString(memcard_FixupAccentChars(place), &len);

        noDigitalLine = FUN_00504d90(g_pHWSystem);

        language = g_Language;

        if (language != 0) {
            language--;
        }

        if (noDigitalLine) {
            newline = "";
            digital = "";
        }
        else {
            newline = "\n";
            digital = (char *)s_DigitalNames[language];
        }

        sprintf(buf, "%s\n%s %s%d:%s%d\n%s: %d\n%s%s%s", title, memcard_GetSaveMsgString(0, &len),
                hourPad, hours, minutePad, minutes, boltsLabel, (int)g_boltCount,
                (int)g_ChallengeMode > 0 ? challenge : "", newline, digital);
    }
    else {
        int timeLen = 0;
        int boltsLen = 0;
        int challengeLen = 0;
        char *timeLabel = memcard_GetSaveMsgString(0, &timeLen);
        char *bolts = memcard_GetSaveMsgString(3, &boltsLen);

        sprintf(challenge, "%s %d", memcard_GetSaveMsgString(1, &challengeLen), (int)g_ChallengeMode);
        strcpy(buf, timeLabel);
        sprintf(buf + timeLen, " - %s%d:%s%d\n%s: %d\n%s", hourPad, hours, minutePad, minutes, bolts,
                (int)g_boltCount, (int)g_ChallengeMode > 0 ? challenge : "");
    }

    return buf;
}

// 0x00e87f8 (0x74 bytes)
void memcard_SetSaveDialogStrings(void)
{
    char *title = Locale_GetString(Locale_GetInstance(), SAVEMSG_TITLE);
    char *subtitle = Locale_GetString(Locale_GetInstance(), SAVEMSG_SUBTITLE);

    SaveData_SetDialogStrings(idol::GetSaveData(), subtitle, title);
}

// 0x00e886c (0x1c bytes)
int memcard_IsSaveSystemIdle(void)
{
    return g_memcardSaveBusy == 0;
}

// 0x00e8888 (0x21c bytes)
/* Starts a save system operation. For a save, builds the description and the save data (a meg
   into the save buffer) first; the level saved is the one being loaded, if any. */
void memcard_PerformOperation(int mode)
{
    SaveDataInfo *save;
    int saveSize;
    char *data;
    LevelId realLevel;

    if (g_memcardSaveBusy != 0) {
        return;
    }

    save = idol::GetSaveData();
    saveSize = save->dataSize;
    memset(g_memcardSaveString, 0, sizeof(g_memcardSaveString));
    memcard_SetSaveDialogStrings();

    if (g_FrontEnd) {
        save->flags = SAVEDATA_FLAG_LOADED;
    }

    data = SaveDataPtr + 0x100000;

    switch (mode) {
    case MC_OP_SAVE_NEW:
    case MC_OP_SAVE:
        realLevel = Level;

        if (g_loadingPlanet) {
            Level = (LevelId)g_newlevelnum;
        }

        save->level = Level < 0 ? Veldin : Level;
        SaveData_SetTitle(save, memcard_ConstructSaveString(g_memcardSaveString));

        g_pSaveBuffer = SaveDataPtr;
        Map_SaveRevealMask(g_MapRevealMasks[Level]);
        memset(data, 0xf, saveSize);
        memcard_MakeWholeSave(data);

        Level = realLevel;
        break;
    case MC_OP_LOAD:
    case MC_OP_LIST:
        break;
    default:
        return;
    }

    idol::SaveSystem_PS::RunSaveSystem(save, mode, data, saveSize, memcard_printGameSaved,
                                       memcard_print_SavingGameCB_PS3, memcard_RestoreSaveGame,
                                       memcard_print_LoadingCB_PS3);
}

// 0x00e8aa4 (0x1c4 bytes)
/* Saves the game; level >= 0 saves as if on that level (marking it visited only for the save).
   Returns 0 if not on a real level. */
int memcard_Save(int force, int level)
{
    SaveFileInfo *file;
    u8 wasVisited = 0;

    if (Level >= NUM_SAVE_LEVELS) {
        return 0;
    }

    Map_SaveLevelObjectState();
    Map_SaveRevealMask(g_MapRevealMasks[Level]);

    g_memcardGameSaved |= force;

    if (g_memcardGameSaved) {
        if (!force) {
            g_CardStateFlags |= 0x200;
        }

        g_CardStateFlags |= 0x200;
        g_SaveRealLevel = Level;

        if (level >= 0) {
            Level = (LevelId)level;
            wasVisited = (&VisitedPlanets.Veldin)[level];

            if (!(&VisitedPlanets.Veldin)[level]) {
                (&VisitedPlanets.Veldin)[level] = 1;
            }
        }

        file = &g_SaveCards[0].files[g_SaveCurFile];
        file->bolts = g_boltCount;
        file->level = Level;
        file->challenge = g_ChallengeMode;
        file->frames = g_FrameCount;

        if (level >= 0) {
            (&VisitedPlanets.Veldin)[Level] = wasVisited;
            Level = (LevelId)g_SaveRealLevel;
        }

        memcard_PerformOperation(MC_OP_SAVE);
    }
    else if (force) {
        memcard_PerformOperation(MC_OP_SAVE_NEW);   /* unreachable: force was or'ed in above */
    }

    return 1;
}

// 0x00e8c68 (0x38 bytes)
/* cellMsgDialog callback for the confirmation after a load */
void memcard_print_TimeForPain(int buttonType, void *userData)
{
    print_tty2("User agrees.  Time for the pain!\n");
    g_memcardWaitDialog = 0;
}

// 0x00e8ca0 (0x280 bytes)
/* Load callback: result 0 = loaded (data is the save), 1 = canceled, else failed: start a new
   game from the beginning. */
int memcard_RestoreSaveGame(int result, char *data)
{
    memset(&g_memcardRestoredBolts, 0, 8);          /* and g_memcardRestoredGoldWeapons */
    memset(&g_memcardHadBoltTrophy, 0, 2);          /* and g_memcardHadMidasTrophy */
    printf(" Restoring saved game...\n");

    if (result == 0) {
        memcard_RestoreGame(data);

        g_memcardRestoredBolts = g_totalBoltsCollected;

        if (g_memcardRestoredBolts >= 1000000) {
            g_memcardHadBoltTrophy = 1;
        }

        g_memcardRestoredGoldWeapons = MB_CountGoldWeapons();

        if (g_memcardRestoredGoldWeapons == 10) {
            g_memcardHadMidasTrophy = 1;
        }

        if (*((u8 *)g_viewMtxPtr + 0x185a4) == 0) {
            DAT_00a52e64 = 0;
        }
        else {
            FUN_004d6f50(g_viewMtxPtr, DAT_00a52e64);
        }

        g_memcardGameSaved = 1;
        print_tty2("\n Restored game from Idol/memcard.cpp \n");
        memcard_SetSaveDialogStrings();

        if (!(idol::GetSaveData()->flags & SAVEDATA_FLAG_LOADED)) {
            *((u8 *)TrophyMgr + 0x18c) = 0;
            cellMsgDialogOpen2(CELL_MSGDIALOG_TYPE_SE_TYPE_NORMAL,
                               Locale_GetString(Locale_GetInstance(), SAVEMSG_CONFIRM),
                               memcard_print_TimeForPain, NULL, NULL);

            g_memcardWaitDialog = 1;

            do {
                UpdatePad();
                UpdateOcclusion(0);
                cellSysutilCheckCallback();
                Render_DispatchJob();
            } while (g_memcardWaitDialog == 1);
        }
    }
    else if (result != 1) {
        g_memcardGameSaved = 0;
        g_newlevelnum = -1;
        g_loadingPlanet = 1;
        g_CutscenePlaying = 1;
    }

    return result;
}

// 0x00e8f20 (0x4c bytes)
int memcard_printGameSaved(int result)
{
    printf("\n Game has been saved!\n");
    g_memcardGameSaved = 1;

    return result;
}

// 0x00e8f6c (0x30 bytes)
int memcard_print_SavingGameCB_PS3(int result)
{
    print_tty2("###### PS3_SavingGame Callback in Idol/memcard.cpp####\n");

    return 0;
}

// 0x00e8f9c (0x3c bytes)
int memcard_print_LoadingCB_PS3(int result)
{
    print_tty2("####### LoadingCB_PS3 Callback has been called#####\n");

    return result;
}

// 0x00e8fd8 (0x13c bytes)
/* Once the save system is idle, the result of the last operation, reported once: -1 busy or
   already reported, 0 nothing, 1 canceled, 2 error, else the save/load callback's result. */
int memcard_PollSaveResult(void)
{
    int result;

    if (g_memcardSaveBusy != 0 || g_memcardPollDone) {
        return -1;
    }

    switch (g_memcardSaveSysState) {
    case SAVESYS_FATAL:
        g_memcardPollDone = 1;

        if (idol::GetSaveData()->state == SAVESYS_FATAL) {
            g_memcardFatalError = 1;
        }

        /* fall through */
    case SAVESYS_NO_SPACE:
        g_memcardPollDone = 1;

        if (idol::GetSaveData()->state == SAVESYS_NO_SPACE) {
            g_memcardFatalError = 1;
        }

        return 2;
    case SAVESYS_CANCELED:
        g_memcardPollDone = 1;
        return 1;
    case SAVESYS_IDLE:
        return 0;
    case SAVESYS_LOADED:
        result = SaveData_CallOnLoad(idol::GetSaveData());
        g_memcardPollDone = 1;
        return result;
    case SAVESYS_SAVED:
    case SAVESYS_SAVING:
        result = SaveData_CallOnSave(idol::GetSaveData());
        g_memcardPollDone = 1;
        return result;
    }

    return 0;
}
