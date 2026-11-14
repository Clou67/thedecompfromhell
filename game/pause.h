#pragma once
// game/pause.h
#include "types.h"

// ---- types
struct GameSettings {
    dword CameraUpDown;
    dword CameraLeftRight;
    dword CameraSpeed;
    dword Stereo;
    dword MusicVolume;
    dword SfxVolume;
};

struct Planets32 {
    dword Veldin;
    dword Novalis;
    dword Aridia;
    dword Kerwan;
    dword Eudora;
    dword Rilgar;
    dword BlargStation;
    dword Umbris;
    dword Batalia;
    dword Gaspar;
    dword Orxon;
    dword Pokitaru;
    dword Hoven;
    dword Gemlik;
    dword Oltanis;
    dword Quartu;
    dword Kalebo;
    dword Fleet;
    dword VeldinRevisit;
};

struct PlanetsPage {
    uint nameId;
    uint subPlanetNameId;
    uint value;
};

/* g_Language: the game's text language. From InitOnce's mapping of the system language
   (CELL_SYSUTIL_LANG_*); 1 is not used by this build */
enum Language {
    LANG_ENGLISH = 0,
    LANG_FRENCH = 2,
    LANG_GERMAN = 3,
    LANG_SPANISH = 4,
    LANG_ITALIAN = 5,
    LANG_JAPANESE = 6,
};

// ---- globals
extern undefined4 DAT_0013ca64; /* 0x13ca64 */
extern undefined4 DAT_00653684; /* no defined data */
extern undefined4 DAT_0065368c; /* no defined data */
extern undefined4 DAT_0071fa2c; /* 0x71fa2c */
extern undefined4 DAT_0071fa44; /* 0x71fa44 */
extern undefined4 DAT_0071fa48; /* 0x71fa48 */
extern undefined4 DAT_0071fa4c; /* 0x71fa4c */
extern undefined4 DAT_0071fa50; /* 0x71fa50 */
extern undefined4 DAT_0071faec; /* 0x71faec */
extern undefined4 DAT_0071fb18; /* 0x71fb18 */
extern undefined4 DAT_007208ce; /* no defined data */
extern undefined4 DAT_00721008; /* 0x721008 */
extern undefined4 DAT_00721010; /* 0x721010 */
extern undefined4 DAT_00721038; /* no defined data */
extern undefined4 DAT_0072103a; /* no defined data */
extern undefined4 DAT_00729818; /* 0x729818 */
extern undefined4 DAT_00729840; /* 0x729840 */
extern undefined4 DAT_00729844; /* 0x729844 */
extern undefined4 DAT_00729848; /* 0x729848 */
extern undefined4 DAT_0072984c; /* 0x72984c */
extern undefined4 DAT_00729850; /* 0x729850 */
extern undefined4 DAT_00729894; /* 0x729894 */
extern undefined4 DAT_007298d0; /* 0x7298d0 */
extern undefined4 DAT_007298d4; /* 0x7298d4 */
extern undefined4 DAT_007298d8; /* 0x7298d8 */
extern undefined4 DAT_007298dc; /* 0x7298dc */
extern undefined4 DAT_007298e0; /* 0x7298e0 */
extern undefined4 DAT_007298e4; /* 0x7298e4 */
extern undefined4 DAT_007298e8; /* 0x7298e8 */
extern undefined4 DAT_007298ec; /* 0x7298ec */
extern undefined4 DAT_00729be8; /* 0x729be8 */
extern undefined4 DAT_00729d7c; /* 0x729d7c */
extern undefined2 DAT_0072a21e; /* 0x72a21e */
extern undefined2 DAT_0072a702; /* 0x72a702 */
extern undefined4 DAT_0072a9f0; /* no defined data */
extern undefined4 DAT_0072ace0; /* no defined data */
extern undefined4 DAT_0072adc0; /* 0x72adc0 */
extern undefined4 DAT_0072af24; /* 0x72af24 */
extern undefined2 DAT_0072b330; /* 0x72b330 */
extern undefined4 DAT_0072ba84; /* 0x72ba84 */
extern undefined4 DAT_0072be04; /* no defined data */
extern undefined4 DAT_0072be38; /* no defined data */
extern undefined4 DAT_0072c4f4; /* 0x72c4f4 */
extern undefined4 DAT_0072c8bc; /* 0x72c8bc */
extern undefined4 DAT_0072d87c; /* no defined data */
extern undefined4 DAT_0072dc78; /* no defined data */
extern undefined4 DAT_0072df3c; /* no defined data */
extern undefined4 DAT_0072dfc0; /* 0x72dfc0 */
extern undefined4 DAT_0072e004; /* 0x72e004 */
extern undefined2 DAT_0072e1fe; /* 0x72e1fe */
extern undefined2 DAT_0072e20a; /* 0x72e20a */
extern undefined2 DAT_0072e216; /* 0x72e216 */
extern undefined2 DAT_0072e220; /* 0x72e220 */
extern undefined2 DAT_0072e222; /* 0x72e222 */
extern undefined4 DAT_0072e24c; /* 0x72e24c */
extern undefined4 DAT_0072e250; /* 0x72e250 */
extern undefined4 DAT_0072e254; /* 0x72e254 */
extern undefined4 DAT_0072e258; /* 0x72e258 */
extern undefined4 DAT_0072e43c; /* no defined data */
extern undefined4 DAT_0072e4f8; /* 0x72e4f8 */
extern undefined4 DAT_0072ebc8; /* no defined data */
extern undefined4 DAT_00730000; /* no defined data */
extern undefined4 DAT_00730034; /* 0x730034 */
extern undefined4 DAT_0073027c; /* no defined data */
extern undefined4 DAT_007302ac; /* no defined data */
extern undefined2 DAT_00730488; /* 0x730488 */
extern undefined2 DAT_0073048a; /* 0x73048a */
extern undefined4 DAT_0073048c; /* 0x73048c */
extern undefined2 DAT_00730494; /* 0x730494 */
extern undefined2 DAT_00730496; /* 0x730496 */
extern undefined4 DAT_00730498; /* 0x730498 */
extern undefined2 DAT_007304a0; /* 0x7304a0 */
extern undefined2 DAT_007304a2; /* 0x7304a2 */
extern undefined4 DAT_007304a4; /* 0x7304a4 */
extern undefined2 DAT_007304ac; /* 0x7304ac */
extern undefined2 DAT_007304ae; /* 0x7304ae */
extern undefined4 DAT_007304b0; /* 0x7304b0 */
extern undefined2 DAT_007304b8; /* 0x7304b8 */
extern undefined2 DAT_007304ba; /* 0x7304ba */
extern undefined4 DAT_007304bc; /* 0x7304bc */
extern undefined4 DAT_007304c4; /* no defined data */
extern undefined4 DAT_007308a0; /* no defined data */
extern undefined4 DAT_00730924; /* 0x730924 */
extern undefined4 DAT_00730a00; /* no defined data */
extern undefined4 DAT_00730a84; /* 0x730a84 */
extern undefined4 DAT_00730ac8; /* 0x730ac8 */
extern undefined4 DAT_00730ad4; /* 0x730ad4 */
extern undefined4 DAT_00730ad8; /* 0x730ad8 */
extern undefined4 DAT_00730adc; /* 0x730adc */
extern undefined4 DAT_00730ae8; /* 0x730ae8 */
extern undefined4 DAT_00730b60; /* 0x730b60 */
extern undefined4 DAT_00730b64; /* 0x730b64 */
extern undefined4 DAT_00730b68; /* 0x730b68 */
extern undefined4 DAT_00730b6c; /* 0x730b6c */
extern undefined4 DAT_00730b70; /* 0x730b70 */
extern undefined4 DAT_00730b7c; /* 0x730b7c */
extern undefined4 DAT_00730b90; /* no defined data */
extern undefined4 DAT_00730c3c; /* no defined data */
extern undefined4 DAT_00730cfc; /* no defined data */
extern undefined4 DAT_00730d8c; /* no defined data */
extern undefined4 DAT_00730da4; /* no defined data */
extern undefined4 DAT_00730de0; /* no defined data */
extern undefined4 DAT_00730de4; /* no defined data */
extern undefined4 DAT_00730de8; /* no defined data */
extern undefined4 DAT_00730dec; /* no defined data */
extern undefined4 DAT_00730df0; /* no defined data */
extern undefined4 DAT_00730df4; /* no defined data */
extern undefined4 DAT_00730df8; /* no defined data */
extern undefined4 DAT_00730dfc; /* no defined data */
extern undefined4 DAT_00730e00; /* no defined data */
extern undefined4 DAT_00730e04; /* no defined data */
extern undefined4 DAT_00730e08; /* no defined data */
extern undefined4 DAT_00730e0c; /* no defined data */
extern undefined4 DAT_007314d0; /* no defined data */
extern undefined4 DAT_007314d4; /* no defined data */
extern undefined4 DAT_00731598; /* no defined data */
extern undefined4 DAT_00731698; /* 0x731698 */
extern undefined4 DAT_0073169c; /* 0x73169c */
extern undefined4 DAT_00731758; /* no defined data */
extern undefined4 DAT_00731780; /* 0x731780 */
extern undefined4 DAT_007354d4; /* no defined data */
extern undefined4 DAT_00738188; /* no defined data */
extern undefined4 DAT_0073818c; /* no defined data */
extern undefined4 DAT_00738190; /* no defined data */
extern undefined4 DAT_00738194; /* no defined data */
extern undefined4 DAT_00738198; /* no defined data */
extern undefined4 DAT_0073819c; /* no defined data */
extern undefined4 DAT_007381a0; /* no defined data */
extern undefined4 DAT_007381a4; /* no defined data */
extern undefined4 DAT_00902ed8; /* 0x902ed8 */
extern undefined2 DAT_0096459a; /* 0x96459a */
extern undefined4 DAT_00966af0; /* 0x966af0 */
extern undefined1 DAT_0096bcd6; /* 0x96bcd6 */
extern undefined1 DAT_0096bcd7; /* 0x96bcd7 */
extern undefined1 DAT_0096c080; /* 0x96c080 */
extern undefined4 DAT_0098967f; /* no defined data */
extern undefined1 DAT_00a0ca7c; /* 0xa0ca7c */
extern undefined4 DAT_00a10544; /* 0xa10544 */
extern undefined4 DAT_00a10924; /* 0xa10924 */
extern undefined4 DAT_00a15c78; /* 0xa15c78 */
extern undefined1 DAT_00a15f3a; /* 0xa15f3a */
extern undefined4 DAT_00a1de80; /* 0xa1de80 */
extern undefined4 DAT_00a1de84; /* 0xa1de84 */
extern undefined4 DAT_00a1de88; /* 0xa1de88 */
extern undefined4 DAT_00a1de8c; /* 0xa1de8c */
extern undefined4 DAT_00a1de90; /* 0xa1de90 */
extern undefined4 DAT_00a1de94; /* 0xa1de94 */
extern undefined4 DAT_00a1de98; /* 0xa1de98 */
extern undefined4 DAT_00a1de9c; /* 0xa1de9c */
extern undefined4 DAT_00a1dea0; /* no defined data */
extern undefined4 DAT_00a1deb0; /* no defined data */
extern undefined4 DAT_00a20700; /* 0xa20700 */
extern undefined4 DAT_00a20704; /* 0xa20704 */
extern undefined4 DAT_00a20708; /* 0xa20708 */
extern undefined4 DAT_00a20718; /* 0xa20718 */
extern undefined4 DAT_00a2071c; /* 0xa2071c */
extern undefined4 DAT_00a20720; /* 0xa20720 */
extern undefined4 DAT_00a20724; /* 0xa20724 */
extern undefined4 DAT_00a20728; /* 0xa20728 */
extern undefined4 DAT_00a2072c; /* 0xa2072c */
extern undefined4 DAT_00a20730; /* 0xa20730 */
extern undefined4 DAT_00a20734; /* 0xa20734 */
extern undefined4 DAT_00a20738; /* 0xa20738 */
extern undefined4 DAT_00a2073c; /* 0xa2073c */
extern undefined4 DAT_00a20740; /* 0xa20740 */
extern undefined4 DAT_00a20744; /* 0xa20744 */
extern undefined4 DAT_00a20748; /* 0xa20748 */
extern undefined4 DAT_00a2074c; /* 0xa2074c */
extern undefined4 DAT_00a20750; /* 0xa20750 */
extern undefined4 DAT_00a20754; /* 0xa20754 */
extern undefined4 DAT_00a20758; /* 0xa20758 */
extern undefined4 DAT_00a2075c; /* 0xa2075c */
extern undefined4 DAT_00a20760; /* 0xa20760 */
extern undefined4 DAT_00a20764; /* 0xa20764 */
extern undefined4 DAT_00a20768; /* 0xa20768 */
extern undefined4 DAT_00a2076c; /* 0xa2076c */
extern undefined4 DAT_00a20770; /* 0xa20770 */
extern undefined4 DAT_00a20774; /* 0xa20774 */
extern undefined4 DAT_00a20778; /* 0xa20778 */
extern undefined4 DAT_00a2077c; /* 0xa2077c */
extern undefined4 DAT_00a20780; /* 0xa20780 */
extern undefined4 DAT_00a207ec; /* 0xa207ec */
extern undefined4 DAT_00a207f0; /* 0xa207f0 */
extern undefined4 DAT_00a207f4; /* 0xa207f4 */
extern undefined4 DAT_00a207f8; /* 0xa207f8 */
extern undefined4 DAT_00a207fc; /* 0xa207fc */
extern undefined4 DAT_00a20800; /* 0xa20800 */
extern undefined4 DAT_00a20804; /* 0xa20804 */
extern undefined4 DAT_00a20810; /* 0xa20810 */
extern undefined4 DAT_00a20814; /* 0xa20814 */
extern undefined4 DAT_00a35719; /* no defined data */
extern undefined4 DAT_00a3592e; /* no defined data */
extern undefined4 DAT_00a35932; /* no defined data */
extern undefined1 DAT_00a35c65; /* 0xa35c65 */
extern undefined4 DAT_00a52bc0; /* 0xa52bc0 */
extern undefined4 DAT_00a52bc4; /* 0xa52bc4 */
extern undefined4 DAT_00a52bc8; /* 0xa52bc8 */
extern undefined4 DAT_00a52bcc; /* 0xa52bcc */
extern undefined4 DAT_00a52be0; /* 0xa52be0 */
extern undefined4 DAT_00a52be4; /* 0xa52be4 */
extern undefined4 DAT_00a52be8; /* 0xa52be8 */
extern undefined4 DAT_00a52bec; /* 0xa52bec */
extern undefined4 DAT_00a52bf0; /* 0xa52bf0 */
extern undefined4 DAT_00a52bf4; /* 0xa52bf4 */
extern undefined4 DAT_00a52bf8; /* 0xa52bf8 */
extern undefined4 DAT_00a52bfc; /* 0xa52bfc */
extern undefined4 DAT_00a52c00; /* 0xa52c00 */
extern undefined4 DAT_00a52c04; /* 0xa52c04 */
extern undefined4 DAT_00a52c08; /* 0xa52c08 */
extern undefined4 DAT_00a52c0c; /* 0xa52c0c */
extern undefined4 DAT_00a52c50; /* 0xa52c50 */
extern undefined4 DAT_00a52c54; /* 0xa52c54 */
extern undefined4 DAT_00a52c58; /* 0xa52c58 */
extern undefined4 DAT_00a52c5c; /* 0xa52c5c */
extern undefined4 DAT_00a52c6c; /* 0xa52c6c */
extern undefined4 DAT_00a52c70; /* 0xa52c70 */
extern undefined4 DAT_00a52c77; /* no defined data */
extern undefined1 DAT_00a52c78; /* 0xa52c78 */
extern undefined1 DAT_00a52c79; /* 0xa52c79 */
extern undefined1 DAT_00a52c7a; /* 0xa52c7a */
extern undefined1 DAT_00a52c7b; /* 0xa52c7b */
extern undefined4 DAT_00a52c7c; /* 0xa52c7c */
extern undefined4 DAT_00a52c80; /* 0xa52c80 */
extern undefined4 DAT_00a52c84; /* 0xa52c84 */
extern undefined1 DAT_00a52c88; /* 0xa52c88 */
extern undefined1 DAT_00a52c89; /* 0xa52c89 */
extern undefined4 DAT_00a52c8c; /* 0xa52c8c */
extern undefined4 DAT_00a52c90; /* 0xa52c90 */
extern undefined4 DAT_00a52c94; /* 0xa52c94 */
extern undefined1 DAT_00a52ca4; /* 0xa52ca4 */
extern undefined4 DAT_00a52cb0; /* 0xa52cb0 */
extern undefined4 DAT_00a52cb4; /* 0xa52cb4 */
extern undefined4 DAT_00a52cb8; /* 0xa52cb8 */
extern undefined4 DAT_00a52cbc; /* 0xa52cbc */
extern undefined4 DAT_00a52cc4; /* 0xa52cc4 */
extern undefined4 DAT_00a52cc8; /* 0xa52cc8 */
extern undefined4 DAT_00a52ccc; /* 0xa52ccc */
extern undefined4 DAT_00a52cd4; /* 0xa52cd4 */
extern undefined4 DAT_00a52cd8; /* 0xa52cd8 */
extern undefined4 DAT_00a52cdc; /* 0xa52cdc */
extern undefined4 DAT_00a52ce0; /* 0xa52ce0 */
extern undefined4 DAT_00a52ce4; /* 0xa52ce4 */
extern undefined4 DAT_00a52cec; /* 0xa52cec */
extern undefined4 DAT_00a52cf0; /* 0xa52cf0 */
extern undefined4 DAT_00a52cf4; /* 0xa52cf4 */
extern undefined4 DAT_00a52cf8; /* 0xa52cf8 */
extern undefined1 DAT_00a52cfc; /* 0xa52cfc */
extern undefined4 DAT_00a52d00; /* 0xa52d00 */
extern undefined4 DAT_00a52d04; /* no defined data */
extern undefined4 DAT_00a52da0; /* no defined data */
extern undefined1 DAT_00a52da1; /* 0xa52da1 */
extern undefined4 DAT_00a52dc0; /* 0xa52dc0 */
extern undefined4 DAT_00a52dc4; /* 0xa52dc4 */
extern undefined4 DAT_00a52dc8; /* 0xa52dc8 */
extern undefined4 DAT_00a52de0; /* no defined data */
extern undefined1 DAT_00a52de1; /* 0xa52de1 */
extern undefined4 DAT_00a52e00; /* 0xa52e00 */
extern undefined4 DAT_00a52e04; /* 0xa52e04 */
extern undefined4 DAT_00a52e08; /* 0xa52e08 */
extern undefined4 DAT_00a52e20; /* no defined data */
extern undefined1 DAT_00a52e21; /* 0xa52e21 */
extern undefined4 DAT_00a52e40; /* 0xa52e40 */
extern undefined4 DAT_00a52e44; /* 0xa52e44 */
extern undefined4 DAT_00a52e48; /* 0xa52e48 */
extern undefined4 DAT_00a52e64; /* 0xa52e64 */
extern undefined4 DAT_00a52e68; /* 0xa52e68 */
extern undefined4 DAT_00a52e6c; /* 0xa52e6c */
extern undefined4 DAT_00a52e84; /* 0xa52e84 */
extern undefined4 DAT_00a52e9c; /* 0xa52e9c */
extern undefined4 DAT_00a52ea0; /* 0xa52ea0 */
extern undefined4 DAT_00a52ea4; /* 0xa52ea4 */
extern undefined4 DAT_00a52ea8; /* 0xa52ea8 */
extern undefined4 DAT_00a52eac; /* 0xa52eac */
extern undefined4 DAT_00a52eb0; /* 0xa52eb0 */
extern undefined4 DAT_00a52eb4; /* 0xa52eb4 */
extern undefined4 DAT_00a52eb8; /* 0xa52eb8 */
extern undefined4 DAT_00a52ebc; /* 0xa52ebc */
extern undefined4 DAT_00a52ec0; /* 0xa52ec0 */
extern undefined4 DAT_00a52ec4; /* 0xa52ec4 */
extern undefined4 DAT_00a52ec8; /* 0xa52ec8 */
extern undefined4 DAT_00a52ecc; /* 0xa52ecc */
extern undefined4 DAT_00a52ed0; /* 0xa52ed0 */
extern undefined4 DAT_00a52ed4; /* 0xa52ed4 */
extern undefined4 DAT_00a52ed8; /* 0xa52ed8 */
extern undefined4 DAT_00a52edc; /* 0xa52edc */
extern undefined4 DAT_00a52ee0; /* 0xa52ee0 */
extern undefined4 DAT_00a52ee4; /* 0xa52ee4 */
extern undefined4 DAT_00a52ee8; /* 0xa52ee8 */
extern undefined4 DAT_00a52eec; /* 0xa52eec */
extern undefined4 DAT_00a52ef0; /* 0xa52ef0 */
extern undefined4 DAT_00a52ef4; /* 0xa52ef4 */
extern undefined4 DAT_00a52ef8; /* 0xa52ef8 */
extern undefined4 DAT_00a52efc; /* 0xa52efc */
extern undefined4 DAT_00a52f00; /* 0xa52f00 */
extern undefined4 DAT_00a52f04; /* 0xa52f04 */
extern undefined4 DAT_00a52f08; /* 0xa52f08 */
extern undefined4 DAT_00a52f0c; /* 0xa52f0c */
extern undefined4 DAT_00a53060; /* 0xa53060 */
extern undefined4 DAT_00a53064; /* 0xa53064 */
extern undefined4 DAT_00a53068; /* 0xa53068 */
extern undefined4 DAT_00a5306c; /* 0xa5306c */
extern undefined4 DAT_00a53070; /* 0xa53070 */
extern undefined4 DAT_00a53074; /* 0xa53074 */
extern undefined4 DAT_00a53078; /* 0xa53078 */
extern undefined4 DAT_00a5307c; /* 0xa5307c */
extern undefined4 DAT_00a53080; /* 0xa53080 */
extern undefined4 DAT_00a53084; /* 0xa53084 */
extern undefined4 DAT_00a53088; /* 0xa53088 */
extern undefined4 DAT_00a5308c; /* 0xa5308c */
extern undefined4 DAT_00a53090; /* 0xa53090 */
extern undefined4 DAT_00a53094; /* 0xa53094 */
extern undefined4 DAT_00a53098; /* 0xa53098 */
extern undefined4 DAT_00a5309c; /* 0xa5309c */
extern undefined4 DAT_00a530c0; /* 0xa530c0 */
extern undefined4 DAT_00a530c4; /* 0xa530c4 */
extern undefined2 DAT_00a530c8; /* 0xa530c8 */
extern undefined4 DAT_00a53158; /* no defined data */
extern undefined2 DAT_00a53194; /* 0xa53194 */
extern undefined2 DAT_00a53196; /* 0xa53196 */
extern undefined2 DAT_00a53198; /* 0xa53198 */
extern undefined2 DAT_00a5319a; /* 0xa5319a */
extern undefined2 DAT_00a5319c; /* 0xa5319c */
extern undefined4 DAT_00a53220; /* no defined data */
extern undefined4 DAT_00a53258; /* no defined data */
extern undefined4 DAT_00a53290; /* no defined data */
extern undefined4 DAT_00a53292; /* no defined data */
extern undefined4 DAT_00a53294; /* no defined data */
extern undefined4 DAT_00a53298; /* no defined data */
extern undefined4 DAT_00a53388; /* 0xa53388 */
extern undefined4 DAT_00a5338c; /* 0xa5338c */
extern undefined4 DAT_00a53390; /* 0xa53390 */
extern undefined4 DAT_00a53394; /* 0xa53394 */
extern undefined4 DAT_00a53398; /* 0xa53398 */
extern undefined4 DAT_00a534a4; /* 0xa534a4 */
extern undefined4 DAT_00a534c0; /* 0xa534c0 */
extern undefined4 DAT_00a534c4; /* no defined data */
extern undefined1 DAT_00a534f0; /* 0xa534f0 */
extern undefined1 DAT_00a534f8; /* 0xa534f8 */
extern undefined4 DAT_010ea454; /* 0x10ea454 */
extern uint GalacticMap[20]; /* 0x96c18c */
extern undefined MobyClassLookup; /* 0xa354c0 */
extern MobyClass * MobyClasses[240]; /* 0xa34c00 */
extern undefined * PTR_DAT_0072ff98; /* 0x72ff98 */
extern pointer PTR_Elf64_Ehdr_0072b332; /* 0x72b332 */
extern pointer32 PTR_GoldBolt_SpinMobyUpdate_00707740; /* 0x707740 */
extern pointer32 PTR_ItemView_SpinMobyUpdate_007076f0; /* 0x7076f0 */
extern pointer32 PTR_MenuHero_MobyUpdateA_007078f0; /* 0x7078f0 */
extern pointer32 PTR_MenuHero_MobyUpdateB_007078f8; /* 0x7078f8 */
extern pointer32 PTR_MenuHero_MobyUpdateC_00707900; /* 0x707900 */
extern pointer32 PTR_MenuHero_MobyUpdateD_00707908; /* 0x707908 */
extern pointer32 PTR_MenuHero_MobyUpdateE_00707910; /* 0x707910 */
extern pointer32 PTR_MenuHero_MobyUpdateF_00707918; /* 0x707918 */
extern pointer PTR_PTR_00729bb0; /* 0x729bb0 */
extern pointer PTR_PTR_00729d40; /* 0x729d40 */
extern pointer PTR_PTR_00729d90; /* 0x729d90 */
extern pointer PTR_PTR_00729f18; /* 0x729f18 */
extern pointer PTR_PTR_00729f70; /* 0x729f70 */
extern pointer PTR_PTR_00729fc8; /* 0x729fc8 */
extern pointer PTR_PTR_0072a020; /* 0x72a020 */
extern pointer PTR_PTR_0072ba44; /* 0x72ba44 */
extern pointer PTR_PTR_0072d360; /* 0x72d360 */
extern pointer32 PTR_STUB_00150654_007078e0; /* 0x7078e0 */
extern pointer32 PTR_STUB_00150658_007078e8; /* 0x7078e8 */
extern pointer32 PTR_STUB_UpdateMoby_1957_HelpdeskLady_00707940; /* 0x707940 */
extern pointer PTR_UpdateMoby_1138_00708f30; /* 0x708f30 */
extern pointer32 PTR_WeaponView_MobyUpdate_00707708; /* 0x707708 */
extern PlanetsPage g_PlanetsPage[19]; /* 0x7352b0 */
extern uint UINT_ARRAY_0096c1dc[2]; /* 0x96c1dc */
extern short g_AuxHeight; /* 0x966b8e */ /* type set in global_types.tsv */
extern short g_AuxWidth; /* 0x966b8c */ /* type set in global_types.tsv */
extern undefined4 g_BackpackMobyClass; /* 0x72105c */
extern int g_CardErrorSeen; /* 0xa20884 */ /* type set in global_types.tsv */
extern undefined4 g_ChallengeMode; /* 0x96c9fc */
extern char g_CollectedGoldBolts[72]; /* 0xa0ca34 */
extern undefined4 g_FrameCount; /* 0x96ca00 */
extern int g_GadgetBufferSlot; /* 0xa4daec: the gadget class buffer used last */ /* type set in global_types.tsv */
extern GameSettings g_GameSettings; /* 0x71fb38 */
extern int g_GsRamBase; /* 0x966ad4: where g_GsRamAlloc starts each frame */ /* type set in global_types.tsv */
extern bool g_JapaneseMode; /* 0x159c351 */
extern undefined4 g_Language; /* 0x969c74 */
extern Planets32 g_MaxBoltsPerLevel; /* 0x738608 */
extern undefined4 g_MenuScreen; /* 0xa52bb0 */
extern int g_MoviePlayState; /* 0x969cd4 */
extern undefined4 g_NpcBuffer; /* 0xa10918 */
extern u8 *g_PauseAllocTop; /* 0xa52ca8: next free byte of the pause menu's memory (invented name) */ /* type set in global_types.tsv */
extern u8 *g_PauseAllocTop2; /* 0xa52cac: the same for a second area (invented name) */ /* type set in global_types.tsv */
extern int g_SaveCurFile; /* 0x71fa38: the save list entry selected */ /* type set in global_types.tsv */
extern u8 *g_ScratchBuf; /* 0x902ec8: scratch memory shared by the drawing code (water uses it as a WaterStage) */ /* type set in global_types.tsv */
extern undefined4 g_SelectedLevel; /* 0xa206e4 */
extern char g_SkillPoints[32]; /* 0x96c08c */
extern int g_Vu1Reserve; /* 0x71fbd4: bytes kept free at the top of a chain buffer (pause.cpp sets 0x2000 or 0x1e000) */ /* type set in global_types.tsv */
extern undefined4 g_currentMenuPage; /* 0xa52bb4 */
extern Items g_goldWeaponsArray; /* 0x969ca8 */
extern undefined4 g_menuClosing; /* 0xa52bbc */
extern Moby * g_menuMobys[14]; /* 0xa52d60 */
extern undefined4 g_nextMenuPage; /* 0xa52bb8 */
extern undefined4 g_unclosableMenu; /* 0xa52cd0 */
extern undefined mainPage; /* 0x729a80 */
extern undefined4 pad_ConfirmButtonMask; /* 0x902ed4 */
extern undefined4 resumePage; /* 0xa52c9c */
extern undefined4 resumeScreen; /* 0xa52ca0 */

// ---- functions
void SECTION_HEADER_PAUSE(void);
undefined4 GetMenuScreen(void);
void LoadHudSequences(void);
void ResetMenuCamera(void);
void BeginMenu(int param_1);
void Menu_UpdateViewMtxIfChanged(void);
void Menu_InitStreamBuffers(int param_1);
void OpenPauseMenu(void);
void UpdatePause(void);
void DrawTVTextures(int param_1);
void DrawPauseMenu(char param_1);
void ____Unused_Pause_InitEntry9(undefined2 *param_1,undefined2 param_2,undefined4 param_3);
void InitMenuTextIds(void);
void EnterPauseState(void);
void FrontEnd_InitMenu(void);
void FrontEnd_ShutdownMenu(void);
void FrontEnd_UpdateMenu(void);
void FrontEnd_DrawMenu(void);
undefined4 GetMissionScreenshotPath(longlong param_1);
void PrepareChallengeModeSave(longlong param_1);
void MakeWholeSaveWithMode(char *param_1);
void ClearMenuQueue(void);
undefined8 PopMenuQueueEntry(void);
undefined8 LoadMenuRatchetModel (MobyInstance *param_1,undefined8 param_2,MobyInstance *param_3,int *param_4,int *param_5, int *param_6);
undefined8 PushMenuQueueEntry (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void STUB_0013fa14(...);
void SetFrameCount(void);
undefined8 MenuText_Update(int param_1);
undefined8 IconList_Update(int param_1);
undefined8 IconList_Draw(int param_1);
undefined8 SelectItemList_OnEnter(int param_1);
undefined8 BuildCheatsList(void);
undefined8 CameraSettings_OnEnter(void);
undefined8 CameraSettings_OnExit(void);
undefined8 MenuText_OnEnter(int param_1);
void GetMenuFadeColor(int param_1,undefined8 param_2,undefined8 param_3);
undefined8 MenuText_Draw(undefined8 param_1);
undefined8 UpdatePauseMenu(int param_1);
undefined8 DrawPauseStrings(int param_1);
undefined8 MenuButton_OnEnter(int param_1,int param_2);
undefined8 MenuButton_Update(int param_1);
undefined8 STUB_00142d60(...);
undefined8 MapPage_OnExit(void);
undefined8 MapPage_Update(int param_1);
undefined8 Missions_OnEnter(int param_1);
undefined8 Missions_Update(int param_1);
undefined8 SlotConfig_Update(int param_1);
void SlotConfig_OnEnter(int param_1);
void SlotConfig_OnExit(int param_1);
undefined8 SelectPackItemList_OnEnter(int param_1);
undefined8 MapPage_OnEnter(void);
undefined8 MenuText_OnEnterResetBuffers(void);
undefined8 SoundOptions_OnExit(void);
undefined8 SoundOptions_Update(int param_1);
undefined8 DrawSoundOptionsFrame(int param_1);
void SkillPoints_OnEnter(void);
undefined8 SkillPoints_OnExit(void);
void MusicWidget_OnEnter(int param_1);
undefined8 MusicWidget_OnExit(int param_1);
undefined8 MusicWidget_Update(int param_1);
undefined8 DrawSkillPointsFrame(undefined **param_1);
undefined8 MenuButton_Draw(int param_1);
undefined8 ____Pause_SetEntryByHeroType(int param_1);
undefined8 MenuHero_Draw(int param_1);
undefined8 STUB_001457b0(...);
undefined8 ItemView_OnEnter(int param_1);
undefined8 ItemView_OnExit(int param_1);
undefined8 ItemView_Update(int param_1);
undefined8 ItemView_Draw(int param_1);
void ItemView_SpinMobyUpdate(int param_1);
undefined8 WeaponView_Update(int param_1);
undefined8 WeaponView_Draw(int param_1);
void WeaponView_MobyUpdate(int param_1);
undefined8 PlanetInfo_Update(int param_1);
undefined8 PlanetInfo_Draw(int param_1);
undefined8 GoldBoltWidget_SpawnMoby(int param_1);
undefined8 GoldBoltWidget_DeleteMoby(int param_1);
undefined8 GoldBoltWidget_Update(int param_1);
undefined8 Update_FoundGBsShipMenu(int param_1);
void GoldBolt_SpinMobyUpdate(int param_1);
undefined8 ItemInfo_DrawCost(void);
undefined8 MapPage_Draw(void);
undefined8 MapMenu_DrawOptions(int param_1);
undefined8 ExitSelectPrompt_Draw(void);
undefined8 DrawMissionsFrame(int param_1);
undefined8 ImageWidget_Update(int param_1);
undefined8 ImageWidget_Draw(int param_1);
undefined4 Menu_AllocStreamBuffer(int param_1);
undefined8 ImageWidget_OnEnter(int param_1);
undefined8 ImageWidget_OnExit(int param_1);
undefined8 UpdateOptionsMenus(int param_1);
undefined8 ImageWidget_DrawWithText(int param_1);
undefined8 HelpControls_Update(int param_1);
undefined8 HelpControls_Draw(int param_1);
undefined8 MapPage_DrawOverlay(void);
undefined8 SlotConfig_Draw(int param_1);
undefined8 ConfirmDialog_Update(undefined8 param_1);
undefined8 ConfirmDialog_Draw(int param_1);
undefined8 CameraSettings_Update(undefined **param_1);
undefined8 DrawCameraSettingsFrame(undefined **param_1);
undefined8 GoldWeapons_OnEnter(void);
void Weapons_OnEnter(void);
undefined8 STUB_0014b478(...);
void PlanetList_OnEnter(int param_1);
undefined8 GalacticMap_Update(void);
undefined8 pause_DrawGalacticMapFrame(int param_1);
undefined8 PlanetSelect_Update(int param_1);
undefined8 MessageBox_OnEnter(int param_1);
undefined8 MessageBox_OnExit(int param_1);
void MessageBox_Update(void);
undefined8 MessageBox_Draw(void);
undefined8 LevelTips_OnEnter(int param_1);
undefined8 MenuCycle30_Update(int param_1);
undefined8 MenuCycle12_Update(int param_1);
undefined8 MenuIconText_Draw(int param_1);
undefined8 LevelFilter_Draw(int param_1);
undefined8 ShowScreenAfterDrekDefeat(void);
undefined8 SecretMenu_OnEnter(int param_1);
undefined8 SecretMenu_Update(undefined8 param_1);
undefined8 SecretMenu_Draw(int param_1);
undefined8 DrawUnusedCompletedGameFrame(void);
undefined8 Draw_GameCompletedFrame(int param_1);
undefined8 SaveSlotInfo_Draw(int param_1);
undefined8 SaveLoad_OnEnter(int param_1);
undefined8 SaveLoad_OnExit(int param_1);
undefined8 SaveGame_Update(int param_1);
undefined8 SaveLoad_Update2(int param_1);
undefined8 LoadGame_Update(int param_1);
undefined8 DrawSaveLoadFrame(int param_1);
undefined8 SpawnHeroInMenu_(int param_1);
undefined8 UpdateAfterEquipGadget(int param_1);
undefined8 MenuHero_Update(int param_1);
void STUB_00150654(...);
void STUB_00150658(...);
void MenuHero_MobyUpdateA(MobyInstance *param_1);
void MenuHero_MobyUpdateB(MobyInstance *param_1);
void MenuHero_MobyUpdateC(MobyInstance *param_1);
void MenuHero_MobyUpdateD(MobyInstance *param_1);
void MenuHero_MobyUpdateE(MobyInstance *param_1);
void MenuHero_MobyUpdateF(MobyInstance *param_1);
undefined8 Spawn_Moby1957_HelpdeskLady(int param_1);
undefined8 GameComplete_OnExit(int param_1);
undefined8 M1957_Update_GirlwadOnGameComplete(int param_1);
undefined8 GameComplete_Draw(int param_1);
void STUB_UpdateMoby_1957_HelpdeskLady(...);
