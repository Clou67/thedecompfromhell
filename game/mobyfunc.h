#pragma once
// game/mobyfunc.h
#include "types.h"
#include "game/collproc.h"

// ---- types
typedef enum MOBY_OCLASSES {
    RATCHET=0,
    BLARG_HEAVY_INTERCEPTOR_0008=8,
    CLANK_000A=10,
    VENDOR=11,
    VENDOR_GUY=12,
    BOLT=13,
    BOLT_HEXNUT=14,
    BOLT_STARNUT=15,
    BOLT_CIRCLENUT=16,
    MAGNETBOOTS_0012=18,
    ELEVATOR_0015=21,
    UNKNOWN_RELATED_TO_FIGHTER_JET=27,
    PLASMABOT_001C=28,
    BLARG_TURRET=29,
    MACHINEGUN_TURRET_001E=30,
    MINIBOMBER=31,
    FISH=35,
    BLARG_GUNNER=36,
    TAXI_PLATFORM_0026=38,
    METAL_DETECTOR_0027=39,
    ROCKET_0029=41,
    PLATFORM_002B=43,
    SENTRY_BOT=44,
    ROCKET_0031=49,
    ROCKET_0032=50,
    SEEKER=52,
    SUCKCANNON_0036=54,
    HANGAR_DOOR_0037=55,
    ROBOSQUAWKER=63,
    FAN_0042=66,
    SUCKCANNON_0044=68,
    FIGHTER_JET_0045=69,
    WRENCH_0047=71,
    MINE_004A=74,
    RED_SHIP_1=75,
    MINE_004D=77,
    SPIKEBALL=78,
    SCENERY_SHIP=79,
    TRESPASSER_0050=80,
    ROCKET_0052=82,
    MINE_0053=83,
    HOVERBOARD_0054=84,
    BUTTERFLY=85,
    CLANK_0057=87,
    BOB=90,
    GATE_005C=92,
    GATE_005D=93,
    BLARG_SPACE_FIGHTER_0065=101,
    BRIDGE_0068=104,
    BRIDGE_006A=106,
    WRENCH_006E=110,
    BLARG_SPACE_FIGHTER_006F=111,
    EXPLOSION_0070=112,
    THE_GUY=114,
    WHITE_SHIP=115,
    RED_SHIP_2=116,
    YELLOW_SHIP=117,
    TRUCK_SHIP=118,
    GREEN_SHIP_0077=119,
    BEIGE_SHIP=120,
    SPIDERBOT=123,
    PURPLE_SHIP_0084=132,
    AMOEBOID=133,
    GOLD_DEVASTATOR_MISSILE=153,
    MOBY_OCLASSES__DEVASTATOR=157,
    MOBY_OCLASSES__VISIBOMB=163,
    DRILL_00A4=164,
    MOBY_OCLASSES__BLASTER=168,
    FORCEFIELD_TOWER=170,
    VISIBOMB_MISSILE=172,
    MAGNETBOOTS_00AD=173,
    TAUNTER_00AF=175,
    MOBY_OCLASSES__PYROCITOR=176,
    MOBY_OCLASSES__TESLA_CLAW=177,
    MOBY_OCLASSES__WALLOPER=180,
    DOOR_00B6=182,
    DOOR_00B7=183,
    MORPH_O_RAY_00B9=185,
    DOOM_BOT=186,
    BLARG_SHIP_00BB=187,
    TRESPASSER_00BC=188,
    MOBY_OCLASSES__MINE_GLOVE=190,
    MOBY_OCLASSES__BOMB_GLOVE=192,
    CHOMPER_00C1=193,
    GRINDBOOT=195,
    DOOR_00C4=196,
    DOOR_00C5=197,
    MOBY_OCLASSES__DECOY=203,
    DEVESTATOR_AMMO=204,
    SWINGSHOT_00D0=208,
    SWINGSHOT_HOOK=209,
    PLASMABOT_00D3=211,
    ASTEROID_00D4=212,
    TESLA_CLAW_AMMO=213,
    PYROCITOR_AMMO=214,
    BIG_AXEBOT=217,
    CONSTRUCTION_ARM=221,
    VISIBOMB_AMMO=222,
    GLOVE_OF_DOOM_AMMO=223,
    AMMOCRATE_00E0=224,
    MINE_GLOVE_AMMO=225,
    BOMB_GLOVE_AMMO=226,
    JET_FIGHTER_HEALTH_CRATE_00E4=228,
    MOBY_OCLASSES__GLOVE_OF_DOOM=229,
    BOMB_00E6=230,
    HELICOPTER_00E9=233,
    PLATFORM_00F0=240,
    ELEVATOR_00F4=244,
    BOMB_00F8=248,
    PLASMABOT_HATCH=250,
    SCOUTBOT=252,
    CANNONBALL_TANK_00FD=253,
    ROCKET_0100=256,
    ASTEROID_0107=263,
    ASTEROID_0108=264,
    ASTEROID_0109=265,
    ASTEROID_010A=266,
    ASTEROID_010B=267,
    MORPH_O_RAY_CHICKEN=270,
    TURRET_0110=272,
    ANTENNA_0112=274,
    DISPLAY=276,
    BOLT_CRANK=280,
    BOMB_0119=281,
    MINER=282,
    DRILL_011F=287,
    BLARG_TROOPER_0126=294,
    ROCKET_0127=295,
    CONVEYOR_BELT_0128=296,
    FRED_012A=298,
    GADGEBOT_SPAWN_CONTAINER=302,
    GADGEBOT_SPAWN_PAD=303,
    GOLD_WEAPON_CASE=304,
    PLATFORM_0135=309,
    FAN_SHROUD=310,
    TELEPORTER=318,
    BLARG_HELICOPTER_0146=326,
    EDWINA=328,
    TRACKDRIVE_LEFT=331,
    TRACKDRIVE_RIGHT=332,
    BLARG_BOMBTHROWER=333,
    HELICOPTER_0150=336,
    CRANE_ARM=339,
    CIRCULAR_SAW_ENEMY=340,
    HYDRODISPLACER_PAD=341,
    BLARG_GUN_0158=344,
    DREKS_FLEET_TURRET=347,
    NANOTECH_CRATE_FRAGMENT_015C=348,
    NANOTECH_CRATE_FRAGMENT_015D=349,
    GADGEBOT_TELEPOT_PAD=351,
    GATE_0161=353,
    METAL_CRATE_FRAGMENT_0162=354,
    METAL_CRATE_FRAGMENT_0163=355,
    METAL_CRATE_FRAGMENT_0164=356,
    CRATE_FRAGMENT_0165=357,
    CRATE_FRAGMENT_0166=358,
    CRATE_FRAGMENT_0167=359,
    HANGAR_DOOR_0168=360,
    EXPLOSIVE_CRATE_FRAGMENT_016B=363,
    EXPLOSIVE_CRATE_FRAGMENT_016C=364,
    WATER_RESERVOIR=384,
    QWARKS_STARFIGHTER_PART_0184=388,
    QWARKS_STARFIGHTER_PART_0185=389,
    QWARKS_STARFIGHTER_PART_0186=390,
    QWARKS_STARFIGHTER_PART_0187=391,
    QWARKS_STARFIGHTER_PART_0188=392,
    QWARKS_STARFIGHTER_PART_0189=393,
    QWARKS_STARFIGHTER_PART_018A=394,
    QWARKS_STARFIGHTER_PART_018B=395,
    QWARKS_STARFIGHTER_PART_018C=396,
    QWARKS_STARFIGHTER_PART_018D=397,
    QWARKS_STARFIGHTER_PART_018E=398,
    QWARKS_STARFIGHTER_PART_018F=399,
    QWARKS_STARFIGHTER_PART_0190=400,
    FORCEFIELD_0194=404,
    FORCEFIELD_0195=405,
    EDWINAS_WELDING_SHIELD=406,
    PERSUADER_0197=407,
    SENTRY_BOT_ALARM=408,
    ROCKET_0199=409,
    GIANT_CLANK=419,
    SHUTTLE_01A8=424,
    BOMB_01A9=425,
    BLARG_TROOPER_01AB=427,
    FEATHER=428,
    EUDORA_BRIDGE=432,
    MOBY_OCLASSES__SONIC_SUMMONER=433,
    PLATFORM_BOOSTER=434,
    ROCKET_01B3=435,
    SAND_MOUSE=437,
    HOVERBOARD_01B7=439,
    HELIPACK_01BE=446,
    QUARK_01BF=447,
    BOLT_THIEF_01C4=452,
    R_Y_N_O_01C6=454,
    SPAWNER_01C7=455,
    ROCKET_01C9=457,
    ROCKET_01CA=458,
    BIRDBOT=459,
    QWARKS_STARFIGHTER=461,
    SHRUB=462,
    SNOW_PLOW=466,
    ROCKET_01D6=470,
    CONVEYOR_BELT_01D7=471,
    SHORT_LOG=476,
    LONG_LOG=477,
    THIN_LOG=478,
    DRONE=479,
    GRAB_HELICOPTER=480,
    FLOATING_PLATFORM_01E1=481,
    HOLOGUISE_01E3=483,
    TRANSPORT_SHIP=484,
    BALL_SHIP_1=485,
    BALL_SHIP_2=486,
    CIRCULAR_SAW_SHIP=488,
    CHAINSAW_SHIP=490,
    ULTRA_MECH_UNLIMITED=491,
    BOMBTHROWER_GRASS_01EC=492,
    TANK_SHIP=493,
    LOG_SHIP_1=494,
    LOG_SHIP_2=495,
    LOG_SHIP_CARRIER=498,
    GUN_01F3=499,
    BOLT_CRATE=500,
    NANOTECH_CRATE=501,
    METAL_CRATE=502,
    EXPLOSIVE_CRATE=505,
    AMMO_CRATE=511,
    PURPLE_SHIP_0211=529,
    VELDIN_SHIP=530,
    GREEN_SHIP_0213=531,
    RED_SHIP=532,
    PURPLE_SHIP_0215=533,
    TEST_DUMMY=541,
    BOMB_0221=545,
    WALL_BUTTON=546,
    LOG_SHIP_END=555,
    TEST_DUMMY_ON_HOVERBOARD=556,
    SHUTTLE_022D=557,
    DECOY_GLOVE=562,
    WOODCUT_BOT=563,
    ROCKET_0234=564,
    ROCKET_0237=567,
    MINE_0238=568,
    AXE=570,
    SLIME_PARENT=572,
    ROBOT_DOG_023D=573,
    BLARG_COMMANDER_023E=574,
    PECKBOT=577,
    MINE_LAYER=578,
    SANDSHARK_0244=580,
    THRUSTER_PACK_LOCK_GREEN=583,
    YELLOW_PLATFORM=584,
    METAL_DETECTOR_0249=585,
    THRUSTER_PACK_LOCK_RED=586,
    FLOATING_PLATFORM_024B=587,
    CLANK_BACKPACK=601,
    SANDMOUSE_HOUSE=604,
    METAL_DETECTOR_SPOT_MESHLESS=605,
    HELIPACK_025F=607,
    THRUSTERPACK=608,
    HYDROPACK=609,
    YELLOW_ENEMY=612,
    UNKNOWN_USUALLY_IN_RIVERS=613,
    MAPPER=614,
    TRESSPASSER_PAD=615,
    ARMOR_MAGNETIZER=618,
    MOBY_OCLASSES__PDA=619,
    EXTERMIBOT=623,
    EXTERMITANK=625,
    MINE_0273=627,
    BLARG_HELICOPTER_0277=631,
    TREE=633,
    HOLOGUISE_027A=634,
    BLARG_ELITE_COMMANDO=638,
    CAVE_DOOR=641,
    LEAF=642,
    MINE_0283=643,
    NANOTECH_UPGRADE_CAN=645,
    DOOR_0287=647,
    TEST_DUMMY_DOOR=650,
    ELEVATOR_028B=651,
    ESCALATOR=652,
    ESCALATOR_END=653,
    BULLDOZER=656,
    BOMB_0291=657,
    FIGHTER_JET_0294=660,
    DUMP_TRUCK=662,
    PLATFORM_0298=664,
    DOOR_HALF=665,
    STATIONARY_SHIP=666,
    MOBY_OCLASSES__SANDSHARK_SPAWNER=668,
    GRAB_CRANE=675,
    SANDSHARK_02AA=682,
    ELEVATOR_02AD=685,
    BRIDGE_02AF=687,
    BOMBER_JET=688,
    LIFTCAR=690,
    PERSUADER_02B4=692,
    WATER_LILY=695,
    ROCK_02B8=696,
    ROCK_02B9=697,
    ROCK_02BA=698,
    FALLING_ROCK=701,
    PISTON_PLATFORM=703,
    ROCK_FORMATION=704,
    FAN_02C1=705,
    FAN_PLATFORM=706,
    PLATFORM_02C3=707,
    BRIDGE_PIECE_1=709,
    BRIDGE_PIECE_2=710,
    BRIDGE_PIECE_3=711,
    TAXI_02C8=712,
    TRANSPORT_POD=713,
    PISTON_PLATFORM_2=715,
    SKID_MCMARX=717,
    ELEVATOR_FRAME=718,
    LIGHT=719,
    SHIP_WRECK=720,
    GREEN_LEAVES=724,
    BLUE_LEAVES=725,
    NOVALIS_ELEVATOR=726,
    POD_PLATFORM_RIGHT=727,
    POD_PLATFORM_LEFT=728,
    DESTROYABLE_CAVE_WALL=729,
    AGNOGG_SHIP_FRONT=730,
    AGNOGG_SHIP_BACK=731,
    CRANE=732,
    ROCKET_LAUNCHER=733,
    PLATFORM_02DE=734,
    ROCKET_DOOR1=735,
    ROCKET_DOOR2=736,
    DOOR_FRAME=742,
    TRESSPASSER_DOOR1=743,
    TRESSPASSER_DOOR2=744,
    BRIDGE_HALF=746,
    INNER_SUPPORT=747,
    VELDIN_FROG=749,
    INFOBOT=750,
    GADGETRON_STAND=753,
    GREEN_MUSHROOM=754,
    SANDSHARK_EGG=755,
    SWINGSHOT_PULL=758,
    PARTICLE_SPAWNER_SMOKE_FIRE=760,
    ROCKS=762,
    STATUE_02FD=765,
    PLANT_02FE=766,
    PLANT_02FF=767,
    DOOR_LEFT=768,
    DOOR_RIGHT=769,
    HELIPACK_0302=770,
    PLUMBER_0306=774,
    SPLASH_EFFECT=775,
    PIPE_030A=778,
    BROKEN_PIPE_030B=779,
    BRIDGE_PLATFORM=780,
    CRANE_TOP=781,
    SKIDDS_AGENT=786,
    SKIDD=788,
    LIFTCAR_POLE=789,
    SHIP_REAR=790,
    LIFTCAR_PLATFORM=792,
    BLIMP=795,
    SWINGSHOT_SWING=803,
    SPAWN_POINT=805,
    NANOTECH_BALL=806,
    FLOATING_PLATFORM_032A=810,
    AGNOGG_BUCKWASH=811,
    BOX=812,
    BEEHIVE=815,
    TAXI_0330=816,
    STATUE_0331=817,
    ROCKET_0333=819,
    TRAIN_LOCOMOTIVE=822,
    LAMP_0337=823,
    ROBO_SHACK_SIGN=825,
    FROG=827,
    BUTTON_033E=830,
    WATER_033F=831,
    ROCKET_0341=833,
    CLANK_CUTSCENE_TRIGGER=834,
    MINE_0343=835,
    ELECTRIC_GATE=838,
    BROKEN_BUTTON=842,
    DOOR_034B=843,
    DRAIN_COVER=844,
    UNDERWATER_GATE=846,
    SUCKCANNON_0351=849,
    QWARK=851,
    BRIDGE_PART=852,
    BRIDGE_PILE=853,
    SEWER_PIPE_WITH_SLUDGE=855,
    GADGEBOT_0359=857,
    TEST_DUMMY_BOMB_GLOVE=863,
    MEDIUM_SLIME=865,
    SMALL_SLIME=866,
    MOVING_PLATFORM_SMALL=868,
    BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR=871,
    TEST_DUMMY_PYROCITOR=876,
    ELEVATOR_WITH_BUTTON=877,
    BOMB_0372=882,
    TRAIN_CARRIAGE_0373=883,
    TEST_DUMMY_WALLOPER=884,
    TIMED_ACTIVATION_PADS=886,
    HELGA=890,
    HYDRODISPLACER_PUZZLE_DOOR=893,
    GRILL_DOOR=895,
    CEILING=898,
    WATER_0386=902,
    PLATFORM_0387=903,
    MOVING_PLATFORM_MEDIUM=905,
    JET_038C=908,
    BIG_AL=909,
    TOXIC_GAS_VENT=911,
    PURPLE_SHIP_0391=913,
    ROBOT_QWARK=914,
    FRED_1=915,
    FRED_2=916,
    FRED_3=917,
    HOVERBOARD_LADY=918,
    QUARKS_BOUNCER=919,
    QUARK_0398=920,
    JET_0399=921,
    ROCKET_039A=922,
    BOLT_THIEF_039B=923,
    SAM=924,
    SHADY_SALESMAN=925,
    MOVING_PLATFORM_LARGE=928,
    MINE_03A5=933,
    BOMB_03AA=938,
    BOMBTHROWER_GRASS_03AB=939,
    WATER_03AD=941,
    WATER_03AF=943,
    WATER_03B0=944,
    WATER_03B4=948,
    WATER_03B5=949,
    WATER_03B6=950,
    WATER_03B8=952,
    WATER_03BA=954,
    WATER_03BB=955,
    WATER_03BE=958,
    UNKNOWN_PLANE=982,
    TELEVISION=984,
    SWINGSHOT_03E0=992,
    R_Y_N_O_03E1=993,
    GARAGE_DOOR=997,
    TAXI_03E6=998,
    PLATINUM_ZOOMERATOR=1002,
    TRESSPASSER=1005,
    BLASTER_AMMO=1006,
    CAMERA_OBJECT=1007,
    TAXI_03F4=1012,
    DOOR_03F7=1015,
    HYDRODISPLACER_03F8=1016,
    CIRCULAR_DOOR_PART=1021,
    BLARG_PARATROOPER=1023,
    BLARG_GUN_0401=1025,
    PLATFORM_0404=1028,
    BUTTON_0407=1031,
    PLATFORM_0409=1033,
    ROCKET_040A=1034,
    CIRCULAR_ELECTRIC_GATE=1035,
    ENERGY_SPHERE_HOLDER=1038,
    ENERGY_SPHERE_0410=1040,
    BOMB_O_MATIC=1041,
    MUSHROOM_UNDERSIDE=1042,
    ALIEN_SNAPPER=1048,
    ALIEN_QUEEN=1051,
    BRIDGE_041C=1052,
    WARSHIP_DOOR_HIGH_PART=1054,
    WARSHIP_DOOR_LOW_PART=1055,
    TRANSPORT_POD_RING=1056,
    TELEPORT_TUBE_0421=1057,
    TELEPORT_TUBE_0422=1058,
    SHARKIGATOR=1059,
    RED_ORB=1060,
    CIRCULAR_ELEVATOR_WITH_BUTTON=1061,
    FROG_SPAWNER=1066,
    BLARG_SPACE_COMMANDO_042C=1068,
    QWARK_STATUE=1071,
    BOAT=1075,
    ALIEN_SNAPPER_CAGE=1083,
    ALIEN_SNAPPER_CAGE_DAMAGED=1084,
    WARSHIP_TOP=1091,
    WARSHIP_WING_0444=1092,
    WARSHIP_GUNNER_0445=1093,
    WARSHIP_GUNNER_0446=1094,
    WARSHIP_BASE=1095,
    WARSHIP_THING=1096,
    WARSHIP_FRONT=1097,
    WARSHIP_WING_044A=1098,
    QUARKS_TRAILER=1099,
    UPPER_DOOR_044D=1101,
    LOWER_DOOR_044E=1102,
    DESTROYABLE_SHIP_LEFT_WING=1103,
    FRED_0451=1105,
    BLARGIAN_SNAGGLEBEAST=1106,
    SHUTTLE_0455=1109,
    MINE_0456=1110,
    MINE_0458=1112,
    PLATFORM_045D=1117,
    RED_BUTTON=1118,
    MOBY_OCLASSES__SUCK_CANNON=1120,
    ELECTRIC_GATE_POLES=1123,
    GLASS=1125,
    MACHINEGUN_TURRET_0466=1126,
    BATALIA_COMMANDO=1130,
    GOLD_BOLT=1134,
    TELEPORT_PAD=1135,
    FRAME=1138,
    HOVERBOARD_RING=1139,
    HOVERBOARD_BOOST_PAD=1140,
    ELEVATOR_0475=1141,
    VENDOR_ORB=1143,
    BATALIA_DESERTER=1144,
    BUTTON_COVER=1145,
    HELIPACK_047A=1146,
    TAUNTER_047C=1148,
    ELEVATOR_047E=1150,
    ELEVATOR_047F=1151,
    ROBOT_DOG_0489=1161,
    GEARS=1162,
    ROBOT_HAND=1163,
    ROBOT_TORSO=1164,
    WHEEL=1165,
    ROBOT_FOOT=1166,
    REFUELING_STATION=1172,
    CANNONBALL_TANK_0495=1173,
    SEESAW_PLATFORM=1178,
    THRUSTER_PACK_LOCK=1179,
    AIRSHIP_PART_049D=1181,
    AIRSHIP_PART_049E=1182,
    AIRSHIP_PART_049F=1183,
    AIRSHIP_PART_04A0=1184,
    AIRSHIP_PART_04A1=1185,
    AIRSHIP_PART_04A2=1186,
    AIRSHIP_PART_04A3=1187,
    AIRSHIP_PART_04A4=1188,
    AIRSHIP_PART_04A5=1189,
    LIEUTENANT=1190,
    EXPLOSION_04A8=1192,
    ROBOT_FACE=1195,
    SCREAMER=1196,
    DARTER=1199,
    FIGHTER_JET_DAMAGED=1200,
    TURRET_04B1=1201,
    TOXIC_CRAB=1202,
    ROBOT_STATUE=1205,
    CONSTRUCTORBOT=1208,
    UNDERWATER_RING=1209,
    TRAIN_CARRIAGE_04BA=1210,
    BACKGROUND_SHIP_1=1212,
    BACKGROUND_SHIP_2=1213,
    AMMOCRATE_04C2=1218,
    JET_FIGHTER_HEALTH_CRATE_04C4=1220,
    PROPELLER=1222,
    BLARG_SHIP_04CD=1229,
    PSY_TCOPUS=1231,
    ROCKET_04D1=1233,
    ANTENNA_04D7=1239,
    JET_FIGHTER=1242,
    MICROPHONE=1245,
    PUFFOID=1246,
    DREK=1249,
    CONVEYOR_BELT_04E2=1250,
    HYDRODISPLACER_04E3=1251,
    POISON_VESSEL_04E9=1257,
    POISON_VESSEL_04ED=1261,
    BLARG_SPACE_COMMANDO_04EE=1262,
    OIL_TANKER_FRONT=1264,
    OIL_TANKER_PART=1265,
    HOVEN_TURRET=1267,
    MINE_04F5=1269,
    ELEVATOR_04F6=1270,
    PLANETBUSTER_MAXIMUS_PART_04F8=1272,
    PLANETBUSTER_MAXIMUS_PART_04F9=1273,
    PLANETBUSTER_MAXIMUS_PART_04FA=1274,
    PLANETBUSTER_MAXIMUS_PART_04FB=1275,
    PLANETBUSTER_MAXIMUS_PART_04FC=1276,
    PLANETBUSTER_MAXIMUS_PART_04FD=1277,
    PLANETBUSTER_MAXIMUS_PART_04FE=1278,
    PLANETBUSTER_MAXIMUS_PART_04FF=1279,
    PLANETBUSTER_MAXIMUS_PART_0500=1280,
    HOMING_MINE_SPAWNER=1281,
    DOOR_0502=1282,
    PLUMBER_0503=1283,
    BARRIER_0505=1285,
    BARRIER_0506=1286,
    BARRIER_0507=1287,
    BARRIER_0508=1288,
    MOBY_OCLASSES__O2_MASK=1289,
    MOBY_OCLASSES__PILOTS_HELMET=1290,
    ENERGY_SPHERE_0511=1297,
    DISPLAY_DAMAGED_0512=1298,
    DISPLAY_DAMAGED_0513=1299,
    DISPLAY_DAMAGED_0514=1300,
    GADGEBOT_TELEPORTER_ENTRANCE=1301,
    GADGEBOT_ENTRANCE=1302,
    BLARG_SHIP_0527=1319,
    ICE_CUBE=1322,
    SWINGSHOT_SKILL_POINT_MANAGER=1324,
    NANOTECH_UPGRADE_VENDOR=1326,
    UNKNOWN_GADGETRON_RATCHET_TELEPORT_LOCATION=1341,
    GUN_0542=1346,
    MORPH_O_RAY_054A=1354,
    DREK_FIGHT_MISSILE=1355,
    ARMED_TRANSPORT=1356,
    DOOR_054F=1359,
    DOOR_0550=1360,
    DOOR_0551=1361,
    DOOR_0552=1362,
    DOOR_0553=1363,
    DOOR_0554=1364,
    CLANK_0555=1365,
    DOOR_0557=1367,
    DOOR_0559=1369,
    BLARG_COMMANDER_055B=1371,
    DOOR_055C=1372,
    DOOR_055D=1373,
    HELP_DESK_LADY=1377,
    FIGHTER_JET_0563=1379,
    MAGNET_ELEVATOR=1380,
    ROBOT_DOG_0566=1382,
    GUN_0567=1383,
    HYDRODISPLACER_056A=1386,
    BOLT_GRABBER=1388,
    BOLT_THIEF_0579=1401,
    TAXI_0582=1410,
    ASTEROID_0584=1412,
    BUTTON_0588=1416,
    BLARG_HEAVY_INTERCEPTOR_0589=1417,
    GATE_058D=1421,
    DREK_FINAL_BOSS_ROBOT=1422,
    GATE_0590=1424,
    CODEBOT=1428,
    CODEBOT_SLOT=1430,
    NANOTECH_CAN=1433,
    DEPLANETIZER_GUN_059A=1434,
    R_Y_N_O_AMMO=1438,
    GRINDRAIL_GATE_059F=1439,
    VELDIN_ROBOT_ENEMY=1440,
    GRINDRAIL_GATE_05A1=1441,
    GRINDRAIL_BUTTON=1442,
    GRINDRAIL_BARRIER=1443,
    CHOMPER_05A5=1445,
    ULTRA_MECH_SCIENTIST=1446,
    DRONE_DEVICE_AMMO=1447,
    SHUTTLE_05A8=1448,
    DECOY_AMMO=1449,
    GIANT_CLANK_PAD_05AB=1451,
    ROCKET_TANK=1454,
    GADGETRON_CEO=1455,
    GOLD_BOMB_GLOVE=1456,
    GOLD_PYROCITOR=1457,
    GOLD_BLASTER=1458,
    GOLD_GLOVE_OF_DOOM=1459,
    GOLD_MINE_GLOVE=1460,
    GOLD_DEVASTATOR=1461,
    GOLD_DECOY_GLOVE=1462,
    GOLD_TESLA_CLAW=1463,
    GOLD_SUCK_CANNON=1464,
    GOLD_MORPH_O_RAY=1465,
    MORPH_O_RAY_05BC=1468,
    TAXI_PLATFORM_05C2=1474,
    ROCKET_05C3=1475,
    CAMERA=1478,
    HOLOGUISE_05E5=1509,
    LAMP_05E7=1511,
    LAMP_DESTROYED=1514,
    CLANKS_SHIP=1515,
    CLANKS_SHIP_CRASHED=1520,
    LOWER_DOOR_05FB=1531,
    UPPER_DOOR_05FC=1532,
    PTERODACTYL=1564,
    DEPLANETIZER_GUN_0620=1568,
    THRUSTER_PACK_BACKPACK=1630,
    FAKE_BOLTCRATE=1635,
    MUSHROOM=1650,
    COMPUTER_WITH_DAN_JOHNSON=1655,
    COMPUTER_DAMAGED=1656,
    COMPUTER_PART_DAMAGED_0679=1657,
    COMPUTER_PART_DAMAGED_067A=1658,
    COMPUTER_PART_DAMAGED_067B=1659,
    ORANGE_LIGHT=1660,
    ORANGE_LIGHT_DAMAGED_067D=1661,
    ORANGE_LIGHT_DAMAGED_067E=1662,
    ROBOT_HEAD=1663,
    GREEN_LIGHT_0680=1664,
    GREEN_LIGHT_0681=1665,
    POWER_UNIT=1672,
    POWER_UNIT_DAMAGED_0689=1673,
    POWER_UNIT_DAMAGED_068A=1674,
    POWER_UNIT_DAMAGED_068B=1675,
    POWER_UNIT_DAMAGED_068C=1676,
    SEASHELL=1686,
    SPAWNER_LEG_DAMAGED_06C5=1733,
    SPAWNER_LEG_DAMAGED_06C6=1734,
    SPAWNER_TOP_DAMAGED=1735,
    ROBOT_DOG_JAW_DAMAGED=1742,
    ROBOT_DOG_HEAD_DAMAGED=1743,
    BLARG_COMMANDER_WEAPON_DAMAGED=1744,
    BLARG_COMMANDER_SHOE_DAMAGED=1746,
    SHUTTLE_06E6=1766,
    RED_PLANT=1781,
    GREEN_PLANT=1782,
    HOVERBOARD_06FA=1786,
    BLARG_SHIP_070D=1805,
    TALL_SHROOM=1813,
    SANDMOUSE=1818,
    WHITE_FLOWER_071B=1819,
    WHITE_FLOWER_071C=1820,
    ELEVATOR_0722=1826,
    LIGHTPOST=1827,
    LIGHTPOST_BOTTOM_DAMAGED=1828,
    LIGHTPOST_TOP_DAMAGED=1829,
    LIGHTPOST_SPHERE_DAMAGED=1830,
    PIPE_072A=1834,
    BROKEN_PIPE_072B=1835,
    FIREPLUG=1840,
    BLARG_SHIP_0733=1843,
    LAMP_0739=1849,
    LAMP_DAMAGED_073A=1850,
    LAMP_0743=1859,
    LAMP_DAMAGED_0744=1860,
    LAMP_0746=1862,
    LAMP_DAMAGED_0747=1863,
    GADGETRON_SIGN_074F=1871,
    SPAWNER_075D=1885,
    SPAWNER_EGG=1886,
    GADGETRON_SIGN_0763=1891,
    GIANT_CLANK_PAD_076B=1899,
    GOLD_DECOY=1900,
    GADGEBOT_0772=1906,
    ROBOT_ARM_078D=1933,
    ROBOT_ARM_078E=1934,
    HELPDESK_LADY_CREDITS=1957,
    UNDERWATER_DOOR=1958,
    VELDIN_BARRIER=1964,
    SHIP=1973,
    STALACTITE=2103,
    CAVE_ROCK=2104,
    CAVE_ROCK_GROUP=2105,
    CAVE_ROOF=2106
} MOBY_OCLASSES;

/* An extra animation playing on part of a moby's skeleton (MB_AllocAnimLayer; a pool of 6 at
   0xa2c440, linked from MobyInstance.pAnimationLayers). The frame fields mirror the moby's own. */
typedef struct AnimLayer {
    s16 joint;               /* 0x00  the joint the layer starts at */
    u16 jointCount;          /* 0x02 */
    u8 inUse;                /* 0x04 */
    u8 stepped;              /* 0x05  set by MB_UpdateAnimLayer: 1 moved a frame, 3 also wrapped */
    u8 prevFromBuffer;       /* 0x06  build the previous frame into prevFrameData */
    u8 curFromBuffer;        /* 0x07  build the current frame into curFrameData */
    float weight;            /* 0x08  ProcessAnimLayers blends the layer in by this */
    u8 *jointMap;            /* 0x0c */
    void *jointBuf;          /* 0x10  0x1500 bytes */
    struct MobyClass *pClass;     /* 0x14  the moby's class */
    struct MobyClass *animClass;  /* 0x18  the class the animation comes from (set by the caller) */
    struct AnimLayer *next;  /* 0x1c */
    u8 prevFrame;            /* 0x20 */
    u8 curFrame;             /* 0x21 */
    u8 prevSeq;              /* 0x22 */
    u8 curSeq;               /* 0x23 */
    float blend;             /* 0x24  0..1 from prevFrame to curFrame */
    float speed;             /* 0x28 */
    float frameScale;        /* 0x2c  blend per unit of speed */
    u8 _pad30[8];
    void *prevFrameData;     /* 0x38 */
    void *curFrameData;      /* 0x3c */
} AnimLayer;
typedef char AnimLayer_size_check[sizeof(AnimLayer) == 0x40 ? 1 : -1];

/* a moby class (MobyClasses[mClass]); DL's MobyClass with RC1's sequence table at 0x48. Field
   names are Ghidra's / DL's. */
typedef struct MobyClass {
    void *packets;           /* 0x00 */
    u8 pakcet_cnt_0;         /* 0x04  (sic) */
    u8 packet_cnt_1;         /* 0x05 */
    u8 metal_cnt;            /* 0x06 */
    u8 metal_ofs;            /* 0x07 */
    u8 joint_cnt;            /* 0x08 */
    u8 pad;                  /* 0x09 */
    u8 packet_cnt_2;         /* 0x0a */
    u8 team_texs;            /* 0x0b */
    u8 seq_cnt;              /* 0x0c */
    u8 sound_cnt;            /* 0x0d */
    u8 lod_trans;            /* 0x0e */
    u8 shadow;               /* 0x0f */
    u16 *collision;          /* 0x10 */
    void *skeleton;          /* 0x14 */
    void *common_trans;      /* 0x18 */
    void *anim_joints;       /* 0x1c  read as a table of joint data pointers (index joint + 1)
                                    and, for an AnimLayer's animClass, as a byte map at +4 */
    void *gif_usage;         /* 0x20 */
    float gScale;            /* 0x24 */
    void *SoundDefs;         /* 0x28 */
    char bangles;            /* 0x2c */
    char mip_dist;           /* 0x2d */
    s16 corncob;             /* 0x2e */
    BSphere bSphere;         /* 0x30 */
    u32 glow_rgba;           /* 0x40 */
    u16 mode_bits;           /* 0x44  MobyModeBit flags every instance starts with */
    char type;               /* 0x46 */
    char mode_bits2;         /* 0x47 */
    MobySeq *seqs[];         /* 0x48  seq_cnt of them */
} MobyClass;

/* a moby (game object) instance, 0x100 bytes; Ghidra's struct with the two 16-bit enum fields
   (modeBits, oClass) as u16 so the layout matches the binary */
struct MobyInstance {
    struct BSphere bSphere;
    struct Vec4 pos;
    u8 state;
    s8 group;
    u8 mClass;
    s8 alpha;
    struct MobyClass *pClass;
    void *pChain;
    float scale;
    char updateDistance;
    char enabled;
    short drawDistance;
    u16 modeBits;                /* 0x34  MobyModeBit flags (16 bits in the binary; a C enum would be 32) */
    ushort occlIndex;
    union {
        struct {
            uint color;          /* 0x38 */
            uint light;          /* 0x3c */
        };
        u64 freeTime;            /* 0x38  while the slot is free: worldUpdateTime it can be reused at */
    };
    struct Vec4 rotation;
    char previousAnimationFrame;
    char animationFrame;
    u8 updateId;
    u8 animationId;
    float animationBlend;
    float unk58;
    float frameSpeed;
    void *pAnimationLayers;
    struct Manipulator *pManipulators;
    void *pPreviousAnimationData;
    void *pCurrentAnimationData;
    char field43_0x70;
    char unk71;
    char unk72;
    char field46_0x73;
    void *pUpdate;
    void *pVar;
    char soundDesired;           /* 0x7c  the sound the current sequence loops, -1 none (DL name) */
    char soundChannel;           /* 0x7d  its channel, -1 none (DL name) */
    char trigsCnt;               /* 0x7e  the current sequence's trigsCnt */
    char shadow;
    int colorManipulator;
    int unk84;
    int unk88;
    char field56_0x8c;
    char field57_0x8d;
    char field58_0x8e;
    char field59_0x8f;
    uint glowRgba;               /* 0x90  from MobyClass.glow_rgba */
    ushort *collision;
    float *collisionMesh;
    int collQueryStamp; /* = CollOutput.collCount of last coll query that tested this moby */
    union {
        uint collCount;
        struct {
            s8 gridMinX;         /* 0xa0  the moby grid cells it is in (DL grid_min_x...) */
            s8 gridMinY;
            s8 gridMaxX;
            s8 gridMaxY;
        };
    };
    s8 damage;
    char previousAnimationId;
    u16 oClass;                  /* 0xa6  MOBY_OCLASSES */
    int handle;                  /* 0xa8  index << 16 (guess) */
    uint index;                  /* 0xac  slot in g_MobyInstance */
    char levelFlagIdx;
    char field74_0xb1;
    ushort uid;
    char field76_0xb4;
    char field77_0xb5;
    char field78_0xb6;
    char field79_0xb7;
    struct MobyInstance *field80_0xb8; /* Type 'Moby *' was deleted */
    char setByGroup;
    char unkbd;
    char field83_0xbe;
    char field84_0xbf;
    struct Mtx4 transform;
};
typedef char MobyInstance_size_check[sizeof(struct MobyInstance) == 0x100 ? 1 : -1];

/* One frame of an animation sequence. The joint data follows the 16-byte header, 8 bytes per
   joint (only the header fields this code touches are named). */
typedef struct MobyFrame {
    float length;            /* 0x00  frames of time this frame lasts (scales the blend step) */
    s16 time;                /* 0x04  start time in 1/16 frames */
    s16 qwords;              /* 0x06  size in 16-byte units */
    s16 jointBytes;          /* 0x08  the joint rotations' size: the scale keys follow (+ 0x10) */
    s16 scaleKeys;           /* 0x0a  their count */
    s16 transOffset;         /* 0x0c  where the translation keys start (+ 0x10) */
    s16 transKeys;           /* 0x0e  their count */
} MobyFrame;
typedef char MobyFrame_size_check[sizeof(MobyFrame) == 0x10 ? 1 : -1];

/* an animation sequence of a moby class (RC1's layout; DL's MobySeq has the same first 0x18) */
typedef struct MobySeq {
    BSphere bSphere;         /* 0x00 */
    u8 frameCnt;             /* 0x10 */
    s8 sound;                /* 0x11  looped while the sequence plays, -1 none */
    u8 trigsCnt;             /* 0x12 */
    u8 pad;                  /* 0x13 */
    short *trigs;            /* 0x14 */
    void *animInfo;          /* 0x18 */
    MobyFrame *frames[];     /* 0x1c  frameCnt of them */
} MobySeq;

struct MobyCollHeader { /* MobyInstance.collision (+0x94). +0x10: CollPrim[primBytes/32] (spheres/pills attached to joints); then at (this+primBytes+0x10): verts float[4][vertBytes/16] (x1024 local), then CollTri[triBytes/4]. primSetA/B = joint counts selecting prim set (COLL_ALT_PRIMSET picks A). Moby collision is in x1024 space like env. */
    short primSetA;
    short primSetB;
    int primBytes;
    int triBytes;
    int vertBytes;
};

/* a moby collision primitive (32 bytes, after the 16-byte MobyCollHeader), in 1/1024 units of
   the moby's scale */
enum CollPrimType {
    COLLPRIM_SPHERE   = 0,
    COLLPRIM_SPHERE2  = 1,
    COLLPRIM_JOINT    = 2,   /* a sphere that follows a joint */
    COLLPRIM_PILL     = 3,   /* offset plus a vertical length */
    COLLPRIM_CAPSULE  = 4,   /* between two joints */
};
typedef struct CollPrim {
    u8 collType;             /* 0x00  the type the collision queries switch on (0 and 4+ are
                                      capsules there) */
    u8 _pad01;
    union {
        s16 sets;            /* 0x02  bit 0: in the primSetB set, bit 1: in primSetA */
        struct {
            u8 _setsHi;
            u8 type;         /* 0x03  CollPrimType, as MB_GetCollPrimWorld reads it */
        };
    };
    union {
        float length;        /* 0x04  COLLPRIM_PILL */
        int joint;           /* 0x04  COLLPRIM_JOINT */
        struct {
            s16 jointA;      /* 0x04  COLLPRIM_CAPSULE */
            s16 jointB;      /* 0x06 */
        } ends;
    };
    u8 _pad08[4];
    float radius;            /* 0x0c  COLLPRIM_JOINT and COLLPRIM_CAPSULE */
    Vec4 offset;             /* 0x10  xyz offset, w radius */
} CollPrim;
typedef char CollPrim_size_check[sizeof(CollPrim) == 0x20 ? 1 : -1];

typedef double f64;

struct IceSheet {
    struct BSphere bSphere;
    int32_t meshParamA;
    float *vertexData;
    int32_t meshParamB;
    int32_t vertexCount;
};

struct Moby1267Vars { /* pVars of oClass 1267 (mounted turret used by UpdateMoby_1267). Offsets from PS3 code; no DL equivalent. */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    int targetIdx[10];
    undefined field65_0x68;
    undefined field66_0x69;
    undefined field67_0x6a;
    undefined field68_0x6b;
    undefined field69_0x6c;
    undefined field70_0x6d;
    undefined field71_0x6e;
    undefined field72_0x6f;
    short fireTimer;
    short unk72;
    float pitch;
    float pitchVel;
    float yawVel;
    int barrelSide;
    int unk84;
    int lockTimer;
    float health;
    int hitTimer;
    int bossIdx;
    int soundHandle;
    undefined field85_0x9c;
    undefined field86_0x9d;
    undefined field87_0x9e;
    undefined field88_0x9f;
    float baseZ;
    float yawSmooth;
    undefined field91_0xa8;
    undefined field92_0xa9;
    undefined field93_0xaa;
    undefined field94_0xab;
    short deathTimer;
    short shakeTimer;
};

struct moby_update { /* PlaceHolder Class Structure */
};

struct MobyAnimLayer {
    struct MobySeq *animSeq;
    float animSeqT;
    float animSpeed;
    short animIScale;
    short poseCacheEntryIndex;
    struct MobyAnimLayer *nextLayer;
    char animSeqId;
    char animFlags;
    char animJointIndexA;
    char animJointIndexB;
    float blendWeight;
    float blendFade;
};

struct MobyVTable {
    uint idx;
    void **update;
    void **exit;
};

typedef long long s64;

/* a level's environment sample point (the nearest one within 8 units lights a moby) */
typedef struct EnvSample {
    float x, y, z;           /* 0x00 */
    u32 unk0c;               /* 0x0c */
    int red;                 /* 0x10 */
    int green;               /* 0x14 */
    int blue;                /* 0x18 */
    int light;               /* 0x1c  copied to MobyInstance.light */
    u32 fogColor;            /* 0x20  guess: copied to 0x9637c4 with the next three bytes */
    u8 fog0;                 /* 0x24 */
    u8 fog1;                 /* 0x25 */
    u8 fog2;                 /* 0x26 */
    u8 setsFog;              /* 0x27 */
    int musicTrack;          /* 0x28  -1 none */
    u32 unk2c;               /* 0x2c */
} EnvSample;
typedef char EnvSample_size_check[sizeof(EnvSample) == 0x30 ? 1 : -1];

// ---- globals
extern MobyInstance *AnimationCacheRegistry[16]; /* 0xa345c0 */ /* type set in global_types.tsv */
extern undefined4 DAT_00729040; /* 0x729040 */
extern MobyInstance * MobyInstancePermEnd; /* 0xa390a4 */
extern u8 g_AnimBuffers[][0x800]; /* 0xa2c5c0: built animation frames (updateId 0xff); also the debug font's load buffer */ /* type set in global_types.tsv */
extern u8 g_AnimLayerJointBuf[6][0x1500]; /* 0xa24640 */ /* type set in global_types.tsv */
extern AnimLayer g_AnimLayerPool[6]; /* 0xa2c440 */ /* type set in global_types.tsv */
extern EnvSample *g_EnvSamples; /* 0xa4db00 */ /* type set in global_types.tsv */
extern Vec4 g_HeroLightDir; /* 0xa4c4e0: UpdateHeroLightAngle */ /* type set in global_types.tsv */
extern u8 *g_MobyDrawListEnd; /* 0xa39098 */ /* type set in global_types.tsv */
extern u8 *g_MobyDrawListStart; /* 0xa3909c: draw entries, 0xb0 bytes each */ /* type set in global_types.tsv */
extern int g_MobyShadowCount; /* 0xa49f50 (guess) */ /* type set in global_types.tsv */
extern int g_MobySkinCount; /* 0xa49b44 (guess: skinned mobys queued for STUB_000f5a7c) */ /* type set in global_types.tsv */
extern u8 *g_pMobyShadowTag; /* 0xa49f54: the shadow pass's packet tag */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_MOBYFUNC(void);
void UpdateNumSpawnableMobys(void);
void UpdateMobyFrameData(MobyInstance *moby);
void InitMobyInstance(MobyInstance *moby, int oClass);
MobyInstance *CreateMoby(int oClass);
void DeleteMoby(MobyInstance *moby);
void MobyPlayDesiredSound(MobyInstance *moby);
int MB_FindNearestAnimTrigger(MobySeq *seq, float t);
int MB_FindAnimTriggerAfter(MobySeq *seq, float t, float *frac);
float BlendAnimFrame(MobyInstance *moby);
float MB_GetAnimSeqLength(int oClass, int seq);
float MB_GetAnimSeqTriggerLength(int oClass, int seq);
int MB_GetCollPrimWorld(MobyInstance *moby, int index, u32 *type, Vec4 *center, float *radius, float *length);
void MB_SetCollPrimFromWorld(MobyInstance *moby, int index, Vec4 *pos, float radius, float length);
void MB_AddShortPairOffset(short *pair, short x, short y);
AnimLayer *MB_AllocAnimLayer(MobyInstance *moby, short joint);
void MB_FreeAnimLayer(MobyInstance *moby, AnimLayer **pLayer);
void MB_InitAnimLayerBuffer(AnimLayer *layer, int seq, int frame, MobyFrame *buf);
void MB_UpdateAnimLayer(MobyInstance *moby, AnimLayer *layer);
void MB_SyncAnimLayer(MobyInstance *moby, AnimLayer *layer);
void MB_StartAnimLayer(MobyInstance *moby, AnimLayer *layer, s8 seq, s8 frame, int frames, int update);
void AttachManipulator(MobyInstance *moby, uint32_t animJoint, Manipulator *manipulator);
void DetachManipulator(MobyInstance *pMoby, Manipulator *pManipulator);
int AnimCache_Register(MobyInstance *moby);
void CleanAnimationCache(void);
void GetBoneTransformations(MobyInstance *moby, int joint, Mtx4 *out);
void GetBonePosition(MobyInstance *moby, int joint, Vec4 *out);
void GetMobyJointsWorldPos(MobyInstance *moby, int count, int *joints, Vec4 *out);
void GetMobyJointsWorldMtx(MobyInstance *moby, int count, int *joints, Mtx4 *out);
void STUB_000f1444(void);
void STUB_000f1448(void);
void UpdateHeroLightAngle(void);
void DrawMobyShadows(void);
void STUB_000f1844(void);
void STUB_000f1848(void);
void STUB_000f184c(void);
void DrawMobyDepth(void);
void MB_AddToDrawList(MobyInstance *moby, int flags);
void DrawMobyList(void);
void DrawMobys(void);
void MB_SetLightsFromEnvSample(MobyInstance *moby);
void SetLevelFlag(int arg);
